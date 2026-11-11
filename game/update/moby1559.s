# game/update/moby1559.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1559:   # 0x298cec, 0xf4 bytes
  0298cec  stdu 1, -128(1)
  0298cf0  mflr 0
  0298cf4  std 0, 144(1)
  0298cf8  std 31, 120(1)
  0298cfc  ori 31, 3, 0
  0298d00  lwz 3, 120(31)
  0298d04  lwz 3, 0(3)
  0298d08  cmpwi 3, -1
  0298d0c  bt 2, 0x298d34
  0298d10  extsw 3, 3
  0298d14  li 4, -1
  0298d18  bl 0x104214
  0298d1c  nop
  0298d20  cmpwi 3, 0
  0298d24  bf 2, 0x298d34
  0298d28  li 3, 23
  0298d2c  bl 0x11b728
  0298d30  nop
  0298d34  lbz 3, 32(31)
  0298d38  cmpwi 3, 0
  0298d3c  cmpwi 1, 3, -1
  0298d40  cmpwi 6, 3, 1
  0298d44  bt 1, 0x298d50
  0298d48  bf 5, 0x298dcc
  0298d4c  b 0x298d58
  0298d50  bf 25, 0x298d6c
  0298d54  b 0x298dcc
  0298d58  li 3, 255
  0298d5c  li 4, 1
  0298d60  stb 3, 48(31)
  0298d64  stb 4, 32(31)
  0298d68  b 0x298dcc
  0298d6c  lis 3, 161
  0298d70  lwz 3, 1800(3)
  0298d74  cmpwi 3, 2
  0298d78  bf 2, 0x298dcc
  0298d7c  lis 3, 150
  0298d80  addic 3, 3, -12976
  0298d84  lwz 4, 48(3)
  0298d88  cmpwi 1, 4, 4
  0298d8c  cmpwi 4, 3
  0298d90  cror 2, 2, 6
  0298d94  bt 2, 0x298da0
  0298d98  cmpwi 4, 5
  0298d9c  bf 2, 0x298dcc
  0298da0  cmpwi 4, 3
  0298da4  li 5, 0
  0298da8  bt 2, 0x298db8
  0298dac  bt 6, 0x298db8
  0298db0  cmpwi 4, 5
  0298db4  bf 2, 0x298dbc
  0298db8  li 5, 1
  0298dbc  rlwimi 3, 5, 2, 29, 29
  0298dc0  lwz 3, 376(3)
  0298dc4  bl 0x119600
  0298dc8  nop
  0298dcc  ld 0, 144(1)
  0298dd0  mtlr 0
  0298dd4  ld 31, 120(1)
  0298dd8  addi 1, 1, 128
  0298ddc  blr

M1559_00298de0:   # 0x298de0, 0x14 bytes
  0298de0  lis 3, 123
  0298de4  lis 4, 1
  0298de8  addic 3, 3, -18532
  0298dec  stw 4, 72(3)
  0298df0  blr

M1559_00298df8:   # 0x298df8, 0x8 bytes
  0298df8  li 3, 0
  0298dfc  blr
