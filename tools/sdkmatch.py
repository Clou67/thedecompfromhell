#!/usr/bin/env python3
import os, os as _os
TOOLS = _os.path.dirname(_os.path.abspath(__file__))
DATA = _os.path.join(TOOLS, 'data')
"""Match PS3 SDK static-library functions against the NPEA00385 EBOOT.

For every function in every object of every .a (and loose .o) under the SDK's PPU lib folder:
take its bytes, mask every word touched by a relocation, and compare against each function
in the game's function list of the same size.  Output: sdk_matches.tsv
"""
import struct, os, sys, glob, re, collections, json

SDK = '/home/claude/sdk400/cell/target/ppu/lib'
EBOOT = os.environ.get('EBOOT', 'EBOOT.ELF')   # decrypted NPEA00385 EBOOT
FUNCS = os.path.join(DATA, 'rc1funcs.txt')
OUT = os.path.join(TOOLS, 'sdk_matches.tsv')

# ---------------------------------------------------------------- ar archives
def ar_members(path):
    d = open(path, 'rb').read()
    if not d.startswith(b'!<arch>\n'): return
    off = 8; longnames = b''
    while off + 60 <= len(d):
        h = d[off:off + 60]; name = h[:16].decode('latin1').strip(); size = int(h[48:58].decode().strip())
        body = d[off + 60:off + 60 + size]
        if name == '//': longnames = body
        elif name in ('/', '/SYM64/', '__.SYMDEF'): pass
        else:
            if name.startswith('/') and name[1:].isdigit():
                i = int(name[1:]); name = longnames[i:longnames.index(b'\n', i)].decode('latin1')
            name = name.rstrip('/')
            yield name, body
        off += 60 + size + (size & 1)

# ---------------------------------------------------------------- ELF64 big-endian objects
def parse_obj(b):
    if b[:4] != b'\x7fELF' or b[4] != 2 or b[5] != 2: return None
    shoff, = struct.unpack_from('>Q', b, 0x28)
    shentsize, shnum, shstrndx = struct.unpack_from('>HHH', b, 0x3a)
    secs = []
    for i in range(shnum):
        nm, typ, flags, addr, off, size, link, info, align, entsize = struct.unpack_from('>IIQQQQIIQQ', b, shoff + i * shentsize)
        secs.append(dict(nm=nm, typ=typ, flags=flags, off=off, size=size, link=link, info=info, entsize=entsize))
    shstr = secs[shstrndx]
    def sname(o): return b[shstr['off'] + o:b.index(b'\0', shstr['off'] + o)].decode('latin1')
    for s in secs: s['name'] = sname(s['nm'])
    syms = []
    for s in secs:
        if s['typ'] != 2: continue  # SHT_SYMTAB
        strt = secs[s['link']]
        for k in range(s['size'] // 24):
            st_name, st_info, st_other, st_shndx, st_value, st_size = struct.unpack_from('>IBBHQQ', b, s['off'] + k * 24)
            nm = b[strt['off'] + st_name:b.index(b'\0', strt['off'] + st_name)].decode('latin1')
            syms.append((nm, st_info & 0xf, st_info >> 4, st_shndx, st_value, st_size))
    relocs = collections.defaultdict(set)    # section index -> set of word offsets touched
    for s in secs:
        if s['typ'] not in (4, 9): continue   # RELA / REL
        tgt = s['info']; ent = 24 if s['typ'] == 4 else 16
        for k in range(s['size'] // ent):
            r_off, = struct.unpack_from('>Q', b, s['off'] + k * ent)
            relocs[tgt].add(r_off & ~3)
    return secs, syms, relocs

def lib_functions():
    """yield (lib, object, symbol, bytes, masked-word-set)"""
    paths = sorted(glob.glob(SDK + '/*.a')) + sorted(glob.glob(SDK + '/*.o'))
    for p in paths:
        lib = os.path.basename(p)
        members = ar_members(p) if p.endswith('.a') else [(lib, open(p, 'rb').read())]
        for obj, body in members:
            r = parse_obj(body)
            if not r: continue
            secs, syms, relocs = r
            # functions: FUNC symbols in executable sections (SHF_EXECINSTR = 4)
            bysec = collections.defaultdict(list)
            for nm, typ, bind, shndx, val, size in syms:
                if shndx == 0 or shndx >= len(secs) or not (secs[shndx]['flags'] & 4): continue
                if typ == 2 or (typ == 0 and nm and not nm.startswith('.')):
                    bysec[shndx].append((val, size, nm, typ))
            for shndx, fl in bysec.items():
                s = secs[shndx]
                if s['typ'] == 8: continue   # NOBITS
                data = body[s['off']:s['off'] + s['size']]
                fl.sort()
                for k, (val, size, nm, typ) in enumerate(fl):
                    if size == 0:   # NOTYPE label: extends to next symbol / section end
                        size = (fl[k + 1][0] if k + 1 < len(fl) else s['size']) - val
                    if size < 8 or val + size > len(data): continue
                    mask = {o - val for o in relocs.get(shndx, ()) if val <= o < val + size}
                    yield lib, obj, s['name'], nm, data[val:val + size], mask

# ---------------------------------------------------------------- game binary
def load_game():
    img = open(EBOOT, 'rb').read()
    def at(va, n): return img[va - 0x10000: va - 0x10000 + n]
    funcs = []
    for l in open(FUNCS):
        m = re.match(r'([0-9a-f]+) (0x[0-9a-f]+) (\S+)', l)
        if m: funcs.append((int(m[1], 16), int(m[2], 16), m[3]))
    funcs.sort()
    return at, funcs

def main():
    at, funcs = load_game()
    bysize = collections.defaultdict(list)
    for a, sz, nm in funcs: bysize[sz].append(a)
    nlib = 0; hits = collections.defaultdict(list)
    for lib, obj, sec, sym, code, mask in lib_functions():
        nlib += 1
        cands = bysize.get(len(code))
        if not cands: continue
        words = [(o, code[o:o + 4]) for o in range(0, len(code), 4) if o not in mask]
        if len(words) < 3: continue
        for a in cands:
            g = at(a, len(code))
            if all(g[o:o + 4] == w for o, w in words):
                hits[a].append((lib, obj, sec, sym, len(words), len(code) // 4))
    with open(OUT, 'w') as f:
        f.write('addr\tsize\tghidra_name\tlib\tobject\tsection\tsymbol\tunmasked/words\tcandidates\n')
        for a, sz, nm in funcs:
            if a in hits:
                hs = hits[a]
                lib, obj, sec, sym, uw, tw = hs[0]
                f.write('%07x\t0x%x\t%s\t%s\t%s\t%s\t%s\t%d/%d\t%d\n' % (a, sz, nm, lib, obj, sec, sym, uw, tw, len(hs)))
    print('library functions:', nlib, ' game functions matched:', len(hits))

if __name__ == '__main__':
    main()
