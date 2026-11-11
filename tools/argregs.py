#!/usr/bin/env python3
import os, os as _os
TOOLS = _os.path.dirname(_os.path.abspath(__file__))
DATA = _os.path.join(TOOLS, 'data')
"""Which argument registers does a function read before writing them?  (r3-r10, f1-f13)
A quick read of the asm for fixing prototypes: Ghidra often drops or invents parameters.
Linear scan over the function body (no control flow), so treat the result as a strong hint.
PS3 ABI: each argument takes the next GPR slot even when it is a float (floats also go in f1...),
so the n-th parameter lives in r(3+n) or, if it is a float, in the next f register.
usage: argregs.py ADDR|NAME [...]       (names looked up in the tree's MANIFEST.tsv)"""
import re, sys, os
HERE = TOOLS
DIS = os.environ.get('DIS') or os.path.join(HERE, 'inl', 'eboot.dis')     # in tools/: data/eboot.dis (see generate.py)
MAN = os.environ.get('MANIFEST') or os.path.join(HERE, 'tree', 'MANIFEST.tsv')
names, sizes, byaddr = {}, {}, {}
for l in open(MAN).read().splitlines()[1:]:
    p = l.split('\t'); a = int(p[0], 16); names[p[3]] = a; names[p[2]] = a; sizes[a] = int(p[1], 16); byaddr[a] = p[3]

def body(a):
    out = []
    for l in open(DIS):
        m = re.match(r'\s+([0-9a-f]+):\s+(\S+)\s*(.*)$', l)
        if not m: continue
        x = int(m[1], 16)
        if x < a: continue
        if x >= a + sizes.get(a, 0x400): break
        out.append((x, m[2], m[3]))
    return out

IMM_LAST = set('addi addic addic. addis ori oris xori xoris andi. andis. mulli subfic cmpwi cmplwi cmpdi cmpldi srawi sradi '
               'slwi srwi sldi srdi clrlwi clrldi rotlwi rotldi twi tdi extlwi extrwi insrwi'.split())
IMM_LAST3 = {'rlwinm', 'rlwinm.', 'rlwimi', 'rlwimi.'}
IMM_LAST2 = {'rldicl', 'rldicr', 'rldic', 'rldimi', 'rldicl.', 'rldicr.'}
NO_DEF = re.compile(r'^(st|cmp|fcmp|tw|td|mtctr|mtlr|mtspr|mtcrf|b|dcb|icb|sync|lwsync|eieio|isync)')
FPR_ALL = re.compile(r'^(f|lfs|lfd|stfs|stfd)')
def regs(mn, ops):
    """(defs, uses) as sets like {'r3','f1'}"""
    toks = [t.strip() for t in ops.split(',') if t.strip()]
    nimm = 1 if mn in IMM_LAST else 3 if mn in IMM_LAST3 else 2 if mn in IMM_LAST2 else 0
    if mn in ('li', 'lis'): nimm = 1
    regtoks = toks[:len(toks) - nimm] if nimm else toks
    defs, uses = set(), set()
    for i, t in enumerate(regtoks):
        m = re.match(r'^-?(?:\d+|0x[0-9a-f]+)\((\d+)\)$', t)
        if m:
            uses.add('r' + m[1]); continue
        if not re.match(r'^\d+$', t): continue
        if mn.startswith(('cmp', 'fcmp')) and i == 0: continue          # cr field
        if mn in ('lfs', 'lfd', 'lfsx', 'lfdx', 'lfsu', 'lfdu', 'stfs', 'stfd', 'stfsx', 'stfdx', 'stfiwx'):
            k = 'f' if i == 0 else 'r'
        elif mn in ('fctiwz', 'fctidz', 'fcfid', 'frsp') or (mn.startswith('f') and mn not in ('fcmpu', 'fcmpo')):
            k = 'f'
        elif mn in ('fcmpu', 'fcmpo'): k = 'f'
        else: k = 'r'
        name = k + t
        if i == 0 and not NO_DEF.match(mn):
            defs.add(name)
            if mn in ('rlwimi', 'rlwimi.', 'rldimi'): uses.add(name)     # insert keeps the other bits
        else: uses.add(name)
    if mn in ('mr', 'fmr') and len(regtoks) == 2: pass
    return defs, uses

MEMO = {}
def reads_of(a, depth=0):
    if a in MEMO: return MEMO[a]
    MEMO[a] = set()                     # recursion guard
    MEMO[a] = cfg_reads(body(a), depth)
    return MEMO[a]

def cfg_reads(ins, depth=0):
    """argument registers that some path reads before writing; a call counts as reading what the callee
    reads (arguments passed straight through), a return/tail branch ends the path"""
    idx = {a: k for k, (a, mn, op) in enumerate(ins)}
    read = set(); seen = set()
    stack = [(0, frozenset())]
    while stack:
        k, w = stack.pop()
        key = (k, w & ARGSET)
        if key in seen or k >= len(ins): continue
        seen.add(key)
        a, mn, op = ins[k]
        if mn in ('bctrl', 'bcctrl', 'blr', 'bctr'): continue
        if mn == 'bl':
            tg = re.search(r'0x([0-9a-f]+)', op)
            if tg and depth < 3:
                ca = int(tg[1], 16)
                if re.search(r'printf|scanf|print_tty', byaddr.get(ca, '')): cr = {'r3'}   # varargs: only the format is certain
                else: cr = reads_of(ca, depth + 1)
                read |= {r for r in cr if r not in w}
            continue
        d, u = regs(mn, op)
        read |= {r for r in u if r in ARGSET and r not in w}
        w = w | d
        tgt = re.search(r'0x([0-9a-f]+)', op) if mn.startswith('b') else None
        t = idx.get(int(tgt[1], 16)) if tgt else None
        if mn == 'b':
            if t is not None: stack.append((t, w))
            continue
        if mn.startswith(('bt', 'bf', 'bdnz', 'bdz', 'bc', 'beq', 'bne', 'blt', 'bgt', 'ble', 'bge')) and t is not None:
            stack.append((t, w))
        stack.append((k + 1, w))
    return read

ARGS = ['r%d' % i for i in range(3, 11)] + ['f%d' % i for i in range(1, 14)]
ARGSET = set(ARGS)
for q in sys.argv[1:]:
    a = int(q, 16) if re.match(r'^(0x)?[0-9a-fA-F]+$', q) and q not in names else names.get(q)
    if a is None: print(q, '?'); continue
    read = reads_of(a)
    print('%-28s 0x%07x reads: %s' % (q, a, ' '.join(sorted(read, key=lambda r: (r[0], int(r[1:])))) or '(none)'))
