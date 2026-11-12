# game/update/moby427.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M427_0036da54:   # 0x36da54, 0x14 bytes
  036da54  lis 3, 132
  036da58  lis 4, 1
  036da5c  addic 3, 3, 4704
  036da60  stw 4, 72(3)
  036da64  blr

M427_0036dac0:   # 0x36dac0, 0x5b8 bytes
  036dac0  stdu 1, -336(1)
  036dac4  mflr 0
  036dac8  std 0, 352(1)
  036dacc  stfd 19, 232(1)
  036dad0  stfd 20, 240(1)
  036dad4  stfd 21, 248(1)
  036dad8  stfd 22, 256(1)
  036dadc  stfd 23, 264(1)
  036dae0  stfd 24, 272(1)
  036dae4  stfd 25, 280(1)
  036dae8  stfd 26, 288(1)
  036daec  stfd 27, 296(1)
  036daf0  stfd 28, 304(1)
  036daf4  stfd 29, 312(1)
  036daf8  stfd 30, 320(1)
  036dafc  stfd 31, 328(1)
  036db00  addi 0, 1, 160
  036db04  stvx 31, 0, 0
  036db08  extsw 3, 8
  036db0c  lis 6, 55
  036db10  std 3, 144(1)
  036db14  addi 3, 6, -9624
  036db18  fsubs 2, 2, 1
  036db1c  li 6, 0
  036db20  lfs 25, 0(3)
  036db24  lfs 3, 0(5)
  036db28  lfs 4, 0(4)
  036db2c  lfd 5, 144(1)
  036db30  fcfid 5, 5
  036db34  lfs 6, 4(5)
  036db38  std 29, 208(1)
  036db3c  fsubs 22, 3, 4
  036db40  lis 7, 15395
  036db44  std 30, 216(1)
  036db48  ori 29, 4, 0
  036db4c  ori 30, 5, 0
  036db50  std 31, 224(1)
  036db54  cmpwi 8, 0
  036db58  ori 31, 8, 0
  036db5c  frsp 31, 5
  036db60  lfs 5, 4(4)
  036db64  lfs 3, 8(5)
  036db68  lfs 4, 8(4)
  036db6c  fsubs 23, 6, 5
  036db70  lfs 26, 4(3)
  036db74  ori 4, 7, 55050
  036db78  fsubs 3, 3, 4
  036db7c  stw 6, 128(1)
  036db80  lis 5, 16256
  036db84  stw 6, 132(1)
  036db88  lfs 27, 8(3)
  036db8c  fdivs 24, 25, 31
  036db90  stw 4, 136(1)
  036db94  stw 5, 140(1)
  036db98  fdivs 31, 2, 31
  036db9c  fmuls 22, 22, 24
  036dba0  fmuls 23, 23, 24
  036dba4  std 28, 200(1)
  036dba8  std 27, 192(1)
  036dbac  std 26, 184(1)
  036dbb0  std 25, 176(1)
  036dbb4  fmuls 24, 3, 24
  036dbb8  bf 1, 0x36dda0
  036dbbc  lis 3, 55
  036dbc0  li 4, 28
  036dbc4  addi 3, 3, -9624
  036dbc8  li 25, 0
  036dbcc  lfs 2, 24(3)
  036dbd0  lfs 28, 12(3)
  036dbd4  lfs 29, 16(3)
  036dbd8  lfs 30, 20(3)
  036dbdc  fmadds 31, 2, 1, 31
  036dbe0  lvlx 31, 4, 3
  036dbe4  vspltw 31, 31, 0
  036dbe8  ori 3, 25, 0
  036dbec  bl 0x502730
  036dbf0  nop
  036dbf4  lfs 2, 0(29)
  036dbf8  lfs 3, 4(29)
  036dbfc  fmadds 4, 1, 22, 2
  036dc00  lfs 2, 8(29)
  036dc04  fmadds 3, 1, 23, 3
  036dc08  fmadds 5, 1, 24, 2
  036dc0c  lfs 2, 12(29)
  036dc10  fmr 1, 26
  036dc14  stfs 2, 124(1)
  036dc18  fmr 2, 28
  036dc1c  stfs 4, 112(1)
  036dc20  stfs 3, 116(1)
  036dc24  stfs 5, 120(1)
  036dc28  bl 0xfe4f0
  036dc2c  nop
  036dc30  stfs 1, 128(1)
  036dc34  fmr 2, 28
  036dc38  fmr 1, 26
  036dc3c  bl 0xfe4f0
  036dc40  nop
  036dc44  lis 3, 132
  036dc48  stfs 1, 132(1)
  036dc4c  lfs 2, 5204(3)
  036dc50  fmuls 1, 2, 29
  036dc54  bl 0xfcbe8
  036dc58  nop
  036dc5c  li 3, 64
  036dc60  stfs 1, 136(1)
  036dc64  li 4, 112
  036dc68  bl 0xfe484
  036dc6c  nop
  036dc70  ori 26, 3, 0
  036dc74  li 3, 64
  036dc78  li 4, 127
  036dc7c  bl 0xfe484
  036dc80  nop
  036dc84  fmr 1, 25
  036dc88  slwi 4, 3, 16
  036dc8c  fmr 2, 30
  036dc90  slwi 5, 3, 8
  036dc94  or 4, 4, 5
  036dc98  or 27, 4, 3
  036dc9c  bl 0xfcbe8
  036dca0  nop
  036dca4  fmr 21, 1
  036dca8  li 4, 2
  036dcac  li 3, -2
  036dcb0  bl 0xfe484
  036dcb4  nop
  036dcb8  lis 4, 132
  036dcbc  fmr 2, 25
  036dcc0  slwi 28, 26, 24
  036dcc4  fmr 3, 21
  036dcc8  ori 7, 3, 0
  036dccc  fmr 4, 31
  036dcd0  addic 3, 1, 112
  036dcd4  or 10, 28, 27
  036dcd8  addic 8, 1, 128
  036dcdc  lfs 1, 5212(4)
  036dce0  extsw 10, 10
  036dce4  bl 0x126f50
  036dce8  nop
  036dcec  ori 27, 3, 0
  036dcf0  cmpwi 27, 0
  036dcf4  bt 2, 0x36dd90
  036dcf8  li 3, 2
  036dcfc  bl 0xfc620
  036dd00  nop
  036dd04  cmpwi 3, 0
  036dd08  bt 2, 0x36dd3c
  036dd0c  li 5, 126
  036dd10  li 3, 96
  036dd14  li 4, 224
  036dd18  stb 5, 3(27)
  036dd1c  bl 0xfe484
  036dd20  nop
  036dd24  slwi 4, 3, 16
  036dd28  slwi 5, 3, 8
  036dd2c  or 4, 4, 5
  036dd30  or 3, 4, 3
  036dd34  or 3, 28, 3
  036dd38  stw 3, 4(27)
  036dd3c  vspltisw 2, -1
  036dd40  lis 3, 114
  036dd44  li 4, -3056
  036dd48  li 5, 10
  036dd4c  vslw 2, 2, 2
  036dd50  li 6, 2
  036dd54  lvlx 3, 4, 3
  036dd58  vmaddfp 2, 3, 31, 2
  036dd5c  vspltisw 3, -1
  036dd60  li 7, 43
  036dd64  vslw 3, 3, 3
  036dd68  vctsxs 2, 2, 0
  036dd6c  vsplth 2, 2, 1
  036dd70  stvehx 2, 5, 27
  036dd74  stw 6, 36(27)
  036dd78  stb 26, 42(27)
  036dd7c  lvlx 2, 4, 3
  036dd80  vmaddfp 2, 2, 31, 3
  036dd84  vctsxs 2, 2, 0
  036dd88  vspltb 2, 2, 3
  036dd8c  stvebx 2, 7, 27
  036dd90  addic 25, 25, 1
  036dd94  extsw 25, 25
  036dd98  cmpw 25, 31
  036dd9c  bt 0, 0x36dbe8
  036dda0  bl 0xfcc68
  036dda4  nop
  036dda8  lis 3, 55
  036ddac  addi 31, 3, -9624
  036ddb0  lfs 31, 32(31)
  036ddb4  lfs 30, 36(31)
  036ddb8  fadds 1, 1, 31
  036ddbc  lfs 29, 40(31)
  036ddc0  lfs 28, 44(31)
  036ddc4  lfs 26, 48(31)
  036ddc8  lfs 25, 52(31)
  036ddcc  lfs 24, 56(31)
  036ddd0  lfs 23, 60(31)
  036ddd4  fsubs 2, 30, 1
  036ddd8  fsubs 3, 29, 1
  036dddc  fsub 5, 1, 2
  036dde0  fsel 1, 5, 2, 1
  036dde4  fsub 2, 3, 1
  036dde8  fsel 1, 2, 3, 1
  036ddec  fmuls 3, 1, 1
  036ddf0  fmuls 4, 3, 1
  036ddf4  fmuls 2, 3, 4
  036ddf8  fmadds 1, 4, 28, 1
  036ddfc  fmuls 4, 3, 2
  036de00  fmadds 1, 2, 26, 1
  036de04  fmuls 2, 3, 4
  036de08  fmadds 1, 4, 25, 1
  036de0c  fmadds 1, 2, 24, 1
  036de10  fmuls 1, 1, 23
  036de14  stfs 1, 128(1)
  036de18  bl 0xfcc68
  036de1c  nop
  036de20  fsubs 2, 30, 1
  036de24  fsubs 3, 29, 1
  036de28  li 28, 0
  036de2c  stw 28, 136(1)
  036de30  fsub 4, 1, 2
  036de34  fsel 1, 4, 2, 1
  036de38  fsub 2, 3, 1
  036de3c  fsel 1, 2, 3, 1
  036de40  fmuls 2, 1, 1
  036de44  fmuls 3, 2, 1
  036de48  fmuls 4, 2, 3
  036de4c  fmadds 1, 3, 28, 1
  036de50  fmuls 3, 2, 4
  036de54  fmadds 4, 4, 26, 1
  036de58  fmr 1, 27
  036de5c  fmuls 2, 2, 3
  036de60  fmadds 3, 3, 25, 4
  036de64  fmadds 2, 2, 24, 3
  036de68  fmuls 2, 2, 23
  036de6c  stfs 2, 132(1)
  036de70  lfs 22, 64(31)
  036de74  fmr 2, 22
  036de78  bl 0xfcbe8
  036de7c  nop
  036de80  lis 27, 114
  036de84  stfs 1, 136(1)
  036de88  lfs 21, 72(31)
  036de8c  lfs 20, 68(31)
  036de90  addic 26, 1, 128
  036de94  lfs 2, -3056(27)
  036de98  fmuls 3, 2, 21
  036de9c  fctiwz 1, 3
  036dea0  stfd 1, 144(1)
  036dea4  lfs 19, 76(31)
  036dea8  lwz 3, 148(1)
  036deac  fmuls 1, 2, 19
  036deb0  extsw 3, 3
  036deb4  fctiwz 1, 1
  036deb8  stfd 1, 144(1)
  036debc  lwz 4, 148(1)
  036dec0  extsw 4, 4
  036dec4  bl 0xfe484
  036dec8  nop
  036decc  fmr 1, 20
  036ded0  lis 5, 20224
  036ded4  lis 6, 8191
  036ded8  ori 8, 3, 0
  036dedc  li 9, 1
  036dee0  ori 3, 29, 0
  036dee4  ori 4, 26, 0
  036dee8  ori 5, 5, 32767
  036deec  ori 6, 6, 65535
  036def0  bl 0x1268f8
  036def4  nop
  036def8  bl 0xfcc68
  036defc  nop
  036df00  fadds 1, 1, 31
  036df04  fsubs 2, 30, 1
  036df08  fsubs 3, 29, 1
  036df0c  fsub 4, 1, 2
  036df10  fsel 1, 4, 2, 1
  036df14  fsub 2, 3, 1
  036df18  fsel 1, 2, 3, 1
  036df1c  fmuls 2, 1, 1
  036df20  fmuls 3, 2, 1
  036df24  fmuls 4, 2, 3
  036df28  fmadds 1, 3, 28, 1
  036df2c  fmuls 3, 2, 4
  036df30  fmadds 1, 4, 26, 1
  036df34  fmuls 2, 2, 3
  036df38  fmadds 1, 3, 25, 1
  036df3c  fmadds 1, 2, 24, 1
  036df40  fmuls 1, 1, 23
  036df44  stfs 1, 128(1)
  036df48  bl 0xfcc68
  036df4c  nop
  036df50  fsubs 2, 30, 1
  036df54  fsubs 3, 29, 1
  036df58  stw 28, 136(1)
  036df5c  fsub 4, 1, 2
  036df60  fsel 1, 4, 2, 1
  036df64  fsub 2, 3, 1
  036df68  fsel 2, 2, 3, 1
  036df6c  fmr 1, 27
  036df70  fmuls 3, 2, 2
  036df74  fmuls 4, 3, 2
  036df78  fmuls 5, 3, 4
  036df7c  fmadds 4, 4, 28, 2
  036df80  fmr 2, 22
  036df84  fmuls 6, 3, 5
  036df88  fmadds 4, 5, 26, 4
  036df8c  fmuls 3, 3, 6
  036df90  fmadds 4, 6, 25, 4
  036df94  fmadds 3, 3, 24, 4
  036df98  fmuls 3, 3, 23
  036df9c  stfs 3, 132(1)
  036dfa0  bl 0xfcbe8
  036dfa4  nop
  036dfa8  lfs 2, -3056(27)
  036dfac  stfs 1, 136(1)
  036dfb0  fmuls 3, 2, 21
  036dfb4  lfs 31, 80(31)
  036dfb8  fmuls 2, 2, 19
  036dfbc  fctiwz 1, 3
  036dfc0  fctiwz 2, 2
  036dfc4  stfd 1, 144(1)
  036dfc8  lwz 3, 148(1)
  036dfcc  stfd 2, 144(1)
  036dfd0  lwz 4, 148(1)
  036dfd4  extsw 3, 3
  036dfd8  extsw 4, 4
  036dfdc  bl 0xfe484
  036dfe0  nop
  036dfe4  lis 5, 20224
  036dfe8  lis 6, 8191
  036dfec  fmr 1, 31
  036dff0  ori 8, 3, 0
  036dff4  li 9, 1
  036dff8  ori 3, 30, 0
  036dffc  ori 4, 26, 0
  036e000  ori 5, 5, 32767
  036e004  ori 6, 6, 65535
  036e008  bl 0x1268f8
  036e00c  nop
  036e010  li 0, 160
  036e014  lvx 31, 1, 0
  036e018  ld 0, 352(1)
  036e01c  mtlr 0
  036e020  lfd 19, 232(1)
  036e024  lfd 20, 240(1)
  036e028  lfd 21, 248(1)
  036e02c  lfd 22, 256(1)
  036e030  lfd 23, 264(1)
  036e034  lfd 24, 272(1)
  036e038  lfd 25, 280(1)
  036e03c  lfd 26, 288(1)
  036e040  lfd 27, 296(1)
  036e044  lfd 28, 304(1)
  036e048  lfd 29, 312(1)
  036e04c  lfd 30, 320(1)
  036e050  lfd 31, 328(1)
  036e054  ld 25, 176(1)
  036e058  ld 26, 184(1)
  036e05c  ld 27, 192(1)
  036e060  ld 28, 200(1)
  036e064  ld 29, 208(1)
  036e068  ld 30, 216(1)
  036e06c  ld 31, 224(1)
  036e070  addi 1, 1, 336
  036e074  blr

M427_0036e080:   # 0x36e080, 0x198 bytes
  036e080  stdu 1, -192(1)
  036e084  mflr 0
  036e088  std 0, 208(1)
  036e08c  stfd 27, 152(1)
  036e090  stfd 28, 160(1)
  036e094  stfd 29, 168(1)
  036e098  stfd 30, 176(1)
  036e09c  stfd 31, 184(1)
  036e0a0  lis 7, 132
  036e0a4  sldi 4, 4, 4
  036e0a8  lfs 1, 208(3)
  036e0ac  addic 7, 7, 4816
  036e0b0  lis 8, 55
  036e0b4  addc 9, 7, 4
  036e0b8  addi 8, 8, -8072
  036e0bc  clrldi 9, 9, 32
  036e0c0  sldi 5, 5, 4
  036e0c4  lfs 2, 0(9)
  036e0c8  stfs 2, 112(1)
  036e0cc  lfs 3, 4(9)
  036e0d0  stfs 3, 116(1)
  036e0d4  lfs 4, 0(8)
  036e0d8  fmuls 6, 1, 3
  036e0dc  lfs 5, 8(9)
  036e0e0  lfs 7, 212(3)
  036e0e4  lfs 8, 204(3)
  036e0e8  lfs 10, 216(3)
  036e0ec  fmadds 30, 8, 2, 4
  036e0f0  lfs 11, 192(3)
  036e0f4  fmuls 9, 7, 3
  036e0f8  lfs 13, 196(3)
  036e0fc  fmuls 12, 10, 3
  036e100  lfs 0, 200(3)
  036e104  lfs 31, 236(3)
  036e108  addc 8, 7, 5
  036e10c  lfs 29, 224(3)
  036e110  fmadds 6, 11, 2, 6
  036e114  lfs 28, 220(3)
  036e118  clrldi 8, 8, 32
  036e11c  lfs 27, 228(3)
  036e120  extsw 4, 4
  036e124  fmadds 30, 31, 5, 30
  036e128  fmadds 9, 13, 2, 9
  036e12c  fmadds 2, 0, 2, 12
  036e130  lfs 12, 232(3)
  036e134  fmadds 6, 29, 5, 6
  036e138  addc 9, 7, 4
  036e13c  extsw 5, 5
  036e140  lis 10, 132
  036e144  fmadds 3, 28, 3, 30
  036e148  fmadds 9, 27, 5, 9
  036e14c  fmadds 2, 12, 5, 2
  036e150  addc 7, 7, 5
  036e154  addic 4, 1, 112
  036e158  addic 5, 1, 128
  036e15c  stfs 3, 124(1)
  036e160  lfs 3, 16(3)
  036e164  lfs 5, 20(3)
  036e168  fadds 6, 6, 3
  036e16c  lfs 30, 24(3)
  036e170  fadds 9, 9, 5
  036e174  fadds 2, 2, 30
  036e178  stfs 6, 112(1)
  036e17c  stfs 9, 116(1)
  036e180  stfs 2, 120(1)
  036e184  lfs 2, 0(8)
  036e188  fmadds 4, 8, 2, 4
  036e18c  fmadds 3, 11, 2, 3
  036e190  stfs 2, 128(1)
  036e194  fmadds 5, 13, 2, 5
  036e198  lfs 6, 4(8)
  036e19c  fmadds 2, 0, 2, 30
  036e1a0  stfs 6, 132(1)
  036e1a4  lfs 8, 8(8)
  036e1a8  ori 8, 6, 0
  036e1ac  fmadds 4, 31, 8, 4
  036e1b0  fmadds 3, 29, 8, 3
  036e1b4  fmadds 5, 27, 8, 5
  036e1b8  fmadds 2, 12, 8, 2
  036e1bc  fmadds 4, 28, 6, 4
  036e1c0  fmadds 1, 1, 6, 3
  036e1c4  fmadds 3, 7, 6, 5
  036e1c8  fmadds 2, 10, 6, 2
  036e1cc  stfs 4, 140(1)
  036e1d0  stfs 1, 128(1)
  036e1d4  stfs 3, 132(1)
  036e1d8  stfs 2, 136(1)
  036e1dc  lfs 1, 12(9)
  036e1e0  lfs 2, 5200(10)
  036e1e4  lfs 3, 12(7)
  036e1e8  fmuls 1, 1, 2
  036e1ec  fmuls 2, 3, 2
  036e1f0  bl 0x36dac0
  036e1f4  ld 0, 208(1)
  036e1f8  mtlr 0
  036e1fc  lfd 27, 152(1)
  036e200  lfd 28, 160(1)
  036e204  lfd 29, 168(1)
  036e208  lfd 30, 176(1)
  036e20c  lfd 31, 184(1)
  036e210  addi 1, 1, 192
  036e214  blr

M427_0036e218:   # 0x36e218, 0x1ac bytes
  036e218  stdu 1, -144(1)
  036e21c  mflr 0
  036e220  std 0, 160(1)
  036e224  std 31, 136(1)
  036e228  lis 6, 132
  036e22c  ori 31, 3, 0
  036e230  li 4, 0
  036e234  li 5, 1
  036e238  lwz 6, 5216(6)
  036e23c  std 30, 128(1)
  036e240  std 29, 120(1)
  036e244  std 28, 112(1)
  036e248  extsw 6, 6
  036e24c  bl 0x36e080
  036e250  lis 6, 132
  036e254  ori 3, 31, 0
  036e258  li 4, 2
  036e25c  li 5, 3
  036e260  lwz 6, 5220(6)
  036e264  extsw 6, 6
  036e268  bl 0x36e080
  036e26c  lis 30, 132
  036e270  ori 3, 31, 0
  036e274  li 4, 4
  036e278  li 5, 5
  036e27c  lwz 6, 5224(30)
  036e280  extsw 6, 6
  036e284  bl 0x36e080
  036e288  lis 29, 132
  036e28c  ori 3, 31, 0
  036e290  li 4, 5
  036e294  li 5, 6
  036e298  lwz 6, 5228(29)
  036e29c  extsw 6, 6
  036e2a0  bl 0x36e080
  036e2a4  lis 28, 132
  036e2a8  ori 3, 31, 0
  036e2ac  li 4, 6
  036e2b0  li 5, 7
  036e2b4  lwz 6, 5232(28)
  036e2b8  extsw 6, 6
  036e2bc  bl 0x36e080
  036e2c0  lwz 6, 5224(30)
  036e2c4  ori 3, 31, 0
  036e2c8  extsw 6, 6
  036e2cc  li 4, 8
  036e2d0  li 5, 9
  036e2d4  bl 0x36e080
  036e2d8  lwz 6, 5228(29)
  036e2dc  ori 3, 31, 0
  036e2e0  li 4, 9
  036e2e4  extsw 6, 6
  036e2e8  li 5, 10
  036e2ec  bl 0x36e080
  036e2f0  lwz 6, 5232(28)
  036e2f4  ori 3, 31, 0
  036e2f8  li 4, 10
  036e2fc  extsw 6, 6
  036e300  li 5, 11
  036e304  bl 0x36e080
  036e308  lis 30, 132
  036e30c  ori 3, 31, 0
  036e310  li 4, 12
  036e314  li 5, 13
  036e318  lwz 6, 5236(30)
  036e31c  extsw 6, 6
  036e320  bl 0x36e080
  036e324  lwz 6, 5236(30)
  036e328  ori 3, 31, 0
  036e32c  li 4, 14
  036e330  extsw 6, 6
  036e334  li 5, 15
  036e338  bl 0x36e080
  036e33c  lis 30, 132
  036e340  ori 3, 31, 0
  036e344  li 4, 16
  036e348  li 5, 17
  036e34c  lwz 6, 5240(30)
  036e350  extsw 6, 6
  036e354  bl 0x36e080
  036e358  lwz 6, 5240(30)
  036e35c  ori 3, 31, 0
  036e360  li 4, 20
  036e364  extsw 6, 6
  036e368  li 5, 21
  036e36c  bl 0x36e080
  036e370  lis 30, 132
  036e374  ori 3, 31, 0
  036e378  li 4, 18
  036e37c  li 5, 19
  036e380  lwz 6, 5244(30)
  036e384  extsw 6, 6
  036e388  bl 0x36e080
  036e38c  lwz 6, 5244(30)
  036e390  ori 3, 31, 0
  036e394  li 4, 22
  036e398  extsw 6, 6
  036e39c  li 5, 23
  036e3a0  bl 0x36e080
  036e3a4  ld 0, 160(1)
  036e3a8  mtlr 0
  036e3ac  ld 28, 112(1)
  036e3b0  ld 29, 120(1)
  036e3b4  ld 30, 128(1)
  036e3b8  ld 31, 136(1)
  036e3bc  addi 1, 1, 144
  036e3c0  blr

M427_0036e3c4:   # 0x36e3c4, 0x1d4 bytes
  036e3c4  stdu 1, -144(1)
  036e3c8  mflr 0
  036e3cc  std 0, 160(1)
  036e3d0  std 31, 136(1)
  036e3d4  ori 31, 3, 0
  036e3d8  lwz 3, 120(31)
  036e3dc  lwz 3, 248(3)
  036e3e0  std 30, 128(1)
  036e3e4  std 29, 120(1)
  036e3e8  std 28, 112(1)
  036e3ec  cmpwi 3, 0
  036e3f0  bt 2, 0x36e3fc
  036e3f4  bl 0xefb38
  036e3f8  nop
  036e3fc  lis 6, 132
  036e400  ori 3, 31, 0
  036e404  li 4, 0
  036e408  li 5, 1
  036e40c  lwz 6, 5216(6)
  036e410  extsw 6, 6
  036e414  bl 0x36e080
  036e418  lis 6, 132
  036e41c  ori 3, 31, 0
  036e420  li 4, 2
  036e424  li 5, 3
  036e428  lwz 6, 5220(6)
  036e42c  extsw 6, 6
  036e430  bl 0x36e080
  036e434  lis 30, 132
  036e438  ori 3, 31, 0
  036e43c  li 4, 4
  036e440  li 5, 5
  036e444  lwz 6, 5224(30)
  036e448  extsw 6, 6
  036e44c  bl 0x36e080
  036e450  lis 29, 132
  036e454  ori 3, 31, 0
  036e458  li 4, 5
  036e45c  li 5, 6
  036e460  lwz 6, 5228(29)
  036e464  extsw 6, 6
  036e468  bl 0x36e080
  036e46c  lis 28, 132
  036e470  ori 3, 31, 0
  036e474  li 4, 6
  036e478  li 5, 7
  036e47c  lwz 6, 5232(28)
  036e480  extsw 6, 6
  036e484  bl 0x36e080
  036e488  lwz 6, 5224(30)
  036e48c  ori 3, 31, 0
  036e490  li 4, 8
  036e494  extsw 6, 6
  036e498  li 5, 9
  036e49c  bl 0x36e080
  036e4a0  lwz 6, 5228(29)
  036e4a4  ori 3, 31, 0
  036e4a8  extsw 6, 6
  036e4ac  li 4, 9
  036e4b0  li 5, 10
  036e4b4  bl 0x36e080
  036e4b8  lwz 6, 5232(28)
  036e4bc  ori 3, 31, 0
  036e4c0  li 4, 10
  036e4c4  extsw 6, 6
  036e4c8  li 5, 11
  036e4cc  bl 0x36e080
  036e4d0  lis 30, 132
  036e4d4  ori 3, 31, 0
  036e4d8  li 4, 12
  036e4dc  li 5, 13
  036e4e0  lwz 6, 5236(30)
  036e4e4  extsw 6, 6
  036e4e8  bl 0x36e080
  036e4ec  lwz 6, 5236(30)
  036e4f0  ori 3, 31, 0
  036e4f4  extsw 6, 6
  036e4f8  li 4, 14
  036e4fc  li 5, 15
  036e500  bl 0x36e080
  036e504  lis 30, 132
  036e508  ori 3, 31, 0
  036e50c  li 4, 16
  036e510  li 5, 17
  036e514  lwz 6, 5240(30)
  036e518  extsw 6, 6
  036e51c  bl 0x36e080
  036e520  lwz 6, 5240(30)
  036e524  ori 3, 31, 0
  036e528  li 4, 20
  036e52c  extsw 6, 6
  036e530  li 5, 21
  036e534  bl 0x36e080
  036e538  lis 30, 132
  036e53c  ori 3, 31, 0
  036e540  li 4, 18
  036e544  li 5, 19
  036e548  lwz 6, 5244(30)
  036e54c  extsw 6, 6
  036e550  bl 0x36e080
  036e554  lwz 6, 5244(30)
  036e558  ori 3, 31, 0
  036e55c  extsw 6, 6
  036e560  li 4, 22
  036e564  li 5, 23
  036e568  bl 0x36e080
  036e56c  ori 3, 31, 0
  036e570  bl 0xefb38
  036e574  nop
  036e578  ld 0, 160(1)
  036e57c  mtlr 0
  036e580  ld 28, 112(1)
  036e584  ld 29, 120(1)
  036e588  ld 30, 128(1)
  036e58c  ld 31, 136(1)
  036e590  addi 1, 1, 144
  036e594  blr

UpdateMoby_427:   # 0x36e680, 0x291c bytes
  036e680  stdu 1, -688(1)
  036e684  mflr 0
  036e688  std 0, 704(1)
  036e68c  stfd 22, 608(1)
  036e690  stfd 23, 616(1)
  036e694  stfd 24, 624(1)
  036e698  stfd 25, 632(1)
  036e69c  stfd 26, 640(1)
  036e6a0  stfd 27, 648(1)
  036e6a4  stfd 28, 656(1)
  036e6a8  stfd 29, 664(1)
  036e6ac  stfd 30, 672(1)
  036e6b0  stfd 31, 680(1)
  036e6b4  std 25, 552(1)
  036e6b8  addi 0, 1, 512
  036e6bc  stvx 31, 0, 0
  036e6c0  std 31, 600(1)
  036e6c4  lwz 25, 120(3)
  036e6c8  std 30, 592(1)
  036e6cc  ori 31, 3, 0
  036e6d0  std 23, 536(1)
  036e6d4  li 30, 0
  036e6d8  ori 23, 30, 0
  036e6dc  lwz 3, 56(25)
  036e6e0  std 29, 584(1)
  036e6e4  std 28, 576(1)
  036e6e8  std 27, 568(1)
  036e6ec  std 26, 560(1)
  036e6f0  std 24, 544(1)
  036e6f4  cmpwi 3, 0
  036e6f8  bf 2, 0x36e708
  036e6fc  lbz 3, 254(25)
  036e700  cmpwi 3, 0
  036e704  bt 2, 0x36e70c
  036e708  li 30, 1
  036e70c  lis 3, 55
  036e710  addic 24, 25, 272
  036e714  addi 4, 3, -6760
  036e718  ori 3, 24, 0
  036e71c  lfs 1, 0(4)
  036e720  bl 0x119ac0
  036e724  nop
  036e728  lbz 3, 49(31)
  036e72c  cmpwi 3, 0
  036e730  bt 2, 0x36e79c
  036e734  lis 3, 149
  036e738  lfs 1, 20(31)
  036e73c  lfs 2, 16(31)
  036e740  addic 3, 3, 5056
  036e744  lfs 3, 324(3)
  036e748  lfs 4, 320(3)
  036e74c  fsubs 1, 1, 3
  036e750  fsubs 2, 2, 4
  036e754  lfs 3, 24(31)
  036e758  lfs 4, 328(3)
  036e75c  fsubs 3, 3, 4
  036e760  lis 3, 55
  036e764  fmuls 1, 1, 1
  036e768  addi 3, 3, -6760
  036e76c  fmadds 1, 2, 2, 1
  036e770  lfs 2, 4(3)
  036e774  fmadds 1, 3, 3, 1
  036e778  fsqrts 1, 1
  036e77c  fcmpu 0, 1, 2
  036e780  cror 6, 1, 2
  036e784  bt 6, 0x36e79c
  036e788  ori 3, 31, 0
  036e78c  bl 0x106360
  036e790  nop
  036e794  li 3, 21
  036e798  stb 3, 127(31)
  036e79c  cmpwi 30, 0
  036e7a0  bt 2, 0x36e7bc
  036e7a4  lis 3, 55
  036e7a8  lfs 31, 220(25)
  036e7ac  addi 3, 3, -6760
  036e7b0  lfs 1, 8(3)
  036e7b4  fmuls 31, 31, 1
  036e7b8  b 0x36e7c0
  036e7bc  lfs 31, 220(25)
  036e7c0  fmr 1, 31
  036e7c4  addic 5, 1, 384
  036e7c8  ori 3, 31, 0
  036e7cc  bl 0x1118d8
  036e7d0  nop
  036e7d4  lfs 1, 20(31)
  036e7d8  lis 3, 55
  036e7dc  lfs 2, 388(1)
  036e7e0  lfs 3, 16(31)
  036e7e4  fsubs 1, 1, 2
  036e7e8  addi 4, 3, -6760
  036e7ec  lfs 2, 384(1)
  036e7f0  ori 3, 31, 0
  036e7f4  lwz 29, 448(1)
  036e7f8  fsubs 2, 3, 2
  036e7fc  lfs 26, 12(4)
  036e800  stw 23, 468(1)
  036e804  fmuls 1, 1, 1
  036e808  fmadds 31, 2, 2, 1
  036e80c  fsqrts 31, 31
  036e810  bl 0xefe40
  036e814  nop
  036e818  lbz 3, 32(31)
  036e81c  lfs 25, 416(1)
  036e820  fmr 30, 1
  036e824  lfs 24, 420(1)
  036e828  cmpwi 3, 0
  036e82c  lfs 23, 424(1)
  036e830  lfs 22, 428(1)
  036e834  lfs 29, 16(31)
  036e838  lfs 28, 20(31)
  036e83c  bt 2, 0x36e874
  036e840  lbz 3, 46(25)
  036e844  cmpwi 3, 1
  036e848  bt 2, 0x36e874
  036e84c  lwz 25, 248(25)
  036e850  cmpwi 25, 0
  036e854  bt 2, 0x36e864
  036e858  ori 3, 25, 0
  036e85c  bl 0xefb38
  036e860  nop
  036e864  ori 3, 31, 0
  036e868  bl 0xefb38
  036e86c  nop
  036e870  b 0x370f38
  036e874  lwz 28, 224(25)
  036e878  cmpwi 28, -1
  036e87c  bt 2, 0x36e88c
  036e880  lwz 3, 228(25)
  036e884  cmpwi 3, -1
  036e888  bf 2, 0x36ea6c
  036e88c  lis 3, 164
  036e890  lwz 3, -28512(3)
  036e894  subc 3, 31, 3
  036e898  srawi 3, 3, 8
  036e89c  addze 3, 3
  036e8a0  extsw 3, 3
  036e8a4  std 3, 488(1)
  036e8a8  lis 3, 101
  036e8ac  addic 30, 3, 26432
  036e8b0  lfd 1, 488(1)
  036e8b4  fcfid 1, 1
  036e8b8  frsp 1, 1
  036e8bc  bl 0x502758
  036e8c0  nop
  036e8c4  ori 4, 3, 0
  036e8c8  ori 3, 30, 0
  036e8cc  bl 0x5cd098
  036e8d0  nop
  036e8d4  lwz 3, 120(31)
  036e8d8  lwz 3, 248(3)
  036e8dc  cmpwi 3, 0
  036e8e0  bt 2, 0x36e8ec
  036e8e4  bl 0xefb38
  036e8e8  nop
  036e8ec  lis 6, 132
  036e8f0  ori 3, 31, 0
  036e8f4  li 4, 0
  036e8f8  li 5, 1
  036e8fc  lwz 6, 5216(6)
  036e900  extsw 6, 6
  036e904  bl 0x36e080
  036e908  lis 6, 132
  036e90c  ori 3, 31, 0
  036e910  li 4, 2
  036e914  li 5, 3
  036e918  lwz 6, 5220(6)
  036e91c  extsw 6, 6
  036e920  bl 0x36e080
  036e924  lis 30, 132
  036e928  ori 3, 31, 0
  036e92c  li 4, 4
  036e930  li 5, 5
  036e934  lwz 6, 5224(30)
  036e938  extsw 6, 6
  036e93c  bl 0x36e080
  036e940  lis 29, 132
  036e944  ori 3, 31, 0
  036e948  li 4, 5
  036e94c  li 5, 6
  036e950  lwz 6, 5228(29)
  036e954  extsw 6, 6
  036e958  bl 0x36e080
  036e95c  lis 28, 132
  036e960  ori 3, 31, 0
  036e964  li 4, 6
  036e968  li 5, 7
  036e96c  lwz 6, 5232(28)
  036e970  extsw 6, 6
  036e974  bl 0x36e080
  036e978  lwz 6, 5224(30)
  036e97c  ori 3, 31, 0
  036e980  extsw 6, 6
  036e984  li 4, 8
  036e988  li 5, 9
  036e98c  bl 0x36e080
  036e990  lwz 6, 5228(29)
  036e994  ori 3, 31, 0
  036e998  li 4, 9
  036e99c  extsw 6, 6
  036e9a0  li 5, 10
  036e9a4  bl 0x36e080
  036e9a8  lwz 6, 5232(28)
  036e9ac  ori 3, 31, 0
  036e9b0  extsw 6, 6
  036e9b4  li 4, 10
  036e9b8  li 5, 11
  036e9bc  bl 0x36e080
  036e9c0  lis 30, 132
  036e9c4  ori 3, 31, 0
  036e9c8  li 4, 12
  036e9cc  li 5, 13
  036e9d0  lwz 6, 5236(30)
  036e9d4  extsw 6, 6
  036e9d8  bl 0x36e080
  036e9dc  lwz 6, 5236(30)
  036e9e0  ori 3, 31, 0
  036e9e4  li 4, 14
  036e9e8  extsw 6, 6
  036e9ec  li 5, 15
  036e9f0  bl 0x36e080
  036e9f4  lis 30, 132
  036e9f8  ori 3, 31, 0
  036e9fc  li 4, 16
  036ea00  li 5, 17
  036ea04  lwz 6, 5240(30)
  036ea08  extsw 6, 6
  036ea0c  bl 0x36e080
  036ea10  lwz 6, 5240(30)
  036ea14  ori 3, 31, 0
  036ea18  extsw 6, 6
  036ea1c  li 4, 20
  036ea20  li 5, 21
  036ea24  bl 0x36e080
  036ea28  lis 30, 132
  036ea2c  ori 3, 31, 0
  036ea30  li 4, 18
  036ea34  li 5, 19
  036ea38  lwz 6, 5244(30)
  036ea3c  extsw 6, 6
  036ea40  bl 0x36e080
  036ea44  lwz 6, 5244(30)
  036ea48  ori 3, 31, 0
  036ea4c  li 4, 22
  036ea50  extsw 6, 6
  036ea54  li 5, 23
  036ea58  bl 0x36e080
  036ea5c  ori 3, 31, 0
  036ea60  bl 0xefb38
  036ea64  nop
  036ea68  b 0x370f38
  036ea6c  li 4, 0
  036ea70  lhz 5, 232(25)
  036ea74  subc 3, 3, 28
  036ea78  subc 4, 4, 5
  036ea7c  lis 5, 165
  036ea80  cntlzw 4, 4
  036ea84  addic 5, 5, 7136
  036ea88  sldi 4, 4, 58
  036ea8c  sradi 4, 4, 63
  036ea90  and 3, 4, 3
  036ea94  addc 3, 28, 3
  036ea98  slwi 4, 3, 2
  036ea9c  li 3, -1
  036eaa0  extsw 28, 4
  036eaa4  ori 4, 23, 0
  036eaa8  lwzx 28, 5, 28
  036eaac  lwz 5, 0(28)
  036eab0  cmpwi 5, 0
  036eab4  bf 1, 0x36eb3c
  036eab8  ori 6, 28, 0
  036eabc  fmr 1, 26
  036eac0  lfs 2, 20(6)
  036eac4  lfs 3, 16(6)
  036eac8  fsubs 2, 24, 2
  036eacc  fsubs 3, 25, 3
  036ead0  addic 6, 6, 16
  036ead4  fmuls 2, 2, 2
  036ead8  fmadds 2, 3, 3, 2
  036eadc  fsqrts 2, 2
  036eae0  fcmpu 0, 2, 1
  036eae4  cror 6, 0, 2
  036eae8  bt 6, 0x36eaf4
  036eaec  fmr 1, 2
  036eaf0  ori 3, 4, 0
  036eaf4  addic 4, 4, 1
  036eaf8  cmpw 4, 5
  036eafc  bt 0, 0x36eac0
  036eb00  cmpwi 3, -1
  036eb04  bt 2, 0x36eb3c
  036eb08  sldi 3, 3, 4
  036eb0c  fmr 1, 28
  036eb10  addc 3, 28, 3
  036eb14  fmr 2, 29
  036eb18  clrldi 3, 3, 32
  036eb1c  lfs 28, 20(3)
  036eb20  lfs 29, 16(3)
  036eb24  fsubs 1, 28, 1
  036eb28  fsubs 2, 29, 2
  036eb2c  fmuls 1, 1, 1
  036eb30  fmadds 27, 2, 2, 1
  036eb34  fsqrts 27, 27
  036eb38  b 0x36eb40
  036eb3c  fmr 27, 26
  036eb40  ori 3, 31, 0
  036eb44  lis 4, 33
  036eb48  li 5, 0
  036eb4c  bl 0x10675c
  036eb50  nop
  036eb54  ori 27, 3, 0
  036eb58  ori 3, 31, 0
  036eb5c  ori 4, 27, 0
  036eb60  addic 5, 25, 32
  036eb64  li 6, 0
  036eb68  addic 7, 1, 464
  036eb6c  li 9, 0
  036eb70  addic 8, 1, 468
  036eb74  li 10, 4
  036eb78  bl 0x106840
  036eb7c  nop
  036eb80  ori 26, 3, 0
  036eb84  addic 3, 25, 240
  036eb88  bl 0x4fffb4
  036eb8c  nop
  036eb90  addic 3, 25, 242
  036eb94  bl 0x4fffb4
  036eb98  nop
  036eb9c  cmpwi 27, 0
  036eba0  bt 2, 0x36ef8c
  036eba4  lbz 3, 32(31)
  036eba8  cmpwi 3, 11
  036ebac  bf 0, 0x36ef8c
  036ebb0  lhz 3, 240(25)
  036ebb4  cmpwi 3, 0
  036ebb8  bf 2, 0x36ef8c
  036ebbc  lis 3, 16256
  036ebc0  stw 3, 476(1)
  036ebc4  lwz 3, 32(27)
  036ebc8  cmpwi 3, 0
  036ebcc  bt 2, 0x36ec2c
  036ebd0  lis 4, 151
  036ebd4  addic 4, 4, -25376
  036ebd8  lwz 5, 4240(4)
  036ebdc  cmpw 3, 5
  036ebe0  bt 2, 0x36ec08
  036ebe4  lfs 1, 16(31)
  036ebe8  lfs 2, 16(3)
  036ebec  lfs 3, 20(31)
  036ebf0  lfs 4, 20(3)
  036ebf4  fsubs 1, 1, 2
  036ebf8  fsubs 2, 3, 4
  036ebfc  bl 0x5e8338
  036ec00  nop
  036ec04  b 0x36ec28
  036ec08  lfs 1, 16(31)
  036ec0c  lfs 2, 128(4)
  036ec10  lfs 3, 20(31)
  036ec14  lfs 4, 132(4)
  036ec18  fsubs 1, 1, 2
  036ec1c  fsubs 2, 3, 4
  036ec20  bl 0x5e8338
  036ec24  nop
  036ec28  b 0x36ec54
  036ec2c  lis 3, 151
  036ec30  lfs 1, 16(31)
  036ec34  lfs 2, 20(31)
  036ec38  addic 3, 3, -25376
  036ec3c  lfs 3, 128(3)
  036ec40  lfs 4, 132(3)
  036ec44  fsubs 1, 1, 3
  036ec48  fsubs 2, 2, 4
  036ec4c  bl 0x5e8338
  036ec50  nop
  036ec54  stfs 1, 472(1)
  036ec58  lfs 1, 32(25)
  036ec5c  lfs 2, 468(1)
  036ec60  fsubs 1, 1, 2
  036ec64  fcmpu 0, 1, 26
  036ec68  stfs 1, 32(25)
  036ec6c  bt 1, 0x36ec74
  036ec70  li 26, 1
  036ec74  lis 3, 55
  036ec78  vspltisw 2, -1
  036ec7c  li 5, 16
  036ec80  addi 3, 3, -6760
  036ec84  lis 4, 114
  036ec88  li 6, -3056
  036ec8c  vslw 2, 2, 2
  036ec90  cmpwi 26, 3
  036ec94  lvlx 3, 5, 3
  036ec98  cmpwi 1, 26, 0
  036ec9c  li 3, 254
  036eca0  vspltw 3, 3, 0
  036eca4  lvlx 4, 6, 4
  036eca8  cmpwi 6, 26, 6
  036ecac  lfs 1, -3056(4)
  036ecb0  vmaddfp 2, 4, 3, 2
  036ecb4  vctsxs 2, 2, 0
  036ecb8  vspltb 2, 2, 3
  036ecbc  stvebx 2, 3, 25
  036ecc0  bt 1, 0x36ecd4
  036ecc4  cmpwi 6, 26, 2
  036ecc8  bf 5, 0x36ef7c
  036eccc  bf 25, 0x36ece4
  036ecd0  b 0x36edcc
  036ecd4  cmpwi 1, 26, 5
  036ecd8  bt 25, 0x36ef7c
  036ecdc  bf 5, 0x36eecc
  036ece0  b 0x36edcc
  036ece4  lhz 6, 52(31)
  036ece8  lis 4, 55
  036ecec  li 3, 250
  036ecf0  rlwimi 6, 23, 0, 19, 19
  036ecf4  addi 4, 4, -6760
  036ecf8  lis 5, 114
  036ecfc  sth 6, 52(31)
  036ed00  stb 3, 103(25)
  036ed04  lfs 1, 20(4)
  036ed08  lis 3, 114
  036ed0c  lfs 2, -3048(5)
  036ed10  fmuls 1, 2, 1
  036ed14  addic 5, 1, 480
  036ed18  addic 6, 25, 136
  036ed1c  addic 7, 25, 140
  036ed20  stfs 1, 128(25)
  036ed24  lfs 1, 24(4)
  036ed28  fmuls 1, 2, 1
  036ed2c  stfs 1, 132(25)
  036ed30  lfs 1, 28(4)
  036ed34  lfs 2, -3052(3)
  036ed38  fmuls 1, 2, 1
  036ed3c  stfs 1, 136(25)
  036ed40  lfs 1, 32(4)
  036ed44  fmuls 1, 2, 1
  036ed48  stfs 1, 140(25)
  036ed4c  lfs 1, 16(27)
  036ed50  lfs 2, 24(27)
  036ed54  stfs 1, 48(1)
  036ed58  stfs 2, 56(1)
  036ed5c  lfs 1, 20(27)
  036ed60  lfs 2, 28(27)
  036ed64  stfs 1, 52(1)
  036ed68  stfs 2, 60(1)
  036ed6c  ld 3, 48(1)
  036ed70  ld 4, 56(1)
  036ed74  bl 0x107de8
  036ed78  nop
  036ed7c  addic 4, 25, 112
  036ed80  lfs 1, 480(1)
  036ed84  ori 3, 31, 0
  036ed88  li 6, 13
  036ed8c  li 7, 1
  036ed90  li 8, 0
  036ed94  bl 0x10ad80
  036ed98  nop
  036ed9c  lis 4, 16704
  036eda0  lis 5, 16840
  036eda4  li 6, 11
  036eda8  ori 3, 31, 0
  036edac  stw 4, 192(25)
  036edb0  stw 5, 196(25)
  036edb4  li 4, 0
  036edb8  stb 6, 32(31)
  036edbc  li 5, -1
  036edc0  bl 0xfd8d0
  036edc4  nop
  036edc8  b 0x36ef7c
  036edcc  lis 3, 55
  036edd0  li 4, 150
  036edd4  addi 3, 3, -6760
  036edd8  li 5, 0
  036eddc  stb 4, 103(25)
  036ede0  li 4, 8
  036ede4  lfs 2, 36(3)
  036ede8  ori 3, 31, 0
  036edec  fmuls 1, 1, 2
  036edf0  fctiwz 1, 1
  036edf4  stfd 1, 488(1)
  036edf8  lwz 6, 492(1)
  036edfc  extsw 6, 6
  036ee00  bl 0xfddc0
  036ee04  nop
  036ee08  li 3, 8
  036ee0c  lis 4, 114
  036ee10  stb 3, 32(31)
  036ee14  lwz 3, 32(27)
  036ee18  lfs 1, -3056(4)
  036ee1c  lhz 3, 166(3)
  036ee20  cmpwi 3, 305
  036ee24  bt 2, 0x36ee30
  036ee28  cmpwi 3, 176
  036ee2c  bf 2, 0x36ee54
  036ee30  lis 3, 55
  036ee34  addi 3, 3, -6760
  036ee38  lfs 2, 40(3)
  036ee3c  lfs 3, 8(3)
  036ee40  fmuls 1, 1, 2
  036ee44  lfs 2, 44(3)
  036ee48  fdivs 1, 3, 1
  036ee4c  fmuls 1, 1, 2
  036ee50  b 0x36ee6c
  036ee54  lis 3, 55
  036ee58  addi 3, 3, -6760
  036ee5c  lfs 2, 40(3)
  036ee60  lfs 3, 8(3)
  036ee64  fmuls 1, 1, 2
  036ee68  fdivs 1, 3, 1
  036ee6c  stfs 1, 244(25)
  036ee70  addic 5, 1, 472
  036ee74  lfs 1, 16(27)
  036ee78  addic 6, 25, 244
  036ee7c  lfs 2, 24(27)
  036ee80  addic 7, 1, 476
  036ee84  stfs 1, 48(1)
  036ee88  stfs 2, 56(1)
  036ee8c  lfs 1, 20(27)
  036ee90  lfs 2, 28(27)
  036ee94  stfs 1, 52(1)
  036ee98  stfs 2, 60(1)
  036ee9c  ld 3, 48(1)
  036eea0  ld 4, 56(1)
  036eea4  bl 0x107de8
  036eea8  nop
  036eeac  lis 3, 55
  036eeb0  lfs 2, 472(1)
  036eeb4  addi 3, 3, -6760
  036eeb8  lfs 1, 48(3)
  036eebc  bl 0x502578
  036eec0  nop
  036eec4  stfs 1, 72(31)
  036eec8  b 0x36ef7c
  036eecc  lis 3, 55
  036eed0  li 4, 250
  036eed4  addi 26, 3, -6760
  036eed8  ori 3, 31, 0
  036eedc  li 5, 0
  036eee0  stb 4, 103(25)
  036eee4  li 4, 12
  036eee8  lfs 2, 36(26)
  036eeec  fmuls 1, 1, 2
  036eef0  fctiwz 1, 1
  036eef4  stfd 1, 488(1)
  036eef8  lwz 6, 492(1)
  036eefc  extsw 6, 6
  036ef00  bl 0xfddc0
  036ef04  nop
  036ef08  li 3, 10
  036ef0c  lis 4, 114
  036ef10  stb 3, 32(31)
  036ef14  lfs 1, 40(26)
  036ef18  lfs 2, -3056(4)
  036ef1c  lfs 3, 8(26)
  036ef20  fmuls 1, 2, 1
  036ef24  addic 5, 1, 472
  036ef28  addic 6, 25, 244
  036ef2c  addic 7, 1, 476
  036ef30  fdivs 1, 3, 1
  036ef34  stfs 1, 244(25)
  036ef38  lfs 1, 16(27)
  036ef3c  lfs 2, 24(27)
  036ef40  stfs 1, 48(1)
  036ef44  stfs 2, 56(1)
  036ef48  lfs 1, 20(27)
  036ef4c  lfs 2, 28(27)
  036ef50  stfs 1, 52(1)
  036ef54  stfs 2, 60(1)
  036ef58  ld 3, 48(1)
  036ef5c  ld 4, 56(1)
  036ef60  bl 0x107de8
  036ef64  nop
  036ef68  lfs 1, 48(26)
  036ef6c  lfs 2, 472(1)
  036ef70  bl 0x502578
  036ef74  nop
  036ef78  stfs 1, 72(31)
  036ef7c  addic 4, 25, 96
  036ef80  ori 3, 31, 0
  036ef84  bl 0x10c808
  036ef88  nop
  036ef8c  li 3, 255
  036ef90  stb 3, 164(31)
  036ef94  lwz 3, 56(25)
  036ef98  cmpwi 3, 0
  036ef9c  bt 2, 0x36efdc
  036efa0  lis 3, 55
  036efa4  li 4, 16
  036efa8  vspltisw 2, -1
  036efac  addi 3, 3, -6760
  036efb0  lis 5, 114
  036efb4  li 6, -3056
  036efb8  vslw 2, 2, 2
  036efbc  lvlx 3, 4, 3
  036efc0  li 3, 254
  036efc4  vspltw 3, 3, 0
  036efc8  lvlx 4, 6, 5
  036efcc  vmaddfp 2, 4, 3, 2
  036efd0  vctsxs 2, 2, 0
  036efd4  vspltb 2, 2, 3
  036efd8  stvebx 2, 3, 25
  036efdc  addic 3, 25, 254
  036efe0  stw 23, 56(25)
  036efe4  bl 0x5000b4
  036efe8  nop
  036efec  addic 3, 25, 264
  036eff0  bl 0x4fff60
  036eff4  nop
  036eff8  lbz 3, 32(31)
  036effc  cmpwi 3, 4
  036f000  bt 1, 0x36f038
  036f004  cmpwi 3, 1
  036f008  bt 1, 0x36f020
  036f00c  cmpwi 3, -1
  036f010  bf 1, 0x370a44
  036f014  cmpwi 3, 0
  036f018  bf 1, 0x36f068
  036f01c  b 0x36f1b0
  036f020  cmpwi 3, 2
  036f024  bf 1, 0x36f598
  036f028  cmpwi 3, 3
  036f02c  cmpwi 1, 30, 0
  036f030  bf 1, 0x36f750
  036f034  b 0x36fc9c
  036f038  cmpwi 3, 7
  036f03c  bt 1, 0x36f054
  036f040  cmpwi 3, 5
  036f044  bf 1, 0x36fd54
  036f048  cmpwi 3, 6
  036f04c  bf 1, 0x37017c
  036f050  b 0x37047c
  036f054  cmpwi 3, 10
  036f058  bf 1, 0x370708
  036f05c  cmpwi 3, 11
  036f060  bf 1, 0x370890
  036f064  b 0x370a44
  036f068  lis 4, 16384
  036f06c  lhz 6, 52(31)
  036f070  li 3, 1
  036f074  li 5, 2
  036f078  ori 6, 6, 4096
  036f07c  stw 4, 32(25)
  036f080  li 7, 10
  036f084  stw 23, 208(25)
  036f088  li 4, 8
  036f08c  sth 6, 52(31)
  036f090  stb 3, 40(25)
  036f094  stb 3, 46(25)
  036f098  stb 3, 41(25)
  036f09c  sth 23, 240(25)
  036f0a0  sth 5, 36(25)
  036f0a4  stb 23, 254(25)
  036f0a8  stb 23, 255(25)
  036f0ac  lfs 1, 24(31)
  036f0b0  stb 4, 88(25)
  036f0b4  stfs 1, 212(25)
  036f0b8  stb 7, 90(25)
  036f0bc  bl 0x5c8318
  036f0c0  nop
  036f0c4  clrlwi 3, 3, 31
  036f0c8  cmpwi 3, 0
  036f0cc  bt 2, 0x36f0e4
  036f0d0  lis 3, 0
  036f0d4  lhz 4, 52(31)
  036f0d8  ori 3, 3, 32768
  036f0dc  or 3, 4, 3
  036f0e0  sth 3, 52(31)
  036f0e4  lbz 3, 252(25)
  036f0e8  cmpwi 3, 0
  036f0ec  bt 2, 0x36f138
  036f0f0  lis 3, 55
  036f0f4  lis 4, 114
  036f0f8  addi 3, 3, -6760
  036f0fc  li 5, 0
  036f100  lfs 1, 52(3)
  036f104  lfs 2, -3056(4)
  036f108  ori 3, 31, 0
  036f10c  li 4, 3
  036f110  fmuls 1, 2, 1
  036f114  fctiwz 1, 1
  036f118  stfd 1, 488(1)
  036f11c  lwz 6, 492(1)
  036f120  extsw 6, 6
  036f124  bl 0xfddc0
  036f128  nop
  036f12c  li 3, 5
  036f130  stb 3, 32(31)
  036f134  b 0x370a44
  036f138  bl 0x5c8318
  036f13c  nop
  036f140  lis 4, 55
  036f144  lis 5, 114
  036f148  addi 4, 4, -6760
  036f14c  clrlwi 3, 3, 31
  036f150  lfs 1, 52(4)
  036f154  lfs 2, -3056(5)
  036f158  li 4, 0
  036f15c  li 5, 0
  036f160  fmuls 1, 2, 1
  036f164  subc 3, 4, 3
  036f168  cntlzw 3, 3
  036f16c  sldi 3, 3, 58
  036f170  sradi 4, 3, 63
  036f174  li 3, 1
  036f178  fctiwz 1, 1
  036f17c  subc 6, 3, 5
  036f180  ori 3, 31, 0
  036f184  and 4, 4, 6
  036f188  addc 4, 5, 4
  036f18c  li 5, 0
  036f190  stfd 1, 488(1)
  036f194  lwz 6, 492(1)
  036f198  extsw 6, 6
  036f19c  bl 0xfddc0
  036f1a0  nop
  036f1a4  li 3, 1
  036f1a8  stb 3, 32(31)
  036f1ac  b 0x370a44
  036f1b0  lbz 3, 112(31)
  036f1b4  rlwinm 3, 3, 0, 30, 30
  036f1b8  cmpwi 3, 0
  036f1bc  bt 2, 0x36f22c
  036f1c0  bl 0x5c8318
  036f1c4  nop
  036f1c8  lis 4, 55
  036f1cc  lis 5, 114
  036f1d0  addi 4, 4, -6760
  036f1d4  clrlwi 3, 3, 31
  036f1d8  lfs 1, 52(4)
  036f1dc  lfs 2, -3056(5)
  036f1e0  li 4, 0
  036f1e4  li 5, 1
  036f1e8  fmuls 1, 2, 1
  036f1ec  subc 3, 4, 3
  036f1f0  li 4, 0
  036f1f4  cntlzw 3, 3
  036f1f8  subc 5, 5, 4
  036f1fc  sldi 3, 3, 58
  036f200  sradi 6, 3, 63
  036f204  ori 3, 31, 0
  036f208  and 5, 6, 5
  036f20c  fctiwz 1, 1
  036f210  addc 4, 4, 5
  036f214  li 5, 0
  036f218  stfd 1, 488(1)
  036f21c  lwz 6, 492(1)
  036f220  extsw 6, 6
  036f224  bl 0xfddc0
  036f228  nop
  036f22c  lfs 1, 16(31)
  036f230  lfs 2, 20(31)
  036f234  fsubs 1, 25, 1
  036f238  fsubs 2, 24, 2
  036f23c  bl 0x5e8338
  036f240  nop
  036f244  lis 3, 55
  036f248  lis 4, 114
  036f24c  addi 3, 3, -6760
  036f250  lis 6, 114
  036f254  addic 5, 25, 236
  036f258  lfs 2, 56(3)
  036f25c  lfs 3, 60(3)
  036f260  lfs 4, 64(3)
  036f264  lfs 5, -3060(4)
  036f268  ori 3, 31, 0
  036f26c  lfs 6, -3052(6)
  036f270  fmuls 2, 5, 2
  036f274  fmuls 3, 5, 3
  036f278  fmuls 4, 6, 4
  036f27c  bl 0xff2e8
  036f280  nop
  036f284  lfs 1, 24(31)
  036f288  cmpwi 30, 0
  036f28c  lfs 2, 392(1)
  036f290  lfs 3, 16(31)
  036f294  lfs 4, 20(31)
  036f298  lfs 5, 28(31)
  036f29c  bt 2, 0x36f2e8
  036f2a0  lis 3, 55
  036f2a4  lis 4, 114
  036f2a8  addi 3, 3, -6760
  036f2ac  li 5, 0
  036f2b0  lfs 1, 68(3)
  036f2b4  lfs 2, -3056(4)
  036f2b8  ori 3, 31, 0
  036f2bc  li 4, 11
  036f2c0  fmuls 1, 2, 1
  036f2c4  fctiwz 1, 1
  036f2c8  stfd 1, 488(1)
  036f2cc  lwz 6, 492(1)
  036f2d0  extsw 6, 6
  036f2d4  bl 0xfddc0
  036f2d8  nop
  036f2dc  li 3, 3
  036f2e0  stb 3, 32(31)
  036f2e4  b 0x370a44
  036f2e8  lis 3, 55
  036f2ec  addi 3, 3, -6760
  036f2f0  lfs 6, 72(3)
  036f2f4  fcmpu 1, 31, 6
  036f2f8  bf 5, 0x36f3e0
  036f2fc  lis 3, 55
  036f300  addi 3, 3, -6760
  036f304  lfs 6, 76(3)
  036f308  fcmpu 0, 27, 6
  036f30c  cror 2, 0, 2
  036f310  bt 2, 0x36f3e0
  036f314  lis 3, 55
  036f318  addi 3, 3, -6760
  036f31c  lfs 6, 80(3)
  036f320  fcmpu 0, 31, 6
  036f324  cror 2, 0, 2
  036f328  bt 2, 0x36f374
  036f32c  lis 3, 55
  036f330  lis 4, 114
  036f334  addi 3, 3, -6760
  036f338  li 5, 0
  036f33c  lfs 1, 68(3)
  036f340  lfs 2, -3056(4)
  036f344  ori 3, 31, 0
  036f348  fmuls 1, 2, 1
  036f34c  li 4, 10
  036f350  fctiwz 1, 1
  036f354  stfd 1, 488(1)
  036f358  lwz 6, 492(1)
  036f35c  extsw 6, 6
  036f360  bl 0xfddc0
  036f364  nop
  036f368  li 3, 2
  036f36c  stb 3, 32(31)
  036f370  b 0x370a44
  036f374  lis 3, 55
  036f378  addi 3, 3, -6760
  036f37c  lfs 6, 84(3)
  036f380  fcmpu 0, 31, 6
  036f384  cror 2, 1, 2
  036f388  bt 2, 0x36f3e0
  036f38c  lwz 3, 264(25)
  036f390  cmpwi 3, 0
  036f394  bf 2, 0x36f3e0
  036f398  lis 3, 55
  036f39c  lis 4, 114
  036f3a0  addi 3, 3, -6760
  036f3a4  li 5, 0
  036f3a8  lfs 1, 68(3)
  036f3ac  lfs 2, -3056(4)
  036f3b0  ori 3, 31, 0
  036f3b4  li 4, 11
  036f3b8  fmuls 1, 2, 1
  036f3bc  fctiwz 1, 1
  036f3c0  stfd 1, 488(1)
  036f3c4  lwz 6, 492(1)
  036f3c8  extsw 6, 6
  036f3cc  bl 0xfddc0
  036f3d0  nop
  036f3d4  li 3, 3
  036f3d8  stb 3, 32(31)
  036f3dc  b 0x370a44
  036f3e0  lis 3, 55
  036f3e4  addi 3, 3, -6760
  036f3e8  lfs 6, 80(3)
  036f3ec  fcmpu 0, 31, 6
  036f3f0  cror 2, 1, 2
  036f3f4  bt 2, 0x36f4dc
  036f3f8  bt 4, 0x36f4dc
  036f3fc  fsubs 2, 1, 2
  036f400  lis 3, 55
  036f404  addi 3, 3, -6760
  036f408  lfs 6, 84(3)
  036f40c  fabs 2, 2
  036f410  fcmpu 0, 2, 6
  036f414  cror 2, 1, 2
  036f418  bt 2, 0x36f4dc
  036f41c  lhz 3, 242(25)
  036f420  cmpwi 3, 0
  036f424  bf 2, 0x370a44
  036f428  lis 3, 55
  036f42c  li 5, 0
  036f430  addi 3, 3, -6760
  036f434  addic 4, 1, 128
  036f438  ori 6, 31, 0
  036f43c  li 7, 0
  036f440  lfs 2, 44(3)
  036f444  stfs 3, 112(1)
  036f448  addic 3, 1, 112
  036f44c  fadds 1, 1, 2
  036f450  stfs 4, 116(1)
  036f454  fadds 2, 23, 2
  036f458  stfs 5, 124(1)
  036f45c  stfs 25, 128(1)
  036f460  stfs 24, 132(1)
  036f464  stfs 22, 140(1)
  036f468  stfs 1, 120(1)
  036f46c  stfs 2, 136(1)
  036f470  bl 0x57820
  036f474  nop
  036f478  cmpwi 3, 0
  036f47c  bt 2, 0x370a44
  036f480  lis 3, 161
  036f484  addic 3, 3, 2368
  036f488  lwz 3, 24(3)
  036f48c  cmpw 3, 29
  036f490  bf 2, 0x370a44
  036f494  lis 3, 55
  036f498  li 4, 5
  036f49c  addi 3, 3, -6760
  036f4a0  lis 5, 114
  036f4a4  stb 4, 32(31)
  036f4a8  li 4, 3
  036f4ac  lfs 1, 88(3)
  036f4b0  lfs 2, -3056(5)
  036f4b4  ori 3, 31, 0
  036f4b8  fmuls 1, 2, 1
  036f4bc  li 5, 0
  036f4c0  fctiwz 1, 1
  036f4c4  stfd 1, 488(1)
  036f4c8  lwz 6, 492(1)
  036f4cc  extsw 6, 6
  036f4d0  bl 0xfddc0
  036f4d4  nop
  036f4d8  b 0x370a44
  036f4dc  bt 5, 0x370a44
  036f4e0  lhz 3, 242(25)
  036f4e4  extsh 3, 3
  036f4e8  cmpwi 3, 0
  036f4ec  bt 1, 0x36f538
  036f4f0  lis 3, 55
  036f4f4  li 4, 7
  036f4f8  addi 3, 3, -6760
  036f4fc  lis 5, 114
  036f500  stb 4, 32(31)
  036f504  li 4, 7
  036f508  lfs 1, 88(3)
  036f50c  lfs 2, -3056(5)
  036f510  ori 3, 31, 0
  036f514  li 5, 0
  036f518  fmuls 1, 2, 1
  036f51c  fctiwz 1, 1
  036f520  stfd 1, 488(1)
  036f524  lwz 6, 492(1)
  036f528  extsw 6, 6
  036f52c  bl 0xfddc0
  036f530  nop
  036f534  b 0x370a44
  036f538  lis 4, 55
  036f53c  lis 5, 114
  036f540  vspltisw 3, -1
  036f544  addi 4, 4, -6760
  036f548  li 6, 92
  036f54c  li 7, -3056
  036f550  vslw 3, 3, 3
  036f554  lfs 1, 92(4)
  036f558  lfs 2, -3056(5)
  036f55c  lvlx 2, 6, 4
  036f560  fmuls 1, 2, 1
  036f564  vspltw 2, 2, 0
  036f568  lvlx 4, 7, 5
  036f56c  vmaddfp 2, 4, 2, 3
  036f570  fctiwz 1, 1
  036f574  vctsxs 2, 2, 0
  036f578  stfd 1, 488(1)
  036f57c  lwz 4, 492(1)
  036f580  cmpw 3, 4
  036f584  bf 1, 0x370a44
  036f588  vsplth 2, 2, 1
  036f58c  li 3, 242
  036f590  stvehx 2, 3, 25
  036f594  b 0x370a44
  036f598  lis 3, 55
  036f59c  addi 3, 3, -6760
  036f5a0  lfs 1, 32(3)
  036f5a4  fcmpu 0, 31, 1
  036f5a8  bt 0, 0x36f5c4
  036f5ac  lis 3, 55
  036f5b0  addi 3, 3, -6760
  036f5b4  lfs 31, 76(3)
  036f5b8  fcmpu 0, 27, 31
  036f5bc  cror 6, 1, 2
  036f5c0  bt 6, 0x36f60c
  036f5c4  lis 3, 55
  036f5c8  lis 4, 114
  036f5cc  addi 3, 3, -6760
  036f5d0  li 5, 0
  036f5d4  lfs 1, 52(3)
  036f5d8  lfs 2, -3056(4)
  036f5dc  ori 3, 31, 0
  036f5e0  fmuls 1, 2, 1
  036f5e4  li 4, 0
  036f5e8  fctiwz 1, 1
  036f5ec  stfd 1, 488(1)
  036f5f0  lwz 6, 492(1)
  036f5f4  extsw 6, 6
  036f5f8  bl 0xfddc0
  036f5fc  nop
  036f600  li 3, 1
  036f604  stb 3, 32(31)
  036f608  b 0x370a44
  036f60c  lfs 1, 16(31)
  036f610  lfs 2, 20(31)
  036f614  fsubs 1, 29, 1
  036f618  fsubs 2, 28, 2
  036f61c  bl 0x5e8338
  036f620  nop
  036f624  lis 3, 55
  036f628  lis 4, 114
  036f62c  addi 30, 3, -6760
  036f630  lis 3, 114
  036f634  addic 5, 25, 236
  036f638  lfs 2, 96(30)
  036f63c  lfs 3, 60(30)
  036f640  lfs 4, 100(30)
  036f644  lfs 5, -3060(3)
  036f648  lfs 6, -3052(4)
  036f64c  fmuls 2, 5, 2
  036f650  ori 3, 31, 0
  036f654  fmuls 3, 5, 3
  036f658  fmuls 4, 6, 4
  036f65c  bl 0xff2e8
  036f660  nop
  036f664  lfs 2, 104(30)
  036f668  lfs 29, 236(25)
  036f66c  lfs 1, 108(30)
  036f670  fmuls 29, 29, 2
  036f674  fcmpu 0, 29, 1
  036f678  cror 6, 0, 2
  036f67c  bt 6, 0x36f688
  036f680  fmr 29, 1
  036f684  b 0x36f6a4
  036f688  lis 3, 55
  036f68c  addi 3, 3, -6760
  036f690  lfs 1, 112(3)
  036f694  fcmpu 0, 29, 1
  036f698  cror 6, 1, 2
  036f69c  bt 6, 0x36f6a4
  036f6a0  fmr 29, 1
  036f6a4  lis 3, 55
  036f6a8  addi 30, 3, -6760
  036f6ac  lfs 1, 116(30)
  036f6b0  fmuls 1, 29, 1
  036f6b4  stfs 1, 376(25)
  036f6b8  lfs 1, 120(30)
  036f6bc  fmuls 1, 29, 1
  036f6c0  stfs 1, 504(25)
  036f6c4  lfs 1, 72(31)
  036f6c8  bl 0x5e8078
  036f6cc  nop
  036f6d0  lis 28, 114
  036f6d4  lfs 29, 72(30)
  036f6d8  lfs 2, -3052(28)
  036f6dc  lfs 3, 72(31)
  036f6e0  fmuls 2, 2, 29
  036f6e4  fmuls 2, 2, 1
  036f6e8  fmr 1, 3
  036f6ec  stfs 2, 144(1)
  036f6f0  bl 0x5e8128
  036f6f4  nop
  036f6f8  lfs 2, -3052(28)
  036f6fc  lfs 3, 144(1)
  036f700  addic 4, 31, 16
  036f704  fmuls 2, 2, 29
  036f708  lfs 4, 16(31)
  036f70c  lfs 5, 20(31)
  036f710  addic 5, 1, 144
  036f714  fadds 3, 3, 4
  036f718  ori 3, 31, 0
  036f71c  lfs 4, 24(31)
  036f720  li 10, 0
  036f724  stfs 4, 152(1)
  036f728  fmadds 1, 2, 1, 5
  036f72c  fmr 2, 31
  036f730  stfs 3, 144(1)
  036f734  stfs 1, 148(1)
  036f738  lfs 1, 44(30)
  036f73c  lfs 4, 124(30)
  036f740  fmr 3, 1
  036f744  bl 0xffcd0
  036f748  nop
  036f74c  b 0x370a44
  036f750  lis 3, 55
  036f754  li 4, 128
  036f758  vspltisw 2, -1
  036f75c  addi 3, 3, -6760
  036f760  lis 5, 114
  036f764  li 6, -3056
  036f768  vslw 2, 2, 2
  036f76c  lvlx 3, 4, 3
  036f770  li 3, 264
  036f774  vspltw 3, 3, 0
  036f778  lvlx 4, 6, 5
  036f77c  lfs 1, -3056(5)
  036f780  vmaddfp 2, 4, 3, 2
  036f784  vctsxs 2, 2, 0
  036f788  vspltw 2, 2, 0
  036f78c  stvewx 2, 3, 25
  036f790  bt 6, 0x36fa6c
  036f794  lfs 1, 16(31)
  036f798  lfs 2, 20(31)
  036f79c  fsubs 1, 25, 1
  036f7a0  fsubs 2, 24, 2
  036f7a4  bl 0x5e8338
  036f7a8  nop
  036f7ac  lis 3, 55
  036f7b0  lis 27, 114
  036f7b4  addi 30, 3, -6760
  036f7b8  lis 3, 114
  036f7bc  addic 5, 25, 236
  036f7c0  lfs 2, 56(30)
  036f7c4  lfs 3, 60(30)
  036f7c8  lfs 4, 132(30)
  036f7cc  lfs 5, -3060(3)
  036f7d0  lfs 6, -3052(27)
  036f7d4  ori 3, 31, 0
  036f7d8  fmuls 2, 5, 2
  036f7dc  fmuls 3, 5, 3
  036f7e0  fmuls 4, 6, 4
  036f7e4  bl 0xff2e8
  036f7e8  nop
  036f7ec  lfs 1, 72(31)
  036f7f0  bl 0x5e8078
  036f7f4  nop
  036f7f8  lfs 29, 136(30)
  036f7fc  lfs 3, -3052(27)
  036f800  lfs 2, 72(31)
  036f804  fmuls 3, 3, 29
  036f808  fmuls 3, 3, 1
  036f80c  fmr 1, 2
  036f810  stfs 3, 160(1)
  036f814  bl 0x5e8128
  036f818  nop
  036f81c  lfs 2, -3052(27)
  036f820  ori 3, 31, 0
  036f824  lfs 3, 160(1)
  036f828  addic 4, 1, 176
  036f82c  fmuls 2, 2, 29
  036f830  lfs 4, 16(31)
  036f834  lfs 5, 20(31)
  036f838  addic 5, 1, 160
  036f83c  fadds 3, 3, 4
  036f840  lfs 6, 24(31)
  036f844  stfs 4, 176(1)
  036f848  li 10, 0
  036f84c  stfs 6, 168(1)
  036f850  fmadds 1, 2, 1, 5
  036f854  lfs 2, 28(31)
  036f858  stfs 5, 180(1)
  036f85c  stfs 6, 184(1)
  036f860  stfs 2, 188(1)
  036f864  stfs 3, 160(1)
  036f868  stfs 1, 164(1)
  036f86c  lfs 29, 76(30)
  036f870  lfs 1, 44(30)
  036f874  lfs 4, 124(30)
  036f878  fmr 2, 29
  036f87c  fmr 3, 1
  036f880  bl 0xffcd0
  036f884  nop
  036f888  cmpwi 3, 0
  036f88c  bt 2, 0x36f8d8
  036f890  addic 3, 1, 176
  036f894  lwz 5, 0(28)
  036f898  addic 4, 28, 16
  036f89c  extsw 5, 5
  036f8a0  bl 0x104e44
  036f8a4  nop
  036f8a8  cmpwi 3, 0
  036f8ac  bt 2, 0x36f8d8
  036f8b0  lfs 1, 176(1)
  036f8b4  lfs 2, 180(1)
  036f8b8  li 30, 11
  036f8bc  stfs 1, 16(31)
  036f8c0  lfs 1, 184(1)
  036f8c4  stfs 2, 20(31)
  036f8c8  lfs 2, 188(1)
  036f8cc  stfs 1, 24(31)
  036f8d0  stfs 2, 28(31)
  036f8d4  b 0x36f8dc
  036f8d8  ori 30, 23, 0
  036f8dc  addic 3, 25, 255
  036f8e0  bl 0x5000b4
  036f8e4  nop
  036f8e8  cmpwi 3, 0
  036f8ec  bt 2, 0x36f968
  036f8f0  lbz 3, 83(31)
  036f8f4  cmpw 30, 3
  036f8f8  bt 2, 0x36f968
  036f8fc  lis 3, 55
  036f900  lis 28, 114
  036f904  addi 27, 3, -6760
  036f908  ori 3, 31, 0
  036f90c  ori 4, 30, 0
  036f910  li 5, 0
  036f914  lfs 1, 52(27)
  036f918  lfs 2, -3056(28)
  036f91c  fmuls 1, 2, 1
  036f920  fctiwz 1, 1
  036f924  stfd 1, 488(1)
  036f928  lwz 6, 492(1)
  036f92c  extsw 6, 6
  036f930  bl 0xfddc0
  036f934  nop
  036f938  li 3, 140
  036f93c  vspltisw 2, -1
  036f940  li 4, -3056
  036f944  lvlx 3, 3, 27
  036f948  vslw 2, 2, 2
  036f94c  vspltw 3, 3, 0
  036f950  li 3, 255
  036f954  lvlx 4, 4, 28
  036f958  vmaddfp 2, 4, 3, 2
  036f95c  vctsxs 2, 2, 0
  036f960  vspltb 2, 2, 3
  036f964  stvebx 2, 3, 25
  036f968  lhz 3, 242(25)
  036f96c  cmpwi 3, 0
  036f970  bf 2, 0x370a44
  036f974  fcmpu 0, 31, 29
  036f978  cror 6, 1, 2
  036f97c  bt 6, 0x36fa08
  036f980  lfs 1, 16(31)
  036f984  lfs 2, 20(31)
  036f988  fsubs 1, 25, 1
  036f98c  fsubs 2, 24, 2
  036f990  bl 0x5e8338
  036f994  nop
  036f998  lfs 2, 72(31)
  036f99c  bl 0x5026a0
  036f9a0  nop
  036f9a4  lis 3, 55
  036f9a8  addi 3, 3, -6760
  036f9ac  lfs 2, 144(3)
  036f9b0  fcmpu 0, 1, 2
  036f9b4  cror 6, 1, 2
  036f9b8  bt 6, 0x36fa08
  036f9bc  lis 3, 55
  036f9c0  li 4, 7
  036f9c4  addi 3, 3, -6760
  036f9c8  lis 5, 114
  036f9cc  stb 4, 32(31)
  036f9d0  li 4, 7
  036f9d4  lfs 1, 88(3)
  036f9d8  lfs 2, -3056(5)
  036f9dc  ori 3, 31, 0
  036f9e0  fmuls 1, 2, 1
  036f9e4  li 5, 0
  036f9e8  fctiwz 1, 1
  036f9ec  stfd 1, 488(1)
  036f9f0  lwz 6, 492(1)
  036f9f4  extsw 6, 6
  036f9f8  bl 0xfddc0
  036f9fc  nop
  036fa00  stb 23, 255(25)
  036fa04  b 0x370a44
  036fa08  lis 3, 55
  036fa0c  addi 3, 3, -6760
  036fa10  lfs 1, 80(3)
  036fa14  fcmpu 0, 31, 1
  036fa18  cror 6, 1, 2
  036fa1c  bt 6, 0x370a44
  036fa20  lis 3, 55
  036fa24  li 4, 5
  036fa28  addi 3, 3, -6760
  036fa2c  lis 5, 114
  036fa30  stb 4, 32(31)
  036fa34  li 4, 3
  036fa38  lfs 1, 88(3)
  036fa3c  lfs 2, -3056(5)
  036fa40  ori 3, 31, 0
  036fa44  li 5, 0
  036fa48  fmuls 1, 2, 1
  036fa4c  fctiwz 1, 1
  036fa50  stfd 1, 488(1)
  036fa54  lwz 6, 492(1)
  036fa58  extsw 6, 6
  036fa5c  bl 0xfddc0
  036fa60  nop
  036fa64  stb 23, 255(25)
  036fa68  b 0x370a44
  036fa6c  lis 3, 55
  036fa70  addi 3, 3, -6760
  036fa74  lfs 26, 76(3)
  036fa78  fcmpu 0, 31, 26
  036fa7c  cror 6, 1, 2
  036fa80  bt 6, 0x36fb14
  036fa84  lfs 1, 16(31)
  036fa88  lfs 2, 20(31)
  036fa8c  fsubs 1, 25, 1
  036fa90  fsubs 2, 24, 2
  036fa94  bl 0x5e8338
  036fa98  nop
  036fa9c  lfs 2, 72(31)
  036faa0  bl 0x5026a0
  036faa4  nop
  036faa8  fmr 2, 1
  036faac  lis 3, 55
  036fab0  lis 4, 114
  036fab4  addi 3, 3, -6760
  036fab8  lfs 3, 144(3)
  036fabc  lfs 1, -3056(4)
  036fac0  fcmpu 0, 2, 3
  036fac4  cror 6, 1, 2
  036fac8  bt 6, 0x36fb14
  036facc  lis 3, 55
  036fad0  li 4, 7
  036fad4  addi 3, 3, -6760
  036fad8  lis 5, 114
  036fadc  stb 4, 32(31)
  036fae0  li 4, 7
  036fae4  lfs 1, 88(3)
  036fae8  lfs 2, -3056(5)
  036faec  ori 3, 31, 0
  036faf0  fmuls 1, 2, 1
  036faf4  li 5, 0
  036faf8  fctiwz 1, 1
  036fafc  stfd 1, 488(1)
  036fb00  lwz 6, 492(1)
  036fb04  extsw 6, 6
  036fb08  bl 0xfddc0
  036fb0c  nop
  036fb10  b 0x370a44
  036fb14  lis 3, 55
  036fb18  fcmpu 1, 27, 26
  036fb1c  addi 3, 3, -6760
  036fb20  lfs 2, 148(3)
  036fb24  fcmpu 0, 31, 2
  036fb28  cror 2, 0, 2
  036fb2c  bt 2, 0x36fb78
  036fb30  lis 3, 55
  036fb34  li 4, 5
  036fb38  addi 3, 3, -6760
  036fb3c  lis 5, 114
  036fb40  stb 4, 32(31)
  036fb44  li 4, 3
  036fb48  lfs 1, 88(3)
  036fb4c  lfs 2, -3056(5)
  036fb50  ori 3, 31, 0
  036fb54  li 5, 0
  036fb58  fmuls 1, 2, 1
  036fb5c  fctiwz 1, 1
  036fb60  stfd 1, 488(1)
  036fb64  lwz 6, 492(1)
  036fb68  extsw 6, 6
  036fb6c  bl 0xfddc0
  036fb70  nop
  036fb74  b 0x370a44
  036fb78  bf 4, 0x36fbbc
  036fb7c  lis 3, 55
  036fb80  addi 3, 3, -6760
  036fb84  li 4, 0
  036fb88  li 5, 0
  036fb8c  lfs 2, 52(3)
  036fb90  ori 3, 31, 0
  036fb94  fmuls 1, 1, 2
  036fb98  fctiwz 1, 1
  036fb9c  stfd 1, 488(1)
  036fba0  lwz 6, 492(1)
  036fba4  extsw 6, 6
  036fba8  bl 0xfddc0
  036fbac  nop
  036fbb0  li 3, 1
  036fbb4  stb 3, 32(31)
  036fbb8  b 0x370a44
  036fbbc  lfs 1, 16(31)
  036fbc0  lfs 2, 20(31)
  036fbc4  fsubs 1, 29, 1
  036fbc8  fsubs 2, 28, 2
  036fbcc  bl 0x5e8338
  036fbd0  nop
  036fbd4  lis 3, 55
  036fbd8  lis 28, 114
  036fbdc  addi 30, 3, -6760
  036fbe0  lis 3, 114
  036fbe4  addic 5, 25, 236
  036fbe8  lfs 2, 152(30)
  036fbec  lfs 3, 60(30)
  036fbf0  lfs 4, 100(30)
  036fbf4  lfs 5, -3060(3)
  036fbf8  lfs 6, -3052(28)
  036fbfc  ori 3, 31, 0
  036fc00  fmuls 2, 5, 2
  036fc04  fmuls 3, 5, 3
  036fc08  fmuls 4, 6, 4
  036fc0c  bl 0xff2e8
  036fc10  nop
  036fc14  lfs 1, 72(31)
  036fc18  bl 0x5e8078
  036fc1c  nop
  036fc20  lfs 31, 136(30)
  036fc24  lfs 3, -3052(28)
  036fc28  lfs 2, 72(31)
  036fc2c  fmuls 3, 3, 31
  036fc30  fmuls 3, 3, 1
  036fc34  fmr 1, 2
  036fc38  stfs 3, 192(1)
  036fc3c  bl 0x5e8128
  036fc40  nop
  036fc44  lfs 2, -3052(28)
  036fc48  addic 4, 31, 16
  036fc4c  lfs 3, 192(1)
  036fc50  addic 5, 1, 192
  036fc54  fmuls 2, 2, 31
  036fc58  lfs 4, 16(31)
  036fc5c  lfs 5, 20(31)
  036fc60  li 10, 0
  036fc64  fadds 3, 3, 4
  036fc68  ori 3, 31, 0
  036fc6c  lfs 4, 24(31)
  036fc70  stfs 4, 200(1)
  036fc74  fmadds 1, 2, 1, 5
  036fc78  fmr 2, 26
  036fc7c  stfs 3, 192(1)
  036fc80  stfs 1, 196(1)
  036fc84  lfs 1, 44(30)
  036fc88  lfs 4, 124(30)
  036fc8c  fmr 3, 1
  036fc90  bl 0xffcd0
  036fc94  nop
  036fc98  b 0x370a44
  036fc9c  lbz 3, 83(31)
  036fca0  cmpwi 3, 2
  036fca4  bt 2, 0x36fcfc
  036fca8  lis 3, 55
  036fcac  addi 30, 3, -6760
  036fcb0  lis 3, 114
  036fcb4  li 4, 2
  036fcb8  li 5, 0
  036fcbc  lfs 1, 88(30)
  036fcc0  lfs 2, -3056(3)
  036fcc4  ori 3, 31, 0
  036fcc8  fmuls 1, 2, 1
  036fccc  fctiwz 1, 1
  036fcd0  stfd 1, 488(1)
  036fcd4  lwz 6, 492(1)
  036fcd8  extsw 6, 6
  036fcdc  bl 0xfddc0
  036fce0  nop
  036fce4  lis 3, 114
  036fce8  lfs 1, 156(30)
  036fcec  lfs 2, -3052(3)
  036fcf0  fmuls 1, 2, 1
  036fcf4  stfs 1, 208(25)
  036fcf8  b 0x370a44
  036fcfc  lbz 3, 112(31)
  036fd00  rlwinm 3, 3, 0, 30, 30
  036fd04  cmpwi 3, 0
  036fd08  bt 2, 0x370a44
  036fd0c  lis 3, 55
  036fd10  lis 4, 114
  036fd14  addi 3, 3, -6760
  036fd18  li 5, 0
  036fd1c  lfs 1, 52(3)
  036fd20  lfs 2, -3056(4)
  036fd24  ori 3, 31, 0
  036fd28  fmuls 1, 2, 1
  036fd2c  li 4, 0
  036fd30  fctiwz 1, 1
  036fd34  stfd 1, 488(1)
  036fd38  lwz 6, 492(1)
  036fd3c  extsw 6, 6
  036fd40  bl 0xfddc0
  036fd44  nop
  036fd48  li 3, 1
  036fd4c  stb 3, 32(31)
  036fd50  b 0x370a44
  036fd54  lfs 1, 16(31)
  036fd58  lfs 2, 20(31)
  036fd5c  fsubs 1, 25, 1
  036fd60  fsubs 2, 24, 2
  036fd64  bl 0x5e8338
  036fd68  nop
  036fd6c  lis 3, 55
  036fd70  lis 4, 114
  036fd74  addi 3, 3, -6760
  036fd78  lis 6, 114
  036fd7c  addic 5, 25, 236
  036fd80  lfs 2, 96(3)
  036fd84  lfs 3, 60(3)
  036fd88  lfs 4, 160(3)
  036fd8c  lfs 5, -3060(4)
  036fd90  ori 3, 31, 0
  036fd94  lfs 6, -3052(6)
  036fd98  fmuls 2, 5, 2
  036fd9c  fmuls 3, 5, 3
  036fda0  fmuls 4, 6, 4
  036fda4  bl 0xff2e8
  036fda8  nop
  036fdac  lbz 3, 112(31)
  036fdb0  rlwinm 3, 3, 0, 30, 30
  036fdb4  cmpwi 3, 0
  036fdb8  bt 2, 0x36fe04
  036fdbc  lbz 3, 82(31)
  036fdc0  cmpwi 3, 4
  036fdc4  bt 2, 0x36fe04
  036fdc8  lis 3, 55
  036fdcc  lis 4, 114
  036fdd0  addi 3, 3, -6760
  036fdd4  li 5, 0
  036fdd8  lfs 1, 88(3)
  036fddc  lfs 2, -3056(4)
  036fde0  ori 3, 31, 0
  036fde4  li 4, 4
  036fde8  fmuls 1, 2, 1
  036fdec  fctiwz 1, 1
  036fdf0  stfd 1, 488(1)
  036fdf4  lwz 6, 492(1)
  036fdf8  extsw 6, 6
  036fdfc  bl 0xfddc0
  036fe00  nop
  036fe04  cmpwi 30, 0
  036fe08  bf 2, 0x36ff08
  036fe0c  lis 3, 55
  036fe10  addi 3, 3, -6760
  036fe14  lfs 1, 72(3)
  036fe18  fcmpu 0, 31, 1
  036fe1c  cror 6, 0, 2
  036fe20  bt 6, 0x36ff08
  036fe24  lis 3, 55
  036fe28  addi 3, 3, -6760
  036fe2c  lfs 1, 76(3)
  036fe30  fcmpu 0, 27, 1
  036fe34  cror 6, 0, 2
  036fe38  bt 6, 0x36ff08
  036fe3c  lis 3, 55
  036fe40  addi 3, 3, -6760
  036fe44  lfs 1, 80(3)
  036fe48  fcmpu 0, 31, 1
  036fe4c  cror 6, 0, 2
  036fe50  bt 6, 0x36fe9c
  036fe54  lis 3, 55
  036fe58  lis 4, 114
  036fe5c  addi 3, 3, -6760
  036fe60  li 5, 0
  036fe64  lfs 1, 164(3)
  036fe68  lfs 2, -3056(4)
  036fe6c  ori 3, 31, 0
  036fe70  fmuls 1, 2, 1
  036fe74  li 4, 10
  036fe78  fctiwz 1, 1
  036fe7c  stfd 1, 488(1)
  036fe80  lwz 6, 492(1)
  036fe84  extsw 6, 6
  036fe88  bl 0xfddc0
  036fe8c  nop
  036fe90  li 3, 2
  036fe94  stb 3, 32(31)
  036fe98  b 0x370a44
  036fe9c  lis 3, 55
  036fea0  addi 3, 3, -6760
  036fea4  lfs 1, 84(3)
  036fea8  fcmpu 0, 31, 1
  036feac  cror 6, 1, 2
  036feb0  bt 6, 0x36ff08
  036feb4  lwz 3, 264(25)
  036feb8  cmpwi 3, 0
  036febc  bf 2, 0x36ff08
  036fec0  lis 3, 55
  036fec4  lis 4, 114
  036fec8  addi 3, 3, -6760
  036fecc  li 5, 0
  036fed0  lfs 1, 36(3)
  036fed4  lfs 2, -3056(4)
  036fed8  ori 3, 31, 0
  036fedc  li 4, 11
  036fee0  fmuls 1, 2, 1
  036fee4  fctiwz 1, 1
  036fee8  stfd 1, 488(1)
  036feec  lwz 6, 492(1)
  036fef0  extsw 6, 6
  036fef4  bl 0xfddc0
  036fef8  nop
  036fefc  li 3, 3
  036ff00  stb 3, 32(31)
  036ff04  b 0x370a44
  036ff08  lis 3, 55
  036ff0c  addi 3, 3, -6760
  036ff10  lfs 1, 72(3)
  036ff14  fcmpu 0, 31, 1
  036ff18  cror 6, 1, 2
  036ff1c  bt 6, 0x36ff68
  036ff20  lis 3, 55
  036ff24  li 4, 7
  036ff28  addi 3, 3, -6760
  036ff2c  lis 5, 114
  036ff30  stb 4, 32(31)
  036ff34  li 4, 7
  036ff38  lfs 1, 88(3)
  036ff3c  lfs 2, -3056(5)
  036ff40  ori 3, 31, 0
  036ff44  li 5, 0
  036ff48  fmuls 1, 2, 1
  036ff4c  fctiwz 1, 1
  036ff50  stfd 1, 488(1)
  036ff54  lwz 6, 492(1)
  036ff58  extsw 6, 6
  036ff5c  bl 0xfddc0
  036ff60  nop
  036ff64  b 0x370a44
  036ff68  lis 3, 55
  036ff6c  li 4, 168
  036ff70  lhz 5, 242(25)
  036ff74  addi 3, 3, -6760
  036ff78  cmpwi 5, 0
  036ff7c  lvlx 31, 4, 3
  036ff80  vspltw 31, 31, 0
  036ff84  bf 2, 0x3700d4
  036ff88  lis 3, 55
  036ff8c  addi 3, 3, -6760
  036ff90  lfs 1, 80(3)
  036ff94  fcmpu 0, 31, 1
  036ff98  cror 6, 1, 2
  036ff9c  bt 6, 0x3700d4
  036ffa0  lfs 1, 24(31)
  036ffa4  lfs 2, 392(1)
  036ffa8  lis 3, 55
  036ffac  fsubs 1, 1, 2
  036ffb0  addi 3, 3, -6760
  036ffb4  lfs 2, 172(3)
  036ffb8  fabs 1, 1
  036ffbc  fcmpu 0, 1, 2
  036ffc0  cror 6, 1, 2
  036ffc4  bt 6, 0x3700d4
  036ffc8  lis 3, 149
  036ffcc  lfs 1, 16(31)
  036ffd0  addic 3, 3, 5056
  036ffd4  lfs 2, 20(31)
  036ffd8  lfs 29, 344(3)
  036ffdc  lfs 3, 320(3)
  036ffe0  lfs 4, 324(3)
  036ffe4  fsubs 1, 1, 3
  036ffe8  fsubs 2, 2, 4
  036ffec  bl 0x5e8338
  036fff0  nop
  036fff4  fmr 2, 1
  036fff8  fmr 1, 29
  036fffc  bl 0x5026a0
  0370000  nop
  0370004  lis 3, 55
  0370008  addi 3, 3, -6760
  037000c  lfs 2, 176(3)
  0370010  fcmpu 0, 1, 2
  0370014  cror 6, 1, 2
  0370018  bt 6, 0x3700d4
  037001c  lfs 1, 16(31)
  0370020  lfs 29, 72(31)
  0370024  fsubs 1, 25, 1
  0370028  lfs 2, 20(31)
  037002c  fsubs 2, 24, 2
  0370030  bl 0x5e8338
  0370034  nop
  0370038  fmr 2, 1
  037003c  fmr 1, 29
  0370040  bl 0x5026a0
  0370044  nop
  0370048  lis 3, 55
  037004c  addi 3, 3, -6760
  0370050  lfs 2, 108(3)
  0370054  fcmpu 0, 1, 2
  0370058  cror 6, 1, 2
  037005c  bt 6, 0x3700d4
  0370060  lis 3, 55
  0370064  li 4, 6
  0370068  addi 3, 3, -6760
  037006c  lis 30, 114
  0370070  li 5, 0
  0370074  stb 4, 32(31)
  0370078  li 4, 5
  037007c  lfs 1, 88(3)
  0370080  lfs 2, -3056(30)
  0370084  ori 3, 31, 0
  0370088  fmuls 1, 2, 1
  037008c  fctiwz 1, 1
  0370090  stfd 1, 488(1)
  0370094  lwz 6, 492(1)
  0370098  extsw 6, 6
  037009c  bl 0xfddc0
  03700a0  nop
  03700a4  vspltisw 2, -1
  03700a8  li 3, -3056
  03700ac  li 4, 3
  03700b0  vslw 2, 2, 2
  03700b4  lvlx 3, 3, 30
  03700b8  li 3, 242
  03700bc  vmaddfp 2, 3, 31, 2
  03700c0  vctsxs 2, 2, 0
  03700c4  vsplth 2, 2, 1
  03700c8  stvehx 2, 3, 25
  03700cc  stb 4, 253(25)
  03700d0  b 0x370a44
  03700d4  lis 3, 55
  03700d8  addi 3, 3, -6760
  03700dc  lfs 1, 80(3)
  03700e0  fcmpu 0, 31, 1
  03700e4  cror 6, 0, 2
  03700e8  bt 6, 0x370a44
  03700ec  li 3, 0
  03700f0  li 4, 1
  03700f4  subc 3, 3, 30
  03700f8  li 5, 3
  03700fc  cntlzw 3, 3
  0370100  subc 4, 4, 5
  0370104  sldi 3, 3, 58
  0370108  lis 6, 55
  037010c  sradi 3, 3, 63
  0370110  addi 6, 6, -6760
  0370114  and 3, 3, 4
  0370118  lis 30, 114
  037011c  addc 3, 5, 3
  0370120  li 4, 6
  0370124  li 5, 0
  0370128  stb 3, 32(31)
  037012c  lfs 1, 52(6)
  0370130  ori 3, 31, 0
  0370134  lfs 2, -3056(30)
  0370138  fmuls 1, 2, 1
  037013c  fctiwz 1, 1
  0370140  stfd 1, 488(1)
  0370144  lwz 6, 492(1)
  0370148  extsw 6, 6
  037014c  bl 0xfddc0
  0370150  nop
  0370154  vspltisw 2, -1
  0370158  li 3, -3056
  037015c  vslw 2, 2, 2
  0370160  lvlx 3, 3, 30
  0370164  li 3, 242
  0370168  vmaddfp 2, 3, 31, 2
  037016c  vctsxs 2, 2, 0
  0370170  vsplth 2, 2, 1
  0370174  stvehx 2, 3, 25
  0370178  b 0x370a44
  037017c  lfs 1, 416(1)
  0370180  lfs 2, 16(31)
  0370184  lfs 3, 420(1)
  0370188  lfs 4, 20(31)
  037018c  fsubs 1, 1, 2
  0370190  fsubs 2, 3, 4
  0370194  bl 0x5e8338
  0370198  nop
  037019c  lis 3, 55
  03701a0  lis 4, 114
  03701a4  addi 30, 3, -6760
  03701a8  lis 3, 114
  03701ac  addic 5, 25, 236
  03701b0  lfs 2, 56(30)
  03701b4  lfs 3, 60(30)
  03701b8  lfs 4, 100(30)
  03701bc  lfs 5, -3060(3)
  03701c0  lfs 6, -3052(4)
  03701c4  ori 3, 31, 0
  03701c8  fmuls 2, 5, 2
  03701cc  fmuls 3, 5, 3
  03701d0  fmuls 4, 6, 4
  03701d4  bl 0xff2e8
  03701d8  nop
  03701dc  lfs 1, 72(30)
  03701e0  fcmpu 0, 31, 1
  03701e4  cror 6, 1, 2
  03701e8  bt 6, 0x370230
  03701ec  lis 3, 55
  03701f0  li 4, 7
  03701f4  addi 3, 3, -6760
  03701f8  lis 5, 114
  03701fc  stb 4, 32(31)
  0370200  li 4, 7
  0370204  lfs 1, 88(3)
  0370208  lfs 2, -3056(5)
  037020c  ori 3, 31, 0
  0370210  fmuls 1, 2, 1
  0370214  li 5, 0
  0370218  fctiwz 1, 1
  037021c  stfd 1, 488(1)
  0370220  lwz 6, 492(1)
  0370224  extsw 6, 6
  0370228  bl 0xfddc0
  037022c  nop
  0370230  lbz 3, 83(31)
  0370234  cmpwi 3, 5
  0370238  bf 2, 0x3703dc
  037023c  lis 3, 55
  0370240  lwz 4, 216(25)
  0370244  lis 5, 16384
  0370248  addi 3, 3, -6760
  037024c  lfs 1, 8(3)
  0370250  srawi 3, 4, 31
  0370254  fcmpu 1, 30, 1
  0370258  srwi 6, 3, 1
  037025c  xor 4, 6, 4
  0370260  subc 3, 4, 3
  0370264  cmpw 3, 5
  0370268  crorc 2, 4, 0
  037026c  bt 2, 0x3703dc
  0370270  lwz 3, 248(25)
  0370274  cmpwi 3, 0
  0370278  bt 2, 0x3703dc
  037027c  addic 5, 1, 208
  0370280  li 4, 0
  0370284  bl 0xf1114
  0370288  nop
  037028c  lfs 1, 208(1)
  0370290  lfs 2, 212(1)
  0370294  fsubs 1, 25, 1
  0370298  lfs 3, 216(1)
  037029c  fsubs 2, 24, 2
  03702a0  stfs 22, 236(1)
  03702a4  fsubs 3, 23, 3
  03702a8  stfs 1, 224(1)
  03702ac  stfs 2, 228(1)
  03702b0  stfs 3, 232(1)
  03702b4  bl 0x5e8338
  03702b8  nop
  03702bc  fmr 25, 1
  03702c0  lfs 2, 72(31)
  03702c4  bl 0x5026a0
  03702c8  nop
  03702cc  fmr 4, 1
  03702d0  lis 3, 55
  03702d4  lfs 1, 232(1)
  03702d8  addi 3, 3, -6760
  03702dc  lfs 5, 144(3)
  03702e0  lfs 2, 224(1)
  03702e4  lfs 3, 228(1)
  03702e8  fcmpu 0, 4, 5
  03702ec  cror 6, 0, 2
  03702f0  bt 6, 0x3702f8
  03702f4  lfs 25, 72(31)
  03702f8  fmr 4, 2
  03702fc  fmuls 3, 3, 3
  0370300  fmr 2, 1
  0370304  fmadds 1, 4, 4, 3
  0370308  fsqrts 1, 1
  037030c  bl 0x5e8338
  0370310  nop
  0370314  lis 3, 55
  0370318  fmr 2, 25
  037031c  lis 28, 114
  0370320  addi 30, 3, -6760
  0370324  addic 3, 1, 224
  0370328  lfs 31, 180(30)
  037032c  fmr 3, 1
  0370330  lfs 1, -3052(28)
  0370334  fmuls 1, 1, 31
  0370338  bl 0xfe610
  037033c  nop
  0370340  li 3, 7
  0370344  li 4, 0
  0370348  ori 5, 31, 0
  037034c  bl 0x15d12c
  0370350  nop
  0370354  lfs 1, -3052(28)
  0370358  lfs 2, 80(30)
  037035c  fmuls 1, 1, 31
  0370360  fdivs 1, 2, 1
  0370364  bl 0x502758
  0370368  nop
  037036c  lfs 1, 208(1)
  0370370  ori 9, 3, 0
  0370374  lfs 2, 216(1)
  0370378  ori 3, 31, 0
  037037c  stfs 1, 64(1)
  0370380  stfs 2, 72(1)
  0370384  lfs 1, 224(1)
  0370388  lfs 2, 232(1)
  037038c  stfs 1, 80(1)
  0370390  stfs 2, 88(1)
  0370394  lfs 1, 212(1)
  0370398  lfs 2, 220(1)
  037039c  stfs 1, 68(1)
  03703a0  stfs 2, 76(1)
  03703a4  lfs 1, 228(1)
  03703a8  lfs 2, 236(1)
  03703ac  stfs 1, 84(1)
  03703b0  stfs 2, 92(1)
  03703b4  ld 5, 64(1)
  03703b8  ld 6, 72(1)
  03703bc  ld 7, 80(1)
  03703c0  ld 8, 88(1)
  03703c4  bl 0x1b100
  03703c8  nop
  03703cc  addic 3, 25, 253
  03703d0  bl 0x5000b4
  03703d4  nop
  03703d8  b 0x370a44
  03703dc  lbz 3, 112(31)
  03703e0  rlwinm 3, 3, 0, 30, 30
  03703e4  cmpwi 3, 0
  03703e8  bt 2, 0x370a44
  03703ec  lhz 3, 242(25)
  03703f0  cmpwi 3, 0
  03703f4  bf 2, 0x370a44
  03703f8  lbz 3, 253(25)
  03703fc  cmpwi 3, 0
  0370400  bf 2, 0x370a44
  0370404  lis 3, 55
  0370408  vspltisw 2, -1
  037040c  lis 6, 114
  0370410  addi 7, 3, -6760
  0370414  li 3, 184
  0370418  li 4, -3056
  037041c  vslw 2, 2, 2
  0370420  li 8, 242
  0370424  li 9, 5
  0370428  lvlx 3, 3, 7
  037042c  lvlx 4, 4, 6
  0370430  vspltw 3, 3, 0
  0370434  ori 3, 31, 0
  0370438  vmaddfp 2, 4, 3, 2
  037043c  li 4, 4
  0370440  li 5, 0
  0370444  vctsxs 2, 2, 0
  0370448  vsplth 2, 2, 1
  037044c  stvehx 2, 8, 25
  0370450  stb 9, 32(31)
  0370454  lfs 1, 52(7)
  0370458  lfs 2, -3056(6)
  037045c  fmuls 1, 2, 1
  0370460  fctiwz 1, 1
  0370464  stfd 1, 488(1)
  0370468  lwz 6, 492(1)
  037046c  extsw 6, 6
  0370470  bl 0xfddc0
  0370474  nop
  0370478  b 0x370a44
  037047c  lfs 1, 16(31)
  0370480  lfs 2, 20(31)
  0370484  fsubs 1, 25, 1
  0370488  fsubs 2, 24, 2
  037048c  bl 0x5e8338
  0370490  nop
  0370494  lis 3, 55
  0370498  lis 4, 114
  037049c  addi 3, 3, -6760
  03704a0  lis 6, 114
  03704a4  addic 5, 25, 236
  03704a8  lfs 2, 56(3)
  03704ac  lfs 3, 60(3)
  03704b0  lfs 4, 160(3)
  03704b4  lfs 5, -3060(4)
  03704b8  ori 3, 31, 0
  03704bc  lfs 6, -3052(6)
  03704c0  fmuls 2, 5, 2
  03704c4  fmuls 3, 5, 3
  03704c8  fmuls 4, 6, 4
  03704cc  bl 0xff2e8
  03704d0  nop
  03704d4  lbz 3, 82(31)
  03704d8  lbz 4, 83(31)
  03704dc  cmpw 3, 4
  03704e0  bf 2, 0x370680
  03704e4  lis 3, 55
  03704e8  addi 3, 3, -6760
  03704ec  lfs 1, 188(3)
  03704f0  fcmpu 0, 30, 1
  03704f4  bt 0, 0x370680
  03704f8  lis 3, 55
  03704fc  addi 3, 3, -6760
  0370500  lfs 1, 32(3)
  0370504  fcmpu 0, 30, 1
  0370508  cror 6, 1, 2
  037050c  bt 6, 0x370680
  0370510  lfs 1, 24(31)
  0370514  lfs 2, 392(1)
  0370518  lis 3, 55
  037051c  fsubs 1, 1, 2
  0370520  addi 3, 3, -6760
  0370524  lfs 2, 8(3)
  0370528  fabs 1, 1
  037052c  fcmpu 0, 1, 2
  0370530  cror 6, 1, 2
  0370534  bt 6, 0x370680
  0370538  lfs 2, 20(31)
  037053c  lfs 1, 16(31)
  0370540  fsubs 3, 2, 24
  0370544  fsubs 4, 1, 25
  0370548  lis 3, 55
  037054c  addi 3, 3, -6760
  0370550  fmuls 3, 3, 3
  0370554  lfs 31, 76(3)
  0370558  fmadds 3, 4, 4, 3
  037055c  fsqrts 3, 3
  0370560  fcmpu 0, 3, 31
  0370564  cror 6, 1, 2
  0370568  bt 6, 0x370680
  037056c  fsubs 1, 25, 1
  0370570  fsubs 2, 24, 2
  0370574  bl 0x5e8338
  0370578  nop
  037057c  lfs 2, 72(31)
  0370580  bl 0x5026a0
  0370584  nop
  0370588  lis 3, 55
  037058c  addi 3, 3, -6760
  0370590  lfs 2, 144(3)
  0370594  fcmpu 0, 1, 2
  0370598  cror 6, 1, 2
  037059c  bt 6, 0x370680
  03705a0  lfs 1, 72(31)
  03705a4  bl 0x5e8078
  03705a8  nop
  03705ac  lis 3, 55
  03705b0  lfs 2, 72(31)
  03705b4  addi 3, 3, -6760
  03705b8  lfs 29, 192(3)
  03705bc  fmuls 3, 1, 29
  03705c0  fmr 1, 2
  03705c4  stfs 3, 272(1)
  03705c8  bl 0x5e8128
  03705cc  nop
  03705d0  fmuls 2, 1, 29
  03705d4  li 30, 1
  03705d8  stw 23, 280(1)
  03705dc  lis 28, 16256
  03705e0  stw 31, 288(1)
  03705e4  addic 3, 1, 272
  03705e8  fmr 1, 31
  03705ec  stw 30, 292(1)
  03705f0  ori 4, 3, 0
  03705f4  stw 28, 300(1)
  03705f8  stfs 2, 276(1)
  03705fc  bl 0x5e84c0
  0370600  nop
  0370604  lis 3, 17839
  0370608  stw 28, 280(1)
  037060c  lhz 4, 166(31)
  0370610  cmpwi 29, 0
  0370614  ori 3, 3, 57190
  0370618  stb 23, 296(1)
  037061c  stb 30, 297(1)
  0370620  sth 4, 298(1)
  0370624  stw 3, 284(1)
  0370628  bt 2, 0x370680
  037062c  li 3, 272
  0370630  li 5, 288
  0370634  li 4, 64
  0370638  li 7, 304
  037063c  li 6, 80
  0370640  li 8, 96
  0370644  lvx 2, 3, 1
  0370648  lvx 3, 5, 1
  037064c  stvx 2, 4, 1
  0370650  ori 3, 29, 0
  0370654  lvx 2, 7, 1
  0370658  stvx 3, 6, 1
  037065c  stvx 2, 8, 1
  0370660  ld 5, 64(1)
  0370664  ld 6, 72(1)
  0370668  ld 7, 80(1)
  037066c  ld 8, 88(1)
  0370670  ld 9, 96(1)
  0370674  ld 10, 104(1)
  0370678  bl 0x105ab4
  037067c  nop
  0370680  lbz 3, 112(31)
  0370684  rlwinm 3, 3, 0, 30, 30
  0370688  cmpwi 3, 0
  037068c  bt 2, 0x370a44
  0370690  lis 3, 55
  0370694  li 4, 5
  0370698  vspltisw 2, -1
  037069c  addi 6, 3, -6760
  03706a0  li 3, 92
  03706a4  lis 5, 114
  03706a8  stb 4, 32(31)
  03706ac  li 4, -3056
  03706b0  vslw 2, 2, 2
  03706b4  lvlx 3, 3, 6
  03706b8  li 7, 242
  03706bc  vspltw 3, 3, 0
  03706c0  lvlx 4, 4, 5
  03706c4  lfs 1, -3056(5)
  03706c8  ori 3, 31, 0
  03706cc  vmaddfp 2, 4, 3, 2
  03706d0  li 4, 4
  03706d4  li 5, 0
  03706d8  vctsxs 2, 2, 0
  03706dc  vsplth 2, 2, 1
  03706e0  stvehx 2, 7, 25
  03706e4  lfs 2, 88(6)
  03706e8  fmuls 1, 1, 2
  03706ec  fctiwz 1, 1
  03706f0  stfd 1, 488(1)
  03706f4  lwz 6, 492(1)
  03706f8  extsw 6, 6
  03706fc  bl 0xfddc0
  0370700  nop
  0370704  b 0x370a44
  0370708  lwz 3, 244(25)
  037070c  cmpwi 3, 0
  0370710  bf 1, 0x3707d4
  0370714  lis 3, 55
  0370718  lfs 1, 72(31)
  037071c  addi 30, 3, -6760
  0370720  lfs 31, 48(30)
  0370724  fmr 2, 31
  0370728  bl 0x502578
  037072c  nop
  0370730  bl 0x5e8078
  0370734  nop
  0370738  lfs 2, 244(25)
  037073c  fmuls 3, 1, 2
  0370740  lfs 1, 72(31)
  0370744  fmr 2, 31
  0370748  stfs 3, 240(1)
  037074c  bl 0x502578
  0370750  nop
  0370754  bl 0x5e8128
  0370758  nop
  037075c  lfs 2, 244(25)
  0370760  lis 3, 114
  0370764  lfs 3, 240(1)
  0370768  lfs 4, 16(31)
  037076c  lfs 5, 20(31)
  0370770  fadds 3, 3, 4
  0370774  fmadds 1, 1, 2, 5
  0370778  lfs 2, 24(31)
  037077c  stfs 2, 248(1)
  0370780  lfs 2, -3056(3)
  0370784  addic 4, 31, 16
  0370788  addic 5, 1, 240
  037078c  ori 3, 31, 0
  0370790  stfs 3, 240(1)
  0370794  stfs 1, 244(1)
  0370798  lfs 1, 40(30)
  037079c  lfs 3, 196(30)
  03707a0  fmuls 1, 2, 1
  03707a4  lfs 2, 244(25)
  03707a8  li 10, 1
  03707ac  fmuls 1, 1, 1
  03707b0  fdivs 1, 3, 1
  03707b4  fadds 1, 2, 1
  03707b8  stfs 1, 244(25)
  03707bc  lfs 1, 44(30)
  03707c0  lfs 2, 76(30)
  03707c4  lfs 4, 124(30)
  03707c8  fmr 3, 1
  03707cc  bl 0xffcd0
  03707d0  nop
  03707d4  lbz 3, 112(31)
  03707d8  rlwinm 3, 3, 0, 30, 30
  03707dc  cmpwi 3, 0
  03707e0  bt 2, 0x370a44
  03707e4  lis 3, 55
  03707e8  lis 30, 114
  03707ec  addi 28, 3, -6760
  03707f0  lhz 3, 232(25)
  03707f4  li 4, 9
  03707f8  xori 3, 3, 1
  03707fc  lfs 1, -3056(30)
  0370800  li 5, 0
  0370804  sth 3, 232(25)
  0370808  lfs 2, 164(28)
  037080c  lbz 3, 32(31)
  0370810  fmuls 1, 1, 2
  0370814  subc 3, 4, 3
  0370818  cntlzw 3, 3
  037081c  sldi 3, 3, 58
  0370820  sradi 4, 3, 63
  0370824  li 3, 9
  0370828  fctiwz 1, 1
  037082c  subc 6, 3, 5
  0370830  ori 3, 31, 0
  0370834  and 4, 4, 6
  0370838  addc 4, 5, 4
  037083c  li 5, 0
  0370840  stfd 1, 488(1)
  0370844  lwz 6, 492(1)
  0370848  extsw 6, 6
  037084c  bl 0xfddc0
  0370850  nop
  0370854  li 3, 1
  0370858  vspltisw 2, -1
  037085c  li 4, 200
  0370860  li 5, -3056
  0370864  stb 3, 32(31)
  0370868  vslw 2, 2, 2
  037086c  lvlx 3, 4, 28
  0370870  li 3, 264
  0370874  lvlx 4, 5, 30
  0370878  vspltw 3, 3, 0
  037087c  vmaddfp 2, 4, 3, 2
  0370880  vctsxs 2, 2, 0
  0370884  vspltw 2, 2, 0
  0370888  stvewx 2, 3, 25
  037088c  b 0x370a44
  0370890  ori 3, 31, 0
  0370894  addic 4, 25, 112
  0370898  bl 0x10b030
  037089c  nop
  03708a0  rlwinm 3, 3, 0, 25, 26
  03708a4  cmpwi 3, 0
  03708a8  bt 2, 0x370a44
  03708ac  lwz 3, 120(31)
  03708b0  lwz 3, 248(3)
  03708b4  cmpwi 3, 0
  03708b8  bt 2, 0x3708c4
  03708bc  bl 0xefb38
  03708c0  nop
  03708c4  lis 6, 132
  03708c8  ori 3, 31, 0
  03708cc  li 4, 0
  03708d0  li 5, 1
  03708d4  lwz 6, 5216(6)
  03708d8  extsw 6, 6
  03708dc  bl 0x36e080
  03708e0  lis 6, 132
  03708e4  ori 3, 31, 0
  03708e8  li 4, 2
  03708ec  li 5, 3
  03708f0  lwz 6, 5220(6)
  03708f4  extsw 6, 6
  03708f8  bl 0x36e080
  03708fc  lis 30, 132
  0370900  ori 3, 31, 0
  0370904  li 4, 4
  0370908  li 5, 5
  037090c  lwz 6, 5224(30)
  0370910  extsw 6, 6
  0370914  bl 0x36e080
  0370918  lis 29, 132
  037091c  ori 3, 31, 0
  0370920  li 4, 5
  0370924  li 5, 6
  0370928  lwz 6, 5228(29)
  037092c  extsw 6, 6
  0370930  bl 0x36e080
  0370934  lis 28, 132
  0370938  ori 3, 31, 0
  037093c  li 4, 6
  0370940  li 5, 7
  0370944  lwz 6, 5232(28)
  0370948  extsw 6, 6
  037094c  bl 0x36e080
  0370950  lwz 6, 5224(30)
  0370954  ori 3, 31, 0
  0370958  li 4, 8
  037095c  extsw 6, 6
  0370960  li 5, 9
  0370964  bl 0x36e080
  0370968  lwz 6, 5228(29)
  037096c  ori 3, 31, 0
  0370970  extsw 6, 6
  0370974  li 4, 9
  0370978  li 5, 10
  037097c  bl 0x36e080
  0370980  lwz 6, 5232(28)
  0370984  ori 3, 31, 0
  0370988  li 4, 10
  037098c  extsw 6, 6
  0370990  li 5, 11
  0370994  bl 0x36e080
  0370998  lis 30, 132
  037099c  ori 3, 31, 0
  03709a0  li 4, 12
  03709a4  li 5, 13
  03709a8  lwz 6, 5236(30)
  03709ac  extsw 6, 6
  03709b0  bl 0x36e080
  03709b4  lwz 6, 5236(30)
  03709b8  ori 3, 31, 0
  03709bc  extsw 6, 6
  03709c0  li 4, 14
  03709c4  li 5, 15
  03709c8  bl 0x36e080
  03709cc  lis 30, 132
  03709d0  ori 3, 31, 0
  03709d4  li 4, 16
  03709d8  li 5, 17
  03709dc  lwz 6, 5240(30)
  03709e0  extsw 6, 6
  03709e4  bl 0x36e080
  03709e8  lwz 6, 5240(30)
  03709ec  ori 3, 31, 0
  03709f0  li 4, 20
  03709f4  extsw 6, 6
  03709f8  li 5, 21
  03709fc  bl 0x36e080
  0370a00  lis 30, 132
  0370a04  ori 3, 31, 0
  0370a08  li 4, 18
  0370a0c  li 5, 19
  0370a10  lwz 6, 5244(30)
  0370a14  extsw 6, 6
  0370a18  bl 0x36e080
  0370a1c  lwz 6, 5244(30)
  0370a20  ori 3, 31, 0
  0370a24  extsw 6, 6
  0370a28  li 4, 22
  0370a2c  li 5, 23
  0370a30  bl 0x36e080
  0370a34  ori 3, 31, 0
  0370a38  bl 0xefb38
  0370a3c  nop
  0370a40  b 0x370f38
  0370a44  ori 3, 31, 0
  0370a48  addic 4, 25, 96
  0370a4c  bl 0x10c9a0
  0370a50  nop
  0370a54  lbz 3, 32(31)
  0370a58  lfs 3, 16(31)
  0370a5c  cmpwi 3, 1
  0370a60  lfs 4, 20(31)
  0370a64  bt 2, 0x370a88
  0370a68  cmpwi 3, 3
  0370a6c  bt 2, 0x370a88
  0370a70  cmpwi 3, 4
  0370a74  bt 2, 0x370a88
  0370a78  cmpwi 3, 5
  0370a7c  bt 2, 0x370a88
  0370a80  cmpwi 3, 6
  0370a84  bf 2, 0x370b58
  0370a88  lis 3, 151
  0370a8c  li 4, 0
  0370a90  addic 3, 3, -25376
  0370a94  subc 4, 4, 29
  0370a98  cntlzw 4, 4
  0370a9c  lwz 3, 8320(3)
  0370aa0  sldi 4, 4, 58
  0370aa4  subc 3, 3, 29
  0370aa8  sradi 4, 4, 63
  0370aac  and 3, 4, 3
  0370ab0  addc 3, 29, 3
  0370ab4  lfs 2, 20(3)
  0370ab8  lfs 1, 16(3)
  0370abc  fsubs 5, 4, 2
  0370ac0  fsubs 6, 3, 1
  0370ac4  lis 3, 55
  0370ac8  addi 3, 3, -6760
  0370acc  fmuls 5, 5, 5
  0370ad0  fmadds 5, 6, 6, 5
  0370ad4  lfs 6, 204(3)
  0370ad8  fsqrts 5, 5
  0370adc  fcmpu 0, 5, 6
  0370ae0  cror 6, 1, 2
  0370ae4  bt 6, 0x370b58
  0370ae8  fsubs 1, 1, 3
  0370aec  fsubs 2, 2, 4
  0370af0  bl 0x5e8338
  0370af4  nop
  0370af8  lfs 2, 72(31)
  0370afc  bl 0x5025e0
  0370b00  nop
  0370b04  lis 3, 55
  0370b08  addi 3, 3, -6760
  0370b0c  lfs 2, 208(3)
  0370b10  fcmpu 0, 1, 2
  0370b14  cror 6, 0, 2
  0370b18  bt 6, 0x370b24
  0370b1c  fmr 1, 2
  0370b20  b 0x370b40
  0370b24  lis 3, 55
  0370b28  addi 3, 3, -6760
  0370b2c  lfs 2, 212(3)
  0370b30  fcmpu 0, 1, 2
  0370b34  cror 6, 1, 2
  0370b38  bt 6, 0x370b40
  0370b3c  fmr 1, 2
  0370b40  lis 3, 55
  0370b44  addi 3, 3, -6760
  0370b48  lfs 2, 44(3)
  0370b4c  fmuls 1, 1, 2
  0370b50  stfs 1, 376(25)
  0370b54  stfs 1, 504(25)
  0370b58  lhz 3, 52(31)
  0370b5c  rlwinm 3, 3, 0, 16, 16
  0370b60  cmpwi 3, 0
  0370b64  bt 2, 0x370b80
  0370b68  lfs 1, 376(25)
  0370b6c  lfs 2, 504(25)
  0370b70  fneg 1, 1
  0370b74  fneg 2, 2
  0370b78  stfs 1, 376(25)
  0370b7c  stfs 2, 504(25)
  0370b80  lis 3, 55
  0370b84  lis 29, 114
  0370b88  addi 30, 3, -6760
  0370b8c  ori 3, 31, 0
  0370b90  ori 4, 24, 0
  0370b94  li 5, 5
  0370b98  lfs 1, 216(30)
  0370b9c  lfs 31, 60(30)
  0370ba0  lfs 3, -3060(29)
  0370ba4  fmuls 1, 3, 1
  0370ba8  fmuls 2, 3, 31
  0370bac  bl 0x1167c8
  0370bb0  nop
  0370bb4  lfs 1, 220(30)
  0370bb8  lfs 3, -3060(29)
  0370bbc  ori 3, 31, 0
  0370bc0  addic 4, 25, 400
  0370bc4  fmuls 2, 3, 31
  0370bc8  li 5, 6
  0370bcc  fmuls 1, 3, 1
  0370bd0  bl 0x1167c8
  0370bd4  nop
  0370bd8  lwz 3, 248(25)
  0370bdc  cmpwi 3, 0
  0370be0  bt 2, 0x370cb0
  0370be4  addic 30, 1, 320
  0370be8  ori 3, 31, 0
  0370bec  li 4, 1
  0370bf0  ori 5, 30, 0
  0370bf4  bl 0xf1038
  0370bf8  nop
  0370bfc  lwz 3, 248(25)
  0370c00  lfs 1, 368(1)
  0370c04  stfs 1, 16(3)
  0370c08  lfs 1, 372(1)
  0370c0c  stfs 1, 20(3)
  0370c10  lfs 1, 376(1)
  0370c14  stfs 1, 24(3)
  0370c18  lfs 1, 380(1)
  0370c1c  stfs 1, 28(3)
  0370c20  lwz 3, 248(25)
  0370c24  bl 0xf98d8
  0370c28  nop
  0370c2c  lwz 3, 248(25)
  0370c30  bl 0xf31a8
  0370c34  nop
  0370c38  lwz 3, 248(25)
  0370c3c  ori 4, 30, 0
  0370c40  addic 3, 3, 192
  0370c44  bl 0x500fa8
  0370c48  nop
  0370c4c  lwz 3, 248(25)
  0370c50  addic 3, 3, 192
  0370c54  bl 0x10a788
  0370c58  nop
  0370c5c  lhz 3, 52(31)
  0370c60  clrlwi 3, 3, 31
  0370c64  cmpwi 3, 0
  0370c68  bt 2, 0x370c7c
  0370c6c  lwz 4, 248(25)
  0370c70  lhz 3, 52(4)
  0370c74  ori 3, 3, 65
  0370c78  b 0x370c8c
  0370c7c  lwz 4, 248(25)
  0370c80  li 3, -66
  0370c84  lhz 5, 52(4)
  0370c88  and 3, 5, 3
  0370c8c  sth 3, 52(4)
  0370c90  lwz 3, 248(25)
  0370c94  bl 0xf30a0
  0370c98  nop
  0370c9c  lwz 3, 248(25)
  0370ca0  lhz 4, 52(3)
  0370ca4  ori 4, 4, 6
  0370ca8  sth 4, 52(3)
  0370cac  b 0x370cfc
  0370cb0  addic 5, 1, 256
  0370cb4  ori 3, 31, 0
  0370cb8  li 4, 1
  0370cbc  bl 0xf1114
  0370cc0  nop
  0370cc4  lfs 1, 256(1)
  0370cc8  lfs 2, 264(1)
  0370ccc  ori 3, 31, 0
  0370cd0  stfs 1, 64(1)
  0370cd4  stfs 2, 72(1)
  0370cd8  lfs 1, 260(1)
  0370cdc  lfs 2, 268(1)
  0370ce0  stfs 1, 68(1)
  0370ce4  stfs 2, 76(1)
  0370ce8  ld 5, 64(1)
  0370cec  ld 6, 72(1)
  0370cf0  bl 0x3a38c8
  0370cf4  nop
  0370cf8  stw 3, 248(25)
  0370cfc  lis 3, 55
  0370d00  lfs 1, 208(25)
  0370d04  addi 5, 3, -6760
  0370d08  lis 3, 114
  0370d0c  li 4, 0
  0370d10  lfs 2, 224(5)
  0370d14  lfs 3, -3048(3)
  0370d18  fmadds 1, 3, 2, 1
  0370d1c  addic 3, 31, 16
  0370d20  stfs 1, 208(25)
  0370d24  lfs 31, 8(5)
  0370d28  lfs 2, 24(31)
  0370d2c  fsubs 1, 1, 31
  0370d30  fsubs 1, 2, 1
  0370d34  stfs 1, 24(31)
  0370d38  lfs 1, 44(5)
  0370d3c  bl 0xffb70
  0370d40  nop
  0370d44  lfs 2, 24(31)
  0370d48  fsubs 2, 2, 31
  0370d4c  fcmpu 0, 2, 1
  0370d50  stfs 2, 24(31)
  0370d54  cror 6, 1, 2
  0370d58  bt 6, 0x370d68
  0370d5c  stfs 1, 24(31)
  0370d60  stw 23, 208(25)
  0370d64  lfs 2, 24(31)
  0370d68  lis 3, 55
  0370d6c  lfs 1, 212(25)
  0370d70  addi 3, 3, -6760
  0370d74  lfs 3, 228(3)
  0370d78  fsubs 1, 1, 3
  0370d7c  fcmpu 0, 2, 1
  0370d80  cror 6, 1, 2
  0370d84  bt 6, 0x370f34
  0370d88  ori 3, 31, 0
  0370d8c  li 4, 0
  0370d90  li 5, -1
  0370d94  bl 0xfd8d0
  0370d98  nop
  0370d9c  lwz 3, 120(31)
  0370da0  lwz 3, 248(3)
  0370da4  cmpwi 3, 0
  0370da8  bt 2, 0x370db4
  0370dac  bl 0xefb38
  0370db0  nop
  0370db4  lis 6, 132
  0370db8  ori 3, 31, 0
  0370dbc  li 4, 0
  0370dc0  li 5, 1
  0370dc4  lwz 6, 5216(6)
  0370dc8  extsw 6, 6
  0370dcc  bl 0x36e080
  0370dd0  lis 6, 132
  0370dd4  ori 3, 31, 0
  0370dd8  li 4, 2
  0370ddc  li 5, 3
  0370de0  lwz 6, 5220(6)
  0370de4  extsw 6, 6
  0370de8  bl 0x36e080
  0370dec  lis 30, 132
  0370df0  ori 3, 31, 0
  0370df4  li 4, 4
  0370df8  li 5, 5
  0370dfc  lwz 6, 5224(30)
  0370e00  extsw 6, 6
  0370e04  bl 0x36e080
  0370e08  lis 29, 132
  0370e0c  ori 3, 31, 0
  0370e10  li 4, 5
  0370e14  li 5, 6
  0370e18  lwz 6, 5228(29)
  0370e1c  extsw 6, 6
  0370e20  bl 0x36e080
  0370e24  lis 28, 132
  0370e28  ori 3, 31, 0
  0370e2c  li 4, 6
  0370e30  li 5, 7
  0370e34  lwz 6, 5232(28)
  0370e38  extsw 6, 6
  0370e3c  bl 0x36e080
  0370e40  lwz 6, 5224(30)
  0370e44  ori 3, 31, 0
  0370e48  extsw 6, 6
  0370e4c  li 4, 8
  0370e50  li 5, 9
  0370e54  bl 0x36e080
  0370e58  lwz 6, 5228(29)
  0370e5c  ori 3, 31, 0
  0370e60  li 4, 9
  0370e64  extsw 6, 6
  0370e68  li 5, 10
  0370e6c  bl 0x36e080
  0370e70  lwz 6, 5232(28)
  0370e74  ori 3, 31, 0
  0370e78  extsw 6, 6
  0370e7c  li 4, 10
  0370e80  li 5, 11
  0370e84  bl 0x36e080
  0370e88  lis 30, 132
  0370e8c  ori 3, 31, 0
  0370e90  li 4, 12
  0370e94  li 5, 13
  0370e98  lwz 6, 5236(30)
  0370e9c  extsw 6, 6
  0370ea0  bl 0x36e080
  0370ea4  lwz 6, 5236(30)
  0370ea8  ori 3, 31, 0
  0370eac  li 4, 14
  0370eb0  extsw 6, 6
  0370eb4  li 5, 15
  0370eb8  bl 0x36e080
  0370ebc  lis 30, 132
  0370ec0  ori 3, 31, 0
  0370ec4  li 4, 16
  0370ec8  li 5, 17
  0370ecc  lwz 6, 5240(30)
  0370ed0  extsw 6, 6
  0370ed4  bl 0x36e080
  0370ed8  lwz 6, 5240(30)
  0370edc  ori 3, 31, 0
  0370ee0  extsw 6, 6
  0370ee4  li 4, 20
  0370ee8  li 5, 21
  0370eec  bl 0x36e080
  0370ef0  lis 30, 132
  0370ef4  ori 3, 31, 0
  0370ef8  li 4, 18
  0370efc  li 5, 19
  0370f00  lwz 6, 5244(30)
  0370f04  extsw 6, 6
  0370f08  bl 0x36e080
  0370f0c  lwz 6, 5244(30)
  0370f10  ori 3, 31, 0
  0370f14  li 4, 22
  0370f18  extsw 6, 6
  0370f1c  li 5, 23
  0370f20  bl 0x36e080
  0370f24  ori 3, 31, 0
  0370f28  bl 0xefb38
  0370f2c  nop
  0370f30  b 0x370f38
  0370f34  stfs 30, 216(25)
  0370f38  li 0, 512
  0370f3c  lvx 31, 1, 0
  0370f40  ld 0, 704(1)
  0370f44  mtlr 0
  0370f48  lfd 22, 608(1)
  0370f4c  lfd 23, 616(1)
  0370f50  lfd 24, 624(1)
  0370f54  lfd 25, 632(1)
  0370f58  lfd 26, 640(1)
  0370f5c  lfd 27, 648(1)
  0370f60  lfd 28, 656(1)
  0370f64  lfd 29, 664(1)
  0370f68  lfd 30, 672(1)
  0370f6c  lfd 31, 680(1)
  0370f70  ld 23, 536(1)
  0370f74  ld 24, 544(1)
  0370f78  ld 25, 552(1)
  0370f7c  ld 26, 560(1)
  0370f80  ld 27, 568(1)
  0370f84  ld 28, 576(1)
  0370f88  ld 29, 584(1)
  0370f8c  ld 30, 592(1)
  0370f90  ld 31, 600(1)
  0370f94  addi 1, 1, 688
  0370f98  blr
