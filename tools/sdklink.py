#!/usr/bin/env python3
import os, os as _os
TOOLS = _os.path.dirname(_os.path.abspath(__file__))
DATA = _os.path.join(TOOLS, 'data')
"""Drop the SDK objects the game links from the tree (after restructure.py).

An object under sdk/<lib>/ that sdk_final.tsv matched is linked from the SDK library, so its
decompiled .cpp/.h/.s go away. What the rest of the tree still needs from those headers
(types, globals, and prototypes the SDK headers don't declare, such as C++ functions called
by their mangled names) is gathered into sdk/linked.h, and includes are pointed there.
Names the SDK headers declare come from the headers (restructure.py adds those includes).
libscream is kept: the game's SCREAM is its own build (see REVISIT.md).
usage: sdklink.py TREE"""
import os, re, sys, glob, json
T = sys.argv[1]
HERE = TOOLS
sys.path.insert(0, HERE)
import partition as P
IDENT = re.compile(r'\b[A-Za-z_]\w*\b')
SYSDECL = set(open(os.path.join(DATA, 'sysdecl_names.txt')).read().split())
KEEP = ('sdk/libscream/',)

linked = sorted({P.sdk_file(lib, obj) for a, (lib, obj, *_r) in P.SDKMATCH.items() if a >= 0x4d0000})
linked = [m[:-4] for m in linked if not m.startswith(KEEP) and os.path.exists(os.path.join(T, m))]
lset = set(linked)

def rd(p): return open(os.path.join(T, p)).read()
# what the remaining tree uses
rest = [p for p in glob.glob(T + '/**/*.[ch]*', recursive=True)
        if p.endswith(('.cpp', '.h')) and os.path.relpath(p, T)[:-len(os.path.splitext(p)[1])] not in lset]
used = set()
for p in rest: used |= set(IDENT.findall(open(p).read()))

PROTO = re.compile(r'^[^#/\s{}][^;{}]*\b(\w+)\s*\([^;{}]*\)\s*;\s*$')
incs, other, protos = [], [], []
for m in linked:
    h = rd(m + '.h')
    body = h.split('\n')
    i = 0
    while i < len(body):
        l = body[i]
        if l.startswith('#pragma once') or (l.startswith('//') and 'prototypes for' in l): i += 1; continue
        if l.startswith('#include'):
            inc = re.search(r'["<](.+)[">]', l)[1]
            if inc[:-2] not in lset and l not in incs: incs.append(l)
            i += 1; continue
        pm = PROTO.match(l)
        if pm and '(*' not in l.split(pm[1])[0]:
            n = pm[1]
            if n in used and n not in SYSDECL:
                protos.append(('extern "C" ' if n.startswith('_Z') else '') + l)
            i += 1; continue
        other.append(l); i += 1
out = ['#pragma once',
       '// What the tree still uses from the SDK objects it links (see sdklink.py): types, globals,',
       '// and functions the SDK headers do not declare (C++ ones by their mangled names).']
out += incs + [l for l in other if l.strip()] + protos
open(os.path.join(T, 'sdk/linked.h'), 'w').write('\n'.join(out) + '\n')

# includes -> sdk/linked.h
INC = re.compile(r'#include "(sdk/[^"]+)\.h"\n')
for p in rest:
    s = open(p).read()
    if not INC.search(s): continue
    seen = [False]
    def sub(mm):
        if mm[1] not in lset: return mm[0]
        if seen[0]: return ''
        seen[0] = True; return '#include "sdk/linked.h"\n'
    s2 = INC.sub(sub, s)
    if s2 != s: open(p, 'w').write(s2)
for m in linked:
    for ext in ('.cpp', '.h', '.s'):
        f = os.path.join(T, m + ext)
        if os.path.exists(f): os.remove(f)
for d in sorted(glob.glob(T + '/sdk/*/'), reverse=True):
    if not os.listdir(d): os.rmdir(d)
print('sdklink: dropped %d linked SDK objects, sdk/linked.h keeps %d prototypes' % (len(linked), len(protos)))
