#!/usr/bin/env python3
import os, os as _os
TOOLS = _os.path.dirname(_os.path.abspath(__file__))
DATA = _os.path.join(TOOLS, "data")
"""Split the monolithic headers into per-module headers and give every .cpp real includes.

  types.h            Ghidra primitives + prelude + forward declarations + types used all over (vec4, ...)
  <module>.h         types owned by the module, its globals (extern), its function prototypes
  <file>.cpp         includes its own header + the headers owning what it uses
                     (update files always include mobyfunc.h and mobyutil.h)

Ownership: a Ghidra category that names a module wins; otherwise the module that uses the
type/global most (prototypes count more than bodies); types used by many modules go to types.h.
usage: restructure.py TREE
"""
import os, re, sys, json, glob, collections

T = sys.argv[1]
HERE = os.path.dirname(os.path.abspath(__file__))
DATA = os.path.join(HERE, 'data') if os.path.isdir(os.path.join(HERE, 'data')) else HERE
IDENT = re.compile(r'\b[A-Za-z_]\w*\b')
COMMON_MIN_MODULES = 12          # a type used by this many modules lives in types.h
UPDATE_BASE = ['game/mobyfunc.h', 'game/mobyutil.h']

def read(p): return open(os.path.join(T, p)).read()
def write(p, s): open(os.path.join(T, p), 'w').write(s)

# ---------------------------------------------------------------- modules
cpps = sorted(os.path.relpath(p, T) for p in glob.glob(T + '/**/*.cpp', recursive=True))
cpps = [c for c in cpps if not c.startswith('tools/') and c not in ('hdr_check.cpp',)]
mod_of_cpp = {c: c[:-4] for c in cpps}
body = {m: read(c) for c, m in mod_of_cpp.items()}
protos = {m: [l for l in read(m + '.h').splitlines() if l and not l.startswith(('#', '//'))]
          for m in body if os.path.exists(os.path.join(T, m + '.h'))}
def is_update(m): return '/update/' in m

# ---------------------------------------------------------------- types: parse ghidra_types.h into blocks
src = read('ghidra_types.h').split('\n')
prim, fwd, blocks = [], [], []          # blocks: dict(name, text)
i = 0
while i < len(src):
    l = src[i]
    if re.match(r'^typedef (struct|union|enum) (\w+) \2(, \*\w+)?;', l): fwd.append(l); i += 1; continue
    m = re.match(r'^(?:typedef )?(struct|union|enum) (\w+) \{', l)
    if m:
        j = i
        while not re.match(r'^\}\s*(\w+)?\s*;', src[j]): j += 1
        tail = re.match(r'^\}\s*(\w+)?\s*;', src[j])
        name = tail[1] or m[2]
        blocks.append(dict(name=name, alt={m[2], name}, text='\n'.join(src[i:j + 1]))); i = j + 1; continue
    m = re.match(r'^typedef .*?\b(\w+)\s*(\[[^\]]*\])?\s*;\s*$', l) or re.match(r'^typedef .*\(\s*\*?\s*(\w+)\)\s*\(.*\);\s*$', l)
    if m and not blocks and not re.search(r'\b(struct|union|enum)\b', l):
        prim.append(l); i += 1; continue
    if m:
        blocks.append(dict(name=m[1], alt={m[1]}, text=l)); i += 1; continue
    if l.strip() and not l.startswith(('/*', '//', ' *', '*/')) and blocks and l.strip() != '':
        blocks[-1]['text'] += '\n' + l           # stray continuation (comments etc.)
    elif blocks and l.startswith(('/*', '//')): pass
    i += 1
# hand-corrected type definitions: type_defs/<Name>.h replaces Ghidra's block of that name
TD = os.path.join(HERE, 'type_defs')
if os.path.isdir(TD):
    have = set()
    for b in blocks:
        f = os.path.join(TD, b['name'] + '.h')
        if os.path.exists(f): b['text'] = open(f).read().strip(); have.add(b['name'])
    # types that are not in the Ghidra project yet: added as new blocks (they carry their own typedef)
    for f in sorted(os.listdir(TD)):
        n = f[:-2]
        if f.endswith('.h') and n not in have:
            blocks.append(dict(name=n, alt={n}, text=open(os.path.join(TD, f)).read().strip()))
# hand-assigned owners:  type <TAB> module   (e.g. PointLight<TAB>game/lights)
TOWN = {}
if os.path.exists(os.path.join(HERE, 'type_owners.tsv')):
    for _l in open(os.path.join(HERE, 'type_owners.tsv')):
        _l = _l.split('#')[0].rstrip('\n')
        if '\t' in _l: _k, _v = _l.split('\t', 1); TOWN[_k.strip()] = _v.strip()
tname = {}
for k, b in enumerate(blocks):
    for n in b['alt']: tname.setdefault(n, k)

def deps(text, own=()):
    """(by-value deps, all deps) on other type blocks"""
    val, allr = set(), set()
    for m in IDENT.finditer(text):
        n = m[0]
        if n not in tname or n in own: continue
        k = tname[n]; allr.add(k)
        after = text[m.end():m.end() + 4]
        if not re.match(r'\s*\*', after): val.add(k)
    return val, allr

# category hint
cat = {}
if os.path.exists(os.path.join(DATA, 'typepaths.json')):
    for name, path, kind in json.load(open(os.path.join(DATA, 'typepaths.json'))):
        b = os.path.basename(path.split('/')[1] if path.count('/') >= 1 and len(path) > 1 else '')
        cat[name] = re.sub(r'\.h$', '', b)
modbase = collections.defaultdict(list)
for m in body:
    if not is_update(m): modbase[os.path.basename(m)].append(m)

# usage of each type per module
use = collections.defaultdict(collections.Counter)      # block -> module -> weight
for m in body:
    for n in IDENT.findall(body[m]):
        if n in tname: use[tname[n]][m] += 1
    for p in protos.get(m, []):
        for n in IDENT.findall(p):
            if n in tname: use[tname[n]][m] += 5
# a type named after a module stem belongs to it (Tfrag -> tfragfunc, ShrubInstance -> shrubfunc, Hero -> hero)
STEM_SUFFIX = re.compile(r'(func|proc|upd|util|utils)$')
stems = collections.defaultdict(list)
for m in body:
    if is_update(m) or m.startswith('sdk/'): continue
    st = STEM_SUFFIX.sub('', os.path.basename(m)).lower()
    if len(st) >= 3 and not st.endswith('unk'): stems[st].append(m)
PREFER = {'moby': 'game/mobyfunc', 'part': 'game/partupd', 'cam': 'game/camera'}
def stem_owner(name):
    low = name.lower().lstrip('_')
    best = None
    for st, ms in stems.items():
        if low.startswith(st) and (best is None or len(st) > len(best[0])): best = (st, ms)
    if not best: return None
    st, ms = best
    if st in PREFER and os.path.exists(os.path.join(T, PREFER[st] + '.cpp')): return PREFER[st]
    return sorted(ms, key=len)[0]
owner = {}
for k, b in enumerate(blocks):
    if b['name'] in TOWN: owner[k] = TOWN[b['name']]; continue
    so = stem_owner(b['name'])
    if so: owner[k] = so; continue
    c = cat.get(b['name'])
    u = use[k]
    mods = [m for m in u if not is_update(m)]
    if c and c in modbase and len(modbase[c]) == 1: owner[k] = modbase[c][0]
    elif len(set(u)) >= COMMON_MIN_MODULES or not u: owner[k] = 'types'
    elif mods: owner[k] = max(mods, key=lambda m: u[m])
    else: owner[k] = max(u, key=lambda m: u[m])
# types.h keeps only the basics: a common type that embeds a module's type by value moves to that module
changed = True
while changed:
    changed = False
    for k, b in enumerate(blocks):
        if owner[k] != 'types': continue
        for d in deps(b['text'], b['alt'])[0]:
            if owner[d] != 'types': owner[k] = owner[d]; changed = True; break

# ---------------------------------------------------------------- globals
gl = {}
for l in read('globals.h').splitlines():
    m = re.match(r'extern (.*?)\b(\w+)\s*((?:\[[^\]]*\])*)\s*;(.*)$', l)
    if m: gl[m[2]] = l
guse = collections.defaultdict(collections.Counter)
for m in body:
    for n in IDENT.findall(body[m]):
        if n in gl: guse[n][m] += 1
gowner = {}
for n in gl:
    if n in TOWN: gowner[n] = TOWN[n]; continue
    u = guse[n]; mods = [m for m in u if not is_update(m)]
    pref = [m for m in mods if os.path.basename(m).lower() in n.lower()]
    gowner[n] = (pref and max(pref, key=lambda m: u[m])) or (mods and max(mods, key=lambda m: u[m])) or (u and max(u, key=lambda m: u[m])) or 'types'

# ---------------------------------------------------------------- function owners
fowner = {}; fproto = {}
for m, ps in protos.items():
    for p in ps:
        mm = re.search(r'\b(\w+)\s*\(', p.replace('namespace ', 'ns '))
        if mm: fowner.setdefault(mm[1], m); fproto.setdefault(mm[1], p)

# system headers: which SDK header declares which name
sysdecl = {}
if os.path.exists(os.path.join(DATA, 'sysdecl_by_header.json')):
    sysdecl = json.load(open(os.path.join(DATA, 'sysdecl_by_header.json')))
KW = {'if', 'while', 'for', 'switch', 'return', 'sizeof', 'do', 'else', 'case', 'defined', 'alignof', '__attribute__', 'decltype',
      'static_assert', 'void', 'int', 'char', 'short', 'long', 'float', 'double', 'unsigned', 'signed', 'const', 'static', 'inline',
      'struct', 'union', 'enum', 'typedef', 'break', 'continue', 'goto', 'default', 'bool', 'true', 'false', 'volatile', 'extern'}
sysdecl = {h: set(v) - KW for h, v in sysdecl.items()}

# ---------------------------------------------------------------- header contents
hdr_types = collections.defaultdict(list)
for k in range(len(blocks)): hdr_types[owner[k]].append(k)
hdr_globals = collections.defaultdict(list)
for n, m in gowner.items(): hdr_globals[m].append(gl[n])

def hfile(m): return 'types.h' if m == 'types' else m + '.h'

def header_includes(m, text):
    inc = set()
    val, _ = deps(text)
    for k in val:
        o = owner[k]
        if o != m and o != 'types': inc.add(hfile(o))
    return inc

hdr_text, hdr_inc = {}, {}
for m in set(list(body) + [o for o in hdr_types if o != 'types']):
    tparts = [blocks[k]['text'] for k in hdr_types.get(m, [])]
    parts = tparts + hdr_globals.get(m, []) + protos.get(m, [])
    hdr_text[m] = parts
    hdr_inc[m] = header_includes(m, '\n'.join(parts))
# break include cycles: if A and B include each other by value, move the needed types to types.h
def reach(a, b, seen=None):
    seen = seen or set()
    for h in hdr_inc.get(a, ()):
        hm = h[:-2]
        if hm == b: return True
        if hm not in seen: seen.add(hm);
        if hm not in seen or True:
            pass
    return False
for _ in range(5):
    moved = False
    for a in list(hdr_inc):
        for h in list(hdr_inc[a]):
            b = h[:-2]
            if hfile(a) in hdr_inc.get(b, ()):          # 2-cycle
                for k in deps('\n'.join(hdr_text[a]))[0]:
                    if owner[k] == b: owner[k] = 'types'; moved = True
    if not moved: break
    hdr_types = collections.defaultdict(list)
    for k in range(len(blocks)): hdr_types[owner[k]].append(k)
    for m in hdr_text:
        parts = [blocks[k]['text'] for k in hdr_types.get(m, [])] + hdr_globals.get(m, []) + protos.get(m, [])
        hdr_text[m] = parts; hdr_inc[m] = header_includes(m, '\n'.join(parts))

# closure: whatever a types.h type embeds by value must be in types.h as well
changed = True
while changed:
    changed = False
    for k, b in enumerate(blocks):
        if owner[k] != 'types': continue
        for d in deps(b['text'], b['alt'])[0]:
            if owner[d] != 'types': owner[d] = 'types'; changed = True
# hand-assigned owners always win; a types.h type that embeds one by value follows it out
for k, b in enumerate(blocks):
    if b['name'] in TOWN: owner[k] = TOWN[b['name']]
changed = True
while changed:
    changed = False
    for k, b in enumerate(blocks):
        if owner[k] != 'types': continue
        for d in deps(b['text'], b['alt'])[0]:
            if owner[d] != 'types': owner[k] = owner[d]; changed = True; break
hdr_types = collections.defaultdict(list)
for k in range(len(blocks)): hdr_types[owner[k]].append(k)
for m in hdr_text:
    parts = [blocks[k]['text'] for k in hdr_types.get(m, [])] + hdr_globals.get(m, []) + protos.get(m, [])
    hdr_text[m] = parts; hdr_inc[m] = header_includes(m, '\n'.join(parts))

# ---------------------------------------------------------------- write headers
common = [blocks[k]['text'] for k in range(len(blocks)) if owner[k] == 'types']
write('types.h', '#pragma once\n// common types: Ghidra primitives, Ghidra-isms (prelude.h), forward declarations, shared math types\n'
      '#include "prelude.h"\n\n' + '\n'.join(prim) + '\n\n// forward declarations\n' + '\n'.join(fwd) + '\n\n'
      + '\n\n'.join(common) + '\n\n' + '\n'.join(hdr_globals.get('types', [])) + '\n')
nh = 0
for m, parts in hdr_text.items():
    inc = sorted(hdr_inc[m])
    tk = [blocks[k]['text'] for k in hdr_types.get(m, [])]
    s = '#pragma once\n// %s.h\n#include "types.h"\n' % m + ''.join('#include "%s"\n' % h for h in inc)
    if tk: s += '\n// ---- types\n' + '\n\n'.join(tk) + '\n'
    if hdr_globals.get(m): s += '\n// ---- globals\n' + '\n'.join(hdr_globals[m]) + '\n'
    if protos.get(m): s += '\n// ---- functions\n' + '\n'.join(protos[m]) + '\n'
    os.makedirs(os.path.dirname(os.path.join(T, m + '.h')), exist_ok=True)
    write(m + '.h', s); nh += 1

# ---------------------------------------------------------------- .cpp includes
def code_only(t):
    t = re.sub(r'/\*.*?\*/', ' ', t, flags=re.S)
    t = re.sub(r'//[^\n]*', ' ', t)
    t = re.sub(r'"(?:\\.|[^"\\])*"', '""', t)
    return re.sub(r'(?:\.|->)\s*[A-Za-z_]\w*', ' ', t)          # member names are not globals/functions
for c, m in mod_of_cpp.items():
    s = body[m]
    s_code = code_only(s)
    need = set()
    if is_update(m): need.update(h for h in UPDATE_BASE if os.path.exists(os.path.join(T, h)))
    sysh = set()
    for n in set(IDENT.findall(s_code)):
        if n in tname and owner[tname[n]] != 'types': need.add(hfile(owner[tname[n]]))
        if n in gowner and gowner[n] != 'types': need.add(hfile(gowner[n]))
        if n in fowner: need.add(hfile(fowner[n]))
        for h, names in sysdecl.items():
            if n in names: sysh.add(h)
    # types reached through members (moby->path->spline->...) need their headers too: 2 levels
    used = {tname[n] for n in set(IDENT.findall(s)) if n in tname}
    # types named in the declarations of the globals/functions this file uses (Splines[i]->points ...)
    for n in set(IDENT.findall(s)):
        decl = gl.get(n) or fproto.get(n)
        if decl: used |= {tname[x] for x in IDENT.findall(decl) if x in tname}
    for _ in range(2):
        nxt = set()
        for k in used: nxt |= deps(blocks[k]['text'], blocks[k]['alt'])[1]
        used |= nxt
    for k in used:
        if owner[k] != 'types': need.add(hfile(owner[k]))
    need.discard(m + '.h')
    inc = ''.join('#include <%s>\n' % h for h in sorted(sysh)) + '#include "%s.h"\n' % m + ''.join('#include "%s"\n' % h for h in sorted(need))
    s = s.replace('#include "rc1.h"\n', inc, 1)
    write(c, s)

for f in ('globals.h', 'ghidra_types.h', 'rc1.h'):
    if os.path.exists(os.path.join(T, f)): os.remove(os.path.join(T, f))
print('headers', nh, 'types: common %d, in modules %d; globals %d' %
      (sum(1 for k in owner if owner[k] == 'types'), sum(1 for k in owner if owner[k] != 'types'), len(gl)))
