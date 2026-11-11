# game/update/moby1027.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1027_0018e048:   # 0x18e048, 0x940 bytes
  018e048  stdu 1, -288(1)
  018e04c  mflr 0
  018e050  std 0, 304(1)
  018e054  stfd 31, 280(1)
  018e058  std 31, 272(1)
  018e05c  lbz 4, 32(3)
  018e060  std 30, 264(1)
  018e064  ori 31, 3, 0
  018e068  lwz 30, 120(3)
  018e06c  std 29, 256(1)
  018e070  std 28, 248(1)
  018e074  std 27, 240(1)
  018e078  cmpwi 4, 0
  018e07c  bt 2, 0x18e960
  018e080  lis 4, 116
  018e084  lwz 5, 36(31)
  018e088  addic 3, 30, 388
  018e08c  lfs 1, -988(4)
  018e090  lfs 2, 36(5)
  018e094  fmuls 1, 2, 1
  018e098  stfs 1, 44(31)
  018e09c  bl 0x4fff60
  018e0a0  nop
  018e0a4  cmpwi 3, 2
  018e0a8  bf 2, 0x18e0b8
  018e0ac  li 3, 7
  018e0b0  stb 3, 32(31)
  018e0b4  b 0x18e960
  018e0b8  lis 3, 25
  018e0bc  lis 4, 114
  018e0c0  addi 3, 3, -8184
  018e0c4  lfs 2, 0(3)
  018e0c8  lfs 1, -3056(4)
  018e0cc  lwz 3, 388(30)
  018e0d0  fmuls 2, 1, 2
  018e0d4  fctiwz 2, 2
  018e0d8  stfd 2, 216(1)
  018e0dc  lwz 4, 220(1)
  018e0e0  cmpw 3, 4
  018e0e4  bt 2, 0x18e19c
  018e0e8  lis 4, 25
  018e0ec  addi 4, 4, -8184
  018e0f0  lfs 2, 4(4)
  018e0f4  fmuls 2, 1, 2
  018e0f8  fctiwz 2, 2
  018e0fc  stfd 2, 216(1)
  018e100  lwz 4, 220(1)
  018e104  cmpw 3, 4
  018e108  bt 2, 0x18e19c
  018e10c  lis 4, 25
  018e110  addi 4, 4, -8184
  018e114  lfs 2, 8(4)
  018e118  fmuls 2, 1, 2
  018e11c  fctiwz 2, 2
  018e120  stfd 2, 216(1)
  018e124  lwz 4, 220(1)
  018e128  cmpw 3, 4
  018e12c  bt 2, 0x18e19c
  018e130  lis 4, 25
  018e134  addi 4, 4, -8184
  018e138  lfs 2, 12(4)
  018e13c  fmuls 2, 1, 2
  018e140  fctiwz 2, 2
  018e144  stfd 2, 216(1)
  018e148  lwz 4, 220(1)
  018e14c  cmpw 3, 4
  018e150  bt 2, 0x18e19c
  018e154  lis 4, 25
  018e158  addi 4, 4, -8184
  018e15c  lfs 2, 16(4)
  018e160  fmuls 2, 1, 2
  018e164  fctiwz 2, 2
  018e168  stfd 2, 216(1)
  018e16c  lwz 4, 220(1)
  018e170  cmpw 3, 4
  018e174  bt 2, 0x18e19c
  018e178  lis 4, 25
  018e17c  addi 4, 4, -8184
  018e180  lfs 2, 20(4)
  018e184  fmuls 1, 1, 2
  018e188  fctiwz 1, 1
  018e18c  stfd 1, 216(1)
  018e190  lwz 4, 220(1)
  018e194  cmpw 3, 4
  018e198  bf 2, 0x18e1b4
  018e19c  li 5, 240
  018e1a0  addic 4, 30, 96
  018e1a4  ori 3, 31, 0
  018e1a8  stb 5, 103(30)
  018e1ac  bl 0x10c808
  018e1b0  nop
  018e1b4  lis 4, 25
  018e1b8  li 7, 0
  018e1bc  addi 6, 4, -8184
  018e1c0  ori 3, 31, 0
  018e1c4  lis 4, 51
  018e1c8  li 5, 0
  018e1cc  lfs 31, 24(6)
  018e1d0  stw 7, 116(1)
  018e1d4  bl 0x10675c
  018e1d8  nop
  018e1dc  ori 29, 3, 0
  018e1e0  addic 5, 30, 32
  018e1e4  ori 4, 29, 0
  018e1e8  li 6, 0
  018e1ec  addic 7, 1, 112
  018e1f0  li 9, 0
  018e1f4  addic 8, 1, 116
  018e1f8  ori 3, 31, 0
  018e1fc  li 10, 4
  018e200  bl 0x106840
  018e204  nop
  018e208  lwz 4, 112(1)
  018e20c  ori 28, 3, 0
  018e210  cmpwi 4, 1
  018e214  bt 2, 0x18e7f4
  018e218  lbz 3, 32(31)
  018e21c  cmpwi 3, 6
  018e220  bt 2, 0x18e7f4
  018e224  lfs 1, 32(30)
  018e228  lfs 2, 116(1)
  018e22c  fsubs 1, 1, 2
  018e230  fcmpu 0, 1, 31
  018e234  stfs 1, 32(30)
  018e238  bt 1, 0x18e240
  018e23c  li 28, 1
  018e240  lis 3, 25
  018e244  addi 27, 3, -8184
  018e248  lfs 1, 28(27)
  018e24c  bl 0x502758
  018e250  nop
  018e254  li 4, 0
  018e258  lis 5, 116
  018e25c  lis 6, 114
  018e260  stw 4, 152(30)
  018e264  cmpwi 28, 2
  018e268  lfs 1, -1008(5)
  018e26c  lfs 2, -3048(6)
  018e270  stw 3, 144(30)
  018e274  fmuls 1, 1, 2
  018e278  li 3, 1
  018e27c  stfs 1, 128(30)
  018e280  lfs 1, 32(27)
  018e284  stb 4, 173(30)
  018e288  fmuls 1, 2, 1
  018e28c  stw 3, 148(30)
  018e290  stfs 1, 132(30)
  018e294  bt 1, 0x18e2ac
  018e298  cmpwi 28, -1
  018e29c  cmpwi 1, 28, 0
  018e2a0  bf 1, 0x18e7e4
  018e2a4  bf 5, 0x18e7e4
  018e2a8  b 0x18e544
  018e2ac  cmpwi 28, 10
  018e2b0  cmpwi 1, 28, 8
  018e2b4  bt 1, 0x18e7e4
  018e2b8  bf 5, 0x18e2c8
  018e2bc  li 3, 250
  018e2c0  stb 3, 103(30)
  018e2c4  b 0x18e7e4
  018e2c8  lis 3, 116
  018e2cc  lis 4, 114
  018e2d0  li 5, 0
  018e2d4  lfs 1, -1000(3)
  018e2d8  lfs 2, -3052(4)
  018e2dc  lis 3, 16448
  018e2e0  stw 5, 140(30)
  018e2e4  fmuls 1, 1, 2
  018e2e8  lis 4, 16576
  018e2ec  stw 3, 192(30)
  018e2f0  stw 4, 196(30)
  018e2f4  stfs 1, 136(30)
  018e2f8  lwz 3, 32(29)
  018e2fc  lfs 1, 16(31)
  018e300  lfs 2, 20(31)
  018e304  lfs 3, 16(3)
  018e308  lfs 4, 20(3)
  018e30c  fsubs 1, 1, 3
  018e310  fsubs 2, 2, 4
  018e314  lis 3, 115
  018e318  addic 3, 3, 22784
  018e31c  fabs 3, 1
  018e320  fabs 4, 2
  018e324  stfs 1, 140(1)
  018e328  stfs 2, 144(1)
  018e32c  fsubs 1, 3, 4
  018e330  stfs 1, 148(1)
  018e334  lwz 4, 140(1)
  018e338  lfs 1, 140(1)
  018e33c  lwz 5, 144(1)
  018e340  lfs 2, 144(1)
  018e344  lwz 6, 148(1)
  018e348  rlwinm 5, 5, 3, 29, 29
  018e34c  fabs 5, 2
  018e350  lfs 2, 148(1)
  018e354  fabs 1, 1
  018e358  rlwimi 5, 6, 2, 30, 30
  018e35c  fsub 6, 2, 31
  018e360  fsub 7, 2, 31
  018e364  rlwimi 5, 4, 4, 28, 28
  018e368  ori 4, 3, 0
  018e36c  rlwimi 4, 5, 2, 26, 28
  018e370  slwi 5, 5, 2
  018e374  clrldi 4, 4, 32
  018e378  fsel 4, 6, 1, 4
  018e37c  lfsx 1, 3, 5
  018e380  fsel 3, 7, 5, 3
  018e384  lfs 2, 4(4)
  018e388  fcmpu 0, 4, 31
  018e38c  bt 1, 0x18e394
  018e390  b 0x18e4b4
  018e394  fsubs 5, 3, 4
  018e398  fadds 3, 3, 4
  018e39c  addic 3, 1, 16
  018e3a0  li 6, 2
  018e3a4  addic 4, 3, 168
  018e3a8  addic 5, 3, 184
  018e3ac  mtctr 6
  018e3b0  fdivs 3, 5, 3
  018e3b4  fmuls 4, 3, 3
  018e3b8  stfs 3, 196(1)
  018e3bc  stfs 3, 188(1)
  018e3c0  stfs 3, 192(1)
  018e3c4  stfs 3, 184(1)
  018e3c8  lfs 6, 196(1)
  018e3cc  lfs 7, 188(1)
  018e3d0  lfs 8, 192(1)
  018e3d4  fmuls 5, 4, 4
  018e3d8  fmuls 7, 7, 4
  018e3dc  fmuls 6, 6, 5
  018e3e0  fmuls 3, 5, 5
  018e3e4  fmuls 5, 8, 5
  018e3e8  stfs 7, 188(1)
  018e3ec  fmuls 4, 6, 4
  018e3f0  stfs 5, 192(1)
  018e3f4  stfs 4, 196(1)
  018e3f8  lfs 4, 168(3)
  018e3fc  fmuls 4, 4, 3
  018e400  stfs 4, 184(3)
  018e404  lfs 4, 4(4)
  018e408  addic 3, 3, 8
  018e40c  addic 4, 4, 8
  018e410  fmuls 4, 4, 3
  018e414  stfs 4, 4(5)
  018e418  addic 5, 5, 8
  018e41c  bdnz 0x18e3f8
  018e420  li 5, 4
  018e424  ori 3, 1, 0
  018e428  mtctr 5
  018e42c  lis 4, 115
  018e430  addic 5, 3, 184
  018e434  addic 4, 4, 22752
  018e438  ori 7, 5, 0
  018e43c  lfs 3, 184(3)
  018e440  lfs 4, 0(4)
  018e444  fmuls 3, 3, 4
  018e448  lfs 4, 4(4)
  018e44c  addic 4, 4, 8
  018e450  stfs 3, 184(3)
  018e454  lfs 3, 4(5)
  018e458  addic 3, 3, 8
  018e45c  fmuls 3, 3, 4
  018e460  stfs 3, 4(5)
  018e464  addic 5, 5, 8
  018e468  bdnz 0x18e43c
  018e46c  ori 3, 1, 0
  018e470  mtctr 6
  018e474  lfs 3, 184(3)
  018e478  lfs 4, 4(7)
  018e47c  fadds 3, 31, 3
  018e480  lfs 5, 8(7)
  018e484  lfs 31, 12(7)
  018e488  addic 3, 3, 16
  018e48c  addic 7, 7, 16
  018e490  fadds 3, 3, 4
  018e494  fadds 3, 3, 5
  018e498  fadds 31, 3, 31
  018e49c  bdnz 0x18e474
  018e4a0  lis 3, 25
  018e4a4  addi 3, 3, -8184
  018e4a8  lfs 3, 36(3)
  018e4ac  fadds 31, 31, 3
  018e4b0  fmadds 31, 31, 1, 2
  018e4b4  stfs 31, 120(1)
  018e4b8  addic 5, 1, 120
  018e4bc  lfs 1, 16(29)
  018e4c0  addic 6, 30, 136
  018e4c4  lfs 2, 24(29)
  018e4c8  addic 7, 30, 140
  018e4cc  stfs 1, 48(1)
  018e4d0  stfs 2, 56(1)
  018e4d4  lfs 1, 20(29)
  018e4d8  lfs 2, 28(29)
  018e4dc  stfs 1, 52(1)
  018e4e0  stfs 2, 60(1)
  018e4e4  ld 3, 48(1)
  018e4e8  ld 4, 56(1)
  018e4ec  bl 0x107de8
  018e4f0  nop
  018e4f4  ori 3, 31, 0
  018e4f8  lfs 1, 120(1)
  018e4fc  addic 4, 30, 112
  018e500  li 6, 4
  018e504  li 7, 1
  018e508  li 8, 0
  018e50c  bl 0x10ad80
  018e510  nop
  018e514  li 3, 5
  018e518  lbz 29, 33(31)
  018e51c  cmpwi 29, 255
  018e520  stb 3, 32(31)
  018e524  bt 2, 0x18e538
  018e528  ori 3, 29, 0
  018e52c  li 4, 1
  018e530  bl 0x104298
  018e534  nop
  018e538  li 3, 120
  018e53c  stb 3, 103(30)
  018e540  b 0x18e7e4
  018e544  lis 3, 116
  018e548  lis 4, 114
  018e54c  lis 5, 116
  018e550  lis 6, 114
  018e554  lis 7, 116
  018e558  lfs 1, -1008(3)
  018e55c  lfs 2, -3048(4)
  018e560  li 3, 0
  018e564  lhz 4, 52(31)
  018e568  fmuls 1, 1, 2
  018e56c  rlwimi 4, 3, 0, 19, 19
  018e570  lis 3, 16736
  018e574  sth 4, 52(31)
  018e578  lis 4, 16864
  018e57c  stfs 1, 128(30)
  018e580  lfs 1, -992(5)
  018e584  lfs 2, -3052(6)
  018e588  fmuls 1, 1, 2
  018e58c  stfs 1, 136(30)
  018e590  lfs 1, -996(7)
  018e594  stw 3, 192(30)
  018e598  fmuls 1, 1, 2
  018e59c  stw 4, 196(30)
  018e5a0  stfs 1, 140(30)
  018e5a4  lwz 3, 32(29)
  018e5a8  lfs 1, 16(31)
  018e5ac  lfs 2, 20(31)
  018e5b0  lfs 3, 16(3)
  018e5b4  lfs 4, 20(3)
  018e5b8  fsubs 1, 1, 3
  018e5bc  fsubs 2, 2, 4
  018e5c0  lis 3, 115
  018e5c4  addic 3, 3, 22784
  018e5c8  fabs 3, 1
  018e5cc  fabs 4, 2
  018e5d0  stfs 1, 128(1)
  018e5d4  stfs 2, 132(1)
  018e5d8  fsubs 1, 3, 4
  018e5dc  stfs 1, 136(1)
  018e5e0  lwz 4, 128(1)
  018e5e4  lfs 1, 128(1)
  018e5e8  lwz 5, 132(1)
  018e5ec  lfs 2, 132(1)
  018e5f0  fabs 1, 1
  018e5f4  lwz 6, 136(1)
  018e5f8  rlwinm 5, 5, 3, 29, 29
  018e5fc  lfs 5, 136(1)
  018e600  fabs 2, 2
  018e604  rlwimi 5, 6, 2, 30, 30
  018e608  fsub 6, 5, 31
  018e60c  fsub 5, 5, 31
  018e610  rlwimi 5, 4, 4, 28, 28
  018e614  ori 4, 3, 0
  018e618  rlwimi 4, 5, 2, 26, 28
  018e61c  slwi 5, 5, 2
  018e620  clrldi 4, 4, 32
  018e624  fsel 4, 6, 1, 4
  018e628  lfsx 1, 3, 5
  018e62c  fsel 3, 5, 2, 3
  018e630  lfs 2, 4(4)
  018e634  fcmpu 0, 4, 31
  018e638  bt 1, 0x18e640
  018e63c  b 0x18e760
  018e640  fsubs 5, 3, 4
  018e644  fadds 3, 3, 4
  018e648  addic 3, 1, 16
  018e64c  li 7, 2
  018e650  addic 5, 3, 152
  018e654  addic 4, 3, 136
  018e658  mtctr 7
  018e65c  fdivs 3, 5, 3
  018e660  fmuls 4, 3, 3
  018e664  stfs 3, 164(1)
  018e668  stfs 3, 156(1)
  018e66c  stfs 3, 160(1)
  018e670  stfs 3, 152(1)
  018e674  lfs 6, 164(1)
  018e678  lfs 7, 156(1)
  018e67c  lfs 8, 160(1)
  018e680  fmuls 5, 4, 4
  018e684  fmuls 7, 7, 4
  018e688  fmuls 6, 6, 5
  018e68c  fmuls 3, 5, 5
  018e690  fmuls 5, 8, 5
  018e694  stfs 7, 156(1)
  018e698  fmuls 4, 6, 4
  018e69c  stfs 5, 160(1)
  018e6a0  stfs 4, 164(1)
  018e6a4  lfs 4, 136(3)
  018e6a8  fmuls 4, 4, 3
  018e6ac  stfs 4, 152(3)
  018e6b0  lfs 4, 4(4)
  018e6b4  addic 4, 4, 8
  018e6b8  fmuls 4, 4, 3
  018e6bc  addic 3, 3, 8
  018e6c0  stfs 4, 4(5)
  018e6c4  addic 5, 5, 8
  018e6c8  bdnz 0x18e6a4
  018e6cc  li 5, 4
  018e6d0  ori 3, 1, 0
  018e6d4  mtctr 5
  018e6d8  lis 4, 115
  018e6dc  addic 5, 3, 152
  018e6e0  addic 4, 4, 22752
  018e6e4  ori 6, 5, 0
  018e6e8  lfs 3, 152(3)
  018e6ec  lfs 4, 0(4)
  018e6f0  fmuls 3, 3, 4
  018e6f4  lfs 4, 4(4)
  018e6f8  addic 4, 4, 8
  018e6fc  stfs 3, 152(3)
  018e700  lfs 3, 4(5)
  018e704  addic 3, 3, 8
  018e708  fmuls 3, 3, 4
  018e70c  stfs 3, 4(5)
  018e710  addic 5, 5, 8
  018e714  bdnz 0x18e6e8
  018e718  ori 3, 1, 0
  018e71c  mtctr 7
  018e720  lfs 3, 152(3)
  018e724  lfs 4, 4(6)
  018e728  fadds 3, 31, 3
  018e72c  lfs 5, 8(6)
  018e730  addic 3, 3, 16
  018e734  lfs 31, 12(6)
  018e738  addic 6, 6, 16
  018e73c  fadds 3, 3, 4
  018e740  fadds 3, 3, 5
  018e744  fadds 31, 3, 31
  018e748  bdnz 0x18e720
  018e74c  lis 3, 25
  018e750  addi 3, 3, -8184
  018e754  lfs 3, 36(3)
  018e758  fadds 31, 31, 3
  018e75c  fmadds 31, 31, 1, 2
  018e760  stfs 31, 124(1)
  018e764  lfs 1, 16(29)
  018e768  addic 5, 1, 124
  018e76c  lfs 2, 24(29)
  018e770  addic 6, 30, 136
  018e774  stfs 1, 48(1)
  018e778  addic 7, 30, 140
  018e77c  stfs 2, 56(1)
  018e780  lfs 1, 20(29)
  018e784  lfs 2, 28(29)
  018e788  stfs 1, 52(1)
  018e78c  stfs 2, 60(1)
  018e790  ld 3, 48(1)
  018e794  ld 4, 56(1)
  018e798  bl 0x107de8
  018e79c  nop
  018e7a0  ori 3, 31, 0
  018e7a4  addic 4, 30, 112
  018e7a8  lfs 1, 124(1)
  018e7ac  li 6, 4
  018e7b0  li 7, 1
  018e7b4  li 8, 0
  018e7b8  bl 0x10ad80
  018e7bc  nop
  018e7c0  ori 3, 31, 0
  018e7c4  li 4, 0
  018e7c8  li 5, -1
  018e7cc  bl 0xfd8d0
  018e7d0  nop
  018e7d4  li 3, 6
  018e7d8  li 4, 240
  018e7dc  stb 3, 32(31)
  018e7e0  stb 4, 103(30)
  018e7e4  addic 4, 30, 96
  018e7e8  ori 3, 31, 0
  018e7ec  bl 0x10c808
  018e7f0  nop
  018e7f4  li 5, 255
  018e7f8  ori 3, 31, 0
  018e7fc  addic 4, 30, 96
  018e800  stb 5, 164(31)
  018e804  bl 0x10c9a0
  018e808  nop
  018e80c  lwz 3, 56(30)
  018e810  cmpwi 3, 0
  018e814  bf 2, 0x18e824
  018e818  lbz 3, 188(31)
  018e81c  cmpwi 3, 1
  018e820  bf 2, 0x18e860
  018e824  lis 3, 25
  018e828  addi 3, 3, -8184
  018e82c  lfs 1, 40(3)
  018e830  lfs 2, 44(3)
  018e834  bl 0xfcbe8
  018e838  nop
  018e83c  lis 3, 114
  018e840  lfs 2, -3056(3)
  018e844  fmuls 1, 1, 2
  018e848  bl 0x502758
  018e84c  nop
  018e850  li 4, 0
  018e854  stw 3, 400(30)
  018e858  stw 4, 56(30)
  018e85c  stb 4, 188(31)
  018e860  addic 3, 30, 400
  018e864  bl 0x4fff60
  018e868  nop
  018e86c  lis 4, 25
  018e870  lwz 5, 400(30)
  018e874  lwz 3, 384(30)
  018e878  addi 4, 4, -8184
  018e87c  cmpwi 5, 0
  018e880  lfs 1, 48(4)
  018e884  bt 2, 0x18e894
  018e888  lis 4, 25
  018e88c  addi 4, 4, -8184
  018e890  lfs 1, 52(4)
  018e894  lis 4, 165
  018e898  stfs 1, 392(30)
  018e89c  slwi 3, 3, 2
  018e8a0  addic 5, 4, 7136
  018e8a4  extsw 6, 3
  018e8a8  ori 3, 31, 0
  018e8ac  addic 4, 30, 288
  018e8b0  li 7, 0
  018e8b4  lwzx 5, 5, 6
  018e8b8  li 6, 0
  018e8bc  addic 8, 5, 16
  018e8c0  lwz 9, 0(5)
  018e8c4  extsw 9, 9
  018e8c8  bl 0x111ba0
  018e8cc  nop
  018e8d0  cmpwi 3, 2
  018e8d4  bt 2, 0x18e944
  018e8d8  lwz 3, 400(30)
  018e8dc  cmpwi 3, 0
  018e8e0  bf 2, 0x18e944
  018e8e4  lfs 1, 20(31)
  018e8e8  lfs 2, 292(30)
  018e8ec  lfs 3, 16(31)
  018e8f0  fsubs 1, 1, 2
  018e8f4  lfs 2, 288(30)
  018e8f8  fsubs 2, 3, 2
  018e8fc  fmuls 1, 1, 1
  018e900  fmadds 1, 2, 2, 1
  018e904  lfs 2, 392(30)
  018e908  fsqrts 1, 1
  018e90c  fcmpu 0, 1, 2
  018e910  bt 1, 0x18e93c
  018e914  lfs 1, 24(31)
  018e918  lis 3, 25
  018e91c  lfs 2, 296(30)
  018e920  addi 3, 3, -8184
  018e924  fsubs 1, 1, 2
  018e928  lfs 2, 56(3)
  018e92c  fabs 1, 1
  018e930  fcmpu 0, 1, 2
  018e934  cror 6, 0, 2
  018e938  bt 6, 0x18e944
  018e93c  li 3, 2
  018e940  stw 3, 356(30)
  018e944  lwz 3, 352(30)
  018e948  cmpwi 3, 0
  018e94c  bf 2, 0x18e960
  018e950  lis 3, 151
  018e954  addic 3, 3, -25376
  018e958  lwz 3, 8320(3)
  018e95c  stw 3, 352(30)
  018e960  ld 0, 304(1)
  018e964  mtlr 0
  018e968  lfd 31, 280(1)
  018e96c  ld 27, 240(1)
  018e970  ld 28, 248(1)
  018e974  ld 29, 256(1)
  018e978  ld 30, 264(1)
  018e97c  ld 31, 272(1)
  018e980  addi 1, 1, 288
  018e984  blr

UpdateMoby_1027:   # 0x18e9f8, 0xa18 bytes
  018e9f8  stdu 1, -384(1)
  018e9fc  mflr 0
  018ea00  std 0, 400(1)
  018ea04  stfd 29, 360(1)
  018ea08  stfd 30, 368(1)
  018ea0c  stfd 31, 376(1)
  018ea10  std 31, 352(1)
  018ea14  std 30, 344(1)
  018ea18  ori 31, 3, 0
  018ea1c  std 29, 336(1)
  018ea20  std 28, 328(1)
  018ea24  lwz 30, 120(31)
  018ea28  bl 0x18e048
  018ea2c  lbz 3, 32(31)
  018ea30  lwz 29, 352(30)
  018ea34  lfs 29, 24(31)
  018ea38  cmpwi 3, 7
  018ea3c  lfs 1, 16(31)
  018ea40  lfs 2, 20(31)
  018ea44  bt 2, 0x18f368
  018ea48  cmpwi 3, 6
  018ea4c  bt 2, 0x18f314
  018ea50  cmpwi 3, 5
  018ea54  bt 2, 0x18f27c
  018ea58  cmpwi 3, 4
  018ea5c  bt 2, 0x18ee6c
  018ea60  cmpwi 3, 3
  018ea64  bt 2, 0x18eda8
  018ea68  cmpwi 3, 2
  018ea6c  bt 2, 0x18ee6c
  018ea70  cmpwi 3, 1
  018ea74  bt 2, 0x18eb7c
  018ea78  cmpwi 3, 0
  018ea7c  bf 2, 0x18f3e4
  018ea80  lis 3, 16448
  018ea84  li 4, 3
  018ea88  li 5, 2
  018ea8c  li 6, 0
  018ea90  stw 3, 32(30)
  018ea94  sth 4, 36(30)
  018ea98  lwz 3, 384(30)
  018ea9c  stb 5, 40(30)
  018eaa0  cmpwi 3, -1
  018eaa4  stb 6, 41(30)
  018eaa8  bf 2, 0x18ead4
  018eaac  lis 3, 101
  018eab0  lhz 4, 178(31)
  018eab4  addic 3, 3, 17052
  018eab8  extsh 4, 4
  018eabc  bl 0x5cd098
  018eac0  nop
  018eac4  ori 3, 31, 0
  018eac8  bl 0xefb38
  018eacc  nop
  018ead0  b 0x18f3e4
  018ead4  addic 3, 30, 208
  018ead8  bl 0x100f8c
  018eadc  nop
  018eae0  lis 3, 25
  018eae4  lis 4, 16128
  018eae8  addi 29, 3, -5752
  018eaec  lfs 31, 0(29)
  018eaf0  stw 4, 220(30)
  018eaf4  stw 4, 216(30)
  018eaf8  lfs 1, 4(29)
  018eafc  bl 0x502758
  018eb00  nop
  018eb04  stw 3, 208(30)
  018eb08  lis 3, 114
  018eb0c  lfs 1, 8(29)
  018eb10  li 4, 1
  018eb14  lfs 2, -3052(3)
  018eb18  fmuls 1, 2, 1
  018eb1c  stfs 1, 244(30)
  018eb20  lbz 3, 83(31)
  018eb24  stb 4, 32(31)
  018eb28  cmpwi 3, 1
  018eb2c  bt 2, 0x18eb6c
  018eb30  lis 3, 25
  018eb34  lis 4, 114
  018eb38  addi 3, 3, -5752
  018eb3c  li 5, 0
  018eb40  lfs 1, 12(3)
  018eb44  lfs 2, -3056(4)
  018eb48  ori 3, 31, 0
  018eb4c  fmuls 1, 2, 1
  018eb50  li 4, 1
  018eb54  fctiwz 1, 1
  018eb58  stfd 1, 312(1)
  018eb5c  lwz 6, 316(1)
  018eb60  extsw 6, 6
  018eb64  bl 0xfddc0
  018eb68  nop
  018eb6c  lfs 1, 24(31)
  018eb70  fadds 1, 1, 31
  018eb74  stfs 1, 24(31)
  018eb78  b 0x18f3e4
  018eb7c  lfs 3, 16(29)
  018eb80  lfs 4, 20(29)
  018eb84  lis 3, 25
  018eb88  fsubs 1, 3, 1
  018eb8c  fsubs 2, 4, 2
  018eb90  addi 4, 3, -5752
  018eb94  lis 5, 115
  018eb98  addic 3, 31, 72
  018eb9c  addic 5, 5, 22784
  018eba0  fabs 4, 1
  018eba4  fabs 5, 2
  018eba8  stfs 1, 236(1)
  018ebac  stfs 2, 240(1)
  018ebb0  fsubs 1, 4, 5
  018ebb4  stfs 1, 244(1)
  018ebb8  lwz 6, 236(1)
  018ebbc  lfs 3, 16(4)
  018ebc0  lfs 1, 236(1)
  018ebc4  lwz 4, 240(1)
  018ebc8  lfs 2, 240(1)
  018ebcc  fabs 1, 1
  018ebd0  lwz 7, 244(1)
  018ebd4  rlwinm 4, 4, 3, 29, 29
  018ebd8  fabs 6, 2
  018ebdc  lfs 2, 244(1)
  018ebe0  rlwimi 4, 7, 2, 30, 30
  018ebe4  fsub 7, 2, 3
  018ebe8  rlwimi 4, 6, 4, 28, 28
  018ebec  fsub 8, 2, 3
  018ebf0  ori 6, 5, 0
  018ebf4  rlwimi 6, 4, 2, 26, 28
  018ebf8  slwi 4, 4, 2
  018ebfc  clrldi 6, 6, 32
  018ec00  fsel 5, 7, 1, 5
  018ec04  lfsx 1, 5, 4
  018ec08  lfs 2, 4(6)
  018ec0c  fsel 4, 8, 6, 4
  018ec10  fcmpu 0, 5, 3
  018ec14  bt 1, 0x18ec1c
  018ec18  b 0x18ed3c
  018ec1c  fsubs 6, 4, 5
  018ec20  fadds 4, 4, 5
  018ec24  addic 4, 1, 16
  018ec28  li 7, 2
  018ec2c  addic 6, 4, 280
  018ec30  addic 5, 4, 264
  018ec34  mtctr 7
  018ec38  fdivs 4, 6, 4
  018ec3c  fmuls 5, 4, 4
  018ec40  stfs 4, 292(1)
  018ec44  stfs 4, 284(1)
  018ec48  stfs 4, 288(1)
  018ec4c  stfs 4, 280(1)
  018ec50  lfs 7, 292(1)
  018ec54  lfs 8, 284(1)
  018ec58  lfs 9, 288(1)
  018ec5c  fmuls 6, 5, 5
  018ec60  fmuls 8, 8, 5
  018ec64  fmuls 7, 7, 6
  018ec68  fmuls 4, 6, 6
  018ec6c  fmuls 6, 9, 6
  018ec70  stfs 8, 284(1)
  018ec74  fmuls 5, 7, 5
  018ec78  stfs 6, 288(1)
  018ec7c  stfs 5, 292(1)
  018ec80  lfs 5, 264(4)
  018ec84  fmuls 5, 5, 4
  018ec88  stfs 5, 280(4)
  018ec8c  lfs 5, 4(5)
  018ec90  addic 5, 5, 8
  018ec94  fmuls 5, 5, 4
  018ec98  addic 4, 4, 8
  018ec9c  stfs 5, 4(6)
  018eca0  addic 6, 6, 8
  018eca4  bdnz 0x18ec80
  018eca8  li 6, 4
  018ecac  ori 4, 1, 0
  018ecb0  mtctr 6
  018ecb4  lis 5, 115
  018ecb8  addic 6, 4, 280
  018ecbc  addic 5, 5, 22752
  018ecc0  ori 8, 6, 0
  018ecc4  lfs 4, 280(4)
  018ecc8  lfs 5, 0(5)
  018eccc  fmuls 4, 4, 5
  018ecd0  lfs 5, 4(5)
  018ecd4  addic 5, 5, 8
  018ecd8  stfs 4, 280(4)
  018ecdc  lfs 4, 4(6)
  018ece0  addic 4, 4, 8
  018ece4  fmuls 4, 4, 5
  018ece8  stfs 4, 4(6)
  018ecec  addic 6, 6, 8
  018ecf0  bdnz 0x18ecc4
  018ecf4  ori 4, 1, 0
  018ecf8  mtctr 7
  018ecfc  lfs 4, 280(4)
  018ed00  fadds 3, 3, 4
  018ed04  addic 4, 4, 16
  018ed08  lfs 4, 4(8)
  018ed0c  lfs 5, 8(8)
  018ed10  lfs 6, 12(8)
  018ed14  addic 8, 8, 16
  018ed18  fadds 3, 3, 4
  018ed1c  fadds 3, 3, 5
  018ed20  fadds 3, 3, 6
  018ed24  bdnz 0x18ecfc
  018ed28  lis 4, 25
  018ed2c  addi 4, 4, -5752
  018ed30  lfs 4, 20(4)
  018ed34  fadds 3, 3, 4
  018ed38  fmadds 3, 3, 1, 2
  018ed3c  lis 4, 25
  018ed40  lis 5, 114
  018ed44  fmr 1, 3
  018ed48  addi 4, 4, -5752
  018ed4c  lis 6, 114
  018ed50  lfs 4, 24(4)
  018ed54  lfs 2, -3048(5)
  018ed58  lfs 5, 28(4)
  018ed5c  addic 5, 30, 396
  018ed60  fmuls 2, 2, 4
  018ed64  lfs 6, -3052(6)
  018ed68  fmuls 4, 6, 5
  018ed6c  fmr 3, 2
  018ed70  bl 0x10a2e0
  018ed74  nop
  018ed78  lwz 3, 356(30)
  018ed7c  cmpwi 3, 2
  018ed80  bt 2, 0x18f3e4
  018ed84  lbz 3, 33(31)
  018ed88  cmpwi 3, 255
  018ed8c  bt 2, 0x18ed9c
  018ed90  li 4, 1
  018ed94  bl 0x104298
  018ed98  nop
  018ed9c  li 3, 2
  018eda0  stb 3, 32(31)
  018eda4  b 0x18f3e4
  018eda8  lbz 3, 112(31)
  018edac  rlwinm 3, 3, 0, 30, 30
  018edb0  cmpwi 3, 0
  018edb4  bt 2, 0x18f3e4
  018edb8  lbz 3, 33(31)
  018edbc  cmpwi 3, 255
  018edc0  bt 2, 0x18edd0
  018edc4  li 4, 1
  018edc8  bl 0x104298
  018edcc  nop
  018edd0  li 3, 4
  018edd4  lbz 4, 83(31)
  018edd8  cmpwi 4, 4
  018eddc  stb 3, 32(31)
  018ede0  bt 2, 0x18ee20
  018ede4  lis 3, 25
  018ede8  lis 4, 114
  018edec  addi 3, 3, -5752
  018edf0  li 5, 0
  018edf4  lfs 1, 12(3)
  018edf8  lfs 2, -3056(4)
  018edfc  ori 3, 31, 0
  018ee00  li 4, 4
  018ee04  fmuls 1, 2, 1
  018ee08  fctiwz 1, 1
  018ee0c  stfd 1, 312(1)
  018ee10  lwz 6, 316(1)
  018ee14  extsw 6, 6
  018ee18  bl 0xfddc0
  018ee1c  nop
  018ee20  lwz 3, 388(30)
  018ee24  cmpwi 3, 0
  018ee28  bf 2, 0x18f3e4
  018ee2c  lis 3, 25
  018ee30  li 4, 32
  018ee34  vspltisw 2, -1
  018ee38  addi 3, 3, -5752
  018ee3c  lis 5, 114
  018ee40  li 6, -3056
  018ee44  vslw 2, 2, 2
  018ee48  <unknown>
  018ee4c  li 3, 388
  018ee50  vspltw 3, 3, 0
  018ee54  <unknown>
  018ee58  vmaddfp 2, 4, 3, 2
  018ee5c  vctsxs 2, 2, 0
  018ee60  vspltw 2, 2, 0
  018ee64  stvewx 2, 3, 30
  018ee68  b 0x18f3e4
  018ee6c  lfs 3, 16(29)
  018ee70  lfs 4, 20(29)
  018ee74  lis 3, 25
  018ee78  fsubs 1, 3, 1
  018ee7c  fsubs 2, 4, 2
  018ee80  addi 4, 3, -5752
  018ee84  lis 5, 115
  018ee88  addic 3, 31, 72
  018ee8c  addic 5, 5, 22784
  018ee90  fabs 3, 1
  018ee94  fabs 4, 2
  018ee98  stfs 1, 224(1)
  018ee9c  stfs 2, 228(1)
  018eea0  fsubs 1, 3, 4
  018eea4  stfs 1, 232(1)
  018eea8  lwz 6, 224(1)
  018eeac  lfs 30, 16(4)
  018eeb0  lfs 1, 224(1)
  018eeb4  lwz 4, 228(1)
  018eeb8  lfs 2, 228(1)
  018eebc  fabs 1, 1
  018eec0  lwz 7, 232(1)
  018eec4  rlwinm 4, 4, 3, 29, 29
  018eec8  fabs 5, 2
  018eecc  lfs 2, 232(1)
  018eed0  rlwimi 4, 7, 2, 30, 30
  018eed4  fsub 6, 2, 30
  018eed8  rlwimi 4, 6, 4, 28, 28
  018eedc  fsub 7, 2, 30
  018eee0  ori 6, 5, 0
  018eee4  rlwimi 6, 4, 2, 26, 28
  018eee8  slwi 4, 4, 2
  018eeec  clrldi 6, 6, 32
  018eef0  fsel 4, 6, 1, 4
  018eef4  lfsx 1, 5, 4
  018eef8  lfs 2, 4(6)
  018eefc  fsel 3, 7, 5, 3
  018ef00  fcmpu 0, 4, 30
  018ef04  bt 1, 0x18ef10
  018ef08  fmr 1, 30
  018ef0c  b 0x18f034
  018ef10  fsubs 5, 3, 4
  018ef14  fadds 3, 3, 4
  018ef18  addic 4, 1, 16
  018ef1c  li 7, 2
  018ef20  addic 5, 4, 232
  018ef24  addic 6, 4, 248
  018ef28  mtctr 7
  018ef2c  fdivs 3, 5, 3
  018ef30  fmuls 4, 3, 3
  018ef34  stfs 3, 260(1)
  018ef38  stfs 3, 252(1)
  018ef3c  stfs 3, 256(1)
  018ef40  stfs 3, 248(1)
  018ef44  lfs 6, 260(1)
  018ef48  lfs 7, 252(1)
  018ef4c  lfs 8, 256(1)
  018ef50  fmuls 5, 4, 4
  018ef54  fmuls 7, 7, 4
  018ef58  fmuls 6, 6, 5
  018ef5c  fmuls 3, 5, 5
  018ef60  fmuls 5, 8, 5
  018ef64  stfs 7, 252(1)
  018ef68  fmuls 4, 6, 4
  018ef6c  stfs 5, 256(1)
  018ef70  stfs 4, 260(1)
  018ef74  lfs 4, 232(4)
  018ef78  fmuls 4, 4, 3
  018ef7c  stfs 4, 248(4)
  018ef80  lfs 4, 4(5)
  018ef84  addic 4, 4, 8
  018ef88  addic 5, 5, 8
  018ef8c  fmuls 4, 4, 3
  018ef90  stfs 4, 4(6)
  018ef94  addic 6, 6, 8
  018ef98  bdnz 0x18ef74
  018ef9c  li 6, 4
  018efa0  ori 4, 1, 0
  018efa4  mtctr 6
  018efa8  lis 5, 115
  018efac  addic 6, 4, 248
  018efb0  addic 5, 5, 22752
  018efb4  ori 8, 6, 0
  018efb8  lfs 3, 248(4)
  018efbc  lfs 4, 0(5)
  018efc0  fmuls 3, 3, 4
  018efc4  lfs 4, 4(5)
  018efc8  addic 5, 5, 8
  018efcc  stfs 3, 248(4)
  018efd0  lfs 3, 4(6)
  018efd4  addic 4, 4, 8
  018efd8  fmuls 3, 3, 4
  018efdc  stfs 3, 4(6)
  018efe0  addic 6, 6, 8
  018efe4  bdnz 0x18efb8
  018efe8  fmr 3, 30
  018efec  ori 4, 1, 0
  018eff0  mtctr 7
  018eff4  lfs 4, 248(4)
  018eff8  fadds 3, 3, 4
  018effc  addic 4, 4, 16
  018f000  lfs 4, 4(8)
  018f004  lfs 5, 8(8)
  018f008  lfs 6, 12(8)
  018f00c  addic 8, 8, 16
  018f010  fadds 3, 3, 4
  018f014  fadds 3, 3, 5
  018f018  fadds 3, 3, 6
  018f01c  bdnz 0x18eff4
  018f020  lis 4, 25
  018f024  addi 4, 4, -5752
  018f028  lfs 4, 20(4)
  018f02c  fadds 3, 3, 4
  018f030  fmadds 1, 3, 1, 2
  018f034  lis 4, 25
  018f038  lis 6, 114
  018f03c  addi 28, 4, -5752
  018f040  lis 4, 114
  018f044  addic 5, 30, 396
  018f048  lfs 2, 24(28)
  018f04c  lfs 3, -3048(4)
  018f050  lfs 4, 28(28)
  018f054  fmuls 2, 3, 2
  018f058  lfs 5, -3052(6)
  018f05c  fmuls 4, 5, 4
  018f060  fmr 3, 2
  018f064  bl 0x10a2e0
  018f068  nop
  018f06c  lfs 1, 20(31)
  018f070  lfs 2, 20(29)
  018f074  lfs 3, 16(31)
  018f078  fsubs 1, 1, 2
  018f07c  lfs 2, 16(29)
  018f080  fsubs 2, 3, 2
  018f084  fmuls 1, 1, 1
  018f088  fmadds 31, 2, 2, 1
  018f08c  lfs 2, 36(28)
  018f090  lfs 1, 24(31)
  018f094  fsqrts 31, 31
  018f098  fcmpu 0, 31, 2
  018f09c  cror 6, 0, 2
  018f0a0  bt 6, 0x18f204
  018f0a4  lis 3, 25
  018f0a8  lfs 2, 72(31)
  018f0ac  addi 3, 3, -5752
  018f0b0  lfs 3, 40(3)
  018f0b4  lfs 4, 44(3)
  018f0b8  fadds 3, 2, 3
  018f0bc  lfs 5, 48(3)
  018f0c0  fsubs 6, 4, 2
  018f0c4  li 4, 0
  018f0c8  lis 5, 151
  018f0cc  addic 5, 5, -25376
  018f0d0  fsubs 4, 4, 3
  018f0d4  fsub 8, 2, 6
  018f0d8  fsubs 7, 5, 3
  018f0dc  fsubs 5, 5, 2
  018f0e0  fsub 9, 3, 4
  018f0e4  fsel 2, 8, 6, 2
  018f0e8  fsel 3, 9, 4, 3
  018f0ec  fsub 8, 5, 2
  018f0f0  lfs 4, 52(3)
  018f0f4  lfs 6, 56(3)
  018f0f8  fsub 9, 7, 3
  018f0fc  fsel 2, 8, 5, 2
  018f100  lfs 5, 60(3)
  018f104  fsel 3, 9, 7, 3
  018f108  fmuls 7, 2, 2
  018f10c  lfs 9, 64(3)
  018f110  lfs 12, 244(30)
  018f114  fmuls 8, 3, 3
  018f118  fmuls 10, 7, 2
  018f11c  fmuls 11, 8, 3
  018f120  fmuls 13, 7, 10
  018f124  fmadds 2, 10, 4, 2
  018f128  fmuls 10, 8, 11
  018f12c  fmadds 3, 11, 4, 3
  018f130  fmuls 4, 7, 13
  018f134  fmadds 2, 13, 6, 2
  018f138  fmuls 11, 8, 10
  018f13c  fmadds 3, 10, 6, 3
  018f140  fmuls 6, 7, 4
  018f144  fmadds 2, 4, 5, 2
  018f148  fmuls 4, 8, 11
  018f14c  fmadds 3, 11, 5, 3
  018f150  fmadds 2, 6, 9, 2
  018f154  fmadds 3, 4, 9, 3
  018f158  fmuls 3, 3, 12
  018f15c  stfs 3, 192(1)
  018f160  lfs 3, 244(30)
  018f164  stw 4, 200(1)
  018f168  fmuls 2, 2, 3
  018f16c  lis 4, 114
  018f170  stfs 2, 196(1)
  018f174  lfs 2, 68(3)
  018f178  lfs 3, 136(5)
  018f17c  lfs 4, 72(3)
  018f180  fadds 2, 3, 2
  018f184  lfs 5, 76(3)
  018f188  fsub 1, 1, 2
  018f18c  fsubs 2, 2, 29
  018f190  lfs 29, -3064(4)
  018f194  fsel 1, 1, 5, 4
  018f198  fmuls 2, 2, 1
  018f19c  stfs 2, 200(1)
  018f1a0  lfs 1, 80(3)
  018f1a4  fmuls 1, 29, 1
  018f1a8  fcmpu 0, 2, 1
  018f1ac  cror 6, 0, 2
  018f1b0  bt 6, 0x18f1bc
  018f1b4  stfs 1, 200(1)
  018f1b8  b 0x18f1dc
  018f1bc  lis 3, 25
  018f1c0  addi 3, 3, -5752
  018f1c4  lfs 1, 84(3)
  018f1c8  fmuls 29, 29, 1
  018f1cc  fcmpu 0, 2, 29
  018f1d0  cror 6, 1, 2
  018f1d4  bt 6, 0x18f1dc
  018f1d8  stfs 29, 200(1)
  018f1dc  lis 3, 25
  018f1e0  addic 4, 1, 192
  018f1e4  fmr 1, 30
  018f1e8  addi 5, 3, -5752
  018f1ec  fmr 3, 30
  018f1f0  ori 3, 31, 0
  018f1f4  li 8, 0
  018f1f8  lfs 2, 0(5)
  018f1fc  bl 0x1009b0
  018f200  nop
  018f204  lis 3, 25
  018f208  addi 3, 3, -5752
  018f20c  lfs 1, 88(3)
  018f210  fcmpu 0, 31, 1
  018f214  cror 6, 1, 2
  018f218  bt 6, 0x18f3e4
  018f21c  lbz 3, 32(31)
  018f220  cmpwi 3, 2
  018f224  bf 2, 0x18f3e4
  018f228  li 3, 3
  018f22c  lbz 4, 83(31)
  018f230  cmpwi 4, 3
  018f234  stb 3, 32(31)
  018f238  bt 2, 0x18f3e4
  018f23c  lis 3, 25
  018f240  lis 4, 114
  018f244  addi 3, 3, -5752
  018f248  li 5, 0
  018f24c  lfs 1, 12(3)
  018f250  lfs 2, -3056(4)
  018f254  ori 3, 31, 0
  018f258  li 4, 3
  018f25c  fmuls 1, 2, 1
  018f260  fctiwz 1, 1
  018f264  stfd 1, 312(1)
  018f268  lwz 6, 316(1)
  018f26c  extsw 6, 6
  018f270  bl 0xfddc0
  018f274  nop
  018f278  b 0x18f3e4
  018f27c  addic 4, 30, 112
  018f280  ori 3, 31, 0
  018f284  bl 0x10b030
  018f288  nop
  018f28c  stfs 29, 24(31)
  018f290  lfs 1, 116(30)
  018f294  lfs 2, 112(30)
  018f298  fmuls 1, 1, 1
  018f29c  li 3, 0
  018f2a0  lis 4, 114
  018f2a4  stw 3, 120(30)
  018f2a8  fmadds 1, 2, 2, 1
  018f2ac  lfs 2, -3052(4)
  018f2b0  fsqrts 1, 1
  018f2b4  fcmpu 0, 1, 2
  018f2b8  cror 6, 1, 2
  018f2bc  bt 6, 0x18f3e4
  018f2c0  li 3, 4
  018f2c4  stb 3, 32(31)
  018f2c8  lwz 3, 388(30)
  018f2cc  cmpwi 3, 0
  018f2d0  bf 2, 0x18f3e4
  018f2d4  lis 3, 25
  018f2d8  li 4, 32
  018f2dc  vspltisw 2, -1
  018f2e0  addi 3, 3, -5752
  018f2e4  lis 5, 114
  018f2e8  li 6, -3056
  018f2ec  vslw 2, 2, 2
  018f2f0  <unknown>
  018f2f4  li 3, 388
  018f2f8  vspltw 3, 3, 0
  018f2fc  <unknown>
  018f300  vmaddfp 2, 4, 3, 2
  018f304  vctsxs 2, 2, 0
  018f308  vspltw 2, 2, 0
  018f30c  stvewx 2, 3, 30
  018f310  b 0x18f3e4
  018f314  addic 4, 30, 112
  018f318  ori 3, 31, 0
  018f31c  bl 0x10b030
  018f320  nop
  018f324  li 4, 289
  018f328  and 3, 3, 4
  018f32c  cmpwi 3, 0
  018f330  bt 2, 0x18f3e4
  018f334  lis 3, 25
  018f338  addic 4, 31, 16
  018f33c  addi 5, 3, -5752
  018f340  ori 3, 31, 0
  018f344  li 6, -1
  018f348  lfs 1, 0(5)
  018f34c  lfs 2, 92(5)
  018f350  bl 0x10fb28
  018f354  nop
  018f358  ori 3, 31, 0
  018f35c  bl 0xefb38
  018f360  nop
  018f364  b 0x18f3e4
  018f368  li 6, 0
  018f36c  lis 3, 25
  018f370  li 7, -1
  018f374  addi 3, 3, -5752
  018f378  stw 6, 220(1)
  018f37c  stw 6, 216(1)
  018f380  addic 4, 1, 208
  018f384  stw 6, 212(1)
  018f388  addic 5, 31, 16
  018f38c  stw 6, 208(1)
  018f390  li 8, 10
  018f394  lfs 1, 96(3)
  018f398  li 9, 3
  018f39c  lfs 2, 104(3)
  018f3a0  li 10, 16
  018f3a4  lfs 3, 8(3)
  018f3a8  fmr 4, 1
  018f3ac  lfs 5, 100(3)
  018f3b0  fmr 6, 2
  018f3b4  lfs 7, 108(3)
  018f3b8  std 6, 144(1)
  018f3bc  std 6, 160(1)
  018f3c0  ori 3, 31, 0
  018f3c4  std 6, 168(1)
  018f3c8  std 7, 176(1)
  018f3cc  std 6, 184(1)
  018f3d0  bl 0x10e030
  018f3d4  nop
  018f3d8  ori 3, 31, 0
  018f3dc  bl 0xefb38
  018f3e0  nop
  018f3e4  ld 0, 400(1)
  018f3e8  mtlr 0
  018f3ec  lfd 29, 360(1)
  018f3f0  lfd 30, 368(1)
  018f3f4  lfd 31, 376(1)
  018f3f8  ld 28, 328(1)
  018f3fc  ld 29, 336(1)
  018f400  ld 30, 344(1)
  018f404  ld 31, 352(1)
  018f408  addi 1, 1, 384
  018f40c  blr
