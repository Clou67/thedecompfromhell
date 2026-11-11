# game/update/moby1291.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1291_0023e4b0:   # 0x23e4b0, 0x14 bytes
  023e4b0  lis 3, 121
  023e4b4  lis 4, 1
  023e4b8  addic 3, 3, -8600
  023e4bc  stw 4, 72(3)
  023e4c0  blr

M1291_0023e4d0:   # 0x23e4d0, 0x74 bytes
  023e4d0  stdu 1, -128(1)
  023e4d4  mflr 0
  023e4d8  std 0, 144(1)
  023e4dc  lis 4, 36
  023e4e0  std 31, 120(1)
  023e4e4  lis 5, 114
  023e4e8  lwz 31, 120(3)
  023e4ec  addi 4, 4, -6968
  023e4f0  addic 3, 31, 260
  023e4f4  lfs 3, 4(4)
  023e4f8  lfs 1, 0(4)
  023e4fc  lfs 4, -3052(5)
  023e500  fmuls 2, 4, 3
  023e504  bl 0x109af0
  023e508  nop
  023e50c  lis 4, 150
  023e510  lwz 3, 260(31)
  023e514  lfs 1, 260(31)
  023e518  cmpwi 3, 0
  023e51c  stfs 1, -12528(4)
  023e520  bt 1, 0x23e52c
  023e524  li 3, 1
  023e528  b 0x23e530
  023e52c  li 3, 0
  023e530  ld 0, 144(1)
  023e534  mtlr 0
  023e538  ld 31, 120(1)
  023e53c  addi 1, 1, 128
  023e540  blr

M1291_0023e550:   # 0x23e550, 0x90 bytes
  023e550  stdu 1, -128(1)
  023e554  mflr 0
  023e558  std 0, 144(1)
  023e55c  lis 4, 36
  023e560  std 31, 120(1)
  023e564  lis 5, 114
  023e568  lwz 31, 120(3)
  023e56c  addi 4, 4, -6844
  023e570  std 30, 112(1)
  023e574  addic 3, 31, 260
  023e578  lis 30, 16256
  023e57c  lfs 3, 4(4)
  023e580  lfs 1, 0(4)
  023e584  lfs 4, -3052(5)
  023e588  fmuls 2, 4, 3
  023e58c  bl 0x109af0
  023e590  nop
  023e594  lwz 3, 260(31)
  023e598  lis 5, 150
  023e59c  lfs 1, 260(31)
  023e5a0  srawi 4, 3, 31
  023e5a4  srwi 6, 4, 1
  023e5a8  xor 3, 6, 3
  023e5ac  stfs 1, -12528(5)
  023e5b0  subc 3, 3, 4
  023e5b4  cmpw 3, 30
  023e5b8  bt 0, 0x23e5c4
  023e5bc  li 3, 1
  023e5c0  b 0x23e5c8
  023e5c4  li 3, 0
  023e5c8  ld 0, 144(1)
  023e5cc  mtlr 0
  023e5d0  ld 30, 112(1)
  023e5d4  ld 31, 120(1)
  023e5d8  addi 1, 1, 128
  023e5dc  blr

M1291_0023e5e8:   # 0x23e5e8, 0xb0 bytes
  023e5e8  stdu 1, -128(1)
  023e5ec  mflr 0
  023e5f0  std 0, 144(1)
  023e5f4  lis 4, 121
  023e5f8  lwz 7, 36(3)
  023e5fc  lis 5, 36
  023e600  lis 6, 16256
  023e604  addi 5, 5, -6688
  023e608  std 31, 120(1)
  023e60c  lfs 1, -8492(4)
  023e610  lwz 31, 120(3)
  023e614  lfs 2, 36(7)
  023e618  lis 4, 165
  023e61c  stw 6, 88(3)
  023e620  lis 7, 17279
  023e624  fmuls 1, 2, 1
  023e628  addic 8, 4, 7136
  023e62c  addic 4, 31, 112
  023e630  li 6, 0
  023e634  stfs 1, 44(3)
  023e638  lwz 9, 192(31)
  023e63c  lfs 1, 0(5)
  023e640  slwi 5, 9, 2
  023e644  stw 7, 248(31)
  023e648  extsw 5, 5
  023e64c  li 7, 0
  023e650  lwzx 5, 8, 5
  023e654  addic 8, 5, 16
  023e658  lwz 9, 0(5)
  023e65c  extsw 9, 9
  023e660  bl 0x111ba0
  023e664  nop
  023e668  lwz 3, 176(31)
  023e66c  cmpwi 3, 0
  023e670  bf 2, 0x23e684
  023e674  lis 3, 151
  023e678  addic 3, 3, -25376
  023e67c  lwz 3, 8320(3)
  023e680  stw 3, 176(31)
  023e684  ld 0, 144(1)
  023e688  mtlr 0
  023e68c  ld 31, 120(1)
  023e690  addi 1, 1, 128
  023e694  blr

UpdateMoby_1291:   # 0x23e698, 0x24 bytes
  023e698  stdu 1, -112(1)
  023e69c  mflr 0
  023e6a0  std 0, 128(1)
  023e6a4  bl 0xefb38
  023e6a8  nop
  023e6ac  ld 0, 128(1)
  023e6b0  mtlr 0
  023e6b4  addi 1, 1, 112
  023e6b8  blr
