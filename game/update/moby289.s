# game/update/moby289.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M289_0032dbe0:   # 0x32dbe0, 0x14 bytes
  032dbe0  lis 3, 128
  032dbe4  lis 4, 1
  032dbe8  addic 3, 3, 1920
  032dbec  stw 4, 72(3)
  032dbf0  blr

UpdateMoby_289:   # 0x32dc20, 0xaa8 bytes
  032dc20  stdu 1, -368(1)
  032dc24  mflr 0
  032dc28  std 0, 384(1)
  032dc2c  stfd 26, 320(1)
  032dc30  stfd 27, 328(1)
  032dc34  stfd 28, 336(1)
  032dc38  stfd 29, 344(1)
  032dc3c  stfd 30, 352(1)
  032dc40  stfd 31, 360(1)
  032dc44  std 31, 312(1)
  032dc48  ori 31, 3, 0
  032dc4c  li 4, -1
  032dc50  std 30, 304(1)
  032dc54  li 5, 0
  032dc58  std 29, 296(1)
  032dc5c  lwz 30, 120(31)
  032dc60  bl 0x10675c
  032dc64  nop
  032dc68  cmpwi 3, 0
  032dc6c  bt 2, 0x32dd08
  032dc70  lwz 3, 76(30)
  032dc74  cmpwi 3, 0
  032dc78  bt 2, 0x32dc84
  032dc7c  bl 0xefb38
  032dc80  nop
  032dc84  lwz 3, 80(30)
  032dc88  cmpwi 3, 0
  032dc8c  bt 2, 0x32dc98
  032dc90  bl 0xefb38
  032dc94  nop
  032dc98  lis 3, 51
  032dc9c  li 7, -1
  032dca0  addi 5, 3, -9224
  032dca4  li 6, 1
  032dca8  li 11, 0
  032dcac  ori 3, 31, 0
  032dcb0  addic 4, 30, 48
  032dcb4  lfs 1, 0(5)
  032dcb8  li 8, 10
  032dcbc  lfs 3, 4(5)
  032dcc0  li 9, 3
  032dcc4  lfs 4, 8(5)
  032dcc8  li 10, 16
  032dccc  lfs 5, 12(5)
  032dcd0  fmr 2, 1
  032dcd4  lfs 6, 16(5)
  032dcd8  lfs 7, 20(5)
  032dcdc  std 7, 144(1)
  032dce0  li 5, 0
  032dce4  std 6, 160(1)
  032dce8  std 6, 168(1)
  032dcec  std 7, 176(1)
  032dcf0  std 11, 184(1)
  032dcf4  bl 0x10e030
  032dcf8  nop
  032dcfc  ori 3, 31, 0
  032dd00  bl 0xefb38
  032dd04  nop
  032dd08  lbz 3, 32(31)
  032dd0c  cmpwi 3, 0
  032dd10  cmpwi 1, 3, 2
  032dd14  cmpwi 6, 3, 1
  032dd18  cmpwi 7, 3, -1
  032dd1c  bt 1, 0x32dd28
  032dd20  bf 29, 0x32e464
  032dd24  b 0x32dd34
  032dd28  bf 25, 0x32dda0
  032dd2c  bf 5, 0x32dfe4
  032dd30  b 0x32e464
  032dd34  li 4, 0
  032dd38  lwz 5, 20(30)
  032dd3c  lis 3, 165
  032dd40  slwi 5, 5, 2
  032dd44  addic 3, 3, 7136
  032dd48  stw 4, 68(31)
  032dd4c  stw 4, 64(31)
  032dd50  extsw 5, 5
  032dd54  stw 4, 60(30)
  032dd58  li 6, 1
  032dd5c  stw 4, 56(30)
  032dd60  stw 4, 52(30)
  032dd64  stw 4, 48(30)
  032dd68  lwzx 3, 3, 5
  032dd6c  stw 4, 68(30)
  032dd70  stw 3, 16(30)
  032dd74  lbz 3, 83(31)
  032dd78  stb 6, 32(31)
  032dd7c  cmpwi 3, 2
  032dd80  bt 2, 0x32e464
  032dd84  ori 3, 31, 0
  032dd88  li 4, 2
  032dd8c  li 5, 0
  032dd90  li 6, 0
  032dd94  bl 0xfddc0
  032dd98  nop
  032dd9c  b 0x32e464
  032dda0  lwz 3, 68(30)
  032dda4  cmpwi 3, 0
  032dda8  bt 2, 0x32ddd4
  032ddac  lwz 3, 16(30)
  032ddb0  lwz 4, 0(3)
  032ddb4  slwi 4, 4, 4
  032ddb8  addc 3, 3, 4
  032ddbc  clrldi 3, 3, 32
  032ddc0  lfs 30, 0(3)
  032ddc4  lfs 29, 4(3)
  032ddc8  lfs 28, 8(3)
  032ddcc  lfs 31, 12(3)
  032ddd0  b 0x32dde8
  032ddd4  lwz 3, 16(30)
  032ddd8  lfs 30, 16(3)
  032dddc  lfs 29, 20(3)
  032dde0  lfs 28, 24(3)
  032dde4  lfs 31, 28(3)
  032dde8  lfs 1, 20(31)
  032ddec  lfs 2, 16(31)
  032ddf0  fsubs 29, 29, 1
  032ddf4  lfs 1, 24(31)
  032ddf8  fsubs 30, 30, 2
  032ddfc  fsubs 28, 28, 1
  032de00  lis 3, 51
  032de04  addi 3, 3, -9224
  032de08  fmuls 1, 29, 29
  032de0c  lfs 2, 24(3)
  032de10  fmadds 1, 30, 30, 1
  032de14  fmadds 1, 28, 28, 1
  032de18  fsqrts 1, 1
  032de1c  fcmpu 0, 1, 2
  032de20  cror 6, 0, 2
  032de24  bt 6, 0x32df74
  032de28  lis 3, 128
  032de2c  lfs 1, 2040(3)
  032de30  lfs 2, 52(30)
  032de34  fmuls 29, 1, 29
  032de38  fmuls 2, 2, 2
  032de3c  fmuls 30, 1, 30
  032de40  fmuls 28, 1, 28
  032de44  lfs 1, 48(30)
  032de48  lfs 3, 56(30)
  032de4c  fmuls 4, 29, 29
  032de50  fmadds 1, 1, 1, 2
  032de54  fmadds 2, 30, 30, 4
  032de58  fmadds 1, 3, 3, 1
  032de5c  fmadds 27, 28, 28, 2
  032de60  fsqrts 1, 1
  032de64  fsqrts 27, 27
  032de68  fcmpu 0, 27, 1
  032de6c  cror 6, 0, 2
  032de70  bt 6, 0x32df04
  032de74  lis 4, 128
  032de78  fmr 26, 27
  032de7c  lis 6, 114
  032de80  stfs 1, 192(1)
  032de84  lis 5, 128
  032de88  lis 7, 114
  032de8c  addic 3, 1, 192
  032de90  lfs 1, 2044(4)
  032de94  lfs 2, -3052(6)
  032de98  lfs 3, 2032(5)
  032de9c  fmuls 1, 1, 2
  032dea0  lfs 2, -3048(7)
  032dea4  fmuls 2, 3, 2
  032dea8  bl 0x109af0
  032deac  nop
  032deb0  lfs 27, 192(1)
  032deb4  fdivs 1, 27, 26
  032deb8  lis 3, 51
  032debc  addi 3, 3, -9224
  032dec0  lfs 2, 0(3)
  032dec4  fsub 3, 2, 26
  032dec8  fsub 4, 2, 26
  032decc  fsub 5, 2, 26
  032ded0  fsub 6, 26, 2
  032ded4  fsub 7, 26, 2
  032ded8  fsub 8, 26, 2
  032dedc  fmuls 30, 30, 1
  032dee0  fmuls 29, 29, 1
  032dee4  fmuls 28, 28, 1
  032dee8  fsel 1, 3, 2, 30
  032deec  fsel 3, 4, 2, 29
  032def0  fsel 2, 5, 2, 28
  032def4  fsel 30, 6, 1, 30
  032def8  fsel 29, 7, 3, 29
  032defc  fsel 28, 8, 2, 28
  032df00  b 0x32df08
  032df04  stfs 27, 192(1)
  032df08  stfs 30, 48(30)
  032df0c  lwz 3, 76(30)
  032df10  stfs 29, 52(30)
  032df14  stfs 31, 60(30)
  032df18  cmpwi 3, 0
  032df1c  stfs 28, 56(30)
  032df20  fmr 31, 27
  032df24  bt 2, 0x32df48
  032df28  lis 4, 114
  032df2c  lis 5, 128
  032df30  lfs 1, -3052(4)
  032df34  lfs 2, 2028(5)
  032df38  fmuls 1, 1, 2
  032df3c  fdivs 1, 27, 1
  032df40  stfs 1, 88(3)
  032df44  lfs 31, 192(1)
  032df48  lwz 3, 80(30)
  032df4c  cmpwi 3, 0
  032df50  bt 2, 0x32dfb0
  032df54  lis 4, 114
  032df58  lis 5, 128
  032df5c  lfs 1, -3052(4)
  032df60  lfs 2, 2028(5)
  032df64  fmuls 1, 1, 2
  032df68  fdivs 1, 31, 1
  032df6c  stfs 1, 88(3)
  032df70  b 0x32dfb0
  032df74  li 3, 2
  032df78  lbz 4, 83(31)
  032df7c  cmpwi 4, 1
  032df80  stb 3, 32(31)
  032df84  bt 2, 0x32dfa0
  032df88  ori 3, 31, 0
  032df8c  li 4, 1
  032df90  li 5, 0
  032df94  li 6, 3
  032df98  bl 0xfddc0
  032df9c  nop
  032dfa0  lwz 3, 68(30)
  032dfa4  cntlzw 3, 3
  032dfa8  rlwinm 3, 3, 27, 31, 31
  032dfac  stw 3, 68(30)
  032dfb0  lfs 1, 16(31)
  032dfb4  lfs 2, 48(30)
  032dfb8  fadds 1, 1, 2
  032dfbc  lfs 2, 20(31)
  032dfc0  lfs 3, 24(31)
  032dfc4  stfs 1, 16(31)
  032dfc8  lfs 1, 52(30)
  032dfcc  fadds 1, 2, 1
  032dfd0  stfs 1, 20(31)
  032dfd4  lfs 1, 56(30)
  032dfd8  fadds 1, 3, 1
  032dfdc  stfs 1, 24(31)
  032dfe0  b 0x32e464
  032dfe4  lwz 3, 68(30)
  032dfe8  cmpwi 3, 0
  032dfec  bt 2, 0x32e010
  032dff0  lwz 3, 16(30)
  032dff4  lwz 4, 0(3)
  032dff8  slwi 4, 4, 4
  032dffc  addc 3, 3, 4
  032e000  clrldi 3, 3, 32
  032e004  lfs 31, 0(3)
  032e008  lfs 30, 4(3)
  032e00c  b 0x32e01c
  032e010  lwz 3, 16(30)
  032e014  lfs 31, 16(3)
  032e018  lfs 30, 20(3)
  032e01c  lwz 3, 76(30)
  032e020  cmpwi 3, 0
  032e024  bt 2, 0x32e05c
  032e028  lis 4, 114
  032e02c  lis 5, 128
  032e030  lis 6, 51
  032e034  addi 6, 6, -9224
  032e038  lfs 1, -3052(4)
  032e03c  lfs 2, 2028(5)
  032e040  lfs 3, 72(30)
  032e044  fmuls 1, 1, 2
  032e048  lfs 2, 8(6)
  032e04c  fneg 3, 3
  032e050  fmuls 1, 1, 2
  032e054  fdivs 1, 3, 1
  032e058  stfs 1, 88(3)
  032e05c  lwz 3, 80(30)
  032e060  cmpwi 3, 0
  032e064  bt 2, 0x32e098
  032e068  lis 4, 114
  032e06c  lis 5, 128
  032e070  lis 6, 51
  032e074  addi 6, 6, -9224
  032e078  lfs 1, -3052(4)
  032e07c  lfs 2, 2028(5)
  032e080  fmuls 1, 1, 2
  032e084  lfs 2, 8(6)
  032e088  lfs 3, 72(30)
  032e08c  fmuls 1, 1, 2
  032e090  fdivs 1, 3, 1
  032e094  stfs 1, 88(3)
  032e098  lfs 1, 16(31)
  032e09c  lfs 2, 20(31)
  032e0a0  lis 3, 51
  032e0a4  fsubs 1, 31, 1
  032e0a8  fsubs 2, 30, 2
  032e0ac  addi 3, 3, -9224
  032e0b0  lis 29, 115
  032e0b4  addic 29, 29, 22784
  032e0b8  fabs 3, 1
  032e0bc  fabs 4, 2
  032e0c0  stfs 1, 208(1)
  032e0c4  stfs 2, 212(1)
  032e0c8  fsubs 1, 3, 4
  032e0cc  stfs 1, 216(1)
  032e0d0  lwz 4, 208(1)
  032e0d4  lfs 28, 0(3)
  032e0d8  lfs 1, 208(1)
  032e0dc  lwz 5, 212(1)
  032e0e0  lfs 2, 212(1)
  032e0e4  lwz 6, 216(1)
  032e0e8  rlwinm 5, 5, 3, 29, 29
  032e0ec  fabs 5, 2
  032e0f0  lfs 2, 216(1)
  032e0f4  fabs 1, 1
  032e0f8  rlwimi 5, 6, 2, 30, 30
  032e0fc  fsub 6, 2, 28
  032e100  rlwimi 5, 4, 4, 28, 28
  032e104  fsub 7, 2, 28
  032e108  ori 4, 29, 0
  032e10c  rlwimi 4, 5, 2, 26, 28
  032e110  slwi 5, 5, 2
  032e114  clrldi 4, 4, 32
  032e118  fsel 4, 6, 1, 4
  032e11c  lfsx 1, 29, 5
  032e120  lfs 2, 4(4)
  032e124  fsel 3, 7, 5, 3
  032e128  lfs 29, 28(3)
  032e12c  fcmpu 0, 4, 28
  032e130  bt 1, 0x32e13c
  032e134  fmr 1, 28
  032e138  b 0x32e254
  032e13c  fsubs 5, 3, 4
  032e140  fadds 3, 3, 4
  032e144  addic 3, 1, 16
  032e148  li 6, 2
  032e14c  addic 4, 3, 236
  032e150  addic 5, 3, 252
  032e154  mtctr 6
  032e158  fdivs 3, 5, 3
  032e15c  fmuls 4, 3, 3
  032e160  stfs 3, 264(1)
  032e164  stfs 3, 256(1)
  032e168  stfs 3, 260(1)
  032e16c  stfs 3, 252(1)
  032e170  lfs 6, 264(1)
  032e174  lfs 7, 256(1)
  032e178  lfs 8, 260(1)
  032e17c  fmuls 5, 4, 4
  032e180  fmuls 7, 7, 4
  032e184  fmuls 6, 6, 5
  032e188  fmuls 3, 5, 5
  032e18c  fmuls 5, 8, 5
  032e190  stfs 7, 256(1)
  032e194  fmuls 4, 6, 4
  032e198  stfs 5, 260(1)
  032e19c  stfs 4, 264(1)
  032e1a0  lfs 4, 236(3)
  032e1a4  fmuls 4, 4, 3
  032e1a8  stfs 4, 252(3)
  032e1ac  lfs 4, 4(4)
  032e1b0  addic 3, 3, 8
  032e1b4  addic 4, 4, 8
  032e1b8  fmuls 4, 4, 3
  032e1bc  stfs 4, 4(5)
  032e1c0  addic 5, 5, 8
  032e1c4  bdnz 0x32e1a0
  032e1c8  li 5, 4
  032e1cc  ori 3, 1, 0
  032e1d0  mtctr 5
  032e1d4  lis 4, 115
  032e1d8  addic 5, 3, 252
  032e1dc  addic 4, 4, 22752
  032e1e0  ori 7, 5, 0
  032e1e4  lfs 3, 252(3)
  032e1e8  lfs 4, 0(4)
  032e1ec  fmuls 3, 3, 4
  032e1f0  lfs 4, 4(4)
  032e1f4  addic 4, 4, 8
  032e1f8  stfs 3, 252(3)
  032e1fc  lfs 3, 4(5)
  032e200  addic 3, 3, 8
  032e204  fmuls 3, 3, 4
  032e208  stfs 3, 4(5)
  032e20c  addic 5, 5, 8
  032e210  bdnz 0x32e1e4
  032e214  fmr 3, 28
  032e218  ori 3, 1, 0
  032e21c  mtctr 6
  032e220  lfs 4, 252(3)
  032e224  fadds 3, 3, 4
  032e228  addic 3, 3, 16
  032e22c  lfs 4, 4(7)
  032e230  lfs 5, 8(7)
  032e234  lfs 6, 12(7)
  032e238  addic 7, 7, 16
  032e23c  fadds 3, 3, 4
  032e240  fadds 3, 3, 5
  032e244  fadds 3, 3, 6
  032e248  bdnz 0x32e220
  032e24c  fadds 3, 3, 29
  032e250  fmadds 1, 3, 1, 2
  032e254  lis 3, 51
  032e258  lis 4, 128
  032e25c  addi 6, 3, -9224
  032e260  addic 5, 30, 72
  032e264  ori 3, 31, 0
  032e268  lfs 4, 2036(4)
  032e26c  lfs 2, 32(6)
  032e270  lfs 3, 36(6)
  032e274  bl 0xff2e8
  032e278  nop
  032e27c  lfs 1, 16(31)
  032e280  lfs 2, 20(31)
  032e284  fsubs 1, 31, 1
  032e288  fsubs 2, 30, 2
  032e28c  fabs 3, 1
  032e290  fabs 4, 2
  032e294  stfs 1, 196(1)
  032e298  stfs 2, 200(1)
  032e29c  lfs 2, 72(31)
  032e2a0  fsubs 1, 3, 4
  032e2a4  stfs 1, 204(1)
  032e2a8  lwz 3, 196(1)
  032e2ac  lfs 1, 196(1)
  032e2b0  lwz 4, 200(1)
  032e2b4  lfs 5, 200(1)
  032e2b8  fabs 1, 1
  032e2bc  lwz 5, 204(1)
  032e2c0  rlwinm 4, 4, 3, 29, 29
  032e2c4  lfs 6, 204(1)
  032e2c8  fabs 5, 5
  032e2cc  rlwimi 4, 5, 2, 30, 30
  032e2d0  fsub 7, 6, 28
  032e2d4  fsub 6, 6, 28
  032e2d8  rlwimi 4, 3, 4, 28, 28
  032e2dc  ori 3, 29, 0
  032e2e0  rlwimi 3, 4, 2, 26, 28
  032e2e4  slwi 4, 4, 2
  032e2e8  clrldi 3, 3, 32
  032e2ec  fsel 4, 7, 1, 4
  032e2f0  lfsx 31, 29, 4
  032e2f4  fsel 3, 6, 5, 3
  032e2f8  lfs 1, 4(3)
  032e2fc  fcmpu 0, 4, 28
  032e300  bt 1, 0x32e308
  032e304  b 0x32e41c
  032e308  fsubs 5, 3, 4
  032e30c  fadds 3, 3, 4
  032e310  addic 3, 1, 16
  032e314  li 6, 2
  032e318  addic 5, 3, 220
  032e31c  addic 4, 3, 204
  032e320  mtctr 6
  032e324  fdivs 3, 5, 3
  032e328  fmuls 4, 3, 3
  032e32c  stfs 3, 232(1)
  032e330  stfs 3, 224(1)
  032e334  stfs 3, 228(1)
  032e338  stfs 3, 220(1)
  032e33c  lfs 6, 232(1)
  032e340  lfs 7, 224(1)
  032e344  lfs 8, 228(1)
  032e348  fmuls 5, 4, 4
  032e34c  fmuls 7, 7, 4
  032e350  fmuls 6, 6, 5
  032e354  fmuls 3, 5, 5
  032e358  fmuls 5, 8, 5
  032e35c  stfs 7, 224(1)
  032e360  fmuls 4, 6, 4
  032e364  stfs 5, 228(1)
  032e368  stfs 4, 232(1)
  032e36c  lfs 4, 204(3)
  032e370  fmuls 4, 4, 3
  032e374  stfs 4, 220(3)
  032e378  lfs 4, 4(4)
  032e37c  addic 4, 4, 8
  032e380  fmuls 4, 4, 3
  032e384  addic 3, 3, 8
  032e388  stfs 4, 4(5)
  032e38c  addic 5, 5, 8
  032e390  bdnz 0x32e36c
  032e394  li 5, 4
  032e398  ori 3, 1, 0
  032e39c  mtctr 5
  032e3a0  lis 4, 115
  032e3a4  addic 5, 3, 220
  032e3a8  addic 4, 4, 22752
  032e3ac  ori 7, 5, 0
  032e3b0  lfs 3, 220(3)
  032e3b4  lfs 4, 0(4)
  032e3b8  fmuls 3, 3, 4
  032e3bc  lfs 4, 4(4)
  032e3c0  addic 4, 4, 8
  032e3c4  stfs 3, 220(3)
  032e3c8  lfs 3, 4(5)
  032e3cc  addic 3, 3, 8
  032e3d0  fmuls 3, 3, 4
  032e3d4  stfs 3, 4(5)
  032e3d8  addic 5, 5, 8
  032e3dc  bdnz 0x32e3b0
  032e3e0  ori 3, 1, 0
  032e3e4  mtctr 6
  032e3e8  lfs 3, 220(3)
  032e3ec  lfs 4, 4(7)
  032e3f0  fadds 3, 28, 3
  032e3f4  lfs 5, 8(7)
  032e3f8  addic 3, 3, 16
  032e3fc  lfs 28, 12(7)
  032e400  addic 7, 7, 16
  032e404  fadds 3, 3, 4
  032e408  fadds 3, 3, 5
  032e40c  fadds 28, 3, 28
  032e410  bdnz 0x32e3e8
  032e414  fadds 28, 28, 29
  032e418  fmadds 28, 28, 31, 1
  032e41c  fcmpu 0, 2, 28
  032e420  bf 2, 0x32e464
  032e424  li 3, 0
  032e428  li 4, 1
  032e42c  stw 3, 60(30)
  032e430  stw 3, 56(30)
  032e434  stw 3, 52(30)
  032e438  stw 3, 48(30)
  032e43c  lbz 3, 83(31)
  032e440  stb 4, 32(31)
  032e444  cmpwi 3, 2
  032e448  bt 2, 0x32e464
  032e44c  ori 3, 31, 0
  032e450  li 4, 2
  032e454  li 5, 0
  032e458  li 6, 3
  032e45c  bl 0xfddc0
  032e460  nop
  032e464  lwz 3, 76(30)
  032e468  cmpwi 3, 0
  032e46c  bf 2, 0x32e538
  032e470  li 3, 397
  032e474  bl 0xefa28
  032e478  nop
  032e47c  li 5, 64
  032e480  stw 3, 76(30)
  032e484  li 6, 1
  032e488  lis 4, 151
  032e48c  stb 5, 48(3)
  032e490  addic 7, 4, -25376
  032e494  lwz 8, 76(30)
  032e498  li 3, 0
  032e49c  li 4, 2
  032e4a0  sth 5, 50(8)
  032e4a4  lwz 5, 76(30)
  032e4a8  stb 6, 49(5)
  032e4ac  lwz 5, 76(30)
  032e4b0  stb 6, 32(5)
  032e4b4  lwz 5, 76(30)
  032e4b8  li 6, 1
  032e4bc  sth 3, 52(5)
  032e4c0  lwz 3, 8320(7)
  032e4c4  lwz 5, 76(30)
  032e4c8  ld 3, 56(3)
  032e4cc  std 3, 56(5)
  032e4d0  lwz 3, 76(30)
  032e4d4  lfs 1, 16(31)
  032e4d8  li 5, 0
  032e4dc  stfs 1, 16(3)
  032e4e0  lfs 1, 20(31)
  032e4e4  stfs 1, 20(3)
  032e4e8  lfs 1, 24(31)
  032e4ec  stfs 1, 24(3)
  032e4f0  lfs 1, 28(31)
  032e4f4  stfs 1, 28(3)
  032e4f8  lwz 3, 76(30)
  032e4fc  lfs 1, 64(31)
  032e500  stfs 1, 64(3)
  032e504  lfs 1, 68(31)
  032e508  stfs 1, 68(3)
  032e50c  lfs 1, 72(31)
  032e510  stfs 1, 72(3)
  032e514  lfs 1, 76(31)
  032e518  stfs 1, 76(3)
  032e51c  lwz 3, 76(30)
  032e520  bl 0xfddc0
  032e524  nop
  032e528  lwz 3, 76(30)
  032e52c  bl 0xf31a8
  032e530  nop
  032e534  b 0x32e57c
  032e538  lfs 1, 16(31)
  032e53c  stfs 1, 16(3)
  032e540  lfs 1, 20(31)
  032e544  stfs 1, 20(3)
  032e548  lfs 1, 24(31)
  032e54c  stfs 1, 24(3)
  032e550  lfs 1, 28(31)
  032e554  stfs 1, 28(3)
  032e558  lwz 3, 76(30)
  032e55c  lfs 1, 64(31)
  032e560  stfs 1, 64(3)
  032e564  lfs 1, 68(31)
  032e568  stfs 1, 68(3)
  032e56c  lfs 1, 72(31)
  032e570  stfs 1, 72(3)
  032e574  lfs 1, 76(31)
  032e578  stfs 1, 76(3)
  032e57c  lwz 3, 80(30)
  032e580  cmpwi 3, 0
  032e584  bf 2, 0x32e650
  032e588  li 3, 398
  032e58c  bl 0xefa28
  032e590  nop
  032e594  li 5, 64
  032e598  stw 3, 80(30)
  032e59c  li 6, 1
  032e5a0  lis 4, 151
  032e5a4  stb 5, 48(3)
  032e5a8  addic 7, 4, -25376
  032e5ac  lwz 8, 80(30)
  032e5b0  li 3, 0
  032e5b4  li 4, 2
  032e5b8  sth 5, 50(8)
  032e5bc  lwz 5, 80(30)
  032e5c0  stb 6, 49(5)
  032e5c4  lwz 5, 80(30)
  032e5c8  stb 6, 32(5)
  032e5cc  lwz 5, 80(30)
  032e5d0  li 6, 1
  032e5d4  sth 3, 52(5)
  032e5d8  lwz 3, 8320(7)
  032e5dc  lwz 5, 80(30)
  032e5e0  ld 3, 56(3)
  032e5e4  std 3, 56(5)
  032e5e8  lwz 3, 80(30)
  032e5ec  lfs 1, 16(31)
  032e5f0  li 5, 0
  032e5f4  stfs 1, 16(3)
  032e5f8  lfs 1, 20(31)
  032e5fc  stfs 1, 20(3)
  032e600  lfs 1, 24(31)
  032e604  stfs 1, 24(3)
  032e608  lfs 1, 28(31)
  032e60c  stfs 1, 28(3)
  032e610  lwz 3, 80(30)
  032e614  lfs 1, 64(31)
  032e618  stfs 1, 64(3)
  032e61c  lfs 1, 68(31)
  032e620  stfs 1, 68(3)
  032e624  lfs 1, 72(31)
  032e628  stfs 1, 72(3)
  032e62c  lfs 1, 76(31)
  032e630  stfs 1, 76(3)
  032e634  lwz 3, 80(30)
  032e638  bl 0xfddc0
  032e63c  nop
  032e640  lwz 3, 80(30)
  032e644  bl 0xf31a8
  032e648  nop
  032e64c  b 0x32e694
  032e650  lfs 1, 16(31)
  032e654  stfs 1, 16(3)
  032e658  lfs 1, 20(31)
  032e65c  stfs 1, 20(3)
  032e660  lfs 1, 24(31)
  032e664  stfs 1, 24(3)
  032e668  lfs 1, 28(31)
  032e66c  stfs 1, 28(3)
  032e670  lwz 3, 80(30)
  032e674  lfs 1, 64(31)
  032e678  stfs 1, 64(3)
  032e67c  lfs 1, 68(31)
  032e680  stfs 1, 68(3)
  032e684  lfs 1, 72(31)
  032e688  stfs 1, 72(3)
  032e68c  lfs 1, 76(31)
  032e690  stfs 1, 76(3)
  032e694  ld 0, 384(1)
  032e698  mtlr 0
  032e69c  lfd 26, 320(1)
  032e6a0  lfd 27, 328(1)
  032e6a4  lfd 28, 336(1)
  032e6a8  lfd 29, 344(1)
  032e6ac  lfd 30, 352(1)
  032e6b0  lfd 31, 360(1)
  032e6b4  ld 29, 296(1)
  032e6b8  ld 30, 304(1)
  032e6bc  ld 31, 312(1)
  032e6c0  addi 1, 1, 368
  032e6c4  blr

M289_0032e6c8:   # 0x32e6c8, 0x14 bytes
  032e6c8  lis 3, 128
  032e6cc  lis 4, 1
  032e6d0  addic 3, 3, 2052
  032e6d4  stw 4, 72(3)
  032e6d8  blr

M29_0032e710:   # 0x32e710, 0x1ec bytes
  032e710  stdu 1, -176(1)
  032e714  mflr 0
  032e718  std 0, 192(1)
  032e71c  lis 4, 161
  032e720  std 31, 168(1)
  032e724  lis 5, 128
  032e728  ori 31, 3, 0
  032e72c  lwz 4, 1808(4)
  032e730  lwz 5, 2164(5)
  032e734  divw 6, 4, 5
  032e738  std 30, 160(1)
  032e73c  mullw 5, 6, 5
  032e740  lwz 30, 120(3)
  032e744  subc 4, 4, 5
  032e748  std 29, 152(1)
  032e74c  std 28, 144(1)
  032e750  cmpwi 4, 0
  032e754  bf 2, 0x32e8dc
  032e758  addic 29, 1, 112
  032e75c  ori 3, 31, 0
  032e760  li 4, 0
  032e764  ori 5, 29, 0
  032e768  bl 0xf1114
  032e76c  nop
  032e770  lwz 3, 64(30)
  032e774  lfs 1, 20(31)
  032e778  lfs 2, 16(31)
  032e77c  lfs 3, 20(3)
  032e780  lfs 4, 16(3)
  032e784  fsubs 1, 1, 3
  032e788  fsubs 2, 2, 4
  032e78c  lis 3, 51
  032e790  addi 28, 3, -6432
  032e794  fmuls 1, 1, 1
  032e798  fmadds 1, 2, 2, 1
  032e79c  lfs 2, 0(28)
  032e7a0  lfs 3, 4(28)
  032e7a4  lfs 4, 8(28)
  032e7a8  lfs 5, 12(28)
  032e7ac  fsqrts 1, 1
  032e7b0  fsubs 1, 2, 1
  032e7b4  fmuls 1, 1, 3
  032e7b8  fmadds 2, 1, 4, 5
  032e7bc  fnmadds 1, 1, 4, 5
  032e7c0  bl 0xfcbe8
  032e7c4  nop
  032e7c8  lfs 3, 16(28)
  032e7cc  lfs 2, 72(31)
  032e7d0  fmuls 1, 1, 3
  032e7d4  bl 0x502578
  032e7d8  nop
  032e7dc  lfs 2, 20(28)
  032e7e0  lfs 3, 24(28)
  032e7e4  fadds 2, 1, 2
  032e7e8  fsubs 5, 3, 1
  032e7ec  lfs 4, 28(28)
  032e7f0  lis 3, 128
  032e7f4  lis 5, 114
  032e7f8  li 6, 0
  032e7fc  fsubs 3, 3, 2
  032e800  fsubs 6, 4, 2
  032e804  fsub 7, 1, 5
  032e808  fsubs 4, 4, 1
  032e80c  addic 4, 1, 128
  032e810  fsub 8, 2, 3
  032e814  fsel 1, 7, 5, 1
  032e818  fsel 2, 8, 3, 2
  032e81c  lfs 3, 32(28)
  032e820  fsub 7, 4, 1
  032e824  lfs 5, 36(28)
  032e828  fsub 8, 6, 2
  032e82c  fsel 1, 7, 4, 1
  032e830  lfs 4, 40(28)
  032e834  lfs 7, 44(28)
  032e838  lfs 11, 2160(3)
  032e83c  lfs 12, -3052(5)
  032e840  fsel 2, 8, 6, 2
  032e844  fmuls 6, 1, 1
  032e848  fmuls 8, 2, 2
  032e84c  fmuls 9, 6, 1
  032e850  fmuls 10, 8, 2
  032e854  fmadds 1, 9, 3, 1
  032e858  fmuls 13, 6, 9
  032e85c  fmuls 0, 8, 10
  032e860  fmadds 2, 10, 3, 2
  032e864  fmuls 10, 11, 12
  032e868  fmuls 9, 6, 13
  032e86c  fmadds 1, 13, 5, 1
  032e870  fmuls 3, 8, 0
  032e874  fmadds 2, 0, 5, 2
  032e878  lfs 5, 112(1)
  032e87c  fmuls 6, 6, 9
  032e880  fmadds 1, 9, 4, 1
  032e884  fmuls 8, 8, 3
  032e888  fmadds 2, 3, 4, 2
  032e88c  lfs 3, 116(1)
  032e890  fmadds 1, 6, 7, 1
  032e894  fmadds 2, 8, 7, 2
  032e898  fmuls 2, 10, 2
  032e89c  stfs 2, 128(1)
  032e8a0  lfs 4, 2160(3)
  032e8a4  fadds 2, 5, 2
  032e8a8  lfs 6, -3052(5)
  032e8ac  ori 3, 29, 0
  032e8b0  stw 6, 136(1)
  032e8b4  fmuls 4, 4, 6
  032e8b8  ori 5, 31, 0
  032e8bc  stfs 2, 112(1)
  032e8c0  fmuls 1, 4, 1
  032e8c4  fadds 2, 3, 1
  032e8c8  stfs 1, 132(1)
  032e8cc  stfs 2, 116(1)
  032e8d0  lfs 1, 104(30)
  032e8d4  bl 0x21a098
  032e8d8  nop
  032e8dc  ld 0, 192(1)
  032e8e0  mtlr 0
  032e8e4  ld 28, 144(1)
  032e8e8  ld 29, 152(1)
  032e8ec  ld 30, 160(1)
  032e8f0  ld 31, 168(1)
  032e8f4  addi 1, 1, 176
  032e8f8  blr
