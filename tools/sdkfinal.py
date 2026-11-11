import os, os as _os
TOOLS = _os.path.dirname(_os.path.abspath(__file__))
DATA = _os.path.join(TOOLS, 'data')
"""Combine exact + fuzzy SDK matches into sdk_final.tsv with sanity filters."""
import csv, collections, subprocess
ex=[r for r in csv.DictReader(open('sdk_matches.tsv'),delimiter='\t') if int(r['candidates'])==1 and int(r['unmasked/words'].split('/')[0])>=8]
fz=[r for r in csv.DictReader(open('sdk_fuzzy.tsv'),delimiter='\t') if int(r['size'],16)>=64]
key=lambda r:(r['lib'],r['object'],r['symbol'])
fzc=collections.Counter(key(r) for r in fz)
exk={key(r) for r in ex}
fz=[r for r in fz if fzc[key(r)]==1 and key(r) not in exk]
# a fuzzy match never overrides a name already given in Ghidra (printf vs scanf have the same shape)
def short(n): return n.split('::')[-1]
fz=[r for r in fz if short(r['ghidra_name']).startswith('FUN_') or short(r['ghidra_name']).lstrip('.')==r['symbol'].lstrip('.')]
allm=sorted([(int(r['addr'],16),r['lib'],r['object'],r['symbol'],'exact') for r in ex]+
            [(int(r['addr'],16),r['lib'],r['object'],r['symbol'],'fuzzy %s'%r['score']) for r in fz])
keep=[]; i=0
while i<len(allm):          # fuzzy only inside a same-library block of >=3
    j=i
    while j+1<len(allm) and allm[j+1][1]==allm[i][1]: j+=1
    blk=allm[i:j+1]
    keep+=[m for m in blk if m[4]=='exact' or len(blk)>=3]
    i=j+1
dem=subprocess.run(['c++filt'],input='\n'.join(m[3].lstrip('.') for m in keep),capture_output=True,text=True).stdout.split('\n')
with open('sdk_final.tsv','w') as f:
    f.write('addr\tlib\tobject\tsymbol\tdemangled\tbasis\n')
    for m,d in zip(keep,dem): f.write('%07x\t%s\t%s\t%s\t%s\t%s\n'%(m[0],m[1],m[2],m[3].lstrip('.'),d,m[4]))
print(len(keep),'kept', collections.Counter(m[1] for m in keep))
