import os, os as _os
TOOLS = _os.path.dirname(_os.path.abspath(__file__))
DATA = _os.path.join(TOOLS, 'data')
import sys, collections, re, csv
sys.path.insert(0,TOOLS)
import sdkmatch as M
at, funcs = M.load_game()
exact = {int(r['addr'],16) for r in csv.DictReader(open('sdk_matches.tsv'),delimiter='\t')
         if int(r['candidates'])==1 and int(r['unmasked/words'].split('/')[0])>=8}
LO = 0x4d0000
targets = [(a,sz,nm) for a,sz,nm in funcs if a>=LO and a not in exact and sz>=32]
# library functions, skipping import stubs; normalise: masked words -> None
lib = []
for libn,obj,sec,sym,code,mask in M.lib_functions():
    if libn.endswith('_stub.a') or len(code) < 32: continue
    w = [None if o in mask else code[o:o+4] for o in range(0,len(code),4)]
    lib.append((libn,obj,sym,w))
bylen = collections.defaultdict(list)
for e in lib: bylen[len(e[3])].append(e)
def score(gw, lw):
    # opcode-level similarity: compare top 6 bits + regs (first 16 bits) of aligned words
    n = min(len(gw), len(lw)); same = 0; cnt = 0
    for k in range(n):
        if lw[k] is None: continue
        cnt += 1
        if gw[k][:2] == lw[k][:2]: same += 1
    return same / max(cnt,1) * (n / max(len(gw), len(lw)))
out = []
for a,sz,nm in targets:
    g = at(a,sz); gw = [g[o:o+4] for o in range(0,sz,4)]
    best = (0,None)
    L = len(gw)
    for dl in range(-int(L*0.1)-1, int(L*0.1)+2):
        for e in bylen.get(L+dl, ()):
            s = score(gw, e[3])
            if s > best[0]: best = (s, e)
    if best[0] >= 0.85: out.append((a,sz,nm,best[0],best[1][0],best[1][1],best[1][2]))
with open('sdk_fuzzy.tsv','w') as f:
    f.write('addr\tsize\tghidra_name\tscore\tlib\tobject\tsymbol\n')
    for r in out: f.write('%07x\t0x%x\t%s\t%.3f\t%s\t%s\t%s\n'%r)
print('targets',len(targets),'fuzzy >=0.85:',len(out))
print(collections.Counter(r[4] for r in out).most_common(12))
