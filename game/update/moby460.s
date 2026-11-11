# game/update/moby460.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M460_00392e10:   # 0x392e10, 0x14 bytes
  0392e10  lis 3, 132
  0392e14  lis 4, 1
  0392e18  addic 3, 3, 8864
  0392e1c  stw 4, 72(3)
  0392e20  blr

M460_00392e28:   # 0x392e28, 0x2c bytes
  0392e28  stdu 1, -112(1)
  0392e2c  mflr 0
  0392e30  std 0, 128(1)
  0392e34  lis 3, 132
  0392e38  addic 3, 3, 11056
  0392e3c  bl 0x17e558
  0392e40  nop
  0392e44  ld 0, 128(1)
  0392e48  mtlr 0
  0392e4c  addi 1, 1, 112
  0392e50  blr

UpdateMoby_460:   # 0x392e58, 0x88 bytes
  0392e58  stdu 1, -112(1)
  0392e5c  mflr 0
  0392e60  std 0, 128(1)
  0392e64  lbz 4, 32(3)
  0392e68  cmpwi 4, 0
  0392e6c  cmpwi 1, 4, 1
  0392e70  cmpwi 6, 4, -1
  0392e74  bt 1, 0x392e80
  0392e78  bf 25, 0x392ed0
  0392e7c  b 0x392e88
  0392e80  bf 5, 0x392ebc
  0392e84  b 0x392ed0
  0392e88  li 4, 1
  0392e8c  lis 7, 57
  0392e90  li 6, 255
  0392e94  lis 5, 132
  0392e98  stb 4, 32(3)
  0392e9c  addi 4, 7, 11860
  0392ea0  stb 6, 48(3)
  0392ea4  addic 3, 5, 11056
  0392ea8  li 5, 128
  0392eac  lfs 1, 0(4)
  0392eb0  bl 0x17e31c
  0392eb4  nop
  0392eb8  b 0x392ed0
  0392ebc  lis 5, 113
  0392ec0  ori 4, 3, 0
  0392ec4  addic 3, 5, -12928
  0392ec8  bl 0x6d760
  0392ecc  nop
  0392ed0  ld 0, 128(1)
  0392ed4  mtlr 0
  0392ed8  addi 1, 1, 112
  0392edc  blr
