#!/usr/bin/env python3
import os, os as _os
TOOLS = _os.path.dirname(_os.path.abspath(__file__))
DATA = _os.path.join(TOOLS, 'data')
"""Assign every function in the NPEA00385 ELF to a source file, following link order.

Evidence, strongest first:
  1. moby/camera update groups: helpers first, the UpdateMoby_* function last -> game/update/moby<class>.cpp
     (shared updaters take the first oClass registered for them in MapVTables)
  2. SECTION_HEADER_* : first function of its file
  3. Ghidra namespaces
  4. unnamed functions and stubs belong to the object they sit in (previous function)
Then files are made contiguous: a name that shows up again far from its file is a separate object.
Separate objects with no known name are called <first letter of the previous object>Unk.cpp.
"""
import re, sys, json, collections, os

HERE = TOOLS
S = DATA

def load(path=os.path.join(DATA, 'rc1funcs.txt')):
    rows = []
    for l in open(path):
        m = re.match(r'([0-9a-f]+) (0x[0-9a-f]+) (\S+)', l)
        if m: rows.append([int(m[1], 16), int(m[2], 16), m[3]])
    rows.sort(); return rows

IDOL = {'idol', 'idol_draw'}
SDK = {'cell', 'sys', 'sce', 'libc', 'fios', '989snd', 'CMediusManager'}
GAME_FORCED = {'crt0'}
MOBYNS = {'mobyupdate_helpers', 'mobyupdate_unsorted', 'mobyupd', 'mobyattack'}
# hand-written PS2 assembly in the original sources, rewritten by Idol for PS3 (informational only:
# folders follow link position, so these stay in game/ when they sit in the game code)
IDOL_REWRITTEN = {'fastfunc', 'collproc', 'mobyproc', 'partproc', 'skyproc', 'tfragproc', 'tieproc', 'shrubproc',
                  'shadowproc', 'efxproc', 'genproc', 'miscproc', 'postcpu', 'cmecpu', 'corefunc'}
HDR_ALIAS = {'coll': 'collproc'}   # section header name -> file name
PLACEHOLDER_HDR = {'UNKNOWN', 'S_UNKNOWN_STUBBED', 'CAMERA_UNK'}
UPD_CLASSES = json.load(open(os.path.join(DATA, 'update_classes.json')))
META = {}   # file -> comment lines for the file header
# functions matched against the PS3 SDK static libraries (sdkmatch.py / fuzzy.py -> sdk_final.tsv)
SDKMATCH = {}
if os.path.exists(os.path.join(DATA, 'sdk_final.tsv')):
    for _l in open(os.path.join(DATA, 'sdk_final.tsv')).read().splitlines()[1:]:
        _a, _lib, _obj, _sym, _dem, _basis = _l.split('\t')
        SDKMATCH[int(_a, 16)] = (_lib, _obj, _sym, _dem, _basis)
SDK_TAIL = 3   # unmatched functions allowed after an SDK object's last match
def is_sdk_obj(d): return d.startswith('sdk/') and d.count('/') == 2
def sdk_file(lib, obj):
    lib = re.sub(r'\.a$', '', lib); obj = re.sub(r'(\.ppu)?\.o$', '', obj)
    return 'sdk/%s/%s.cpp' % (lib, obj)
# oClass -> file of the update function it is registered to (shared updaters live under their first oClass)
CLASS_FILE = {}
for _u, _cls in UPD_CLASSES.items():
    for _c in _cls: CLASS_FILE[_c] = 'game/update/moby%d.cpp' % min(_cls)
def tag_file(t): return CLASS_FILE.get(t, 'game/update/moby%d.cpp' % t)

def short(n): return n.split('::')[-1]
def cform(s): return re.sub(r'[{}]', '_', s)   # Ghidra prints {} in names as _
def ns_of(n): return n.split('::')[0] if '::' in n else ''
def base(d): return os.path.splitext(os.path.basename(d))[0]
def top(d): return d.split('/')[0]

def load_overrides(path=os.path.join(HERE, 'overrides.tsv')):
    ov = {}
    if os.path.exists(path):
        for l in open(path):
            l = l.split('#')[0].rstrip('\n')
            if '\t' in l: k, v = l.split('\t', 1); ov[k.strip()] = v.strip()
    return ov

def ns_file(nm):
    ns = ns_of(nm)
    if not ns or ns == 'stub': return None
    if ns in GAME_FORCED: return 'game/%s.cpp' % ns
    if ns in IDOL: return 'idol/%s.cpp' % ns
    if ns in SDK: return 'sdk/%s.cpp' % ns
    if ns == 'camera':
        p = nm.split('::')
        return 'game/update/%s.cpp' % p[1] if len(p) > 2 and re.match(r'camera\d+$', p[1]) else 'game/camera.cpp'
    if re.match(r'camera\d+$', ns): return 'game/update/%s.cpp' % ns
    return 'game/%s.cpp' % ns

def moby_file(term):
    """File for a group whose last function is `term` (an UpdateMoby_* name)."""
    s = short(term)
    cls = UPD_CLASSES.get(cform(s))
    if not cls:
        m = re.findall(r'\d+', s.replace('a_lot', ''))
        cls = [int(x) for x in m] if m and not s.startswith('UpdateMoby_a_lot') else []
    if not cls: return None, []
    return 'game/update/moby%d.cpp' % min(cls), sorted(cls)

def tag_class(nm):
    s = short(nm)
    m = re.match(r'(?:UpdateMoby_|Spawn_?Moby_?|Moby|M)(\d+)(?:[_A-Za-z]|$)', s)
    return int(m[1]) if m else None

def assign(rows):
    n = len(rows); dest = [None] * n; why = [''] * n
    ov = load_overrides()
    # ---- 0. overrides first, so everything that inherits sees them
    for i, (a, sz, nm) in enumerate(rows):
        for key in (nm, ns_of(nm) + '::'):
            if key in ov: dest[i] = ov[key]; why[i] = 'override'; break
    # ---- 0b. SDK library objects (only after the game code; crt0/crt1 bits at the start stay in game/)
    for i, (a, sz, nm) in enumerate(rows):
        if a in SDKMATCH and a >= 0x4d0000 and not dest[i]:
            lib, obj = SDKMATCH[a][:2]; dest[i] = sdk_file(lib, obj); why[i] = 'sdk'
    # ---- 1. section headers
    for i, (a, sz, nm) in enumerate(rows):
        s = short(nm)
        if not s.startswith('SECTION_') or dest[i]: continue
        t = s[len('SECTION_HEADER_'):] if s.startswith('SECTION_HEADER_') else s[len('SECTION_'):]
        if t.startswith('CAMERA_CAMERA_UNK'): t = 'CAMERA_UNK'
        if re.match(r'MOBY\d+$', t): dest[i] = tag_file(int(t[4:]))
        elif re.match(r'CAMERA\d+$', t): dest[i] = 'game/update/camera%s.cpp' % t[6:]
        elif t in PLACEHOLDER_HDR: dest[i] = '?'
        else:
            nmf = t.replace('_???', '').lower().replace('_', '')
            nmf = HDR_ALIAS.get(nmf, nmf)
            dest[i] = 'game/%s.cpp' % nmf
        why[i] = 'header'
    # ---- 2. moby update groups: explicit class tags, else position (helpers precede UpdateMoby_*).
    #      Unnamed functions/stubs in the moby region also wait for the next update function.
    midx = [i for i, r in enumerate(rows) if ns_of(r[2]) in MOBYNS]
    pend = []; upend = []
    def unnamed(nm): return ns_of(nm) == 'stub' or ('::' not in nm and re.match(r'(FUN|STUB)_', nm))
    in_section = False   # inside a named (non-update) section such as HUD/PAUSE: names are not moby tags
    for i in range(midx[0], midx[-1] + 1):
        nm = rows[i][2]
        if why[i] == 'header': in_section = '/update/' not in dest[i]
        if dest[i]:                       # header / override: a new object starts
            for k in pend: dest[k] = '?'
            pend = []; upend = []; continue
        if ns_of(nm) in MOBYNS or (not in_section and re.match(r'(Spawn_?Moby_?|UpdateMoby_)\d', short(nm))):
            t = tag_class(nm)
            if short(nm).startswith('UpdateMoby'):
                f, cls = moby_file(nm)
                if f is None: f = 'game/update/moby_%x.cpp' % rows[i][0]
                if len(cls) > 1: META[f] = ['shared update function %s; registered for oClasses %s'
                                             % (short(nm), ', '.join(map(str, cls)))]
                dest[i] = f; why[i] = 'moby'
                for k in pend + upend: dest[k] = f; why[k] = 'moby'
                pend = []; upend = []
            elif t is not None:
                dest[i] = tag_file(t); why[i] = 'moby'
                if upend:   # unnamed functions before a tagged helper go with it
                    for k in upend: dest[k] = dest[i]; why[k] = 'moby'
                    upend = []
            else: pend.append(i)
        elif unnamed(nm) or ('::' not in nm and not short(nm).startswith('SECTION_') and not in_section): upend.append(i)
        else:                             # some other named object interrupts: unnamed ones stay with what precedes
            for k in pend: dest[k] = '?'
            pend = []; upend = []
    for k in pend: dest[k] = '?'
    global SEA_HI
    SEA_HI = max(rows[i][0] for i in range(n) if dest[i] and '/update/moby' in dest[i])
    # ---- 3. namespaces
    for i, (a, sz, nm) in enumerate(rows):
        if dest[i] is None:
            f = ns_file(nm)
            if f: dest[i] = f; why[i] = 'ns'
    # ---- 4. unnamed functions and stubs belong to the object they sit in.
    #      Named functions with no namespace (e.g. MapVTables) are their own object.
    #      An SDK object only extends a little past its last matched function.
    sdk_last = {}
    for i in range(n):
        if why[i] == 'sdk': sdk_last[dest[i]] = i
    for i, (a, sz, nm) in enumerate(rows):
        if dest[i] is None:
            if '::' not in nm and not re.match(r'(FUN|STUB|thunk)_', nm):
                dest[i] = '?'; why[i] = 'named'
            else:
                k = next((k for k in range(i - 1, -1, -1) if dest[k]), None)
                p = dest[k] if k is not None else '?'
                if is_sdk_obj(p) and i - sdk_last.get(p, i) > SDK_TAIL: p = '?'
                dest[i] = p; why[i] = 'fill'
    # ---- 5. game code after the moby sea is Idol's
    for i, (a, sz, nm) in enumerate(rows):
        if a > SEA_HI and dest[i].startswith('game/') and '/update/' not in dest[i]:
            dest[i] = 'idol/' + dest[i][5:]
    contiguity(rows, dest, why)
    return dest, why

def runs_of(dest, why=None):
    r = []
    for i, d in enumerate(dest):
        if r and r[-1][0] == d and not (why and why[i] == 'header'): r[-1][2] = i + 1
        else: r.append([d, i, i + 1])
    return r

def contiguity(rows, dest, why):
    n = len(rows)
    def has_hdr(i, j): return any(why[q] == 'header' for q in range(i, j))
    def folder_at(i): return 'idol' if rows[i][0] > SEA_HI else 'game'
    def cands(i, j):
        c = collections.Counter()
        for q in range(i, j):
            f = ns_file(rows[q][2])
            if f and '/update/' not in f: c[base(f)] += 1
        return [k for k, _ in c.most_common()]
    def prev_named(R, k, fin, same_folder=True):
        for q in range(k - 1, -1, -1):
            if rows[R[k][1]][0] >= ALPHA_LO > rows[R[q][1]][0]: return None
            f = fin.get(q, R[q][0])
            if f == '?' or '/update/' in f: continue
            if not same_folder or top(f) == top(R[k][0] if R[k][0] != '?' else folder_at(R[k][1])): return f
        return None
    def next_named(R, k):
        for q in range(k + 1, len(R)):
            f = R[q][0]
            if f != '?' and '/update/' not in f: return f
        return None
    def fits(name, R, k, fin):
        if (R[k][0] if R[k][0] != '?' else folder_at(R[k][1])).split('/')[0] != 'game': return True
        if rows[R[k][1]][0] < ALPHA_LO: return True
        p, x = prev_named(R, k, fin), next_named(R, k)
        b = name.lower()
        return (p is None or base(p).lower() <= b) and (x is None or b <= base(x).lower())
    # the alphabetical part of the game code starts after the early update block (before camera.cpp)
    global ALPHA_LO
    cam = next(i for i in range(n) if why[i] == 'header' and dest[i] == 'game/camera.cpp')
    ALPHA_LO = rows[next(i for i in range(cam - 1, -1, -1) if '/update/' in dest[i]) + 1][0]
    # (a0) placeholder headers directly followed by an update file belong to it
    for i in range(n):
        if dest[i] == '?' and why[i] == 'header':
            j = i + 1
            while j < n and dest[j] == '?': j += 1
            if j < n and '/update/' in dest[j]:
                for q in range(i, j): dest[q] = dest[j]
    # (a) placeholder headers take a name from their contents that fits link order
    #     (names that own a header elsewhere are not candidates)
    hdr_owned = {dest[q] for q in range(n) if why[q] == 'header' and dest[q] != '?'}
    R = runs_of(dest, why)
    for k, (d, i, j) in enumerate(R):
        if d == '?' and has_hdr(i, j):
            fld = folder_at(i)
            nh = next((q for q in range(j, n) if why[q] == 'header'), n)
            for c in cands(i, nh):
                if '%s/%s.cpp' % (fld, c) in hdr_owned: continue
                if fits(c, R, k, {}): 
                    for q in range(i, j): dest[q] = '%s/%s.cpp' % (fld, c)
                    break
    # (b) small foreign runs inside one object belong to it
    for _ in range(3):
        R = runs_of(dest, why); cnt = collections.Counter()
        for d, i, j in R: cnt[d] = max(cnt[d], j - i)
        for k in range(1, len(R) - 1):
            for w in (1, 2, 3):
                if k + w >= len(R): break
                own = R[k - 1][0]
                if R[k + w][0] != own or has_hdr(R[k + w][1], R[k + w][2]) and False: continue
                seg = R[k:k + w]
                if any(r[0] == own for r in seg): break
                tot = sum(r[2] - r[1] for r in seg)
                if any(has_hdr(r[1], r[2]) or ('/update/' in r[0] and '/update/' not in own) for r in seg): break
                if tot <= 3 or (w == 1 and cnt[seg[0][0]] > tot and tot <= 8):
                    for r in seg:
                        for q in range(r[1], r[2]): dest[q] = own; why[q] = 'absorbed'
                break
    # (c) one contiguous run per name: header run, else the run that fits link order, else largest
    R = runs_of(dest, why)
    byname = collections.defaultdict(list)
    for k, (d, i, j) in enumerate(R): byname[d].append(k)
    keep = set()
    for d, ks in byname.items():
        if d == '?': continue
        if len(ks) == 1 or '/update/' in d or d == 'game/crt0.cpp': keep.update(ks); continue
        hk = [k for k in ks if has_hdr(R[k][1], R[k][2])]
        fk = [k for k in ks if fits(base(d), R, k, {})]
        pool = hk or fk or ks
        keep.add(max(pool, key=lambda k: R[k][2] - R[k][1]))
    # (d) the rest, in link order: continue the previous object, or a new <letter>Unk object
    taken = {R[k][0] for k in keep}
    fin = {}; chain_hdr = {}
    for k, (d, i, j) in enumerate(R):
        chain_hdr[k] = has_hdr(i, j)
        if k in keep: fin[k] = d; continue
        fld = d.split('/')[0] if d != '?' else (fin[k - 1].split('/')[0] if k and rows[i][0] > SEA_HI and fin.get(k - 1) else folder_at(i))
        prev = fin.get(k - 1)
        if prev and not has_hdr(i, j) and '/update/' not in prev and not is_sdk_obj(prev) and \
                (prev.split('/')[0] == fld or chain_hdr.get(k - 1)):
            fin[k] = prev; chain_hdr[k] = chain_hdr.get(k - 1); continue
        pick = next(('%s/%s.cpp' % (fld, c) for c in cands(i, j)
                     if '%s/%s.cpp' % (fld, c) not in taken and fits(c, R, k, fin)), None)
        if pick is None:
            lastobj = fin.get(k - 1) or 'x'
            stem = '%s/%sUnk' % (fld, base(lastobj)[0].lower())
            pick = stem + '.cpp'; c = 2
            while pick in taken: pick = '%s%d.cpp' % (stem, c); c += 1
        taken.add(pick); fin[k] = pick
    for k, (d, i, j) in enumerate(R):
        for q in range(i, j): dest[q] = fin[k]
    return dest

if __name__ == '__main__':
    rows = load(); dest, why = assign(rows)
    print(collections.Counter(why))
    R = runs_of(dest, why)
    files = collections.Counter(dest)
    multi = [d for d in files if sum(1 for r in R if r[0] == d) > 1]
    print(len(files), 'files;', len(multi), 'still split:', multi[:20])
