import os, os as _os
TOOLS = _os.path.dirname(_os.path.abspath(__file__))
DATA = _os.path.join(TOOLS, 'data')
"""Make Ghidra's DataTypeWriter output compile (clang, 32-bit big-endian PowerPC, freestanding)."""
import re, sys
src = open(sys.argv[1]).read().split('\n')
avoid = set(open(sys.argv[3]).read().split()) if len(sys.argv) > 3 else set()
systypes = set(open(os.path.join(DATA, 'systype_names.txt')).read().split())
out = []; enum_seen = {}; cur_enum = None; renamed = {}
for line in src:
    # primitive typedefs that clash with C++ / compiler built-ins
    if re.match(r'typedef\s+.*\s+(bool|wchar_t)\s*;', line): continue
    mt = re.match(r'typedef\s+[^;{}()]*?\b(\w+)\s*;\s*$', line)
    if mt and mt[1] in systypes: continue      # the SDK headers already define it
    # Ghidra wrote the 64-bit types as long, which is 32 bits here (__LP32__)
    if re.match(r'typedef ulong u64;', line): line = 'typedef unsigned long long u64;'
    if re.match(r'typedef long s64;', line): line = 'typedef long long s64;'
    if line.lstrip().startswith('-BAD- '): line = line.replace('-BAD- ', 'void * /*BAD*/ ', 1)
    # '?' is not legal in identifiers (Ghidra field names like "ip?")
    line = re.sub(r'(\w)\?', r'\1_q', line)
    m = re.match(r'\s*typedef enum (\w+) \{', line) or re.match(r'\s*enum (\w+) \{', line)
    if m: cur_enum = m[1]
    if cur_enum:
        e = re.match(r'(\s*)(\w+)\s*=\s*([^,]+)(,?)\s*$', line)
        if e:
            name, val = e[2], e[3].strip()
            if name in enum_seen or name in avoid:
                new = '%s__%s' % (cur_enum, name)
                renamed[(cur_enum, name)] = new
                line = '%s%s=%s%s' % (e[1], new, val, e[4])
            else: enum_seen[name] = val
        if '}' in line: cur_enum = None
    out.append(line)
open(sys.argv[2], 'w').write('\n'.join(out))
print('renamed enumerators:', len(renamed))
