# game/update/moby871.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M871_0049dc78:   # 0x49dc78, 0x14 bytes
  049dc78  lis 3, 140
  049dc7c  lis 4, 1
  049dc80  addic 3, 3, 32628
  049dc84  stw 4, 72(3)
  049dc88  blr

M871_0049dc90:   # 0x49dc90, 0xec bytes
  049dc90  stdu 1, -128(1)
  049dc94  mflr 0
  049dc98  std 0, 144(1)
  049dc9c  std 31, 120(1)
  049dca0  ori 31, 3, 0
  049dca4  std 30, 112(1)
  049dca8  li 3, 0
  049dcac  li 30, 255
  049dcb0  li 5, 1
  049dcb4  lis 4, -32640
  049dcb8  lwz 6, 36(31)
  049dcbc  stb 3, 32(31)
  049dcc0  stb 3, 188(31)
  049dcc4  ori 4, 4, 32639
  049dcc8  ori 3, 31, 0
  049dccc  lhz 7, 68(6)
  049dcd0  lfs 1, 36(6)
  049dcd4  sth 7, 52(31)
  049dcd8  stfs 1, 44(31)
  049dcdc  stb 30, 48(31)
  049dce0  sth 30, 50(31)
  049dce4  stb 5, 49(31)
  049dce8  bl 0xf25f4
  049dcec  nop
  049dcf0  lwz 4, 36(31)
  049dcf4  li 5, 32640
  049dcf8  stb 30, 114(31)
  049dcfc  ori 3, 31, 0
  049dd00  stb 30, 164(31)
  049dd04  stb 30, 113(31)
  049dd08  sth 5, 54(31)
  049dd0c  lwz 4, 16(4)
  049dd10  stw 4, 148(31)
  049dd14  bl 0x10c000
  049dd18  nop
  049dd1c  ori 3, 31, 0
  049dd20  bl 0xf31a8
  049dd24  nop
  049dd28  ori 3, 31, 0
  049dd2c  bl 0xfcccc
  049dd30  nop
  049dd34  cmpwi 3, 0
  049dd38  bt 2, 0x49dd64
  049dd3c  li 4, 4
  049dd40  vspltisw 2, -16
  049dd44  addi 5, 4, 16
  049dd48  lvlx 3, 4, 3
  049dd4c  lvrx 4, 5, 3
  049dd50  vor 3, 3, 4
  049dd54  vsraw 2, 3, 2
  049dd58  vcfsx 2, 2, 0
  049dd5c  vspltw 2, 2, 0
  049dd60  stvewx 2, 0, 3
  049dd64  ld 0, 144(1)
  049dd68  mtlr 0
  049dd6c  ld 30, 112(1)
  049dd70  ld 31, 120(1)
  049dd74  addi 1, 1, 128
  049dd78  blr

UpdateMoby_871:   # 0x49dda0, 0x780 bytes
  049dda0  stdu 1, -320(1)
  049dda4  mflr 0
  049dda8  std 0, 336(1)
  049ddac  stfd 31, 312(1)
  049ddb0  std 31, 304(1)
  049ddb4  cmpwi 3, 0
  049ddb8  std 30, 296(1)
  049ddbc  std 29, 288(1)
  049ddc0  std 28, 280(1)
  049ddc4  std 27, 272(1)
  049ddc8  std 26, 264(1)
  049ddcc  std 25, 256(1)
  049ddd0  ori 31, 3, 0
  049ddd4  bt 2, 0x49e4f0
  049ddd8  lwz 30, 120(31)
  049dddc  cmpwi 30, 0
  049dde0  bt 2, 0x49e4f0
  049dde4  lbz 3, 148(30)
  049dde8  addic 29, 30, 32
  049ddec  cmpwi 3, 0
  049ddf0  bt 2, 0x49dfa4
  049ddf4  ori 3, 31, 0
  049ddf8  ori 28, 29, 0
  049ddfc  lis 4, 35
  049de00  li 5, 0
  049de04  bl 0x10675c
  049de08  nop
  049de0c  ori 29, 3, 0
  049de10  ori 3, 31, 0
  049de14  addic 7, 1, 224
  049de18  li 9, 0
  049de1c  li 10, 4
  049de20  ori 4, 29, 0
  049de24  ori 5, 28, 0
  049de28  li 6, 0
  049de2c  li 8, 0
  049de30  bl 0x106840
  049de34  nop
  049de38  cmpwi 3, 2
  049de3c  lwz 4, 224(1)
  049de40  bt 1, 0x49de5c
  049de44  cmpwi 3, -1
  049de48  bf 1, 0x49de5c
  049de4c  cmpwi 3, 0
  049de50  bf 1, 0x49de5c
  049de54  li 3, 0
  049de58  stw 3, 32(30)
  049de5c  cmpwi 4, 1
  049de60  bf 1, 0x49df9c
  049de64  lwz 3, 32(30)
  049de68  lwz 4, 44(29)
  049de6c  srawi 6, 3, 31
  049de70  srawi 5, 4, 31
  049de74  lfs 1, 32(30)
  049de78  srwi 8, 6, 1
  049de7c  lfs 2, 44(29)
  049de80  srwi 7, 5, 1
  049de84  xor 3, 8, 3
  049de88  xor 4, 7, 4
  049de8c  subc 3, 3, 6
  049de90  subc 4, 4, 5
  049de94  cmpw 3, 4
  049de98  bt 1, 0x49df40
  049de9c  lis 3, 74
  049dea0  li 28, 0
  049dea4  addi 29, 3, -8836
  049dea8  lwz 3, 116(30)
  049deac  li 4, 3
  049deb0  extsw 3, 3
  049deb4  lfs 1, 0(29)
  049deb8  stw 28, 32(30)
  049debc  fmr 31, 1
  049dec0  bl 0x1042ec
  049dec4  nop
  049dec8  stw 28, 204(1)
  049decc  li 7, -1
  049ded0  stw 28, 200(1)
  049ded4  li 6, 1
  049ded8  stw 28, 196(1)
  049dedc  ori 3, 31, 0
  049dee0  stw 28, 192(1)
  049dee4  addic 4, 1, 192
  049dee8  lfs 3, 4(29)
  049deec  li 5, 0
  049def0  lfs 4, 8(29)
  049def4  li 8, 10
  049def8  lfs 5, 12(29)
  049defc  fmr 1, 31
  049df00  lfs 6, 16(29)
  049df04  li 9, 3
  049df08  lfs 7, 20(29)
  049df0c  fmr 2, 31
  049df10  std 7, 144(1)
  049df14  li 10, 16
  049df18  std 6, 160(1)
  049df1c  std 6, 168(1)
  049df20  std 7, 176(1)
  049df24  std 28, 184(1)
  049df28  bl 0x10e030
  049df2c  nop
  049df30  ori 3, 31, 0
  049df34  bl 0xefb38
  049df38  nop
  049df3c  b 0x49e4f0
  049df40  fsubs 1, 1, 2
  049df44  lis 3, 74
  049df48  vspltisw 2, -1
  049df4c  li 4, 250
  049df50  addi 3, 3, -8836
  049df54  li 6, 24
  049df58  lis 5, 114
  049df5c  stb 4, 103(30)
  049df60  li 4, -3056
  049df64  vslw 2, 2, 2
  049df68  stfs 1, 32(30)
  049df6c  lvlx 3, 6, 3
  049df70  lvlx 4, 4, 5
  049df74  vspltw 3, 3, 0
  049df78  li 5, 38
  049df7c  addic 4, 30, 96
  049df80  ori 3, 31, 0
  049df84  vmaddfp 2, 4, 3, 2
  049df88  vctsxs 2, 2, 0
  049df8c  vsplth 2, 2, 1
  049df90  stvehx 2, 5, 30
  049df94  bl 0x10c808
  049df98  nop
  049df9c  li 3, 255
  049dfa0  stb 3, 164(31)
  049dfa4  addic 4, 30, 96
  049dfa8  ori 3, 31, 0
  049dfac  bl 0x10c9a0
  049dfb0  nop
  049dfb4  lwz 28, 112(30)
  049dfb8  cmpwi 28, -1
  049dfbc  bt 2, 0x49e4f0
  049dfc0  lis 3, 165
  049dfc4  slwi 4, 28, 2
  049dfc8  addic 28, 3, 7136
  049dfcc  extsw 3, 4
  049dfd0  lbz 4, 32(31)
  049dfd4  cmpwi 4, 0
  049dfd8  cmpwi 1, 4, -1
  049dfdc  lwzx 28, 28, 3
  049dfe0  cmpwi 6, 4, 1
  049dfe4  bt 1, 0x49dff0
  049dfe8  bf 5, 0x49e4d8
  049dfec  b 0x49dff8
  049dff0  bf 25, 0x49e290
  049dff4  b 0x49e4d8
  049dff8  lis 3, 74
  049dffc  li 4, 0
  049e000  addi 3, 3, -8836
  049e004  stw 4, 228(1)
  049e008  lfs 31, 0(3)
  049e00c  stw 4, 232(1)
  049e010  lfs 1, 16(28)
  049e014  stfs 1, 208(1)
  049e018  lfs 1, 20(28)
  049e01c  stfs 1, 212(1)
  049e020  lfs 1, 24(28)
  049e024  stfs 1, 216(1)
  049e028  lfs 1, 28(28)
  049e02c  stfs 1, 220(1)
  049e030  lwz 6, 0(28)
  049e034  cmpwi 6, 0
  049e038  bf 1, 0x49e0ac
  049e03c  ori 4, 28, 0
  049e040  li 3, 0
  049e044  addic 5, 4, 16
  049e048  addic 3, 3, 1
  049e04c  divw 7, 3, 6
  049e050  mullw 6, 7, 6
  049e054  lfs 1, 20(4)
  049e058  subc 6, 3, 6
  049e05c  lfs 2, 16(4)
  049e060  sldi 6, 6, 4
  049e064  lfs 3, 24(4)
  049e068  addc 6, 6, 5
  049e06c  clrldi 6, 6, 32
  049e070  lfs 4, 4(6)
  049e074  lfs 5, 0(6)
  049e078  fsubs 1, 1, 4
  049e07c  fsubs 2, 2, 5
  049e080  lfs 4, 8(6)
  049e084  fsubs 3, 3, 4
  049e088  fmuls 1, 1, 1
  049e08c  fmadds 1, 2, 2, 1
  049e090  fmadds 1, 3, 3, 1
  049e094  fsqrts 1, 1
  049e098  stfs 1, 28(4)
  049e09c  lwz 6, 0(28)
  049e0a0  addic 4, 4, 16
  049e0a4  cmpw 3, 6
  049e0a8  bt 0, 0x49e048
  049e0ac  addic 3, 1, 228
  049e0b0  lwz 4, 116(30)
  049e0b4  li 5, 1
  049e0b8  li 6, 0
  049e0bc  extsw 4, 4
  049e0c0  bl 0x104800
  049e0c4  nop
  049e0c8  cmpwi 3, 0
  049e0cc  bt 2, 0x49e0ec
  049e0d0  lis 3, 102
  049e0d4  lwz 4, 116(30)
  049e0d8  addic 3, 3, -30832
  049e0dc  extsw 4, 4
  049e0e0  bl 0x5cd098
  049e0e4  nop
  049e0e8  b 0x49e4f0
  049e0ec  addic 3, 31, 16
  049e0f0  fmr 1, 31
  049e0f4  ori 4, 28, 0
  049e0f8  bl 0x1367d0
  049e0fc  nop
  049e100  stw 3, 144(30)
  049e104  stw 3, 236(1)
  049e108  lwz 3, 120(30)
  049e10c  cmpwi 3, 0
  049e110  bf 1, 0x49e24c
  049e114  li 29, 0
  049e118  lwz 3, 228(1)
  049e11c  li 5, 1
  049e120  lwz 4, 120(3)
  049e124  stw 31, 160(4)
  049e128  lfs 1, 208(1)
  049e12c  stfs 1, 16(3)
  049e130  lfs 1, 212(1)
  049e134  stfs 1, 20(3)
  049e138  lfs 1, 216(1)
  049e13c  stfs 1, 24(3)
  049e140  lfs 1, 220(1)
  049e144  stfs 1, 28(3)
  049e148  lfs 1, 208(1)
  049e14c  stfs 1, 128(4)
  049e150  lfs 1, 212(1)
  049e154  stfs 1, 132(4)
  049e158  lfs 1, 216(1)
  049e15c  stfs 1, 136(4)
  049e160  lfs 1, 220(1)
  049e164  stfs 1, 140(4)
  049e168  lfs 1, 208(1)
  049e16c  stfs 1, 112(4)
  049e170  lfs 1, 212(1)
  049e174  stfs 1, 116(4)
  049e178  lfs 1, 216(1)
  049e17c  stfs 1, 120(4)
  049e180  lfs 1, 220(1)
  049e184  stfs 1, 124(4)
  049e188  lwz 3, 236(1)
  049e18c  addic 6, 3, 1
  049e190  stw 3, 144(4)
  049e194  addic 3, 1, 228
  049e198  stw 6, 148(4)
  049e19c  li 6, 0
  049e1a0  lwz 4, 228(1)
  049e1a4  bl 0x10466c
  049e1a8  nop
  049e1ac  cmpwi 3, 0
  049e1b0  bt 2, 0x49e21c
  049e1b4  lwz 3, 120(30)
  049e1b8  addic 4, 3, -1
  049e1bc  extsw 3, 3
  049e1c0  cmpw 1, 29, 4
  049e1c4  bf 4, 0x49e1f0
  049e1c8  lis 4, 102
  049e1cc  ori 6, 3, 0
  049e1d0  addic 5, 29, 1
  049e1d4  addic 3, 4, -30784
  049e1d8  extsw 4, 5
  049e1dc  lwz 5, 116(30)
  049e1e0  extsw 5, 5
  049e1e4  bl 0x5cd098
  049e1e8  nop
  049e1ec  b 0x49e210
  049e1f0  bf 6, 0x49e210
  049e1f4  lis 4, 102
  049e1f8  ori 5, 3, 0
  049e1fc  addic 3, 4, -30704
  049e200  lwz 4, 116(30)
  049e204  extsw 4, 4
  049e208  bl 0x5cd098
  049e20c  nop
  049e210  addic 3, 29, 1
  049e214  stw 3, 120(30)
  049e218  b 0x49e24c
  049e21c  ori 3, 28, 0
  049e220  lfs 1, 128(30)
  049e224  addic 4, 1, 208
  049e228  addic 5, 1, 236
  049e22c  addic 6, 1, 232
  049e230  li 8, 1
  049e234  bl 0x10ce18
  049e238  nop
  049e23c  lwz 3, 120(30)
  049e240  addic 29, 29, 1
  049e244  cmpw 29, 3
  049e248  bt 0, 0x49e118
  049e24c  lbz 3, 148(30)
  049e250  cmpwi 3, 0
  049e254  bf 2, 0x49e26c
  049e258  li 3, 0
  049e25c  lhz 4, 52(31)
  049e260  rlwimi 4, 3, 0, 19, 19
  049e264  stw 3, 148(31)
  049e268  sth 4, 52(31)
  049e26c  lbz 3, 149(30)
  049e270  cmpwi 3, 0
  049e274  bf 2, 0x49e284
  049e278  lhz 3, 52(31)
  049e27c  ori 3, 3, 1
  049e280  sth 3, 52(31)
  049e284  li 3, 1
  049e288  stb 3, 32(31)
  049e28c  b 0x49e4d8
  049e290  li 29, 0
  049e294  addic 3, 1, 240
  049e298  li 6, 0
  049e29c  li 5, 1
  049e2a0  stw 29, 240(1)
  049e2a4  lwz 4, 116(30)
  049e2a8  extsw 4, 4
  049e2ac  bl 0x104800
  049e2b0  nop
  049e2b4  lwz 3, 120(30)
  049e2b8  cmpwi 3, 0
  049e2bc  bf 1, 0x49e4d8
  049e2c0  ori 27, 29, 0
  049e2c4  lwz 26, 240(1)
  049e2c8  lwz 26, 120(26)
  049e2cc  lis 7, 114
  049e2d0  lwz 3, 144(26)
  049e2d4  lfs 1, 132(26)
  049e2d8  slwi 3, 3, 4
  049e2dc  lfs 2, 128(26)
  049e2e0  addc 3, 28, 3
  049e2e4  clrldi 3, 3, 32
  049e2e8  addic 6, 1, 244
  049e2ec  lfs 3, 20(3)
  049e2f0  lfs 4, 16(3)
  049e2f4  fsubs 1, 1, 3
  049e2f8  fsubs 2, 2, 4
  049e2fc  lfs 3, 136(26)
  049e300  lfs 4, 24(3)
  049e304  fsubs 3, 3, 4
  049e308  ori 3, 28, 0
  049e30c  addic 4, 26, 128
  049e310  fmuls 1, 1, 1
  049e314  addic 5, 26, 144
  049e318  li 8, 1
  049e31c  fmadds 1, 2, 2, 1
  049e320  lfs 2, -3052(7)
  049e324  fmadds 1, 3, 3, 1
  049e328  fsqrts 1, 1
  049e32c  stfs 1, 244(1)
  049e330  lfs 1, 124(30)
  049e334  fmuls 1, 1, 2
  049e338  bl 0x10ce18
  049e33c  nop
  049e340  lwz 3, 144(26)
  049e344  addic 3, 3, 1
  049e348  stw 3, 148(26)
  049e34c  lwz 3, 240(1)
  049e350  cmpwi 3, 0
  049e354  bt 2, 0x49e36c
  049e358  lbz 4, 32(3)
  049e35c  cmpwi 4, 254
  049e360  cmpwi 1, 4, 253
  049e364  bt 2, 0x49e36c
  049e368  bf 6, 0x49e4b0
  049e36c  lwz 4, 132(30)
  049e370  cmpwi 4, -1
  049e374  bt 2, 0x49e4b0
  049e378  ori 4, 3, 0
  049e37c  lfs 1, 128(26)
  049e380  addic 3, 26, 152
  049e384  lfs 2, 16(4)
  049e388  lfs 3, 132(26)
  049e38c  fsubs 2, 1, 2
  049e390  lfs 4, 136(26)
  049e394  lfs 5, 140(26)
  049e398  stfs 2, 96(26)
  049e39c  lfs 2, 20(4)
  049e3a0  fsubs 2, 3, 2
  049e3a4  stfs 2, 100(26)
  049e3a8  lfs 2, 24(4)
  049e3ac  stfs 5, 108(26)
  049e3b0  fsubs 2, 4, 2
  049e3b4  stfs 2, 104(26)
  049e3b8  stfs 1, 16(4)
  049e3bc  lfs 1, 132(26)
  049e3c0  stfs 1, 20(4)
  049e3c4  lfs 1, 136(26)
  049e3c8  stfs 1, 24(4)
  049e3cc  lfs 1, 140(26)
  049e3d0  stfs 1, 28(4)
  049e3d4  bl 0x4fff60
  049e3d8  nop
  049e3dc  cmpwi 3, 0
  049e3e0  bt 2, 0x49e4b0
  049e3e4  lwz 3, 144(26)
  049e3e8  lwz 4, 144(30)
  049e3ec  cmpw 3, 4
  049e3f0  bf 2, 0x49e4b0
  049e3f4  lwz 25, 240(1)
  049e3f8  li 26, 255
  049e3fc  li 5, 1
  049e400  lis 4, -32640
  049e404  ori 3, 25, 0
  049e408  lwz 6, 36(25)
  049e40c  ori 4, 4, 32639
  049e410  stb 29, 32(25)
  049e414  stb 29, 188(25)
  049e418  lhz 7, 68(6)
  049e41c  sth 7, 52(25)
  049e420  lfs 1, 36(6)
  049e424  stb 26, 48(25)
  049e428  stfs 1, 44(25)
  049e42c  sth 26, 50(25)
  049e430  stb 5, 49(25)
  049e434  bl 0xf25f4
  049e438  nop
  049e43c  li 4, 32640
  049e440  lwz 5, 36(25)
  049e444  ori 3, 25, 0
  049e448  stb 26, 114(25)
  049e44c  stb 26, 164(25)
  049e450  sth 4, 54(25)
  049e454  stb 26, 113(25)
  049e458  lwz 4, 16(5)
  049e45c  stw 4, 148(25)
  049e460  bl 0x10c000
  049e464  nop
  049e468  ori 3, 25, 0
  049e46c  bl 0xf31a8
  049e470  nop
  049e474  ori 3, 25, 0
  049e478  bl 0xfcccc
  049e47c  nop
  049e480  cmpwi 3, 0
  049e484  bt 2, 0x49e4b0
  049e488  li 4, 4
  049e48c  vspltisw 2, -16
  049e490  addi 5, 4, 16
  049e494  lvlx 3, 4, 3
  049e498  lvrx 4, 5, 3
  049e49c  vor 3, 3, 4
  049e4a0  vsraw 2, 3, 2
  049e4a4  vcfsx 2, 2, 0
  049e4a8  vspltw 2, 2, 0
  049e4ac  stvewx 2, 0, 3
  049e4b0  addic 3, 1, 240
  049e4b4  lwz 4, 240(1)
  049e4b8  li 5, 1
  049e4bc  li 6, 0
  049e4c0  bl 0x10466c
  049e4c4  nop
  049e4c8  addic 27, 27, 1
  049e4cc  lwz 3, 120(30)
  049e4d0  cmpw 27, 3
  049e4d4  bt 0, 0x49e2c4
  049e4d8  lis 3, 74
  049e4dc  addi 4, 3, -8836
  049e4e0  ori 3, 31, 0
  049e4e4  lfs 1, 28(4)
  049e4e8  bl 0x106150
  049e4ec  nop
  049e4f0  ld 0, 336(1)
  049e4f4  mtlr 0
  049e4f8  lfd 31, 312(1)
  049e4fc  ld 25, 256(1)
  049e500  ld 26, 264(1)
  049e504  ld 27, 272(1)
  049e508  ld 28, 280(1)
  049e50c  ld 29, 288(1)
  049e510  ld 30, 296(1)
  049e514  ld 31, 304(1)
  049e518  addi 1, 1, 320
  049e51c  blr
