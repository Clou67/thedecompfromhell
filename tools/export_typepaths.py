import os, pyghidra
# GHIDRA=<install> GPROJ_DIR=<project dir> GPROJ_NAME=<project> GPROG=<program> python3 this.py
DATA = os.path.join(os.path.dirname(os.path.abspath(__file__)), "data")
pyghidra.start(install_dir=os.environ["GHIDRA"])
from ghidra.base.project import GhidraProject
from ghidra.program.model.data import Structure, Union, Enum, TypeDef, FunctionDefinition
import json
proj = GhidraProject.openProject(os.environ["GPROJ_DIR"], os.environ["GPROJ_NAME"], True)
p = proj.openProgram("/", os.environ["GPROG"], True)
out = []
for dt in p.getDataTypeManager().getAllDataTypes():
    pn = dt.getPathName()
    if pn.startswith(("/ELF", "/PS3", "/defines", "/types.h")): continue
    if isinstance(dt, (Structure, Union, Enum, TypeDef, FunctionDefinition)):
        out.append([dt.getName(), dt.getCategoryPath().getPath(), type(dt).__name__])
json.dump(out, open(os.path.join(DATA, 'typepaths.json'), 'w'))
print(len(out))
proj.close()
