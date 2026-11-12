# game/space.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_SPACE:   # 0x15da00, 0x14 bytes
  015da00  lis 3, 115
  015da04  lis 4, 1
  015da08  addic 3, 3, 7036
  015da0c  stw 4, 72(3)
  015da10  blr

UpdateMoby_Spaceship:   # 0x15da58, 0x588 bytes
  015da58  stdu 1, -160(1)
  015da5c  mflr 0
  015da60  std 0, 176(1)
  015da64  std 31, 152(1)
  015da68  ori 31, 3, 0
  015da6c  std 30, 144(1)
  015da70  lbz 4, 32(31)
  015da74  lwz 30, 120(31)
  015da78  cmpwi 4, 42
  015da7c  std 29, 136(1)
  015da80  lhz 3, 52(31)
  015da84  bt 2, 0x15de94
  015da88  lbz 3, 49(31)
  015da8c  cmpwi 3, 0
  015da90  bt 2, 0x15dbd4
  015da94  lbz 3, 188(31)
  015da98  addic 4, 3, 2
  015da9c  clrlwi 3, 4, 24
  015daa0  addic 3, 3, -128
  015daa4  stb 4, 188(31)
  015daa8  bl 0x502730
  015daac  nop
  015dab0  lis 3, 22
  015dab4  addi 29, 3, -9696
  015dab8  lfs 2, 0(29)
  015dabc  lfs 3, 4(29)
  015dac0  lfs 4, 8(29)
  015dac4  fmadds 1, 1, 2, 3
  015dac8  lfs 5, 12(29)
  015dacc  li 4, 533
  015dad0  fsubs 2, 4, 1
  015dad4  fsubs 3, 5, 1
  015dad8  lfs 5, 16(29)
  015dadc  fsub 4, 1, 2
  015dae0  fsel 1, 4, 2, 1
  015dae4  lfs 2, 20(29)
  015dae8  fsub 4, 3, 1
  015daec  fsel 1, 4, 3, 1
  015daf0  lfs 3, 24(29)
  015daf4  lfs 4, 28(29)
  015daf8  lfs 7, 32(29)
  015dafc  lhz 3, 166(31)
  015db00  subc 3, 4, 3
  015db04  fmuls 6, 1, 1
  015db08  cntlzw 3, 3
  015db0c  ori 4, 31, 0
  015db10  sldi 3, 3, 58
  015db14  sradi 5, 3, 63
  015db18  lis 3, 112
  015db1c  fmuls 8, 6, 1
  015db20  addic 3, 3, 31960
  015db24  fmuls 9, 6, 8
  015db28  fmadds 1, 8, 5, 1
  015db2c  fmuls 5, 6, 9
  015db30  fmadds 1, 9, 2, 1
  015db34  fmuls 2, 6, 5
  015db38  fmadds 1, 5, 3, 1
  015db3c  fmadds 1, 2, 4, 1
  015db40  fmuls 1, 1, 7
  015db44  fctiwz 1, 1
  015db48  stfd 1, 112(1)
  015db4c  lwz 6, 116(1)
  015db50  addic 6, 6, 150
  015db54  slwi 7, 6, 8
  015db58  srawi 8, 6, 1
  015db5c  or 9, 6, 7
  015db60  or 7, 8, 7
  015db64  slwi 6, 6, 16
  015db68  subc 7, 7, 9
  015db6c  and 5, 5, 7
  015db70  addc 5, 9, 5
  015db74  or 5, 5, 6
  015db78  stw 5, 144(31)
  015db7c  bl 0x6d7e0
  015db80  nop
  015db84  lis 3, 149
  015db88  lfs 1, 20(31)
  015db8c  lfs 2, 16(31)
  015db90  addic 3, 3, 5056
  015db94  lfs 3, 324(3)
  015db98  lfs 4, 320(3)
  015db9c  fsubs 1, 1, 3
  015dba0  fsubs 2, 2, 4
  015dba4  fmuls 1, 1, 1
  015dba8  fmadds 1, 2, 2, 1
  015dbac  lfs 2, 36(29)
  015dbb0  fsqrts 1, 1
  015dbb4  fcmpu 0, 1, 2
  015dbb8  cror 6, 1, 2
  015dbbc  bt 6, 0x15dbd4
  015dbc0  lis 3, 112
  015dbc4  ori 4, 31, 0
  015dbc8  addic 3, 3, 31848
  015dbcc  bl 0x6d720
  015dbd0  nop
  015dbd4  lhz 3, 12(30)
  015dbd8  cmpwi 3, 0
  015dbdc  bt 2, 0x15dcc4
  015dbe0  lis 4, 150
  015dbe4  lis 5, 115
  015dbe8  addic 4, 4, 17776
  015dbec  addic 5, 5, 7264
  015dbf0  lhz 4, 38(4)
  015dbf4  lfs 1, 212(31)
  015dbf8  extsh 4, 4
  015dbfc  lfs 2, 208(31)
  015dc00  sldi 4, 4, 4
  015dc04  addc 4, 5, 4
  015dc08  clrldi 4, 4, 32
  015dc0c  lfs 3, 4(4)
  015dc10  lfs 4, 0(4)
  015dc14  fmuls 1, 1, 3
  015dc18  lfs 5, 196(31)
  015dc1c  fmuls 2, 2, 3
  015dc20  lfs 6, 192(31)
  015dc24  lfs 7, 8(4)
  015dc28  lfs 8, 228(31)
  015dc2c  lfs 9, 216(31)
  015dc30  lis 4, 151
  015dc34  lfs 10, 224(31)
  015dc38  fmuls 3, 9, 3
  015dc3c  lfs 9, 200(31)
  015dc40  addic 4, 4, -25376
  015dc44  fmadds 1, 5, 4, 1
  015dc48  fmadds 2, 6, 4, 2
  015dc4c  lfs 5, 20(31)
  015dc50  lfs 6, 232(31)
  015dc54  fmadds 3, 9, 4, 3
  015dc58  lfs 4, 16(31)
  015dc5c  fmadds 1, 8, 7, 1
  015dc60  fmadds 2, 10, 7, 2
  015dc64  lfs 8, 132(4)
  015dc68  lfs 9, 24(31)
  015dc6c  lfs 10, 128(4)
  015dc70  fmadds 3, 6, 7, 3
  015dc74  fadds 1, 1, 5
  015dc78  fadds 2, 2, 4
  015dc7c  lfs 4, 136(4)
  015dc80  fadds 3, 3, 9
  015dc84  fsubs 1, 1, 8
  015dc88  fsubs 2, 2, 10
  015dc8c  lis 4, 22
  015dc90  fsubs 3, 3, 4
  015dc94  fmuls 1, 1, 1
  015dc98  addi 4, 4, -9696
  015dc9c  fmadds 1, 2, 2, 1
  015dca0  lfs 2, 40(4)
  015dca4  fmadds 1, 3, 3, 1
  015dca8  fsqrts 1, 1
  015dcac  fcmpu 0, 1, 2
  015dcb0  cror 6, 0, 2
  015dcb4  bt 6, 0x15ddc8
  015dcb8  li 3, 0
  015dcbc  sth 3, 12(30)
  015dcc0  b 0x15ddc8
  015dcc4  lis 4, 151
  015dcc8  lfs 1, 20(31)
  015dccc  addic 4, 4, -25376
  015dcd0  lis 5, 22
  015dcd4  lfs 3, 132(4)
  015dcd8  lfs 2, 16(31)
  015dcdc  fsubs 5, 1, 3
  015dce0  lfs 4, 128(4)
  015dce4  fsubs 6, 2, 4
  015dce8  addi 5, 5, -9696
  015dcec  fmuls 5, 5, 5
  015dcf0  fmadds 5, 6, 6, 5
  015dcf4  lfs 6, 44(5)
  015dcf8  fsqrts 5, 5
  015dcfc  fcmpu 0, 5, 6
  015dd00  cror 6, 1, 2
  015dd04  bt 6, 0x15ddc8
  015dd08  lis 5, 150
  015dd0c  lis 6, 115
  015dd10  addic 5, 5, 17776
  015dd14  addic 6, 6, 7264
  015dd18  lhz 5, 38(5)
  015dd1c  lfs 5, 196(31)
  015dd20  extsh 5, 5
  015dd24  lfs 6, 192(31)
  015dd28  sldi 5, 5, 4
  015dd2c  addc 5, 6, 5
  015dd30  clrldi 5, 5, 32
  015dd34  lfs 7, 0(5)
  015dd38  lfs 8, 4(5)
  015dd3c  fmadds 1, 5, 7, 1
  015dd40  lfs 5, 8(5)
  015dd44  fmadds 2, 6, 7, 2
  015dd48  lfs 6, 228(31)
  015dd4c  lfs 9, 216(31)
  015dd50  lfs 10, 224(31)
  015dd54  fmuls 9, 9, 8
  015dd58  lfs 11, 212(31)
  015dd5c  lfs 12, 200(31)
  015dd60  lfs 13, 208(31)
  015dd64  lfs 0, 232(31)
  015dd68  fmadds 1, 6, 5, 1
  015dd6c  fmadds 2, 10, 5, 2
  015dd70  fmadds 6, 12, 7, 9
  015dd74  lfs 7, 24(31)
  015dd78  fmadds 1, 11, 8, 1
  015dd7c  fmadds 2, 13, 8, 2
  015dd80  fmadds 5, 0, 5, 6
  015dd84  lfs 6, 136(4)
  015dd88  fsubs 1, 1, 3
  015dd8c  fsubs 2, 2, 4
  015dd90  lis 4, 22
  015dd94  fadds 3, 5, 7
  015dd98  addi 4, 4, -9696
  015dd9c  fmuls 1, 1, 1
  015dda0  fsubs 3, 3, 6
  015dda4  fmadds 1, 2, 2, 1
  015dda8  lfs 2, 48(4)
  015ddac  fmadds 1, 3, 3, 1
  015ddb0  fsqrts 1, 1
  015ddb4  fcmpu 0, 1, 2
  015ddb8  cror 6, 1, 2
  015ddbc  bt 6, 0x15ddc8
  015ddc0  li 3, 1
  015ddc4  sth 3, 12(30)
  015ddc8  cmpwi 1, 3, 0
  015ddcc  lhz 3, 52(31)
  015ddd0  clrlwi 3, 3, 31
  015ddd4  cmpwi 3, 0
  015ddd8  bt 2, 0x15dde8
  015dddc  li 3, 0
  015dde0  sth 3, 12(30)
  015dde4  b 0x15dfc4
  015dde8  bt 6, 0x15dfc4
  015ddec  li 4, 21476
  015ddf0  li 3, 2
  015ddf4  bl 0x11aeec
  015ddf8  nop
  015ddfc  lis 4, 150
  015de00  addic 4, 4, 19008
  015de04  lwz 4, 164(4)
  015de08  rlwinm 4, 4, 0, 27, 27
  015de0c  cmpwi 4, 0
  015de10  bt 2, 0x15dfc4
  015de14  cmpwi 3, 0
  015de18  bt 2, 0x15dfc4
  015de1c  lis 3, 151
  015de20  lwz 3, -25488(3)
  015de24  cmpwi 3, 10
  015de28  bf 2, 0x15de68
  015de2c  lis 3, 151
  015de30  addic 3, 3, -25376
  015de34  lbz 3, 8356(3)
  015de38  cmpwi 3, 1
  015de3c  bf 2, 0x15de68
  015de40  li 5, 42
  015de44  lhz 6, 52(31)
  015de48  li 3, 9
  015de4c  li 4, 0
  015de50  stb 5, 32(31)
  015de54  ori 5, 6, 65
  015de58  sth 5, 52(31)
  015de5c  bl 0x167e60
  015de60  nop
  015de64  b 0x15dfc4
  015de68  li 3, 2
  015de6c  bl 0x11b0b0
  015de70  nop
  015de74  lis 4, 150
  015de78  lis 3, 161
  015de7c  li 5, 1
  015de80  addic 4, 4, 17776
  015de84  li 6, 0
  015de88  stw 5, 23668(3)
  015de8c  sth 6, 40(4)
  015de90  b 0x15dfc4
  015de94  lis 4, 161
  015de98  lwz 4, 1800(4)
  015de9c  cmpwi 4, 2
  015dea0  bt 2, 0x15dfc4
  015dea4  lis 30, 151
  015dea8  addic 30, 30, -16400
  015deac  lbz 4, 72(30)
  015deb0  cmpwi 4, 0
  015deb4  bf 2, 0x15dee8
  015deb8  lis 4, 151
  015debc  addic 4, 4, -16064
  015dec0  lbz 4, 28(4)
  015dec4  cmpwi 4, 0
  015dec8  bt 2, 0x15dee8
  015decc  li 3, 4
  015ded0  li 4, 0
  015ded4  bl 0x167e60
  015ded8  nop
  015dedc  li 3, 1
  015dee0  stb 3, 72(30)
  015dee4  b 0x15dfc4
  015dee8  lbz 4, 73(30)
  015deec  cmpwi 4, 0
  015def0  bf 2, 0x15df24
  015def4  lis 4, 151
  015def8  addic 4, 4, -13812
  015defc  lbz 4, 11(4)
  015df00  cmpwi 4, 0
  015df04  bt 2, 0x15df24
  015df08  li 3, 5
  015df0c  li 4, 0
  015df10  bl 0x167e60
  015df14  nop
  015df18  li 3, 1
  015df1c  stb 3, 73(30)
  015df20  b 0x15dfc4
  015df24  lbz 4, 74(30)
  015df28  cmpwi 4, 0
  015df2c  bf 2, 0x15df5c
  015df30  lis 4, 151
  015df34  addic 4, 4, -13812
  015df38  lbz 4, 11(4)
  015df3c  cmpwi 4, 0
  015df40  bt 2, 0x15df5c
  015df44  li 3, 11
  015df48  bl 0x168dec
  015df4c  nop
  015df50  li 3, 1
  015df54  stb 3, 74(30)
  015df58  b 0x15dfc4
  015df5c  lbz 4, 75(30)
  015df60  cmpwi 4, 0
  015df64  bf 2, 0x15df98
  015df68  lis 4, 151
  015df6c  addic 4, 4, -13812
  015df70  lbz 4, 11(4)
  015df74  cmpwi 4, 0
  015df78  bt 2, 0x15df98
  015df7c  li 3, 6
  015df80  li 4, 0
  015df84  bl 0x167e60
  015df88  nop
  015df8c  li 3, 1
  015df90  stb 3, 75(30)
  015df94  b 0x15dfc4
  015df98  li 6, 0
  015df9c  li 4, -66
  015dfa0  lis 5, 150
  015dfa4  and 3, 3, 4
  015dfa8  lis 4, 161
  015dfac  stb 6, 32(31)
  015dfb0  addic 5, 5, 17776
  015dfb4  li 6, 1
  015dfb8  sth 3, 52(31)
  015dfbc  stw 6, 23668(4)
  015dfc0  sth 6, 40(5)
  015dfc4  ld 0, 176(1)
  015dfc8  mtlr 0
  015dfcc  ld 29, 136(1)
  015dfd0  ld 30, 144(1)
  015dfd4  ld 31, 152(1)
  015dfd8  addi 1, 1, 160
  015dfdc  blr

Space_SetCutsceneCamera:   # 0x15dfe0, 0x2e0 bytes
  015dfe0  stdu 1, -336(1)
  015dfe4  mflr 0
  015dfe8  std 0, 352(1)
  015dfec  stfd 24, 272(1)
  015dff0  stfd 25, 280(1)
  015dff4  stfd 26, 288(1)
  015dff8  stfd 27, 296(1)
  015dffc  stfd 28, 304(1)
  015e000  stfd 29, 312(1)
  015e004  stfd 30, 320(1)
  015e008  stfd 31, 328(1)
  015e00c  lis 3, 150
  015e010  lis 4, 150
  015e014  addic 3, 3, -12976
  015e018  addic 4, 4, -12416
  015e01c  lwz 5, 56(3)
  015e020  lwz 3, 84(3)
  015e024  slwi 5, 5, 1
  015e028  sldi 5, 5, 4
  015e02c  std 29, 248(1)
  015e030  addc 3, 3, 5
  015e034  clrldi 29, 3, 32
  015e038  std 30, 256(1)
  015e03c  lfs 1, 28(29)
  015e040  lbz 30, 12(29)
  015e044  std 31, 264(1)
  015e048  std 28, 240(1)
  015e04c  stfs 1, 176(4)
  015e050  bl 0x668d0
  015e054  nop
  015e058  lis 31, 149
  015e05c  lfs 1, 0(29)
  015e060  addic 28, 1, 112
  015e064  addic 31, 31, 5056
  015e068  lis 4, 101
  015e06c  li 5, 64
  015e070  ori 3, 28, 0
  015e074  addic 4, 4, 14168
  015e078  stfs 1, 320(31)
  015e07c  lfs 1, 4(29)
  015e080  stfs 1, 324(31)
  015e084  lfs 1, 8(29)
  015e088  stfs 1, 328(31)
  015e08c  lfs 1, 12(29)
  015e090  stfs 1, 332(31)
  015e094  bl 0x5c5ad0
  015e098  nop
  015e09c  lfs 1, 16(29)
  015e0a0  li 4, 0
  015e0a4  bl 0x5dd914
  015e0a8  nop
  015e0ac  lfs 2, 16(29)
  015e0b0  fmr 31, 1
  015e0b4  li 4, 1
  015e0b8  fmr 1, 2
  015e0bc  bl 0x5dd914
  015e0c0  nop
  015e0c4  lfs 2, 20(29)
  015e0c8  fmr 30, 1
  015e0cc  li 4, 0
  015e0d0  fmr 1, 2
  015e0d4  bl 0x5dd914
  015e0d8  nop
  015e0dc  lfs 2, 20(29)
  015e0e0  fmr 29, 1
  015e0e4  li 4, 1
  015e0e8  fmr 1, 2
  015e0ec  bl 0x5dd914
  015e0f0  nop
  015e0f4  lfs 2, 24(29)
  015e0f8  fmr 28, 1
  015e0fc  li 4, 0
  015e100  fmr 1, 2
  015e104  bl 0x5dd914
  015e108  nop
  015e10c  lfs 2, 24(29)
  015e110  fmr 27, 1
  015e114  li 4, 1
  015e118  fmr 1, 2
  015e11c  bl 0x5dd914
  015e120  nop
  015e124  fmr 26, 1
  015e128  addic 29, 1, 176
  015e12c  fmuls 25, 29, 27
  015e130  lis 4, 115
  015e134  ori 3, 29, 0
  015e138  addic 4, 4, 19200
  015e13c  li 5, 64
  015e140  fmuls 24, 26, 29
  015e144  bl 0x5c5ad0
  015e148  nop
  015e14c  fmuls 1, 30, 27
  015e150  fmuls 2, 30, 26
  015e154  ori 3, 28, 0
  015e158  fmuls 3, 31, 27
  015e15c  ori 4, 29, 0
  015e160  fmuls 6, 26, 31
  015e164  li 5, 64
  015e168  fmuls 4, 28, 26
  015e16c  fmuls 5, 28, 27
  015e170  fneg 7, 29
  015e174  fmuls 8, 28, 31
  015e178  fmuls 9, 30, 28
  015e17c  fmsubs 1, 31, 24, 1
  015e180  fmadds 2, 31, 25, 2
  015e184  fmadds 3, 30, 24, 3
  015e188  fmsubs 6, 30, 25, 6
  015e18c  stfs 4, 176(1)
  015e190  stfs 5, 180(1)
  015e194  stfs 7, 184(1)
  015e198  stfs 8, 200(1)
  015e19c  stfs 9, 216(1)
  015e1a0  stfs 1, 192(1)
  015e1a4  stfs 2, 196(1)
  015e1a8  stfs 3, 208(1)
  015e1ac  stfs 6, 212(1)
  015e1b0  bl 0x5c5ad0
  015e1b4  nop
  015e1b8  lfs 6, 144(1)
  015e1bc  lis 3, 151
  015e1c0  lfs 1, 112(1)
  015e1c4  fneg 7, 6
  015e1c8  fneg 8, 1
  015e1cc  lfs 4, 148(1)
  015e1d0  lfs 1, 116(1)
  015e1d4  addic 3, 3, -16268
  015e1d8  fneg 9, 4
  015e1dc  lfs 2, 152(1)
  015e1e0  fneg 10, 1
  015e1e4  lfs 1, 120(1)
  015e1e8  fneg 11, 2
  015e1ec  lfs 5, 128(1)
  015e1f0  fneg 12, 1
  015e1f4  stfs 5, 880(31)
  015e1f8  lfs 3, 132(1)
  015e1fc  lfs 1, 136(1)
  015e200  stfs 7, 848(31)
  015e204  stfs 8, 864(31)
  015e208  stfs 3, 884(31)
  015e20c  stfs 9, 852(31)
  015e210  stfs 10, 868(31)
  015e214  lbz 3, 4(3)
  015e218  stfs 11, 856(31)
  015e21c  stfs 12, 872(31)
  015e220  cmpwi 3, 0
  015e224  stfs 1, 888(31)
  015e228  bt 2, 0x15e27c
  015e22c  fmuls 7, 4, 1
  015e230  fmuls 8, 2, 3
  015e234  li 3, 0
  015e238  fmuls 2, 2, 5
  015e23c  fmuls 1, 6, 1
  015e240  fmuls 3, 6, 3
  015e244  fmuls 4, 4, 5
  015e248  stw 3, 876(31)
  015e24c  fneg 5, 7
  015e250  fneg 6, 8
  015e254  fneg 2, 2
  015e258  fneg 1, 1
  015e25c  fneg 3, 3
  015e260  fneg 4, 4
  015e264  fsubs 5, 5, 6
  015e268  fsubs 1, 2, 1
  015e26c  fsubs 2, 3, 4
  015e270  stfs 5, 864(31)
  015e274  stfs 1, 868(31)
  015e278  stfs 2, 872(31)
  015e27c  ori 3, 30, 0
  015e280  ld 0, 352(1)
  015e284  mtlr 0
  015e288  lfd 24, 272(1)
  015e28c  lfd 25, 280(1)
  015e290  lfd 26, 288(1)
  015e294  lfd 27, 296(1)
  015e298  lfd 28, 304(1)
  015e29c  lfd 29, 312(1)
  015e2a0  lfd 30, 320(1)
  015e2a4  lfd 31, 328(1)
  015e2a8  ld 28, 240(1)
  015e2ac  ld 29, 248(1)
  015e2b0  ld 30, 256(1)
  015e2b4  ld 31, 264(1)
  015e2b8  addi 1, 1, 336
  015e2bc  blr

STUB_0015e2c0:   # 0x15e2c0, 0x4 bytes
  015e2c0  blr

Space_DisableShip:   # 0x15e2c4, 0x28 bytes
  015e2c4  lis 3, 150
  015e2c8  lwz 3, 17776(3)
  015e2cc  cmpwi 3, 0
  015e2d0  bt 2, 0x15e2e8
  015e2d4  li 4, 0
  015e2d8  lhz 5, 52(3)
  015e2dc  stw 4, 148(3)
  015e2e0  ori 4, 5, 3
  015e2e4  sth 4, 52(3)
  015e2e8  blr

SetupSpaceShipVars:   # 0x15e2ec, 0x114 bytes
  015e2ec  stdu 1, -128(1)
  015e2f0  mflr 0
  015e2f4  std 0, 144(1)
  015e2f8  lis 4, 165
  015e2fc  li 5, 1
  015e300  std 31, 120(1)
  015e304  lis 6, 150
  015e308  ori 31, 3, 0
  015e30c  stw 5, 25024(4)
  015e310  lwz 3, 17776(6)
  015e314  std 30, 112(1)
  015e318  cmpwi 3, 0
  015e31c  bt 2, 0x15e334
  015e320  lhz 5, 52(3)
  015e324  li 4, 0
  015e328  ori 5, 5, 3
  015e32c  stw 4, 148(3)
  015e330  sth 5, 52(3)
  015e334  lis 3, 151
  015e338  lwz 3, -25488(3)
  015e33c  cmpwi 3, 13
  015e340  bf 2, 0x15e37c
  015e344  lis 3, 150
  015e348  lis 4, 17310
  015e34c  lis 6, 16433
  015e350  addic 3, 3, 17776
  015e354  lis 5, 17384
  015e358  ori 4, 4, 23593
  015e35c  lis 7, 17425
  015e360  ori 6, 6, 18350
  015e364  ori 5, 5, 21627
  015e368  ori 7, 7, 11141
  015e36c  stw 4, 104(3)
  015e370  stw 6, 120(3)
  015e374  stw 5, 96(3)
  015e378  stw 7, 100(3)
  015e37c  lis 3, 150
  015e380  lhz 4, 166(31)
  015e384  lis 5, 112
  015e388  addic 30, 3, 17776
  015e38c  stw 31, 17776(3)
  015e390  addic 3, 4, -531
  015e394  lwz 6, 36(31)
  015e398  addic 4, 5, 31832
  015e39c  sth 3, 38(30)
  015e3a0  lhz 3, 52(31)
  015e3a4  stw 4, 116(31)
  015e3a8  rlwinm 5, 3, 0, 0, 29
  015e3ac  ori 3, 31, 0
  015e3b0  li 4, 1
  015e3b4  sth 5, 52(31)
  015e3b8  lwz 6, 16(6)
  015e3bc  li 5, 0
  015e3c0  stw 6, 148(31)
  015e3c4  bl 0xfdcf0
  015e3c8  nop
  015e3cc  lwz 3, 120(31)
  015e3d0  lwz 4, 0(3)
  015e3d4  stw 4, 48(30)
  015e3d8  lwz 4, 4(3)
  015e3dc  stw 4, 52(30)
  015e3e0  lwz 3, 8(3)
  015e3e4  stw 3, 56(30)
  015e3e8  ld 0, 144(1)
  015e3ec  mtlr 0
  015e3f0  ld 30, 112(1)
  015e3f4  ld 31, 120(1)
  015e3f8  addi 1, 1, 128
  015e3fc  blr

Space_EnableShip:   # 0x15e400, 0x2c bytes
  015e400  lis 3, 150
  015e404  lwz 3, 17776(3)
  015e408  cmpwi 3, 0
  015e40c  bt 2, 0x15e428
  015e410  lhz 4, 52(3)
  015e414  lwz 5, 36(3)
  015e418  rlwinm 4, 4, 0, 0, 29
  015e41c  lwz 5, 16(5)
  015e420  sth 4, 52(3)
  015e424  stw 5, 148(3)
  015e428  blr

PlaySpaceCutscene:   # 0x15e430, 0x3b8 bytes
  015e430  stdu 1, -176(1)
  015e434  mflr 0
  015e438  std 0, 192(1)
  015e43c  std 29, 152(1)
  015e440  std 30, 160(1)
  015e444  lis 29, 150
  015e448  std 27, 136(1)
  015e44c  ori 30, 3, 0
  015e450  lis 3, 161
  015e454  std 31, 168(1)
  015e458  li 27, 1
  015e45c  addic 31, 29, 17776
  015e460  li 6, -1
  015e464  std 28, 144(1)
  015e468  lis 5, 150
  015e46c  li 28, 0
  015e470  std 26, 128(1)
  015e474  stw 27, 1820(3)
  015e478  addic 26, 5, -12976
  015e47c  stw 30, 32(31)
  015e480  ori 3, 26, 0
  015e484  sth 6, 36(31)
  015e488  li 4, 0
  015e48c  stw 28, 8(31)
  015e490  li 5, 448
  015e494  bl 0x5001fc
  015e498  nop
  015e49c  lis 3, 162
  015e4a0  li 4, 0
  015e4a4  addic 3, 3, -16768
  015e4a8  li 5, 64
  015e4ac  bl 0x5001fc
  015e4b0  nop
  015e4b4  lis 3, 162
  015e4b8  li 4, 0
  015e4bc  addic 3, 3, -16704
  015e4c0  li 5, 64
  015e4c4  bl 0x5001fc
  015e4c8  nop
  015e4cc  bl 0x174bdc
  015e4d0  nop
  015e4d4  lis 3, 230
  015e4d8  lis 4, 161
  015e4dc  lis 6, 6
  015e4e0  addic 4, 4, 2264
  015e4e4  lis 8, 150
  015e4e8  lwz 7, -21916(3)
  015e4ec  lis 5, 32
  015e4f0  lis 9, 16256
  015e4f4  subc 6, 7, 6
  015e4f8  lwz 4, 64(4)
  015e4fc  lis 10, 150
  015e500  lis 7, 161
  015e504  addc 5, 4, 5
  015e508  stw 6, -21916(3)
  015e50c  li 11, 6
  015e510  stw 4, 88(26)
  015e514  li 3, 100
  015e518  stw 9, -12528(8)
  015e51c  li 4, 2
  015e520  stw 28, -12524(10)
  015e524  stw 5, 92(26)
  015e528  stw 11, 1800(7)
  015e52c  bl 0xb72b0
  015e530  nop
  015e534  lis 3, 151
  015e538  addic 3, 3, -25376
  015e53c  stb 27, 8357(3)
  015e540  bl 0x7d5c0
  015e544  nop
  015e548  lwz 4, 17776(29)
  015e54c  lis 3, 164
  015e550  lhz 5, 52(4)
  015e554  lwz 3, -28508(3)
  015e558  ori 5, 5, 1
  015e55c  sth 5, 52(4)
  015e560  lbz 4, 32(3)
  015e564  cmpwi 4, 255
  015e568  bt 2, 0x15e5b0
  015e56c  ori 4, 3, 0
  015e570  lbz 5, 32(4)
  015e574  rlwinm 5, 5, 0, 24, 24
  015e578  cmpwi 5, 0
  015e57c  bf 2, 0x15e5a0
  015e580  lhz 5, 166(3)
  015e584  cmpwi 5, 74
  015e588  cmpwi 1, 5, 203
  015e58c  bt 2, 0x15e594
  015e590  bf 6, 0x15e5a0
  015e594  lhz 5, 52(3)
  015e598  ori 5, 5, 128
  015e59c  sth 5, 52(3)
  015e5a0  lbz 4, 288(4)
  015e5a4  addic 3, 3, 256
  015e5a8  cmpwi 4, 255
  015e5ac  bf 2, 0x15e56c
  015e5b0  cmpwi 30, 0
  015e5b4  bf 2, 0x15e650
  015e5b8  lis 3, 151
  015e5bc  lhz 4, 38(31)
  015e5c0  extsh 31, 4
  015e5c4  cmpwi 1, 4, 1
  015e5c8  addic 5, 31, 1
  015e5cc  lwz 3, -25488(3)
  015e5d0  addic 31, 31, 6
  015e5d4  cmpwi 3, 10
  015e5d8  crnand 2, 2, 6
  015e5dc  bt 2, 0x15e600
  015e5e0  lis 6, 151
  015e5e4  addic 6, 6, -16064
  015e5e8  lbz 6, 6(6)
  015e5ec  cmpwi 6, 0
  015e5f0  bf 2, 0x15e600
  015e5f4  li 31, 11
  015e5f8  li 5, 0
  015e5fc  b 0x15e618
  015e600  cmpwi 3, 14
  015e604  bf 2, 0x15e618
  015e608  cmpwi 4, 2
  015e60c  bf 2, 0x15e618
  015e610  li 5, 8
  015e614  li 31, 14
  015e618  lis 3, 22
  015e61c  lis 4, 114
  015e620  addi 3, 3, -7124
  015e624  lfs 1, 0(3)
  015e628  lfs 2, -3056(4)
  015e62c  ori 3, 5, 0
  015e630  fmuls 1, 2, 1
  015e634  fctiwz 1, 1
  015e638  stfd 1, 112(1)
  015e63c  lwz 4, 116(1)
  015e640  extsw 4, 4
  015e644  bl 0xe06b0
  015e648  nop
  015e64c  b 0x15e768
  015e650  lhz 6, 38(31)
  015e654  li 4, 0
  015e658  lhz 3, 44(31)
  015e65c  lis 5, 151
  015e660  extsh 31, 6
  015e664  subc 4, 4, 3
  015e668  addic 7, 31, 3
  015e66c  cntlzw 4, 4
  015e670  subc 7, 7, 31
  015e674  lwz 5, -25488(5)
  015e678  sldi 8, 4, 58
  015e67c  addic 4, 31, 5
  015e680  sradi 8, 8, 63
  015e684  cmpwi 5, 10
  015e688  and 7, 8, 7
  015e68c  cmpwi 1, 6, 1
  015e690  cmpwi 6, 5, 14
  015e694  addc 31, 31, 7
  015e698  cmpwi 7, 6, 2
  015e69c  bf 2, 0x15e6e8
  015e6a0  bf 6, 0x15e6e8
  015e6a4  lis 5, 151
  015e6a8  addic 5, 5, -16064
  015e6ac  lbz 5, 6(5)
  015e6b0  cmpwi 5, 0
  015e6b4  bf 2, 0x15e6e8
  015e6b8  li 4, 0
  015e6bc  li 5, 10
  015e6c0  subc 4, 4, 3
  015e6c4  li 31, 9
  015e6c8  cntlzw 4, 4
  015e6cc  subc 5, 5, 31
  015e6d0  sldi 6, 4, 58
  015e6d4  li 4, 4
  015e6d8  sradi 6, 6, 63
  015e6dc  and 5, 6, 5
  015e6e0  addc 31, 31, 5
  015e6e4  b 0x15e71c
  015e6e8  bf 26, 0x15e71c
  015e6ec  bf 30, 0x15e71c
  015e6f0  li 4, 0
  015e6f4  li 5, 13
  015e6f8  subc 4, 4, 3
  015e6fc  li 31, 12
  015e700  cntlzw 4, 4
  015e704  subc 5, 5, 31
  015e708  sldi 6, 4, 58
  015e70c  li 4, 9
  015e710  sradi 6, 6, 63
  015e714  and 5, 6, 5
  015e718  addc 31, 31, 5
  015e71c  ori 5, 3, 0
  015e720  li 3, 0
  015e724  cmpwi 5, 0
  015e728  bf 2, 0x15e754
  015e72c  lis 3, 22
  015e730  lis 5, 114
  015e734  addi 3, 3, -7124
  015e738  lfs 1, 0(3)
  015e73c  lfs 2, -3056(5)
  015e740  fmuls 1, 2, 1
  015e744  fctiwz 1, 1
  015e748  stfd 1, 112(1)
  015e74c  lwz 3, 116(1)
  015e750  extsw 3, 3
  015e754  ori 5, 3, 0
  015e758  ori 3, 4, 0
  015e75c  ori 4, 5, 0
  015e760  bl 0xe06b0
  015e764  nop
  015e768  lis 3, 0
  015e76c  lis 4, 150
  015e770  ori 3, 3, 40000
  015e774  addc 5, 31, 3
  015e778  addic 31, 4, 14024
  015e77c  li 3, 0
  015e780  stw 5, 28(31)
  015e784  bl 0xe07f8
  015e788  nop
  015e78c  lhz 3, 102(31)
  015e790  cmpwi 3, 3
  015e794  bt 2, 0x15e7b8
  015e798  bl 0x15be68
  015e79c  nop
  015e7a0  li 3, 0
  015e7a4  bl 0x503078
  015e7a8  nop
  015e7ac  lhz 3, 102(31)
  015e7b0  cmpwi 3, 3
  015e7b4  bf 2, 0x15e798
  015e7b8  bl 0x11c830
  015e7bc  nop
  015e7c0  ld 0, 192(1)
  015e7c4  mtlr 0
  015e7c8  ld 26, 128(1)
  015e7cc  ld 27, 136(1)
  015e7d0  ld 28, 144(1)
  015e7d4  ld 29, 152(1)
  015e7d8  ld 30, 160(1)
  015e7dc  ld 31, 168(1)
  015e7e0  addi 1, 1, 176
  015e7e4  blr

Space_StartTakeoffCutscene:   # 0x15e7e8, 0xb0 bytes
  015e7e8  stdu 1, -112(1)
  015e7ec  mflr 0
  015e7f0  std 0, 128(1)
  015e7f4  lis 3, 151
  015e7f8  lis 6, 161
  015e7fc  addic 4, 3, -25376
  015e800  li 3, 1
  015e804  li 5, 1
  015e808  li 8, 1
  015e80c  lwz 7, 8872(4)
  015e810  stw 5, 1820(6)
  015e814  extsw 9, 7
  015e818  subc 8, 8, 7
  015e81c  subc 9, 9, 3
  015e820  li 3, 0
  015e824  sradi 9, 9, 63
  015e828  and 5, 9, 8
  015e82c  addc 5, 7, 5
  015e830  stw 5, 8872(4)
  015e834  bl 0x11ce20
  015e838  nop
  015e83c  lis 3, 150
  015e840  addic 3, 3, 14024
  015e844  lhz 4, 102(3)
  015e848  cmpwi 4, 6
  015e84c  bt 2, 0x15e860
  015e850  cmpwi 4, 7
  015e854  bt 2, 0x15e860
  015e858  li 4, 5
  015e85c  sth 4, 102(3)
  015e860  bl 0x15be68
  015e864  nop
  015e868  bl 0x7b458
  015e86c  nop
  015e870  li 3, 0
  015e874  bl 0x15e430
  015e878  lis 3, 150
  015e87c  li 4, 0
  015e880  addic 3, 3, 17776
  015e884  sth 4, 44(3)
  015e888  ld 0, 128(1)
  015e88c  mtlr 0
  015e890  addi 1, 1, 112
  015e894  blr

StartLeaveLevelCutscene:   # 0x15e8a0, 0x1e4 bytes
  015e8a0  stdu 1, -160(1)
  015e8a4  mflr 0
  015e8a8  std 0, 176(1)
  015e8ac  lis 4, 161
  015e8b0  li 5, 1
  015e8b4  lis 7, 161
  015e8b8  std 29, 136(1)
  015e8bc  lis 6, 150
  015e8c0  lis 29, 150
  015e8c4  stw 5, 1820(4)
  015e8c8  li 8, 0
  015e8cc  li 4, 6
  015e8d0  lis 5, 150
  015e8d4  std 31, 152(1)
  015e8d8  addic 29, 29, 17776
  015e8dc  ori 31, 3, 0
  015e8e0  stw 4, 1800(7)
  015e8e4  li 3, -1
  015e8e8  lis 4, 16256
  015e8ec  stw 8, -12524(6)
  015e8f0  stw 4, -12528(5)
  015e8f4  stw 8, 32(29)
  015e8f8  std 30, 144(1)
  015e8fc  sth 3, 36(29)
  015e900  bl 0x174bdc
  015e904  nop
  015e908  lis 3, 230
  015e90c  lis 4, 161
  015e910  lis 6, 151
  015e914  addic 4, 4, 2264
  015e918  lis 8, 6
  015e91c  lwz 7, -21916(3)
  015e920  lis 30, 150
  015e924  lis 5, 32
  015e928  subc 7, 7, 8
  015e92c  lwz 4, 64(4)
  015e930  addic 30, 30, -12976
  015e934  lwz 6, -25488(6)
  015e938  stw 7, -21916(3)
  015e93c  addc 3, 4, 5
  015e940  cmpw 6, 31
  015e944  stw 4, 88(30)
  015e948  stw 3, 92(30)
  015e94c  bf 2, 0x15ea40
  015e950  li 3, 8
  015e954  bl 0x15e430
  015e958  lhz 3, 38(29)
  015e95c  lis 4, 115
  015e960  lis 5, 22
  015e964  extsh 3, 3
  015e968  addic 4, 4, 7552
  015e96c  sldi 3, 3, 2
  015e970  addi 5, 5, -5992
  015e974  li 7, -3056
  015e978  lwzx 6, 4, 3
  015e97c  extsw 6, 6
  015e980  std 6, 112(1)
  015e984  lvlx 2, 3, 4
  015e988  lis 3, 150
  015e98c  lfs 1, 0(5)
  015e990  lis 4, 114
  015e994  vcfsx 2, 2, 0
  015e998  li 6, 0
  015e99c  lwz 3, 27368(3)
  015e9a0  lvlx 3, 0, 5
  015e9a4  lfs 2, -3056(4)
  015e9a8  lfd 3, 112(1)
  015e9ac  subc 3, 6, 3
  015e9b0  vspltw 3, 3, 0
  015e9b4  fcfid 3, 3
  015e9b8  lvlx 4, 7, 4
  015e9bc  cntlzw 3, 3
  015e9c0  li 5, 96
  015e9c4  vaddfp 2, 2, 3
  015e9c8  vspltisw 3, -1
  015e9cc  sldi 3, 3, 58
  015e9d0  li 6, 80
  015e9d4  sradi 3, 3, 63
  015e9d8  subc 5, 5, 6
  015e9dc  vslw 3, 3, 3
  015e9e0  frsp 3, 3
  015e9e4  and 3, 3, 5
  015e9e8  addc 31, 6, 3
  015e9ec  li 3, 52
  015e9f0  vmaddfp 2, 4, 2, 3
  015e9f4  fadds 1, 3, 1
  015e9f8  vctsxs 2, 2, 0
  015e9fc  fmuls 1, 2, 1
  015ea00  fctiwz 1, 1
  015ea04  vspltw 2, 2, 0
  015ea08  stfd 1, 112(1)
  015ea0c  lwz 4, 116(1)
  015ea10  stvewx 2, 3, 30
  015ea14  divw 4, 4, 31
  015ea18  extsw 3, 4
  015ea1c  stw 4, 60(30)
  015ea20  bl 0xe07f8
  015ea24  nop
  015ea28  lwz 3, 52(30)
  015ea2c  divw 4, 3, 31
  015ea30  mullw 4, 4, 31
  015ea34  subc 3, 3, 4
  015ea38  stw 3, 56(30)
  015ea3c  b 0x15ea68
  015ea40  li 3, 0
  015ea44  ori 4, 31, 0
  015ea48  bl 0xe8aa4
  015ea4c  nop
  015ea50  lis 3, 161
  015ea54  li 4, 3
  015ea58  li 5, -1
  015ea5c  stw 31, 1796(3)
  015ea60  stw 4, 32(29)
  015ea64  sth 5, 36(29)
  015ea68  ld 0, 176(1)
  015ea6c  mtlr 0
  015ea70  ld 29, 136(1)
  015ea74  ld 30, 144(1)
  015ea78  ld 31, 152(1)
  015ea7c  addi 1, 1, 160
  015ea80  blr

ChangeLevel:   # 0x15ea84, 0x20 bytes
  015ea84  lis 4, 161
  015ea88  li 5, 1
  015ea8c  lis 6, 161
  015ea90  lis 7, 161
  015ea94  stw 5, 1792(4)
  015ea98  stw 3, 1796(6)
  015ea9c  stw 5, 1820(7)
  015eaa0  blr

Space_StartLevelArrival:   # 0x15eaa4, 0x120 bytes
  015eaa4  stdu 1, -112(1)
  015eaa8  mflr 0
  015eaac  std 0, 128(1)
  015eab0  lis 3, 150
  015eab4  li 4, 1
  015eab8  addic 3, 3, 17776
  015eabc  lhz 5, 42(3)
  015eac0  sth 4, 44(3)
  015eac4  cmpwi 5, 0
  015eac8  bt 2, 0x15ead4
  015eacc  li 4, 0
  015ead0  sth 4, 42(3)
  015ead4  lis 4, 151
  015ead8  lwz 4, -25488(4)
  015eadc  cmpwi 4, 1
  015eae0  cmpwi 1, 4, 19
  015eae4  cmpwi 6, 4, 14
  015eae8  cmpwi 7, 4, 0
  015eaec  bf 2, 0x15eb14
  015eaf0  lis 4, 151
  015eaf4  addic 4, 4, -13812
  015eaf8  lbz 4, 3(4)
  015eafc  cmpwi 4, 0
  015eb00  bf 2, 0x15eb14
  015eb04  lis 3, 161
  015eb08  li 4, 0
  015eb0c  stw 4, 1800(3)
  015eb10  b 0x15ebb4
  015eb14  bt 30, 0x15eb34
  015eb18  bf 26, 0x15eb30
  015eb1c  lis 4, 151
  015eb20  addic 4, 4, -16400
  015eb24  lbz 4, 104(4)
  015eb28  cmpwi 4, 0
  015eb2c  bt 2, 0x15eb34
  015eb30  bf 5, 0x15eb44
  015eb34  lis 3, 161
  015eb38  li 4, 0
  015eb3c  stw 4, 1800(3)
  015eb40  b 0x15ebb4
  015eb44  lis 4, 161
  015eb48  li 6, 6
  015eb4c  li 5, 0
  015eb50  li 7, -1
  015eb54  lis 8, 150
  015eb58  lis 9, 16256
  015eb5c  stw 6, 1800(4)
  015eb60  stw 5, 32(3)
  015eb64  sth 7, 36(3)
  015eb68  stw 9, -12528(8)
  015eb6c  bl 0x174bdc
  015eb70  nop
  015eb74  lis 4, 161
  015eb78  lis 3, 230
  015eb7c  lis 6, 150
  015eb80  addic 4, 4, 2264
  015eb84  addic 6, 6, -12976
  015eb88  lis 5, 6
  015eb8c  lwz 8, -21916(3)
  015eb90  lis 7, 32
  015eb94  lwz 4, 64(4)
  015eb98  subc 5, 8, 5
  015eb9c  stw 4, 88(6)
  015eba0  addc 4, 4, 7
  015eba4  stw 5, -21916(3)
  015eba8  li 3, 8
  015ebac  stw 4, 92(6)
  015ebb0  bl 0x15e430
  015ebb4  ld 0, 128(1)
  015ebb8  mtlr 0
  015ebbc  addi 1, 1, 112
  015ebc0  blr

Space_DrawShipEngineGlow:   # 0x15ebd0, 0x3bc bytes
  015ebd0  stdu 1, -416(1)
  015ebd4  mflr 0
  015ebd8  std 0, 432(1)
  015ebdc  stfd 19, 312(1)
  015ebe0  stfd 20, 320(1)
  015ebe4  stfd 21, 328(1)
  015ebe8  stfd 22, 336(1)
  015ebec  stfd 23, 344(1)
  015ebf0  stfd 24, 352(1)
  015ebf4  stfd 25, 360(1)
  015ebf8  stfd 26, 368(1)
  015ebfc  stfd 27, 376(1)
  015ec00  stfd 28, 384(1)
  015ec04  stfd 29, 392(1)
  015ec08  stfd 30, 400(1)
  015ec0c  stfd 31, 408(1)
  015ec10  std 26, 264(1)
  015ec14  std 31, 304(1)
  015ec18  lis 26, 150
  015ec1c  std 27, 272(1)
  015ec20  ori 31, 3, 0
  015ec24  addic 26, 26, 17776
  015ec28  std 30, 296(1)
  015ec2c  lis 27, 22
  015ec30  lis 30, 115
  015ec34  addi 27, 27, -5180
  015ec38  addic 30, 30, 7616
  015ec3c  lhz 3, 38(26)
  015ec40  cmpwi 3, 1
  015ec44  std 29, 288(1)
  015ec48  std 28, 280(1)
  015ec4c  std 25, 256(1)
  015ec50  cmpwi 1, 3, 2
  015ec54  bf 2, 0x15ec64
  015ec58  lis 30, 115
  015ec5c  addic 30, 30, 7744
  015ec60  b 0x15ec70
  015ec64  bf 6, 0x15ec70
  015ec68  lis 30, 115
  015ec6c  addic 30, 30, 7776
  015ec70  li 3, 5
  015ec74  bl 0x685c4
  015ec78  nop
  015ec7c  std 3, 232(1)
  015ec80  li 3, 0
  015ec84  lis 9, 0
  015ec88  li 4, 0
  015ec8c  li 5, 1
  015ec90  li 6, 1
  015ec94  li 7, 1
  015ec98  li 8, 0
  015ec9c  ori 9, 9, 65424
  015eca0  bl 0x502fd4
  015eca4  nop
  015eca8  std 3, 240(1)
  015ecac  li 4, 0
  015ecb0  li 3, 0
  015ecb4  li 5, 0
  015ecb8  li 6, 0
  015ecbc  li 7, 0
  015ecc0  li 8, 0
  015ecc4  bl 0x502f08
  015ecc8  nop
  015eccc  std 3, 224(1)
  015ecd0  li 3, 0
  015ecd4  li 4, 2
  015ecd8  li 5, 0
  015ecdc  li 6, 1
  015ece0  li 7, 128
  015ece4  bl 0x502ea8
  015ece8  nop
  015ecec  std 3, 248(1)
  015ecf0  lfs 30, 0(31)
  015ecf4  ori 4, 1, 0
  015ecf8  lis 5, 115
  015ecfc  lfs 29, 4(31)
  015ed00  lis 6, 115
  015ed04  lfs 28, 8(31)
  015ed08  li 9, 2
  015ed0c  lhz 3, 38(26)
  015ed10  addic 5, 5, 7564
  015ed14  addic 6, 6, 7568
  015ed18  addic 7, 4, 192
  015ed1c  addic 8, 4, 196
  015ed20  mtctr 9
  015ed24  lfs 1, 0(5)
  015ed28  lfs 2, 0(6)
  015ed2c  stfs 1, 192(4)
  015ed30  lfs 1, 8(5)
  015ed34  stfs 2, 196(4)
  015ed38  lfs 2, 8(6)
  015ed3c  addic 5, 5, 16
  015ed40  stfs 1, 8(7)
  015ed44  addic 6, 6, 16
  015ed48  stfs 2, 8(8)
  015ed4c  addic 7, 7, 16
  015ed50  addic 8, 8, 16
  015ed54  addic 4, 4, 16
  015ed58  bdnz 0x15ed24
  015ed5c  lis 28, 115
  015ed60  extsh 3, 3
  015ed64  lfs 31, 0(27)
  015ed68  addic 28, 28, 7596
  015ed6c  sldi 3, 3, 2
  015ed70  li 29, 0
  015ed74  lwzx 3, 28, 3
  015ed78  cmpwi 3, 0
  015ed7c  bf 1, 0x15ef2c
  015ed80  lbz 25, 188(31)
  015ed84  lhz 3, 178(31)
  015ed88  cmpwi 3, 0
  015ed8c  bt 2, 0x15eda4
  015ed90  extsh 3, 3
  015ed94  bl 0xfc620
  015ed98  nop
  015ed9c  addc 25, 25, 3
  015eda0  extsw 25, 25
  015eda4  ori 3, 25, 0
  015eda8  bl 0x502730
  015edac  nop
  015edb0  lfs 6, 4(27)
  015edb4  lfs 5, 12(30)
  015edb8  lis 4, 150
  015edbc  lhz 3, 166(31)
  015edc0  li 5, 533
  015edc4  lfs 2, 0(30)
  015edc8  fmuls 10, 5, 6
  015edcc  lfs 3, 4(30)
  015edd0  subc 3, 5, 3
  015edd4  lfs 4, 8(30)
  015edd8  lis 6, 48
  015eddc  lwz 4, 17776(4)
  015ede0  lis 7, 32
  015ede4  cntlzw 3, 3
  015ede8  ori 5, 6, 32768
  015edec  ori 6, 7, 22704
  015edf0  sldi 3, 3, 58
  015edf4  lfs 5, 192(4)
  015edf8  subc 5, 5, 6
  015edfc  lfs 6, 208(4)
  015ee00  sradi 3, 3, 63
  015ee04  lfs 7, 224(4)
  015ee08  fmuls 1, 1, 10
  015ee0c  lfs 8, 196(4)
  015ee10  and 3, 3, 5
  015ee14  lfs 9, 212(4)
  015ee18  lis 5, 115
  015ee1c  lfs 10, 228(4)
  015ee20  addc 3, 6, 3
  015ee24  lfs 11, 200(4)
  015ee28  li 6, 4
  015ee2c  lfs 12, 216(4)
  015ee30  rlwimi 3, 25, 24, 0, 7
  015ee34  lfs 13, 232(4)
  015ee38  ori 25, 1, 0
  015ee3c  lfs 0, 204(4)
  015ee40  addic 5, 5, 7808
  015ee44  lfs 27, 220(4)
  015ee48  mtctr 6
  015ee4c  lfs 26, 236(4)
  015ee50  addic 4, 1, 112
  015ee54  stw 3, 176(25)
  015ee58  lfs 25, 0(5)
  015ee5c  fmuls 25, 25, 1
  015ee60  addic 25, 25, 4
  015ee64  stfs 25, 0(4)
  015ee68  lfs 24, 4(5)
  015ee6c  fadds 25, 25, 2
  015ee70  fmuls 24, 24, 1
  015ee74  fadds 23, 24, 3
  015ee78  stfs 24, 4(4)
  015ee7c  lfs 24, 8(5)
  015ee80  fmuls 24, 24, 1
  015ee84  fmuls 22, 23, 6
  015ee88  fmuls 21, 23, 9
  015ee8c  fmuls 20, 23, 12
  015ee90  fadds 19, 24, 4
  015ee94  stfs 24, 8(4)
  015ee98  lfs 24, 12(5)
  015ee9c  fmadds 22, 5, 25, 22
  015eea0  fmadds 21, 8, 25, 21
  015eea4  fmadds 20, 11, 25, 20
  015eea8  fmadds 25, 0, 25, 24
  015eeac  addic 5, 5, 16
  015eeb0  fmadds 24, 7, 19, 22
  015eeb4  fmadds 22, 10, 19, 21
  015eeb8  fmadds 21, 13, 19, 20
  015eebc  fmadds 25, 26, 19, 25
  015eec0  fmadds 24, 30, 31, 24
  015eec4  fmadds 22, 29, 31, 22
  015eec8  fmadds 21, 28, 31, 21
  015eecc  fmadds 25, 27, 23, 25
  015eed0  stfs 24, 0(4)
  015eed4  stfs 22, 4(4)
  015eed8  stfs 21, 8(4)
  015eedc  stfs 25, 12(4)
  015eee0  addic 4, 4, 16
  015eee4  bdnz 0x15ee54
  015eee8  lis 4, 161
  015eeec  addic 3, 1, 112
  015eef0  addic 6, 4, 24396
  015eef4  li 4, 0
  015eef8  li 5, 0
  015eefc  li 7, 9
  015ef00  lwz 6, 28(6)
  015ef04  bl 0x72280
  015ef08  nop
  015ef0c  lhz 3, 38(26)
  015ef10  addic 29, 29, 1
  015ef14  addic 30, 30, 16
  015ef18  extsh 3, 3
  015ef1c  sldi 3, 3, 2
  015ef20  lwzx 3, 28, 3
  015ef24  cmpw 29, 3
  015ef28  bt 0, 0x15ed80
  015ef2c  ld 0, 432(1)
  015ef30  mtlr 0
  015ef34  lfd 19, 312(1)
  015ef38  lfd 20, 320(1)
  015ef3c  lfd 21, 328(1)
  015ef40  lfd 22, 336(1)
  015ef44  lfd 23, 344(1)
  015ef48  lfd 24, 352(1)
  015ef4c  lfd 25, 360(1)
  015ef50  lfd 26, 368(1)
  015ef54  lfd 27, 376(1)
  015ef58  lfd 28, 384(1)
  015ef5c  lfd 29, 392(1)
  015ef60  lfd 30, 400(1)
  015ef64  lfd 31, 408(1)
  015ef68  ld 25, 256(1)
  015ef6c  ld 26, 264(1)
  015ef70  ld 27, 272(1)
  015ef74  ld 28, 280(1)
  015ef78  ld 29, 288(1)
  015ef7c  ld 30, 296(1)
  015ef80  ld 31, 304(1)
  015ef84  addi 1, 1, 416
  015ef88  blr

Space_DrawTransitionOverlay:   # 0x15ef98, 0x6e8 bytes
  015ef98  stdu 1, -640(1)
  015ef9c  mflr 0
  015efa0  std 0, 656(1)
  015efa4  stfd 19, 536(1)
  015efa8  stfd 20, 544(1)
  015efac  stfd 21, 552(1)
  015efb0  stfd 22, 560(1)
  015efb4  stfd 23, 568(1)
  015efb8  stfd 24, 576(1)
  015efbc  stfd 25, 584(1)
  015efc0  stfd 26, 592(1)
  015efc4  stfd 27, 600(1)
  015efc8  stfd 28, 608(1)
  015efcc  stfd 29, 616(1)
  015efd0  stfd 30, 624(1)
  015efd4  stfd 31, 632(1)
  015efd8  lis 4, 161
  015efdc  lis 3, 161
  015efe0  addic 3, 3, 24396
  015efe4  lwz 4, 1800(4)
  015efe8  std 31, 528(1)
  015efec  cmpwi 4, 6
  015eff0  std 30, 520(1)
  015eff4  std 29, 512(1)
  015eff8  std 28, 504(1)
  015effc  std 27, 496(1)
  015f000  std 26, 488(1)
  015f004  std 25, 480(1)
  015f008  std 24, 472(1)
  015f00c  std 23, 464(1)
  015f010  std 22, 456(1)
  015f014  std 21, 448(1)
  015f018  std 20, 440(1)
  015f01c  std 19, 432(1)
  015f020  std 18, 424(1)
  015f024  std 17, 416(1)
  015f028  std 16, 408(1)
  015f02c  std 15, 400(1)
  015f030  std 14, 392(1)
  015f034  lwz 31, 28(3)
  015f038  bf 2, 0x15f074
  015f03c  lis 3, 150
  015f040  addic 3, 3, 17776
  015f044  lwz 3, 32(3)
  015f048  cmpwi 3, 4
  015f04c  bf 2, 0x15f074
  015f050  lis 3, 161
  015f054  addic 3, 3, 2264
  015f058  lwz 3, 72(3)
  015f05c  lwz 4, 28(3)
  015f060  lwz 31, 12(3)
  015f064  lwz 3, 0(4)
  015f068  clrldi 3, 3, 32
  015f06c  std 3, 360(1)
  015f070  b 0x15f084
  015f074  li 3, 19
  015f078  bl 0x685c4
  015f07c  nop
  015f080  std 3, 360(1)
  015f084  li 3, 0
  015f088  lis 9, 0
  015f08c  li 4, 0
  015f090  li 5, 1
  015f094  li 6, 1
  015f098  li 7, 1
  015f09c  li 8, 0
  015f0a0  ori 9, 9, 65424
  015f0a4  bl 0x502fd4
  015f0a8  nop
  015f0ac  std 3, 368(1)
  015f0b0  li 4, 0
  015f0b4  li 3, 0
  015f0b8  li 5, 0
  015f0bc  li 6, 0
  015f0c0  li 7, 0
  015f0c4  li 8, 0
  015f0c8  bl 0x502f08
  015f0cc  nop
  015f0d0  std 3, 352(1)
  015f0d4  li 3, 0
  015f0d8  li 4, 2
  015f0dc  li 5, 0
  015f0e0  li 6, 1
  015f0e4  li 7, 128
  015f0e8  bl 0x502ea8
  015f0ec  nop
  015f0f0  std 3, 376(1)
  015f0f4  lis 4, 115
  015f0f8  ori 3, 1, 0
  015f0fc  lis 5, 115
  015f100  li 8, 2
  015f104  li 30, 0
  015f108  addic 6, 3, 320
  015f10c  addic 7, 3, 324
  015f110  addic 4, 4, 7968
  015f114  addic 5, 5, 7972
  015f118  mtctr 8
  015f11c  lfs 1, 0(4)
  015f120  lfs 2, 0(5)
  015f124  stfs 1, 320(3)
  015f128  lfs 1, 8(4)
  015f12c  stfs 2, 324(3)
  015f130  addic 4, 4, 16
  015f134  lfs 2, 8(5)
  015f138  addic 3, 3, 16
  015f13c  stfs 1, 8(6)
  015f140  addic 5, 5, 16
  015f144  stfs 2, 8(7)
  015f148  addic 6, 6, 16
  015f14c  addic 7, 7, 16
  015f150  bdnz 0x15f11c
  015f154  lis 21, 150
  015f158  ori 29, 30, 0
  015f15c  addic 21, 21, 17776
  015f160  lwz 3, 84(21)
  015f164  addic 3, 3, -1
  015f168  cmpwi 3, 0
  015f16c  bf 1, 0x15f5f4
  015f170  lwz 3, 80(21)
  015f174  ori 26, 30, 0
  015f178  subc 28, 3, 29
  015f17c  ori 16, 26, 0
  015f180  addic 28, 28, 31
  015f184  clrlwi 27, 28, 27
  015f188  rlwinm 3, 28, 4, 23, 27
  015f18c  addic 4, 21, 704
  015f190  addic 24, 21, 192
  015f194  addc 5, 4, 3
  015f198  addc 3, 24, 3
  015f19c  clrldi 5, 5, 32
  015f1a0  clrldi 6, 3, 32
  015f1a4  addic 7, 27, 1
  015f1a8  lfs 30, 0(5)
  015f1ac  lfs 1, 0(6)
  015f1b0  rlwinm 7, 7, 4, 23, 27
  015f1b4  fsubs 31, 30, 1
  015f1b8  fsubs 30, 1, 30
  015f1bc  addc 4, 4, 7
  015f1c0  addc 7, 24, 7
  015f1c4  clrldi 4, 4, 32
  015f1c8  clrldi 8, 7, 32
  015f1cc  addc 3, 3, 16
  015f1d0  cmpwi 29, 0
  015f1d4  clrldi 3, 3, 32
  015f1d8  stfs 31, 112(1)
  015f1dc  lfs 3, 4(5)
  015f1e0  lfs 2, 4(6)
  015f1e4  fsubs 1, 3, 2
  015f1e8  fsubs 3, 2, 3
  015f1ec  stfs 1, 116(1)
  015f1f0  lfs 4, 8(5)
  015f1f4  lfs 5, 8(6)
  015f1f8  fsubs 2, 4, 5
  015f1fc  fsubs 4, 5, 4
  015f200  stfs 2, 120(1)
  015f204  lfs 5, 12(5)
  015f208  stfs 30, 128(1)
  015f20c  stfs 5, 124(1)
  015f210  stfs 3, 132(1)
  015f214  stfs 4, 136(1)
  015f218  lfs 5, 12(6)
  015f21c  stfs 5, 140(1)
  015f220  lfs 8, 0(4)
  015f224  lfs 6, 0(8)
  015f228  addc 5, 7, 16
  015f22c  fsubs 5, 8, 6
  015f230  fsubs 8, 6, 8
  015f234  addic 6, 27, 2
  015f238  clrldi 5, 5, 32
  015f23c  rlwinm 6, 6, 4, 23, 27
  015f240  addc 6, 6, 24
  015f244  addc 6, 6, 16
  015f248  clrldi 6, 6, 32
  015f24c  stfs 5, 144(1)
  015f250  lfs 9, 4(4)
  015f254  lfs 7, 4(8)
  015f258  fsubs 6, 9, 7
  015f25c  fsubs 9, 7, 9
  015f260  stfs 6, 148(1)
  015f264  lfs 10, 8(4)
  015f268  lfs 11, 8(8)
  015f26c  fsubs 7, 10, 11
  015f270  fsubs 10, 11, 10
  015f274  stfs 7, 152(1)
  015f278  lfs 11, 12(4)
  015f27c  stfs 8, 160(1)
  015f280  stfs 11, 156(1)
  015f284  stfs 9, 164(1)
  015f288  stfs 10, 168(1)
  015f28c  lfs 11, 12(8)
  015f290  stfs 11, 172(1)
  015f294  lfs 29, 0(5)
  015f298  lfs 11, 0(3)
  015f29c  lfs 28, 4(5)
  015f2a0  lfs 12, 4(3)
  015f2a4  lfs 0, 8(5)
  015f2a8  fsubs 11, 29, 11
  015f2ac  lfs 13, 8(3)
  015f2b0  fsubs 12, 28, 12
  015f2b4  lfs 27, 0(6)
  015f2b8  lfs 26, 4(6)
  015f2bc  fsubs 29, 27, 29
  015f2c0  lfs 27, 8(6)
  015f2c4  fsubs 13, 0, 13
  015f2c8  fsubs 28, 26, 28
  015f2cc  fsubs 0, 27, 0
  015f2d0  bf 2, 0x15f2e0
  015f2d4  fmr 29, 11
  015f2d8  fmr 28, 12
  015f2dc  fmr 0, 13
  015f2e0  fmuls 27, 13, 1
  015f2e4  fmuls 26, 11, 2
  015f2e8  lis 3, 22
  015f2ec  fmuls 25, 12, 31
  015f2f0  fmuls 24, 13, 3
  015f2f4  fmuls 22, 12, 30
  015f2f8  addi 3, 3, -4212
  015f2fc  fmuls 23, 11, 4
  015f300  lis 20, 115
  015f304  fmuls 21, 0, 6
  015f308  lis 18, 115
  015f30c  fmuls 20, 29, 7
  015f310  lis 19, 115
  015f314  fmuls 19, 28, 5
  015f318  addic 17, 1, 240
  015f31c  fmsubs 2, 12, 2, 27
  015f320  fmsubs 31, 13, 31, 26
  015f324  fmsubs 1, 11, 1, 25
  015f328  ori 25, 30, 0
  015f32c  fmsubs 4, 12, 4, 24
  015f330  ori 22, 1, 0
  015f334  fmsubs 3, 11, 3, 22
  015f338  addic 20, 20, 8000
  015f33c  fmsubs 12, 13, 30, 23
  015f340  addic 19, 19, 8004
  015f344  fmuls 11, 0, 9
  015f348  addic 14, 1, 176
  015f34c  fmuls 13, 29, 10
  015f350  addic 18, 18, 8024
  015f354  fmuls 30, 28, 8
  015f358  ori 15, 17, 0
  015f35c  fmsubs 7, 28, 7, 21
  015f360  fmsubs 5, 0, 5, 20
  015f364  fmsubs 6, 29, 6, 19
  015f368  stfs 2, 176(1)
  015f36c  stfs 31, 180(1)
  015f370  stfs 1, 184(1)
  015f374  lfs 31, 0(3)
  015f378  stw 30, 188(1)
  015f37c  fmsubs 1, 28, 10, 11
  015f380  stfs 4, 192(1)
  015f384  fmsubs 2, 0, 8, 13
  015f388  stfs 12, 196(1)
  015f38c  fmsubs 4, 29, 9, 30
  015f390  stfs 3, 200(1)
  015f394  stw 30, 204(1)
  015f398  stfs 7, 208(1)
  015f39c  stfs 5, 212(1)
  015f3a0  stfs 6, 216(1)
  015f3a4  stw 30, 220(1)
  015f3a8  stw 30, 236(1)
  015f3ac  stfs 1, 224(1)
  015f3b0  stfs 2, 228(1)
  015f3b4  stfs 4, 232(1)
  015f3b8  lfs 30, 4(3)
  015f3bc  lfs 29, 8(3)
  015f3c0  srawi 23, 25, 1
  015f3c4  subc 3, 29, 23
  015f3c8  addic 3, 3, 1
  015f3cc  extsw 3, 3
  015f3d0  bl 0x502730
  015f3d4  nop
  015f3d8  lhz 3, 38(21)
  015f3dc  fmuls 28, 1, 30
  015f3e0  extsh 3, 3
  015f3e4  sldi 3, 3, 3
  015f3e8  lwzx 4, 20, 3
  015f3ec  lwzx 5, 19, 3
  015f3f0  extsw 3, 4
  015f3f4  fmr 1, 28
  015f3f8  extsw 4, 5
  015f3fc  bl 0x5027bc
  015f400  nop
  015f404  stw 3, 304(22)
  015f408  lfs 4, 4(14)
  015f40c  lfs 3, 0(14)
  015f410  fmuls 1, 4, 4
  015f414  lfs 5, 8(14)
  015f418  lhz 3, 38(21)
  015f41c  extsh 3, 3
  015f420  sldi 3, 3, 2
  015f424  fmadds 1, 3, 3, 1
  015f428  lfsx 6, 18, 3
  015f42c  fmadds 2, 5, 5, 1
  015f430  fnmsubs 1, 28, 28, 29
  015f434  fsqrts 2, 2
  015f438  fmuls 1, 1, 6
  015f43c  fcmpu 0, 2, 31
  015f440  bf 2, 0x15f458
  015f444  fmr 3, 31
  015f448  lfs 4, 12(14)
  015f44c  fmr 2, 3
  015f450  fmr 1, 2
  015f454  b 0x15f46c
  015f458  fdivs 6, 1, 2
  015f45c  fmuls 2, 4, 6
  015f460  fmuls 1, 3, 6
  015f464  lfs 4, 12(14)
  015f468  fmuls 3, 5, 6
  015f46c  addc 3, 23, 27
  015f470  rlwinm 3, 3, 4, 23, 27
  015f474  addc 3, 3, 24
  015f478  addc 3, 3, 16
  015f47c  clrldi 3, 3, 32
  015f480  addic 25, 25, 1
  015f484  addic 14, 14, 16
  015f488  cmpwi 25, 4
  015f48c  lfs 5, 0(3)
  015f490  addic 22, 22, 4
  015f494  fadds 1, 1, 5
  015f498  stfs 1, 0(15)
  015f49c  lfs 1, 4(3)
  015f4a0  fadds 1, 2, 1
  015f4a4  stfs 1, 4(15)
  015f4a8  lfs 1, 8(3)
  015f4ac  stfs 4, 12(15)
  015f4b0  fadds 1, 3, 1
  015f4b4  stfs 1, 8(15)
  015f4b8  addic 15, 15, 16
  015f4bc  bt 0, 0x15f3c0
  015f4c0  addic 3, 1, 240
  015f4c4  li 4, 0
  015f4c8  li 5, 0
  015f4cc  ori 6, 31, 0
  015f4d0  li 7, 9
  015f4d4  bl 0x72280
  015f4d8  nop
  015f4dc  ori 25, 30, 0
  015f4e0  addic 23, 1, 112
  015f4e4  srawi 22, 25, 1
  015f4e8  subc 3, 29, 22
  015f4ec  addic 3, 3, 1
  015f4f0  extsw 3, 3
  015f4f4  bl 0x502730
  015f4f8  nop
  015f4fc  lfs 4, 4(23)
  015f500  lfs 3, 0(23)
  015f504  fmuls 2, 4, 4
  015f508  lfs 5, 8(23)
  015f50c  fmuls 1, 1, 30
  015f510  lhz 3, 38(21)
  015f514  extsh 3, 3
  015f518  sldi 3, 3, 2
  015f51c  fmadds 2, 3, 3, 2
  015f520  fnmsubs 1, 1, 1, 29
  015f524  lfsx 6, 18, 3
  015f528  fmadds 2, 5, 5, 2
  015f52c  fmuls 1, 1, 6
  015f530  fsqrts 2, 2
  015f534  fcmpu 0, 2, 31
  015f538  bf 2, 0x15f550
  015f53c  fmr 3, 31
  015f540  lfs 4, 12(23)
  015f544  fmr 2, 3
  015f548  fmr 1, 2
  015f54c  b 0x15f564
  015f550  fdivs 6, 1, 2
  015f554  fmuls 2, 4, 6
  015f558  fmuls 1, 3, 6
  015f55c  lfs 4, 12(23)
  015f560  fmuls 3, 5, 6
  015f564  addc 3, 22, 27
  015f568  rlwinm 3, 3, 4, 23, 27
  015f56c  addc 3, 3, 24
  015f570  addc 3, 3, 16
  015f574  clrldi 3, 3, 32
  015f578  addic 25, 25, 1
  015f57c  addic 23, 23, 16
  015f580  cmpwi 25, 4
  015f584  lfs 5, 0(3)
  015f588  fadds 1, 1, 5
  015f58c  stfs 1, 0(17)
  015f590  lfs 1, 4(3)
  015f594  fadds 1, 2, 1
  015f598  stfs 1, 4(17)
  015f59c  lfs 1, 8(3)
  015f5a0  stfs 4, 12(17)
  015f5a4  fadds 1, 3, 1
  015f5a8  stfs 1, 8(17)
  015f5ac  addic 17, 17, 16
  015f5b0  bt 0, 0x15f4e4
  015f5b4  addic 3, 1, 240
  015f5b8  li 4, 0
  015f5bc  li 5, 0
  015f5c0  ori 6, 31, 0
  015f5c4  li 7, 9
  015f5c8  bl 0x72280
  015f5cc  nop
  015f5d0  addic 26, 26, 1
  015f5d4  addic 16, 16, 512
  015f5d8  cmpwi 26, 2
  015f5dc  bt 0, 0x15f188
  015f5e0  lwz 3, 84(21)
  015f5e4  addic 29, 29, 1
  015f5e8  addic 3, 3, -1
  015f5ec  cmpw 29, 3
  015f5f0  bt 0, 0x15f170
  015f5f4  ld 0, 656(1)
  015f5f8  mtlr 0
  015f5fc  lfd 19, 536(1)
  015f600  lfd 20, 544(1)
  015f604  lfd 21, 552(1)
  015f608  lfd 22, 560(1)
  015f60c  lfd 23, 568(1)
  015f610  lfd 24, 576(1)
  015f614  lfd 25, 584(1)
  015f618  lfd 26, 592(1)
  015f61c  lfd 27, 600(1)
  015f620  lfd 28, 608(1)
  015f624  lfd 29, 616(1)
  015f628  lfd 30, 624(1)
  015f62c  lfd 31, 632(1)
  015f630  ld 14, 392(1)
  015f634  ld 15, 400(1)
  015f638  ld 16, 408(1)
  015f63c  ld 17, 416(1)
  015f640  ld 18, 424(1)
  015f644  ld 19, 432(1)
  015f648  ld 20, 440(1)
  015f64c  ld 21, 448(1)
  015f650  ld 22, 456(1)
  015f654  ld 23, 464(1)
  015f658  ld 24, 472(1)
  015f65c  ld 25, 480(1)
  015f660  ld 26, 488(1)
  015f664  ld 27, 496(1)
  015f668  ld 28, 504(1)
  015f66c  ld 29, 512(1)
  015f670  ld 30, 520(1)
  015f674  ld 31, 528(1)
  015f678  addi 1, 1, 640
  015f67c  blr

???_Space_TransitionDrawPass:   # 0x15f6d0, 0x5e0 bytes
  015f6d0  stdu 1, -368(1)
  015f6d4  mflr 0
  015f6d8  std 0, 384(1)
  015f6dc  lis 3, 22
  015f6e0  std 31, 360(1)
  015f6e4  li 4, 0
  015f6e8  addi 31, 3, -2432
  015f6ec  li 3, 1
  015f6f0  li 6, 1
  015f6f4  li 8, 0
  015f6f8  li 10, 1
  015f6fc  li 5, 128
  015f700  li 7, 0
  015f704  std 30, 352(1)
  015f708  std 29, 344(1)
  015f70c  std 28, 336(1)
  015f710  li 9, 1
  015f714  bl 0x502f7c
  015f718  nop
  015f71c  ori 4, 3, 0
  015f720  li 3, 22
  015f724  bl 0x174f80
  015f728  nop
  015f72c  lis 7, 165
  015f730  li 3, 0
  015f734  lis 9, 0
  015f738  li 4, 0
  015f73c  li 5, 1
  015f740  ld 7, 25032(7)
  015f744  li 6, 1
  015f748  li 8, 0
  015f74c  std 7, 296(1)
  015f750  li 7, 1
  015f754  ori 9, 9, 65424
  015f758  bl 0x502fd4
  015f75c  nop
  015f760  std 3, 304(1)
  015f764  li 4, 0
  015f768  li 3, 0
  015f76c  li 5, 0
  015f770  li 6, 0
  015f774  li 7, 0
  015f778  li 8, 0
  015f77c  bl 0x502f08
  015f780  nop
  015f784  std 3, 288(1)
  015f788  li 3, 0
  015f78c  li 4, 1
  015f790  li 5, 0
  015f794  li 6, 1
  015f798  li 7, 128
  015f79c  bl 0x502ea8
  015f7a0  nop
  015f7a4  lis 4, 115
  015f7a8  std 3, 312(1)
  015f7ac  li 5, 32
  015f7b0  addic 3, 1, 256
  015f7b4  addic 4, 4, 7320
  015f7b8  bl 0x5002cc
  015f7bc  nop
  015f7c0  lis 3, 151
  015f7c4  lfs 1, 0(31)
  015f7c8  lwz 3, -25488(3)
  015f7cc  cmpwi 3, 0
  015f7d0  bt 0, 0x15f7f0
  015f7d4  cmpwi 3, 18
  015f7d8  bt 1, 0x15f7f0
  015f7dc  lis 4, 115
  015f7e0  slwi 3, 3, 2
  015f7e4  addic 4, 4, 8144
  015f7e8  extsw 3, 3
  015f7ec  lfsx 1, 4, 3
  015f7f0  lis 7, -32640
  015f7f4  li 31, 4
  015f7f8  lis 3, 115
  015f7fc  lis 6, 165
  015f800  ori 8, 1, 0
  015f804  mtctr 31
  015f808  ori 7, 7, 32896
  015f80c  addic 4, 1, 176
  015f810  addic 3, 3, 8064
  015f814  addic 5, 6, 25056
  015f818  lfs 2, 0(3)
  015f81c  fmuls 2, 2, 1
  015f820  stfs 2, 0(4)
  015f824  lfs 3, 4(3)
  015f828  stw 7, 240(8)
  015f82c  fmuls 3, 3, 1
  015f830  addic 8, 8, 4
  015f834  stfs 3, 4(4)
  015f838  lfs 4, 8(3)
  015f83c  fmuls 4, 4, 1
  015f840  stfs 4, 8(4)
  015f844  lfs 5, 12(3)
  015f848  stfs 5, 12(4)
  015f84c  lfs 6, 25056(6)
  015f850  fadds 2, 2, 6
  015f854  addic 3, 3, 16
  015f858  stfs 2, 0(4)
  015f85c  lfs 2, 4(5)
  015f860  fadds 2, 3, 2
  015f864  stfs 2, 4(4)
  015f868  lfs 2, 8(5)
  015f86c  stfs 5, 12(4)
  015f870  fadds 2, 4, 2
  015f874  stfs 2, 8(4)
  015f878  addic 4, 4, 16
  015f87c  bdnz 0x15f818
  015f880  lis 28, 144
  015f884  lis 30, 144
  015f888  li 5, 5
  015f88c  addic 30, 30, -23532
  015f890  lwz 28, -23196(28)
  015f894  ori 3, 28, 0
  015f898  lwz 4, 8(30)
  015f89c  bl 0x4d83ec
  015f8a0  nop
  015f8a4  ori 3, 28, 0
  015f8a8  lwz 4, 8(30)
  015f8ac  li 5, 2
  015f8b0  bl 0x4d82b8
  015f8b4  nop
  015f8b8  lis 3, 144
  015f8bc  li 4, 96
  015f8c0  li 5, 16
  015f8c4  lwz 3, -23488(3)
  015f8c8  bl 0x4fe098
  015f8cc  nop
  015f8d0  ori 29, 3, 0
  015f8d4  ori 5, 1, 0
  015f8d8  ori 6, 29, 0
  015f8dc  ori 4, 1, 0
  015f8e0  ori 3, 1, 0
  015f8e4  mtctr 31
  015f8e8  lfs 1, 176(5)
  015f8ec  lwz 7, 240(3)
  015f8f0  stfs 1, 0(6)
  015f8f4  addic 3, 3, 4
  015f8f8  rlwinm 8, 7, 8, 8, 15
  015f8fc  lfs 1, 180(5)
  015f900  rlwimi 8, 7, 24, 0, 7
  015f904  stfs 1, 4(6)
  015f908  lfs 1, 184(5)
  015f90c  rlwimi 8, 7, 24, 16, 23
  015f910  stfs 1, 8(6)
  015f914  addic 5, 5, 16
  015f918  rlwimi 8, 7, 8, 24, 31
  015f91c  lfs 1, 256(4)
  015f920  stfs 1, 12(6)
  015f924  lfs 1, 260(4)
  015f928  stw 8, 20(6)
  015f92c  addic 4, 4, 8
  015f930  stfs 1, 16(6)
  015f934  addic 6, 6, 24
  015f938  bdnz 0x15f8e8
  015f93c  ld 3, 312(1)
  015f940  cmpdi 3, 0
  015f944  bt 2, 0x15f958
  015f948  ori 4, 3, 0
  015f94c  lwz 3, 8(30)
  015f950  bl 0x4d5fe4
  015f954  nop
  015f958  ld 3, 288(1)
  015f95c  addic 4, 1, 320
  015f960  addic 5, 1, 324
  015f964  bl 0x4d6704
  015f968  nop
  015f96c  lis 3, 161
  015f970  ld 4, 296(1)
  015f974  addic 3, 3, 2264
  015f978  sldi 5, 4, 5
  015f97c  sldi 4, 4, 2
  015f980  addc 5, 5, 4
  015f984  lwz 8, 72(3)
  015f988  lwz 3, 8(30)
  015f98c  li 4, 0
  015f990  lwz 6, 320(1)
  015f994  lwz 9, 324(1)
  015f998  lwz 8, 12(8)
  015f99c  ori 7, 9, 0
  015f9a0  addc 5, 8, 5
  015f9a4  clrldi 5, 5, 32
  015f9a8  bl 0x4d676c
  015f9ac  nop
  015f9b0  lwz 3, 8(30)
  015f9b4  bl 0x4d6948
  015f9b8  nop
  015f9bc  lwz 4, 8(30)
  015f9c0  lis 11, 4
  015f9c4  lis 3, 4
  015f9c8  lwz 5, 8(4)
  015f9cc  addic 6, 5, 8
  015f9d0  ori 3, 3, 5772
  015f9d4  stw 6, 8(4)
  015f9d8  lwz 4, 8(30)
  015f9dc  lis 6, 4
  015f9e0  ori 6, 6, 5952
  015f9e4  lwz 7, 8(4)
  015f9e8  addic 8, 7, 8
  015f9ec  stw 8, 8(4)
  015f9f0  lwz 4, 8(30)
  015f9f4  li 8, 6194
  015f9f8  lwz 9, 8(4)
  015f9fc  stw 6, 0(5)
  015fa00  addic 10, 9, 8
  015fa04  lis 6, 4
  015fa08  stw 10, 8(4)
  015fa0c  lwz 4, 8(30)
  015fa10  stw 8, 4(5)
  015fa14  ori 5, 6, 5956
  015fa18  li 6, 6178
  015fa1c  li 8, 6212
  015fa20  lwz 10, 8(4)
  015fa24  stw 5, 0(7)
  015fa28  addic 5, 10, 8
  015fa2c  stw 6, 4(7)
  015fa30  stw 8, 4(9)
  015fa34  ori 6, 11, 5964
  015fa38  lis 7, -32768
  015fa3c  lis 11, 4
  015fa40  stw 5, 8(4)
  015fa44  lwz 4, 8(30)
  015fa48  stw 6, 0(9)
  015fa4c  lis 5, 4
  015fa50  lwz 6, 1192(28)
  015fa54  ori 5, 5, 5760
  015fa58  subc 6, 29, 6
  015fa5c  lwz 8, 8(4)
  015fa60  addic 12, 6, 12
  015fa64  addic 9, 8, 8
  015fa68  stw 9, 8(4)
  015fa6c  or 4, 6, 7
  015fa70  lwz 9, 8(30)
  015fa74  stw 5, 0(10)
  015fa78  ori 5, 11, 5764
  015fa7c  stw 4, 4(10)
  015fa80  addic 4, 6, 20
  015fa84  or 11, 12, 7
  015fa88  lwz 6, 8(9)
  015fa8c  lis 10, 22
  015fa90  stw 5, 0(8)
  015fa94  or 4, 4, 7
  015fa98  addic 5, 6, 8
  015fa9c  stw 11, 4(8)
  015faa0  addi 7, 10, -2432
  015faa4  li 8, 64
  015faa8  stw 5, 8(9)
  015faac  li 5, 16
  015fab0  stw 3, 0(6)
  015fab4  li 9, 32
  015fab8  stw 4, 4(6)
  015fabc  li 4, 48
  015fac0  lwz 3, 8(30)
  015fac4  li 6, 112
  015fac8  lvx 2, 8, 7
  015facc  li 8, 128
  015fad0  lvx 3, 5, 7
  015fad4  lvx 4, 9, 7
  015fad8  lvx 5, 4, 7
  015fadc  li 5, 144
  015fae0  stvx 3, 6, 1
  015fae4  li 9, 160
  015fae8  lis 4, 68
  015faec  stvx 4, 8, 1
  015faf0  lwz 7, 8(3)
  015faf4  li 8, 8
  015faf8  ori 6, 4, 7932
  015fafc  stvx 5, 5, 1
  015fb00  addic 28, 7, 8
  015fb04  stvx 2, 9, 1
  015fb08  addic 4, 1, 112
  015fb0c  stw 6, 0(7)
  015fb10  stw 31, 4(7)
  015fb14  mtctr 8
  015fb18  stw 28, 8(3)
  015fb1c  lwz 5, 8(3)
  015fb20  lwz 7, 0(4)
  015fb24  addic 6, 5, 4
  015fb28  stw 6, 8(3)
  015fb2c  stw 7, 0(28)
  015fb30  lwz 6, 4(4)
  015fb34  addic 4, 4, 8
  015fb38  stw 6, 4(5)
  015fb3c  lwz 28, 8(3)
  015fb40  addic 28, 28, 4
  015fb44  stw 28, 8(3)
  015fb48  bdnz 0x15fb1c
  015fb4c  lwz 3, 8(30)
  015fb50  lis 7, 16396
  015fb54  cntlzw 10, 31
  015fb58  ori 7, 7, 5908
  015fb5c  li 9, 6
  015fb60  lwz 4, 8(3)
  015fb64  rlwinm 10, 10, 27, 31, 31
  015fb68  addic 5, 4, 24
  015fb6c  xori 10, 10, 1
  015fb70  stw 5, 8(3)
  015fb74  lwz 3, 8(30)
  015fb78  lwz 5, 8(3)
  015fb7c  addic 6, 5, 4
  015fb80  stw 6, 8(3)
  015fb84  li 6, 0
  015fb88  stw 7, 0(4)
  015fb8c  cntlzw 8, 6
  015fb90  lis 7, 4
  015fb94  rlwinm 8, 8, 27, 31, 31
  015fb98  stw 6, 4(4)
  015fb9c  ori 7, 7, 6152
  015fba0  stw 6, 8(4)
  015fba4  xori 8, 8, 1
  015fba8  stw 6, 12(4)
  015fbac  stw 9, 20(4)
  015fbb0  addc 8, 8, 10
  015fbb4  stw 7, 16(4)
  015fbb8  slwi 4, 8, 18
  015fbbc  lwz 8, 8(3)
  015fbc0  ori 4, 4, 6164
  015fbc4  addic 9, 8, 4
  015fbc8  oris 4, 4, 16384
  015fbcc  stw 9, 8(3)
  015fbd0  lwz 3, 8(30)
  015fbd4  lwz 9, 8(3)
  015fbd8  addic 10, 9, 8
  015fbdc  stw 10, 8(3)
  015fbe0  lwz 3, 8(30)
  015fbe4  lis 10, 768
  015fbe8  lwz 11, 8(3)
  015fbec  stw 4, 0(5)
  015fbf0  addic 12, 11, 8
  015fbf4  stw 10, 0(8)
  015fbf8  lis 4, 4
  015fbfc  li 10, 2
  015fc00  ori 4, 4, 5952
  015fc04  stw 12, 8(3)
  015fc08  lwz 3, 8(30)
  015fc0c  lis 5, 4
  015fc10  stw 7, 0(9)
  015fc14  stw 6, 4(9)
  015fc18  stw 10, 4(11)
  015fc1c  ori 6, 5, 5956
  015fc20  lis 5, 4
  015fc24  lwz 7, 8(3)
  015fc28  stw 4, 0(11)
  015fc2c  ori 8, 5, 5964
  015fc30  addic 4, 7, 8
  015fc34  li 5, 96
  015fc38  stw 4, 8(3)
  015fc3c  lwz 11, 8(30)
  015fc40  stw 6, 0(7)
  015fc44  li 3, 1
  015fc48  stw 10, 4(7)
  015fc4c  li 4, 5
  015fc50  li 6, 3
  015fc54  li 7, 0
  015fc58  lwz 9, 8(11)
  015fc5c  addic 12, 9, 8
  015fc60  stw 8, 0(9)
  015fc64  stw 10, 4(9)
  015fc68  li 8, 0
  015fc6c  stw 12, 8(11)
  015fc70  li 9, 1
  015fc74  li 10, 2
  015fc78  bl 0x502f98
  015fc7c  nop
  015fc80  ori 4, 3, 0
  015fc84  li 3, 22
  015fc88  bl 0x174f80
  015fc8c  nop
  015fc90  ld 0, 384(1)
  015fc94  mtlr 0
  015fc98  ld 28, 336(1)
  015fc9c  ld 29, 344(1)
  015fca0  ld 30, 352(1)
  015fca4  ld 31, 360(1)
  015fca8  addi 1, 1, 368
  015fcac  blr

Space_DrawLoadingBanner:   # 0x15fcb0, 0x130 bytes
  015fcb0  stdu 1, -144(1)
  015fcb4  mflr 0
  015fcb8  std 0, 160(1)
  015fcbc  std 31, 136(1)
  015fcc0  ori 31, 3, 0
  015fcc4  li 3, 1
  015fcc8  li 4, 0
  015fccc  li 8, 0
  015fcd0  li 10, 1
  015fcd4  li 5, 128
  015fcd8  li 6, 1
  015fcdc  li 7, 0
  015fce0  li 9, 1
  015fce4  bl 0x502f7c
  015fce8  nop
  015fcec  ori 4, 3, 0
  015fcf0  li 3, 22
  015fcf4  bl 0x174f80
  015fcf8  nop
  015fcfc  li 3, 0
  015fd00  li 4, 1
  015fd04  li 5, 0
  015fd08  li 6, 1
  015fd0c  li 7, 128
  015fd10  bl 0x502ea8
  015fd14  nop
  015fd18  ori 4, 3, 0
  015fd1c  li 3, 3
  015fd20  bl 0x174f80
  015fd24  nop
  015fd28  lis 4, 161
  015fd2c  lis 3, 165
  015fd30  addic 4, 4, 2264
  015fd34  lis 5, 128
  015fd38  li 8, 0
  015fd3c  ori 5, 5, 32896
  015fd40  ld 3, 25040(3)
  015fd44  lwz 4, 72(4)
  015fd48  rlwimi 5, 31, 24, 0, 7
  015fd4c  sldi 6, 3, 5
  015fd50  sldi 3, 3, 2
  015fd54  extsw 7, 5
  015fd58  addc 3, 6, 3
  015fd5c  lwz 6, 12(4)
  015fd60  li 5, 256
  015fd64  li 4, 360
  015fd68  addc 3, 6, 3
  015fd6c  std 7, 112(1)
  015fd70  li 9, 256
  015fd74  clrldi 10, 3, 32
  015fd78  li 3, 32
  015fd7c  li 6, 32
  015fd80  li 7, 0
  015fd84  std 10, 120(1)
  015fd88  li 10, 32
  015fd8c  bl 0x6889c
  015fd90  nop
  015fd94  li 3, 1
  015fd98  li 4, 5
  015fd9c  li 8, 0
  015fda0  li 10, 2
  015fda4  li 5, 96
  015fda8  li 6, 3
  015fdac  li 7, 0
  015fdb0  li 9, 1
  015fdb4  bl 0x502f98
  015fdb8  nop
  015fdbc  ori 4, 3, 0
  015fdc0  li 3, 22
  015fdc4  bl 0x174f80
  015fdc8  nop
  015fdcc  ld 0, 160(1)
  015fdd0  mtlr 0
  015fdd4  ld 31, 136(1)
  015fdd8  addi 1, 1, 144
  015fddc  blr

ChooseLoadingScreen:   # 0x15fe00, 0x9a4 bytes
  015fe00  stdu 1, -368(1)
  015fe04  mflr 0
  015fe08  std 0, 384(1)
  015fe0c  stfd 30, 352(1)
  015fe10  stfd 31, 360(1)
  015fe14  std 28, 320(1)
  015fe18  lis 28, 22
  015fe1c  std 31, 344(1)
  015fe20  std 30, 336(1)
  015fe24  std 29, 328(1)
  015fe28  std 27, 312(1)
  015fe2c  std 26, 304(1)
  015fe30  std 25, 296(1)
  015fe34  std 24, 288(1)
  015fe38  std 23, 280(1)
  015fe3c  std 22, 272(1)
  015fe40  std 21, 264(1)
  015fe44  std 20, 256(1)
  015fe48  addi 28, 28, -544
  015fe4c  bl 0x166e30
  015fe50  nop
  015fe54  lis 27, 150
  015fe58  lis 5, 150
  015fe5c  addic 27, 27, -12976
  015fe60  lwz 3, 56(27)
  015fe64  lwz 4, 52(27)
  015fe68  addic 3, 3, 1
  015fe6c  addic 4, 4, 1
  015fe70  stw 3, 56(27)
  015fe74  stw 4, 52(27)
  015fe78  lfs 30, 0(28)
  015fe7c  lfs 1, -12528(5)
  015fe80  fsubs 1, 1, 30
  015fe84  stfs 1, -12528(5)
  015fe88  lfs 2, 4(28)
  015fe8c  fcmpu 0, 1, 2
  015fe90  cror 6, 1, 2
  015fe94  bt 6, 0x15fea4
  015fe98  lis 5, 150
  015fe9c  li 6, 0
  015fea0  stw 6, -12528(5)
  015fea4  cmpwi 4, 1
  015fea8  bf 2, 0x15ff34
  015feac  lis 5, 151
  015feb0  lwz 5, -25488(5)
  015feb4  cmpwi 5, 0
  015feb8  cmpwi 1, 5, 1
  015febc  bt 2, 0x15ff34
  015fec0  bf 6, 0x15fed8
  015fec4  lis 5, 151
  015fec8  addic 5, 5, -13812
  015fecc  lbz 5, 3(5)
  015fed0  cmpwi 5, 0
  015fed4  bt 2, 0x15ff34
  015fed8  bl 0x505f50
  015fedc  nop
  015fee0  lis 3, 150
  015fee4  lis 4, 114
  015fee8  addic 3, 3, 17776
  015feec  lis 10, 150
  015fef0  li 5, 1024
  015fef4  li 6, 0
  015fef8  addic 10, 10, 14288
  015fefc  lwz 9, 88(3)
  015ff00  lwz 3, -3068(4)
  015ff04  li 7, 0
  015ff08  extsw 4, 9
  015ff0c  li 8, 0
  015ff10  li 9, 0
  015ff14  bl 0x5062f4
  015ff18  nop
  015ff1c  bl 0x505f4c
  015ff20  nop
  015ff24  bl 0x505d20
  015ff28  nop
  015ff2c  lwz 3, 56(27)
  015ff30  lwz 4, 52(27)
  015ff34  cmpwi 1, 3, 96
  015ff38  lhz 3, 64(27)
  015ff3c  extsh 3, 3
  015ff40  cmpw 4, 3
  015ff44  bt 0, 0x160160
  015ff48  lhz 4, 68(27)
  015ff4c  li 31, 0
  015ff50  extsh 3, 4
  015ff54  ori 30, 31, 0
  015ff58  cmpwi 3, 0
  015ff5c  bf 1, 0x15ffb8
  015ff60  ori 29, 27, 0
  015ff64  lwz 3, 376(29)
  015ff68  cmpwi 3, 0
  015ff6c  bt 2, 0x15ffa4
  015ff70  lwz 5, 36(3)
  015ff74  lbz 6, 12(5)
  015ff78  addic 6, 6, -1
  015ff7c  stb 6, 12(5)
  015ff80  lwz 4, 36(3)
  015ff84  lbz 5, 12(4)
  015ff88  slwi 5, 5, 2
  015ff8c  addc 4, 4, 5
  015ff90  clrldi 4, 4, 32
  015ff94  stw 30, 72(4)
  015ff98  bl 0xefb38
  015ff9c  nop
  015ffa0  lhz 4, 68(27)
  015ffa4  extsh 3, 4
  015ffa8  addic 31, 31, 1
  015ffac  addic 29, 29, 4
  015ffb0  cmpw 31, 3
  015ffb4  bt 0, 0x15ff64
  015ffb8  lis 3, 151
  015ffbc  lwz 3, -25488(3)
  015ffc0  cmpwi 3, 0
  015ffc4  cmpwi 1, 3, 1
  015ffc8  bt 2, 0x160004
  015ffcc  bf 6, 0x15ffe4
  015ffd0  lis 3, 151
  015ffd4  addic 3, 3, -13812
  015ffd8  lbz 3, 3(3)
  015ffdc  cmpwi 3, 0
  015ffe0  bt 2, 0x160004
  015ffe4  lis 3, 150
  015ffe8  lhz 3, 17760(3)
  015ffec  extsh 3, 3
  015fff0  cmpwi 3, 3
  015fff4  bf 0, 0x160004
  015fff8  lis 3, 150
  015fffc  addic 3, 3, 17776
  0160000  stw 30, 92(3)
  0160004  lis 31, 150
  0160008  addic 31, 31, 17776
  016000c  lwz 4, 92(31)
  0160010  cmpwi 4, 2
  0160014  cmpwi 1, 4, 0
  0160018  bf 0, 0x160138
  016001c  li 3, 4
  0160020  bf 6, 0x160064
  0160024  bl 0x5c8318
  0160028  nop
  016002c  lis 4, 21845
  0160030  srawi 3, 3, 16
  0160034  lwz 6, 88(31)
  0160038  ori 4, 4, 21846
  016003c  mulhw 4, 4, 3
  0160040  srwi 5, 4, 31
  0160044  addc 4, 4, 5
  0160048  addc 5, 4, 4
  016004c  addc 5, 4, 5
  0160050  lwz 4, 92(31)
  0160054  subc 3, 3, 5
  0160058  addc 3, 6, 3
  016005c  addic 3, 3, 1
  0160060  clrlwi 3, 3, 30
  0160064  addic 4, 4, 1
  0160068  lis 5, 115
  016006c  stw 3, 88(31)
  0160070  lis 6, 165
  0160074  addic 7, 5, 8048
  0160078  stw 4, 92(31)
  016007c  addic 8, 6, 25056
  0160080  stw 30, 80(31)
  0160084  ori 3, 27, 0
  0160088  lfs 1, 8048(5)
  016008c  li 4, 0
  0160090  stw 30, 84(31)
  0160094  li 5, 448
  0160098  lfs 2, 4(7)
  016009c  stfs 1, 25056(6)
  01600a0  lfs 1, 8(7)
  01600a4  stfs 2, 4(8)
  01600a8  lfs 2, 12(7)
  01600ac  stfs 1, 8(8)
  01600b0  stfs 2, 12(8)
  01600b4  bl 0x5001fc
  01600b8  nop
  01600bc  lis 3, 161
  01600c0  lwz 5, 88(31)
  01600c4  lis 4, 32
  01600c8  addic 3, 3, 2264
  01600cc  slwi 5, 5, 2
  01600d0  lwz 6, 64(3)
  01600d4  addc 4, 6, 4
  01600d8  stw 6, 88(27)
  01600dc  stw 4, 92(27)
  01600e0  lwz 3, 72(3)
  01600e4  addc 4, 3, 5
  01600e8  addic 5, 27, 96
  01600ec  clrldi 4, 4, 32
  01600f0  lwz 4, 40(4)
  01600f4  addc 4, 3, 4
  01600f8  clrldi 4, 4, 32
  01600fc  lwz 6, 4(4)
  0160100  cmpwi 6, 0
  0160104  bt 2, 0x160128
  0160108  lwz 6, 0(4)
  016010c  addic 30, 30, 1
  0160110  addic 4, 4, 8
  0160114  addc 6, 3, 6
  0160118  cmpwi 30, 70
  016011c  stw 6, 0(5)
  0160120  addic 5, 5, 4
  0160124  bt 0, 0x1600fc
  0160128  li 3, 0
  016012c  bl 0xe07f8
  0160130  nop
  0160134  b 0x16017c
  0160138  lis 3, 150
  016013c  addic 3, 3, 17760
  0160140  lhz 4, 2(3)
  0160144  cmpwi 4, 0
  0160148  bt 2, 0x160150
  016014c  sth 30, 2(3)
  0160150  lis 3, 161
  0160154  li 4, 1
  0160158  stw 4, 1820(3)
  016015c  b 0x16075c
  0160160  bt 4, 0x16017c
  0160164  lwz 3, 60(27)
  0160168  addic 4, 3, 1
  016016c  extsw 3, 4
  0160170  stw 4, 60(27)
  0160174  bl 0xe07f8
  0160178  nop
  016017c  bl 0x15dfe0
  0160180  lis 26, 150
  0160184  lis 3, 115
  0160188  addic 26, 26, 17776
  016018c  lis 4, 150
  0160190  addic 5, 3, 8324
  0160194  addic 3, 4, -12416
  0160198  lwz 4, 88(26)
  016019c  slwi 4, 4, 2
  01601a0  lwz 6, 176(3)
  01601a4  extsw 4, 4
  01601a8  srawi 7, 6, 31
  01601ac  srwi 8, 7, 1
  01601b0  xor 6, 8, 6
  01601b4  lwzx 9, 5, 4
  01601b8  lfsx 1, 5, 4
  01601bc  subc 6, 6, 7
  01601c0  srawi 7, 9, 31
  01601c4  srwi 4, 7, 1
  01601c8  xor 4, 4, 9
  01601cc  subc 4, 4, 7
  01601d0  cmpw 6, 4
  01601d4  bf 0, 0x1601dc
  01601d8  stfs 1, 176(3)
  01601dc  bl 0x668d0
  01601e0  nop
  01601e4  li 3, 8
  01601e8  li 4, 52
  01601ec  lfs 31, 8(28)
  01601f0  lwz 31, 88(26)
  01601f4  cmpwi 31, 4
  01601f8  lvlx 3, 3, 28
  01601fc  lvlx 2, 4, 27
  0160200  vspltw 3, 3, 0
  0160204  lhz 3, 68(27)
  0160208  bf 2, 0x1602d0
  016020c  li 4, 64
  0160210  vspltisw 3, -16
  0160214  li 5, 12
  0160218  vspltisw 6, -1
  016021c  vspltisw 10, -1
  0160220  lvlx 4, 4, 27
  0160224  lvlx 5, 5, 28
  0160228  vsraw 3, 4, 3
  016022c  vspltw 5, 5, 0
  0160230  vslw 6, 6, 6
  0160234  vcfsx 4, 3, 0
  0160238  vspltisw 8, -1
  016023c  lis 4, 115
  0160240  vsubuwm 3, 3, 2
  0160244  li 5, 8128
  0160248  vspltisw 11, -1
  016024c  addic 6, 4, 8128
  0160250  vslw 8, 8, 8
  0160254  li 8, 8
  0160258  vcfsx 3, 3, 0
  016025c  li 9, 25056
  0160260  vrefp 7, 4
  0160264  vnmsubfp 9, 7, 4, 5
  0160268  vmaddfp 6, 7, 9, 6
  016026c  vslw 7, 10, 10
  0160270  vslw 9, 11, 11
  0160274  lvlx 11, 5, 4
  0160278  lis 5, 165
  016027c  li 4, 4
  0160280  addic 7, 5, 25056
  0160284  vnmsubfp 10, 6, 4, 5
  0160288  vmaddfp 6, 6, 10, 8
  016028c  lvlx 8, 4, 6
  0160290  lvlx 10, 4, 7
  0160294  lvlx 12, 8, 6
  0160298  vnmsubfp 4, 6, 4, 5
  016029c  lvlx 5, 9, 5
  01602a0  lvlx 13, 8, 7
  01602a4  vmaddfp 4, 6, 4, 7
  01602a8  vmaddfp 3, 4, 3, 9
  01602ac  vmaddfp 4, 11, 3, 5
  01602b0  vmaddfp 5, 8, 3, 10
  01602b4  vmaddfp 6, 12, 3, 13
  01602b8  vspltw 4, 4, 0
  01602bc  vspltw 5, 5, 0
  01602c0  vspltw 6, 6, 0
  01602c4  stvewx 4, 9, 5
  01602c8  stvewx 5, 4, 7
  01602cc  stvewx 6, 8, 7
  01602d0  li 4, 16
  01602d4  vspltisw 4, -1
  01602d8  lis 5, 114
  01602dc  li 6, -3056
  01602e0  vslw 4, 4, 4
  01602e4  lvlx 5, 4, 28
  01602e8  vspltw 5, 5, 0
  01602ec  lvlx 6, 6, 5
  01602f0  li 4, 20
  01602f4  vspltisw 7, -1
  01602f8  vmaddfp 4, 6, 5, 4
  01602fc  vspltw 3, 3, 0
  0160300  vspltisw 5, -1
  0160304  lis 5, 115
  0160308  vslw 7, 7, 7
  016030c  slwi 6, 31, 4
  0160310  lvlx 6, 4, 28
  0160314  addic 5, 5, 8224
  0160318  vspltisw 8, -1
  016031c  vslw 5, 5, 5
  0160320  vspltw 6, 6, 0
  0160324  addc 4, 5, 6
  0160328  lis 5, 165
  016032c  clrldi 4, 4, 32
  0160330  li 6, 24912
  0160334  vctsxs 4, 4, 0
  0160338  li 7, 4
  016033c  addic 8, 5, 24912
  0160340  lis 10, 115
  0160344  li 9, 8
  0160348  lis 11, 165
  016034c  extsh 3, 3
  0160350  cmpwi 3, 0
  0160354  vsubuwm 2, 2, 4
  0160358  vslw 4, 8, 8
  016035c  lvlx 8, 0, 4
  0160360  vcfsx 2, 2, 0
  0160364  vmaddfp 2, 2, 6, 5
  0160368  vspltisw 5, -1
  016036c  vslw 5, 5, 5
  0160370  vmaddfp 2, 2, 3, 7
  0160374  vspltisw 3, -1
  0160378  vslw 3, 3, 3
  016037c  vmaddfp 4, 8, 2, 4
  0160380  vspltw 4, 4, 0
  0160384  stvewx 4, 6, 5
  0160388  lvlx 4, 7, 4
  016038c  slwi 5, 31, 2
  0160390  addic 6, 10, 8304
  0160394  vmaddfp 4, 4, 2, 5
  0160398  extsw 5, 5
  016039c  li 31, 0
  01603a0  ori 25, 31, 0
  01603a4  lfsx 1, 6, 5
  01603a8  vspltw 4, 4, 0
  01603ac  stvewx 4, 7, 8
  01603b0  lvlx 4, 9, 4
  01603b4  vmaddfp 2, 4, 2, 3
  01603b8  vspltw 2, 2, 0
  01603bc  stvewx 2, 9, 8
  01603c0  lfs 2, 12(4)
  01603c4  stfs 1, 24932(11)
  01603c8  stfs 2, 12(8)
  01603cc  bf 1, 0x160754
  01603d0  ori 24, 27, 0
  01603d4  ori 29, 25, 0
  01603d8  lwz 30, 376(24)
  01603dc  lwz 3, 36(30)
  01603e0  lwz 4, 56(27)
  01603e4  srawi 23, 4, 1
  01603e8  lbz 5, 12(3)
  01603ec  addic 22, 23, 1
  01603f0  slwi 7, 23, 2
  01603f4  slwi 6, 5, 2
  01603f8  rlwinm 5, 5, 2, 22, 29
  01603fc  addc 6, 3, 6
  0160400  addc 3, 3, 5
  0160404  clrldi 5, 6, 32
  0160408  clrldi 3, 3, 32
  016040c  slwi 6, 22, 2
  0160410  lwz 5, 68(5)
  0160414  lwz 3, 68(3)
  0160418  addc 5, 5, 7
  016041c  addc 3, 3, 6
  0160420  clrldi 5, 5, 32
  0160424  clrldi 6, 3, 32
  0160428  clrlwi 3, 4, 31
  016042c  lwz 4, 28(5)
  0160430  lwz 5, 28(6)
  0160434  addic 20, 4, 16
  0160438  addic 21, 5, 16
  016043c  bl 0x502730
  0160440  nop
  0160444  extsw 3, 29
  0160448  slwi 5, 23, 4
  016044c  std 3, 240(1)
  0160450  lfs 2, 24(28)
  0160454  lwz 4, 120(30)
  0160458  lfd 3, 240(1)
  016045c  slwi 3, 22, 4
  0160460  fcfid 3, 3
  0160464  addc 3, 4, 3
  0160468  clrldi 6, 3, 32
  016046c  addc 3, 4, 5
  0160470  li 5, 2
  0160474  clrldi 4, 3, 32
  0160478  ori 3, 30, 0
  016047c  frsp 3, 3
  0160480  fmuls 3, 3, 30
  0160484  fmadds 1, 1, 2, 3
  0160488  fsubs 2, 31, 1
  016048c  stfs 1, 84(30)
  0160490  lfs 3, 0(6)
  0160494  lfs 4, 4(6)
  0160498  fmuls 3, 3, 1
  016049c  lfs 5, 8(6)
  01604a0  fmuls 4, 4, 1
  01604a4  lfs 6, 0(4)
  01604a8  fmuls 1, 5, 1
  01604ac  lfs 5, 4(4)
  01604b0  lfs 7, 8(4)
  01604b4  lfs 8, 12(4)
  01604b8  stb 5, 82(30)
  01604bc  stfs 8, 28(30)
  01604c0  stb 5, 83(30)
  01604c4  stb 25, 80(30)
  01604c8  fmadds 3, 6, 2, 3
  01604cc  stb 25, 81(30)
  01604d0  fmadds 4, 5, 2, 4
  01604d4  fmadds 1, 7, 2, 1
  01604d8  stfs 3, 16(30)
  01604dc  stfs 4, 20(30)
  01604e0  stfs 1, 24(30)
  01604e4  bl 0xef74c
  01604e8  nop
  01604ec  lwz 3, 104(30)
  01604f0  ori 4, 20, 0
  01604f4  addic 3, 3, 16
  01604f8  li 5, 32
  01604fc  bl 0x5002cc
  0160500  nop
  0160504  lwz 3, 108(30)
  0160508  ori 4, 21, 0
  016050c  li 5, 32
  0160510  addic 3, 3, 16
  0160514  bl 0x5002cc
  0160518  nop
  016051c  li 4, 511
  0160520  li 5, 255
  0160524  ori 3, 30, 0
  0160528  sth 4, 50(30)
  016052c  stb 5, 114(30)
  0160530  stb 5, 113(30)
  0160534  bl 0xf31a8
  0160538  nop
  016053c  lwz 6, 36(30)
  0160540  ori 3, 30, 0
  0160544  addic 5, 1, 112
  0160548  li 4, 1
  016054c  lbz 7, 12(6)
  0160550  addic 7, 7, -1
  0160554  stb 7, 82(30)
  0160558  lbz 6, 12(6)
  016055c  addic 6, 6, -1
  0160560  stb 6, 83(30)
  0160564  bl 0xf1038
  0160568  nop
  016056c  ori 3, 30, 0
  0160570  addic 5, 1, 176
  0160574  li 4, 2
  0160578  bl 0xf1038
  016057c  nop
  0160580  lwz 3, 80(26)
  0160584  lwz 4, 84(26)
  0160588  addic 3, 3, 1
  016058c  lfs 1, 160(1)
  0160590  lfs 2, 164(1)
  0160594  cmpwi 4, 32
  0160598  clrlwi 5, 3, 27
  016059c  lfs 3, 168(1)
  01605a0  lfs 4, 172(1)
  01605a4  stw 5, 80(26)
  01605a8  lfs 5, 224(1)
  01605ac  lfs 6, 228(1)
  01605b0  lfs 7, 232(1)
  01605b4  lfs 8, 236(1)
  01605b8  bf 0, 0x1605c4
  01605bc  addic 4, 4, 1
  01605c0  stw 4, 84(26)
  01605c4  rlwinm 3, 3, 4, 23, 27
  01605c8  addic 4, 26, 192
  01605cc  addic 5, 26, 704
  01605d0  addc 3, 3, 4
  01605d4  lwz 4, 80(26)
  01605d8  clrldi 3, 3, 32
  01605dc  slwi 4, 4, 4
  01605e0  addc 4, 4, 5
  01605e4  stfs 1, 0(3)
  01605e8  clrldi 4, 4, 32
  01605ec  stfs 2, 4(3)
  01605f0  stfs 3, 8(3)
  01605f4  stfs 4, 12(3)
  01605f8  lwz 3, 88(26)
  01605fc  stfs 5, 0(4)
  0160600  stfs 6, 4(4)
  0160604  cmpwi 3, 4
  0160608  stfs 7, 8(4)
  016060c  stfs 8, 12(4)
  0160610  bf 2, 0x160730
  0160614  lis 3, 151
  0160618  lwz 3, -25488(3)
  016061c  cmpwi 3, 0
  0160620  cmpwi 1, 3, 1
  0160624  bt 2, 0x160640
  0160628  bf 6, 0x160650
  016062c  lis 3, 151
  0160630  addic 3, 3, -13812
  0160634  lbz 3, 3(3)
  0160638  cmpwi 3, 0
  016063c  bf 2, 0x160650
  0160640  lhz 3, 52(30)
  0160644  stw 25, 84(26)
  0160648  ori 3, 3, 1
  016064c  sth 3, 52(30)
  0160650  li 3, 52
  0160654  lhz 5, 64(27)
  0160658  li 4, 64
  016065c  lwz 6, 52(27)
  0160660  extsh 5, 5
  0160664  vspltisw 2, -16
  0160668  lvlx 3, 3, 27
  016066c  addic 3, 5, -56
  0160670  lvlx 4, 4, 27
  0160674  cmpw 6, 3
  0160678  vsraw 2, 4, 2
  016067c  bf 1, 0x160708
  0160680  vsubuwm 2, 2, 3
  0160684  li 3, 28
  0160688  vspltisw 3, -1
  016068c  li 4, 36
  0160690  vspltisw 5, -1
  0160694  li 6, 44
  0160698  vcfsx 2, 2, 0
  016069c  lvlx 4, 3, 28
  01606a0  vslw 3, 3, 3
  01606a4  vspltw 4, 4, 0
  01606a8  lwz 3, 36(30)
  01606ac  vslw 5, 5, 5
  01606b0  lvlx 6, 4, 3
  01606b4  lhz 5, 64(27)
  01606b8  lwz 7, 52(27)
  01606bc  lis 4, 115
  01606c0  vmaddfp 2, 2, 4, 3
  01606c4  extsh 5, 5
  01606c8  ori 3, 25, 0
  01606cc  subc 5, 5, 7
  01606d0  addic 4, 4, 8000
  01606d4  sldi 5, 5, 24
  01606d8  vmaddfp 2, 6, 2, 5
  01606dc  vspltw 2, 2, 0
  01606e0  stvewx 2, 6, 30
  01606e4  lwz 6, 0(4)
  01606e8  addic 3, 3, 1
  01606ec  clrlwi 6, 6, 8
  01606f0  cmpwi 3, 3
  01606f4  or 6, 6, 5
  01606f8  stw 6, 0(4)
  01606fc  addic 4, 4, 8
  0160700  bt 0, 0x1606e4
  0160704  b 0x160730
  0160708  lis 4, 115
  016070c  li 5, 3
  0160710  addic 4, 4, 8000
  0160714  li 3, 56
  0160718  mtctr 5
  016071c  lwz 5, 0(4)
  0160720  rlwimi 5, 3, 24, 0, 7
  0160724  stw 5, 0(4)
  0160728  addic 4, 4, 8
  016072c  bdnz 0x16071c
  0160730  addic 29, 29, 1
  0160734  cmpwi 29, 2
  0160738  bt 0, 0x1603dc
  016073c  lhz 3, 68(27)
  0160740  addic 31, 31, 1
  0160744  extsh 3, 3
  0160748  addic 24, 24, 4
  016074c  cmpw 31, 3
  0160750  bt 0, 0x1603d4
  0160754  bl 0x166e88
  0160758  nop
  016075c  ld 0, 384(1)
  0160760  mtlr 0
  0160764  lfd 30, 352(1)
  0160768  lfd 31, 360(1)
  016076c  ld 20, 256(1)
  0160770  ld 21, 264(1)
  0160774  ld 22, 272(1)
  0160778  ld 23, 280(1)
  016077c  ld 24, 288(1)
  0160780  ld 25, 296(1)
  0160784  ld 26, 304(1)
  0160788  ld 27, 312(1)
  016078c  ld 28, 320(1)
  0160790  ld 29, 328(1)
  0160794  ld 30, 336(1)
  0160798  ld 31, 344(1)
  016079c  addi 1, 1, 368
  01607a0  blr

Space_DrawShipEffects:   # 0x1607c0, 0x98c bytes
  01607c0  stdu 1, -624(1)
  01607c4  mflr 0
  01607c8  std 0, 640(1)
  01607cc  stfd 14, 480(1)
  01607d0  stfd 15, 488(1)
  01607d4  stfd 16, 496(1)
  01607d8  stfd 17, 504(1)
  01607dc  stfd 18, 512(1)
  01607e0  stfd 19, 520(1)
  01607e4  stfd 20, 528(1)
  01607e8  stfd 21, 536(1)
  01607ec  stfd 22, 544(1)
  01607f0  stfd 23, 552(1)
  01607f4  stfd 24, 560(1)
  01607f8  stfd 25, 568(1)
  01607fc  stfd 26, 576(1)
  0160800  stfd 27, 584(1)
  0160804  stfd 28, 592(1)
  0160808  stfd 29, 600(1)
  016080c  stfd 30, 608(1)
  0160810  stfd 31, 616(1)
  0160814  lhz 7, 166(3)
  0160818  lis 4, 115
  016081c  extsh 7, 7
  0160820  std 24, 416(1)
  0160824  lis 6, 115
  0160828  addic 24, 7, -530
  016082c  std 30, 464(1)
  0160830  lis 5, 115
  0160834  addic 30, 4, 19056
  0160838  sldi 24, 24, 2
  016083c  std 27, 440(1)
  0160840  lis 4, 115
  0160844  addic 27, 6, 19024
  0160848  std 29, 456(1)
  016084c  lis 8, 115
  0160850  addic 29, 5, 19040
  0160854  std 26, 432(1)
  0160858  lis 9, 161
  016085c  addic 26, 4, 19008
  0160860  std 28, 448(1)
  0160864  lwzx 30, 30, 24
  0160868  addic 28, 8, 19072
  016086c  lwzx 27, 27, 24
  0160870  addic 4, 9, 24396
  0160874  lis 5, 161
  0160878  std 31, 472(1)
  016087c  lwzx 29, 29, 24
  0160880  ori 31, 3, 0
  0160884  lwzx 26, 26, 24
  0160888  std 25, 424(1)
  016088c  lwzx 28, 28, 24
  0160890  lwz 25, 28(4)
  0160894  lwz 3, 1800(5)
  0160898  cmpwi 3, 6
  016089c  bf 2, 0x1608d8
  01608a0  lis 3, 150
  01608a4  addic 3, 3, 17776
  01608a8  lwz 3, 32(3)
  01608ac  cmpwi 3, 4
  01608b0  bf 2, 0x1608d8
  01608b4  lis 3, 161
  01608b8  addic 3, 3, 2264
  01608bc  lwz 3, 72(3)
  01608c0  lwz 4, 28(3)
  01608c4  lwz 4, 4(4)
  01608c8  clrldi 4, 4, 32
  01608cc  std 4, 296(1)
  01608d0  lwz 25, 12(3)
  01608d4  b 0x1608e8
  01608d8  li 3, 21
  01608dc  bl 0x685c4
  01608e0  nop
  01608e4  std 3, 296(1)
  01608e8  li 3, 0
  01608ec  lis 9, 0
  01608f0  li 4, 0
  01608f4  li 5, 1
  01608f8  li 6, 1
  01608fc  li 7, 1
  0160900  li 8, 0
  0160904  ori 9, 9, 65424
  0160908  bl 0x502fd4
  016090c  nop
  0160910  std 3, 304(1)
  0160914  li 4, 0
  0160918  li 3, 0
  016091c  li 5, 0
  0160920  li 6, 0
  0160924  li 7, 0
  0160928  li 8, 0
  016092c  bl 0x502f08
  0160930  nop
  0160934  li 4, 1
  0160938  std 3, 288(1)
  016093c  li 5, 0
  0160940  li 3, 0
  0160944  li 6, 1
  0160948  li 7, 128
  016094c  bl 0x502ea8
  0160950  nop
  0160954  lis 4, 115
  0160958  std 3, 312(1)
  016095c  addic 5, 1, 112
  0160960  addic 6, 4, 18992
  0160964  li 4, 0
  0160968  ori 3, 31, 0
  016096c  lwzx 6, 6, 24
  0160970  stw 6, 252(1)
  0160974  stw 6, 248(1)
  0160978  stw 6, 244(1)
  016097c  stw 6, 240(1)
  0160980  bl 0xf1038
  0160984  nop
  0160988  lis 4, 161
  016098c  li 3, 0
  0160990  ori 24, 3, 0
  0160994  lwz 4, 1800(4)
  0160998  cmpwi 4, 0
  016099c  bf 2, 0x1609ec
  01609a0  lis 5, 149
  01609a4  lfs 1, 16(31)
  01609a8  lis 6, 22
  01609ac  addic 5, 5, 5056
  01609b0  addi 6, 6, 1956
  01609b4  lfs 2, 320(5)
  01609b8  fsubs 2, 2, 1
  01609bc  lfs 1, 0(6)
  01609c0  fabs 2, 2
  01609c4  fcmpu 0, 2, 1
  01609c8  cror 6, 1, 2
  01609cc  bt 6, 0x1609f0
  01609d0  lfs 2, 324(5)
  01609d4  lfs 3, 20(31)
  01609d8  fsubs 2, 2, 3
  01609dc  fabs 2, 2
  01609e0  fcmpu 0, 2, 1
  01609e4  cror 6, 1, 2
  01609e8  bt 6, 0x1609f0
  01609ec  li 3, 1
  01609f0  cmpwi 4, 6
  01609f4  bf 2, 0x160a0c
  01609f8  lis 4, 150
  01609fc  addic 4, 4, 17776
  0160a00  lwz 4, 32(4)
  0160a04  cmpwi 4, 4
  0160a08  bt 2, 0x160a14
  0160a0c  cmpwi 3, 0
  0160a10  bf 2, 0x160a24
  0160a14  lis 3, 115
  0160a18  lwz 3, 7312(3)
  0160a1c  cmpwi 3, 1
  0160a20  bf 2, 0x160e00
  0160a24  lis 4, 115
  0160a28  li 5, 1
  0160a2c  lis 31, 165
  0160a30  addic 3, 31, 25028
  0160a34  stw 5, 7316(4)
  0160a38  bl 0x4fff60
  0160a3c  nop
  0160a40  lwz 3, 25028(31)
  0160a44  extsw 3, 3
  0160a48  bl 0x502730
  0160a4c  nop
  0160a50  lis 3, 22
  0160a54  fmr 31, 1
  0160a58  lis 4, 114
  0160a5c  addi 3, 3, 1956
  0160a60  lfs 1, 4(3)
  0160a64  lfs 2, -3056(4)
  0160a68  fmuls 1, 2, 1
  0160a6c  fctiwz 1, 1
  0160a70  stfd 1, 392(1)
  0160a74  lwz 3, 396(1)
  0160a78  extsw 3, 3
  0160a7c  bl 0x502730
  0160a80  nop
  0160a84  fdivs 1, 31, 1
  0160a88  cmpwi 26, 0
  0160a8c  ori 8, 24, 0
  0160a90  stfs 1, 320(1)
  0160a94  bf 1, 0x160de0
  0160a98  lis 3, 22
  0160a9c  lis 4, 149
  0160aa0  addi 3, 3, 1956
  0160aa4  addic 10, 4, 5056
  0160aa8  lis 9, 115
  0160aac  lis 11, 165
  0160ab0  lis 4, 165
  0160ab4  lfs 1, 20(3)
  0160ab8  lfs 28, 8(3)
  0160abc  lis 5, 165
  0160ac0  lfs 29, 12(3)
  0160ac4  lis 7, 165
  0160ac8  lfs 27, 16(3)
  0160acc  addic 4, 4, 26704
  0160ad0  lfs 26, 24(3)
  0160ad4  addic 7, 7, 25072
  0160ad8  lfs 14, 112(1)
  0160adc  addic 3, 5, 27520
  0160ae0  lfs 15, 128(1)
  0160ae4  addic 6, 4, 4
  0160ae8  lfs 16, 144(1)
  0160aec  addic 5, 3, 4
  0160af0  lfs 17, 160(1)
  0160af4  stfd 1, 384(1)
  0160af8  lfs 18, 116(1)
  0160afc  lfs 19, 132(1)
  0160b00  lfs 20, 148(1)
  0160b04  lfs 21, 164(1)
  0160b08  lfs 22, 120(1)
  0160b0c  lfs 23, 136(1)
  0160b10  lfs 1, 124(1)
  0160b14  lfs 24, 152(1)
  0160b18  lfs 2, 140(1)
  0160b1c  lfs 25, 168(1)
  0160b20  lfs 3, 156(1)
  0160b24  lfs 4, 172(1)
  0160b28  lfs 5, 320(10)
  0160b2c  stfd 1, 376(1)
  0160b30  lfs 1, 324(10)
  0160b34  stfd 2, 368(1)
  0160b38  lfs 2, 328(10)
  0160b3c  stfd 3, 360(1)
  0160b40  lwz 9, 7312(9)
  0160b44  stfd 4, 352(1)
  0160b48  stfd 5, 344(1)
  0160b4c  cmpwi 1, 9, 1
  0160b50  lwz 10, 25028(11)
  0160b54  stfd 1, 336(1)
  0160b58  cmpwi 6, 10, 0
  0160b5c  stfd 2, 328(1)
  0160b60  lfs 1, 4(30)
  0160b64  lfs 2, 0(30)
  0160b68  fmuls 3, 1, 15
  0160b6c  lfs 5, 8(30)
  0160b70  fmuls 4, 1, 19
  0160b74  lfs 13, 12(30)
  0160b78  fmuls 6, 1, 23
  0160b7c  lfd 10, 368(1)
  0160b80  lfd 11, 376(1)
  0160b84  lfd 0, 360(1)
  0160b88  lfd 31, 352(1)
  0160b8c  fmuls 1, 1, 10
  0160b90  fmr 12, 28
  0160b94  fmadds 3, 14, 2, 3
  0160b98  fmadds 4, 18, 2, 4
  0160b9c  fmadds 6, 22, 2, 6
  0160ba0  fmadds 1, 11, 2, 1
  0160ba4  fmr 11, 12
  0160ba8  fmadds 3, 16, 5, 3
  0160bac  fmadds 4, 20, 5, 4
  0160bb0  fmadds 6, 24, 5, 6
  0160bb4  fmadds 1, 0, 5, 1
  0160bb8  fmr 10, 11
  0160bbc  fmadds 9, 17, 13, 3
  0160bc0  fmadds 8, 21, 13, 4
  0160bc4  fmadds 3, 25, 13, 6
  0160bc8  fmadds 1, 31, 13, 1
  0160bcc  stfs 9, 0(7)
  0160bd0  stfs 8, 4(7)
  0160bd4  lfd 4, 336(1)
  0160bd8  lfd 6, 344(1)
  0160bdc  fsubs 8, 8, 4
  0160be0  fsubs 9, 9, 6
  0160be4  lfd 7, 328(1)
  0160be8  fsubs 7, 3, 7
  0160bec  stfs 3, 8(7)
  0160bf0  stfs 1, 12(7)
  0160bf4  lfs 30, 0(29)
  0160bf8  lfs 31, 4(29)
  0160bfc  fmuls 4, 8, 8
  0160c00  lfs 0, 8(29)
  0160c04  lfs 13, 12(29)
  0160c08  fmadds 6, 9, 9, 4
  0160c0c  fmadds 6, 7, 7, 6
  0160c10  fsqrts 2, 6
  0160c14  fcmpu 0, 2, 10
  0160c18  bt 2, 0x160c5c
  0160c1c  frsqrte 1, 6
  0160c20  fmuls 2, 6, 1
  0160c24  fmuls 3, 1, 29
  0160c28  fnmsubs 2, 2, 1, 27
  0160c2c  fmadds 1, 2, 3, 1
  0160c30  fmuls 2, 6, 1
  0160c34  fmuls 3, 1, 29
  0160c38  fnmsubs 2, 2, 1, 27
  0160c3c  fmadds 1, 2, 3, 1
  0160c40  fmuls 2, 6, 1
  0160c44  fmuls 3, 1, 29
  0160c48  fnmsubs 2, 2, 1, 27
  0160c4c  fmadds 10, 2, 3, 1
  0160c50  fmuls 12, 9, 10
  0160c54  fmuls 11, 8, 10
  0160c58  fmuls 10, 7, 10
  0160c5c  fmuls 1, 31, 19
  0160c60  fmuls 2, 31, 15
  0160c64  fmuls 3, 31, 23
  0160c68  lfd 5, 384(1)
  0160c6c  fmadds 1, 30, 18, 1
  0160c70  fmadds 2, 30, 14, 2
  0160c74  fmadds 3, 30, 22, 3
  0160c78  fmadds 1, 0, 20, 1
  0160c7c  fmadds 2, 0, 16, 2
  0160c80  fmadds 3, 0, 24, 3
  0160c84  fmadds 1, 13, 21, 1
  0160c88  fmadds 2, 13, 17, 2
  0160c8c  fmadds 3, 13, 25, 3
  0160c90  fmuls 4, 1, 1
  0160c94  fmadds 4, 2, 2, 4
  0160c98  fmadds 4, 3, 3, 4
  0160c9c  fsqrts 4, 4
  0160ca0  fdivs 5, 5, 4
  0160ca4  fsub 6, 28, 4
  0160ca8  fsub 8, 28, 4
  0160cac  fsub 7, 4, 28
  0160cb0  fsub 13, 4, 28
  0160cb4  fsub 9, 28, 4
  0160cb8  fsub 4, 4, 28
  0160cbc  fmuls 1, 1, 5
  0160cc0  fmuls 2, 2, 5
  0160cc4  fmuls 3, 3, 5
  0160cc8  fsel 5, 6, 28, 1
  0160ccc  fsel 6, 8, 28, 2
  0160cd0  fsel 8, 9, 28, 3
  0160cd4  fsel 7, 7, 5, 1
  0160cd8  fsel 1, 13, 6, 2
  0160cdc  fsel 6, 4, 8, 3
  0160ce0  fmuls 2, 7, 11
  0160ce4  fmadds 2, 1, 12, 2
  0160ce8  fmadds 2, 6, 10, 2
  0160cec  fmuls 2, 2, 26
  0160cf0  fnmsubs 7, 7, 2, 11
  0160cf4  fnmsubs 8, 1, 2, 12
  0160cf8  fnmsubs 6, 6, 2, 10
  0160cfc  fmr 10, 28
  0160d00  fmuls 1, 7, 7
  0160d04  fmr 9, 10
  0160d08  fmadds 5, 8, 8, 1
  0160d0c  fmr 12, 9
  0160d10  fmadds 5, 6, 6, 5
  0160d14  fsqrts 1, 5
  0160d18  fcmpu 0, 1, 12
  0160d1c  bt 2, 0x160d60
  0160d20  frsqrte 1, 5
  0160d24  fmuls 2, 5, 1
  0160d28  fmuls 3, 1, 29
  0160d2c  fnmsubs 2, 2, 1, 27
  0160d30  fmadds 1, 2, 3, 1
  0160d34  fmuls 2, 5, 1
  0160d38  fmuls 3, 1, 29
  0160d3c  fnmsubs 2, 2, 1, 27
  0160d40  fmadds 1, 2, 3, 1
  0160d44  fmuls 2, 5, 1
  0160d48  fmuls 3, 1, 29
  0160d4c  fnmsubs 2, 2, 1, 27
  0160d50  fmadds 12, 2, 3, 1
  0160d54  fmuls 10, 12, 8
  0160d58  fmuls 9, 12, 7
  0160d5c  fmuls 12, 12, 6
  0160d60  fadds 1, 12, 27
  0160d64  fmuls 1, 1, 26
  0160d68  fsqrts 1, 1
  0160d6c  fmuls 1, 1, 26
  0160d70  fdivs 2, 9, 1
  0160d74  fdivs 4, 10, 1
  0160d78  fadds 10, 2, 29
  0160d7c  fadds 4, 4, 29
  0160d80  bt 6, 0x160d88
  0160d84  bf 26, 0x160d94
  0160d88  stfs 4, 0(4)
  0160d8c  stfs 10, 0(6)
  0160d90  b 0x160db8
  0160d94  lfs 1, 0(3)
  0160d98  lfs 2, 0(5)
  0160d9c  fsubs 1, 1, 4
  0160da0  fsubs 2, 2, 10
  0160da4  lfs 3, 320(1)
  0160da8  fmadds 1, 1, 3, 4
  0160dac  fmadds 2, 2, 3, 10
  0160db0  stfs 1, 0(4)
  0160db4  stfs 2, 0(6)
  0160db8  addic 8, 8, 1
  0160dbc  addic 3, 3, 8
  0160dc0  cmpw 8, 26
  0160dc4  addic 4, 4, 8
  0160dc8  addic 5, 5, 8
  0160dcc  addic 6, 6, 8
  0160dd0  addic 29, 29, 16
  0160dd4  addic 30, 30, 16
  0160dd8  addic 7, 7, 16
  0160ddc  bt 0, 0x160b60
  0160de0  lis 3, 115
  0160de4  lwz 3, 7312(3)
  0160de8  cmpwi 3, 1
  0160dec  bf 2, 0x161020
  0160df0  lis 3, 115
  0160df4  li 4, 2
  0160df8  stw 4, 7312(3)
  0160dfc  b 0x161020
  0160e00  lis 3, 115
  0160e04  lwz 3, 7316(3)
  0160e08  cmpwi 3, 1
  0160e0c  bf 2, 0x160f1c
  0160e10  lis 3, 115
  0160e14  cmpwi 26, 0
  0160e18  ori 8, 24, 0
  0160e1c  stw 24, 7316(3)
  0160e20  bf 1, 0x160fe0
  0160e24  lis 3, 165
  0160e28  lis 4, 165
  0160e2c  lis 7, 165
  0160e30  addic 3, 3, 26704
  0160e34  addic 4, 4, 27520
  0160e38  addic 7, 7, 25072
  0160e3c  addic 5, 3, 4
  0160e40  addic 6, 4, 4
  0160e44  lfs 1, 0(3)
  0160e48  lfs 2, 0(5)
  0160e4c  stfs 1, 0(4)
  0160e50  stfs 2, 0(6)
  0160e54  lfs 1, 128(1)
  0160e58  lfs 2, 4(30)
  0160e5c  lfs 3, 132(1)
  0160e60  lfs 4, 112(1)
  0160e64  fmuls 1, 1, 2
  0160e68  lfs 5, 0(30)
  0160e6c  fmuls 3, 3, 2
  0160e70  lfs 6, 136(1)
  0160e74  lfs 7, 116(1)
  0160e78  lfs 8, 140(1)
  0160e7c  fmuls 6, 6, 2
  0160e80  lfs 9, 120(1)
  0160e84  fmuls 2, 8, 2
  0160e88  lfs 8, 144(1)
  0160e8c  lfs 10, 8(30)
  0160e90  fmadds 1, 4, 5, 1
  0160e94  fmadds 3, 7, 5, 3
  0160e98  lfs 4, 124(1)
  0160e9c  addic 8, 8, 1
  0160ea0  lfs 7, 148(1)
  0160ea4  fmadds 6, 9, 5, 6
  0160ea8  lfs 9, 160(1)
  0160eac  fmadds 2, 4, 5, 2
  0160eb0  lfs 11, 152(1)
  0160eb4  cmpw 8, 26
  0160eb8  lfs 4, 12(30)
  0160ebc  addic 3, 3, 8
  0160ec0  lfs 5, 156(1)
  0160ec4  addic 4, 4, 8
  0160ec8  fmadds 1, 8, 10, 1
  0160ecc  addic 5, 5, 8
  0160ed0  fmadds 3, 7, 10, 3
  0160ed4  addic 6, 6, 8
  0160ed8  lfs 7, 164(1)
  0160edc  addic 30, 30, 16
  0160ee0  lfs 8, 168(1)
  0160ee4  fmadds 6, 11, 10, 6
  0160ee8  fmadds 2, 5, 10, 2
  0160eec  lfs 5, 172(1)
  0160ef0  fmadds 1, 9, 4, 1
  0160ef4  fmadds 3, 7, 4, 3
  0160ef8  fmadds 6, 8, 4, 6
  0160efc  fmadds 2, 5, 4, 2
  0160f00  stfs 1, 0(7)
  0160f04  stfs 3, 4(7)
  0160f08  stfs 6, 8(7)
  0160f0c  stfs 2, 12(7)
  0160f10  addic 7, 7, 16
  0160f14  bt 0, 0x160e44
  0160f18  b 0x160fe0
  0160f1c  cmpwi 26, 0
  0160f20  bf 1, 0x160fe0
  0160f24  lis 3, 165
  0160f28  addic 3, 3, 25072
  0160f2c  lfs 1, 128(1)
  0160f30  lfs 2, 4(30)
  0160f34  lfs 3, 132(1)
  0160f38  lfs 4, 112(1)
  0160f3c  fmuls 1, 1, 2
  0160f40  lfs 5, 0(30)
  0160f44  fmuls 3, 3, 2
  0160f48  lfs 6, 136(1)
  0160f4c  lfs 7, 116(1)
  0160f50  lfs 8, 140(1)
  0160f54  fmuls 6, 6, 2
  0160f58  lfs 9, 120(1)
  0160f5c  fmuls 2, 8, 2
  0160f60  lfs 8, 144(1)
  0160f64  lfs 10, 8(30)
  0160f68  fmadds 1, 4, 5, 1
  0160f6c  fmadds 3, 7, 5, 3
  0160f70  lfs 4, 124(1)
  0160f74  addic 26, 26, -1
  0160f78  lfs 7, 148(1)
  0160f7c  fmadds 6, 9, 5, 6
  0160f80  lfs 9, 160(1)
  0160f84  fmadds 2, 4, 5, 2
  0160f88  lfs 11, 152(1)
  0160f8c  cmpwi 26, 0
  0160f90  lfs 4, 12(30)
  0160f94  lfs 5, 156(1)
  0160f98  fmadds 1, 8, 10, 1
  0160f9c  addic 30, 30, 16
  0160fa0  fmadds 3, 7, 10, 3
  0160fa4  lfs 7, 164(1)
  0160fa8  lfs 8, 168(1)
  0160fac  fmadds 6, 11, 10, 6
  0160fb0  fmadds 2, 5, 10, 2
  0160fb4  lfs 5, 172(1)
  0160fb8  fmadds 1, 9, 4, 1
  0160fbc  fmadds 3, 7, 4, 3
  0160fc0  fmadds 6, 8, 4, 6
  0160fc4  fmadds 2, 5, 4, 2
  0160fc8  stfs 1, 0(3)
  0160fcc  stfs 3, 4(3)
  0160fd0  stfs 6, 8(3)
  0160fd4  stfs 2, 12(3)
  0160fd8  addic 3, 3, 16
  0160fdc  bt 1, 0x160f2c
  0160fe0  lis 3, 22
  0160fe4  vspltisw 2, -1
  0160fe8  li 5, 4
  0160fec  addi 3, 3, 1956
  0160ff0  lis 4, 114
  0160ff4  li 6, -3056
  0160ff8  vslw 2, 2, 2
  0160ffc  lvlx 3, 5, 3
  0161000  lis 3, 165
  0161004  vspltw 3, 3, 0
  0161008  lvlx 4, 6, 4
  016100c  li 4, 25028
  0161010  vmaddfp 2, 4, 3, 2
  0161014  vctsxs 2, 2, 0
  0161018  vspltw 2, 2, 0
  016101c  stvewx 2, 4, 3
  0161020  cmpwi 27, 0
  0161024  bf 1, 0x1610d4
  0161028  lis 31, 165
  016102c  lis 30, 165
  0161030  addic 31, 31, 25072
  0161034  addic 30, 30, 26704
  0161038  li 6, 4
  016103c  ori 3, 1, 0
  0161040  ori 4, 28, 0
  0161044  addic 5, 1, 176
  0161048  mtctr 6
  016104c  lhz 6, 0(4)
  0161050  addic 4, 4, 4
  0161054  extsh 6, 6
  0161058  sldi 7, 6, 4
  016105c  sldi 6, 6, 3
  0161060  addc 7, 7, 31
  0161064  addc 8, 6, 30
  0161068  clrldi 7, 7, 32
  016106c  lfs 1, 0(7)
  0161070  stfs 1, 0(5)
  0161074  lfs 1, 4(7)
  0161078  stfs 1, 4(5)
  016107c  lfs 1, 8(7)
  0161080  stfs 1, 8(5)
  0161084  lfs 1, 12(7)
  0161088  stfs 1, 12(5)
  016108c  lfsx 1, 30, 6
  0161090  lfs 2, 4(8)
  0161094  addic 5, 5, 16
  0161098  stfs 1, 256(3)
  016109c  stfs 2, 260(3)
  01610a0  addic 3, 3, 8
  01610a4  bdnz 0x16104c
  01610a8  addic 3, 1, 176
  01610ac  li 4, 0
  01610b0  li 5, 0
  01610b4  ori 6, 25, 0
  01610b8  li 7, 9
  01610bc  bl 0x72280
  01610c0  nop
  01610c4  addic 24, 24, 1
  01610c8  addic 28, 28, 16
  01610cc  cmpw 24, 27
  01610d0  bt 0, 0x161038
  01610d4  ld 0, 640(1)
  01610d8  mtlr 0
  01610dc  lfd 14, 480(1)
  01610e0  lfd 15, 488(1)
  01610e4  lfd 16, 496(1)
  01610e8  lfd 17, 504(1)
  01610ec  lfd 18, 512(1)
  01610f0  lfd 19, 520(1)
  01610f4  lfd 20, 528(1)
  01610f8  lfd 21, 536(1)
  01610fc  lfd 22, 544(1)
  0161100  lfd 23, 552(1)
  0161104  lfd 24, 560(1)
  0161108  lfd 25, 568(1)
  016110c  lfd 26, 576(1)
  0161110  lfd 27, 584(1)
  0161114  lfd 28, 592(1)
  0161118  lfd 29, 600(1)
  016111c  lfd 30, 608(1)
  0161120  lfd 31, 616(1)
  0161124  ld 24, 416(1)
  0161128  ld 25, 424(1)
  016112c  ld 26, 432(1)
  0161130  ld 27, 440(1)
  0161134  ld 28, 448(1)
  0161138  ld 29, 456(1)
  016113c  ld 30, 464(1)
  0161140  ld 31, 472(1)
  0161144  addi 1, 1, 624
  0161148  blr

TransitionDraw_Space:   # 0x16114c, 0x328 bytes
  016114c  stdu 1, -144(1)
  0161150  mflr 0
  0161154  std 0, 160(1)
  0161158  stfd 31, 136(1)
  016115c  std 31, 128(1)
  0161160  bl 0x78100
  0161164  nop
  0161168  bl 0x66088
  016116c  nop
  0161170  bl 0xf0fe8
  0161174  nop
  0161178  bl 0x6849c
  016117c  nop
  0161180  lis 31, 150
  0161184  lis 3, 161
  0161188  li 4, -1
  016118c  addic 31, 31, -12416
  0161190  stw 4, 1828(3)
  0161194  lis 3, 16161
  0161198  lwz 4, 176(31)
  016119c  ori 3, 3, 18350
  01611a0  lfs 31, 176(31)
  01611a4  srawi 5, 4, 31
  01611a8  srwi 6, 5, 1
  01611ac  xor 4, 6, 4
  01611b0  subc 4, 4, 5
  01611b4  cmpw 4, 3
  01611b8  bf 0, 0x1611c8
  01611bc  lis 3, 16161
  01611c0  ori 3, 3, 18350
  01611c4  stw 3, 176(31)
  01611c8  bl 0x668d0
  01611cc  nop
  01611d0  bl 0x66088
  01611d4  nop
  01611d8  bl 0x159e88
  01611dc  nop
  01611e0  stfs 31, 176(31)
  01611e4  bl 0x668d0
  01611e8  nop
  01611ec  bl 0x66088
  01611f0  nop
  01611f4  lis 31, 150
  01611f8  addic 31, 31, 17776
  01611fc  lwz 3, 88(31)
  0161200  cmpwi 3, 4
  0161204  bf 2, 0x161220
  0161208  li 3, 1
  016120c  bl 0x6d704
  0161210  nop
  0161214  bl 0x15f6d0
  0161218  bl 0x6d708
  016121c  nop
  0161220  bl 0xf1a78
  0161224  nop
  0161228  lis 3, 520
  016122c  bl 0x175554
  0161230  nop
  0161234  li 3, 1
  0161238  bl 0x6d704
  016123c  nop
  0161240  lis 3, 151
  0161244  lwz 3, -25488(3)
  0161248  cmpwi 3, 0
  016124c  bt 2, 0x16127c
  0161250  cmpwi 3, 1
  0161254  bf 2, 0x16126c
  0161258  lis 3, 151
  016125c  addic 3, 3, -13812
  0161260  lbz 3, 3(3)
  0161264  cmpwi 3, 0
  0161268  bt 2, 0x16127c
  016126c  lis 3, 150
  0161270  addic 3, 3, -12976
  0161274  lwz 3, 376(3)
  0161278  bl 0x15ef98
  016127c  lwz 3, 88(31)
  0161280  cmpwi 3, 4
  0161284  bf 2, 0x1613cc
  0161288  lis 3, 150
  016128c  addic 3, 3, -12976
  0161290  lwz 3, 52(3)
  0161294  cmpwi 3, 60
  0161298  bf 1, 0x1613cc
  016129c  slwi 3, 3, 1
  01612a0  li 4, 128
  01612a4  addic 3, 3, -120
  01612a8  li 5, 128
  01612ac  extsw 6, 3
  01612b0  subc 5, 5, 3
  01612b4  subc 4, 4, 6
  01612b8  li 8, 0
  01612bc  sradi 4, 4, 63
  01612c0  li 9, 1
  01612c4  and 4, 4, 5
  01612c8  li 10, 1
  01612cc  addc 31, 3, 4
  01612d0  li 3, 1
  01612d4  li 4, 0
  01612d8  li 5, 128
  01612dc  li 6, 1
  01612e0  li 7, 0
  01612e4  bl 0x502f7c
  01612e8  nop
  01612ec  ori 4, 3, 0
  01612f0  li 3, 22
  01612f4  bl 0x174f80
  01612f8  nop
  01612fc  li 3, 0
  0161300  li 4, 1
  0161304  li 5, 0
  0161308  li 6, 1
  016130c  li 7, 128
  0161310  bl 0x502ea8
  0161314  nop
  0161318  ori 4, 3, 0
  016131c  li 3, 3
  0161320  bl 0x174f80
  0161324  nop
  0161328  lis 4, 161
  016132c  lis 3, 165
  0161330  addic 4, 4, 2264
  0161334  lis 5, 128
  0161338  li 8, 0
  016133c  ori 5, 5, 32896
  0161340  ld 3, 25040(3)
  0161344  lwz 4, 72(4)
  0161348  rlwimi 5, 31, 24, 0, 6
  016134c  sldi 6, 3, 5
  0161350  sldi 3, 3, 2
  0161354  extsw 7, 5
  0161358  addc 3, 6, 3
  016135c  lwz 6, 12(4)
  0161360  li 5, 256
  0161364  li 4, 360
  0161368  addc 3, 6, 3
  016136c  std 7, 112(1)
  0161370  li 9, 256
  0161374  clrldi 10, 3, 32
  0161378  li 3, 32
  016137c  li 6, 32
  0161380  li 7, 0
  0161384  std 10, 120(1)
  0161388  li 10, 32
  016138c  bl 0x6889c
  0161390  nop
  0161394  li 3, 1
  0161398  li 4, 5
  016139c  li 8, 0
  01613a0  li 10, 2
  01613a4  li 5, 96
  01613a8  li 6, 3
  01613ac  li 7, 0
  01613b0  li 9, 1
  01613b4  bl 0x502f98
  01613b8  nop
  01613bc  ori 4, 3, 0
  01613c0  li 3, 22
  01613c4  bl 0x174f80
  01613c8  nop
  01613cc  lis 3, 151
  01613d0  lwz 3, -25488(3)
  01613d4  cmpwi 3, 0
  01613d8  cmpwi 1, 3, 1
  01613dc  bt 2, 0x161408
  01613e0  bf 6, 0x1613f8
  01613e4  lis 3, 151
  01613e8  addic 3, 3, -13812
  01613ec  lbz 3, 3(3)
  01613f0  cmpwi 3, 0
  01613f4  bt 2, 0x161408
  01613f8  lis 3, 150
  01613fc  addic 3, 3, -12976
  0161400  lwz 3, 376(3)
  0161404  bl 0x1607c0
  0161408  bl 0x6d708
  016140c  nop
  0161410  lis 3, 150
  0161414  lwz 3, -12528(3)
  0161418  srawi 4, 3, 31
  016141c  cmpwi 3, 0
  0161420  srwi 5, 4, 1
  0161424  xor 3, 5, 3
  0161428  subc 3, 3, 4
  016142c  bf 1, 0x161448
  0161430  lis 4, 16256
  0161434  cmpw 3, 4
  0161438  bf 1, 0x161448
  016143c  lis 3, 150
  0161440  lis 4, 16256
  0161444  stw 4, -12528(3)
  0161448  li 3, 16
  016144c  bl 0x174cf4
  0161450  nop
  0161454  bl 0xf1448
  0161458  nop
  016145c  ld 0, 160(1)
  0161460  mtlr 0
  0161464  lfd 31, 136(1)
  0161468  ld 31, 128(1)
  016146c  addi 1, 1, 144
  0161470  blr

Space_SpawnShipParticles:   # 0x161480, 0x244 bytes
  0161480  stdu 1, -272(1)
  0161484  mflr 0
  0161488  std 0, 288(1)
  016148c  stfd 28, 240(1)
  0161490  stfd 29, 248(1)
  0161494  stfd 30, 256(1)
  0161498  stfd 31, 264(1)
  016149c  std 30, 224(1)
  01614a0  lis 4, 22
  01614a4  lis 30, 115
  01614a8  fmr 31, 1
  01614ac  std 29, 216(1)
  01614b0  addi 4, 4, 5236
  01614b4  std 28, 208(1)
  01614b8  lis 29, 150
  01614bc  li 28, 0
  01614c0  std 31, 232(1)
  01614c4  addic 30, 30, 8352
  01614c8  ori 31, 3, 0
  01614cc  lfs 28, 0(4)
  01614d0  lfs 29, 4(4)
  01614d4  std 27, 200(1)
  01614d8  std 26, 192(1)
  01614dc  addic 29, 29, 17776
  01614e0  lfs 30, 8(4)
  01614e4  lis 27, 114
  01614e8  lfs 2, -3052(27)
  01614ec  fneg 1, 2
  01614f0  bl 0xfcbe8
  01614f4  nop
  01614f8  lfs 2, -3052(27)
  01614fc  stfs 1, 128(1)
  0161500  fneg 1, 2
  0161504  bl 0xfcbe8
  0161508  nop
  016150c  lfs 2, -3052(27)
  0161510  stfs 1, 132(1)
  0161514  fmuls 1, 2, 28
  0161518  fmuls 2, 2, 29
  016151c  bl 0xfcbe8
  0161520  nop
  0161524  lhz 3, 38(29)
  0161528  fadds 1, 1, 31
  016152c  lis 4, 16076
  0161530  extsh 3, 3
  0161534  lfs 2, 128(1)
  0161538  ori 4, 4, 52429
  016153c  lfs 3, 132(1)
  0161540  sldi 3, 3, 5
  0161544  lis 5, 16153
  0161548  addc 6, 3, 3
  016154c  stw 4, 140(1)
  0161550  addc 3, 3, 6
  0161554  stfs 2, 144(1)
  0161558  ori 5, 5, 39322
  016155c  addc 3, 30, 3
  0161560  clrldi 3, 3, 32
  0161564  stfs 1, 136(1)
  0161568  stfs 3, 148(1)
  016156c  stfs 1, 152(1)
  0161570  stw 5, 156(1)
  0161574  lfs 1, 0(3)
  0161578  stfs 1, 160(1)
  016157c  lfs 2, 4(3)
  0161580  stfs 2, 164(1)
  0161584  lfs 3, 8(3)
  0161588  stfs 3, 168(1)
  016158c  lfs 4, 12(3)
  0161590  lfs 5, 204(31)
  0161594  lis 3, 114
  0161598  fmadds 4, 5, 1, 4
  016159c  lfs 5, 208(31)
  01615a0  lfs 6, 236(31)
  01615a4  fmuls 5, 5, 2
  01615a8  lfs 7, 212(31)
  01615ac  lfs 8, 216(31)
  01615b0  fmuls 7, 7, 2
  01615b4  lfs 9, 192(31)
  01615b8  fmuls 8, 8, 2
  01615bc  lfs 10, 220(31)
  01615c0  lfs 11, 196(31)
  01615c4  fmadds 4, 6, 3, 4
  01615c8  lfs 6, 224(31)
  01615cc  lfs 12, 200(31)
  01615d0  fmadds 5, 9, 1, 5
  01615d4  lfs 13, 228(31)
  01615d8  lfs 9, 232(31)
  01615dc  fmadds 7, 11, 1, 7
  01615e0  fmadds 1, 12, 1, 8
  01615e4  fmadds 2, 10, 2, 4
  01615e8  fmadds 4, 6, 3, 5
  01615ec  fmadds 5, 13, 3, 7
  01615f0  fmadds 1, 9, 3, 1
  01615f4  stfs 2, 172(1)
  01615f8  lfs 2, -3056(3)
  01615fc  lfs 3, 16(31)
  0161600  fmuls 2, 2, 30
  0161604  lfs 6, 20(31)
  0161608  fadds 3, 4, 3
  016160c  lfs 4, 24(31)
  0161610  fadds 5, 5, 6
  0161614  fadds 1, 1, 4
  0161618  fctiwz 2, 2
  016161c  stfs 3, 160(1)
  0161620  stfs 5, 164(1)
  0161624  stfs 1, 168(1)
  0161628  stfd 2, 176(1)
  016162c  lwz 27, 180(1)
  0161630  extsw 26, 27
  0161634  ori 3, 26, 0
  0161638  bl 0xfc620
  016163c  nop
  0161640  li 9, -1
  0161644  addc 10, 27, 3
  0161648  lis 6, 9408
  016164c  lis 7, 5312
  0161650  std 9, 112(1)
  0161654  extsw 10, 10
  0161658  ori 6, 6, 49344
  016165c  addic 3, 1, 160
  0161660  ori 7, 7, 49344
  0161664  addic 4, 1, 128
  0161668  ori 8, 26, 0
  016166c  addic 5, 1, 144
  0161670  ori 9, 26, 0
  0161674  bl 0x1206e8
  0161678  nop
  016167c  addic 28, 28, 1
  0161680  addic 30, 30, 16
  0161684  cmpwi 28, 6
  0161688  bt 0, 0x1614e4
  016168c  ld 0, 288(1)
  0161690  mtlr 0
  0161694  lfd 28, 240(1)
  0161698  lfd 29, 248(1)
  016169c  lfd 30, 256(1)
  01616a0  lfd 31, 264(1)
  01616a4  ld 26, 192(1)
  01616a8  ld 27, 200(1)
  01616ac  ld 28, 208(1)
  01616b0  ld 29, 216(1)
  01616b4  ld 30, 224(1)
  01616b8  ld 31, 232(1)
  01616bc  addi 1, 1, 272
  01616c0  blr

UpdateSpace:   # 0x161788, 0x2220 bytes
  0161788  stdu 1, -752(1)
  016178c  mflr 0
  0161790  std 0, 768(1)
  0161794  stfd 14, 608(1)
  0161798  stfd 15, 616(1)
  016179c  stfd 16, 624(1)
  01617a0  stfd 17, 632(1)
  01617a4  stfd 18, 640(1)
  01617a8  stfd 19, 648(1)
  01617ac  stfd 20, 656(1)
  01617b0  stfd 21, 664(1)
  01617b4  stfd 22, 672(1)
  01617b8  stfd 23, 680(1)
  01617bc  stfd 24, 688(1)
  01617c0  stfd 25, 696(1)
  01617c4  stfd 26, 704(1)
  01617c8  stfd 27, 712(1)
  01617cc  stfd 28, 720(1)
  01617d0  stfd 29, 728(1)
  01617d4  stfd 30, 736(1)
  01617d8  stfd 31, 744(1)
  01617dc  std 28, 576(1)
  01617e0  addi 0, 1, 304
  01617e4  stvx 20, 0, 0
  01617e8  addic 0, 0, 16
  01617ec  stvx 21, 0, 0
  01617f0  addic 0, 0, 16
  01617f4  stvx 22, 0, 0
  01617f8  addic 0, 0, 16
  01617fc  stvx 23, 0, 0
  0161800  addic 0, 0, 16
  0161804  stvx 24, 0, 0
  0161808  addic 0, 0, 16
  016180c  stvx 25, 0, 0
  0161810  addic 0, 0, 16
  0161814  stvx 26, 0, 0
  0161818  addic 0, 0, 16
  016181c  stvx 27, 0, 0
  0161820  addic 0, 0, 16
  0161824  stvx 28, 0, 0
  0161828  addic 0, 0, 16
  016182c  stvx 29, 0, 0
  0161830  addic 0, 0, 16
  0161834  stvx 30, 0, 0
  0161838  addic 0, 0, 16
  016183c  stvx 31, 0, 0
  0161840  std 27, 568(1)
  0161844  lis 28, 150
  0161848  addic 27, 28, 17776
  016184c  lhz 4, 36(27)
  0161850  lwz 3, 32(27)
  0161854  addic 4, 4, 1
  0161858  cmpwi 3, 3
  016185c  cmpwi 1, 3, 0
  0161860  cmpwi 6, 3, -1
  0161864  cmpwi 7, 3, 1
  0161868  std 31, 600(1)
  016186c  std 30, 592(1)
  0161870  std 29, 584(1)
  0161874  std 26, 560(1)
  0161878  std 25, 552(1)
  016187c  std 24, 544(1)
  0161880  std 23, 536(1)
  0161884  std 22, 528(1)
  0161888  std 21, 520(1)
  016188c  std 20, 512(1)
  0161890  std 19, 504(1)
  0161894  sth 4, 36(27)
  0161898  bt 1, 0x1618b8
  016189c  bt 5, 0x1618a8
  01618a0  bf 25, 0x1638bc
  01618a4  b 0x1618dc
  01618a8  bf 29, 0x1638bc
  01618ac  cmpwi 3, 2
  01618b0  bf 1, 0x1638bc
  01618b4  b 0x162af0
  01618b8  cmpwi 3, 6
  01618bc  bt 1, 0x1618cc
  01618c0  cmpwi 3, 4
  01618c4  bf 1, 0x1638b8
  01618c8  b 0x1638bc
  01618cc  cmpwi 3, 7
  01618d0  bf 1, 0x1638bc
  01618d4  cmpwi 3, 8
  01618d8  bt 1, 0x1638bc
  01618dc  bl 0x166e30
  01618e0  nop
  01618e4  bl 0xfc168
  01618e8  nop
  01618ec  bl 0x15d7ac
  01618f0  nop
  01618f4  bl 0x954c8
  01618f8  nop
  01618fc  bl 0x11e8a0
  0161900  nop
  0161904  lis 26, 150
  0161908  lis 3, 22
  016190c  addic 26, 26, -12976
  0161910  addi 5, 3, 5828
  0161914  lis 11, 150
  0161918  lwz 9, 56(26)
  016191c  lwz 10, 52(26)
  0161920  addic 9, 9, 1
  0161924  addic 10, 10, 1
  0161928  ori 3, 9, 0
  016192c  stw 9, 56(26)
  0161930  stw 10, 52(26)
  0161934  lfs 1, 0(5)
  0161938  lfs 2, -12528(11)
  016193c  lhz 4, 40(27)
  0161940  fsubs 1, 2, 1
  0161944  lwz 6, 32(27)
  0161948  lhz 7, 38(27)
  016194c  lhz 8, 64(26)
  0161950  stfs 1, -12528(11)
  0161954  lfs 2, 4(5)
  0161958  fcmpu 0, 1, 2
  016195c  cror 6, 1, 2
  0161960  bt 6, 0x161974
  0161964  lis 5, 150
  0161968  fmr 1, 2
  016196c  li 11, 0
  0161970  stw 11, -12528(5)
  0161974  lis 5, 150
  0161978  li 12, 0
  016197c  lis 31, 150
  0161980  li 11, 96
  0161984  li 30, 80
  0161988  lwz 5, 27368(5)
  016198c  stfs 2, 280(1)
  0161990  subc 11, 11, 30
  0161994  subc 5, 12, 5
  0161998  addic 12, 31, 19008
  016199c  cntlzw 5, 5
  01619a0  extsh 4, 4
  01619a4  sldi 5, 5, 58
  01619a8  sradi 5, 5, 63
  01619ac  lwz 12, 164(12)
  01619b0  and 31, 5, 11
  01619b4  rlwinm 5, 12, 0, 25, 27
  01619b8  addc 31, 30, 31
  01619bc  cmpwi 5, 0
  01619c0  bt 2, 0x161a78
  01619c4  fmr 3, 1
  01619c8  lis 5, 22
  01619cc  lis 11, 114
  01619d0  addi 5, 5, 5828
  01619d4  lfs 4, 8(5)
  01619d8  lfs 1, -3056(11)
  01619dc  stfs 2, 280(1)
  01619e0  fcmpu 1, 3, 2
  01619e4  fmuls 2, 1, 4
  01619e8  fctiwz 2, 2
  01619ec  stfd 2, 288(1)
  01619f0  lwz 5, 292(1)
  01619f4  cmpw 10, 5
  01619f8  crnand 2, 1, 6
  01619fc  bt 2, 0x161a78
  0161a00  cmpwi 6, 0
  0161a04  bf 2, 0x161a60
  0161a08  lis 11, 115
  0161a0c  extsh 12, 7
  0161a10  addic 11, 11, 8736
  0161a14  sldi 12, 12, 2
  0161a18  lwzx 11, 11, 12
  0161a1c  addic 11, 11, -30
  0161a20  extsw 11, 11
  0161a24  std 11, 288(1)
  0161a28  lis 11, 22
  0161a2c  addi 11, 11, 5828
  0161a30  lfs 2, 12(11)
  0161a34  lfd 3, 288(1)
  0161a38  fcfid 3, 3
  0161a3c  frsp 3, 3
  0161a40  fadds 2, 3, 2
  0161a44  fmuls 1, 1, 2
  0161a48  fctiwz 1, 1
  0161a4c  stfd 1, 288(1)
  0161a50  lwz 11, 292(1)
  0161a54  cmpw 10, 11
  0161a58  bf 0, 0x161a60
  0161a5c  li 4, 1
  0161a60  cmpwi 6, 8
  0161a64  bf 2, 0x161a78
  0161a68  extsh 11, 8
  0161a6c  subc 5, 11, 5
  0161a70  cmpw 10, 5
  0161a74  bt 0, 0x161a80
  0161a78  cmpwi 4, 0
  0161a7c  bt 2, 0x161ba8
  0161a80  lis 4, 150
  0161a84  addic 4, 4, 14024
  0161a88  lhz 5, 102(4)
  0161a8c  cmpwi 1, 5, 7
  0161a90  cmpwi 5, 6
  0161a94  cror 2, 2, 6
  0161a98  bt 2, 0x161aa4
  0161a9c  li 5, 5
  0161aa0  sth 5, 102(4)
  0161aa4  cmpwi 6, 0
  0161aa8  bf 2, 0x161ba0
  0161aac  lis 3, 115
  0161ab0  extsh 4, 7
  0161ab4  addic 3, 3, 8736
  0161ab8  sldi 4, 4, 2
  0161abc  lwzx 5, 3, 4
  0161ac0  extsw 5, 5
  0161ac4  std 5, 288(1)
  0161ac8  lis 5, 22
  0161acc  lvlx 2, 4, 3
  0161ad0  addi 5, 5, 5828
  0161ad4  li 3, 12
  0161ad8  vcfsx 2, 2, 0
  0161adc  lis 4, 114
  0161ae0  lfs 1, 12(5)
  0161ae4  lvlx 3, 3, 5
  0161ae8  lfs 2, -3056(4)
  0161aec  lfd 3, 288(1)
  0161af0  li 3, -3056
  0161af4  vspltw 3, 3, 0
  0161af8  fcfid 3, 3
  0161afc  vaddfp 2, 2, 3
  0161b00  vspltisw 3, -1
  0161b04  lvlx 4, 3, 4
  0161b08  li 3, 52
  0161b0c  vslw 3, 3, 3
  0161b10  frsp 3, 3
  0161b14  vmaddfp 2, 4, 2, 3
  0161b18  fadds 1, 3, 1
  0161b1c  vctsxs 2, 2, 0
  0161b20  fmuls 1, 2, 1
  0161b24  fctiwz 1, 1
  0161b28  vspltw 2, 2, 0
  0161b2c  stfd 1, 288(1)
  0161b30  lwz 4, 292(1)
  0161b34  stvewx 2, 3, 26
  0161b38  divw 4, 4, 31
  0161b3c  extsw 3, 4
  0161b40  stw 4, 60(26)
  0161b44  bl 0xe07f8
  0161b48  nop
  0161b4c  lwz 10, 52(26)
  0161b50  divw 3, 10, 31
  0161b54  mullw 3, 3, 31
  0161b58  lhz 4, 40(27)
  0161b5c  subc 3, 10, 3
  0161b60  cmpwi 4, 0
  0161b64  stw 3, 56(26)
  0161b68  bt 2, 0x161b78
  0161b6c  li 4, 0
  0161b70  sth 4, 40(27)
  0161b74  b 0x161b8c
  0161b78  li 3, 4
  0161b7c  bl 0x6dad0
  0161b80  nop
  0161b84  lwz 3, 56(26)
  0161b88  lwz 10, 52(26)
  0161b8c  lis 4, 150
  0161b90  lis 5, 16256
  0161b94  ori 9, 3, 0
  0161b98  stw 5, -12528(4)
  0161b9c  b 0x161ba8
  0161ba0  extsh 10, 8
  0161ba4  stw 10, 52(26)
  0161ba8  lhz 4, 64(26)
  0161bac  extsh 4, 4
  0161bb0  cmpw 10, 4
  0161bb4  bt 0, 0x161d80
  0161bb8  lis 3, 150
  0161bbc  addic 3, 3, 14024
  0161bc0  lhz 4, 102(3)
  0161bc4  cmpwi 1, 4, 7
  0161bc8  cmpwi 4, 6
  0161bcc  cror 2, 2, 6
  0161bd0  bt 2, 0x161bdc
  0161bd4  li 4, 5
  0161bd8  sth 4, 102(3)
  0161bdc  bl 0x174bdc
  0161be0  nop
  0161be4  lis 3, 150
  0161be8  lis 4, 16161
  0161bec  addic 3, 3, -12416
  0161bf0  ori 4, 4, 18350
  0161bf4  stw 4, 176(3)
  0161bf8  bl 0x668d0
  0161bfc  nop
  0161c00  lhz 3, 68(26)
  0161c04  li 31, 0
  0161c08  extsh 3, 3
  0161c0c  ori 30, 31, 0
  0161c10  cmpwi 3, 0
  0161c14  bf 1, 0x161c84
  0161c18  ori 29, 26, 0
  0161c1c  lwz 3, 376(29)
  0161c20  cmpwi 3, 0
  0161c24  bt 2, 0x161c58
  0161c28  lwz 5, 36(3)
  0161c2c  lbz 6, 12(5)
  0161c30  addic 6, 6, -1
  0161c34  stb 6, 12(5)
  0161c38  lwz 4, 36(3)
  0161c3c  lbz 5, 12(4)
  0161c40  slwi 5, 5, 2
  0161c44  addc 4, 4, 5
  0161c48  clrldi 4, 4, 32
  0161c4c  stw 30, 72(4)
  0161c50  bl 0xefb38
  0161c54  nop
  0161c58  lwz 3, 8(27)
  0161c5c  cmpwi 3, 0
  0161c60  bt 2, 0x161c6c
  0161c64  bl 0xefb38
  0161c68  nop
  0161c6c  lhz 3, 68(26)
  0161c70  addic 31, 31, 1
  0161c74  addic 29, 29, 4
  0161c78  extsh 3, 3
  0161c7c  cmpw 31, 3
  0161c80  bt 0, 0x161c1c
  0161c84  lis 3, 164
  0161c88  lwz 4, 17776(28)
  0161c8c  lwz 28, -28508(3)
  0161c90  lhz 3, 52(4)
  0161c94  rlwinm 3, 3, 0, 0, 30
  0161c98  sth 3, 52(4)
  0161c9c  lbz 3, 32(28)
  0161ca0  cmpwi 3, 255
  0161ca4  bt 2, 0x161ce8
  0161ca8  lbz 3, 32(28)
  0161cac  rlwinm 3, 3, 0, 24, 24
  0161cb0  cmpwi 3, 0
  0161cb4  bf 2, 0x161cd8
  0161cb8  lhz 3, 166(28)
  0161cbc  cmpwi 3, 74
  0161cc0  cmpwi 1, 3, 203
  0161cc4  bt 2, 0x161ccc
  0161cc8  bf 6, 0x161cd8
  0161ccc  lhz 3, 52(28)
  0161cd0  rlwimi 3, 30, 0, 24, 24
  0161cd4  sth 3, 52(28)
  0161cd8  addic 28, 28, 256
  0161cdc  lbz 3, 32(28)
  0161ce0  cmpwi 3, 255
  0161ce4  bf 2, 0x161ca8
  0161ce8  lwz 3, 32(27)
  0161cec  cmpwi 3, 0
  0161cf0  bf 2, 0x161d1c
  0161cf4  li 3, 0
  0161cf8  bl 0x13abcc
  0161cfc  nop
  0161d00  lis 3, 165
  0161d04  li 4, 14
  0161d08  lis 5, 161
  0161d0c  li 6, 1
  0161d10  stw 4, 11184(3)
  0161d14  stw 6, 1820(5)
  0161d18  b 0x1638bc
  0161d1c  lis 3, 161
  0161d20  stw 30, 1800(3)
  0161d24  bl 0x11ce64
  0161d28  nop
  0161d2c  lis 3, 151
  0161d30  lis 4, 161
  0161d34  li 5, 1
  0161d38  addic 3, 3, -25376
  0161d3c  stw 5, 1820(4)
  0161d40  stb 30, 8357(3)
  0161d44  bl 0x7d478
  0161d48  nop
  0161d4c  lhz 3, 44(27)
  0161d50  cmpwi 3, 0
  0161d54  bt 2, 0x161d64
  0161d58  bl 0xaa9c8
  0161d5c  nop
  0161d60  b 0x1638bc
  0161d64  addic 3, 27, 96
  0161d68  addic 4, 27, 112
  0161d6c  li 5, 0
  0161d70  li 6, 1
  0161d74  bl 0xa0c38
  0161d78  nop
  0161d7c  b 0x1638bc
  0161d80  lis 4, 150
  0161d84  li 5, 0
  0161d88  li 6, 96
  0161d8c  li 7, 80
  0161d90  lwz 4, 27368(4)
  0161d94  subc 4, 5, 4
  0161d98  subc 5, 6, 7
  0161d9c  cntlzw 4, 4
  0161da0  sldi 4, 4, 58
  0161da4  sradi 4, 4, 63
  0161da8  and 4, 4, 5
  0161dac  addc 4, 7, 4
  0161db0  cmpw 9, 4
  0161db4  bt 0, 0x161dd4
  0161db8  lwz 3, 60(26)
  0161dbc  addic 4, 3, 1
  0161dc0  extsw 3, 4
  0161dc4  stw 4, 60(26)
  0161dc8  bl 0xe07f8
  0161dcc  nop
  0161dd0  lwz 3, 56(26)
  0161dd4  slwi 3, 3, 1
  0161dd8  lwz 5, 84(26)
  0161ddc  lis 4, 150
  0161de0  sldi 3, 3, 4
  0161de4  addic 4, 4, -12416
  0161de8  addc 3, 5, 3
  0161dec  clrldi 29, 3, 32
  0161df0  lfs 1, 28(29)
  0161df4  lbz 31, 12(29)
  0161df8  stfs 1, 176(4)
  0161dfc  bl 0x668d0
  0161e00  nop
  0161e04  lis 30, 149
  0161e08  lfs 1, 0(29)
  0161e0c  lwz 5, 17776(28)
  0161e10  addic 30, 30, 5056
  0161e14  addic 5, 5, 192
  0161e18  addic 3, 30, 320
  0161e1c  ori 4, 3, 0
  0161e20  stfs 1, 320(30)
  0161e24  lfs 1, 4(29)
  0161e28  stfs 1, 324(30)
  0161e2c  lfs 1, 8(29)
  0161e30  stfs 1, 328(30)
  0161e34  lfs 1, 12(29)
  0161e38  stfs 1, 332(30)
  0161e3c  bl 0x5e7d64
  0161e40  nop
  0161e44  lwz 3, 17776(28)
  0161e48  lfs 1, 320(30)
  0161e4c  lfs 2, 324(30)
  0161e50  lfs 3, 16(3)
  0161e54  fadds 1, 1, 3
  0161e58  lfs 3, 328(30)
  0161e5c  stfs 1, 320(30)
  0161e60  lfs 1, 20(3)
  0161e64  fadds 1, 2, 1
  0161e68  stfs 1, 324(30)
  0161e6c  lfs 1, 24(3)
  0161e70  fadds 1, 3, 1
  0161e74  stfs 1, 328(30)
  0161e78  lfs 1, 24(29)
  0161e7c  lfs 2, 72(3)
  0161e80  bl 0x502578
  0161e84  nop
  0161e88  lfs 2, 16(29)
  0161e8c  addic 25, 1, 160
  0161e90  stfs 2, 112(1)
  0161e94  lfs 2, 20(29)
  0161e98  lis 4, 101
  0161e9c  stfs 1, 120(1)
  0161ea0  ori 3, 25, 0
  0161ea4  stfs 2, 116(1)
  0161ea8  addic 4, 4, 14168
  0161eac  li 5, 64
  0161eb0  bl 0x5c5ad0
  0161eb4  nop
  0161eb8  addic 4, 1, 112
  0161ebc  ori 3, 25, 0
  0161ec0  bl 0x5e8c64
  0161ec4  nop
  0161ec8  lfs 1, 192(1)
  0161ecc  lfs 2, 160(1)
  0161ed0  lis 3, 151
  0161ed4  fneg 7, 1
  0161ed8  lfs 3, 196(1)
  0161edc  fneg 8, 2
  0161ee0  addic 3, 3, -16268
  0161ee4  lfs 2, 164(1)
  0161ee8  fneg 9, 3
  0161eec  lfs 5, 200(1)
  0161ef0  fneg 10, 2
  0161ef4  lfs 4, 168(1)
  0161ef8  fneg 11, 5
  0161efc  lfs 2, 176(1)
  0161f00  fneg 12, 4
  0161f04  stfs 2, 880(30)
  0161f08  lfs 4, 180(1)
  0161f0c  lfs 6, 184(1)
  0161f10  stfs 7, 848(30)
  0161f14  stfs 8, 864(30)
  0161f18  stfs 4, 884(30)
  0161f1c  stfs 9, 852(30)
  0161f20  stfs 10, 868(30)
  0161f24  lbz 3, 4(3)
  0161f28  stfs 11, 856(30)
  0161f2c  stfs 12, 872(30)
  0161f30  cmpwi 3, 0
  0161f34  stfs 6, 888(30)
  0161f38  lhz 3, 68(26)
  0161f3c  bt 2, 0x161f90
  0161f40  fmuls 7, 3, 6
  0161f44  fmuls 8, 5, 4
  0161f48  li 4, 0
  0161f4c  fmuls 5, 5, 2
  0161f50  fmuls 6, 1, 6
  0161f54  fmuls 1, 1, 4
  0161f58  fmuls 2, 3, 2
  0161f5c  stw 4, 876(30)
  0161f60  fneg 3, 7
  0161f64  fneg 4, 8
  0161f68  fneg 5, 5
  0161f6c  fneg 6, 6
  0161f70  fneg 1, 1
  0161f74  fneg 2, 2
  0161f78  fsubs 3, 3, 4
  0161f7c  fsubs 4, 5, 6
  0161f80  fsubs 1, 1, 2
  0161f84  stfs 3, 864(30)
  0161f88  stfs 4, 868(30)
  0161f8c  stfs 1, 872(30)
  0161f90  extsh 3, 3
  0161f94  li 30, 0
  0161f98  cmpwi 3, 0
  0161f9c  ori 25, 30, 0
  0161fa0  bf 1, 0x162acc
  0161fa4  lis 3, 22
  0161fa8  li 4, 28
  0161fac  addi 3, 3, 5828
  0161fb0  li 5, 20
  0161fb4  li 6, 32
  0161fb8  li 7, 92
  0161fbc  lfs 1, 12(3)
  0161fc0  lfs 2, 20(3)
  0161fc4  lfs 3, 28(3)
  0161fc8  lfs 21, 16(3)
  0161fcc  lfs 4, 32(3)
  0161fd0  lvlx 2, 4, 3
  0161fd4  lvlx 24, 5, 3
  0161fd8  li 4, 224
  0161fdc  vspltw 2, 2, 0
  0161fe0  li 5, 240
  0161fe4  lfs 22, 24(3)
  0161fe8  lvlx 3, 6, 3
  0161fec  stfs 1, 276(1)
  0161ff0  li 6, 88
  0161ff4  vspltw 3, 3, 0
  0161ff8  li 8, 140
  0161ffc  stfs 2, 272(1)
  0162000  li 9, 144
  0162004  stvx 2, 4, 1
  0162008  stfs 3, 268(1)
  016200c  lfs 23, 36(3)
  0162010  li 4, 76
  0162014  lfs 1, 72(3)
  0162018  lis 24, 151
  016201c  stvx 3, 5, 1
  0162020  lis 23, 112
  0162024  stfs 4, 264(1)
  0162028  li 5, 80
  016202c  lfs 24, 40(3)
  0162030  lis 22, 112
  0162034  lfs 25, 44(3)
  0162038  lis 21, 112
  016203c  lfs 26, 48(3)
  0162040  addic 24, 24, -16064
  0162044  lfs 27, 52(3)
  0162048  addic 23, 23, 31960
  016204c  lfs 2, 84(3)
  0162050  addic 22, 22, 31848
  0162054  lfs 28, 56(3)
  0162058  addic 21, 21, 31920
  016205c  lfs 29, 60(3)
  0162060  ori 20, 26, 0
  0162064  lfs 30, 64(3)
  0162068  lfs 31, 68(3)
  016206c  lvlx 25, 4, 3
  0162070  lvlx 26, 5, 3
  0162074  lvlx 20, 6, 3
  0162078  li 4, 124
  016207c  stfs 1, 260(1)
  0162080  li 5, 128
  0162084  lvlx 21, 7, 3
  0162088  li 6, 132
  016208c  lfs 14, 96(3)
  0162090  li 7, 136
  0162094  stfs 2, 256(1)
  0162098  lfs 20, 100(3)
  016209c  lfs 15, 104(3)
  01620a0  lfs 16, 108(3)
  01620a4  lfs 17, 112(3)
  01620a8  lfs 18, 116(3)
  01620ac  lfs 19, 120(3)
  01620b0  lvlx 22, 4, 3
  01620b4  li 4, 148
  01620b8  lvlx 23, 5, 3
  01620bc  lvlx 31, 6, 3
  01620c0  lvlx 27, 7, 3
  01620c4  lvlx 28, 8, 3
  01620c8  lvlx 29, 9, 3
  01620cc  lvlx 30, 4, 3
  01620d0  vspltw 24, 24, 0
  01620d4  vspltw 25, 25, 0
  01620d8  vspltw 26, 26, 0
  01620dc  vspltw 20, 20, 0
  01620e0  vspltw 21, 21, 0
  01620e4  vspltw 22, 22, 0
  01620e8  vspltw 23, 23, 0
  01620ec  vspltw 31, 31, 0
  01620f0  vspltw 27, 27, 0
  01620f4  vspltw 28, 28, 0
  01620f8  vspltw 29, 29, 0
  01620fc  vspltw 30, 30, 0
  0162100  lwz 3, 56(26)
  0162104  lwz 29, 376(20)
  0162108  srawi 4, 3, 1
  016210c  ori 3, 29, 0
  0162110  addic 5, 4, 1
  0162114  stb 4, 80(29)
  0162118  stb 5, 81(29)
  016211c  bl 0xef74c
  0162120  nop
  0162124  lwz 3, 56(26)
  0162128  clrlwi 3, 3, 31
  016212c  bl 0x502730
  0162130  nop
  0162134  lfs 11, 276(1)
  0162138  cmpwi 31, 0
  016213c  lwz 7, 120(29)
  0162140  fmuls 11, 1, 11
  0162144  lbz 6, 80(29)
  0162148  lbz 8, 81(29)
  016214c  stfs 11, 84(29)
  0162150  bt 2, 0x162170
  0162154  lwz 3, 56(26)
  0162158  clrlwi 3, 3, 31
  016215c  cmpwi 3, 0
  0162160  bt 2, 0x162170
  0162164  lis 3, 16256
  0162168  fmr 11, 21
  016216c  stw 3, 84(29)
  0162170  slwi 3, 8, 4
  0162174  slwi 4, 6, 4
  0162178  fsubs 1, 21, 11
  016217c  addc 3, 7, 3
  0162180  addc 4, 7, 4
  0162184  clrldi 3, 3, 32
  0162188  clrldi 4, 4, 32
  016218c  lfs 2, 0(3)
  0162190  lfs 3, 4(3)
  0162194  fmuls 2, 2, 11
  0162198  lfs 4, 8(3)
  016219c  fmuls 3, 3, 11
  01621a0  lfs 5, 0(4)
  01621a4  fmuls 4, 4, 11
  01621a8  lfs 6, 4(4)
  01621ac  lfs 7, 8(4)
  01621b0  addic 3, 29, 16
  01621b4  lfs 8, 12(4)
  01621b8  lwz 5, 17776(28)
  01621bc  stfs 8, 28(29)
  01621c0  ori 4, 3, 0
  01621c4  addic 5, 5, 192
  01621c8  fmadds 2, 5, 1, 2
  01621cc  fmadds 3, 6, 1, 3
  01621d0  fmadds 1, 7, 1, 4
  01621d4  stfs 2, 16(29)
  01621d8  stfs 3, 20(29)
  01621dc  stfs 1, 24(29)
  01621e0  bl 0x5e7d64
  01621e4  nop
  01621e8  lwz 4, 17776(28)
  01621ec  lfs 1, 16(29)
  01621f0  lfs 2, 20(29)
  01621f4  li 5, 255
  01621f8  lfs 3, 16(4)
  01621fc  fadds 1, 1, 3
  0162200  lfs 3, 24(29)
  0162204  ori 3, 29, 0
  0162208  stfs 1, 16(29)
  016220c  lfs 1, 20(4)
  0162210  fadds 1, 2, 1
  0162214  stfs 1, 20(29)
  0162218  lfs 1, 24(4)
  016221c  fadds 1, 3, 1
  0162220  stfs 1, 24(29)
  0162224  lfs 1, 72(4)
  0162228  stb 5, 113(29)
  016222c  stfs 1, 72(29)
  0162230  bl 0xf31a8
  0162234  nop
  0162238  li 3, 52
  016223c  lis 4, 114
  0162240  lhz 8, 166(29)
  0162244  li 5, -3056
  0162248  lwz 7, 52(26)
  016224c  cmpwi 8, 0
  0162250  lvlx 2, 3, 26
  0162254  lvlx 3, 5, 4
  0162258  lfs 11, -3056(4)
  016225c  bf 2, 0x162348
  0162260  lwz 3, 32(27)
  0162264  cmpwi 3, 0
  0162268  bf 2, 0x1622f0
  016226c  lis 3, 151
  0162270  lwz 3, -25488(3)
  0162274  cmpwi 3, 10
  0162278  bf 2, 0x162294
  016227c  lbz 3, 6(24)
  0162280  cmpwi 3, 0
  0162284  bf 2, 0x162294
  0162288  ori 7, 25, 0
  016228c  vspltisw 2, 0
  0162290  b 0x1622e4
  0162294  lfs 1, 272(1)
  0162298  extsw 3, 7
  016229c  vspltisw 4, -1
  01622a0  li 4, 0
  01622a4  fmuls 1, 11, 1
  01622a8  li 7, 24
  01622ac  subc 4, 4, 7
  01622b0  vslw 4, 4, 4
  01622b4  vmaddfp 3, 3, 24, 4
  01622b8  fctiwz 1, 1
  01622bc  vctsxs 3, 3, 0
  01622c0  stfd 1, 288(1)
  01622c4  lwz 5, 292(1)
  01622c8  extsw 5, 5
  01622cc  subc 3, 5, 3
  01622d0  sradi 3, 3, 63
  01622d4  vcmpgtsw 2, 2, 3
  01622d8  and 3, 3, 4
  01622dc  vandc 2, 31, 2
  01622e0  addc 7, 7, 3
  01622e4  vspltw 2, 2, 0
  01622e8  ori 9, 7, 0
  01622ec  b 0x162338
  01622f0  fmuls 1, 11, 22
  01622f4  li 9, 24
  01622f8  fctiwz 1, 1
  01622fc  stfd 1, 288(1)
  0162300  lwz 3, 292(1)
  0162304  cmpw 7, 3
  0162308  bf 1, 0x162330
  016230c  lis 3, 151
  0162310  vsldoi 2, 31, 31, 0
  0162314  lwz 3, -25488(3)
  0162318  cmpwi 3, 10
  016231c  bf 2, 0x162338
  0162320  lbz 3, 6(24)
  0162324  vsldoi 2, 31, 31, 0
  0162328  cmpwi 3, 0
  016232c  bf 2, 0x162338
  0162330  ori 9, 25, 0
  0162334  vspltisw 2, 0
  0162338  vspltb 2, 2, 3
  016233c  li 3, 127
  0162340  stvebx 2, 3, 29
  0162344  b 0x162444
  0162348  cmpwi 8, 10
  016234c  lbz 9, 127(29)
  0162350  bf 2, 0x162444
  0162354  li 3, 224
  0162358  vspltisw 4, -1
  016235c  vspltisw 5, -1
  0162360  li 4, 240
  0162364  extsw 5, 7
  0162368  li 6, 0
  016236c  vslw 4, 4, 4
  0162370  lvx 6, 3, 1
  0162374  lfs 1, 268(1)
  0162378  li 3, 32
  016237c  vslw 5, 5, 5
  0162380  fmuls 1, 11, 1
  0162384  lvx 7, 4, 1
  0162388  vmaddfp 4, 3, 6, 4
  016238c  lfs 2, 264(1)
  0162390  vmaddfp 3, 3, 7, 5
  0162394  lwz 4, 32(27)
  0162398  li 9, 24
  016239c  fmuls 2, 11, 2
  01623a0  lvlx 5, 3, 27
  01623a4  li 3, 24
  01623a8  subc 6, 6, 3
  01623ac  fctiwz 1, 1
  01623b0  vctsxs 4, 4, 0
  01623b4  fctiwz 2, 2
  01623b8  vctsxs 3, 3, 0
  01623bc  stfd 1, 288(1)
  01623c0  lwz 7, 292(1)
  01623c4  extsw 7, 7
  01623c8  subc 7, 7, 5
  01623cc  vcmpgtsw 3, 2, 3
  01623d0  stfd 2, 288(1)
  01623d4  sradi 7, 7, 63
  01623d8  lwz 10, 292(1)
  01623dc  vcmpgtsw 2, 2, 4
  01623e0  vand 3, 31, 3
  01623e4  and 6, 7, 6
  01623e8  vspltisw 4, 0
  01623ec  extsw 7, 10
  01623f0  vandc 2, 31, 2
  01623f4  li 10, 0
  01623f8  subc 5, 7, 5
  01623fc  li 7, 0
  0162400  vcmpequw 4, 5, 4
  0162404  addc 3, 3, 6
  0162408  subc 6, 9, 10
  016240c  subc 4, 7, 4
  0162410  vsel 2, 3, 2, 4
  0162414  sradi 5, 5, 63
  0162418  cntlzw 4, 4
  016241c  and 5, 5, 6
  0162420  vspltb 2, 2, 3
  0162424  addc 9, 10, 5
  0162428  sldi 4, 4, 58
  016242c  li 5, 127
  0162430  subc 3, 3, 9
  0162434  sradi 4, 4, 63
  0162438  and 3, 4, 3
  016243c  stvebx 2, 5, 29
  0162440  addc 9, 9, 3
  0162444  clrlwi 3, 9, 24
  0162448  cmpwi 3, 0
  016244c  bt 2, 0x162460
  0162450  ori 3, 29, 0
  0162454  bl 0x106468
  0162458  nop
  016245c  lhz 8, 166(29)
  0162460  cmpwi 8, 10
  0162464  bf 2, 0x162478
  0162468  ori 3, 29, 0
  016246c  bl 0x95aa8
  0162470  nop
  0162474  lhz 8, 166(29)
  0162478  cmpwi 8, 0
  016247c  bf 2, 0x1624fc
  0162480  ori 3, 29, 0
  0162484  bl 0xaa5e0
  0162488  nop
  016248c  lis 6, 151
  0162490  lwz 6, -25488(6)
  0162494  cmpwi 6, 10
  0162498  bf 2, 0x1624a8
  016249c  lbz 3, 6(24)
  01624a0  cmpwi 3, 0
  01624a4  bf 2, 0x1624b0
  01624a8  cmpwi 6, 13
  01624ac  bf 2, 0x1624fc
  01624b0  lwz 6, 8(27)
  01624b4  cmpwi 6, 0
  01624b8  bf 2, 0x1624ec
  01624bc  li 3, 1289
  01624c0  bl 0xefa28
  01624c4  nop
  01624c8  li 4, 64
  01624cc  lhz 5, 52(3)
  01624d0  ori 6, 3, 0
  01624d4  stw 3, 8(27)
  01624d8  ori 5, 5, 2054
  01624dc  sth 4, 50(3)
  01624e0  ld 4, 56(29)
  01624e4  sth 5, 52(3)
  01624e8  std 4, 56(6)
  01624ec  ori 3, 29, 0
  01624f0  ori 4, 6, 0
  01624f4  bl 0xaa8c8
  01624f8  nop
  01624fc  lhz 3, 166(29)
  0162500  extsh 3, 3
  0162504  cmpwi 1, 3, 533
  0162508  cmpwi 3, 531
  016250c  cror 2, 0, 5
  0162510  bt 2, 0x162ab4
  0162514  ori 3, 23, 0
  0162518  ori 4, 29, 0
  016251c  bl 0x6d7e0
  0162520  nop
  0162524  ori 3, 22, 0
  0162528  ori 4, 29, 0
  016252c  bl 0x6d720
  0162530  nop
  0162534  lwz 3, 32(27)
  0162538  cmpwi 3, 0
  016253c  bf 2, 0x1627ac
  0162540  lis 3, 114
  0162544  li 4, 52
  0162548  li 5, -3056
  016254c  lfs 1, -3056(3)
  0162550  lwz 8, 52(26)
  0162554  fmuls 2, 1, 22
  0162558  lvlx 2, 4, 26
  016255c  lvlx 3, 5, 3
  0162560  fctiwz 2, 2
  0162564  stfd 2, 288(1)
  0162568  lwz 3, 292(1)
  016256c  cmpw 8, 3
  0162570  bf 0, 0x16261c
  0162574  clrlwi 3, 8, 26
  0162578  addic 3, 3, -32
  016257c  bl 0x502730
  0162580  nop
  0162584  fmadds 1, 1, 23, 24
  0162588  li 4, 533
  016258c  lhz 3, 166(29)
  0162590  subc 3, 4, 3
  0162594  cntlzw 3, 3
  0162598  fsubs 2, 25, 1
  016259c  fsubs 3, 26, 1
  01625a0  sldi 3, 3, 58
  01625a4  sradi 3, 3, 63
  01625a8  fsub 4, 1, 2
  01625ac  fsel 1, 4, 2, 1
  01625b0  fsub 2, 3, 1
  01625b4  fsel 1, 2, 3, 1
  01625b8  fmuls 2, 1, 1
  01625bc  fmuls 3, 2, 1
  01625c0  fmuls 4, 2, 3
  01625c4  fmadds 1, 3, 27, 1
  01625c8  fmuls 3, 2, 4
  01625cc  fmadds 1, 4, 28, 1
  01625d0  fmuls 2, 2, 3
  01625d4  fmadds 1, 3, 29, 1
  01625d8  fmadds 1, 2, 30, 1
  01625dc  fmuls 1, 1, 31
  01625e0  fctiwz 1, 1
  01625e4  stfd 1, 288(1)
  01625e8  lwz 4, 292(1)
  01625ec  addic 4, 4, 120
  01625f0  slwi 5, 4, 8
  01625f4  srawi 6, 4, 1
  01625f8  or 7, 4, 5
  01625fc  or 5, 6, 5
  0162600  slwi 4, 4, 16
  0162604  subc 5, 5, 7
  0162608  and 3, 3, 5
  016260c  addc 3, 7, 3
  0162610  or 3, 3, 4
  0162614  stw 3, 144(29)
  0162618  b 0x162ab4
  016261c  lfs 2, 260(1)
  0162620  fmuls 2, 1, 2
  0162624  fctiwz 2, 2
  0162628  stfd 2, 288(1)
  016262c  lwz 3, 292(1)
  0162630  cmpw 8, 3
  0162634  bf 0, 0x162774
  0162638  vcfsx 5, 2, 0
  016263c  vspltisw 4, -1
  0162640  lis 3, 114
  0162644  li 4, -3064
  0162648  vspltisw 6, -1
  016264c  vspltisw 7, -16
  0162650  vslw 4, 4, 4
  0162654  vslw 6, 6, 6
  0162658  lvlx 2, 4, 3
  016265c  li 3, 166
  0162660  vmaddfp 4, 2, 25, 4
  0162664  addi 4, 3, 16
  0162668  vnmsubfp 5, 3, 26, 5
  016266c  lvlx 8, 3, 29
  0162670  li 3, 144
  0162674  vmaddfp 4, 4, 5, 6
  0162678  lvrx 5, 4, 29
  016267c  vspltisw 6, 8
  0162680  vor 5, 8, 5
  0162684  lfs 2, 256(1)
  0162688  li 4, 52
  016268c  fmuls 2, 1, 2
  0162690  vsrw 5, 5, 7
  0162694  vcmpequw 5, 5, 29
  0162698  vctsxs 4, 4, 0
  016269c  fctiwz 2, 2
  01626a0  vcmpgtsw 7, 4, 27
  01626a4  vsel 4, 4, 27, 7
  01626a8  vslw 6, 4, 6
  01626ac  vslw 7, 4, 28
  01626b0  vor 4, 4, 6
  01626b4  vsel 4, 4, 6, 5
  01626b8  vor 4, 4, 7
  01626bc  vspltw 4, 4, 0
  01626c0  stvewx 4, 3, 29
  01626c4  lwz 29, 52(26)
  01626c8  stfd 2, 288(1)
  01626cc  lvlx 4, 4, 26
  01626d0  lwz 3, 292(1)
  01626d4  cmpw 29, 3
  01626d8  bf 1, 0x162730
  01626dc  vcfsx 4, 4, 0
  01626e0  vspltisw 5, -1
  01626e4  vspltisw 6, -1
  01626e8  li 5, 188
  01626ec  lwz 6, 17776(28)
  01626f0  ori 3, 21, 0
  01626f4  vslw 5, 5, 5
  01626f8  vslw 6, 6, 6
  01626fc  ori 4, 6, 0
  0162700  vmaddfp 2, 2, 20, 5
  0162704  vnmsubfp 3, 3, 21, 4
  0162708  vmaddfp 2, 2, 3, 6
  016270c  vctsxs 2, 2, 0
  0162710  vspltb 2, 2, 3
  0162714  stvebx 2, 5, 6
  0162718  sth 25, 178(6)
  016271c  bl 0x6d720
  0162720  nop
  0162724  lis 3, 114
  0162728  lwz 29, 52(26)
  016272c  lfs 1, -3056(3)
  0162730  fmuls 1, 1, 14
  0162734  fctiwz 1, 1
  0162738  stfd 1, 288(1)
  016273c  lwz 3, 292(1)
  0162740  cmpw 29, 3
  0162744  bf 1, 0x162ab4
  0162748  lis 3, 150
  016274c  lfs 1, -12524(3)
  0162750  fadds 1, 1, 20
  0162754  fcmpu 0, 1, 21
  0162758  stfs 1, -12524(3)
  016275c  cror 6, 0, 2
  0162760  bt 6, 0x162ab4
  0162764  lis 3, 150
  0162768  lis 4, 16256
  016276c  stw 4, -12524(3)
  0162770  b 0x162ab4
  0162774  lis 3, 150
  0162778  lis 4, 160
  016277c  ori 4, 4, 41120
  0162780  lfs 1, -12524(3)
  0162784  lfs 2, 280(1)
  0162788  fsubs 1, 1, 20
  016278c  stw 4, 144(29)
  0162790  fcmpu 0, 1, 2
  0162794  stfs 1, -12524(3)
  0162798  cror 6, 1, 2
  016279c  bt 6, 0x162ab4
  01627a0  lis 3, 150
  01627a4  stw 25, -12524(3)
  01627a8  b 0x162ab4
  01627ac  lis 3, 114
  01627b0  li 4, -3056
  01627b4  li 5, 52
  01627b8  lfs 1, -3056(3)
  01627bc  lwz 8, 52(26)
  01627c0  fmuls 2, 1, 15
  01627c4  lvlx 2, 4, 3
  01627c8  lvlx 3, 5, 26
  01627cc  fctiwz 2, 2
  01627d0  stfd 2, 288(1)
  01627d4  lwz 3, 292(1)
  01627d8  cmpw 8, 3
  01627dc  bf 0, 0x1628e8
  01627e0  fmuls 1, 1, 16
  01627e4  fctiwz 1, 1
  01627e8  stfd 1, 288(1)
  01627ec  lwz 3, 292(1)
  01627f0  cmpw 8, 3
  01627f4  bf 0, 0x162820
  01627f8  lis 19, 114
  01627fc  ori 3, 29, 0
  0162800  lfs 1, -3052(19)
  0162804  fmuls 1, 1, 17
  0162808  bl 0x161480
  016280c  lfs 1, -3052(19)
  0162810  ori 3, 29, 0
  0162814  fmuls 1, 1, 18
  0162818  bl 0x161480
  016281c  lwz 8, 52(26)
  0162820  clrlwi 3, 8, 26
  0162824  addic 3, 3, -32
  0162828  bl 0x502730
  016282c  nop
  0162830  fmadds 1, 1, 23, 24
  0162834  lhz 3, 166(29)
  0162838  li 4, 533
  016283c  li 6, 50
  0162840  subc 3, 4, 3
  0162844  li 7, 10
  0162848  cntlzw 3, 3
  016284c  fsubs 2, 25, 1
  0162850  fsubs 3, 26, 1
  0162854  sldi 3, 3, 58
  0162858  ori 4, 29, 0
  016285c  sradi 5, 3, 63
  0162860  ori 3, 21, 0
  0162864  fsub 4, 1, 2
  0162868  fsel 1, 4, 2, 1
  016286c  fsub 2, 3, 1
  0162870  fsel 1, 2, 3, 1
  0162874  fmuls 2, 1, 1
  0162878  fmuls 3, 2, 1
  016287c  fmuls 4, 2, 3
  0162880  fmadds 1, 3, 27, 1
  0162884  fmuls 3, 2, 4
  0162888  fmadds 1, 4, 28, 1
  016288c  fmuls 2, 2, 3
  0162890  fmadds 1, 3, 29, 1
  0162894  fmadds 1, 2, 30, 1
  0162898  fmuls 1, 1, 31
  016289c  fctiwz 1, 1
  01628a0  stfd 1, 288(1)
  01628a4  lwz 8, 292(1)
  01628a8  stb 6, 188(29)
  01628ac  addic 8, 8, 120
  01628b0  sth 7, 178(29)
  01628b4  slwi 9, 8, 8
  01628b8  srawi 11, 8, 1
  01628bc  or 10, 8, 9
  01628c0  or 9, 11, 9
  01628c4  slwi 8, 8, 16
  01628c8  subc 9, 9, 10
  01628cc  and 5, 5, 9
  01628d0  addc 5, 10, 5
  01628d4  or 5, 5, 8
  01628d8  stw 5, 144(29)
  01628dc  bl 0x6d720
  01628e0  nop
  01628e4  b 0x162ab4
  01628e8  fmuls 2, 1, 22
  01628ec  fctiwz 2, 2
  01628f0  stfd 2, 288(1)
  01628f4  lwz 3, 292(1)
  01628f8  cmpw 8, 3
  01628fc  bt 1, 0x162a10
  0162900  fmuls 1, 1, 19
  0162904  vsldoi 4, 3, 3, 0
  0162908  vsldoi 5, 2, 2, 0
  016290c  fctiwz 1, 1
  0162910  stfd 1, 288(1)
  0162914  lwz 3, 292(1)
  0162918  cmpw 8, 3
  016291c  bf 0, 0x16298c
  0162920  vcfsx 3, 3, 0
  0162924  vspltisw 4, -1
  0162928  lis 3, 114
  016292c  li 4, -3064
  0162930  vspltisw 5, -1
  0162934  li 5, 188
  0162938  vslw 4, 4, 4
  016293c  vslw 5, 5, 5
  0162940  lvlx 6, 4, 3
  0162944  vmaddfp 4, 6, 22, 4
  0162948  ori 3, 21, 0
  016294c  lwz 6, 17776(28)
  0162950  vnmsubfp 2, 2, 23, 3
  0162954  ori 4, 6, 0
  0162958  vxor 2, 2, 30
  016295c  vmaddfp 2, 4, 2, 5
  0162960  vctsxs 2, 2, 0
  0162964  vspltb 2, 2, 3
  0162968  stvebx 2, 5, 6
  016296c  sth 25, 178(6)
  0162970  bl 0x6d720
  0162974  nop
  0162978  lis 3, 114
  016297c  li 4, -3056
  0162980  li 5, 52
  0162984  lvlx 5, 4, 3
  0162988  lvlx 4, 5, 26
  016298c  vspltw 2, 4, 0
  0162990  lis 3, 114
  0162994  vspltw 3, 5, 0
  0162998  li 4, -3064
  016299c  vspltisw 4, -1
  01629a0  vcfsx 2, 2, 0
  01629a4  vslw 4, 4, 4
  01629a8  lvlx 5, 4, 3
  01629ac  li 3, 166
  01629b0  vmaddfp 4, 5, 25, 4
  01629b4  vspltisw 5, -1
  01629b8  addi 4, 3, 16
  01629bc  lvlx 6, 3, 29
  01629c0  li 3, 144
  01629c4  vnmsubfp 2, 3, 26, 2
  01629c8  vslw 3, 5, 5
  01629cc  vspltisw 5, -16
  01629d0  vxor 2, 2, 30
  01629d4  vmaddfp 2, 4, 2, 3
  01629d8  lvrx 3, 4, 29
  01629dc  vspltisw 4, 8
  01629e0  vor 3, 6, 3
  01629e4  vsrw 3, 3, 5
  01629e8  vcmpequw 3, 3, 29
  01629ec  vctsxs 2, 2, 0
  01629f0  vslw 4, 2, 4
  01629f4  vslw 5, 2, 28
  01629f8  vor 2, 2, 4
  01629fc  vsel 2, 2, 4, 3
  0162a00  vor 2, 2, 5
  0162a04  vspltw 2, 2, 0
  0162a08  stvewx 2, 3, 29
  0162a0c  b 0x162ab4
  0162a10  clrlwi 3, 8, 26
  0162a14  addic 3, 3, -32
  0162a18  bl 0x502730
  0162a1c  nop
  0162a20  fmadds 1, 1, 23, 24
  0162a24  lhz 3, 166(29)
  0162a28  li 4, 533
  0162a2c  subc 3, 4, 3
  0162a30  cntlzw 3, 3
  0162a34  fsubs 2, 25, 1
  0162a38  fsubs 3, 26, 1
  0162a3c  sldi 3, 3, 58
  0162a40  sradi 3, 3, 63
  0162a44  fsub 4, 1, 2
  0162a48  fsel 1, 4, 2, 1
  0162a4c  fsub 2, 3, 1
  0162a50  fsel 1, 2, 3, 1
  0162a54  fmuls 2, 1, 1
  0162a58  fmuls 3, 2, 1
  0162a5c  fmuls 4, 2, 3
  0162a60  fmadds 1, 3, 27, 1
  0162a64  fmuls 3, 2, 4
  0162a68  fmadds 1, 4, 28, 1
  0162a6c  fmuls 2, 2, 3
  0162a70  fmadds 1, 3, 29, 1
  0162a74  fmadds 1, 2, 30, 1
  0162a78  fmuls 1, 1, 31
  0162a7c  fctiwz 1, 1
  0162a80  stfd 1, 288(1)
  0162a84  lwz 4, 292(1)
  0162a88  addic 4, 4, 120
  0162a8c  slwi 5, 4, 8
  0162a90  srawi 7, 4, 1
  0162a94  or 6, 4, 5
  0162a98  or 5, 7, 5
  0162a9c  slwi 4, 4, 16
  0162aa0  subc 5, 5, 6
  0162aa4  and 3, 3, 5
  0162aa8  addc 3, 6, 3
  0162aac  or 3, 3, 4
  0162ab0  stw 3, 144(29)
  0162ab4  lhz 3, 68(26)
  0162ab8  addic 30, 30, 1
  0162abc  addic 20, 20, 4
  0162ac0  extsh 3, 3
  0162ac4  cmpw 30, 3
  0162ac8  bt 0, 0x162100
  0162acc  bl 0x15be68
  0162ad0  nop
  0162ad4  bl 0xdafb8
  0162ad8  nop
  0162adc  bl 0xf1478
  0162ae0  nop
  0162ae4  bl 0x166e88
  0162ae8  nop
  0162aec  b 0x1638bc
  0162af0  bl 0x166e30
  0162af4  nop
  0162af8  bl 0xfc168
  0162afc  nop
  0162b00  bl 0x15d7ac
  0162b04  nop
  0162b08  bl 0x954c8
  0162b0c  nop
  0162b10  bl 0x11e8a0
  0162b14  nop
  0162b18  lhz 3, 36(27)
  0162b1c  cmpwi 3, 0
  0162b20  bf 2, 0x162f2c
  0162b24  li 3, 0
  0162b28  bl 0x11ce20
  0162b2c  nop
  0162b30  li 3, 0
  0162b34  bl 0x11dbcc
  0162b38  nop
  0162b3c  lhz 3, 38(27)
  0162b40  lis 4, 0
  0162b44  lis 31, 150
  0162b48  extsh 3, 3
  0162b4c  lis 5, 22
  0162b50  ori 4, 4, 40015
  0162b54  addic 31, 31, 14024
  0162b58  addi 5, 5, 5828
  0162b5c  addc 3, 3, 4
  0162b60  lis 4, 114
  0162b64  stw 3, 28(31)
  0162b68  lfs 1, 152(5)
  0162b6c  lfs 2, -3056(4)
  0162b70  fmuls 1, 2, 1
  0162b74  fctiwz 1, 1
  0162b78  stfd 1, 288(1)
  0162b7c  lwz 3, 292(1)
  0162b80  extsw 3, 3
  0162b84  bl 0x6dad0
  0162b88  nop
  0162b8c  lhz 3, 102(31)
  0162b90  cmpwi 3, 3
  0162b94  bt 2, 0x162bb8
  0162b98  bl 0x15be68
  0162b9c  nop
  0162ba0  li 3, 0
  0162ba4  bl 0x503078
  0162ba8  nop
  0162bac  lhz 3, 102(31)
  0162bb0  cmpwi 3, 3
  0162bb4  bf 2, 0x162b98
  0162bb8  bl 0x11c830
  0162bbc  nop
  0162bc0  lwz 5, 17776(28)
  0162bc4  lis 3, 22
  0162bc8  li 4, 1
  0162bcc  li 6, 2
  0162bd0  addi 7, 3, 5828
  0162bd4  li 31, 0
  0162bd8  stb 4, 82(5)
  0162bdc  stb 6, 83(5)
  0162be0  ori 3, 5, 0
  0162be4  lfs 30, 4(7)
  0162be8  stw 31, 84(5)
  0162bec  bl 0xef74c
  0162bf0  nop
  0162bf4  lwz 4, 17776(28)
  0162bf8  li 3, 255
  0162bfc  stb 3, 114(4)
  0162c00  lwz 3, 48(27)
  0162c04  stw 31, 148(4)
  0162c08  cmpwi 3, 0
  0162c0c  bt 0, 0x162c8c
  0162c10  li 3, 0
  0162c14  bl 0xefa28
  0162c18  nop
  0162c1c  lis 4, 151
  0162c20  stw 3, 16(27)
  0162c24  li 31, 255
  0162c28  lhz 5, 52(3)
  0162c2c  li 30, 0
  0162c30  addic 29, 4, -25376
  0162c34  li 26, 511
  0162c38  stb 31, 114(3)
  0162c3c  stw 30, 148(3)
  0162c40  ori 4, 5, 6
  0162c44  lwz 5, 8320(29)
  0162c48  sth 26, 50(3)
  0162c4c  sth 4, 52(3)
  0162c50  ld 4, 56(5)
  0162c54  std 4, 56(3)
  0162c58  li 3, 10
  0162c5c  bl 0xefa28
  0162c60  nop
  0162c64  stw 3, 20(27)
  0162c68  stb 31, 114(3)
  0162c6c  stw 30, 148(3)
  0162c70  lhz 4, 52(3)
  0162c74  lwz 5, 8320(29)
  0162c78  ori 4, 4, 6
  0162c7c  sth 26, 50(3)
  0162c80  ld 5, 56(5)
  0162c84  sth 4, 52(3)
  0162c88  std 5, 56(3)
  0162c8c  lis 3, 149
  0162c90  li 5, 1
  0162c94  addic 4, 3, 5056
  0162c98  li 6, 0
  0162c9c  addic 3, 4, 320
  0162ca0  addic 4, 4, 336
  0162ca4  li 7, 0
  0162ca8  bl 0x47f74
  0162cac  nop
  0162cb0  li 3, 0
  0162cb4  lwz 30, 48(27)
  0162cb8  cmpwi 30, 0
  0162cbc  stw 3, 72(27)
  0162cc0  stw 3, 76(27)
  0162cc4  bt 0, 0x162f2c
  0162cc8  lis 3, 165
  0162ccc  slwi 4, 30, 2
  0162cd0  fmr 31, 30
  0162cd4  addic 30, 3, 7136
  0162cd8  extsw 3, 4
  0162cdc  li 4, 0
  0162ce0  lwzx 30, 30, 3
  0162ce4  lwz 3, 0(30)
  0162ce8  stw 4, 28(30)
  0162cec  addic 4, 3, -1
  0162cf0  cmpwi 4, 1
  0162cf4  bf 1, 0x162d7c
  0162cf8  addic 29, 30, 16
  0162cfc  fmr 31, 30
  0162d00  li 31, 1
  0162d04  lfs 1, 16(29)
  0162d08  lfs 2, 0(29)
  0162d0c  lfs 3, 20(29)
  0162d10  fsubs 1, 1, 2
  0162d14  lfs 4, 4(29)
  0162d18  fsubs 2, 3, 4
  0162d1c  bl 0x5e8338
  0162d20  nop
  0162d24  fmr 30, 1
  0162d28  lfs 1, 32(29)
  0162d2c  lfs 2, 16(29)
  0162d30  lfs 3, 36(29)
  0162d34  fsubs 1, 1, 2
  0162d38  lfs 4, 20(29)
  0162d3c  fsubs 2, 3, 4
  0162d40  bl 0x5e8338
  0162d44  nop
  0162d48  fmr 2, 30
  0162d4c  bl 0x5025e0
  0162d50  nop
  0162d54  fabs 2, 1
  0162d58  addic 31, 31, 1
  0162d5c  lwz 3, 0(30)
  0162d60  stfs 1, 28(29)
  0162d64  addic 4, 3, -1
  0162d68  addic 29, 29, 16
  0162d6c  cmpw 31, 4
  0162d70  fsub 1, 31, 2
  0162d74  fsel 31, 1, 31, 2
  0162d78  bt 0, 0x162d04
  0162d7c  slwi 3, 3, 4
  0162d80  addc 4, 30, 3
  0162d84  extsw 3, 3
  0162d88  clrldi 4, 4, 32
  0162d8c  lfsx 1, 30, 3
  0162d90  lfs 2, -16(4)
  0162d94  lfs 3, 4(4)
  0162d98  fsubs 1, 1, 2
  0162d9c  lfs 4, -12(4)
  0162da0  fsubs 2, 3, 4
  0162da4  bl 0x5e8338
  0162da8  nop
  0162dac  lwz 3, 0(30)
  0162db0  fmr 30, 1
  0162db4  slwi 3, 3, 4
  0162db8  lfs 1, 16(30)
  0162dbc  extsw 4, 3
  0162dc0  addc 3, 30, 3
  0162dc4  lfs 2, 20(30)
  0162dc8  clrldi 3, 3, 32
  0162dcc  lfsx 3, 30, 4
  0162dd0  fsubs 1, 1, 3
  0162dd4  lfs 3, 4(3)
  0162dd8  fsubs 2, 2, 3
  0162ddc  bl 0x5e8338
  0162de0  nop
  0162de4  fmr 2, 30
  0162de8  bl 0x5025e0
  0162dec  nop
  0162df0  lwz 3, 0(30)
  0162df4  lis 4, 22
  0162df8  slwi 5, 3, 4
  0162dfc  addi 4, 4, 5828
  0162e00  addc 5, 30, 5
  0162e04  cmpwi 3, 0
  0162e08  clrldi 5, 5, 32
  0162e0c  stfs 1, 12(5)
  0162e10  lfs 1, 156(4)
  0162e14  fdivs 31, 1, 31
  0162e18  bf 1, 0x162e44
  0162e1c  ori 4, 30, 0
  0162e20  li 3, 0
  0162e24  lfs 1, 28(4)
  0162e28  addic 3, 3, 1
  0162e2c  lwz 5, 0(30)
  0162e30  fmuls 1, 1, 31
  0162e34  cmpw 3, 5
  0162e38  stfs 1, 28(4)
  0162e3c  addic 4, 4, 16
  0162e40  bt 0, 0x162e24
  0162e44  lfs 3, 20(30)
  0162e48  lfs 1, 36(30)
  0162e4c  lfs 4, 16(30)
  0162e50  fsubs 5, 3, 1
  0162e54  lfs 6, 32(30)
  0162e58  lfs 8, 24(30)
  0162e5c  fsubs 7, 4, 6
  0162e60  lfs 2, 40(30)
  0162e64  fsubs 2, 8, 2
  0162e68  li 3, 0
  0162e6c  fsubs 1, 1, 3
  0162e70  fmuls 5, 5, 5
  0162e74  stw 3, 60(27)
  0162e78  stw 3, 64(27)
  0162e7c  fsubs 6, 6, 4
  0162e80  stw 3, 80(27)
  0162e84  stw 3, 84(27)
  0162e88  lwz 3, 17776(28)
  0162e8c  fmuls 1, 1, 1
  0162e90  fmadds 5, 7, 7, 5
  0162e94  fmadds 1, 6, 6, 1
  0162e98  fmadds 5, 2, 2, 5
  0162e9c  fsqrts 1, 1
  0162ea0  fsqrts 5, 5
  0162ea4  stfs 5, 68(27)
  0162ea8  lfs 5, 16(3)
  0162eac  stfs 5, 128(27)
  0162eb0  lfs 5, 20(3)
  0162eb4  stfs 5, 132(27)
  0162eb8  lfs 5, 24(3)
  0162ebc  stfs 5, 136(27)
  0162ec0  lfs 5, 28(3)
  0162ec4  stfs 4, 144(27)
  0162ec8  stfs 5, 140(27)
  0162ecc  stfs 3, 148(27)
  0162ed0  stfs 8, 152(27)
  0162ed4  lfs 3, 28(30)
  0162ed8  stfs 3, 156(27)
  0162edc  lfs 3, 64(3)
  0162ee0  stfs 3, 160(27)
  0162ee4  lfs 3, 68(3)
  0162ee8  stfs 3, 164(27)
  0162eec  lfs 3, 72(3)
  0162ef0  stfs 3, 168(27)
  0162ef4  lfs 3, 76(3)
  0162ef8  stfs 3, 172(27)
  0162efc  bl 0x5e8338
  0162f00  nop
  0162f04  stfs 1, 180(27)
  0162f08  lfs 1, 32(30)
  0162f0c  lfs 2, 16(30)
  0162f10  lfs 3, 36(30)
  0162f14  fsubs 1, 1, 2
  0162f18  lfs 4, 20(30)
  0162f1c  fsubs 2, 3, 4
  0162f20  bl 0x5e8338
  0162f24  nop
  0162f28  stfs 1, 184(27)
  0162f2c  lwz 3, 52(27)
  0162f30  lwz 4, 56(27)
  0162f34  or 3, 3, 4
  0162f38  cmpwi 3, 0
  0162f3c  bt 0, 0x1630e0
  0162f40  lis 3, 22
  0162f44  lis 4, 114
  0162f48  addi 6, 3, 5828
  0162f4c  lis 7, 114
  0162f50  addic 3, 27, 72
  0162f54  addic 5, 27, 76
  0162f58  lfs 3, 160(6)
  0162f5c  lfs 2, -3048(4)
  0162f60  lfs 5, 12(6)
  0162f64  fmuls 2, 2, 3
  0162f68  lfs 1, 16(6)
  0162f6c  lfs 4, -3052(7)
  0162f70  fmuls 4, 4, 5
  0162f74  fmr 3, 2
  0162f78  bl 0x109c30
  0162f7c  nop
  0162f80  lis 31, 165
  0162f84  lwz 3, 52(27)
  0162f88  lwz 4, 56(27)
  0162f8c  slwi 5, 3, 7
  0162f90  slwi 6, 4, 7
  0162f94  lwz 7, 7128(31)
  0162f98  lfs 1, 72(27)
  0162f9c  addc 5, 7, 5
  0162fa0  addc 6, 7, 6
  0162fa4  clrldi 5, 5, 32
  0162fa8  clrldi 6, 6, 32
  0162fac  slwi 4, 4, 7
  0162fb0  slwi 3, 3, 7
  0162fb4  lfs 2, 48(5)
  0162fb8  lfs 3, 48(6)
  0162fbc  lfs 4, 52(6)
  0162fc0  fsubs 3, 3, 2
  0162fc4  lfs 5, 52(5)
  0162fc8  fsubs 4, 4, 5
  0162fcc  addc 4, 7, 4
  0162fd0  lfs 5, 56(6)
  0162fd4  addc 3, 7, 3
  0162fd8  lfs 6, 56(5)
  0162fdc  clrldi 4, 4, 32
  0162fe0  lfs 7, 60(6)
  0162fe4  clrldi 3, 3, 32
  0162fe8  fsubs 5, 5, 6
  0162fec  li 6, 0
  0162ff0  fmadds 2, 1, 3, 2
  0162ff4  stfs 2, 128(1)
  0162ff8  lfs 2, 52(5)
  0162ffc  fmadds 2, 1, 4, 2
  0163000  stfs 2, 132(1)
  0163004  lfs 2, 56(5)
  0163008  stfs 7, 140(1)
  016300c  fmadds 1, 1, 5, 2
  0163010  stw 6, 156(1)
  0163014  stw 6, 152(1)
  0163018  stw 6, 148(1)
  016301c  stw 6, 144(1)
  0163020  stfs 1, 136(1)
  0163024  lfs 1, 116(4)
  0163028  lfs 2, 116(3)
  016302c  bl 0x5025e0
  0163030  nop
  0163034  lfs 2, 72(27)
  0163038  lwz 3, 52(27)
  016303c  fmuls 2, 1, 2
  0163040  slwi 3, 3, 7
  0163044  lwz 4, 7128(31)
  0163048  addc 3, 4, 3
  016304c  clrldi 3, 3, 32
  0163050  stfs 2, 148(1)
  0163054  lfs 1, 116(3)
  0163058  bl 0x502578
  016305c  nop
  0163060  lwz 3, 56(27)
  0163064  lwz 4, 7128(31)
  0163068  lwz 5, 52(27)
  016306c  slwi 3, 3, 7
  0163070  stfs 1, 148(1)
  0163074  slwi 5, 5, 7
  0163078  addc 3, 4, 3
  016307c  addc 4, 4, 5
  0163080  clrldi 3, 3, 32
  0163084  clrldi 4, 4, 32
  0163088  lfs 1, 120(3)
  016308c  lfs 2, 120(4)
  0163090  bl 0x5025e0
  0163094  nop
  0163098  lfs 2, 72(27)
  016309c  lwz 3, 52(27)
  01630a0  fmuls 2, 1, 2
  01630a4  slwi 3, 3, 7
  01630a8  lwz 4, 7128(31)
  01630ac  addc 3, 4, 3
  01630b0  clrldi 3, 3, 32
  01630b4  stfs 2, 152(1)
  01630b8  lfs 1, 120(3)
  01630bc  bl 0x502578
  01630c0  nop
  01630c4  addic 3, 1, 128
  01630c8  stfs 1, 152(1)
  01630cc  bl 0x47b98
  01630d0  nop
  01630d4  addic 3, 1, 144
  01630d8  bl 0x47c08
  01630dc  nop
  01630e0  lwz 31, 48(27)
  01630e4  cmpwi 31, 0
  01630e8  bt 0, 0x16388c
  01630ec  lis 3, 22
  01630f0  lis 4, 114
  01630f4  addi 3, 3, 5828
  01630f8  lfs 1, 164(3)
  01630fc  lfs 2, -3056(4)
  0163100  lhz 3, 36(27)
  0163104  fmuls 1, 2, 1
  0163108  extsh 3, 3
  016310c  fctiwz 1, 1
  0163110  stfd 1, 288(1)
  0163114  lwz 4, 292(1)
  0163118  cmpw 3, 4
  016311c  bf 0, 0x163328
  0163120  bl 0x502730
  0163124  nop
  0163128  lis 3, 22
  016312c  fmr 28, 1
  0163130  lis 30, 114
  0163134  addi 31, 3, 5828
  0163138  lfs 31, 168(31)
  016313c  lfs 2, -3056(30)
  0163140  fmuls 1, 2, 31
  0163144  fctiwz 1, 1
  0163148  stfd 1, 288(1)
  016314c  lwz 3, 292(1)
  0163150  extsw 3, 3
  0163154  bl 0x502730
  0163158  nop
  016315c  lfs 2, 172(31)
  0163160  fdivs 9, 2, 1
  0163164  lfs 10, 40(31)
  0163168  lfs 11, 44(31)
  016316c  lfs 12, 48(31)
  0163170  lfs 13, 52(31)
  0163174  lfs 0, 56(31)
  0163178  lfs 2, -3056(30)
  016317c  lfs 27, 60(31)
  0163180  lfs 26, 64(31)
  0163184  fmuls 31, 2, 31
  0163188  lhz 4, 36(27)
  016318c  lwz 3, 17776(28)
  0163190  lfs 1, 144(27)
  0163194  extsh 4, 4
  0163198  lfs 30, 16(31)
  016319c  lfs 2, 128(27)
  01631a0  lfs 3, 148(27)
  01631a4  lfs 4, 132(27)
  01631a8  lfs 5, 152(27)
  01631ac  lfs 6, 136(27)
  01631b0  fctiwz 31, 31
  01631b4  lfs 7, 156(27)
  01631b8  lfs 8, 180(27)
  01631bc  lfs 29, 164(27)
  01631c0  lfs 25, 12(31)
  01631c4  stfd 31, 288(1)
  01631c8  lwz 5, 292(1)
  01631cc  cmpw 4, 5
  01631d0  fmadds 9, 28, 9, 10
  01631d4  fsubs 10, 11, 9
  01631d8  fsubs 11, 12, 9
  01631dc  fsub 12, 9, 10
  01631e0  fsel 9, 12, 10, 9
  01631e4  fsub 10, 11, 9
  01631e8  fsel 9, 10, 11, 9
  01631ec  fmuls 10, 9, 9
  01631f0  fmuls 11, 10, 9
  01631f4  fmuls 12, 10, 11
  01631f8  fmadds 9, 11, 13, 9
  01631fc  fmuls 11, 10, 12
  0163200  fmadds 9, 12, 0, 9
  0163204  fmuls 10, 10, 11
  0163208  fmadds 9, 11, 27, 9
  016320c  fmadds 9, 10, 26, 9
  0163210  fsubs 31, 30, 9
  0163214  fmuls 31, 31, 25
  0163218  bt 0, 0x163220
  016321c  fmr 31, 30
  0163220  fsubs 1, 1, 2
  0163224  stfs 31, 84(3)
  0163228  fsubs 3, 3, 4
  016322c  stfs 7, 28(3)
  0163230  fsubs 5, 5, 6
  0163234  lis 4, 22
  0163238  fmr 28, 29
  016323c  li 5, 0
  0163240  addi 4, 4, 5828
  0163244  fmadds 7, 31, 1, 2
  0163248  fmadds 3, 31, 3, 4
  016324c  fmadds 4, 31, 5, 6
  0163250  fmr 1, 8
  0163254  fmr 2, 28
  0163258  stfs 7, 16(3)
  016325c  stfs 3, 20(3)
  0163260  stfs 4, 24(3)
  0163264  lfs 29, 4(4)
  0163268  stw 5, 64(3)
  016326c  bl 0x5025e0
  0163270  nop
  0163274  fmuls 2, 1, 31
  0163278  fmr 1, 28
  016327c  bl 0x502578
  0163280  nop
  0163284  lwz 3, 17776(28)
  0163288  stfs 1, 68(3)
  016328c  lfs 28, 168(27)
  0163290  lfs 1, 184(27)
  0163294  fmr 2, 28
  0163298  bl 0x5025e0
  016329c  nop
  01632a0  fmuls 2, 1, 31
  01632a4  fmr 1, 28
  01632a8  bl 0x502578
  01632ac  nop
  01632b0  lwz 3, 17776(28)
  01632b4  lis 4, 150
  01632b8  stfs 1, 72(3)
  01632bc  lwz 5, -12528(4)
  01632c0  lfs 1, -12528(4)
  01632c4  cmpwi 5, 0
  01632c8  bf 1, 0x1632fc
  01632cc  lis 4, 22
  01632d0  addi 4, 4, 5828
  01632d4  lfs 2, 0(4)
  01632d8  lis 4, 150
  01632dc  fsubs 1, 1, 2
  01632e0  fcmpu 0, 1, 29
  01632e4  stfs 1, -12528(4)
  01632e8  cror 6, 1, 2
  01632ec  bt 6, 0x1632fc
  01632f0  lis 4, 150
  01632f4  li 5, 0
  01632f8  stw 5, -12528(4)
  01632fc  fcmpu 0, 31, 30
  0163300  cror 6, 1, 2
  0163304  bt 6, 0x16375c
  0163308  lis 4, 22
  016330c  lis 5, 114
  0163310  addi 4, 4, 5828
  0163314  lfs 1, 176(4)
  0163318  lfs 2, -3052(5)
  016331c  fmuls 1, 2, 1
  0163320  bl 0x161480
  0163324  b 0x16375c
  0163328  lis 3, 22
  016332c  li 4, 180
  0163330  addi 3, 3, 5828
  0163334  li 5, 64
  0163338  lis 6, 165
  016333c  slwi 7, 31, 2
  0163340  addic 31, 6, 7136
  0163344  lvlx 2, 4, 3
  0163348  extsw 6, 7
  016334c  lvlx 3, 5, 27
  0163350  li 4, 184
  0163354  vspltw 2, 2, 0
  0163358  lfs 2, 64(27)
  016335c  lfs 1, 180(3)
  0163360  lwzx 31, 31, 6
  0163364  vaddfp 3, 3, 2
  0163368  fadds 2, 2, 1
  016336c  vspltw 4, 3, 0
  0163370  stvewx 4, 5, 27
  0163374  lvlx 2, 4, 3
  0163378  lfs 1, 184(3)
  016337c  vspltw 2, 2, 0
  0163380  vcmpgtfp. 4, 4, 2
  0163384  bt 26, 0x163398
  0163388  lis 3, 17096
  016338c  fmr 2, 1
  0163390  vsldoi 3, 2, 2, 0
  0163394  stw 3, 64(27)
  0163398  lis 3, 150
  016339c  vspltw 3, 3, 0
  01633a0  addic 3, 3, 19008
  01633a4  lwz 3, 164(3)
  01633a8  rlwinm 3, 3, 0, 25, 27
  01633ac  cmpwi 3, 0
  01633b0  bt 2, 0x1633e4
  01633b4  lis 3, 150
  01633b8  lis 4, 15744
  01633bc  lwz 3, -12528(3)
  01633c0  srawi 5, 3, 31
  01633c4  srwi 6, 5, 1
  01633c8  xor 3, 6, 3
  01633cc  subc 3, 3, 5
  01633d0  cmpw 3, 4
  01633d4  bf 0, 0x1633e4
  01633d8  lis 3, 150
  01633dc  lis 4, 15744
  01633e0  stw 4, -12528(3)
  01633e4  vspltisw 2, 6
  01633e8  li 3, 60
  01633ec  lvlx 4, 0, 31
  01633f0  vsubuwm 4, 4, 2
  01633f4  lvlx 2, 3, 27
  01633f8  lfs 1, 60(27)
  01633fc  vspltw 5, 2, 0
  0163400  vcfsx 4, 4, 0
  0163404  vspltw 4, 4, 0
  0163408  vcmpgtfp. 4, 5, 4
  016340c  bt 26, 0x163440
  0163410  lis 3, 150
  0163414  lis 4, 15744
  0163418  lwz 3, -12528(3)
  016341c  srawi 5, 3, 31
  0163420  srwi 6, 5, 1
  0163424  xor 3, 6, 3
  0163428  subc 3, 3, 5
  016342c  cmpw 3, 4
  0163430  bf 0, 0x163440
  0163434  lis 3, 150
  0163438  lis 4, 15744
  016343c  stw 4, -12528(3)
  0163440  lhz 3, 38(27)
  0163444  vsldoi 4, 2, 2, 0
  0163448  extsh 3, 3
  016344c  vsldoi 2, 3, 3, 0
  0163450  cmpwi 3, 2
  0163454  vsldoi 3, 4, 4, 0
  0163458  bf 0, 0x16349c
  016345c  lwz 7, 17776(28)
  0163460  li 5, 50
  0163464  li 6, 10
  0163468  lis 3, 112
  016346c  ori 4, 7, 0
  0163470  addic 3, 3, 31920
  0163474  stb 5, 188(7)
  0163478  sth 6, 178(7)
  016347c  bl 0x6d720
  0163480  nop
  0163484  li 3, 60
  0163488  lfs 1, 60(27)
  016348c  li 4, 64
  0163490  lfs 2, 64(27)
  0163494  lvlx 3, 3, 27
  0163498  lvlx 2, 4, 27
  016349c  li 3, 68
  01634a0  vspltisw 7, -1
  01634a4  lis 5, 22
  01634a8  li 4, 188
  01634ac  addi 5, 5, 5828
  01634b0  vspltisw 9, -1
  01634b4  vslw 7, 7, 7
  01634b8  lvlx 4, 3, 27
  01634bc  vrefp 5, 4
  01634c0  lis 3, 114
  01634c4  lvlx 6, 4, 5
  01634c8  vspltw 6, 6, 0
  01634cc  vslw 9, 9, 9
  01634d0  lfs 3, -3052(3)
  01634d4  vspltisw 10, -1
  01634d8  li 4, -3052
  01634dc  fmuls 2, 2, 3
  01634e0  vspltisw 11, -1
  01634e4  lfs 3, 68(27)
  01634e8  vspltw 2, 2, 0
  01634ec  vslw 10, 10, 10
  01634f0  vslw 11, 11, 11
  01634f4  vnmsubfp 8, 5, 4, 6
  01634f8  vspltisw 12, 1
  01634fc  vspltw 3, 3, 0
  0163500  fdivs 2, 2, 3
  0163504  vmaddfp 5, 5, 8, 7
  0163508  lvlx 7, 4, 3
  016350c  vmaddfp 2, 2, 7, 10
  0163510  lvlx 7, 0, 31
  0163514  vsubuwm 7, 7, 12
  0163518  li 3, 60
  016351c  vcfsx 7, 7, 0
  0163520  vnmsubfp 8, 5, 4, 6
  0163524  vspltw 7, 7, 0
  0163528  vmaddfp 5, 5, 8, 9
  016352c  vnmsubfp 4, 5, 4, 6
  0163530  vmaddfp 4, 5, 4, 11
  0163534  fadds 1, 1, 2
  0163538  vmaddfp 2, 4, 2, 3
  016353c  vspltw 2, 2, 0
  0163540  vcmpgtfp. 3, 2, 7
  0163544  stvewx 2, 3, 27
  0163548  bf 26, 0x16357c
  016354c  lis 3, 150
  0163550  lis 4, 22
  0163554  lis 5, 16256
  0163558  addi 4, 4, 5828
  016355c  lwz 3, -12528(3)
  0163560  srawi 6, 3, 31
  0163564  lfs 31, 16(4)
  0163568  srwi 4, 6, 1
  016356c  xor 3, 4, 3
  0163570  subc 3, 3, 6
  0163574  cmpw 3, 5
  0163578  bt 0, 0x163594
  016357c  lis 3, 161
  0163580  li 4, 1
  0163584  lis 5, 161
  0163588  stw 4, 1792(3)
  016358c  stw 4, 1820(5)
  0163590  b 0x16375c
  0163594  lwz 7, 17776(28)
  0163598  ori 3, 31, 0
  016359c  li 5, 1
  01635a0  addic 6, 7, 16
  01635a4  li 8, 0
  01635a8  addic 7, 7, 64
  01635ac  bl 0x117390
  01635b0  nop
  01635b4  lwz 3, 17776(28)
  01635b8  lwz 31, 80(27)
  01635bc  lwz 4, 84(27)
  01635c0  addic 31, 31, 1
  01635c4  cmpwi 4, 32
  01635c8  clrlwi 6, 31, 27
  01635cc  lfs 1, 76(3)
  01635d0  lhz 5, 38(27)
  01635d4  stfs 1, 64(3)
  01635d8  stw 6, 80(27)
  01635dc  bf 0, 0x1635e8
  01635e0  addic 4, 4, 1
  01635e4  stw 4, 84(27)
  01635e8  addic 30, 27, 192
  01635ec  rlwinm 4, 31, 4, 23, 27
  01635f0  lis 6, 115
  01635f4  extsh 5, 5
  01635f8  addc 4, 30, 4
  01635fc  addic 6, 6, 7872
  0163600  sldi 7, 5, 5
  0163604  clrldi 4, 4, 32
  0163608  addic 5, 3, 192
  016360c  addc 6, 6, 7
  0163610  ori 3, 4, 0
  0163614  clrldi 4, 6, 32
  0163618  bl 0x5e7d64
  016361c  nop
  0163620  lwz 3, 80(27)
  0163624  lwz 4, 17776(28)
  0163628  slwi 5, 3, 4
  016362c  addc 5, 30, 5
  0163630  clrldi 6, 5, 32
  0163634  lfs 1, 16(4)
  0163638  slwi 5, 3, 4
  016363c  lis 31, 16256
  0163640  extsw 5, 5
  0163644  lfs 2, 0(6)
  0163648  addc 8, 27, 5
  016364c  fadds 1, 2, 1
  0163650  lis 5, 115
  0163654  lfs 2, 4(6)
  0163658  addic 30, 27, 704
  016365c  lfs 3, 8(6)
  0163660  slwi 3, 3, 4
  0163664  lhz 7, 38(27)
  0163668  addic 9, 5, 7888
  016366c  addc 3, 30, 3
  0163670  extsh 7, 7
  0163674  addic 5, 4, 192
  0163678  sldi 7, 7, 5
  016367c  clrldi 3, 3, 32
  0163680  addc 7, 9, 7
  0163684  stfs 1, 0(6)
  0163688  lfs 1, 20(4)
  016368c  fadds 1, 2, 1
  0163690  stfs 1, 4(6)
  0163694  lfs 1, 24(4)
  0163698  clrldi 4, 7, 32
  016369c  fadds 1, 3, 1
  01636a0  stfs 1, 8(6)
  01636a4  stw 31, 204(8)
  01636a8  bl 0x5e7d64
  01636ac  nop
  01636b0  lwz 3, 80(27)
  01636b4  lwz 5, 17776(28)
  01636b8  slwi 4, 3, 4
  01636bc  addc 4, 30, 4
  01636c0  clrldi 6, 4, 32
  01636c4  lfs 1, 16(5)
  01636c8  slwi 3, 3, 4
  01636cc  ori 4, 5, 0
  01636d0  extsw 3, 3
  01636d4  lfs 2, 0(6)
  01636d8  addc 7, 27, 3
  01636dc  fadds 1, 2, 1
  01636e0  lfs 2, 4(6)
  01636e4  lfs 3, 8(6)
  01636e8  lis 3, 112
  01636ec  addic 3, 3, 31928
  01636f0  stfs 1, 0(6)
  01636f4  lfs 1, 20(5)
  01636f8  fadds 1, 2, 1
  01636fc  stfs 1, 4(6)
  0163700  lfs 1, 24(5)
  0163704  fadds 1, 3, 1
  0163708  stfs 1, 8(6)
  016370c  stw 31, 716(7)
  0163710  bl 0x6d720
  0163714  nop
  0163718  lis 3, 150
  016371c  lwz 4, -12528(3)
  0163720  lfs 1, -12528(3)
  0163724  cmpwi 4, 0
  0163728  bf 1, 0x16375c
  016372c  lis 3, 22
  0163730  addi 3, 3, 5828
  0163734  lfs 2, 192(3)
  0163738  lis 3, 150
  016373c  fadds 1, 1, 2
  0163740  fcmpu 0, 1, 31
  0163744  stfs 1, -12528(3)
  0163748  cror 6, 0, 2
  016374c  bt 6, 0x16375c
  0163750  lis 3, 150
  0163754  lis 4, 16256
  0163758  stw 4, -12528(3)
  016375c  lwz 6, 17776(28)
  0163760  lis 3, 115
  0163764  lwz 7, 16(27)
  0163768  addic 4, 3, 8640
  016376c  lhz 3, 38(27)
  0163770  addic 5, 6, 192
  0163774  lfs 1, 64(6)
  0163778  extsh 3, 3
  016377c  stfs 1, 64(7)
  0163780  sldi 8, 3, 4
  0163784  lfs 1, 68(6)
  0163788  addic 3, 7, 16
  016378c  addc 4, 4, 8
  0163790  stfs 1, 68(7)
  0163794  lfs 1, 72(6)
  0163798  clrldi 4, 4, 32
  016379c  stfs 1, 72(7)
  01637a0  lfs 1, 76(6)
  01637a4  stfs 1, 76(7)
  01637a8  bl 0x5e7d64
  01637ac  nop
  01637b0  lwz 4, 16(27)
  01637b4  lwz 5, 17776(28)
  01637b8  ori 3, 4, 0
  01637bc  lfs 1, 16(4)
  01637c0  lfs 2, 16(5)
  01637c4  fadds 1, 1, 2
  01637c8  lfs 2, 20(4)
  01637cc  lfs 3, 24(4)
  01637d0  stfs 1, 16(4)
  01637d4  lfs 1, 20(5)
  01637d8  fadds 1, 2, 1
  01637dc  stfs 1, 20(4)
  01637e0  lfs 1, 24(5)
  01637e4  fadds 1, 3, 1
  01637e8  stfs 1, 24(4)
  01637ec  bl 0xf31a8
  01637f0  nop
  01637f4  lwz 5, 17776(28)
  01637f8  lis 4, 115
  01637fc  lwz 6, 20(27)
  0163800  lhz 3, 38(27)
  0163804  addic 4, 4, 8688
  0163808  extsh 3, 3
  016380c  lfs 1, 64(5)
  0163810  sldi 7, 3, 4
  0163814  stfs 1, 64(6)
  0163818  addic 3, 6, 16
  016381c  lfs 1, 68(5)
  0163820  addc 4, 4, 7
  0163824  stfs 1, 68(6)
  0163828  clrldi 4, 4, 32
  016382c  lfs 1, 72(5)
  0163830  stfs 1, 72(6)
  0163834  lfs 1, 76(5)
  0163838  addic 5, 5, 192
  016383c  stfs 1, 76(6)
  0163840  bl 0x5e7d64
  0163844  nop
  0163848  lwz 4, 20(27)
  016384c  lwz 5, 17776(28)
  0163850  ori 3, 4, 0
  0163854  lfs 1, 16(4)
  0163858  lfs 2, 16(5)
  016385c  fadds 1, 1, 2
  0163860  lfs 2, 20(4)
  0163864  lfs 3, 24(4)
  0163868  stfs 1, 16(4)
  016386c  lfs 1, 20(5)
  0163870  fadds 1, 2, 1
  0163874  stfs 1, 20(4)
  0163878  lfs 1, 24(5)
  016387c  fadds 1, 3, 1
  0163880  stfs 1, 24(4)
  0163884  bl 0xf31a8
  0163888  nop
  016388c  bl 0x53550
  0163890  nop
  0163894  bl 0x15be68
  0163898  nop
  016389c  bl 0xdafb8
  01638a0  nop
  01638a4  bl 0xf1478
  01638a8  nop
  01638ac  bl 0x166e88
  01638b0  nop
  01638b4  b 0x1638bc
  01638b8  bl 0x15fe00
  01638bc  li 0, 304
  01638c0  lvx 20, 1, 0
  01638c4  addic 0, 0, 16
  01638c8  lvx 21, 1, 0
  01638cc  addic 0, 0, 16
  01638d0  lvx 22, 1, 0
  01638d4  addic 0, 0, 16
  01638d8  lvx 23, 1, 0
  01638dc  addic 0, 0, 16
  01638e0  lvx 24, 1, 0
  01638e4  addic 0, 0, 16
  01638e8  lvx 25, 1, 0
  01638ec  addic 0, 0, 16
  01638f0  lvx 26, 1, 0
  01638f4  addic 0, 0, 16
  01638f8  lvx 27, 1, 0
  01638fc  addic 0, 0, 16
  0163900  lvx 28, 1, 0
  0163904  addic 0, 0, 16
  0163908  lvx 29, 1, 0
  016390c  addic 0, 0, 16
  0163910  lvx 30, 1, 0
  0163914  addic 0, 0, 16
  0163918  lvx 31, 1, 0
  016391c  ld 0, 768(1)
  0163920  mtlr 0
  0163924  lfd 14, 608(1)
  0163928  lfd 15, 616(1)
  016392c  lfd 16, 624(1)
  0163930  lfd 17, 632(1)
  0163934  lfd 18, 640(1)
  0163938  lfd 19, 648(1)
  016393c  lfd 20, 656(1)
  0163940  lfd 21, 664(1)
  0163944  lfd 22, 672(1)
  0163948  lfd 23, 680(1)
  016394c  lfd 24, 688(1)
  0163950  lfd 25, 696(1)
  0163954  lfd 26, 704(1)
  0163958  lfd 27, 712(1)
  016395c  lfd 28, 720(1)
  0163960  lfd 29, 728(1)
  0163964  lfd 30, 736(1)
  0163968  lfd 31, 744(1)
  016396c  ld 19, 504(1)
  0163970  ld 20, 512(1)
  0163974  ld 21, 520(1)
  0163978  ld 22, 528(1)
  016397c  ld 23, 536(1)
  0163980  ld 24, 544(1)
  0163984  ld 25, 552(1)
  0163988  ld 26, 560(1)
  016398c  ld 27, 568(1)
  0163990  ld 28, 576(1)
  0163994  ld 29, 584(1)
  0163998  ld 30, 592(1)
  016399c  ld 31, 600(1)
  01639a0  addi 1, 1, 752
  01639a4  blr

DisplayLoadingScreen:   # 0x1639a8, 0xf0 bytes
  01639a8  stdu 1, -112(1)
  01639ac  mflr 0
  01639b0  std 0, 128(1)
  01639b4  lis 3, 161
  01639b8  lwz 3, 1820(3)
  01639bc  cmpwi 3, 0
  01639c0  bf 2, 0x163a88
  01639c4  lis 3, 150
  01639c8  addic 3, 3, 17776
  01639cc  lwz 3, 32(3)
  01639d0  cmpwi 3, 3
  01639d4  cmpwi 1, 3, 0
  01639d8  cmpwi 6, 3, -1
  01639dc  cmpwi 7, 3, 1
  01639e0  bt 1, 0x163a00
  01639e4  bt 5, 0x1639f0
  01639e8  bf 25, 0x163a88
  01639ec  b 0x163a24
  01639f0  bf 29, 0x163a88
  01639f4  cmpwi 3, 2
  01639f8  bf 1, 0x163a88
  01639fc  b 0x163a44
  0163a00  cmpwi 3, 6
  0163a04  bt 1, 0x163a14
  0163a08  cmpwi 3, 4
  0163a0c  bf 1, 0x163a70
  0163a10  b 0x163a88
  0163a14  cmpwi 3, 7
  0163a18  bf 1, 0x163a44
  0163a1c  cmpwi 3, 8
  0163a20  bt 1, 0x163a88
  0163a24  li 3, 1
  0163a28  bl 0x684a4
  0163a2c  nop
  0163a30  bl 0x6c494
  0163a34  nop
  0163a38  bl 0x68560
  0163a3c  nop
  0163a40  b 0x163a88
  0163a44  lis 4, 150
  0163a48  li 5, 127
  0163a4c  li 3, 1
  0163a50  stw 5, -12988(4)
  0163a54  bl 0x684a4
  0163a58  nop
  0163a5c  bl 0x6bb78
  0163a60  nop
  0163a64  bl 0x68560
  0163a68  nop
  0163a6c  b 0x163a88
  0163a70  li 3, 0
  0163a74  bl 0x684a4
  0163a78  nop
  0163a7c  bl 0x16114c
  0163a80  bl 0x68560
  0163a84  nop
  0163a88  ld 0, 128(1)
  0163a8c  mtlr 0
  0163a90  addi 1, 1, 112
  0163a94  blr

SpaceTransition_LoadWad:   # 0x163aa0, 0x940 bytes
  0163aa0  stdu 1, -480(1)
  0163aa4  mflr 0
  0163aa8  std 0, 496(1)
  0163aac  std 26, 432(1)
  0163ab0  lis 26, 150
  0163ab4  li 3, 4
  0163ab8  addic 26, 26, 17776
  0163abc  lis 6, 150
  0163ac0  li 7, -1
  0163ac4  lis 4, 151
  0163ac8  lis 8, 16256
  0163acc  lis 5, 22
  0163ad0  stw 3, 32(26)
  0163ad4  std 28, 448(1)
  0163ad8  addic 3, 4, -25376
  0163adc  sth 7, 36(26)
  0163ae0  std 30, 464(1)
  0163ae4  li 28, 0
  0163ae8  addi 30, 5, 15000
  0163aec  lis 4, 150
  0163af0  stw 8, -12528(6)
  0163af4  lis 5, 161
  0163af8  lis 6, 230
  0163afc  lis 7, 16
  0163b00  stw 28, 8320(3)
  0163b04  stw 28, -12524(4)
  0163b08  stw 28, 1820(5)
  0163b0c  std 31, 472(1)
  0163b10  std 29, 456(1)
  0163b14  std 27, 440(1)
  0163b18  std 25, 424(1)
  0163b1c  std 24, 416(1)
  0163b20  std 23, 408(1)
  0163b24  std 22, 400(1)
  0163b28  std 21, 392(1)
  0163b2c  std 20, 384(1)
  0163b30  stw 7, -21916(6)
  0163b34  bl 0xd89d0
  0163b38  nop
  0163b3c  lis 3, 150
  0163b40  lis 4, 150
  0163b44  addic 3, 3, 27352
  0163b48  lis 6, 150
  0163b4c  lis 7, 161
  0163b50  lis 8, -30875
  0163b54  li 5, 16
  0163b58  lwz 9, 12(3)
  0163b5c  addic 3, 7, 2496
  0163b60  stw 9, 27344(4)
  0163b64  ori 4, 8, 17185
  0163b68  stw 9, 27348(6)
  0163b6c  bl 0x5001fc
  0163b70  nop
  0163b74  lis 3, 163
  0163b78  li 4, -1
  0163b7c  addic 3, 3, 21696
  0163b80  li 5, 2048
  0163b84  bl 0x5001fc
  0163b88  nop
  0163b8c  lis 3, 164
  0163b90  li 4, -1
  0163b94  addic 3, 3, -32112
  0163b98  li 5, 3584
  0163b9c  bl 0x5001fc
  0163ba0  nop
  0163ba4  lis 3, 163
  0163ba8  li 4, 0
  0163bac  addic 3, 3, 31632
  0163bb0  li 5, 224
  0163bb4  bl 0x5001fc
  0163bb8  nop
  0163bbc  bl 0x68160
  0163bc0  nop
  0163bc4  bl 0x668d0
  0163bc8  nop
  0163bcc  bl 0x174c24
  0163bd0  nop
  0163bd4  lis 25, 161
  0163bd8  lis 4, 101
  0163bdc  addic 25, 25, 2264
  0163be0  addic 4, 4, 14240
  0163be4  lwz 3, 20(25)
  0163be8  bl 0x503494
  0163bec  nop
  0163bf0  lis 3, 101
  0163bf4  lwz 4, 72(25)
  0163bf8  li 5, -1
  0163bfc  addic 3, 3, 14256
  0163c00  bl 0x503e00
  0163c04  nop
  0163c08  lis 5, 101
  0163c0c  lwz 4, 76(25)
  0163c10  ori 31, 3, 0
  0163c14  addic 3, 5, 14296
  0163c18  li 5, -1
  0163c1c  bl 0x503e00
  0163c20  nop
  0163c24  lwz 4, 76(25)
  0163c28  lwz 6, 72(25)
  0163c2c  lis 5, 2
  0163c30  addc 3, 4, 3
  0163c34  ori 4, 5, 63
  0163c38  addic 3, 3, 63
  0163c3c  rlwinm 3, 3, 0, 0, 25
  0163c40  lwz 5, 28(6)
  0163c44  addc 4, 3, 4
  0163c48  addc 5, 6, 5
  0163c4c  stw 3, 20(6)
  0163c50  rlwinm 3, 4, 0, 0, 25
  0163c54  lis 4, 114
  0163c58  stw 5, 28(6)
  0163c5c  stw 3, 24(6)
  0163c60  lfs 1, 0(30)
  0163c64  lfs 2, -3056(4)
  0163c68  fmuls 1, 2, 1
  0163c6c  fctiwz 1, 1
  0163c70  stfd 1, 368(1)
  0163c74  lwz 3, 372(1)
  0163c78  extsw 3, 3
  0163c7c  bl 0x6dad0
  0163c80  nop
  0163c84  li 3, 0
  0163c88  bl 0x503128
  0163c8c  nop
  0163c90  lis 3, 151
  0163c94  lwz 27, 72(25)
  0163c98  lis 4, 144
  0163c9c  lwz 30, 76(25)
  0163ca0  li 7, 0
  0163ca4  lis 24, 165
  0163ca8  lis 23, 165
  0163cac  lwz 3, -25484(3)
  0163cb0  lwz 4, -23196(4)
  0163cb4  lis 21, 151
  0163cb8  lwz 5, 12(27)
  0163cbc  extsw 3, 3
  0163cc0  lwz 6, 16(27)
  0163cc4  addic 20, 1, 112
  0163cc8  addc 29, 27, 5
  0163ccc  addic 5, 3, -1
  0163cd0  lwz 4, 1196(4)
  0163cd4  subc 7, 7, 3
  0163cd8  clrldi 29, 29, 32
  0163cdc  subc 30, 30, 4
  0163ce0  extsw 4, 5
  0163ce4  cntlzw 7, 7
  0163ce8  addic 5, 6, 1
  0163cec  stw 29, 12(27)
  0163cf0  sldi 7, 7, 58
  0163cf4  addic 6, 6, 2
  0163cf8  clrldi 5, 5, 32
  0163cfc  subc 3, 3, 4
  0163d00  sradi 7, 7, 63
  0163d04  clrldi 6, 6, 32
  0163d08  and 3, 7, 3
  0163d0c  std 5, 25032(24)
  0163d10  addc 22, 4, 3
  0163d14  std 6, 25040(23)
  0163d18  lis 4, 101
  0163d1c  lwz 5, -25488(21)
  0163d20  ori 3, 20, 0
  0163d24  addic 4, 4, 14336
  0163d28  extsw 5, 5
  0163d2c  bl 0x5cd2a8
  0163d30  nop
  0163d34  ld 3, 25032(24)
  0163d38  li 5, 36
  0163d3c  sldi 4, 3, 5
  0163d40  sldi 3, 3, 2
  0163d44  addc 4, 4, 3
  0163d48  ori 3, 20, 0
  0163d4c  addc 4, 29, 4
  0163d50  clrldi 4, 4, 32
  0163d54  bl 0x503e00
  0163d58  nop
  0163d5c  ld 3, 25032(24)
  0163d60  lwz 4, 20(27)
  0163d64  sldi 5, 3, 5
  0163d68  sldi 3, 3, 2
  0163d6c  lwz 6, 76(25)
  0163d70  addc 3, 5, 3
  0163d74  subc 4, 4, 6
  0163d78  clrldi 7, 3, 32
  0163d7c  addc 6, 4, 30
  0163d80  lis 4, 101
  0163d84  ori 3, 20, 0
  0163d88  addic 4, 4, 14384
  0163d8c  stwx 6, 29, 7
  0163d90  lwz 6, -25488(21)
  0163d94  ori 5, 22, 0
  0163d98  extsw 6, 6
  0163d9c  bl 0x5cd2a8
  0163da0  nop
  0163da4  ld 3, 25040(23)
  0163da8  li 5, 36
  0163dac  sldi 4, 3, 5
  0163db0  sldi 3, 3, 2
  0163db4  addc 4, 4, 3
  0163db8  ori 3, 20, 0
  0163dbc  addc 4, 29, 4
  0163dc0  clrldi 4, 4, 32
  0163dc4  bl 0x503e00
  0163dc8  nop
  0163dcc  ld 3, 25040(23)
  0163dd0  lwz 4, 24(27)
  0163dd4  sldi 5, 3, 5
  0163dd8  sldi 3, 3, 2
  0163ddc  lwz 6, 76(25)
  0163de0  addc 3, 5, 3
  0163de4  subc 4, 4, 6
  0163de8  clrldi 6, 3, 32
  0163dec  addc 5, 4, 30
  0163df0  lis 4, 101
  0163df4  ori 3, 20, 0
  0163df8  addic 4, 4, 14432
  0163dfc  stwx 5, 29, 6
  0163e00  lwz 5, -25488(21)
  0163e04  extsw 5, 5
  0163e08  bl 0x5cd2a8
  0163e0c  nop
  0163e10  lwz 4, 20(27)
  0163e14  ori 3, 20, 0
  0163e18  lis 5, 2
  0163e1c  bl 0x503e00
  0163e20  nop
  0163e24  lis 4, 101
  0163e28  lwz 6, -25488(21)
  0163e2c  ori 3, 20, 0
  0163e30  addic 4, 4, 14480
  0163e34  ori 5, 22, 0
  0163e38  extsw 6, 6
  0163e3c  bl 0x5cd2a8
  0163e40  nop
  0163e44  lwz 4, 24(27)
  0163e48  ori 3, 20, 0
  0163e4c  li 5, -1
  0163e50  bl 0x503e00
  0163e54  nop
  0163e58  lwz 3, 16(27)
  0163e5c  cmpwi 3, 0
  0163e60  bt 2, 0x163e88
  0163e64  ori 3, 28, 0
  0163e68  lwz 4, 0(29)
  0163e6c  addic 3, 3, 1
  0163e70  addc 4, 4, 30
  0163e74  stw 4, 0(29)
  0163e78  lwz 4, 16(27)
  0163e7c  addic 29, 29, 36
  0163e80  cmplw 3, 4
  0163e84  bt 0, 0x163e68
  0163e88  lwz 3, 8(27)
  0163e8c  addc 30, 27, 3
  0163e90  clrldi 30, 30, 32
  0163e94  addic 4, 30, 20
  0163e98  stw 30, 8(27)
  0163e9c  lwz 3, 20(30)
  0163ea0  addc 3, 3, 27
  0163ea4  clrldi 3, 3, 32
  0163ea8  bl 0x64f2a4
  0163eac  ld 2, 40(1)
  0163eb0  lwz 3, 24(30)
  0163eb4  addic 4, 30, 24
  0163eb8  addc 3, 3, 27
  0163ebc  clrldi 3, 3, 32
  0163ec0  bl 0x64f2a4
  0163ec4  ld 2, 40(1)
  0163ec8  lhz 3, 6(30)
  0163ecc  cmpwi 3, 0
  0163ed0  bt 2, 0x163f50
  0163ed4  ori 6, 30, 0
  0163ed8  ori 3, 28, 0
  0163edc  addic 9, 6, 28
  0163ee0  lwz 4, 28(6)
  0163ee4  addc 4, 4, 27
  0163ee8  clrldi 5, 4, 32
  0163eec  stw 4, 28(6)
  0163ef0  addic 4, 5, 16
  0163ef4  lhz 5, 2(5)
  0163ef8  cmpwi 5, 0
  0163efc  bt 2, 0x163f38
  0163f00  lwz 7, 12(27)
  0163f04  ori 5, 28, 0
  0163f08  lwz 8, 0(9)
  0163f0c  lwz 10, 0(4)
  0163f10  addic 5, 5, 1
  0163f14  sldi 11, 10, 5
  0163f18  sldi 10, 10, 2
  0163f1c  addc 10, 11, 10
  0163f20  addc 10, 10, 7
  0163f24  stw 10, 0(4)
  0163f28  lhz 10, 2(8)
  0163f2c  addic 4, 4, 16
  0163f30  cmplw 5, 10
  0163f34  bt 0, 0x163f0c
  0163f38  addic 3, 3, 1
  0163f3c  lhz 4, 6(30)
  0163f40  addic 9, 9, 4
  0163f44  cmplw 3, 4
  0163f48  addic 6, 6, 4
  0163f4c  bt 0, 0x163ee0
  0163f50  lis 3, 163
  0163f54  stw 28, 23744(3)
  0163f58  lwz 3, 0(27)
  0163f5c  lwz 4, 4(27)
  0163f60  addc 30, 27, 3
  0163f64  cmpwi 4, 0
  0163f68  clrldi 30, 30, 32
  0163f6c  bt 2, 0x164098
  0163f70  lis 24, 161
  0163f74  ori 29, 28, 0
  0163f78  addic 24, 24, 24396
  0163f7c  li 4, 0
  0163f80  lwz 5, 0(30)
  0163f84  li 3, 0
  0163f88  subc 4, 4, 5
  0163f8c  addc 6, 5, 27
  0163f90  cntlzw 4, 4
  0163f94  clrldi 5, 6, 32
  0163f98  sldi 4, 4, 58
  0163f9c  lwz 6, 4(30)
  0163fa0  subc 3, 3, 5
  0163fa4  sradi 4, 4, 63
  0163fa8  extsw 6, 6
  0163fac  and 3, 4, 3
  0163fb0  li 4, 0
  0163fb4  addc 23, 5, 3
  0163fb8  li 5, 0
  0163fbc  ori 3, 23, 0
  0163fc0  bl 0xdc0ec
  0163fc4  nop
  0163fc8  lwz 3, 0(23)
  0163fcc  lwz 5, 28(24)
  0163fd0  lwz 7, 8(3)
  0163fd4  lwz 4, 0(3)
  0163fd8  cmpwi 4, 0
  0163fdc  bt 2, 0x16402c
  0163fe0  ori 6, 4, 0
  0163fe4  lwz 4, 12(27)
  0163fe8  lis 8, 14563
  0163fec  lwz 9, 0(7)
  0163ff0  addic 6, 6, -1
  0163ff4  ori 8, 8, 36409
  0163ff8  subc 9, 9, 5
  0163ffc  mulhw 8, 8, 9
  0164000  cmpwi 6, 0
  0164004  srawi 8, 8, 3
  0164008  srwi 9, 8, 31
  016400c  addc 8, 8, 9
  0164010  sldi 9, 8, 5
  0164014  sldi 8, 8, 2
  0164018  addc 8, 9, 8
  016401c  addc 8, 8, 4
  0164020  stw 8, 0(7)
  0164024  addic 7, 7, 16
  0164028  bt 1, 0x163fe8
  016402c  lwz 4, 4(3)
  0164030  lwz 3, 12(3)
  0164034  cmpwi 4, 0
  0164038  bt 2, 0x164084
  016403c  lis 6, 14563
  0164040  lwz 7, 0(3)
  0164044  addic 4, 4, -1
  0164048  ori 6, 6, 36409
  016404c  subc 7, 7, 5
  0164050  mulhw 6, 6, 7
  0164054  lwz 7, 12(27)
  0164058  cmpwi 4, 0
  016405c  srawi 6, 6, 3
  0164060  srwi 8, 6, 31
  0164064  addc 6, 6, 8
  0164068  sldi 8, 6, 5
  016406c  sldi 6, 6, 2
  0164070  addc 6, 8, 6
  0164074  addc 6, 7, 6
  0164078  stw 6, 0(3)
  016407c  addic 3, 3, 16
  0164080  bt 1, 0x16403c
  0164084  addic 29, 29, 1
  0164088  lwz 3, 4(27)
  016408c  addic 30, 30, 32
  0164090  cmplw 29, 3
  0164094  bt 0, 0x163f7c
  0164098  lwz 3, 32(27)
  016409c  li 4, 0
  01640a0  addc 3, 27, 3
  01640a4  li 5, 0
  01640a8  clrldi 3, 3, 32
  01640ac  li 6, 0
  01640b0  bl 0xdb8d8
  01640b4  nop
  01640b8  lwz 3, 72(25)
  01640bc  lis 5, 162
  01640c0  addc 3, 3, 31
  01640c4  li 4, 256
  01640c8  addic 3, 3, 63
  01640cc  rlwinm 31, 3, 0, 0, 25
  01640d0  addic 3, 5, -8448
  01640d4  stw 31, 24(25)
  01640d8  bl 0x500250
  01640dc  nop
  01640e0  lis 3, 162
  01640e4  li 4, 384
  01640e8  addic 3, 3, -7936
  01640ec  bl 0x500250
  01640f0  nop
  01640f4  lis 3, 162
  01640f8  li 4, 1024
  01640fc  addic 30, 3, -9472
  0164100  ori 3, 30, 0
  0164104  bl 0x500250
  0164108  nop
  016410c  lis 4, 115
  0164110  ori 3, 30, 0
  0164114  addic 4, 4, 7168
  0164118  li 5, 64
  016411c  bl 0x5002cc
  0164120  nop
  0164124  lis 30, 164
  0164128  ori 3, 31, 0
  016412c  li 4, 0
  0164130  li 5, 16384
  0164134  stw 31, -28512(30)
  0164138  bl 0x5001fc
  016413c  nop
  0164140  lis 3, 164
  0164144  li 6, 255
  0164148  addic 5, 31, 16447
  016414c  lis 8, 165
  0164150  lwz 4, -28512(30)
  0164154  rlwinm 5, 5, 0, 0, 25
  0164158  stw 4, -28508(3)
  016415c  addic 7, 5, 8255
  0164160  lis 3, 164
  0164164  stb 6, 32(4)
  0164168  rlwinm 7, 7, 0, 0, 25
  016416c  lis 4, 164
  0164170  lwz 6, -28512(30)
  0164174  lis 9, 165
  0164178  addic 6, 6, 16128
  016417c  stw 5, -28496(4)
  0164180  lis 4, 4
  0164184  stw 7, 8128(8)
  0164188  lis 5, 165
  016418c  stw 6, -28504(3)
  0164190  ori 3, 4, 63
  0164194  li 4, -1
  0164198  stw 28, 8132(9)
  016419c  addc 31, 7, 3
  01641a0  lis 7, 165
  01641a4  lis 6, 165
  01641a8  stw 4, 8136(5)
  01641ac  addic 3, 6, 8192
  01641b0  rlwinm 31, 31, 0, 0, 25
  01641b4  li 4, 512
  01641b8  stw 28, 8140(7)
  01641bc  bl 0x500250
  01641c0  nop
  01641c4  bl 0x6840c
  01641c8  nop
  01641cc  lis 3, 164
  01641d0  lis 5, 31
  01641d4  li 4, 500
  01641d8  lis 6, 165
  01641dc  ori 5, 5, 16384
  01641e0  stw 4, -28488(3)
  01641e4  stw 5, 8144(6)
  01641e8  bl 0x5c8318
  01641ec  nop
  01641f0  srawi 3, 3, 16
  01641f4  lis 4, 115
  01641f8  clrlwi 3, 3, 30
  01641fc  lis 5, 165
  0164200  lis 7, 151
  0164204  addic 6, 5, 25056
  0164208  stw 3, 88(26)
  016420c  addic 3, 4, 8048
  0164210  stw 28, 92(26)
  0164214  stw 28, 80(26)
  0164218  lfs 1, 8048(4)
  016421c  stw 28, 84(26)
  0164220  lfs 2, 4(3)
  0164224  stfs 1, 25056(5)
  0164228  lfs 1, 8(3)
  016422c  stfs 2, 4(6)
  0164230  lfs 2, 12(3)
  0164234  lwz 3, -25488(7)
  0164238  stfs 1, 8(6)
  016423c  cmpwi 3, 0
  0164240  stfs 2, 12(6)
  0164244  bt 2, 0x164264
  0164248  cmpwi 3, 1
  016424c  bf 2, 0x164274
  0164250  lis 3, 151
  0164254  addic 3, 3, -13812
  0164258  lbz 3, 3(3)
  016425c  cmpwi 3, 0
  0164260  bf 2, 0x164274
  0164264  li 3, 4
  0164268  li 4, 2
  016426c  stw 3, 88(26)
  0164270  stw 4, 92(26)
  0164274  lis 3, 150
  0164278  li 4, 0
  016427c  addic 30, 3, -12976
  0164280  li 5, 448
  0164284  ori 3, 30, 0
  0164288  bl 0x5001fc
  016428c  nop
  0164290  lis 3, 162
  0164294  li 4, 0
  0164298  addic 3, 3, -16768
  016429c  li 5, 64
  01642a0  bl 0x5001fc
  01642a4  nop
  01642a8  lis 3, 162
  01642ac  li 4, 0
  01642b0  addic 3, 3, -16704
  01642b4  li 5, 64
  01642b8  bl 0x5001fc
  01642bc  nop
  01642c0  lis 3, 6
  01642c4  lwz 4, 64(25)
  01642c8  addc 3, 4, 3
  01642cc  stw 4, 88(30)
  01642d0  stw 3, 92(30)
  01642d4  lwz 3, 88(26)
  01642d8  slwi 3, 3, 2
  01642dc  addc 3, 27, 3
  01642e0  clrldi 4, 3, 32
  01642e4  addic 3, 30, 96
  01642e8  lwz 4, 40(4)
  01642ec  addc 26, 27, 4
  01642f0  clrldi 26, 26, 32
  01642f4  lwz 4, 4(26)
  01642f8  cmpwi 4, 0
  01642fc  bt 2, 0x164320
  0164300  lwz 4, 0(26)
  0164304  addic 28, 28, 1
  0164308  addc 4, 27, 4
  016430c  cmpwi 28, 70
  0164310  addic 26, 26, 8
  0164314  stw 4, 0(3)
  0164318  addic 3, 3, 4
  016431c  bt 0, 0x1642f4
  0164320  li 3, 0
  0164324  bl 0xe07f8
  0164328  nop
  016432c  lis 30, 114
  0164330  li 6, -1
  0164334  lis 3, 101
  0164338  ori 4, 31, 0
  016433c  addic 3, 3, 14528
  0164340  li 5, -1
  0164344  stw 6, -3068(30)
  0164348  bl 0x503e00
  016434c  nop
  0164350  lis 4, 112
  0164354  addic 5, 30, -3068
  0164358  addic 4, 4, 31800
  016435c  ori 3, 31, 0
  0164360  bl 0x505b30
  0164364  nop
  0164368  li 3, 0
  016436c  bl 0x503244
  0164370  nop
  0164374  li 3, 0
  0164378  bl 0x503078
  016437c  nop
  0164380  bl 0x505d20
  0164384  nop
  0164388  lis 3, 114
  016438c  lwz 3, -3068(3)
  0164390  cmpwi 3, -1
  0164394  bt 2, 0x164368
  0164398  bl 0x505f48
  016439c  nop
  01643a0  ld 0, 496(1)
  01643a4  mtlr 0
  01643a8  ld 20, 384(1)
  01643ac  ld 21, 392(1)
  01643b0  ld 22, 400(1)
  01643b4  ld 23, 408(1)
  01643b8  ld 24, 416(1)
  01643bc  ld 25, 424(1)
  01643c0  ld 26, 432(1)
  01643c4  ld 27, 440(1)
  01643c8  ld 28, 448(1)
  01643cc  ld 29, 456(1)
  01643d0  ld 30, 464(1)
  01643d4  ld 31, 472(1)
  01643d8  addi 1, 1, 480
  01643dc  blr

PlaySpaceMovie:   # 0x1643e0, 0x1e8 bytes
  01643e0  stdu 1, -352(1)
  01643e4  mflr 0
  01643e8  std 0, 368(1)
  01643ec  std 31, 344(1)
  01643f0  lis 31, 150
  01643f4  lis 4, 144
  01643f8  std 30, 336(1)
  01643fc  addic 31, 31, 14176
  0164400  std 29, 328(1)
  0164404  ori 30, 3, 0
  0164408  lwz 29, -23536(4)
  016440c  lbz 3, 107(31)
  0164410  cmpwi 29, 0
  0164414  ori 3, 3, 8
  0164418  std 28, 320(1)
  016441c  std 27, 312(1)
  0164420  std 26, 304(1)
  0164424  stb 3, 107(31)
  0164428  bf 2, 0x164460
  016442c  li 3, 96
  0164430  li 29, 0
  0164434  bl 0x5e38b0
  0164438  nop
  016443c  ori 28, 3, 0
  0164440  cmpwi 28, 0
  0164444  bt 2, 0x164458
  0164448  ori 3, 28, 0
  016444c  bl 0x4d5d5c
  0164450  nop
  0164454  ori 29, 28, 0
  0164458  lis 3, 144
  016445c  stw 29, -23536(3)
  0164460  addic 28, 1, 112
  0164464  lis 4, 101
  0164468  ori 5, 30, 0
  016446c  ori 3, 28, 0
  0164470  addic 4, 4, 14564
  0164474  bl 0x5cd2a8
  0164478  nop
  016447c  bl 0x4ef34c
  0164480  nop
  0164484  addic 30, 1, 176
  0164488  ori 4, 28, 0
  016448c  ori 5, 30, 0
  0164490  bl 0x4ef4d0
  0164494  nop
  0164498  lis 5, 151
  016449c  ori 4, 30, 0
  01644a0  ori 3, 29, 0
  01644a4  li 6, 1024
  01644a8  lwz 5, -25484(5)
  01644ac  bl 0x4d5448
  01644b0  nop
  01644b4  li 27, 0
  01644b8  lis 30, 150
  01644bc  ori 28, 27, 0
  01644c0  addic 30, 30, 19008
  01644c4  bl 0x11e2d4
  01644c8  nop
  01644cc  lwz 3, 164(30)
  01644d0  li 4, 0
  01644d4  rlwinm 3, 3, 0, 20, 20
  01644d8  li 5, 1
  01644dc  subc 3, 4, 3
  01644e0  subc 4, 28, 5
  01644e4  cntlzw 3, 3
  01644e8  sldi 3, 3, 58
  01644ec  sradi 6, 3, 63
  01644f0  li 3, 0
  01644f4  and 28, 6, 4
  01644f8  addc 28, 5, 28
  01644fc  bl 0x684a4
  0164500  nop
  0164504  ori 3, 29, 0
  0164508  bl 0x4d5524
  016450c  nop
  0164510  ori 26, 3, 0
  0164514  bl 0x64f504
  0164518  ld 2, 40(1)
  016451c  cmpwi 26, 2
  0164520  bt 0, 0x164534
  0164524  ori 3, 29, 0
  0164528  bl 0x4d59e8
  016452c  nop
  0164530  ori 27, 3, 0
  0164534  bl 0x68560
  0164538  nop
  016453c  cmpwi 28, 0
  0164540  bt 2, 0x164554
  0164544  ori 3, 29, 0
  0164548  bl 0x4d4c88
  016454c  nop
  0164550  b 0x16455c
  0164554  cmpwi 27, 0
  0164558  bt 2, 0x1644c4
  016455c  li 3, 0
  0164560  bl 0x503078
  0164564  nop
  0164568  li 3, 0
  016456c  li 4, 0
  0164570  bl 0x503074
  0164574  nop
  0164578  lis 3, 112
  016457c  addic 3, 3, 31056
  0164580  bl 0x503208
  0164584  nop
  0164588  li 3, 4
  016458c  bl 0x6dad0
  0164590  nop
  0164594  lbz 3, 107(31)
  0164598  ori 3, 3, 16
  016459c  stb 3, 107(31)
  01645a0  ld 0, 368(1)
  01645a4  mtlr 0
  01645a8  ld 26, 304(1)
  01645ac  ld 27, 312(1)
  01645b0  ld 28, 320(1)
  01645b4  ld 29, 328(1)
  01645b8  ld 30, 336(1)
  01645bc  ld 31, 344(1)
  01645c0  addi 1, 1, 352
  01645c4  blr

STUB_001645c8:   # 0x1645c8, 0x4 bytes
  01645c8  blr

LoadSpacePlate:   # 0x1645cc, 0x18c bytes
  01645cc  stdu 1, -304(1)
  01645d0  mflr 0
  01645d4  std 0, 320(1)
  01645d8  std 31, 296(1)
  01645dc  std 26, 256(1)
  01645e0  lis 9, 161
  01645e4  ori 31, 8, 0
  01645e8  std 28, 272(1)
  01645ec  addic 26, 9, 2264
  01645f0  ori 28, 5, 0
  01645f4  std 25, 248(1)
  01645f8  lis 8, 16
  01645fc  ori 25, 3, 0
  0164600  std 27, 264(1)
  0164604  lis 9, 101
  0164608  lwz 5, 20(26)
  016460c  std 30, 288(1)
  0164610  ori 27, 4, 0
  0164614  ori 30, 7, 0
  0164618  std 29, 280(1)
  016461c  addc 3, 5, 8
  0164620  ori 29, 6, 0
  0164624  addic 4, 9, 14600
  0164628  std 24, 240(1)
  016462c  clrldi 3, 3, 32
  0164630  bl 0x503494
  0164634  nop
  0164638  addic 24, 1, 112
  016463c  lis 4, 101
  0164640  ori 3, 24, 0
  0164644  ori 5, 25, 0
  0164648  addic 4, 4, 14616
  016464c  bl 0x5cd2a8
  0164650  nop
  0164654  ori 3, 24, 0
  0164658  lwz 4, 72(26)
  016465c  li 5, -1
  0164660  bl 0x503e00
  0164664  nop
  0164668  ori 5, 25, 0
  016466c  lis 4, 101
  0164670  ori 25, 3, 0
  0164674  ori 3, 24, 0
  0164678  addic 4, 4, 14664
  016467c  bl 0x5cd2a8
  0164680  nop
  0164684  ori 3, 24, 0
  0164688  lwz 4, 76(26)
  016468c  li 5, -1
  0164690  bl 0x503e00
  0164694  nop
  0164698  lis 3, 101
  016469c  lis 4, 144
  01646a0  ld 3, 14160(3)
  01646a4  mulhd 3, 3, 25
  01646a8  lwz 7, 11932(4)
  01646ac  sradi 5, 3, 1
  01646b0  lwz 6, 72(26)
  01646b4  lwz 4, 76(26)
  01646b8  rldicl 3, 5, 1, 63
  01646bc  addc 5, 5, 3
  01646c0  lwz 3, 1196(7)
  01646c4  cmpwi 5, 0
  01646c8  bf 1, 0x1646f0
  01646cc  subc 3, 4, 3
  01646d0  ori 4, 6, 0
  01646d4  lwz 7, 0(4)
  01646d8  addic 5, 5, -1
  01646dc  addc 7, 7, 3
  01646e0  cmpwi 5, 0
  01646e4  stw 7, 0(4)
  01646e8  addic 4, 4, 36
  01646ec  bt 1, 0x1646d4
  01646f0  sldi 3, 27, 5
  01646f4  sldi 4, 27, 2
  01646f8  stw 6, 0(29)
  01646fc  sldi 5, 28, 5
  0164700  addc 3, 3, 4
  0164704  sldi 4, 28, 2
  0164708  addc 7, 6, 3
  016470c  addc 4, 5, 4
  0164710  li 3, 0
  0164714  addc 4, 6, 4
  0164718  stw 7, 0(30)
  016471c  stw 4, 0(31)
  0164720  bl 0x503128
  0164724  nop
  0164728  ld 0, 320(1)
  016472c  mtlr 0
  0164730  ld 24, 240(1)
  0164734  ld 25, 248(1)
  0164738  ld 26, 256(1)
  016473c  ld 27, 264(1)
  0164740  ld 28, 272(1)
  0164744  ld 29, 280(1)
  0164748  ld 30, 288(1)
  016474c  ld 31, 296(1)
  0164750  addi 1, 1, 304
  0164754  blr

PlaySpacePlate:   # 0x164760, 0x4e8 bytes
  0164760  stdu 1, -272(1)
  0164764  mflr 0
  0164768  std 0, 288(1)
  016476c  stfd 30, 256(1)
  0164770  stfd 31, 264(1)
  0164774  std 22, 176(1)
  0164778  std 21, 168(1)
  016477c  addic 21, 4, 1
  0164780  std 24, 192(1)
  0164784  addic 22, 5, 1
  0164788  ori 24, 7, 0
  016478c  extsw 21, 21
  0164790  std 23, 184(1)
  0164794  extsw 22, 22
  0164798  ori 23, 6, 0
  016479c  addic 7, 1, 132
  01647a0  addic 8, 1, 136
  01647a4  addic 6, 1, 128
  01647a8  ori 4, 21, 0
  01647ac  std 31, 248(1)
  01647b0  std 30, 240(1)
  01647b4  std 29, 232(1)
  01647b8  std 28, 224(1)
  01647bc  std 27, 216(1)
  01647c0  std 26, 208(1)
  01647c4  std 25, 200(1)
  01647c8  std 20, 160(1)
  01647cc  ori 5, 22, 0
  01647d0  bl 0x1645cc
  01647d4  cmpwi 24, 0
  01647d8  bt 2, 0x164804
  01647dc  lis 3, 151
  01647e0  lwz 3, -25488(3)
  01647e4  extsw 3, 3
  01647e8  bl 0x4d04d0
  01647ec  nop
  01647f0  lis 3, 150
  01647f4  li 4, 0
  01647f8  addic 5, 3, 17760
  01647fc  sth 4, 17760(3)
  0164800  sth 4, 2(5)
  0164804  li 3, 0
  0164808  bl 0x503078
  016480c  nop
  0164810  bl 0x174c24
  0164814  nop
  0164818  li 20, 0
  016481c  cmpwi 23, 0
  0164820  ori 28, 20, 0
  0164824  bf 1, 0x164bf4
  0164828  lis 3, 22
  016482c  lis 4, -32640
  0164830  addi 3, 3, 18264
  0164834  lis 29, 150
  0164838  ori 4, 4, 32896
  016483c  ori 27, 20, 0
  0164840  addic 29, 29, 27392
  0164844  lfs 30, 0(3)
  0164848  clrldi 30, 4, 32
  016484c  lfs 31, 4(3)
  0164850  li 3, 0
  0164854  bl 0x684a4
  0164858  nop
  016485c  li 3, 0
  0164860  li 4, 0
  0164864  li 5, 0
  0164868  li 6, 128
  016486c  li 7, 0
  0164870  bl 0x502f74
  0164874  nop
  0164878  ori 4, 3, 0
  016487c  li 3, 21
  0164880  bl 0x174f80
  0164884  nop
  0164888  li 3, 0
  016488c  li 4, 0
  0164890  li 5, 0
  0164894  li 6, 0
  0164898  li 7, 0
  016489c  li 8, 0
  01648a0  bl 0x502f08
  01648a4  nop
  01648a8  ori 4, 3, 0
  01648ac  li 3, 6
  01648b0  bl 0x174f80
  01648b4  nop
  01648b8  lis 3, 6990
  01648bc  li 4, 32
  01648c0  ori 3, 3, 33205
  01648c4  mulhw 3, 3, 20
  01648c8  subc 4, 20, 4
  01648cc  srawi 3, 3, 6
  01648d0  li 6, 128
  01648d4  srwi 8, 3, 31
  01648d8  addic 5, 23, -16
  01648dc  addc 3, 3, 8
  01648e0  mulli 3, 3, 600
  01648e4  subc 9, 27, 6
  01648e8  sradi 4, 4, 63
  01648ec  extsw 5, 5
  01648f0  subc 7, 23, 20
  01648f4  and 4, 4, 9
  01648f8  sldi 7, 7, 3
  01648fc  subc 5, 5, 20
  0164900  addc 31, 6, 4
  0164904  sradi 5, 5, 63
  0164908  subc 4, 7, 31
  016490c  subc 3, 20, 3
  0164910  and 4, 5, 4
  0164914  extsw 3, 3
  0164918  addc 31, 31, 4
  016491c  bl 0x502730
  0164920  nop
  0164924  cmpw 21, 22
  0164928  fmuls 1, 1, 30
  016492c  bf 2, 0x1649e8
  0164930  fadds 2, 1, 31
  0164934  fctiwz 1, 1
  0164938  lis 3, 128
  016493c  lwz 4, 12(29)
  0164940  li 7, 0
  0164944  ori 3, 3, 32896
  0164948  lwz 6, 128(1)
  016494c  srawi 4, 4, 1
  0164950  rlwimi 3, 31, 24, 0, 5
  0164954  addze 4, 4
  0164958  extsw 5, 3
  016495c  addic 4, 4, -32
  0164960  li 3, 0
  0164964  fctiwz 2, 2
  0164968  extsw 4, 4
  016496c  li 8, 4
  0164970  stfd 1, 144(1)
  0164974  lwz 9, 148(1)
  0164978  std 5, 112(1)
  016497c  std 6, 120(1)
  0164980  extsw 9, 9
  0164984  li 5, 512
  0164988  li 6, 64
  016498c  stfd 2, 144(1)
  0164990  lwz 10, 148(1)
  0164994  extsw 10, 10
  0164998  bl 0x6889c
  016499c  nop
  01649a0  lwz 4, 12(29)
  01649a4  lwz 9, 132(1)
  01649a8  li 8, 0
  01649ac  srawi 4, 4, 1
  01649b0  std 30, 112(1)
  01649b4  std 9, 120(1)
  01649b8  li 3, 0
  01649bc  addze 4, 4
  01649c0  li 10, 64
  01649c4  addic 4, 4, -32
  01649c8  li 5, 512
  01649cc  extsw 4, 4
  01649d0  li 6, 64
  01649d4  li 7, 0
  01649d8  li 9, 512
  01649dc  bl 0x6889c
  01649e0  nop
  01649e4  b 0x164b5c
  01649e8  fadds 2, 1, 31
  01649ec  fctiwz 1, 1
  01649f0  lis 3, 128
  01649f4  lwz 4, 12(29)
  01649f8  li 5, 512
  01649fc  ori 3, 3, 32896
  0164a00  lwz 8, 128(1)
  0164a04  srawi 4, 4, 1
  0164a08  rlwimi 3, 31, 24, 0, 5
  0164a0c  addze 4, 4
  0164a10  extsw 7, 3
  0164a14  addic 4, 4, -46
  0164a18  li 3, 0
  0164a1c  fctiwz 2, 2
  0164a20  extsw 4, 4
  0164a24  li 6, 64
  0164a28  stfd 1, 144(1)
  0164a2c  lwz 25, 148(1)
  0164a30  extsw 25, 25
  0164a34  ori 9, 25, 0
  0164a38  stfd 2, 144(1)
  0164a3c  lwz 26, 148(1)
  0164a40  std 7, 112(1)
  0164a44  extsw 26, 26
  0164a48  std 8, 120(1)
  0164a4c  li 7, 0
  0164a50  li 8, 4
  0164a54  ori 10, 26, 0
  0164a58  bl 0x6889c
  0164a5c  nop
  0164a60  lwz 3, 12(29)
  0164a64  lwz 8, 132(1)
  0164a68  li 9, 512
  0164a6c  srawi 3, 3, 1
  0164a70  std 30, 112(1)
  0164a74  std 8, 120(1)
  0164a78  li 10, 64
  0164a7c  addze 3, 3
  0164a80  li 5, 512
  0164a84  addic 4, 3, -46
  0164a88  li 3, 0
  0164a8c  extsw 4, 4
  0164a90  li 6, 64
  0164a94  li 7, 0
  0164a98  li 8, 0
  0164a9c  bl 0x6889c
  0164aa0  nop
  0164aa4  lwz 4, 12(29)
  0164aa8  cmpwi 20, 64
  0164aac  lwz 3, 128(1)
  0164ab0  bf 1, 0x164b5c
  0164ab4  li 5, 96
  0164ab8  ori 8, 3, 0
  0164abc  addic 3, 27, -256
  0164ac0  subc 5, 20, 5
  0164ac4  subc 3, 3, 31
  0164ac8  sradi 5, 5, 63
  0164acc  lis 6, 128
  0164ad0  std 8, 120(1)
  0164ad4  and 3, 5, 3
  0164ad8  ori 6, 6, 32896
  0164adc  addc 3, 31, 3
  0164ae0  srawi 4, 4, 1
  0164ae4  rlwimi 6, 3, 24, 0, 5
  0164ae8  addze 4, 4
  0164aec  extsw 11, 6
  0164af0  extsw 4, 4
  0164af4  ori 9, 25, 0
  0164af8  li 3, 0
  0164afc  std 11, 112(1)
  0164b00  li 5, 512
  0164b04  li 6, 64
  0164b08  li 7, 0
  0164b0c  li 8, 4
  0164b10  ori 10, 26, 0
  0164b14  bl 0x6889c
  0164b18  nop
  0164b1c  lwz 4, 12(29)
  0164b20  li 9, 512
  0164b24  lwz 10, 136(1)
  0164b28  li 3, 0
  0164b2c  srawi 4, 4, 1
  0164b30  std 30, 112(1)
  0164b34  std 10, 120(1)
  0164b38  li 5, 512
  0164b3c  addze 4, 4
  0164b40  li 6, 64
  0164b44  li 7, 0
  0164b48  li 8, 0
  0164b4c  extsw 4, 4
  0164b50  li 10, 64
  0164b54  bl 0x6889c
  0164b58  nop
  0164b5c  bl 0xe76cc
  0164b60  nop
  0164b64  bl 0xe6598
  0164b68  nop
  0164b6c  li 3, 1
  0164b70  bl 0x174cf4
  0164b74  nop
  0164b78  li 3, 0
  0164b7c  bl 0x503078
  0164b80  nop
  0164b84  bl 0x684a0
  0164b88  nop
  0164b8c  bl 0x174cf0
  0164b90  nop
  0164b94  bl 0x174c88
  0164b98  nop
  0164b9c  cmpwi 24, 0
  0164ba0  bt 2, 0x164bdc
  0164ba4  bl 0xdef78
  0164ba8  nop
  0164bac  cmpwi 3, 0
  0164bb0  bf 2, 0x164bd8
  0164bb4  addic 3, 20, 20
  0164bb8  extsw 5, 23
  0164bbc  subc 4, 3, 23
  0164bc0  extsw 3, 3
  0164bc4  subc 3, 5, 3
  0164bc8  sradi 3, 3, 63
  0164bcc  and 3, 3, 4
  0164bd0  addc 23, 23, 3
  0164bd4  b 0x164bdc
  0164bd8  ori 24, 28, 0
  0164bdc  bl 0x68560
  0164be0  nop
  0164be4  addic 20, 20, 1
  0164be8  addic 27, 27, 4
  0164bec  cmpw 20, 23
  0164bf0  bt 0, 0x164850
  0164bf4  li 3, 2
  0164bf8  bl 0x6dad0
  0164bfc  nop
  0164c00  ld 0, 288(1)
  0164c04  mtlr 0
  0164c08  lfd 30, 256(1)
  0164c0c  lfd 31, 264(1)
  0164c10  ld 20, 160(1)
  0164c14  ld 21, 168(1)
  0164c18  ld 22, 176(1)
  0164c1c  ld 23, 184(1)
  0164c20  ld 24, 192(1)
  0164c24  ld 25, 200(1)
  0164c28  ld 26, 208(1)
  0164c2c  ld 27, 216(1)
  0164c30  ld 28, 224(1)
  0164c34  ld 29, 232(1)
  0164c38  ld 30, 240(1)
  0164c3c  ld 31, 248(1)
  0164c40  addi 1, 1, 272
  0164c44  blr

DoSpaceTransition:   # 0x164c58, 0x930 bytes
  0164c58  stdu 1, -192(1)
  0164c5c  mflr 0
  0164c60  std 0, 208(1)
  0164c64  stfd 30, 176(1)
  0164c68  stfd 31, 184(1)
  0164c6c  std 29, 152(1)
  0164c70  lis 3, 346
  0164c74  li 29, 5
  0164c78  lbz 3, -15535(3)
  0164c7c  std 31, 168(1)
  0164c80  std 30, 160(1)
  0164c84  std 28, 144(1)
  0164c88  std 27, 136(1)
  0164c8c  cmpwi 3, 0
  0164c90  bf 2, 0x164cc0
  0164c94  lis 3, 151
  0164c98  li 4, 0
  0164c9c  li 5, 0
  0164ca0  lwz 3, -25484(3)
  0164ca4  addic 3, 3, -1
  0164ca8  extsw 29, 3
  0164cac  subc 3, 29, 4
  0164cb0  subc 4, 5, 29
  0164cb4  sradi 3, 3, 63
  0164cb8  and 3, 3, 4
  0164cbc  addc 29, 29, 3
  0164cc0  lis 3, 161
  0164cc4  lis 4, 161
  0164cc8  addic 6, 3, 2368
  0164ccc  lis 30, 151
  0164cd0  li 3, 6
  0164cd4  addic 30, 30, -13812
  0164cd8  lis 5, -32768
  0164cdc  lis 7, 150
  0164ce0  lwz 8, 16(6)
  0164ce4  stw 3, 1800(4)
  0164ce8  or 5, 8, 5
  0164cec  addic 3, 7, 17776
  0164cf0  li 4, 0
  0164cf4  lbz 7, 8(30)
  0164cf8  stw 5, 16(6)
  0164cfc  cmpwi 7, 0
  0164d00  sth 4, 38(3)
  0164d04  bf 2, 0x164d18
  0164d08  lis 4, 161
  0164d0c  lwz 4, 1796(4)
  0164d10  cmpwi 4, 8
  0164d14  bt 0, 0x164d20
  0164d18  li 4, 1
  0164d1c  sth 4, 38(3)
  0164d20  lbz 4, 14(30)
  0164d24  cmpwi 4, 0
  0164d28  bf 2, 0x164d3c
  0164d2c  lis 4, 161
  0164d30  lwz 4, 1796(4)
  0164d34  cmpwi 4, 14
  0164d38  bt 0, 0x164d44
  0164d3c  li 4, 2
  0164d40  sth 4, 38(3)
  0164d44  li 3, 0
  0164d48  bl 0x503244
  0164d4c  nop
  0164d50  li 3, 0
  0164d54  li 4, 5
  0164d58  li 5, 0
  0164d5c  li 6, 0
  0164d60  li 7, 0
  0164d64  bl 0x506074
  0164d68  nop
  0164d6c  bl 0x505f4c
  0164d70  nop
  0164d74  bl 0x505d20
  0164d78  nop
  0164d7c  bl 0x15d8b4
  0164d80  nop
  0164d84  bl 0x11cd1c
  0164d88  nop
  0164d8c  lis 3, 161
  0164d90  lis 31, 150
  0164d94  li 4, 1
  0164d98  addic 31, 31, 14024
  0164d9c  lwz 3, 1844(3)
  0164da0  cmpwi 3, 0
  0164da4  stb 4, 11(31)
  0164da8  bt 2, 0x164de4
  0164dac  li 4, 1
  0164db0  lwz 3, 28(3)
  0164db4  bl 0x60a9b4
  0164db8  nop
  0164dbc  bl 0x505f48
  0164dc0  nop
  0164dc4  lis 4, 161
  0164dc8  lis 3, 101
  0164dcc  addic 3, 3, 14720
  0164dd0  lwz 4, 1844(4)
  0164dd4  lwz 4, 28(4)
  0164dd8  extsw 4, 4
  0164ddc  bl 0x5cd098
  0164de0  nop
  0164de4  lis 4, 114
  0164de8  li 28, 0
  0164dec  li 3, 0
  0164df0  stw 28, -3068(4)
  0164df4  bl 0x506664
  0164df8  nop
  0164dfc  li 3, 0
  0164e00  bl 0x5066bc
  0164e04  nop
  0164e08  lis 3, 150
  0164e0c  li 6, 16
  0164e10  addic 8, 3, -12416
  0164e14  lis 7, 18688
  0164e18  lis 9, 17279
  0164e1c  lis 10, 17152
  0164e20  li 4, 0
  0164e24  stw 28, 560(8)
  0164e28  li 3, 0
  0164e2c  stw 28, 564(8)
  0164e30  li 5, 0
  0164e34  stw 6, 568(8)
  0164e38  stw 28, 536(8)
  0164e3c  stw 7, 540(8)
  0164e40  stw 9, 552(8)
  0164e44  stw 10, 556(8)
  0164e48  bl 0x780f4
  0164e4c  nop
  0164e50  lis 4, 161
  0164e54  lis 3, 114
  0164e58  lwz 4, 1796(4)
  0164e5c  lfs 1, -3056(3)
  0164e60  cmpwi 4, 0
  0164e64  bf 0, 0x164ef4
  0164e68  bl 0xe886c
  0164e6c  nop
  0164e70  cmpwi 3, 0
  0164e74  bf 2, 0x164e8c
  0164e78  bl 0xe76cc
  0164e7c  nop
  0164e80  bl 0xe6598
  0164e84  nop
  0164e88  b 0x164e68
  0164e8c  lis 3, 22
  0164e90  lis 4, 114
  0164e94  addi 3, 3, 19528
  0164e98  lfs 1, 0(3)
  0164e9c  lfs 2, -3056(4)
  0164ea0  fmuls 1, 2, 1
  0164ea4  fctiwz 1, 1
  0164ea8  stfd 1, 112(1)
  0164eac  lwz 3, 116(1)
  0164eb0  extsw 3, 3
  0164eb4  bl 0x6dad0
  0164eb8  nop
  0164ebc  lis 3, 161
  0164ec0  lis 4, 151
  0164ec4  lwz 3, 1796(3)
  0164ec8  stw 3, -25488(4)
  0164ecc  bl 0xdef38
  0164ed0  nop
  0164ed4  li 3, 0
  0164ed8  bl 0x503128
  0164edc  nop
  0164ee0  li 3, 0
  0164ee4  stb 3, 11(31)
  0164ee8  bl 0x1754e0
  0164eec  nop
  0164ef0  b 0x16555c
  0164ef4  lis 3, 22
  0164ef8  cmpwi 4, 0
  0164efc  addi 3, 3, 19528
  0164f00  lfs 31, 4(3)
  0164f04  bf 2, 0x164ff8
  0164f08  lis 3, 151
  0164f0c  lbz 3, -13792(3)
  0164f10  cmpwi 3, 0
  0164f14  bf 2, 0x164ff8
  0164f18  lis 3, 22
  0164f1c  addi 30, 3, 19528
  0164f20  lfs 2, 0(30)
  0164f24  fmuls 1, 1, 2
  0164f28  fctiwz 1, 1
  0164f2c  stfd 1, 112(1)
  0164f30  lwz 3, 116(1)
  0164f34  extsw 3, 3
  0164f38  bl 0x6dad0
  0164f3c  nop
  0164f40  lis 28, 114
  0164f44  ori 3, 29, 0
  0164f48  li 4, 0
  0164f4c  li 5, 1
  0164f50  li 7, 0
  0164f54  lfs 1, -3056(28)
  0164f58  fmuls 1, 1, 31
  0164f5c  fctiwz 1, 1
  0164f60  stfd 1, 112(1)
  0164f64  lwz 6, 116(1)
  0164f68  extsw 6, 6
  0164f6c  bl 0x164760
  0164f70  li 3, 0
  0164f74  bl 0x1643e0
  0164f78  lfs 1, 8(30)
  0164f7c  ori 3, 29, 0
  0164f80  lfs 2, -3056(28)
  0164f84  li 4, 2
  0164f88  li 5, 2
  0164f8c  fmuls 1, 2, 1
  0164f90  li 7, 0
  0164f94  fctiwz 1, 1
  0164f98  stfd 1, 112(1)
  0164f9c  lwz 6, 116(1)
  0164fa0  extsw 6, 6
  0164fa4  bl 0x164760
  0164fa8  li 3, 1
  0164fac  bl 0x1643e0
  0164fb0  lfs 1, -3056(28)
  0164fb4  lis 3, 161
  0164fb8  lis 4, 151
  0164fbc  fmuls 1, 1, 31
  0164fc0  li 7, 1
  0164fc4  lwz 5, 1796(3)
  0164fc8  ori 3, 29, 0
  0164fcc  stw 5, -25488(4)
  0164fd0  li 4, 3
  0164fd4  li 5, 4
  0164fd8  fctiwz 1, 1
  0164fdc  stfd 1, 112(1)
  0164fe0  lwz 6, 116(1)
  0164fe4  extsw 6, 6
  0164fe8  bl 0x164760
  0164fec  li 3, 2
  0164ff0  bl 0x1643e0
  0164ff4  b 0x165540
  0164ff8  lis 3, 151
  0164ffc  lwz 3, -25488(3)
  0165000  cmpwi 3, 0
  0165004  bf 2, 0x165114
  0165008  cmpwi 4, 1
  016500c  bf 2, 0x165114
  0165010  lis 28, 151
  0165014  addic 28, 28, -13792
  0165018  lbz 5, 1(28)
  016501c  cmpwi 5, 0
  0165020  bf 2, 0x165114
  0165024  lis 3, 22
  0165028  addi 30, 3, 19528
  016502c  lfs 2, 0(30)
  0165030  fmuls 1, 1, 2
  0165034  fctiwz 1, 1
  0165038  stfd 1, 112(1)
  016503c  lwz 3, 116(1)
  0165040  extsw 3, 3
  0165044  bl 0x6dad0
  0165048  nop
  016504c  lis 27, 114
  0165050  ori 3, 29, 0
  0165054  li 7, 0
  0165058  li 4, 5
  016505c  li 5, 6
  0165060  lfs 1, -3056(27)
  0165064  fmuls 1, 1, 31
  0165068  fctiwz 1, 1
  016506c  stfd 1, 112(1)
  0165070  lwz 6, 116(1)
  0165074  extsw 6, 6
  0165078  bl 0x164760
  016507c  li 3, 3
  0165080  bl 0x1643e0
  0165084  li 3, 4
  0165088  bl 0x1643e0
  016508c  lfs 1, 8(30)
  0165090  ori 3, 29, 0
  0165094  lfs 2, -3056(27)
  0165098  li 4, 7
  016509c  li 5, 7
  01650a0  fmuls 1, 2, 1
  01650a4  li 7, 0
  01650a8  fctiwz 1, 1
  01650ac  stfd 1, 112(1)
  01650b0  lwz 6, 116(1)
  01650b4  extsw 6, 6
  01650b8  bl 0x164760
  01650bc  li 3, 5
  01650c0  bl 0x1643e0
  01650c4  lfs 1, -3056(27)
  01650c8  lis 3, 151
  01650cc  lis 5, 161
  01650d0  fmuls 1, 1, 31
  01650d4  li 4, 2
  01650d8  li 7, 1
  01650dc  lwz 6, -25488(3)
  01650e0  lwz 5, 1796(5)
  01650e4  extsw 6, 6
  01650e8  stw 5, -25488(3)
  01650ec  ori 3, 29, 0
  01650f0  li 5, 8
  01650f4  fctiwz 1, 1
  01650f8  stbx 4, 28, 6
  01650fc  li 4, 8
  0165100  stfd 1, 112(1)
  0165104  lwz 6, 116(1)
  0165108  extsw 6, 6
  016510c  bl 0x164760
  0165110  b 0x165540
  0165114  lis 5, 22
  0165118  cmpwi 4, 4
  016511c  addi 5, 5, 19528
  0165120  lfs 30, 12(5)
  0165124  bf 2, 0x16519c
  0165128  lis 4, 151
  016512c  addic 4, 4, -13792
  0165130  lbz 4, 4(4)
  0165134  cmpwi 4, 0
  0165138  bf 2, 0x16519c
  016513c  fmuls 1, 1, 30
  0165140  fctiwz 1, 1
  0165144  stfd 1, 112(1)
  0165148  lwz 3, 116(1)
  016514c  extsw 3, 3
  0165150  bl 0x6dad0
  0165154  nop
  0165158  lis 28, 114
  016515c  ori 3, 29, 0
  0165160  li 7, 0
  0165164  li 4, 9
  0165168  li 5, 10
  016516c  lfs 1, -3056(28)
  0165170  fmuls 1, 1, 31
  0165174  fctiwz 1, 1
  0165178  stfd 1, 112(1)
  016517c  lwz 6, 116(1)
  0165180  extsw 6, 6
  0165184  bl 0x164760
  0165188  li 3, 6
  016518c  bl 0x1643e0
  0165190  lis 3, 151
  0165194  lfs 1, -3056(28)
  0165198  lwz 3, -25488(3)
  016519c  cmpwi 3, 7
  01651a0  fmr 2, 1
  01651a4  bf 2, 0x165220
  01651a8  lis 3, 151
  01651ac  addic 3, 3, -13792
  01651b0  lbz 3, 7(3)
  01651b4  cmpwi 3, 2
  01651b8  bt 2, 0x165220
  01651bc  lbz 3, 8(30)
  01651c0  cmpwi 3, 0
  01651c4  bt 2, 0x165220
  01651c8  fmuls 1, 1, 30
  01651cc  fctiwz 1, 1
  01651d0  stfd 1, 112(1)
  01651d4  lwz 3, 116(1)
  01651d8  extsw 3, 3
  01651dc  bl 0x6dad0
  01651e0  nop
  01651e4  lis 28, 114
  01651e8  ori 3, 29, 0
  01651ec  li 4, 11
  01651f0  li 5, 11
  01651f4  li 7, 0
  01651f8  lfs 1, -3056(28)
  01651fc  fmuls 1, 1, 31
  0165200  fctiwz 1, 1
  0165204  stfd 1, 112(1)
  0165208  lwz 6, 116(1)
  016520c  extsw 6, 6
  0165210  bl 0x164760
  0165214  li 3, 7
  0165218  bl 0x1643e0
  016521c  lfs 2, -3056(28)
  0165220  lis 3, 161
  0165224  fmr 1, 2
  0165228  lwz 3, 1796(3)
  016522c  cmpwi 3, 13
  0165230  bf 2, 0x1652a0
  0165234  lis 3, 151
  0165238  addic 3, 3, -13792
  016523c  lbz 3, 13(3)
  0165240  cmpwi 3, 0
  0165244  bf 2, 0x1652a0
  0165248  fmuls 1, 2, 30
  016524c  fctiwz 1, 1
  0165250  stfd 1, 112(1)
  0165254  lwz 3, 116(1)
  0165258  extsw 3, 3
  016525c  bl 0x6dad0
  0165260  nop
  0165264  lis 28, 114
  0165268  ori 3, 29, 0
  016526c  li 4, 12
  0165270  li 5, 13
  0165274  li 7, 0
  0165278  lfs 1, -3056(28)
  016527c  fmuls 1, 1, 31
  0165280  fctiwz 1, 1
  0165284  stfd 1, 112(1)
  0165288  lwz 6, 116(1)
  016528c  extsw 6, 6
  0165290  bl 0x164760
  0165294  li 3, 8
  0165298  bl 0x1643e0
  016529c  lfs 1, -3056(28)
  01652a0  lis 3, 151
  01652a4  fmr 2, 1
  01652a8  lwz 3, -25488(3)
  01652ac  cmpwi 3, 14
  01652b0  bf 2, 0x16532c
  01652b4  lis 3, 151
  01652b8  addic 3, 3, -13792
  01652bc  lbz 3, 14(3)
  01652c0  cmpwi 3, 2
  01652c4  bt 2, 0x16532c
  01652c8  lbz 3, 15(30)
  01652cc  cmpwi 3, 0
  01652d0  bt 2, 0x16532c
  01652d4  fmuls 1, 1, 30
  01652d8  fctiwz 1, 1
  01652dc  stfd 1, 112(1)
  01652e0  lwz 3, 116(1)
  01652e4  extsw 3, 3
  01652e8  bl 0x6dad0
  01652ec  nop
  01652f0  lis 28, 114
  01652f4  ori 3, 29, 0
  01652f8  li 7, 0
  01652fc  li 4, 14
  0165300  li 5, 14
  0165304  lfs 1, -3056(28)
  0165308  fmuls 1, 1, 31
  016530c  fctiwz 1, 1
  0165310  stfd 1, 112(1)
  0165314  lwz 6, 116(1)
  0165318  extsw 6, 6
  016531c  bl 0x164760
  0165320  li 3, 9
  0165324  bl 0x1643e0
  0165328  lfs 2, -3056(28)
  016532c  lis 3, 161
  0165330  lwz 3, 1796(3)
  0165334  cmpwi 3, 16
  0165338  bf 2, 0x1653ac
  016533c  lis 4, 151
  0165340  addic 4, 4, -13792
  0165344  lbz 4, 16(4)
  0165348  cmpwi 4, 0
  016534c  bf 2, 0x1653ac
  0165350  fmuls 1, 2, 30
  0165354  fctiwz 1, 1
  0165358  stfd 1, 112(1)
  016535c  lwz 3, 116(1)
  0165360  extsw 3, 3
  0165364  bl 0x6dad0
  0165368  nop
  016536c  lis 3, 114
  0165370  li 4, 15
  0165374  li 5, 16
  0165378  li 7, 0
  016537c  lfs 1, -3056(3)
  0165380  ori 3, 29, 0
  0165384  fmuls 1, 1, 31
  0165388  fctiwz 1, 1
  016538c  stfd 1, 112(1)
  0165390  lwz 6, 116(1)
  0165394  extsw 6, 6
  0165398  bl 0x164760
  016539c  li 3, 10
  01653a0  bl 0x1643e0
  01653a4  lis 3, 161
  01653a8  lwz 3, 1796(3)
  01653ac  lis 4, 151
  01653b0  lwz 4, -25488(4)
  01653b4  cmpwi 1, 4, 18
  01653b8  cmpwi 4, 0
  01653bc  cror 2, 0, 5
  01653c0  bt 2, 0x165414
  01653c4  cmpwi 4, 7
  01653c8  li 5, 1
  01653cc  bf 2, 0x1653e4
  01653d0  lbz 6, 8(30)
  01653d4  li 5, 1
  01653d8  cmpwi 6, 0
  01653dc  bf 2, 0x1653e4
  01653e0  li 5, 0
  01653e4  cmpwi 4, 14
  01653e8  bf 2, 0x1653f8
  01653ec  lbz 6, 15(30)
  01653f0  cmpwi 6, 0
  01653f4  bt 2, 0x165414
  01653f8  cmpwi 5, 0
  01653fc  bt 2, 0x165414
  0165400  lis 5, 151
  0165404  extsw 4, 4
  0165408  addic 5, 5, -13792
  016540c  li 6, 2
  0165410  stbx 6, 5, 4
  0165414  lis 4, 150
  0165418  lis 30, 151
  016541c  li 5, 0
  0165420  addic 6, 4, 17760
  0165424  li 7, 1
  0165428  stw 3, -25488(30)
  016542c  sth 5, 17760(4)
  0165430  sth 7, 2(6)
  0165434  bl 0x163aa0
  0165438  lwz 3, -25488(30)
  016543c  extsw 3, 3
  0165440  bl 0x4d04d0
  0165444  nop
  0165448  lis 3, 161
  016544c  lwz 3, 1820(3)
  0165450  cmpwi 3, 0
  0165454  bf 2, 0x165500
  0165458  li 30, 0
  016545c  bl 0x174cf0
  0165460  nop
  0165464  bl 0x174c88
  0165468  nop
  016546c  bl 0x78104
  0165470  nop
  0165474  bl 0x78134
  0165478  nop
  016547c  bl 0x780fc
  0165480  nop
  0165484  bl 0x11e2d4
  0165488  nop
  016548c  bl 0x161788
  0165490  bl 0x1639a8
  0165494  bl 0xe76cc
  0165498  nop
  016549c  bl 0xe6598
  01654a0  nop
  01654a4  li 3, 1
  01654a8  bl 0x174cf4
  01654ac  nop
  01654b0  li 3, 0
  01654b4  bl 0x503078
  01654b8  nop
  01654bc  lis 3, 346
  01654c0  lwz 4, -15568(3)
  01654c4  addic 4, 4, 1
  01654c8  stw 4, -15568(3)
  01654cc  bl 0x13fa18
  01654d0  nop
  01654d4  cmpwi 30, 0
  01654d8  bf 2, 0x1654e8
  01654dc  bl 0xdef78
  01654e0  nop
  01654e4  ori 30, 3, 0
  01654e8  lis 3, 161
  01654ec  lwz 3, 1820(3)
  01654f0  cmpwi 3, 0
  01654f4  bt 2, 0x16545c
  01654f8  cmpwi 30, 0
  01654fc  bf 2, 0x165540
  0165500  li 3, 0
  0165504  bl 0x503244
  0165508  nop
  016550c  li 3, 0
  0165510  bl 0x503078
  0165514  nop
  0165518  bl 0xe76cc
  016551c  nop
  0165520  bl 0xe6598
  0165524  nop
  0165528  bl 0x13fa18
  016552c  nop
  0165530  bl 0xdef78
  0165534  nop
  0165538  cmpwi 3, 0
  016553c  bt 2, 0x165500
  0165540  li 3, 0
  0165544  bl 0x503128
  0165548  nop
  016554c  li 3, 0
  0165550  stb 3, 11(31)
  0165554  bl 0x1754e0
  0165558  nop
  016555c  ld 0, 208(1)
  0165560  mtlr 0
  0165564  lfd 30, 176(1)
  0165568  lfd 31, 184(1)
  016556c  ld 27, 136(1)
  0165570  ld 28, 144(1)
  0165574  ld 29, 152(1)
  0165578  ld 30, 160(1)
  016557c  ld 31, 168(1)
  0165580  addi 1, 1, 192
  0165584  blr
