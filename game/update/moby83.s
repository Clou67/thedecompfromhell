# game/update/moby83.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_83:   # 0x47e100, 0x660 bytes
  047e100  stdu 1, -336(1)
  047e104  mflr 0
  047e108  std 0, 352(1)
  047e10c  stfd 30, 320(1)
  047e110  stfd 31, 328(1)
  047e114  lis 4, 72
  047e118  lis 5, 114
  047e11c  lwz 6, 36(3)
  047e120  std 31, 312(1)
  047e124  addi 4, 4, -8008
  047e128  ori 31, 3, 0
  047e12c  lfs 1, 0(4)
  047e130  lfs 31, 4(4)
  047e134  lfs 2, 44(3)
  047e138  lfs 3, -3064(5)
  047e13c  lfs 4, 36(6)
  047e140  fmuls 1, 3, 1
  047e144  std 30, 304(1)
  047e148  fmsubs 3, 4, 31, 2
  047e14c  lwz 30, 120(3)
  047e150  lbz 4, 112(3)
  047e154  rlwinm 4, 4, 0, 30, 30
  047e158  cmpwi 4, 0
  047e15c  fmadds 1, 1, 3, 2
  047e160  std 29, 296(1)
  047e164  std 28, 288(1)
  047e168  std 27, 280(1)
  047e16c  std 26, 272(1)
  047e170  stfs 1, 44(3)
  047e174  bt 2, 0x47e1a8
  047e178  lbz 3, 82(31)
  047e17c  cmpwi 3, 2
  047e180  bt 2, 0x47e1a8
  047e184  lbz 3, 83(31)
  047e188  cmpwi 3, 2
  047e18c  bt 2, 0x47e1a8
  047e190  ori 3, 31, 0
  047e194  li 4, 2
  047e198  li 5, 0
  047e19c  li 6, 10
  047e1a0  bl 0xfddc0
  047e1a4  nop
  047e1a8  lis 3, 151
  047e1ac  addic 3, 3, -25376
  047e1b0  lwz 3, 5616(3)
  047e1b4  cmpwi 3, 0
  047e1b8  bt 2, 0x47e2cc
  047e1bc  lfs 2, 20(31)
  047e1c0  lfs 6, 20(3)
  047e1c4  lfs 3, 16(31)
  047e1c8  fsubs 4, 2, 6
  047e1cc  lfs 7, 16(3)
  047e1d0  lfs 1, 24(31)
  047e1d4  fsubs 8, 3, 7
  047e1d8  lfs 5, 24(3)
  047e1dc  fsubs 9, 1, 5
  047e1e0  lis 3, 72
  047e1e4  fmuls 4, 4, 4
  047e1e8  addi 3, 3, -8008
  047e1ec  fmadds 4, 8, 8, 4
  047e1f0  lfs 8, 8(3)
  047e1f4  fmadds 4, 9, 9, 4
  047e1f8  fsqrts 4, 4
  047e1fc  fcmpu 0, 4, 8
  047e200  cror 6, 1, 2
  047e204  bt 6, 0x47e2cc
  047e208  lbz 3, 49(31)
  047e20c  cmpwi 3, 0
  047e210  bt 2, 0x47e2cc
  047e214  fsubs 2, 6, 2
  047e218  fsubs 1, 5, 1
  047e21c  fsubs 3, 7, 3
  047e220  lis 3, 72
  047e224  lis 4, 114
  047e228  addi 3, 3, -8008
  047e22c  fmuls 5, 2, 2
  047e230  lfs 6, 12(3)
  047e234  lfs 7, 16(3)
  047e238  fnmsubs 4, 4, 6, 7
  047e23c  lfs 6, 20(3)
  047e240  lfs 8, -3052(4)
  047e244  fmadds 5, 3, 3, 5
  047e248  fmuls 6, 8, 6
  047e24c  fsub 9, 7, 4
  047e250  lfs 10, 24(3)
  047e254  fmadds 5, 1, 1, 5
  047e258  fsel 4, 9, 4, 7
  047e25c  lfs 11, 96(30)
  047e260  fsqrts 5, 5
  047e264  lfs 12, 100(30)
  047e268  lfs 13, 104(30)
  047e26c  fmuls 4, 6, 4
  047e270  fmr 6, 10
  047e274  fdivs 4, 4, 5
  047e278  fsub 7, 6, 5
  047e27c  fsub 8, 6, 5
  047e280  fsub 9, 6, 5
  047e284  fsub 10, 5, 6
  047e288  fsub 0, 5, 6
  047e28c  fsub 5, 5, 6
  047e290  fmuls 1, 4, 1
  047e294  fmuls 2, 4, 2
  047e298  fmuls 3, 4, 3
  047e29c  fsel 4, 7, 6, 1
  047e2a0  fsel 7, 8, 6, 2
  047e2a4  fsel 6, 9, 6, 3
  047e2a8  fsel 1, 10, 4, 1
  047e2ac  fsel 2, 0, 7, 2
  047e2b0  fsel 3, 5, 6, 3
  047e2b4  fadds 1, 13, 1
  047e2b8  fadds 2, 12, 2
  047e2bc  fadds 3, 11, 3
  047e2c0  stfs 1, 104(30)
  047e2c4  stfs 2, 100(30)
  047e2c8  stfs 3, 96(30)
  047e2cc  lis 3, 72
  047e2d0  lis 4, 114
  047e2d4  addi 3, 3, -8008
  047e2d8  lfs 1, 28(3)
  047e2dc  lfs 2, -3056(4)
  047e2e0  lwz 3, 112(30)
  047e2e4  fmuls 1, 2, 1
  047e2e8  fctiwz 1, 1
  047e2ec  stfd 1, 256(1)
  047e2f0  lwz 4, 260(1)
  047e2f4  addic 4, 4, -9
  047e2f8  cmpw 3, 4
  047e2fc  bf 0, 0x47e370
  047e300  lfs 1, 16(31)
  047e304  lfs 2, 96(30)
  047e308  fadds 1, 1, 2
  047e30c  lis 3, 72
  047e310  lfs 2, 20(31)
  047e314  lfs 3, 24(31)
  047e318  addi 3, 3, -8008
  047e31c  stfs 1, 16(31)
  047e320  lfs 1, 100(30)
  047e324  fadds 1, 2, 1
  047e328  stfs 1, 20(31)
  047e32c  lfs 1, 104(30)
  047e330  fadds 1, 3, 1
  047e334  stfs 1, 24(31)
  047e338  lfs 1, 32(3)
  047e33c  lfs 2, 96(30)
  047e340  lfs 3, 100(30)
  047e344  lfs 4, 104(30)
  047e348  fmuls 2, 2, 1
  047e34c  fmuls 3, 3, 1
  047e350  fmuls 1, 4, 1
  047e354  stfs 2, 96(30)
  047e358  stfs 3, 100(30)
  047e35c  stfs 1, 104(30)
  047e360  lfs 3, 16(31)
  047e364  lfs 2, 20(31)
  047e368  lfs 1, 24(31)
  047e36c  b 0x47e3a0
  047e370  lfs 3, 16(31)
  047e374  lfs 1, 96(30)
  047e378  lfs 2, 20(31)
  047e37c  fadds 3, 3, 1
  047e380  lfs 1, 24(31)
  047e384  stfs 3, 16(31)
  047e388  lfs 4, 100(30)
  047e38c  fadds 2, 2, 4
  047e390  stfs 2, 20(31)
  047e394  lfs 4, 104(30)
  047e398  fadds 1, 1, 4
  047e39c  stfs 1, 24(31)
  047e3a0  fcmpu 0, 3, 31
  047e3a4  bt 0, 0x47e3dc
  047e3a8  lis 3, 72
  047e3ac  fcmpu 6, 2, 31
  047e3b0  addi 3, 3, -8008
  047e3b4  lfs 4, 36(3)
  047e3b8  fcmpu 0, 3, 4
  047e3bc  bt 1, 0x47e3dc
  047e3c0  fcmpu 1, 2, 4
  047e3c4  bt 24, 0x47e3dc
  047e3c8  fcmpu 6, 1, 31
  047e3cc  bt 5, 0x47e3dc
  047e3d0  fcmpu 1, 1, 4
  047e3d4  bt 24, 0x47e3dc
  047e3d8  bf 5, 0x47e3ec
  047e3dc  ori 3, 31, 0
  047e3e0  bl 0xefb38
  047e3e4  nop
  047e3e8  b 0x47e730
  047e3ec  lwz 3, 116(30)
  047e3f0  cmpwi 3, 0
  047e3f4  bt 2, 0x47e704
  047e3f8  lbz 4, 32(3)
  047e3fc  cmpwi 1, 4, 253
  047e400  cmpwi 4, 254
  047e404  cror 2, 2, 6
  047e408  bt 2, 0x47e704
  047e40c  lfs 4, 20(3)
  047e410  lfs 5, 16(3)
  047e414  fsubs 2, 2, 4
  047e418  fsubs 3, 3, 5
  047e41c  lfs 4, 24(3)
  047e420  fsubs 1, 1, 4
  047e424  lis 3, 72
  047e428  fmuls 2, 2, 2
  047e42c  addi 3, 3, -8008
  047e430  fmadds 2, 3, 3, 2
  047e434  fmadds 1, 1, 1, 2
  047e438  lfs 2, 40(3)
  047e43c  fsqrts 1, 1
  047e440  fcmpu 0, 1, 2
  047e444  cror 6, 0, 2
  047e448  bt 6, 0x47e704
  047e44c  lis 3, 72
  047e450  addic 27, 1, 208
  047e454  addi 28, 3, -8008
  047e458  addic 29, 30, 96
  047e45c  ori 3, 27, 0
  047e460  ori 4, 31, 0
  047e464  lis 5, 3
  047e468  lfs 31, 44(28)
  047e46c  ori 7, 29, 0
  047e470  fmr 1, 31
  047e474  bl 0x10581c
  047e478  nop
  047e47c  lfs 1, 16(31)
  047e480  addic 26, 1, 192
  047e484  lfs 2, 20(31)
  047e488  li 5, 16
  047e48c  stfs 1, 192(1)
  047e490  ori 3, 26, 0
  047e494  lfs 1, 28(31)
  047e498  ori 6, 31, 0
  047e49c  stfs 2, 196(1)
  047e4a0  ori 7, 27, 0
  047e4a4  stfs 1, 204(1)
  047e4a8  lfs 1, 48(28)
  047e4ac  lfs 2, 24(31)
  047e4b0  fadds 1, 2, 1
  047e4b4  stfs 1, 200(1)
  047e4b8  lfs 30, 52(28)
  047e4bc  fmr 1, 30
  047e4c0  bl 0x5e598
  047e4c4  nop
  047e4c8  ori 28, 3, 0
  047e4cc  ori 3, 26, 0
  047e4d0  fmr 1, 30
  047e4d4  li 5, 4
  047e4d8  ori 6, 31, 0
  047e4dc  bl 0x59e20
  047e4e0  nop
  047e4e4  or 28, 28, 3
  047e4e8  ori 3, 31, 0
  047e4ec  li 4, -1
  047e4f0  li 5, 0
  047e4f4  bl 0x10675c
  047e4f8  nop
  047e4fc  cmpwi 3, 0
  047e500  bt 2, 0x47e53c
  047e504  lfs 1, 32(30)
  047e508  lis 4, 72
  047e50c  lfs 2, 44(3)
  047e510  addi 4, 4, -8008
  047e514  fsubs 1, 1, 2
  047e518  stfs 1, 32(30)
  047e51c  lfs 2, 24(4)
  047e520  fcmpu 0, 1, 2
  047e524  bt 1, 0x47e53c
  047e528  lis 3, 161
  047e52c  li 4, 0
  047e530  addic 3, 3, 2368
  047e534  ori 28, 28, 8192
  047e538  stw 4, 24(3)
  047e53c  lis 3, 161
  047e540  addic 3, 3, 2368
  047e544  lwz 3, 24(3)
  047e548  cmpwi 3, 0
  047e54c  bt 2, 0x47e604
  047e550  lhz 3, 166(3)
  047e554  cmpwi 1, 3, 1332
  047e558  cmpwi 3, 1284
  047e55c  cror 2, 2, 6
  047e560  bt 2, 0x47e704
  047e564  cmpwi 3, 1333
  047e568  bt 2, 0x47e704
  047e56c  cmpwi 3, 1334
  047e570  bt 2, 0x47e704
  047e574  cmpwi 3, 1335
  047e578  bt 2, 0x47e704
  047e57c  cmpwi 3, 1336
  047e580  bt 2, 0x47e704
  047e584  cmpwi 3, 82
  047e588  bt 2, 0x47e704
  047e58c  cmpwi 3, 83
  047e590  bt 2, 0x47e704
  047e594  cmpwi 3, 1337
  047e598  bt 2, 0x47e704
  047e59c  cmpwi 3, 1338
  047e5a0  bt 2, 0x47e704
  047e5a4  cmpwi 3, 401
  047e5a8  bt 2, 0x47e704
  047e5ac  cmpwi 3, 388
  047e5b0  bt 2, 0x47e704
  047e5b4  cmpwi 3, 389
  047e5b8  bt 2, 0x47e704
  047e5bc  cmpwi 3, 390
  047e5c0  bt 2, 0x47e704
  047e5c4  cmpwi 3, 391
  047e5c8  bt 2, 0x47e704
  047e5cc  cmpwi 3, 392
  047e5d0  bt 2, 0x47e704
  047e5d4  cmpwi 3, 393
  047e5d8  bt 2, 0x47e704
  047e5dc  cmpwi 3, 394
  047e5e0  bt 2, 0x47e704
  047e5e4  cmpwi 3, 395
  047e5e8  bt 2, 0x47e704
  047e5ec  cmpwi 3, 396
  047e5f0  bt 2, 0x47e704
  047e5f4  cmpwi 3, 399
  047e5f8  bt 2, 0x47e704
  047e5fc  cmpwi 3, 400
  047e600  bt 2, 0x47e704
  047e604  cmpwi 28, 0
  047e608  bt 2, 0x47e704
  047e60c  lbz 3, 49(31)
  047e610  cmpwi 3, 0
  047e614  bt 2, 0x47e6f4
  047e618  rlwinm 3, 28, 0, 18, 18
  047e61c  cmpwi 3, 0
  047e620  bt 2, 0x47e690
  047e624  lis 3, 72
  047e628  li 6, 3
  047e62c  addi 3, 3, -8008
  047e630  li 12, 1
  047e634  li 11, -1
  047e638  li 7, 0
  047e63c  ori 4, 29, 0
  047e640  lfs 1, 24(3)
  047e644  lfs 6, 16(3)
  047e648  li 5, 0
  047e64c  std 6, 144(1)
  047e650  ori 3, 31, 0
  047e654  std 12, 160(1)
  047e658  li 8, 5
  047e65c  std 12, 168(1)
  047e660  li 9, 2
  047e664  std 11, 176(1)
  047e668  li 10, 7
  047e66c  std 7, 184(1)
  047e670  fmr 2, 1
  047e674  fmr 3, 1
  047e678  fmr 4, 1
  047e67c  fmr 5, 1
  047e680  fmr 7, 1
  047e684  bl 0x10e030
  047e688  nop
  047e68c  b 0x47e6f4
  047e690  lis 3, 72
  047e694  li 6, 0
  047e698  fmr 2, 31
  047e69c  addi 4, 3, -8008
  047e6a0  li 11, 1
  047e6a4  li 7, -1
  047e6a8  ori 3, 31, 0
  047e6ac  li 5, 0
  047e6b0  lfs 1, 60(4)
  047e6b4  lfs 5, 16(4)
  047e6b8  li 8, 20
  047e6bc  lfs 3, 56(4)
  047e6c0  li 9, 5
  047e6c4  lfs 7, 64(4)
  047e6c8  li 10, 16
  047e6cc  std 6, 144(1)
  047e6d0  ori 4, 29, 0
  047e6d4  std 11, 160(1)
  047e6d8  fmr 4, 1
  047e6dc  std 11, 168(1)
  047e6e0  fmr 6, 5
  047e6e4  std 7, 176(1)
  047e6e8  std 6, 184(1)
  047e6ec  bl 0x10e030
  047e6f0  nop
  047e6f4  ori 3, 31, 0
  047e6f8  bl 0xefb38
  047e6fc  nop
  047e700  b 0x47e730
  047e704  addic 3, 30, 112
  047e708  bl 0x4fff60
  047e70c  nop
  047e710  cmpwi 3, 0
  047e714  bt 2, 0x47e730
  047e718  lbz 3, 49(31)
  047e71c  cmpwi 3, 0
  047e720  bf 2, 0x47e730
  047e724  ori 3, 31, 0
  047e728  bl 0xefb38
  047e72c  nop
  047e730  ld 0, 352(1)
  047e734  mtlr 0
  047e738  lfd 30, 320(1)
  047e73c  lfd 31, 328(1)
  047e740  ld 26, 272(1)
  047e744  ld 27, 280(1)
  047e748  ld 28, 288(1)
  047e74c  ld 29, 296(1)
  047e750  ld 30, 304(1)
  047e754  ld 31, 312(1)
  047e758  addi 1, 1, 336
  047e75c  blr
