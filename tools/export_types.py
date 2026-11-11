import os, pyghidra
# GHIDRA=<install> GPROJ_DIR=<project dir> GPROJ_NAME=<project> GPROG=<program> python3 this.py
DATA = os.path.join(os.path.dirname(os.path.abspath(__file__)), "data")
pyghidra.start(install_dir=os.environ["GHIDRA"])
from ghidra.base.project import GhidraProject
from ghidra.program.model.data import DataTypeWriter, Structure, Union, Enum, TypeDef, FunctionDefinition
from ghidra.util.task import TaskMonitor
from java.io import FileWriter
from java.util import ArrayList
proj = GhidraProject.openProject(os.environ["GPROJ_DIR"], os.environ["GPROJ_NAME"], True)
p = proj.openProgram("/", os.environ["GPROG"], True)
dtm = p.getDataTypeManager(); L = ArrayList(); n = 0
for dt in dtm.getAllDataTypes():
    pn = dt.getPathName()
    if pn.startswith(("/ELF", "/PS3", "/defines", "/types.h")): continue
    if isinstance(dt, (Structure, Union, Enum, TypeDef, FunctionDefinition)): L.add(dt); n += 1
w = FileWriter(os.path.join(DATA, "rc1_types_full.h"))
DataTypeWriter(dtm, w).write(L, TaskMonitor.DUMMY); w.close()
print("types", n)
proj.close()
