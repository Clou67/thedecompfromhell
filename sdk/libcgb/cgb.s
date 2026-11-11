# sdk/libcgb/cgb.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

cellCgbRead:   # 0x50f130, 0x174 bytes
  050f130  stw 3, 0(5)
  050f134  lbz 0, 10(3)
  050f138  mr 6, 3
  050f13c  clrldi 11, 3, 32
  050f140  cmplwi 7, 0, 1
  050f144  li 10, -1
  050f148  bf 29, 0x50f154
  050f14c  extsw 3, 10
  050f150  blr
  050f154  addi 9, 3, 32
  050f158  stw 9, 4(5)
  050f15c  lbz 0, 11(11)
  050f160  clrlwi 0, 0, 31
  050f164  cmpwi 7, 0, 0
  050f168  bt 30, 0x50f234
  050f16c  lhz 0, 8(3)
  050f170  lwz 7, 0(5)
  050f174  add 8, 9, 0
  050f178  clrldi 10, 8, 32
  050f17c  addi 9, 8, 4
  050f180  stw 9, 12(5)
  050f184  lhz 0, 2(10)
  050f188  slwi 11, 0, 1
  050f18c  stw 0, 8(5)
  050f190  add 9, 9, 11
  050f194  sub 9, 9, 3
  050f198  addi 9, 9, 15
  050f19c  rlwinm 9, 9, 0, 0, 27
  050f1a0  add 9, 3, 9
  050f1a4  stw 9, 16(5)
  050f1a8  clrldi 9, 7, 32
  050f1ac  lbz 0, 11(9)
  050f1b0  rlwinm 0, 0, 0, 30, 30
  050f1b4  cmpwi 7, 0, 0
  050f1b8  bt 30, 0x50f25c
  050f1bc  cmpwi 7, 8, 0
  050f1c0  bt 30, 0x50f294
  050f1c4  clrldi 9, 8, 32
  050f1c8  lhz 0, 0(9)
  050f1cc  add 3, 0, 8
  050f1d0  clrldi 10, 3, 32
  050f1d4  addi 9, 3, 6
  050f1d8  stw 9, 24(5)
  050f1dc  lhz 8, 2(10)
  050f1e0  lhz 0, 4(10)
  050f1e4  slwi 11, 8, 3
  050f1e8  slwi 0, 0, 1
  050f1ec  add 9, 9, 11
  050f1f0  stw 8, 20(5)
  050f1f4  add 0, 9, 0
  050f1f8  stw 9, 32(5)
  050f1fc  clrldi 9, 7, 32
  050f200  stw 0, 36(5)
  050f204  lbz 0, 11(9)
  050f208  rlwinm 0, 0, 0, 29, 29
  050f20c  cmpwi 7, 0, 0
  050f210  bt 30, 0x50f284
  050f214  clrldi 11, 3, 32
  050f218  li 10, 0
  050f21c  lhz 9, 0(11)
  050f220  add 9, 9, 3
  050f224  extsw 3, 10
  050f228  addi 9, 9, 4
  050f22c  stw 9, 44(5)
  050f230  blr
  050f234  lwz 7, 0(5)
  050f238  li 8, 0
  050f23c  stw 0, 16(5)
  050f240  clrldi 9, 7, 32
  050f244  stw 0, 8(5)
  050f248  stw 0, 12(5)
  050f24c  lbz 0, 11(9)
  050f250  rlwinm 0, 0, 0, 30, 30
  050f254  cmpwi 7, 0, 0
  050f258  bf 30, 0x50f1bc
  050f25c  clrldi 9, 7, 32
  050f260  stw 0, 36(5)
  050f264  stw 0, 20(5)
  050f268  stw 0, 24(5)
  050f26c  stw 0, 32(5)
  050f270  lbz 0, 11(9)
  050f274  li 3, 0
  050f278  rlwinm 0, 0, 0, 29, 29
  050f27c  cmpwi 7, 0, 0
  050f280  bf 30, 0x50f214
  050f284  li 10, 0
  050f288  stw 0, 44(5)
  050f28c  extsw 3, 10
  050f290  blr
  050f294  lhz 9, 8(6)
  050f298  lwz 0, 4(5)
  050f29c  add 3, 9, 0
  050f2a0  b 0x50f1d0

FUN_0050f2a4:   # 0x50f2a4, 0xc bytes
  050f2a4  lwz 9, 0(3)
  050f2a8  lbz 3, 10(9)
  050f2ac  blr

cellCgbGetVertexConfiguration:   # 0x50f2b0, 0x50 bytes
  050f2b0  lwz 9, 0(3)
  050f2b4  li 3, -1
  050f2b8  clrldi 10, 9, 32
  050f2bc  addi 0, 9, 12
  050f2c0  clrldi 11, 0, 32
  050f2c4  lbz 0, 10(10)
  050f2c8  cmpwi 7, 0, 0
  050f2cc  bf 30, 0x50f2f8
  050f2d0  lhz 0, 12(11)
  050f2d4  li 3, 0
  050f2d8  sth 0, 0(4)
  050f2dc  lhz 9, 0(11)
  050f2e0  sth 9, 4(4)
  050f2e4  lhz 0, 8(10)
  050f2e8  srwi 0, 0, 4
  050f2ec  sth 0, 2(4)
  050f2f0  lbz 9, 2(11)
  050f2f4  stb 9, 6(4)
  050f2f8  extsw 3, 3
  050f2fc  blr

cellCgbGetFragmentConfiguration:   # 0x50f300, 0x5c bytes
  050f300  lwz 9, 0(3)
  050f304  li 3, -1
  050f308  addi 0, 9, 12
  050f30c  clrldi 9, 9, 32
  050f310  clrldi 10, 0, 32
  050f314  lbz 0, 10(9)
  050f318  cmpwi 7, 0, 1
  050f31c  bf 30, 0x50f354
  050f320  lhz 0, 4(10)
  050f324  li 3, 0
  050f328  lwz 11, 0(10)
  050f32c  sth 0, 8(4)
  050f330  lhz 9, 6(10)
  050f334  stw 11, 4(4)
  050f338  sth 9, 10(4)
  050f33c  lhz 0, 8(10)
  050f340  lwz 9, 12(10)
  050f344  sth 0, 12(4)
  050f348  stw 9, 16(4)
  050f34c  lbz 0, 16(10)
  050f350  stb 0, 20(4)
  050f354  extsw 3, 3
  050f358  blr

FUN_0050f35c:   # 0x50f35c, 0x28 bytes
  050f35c  lwz 9, 0(3)
  050f360  li 3, -1
  050f364  lbz 0, 10(9)
  050f368  cmpwi 7, 0, 0
  050f36c  bf 30, 0x50f37c
  050f370  lwz 0, 16(9)
  050f374  li 3, 0
  050f378  stw 0, 0(4)
  050f37c  extsw 3, 3
  050f380  blr

FUN_0050f384:   # 0x50f384, 0x28 bytes
  050f384  lwz 9, 0(3)
  050f388  li 3, -1
  050f38c  lbz 0, 10(9)
  050f390  cmpwi 7, 0, 0
  050f394  bf 30, 0x50f3a4
  050f398  lwz 0, 20(9)
  050f39c  li 3, 0
  050f3a0  stw 0, 0(4)
  050f3a4  extsw 3, 3
  050f3a8  blr

FUN_0050f3ac:   # 0x50f3ac, 0xc bytes
  050f3ac  lwz 9, 0(3)
  050f3b0  lhz 3, 8(9)
  050f3b4  blr

FUN_0050f3b8:   # 0x50f3b8, 0x8 bytes
  050f3b8  lwz 3, 4(3)
  050f3bc  blr

FUN_0050f3c0:   # 0x50f3c0, 0x8 bytes
  050f3c0  lwz 3, 8(3)
  050f3c4  blr

cellCgbGetVertexConstantValues:   # 0x50f3c8, 0x54 bytes
  050f3c8  lwz 9, 0(3)
  050f3cc  lbz 0, 10(9)
  050f3d0  cmpwi 7, 0, 0
  050f3d4  bf 30, 0x50f410
  050f3d8  lwz 0, 8(3)
  050f3dc  slwi 11, 4, 1
  050f3e0  slwi 10, 4, 4
  050f3e4  cmplw 7, 0, 4
  050f3e8  bf 29, 0x50f410
  050f3ec  lwz 9, 12(3)
  050f3f0  lwz 0, 16(3)
  050f3f4  add 9, 11, 9
  050f3f8  add 0, 0, 10
  050f3fc  clrldi 9, 9, 32
  050f400  stw 0, 0(6)
  050f404  lhz 11, 0(9)
  050f408  sth 11, 0(5)
  050f40c  blr
  050f410  li 0, -1
  050f414  sth 0, 0(5)
  050f418  blr

FUN_0050f41c:   # 0x50f41c, 0x18 bytes
  050f41c  lwz 0, 24(3)
  050f420  slwi 4, 4, 3
  050f424  add 4, 4, 0
  050f428  clrldi 4, 4, 32
  050f42c  lhz 3, 6(4)
  050f430  blr

FUN_0050f434:   # 0x50f434, 0x8 bytes
  050f434  lwz 3, 20(3)
  050f438  blr

cellCgbMapGetVertexUniformRegister:   # 0x50f43c, 0xc4 bytes
  050f43c  lwz 9, 0(3)
  050f440  lbz 0, 10(9)
  050f444  cmpwi 7, 0, 0
  050f448  bt 30, 0x50f458
  050f44c  li 0, -1
  050f450  sth 0, 0(5)
  050f454  blr
  050f458  lwz 0, 24(3)
  050f45c  slwi 9, 4, 3
  050f460  li 11, 0
  050f464  add 9, 9, 0
  050f468  ori 11, 11, 65535
  050f46c  clrldi 9, 9, 32
  050f470  lhz 0, 6(9)
  050f474  cmpw 7, 0, 11
  050f478  mr 10, 0
  050f47c  sth 0, 0(5)
  050f480  bclr 12, 30
  050f484  cmpwi 7, 6, 0
  050f488  bclr 12, 30
  050f48c  lwz 11, 8(3)
  050f490  cmpwi 7, 11, 0
  050f494  bf 29, 0x50f4e0
  050f498  lwz 8, 12(3)
  050f49c  li 7, 0
  050f4a0  clrldi 9, 8, 32
  050f4a4  lhz 0, 0(9)
  050f4a8  cmpw 7, 0, 10
  050f4ac  bt 30, 0x50f4f0
  050f4b0  clrldi 11, 11, 32
  050f4b4  mtctr 11
  050f4b8  li 11, 0
  050f4bc  b 0x50f4d8
  050f4c0  slwi 9, 11, 1
  050f4c4  add 9, 9, 8
  050f4c8  clrldi 9, 9, 32
  050f4cc  lhz 0, 0(9)
  050f4d0  cmpw 7, 0, 10
  050f4d4  bt 30, 0x50f4ec
  050f4d8  addi 11, 11, 1
  050f4dc  bdnz 0x50f4c0
  050f4e0  li 0, 0
  050f4e4  stw 0, 0(6)
  050f4e8  blr
  050f4ec  slwi 7, 11, 4
  050f4f0  lwz 0, 16(3)
  050f4f4  add 0, 7, 0
  050f4f8  stw 0, 0(6)
  050f4fc  blr

cellCgbMapGetFragmentUniformOffsets:   # 0x50f500, 0x124 bytes
  050f500  lwz 9, 0(3)
  050f504  mr 7, 5
  050f508  lbz 0, 10(9)
  050f50c  cmpwi 7, 0, 1
  050f510  bt 30, 0x50f520
  050f514  li 10, 0
  050f518  stw 10, 0(6)
  050f51c  blr
  050f520  slwi 9, 4, 3
  050f524  lwz 0, 24(3)
  050f528  add 9, 9, 0
  050f52c  clrldi 9, 9, 32
  050f530  lhz 4, 6(9)
  050f534  addi 0, 4, -1024
  050f538  clrlwi 0, 0, 16
  050f53c  cmplwi 7, 0, 64510
  050f540  bt 29, 0x50f514
  050f544  addi 9, 4, -1023
  050f548  lwz 3, 32(3)
  050f54c  cmpwi 7, 5, 0
  050f550  rlwinm 9, 9, 1, 15, 30
  050f554  add 9, 9, 3
  050f558  clrldi 9, 9, 32
  050f55c  lhz 8, 0(9)
  050f560  bt 30, 0x50f594
  050f564  lwz 10, 0(6)
  050f568  cmplw 7, 8, 10
  050f56c  bf 29, 0x50f59c
  050f570  cmpwi 7, 10, 0
  050f574  clrldi 10, 10, 32
  050f578  li 0, -1
  050f57c  mtctr 10
  050f580  bf 29, 0x50f594
  050f584  clrldi 9, 5, 32
  050f588  addi 5, 5, 2
  050f58c  sth 0, 0(9)
  050f590  bdnz 0x50f584
  050f594  stw 8, 0(6)
  050f598  blr
  050f59c  cmpwi 7, 8, 0
  050f5a0  mr 12, 8
  050f5a4  bf 29, 0x50f5d8
  050f5a8  addi 0, 4, -1022
  050f5ac  rlwinm 4, 0, 1, 15, 30
  050f5b0  clrldi 0, 8, 32
  050f5b4  mtctr 0
  050f5b8  add 9, 4, 3
  050f5bc  clrldi 11, 5, 32
  050f5c0  clrldi 9, 9, 32
  050f5c4  addi 5, 5, 2
  050f5c8  addi 4, 4, 2
  050f5cc  lhz 0, 0(9)
  050f5d0  sth 0, 0(11)
  050f5d4  bdnz 0x50f5b8
  050f5d8  cmpw 7, 10, 8
  050f5dc  bf 29, 0x50f594
  050f5e0  addi 0, 12, 1
  050f5e4  sub 9, 10, 12
  050f5e8  cmpw 7, 0, 10
  050f5ec  slwi 11, 8, 1
  050f5f0  clrldi 9, 9, 32
  050f5f4  add 11, 7, 11
  050f5f8  mtctr 9
  050f5fc  li 0, -1
  050f600  bt- 29, 0x50f618
  050f604  clrldi 9, 11, 32
  050f608  addi 11, 11, 2
  050f60c  sth 0, 0(9)
  050f610  bdnz 0x50f604
  050f614  b 0x50f594
  050f618  li 9, 1
  050f61c  mtctr 9
  050f620  b 0x50f604

cellCgbMapGetFragmentUniformRegister:   # 0x50f624, 0x5c bytes
  050f624  lwz 9, 0(3)
  050f628  slwi 4, 4, 3
  050f62c  lbz 0, 10(9)
  050f630  cmpwi 7, 0, 1
  050f634  bt 30, 0x50f644
  050f638  li 0, -1
  050f63c  sth 0, 0(5)
  050f640  blr
  050f644  lwz 9, 24(3)
  050f648  add 9, 4, 9
  050f64c  clrldi 9, 9, 32
  050f650  lhz 11, 6(9)
  050f654  addi 11, 11, -1024
  050f658  clrlwi 11, 11, 16
  050f65c  cmplwi 7, 11, 64510
  050f660  slwi 0, 11, 1
  050f664  bt 29, 0x50f638
  050f668  lwz 9, 32(3)
  050f66c  add 9, 0, 9
  050f670  clrldi 9, 9, 32
  050f674  lhz 0, 0(9)
  050f678  sth 0, 0(5)
  050f67c  blr

cellCgbGetSize:   # 0x50f680, 0x64 bytes
  050f680  mr 11, 3
  050f684  li 3, -1
  050f688  lbz 0, 10(11)
  050f68c  cmplwi 7, 0, 1
  050f690  bf 29, 0x50f69c
  050f694  clrldi 3, 3, 32
  050f698  blr
  050f69c  lbz 10, 11(11)
  050f6a0  mr 8, 11
  050f6a4  lhz 9, 8(11)
  050f6a8  cmpwi 7, 10, 0
  050f6ac  addi 3, 9, 32
  050f6b0  bt 30, 0x50f694
  050f6b4  add 9, 8, 3
  050f6b8  addi 0, 10, -1
  050f6bc  clrldi 9, 9, 32
  050f6c0  and 0, 0, 10
  050f6c4  extsb 11, 0
  050f6c8  mr 10, 0
  050f6cc  cmpwi 7, 11, 0
  050f6d0  lhz 0, 0(9)
  050f6d4  add 3, 3, 0
  050f6d8  bf 30, 0x50f6b4
  050f6dc  clrldi 3, 3, 32
  050f6e0  blr

cellCgbMapGetName:   # 0x50f6e4, 0x258 bytes
  050f6e4  stdu 1, -432(1)
  050f6e8  mflr 0
  050f6ec  slwi 4, 4, 3
  050f6f0  std 0, 448(1)
  050f6f4  li 0, 0
  050f6f8  std 29, 408(1)
  050f6fc  stb 0, 367(1)
  050f700  lwz 11, 24(3)
  050f704  lwz 9, 36(3)
  050f708  add 0, 4, 11
  050f70c  std 31, 424(1)
  050f710  clrldi 29, 0, 32
  050f714  std 28, 400(1)
  050f718  mr 28, 3
  050f71c  std 25, 376(1)
  050f720  std 26, 384(1)
  050f724  lwz 0, 0(29)
  050f728  mr 25, 5
  050f72c  std 27, 392(1)
  050f730  add 9, 9, 0
  050f734  std 30, 416(1)
  050f738  clrldi 31, 9, 32
  050f73c  mr 27, 6
  050f740  mr 3, 31
  050f744  mr 26, 5
  050f748  bl 0x5c8510
  050f74c  nop
  050f750  lbz 9, 0(31)
  050f754  addi 9, 9, -48
  050f758  clrlwi 9, 9, 24
  050f75c  cmplwi 7, 9, 9
  050f760  bt 29, 0x50f8d8
  050f764  sub 9, 1, 3
  050f768  lwz 4, -31256(2)
  050f76c  mr 5, 31
  050f770  addi 30, 9, 365
  050f774  clrldi 31, 30, 32
  050f778  mr 3, 31
  050f77c  bl 0x5cd2a8
  050f780  nop
  050f784  li 9, 1
  050f788  li 0, 0
  050f78c  lhz 11, 4(29)
  050f790  clrlwi 9, 9, 24
  050f794  ori 0, 0, 65535
  050f798  cmpwi 6, 9, 0
  050f79c  cmpw 7, 11, 0
  050f7a0  bt 30, 0x50f858
  050f7a4  bf 26, 0x50f7bc
  050f7a8  addi 30, 30, -1
  050f7ac  li 0, 46
  050f7b0  clrldi 9, 30, 32
  050f7b4  stb 0, 0(9)
  050f7b8  lhz 11, 4(29)
  050f7bc  rlwinm 11, 11, 3, 13, 28
  050f7c0  lwz 0, 24(28)
  050f7c4  lwz 9, 36(28)
  050f7c8  add 0, 11, 0
  050f7cc  clrldi 29, 0, 32
  050f7d0  lwz 0, 0(29)
  050f7d4  add 9, 9, 0
  050f7d8  clrldi 31, 9, 32
  050f7dc  mr 3, 31
  050f7e0  bl 0x5c8510
  050f7e4  nop
  050f7e8  addi 0, 30, -1
  050f7ec  lbz 9, 0(31)
  050f7f0  sub 10, 0, 3
  050f7f4  addi 9, 9, -48
  050f7f8  mr 11, 3
  050f7fc  clrlwi 9, 9, 24
  050f800  clrldi 5, 3, 32
  050f804  cmplwi 7, 9, 9
  050f808  clrldi 8, 0, 32
  050f80c  mr 4, 31
  050f810  clrldi 3, 10, 32
  050f814  bt 29, 0x50f8b4
  050f818  addi 30, 10, -1
  050f81c  li 0, 93
  050f820  clrldi 31, 30, 32
  050f824  stb 0, 0(8)
  050f828  bl 0x5cccec
  050f82c  nop
  050f830  li 0, 91
  050f834  li 9, 1
  050f838  stb 0, 0(31)
  050f83c  li 0, 0
  050f840  lhz 11, 4(29)
  050f844  clrlwi 9, 9, 24
  050f848  ori 0, 0, 65535
  050f84c  cmpwi 6, 9, 0
  050f850  cmpw 7, 11, 0
  050f854  bf 30, 0x50f7a4
  050f858  cmpwi 7, 26, 0
  050f85c  sub 9, 1, 30
  050f860  addi 30, 9, 368
  050f864  bt 30, 0x50f884
  050f868  lwz 0, 0(27)
  050f86c  cmplw 7, 30, 0
  050f870  bf 29, 0x50f8fc
  050f874  cmpwi 7, 0, 0
  050f878  bt 30, 0x50f884
  050f87c  li 0, 0
  050f880  stb 0, 0(25)
  050f884  ld 0, 448(1)
  050f888  stw 30, 0(27)
  050f88c  ld 25, 376(1)
  050f890  mtlr 0
  050f894  ld 26, 384(1)
  050f898  ld 27, 392(1)
  050f89c  ld 28, 400(1)
  050f8a0  ld 29, 408(1)
  050f8a4  ld 30, 416(1)
  050f8a8  ld 31, 424(1)
  050f8ac  addi 1, 1, 432
  050f8b0  blr
  050f8b4  sub 30, 30, 11
  050f8b8  mr 4, 31
  050f8bc  clrldi 31, 30, 32
  050f8c0  clrldi 5, 11, 32
  050f8c4  mr 3, 31
  050f8c8  bl 0x5cccec
  050f8cc  nop
  050f8d0  li 9, 0
  050f8d4  b 0x50f788
  050f8d8  addi 0, 1, 367
  050f8dc  mr 4, 31
  050f8e0  sub 30, 0, 3
  050f8e4  clrldi 31, 30, 32
  050f8e8  mr 3, 31
  050f8ec  bl 0x5cc8d8
  050f8f0  nop
  050f8f4  li 9, 0
  050f8f8  b 0x50f788
  050f8fc  clrldi 3, 26, 32
  050f900  mr 4, 31
  050f904  bl 0x5cc8d8
  050f908  nop
  050f90c  ld 0, 448(1)
  050f910  ld 25, 376(1)
  050f914  stw 30, 0(27)
  050f918  mtlr 0
  050f91c  ld 26, 384(1)
  050f920  ld 27, 392(1)
  050f924  ld 28, 400(1)
  050f928  ld 29, 408(1)
  050f92c  ld 30, 416(1)
  050f930  ld 31, 424(1)
  050f934  addi 1, 1, 432
  050f938  blr

cellCgbMapLookup:   # 0x50f93c, 0x230 bytes
  050f93c  stdu 1, -496(1)
  050f940  mflr 0
  050f944  std 20, 400(1)
  050f948  clrldi 20, 4, 32
  050f94c  std 27, 456(1)
  050f950  std 30, 480(1)
  050f954  mr 27, 3
  050f958  mr 30, 3
  050f95c  mr 3, 20
  050f960  std 26, 448(1)
  050f964  std 31, 488(1)
  050f968  std 19, 392(1)
  050f96c  mr 31, 4
  050f970  std 21, 408(1)
  050f974  std 22, 416(1)
  050f978  std 23, 424(1)
  050f97c  std 24, 432(1)
  050f980  std 25, 440(1)
  050f984  std 28, 464(1)
  050f988  std 29, 472(1)
  050f98c  std 0, 512(1)
  050f990  bl 0x5c8510
  050f994  nop
  050f998  add 26, 31, 3
  050f99c  cmplw 7, 31, 26
  050f9a0  bf 28, 0x50fb58
  050f9a4  clrldi 25, 26, 32
  050f9a8  lbz 0, 0(25)
  050f9ac  extsb 0, 0
  050f9b0  cmpwi 7, 0, 91
  050f9b4  bt 30, 0x50fb58
  050f9b8  cmpwi 7, 0, 46
  050f9bc  bt 30, 0x50fb58
  050f9c0  addi 0, 26, -1
  050f9c4  sub 9, 26, 31
  050f9c8  cmplw 7, 31, 0
  050f9cc  clrldi 9, 9, 32
  050f9d0  mr 11, 26
  050f9d4  mtctr 9
  050f9d8  bf+ 29, 0x50f9fc
  050f9dc  b 0x50fb60
  050f9e0  clrldi 9, 11, 32
  050f9e4  lbz 0, 0(9)
  050f9e8  extsb 0, 0
  050f9ec  cmpwi 7, 0, 91
  050f9f0  cmpwi 6, 0, 46
  050f9f4  bt 30, 0x50fa04
  050f9f8  bt 26, 0x50fa04
  050f9fc  addi 11, 11, -1
  050fa00  bdnz 0x50f9e0
  050fa04  sub 24, 26, 11
  050fa08  mr 26, 11
  050fa0c  lwz 28, 20(27)
  050fa10  cmpwi 7, 28, 0
  050fa14  bf 29, 0x50fb08
  050fa18  addi 0, 1, 120
  050fa1c  clrldi 22, 30, 32
  050fa20  clrldi 23, 0, 32
  050fa24  li 29, 0
  050fa28  clrldi 25, 26, 32
  050fa2c  li 19, 256
  050fa30  addi 21, 1, 112
  050fa34  b 0x50fa44
  050fa38  addi 0, 31, 1
  050fa3c  cmpw 7, 28, 0
  050fa40  bf 29, 0x50fb08
  050fa44  lbz 0, 0(25)
  050fa48  mr 31, 29
  050fa4c  slwi 8, 29, 3
  050fa50  xori 9, 0, 46
  050fa54  cmpwi 7, 0, 91
  050fa58  clrldi 9, 9, 56
  050fa5c  clrldi 30, 29, 32
  050fa60  addi 9, 9, -1
  050fa64  addi 29, 29, 1
  050fa68  li 11, 1
  050fa6c  rldicl 9, 9, 1, 63
  050fa70  li 10, 1
  050fa74  li 0, 1
  050fa78  bt 30, 0x50fa88
  050fa7c  mr 10, 9
  050fa80  mr 11, 9
  050fa84  li 0, 0
  050fa88  lwz 9, 24(27)
  050fa8c  sub 5, 24, 11
  050fa90  lwz 3, 36(27)
  050fa94  add 4, 26, 10
  050fa98  add 9, 8, 9
  050fa9c  sub 5, 5, 0
  050faa0  clrldi 9, 9, 32
  050faa4  clrldi 4, 4, 32
  050faa8  clrldi 5, 5, 32
  050faac  lwz 0, 0(9)
  050fab0  add 3, 3, 0
  050fab4  clrldi 3, 3, 32
  050fab8  bl 0x5ccb28
  050fabc  nop
  050fac0  mr 5, 23
  050fac4  cmpwi 7, 3, 0
  050fac8  clrldi 6, 21, 32
  050facc  mr 4, 30
  050fad0  mr 3, 22
  050fad4  bf 30, 0x50fa38
  050fad8  stw 19, 112(1)
  050fadc  bl 0x50f6e4
  050fae0  mr 3, 23
  050fae4  mr 4, 20
  050fae8  bl 0x5cc784
  050faec  nop
  050faf0  cmpwi 7, 3, 0
  050faf4  bt 30, 0x50fb10
  050faf8  lwz 28, 20(27)
  050fafc  addi 0, 31, 1
  050fb00  cmpw 7, 28, 0
  050fb04  bt 29, 0x50fa44
  050fb08  li 30, -1
  050fb0c  clrldi 30, 30, 32
  050fb10  ld 0, 512(1)
  050fb14  mr 3, 30
  050fb18  ld 19, 392(1)
  050fb1c  ld 20, 400(1)
  050fb20  mtlr 0
  050fb24  ld 21, 408(1)
  050fb28  ld 22, 416(1)
  050fb2c  ld 23, 424(1)
  050fb30  ld 24, 432(1)
  050fb34  ld 25, 440(1)
  050fb38  ld 26, 448(1)
  050fb3c  ld 27, 456(1)
  050fb40  ld 28, 464(1)
  050fb44  ld 29, 472(1)
  050fb48  ld 30, 480(1)
  050fb4c  ld 31, 488(1)
  050fb50  addi 1, 1, 496
  050fb54  blr
  050fb58  li 24, 0
  050fb5c  b 0x50fa0c
  050fb60  li 0, 1
  050fb64  mtctr 0
  050fb68  b 0x50f9fc

FUN_0050fb6c:   # 0x50fb6c, 0x8 bytes
  050fb6c  li 3, 3072
  050fb70  blr

FUN_0050fb74:   # 0x50fb74, 0x3c bytes
  050fb74  stdu 1, -112(1)
  050fb78  mflr 0
  050fb7c  std 0, 128(1)
  050fb80  bl 0x650144
  050fb84  ld 2, 40(1)
  050fb88  cmpwi 7, 3, 0
  050fb8c  li 4, 0
  050fb90  bt 30, 0x50fba0
  050fb94  lwz 3, -31252(2)
  050fb98  bl 0x5cef58
  050fb9c  nop
  050fba0  ld 0, 128(1)
  050fba4  addi 1, 1, 112
  050fba8  mtlr 0
  050fbac  blr

FUN_0050fbb0:   # 0x50fbb0, 0x4c bytes
  050fbb0  cmpwi 7, 3, 0
  050fbb4  mflr 0
  050fbb8  stdu 1, -128(1)
  050fbbc  std 31, 120(1)
  050fbc0  std 0, 144(1)
  050fbc4  mr 31, 3
  050fbc8  li 4, 0
  050fbcc  bf 30, 0x50fbdc
  050fbd0  lwz 3, -31248(2)
  050fbd4  bl 0x5cef58
  050fbd8  nop
  050fbdc  slwi 3, 31, 5
  050fbe0  ld 0, 144(1)
  050fbe4  ld 31, 120(1)
  050fbe8  addi 1, 1, 128
  050fbec  addi 3, 3, 128
  050fbf0  mtlr 0
  050fbf4  rlwinm 3, 3, 0, 0, 26
  050fbf8  blr
