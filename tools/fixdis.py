#!/usr/bin/env python3
import os, os as _os
TOOLS = _os.path.dirname(_os.path.abspath(__file__))
DATA = _os.path.join(TOOLS, 'data')
"""llvm-objdump prints the Cell-only unaligned vector loads/stores (lvlx, lvrx, stvlx, ...) as
<unknown>; decode them from the binary in place.  usage: fixdis.py EBOOT.ELF eboot.dis"""
import struct, sys, re
elf, dis = sys.argv[1], sys.argv[2]
d = open(elf, 'rb').read()
XO = {519: 'lvlx', 775: 'lvlxl', 551: 'lvrx', 807: 'lvrxl',
      647: 'stvlx', 903: 'stvlxl', 679: 'stvrx', 935: 'stvrxl'}
out, n = [], 0
for l in open(dis):
    m = re.match(r'(\s+([0-9a-f]+):\s+)<unknown>$', l.rstrip('\n'))
    if m:
        a = int(m[2], 16)
        w = struct.unpack('>I', d[a - 0x10000:a - 0x10000 + 4])[0]
        xo = (w >> 1) & 0x3ff
        if w >> 26 == 31 and xo in XO:
            l = '%s%s %d, %d, %d\n' % (m[1], XO[xo], (w >> 21) & 31, (w >> 16) & 31, (w >> 11) & 31); n += 1
    out.append(l)
open(dis, 'w').writelines(out)
print('decoded', n)
