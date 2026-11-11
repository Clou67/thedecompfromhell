import os, os as _os
TOOLS = _os.path.dirname(_os.path.abspath(__file__))
DATA = _os.path.join(TOOLS, 'data')
import pyghidra
pyghidra.start(install_dir="/home/claude/ghidra/ghidra_11.4_PUBLIC")
from ghidra.base.project import GhidraProject
from ghidra.program.model.data import DataTypeWriter, Structure, Union, Enum, TypeDef, FunctionDefinition
from ghidra.util.task import TaskMonitor
from java.io import FileWriter
from java.util import ArrayList
import json
proj = GhidraProject.openProject("/home/claude/proj2", "RC2", True)
p = proj.openProgram("/", "NPEA00385_labeled_newai_for_work", True)
dtm = p.getDataTypeManager(); L = ArrayList(); paths = []; th = []
import re
ANON = re.compile(r'^enum_\d+$')
own = []     # anonymous enums (several share the name enum_1): written by us under their typedef name
for dt in dtm.getAllDataTypes():
    pn = dt.getPathName()
    if pn.startswith(("/ELF", "/PS3", "/defines")): continue
    if isinstance(dt, Enum) and ANON.match(dt.getName()): continue
    if isinstance(dt, TypeDef) and isinstance(dt.getBaseDataType(), Enum) and ANON.match(dt.getBaseDataType().getName()):
        e = dt.getBaseDataType()
        vals = sorted(((e.getValue(n), n) for n in e.getNames()))
        own.append('typedef enum %s {\n%s\n} %s;\n' % (dt.getName(), ',\n'.join('    %s=%d' % (n, v) for v, n in vals), dt.getName()))
        paths.append([dt.getName(), dt.getCategoryPath().getPath(), 'Enum'])
        continue
    if isinstance(dt, (Structure, Union, Enum, TypeDef, FunctionDefinition)):
        L.add(dt); paths.append([dt.getName(), dt.getCategoryPath().getPath(), type(dt).__name__])
        if pn.startswith("/types.h"): th.append([dt.getName(), type(dt).__name__])
w = FileWriter("/home/claude/rc1src/rc1_types_full.h")
w.write('/* enums that are anonymous (enum_N) in the Ghidra project, named after their typedef */\n' + '\n'.join(own) + '\n')
DataTypeWriter(dtm, w).write(L, TaskMonitor.DUMMY); w.close()
json.dump(paths, open(os.path.join(DATA, 'typepaths.json'), 'w'))
print("types", L.size(), "named anonymous enums", len(own))
proj.close()
