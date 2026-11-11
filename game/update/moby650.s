# game/update/moby650.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M650_00401de4:   # 0x401de4, 0x4c bytes
  0401de4  lhz 5, 166(3)
  0401de8  lwz 4, 120(3)
  0401dec  cmpwi 5, 65
  0401df0  bf 2, 0x401e2c
  0401df4  lbz 5, 32(3)
  0401df8  cmpwi 5, 1
  0401dfc  bf 2, 0x401e2c
  0401e00  lis 5, 151
  0401e04  li 6, 1
  0401e08  addic 5, 5, -16400
  0401e0c  li 7, 2
  0401e10  stb 6, 90(5)
  0401e14  stb 7, 32(3)
  0401e18  lwz 3, 8(4)
  0401e1c  cmpwi 3, 0
  0401e20  bt 2, 0x401e2c
  0401e24  li 4, 2
  0401e28  stb 4, 32(3)
  0401e2c  blr

M650_00401e30:   # 0x401e30, 0x14 bytes
  0401e30  lis 3, 133
  0401e34  lis 4, 1
  0401e38  addic 3, 3, 18556
  0401e3c  stw 4, 72(3)
  0401e40  blr

UpdateMoby_650:   # 0x401e50, 0x134 bytes
  0401e50  stdu 1, -128(1)
  0401e54  mflr 0
  0401e58  std 0, 144(1)
  0401e5c  std 31, 120(1)
  0401e60  lbz 4, 32(3)
  0401e64  std 30, 112(1)
  0401e68  ori 31, 3, 0
  0401e6c  lwz 30, 120(3)
  0401e70  cmpwi 4, 0
  0401e74  cmpwi 1, 4, 1
  0401e78  cmpwi 6, 4, -1
  0401e7c  bt 1, 0x401e88
  0401e80  bf 25, 0x401f6c
  0401e84  b 0x401e90
  0401e88  bf 5, 0x401ea4
  0401e8c  b 0x401f6c
  0401e90  li 3, 1
  0401e94  lfs 1, 24(31)
  0401e98  stb 3, 32(31)
  0401e9c  stfs 1, 0(30)
  0401ea0  b 0x401f6c
  0401ea4  addic 3, 30, 8
  0401ea8  bl 0x4fff60
  0401eac  nop
  0401eb0  cmpwi 3, 0
  0401eb4  bt 2, 0x401f24
  0401eb8  cmpwi 3, 2
  0401ebc  bf 2, 0x401f1c
  0401ec0  lis 3, 269
  0401ec4  lis 4, 161
  0401ec8  li 5, 0
  0401ecc  lwz 6, -17440(3)
  0401ed0  lwz 3, 1808(4)
  0401ed4  subc 4, 6, 3
  0401ed8  extsw 4, 4
  0401edc  neg 6, 4
  0401ee0  subc 5, 4, 5
  0401ee4  subc 6, 6, 4
  0401ee8  sradi 5, 5, 63
  0401eec  and 5, 5, 6
  0401ef0  addc 4, 4, 5
  0401ef4  cmpwi 4, 3
  0401ef8  bf 1, 0x401f1c
  0401efc  lis 7, 269
  0401f00  ori 6, 3, 0
  0401f04  li 3, 1
  0401f08  li 4, 0
  0401f0c  ori 5, 31, 0
  0401f10  stw 6, -17440(7)
  0401f14  bl 0x15d12c
  0401f18  nop
  0401f1c  lfs 1, 0(30)
  0401f20  b 0x401f34
  0401f24  lis 3, 133
  0401f28  lfs 1, 0(30)
  0401f2c  lfs 2, 18664(3)
  0401f30  fadds 1, 1, 2
  0401f34  lis 3, 64
  0401f38  lis 4, 114
  0401f3c  addi 3, 3, 7752
  0401f40  lis 6, 114
  0401f44  addic 5, 30, 4
  0401f48  lfs 4, 0(3)
  0401f4c  lfs 3, -3048(4)
  0401f50  lfs 5, -3052(6)
  0401f54  addic 3, 31, 24
  0401f58  fmuls 2, 3, 4
  0401f5c  fmuls 4, 5, 4
  0401f60  fmr 3, 2
  0401f64  bl 0x109c30
  0401f68  nop
  0401f6c  ld 0, 144(1)
  0401f70  mtlr 0
  0401f74  ld 30, 112(1)
  0401f78  ld 31, 120(1)
  0401f7c  addi 1, 1, 128
  0401f80  blr
