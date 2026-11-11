# game/update/moby1225.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1225_0020e108:   # 0x20e108, 0x808 bytes
  020e108  stdu 1, -912(1)
  020e10c  mflr 0
  020e110  std 0, 928(1)
  020e114  stfd 20, 816(1)
  020e118  stfd 21, 824(1)
  020e11c  stfd 22, 832(1)
  020e120  stfd 23, 840(1)
  020e124  stfd 24, 848(1)
  020e128  stfd 25, 856(1)
  020e12c  stfd 26, 864(1)
  020e130  stfd 27, 872(1)
  020e134  stfd 28, 880(1)
  020e138  stfd 29, 888(1)
  020e13c  stfd 30, 896(1)
  020e140  stfd 31, 904(1)
  020e144  std 30, 800(1)
  020e148  std 31, 808(1)
  020e14c  lis 30, 165
  020e150  std 26, 768(1)
  020e154  lwz 31, 120(3)
  020e158  std 25, 760(1)
  020e15c  addic 26, 1, 112
  020e160  lis 25, 33
  020e164  ori 3, 26, 0
  020e168  addi 25, 25, -7944
  020e16c  lwz 4, 7128(30)
  020e170  lwz 5, 0(31)
  020e174  slwi 5, 5, 7
  020e178  addc 4, 4, 5
  020e17c  addic 4, 4, 112
  020e180  std 29, 792(1)
  020e184  std 28, 784(1)
  020e188  std 27, 776(1)
  020e18c  std 24, 752(1)
  020e190  std 23, 744(1)
  020e194  std 22, 736(1)
  020e198  std 21, 728(1)
  020e19c  std 20, 720(1)
  020e1a0  std 19, 712(1)
  020e1a4  std 18, 704(1)
  020e1a8  std 17, 696(1)
  020e1ac  std 16, 688(1)
  020e1b0  std 15, 680(1)
  020e1b4  clrldi 4, 4, 32
  020e1b8  bl 0x500ca4
  020e1bc  nop
  020e1c0  addic 3, 1, 176
  020e1c4  ori 4, 26, 0
  020e1c8  bl 0x5010c0
  020e1cc  nop
  020e1d0  lwz 3, 0(31)
  020e1d4  lwz 4, 7128(30)
  020e1d8  lis 6, 149
  020e1dc  slwi 5, 3, 7
  020e1e0  slwi 3, 3, 7
  020e1e4  addc 5, 4, 5
  020e1e8  addc 3, 4, 3
  020e1ec  clrldi 5, 5, 32
  020e1f0  addic 4, 6, 5056
  020e1f4  clrldi 3, 3, 32
  020e1f8  lfs 1, 48(5)
  020e1fc  stfs 1, 160(1)
  020e200  lfs 1, 52(5)
  020e204  stfs 1, 164(1)
  020e208  lfs 1, 56(5)
  020e20c  stfs 1, 168(1)
  020e210  lfs 1, 60(5)
  020e214  stfs 1, 172(1)
  020e218  lfs 1, 324(4)
  020e21c  lfs 2, 52(3)
  020e220  lfs 3, 320(4)
  020e224  fsubs 1, 1, 2
  020e228  lfs 2, 48(3)
  020e22c  lfs 4, 192(1)
  020e230  fsubs 2, 3, 2
  020e234  lfs 3, 196(1)
  020e238  lfs 5, 328(4)
  020e23c  lfs 6, 56(3)
  020e240  lfs 7, 200(1)
  020e244  lfs 8, 176(1)
  020e248  fsubs 29, 5, 6
  020e24c  lfs 5, 180(1)
  020e250  lis 3, 118
  020e254  fmuls 4, 4, 1
  020e258  lfs 6, 184(1)
  020e25c  fmuls 3, 3, 1
  020e260  lfs 31, 208(1)
  020e264  fmuls 1, 7, 1
  020e268  lfs 30, 212(1)
  020e26c  lfs 7, 216(1)
  020e270  lwz 3, 27200(3)
  020e274  extsw 3, 3
  020e278  fmadds 4, 8, 2, 4
  020e27c  fmadds 3, 5, 2, 3
  020e280  fmadds 1, 6, 2, 1
  020e284  fmadds 31, 31, 29, 4
  020e288  fmadds 30, 30, 29, 3
  020e28c  fmadds 29, 7, 29, 1
  020e290  bl 0x685c4
  020e294  nop
  020e298  std 3, 648(1)
  020e29c  std 3, 504(1)
  020e2a0  lis 9, 0
  020e2a4  std 3, 360(1)
  020e2a8  li 4, 0
  020e2ac  li 3, 0
  020e2b0  li 5, 1
  020e2b4  li 6, 1
  020e2b8  li 7, 1
  020e2bc  li 8, 0
  020e2c0  ori 9, 9, 65424
  020e2c4  bl 0x502fd4
  020e2c8  nop
  020e2cc  std 3, 656(1)
  020e2d0  li 4, 0
  020e2d4  std 3, 512(1)
  020e2d8  li 5, 0
  020e2dc  std 3, 368(1)
  020e2e0  li 6, 0
  020e2e4  li 3, 0
  020e2e8  li 7, 0
  020e2ec  li 8, 0
  020e2f0  bl 0x502f08
  020e2f4  nop
  020e2f8  std 3, 640(1)
  020e2fc  std 3, 496(1)
  020e300  lis 4, 241
  020e304  std 3, 352(1)
  020e308  lis 5, 118
  020e30c  lis 3, 118
  020e310  lis 6, 241
  020e314  li 7, 128
  020e318  lwz 8, 27208(3)
  020e31c  lwz 3, -29104(4)
  020e320  lwz 4, 27204(5)
  020e324  lwz 5, -29100(6)
  020e328  ori 6, 8, 0
  020e32c  bl 0x502ea8
  020e330  nop
  020e334  std 3, 664(1)
  020e338  lis 21, 118
  020e33c  std 3, 520(1)
  020e340  li 30, 0
  020e344  std 3, 376(1)
  020e348  addic 21, 21, 27224
  020e34c  li 3, 4
  020e350  ori 4, 1, 0
  020e354  mtctr 3
  020e358  addic 5, 21, 4
  020e35c  ori 3, 1, 0
  020e360  lfs 1, 0(5)
  020e364  lwz 6, 20(31)
  020e368  addic 5, 5, 8
  020e36c  stfs 1, 612(3)
  020e370  stfs 1, 468(3)
  020e374  stfs 1, 324(3)
  020e378  stw 6, 592(4)
  020e37c  stw 6, 448(4)
  020e380  addic 3, 3, 8
  020e384  stw 6, 304(4)
  020e388  addic 4, 4, 4
  020e38c  bdnz 0x20e360
  020e390  lfs 25, 0(25)
  020e394  ori 29, 30, 0
  020e398  fmr 23, 25
  020e39c  ori 28, 31, 0
  020e3a0  ori 27, 29, 0
  020e3a4  fmr 22, 23
  020e3a8  fmr 21, 22
  020e3ac  cmpwi 29, 30
  020e3b0  fmr 28, 21
  020e3b4  fmr 27, 22
  020e3b8  fmr 26, 23
  020e3bc  bf 0, 0x20e454
  020e3c0  lfs 1, 32(28)
  020e3c4  lfs 2, 64(28)
  020e3c8  lfs 3, 56(28)
  020e3cc  fsubs 2, 1, 2
  020e3d0  fsubs 23, 3, 29
  020e3d4  lfs 1, 40(28)
  020e3d8  lfs 3, 72(28)
  020e3dc  lfs 4, 48(28)
  020e3e0  fsubs 1, 1, 3
  020e3e4  lfs 3, 52(28)
  020e3e8  fsubs 4, 4, 31
  020e3ec  lfs 5, 36(28)
  020e3f0  lfs 6, 68(28)
  020e3f4  fsubs 3, 3, 30
  020e3f8  fsubs 5, 5, 6
  020e3fc  fmuls 6, 2, 23
  020e400  fmuls 7, 1, 3
  020e404  fmuls 8, 5, 4
  020e408  fmsubs 1, 1, 4, 6
  020e40c  fmsubs 23, 5, 23, 7
  020e410  fmsubs 2, 2, 3, 8
  020e414  fmuls 3, 1, 1
  020e418  fmadds 3, 23, 23, 3
  020e41c  fmadds 3, 2, 2, 3
  020e420  fsqrts 3, 3
  020e424  fcmpu 0, 3, 25
  020e428  bf 2, 0x20e43c
  020e42c  fmr 23, 25
  020e430  fmr 22, 23
  020e434  fmr 21, 22
  020e438  b 0x20e460
  020e43c  lfs 4, 4(25)
  020e440  fdivs 3, 4, 3
  020e444  fmuls 21, 23, 3
  020e448  fmuls 22, 1, 3
  020e44c  fmuls 23, 2, 3
  020e450  b 0x20e460
  020e454  fmr 23, 25
  020e458  fmr 22, 23
  020e45c  fmr 21, 22
  020e460  addic 3, 31, 32
  020e464  addic 4, 31, 48
  020e468  lfs 24, 8(25)
  020e46c  addic 18, 1, 240
  020e470  addc 22, 27, 3
  020e474  addc 20, 27, 4
  020e478  ori 24, 30, 0
  020e47c  ori 23, 1, 0
  020e480  ori 17, 18, 0
  020e484  clrldi 22, 22, 32
  020e488  ori 19, 21, 0
  020e48c  clrldi 20, 20, 32
  020e490  cmpwi 24, 2
  020e494  bf 0, 0x20e500
  020e498  lfs 1, 0(22)
  020e49c  clrlwi 3, 24, 31
  020e4a0  stfs 1, 0(17)
  020e4a4  lfs 2, 4(22)
  020e4a8  cmpwi 3, 0
  020e4ac  stfs 2, 4(17)
  020e4b0  lfs 3, 8(22)
  020e4b4  stfs 3, 8(17)
  020e4b8  lfs 4, 12(22)
  020e4bc  bt 2, 0x20e4e0
  020e4c0  fadds 1, 1, 28
  020e4c4  fadds 2, 2, 27
  020e4c8  stfs 4, 12(17)
  020e4cc  fadds 3, 3, 26
  020e4d0  stfs 1, 0(17)
  020e4d4  stfs 2, 4(17)
  020e4d8  stfs 3, 8(17)
  020e4dc  b 0x20e564
  020e4e0  fsubs 1, 1, 28
  020e4e4  fsubs 2, 2, 27
  020e4e8  stfs 4, 12(17)
  020e4ec  fsubs 3, 3, 26
  020e4f0  stfs 1, 0(17)
  020e4f4  stfs 2, 4(17)
  020e4f8  stfs 3, 8(17)
  020e4fc  b 0x20e564
  020e500  lfs 1, 0(20)
  020e504  clrlwi 3, 24, 31
  020e508  stfs 1, 0(17)
  020e50c  lfs 2, 4(20)
  020e510  cmpwi 3, 0
  020e514  stfs 2, 4(17)
  020e518  lfs 3, 8(20)
  020e51c  stfs 3, 8(17)
  020e520  lfs 4, 12(20)
  020e524  bt 2, 0x20e548
  020e528  fadds 1, 1, 21
  020e52c  fadds 2, 2, 22
  020e530  stfs 4, 12(17)
  020e534  fadds 3, 3, 23
  020e538  stfs 1, 0(17)
  020e53c  stfs 2, 4(17)
  020e540  stfs 3, 8(17)
  020e544  b 0x20e564
  020e548  fsubs 1, 1, 21
  020e54c  fsubs 2, 2, 22
  020e550  stfs 4, 12(17)
  020e554  fsubs 3, 3, 23
  020e558  stfs 1, 0(17)
  020e55c  stfs 2, 4(17)
  020e560  stfs 3, 8(17)
  020e564  srawi 3, 29, 2
  020e568  lfs 20, 0(19)
  020e56c  addze 3, 3
  020e570  sldi 3, 3, 2
  020e574  subc 3, 29, 3
  020e578  extsw 3, 3
  020e57c  bl 0x502730
  020e580  nop
  020e584  fmadds 1, 1, 24, 20
  020e588  addic 24, 24, 1
  020e58c  addic 17, 17, 16
  020e590  cmpwi 24, 4
  020e594  addic 19, 19, 8
  020e598  stfs 1, 320(23)
  020e59c  addic 23, 23, 8
  020e5a0  bt 0, 0x20e490
  020e5a4  lis 22, 161
  020e5a8  ori 4, 26, 0
  020e5ac  addic 22, 22, 24396
  020e5b0  li 5, 0
  020e5b4  addic 3, 1, 240
  020e5b8  li 7, 9
  020e5bc  lwz 6, 28(22)
  020e5c0  bl 0x72280
  020e5c4  nop
  020e5c8  addic 29, 29, 1
  020e5cc  addic 27, 27, 16
  020e5d0  cmpwi 29, 31
  020e5d4  addic 28, 28, 16
  020e5d8  bt 0, 0x20e3ac
  020e5dc  ori 29, 30, 0
  020e5e0  ori 24, 31, 0
  020e5e4  fmr 21, 25
  020e5e8  lbz 3, 24(24)
  020e5ec  cmpwi 1, 3, 0
  020e5f0  cmpwi 3, 31
  020e5f4  crorc 2, 4, 0
  020e5f8  fmr 22, 21
  020e5fc  fmr 23, 22
  020e600  bt 2, 0x20e87c
  020e604  ori 28, 30, 0
  020e608  ori 17, 28, 0
  020e60c  cmpwi 28, 2
  020e610  fmr 28, 23
  020e614  fmr 27, 22
  020e618  fmr 26, 21
  020e61c  bf 0, 0x20e6e8
  020e620  addic 3, 31, 1056
  020e624  addic 5, 31, 1184
  020e628  slwi 4, 29, 4
  020e62c  addc 3, 17, 3
  020e630  addc 5, 17, 5
  020e634  addic 6, 31, 1120
  020e638  addc 3, 3, 4
  020e63c  addc 5, 5, 4
  020e640  clrldi 3, 3, 32
  020e644  addc 6, 17, 6
  020e648  clrldi 5, 5, 32
  020e64c  addc 4, 6, 4
  020e650  clrldi 4, 4, 32
  020e654  lfs 1, 0(3)
  020e658  lfs 2, 0(5)
  020e65c  fsubs 21, 1, 2
  020e660  lfs 1, 8(4)
  020e664  lfs 2, 8(3)
  020e668  fsubs 23, 1, 29
  020e66c  lfs 1, 8(5)
  020e670  lfs 3, 0(4)
  020e674  fsubs 22, 2, 1
  020e678  lfs 1, 4(4)
  020e67c  fsubs 2, 3, 31
  020e680  lfs 3, 4(3)
  020e684  lfs 4, 4(5)
  020e688  fsubs 1, 1, 30
  020e68c  fsubs 3, 3, 4
  020e690  fmuls 4, 21, 23
  020e694  fmuls 5, 22, 1
  020e698  fmuls 6, 3, 2
  020e69c  fmsubs 22, 22, 2, 4
  020e6a0  fmsubs 23, 3, 23, 5
  020e6a4  fmsubs 21, 21, 1, 6
  020e6a8  fmuls 1, 22, 22
  020e6ac  fmadds 1, 23, 23, 1
  020e6b0  fmadds 1, 21, 21, 1
  020e6b4  fsqrts 1, 1
  020e6b8  fcmpu 0, 1, 25
  020e6bc  bf 2, 0x20e6d0
  020e6c0  fmr 21, 25
  020e6c4  fmr 22, 21
  020e6c8  fmr 23, 22
  020e6cc  b 0x20e6f4
  020e6d0  lfs 2, 4(25)
  020e6d4  fdivs 1, 2, 1
  020e6d8  fmuls 23, 23, 1
  020e6dc  fmuls 22, 22, 1
  020e6e0  fmuls 21, 21, 1
  020e6e4  b 0x20e6f4
  020e6e8  fmr 21, 25
  020e6ec  fmr 22, 21
  020e6f0  fmr 23, 22
  020e6f4  cmpwi 28, 0
  020e6f8  bf 2, 0x20e708
  020e6fc  fmr 28, 23
  020e700  fmr 27, 22
  020e704  fmr 26, 21
  020e708  addic 3, 31, 1056
  020e70c  slwi 4, 29, 4
  020e710  addc 3, 17, 3
  020e714  addic 5, 31, 1120
  020e718  addc 20, 3, 4
  020e71c  addc 3, 17, 5
  020e720  ori 27, 30, 0
  020e724  addc 19, 3, 4
  020e728  ori 23, 1, 0
  020e72c  ori 15, 18, 0
  020e730  clrldi 20, 20, 32
  020e734  ori 16, 21, 0
  020e738  clrldi 19, 19, 32
  020e73c  cmpwi 27, 2
  020e740  bf 0, 0x20e7ac
  020e744  lfs 1, 0(20)
  020e748  clrlwi 3, 27, 31
  020e74c  stfs 1, 0(15)
  020e750  cmpwi 3, 0
  020e754  lfs 2, 4(20)
  020e758  stfs 2, 4(15)
  020e75c  lfs 3, 8(20)
  020e760  stfs 3, 8(15)
  020e764  lfs 4, 12(20)
  020e768  bt 2, 0x20e78c
  020e76c  fadds 1, 1, 28
  020e770  stfs 4, 12(15)
  020e774  fadds 2, 2, 27
  020e778  fadds 3, 3, 26
  020e77c  stfs 1, 0(15)
  020e780  stfs 2, 4(15)
  020e784  stfs 3, 8(15)
  020e788  b 0x20e810
  020e78c  fsubs 1, 1, 28
  020e790  stfs 4, 12(15)
  020e794  fsubs 2, 2, 27
  020e798  fsubs 3, 3, 26
  020e79c  stfs 1, 0(15)
  020e7a0  stfs 2, 4(15)
  020e7a4  stfs 3, 8(15)
  020e7a8  b 0x20e810
  020e7ac  lfs 1, 0(19)
  020e7b0  clrlwi 3, 27, 31
  020e7b4  stfs 1, 0(15)
  020e7b8  cmpwi 3, 0
  020e7bc  lfs 2, 4(19)
  020e7c0  stfs 2, 4(15)
  020e7c4  lfs 3, 8(19)
  020e7c8  stfs 3, 8(15)
  020e7cc  lfs 4, 12(19)
  020e7d0  bt 2, 0x20e7f4
  020e7d4  fadds 1, 1, 23
  020e7d8  stfs 4, 12(15)
  020e7dc  fadds 2, 2, 22
  020e7e0  fadds 3, 3, 21
  020e7e4  stfs 1, 0(15)
  020e7e8  stfs 2, 4(15)
  020e7ec  stfs 3, 8(15)
  020e7f0  b 0x20e810
  020e7f4  fsubs 1, 1, 23
  020e7f8  stfs 4, 12(15)
  020e7fc  fsubs 2, 2, 22
  020e800  fsubs 3, 3, 21
  020e804  stfs 1, 0(15)
  020e808  stfs 2, 4(15)
  020e80c  stfs 3, 8(15)
  020e810  srawi 3, 28, 2
  020e814  lfs 20, 0(16)
  020e818  addze 3, 3
  020e81c  sldi 3, 3, 2
  020e820  subc 3, 28, 3
  020e824  extsw 3, 3
  020e828  bl 0x502730
  020e82c  nop
  020e830  fmadds 1, 1, 24, 20
  020e834  addic 27, 27, 1
  020e838  addic 15, 15, 16
  020e83c  cmpwi 27, 4
  020e840  addic 16, 16, 8
  020e844  stfs 1, 320(23)
  020e848  addic 23, 23, 8
  020e84c  bt 0, 0x20e73c
  020e850  addic 3, 1, 240
  020e854  ori 4, 26, 0
  020e858  lwz 6, 28(22)
  020e85c  li 5, 0
  020e860  li 7, 9
  020e864  bl 0x72280
  020e868  nop
  020e86c  addic 28, 28, 1
  020e870  addic 17, 17, 64
  020e874  cmpwi 28, 3
  020e878  bt 0, 0x20e60c
  020e87c  addic 29, 29, 1
  020e880  addic 24, 24, 1
  020e884  cmpwi 29, 4
  020e888  bt 0, 0x20e5e4
  020e88c  ld 0, 928(1)
  020e890  mtlr 0
  020e894  lfd 20, 816(1)
  020e898  lfd 21, 824(1)
  020e89c  lfd 22, 832(1)
  020e8a0  lfd 23, 840(1)
  020e8a4  lfd 24, 848(1)
  020e8a8  lfd 25, 856(1)
  020e8ac  lfd 26, 864(1)
  020e8b0  lfd 27, 872(1)
  020e8b4  lfd 28, 880(1)
  020e8b8  lfd 29, 888(1)
  020e8bc  lfd 30, 896(1)
  020e8c0  lfd 31, 904(1)
  020e8c4  ld 15, 680(1)
  020e8c8  ld 16, 688(1)
  020e8cc  ld 17, 696(1)
  020e8d0  ld 18, 704(1)
  020e8d4  ld 19, 712(1)
  020e8d8  ld 20, 720(1)
  020e8dc  ld 21, 728(1)
  020e8e0  ld 22, 736(1)
  020e8e4  ld 23, 744(1)
  020e8e8  ld 24, 752(1)
  020e8ec  ld 25, 760(1)
  020e8f0  ld 26, 768(1)
  020e8f4  ld 27, 776(1)
  020e8f8  ld 28, 784(1)
  020e8fc  ld 29, 792(1)
  020e900  ld 30, 800(1)
  020e904  ld 31, 808(1)
  020e908  addi 1, 1, 912
  020e90c  blr

M1225_0020e910:   # 0x20e910, 0x14 bytes
  020e910  lis 3, 118
  020e914  lis 4, 1
  020e918  addic 3, 3, 27332
  020e91c  stw 4, 72(3)
  020e920  blr

M1225_0020e950:   # 0x20e950, 0xe0 bytes
  020e950  stdu 1, -128(1)
  020e954  mflr 0
  020e958  std 0, 144(1)
  020e95c  std 31, 120(1)
  020e960  lis 3, 33
  020e964  std 30, 112(1)
  020e968  addi 31, 3, -5848
  020e96c  bl 0x17d488
  020e970  nop
  020e974  lis 4, 119
  020e978  li 3, 3
  020e97c  addic 30, 4, -32128
  020e980  ori 4, 30, 0
  020e984  bl 0x17d4b8
  020e988  nop
  020e98c  lis 3, 161
  020e990  lwz 3, 1808(3)
  020e994  clrlwi 3, 3, 26
  020e998  bl 0x502730
  020e99c  nop
  020e9a0  lfs 2, 0(31)
  020e9a4  lfs 3, 4(31)
  020e9a8  fsubs 1, 1, 2
  020e9ac  lfs 4, 8(31)
  020e9b0  lfs 2, 12(31)
  020e9b4  lfs 5, 16(31)
  020e9b8  fmuls 1, 1, 3
  020e9bc  fsubs 3, 4, 1
  020e9c0  fsubs 2, 2, 1
  020e9c4  fsub 4, 1, 3
  020e9c8  fsel 1, 4, 3, 1
  020e9cc  lfs 3, 20(31)
  020e9d0  fsub 4, 2, 1
  020e9d4  fsel 1, 4, 2, 1
  020e9d8  lfs 2, 24(31)
  020e9dc  lfs 4, 28(31)
  020e9e0  lfs 7, 32(31)
  020e9e4  fmuls 6, 1, 1
  020e9e8  fmuls 8, 6, 1
  020e9ec  fmuls 9, 6, 8
  020e9f0  fmadds 1, 8, 5, 1
  020e9f4  fmuls 5, 6, 9
  020e9f8  fmadds 1, 9, 3, 1
  020e9fc  fmuls 3, 6, 5
  020ea00  fmadds 1, 5, 2, 1
  020ea04  fmadds 1, 3, 4, 1
  020ea08  fmadds 1, 1, 7, 7
  020ea0c  stfs 1, 92(30)
  020ea10  stfs 1, 188(30)
  020ea14  stfs 1, 284(30)
  020ea18  ld 0, 144(1)
  020ea1c  mtlr 0
  020ea20  ld 30, 112(1)
  020ea24  ld 31, 120(1)
  020ea28  addi 1, 1, 128
  020ea2c  blr

UpdateMoby_1225:   # 0x20ea30, 0x3c bytes
  020ea30  stdu 1, -112(1)
  020ea34  mflr 0
  020ea38  std 0, 128(1)
  020ea3c  ori 4, 3, 0
  020ea40  li 5, 255
  020ea44  lis 3, 113
  020ea48  addic 3, 3, -27328
  020ea4c  sth 5, 50(4)
  020ea50  stb 5, 48(4)
  020ea54  bl 0x6d720
  020ea58  nop
  020ea5c  ld 0, 128(1)
  020ea60  mtlr 0
  020ea64  addi 1, 1, 112
  020ea68  blr
