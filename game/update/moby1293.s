# game/update/moby1293.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1320_0023efc4:   # 0x23efc4, 0x14 bytes
  023efc4  lis 3, 121
  023efc8  lis 4, 1
  023efcc  addic 3, 3, -8356
  023efd0  stw 4, 72(3)
  023efd4  blr

UpdateMoby_1293:   # 0x23f010, 0x810 bytes
  023f010  stdu 1, -320(1)
  023f014  mflr 0
  023f018  std 0, 336(1)
  023f01c  stfd 26, 272(1)
  023f020  stfd 27, 280(1)
  023f024  stfd 28, 288(1)
  023f028  stfd 29, 296(1)
  023f02c  stfd 30, 304(1)
  023f030  stfd 31, 312(1)
  023f034  lfs 1, 16(3)
  023f038  lfs 2, 20(3)
  023f03c  lis 4, 36
  023f040  fneg 1, 1
  023f044  lfs 31, 24(3)
  023f048  fneg 2, 2
  023f04c  lfs 4, 28(3)
  023f050  std 30, 256(1)
  023f054  fneg 3, 31
  023f058  addi 4, 4, -4136
  023f05c  std 31, 264(1)
  023f060  lwz 30, 120(3)
  023f064  ori 31, 3, 0
  023f068  lfs 5, 64(3)
  023f06c  stfs 4, 124(1)
  023f070  lfs 4, 68(3)
  023f074  stfs 5, 128(1)
  023f078  lfs 5, 72(3)
  023f07c  stfs 4, 132(1)
  023f080  stfs 1, 112(1)
  023f084  stfs 2, 116(1)
  023f088  lfs 1, 76(3)
  023f08c  stfs 3, 120(1)
  023f090  stfs 5, 136(1)
  023f094  stfs 1, 140(1)
  023f098  lfs 1, 0(4)
  023f09c  lfs 30, 132(30)
  023f0a0  lbz 4, 32(3)
  023f0a4  fsubs 30, 30, 1
  023f0a8  cmpwi 4, 0
  023f0ac  cmpwi 1, 4, -1
  023f0b0  cmpwi 6, 4, 1
  023f0b4  std 29, 248(1)
  023f0b8  std 28, 240(1)
  023f0bc  std 27, 232(1)
  023f0c0  std 26, 224(1)
  023f0c4  std 25, 216(1)
  023f0c8  std 24, 208(1)
  023f0cc  std 23, 200(1)
  023f0d0  cmpwi 7, 4, 2
  023f0d4  bt 1, 0x23f0e0
  023f0d8  bf 5, 0x23f7d4
  023f0dc  b 0x23f0ec
  023f0e0  bf 25, 0x23f218
  023f0e4  bf 29, 0x23f258
  023f0e8  b 0x23f7d4
  023f0ec  li 3, 1
  023f0f0  lfs 1, 64(31)
  023f0f4  li 5, 0
  023f0f8  stfs 1, 96(30)
  023f0fc  lfs 1, 68(31)
  023f100  li 7, 113
  023f104  stw 3, 128(30)
  023f108  li 4, 114
  023f10c  stfs 1, 100(30)
  023f110  li 6, 115
  023f114  lfs 1, 72(31)
  023f118  li 3, 117
  023f11c  li 8, 118
  023f120  stfs 1, 104(30)
  023f124  lfs 1, 76(31)
  023f128  li 9, 119
  023f12c  stb 5, 112(30)
  023f130  stfs 1, 108(30)
  023f134  stbx 5, 30, 7
  023f138  stbx 5, 30, 4
  023f13c  stbx 5, 30, 6
  023f140  li 7, 121
  023f144  stb 5, 116(30)
  023f148  li 4, 122
  023f14c  stbx 5, 30, 3
  023f150  li 6, 125
  023f154  li 3, 123
  023f158  stbx 5, 30, 8
  023f15c  stbx 5, 30, 9
  023f160  li 8, 126
  023f164  stb 5, 120(30)
  023f168  li 9, 127
  023f16c  stbx 5, 30, 7
  023f170  stbx 5, 30, 4
  023f174  stbx 5, 30, 3
  023f178  stb 5, 124(30)
  023f17c  stbx 5, 30, 6
  023f180  stbx 5, 30, 8
  023f184  stbx 5, 30, 9
  023f188  lfs 1, 24(31)
  023f18c  lwz 3, 140(30)
  023f190  stfs 1, 132(30)
  023f194  cmpwi 3, -1
  023f198  bt 2, 0x23f1ec
  023f19c  lis 3, 36
  023f1a0  addi 3, 3, -4136
  023f1a4  lfs 2, 4(3)
  023f1a8  fsubs 1, 1, 2
  023f1ac  stfs 1, 24(31)
  023f1b0  lfs 31, 8(3)
  023f1b4  lfs 30, 12(3)
  023f1b8  fmr 1, 31
  023f1bc  fmr 2, 30
  023f1c0  bl 0xfcbe8
  023f1c4  nop
  023f1c8  stfs 1, 64(31)
  023f1cc  fmr 1, 31
  023f1d0  fmr 2, 30
  023f1d4  bl 0xfcbe8
  023f1d8  nop
  023f1dc  li 3, 1
  023f1e0  stfs 1, 68(31)
  023f1e4  stb 3, 32(31)
  023f1e8  b 0x23f7d4
  023f1ec  lis 3, 101
  023f1f0  lhz 4, 178(31)
  023f1f4  lhz 5, 166(31)
  023f1f8  addic 3, 3, 21424
  023f1fc  extsh 4, 4
  023f200  extsh 5, 5
  023f204  bl 0x5cd098
  023f208  nop
  023f20c  li 3, 2
  023f210  stb 3, 32(31)
  023f214  b 0x23f7d4
  023f218  lis 3, 164
  023f21c  lwz 4, 140(30)
  023f220  lwz 30, -28512(3)
  023f224  slwi 3, 4, 8
  023f228  addc 30, 30, 3
  023f22c  cmpwi 30, 0
  023f230  bt 2, 0x23f24c
  023f234  clrldi 3, 30, 32
  023f238  lbz 3, 32(3)
  023f23c  cmpwi 3, 254
  023f240  cmpwi 1, 3, 253
  023f244  bt 2, 0x23f24c
  023f248  bf 6, 0x23f7d4
  023f24c  li 3, 2
  023f250  stb 3, 32(31)
  023f254  b 0x23f7d4
  023f258  lis 29, 151
  023f25c  addic 29, 29, -25376
  023f260  lhz 3, 782(29)
  023f264  cmpwi 3, 0
  023f268  bf 2, 0x23f2f8
  023f26c  lwz 3, 764(29)
  023f270  cmpw 3, 31
  023f274  bf 2, 0x23f2f8
  023f278  lwz 3, 136(30)
  023f27c  cmpwi 3, 0
  023f280  bf 2, 0x23f29c
  023f284  li 3, 0
  023f288  li 4, 0
  023f28c  ori 5, 31, 0
  023f290  bl 0x15d12c
  023f294  nop
  023f298  lwz 3, 136(30)
  023f29c  lis 4, 36
  023f2a0  vspltisw 3, -1
  023f2a4  lis 5, 114
  023f2a8  addi 4, 4, -4136
  023f2ac  li 6, 16
  023f2b0  li 7, -3056
  023f2b4  vslw 3, 3, 3
  023f2b8  lfs 1, 16(4)
  023f2bc  lfs 2, -3056(5)
  023f2c0  <unknown>
  023f2c4  fmuls 1, 2, 1
  023f2c8  vspltw 2, 2, 0
  023f2cc  <unknown>
  023f2d0  vmaddfp 2, 4, 2, 3
  023f2d4  fctiwz 1, 1
  023f2d8  vctsxs 2, 2, 0
  023f2dc  stfd 1, 176(1)
  023f2e0  lwz 4, 180(1)
  023f2e4  cmpw 3, 4
  023f2e8  bf 0, 0x23f2f8
  023f2ec  vspltw 2, 2, 0
  023f2f0  li 3, 136
  023f2f4  stvewx 2, 3, 30
  023f2f8  lwz 3, 136(30)
  023f2fc  cmpwi 3, 0
  023f300  bt 2, 0x23f4ec
  023f304  fmr 29, 31
  023f308  addic 3, 30, 136
  023f30c  bl 0x4fff60
  023f310  nop
  023f314  lfs 1, 132(29)
  023f318  lfs 2, 20(31)
  023f31c  lfs 3, 128(29)
  023f320  lis 3, 36
  023f324  fsubs 1, 1, 2
  023f328  lis 4, 121
  023f32c  lfs 2, 16(31)
  023f330  addi 3, 3, -4136
  023f334  lis 28, 121
  023f338  fsubs 2, 3, 2
  023f33c  lfs 3, 212(31)
  023f340  lis 27, 121
  023f344  lfs 4, 136(29)
  023f348  lis 26, 114
  023f34c  lfs 31, 24(31)
  023f350  lis 24, 121
  023f354  lfs 5, 196(31)
  023f358  lis 23, 114
  023f35c  lfs 6, 208(31)
  023f360  fsubs 4, 4, 31
  023f364  lfs 7, 96(30)
  023f368  fmuls 3, 1, 3
  023f36c  fmuls 1, 1, 5
  023f370  lis 25, 114
  023f374  lfs 5, 192(31)
  023f378  addic 5, 30, 112
  023f37c  stfs 7, 144(1)
  023f380  li 9, 0
  023f384  lfs 7, 100(30)
  023f388  lfs 8, 216(31)
  023f38c  stfs 7, 148(1)
  023f390  lfs 7, 104(30)
  023f394  lfs 9, 200(31)
  023f398  stfs 7, 152(1)
  023f39c  fmadds 3, 2, 6, 3
  023f3a0  fmadds 1, 2, 5, 1
  023f3a4  lfs 2, 108(30)
  023f3a8  lfs 5, -8248(4)
  023f3ac  stfs 2, 156(1)
  023f3b0  lfs 28, 20(3)
  023f3b4  lfs 2, -8232(28)
  023f3b8  addic 3, 30, 96
  023f3bc  fmuls 2, 2, 28
  023f3c0  fmadds 3, 4, 8, 3
  023f3c4  fmadds 1, 4, 9, 1
  023f3c8  lfs 4, -8224(27)
  023f3cc  fmuls 4, 4, 28
  023f3d0  fmuls 6, 5, 3
  023f3d4  fmuls 27, 5, 1
  023f3d8  lfs 1, -3048(26)
  023f3dc  lfs 3, -8228(24)
  023f3e0  lfs 5, -3060(23)
  023f3e4  lfs 7, -3052(25)
  023f3e8  fmuls 2, 2, 1
  023f3ec  fmuls 3, 3, 5
  023f3f0  fmuls 4, 4, 7
  023f3f4  fneg 1, 6
  023f3f8  bl 0x10a050
  023f3fc  nop
  023f400  lfs 1, -8232(28)
  023f404  lfs 2, -8224(27)
  023f408  addic 3, 30, 100
  023f40c  fmuls 4, 1, 28
  023f410  lfs 5, -3048(26)
  023f414  fmuls 6, 2, 28
  023f418  lfs 3, -8228(24)
  023f41c  lfs 2, -3060(23)
  023f420  addic 5, 30, 116
  023f424  lfs 7, -3052(25)
  023f428  li 9, 0
  023f42c  fmuls 3, 3, 2
  023f430  fmr 1, 27
  023f434  fmuls 2, 4, 5
  023f438  fmuls 4, 6, 7
  023f43c  bl 0x10a050
  023f440  nop
  023f444  lis 3, 121
  023f448  lfs 1, 24(31)
  023f44c  lfs 2, -3052(25)
  023f450  fcmpu 0, 29, 30
  023f454  lfs 3, -8244(3)
  023f458  fnmsubs 1, 3, 2, 1
  023f45c  cror 6, 0, 2
  023f460  stfs 1, 24(31)
  023f464  bt 6, 0x23f484
  023f468  fcmpu 0, 1, 30
  023f46c  bt 1, 0x23f484
  023f470  li 3, 1
  023f474  li 4, 0
  023f478  ori 5, 31, 0
  023f47c  bl 0x15d12c
  023f480  nop
  023f484  addic 3, 29, 128
  023f488  addic 4, 1, 160
  023f48c  addic 5, 31, 16
  023f490  addic 6, 1, 144
  023f494  addic 7, 30, 96
  023f498  bl 0x1120d4
  023f49c  nop
  023f4a0  lfs 1, 160(1)
  023f4a4  lfs 2, 128(29)
  023f4a8  lfs 3, 164(1)
  023f4ac  fsubs 1, 1, 2
  023f4b0  lfs 2, 132(29)
  023f4b4  lfs 4, 168(1)
  023f4b8  fsubs 2, 3, 2
  023f4bc  lfs 3, 136(29)
  023f4c0  fsubs 3, 4, 3
  023f4c4  lfs 4, 172(1)
  023f4c8  stfs 4, 252(29)
  023f4cc  stfs 1, 240(29)
  023f4d0  stfs 2, 244(29)
  023f4d4  stfs 3, 248(29)
  023f4d8  lfs 1, 24(31)
  023f4dc  fsubs 1, 1, 31
  023f4e0  fadds 1, 3, 1
  023f4e4  stfs 1, 248(29)
  023f4e8  b 0x23f708
  023f4ec  lis 3, 121
  023f4f0  lfs 1, 24(31)
  023f4f4  lis 4, 114
  023f4f8  lfs 2, -8240(3)
  023f4fc  lfs 3, -3052(4)
  023f500  lis 3, 36
  023f504  lfs 4, 132(30)
  023f508  fmuls 2, 2, 3
  023f50c  fsubs 3, 4, 1
  023f510  addi 3, 3, -4136
  023f514  fmadds 1, 2, 3, 1
  023f518  stfs 1, 24(31)
  023f51c  lfs 2, 24(3)
  023f520  lfs 3, 132(30)
  023f524  lfs 29, 28(3)
  023f528  fsubs 2, 3, 2
  023f52c  fcmpu 0, 1, 2
  023f530  cror 6, 1, 2
  023f534  bt 6, 0x23f5f8
  023f538  lis 3, 121
  023f53c  lis 29, 114
  023f540  lis 4, 36
  023f544  lis 28, 121
  023f548  addi 4, 4, -4136
  023f54c  lfs 2, -8240(3)
  023f550  lis 27, 114
  023f554  lfs 3, -3052(29)
  023f558  lis 25, 121
  023f55c  lis 26, 114
  023f560  fmadds 1, 2, 3, 1
  023f564  addic 3, 30, 96
  023f568  addic 5, 30, 112
  023f56c  li 9, 0
  023f570  stfs 1, 24(31)
  023f574  lfs 28, 20(4)
  023f578  lfs 2, -8220(28)
  023f57c  lfs 5, -3048(27)
  023f580  fmuls 2, 2, 28
  023f584  lfs 27, 32(4)
  023f588  lfs 26, 12(4)
  023f58c  lfs 3, -8216(25)
  023f590  lfs 1, -3060(26)
  023f594  lfs 4, -3052(29)
  023f598  fmuls 3, 3, 1
  023f59c  fmr 1, 29
  023f5a0  fmuls 4, 4, 26
  023f5a4  fmuls 2, 2, 5
  023f5a8  fmuls 2, 2, 27
  023f5ac  bl 0x10a050
  023f5b0  nop
  023f5b4  lfs 1, -8220(28)
  023f5b8  li 9, 0
  023f5bc  lfs 5, -3048(27)
  023f5c0  addic 3, 30, 100
  023f5c4  fmuls 2, 1, 28
  023f5c8  lfs 3, -8216(25)
  023f5cc  lfs 4, -3060(26)
  023f5d0  addic 5, 30, 116
  023f5d4  lfs 6, -3052(29)
  023f5d8  fmr 1, 29
  023f5dc  fmuls 3, 3, 4
  023f5e0  fmuls 4, 6, 26
  023f5e4  fmuls 2, 2, 5
  023f5e8  fmuls 2, 2, 27
  023f5ec  bl 0x10a050
  023f5f0  nop
  023f5f4  b 0x23f6a4
  023f5f8  lis 3, 36
  023f5fc  lis 29, 121
  023f600  fmr 1, 29
  023f604  addi 3, 3, -4136
  023f608  lis 28, 121
  023f60c  lis 26, 114
  023f610  lis 27, 114
  023f614  lis 24, 121
  023f618  lfs 28, 20(3)
  023f61c  lfs 2, -8220(29)
  023f620  lis 25, 114
  023f624  lfs 3, -8212(28)
  023f628  addic 3, 30, 96
  023f62c  fmuls 2, 2, 28
  023f630  lfs 4, -3048(26)
  023f634  fmuls 6, 3, 28
  023f638  lfs 5, -3060(27)
  023f63c  lfs 3, -8216(24)
  023f640  addic 5, 30, 112
  023f644  lfs 7, -3052(25)
  023f648  li 9, 0
  023f64c  fmuls 3, 3, 5
  023f650  fmuls 2, 2, 4
  023f654  fmuls 4, 6, 7
  023f658  bl 0x10a050
  023f65c  nop
  023f660  lfs 1, -8220(29)
  023f664  lfs 2, -8212(28)
  023f668  addic 3, 30, 100
  023f66c  fmuls 4, 1, 28
  023f670  lfs 5, -3048(26)
  023f674  fmuls 6, 2, 28
  023f678  lfs 3, -8216(24)
  023f67c  lfs 2, -3060(27)
  023f680  addic 5, 30, 116
  023f684  lfs 7, -3052(25)
  023f688  li 9, 0
  023f68c  fmuls 3, 3, 2
  023f690  fmr 1, 29
  023f694  fmuls 2, 4, 5
  023f698  fmuls 4, 6, 7
  023f69c  bl 0x10a050
  023f6a0  nop
  023f6a4  lwz 3, 24(31)
  023f6a8  lwz 4, 132(30)
  023f6ac  srawi 5, 3, 31
  023f6b0  lfs 1, 24(31)
  023f6b4  srawi 6, 4, 31
  023f6b8  lfs 2, 132(30)
  023f6bc  srwi 7, 5, 1
  023f6c0  srwi 8, 6, 1
  023f6c4  xor 3, 7, 3
  023f6c8  xor 4, 8, 4
  023f6cc  subc 3, 3, 5
  023f6d0  subc 4, 4, 6
  023f6d4  cmpw 3, 4
  023f6d8  bf 1, 0x23f6e4
  023f6dc  fmr 1, 2
  023f6e0  stfs 2, 24(31)
  023f6e4  fcmpu 1, 1, 30
  023f6e8  fcmpu 0, 31, 30
  023f6ec  crorc 2, 4, 0
  023f6f0  bt 2, 0x23f708
  023f6f4  li 3, 2
  023f6f8  li 4, 0
  023f6fc  ori 5, 31, 0
  023f700  bl 0x15d12c
  023f704  nop
  023f708  lis 3, 36
  023f70c  lis 28, 114
  023f710  addi 29, 3, -4136
  023f714  addic 4, 30, 152
  023f718  addic 5, 30, 156
  023f71c  ori 3, 31, 0
  023f720  lfs 3, 40(29)
  023f724  lfs 1, 36(29)
  023f728  lfs 4, -3052(28)
  023f72c  fmuls 2, 4, 3
  023f730  bl 0x116a68
  023f734  nop
  023f738  lfs 3, 48(29)
  023f73c  lfs 4, 52(29)
  023f740  addic 4, 30, 144
  023f744  lfs 1, 44(29)
  023f748  addic 5, 30, 148
  023f74c  lfs 5, -3052(28)
  023f750  ori 3, 31, 0
  023f754  fmuls 2, 5, 3
  023f758  fmuls 3, 5, 4
  023f75c  bl 0x116b70
  023f760  nop
  023f764  lfs 1, 96(30)
  023f768  lfs 2, 64(31)
  023f76c  bl 0x502578
  023f770  nop
  023f774  stfs 1, 64(31)
  023f778  lfs 1, 100(30)
  023f77c  lfs 2, 68(31)
  023f780  bl 0x502578
  023f784  nop
  023f788  lfs 2, 112(1)
  023f78c  lfs 3, 16(31)
  023f790  addic 3, 30, 32
  023f794  lfs 4, 116(1)
  023f798  addic 4, 1, 112
  023f79c  fadds 2, 2, 3
  023f7a0  addic 5, 1, 128
  023f7a4  lfs 3, 20(31)
  023f7a8  addic 6, 31, 64
  023f7ac  lfs 5, 120(1)
  023f7b0  fadds 3, 4, 3
  023f7b4  lfs 4, 24(31)
  023f7b8  stfs 1, 68(31)
  023f7bc  fadds 1, 5, 4
  023f7c0  stfs 2, 112(1)
  023f7c4  stfs 3, 116(1)
  023f7c8  stfs 1, 120(1)
  023f7cc  bl 0x112900
  023f7d0  nop
  023f7d4  ld 0, 336(1)
  023f7d8  mtlr 0
  023f7dc  lfd 26, 272(1)
  023f7e0  lfd 27, 280(1)
  023f7e4  lfd 28, 288(1)
  023f7e8  lfd 29, 296(1)
  023f7ec  lfd 30, 304(1)
  023f7f0  lfd 31, 312(1)
  023f7f4  ld 23, 200(1)
  023f7f8  ld 24, 208(1)
  023f7fc  ld 25, 216(1)
  023f800  ld 26, 224(1)
  023f804  ld 27, 232(1)
  023f808  ld 28, 240(1)
  023f80c  ld 29, 248(1)
  023f810  ld 30, 256(1)
  023f814  ld 31, 264(1)
  023f818  addi 1, 1, 320
  023f81c  blr

M1320_0023f820:   # 0x23f820, 0x14 bytes
  023f820  lis 3, 121
  023f824  lis 4, 1
  023f828  addic 3, 3, -8204
  023f82c  stw 4, 72(3)
  023f830  blr

M1320_0023f840:   # 0x23f840, 0x1a0 bytes
  023f840  stdu 1, -240(1)
  023f844  mflr 0
  023f848  std 0, 256(1)
  023f84c  stfd 30, 224(1)
  023f850  stfd 31, 232(1)
  023f854  std 31, 216(1)
  023f858  std 30, 208(1)
  023f85c  lis 31, 121
  023f860  std 28, 192(1)
  023f864  lis 30, 114
  023f868  lis 28, 121
  023f86c  std 27, 184(1)
  023f870  lis 4, 36
  023f874  addic 27, 1, 128
  023f878  std 29, 200(1)
  023f87c  lfs 1, -8052(31)
  023f880  ori 29, 3, 0
  023f884  std 26, 176(1)
  023f888  lfs 2, -3052(30)
  023f88c  addi 26, 4, -1992
  023f890  lfs 3, -8048(28)
  023f894  ori 3, 27, 0
  023f898  fmuls 1, 1, 2
  023f89c  std 25, 168(1)
  023f8a0  fmuls 2, 3, 2
  023f8a4  bl 0xfea60
  023f8a8  nop
  023f8ac  lfs 1, -8052(31)
  023f8b0  addic 31, 1, 144
  023f8b4  lfs 2, -3052(30)
  023f8b8  lfs 3, -8048(28)
  023f8bc  fmuls 1, 1, 2
  023f8c0  ori 3, 31, 0
  023f8c4  fmuls 2, 3, 2
  023f8c8  bl 0xfea60
  023f8cc  nop
  023f8d0  lis 3, 121
  023f8d4  lis 4, 121
  023f8d8  lis 30, 121
  023f8dc  lis 28, 121
  023f8e0  lfs 1, -8044(3)
  023f8e4  lfs 2, -8040(4)
  023f8e8  stfs 1, 140(1)
  023f8ec  stfs 2, 156(1)
  023f8f0  lfs 31, 0(26)
  023f8f4  lfs 30, 4(26)
  023f8f8  lwz 3, -8036(30)
  023f8fc  lwz 4, -8032(28)
  023f900  extsw 26, 3
  023f904  extsw 25, 4
  023f908  fmr 1, 31
  023f90c  fmr 2, 30
  023f910  bl 0xfcbe8
  023f914  nop
  023f918  ori 3, 26, 0
  023f91c  ori 4, 25, 0
  023f920  bl 0x5027bc
  023f924  nop
  023f928  lwz 4, -8036(30)
  023f92c  ori 30, 3, 0
  023f930  fmr 1, 31
  023f934  lwz 3, -8032(28)
  023f938  extsw 28, 4
  023f93c  extsw 26, 3
  023f940  fmr 2, 30
  023f944  bl 0xfcbe8
  023f948  nop
  023f94c  ori 4, 26, 0
  023f950  ori 3, 28, 0
  023f954  bl 0x5027bc
  023f958  nop
  023f95c  lis 4, 121
  023f960  lis 5, 121
  023f964  lis 6, 121
  023f968  lis 10, 121
  023f96c  ori 7, 3, 0
  023f970  lwz 8, -8028(4)
  023f974  lwz 9, -8024(5)
  023f978  addic 3, 29, 16
  023f97c  lwz 6, -8056(6)
  023f980  ori 4, 27, 0
  023f984  lwz 10, -8020(10)
  023f988  extsw 8, 8
  023f98c  extsw 11, 6
  023f990  extsw 9, 9
  023f994  ori 5, 31, 0
  023f998  ori 6, 30, 0
  023f99c  extsw 10, 10
  023f9a0  std 11, 112(1)
  023f9a4  bl 0x1206e8
  023f9a8  nop
  023f9ac  ld 0, 256(1)
  023f9b0  mtlr 0
  023f9b4  lfd 30, 224(1)
  023f9b8  lfd 31, 232(1)
  023f9bc  ld 25, 168(1)
  023f9c0  ld 26, 176(1)
  023f9c4  ld 27, 184(1)
  023f9c8  ld 28, 192(1)
  023f9cc  ld 29, 200(1)
  023f9d0  ld 30, 208(1)
  023f9d4  ld 31, 216(1)
  023f9d8  addi 1, 1, 240
  023f9dc  blr
