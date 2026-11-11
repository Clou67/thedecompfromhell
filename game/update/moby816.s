# game/update/moby816.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M816_0046daf0:   # 0x46daf0, 0x14 bytes
  046daf0  lis 3, 135
  046daf4  lis 4, 1
  046daf8  addic 3, 3, 30544
  046dafc  stw 4, 72(3)
  046db00  blr

M816_0046db08:   # 0x46db08, 0x38 bytes
  046db08  lhz 4, 166(3)
  046db0c  cmpwi 4, 816
  046db10  bt 2, 0x46db1c
  046db14  li 3, 0
  046db18  b 0x46db3c
  046db1c  lbz 3, 32(3)
  046db20  cmpwi 1, 3, 7
  046db24  cmpwi 3, 1
  046db28  crnand 2, 1, 4
  046db2c  bt 2, 0x46db38
  046db30  li 3, 1
  046db34  b 0x46db3c
  046db38  li 3, 0
  046db3c  blr

M816_0046db40:   # 0x46db40, 0x48 bytes
  046db40  stdu 1, -112(1)
  046db44  mflr 0
  046db48  std 0, 128(1)
  046db4c  cmpwi 4, 1
  046db50  bf 2, 0x46db68
  046db54  li 3, 8
  046db58  li 4, 3017
  046db5c  bl 0x11aeec
  046db60  nop
  046db64  b 0x46db78
  046db68  li 3, 8
  046db6c  li 4, 3017
  046db70  bl 0x11aeec
  046db74  nop
  046db78  ld 0, 128(1)
  046db7c  mtlr 0
  046db80  addi 1, 1, 112
  046db84  blr

M816_0046db88:   # 0x46db88, 0x58 bytes
  046db88  lis 5, 151
  046db8c  addic 5, 5, -25376
  046db90  lwz 6, 8332(5)
  046db94  lwz 4, 1272(5)
  046db98  cmpwi 6, 3
  046db9c  bt 2, 0x46dbac
  046dba0  lwz 6, 8324(5)
  046dba4  cmpwi 6, 28
  046dba8  bf 2, 0x46dbb8
  046dbac  cmpw 4, 3
  046dbb0  bt 2, 0x46dbd0
  046dbb4  b 0x46dbd8
  046dbb8  lhz 4, 782(5)
  046dbbc  cmpwi 4, 0
  046dbc0  bf 2, 0x46dbd8
  046dbc4  lwz 4, 764(5)
  046dbc8  cmpw 4, 3
  046dbcc  bf 2, 0x46dbd8
  046dbd0  li 3, 1
  046dbd4  b 0x46dbdc
  046dbd8  li 3, 0
  046dbdc  blr

M816_0046dbe8:   # 0x46dbe8, 0xc0 bytes
  046dbe8  stdu 1, -144(1)
  046dbec  mflr 0
  046dbf0  std 0, 160(1)
  046dbf4  stfd 31, 136(1)
  046dbf8  lis 4, 71
  046dbfc  lis 5, 135
  046dc00  std 31, 128(1)
  046dc04  addi 4, 4, -9248
  046dc08  std 30, 120(1)
  046dc0c  ori 31, 3, 0
  046dc10  lis 30, 114
  046dc14  lis 6, 135
  046dc18  lfs 31, 0(4)
  046dc1c  std 29, 112(1)
  046dc20  lfs 2, 30656(5)
  046dc24  lwz 29, 120(31)
  046dc28  fmuls 2, 2, 31
  046dc2c  lfs 3, -3052(30)
  046dc30  lfs 1, 30652(6)
  046dc34  addic 4, 29, 236
  046dc38  addic 5, 29, 232
  046dc3c  fmuls 2, 2, 3
  046dc40  bl 0x116a68
  046dc44  nop
  046dc48  lis 6, 135
  046dc4c  lfs 3, -3052(30)
  046dc50  lis 7, 135
  046dc54  lis 8, 135
  046dc58  ori 3, 31, 0
  046dc5c  addic 4, 29, 240
  046dc60  lfs 1, 30664(6)
  046dc64  addic 5, 29, 244
  046dc68  lfs 2, 30668(7)
  046dc6c  fmuls 4, 1, 31
  046dc70  fmuls 5, 2, 31
  046dc74  lfs 1, 30660(8)
  046dc78  fmuls 2, 4, 3
  046dc7c  fmuls 3, 5, 3
  046dc80  bl 0x116b70
  046dc84  nop
  046dc88  ld 0, 160(1)
  046dc8c  mtlr 0
  046dc90  lfd 31, 136(1)
  046dc94  ld 29, 112(1)
  046dc98  ld 30, 120(1)
  046dc9c  ld 31, 128(1)
  046dca0  addi 1, 1, 144
  046dca4  blr

M816_MoveAlongSpline:   # 0x46dcc8, 0x73c bytes
  046dcc8  stdu 1, -320(1)
  046dccc  mflr 0
  046dcd0  std 0, 336(1)
  046dcd4  stfd 24, 256(1)
  046dcd8  stfd 25, 264(1)
  046dcdc  stfd 26, 272(1)
  046dce0  stfd 27, 280(1)
  046dce4  stfd 28, 288(1)
  046dce8  stfd 29, 296(1)
  046dcec  stfd 30, 304(1)
  046dcf0  stfd 31, 312(1)
  046dcf4  std 31, 248(1)
  046dcf8  ori 31, 3, 0
  046dcfc  std 30, 240(1)
  046dd00  lis 3, 71
  046dd04  ori 30, 5, 0
  046dd08  std 28, 224(1)
  046dd0c  addi 6, 3, -9048
  046dd10  lis 5, 165
  046dd14  std 29, 232(1)
  046dd18  li 28, 0
  046dd1c  lwz 29, 120(31)
  046dd20  sldi 4, 4, 2
  046dd24  addic 3, 5, 7136
  046dd28  extsw 4, 4
  046dd2c  lfs 27, 0(6)
  046dd30  stw 28, 112(1)
  046dd34  lwz 5, 100(29)
  046dd38  std 27, 216(1)
  046dd3c  slwi 7, 5, 4
  046dd40  lwzx 27, 3, 4
  046dd44  lfs 25, 20(31)
  046dd48  addc 7, 27, 7
  046dd4c  lfs 26, 16(31)
  046dd50  clrldi 7, 7, 32
  046dd54  lfs 24, 24(31)
  046dd58  lis 8, 135
  046dd5c  lis 9, 114
  046dd60  lfs 30, 20(7)
  046dd64  lfs 31, 16(7)
  046dd68  fsubs 25, 30, 25
  046dd6c  lfs 1, 24(7)
  046dd70  fsubs 26, 31, 26
  046dd74  fsubs 24, 1, 24
  046dd78  lfs 3, 30672(8)
  046dd7c  fmuls 1, 25, 25
  046dd80  fmadds 1, 26, 26, 1
  046dd84  fmadds 28, 24, 24, 1
  046dd88  lfs 1, -3052(9)
  046dd8c  fmuls 3, 3, 1
  046dd90  lfs 1, 4(6)
  046dd94  lfs 29, 28(7)
  046dd98  fsqrts 28, 28
  046dd9c  fmuls 1, 3, 1
  046dda0  fcmpu 0, 28, 1
  046dda4  std 26, 208(1)
  046dda8  cror 6, 1, 2
  046ddac  bt 6, 0x46ddcc
  046ddb0  addic 5, 5, 1
  046ddb4  lwzx 27, 3, 4
  046ddb8  stw 5, 100(29)
  046ddbc  lwz 3, 0(27)
  046ddc0  cmpw 5, 3
  046ddc4  bf 2, 0x46ddcc
  046ddc8  li 28, 1
  046ddcc  lwz 3, 0(27)
  046ddd0  lfs 1, 20(31)
  046ddd4  slwi 3, 3, 4
  046ddd8  lfs 2, 16(31)
  046dddc  addc 3, 27, 3
  046dde0  clrldi 3, 3, 32
  046dde4  lis 26, 114
  046dde8  addic 5, 29, 96
  046ddec  lfs 4, 4(3)
  046ddf0  lfs 5, 0(3)
  046ddf4  fsubs 1, 1, 4
  046ddf8  fsubs 5, 2, 5
  046ddfc  lfs 2, 24(31)
  046de00  lfs 4, 8(3)
  046de04  lis 3, 135
  046de08  fsubs 6, 2, 4
  046de0c  lfs 2, 30676(3)
  046de10  fmuls 1, 1, 1
  046de14  lfs 4, -3048(26)
  046de18  addic 3, 1, 112
  046de1c  fmuls 2, 2, 4
  046de20  fmr 4, 3
  046de24  fmadds 1, 5, 5, 1
  046de28  fmr 3, 2
  046de2c  fmadds 1, 6, 6, 1
  046de30  fsqrts 1, 1
  046de34  bl 0x109c30
  046de38  nop
  046de3c  lfs 1, 96(29)
  046de40  fdivs 1, 1, 28
  046de44  lfs 8, 16(31)
  046de48  lfs 9, 20(31)
  046de4c  lfs 10, 24(31)
  046de50  stfs 29, 28(31)
  046de54  lis 4, 114
  046de58  lis 3, 71
  046de5c  addi 3, 3, -9048
  046de60  lis 27, 115
  046de64  addic 27, 27, 22784
  046de68  fsub 2, 27, 28
  046de6c  fsub 4, 27, 28
  046de70  fsub 3, 28, 27
  046de74  fsub 5, 28, 27
  046de78  fsub 6, 27, 28
  046de7c  fsub 7, 28, 27
  046de80  fmuls 11, 25, 1
  046de84  fmuls 12, 26, 1
  046de88  fmuls 1, 24, 1
  046de8c  fsel 2, 2, 27, 11
  046de90  fsel 4, 4, 27, 12
  046de94  fsel 2, 3, 2, 11
  046de98  fsel 3, 5, 4, 12
  046de9c  fsel 5, 6, 27, 1
  046dea0  fmuls 4, 2, 2
  046dea4  fsel 1, 7, 5, 1
  046dea8  fadds 2, 2, 9
  046deac  fmadds 4, 3, 3, 4
  046deb0  fadds 3, 3, 8
  046deb4  fabs 6, 1
  046deb8  stfs 1, 132(1)
  046debc  fadds 1, 1, 10
  046dec0  fsqrts 4, 4
  046dec4  lwz 5, 132(1)
  046dec8  lfs 5, 132(1)
  046decc  stfs 3, 16(31)
  046ded0  stfs 2, 20(31)
  046ded4  stfs 1, 24(31)
  046ded8  lfs 1, -3052(4)
  046dedc  lfs 2, -3048(26)
  046dee0  rlwinm 5, 5, 3, 29, 29
  046dee4  fabs 5, 5
  046dee8  fabs 7, 4
  046deec  stfs 4, 128(1)
  046def0  fsubs 3, 7, 6
  046def4  stfs 3, 136(1)
  046def8  lwz 4, 128(1)
  046defc  lfs 3, 128(1)
  046df00  lfs 29, 8(3)
  046df04  lwz 3, 136(1)
  046df08  lfs 4, 136(1)
  046df0c  fabs 3, 3
  046df10  rlwimi 5, 3, 2, 30, 30
  046df14  fsub 8, 4, 27
  046df18  fsub 9, 4, 27
  046df1c  rlwimi 5, 4, 4, 28, 28
  046df20  ori 3, 27, 0
  046df24  slwi 4, 5, 2
  046df28  rlwimi 3, 5, 2, 26, 28
  046df2c  clrldi 3, 3, 32
  046df30  fsel 6, 8, 3, 6
  046df34  lfsx 3, 27, 4
  046df38  lfs 4, 4(3)
  046df3c  fsel 5, 9, 5, 7
  046df40  fcmpu 0, 6, 27
  046df44  bt 1, 0x46df50
  046df48  fmr 3, 27
  046df4c  b 0x46e068
  046df50  fsubs 7, 5, 6
  046df54  fadds 5, 5, 6
  046df58  addic 3, 1, 16
  046df5c  li 7, 2
  046df60  addic 4, 3, 156
  046df64  addic 5, 3, 172
  046df68  mtctr 7
  046df6c  fdivs 5, 7, 5
  046df70  fmuls 6, 5, 5
  046df74  stfs 5, 184(1)
  046df78  stfs 5, 176(1)
  046df7c  stfs 5, 180(1)
  046df80  stfs 5, 172(1)
  046df84  lfs 8, 184(1)
  046df88  lfs 9, 176(1)
  046df8c  lfs 10, 180(1)
  046df90  fmuls 7, 6, 6
  046df94  fmuls 9, 9, 6
  046df98  fmuls 8, 8, 7
  046df9c  fmuls 5, 7, 7
  046dfa0  fmuls 7, 10, 7
  046dfa4  stfs 9, 176(1)
  046dfa8  fmuls 6, 8, 6
  046dfac  stfs 7, 180(1)
  046dfb0  stfs 6, 184(1)
  046dfb4  lfs 6, 156(3)
  046dfb8  fmuls 6, 6, 5
  046dfbc  stfs 6, 172(3)
  046dfc0  lfs 6, 4(4)
  046dfc4  addic 3, 3, 8
  046dfc8  addic 4, 4, 8
  046dfcc  fmuls 6, 6, 5
  046dfd0  stfs 6, 4(5)
  046dfd4  addic 5, 5, 8
  046dfd8  bdnz 0x46dfb4
  046dfdc  li 5, 4
  046dfe0  ori 3, 1, 0
  046dfe4  mtctr 5
  046dfe8  lis 4, 115
  046dfec  addic 5, 3, 172
  046dff0  addic 4, 4, 22752
  046dff4  ori 6, 5, 0
  046dff8  lfs 5, 172(3)
  046dffc  lfs 6, 0(4)
  046e000  fmuls 5, 5, 6
  046e004  lfs 6, 4(4)
  046e008  addic 4, 4, 8
  046e00c  stfs 5, 172(3)
  046e010  lfs 5, 4(5)
  046e014  addic 3, 3, 8
  046e018  fmuls 5, 5, 6
  046e01c  stfs 5, 4(5)
  046e020  addic 5, 5, 8
  046e024  bdnz 0x46dff8
  046e028  fmr 5, 27
  046e02c  ori 3, 1, 0
  046e030  mtctr 7
  046e034  lfs 6, 172(3)
  046e038  fadds 5, 5, 6
  046e03c  addic 3, 3, 16
  046e040  lfs 6, 4(6)
  046e044  lfs 7, 8(6)
  046e048  lfs 8, 12(6)
  046e04c  addic 6, 6, 16
  046e050  fadds 5, 5, 6
  046e054  fadds 5, 5, 7
  046e058  fadds 5, 5, 8
  046e05c  bdnz 0x46e034
  046e060  fadds 5, 5, 29
  046e064  fmadds 3, 5, 3, 4
  046e068  fneg 3, 3
  046e06c  lis 3, 71
  046e070  addi 3, 3, -9048
  046e074  lfs 4, 12(3)
  046e078  fcmpu 0, 3, 4
  046e07c  cror 6, 0, 2
  046e080  bt 6, 0x46e08c
  046e084  fmr 3, 4
  046e088  b 0x46e0a8
  046e08c  lis 3, 71
  046e090  addi 3, 3, -9048
  046e094  lfs 4, 16(3)
  046e098  fcmpu 0, 3, 4
  046e09c  cror 6, 1, 2
  046e0a0  bt 6, 0x46e0a8
  046e0a4  fmr 3, 4
  046e0a8  lis 3, 71
  046e0ac  fmr 28, 31
  046e0b0  lis 4, 135
  046e0b4  fmr 4, 1
  046e0b8  addi 3, 3, -9048
  046e0bc  fmr 1, 3
  046e0c0  fmr 26, 30
  046e0c4  addic 5, 29, 108
  046e0c8  lfs 31, 20(3)
  046e0cc  lfs 5, 30680(4)
  046e0d0  lfs 30, 24(3)
  046e0d4  fmuls 3, 5, 31
  046e0d8  addic 3, 31, 68
  046e0dc  fmuls 4, 4, 30
  046e0e0  fmuls 2, 3, 2
  046e0e4  fmr 3, 2
  046e0e8  bl 0x10a2e0
  046e0ec  nop
  046e0f0  lfs 1, 16(31)
  046e0f4  lis 4, 114
  046e0f8  lfs 2, 20(31)
  046e0fc  fsubs 1, 28, 1
  046e100  fsubs 2, 26, 2
  046e104  lis 5, 114
  046e108  addic 3, 31, 72
  046e10c  fabs 5, 1
  046e110  fabs 6, 2
  046e114  stfs 1, 116(1)
  046e118  stfs 2, 120(1)
  046e11c  lfs 4, -3048(4)
  046e120  fsubs 1, 5, 6
  046e124  stfs 1, 124(1)
  046e128  lwz 4, 116(1)
  046e12c  lfs 1, 116(1)
  046e130  lwz 6, 120(1)
  046e134  lfs 2, 120(1)
  046e138  lfs 3, -3052(5)
  046e13c  fabs 1, 1
  046e140  fabs 7, 2
  046e144  rlwinm 6, 6, 3, 29, 29
  046e148  lwz 5, 124(1)
  046e14c  lfs 2, 124(1)
  046e150  rlwimi 6, 5, 2, 30, 30
  046e154  fsub 8, 2, 27
  046e158  fsub 9, 2, 27
  046e15c  rlwimi 6, 4, 4, 28, 28
  046e160  ori 4, 27, 0
  046e164  slwi 5, 6, 2
  046e168  rlwimi 4, 6, 2, 26, 28
  046e16c  clrldi 4, 4, 32
  046e170  fsel 6, 8, 1, 6
  046e174  lfsx 1, 27, 5
  046e178  lfs 2, 4(4)
  046e17c  fsel 5, 9, 7, 5
  046e180  fcmpu 0, 6, 27
  046e184  bt 1, 0x46e18c
  046e188  b 0x46e2a0
  046e18c  fsubs 7, 5, 6
  046e190  fadds 5, 5, 6
  046e194  addic 4, 1, 16
  046e198  li 8, 2
  046e19c  addic 6, 4, 140
  046e1a0  addic 5, 4, 124
  046e1a4  mtctr 8
  046e1a8  fdivs 5, 7, 5
  046e1ac  fmuls 6, 5, 5
  046e1b0  stfs 5, 152(1)
  046e1b4  stfs 5, 144(1)
  046e1b8  stfs 5, 148(1)
  046e1bc  stfs 5, 140(1)
  046e1c0  lfs 8, 152(1)
  046e1c4  lfs 9, 144(1)
  046e1c8  lfs 10, 148(1)
  046e1cc  fmuls 7, 6, 6
  046e1d0  fmuls 9, 9, 6
  046e1d4  fmuls 8, 8, 7
  046e1d8  fmuls 5, 7, 7
  046e1dc  fmuls 7, 10, 7
  046e1e0  stfs 9, 144(1)
  046e1e4  fmuls 6, 8, 6
  046e1e8  stfs 7, 148(1)
  046e1ec  stfs 6, 152(1)
  046e1f0  lfs 6, 124(4)
  046e1f4  fmuls 6, 6, 5
  046e1f8  stfs 6, 140(4)
  046e1fc  lfs 6, 4(5)
  046e200  addic 5, 5, 8
  046e204  fmuls 6, 6, 5
  046e208  addic 4, 4, 8
  046e20c  stfs 6, 4(6)
  046e210  addic 6, 6, 8
  046e214  bdnz 0x46e1f0
  046e218  li 6, 4
  046e21c  ori 4, 1, 0
  046e220  mtctr 6
  046e224  lis 5, 115
  046e228  addic 6, 4, 140
  046e22c  addic 5, 5, 22752
  046e230  ori 7, 6, 0
  046e234  lfs 5, 140(4)
  046e238  lfs 6, 0(5)
  046e23c  fmuls 5, 5, 6
  046e240  lfs 6, 4(5)
  046e244  addic 5, 5, 8
  046e248  stfs 5, 140(4)
  046e24c  lfs 5, 4(6)
  046e250  addic 4, 4, 8
  046e254  fmuls 5, 5, 6
  046e258  stfs 5, 4(6)
  046e25c  addic 6, 6, 8
  046e260  bdnz 0x46e234
  046e264  ori 4, 1, 0
  046e268  mtctr 8
  046e26c  lfs 5, 140(4)
  046e270  lfs 6, 4(7)
  046e274  fadds 5, 27, 5
  046e278  lfs 7, 8(7)
  046e27c  addic 4, 4, 16
  046e280  lfs 27, 12(7)
  046e284  addic 7, 7, 16
  046e288  fadds 5, 5, 6
  046e28c  fadds 5, 5, 7
  046e290  fadds 27, 5, 27
  046e294  bdnz 0x46e26c
  046e298  fadds 27, 27, 29
  046e29c  fmadds 27, 27, 1, 2
  046e2a0  lis 4, 135
  046e2a4  fmr 2, 4
  046e2a8  fmuls 4, 3, 30
  046e2ac  addic 5, 29, 104
  046e2b0  lfs 1, 30684(4)
  046e2b4  fmuls 5, 1, 31
  046e2b8  fmr 1, 27
  046e2bc  fmuls 2, 5, 2
  046e2c0  fmr 3, 2
  046e2c4  bl 0x10a2e0
  046e2c8  nop
  046e2cc  lis 3, 135
  046e2d0  lfs 1, 104(29)
  046e2d4  lis 4, 114
  046e2d8  lfs 2, 96(29)
  046e2dc  lis 5, 135
  046e2e0  fmuls 1, 1, 2
  046e2e4  lfs 3, 30688(3)
  046e2e8  addic 3, 31, 64
  046e2ec  fmuls 2, 3, 31
  046e2f0  lfs 3, -3048(4)
  046e2f4  lis 4, 114
  046e2f8  lfs 4, 30692(5)
  046e2fc  addic 5, 29, 112
  046e300  lfs 5, -3052(4)
  046e304  fmuls 1, 1, 4
  046e308  fmuls 4, 5, 30
  046e30c  fmuls 2, 2, 3
  046e310  fmr 3, 2
  046e314  bl 0x10a2e0
  046e318  nop
  046e31c  cmpwi 28, 0
  046e320  bf 2, 0x46e360
  046e324  ori 3, 31, 0
  046e328  lwz 4, 0(30)
  046e32c  extsw 4, 4
  046e330  bl 0x15cc7c
  046e334  nop
  046e338  cmpwi 3, 0
  046e33c  bf 2, 0x46e3b8
  046e340  li 3, 0
  046e344  li 4, 4
  046e348  ori 5, 31, 0
  046e34c  li 6, 816
  046e350  bl 0x15d204
  046e354  nop
  046e358  stw 3, 0(30)
  046e35c  b 0x46e3b8
  046e360  lwz 3, 0(30)
  046e364  cmpwi 3, -1
  046e368  bt 2, 0x46e3b0
  046e36c  sldi 4, 3, 7
  046e370  sldi 6, 3, 4
  046e374  lis 5, 150
  046e378  subc 4, 4, 6
  046e37c  addic 5, 5, 14312
  046e380  extsw 4, 4
  046e384  lwzx 5, 5, 4
  046e388  cmpw 5, 31
  046e38c  bf 2, 0x46e3b0
  046e390  lis 5, 150
  046e394  addic 5, 5, 14292
  046e398  lbzx 4, 5, 4
  046e39c  cmpwi 4, 0
  046e3a0  bt 2, 0x46e3b0
  046e3a4  extsw 3, 3
  046e3a8  bl 0x15cdb0
  046e3ac  nop
  046e3b0  li 3, -1
  046e3b4  stw 3, 0(30)
  046e3b8  ori 3, 28, 0
  046e3bc  ld 0, 336(1)
  046e3c0  mtlr 0
  046e3c4  lfd 24, 256(1)
  046e3c8  lfd 25, 264(1)
  046e3cc  lfd 26, 272(1)
  046e3d0  lfd 27, 280(1)
  046e3d4  lfd 28, 288(1)
  046e3d8  lfd 29, 296(1)
  046e3dc  lfd 30, 304(1)
  046e3e0  lfd 31, 312(1)
  046e3e4  ld 26, 208(1)
  046e3e8  ld 27, 216(1)
  046e3ec  ld 28, 224(1)
  046e3f0  ld 29, 232(1)
  046e3f4  ld 30, 240(1)
  046e3f8  ld 31, 248(1)
  046e3fc  addi 1, 1, 320
  046e400  blr

UpdateMoby_816:   # 0x46e420, 0x1170 bytes
  046e420  stdu 1, -432(1)
  046e424  mflr 0
  046e428  std 0, 448(1)
  046e42c  stfd 26, 384(1)
  046e430  stfd 27, 392(1)
  046e434  stfd 28, 400(1)
  046e438  stfd 29, 408(1)
  046e43c  stfd 30, 416(1)
  046e440  stfd 31, 424(1)
  046e444  std 31, 376(1)
  046e448  lhz 4, 166(3)
  046e44c  std 29, 360(1)
  046e450  ori 31, 3, 0
  046e454  lwz 29, 120(3)
  046e458  std 30, 368(1)
  046e45c  std 28, 352(1)
  046e460  std 27, 344(1)
  046e464  std 26, 336(1)
  046e468  std 25, 328(1)
  046e46c  cmpwi 4, 816
  046e470  bt 2, 0x46e47c
  046e474  li 3, 0
  046e478  b 0x46e49c
  046e47c  lbz 3, 32(31)
  046e480  cmpwi 1, 3, 7
  046e484  cmpwi 3, 1
  046e488  crnand 2, 1, 4
  046e48c  bt 2, 0x46e498
  046e490  li 3, 1
  046e494  b 0x46e49c
  046e498  li 3, 0
  046e49c  ori 4, 3, 0
  046e4a0  ori 3, 31, 0
  046e4a4  bl 0x4d407c
  046e4a8  nop
  046e4ac  lis 3, 270
  046e4b0  lwz 3, -26160(3)
  046e4b4  cmpwi 3, 0
  046e4b8  bt 2, 0x46e694
  046e4bc  lwz 3, 148(29)
  046e4c0  lis 28, 165
  046e4c4  li 30, 0
  046e4c8  slwi 4, 3, 2
  046e4cc  addic 28, 28, 7136
  046e4d0  extsw 4, 4
  046e4d4  ori 26, 30, 0
  046e4d8  lwzx 4, 28, 4
  046e4dc  lwz 4, 0(4)
  046e4e0  cmpwi 4, 0
  046e4e4  bf 1, 0x46e564
  046e4e8  lis 4, 71
  046e4ec  lis 5, -32768
  046e4f0  addi 4, 4, -7164
  046e4f4  ori 5, 5, 255
  046e4f8  ori 27, 30, 0
  046e4fc  clrldi 25, 5, 32
  046e500  lfs 31, 0(4)
  046e504  slwi 3, 3, 2
  046e508  fmr 1, 31
  046e50c  ori 4, 31, 0
  046e510  extsw 3, 3
  046e514  li 5, 4
  046e518  ori 6, 25, 0
  046e51c  li 8, 127
  046e520  li 9, 2
  046e524  lwzx 3, 28, 3
  046e528  li 10, 255
  046e52c  addc 3, 3, 27
  046e530  addic 3, 3, 16
  046e534  clrldi 3, 3, 32
  046e538  bl 0x12d0e8
  046e53c  nop
  046e540  lwz 3, 148(29)
  046e544  addic 30, 30, 1
  046e548  slwi 4, 3, 2
  046e54c  addic 27, 27, 16
  046e550  extsw 4, 4
  046e554  lwzx 4, 28, 4
  046e558  lwz 4, 0(4)
  046e55c  cmpw 30, 4
  046e560  bt 0, 0x46e504
  046e564  lwz 3, 168(29)
  046e568  ori 30, 26, 0
  046e56c  slwi 4, 3, 2
  046e570  extsw 4, 4
  046e574  lwzx 4, 28, 4
  046e578  lwz 4, 0(4)
  046e57c  cmpwi 4, 0
  046e580  bf 1, 0x46e600
  046e584  lis 4, 71
  046e588  lis 5, -32768
  046e58c  addi 4, 4, -7164
  046e590  ori 5, 5, 65280
  046e594  ori 27, 26, 0
  046e598  clrldi 25, 5, 32
  046e59c  lfs 31, 0(4)
  046e5a0  slwi 3, 3, 2
  046e5a4  li 8, 127
  046e5a8  fmr 1, 31
  046e5ac  extsw 3, 3
  046e5b0  ori 4, 31, 0
  046e5b4  li 5, 4
  046e5b8  ori 6, 25, 0
  046e5bc  li 9, 2
  046e5c0  lwzx 3, 28, 3
  046e5c4  li 10, 255
  046e5c8  addc 3, 3, 27
  046e5cc  addic 3, 3, 16
  046e5d0  clrldi 3, 3, 32
  046e5d4  bl 0x12d0e8
  046e5d8  nop
  046e5dc  lwz 3, 168(29)
  046e5e0  addic 30, 30, 1
  046e5e4  addic 27, 27, 16
  046e5e8  slwi 4, 3, 2
  046e5ec  extsw 4, 4
  046e5f0  lwzx 4, 28, 4
  046e5f4  lwz 4, 0(4)
  046e5f8  cmpw 30, 4
  046e5fc  bt 0, 0x46e5a0
  046e600  lwz 3, 188(29)
  046e604  ori 30, 26, 0
  046e608  slwi 4, 3, 2
  046e60c  extsw 4, 4
  046e610  lwzx 4, 28, 4
  046e614  lwz 4, 0(4)
  046e618  cmpwi 4, 0
  046e61c  bf 1, 0x46e694
  046e620  lis 4, 71
  046e624  lis 5, -32513
  046e628  addi 4, 4, -7164
  046e62c  clrldi 27, 5, 32
  046e630  lfs 31, 0(4)
  046e634  slwi 3, 3, 2
  046e638  fmr 1, 31
  046e63c  ori 4, 31, 0
  046e640  extsw 3, 3
  046e644  li 5, 4
  046e648  ori 6, 27, 0
  046e64c  li 8, 127
  046e650  li 9, 2
  046e654  lwzx 3, 28, 3
  046e658  li 10, 255
  046e65c  addc 3, 3, 26
  046e660  addic 3, 3, 16
  046e664  clrldi 3, 3, 32
  046e668  bl 0x12d0e8
  046e66c  nop
  046e670  lwz 3, 188(29)
  046e674  addic 30, 30, 1
  046e678  slwi 4, 3, 2
  046e67c  addic 26, 26, 16
  046e680  extsw 4, 4
  046e684  lwzx 4, 28, 4
  046e688  lwz 4, 0(4)
  046e68c  cmpw 30, 4
  046e690  bt 0, 0x46e634
  046e694  lfs 31, 16(31)
  046e698  lfs 1, 64(31)
  046e69c  lfs 30, 20(31)
  046e6a0  lfs 29, 24(31)
  046e6a4  lfs 2, 68(31)
  046e6a8  stfs 1, 112(1)
  046e6ac  lfs 1, 72(31)
  046e6b0  stfs 2, 116(1)
  046e6b4  lfs 2, 76(31)
  046e6b8  lbz 3, 32(31)
  046e6bc  stfs 1, 120(1)
  046e6c0  cmpwi 3, 7
  046e6c4  cmpwi 1, 3, 6
  046e6c8  stfs 2, 124(1)
  046e6cc  cmpwi 6, 3, 5
  046e6d0  cmpwi 7, 3, 4
  046e6d4  bt 2, 0x46f444
  046e6d8  bt 6, 0x46f2dc
  046e6dc  bt 26, 0x46f250
  046e6e0  bt 30, 0x46f234
  046e6e4  cmpwi 3, 3
  046e6e8  bt 2, 0x46f100
  046e6ec  cmpwi 3, 2
  046e6f0  bt 2, 0x46f0a8
  046e6f4  cmpwi 3, 1
  046e6f8  bt 2, 0x46ebbc
  046e6fc  cmpwi 3, 0
  046e700  bf 2, 0x46f484
  046e704  lwz 3, 148(29)
  046e708  cmpwi 3, -1
  046e70c  bt 2, 0x46e918
  046e710  lis 4, 165
  046e714  slwi 3, 3, 2
  046e718  lwz 5, 148(29)
  046e71c  addic 4, 4, 7136
  046e720  extsw 3, 3
  046e724  slwi 5, 5, 2
  046e728  extsw 5, 5
  046e72c  lwzx 3, 4, 3
  046e730  lfs 1, 16(3)
  046e734  stfs 1, 16(31)
  046e738  lfs 2, 20(3)
  046e73c  stfs 2, 20(31)
  046e740  lfs 3, 24(3)
  046e744  lwzx 4, 4, 5
  046e748  stfs 3, 24(31)
  046e74c  lfs 3, 28(3)
  046e750  stfs 3, 28(31)
  046e754  lfs 3, 32(4)
  046e758  lis 3, 71
  046e75c  lfs 4, 36(4)
  046e760  fsubs 1, 3, 1
  046e764  fsubs 2, 4, 2
  046e768  addi 3, 3, -7164
  046e76c  lis 4, 115
  046e770  addic 4, 4, 22784
  046e774  fabs 3, 1
  046e778  fabs 5, 2
  046e77c  stfs 1, 180(1)
  046e780  stfs 2, 184(1)
  046e784  fsubs 1, 3, 5
  046e788  stfs 1, 188(1)
  046e78c  lwz 5, 180(1)
  046e790  lfs 4, 4(3)
  046e794  lfs 1, 180(1)
  046e798  lwz 3, 184(1)
  046e79c  lfs 2, 184(1)
  046e7a0  fabs 1, 1
  046e7a4  lwz 6, 188(1)
  046e7a8  rlwinm 3, 3, 3, 29, 29
  046e7ac  fabs 6, 2
  046e7b0  lfs 2, 188(1)
  046e7b4  rlwimi 3, 6, 2, 30, 30
  046e7b8  fsub 7, 2, 4
  046e7bc  rlwimi 3, 5, 4, 28, 28
  046e7c0  fsub 8, 2, 4
  046e7c4  ori 5, 4, 0
  046e7c8  rlwimi 5, 3, 2, 26, 28
  046e7cc  slwi 3, 3, 2
  046e7d0  clrldi 5, 5, 32
  046e7d4  fsel 5, 7, 1, 5
  046e7d8  lfsx 1, 4, 3
  046e7dc  lfs 2, 4(5)
  046e7e0  fsel 3, 8, 6, 3
  046e7e4  fcmpu 0, 5, 4
  046e7e8  bt 1, 0x46e7f0
  046e7ec  b 0x46e910
  046e7f0  fsubs 6, 3, 5
  046e7f4  fadds 3, 3, 5
  046e7f8  addic 3, 1, 16
  046e7fc  li 7, 2
  046e800  addic 5, 3, 288
  046e804  addic 4, 3, 272
  046e808  mtctr 7
  046e80c  fdivs 3, 6, 3
  046e810  fmuls 5, 3, 3
  046e814  stfs 3, 300(1)
  046e818  stfs 3, 292(1)
  046e81c  stfs 3, 296(1)
  046e820  stfs 3, 288(1)
  046e824  lfs 7, 300(1)
  046e828  lfs 8, 292(1)
  046e82c  lfs 9, 296(1)
  046e830  fmuls 6, 5, 5
  046e834  fmuls 8, 8, 5
  046e838  fmuls 7, 7, 6
  046e83c  fmuls 3, 6, 6
  046e840  fmuls 6, 9, 6
  046e844  stfs 8, 292(1)
  046e848  fmuls 5, 7, 5
  046e84c  stfs 6, 296(1)
  046e850  stfs 5, 300(1)
  046e854  lfs 5, 272(3)
  046e858  fmuls 5, 5, 3
  046e85c  stfs 5, 288(3)
  046e860  lfs 5, 4(4)
  046e864  addic 4, 4, 8
  046e868  fmuls 5, 5, 3
  046e86c  addic 3, 3, 8
  046e870  stfs 5, 4(5)
  046e874  addic 5, 5, 8
  046e878  bdnz 0x46e854
  046e87c  li 5, 4
  046e880  ori 3, 1, 0
  046e884  mtctr 5
  046e888  lis 4, 115
  046e88c  addic 5, 3, 288
  046e890  addic 4, 4, 22752
  046e894  ori 6, 5, 0
  046e898  lfs 3, 288(3)
  046e89c  lfs 5, 0(4)
  046e8a0  fmuls 3, 3, 5
  046e8a4  lfs 5, 4(4)
  046e8a8  addic 4, 4, 8
  046e8ac  stfs 3, 288(3)
  046e8b0  lfs 3, 4(5)
  046e8b4  addic 3, 3, 8
  046e8b8  fmuls 3, 3, 5
  046e8bc  stfs 3, 4(5)
  046e8c0  addic 5, 5, 8
  046e8c4  bdnz 0x46e898
  046e8c8  ori 3, 1, 0
  046e8cc  mtctr 7
  046e8d0  lfs 3, 288(3)
  046e8d4  fadds 3, 4, 3
  046e8d8  addic 3, 3, 16
  046e8dc  lfs 4, 4(6)
  046e8e0  lfs 5, 8(6)
  046e8e4  lfs 6, 12(6)
  046e8e8  addic 6, 6, 16
  046e8ec  fadds 3, 3, 4
  046e8f0  fadds 4, 3, 5
  046e8f4  fadds 4, 4, 6
  046e8f8  bdnz 0x46e8d0
  046e8fc  lis 3, 71
  046e900  addi 3, 3, -7164
  046e904  lfs 3, 8(3)
  046e908  fadds 4, 4, 3
  046e90c  fmadds 4, 4, 1, 2
  046e910  stfs 4, 72(31)
  046e914  b 0x46eb28
  046e918  lwz 3, 168(29)
  046e91c  cmpwi 3, -1
  046e920  bt 2, 0x46eb28
  046e924  lis 4, 165
  046e928  lwz 5, 168(29)
  046e92c  slwi 3, 3, 2
  046e930  addic 4, 4, 7136
  046e934  extsw 3, 3
  046e938  slwi 5, 5, 2
  046e93c  extsw 5, 5
  046e940  lwzx 3, 4, 3
  046e944  lfs 1, 16(3)
  046e948  stfs 1, 16(31)
  046e94c  lfs 2, 20(3)
  046e950  stfs 2, 20(31)
  046e954  lfs 3, 24(3)
  046e958  lwzx 4, 4, 5
  046e95c  stfs 3, 24(31)
  046e960  lfs 3, 28(3)
  046e964  stfs 3, 28(31)
  046e968  lfs 3, 32(4)
  046e96c  lfs 4, 36(4)
  046e970  lis 3, 71
  046e974  fsubs 1, 3, 1
  046e978  fsubs 2, 4, 2
  046e97c  addi 3, 3, -7164
  046e980  lis 4, 115
  046e984  addic 4, 4, 22784
  046e988  fabs 3, 1
  046e98c  fabs 5, 2
  046e990  stfs 1, 168(1)
  046e994  stfs 2, 172(1)
  046e998  fsubs 1, 3, 5
  046e99c  stfs 1, 176(1)
  046e9a0  lwz 5, 168(1)
  046e9a4  lfs 4, 4(3)
  046e9a8  lfs 1, 168(1)
  046e9ac  lwz 3, 172(1)
  046e9b0  lfs 2, 172(1)
  046e9b4  lwz 6, 176(1)
  046e9b8  rlwinm 3, 3, 3, 29, 29
  046e9bc  fabs 6, 2
  046e9c0  lfs 2, 176(1)
  046e9c4  fabs 1, 1
  046e9c8  rlwimi 3, 6, 2, 30, 30
  046e9cc  fsub 7, 2, 4
  046e9d0  rlwimi 3, 5, 4, 28, 28
  046e9d4  fsub 8, 2, 4
  046e9d8  ori 5, 4, 0
  046e9dc  rlwimi 5, 3, 2, 26, 28
  046e9e0  slwi 3, 3, 2
  046e9e4  clrldi 5, 5, 32
  046e9e8  fsel 5, 7, 1, 5
  046e9ec  lfsx 1, 4, 3
  046e9f0  lfs 2, 4(5)
  046e9f4  fsel 3, 8, 6, 3
  046e9f8  fcmpu 0, 5, 4
  046e9fc  bt 1, 0x46ea04
  046ea00  b 0x46eb24
  046ea04  fsubs 6, 3, 5
  046ea08  fadds 3, 3, 5
  046ea0c  addic 3, 1, 16
  046ea10  li 6, 2
  046ea14  addic 4, 3, 240
  046ea18  addic 5, 3, 256
  046ea1c  mtctr 6
  046ea20  fdivs 3, 6, 3
  046ea24  fmuls 5, 3, 3
  046ea28  stfs 3, 268(1)
  046ea2c  stfs 3, 260(1)
  046ea30  stfs 3, 264(1)
  046ea34  stfs 3, 256(1)
  046ea38  lfs 7, 268(1)
  046ea3c  lfs 8, 260(1)
  046ea40  lfs 9, 264(1)
  046ea44  fmuls 6, 5, 5
  046ea48  fmuls 8, 8, 5
  046ea4c  fmuls 7, 7, 6
  046ea50  fmuls 3, 6, 6
  046ea54  fmuls 6, 9, 6
  046ea58  stfs 8, 260(1)
  046ea5c  fmuls 5, 7, 5
  046ea60  stfs 6, 264(1)
  046ea64  stfs 5, 268(1)
  046ea68  lfs 5, 240(3)
  046ea6c  fmuls 5, 5, 3
  046ea70  stfs 5, 256(3)
  046ea74  lfs 5, 4(4)
  046ea78  addic 3, 3, 8
  046ea7c  addic 4, 4, 8
  046ea80  fmuls 5, 5, 3
  046ea84  stfs 5, 4(5)
  046ea88  addic 5, 5, 8
  046ea8c  bdnz 0x46ea68
  046ea90  li 5, 4
  046ea94  ori 3, 1, 0
  046ea98  mtctr 5
  046ea9c  lis 4, 115
  046eaa0  addic 5, 3, 256
  046eaa4  addic 4, 4, 22752
  046eaa8  ori 7, 5, 0
  046eaac  lfs 3, 256(3)
  046eab0  lfs 5, 0(4)
  046eab4  fmuls 3, 3, 5
  046eab8  lfs 5, 4(4)
  046eabc  addic 4, 4, 8
  046eac0  stfs 3, 256(3)
  046eac4  lfs 3, 4(5)
  046eac8  addic 3, 3, 8
  046eacc  fmuls 3, 3, 5
  046ead0  stfs 3, 4(5)
  046ead4  addic 5, 5, 8
  046ead8  bdnz 0x46eaac
  046eadc  ori 3, 1, 0
  046eae0  mtctr 6
  046eae4  lfs 3, 256(3)
  046eae8  fadds 3, 4, 3
  046eaec  lfs 4, 4(7)
  046eaf0  addic 3, 3, 16
  046eaf4  lfs 5, 8(7)
  046eaf8  lfs 6, 12(7)
  046eafc  addic 7, 7, 16
  046eb00  fadds 3, 3, 4
  046eb04  fadds 4, 3, 5
  046eb08  fadds 4, 4, 6
  046eb0c  bdnz 0x46eae4
  046eb10  lis 3, 71
  046eb14  addi 3, 3, -7164
  046eb18  lfs 3, 8(3)
  046eb1c  fadds 4, 4, 3
  046eb20  fmadds 4, 4, 1, 2
  046eb24  stfs 4, 72(31)
  046eb28  li 3, 255
  046eb2c  li 5, 0
  046eb30  lis 4, 165
  046eb34  li 6, -1
  046eb38  stb 3, 48(31)
  046eb3c  lhz 3, 178(31)
  046eb40  addic 7, 4, 17860
  046eb44  li 8, 1
  046eb48  sth 5, 50(31)
  046eb4c  extsh 4, 3
  046eb50  stw 6, 116(29)
  046eb54  stw 5, 148(31)
  046eb58  stb 8, 32(31)
  046eb5c  lbzx 5, 7, 4
  046eb60  cmpwi 5, 0
  046eb64  bf 2, 0x46ebac
  046eb68  lis 6, 151
  046eb6c  lis 5, 161
  046eb70  srawi 4, 4, 5
  046eb74  addic 5, 5, -13028
  046eb78  sldi 4, 4, 2
  046eb7c  lwz 6, -25488(6)
  046eb80  clrlwi 3, 3, 27
  046eb84  addc 4, 4, 5
  046eb88  slwi 5, 6, 8
  046eb8c  clrldi 4, 4, 32
  046eb90  extsw 5, 5
  046eb94  li 6, 1
  046eb98  slw 3, 6, 3
  046eb9c  lwzx 4, 4, 5
  046eba0  and 3, 4, 3
  046eba4  cmpwi 3, 0
  046eba8  bt 2, 0x46f484
  046ebac  ori 3, 31, 0
  046ebb0  bl 0xefb38
  046ebb4  nop
  046ebb8  b 0x46f54c
  046ebbc  lwz 3, 124(29)
  046ebc0  cmpwi 3, 0
  046ebc4  bt 2, 0x46f484
  046ebc8  lis 3, 151
  046ebcc  li 30, 0
  046ebd0  addic 28, 3, -25376
  046ebd4  ori 27, 29, 0
  046ebd8  addic 28, 28, 128
  046ebdc  lwz 3, 128(27)
  046ebe0  cmpwi 3, -1
  046ebe4  bf 2, 0x46ebf4
  046ebe8  lwz 4, 116(29)
  046ebec  cmpw 4, 30
  046ebf0  bf 2, 0x46f094
  046ebf4  extsw 4, 3
  046ebf8  ori 3, 28, 0
  046ebfc  bl 0x110b70
  046ec00  nop
  046ec04  cmpwi 3, 0
  046ec08  bf 2, 0x46ec18
  046ec0c  lwz 3, 116(29)
  046ec10  cmpw 3, 30
  046ec14  bf 2, 0x46f094
  046ec18  slwi 3, 30, 2
  046ec1c  lwz 5, 36(31)
  046ec20  addc 4, 29, 3
  046ec24  clrldi 4, 4, 32
  046ec28  lwz 3, 148(4)
  046ec2c  lwz 5, 16(5)
  046ec30  cmpwi 3, -1
  046ec34  stw 5, 148(31)
  046ec38  bt 2, 0x46ee44
  046ec3c  lis 5, 165
  046ec40  slwi 3, 3, 2
  046ec44  lwz 4, 148(4)
  046ec48  addic 5, 5, 7136
  046ec4c  extsw 3, 3
  046ec50  slwi 4, 4, 2
  046ec54  extsw 4, 4
  046ec58  lwzx 3, 5, 3
  046ec5c  lfs 1, 16(3)
  046ec60  stfs 1, 16(31)
  046ec64  lfs 2, 20(3)
  046ec68  stfs 2, 20(31)
  046ec6c  lfs 3, 24(3)
  046ec70  lwzx 4, 5, 4
  046ec74  stfs 3, 24(31)
  046ec78  lfs 3, 28(3)
  046ec7c  stfs 3, 28(31)
  046ec80  lfs 3, 32(4)
  046ec84  lis 3, 71
  046ec88  lfs 4, 36(4)
  046ec8c  fsubs 1, 3, 1
  046ec90  fsubs 2, 4, 2
  046ec94  addi 3, 3, -7164
  046ec98  lis 4, 115
  046ec9c  addic 4, 4, 22784
  046eca0  fabs 3, 1
  046eca4  fabs 5, 2
  046eca8  stfs 1, 156(1)
  046ecac  stfs 2, 160(1)
  046ecb0  fsubs 1, 3, 5
  046ecb4  stfs 1, 164(1)
  046ecb8  lwz 5, 156(1)
  046ecbc  lfs 4, 4(3)
  046ecc0  lfs 1, 156(1)
  046ecc4  lwz 3, 160(1)
  046ecc8  lfs 2, 160(1)
  046eccc  fabs 1, 1
  046ecd0  lwz 6, 164(1)
  046ecd4  rlwinm 3, 3, 3, 29, 29
  046ecd8  fabs 6, 2
  046ecdc  lfs 2, 164(1)
  046ece0  rlwimi 3, 6, 2, 30, 30
  046ece4  fsub 7, 2, 4
  046ece8  rlwimi 3, 5, 4, 28, 28
  046ecec  fsub 8, 2, 4
  046ecf0  ori 5, 4, 0
  046ecf4  rlwimi 5, 3, 2, 26, 28
  046ecf8  slwi 3, 3, 2
  046ecfc  clrldi 5, 5, 32
  046ed00  fsel 5, 7, 1, 5
  046ed04  lfsx 1, 4, 3
  046ed08  lfs 2, 4(5)
  046ed0c  fsel 3, 8, 6, 3
  046ed10  fcmpu 0, 5, 4
  046ed14  bt 1, 0x46ed1c
  046ed18  b 0x46ee3c
  046ed1c  fsubs 6, 3, 5
  046ed20  fadds 3, 3, 5
  046ed24  addic 3, 1, 16
  046ed28  li 6, 2
  046ed2c  addic 5, 3, 224
  046ed30  addic 4, 3, 208
  046ed34  mtctr 6
  046ed38  fdivs 3, 6, 3
  046ed3c  fmuls 5, 3, 3
  046ed40  stfs 3, 236(1)
  046ed44  stfs 3, 228(1)
  046ed48  stfs 3, 232(1)
  046ed4c  stfs 3, 224(1)
  046ed50  lfs 7, 236(1)
  046ed54  lfs 8, 228(1)
  046ed58  lfs 9, 232(1)
  046ed5c  fmuls 6, 5, 5
  046ed60  fmuls 8, 8, 5
  046ed64  fmuls 7, 7, 6
  046ed68  fmuls 3, 6, 6
  046ed6c  fmuls 6, 9, 6
  046ed70  stfs 8, 228(1)
  046ed74  fmuls 5, 7, 5
  046ed78  stfs 6, 232(1)
  046ed7c  stfs 5, 236(1)
  046ed80  lfs 5, 208(3)
  046ed84  fmuls 5, 5, 3
  046ed88  stfs 5, 224(3)
  046ed8c  lfs 5, 4(4)
  046ed90  addic 4, 4, 8
  046ed94  fmuls 5, 5, 3
  046ed98  addic 3, 3, 8
  046ed9c  stfs 5, 4(5)
  046eda0  addic 5, 5, 8
  046eda4  bdnz 0x46ed80
  046eda8  li 5, 4
  046edac  ori 3, 1, 0
  046edb0  mtctr 5
  046edb4  lis 4, 115
  046edb8  addic 5, 3, 224
  046edbc  addic 4, 4, 22752
  046edc0  ori 7, 5, 0
  046edc4  lfs 3, 224(3)
  046edc8  lfs 5, 0(4)
  046edcc  fmuls 3, 3, 5
  046edd0  lfs 5, 4(4)
  046edd4  addic 4, 4, 8
  046edd8  stfs 3, 224(3)
  046eddc  lfs 3, 4(5)
  046ede0  addic 3, 3, 8
  046ede4  fmuls 3, 3, 5
  046ede8  stfs 3, 4(5)
  046edec  addic 5, 5, 8
  046edf0  bdnz 0x46edc4
  046edf4  ori 3, 1, 0
  046edf8  mtctr 6
  046edfc  lfs 3, 224(3)
  046ee00  fadds 3, 4, 3
  046ee04  addic 3, 3, 16
  046ee08  lfs 4, 4(7)
  046ee0c  lfs 5, 8(7)
  046ee10  lfs 6, 12(7)
  046ee14  addic 7, 7, 16
  046ee18  fadds 3, 3, 4
  046ee1c  fadds 4, 3, 5
  046ee20  fadds 4, 4, 6
  046ee24  bdnz 0x46edfc
  046ee28  lis 3, 71
  046ee2c  addi 3, 3, -7164
  046ee30  lfs 3, 8(3)
  046ee34  fadds 4, 4, 3
  046ee38  fmadds 4, 4, 1, 2
  046ee3c  stfs 4, 72(31)
  046ee40  b 0x46f054
  046ee44  lwz 3, 168(4)
  046ee48  cmpwi 3, -1
  046ee4c  bt 2, 0x46f054
  046ee50  lis 5, 165
  046ee54  lwz 4, 168(4)
  046ee58  slwi 3, 3, 2
  046ee5c  addic 5, 5, 7136
  046ee60  extsw 3, 3
  046ee64  slwi 4, 4, 2
  046ee68  extsw 4, 4
  046ee6c  lwzx 3, 5, 3
  046ee70  lfs 1, 16(3)
  046ee74  stfs 1, 16(31)
  046ee78  lfs 2, 20(3)
  046ee7c  stfs 2, 20(31)
  046ee80  lfs 3, 24(3)
  046ee84  lwzx 4, 5, 4
  046ee88  stfs 3, 24(31)
  046ee8c  lfs 3, 28(3)
  046ee90  stfs 3, 28(31)
  046ee94  lfs 3, 32(4)
  046ee98  lfs 4, 36(4)
  046ee9c  lis 3, 71
  046eea0  fsubs 1, 3, 1
  046eea4  fsubs 2, 4, 2
  046eea8  addi 3, 3, -7164
  046eeac  lis 4, 115
  046eeb0  addic 4, 4, 22784
  046eeb4  fabs 3, 1
  046eeb8  fabs 5, 2
  046eebc  stfs 1, 144(1)
  046eec0  stfs 2, 148(1)
  046eec4  fsubs 1, 3, 5
  046eec8  stfs 1, 152(1)
  046eecc  lwz 5, 144(1)
  046eed0  lfs 4, 4(3)
  046eed4  lfs 1, 144(1)
  046eed8  lwz 3, 148(1)
  046eedc  lfs 2, 148(1)
  046eee0  lwz 6, 152(1)
  046eee4  rlwinm 3, 3, 3, 29, 29
  046eee8  fabs 6, 2
  046eeec  lfs 2, 152(1)
  046eef0  fabs 1, 1
  046eef4  rlwimi 3, 6, 2, 30, 30
  046eef8  fsub 7, 2, 4
  046eefc  rlwimi 3, 5, 4, 28, 28
  046ef00  fsub 8, 2, 4
  046ef04  ori 5, 4, 0
  046ef08  rlwimi 5, 3, 2, 26, 28
  046ef0c  slwi 3, 3, 2
  046ef10  clrldi 5, 5, 32
  046ef14  fsel 5, 7, 1, 5
  046ef18  lfsx 1, 4, 3
  046ef1c  lfs 2, 4(5)
  046ef20  fsel 3, 8, 6, 3
  046ef24  fcmpu 0, 5, 4
  046ef28  bt 1, 0x46ef30
  046ef2c  b 0x46f050
  046ef30  fsubs 6, 3, 5
  046ef34  fadds 3, 3, 5
  046ef38  addic 3, 1, 16
  046ef3c  li 6, 2
  046ef40  addic 4, 3, 176
  046ef44  addic 5, 3, 192
  046ef48  mtctr 6
  046ef4c  fdivs 3, 6, 3
  046ef50  fmuls 5, 3, 3
  046ef54  stfs 3, 204(1)
  046ef58  stfs 3, 196(1)
  046ef5c  stfs 3, 200(1)
  046ef60  stfs 3, 192(1)
  046ef64  lfs 7, 204(1)
  046ef68  lfs 8, 196(1)
  046ef6c  lfs 9, 200(1)
  046ef70  fmuls 6, 5, 5
  046ef74  fmuls 8, 8, 5
  046ef78  fmuls 7, 7, 6
  046ef7c  fmuls 3, 6, 6
  046ef80  fmuls 6, 9, 6
  046ef84  stfs 8, 196(1)
  046ef88  fmuls 5, 7, 5
  046ef8c  stfs 6, 200(1)
  046ef90  stfs 5, 204(1)
  046ef94  lfs 5, 176(3)
  046ef98  fmuls 5, 5, 3
  046ef9c  stfs 5, 192(3)
  046efa0  lfs 5, 4(4)
  046efa4  addic 3, 3, 8
  046efa8  addic 4, 4, 8
  046efac  fmuls 5, 5, 3
  046efb0  stfs 5, 4(5)
  046efb4  addic 5, 5, 8
  046efb8  bdnz 0x46ef94
  046efbc  li 5, 4
  046efc0  ori 3, 1, 0
  046efc4  mtctr 5
  046efc8  lis 4, 115
  046efcc  addic 5, 3, 192
  046efd0  addic 4, 4, 22752
  046efd4  ori 7, 5, 0
  046efd8  lfs 3, 192(3)
  046efdc  lfs 5, 0(4)
  046efe0  fmuls 3, 3, 5
  046efe4  lfs 5, 4(4)
  046efe8  addic 4, 4, 8
  046efec  stfs 3, 192(3)
  046eff0  lfs 3, 4(5)
  046eff4  addic 3, 3, 8
  046eff8  fmuls 3, 3, 5
  046effc  stfs 3, 4(5)
  046f000  addic 5, 5, 8
  046f004  bdnz 0x46efd8
  046f008  ori 3, 1, 0
  046f00c  mtctr 6
  046f010  lfs 3, 192(3)
  046f014  fadds 3, 4, 3
  046f018  lfs 4, 4(7)
  046f01c  addic 3, 3, 16
  046f020  lfs 5, 8(7)
  046f024  lfs 6, 12(7)
  046f028  addic 7, 7, 16
  046f02c  fadds 3, 3, 4
  046f030  fadds 4, 3, 5
  046f034  fadds 4, 4, 6
  046f038  bdnz 0x46f010
  046f03c  lis 3, 71
  046f040  addi 3, 3, -7164
  046f044  lfs 3, 8(3)
  046f048  fadds 4, 4, 3
  046f04c  fmadds 4, 4, 1, 2
  046f050  stfs 4, 72(31)
  046f054  li 3, 2
  046f058  lis 4, 135
  046f05c  lis 5, 114
  046f060  li 6, 128
  046f064  stb 3, 32(31)
  046f068  stb 30, 188(31)
  046f06c  li 7, 1
  046f070  lfs 1, 30672(4)
  046f074  li 3, -1
  046f078  lfs 2, -3052(5)
  046f07c  sth 6, 50(31)
  046f080  fmuls 1, 1, 2
  046f084  stw 7, 100(29)
  046f088  stw 3, 116(29)
  046f08c  stfs 1, 96(29)
  046f090  b 0x46f484
  046f094  addic 30, 30, 1
  046f098  addic 27, 27, 4
  046f09c  cmpwi 30, 5
  046f0a0  bt 0, 0x46ebdc
  046f0a4  b 0x46f484
  046f0a8  lbz 3, 188(31)
  046f0ac  slwi 4, 3, 2
  046f0b0  addc 4, 29, 4
  046f0b4  clrldi 4, 4, 32
  046f0b8  lwz 4, 148(4)
  046f0bc  cmpwi 4, -1
  046f0c0  bt 2, 0x46f0ec
  046f0c4  rlwinm 3, 3, 2, 22, 29
  046f0c8  addic 5, 29, 120
  046f0cc  addc 4, 29, 3
  046f0d0  ori 3, 31, 0
  046f0d4  clrldi 4, 4, 32
  046f0d8  lwz 4, 148(4)
  046f0dc  extsw 4, 4
  046f0e0  bl 0x46dcc8
  046f0e4  cmpwi 3, 0
  046f0e8  bt 2, 0x46f484
  046f0ec  li 3, 3
  046f0f0  li 4, -1
  046f0f4  stb 3, 32(31)
  046f0f8  stw 4, 228(29)
  046f0fc  b 0x46f484
  046f100  lis 3, 71
  046f104  lis 30, 114
  046f108  addi 4, 3, -7164
  046f10c  lis 3, 135
  046f110  lis 28, 114
  046f114  addic 5, 29, 108
  046f118  lfs 28, 12(4)
  046f11c  lfs 2, 30680(3)
  046f120  lfs 27, 4(4)
  046f124  fmuls 2, 2, 28
  046f128  lfs 3, -3048(30)
  046f12c  lfs 26, 16(4)
  046f130  addic 3, 31, 68
  046f134  lfs 4, -3052(28)
  046f138  fmr 1, 27
  046f13c  fmuls 4, 4, 26
  046f140  fmuls 2, 2, 3
  046f144  fmr 3, 2
  046f148  bl 0x10a2e0
  046f14c  nop
  046f150  lis 4, 135
  046f154  lfs 2, -3048(30)
  046f158  addic 3, 31, 64
  046f15c  lfs 4, -3052(28)
  046f160  addic 5, 29, 112
  046f164  fmuls 4, 4, 26
  046f168  lfs 1, 30688(4)
  046f16c  fmuls 3, 1, 28
  046f170  fmr 1, 27
  046f174  fmuls 2, 3, 2
  046f178  fmr 3, 2
  046f17c  bl 0x10a2e0
  046f180  nop
  046f184  lis 3, 151
  046f188  addic 3, 3, -25376
  046f18c  lwz 4, 764(3)
  046f190  cmpw 4, 31
  046f194  bf 2, 0x46f484
  046f198  lhz 3, 782(3)
  046f19c  cmpwi 3, 0
  046f1a0  bf 2, 0x46f484
  046f1a4  lbz 3, 188(31)
  046f1a8  slwi 3, 3, 2
  046f1ac  addc 3, 29, 3
  046f1b0  clrldi 3, 3, 32
  046f1b4  lwz 3, 208(3)
  046f1b8  cmpwi 3, 1
  046f1bc  bf 2, 0x46f1d4
  046f1c0  li 3, 8
  046f1c4  li 4, 3017
  046f1c8  bl 0x11aeec
  046f1cc  nop
  046f1d0  b 0x46f1e4
  046f1d4  li 3, 8
  046f1d8  li 4, 3017
  046f1dc  bl 0x11aeec
  046f1e0  nop
  046f1e4  lis 3, 150
  046f1e8  addic 3, 3, 19008
  046f1ec  lwz 3, 164(3)
  046f1f0  rlwinm 3, 3, 0, 27, 27
  046f1f4  cmpwi 3, 0
  046f1f8  bt 2, 0x46f484
  046f1fc  lis 3, 161
  046f200  lwz 3, 24360(3)
  046f204  cmpwi 3, 8
  046f208  bf 2, 0x46f484
  046f20c  addic 3, 31, 16
  046f210  lfs 1, 72(31)
  046f214  li 5, 0
  046f218  bl 0xaa368
  046f21c  nop
  046f220  li 3, 4
  046f224  li 4, 1
  046f228  stb 3, 32(31)
  046f22c  stw 4, 100(29)
  046f230  b 0x46f484
  046f234  bl 0x85a10
  046f238  nop
  046f23c  cmpwi 3, 0
  046f240  bf 2, 0x46f484
  046f244  li 3, 5
  046f248  stb 3, 32(31)
  046f24c  b 0x46f484
  046f250  lis 3, 151
  046f254  addic 3, 3, -25376
  046f258  lwz 4, 8332(3)
  046f25c  cmpwi 4, 3
  046f260  bt 2, 0x46f270
  046f264  lwz 4, 8324(3)
  046f268  cmpwi 4, 28
  046f26c  bf 2, 0x46f280
  046f270  lwz 4, 1272(3)
  046f274  cmpw 4, 31
  046f278  bt 2, 0x46f298
  046f27c  b 0x46f2a4
  046f280  lhz 4, 782(3)
  046f284  cmpwi 4, 0
  046f288  bf 2, 0x46f2a4
  046f28c  lwz 4, 764(3)
  046f290  cmpw 4, 31
  046f294  bf 2, 0x46f2a4
  046f298  li 4, 4
  046f29c  sth 4, 498(3)
  046f2a0  sth 4, 500(3)
  046f2a4  lbz 4, 188(31)
  046f2a8  ori 3, 31, 0
  046f2ac  addic 5, 29, 120
  046f2b0  slwi 4, 4, 2
  046f2b4  addc 4, 29, 4
  046f2b8  clrldi 4, 4, 32
  046f2bc  lwz 4, 168(4)
  046f2c0  extsw 4, 4
  046f2c4  bl 0x46dcc8
  046f2c8  cmpwi 3, 0
  046f2cc  bt 2, 0x46f484
  046f2d0  li 3, 6
  046f2d4  stb 3, 32(31)
  046f2d8  b 0x46f484
  046f2dc  lis 3, 71
  046f2e0  lis 30, 114
  046f2e4  addi 4, 3, -7164
  046f2e8  lis 3, 135
  046f2ec  lis 28, 114
  046f2f0  addic 5, 29, 108
  046f2f4  lfs 28, 12(4)
  046f2f8  lfs 2, 30680(3)
  046f2fc  lfs 27, 4(4)
  046f300  fmuls 2, 2, 28
  046f304  lfs 3, -3048(30)
  046f308  lfs 26, 16(4)
  046f30c  addic 3, 31, 68
  046f310  lfs 4, -3052(28)
  046f314  fmr 1, 27
  046f318  fmuls 4, 4, 26
  046f31c  fmuls 2, 2, 3
  046f320  fmr 3, 2
  046f324  bl 0x10a2e0
  046f328  nop
  046f32c  lis 4, 135
  046f330  lfs 2, -3048(30)
  046f334  addic 3, 31, 64
  046f338  lfs 4, -3052(28)
  046f33c  addic 5, 29, 112
  046f340  fmuls 4, 4, 26
  046f344  lfs 1, 30688(4)
  046f348  fmuls 3, 1, 28
  046f34c  fmr 1, 27
  046f350  fmuls 2, 3, 2
  046f354  fmr 3, 2
  046f358  bl 0x10a2e0
  046f35c  nop
  046f360  lbz 3, 188(31)
  046f364  lfs 1, 16(31)
  046f368  slwi 4, 3, 2
  046f36c  lfs 2, 20(31)
  046f370  addc 4, 29, 4
  046f374  clrldi 4, 4, 32
  046f378  lwz 4, 188(4)
  046f37c  cmpwi 4, -1
  046f380  bt 2, 0x46f3e4
  046f384  lis 4, 151
  046f388  addic 4, 4, -25376
  046f38c  lfs 3, 132(4)
  046f390  lfs 4, 128(4)
  046f394  fsubs 3, 2, 3
  046f398  fsubs 4, 1, 4
  046f39c  lfs 5, 24(31)
  046f3a0  lfs 6, 136(4)
  046f3a4  fsubs 5, 5, 6
  046f3a8  lis 4, 71
  046f3ac  fmuls 3, 3, 3
  046f3b0  addi 4, 4, -7164
  046f3b4  fmadds 3, 4, 4, 3
  046f3b8  lfs 4, 20(4)
  046f3bc  fmadds 3, 5, 5, 3
  046f3c0  fsqrts 3, 3
  046f3c4  fcmpu 0, 3, 4
  046f3c8  cror 6, 0, 2
  046f3cc  bt 6, 0x46f3e4
  046f3d0  li 3, 7
  046f3d4  li 4, 1
  046f3d8  stb 3, 32(31)
  046f3dc  stw 4, 100(29)
  046f3e0  b 0x46f484
  046f3e4  rlwinm 3, 3, 2, 22, 29
  046f3e8  addc 3, 29, 3
  046f3ec  clrldi 3, 3, 32
  046f3f0  lwz 3, 188(3)
  046f3f4  cmpwi 3, -1
  046f3f8  bf 2, 0x46f484
  046f3fc  lis 3, 151
  046f400  addic 3, 3, -25376
  046f404  lfs 3, 132(3)
  046f408  lfs 4, 128(3)
  046f40c  fsubs 2, 2, 3
  046f410  fsubs 1, 1, 4
  046f414  lis 3, 71
  046f418  addi 3, 3, -7164
  046f41c  fmuls 2, 2, 2
  046f420  fmadds 1, 1, 1, 2
  046f424  lfs 2, 24(3)
  046f428  fsqrts 1, 1
  046f42c  fcmpu 0, 1, 2
  046f430  cror 6, 0, 2
  046f434  bt 6, 0x46f484
  046f438  li 3, 1
  046f43c  stb 3, 32(31)
  046f440  b 0x46f484
  046f444  lbz 4, 188(31)
  046f448  ori 3, 31, 0
  046f44c  slwi 4, 4, 2
  046f450  addic 5, 29, 120
  046f454  addc 4, 29, 4
  046f458  clrldi 4, 4, 32
  046f45c  lwz 4, 188(4)
  046f460  extsw 4, 4
  046f464  bl 0x46dcc8
  046f468  cmpwi 3, 0
  046f46c  bt 2, 0x46f484
  046f470  li 3, 1
  046f474  li 4, 0
  046f478  stb 3, 32(31)
  046f47c  sth 4, 50(31)
  046f480  stw 4, 148(31)
  046f484  lis 3, 71
  046f488  lis 4, 135
  046f48c  addi 3, 3, -7164
  046f490  lis 30, 114
  046f494  lis 5, 135
  046f498  lfs 28, 12(3)
  046f49c  lfs 2, 30656(4)
  046f4a0  ori 3, 31, 0
  046f4a4  lwz 28, 120(31)
  046f4a8  fmuls 2, 2, 28
  046f4ac  lfs 3, -3052(30)
  046f4b0  addic 4, 28, 236
  046f4b4  lfs 1, 30652(5)
  046f4b8  addic 5, 28, 232
  046f4bc  fmuls 2, 2, 3
  046f4c0  bl 0x116a68
  046f4c4  nop
  046f4c8  lis 3, 135
  046f4cc  lis 6, 135
  046f4d0  lfs 3, -3052(30)
  046f4d4  lis 7, 135
  046f4d8  addic 4, 28, 240
  046f4dc  addic 5, 28, 244
  046f4e0  lfs 1, 30664(3)
  046f4e4  lfs 2, 30668(6)
  046f4e8  ori 3, 31, 0
  046f4ec  fmuls 4, 1, 28
  046f4f0  fmuls 5, 2, 28
  046f4f4  lfs 1, 30660(7)
  046f4f8  fmuls 2, 4, 3
  046f4fc  fmuls 3, 5, 3
  046f500  bl 0x116b70
  046f504  nop
  046f508  lfs 1, 16(31)
  046f50c  lfs 2, 20(31)
  046f510  addic 3, 29, 32
  046f514  fsubs 1, 1, 31
  046f518  lfs 3, 24(31)
  046f51c  fsubs 2, 2, 30
  046f520  lfs 4, 28(31)
  046f524  fsubs 3, 3, 29
  046f528  addic 4, 1, 128
  046f52c  stfs 4, 140(1)
  046f530  addic 5, 1, 112
  046f534  addic 6, 31, 64
  046f538  stfs 1, 128(1)
  046f53c  stfs 2, 132(1)
  046f540  stfs 3, 136(1)
  046f544  bl 0x112900
  046f548  nop
  046f54c  ld 0, 448(1)
  046f550  mtlr 0
  046f554  lfd 26, 384(1)
  046f558  lfd 27, 392(1)
  046f55c  lfd 28, 400(1)
  046f560  lfd 29, 408(1)
  046f564  lfd 30, 416(1)
  046f568  lfd 31, 424(1)
  046f56c  ld 25, 328(1)
  046f570  ld 26, 336(1)
  046f574  ld 27, 344(1)
  046f578  ld 28, 352(1)
  046f57c  ld 29, 360(1)
  046f580  ld 30, 368(1)
  046f584  ld 31, 376(1)
  046f588  addi 1, 1, 432
  046f58c  blr
