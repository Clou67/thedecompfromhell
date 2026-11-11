# game/update/moby1408.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1408_0026f400:   # 0x26f400, 0x514 bytes
  026f400  stdu 1, -336(1)
  026f404  mflr 0
  026f408  std 0, 352(1)
  026f40c  stfd 24, 272(1)
  026f410  stfd 25, 280(1)
  026f414  stfd 26, 288(1)
  026f418  stfd 27, 296(1)
  026f41c  stfd 28, 304(1)
  026f420  stfd 29, 312(1)
  026f424  stfd 30, 320(1)
  026f428  stfd 31, 328(1)
  026f42c  std 31, 264(1)
  026f430  ori 31, 3, 0
  026f434  std 26, 224(1)
  026f438  lis 3, 161
  026f43c  lis 26, 39
  026f440  std 30, 256(1)
  026f444  addi 26, 26, -3112
  026f448  lwz 30, 120(31)
  026f44c  lwz 3, 1808(3)
  026f450  std 29, 248(1)
  026f454  std 28, 240(1)
  026f458  std 27, 232(1)
  026f45c  std 25, 216(1)
  026f460  std 24, 208(1)
  026f464  std 23, 200(1)
  026f468  std 22, 192(1)
  026f46c  std 21, 184(1)
  026f470  std 20, 176(1)
  026f474  std 19, 168(1)
  026f478  std 18, 160(1)
  026f47c  std 17, 152(1)
  026f480  std 16, 144(1)
  026f484  extsw 3, 3
  026f488  bl 0x502730
  026f48c  nop
  026f490  lis 3, 122
  026f494  lis 29, 114
  026f498  lis 4, 122
  026f49c  lfs 2, 6536(3)
  026f4a0  lfs 3, -3052(29)
  026f4a4  lwz 3, 6516(4)
  026f4a8  fmuls 31, 2, 3
  026f4ac  extsw 3, 3
  026f4b0  fmuls 31, 31, 1
  026f4b4  bl 0x685c4
  026f4b8  nop
  026f4bc  ori 4, 3, 0
  026f4c0  li 3, 24
  026f4c4  bl 0x174f80
  026f4c8  nop
  026f4cc  lis 7, 122
  026f4d0  li 3, 0
  026f4d4  li 4, 1
  026f4d8  li 5, 0
  026f4dc  li 6, 1
  026f4e0  lwz 7, 6512(7)
  026f4e4  bl 0x502ea8
  026f4e8  nop
  026f4ec  ori 4, 3, 0
  026f4f0  li 3, 3
  026f4f4  bl 0x174f80
  026f4f8  nop
  026f4fc  li 3, 0
  026f500  li 4, 0
  026f504  li 8, 0
  026f508  li 5, 0
  026f50c  li 6, 0
  026f510  li 7, 0
  026f514  bl 0x502f08
  026f518  nop
  026f51c  ori 4, 3, 0
  026f520  li 3, 6
  026f524  bl 0x174f80
  026f528  nop
  026f52c  lis 9, 0
  026f530  li 3, 0
  026f534  li 4, 0
  026f538  ori 9, 9, 65424
  026f53c  li 5, 1
  026f540  li 6, 1
  026f544  li 7, 1
  026f548  li 8, 0
  026f54c  bl 0x502fd4
  026f550  nop
  026f554  ori 4, 3, 0
  026f558  li 3, 26
  026f55c  bl 0x174f80
  026f560  nop
  026f564  lis 3, 122
  026f568  lfs 1, 4(30)
  026f56c  lis 4, 114
  026f570  stfs 1, 0(30)
  026f574  lfs 2, 0(26)
  026f578  lfs 3, 6528(3)
  026f57c  lfs 4, -3056(4)
  026f580  fmuls 3, 3, 4
  026f584  lfs 4, 4(26)
  026f588  fdivs 2, 2, 3
  026f58c  lfs 3, -3052(29)
  026f590  fmuls 2, 2, 4
  026f594  fmuls 2, 2, 3
  026f598  bl 0x502578
  026f59c  nop
  026f5a0  ori 3, 31, 0
  026f5a4  stfs 1, 4(30)
  026f5a8  addic 4, 1, 112
  026f5ac  addic 5, 1, 116
  026f5b0  addic 6, 1, 120
  026f5b4  bl 0xf1ef0
  026f5b8  nop
  026f5bc  lis 3, 122
  026f5c0  lwz 4, 120(1)
  026f5c4  li 18, 0
  026f5c8  lwz 5, 116(1)
  026f5cc  slwi 4, 4, 16
  026f5d0  slwi 5, 5, 8
  026f5d4  lwz 3, 6520(3)
  026f5d8  lwz 6, 112(1)
  026f5dc  ori 23, 18, 0
  026f5e0  slwi 3, 3, 24
  026f5e4  or 29, 5, 6
  026f5e8  or 3, 3, 4
  026f5ec  ori 19, 23, 0
  026f5f0  or 29, 3, 29
  026f5f4  lis 27, 122
  026f5f8  ori 28, 23, 0
  026f5fc  addic 27, 27, -1472
  026f600  lwzx 3, 27, 19
  026f604  cmpwi 3, 0
  026f608  bf 1, 0x26f73c
  026f60c  lfs 30, 8(26)
  026f610  lfs 29, 12(26)
  026f614  ori 25, 23, 0
  026f618  lfs 28, 16(26)
  026f61c  lis 22, 122
  026f620  lfs 27, 20(26)
  026f624  lis 21, 122
  026f628  lis 20, 122
  026f62c  lfs 26, 24(26)
  026f630  lfs 25, 28(26)
  026f634  ori 24, 25, 0
  026f638  addic 22, 22, 6476
  026f63c  lfs 24, 32(26)
  026f640  addic 21, 21, 6440
  026f644  addic 20, 20, 6464
  026f648  lwzx 3, 22, 19
  026f64c  lis 17, 122
  026f650  addc 3, 3, 25
  026f654  clrldi 16, 3, 32
  026f658  lfs 2, 6524(17)
  026f65c  lfs 1, 4(16)
  026f660  lfs 3, 0(16)
  026f664  fmuls 1, 1, 1
  026f668  fmadds 1, 3, 3, 1
  026f66c  fsqrts 1, 1
  026f670  bl 0x502798
  026f674  nop
  026f678  lfs 2, 6524(17)
  026f67c  fmuls 1, 1, 30
  026f680  fdivs 1, 1, 2
  026f684  bl 0x502648
  026f688  nop
  026f68c  lfs 2, 4(30)
  026f690  bl 0x502578
  026f694  nop
  026f698  lfs 4, 0(16)
  026f69c  lis 3, 122
  026f6a0  lfs 6, 16(31)
  026f6a4  lwzx 4, 21, 19
  026f6a8  fadds 4, 4, 6
  026f6ac  addc 5, 4, 25
  026f6b0  addic 28, 28, 1
  026f6b4  fsubs 2, 29, 1
  026f6b8  fsubs 3, 28, 1
  026f6bc  fsub 5, 1, 2
  026f6c0  fsel 1, 5, 2, 1
  026f6c4  lfs 2, 6532(3)
  026f6c8  lfs 5, 20(31)
  026f6cc  lfs 6, 24(31)
  026f6d0  lwzx 3, 20, 19
  026f6d4  stfsx 4, 4, 25
  026f6d8  clrldi 4, 5, 32
  026f6dc  fsub 7, 3, 1
  026f6e0  addic 25, 25, 12
  026f6e4  fsel 1, 7, 3, 1
  026f6e8  lfs 3, 4(16)
  026f6ec  fadds 3, 3, 5
  026f6f0  fmuls 4, 1, 1
  026f6f4  stfs 3, 4(4)
  026f6f8  lfs 3, 8(16)
  026f6fc  fadds 3, 3, 6
  026f700  fmuls 5, 4, 1
  026f704  fmuls 6, 4, 5
  026f708  fmadds 1, 5, 27, 1
  026f70c  fmuls 5, 4, 6
  026f710  fmadds 1, 6, 26, 1
  026f714  fmuls 4, 4, 5
  026f718  fmadds 1, 5, 25, 1
  026f71c  fmadds 1, 4, 24, 1
  026f720  fmadds 1, 2, 1, 3
  026f724  stfs 1, 8(4)
  026f728  stwx 29, 3, 24
  026f72c  lwzx 3, 27, 19
  026f730  addic 24, 24, 4
  026f734  cmpw 28, 3
  026f738  bt 0, 0x26f648
  026f73c  addic 18, 18, 1
  026f740  addic 19, 19, 4
  026f744  cmpwi 18, 3
  026f748  bt 0, 0x26f5f4
  026f74c  lis 3, 122
  026f750  lis 29, 122
  026f754  lfs 30, 36(26)
  026f758  ori 31, 23, 0
  026f75c  ori 30, 1, 0
  026f760  addic 26, 3, 6488
  026f764  addic 29, 29, 6452
  026f768  ori 28, 23, 0
  026f76c  ori 22, 27, 0
  026f770  ori 21, 28, 0
  026f774  lwz 3, 0(22)
  026f778  ori 25, 23, 0
  026f77c  cmpwi 3, 0
  026f780  bf 1, 0x26f820
  026f784  ori 24, 23, 0
  026f788  lis 3, 16256
  026f78c  fmr 2, 30
  026f790  lis 4, -16608
  026f794  lis 5, 16160
  026f798  ori 4, 4, 55676
  026f79c  stw 3, 124(1)
  026f7a0  stw 3, 132(1)
  026f7a4  ori 5, 5, 55676
  026f7a8  stw 4, 128(1)
  026f7ac  lfs 1, 124(30)
  026f7b0  stw 5, 136(1)
  026f7b4  fmuls 1, 1, 31
  026f7b8  bl 0x502798
  026f7bc  nop
  026f7c0  lwzx 3, 26, 21
  026f7c4  lwzx 4, 29, 21
  026f7c8  lfs 3, 128(30)
  026f7cc  fmr 2, 30
  026f7d0  lfsx 4, 3, 24
  026f7d4  fadds 4, 4, 1
  026f7d8  fmuls 1, 3, 31
  026f7dc  stfsx 4, 4, 24
  026f7e0  bl 0x502798
  026f7e4  nop
  026f7e8  lwzx 3, 26, 21
  026f7ec  addic 25, 25, 1
  026f7f0  lwzx 4, 29, 21
  026f7f4  addc 3, 3, 24
  026f7f8  addc 4, 4, 24
  026f7fc  clrldi 3, 3, 32
  026f800  addic 24, 24, 8
  026f804  lfs 2, 4(3)
  026f808  clrldi 3, 4, 32
  026f80c  fadds 1, 2, 1
  026f810  stfs 1, 4(3)
  026f814  lwzx 3, 27, 21
  026f818  cmpw 25, 3
  026f81c  bt 0, 0x26f788
  026f820  addic 28, 28, 1
  026f824  addic 21, 21, 4
  026f828  cmpwi 28, 3
  026f82c  addic 22, 22, 4
  026f830  bt 0, 0x26f774
  026f834  bl 0x71170
  026f838  nop
  026f83c  lis 24, 122
  026f840  lis 22, 122
  026f844  ori 28, 23, 0
  026f848  ori 25, 27, 0
  026f84c  addic 24, 24, 6440
  026f850  addic 22, 22, 6464
  026f854  ori 21, 29, 0
  026f858  lwz 3, 0(25)
  026f85c  li 7, 9
  026f860  lwz 4, 0(24)
  026f864  lwz 5, 0(22)
  026f868  extsw 3, 3
  026f86c  lwz 6, 0(21)
  026f870  bl 0x74604
  026f874  nop
  026f878  addic 28, 28, 1
  026f87c  addic 25, 25, 4
  026f880  cmpwi 28, 3
  026f884  addic 24, 24, 4
  026f888  addic 22, 22, 4
  026f88c  addic 21, 21, 4
  026f890  bt 0, 0x26f858
  026f894  addic 31, 31, 1
  026f898  addic 30, 30, 8
  026f89c  cmpwi 31, 2
  026f8a0  bt 0, 0x26f768
  026f8a4  ld 0, 352(1)
  026f8a8  mtlr 0
  026f8ac  lfd 24, 272(1)
  026f8b0  lfd 25, 280(1)
  026f8b4  lfd 26, 288(1)
  026f8b8  lfd 27, 296(1)
  026f8bc  lfd 28, 304(1)
  026f8c0  lfd 29, 312(1)
  026f8c4  lfd 30, 320(1)
  026f8c8  lfd 31, 328(1)
  026f8cc  ld 16, 144(1)
  026f8d0  ld 17, 152(1)
  026f8d4  ld 18, 160(1)
  026f8d8  ld 19, 168(1)
  026f8dc  ld 20, 176(1)
  026f8e0  ld 21, 184(1)
  026f8e4  ld 22, 192(1)
  026f8e8  ld 23, 200(1)
  026f8ec  ld 24, 208(1)
  026f8f0  ld 25, 216(1)
  026f8f4  ld 26, 224(1)
  026f8f8  ld 27, 232(1)
  026f8fc  ld 28, 240(1)
  026f900  ld 29, 248(1)
  026f904  ld 30, 256(1)
  026f908  ld 31, 264(1)
  026f90c  addi 1, 1, 336
  026f910  blr

UpdateMoby_1408:   # 0x26f914, 0x80 bytes
  026f914  stdu 1, -128(1)
  026f918  mflr 0
  026f91c  std 0, 144(1)
  026f920  std 31, 120(1)
  026f924  ori 31, 3, 0
  026f928  lbz 3, 32(3)
  026f92c  cmpwi 3, 0
  026f930  bf 2, 0x26f958
  026f934  ori 3, 31, 0
  026f938  li 4, 64
  026f93c  li 5, 64
  026f940  li 6, 64
  026f944  bl 0xf1ec8
  026f948  nop
  026f94c  li 3, 1
  026f950  stb 3, 32(31)
  026f954  b 0x26f980
  026f958  lis 3, 113
  026f95c  ori 4, 31, 0
  026f960  addic 3, 3, -23584
  026f964  bl 0x6d7e0
  026f968  nop
  026f96c  lhz 4, 52(31)
  026f970  li 3, 0
  026f974  ori 4, 4, 1
  026f978  sth 3, 50(31)
  026f97c  sth 4, 52(31)
  026f980  ld 0, 144(1)
  026f984  mtlr 0
  026f988  ld 31, 120(1)
  026f98c  addi 1, 1, 128
  026f990  blr
