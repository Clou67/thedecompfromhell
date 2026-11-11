# game/update/moby1046.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1046_0019d958:   # 0x19d958, 0x450 bytes
  019d958  stdu 1, -336(1)
  019d95c  mflr 0
  019d960  std 0, 352(1)
  019d964  stfd 28, 304(1)
  019d968  stfd 29, 312(1)
  019d96c  stfd 30, 320(1)
  019d970  stfd 31, 328(1)
  019d974  std 29, 280(1)
  019d978  li 3, 21
  019d97c  lis 29, 26
  019d980  std 31, 296(1)
  019d984  std 30, 288(1)
  019d988  std 28, 272(1)
  019d98c  std 27, 264(1)
  019d990  addi 29, 29, -9916
  019d994  bl 0x685c4
  019d998  nop
  019d99c  std 3, 232(1)
  019d9a0  lis 9, 0
  019d9a4  li 3, 0
  019d9a8  li 4, 0
  019d9ac  li 5, 1
  019d9b0  li 6, 1
  019d9b4  li 7, 1
  019d9b8  li 8, 0
  019d9bc  ori 9, 9, 65424
  019d9c0  bl 0x502fd4
  019d9c4  nop
  019d9c8  std 3, 240(1)
  019d9cc  li 3, 0
  019d9d0  li 4, 0
  019d9d4  li 5, 0
  019d9d8  li 6, 0
  019d9dc  li 7, 0
  019d9e0  li 8, 0
  019d9e4  bl 0x502f08
  019d9e8  nop
  019d9ec  std 3, 224(1)
  019d9f0  li 4, 2
  019d9f4  li 3, 0
  019d9f8  li 5, 0
  019d9fc  li 6, 1
  019da00  li 7, 128
  019da04  bl 0x502ea8
  019da08  nop
  019da0c  std 3, 248(1)
  019da10  lis 3, 230
  019da14  lfs 1, 0(29)
  019da18  lfs 29, -160(3)
  019da1c  fadds 1, 29, 1
  019da20  stfs 1, -160(3)
  019da24  lfs 31, 4(29)
  019da28  fcmpu 0, 1, 31
  019da2c  cror 6, 0, 2
  019da30  bt 6, 0x19da40
  019da34  fsubs 1, 1, 31
  019da38  lis 3, 230
  019da3c  stfs 1, -160(3)
  019da40  li 3, 1
  019da44  lfs 30, 8(29)
  019da48  li 4, 5
  019da4c  li 10, 2
  019da50  li 5, 1
  019da54  li 6, 3
  019da58  fadds 29, 29, 30
  019da5c  li 7, 0
  019da60  li 8, 0
  019da64  li 9, 1
  019da68  bl 0x502f7c
  019da6c  nop
  019da70  ori 4, 3, 0
  019da74  li 3, 22
  019da78  bl 0x174f80
  019da7c  nop
  019da80  lis 31, 150
  019da84  li 4, 1
  019da88  addic 31, 31, 27352
  019da8c  li 5, 1
  019da90  lwz 3, 8(31)
  019da94  srawi 3, 3, 13
  019da98  bl 0x502ffc
  019da9c  nop
  019daa0  ori 4, 3, 0
  019daa4  li 3, 33
  019daa8  bl 0x174f80
  019daac  nop
  019dab0  li 27, 1
  019dab4  lis 3, 230
  019dab8  lis 4, 116
  019dabc  lfs 2, -156(3)
  019dac0  lfs 1, 912(4)
  019dac4  fadds 1, 2, 1
  019dac8  fcmpu 0, 1, 31
  019dacc  stfs 1, -156(3)
  019dad0  cror 6, 0, 2
  019dad4  bt 6, 0x19dae4
  019dad8  fsubs 1, 1, 31
  019dadc  lis 3, 230
  019dae0  stfs 1, -156(3)
  019dae4  li 7, 0
  019dae8  ori 30, 7, 0
  019daec  lis 3, 26214
  019daf0  addic 28, 7, 1
  019daf4  ori 3, 3, 26215
  019daf8  mulhw 3, 3, 28
  019dafc  lis 6, 230
  019db00  sldi 4, 27, 8
  019db04  sldi 5, 27, 6
  019db08  addic 6, 6, 4928
  019db0c  addc 4, 4, 5
  019db10  addc 5, 30, 6
  019db14  srawi 3, 3, 3
  019db18  addc 5, 5, 4
  019db1c  srwi 7, 3, 31
  019db20  clrldi 5, 5, 32
  019db24  addc 3, 3, 7
  019db28  sldi 7, 3, 4
  019db2c  sldi 3, 3, 2
  019db30  lfs 1, 0(5)
  019db34  addc 3, 7, 3
  019db38  stfs 1, 112(1)
  019db3c  lfs 1, 4(5)
  019db40  subc 3, 28, 3
  019db44  stfs 1, 116(1)
  019db48  sldi 3, 3, 4
  019db4c  lfs 1, 8(5)
  019db50  lis 8, 64
  019db54  stfs 1, 120(1)
  019db58  lfs 1, 12(5)
  019db5c  addc 5, 3, 6
  019db60  stfs 1, 124(1)
  019db64  addc 5, 5, 4
  019db68  addic 6, 6, -320
  019db6c  clrldi 5, 5, 32
  019db70  addc 7, 30, 6
  019db74  addc 3, 3, 6
  019db78  addc 7, 7, 4
  019db7c  addc 3, 3, 4
  019db80  lfs 1, 0(5)
  019db84  clrldi 7, 7, 32
  019db88  stfs 1, 128(1)
  019db8c  lfs 1, 4(5)
  019db90  clrldi 3, 3, 32
  019db94  lis 4, 230
  019db98  stfs 1, 132(1)
  019db9c  lfs 1, 8(5)
  019dba0  slwi 6, 27, 1
  019dba4  addic 4, 4, 4904
  019dba8  stfs 1, 136(1)
  019dbac  lfs 1, 12(5)
  019dbb0  extsw 6, 6
  019dbb4  ori 5, 1, 0
  019dbb8  stfs 1, 140(1)
  019dbbc  lfs 1, 0(7)
  019dbc0  stfs 1, 144(1)
  019dbc4  lfs 1, 4(7)
  019dbc8  stfs 1, 148(1)
  019dbcc  lfs 1, 8(7)
  019dbd0  stfs 1, 152(1)
  019dbd4  lfs 1, 12(7)
  019dbd8  stfs 1, 156(1)
  019dbdc  lfs 1, 0(3)
  019dbe0  stfs 1, 160(1)
  019dbe4  lfs 1, 4(3)
  019dbe8  stfs 1, 164(1)
  019dbec  lfs 1, 8(3)
  019dbf0  lhzx 7, 4, 6
  019dbf4  stfs 1, 168(1)
  019dbf8  ori 4, 8, 16448
  019dbfc  lfs 1, 12(3)
  019dc00  li 8, 2
  019dc04  lis 3, 230
  019dc08  extsh 7, 7
  019dc0c  stfs 1, 172(1)
  019dc10  addic 3, 3, 4902
  019dc14  mtctr 8
  019dc18  li 9, 0
  019dc1c  li 8, 0
  019dc20  subc 9, 7, 9
  019dc24  subc 8, 8, 7
  019dc28  sradi 9, 9, 63
  019dc2c  li 10, 64
  019dc30  and 8, 9, 8
  019dc34  li 11, 64
  019dc38  addc 7, 7, 8
  019dc3c  subc 8, 10, 7
  019dc40  subc 9, 11, 7
  019dc44  sradi 8, 8, 63
  019dc48  and 8, 8, 9
  019dc4c  lhzx 9, 3, 6
  019dc50  addc 7, 7, 8
  019dc54  ori 8, 4, 0
  019dc58  rlwimi 8, 7, 24, 0, 7
  019dc5c  extsh 7, 9
  019dc60  stw 8, 176(5)
  019dc64  stw 8, 180(5)
  019dc68  addic 5, 5, 8
  019dc6c  bdnz 0x19dc18
  019dc70  addic 3, 27, -1
  019dc74  cmpwi 1, 27, 9
  019dc78  cmpwi 3, 0
  019dc7c  bf 2, 0x19dc94
  019dc80  lis 3, 8256
  019dc84  ori 3, 3, 16448
  019dc88  stw 3, 188(1)
  019dc8c  stw 3, 184(1)
  019dc90  b 0x19dca0
  019dc94  bf 6, 0x19dca0
  019dc98  stw 4, 180(1)
  019dc9c  stw 4, 176(1)
  019dca0  stfs 29, 192(1)
  019dca4  stfs 2, 196(1)
  019dca8  fsubs 1, 29, 30
  019dcac  stfs 29, 200(1)
  019dcb0  lis 4, 161
  019dcb4  lfs 3, 12(29)
  019dcb8  addic 3, 1, 112
  019dcbc  addic 6, 4, 24396
  019dcc0  stfs 2, 212(1)
  019dcc4  fadds 28, 2, 3
  019dcc8  li 4, 0
  019dccc  li 5, 0
  019dcd0  li 7, 9
  019dcd4  stfs 1, 208(1)
  019dcd8  stfs 1, 216(1)
  019dcdc  lwz 6, 28(6)
  019dce0  stfs 28, 204(1)
  019dce4  stfs 28, 220(1)
  019dce8  bl 0x72280
  019dcec  nop
  019dcf0  cmpwi 28, 20
  019dcf4  addic 30, 30, 16
  019dcf8  fmr 2, 28
  019dcfc  ori 7, 28, 0
  019dd00  bt 0, 0x19daec
  019dd04  addic 27, 27, 1
  019dd08  fadds 29, 29, 30
  019dd0c  cmpwi 27, 10
  019dd10  bt 0, 0x19dab4
  019dd14  lwz 3, 8(31)
  019dd18  li 4, 1
  019dd1c  li 5, 0
  019dd20  srawi 3, 3, 13
  019dd24  bl 0x502ffc
  019dd28  nop
  019dd2c  ori 4, 3, 0
  019dd30  li 3, 33
  019dd34  bl 0x174f80
  019dd38  nop
  019dd3c  li 3, 1
  019dd40  li 4, 5
  019dd44  li 8, 0
  019dd48  li 10, 2
  019dd4c  li 5, 96
  019dd50  li 6, 3
  019dd54  li 7, 0
  019dd58  li 9, 1
  019dd5c  bl 0x502f7c
  019dd60  nop
  019dd64  ori 4, 3, 0
  019dd68  li 3, 22
  019dd6c  bl 0x174f80
  019dd70  nop
  019dd74  ld 0, 352(1)
  019dd78  mtlr 0
  019dd7c  lfd 28, 304(1)
  019dd80  lfd 29, 312(1)
  019dd84  lfd 30, 320(1)
  019dd88  lfd 31, 328(1)
  019dd8c  ld 27, 264(1)
  019dd90  ld 28, 272(1)
  019dd94  ld 29, 280(1)
  019dd98  ld 30, 288(1)
  019dd9c  ld 31, 296(1)
  019dda0  addi 1, 1, 336
  019dda4  blr

M1046_0019dda8:   # 0x19dda8, 0x14 bytes
  019dda8  lis 3, 116
  019ddac  lis 4, 1
  019ddb0  addic 3, 3, 1252
  019ddb4  stw 4, 72(3)
  019ddb8  blr

Spawn_Moby1046:   # 0x19ddd0, 0x19c bytes
  019ddd0  stdu 1, -192(1)
  019ddd4  mflr 0
  019ddd8  std 0, 208(1)
  019dddc  stfd 27, 152(1)
  019dde0  stfd 28, 160(1)
  019dde4  stfd 29, 168(1)
  019dde8  stfd 30, 176(1)
  019ddec  stfd 31, 184(1)
  019ddf0  std 29, 128(1)
  019ddf4  ori 29, 3, 0
  019ddf8  li 3, 1046
  019ddfc  fmr 31, 5
  019de00  std 31, 144(1)
  019de04  fmr 30, 4
  019de08  ori 31, 9, 0
  019de0c  std 30, 136(1)
  019de10  fmr 29, 3
  019de14  ori 30, 4, 0
  019de18  fmr 28, 2
  019de1c  std 28, 120(1)
  019de20  fmr 27, 1
  019de24  bl 0xefa28
  019de28  nop
  019de2c  ori 28, 3, 0
  019de30  cmpwi 28, 0
  019de34  bt 2, 0x19df34
  019de38  li 3, 255
  019de3c  li 4, 1
  019de40  stb 3, 48(28)
  019de44  sth 3, 50(28)
  019de48  stb 4, 49(28)
  019de4c  lfs 1, 0(30)
  019de50  lis 4, 149
  019de54  lwz 3, 120(28)
  019de58  stfs 1, 16(28)
  019de5c  lfs 1, 4(30)
  019de60  addic 4, 4, 5056
  019de64  stfs 1, 20(28)
  019de68  lfs 1, 8(30)
  019de6c  stfs 1, 24(28)
  019de70  lfs 1, 12(30)
  019de74  stfs 1, 28(28)
  019de78  stw 29, 20(3)
  019de7c  stfs 27, 0(3)
  019de80  stfs 28, 4(3)
  019de84  stfs 29, 16(3)
  019de88  stfs 30, 12(3)
  019de8c  stfs 27, 8(3)
  019de90  stw 31, 24(3)
  019de94  stfs 31, 28(3)
  019de98  lhz 3, 52(28)
  019de9c  lfs 1, 16(28)
  019dea0  ori 3, 3, 512
  019dea4  sth 3, 52(28)
  019dea8  lfs 2, 20(28)
  019deac  lfs 3, 324(4)
  019deb0  lfs 4, 320(4)
  019deb4  fsubs 2, 2, 3
  019deb8  fsubs 1, 1, 4
  019debc  lis 3, 26
  019dec0  vspltisw 2, -1
  019dec4  li 6, 8
  019dec8  addi 5, 3, -8768
  019decc  lis 7, 114
  019ded0  li 8, -3056
  019ded4  fmuls 2, 2, 2
  019ded8  vslw 2, 2, 2
  019dedc  li 9, 360
  019dee0  ori 3, 28, 0
  019dee4  fmadds 1, 1, 1, 2
  019dee8  lfs 2, 0(5)
  019deec  lfs 3, 4(5)
  019def0  fsqrts 1, 1
  019def4  fnmsubs 1, 1, 2, 3
  019def8  stfs 1, 352(4)
  019defc  <unknown>
  019df00  <unknown>
  019df04  vspltw 3, 3, 0
  019df08  vmaddfp 2, 4, 3, 2
  019df0c  vctsxs 2, 2, 0
  019df10  vspltw 2, 2, 0
  019df14  stvewx 2, 9, 4
  019df18  bl 0xf31a8
  019df1c  nop
  019df20  li 3, 0
  019df24  li 4, 0
  019df28  ori 5, 28, 0
  019df2c  bl 0x15d12c
  019df30  nop
  019df34  ori 3, 28, 0
  019df38  ld 0, 208(1)
  019df3c  mtlr 0
  019df40  lfd 27, 152(1)
  019df44  lfd 28, 160(1)
  019df48  lfd 29, 168(1)
  019df4c  lfd 30, 176(1)
  019df50  lfd 31, 184(1)
  019df54  ld 28, 120(1)
  019df58  ld 29, 128(1)
  019df5c  ld 30, 136(1)
  019df60  ld 31, 144(1)
  019df64  addi 1, 1, 192
  019df68  blr

M1046_0019e010:   # 0x19e010, 0x824 bytes
  019e010  stdu 1, -784(1)
  019e014  mflr 0
  019e018  std 0, 800(1)
  019e01c  stfd 26, 736(1)
  019e020  stfd 27, 744(1)
  019e024  stfd 28, 752(1)
  019e028  stfd 29, 760(1)
  019e02c  stfd 30, 768(1)
  019e030  stfd 31, 776(1)
  019e034  addi 0, 1, 480
  019e038  stvx 20, 0, 0
  019e03c  addic 0, 0, 16
  019e040  stvx 21, 0, 0
  019e044  addic 0, 0, 16
  019e048  stvx 22, 0, 0
  019e04c  addic 0, 0, 16
  019e050  stvx 23, 0, 0
  019e054  addic 0, 0, 16
  019e058  stvx 24, 0, 0
  019e05c  addic 0, 0, 16
  019e060  stvx 25, 0, 0
  019e064  addic 0, 0, 16
  019e068  stvx 26, 0, 0
  019e06c  addic 0, 0, 16
  019e070  stvx 27, 0, 0
  019e074  addic 0, 0, 16
  019e078  stvx 28, 0, 0
  019e07c  addic 0, 0, 16
  019e080  stvx 29, 0, 0
  019e084  addic 0, 0, 16
  019e088  stvx 30, 0, 0
  019e08c  addic 0, 0, 16
  019e090  stvx 31, 0, 0
  019e094  std 31, 728(1)
  019e098  ori 31, 3, 0
  019e09c  std 29, 712(1)
  019e0a0  lis 3, 26
  019e0a4  std 26, 688(1)
  019e0a8  li 29, 128
  019e0ac  addi 26, 3, -8336
  019e0b0  std 28, 704(1)
  019e0b4  lbz 3, 35(31)
  019e0b8  lwz 28, 120(31)
  019e0bc  addic 3, 3, 1
  019e0c0  std 27, 696(1)
  019e0c4  sldi 4, 3, 4
  019e0c8  addc 27, 3, 4
  019e0cc  lwz 3, 24(28)
  019e0d0  addc 4, 27, 27
  019e0d4  extsw 3, 3
  019e0d8  std 30, 720(1)
  019e0dc  std 25, 680(1)
  019e0e0  std 24, 672(1)
  019e0e4  addc 27, 27, 4
  019e0e8  bl 0x685c4
  019e0ec  nop
  019e0f0  ori 30, 3, 0
  019e0f4  lis 9, 0
  019e0f8  li 3, 0
  019e0fc  ori 9, 9, 65424
  019e100  li 4, 0
  019e104  li 5, 1
  019e108  li 6, 1
  019e10c  li 7, 1
  019e110  li 8, 0
  019e114  bl 0x502fd4
  019e118  nop
  019e11c  ori 25, 3, 0
  019e120  li 3, 0
  019e124  li 4, 1
  019e128  li 5, 0
  019e12c  li 6, 0
  019e130  li 7, 0
  019e134  li 8, 0
  019e138  bl 0x502f08
  019e13c  nop
  019e140  ori 24, 3, 0
  019e144  li 3, 0
  019e148  li 4, 2
  019e14c  li 5, 0
  019e150  li 6, 1
  019e154  li 7, 128
  019e158  bl 0x502ea8
  019e15c  nop
  019e160  std 30, 232(1)
  019e164  li 4, 4
  019e168  std 25, 240(1)
  019e16c  li 30, 0
  019e170  std 24, 224(1)
  019e174  std 3, 248(1)
  019e178  lfs 31, 0(26)
  019e17c  li 3, 448
  019e180  <unknown>
  019e184  vspltisw 20, 0
  019e188  vspltw 2, 2, 0
  019e18c  li 4, 432
  019e190  lfs 29, 4(26)
  019e194  fmr 27, 31
  019e198  stvx 20, 3, 1
  019e19c  stvx 2, 4, 1
  019e1a0  slwi 3, 29, 16
  019e1a4  vspltisw 4, -1
  019e1a8  li 4, 8
  019e1ac  rlwimi 3, 29, 8, 16, 23
  019e1b0  lis 5, 26
  019e1b4  rlwimi 3, 27, 16, 2, 7
  019e1b8  addi 7, 4, 16
  019e1bc  vslw 4, 4, 4
  019e1c0  ori 3, 3, 128
  019e1c4  <unknown>
  019e1c8  addi 25, 5, -8336
  019e1cc  li 6, 8
  019e1d0  li 26, 16
  019e1d4  stw 3, 188(1)
  019e1d8  stw 3, 184(1)
  019e1dc  li 4, 12
  019e1e0  stw 3, 180(1)
  019e1e4  lis 5, 161
  019e1e8  stw 3, 176(1)
  019e1ec  <unknown>
  019e1f0  lfs 1, 8(25)
  019e1f4  addi 3, 26, 16
  019e1f8  vor 2, 2, 3
  019e1fc  <unknown>
  019e200  lfs 2, 8(28)
  019e204  vspltw 3, 3, 0
  019e208  lfs 4, 12(25)
  019e20c  fnmsubs 5, 31, 1, 2
  019e210  fmuls 3, 2, 31
  019e214  vmaddfp 4, 2, 20, 4
  019e218  vnmsubfp 30, 20, 3, 2
  019e21c  fsub 1, 2, 1
  019e220  fmr 2, 4
  019e224  vcmpgtfp 2, 3, 2
  019e228  <unknown>
  019e22c  <unknown>
  019e230  li 3, 432
  019e234  lfs 30, 16(28)
  019e238  <unknown>
  019e23c  vor 31, 5, 6
  019e240  vspltw 3, 3, 0
  019e244  lvx 28, 3, 1
  019e248  lwz 3, 1808(5)
  019e24c  fnmsubs 26, 31, 2, 29
  019e250  vnmsubfp 29, 20, 3, 28
  019e254  extsw 3, 3
  019e258  vsel 30, 30, 4, 2
  019e25c  fsel 28, 1, 5, 3
  019e260  bl 0x502730
  019e264  nop
  019e268  lfs 2, 16(25)
  019e26c  addic 4, 1, 400
  019e270  fmadds 2, 31, 2, 2
  019e274  fdivs 1, 1, 2
  019e278  bl 0x5026dc
  019e27c  nop
  019e280  clrlwi 3, 30, 31
  019e284  li 4, 0
  019e288  li 5, 1
  019e28c  subc 3, 4, 3
  019e290  li 4, -1
  019e294  cntlzw 3, 3
  019e298  subc 4, 4, 5
  019e29c  sldi 3, 3, 58
  019e2a0  sradi 3, 3, 63
  019e2a4  and 3, 3, 4
  019e2a8  addc 3, 5, 3
  019e2ac  extsw 3, 3
  019e2b0  addic 30, 30, 1
  019e2b4  li 4, 5
  019e2b8  std 3, 464(1)
  019e2bc  li 5, 5
  019e2c0  extsw 3, 30
  019e2c4  subc 6, 3, 4
  019e2c8  subc 3, 3, 5
  019e2cc  sradi 3, 3, 63
  019e2d0  and 3, 3, 6
  019e2d4  addc 3, 4, 3
  019e2d8  lfd 2, 464(1)
  019e2dc  fcfid 2, 2
  019e2e0  frsp 2, 2
  019e2e4  fmuls 1, 1, 2
  019e2e8  stfs 1, 192(1)
  019e2ec  stfs 1, 208(1)
  019e2f0  bl 0x502730
  019e2f4  nop
  019e2f8  lfs 2, 192(1)
  019e2fc  li 3, 192
  019e300  li 4, 208
  019e304  fadds 1, 2, 1
  019e308  lis 5, 16256
  019e30c  li 6, 24
  019e310  lvx 2, 3, 1
  019e314  li 7, 24
  019e318  <unknown>
  019e31c  li 3, 20
  019e320  li 8, 128
  019e324  li 9, 160
  019e328  vsubfp 8, 14, 30
  019e32c  li 10, 64
  019e330  stfs 1, 200(1)
  019e334  lvx 3, 4, 1
  019e338  stfs 1, 216(1)
  019e33c  li 4, 112
  019e340  stfs 27, 196(1)
  019e344  stfs 27, 204(1)
  019e348  stw 5, 212(1)
  019e34c  stw 5, 220(1)
  019e350  <unknown>
  019e354  li 5, 20
  019e358  <unknown>
  019e35c  li 3, 136
  019e360  vspltw 4, 4, 0
  019e364  li 6, 168
  019e368  vspltw 5, 5, 0
  019e36c  <unknown>
  019e370  lfs 2, 20(25)
  019e374  li 7, 32
  019e378  vmaddfp 7, 29, 31, 6
  019e37c  lfs 3, 24(25)
  019e380  vnmsubfp 29, 20, 4, 5
  019e384  vspltw 9, 6, 0
  019e388  lvx 4, 8, 1
  019e38c  lvx 5, 9, 1
  019e390  li 9, 48
  019e394  <unknown>
  019e398  li 8, 80
  019e39c  fnmsubs 3, 31, 2, 3
  019e3a0  li 5, 144
  019e3a4  vspltw 10, 7, 0
  019e3a8  vnmsubfp 11, 30, 29, 14
  019e3ac  stvewx 10, 3, 1
  019e3b0  lvx 10, 4, 1
  019e3b4  li 3, 256
  019e3b8  stvewx 9, 6, 1
  019e3bc  li 4, 272
  019e3c0  lvx 9, 7, 25
  019e3c4  li 6, 304
  019e3c8  lvx 12, 9, 25
  019e3cc  li 7, 448
  019e3d0  lvx 13, 10, 25
  019e3d4  lvx 0, 8, 25
  019e3d8  vperm 11, 11, 1, 13
  019e3dc  vperm 4, 7, 4, 13
  019e3e0  vperm 10, 10, 7, 9
  019e3e4  vperm 7, 8, 1, 13
  019e3e8  vperm 5, 6, 5, 13
  019e3ec  lvx 15, 5, 1
  019e3f0  vperm 4, 11, 4, 0
  019e3f4  li 5, 288
  019e3f8  vperm 8, 15, 6, 9
  019e3fc  stfs 1, 416(1)
  019e400  vperm 5, 7, 5, 0
  019e404  stvx 10, 3, 1
  019e408  lfs 4, 16(31)
  019e40c  li 3, 96
  019e410  stvx 4, 4, 1
  019e414  vspltisw 4, -1
  019e418  stvx 8, 5, 1
  019e41c  li 4, 176
  019e420  stvx 5, 6, 1
  019e424  li 5, 224
  019e428  lfs 2, 20(31)
  019e42c  li 0, 416
  019e430  stfs 1, 420(1)
  019e434  vslw 4, 4, 4
  019e438  lvx 5, 7, 1
  019e43c  li 6, 352
  019e440  stfs 1, 424(1)
  019e444  li 7, 240
  019e448  stfs 1, 428(1)
  019e44c  li 8, 368
  019e450  vmaddfp 29, 30, 29, 4
  019e454  lfs 6, 24(31)
  019e458  lvx 4, 3, 25
  019e45c  lvx 7, 1, 0
  019e460  li 3, 320
  019e464  lvx 8, 4, 1
  019e468  vperm 5, 7, 5, 4
  019e46c  li 4, 336
  019e470  vperm 4, 7, 28, 4
  019e474  fnmsubs 1, 28, 3, 4
  019e478  fmadds 3, 26, 30, 6
  019e47c  li 10, 132
  019e480  vperm 2, 5, 2, 12
  019e484  vperm 3, 4, 3, 12
  019e488  lvx 4, 5, 1
  019e48c  li 5, 384
  019e490  stvx 8, 3, 1
  019e494  li 3, 112
  019e498  lvx 5, 7, 1
  019e49c  stvx 2, 4, 1
  019e4a0  stvx 3, 6, 1
  019e4a4  li 4, 264
  019e4a8  stvx 4, 8, 1
  019e4ac  li 6, 116
  019e4b0  stvx 5, 5, 1
  019e4b4  li 8, 128
  019e4b8  <unknown>
  019e4bc  li 5, 124
  019e4c0  li 3, 280
  019e4c4  fsubs 4, 4, 28
  019e4c8  vspltw 2, 2, 0
  019e4cc  li 7, 136
  019e4d0  li 9, 140
  019e4d4  fmr 5, 2
  019e4d8  li 12, 144
  019e4dc  li 24, 148
  019e4e0  vsubfp 2, 6, 2
  019e4e4  li 11, 152
  019e4e8  lis 26, 161
  019e4ec  addic 26, 26, 24396
  019e4f0  vspltw 2, 2, 0
  019e4f4  stvewx 2, 3, 1
  019e4f8  stvewx 2, 4, 1
  019e4fc  <unknown>
  019e500  lfs 30, 116(25)
  019e504  lfs 28, 120(25)
  019e508  <unknown>
  019e50c  <unknown>
  019e510  <unknown>
  019e514  <unknown>
  019e518  <unknown>
  019e51c  <unknown>
  019e520  <unknown>
  019e524  <unknown>
  019e528  vspltw 31, 31, 0
  019e52c  vspltw 21, 21, 0
  019e530  vspltw 23, 23, 0
  019e534  vspltw 24, 24, 0
  019e538  vspltw 28, 28, 0
  019e53c  vspltw 27, 27, 0
  019e540  vspltw 26, 26, 0
  019e544  vspltw 25, 25, 0
  019e548  lfs 26, 152(25)
  019e54c  vspltw 22, 22, 0
  019e550  vaddfp 2, 31, 21
  019e554  vspltisw 8, -1
  019e558  vsubfp 3, 23, 31
  019e55c  vspltisw 9, -1
  019e560  vsubfp 4, 24, 31
  019e564  vspltisw 11, -1
  019e568  vspltw 12, 1, 0
  019e56c  li 8, 164
  019e570  vspltw 13, 14, 0
  019e574  li 9, 132
  019e578  lfs 7, 140(1)
  019e57c  li 10, 160
  019e580  lfs 8, 172(1)
  019e584  li 11, 128
  019e588  lwz 6, 28(26)
  019e58c  addic 3, 1, 112
  019e590  vsubfp 6, 23, 2
  019e594  vsubfp 7, 24, 2
  019e598  vcmpgtfp 5, 3, 31
  019e59c  vsel 3, 3, 31, 5
  019e5a0  vslw 5, 8, 8
  019e5a4  vcmpgtfp 8, 3, 4
  019e5a8  vsel 3, 4, 3, 8
  019e5ac  vspltisw 8, -1
  019e5b0  vcmpgtfp 10, 6, 2
  019e5b4  vsel 2, 6, 2, 10
  019e5b8  vslw 8, 8, 8
  019e5bc  vspltisw 10, -1
  019e5c0  vcmpgtfp 6, 2, 7
  019e5c4  vsel 2, 7, 2, 6
  019e5c8  vslw 6, 9, 9
  019e5cc  vspltisw 7, -1
  019e5d0  vslw 10, 10, 10
  019e5d4  vmaddfp 4, 2, 2, 5
  019e5d8  vspltisw 5, -1
  019e5dc  vslw 7, 7, 7
  019e5e0  vspltisw 9, -1
  019e5e4  vslw 5, 5, 5
  019e5e8  vslw 9, 9, 9
  019e5ec  vmaddfp 5, 3, 3, 5
  019e5f0  vmaddfp 6, 4, 2, 6
  019e5f4  li 4, 0
  019e5f8  li 5, 1
  019e5fc  li 7, 9
  019e600  vmaddfp 8, 5, 3, 8
  019e604  vmaddfp 7, 4, 6, 7
  019e608  vmaddfp 2, 6, 28, 2
  019e60c  vslw 6, 11, 11
  019e610  vspltisw 11, -1
  019e614  vslw 11, 11, 11
  019e618  vmaddfp 10, 5, 8, 10
  019e61c  vmaddfp 3, 8, 28, 3
  019e620  vmaddfp 8, 4, 7, 9
  019e624  vmaddfp 2, 7, 27, 2
  019e628  vspltisw 7, -1
  019e62c  vslw 7, 7, 7
  019e630  vmaddfp 9, 5, 10, 11
  019e634  vmaddfp 3, 10, 27, 3
  019e638  vmaddfp 4, 4, 8, 6
  019e63c  vmaddfp 2, 8, 26, 2
  019e640  vmaddfp 5, 5, 9, 7
  019e644  vmaddfp 3, 9, 26, 3
  019e648  vmaddfp 2, 4, 25, 2
  019e64c  vmaddfp 3, 5, 25, 3
  019e650  vmaddfp 4, 2, 29, 13
  019e654  vmaddfp 2, 2, 30, 13
  019e658  vmaddfp 5, 3, 29, 12
  019e65c  vmaddfp 3, 3, 30, 12
  019e660  vspltw 4, 4, 0
  019e664  vspltw 2, 2, 0
  019e668  vspltw 5, 5, 0
  019e66c  vspltw 3, 3, 0
  019e670  stvewx 3, 8, 1
  019e674  stvewx 5, 9, 1
  019e678  stvewx 2, 10, 1
  019e67c  stvewx 4, 11, 1
  019e680  stfs 8, 156(1)
  019e684  stfs 6, 152(1)
  019e688  stfs 5, 148(1)
  019e68c  stfs 4, 144(1)
  019e690  stfs 7, 124(1)
  019e694  stfs 3, 120(1)
  019e698  stfs 2, 116(1)
  019e69c  stfs 1, 112(1)
  019e6a0  bl 0x72280
  019e6a4  nop
  019e6a8  lfs 1, 272(1)
  019e6ac  addic 3, 1, 256
  019e6b0  lfs 2, 276(1)
  019e6b4  li 4, 0
  019e6b8  stfs 1, 256(1)
  019e6bc  li 5, 1
  019e6c0  lfs 1, 280(1)
  019e6c4  li 7, 9
  019e6c8  stfs 2, 260(1)
  019e6cc  lfs 2, 284(1)
  019e6d0  stfs 1, 264(1)
  019e6d4  lfs 1, 304(1)
  019e6d8  stfs 2, 268(1)
  019e6dc  lfs 2, 308(1)
  019e6e0  stfs 1, 288(1)
  019e6e4  lfs 1, 312(1)
  019e6e8  stfs 2, 292(1)
  019e6ec  lfs 2, 316(1)
  019e6f0  stfs 1, 296(1)
  019e6f4  stfs 2, 300(1)
  019e6f8  lfs 1, 160(1)
  019e6fc  lfs 2, 164(1)
  019e700  stfs 1, 304(1)
  019e704  lfs 1, 128(1)
  019e708  stfs 2, 308(1)
  019e70c  lfs 2, 132(1)
  019e710  stfs 1, 272(1)
  019e714  lwz 6, 28(26)
  019e718  stfs 2, 276(1)
  019e71c  bl 0x72280
  019e720  nop
  019e724  fadds 30, 30, 26
  019e728  li 3, 20
  019e72c  lfs 1, 128(1)
  019e730  lfs 2, 132(1)
  019e734  li 4, 16
  019e738  lfs 3, 136(1)
  019e73c  vaddfp 31, 31, 22
  019e740  lfs 4, 160(1)
  019e744  <unknown>
  019e748  lfs 5, 164(1)
  019e74c  lfs 6, 168(1)
  019e750  <unknown>
  019e754  fcmpu 0, 30, 28
  019e758  bt 0, 0x19e550
  019e75c  lis 3, 26
  019e760  li 4, 156
  019e764  addi 3, 3, -8336
  019e768  addic 29, 29, -11
  019e76c  clrlwi 29, 29, 24
  019e770  lfs 1, 156(3)
  019e774  <unknown>
  019e778  fadds 31, 31, 1
  019e77c  vspltw 2, 2, 0
  019e780  vaddfp 20, 20, 2
  019e784  fcmpu 0, 31, 29
  019e788  bt 0, 0x19e1a0
  019e78c  li 0, 480
  019e790  lvx 20, 1, 0
  019e794  addic 0, 0, 16
  019e798  lvx 21, 1, 0
  019e79c  addic 0, 0, 16
  019e7a0  lvx 22, 1, 0
  019e7a4  addic 0, 0, 16
  019e7a8  lvx 23, 1, 0
  019e7ac  addic 0, 0, 16
  019e7b0  lvx 24, 1, 0
  019e7b4  addic 0, 0, 16
  019e7b8  lvx 25, 1, 0
  019e7bc  addic 0, 0, 16
  019e7c0  lvx 26, 1, 0
  019e7c4  addic 0, 0, 16
  019e7c8  lvx 27, 1, 0
  019e7cc  addic 0, 0, 16
  019e7d0  lvx 28, 1, 0
  019e7d4  addic 0, 0, 16
  019e7d8  lvx 29, 1, 0
  019e7dc  addic 0, 0, 16
  019e7e0  lvx 30, 1, 0
  019e7e4  addic 0, 0, 16
  019e7e8  lvx 31, 1, 0
  019e7ec  ld 0, 800(1)
  019e7f0  mtlr 0
  019e7f4  lfd 26, 736(1)
  019e7f8  lfd 27, 744(1)
  019e7fc  lfd 28, 752(1)
  019e800  lfd 29, 760(1)
  019e804  lfd 30, 768(1)
  019e808  lfd 31, 776(1)
  019e80c  ld 24, 672(1)
  019e810  ld 25, 680(1)
  019e814  ld 26, 688(1)
  019e818  ld 27, 696(1)
  019e81c  ld 28, 704(1)
  019e820  ld 29, 712(1)
  019e824  ld 30, 720(1)
  019e828  ld 31, 728(1)
  019e82c  addi 1, 1, 784
  019e830  blr

M1046_0019e848:   # 0x19e848, 0x1b8 bytes
  019e848  stdu 1, -160(1)
  019e84c  mflr 0
  019e850  std 0, 176(1)
  019e854  stfd 31, 152(1)
  019e858  lis 6, 26
  019e85c  ori 7, 5, 0
  019e860  lfs 6, 24(4)
  019e864  addi 6, 6, -6092
  019e868  ori 5, 3, 0
  019e86c  lfs 1, 0(6)
  019e870  lfs 2, 16(7)
  019e874  lfs 7, 24(3)
  019e878  fmadds 2, 2, 1, 6
  019e87c  ori 3, 7, 0
  019e880  fcmpu 0, 7, 2
  019e884  cror 6, 1, 2
  019e888  bt 6, 0x19e9ec
  019e88c  lfs 3, 20(4)
  019e890  lfs 2, 20(5)
  019e894  lfs 5, 16(4)
  019e898  fsubs 8, 3, 2
  019e89c  lfs 4, 16(5)
  019e8a0  fsubs 9, 5, 4
  019e8a4  fmuls 8, 8, 8
  019e8a8  fmadds 8, 9, 9, 8
  019e8ac  fmr 9, 1
  019e8b0  lfs 1, 8(3)
  019e8b4  fsqrts 8, 8
  019e8b8  fsubs 8, 8, 1
  019e8bc  fabs 8, 8
  019e8c0  fcmpu 0, 8, 9
  019e8c4  cror 6, 1, 2
  019e8c8  bt 6, 0x19e9ec
  019e8cc  fmr 8, 3
  019e8d0  fsubs 3, 4, 5
  019e8d4  fsubs 4, 7, 6
  019e8d8  lis 6, 26
  019e8dc  lfs 6, 28(5)
  019e8e0  addi 6, 6, -6092
  019e8e4  stfs 6, 124(1)
  019e8e8  fsubs 5, 2, 8
  019e8ec  lfs 7, 4(6)
  019e8f0  lfs 9, 8(6)
  019e8f4  stfs 6, 140(1)
  019e8f8  fmr 6, 7
  019e8fc  fmuls 2, 5, 5
  019e900  fsubs 6, 1, 6
  019e904  fmr 1, 9
  019e908  fmadds 2, 3, 3, 2
  019e90c  fmr 7, 1
  019e910  fmadds 2, 4, 4, 2
  019e914  fsqrts 8, 2
  019e918  fdivs 6, 6, 8
  019e91c  fsub 9, 1, 8
  019e920  fsub 10, 1, 8
  019e924  fsub 11, 1, 8
  019e928  fsub 12, 8, 1
  019e92c  fsub 13, 8, 1
  019e930  fsub 0, 8, 1
  019e934  fcmpu 0, 8, 7
  019e938  fmuls 8, 3, 6
  019e93c  fmuls 31, 5, 6
  019e940  fmuls 4, 4, 6
  019e944  fsel 6, 9, 1, 8
  019e948  fsel 9, 10, 1, 31
  019e94c  fsel 10, 11, 1, 4
  019e950  fsel 6, 12, 6, 8
  019e954  fsel 8, 13, 9, 31
  019e958  fsel 4, 0, 10, 4
  019e95c  stfs 6, 128(1)
  019e960  stfs 8, 132(1)
  019e964  stfs 4, 136(1)
  019e968  bt 2, 0x19e9b8
  019e96c  frsqrte 1, 2
  019e970  lis 6, 26
  019e974  addi 6, 6, -6092
  019e978  lfs 4, 12(6)
  019e97c  lfs 6, 16(6)
  019e980  fmuls 7, 2, 1
  019e984  fmuls 8, 4, 1
  019e988  fnmsubs 7, 7, 1, 6
  019e98c  fmadds 1, 7, 8, 1
  019e990  fmuls 7, 2, 1
  019e994  fmuls 8, 4, 1
  019e998  fnmsubs 7, 7, 1, 6
  019e99c  fmadds 1, 7, 8, 1
  019e9a0  fmuls 2, 2, 1
  019e9a4  fmuls 4, 4, 1
  019e9a8  fnmsubs 2, 2, 1, 6
  019e9ac  fmadds 1, 2, 4, 1
  019e9b0  fmuls 7, 3, 1
  019e9b4  fmuls 1, 5, 1
  019e9b8  ori 6, 3, 0
  019e9bc  lis 9, 16256
  019e9c0  stfs 7, 112(1)
  019e9c4  lis 10, 1
  019e9c8  stfs 1, 116(1)
  019e9cc  ori 3, 5, 0
  019e9d0  addic 7, 1, 128
  019e9d4  lfs 1, 28(6)
  019e9d8  addic 8, 1, 112
  019e9dc  ori 5, 10, 1
  019e9e0  stw 9, 120(1)
  019e9e4  bl 0x105c08
  019e9e8  nop
  019e9ec  ld 0, 176(1)
  019e9f0  mtlr 0
  019e9f4  lfd 31, 152(1)
  019e9f8  addi 1, 1, 160
  019e9fc  blr

UpdateMoby_1046:   # 0x19ea18, 0x170 bytes
  019ea18  stdu 1, -144(1)
  019ea1c  mflr 0
  019ea20  std 0, 160(1)
  019ea24  stfd 31, 136(1)
  019ea28  std 30, 120(1)
  019ea2c  lwz 30, 120(3)
  019ea30  lis 4, 26
  019ea34  lfs 1, 8(30)
  019ea38  lfs 2, 12(30)
  019ea3c  fadds 1, 1, 2
  019ea40  std 31, 128(1)
  019ea44  addi 4, 4, -5632
  019ea48  ori 31, 3, 0
  019ea4c  stfs 1, 8(30)
  019ea50  stfs 1, 44(3)
  019ea54  lfs 1, 0(30)
  019ea58  lfs 2, 4(30)
  019ea5c  fsubs 31, 2, 1
  019ea60  lfs 2, 8(30)
  019ea64  fsubs 1, 2, 1
  019ea68  fdivs 31, 1, 31
  019ea6c  lfs 1, 0(4)
  019ea70  fcmpu 0, 31, 1
  019ea74  std 29, 112(1)
  019ea78  cror 6, 1, 2
  019ea7c  bt 6, 0x19eaa4
  019ea80  lis 3, 26
  019ea84  addi 3, 3, -5632
  019ea88  lfs 1, 4(3)
  019ea8c  lfs 2, 8(3)
  019ea90  fmuls 1, 31, 1
  019ea94  fmuls 1, 1, 2
  019ea98  bl 0x502758
  019ea9c  nop
  019eaa0  b 0x19eae8
  019eaa4  lis 3, 26
  019eaa8  addi 4, 3, -5632
  019eaac  li 3, 128
  019eab0  lfs 1, 12(4)
  019eab4  fcmpu 0, 31, 1
  019eab8  cror 6, 0, 2
  019eabc  bt 6, 0x19eae8
  019eac0  lis 3, 26
  019eac4  addi 3, 3, -5632
  019eac8  lfs 1, 16(3)
  019eacc  lfs 2, 4(3)
  019ead0  fsubs 1, 1, 31
  019ead4  lfs 3, 8(3)
  019ead8  fmuls 1, 1, 2
  019eadc  fmuls 1, 1, 3
  019eae0  bl 0x502758
  019eae4  nop
  019eae8  lis 4, 26
  019eaec  stb 3, 35(31)
  019eaf0  addi 4, 4, -5632
  019eaf4  lfs 1, 16(4)
  019eaf8  fcmpu 0, 31, 1
  019eafc  bt 0, 0x19eb10
  019eb00  ori 3, 31, 0
  019eb04  bl 0xefb38
  019eb08  nop
  019eb0c  b 0x19eb68
  019eb10  lis 3, 113
  019eb14  ori 4, 31, 0
  019eb18  addic 3, 3, -31048
  019eb1c  bl 0x6d720
  019eb20  nop
  019eb24  lis 3, 151
  019eb28  ori 4, 31, 0
  019eb2c  addic 3, 3, -25376
  019eb30  ori 5, 30, 0
  019eb34  lwz 3, 8320(3)
  019eb38  bl 0x19e848
  019eb3c  lis 3, 164
  019eb40  lwz 29, -28500(3)
  019eb44  cmpwi 29, 0
  019eb48  bt 2, 0x19eb68
  019eb4c  ori 3, 29, 0
  019eb50  ori 4, 31, 0
  019eb54  ori 5, 30, 0
  019eb58  bl 0x19e848
  019eb5c  lwz 29, 40(29)
  019eb60  cmpwi 29, 0
  019eb64  bf 2, 0x19eb4c
  019eb68  ld 0, 160(1)
  019eb6c  mtlr 0
  019eb70  lfd 31, 136(1)
  019eb74  ld 29, 112(1)
  019eb78  ld 30, 120(1)
  019eb7c  ld 31, 128(1)
  019eb80  addi 1, 1, 144
  019eb84  blr
