# game/update/moby1419.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1419_00272cb8:   # 0x272cb8, 0x14 bytes
  0272cb8  lis 3, 123
  0272cbc  lis 4, 1
  0272cc0  addic 3, 3, -25116
  0272cc4  stw 4, 72(3)
  0272cc8  blr

UpdateMoby_1419:   # 0x272cd0, 0x24c bytes
  0272cd0  stdu 1, -128(1)
  0272cd4  mflr 0
  0272cd8  std 0, 144(1)
  0272cdc  std 31, 120(1)
  0272ce0  ori 31, 3, 0
  0272ce4  li 4, 128
  0272ce8  std 30, 112(1)
  0272cec  lbz 3, 32(31)
  0272cf0  lwz 30, 120(31)
  0272cf4  cmpwi 3, 4
  0272cf8  cmpwi 1, 3, 0
  0272cfc  stb 4, 48(31)
  0272d00  cmpwi 6, 3, 1
  0272d04  cmpwi 7, 3, 2
  0272d08  bt 2, 0x272ee0
  0272d0c  cmpwi 3, 3
  0272d10  bt 2, 0x272e6c
  0272d14  bt 30, 0x272dd4
  0272d18  bt 26, 0x272dfc
  0272d1c  bf 6, 0x272ee0
  0272d20  lis 3, 151
  0272d24  lbz 5, 176(31)
  0272d28  lis 4, 161
  0272d2c  addic 4, 4, -13692
  0272d30  lwz 3, -25488(3)
  0272d34  addc 4, 5, 4
  0272d38  slwi 3, 3, 4
  0272d3c  clrldi 4, 4, 32
  0272d40  extsw 3, 3
  0272d44  lbzx 3, 4, 3
  0272d48  cmpwi 3, 255
  0272d4c  bt 2, 0x272ee0
  0272d50  lis 3, 268
  0272d54  lwz 3, 20780(3)
  0272d58  cmpwi 3, 0
  0272d5c  bf 2, 0x272ee0
  0272d60  lis 3, 151
  0272d64  lwz 4, 0(30)
  0272d68  addic 3, 3, -25248
  0272d6c  extsw 4, 4
  0272d70  bl 0x110b70
  0272d74  nop
  0272d78  cmpwi 3, 0
  0272d7c  bt 2, 0x272ee0
  0272d80  lis 3, 164
  0272d84  lwz 4, 8(30)
  0272d88  slwi 4, 4, 8
  0272d8c  lwz 3, -28512(3)
  0272d90  addc 3, 3, 4
  0272d94  clrldi 3, 3, 32
  0272d98  lbz 3, 32(3)
  0272d9c  cmpwi 3, 3
  0272da0  bf 2, 0x272ee0
  0272da4  li 4, 0
  0272da8  li 3, 3
  0272dac  bl 0x167e60
  0272db0  nop
  0272db4  li 4, 2
  0272db8  lbz 3, 176(31)
  0272dbc  stb 4, 32(31)
  0272dc0  bl 0xf1e50
  0272dc4  nop
  0272dc8  bl 0x7d5c0
  0272dcc  nop
  0272dd0  b 0x272ee0
  0272dd4  lis 3, 161
  0272dd8  lwz 3, 1800(3)
  0272ddc  cmpwi 3, 2
  0272de0  bt 2, 0x272ee0
  0272de4  li 3, 17
  0272de8  bl 0x168dec
  0272dec  nop
  0272df0  li 3, 1
  0272df4  stb 3, 32(31)
  0272df8  b 0x272ee0
  0272dfc  lis 3, 161
  0272e00  lwz 3, 1800(3)
  0272e04  cmpwi 3, 2
  0272e08  bt 2, 0x272ee0
  0272e0c  li 3, 4
  0272e10  li 4, 0
  0272e14  bl 0x167e60
  0272e18  nop
  0272e1c  li 3, 3
  0272e20  stb 3, 32(31)
  0272e24  bl 0x7d478
  0272e28  nop
  0272e2c  lwz 30, 4(30)
  0272e30  cmpwi 30, -1
  0272e34  bt 2, 0x272ee0
  0272e38  lis 3, 165
  0272e3c  slwi 4, 30, 7
  0272e40  li 5, 0
  0272e44  li 6, 1
  0272e48  lwz 3, 7128(3)
  0272e4c  addc 3, 3, 4
  0272e50  addic 4, 3, 48
  0272e54  addic 7, 3, 112
  0272e58  clrldi 3, 4, 32
  0272e5c  clrldi 4, 7, 32
  0272e60  bl 0xa0c38
  0272e64  nop
  0272e68  b 0x272ee0
  0272e6c  lis 3, 161
  0272e70  lwz 3, 1800(3)
  0272e74  cmpwi 3, 2
  0272e78  bt 2, 0x272ee0
  0272e7c  li 3, 17
  0272e80  bl 0x112c20
  0272e84  nop
  0272e88  lwz 30, 4(30)
  0272e8c  cmpwi 30, -1
  0272e90  bt 2, 0x272ebc
  0272e94  lis 3, 165
  0272e98  slwi 4, 30, 7
  0272e9c  lwz 3, 7128(3)
  0272ea0  addc 3, 3, 4
  0272ea4  addic 4, 3, 48
  0272ea8  addic 5, 3, 112
  0272eac  clrldi 3, 4, 32
  0272eb0  clrldi 4, 5, 32
  0272eb4  bl 0x151e70
  0272eb8  nop
  0272ebc  li 3, 17
  0272ec0  bl 0x112af0
  0272ec4  nop
  0272ec8  li 3, 0
  0272ecc  li 4, -1
  0272ed0  bl 0xe8aa4
  0272ed4  nop
  0272ed8  li 3, 4
  0272edc  stb 3, 32(31)
  0272ee0  lis 3, 161
  0272ee4  lwz 3, 1800(3)
  0272ee8  cmpwi 3, 2
  0272eec  bf 2, 0x272f04
  0272ef0  lis 3, 113
  0272ef4  ori 4, 31, 0
  0272ef8  addic 3, 3, -23376
  0272efc  bl 0x6d720
  0272f00  nop
  0272f04  ld 0, 144(1)
  0272f08  mtlr 0
  0272f0c  ld 30, 112(1)
  0272f10  ld 31, 120(1)
  0272f14  addi 1, 1, 128
  0272f18  blr
