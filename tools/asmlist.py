#!/usr/bin/env python3
import os, os as _os
TOOLS = _os.path.dirname(_os.path.abspath(__file__))
DATA = _os.path.join(TOOLS, 'data')
"""Write <file>.s next to every <file>.cpp: the original instructions of the same functions, same order.
The assembly is the reference when cleaning a function; Ghidra's C is only a draft.
usage: asmlist.py TREE DISASSEMBLY"""
import os, re, sys, bisect, collections

T, DIS = sys.argv[1], sys.argv[2]
rows = []
for l in open(os.path.join(T, 'MANIFEST.tsv')).read().splitlines()[1:]:
    a, sz, gname, cname, f, basis = l.split('\t')
    rows.append((int(a, 16), int(sz, 16), cname, f))
rows.sort()
starts = [r[0] for r in rows]
out = collections.defaultdict(list)
cur = None
for l in open(DIS):
    m = re.match(r'\s+([0-9a-f]+):\s+(.*)$', l)
    if not m: continue
    a = int(m[1], 16)
    i = bisect.bisect_right(starts, a) - 1
    if i < 0 or a >= rows[i][0] + max(rows[i][1], 4): continue
    r = rows[i]
    if cur != r[0]:
        out[r[3]].append('\n%s:   # 0x%x, 0x%x bytes' % (r[2], r[0], r[1])); cur = r[0]
    ins = re.sub(r'\s*<\+0x[0-9a-f]+>', '', m[2]).replace('\t', ' ')
    out[r[3]].append('  %07x  %s' % (a, ins))
# ---- known inlines, found from the instructions (see inl/): mark them in the .cpp above each function
ins_by_fn = collections.defaultdict(list)
for f, lines in out.items():
    fn = None
    for l in lines:
        m = re.match(r'^\n?(\S+):   # 0x([0-9a-f]+)', l)
        if m: fn = int(m[2], 16); continue
        m = re.match(r'^  ([0-9a-f]+)  (\S+)\s*(.*)$', l)
        if m and fn is not None: ins_by_fn[fn].append((int(m[1], 16), m[2], m[3]))
marks = {}
for fn, L in ins_by_fn.items():
    found = []
    for k, (a, mn, ops) in enumerate(L):
        win = L[k:k + 48]
        if mn == 'fdivs' and any(x[1] == 'lis' and x[2].endswith(', 115') for x in win) and \
           any(x[1] in ('addic', 'addi') and x[2].endswith(', 22752') for x in win):
            found.append('FastAtan2 @0x%x' % a)
        if mn == 'frsqrte' and sum(1 for x in L[k:k + 14] if x[1] == 'fnmsubs') >= 2:
            found.append('FastRSqrt @0x%x' % a)
    if found: marks[fn] = found
for f in out:
    cpp = os.path.join(T, f)
    if not os.path.exists(cpp): continue
    t = open(cpp).read(); changed = False
    for fn in [r[0] for r in rows if r[3] == f and r[0] in marks]:
        tag = '// 0x%07x (' % fn
        i = t.find(tag)
        if i < 0: continue
        j = t.index('\n', i) + 1
        t = t[:j] + '// inlined: %s\n' % ', '.join(marks[fn]) + t[j:]; changed = True
    if changed: open(cpp, 'w').write(t)
print('functions with marked inlines', len(marks), 'sites', sum(len(v) for v in marks.values()))

for f, lines in out.items():
    with open(os.path.join(T, f[:-4] + '.s'), 'w') as fh:
        fh.write('# %s -- original instructions (NPEA00385), same functions and order as the .cpp\n' % f)
        fh.write('\n'.join(lines) + '\n')
print('asm listings', len(out))
