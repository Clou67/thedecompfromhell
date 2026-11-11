import os, os as _os
TOOLS = _os.path.dirname(_os.path.abspath(__file__))
DATA = _os.path.join(TOOLS, 'data')
import sys; sys.path.insert(0,TOOLS)
import partition as P, collections
rows=P.load(); dest,why=P.assign(rows)
R=P.runs_of(dest)
files=collections.Counter(dest)
mob=[d for d in files if '/update/moby' in d]; cam=[d for d in files if '/update/camera' in d]
L=['# NPEA00385 source layout (proposed)\n',
 'Files follow link order: every file is one contiguous address range (except `crt0.cpp`, whose `_init` sits in `.init` at the very start).',
 'Evidence: SECTION_HEADER_* starts a file; moby helpers come first and the `UpdateMoby` function last; class tags route through the MapVTables registration; Ghidra namespaces; unnamed functions belong to the object they sit in.',
 'Unknown objects are named `<first letter of the previous linked object>Unk.cpp`. Folders follow link position: everything up to the end of the moby sea is `game/`; game-labelled code after it is `idol/`.',
 'Shared update functions are named `UpdateMoby_<first oClass>`, with every registered oClass in a comment.\n',
 '%d functions, %d files: %d `game/update/moby*.cpp`, %d `game/update/camera*.cpp`.\n' % (len(rows), len(files), len(mob), len(cam)),
 '| file | funcs | start | end |', '|---|---|---|---|']
for d,i,j in R:
    if '/update/' in d: 
        if L[-1].startswith('| *update'): 
            parts=L[-1].split('|'); n=int(parts[2])+(j-i); L[-1]='| *update files* | %d | %s | 0x%x |'%(n,parts[3].strip(),rows[j-1][0]+rows[j-1][1]); continue
        L.append('| *update files* | %d | 0x%x | 0x%x |'%(j-i,rows[i][0],rows[j-1][0]+rows[j-1][1])); continue
    L.append('| %s | %d | 0x%x | 0x%x |'%(d,j-i,rows[i][0],rows[j-1][0]+rows[j-1][1]))
open(os.path.join(TOOLS, 'LAYOUT.md'),'w').write('\n'.join(L)+'\n')
print(len(L))
