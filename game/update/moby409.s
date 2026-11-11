# game/update/moby409.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_MOBY409:   # 0x1f210, 0x14 bytes
  001f210  lis 3, 114
  001f214  lis 4, 1
  001f218  addic 3, 3, -12096
  001f21c  stw 4, 72(3)
  001f220  blr

M409_0001f240:   # 0x1f240, 0x4b4 bytes
  001f240  stdu 1, -288(1)
  001f244  mflr 0
  001f248  std 0, 304(1)
  001f24c  stfd 29, 264(1)
  001f250  stfd 30, 272(1)
  001f254  stfd 31, 280(1)
  001f258  addi 0, 1, 208
  001f25c  stvx 31, 0, 0
  001f260  std 31, 256(1)
  001f264  ori 31, 3, 0
  001f268  li 3, 409
  001f26c  stw 6, 192(1)
  001f270  li 0, 192
  001f274  stw 6, 196(1)
  001f278  std 29, 240(1)
  001f27c  stw 6, 200(1)
  001f280  ori 29, 5, 0
  001f284  stw 6, 204(1)
  001f288  fmr 29, 3
  001f28c  std 30, 248(1)
  001f290  fmr 30, 2
  001f294  ori 30, 4, 0
  001f298  fmr 31, 1
  001f29c  std 28, 232(1)
  001f2a0  lvx 31, 1, 0
  001f2a4  bl 0xefa28
  001f2a8  nop
  001f2ac  ori 28, 3, 0
  001f2b0  cmpwi 28, 0
  001f2b4  bt 2, 0x1f6bc
  001f2b8  li 3, 255
  001f2bc  li 4, 126
  001f2c0  li 5, 1
  001f2c4  stb 3, 48(28)
  001f2c8  sth 4, 50(28)
  001f2cc  stb 5, 49(28)
  001f2d0  stb 5, 32(28)
  001f2d4  lfs 1, 0(30)
  001f2d8  lwz 3, 120(28)
  001f2dc  stfs 1, 16(28)
  001f2e0  lfs 1, 4(30)
  001f2e4  stfs 1, 20(28)
  001f2e8  lis 6, 2
  001f2ec  lfs 1, 8(30)
  001f2f0  addi 6, 6, -3536
  001f2f4  stfs 1, 24(28)
  001f2f8  lfs 1, 12(30)
  001f2fc  stfs 1, 28(28)
  001f300  lwz 4, 0(31)
  001f304  lfs 1, 0(31)
  001f308  stfs 1, 0(3)
  001f30c  lwz 5, 4(31)
  001f310  lfs 2, 4(31)
  001f314  fabs 5, 1
  001f318  fabs 3, 2
  001f31c  stfs 2, 4(3)
  001f320  lfs 1, 8(31)
  001f324  stfs 1, 8(3)
  001f328  lfs 1, 12(31)
  001f32c  stfs 1, 12(3)
  001f330  rlwinm 5, 5, 3, 29, 29
  001f334  lis 31, 115
  001f338  fsubs 1, 5, 3
  001f33c  addic 31, 31, 22784
  001f340  stfs 1, 120(1)
  001f344  lfs 4, 0(6)
  001f348  lfs 2, 4(6)
  001f34c  lwz 6, 120(1)
  001f350  lfs 1, 120(1)
  001f354  rlwimi 5, 6, 2, 30, 30
  001f358  fsub 6, 1, 4
  001f35c  fsub 7, 1, 4
  001f360  rlwimi 5, 4, 4, 28, 28
  001f364  ori 4, 31, 0
  001f368  rlwimi 4, 5, 2, 26, 28
  001f36c  slwi 5, 5, 2
  001f370  clrldi 4, 4, 32
  001f374  fsel 6, 6, 5, 3
  001f378  lfsx 1, 31, 5
  001f37c  fsel 5, 7, 3, 5
  001f380  lfs 3, 4(4)
  001f384  fcmpu 0, 6, 4
  001f388  bt 1, 0x1f394
  001f38c  fmr 1, 4
  001f390  b 0x1f4ac
  001f394  fsubs 7, 5, 6
  001f398  fadds 5, 5, 6
  001f39c  addic 4, 1, 16
  001f3a0  li 8, 2
  001f3a4  addic 5, 4, 140
  001f3a8  addic 6, 4, 156
  001f3ac  mtctr 8
  001f3b0  fdivs 5, 7, 5
  001f3b4  fmuls 6, 5, 5
  001f3b8  stfs 5, 168(1)
  001f3bc  stfs 5, 160(1)
  001f3c0  stfs 5, 164(1)
  001f3c4  stfs 5, 156(1)
  001f3c8  lfs 8, 168(1)
  001f3cc  lfs 9, 160(1)
  001f3d0  lfs 10, 164(1)
  001f3d4  fmuls 7, 6, 6
  001f3d8  fmuls 9, 9, 6
  001f3dc  fmuls 8, 8, 7
  001f3e0  fmuls 5, 7, 7
  001f3e4  fmuls 7, 10, 7
  001f3e8  stfs 9, 160(1)
  001f3ec  fmuls 6, 8, 6
  001f3f0  stfs 7, 164(1)
  001f3f4  stfs 6, 168(1)
  001f3f8  lfs 6, 140(4)
  001f3fc  fmuls 6, 6, 5
  001f400  stfs 6, 156(4)
  001f404  lfs 6, 4(5)
  001f408  addic 4, 4, 8
  001f40c  addic 5, 5, 8
  001f410  fmuls 6, 6, 5
  001f414  stfs 6, 4(6)
  001f418  addic 6, 6, 8
  001f41c  bdnz 0x1f3f8
  001f420  ori 4, 1, 0
  001f424  lis 5, 115
  001f428  li 9, 4
  001f42c  addic 6, 4, 156
  001f430  addic 5, 5, 22752
  001f434  ori 7, 6, 0
  001f438  mtctr 9
  001f43c  lfs 5, 156(4)
  001f440  lfs 6, 0(5)
  001f444  fmuls 5, 5, 6
  001f448  lfs 6, 4(5)
  001f44c  addic 5, 5, 8
  001f450  stfs 5, 156(4)
  001f454  lfs 5, 4(6)
  001f458  addic 4, 4, 8
  001f45c  fmuls 5, 5, 6
  001f460  stfs 5, 4(6)
  001f464  addic 6, 6, 8
  001f468  bdnz 0x1f43c
  001f46c  fmr 5, 4
  001f470  ori 4, 1, 0
  001f474  mtctr 8
  001f478  lfs 6, 156(4)
  001f47c  fadds 5, 5, 6
  001f480  addic 4, 4, 16
  001f484  lfs 6, 4(7)
  001f488  lfs 7, 8(7)
  001f48c  lfs 8, 12(7)
  001f490  addic 7, 7, 16
  001f494  fadds 5, 5, 6
  001f498  fadds 5, 5, 7
  001f49c  fadds 5, 5, 8
  001f4a0  bdnz 0x1f478
  001f4a4  fadds 5, 5, 2
  001f4a8  fmadds 1, 5, 1, 3
  001f4ac  stfs 1, 72(28)
  001f4b0  lfs 1, 4(3)
  001f4b4  lfs 3, 0(3)
  001f4b8  fmuls 1, 1, 1
  001f4bc  lwz 4, 8(3)
  001f4c0  rlwinm 4, 4, 3, 29, 29
  001f4c4  fmadds 1, 3, 3, 1
  001f4c8  lfs 3, 8(3)
  001f4cc  fabs 5, 3
  001f4d0  fsqrts 1, 1
  001f4d4  fabs 7, 1
  001f4d8  stfs 1, 112(1)
  001f4dc  fsubs 1, 7, 5
  001f4e0  stfs 1, 116(1)
  001f4e4  lwz 5, 112(1)
  001f4e8  lfs 1, 112(1)
  001f4ec  lwz 6, 116(1)
  001f4f0  fabs 6, 1
  001f4f4  lfs 1, 116(1)
  001f4f8  rlwimi 4, 6, 2, 30, 30
  001f4fc  fsub 3, 1, 4
  001f500  rlwimi 4, 5, 4, 28, 28
  001f504  fsub 8, 1, 4
  001f508  ori 5, 31, 0
  001f50c  rlwimi 5, 4, 2, 26, 28
  001f510  slwi 4, 4, 2
  001f514  clrldi 5, 5, 32
  001f518  lfsx 1, 31, 4
  001f51c  fsel 6, 3, 6, 5
  001f520  lfs 3, 4(5)
  001f524  fsel 5, 8, 5, 7
  001f528  fcmpu 0, 6, 4
  001f52c  bt 1, 0x1f534
  001f530  b 0x1f648
  001f534  fsubs 7, 5, 6
  001f538  fadds 5, 5, 6
  001f53c  addic 4, 1, 16
  001f540  li 8, 2
  001f544  addic 5, 4, 108
  001f548  addic 6, 4, 124
  001f54c  mtctr 8
  001f550  fdivs 5, 7, 5
  001f554  fmuls 6, 5, 5
  001f558  stfs 5, 136(1)
  001f55c  stfs 5, 128(1)
  001f560  stfs 5, 132(1)
  001f564  stfs 5, 124(1)
  001f568  lfs 8, 136(1)
  001f56c  lfs 9, 128(1)
  001f570  lfs 10, 132(1)
  001f574  fmuls 7, 6, 6
  001f578  fmuls 9, 9, 6
  001f57c  fmuls 8, 8, 7
  001f580  fmuls 5, 7, 7
  001f584  fmuls 7, 10, 7
  001f588  stfs 9, 128(1)
  001f58c  fmuls 6, 8, 6
  001f590  stfs 7, 132(1)
  001f594  stfs 6, 136(1)
  001f598  lfs 6, 108(4)
  001f59c  fmuls 6, 6, 5
  001f5a0  stfs 6, 124(4)
  001f5a4  lfs 6, 4(5)
  001f5a8  addic 4, 4, 8
  001f5ac  addic 5, 5, 8
  001f5b0  fmuls 6, 6, 5
  001f5b4  stfs 6, 4(6)
  001f5b8  addic 6, 6, 8
  001f5bc  bdnz 0x1f598
  001f5c0  ori 4, 1, 0
  001f5c4  lis 5, 115
  001f5c8  li 9, 4
  001f5cc  addic 6, 4, 124
  001f5d0  addic 5, 5, 22752
  001f5d4  ori 7, 6, 0
  001f5d8  mtctr 9
  001f5dc  lfs 5, 124(4)
  001f5e0  lfs 6, 0(5)
  001f5e4  fmuls 5, 5, 6
  001f5e8  lfs 6, 4(5)
  001f5ec  addic 5, 5, 8
  001f5f0  stfs 5, 124(4)
  001f5f4  lfs 5, 4(6)
  001f5f8  addic 4, 4, 8
  001f5fc  fmuls 5, 5, 6
  001f600  stfs 5, 4(6)
  001f604  addic 6, 6, 8
  001f608  bdnz 0x1f5dc
  001f60c  ori 4, 1, 0
  001f610  mtctr 8
  001f614  lfs 5, 124(4)
  001f618  fadds 4, 4, 5
  001f61c  lfs 5, 4(7)
  001f620  addic 4, 4, 16
  001f624  lfs 6, 8(7)
  001f628  lfs 7, 12(7)
  001f62c  addic 7, 7, 16
  001f630  fadds 4, 4, 5
  001f634  fadds 4, 4, 6
  001f638  fadds 4, 4, 7
  001f63c  bdnz 0x1f614
  001f640  fadds 4, 4, 2
  001f644  fmadds 4, 4, 1, 3
  001f648  fneg 1, 4
  001f64c  ori 4, 3, 0
  001f650  vcfsx 2, 31, 0
  001f654  lis 3, 2
  001f658  vspltisw 3, -1
  001f65c  li 5, 8
  001f660  addi 3, 3, -3536
  001f664  lis 6, 114
  001f668  li 7, -3056
  001f66c  vslw 3, 3, 3
  001f670  stfs 1, 68(28)
  001f674  <unknown>
  001f678  <unknown>
  001f67c  vspltw 4, 4, 0
  001f680  li 5, 20
  001f684  li 6, 0
  001f688  ori 3, 28, 0
  001f68c  vaddfp 2, 2, 4
  001f690  vmaddfp 2, 5, 2, 3
  001f694  vctsxs 2, 2, 0
  001f698  vspltw 2, 2, 0
  001f69c  stvewx 2, 5, 4
  001f6a0  stw 29, 16(4)
  001f6a4  stfs 29, 24(4)
  001f6a8  stfs 31, 28(4)
  001f6ac  stfs 30, 36(4)
  001f6b0  stw 6, 40(4)
  001f6b4  bl 0xf31a8
  001f6b8  nop
  001f6bc  ori 3, 28, 0
  001f6c0  li 0, 208
  001f6c4  lvx 31, 1, 0
  001f6c8  ld 0, 304(1)
  001f6cc  mtlr 0
  001f6d0  lfd 29, 264(1)
  001f6d4  lfd 30, 272(1)
  001f6d8  lfd 31, 280(1)
  001f6dc  ld 28, 232(1)
  001f6e0  ld 29, 240(1)
  001f6e4  ld 30, 248(1)
  001f6e8  ld 31, 256(1)
  001f6ec  addi 1, 1, 288
  001f6f0  blr

UpdateMoby_409:   # 0x1f7a8, 0x8a8 bytes
  001f7a8  stdu 1, -416(1)
  001f7ac  mflr 0
  001f7b0  std 0, 432(1)
  001f7b4  stfd 31, 408(1)
  001f7b8  std 31, 400(1)
  001f7bc  lbz 4, 32(3)
  001f7c0  std 30, 392(1)
  001f7c4  ori 31, 3, 0
  001f7c8  lwz 30, 120(3)
  001f7cc  cmpwi 4, 1
  001f7d0  cmpwi 1, 4, 2
  001f7d4  std 29, 384(1)
  001f7d8  std 28, 376(1)
  001f7dc  std 27, 368(1)
  001f7e0  std 26, 360(1)
  001f7e4  std 25, 352(1)
  001f7e8  std 24, 344(1)
  001f7ec  std 23, 336(1)
  001f7f0  std 22, 328(1)
  001f7f4  cmpwi 6, 4, 0
  001f7f8  bt 1, 0x1f804
  001f7fc  bf 25, 0x20014
  001f800  b 0x1f80c
  001f804  bf 5, 0x1fe78
  001f808  b 0x20014
  001f80c  ori 3, 31, 0
  001f810  lis 4, 35
  001f814  li 5, 0
  001f818  bl 0x10675c
  001f81c  nop
  001f820  lfs 5, 16(31)
  001f824  lfs 4, 20(31)
  001f828  cmpwi 3, 0
  001f82c  lfs 2, 24(31)
  001f830  lfs 1, 28(31)
  001f834  lfs 3, 64(31)
  001f838  bt 2, 0x1f858
  001f83c  lwz 3, 32(3)
  001f840  lwz 4, 16(30)
  001f844  cmpw 3, 4
  001f848  bt 2, 0x1f858
  001f84c  li 3, 2
  001f850  stb 3, 32(31)
  001f854  b 0x20014
  001f858  lis 3, 151
  001f85c  lwz 3, -25488(3)
  001f860  cmpwi 3, 12
  001f864  bf 2, 0x1f8bc
  001f868  lis 3, 151
  001f86c  addic 3, 3, -25376
  001f870  lwz 3, 8324(3)
  001f874  cmpwi 3, 50
  001f878  bf 2, 0x1f8bc
  001f87c  lwz 3, 16(30)
  001f880  cmpwi 3, 0
  001f884  bt 2, 0x1f8bc
  001f888  lbz 4, 32(3)
  001f88c  cmpwi 4, 127
  001f890  bf 1, 0x1f8a4
  001f894  ori 3, 31, 0
  001f898  bl 0xefb38
  001f89c  nop
  001f8a0  b 0x20014
  001f8a4  lbz 3, 32(3)
  001f8a8  cmpwi 3, 2
  001f8ac  bf 0, 0x1f8bc
  001f8b0  li 3, 2
  001f8b4  stb 3, 32(31)
  001f8b8  b 0x20014
  001f8bc  stfs 5, 192(1)
  001f8c0  stfs 4, 196(1)
  001f8c4  stfs 2, 200(1)
  001f8c8  stfs 1, 204(1)
  001f8cc  lfs 1, 0(30)
  001f8d0  fadds 1, 5, 1
  001f8d4  lis 3, 2
  001f8d8  addi 29, 3, -2304
  001f8dc  lis 3, 114
  001f8e0  stfs 1, 16(31)
  001f8e4  lfs 1, 4(30)
  001f8e8  fadds 4, 4, 1
  001f8ec  fmr 1, 3
  001f8f0  stfs 4, 20(31)
  001f8f4  lfs 3, 8(30)
  001f8f8  fadds 2, 2, 3
  001f8fc  stfs 2, 24(31)
  001f900  lfs 2, 28(30)
  001f904  stfs 2, 72(31)
  001f908  lfs 2, 0(29)
  001f90c  lfs 3, -3052(3)
  001f910  fmuls 2, 3, 2
  001f914  bl 0x502578
  001f918  nop
  001f91c  stfs 1, 64(31)
  001f920  lfs 1, 4(30)
  001f924  lfs 2, 0(30)
  001f928  fmuls 1, 1, 1
  001f92c  lfs 3, 8(30)
  001f930  fmadds 1, 2, 2, 1
  001f934  fmadds 3, 3, 3, 1
  001f938  lfs 1, 4(29)
  001f93c  fsqrts 3, 3
  001f940  fcmpu 0, 3, 1
  001f944  bf 2, 0x1f974
  001f948  stfs 2, 208(1)
  001f94c  li 3, 0
  001f950  lfs 2, 4(30)
  001f954  stfs 2, 212(1)
  001f958  lfs 2, 8(30)
  001f95c  stfs 2, 216(1)
  001f960  lfs 2, 12(30)
  001f964  stw 3, 216(1)
  001f968  stw 3, 212(1)
  001f96c  stw 3, 208(1)
  001f970  b 0x1f9a8
  001f974  lis 3, 2
  001f978  addi 3, 3, -2304
  001f97c  lfs 4, 8(3)
  001f980  fdivs 3, 4, 3
  001f984  fmuls 2, 2, 3
  001f988  stfs 2, 208(1)
  001f98c  lfs 2, 4(30)
  001f990  fmuls 2, 2, 3
  001f994  stfs 2, 212(1)
  001f998  lfs 2, 8(30)
  001f99c  fmuls 2, 2, 3
  001f9a0  stfs 2, 216(1)
  001f9a4  lfs 2, 12(30)
  001f9a8  fmr 3, 1
  001f9ac  stfs 2, 220(1)
  001f9b0  lfs 1, 4(30)
  001f9b4  lfs 2, 0(30)
  001f9b8  fmuls 1, 1, 1
  001f9bc  lfs 4, 8(30)
  001f9c0  fmadds 1, 2, 2, 1
  001f9c4  fmadds 1, 4, 4, 1
  001f9c8  fsqrts 1, 1
  001f9cc  fcmpu 0, 1, 3
  001f9d0  bf 2, 0x1fa00
  001f9d4  stfs 2, 224(1)
  001f9d8  lfs 1, 4(30)
  001f9dc  li 3, 0
  001f9e0  stfs 1, 228(1)
  001f9e4  lfs 1, 8(30)
  001f9e8  stfs 1, 232(1)
  001f9ec  lfs 2, 12(30)
  001f9f0  stw 3, 232(1)
  001f9f4  stw 3, 228(1)
  001f9f8  stw 3, 224(1)
  001f9fc  b 0x1fa34
  001fa00  lis 3, 2
  001fa04  addi 3, 3, -2304
  001fa08  lfs 3, 12(3)
  001fa0c  fdivs 1, 3, 1
  001fa10  fmuls 2, 2, 1
  001fa14  stfs 2, 224(1)
  001fa18  lfs 2, 4(30)
  001fa1c  fmuls 2, 2, 1
  001fa20  stfs 2, 228(1)
  001fa24  lfs 2, 8(30)
  001fa28  fmuls 1, 2, 1
  001fa2c  stfs 1, 232(1)
  001fa30  lfs 2, 12(30)
  001fa34  addic 28, 1, 224
  001fa38  addic 29, 31, 16
  001fa3c  stfs 2, 236(1)
  001fa40  addic 3, 1, 240
  001fa44  ori 5, 29, 0
  001fa48  ori 4, 28, 0
  001fa4c  bl 0x502b08
  001fa50  nop
  001fa54  li 3, 15
  001fa58  addic 27, 1, 208
  001fa5c  li 4, 22
  001fa60  bl 0xfe484
  001fa64  nop
  001fa68  extsw 3, 3
  001fa6c  lis 4, 2
  001fa70  lis 26, 114
  001fa74  std 3, 304(1)
  001fa78  addi 3, 4, -2304
  001fa7c  li 4, 35
  001fa80  lfs 31, 16(3)
  001fa84  lfs 1, -3056(26)
  001fa88  lfd 2, 304(1)
  001fa8c  li 3, 20
  001fa90  fcfid 2, 2
  001fa94  frsp 2, 2
  001fa98  fadds 2, 2, 31
  001fa9c  fmuls 1, 1, 2
  001faa0  fctiwz 1, 1
  001faa4  stfd 1, 304(1)
  001faa8  lwz 5, 308(1)
  001faac  extsw 25, 5
  001fab0  bl 0xfe484
  001fab4  nop
  001fab8  ori 9, 3, 0
  001fabc  lis 5, 28416
  001fac0  ori 3, 28, 0
  001fac4  ori 7, 25, 0
  001fac8  li 8, 40
  001facc  ori 4, 27, 0
  001fad0  ori 5, 5, 45055
  001fad4  li 6, 255
  001fad8  li 10, 1
  001fadc  bl 0x121740
  001fae0  nop
  001fae4  li 3, 30
  001fae8  li 4, 60
  001faec  bl 0xfe484
  001faf0  nop
  001faf4  extsw 3, 3
  001faf8  li 4, 75
  001fafc  std 3, 304(1)
  001fb00  lfs 1, -3056(26)
  001fb04  lfd 2, 304(1)
  001fb08  fcfid 2, 2
  001fb0c  li 3, 50
  001fb10  frsp 2, 2
  001fb14  fadds 2, 2, 31
  001fb18  fmuls 1, 1, 2
  001fb1c  fctiwz 1, 1
  001fb20  stfd 1, 304(1)
  001fb24  lwz 5, 308(1)
  001fb28  extsw 26, 5
  001fb2c  bl 0xfe484
  001fb30  nop
  001fb34  ori 9, 3, 0
  001fb38  lis 5, 8191
  001fb3c  lis 6, 79
  001fb40  ori 3, 28, 0
  001fb44  ori 7, 26, 0
  001fb48  li 8, 40
  001fb4c  li 10, 0
  001fb50  ori 4, 27, 0
  001fb54  ori 5, 5, 65535
  001fb58  ori 6, 6, 20303
  001fb5c  bl 0x121740
  001fb60  nop
  001fb64  ori 3, 29, 0
  001fb68  addic 4, 1, 192
  001fb6c  li 5, 0
  001fb70  ori 6, 31, 0
  001fb74  li 7, 0
  001fb78  bl 0x57820
  001fb7c  nop
  001fb80  cmpwi 3, 0
  001fb84  bf 2, 0x1fbb0
  001fb88  lis 3, 2
  001fb8c  li 5, 0
  001fb90  addi 4, 3, -2304
  001fb94  ori 3, 29, 0
  001fb98  ori 6, 31, 0
  001fb9c  lfs 1, 8(4)
  001fba0  bl 0x59e20
  001fba4  nop
  001fba8  cmpwi 3, 0
  001fbac  bt 2, 0x1fe58
  001fbb0  lis 29, 161
  001fbb4  addic 29, 29, 2368
  001fbb8  lwz 3, 24(29)
  001fbbc  cmpwi 3, 0
  001fbc0  bt 2, 0x1fe50
  001fbc4  lwz 4, 16(30)
  001fbc8  cmpw 3, 4
  001fbcc  bt 2, 0x1fe50
  001fbd0  lis 4, 151
  001fbd4  li 3, 1
  001fbd8  ori 28, 3, 0
  001fbdc  lwz 4, -25488(4)
  001fbe0  cmpwi 4, 12
  001fbe4  bf 2, 0x1fc14
  001fbe8  lis 4, 151
  001fbec  addic 4, 4, -25376
  001fbf0  lwz 4, 8324(4)
  001fbf4  cmpwi 4, 50
  001fbf8  bf 2, 0x1fc14
  001fbfc  lis 4, 146
  001fc00  li 3, 3
  001fc04  lwz 4, 28976(4)
  001fc08  cmpwi 4, 15
  001fc0c  bf 1, 0x1fc14
  001fc10  li 3, 2
  001fc14  extsw 3, 3
  001fc18  lis 5, 1
  001fc1c  ori 4, 31, 0
  001fc20  std 3, 304(1)
  001fc24  ori 5, 5, 3
  001fc28  addic 3, 1, 256
  001fc2c  ori 7, 30, 0
  001fc30  lfd 1, 304(1)
  001fc34  fcfid 1, 1
  001fc38  frsp 1, 1
  001fc3c  bl 0x10581c
  001fc40  nop
  001fc44  lis 3, 2
  001fc48  lfs 1, 28(30)
  001fc4c  addi 3, 3, -2304
  001fc50  li 4, 24
  001fc54  lfs 2, 20(3)
  001fc58  lfs 3, 24(3)
  001fc5c  fadds 1, 1, 2
  001fc60  lfs 4, 28(3)
  001fc64  li 5, 28
  001fc68  lfs 5, 32(3)
  001fc6c  li 6, 36
  001fc70  li 7, 28
  001fc74  vspltisw 8, -1
  001fc78  vspltisw 11, -1
  001fc7c  fsubs 2, 3, 1
  001fc80  fsubs 3, 4, 1
  001fc84  vslw 8, 8, 8
  001fc88  li 8, 272
  001fc8c  fsub 4, 1, 2
  001fc90  li 9, 282
  001fc94  li 10, 48
  001fc98  li 11, 64
  001fc9c  fsel 1, 4, 2, 1
  001fca0  lfs 2, 36(3)
  001fca4  li 26, 80
  001fca8  li 12, 112
  001fcac  li 27, 128
  001fcb0  fsub 4, 3, 1
  001fcb4  li 25, 288
  001fcb8  li 24, 64
  001fcbc  li 22, 96
  001fcc0  li 23, 80
  001fcc4  fsel 1, 4, 3, 1
  001fcc8  lfs 3, 40(3)
  001fccc  <unknown>
  001fcd0  li 4, 32
  001fcd4  lfs 6, 44(3)
  001fcd8  <unknown>
  001fcdc  li 5, 40
  001fce0  vspltw 2, 2, 0
  001fce4  vspltw 3, 3, 0
  001fce8  <unknown>
  001fcec  fmuls 4, 1, 1
  001fcf0  li 4, 44
  001fcf4  <unknown>
  001fcf8  <unknown>
  001fcfc  vspltw 4, 4, 0
  001fd00  <unknown>
  001fd04  addi 4, 7, 16
  001fd08  fmuls 7, 4, 1
  001fd0c  vspltw 5, 5, 0
  001fd10  vspltw 6, 6, 0
  001fd14  li 5, 256
  001fd18  vspltw 7, 7, 0
  001fd1c  lis 6, 17839
  001fd20  ori 6, 6, 57190
  001fd24  fmuls 8, 4, 7
  001fd28  fmadds 1, 7, 5, 1
  001fd2c  fmuls 5, 4, 8
  001fd30  fmadds 1, 8, 2, 1
  001fd34  fmuls 2, 4, 5
  001fd38  fmadds 1, 5, 3, 1
  001fd3c  fmadds 1, 2, 6, 1
  001fd40  stfs 1, 256(1)
  001fd44  <unknown>
  001fd48  <unknown>
  001fd4c  vor 9, 9, 10
  001fd50  vspltisw 10, -1
  001fd54  li 4, 166
  001fd58  vsubfp 2, 2, 9
  001fd5c  vsubfp 3, 3, 9
  001fd60  vslw 10, 10, 10
  001fd64  li 7, 260
  001fd68  vcmpgtfp 12, 2, 9
  001fd6c  vsel 2, 2, 9, 12
  001fd70  vspltisw 12, -1
  001fd74  vcmpgtfp 9, 2, 3
  001fd78  vsel 2, 3, 2, 9
  001fd7c  <unknown>
  001fd80  vmaddfp 3, 2, 2, 8
  001fd84  vslw 8, 11, 11
  001fd88  vspltisw 11, -16
  001fd8c  lwz 4, 24(29)
  001fd90  li 29, 96
  001fd94  vsrw 9, 9, 11
  001fd98  vslw 11, 12, 12
  001fd9c  vspltisw 12, -1
  001fda0  vmaddfp 10, 3, 2, 10
  001fda4  vslw 12, 12, 12
  001fda8  vmaddfp 8, 3, 10, 8
  001fdac  vmaddfp 2, 10, 4, 2
  001fdb0  vmaddfp 4, 3, 8, 11
  001fdb4  vmaddfp 2, 8, 5, 2
  001fdb8  lvx 5, 5, 1
  001fdbc  lis 5, 16256
  001fdc0  vsplth 8, 9, 1
  001fdc4  vmaddfp 3, 3, 4, 12
  001fdc8  vmaddfp 2, 4, 6, 2
  001fdcc  vmaddfp 2, 3, 7, 2
  001fdd0  vspltw 3, 2, 0
  001fdd4  stvewx 3, 7, 1
  001fdd8  stw 5, 264(1)
  001fddc  stw 6, 268(1)
  001fde0  lvx 3, 8, 1
  001fde4  stb 28, 280(1)
  001fde8  stb 28, 281(1)
  001fdec  stvehx 8, 9, 1
  001fdf0  lvx 4, 10, 3
  001fdf4  lvx 6, 11, 3
  001fdf8  <unknown>
  001fdfc  vperm 2, 2, 4, 6
  001fe00  vspltw 4, 7, 0
  001fe04  lvx 6, 26, 3
  001fe08  lvx 7, 12, 3
  001fe0c  vperm 2, 2, 5, 6
  001fe10  vperm 4, 9, 4, 7
  001fe14  lvx 5, 27, 3
  001fe18  lvx 6, 25, 1
  001fe1c  ori 3, 4, 0
  001fe20  vperm 3, 4, 3, 5
  001fe24  stvx 2, 24, 1
  001fe28  stvx 6, 22, 1
  001fe2c  ld 5, 64(1)
  001fe30  ld 6, 72(1)
  001fe34  ld 9, 96(1)
  001fe38  stvx 3, 23, 1
  001fe3c  ld 7, 80(1)
  001fe40  ld 8, 88(1)
  001fe44  ld 10, 104(1)
  001fe48  bl 0x105ab4
  001fe4c  nop
  001fe50  li 3, 2
  001fe54  stb 3, 32(31)
  001fe58  addic 3, 30, 20
  001fe5c  bl 0x4fff60
  001fe60  nop
  001fe64  cmpwi 3, 0
  001fe68  bt 2, 0x20014
  001fe6c  li 3, 2
  001fe70  stb 3, 32(31)
  001fe74  b 0x20014
  001fe78  lis 30, 149
  001fe7c  lfs 2, 20(31)
  001fe80  lfs 3, 16(31)
  001fe84  addic 30, 30, 5056
  001fe88  lis 3, 2
  001fe8c  lfs 1, 324(30)
  001fe90  lfs 4, 320(30)
  001fe94  fsubs 5, 2, 1
  001fe98  lfs 6, 24(31)
  001fe9c  fsubs 4, 3, 4
  001fea0  lfs 1, 328(30)
  001fea4  fsubs 7, 6, 1
  001fea8  addi 3, 3, -2304
  001feac  fmuls 1, 5, 5
  001feb0  lfs 10, 144(3)
  001feb4  fmadds 1, 4, 4, 1
  001feb8  fmadds 1, 7, 7, 1
  001febc  fsqrts 8, 1
  001fec0  lfs 1, 4(3)
  001fec4  lis 3, 151
  001fec8  lwz 3, -25488(3)
  001fecc  cmpwi 3, 12
  001fed0  fdivs 9, 10, 8
  001fed4  fsub 10, 1, 8
  001fed8  fsub 11, 1, 8
  001fedc  fsub 12, 1, 8
  001fee0  fsub 13, 8, 1
  001fee4  fsub 0, 8, 1
  001fee8  fsub 8, 8, 1
  001feec  fmuls 7, 9, 7
  001fef0  fmuls 5, 9, 5
  001fef4  fmuls 4, 9, 4
  001fef8  fsel 9, 10, 1, 7
  001fefc  fsel 10, 11, 1, 5
  001ff00  fsel 11, 12, 1, 4
  001ff04  fsel 7, 13, 9, 7
  001ff08  fsel 5, 0, 10, 5
  001ff0c  fsel 4, 8, 11, 4
  001ff10  fadds 6, 6, 7
  001ff14  fadds 2, 2, 5
  001ff18  fadds 3, 3, 4
  001ff1c  stfs 6, 24(31)
  001ff20  stfs 2, 20(31)
  001ff24  stfs 3, 16(31)
  001ff28  bf 2, 0x1ffe4
  001ff2c  lis 3, 151
  001ff30  addic 3, 3, -25376
  001ff34  lwz 3, 8324(3)
  001ff38  cmpwi 3, 50
  001ff3c  bf 2, 0x1ffe4
  001ff40  lis 3, 2
  001ff44  fmr 7, 1
  001ff48  li 7, -1
  001ff4c  addi 29, 3, -2304
  001ff50  li 6, 0
  001ff54  lis 4, 161
  001ff58  ori 3, 31, 0
  001ff5c  li 8, 3
  001ff60  lfs 3, 148(29)
  001ff64  addic 4, 4, 23856
  001ff68  lfs 4, 8(29)
  001ff6c  li 5, 0
  001ff70  lfs 6, 152(29)
  001ff74  li 9, 3
  001ff78  std 7, 144(1)
  001ff7c  li 10, 5
  001ff80  std 6, 160(1)
  001ff84  fmr 2, 7
  001ff88  std 6, 168(1)
  001ff8c  fmr 5, 7
  001ff90  std 7, 176(1)
  001ff94  std 6, 184(1)
  001ff98  bl 0x10e030
  001ff9c  nop
  001ffa0  lis 3, 15564
  001ffa4  vspltisw 2, -1
  001ffa8  li 5, 156
  001ffac  ori 3, 3, 52429
  001ffb0  lis 4, 114
  001ffb4  li 6, -3056
  001ffb8  vslw 2, 2, 2
  001ffbc  stw 3, 352(30)
  001ffc0  <unknown>
  001ffc4  li 3, 360
  001ffc8  vspltw 3, 3, 0
  001ffcc  <unknown>
  001ffd0  vmaddfp 2, 4, 3, 2
  001ffd4  vctsxs 2, 2, 0
  001ffd8  vspltw 2, 2, 0
  001ffdc  stvewx 2, 3, 30
  001ffe0  b 0x20008
  001ffe4  lis 3, 2
  001ffe8  addic 4, 31, 16
  001ffec  addi 5, 3, -2304
  001fff0  ori 3, 31, 0
  001fff4  li 6, 0
  001fff8  lfs 1, 160(5)
  001fffc  lfs 2, 164(5)
  0020000  bl 0x10fb28
  0020004  nop
  0020008  ori 3, 31, 0
  002000c  bl 0xefb38
  0020010  nop
  0020014  ld 0, 432(1)
  0020018  mtlr 0
  002001c  lfd 31, 408(1)
  0020020  ld 22, 328(1)
  0020024  ld 23, 336(1)
  0020028  ld 24, 344(1)
  002002c  ld 25, 352(1)
  0020030  ld 26, 360(1)
  0020034  ld 27, 368(1)
  0020038  ld 28, 376(1)
  002003c  ld 29, 384(1)
  0020040  ld 30, 392(1)
  0020044  ld 31, 400(1)
  0020048  addi 1, 1, 416
  002004c  blr
