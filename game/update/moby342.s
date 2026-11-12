# game/update/moby342.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M342_0034dce8:   # 0x34dce8, 0x14 bytes
  034dce8  lis 3, 132
  034dcec  lis 4, 1
  034dcf0  addic 3, 3, 160
  034dcf4  stw 4, 72(3)
  034dcf8  blr

M342_0034dd10:   # 0x34dd10, 0x4fc bytes
  034dd10  stdu 1, -288(1)
  034dd14  mflr 0
  034dd18  std 0, 304(1)
  034dd1c  stfd 26, 240(1)
  034dd20  stfd 27, 248(1)
  034dd24  stfd 28, 256(1)
  034dd28  stfd 29, 264(1)
  034dd2c  stfd 30, 272(1)
  034dd30  stfd 31, 280(1)
  034dd34  std 31, 232(1)
  034dd38  lis 4, 53
  034dd3c  ori 31, 3, 0
  034dd40  std 29, 216(1)
  034dd44  addi 4, 4, -8960
  034dd48  li 29, 0
  034dd4c  ori 3, 29, 0
  034dd50  std 30, 224(1)
  034dd54  lfs 31, 0(4)
  034dd58  lwz 30, 120(31)
  034dd5c  std 28, 208(1)
  034dd60  fmr 26, 31
  034dd64  lwz 28, 304(30)
  034dd68  stw 29, 304(30)
  034dd6c  fmr 30, 26
  034dd70  cmpw 3, 28
  034dd74  bt 2, 0x34e19c
  034dd78  slwi 3, 3, 4
  034dd7c  lwz 4, 320(30)
  034dd80  lfs 5, 16(31)
  034dd84  addc 3, 4, 3
  034dd88  lfs 6, 20(31)
  034dd8c  clrldi 3, 3, 32
  034dd90  lis 4, 53
  034dd94  lfs 29, 16(3)
  034dd98  lfs 28, 20(3)
  034dd9c  fsubs 1, 29, 5
  034dda0  fsubs 2, 28, 6
  034dda4  lfs 27, 24(3)
  034dda8  lis 3, 115
  034ddac  addi 4, 4, -8960
  034ddb0  addic 3, 3, 22784
  034ddb4  fabs 3, 1
  034ddb8  fabs 7, 2
  034ddbc  stfs 1, 124(1)
  034ddc0  stfs 2, 128(1)
  034ddc4  fsubs 1, 3, 7
  034ddc8  stfs 1, 132(1)
  034ddcc  lwz 5, 124(1)
  034ddd0  lfs 1, 124(1)
  034ddd4  lwz 6, 128(1)
  034ddd8  lfs 2, 128(1)
  034dddc  fabs 1, 1
  034dde0  lwz 7, 132(1)
  034dde4  rlwinm 6, 6, 3, 29, 29
  034dde8  lfs 4, 132(1)
  034ddec  fabs 2, 2
  034ddf0  rlwimi 6, 7, 2, 30, 30
  034ddf4  fsub 8, 4, 26
  034ddf8  fsub 4, 4, 26
  034ddfc  rlwimi 6, 5, 4, 28, 28
  034de00  ori 5, 3, 0
  034de04  rlwimi 5, 6, 2, 26, 28
  034de08  slwi 6, 6, 2
  034de0c  clrldi 5, 5, 32
  034de10  fsel 7, 8, 1, 7
  034de14  lfsx 1, 3, 6
  034de18  fsel 3, 4, 2, 3
  034de1c  lfs 2, 4(5)
  034de20  lfs 4, 4(4)
  034de24  fcmpu 0, 7, 26
  034de28  bt 1, 0x34de34
  034de2c  fmr 1, 26
  034de30  b 0x34df4c
  034de34  fsubs 8, 3, 7
  034de38  fadds 3, 3, 7
  034de3c  addic 4, 1, 16
  034de40  li 7, 2
  034de44  addic 6, 4, 168
  034de48  addic 5, 4, 152
  034de4c  mtctr 7
  034de50  fdivs 3, 8, 3
  034de54  fmuls 7, 3, 3
  034de58  stfs 3, 180(1)
  034de5c  stfs 3, 172(1)
  034de60  stfs 3, 176(1)
  034de64  stfs 3, 168(1)
  034de68  lfs 9, 180(1)
  034de6c  lfs 10, 172(1)
  034de70  lfs 11, 176(1)
  034de74  fmuls 8, 7, 7
  034de78  fmuls 10, 10, 7
  034de7c  fmuls 9, 9, 8
  034de80  fmuls 3, 8, 8
  034de84  fmuls 8, 11, 8
  034de88  stfs 10, 172(1)
  034de8c  fmuls 7, 9, 7
  034de90  stfs 8, 176(1)
  034de94  stfs 7, 180(1)
  034de98  lfs 7, 152(4)
  034de9c  fmuls 7, 7, 3
  034dea0  stfs 7, 168(4)
  034dea4  lfs 7, 4(5)
  034dea8  addic 5, 5, 8
  034deac  fmuls 7, 7, 3
  034deb0  addic 4, 4, 8
  034deb4  stfs 7, 4(6)
  034deb8  addic 6, 6, 8
  034debc  bdnz 0x34de98
  034dec0  li 6, 4
  034dec4  ori 4, 1, 0
  034dec8  mtctr 6
  034decc  lis 5, 115
  034ded0  addic 6, 4, 168
  034ded4  addic 5, 5, 22752
  034ded8  ori 8, 6, 0
  034dedc  lfs 3, 168(4)
  034dee0  lfs 7, 0(5)
  034dee4  fmuls 3, 3, 7
  034dee8  lfs 7, 4(5)
  034deec  addic 5, 5, 8
  034def0  stfs 3, 168(4)
  034def4  lfs 3, 4(6)
  034def8  addic 4, 4, 8
  034defc  fmuls 3, 3, 7
  034df00  stfs 3, 4(6)
  034df04  addic 6, 6, 8
  034df08  bdnz 0x34dedc
  034df0c  ori 4, 1, 0
  034df10  fmr 3, 26
  034df14  mtctr 7
  034df18  lfs 7, 168(4)
  034df1c  fadds 3, 3, 7
  034df20  lfs 7, 4(8)
  034df24  addic 4, 4, 16
  034df28  lfs 8, 8(8)
  034df2c  lfs 9, 12(8)
  034df30  addic 8, 8, 16
  034df34  fadds 3, 3, 7
  034df38  fadds 3, 3, 8
  034df3c  fadds 3, 3, 9
  034df40  bdnz 0x34df18
  034df44  fadds 3, 3, 4
  034df48  fmadds 1, 3, 1, 2
  034df4c  lwz 4, 472(30)
  034df50  lfs 2, 16(4)
  034df54  lfs 3, 20(4)
  034df58  fsubs 2, 2, 5
  034df5c  fsubs 3, 3, 6
  034df60  fabs 7, 2
  034df64  fabs 6, 3
  034df68  stfs 2, 112(1)
  034df6c  stfs 3, 116(1)
  034df70  fsubs 2, 7, 6
  034df74  stfs 2, 120(1)
  034df78  lwz 4, 112(1)
  034df7c  lfs 2, 112(1)
  034df80  lwz 5, 116(1)
  034df84  lfs 3, 116(1)
  034df88  lwz 6, 120(1)
  034df8c  rlwinm 5, 5, 3, 29, 29
  034df90  lfs 5, 120(1)
  034df94  fabs 2, 2
  034df98  rlwimi 5, 6, 2, 30, 30
  034df9c  fabs 3, 3
  034dfa0  fsub 8, 5, 26
  034dfa4  fsub 9, 5, 26
  034dfa8  rlwimi 5, 4, 4, 28, 28
  034dfac  ori 4, 3, 0
  034dfb0  rlwimi 4, 5, 2, 26, 28
  034dfb4  slwi 5, 5, 2
  034dfb8  clrldi 4, 4, 32
  034dfbc  fsel 6, 8, 2, 6
  034dfc0  lfsx 5, 3, 5
  034dfc4  fsel 3, 9, 3, 7
  034dfc8  lfs 2, 4(4)
  034dfcc  fcmpu 0, 6, 26
  034dfd0  bt 1, 0x34dfdc
  034dfd4  fmr 4, 26
  034dfd8  b 0x34e0f4
  034dfdc  fsubs 7, 3, 6
  034dfe0  fadds 3, 3, 6
  034dfe4  addic 3, 1, 16
  034dfe8  li 7, 2
  034dfec  addic 5, 3, 136
  034dff0  addic 4, 3, 120
  034dff4  mtctr 7
  034dff8  fdivs 3, 7, 3
  034dffc  fmuls 6, 3, 3
  034e000  stfs 3, 148(1)
  034e004  stfs 3, 140(1)
  034e008  stfs 3, 144(1)
  034e00c  stfs 3, 136(1)
  034e010  lfs 8, 148(1)
  034e014  lfs 9, 140(1)
  034e018  lfs 10, 144(1)
  034e01c  fmuls 7, 6, 6
  034e020  fmuls 9, 9, 6
  034e024  fmuls 8, 8, 7
  034e028  fmuls 3, 7, 7
  034e02c  fmuls 7, 10, 7
  034e030  stfs 9, 140(1)
  034e034  fmuls 6, 8, 6
  034e038  stfs 7, 144(1)
  034e03c  stfs 6, 148(1)
  034e040  lfs 6, 120(3)
  034e044  fmuls 6, 6, 3
  034e048  stfs 6, 136(3)
  034e04c  lfs 6, 4(4)
  034e050  addic 4, 4, 8
  034e054  fmuls 6, 6, 3
  034e058  addic 3, 3, 8
  034e05c  stfs 6, 4(5)
  034e060  addic 5, 5, 8
  034e064  bdnz 0x34e040
  034e068  li 5, 4
  034e06c  ori 3, 1, 0
  034e070  mtctr 5
  034e074  lis 4, 115
  034e078  addic 5, 3, 136
  034e07c  addic 4, 4, 22752
  034e080  ori 6, 5, 0
  034e084  lfs 3, 136(3)
  034e088  lfs 6, 0(4)
  034e08c  fmuls 3, 3, 6
  034e090  lfs 6, 4(4)
  034e094  addic 4, 4, 8
  034e098  stfs 3, 136(3)
  034e09c  lfs 3, 4(5)
  034e0a0  addic 3, 3, 8
  034e0a4  fmuls 3, 3, 6
  034e0a8  stfs 3, 4(5)
  034e0ac  addic 5, 5, 8
  034e0b0  bdnz 0x34e084
  034e0b4  ori 3, 1, 0
  034e0b8  fmr 3, 26
  034e0bc  mtctr 7
  034e0c0  lfs 6, 136(3)
  034e0c4  fadds 3, 3, 6
  034e0c8  lfs 6, 4(6)
  034e0cc  addic 3, 3, 16
  034e0d0  lfs 7, 8(6)
  034e0d4  lfs 8, 12(6)
  034e0d8  addic 6, 6, 16
  034e0dc  fadds 3, 3, 6
  034e0e0  fadds 3, 3, 7
  034e0e4  fadds 3, 3, 8
  034e0e8  bdnz 0x34e0c0
  034e0ec  fadds 4, 3, 4
  034e0f0  fmadds 4, 4, 5, 2
  034e0f4  fmr 2, 4
  034e0f8  bl 0x5026a0
  034e0fc  nop
  034e100  lwz 3, 472(30)
  034e104  lis 4, 53
  034e108  addi 4, 4, -8960
  034e10c  lfs 2, 20(3)
  034e110  lfs 3, 16(3)
  034e114  fsubs 2, 2, 28
  034e118  fsubs 3, 3, 29
  034e11c  lfs 4, 24(3)
  034e120  lfs 5, 8(4)
  034e124  fsubs 4, 4, 27
  034e128  fcmpu 0, 1, 5
  034e12c  fmuls 2, 2, 2
  034e130  cror 6, 1, 2
  034e134  fmadds 2, 3, 3, 2
  034e138  fmadds 2, 4, 4, 2
  034e13c  fsqrts 2, 2
  034e140  bt 6, 0x34e160
  034e144  fcmpu 0, 30, 1
  034e148  cror 6, 1, 2
  034e14c  bt 6, 0x34e19c
  034e150  fmr 31, 2
  034e154  fmr 30, 1
  034e158  lwz 29, 304(30)
  034e15c  b 0x34e19c
  034e160  lis 3, 53
  034e164  fcmpu 6, 31, 2
  034e168  addi 3, 3, -8960
  034e16c  lfs 3, 12(3)
  034e170  fcmpu 7, 2, 3
  034e174  bt 28, 0x34e184
  034e178  fcmpu 1, 31, 3
  034e17c  bt 25, 0x34e190
  034e180  bt 4, 0x34e190
  034e184  fcmpu 1, 31, 2
  034e188  bf 28, 0x34e19c
  034e18c  bf 4, 0x34e19c
  034e190  fmr 31, 2
  034e194  fmr 30, 1
  034e198  lwz 29, 304(30)
  034e19c  lwz 3, 320(30)
  034e1a0  lwz 4, 304(30)
  034e1a4  lbz 5, 308(30)
  034e1a8  extsb 5, 5
  034e1ac  lwz 3, 0(3)
  034e1b0  addc 4, 4, 3
  034e1b4  addc 4, 4, 5
  034e1b8  divw 5, 4, 3
  034e1bc  mullw 3, 5, 3
  034e1c0  subc 3, 4, 3
  034e1c4  cmpwi 3, 0
  034e1c8  stw 3, 304(30)
  034e1cc  bf 2, 0x34dd70
  034e1d0  stw 29, 304(30)
  034e1d4  ld 0, 304(1)
  034e1d8  mtlr 0
  034e1dc  lfd 26, 240(1)
  034e1e0  lfd 27, 248(1)
  034e1e4  lfd 28, 256(1)
  034e1e8  lfd 29, 264(1)
  034e1ec  lfd 30, 272(1)
  034e1f0  lfd 31, 280(1)
  034e1f4  ld 28, 208(1)
  034e1f8  ld 29, 216(1)
  034e1fc  ld 30, 224(1)
  034e200  ld 31, 232(1)
  034e204  addi 1, 1, 288
  034e208  blr

M342_0034e230:   # 0x34e230, 0x9a0 bytes
  034e230  stdu 1, -576(1)
  034e234  mflr 0
  034e238  std 0, 592(1)
  034e23c  stfd 30, 560(1)
  034e240  stfd 31, 568(1)
  034e244  std 31, 552(1)
  034e248  lis 4, 53
  034e24c  ori 31, 3, 0
  034e250  addi 5, 4, -7668
  034e254  li 6, 0
  034e258  std 30, 544(1)
  034e25c  lis 4, 51
  034e260  lwz 30, 120(31)
  034e264  lfs 31, 0(5)
  034e268  li 5, 0
  034e26c  std 29, 536(1)
  034e270  std 28, 528(1)
  034e274  std 27, 520(1)
  034e278  std 26, 512(1)
  034e27c  stw 6, 420(1)
  034e280  bl 0x10675c
  034e284  nop
  034e288  ori 29, 3, 0
  034e28c  ori 3, 31, 0
  034e290  ori 5, 30, 0
  034e294  addic 7, 1, 416
  034e298  li 6, 0
  034e29c  addic 8, 1, 420
  034e2a0  li 10, 4
  034e2a4  ori 4, 29, 0
  034e2a8  li 9, 0
  034e2ac  bl 0x106840
  034e2b0  nop
  034e2b4  lwz 3, 416(1)
  034e2b8  cmpwi 3, 1
  034e2bc  bt 2, 0x34ea64
  034e2c0  lbz 3, 32(31)
  034e2c4  cmpwi 1, 3, 16
  034e2c8  cmpwi 3, 99
  034e2cc  cror 2, 2, 6
  034e2d0  bt 2, 0x34ea64
  034e2d4  lwz 3, 420(1)
  034e2d8  lfs 1, 0(30)
  034e2dc  lfs 2, 420(1)
  034e2e0  srawi 4, 3, 31
  034e2e4  lbz 6, 468(30)
  034e2e8  fsubs 1, 1, 2
  034e2ec  srwi 5, 4, 1
  034e2f0  cmpwi 6, 0
  034e2f4  xor 3, 5, 3
  034e2f8  subc 3, 3, 4
  034e2fc  fcmpu 1, 1, 31
  034e300  stfs 1, 0(30)
  034e304  bt 2, 0x34e364
  034e308  li 3, 16
  034e30c  lbz 4, 83(31)
  034e310  cmpwi 4, 14
  034e314  stb 3, 32(31)
  034e318  bt 2, 0x34e334
  034e31c  ori 3, 31, 0
  034e320  li 4, 14
  034e324  li 5, 0
  034e328  li 6, 6
  034e32c  bl 0xfddc0
  034e330  nop
  034e334  lwz 3, 464(30)
  034e338  li 4, 2
  034e33c  li 5, 0
  034e340  li 6, 0
  034e344  bl 0xfddc0
  034e348  nop
  034e34c  li 3, 0
  034e350  stw 3, 44(30)
  034e354  stw 3, 40(30)
  034e358  stw 3, 36(30)
  034e35c  stw 3, 32(30)
  034e360  b 0x34ea54
  034e364  bf 5, 0x34e67c
  034e368  lis 4, 16256
  034e36c  cmpw 3, 4
  034e370  bf 0, 0x34e380
  034e374  li 3, 100
  034e378  stb 3, 71(30)
  034e37c  b 0x34ea54
  034e380  li 3, 120
  034e384  stb 3, 71(30)
  034e388  lwz 3, 32(29)
  034e38c  lhz 3, 166(3)
  034e390  cmpwi 3, 176
  034e394  cmpwi 1, 3, 177
  034e398  bt 2, 0x34e3a0
  034e39c  bf 6, 0x34e3c4
  034e3a0  lis 3, 53
  034e3a4  li 4, 4
  034e3a8  addi 3, 3, -7668
  034e3ac  lis 5, 114
  034e3b0  li 6, -3056
  034e3b4  lvlx 2, 4, 3
  034e3b8  vspltw 2, 2, 0
  034e3bc  lvlx 3, 6, 5
  034e3c0  b 0x34e3e4
  034e3c4  lis 3, 53
  034e3c8  li 4, 8
  034e3cc  addi 3, 3, -7668
  034e3d0  li 5, -3056
  034e3d4  lis 6, 114
  034e3d8  lvlx 2, 4, 3
  034e3dc  lvlx 3, 5, 6
  034e3e0  vspltw 2, 2, 0
  034e3e4  vspltisw 4, -1
  034e3e8  vspltw 3, 3, 0
  034e3ec  li 3, 6
  034e3f0  vslw 4, 4, 4
  034e3f4  vmaddfp 2, 3, 2, 4
  034e3f8  vctsxs 2, 2, 0
  034e3fc  vsplth 2, 2, 1
  034e400  stvehx 2, 3, 30
  034e404  lbz 3, 32(31)
  034e408  cmpwi 1, 3, 1
  034e40c  cmpwi 3, 2
  034e410  cror 2, 2, 6
  034e414  bt 2, 0x34ea54
  034e418  cmpwi 3, 9
  034e41c  bt 2, 0x34ea54
  034e420  lis 3, 132
  034e424  lis 4, 114
  034e428  lis 5, 14851
  034e42c  lis 6, 132
  034e430  lfs 1, 320(3)
  034e434  lfs 2, -3048(4)
  034e438  ori 3, 5, 4719
  034e43c  fmuls 1, 1, 2
  034e440  lis 4, 114
  034e444  lis 5, 132
  034e448  stw 3, 100(30)
  034e44c  lis 7, 151
  034e450  li 3, 0
  034e454  stfs 1, 96(30)
  034e458  lfs 1, 288(6)
  034e45c  lfs 2, -3052(4)
  034e460  li 6, 9
  034e464  fmuls 1, 1, 2
  034e468  addic 4, 7, -25376
  034e46c  stfs 1, 104(30)
  034e470  lfs 1, 292(5)
  034e474  stb 3, 141(30)
  034e478  fmuls 1, 1, 2
  034e47c  stw 6, 116(30)
  034e480  addic 3, 30, 80
  034e484  stfs 1, 108(30)
  034e488  lfs 1, 16(31)
  034e48c  lfs 2, 128(4)
  034e490  lfs 3, 20(31)
  034e494  lfs 4, 132(4)
  034e498  fsubs 1, 1, 2
  034e49c  fsubs 2, 3, 4
  034e4a0  lis 4, 115
  034e4a4  addic 4, 4, 22784
  034e4a8  fabs 3, 1
  034e4ac  fabs 4, 2
  034e4b0  stfs 1, 436(1)
  034e4b4  stfs 2, 440(1)
  034e4b8  fsubs 1, 3, 4
  034e4bc  stfs 1, 444(1)
  034e4c0  lwz 5, 436(1)
  034e4c4  lfs 1, 436(1)
  034e4c8  lwz 6, 440(1)
  034e4cc  lfs 2, 440(1)
  034e4d0  lwz 7, 444(1)
  034e4d4  rlwinm 6, 6, 3, 29, 29
  034e4d8  fabs 5, 2
  034e4dc  lfs 2, 444(1)
  034e4e0  fabs 1, 1
  034e4e4  rlwimi 6, 7, 2, 30, 30
  034e4e8  fsub 6, 2, 31
  034e4ec  fsub 7, 2, 31
  034e4f0  rlwimi 6, 5, 4, 28, 28
  034e4f4  ori 5, 4, 0
  034e4f8  rlwimi 5, 6, 2, 26, 28
  034e4fc  slwi 6, 6, 2
  034e500  clrldi 5, 5, 32
  034e504  fsel 4, 6, 1, 4
  034e508  lfsx 1, 4, 6
  034e50c  fsel 3, 7, 5, 3
  034e510  lfs 2, 4(5)
  034e514  fcmpu 0, 4, 31
  034e518  bt 1, 0x34e520
  034e51c  b 0x34e640
  034e520  fsubs 5, 3, 4
  034e524  fadds 3, 3, 4
  034e528  addic 4, 1, 16
  034e52c  li 7, 2
  034e530  addic 5, 4, 464
  034e534  addic 6, 4, 480
  034e538  mtctr 7
  034e53c  fdivs 3, 5, 3
  034e540  fmuls 4, 3, 3
  034e544  stfs 3, 492(1)
  034e548  stfs 3, 484(1)
  034e54c  stfs 3, 488(1)
  034e550  stfs 3, 480(1)
  034e554  lfs 6, 492(1)
  034e558  lfs 7, 484(1)
  034e55c  lfs 8, 488(1)
  034e560  fmuls 5, 4, 4
  034e564  fmuls 7, 7, 4
  034e568  fmuls 6, 6, 5
  034e56c  fmuls 3, 5, 5
  034e570  fmuls 5, 8, 5
  034e574  stfs 7, 484(1)
  034e578  fmuls 4, 6, 4
  034e57c  stfs 5, 488(1)
  034e580  stfs 4, 492(1)
  034e584  lfs 4, 464(4)
  034e588  fmuls 4, 4, 3
  034e58c  stfs 4, 480(4)
  034e590  lfs 4, 4(5)
  034e594  addic 4, 4, 8
  034e598  addic 5, 5, 8
  034e59c  fmuls 4, 4, 3
  034e5a0  stfs 4, 4(6)
  034e5a4  addic 6, 6, 8
  034e5a8  bdnz 0x34e584
  034e5ac  li 6, 4
  034e5b0  ori 4, 1, 0
  034e5b4  mtctr 6
  034e5b8  lis 5, 115
  034e5bc  addic 6, 4, 480
  034e5c0  addic 5, 5, 22752
  034e5c4  ori 8, 6, 0
  034e5c8  lfs 3, 480(4)
  034e5cc  lfs 4, 0(5)
  034e5d0  fmuls 3, 3, 4
  034e5d4  lfs 4, 4(5)
  034e5d8  addic 5, 5, 8
  034e5dc  stfs 3, 480(4)
  034e5e0  lfs 3, 4(6)
  034e5e4  addic 4, 4, 8
  034e5e8  fmuls 3, 3, 4
  034e5ec  stfs 3, 4(6)
  034e5f0  addic 6, 6, 8
  034e5f4  bdnz 0x34e5c8
  034e5f8  ori 4, 1, 0
  034e5fc  mtctr 7
  034e600  lfs 3, 480(4)
  034e604  lfs 4, 4(8)
  034e608  fadds 3, 31, 3
  034e60c  lfs 5, 8(8)
  034e610  lfs 31, 12(8)
  034e614  addic 4, 4, 16
  034e618  addic 8, 8, 16
  034e61c  fadds 3, 3, 4
  034e620  fadds 3, 3, 5
  034e624  fadds 31, 3, 31
  034e628  bdnz 0x34e600
  034e62c  lis 4, 53
  034e630  addi 4, 4, -7668
  034e634  lfs 3, 12(4)
  034e638  fadds 31, 31, 3
  034e63c  fmadds 31, 31, 1, 2
  034e640  ori 4, 3, 0
  034e644  fmr 1, 31
  034e648  ori 3, 31, 0
  034e64c  li 6, 8
  034e650  li 7, 1
  034e654  li 8, 0
  034e658  bl 0x10ad80
  034e65c  nop
  034e660  lis 3, 16544
  034e664  lis 4, 16672
  034e668  li 5, 13
  034e66c  stw 3, 160(30)
  034e670  stw 4, 164(30)
  034e674  stb 5, 32(31)
  034e678  b 0x34ea54
  034e67c  lis 3, 15363
  034e680  lis 4, 14851
  034e684  ori 3, 3, 4719
  034e688  lis 5, 132
  034e68c  ori 4, 4, 4719
  034e690  lis 6, 114
  034e694  stw 3, 96(30)
  034e698  lis 3, 132
  034e69c  stw 4, 100(30)
  034e6a0  lfs 1, 280(5)
  034e6a4  li 4, 0
  034e6a8  lfs 2, -3052(6)
  034e6ac  lis 5, 151
  034e6b0  li 6, 9
  034e6b4  fmuls 1, 1, 2
  034e6b8  addic 5, 5, -25376
  034e6bc  stfs 1, 104(30)
  034e6c0  lfs 1, 284(3)
  034e6c4  stb 4, 141(30)
  034e6c8  fmuls 1, 1, 2
  034e6cc  stw 6, 116(30)
  034e6d0  lis 4, 115
  034e6d4  addic 3, 30, 80
  034e6d8  addic 4, 4, 22784
  034e6dc  stfs 1, 108(30)
  034e6e0  lfs 1, 16(31)
  034e6e4  lfs 2, 128(5)
  034e6e8  lfs 3, 20(31)
  034e6ec  lfs 4, 132(5)
  034e6f0  fsubs 1, 1, 2
  034e6f4  fsubs 2, 3, 4
  034e6f8  fabs 3, 1
  034e6fc  fabs 4, 2
  034e700  stfs 1, 424(1)
  034e704  stfs 2, 428(1)
  034e708  fsubs 1, 3, 4
  034e70c  stfs 1, 432(1)
  034e710  lwz 5, 424(1)
  034e714  lfs 1, 424(1)
  034e718  lwz 6, 428(1)
  034e71c  lfs 2, 428(1)
  034e720  lwz 7, 432(1)
  034e724  rlwinm 6, 6, 3, 29, 29
  034e728  fabs 5, 2
  034e72c  lfs 2, 432(1)
  034e730  fabs 1, 1
  034e734  rlwimi 6, 7, 2, 30, 30
  034e738  fsub 6, 2, 31
  034e73c  fsub 7, 2, 31
  034e740  rlwimi 6, 5, 4, 28, 28
  034e744  ori 5, 4, 0
  034e748  rlwimi 5, 6, 2, 26, 28
  034e74c  slwi 6, 6, 2
  034e750  clrldi 5, 5, 32
  034e754  fsel 4, 6, 1, 4
  034e758  lfsx 1, 4, 6
  034e75c  fsel 3, 7, 5, 3
  034e760  lfs 2, 4(5)
  034e764  fcmpu 0, 4, 31
  034e768  bt 1, 0x34e770
  034e76c  b 0x34e890
  034e770  fsubs 5, 3, 4
  034e774  fadds 3, 3, 4
  034e778  addic 4, 1, 16
  034e77c  li 7, 2
  034e780  addic 5, 4, 432
  034e784  addic 6, 4, 448
  034e788  mtctr 7
  034e78c  fdivs 3, 5, 3
  034e790  fmuls 4, 3, 3
  034e794  stfs 3, 460(1)
  034e798  stfs 3, 452(1)
  034e79c  stfs 3, 456(1)
  034e7a0  stfs 3, 448(1)
  034e7a4  lfs 6, 460(1)
  034e7a8  lfs 7, 452(1)
  034e7ac  lfs 8, 456(1)
  034e7b0  fmuls 5, 4, 4
  034e7b4  fmuls 7, 7, 4
  034e7b8  fmuls 6, 6, 5
  034e7bc  fmuls 3, 5, 5
  034e7c0  fmuls 5, 8, 5
  034e7c4  stfs 7, 452(1)
  034e7c8  fmuls 4, 6, 4
  034e7cc  stfs 5, 456(1)
  034e7d0  stfs 4, 460(1)
  034e7d4  lfs 4, 432(4)
  034e7d8  fmuls 4, 4, 3
  034e7dc  stfs 4, 448(4)
  034e7e0  lfs 4, 4(5)
  034e7e4  addic 4, 4, 8
  034e7e8  addic 5, 5, 8
  034e7ec  fmuls 4, 4, 3
  034e7f0  stfs 4, 4(6)
  034e7f4  addic 6, 6, 8
  034e7f8  bdnz 0x34e7d4
  034e7fc  li 6, 4
  034e800  ori 4, 1, 0
  034e804  mtctr 6
  034e808  lis 5, 115
  034e80c  addic 6, 4, 448
  034e810  addic 5, 5, 22752
  034e814  ori 8, 6, 0
  034e818  lfs 3, 448(4)
  034e81c  lfs 4, 0(5)
  034e820  fmuls 3, 3, 4
  034e824  lfs 4, 4(5)
  034e828  addic 5, 5, 8
  034e82c  stfs 3, 448(4)
  034e830  lfs 3, 4(6)
  034e834  addic 4, 4, 8
  034e838  fmuls 3, 3, 4
  034e83c  stfs 3, 4(6)
  034e840  addic 6, 6, 8
  034e844  bdnz 0x34e818
  034e848  ori 4, 1, 0
  034e84c  mtctr 7
  034e850  lfs 3, 448(4)
  034e854  lfs 4, 4(8)
  034e858  fadds 3, 31, 3
  034e85c  lfs 5, 8(8)
  034e860  lfs 31, 12(8)
  034e864  addic 4, 4, 16
  034e868  addic 8, 8, 16
  034e86c  fadds 3, 3, 4
  034e870  fadds 3, 3, 5
  034e874  fadds 31, 3, 31
  034e878  bdnz 0x34e850
  034e87c  lis 4, 53
  034e880  addi 4, 4, -7668
  034e884  lfs 3, 12(4)
  034e888  fadds 31, 31, 3
  034e88c  fmadds 31, 31, 1, 2
  034e890  ori 4, 3, 0
  034e894  fmr 1, 31
  034e898  ori 3, 31, 0
  034e89c  li 6, 16
  034e8a0  li 7, 1
  034e8a4  li 8, 0
  034e8a8  bl 0x10ad80
  034e8ac  nop
  034e8b0  lis 4, 16640
  034e8b4  lwz 3, 460(30)
  034e8b8  lis 5, 16752
  034e8bc  cmpwi 3, 0
  034e8c0  stw 4, 160(30)
  034e8c4  stw 5, 164(30)
  034e8c8  bt 2, 0x34e9e0
  034e8cc  li 29, 1
  034e8d0  li 28, 0
  034e8d4  addic 27, 1, 128
  034e8d8  stb 29, 32(3)
  034e8dc  lwz 26, 120(3)
  034e8e0  lwz 4, 460(30)
  034e8e4  ori 3, 27, 0
  034e8e8  lhz 5, 52(4)
  034e8ec  rlwimi 5, 28, 0, 23, 23
  034e8f0  sth 5, 52(4)
  034e8f4  lwz 4, 460(30)
  034e8f8  addic 4, 4, 192
  034e8fc  bl 0x500f6c
  034e900  nop
  034e904  lwz 4, 460(30)
  034e908  ori 3, 27, 0
  034e90c  addic 4, 4, 64
  034e910  bl 0x10c1e8
  034e914  nop
  034e918  lis 3, 53
  034e91c  vspltisw 2, -1
  034e920  li 5, 16
  034e924  addi 3, 3, -7668
  034e928  lis 4, 114
  034e92c  li 6, -3056
  034e930  vslw 2, 2, 2
  034e934  lis 27, 114
  034e938  lvlx 3, 5, 3
  034e93c  vspltw 3, 3, 0
  034e940  lvlx 4, 6, 4
  034e944  vmaddfp 2, 4, 3, 2
  034e948  vctsxs 2, 2, 0
  034e94c  vspltw 2, 2, 0
  034e950  stvewx 2, 0, 26
  034e954  stw 29, 4(26)
  034e958  stw 28, 60(26)
  034e95c  stw 28, 52(26)
  034e960  stw 28, 48(26)
  034e964  lfs 1, 20(3)
  034e968  lfs 2, -3052(27)
  034e96c  stw 28, 44(26)
  034e970  fmuls 1, 2, 1
  034e974  stw 28, 40(26)
  034e978  stw 28, 36(26)
  034e97c  stw 28, 32(26)
  034e980  stfs 1, 56(26)
  034e984  lfs 31, 24(3)
  034e988  lfs 3, 28(3)
  034e98c  fmuls 1, 2, 31
  034e990  fmr 30, 3
  034e994  fmuls 2, 2, 30
  034e998  bl 0xfcbe8
  034e99c  nop
  034e9a0  stfs 1, 32(26)
  034e9a4  lfs 2, -3052(27)
  034e9a8  fmuls 1, 2, 31
  034e9ac  fmuls 2, 2, 30
  034e9b0  bl 0xfcbe8
  034e9b4  nop
  034e9b8  stfs 1, 36(26)
  034e9bc  lfs 2, -3052(27)
  034e9c0  fmuls 1, 2, 31
  034e9c4  fmuls 2, 2, 30
  034e9c8  bl 0xfcbe8
  034e9cc  nop
  034e9d0  li 3, 256
  034e9d4  stfs 1, 40(26)
  034e9d8  stw 31, 8(26)
  034e9dc  stw 3, 12(26)
  034e9e0  lwz 3, 464(30)
  034e9e4  cmpwi 3, 0
  034e9e8  bt 2, 0x34e9fc
  034e9ec  bl 0xefb38
  034e9f0  nop
  034e9f4  li 3, 0
  034e9f8  stw 3, 464(30)
  034e9fc  ori 3, 31, 0
  034ea00  li 4, 0
  034ea04  li 5, -1
  034ea08  bl 0xfd8d0
  034ea0c  nop
  034ea10  lhz 3, 52(31)
  034ea14  li 4, 0
  034ea18  li 5, 250
  034ea1c  rlwimi 3, 4, 0, 19, 19
  034ea20  li 4, 99
  034ea24  sth 3, 52(31)
  034ea28  stb 5, 71(30)
  034ea2c  lbz 3, 83(31)
  034ea30  stb 4, 32(31)
  034ea34  cmpwi 3, 16
  034ea38  bt 2, 0x34ea54
  034ea3c  ori 3, 31, 0
  034ea40  li 4, 16
  034ea44  li 5, 0
  034ea48  li 6, 6
  034ea4c  bl 0xfddc0
  034ea50  nop
  034ea54  addic 4, 30, 64
  034ea58  ori 3, 31, 0
  034ea5c  bl 0x10c808
  034ea60  nop
  034ea64  li 3, 255
  034ea68  stb 3, 164(31)
  034ea6c  lwz 3, 472(30)
  034ea70  cmpwi 3, 0
  034ea74  bt 2, 0x34eae4
  034ea78  lbz 4, 32(3)
  034ea7c  cmpwi 4, 127
  034ea80  bt 1, 0x34eaa0
  034ea84  lhz 3, 166(3)
  034ea88  cmpwi 1, 3, 203
  034ea8c  cmpwi 3, 270
  034ea90  cror 2, 2, 6
  034ea94  bt 2, 0x34eb08
  034ea98  cmpwi 3, 0
  034ea9c  bt 2, 0x34eb08
  034eaa0  lis 4, 53
  034eaa4  ori 3, 31, 0
  034eaa8  addi 4, 4, -7668
  034eaac  addic 5, 1, 256
  034eab0  lfs 1, 32(4)
  034eab4  bl 0x1118d8
  034eab8  nop
  034eabc  lwz 3, 320(1)
  034eac0  stw 3, 472(30)
  034eac4  lbz 3, 32(31)
  034eac8  cmpwi 3, 7
  034eacc  bt 2, 0x34ead8
  034ead0  cmpwi 3, 8
  034ead4  bf 2, 0x34eb08
  034ead8  li 3, 18
  034eadc  stb 3, 32(31)
  034eae0  b 0x34eb08
  034eae4  lis 3, 53
  034eae8  addic 5, 1, 336
  034eaec  addi 4, 3, -7668
  034eaf0  ori 3, 31, 0
  034eaf4  lfs 1, 32(4)
  034eaf8  bl 0x1118d8
  034eafc  nop
  034eb00  lwz 3, 400(1)
  034eb04  stw 3, 472(30)
  034eb08  lwz 3, 460(30)
  034eb0c  cmpwi 3, 0
  034eb10  bt 2, 0x34eb90
  034eb14  lbz 3, 32(31)
  034eb18  cmpwi 3, 99
  034eb1c  bt 2, 0x34eb90
  034eb20  addic 5, 1, 112
  034eb24  ori 3, 31, 0
  034eb28  li 4, 4
  034eb2c  bl 0xf1114
  034eb30  nop
  034eb34  addic 29, 1, 192
  034eb38  ori 3, 31, 0
  034eb3c  li 4, 4
  034eb40  ori 5, 29, 0
  034eb44  bl 0xf1038
  034eb48  nop
  034eb4c  lwz 3, 460(30)
  034eb50  ori 4, 29, 0
  034eb54  addic 3, 3, 192
  034eb58  bl 0x500fa8
  034eb5c  nop
  034eb60  lwz 3, 460(30)
  034eb64  lfs 1, 112(1)
  034eb68  stfs 1, 16(3)
  034eb6c  lfs 1, 116(1)
  034eb70  stfs 1, 20(3)
  034eb74  lfs 1, 120(1)
  034eb78  stfs 1, 24(3)
  034eb7c  lfs 1, 124(1)
  034eb80  stfs 1, 28(3)
  034eb84  lwz 3, 460(30)
  034eb88  bl 0xf31a8
  034eb8c  nop
  034eb90  addic 4, 30, 64
  034eb94  ori 3, 31, 0
  034eb98  bl 0x10c9a0
  034eb9c  nop
  034eba0  ld 0, 592(1)
  034eba4  mtlr 0
  034eba8  lfd 30, 560(1)
  034ebac  lfd 31, 568(1)
  034ebb0  ld 26, 512(1)
  034ebb4  ld 27, 520(1)
  034ebb8  ld 28, 528(1)
  034ebbc  ld 29, 536(1)
  034ebc0  ld 30, 544(1)
  034ebc4  ld 31, 552(1)
  034ebc8  addi 1, 1, 576
  034ebcc  blr

UpdateMoby_342:   # 0x34ec58, 0x1d2c bytes
  034ec58  stdu 1, -752(1)
  034ec5c  mflr 0
  034ec60  std 0, 768(1)
  034ec64  stfd 29, 728(1)
  034ec68  stfd 30, 736(1)
  034ec6c  stfd 31, 744(1)
  034ec70  std 31, 720(1)
  034ec74  std 30, 712(1)
  034ec78  ori 31, 3, 0
  034ec7c  std 29, 704(1)
  034ec80  std 28, 696(1)
  034ec84  std 27, 688(1)
  034ec88  lwz 30, 120(31)
  034ec8c  bl 0x34e230
  034ec90  lbz 3, 32(31)
  034ec94  cmpwi 3, 10
  034ec98  bt 1, 0x34ecfc
  034ec9c  cmpwi 3, 3
  034eca0  bt 1, 0x34eccc
  034eca4  cmpwi 3, 0
  034eca8  bt 1, 0x34ecb8
  034ecac  cmpwi 3, -1
  034ecb0  bf 1, 0x350954
  034ecb4  b 0x34ed54
  034ecb8  cmpwi 3, 1
  034ecbc  bf 1, 0x34efcc
  034ecc0  cmpwi 3, 2
  034ecc4  bf 1, 0x34f168
  034ecc8  b 0x34f4c4
  034eccc  cmpwi 3, 7
  034ecd0  bt 1, 0x34ece8
  034ecd4  cmpwi 3, 4
  034ecd8  bf 1, 0x350954
  034ecdc  cmpwi 3, 6
  034ece0  bf 1, 0x34fee0
  034ece4  b 0x34fcbc
  034ece8  cmpwi 3, 8
  034ecec  bf 1, 0x34f8b8
  034ecf0  cmpwi 3, 9
  034ecf4  bf 1, 0x34f400
  034ecf8  b 0x34fe3c
  034ecfc  cmpwi 3, 16
  034ed00  bt 1, 0x34ed2c
  034ed04  cmpwi 3, 13
  034ed08  bt 1, 0x34ed18
  034ed0c  cmpwi 3, 12
  034ed10  bf 1, 0x34fee0
  034ed14  b 0x350684
  034ed18  cmpwi 3, 14
  034ed1c  bf 1, 0x3501d0
  034ed20  cmpwi 3, 15
  034ed24  bf 1, 0x3502c8
  034ed28  b 0x3504e8
  034ed2c  cmpwi 3, 19
  034ed30  bt 1, 0x34ed48
  034ed34  cmpwi 3, 17
  034ed38  bf 1, 0x350954
  034ed3c  cmpwi 3, 18
  034ed40  bf 1, 0x34fea0
  034ed44  b 0x34f878
  034ed48  cmpwi 3, 99
  034ed4c  bt 2, 0x350838
  034ed50  b 0x350954
  034ed54  lis 3, 151
  034ed58  li 29, 0
  034ed5c  addic 4, 3, -25376
  034ed60  addic 3, 30, 176
  034ed64  stb 29, 9(30)
  034ed68  lwz 4, 8320(4)
  034ed6c  ld 4, 56(4)
  034ed70  std 4, 56(31)
  034ed74  bl 0x100f8c
  034ed78  nop
  034ed7c  lis 3, 15605
  034ed80  vspltisw 3, -1
  034ed84  lis 4, 16000
  034ed88  lis 5, 16025
  034ed8c  ori 3, 3, 49807
  034ed90  lis 6, 132
  034ed94  ori 5, 5, 39322
  034ed98  stw 4, 244(30)
  034ed9c  lis 7, 114
  034eda0  vslw 3, 3, 3
  034eda4  stw 3, 236(30)
  034eda8  lis 4, 16448
  034edac  lis 3, 16384
  034edb0  stw 5, 240(30)
  034edb4  lfs 1, 268(6)
  034edb8  li 5, 2
  034edbc  lfs 2, -3052(7)
  034edc0  lis 6, 53
  034edc4  stw 29, 44(30)
  034edc8  lis 7, 114
  034edcc  fmuls 1, 1, 2
  034edd0  stw 3, 188(30)
  034edd4  stw 3, 184(30)
  034edd8  stw 4, 0(30)
  034eddc  addi 3, 6, -5168
  034ede0  stb 5, 8(30)
  034ede4  stw 29, 40(30)
  034ede8  li 4, -3056
  034edec  stw 29, 36(30)
  034edf0  stw 29, 32(30)
  034edf4  stfs 1, 212(30)
  034edf8  lvlx 2, 0, 3
  034edfc  lvlx 4, 4, 7
  034ee00  li 3, 432
  034ee04  vspltw 2, 2, 0
  034ee08  lbz 4, 468(30)
  034ee0c  vmaddfp 2, 4, 2, 3
  034ee10  cmpwi 4, 0
  034ee14  vctsxs 2, 2, 0
  034ee18  vspltw 2, 2, 0
  034ee1c  stvewx 2, 3, 30
  034ee20  stw 29, 452(30)
  034ee24  bt 2, 0x34ef60
  034ee28  li 3, 344
  034ee2c  bl 0xefa28
  034ee30  nop
  034ee34  li 29, 64
  034ee38  stw 3, 460(30)
  034ee3c  li 28, 1
  034ee40  li 4, 4
  034ee44  addic 5, 1, 192
  034ee48  sth 29, 50(3)
  034ee4c  lwz 6, 460(30)
  034ee50  ori 3, 31, 0
  034ee54  stb 29, 48(6)
  034ee58  lwz 6, 460(30)
  034ee5c  stb 28, 49(6)
  034ee60  lwz 6, 460(30)
  034ee64  lhz 7, 52(6)
  034ee68  ori 7, 7, 256
  034ee6c  sth 7, 52(6)
  034ee70  bl 0xf1114
  034ee74  nop
  034ee78  lwz 4, 460(30)
  034ee7c  lfs 1, 192(1)
  034ee80  li 3, 345
  034ee84  stfs 1, 16(4)
  034ee88  lfs 1, 196(1)
  034ee8c  stfs 1, 20(4)
  034ee90  lfs 1, 200(1)
  034ee94  stfs 1, 24(4)
  034ee98  lfs 1, 204(1)
  034ee9c  stfs 1, 28(4)
  034eea0  lhz 4, 52(31)
  034eea4  ori 4, 4, 4096
  034eea8  sth 4, 52(31)
  034eeac  bl 0xefa28
  034eeb0  nop
  034eeb4  stw 3, 464(30)
  034eeb8  lfs 1, 16(31)
  034eebc  stfs 1, 16(3)
  034eec0  lfs 1, 20(31)
  034eec4  stfs 1, 20(3)
  034eec8  lfs 1, 24(31)
  034eecc  stfs 1, 24(3)
  034eed0  lfs 1, 28(31)
  034eed4  stfs 1, 28(3)
  034eed8  lfs 1, 64(31)
  034eedc  lwz 5, 464(30)
  034eee0  li 3, 255
  034eee4  li 4, 3
  034eee8  li 6, 0
  034eeec  stfs 1, 64(5)
  034eef0  lfs 1, 68(31)
  034eef4  stfs 1, 68(5)
  034eef8  lfs 1, 72(31)
  034eefc  stfs 1, 72(5)
  034ef00  lfs 1, 76(31)
  034ef04  stfs 1, 76(5)
  034ef08  lwz 7, 464(30)
  034ef0c  li 5, 0
  034ef10  sth 29, 50(7)
  034ef14  lwz 7, 464(30)
  034ef18  stb 3, 48(7)
  034ef1c  lwz 3, 464(30)
  034ef20  stb 28, 49(3)
  034ef24  lwz 3, 464(30)
  034ef28  bl 0xfddc0
  034ef2c  nop
  034ef30  li 4, 14
  034ef34  lbz 3, 83(31)
  034ef38  cmpwi 3, 12
  034ef3c  stb 4, 32(31)
  034ef40  bt 2, 0x350954
  034ef44  ori 3, 31, 0
  034ef48  li 4, 12
  034ef4c  li 5, 0
  034ef50  li 6, 0
  034ef54  bl 0xfddc0
  034ef58  nop
  034ef5c  b 0x350954
  034ef60  lwz 4, 276(30)
  034ef64  lis 3, 165
  034ef68  lwz 5, 324(30)
  034ef6c  slwi 4, 4, 2
  034ef70  addic 3, 3, 7136
  034ef74  extsw 4, 4
  034ef78  slwi 5, 5, 2
  034ef7c  li 6, 1
  034ef80  extsw 5, 5
  034ef84  li 7, 0
  034ef88  lwzx 4, 3, 4
  034ef8c  stw 4, 272(30)
  034ef90  lfs 1, 16(4)
  034ef94  stfs 1, 16(31)
  034ef98  lfs 1, 20(4)
  034ef9c  stfs 1, 20(31)
  034efa0  lfs 1, 24(4)
  034efa4  lwzx 3, 3, 5
  034efa8  stfs 1, 24(31)
  034efac  lfs 1, 28(4)
  034efb0  stw 6, 256(30)
  034efb4  stfs 1, 28(31)
  034efb8  stw 3, 320(30)
  034efbc  stw 6, 304(30)
  034efc0  sth 7, 50(31)
  034efc4  stb 6, 32(31)
  034efc8  b 0x350954
  034efcc  lis 3, 151
  034efd0  lwz 4, 272(30)
  034efd4  addic 3, 3, -25376
  034efd8  lfs 1, 132(3)
  034efdc  lwz 5, 0(4)
  034efe0  lfs 2, 128(3)
  034efe4  addic 5, 5, -1
  034efe8  lfs 3, 136(3)
  034efec  sldi 5, 5, 4
  034eff0  addc 4, 4, 5
  034eff4  clrldi 4, 4, 32
  034eff8  lfs 4, 20(4)
  034effc  lfs 5, 16(4)
  034f000  fsubs 1, 1, 4
  034f004  fsubs 2, 2, 5
  034f008  lfs 4, 24(4)
  034f00c  fsubs 3, 3, 4
  034f010  fmuls 1, 1, 1
  034f014  fmadds 1, 2, 2, 1
  034f018  lfs 2, 484(30)
  034f01c  fmadds 1, 3, 3, 1
  034f020  fsqrts 1, 1
  034f024  fcmpu 0, 1, 2
  034f028  cror 6, 1, 2
  034f02c  bt 6, 0x350954
  034f030  li 3, 64
  034f034  lhz 5, 52(31)
  034f038  li 4, 2
  034f03c  sth 3, 50(31)
  034f040  ori 3, 5, 4096
  034f044  lbz 5, 83(31)
  034f048  stb 4, 32(31)
  034f04c  cmpwi 5, 3
  034f050  sth 3, 52(31)
  034f054  bt 2, 0x34f070
  034f058  ori 3, 31, 0
  034f05c  li 4, 3
  034f060  li 5, 0
  034f064  li 6, 0
  034f068  bl 0xfddc0
  034f06c  nop
  034f070  li 3, 345
  034f074  bl 0xefa28
  034f078  nop
  034f07c  stw 3, 464(30)
  034f080  lis 4, 53
  034f084  lfs 1, 16(31)
  034f088  li 29, 64
  034f08c  addi 4, 4, -5168
  034f090  stfs 1, 16(3)
  034f094  lfs 1, 20(31)
  034f098  li 28, 255
  034f09c  stfs 1, 20(3)
  034f0a0  lfs 1, 24(31)
  034f0a4  stfs 1, 24(3)
  034f0a8  lfs 1, 28(31)
  034f0ac  stfs 1, 28(3)
  034f0b0  lfs 1, 4(4)
  034f0b4  lwz 3, 464(30)
  034f0b8  li 27, 1
  034f0bc  li 4, 1
  034f0c0  li 5, 0
  034f0c4  li 6, 0
  034f0c8  lfs 2, 24(3)
  034f0cc  fadds 1, 2, 1
  034f0d0  stfs 1, 24(3)
  034f0d4  lwz 3, 464(30)
  034f0d8  sth 29, 50(3)
  034f0dc  lwz 3, 464(30)
  034f0e0  stb 28, 48(3)
  034f0e4  lwz 3, 464(30)
  034f0e8  stb 27, 49(3)
  034f0ec  lwz 3, 464(30)
  034f0f0  bl 0xfddc0
  034f0f4  nop
  034f0f8  li 3, 344
  034f0fc  bl 0xefa28
  034f100  nop
  034f104  stw 3, 460(30)
  034f108  addic 5, 1, 208
  034f10c  sth 29, 50(3)
  034f110  li 4, 4
  034f114  lwz 6, 460(30)
  034f118  ori 3, 31, 0
  034f11c  stb 28, 48(6)
  034f120  lwz 6, 460(30)
  034f124  stb 27, 49(6)
  034f128  lwz 6, 460(30)
  034f12c  lhz 7, 52(6)
  034f130  ori 7, 7, 256
  034f134  sth 7, 52(6)
  034f138  bl 0xf1114
  034f13c  nop
  034f140  lwz 3, 460(30)
  034f144  lfs 1, 208(1)
  034f148  stfs 1, 16(3)
  034f14c  lfs 1, 212(1)
  034f150  stfs 1, 20(3)
  034f154  lfs 1, 216(1)
  034f158  stfs 1, 24(3)
  034f15c  lfs 1, 220(1)
  034f160  stfs 1, 28(3)
  034f164  b 0x350954
  034f168  lwz 3, 272(30)
  034f16c  lwz 4, 256(30)
  034f170  lbz 5, 260(30)
  034f174  extsb 5, 5
  034f178  lwz 6, 0(3)
  034f17c  addc 4, 4, 6
  034f180  lfs 1, 16(31)
  034f184  addc 29, 4, 5
  034f188  lfs 2, 20(31)
  034f18c  divw 4, 29, 6
  034f190  mullw 4, 4, 6
  034f194  subc 29, 29, 4
  034f198  sldi 28, 29, 4
  034f19c  addc 3, 3, 28
  034f1a0  clrldi 3, 3, 32
  034f1a4  lfs 3, 16(3)
  034f1a8  lfs 4, 20(3)
  034f1ac  fsubs 1, 3, 1
  034f1b0  fsubs 2, 4, 2
  034f1b4  bl 0x5e8338
  034f1b8  nop
  034f1bc  lis 3, 53
  034f1c0  addic 5, 30, 436
  034f1c4  addi 4, 3, -5168
  034f1c8  ori 3, 31, 0
  034f1cc  lfs 2, 8(4)
  034f1d0  lfs 3, 12(4)
  034f1d4  lfs 4, 16(4)
  034f1d8  bl 0xff2e8
  034f1dc  nop
  034f1e0  lwz 3, 272(30)
  034f1e4  lwz 4, 464(30)
  034f1e8  addc 3, 3, 28
  034f1ec  lfs 2, 16(31)
  034f1f0  clrldi 3, 3, 32
  034f1f4  lfs 31, 16(3)
  034f1f8  lfs 30, 20(3)
  034f1fc  lfs 29, 24(3)
  034f200  lfs 1, 28(3)
  034f204  stfs 2, 16(4)
  034f208  lfs 2, 20(31)
  034f20c  stfs 2, 20(4)
  034f210  lfs 2, 24(31)
  034f214  stfs 2, 24(4)
  034f218  lfs 2, 28(31)
  034f21c  stfs 2, 28(4)
  034f220  lwz 3, 464(30)
  034f224  lfs 2, 64(31)
  034f228  stfs 2, 64(3)
  034f22c  lfs 2, 68(31)
  034f230  stfs 2, 68(3)
  034f234  lfs 2, 72(31)
  034f238  stfs 2, 72(3)
  034f23c  lfs 2, 76(31)
  034f240  stfs 2, 76(3)
  034f244  lwz 3, 272(30)
  034f248  lwz 3, 0(3)
  034f24c  addic 3, 3, -1
  034f250  cmpw 29, 3
  034f254  bt 2, 0x34f2d8
  034f258  lfs 2, 16(31)
  034f25c  lfs 3, 20(31)
  034f260  lis 5, 132
  034f264  fsubs 2, 31, 2
  034f268  lfs 4, 24(31)
  034f26c  fsubs 3, 30, 3
  034f270  lis 6, 114
  034f274  fsubs 4, 29, 4
  034f278  stfs 1, 236(1)
  034f27c  addic 3, 1, 224
  034f280  lfs 1, 272(5)
  034f284  ori 4, 3, 0
  034f288  lfs 5, -3052(6)
  034f28c  fmuls 1, 1, 5
  034f290  stfs 2, 224(1)
  034f294  stfs 3, 228(1)
  034f298  stfs 4, 232(1)
  034f29c  bl 0x5e7f98
  034f2a0  nop
  034f2a4  lfs 1, 16(31)
  034f2a8  lfs 2, 224(1)
  034f2ac  lfs 3, 20(31)
  034f2b0  fadds 1, 1, 2
  034f2b4  lfs 2, 228(1)
  034f2b8  lfs 4, 24(31)
  034f2bc  fadds 2, 3, 2
  034f2c0  lfs 3, 232(1)
  034f2c4  fadds 3, 4, 3
  034f2c8  stfs 1, 16(31)
  034f2cc  stfs 2, 20(31)
  034f2d0  stfs 3, 24(31)
  034f2d4  b 0x34f3a4
  034f2d8  lis 4, 53
  034f2dc  addic 3, 31, 16
  034f2e0  addi 5, 4, -5168
  034f2e4  li 4, 0
  034f2e8  lfs 1, 20(5)
  034f2ec  bl 0xffb70
  034f2f0  nop
  034f2f4  lis 3, 132
  034f2f8  lfs 2, 24(31)
  034f2fc  lis 4, 114
  034f300  lfs 3, 272(3)
  034f304  lfs 4, -3052(4)
  034f308  fnmsubs 2, 3, 4, 2
  034f30c  fcmpu 0, 1, 2
  034f310  cror 6, 1, 2
  034f314  bt 6, 0x34f320
  034f318  stfs 2, 24(31)
  034f31c  b 0x34f368
  034f320  li 3, 9
  034f324  lbz 4, 83(31)
  034f328  stfs 1, 24(31)
  034f32c  cmpwi 4, 4
  034f330  stb 3, 32(31)
  034f334  bt 2, 0x34f350
  034f338  ori 3, 31, 0
  034f33c  li 4, 4
  034f340  li 5, 0
  034f344  li 6, 3
  034f348  bl 0xfddc0
  034f34c  nop
  034f350  li 4, 2
  034f354  li 5, 0
  034f358  lwz 3, 464(30)
  034f35c  li 6, 0
  034f360  bl 0xfddc0
  034f364  nop
  034f368  lis 3, 53
  034f36c  lwz 4, 464(30)
  034f370  addi 3, 3, -5168
  034f374  lfs 1, 24(3)
  034f378  lwz 3, 36(4)
  034f37c  lfs 2, 44(4)
  034f380  lfs 3, 36(3)
  034f384  fnmsubs 1, 3, 1, 2
  034f388  stfs 1, 44(4)
  034f38c  lwz 3, 464(30)
  034f390  lwz 4, 44(3)
  034f394  cmpwi 4, 0
  034f398  bf 0, 0x34f3a4
  034f39c  li 4, 0
  034f3a0  stw 4, 44(3)
  034f3a4  lfs 1, 20(31)
  034f3a8  lfs 2, 16(31)
  034f3ac  fsubs 1, 1, 30
  034f3b0  lfs 3, 24(31)
  034f3b4  fsubs 2, 2, 31
  034f3b8  fsubs 3, 3, 29
  034f3bc  lis 3, 53
  034f3c0  addi 3, 3, -5168
  034f3c4  fmuls 1, 1, 1
  034f3c8  fmadds 1, 2, 2, 1
  034f3cc  lfs 2, 20(3)
  034f3d0  fmadds 1, 3, 3, 1
  034f3d4  fsqrts 1, 1
  034f3d8  fcmpu 0, 1, 2
  034f3dc  cror 6, 1, 2
  034f3e0  bt 6, 0x350954
  034f3e4  lwz 3, 272(30)
  034f3e8  lwz 3, 0(3)
  034f3ec  addic 3, 3, -1
  034f3f0  cmpw 29, 3
  034f3f4  bt 2, 0x350954
  034f3f8  stw 29, 256(30)
  034f3fc  b 0x350954
  034f400  lwz 3, 464(30)
  034f404  cmpwi 3, 0
  034f408  bt 2, 0x34f474
  034f40c  lfs 1, 16(31)
  034f410  stfs 1, 16(3)
  034f414  lfs 1, 20(31)
  034f418  stfs 1, 20(3)
  034f41c  lfs 1, 24(31)
  034f420  stfs 1, 24(3)
  034f424  lfs 1, 28(31)
  034f428  stfs 1, 28(3)
  034f42c  lwz 3, 464(30)
  034f430  lfs 1, 64(31)
  034f434  stfs 1, 64(3)
  034f438  lfs 1, 68(31)
  034f43c  stfs 1, 68(3)
  034f440  lfs 1, 72(31)
  034f444  stfs 1, 72(3)
  034f448  lfs 1, 76(31)
  034f44c  stfs 1, 76(3)
  034f450  lwz 3, 464(30)
  034f454  lbz 4, 112(3)
  034f458  rlwinm 4, 4, 0, 30, 30
  034f45c  cmpwi 4, 0
  034f460  bt 2, 0x34f474
  034f464  bl 0xefb38
  034f468  nop
  034f46c  li 3, 0
  034f470  stw 3, 464(30)
  034f474  lbz 3, 112(31)
  034f478  rlwinm 3, 3, 0, 30, 30
  034f47c  cmpwi 3, 0
  034f480  bt 2, 0x350954
  034f484  ori 3, 31, 0
  034f488  bl 0x34dd10
  034f48c  lbz 3, 83(31)
  034f490  cmpwi 3, 0
  034f494  bt 2, 0x34f4b0
  034f498  ori 3, 31, 0
  034f49c  li 4, 0
  034f4a0  li 5, 0
  034f4a4  li 6, 6
  034f4a8  bl 0xfddc0
  034f4ac  nop
  034f4b0  li 3, 3
  034f4b4  li 4, 0
  034f4b8  stb 3, 32(31)
  034f4bc  stw 4, 464(30)
  034f4c0  b 0x350954
  034f4c4  ori 3, 31, 0
  034f4c8  lfs 1, 488(30)
  034f4cc  addic 5, 1, 432
  034f4d0  bl 0x1118d8
  034f4d4  nop
  034f4d8  lwz 3, 496(1)
  034f4dc  lwz 4, 472(30)
  034f4e0  cmpwi 3, 0
  034f4e4  bt 2, 0x34f550
  034f4e8  lis 4, 151
  034f4ec  lfs 1, 20(31)
  034f4f0  lfs 2, 20(3)
  034f4f4  addic 4, 4, -25376
  034f4f8  fsubs 2, 1, 2
  034f4fc  lfs 3, 132(4)
  034f500  lfs 4, 16(31)
  034f504  fsubs 1, 1, 3
  034f508  lfs 3, 16(3)
  034f50c  lfs 5, 128(4)
  034f510  fsubs 3, 4, 3
  034f514  fsubs 4, 4, 5
  034f518  fmuls 2, 2, 2
  034f51c  fmuls 1, 1, 1
  034f520  fmadds 2, 3, 3, 2
  034f524  fmadds 1, 4, 4, 1
  034f528  fsqrts 2, 2
  034f52c  fsqrts 1, 1
  034f530  fcmpu 0, 2, 1
  034f534  cror 6, 1, 2
  034f538  bt 6, 0x34f548
  034f53c  ori 4, 3, 0
  034f540  stw 3, 472(30)
  034f544  b 0x34f550
  034f548  lwz 4, 8320(4)
  034f54c  stw 4, 472(30)
  034f550  lfs 1, 16(4)
  034f554  lfs 2, 16(31)
  034f558  lfs 31, 72(31)
  034f55c  lfs 3, 20(4)
  034f560  lfs 4, 20(31)
  034f564  fsubs 1, 1, 2
  034f568  fsubs 2, 3, 4
  034f56c  bl 0x5e8338
  034f570  nop
  034f574  lis 3, 53
  034f578  addic 5, 30, 436
  034f57c  addi 29, 3, -5168
  034f580  ori 3, 31, 0
  034f584  lfs 3, 12(29)
  034f588  lfs 2, 8(29)
  034f58c  fmr 4, 3
  034f590  bl 0xff2e8
  034f594  nop
  034f598  lfs 1, 72(31)
  034f59c  fmr 2, 31
  034f5a0  bl 0x5026a0
  034f5a4  nop
  034f5a8  lis 3, 114
  034f5ac  lfs 31, 28(29)
  034f5b0  lfs 2, -3052(3)
  034f5b4  fmuls 2, 2, 31
  034f5b8  fcmpu 0, 1, 2
  034f5bc  cror 6, 0, 2
  034f5c0  bt 6, 0x34f614
  034f5c4  lbz 3, 83(31)
  034f5c8  cmpwi 1, 3, 19
  034f5cc  bt 6, 0x34f66c
  034f5d0  bt 6, 0x34f66c
  034f5d4  lis 3, 53
  034f5d8  lis 4, 114
  034f5dc  addi 3, 3, -5168
  034f5e0  li 5, 0
  034f5e4  lfs 1, 32(3)
  034f5e8  lfs 2, -3056(4)
  034f5ec  ori 3, 31, 0
  034f5f0  li 4, 19
  034f5f4  fmuls 1, 2, 1
  034f5f8  fctiwz 1, 1
  034f5fc  stfd 1, 672(1)
  034f600  lwz 6, 676(1)
  034f604  extsw 6, 6
  034f608  bl 0xfddc0
  034f60c  nop
  034f610  b 0x34f66c
  034f614  lbz 3, 83(31)
  034f618  cmpwi 3, 0
  034f61c  bt 2, 0x34f66c
  034f620  lbz 3, 112(31)
  034f624  rlwinm 3, 3, 0, 30, 30
  034f628  cmpwi 3, 0
  034f62c  bt 2, 0x34f66c
  034f630  lis 3, 53
  034f634  lis 4, 114
  034f638  addi 3, 3, -5168
  034f63c  li 5, 0
  034f640  lfs 1, 32(3)
  034f644  lfs 2, -3056(4)
  034f648  ori 3, 31, 0
  034f64c  fmuls 1, 2, 1
  034f650  li 4, 0
  034f654  fctiwz 1, 1
  034f658  stfd 1, 672(1)
  034f65c  lwz 6, 676(1)
  034f660  extsw 6, 6
  034f664  bl 0xfddc0
  034f668  nop
  034f66c  ori 3, 31, 0
  034f670  bl 0x110808
  034f674  nop
  034f678  cmpwi 3, 0
  034f67c  bt 2, 0x34f6b8
  034f680  ori 3, 31, 0
  034f684  bl 0x34dd10
  034f688  lbz 3, 83(31)
  034f68c  cmpwi 3, 2
  034f690  bt 2, 0x34f6ac
  034f694  ori 3, 31, 0
  034f698  li 4, 2
  034f69c  li 5, 0
  034f6a0  li 6, 6
  034f6a4  bl 0xfddc0
  034f6a8  nop
  034f6ac  li 3, 12
  034f6b0  stb 3, 32(31)
  034f6b4  b 0x350954
  034f6b8  lwz 3, 472(30)
  034f6bc  lfs 4, 20(31)
  034f6c0  lfs 3, 16(31)
  034f6c4  lfs 2, 20(3)
  034f6c8  lfs 1, 16(3)
  034f6cc  fsubs 5, 4, 2
  034f6d0  fsubs 6, 3, 1
  034f6d4  fmuls 5, 5, 5
  034f6d8  fmadds 5, 6, 6, 5
  034f6dc  lfs 6, 488(30)
  034f6e0  fsqrts 5, 5
  034f6e4  fcmpu 0, 5, 6
  034f6e8  cror 6, 1, 2
  034f6ec  bt 6, 0x350954
  034f6f0  lfs 5, 24(3)
  034f6f4  lfs 6, 24(31)
  034f6f8  lis 4, 53
  034f6fc  fsubs 5, 5, 6
  034f700  addi 4, 4, -5168
  034f704  lfs 6, 36(4)
  034f708  fabs 5, 5
  034f70c  fcmpu 0, 5, 6
  034f710  cror 6, 1, 2
  034f714  bt 6, 0x350954
  034f718  fsubs 1, 1, 3
  034f71c  fsubs 2, 2, 4
  034f720  bl 0x5e8338
  034f724  nop
  034f728  lfs 2, 72(31)
  034f72c  bl 0x5026a0
  034f730  nop
  034f734  fcmpu 0, 1, 31
  034f738  cror 6, 1, 2
  034f73c  bt 6, 0x350954
  034f740  lbz 3, 49(31)
  034f744  cmpwi 3, 0
  034f748  bf 2, 0x34f764
  034f74c  lis 3, 151
  034f750  lwz 4, 472(30)
  034f754  addic 3, 3, -25376
  034f758  lwz 3, 8320(3)
  034f75c  cmpw 4, 3
  034f760  bt 2, 0x350954
  034f764  lis 4, -16256
  034f768  li 3, 255
  034f76c  stw 4, 456(30)
  034f770  bl 0xfc620
  034f774  nop
  034f778  lis 4, 53
  034f77c  clrlwi 3, 3, 31
  034f780  addi 4, 4, -5168
  034f784  cmpwi 3, 0
  034f788  lfs 1, 40(4)
  034f78c  bt 2, 0x34f794
  034f790  fmr 1, 31
  034f794  li 29, 0
  034f798  stfs 1, 444(30)
  034f79c  lis 3, 132
  034f7a0  lis 4, 114
  034f7a4  stw 29, 44(30)
  034f7a8  stw 29, 40(30)
  034f7ac  stw 29, 36(30)
  034f7b0  stw 29, 32(30)
  034f7b4  lfs 1, 296(3)
  034f7b8  lfs 2, -3056(4)
  034f7bc  fmuls 1, 1, 2
  034f7c0  bl 0x502758
  034f7c4  nop
  034f7c8  stw 3, 432(30)
  034f7cc  lwz 3, 476(30)
  034f7d0  stb 29, 469(30)
  034f7d4  cmpwi 3, 0
  034f7d8  bt 2, 0x34f824
  034f7dc  li 4, 0
  034f7e0  ori 5, 31, 0
  034f7e4  bl 0x15d12c
  034f7e8  nop
  034f7ec  li 3, 0
  034f7f0  stw 3, 476(30)
  034f7f4  lbz 3, 83(31)
  034f7f8  cmpwi 3, 21
  034f7fc  bt 2, 0x34f818
  034f800  ori 3, 31, 0
  034f804  li 4, 21
  034f808  li 5, 0
  034f80c  li 6, 4
  034f810  bl 0xfddc0
  034f814  nop
  034f818  li 3, 19
  034f81c  stb 3, 32(31)
  034f820  b 0x350954
  034f824  lbz 3, 83(31)
  034f828  cmpwi 3, 15
  034f82c  bt 2, 0x34f86c
  034f830  lis 3, 53
  034f834  lis 4, 114
  034f838  addi 3, 3, -5168
  034f83c  li 5, 0
  034f840  lfs 1, 44(3)
  034f844  lfs 2, -3056(4)
  034f848  ori 3, 31, 0
  034f84c  li 4, 15
  034f850  fmuls 1, 2, 1
  034f854  fctiwz 1, 1
  034f858  stfd 1, 672(1)
  034f85c  lwz 6, 676(1)
  034f860  extsw 6, 6
  034f864  bl 0xfddc0
  034f868  nop
  034f86c  li 3, 10
  034f870  stb 3, 32(31)
  034f874  b 0x350954
  034f878  lbz 3, 112(31)
  034f87c  rlwinm 3, 3, 0, 30, 30
  034f880  cmpwi 3, 0
  034f884  bt 2, 0x350954
  034f888  lbz 3, 83(31)
  034f88c  cmpwi 3, 6
  034f890  bt 2, 0x34f8ac
  034f894  ori 3, 31, 0
  034f898  li 4, 6
  034f89c  li 5, 7
  034f8a0  li 6, 4
  034f8a4  bl 0xfddc0
  034f8a8  nop
  034f8ac  li 3, 8
  034f8b0  stb 3, 32(31)
  034f8b4  b 0x350954
  034f8b8  bl 0x2ed9c
  034f8bc  nop
  034f8c0  lwz 3, 472(30)
  034f8c4  lfs 1, 16(31)
  034f8c8  lfs 2, 20(31)
  034f8cc  lfs 3, 16(3)
  034f8d0  lfs 4, 20(3)
  034f8d4  fsubs 1, 3, 1
  034f8d8  fsubs 2, 4, 2
  034f8dc  bl 0x5e8338
  034f8e0  nop
  034f8e4  lfs 2, 444(30)
  034f8e8  bl 0x502578
  034f8ec  nop
  034f8f0  fmr 31, 1
  034f8f4  lis 3, 53
  034f8f8  addic 5, 30, 436
  034f8fc  addi 29, 3, -5168
  034f900  ori 3, 31, 0
  034f904  lfs 2, 48(29)
  034f908  lfs 3, 52(29)
  034f90c  lfs 4, 56(29)
  034f910  bl 0xff2e8
  034f914  nop
  034f918  fmr 1, 31
  034f91c  lfs 2, 72(31)
  034f920  bl 0x5026a0
  034f924  nop
  034f928  lfs 2, 28(29)
  034f92c  fcmpu 0, 1, 2
  034f930  cror 6, 1, 2
  034f934  bt 6, 0x34f944
  034f938  lfs 1, 444(30)
  034f93c  fneg 1, 1
  034f940  stfs 1, 444(30)
  034f944  lis 3, 53
  034f948  lis 4, 114
  034f94c  addi 29, 3, -5168
  034f950  addic 3, 30, 456
  034f954  lfs 3, 4(29)
  034f958  lfs 1, 60(29)
  034f95c  lfs 4, -3052(4)
  034f960  fmuls 2, 4, 3
  034f964  bl 0x109af0
  034f968  nop
  034f96c  ori 3, 31, 0
  034f970  bl 0xefe40
  034f974  nop
  034f978  lfs 2, 64(29)
  034f97c  fcmpu 0, 1, 2
  034f980  bt 1, 0x34fa6c
  034f984  addic 29, 1, 240
  034f988  lwz 3, 460(30)
  034f98c  li 4, 0
  034f990  ori 5, 29, 0
  034f994  bl 0xf1114
  034f998  nop
  034f99c  lis 3, 53
  034f9a0  lfs 1, 72(31)
  034f9a4  addi 28, 3, -5168
  034f9a8  lfs 31, 68(28)
  034f9ac  fmr 2, 31
  034f9b0  bl 0x502578
  034f9b4  nop
  034f9b8  bl 0x5e8078
  034f9bc  nop
  034f9c0  lis 27, 132
  034f9c4  lfs 3, 72(31)
  034f9c8  fmr 2, 31
  034f9cc  lfs 4, 300(27)
  034f9d0  fmuls 4, 1, 4
  034f9d4  fmr 1, 3
  034f9d8  stfs 4, 272(1)
  034f9dc  bl 0x502578
  034f9e0  nop
  034f9e4  bl 0x5e8128
  034f9e8  nop
  034f9ec  lfs 2, 300(27)
  034f9f0  lis 5, 132
  034f9f4  li 4, 0
  034f9f8  fmuls 2, 1, 2
  034f9fc  lis 6, 114
  034fa00  addic 27, 1, 256
  034fa04  stw 4, 280(1)
  034fa08  lfs 1, 276(5)
  034fa0c  ori 3, 27, 0
  034fa10  lfs 3, -3052(6)
  034fa14  addic 4, 1, 272
  034fa18  fmuls 1, 1, 3
  034fa1c  stfs 2, 276(1)
  034fa20  bl 0x5e7f98
  034fa24  nop
  034fa28  lis 3, 114
  034fa2c  lfs 1, 72(28)
  034fa30  ori 4, 29, 0
  034fa34  ori 5, 31, 0
  034fa38  lfs 2, -3056(3)
  034fa3c  ori 3, 27, 0
  034fa40  fmuls 1, 2, 1
  034fa44  fctiwz 1, 1
  034fa48  stfd 1, 672(1)
  034fa4c  lwz 6, 676(1)
  034fa50  lfs 1, 76(28)
  034fa54  extsw 6, 6
  034fa58  bl 0x3bbc08
  034fa5c  nop
  034fa60  lbz 3, 469(30)
  034fa64  addic 3, 3, 1
  034fa68  stb 3, 469(30)
  034fa6c  lwz 3, 472(30)
  034fa70  lfs 1, 20(31)
  034fa74  lfs 2, 16(31)
  034fa78  lfs 3, 20(3)
  034fa7c  lfs 4, 16(3)
  034fa80  fsubs 1, 1, 3
  034fa84  fsubs 2, 2, 4
  034fa88  lis 4, 53
  034fa8c  addi 4, 4, -5168
  034fa90  fmuls 1, 1, 1
  034fa94  fmadds 1, 2, 2, 1
  034fa98  lfs 2, 80(4)
  034fa9c  fsqrts 1, 1
  034faa0  fcmpu 0, 1, 2
  034faa4  cror 6, 1, 2
  034faa8  bt 6, 0x34fba4
  034faac  lis 4, 53
  034fab0  vspltisw 6, -1
  034fab4  li 5, 84
  034fab8  addi 4, 4, -5168
  034fabc  lis 6, 132
  034fac0  li 7, 296
  034fac4  li 8, 432
  034fac8  lvlx 2, 5, 4
  034facc  addi 4, 8, 16
  034fad0  vspltw 2, 2, 0
  034fad4  lvlx 3, 7, 6
  034fad8  lis 5, 114
  034fadc  lvlx 4, 8, 30
  034fae0  vsubfp 2, 3, 2
  034fae4  lvrx 5, 4, 30
  034fae8  li 4, -3056
  034faec  vor 3, 4, 5
  034faf0  vslw 4, 6, 6
  034faf4  lvlx 5, 4, 5
  034faf8  vcfsx 3, 3, 0
  034fafc  vmaddfp 2, 5, 2, 4
  034fb00  vspltw 3, 3, 0
  034fb04  vspltw 2, 2, 0
  034fb08  vcmpgefp. 2, 3, 2
  034fb0c  bf 26, 0x34fba4
  034fb10  lwz 4, 480(30)
  034fb14  cmpwi 4, 0
  034fb18  bf 2, 0x34fba4
  034fb1c  lis 4, 151
  034fb20  addic 4, 4, -25376
  034fb24  lwz 4, 8320(4)
  034fb28  cmpw 3, 4
  034fb2c  bf 2, 0x34fba4
  034fb30  lbz 3, 83(31)
  034fb34  cmpwi 3, 2
  034fb38  bt 2, 0x34fb54
  034fb3c  ori 3, 31, 0
  034fb40  li 4, 2
  034fb44  li 5, 0
  034fb48  li 6, 6
  034fb4c  bl 0xfddc0
  034fb50  nop
  034fb54  ori 3, 31, 0
  034fb58  bl 0x34dd10
  034fb5c  lis 3, 53
  034fb60  li 4, 72
  034fb64  vspltisw 2, -1
  034fb68  addi 3, 3, -5168
  034fb6c  lis 5, 114
  034fb70  li 6, -3056
  034fb74  vslw 2, 2, 2
  034fb78  lvlx 3, 4, 3
  034fb7c  li 3, 432
  034fb80  vspltw 3, 3, 0
  034fb84  li 4, 12
  034fb88  lvlx 4, 6, 5
  034fb8c  vmaddfp 2, 4, 3, 2
  034fb90  vctsxs 2, 2, 0
  034fb94  vspltw 2, 2, 0
  034fb98  stvewx 2, 3, 30
  034fb9c  stb 4, 32(31)
  034fba0  b 0x350954
  034fba4  addic 3, 30, 432
  034fba8  bl 0x4fff60
  034fbac  nop
  034fbb0  cmpwi 3, 0
  034fbb4  bt 2, 0x34fc68
  034fbb8  lwz 3, 480(30)
  034fbbc  cmpwi 3, 0
  034fbc0  bt 2, 0x34fbf4
  034fbc4  lbz 3, 83(31)
  034fbc8  cmpwi 3, 15
  034fbcc  bt 2, 0x34fbe8
  034fbd0  ori 3, 31, 0
  034fbd4  li 4, 15
  034fbd8  li 5, 0
  034fbdc  li 6, 6
  034fbe0  bl 0xfddc0
  034fbe4  nop
  034fbe8  li 3, 10
  034fbec  stb 3, 32(31)
  034fbf0  b 0x350954
  034fbf4  lbz 3, 83(31)
  034fbf8  cmpwi 3, 2
  034fbfc  bt 2, 0x34fc18
  034fc00  ori 3, 31, 0
  034fc04  li 4, 2
  034fc08  li 5, 0
  034fc0c  li 6, 6
  034fc10  bl 0xfddc0
  034fc14  nop
  034fc18  ori 3, 31, 0
  034fc1c  bl 0x34dd10
  034fc20  lis 3, 53
  034fc24  li 4, 72
  034fc28  vspltisw 2, -1
  034fc2c  addi 3, 3, -5168
  034fc30  lis 5, 114
  034fc34  li 6, -3056
  034fc38  vslw 2, 2, 2
  034fc3c  lvlx 3, 4, 3
  034fc40  li 3, 432
  034fc44  vspltw 3, 3, 0
  034fc48  li 4, 12
  034fc4c  lvlx 4, 6, 5
  034fc50  vmaddfp 2, 4, 3, 2
  034fc54  vctsxs 2, 2, 0
  034fc58  vspltw 2, 2, 0
  034fc5c  stvewx 2, 3, 30
  034fc60  stb 4, 32(31)
  034fc64  b 0x350954
  034fc68  lis 3, 151
  034fc6c  addic 3, 3, -25376
  034fc70  lwz 4, 8332(3)
  034fc74  cmpwi 4, 7
  034fc78  bf 2, 0x350954
  034fc7c  lwz 4, 472(30)
  034fc80  lwz 3, 8320(3)
  034fc84  cmpw 4, 3
  034fc88  bf 2, 0x350954
  034fc8c  lbz 3, 83(31)
  034fc90  cmpwi 3, 18
  034fc94  bt 2, 0x34fcb0
  034fc98  ori 3, 31, 0
  034fc9c  li 4, 18
  034fca0  li 5, 0
  034fca4  li 6, 6
  034fca8  bl 0xfddc0
  034fcac  nop
  034fcb0  li 3, 18
  034fcb4  stb 3, 32(31)
  034fcb8  b 0x350954
  034fcbc  bl 0x2ed9c
  034fcc0  nop
  034fcc4  lwz 3, 472(30)
  034fcc8  lfs 1, 16(31)
  034fccc  lfs 2, 20(31)
  034fcd0  lfs 3, 16(3)
  034fcd4  lfs 4, 20(3)
  034fcd8  fsubs 1, 3, 1
  034fcdc  fsubs 2, 4, 2
  034fce0  bl 0x5e8338
  034fce4  nop
  034fce8  lis 3, 53
  034fcec  addic 5, 30, 436
  034fcf0  addi 29, 3, -5168
  034fcf4  ori 3, 31, 0
  034fcf8  lfs 2, 8(29)
  034fcfc  lfs 3, 12(29)
  034fd00  lfs 4, 16(29)
  034fd04  bl 0xff2e8
  034fd08  nop
  034fd0c  lis 4, 114
  034fd10  lfs 3, 4(29)
  034fd14  lfs 1, 88(29)
  034fd18  addic 3, 30, 456
  034fd1c  lfs 2, -3052(4)
  034fd20  fmuls 2, 2, 3
  034fd24  bl 0x109af0
  034fd28  nop
  034fd2c  ori 3, 31, 0
  034fd30  bl 0xefe40
  034fd34  nop
  034fd38  lfs 2, 64(29)
  034fd3c  fcmpu 0, 1, 2
  034fd40  bt 1, 0x34fdf8
  034fd44  addic 29, 1, 288
  034fd48  lwz 3, 460(30)
  034fd4c  li 4, 0
  034fd50  ori 5, 29, 0
  034fd54  bl 0xf1114
  034fd58  nop
  034fd5c  lfs 1, 72(31)
  034fd60  bl 0x5e8078
  034fd64  nop
  034fd68  lis 28, 132
  034fd6c  lfs 2, 72(31)
  034fd70  lfs 3, 300(28)
  034fd74  fmuls 3, 1, 3
  034fd78  fmr 1, 2
  034fd7c  stfs 3, 320(1)
  034fd80  bl 0x5e8128
  034fd84  nop
  034fd88  lfs 2, 300(28)
  034fd8c  lis 4, 114
  034fd90  fmuls 1, 1, 2
  034fd94  lis 3, 53
  034fd98  lis 6, 132
  034fd9c  addi 5, 3, -5168
  034fda0  li 7, 0
  034fda4  lfs 2, -3052(4)
  034fda8  addic 28, 1, 304
  034fdac  addic 4, 1, 320
  034fdb0  lfs 3, 276(6)
  034fdb4  ori 3, 28, 0
  034fdb8  stfs 1, 324(1)
  034fdbc  lfs 31, 68(5)
  034fdc0  fmuls 1, 3, 2
  034fdc4  stw 7, 328(1)
  034fdc8  bl 0x5e7f98
  034fdcc  nop
  034fdd0  lis 7, 32
  034fdd4  ori 3, 28, 0
  034fdd8  fmr 1, 31
  034fddc  ori 4, 29, 0
  034fde0  ori 6, 31, 0
  034fde4  ori 7, 7, 65535
  034fde8  bl 0x299400
  034fdec  nop
  034fdf0  li 4, 1
  034fdf4  stb 4, 32(3)
  034fdf8  addic 3, 30, 432
  034fdfc  bl 0x4fff60
  034fe00  nop
  034fe04  cmpwi 3, 0
  034fe08  bt 2, 0x350954
  034fe0c  li 3, 3
  034fe10  lbz 4, 83(31)
  034fe14  cmpwi 4, 0
  034fe18  stb 3, 32(31)
  034fe1c  bt 2, 0x350954
  034fe20  ori 3, 31, 0
  034fe24  li 4, 0
  034fe28  li 5, 0
  034fe2c  li 6, 6
  034fe30  bl 0xfddc0
  034fe34  nop
  034fe38  b 0x350954
  034fe3c  lbz 3, 112(31)
  034fe40  rlwinm 3, 3, 0, 30, 30
  034fe44  cmpwi 3, 0
  034fe48  bt 2, 0x350954
  034fe4c  li 3, 8
  034fe50  lbz 4, 83(31)
  034fe54  cmpwi 4, 6
  034fe58  stb 3, 32(31)
  034fe5c  bt 2, 0x350954
  034fe60  lis 3, 53
  034fe64  lis 4, 114
  034fe68  addi 3, 3, -5168
  034fe6c  li 5, 7
  034fe70  lfs 1, 92(3)
  034fe74  lfs 2, -3056(4)
  034fe78  ori 3, 31, 0
  034fe7c  li 4, 6
  034fe80  fmuls 1, 2, 1
  034fe84  fctiwz 1, 1
  034fe88  stfd 1, 672(1)
  034fe8c  lwz 6, 676(1)
  034fe90  extsw 6, 6
  034fe94  bl 0xfddc0
  034fe98  nop
  034fe9c  b 0x350954
  034fea0  lbz 3, 112(31)
  034fea4  rlwinm 3, 3, 0, 30, 30
  034fea8  cmpwi 3, 0
  034feac  bt 2, 0x350954
  034feb0  li 3, 3
  034feb4  lbz 4, 83(31)
  034feb8  cmpwi 4, 0
  034febc  stb 3, 32(31)
  034fec0  bt 2, 0x350954
  034fec4  ori 3, 31, 0
  034fec8  li 4, 0
  034fecc  li 5, 0
  034fed0  li 6, 6
  034fed4  bl 0xfddc0
  034fed8  nop
  034fedc  b 0x350954
  034fee0  lwz 5, 304(30)
  034fee4  lwz 7, 320(30)
  034fee8  ori 3, 31, 0
  034feec  slwi 5, 5, 4
  034fef0  addic 4, 30, 176
  034fef4  addc 5, 7, 5
  034fef8  addic 6, 30, 32
  034fefc  addic 5, 5, 16
  034ff00  clrldi 5, 5, 32
  034ff04  bl 0x101cc0
  034ff08  nop
  034ff0c  cmpwi 3, 4
  034ff10  bf 2, 0x350954
  034ff14  lbz 3, 32(31)
  034ff18  cmpwi 3, 12
  034ff1c  cmpwi 1, 3, 11
  034ff20  cmpwi 6, 3, 6
  034ff24  cmpwi 7, 3, 5
  034ff28  bt 2, 0x3501a0
  034ff2c  bt 6, 0x3500f8
  034ff30  bt 26, 0x35008c
  034ff34  bf 30, 0x350954
  034ff38  lis 3, 53
  034ff3c  addic 5, 1, 512
  034ff40  addi 4, 3, -5168
  034ff44  ori 3, 31, 0
  034ff48  lfs 1, 96(4)
  034ff4c  bl 0x1118d8
  034ff50  nop
  034ff54  lwz 4, 576(1)
  034ff58  lis 3, 151
  034ff5c  lfs 1, 20(31)
  034ff60  addic 3, 3, -25376
  034ff64  lfs 2, 16(31)
  034ff68  lfs 3, 20(4)
  034ff6c  lfs 4, 16(4)
  034ff70  lfs 5, 132(3)
  034ff74  fsubs 3, 1, 3
  034ff78  lfs 6, 128(3)
  034ff7c  fsubs 1, 1, 5
  034ff80  fsubs 4, 2, 4
  034ff84  fsubs 2, 2, 6
  034ff88  fmuls 3, 3, 3
  034ff8c  fmuls 1, 1, 1
  034ff90  fmadds 3, 4, 4, 3
  034ff94  fmadds 1, 2, 2, 1
  034ff98  fsqrts 2, 3
  034ff9c  fsqrts 1, 1
  034ffa0  fcmpu 0, 2, 1
  034ffa4  bt 0, 0x34ffac
  034ffa8  lwz 4, 8320(3)
  034ffac  stw 4, 472(30)
  034ffb0  lfs 4, 20(31)
  034ffb4  lfs 2, 20(4)
  034ffb8  lfs 3, 16(31)
  034ffbc  fsubs 5, 4, 2
  034ffc0  lfs 1, 16(4)
  034ffc4  fsubs 6, 3, 1
  034ffc8  lis 3, 53
  034ffcc  addi 3, 3, -5168
  034ffd0  fmuls 5, 5, 5
  034ffd4  fmadds 5, 6, 6, 5
  034ffd8  lfs 6, 36(3)
  034ffdc  fsqrts 5, 5
  034ffe0  fcmpu 0, 5, 6
  034ffe4  cror 6, 1, 2
  034ffe8  bt 6, 0x350034
  034ffec  fsubs 1, 1, 3
  034fff0  lfs 31, 72(31)
  034fff4  fsubs 2, 2, 4
  034fff8  bl 0x5e8338
  034fffc  nop
  0350000  fmr 2, 1
  0350004  fmr 1, 31
  0350008  bl 0x5026a0
  035000c  nop
  0350010  lis 3, 53
  0350014  addi 3, 3, -5168
  0350018  lfs 2, 100(3)
  035001c  fcmpu 0, 1, 2
  0350020  cror 6, 0, 2
  0350024  bt 6, 0x350034
  0350028  ori 3, 31, 0
  035002c  bl 0x34dd10
  0350030  b 0x350954
  0350034  lis 3, 132
  0350038  lis 4, 114
  035003c  lfs 1, 296(3)
  0350040  lfs 2, -3056(4)
  0350044  fmuls 1, 1, 2
  0350048  bl 0x502758
  035004c  nop
  0350050  stw 3, 432(30)
  0350054  li 3, 0
  0350058  stb 3, 469(30)
  035005c  lbz 3, 83(31)
  0350060  cmpwi 3, 21
  0350064  bt 2, 0x350080
  0350068  ori 3, 31, 0
  035006c  li 4, 21
  0350070  li 5, 0
  0350074  li 6, 4
  0350078  bl 0xfddc0
  035007c  nop
  0350080  li 3, 19
  0350084  stb 3, 32(31)
  0350088  b 0x350954
  035008c  lis 3, 53
  0350090  li 4, 7
  0350094  vspltisw 2, -1
  0350098  addi 3, 3, -5168
  035009c  li 5, 104
  03500a0  lis 6, 114
  03500a4  stb 4, 32(31)
  03500a8  li 4, -3056
  03500ac  vslw 2, 2, 2
  03500b0  lvlx 3, 5, 3
  03500b4  li 3, 432
  03500b8  vspltw 3, 3, 0
  03500bc  lvlx 4, 4, 6
  03500c0  vmaddfp 2, 4, 3, 2
  03500c4  vctsxs 2, 2, 0
  03500c8  vspltw 2, 2, 0
  03500cc  stvewx 2, 3, 30
  03500d0  lbz 3, 83(31)
  03500d4  cmpwi 3, 6
  03500d8  bt 2, 0x350954
  03500dc  ori 3, 31, 0
  03500e0  li 4, 6
  03500e4  li 5, 7
  03500e8  li 6, 4
  03500ec  bl 0xfddc0
  03500f0  nop
  03500f4  b 0x350954
  03500f8  lis 4, 53
  03500fc  ori 3, 31, 0
  0350100  addi 4, 4, -5168
  0350104  addic 5, 1, 592
  0350108  lfs 1, 96(4)
  035010c  bl 0x1118d8
  0350110  nop
  0350114  lwz 4, 656(1)
  0350118  lis 3, 151
  035011c  lfs 1, 20(31)
  0350120  lfs 2, 16(31)
  0350124  addic 3, 3, -25376
  0350128  lfs 3, 20(4)
  035012c  lfs 4, 16(4)
  0350130  fsubs 3, 1, 3
  0350134  lfs 5, 132(3)
  0350138  lfs 6, 128(3)
  035013c  fsubs 4, 2, 4
  0350140  fsubs 1, 1, 5
  0350144  fsubs 2, 2, 6
  0350148  fmuls 3, 3, 3
  035014c  fmuls 1, 1, 1
  0350150  fmadds 3, 4, 4, 3
  0350154  fmadds 1, 2, 2, 1
  0350158  fsqrts 2, 3
  035015c  fsqrts 1, 1
  0350160  fcmpu 0, 2, 1
  0350164  bt 0, 0x35016c
  0350168  lwz 4, 8320(3)
  035016c  li 3, 10
  0350170  stw 4, 472(30)
  0350174  lbz 4, 83(31)
  0350178  cmpwi 4, 15
  035017c  stb 3, 32(31)
  0350180  bt 2, 0x350954
  0350184  ori 3, 31, 0
  0350188  li 4, 15
  035018c  li 5, 0
  0350190  li 6, 6
  0350194  bl 0xfddc0
  0350198  nop
  035019c  b 0x350954
  03501a0  li 3, 3
  03501a4  lbz 4, 83(31)
  03501a8  cmpwi 4, 0
  03501ac  stb 3, 32(31)
  03501b0  bt 2, 0x350954
  03501b4  ori 3, 31, 0
  03501b8  li 4, 0
  03501bc  li 5, 0
  03501c0  li 6, 6
  03501c4  bl 0xfddc0
  03501c8  nop
  03501cc  b 0x350954
  03501d0  lwz 3, 472(30)
  03501d4  lfs 4, 20(31)
  03501d8  lfs 3, 16(31)
  03501dc  lfs 2, 20(3)
  03501e0  lfs 1, 16(3)
  03501e4  fsubs 5, 4, 2
  03501e8  fsubs 6, 3, 1
  03501ec  lis 4, 53
  03501f0  addi 4, 4, -5168
  03501f4  fmuls 5, 5, 5
  03501f8  fmadds 5, 6, 6, 5
  03501fc  lfs 6, 96(4)
  0350200  fsqrts 5, 5
  0350204  fcmpu 0, 5, 6
  0350208  cror 6, 1, 2
  035020c  bt 6, 0x350954
  0350210  lfs 5, 24(3)
  0350214  lis 4, 53
  0350218  lfs 6, 24(31)
  035021c  addi 4, 4, -5168
  0350220  fsubs 5, 5, 6
  0350224  lfs 6, 36(4)
  0350228  fabs 5, 5
  035022c  fcmpu 0, 5, 6
  0350230  cror 6, 1, 2
  0350234  bt 6, 0x350954
  0350238  fsubs 1, 1, 3
  035023c  lfs 31, 72(31)
  0350240  fsubs 2, 2, 4
  0350244  bl 0x5e8338
  0350248  nop
  035024c  fmr 2, 1
  0350250  fmr 1, 31
  0350254  bl 0x5026a0
  0350258  nop
  035025c  lis 3, 53
  0350260  addi 3, 3, -5168
  0350264  lfs 2, 108(3)
  0350268  fcmpu 0, 1, 2
  035026c  cror 6, 1, 2
  0350270  bt 6, 0x350954
  0350274  li 3, 15
  0350278  lbz 4, 83(31)
  035027c  cmpwi 4, 13
  0350280  stb 3, 32(31)
  0350284  bt 2, 0x3502a0
  0350288  ori 3, 31, 0
  035028c  li 4, 13
  0350290  li 5, 0
  0350294  li 6, 6
  0350298  bl 0xfddc0
  035029c  nop
  03502a0  lwz 3, 472(30)
  03502a4  lfs 1, 16(3)
  03502a8  stfs 1, 416(30)
  03502ac  lfs 1, 20(3)
  03502b0  stfs 1, 420(30)
  03502b4  lfs 1, 24(3)
  03502b8  stfs 1, 424(30)
  03502bc  lfs 1, 28(3)
  03502c0  stfs 1, 428(30)
  03502c4  b 0x350954
  03502c8  lwz 3, 472(30)
  03502cc  lfs 4, 20(31)
  03502d0  lfs 3, 16(31)
  03502d4  lfs 2, 20(3)
  03502d8  lfs 1, 16(3)
  03502dc  fsubs 5, 4, 2
  03502e0  fsubs 6, 3, 1
  03502e4  lis 4, 53
  03502e8  addi 4, 4, -5168
  03502ec  fmuls 5, 5, 5
  03502f0  fmadds 5, 6, 6, 5
  03502f4  lfs 6, 96(4)
  03502f8  fsqrts 5, 5
  03502fc  fcmpu 0, 5, 6
  0350300  bt 1, 0x350364
  0350304  lfs 5, 24(3)
  0350308  lfs 6, 24(31)
  035030c  lis 4, 53
  0350310  fsubs 5, 5, 6
  0350314  addi 4, 4, -5168
  0350318  lfs 6, 36(4)
  035031c  fabs 5, 5
  0350320  fcmpu 0, 5, 6
  0350324  bt 1, 0x350364
  0350328  fsubs 1, 1, 3
  035032c  lfs 31, 72(31)
  0350330  fsubs 2, 2, 4
  0350334  bl 0x5e8338
  0350338  nop
  035033c  fmr 2, 1
  0350340  fmr 1, 31
  0350344  bl 0x5026a0
  0350348  nop
  035034c  lis 3, 53
  0350350  addi 3, 3, -5168
  0350354  lfs 2, 108(3)
  0350358  fcmpu 0, 1, 2
  035035c  cror 6, 0, 2
  0350360  bt 6, 0x350390
  0350364  li 3, 14
  0350368  lbz 4, 83(31)
  035036c  cmpwi 4, 12
  0350370  stb 3, 32(31)
  0350374  bt 2, 0x350390
  0350378  ori 3, 31, 0
  035037c  li 4, 12
  0350380  li 5, 0
  0350384  li 6, 6
  0350388  bl 0xfddc0
  035038c  nop
  0350390  ori 3, 31, 0
  0350394  bl 0xefe40
  0350398  nop
  035039c  lis 3, 53
  03503a0  addi 3, 3, -5168
  03503a4  lfs 2, 64(3)
  03503a8  fcmpu 0, 1, 2
  03503ac  bt 1, 0x350954
  03503b0  lwz 3, 460(30)
  03503b4  addic 5, 1, 352
  03503b8  li 4, 0
  03503bc  bl 0xf1114
  03503c0  nop
  03503c4  lfs 1, 416(30)
  03503c8  lfs 2, 352(1)
  03503cc  lis 4, 53
  03503d0  fsubs 1, 1, 2
  03503d4  lfs 2, 356(1)
  03503d8  lfs 3, 360(1)
  03503dc  lwz 3, 472(30)
  03503e0  addi 4, 4, -5168
  03503e4  stfs 1, 336(1)
  03503e8  lfs 1, 420(30)
  03503ec  fsubs 1, 1, 2
  03503f0  stfs 1, 340(1)
  03503f4  lfs 1, 424(30)
  03503f8  fsubs 1, 1, 3
  03503fc  stfs 1, 344(1)
  0350400  lfs 1, 428(30)
  0350404  stfs 1, 348(1)
  0350408  lfs 1, 16(3)
  035040c  stfs 1, 416(30)
  0350410  lfs 1, 20(3)
  0350414  stfs 1, 420(30)
  0350418  lfs 1, 24(3)
  035041c  stfs 1, 424(30)
  0350420  lfs 1, 28(3)
  0350424  stfs 1, 428(30)
  0350428  lfs 31, 76(4)
  035042c  lfs 1, 344(1)
  0350430  fadds 1, 1, 31
  0350434  stfs 1, 344(1)
  0350438  lfs 2, 36(4)
  035043c  fcmpu 0, 1, 2
  0350440  cror 6, 0, 2
  0350444  bt 6, 0x350454
  0350448  lis 3, 16512
  035044c  stw 3, 344(1)
  0350450  b 0x350474
  0350454  lis 3, 53
  0350458  addi 3, 3, -5168
  035045c  lfs 2, 112(3)
  0350460  fcmpu 0, 1, 2
  0350464  cror 6, 1, 2
  0350468  bt 6, 0x350474
  035046c  lis 3, -16256
  0350470  stw 3, 344(1)
  0350474  lis 5, 132
  0350478  lis 6, 114
  035047c  addic 30, 1, 368
  0350480  addic 4, 1, 336
  0350484  ori 3, 30, 0
  0350488  lfs 1, 276(5)
  035048c  lfs 2, -3052(6)
  0350490  fmuls 1, 1, 2
  0350494  bl 0x5e84c0
  0350498  nop
  035049c  lis 4, 53
  03504a0  li 5, 0
  03504a4  addi 4, 4, -5168
  03504a8  lis 6, 114
  03504ac  fmr 1, 31
  03504b0  ori 3, 30, 0
  03504b4  stw 5, 376(1)
  03504b8  ori 5, 31, 0
  03504bc  lfs 2, 72(4)
  03504c0  lfs 3, -3056(6)
  03504c4  addic 4, 1, 352
  03504c8  fmuls 2, 3, 2
  03504cc  fctiwz 2, 2
  03504d0  stfd 2, 672(1)
  03504d4  lwz 6, 676(1)
  03504d8  extsw 6, 6
  03504dc  bl 0x3bbc08
  03504e0  nop
  03504e4  b 0x350954
  03504e8  lfs 1, 16(31)
  03504ec  lfs 2, 32(30)
  03504f0  fadds 1, 1, 2
  03504f4  lis 3, 53
  03504f8  lfs 2, 20(31)
  03504fc  lis 6, 114
  0350500  lfs 3, 24(31)
  0350504  addi 4, 3, -5168
  0350508  lis 5, 114
  035050c  addic 3, 30, 40
  0350510  stfs 1, 16(31)
  0350514  lfs 1, 36(30)
  0350518  fadds 1, 2, 1
  035051c  stfs 1, 20(31)
  0350520  lfs 1, 40(30)
  0350524  fadds 1, 3, 1
  0350528  stfs 1, 24(31)
  035052c  lfs 1, 116(4)
  0350530  lfs 2, 120(4)
  0350534  lfs 3, -3052(6)
  0350538  lfs 4, -3048(5)
  035053c  fmuls 1, 3, 1
  0350540  fmuls 2, 4, 2
  0350544  bl 0x109af0
  0350548  nop
  035054c  lwz 3, 464(30)
  0350550  cmpwi 3, 0
  0350554  bt 2, 0x3505c0
  0350558  lfs 1, 16(31)
  035055c  stfs 1, 16(3)
  0350560  lfs 1, 20(31)
  0350564  stfs 1, 20(3)
  0350568  lfs 1, 24(31)
  035056c  stfs 1, 24(3)
  0350570  lfs 1, 28(31)
  0350574  stfs 1, 28(3)
  0350578  lwz 3, 464(30)
  035057c  lfs 1, 64(31)
  0350580  stfs 1, 64(3)
  0350584  lfs 1, 68(31)
  0350588  stfs 1, 68(3)
  035058c  lfs 1, 72(31)
  0350590  stfs 1, 72(3)
  0350594  lfs 1, 76(31)
  0350598  stfs 1, 76(3)
  035059c  lwz 3, 464(30)
  03505a0  lbz 4, 112(3)
  03505a4  rlwinm 4, 4, 0, 30, 30
  03505a8  cmpwi 4, 0
  03505ac  bt 2, 0x3505c0
  03505b0  bl 0xefb38
  03505b4  nop
  03505b8  li 3, 0
  03505bc  stw 3, 464(30)
  03505c0  lwz 4, 24(31)
  03505c4  lis 3, 16672
  03505c8  lfs 1, 24(31)
  03505cc  srawi 5, 4, 31
  03505d0  srwi 6, 5, 1
  03505d4  xor 4, 6, 4
  03505d8  subc 4, 4, 5
  03505dc  cmpw 4, 3
  03505e0  bf 0, 0x350954
  03505e4  lis 3, 53
  03505e8  lfs 2, 16(31)
  03505ec  li 11, -1
  03505f0  addi 6, 3, -5168
  03505f4  lfs 3, 20(31)
  03505f8  stfs 2, 384(1)
  03505fc  li 7, 1
  0350600  lfs 2, 28(31)
  0350604  li 12, 0
  0350608  stfs 3, 388(1)
  035060c  ori 3, 31, 0
  0350610  stfs 2, 396(1)
  0350614  addic 4, 30, 32
  0350618  lfs 4, 64(6)
  035061c  addic 5, 1, 384
  0350620  std 11, 144(1)
  0350624  li 8, 5
  0350628  fadds 1, 1, 4
  035062c  std 7, 160(1)
  0350630  std 7, 168(1)
  0350634  li 9, 2
  0350638  std 11, 176(1)
  035063c  li 10, 4
  0350640  std 12, 184(1)
  0350644  fmr 6, 4
  0350648  stfs 1, 392(1)
  035064c  lfs 1, 68(6)
  0350650  lfs 3, 4(6)
  0350654  lfs 5, 124(6)
  0350658  lfs 7, 128(6)
  035065c  fmr 2, 1
  0350660  bl 0x10e030
  0350664  nop
  0350668  lwz 3, 460(30)
  035066c  bl 0xefb38
  0350670  nop
  0350674  ori 3, 31, 0
  0350678  bl 0xefb38
  035067c  nop
  0350680  b 0x350954
  0350684  ori 3, 31, 0
  0350688  addic 4, 30, 80
  035068c  bl 0x10b030
  0350690  nop
  0350694  rlwinm 4, 3, 0, 25, 25
  0350698  lfs 2, 16(31)
  035069c  lfs 3, 20(31)
  03506a0  cmpwi 4, 0
  03506a4  lfs 4, 28(31)
  03506a8  bt 2, 0x350768
  03506ac  lwz 3, 480(30)
  03506b0  cmpwi 3, 0
  03506b4  bt 2, 0x35070c
  03506b8  lbz 3, 83(31)
  03506bc  cmpwi 3, 0
  03506c0  bt 2, 0x350700
  03506c4  lis 3, 53
  03506c8  lis 4, 114
  03506cc  addi 3, 3, -5168
  03506d0  li 5, 0
  03506d4  lfs 1, 32(3)
  03506d8  lfs 2, -3056(4)
  03506dc  ori 3, 31, 0
  03506e0  fmuls 1, 2, 1
  03506e4  li 4, 0
  03506e8  fctiwz 1, 1
  03506ec  stfd 1, 672(1)
  03506f0  lwz 6, 676(1)
  03506f4  extsw 6, 6
  03506f8  bl 0xfddc0
  03506fc  nop
  0350700  li 3, 3
  0350704  stb 3, 32(31)
  0350708  b 0x350954
  035070c  ori 3, 31, 0
  0350710  bl 0x34dd10
  0350714  lbz 3, 83(31)
  0350718  cmpwi 3, 2
  035071c  bt 2, 0x35075c
  0350720  lis 3, 53
  0350724  lis 4, 114
  0350728  addi 3, 3, -5168
  035072c  li 5, 0
  0350730  lfs 1, 32(3)
  0350734  lfs 2, -3056(4)
  0350738  ori 3, 31, 0
  035073c  fmuls 1, 2, 1
  0350740  li 4, 2
  0350744  fctiwz 1, 1
  0350748  stfd 1, 672(1)
  035074c  lwz 6, 676(1)
  0350750  extsw 6, 6
  0350754  bl 0xfddc0
  0350758  nop
  035075c  li 3, 12
  0350760  stb 3, 32(31)
  0350764  b 0x350954
  0350768  lwz 5, 24(31)
  035076c  lis 4, 16544
  0350770  lfs 1, 24(31)
  0350774  srawi 6, 5, 31
  0350778  srwi 7, 6, 1
  035077c  xor 5, 7, 5
  0350780  subc 5, 5, 6
  0350784  cmpw 5, 4
  0350788  bt 0, 0x350798
  035078c  rlwinm 3, 3, 0, 26, 26
  0350790  cmpwi 3, 0
  0350794  bt 2, 0x350954
  0350798  lis 3, 53
  035079c  stfs 2, 400(1)
  03507a0  stfs 3, 404(1)
  03507a4  li 11, -1
  03507a8  addi 6, 3, -5168
  03507ac  stfs 4, 412(1)
  03507b0  li 7, 1
  03507b4  li 12, 0
  03507b8  addic 4, 30, 32
  03507bc  addic 5, 1, 400
  03507c0  lfs 4, 64(6)
  03507c4  ori 3, 31, 0
  03507c8  std 11, 144(1)
  03507cc  li 8, 5
  03507d0  fadds 1, 1, 4
  03507d4  std 7, 160(1)
  03507d8  std 7, 168(1)
  03507dc  li 9, 2
  03507e0  std 11, 176(1)
  03507e4  li 10, 4
  03507e8  std 12, 184(1)
  03507ec  fmr 6, 4
  03507f0  stfs 1, 408(1)
  03507f4  lfs 1, 68(6)
  03507f8  lfs 3, 4(6)
  03507fc  lfs 5, 124(6)
  0350800  lfs 7, 128(6)
  0350804  fmr 2, 1
  0350808  bl 0x10e030
  035080c  nop
  0350810  lwz 30, 460(30)
  0350814  cmpwi 30, 0
  0350818  bt 2, 0x350828
  035081c  ori 3, 30, 0
  0350820  bl 0xefb38
  0350824  nop
  0350828  ori 3, 31, 0
  035082c  bl 0xefb38
  0350830  nop
  0350834  b 0x350954
  0350838  ori 3, 31, 0
  035083c  addic 4, 30, 80
  0350840  bl 0x10b030
  0350844  nop
  0350848  rlwinm 4, 3, 0, 25, 25
  035084c  cmpwi 4, 0
  0350850  bt 2, 0x350900
  0350854  lwz 3, 464(30)
  0350858  cmpwi 3, 0
  035085c  bt 2, 0x350868
  0350860  bl 0xefb38
  0350864  nop
  0350868  lis 3, 53
  035086c  lfs 1, 16(31)
  0350870  li 12, -1
  0350874  addi 6, 3, -5168
  0350878  lfs 2, 20(31)
  035087c  stfs 1, 416(1)
  0350880  li 7, 0
  0350884  lfs 1, 28(31)
  0350888  li 11, 1
  035088c  stfs 2, 420(1)
  0350890  ori 3, 31, 0
  0350894  stfs 1, 428(1)
  0350898  addic 4, 30, 32
  035089c  lfs 4, 64(6)
  03508a0  addic 5, 1, 416
  03508a4  lfs 1, 24(31)
  03508a8  li 8, 5
  03508ac  std 12, 144(1)
  03508b0  li 9, 2
  03508b4  fadds 1, 1, 4
  03508b8  std 7, 160(1)
  03508bc  std 11, 168(1)
  03508c0  li 10, 4
  03508c4  std 12, 176(1)
  03508c8  fmr 6, 4
  03508cc  std 7, 184(1)
  03508d0  stfs 1, 424(1)
  03508d4  lfs 1, 68(6)
  03508d8  lfs 3, 4(6)
  03508dc  lfs 5, 124(6)
  03508e0  fmr 2, 1
  03508e4  fmr 7, 1
  03508e8  bl 0x10e030
  03508ec  nop
  03508f0  ori 3, 31, 0
  03508f4  bl 0xefb38
  03508f8  nop
  03508fc  b 0x350954
  0350900  lwz 5, 24(31)
  0350904  lis 4, 16544
  0350908  srawi 6, 5, 31
  035090c  srwi 7, 6, 1
  0350910  xor 5, 7, 5
  0350914  subc 5, 5, 6
  0350918  cmpw 5, 4
  035091c  bt 0, 0x35092c
  0350920  rlwinm 3, 3, 0, 26, 26
  0350924  cmpwi 3, 0
  0350928  bt 2, 0x350954
  035092c  lwz 30, 464(30)
  0350930  cmpwi 30, 0
  0350934  bt 2, 0x350944
  0350938  ori 3, 30, 0
  035093c  bl 0xefb38
  0350940  nop
  0350944  ori 3, 31, 0
  0350948  bl 0xefb38
  035094c  nop
  0350950  b 0x350954
  0350954  ld 0, 768(1)
  0350958  mtlr 0
  035095c  lfd 29, 728(1)
  0350960  lfd 30, 736(1)
  0350964  lfd 31, 744(1)
  0350968  ld 27, 688(1)
  035096c  ld 28, 696(1)
  0350970  ld 29, 704(1)
  0350974  ld 30, 712(1)
  0350978  ld 31, 720(1)
  035097c  addi 1, 1, 752
  0350980  blr
