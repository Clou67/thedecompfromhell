# game/update/moby1442.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1442_0027f360:   # 0x27f360, 0x14 bytes
  027f360  lis 3, 123
  027f364  lis 4, 1
  027f368  addic 3, 3, -22344
  027f36c  stw 4, 72(3)
  027f370  blr

M1442_0027f378:   # 0x27f378, 0x24 bytes
  027f378  lis 4, -16311
  027f37c  lwz 7, 120(3)
  027f380  li 5, 1
  027f384  ori 4, 4, 4058
  027f388  li 6, 2
  027f38c  stw 4, 0(7)
  027f390  stb 5, 188(3)
  027f394  stb 6, 32(3)
  027f398  blr

UpdateMoby_1442:   # 0x27f3d0, 0x32c bytes
  027f3d0  stdu 1, -144(1)
  027f3d4  mflr 0
  027f3d8  std 0, 160(1)
  027f3dc  std 31, 136(1)
  027f3e0  lbz 4, 32(3)
  027f3e4  std 30, 128(1)
  027f3e8  ori 31, 3, 0
  027f3ec  lwz 30, 120(3)
  027f3f0  cmpwi 4, 0
  027f3f4  cmpwi 1, 4, -1
  027f3f8  std 29, 120(1)
  027f3fc  cmpwi 6, 4, 1
  027f400  bt 1, 0x27f40c
  027f404  bf 5, 0x27f610
  027f408  b 0x27f414
  027f40c  bf 25, 0x27f42c
  027f410  b 0x27f610
  027f414  li 3, 1
  027f418  stb 3, 32(31)
  027f41c  bl 0xfcc68
  027f420  nop
  027f424  stfs 1, 0(30)
  027f428  b 0x27f610
  027f42c  addic 3, 30, 4
  027f430  bl 0x4fff60
  027f434  nop
  027f438  cmpwi 3, 0
  027f43c  bt 2, 0x27f5b8
  027f440  lis 3, 151
  027f444  lfs 2, 20(31)
  027f448  addic 3, 3, -25376
  027f44c  lfs 4, 16(31)
  027f450  lis 4, 40
  027f454  lfs 1, 132(3)
  027f458  lfs 3, 128(3)
  027f45c  fsubs 5, 2, 1
  027f460  fsubs 6, 4, 3
  027f464  addi 4, 4, -3172
  027f468  fmuls 5, 5, 5
  027f46c  fmadds 5, 6, 6, 5
  027f470  lfs 6, 0(4)
  027f474  fsqrts 5, 5
  027f478  fcmpu 0, 5, 6
  027f47c  cror 6, 1, 2
  027f480  bt 6, 0x27f5b8
  027f484  lwz 4, 8324(3)
  027f488  cmpwi 4, 40
  027f48c  bf 2, 0x27f5b8
  027f490  lwz 4, 1448(3)
  027f494  cmpwi 4, -1
  027f498  cmpwi 6, 4, 3
  027f49c  cmpwi 7, 4, 2
  027f4a0  bt 2, 0x27f5b8
  027f4a4  lis 4, 123
  027f4a8  addic 5, 4, -22224
  027f4ac  lfs 5, -22224(4)
  027f4b0  lfs 6, 196(31)
  027f4b4  lfs 7, 192(31)
  027f4b8  fmadds 2, 6, 5, 2
  027f4bc  lfs 6, 4(5)
  027f4c0  fmadds 4, 7, 5, 4
  027f4c4  lfs 7, 8(5)
  027f4c8  lfs 8, 228(31)
  027f4cc  lfs 9, 216(31)
  027f4d0  lfs 10, 224(31)
  027f4d4  fmuls 9, 9, 6
  027f4d8  lfs 11, 212(31)
  027f4dc  lfs 12, 200(31)
  027f4e0  lis 4, 40
  027f4e4  lfs 13, 208(31)
  027f4e8  fmadds 2, 8, 7, 2
  027f4ec  fmadds 4, 10, 7, 4
  027f4f0  lfs 8, 232(31)
  027f4f4  addi 4, 4, -3172
  027f4f8  fmadds 5, 12, 5, 9
  027f4fc  lfs 9, 24(31)
  027f500  fmadds 2, 11, 6, 2
  027f504  fmadds 4, 13, 6, 4
  027f508  lfs 6, 84(3)
  027f50c  lfs 10, 136(3)
  027f510  fmadds 5, 8, 7, 5
  027f514  fsubs 1, 2, 1
  027f518  fsubs 2, 4, 3
  027f51c  lfs 3, 68(3)
  027f520  fadds 4, 5, 9
  027f524  lfs 5, 100(3)
  027f528  lfs 7, 80(3)
  027f52c  fmuls 6, 6, 1
  027f530  fmuls 1, 7, 1
  027f534  fsubs 4, 4, 10
  027f538  fmadds 3, 3, 2, 6
  027f53c  lfs 6, 4(4)
  027f540  lfs 7, 64(3)
  027f544  lfs 8, 96(3)
  027f548  fmadds 1, 7, 2, 1
  027f54c  fmadds 2, 5, 4, 3
  027f550  fmadds 1, 8, 4, 1
  027f554  fabs 2, 2
  027f558  fcmpu 0, 2, 6
  027f55c  cror 6, 1, 2
  027f560  bt 6, 0x27f5b8
  027f564  lis 3, 40
  027f568  addi 3, 3, -3172
  027f56c  lfs 2, 8(3)
  027f570  fcmpu 1, 1, 2
  027f574  bf 5, 0x27f57c
  027f578  bt 26, 0x27f584
  027f57c  bf 4, 0x27f5b8
  027f580  bf 30, 0x27f5b8
  027f584  lis 3, -16311
  027f588  lwz 8, 120(31)
  027f58c  li 6, 1
  027f590  ori 7, 3, 4058
  027f594  li 9, 2
  027f598  li 3, 1
  027f59c  li 4, 0
  027f5a0  stw 7, 0(8)
  027f5a4  stb 6, 188(31)
  027f5a8  ori 5, 31, 0
  027f5ac  stb 9, 32(31)
  027f5b0  bl 0x15d12c
  027f5b4  nop
  027f5b8  ori 3, 31, 0
  027f5bc  lis 4, 51
  027f5c0  li 5, 0
  027f5c4  bl 0x10675c
  027f5c8  nop
  027f5cc  cmpwi 3, 0
  027f5d0  bt 2, 0x27f610
  027f5d4  lis 3, -16311
  027f5d8  lwz 8, 120(31)
  027f5dc  li 6, 1
  027f5e0  ori 7, 3, 4058
  027f5e4  li 9, 2
  027f5e8  li 3, 0
  027f5ec  li 4, 0
  027f5f0  stw 7, 0(8)
  027f5f4  stb 6, 188(31)
  027f5f8  ori 5, 31, 0
  027f5fc  stb 9, 32(31)
  027f600  bl 0x15d12c
  027f604  nop
  027f608  li 3, 255
  027f60c  stb 3, 164(31)
  027f610  lis 3, 40
  027f614  lfs 1, 0(30)
  027f618  addi 29, 3, -3172
  027f61c  lis 3, 114
  027f620  lfs 2, 12(29)
  027f624  lfs 3, -3052(3)
  027f628  fmuls 2, 3, 2
  027f62c  bl 0x502578
  027f630  nop
  027f634  stfs 1, 0(30)
  027f638  lfs 2, 16(29)
  027f63c  lfs 3, 20(29)
  027f640  fsubs 2, 2, 1
  027f644  fsubs 3, 3, 1
  027f648  fsub 4, 1, 2
  027f64c  fsel 1, 4, 2, 1
  027f650  lfs 2, 24(29)
  027f654  lfs 4, 28(29)
  027f658  fsub 5, 3, 1
  027f65c  fsel 1, 5, 3, 1
  027f660  lfs 3, 32(29)
  027f664  lfs 5, 36(29)
  027f668  lfs 7, 40(29)
  027f66c  lbz 3, 188(31)
  027f670  cmpwi 3, 0
  027f674  fmuls 6, 1, 1
  027f678  fmuls 8, 6, 1
  027f67c  fmuls 9, 6, 8
  027f680  fmadds 1, 8, 2, 1
  027f684  lfs 2, 44(29)
  027f688  fmuls 8, 6, 9
  027f68c  fmadds 1, 9, 4, 1
  027f690  fmuls 4, 6, 8
  027f694  fmadds 1, 8, 3, 1
  027f698  fmadds 1, 4, 5, 1
  027f69c  fadds 1, 1, 7
  027f6a0  fmuls 1, 1, 2
  027f6a4  bt 2, 0x27f6c4
  027f6a8  lis 3, -32736
  027f6ac  lis 4, -32736
  027f6b0  ori 3, 3, 32800
  027f6b4  ori 4, 4, 8224
  027f6b8  bl 0x5027bc
  027f6bc  nop
  027f6c0  b 0x27f6dc
  027f6c4  lis 3, -32736
  027f6c8  lis 4, -32736
  027f6cc  ori 3, 3, 8320
  027f6d0  ori 4, 4, 8224
  027f6d4  bl 0x5027bc
  027f6d8  nop
  027f6dc  stw 3, 144(31)
  027f6e0  ld 0, 160(1)
  027f6e4  mtlr 0
  027f6e8  ld 29, 120(1)
  027f6ec  ld 30, 128(1)
  027f6f0  ld 31, 136(1)
  027f6f4  addi 1, 1, 144
  027f6f8  blr
