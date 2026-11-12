# game/update/moby263.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M267_0031de18:   # 0x31de18, 0x344 bytes
  031de18  stdu 1, -192(1)
  031de1c  mflr 0
  031de20  std 0, 208(1)
  031de24  stfd 29, 168(1)
  031de28  stfd 30, 176(1)
  031de2c  stfd 31, 184(1)
  031de30  std 30, 152(1)
  031de34  ori 30, 3, 0
  031de38  std 31, 160(1)
  031de3c  li 3, 4
  031de40  std 29, 144(1)
  031de44  std 28, 136(1)
  031de48  std 27, 128(1)
  031de4c  std 26, 120(1)
  031de50  ori 31, 4, 0
  031de54  bl 0xfc620
  031de58  nop
  031de5c  addic 3, 3, 263
  031de60  extsw 3, 3
  031de64  bl 0xefa28
  031de68  nop
  031de6c  ori 29, 3, 0
  031de70  cmpwi 29, 0
  031de74  bt 2, 0x31e124
  031de78  lis 3, 50
  031de7c  ori 27, 31, 0
  031de80  addi 28, 3, -8728
  031de84  lwz 31, 120(29)
  031de88  lfs 31, 0(28)
  031de8c  lfs 30, 4(28)
  031de90  fmr 1, 31
  031de94  lwz 26, 120(30)
  031de98  fmr 2, 30
  031de9c  bl 0xfcbe8
  031dea0  nop
  031dea4  stfs 1, 0(31)
  031dea8  fmr 2, 30
  031deac  fmr 1, 31
  031deb0  bl 0xfcbe8
  031deb4  nop
  031deb8  stfs 1, 4(31)
  031debc  fmr 2, 30
  031dec0  fmr 1, 31
  031dec4  bl 0xfcbe8
  031dec8  nop
  031decc  lfs 2, 4(31)
  031ded0  lfs 3, 0(31)
  031ded4  fmuls 4, 2, 2
  031ded8  stfs 1, 8(31)
  031dedc  lfs 5, 0(26)
  031dee0  lis 3, 114
  031dee4  fadds 5, 3, 5
  031dee8  fmadds 4, 3, 3, 4
  031deec  stfs 5, 32(31)
  031def0  lfs 5, 4(26)
  031def4  lfs 6, 12(31)
  031def8  fadds 5, 2, 5
  031defc  fmadds 4, 1, 1, 4
  031df00  li 4, 255
  031df04  li 5, 1
  031df08  li 6, 2
  031df0c  fsqrts 4, 4
  031df10  stfs 5, 36(31)
  031df14  lfs 5, 8(26)
  031df18  stfs 6, 44(31)
  031df1c  li 7, 127
  031df20  fadds 5, 1, 5
  031df24  stfs 5, 40(31)
  031df28  lfs 5, 8(28)
  031df2c  lfs 6, -3052(3)
  031df30  fmuls 5, 6, 5
  031df34  lfs 31, 12(28)
  031df38  lis 3, 114
  031df3c  fdivs 5, 5, 4
  031df40  fsub 6, 31, 4
  031df44  fsub 7, 31, 4
  031df48  fsub 8, 31, 4
  031df4c  fsub 9, 4, 31
  031df50  fsub 10, 4, 31
  031df54  fsub 4, 4, 31
  031df58  fmuls 3, 3, 5
  031df5c  fmuls 2, 2, 5
  031df60  fmuls 1, 1, 5
  031df64  fsel 5, 6, 31, 3
  031df68  fsel 6, 7, 31, 2
  031df6c  fsel 7, 8, 31, 1
  031df70  fsel 3, 9, 5, 3
  031df74  fsel 2, 10, 6, 2
  031df78  fsel 1, 4, 7, 1
  031df7c  stfs 3, 0(31)
  031df80  stfs 2, 4(31)
  031df84  stfs 1, 8(31)
  031df88  lfs 4, 0(27)
  031df8c  fadds 3, 3, 4
  031df90  stfs 3, 0(31)
  031df94  lfs 4, 4(27)
  031df98  fadds 2, 2, 4
  031df9c  stfs 2, 4(31)
  031dfa0  lfs 4, 16(28)
  031dfa4  lfs 5, 20(28)
  031dfa8  lfs 6, 8(27)
  031dfac  lfs 7, -3064(3)
  031dfb0  fadds 1, 1, 6
  031dfb4  fmadds 4, 7, 4, 5
  031dfb8  fmuls 3, 3, 4
  031dfbc  fmuls 2, 2, 4
  031dfc0  fmuls 1, 1, 4
  031dfc4  stfs 3, 0(31)
  031dfc8  stfs 2, 4(31)
  031dfcc  stfs 1, 8(31)
  031dfd0  stb 4, 48(29)
  031dfd4  sth 4, 50(29)
  031dfd8  stb 5, 49(29)
  031dfdc  stw 6, 76(31)
  031dfe0  stb 7, 35(29)
  031dfe4  lfs 1, 24(28)
  031dfe8  lfs 2, 28(28)
  031dfec  bl 0xfcbe8
  031dff0  nop
  031dff4  lfs 2, 44(30)
  031dff8  fmuls 1, 2, 1
  031dffc  stfs 1, 44(29)
  031e000  stfs 1, 80(31)
  031e004  lfs 30, 32(28)
  031e008  lfs 29, 36(28)
  031e00c  fmr 1, 30
  031e010  fmr 2, 29
  031e014  bl 0xfcbe8
  031e018  nop
  031e01c  stfs 1, 64(31)
  031e020  fmr 2, 29
  031e024  fmr 1, 30
  031e028  bl 0xfcbe8
  031e02c  nop
  031e030  lis 3, 149
  031e034  stfs 1, 68(31)
  031e038  addic 3, 3, 5056
  031e03c  lfs 8, 32(31)
  031e040  lfs 4, 320(3)
  031e044  fsubs 8, 8, 4
  031e048  stfs 8, 16(29)
  031e04c  lfs 7, 36(31)
  031e050  lfs 3, 324(3)
  031e054  fsubs 7, 7, 3
  031e058  fmuls 1, 7, 7
  031e05c  stfs 7, 20(29)
  031e060  lfs 6, 40(31)
  031e064  lfs 2, 328(3)
  031e068  fsubs 6, 6, 2
  031e06c  fmadds 1, 8, 8, 1
  031e070  fmadds 5, 6, 6, 1
  031e074  stfs 6, 24(29)
  031e078  lfs 1, 44(31)
  031e07c  stfs 1, 28(29)
  031e080  lfs 1, 40(28)
  031e084  fsqrts 5, 5
  031e088  fcmpu 0, 5, 1
  031e08c  cror 6, 0, 2
  031e090  bt 6, 0x31e0fc
  031e094  fdivs 1, 1, 5
  031e098  fsub 9, 31, 5
  031e09c  fsub 10, 31, 5
  031e0a0  fsub 11, 31, 5
  031e0a4  fsub 12, 5, 31
  031e0a8  fsub 13, 5, 31
  031e0ac  fsub 5, 5, 31
  031e0b0  fmuls 6, 6, 1
  031e0b4  fmuls 7, 7, 1
  031e0b8  fmuls 8, 8, 1
  031e0bc  fsel 9, 9, 31, 6
  031e0c0  fsel 10, 10, 31, 7
  031e0c4  fsel 11, 11, 31, 8
  031e0c8  fsel 6, 12, 9, 6
  031e0cc  fsel 7, 13, 10, 7
  031e0d0  fsel 5, 5, 11, 8
  031e0d4  fadds 2, 6, 2
  031e0d8  fadds 3, 7, 3
  031e0dc  fadds 4, 5, 4
  031e0e0  stfs 2, 24(29)
  031e0e4  stfs 3, 20(29)
  031e0e8  stfs 4, 16(29)
  031e0ec  lfs 2, 80(31)
  031e0f0  fmuls 1, 2, 1
  031e0f4  stfs 1, 44(29)
  031e0f8  b 0x31e124
  031e0fc  lfs 1, 32(31)
  031e100  stfs 1, 16(29)
  031e104  lfs 1, 36(31)
  031e108  stfs 1, 20(29)
  031e10c  lfs 1, 40(31)
  031e110  stfs 1, 24(29)
  031e114  lfs 1, 44(31)
  031e118  stfs 1, 28(29)
  031e11c  lfs 1, 80(31)
  031e120  stfs 1, 44(29)
  031e124  ori 3, 29, 0
  031e128  ld 0, 208(1)
  031e12c  mtlr 0
  031e130  lfd 29, 168(1)
  031e134  lfd 30, 176(1)
  031e138  lfd 31, 184(1)
  031e13c  ld 26, 120(1)
  031e140  ld 27, 128(1)
  031e144  ld 28, 136(1)
  031e148  ld 29, 144(1)
  031e14c  ld 30, 152(1)
  031e150  ld 31, 160(1)
  031e154  addi 1, 1, 192
  031e158  blr

Spawn_Moby267_GasparAsteroid:   # 0x31e1b8, 0x408 bytes
  031e1b8  stdu 1, -192(1)
  031e1bc  mflr 0
  031e1c0  std 0, 208(1)
  031e1c4  stfd 27, 152(1)
  031e1c8  stfd 28, 160(1)
  031e1cc  stfd 29, 168(1)
  031e1d0  stfd 30, 176(1)
  031e1d4  stfd 31, 184(1)
  031e1d8  std 31, 144(1)
  031e1dc  std 30, 136(1)
  031e1e0  std 29, 128(1)
  031e1e4  li 3, 4
  031e1e8  bl 0xfc620
  031e1ec  nop
  031e1f0  addic 3, 3, 263
  031e1f4  extsw 3, 3
  031e1f8  bl 0xefa28
  031e1fc  nop
  031e200  ori 30, 3, 0
  031e204  cmpwi 30, 0
  031e208  bt 2, 0x31e58c
  031e20c  lis 3, 50
  031e210  lwz 31, 120(30)
  031e214  addi 29, 3, -7844
  031e218  lfs 30, 0(29)
  031e21c  lfs 29, 4(29)
  031e220  fmr 1, 30
  031e224  fmr 2, 29
  031e228  bl 0xfcbe8
  031e22c  nop
  031e230  fmr 28, 1
  031e234  lfs 1, 8(29)
  031e238  lfs 3, 12(29)
  031e23c  fmr 2, 3
  031e240  bl 0xfcbe8
  031e244  nop
  031e248  lfs 2, 16(29)
  031e24c  lfs 3, 20(29)
  031e250  fadds 2, 1, 2
  031e254  lfs 4, 24(29)
  031e258  fsubs 5, 3, 1
  031e25c  fsubs 6, 4, 1
  031e260  lis 3, 17096
  031e264  lis 4, 17402
  031e268  fsubs 3, 3, 2
  031e26c  fsub 7, 1, 5
  031e270  fsubs 4, 4, 2
  031e274  fsub 8, 2, 3
  031e278  fsel 1, 7, 5, 1
  031e27c  lfs 5, 28(29)
  031e280  fsel 2, 8, 3, 2
  031e284  fsub 3, 6, 1
  031e288  fsub 8, 4, 2
  031e28c  fsel 1, 3, 6, 1
  031e290  lfs 3, 32(29)
  031e294  lfs 6, 36(29)
  031e298  lfs 9, 40(29)
  031e29c  lfs 31, 44(29)
  031e2a0  stw 3, 120(1)
  031e2a4  lis 3, 17530
  031e2a8  fsel 2, 8, 4, 2
  031e2ac  fmuls 4, 1, 1
  031e2b0  fmuls 7, 2, 2
  031e2b4  fmuls 8, 4, 1
  031e2b8  fmuls 10, 7, 2
  031e2bc  fmuls 11, 4, 8
  031e2c0  fmadds 1, 8, 5, 1
  031e2c4  fmuls 8, 7, 10
  031e2c8  fmadds 2, 10, 5, 2
  031e2cc  fmuls 5, 4, 11
  031e2d0  fmadds 1, 11, 3, 1
  031e2d4  fmuls 10, 7, 8
  031e2d8  fmadds 2, 8, 3, 2
  031e2dc  fmuls 3, 4, 5
  031e2e0  fmadds 1, 5, 6, 1
  031e2e4  lfs 4, 48(29)
  031e2e8  fmuls 5, 7, 10
  031e2ec  fmadds 2, 10, 6, 2
  031e2f0  fmadds 1, 3, 9, 1
  031e2f4  fmadds 3, 5, 9, 2
  031e2f8  fmr 2, 29
  031e2fc  fmadds 1, 1, 28, 4
  031e300  fmadds 3, 3, 28, 4
  031e304  stfs 1, 116(1)
  031e308  stfs 3, 112(1)
  031e30c  stw 3, 16(30)
  031e310  stw 4, 20(30)
  031e314  lfs 1, 52(29)
  031e318  bl 0xfcbe8
  031e31c  nop
  031e320  stfs 1, 24(30)
  031e324  lfs 2, 16(30)
  031e328  lfs 3, 112(1)
  031e32c  fadds 2, 2, 3
  031e330  lfs 3, 20(30)
  031e334  stfs 2, 16(30)
  031e338  lfs 4, 116(1)
  031e33c  fadds 3, 3, 4
  031e340  stfs 3, 20(30)
  031e344  lfs 3, 120(1)
  031e348  fadds 1, 1, 3
  031e34c  stfs 1, 24(30)
  031e350  stfs 2, 0(31)
  031e354  lfs 1, 20(30)
  031e358  stfs 1, 4(31)
  031e35c  lfs 1, 24(30)
  031e360  stfs 1, 8(31)
  031e364  lfs 1, 28(30)
  031e368  stfs 1, 12(31)
  031e36c  lfs 29, 56(29)
  031e370  lfs 2, 60(29)
  031e374  fmr 1, 29
  031e378  bl 0xfcbe8
  031e37c  nop
  031e380  lfs 2, 44(30)
  031e384  fmuls 1, 2, 1
  031e388  stfs 1, 44(30)
  031e38c  lfs 28, 64(29)
  031e390  lfs 27, 68(29)
  031e394  fmr 1, 28
  031e398  fmr 2, 27
  031e39c  bl 0xfcbe8
  031e3a0  nop
  031e3a4  stfs 1, 64(31)
  031e3a8  fmr 1, 28
  031e3ac  fmr 2, 27
  031e3b0  bl 0xfcbe8
  031e3b4  nop
  031e3b8  stfs 1, 68(31)
  031e3bc  addic 3, 1, 112
  031e3c0  fmr 1, 29
  031e3c4  li 4, 0
  031e3c8  bl 0xffb70
  031e3cc  nop
  031e3d0  stfs 1, 120(1)
  031e3d4  lfs 2, 72(29)
  031e3d8  lfs 7, 112(1)
  031e3dc  fcmpu 0, 1, 2
  031e3e0  cror 6, 1, 2
  031e3e4  bt 6, 0x31e3f0
  031e3e8  lis 3, 16840
  031e3ec  stw 3, 120(1)
  031e3f0  stfs 7, 32(31)
  031e3f4  li 3, 255
  031e3f8  lfs 1, 116(1)
  031e3fc  lis 5, 50
  031e400  li 4, 1
  031e404  stfs 1, 36(31)
  031e408  lfs 1, 120(1)
  031e40c  addi 29, 5, -7844
  031e410  stfs 1, 40(31)
  031e414  lfs 1, 124(1)
  031e418  stfs 1, 44(31)
  031e41c  stb 3, 48(30)
  031e420  sth 3, 50(30)
  031e424  stb 4, 49(30)
  031e428  stw 4, 76(31)
  031e42c  lfs 1, 76(29)
  031e430  lfs 2, 80(29)
  031e434  bl 0xfcbe8
  031e438  nop
  031e43c  lis 3, 114
  031e440  lfs 2, -3052(3)
  031e444  fmuls 1, 1, 2
  031e448  fmr 2, 31
  031e44c  stfs 1, 84(31)
  031e450  lfs 1, 44(30)
  031e454  stfs 1, 80(31)
  031e458  lfs 29, 84(29)
  031e45c  fmr 1, 29
  031e460  bl 0xfcbe8
  031e464  nop
  031e468  lfs 2, 0(31)
  031e46c  fadds 3, 2, 1
  031e470  fmr 1, 29
  031e474  fmr 2, 31
  031e478  stfs 3, 0(31)
  031e47c  bl 0xfcbe8
  031e480  nop
  031e484  lfs 2, 4(31)
  031e488  lis 3, 149
  031e48c  lfs 7, 0(31)
  031e490  fadds 1, 2, 1
  031e494  addic 3, 3, 5056
  031e498  stfs 1, 4(31)
  031e49c  lfs 3, 320(3)
  031e4a0  fsubs 7, 7, 3
  031e4a4  stfs 7, 16(30)
  031e4a8  lfs 2, 324(3)
  031e4ac  lfs 6, 4(31)
  031e4b0  fsubs 6, 6, 2
  031e4b4  fmuls 4, 6, 6
  031e4b8  stfs 6, 20(30)
  031e4bc  lfs 5, 8(31)
  031e4c0  lfs 1, 328(3)
  031e4c4  fsubs 5, 5, 1
  031e4c8  fmadds 4, 7, 7, 4
  031e4cc  fmadds 4, 5, 5, 4
  031e4d0  stfs 5, 24(30)
  031e4d4  lfs 8, 12(31)
  031e4d8  stfs 8, 28(30)
  031e4dc  fsqrts 4, 4
  031e4e0  fcmpu 0, 4, 31
  031e4e4  cror 6, 0, 2
  031e4e8  bt 6, 0x31e550
  031e4ec  fdivs 8, 31, 4
  031e4f0  fsub 9, 30, 4
  031e4f4  fsub 10, 30, 4
  031e4f8  fsub 11, 30, 4
  031e4fc  fsub 12, 4, 30
  031e500  fsub 13, 4, 30
  031e504  fsub 4, 4, 30
  031e508  fmuls 5, 5, 8
  031e50c  fmuls 6, 6, 8
  031e510  fmuls 7, 7, 8
  031e514  fsel 9, 9, 30, 5
  031e518  fsel 10, 10, 30, 6
  031e51c  fsel 11, 11, 30, 7
  031e520  fsel 5, 12, 9, 5
  031e524  fsel 6, 13, 10, 6
  031e528  fsel 4, 4, 11, 7
  031e52c  fadds 1, 5, 1
  031e530  fadds 2, 6, 2
  031e534  fadds 3, 4, 3
  031e538  stfs 1, 24(30)
  031e53c  stfs 2, 20(30)
  031e540  stfs 3, 16(30)
  031e544  lfs 7, 80(31)
  031e548  fmuls 7, 7, 8
  031e54c  b 0x31e574
  031e550  lfs 1, 0(31)
  031e554  stfs 1, 16(30)
  031e558  lfs 1, 4(31)
  031e55c  stfs 1, 20(30)
  031e560  lfs 1, 8(31)
  031e564  stfs 1, 24(30)
  031e568  lfs 1, 12(31)
  031e56c  stfs 1, 28(30)
  031e570  lfs 7, 80(31)
  031e574  li 4, -1
  031e578  stfs 7, 44(30)
  031e57c  ori 3, 30, 0
  031e580  stw 4, 88(31)
  031e584  bl 0xf31a8
  031e588  nop
  031e58c  ori 3, 30, 0
  031e590  ld 0, 208(1)
  031e594  mtlr 0
  031e598  lfd 27, 152(1)
  031e59c  lfd 28, 160(1)
  031e5a0  lfd 29, 168(1)
  031e5a4  lfd 30, 176(1)
  031e5a8  lfd 31, 184(1)
  031e5ac  ld 29, 128(1)
  031e5b0  ld 30, 136(1)
  031e5b4  ld 31, 144(1)
  031e5b8  addi 1, 1, 192
  031e5bc  blr

M267_0031e5f0:   # 0x31e5f0, 0x444 bytes
  031e5f0  stdu 1, -192(1)
  031e5f4  mflr 0
  031e5f8  std 0, 208(1)
  031e5fc  stfd 27, 152(1)
  031e600  stfd 28, 160(1)
  031e604  stfd 29, 168(1)
  031e608  stfd 30, 176(1)
  031e60c  stfd 31, 184(1)
  031e610  std 31, 144(1)
  031e614  ori 31, 3, 0
  031e618  std 30, 136(1)
  031e61c  std 29, 128(1)
  031e620  std 28, 120(1)
  031e624  std 27, 112(1)
  031e628  li 3, 4
  031e62c  bl 0xfc620
  031e630  nop
  031e634  addic 3, 3, 263
  031e638  extsw 3, 3
  031e63c  bl 0xefa28
  031e640  nop
  031e644  ori 29, 3, 0
  031e648  cmpwi 29, 0
  031e64c  bt 2, 0x31e9f8
  031e650  ori 3, 31, 0
  031e654  li 28, 0
  031e658  li 8, 1
  031e65c  li 7, 255
  031e660  li 6, 128
  031e664  lwz 30, 120(3)
  031e668  lfs 1, 16(3)
  031e66c  lfs 2, 20(3)
  031e670  stfs 1, 16(29)
  031e674  lfs 1, 24(3)
  031e678  stfs 2, 20(29)
  031e67c  lfs 2, 28(3)
  031e680  lwz 31, 120(29)
  031e684  stfs 1, 24(29)
  031e688  stfs 2, 28(29)
  031e68c  lwz 4, 24(30)
  031e690  addic 4, 4, 1
  031e694  stw 4, 24(30)
  031e698  stw 3, 80(31)
  031e69c  li 4, 128
  031e6a0  lwz 5, 16(30)
  031e6a4  ori 3, 29, 0
  031e6a8  stw 28, 20(31)
  031e6ac  stw 5, 16(31)
  031e6b0  stw 8, 72(31)
  031e6b4  li 5, 128
  031e6b8  stb 8, 188(29)
  031e6bc  stb 7, 48(29)
  031e6c0  sth 7, 50(29)
  031e6c4  stb 8, 49(29)
  031e6c8  bl 0xf1ec8
  031e6cc  nop
  031e6d0  lis 3, 50
  031e6d4  stb 28, 35(29)
  031e6d8  addi 28, 3, -6720
  031e6dc  lfs 1, 0(28)
  031e6e0  lfs 2, 4(28)
  031e6e4  bl 0xfcbe8
  031e6e8  nop
  031e6ec  lfs 2, 44(29)
  031e6f0  fmuls 1, 2, 1
  031e6f4  stfs 1, 44(29)
  031e6f8  lfs 31, 8(28)
  031e6fc  lfs 30, 12(28)
  031e700  fmr 1, 31
  031e704  fmr 2, 30
  031e708  bl 0xfcbe8
  031e70c  nop
  031e710  stfs 1, 64(31)
  031e714  fmr 2, 30
  031e718  fmr 1, 31
  031e71c  bl 0xfcbe8
  031e720  nop
  031e724  lwz 3, 16(31)
  031e728  stfs 1, 68(31)
  031e72c  cmpwi 3, 0
  031e730  bt 0, 0x31e9ec
  031e734  lis 5, 50
  031e738  lis 4, 165
  031e73c  slwi 3, 3, 2
  031e740  addi 28, 5, -6720
  031e744  addic 4, 4, 7136
  031e748  extsw 3, 3
  031e74c  lfs 1, 16(28)
  031e750  lwzx 27, 4, 3
  031e754  lfs 2, 20(28)
  031e758  bl 0xfcbe8
  031e75c  nop
  031e760  lwz 3, 0(27)
  031e764  lfs 2, 40(27)
  031e768  slwi 3, 3, 4
  031e76c  lfs 3, 24(27)
  031e770  addc 3, 27, 3
  031e774  fsubs 2, 2, 3
  031e778  clrldi 3, 3, 32
  031e77c  fmr 31, 1
  031e780  lfs 4, 0(3)
  031e784  lfs 5, -16(3)
  031e788  fsubs 4, 4, 5
  031e78c  lfs 5, 8(3)
  031e790  lfs 3, -8(3)
  031e794  lfs 6, 32(27)
  031e798  lfs 7, 16(27)
  031e79c  fsubs 3, 5, 3
  031e7a0  lfs 5, 36(27)
  031e7a4  lfs 8, 20(27)
  031e7a8  fsubs 6, 6, 7
  031e7ac  fsubs 5, 5, 8
  031e7b0  lfs 7, 4(3)
  031e7b4  fmuls 4, 4, 2
  031e7b8  lfs 9, -12(3)
  031e7bc  fsubs 7, 7, 9
  031e7c0  fmuls 5, 3, 5
  031e7c4  fmsubs 3, 3, 6, 4
  031e7c8  lfs 30, 24(28)
  031e7cc  li 3, 0
  031e7d0  fmsubs 4, 7, 2, 5
  031e7d4  fmuls 2, 3, 3
  031e7d8  stw 3, 8(31)
  031e7dc  stw 3, 12(31)
  031e7e0  fmadds 1, 4, 4, 2
  031e7e4  fsqrts 2, 1
  031e7e8  fmr 1, 30
  031e7ec  fdivs 5, 31, 2
  031e7f0  fsub 6, 30, 2
  031e7f4  fsub 7, 30, 2
  031e7f8  fsub 8, 2, 30
  031e7fc  fsub 2, 2, 30
  031e800  fmuls 9, 4, 5
  031e804  fmuls 5, 3, 5
  031e808  fsel 6, 6, 30, 9
  031e80c  fsel 7, 7, 30, 5
  031e810  fsel 6, 8, 6, 9
  031e814  fsel 2, 2, 7, 5
  031e818  stfs 6, 0(31)
  031e81c  stfs 2, 4(31)
  031e820  lwz 3, 0(27)
  031e824  lfs 2, 20(27)
  031e828  slwi 3, 3, 4
  031e82c  lfs 5, 24(27)
  031e830  lfs 6, 16(27)
  031e834  addc 3, 27, 3
  031e838  clrldi 3, 3, 32
  031e83c  lfs 7, 4(3)
  031e840  lfs 8, 8(3)
  031e844  fsubs 7, 7, 2
  031e848  fsubs 5, 8, 5
  031e84c  lfs 2, 0(3)
  031e850  fsubs 6, 2, 6
  031e854  lfs 2, 28(28)
  031e858  fmuls 7, 7, 4
  031e85c  fmuls 29, 5, 3
  031e860  fmuls 28, 5, 4
  031e864  fmsubs 27, 6, 3, 7
  031e868  bl 0xfcbe8
  031e86c  nop
  031e870  fmuls 2, 29, 29
  031e874  lfs 3, 0(31)
  031e878  lfs 4, 4(31)
  031e87c  lfs 5, 8(31)
  031e880  fneg 2, 2
  031e884  lis 3, 149
  031e888  fneg 2, 2
  031e88c  addic 3, 3, 5056
  031e890  fmadds 2, 28, 28, 2
  031e894  fmadds 2, 27, 27, 2
  031e898  fsqrts 2, 2
  031e89c  lis 4, 114
  031e8a0  fdivs 1, 1, 2
  031e8a4  fsub 6, 30, 2
  031e8a8  fsub 7, 30, 2
  031e8ac  fsub 8, 30, 2
  031e8b0  fsub 9, 2, 30
  031e8b4  fsub 10, 2, 30
  031e8b8  fsub 2, 2, 30
  031e8bc  fmuls 11, 29, 1
  031e8c0  fmuls 12, 27, 1
  031e8c4  fmuls 1, 28, 1
  031e8c8  fneg 11, 11
  031e8cc  fsel 6, 6, 30, 12
  031e8d0  fsel 7, 7, 30, 1
  031e8d4  fsel 8, 8, 30, 11
  031e8d8  fsel 6, 9, 6, 12
  031e8dc  fsel 1, 10, 7, 1
  031e8e0  fsel 2, 2, 8, 11
  031e8e4  fadds 5, 5, 6
  031e8e8  fadds 1, 4, 1
  031e8ec  fadds 2, 3, 2
  031e8f0  stfs 5, 8(31)
  031e8f4  stfs 1, 4(31)
  031e8f8  stfs 2, 0(31)
  031e8fc  lfs 1, 16(27)
  031e900  stfs 1, 32(31)
  031e904  lfs 1, 20(27)
  031e908  stfs 1, 36(31)
  031e90c  lfs 1, 24(27)
  031e910  stfs 1, 40(31)
  031e914  lfs 1, 28(27)
  031e918  stfs 1, 44(31)
  031e91c  lfs 1, 48(30)
  031e920  stfs 1, 48(31)
  031e924  lfs 1, 52(30)
  031e928  stfs 1, 52(31)
  031e92c  lfs 1, 56(30)
  031e930  stfs 1, 56(31)
  031e934  lfs 1, 60(30)
  031e938  stfs 1, 60(31)
  031e93c  lfs 1, 16(27)
  031e940  fadds 1, 1, 2
  031e944  stfs 1, 16(29)
  031e948  lfs 2, 20(27)
  031e94c  lfs 3, 4(31)
  031e950  fadds 2, 2, 3
  031e954  stfs 2, 20(29)
  031e958  lfs 3, 24(27)
  031e95c  lfs 4, 28(27)
  031e960  lfs 5, 8(31)
  031e964  stfs 4, 28(29)
  031e968  lfs 4, 320(3)
  031e96c  fadds 3, 3, 5
  031e970  fadds 1, 1, 4
  031e974  stfs 1, 16(29)
  031e978  lfs 4, 324(3)
  031e97c  fadds 2, 2, 4
  031e980  stfs 2, 20(29)
  031e984  lfs 4, 328(3)
  031e988  fadds 3, 3, 4
  031e98c  stfs 3, 24(29)
  031e990  lfs 4, 48(31)
  031e994  fsubs 1, 1, 4
  031e998  stfs 1, 16(29)
  031e99c  lfs 1, 52(31)
  031e9a0  fsubs 1, 2, 1
  031e9a4  stfs 1, 20(29)
  031e9a8  lfs 1, 56(31)
  031e9ac  fsubs 1, 3, 1
  031e9b0  stfs 1, 24(29)
  031e9b4  lfs 1, 32(28)
  031e9b8  lfs 2, 36(28)
  031e9bc  fmadds 1, 31, 1, 2
  031e9c0  stfs 1, 12(31)
  031e9c4  lfs 1, 40(28)
  031e9c8  lfs 2, 44(28)
  031e9cc  lfs 3, 44(29)
  031e9d0  fmadds 1, 31, 1, 2
  031e9d4  fmuls 1, 3, 1
  031e9d8  stfs 1, 44(29)
  031e9dc  lfs 1, 12(31)
  031e9e0  lfs 2, -3052(4)
  031e9e4  fmuls 1, 1, 2
  031e9e8  stfs 1, 12(31)
  031e9ec  ori 3, 29, 0
  031e9f0  bl 0xf31a8
  031e9f4  nop
  031e9f8  ori 3, 29, 0
  031e9fc  ld 0, 208(1)
  031ea00  mtlr 0
  031ea04  lfd 27, 152(1)
  031ea08  lfd 28, 160(1)
  031ea0c  lfd 29, 168(1)
  031ea10  lfd 30, 176(1)
  031ea14  lfd 31, 184(1)
  031ea18  ld 27, 112(1)
  031ea1c  ld 28, 120(1)
  031ea20  ld 29, 128(1)
  031ea24  ld 30, 136(1)
  031ea28  ld 31, 144(1)
  031ea2c  addi 1, 1, 192
  031ea30  blr

M267_0031ea48:   # 0x31ea48, 0x1ec bytes
  031ea48  stdu 1, -144(1)
  031ea4c  mflr 0
  031ea50  std 0, 160(1)
  031ea54  stfd 31, 136(1)
  031ea58  std 31, 128(1)
  031ea5c  ori 31, 3, 0
  031ea60  lbz 3, 35(31)
  031ea64  std 30, 120(1)
  031ea68  cmpwi 3, 2
  031ea6c  bt 1, 0x31ea80
  031ea70  ori 3, 31, 0
  031ea74  bl 0xefb38
  031ea78  nop
  031ea7c  b 0x31ec18
  031ea80  addic 3, 3, -2
  031ea84  lis 4, 50
  031ea88  addi 4, 4, -5580
  031ea8c  stb 3, 35(31)
  031ea90  lis 3, 114
  031ea94  lwz 30, 120(31)
  031ea98  lfs 1, 0(4)
  031ea9c  lfs 2, 4(4)
  031eaa0  lfs 3, -3064(3)
  031eaa4  lfs 4, 0(30)
  031eaa8  lis 3, 114
  031eaac  fmadds 1, 3, 1, 2
  031eab0  lfs 5, 4(30)
  031eab4  lfs 2, 8(30)
  031eab8  lfs 3, 36(30)
  031eabc  lfs 6, 32(30)
  031eac0  lfs 7, 40(30)
  031eac4  fmuls 4, 4, 1
  031eac8  fmuls 5, 5, 1
  031eacc  fadds 3, 3, 5
  031ead0  stfs 4, 0(30)
  031ead4  stfs 5, 4(30)
  031ead8  fadds 4, 6, 4
  031eadc  lfs 8, 8(4)
  031eae0  lfs 9, -3048(3)
  031eae4  lis 3, 149
  031eae8  fmuls 5, 9, 8
  031eaec  addic 3, 3, 5056
  031eaf0  stfs 3, 36(30)
  031eaf4  stfs 4, 32(30)
  031eaf8  fmsubs 1, 2, 1, 5
  031eafc  fadds 2, 7, 1
  031eb00  stfs 1, 8(30)
  031eb04  stfs 2, 40(30)
  031eb08  lfs 5, 320(3)
  031eb0c  fsubs 9, 4, 5
  031eb10  stfs 9, 16(31)
  031eb14  lfs 8, 36(30)
  031eb18  lfs 4, 324(3)
  031eb1c  fsubs 8, 8, 4
  031eb20  fmuls 1, 8, 8
  031eb24  stfs 8, 20(31)
  031eb28  lfs 7, 40(30)
  031eb2c  lfs 3, 328(3)
  031eb30  fsubs 7, 7, 3
  031eb34  fmadds 1, 9, 9, 1
  031eb38  fmadds 6, 7, 7, 1
  031eb3c  stfs 7, 24(31)
  031eb40  lfs 1, 44(30)
  031eb44  stfs 1, 28(31)
  031eb48  lfs 2, 12(4)
  031eb4c  lfs 1, 64(31)
  031eb50  fsqrts 6, 6
  031eb54  fcmpu 0, 6, 2
  031eb58  cror 6, 0, 2
  031eb5c  bt 6, 0x31ebd0
  031eb60  fdivs 2, 2, 6
  031eb64  lis 3, 50
  031eb68  addi 3, 3, -5580
  031eb6c  lfs 10, 16(3)
  031eb70  fsub 11, 10, 6
  031eb74  fsub 12, 10, 6
  031eb78  fsub 13, 10, 6
  031eb7c  fsub 0, 6, 10
  031eb80  fsub 31, 6, 10
  031eb84  fsub 6, 6, 10
  031eb88  fmuls 7, 7, 2
  031eb8c  fmuls 8, 8, 2
  031eb90  fmuls 9, 9, 2
  031eb94  fsel 11, 11, 10, 7
  031eb98  fsel 12, 12, 10, 8
  031eb9c  fsel 10, 13, 10, 9
  031eba0  fsel 7, 0, 11, 7
  031eba4  fsel 8, 31, 12, 8
  031eba8  fsel 6, 6, 10, 9
  031ebac  fadds 3, 7, 3
  031ebb0  fadds 4, 8, 4
  031ebb4  fadds 5, 6, 5
  031ebb8  stfs 3, 24(31)
  031ebbc  stfs 4, 20(31)
  031ebc0  stfs 5, 16(31)
  031ebc4  lfs 3, 80(30)
  031ebc8  fmuls 2, 3, 2
  031ebcc  b 0x31ebf4
  031ebd0  lfs 2, 32(30)
  031ebd4  stfs 2, 16(31)
  031ebd8  lfs 2, 36(30)
  031ebdc  stfs 2, 20(31)
  031ebe0  lfs 2, 40(30)
  031ebe4  stfs 2, 24(31)
  031ebe8  lfs 2, 44(30)
  031ebec  stfs 2, 28(31)
  031ebf0  lfs 2, 80(30)
  031ebf4  stfs 2, 44(31)
  031ebf8  lfs 2, 64(30)
  031ebfc  bl 0x502578
  031ec00  nop
  031ec04  stfs 1, 64(31)
  031ec08  lfs 2, 68(30)
  031ec0c  bl 0x502578
  031ec10  nop
  031ec14  stfs 1, 68(31)
  031ec18  ld 0, 160(1)
  031ec1c  mtlr 0
  031ec20  lfd 31, 136(1)
  031ec24  ld 30, 120(1)
  031ec28  ld 31, 128(1)
  031ec2c  addi 1, 1, 144
  031ec30  blr

M267_0031eca8:   # 0x31eca8, 0xf10 bytes
  031eca8  stdu 1, -608(1)
  031ecac  mflr 0
  031ecb0  std 0, 624(1)
  031ecb4  stfd 21, 520(1)
  031ecb8  stfd 22, 528(1)
  031ecbc  stfd 23, 536(1)
  031ecc0  stfd 24, 544(1)
  031ecc4  stfd 25, 552(1)
  031ecc8  stfd 26, 560(1)
  031eccc  stfd 27, 568(1)
  031ecd0  stfd 28, 576(1)
  031ecd4  stfd 29, 584(1)
  031ecd8  stfd 30, 592(1)
  031ecdc  stfd 31, 600(1)
  031ece0  std 30, 504(1)
  031ece4  lwz 30, 120(3)
  031ece8  lfs 1, 32(30)
  031ecec  lfs 2, 0(30)
  031ecf0  fsubs 7, 1, 2
  031ecf4  lis 4, 50
  031ecf8  std 28, 488(1)
  031ecfc  addi 4, 4, -5068
  031ed00  lis 28, 149
  031ed04  stfs 7, 128(1)
  031ed08  lfs 1, 36(30)
  031ed0c  lfs 2, 4(30)
  031ed10  fsubs 3, 1, 2
  031ed14  addic 28, 28, 5056
  031ed18  fmuls 1, 3, 3
  031ed1c  stfs 3, 132(1)
  031ed20  lfs 2, 40(30)
  031ed24  lfs 4, 8(30)
  031ed28  fsubs 2, 2, 4
  031ed2c  fmadds 1, 7, 7, 1
  031ed30  fmadds 1, 2, 2, 1
  031ed34  stfs 2, 136(1)
  031ed38  fsqrts 8, 1
  031ed3c  lfs 1, 44(30)
  031ed40  stfs 1, 140(1)
  031ed44  lfs 1, 84(30)
  031ed48  lfs 30, 0(4)
  031ed4c  std 31, 512(1)
  031ed50  lfs 4, 4(4)
  031ed54  ori 31, 3, 0
  031ed58  fdivs 1, 1, 8
  031ed5c  fdivs 13, 4, 8
  031ed60  fsub 5, 30, 8
  031ed64  fsub 6, 30, 8
  031ed68  fsub 9, 30, 8
  031ed6c  fsub 10, 8, 30
  031ed70  fsub 11, 8, 30
  031ed74  fsub 12, 8, 30
  031ed78  fsub 31, 30, 8
  031ed7c  fsub 0, 30, 8
  031ed80  fsub 29, 30, 8
  031ed84  fmuls 4, 3, 1
  031ed88  fmuls 28, 7, 1
  031ed8c  fmuls 1, 2, 1
  031ed90  fsel 5, 5, 30, 4
  031ed94  fsel 6, 6, 30, 28
  031ed98  fsel 9, 9, 30, 1
  031ed9c  fsel 4, 10, 5, 4
  031eda0  fsel 5, 11, 6, 28
  031eda4  fsel 1, 12, 9, 1
  031eda8  fmuls 9, 2, 13
  031edac  fmuls 28, 3, 13
  031edb0  fmuls 27, 7, 13
  031edb4  fsub 7, 8, 30
  031edb8  stfs 4, 132(1)
  031edbc  stfs 5, 128(1)
  031edc0  stfs 1, 136(1)
  031edc4  lfs 1, 0(30)
  031edc8  lfs 4, 4(30)
  031edcc  fadds 1, 1, 5
  031edd0  lfs 5, 8(30)
  031edd4  fsel 13, 31, 30, 28
  031edd8  fsel 11, 0, 30, 9
  031eddc  fsel 0, 29, 30, 27
  031ede0  fsub 12, 8, 30
  031ede4  fsub 8, 8, 30
  031ede8  stfs 1, 0(30)
  031edec  lfs 6, 132(1)
  031edf0  fadds 4, 4, 6
  031edf4  fsel 29, 7, 11, 9
  031edf8  fsel 28, 12, 13, 28
  031edfc  fsel 27, 8, 0, 27
  031ee00  stfs 4, 4(30)
  031ee04  lfs 4, 136(1)
  031ee08  fadds 4, 5, 4
  031ee0c  stfs 4, 8(30)
  031ee10  lfs 4, 320(28)
  031ee14  fsubs 1, 1, 4
  031ee18  stfs 1, 16(3)
  031ee1c  lfs 2, 4(30)
  031ee20  lfs 5, 324(28)
  031ee24  fsubs 2, 2, 5
  031ee28  fmuls 10, 2, 2
  031ee2c  stfs 2, 20(3)
  031ee30  lfs 3, 8(30)
  031ee34  lfs 6, 328(28)
  031ee38  fsubs 3, 3, 6
  031ee3c  fmadds 10, 1, 1, 10
  031ee40  fmadds 10, 3, 3, 10
  031ee44  stfs 3, 24(3)
  031ee48  fsqrts 31, 10
  031ee4c  lfs 10, 12(30)
  031ee50  stfs 10, 28(3)
  031ee54  lfs 7, 8(4)
  031ee58  fcmpu 0, 31, 7
  031ee5c  std 29, 496(1)
  031ee60  std 27, 480(1)
  031ee64  std 26, 472(1)
  031ee68  std 25, 464(1)
  031ee6c  std 24, 456(1)
  031ee70  std 23, 448(1)
  031ee74  cror 6, 0, 2
  031ee78  bt 6, 0x31ef00
  031ee7c  lwz 4, 8(30)
  031ee80  lis 3, 16856
  031ee84  srawi 5, 4, 31
  031ee88  srwi 6, 5, 1
  031ee8c  xor 4, 6, 4
  031ee90  subc 4, 4, 5
  031ee94  cmpw 4, 3
  031ee98  bf 1, 0x31ef00
  031ee9c  fdivs 7, 7, 31
  031eea0  fsub 8, 30, 31
  031eea4  fsub 9, 30, 31
  031eea8  fsub 10, 30, 31
  031eeac  fsub 11, 31, 30
  031eeb0  fsub 12, 31, 30
  031eeb4  fsub 13, 31, 30
  031eeb8  fmuls 3, 3, 7
  031eebc  fmuls 2, 2, 7
  031eec0  fmuls 1, 1, 7
  031eec4  fsel 8, 8, 30, 3
  031eec8  fsel 9, 9, 30, 2
  031eecc  fsel 10, 10, 30, 1
  031eed0  fsel 3, 11, 8, 3
  031eed4  fsel 2, 12, 9, 2
  031eed8  fsel 1, 13, 10, 1
  031eedc  fadds 3, 3, 6
  031eee0  fadds 2, 2, 5
  031eee4  fadds 1, 1, 4
  031eee8  stfs 3, 24(31)
  031eeec  stfs 2, 20(31)
  031eef0  stfs 1, 16(31)
  031eef4  lfs 1, 80(30)
  031eef8  fmuls 1, 1, 7
  031eefc  b 0x31ef24
  031ef00  lfs 1, 0(30)
  031ef04  stfs 1, 16(31)
  031ef08  lfs 1, 4(30)
  031ef0c  stfs 1, 20(31)
  031ef10  lfs 1, 8(30)
  031ef14  stfs 1, 24(31)
  031ef18  lfs 1, 12(30)
  031ef1c  stfs 1, 28(31)
  031ef20  lfs 1, 80(30)
  031ef24  stfs 1, 44(31)
  031ef28  lfs 1, 64(31)
  031ef2c  lfs 2, 64(30)
  031ef30  bl 0x502578
  031ef34  nop
  031ef38  stfs 1, 64(31)
  031ef3c  lfs 2, 68(30)
  031ef40  bl 0x502578
  031ef44  nop
  031ef48  lbz 3, 32(31)
  031ef4c  stfs 1, 68(31)
  031ef50  lfs 1, 128(1)
  031ef54  cmpwi 3, 0
  031ef58  lfs 2, 132(1)
  031ef5c  lfs 3, 136(1)
  031ef60  lfs 4, 140(1)
  031ef64  bf 2, 0x31f828
  031ef68  lwz 4, 8(30)
  031ef6c  lis 3, 17096
  031ef70  srawi 5, 4, 31
  031ef74  srwi 6, 5, 1
  031ef78  xor 4, 6, 4
  031ef7c  subc 4, 4, 5
  031ef80  cmpw 4, 3
  031ef84  bf 0, 0x31f3a0
  031ef88  lwz 4, 0(30)
  031ef8c  lis 3, 17402
  031ef90  srawi 5, 4, 31
  031ef94  srwi 6, 5, 1
  031ef98  xor 4, 6, 4
  031ef9c  subc 4, 4, 5
  031efa0  cmpw 4, 3
  031efa4  bf 0, 0x31f3a0
  031efa8  lwz 4, 4(30)
  031efac  lis 3, 17402
  031efb0  srawi 5, 4, 31
  031efb4  srwi 6, 5, 1
  031efb8  xor 4, 6, 4
  031efbc  subc 4, 4, 5
  031efc0  cmpw 4, 3
  031efc4  bf 0, 0x31f3a0
  031efc8  lis 3, 50
  031efcc  addi 3, 3, -5068
  031efd0  lfs 26, 12(3)
  031efd4  lfs 25, 16(3)
  031efd8  fmr 1, 26
  031efdc  fmr 2, 25
  031efe0  bl 0xfcbe8
  031efe4  nop
  031efe8  stfs 1, 144(1)
  031efec  fmr 2, 25
  031eff0  fmr 1, 26
  031eff4  bl 0xfcbe8
  031eff8  nop
  031effc  stfs 1, 148(1)
  031f000  fmr 1, 26
  031f004  fmr 2, 25
  031f008  bl 0xfcbe8
  031f00c  nop
  031f010  stfs 1, 152(1)
  031f014  lfs 2, 144(1)
  031f018  lfs 3, 0(30)
  031f01c  addic 3, 1, 144
  031f020  fadds 2, 2, 3
  031f024  lfs 3, 148(1)
  031f028  lfs 4, 156(1)
  031f02c  addic 4, 1, 160
  031f030  li 5, 4
  031f034  ori 6, 31, 0
  031f038  li 7, 0
  031f03c  stfs 2, 144(1)
  031f040  lfs 5, 4(30)
  031f044  fadds 2, 2, 27
  031f048  fadds 3, 3, 5
  031f04c  stfs 3, 148(1)
  031f050  lfs 5, 8(30)
  031f054  fadds 3, 3, 28
  031f058  stfs 2, 160(1)
  031f05c  fadds 1, 1, 5
  031f060  stfs 4, 172(1)
  031f064  fadds 2, 1, 29
  031f068  stfs 3, 164(1)
  031f06c  stfs 1, 152(1)
  031f070  stfs 2, 168(1)
  031f074  bl 0x57820
  031f078  nop
  031f07c  lfs 29, 128(1)
  031f080  lfs 1, 132(1)
  031f084  cmpwi 3, 0
  031f088  lfs 2, 136(1)
  031f08c  lfs 3, 140(1)
  031f090  bt 2, 0x31f3a0
  031f094  lis 3, 161
  031f098  lis 4, 16852
  031f09c  addic 3, 3, 2368
  031f0a0  lwz 3, 40(3)
  031f0a4  srawi 5, 3, 31
  031f0a8  srwi 6, 5, 1
  031f0ac  xor 3, 6, 3
  031f0b0  subc 3, 3, 5
  031f0b4  cmpw 3, 4
  031f0b8  bf 1, 0x31f3a0
  031f0bc  lis 3, 50
  031f0c0  li 26, 0
  031f0c4  addi 3, 3, -5068
  031f0c8  lis 27, 114
  031f0cc  ori 29, 26, 0
  031f0d0  lfs 4, 24(3)
  031f0d4  lfs 5, 20(3)
  031f0d8  stfs 3, 188(1)
  031f0dc  fmuls 1, 1, 4
  031f0e0  fmuls 3, 29, 4
  031f0e4  fmuls 2, 2, 4
  031f0e8  fsubs 24, 5, 31
  031f0ec  fsub 5, 31, 5
  031f0f0  stfs 3, 176(1)
  031f0f4  stfs 1, 180(1)
  031f0f8  stfs 2, 184(1)
  031f0fc  fsel 24, 5, 30, 24
  031f100  lfs 31, 28(3)
  031f104  lfs 30, 32(3)
  031f108  lfs 29, 36(3)
  031f10c  lfs 28, 40(3)
  031f110  lfs 27, 44(3)
  031f114  lfs 26, 48(3)
  031f118  lfs 25, 52(3)
  031f11c  fmr 1, 31
  031f120  fmr 2, 30
  031f124  bl 0xfcbe8
  031f128  nop
  031f12c  lis 3, 114
  031f130  lis 4, 20224
  031f134  lis 6, 20224
  031f138  lis 5, 12287
  031f13c  lis 7, 12032
  031f140  lfs 2, -3052(3)
  031f144  ori 5, 5, 65535
  031f148  ori 3, 4, 36863
  031f14c  lis 4, 20224
  031f150  fmuls 3, 2, 24
  031f154  ori 4, 4, 32767
  031f158  stw 3, 288(1)
  031f15c  stw 3, 292(1)
  031f160  ori 3, 6, 28671
  031f164  lis 6, 12032
  031f168  stw 4, 296(1)
  031f16c  lis 4, 12032
  031f170  stw 3, 300(1)
  031f174  ori 3, 6, 24447
  031f178  lis 6, 12032
  031f17c  stw 5, 304(1)
  031f180  ori 4, 4, 20351
  031f184  stw 5, 308(1)
  031f188  ori 5, 6, 16255
  031f18c  fmsubs 23, 1, 2, 3
  031f190  stw 3, 312(1)
  031f194  ori 6, 7, 79
  031f198  lis 7, 12032
  031f19c  stw 4, 316(1)
  031f1a0  lis 4, 16128
  031f1a4  stw 5, 320(1)
  031f1a8  stw 6, 324(1)
  031f1ac  li 3, 6
  031f1b0  stw 7, 328(1)
  031f1b4  stw 4, 332(1)
  031f1b8  bl 0xfc620
  031f1bc  nop
  031f1c0  sldi 4, 3, 2
  031f1c4  li 3, 6
  031f1c8  addc 4, 4, 1
  031f1cc  clrldi 4, 4, 32
  031f1d0  lwz 4, 288(4)
  031f1d4  extsw 25, 4
  031f1d8  bl 0xfc620
  031f1dc  nop
  031f1e0  lfs 1, -3056(27)
  031f1e4  sldi 3, 3, 2
  031f1e8  fmuls 2, 1, 28
  031f1ec  addc 3, 3, 1
  031f1f0  fmuls 1, 1, 27
  031f1f4  clrldi 3, 3, 32
  031f1f8  lwz 3, 312(3)
  031f1fc  extsw 24, 3
  031f200  fctiwz 2, 2
  031f204  fctiwz 1, 1
  031f208  stfd 2, 432(1)
  031f20c  lwz 3, 436(1)
  031f210  stfd 1, 432(1)
  031f214  lwz 4, 436(1)
  031f218  extsw 3, 3
  031f21c  extsw 4, 4
  031f220  bl 0xfe484
  031f224  nop
  031f228  lfs 1, -3056(27)
  031f22c  ori 23, 3, 0
  031f230  fmuls 2, 1, 26
  031f234  fmuls 1, 1, 25
  031f238  fctiwz 2, 2
  031f23c  fctiwz 1, 1
  031f240  stfd 2, 432(1)
  031f244  lwz 3, 436(1)
  031f248  stfd 1, 432(1)
  031f24c  extsw 3, 3
  031f250  lwz 4, 436(1)
  031f254  extsw 4, 4
  031f258  bl 0xfe484
  031f25c  nop
  031f260  ori 9, 3, 0
  031f264  std 29, 112(1)
  031f268  ori 8, 23, 0
  031f26c  fmr 1, 29
  031f270  addic 4, 1, 176
  031f274  fmr 2, 23
  031f278  ori 3, 30, 0
  031f27c  std 29, 120(1)
  031f280  ori 5, 25, 0
  031f284  ori 6, 24, 0
  031f288  bl 0x123390
  031f28c  nop
  031f290  addic 26, 26, 1
  031f294  cmpwi 26, 8
  031f298  bt 0, 0x31f11c
  031f29c  addic 4, 1, 128
  031f2a0  ori 3, 31, 0
  031f2a4  bl 0x31de18
  031f2a8  addic 29, 29, 1
  031f2ac  cmpwi 29, 10
  031f2b0  bt 0, 0x31f29c
  031f2b4  li 3, 6
  031f2b8  li 4, 0
  031f2bc  ori 5, 31, 0
  031f2c0  li 6, 193
  031f2c4  bl 0x15d204
  031f2c8  nop
  031f2cc  cmpwi 3, 0
  031f2d0  stw 3, 88(30)
  031f2d4  bt 2, 0x31f2e4
  031f2d8  li 4, 2048
  031f2dc  bl 0x15d710
  031f2e0  nop
  031f2e4  lis 3, 151
  031f2e8  addic 3, 3, -25376
  031f2ec  lwz 3, 8324(3)
  031f2f0  cmpwi 3, 50
  031f2f4  bt 2, 0x31f390
  031f2f8  lfs 1, 4(30)
  031f2fc  lfs 2, 324(28)
  031f300  lfs 3, 0(30)
  031f304  fsubs 1, 1, 2
  031f308  lfs 2, 320(28)
  031f30c  fsubs 2, 3, 2
  031f310  lfs 3, 8(30)
  031f314  lfs 4, 328(28)
  031f318  fsubs 3, 3, 4
  031f31c  fmuls 1, 1, 1
  031f320  lis 3, 50
  031f324  addi 3, 3, -5068
  031f328  fmadds 1, 2, 2, 1
  031f32c  lfs 2, 56(3)
  031f330  fmadds 1, 3, 3, 1
  031f334  fsqrts 1, 1
  031f338  fcmpu 0, 1, 2
  031f33c  cror 6, 1, 2
  031f340  bt 6, 0x31f390
  031f344  lis 3, 50
  031f348  li 5, -3056
  031f34c  vspltisw 2, -1
  031f350  addi 3, 3, -5068
  031f354  li 4, 68
  031f358  vslw 2, 2, 2
  031f35c  lfs 2, 60(3)
  031f360  lfs 3, 64(3)
  031f364  fsubs 1, 2, 1
  031f368  lvlx 3, 5, 27
  031f36c  li 5, 360
  031f370  fmuls 1, 1, 3
  031f374  stfs 1, 352(28)
  031f378  lvlx 4, 4, 3
  031f37c  vspltw 4, 4, 0
  031f380  vmaddfp 2, 3, 4, 2
  031f384  vctsxs 2, 2, 0
  031f388  vspltw 2, 2, 0
  031f38c  stvewx 2, 5, 28
  031f390  lbz 3, 32(31)
  031f394  addic 3, 3, 1
  031f398  stb 3, 32(31)
  031f39c  b 0x31fb58
  031f3a0  lis 3, 16840
  031f3a4  lwz 4, 40(30)
  031f3a8  cmpw 4, 3
  031f3ac  bf 2, 0x31f488
  031f3b0  lwz 4, 8(30)
  031f3b4  lis 3, 16856
  031f3b8  srawi 5, 4, 31
  031f3bc  srwi 6, 5, 1
  031f3c0  xor 4, 6, 4
  031f3c4  subc 4, 4, 5
  031f3c8  cmpw 4, 3
  031f3cc  bf 0, 0x31f488
  031f3d0  lfs 1, 0(30)
  031f3d4  lis 4, 50
  031f3d8  stfs 1, 192(1)
  031f3dc  lfs 1, 4(30)
  031f3e0  lis 3, 16840
  031f3e4  addi 4, 4, -5068
  031f3e8  stfs 1, 196(1)
  031f3ec  lfs 1, 8(30)
  031f3f0  li 29, 0
  031f3f4  stfs 1, 200(1)
  031f3f8  lfs 1, 12(30)
  031f3fc  stw 3, 200(1)
  031f400  stfs 1, 204(1)
  031f404  lfs 29, 72(4)
  031f408  lfs 28, 76(4)
  031f40c  lfs 2, 80(30)
  031f410  addic 4, 1, 192
  031f414  addic 5, 1, 128
  031f418  fmuls 1, 2, 29
  031f41c  ori 3, 31, 0
  031f420  fmuls 2, 2, 28
  031f424  bl 0x367688
  031f428  nop
  031f42c  addic 29, 29, 1
  031f430  cmpwi 29, 5
  031f434  bt 0, 0x31f40c
  031f438  lis 3, 50
  031f43c  lis 4, 114
  031f440  addi 3, 3, -5068
  031f444  lfs 1, 80(3)
  031f448  lfs 2, 84(3)
  031f44c  lfs 3, -3064(4)
  031f450  lfs 4, 84(30)
  031f454  fmadds 1, 3, 1, 2
  031f458  lwz 3, 88(30)
  031f45c  cmpwi 3, 0
  031f460  fmuls 1, 4, 1
  031f464  stfs 1, 84(30)
  031f468  bt 1, 0x31f488
  031f46c  li 3, 0
  031f470  li 4, 0
  031f474  ori 5, 31, 0
  031f478  li 6, 263
  031f47c  bl 0x15d204
  031f480  nop
  031f484  stw 3, 88(30)
  031f488  lwz 3, 8(30)
  031f48c  lwz 4, 40(30)
  031f490  srawi 6, 3, 31
  031f494  srawi 5, 4, 31
  031f498  srwi 8, 6, 1
  031f49c  srwi 7, 5, 1
  031f4a0  xor 4, 7, 4
  031f4a4  xor 7, 8, 3
  031f4a8  subc 3, 4, 5
  031f4ac  subc 4, 7, 6
  031f4b0  cmpw 4, 3
  031f4b4  bf 0, 0x31fb58
  031f4b8  lis 4, 16852
  031f4bc  cmpw 3, 4
  031f4c0  bf 1, 0x31f818
  031f4c4  lis 3, 50
  031f4c8  lfs 1, 128(1)
  031f4cc  li 26, 0
  031f4d0  addi 3, 3, -5068
  031f4d4  ori 29, 26, 0
  031f4d8  lis 27, 114
  031f4dc  lfs 2, 20(3)
  031f4e0  lfs 3, 88(3)
  031f4e4  lfs 4, 132(1)
  031f4e8  fsubs 22, 2, 31
  031f4ec  lfs 5, 136(1)
  031f4f0  fmuls 1, 1, 3
  031f4f4  fmuls 4, 4, 3
  031f4f8  lfs 6, 140(1)
  031f4fc  fmuls 3, 5, 3
  031f500  fsub 2, 31, 2
  031f504  stfs 6, 220(1)
  031f508  stfs 1, 208(1)
  031f50c  stfs 4, 212(1)
  031f510  fsel 22, 2, 30, 22
  031f514  stfs 3, 216(1)
  031f518  lfs 31, 28(3)
  031f51c  lfs 30, 32(3)
  031f520  lfs 29, 92(3)
  031f524  lfs 28, 96(3)
  031f528  lfs 27, 100(3)
  031f52c  lfs 26, 40(3)
  031f530  lfs 25, 44(3)
  031f534  lfs 24, 48(3)
  031f538  lfs 23, 52(3)
  031f53c  fmr 1, 31
  031f540  fmr 2, 30
  031f544  bl 0xfcbe8
  031f548  nop
  031f54c  lis 3, 114
  031f550  lis 5, 20224
  031f554  lis 4, 20224
  031f558  lis 6, 12287
  031f55c  ori 4, 4, 28671
  031f560  lfs 2, -3052(3)
  031f564  ori 3, 5, 36863
  031f568  lis 5, 20224
  031f56c  fmuls 3, 2, 22
  031f570  ori 6, 6, 65535
  031f574  ori 5, 5, 32767
  031f578  stw 3, 336(1)
  031f57c  stw 3, 340(1)
  031f580  lis 3, 12032
  031f584  stw 4, 348(1)
  031f588  lis 4, 12032
  031f58c  ori 3, 3, 24447
  031f590  stw 6, 352(1)
  031f594  ori 4, 4, 20351
  031f598  stw 5, 344(1)
  031f59c  lis 5, 12032
  031f5a0  stw 6, 356(1)
  031f5a4  lis 6, 12032
  031f5a8  fmsubs 21, 1, 2, 3
  031f5ac  stw 3, 360(1)
  031f5b0  fmr 1, 29
  031f5b4  ori 3, 5, 16255
  031f5b8  stw 4, 364(1)
  031f5bc  ori 4, 6, 79
  031f5c0  fmr 2, 28
  031f5c4  lis 5, 12032
  031f5c8  lis 6, 16128
  031f5cc  stw 3, 368(1)
  031f5d0  stw 4, 372(1)
  031f5d4  stw 5, 376(1)
  031f5d8  stw 6, 380(1)
  031f5dc  bl 0xfcbe8
  031f5e0  nop
  031f5e4  stfs 1, 224(1)
  031f5e8  fmr 2, 28
  031f5ec  fmr 1, 29
  031f5f0  bl 0xfcbe8
  031f5f4  nop
  031f5f8  stfs 1, 228(1)
  031f5fc  fmr 1, 29
  031f600  fmr 2, 28
  031f604  bl 0xfcbe8
  031f608  nop
  031f60c  stfs 1, 232(1)
  031f610  lfs 2, 224(1)
  031f614  lfs 3, 0(30)
  031f618  li 3, 6
  031f61c  fadds 2, 2, 3
  031f620  lfs 3, 228(1)
  031f624  stfs 2, 224(1)
  031f628  lfs 2, 4(30)
  031f62c  fadds 2, 3, 2
  031f630  stfs 2, 228(1)
  031f634  lfs 2, 8(30)
  031f638  fadds 1, 1, 2
  031f63c  stfs 1, 232(1)
  031f640  bl 0xfc620
  031f644  nop
  031f648  sldi 3, 3, 2
  031f64c  addc 3, 3, 1
  031f650  clrldi 4, 3, 32
  031f654  li 3, 6
  031f658  lwz 4, 336(4)
  031f65c  extsw 25, 4
  031f660  bl 0xfc620
  031f664  nop
  031f668  lfs 1, -3056(27)
  031f66c  sldi 3, 3, 2
  031f670  fmuls 2, 1, 26
  031f674  fmuls 1, 1, 25
  031f678  addc 3, 3, 1
  031f67c  clrldi 3, 3, 32
  031f680  lwz 3, 360(3)
  031f684  fctiwz 2, 2
  031f688  extsw 24, 3
  031f68c  fctiwz 1, 1
  031f690  stfd 2, 432(1)
  031f694  lwz 3, 436(1)
  031f698  stfd 1, 432(1)
  031f69c  lwz 4, 436(1)
  031f6a0  extsw 3, 3
  031f6a4  extsw 4, 4
  031f6a8  bl 0xfe484
  031f6ac  nop
  031f6b0  lfs 1, -3056(27)
  031f6b4  ori 23, 3, 0
  031f6b8  fmuls 2, 1, 24
  031f6bc  fmuls 1, 1, 23
  031f6c0  fctiwz 2, 2
  031f6c4  fctiwz 1, 1
  031f6c8  stfd 2, 432(1)
  031f6cc  lwz 3, 436(1)
  031f6d0  stfd 1, 432(1)
  031f6d4  lwz 4, 436(1)
  031f6d8  extsw 3, 3
  031f6dc  extsw 4, 4
  031f6e0  bl 0xfe484
  031f6e4  nop
  031f6e8  ori 9, 3, 0
  031f6ec  std 29, 112(1)
  031f6f0  addic 3, 1, 224
  031f6f4  ori 8, 23, 0
  031f6f8  fmr 1, 27
  031f6fc  addic 4, 1, 208
  031f700  fmr 2, 21
  031f704  ori 5, 25, 0
  031f708  std 29, 120(1)
  031f70c  ori 6, 24, 0
  031f710  bl 0x123390
  031f714  nop
  031f718  addic 26, 26, 1
  031f71c  cmpwi 26, 8
  031f720  bt 0, 0x31f53c
  031f724  addic 4, 1, 128
  031f728  ori 3, 31, 0
  031f72c  bl 0x31de18
  031f730  addic 29, 29, 1
  031f734  cmpwi 29, 10
  031f738  bt 0, 0x31f724
  031f73c  li 3, 6
  031f740  li 4, 0
  031f744  ori 5, 31, 0
  031f748  li 6, 193
  031f74c  bl 0x15d204
  031f750  nop
  031f754  cmpwi 3, 0
  031f758  stw 3, 88(30)
  031f75c  bt 2, 0x31f76c
  031f760  li 4, 2048
  031f764  bl 0x15d710
  031f768  nop
  031f76c  lis 3, 151
  031f770  addic 3, 3, -25376
  031f774  lwz 3, 8324(3)
  031f778  cmpwi 3, 50
  031f77c  bt 2, 0x31f818
  031f780  lfs 1, 4(30)
  031f784  lfs 2, 324(28)
  031f788  lfs 3, 0(30)
  031f78c  fsubs 1, 1, 2
  031f790  lfs 2, 320(28)
  031f794  fsubs 2, 3, 2
  031f798  lfs 3, 8(30)
  031f79c  lfs 4, 328(28)
  031f7a0  fsubs 3, 3, 4
  031f7a4  fmuls 1, 1, 1
  031f7a8  lis 3, 50
  031f7ac  addi 3, 3, -5068
  031f7b0  fmadds 1, 2, 2, 1
  031f7b4  lfs 2, 56(3)
  031f7b8  fmadds 1, 3, 3, 1
  031f7bc  fsqrts 1, 1
  031f7c0  fcmpu 0, 1, 2
  031f7c4  cror 6, 1, 2
  031f7c8  bt 6, 0x31f818
  031f7cc  lis 3, 50
  031f7d0  vspltisw 2, -1
  031f7d4  li 5, -3056
  031f7d8  addi 3, 3, -5068
  031f7dc  li 4, 68
  031f7e0  vslw 2, 2, 2
  031f7e4  lfs 2, 60(3)
  031f7e8  lfs 3, 64(3)
  031f7ec  fsubs 1, 2, 1
  031f7f0  lvlx 3, 5, 27
  031f7f4  li 5, 360
  031f7f8  fmuls 1, 1, 3
  031f7fc  stfs 1, 352(28)
  031f800  lvlx 4, 4, 3
  031f804  vspltw 4, 4, 0
  031f808  vmaddfp 2, 3, 4, 2
  031f80c  vctsxs 2, 2, 0
  031f810  vspltw 2, 2, 0
  031f814  stvewx 2, 5, 28
  031f818  lbz 3, 32(31)
  031f81c  addic 3, 3, 1
  031f820  stb 3, 32(31)
  031f824  b 0x31fb58
  031f828  addic 3, 3, 1
  031f82c  lis 4, 16840
  031f830  stb 3, 32(31)
  031f834  lwz 3, 40(30)
  031f838  cmpw 3, 4
  031f83c  bf 2, 0x31f8f0
  031f840  li 29, 0
  031f844  lis 3, 50
  031f848  lis 4, 16840
  031f84c  addi 3, 3, -5068
  031f850  stb 29, 49(31)
  031f854  lfs 1, 0(30)
  031f858  stfs 1, 240(1)
  031f85c  lfs 1, 4(30)
  031f860  sth 29, 50(31)
  031f864  stfs 1, 244(1)
  031f868  lfs 1, 8(30)
  031f86c  stfs 1, 248(1)
  031f870  lfs 1, 12(30)
  031f874  stw 4, 248(1)
  031f878  stfs 1, 252(1)
  031f87c  lfs 31, 72(3)
  031f880  lfs 30, 76(3)
  031f884  lfs 2, 80(30)
  031f888  addic 4, 1, 240
  031f88c  addic 5, 1, 128
  031f890  fmuls 1, 2, 31
  031f894  ori 3, 31, 0
  031f898  fmuls 2, 2, 30
  031f89c  bl 0x367688
  031f8a0  nop
  031f8a4  addic 29, 29, 1
  031f8a8  cmpwi 29, 2
  031f8ac  bt 0, 0x31f884
  031f8b0  lis 3, 50
  031f8b4  lis 4, 114
  031f8b8  addi 3, 3, -5068
  031f8bc  lfs 1, 68(3)
  031f8c0  lfs 2, -3056(4)
  031f8c4  lbz 3, 32(31)
  031f8c8  fmuls 1, 2, 1
  031f8cc  fctiwz 1, 1
  031f8d0  stfd 1, 432(1)
  031f8d4  lwz 4, 436(1)
  031f8d8  cmpw 3, 4
  031f8dc  bf 1, 0x31fb58
  031f8e0  ori 3, 31, 0
  031f8e4  bl 0xefb38
  031f8e8  nop
  031f8ec  b 0x31fb58
  031f8f0  lis 3, 50
  031f8f4  li 29, 0
  031f8f8  addi 3, 3, -5068
  031f8fc  ori 28, 29, 0
  031f900  lfs 5, 104(3)
  031f904  lfs 6, 20(3)
  031f908  fmuls 1, 1, 5
  031f90c  fmuls 2, 2, 5
  031f910  stfs 4, 268(1)
  031f914  fmuls 3, 3, 5
  031f918  fsubs 22, 6, 31
  031f91c  fsub 4, 31, 6
  031f920  stfs 1, 256(1)
  031f924  stfs 2, 260(1)
  031f928  stfs 3, 264(1)
  031f92c  fsel 22, 4, 30, 22
  031f930  lfs 31, 28(3)
  031f934  lfs 30, 32(3)
  031f938  lfs 29, 108(3)
  031f93c  lfs 28, 84(3)
  031f940  lfs 27, 100(3)
  031f944  lfs 26, 40(3)
  031f948  lfs 25, 44(3)
  031f94c  lfs 24, 48(3)
  031f950  lfs 23, 52(3)
  031f954  fmr 1, 31
  031f958  fmr 2, 30
  031f95c  bl 0xfcbe8
  031f960  nop
  031f964  lis 3, 114
  031f968  lis 5, 20224
  031f96c  lis 4, 20224
  031f970  lis 6, 12287
  031f974  ori 4, 4, 28671
  031f978  lfs 2, -3052(3)
  031f97c  ori 3, 5, 36863
  031f980  lis 5, 20224
  031f984  fmuls 3, 2, 22
  031f988  ori 6, 6, 65535
  031f98c  ori 5, 5, 32767
  031f990  stw 3, 384(1)
  031f994  stw 3, 388(1)
  031f998  lis 3, 12032
  031f99c  stw 4, 396(1)
  031f9a0  lis 4, 12032
  031f9a4  ori 3, 3, 24447
  031f9a8  stw 6, 400(1)
  031f9ac  ori 4, 4, 20351
  031f9b0  stw 5, 392(1)
  031f9b4  lis 5, 12032
  031f9b8  stw 6, 404(1)
  031f9bc  lis 6, 12032
  031f9c0  fmsubs 21, 1, 2, 3
  031f9c4  stw 3, 408(1)
  031f9c8  fmr 1, 29
  031f9cc  ori 3, 5, 16255
  031f9d0  stw 4, 412(1)
  031f9d4  ori 4, 6, 79
  031f9d8  fmr 2, 28
  031f9dc  lis 5, 12032
  031f9e0  lis 6, 16128
  031f9e4  stw 3, 416(1)
  031f9e8  stw 4, 420(1)
  031f9ec  stw 5, 424(1)
  031f9f0  stw 6, 428(1)
  031f9f4  bl 0xfcbe8
  031f9f8  nop
  031f9fc  stfs 1, 272(1)
  031fa00  fmr 2, 28
  031fa04  fmr 1, 29
  031fa08  bl 0xfcbe8
  031fa0c  nop
  031fa10  stfs 1, 276(1)
  031fa14  fmr 1, 29
  031fa18  fmr 2, 28
  031fa1c  bl 0xfcbe8
  031fa20  nop
  031fa24  stfs 1, 280(1)
  031fa28  lfs 2, 272(1)
  031fa2c  lfs 3, 0(30)
  031fa30  li 3, 6
  031fa34  fadds 2, 2, 3
  031fa38  lfs 3, 276(1)
  031fa3c  stfs 2, 272(1)
  031fa40  lfs 2, 4(30)
  031fa44  fadds 2, 3, 2
  031fa48  stfs 2, 276(1)
  031fa4c  lfs 2, 8(30)
  031fa50  fadds 1, 1, 2
  031fa54  stfs 1, 280(1)
  031fa58  bl 0xfc620
  031fa5c  nop
  031fa60  sldi 3, 3, 2
  031fa64  addc 3, 3, 1
  031fa68  clrldi 4, 3, 32
  031fa6c  li 3, 6
  031fa70  lwz 4, 384(4)
  031fa74  extsw 27, 4
  031fa78  bl 0xfc620
  031fa7c  nop
  031fa80  lis 26, 114
  031fa84  sldi 3, 3, 2
  031fa88  addc 3, 3, 1
  031fa8c  lfs 1, -3056(26)
  031fa90  clrldi 3, 3, 32
  031fa94  fmuls 2, 1, 26
  031fa98  fmuls 1, 1, 25
  031fa9c  lwz 3, 408(3)
  031faa0  extsw 25, 3
  031faa4  fctiwz 2, 2
  031faa8  fctiwz 1, 1
  031faac  stfd 2, 432(1)
  031fab0  lwz 3, 436(1)
  031fab4  stfd 1, 432(1)
  031fab8  lwz 4, 436(1)
  031fabc  extsw 3, 3
  031fac0  extsw 4, 4
  031fac4  bl 0xfe484
  031fac8  nop
  031facc  lfs 1, -3056(26)
  031fad0  ori 26, 3, 0
  031fad4  fmuls 2, 1, 24
  031fad8  fmuls 1, 1, 23
  031fadc  fctiwz 2, 2
  031fae0  fctiwz 1, 1
  031fae4  stfd 2, 432(1)
  031fae8  lwz 3, 436(1)
  031faec  stfd 1, 432(1)
  031faf0  extsw 3, 3
  031faf4  lwz 4, 436(1)
  031faf8  extsw 4, 4
  031fafc  bl 0xfe484
  031fb00  nop
  031fb04  ori 9, 3, 0
  031fb08  std 28, 112(1)
  031fb0c  ori 8, 26, 0
  031fb10  fmr 1, 27
  031fb14  addic 3, 1, 272
  031fb18  fmr 2, 21
  031fb1c  addic 4, 1, 256
  031fb20  std 28, 120(1)
  031fb24  ori 5, 27, 0
  031fb28  ori 6, 25, 0
  031fb2c  bl 0x123390
  031fb30  nop
  031fb34  addic 29, 29, 1
  031fb38  cmpwi 29, 3
  031fb3c  bt 0, 0x31f954
  031fb40  lbz 3, 32(31)
  031fb44  cmpwi 3, 2
  031fb48  bf 1, 0x31fb58
  031fb4c  ori 3, 31, 0
  031fb50  bl 0xefb38
  031fb54  nop
  031fb58  ld 0, 624(1)
  031fb5c  mtlr 0
  031fb60  lfd 21, 520(1)
  031fb64  lfd 22, 528(1)
  031fb68  lfd 23, 536(1)
  031fb6c  lfd 24, 544(1)
  031fb70  lfd 25, 552(1)
  031fb74  lfd 26, 560(1)
  031fb78  lfd 27, 568(1)
  031fb7c  lfd 28, 576(1)
  031fb80  lfd 29, 584(1)
  031fb84  lfd 30, 592(1)
  031fb88  lfd 31, 600(1)
  031fb8c  ld 23, 448(1)
  031fb90  ld 24, 456(1)
  031fb94  ld 25, 464(1)
  031fb98  ld 26, 472(1)
  031fb9c  ld 27, 480(1)
  031fba0  ld 28, 488(1)
  031fba4  ld 29, 496(1)
  031fba8  ld 30, 504(1)
  031fbac  ld 31, 512(1)
  031fbb0  addi 1, 1, 608
  031fbb4  blr

UpdateMoby_263:   # 0x31fbe0, 0x990 bytes
  031fbe0  stdu 1, -272(1)
  031fbe4  mflr 0
  031fbe8  std 0, 288(1)
  031fbec  stfd 25, 216(1)
  031fbf0  stfd 26, 224(1)
  031fbf4  stfd 27, 232(1)
  031fbf8  stfd 28, 240(1)
  031fbfc  stfd 29, 248(1)
  031fc00  stfd 30, 256(1)
  031fc04  stfd 31, 264(1)
  031fc08  std 29, 192(1)
  031fc0c  std 31, 208(1)
  031fc10  lwz 29, 120(3)
  031fc14  ori 31, 3, 0
  031fc18  lwz 3, 76(29)
  031fc1c  cmpwi 3, 2
  031fc20  std 30, 200(1)
  031fc24  std 28, 184(1)
  031fc28  std 27, 176(1)
  031fc2c  std 26, 168(1)
  031fc30  std 25, 160(1)
  031fc34  std 24, 152(1)
  031fc38  std 23, 144(1)
  031fc3c  std 22, 136(1)
  031fc40  cmpwi 1, 3, 1
  031fc44  bf 2, 0x31fc54
  031fc48  ori 3, 31, 0
  031fc4c  bl 0x31ea48
  031fc50  b 0x32051c
  031fc54  bf 6, 0x31fc64
  031fc58  ori 3, 31, 0
  031fc5c  bl 0x31eca8
  031fc60  b 0x32051c
  031fc64  lbz 3, 188(31)
  031fc68  cmpwi 3, 0
  031fc6c  bf 2, 0x320064
  031fc70  lwz 4, 72(29)
  031fc74  cmpwi 4, 0
  031fc78  bf 2, 0x320064
  031fc7c  lis 3, 50
  031fc80  li 4, 0
  031fc84  addi 3, 3, -1096
  031fc88  lis 5, 114
  031fc8c  lfs 31, 0(3)
  031fc90  stw 4, 56(29)
  031fc94  stw 4, 52(29)
  031fc98  stw 4, 48(29)
  031fc9c  lfs 29, 4(3)
  031fca0  lfs 1, -3052(5)
  031fca4  lwz 28, 16(29)
  031fca8  fmuls 1, 1, 29
  031fcac  cmpwi 28, 0
  031fcb0  stfs 1, 12(29)
  031fcb4  bt 0, 0x320058
  031fcb8  lis 3, 165
  031fcbc  slwi 4, 28, 2
  031fcc0  vspltisw 2, 0
  031fcc4  addic 28, 3, 7136
  031fcc8  extsw 3, 4
  031fccc  vsldoi 3, 2, 2, 0
  031fcd0  vsldoi 5, 3, 3, 0
  031fcd4  lwzx 28, 28, 3
  031fcd8  lwz 3, 0(28)
  031fcdc  lvlx 4, 0, 28
  031fce0  cmpwi 3, 0
  031fce4  bf 1, 0x31fd88
  031fce8  vspltisw 5, 0
  031fcec  li 9, 0
  031fcf0  addic 6, 28, 16
  031fcf4  addic 7, 28, 20
  031fcf8  vsldoi 3, 5, 5, 0
  031fcfc  addic 8, 28, 24
  031fd00  li 3, 48
  031fd04  li 4, 52
  031fd08  li 5, 56
  031fd0c  vsldoi 2, 3, 3, 0
  031fd10  lvlx 4, 0, 6
  031fd14  vspltw 7, 3, 0
  031fd18  vaddfp 6, 5, 4
  031fd1c  vspltw 5, 5, 0
  031fd20  addic 10, 7, 16
  031fd24  vspltw 8, 2, 0
  031fd28  addic 9, 9, 1
  031fd2c  addic 11, 8, 16
  031fd30  vaddfp 5, 5, 4
  031fd34  addic 6, 6, 16
  031fd38  vspltw 4, 6, 0
  031fd3c  stvewx 4, 3, 29
  031fd40  lvlx 4, 0, 7
  031fd44  vaddfp 3, 3, 4
  031fd48  ori 7, 10, 0
  031fd4c  vaddfp 4, 7, 4
  031fd50  vspltw 3, 3, 0
  031fd54  stvewx 3, 4, 29
  031fd58  lvlx 3, 0, 8
  031fd5c  ori 8, 11, 0
  031fd60  vaddfp 2, 2, 3
  031fd64  vaddfp 6, 8, 3
  031fd68  vsldoi 3, 4, 4, 0
  031fd6c  vspltw 4, 2, 0
  031fd70  vsldoi 2, 6, 6, 0
  031fd74  stvewx 4, 5, 29
  031fd78  lwz 10, 0(28)
  031fd7c  lvlx 4, 0, 28
  031fd80  cmpw 9, 10
  031fd84  bt 0, 0x31fd10
  031fd88  vspltw 4, 4, 0
  031fd8c  lis 3, 50
  031fd90  vspltisw 6, -1
  031fd94  li 4, 12
  031fd98  addi 3, 3, -1096
  031fd9c  vcfsx 4, 4, 0
  031fda0  vspltisw 9, -1
  031fda4  vslw 6, 6, 6
  031fda8  vspltisw 11, -1
  031fdac  lvlx 7, 4, 3
  031fdb0  vspltw 7, 7, 0
  031fdb4  vslw 9, 9, 9
  031fdb8  li 4, 48
  031fdbc  vspltisw 13, -1
  031fdc0  li 5, 52
  031fdc4  vspltw 5, 5, 0
  031fdc8  vrefp 8, 4
  031fdcc  vspltw 3, 3, 0
  031fdd0  li 6, 56
  031fdd4  vspltw 2, 2, 0
  031fdd8  li 30, 0
  031fddc  lfs 30, 8(3)
  031fde0  vnmsubfp 10, 8, 4, 7
  031fde4  vmaddfp 6, 8, 10, 6
  031fde8  vslw 8, 11, 11
  031fdec  vspltisw 10, -1
  031fdf0  vspltisw 11, -1
  031fdf4  vslw 10, 10, 10
  031fdf8  vslw 11, 11, 11
  031fdfc  vnmsubfp 12, 6, 4, 7
  031fe00  vmaddfp 6, 6, 12, 9
  031fe04  vslw 9, 13, 13
  031fe08  vnmsubfp 4, 6, 4, 7
  031fe0c  vmaddfp 4, 6, 4, 8
  031fe10  vmaddfp 5, 5, 4, 10
  031fe14  vmaddfp 3, 3, 4, 11
  031fe18  vmaddfp 2, 2, 4, 9
  031fe1c  stvewx 5, 4, 29
  031fe20  stvewx 3, 5, 29
  031fe24  stvewx 2, 6, 29
  031fe28  lfs 1, 24(28)
  031fe2c  fsubs 1, 1, 29
  031fe30  stfs 1, 56(29)
  031fe34  lfs 29, 16(3)
  031fe38  bl 0x31e1b8
  031fe3c  cmpwi 3, 0
  031fe40  bt 2, 0x31fef0
  031fe44  lwz 27, 120(3)
  031fe48  lfs 1, 36(27)
  031fe4c  lfs 2, 4(27)
  031fe50  lfs 3, 32(27)
  031fe54  fsubs 28, 1, 2
  031fe58  lfs 1, 0(27)
  031fe5c  fsubs 27, 3, 1
  031fe60  lfs 1, 40(27)
  031fe64  lfs 2, 8(27)
  031fe68  fsubs 26, 1, 2
  031fe6c  fmuls 1, 28, 28
  031fe70  fmadds 1, 27, 27, 1
  031fe74  fmadds 1, 26, 26, 1
  031fe78  fsqrts 25, 1
  031fe7c  fmr 1, 31
  031fe80  fsubs 2, 25, 29
  031fe84  bl 0xfcbe8
  031fe88  nop
  031fe8c  fdivs 1, 1, 25
  031fe90  lfs 2, 0(27)
  031fe94  lfs 3, 4(27)
  031fe98  lfs 4, 8(27)
  031fe9c  fsub 5, 31, 25
  031fea0  fsub 6, 31, 25
  031fea4  fsub 7, 31, 25
  031fea8  fsub 8, 25, 31
  031feac  fsub 9, 25, 31
  031feb0  fsub 10, 25, 31
  031feb4  fmuls 11, 26, 1
  031feb8  fmuls 12, 28, 1
  031febc  fmuls 1, 27, 1
  031fec0  fsel 5, 5, 31, 11
  031fec4  fsel 6, 6, 31, 12
  031fec8  fsel 7, 7, 31, 1
  031fecc  fsel 5, 8, 5, 11
  031fed0  fsel 6, 9, 6, 12
  031fed4  fsel 1, 10, 7, 1
  031fed8  fadds 4, 4, 5
  031fedc  fadds 3, 3, 6
  031fee0  fadds 1, 2, 1
  031fee4  stfs 4, 8(27)
  031fee8  stfs 3, 4(27)
  031feec  stfs 1, 0(27)
  031fef0  addic 30, 30, 1
  031fef4  cmpwi 30, 23
  031fef8  bt 0, 0x31fe38
  031fefc  lis 24, 149
  031ff00  li 30, 0
  031ff04  addic 26, 28, 32
  031ff08  addic 25, 28, 16
  031ff0c  addic 24, 24, 5056
  031ff10  ori 3, 31, 0
  031ff14  bl 0x31e5f0
  031ff18  ori 27, 3, 0
  031ff1c  cmpwi 27, 0
  031ff20  bt 2, 0x32004c
  031ff24  lwz 3, 0(28)
  031ff28  lwz 23, 120(27)
  031ff2c  addic 3, 3, -2
  031ff30  extsw 3, 3
  031ff34  bl 0xfc620
  031ff38  nop
  031ff3c  ori 22, 3, 0
  031ff40  fmr 1, 31
  031ff44  fmr 2, 30
  031ff48  bl 0xfcbe8
  031ff4c  nop
  031ff50  sldi 3, 22, 4
  031ff54  stw 22, 20(23)
  031ff58  addc 4, 3, 26
  031ff5c  addc 3, 3, 25
  031ff60  clrldi 4, 4, 32
  031ff64  clrldi 3, 3, 32
  031ff68  lfs 2, 0(4)
  031ff6c  lfs 3, 0(3)
  031ff70  lfs 4, 4(4)
  031ff74  fsubs 2, 2, 3
  031ff78  lfs 5, 4(3)
  031ff7c  fsubs 4, 4, 5
  031ff80  lfs 5, 8(4)
  031ff84  lfs 6, 8(3)
  031ff88  lfs 7, 12(4)
  031ff8c  fsubs 5, 5, 6
  031ff90  fmadds 2, 2, 1, 3
  031ff94  stfs 2, 32(23)
  031ff98  lfs 3, 4(3)
  031ff9c  fmadds 3, 4, 1, 3
  031ffa0  stfs 3, 36(23)
  031ffa4  lfs 3, 8(3)
  031ffa8  stfs 7, 44(23)
  031ffac  fmadds 1, 5, 1, 3
  031ffb0  stfs 1, 40(23)
  031ffb4  stfs 2, 16(27)
  031ffb8  lfs 1, 36(23)
  031ffbc  stfs 1, 20(27)
  031ffc0  lfs 1, 40(23)
  031ffc4  stfs 1, 24(27)
  031ffc8  lfs 1, 44(23)
  031ffcc  stfs 1, 28(27)
  031ffd0  lfs 1, 16(28)
  031ffd4  lfs 2, 0(23)
  031ffd8  fadds 1, 1, 2
  031ffdc  stfs 1, 16(27)
  031ffe0  lfs 2, 20(28)
  031ffe4  lfs 3, 4(23)
  031ffe8  fadds 2, 2, 3
  031ffec  stfs 2, 20(27)
  031fff0  lfs 3, 24(28)
  031fff4  lfs 4, 8(23)
  031fff8  lfs 5, 28(28)
  031fffc  fadds 3, 3, 4
  0320000  stfs 5, 28(27)
  0320004  lfs 5, 320(24)
  0320008  fadds 1, 1, 5
  032000c  stfs 1, 16(27)
  0320010  lfs 4, 324(24)
  0320014  fadds 2, 2, 4
  0320018  stfs 2, 20(27)
  032001c  lfs 4, 328(24)
  0320020  fadds 3, 3, 4
  0320024  stfs 3, 24(27)
  0320028  lfs 4, 48(23)
  032002c  fsubs 1, 1, 4
  0320030  stfs 1, 16(27)
  0320034  lfs 1, 52(23)
  0320038  fsubs 1, 2, 1
  032003c  stfs 1, 20(27)
  0320040  lfs 1, 56(23)
  0320044  fsubs 1, 3, 1
  0320048  stfs 1, 24(27)
  032004c  addic 30, 30, 1
  0320050  cmpwi 30, 50
  0320054  bt 0, 0x31ff10
  0320058  li 3, 1
  032005c  stw 3, 72(29)
  0320060  lbz 3, 188(31)
  0320064  cmpwi 3, 0
  0320068  bf 2, 0x3200a8
  032006c  lis 3, 50
  0320070  lis 4, 114
  0320074  addi 3, 3, -1096
  0320078  lfs 1, 20(3)
  032007c  lfs 2, -3056(4)
  0320080  fmuls 1, 2, 1
  0320084  fctiwz 1, 1
  0320088  stfd 1, 112(1)
  032008c  lwz 3, 116(1)
  0320090  extsw 3, 3
  0320094  bl 0xfc620
  0320098  nop
  032009c  cmpwi 3, 0
  03200a0  bf 2, 0x3200a8
  03200a4  bl 0x31e1b8
  03200a8  li 3, 255
  03200ac  stb 3, 48(31)
  03200b0  lwz 4, 16(29)
  03200b4  sth 3, 50(31)
  03200b8  cmpwi 4, 0
  03200bc  bt 0, 0x32051c
  03200c0  lis 3, 165
  03200c4  lfs 1, 32(29)
  03200c8  addic 30, 3, 7136
  03200cc  lwz 3, 16(29)
  03200d0  stfs 1, 16(31)
  03200d4  slwi 3, 3, 2
  03200d8  lfs 1, 36(29)
  03200dc  extsw 3, 3
  03200e0  stfs 1, 20(31)
  03200e4  lfs 1, 40(29)
  03200e8  lbz 4, 188(31)
  03200ec  stfs 1, 24(31)
  03200f0  lfs 1, 44(29)
  03200f4  cmpwi 4, 0
  03200f8  lwzx 30, 30, 3
  03200fc  stfs 1, 28(31)
  0320100  bf 2, 0x320178
  0320104  lwz 3, 24(29)
  0320108  cmpwi 3, 50
  032010c  bf 0, 0x320178
  0320110  addic 3, 29, 28
  0320114  bl 0x4fff60
  0320118  nop
  032011c  cmpwi 3, 0
  0320120  bt 2, 0x320178
  0320124  lis 3, 50
  0320128  lis 4, 114
  032012c  addi 3, 3, -1096
  0320130  lfs 1, 24(3)
  0320134  lfs 2, -3056(4)
  0320138  fmuls 1, 2, 1
  032013c  fctiwz 1, 1
  0320140  stfd 1, 112(1)
  0320144  lfs 1, 28(3)
  0320148  lwz 28, 116(1)
  032014c  fmuls 1, 2, 1
  0320150  fctiwz 1, 1
  0320154  stfd 1, 112(1)
  0320158  lwz 3, 116(1)
  032015c  extsw 3, 3
  0320160  bl 0xfc620
  0320164  nop
  0320168  addc 4, 28, 3
  032016c  ori 3, 31, 0
  0320170  stw 4, 28(29)
  0320174  bl 0x31e5f0
  0320178  lfs 1, 64(31)
  032017c  lfs 2, 64(29)
  0320180  bl 0x502578
  0320184  nop
  0320188  stfs 1, 64(31)
  032018c  lfs 1, 68(31)
  0320190  lfs 2, 68(29)
  0320194  bl 0x502578
  0320198  nop
  032019c  ori 3, 31, 0
  03201a0  stfs 1, 68(31)
  03201a4  lwz 6, 20(29)
  03201a8  addic 5, 31, 16
  03201ac  lfs 1, 12(29)
  03201b0  ori 4, 30, 0
  03201b4  extsw 6, 6
  03201b8  li 7, 1
  03201bc  bl 0x138238
  03201c0  nop
  03201c4  stw 3, 20(29)
  03201c8  lwz 4, 0(30)
  03201cc  addic 4, 4, -1
  03201d0  cmpw 3, 4
  03201d4  bf 2, 0x320234
  03201d8  lbz 3, 188(31)
  03201dc  cmpwi 3, 0
  03201e0  bt 2, 0x32020c
  03201e4  lwz 4, 120(31)
  03201e8  ori 3, 31, 0
  03201ec  lwz 4, 80(4)
  03201f0  lwz 4, 120(4)
  03201f4  lwz 5, 24(4)
  03201f8  addic 5, 5, -1
  03201fc  stw 5, 24(4)
  0320200  bl 0xefb38
  0320204  nop
  0320208  b 0x320234
  032020c  li 3, 0
  0320210  stw 3, 20(29)
  0320214  lfs 1, 16(30)
  0320218  stfs 1, 16(31)
  032021c  lfs 1, 20(30)
  0320220  stfs 1, 20(31)
  0320224  lfs 1, 24(30)
  0320228  stfs 1, 24(31)
  032022c  lfs 1, 28(30)
  0320230  stfs 1, 28(31)
  0320234  lwz 3, 20(29)
  0320238  cmpwi 3, 0
  032023c  bf 2, 0x32034c
  0320240  lfs 9, 36(30)
  0320244  lfs 8, 20(30)
  0320248  lfs 7, 32(30)
  032024c  fsubs 9, 9, 8
  0320250  lfs 6, 16(30)
  0320254  lfs 11, 40(30)
  0320258  fsubs 7, 7, 6
  032025c  lfs 10, 24(30)
  0320260  lis 3, 50
  0320264  fsubs 11, 11, 10
  0320268  addi 3, 3, -1096
  032026c  fmuls 1, 9, 9
  0320270  lfs 12, 0(3)
  0320274  fmadds 4, 7, 7, 1
  0320278  fmr 1, 12
  032027c  fmadds 4, 11, 11, 4
  0320280  fmr 2, 1
  0320284  fsqrts 5, 4
  0320288  fmr 3, 2
  032028c  fcmpu 0, 5, 3
  0320290  bt 2, 0x3202e4
  0320294  frsqrte 1, 4
  0320298  lis 3, 50
  032029c  addi 3, 3, -1096
  03202a0  lfs 2, 32(3)
  03202a4  lfs 3, 8(3)
  03202a8  fmuls 13, 4, 1
  03202ac  fmuls 0, 2, 1
  03202b0  fnmsubs 13, 13, 1, 3
  03202b4  fmadds 1, 13, 0, 1
  03202b8  fmuls 13, 4, 1
  03202bc  fmuls 0, 2, 1
  03202c0  fnmsubs 13, 13, 1, 3
  03202c4  fmadds 1, 13, 0, 1
  03202c8  fmuls 4, 4, 1
  03202cc  fmuls 2, 2, 1
  03202d0  fnmsubs 3, 4, 1, 3
  03202d4  fmadds 3, 3, 2, 1
  03202d8  fmuls 1, 7, 3
  03202dc  fmuls 2, 9, 3
  03202e0  fmuls 3, 11, 3
  03202e4  lfs 4, 20(31)
  03202e8  lfs 7, 16(31)
  03202ec  fsubs 4, 4, 8
  03202f0  fsubs 6, 7, 6
  03202f4  lfs 7, 24(31)
  03202f8  lis 3, 50
  03202fc  fsubs 7, 7, 10
  0320300  addi 3, 3, -1096
  0320304  fmuls 2, 2, 4
  0320308  fmadds 1, 1, 6, 2
  032030c  lfs 2, 36(3)
  0320310  fmadds 1, 3, 7, 1
  0320314  fsub 3, 1, 12
  0320318  fsel 1, 3, 1, 12
  032031c  fmuls 1, 1, 2
  0320320  fdivs 1, 1, 5
  0320324  fctiwz 1, 1
  0320328  stfd 1, 112(1)
  032032c  lwz 3, 116(1)
  0320330  stb 3, 35(31)
  0320334  clrlwi 3, 3, 24
  0320338  cmpwi 3, 128
  032033c  bf 1, 0x320480
  0320340  li 3, 128
  0320344  stb 3, 35(31)
  0320348  b 0x320480
  032034c  ori 4, 3, 0
  0320350  lwz 3, 0(30)
  0320354  addic 5, 3, -2
  0320358  cmpw 4, 5
  032035c  bf 2, 0x320478
  0320360  slwi 3, 3, 4
  0320364  addc 3, 30, 3
  0320368  clrldi 3, 3, 32
  032036c  lfs 10, -12(3)
  0320370  lfs 3, 4(3)
  0320374  lfs 9, -16(3)
  0320378  fsubs 10, 10, 3
  032037c  lfs 1, 0(3)
  0320380  lfs 11, -8(3)
  0320384  fsubs 9, 9, 1
  0320388  lfs 5, 8(3)
  032038c  fsubs 11, 11, 5
  0320390  lis 3, 50
  0320394  addi 3, 3, -1096
  0320398  fmuls 2, 10, 10
  032039c  lfs 12, 0(3)
  03203a0  fmadds 7, 9, 9, 2
  03203a4  fmr 2, 12
  03203a8  fmadds 7, 11, 11, 7
  03203ac  fmr 4, 2
  03203b0  fsqrts 8, 7
  03203b4  fmr 6, 4
  03203b8  fcmpu 0, 8, 6
  03203bc  bt 2, 0x320410
  03203c0  frsqrte 2, 7
  03203c4  lis 3, 50
  03203c8  addi 3, 3, -1096
  03203cc  lfs 4, 32(3)
  03203d0  lfs 6, 8(3)
  03203d4  fmuls 13, 7, 2
  03203d8  fmuls 0, 4, 2
  03203dc  fnmsubs 13, 13, 2, 6
  03203e0  fmadds 2, 13, 0, 2
  03203e4  fmuls 13, 7, 2
  03203e8  fmuls 0, 4, 2
  03203ec  fnmsubs 13, 13, 2, 6
  03203f0  fmadds 2, 13, 0, 2
  03203f4  fmuls 7, 7, 2
  03203f8  fmuls 4, 4, 2
  03203fc  fnmsubs 6, 7, 2, 6
  0320400  fmadds 6, 6, 4, 2
  0320404  fmuls 2, 9, 6
  0320408  fmuls 4, 10, 6
  032040c  fmuls 6, 11, 6
  0320410  lfs 7, 20(31)
  0320414  lfs 9, 16(31)
  0320418  fsubs 3, 7, 3
  032041c  fsubs 1, 9, 1
  0320420  lfs 7, 24(31)
  0320424  fsubs 5, 7, 5
  0320428  lis 3, 50
  032042c  addi 3, 3, -1096
  0320430  fmuls 3, 4, 3
  0320434  fmadds 1, 2, 1, 3
  0320438  lfs 2, 36(3)
  032043c  fmadds 1, 6, 5, 1
  0320440  fsub 3, 1, 12
  0320444  fsel 1, 3, 1, 12
  0320448  fmuls 1, 1, 2
  032044c  fdivs 1, 1, 8
  0320450  fctiwz 1, 1
  0320454  stfd 1, 112(1)
  0320458  lwz 3, 116(1)
  032045c  clrlwi 4, 3, 24
  0320460  stb 3, 35(31)
  0320464  cmpwi 4, 128
  0320468  bf 1, 0x320480
  032046c  li 3, 128
  0320470  stb 3, 35(31)
  0320474  b 0x320480
  0320478  li 3, 128
  032047c  stb 3, 35(31)
  0320480  lfs 1, 16(31)
  0320484  stfs 1, 32(29)
  0320488  lfs 1, 20(31)
  032048c  stfs 1, 36(29)
  0320490  lis 3, 149
  0320494  lfs 1, 24(31)
  0320498  addic 3, 3, 5056
  032049c  stfs 1, 40(29)
  03204a0  lfs 1, 28(31)
  03204a4  lfs 2, 0(29)
  03204a8  stfs 1, 44(29)
  03204ac  lfs 1, 16(31)
  03204b0  fadds 1, 1, 2
  03204b4  lfs 2, 20(31)
  03204b8  lfs 3, 24(31)
  03204bc  stfs 1, 16(31)
  03204c0  lfs 4, 4(29)
  03204c4  fadds 2, 2, 4
  03204c8  stfs 2, 20(31)
  03204cc  lfs 4, 320(3)
  03204d0  fadds 1, 1, 4
  03204d4  lfs 4, 8(29)
  03204d8  fadds 3, 3, 4
  03204dc  stfs 1, 16(31)
  03204e0  lfs 4, 324(3)
  03204e4  fadds 2, 2, 4
  03204e8  stfs 2, 20(31)
  03204ec  lfs 4, 328(3)
  03204f0  fadds 3, 3, 4
  03204f4  stfs 3, 24(31)
  03204f8  lfs 4, 48(29)
  03204fc  fsubs 1, 1, 4
  0320500  stfs 1, 16(31)
  0320504  lfs 1, 52(29)
  0320508  fsubs 1, 2, 1
  032050c  stfs 1, 20(31)
  0320510  lfs 1, 56(29)
  0320514  fsubs 1, 3, 1
  0320518  stfs 1, 24(31)
  032051c  ld 0, 288(1)
  0320520  mtlr 0
  0320524  lfd 25, 216(1)
  0320528  lfd 26, 224(1)
  032052c  lfd 27, 232(1)
  0320530  lfd 28, 240(1)
  0320534  lfd 29, 248(1)
  0320538  lfd 30, 256(1)
  032053c  lfd 31, 264(1)
  0320540  ld 22, 136(1)
  0320544  ld 23, 144(1)
  0320548  ld 24, 152(1)
  032054c  ld 25, 160(1)
  0320550  ld 26, 168(1)
  0320554  ld 27, 176(1)
  0320558  ld 28, 184(1)
  032055c  ld 29, 192(1)
  0320560  ld 30, 200(1)
  0320564  ld 31, 208(1)
  0320568  addi 1, 1, 272
  032056c  blr

M267_00320570:   # 0x320570, 0x14 bytes
  0320570  lis 3, 128
  0320574  lis 4, 1
  0320578  addic 3, 3, 84
  032057c  stw 4, 72(3)
  0320580  blr
