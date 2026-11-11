# game/update/moby757.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M757_0044e100:   # 0x44e100, 0x4dc bytes
  044e100  stdu 1, -288(1)
  044e104  mflr 0
  044e108  std 0, 304(1)
  044e10c  stfd 27, 248(1)
  044e110  stfd 28, 256(1)
  044e114  stfd 29, 264(1)
  044e118  stfd 30, 272(1)
  044e11c  stfd 31, 280(1)
  044e120  std 27, 208(1)
  044e124  ori 27, 3, 0
  044e128  std 30, 232(1)
  044e12c  li 3, 755
  044e130  std 29, 224(1)
  044e134  std 28, 216(1)
  044e138  ori 30, 6, 0
  044e13c  ori 29, 5, 0
  044e140  std 31, 240(1)
  044e144  ori 28, 4, 0
  044e148  bl 0xefa28
  044e14c  nop
  044e150  ori 31, 3, 0
  044e154  cmpwi 31, 0
  044e158  bt 2, 0x44e5a0
  044e15c  lfs 1, 0(29)
  044e160  lwz 3, 120(31)
  044e164  li 4, 255
  044e168  stfs 1, 16(31)
  044e16c  li 5, 1
  044e170  lfs 1, 4(29)
  044e174  li 7, 0
  044e178  lis 6, 69
  044e17c  stfs 1, 20(31)
  044e180  lfs 1, 8(29)
  044e184  li 8, 512
  044e188  addi 6, 6, -7964
  044e18c  stfs 1, 24(31)
  044e190  lfs 1, 12(29)
  044e194  lis 9, 16128
  044e198  stb 4, 48(31)
  044e19c  lis 10, 114
  044e1a0  stfs 1, 28(31)
  044e1a4  sth 4, 50(31)
  044e1a8  stb 5, 49(31)
  044e1ac  lis 4, 135
  044e1b0  ld 11, 56(27)
  044e1b4  stb 7, 32(31)
  044e1b8  std 11, 56(31)
  044e1bc  stw 30, 96(3)
  044e1c0  stw 8, 32(3)
  044e1c4  lfs 30, 0(6)
  044e1c8  stw 9, 40(3)
  044e1cc  lfs 1, 7304(4)
  044e1d0  lfs 2, -3048(10)
  044e1d4  lis 4, 14851
  044e1d8  stb 7, 61(3)
  044e1dc  fmuls 1, 1, 2
  044e1e0  ori 4, 4, 4719
  044e1e4  stw 5, 36(3)
  044e1e8  stw 4, 20(3)
  044e1ec  lis 4, 115
  044e1f0  stfs 1, 16(3)
  044e1f4  lfs 1, 4(28)
  044e1f8  lfs 2, 0(28)
  044e1fc  fmuls 1, 1, 1
  044e200  addic 4, 4, 22784
  044e204  fmadds 1, 2, 2, 1
  044e208  fsqrts 1, 1
  044e20c  stfs 1, 24(3)
  044e210  lfs 1, 8(28)
  044e214  stfs 1, 28(3)
  044e218  lwz 5, 0(28)
  044e21c  lwz 7, 4(28)
  044e220  lfs 1, 0(28)
  044e224  lfs 2, 4(28)
  044e228  fabs 3, 1
  044e22c  fabs 4, 2
  044e230  rlwinm 7, 7, 3, 29, 29
  044e234  fsubs 1, 3, 4
  044e238  stfs 1, 144(1)
  044e23c  lfs 31, 4(6)
  044e240  lwz 6, 144(1)
  044e244  lfs 1, 144(1)
  044e248  rlwimi 7, 6, 2, 30, 30
  044e24c  fsub 2, 1, 31
  044e250  fsub 5, 1, 31
  044e254  rlwimi 7, 5, 4, 28, 28
  044e258  ori 5, 4, 0
  044e25c  slwi 6, 7, 2
  044e260  rlwimi 5, 7, 2, 26, 28
  044e264  clrldi 5, 5, 32
  044e268  lfsx 1, 4, 6
  044e26c  fsel 2, 2, 3, 4
  044e270  fsel 3, 5, 4, 3
  044e274  lfs 27, 4(5)
  044e278  fcmpu 0, 2, 31
  044e27c  bt 1, 0x44e288
  044e280  fmr 27, 31
  044e284  b 0x44e3b0
  044e288  fsubs 4, 3, 2
  044e28c  fadds 2, 3, 2
  044e290  addic 7, 1, 16
  044e294  li 4, 2
  044e298  addic 6, 7, 132
  044e29c  addic 5, 7, 148
  044e2a0  mtctr 4
  044e2a4  fdivs 2, 4, 2
  044e2a8  fmuls 4, 2, 2
  044e2ac  stfs 2, 160(1)
  044e2b0  stfs 2, 152(1)
  044e2b4  stfs 2, 156(1)
  044e2b8  stfs 2, 148(1)
  044e2bc  lfs 5, 160(1)
  044e2c0  lfs 6, 152(1)
  044e2c4  lfs 7, 156(1)
  044e2c8  fmuls 2, 4, 4
  044e2cc  fmuls 6, 6, 4
  044e2d0  fmuls 5, 5, 2
  044e2d4  fmuls 3, 2, 2
  044e2d8  fmuls 2, 7, 2
  044e2dc  stfs 6, 152(1)
  044e2e0  fmuls 4, 5, 4
  044e2e4  stfs 2, 156(1)
  044e2e8  stfs 4, 160(1)
  044e2ec  lfs 2, 132(7)
  044e2f0  fmuls 2, 2, 3
  044e2f4  stfs 2, 148(7)
  044e2f8  lfs 2, 4(6)
  044e2fc  addic 7, 7, 8
  044e300  addic 6, 6, 8
  044e304  fmuls 2, 2, 3
  044e308  stfs 2, 4(5)
  044e30c  addic 5, 5, 8
  044e310  bdnz 0x44e2ec
  044e314  ori 8, 1, 0
  044e318  lis 7, 115
  044e31c  li 9, 4
  044e320  addic 6, 8, 148
  044e324  addic 7, 7, 22752
  044e328  ori 5, 6, 0
  044e32c  mtctr 9
  044e330  lfs 2, 148(8)
  044e334  lfs 3, 0(7)
  044e338  fmuls 2, 2, 3
  044e33c  lfs 3, 4(7)
  044e340  addic 7, 7, 8
  044e344  stfs 2, 148(8)
  044e348  lfs 2, 4(6)
  044e34c  addic 8, 8, 8
  044e350  fmuls 2, 2, 3
  044e354  stfs 2, 4(6)
  044e358  addic 6, 6, 8
  044e35c  bdnz 0x44e330
  044e360  ori 6, 4, 0
  044e364  fmr 2, 31
  044e368  ori 4, 1, 0
  044e36c  mtctr 6
  044e370  lfs 3, 148(4)
  044e374  fadds 2, 2, 3
  044e378  lfs 3, 4(5)
  044e37c  addic 4, 4, 16
  044e380  lfs 4, 8(5)
  044e384  lfs 5, 12(5)
  044e388  addic 5, 5, 16
  044e38c  fadds 2, 2, 3
  044e390  fadds 2, 2, 4
  044e394  fadds 2, 2, 5
  044e398  bdnz 0x44e370
  044e39c  lis 4, 69
  044e3a0  addi 4, 4, -7964
  044e3a4  lfs 3, 8(4)
  044e3a8  fadds 2, 2, 3
  044e3ac  fmadds 27, 2, 1, 27
  044e3b0  ori 4, 3, 0
  044e3b4  fmr 1, 27
  044e3b8  ori 3, 31, 0
  044e3bc  li 6, 0
  044e3c0  li 7, 1
  044e3c4  li 8, 0
  044e3c8  bl 0x10ad80
  044e3cc  nop
  044e3d0  lis 4, 69
  044e3d4  li 3, 1
  044e3d8  addi 4, 4, -7964
  044e3dc  li 30, 0
  044e3e0  stb 3, 32(31)
  044e3e4  lfs 27, 12(4)
  044e3e8  lfs 28, 16(4)
  044e3ec  lfs 29, 20(4)
  044e3f0  lfs 3, 16(31)
  044e3f4  fmr 1, 27
  044e3f8  fmr 2, 31
  044e3fc  stfs 3, 112(1)
  044e400  lfs 3, 20(31)
  044e404  stfs 3, 116(1)
  044e408  lfs 3, 24(31)
  044e40c  stfs 3, 120(1)
  044e410  lfs 3, 28(31)
  044e414  stfs 3, 124(1)
  044e418  bl 0xfcbe8
  044e41c  nop
  044e420  lfs 2, 136(1)
  044e424  fadds 3, 2, 1
  044e428  fmr 1, 28
  044e42c  fmr 2, 29
  044e430  stfs 3, 136(1)
  044e434  bl 0xfcbe8
  044e438  nop
  044e43c  lfs 2, 128(1)
  044e440  fadds 3, 2, 1
  044e444  fmr 1, 28
  044e448  fmr 2, 29
  044e44c  stfs 3, 128(1)
  044e450  bl 0xfcbe8
  044e454  nop
  044e458  lfs 2, 132(1)
  044e45c  fadds 1, 2, 1
  044e460  lfs 2, 128(1)
  044e464  lfs 3, 136(1)
  044e468  lis 3, 114
  044e46c  lis 5, 135
  044e470  fmuls 4, 1, 1
  044e474  lfs 5, -3052(3)
  044e478  lfs 6, 112(1)
  044e47c  lis 6, 135
  044e480  lfs 7, 116(1)
  044e484  lfs 8, 120(1)
  044e488  fadds 6, 6, 2
  044e48c  stfs 1, 132(1)
  044e490  fmadds 4, 2, 2, 4
  044e494  fadds 7, 7, 1
  044e498  fadds 8, 8, 3
  044e49c  lwz 5, 7296(5)
  044e4a0  lwz 6, 7300(6)
  044e4a4  fmadds 4, 3, 3, 4
  044e4a8  stfs 6, 112(1)
  044e4ac  li 3, 20
  044e4b0  stfs 7, 116(1)
  044e4b4  stfs 8, 120(1)
  044e4b8  fsqrts 4, 4
  044e4bc  li 4, 40
  044e4c0  extsw 29, 5
  044e4c4  extsw 28, 6
  044e4c8  fdivs 5, 5, 4
  044e4cc  fsub 6, 31, 4
  044e4d0  fsub 7, 31, 4
  044e4d4  fsub 8, 31, 4
  044e4d8  fsub 9, 4, 31
  044e4dc  fsub 10, 4, 31
  044e4e0  fsub 4, 4, 31
  044e4e4  fmuls 2, 2, 5
  044e4e8  fmuls 1, 1, 5
  044e4ec  fmuls 3, 3, 5
  044e4f0  fsel 5, 6, 31, 2
  044e4f4  fsel 6, 7, 31, 1
  044e4f8  fsel 7, 8, 31, 3
  044e4fc  fsel 2, 9, 5, 2
  044e500  fsel 1, 10, 6, 1
  044e504  fsel 3, 4, 7, 3
  044e508  stfs 2, 128(1)
  044e50c  stfs 1, 132(1)
  044e510  stfs 3, 136(1)
  044e514  bl 0xfe484
  044e518  nop
  044e51c  extsw 3, 3
  044e520  li 4, 40
  044e524  std 3, 184(1)
  044e528  lis 3, 114
  044e52c  lfs 1, -3056(3)
  044e530  lfd 2, 184(1)
  044e534  li 3, 20
  044e538  fcfid 2, 2
  044e53c  frsp 2, 2
  044e540  fadds 2, 2, 30
  044e544  fmuls 1, 1, 2
  044e548  fctiwz 1, 1
  044e54c  stfd 1, 184(1)
  044e550  lwz 5, 188(1)
  044e554  extsw 27, 5
  044e558  bl 0xfe484
  044e55c  nop
  044e560  ori 9, 3, 0
  044e564  ori 7, 27, 0
  044e568  addic 3, 1, 112
  044e56c  li 8, 40
  044e570  addic 4, 1, 128
  044e574  ori 5, 29, 0
  044e578  ori 6, 28, 0
  044e57c  li 10, 1
  044e580  bl 0x121740
  044e584  nop
  044e588  addic 30, 30, 1
  044e58c  cmpwi 30, 20
  044e590  bt 0, 0x44e3f0
  044e594  ori 3, 31, 0
  044e598  bl 0xf31a8
  044e59c  nop
  044e5a0  ori 3, 31, 0
  044e5a4  ld 0, 304(1)
  044e5a8  mtlr 0
  044e5ac  lfd 27, 248(1)
  044e5b0  lfd 28, 256(1)
  044e5b4  lfd 29, 264(1)
  044e5b8  lfd 30, 272(1)
  044e5bc  lfd 31, 280(1)
  044e5c0  ld 27, 208(1)
  044e5c4  ld 28, 216(1)
  044e5c8  ld 29, 224(1)
  044e5cc  ld 30, 232(1)
  044e5d0  ld 31, 240(1)
  044e5d4  addi 1, 1, 288
  044e5d8  blr

M757_0044e618:   # 0x44e618, 0x530 bytes
  044e618  stdu 1, -256(1)
  044e61c  mflr 0
  044e620  std 0, 272(1)
  044e624  stfd 30, 240(1)
  044e628  stfd 31, 248(1)
  044e62c  std 30, 224(1)
  044e630  std 31, 232(1)
  044e634  lwz 30, 120(3)
  044e638  ori 31, 3, 0
  044e63c  lwz 3, 200(30)
  044e640  cmpwi 3, 1
  044e644  std 29, 216(1)
  044e648  std 28, 208(1)
  044e64c  std 27, 200(1)
  044e650  cmpwi 1, 3, 0
  044e654  bf 2, 0x44ea88
  044e658  lis 3, 151
  044e65c  lwz 4, 176(30)
  044e660  addic 3, 3, -25248
  044e664  extsw 4, 4
  044e668  bl 0x110b70
  044e66c  nop
  044e670  cmpwi 3, 0
  044e674  bf 2, 0x44e6b8
  044e678  li 3, 0
  044e67c  lwz 5, 204(30)
  044e680  li 4, 0
  044e684  stw 3, 200(30)
  044e688  extsw 3, 5
  044e68c  bl 0xc8b28
  044e690  nop
  044e694  li 31, -1
  044e698  lwz 3, 208(30)
  044e69c  li 4, 0
  044e6a0  extsw 3, 3
  044e6a4  stw 31, 204(30)
  044e6a8  bl 0xc8b28
  044e6ac  nop
  044e6b0  stw 31, 208(30)
  044e6b4  b 0x44eb1c
  044e6b8  lwz 3, 180(30)
  044e6bc  cmpwi 3, 0
  044e6c0  bf 2, 0x44eb1c
  044e6c4  lwz 3, 184(30)
  044e6c8  cmpwi 3, 0
  044e6cc  bf 2, 0x44eb1c
  044e6d0  ori 28, 30, 0
  044e6d4  lis 3, 164
  044e6d8  li 4, 2
  044e6dc  lwz 5, 192(28)
  044e6e0  lwz 6, -28512(3)
  044e6e4  slwi 5, 5, 8
  044e6e8  lwz 3, 196(28)
  044e6ec  lwz 7, 204(28)
  044e6f0  addc 29, 6, 5
  044e6f4  slwi 5, 3, 8
  044e6f8  stw 4, 200(28)
  044e6fc  extsw 3, 7
  044e700  addc 30, 6, 5
  044e704  clrldi 29, 29, 32
  044e708  li 4, 0
  044e70c  clrldi 30, 30, 32
  044e710  bl 0xc8b28
  044e714  nop
  044e718  li 27, -1
  044e71c  lwz 3, 208(28)
  044e720  li 4, 0
  044e724  extsw 3, 3
  044e728  stw 27, 204(28)
  044e72c  bl 0xc8b28
  044e730  nop
  044e734  lis 3, 165
  044e738  lwz 4, 188(28)
  044e73c  stw 27, 208(28)
  044e740  slwi 5, 4, 7
  044e744  slwi 4, 4, 7
  044e748  lwz 3, 7128(3)
  044e74c  extsw 6, 4
  044e750  addc 5, 3, 5
  044e754  addc 4, 3, 4
  044e758  clrldi 5, 5, 32
  044e75c  clrldi 4, 4, 32
  044e760  lfs 1, 48(5)
  044e764  stfs 1, 16(31)
  044e768  lfs 1, 52(5)
  044e76c  stfs 1, 20(31)
  044e770  lfs 1, 56(5)
  044e774  stfs 1, 24(31)
  044e778  lfs 1, 60(5)
  044e77c  stfs 1, 28(31)
  044e780  lwzx 5, 3, 6
  044e784  lfsx 1, 3, 6
  044e788  lwz 3, 4(4)
  044e78c  lfs 2, 4(4)
  044e790  fabs 5, 1
  044e794  lis 4, 69
  044e798  fabs 2, 2
  044e79c  addi 4, 4, -6688
  044e7a0  lis 6, 115
  044e7a4  rlwinm 3, 3, 3, 29, 29
  044e7a8  fsubs 1, 5, 2
  044e7ac  stfs 1, 144(1)
  044e7b0  lfs 1, 0(4)
  044e7b4  addic 4, 6, 22784
  044e7b8  lwz 6, 144(1)
  044e7bc  lfs 3, 144(1)
  044e7c0  rlwimi 3, 6, 2, 30, 30
  044e7c4  fsub 4, 3, 1
  044e7c8  fsub 6, 3, 1
  044e7cc  rlwimi 3, 5, 4, 28, 28
  044e7d0  ori 5, 4, 0
  044e7d4  rlwimi 5, 3, 2, 26, 28
  044e7d8  slwi 3, 3, 2
  044e7dc  clrldi 5, 5, 32
  044e7e0  fsel 4, 4, 5, 2
  044e7e4  lfsx 3, 4, 3
  044e7e8  fsel 5, 6, 2, 5
  044e7ec  lfs 2, 4(5)
  044e7f0  fcmpu 0, 4, 1
  044e7f4  bt 1, 0x44e7fc
  044e7f8  b 0x44e920
  044e7fc  fsubs 6, 5, 4
  044e800  fadds 4, 5, 4
  044e804  addic 5, 1, 16
  044e808  li 6, 2
  044e80c  addic 4, 5, 132
  044e810  addic 3, 5, 148
  044e814  mtctr 6
  044e818  fdivs 4, 6, 4
  044e81c  fmuls 6, 4, 4
  044e820  stfs 4, 160(1)
  044e824  stfs 4, 152(1)
  044e828  stfs 4, 156(1)
  044e82c  stfs 4, 148(1)
  044e830  lfs 7, 160(1)
  044e834  lfs 8, 152(1)
  044e838  lfs 9, 156(1)
  044e83c  fmuls 4, 6, 6
  044e840  fmuls 8, 8, 6
  044e844  fmuls 7, 7, 4
  044e848  fmuls 5, 4, 4
  044e84c  fmuls 4, 9, 4
  044e850  stfs 8, 152(1)
  044e854  fmuls 6, 7, 6
  044e858  stfs 4, 156(1)
  044e85c  stfs 6, 160(1)
  044e860  lfs 4, 132(5)
  044e864  fmuls 4, 4, 5
  044e868  stfs 4, 148(5)
  044e86c  lfs 4, 4(4)
  044e870  addic 5, 5, 8
  044e874  addic 4, 4, 8
  044e878  fmuls 4, 4, 5
  044e87c  stfs 4, 4(3)
  044e880  addic 3, 3, 8
  044e884  bdnz 0x44e860
  044e888  ori 6, 1, 0
  044e88c  lis 5, 115
  044e890  li 7, 4
  044e894  addic 4, 6, 148
  044e898  addic 5, 5, 22752
  044e89c  ori 3, 4, 0
  044e8a0  mtctr 7
  044e8a4  lfs 4, 148(6)
  044e8a8  lfs 5, 0(5)
  044e8ac  fmuls 4, 4, 5
  044e8b0  lfs 5, 4(5)
  044e8b4  addic 5, 5, 8
  044e8b8  stfs 4, 148(6)
  044e8bc  lfs 4, 4(4)
  044e8c0  addic 6, 6, 8
  044e8c4  fmuls 4, 4, 5
  044e8c8  stfs 4, 4(4)
  044e8cc  addic 4, 4, 8
  044e8d0  bdnz 0x44e8a4
  044e8d4  li 5, 2
  044e8d8  ori 4, 1, 0
  044e8dc  mtctr 5
  044e8e0  lfs 4, 148(4)
  044e8e4  fadds 1, 1, 4
  044e8e8  addic 4, 4, 16
  044e8ec  lfs 4, 4(3)
  044e8f0  lfs 5, 8(3)
  044e8f4  lfs 6, 12(3)
  044e8f8  addic 3, 3, 16
  044e8fc  fadds 1, 1, 4
  044e900  fadds 1, 1, 5
  044e904  fadds 1, 1, 6
  044e908  bdnz 0x44e8e0
  044e90c  lis 3, 69
  044e910  addi 3, 3, -6688
  044e914  lfs 4, 4(3)
  044e918  fadds 1, 1, 4
  044e91c  fmadds 1, 1, 3, 2
  044e920  lis 3, 69
  044e924  stfs 1, 72(31)
  044e928  addi 28, 3, -6688
  044e92c  lfs 1, 64(29)
  044e930  lfs 2, 8(28)
  044e934  bl 0x502578
  044e938  nop
  044e93c  stfs 1, 64(29)
  044e940  lfs 1, 64(30)
  044e944  lfs 2, 12(28)
  044e948  bl 0x502578
  044e94c  nop
  044e950  lis 3, 114
  044e954  stfs 1, 64(30)
  044e958  lfs 1, 16(28)
  044e95c  lfs 2, -3056(3)
  044e960  fmuls 1, 2, 1
  044e964  fctiwz 1, 1
  044e968  stfd 1, 184(1)
  044e96c  lwz 3, 188(1)
  044e970  extsw 3, 3
  044e974  bl 0x6dad0
  044e978  nop
  044e97c  lfs 1, 20(28)
  044e980  lfs 2, 24(28)
  044e984  lfs 3, 72(31)
  044e988  lfs 4, 28(28)
  044e98c  fadds 1, 3, 1
  044e990  fsubs 5, 2, 3
  044e994  fsubs 6, 4, 3
  044e998  li 3, 0
  044e99c  fsubs 2, 2, 1
  044e9a0  fsub 7, 3, 5
  044e9a4  fsubs 4, 4, 1
  044e9a8  fsub 8, 1, 2
  044e9ac  fsel 5, 7, 5, 3
  044e9b0  lfs 7, 32(28)
  044e9b4  fsel 1, 8, 2, 1
  044e9b8  fsub 2, 6, 5
  044e9bc  fsub 8, 4, 1
  044e9c0  fsel 2, 2, 6, 5
  044e9c4  lfs 5, 36(28)
  044e9c8  lfs 6, 40(28)
  044e9cc  lfs 10, 20(31)
  044e9d0  lfs 13, 44(28)
  044e9d4  fsel 1, 8, 4, 1
  044e9d8  fmuls 4, 2, 2
  044e9dc  fmuls 8, 1, 1
  044e9e0  fmuls 9, 4, 2
  044e9e4  fmuls 11, 8, 1
  044e9e8  fmuls 12, 4, 9
  044e9ec  fmadds 2, 9, 7, 2
  044e9f0  lfs 9, 16(31)
  044e9f4  fmuls 31, 8, 11
  044e9f8  fmadds 1, 11, 7, 1
  044e9fc  fmuls 7, 4, 12
  044ea00  lfs 11, 48(28)
  044ea04  fmadds 2, 12, 5, 2
  044ea08  lfs 12, 24(31)
  044ea0c  lfs 0, 28(31)
  044ea10  stw 3, 140(1)
  044ea14  stw 3, 136(1)
  044ea18  stw 3, 132(1)
  044ea1c  fmuls 30, 8, 31
  044ea20  fmadds 1, 31, 5, 1
  044ea24  fmuls 4, 4, 7
  044ea28  fmadds 2, 7, 6, 2
  044ea2c  stw 3, 128(1)
  044ea30  fmuls 5, 8, 30
  044ea34  fmadds 1, 30, 6, 1
  044ea38  fmadds 2, 4, 13, 2
  044ea3c  fmadds 4, 5, 13, 1
  044ea40  fmr 1, 3
  044ea44  fmadds 2, 2, 11, 10
  044ea48  fmadds 3, 4, 11, 9
  044ea4c  stfs 2, 116(1)
  044ea50  lfs 2, 52(28)
  044ea54  stfs 0, 124(1)
  044ea58  stfs 12, 120(1)
  044ea5c  stfs 3, 112(1)
  044ea60  bl 0x502578
  044ea64  nop
  044ea68  addic 3, 1, 112
  044ea6c  stfs 1, 136(1)
  044ea70  addic 4, 1, 128
  044ea74  li 5, 0
  044ea78  li 6, 1
  044ea7c  bl 0xa0c38
  044ea80  nop
  044ea84  b 0x44eb1c
  044ea88  bf 6, 0x44eb1c
  044ea8c  lis 3, 151
  044ea90  lwz 4, 176(30)
  044ea94  addic 3, 3, -25248
  044ea98  extsw 4, 4
  044ea9c  bl 0x110b70
  044eaa0  nop
  044eaa4  cmpwi 3, 0
  044eaa8  bt 2, 0x44eb1c
  044eaac  li 3, 1
  044eab0  lis 4, 112
  044eab4  lis 5, 112
  044eab8  addic 31, 4, 22536
  044eabc  stw 3, 200(30)
  044eac0  lis 4, 112
  044eac4  li 3, 21
  044eac8  addic 29, 5, 22672
  044eacc  addic 28, 4, 22680
  044ead0  addic 8, 30, 180
  044ead4  li 9, 100
  044ead8  li 4, 2000
  044eadc  ori 5, 31, 0
  044eae0  ori 6, 29, 0
  044eae4  ori 7, 28, 0
  044eae8  bl 0xc8444
  044eaec  nop
  044eaf0  stw 3, 208(30)
  044eaf4  li 3, 22
  044eaf8  addic 8, 30, 184
  044eafc  li 4, 2001
  044eb00  ori 5, 31, 0
  044eb04  ori 6, 29, 0
  044eb08  ori 7, 28, 0
  044eb0c  li 9, 10
  044eb10  bl 0xc8444
  044eb14  nop
  044eb18  stw 3, 204(30)
  044eb1c  ld 0, 272(1)
  044eb20  mtlr 0
  044eb24  lfd 30, 240(1)
  044eb28  lfd 31, 248(1)
  044eb2c  ld 27, 200(1)
  044eb30  ld 28, 208(1)
  044eb34  ld 29, 216(1)
  044eb38  ld 30, 224(1)
  044eb3c  ld 31, 232(1)
  044eb40  addi 1, 1, 256
  044eb44  blr

UpdateMoby_757:   # 0x44eb48, 0x164 bytes
  044eb48  stdu 1, -128(1)
  044eb4c  mflr 0
  044eb50  std 0, 144(1)
  044eb54  std 31, 120(1)
  044eb58  std 30, 112(1)
  044eb5c  ori 31, 3, 0
  044eb60  lwz 30, 120(31)
  044eb64  bl 0x44e618
  044eb68  lbz 3, 32(31)
  044eb6c  cmpwi 3, 0
  044eb70  bt 1, 0x44eb80
  044eb74  cmpwi 3, -1
  044eb78  bf 1, 0x44ec94
  044eb7c  b 0x44eb94
  044eb80  cmpwi 3, 1
  044eb84  bf 1, 0x44ebb4
  044eb88  cmpwi 3, 2
  044eb8c  bf 1, 0x44ec54
  044eb90  b 0x44ec94
  044eb94  lis 3, 102
  044eb98  li 5, 0
  044eb9c  addic 3, 3, -32376
  044eba0  li 4, 1
  044eba4  stw 5, 200(30)
  044eba8  stw 3, 32(30)
  044ebac  stb 4, 32(31)
  044ebb0  b 0x44ec94
  044ebb4  lis 3, 151
  044ebb8  li 6, 0
  044ebbc  li 9, 0
  044ebc0  li 4, 2
  044ebc4  li 5, 3
  044ebc8  lbz 3, -16400(3)
  044ebcc  lwz 7, 164(30)
  044ebd0  subc 4, 4, 5
  044ebd4  subc 6, 6, 3
  044ebd8  clrlwi 8, 7, 31
  044ebdc  cntlzw 6, 6
  044ebe0  rlwinm 7, 7, 0, 30, 30
  044ebe4  sldi 6, 6, 58
  044ebe8  subc 7, 9, 7
  044ebec  sradi 6, 6, 63
  044ebf0  cntlzw 7, 7
  044ebf4  and 4, 6, 4
  044ebf8  cntlzw 3, 3
  044ebfc  sldi 6, 7, 58
  044ec00  addc 4, 5, 4
  044ec04  rlwinm 3, 3, 27, 31, 31
  044ec08  sradi 5, 6, 63
  044ec0c  li 6, 4
  044ec10  xori 3, 3, 1
  044ec14  li 7, 0
  044ec18  subc 4, 4, 6
  044ec1c  cntlzw 3, 3
  044ec20  subc 7, 7, 8
  044ec24  and 4, 5, 4
  044ec28  rlwinm 3, 3, 27, 31, 31
  044ec2c  cntlzw 5, 7
  044ec30  xori 3, 3, 1
  044ec34  addc 4, 6, 4
  044ec38  sldi 5, 5, 58
  044ec3c  subc 3, 3, 4
  044ec40  sradi 5, 5, 63
  044ec44  and 3, 5, 3
  044ec48  addc 3, 4, 3
  044ec4c  sth 3, 2(30)
  044ec50  b 0x44ec94
  044ec54  lis 3, 161
  044ec58  lwz 3, 1800(3)
  044ec5c  cmpwi 3, 2
  044ec60  bt 2, 0x44ec94
  044ec64  li 3, 1
  044ec68  stb 3, 32(31)
  044ec6c  lwz 31, 164(30)
  044ec70  lhz 3, 6(30)
  044ec74  ori 4, 31, 1
  044ec78  cmpwi 3, 1
  044ec7c  cmpwi 1, 3, 3
  044ec80  stw 4, 164(30)
  044ec84  bt 2, 0x44ec8c
  044ec88  bf 6, 0x44ec94
  044ec8c  ori 3, 31, 3
  044ec90  stw 3, 164(30)
  044ec94  ld 0, 144(1)
  044ec98  mtlr 0
  044ec9c  ld 30, 112(1)
  044eca0  ld 31, 120(1)
  044eca4  addi 1, 1, 128
  044eca8  blr
