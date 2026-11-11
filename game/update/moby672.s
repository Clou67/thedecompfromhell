# game/update/moby672.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M672_0040dea4:   # 0x40dea4, 0x14 bytes
  040dea4  lis 3, 133
  040dea8  lis 4, 1
  040deac  addic 3, 3, 20852
  040deb0  stw 4, 72(3)
  040deb4  blr

M672_0040dec0:   # 0x40dec0, 0xe4 bytes
  040dec0  stdu 1, -192(1)
  040dec4  mflr 0
  040dec8  std 0, 208(1)
  040decc  std 30, 176(1)
  040ded0  std 31, 184(1)
  040ded4  lwz 30, 120(3)
  040ded8  ori 31, 4, 0
  040dedc  lwz 4, 208(30)
  040dee0  cmpwi 4, 0
  040dee4  bf 2, 0x40def4
  040dee8  lwz 4, 212(30)
  040deec  cmpwi 4, 0
  040def0  bt 2, 0x40df8c
  040def4  addic 5, 1, 112
  040def8  addic 4, 3, 64
  040defc  ori 3, 5, 0
  040df00  bl 0x500ca4
  040df04  nop
  040df08  lis 3, 65
  040df0c  lfs 1, 120(1)
  040df10  lfs 2, 112(1)
  040df14  addi 3, 3, -8520
  040df18  fmuls 5, 2, 1
  040df1c  lfs 3, 0(3)
  040df20  lfs 4, 116(1)
  040df24  fsubs 3, 1, 3
  040df28  fmuls 6, 4, 2
  040df2c  lfs 7, 208(30)
  040df30  lfs 8, 0(31)
  040df34  lfs 10, 4(31)
  040df38  lfs 11, 8(31)
  040df3c  fmuls 9, 3, 4
  040df40  fmsubs 6, 2, 4, 6
  040df44  fmsubs 3, 3, 2, 5
  040df48  fmsubs 9, 4, 1, 9
  040df4c  fmuls 5, 6, 4
  040df50  fmuls 12, 3, 2
  040df54  fmadds 10, 3, 7, 10
  040df58  fmadds 11, 6, 7, 11
  040df5c  fmadds 7, 9, 7, 8
  040df60  fmsubs 3, 3, 1, 5
  040df64  fmuls 1, 9, 1
  040df68  fmsubs 4, 9, 4, 12
  040df6c  lfs 5, 212(30)
  040df70  fmadds 3, 3, 5, 7
  040df74  fmsubs 1, 6, 2, 1
  040df78  fmadds 2, 4, 5, 11
  040df7c  fmadds 1, 1, 5, 10
  040df80  stfs 2, 8(31)
  040df84  stfs 3, 0(31)
  040df88  stfs 1, 4(31)
  040df8c  ld 0, 208(1)
  040df90  mtlr 0
  040df94  ld 30, 176(1)
  040df98  ld 31, 184(1)
  040df9c  addi 1, 1, 192
  040dfa0  blr

UpdateMoby_672:   # 0x40dfd8, 0x12c8 bytes
  040dfd8  stdu 1, -512(1)
  040dfdc  mflr 0
  040dfe0  std 0, 528(1)
  040dfe4  stfd 26, 464(1)
  040dfe8  stfd 27, 472(1)
  040dfec  stfd 28, 480(1)
  040dff0  stfd 29, 488(1)
  040dff4  stfd 30, 496(1)
  040dff8  stfd 31, 504(1)
  040dffc  std 30, 448(1)
  040e000  std 31, 456(1)
  040e004  lwz 30, 120(3)
  040e008  ori 31, 3, 0
  040e00c  std 29, 440(1)
  040e010  std 28, 432(1)
  040e014  std 27, 424(1)
  040e018  std 26, 416(1)
  040e01c  std 25, 408(1)
  040e020  cmpwi 30, 0
  040e024  bt 2, 0x40f25c
  040e028  lbz 3, 32(31)
  040e02c  cmpwi 3, 1
  040e030  cmpwi 1, 3, -1
  040e034  cmpwi 6, 3, 0
  040e038  cmpwi 7, 3, 2
  040e03c  bt 1, 0x40e04c
  040e040  bf 5, 0x40f034
  040e044  bf 25, 0x40e05c
  040e048  b 0x40e8c4
  040e04c  bf 29, 0x40e884
  040e050  cmpwi 3, 3
  040e054  bf 1, 0x40e89c
  040e058  b 0x40f034
  040e05c  lwz 3, 20(30)
  040e060  cmpwi 3, -1
  040e064  bf 2, 0x40e074
  040e068  li 3, 2
  040e06c  stb 3, 32(31)
  040e070  b 0x40f034
  040e074  lis 4, 165
  040e078  slwi 3, 3, 2
  040e07c  addic 4, 4, 7136
  040e080  extsw 3, 3
  040e084  lwzx 3, 4, 3
  040e088  lwz 4, 0(3)
  040e08c  lfs 1, 20(3)
  040e090  slwi 5, 4, 4
  040e094  lfs 2, 16(3)
  040e098  addc 5, 3, 5
  040e09c  clrldi 5, 5, 32
  040e0a0  lfs 3, 4(5)
  040e0a4  lfs 4, 0(5)
  040e0a8  fsubs 1, 1, 3
  040e0ac  fsubs 2, 2, 4
  040e0b0  lfs 3, 24(3)
  040e0b4  lfs 4, 8(5)
  040e0b8  fsubs 3, 3, 4
  040e0bc  lis 5, 65
  040e0c0  fmuls 1, 1, 1
  040e0c4  addi 5, 5, -8284
  040e0c8  fmadds 1, 2, 2, 1
  040e0cc  lfs 2, 0(5)
  040e0d0  fmadds 1, 3, 3, 1
  040e0d4  fsqrts 1, 1
  040e0d8  fcmpu 0, 1, 2
  040e0dc  cror 6, 1, 2
  040e0e0  bt 6, 0x40e0ec
  040e0e4  addic 4, 4, -1
  040e0e8  stw 4, 0(3)
  040e0ec  ori 3, 30, 0
  040e0f0  bl 0x136724
  040e0f4  nop
  040e0f8  lbz 3, 5(30)
  040e0fc  lwz 4, 16(30)
  040e100  cmpwi 3, 0
  040e104  lwz 6, 0(30)
  040e108  ori 5, 4, 0
  040e10c  bf 2, 0x40e39c
  040e110  cmpwi 6, 0
  040e114  bt 1, 0x40e16c
  040e118  lis 5, 65
  040e11c  addic 3, 31, 16
  040e120  addi 5, 5, -8284
  040e124  lfs 1, 4(5)
  040e128  bl 0x1367d0
  040e12c  nop
  040e130  lbz 5, 4(30)
  040e134  li 4, 0
  040e138  stw 3, 0(30)
  040e13c  extsb 7, 5
  040e140  ori 6, 3, 0
  040e144  cmpwi 7, 0
  040e148  lwz 5, 16(30)
  040e14c  ori 3, 4, 0
  040e150  bt 0, 0x40e15c
  040e154  lwz 4, 0(5)
  040e158  addic 4, 4, -1
  040e15c  cmpw 6, 4
  040e160  bf 2, 0x40e16c
  040e164  ori 6, 3, 0
  040e168  stw 3, 0(30)
  040e16c  slwi 3, 6, 4
  040e170  lfs 1, 20(31)
  040e174  lfs 2, 16(31)
  040e178  addc 3, 5, 3
  040e17c  clrldi 3, 3, 32
  040e180  lfs 3, 20(3)
  040e184  lfs 4, 16(3)
  040e188  fsubs 1, 1, 3
  040e18c  fsubs 2, 2, 4
  040e190  lfs 3, 24(31)
  040e194  lfs 4, 24(3)
  040e198  fsubs 3, 3, 4
  040e19c  sldi 3, 6, 4
  040e1a0  fmuls 1, 1, 1
  040e1a4  addc 3, 5, 3
  040e1a8  clrldi 3, 3, 32
  040e1ac  lis 4, 65
  040e1b0  lis 8, 115
  040e1b4  fmadds 1, 2, 2, 1
  040e1b8  addi 7, 4, -8284
  040e1bc  ori 4, 5, 0
  040e1c0  addic 5, 8, 22784
  040e1c4  fmadds 1, 3, 3, 1
  040e1c8  fsqrts 1, 1
  040e1cc  stfs 1, 12(30)
  040e1d0  lfs 1, 16(3)
  040e1d4  lfs 2, 16(31)
  040e1d8  lfs 3, 20(3)
  040e1dc  fsubs 1, 1, 2
  040e1e0  lfs 2, 20(31)
  040e1e4  fsubs 2, 3, 2
  040e1e8  fabs 3, 1
  040e1ec  stfs 1, 212(1)
  040e1f0  fabs 5, 2
  040e1f4  stfs 2, 216(1)
  040e1f8  fsubs 1, 3, 5
  040e1fc  stfs 1, 220(1)
  040e200  lwz 3, 212(1)
  040e204  lfs 4, 4(7)
  040e208  lfs 1, 212(1)
  040e20c  lwz 7, 216(1)
  040e210  lfs 2, 216(1)
  040e214  lwz 8, 220(1)
  040e218  rlwinm 7, 7, 3, 29, 29
  040e21c  fabs 6, 2
  040e220  lfs 2, 220(1)
  040e224  fabs 1, 1
  040e228  rlwimi 7, 8, 2, 30, 30
  040e22c  fsub 7, 2, 4
  040e230  rlwimi 7, 3, 4, 28, 28
  040e234  fsub 8, 2, 4
  040e238  ori 3, 5, 0
  040e23c  rlwimi 3, 7, 2, 26, 28
  040e240  slwi 7, 7, 2
  040e244  clrldi 3, 3, 32
  040e248  fsel 5, 7, 1, 5
  040e24c  lfsx 1, 5, 7
  040e250  lfs 2, 4(3)
  040e254  fsel 3, 8, 6, 3
  040e258  fcmpu 0, 5, 4
  040e25c  bt 1, 0x40e264
  040e260  b 0x40e384
  040e264  fsubs 6, 3, 5
  040e268  fadds 3, 3, 5
  040e26c  addic 3, 1, 16
  040e270  li 9, 2
  040e274  addic 5, 3, 336
  040e278  addic 7, 3, 352
  040e27c  mtctr 9
  040e280  fdivs 3, 6, 3
  040e284  fmuls 5, 3, 3
  040e288  stfs 3, 364(1)
  040e28c  stfs 3, 356(1)
  040e290  stfs 3, 360(1)
  040e294  stfs 3, 352(1)
  040e298  lfs 7, 364(1)
  040e29c  lfs 8, 356(1)
  040e2a0  lfs 9, 360(1)
  040e2a4  fmuls 6, 5, 5
  040e2a8  fmuls 8, 8, 5
  040e2ac  fmuls 7, 7, 6
  040e2b0  fmuls 3, 6, 6
  040e2b4  fmuls 6, 9, 6
  040e2b8  stfs 8, 356(1)
  040e2bc  fmuls 5, 7, 5
  040e2c0  stfs 6, 360(1)
  040e2c4  stfs 5, 364(1)
  040e2c8  lfs 5, 336(3)
  040e2cc  fmuls 5, 5, 3
  040e2d0  stfs 5, 352(3)
  040e2d4  lfs 5, 4(5)
  040e2d8  addic 3, 3, 8
  040e2dc  addic 5, 5, 8
  040e2e0  fmuls 5, 5, 3
  040e2e4  stfs 5, 4(7)
  040e2e8  addic 7, 7, 8
  040e2ec  bdnz 0x40e2c8
  040e2f0  li 7, 4
  040e2f4  ori 3, 1, 0
  040e2f8  mtctr 7
  040e2fc  lis 5, 115
  040e300  addic 7, 3, 352
  040e304  addic 5, 5, 22752
  040e308  ori 8, 7, 0
  040e30c  lfs 3, 352(3)
  040e310  lfs 5, 0(5)
  040e314  fmuls 3, 3, 5
  040e318  lfs 5, 4(5)
  040e31c  addic 5, 5, 8
  040e320  stfs 3, 352(3)
  040e324  lfs 3, 4(7)
  040e328  addic 3, 3, 8
  040e32c  fmuls 3, 3, 5
  040e330  stfs 3, 4(7)
  040e334  addic 7, 7, 8
  040e338  bdnz 0x40e30c
  040e33c  ori 3, 1, 0
  040e340  mtctr 9
  040e344  lfs 3, 352(3)
  040e348  fadds 3, 4, 3
  040e34c  lfs 4, 4(8)
  040e350  addic 3, 3, 16
  040e354  lfs 5, 8(8)
  040e358  lfs 6, 12(8)
  040e35c  addic 8, 8, 16
  040e360  fadds 3, 3, 4
  040e364  fadds 4, 3, 5
  040e368  fadds 4, 4, 6
  040e36c  bdnz 0x40e344
  040e370  lis 3, 65
  040e374  addi 3, 3, -8284
  040e378  lfs 3, 8(3)
  040e37c  fadds 4, 4, 3
  040e380  fmadds 4, 4, 1, 2
  040e384  li 3, 0
  040e388  stfs 4, 24(30)
  040e38c  li 5, 2
  040e390  stw 3, 8(30)
  040e394  stw 3, 28(30)
  040e398  stb 5, 5(30)
  040e39c  slwi 3, 6, 4
  040e3a0  lfs 1, 148(30)
  040e3a4  lis 6, 16256
  040e3a8  addc 3, 4, 3
  040e3ac  ori 4, 30, 0
  040e3b0  clrldi 5, 3, 32
  040e3b4  addic 3, 30, 64
  040e3b8  li 7, 0
  040e3bc  lfs 2, 16(5)
  040e3c0  stfs 2, 128(30)
  040e3c4  lfs 2, 20(5)
  040e3c8  stfs 2, 132(30)
  040e3cc  lfs 2, 24(5)
  040e3d0  lfs 3, 152(30)
  040e3d4  stfs 2, 136(30)
  040e3d8  lfs 2, 28(5)
  040e3dc  stw 6, 144(30)
  040e3e0  stfs 2, 140(30)
  040e3e4  fmr 2, 3
  040e3e8  bl 0x139fc0
  040e3ec  nop
  040e3f0  lwz 3, 0(30)
  040e3f4  lwz 4, 16(30)
  040e3f8  li 5, 0
  040e3fc  slwi 3, 3, 4
  040e400  addc 3, 4, 3
  040e404  lis 4, 65
  040e408  clrldi 3, 3, 32
  040e40c  addi 4, 4, -8284
  040e410  lfs 1, 16(3)
  040e414  stfs 1, 96(30)
  040e418  lfs 2, 20(3)
  040e41c  stfs 2, 100(30)
  040e420  lfs 3, 24(3)
  040e424  stfs 3, 104(30)
  040e428  lfs 4, 28(3)
  040e42c  stfs 1, 80(30)
  040e430  stfs 4, 108(30)
  040e434  stfs 2, 84(30)
  040e438  stfs 3, 88(30)
  040e43c  stfs 4, 92(30)
  040e440  lfs 3, 4(4)
  040e444  stw 5, 64(31)
  040e448  lfs 1, 68(30)
  040e44c  lfs 2, 64(30)
  040e450  fmuls 1, 1, 1
  040e454  lwz 3, 72(30)
  040e458  lis 4, 115
  040e45c  rlwinm 3, 3, 3, 29, 29
  040e460  addic 4, 4, 22784
  040e464  fmadds 1, 2, 2, 1
  040e468  lfs 2, 72(30)
  040e46c  fabs 4, 2
  040e470  fsqrts 1, 1
  040e474  fabs 6, 1
  040e478  stfs 1, 204(1)
  040e47c  fsubs 1, 6, 4
  040e480  stfs 1, 208(1)
  040e484  lwz 5, 204(1)
  040e488  lfs 1, 204(1)
  040e48c  lwz 6, 208(1)
  040e490  fabs 5, 1
  040e494  lfs 1, 208(1)
  040e498  rlwimi 3, 6, 2, 30, 30
  040e49c  fsub 2, 1, 3
  040e4a0  rlwimi 3, 5, 4, 28, 28
  040e4a4  fsub 7, 1, 3
  040e4a8  ori 5, 4, 0
  040e4ac  rlwimi 5, 3, 2, 26, 28
  040e4b0  slwi 3, 3, 2
  040e4b4  clrldi 5, 5, 32
  040e4b8  lfsx 1, 4, 3
  040e4bc  fsel 5, 2, 5, 4
  040e4c0  lfs 2, 4(5)
  040e4c4  fsel 4, 7, 4, 6
  040e4c8  fcmpu 0, 5, 3
  040e4cc  bt 1, 0x40e4d8
  040e4d0  fmr 1, 3
  040e4d4  b 0x40e5fc
  040e4d8  fsubs 6, 4, 5
  040e4dc  fadds 4, 4, 5
  040e4e0  addic 3, 1, 16
  040e4e4  li 8, 2
  040e4e8  addic 6, 3, 320
  040e4ec  addic 5, 3, 304
  040e4f0  mtctr 8
  040e4f4  fdivs 4, 6, 4
  040e4f8  fmuls 5, 4, 4
  040e4fc  stfs 4, 332(1)
  040e500  stfs 4, 324(1)
  040e504  stfs 4, 328(1)
  040e508  stfs 4, 320(1)
  040e50c  lfs 7, 332(1)
  040e510  lfs 8, 324(1)
  040e514  lfs 9, 328(1)
  040e518  fmuls 6, 5, 5
  040e51c  fmuls 8, 8, 5
  040e520  fmuls 7, 7, 6
  040e524  fmuls 4, 6, 6
  040e528  fmuls 6, 9, 6
  040e52c  stfs 8, 324(1)
  040e530  fmuls 5, 7, 5
  040e534  stfs 6, 328(1)
  040e538  stfs 5, 332(1)
  040e53c  lfs 5, 304(3)
  040e540  fmuls 5, 5, 4
  040e544  stfs 5, 320(3)
  040e548  lfs 5, 4(5)
  040e54c  addic 5, 5, 8
  040e550  fmuls 5, 5, 4
  040e554  addic 3, 3, 8
  040e558  stfs 5, 4(6)
  040e55c  addic 6, 6, 8
  040e560  bdnz 0x40e53c
  040e564  li 6, 4
  040e568  ori 3, 1, 0
  040e56c  mtctr 6
  040e570  lis 5, 115
  040e574  addic 6, 3, 320
  040e578  addic 5, 5, 22752
  040e57c  ori 7, 6, 0
  040e580  lfs 4, 320(3)
  040e584  lfs 5, 0(5)
  040e588  fmuls 4, 4, 5
  040e58c  lfs 5, 4(5)
  040e590  addic 5, 5, 8
  040e594  stfs 4, 320(3)
  040e598  lfs 4, 4(6)
  040e59c  addic 3, 3, 8
  040e5a0  fmuls 4, 4, 5
  040e5a4  stfs 4, 4(6)
  040e5a8  addic 6, 6, 8
  040e5ac  bdnz 0x40e580
  040e5b0  ori 3, 1, 0
  040e5b4  fmr 4, 3
  040e5b8  mtctr 8
  040e5bc  lfs 5, 320(3)
  040e5c0  fadds 4, 4, 5
  040e5c4  lfs 5, 4(7)
  040e5c8  addic 3, 3, 16
  040e5cc  lfs 6, 8(7)
  040e5d0  lfs 7, 12(7)
  040e5d4  addic 7, 7, 16
  040e5d8  fadds 4, 4, 5
  040e5dc  fadds 4, 4, 6
  040e5e0  fadds 4, 4, 7
  040e5e4  bdnz 0x40e5bc
  040e5e8  lis 3, 65
  040e5ec  addi 3, 3, -8284
  040e5f0  lfs 5, 8(3)
  040e5f4  fadds 4, 4, 5
  040e5f8  fmadds 1, 4, 1, 2
  040e5fc  fneg 1, 1
  040e600  stfs 1, 68(31)
  040e604  lwz 3, 64(30)
  040e608  lwz 5, 68(30)
  040e60c  lfs 1, 64(30)
  040e610  lfs 2, 68(30)
  040e614  fabs 4, 1
  040e618  fabs 6, 2
  040e61c  rlwinm 5, 5, 3, 29, 29
  040e620  fsubs 1, 4, 6
  040e624  stfs 1, 200(1)
  040e628  lwz 6, 200(1)
  040e62c  lfs 1, 200(1)
  040e630  rlwimi 5, 6, 2, 30, 30
  040e634  fsub 5, 1, 3
  040e638  fsub 7, 1, 3
  040e63c  rlwimi 5, 3, 4, 28, 28
  040e640  ori 3, 4, 0
  040e644  rlwimi 3, 5, 2, 26, 28
  040e648  slwi 5, 5, 2
  040e64c  clrldi 3, 3, 32
  040e650  fsel 5, 5, 4, 6
  040e654  lfsx 1, 4, 5
  040e658  fsel 4, 7, 6, 4
  040e65c  lfs 2, 4(3)
  040e660  fcmpu 0, 5, 3
  040e664  bt 1, 0x40e670
  040e668  fmr 1, 3
  040e66c  b 0x40e790
  040e670  fsubs 6, 4, 5
  040e674  fadds 4, 4, 5
  040e678  addic 3, 1, 16
  040e67c  li 7, 2
  040e680  addic 5, 3, 288
  040e684  addic 4, 3, 272
  040e688  mtctr 7
  040e68c  fdivs 4, 6, 4
  040e690  fmuls 5, 4, 4
  040e694  stfs 4, 300(1)
  040e698  stfs 4, 292(1)
  040e69c  stfs 4, 296(1)
  040e6a0  stfs 4, 288(1)
  040e6a4  lfs 7, 300(1)
  040e6a8  lfs 8, 292(1)
  040e6ac  lfs 9, 296(1)
  040e6b0  fmuls 6, 5, 5
  040e6b4  fmuls 8, 8, 5
  040e6b8  fmuls 7, 7, 6
  040e6bc  fmuls 4, 6, 6
  040e6c0  fmuls 6, 9, 6
  040e6c4  stfs 8, 292(1)
  040e6c8  fmuls 5, 7, 5
  040e6cc  stfs 6, 296(1)
  040e6d0  stfs 5, 300(1)
  040e6d4  lfs 5, 272(3)
  040e6d8  fmuls 5, 5, 4
  040e6dc  stfs 5, 288(3)
  040e6e0  lfs 5, 4(4)
  040e6e4  addic 4, 4, 8
  040e6e8  fmuls 5, 5, 4
  040e6ec  addic 3, 3, 8
  040e6f0  stfs 5, 4(5)
  040e6f4  addic 5, 5, 8
  040e6f8  bdnz 0x40e6d4
  040e6fc  li 5, 4
  040e700  ori 3, 1, 0
  040e704  mtctr 5
  040e708  lis 4, 115
  040e70c  addic 5, 3, 288
  040e710  addic 4, 4, 22752
  040e714  ori 6, 5, 0
  040e718  lfs 4, 288(3)
  040e71c  lfs 5, 0(4)
  040e720  fmuls 4, 4, 5
  040e724  lfs 5, 4(4)
  040e728  addic 4, 4, 8
  040e72c  stfs 4, 288(3)
  040e730  lfs 4, 4(5)
  040e734  addic 3, 3, 8
  040e738  fmuls 4, 4, 5
  040e73c  stfs 4, 4(5)
  040e740  addic 5, 5, 8
  040e744  bdnz 0x40e718
  040e748  ori 3, 1, 0
  040e74c  mtctr 7
  040e750  lfs 4, 288(3)
  040e754  fadds 3, 3, 4
  040e758  addic 3, 3, 16
  040e75c  lfs 4, 4(6)
  040e760  lfs 5, 8(6)
  040e764  lfs 6, 12(6)
  040e768  addic 6, 6, 16
  040e76c  fadds 3, 3, 4
  040e770  fadds 3, 3, 5
  040e774  fadds 3, 3, 6
  040e778  bdnz 0x40e750
  040e77c  lis 3, 65
  040e780  addi 3, 3, -8284
  040e784  lfs 4, 8(3)
  040e788  fadds 3, 3, 4
  040e78c  fmadds 1, 3, 1, 2
  040e790  li 5, 0
  040e794  stfs 1, 72(31)
  040e798  ori 3, 31, 0
  040e79c  addic 4, 31, 16
  040e7a0  stw 5, 164(30)
  040e7a4  lfs 1, 128(30)
  040e7a8  stw 5, 172(30)
  040e7ac  stfs 1, 16(31)
  040e7b0  lfs 1, 132(30)
  040e7b4  stfs 1, 20(31)
  040e7b8  lfs 1, 136(30)
  040e7bc  stfs 1, 24(31)
  040e7c0  lfs 1, 140(30)
  040e7c4  stfs 1, 28(31)
  040e7c8  bl 0x40dec0
  040e7cc  lwz 3, 204(30)
  040e7d0  lfs 1, 204(30)
  040e7d4  lis 5, 16585
  040e7d8  srawi 4, 3, 31
  040e7dc  lfs 2, 96(30)
  040e7e0  lfs 3, 100(30)
  040e7e4  ori 5, 5, 4059
  040e7e8  srwi 6, 4, 1
  040e7ec  lfs 4, 104(30)
  040e7f0  lfs 5, 108(30)
  040e7f4  xor 3, 6, 3
  040e7f8  lfs 6, 148(30)
  040e7fc  subc 3, 3, 4
  040e800  lfs 7, 152(30)
  040e804  cmpw 3, 5
  040e808  lbz 3, 192(30)
  040e80c  bf 1, 0x40e824
  040e810  lis 4, 65
  040e814  addi 4, 4, -8284
  040e818  lfs 8, 12(4)
  040e81c  fmuls 1, 1, 8
  040e820  stfs 1, 204(30)
  040e824  fmr 8, 2
  040e828  rlwinm 6, 3, 0, 26, 26
  040e82c  fmr 1, 6
  040e830  ori 3, 30, 0
  040e834  fmr 2, 7
  040e838  ori 7, 31, 0
  040e83c  stfs 8, 112(30)
  040e840  stfs 3, 116(30)
  040e844  stfs 4, 120(30)
  040e848  stfs 5, 124(30)
  040e84c  bl 0x13a440
  040e850  nop
  040e854  lwz 3, 188(30)
  040e858  li 4, 0
  040e85c  extsw 3, 3
  040e860  li 5, 3
  040e864  subc 3, 4, 3
  040e868  li 4, 1
  040e86c  sradi 3, 3, 63
  040e870  subc 5, 5, 4
  040e874  and 3, 3, 5
  040e878  addc 3, 4, 3
  040e87c  stb 3, 32(31)
  040e880  b 0x40f034
  040e884  lwz 3, 20(30)
  040e888  cmpwi 3, -1
  040e88c  bt 2, 0x40f034
  040e890  li 3, 0
  040e894  stb 3, 32(31)
  040e898  b 0x40f034
  040e89c  addic 3, 30, 188
  040e8a0  bl 0x4fff60
  040e8a4  nop
  040e8a8  cmpwi 3, 0
  040e8ac  bt 2, 0x40f034
  040e8b0  li 3, 0
  040e8b4  li 4, 1
  040e8b8  stw 3, 188(30)
  040e8bc  stb 4, 32(31)
  040e8c0  b 0x40f034
  040e8c4  lis 3, 65
  040e8c8  lwz 5, 144(30)
  040e8cc  lis 4, 16256
  040e8d0  addi 3, 3, -8284
  040e8d4  lfs 1, 144(30)
  040e8d8  srawi 6, 5, 31
  040e8dc  srwi 7, 6, 1
  040e8e0  lfs 29, 16(3)
  040e8e4  xor 3, 7, 5
  040e8e8  subc 3, 3, 6
  040e8ec  cmpw 3, 4
  040e8f0  bt 0, 0x40e9ac
  040e8f4  fsubs 1, 1, 29
  040e8f8  ori 3, 30, 0
  040e8fc  stfs 1, 144(30)
  040e900  bl 0x139f58
  040e904  nop
  040e908  lfs 1, 64(30)
  040e90c  ori 29, 3, 0
  040e910  lfs 2, 68(30)
  040e914  addic 3, 30, 64
  040e918  stfs 1, 48(30)
  040e91c  ori 4, 30, 0
  040e920  lfs 1, 72(30)
  040e924  li 7, 1
  040e928  stfs 2, 52(30)
  040e92c  lfs 2, 76(30)
  040e930  stfs 1, 56(30)
  040e934  lfs 1, 148(30)
  040e938  stfs 2, 60(30)
  040e93c  lfs 2, 152(30)
  040e940  bl 0x139fc0
  040e944  nop
  040e948  lfs 1, 96(30)
  040e94c  addic 4, 29, 1
  040e950  lfs 2, 100(30)
  040e954  ori 3, 30, 0
  040e958  stfs 1, 80(30)
  040e95c  extsw 4, 4
  040e960  lfs 1, 104(30)
  040e964  stfs 2, 84(30)
  040e968  lfs 2, 108(30)
  040e96c  stfs 1, 88(30)
  040e970  stfs 2, 92(30)
  040e974  bl 0x139ef8
  040e978  nop
  040e97c  sldi 3, 3, 4
  040e980  lwz 4, 16(30)
  040e984  addc 3, 4, 3
  040e988  clrldi 3, 3, 32
  040e98c  lfs 1, 16(3)
  040e990  stfs 1, 96(30)
  040e994  lfs 1, 20(3)
  040e998  stfs 1, 100(30)
  040e99c  lfs 1, 24(3)
  040e9a0  stfs 1, 104(30)
  040e9a4  lfs 1, 28(3)
  040e9a8  stfs 1, 108(30)
  040e9ac  lis 3, 65
  040e9b0  lfs 1, 204(30)
  040e9b4  addi 3, 3, -8284
  040e9b8  lis 4, 114
  040e9bc  lfs 2, 20(3)
  040e9c0  lfs 3, 24(3)
  040e9c4  fsubs 2, 2, 1
  040e9c8  fsubs 3, 3, 1
  040e9cc  lfs 5, 28(3)
  040e9d0  fsub 4, 1, 2
  040e9d4  fsel 2, 4, 2, 1
  040e9d8  lfs 4, 32(3)
  040e9dc  fsub 6, 3, 2
  040e9e0  fsel 2, 6, 3, 2
  040e9e4  lfs 3, 36(3)
  040e9e8  lfs 6, -3064(4)
  040e9ec  lfs 7, 40(3)
  040e9f0  lfs 30, 156(30)
  040e9f4  lfs 9, 196(30)
  040e9f8  lfs 31, 92(30)
  040e9fc  fmuls 9, 9, 6
  040ea00  fmuls 8, 2, 2
  040ea04  fmuls 10, 8, 2
  040ea08  fmuls 11, 8, 10
  040ea0c  fmadds 2, 10, 5, 2
  040ea10  fmuls 5, 8, 11
  040ea14  fmadds 2, 11, 4, 2
  040ea18  fmuls 4, 8, 5
  040ea1c  fmadds 2, 5, 3, 2
  040ea20  fmadds 2, 4, 7, 2
  040ea24  fmuls 2, 9, 2
  040ea28  fmadds 30, 30, 6, 2
  040ea2c  lfs 2, 200(30)
  040ea30  lfs 28, 12(3)
  040ea34  fmuls 2, 2, 6
  040ea38  fdivs 31, 30, 31
  040ea3c  fmuls 2, 2, 28
  040ea40  bl 0x502578
  040ea44  nop
  040ea48  lfs 2, 112(30)
  040ea4c  addic 29, 30, 112
  040ea50  stfs 1, 204(30)
  040ea54  addic 28, 30, 80
  040ea58  lfs 1, 116(30)
  040ea5c  addic 27, 30, 96
  040ea60  stfs 2, 128(30)
  040ea64  addic 26, 30, 48
  040ea68  lfs 2, 120(30)
  040ea6c  addic 25, 30, 64
  040ea70  stfs 1, 132(30)
  040ea74  ori 3, 29, 0
  040ea78  lfs 1, 124(30)
  040ea7c  ori 4, 28, 0
  040ea80  stfs 2, 136(30)
  040ea84  ori 5, 27, 0
  040ea88  stfs 1, 140(30)
  040ea8c  ori 6, 26, 0
  040ea90  lfs 1, 144(30)
  040ea94  ori 7, 25, 0
  040ea98  fadds 1, 1, 31
  040ea9c  bl 0x13a290
  040eaa0  nop
  040eaa4  lbz 3, 192(30)
  040eaa8  rlwinm 3, 3, 0, 25, 25
  040eaac  cmpwi 3, 0
  040eab0  bf 2, 0x40eb14
  040eab4  lfs 1, 132(30)
  040eab8  lfs 2, 116(30)
  040eabc  lfs 3, 128(30)
  040eac0  fsubs 1, 1, 2
  040eac4  lfs 2, 112(30)
  040eac8  fsubs 2, 3, 2
  040eacc  lfs 3, 136(30)
  040ead0  lfs 4, 120(30)
  040ead4  fsubs 3, 3, 4
  040ead8  fmuls 1, 1, 1
  040eadc  ori 3, 29, 0
  040eae0  ori 4, 28, 0
  040eae4  ori 5, 27, 0
  040eae8  ori 6, 26, 0
  040eaec  ori 7, 25, 0
  040eaf0  fmadds 1, 2, 2, 1
  040eaf4  lfs 2, 144(30)
  040eaf8  fmadds 1, 3, 3, 1
  040eafc  fsqrts 1, 1
  040eb00  fdivs 1, 30, 1
  040eb04  fmuls 31, 31, 1
  040eb08  fadds 1, 2, 31
  040eb0c  bl 0x13a290
  040eb10  nop
  040eb14  lhz 3, 194(30)
  040eb18  extsh 3, 3
  040eb1c  extsw 3, 3
  040eb20  std 3, 384(1)
  040eb24  lfs 1, 72(31)
  040eb28  lfd 2, 384(1)
  040eb2c  fcfid 2, 2
  040eb30  frsp 30, 2
  040eb34  fmuls 30, 30, 28
  040eb38  fmr 2, 30
  040eb3c  bl 0x5025e0
  040eb40  nop
  040eb44  lfs 1, 112(30)
  040eb48  lfs 2, 128(30)
  040eb4c  lfs 3, 116(30)
  040eb50  lfs 4, 132(30)
  040eb54  fsubs 1, 1, 2
  040eb58  lis 3, 65
  040eb5c  fsubs 2, 3, 4
  040eb60  addi 3, 3, -8284
  040eb64  lis 29, 115
  040eb68  addic 29, 29, 22784
  040eb6c  fabs 3, 1
  040eb70  fabs 4, 2
  040eb74  stfs 1, 188(1)
  040eb78  stfs 2, 192(1)
  040eb7c  fsubs 1, 3, 4
  040eb80  stfs 1, 196(1)
  040eb84  lwz 4, 188(1)
  040eb88  lfs 27, 4(3)
  040eb8c  lfs 1, 188(1)
  040eb90  lwz 3, 192(1)
  040eb94  lfs 2, 192(1)
  040eb98  lwz 5, 196(1)
  040eb9c  rlwinm 3, 3, 3, 29, 29
  040eba0  fabs 5, 2
  040eba4  lfs 2, 196(1)
  040eba8  fabs 1, 1
  040ebac  rlwimi 3, 5, 2, 30, 30
  040ebb0  fsub 6, 2, 27
  040ebb4  rlwimi 3, 4, 4, 28, 28
  040ebb8  fsub 7, 2, 27
  040ebbc  ori 4, 29, 0
  040ebc0  rlwimi 4, 3, 2, 26, 28
  040ebc4  slwi 3, 3, 2
  040ebc8  clrldi 4, 4, 32
  040ebcc  fsel 4, 6, 1, 4
  040ebd0  lfsx 1, 29, 3
  040ebd4  lfs 2, 4(4)
  040ebd8  fsel 3, 7, 5, 3
  040ebdc  fcmpu 0, 4, 27
  040ebe0  bt 1, 0x40ebec
  040ebe4  fmr 1, 27
  040ebe8  b 0x40ed10
  040ebec  fsubs 5, 3, 4
  040ebf0  fadds 3, 3, 4
  040ebf4  addic 3, 1, 16
  040ebf8  li 7, 2
  040ebfc  addic 5, 3, 256
  040ec00  addic 4, 3, 240
  040ec04  mtctr 7
  040ec08  fdivs 3, 5, 3
  040ec0c  fmuls 4, 3, 3
  040ec10  stfs 3, 268(1)
  040ec14  stfs 3, 260(1)
  040ec18  stfs 3, 264(1)
  040ec1c  stfs 3, 256(1)
  040ec20  lfs 6, 268(1)
  040ec24  lfs 7, 260(1)
  040ec28  lfs 8, 264(1)
  040ec2c  fmuls 5, 4, 4
  040ec30  fmuls 7, 7, 4
  040ec34  fmuls 6, 6, 5
  040ec38  fmuls 3, 5, 5
  040ec3c  fmuls 5, 8, 5
  040ec40  stfs 7, 260(1)
  040ec44  fmuls 4, 6, 4
  040ec48  stfs 5, 264(1)
  040ec4c  stfs 4, 268(1)
  040ec50  lfs 4, 240(3)
  040ec54  fmuls 4, 4, 3
  040ec58  stfs 4, 256(3)
  040ec5c  lfs 4, 4(4)
  040ec60  addic 4, 4, 8
  040ec64  fmuls 4, 4, 3
  040ec68  addic 3, 3, 8
  040ec6c  stfs 4, 4(5)
  040ec70  addic 5, 5, 8
  040ec74  bdnz 0x40ec50
  040ec78  li 5, 4
  040ec7c  ori 3, 1, 0
  040ec80  mtctr 5
  040ec84  lis 4, 115
  040ec88  addic 5, 3, 256
  040ec8c  addic 4, 4, 22752
  040ec90  ori 6, 5, 0
  040ec94  lfs 3, 256(3)
  040ec98  lfs 4, 0(4)
  040ec9c  fmuls 3, 3, 4
  040eca0  lfs 4, 4(4)
  040eca4  addic 4, 4, 8
  040eca8  stfs 3, 256(3)
  040ecac  lfs 3, 4(5)
  040ecb0  addic 3, 3, 8
  040ecb4  fmuls 3, 3, 4
  040ecb8  stfs 3, 4(5)
  040ecbc  addic 5, 5, 8
  040ecc0  bdnz 0x40ec94
  040ecc4  ori 3, 1, 0
  040ecc8  fmr 3, 27
  040eccc  mtctr 7
  040ecd0  lfs 4, 256(3)
  040ecd4  fadds 3, 3, 4
  040ecd8  lfs 4, 4(6)
  040ecdc  addic 3, 3, 16
  040ece0  lfs 5, 8(6)
  040ece4  lfs 6, 12(6)
  040ece8  addic 6, 6, 16
  040ecec  fadds 3, 3, 4
  040ecf0  fadds 3, 3, 5
  040ecf4  fadds 3, 3, 6
  040ecf8  bdnz 0x40ecd0
  040ecfc  lis 3, 65
  040ed00  addi 3, 3, -8284
  040ed04  lfs 4, 8(3)
  040ed08  fadds 3, 3, 4
  040ed0c  fmadds 1, 3, 1, 2
  040ed10  fmr 2, 30
  040ed14  bl 0x502578
  040ed18  nop
  040ed1c  lfs 2, 72(31)
  040ed20  bl 0x5025e0
  040ed24  nop
  040ed28  lfs 2, 176(30)
  040ed2c  fdivs 3, 29, 2
  040ed30  lis 3, 114
  040ed34  lfs 2, 72(31)
  040ed38  lfs 4, -3064(3)
  040ed3c  fmuls 30, 3, 4
  040ed40  fmuls 30, 30, 1
  040ed44  fmr 1, 30
  040ed48  bl 0x502578
  040ed4c  nop
  040ed50  stfs 1, 72(31)
  040ed54  lfs 1, 116(30)
  040ed58  lfs 2, 132(30)
  040ed5c  lfs 3, 112(30)
  040ed60  fsubs 1, 1, 2
  040ed64  lfs 2, 128(30)
  040ed68  fsubs 2, 3, 2
  040ed6c  fmuls 1, 1, 1
  040ed70  fmadds 1, 2, 2, 1
  040ed74  lfs 2, 120(30)
  040ed78  lfs 3, 136(30)
  040ed7c  lfs 4, 68(31)
  040ed80  fsubs 2, 2, 3
  040ed84  fsqrts 1, 1
  040ed88  stfs 2, 180(1)
  040ed8c  fabs 6, 2
  040ed90  fabs 5, 1
  040ed94  stfs 1, 176(1)
  040ed98  lwz 3, 180(1)
  040ed9c  lfs 2, 180(1)
  040eda0  rlwinm 3, 3, 3, 29, 29
  040eda4  fabs 2, 2
  040eda8  fsubs 1, 5, 6
  040edac  stfs 1, 184(1)
  040edb0  lwz 4, 176(1)
  040edb4  lfs 1, 176(1)
  040edb8  lfs 3, 168(30)
  040edbc  lwz 5, 184(1)
  040edc0  lfs 7, 184(1)
  040edc4  fabs 1, 1
  040edc8  rlwimi 3, 5, 2, 30, 30
  040edcc  fsub 8, 7, 27
  040edd0  fsub 7, 7, 27
  040edd4  rlwimi 3, 4, 4, 28, 28
  040edd8  ori 4, 29, 0
  040eddc  rlwimi 4, 3, 2, 26, 28
  040ede0  slwi 3, 3, 2
  040ede4  clrldi 4, 4, 32
  040ede8  fsel 6, 8, 1, 6
  040edec  lfsx 1, 29, 3
  040edf0  fsel 5, 7, 2, 5
  040edf4  lfs 2, 4(4)
  040edf8  fcmpu 0, 6, 27
  040edfc  bt 1, 0x40ee04
  040ee00  b 0x40ef24
  040ee04  fsubs 7, 5, 6
  040ee08  fadds 5, 5, 6
  040ee0c  addic 3, 1, 16
  040ee10  li 7, 2
  040ee14  addic 5, 3, 224
  040ee18  addic 4, 3, 208
  040ee1c  mtctr 7
  040ee20  fdivs 5, 7, 5
  040ee24  fmuls 6, 5, 5
  040ee28  stfs 5, 236(1)
  040ee2c  stfs 5, 228(1)
  040ee30  stfs 5, 232(1)
  040ee34  stfs 5, 224(1)
  040ee38  lfs 8, 236(1)
  040ee3c  lfs 9, 228(1)
  040ee40  lfs 10, 232(1)
  040ee44  fmuls 7, 6, 6
  040ee48  fmuls 9, 9, 6
  040ee4c  fmuls 8, 8, 7
  040ee50  fmuls 5, 7, 7
  040ee54  fmuls 7, 10, 7
  040ee58  stfs 9, 228(1)
  040ee5c  fmuls 6, 8, 6
  040ee60  stfs 7, 232(1)
  040ee64  stfs 6, 236(1)
  040ee68  lfs 6, 208(3)
  040ee6c  fmuls 6, 6, 5
  040ee70  stfs 6, 224(3)
  040ee74  lfs 6, 4(4)
  040ee78  addic 4, 4, 8
  040ee7c  fmuls 6, 6, 5
  040ee80  addic 3, 3, 8
  040ee84  stfs 6, 4(5)
  040ee88  addic 5, 5, 8
  040ee8c  bdnz 0x40ee68
  040ee90  li 5, 4
  040ee94  ori 3, 1, 0
  040ee98  mtctr 5
  040ee9c  lis 4, 115
  040eea0  addic 5, 3, 224
  040eea4  addic 4, 4, 22752
  040eea8  ori 6, 5, 0
  040eeac  lfs 5, 224(3)
  040eeb0  lfs 6, 0(4)
  040eeb4  fmuls 5, 5, 6
  040eeb8  lfs 6, 4(4)
  040eebc  addic 4, 4, 8
  040eec0  stfs 5, 224(3)
  040eec4  lfs 5, 4(5)
  040eec8  addic 3, 3, 8
  040eecc  fmuls 5, 5, 6
  040eed0  stfs 5, 4(5)
  040eed4  addic 5, 5, 8
  040eed8  bdnz 0x40eeac
  040eedc  ori 3, 1, 0
  040eee0  mtctr 7
  040eee4  lfs 5, 224(3)
  040eee8  lfs 6, 4(6)
  040eeec  fadds 5, 27, 5
  040eef0  lfs 7, 8(6)
  040eef4  addic 3, 3, 16
  040eef8  lfs 27, 12(6)
  040eefc  addic 6, 6, 16
  040ef00  fadds 5, 5, 6
  040ef04  fadds 5, 5, 7
  040ef08  fadds 27, 5, 27
  040ef0c  bdnz 0x40eee4
  040ef10  lis 3, 65
  040ef14  addi 3, 3, -8284
  040ef18  lfs 5, 8(3)
  040ef1c  fadds 27, 27, 5
  040ef20  fmadds 27, 27, 1, 2
  040ef24  lis 3, 65
  040ef28  fmuls 5, 3, 28
  040ef2c  lis 29, 114
  040ef30  addi 3, 3, -8284
  040ef34  fmr 1, 4
  040ef38  lis 28, 114
  040ef3c  fneg 2, 27
  040ef40  addic 5, 30, 172
  040ef44  lfs 29, 44(3)
  040ef48  lfs 26, 48(3)
  040ef4c  fmuls 7, 3, 29
  040ef50  fmuls 3, 3, 26
  040ef54  lfs 6, -3048(29)
  040ef58  lfs 8, -3052(28)
  040ef5c  fmuls 5, 5, 8
  040ef60  fmuls 4, 7, 28
  040ef64  fmuls 3, 3, 28
  040ef68  fmuls 4, 4, 6
  040ef6c  fmuls 6, 3, 6
  040ef70  fmr 3, 4
  040ef74  fmr 4, 6
  040ef78  bl 0xff190
  040ef7c  nop
  040ef80  stfs 1, 68(31)
  040ef84  lfs 1, 180(30)
  040ef88  fmuls 1, 30, 1
  040ef8c  bl 0x502648
  040ef90  nop
  040ef94  lfs 3, 64(31)
  040ef98  fmr 2, 1
  040ef9c  fmr 1, 3
  040efa0  bl 0x5025e0
  040efa4  nop
  040efa8  lfs 2, 184(30)
  040efac  fmuls 1, 1, 2
  040efb0  bl 0x502648
  040efb4  nop
  040efb8  lfs 2, 160(30)
  040efbc  addic 5, 30, 164
  040efc0  lfs 6, -3048(29)
  040efc4  fmuls 3, 2, 29
  040efc8  fmuls 4, 2, 26
  040efcc  lfs 7, -3052(28)
  040efd0  fmuls 5, 2, 28
  040efd4  fmr 2, 1
  040efd8  lfs 1, 64(31)
  040efdc  fmuls 3, 3, 28
  040efe0  fmuls 4, 4, 28
  040efe4  fmuls 5, 5, 7
  040efe8  fmuls 3, 3, 6
  040efec  fmuls 4, 4, 6
  040eff0  bl 0xff190
  040eff4  nop
  040eff8  stfs 1, 64(31)
  040effc  ori 3, 31, 0
  040f000  lfs 1, 144(30)
  040f004  addic 4, 31, 16
  040f008  lfs 2, 128(30)
  040f00c  fadds 1, 1, 31
  040f010  stfs 1, 144(30)
  040f014  stfs 2, 16(31)
  040f018  lfs 1, 132(30)
  040f01c  stfs 1, 20(31)
  040f020  lfs 1, 136(30)
  040f024  stfs 1, 24(31)
  040f028  lfs 1, 140(30)
  040f02c  stfs 1, 28(31)
  040f030  bl 0x40dec0
  040f034  addic 3, 1, 112
  040f038  addic 4, 31, 64
  040f03c  bl 0x500ca4
  040f040  nop
  040f044  lwz 29, 216(30)
  040f048  cmpwi 29, -1
  040f04c  bt 2, 0x40f150
  040f050  lis 3, 164
  040f054  slwi 4, 29, 8
  040f058  lwz 3, -28512(3)
  040f05c  addc 29, 3, 4
  040f060  clrldi 29, 29, 32
  040f064  cmpwi 29, 0
  040f068  bt 2, 0x40f080
  040f06c  lbz 3, 32(29)
  040f070  cmpwi 3, 254
  040f074  cmpwi 1, 3, 253
  040f078  bt 2, 0x40f080
  040f07c  bf 6, 0x40f08c
  040f080  li 3, -1
  040f084  stw 3, 216(30)
  040f088  b 0x40f150
  040f08c  lfs 1, 228(30)
  040f090  lfs 2, 128(1)
  040f094  lfs 3, 224(30)
  040f098  fmuls 2, 2, 1
  040f09c  lfs 4, 112(1)
  040f0a0  lfs 5, 232(30)
  040f0a4  lfs 6, 132(1)
  040f0a8  lfs 7, 144(1)
  040f0ac  fmuls 6, 6, 1
  040f0b0  lfs 8, 116(1)
  040f0b4  lfs 9, 136(1)
  040f0b8  fmuls 1, 9, 1
  040f0bc  fmadds 2, 4, 3, 2
  040f0c0  lfs 4, 148(1)
  040f0c4  lfs 9, 16(31)
  040f0c8  fmadds 6, 8, 3, 6
  040f0cc  lfs 8, 120(1)
  040f0d0  fmadds 1, 8, 3, 1
  040f0d4  lfs 3, 152(1)
  040f0d8  fmadds 2, 7, 5, 2
  040f0dc  lwz 3, 116(29)
  040f0e0  cmpwi 3, 0
  040f0e4  fmadds 4, 4, 5, 6
  040f0e8  fmadds 1, 3, 5, 1
  040f0ec  fadds 2, 9, 2
  040f0f0  stfs 2, 16(29)
  040f0f4  lfs 2, 20(31)
  040f0f8  fadds 2, 2, 4
  040f0fc  stfs 2, 20(29)
  040f100  lfs 2, 24(31)
  040f104  fadds 1, 2, 1
  040f108  stfs 1, 24(29)
  040f10c  lfs 1, 28(31)
  040f110  stfs 1, 28(29)
  040f114  lfs 1, 64(31)
  040f118  stfs 1, 64(29)
  040f11c  lfs 1, 68(31)
  040f120  stfs 1, 68(29)
  040f124  lfs 1, 72(31)
  040f128  stfs 1, 72(29)
  040f12c  lfs 1, 76(31)
  040f130  stfs 1, 76(29)
  040f134  bf 2, 0x40f150
  040f138  ori 3, 29, 0
  040f13c  bl 0xf31a8
  040f140  nop
  040f144  ori 3, 29, 0
  040f148  bl 0xf30a0
  040f14c  nop
  040f150  lwz 29, 220(30)
  040f154  cmpwi 29, -1
  040f158  bt 2, 0x40f25c
  040f15c  lis 3, 164
  040f160  slwi 4, 29, 8
  040f164  lwz 3, -28512(3)
  040f168  addc 29, 3, 4
  040f16c  clrldi 29, 29, 32
  040f170  cmpwi 29, 0
  040f174  bt 2, 0x40f18c
  040f178  lbz 3, 32(29)
  040f17c  cmpwi 3, 254
  040f180  cmpwi 1, 3, 253
  040f184  bt 2, 0x40f18c
  040f188  bf 6, 0x40f198
  040f18c  li 3, -1
  040f190  stw 3, 220(30)
  040f194  b 0x40f25c
  040f198  lfs 1, 244(30)
  040f19c  lfs 2, 128(1)
  040f1a0  lfs 3, 240(30)
  040f1a4  fmuls 2, 2, 1
  040f1a8  lfs 4, 112(1)
  040f1ac  lfs 5, 248(30)
  040f1b0  lfs 6, 132(1)
  040f1b4  lfs 7, 144(1)
  040f1b8  fmuls 6, 6, 1
  040f1bc  lfs 8, 116(1)
  040f1c0  lfs 9, 136(1)
  040f1c4  fmuls 1, 9, 1
  040f1c8  fmadds 2, 4, 3, 2
  040f1cc  lfs 4, 148(1)
  040f1d0  lfs 9, 16(31)
  040f1d4  fmadds 6, 8, 3, 6
  040f1d8  lfs 8, 120(1)
  040f1dc  lfs 10, 152(1)
  040f1e0  lwz 3, 116(29)
  040f1e4  fmadds 1, 8, 3, 1
  040f1e8  fmadds 2, 7, 5, 2
  040f1ec  cmpwi 3, 0
  040f1f0  fmadds 3, 4, 5, 6
  040f1f4  fmadds 1, 10, 5, 1
  040f1f8  fadds 2, 9, 2
  040f1fc  stfs 2, 16(29)
  040f200  lfs 2, 20(31)
  040f204  fadds 2, 2, 3
  040f208  stfs 2, 20(29)
  040f20c  lfs 2, 24(31)
  040f210  fadds 1, 2, 1
  040f214  stfs 1, 24(29)
  040f218  lfs 1, 28(31)
  040f21c  stfs 1, 28(29)
  040f220  lfs 1, 64(31)
  040f224  stfs 1, 64(29)
  040f228  lfs 1, 68(31)
  040f22c  stfs 1, 68(29)
  040f230  lfs 1, 72(31)
  040f234  stfs 1, 72(29)
  040f238  lfs 1, 76(31)
  040f23c  stfs 1, 76(29)
  040f240  bf 2, 0x40f25c
  040f244  ori 3, 29, 0
  040f248  bl 0xf31a8
  040f24c  nop
  040f250  ori 3, 29, 0
  040f254  bl 0xf30a0
  040f258  nop
  040f25c  ld 0, 528(1)
  040f260  mtlr 0
  040f264  lfd 26, 464(1)
  040f268  lfd 27, 472(1)
  040f26c  lfd 28, 480(1)
  040f270  lfd 29, 488(1)
  040f274  lfd 30, 496(1)
  040f278  lfd 31, 504(1)
  040f27c  ld 25, 408(1)
  040f280  ld 26, 416(1)
  040f284  ld 27, 424(1)
  040f288  ld 28, 432(1)
  040f28c  ld 29, 440(1)
  040f290  ld 30, 448(1)
  040f294  ld 31, 456(1)
  040f298  addi 1, 1, 512
  040f29c  blr
