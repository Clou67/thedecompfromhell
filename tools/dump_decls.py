import os, pyghidra
# GHIDRA=<install> GPROJ_DIR=<project dir> GPROJ_NAME=<project> GPROG=<program> python3 this.py
DATA = os.path.join(os.path.dirname(os.path.abspath(__file__)), "data")
pyghidra.start(install_dir=os.environ["GHIDRA"])
from ghidra.base.project import GhidraProject
import json
proj = GhidraProject.openProject(os.environ["GPROJ_DIR"], os.environ["GPROJ_NAME"], True)
p = proj.openProgram("/", os.environ["GPROG"], True)
fm = p.getFunctionManager(); listing = p.getListing(); st = p.getSymbolTable()
funcs = []
for f in fm.getFunctions(True):
    try: proto = f.getSignature().getPrototypeString(True)
    except Exception: proto = None
    funcs.append([f.getEntryPoint().getOffset(), f.getName(True), f.getName(), proto,
                  f.getSignature().getReturnType().getName() if proto else None])
data = []
it = listing.getDefinedData(True)
while it.hasNext():
    d = it.next()
    a = d.getAddress().getOffset()
    if a < 0x10000: continue
    s = st.getPrimarySymbol(d.getAddress())
    nm = s.getName(True) if s else None
    dt = d.getDataType()
    data.append([a, nm, dt.getDisplayName(), dt.getPathName(), d.getLength()])
json.dump({'funcs': funcs, 'data': data}, open(os.path.join(DATA, 'decls.json'), 'w'))
print('funcs', len(funcs), 'data', len(data))
proj.close()
