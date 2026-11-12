import os, os as _os
TOOLS = _os.path.dirname(_os.path.abspath(__file__))
DATA = _os.path.join(TOOLS, 'data')
"""Symbolic executor for straight-line PPU/VMX code: runs a range of a .s listing on symbolic
registers and memory and logs every store as an expression (temporaries t1.. for long ones).
Used to read the hand-scheduled vector kernels (e.g. ShadeVerts). See tools/README in CONTRIBUTING.md."""
import re, struct, sys
ELF = open('/home/claude/orig/EBOOT.ELF','rb').read()
def rom(a): return struct.unpack('>I', ELF[a-0x10000:a-0x10000+4])[0]
def f32(u): return struct.unpack('>f', struct.pack('>I', u))[0]
NAMES = {}
def S(x):  # expression to string
    return x
class Num:
    def __init__(s, u): s.u = u & 0xffffffff
    def __repr__(s):
        f = f32(s.u)
        if s.u in (0, 0x80000000): return '0' if s.u == 0 else '-0'
        if abs(f) > 1e-6 and abs(f) < 1e7 and s.u & 0xff: return '%g' % f
        if abs(f) > 1e-6 and abs(f) < 1e7: return '%g' % f
        return '0x%x' % s.u
def isnum(x, v=None): return isinstance(x, Num) and (v is None or x.u == v)
def fval(x): return f32(x.u)
def mk(op, *a):
    r = mk0(op, *a)
    if isinstance(r, str) and len(r) > 70:
        T.append(r); n = 't%d' % len(T); LOG.append('  %s = %s' % (n, r)); return n
    return r
T = []; LOG = []
def mk0(op, *a):
    # simplifications
    if op == 'madd':
        a_, b_, c_ = a
        if isnum(c_) and fval(c_) == 0: return mk('mul', a_, b_)
        return '(%s*%s + %s)' % (a_, b_, c_)
    if op == 'mul':
        x, y = a
        if isnum(x) and fval(x) == 1: return y
        if isnum(y) and fval(y) == 1: return x
        return '%s*%s' % (x, y)
    if op == 'add':
        x, y = a
        if isnum(x) and fval(x) == 0: return y
        if isnum(y) and fval(y) == 0: return x
        return '(%s + %s)' % (x, y)
    if op == 'sub': return '(%s - %s)' % a
    if op == 'nmsub': return '(%s - %s*%s)' % (a[2], a[0], a[1])
    return '%s(%s)' % (op, ', '.join(map(str, a)))
class St:
    def __init__(s):
        s.r = {i: 'r%d' % i for i in range(32)}; s.r[1] = ('sp', 0)
        s.v = {i: ['v%d.%d' % (i, k) for k in range(4)] for i in range(32)}
        s.mem = {}
        s.f = {i: 'f%d' % i for i in range(32)}
def addr(st, ra, rb_or_off, x=False):
    base = st.r[ra] if ra else 0
    off = st.r[rb_or_off] if x else rb_or_off
    if isinstance(base, int) and isinstance(off, int): return base + off
    if isinstance(base, tuple) and isinstance(off, int): return (base[0], base[1] + off)
    if isinstance(off, tuple) and isinstance(base, int): return (off[0], off[1] + base)
    return ('?%s+%s' % (base, off), 0)
def load(st, a):
    key = a if isinstance(a, tuple) else ('abs', a)
    if key in st.mem: return st.mem[key]
    if isinstance(a, int):
        if a in NAMES: return NAMES[a]
        if 0xe9000 <= a < 0xea400 or 0x10000 <= a < 0x700000: return Num(rom(a))
        return 'mem[0x%x]' % a
    return '%s[%d]' % (a[0], a[1])
def store(st, a, val):
    key = a if isinstance(a, tuple) else ('abs', a)
    st.mem[key] = val
    LOG.append('  STORE %s = %s' % (fmt(a), val))
def fmt(a): return ('0x%x' % a) if isinstance(a, int) else '%s+%d' % a
def run(st, lines, start, end, path=None):
    ins = [(int(m[1],16), m[2], m[3]) for m in (re.match(r'\s+([0-9a-f]+)\s+(\S+)\s*(.*)', l) for l in lines) if m]
    k = [i for i,(a,_,_) in enumerate(ins) if a == start][0]
    while ins[k][0] != end:
        a, mn, op = ins[k]; o = [x.strip() for x in op.split(',')] if op else []
        I = lambda i: int(o[i], 0)
        R = lambda i: st.r[I(i)]
        k += 1
        if mn == 'li': st.r[I(0)] = I(1)
        elif mn == 'lis': st.r[I(0)] = I(1) << 16
        elif mn in ('addi', 'addic'):
            b = st.r[I(1)] if (mn == 'addic' or I(1)) else 0
            st.r[I(0)] = b + I(2) if isinstance(b, int) else (b[0], b[1] + I(2)) if isinstance(b, tuple) else '%s+%d' % (b, I(2))
        elif mn == 'addc':
            x, y = R(1), R(2)
            if isinstance(x, int) and isinstance(y, int): st.r[I(0)] = x + y
            elif isinstance(x, tuple) and isinstance(y, int): st.r[I(0)] = (x[0], x[1] + y)
            elif isinstance(y, tuple) and isinstance(x, int): st.r[I(0)] = (y[0], y[1] + x)
            else: st.r[I(0)] = (str(x) + '+' + str(y), 0)
        elif mn == 'ori' and I(2) == 0: st.r[I(0)] = R(1)
        elif mn in ('clrldi', 'extsw'): st.r[I(0)] = R(1)
        elif mn in ('std', 'stw'): store(st, addr(st, int(o[1].split('(')[1][:-1]), int(o[1].split('(')[0])), st.r[I(0)])
        elif mn in ('ld', 'lwz'):
            st.r[I(0)] = load(st, addr(st, int(o[1].split('(')[1][:-1]), int(o[1].split('(')[0])))
            if isinstance(st.r[I(0)], Num): st.r[I(0)] = st.r[I(0)].u
            if isinstance(st.r[I(0)], str): st.r[I(0)] = (st.r[I(0)], 0)
        elif mn == 'lfs': st.f[I(0)] = load(st, addr(st, int(o[1].split('(')[1][:-1]), int(o[1].split('(')[0])))
        elif mn == 'stfs': store(st, addr(st, int(o[1].split('(')[1][:-1]), int(o[1].split('(')[0])), st.f[I(0)])
        elif mn in ('lvx', 'lvlx'):
            ad = addr(st, I(1), I(2), True)
            if mn == 'lvx' and isinstance(ad, int): ad &= ~15
            if mn == 'lvx' and isinstance(ad, tuple) and ad[0] == 'sp': ad = ('sp', ad[1] & ~15)
            st.v[I(0)] = [load(st, ad if isinstance(ad, int) and False else (ad + 4*j if isinstance(ad, int) else (ad[0], ad[1] + 4*j))) for j in range(4)]
        elif mn == 'lvrx': st.v[I(0)] = [Num(0)] * 4
        elif mn == 'stvx':
            ad = addr(st, I(1), I(2), True)
            for j in range(4): store(st, (ad + 4*j) if isinstance(ad, int) else (ad[0], ad[1] + 4*j), st.v[I(0)][j])
        elif mn == 'stvewx':
            ad = addr(st, I(1), I(2), True)
            lane = ((ad if isinstance(ad, int) else ad[1]) >> 2) & 3 if (isinstance(ad, int) or ad[0] == 'sp') else 0
            store(st, ad, st.v[I(0)][lane])
        elif mn == 'vspltw': st.v[I(0)] = [st.v[I(1)][I(2)]] * 4
        elif mn == 'vspltisw': st.v[I(0)] = [Num(I(1))] * 4
        elif mn == 'vslw':
            a_, b_ = st.v[I(1)], st.v[I(2)]
            st.v[I(0)] = [Num(x.u << (y.u & 31)) if isnum(x) and isnum(y) else mk('shl', x, y) for x, y in zip(a_, b_)]
        elif mn in ('vaddfp', 'vsubfp', 'vxor', 'vor', 'vand', 'vandc', 'vcmpeqfp', 'vcmpgtfp', 'vcmpgefp.', 'vadduwm', 'vcmpgtsw', 'vcmpgtuw', 'vrlw'):
            a_, b_ = st.v[I(1)], st.v[I(2)]
            def f(x, y):
                if mn == 'vaddfp': return mk('add', x, y)
                if mn == 'vsubfp': return mk('sub', x, y)
                if mn == 'vor':
                    if isnum(x, 0): return y
                    if isnum(y, 0): return x
                    if isnum(x) and isnum(y): return Num(x.u | y.u)
                    return mk('or', x, y)
                if mn == 'vxor':
                    if isnum(x, 0x80000000): return mk('neg', y)
                    if isnum(y, 0x80000000): return mk('neg', x)
                    if isnum(x, 0): return y
                    return mk('xor', x, y)
                return mk(mn.rstrip('.'), x, y)
            st.v[I(0)] = [f(x, y) for x, y in zip(a_, b_)]
        elif mn in ('vmaddfp', 'vnmsubfp'):
            a_, b_, c_ = st.v[I(1)], st.v[I(2)], st.v[I(3)]
            st.v[I(0)] = [mk('madd' if mn == 'vmaddfp' else 'nmsub', x, y, z) for x, y, z in zip(a_, b_, c_)]
        elif mn == 'vsel':
            st.v[I(0)] = [mk('sel', x, y, z) for x, y, z in zip(st.v[I(1)], st.v[I(2)], st.v[I(3)])]
        elif mn == 'vperm':
            a_, b_, m_ = st.v[I(1)], st.v[I(2)], st.v[I(3)]
            out = []
            for j in range(4):
                m = m_[j]
                if not isnum(m): out.append(mk('perm?', m)); continue
                w = (m.u >> 24) // 4
                out.append((a_ + b_)[w])
            st.v[I(0)] = out
        elif mn in ('vrsqrtefp', 'vcfsx', 'vcfux', 'vctsxs', 'vctuxs'):
            st.v[I(0)] = [mk(mn, x) for x in st.v[I(1)]]
        elif mn in ('cmpwi', 'cmpw', 'bt', 'bf', 'b', 'mulli', 'stvx'): pass
        elif mn.startswith('std') or mn.startswith('stfd') or mn.startswith('mf') or mn == 'stdu': pass
        else: LOG.append('  ?? %s %s' % (mn, op))
