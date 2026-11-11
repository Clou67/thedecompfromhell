# game/update/moby571.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_571:   # 0x3bd530, 0x148 bytes
  03bd530  stdu 1, -144(1)
  03bd534  mflr 0
  03bd538  std 0, 160(1)
  03bd53c  std 31, 136(1)
  03bd540  lbz 4, 32(3)
  03bd544  std 30, 128(1)
  03bd548  ori 31, 3, 0
  03bd54c  lwz 30, 120(3)
  03bd550  cmpwi 4, 0
  03bd554  cmpwi 1, 4, 1
  03bd558  std 29, 120(1)
  03bd55c  cmpwi 6, 4, -1
  03bd560  bt 1, 0x3bd56c
  03bd564  bf 25, 0x3bd65c
  03bd568  b 0x3bd574
  03bd56c  bf 5, 0x3bd5e0
  03bd570  b 0x3bd65c
  03bd574  lis 3, 151
  03bd578  addic 3, 3, -25376
  03bd57c  lwz 4, 4280(3)
  03bd580  cmpwi 4, 26
  03bd584  bf 2, 0x3bd65c
  03bd588  lfs 1, 132(3)
  03bd58c  lfs 2, 20(31)
  03bd590  lfs 3, 128(3)
  03bd594  fsubs 1, 1, 2
  03bd598  lfs 2, 16(31)
  03bd59c  fsubs 2, 3, 2
  03bd5a0  lis 4, 60
  03bd5a4  addi 4, 4, -10976
  03bd5a8  fmuls 1, 1, 1
  03bd5ac  fmadds 1, 2, 2, 1
  03bd5b0  lfs 2, 0(4)
  03bd5b4  fsqrts 1, 1
  03bd5b8  fcmpu 0, 1, 2
  03bd5bc  cror 6, 1, 2
  03bd5c0  bt 6, 0x3bd65c
  03bd5c4  lwz 3, 4240(3)
  03bd5c8  lbz 3, 188(3)
  03bd5cc  cmpwi 3, 0
  03bd5d0  bt 2, 0x3bd65c
  03bd5d4  li 3, 1
  03bd5d8  stb 3, 32(31)
  03bd5dc  b 0x3bd65c
  03bd5e0  lis 3, 60
  03bd5e4  lfs 1, 64(31)
  03bd5e8  addi 29, 3, -10976
  03bd5ec  lis 3, 114
  03bd5f0  lfs 2, 4(29)
  03bd5f4  lfs 3, -3052(3)
  03bd5f8  fmuls 2, 3, 2
  03bd5fc  bl 0x502578
  03bd600  nop
  03bd604  lis 3, 114
  03bd608  stfs 1, 64(31)
  03bd60c  lfs 1, 12(29)
  03bd610  lfs 2, -3056(3)
  03bd614  fmuls 2, 2, 1
  03bd618  addic 3, 31, 44
  03bd61c  lwz 4, 36(31)
  03bd620  lfs 1, 8(29)
  03bd624  lfs 3, 36(4)
  03bd628  fctidz 2, 2
  03bd62c  fcfid 2, 2
  03bd630  frsp 2, 2
  03bd634  fdivs 2, 3, 2
  03bd638  bl 0x109af0
  03bd63c  nop
  03bd640  lwz 3, 44(31)
  03bd644  cmpwi 3, 0
  03bd648  bf 2, 0x3bd65c
  03bd64c  li 3, 2
  03bd650  lis 4, 16256
  03bd654  stb 3, 32(31)
  03bd658  stw 4, 0(30)
  03bd65c  ld 0, 160(1)
  03bd660  mtlr 0
  03bd664  ld 29, 120(1)
  03bd668  ld 30, 128(1)
  03bd66c  ld 31, 136(1)
  03bd670  addi 1, 1, 144
  03bd674  blr
