# game/update/moby1577.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1577:   # 0x29ff4c, 0x148 bytes
  029ff4c  stdu 1, -112(1)
  029ff50  mflr 0
  029ff54  std 0, 128(1)
  029ff58  lbz 5, 32(3)
  029ff5c  lwz 4, 120(3)
  029ff60  cmpwi 5, 0
  029ff64  cmpwi 1, 5, 1
  029ff68  bf 2, 0x29ffe8
  029ff6c  li 5, 1
  029ff70  lis 6, 164
  029ff74  li 9, 0
  029ff78  ori 7, 4, 0
  029ff7c  stb 5, 32(3)
  029ff80  lwz 5, -28512(6)
  029ff84  lwz 6, 16(7)
  029ff88  li 8, -1
  029ff8c  slwi 6, 6, 8
  029ff90  addc 6, 6, 5
  029ff94  cmpwi 6, 0
  029ff98  bt 2, 0x29ffbc
  029ff9c  clrldi 6, 6, 32
  029ffa0  lbz 10, 32(6)
  029ffa4  cmpwi 1, 10, 253
  029ffa8  cmpwi 10, 254
  029ffac  cror 2, 2, 6
  029ffb0  bt 2, 0x29ffbc
  029ffb4  lhz 8, 166(6)
  029ffb8  extsh 8, 8
  029ffbc  addic 9, 9, 1
  029ffc0  stw 8, 48(7)
  029ffc4  addic 7, 7, 4
  029ffc8  cmpwi 9, 8
  029ffcc  bt 0, 0x29ff84
  029ffd0  lwz 4, 0(4)
  029ffd4  cmpwi 4, 0
  029ffd8  bf 2, 0x2a0084
  029ffdc  li 4, 2
  029ffe0  stb 4, 32(3)
  029ffe4  b 0x2a0084
  029ffe8  bf 6, 0x2a0084
  029ffec  lis 5, 164
  029fff0  li 10, 0
  029fff4  ori 7, 4, 0
  029fff8  li 6, -1
  029fffc  ori 11, 10, 0
  02a0000  lwz 5, -28512(5)
  02a0004  lwz 9, 16(7)
  02a0008  cmpwi 9, -1
  02a000c  bt 2, 0x2a005c
  02a0010  lwz 8, 48(7)
  02a0014  cmpwi 8, -1
  02a0018  bt 2, 0x2a005c
  02a001c  slwi 9, 9, 8
  02a0020  addc 9, 9, 5
  02a0024  cmpwi 9, 0
  02a0028  bt 2, 0x2a005c
  02a002c  clrldi 9, 9, 32
  02a0030  lhz 12, 166(9)
  02a0034  extsh 12, 12
  02a0038  cmpw 12, 8
  02a003c  bf 2, 0x2a005c
  02a0040  lbz 8, 32(9)
  02a0044  cmpwi 1, 8, 253
  02a0048  cmpwi 8, 254
  02a004c  cror 2, 2, 6
  02a0050  bt 2, 0x2a005c
  02a0054  addic 11, 11, 1
  02a0058  b 0x2a0060
  02a005c  stw 6, 48(7)
  02a0060  addic 10, 10, 1
  02a0064  addic 7, 7, 4
  02a0068  cmpwi 10, 8
  02a006c  bt 0, 0x2a0004
  02a0070  lwz 4, 0(4)
  02a0074  cmpw 11, 4
  02a0078  bf 0, 0x2a0084
  02a007c  bl 0xefb38
  02a0080  nop
  02a0084  ld 0, 128(1)
  02a0088  mtlr 0
  02a008c  addi 1, 1, 112
  02a0090  blr
