# game/update/moby1048.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1048_0019f1bc:   # 0x19f1bc, 0x14 bytes
  019f1bc  lis 3, 116
  019f1c0  lis 4, 1
  019f1c4  addic 3, 3, 1476
  019f1c8  stw 4, 72(3)
  019f1cc  blr

M1048_0019f1e8:   # 0x19f1e8, 0x708 bytes
  019f1e8  stdu 1, -336(1)
  019f1ec  mflr 0
  019f1f0  std 0, 352(1)
  019f1f4  stfd 26, 288(1)
  019f1f8  stfd 27, 296(1)
  019f1fc  stfd 28, 304(1)
  019f200  stfd 29, 312(1)
  019f204  stfd 30, 320(1)
  019f208  stfd 31, 328(1)
  019f20c  std 31, 280(1)
  019f210  lis 4, 26
  019f214  std 28, 256(1)
  019f218  lwz 31, 120(3)
  019f21c  ori 28, 1, 0
  019f220  std 30, 272(1)
  019f224  addi 4, 4, -3632
  019f228  lbz 30, 33(3)
  019f22c  cmpwi 30, 255
  019f230  lfs 31, 0(4)
  019f234  lfs 4, 24(3)
  019f238  std 29, 264(1)
  019f23c  lwz 31, 352(31)
  019f240  bf 2, 0x19f404
  019f244  lfs 1, 16(3)
  019f248  lfs 2, 16(31)
  019f24c  lfs 3, 20(3)
  019f250  lfs 4, 20(31)
  019f254  fsubs 1, 1, 2
  019f258  lis 3, 26
  019f25c  fsubs 2, 3, 4
  019f260  addi 3, 3, -3632
  019f264  lis 4, 115
  019f268  addic 4, 4, 22784
  019f26c  fabs 3, 1
  019f270  fabs 5, 2
  019f274  stfs 1, 136(1)
  019f278  stfs 2, 140(1)
  019f27c  fsubs 1, 3, 5
  019f280  stfs 1, 144(1)
  019f284  lwz 5, 136(1)
  019f288  lfs 4, 4(3)
  019f28c  lfs 1, 136(1)
  019f290  lwz 3, 140(1)
  019f294  lfs 2, 140(1)
  019f298  lwz 6, 144(1)
  019f29c  rlwinm 3, 3, 3, 29, 29
  019f2a0  fabs 6, 2
  019f2a4  lfs 2, 144(1)
  019f2a8  fabs 1, 1
  019f2ac  rlwimi 3, 6, 2, 30, 30
  019f2b0  fsub 7, 2, 4
  019f2b4  rlwimi 3, 5, 4, 28, 28
  019f2b8  fsub 8, 2, 4
  019f2bc  ori 5, 4, 0
  019f2c0  rlwimi 5, 3, 2, 26, 28
  019f2c4  slwi 3, 3, 2
  019f2c8  clrldi 5, 5, 32
  019f2cc  fsel 5, 7, 1, 5
  019f2d0  lfsx 1, 4, 3
  019f2d4  lfs 2, 4(5)
  019f2d8  fsel 3, 8, 6, 3
  019f2dc  fcmpu 0, 5, 4
  019f2e0  bt 1, 0x19f2ec
  019f2e4  fmr 1, 4
  019f2e8  b 0x19f400
  019f2ec  fsubs 6, 3, 5
  019f2f0  fadds 3, 3, 5
  019f2f4  li 5, 2
  019f2f8  mtctr 5
  019f2fc  fdivs 3, 6, 3
  019f300  fmuls 5, 3, 3
  019f304  stfs 3, 212(28)
  019f308  stfs 3, 216(28)
  019f30c  stfs 3, 220(28)
  019f310  stfs 3, 224(28)
  019f314  lfs 3, 224(1)
  019f318  lfs 6, 216(1)
  019f31c  addic 28, 1, 16
  019f320  lfs 8, 220(1)
  019f324  fmuls 7, 5, 5
  019f328  fmuls 6, 6, 5
  019f32c  addic 3, 28, 196
  019f330  addic 4, 28, 212
  019f334  fmuls 9, 3, 7
  019f338  fmuls 8, 8, 7
  019f33c  fmuls 3, 7, 7
  019f340  stfs 6, 216(1)
  019f344  fmuls 5, 9, 5
  019f348  stfs 8, 220(1)
  019f34c  stfs 5, 224(1)
  019f350  lfs 5, 196(28)
  019f354  fmuls 5, 5, 3
  019f358  stfs 5, 212(28)
  019f35c  lfs 5, 4(3)
  019f360  addic 3, 3, 8
  019f364  fmuls 5, 5, 3
  019f368  addic 28, 28, 8
  019f36c  stfs 5, 4(4)
  019f370  addic 4, 4, 8
  019f374  bdnz 0x19f350
  019f378  li 6, 4
  019f37c  ori 3, 1, 0
  019f380  mtctr 6
  019f384  lis 4, 115
  019f388  addic 6, 3, 212
  019f38c  addic 4, 4, 22752
  019f390  ori 7, 6, 0
  019f394  lfs 3, 212(3)
  019f398  lfs 5, 0(4)
  019f39c  fmuls 3, 3, 5
  019f3a0  lfs 5, 4(4)
  019f3a4  addic 4, 4, 8
  019f3a8  stfs 3, 212(3)
  019f3ac  lfs 3, 4(6)
  019f3b0  addic 3, 3, 8
  019f3b4  fmuls 3, 3, 5
  019f3b8  stfs 3, 4(6)
  019f3bc  addic 6, 6, 8
  019f3c0  bdnz 0x19f394
  019f3c4  ori 3, 1, 0
  019f3c8  mtctr 5
  019f3cc  lfs 3, 212(3)
  019f3d0  fadds 3, 4, 3
  019f3d4  addic 3, 3, 16
  019f3d8  lfs 4, 4(7)
  019f3dc  lfs 5, 8(7)
  019f3e0  lfs 6, 12(7)
  019f3e4  addic 7, 7, 16
  019f3e8  fadds 3, 3, 4
  019f3ec  fadds 4, 3, 5
  019f3f0  fadds 4, 4, 6
  019f3f4  bdnz 0x19f3cc
  019f3f8  fadds 3, 4, 31
  019f3fc  fmadds 1, 3, 1, 2
  019f400  b 0x19f8b8
  019f404  lfs 27, 16(3)
  019f408  lfs 1, 16(31)
  019f40c  lis 4, 26
  019f410  lfs 2, 20(3)
  019f414  lfs 3, 20(31)
  019f418  fsubs 5, 27, 1
  019f41c  addi 3, 4, -3632
  019f420  fsubs 6, 2, 3
  019f424  lis 4, 116
  019f428  lis 29, 115
  019f42c  lfs 30, 8(3)
  019f430  lfs 29, 12(3)
  019f434  addic 29, 29, 22784
  019f438  fabs 8, 5
  019f43c  fabs 9, 6
  019f440  stfs 5, 124(1)
  019f444  stfs 6, 128(1)
  019f448  fsubs 5, 8, 9
  019f44c  stfs 5, 132(1)
  019f450  lwz 5, 124(1)
  019f454  lfs 26, 4(3)
  019f458  lfs 5, 124(1)
  019f45c  fabs 7, 5
  019f460  lfs 5, 1624(4)
  019f464  lwz 3, 128(1)
  019f468  fmuls 30, 5, 30
  019f46c  fmuls 29, 5, 29
  019f470  lfs 5, 128(1)
  019f474  rlwinm 3, 3, 3, 29, 29
  019f478  lwz 4, 132(1)
  019f47c  lfs 6, 132(1)
  019f480  rlwimi 3, 4, 2, 30, 30
  019f484  fabs 11, 5
  019f488  fsub 10, 6, 26
  019f48c  ori 4, 29, 0
  019f490  fsub 6, 6, 26
  019f494  rlwimi 3, 5, 4, 28, 28
  019f498  rlwimi 4, 3, 2, 26, 28
  019f49c  slwi 3, 3, 2
  019f4a0  clrldi 4, 4, 32
  019f4a4  lfsx 28, 29, 3
  019f4a8  fsel 7, 10, 7, 9
  019f4ac  lfs 5, 4(4)
  019f4b0  fsel 6, 6, 11, 8
  019f4b4  fcmpu 0, 7, 26
  019f4b8  bt 1, 0x19f4c4
  019f4bc  fmr 28, 26
  019f4c0  b 0x19f5dc
  019f4c4  fsubs 8, 6, 7
  019f4c8  fadds 6, 6, 7
  019f4cc  addic 3, 1, 16
  019f4d0  li 7, 2
  019f4d4  addic 5, 3, 180
  019f4d8  addic 4, 3, 164
  019f4dc  mtctr 7
  019f4e0  fdivs 6, 8, 6
  019f4e4  fmuls 7, 6, 6
  019f4e8  stfs 6, 180(28)
  019f4ec  stfs 6, 184(28)
  019f4f0  stfs 6, 188(28)
  019f4f4  stfs 6, 192(28)
  019f4f8  lfs 6, 192(1)
  019f4fc  lfs 8, 184(1)
  019f500  lfs 10, 188(1)
  019f504  fmuls 9, 7, 7
  019f508  fmuls 8, 8, 7
  019f50c  fmuls 11, 6, 9
  019f510  fmuls 10, 10, 9
  019f514  fmuls 6, 9, 9
  019f518  stfs 8, 184(1)
  019f51c  fmuls 7, 11, 7
  019f520  stfs 10, 188(1)
  019f524  stfs 7, 192(1)
  019f528  lfs 7, 164(3)
  019f52c  fmuls 7, 7, 6
  019f530  stfs 7, 180(3)
  019f534  lfs 7, 4(4)
  019f538  addic 4, 4, 8
  019f53c  fmuls 7, 7, 6
  019f540  addic 3, 3, 8
  019f544  stfs 7, 4(5)
  019f548  addic 5, 5, 8
  019f54c  bdnz 0x19f528
  019f550  li 5, 4
  019f554  ori 3, 1, 0
  019f558  mtctr 5
  019f55c  lis 4, 115
  019f560  addic 5, 3, 180
  019f564  addic 4, 4, 22752
  019f568  ori 6, 5, 0
  019f56c  lfs 6, 180(3)
  019f570  lfs 7, 0(4)
  019f574  fmuls 6, 6, 7
  019f578  lfs 7, 4(4)
  019f57c  addic 4, 4, 8
  019f580  stfs 6, 180(3)
  019f584  lfs 6, 4(5)
  019f588  addic 3, 3, 8
  019f58c  fmuls 6, 6, 7
  019f590  stfs 6, 4(5)
  019f594  addic 5, 5, 8
  019f598  bdnz 0x19f56c
  019f59c  ori 3, 1, 0
  019f5a0  fmr 6, 26
  019f5a4  mtctr 7
  019f5a8  lfs 7, 180(3)
  019f5ac  fadds 6, 6, 7
  019f5b0  lfs 7, 4(6)
  019f5b4  addic 3, 3, 16
  019f5b8  lfs 8, 8(6)
  019f5bc  lfs 9, 12(6)
  019f5c0  addic 6, 6, 16
  019f5c4  fadds 6, 6, 7
  019f5c8  fadds 6, 6, 8
  019f5cc  fadds 6, 6, 9
  019f5d0  bdnz 0x19f5a8
  019f5d4  fadds 6, 6, 31
  019f5d8  fmadds 28, 6, 28, 5
  019f5dc  fsubs 2, 3, 2
  019f5e0  fsubs 1, 1, 27
  019f5e4  lfs 3, 24(31)
  019f5e8  lis 3, 165
  019f5ec  fsubs 3, 3, 4
  019f5f0  addic 3, 3, -28284
  019f5f4  rlwinm 4, 30, 2, 22, 29
  019f5f8  fmuls 2, 2, 2
  019f5fc  lwzx 30, 3, 4
  019f600  cmpwi 30, 0
  019f604  fmadds 1, 1, 1, 2
  019f608  fmadds 27, 3, 3, 1
  019f60c  fsqrts 27, 27
  019f610  bf 2, 0x19f61c
  019f614  fmr 1, 26
  019f618  b 0x19f8b8
  019f61c  lis 3, 164
  019f620  lhz 4, 0(30)
  019f624  rlwinm 4, 4, 8, 9, 23
  019f628  lwz 3, -28512(3)
  019f62c  addc 3, 3, 4
  019f630  clrldi 3, 3, 32
  019f634  lbz 4, 32(3)
  019f638  cmpwi 4, 8
  019f63c  bt 2, 0x19f680
  019f640  lfs 1, 20(3)
  019f644  lfs 2, 20(31)
  019f648  lfs 3, 16(3)
  019f64c  fsubs 1, 1, 2
  019f650  lfs 2, 16(31)
  019f654  fsubs 2, 3, 2
  019f658  lfs 3, 24(3)
  019f65c  lfs 4, 24(31)
  019f660  fsubs 3, 3, 4
  019f664  fmuls 1, 1, 1
  019f668  fmadds 1, 2, 2, 1
  019f66c  fmadds 1, 3, 3, 1
  019f670  fsqrts 1, 1
  019f674  fcmpu 0, 1, 27
  019f678  cror 6, 1, 2
  019f67c  bt 6, 0x19f86c
  019f680  lfs 1, 16(3)
  019f684  lfs 2, 16(31)
  019f688  lfs 3, 20(3)
  019f68c  lfs 4, 20(31)
  019f690  fsubs 1, 1, 2
  019f694  fsubs 2, 3, 4
  019f698  fabs 3, 1
  019f69c  fabs 4, 2
  019f6a0  stfs 1, 112(1)
  019f6a4  stfs 2, 116(1)
  019f6a8  fsubs 1, 3, 4
  019f6ac  stfs 1, 120(1)
  019f6b0  lwz 3, 112(1)
  019f6b4  lfs 1, 112(1)
  019f6b8  lwz 4, 116(1)
  019f6bc  lfs 2, 116(1)
  019f6c0  fabs 1, 1
  019f6c4  lwz 5, 120(1)
  019f6c8  rlwinm 4, 4, 3, 29, 29
  019f6cc  lfs 5, 120(1)
  019f6d0  fabs 2, 2
  019f6d4  rlwimi 4, 5, 2, 30, 30
  019f6d8  fsub 6, 5, 26
  019f6dc  fsub 5, 5, 26
  019f6e0  rlwimi 4, 3, 4, 28, 28
  019f6e4  ori 3, 29, 0
  019f6e8  rlwimi 3, 4, 2, 26, 28
  019f6ec  slwi 4, 4, 2
  019f6f0  clrldi 3, 3, 32
  019f6f4  fsel 4, 6, 1, 4
  019f6f8  lfsx 1, 29, 4
  019f6fc  fsel 3, 5, 2, 3
  019f700  lfs 2, 4(3)
  019f704  fcmpu 0, 4, 26
  019f708  bt 1, 0x19f714
  019f70c  fmr 1, 26
  019f710  b 0x19f82c
  019f714  fsubs 5, 3, 4
  019f718  fadds 3, 3, 4
  019f71c  addic 3, 1, 16
  019f720  li 6, 2
  019f724  addic 4, 3, 132
  019f728  addic 5, 3, 148
  019f72c  mtctr 6
  019f730  fdivs 3, 5, 3
  019f734  fmuls 4, 3, 3
  019f738  stfs 3, 148(28)
  019f73c  stfs 3, 152(28)
  019f740  stfs 3, 156(28)
  019f744  stfs 3, 160(28)
  019f748  lfs 3, 160(1)
  019f74c  lfs 5, 152(1)
  019f750  lfs 7, 156(1)
  019f754  fmuls 6, 4, 4
  019f758  fmuls 5, 5, 4
  019f75c  fmuls 8, 3, 6
  019f760  fmuls 7, 7, 6
  019f764  fmuls 3, 6, 6
  019f768  stfs 5, 152(1)
  019f76c  fmuls 4, 8, 4
  019f770  stfs 7, 156(1)
  019f774  stfs 4, 160(1)
  019f778  lfs 4, 132(3)
  019f77c  fmuls 4, 4, 3
  019f780  stfs 4, 148(3)
  019f784  lfs 4, 4(4)
  019f788  addic 3, 3, 8
  019f78c  addic 4, 4, 8
  019f790  fmuls 4, 4, 3
  019f794  stfs 4, 4(5)
  019f798  addic 5, 5, 8
  019f79c  bdnz 0x19f778
  019f7a0  li 5, 4
  019f7a4  ori 3, 1, 0
  019f7a8  mtctr 5
  019f7ac  lis 4, 115
  019f7b0  addic 5, 3, 148
  019f7b4  addic 4, 4, 22752
  019f7b8  ori 7, 5, 0
  019f7bc  lfs 3, 148(3)
  019f7c0  lfs 4, 0(4)
  019f7c4  fmuls 3, 3, 4
  019f7c8  lfs 4, 4(4)
  019f7cc  addic 4, 4, 8
  019f7d0  stfs 3, 148(3)
  019f7d4  lfs 3, 4(5)
  019f7d8  addic 3, 3, 8
  019f7dc  fmuls 3, 3, 4
  019f7e0  stfs 3, 4(5)
  019f7e4  addic 5, 5, 8
  019f7e8  bdnz 0x19f7bc
  019f7ec  fmr 3, 26
  019f7f0  ori 3, 1, 0
  019f7f4  mtctr 6
  019f7f8  lfs 4, 148(3)
  019f7fc  fadds 3, 3, 4
  019f800  addic 3, 3, 16
  019f804  lfs 4, 4(7)
  019f808  lfs 5, 8(7)
  019f80c  lfs 6, 12(7)
  019f810  addic 7, 7, 16
  019f814  fadds 3, 3, 4
  019f818  fadds 3, 3, 5
  019f81c  fadds 3, 3, 6
  019f820  bdnz 0x19f7f8
  019f824  fadds 3, 3, 31
  019f828  fmadds 1, 3, 1, 2
  019f82c  fmr 2, 28
  019f830  bl 0x5025e0
  019f834  nop
  019f838  fcmpu 0, 1, 26
  019f83c  cror 6, 0, 2
  019f840  bt 6, 0x19f858
  019f844  fcmpu 0, 29, 1
  019f848  cror 6, 0, 2
  019f84c  bt 6, 0x19f858
  019f850  fmr 29, 1
  019f854  b 0x19f86c
  019f858  fcmpu 1, 30, 1
  019f85c  fcmpu 0, 1, 26
  019f860  crnand 2, 0, 4
  019f864  bt 2, 0x19f86c
  019f868  fmr 30, 1
  019f86c  lhz 3, 0(30)
  019f870  addic 30, 30, 2
  019f874  extsh 3, 3
  019f878  cmpwi 3, 0
  019f87c  bf 0, 0x19f61c
  019f880  fmr 1, 29
  019f884  fmr 2, 30
  019f888  bl 0x5026a0
  019f88c  nop
  019f890  lis 3, 26
  019f894  addi 3, 3, -3632
  019f898  lfs 2, 16(3)
  019f89c  fmuls 2, 1, 2
  019f8a0  fmr 1, 30
  019f8a4  bl 0x502578
  019f8a8  nop
  019f8ac  fmr 2, 28
  019f8b0  bl 0x502578
  019f8b4  nop
  019f8b8  ld 0, 352(1)
  019f8bc  mtlr 0
  019f8c0  lfd 26, 288(1)
  019f8c4  lfd 27, 296(1)
  019f8c8  lfd 28, 304(1)
  019f8cc  lfd 29, 312(1)
  019f8d0  lfd 30, 320(1)
  019f8d4  lfd 31, 328(1)
  019f8d8  ld 28, 256(1)
  019f8dc  ld 29, 264(1)
  019f8e0  ld 30, 272(1)
  019f8e4  ld 31, 280(1)
  019f8e8  addi 1, 1, 336
  019f8ec  blr

M1048_0019f8f0:   # 0x19f8f0, 0x6c bytes
  019f8f0  ori 4, 3, 0
  019f8f4  lis 3, 165
  019f8f8  addic 3, 3, -28284
  019f8fc  lbz 4, 33(4)
  019f900  slwi 5, 4, 2
  019f904  lwzx 5, 3, 5
  019f908  cmpwi 5, 0
  019f90c  bt 2, 0x19f958
  019f910  rlwinm 5, 4, 2, 22, 29
  019f914  lis 4, 164
  019f918  lwzx 5, 3, 5
  019f91c  li 3, 2
  019f920  lhz 6, 0(5)
  019f924  lwz 7, -28512(4)
  019f928  rlwinm 6, 6, 8, 9, 23
  019f92c  addc 6, 7, 6
  019f930  clrldi 6, 6, 32
  019f934  lbz 7, 32(6)
  019f938  cmpwi 7, 1
  019f93c  bf 2, 0x19f944
  019f940  stb 3, 32(6)
  019f944  lhz 6, 0(5)
  019f948  addic 5, 5, 2
  019f94c  extsh 6, 6
  019f950  cmpwi 6, 0
  019f954  bf 0, 0x19f920
  019f958  blr

M1048_0019f9b0:   # 0x19f9b0, 0x8b4 bytes
  019f9b0  stdu 1, -240(1)
  019f9b4  mflr 0
  019f9b8  std 0, 256(1)
  019f9bc  stfd 31, 232(1)
  019f9c0  std 30, 216(1)
  019f9c4  std 31, 224(1)
  019f9c8  lwz 30, 120(3)
  019f9cc  ori 31, 3, 0
  019f9d0  lwz 3, 56(30)
  019f9d4  std 29, 208(1)
  019f9d8  cmpwi 3, 0
  019f9dc  bt 2, 0x19fa18
  019f9e0  lis 3, 26
  019f9e4  addi 3, 3, -1700
  019f9e8  lfs 1, 0(3)
  019f9ec  lfs 2, 4(3)
  019f9f0  bl 0xfcbe8
  019f9f4  nop
  019f9f8  lis 3, 114
  019f9fc  lfs 2, -3056(3)
  019fa00  fmuls 1, 1, 2
  019fa04  bl 0x502758
  019fa08  nop
  019fa0c  li 4, 0
  019fa10  stw 3, 428(30)
  019fa14  stw 4, 56(30)
  019fa18  addic 3, 30, 428
  019fa1c  bl 0x4fff60
  019fa20  nop
  019fa24  lis 3, 26
  019fa28  li 6, 0
  019fa2c  addi 7, 3, -1700
  019fa30  ori 3, 31, 0
  019fa34  lis 4, 51
  019fa38  li 5, 0
  019fa3c  lfs 31, 8(7)
  019fa40  stw 6, 132(1)
  019fa44  bl 0x10675c
  019fa48  nop
  019fa4c  ori 29, 3, 0
  019fa50  cmpwi 29, 0
  019fa54  bt 2, 0x19fa74
  019fa58  lwz 3, 32(29)
  019fa5c  cmpwi 3, 0
  019fa60  bt 2, 0x19fa74
  019fa64  lhz 3, 166(3)
  019fa68  cmpwi 3, 1048
  019fa6c  bf 2, 0x19fa74
  019fa70  li 29, 0
  019fa74  ori 4, 29, 0
  019fa78  addic 5, 30, 32
  019fa7c  addic 7, 1, 128
  019fa80  li 9, 0
  019fa84  addic 8, 1, 132
  019fa88  ori 3, 31, 0
  019fa8c  li 6, 0
  019fa90  li 10, 4
  019fa94  bl 0x106840
  019fa98  nop
  019fa9c  lwz 4, 128(1)
  019faa0  cmpwi 4, 1
  019faa4  bt 2, 0x19ffb0
  019faa8  lbz 4, 32(31)
  019faac  cmpwi 1, 4, 3
  019fab0  cmpwi 4, 17
  019fab4  cror 2, 2, 6
  019fab8  bt 2, 0x19ffb0
  019fabc  lfs 1, 32(30)
  019fac0  lfs 2, 132(1)
  019fac4  fsubs 1, 1, 2
  019fac8  stfs 1, 32(30)
  019facc  lbz 4, 33(31)
  019fad0  cmpwi 4, 255
  019fad4  bt 2, 0x19fb38
  019fad8  lis 5, 165
  019fadc  rlwinm 6, 4, 2, 22, 29
  019fae0  addic 5, 5, -28284
  019fae4  lwzx 6, 5, 6
  019fae8  cmpwi 6, 0
  019faec  bt 2, 0x19fb38
  019faf0  slwi 4, 4, 2
  019faf4  li 6, 2
  019faf8  lwzx 4, 5, 4
  019fafc  lis 5, 164
  019fb00  lhz 7, 0(4)
  019fb04  lwz 8, -28512(5)
  019fb08  rlwinm 7, 7, 8, 9, 23
  019fb0c  addc 7, 8, 7
  019fb10  clrldi 7, 7, 32
  019fb14  lbz 8, 32(7)
  019fb18  cmpwi 8, 1
  019fb1c  bf 2, 0x19fb24
  019fb20  stb 6, 32(7)
  019fb24  lhz 7, 0(4)
  019fb28  addic 4, 4, 2
  019fb2c  extsh 7, 7
  019fb30  cmpwi 7, 0
  019fb34  bf 0, 0x19fb00
  019fb38  lwz 4, 32(30)
  019fb3c  cmpwi 4, 0
  019fb40  bf 1, 0x19fd7c
  019fb44  lwz 4, 460(30)
  019fb48  cmpwi 4, 0
  019fb4c  bt 2, 0x19fb5c
  019fb50  li 3, 250
  019fb54  stb 3, 103(30)
  019fb58  b 0x19ffa0
  019fb5c  cmpwi 3, 2
  019fb60  bt 1, 0x19fb78
  019fb64  cmpwi 3, -1
  019fb68  bf 1, 0x19ffa0
  019fb6c  cmpwi 3, 0
  019fb70  bf 1, 0x19ffa0
  019fb74  b 0x19fd7c
  019fb78  cmpwi 3, 10
  019fb7c  bt 1, 0x19ffa0
  019fb80  lis 4, 26
  019fb84  li 3, 14
  019fb88  addi 4, 4, -1700
  019fb8c  lis 5, 114
  019fb90  stb 3, 32(31)
  019fb94  lis 3, 16544
  019fb98  lfs 1, 12(4)
  019fb9c  lfs 2, -3052(5)
  019fba0  lis 4, 16648
  019fba4  fmuls 1, 2, 1
  019fba8  stfs 2, 140(30)
  019fbac  stw 3, 192(30)
  019fbb0  stw 4, 196(30)
  019fbb4  lis 6, 115
  019fbb8  addic 6, 6, 22784
  019fbbc  stfs 1, 136(30)
  019fbc0  lwz 4, 16(29)
  019fbc4  lwz 3, 20(29)
  019fbc8  lfs 1, 16(29)
  019fbcc  lfs 2, 20(29)
  019fbd0  fabs 3, 1
  019fbd4  fabs 5, 2
  019fbd8  rlwinm 5, 3, 3, 29, 29
  019fbdc  addic 3, 30, 112
  019fbe0  fsubs 1, 3, 5
  019fbe4  stfs 1, 140(1)
  019fbe8  lwz 7, 140(1)
  019fbec  lfs 1, 140(1)
  019fbf0  rlwimi 5, 7, 2, 30, 30
  019fbf4  fsub 4, 1, 31
  019fbf8  fsub 6, 1, 31
  019fbfc  rlwimi 5, 4, 4, 28, 28
  019fc00  ori 4, 6, 0
  019fc04  rlwimi 4, 5, 2, 26, 28
  019fc08  slwi 5, 5, 2
  019fc0c  clrldi 4, 4, 32
  019fc10  fsel 4, 4, 3, 5
  019fc14  lfsx 1, 6, 5
  019fc18  lfs 2, 4(4)
  019fc1c  fsel 3, 6, 5, 3
  019fc20  fcmpu 0, 4, 31
  019fc24  bt 1, 0x19fc30
  019fc28  fmr 1, 31
  019fc2c  b 0x19fd54
  019fc30  fsubs 5, 3, 4
  019fc34  fadds 3, 3, 4
  019fc38  addic 4, 1, 16
  019fc3c  li 7, 2
  019fc40  addic 5, 4, 160
  019fc44  addic 6, 4, 176
  019fc48  mtctr 7
  019fc4c  fdivs 3, 5, 3
  019fc50  fmuls 4, 3, 3
  019fc54  stfs 3, 188(1)
  019fc58  stfs 3, 180(1)
  019fc5c  stfs 3, 184(1)
  019fc60  stfs 3, 176(1)
  019fc64  lfs 6, 188(1)
  019fc68  lfs 7, 180(1)
  019fc6c  lfs 8, 184(1)
  019fc70  fmuls 5, 4, 4
  019fc74  fmuls 7, 7, 4
  019fc78  fmuls 6, 6, 5
  019fc7c  fmuls 3, 5, 5
  019fc80  fmuls 5, 8, 5
  019fc84  stfs 7, 180(1)
  019fc88  fmuls 4, 6, 4
  019fc8c  stfs 5, 184(1)
  019fc90  stfs 4, 188(1)
  019fc94  lfs 4, 160(4)
  019fc98  fmuls 4, 4, 3
  019fc9c  stfs 4, 176(4)
  019fca0  lfs 4, 4(5)
  019fca4  addic 4, 4, 8
  019fca8  addic 5, 5, 8
  019fcac  fmuls 4, 4, 3
  019fcb0  stfs 4, 4(6)
  019fcb4  addic 6, 6, 8
  019fcb8  bdnz 0x19fc94
  019fcbc  li 6, 4
  019fcc0  ori 4, 1, 0
  019fcc4  mtctr 6
  019fcc8  lis 5, 115
  019fccc  addic 6, 4, 176
  019fcd0  addic 5, 5, 22752
  019fcd4  ori 8, 6, 0
  019fcd8  lfs 3, 176(4)
  019fcdc  lfs 4, 0(5)
  019fce0  fmuls 3, 3, 4
  019fce4  lfs 4, 4(5)
  019fce8  addic 5, 5, 8
  019fcec  stfs 3, 176(4)
  019fcf0  lfs 3, 4(6)
  019fcf4  addic 4, 4, 8
  019fcf8  fmuls 3, 3, 4
  019fcfc  stfs 3, 4(6)
  019fd00  addic 6, 6, 8
  019fd04  bdnz 0x19fcd8
  019fd08  fmr 3, 31
  019fd0c  ori 4, 1, 0
  019fd10  mtctr 7
  019fd14  lfs 4, 176(4)
  019fd18  fadds 3, 3, 4
  019fd1c  addic 4, 4, 16
  019fd20  lfs 4, 4(8)
  019fd24  lfs 5, 8(8)
  019fd28  lfs 6, 12(8)
  019fd2c  addic 8, 8, 16
  019fd30  fadds 3, 3, 4
  019fd34  fadds 3, 3, 5
  019fd38  fadds 3, 3, 6
  019fd3c  bdnz 0x19fd14
  019fd40  lis 4, 26
  019fd44  addi 4, 4, -1700
  019fd48  lfs 4, 16(4)
  019fd4c  fadds 3, 3, 4
  019fd50  fmadds 1, 3, 1, 2
  019fd54  ori 4, 3, 0
  019fd58  ori 3, 31, 0
  019fd5c  li 6, 9
  019fd60  li 7, 1
  019fd64  li 8, 0
  019fd68  bl 0x10ad80
  019fd6c  nop
  019fd70  li 3, 250
  019fd74  stb 3, 103(30)
  019fd78  b 0x19ffa0
  019fd7c  li 3, 17
  019fd80  li 4, 0
  019fd84  lhz 6, 52(31)
  019fd88  lis 5, 26
  019fd8c  rlwimi 6, 4, 0, 19, 19
  019fd90  addi 5, 5, -1700
  019fd94  stb 3, 32(31)
  019fd98  lis 3, 114
  019fd9c  lis 4, 16744
  019fda0  sth 6, 52(31)
  019fda4  lfs 1, 20(5)
  019fda8  lfs 2, -3052(3)
  019fdac  lis 3, 16624
  019fdb0  fmuls 1, 2, 1
  019fdb4  lis 6, 115
  019fdb8  addic 6, 6, 22784
  019fdbc  stfs 1, 136(30)
  019fdc0  lfs 1, 24(5)
  019fdc4  stw 3, 192(30)
  019fdc8  fmuls 1, 2, 1
  019fdcc  stw 4, 196(30)
  019fdd0  stfs 1, 140(30)
  019fdd4  lwz 4, 16(29)
  019fdd8  lwz 3, 20(29)
  019fddc  lfs 1, 16(29)
  019fde0  lfs 2, 20(29)
  019fde4  fabs 3, 1
  019fde8  fabs 5, 2
  019fdec  rlwinm 5, 3, 3, 29, 29
  019fdf0  addic 3, 30, 112
  019fdf4  fsubs 1, 3, 5
  019fdf8  stfs 1, 136(1)
  019fdfc  lwz 7, 136(1)
  019fe00  lfs 1, 136(1)
  019fe04  rlwimi 5, 7, 2, 30, 30
  019fe08  fsub 4, 1, 31
  019fe0c  fsub 6, 1, 31
  019fe10  rlwimi 5, 4, 4, 28, 28
  019fe14  ori 4, 6, 0
  019fe18  rlwimi 4, 5, 2, 26, 28
  019fe1c  slwi 5, 5, 2
  019fe20  clrldi 4, 4, 32
  019fe24  fsel 4, 4, 3, 5
  019fe28  lfsx 1, 6, 5
  019fe2c  fsel 3, 6, 5, 3
  019fe30  lfs 2, 4(4)
  019fe34  fcmpu 0, 4, 31
  019fe38  bt 1, 0x19fe44
  019fe3c  fmr 1, 31
  019fe40  b 0x19ff68
  019fe44  fsubs 5, 3, 4
  019fe48  fadds 3, 3, 4
  019fe4c  addic 4, 1, 16
  019fe50  li 7, 2
  019fe54  addic 6, 4, 144
  019fe58  addic 5, 4, 128
  019fe5c  mtctr 7
  019fe60  fdivs 3, 5, 3
  019fe64  fmuls 4, 3, 3
  019fe68  stfs 3, 156(1)
  019fe6c  stfs 3, 148(1)
  019fe70  stfs 3, 152(1)
  019fe74  stfs 3, 144(1)
  019fe78  lfs 6, 156(1)
  019fe7c  lfs 7, 148(1)
  019fe80  lfs 8, 152(1)
  019fe84  fmuls 5, 4, 4
  019fe88  fmuls 7, 7, 4
  019fe8c  fmuls 6, 6, 5
  019fe90  fmuls 3, 5, 5
  019fe94  fmuls 5, 8, 5
  019fe98  stfs 7, 148(1)
  019fe9c  fmuls 4, 6, 4
  019fea0  stfs 5, 152(1)
  019fea4  stfs 4, 156(1)
  019fea8  lfs 4, 128(4)
  019feac  fmuls 4, 4, 3
  019feb0  stfs 4, 144(4)
  019feb4  lfs 4, 4(5)
  019feb8  addic 5, 5, 8
  019febc  fmuls 4, 4, 3
  019fec0  addic 4, 4, 8
  019fec4  stfs 4, 4(6)
  019fec8  addic 6, 6, 8
  019fecc  bdnz 0x19fea8
  019fed0  li 6, 4
  019fed4  ori 4, 1, 0
  019fed8  mtctr 6
  019fedc  lis 5, 115
  019fee0  addic 6, 4, 144
  019fee4  addic 5, 5, 22752
  019fee8  ori 8, 6, 0
  019feec  lfs 3, 144(4)
  019fef0  lfs 4, 0(5)
  019fef4  fmuls 3, 3, 4
  019fef8  lfs 4, 4(5)
  019fefc  addic 5, 5, 8
  019ff00  stfs 3, 144(4)
  019ff04  lfs 3, 4(6)
  019ff08  addic 4, 4, 8
  019ff0c  fmuls 3, 3, 4
  019ff10  stfs 3, 4(6)
  019ff14  addic 6, 6, 8
  019ff18  bdnz 0x19feec
  019ff1c  ori 4, 1, 0
  019ff20  fmr 3, 31
  019ff24  mtctr 7
  019ff28  lfs 4, 144(4)
  019ff2c  fadds 3, 3, 4
  019ff30  lfs 4, 4(8)
  019ff34  addic 4, 4, 16
  019ff38  lfs 5, 8(8)
  019ff3c  lfs 6, 12(8)
  019ff40  addic 8, 8, 16
  019ff44  fadds 3, 3, 4
  019ff48  fadds 3, 3, 5
  019ff4c  fadds 3, 3, 6
  019ff50  bdnz 0x19ff28
  019ff54  lis 4, 26
  019ff58  addi 4, 4, -1700
  019ff5c  lfs 4, 16(4)
  019ff60  fadds 3, 3, 4
  019ff64  fmadds 1, 3, 1, 2
  019ff68  ori 4, 3, 0
  019ff6c  li 6, 10
  019ff70  ori 3, 31, 0
  019ff74  li 7, 1
  019ff78  li 8, 0
  019ff7c  bl 0x10ad80
  019ff80  nop
  019ff84  li 6, 250
  019ff88  ori 3, 31, 0
  019ff8c  li 4, 0
  019ff90  li 5, -1
  019ff94  stb 6, 103(30)
  019ff98  bl 0xfd8d0
  019ff9c  nop
  019ffa0  addic 4, 30, 96
  019ffa4  ori 3, 31, 0
  019ffa8  bl 0x10c808
  019ffac  nop
  019ffb0  li 5, 255
  019ffb4  ori 3, 31, 0
  019ffb8  addic 4, 30, 96
  019ffbc  stb 5, 164(31)
  019ffc0  bl 0x10c9a0
  019ffc4  nop
  019ffc8  lbz 3, 32(31)
  019ffcc  cmpwi 3, 9
  019ffd0  bt 1, 0x19ffe0
  019ffd4  cmpwi 3, 7
  019ffd8  bf 1, 0x1a0050
  019ffdc  b 0x19fff0
  019ffe0  cmpwi 3, 11
  019ffe4  bf 1, 0x1a0050
  019ffe8  cmpwi 3, 13
  019ffec  bt 1, 0x1a0050
  019fff0  lis 3, 161
  019fff4  srawi 4, 31, 8
  019fff8  clrlwi 4, 4, 30
  019fffc  lwz 3, 1808(3)
  01a0000  srawi 5, 3, 2
  01a0004  addze 5, 5
  01a0008  sldi 5, 5, 2
  01a000c  subc 3, 3, 5
  01a0010  cmpw 3, 4
  01a0014  bf 2, 0x1a0050
  01a0018  lis 3, 26
  01a001c  li 7, 0
  01a0020  addi 5, 3, -1700
  01a0024  addic 4, 31, 16
  01a0028  ori 3, 31, 0
  01a002c  lis 6, 1
  01a0030  li 9, 0
  01a0034  lfs 1, 28(5)
  01a0038  lfs 2, 32(5)
  01a003c  li 10, 1
  01a0040  lfs 3, 36(5)
  01a0044  std 7, 112(1)
  01a0048  bl 0x105870
  01a004c  nop
  01a0050  lis 3, 26
  01a0054  lis 4, 114
  01a0058  addi 29, 3, -1700
  01a005c  lis 3, 116
  01a0060  lfs 3, 40(29)
  01a0064  lfs 2, 1632(3)
  01a0068  lfs 1, 456(30)
  01a006c  fmuls 2, 2, 3
  01a0070  lfs 4, -3052(4)
  01a0074  fmuls 2, 2, 4
  01a0078  bl 0x502578
  01a007c  nop
  01a0080  lfs 2, 44(29)
  01a0084  lfs 3, 48(29)
  01a0088  fsubs 2, 2, 1
  01a008c  fsubs 3, 3, 1
  01a0090  lfs 5, 52(29)
  01a0094  lis 3, 116
  01a0098  lis 4, 116
  01a009c  fsub 4, 1, 2
  01a00a0  fsel 2, 4, 2, 1
  01a00a4  lfs 4, 56(29)
  01a00a8  fsub 6, 3, 2
  01a00ac  fsel 2, 6, 3, 2
  01a00b0  lfs 3, 60(29)
  01a00b4  lfs 6, 64(29)
  01a00b8  lfs 8, 36(29)
  01a00bc  lwz 3, 1636(3)
  01a00c0  lwz 4, 1640(4)
  01a00c4  extsw 3, 3
  01a00c8  extsw 4, 4
  01a00cc  fmuls 7, 2, 2
  01a00d0  fmuls 9, 7, 2
  01a00d4  fmuls 10, 7, 9
  01a00d8  fmadds 2, 9, 5, 2
  01a00dc  fmuls 9, 7, 10
  01a00e0  fmadds 2, 10, 4, 2
  01a00e4  lfs 4, 68(29)
  01a00e8  stfs 1, 456(30)
  01a00ec  fmuls 5, 7, 9
  01a00f0  fmadds 2, 9, 3, 2
  01a00f4  fmadds 1, 5, 6, 2
  01a00f8  fadds 1, 1, 8
  01a00fc  fmuls 1, 1, 4
  01a0100  bl 0x5027bc
  01a0104  nop
  01a0108  stw 3, 144(31)
  01a010c  lwz 3, 428(30)
  01a0110  cmpwi 3, 0
  01a0114  bt 2, 0x1a0134
  01a0118  lis 3, 26
  01a011c  lis 4, 116
  01a0120  addi 3, 3, -1700
  01a0124  lfs 1, 72(3)
  01a0128  lfs 31, 1616(4)
  01a012c  fadds 31, 31, 1
  01a0130  b 0x1a017c
  01a0134  lbz 3, 32(31)
  01a0138  cmpwi 3, 1
  01a013c  bf 2, 0x1a0174
  01a0140  lis 3, 151
  01a0144  addic 3, 3, -25376
  01a0148  lwz 4, 576(3)
  01a014c  cmpw 31, 4
  01a0150  bt 2, 0x1a0160
  01a0154  lwz 3, 572(3)
  01a0158  cmpw 31, 3
  01a015c  bf 2, 0x1a0170
  01a0160  lis 3, 26
  01a0164  addi 3, 3, -1700
  01a0168  lfs 31, 72(3)
  01a016c  b 0x1a0170
  01a0170  b 0x1a017c
  01a0174  lis 3, 116
  01a0178  lfs 31, 1616(3)
  01a017c  lis 3, 165
  01a0180  addic 4, 30, 288
  01a0184  fmr 1, 31
  01a0188  addic 5, 3, 7136
  01a018c  lwz 3, 432(30)
  01a0190  stfs 31, 416(30)
  01a0194  li 6, 0
  01a0198  slwi 3, 3, 2
  01a019c  li 7, 0
  01a01a0  extsw 8, 3
  01a01a4  ori 3, 31, 0
  01a01a8  lwzx 5, 5, 8
  01a01ac  addic 8, 5, 16
  01a01b0  lwz 9, 0(5)
  01a01b4  extsw 9, 9
  01a01b8  bl 0x111ba0
  01a01bc  nop
  01a01c0  cmpwi 3, 2
  01a01c4  bt 2, 0x1a0228
  01a01c8  lfs 1, 372(30)
  01a01cc  lfs 2, 292(30)
  01a01d0  lfs 3, 368(30)
  01a01d4  fsubs 1, 1, 2
  01a01d8  lfs 2, 288(30)
  01a01dc  fsubs 2, 3, 2
  01a01e0  fmuls 1, 1, 1
  01a01e4  fmadds 1, 2, 2, 1
  01a01e8  lfs 2, 416(30)
  01a01ec  fsqrts 1, 1
  01a01f0  fcmpu 0, 1, 2
  01a01f4  bt 1, 0x1a0220
  01a01f8  lfs 1, 24(31)
  01a01fc  lis 3, 26
  01a0200  lfs 2, 296(30)
  01a0204  addi 3, 3, -1700
  01a0208  fsubs 1, 1, 2
  01a020c  lfs 2, 76(3)
  01a0210  fabs 1, 1
  01a0214  fcmpu 0, 1, 2
  01a0218  cror 6, 0, 2
  01a021c  bt 6, 0x1a0228
  01a0220  li 3, 2
  01a0224  stw 3, 356(30)
  01a0228  lwz 3, 352(30)
  01a022c  cmpwi 3, 0
  01a0230  bf 2, 0x1a0244
  01a0234  lis 3, 151
  01a0238  addic 3, 3, -25376
  01a023c  lwz 3, 8320(3)
  01a0240  stw 3, 352(30)
  01a0244  ld 0, 256(1)
  01a0248  mtlr 0
  01a024c  lfd 31, 232(1)
  01a0250  ld 29, 208(1)
  01a0254  ld 30, 216(1)
  01a0258  ld 31, 224(1)
  01a025c  addi 1, 1, 240
  01a0260  blr

UpdateMoby_1048:   # 0x1a02d8, 0x1b4c bytes
  01a02d8  stdu 1, -496(1)
  01a02dc  mflr 0
  01a02e0  std 0, 512(1)
  01a02e4  stfd 29, 472(1)
  01a02e8  stfd 30, 480(1)
  01a02ec  stfd 31, 488(1)
  01a02f0  std 31, 464(1)
  01a02f4  std 29, 448(1)
  01a02f8  lis 4, 26
  01a02fc  ori 31, 3, 0
  01a0300  std 30, 456(1)
  01a0304  addi 29, 4, 612
  01a0308  std 28, 440(1)
  01a030c  std 27, 432(1)
  01a0310  std 26, 424(1)
  01a0314  std 25, 416(1)
  01a0318  lwz 30, 120(31)
  01a031c  bl 0x19f9b0
  01a0320  lfs 1, 0(29)
  01a0324  ori 3, 31, 0
  01a0328  addic 5, 30, 480
  01a032c  li 4, 1
  01a0330  bl 0x119a18
  01a0334  nop
  01a0338  lbz 3, 49(31)
  01a033c  cmpwi 3, 0
  01a0340  bt 2, 0x1a03ac
  01a0344  lis 3, 149
  01a0348  lfs 1, 20(31)
  01a034c  lfs 2, 16(31)
  01a0350  addic 3, 3, 5056
  01a0354  lfs 3, 324(3)
  01a0358  lfs 4, 320(3)
  01a035c  fsubs 1, 1, 3
  01a0360  fsubs 2, 2, 4
  01a0364  lfs 3, 24(31)
  01a0368  lfs 4, 328(3)
  01a036c  fsubs 3, 3, 4
  01a0370  lis 3, 26
  01a0374  fmuls 1, 1, 1
  01a0378  addi 3, 3, 612
  01a037c  fmadds 1, 2, 2, 1
  01a0380  lfs 2, 4(3)
  01a0384  fmadds 1, 3, 3, 1
  01a0388  fsqrts 1, 1
  01a038c  fcmpu 0, 1, 2
  01a0390  cror 6, 1, 2
  01a0394  bt 6, 0x1a03ac
  01a0398  ori 3, 31, 0
  01a039c  bl 0x106360
  01a03a0  nop
  01a03a4  li 3, 21
  01a03a8  stb 3, 127(31)
  01a03ac  lis 4, 116
  01a03b0  lwz 3, 36(31)
  01a03b4  lfs 1, 1584(4)
  01a03b8  lwz 29, 352(30)
  01a03bc  lfs 2, 36(3)
  01a03c0  lbz 4, 32(31)
  01a03c4  fmuls 1, 2, 1
  01a03c8  cmpwi 4, 8
  01a03cc  cmpwi 1, 4, 3
  01a03d0  cmpwi 6, 4, 0
  01a03d4  cmpwi 7, 4, -1
  01a03d8  stfs 1, 44(31)
  01a03dc  bt 1, 0x1a042c
  01a03e0  bt 5, 0x1a0404
  01a03e4  bt 25, 0x1a03f0
  01a03e8  bf 29, 0x1a1dec
  01a03ec  b 0x1a0484
  01a03f0  cmpwi 4, 1
  01a03f4  bf 1, 0x1a06d0
  01a03f8  cmpwi 4, 2
  01a03fc  bf 1, 0x1a0738
  01a0400  b 0x1a093c
  01a0404  cmpwi 4, 5
  01a0408  bt 1, 0x1a0418
  01a040c  cmpwi 4, 4
  01a0410  bf 1, 0x1a09bc
  01a0414  b 0x1a0b50
  01a0418  cmpwi 4, 6
  01a041c  bf 1, 0x1a0b9c
  01a0420  cmpwi 4, 7
  01a0424  bf 1, 0x1a0fdc
  01a0428  b 0x1a106c
  01a042c  cmpwi 4, 13
  01a0430  bt 1, 0x1a045c
  01a0434  cmpwi 4, 10
  01a0438  bt 1, 0x1a0448
  01a043c  cmpwi 4, 9
  01a0440  bf 1, 0x1a0ca0
  01a0444  b 0x1a0f78
  01a0448  cmpwi 4, 11
  01a044c  bf 1, 0x1a1378
  01a0450  cmpwi 4, 12
  01a0454  bf 1, 0x1a1764
  01a0458  b 0x1a150c
  01a045c  cmpwi 4, 15
  01a0460  bt 1, 0x1a0470
  01a0464  cmpwi 4, 14
  01a0468  bf 1, 0x1a1c04
  01a046c  b 0x1a194c
  01a0470  cmpwi 4, 16
  01a0474  bf 1, 0x1a1a3c
  01a0478  cmpwi 4, 17
  01a047c  bf 1, 0x1a1d28
  01a0480  b 0x1a1dec
  01a0484  lis 3, 16512
  01a0488  li 4, 4
  01a048c  lis 6, 26
  01a0490  li 5, 3
  01a0494  li 7, 1
  01a0498  stw 3, 32(30)
  01a049c  addi 29, 6, 612
  01a04a0  sth 4, 36(30)
  01a04a4  stb 5, 40(30)
  01a04a8  stb 7, 41(30)
  01a04ac  lfs 1, 8(29)
  01a04b0  bl 0x502758
  01a04b4  nop
  01a04b8  stb 3, 88(30)
  01a04bc  lfs 1, 12(29)
  01a04c0  bl 0x502758
  01a04c4  nop
  01a04c8  stb 3, 90(30)
  01a04cc  lfs 1, 16(31)
  01a04d0  lhz 3, 52(31)
  01a04d4  stfs 1, 368(30)
  01a04d8  ori 3, 3, 20480
  01a04dc  lfs 1, 20(31)
  01a04e0  stfs 1, 372(30)
  01a04e4  lfs 1, 24(31)
  01a04e8  sth 3, 52(31)
  01a04ec  stfs 1, 376(30)
  01a04f0  lfs 1, 28(31)
  01a04f4  stfs 1, 380(30)
  01a04f8  lfs 1, 16(29)
  01a04fc  lfs 2, 20(29)
  01a0500  bl 0xfcbe8
  01a0504  nop
  01a0508  addic 3, 30, 208
  01a050c  stfs 1, 452(30)
  01a0510  bl 0x100f8c
  01a0514  nop
  01a0518  lis 3, 16384
  01a051c  lis 28, 116
  01a0520  stw 3, 220(30)
  01a0524  stw 3, 216(30)
  01a0528  lfs 1, 24(29)
  01a052c  lfs 2, 1584(28)
  01a0530  fmuls 1, 2, 1
  01a0534  bl 0x502758
  01a0538  nop
  01a053c  lis 4, 114
  01a0540  lfs 1, 1584(28)
  01a0544  lfs 2, 420(30)
  01a0548  stfs 1, 212(30)
  01a054c  lfs 1, -3052(4)
  01a0550  stw 3, 208(30)
  01a0554  fmuls 1, 2, 1
  01a0558  stfs 1, 244(30)
  01a055c  lfs 1, 28(29)
  01a0560  bl 0x502758
  01a0564  nop
  01a0568  lis 4, 16192
  01a056c  lis 5, 116
  01a0570  lis 6, 114
  01a0574  stw 4, 152(30)
  01a0578  lis 4, 14851
  01a057c  lfs 1, 1588(5)
  01a0580  lfs 2, -3048(6)
  01a0584  ori 4, 4, 4719
  01a0588  stw 3, 144(30)
  01a058c  fmuls 1, 1, 2
  01a0590  li 3, 0
  01a0594  li 5, 9
  01a0598  stw 4, 132(30)
  01a059c  stb 3, 173(30)
  01a05a0  stw 5, 148(30)
  01a05a4  stfs 1, 128(30)
  01a05a8  bl 0xfcc68
  01a05ac  nop
  01a05b0  lwz 3, 460(30)
  01a05b4  stfs 1, 456(30)
  01a05b8  cmpwi 3, 0
  01a05bc  bt 2, 0x1a05f0
  01a05c0  li 3, 15
  01a05c4  lbz 4, 83(31)
  01a05c8  cmpwi 4, 2
  01a05cc  stb 3, 32(31)
  01a05d0  bt 2, 0x1a1dec
  01a05d4  ori 3, 31, 0
  01a05d8  li 4, 2
  01a05dc  li 5, 0
  01a05e0  li 6, 0
  01a05e4  bl 0xfddc0
  01a05e8  nop
  01a05ec  b 0x1a1dec
  01a05f0  lwz 3, 448(30)
  01a05f4  cmpwi 3, -1
  01a05f8  bf 1, 0x1a0608
  01a05fc  li 3, 3
  01a0600  stb 3, 32(31)
  01a0604  b 0x1a1dec
  01a0608  lwz 3, 436(30)
  01a060c  cmpwi 3, 0
  01a0610  bt 2, 0x1a0694
  01a0614  lis 3, 26
  01a0618  vspltisw 2, -1
  01a061c  li 4, 2
  01a0620  addi 3, 3, 612
  01a0624  li 6, 32
  01a0628  lis 5, 114
  01a062c  stb 4, 32(31)
  01a0630  li 4, -3056
  01a0634  vslw 2, 2, 2
  01a0638  lvlx 3, 6, 3
  01a063c  li 3, 424
  01a0640  vspltw 3, 3, 0
  01a0644  lvlx 4, 4, 5
  01a0648  vmaddfp 2, 4, 3, 2
  01a064c  vctsxs 2, 2, 0
  01a0650  vspltw 2, 2, 0
  01a0654  stvewx 2, 3, 30
  01a0658  lbz 3, 83(31)
  01a065c  cmpwi 3, 0
  01a0660  bt 2, 0x1a067c
  01a0664  ori 3, 31, 0
  01a0668  li 4, 0
  01a066c  li 5, 0
  01a0670  li 6, 0
  01a0674  bl 0xfddc0
  01a0678  nop
  01a067c  lbz 3, 33(31)
  01a0680  cmpwi 3, 255
  01a0684  bt 2, 0x1a1dec
  01a0688  ori 3, 31, 0
  01a068c  bl 0x19f8f0
  01a0690  b 0x1a1dec
  01a0694  li 3, 1
  01a0698  lbz 4, 83(31)
  01a069c  cmpwi 4, 0
  01a06a0  stb 3, 32(31)
  01a06a4  bt 2, 0x1a06c0
  01a06a8  ori 3, 31, 0
  01a06ac  li 4, 0
  01a06b0  li 5, 0
  01a06b4  li 6, 0
  01a06b8  bl 0xfddc0
  01a06bc  nop
  01a06c0  lis 3, 116
  01a06c4  lfs 1, 1616(3)
  01a06c8  stfs 1, 416(30)
  01a06cc  b 0x1a1dec
  01a06d0  lwz 3, 356(30)
  01a06d4  cmpwi 3, 2
  01a06d8  bt 2, 0x1a1dec
  01a06dc  lis 3, 26
  01a06e0  li 4, 2
  01a06e4  vspltisw 2, -1
  01a06e8  addi 3, 3, 612
  01a06ec  li 5, 32
  01a06f0  lis 6, 114
  01a06f4  stb 4, 32(31)
  01a06f8  li 4, -3056
  01a06fc  vslw 2, 2, 2
  01a0700  lvlx 3, 5, 3
  01a0704  li 3, 424
  01a0708  vspltw 3, 3, 0
  01a070c  lvlx 4, 4, 6
  01a0710  vmaddfp 2, 4, 3, 2
  01a0714  vctsxs 2, 2, 0
  01a0718  vspltw 2, 2, 0
  01a071c  stvewx 2, 3, 30
  01a0720  lbz 3, 33(31)
  01a0724  cmpwi 3, 255
  01a0728  bt 2, 0x1a1dec
  01a072c  ori 3, 31, 0
  01a0730  bl 0x19f8f0
  01a0734  b 0x1a1dec
  01a0738  lbz 4, 83(31)
  01a073c  cmpwi 4, 0
  01a0740  cmpwi 1, 4, 2
  01a0744  bf 2, 0x1a07e8
  01a0748  lwz 3, 424(30)
  01a074c  cmpwi 3, 0
  01a0750  bf 2, 0x1a0788
  01a0754  lis 3, 26
  01a0758  addi 3, 3, 612
  01a075c  lfs 1, 16(3)
  01a0760  lfs 2, 36(3)
  01a0764  bl 0xfcbe8
  01a0768  nop
  01a076c  lis 3, 114
  01a0770  lfs 2, -3056(3)
  01a0774  fmuls 1, 1, 2
  01a0778  bl 0x502758
  01a077c  nop
  01a0780  stw 3, 424(30)
  01a0784  b 0x1a1dec
  01a0788  addic 3, 30, 424
  01a078c  bl 0x4fff60
  01a0790  nop
  01a0794  cmpwi 3, 0
  01a0798  bt 2, 0x1a1dec
  01a079c  lbz 3, 83(31)
  01a07a0  cmpwi 3, 3
  01a07a4  bt 2, 0x1a1dec
  01a07a8  lis 3, 26
  01a07ac  lis 4, 114
  01a07b0  addi 3, 3, 612
  01a07b4  li 5, 0
  01a07b8  lfs 1, 40(3)
  01a07bc  lfs 2, -3056(4)
  01a07c0  ori 3, 31, 0
  01a07c4  li 4, 3
  01a07c8  fmuls 1, 2, 1
  01a07cc  fctiwz 1, 1
  01a07d0  stfd 1, 400(1)
  01a07d4  lwz 6, 404(1)
  01a07d8  extsw 6, 6
  01a07dc  bl 0xfddc0
  01a07e0  nop
  01a07e4  b 0x1a1dec
  01a07e8  lbz 4, 112(31)
  01a07ec  rlwinm 4, 4, 0, 30, 30
  01a07f0  cmpwi 4, 0
  01a07f4  bt 2, 0x1a1dec
  01a07f8  lis 4, 151
  01a07fc  lfs 1, 20(31)
  01a0800  addic 4, 4, -25376
  01a0804  lfs 2, 16(31)
  01a0808  lfs 3, 132(4)
  01a080c  lfs 4, 128(4)
  01a0810  fsubs 1, 1, 3
  01a0814  fsubs 2, 2, 4
  01a0818  lis 4, 116
  01a081c  fmuls 1, 1, 1
  01a0820  fmadds 1, 2, 2, 1
  01a0824  lfs 2, 1616(4)
  01a0828  fsqrts 1, 1
  01a082c  fcmpu 0, 1, 2
  01a0830  cror 2, 1, 2
  01a0834  bt 2, 0x1a08b4
  01a0838  lis 4, 26
  01a083c  li 3, 8
  01a0840  addi 4, 4, 612
  01a0844  stb 3, 32(31)
  01a0848  lfs 2, 408(30)
  01a084c  lfs 1, 44(4)
  01a0850  lfs 3, 48(4)
  01a0854  fmuls 1, 2, 1
  01a0858  fmuls 2, 2, 3
  01a085c  bl 0xfcbe8
  01a0860  nop
  01a0864  stfs 1, 404(30)
  01a0868  lbz 3, 83(31)
  01a086c  cmpwi 3, 1
  01a0870  bt 2, 0x1a1dec
  01a0874  lis 3, 26
  01a0878  lis 4, 114
  01a087c  addi 3, 3, 612
  01a0880  li 5, 0
  01a0884  lfs 1, 40(3)
  01a0888  lfs 2, -3056(4)
  01a088c  ori 3, 31, 0
  01a0890  fmuls 1, 2, 1
  01a0894  li 4, 1
  01a0898  fctiwz 1, 1
  01a089c  stfd 1, 400(1)
  01a08a0  lwz 6, 404(1)
  01a08a4  extsw 6, 6
  01a08a8  bl 0xfddc0
  01a08ac  nop
  01a08b0  b 0x1a1dec
  01a08b4  lwz 3, 80(3)
  01a08b8  li 4, 6
  01a08bc  lbz 3, 16(3)
  01a08c0  stb 4, 32(31)
  01a08c4  bt 6, 0x1a1dec
  01a08c8  lis 4, 26
  01a08cc  extsw 3, 3
  01a08d0  addi 30, 4, 612
  01a08d4  lfs 1, 16(30)
  01a08d8  std 3, 400(1)
  01a08dc  lfs 2, 20(30)
  01a08e0  lfd 3, 400(1)
  01a08e4  fcfid 3, 3
  01a08e8  frsp 3, 3
  01a08ec  fsubs 2, 3, 2
  01a08f0  bl 0xfcbe8
  01a08f4  nop
  01a08f8  fctiwz 1, 1
  01a08fc  lis 4, 114
  01a0900  ori 3, 31, 0
  01a0904  lfs 2, -3056(4)
  01a0908  li 4, 2
  01a090c  stfd 1, 400(1)
  01a0910  lfs 1, 52(30)
  01a0914  lwz 5, 404(1)
  01a0918  fmuls 1, 2, 1
  01a091c  extsw 5, 5
  01a0920  fctiwz 1, 1
  01a0924  stfd 1, 400(1)
  01a0928  lwz 6, 404(1)
  01a092c  extsw 6, 6
  01a0930  bl 0xfddc0
  01a0934  nop
  01a0938  b 0x1a1dec
  01a093c  lwz 30, 448(30)
  01a0940  cmpwi 30, -1
  01a0944  bf 1, 0x1a1dec
  01a0948  lis 3, 151
  01a094c  extsw 4, 30
  01a0950  addic 3, 3, -25376
  01a0954  addic 3, 3, 128
  01a0958  bl 0x110b70
  01a095c  nop
  01a0960  cmpwi 3, 0
  01a0964  bt 2, 0x1a1dec
  01a0968  li 3, 4
  01a096c  lbz 4, 83(31)
  01a0970  cmpwi 4, 3
  01a0974  stb 3, 32(31)
  01a0978  bt 2, 0x1a1dec
  01a097c  lis 3, 26
  01a0980  lis 4, 114
  01a0984  addi 3, 3, 612
  01a0988  li 5, 0
  01a098c  lfs 1, 56(3)
  01a0990  lfs 2, -3056(4)
  01a0994  ori 3, 31, 0
  01a0998  fmuls 1, 2, 1
  01a099c  li 4, 3
  01a09a0  fctiwz 1, 1
  01a09a4  stfd 1, 400(1)
  01a09a8  lwz 6, 404(1)
  01a09ac  extsw 6, 6
  01a09b0  bl 0xfddc0
  01a09b4  nop
  01a09b8  b 0x1a1dec
  01a09bc  lbz 3, 112(31)
  01a09c0  rlwinm 3, 3, 0, 30, 30
  01a09c4  cmpwi 3, 0
  01a09c8  bt 2, 0x1a1dec
  01a09cc  lbz 3, 83(31)
  01a09d0  cmpwi 3, 3
  01a09d4  cmpwi 1, 3, 2
  01a09d8  cmpwi 6, 3, 6
  01a09dc  bt 1, 0x1a09e8
  01a09e0  bf 5, 0x1a1dec
  01a09e4  b 0x1a09f0
  01a09e8  bt 26, 0x1a0a34
  01a09ec  b 0x1a1dec
  01a09f0  bt 26, 0x1a1dec
  01a09f4  lis 3, 26
  01a09f8  lis 4, 114
  01a09fc  addi 3, 3, 612
  01a0a00  li 5, 0
  01a0a04  lfs 1, 56(3)
  01a0a08  lfs 2, -3056(4)
  01a0a0c  ori 3, 31, 0
  01a0a10  fmuls 1, 2, 1
  01a0a14  li 4, 6
  01a0a18  fctiwz 1, 1
  01a0a1c  stfd 1, 400(1)
  01a0a20  lwz 6, 404(1)
  01a0a24  extsw 6, 6
  01a0a28  bl 0xfddc0
  01a0a2c  nop
  01a0a30  b 0x1a1dec
  01a0a34  li 29, 5
  01a0a38  lis 3, 165
  01a0a3c  stb 29, 32(31)
  01a0a40  lwz 4, 444(30)
  01a0a44  lwz 3, 7128(3)
  01a0a48  slwi 4, 4, 7
  01a0a4c  addc 3, 3, 4
  01a0a50  clrldi 3, 3, 32
  01a0a54  lis 4, 114
  01a0a58  lfs 1, 48(3)
  01a0a5c  stfs 1, 368(30)
  01a0a60  lfs 2, 52(3)
  01a0a64  stfs 2, 372(30)
  01a0a68  lfs 3, 56(3)
  01a0a6c  stfs 3, 376(30)
  01a0a70  lfs 3, 60(3)
  01a0a74  stfs 3, 380(30)
  01a0a78  lfs 3, 20(31)
  01a0a7c  lfs 4, 16(31)
  01a0a80  fsubs 2, 3, 2
  01a0a84  fsubs 1, 4, 1
  01a0a88  lis 3, 26
  01a0a8c  addi 3, 3, 612
  01a0a90  li 7, 0
  01a0a94  lfs 3, 60(3)
  01a0a98  fmuls 2, 2, 2
  01a0a9c  lfs 4, -3056(4)
  01a0aa0  addic 3, 31, 16
  01a0aa4  addic 4, 30, 368
  01a0aa8  fmadds 1, 1, 1, 2
  01a0aac  fmuls 2, 4, 3
  01a0ab0  lfs 3, 128(30)
  01a0ab4  fsqrts 1, 1
  01a0ab8  fctidz 2, 2
  01a0abc  fcfid 2, 2
  01a0ac0  frsp 2, 2
  01a0ac4  fdivs 1, 1, 2
  01a0ac8  fneg 2, 3
  01a0acc  stfs 1, 136(30)
  01a0ad0  bl 0x108180
  01a0ad4  nop
  01a0ad8  li 3, 3
  01a0adc  stfs 1, 140(30)
  01a0ae0  addic 28, 30, 112
  01a0ae4  lfs 1, 368(30)
  01a0ae8  stw 29, 148(30)
  01a0aec  stb 3, 173(30)
  01a0af0  lfs 2, 16(31)
  01a0af4  lfs 3, 372(30)
  01a0af8  lfs 4, 20(31)
  01a0afc  fsubs 1, 1, 2
  01a0b00  fsubs 2, 3, 4
  01a0b04  bl 0x5e8338
  01a0b08  nop
  01a0b0c  ori 3, 31, 0
  01a0b10  ori 4, 28, 0
  01a0b14  li 6, 7
  01a0b18  li 7, 1
  01a0b1c  li 8, 0
  01a0b20  bl 0x10ad80
  01a0b24  nop
  01a0b28  lbz 3, 83(31)
  01a0b2c  cmpwi 3, 7
  01a0b30  bt 2, 0x1a1dec
  01a0b34  ori 3, 31, 0
  01a0b38  li 4, 7
  01a0b3c  li 5, 0
  01a0b40  li 6, 5
  01a0b44  bl 0xfddc0
  01a0b48  nop
  01a0b4c  b 0x1a1dec
  01a0b50  ori 3, 31, 0
  01a0b54  addic 4, 30, 112
  01a0b58  bl 0x10b030
  01a0b5c  nop
  01a0b60  clrlwi 3, 3, 31
  01a0b64  cmpwi 3, 0
  01a0b68  bt 2, 0x1a1dec
  01a0b6c  li 3, 6
  01a0b70  lbz 4, 83(31)
  01a0b74  cmpwi 4, 2
  01a0b78  stb 3, 32(31)
  01a0b7c  bt 2, 0x1a1dec
  01a0b80  ori 3, 31, 0
  01a0b84  li 4, 2
  01a0b88  li 5, 0
  01a0b8c  li 6, 5
  01a0b90  bl 0xfddc0
  01a0b94  nop
  01a0b98  b 0x1a1dec
  01a0b9c  lfs 1, 288(30)
  01a0ba0  lfs 2, 16(31)
  01a0ba4  lfs 3, 292(30)
  01a0ba8  lfs 4, 20(31)
  01a0bac  fsubs 1, 1, 2
  01a0bb0  fsubs 2, 3, 4
  01a0bb4  bl 0x5e8338
  01a0bb8  nop
  01a0bbc  lis 3, 26
  01a0bc0  lis 6, 114
  01a0bc4  addi 4, 3, 612
  01a0bc8  ori 3, 31, 0
  01a0bcc  addic 5, 30, 400
  01a0bd0  lfs 4, 72(4)
  01a0bd4  lfs 2, 64(4)
  01a0bd8  lfs 5, 68(4)
  01a0bdc  lfs 6, -3052(6)
  01a0be0  fmr 3, 5
  01a0be4  fmuls 4, 6, 4
  01a0be8  bl 0xff2e8
  01a0bec  nop
  01a0bf0  lwz 3, 356(30)
  01a0bf4  cmpwi 3, 2
  01a0bf8  bt 2, 0x1a0c40
  01a0bfc  li 3, 7
  01a0c00  lis 4, 26
  01a0c04  addi 4, 4, 612
  01a0c08  stb 3, 32(31)
  01a0c0c  lwz 3, 440(30)
  01a0c10  extsw 3, 3
  01a0c14  lfs 1, 16(4)
  01a0c18  std 3, 400(1)
  01a0c1c  lfd 2, 400(1)
  01a0c20  fcfid 2, 2
  01a0c24  frsp 2, 2
  01a0c28  bl 0xfcbe8
  01a0c2c  nop
  01a0c30  bl 0x502758
  01a0c34  nop
  01a0c38  stw 3, 424(30)
  01a0c3c  b 0x1a1dec
  01a0c40  lwz 3, 428(30)
  01a0c44  cmpwi 3, 0
  01a0c48  bt 2, 0x1a1dec
  01a0c4c  li 3, 9
  01a0c50  lbz 4, 83(31)
  01a0c54  cmpwi 4, 1
  01a0c58  stb 3, 32(31)
  01a0c5c  bt 2, 0x1a1dec
  01a0c60  lis 3, 26
  01a0c64  lis 4, 114
  01a0c68  addi 3, 3, 612
  01a0c6c  li 5, 0
  01a0c70  lfs 1, 40(3)
  01a0c74  lfs 2, -3056(4)
  01a0c78  ori 3, 31, 0
  01a0c7c  li 4, 1
  01a0c80  fmuls 1, 2, 1
  01a0c84  fctiwz 1, 1
  01a0c88  stfd 1, 400(1)
  01a0c8c  lwz 6, 404(1)
  01a0c90  extsw 6, 6
  01a0c94  bl 0xfddc0
  01a0c98  nop
  01a0c9c  b 0x1a1dec
  01a0ca0  lis 3, 26
  01a0ca4  lis 28, 114
  01a0ca8  lfs 1, 420(30)
  01a0cac  addi 27, 3, 612
  01a0cb0  lis 4, 114
  01a0cb4  addic 3, 30, 244
  01a0cb8  lfs 2, -3052(28)
  01a0cbc  lfs 3, 76(27)
  01a0cc0  lfs 4, -3048(4)
  01a0cc4  fmuls 1, 1, 2
  01a0cc8  fmuls 2, 4, 3
  01a0ccc  bl 0x109af0
  01a0cd0  nop
  01a0cd4  lfs 1, 16(29)
  01a0cd8  lfs 2, 16(31)
  01a0cdc  lfs 3, 20(29)
  01a0ce0  lfs 4, 20(31)
  01a0ce4  fsubs 1, 1, 2
  01a0ce8  fsubs 2, 3, 4
  01a0cec  bl 0x5e8338
  01a0cf0  nop
  01a0cf4  lfs 4, 72(27)
  01a0cf8  addic 5, 30, 400
  01a0cfc  lfs 2, 64(27)
  01a0d00  ori 3, 31, 0
  01a0d04  lfs 5, 68(27)
  01a0d08  lfs 6, -3052(28)
  01a0d0c  fmr 3, 5
  01a0d10  fmuls 4, 6, 4
  01a0d14  bl 0xff2e8
  01a0d18  nop
  01a0d1c  lfs 1, 20(31)
  01a0d20  lfs 2, 20(29)
  01a0d24  lfs 3, 16(31)
  01a0d28  fsubs 1, 1, 2
  01a0d2c  lfs 2, 16(29)
  01a0d30  fsubs 2, 3, 2
  01a0d34  lis 28, 116
  01a0d38  ori 3, 31, 0
  01a0d3c  fmuls 1, 1, 1
  01a0d40  fmadds 1, 2, 2, 1
  01a0d44  lfs 2, 1604(28)
  01a0d48  fsqrts 1, 1
  01a0d4c  fsub 3, 2, 1
  01a0d50  fsel 31, 3, 1, 2
  01a0d54  bl 0x19f1e8
  01a0d58  fmr 30, 1
  01a0d5c  bl 0x5e8078
  01a0d60  nop
  01a0d64  fmr 29, 1
  01a0d68  fmr 1, 30
  01a0d6c  bl 0x5e8128
  01a0d70  nop
  01a0d74  lfs 2, 16(29)
  01a0d78  lfs 3, 20(29)
  01a0d7c  fmadds 2, 29, 31, 2
  01a0d80  fmadds 3, 1, 31, 3
  01a0d84  lfs 1, 16(31)
  01a0d88  lfs 31, 72(31)
  01a0d8c  lfs 4, 20(31)
  01a0d90  fsubs 1, 2, 1
  01a0d94  fsubs 2, 3, 4
  01a0d98  bl 0x5e8338
  01a0d9c  nop
  01a0da0  stfs 1, 72(31)
  01a0da4  bl 0x5e8078
  01a0da8  nop
  01a0dac  lfs 30, 80(27)
  01a0db0  lfs 2, 72(31)
  01a0db4  fmuls 3, 1, 30
  01a0db8  fmr 1, 2
  01a0dbc  stfs 3, 112(1)
  01a0dc0  bl 0x5e8128
  01a0dc4  nop
  01a0dc8  fmuls 1, 1, 30
  01a0dcc  li 26, 0
  01a0dd0  ori 3, 31, 0
  01a0dd4  addic 4, 30, 208
  01a0dd8  addic 5, 1, 112
  01a0ddc  stw 26, 120(1)
  01a0de0  addic 6, 1, 128
  01a0de4  stfs 1, 116(1)
  01a0de8  lfs 1, 20(27)
  01a0dec  bl 0x101058
  01a0df0  nop
  01a0df4  stfs 31, 72(31)
  01a0df8  lwz 3, 432(30)
  01a0dfc  addic 25, 31, 16
  01a0e00  lfs 1, 84(27)
  01a0e04  extsw 3, 3
  01a0e08  ori 5, 25, 0
  01a0e0c  ori 6, 25, 0
  01a0e10  bl 0x1145d8
  01a0e14  nop
  01a0e18  lwz 3, 432(30)
  01a0e1c  ori 4, 25, 0
  01a0e20  addic 5, 29, 16
  01a0e24  extsw 3, 3
  01a0e28  addic 6, 1, 144
  01a0e2c  bl 0xfc948
  01a0e30  nop
  01a0e34  cmpwi 3, 0
  01a0e38  lwz 4, 428(30)
  01a0e3c  ori 5, 26, 0
  01a0e40  lbz 3, 83(31)
  01a0e44  lfs 3, 16(31)
  01a0e48  lfs 2, 20(31)
  01a0e4c  lfs 1, 1604(28)
  01a0e50  bt 2, 0x1a0e94
  01a0e54  lfs 4, 148(1)
  01a0e58  lfs 5, 144(1)
  01a0e5c  fsubs 4, 2, 4
  01a0e60  fsubs 5, 3, 5
  01a0e64  lfs 6, 24(31)
  01a0e68  lfs 7, 152(1)
  01a0e6c  fsubs 6, 6, 7
  01a0e70  fmuls 4, 4, 4
  01a0e74  fmadds 4, 5, 5, 4
  01a0e78  lfs 5, 452(30)
  01a0e7c  fmadds 4, 6, 6, 4
  01a0e80  fsqrts 4, 4
  01a0e84  fcmpu 0, 4, 5
  01a0e88  cror 6, 1, 2
  01a0e8c  bt 6, 0x1a0e94
  01a0e90  li 5, 1
  01a0e94  cmpwi 4, 0
  01a0e98  cmpwi 1, 5, 0
  01a0e9c  bf 2, 0x1a0eac
  01a0ea0  li 3, 12
  01a0ea4  stb 3, 32(31)
  01a0ea8  b 0x1a1dec
  01a0eac  bt 6, 0x1a0f00
  01a0eb0  li 4, 10
  01a0eb4  cmpwi 3, 5
  01a0eb8  stb 4, 32(31)
  01a0ebc  bt 2, 0x1a1dec
  01a0ec0  lis 3, 26
  01a0ec4  lis 4, 114
  01a0ec8  addi 3, 3, 612
  01a0ecc  li 5, 0
  01a0ed0  lfs 1, 40(3)
  01a0ed4  lfs 2, -3056(4)
  01a0ed8  ori 3, 31, 0
  01a0edc  fmuls 1, 2, 1
  01a0ee0  li 4, 5
  01a0ee4  fctiwz 1, 1
  01a0ee8  stfd 1, 400(1)
  01a0eec  lwz 6, 404(1)
  01a0ef0  extsw 6, 6
  01a0ef4  bl 0xfddc0
  01a0ef8  nop
  01a0efc  b 0x1a1dec
  01a0f00  lfs 4, 20(29)
  01a0f04  lfs 5, 16(29)
  01a0f08  fsubs 2, 2, 4
  01a0f0c  fsubs 3, 3, 5
  01a0f10  fmuls 2, 2, 2
  01a0f14  fmadds 2, 3, 3, 2
  01a0f18  fsqrts 2, 2
  01a0f1c  fcmpu 0, 2, 1
  01a0f20  cror 6, 1, 2
  01a0f24  bt 6, 0x1a1dec
  01a0f28  li 4, 11
  01a0f2c  cmpwi 3, 4
  01a0f30  stb 4, 32(31)
  01a0f34  bt 2, 0x1a1dec
  01a0f38  lis 3, 26
  01a0f3c  lis 4, 114
  01a0f40  addi 3, 3, 612
  01a0f44  li 5, 0
  01a0f48  lfs 1, 40(3)
  01a0f4c  lfs 2, -3056(4)
  01a0f50  ori 3, 31, 0
  01a0f54  fmuls 1, 2, 1
  01a0f58  li 4, 4
  01a0f5c  fctiwz 1, 1
  01a0f60  stfd 1, 400(1)
  01a0f64  lwz 6, 404(1)
  01a0f68  extsw 6, 6
  01a0f6c  bl 0xfddc0
  01a0f70  nop
  01a0f74  b 0x1a1dec
  01a0f78  lbz 3, 112(31)
  01a0f7c  rlwinm 3, 3, 0, 30, 30
  01a0f80  cmpwi 3, 0
  01a0f84  bt 2, 0x1a1dec
  01a0f88  li 3, 9
  01a0f8c  lbz 4, 83(31)
  01a0f90  cmpwi 4, 1
  01a0f94  stb 3, 32(31)
  01a0f98  bt 2, 0x1a1dec
  01a0f9c  lis 3, 26
  01a0fa0  lis 4, 114
  01a0fa4  addi 3, 3, 612
  01a0fa8  li 5, 0
  01a0fac  lfs 1, 88(3)
  01a0fb0  lfs 2, -3056(4)
  01a0fb4  ori 3, 31, 0
  01a0fb8  li 4, 1
  01a0fbc  fmuls 1, 2, 1
  01a0fc0  fctiwz 1, 1
  01a0fc4  stfd 1, 400(1)
  01a0fc8  lwz 6, 404(1)
  01a0fcc  extsw 6, 6
  01a0fd0  bl 0xfddc0
  01a0fd4  nop
  01a0fd8  b 0x1a1dec
  01a0fdc  addic 3, 30, 424
  01a0fe0  bl 0x4fff60
  01a0fe4  nop
  01a0fe8  cmpwi 3, 0
  01a0fec  bt 2, 0x1a1dec
  01a0ff0  lis 4, 26
  01a0ff4  li 3, 8
  01a0ff8  addi 4, 4, 612
  01a0ffc  stb 3, 32(31)
  01a1000  lfs 2, 408(30)
  01a1004  lfs 1, 44(4)
  01a1008  lfs 3, 48(4)
  01a100c  fmuls 1, 2, 1
  01a1010  fmuls 2, 2, 3
  01a1014  bl 0xfcbe8
  01a1018  nop
  01a101c  stfs 1, 404(30)
  01a1020  lbz 3, 83(31)
  01a1024  cmpwi 3, 1
  01a1028  bt 2, 0x1a1dec
  01a102c  lis 3, 26
  01a1030  lis 4, 114
  01a1034  addi 3, 3, 612
  01a1038  li 5, 0
  01a103c  lfs 1, 40(3)
  01a1040  lfs 2, -3056(4)
  01a1044  ori 3, 31, 0
  01a1048  li 4, 1
  01a104c  fmuls 1, 2, 1
  01a1050  fctiwz 1, 1
  01a1054  stfd 1, 400(1)
  01a1058  lwz 6, 404(1)
  01a105c  extsw 6, 6
  01a1060  bl 0xfddc0
  01a1064  nop
  01a1068  b 0x1a1dec
  01a106c  lfs 1, 20(31)
  01a1070  lfs 2, 20(29)
  01a1074  lfs 3, 16(31)
  01a1078  fsubs 1, 1, 2
  01a107c  lfs 2, 16(29)
  01a1080  fsubs 2, 3, 2
  01a1084  lis 3, 116
  01a1088  fmuls 1, 1, 1
  01a108c  fmadds 1, 2, 2, 1
  01a1090  lfs 2, 1604(3)
  01a1094  fsqrts 1, 1
  01a1098  fcmpu 0, 2, 1
  01a109c  cror 6, 1, 2
  01a10a0  bt 6, 0x1a10dc
  01a10a4  lis 3, 26
  01a10a8  lis 4, 114
  01a10ac  lfs 1, 420(30)
  01a10b0  addi 5, 3, 612
  01a10b4  lis 6, 114
  01a10b8  addic 3, 30, 244
  01a10bc  lfs 2, -3052(4)
  01a10c0  lfs 3, 76(5)
  01a10c4  lfs 4, -3048(6)
  01a10c8  fmuls 1, 1, 2
  01a10cc  fmuls 2, 4, 3
  01a10d0  bl 0x109af0
  01a10d4  nop
  01a10d8  b 0x1a1104
  01a10dc  lis 3, 26
  01a10e0  lis 5, 114
  01a10e4  addi 4, 3, 612
  01a10e8  addic 3, 30, 244
  01a10ec  lfs 3, 36(4)
  01a10f0  lfs 1, 16(4)
  01a10f4  lfs 4, -3048(5)
  01a10f8  fmuls 2, 4, 3
  01a10fc  bl 0x109af0
  01a1100  nop
  01a1104  lfs 1, 16(29)
  01a1108  lfs 2, 16(31)
  01a110c  lfs 3, 20(29)
  01a1110  lfs 4, 20(31)
  01a1114  fsubs 1, 1, 2
  01a1118  fsubs 2, 3, 4
  01a111c  bl 0x5e8338
  01a1120  nop
  01a1124  lis 3, 26
  01a1128  lis 4, 114
  01a112c  addi 28, 3, 612
  01a1130  addic 5, 30, 400
  01a1134  ori 3, 31, 0
  01a1138  lfs 4, 72(28)
  01a113c  lfs 2, 64(28)
  01a1140  lfs 5, 68(28)
  01a1144  lfs 6, -3052(4)
  01a1148  fmr 3, 5
  01a114c  fmuls 4, 6, 4
  01a1150  bl 0xff2e8
  01a1154  nop
  01a1158  lfs 1, 20(31)
  01a115c  lfs 2, 20(29)
  01a1160  lfs 3, 16(31)
  01a1164  fsubs 1, 1, 2
  01a1168  lfs 2, 16(29)
  01a116c  fsubs 2, 3, 2
  01a1170  lis 3, 116
  01a1174  fmuls 1, 1, 1
  01a1178  fmadds 1, 2, 2, 1
  01a117c  lfs 2, 1604(3)
  01a1180  ori 3, 31, 0
  01a1184  fsqrts 1, 1
  01a1188  fsub 3, 2, 1
  01a118c  fsel 31, 3, 1, 2
  01a1190  bl 0x19f1e8
  01a1194  fmr 30, 1
  01a1198  bl 0x5e8078
  01a119c  nop
  01a11a0  fmr 29, 1
  01a11a4  fmr 1, 30
  01a11a8  bl 0x5e8128
  01a11ac  nop
  01a11b0  lfs 2, 16(29)
  01a11b4  lfs 3, 20(29)
  01a11b8  fmadds 2, 29, 31, 2
  01a11bc  fmadds 3, 1, 31, 3
  01a11c0  lfs 1, 16(31)
  01a11c4  lfs 30, 72(31)
  01a11c8  lfs 4, 20(31)
  01a11cc  fsubs 1, 2, 1
  01a11d0  fsubs 2, 3, 4
  01a11d4  bl 0x5e8338
  01a11d8  nop
  01a11dc  stfs 1, 72(31)
  01a11e0  bl 0x5e8078
  01a11e4  nop
  01a11e8  lfs 31, 80(28)
  01a11ec  lfs 2, 72(31)
  01a11f0  fmuls 3, 1, 31
  01a11f4  fmr 1, 2
  01a11f8  stfs 3, 160(1)
  01a11fc  bl 0x5e8128
  01a1200  nop
  01a1204  fmuls 1, 1, 31
  01a1208  li 5, 0
  01a120c  addic 4, 30, 208
  01a1210  ori 3, 31, 0
  01a1214  addic 6, 1, 176
  01a1218  stw 5, 168(1)
  01a121c  addic 5, 1, 160
  01a1220  stfs 1, 164(1)
  01a1224  lfs 31, 20(28)
  01a1228  fmr 1, 31
  01a122c  bl 0x101058
  01a1230  nop
  01a1234  stfs 30, 72(31)
  01a1238  addic 5, 31, 16
  01a123c  lwz 3, 432(30)
  01a1240  lfs 1, 84(28)
  01a1244  ori 6, 5, 0
  01a1248  extsw 3, 3
  01a124c  bl 0x1145d8
  01a1250  nop
  01a1254  lfs 2, 20(31)
  01a1258  lfs 1, 372(30)
  01a125c  lfs 3, 16(31)
  01a1260  fsubs 4, 2, 1
  01a1264  lfs 1, 368(30)
  01a1268  fsubs 5, 3, 1
  01a126c  lfs 1, 24(31)
  01a1270  lfs 6, 376(30)
  01a1274  fsubs 6, 1, 6
  01a1278  fmuls 4, 4, 4
  01a127c  lis 3, 116
  01a1280  fmadds 4, 5, 5, 4
  01a1284  lfs 5, 1608(3)
  01a1288  fmadds 4, 6, 6, 4
  01a128c  fsqrts 4, 4
  01a1290  fcmpu 0, 4, 5
  01a1294  bt 1, 0x1a12a4
  01a1298  lwz 3, 356(30)
  01a129c  cmpwi 3, 2
  01a12a0  bf 2, 0x1a12b0
  01a12a4  li 3, 12
  01a12a8  stb 3, 32(31)
  01a12ac  b 0x1a1dec
  01a12b0  lfs 4, 20(29)
  01a12b4  lfs 5, 16(29)
  01a12b8  fsubs 2, 2, 4
  01a12bc  fsubs 3, 3, 5
  01a12c0  lis 3, 116
  01a12c4  fmuls 2, 2, 2
  01a12c8  fmadds 2, 3, 3, 2
  01a12cc  lfs 3, 1604(3)
  01a12d0  fsqrts 2, 2
  01a12d4  fcmpu 0, 2, 3
  01a12d8  cror 6, 1, 2
  01a12dc  bt 6, 0x1a1dec
  01a12e0  lfs 2, 24(29)
  01a12e4  fsubs 1, 2, 1
  01a12e8  fabs 1, 1
  01a12ec  fcmpu 0, 1, 31
  01a12f0  cror 6, 1, 2
  01a12f4  bt 6, 0x1a1dec
  01a12f8  lis 3, 26
  01a12fc  lis 4, 114
  01a1300  addi 3, 3, 612
  01a1304  lfs 1, 40(3)
  01a1308  lfs 2, -3056(4)
  01a130c  lis 3, 151
  01a1310  fmuls 2, 2, 1
  01a1314  addic 3, 3, -25376
  01a1318  lwz 3, 448(3)
  01a131c  fctiwz 2, 2
  01a1320  stfd 2, 400(1)
  01a1324  lwz 4, 404(1)
  01a1328  cmpw 3, 4
  01a132c  bf 0, 0x1a1dec
  01a1330  li 3, 11
  01a1334  lbz 4, 83(31)
  01a1338  cmpwi 4, 4
  01a133c  stb 3, 32(31)
  01a1340  bt 2, 0x1a1dec
  01a1344  lis 3, 114
  01a1348  li 4, 4
  01a134c  li 5, 0
  01a1350  lfs 2, -3056(3)
  01a1354  ori 3, 31, 0
  01a1358  fmuls 1, 2, 1
  01a135c  fctiwz 1, 1
  01a1360  stfd 1, 400(1)
  01a1364  lwz 6, 404(1)
  01a1368  extsw 6, 6
  01a136c  bl 0xfddc0
  01a1370  nop
  01a1374  b 0x1a1dec
  01a1378  lfs 1, 16(29)
  01a137c  lfs 2, 16(31)
  01a1380  lfs 3, 20(29)
  01a1384  lfs 4, 20(31)
  01a1388  fsubs 1, 1, 2
  01a138c  fsubs 2, 3, 4
  01a1390  bl 0x5e8338
  01a1394  nop
  01a1398  lis 3, 26
  01a139c  lis 4, 114
  01a13a0  addi 29, 3, 612
  01a13a4  ori 3, 31, 0
  01a13a8  addic 5, 30, 400
  01a13ac  lfs 4, 72(29)
  01a13b0  lfs 2, 64(29)
  01a13b4  lfs 5, 68(29)
  01a13b8  lfs 6, -3052(4)
  01a13bc  fmr 3, 5
  01a13c0  fmuls 4, 6, 4
  01a13c4  bl 0xff2e8
  01a13c8  nop
  01a13cc  ori 3, 31, 0
  01a13d0  bl 0xefe40
  01a13d4  nop
  01a13d8  lfs 2, 20(29)
  01a13dc  fcmpu 0, 1, 2
  01a13e0  cror 6, 0, 2
  01a13e4  bt 6, 0x1a14a8
  01a13e8  ori 3, 31, 0
  01a13ec  bl 0xefe40
  01a13f0  nop
  01a13f4  lis 3, 26
  01a13f8  addi 3, 3, 612
  01a13fc  lfs 2, 92(3)
  01a1400  fcmpu 0, 1, 2
  01a1404  cror 6, 1, 2
  01a1408  bt 6, 0x1a14a8
  01a140c  lfs 1, 72(31)
  01a1410  bl 0x5e8078
  01a1414  nop
  01a1418  lfs 1, 72(31)
  01a141c  bl 0x5e8128
  01a1420  nop
  01a1424  addic 30, 1, 192
  01a1428  ori 3, 31, 0
  01a142c  li 4, 0
  01a1430  ori 5, 30, 0
  01a1434  bl 0xf1114
  01a1438  nop
  01a143c  li 3, 1
  01a1440  stw 31, 320(1)
  01a1444  lis 4, 16256
  01a1448  lfs 1, 72(31)
  01a144c  stw 3, 324(1)
  01a1450  stw 3, 336(1)
  01a1454  stw 4, 332(1)
  01a1458  bl 0x5e8078
  01a145c  nop
  01a1460  lfs 2, 72(31)
  01a1464  stfs 1, 304(1)
  01a1468  fmr 1, 2
  01a146c  bl 0x5e8128
  01a1470  nop
  01a1474  lis 3, 26
  01a1478  stfs 1, 308(1)
  01a147c  li 4, 0
  01a1480  addi 8, 3, 612
  01a1484  ori 6, 31, 0
  01a1488  addic 7, 1, 304
  01a148c  stw 4, 312(1)
  01a1490  ori 3, 30, 0
  01a1494  li 5, 0
  01a1498  lfs 1, 84(8)
  01a149c  bl 0x5e598
  01a14a0  nop
  01a14a4  b 0x1a1dec
  01a14a8  lbz 3, 112(31)
  01a14ac  rlwinm 3, 3, 0, 30, 30
  01a14b0  cmpwi 3, 0
  01a14b4  bt 2, 0x1a1dec
  01a14b8  li 3, 8
  01a14bc  lbz 4, 83(31)
  01a14c0  cmpwi 4, 1
  01a14c4  stb 3, 32(31)
  01a14c8  bt 2, 0x1a1dec
  01a14cc  lis 3, 26
  01a14d0  lis 4, 114
  01a14d4  addi 3, 3, 612
  01a14d8  li 5, 0
  01a14dc  lfs 1, 88(3)
  01a14e0  lfs 2, -3056(4)
  01a14e4  ori 3, 31, 0
  01a14e8  fmuls 1, 2, 1
  01a14ec  li 4, 1
  01a14f0  fctiwz 1, 1
  01a14f4  stfd 1, 400(1)
  01a14f8  lwz 6, 404(1)
  01a14fc  extsw 6, 6
  01a1500  bl 0xfddc0
  01a1504  nop
  01a1508  b 0x1a1dec
  01a150c  lis 3, 26
  01a1510  lfs 1, 420(30)
  01a1514  lis 27, 114
  01a1518  addi 28, 3, 612
  01a151c  lis 4, 114
  01a1520  addic 3, 30, 244
  01a1524  lfs 2, 96(28)
  01a1528  lfs 3, 36(28)
  01a152c  fmuls 1, 1, 2
  01a1530  lfs 4, -3052(27)
  01a1534  lfs 5, -3048(4)
  01a1538  fmuls 2, 5, 3
  01a153c  fmuls 1, 1, 4
  01a1540  bl 0x109af0
  01a1544  nop
  01a1548  lfs 1, 16(29)
  01a154c  lfs 2, 16(31)
  01a1550  lfs 3, 20(29)
  01a1554  lfs 4, 20(31)
  01a1558  fsubs 1, 1, 2
  01a155c  fsubs 2, 3, 4
  01a1560  bl 0x5e8338
  01a1564  nop
  01a1568  lfs 4, 72(28)
  01a156c  lfs 2, 64(28)
  01a1570  addic 5, 30, 400
  01a1574  lfs 5, 68(28)
  01a1578  ori 3, 31, 0
  01a157c  lfs 6, -3052(27)
  01a1580  fmr 3, 5
  01a1584  fmuls 4, 6, 4
  01a1588  bl 0xff2e8
  01a158c  nop
  01a1590  lfs 1, 16(29)
  01a1594  lfs 2, 16(31)
  01a1598  lfs 31, 72(31)
  01a159c  fsubs 1, 1, 2
  01a15a0  lfs 3, 20(29)
  01a15a4  lfs 4, 20(31)
  01a15a8  fsubs 2, 3, 4
  01a15ac  bl 0x5e8338
  01a15b0  nop
  01a15b4  lfs 2, 100(28)
  01a15b8  bl 0x502578
  01a15bc  nop
  01a15c0  stfs 1, 72(31)
  01a15c4  bl 0x5e8078
  01a15c8  nop
  01a15cc  lfs 30, 80(28)
  01a15d0  lfs 2, 72(31)
  01a15d4  fmuls 3, 1, 30
  01a15d8  fmr 1, 2
  01a15dc  stfs 3, 208(1)
  01a15e0  bl 0x5e8128
  01a15e4  nop
  01a15e8  fmuls 1, 1, 30
  01a15ec  li 5, 0
  01a15f0  addic 4, 30, 208
  01a15f4  ori 3, 31, 0
  01a15f8  addic 6, 1, 224
  01a15fc  stw 5, 216(1)
  01a1600  addic 5, 1, 208
  01a1604  stfs 1, 212(1)
  01a1608  lfs 1, 20(28)
  01a160c  bl 0x101058
  01a1610  nop
  01a1614  stfs 31, 72(31)
  01a1618  addic 5, 31, 16
  01a161c  lwz 3, 432(30)
  01a1620  lfs 1, 84(28)
  01a1624  extsw 3, 3
  01a1628  ori 6, 5, 0
  01a162c  bl 0x1145d8
  01a1630  nop
  01a1634  addic 3, 30, 424
  01a1638  bl 0x4fff60
  01a163c  nop
  01a1640  cmpwi 3, 0
  01a1644  bf 2, 0x1a1690
  01a1648  lfs 1, 20(31)
  01a164c  lfs 2, 20(29)
  01a1650  lfs 3, 16(31)
  01a1654  fsubs 1, 1, 2
  01a1658  lfs 2, 16(29)
  01a165c  fsubs 2, 3, 2
  01a1660  lfs 3, 24(31)
  01a1664  lfs 4, 24(29)
  01a1668  fsubs 3, 3, 4
  01a166c  fmuls 1, 1, 1
  01a1670  lis 3, 116
  01a1674  fmadds 1, 2, 2, 1
  01a1678  lfs 2, 1620(3)
  01a167c  fmadds 1, 3, 3, 1
  01a1680  fsqrts 1, 1
  01a1684  fcmpu 0, 1, 2
  01a1688  cror 6, 0, 2
  01a168c  bt 6, 0x1a1dec
  01a1690  li 3, 11
  01a1694  lis 4, 26
  01a1698  addi 4, 4, 612
  01a169c  stb 3, 32(31)
  01a16a0  lis 3, 114
  01a16a4  lfs 1, 104(4)
  01a16a8  lfs 2, -3052(3)
  01a16ac  lis 3, 116
  01a16b0  fmuls 1, 2, 1
  01a16b4  stfs 1, 244(30)
  01a16b8  lwz 3, 1628(3)
  01a16bc  cmpwi 3, 0
  01a16c0  bt 2, 0x1a1718
  01a16c4  lbz 3, 83(31)
  01a16c8  cmpwi 3, 4
  01a16cc  bt 2, 0x1a1dec
  01a16d0  lis 3, 26
  01a16d4  lis 4, 114
  01a16d8  addi 3, 3, 612
  01a16dc  lis 5, 230
  01a16e0  lfs 1, 56(3)
  01a16e4  lfs 2, -3056(4)
  01a16e8  ori 3, 31, 0
  01a16ec  lwz 5, 8128(5)
  01a16f0  li 4, 4
  01a16f4  fmuls 1, 2, 1
  01a16f8  extsw 5, 5
  01a16fc  fctiwz 1, 1
  01a1700  stfd 1, 400(1)
  01a1704  lwz 6, 404(1)
  01a1708  extsw 6, 6
  01a170c  bl 0xfddc0
  01a1710  nop
  01a1714  b 0x1a1dec
  01a1718  lbz 3, 83(31)
  01a171c  cmpwi 3, 4
  01a1720  bt 2, 0x1a1dec
  01a1724  lis 3, 26
  01a1728  lis 4, 114
  01a172c  addi 3, 3, 612
  01a1730  li 5, 10
  01a1734  lfs 1, 40(3)
  01a1738  lfs 2, -3056(4)
  01a173c  ori 3, 31, 0
  01a1740  fmuls 1, 2, 1
  01a1744  li 4, 4
  01a1748  fctiwz 1, 1
  01a174c  stfd 1, 400(1)
  01a1750  lwz 6, 404(1)
  01a1754  extsw 6, 6
  01a1758  bl 0xfddc0
  01a175c  nop
  01a1760  b 0x1a1dec
  01a1764  lis 3, 26
  01a1768  lfs 1, 420(30)
  01a176c  lis 29, 114
  01a1770  addi 28, 3, 612
  01a1774  lis 4, 114
  01a1778  addic 3, 30, 244
  01a177c  lfs 2, -3052(29)
  01a1780  lfs 3, 76(28)
  01a1784  fmuls 1, 1, 2
  01a1788  lfs 4, -3048(4)
  01a178c  fmr 2, 3
  01a1790  fmuls 2, 4, 2
  01a1794  bl 0x109af0
  01a1798  nop
  01a179c  lfs 1, 368(30)
  01a17a0  lfs 2, 16(31)
  01a17a4  lfs 3, 372(30)
  01a17a8  lfs 4, 20(31)
  01a17ac  fsubs 1, 1, 2
  01a17b0  fsubs 2, 3, 4
  01a17b4  bl 0x5e8338
  01a17b8  nop
  01a17bc  lfs 4, 72(28)
  01a17c0  addic 5, 30, 400
  01a17c4  lfs 2, 64(28)
  01a17c8  ori 3, 31, 0
  01a17cc  lfs 5, 68(28)
  01a17d0  lfs 6, -3052(29)
  01a17d4  fmr 3, 5
  01a17d8  fmuls 4, 6, 4
  01a17dc  bl 0xff2e8
  01a17e0  nop
  01a17e4  lfs 1, 72(31)
  01a17e8  bl 0x5e8078
  01a17ec  nop
  01a17f0  lfs 31, 80(28)
  01a17f4  lfs 2, 72(31)
  01a17f8  fmuls 3, 1, 31
  01a17fc  fmr 1, 2
  01a1800  stfs 3, 240(1)
  01a1804  bl 0x5e8128
  01a1808  nop
  01a180c  fmuls 1, 1, 31
  01a1810  li 4, 0
  01a1814  ori 3, 31, 0
  01a1818  addic 5, 1, 240
  01a181c  addic 6, 1, 256
  01a1820  stw 4, 248(1)
  01a1824  addic 4, 30, 208
  01a1828  stfs 1, 244(1)
  01a182c  lfs 31, 20(28)
  01a1830  fmr 1, 31
  01a1834  bl 0x101058
  01a1838  nop
  01a183c  lwz 3, 432(30)
  01a1840  addic 5, 31, 16
  01a1844  lfs 1, 84(28)
  01a1848  ori 6, 5, 0
  01a184c  extsw 3, 3
  01a1850  bl 0x1145d8
  01a1854  nop
  01a1858  lfs 1, 20(31)
  01a185c  lfs 2, 372(30)
  01a1860  lfs 3, 16(31)
  01a1864  fsubs 1, 1, 2
  01a1868  lfs 2, 368(30)
  01a186c  fsubs 2, 3, 2
  01a1870  lfs 3, 24(31)
  01a1874  lfs 4, 376(30)
  01a1878  fsubs 3, 3, 4
  01a187c  fmuls 1, 1, 1
  01a1880  fmadds 1, 2, 2, 1
  01a1884  fmadds 1, 3, 3, 1
  01a1888  fsqrts 1, 1
  01a188c  fcmpu 0, 1, 31
  01a1890  cror 6, 1, 2
  01a1894  bt 6, 0x1a18ec
  01a1898  li 3, 6
  01a189c  lbz 4, 83(31)
  01a18a0  cmpwi 4, 2
  01a18a4  stb 3, 32(31)
  01a18a8  bt 2, 0x1a1dec
  01a18ac  lis 3, 26
  01a18b0  lis 4, 114
  01a18b4  addi 3, 3, 612
  01a18b8  li 5, 0
  01a18bc  lfs 1, 88(3)
  01a18c0  lfs 2, -3056(4)
  01a18c4  ori 3, 31, 0
  01a18c8  fmuls 1, 2, 1
  01a18cc  li 4, 2
  01a18d0  fctiwz 1, 1
  01a18d4  stfd 1, 400(1)
  01a18d8  lwz 6, 404(1)
  01a18dc  extsw 6, 6
  01a18e0  bl 0xfddc0
  01a18e4  nop
  01a18e8  b 0x1a1dec
  01a18ec  lwz 3, 356(30)
  01a18f0  cmpwi 3, 2
  01a18f4  bt 2, 0x1a1dec
  01a18f8  li 3, 8
  01a18fc  lbz 4, 83(31)
  01a1900  cmpwi 4, 1
  01a1904  stb 3, 32(31)
  01a1908  bt 2, 0x1a1dec
  01a190c  lis 3, 26
  01a1910  lis 4, 114
  01a1914  addi 3, 3, 612
  01a1918  li 5, 0
  01a191c  lfs 1, 88(3)
  01a1920  lfs 2, -3056(4)
  01a1924  ori 3, 31, 0
  01a1928  fmuls 1, 2, 1
  01a192c  li 4, 1
  01a1930  fctiwz 1, 1
  01a1934  stfd 1, 400(1)
  01a1938  lwz 6, 404(1)
  01a193c  extsw 6, 6
  01a1940  bl 0xfddc0
  01a1944  nop
  01a1948  b 0x1a1dec
  01a194c  lis 3, 151
  01a1950  lfs 1, 16(31)
  01a1954  lfs 2, 20(31)
  01a1958  addic 29, 31, 72
  01a195c  addic 28, 3, -25376
  01a1960  lfs 3, 128(28)
  01a1964  lfs 4, 132(28)
  01a1968  fsubs 1, 3, 1
  01a196c  fsubs 2, 4, 2
  01a1970  bl 0x5e8338
  01a1974  nop
  01a1978  lis 3, 26
  01a197c  lis 4, 114
  01a1980  addi 27, 3, 612
  01a1984  lis 3, 114
  01a1988  addic 5, 30, 400
  01a198c  lfs 2, 72(27)
  01a1990  lfs 3, -3048(3)
  01a1994  lfs 4, 108(27)
  01a1998  ori 3, 29, 0
  01a199c  fmuls 2, 3, 2
  01a19a0  lfs 5, -3052(4)
  01a19a4  fmuls 4, 5, 4
  01a19a8  fmr 3, 2
  01a19ac  bl 0x10a2e0
  01a19b0  nop
  01a19b4  lfs 1, 20(31)
  01a19b8  lfs 2, 132(28)
  01a19bc  lfs 3, 16(31)
  01a19c0  fsubs 1, 1, 2
  01a19c4  lfs 2, 128(28)
  01a19c8  fsubs 2, 3, 2
  01a19cc  fmuls 1, 1, 1
  01a19d0  fmadds 1, 2, 2, 1
  01a19d4  lfs 2, 112(27)
  01a19d8  fsqrts 1, 1
  01a19dc  fcmpu 0, 1, 2
  01a19e0  cror 6, 1, 2
  01a19e4  bt 6, 0x1a1dec
  01a19e8  li 3, 16
  01a19ec  lbz 4, 83(31)
  01a19f0  cmpwi 4, 4
  01a19f4  stb 3, 32(31)
  01a19f8  bt 2, 0x1a1dec
  01a19fc  lis 3, 26
  01a1a00  lis 4, 114
  01a1a04  addi 3, 3, 612
  01a1a08  li 5, 0
  01a1a0c  lfs 1, 88(3)
  01a1a10  lfs 2, -3056(4)
  01a1a14  ori 3, 31, 0
  01a1a18  fmuls 1, 2, 1
  01a1a1c  li 4, 4
  01a1a20  fctiwz 1, 1
  01a1a24  stfd 1, 400(1)
  01a1a28  lwz 6, 404(1)
  01a1a2c  extsw 6, 6
  01a1a30  bl 0xfddc0
  01a1a34  nop
  01a1a38  b 0x1a1dec
  01a1a3c  lis 3, 151
  01a1a40  lfs 1, 16(31)
  01a1a44  lfs 2, 20(31)
  01a1a48  addic 29, 31, 72
  01a1a4c  addic 3, 3, -25376
  01a1a50  lfs 3, 128(3)
  01a1a54  lfs 4, 132(3)
  01a1a58  fsubs 1, 3, 1
  01a1a5c  fsubs 2, 4, 2
  01a1a60  bl 0x5e8338
  01a1a64  nop
  01a1a68  lis 3, 26
  01a1a6c  lis 4, 114
  01a1a70  addi 28, 3, 612
  01a1a74  lis 3, 114
  01a1a78  addic 5, 30, 400
  01a1a7c  lfs 2, 72(28)
  01a1a80  lfs 3, -3048(3)
  01a1a84  lfs 4, 108(28)
  01a1a88  ori 3, 29, 0
  01a1a8c  fmuls 2, 3, 2
  01a1a90  lfs 5, -3052(4)
  01a1a94  fmuls 4, 5, 4
  01a1a98  fmr 3, 2
  01a1a9c  bl 0x10a2e0
  01a1aa0  nop
  01a1aa4  ori 3, 31, 0
  01a1aa8  bl 0xefe40
  01a1aac  nop
  01a1ab0  lfs 2, 20(28)
  01a1ab4  fcmpu 0, 1, 2
  01a1ab8  cror 6, 0, 2
  01a1abc  bt 6, 0x1a1ba0
  01a1ac0  ori 3, 31, 0
  01a1ac4  bl 0xefe40
  01a1ac8  nop
  01a1acc  lis 3, 26
  01a1ad0  addi 3, 3, 612
  01a1ad4  lfs 2, 92(3)
  01a1ad8  fcmpu 0, 1, 2
  01a1adc  cror 6, 1, 2
  01a1ae0  bt 6, 0x1a1ba0
  01a1ae4  lfs 1, 72(31)
  01a1ae8  bl 0x5e8078
  01a1aec  nop
  01a1af0  lfs 1, 72(31)
  01a1af4  bl 0x5e8128
  01a1af8  nop
  01a1afc  addic 30, 1, 272
  01a1b00  ori 3, 31, 0
  01a1b04  li 4, 0
  01a1b08  ori 5, 30, 0
  01a1b0c  bl 0xf1114
  01a1b10  nop
  01a1b14  li 3, 1
  01a1b18  stw 31, 368(1)
  01a1b1c  lis 4, 16256
  01a1b20  lfs 1, 72(31)
  01a1b24  stw 3, 372(1)
  01a1b28  stw 3, 384(1)
  01a1b2c  stw 4, 380(1)
  01a1b30  bl 0x5e8078
  01a1b34  nop
  01a1b38  lfs 2, 72(31)
  01a1b3c  stfs 1, 352(1)
  01a1b40  fmr 1, 2
  01a1b44  bl 0x5e8128
  01a1b48  nop
  01a1b4c  lis 3, 26
  01a1b50  stfs 1, 356(1)
  01a1b54  li 4, 0
  01a1b58  addi 5, 3, 612
  01a1b5c  addic 29, 1, 352
  01a1b60  ori 3, 30, 0
  01a1b64  stw 4, 360(1)
  01a1b68  ori 6, 31, 0
  01a1b6c  ori 7, 29, 0
  01a1b70  lfs 1, 84(5)
  01a1b74  li 5, 0
  01a1b78  bl 0x5e598
  01a1b7c  nop
  01a1b80  addic 4, 31, 16
  01a1b84  ori 3, 30, 0
  01a1b88  li 5, 0
  01a1b8c  ori 6, 31, 0
  01a1b90  ori 7, 29, 0
  01a1b94  bl 0x57820
  01a1b98  nop
  01a1b9c  b 0x1a1dec
  01a1ba0  lbz 3, 112(31)
  01a1ba4  rlwinm 3, 3, 0, 30, 30
  01a1ba8  cmpwi 3, 0
  01a1bac  bt 2, 0x1a1dec
  01a1bb0  li 3, 15
  01a1bb4  lbz 4, 83(31)
  01a1bb8  cmpwi 4, 2
  01a1bbc  stb 3, 32(31)
  01a1bc0  bt 2, 0x1a1dec
  01a1bc4  lis 3, 26
  01a1bc8  lis 4, 114
  01a1bcc  addi 3, 3, 612
  01a1bd0  li 5, 0
  01a1bd4  lfs 1, 88(3)
  01a1bd8  lfs 2, -3056(4)
  01a1bdc  ori 3, 31, 0
  01a1be0  fmuls 1, 2, 1
  01a1be4  li 4, 2
  01a1be8  fctiwz 1, 1
  01a1bec  stfd 1, 400(1)
  01a1bf0  lwz 6, 404(1)
  01a1bf4  extsw 6, 6
  01a1bf8  bl 0xfddc0
  01a1bfc  nop
  01a1c00  b 0x1a1dec
  01a1c04  addic 4, 30, 112
  01a1c08  ori 3, 31, 0
  01a1c0c  bl 0x10b030
  01a1c10  nop
  01a1c14  li 4, 65
  01a1c18  and 3, 3, 4
  01a1c1c  cmpwi 3, 0
  01a1c20  bt 2, 0x1a1d00
  01a1c24  lwz 5, 432(30)
  01a1c28  lis 3, 165
  01a1c2c  slwi 5, 5, 2
  01a1c30  addic 4, 3, 7136
  01a1c34  extsw 5, 5
  01a1c38  addic 3, 31, 16
  01a1c3c  lwzx 5, 4, 5
  01a1c40  addic 4, 5, 16
  01a1c44  lwz 5, 0(5)
  01a1c48  extsw 5, 5
  01a1c4c  bl 0x104e44
  01a1c50  nop
  01a1c54  cmpwi 3, 0
  01a1c58  bf 2, 0x1a1c6c
  01a1c5c  ori 3, 31, 0
  01a1c60  bl 0xefb38
  01a1c64  nop
  01a1c68  b 0x1a1dec
  01a1c6c  li 3, 13
  01a1c70  lbz 5, 83(31)
  01a1c74  lis 4, 16256
  01a1c78  cmpwi 5, 1
  01a1c7c  stb 3, 32(31)
  01a1c80  stw 4, 88(31)
  01a1c84  bt 2, 0x1a1cc4
  01a1c88  lis 3, 26
  01a1c8c  lis 4, 114
  01a1c90  addi 3, 3, 612
  01a1c94  li 5, 0
  01a1c98  lfs 1, 88(3)
  01a1c9c  lfs 2, -3056(4)
  01a1ca0  ori 3, 31, 0
  01a1ca4  li 4, 1
  01a1ca8  fmuls 1, 2, 1
  01a1cac  fctiwz 1, 1
  01a1cb0  stfd 1, 400(1)
  01a1cb4  lwz 6, 404(1)
  01a1cb8  extsw 6, 6
  01a1cbc  bl 0xfddc0
  01a1cc0  nop
  01a1cc4  lis 3, 26
  01a1cc8  vspltisw 2, -1
  01a1ccc  li 5, 52
  01a1cd0  addi 3, 3, 612
  01a1cd4  lis 4, 114
  01a1cd8  li 6, -3056
  01a1cdc  vslw 2, 2, 2
  01a1ce0  lvlx 3, 5, 3
  01a1ce4  li 3, 424
  01a1ce8  vspltw 3, 3, 0
  01a1cec  lvlx 4, 6, 4
  01a1cf0  vmaddfp 2, 4, 3, 2
  01a1cf4  vctsxs 2, 2, 0
  01a1cf8  vspltw 2, 2, 0
  01a1cfc  stvewx 2, 3, 30
  01a1d00  lis 3, 26
  01a1d04  addic 5, 31, 16
  01a1d08  lwz 4, 432(30)
  01a1d0c  addi 3, 3, 612
  01a1d10  ori 6, 5, 0
  01a1d14  lfs 1, 84(3)
  01a1d18  extsw 3, 4
  01a1d1c  bl 0x1145d8
  01a1d20  nop
  01a1d24  b 0x1a1dec
  01a1d28  ori 3, 31, 0
  01a1d2c  addic 4, 30, 112
  01a1d30  bl 0x10b030
  01a1d34  nop
  01a1d38  rlwinm 3, 3, 0, 25, 25
  01a1d3c  cmpwi 3, 0
  01a1d40  bt 2, 0x1a1dbc
  01a1d44  lfs 1, 16(31)
  01a1d48  lis 4, 26
  01a1d4c  lfs 2, 20(31)
  01a1d50  ori 3, 31, 0
  01a1d54  stfs 1, 288(1)
  01a1d58  addi 5, 4, 612
  01a1d5c  lfs 1, 24(31)
  01a1d60  li 6, -1
  01a1d64  stfs 2, 292(1)
  01a1d68  addic 4, 1, 288
  01a1d6c  lfs 2, 28(31)
  01a1d70  stfs 1, 296(1)
  01a1d74  stfs 2, 300(1)
  01a1d78  lfs 1, 32(5)
  01a1d7c  lfs 2, 8(5)
  01a1d80  bl 0x110040
  01a1d84  nop
  01a1d88  ori 3, 31, 0
  01a1d8c  li 4, 1696
  01a1d90  li 5, 2
  01a1d94  li 6, 1695
  01a1d98  li 7, 1
  01a1d9c  li 8, 5
  01a1da0  li 9, 2
  01a1da4  bl 0x11aa78
  01a1da8  nop
  01a1dac  ori 3, 31, 0
  01a1db0  bl 0xefb38
  01a1db4  nop
  01a1db8  b 0x1a1dec
  01a1dbc  lwz 4, 24(31)
  01a1dc0  lis 3, 16384
  01a1dc4  srawi 5, 4, 31
  01a1dc8  srwi 6, 5, 1
  01a1dcc  xor 4, 6, 4
  01a1dd0  subc 4, 4, 5
  01a1dd4  cmpw 4, 3
  01a1dd8  bf 0, 0x1a1dec
  01a1ddc  ori 3, 31, 0
  01a1de0  bl 0xefb38
  01a1de4  nop
  01a1de8  b 0x1a1dec
  01a1dec  ld 0, 512(1)
  01a1df0  mtlr 0
  01a1df4  lfd 29, 472(1)
  01a1df8  lfd 30, 480(1)
  01a1dfc  lfd 31, 488(1)
  01a1e00  ld 25, 416(1)
  01a1e04  ld 26, 424(1)
  01a1e08  ld 27, 432(1)
  01a1e0c  ld 28, 440(1)
  01a1e10  ld 29, 448(1)
  01a1e14  ld 30, 456(1)
  01a1e18  ld 31, 464(1)
  01a1e1c  addi 1, 1, 496
  01a1e20  blr
