# game/update/moby1510.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1510:   # 0x28dfa8, 0x544 bytes
  028dfa8  stdu 1, -304(1)
  028dfac  mflr 0
  028dfb0  std 0, 320(1)
  028dfb4  stfd 27, 264(1)
  028dfb8  stfd 28, 272(1)
  028dfbc  stfd 29, 280(1)
  028dfc0  stfd 30, 288(1)
  028dfc4  stfd 31, 296(1)
  028dfc8  addi 0, 1, 208
  028dfcc  stvx 31, 0, 0
  028dfd0  std 30, 248(1)
  028dfd4  std 29, 240(1)
  028dfd8  ori 30, 3, 0
  028dfdc  li 3, 2
  028dfe0  std 31, 256(1)
  028dfe4  std 28, 232(1)
  028dfe8  lwz 29, 120(30)
  028dfec  bl 0xfc620
  028dff0  nop
  028dff4  cmpwi 3, 0
  028dff8  bt 2, 0x28e010
  028dffc  lis 3, 113
  028e000  ori 4, 30, 0
  028e004  addic 3, 3, -22392
  028e008  bl 0x6d7e0
  028e00c  nop
  028e010  lfs 1, 16(30)
  028e014  lfs 2, 0(29)
  028e018  lis 3, 114
  028e01c  fadds 1, 1, 2
  028e020  lfs 2, 20(30)
  028e024  lfs 3, 24(30)
  028e028  lis 4, 251
  028e02c  stfs 1, 16(30)
  028e030  lfs 1, 4(29)
  028e034  fadds 1, 2, 1
  028e038  stfs 1, 20(30)
  028e03c  lfs 1, 8(29)
  028e040  fadds 1, 3, 1
  028e044  stfs 1, 24(30)
  028e048  lfs 5, 0(29)
  028e04c  lfs 2, -3064(3)
  028e050  lfs 4, -9624(4)
  028e054  fabs 6, 5
  028e058  fmuls 4, 2, 4
  028e05c  lwz 3, 8(29)
  028e060  lfs 3, 4(29)
  028e064  lfs 1, 8(29)
  028e068  cmpwi 1, 3, 0
  028e06c  lfs 30, 16(29)
  028e070  fcmpu 0, 6, 4
  028e074  cror 2, 0, 2
  028e078  bt 2, 0x28e0a0
  028e07c  lis 3, 41
  028e080  lis 4, 123
  028e084  addi 3, 3, -8344
  028e088  lfs 6, 0(3)
  028e08c  lfs 7, -19996(4)
  028e090  fsubs 7, 7, 6
  028e094  fmadds 6, 7, 2, 6
  028e098  fmuls 5, 5, 6
  028e09c  stfs 5, 0(29)
  028e0a0  fabs 5, 3
  028e0a4  fcmpu 0, 5, 4
  028e0a8  cror 2, 0, 2
  028e0ac  bt 2, 0x28e0d4
  028e0b0  lis 3, 41
  028e0b4  lis 4, 123
  028e0b8  addi 3, 3, -8344
  028e0bc  lfs 4, 0(3)
  028e0c0  lfs 5, -19996(4)
  028e0c4  fsubs 5, 5, 4
  028e0c8  fmadds 4, 5, 2, 4
  028e0cc  fmuls 3, 3, 4
  028e0d0  stfs 3, 4(29)
  028e0d4  lis 3, 41
  028e0d8  addi 3, 3, -8344
  028e0dc  lfs 31, 4(3)
  028e0e0  bf 5, 0x28e104
  028e0e4  lis 3, 41
  028e0e8  lis 4, 123
  028e0ec  addi 3, 3, -8344
  028e0f0  lfs 3, 0(3)
  028e0f4  lfs 4, -19996(4)
  028e0f8  fsubs 4, 4, 3
  028e0fc  fmadds 2, 4, 2, 3
  028e100  fmuls 1, 1, 2
  028e104  lis 3, 114
  028e108  lis 4, 123
  028e10c  lfs 2, -3048(3)
  028e110  lfs 3, -20000(4)
  028e114  fnmsubs 1, 2, 3, 1
  028e118  fmr 2, 30
  028e11c  stfs 1, 8(29)
  028e120  lfs 1, 64(30)
  028e124  bl 0x502578
  028e128  nop
  028e12c  stfs 1, 64(30)
  028e130  lfs 1, 68(30)
  028e134  lfs 2, 20(29)
  028e138  bl 0x502578
  028e13c  nop
  028e140  stfs 1, 68(30)
  028e144  lfs 1, 72(30)
  028e148  lfs 2, 24(29)
  028e14c  bl 0x502578
  028e150  nop
  028e154  lwz 3, 16(30)
  028e158  lis 4, 41
  028e15c  lis 7, 16384
  028e160  stfs 1, 72(30)
  028e164  srawi 5, 3, 31
  028e168  addi 4, 4, -8344
  028e16c  srwi 6, 5, 1
  028e170  xor 3, 6, 3
  028e174  subc 3, 3, 5
  028e178  lfs 30, 8(4)
  028e17c  cmpw 3, 7
  028e180  bt 0, 0x28e1f4
  028e184  lis 4, 17535
  028e188  ori 4, 4, 16384
  028e18c  cmpw 3, 4
  028e190  bt 1, 0x28e1f4
  028e194  lwz 5, 20(30)
  028e198  lis 3, 17535
  028e19c  lis 4, 16384
  028e1a0  srawi 6, 5, 31
  028e1a4  ori 3, 3, 16384
  028e1a8  srwi 7, 6, 1
  028e1ac  xor 5, 7, 5
  028e1b0  subc 5, 5, 6
  028e1b4  cmpw 1, 5, 3
  028e1b8  cmpw 5, 4
  028e1bc  cror 2, 0, 5
  028e1c0  bt 2, 0x28e1f4
  028e1c4  lwz 5, 24(30)
  028e1c8  lis 3, 17535
  028e1cc  lis 4, 16384
  028e1d0  srawi 6, 5, 31
  028e1d4  ori 3, 3, 16384
  028e1d8  srwi 7, 6, 1
  028e1dc  xor 5, 7, 5
  028e1e0  subc 5, 5, 6
  028e1e4  cmpw 5, 4
  028e1e8  cmpw 1, 5, 3
  028e1ec  bt 0, 0x28e1f4
  028e1f0  bf 5, 0x28e204
  028e1f4  ori 3, 30, 0
  028e1f8  bl 0xefb38
  028e1fc  nop
  028e200  b 0x28e4b0
  028e204  addic 31, 30, 16
  028e208  fmr 1, 30
  028e20c  li 5, 0
  028e210  lwz 6, 36(29)
  028e214  ori 3, 31, 0
  028e218  bl 0x59e20
  028e21c  nop
  028e220  ori 28, 3, 0
  028e224  addic 3, 29, 32
  028e228  bl 0x4fff60
  028e22c  nop
  028e230  or 3, 3, 28
  028e234  cmpwi 3, 0
  028e238  bt 2, 0x28e2fc
  028e23c  cmpwi 28, 0
  028e240  bt 2, 0x28e288
  028e244  lis 3, 161
  028e248  addic 3, 3, 2368
  028e24c  lwz 3, 28(3)
  028e250  cmpwi 3, 0
  028e254  bt 2, 0x28e274
  028e258  lis 5, 161
  028e25c  ori 3, 29, 0
  028e260  addic 5, 5, 2432
  028e264  ori 4, 29, 0
  028e268  bl 0x500608
  028e26c  nop
  028e270  b 0x28e288
  028e274  li 3, 0
  028e278  stw 3, 12(29)
  028e27c  stw 3, 8(29)
  028e280  stw 3, 4(29)
  028e284  stw 3, 0(29)
  028e288  lis 3, 41
  028e28c  li 11, 0
  028e290  fmr 1, 31
  028e294  addi 5, 3, -8344
  028e298  fmr 2, 31
  028e29c  li 6, 1
  028e2a0  fmr 4, 30
  028e2a4  li 7, -1
  028e2a8  ori 3, 30, 0
  028e2ac  ori 4, 29, 0
  028e2b0  lfs 3, 12(5)
  028e2b4  lfs 5, 16(5)
  028e2b8  li 8, 20
  028e2bc  lfs 6, 20(5)
  028e2c0  li 9, 3
  028e2c4  lfs 7, 24(5)
  028e2c8  li 10, 4
  028e2cc  std 11, 144(1)
  028e2d0  ori 5, 31, 0
  028e2d4  std 6, 160(1)
  028e2d8  std 6, 168(1)
  028e2dc  std 7, 176(1)
  028e2e0  std 11, 184(1)
  028e2e4  bl 0x10e030
  028e2e8  nop
  028e2ec  ori 3, 30, 0
  028e2f0  bl 0xefb38
  028e2f4  nop
  028e2f8  b 0x28e4b0
  028e2fc  lis 3, 41
  028e300  lis 30, 161
  028e304  addi 28, 3, -8344
  028e308  addic 30, 30, 23856
  028e30c  lfs 1, 28(28)
  028e310  lfs 2, 32(28)
  028e314  bl 0xfcbe8
  028e318  nop
  028e31c  lis 3, 114
  028e320  lfs 2, 40(28)
  028e324  lfs 3, -3056(3)
  028e328  lfs 4, 36(28)
  028e32c  fmuls 2, 3, 2
  028e330  fmuls 31, 1, 4
  028e334  fctiwz 2, 2
  028e338  stfd 2, 192(1)
  028e33c  lfs 1, 44(28)
  028e340  lwz 3, 196(1)
  028e344  fmuls 1, 3, 1
  028e348  extsw 3, 3
  028e34c  fctiwz 1, 1
  028e350  stfd 1, 192(1)
  028e354  lwz 4, 196(1)
  028e358  extsw 4, 4
  028e35c  bl 0xfe484
  028e360  nop
  028e364  ori 8, 3, 0
  028e368  lis 5, 20224
  028e36c  fmr 1, 31
  028e370  lis 6, 8191
  028e374  ori 3, 31, 0
  028e378  li 9, 1
  028e37c  ori 4, 30, 0
  028e380  ori 5, 5, 32767
  028e384  ori 6, 6, 65535
  028e388  bl 0x1268f8
  028e38c  nop
  028e390  li 3, 56
  028e394  lfs 28, 48(28)
  028e398  lfs 29, 16(28)
  028e39c  li 29, 0
  028e3a0  lfs 30, 52(28)
  028e3a4  lfs 31, 0(28)
  028e3a8  lvlx 31, 3, 28
  028e3ac  vspltw 31, 31, 0
  028e3b0  li 3, 6
  028e3b4  bl 0xfc620
  028e3b8  nop
  028e3bc  ori 28, 3, 0
  028e3c0  li 3, 2
  028e3c4  bl 0xfc620
  028e3c8  nop
  028e3cc  li 4, 0
  028e3d0  fmr 1, 28
  028e3d4  neg 5, 28
  028e3d8  subc 3, 4, 3
  028e3dc  fmr 2, 29
  028e3e0  subc 4, 28, 5
  028e3e4  cntlzw 3, 3
  028e3e8  sldi 3, 3, 58
  028e3ec  sradi 3, 3, 63
  028e3f0  and 3, 3, 4
  028e3f4  addc 28, 5, 3
  028e3f8  bl 0xfcbe8
  028e3fc  nop
  028e400  fmr 27, 1
  028e404  li 3, 48
  028e408  li 4, 255
  028e40c  bl 0xfe484
  028e410  nop
  028e414  slwi 4, 3, 8
  028e418  slwi 5, 3, 16
  028e41c  fmr 1, 30
  028e420  or 3, 4, 3
  028e424  fmr 2, 31
  028e428  ori 7, 28, 0
  028e42c  fmr 3, 31
  028e430  or 4, 3, 5
  028e434  fmr 4, 27
  028e438  ori 3, 31, 0
  028e43c  oris 10, 4, 24576
  028e440  ori 8, 30, 0
  028e444  extsw 10, 10
  028e448  bl 0x126f50
  028e44c  nop
  028e450  cmpwi 3, 0
  028e454  bt 2, 0x28e4a4
  028e458  vspltisw 2, -1
  028e45c  li 4, 68
  028e460  lis 5, 114
  028e464  li 6, -3056
  028e468  vslw 2, 2, 2
  028e46c  stb 4, 3(3)
  028e470  li 4, 10
  028e474  lvlx 3, 6, 5
  028e478  li 6, 2
  028e47c  vmaddfp 2, 3, 31, 2
  028e480  li 5, 43
  028e484  li 7, 96
  028e488  vctsxs 2, 2, 0
  028e48c  vsplth 3, 2, 1
  028e490  vspltb 2, 2, 3
  028e494  stvehx 3, 4, 3
  028e498  stw 6, 36(3)
  028e49c  stb 7, 42(3)
  028e4a0  stvebx 2, 5, 3
  028e4a4  addic 29, 29, 1
  028e4a8  cmpwi 29, 2
  028e4ac  bt 0, 0x28e3b0
  028e4b0  li 0, 208
  028e4b4  lvx 31, 1, 0
  028e4b8  ld 0, 320(1)
  028e4bc  mtlr 0
  028e4c0  lfd 27, 264(1)
  028e4c4  lfd 28, 272(1)
  028e4c8  lfd 29, 280(1)
  028e4cc  lfd 30, 288(1)
  028e4d0  lfd 31, 296(1)
  028e4d4  ld 28, 232(1)
  028e4d8  ld 29, 240(1)
  028e4dc  ld 30, 248(1)
  028e4e0  ld 31, 256(1)
  028e4e4  addi 1, 1, 304
  028e4e8  blr
