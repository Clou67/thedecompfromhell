#!/usr/bin/env python3
import os, os as _os
TOOLS = _os.path.dirname(_os.path.abspath(__file__))
DATA = _os.path.join(TOOLS, 'data')
"""Build the source tree from the partition + Ghidra decompile dumps.
usage: generate.py OUTDIR"""
import re, sys, os, glob, json, collections, shutil, subprocess
sys.path.insert(0, os.path.dirname(__file__))
import partition as P

out = sys.argv[1] if len(sys.argv) > 1 else os.path.join(TOOLS, 'tree')
rows = P.load(); dest, why = P.assign(rows)

# ---- parse decompile dumps: addr -> body text
blocks = {}
for f in sorted(glob.glob(os.path.join(DATA, 'dump', '*.c'))):
    cur = None; buf = []
    for line in open(f, errors='replace'):
        m = re.match(r'//==== ([0-9a-f]+) ', line)
        if m:
            if cur is not None: blocks[cur] = buf
            cur = int(m[1], 16); buf = []
        elif cur is not None:
            buf.append(line)
    if cur is not None: blocks[cur] = buf

SPLAT_ID = re.compile(r'^[ \t]*(\w+) = \(\1 \| \1 << 0x20 \| \1 << 0x40 \| \1 << 0x60\) >> 0x60 &\s*\(undefined1\s+\[16\]\)0xffffffff;[ \t]*\n', re.M)
SPLAT = re.compile(r'\((\w+) \| \1 << 0x20 \| \1 << 0x40 \| \1 << 0x60\)')
def _top_level_binary(e):
    d = 0
    for k, c in enumerate(e):
        d += (c in '([') - (c in ')]')
        if d == 0 and k > 0 and re.match(r' (\+|-|\*|/|&|\||\^|<<|>>|<|>|==|!=|&&|\|\|) ', e[k:k + 5]): return True
    return False

def _zero_arg(arg):
    """-e == 0  <=>  e == 0 (only when '-' negates the whole operand)"""
    a = arg.strip()
    if a.startswith('-') and not a.startswith('--') and not _top_level_binary(a[1:]): a = a[1:].strip()
    return '(%s)' % a if _top_level_binary(a) else a

def lzcount_idioms(txt):
    """cntlzw-based tests the compiler emits for x == 0:
         (uint)LZCOUNT(e) >> 5      -> (e == 0)          ( ... ^ 1 -> (e != 0) )
         (LZCOUNT(e) << 0x3a) >> 0x3f  -> ZERO_MASK(e)     (all ones when e == 0: cntlzw; sldi 58; sradi 63)"""
    out = []; i = 0
    while True:
        j = txt.find('LZCOUNT(', i)
        if j < 0: out.append(txt[i:]); break
        k = j + 8; depth = 1
        while depth and k < len(txt): depth += (txt[k] == '(') - (txt[k] == ')'); k += 1
        arg = txt[j + 8:k - 1]; rest = txt[k:]
        pre = txt[i:j]
        m1 = re.match(r'\s*>>\s*5\s*\^\s*1\b', rest)
        m2 = re.match(r'\s*>>\s*5\b(?!\s*\^)', rest)
        m3 = re.match(r'\s*<<\s*0x3a\)\s*>>\s*0x3f\b', rest)
        if (m1 or m2) and pre.endswith('(uint)'):
            za = _zero_arg(arg); op = '!=' if m1 else '=='
            mk = re.match(r'^\((.*) (-|\^) (0x[0-9a-fA-F]+|\d+)\)$', za)
            if mk and not _top_level_binary(mk[1]): out.append(pre[:-6]); out.append('(%s %s %s)' % (mk[1], op, mk[3]))
            else: out.append(pre[:-6]); out.append('(%s %s 0)' % (za, op))
            i = k + (m1 or m2).end(); continue
        if m3 and pre.endswith('('):
            out.append(pre[:-1]); out.append('ZERO_MASK(%s)' % _zero_arg(arg)); i = k + m3.end(); continue
        out.append(txt[i:k]); i = k
    return ''.join(out)

FLOAT_ORDER_RE = re.compile(r'\(\s*\(uint\)\s*\(\s*\(int\)\s*(\w+)\s*>>\s*0x1f\)\s*>>\s*1\s*\^\s*(?:\(uint\)\s*)?\1\s*\)\s*-\s*\(\s*\(int\)\s*\1\s*>>\s*0x1f\s*\)')

def clean(txt):
    # vspltw that only feeds lane 0 back to itself: an identity in C
    txt = SPLAT_ID.sub('', txt)
    txt = SPLAT.sub(r'SPLAT(\1)', txt)
    txt = lzcount_idioms(txt)
    # float compared through its integer bits (sign-magnitude -> two's complement order)
    return FLOAT_ORDER_RE.sub(r'FLOAT_ORDER(\1)', txt)

def body(lines):
    o = []
    for l in lines:
        if l.startswith(('// sig:', '// callers', '// callees')): continue
        if l.startswith('/* WARNING: Unknown calling convention'): continue
        o.append(l)
    while o and not o[0].strip(): o.pop(0)
    while o and not o[-1].strip(): o.pop()
    return ''.join(o)

# ---- name mapping: game/sdk code is C-style (strip namespaces); idol keeps them
last = collections.defaultdict(set)
for a, sz, nm in rows: last[nm.split('::')[-1]].add(nm)
def cname(nm):
    nm = re.sub(r'^989snd::', 'snd989::', nm)
    ns = nm.split('::')[0] if '::' in nm else ''
    if ns in P.IDOL: return nm
    parts = nm.split('::')
    if len(last[parts[-1]]) == 1: return parts[-1]
    return '_'.join(parts[-2:])           # collision: keep nearest namespace as prefix
fullmap = {nm: cname(nm) for a, sz, nm in rows}
for a, sz, nm in rows:     # SDK-matched functions take their library symbol name
    if a in P.SDKMATCH and a >= 0x4d0000: fullmap[nm] = P.SDKMATCH[a][2]
# shared update functions are named after their first oClass
shared = {}
for a, sz, nm in rows:
    s_ = nm.split('::')[-1]
    cls = P.UPD_CLASSES.get(P.cform(s_))
    if cls and len(cls) > 1 and s_.startswith('UpdateMoby'):
        fullmap[nm] = 'UpdateMoby_%d' % min(cls); shared[a] = cls
        fullmap[s_] = fullmap[P.cform(s_)] = fullmap[nm]
tok = re.compile(r'\b\w+(?:::[A-Za-z_]\w*)+')
def fix(m):
    t = m[0]
    if t in fullmap: return fullmap[t]
    ns = t.split('::')[0]
    if ns == '989snd': return cname(t)
    return t if ns in P.IDOL or ns == 'std' else t.split('::')[-1]

shared_names = [(P.cform(nm.split('::')[-1]), fullmap[nm]) for a, sz, nm in rows if a in shared]

PIECE_DECL = re.compile(r'\bundefined1?\s+(\w+)\s*\[(\d+)\];')
PIECE_CAST = re.compile(r'\(undefined1\s*\[(\d+)\]\)')
PIECE_ACC = re.compile(r'\._(\d+)_(\d+)_\b')
def pieces(txt):
    """Ghidra's N-byte blobs and partial accessors -> GPiece<N> (see prelude.h)"""
    txt = PIECE_DECL.sub(lambda m: 'GPiece<%s> %s;' % (m[2], m[1]), txt)
    txt = PIECE_CAST.sub(lambda m: '(GPiece<%s>)' % m[1], txt)
    return PIECE_ACC.sub(lambda m: '.piece<%s,%s>()' % (m[1], m[2]), txt)

def legal(txt):
    """Ghidra identifiers that are not legal C/C++."""
    txt = pieces(txt)
    if '__thiscall' in txt:
        txt = txt.replace('__thiscall ', '')
        txt = re.sub(r'\bthis\b', 'this_', txt)
    txt = re.sub(r'\?\?\?_', 'unk_', txt)
    # parameter names that are C++ keywords (e.g. "double double")
    txt = re.sub(r'(?<=[\w\*] )(double|float|int|char|short|long|bool|new|delete|class|template|operator|namespace|default|register|this)(?=\s*[,)])', r'\1_', txt)
    txt = re.sub(r'(\w)\?', r'\1_q', txt)
    return txt

DEF = re.compile(r'^((?:[A-Za-z_][\w \*]*\n)?[A-Za-z_][^;{}/]*?\))[ \t]*\n\s*\n?\{', re.M)
# hand-corrected prototypes:  c_name <TAB> full prototype (no trailing ';')
PROTOS = {}
if os.path.exists(os.path.join(TOOLS, 'prototypes.tsv')):
    for _l in open(os.path.join(TOOLS, 'prototypes.tsv')):
        _l = _l.split('#')[0].rstrip('\n')
        if '\t' in _l: _k, _v = _l.split('\t', 1); PROTOS[_k.strip()] = _v.strip()
# global identifier renames:  old <TAB> new   (names you'd normally set in Ghidra)
RENAMES = {}
if os.path.exists(os.path.join(TOOLS, 'renames.tsv')):
    for _l in open(os.path.join(TOOLS, 'renames.tsv')):
        _l = _l.split('#')[0].rstrip('\n')
        if '\t' in _l: _k, _v = _l.split('\t', 1); RENAMES[_k.strip()] = _v.strip()
# globals that Ghidra had as byte arrays and that are now arrays of structs: rewrite its
# .piece<offset,size>() accesses to element fields.  pieces.tsv: name <TAB> stride <TAB> off:field,...
PIECE_ARRAYS = []
if os.path.exists(os.path.join(TOOLS, 'pieces.tsv')):
    for _l in open(os.path.join(TOOLS, 'pieces.tsv')):
        _l = _l.split('#')[0].strip()
        if not _l: continue
        _n, _st, _fs = _l.split('\t')
        _fields = {int(k, 0): v for k, v in (f.split(':') for f in _fs.split(','))}
        def _mk(n=_n, st=int(_st, 0), fields=_fields):
            rx = re.compile(r'\b%s\.piece<(\d+),\d+>\(\)' % re.escape(n))
            def rep(m):
                off = int(m[1]); f = fields.get(off % st)
                return '%s[%d].%s' % (n, off // st, f) if f else m[0]
            return lambda t: rx.sub(rep, t)
        PIECE_ARRAYS.append(_mk())
RENAME_RE = re.compile(r'\b(%s)\b' % '|'.join(map(re.escape, RENAMES))) if RENAMES else None
# ---- build every function's text
files = collections.defaultdict(list)
for (a, sz, nm), d, w in zip(rows, dest, why): files[d].append((a, sz, nm, w))
texts = {}
for a, sz, nm in rows:
    if a not in blocks: continue
    txt = legal(clean(tok.sub(fix, body(blocks[a]))))
    for old, new in shared_names: txt = re.sub(r'\b%s\b' % re.escape(old), new, txt)
    cn = fullmap[nm]
    if cn.startswith('STUB_') and cn not in PROTOS:   # stubbed-out PS2 code ignores its arguments
        m = DEF.search(txt)
        if m: txt = txt[:m.start(1)] + re.sub(r'\([^()]*\)\s*$', '(...)', m[1]) + txt[m.end(1):]
    if cn in PROTOS:   # rewrite the definition line to the corrected prototype
        m = DEF.search(txt)
        if m: txt = txt[:m.start(1)] + PROTOS[cn] + txt[m.end(1):]
    if RENAME_RE: txt = RENAME_RE.sub(lambda m: RENAMES[m[1]], txt)
    for _pr in PIECE_ARRAYS: txt = _pr(txt)
    texts[a] = txt

def prototype(txt):
    m = DEF.search(txt)
    return re.sub(r'\s+', ' ', m[1]).strip() if m else None
def wrap_ns(proto):
    """'void idol::draw::Foo(int)' -> 'namespace idol { namespace draw { void Foo(int); } }'"""
    m = re.match(r'(.*?)\b((?:\w+::)+)(\w+\s*\(.*)$', proto)
    if not m: return proto + ';'
    nss = m[2].rstrip(':').split('::')
    return ''.join('namespace %s { ' % n for n in nss) + m[1] + m[3] + '; ' + '} ' * len(nss)

# ---- globals: every data symbol the bodies reference
D = json.load(open(os.path.join(DATA, 'decls.json')))
data_by = {}
for addr, nm, disp, path, ln in D['data']:
    if not nm: continue
    cn = legal(nm.split('::')[-1])
    data_by.setdefault(cn, (addr, disp, ln))
# user labels with no defined data under them (e.g. CONST_1.0f) -> Ghidra prints them with '.' as '_'
for _l in open(os.path.join(DATA, 'labels.tsv')):
    _p = _l.rstrip('\n').split('\t')
    if len(_p) < 2: continue
    _cn = re.sub(r'\W', '_', legal(_p[1].split('::')[-1]))
    if _cn not in data_by: data_by[_cn] = (int(_p[0], 16), (_p[2] if len(_p) > 2 and _p[2] else 'undefined4'), 4)
data_by_addr = {v[0]: v for v in data_by.values()}
func_names = {fullmap[nm].split('::')[-1] for a, sz, nm in rows}
def cdecl(name, disp, ln):
    disp = disp.strip()
    if disp in ('string', 'TerminatedCString', 'ds', 'unicode', 'char[]') or disp.startswith('string'):
        return 'char %s[%d]' % (name, max(ln, 1))
    m = re.match(r'^(.*?)((?:\[\d+\])+)$', disp)
    if m: return '%s %s%s' % (legal(m[1]).strip(), name, m[2])
    if '(' in disp or not re.match(r'^[\w\s\*]+$', disp): return 'undefined %s[%d]' % (name, max(ln, 1))
    return '%s %s' % (legal(disp), name)
ident = re.compile(r'\b(_?DAT_[0-9a-f]{6,8}|PTR_\w+|stack0x[0-9a-f]+|[A-Za-z_]\w*)\b')
used = set()
for t in texts.values(): used.update(ident.findall(t))
for _root, _, _fs in os.walk(os.path.join(TOOLS, 'manual')):
    for _f in _fs:
        if _f.endswith(('.cpp', '.h')): used.update(ident.findall(open(os.path.join(_root, _f)).read()))
# globals that share a name with a type get a g_ prefix (variable-style uses only)
tsrc = open(os.path.join(DATA, 'rc1_types_full.h')).read()
type_names = set(re.findall(r'\b(?:struct|union|enum)\s+(\w+)', tsrc))
for td in re.findall(r'typedef([^;{}]*);', tsrc):
    for part in td.split(','):
        mm = re.search(r'(\w+)\s*(?:\[[^\]]*\])?\s*$', part)
        if mm: type_names.add(mm[1])
clash = {n for n in used if n in data_by and n in type_names}
if clash:
    # a use is the type when followed by '*', '&' or a name (declarations, casts) or preceded by struct/union/enum;
    # anything else (assignments, comparisons, indexing, member access) is the global variable
    alts = '|'.join(map(re.escape, sorted(clash, key=len, reverse=True)))
    pat = re.compile(r'(?<!struct )(?<!union )(?<!enum )\b(%s)\b(?!\s*[\*&\w(])' % alts)
    for a in texts: texts[a] = pat.sub(lambda m: 'g_' + m[1], texts[a])
# hand-set types for globals Ghidra left untyped:  name <TAB> C declaration with NAME as placeholder, e.g.
#   DAT_00902ec8	WaterTile *NAME
GTYPES = {}
if os.path.exists(os.path.join(TOOLS, 'global_types.tsv')):
    for _l in open(os.path.join(TOOLS, 'global_types.tsv')):
        _l = _l.split('#')[0].rstrip('\n')
        if '\t' in _l: _k, _v = _l.split('\t', 1); GTYPES[_k.strip()] = _v.strip()
glob_lines = []
for name in sorted(used):
    if name in GTYPES:
        _d = GTYPES[name].replace('NAME', name); _c = ''
        _m = re.match(r'^(.*?)\s*(/\*.*\*/)\s*$', _d)
        if _m: _d, _c = _m[1], ' ' + _m[2]
        glob_lines.append('extern %s;%s /* type set in global_types.tsv */' % (_d, _c)); continue
    if name in func_names: continue
    if name in data_by:
        addr, disp, ln = data_by[name]
        if disp.strip() == name and name not in type_names: continue   # ELF metadata named after its own (unexported) type
        glob_lines.append('extern %s; /* 0x%x */' % (cdecl(('g_' + name) if name in clash else name, disp, ln), addr))
    elif re.match(r'DAT_[0-9a-f]+$', name):
        glob_lines.append('extern undefined4 %s; /* no defined data */' % name)
    elif re.match(r'_DAT_[0-9a-f]+$', name):    # value read straight from an address (often a .rodata constant)
        addr = int(name[5:], 16); hit = data_by_addr.get(addr)
        glob_lines.append('extern %s; /* direct read */' % (cdecl(name, hit[1], hit[2]) if hit else 'undefined4 %s' % name))
    elif re.match(r'stack0x[0-9a-f]+$', name):  # Ghidra's name for an incoming-stack slot
        glob_lines.append('extern undefined1 %s[16]; /* stack slot, not a real global */' % name)

# names the SDK's system headers already declare (sysdecl_names.txt, from clang -E of SYSINC)
SYSDECL = set(open(os.path.join(DATA, 'sysdecl_names.txt')).read().split())
# ---- emit
os.makedirs(out, exist_ok=True)
man = open(os.path.join(out, 'MANIFEST.tsv'), 'w'); man.write('addr\tsize\tghidra_name\tc_name\tfile\tbasis\n')
missing = 0; headers = []
for d, fl in sorted(files.items()):
    p = os.path.join(out, d); os.makedirs(os.path.dirname(p), exist_ok=True)
    lo, hi = fl[0][0], fl[-1][0] + fl[-1][1]
    hdr = d[:-4] + '.h'; headers.append(hdr)
    with open(p, 'w') as fh, open(os.path.join(out, hdr), 'w') as hh:
        fh.write('// %s -- reconstructed from NPEA00385 EBOOT\n// STATUS: NOT STARTED (raw Ghidra output)\n// %d functions, 0x%x-0x%x\n' % (d, len(fl), lo, hi))
        for c in P.META.get(d, []): fh.write('// %s\n' % c)
        fh.write('#include "rc1.h"\n\n')
        hh.write('#pragma once\n// prototypes for %s\n' % d)
        for a, sz, nm, w in fl:
            man.write('%07x\t0x%x\t%s\t%s\t%s\t%s\n' % (a, sz, nm, fullmap[nm], d, w))
            if a not in texts:
                missing += 1; fh.write('// 0x%07x %s: NOT DECOMPILED\n\n' % (a, fullmap[nm])); continue
            txt = texts[a]
            pr = prototype(txt)
            sys_decl = fullmap[nm].split('::')[-1] in SYSDECL   # declared by the SDK's own headers
            if pr and not sys_decl: hh.write(wrap_ns(pr) + '\n')
            if a in P.SDKMATCH and a >= 0x4d0000:
                lib, obj, sym, dem, basis = P.SDKMATCH[a]
                fh.write('// SDK %s(%s): %s  [%s match]\n' % (lib, obj, dem, basis))
            if a in shared: fh.write('// shared update function, registered for oClasses %s\n' % ', '.join(map(str, shared[a])))
            fh.write('// 0x%07x (0x%x bytes)\n%s\n\n' % (a, sz, txt))
man.close()
# hand-cleaned files (manual/<path>) replace the generated ones; their headers come from their own definitions
MANUAL = os.path.join(TOOLS, 'manual')
nman = 0
for root, _, fs in os.walk(MANUAL):
    for f in fs:
        src = os.path.join(root, f); rel = os.path.relpath(src, MANUAL)
        t = open(src).read()
        if rel.endswith('.cpp') and '// MERGE' in t.split('\n// 0x', 1)[0]:
            # partly cleaned: the manual file's functions replace the generated ones with the same address,
            # the rest stay generated (and keep getting generator fixes)
            gen = open(os.path.join(out, rel)).read()
            FN = re.compile(r'^// 0x([0-9a-f]{7}) \(', re.M)
            def split(x):
                ms = list(FN.finditer(x))
                head = x[:ms[0].start()] if ms else x
                return head, {int(m[1], 16): x[m.start():(ms[k + 1].start() if k + 1 < len(ms) else len(x))] for k, m in enumerate(ms)}
            mh, mf = split(t); gh, gf = split(gen)
            done = sum(1 for a in gf if a in mf)
            mh = mh.replace('// MERGE', '// MERGE (%d of %d functions cleaned; the rest are generated)' % (done, len(gf)), 1)
            t = mh + ''.join(mf.get(a, b).rstrip('\n') + '\n\n\n' for a, b in sorted(gf.items()))
        open(os.path.join(out, rel), 'w').write(t); nman += 1
        if rel.endswith('.cpp'):
            protos = [wrap_ns(re.sub(r'\s+', ' ', m[1]).strip()) for m in DEF.finditer(t)]
            protos = [x for x in protos if x.split('(')[0].split()[-1].lstrip('*') not in SYSDECL and not x.startswith('static')]
            open(os.path.join(out, rel[:-4] + '.h'), 'w').write('#pragma once\n// prototypes for %s (hand-cleaned)\n' % rel + '\n'.join(protos) + '\n')
print('manual files', nman)
shutil.copy(os.path.join(TOOLS, 'prelude.h'), os.path.join(out, 'prelude.h'))
avoid = os.path.join(out, '.globals_names')
open(avoid, 'w').write('\n'.join(re.search(r'(\w+)\s*(?:\[[^\]]*\])*\s*;', l)[1] for l in glob_lines))
subprocess.run(['python3', os.path.join(TOOLS, 'fixtypes.py'), os.path.join(DATA, 'rc1_types_full.h'), os.path.join(out, 'ghidra_types.h'), avoid], check=True)
os.remove(avoid)
open(os.path.join(out, 'types.h'), 'w').write('#pragma once\n#include "prelude.h"\n#include "ghidra_types.h"\n')
open(os.path.join(out, 'globals.h'), 'w').write('#pragma once\n#include "types.h"\n// globals referenced by the code, typed from the Ghidra project\n' + '\n'.join(glob_lines) + '\n')
SYSINC = ['string.h', 'stdlib.h', 'stdio.h', 'math.h', 'time.h', 'ctype.h']
open(os.path.join(out, 'rc1.h'), 'w').write('#pragma once\n' + ''.join('#include <%s>\n' % h for h in SYSINC) +
    '#include "types.h"\n#include "globals.h"\n' + ''.join('#include "%s"\n' % h for h in headers))
open(os.path.join(out, 'check.sh'), 'w').write('''#!/bin/bash
# syntax-check files against the PS3 SDK headers (clang, 32-bit big-endian PowerPC layout)
# usage: ./check.sh game/water.cpp [more files...]      SDK=/path/to/cell (default below)
SDK=${SDK:?set SDK=/path/to/cell (your PS3 SDK folder)}
cd "$(dirname "$0")"
for f in "$@"; do
  n=$(clang++ --target=powerpc64-unknown-lv2 -D__LP32__ -ffreestanding -nostdinc -fsyntax-only -ferror-limit=0 -w \\
      -isystem $SDK/target/ppu/include -isystem $SDK/target/common/include -isystem "$(clang -print-resource-dir)/include" \\
      -D__PPU__ -D__CELLOS_LV2__ -I. "$f" 2>&1 | grep -c "error:")
  echo "$n	$f"
done
''')
os.chmod(os.path.join(out, 'check.sh'), 0o755)
print('files', len(files), 'functions', len(rows), 'missing', missing, 'globals', len(glob_lines))
# per-module headers + real includes (see restructure.py)
subprocess.run(['python3', os.path.join(os.path.dirname(os.path.abspath(__file__)), 'restructure.py'), out], check=True)
# original instructions next to each .cpp (the reference when cleaning)
_dis = os.path.join(DATA, 'eboot.dis')   # optional: llvm-objdump -d --no-show-raw-insn --triple=powerpc64-unknown-linux-gnu --mattr=+altivec EBOOT.ELF > data/eboot.dis; python3 fixdis.py EBOOT.ELF data/eboot.dis
if os.path.exists(_dis):
    subprocess.run(['python3', os.path.join(os.path.dirname(os.path.abspath(__file__)), 'asmlist.py'), out, _dis], check=True)
