# game/update/moby1178.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1178_001ee008:   # 0x1ee008, 0x38c bytes
  01ee008  stdu 1, -80(1)
  01ee00c  stfd 28, 48(1)
  01ee010  stfd 29, 56(1)
  01ee014  stfd 30, 64(1)
  01ee018  stfd 31, 72(1)
  01ee01c  lis 5, 31
  01ee020  lis 7, 118
  01ee024  addi 5, 5, -8232
  01ee028  sldi 3, 3, 2
  01ee02c  lfs 2, 0(5)
  01ee030  lfs 13, 23976(7)
  01ee034  fadds 3, 1, 2
  01ee038  lfs 12, 4(5)
  01ee03c  lis 7, 165
  01ee040  extsw 3, 3
  01ee044  addic 7, 7, 7136
  01ee048  fdivs 3, 3, 13
  01ee04c  lwzx 7, 7, 3
  01ee050  lwz 3, 0(7)
  01ee054  fmuls 3, 3, 12
  01ee058  fcmpu 0, 3, 12
  01ee05c  cror 6, 0, 2
  01ee060  bt 6, 0x1ee06c
  01ee064  fmr 3, 12
  01ee068  b 0x1ee080
  01ee06c  lfs 4, 8(5)
  01ee070  fcmpu 0, 3, 4
  01ee074  cror 6, 1, 2
  01ee078  bt 6, 0x1ee080
  01ee07c  fmr 3, 4
  01ee080  lfs 11, 12(5)
  01ee084  lfs 10, 16(5)
  01ee088  fadds 3, 3, 11
  01ee08c  lfs 9, 20(5)
  01ee090  fdivs 4, 1, 13
  01ee094  lfs 8, 24(5)
  01ee098  lfs 7, 28(5)
  01ee09c  lfs 6, 32(5)
  01ee0a0  fsubs 5, 10, 3
  01ee0a4  fsubs 0, 9, 3
  01ee0a8  fsub 31, 3, 5
  01ee0ac  fsel 3, 31, 5, 3
  01ee0b0  fsub 5, 0, 3
  01ee0b4  fsel 0, 5, 0, 3
  01ee0b8  lfs 5, 36(5)
  01ee0bc  fmuls 31, 0, 0
  01ee0c0  fmuls 3, 4, 12
  01ee0c4  lfs 4, 40(5)
  01ee0c8  fmuls 29, 31, 0
  01ee0cc  fcmpu 0, 3, 12
  01ee0d0  fmuls 30, 31, 29
  01ee0d4  fmadds 0, 29, 8, 0
  01ee0d8  cror 6, 0, 2
  01ee0dc  fmuls 29, 31, 30
  01ee0e0  fmadds 0, 30, 7, 0
  01ee0e4  fmuls 31, 31, 29
  01ee0e8  fmadds 0, 29, 6, 0
  01ee0ec  fmadds 0, 31, 5, 0
  01ee0f0  fadds 0, 0, 2
  01ee0f4  fmuls 0, 0, 4
  01ee0f8  bt 6, 0x1ee104
  01ee0fc  fmr 3, 12
  01ee100  b 0x1ee118
  01ee104  lfs 31, 8(5)
  01ee108  fcmpu 0, 3, 31
  01ee10c  cror 6, 1, 2
  01ee110  bt 6, 0x1ee118
  01ee114  fmr 3, 31
  01ee118  fadds 3, 3, 11
  01ee11c  fsubs 31, 2, 1
  01ee120  fsubs 30, 10, 3
  01ee124  fdivs 31, 31, 13
  01ee128  fsub 28, 3, 30
  01ee12c  fsubs 29, 9, 3
  01ee130  fsel 3, 28, 30, 3
  01ee134  fsub 30, 29, 3
  01ee138  fsel 3, 30, 29, 3
  01ee13c  fmuls 30, 3, 3
  01ee140  fmuls 29, 30, 3
  01ee144  fmuls 28, 30, 29
  01ee148  fmadds 29, 29, 8, 3
  01ee14c  fmuls 3, 31, 12
  01ee150  fmuls 31, 30, 28
  01ee154  fmadds 29, 28, 7, 29
  01ee158  fcmpu 0, 3, 12
  01ee15c  fmuls 30, 30, 31
  01ee160  fmadds 31, 31, 6, 29
  01ee164  cror 6, 0, 2
  01ee168  fmadds 31, 30, 5, 31
  01ee16c  fadds 31, 31, 2
  01ee170  fmuls 31, 31, 4
  01ee174  bt 6, 0x1ee180
  01ee178  fmr 3, 12
  01ee17c  b 0x1ee194
  01ee180  lfs 30, 8(5)
  01ee184  fcmpu 0, 3, 30
  01ee188  cror 6, 1, 2
  01ee18c  bt 6, 0x1ee194
  01ee190  fmr 3, 30
  01ee194  fadds 3, 3, 11
  01ee198  lfs 30, 44(5)
  01ee19c  fsubs 1, 30, 1
  01ee1a0  fsubs 29, 10, 3
  01ee1a4  fsubs 28, 9, 3
  01ee1a8  fdivs 1, 1, 13
  01ee1ac  fsub 30, 3, 29
  01ee1b0  fsel 3, 30, 29, 3
  01ee1b4  fsub 13, 28, 3
  01ee1b8  fsel 3, 13, 28, 3
  01ee1bc  fmuls 13, 3, 3
  01ee1c0  fmuls 30, 13, 3
  01ee1c4  fmuls 29, 13, 30
  01ee1c8  fmadds 30, 30, 8, 3
  01ee1cc  fmuls 3, 1, 12
  01ee1d0  fmuls 1, 13, 29
  01ee1d4  fmadds 30, 29, 7, 30
  01ee1d8  fcmpu 0, 3, 12
  01ee1dc  fmuls 13, 13, 1
  01ee1e0  fmadds 1, 1, 6, 30
  01ee1e4  cror 6, 0, 2
  01ee1e8  fmadds 1, 13, 5, 1
  01ee1ec  fadds 1, 1, 2
  01ee1f0  fmuls 1, 1, 4
  01ee1f4  bt 6, 0x1ee200
  01ee1f8  fmr 3, 12
  01ee1fc  b 0x1ee214
  01ee200  lfs 12, 8(5)
  01ee204  fcmpu 0, 3, 12
  01ee208  cror 6, 1, 2
  01ee20c  bt 6, 0x1ee214
  01ee210  fmr 3, 12
  01ee214  fadds 3, 3, 11
  01ee218  addc 5, 4, 3
  01ee21c  addic 5, 5, -1
  01ee220  divw 8, 5, 3
  01ee224  fsubs 10, 10, 3
  01ee228  fsubs 9, 9, 3
  01ee22c  mullw 3, 8, 3
  01ee230  fsub 11, 3, 10
  01ee234  subc 3, 5, 3
  01ee238  addic 8, 4, 1
  01ee23c  sldi 3, 3, 4
  01ee240  addc 3, 7, 3
  01ee244  clrldi 3, 3, 32
  01ee248  fsel 3, 11, 10, 3
  01ee24c  sldi 9, 4, 4
  01ee250  addc 9, 7, 9
  01ee254  clrldi 9, 9, 32
  01ee258  fsub 10, 9, 3
  01ee25c  fsel 3, 10, 9, 3
  01ee260  fmuls 9, 3, 3
  01ee264  fmuls 10, 9, 3
  01ee268  fmuls 11, 9, 10
  01ee26c  fmadds 3, 10, 8, 3
  01ee270  fmuls 8, 9, 11
  01ee274  fmadds 3, 11, 7, 3
  01ee278  fmuls 7, 9, 8
  01ee27c  fmadds 3, 8, 6, 3
  01ee280  lfs 6, 16(3)
  01ee284  lwz 5, 0(7)
  01ee288  fmuls 6, 6, 0
  01ee28c  divw 10, 8, 5
  01ee290  fmadds 3, 7, 5, 3
  01ee294  fadds 5, 0, 31
  01ee298  stfs 6, 0(6)
  01ee29c  lfs 7, 20(3)
  01ee2a0  mullw 10, 10, 5
  01ee2a4  fadds 3, 3, 2
  01ee2a8  fadds 5, 5, 1
  01ee2ac  fmuls 7, 7, 0
  01ee2b0  fmuls 3, 3, 4
  01ee2b4  stfs 7, 4(6)
  01ee2b8  lfs 4, 24(3)
  01ee2bc  fmuls 4, 4, 0
  01ee2c0  fadds 5, 5, 3
  01ee2c4  stfs 4, 8(6)
  01ee2c8  fdivs 2, 2, 5
  01ee2cc  lfs 5, 28(3)
  01ee2d0  addic 3, 4, 2
  01ee2d4  subc 4, 8, 10
  01ee2d8  stfs 5, 12(6)
  01ee2dc  lfs 8, 16(9)
  01ee2e0  lfs 9, 20(9)
  01ee2e4  lfs 10, 24(9)
  01ee2e8  sldi 4, 4, 4
  01ee2ec  addc 4, 7, 4
  01ee2f0  clrldi 4, 4, 32
  01ee2f4  divw 8, 3, 5
  01ee2f8  fmadds 6, 8, 31, 6
  01ee2fc  fmadds 7, 9, 31, 7
  01ee300  fmadds 4, 10, 31, 4
  01ee304  mullw 5, 8, 5
  01ee308  stfs 6, 0(6)
  01ee30c  stfs 7, 4(6)
  01ee310  subc 3, 3, 5
  01ee314  stfs 4, 8(6)
  01ee318  lfs 8, 16(4)
  01ee31c  lfs 9, 20(4)
  01ee320  sldi 3, 3, 4
  01ee324  lfs 10, 24(4)
  01ee328  fmadds 6, 8, 1, 6
  01ee32c  fmadds 7, 9, 1, 7
  01ee330  addc 3, 7, 3
  01ee334  fmadds 1, 10, 1, 4
  01ee338  clrldi 3, 3, 32
  01ee33c  stfs 6, 0(6)
  01ee340  stfs 7, 4(6)
  01ee344  stfs 1, 8(6)
  01ee348  lfs 4, 16(3)
  01ee34c  lfs 8, 20(3)
  01ee350  lfs 9, 24(3)
  01ee354  fmadds 4, 4, 3, 6
  01ee358  stfs 5, 12(6)
  01ee35c  fmadds 6, 8, 3, 7
  01ee360  fmadds 1, 9, 3, 1
  01ee364  fmuls 3, 4, 2
  01ee368  fmuls 4, 6, 2
  01ee36c  fmuls 1, 1, 2
  01ee370  stfs 3, 0(6)
  01ee374  stfs 4, 4(6)
  01ee378  stfs 1, 8(6)
  01ee37c  lfd 28, 48(1)
  01ee380  lfd 29, 56(1)
  01ee384  lfd 30, 64(1)
  01ee388  lfd 31, 72(1)
  01ee38c  addi 1, 1, 80
  01ee390  blr

UpdateMoby_1178:   # 0x1ee3a8, 0x2e8 bytes
  01ee3a8  stdu 1, -304(1)
  01ee3ac  mflr 0
  01ee3b0  std 0, 320(1)
  01ee3b4  stfd 24, 240(1)
  01ee3b8  stfd 25, 248(1)
  01ee3bc  stfd 26, 256(1)
  01ee3c0  stfd 27, 264(1)
  01ee3c4  stfd 28, 272(1)
  01ee3c8  stfd 29, 280(1)
  01ee3cc  stfd 30, 288(1)
  01ee3d0  stfd 31, 296(1)
  01ee3d4  lfs 1, 16(3)
  01ee3d8  lfs 2, 20(3)
  01ee3dc  li 5, 1
  01ee3e0  fneg 1, 1
  01ee3e4  lfs 3, 24(3)
  01ee3e8  fneg 2, 2
  01ee3ec  lis 4, 31
  01ee3f0  fneg 3, 3
  01ee3f4  std 29, 216(1)
  01ee3f8  lis 6, 114
  01ee3fc  lwz 29, 120(3)
  01ee400  addi 4, 4, -7272
  01ee404  lfs 4, 28(3)
  01ee408  lfs 5, 64(3)
  01ee40c  stfs 4, 124(1)
  01ee410  lfs 4, 68(3)
  01ee414  stfs 5, 128(1)
  01ee418  lfs 5, 72(3)
  01ee41c  std 30, 224(1)
  01ee420  stfs 4, 132(1)
  01ee424  lis 30, 151
  01ee428  stfs 1, 112(1)
  01ee42c  stfs 2, 116(1)
  01ee430  stfs 3, 120(1)
  01ee434  lfs 1, 76(3)
  01ee438  stfs 5, 136(1)
  01ee43c  stfs 1, 140(1)
  01ee440  stw 5, 92(29)
  01ee444  lis 5, 118
  01ee448  lfs 31, 0(4)
  01ee44c  lis 4, 118
  01ee450  addic 30, 30, -25376
  01ee454  lfs 1, 24000(5)
  01ee458  lis 5, 118
  01ee45c  fmuls 1, 1, 31
  01ee460  lfs 2, 23984(4)
  01ee464  lfs 3, -3048(6)
  01ee468  fmuls 2, 2, 4
  01ee46c  lis 4, 118
  01ee470  lfs 4, 96(29)
  01ee474  lfs 5, 24004(5)
  01ee478  std 31, 232(1)
  01ee47c  fmuls 5, 5, 31
  01ee480  ori 31, 3, 0
  01ee484  lfs 6, 23988(4)
  01ee488  lwz 4, 764(30)
  01ee48c  fmuls 1, 1, 3
  01ee490  fmuls 6, 6, 4
  01ee494  cmpw 4, 3
  01ee498  fmuls 3, 5, 3
  01ee49c  fmadds 2, 1, 2, 4
  01ee4a0  fmadds 2, 3, 6, 2
  01ee4a4  stfs 2, 96(29)
  01ee4a8  bf 2, 0x1ee5fc
  01ee4ac  lhz 3, 782(30)
  01ee4b0  cmpwi 3, 0
  01ee4b4  bf 2, 0x1ee5fc
  01ee4b8  lfs 30, 132(30)
  01ee4bc  lfs 29, 128(30)
  01ee4c0  addic 3, 1, 144
  01ee4c4  lfs 28, 20(31)
  01ee4c8  addic 4, 31, 192
  01ee4cc  lfs 27, 16(31)
  01ee4d0  lfs 26, 136(30)
  01ee4d4  lfs 25, 24(31)
  01ee4d8  lfs 24, 140(30)
  01ee4dc  bl 0x5010c0
  01ee4e0  nop
  01ee4e4  fsubs 1, 30, 28
  01ee4e8  lfs 2, 160(1)
  01ee4ec  fsubs 3, 29, 27
  01ee4f0  lfs 4, 144(1)
  01ee4f4  fsubs 5, 26, 25
  01ee4f8  lfs 6, 176(1)
  01ee4fc  lis 3, 118
  01ee500  lfs 7, 192(1)
  01ee504  lis 4, 118
  01ee508  fmuls 1, 2, 1
  01ee50c  lfs 2, 23996(3)
  01ee510  lis 3, 114
  01ee514  fmuls 8, 2, 31
  01ee518  lfs 9, 23980(4)
  01ee51c  lfs 2, -3048(3)
  01ee520  lis 3, 31
  01ee524  fmadds 1, 4, 3, 1
  01ee528  addi 3, 3, -7272
  01ee52c  fmuls 3, 8, 2
  01ee530  fmadds 4, 6, 5, 1
  01ee534  lfs 1, 96(29)
  01ee538  fmadds 5, 7, 24, 4
  01ee53c  lfs 4, 4(3)
  01ee540  fmuls 5, 9, 5
  01ee544  fmuls 3, 3, 5
  01ee548  fmuls 5, 1, 3
  01ee54c  fcmpu 0, 5, 4
  01ee550  cror 6, 1, 2
  01ee554  bt 6, 0x1ee57c
  01ee558  lfs 5, 68(31)
  01ee55c  fmuls 5, 5, 3
  01ee560  fcmpu 0, 5, 4
  01ee564  cror 6, 1, 2
  01ee568  bt 6, 0x1ee57c
  01ee56c  lis 3, 31
  01ee570  addi 3, 3, -7272
  01ee574  lfs 5, 8(3)
  01ee578  fmuls 3, 3, 5
  01ee57c  fcmpu 0, 3, 4
  01ee580  cror 6, 1, 2
  01ee584  bt 6, 0x1ee59c
  01ee588  lis 3, 118
  01ee58c  lfs 4, 23992(3)
  01ee590  fmuls 4, 4, 31
  01ee594  fnmsubs 2, 4, 2, 3
  01ee598  b 0x1ee5ac
  01ee59c  lis 3, 118
  01ee5a0  lfs 4, 23992(3)
  01ee5a4  fmuls 4, 4, 31
  01ee5a8  fmadds 2, 4, 2, 3
  01ee5ac  fadds 2, 1, 2
  01ee5b0  lis 3, 118
  01ee5b4  stfs 2, 96(29)
  01ee5b8  lfs 1, 68(31)
  01ee5bc  lfs 3, 24008(3)
  01ee5c0  fabs 1, 1
  01ee5c4  fmuls 3, 3, 31
  01ee5c8  fcmpu 0, 1, 3
  01ee5cc  cror 6, 0, 2
  01ee5d0  bt 6, 0x1ee5fc
  01ee5d4  lwz 3, 8332(30)
  01ee5d8  cmpwi 3, 0
  01ee5dc  cmpwi 1, 3, 1
  01ee5e0  bt 2, 0x1ee5e8
  01ee5e4  bf 6, 0x1ee5fc
  01ee5e8  li 3, 6
  01ee5ec  li 4, 1
  01ee5f0  bl 0xb72b0
  01ee5f4  nop
  01ee5f8  lfs 2, 96(29)
  01ee5fc  lfs 1, 68(31)
  01ee600  bl 0x502578
  01ee604  nop
  01ee608  lfs 2, 112(1)
  01ee60c  lfs 3, 16(31)
  01ee610  addic 3, 29, 32
  01ee614  lfs 4, 116(1)
  01ee618  addic 4, 1, 112
  01ee61c  fadds 2, 2, 3
  01ee620  addic 5, 1, 128
  01ee624  lfs 3, 20(31)
  01ee628  addic 6, 31, 64
  01ee62c  lfs 5, 120(1)
  01ee630  fadds 3, 4, 3
  01ee634  lfs 4, 24(31)
  01ee638  stfs 1, 68(31)
  01ee63c  fadds 1, 5, 4
  01ee640  stfs 2, 112(1)
  01ee644  stfs 3, 116(1)
  01ee648  stfs 1, 120(1)
  01ee64c  bl 0x112900
  01ee650  nop
  01ee654  ld 0, 320(1)
  01ee658  mtlr 0
  01ee65c  lfd 24, 240(1)
  01ee660  lfd 25, 248(1)
  01ee664  lfd 26, 256(1)
  01ee668  lfd 27, 264(1)
  01ee66c  lfd 28, 272(1)
  01ee670  lfd 29, 280(1)
  01ee674  lfd 30, 288(1)
  01ee678  lfd 31, 296(1)
  01ee67c  ld 29, 216(1)
  01ee680  ld 30, 224(1)
  01ee684  ld 31, 232(1)
  01ee688  addi 1, 1, 304
  01ee68c  blr
