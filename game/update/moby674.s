# game/update/moby674.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_674:   # 0x40f2b0, 0x334 bytes
  040f2b0  stdu 1, -144(1)
  040f2b4  mflr 0
  040f2b8  std 0, 160(1)
  040f2bc  std 31, 136(1)
  040f2c0  std 29, 120(1)
  040f2c4  ori 31, 3, 0
  040f2c8  li 6, 0
  040f2cc  std 30, 128(1)
  040f2d0  ori 29, 6, 0
  040f2d4  lwz 30, 120(31)
  040f2d8  lbz 5, 32(31)
  040f2dc  lwz 4, 36(31)
  040f2e0  lhz 3, 52(31)
  040f2e4  cmpwi 1, 5, 0
  040f2e8  lwz 7, 0(30)
  040f2ec  cmpwi 6, 5, 4
  040f2f0  cmpwi 7, -1
  040f2f4  cmpwi 7, 5, 3
  040f2f8  bt 2, 0x40f310
  040f2fc  lis 6, 164
  040f300  slwi 7, 7, 8
  040f304  lwz 6, -28512(6)
  040f308  addc 6, 6, 7
  040f30c  clrldi 6, 6, 32
  040f310  ori 9, 29, 0
  040f314  ori 8, 9, 0
  040f318  bf 5, 0x40f380
  040f31c  ori 11, 29, 0
  040f320  ori 10, 30, 0
  040f324  lbz 12, 4(10)
  040f328  lbz 7, 32(6)
  040f32c  extsb 12, 12
  040f330  cmpw 7, 12
  040f334  bf 2, 0x40f340
  040f338  li 9, 1
  040f33c  b 0x40f350
  040f340  addic 11, 11, 1
  040f344  addic 10, 10, 1
  040f348  cmpwi 11, 6
  040f34c  bt 0, 0x40f324
  040f350  ori 11, 29, 0
  040f354  ori 10, 30, 0
  040f358  lbz 12, 10(10)
  040f35c  extsb 12, 12
  040f360  cmpw 7, 12
  040f364  bf 2, 0x40f370
  040f368  li 8, 1
  040f36c  b 0x40f380
  040f370  addic 11, 11, 1
  040f374  addic 10, 10, 1
  040f378  cmpwi 11, 6
  040f37c  bt 0, 0x40f358
  040f380  cmpwi 1, 8, 0
  040f384  bt 26, 0x40f4fc
  040f388  cmpwi 1, 9, 0
  040f38c  bt 30, 0x40f4d4
  040f390  cmpwi 5, 2
  040f394  cmpwi 1, 9, 0
  040f398  bt 2, 0x40f46c
  040f39c  cmpwi 5, 1
  040f3a0  cmpwi 1, 8, 0
  040f3a4  bt 2, 0x40f458
  040f3a8  cmpwi 5, 0
  040f3ac  cmpwi 1, 6, 0
  040f3b0  bf 2, 0x40f558
  040f3b4  bf 6, 0x40f3e8
  040f3b8  lis 3, 101
  040f3bc  lhz 4, 178(31)
  040f3c0  lhz 5, 166(31)
  040f3c4  addic 3, 3, 28928
  040f3c8  extsh 4, 4
  040f3cc  extsh 5, 5
  040f3d0  bl 0x5cd098
  040f3d4  nop
  040f3d8  ori 3, 31, 0
  040f3dc  bl 0xefb38
  040f3e0  nop
  040f3e4  b 0x40f5c8
  040f3e8  ori 3, 31, 0
  040f3ec  li 4, 128
  040f3f0  li 5, 128
  040f3f4  li 6, 128
  040f3f8  bl 0xf1ec8
  040f3fc  nop
  040f400  lhz 3, 52(31)
  040f404  lwz 4, 24(30)
  040f408  ori 3, 3, 2568
  040f40c  cmpwi 4, 0
  040f410  sth 3, 52(31)
  040f414  bf 2, 0x40f440
  040f418  lis 3, 16256
  040f41c  lwz 6, 36(31)
  040f420  li 5, 1
  040f424  li 4, 20
  040f428  stw 3, 16(30)
  040f42c  stb 5, 32(31)
  040f430  lwz 3, 16(6)
  040f434  stb 4, 35(31)
  040f438  stw 3, 148(31)
  040f43c  b 0x40f558
  040f440  li 3, 3
  040f444  stw 29, 16(30)
  040f448  stb 3, 32(31)
  040f44c  stw 29, 148(31)
  040f450  stb 29, 35(31)
  040f454  b 0x40f558
  040f458  bt 6, 0x40f558
  040f45c  li 3, 2
  040f460  stb 3, 32(31)
  040f464  stw 29, 148(31)
  040f468  b 0x40f558
  040f46c  bt 6, 0x40f480
  040f470  li 3, 4
  040f474  stb 3, 32(31)
  040f478  lwz 3, 16(4)
  040f47c  stw 3, 148(31)
  040f480  lis 3, 65
  040f484  lfs 1, 16(30)
  040f488  lis 4, 114
  040f48c  addi 3, 3, -3424
  040f490  lfs 2, 0(3)
  040f494  lfs 3, -3064(4)
  040f498  fnmsubs 1, 3, 2, 1
  040f49c  stfs 1, 16(30)
  040f4a0  lfs 2, 4(3)
  040f4a4  fcmpu 0, 1, 2
  040f4a8  cror 6, 1, 2
  040f4ac  bt 6, 0x40f558
  040f4b0  li 3, 3
  040f4b4  lhz 4, 52(31)
  040f4b8  stw 29, 16(30)
  040f4bc  ori 4, 4, 1
  040f4c0  stb 3, 32(31)
  040f4c4  stw 29, 148(31)
  040f4c8  stb 29, 49(31)
  040f4cc  sth 4, 52(31)
  040f4d0  b 0x40f558
  040f4d4  bt 6, 0x40f558
  040f4d8  li 5, 4
  040f4dc  rlwinm 3, 3, 0, 16, 30
  040f4e0  li 6, 1
  040f4e4  stb 5, 32(31)
  040f4e8  lwz 4, 16(4)
  040f4ec  sth 3, 52(31)
  040f4f0  stw 4, 148(31)
  040f4f4  stb 6, 49(31)
  040f4f8  b 0x40f558
  040f4fc  bt 6, 0x40f50c
  040f500  li 3, 2
  040f504  stb 3, 32(31)
  040f508  stw 29, 148(31)
  040f50c  lis 3, 65
  040f510  lis 4, 114
  040f514  lfs 1, 16(30)
  040f518  addi 3, 3, -3424
  040f51c  lfs 2, 0(3)
  040f520  lfs 3, -3064(4)
  040f524  fmadds 1, 3, 2, 1
  040f528  stfs 1, 16(30)
  040f52c  lfs 2, 8(3)
  040f530  fcmpu 0, 1, 2
  040f534  cror 6, 0, 2
  040f538  bt 6, 0x40f558
  040f53c  lis 3, 16256
  040f540  li 4, 1
  040f544  lwz 5, 36(31)
  040f548  stw 3, 16(30)
  040f54c  stb 4, 32(31)
  040f550  lwz 3, 16(5)
  040f554  stw 3, 148(31)
  040f558  lis 3, 65
  040f55c  lfs 1, 16(30)
  040f560  addi 3, 3, -3424
  040f564  lfs 2, 12(3)
  040f568  fmuls 1, 1, 2
  040f56c  bl 0x502758
  040f570  nop
  040f574  stb 3, 35(31)
  040f578  lwz 3, 20(30)
  040f57c  li 5, 192
  040f580  addic 4, 3, 192
  040f584  cmpwi 4, 4096
  040f588  stw 4, 20(30)
  040f58c  bf 1, 0x40f5a0
  040f590  addic 3, 3, -3904
  040f594  li 5, -3904
  040f598  stw 3, 20(30)
  040f59c  b 0x40f5b4
  040f5a0  cmpwi 4, 0
  040f5a4  bf 0, 0x40f5b4
  040f5a8  addic 3, 3, 4288
  040f5ac  li 5, 4288
  040f5b0  stw 3, 20(30)
  040f5b4  ori 4, 5, 0
  040f5b8  li 5, 0
  040f5bc  lwz 3, 36(31)
  040f5c0  bl 0xf0838
  040f5c4  nop
  040f5c8  ld 0, 160(1)
  040f5cc  mtlr 0
  040f5d0  ld 29, 120(1)
  040f5d4  ld 30, 128(1)
  040f5d8  ld 31, 136(1)
  040f5dc  addi 1, 1, 144
  040f5e0  blr
