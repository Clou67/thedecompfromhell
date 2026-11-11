# game/update/moby1290.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1290_0023dccc:   # 0x23dccc, 0x14 bytes
  023dccc  lis 3, 121
  023dcd0  lis 4, 1
  023dcd4  addic 3, 3, -8712
  023dcd8  stw 4, 72(3)
  023dcdc  blr

M1290_0023dcf8:   # 0x23dcf8, 0x308 bytes
  023dcf8  stdu 1, -256(1)
  023dcfc  mflr 0
  023dd00  std 0, 272(1)
  023dd04  stfd 25, 200(1)
  023dd08  stfd 26, 208(1)
  023dd0c  stfd 27, 216(1)
  023dd10  stfd 28, 224(1)
  023dd14  stfd 29, 232(1)
  023dd18  stfd 30, 240(1)
  023dd1c  stfd 31, 248(1)
  023dd20  addi 0, 1, 144
  023dd24  stvx 31, 0, 0
  023dd28  lis 4, 149
  023dd2c  lfs 1, 20(3)
  023dd30  addic 4, 4, 5056
  023dd34  lis 5, 36
  023dd38  lfs 2, 324(4)
  023dd3c  lfs 3, 320(4)
  023dd40  fsubs 2, 2, 1
  023dd44  lfs 4, 16(3)
  023dd48  lfs 5, 328(4)
  023dd4c  fsubs 3, 3, 4
  023dd50  lfs 6, 24(3)
  023dd54  fsubs 5, 5, 6
  023dd58  addi 5, 5, -8992
  023dd5c  fmuls 7, 2, 2
  023dd60  stfs 3, 112(1)
  023dd64  stfs 2, 116(1)
  023dd68  lfs 8, 332(4)
  023dd6c  fmadds 7, 3, 3, 7
  023dd70  stfs 5, 120(1)
  023dd74  stfs 8, 124(1)
  023dd78  lfs 8, 4(5)
  023dd7c  lfs 25, 0(5)
  023dd80  fmadds 7, 5, 5, 7
  023dd84  std 29, 176(1)
  023dd88  fsqrts 7, 7
  023dd8c  lfs 9, 8(5)
  023dd90  std 30, 184(1)
  023dd94  li 29, 0
  023dd98  lwz 30, 120(3)
  023dd9c  std 31, 192(1)
  023dda0  li 3, 16
  023dda4  addic 31, 30, 48
  023dda8  fdivs 8, 8, 7
  023ddac  fsub 10, 25, 7
  023ddb0  fsub 11, 25, 7
  023ddb4  fsub 0, 25, 7
  023ddb8  fsub 12, 7, 25
  023ddbc  fsub 13, 7, 25
  023ddc0  fsub 7, 7, 25
  023ddc4  fmuls 2, 2, 8
  023ddc8  fmuls 3, 3, 8
  023ddcc  fmuls 5, 5, 8
  023ddd0  fsel 8, 10, 25, 2
  023ddd4  fsel 10, 11, 25, 3
  023ddd8  fsel 11, 0, 25, 5
  023dddc  fsel 2, 12, 8, 2
  023dde0  fsel 3, 13, 10, 3
  023dde4  fsel 5, 7, 11, 5
  023dde8  fmuls 7, 2, 2
  023ddec  fadds 4, 3, 4
  023ddf0  fadds 1, 2, 1
  023ddf4  fadds 6, 5, 6
  023ddf8  fmadds 7, 3, 3, 7
  023ddfc  stfs 4, 112(1)
  023de00  stfs 1, 116(1)
  023de04  fmadds 7, 5, 5, 7
  023de08  stfs 6, 120(1)
  023de0c  lfs 26, 12(5)
  023de10  <unknown>
  023de14  lfs 27, 16(5)
  023de18  fsqrts 7, 7
  023de1c  vspltw 31, 31, 0
  023de20  lfs 28, 20(5)
  023de24  fdivs 1, 9, 7
  023de28  fsub 4, 25, 7
  023de2c  fsub 6, 25, 7
  023de30  fsub 8, 25, 7
  023de34  fsub 29, 7, 25
  023de38  fsub 30, 7, 25
  023de3c  fsub 31, 7, 25
  023de40  fmuls 5, 5, 1
  023de44  fmuls 2, 2, 1
  023de48  fmuls 1, 3, 1
  023de4c  fsel 3, 4, 25, 5
  023de50  fsel 4, 6, 25, 2
  023de54  fsel 6, 8, 25, 1
  023de58  fsel 29, 29, 3, 5
  023de5c  std 28, 168(1)
  023de60  fsel 30, 30, 4, 2
  023de64  fsel 31, 31, 6, 1
  023de68  lfs 1, 16(30)
  023de6c  lfs 2, 32(30)
  023de70  fadds 1, 1, 2
  023de74  fcmpu 0, 1, 26
  023de78  fcmpu 1, 1, 25
  023de7c  stfs 1, 16(30)
  023de80  bt 0, 0x23de90
  023de84  fsubs 1, 1, 26
  023de88  stfs 1, 16(30)
  023de8c  b 0x23de9c
  023de90  bt 5, 0x23de9c
  023de94  fadds 1, 1, 26
  023de98  stfs 1, 16(30)
  023de9c  addic 3, 30, 48
  023dea0  bl 0x4fff60
  023dea4  nop
  023dea8  lis 4, 114
  023deac  li 5, -3056
  023deb0  ori 6, 3, 0
  023deb4  lwz 3, 48(30)
  023deb8  cmpwi 6, 0
  023debc  lfs 1, -3056(4)
  023dec0  <unknown>
  023dec4  bt 2, 0x23def0
  023dec8  vspltisw 3, -1
  023decc  fmuls 2, 1, 27
  023ded0  vslw 3, 3, 3
  023ded4  vmaddfp 2, 2, 31, 3
  023ded8  fctiwz 2, 2
  023dedc  vctsxs 2, 2, 0
  023dee0  stfd 2, 128(1)
  023dee4  lwz 3, 132(1)
  023dee8  vspltw 2, 2, 0
  023deec  stvewx 2, 0, 31
  023def0  fmuls 1, 1, 27
  023def4  fctiwz 1, 1
  023def8  stfd 1, 128(1)
  023defc  lwz 4, 132(1)
  023df00  subc 3, 4, 3
  023df04  extsw 3, 3
  023df08  bl 0x502730
  023df0c  nop
  023df10  lis 3, 114
  023df14  lfs 2, -3056(3)
  023df18  fmuls 2, 2, 27
  023df1c  lis 3, 16448
  023df20  lis 4, 4160
  023df24  ori 3, 3, 65535
  023df28  ori 4, 4, 65535
  023df2c  fctidz 2, 2
  023df30  fcfid 2, 2
  023df34  frsp 2, 2
  023df38  fdivs 1, 1, 2
  023df3c  fsubs 1, 28, 1
  023df40  fabs 1, 1
  023df44  bl 0x5027bc
  023df48  nop
  023df4c  ori 28, 3, 0
  023df50  lfs 1, 16(30)
  023df54  bl 0x502758
  023df58  nop
  023df5c  lfs 1, 64(30)
  023df60  clrlwi 5, 3, 24
  023df64  addic 3, 1, 112
  023df68  li 10, 0
  023df6c  ori 4, 28, 0
  023df70  li 6, 53
  023df74  li 7, 1
  023df78  li 8, 2
  023df7c  bl 0x130ed0
  023df80  nop
  023df84  lfs 1, 112(1)
  023df88  addic 29, 29, 1
  023df8c  lfs 2, 116(1)
  023df90  addic 31, 31, 4
  023df94  fadds 1, 1, 31
  023df98  lfs 3, 120(1)
  023df9c  fadds 2, 2, 30
  023dfa0  cmpwi 29, 4
  023dfa4  fadds 3, 3, 29
  023dfa8  addic 30, 30, 4
  023dfac  stfs 1, 112(1)
  023dfb0  stfs 2, 116(1)
  023dfb4  stfs 3, 120(1)
  023dfb8  bt 0, 0x23de68
  023dfbc  li 0, 144
  023dfc0  lvx 31, 1, 0
  023dfc4  ld 0, 272(1)
  023dfc8  mtlr 0
  023dfcc  lfd 25, 200(1)
  023dfd0  lfd 26, 208(1)
  023dfd4  lfd 27, 216(1)
  023dfd8  lfd 28, 224(1)
  023dfdc  lfd 29, 232(1)
  023dfe0  lfd 30, 240(1)
  023dfe4  lfd 31, 248(1)
  023dfe8  ld 28, 168(1)
  023dfec  ld 29, 176(1)
  023dff0  ld 30, 184(1)
  023dff4  ld 31, 192(1)
  023dff8  addi 1, 1, 256
  023dffc  blr

M1290_0023e010:   # 0x23e010, 0x120 bytes
  023e010  stdu 1, -160(1)
  023e014  mflr 0
  023e018  std 0, 176(1)
  023e01c  std 29, 136(1)
  023e020  std 31, 152(1)
  023e024  lwz 31, 120(3)
  023e028  std 30, 144(1)
  023e02c  li 29, 0
  023e030  ori 30, 31, 0
  023e034  li 3, 255
  023e038  bl 0xfc620
  023e03c  nop
  023e040  extsw 3, 3
  023e044  addic 29, 29, 1
  023e048  std 3, 112(1)
  023e04c  cmpwi 29, 4
  023e050  lfd 1, 112(1)
  023e054  fcfid 1, 1
  023e058  frsp 1, 1
  023e05c  stfs 1, 16(30)
  023e060  addic 30, 30, 4
  023e064  bt 0, 0x23e034
  023e068  lis 3, -16512
  023e06c  lis 4, -16368
  023e070  vspltisw 4, 0
  023e074  lis 5, 16288
  023e078  lis 6, 36
  023e07c  stw 3, 32(31)
  023e080  lis 7, 114
  023e084  stw 4, 36(31)
  023e088  lis 3, 16416
  023e08c  addi 4, 6, -8192
  023e090  stw 5, 40(31)
  023e094  li 5, -3056
  023e098  li 6, 4
  023e09c  li 8, 8
  023e0a0  stw 3, 44(31)
  023e0a4  li 9, 4
  023e0a8  <unknown>
  023e0ac  <unknown>
  023e0b0  addic 3, 31, 48
  023e0b4  <unknown>
  023e0b8  mtctr 9
  023e0bc  <unknown>
  023e0c0  vspltw 6, 6, 0
  023e0c4  vspltw 3, 3, 0
  023e0c8  vspltw 2, 2, 0
  023e0cc  vadduwm 7, 4, 3
  023e0d0  vspltisw 8, -1
  023e0d4  vadduwm 4, 4, 2
  023e0d8  vcfsx 7, 7, 0
  023e0dc  vslw 8, 8, 8
  023e0e0  vaddfp 7, 7, 6
  023e0e4  vmaddfp 7, 7, 5, 8
  023e0e8  vctsxs 7, 7, 0
  023e0ec  vspltw 7, 7, 0
  023e0f0  stvewx 7, 0, 3
  023e0f4  addic 3, 3, 4
  023e0f8  bdnz 0x23e0cc
  023e0fc  lis 3, 16416
  023e100  lis 4, 16448
  023e104  stw 3, 64(31)
  023e108  stw 4, 68(31)
  023e10c  stw 4, 72(31)
  023e110  stw 3, 76(31)
  023e114  ld 0, 176(1)
  023e118  mtlr 0
  023e11c  ld 29, 136(1)
  023e120  ld 30, 144(1)
  023e124  ld 31, 152(1)
  023e128  addi 1, 1, 160
  023e12c  blr

UpdateMoby_1290:   # 0x23e140, 0x370 bytes
  023e140  stdu 1, -128(1)
  023e144  mflr 0
  023e148  std 0, 144(1)
  023e14c  lis 4, 36
  023e150  lis 5, 114
  023e154  std 31, 120(1)
  023e158  addi 4, 4, -7888
  023e15c  ori 31, 3, 0
  023e160  lfs 3, 0(4)
  023e164  lfs 2, -3052(5)
  023e168  std 30, 112(1)
  023e16c  lfs 1, 72(31)
  023e170  lwz 30, 120(31)
  023e174  fmuls 2, 2, 3
  023e178  bl 0x502578
  023e17c  nop
  023e180  lbz 3, 32(31)
  023e184  stfs 1, 72(31)
  023e188  cmpwi 3, 1
  023e18c  bt 1, 0x23e1a4
  023e190  cmpwi 3, -1
  023e194  bf 1, 0x23e498
  023e198  cmpwi 3, 0
  023e19c  bf 1, 0x23e1b8
  023e1a0  b 0x23e23c
  023e1a4  cmpwi 3, 2
  023e1a8  bf 1, 0x23e30c
  023e1ac  cmpwi 3, 3
  023e1b0  bf 1, 0x23e478
  023e1b4  b 0x23e498
  023e1b8  ori 3, 31, 0
  023e1bc  bl 0x23e010
  023e1c0  lwz 3, 0(30)
  023e1c4  cmpwi 3, -1
  023e1c8  bf 2, 0x23e1e4
  023e1cc  lis 3, 101
  023e1d0  lhz 4, 178(31)
  023e1d4  addic 3, 3, 21264
  023e1d8  extsh 4, 4
  023e1dc  bl 0x5cd098
  023e1e0  nop
  023e1e4  lis 3, 151
  023e1e8  addic 3, 3, -16064
  023e1ec  lbz 3, 7(3)
  023e1f0  cmpwi 3, 0
  023e1f4  bt 2, 0x23e218
  023e1f8  lis 3, 101
  023e1fc  addic 3, 3, 21304
  023e200  bl 0x5cd098
  023e204  nop
  023e208  ori 3, 31, 0
  023e20c  bl 0xefb38
  023e210  nop
  023e214  b 0x23e498
  023e218  lis 3, 36
  023e21c  lfs 1, 24(31)
  023e220  addi 3, 3, -7888
  023e224  lfs 2, 4(3)
  023e228  li 3, 1
  023e22c  fadds 1, 1, 2
  023e230  stb 3, 32(31)
  023e234  stfs 1, 24(31)
  023e238  b 0x23e498
  023e23c  ori 3, 31, 0
  023e240  bl 0x23dcf8
  023e244  lis 3, 151
  023e248  lfs 1, 20(31)
  023e24c  lfs 2, 16(31)
  023e250  addic 3, 3, -25376
  023e254  lis 4, 36
  023e258  lfs 3, 132(3)
  023e25c  lfs 4, 128(3)
  023e260  fsubs 1, 1, 3
  023e264  fsubs 2, 2, 4
  023e268  addi 4, 4, -7888
  023e26c  fmuls 1, 1, 1
  023e270  fmadds 1, 2, 2, 1
  023e274  lfs 2, 8(4)
  023e278  fsqrts 1, 1
  023e27c  fcmpu 0, 1, 2
  023e280  cror 6, 1, 2
  023e284  bt 6, 0x23e498
  023e288  lfs 1, 24(31)
  023e28c  lfs 2, 136(3)
  023e290  lis 4, 36
  023e294  fsubs 1, 1, 2
  023e298  addi 4, 4, -7888
  023e29c  lfs 2, 12(4)
  023e2a0  fabs 1, 1
  023e2a4  fcmpu 0, 1, 2
  023e2a8  cror 6, 1, 2
  023e2ac  bt 6, 0x23e498
  023e2b0  lwz 3, 8872(3)
  023e2b4  cmpwi 3, 0
  023e2b8  bt 2, 0x23e498
  023e2bc  lhz 3, 52(31)
  023e2c0  lwz 30, 0(30)
  023e2c4  ori 3, 3, 65
  023e2c8  cmpwi 30, -1
  023e2cc  sth 3, 52(31)
  023e2d0  bt 2, 0x23e2e8
  023e2d4  extsw 3, 30
  023e2d8  li 4, 0
  023e2dc  bl 0x167e60
  023e2e0  nop
  023e2e4  b 0x23e300
  023e2e8  lis 3, 101
  023e2ec  lhz 4, 178(31)
  023e2f0  addic 3, 3, 21264
  023e2f4  extsh 4, 4
  023e2f8  bl 0x5cd098
  023e2fc  nop
  023e300  li 3, 2
  023e304  stb 3, 32(31)
  023e308  b 0x23e498
  023e30c  lis 3, 161
  023e310  lwz 3, 1800(3)
  023e314  cmpwi 3, 2
  023e318  bt 2, 0x23e498
  023e31c  lis 3, 101
  023e320  addic 3, 3, 21344
  023e324  bl 0x5cd098
  023e328  nop
  023e32c  li 3, 9002
  023e330  li 4, -1
  023e334  bl 0x112a38
  023e338  nop
  023e33c  lis 5, 161
  023e340  li 6, 180
  023e344  li 3, 7
  023e348  li 4, 1
  023e34c  stw 6, 23680(5)
  023e350  bl 0x112e18
  023e354  nop
  023e358  lis 3, 161
  023e35c  addic 3, 3, 12
  023e360  lhz 3, 416(3)
  023e364  cmpwi 3, 0
  023e368  bf 2, 0x23e37c
  023e36c  li 3, 9000
  023e370  li 4, 52
  023e374  bl 0x7b310
  023e378  nop
  023e37c  lwz 3, 4(30)
  023e380  cmpwi 3, -1
  023e384  bt 2, 0x23e430
  023e388  lis 4, 164
  023e38c  slwi 3, 3, 8
  023e390  lis 5, 165
  023e394  addic 5, 5, 14692
  023e398  lwz 4, -28512(4)
  023e39c  addc 3, 4, 3
  023e3a0  clrldi 3, 3, 32
  023e3a4  lbz 6, 176(3)
  023e3a8  lhz 3, 178(3)
  023e3ac  addic 6, 6, 2
  023e3b0  extsh 3, 3
  023e3b4  stbx 6, 5, 3
  023e3b8  lwz 3, 4(30)
  023e3bc  slwi 3, 3, 8
  023e3c0  addc 30, 4, 3
  023e3c4  clrldi 30, 30, 32
  023e3c8  lbz 3, 176(30)
  023e3cc  cmpwi 3, 255
  023e3d0  bt 2, 0x23e414
  023e3d4  lis 4, 162
  023e3d8  addic 4, 4, 704
  023e3dc  lbzx 4, 3, 4
  023e3e0  cmpwi 4, 255
  023e3e4  bt 2, 0x23e448
  023e3e8  lis 4, 151
  023e3ec  lis 5, 161
  023e3f0  addic 5, 5, -13692
  023e3f4  lwz 4, -25488(4)
  023e3f8  addc 5, 3, 5
  023e3fc  slwi 4, 4, 4
  023e400  clrldi 5, 5, 32
  023e404  extsw 4, 4
  023e408  lbzx 4, 5, 4
  023e40c  cmpwi 4, 255
  023e410  bf 2, 0x23e448
  023e414  lis 4, 165
  023e418  lhz 5, 178(30)
  023e41c  addic 3, 3, 2
  023e420  addic 4, 4, 17860
  023e424  extsh 5, 5
  023e428  stbx 3, 4, 5
  023e42c  b 0x23e448
  023e430  lis 3, 101
  023e434  lhz 4, 178(31)
  023e438  addic 3, 3, 21360
  023e43c  extsh 4, 4
  023e440  bl 0x5cd098
  023e444  nop
  023e448  lbz 3, 176(31)
  023e44c  cmpwi 3, 255
  023e450  bt 2, 0x23e45c
  023e454  bl 0xf1e50
  023e458  nop
  023e45c  lis 3, 151
  023e460  li 5, 7
  023e464  addic 3, 3, -25376
  023e468  li 4, 3
  023e46c  stw 5, 8384(3)
  023e470  stb 4, 32(31)
  023e474  b 0x23e498
  023e478  li 3, 0
  023e47c  li 4, -1
  023e480  bl 0xe8aa4
  023e484  nop
  023e488  ori 3, 31, 0
  023e48c  bl 0xefb38
  023e490  nop
  023e494  b 0x23e498
  023e498  ld 0, 144(1)
  023e49c  mtlr 0
  023e4a0  ld 30, 112(1)
  023e4a4  ld 31, 120(1)
  023e4a8  addi 1, 1, 128
  023e4ac  blr
