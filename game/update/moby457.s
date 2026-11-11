# game/update/moby457.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M457_0038c84c:   # 0x38c84c, 0x14 bytes
  038c84c  lis 3, 132
  038c850  lis 4, 1
  038c854  addic 3, 3, 8504
  038c858  stw 4, 72(3)
  038c85c  blr

FUN_0038c8a0:   # 0x38c8a0, 0x440 bytes
  038c8a0  stdu 1, -320(1)
  038c8a4  mflr 0
  038c8a8  std 0, 336(1)
  038c8ac  stfd 29, 296(1)
  038c8b0  stfd 30, 304(1)
  038c8b4  stfd 31, 312(1)
  038c8b8  std 29, 272(1)
  038c8bc  ori 29, 3, 0
  038c8c0  li 3, 457
  038c8c4  std 31, 288(1)
  038c8c8  fmr 30, 3
  038c8cc  ori 31, 5, 0
  038c8d0  std 30, 280(1)
  038c8d4  fmr 29, 2
  038c8d8  ori 30, 4, 0
  038c8dc  std 28, 264(1)
  038c8e0  std 27, 256(1)
  038c8e4  std 26, 248(1)
  038c8e8  fmr 31, 1
  038c8ec  bl 0xefa28
  038c8f0  nop
  038c8f4  ori 28, 3, 0
  038c8f8  cmpwi 28, 0
  038c8fc  bt 2, 0x38cca8
  038c900  li 4, 255
  038c904  ori 3, 29, 0
  038c908  li 5, 1
  038c90c  li 6, 0
  038c910  lwz 29, 120(28)
  038c914  stb 4, 48(28)
  038c918  sth 4, 50(28)
  038c91c  stb 5, 49(28)
  038c920  stb 6, 32(28)
  038c924  stfs 29, 72(28)
  038c928  stfs 30, 68(28)
  038c92c  stw 3, 32(29)
  038c930  lfs 1, 0(30)
  038c934  lis 3, 57
  038c938  stfs 1, 16(28)
  038c93c  lfs 1, 4(30)
  038c940  addi 3, 3, -14240
  038c944  stfs 1, 20(28)
  038c948  lfs 1, 8(30)
  038c94c  stfs 1, 24(28)
  038c950  lfs 1, 12(30)
  038c954  stfs 1, 28(28)
  038c958  lfs 1, 0(30)
  038c95c  stfs 1, 16(29)
  038c960  lfs 1, 4(30)
  038c964  stfs 1, 20(29)
  038c968  lfs 1, 8(30)
  038c96c  cmpwi 31, 0
  038c970  stfs 1, 24(29)
  038c974  lfs 1, 12(30)
  038c978  stfs 1, 28(29)
  038c97c  lfs 30, 0(3)
  038c980  stw 6, 52(29)
  038c984  stw 6, 56(29)
  038c988  stw 6, 48(29)
  038c98c  stw 31, 40(29)
  038c990  lfs 1, 4(3)
  038c994  lwz 3, 36(28)
  038c998  lfs 2, 36(3)
  038c99c  fmuls 1, 2, 1
  038c9a0  stfs 1, 44(28)
  038c9a4  bt 2, 0x38ca00
  038c9a8  lhz 4, 166(31)
  038c9ac  ori 3, 31, 0
  038c9b0  extsh 4, 4
  038c9b4  stw 4, 88(29)
  038c9b8  bl 0xfcccc
  038c9bc  nop
  038c9c0  cmpwi 3, 0
  038c9c4  lfs 1, 16(31)
  038c9c8  bt 2, 0x38c9d8
  038c9cc  lhz 4, 30(3)
  038c9d0  ori 4, 4, 128
  038c9d4  sth 4, 30(3)
  038c9d8  stfs 1, 0(29)
  038c9dc  lfs 1, 20(31)
  038c9e0  stfs 1, 4(29)
  038c9e4  lfs 1, 24(31)
  038c9e8  fadds 2, 1, 31
  038c9ec  stfs 1, 8(29)
  038c9f0  lfs 1, 28(31)
  038c9f4  stfs 31, 44(29)
  038c9f8  stfs 1, 12(29)
  038c9fc  stfs 2, 8(29)
  038ca00  lis 3, 57
  038ca04  li 4, 8
  038ca08  vspltisw 2, -1
  038ca0c  addi 31, 3, -14240
  038ca10  lis 3, 114
  038ca14  li 5, -3056
  038ca18  vslw 2, 2, 2
  038ca1c  <unknown>
  038ca20  li 27, 0
  038ca24  vspltw 3, 3, 0
  038ca28  <unknown>
  038ca2c  li 3, 36
  038ca30  vmaddfp 2, 4, 3, 2
  038ca34  vctsxs 2, 2, 0
  038ca38  vspltw 2, 2, 0
  038ca3c  stvewx 2, 3, 29
  038ca40  stw 27, 68(29)
  038ca44  lfs 31, 12(31)
  038ca48  lfs 29, 16(31)
  038ca4c  fmr 1, 31
  038ca50  fmr 2, 29
  038ca54  bl 0xfcbe8
  038ca58  nop
  038ca5c  stfs 1, 72(29)
  038ca60  fmr 2, 29
  038ca64  fmr 1, 31
  038ca68  bl 0xfcbe8
  038ca6c  nop
  038ca70  lis 26, 114
  038ca74  stfs 1, 76(29)
  038ca78  lfs 1, 20(31)
  038ca7c  lfs 2, 24(31)
  038ca80  lfs 3, -3064(26)
  038ca84  fmuls 1, 3, 1
  038ca88  fmuls 2, 3, 2
  038ca8c  bl 0xfcbe8
  038ca90  nop
  038ca94  stfs 1, 80(29)
  038ca98  lfs 1, 28(31)
  038ca9c  lfs 2, 32(31)
  038caa0  lfs 3, -3064(26)
  038caa4  fmuls 1, 3, 1
  038caa8  fmuls 2, 3, 2
  038caac  bl 0xfcbe8
  038cab0  nop
  038cab4  ori 3, 28, 0
  038cab8  stfs 1, 84(29)
  038cabc  bl 0xf31a8
  038cac0  nop
  038cac4  li 3, 1
  038cac8  li 4, 0
  038cacc  ori 5, 28, 0
  038cad0  bl 0x15d12c
  038cad4  nop
  038cad8  stw 27, 224(1)
  038cadc  lis 3, 114
  038cae0  stw 27, 228(1)
  038cae4  stw 27, 232(1)
  038cae8  lis 4, 151
  038caec  stw 27, 236(1)
  038caf0  li 5, 0
  038caf4  lfs 1, 36(31)
  038caf8  li 7, 0
  038cafc  lfs 2, -3052(3)
  038cb00  addic 3, 4, -25376
  038cb04  fmuls 1, 2, 1
  038cb08  lfs 3, 8(30)
  038cb0c  ori 4, 30, 0
  038cb10  lwz 8, 8320(3)
  038cb14  addic 3, 1, 208
  038cb18  ori 6, 8, 0
  038cb1c  stfs 1, 232(1)
  038cb20  lfs 1, 16(8)
  038cb24  stfs 1, 208(1)
  038cb28  lfs 1, 20(8)
  038cb2c  stfs 1, 212(1)
  038cb30  lfs 1, 24(8)
  038cb34  stfs 1, 216(1)
  038cb38  lfs 1, 28(8)
  038cb3c  stfs 3, 216(1)
  038cb40  stfs 1, 220(1)
  038cb44  bl 0x57820
  038cb48  nop
  038cb4c  cmpwi 3, 0
  038cb50  bt 2, 0x38cca8
  038cb54  lis 3, 161
  038cb58  li 4, 2
  038cb5c  addic 31, 3, 2368
  038cb60  addic 30, 1, 192
  038cb64  stb 4, 188(28)
  038cb68  ori 3, 30, 0
  038cb6c  lfs 1, 32(31)
  038cb70  stfs 1, 16(28)
  038cb74  lfs 1, 36(31)
  038cb78  stfs 1, 20(28)
  038cb7c  lfs 1, 40(31)
  038cb80  stfs 1, 24(28)
  038cb84  lfs 1, 44(31)
  038cb88  lfs 2, 72(28)
  038cb8c  stfs 1, 28(28)
  038cb90  lfs 1, 48(29)
  038cb94  lfs 3, 68(28)
  038cb98  fneg 3, 3
  038cb9c  bl 0xfe610
  038cba0  nop
  038cba4  addic 29, 1, 224
  038cba8  addic 5, 31, 64
  038cbac  ori 3, 29, 0
  038cbb0  ori 4, 30, 0
  038cbb4  bl 0x500608
  038cbb8  nop
  038cbbc  lfs 3, 228(1)
  038cbc0  lfs 5, 224(1)
  038cbc4  fmuls 1, 3, 3
  038cbc8  lfs 6, 232(1)
  038cbcc  lis 3, 57
  038cbd0  addi 6, 3, -14240
  038cbd4  lis 3, 114
  038cbd8  fmadds 1, 5, 5, 1
  038cbdc  lfs 4, 40(6)
  038cbe0  li 31, 0
  038cbe4  li 11, 1
  038cbe8  fmr 2, 30
  038cbec  li 7, -1
  038cbf0  fmadds 1, 6, 6, 1
  038cbf4  li 9, 3
  038cbf8  ori 4, 29, 0
  038cbfc  li 10, 9
  038cc00  fsqrts 7, 1
  038cc04  lfs 1, -3052(3)
  038cc08  li 5, 0
  038cc0c  std 31, 144(1)
  038cc10  ori 3, 28, 0
  038cc14  std 11, 160(1)
  038cc18  li 8, 10
  038cc1c  std 11, 168(1)
  038cc20  std 7, 176(1)
  038cc24  std 31, 184(1)
  038cc28  fmuls 8, 1, 4
  038cc2c  fmr 1, 30
  038cc30  fdivs 8, 8, 7
  038cc34  fsub 9, 30, 7
  038cc38  fsub 10, 30, 7
  038cc3c  fsub 11, 30, 7
  038cc40  fsub 12, 7, 30
  038cc44  fsub 13, 7, 30
  038cc48  fsub 7, 7, 30
  038cc4c  fmuls 5, 5, 8
  038cc50  fmuls 3, 3, 8
  038cc54  fmuls 6, 6, 8
  038cc58  fsel 8, 9, 30, 5
  038cc5c  fsel 9, 10, 30, 3
  038cc60  fsel 10, 11, 30, 6
  038cc64  fsel 5, 12, 8, 5
  038cc68  fsel 3, 13, 9, 3
  038cc6c  fsel 6, 7, 10, 6
  038cc70  stfs 5, 224(1)
  038cc74  stfs 3, 228(1)
  038cc78  stfs 6, 232(1)
  038cc7c  lfs 3, 44(6)
  038cc80  lfs 5, 48(6)
  038cc84  lfs 6, 52(6)
  038cc88  lfs 7, 56(6)
  038cc8c  bl 0x10e030
  038cc90  nop
  038cc94  ori 3, 28, 0
  038cc98  bl 0xefb38
  038cc9c  nop
  038cca0  ori 3, 31, 0
  038cca4  b 0x38ccac
  038cca8  ori 3, 28, 0
  038ccac  ld 0, 336(1)
  038ccb0  mtlr 0
  038ccb4  lfd 29, 296(1)
  038ccb8  lfd 30, 304(1)
  038ccbc  lfd 31, 312(1)
  038ccc0  ld 26, 248(1)
  038ccc4  ld 27, 256(1)
  038ccc8  ld 28, 264(1)
  038cccc  ld 29, 272(1)
  038ccd0  ld 30, 280(1)
  038ccd4  ld 31, 288(1)
  038ccd8  addi 1, 1, 320
  038ccdc  blr

M457_0038ccf0:   # 0x38ccf0, 0x55c bytes
  038ccf0  stdu 1, -336(1)
  038ccf4  mflr 0
  038ccf8  std 0, 352(1)
  038ccfc  stfd 21, 248(1)
  038cd00  stfd 22, 256(1)
  038cd04  stfd 23, 264(1)
  038cd08  stfd 24, 272(1)
  038cd0c  stfd 25, 280(1)
  038cd10  stfd 26, 288(1)
  038cd14  stfd 27, 296(1)
  038cd18  stfd 28, 304(1)
  038cd1c  stfd 29, 312(1)
  038cd20  stfd 30, 320(1)
  038cd24  stfd 31, 328(1)
  038cd28  lis 6, 164
  038cd2c  lis 5, 57
  038cd30  std 29, 224(1)
  038cd34  fmr 31, 1
  038cd38  li 29, 0
  038cd3c  fmr 30, 2
  038cd40  addi 5, 5, -13088
  038cd44  std 31, 240(1)
  038cd48  std 28, 216(1)
  038cd4c  fmr 29, 3
  038cd50  ori 31, 3, 0
  038cd54  std 30, 232(1)
  038cd58  lwz 28, -28500(6)
  038cd5c  ori 30, 4, 0
  038cd60  cmpwi 28, 0
  038cd64  std 27, 208(1)
  038cd68  lfs 28, 0(5)
  038cd6c  bt 2, 0x38d1f8
  038cd70  lhz 3, 50(28)
  038cd74  cmpwi 3, 0
  038cd78  bt 2, 0x38d1ec
  038cd7c  ori 3, 28, 0
  038cd80  bl 0xfcccc
  038cd84  nop
  038cd88  lhz 4, 52(28)
  038cd8c  rlwinm 4, 4, 0, 19, 19
  038cd90  cmpwi 4, 0
  038cd94  bt 2, 0x38d1ec
  038cd98  lwz 4, 36(28)
  038cd9c  cmpwi 4, 0
  038cda0  bt 2, 0x38d1ec
  038cda4  lhz 4, 70(4)
  038cda8  extsh 4, 4
  038cdac  cmpwi 4, 5
  038cdb0  bf 2, 0x38d1ec
  038cdb4  cmpwi 3, 0
  038cdb8  bt 2, 0x38d1ec
  038cdbc  lis 4, 57
  038cdc0  lwz 3, 0(3)
  038cdc4  addi 4, 4, -13088
  038cdc8  cmpwi 3, 0
  038cdcc  lfs 23, 4(4)
  038cdd0  bf 1, 0x38d1ec
  038cdd4  lfs 2, 4(31)
  038cdd8  lfs 21, 20(28)
  038cddc  lfs 1, 0(31)
  038cde0  fsubs 3, 2, 21
  038cde4  lfs 22, 16(28)
  038cde8  fsubs 4, 1, 22
  038cdec  fmuls 3, 3, 3
  038cdf0  fmadds 27, 4, 4, 3
  038cdf4  fsqrts 27, 27
  038cdf8  fcmpu 0, 27, 29
  038cdfc  cror 6, 1, 2
  038ce00  bt 6, 0x38d1ec
  038ce04  fsubs 1, 22, 1
  038ce08  fsubs 2, 21, 2
  038ce0c  lis 3, 57
  038ce10  lfs 26, 24(28)
  038ce14  addi 3, 3, -13088
  038ce18  lis 27, 115
  038ce1c  addic 27, 27, 22784
  038ce20  lfs 5, 8(3)
  038ce24  fabs 3, 1
  038ce28  fabs 4, 2
  038ce2c  stfs 1, 124(1)
  038ce30  stfs 2, 128(1)
  038ce34  fmr 2, 5
  038ce38  lfs 24, 8(30)
  038ce3c  fsubs 1, 3, 4
  038ce40  fadds 26, 26, 2
  038ce44  stfs 1, 132(1)
  038ce48  lwz 4, 124(1)
  038ce4c  lfs 1, 124(1)
  038ce50  lwz 5, 128(1)
  038ce54  lfs 2, 128(1)
  038ce58  lfs 25, 12(3)
  038ce5c  fabs 1, 1
  038ce60  fabs 5, 2
  038ce64  rlwinm 5, 5, 3, 29, 29
  038ce68  lwz 3, 132(1)
  038ce6c  lfs 2, 132(1)
  038ce70  rlwimi 5, 3, 2, 30, 30
  038ce74  fsub 6, 2, 23
  038ce78  fsub 7, 2, 23
  038ce7c  rlwimi 5, 4, 4, 28, 28
  038ce80  ori 3, 27, 0
  038ce84  slwi 4, 5, 2
  038ce88  rlwimi 3, 5, 2, 26, 28
  038ce8c  clrldi 3, 3, 32
  038ce90  fsel 4, 6, 1, 4
  038ce94  lfsx 1, 27, 4
  038ce98  lfs 2, 4(3)
  038ce9c  fsel 3, 7, 5, 3
  038cea0  fcmpu 0, 4, 23
  038cea4  bt 1, 0x38ceb0
  038cea8  fmr 1, 23
  038ceac  b 0x38cfc8
  038ceb0  fsubs 5, 3, 4
  038ceb4  fadds 3, 3, 4
  038ceb8  addic 3, 1, 16
  038cebc  li 7, 2
  038cec0  addic 4, 3, 152
  038cec4  addic 5, 3, 168
  038cec8  mtctr 7
  038cecc  fdivs 3, 5, 3
  038ced0  fmuls 4, 3, 3
  038ced4  stfs 3, 180(1)
  038ced8  stfs 3, 172(1)
  038cedc  stfs 3, 176(1)
  038cee0  stfs 3, 168(1)
  038cee4  lfs 6, 180(1)
  038cee8  lfs 7, 172(1)
  038ceec  lfs 8, 176(1)
  038cef0  fmuls 5, 4, 4
  038cef4  fmuls 7, 7, 4
  038cef8  fmuls 6, 6, 5
  038cefc  fmuls 3, 5, 5
  038cf00  fmuls 5, 8, 5
  038cf04  stfs 7, 172(1)
  038cf08  fmuls 4, 6, 4
  038cf0c  stfs 5, 176(1)
  038cf10  stfs 4, 180(1)
  038cf14  lfs 4, 152(3)
  038cf18  fmuls 4, 4, 3
  038cf1c  stfs 4, 168(3)
  038cf20  lfs 4, 4(4)
  038cf24  addic 3, 3, 8
  038cf28  addic 4, 4, 8
  038cf2c  fmuls 4, 4, 3
  038cf30  stfs 4, 4(5)
  038cf34  addic 5, 5, 8
  038cf38  bdnz 0x38cf14
  038cf3c  ori 3, 1, 0
  038cf40  lis 4, 115
  038cf44  li 8, 4
  038cf48  addic 5, 3, 168
  038cf4c  addic 4, 4, 22752
  038cf50  ori 6, 5, 0
  038cf54  mtctr 8
  038cf58  lfs 3, 168(3)
  038cf5c  lfs 4, 0(4)
  038cf60  fmuls 3, 3, 4
  038cf64  lfs 4, 4(4)
  038cf68  addic 4, 4, 8
  038cf6c  stfs 3, 168(3)
  038cf70  lfs 3, 4(5)
  038cf74  addic 3, 3, 8
  038cf78  fmuls 3, 3, 4
  038cf7c  stfs 3, 4(5)
  038cf80  addic 5, 5, 8
  038cf84  bdnz 0x38cf58
  038cf88  fmr 3, 23
  038cf8c  ori 3, 1, 0
  038cf90  mtctr 7
  038cf94  lfs 4, 168(3)
  038cf98  fadds 3, 3, 4
  038cf9c  addic 3, 3, 16
  038cfa0  lfs 4, 4(6)
  038cfa4  lfs 5, 8(6)
  038cfa8  lfs 6, 12(6)
  038cfac  addic 6, 6, 16
  038cfb0  fadds 3, 3, 4
  038cfb4  fadds 3, 3, 5
  038cfb8  fadds 3, 3, 6
  038cfbc  bdnz 0x38cf94
  038cfc0  fadds 3, 3, 25
  038cfc4  fmadds 1, 3, 1, 2
  038cfc8  fmr 2, 1
  038cfcc  fmr 1, 24
  038cfd0  bl 0x5026a0
  038cfd4  nop
  038cfd8  fmuls 24, 1, 1
  038cfdc  fmuls 2, 31, 31
  038cfe0  lfs 1, 4(30)
  038cfe4  fcmpu 0, 24, 2
  038cfe8  cror 6, 1, 2
  038cfec  bt 6, 0x38d1ec
  038cff0  lfs 2, 8(31)
  038cff4  fabs 3, 27
  038cff8  stfs 27, 112(1)
  038cffc  fsubs 2, 26, 2
  038d000  fabs 4, 2
  038d004  stfs 2, 116(1)
  038d008  lwz 3, 112(1)
  038d00c  lfs 5, 112(1)
  038d010  fabs 5, 5
  038d014  fsubs 2, 3, 4
  038d018  stfs 2, 120(1)
  038d01c  lwz 4, 116(1)
  038d020  lfs 2, 116(1)
  038d024  lwz 5, 120(1)
  038d028  fabs 6, 2
  038d02c  rlwinm 4, 4, 3, 29, 29
  038d030  lfs 2, 120(1)
  038d034  rlwimi 4, 5, 2, 30, 30
  038d038  fsub 7, 2, 23
  038d03c  fsub 8, 2, 23
  038d040  rlwimi 4, 3, 4, 28, 28
  038d044  ori 3, 27, 0
  038d048  rlwimi 3, 4, 2, 26, 28
  038d04c  slwi 4, 4, 2
  038d050  clrldi 3, 3, 32
  038d054  fsel 4, 7, 5, 4
  038d058  lfsx 27, 27, 4
  038d05c  fsel 3, 8, 6, 3
  038d060  lfs 2, 4(3)
  038d064  fcmpu 0, 4, 23
  038d068  bt 1, 0x38d070
  038d06c  b 0x38d184
  038d070  fsubs 5, 3, 4
  038d074  fadds 3, 3, 4
  038d078  addic 3, 1, 16
  038d07c  li 7, 2
  038d080  addic 4, 3, 120
  038d084  addic 5, 3, 136
  038d088  mtctr 7
  038d08c  fdivs 3, 5, 3
  038d090  fmuls 4, 3, 3
  038d094  stfs 3, 148(1)
  038d098  stfs 3, 140(1)
  038d09c  stfs 3, 144(1)
  038d0a0  stfs 3, 136(1)
  038d0a4  lfs 6, 148(1)
  038d0a8  lfs 7, 140(1)
  038d0ac  lfs 8, 144(1)
  038d0b0  fmuls 5, 4, 4
  038d0b4  fmuls 7, 7, 4
  038d0b8  fmuls 6, 6, 5
  038d0bc  fmuls 3, 5, 5
  038d0c0  fmuls 5, 8, 5
  038d0c4  stfs 7, 140(1)
  038d0c8  fmuls 4, 6, 4
  038d0cc  stfs 5, 144(1)
  038d0d0  stfs 4, 148(1)
  038d0d4  lfs 4, 120(3)
  038d0d8  fmuls 4, 4, 3
  038d0dc  stfs 4, 136(3)
  038d0e0  lfs 4, 4(4)
  038d0e4  addic 3, 3, 8
  038d0e8  addic 4, 4, 8
  038d0ec  fmuls 4, 4, 3
  038d0f0  stfs 4, 4(5)
  038d0f4  addic 5, 5, 8
  038d0f8  bdnz 0x38d0d4
  038d0fc  ori 3, 1, 0
  038d100  lis 4, 115
  038d104  li 8, 4
  038d108  addic 5, 3, 136
  038d10c  addic 4, 4, 22752
  038d110  ori 6, 5, 0
  038d114  mtctr 8
  038d118  lfs 3, 136(3)
  038d11c  lfs 4, 0(4)
  038d120  fmuls 3, 3, 4
  038d124  lfs 4, 4(4)
  038d128  addic 4, 4, 8
  038d12c  stfs 3, 136(3)
  038d130  lfs 3, 4(5)
  038d134  addic 3, 3, 8
  038d138  fmuls 3, 3, 4
  038d13c  stfs 3, 4(5)
  038d140  addic 5, 5, 8
  038d144  bdnz 0x38d118
  038d148  ori 3, 1, 0
  038d14c  mtctr 7
  038d150  lfs 3, 136(3)
  038d154  lfs 4, 4(6)
  038d158  fadds 3, 23, 3
  038d15c  lfs 5, 8(6)
  038d160  lfs 23, 12(6)
  038d164  addic 3, 3, 16
  038d168  addic 6, 6, 16
  038d16c  fadds 3, 3, 4
  038d170  fadds 3, 3, 5
  038d174  fadds 23, 3, 23
  038d178  bdnz 0x38d150
  038d17c  fadds 23, 23, 25
  038d180  fmadds 23, 23, 27, 2
  038d184  fmr 2, 23
  038d188  bl 0x5026a0
  038d18c  nop
  038d190  fmuls 23, 1, 1
  038d194  fmuls 1, 30, 30
  038d198  fcmpu 0, 23, 1
  038d19c  cror 6, 1, 2
  038d1a0  bt 6, 0x38d1ec
  038d1a4  lfs 1, 4(31)
  038d1a8  lfs 2, 0(31)
  038d1ac  fsubs 1, 1, 21
  038d1b0  fsubs 2, 2, 22
  038d1b4  lfs 3, 8(31)
  038d1b8  fsubs 3, 3, 26
  038d1bc  fmuls 1, 1, 1
  038d1c0  fmadds 1, 2, 2, 1
  038d1c4  fmuls 2, 24, 23
  038d1c8  fmadds 1, 3, 3, 1
  038d1cc  fsqrts 1, 1
  038d1d0  fsqrts 1, 1
  038d1d4  fmuls 1, 2, 1
  038d1d8  fcmpu 0, 28, 1
  038d1dc  cror 6, 0, 2
  038d1e0  bt 6, 0x38d1ec
  038d1e4  ori 29, 28, 0
  038d1e8  fmr 28, 1
  038d1ec  lwz 28, 40(28)
  038d1f0  cmpwi 28, 0
  038d1f4  bf 2, 0x38cd70
  038d1f8  ori 3, 29, 0
  038d1fc  ld 0, 352(1)
  038d200  mtlr 0
  038d204  lfd 21, 248(1)
  038d208  lfd 22, 256(1)
  038d20c  lfd 23, 264(1)
  038d210  lfd 24, 272(1)
  038d214  lfd 25, 280(1)
  038d218  lfd 26, 288(1)
  038d21c  lfd 27, 296(1)
  038d220  lfd 28, 304(1)
  038d224  lfd 29, 312(1)
  038d228  lfd 30, 320(1)
  038d22c  lfd 31, 328(1)
  038d230  ld 27, 208(1)
  038d234  ld 28, 216(1)
  038d238  ld 29, 224(1)
  038d23c  ld 30, 232(1)
  038d240  ld 31, 240(1)
  038d244  addi 1, 1, 336
  038d248  blr

UpdateMoby_457:   # 0x38d2e8, 0x1650 bytes
  038d2e8  stdu 1, -736(1)
  038d2ec  mflr 0
  038d2f0  std 0, 752(1)
  038d2f4  stfd 18, 624(1)
  038d2f8  stfd 19, 632(1)
  038d2fc  stfd 20, 640(1)
  038d300  stfd 21, 648(1)
  038d304  stfd 22, 656(1)
  038d308  stfd 23, 664(1)
  038d30c  stfd 24, 672(1)
  038d310  stfd 25, 680(1)
  038d314  stfd 26, 688(1)
  038d318  stfd 27, 696(1)
  038d31c  stfd 28, 704(1)
  038d320  stfd 29, 712(1)
  038d324  stfd 30, 720(1)
  038d328  stfd 31, 728(1)
  038d32c  std 31, 616(1)
  038d330  cmpwi 3, 0
  038d334  std 30, 608(1)
  038d338  std 29, 600(1)
  038d33c  std 28, 592(1)
  038d340  std 27, 584(1)
  038d344  std 26, 576(1)
  038d348  ori 31, 3, 0
  038d34c  bt 2, 0x38e8d8
  038d350  lwz 30, 120(31)
  038d354  cmpwi 30, 0
  038d358  bt 2, 0x38e8d8
  038d35c  lis 3, 57
  038d360  li 4, 0
  038d364  addi 3, 3, -11700
  038d368  lis 5, 114
  038d36c  lfs 30, 0(3)
  038d370  stw 4, 208(1)
  038d374  stw 4, 212(1)
  038d378  stw 4, 216(1)
  038d37c  stw 4, 220(1)
  038d380  lfs 1, 4(3)
  038d384  lis 4, 114
  038d388  lfs 2, -3052(5)
  038d38c  lwz 6, 36(31)
  038d390  fmuls 1, 2, 1
  038d394  lfs 3, 44(31)
  038d398  lfs 4, -3064(4)
  038d39c  stfs 1, 216(1)
  038d3a0  lfs 31, 8(3)
  038d3a4  lfs 1, 36(6)
  038d3a8  fmuls 2, 4, 31
  038d3ac  fsubs 1, 1, 3
  038d3b0  lis 6, 114
  038d3b4  fmadds 1, 2, 1, 3
  038d3b8  stfs 1, 44(31)
  038d3bc  lfs 2, -3064(4)
  038d3c0  lfs 29, 12(3)
  038d3c4  fmr 5, 2
  038d3c8  lfs 1, 16(3)
  038d3cc  lfs 26, 48(30)
  038d3d0  lfs 3, -3052(5)
  038d3d4  lis 4, 114
  038d3d8  fmsubs 1, 3, 1, 26
  038d3dc  lfs 3, -3060(6)
  038d3e0  fmuls 4, 5, 29
  038d3e4  fmuls 1, 4, 1
  038d3e8  fmadds 26, 1, 3, 26
  038d3ec  stfs 26, 48(30)
  038d3f0  lfs 3, 20(3)
  038d3f4  lfs 1, -3056(4)
  038d3f8  lwz 4, 36(30)
  038d3fc  fmuls 3, 1, 3
  038d400  fctiwz 3, 3
  038d404  stfd 3, 560(1)
  038d408  lfs 3, 24(3)
  038d40c  lwz 3, 564(1)
  038d410  fmuls 3, 1, 3
  038d414  fctiwz 3, 3
  038d418  stfd 3, 560(1)
  038d41c  lwz 5, 564(1)
  038d420  subc 5, 3, 5
  038d424  cmpw 4, 5
  038d428  bf 0, 0x38dac0
  038d42c  lwz 5, 40(30)
  038d430  cmpwi 5, 0
  038d434  bt 2, 0x38d460
  038d438  lhz 6, 166(5)
  038d43c  lwz 7, 88(30)
  038d440  extsh 6, 6
  038d444  cmpw 6, 7
  038d448  bf 2, 0x38d460
  038d44c  lbz 6, 32(5)
  038d450  cmpwi 6, 254
  038d454  cmpwi 1, 6, 253
  038d458  bt 2, 0x38d460
  038d45c  bf 6, 0x38d5a4
  038d460  lfs 3, 68(30)
  038d464  lis 5, 57
  038d468  li 6, 0
  038d46c  fmadds 3, 2, 29, 3
  038d470  addi 5, 5, -11700
  038d474  stw 6, 40(30)
  038d478  stfs 3, 68(30)
  038d47c  lfs 3, 28(5)
  038d480  fmuls 1, 1, 3
  038d484  fctiwz 1, 1
  038d488  stfd 1, 560(1)
  038d48c  lwz 5, 564(1)
  038d490  subc 3, 3, 5
  038d494  cmpw 4, 3
  038d498  bf 0, 0x38d520
  038d49c  lis 3, 57
  038d4a0  lfs 1, 72(30)
  038d4a4  addi 3, 3, -11700
  038d4a8  lfs 3, 32(3)
  038d4ac  lfs 4, 36(3)
  038d4b0  fsubs 3, 3, 1
  038d4b4  fsubs 4, 4, 1
  038d4b8  lfs 6, 40(3)
  038d4bc  fsub 5, 1, 3
  038d4c0  fsel 1, 5, 3, 1
  038d4c4  lfs 3, 44(3)
  038d4c8  fsub 5, 4, 1
  038d4cc  fsel 1, 5, 4, 1
  038d4d0  lfs 4, 48(3)
  038d4d4  lfs 5, 52(3)
  038d4d8  fmuls 7, 1, 1
  038d4dc  fmuls 10, 7, 1
  038d4e0  fmadds 6, 10, 6, 1
  038d4e4  fmuls 11, 7, 10
  038d4e8  lfs 1, 68(31)
  038d4ec  lfs 9, 56(3)
  038d4f0  fmuls 2, 2, 9
  038d4f4  fmuls 8, 7, 11
  038d4f8  fmadds 3, 11, 3, 6
  038d4fc  fmuls 6, 7, 8
  038d500  fmadds 3, 8, 4, 3
  038d504  fmadds 3, 6, 5, 3
  038d508  fmuls 2, 2, 3
  038d50c  bl 0x502578
  038d510  nop
  038d514  lis 3, 114
  038d518  stfs 1, 68(31)
  038d51c  lfs 2, -3064(3)
  038d520  lis 3, 57
  038d524  lfs 1, 72(30)
  038d528  addi 3, 3, -11700
  038d52c  fmuls 2, 2, 31
  038d530  lfs 3, 60(3)
  038d534  lfs 4, 32(3)
  038d538  fadds 1, 1, 3
  038d53c  lfs 5, 36(3)
  038d540  lfs 6, 40(3)
  038d544  fsubs 3, 4, 1
  038d548  fsubs 4, 5, 1
  038d54c  fsub 5, 1, 3
  038d550  fsel 1, 5, 3, 1
  038d554  lfs 3, 44(3)
  038d558  fsub 5, 4, 1
  038d55c  fsel 4, 5, 4, 1
  038d560  lfs 5, 48(3)
  038d564  lfs 1, 72(31)
  038d568  lfs 8, 52(3)
  038d56c  fmuls 7, 4, 4
  038d570  fmuls 9, 7, 4
  038d574  fmuls 10, 7, 9
  038d578  fmadds 4, 9, 6, 4
  038d57c  fmuls 6, 7, 10
  038d580  fmadds 3, 10, 3, 4
  038d584  fmuls 4, 7, 6
  038d588  fmadds 3, 6, 5, 3
  038d58c  fmadds 3, 4, 8, 3
  038d590  fmuls 2, 2, 3
  038d594  bl 0x502578
  038d598  nop
  038d59c  stfs 1, 72(31)
  038d5a0  b 0x38dac0
  038d5a4  lfs 3, 20(5)
  038d5a8  lfs 28, 4(30)
  038d5ac  lfs 4, 16(5)
  038d5b0  fsubs 28, 3, 28
  038d5b4  lfs 1, 24(5)
  038d5b8  lfs 2, 44(30)
  038d5bc  lfs 31, 0(30)
  038d5c0  fadds 6, 1, 2
  038d5c4  lfs 27, 8(30)
  038d5c8  fsubs 31, 4, 31
  038d5cc  lfs 2, 20(30)
  038d5d0  lfs 1, 16(30)
  038d5d4  lis 3, 57
  038d5d8  lfs 8, 28(5)
  038d5dc  fsubs 2, 3, 2
  038d5e0  lfs 9, 24(30)
  038d5e4  fsubs 1, 4, 1
  038d5e8  stfs 4, 0(30)
  038d5ec  addi 3, 3, -11700
  038d5f0  stfs 3, 4(30)
  038d5f4  fmuls 7, 28, 28
  038d5f8  fsubs 27, 6, 27
  038d5fc  fsubs 3, 6, 9
  038d600  stfs 6, 8(30)
  038d604  fmuls 6, 2, 2
  038d608  stfs 8, 12(30)
  038d60c  lfs 8, 68(3)
  038d610  fmadds 4, 31, 31, 7
  038d614  fmuls 7, 2, 28
  038d618  lfs 9, 64(3)
  038d61c  fmadds 6, 1, 1, 6
  038d620  fmadds 4, 27, 27, 4
  038d624  fmadds 7, 1, 31, 7
  038d628  fmsubs 4, 26, 26, 4
  038d62c  fmadds 26, 3, 3, 6
  038d630  fmadds 6, 3, 27, 7
  038d634  fmuls 7, 4, 8
  038d638  fmuls 6, 6, 9
  038d63c  lfs 8, 72(3)
  038d640  fmuls 8, 4, 8
  038d644  fmuls 7, 26, 7
  038d648  fneg 9, 6
  038d64c  fneg 7, 7
  038d650  fmsubs 7, 6, 6, 7
  038d654  fsqrts 7, 7
  038d658  fsubs 4, 7, 6
  038d65c  fsubs 6, 9, 7
  038d660  fdivs 4, 4, 8
  038d664  fdivs 6, 6, 8
  038d668  fcmpu 0, 4, 30
  038d66c  cror 2, 0, 2
  038d670  fcmpu 1, 6, 30
  038d674  bt 2, 0x38d688
  038d678  bf 5, 0x38d688
  038d67c  fsub 7, 6, 4
  038d680  fsel 4, 7, 6, 4
  038d684  b 0x38d6a4
  038d688  fsub 7, 30, 6
  038d68c  lis 3, 57
  038d690  fsub 8, 30, 4
  038d694  addi 3, 3, -11700
  038d698  lfs 9, 76(3)
  038d69c  fsel 6, 7, 9, 6
  038d6a0  fsel 4, 8, 6, 4
  038d6a4  fcmpu 0, 4, 30
  038d6a8  cror 6, 0, 2
  038d6ac  bt 6, 0x38da7c
  038d6b0  fmadds 31, 4, 31, 1
  038d6b4  fmadds 28, 4, 28, 2
  038d6b8  fmadds 27, 4, 27, 3
  038d6bc  lis 29, 115
  038d6c0  addic 29, 29, 22784
  038d6c4  fabs 6, 31
  038d6c8  fabs 5, 28
  038d6cc  stfs 31, 420(1)
  038d6d0  stfs 28, 424(1)
  038d6d4  lfs 1, 72(31)
  038d6d8  fsubs 2, 6, 5
  038d6dc  stfs 2, 428(1)
  038d6e0  lwz 3, 420(1)
  038d6e4  lfs 2, 420(1)
  038d6e8  lwz 4, 424(1)
  038d6ec  lfs 3, 424(1)
  038d6f0  lwz 5, 428(1)
  038d6f4  rlwinm 4, 4, 3, 29, 29
  038d6f8  fabs 4, 3
  038d6fc  lfs 3, 428(1)
  038d700  fabs 2, 2
  038d704  rlwimi 4, 5, 2, 30, 30
  038d708  fsub 7, 3, 30
  038d70c  fsub 8, 3, 30
  038d710  rlwimi 4, 3, 4, 28, 28
  038d714  ori 3, 29, 0
  038d718  rlwimi 3, 4, 2, 26, 28
  038d71c  slwi 4, 4, 2
  038d720  clrldi 3, 3, 32
  038d724  fsel 5, 7, 2, 5
  038d728  lfsx 2, 29, 4
  038d72c  fsel 4, 8, 4, 6
  038d730  lfs 3, 4(3)
  038d734  fcmpu 0, 5, 30
  038d738  bt 1, 0x38d744
  038d73c  fmr 2, 30
  038d740  b 0x38d868
  038d744  fsubs 6, 4, 5
  038d748  fadds 4, 4, 5
  038d74c  addic 3, 1, 16
  038d750  li 7, 2
  038d754  addic 5, 3, 528
  038d758  addic 4, 3, 512
  038d75c  mtctr 7
  038d760  fdivs 4, 6, 4
  038d764  fmuls 5, 4, 4
  038d768  stfs 4, 540(1)
  038d76c  stfs 4, 532(1)
  038d770  stfs 4, 536(1)
  038d774  stfs 4, 528(1)
  038d778  lfs 7, 540(1)
  038d77c  lfs 8, 532(1)
  038d780  lfs 9, 536(1)
  038d784  fmuls 6, 5, 5
  038d788  fmuls 8, 8, 5
  038d78c  fmuls 7, 7, 6
  038d790  fmuls 4, 6, 6
  038d794  fmuls 6, 9, 6
  038d798  stfs 8, 532(1)
  038d79c  fmuls 5, 7, 5
  038d7a0  stfs 6, 536(1)
  038d7a4  stfs 5, 540(1)
  038d7a8  lfs 5, 512(3)
  038d7ac  fmuls 5, 5, 4
  038d7b0  stfs 5, 528(3)
  038d7b4  lfs 5, 4(4)
  038d7b8  addic 4, 4, 8
  038d7bc  fmuls 5, 5, 4
  038d7c0  addic 3, 3, 8
  038d7c4  stfs 5, 4(5)
  038d7c8  addic 5, 5, 8
  038d7cc  bdnz 0x38d7a8
  038d7d0  li 5, 4
  038d7d4  ori 3, 1, 0
  038d7d8  mtctr 5
  038d7dc  lis 4, 115
  038d7e0  addic 5, 3, 528
  038d7e4  addic 4, 4, 22752
  038d7e8  ori 6, 5, 0
  038d7ec  lfs 4, 528(3)
  038d7f0  lfs 5, 0(4)
  038d7f4  fmuls 4, 4, 5
  038d7f8  lfs 5, 4(4)
  038d7fc  addic 4, 4, 8
  038d800  stfs 4, 528(3)
  038d804  lfs 4, 4(5)
  038d808  addic 3, 3, 8
  038d80c  fmuls 4, 4, 5
  038d810  stfs 4, 4(5)
  038d814  addic 5, 5, 8
  038d818  bdnz 0x38d7ec
  038d81c  ori 3, 1, 0
  038d820  fmr 4, 30
  038d824  mtctr 7
  038d828  lfs 5, 528(3)
  038d82c  fadds 4, 4, 5
  038d830  lfs 5, 4(6)
  038d834  addic 3, 3, 16
  038d838  lfs 6, 8(6)
  038d83c  lfs 7, 12(6)
  038d840  addic 6, 6, 16
  038d844  fadds 4, 4, 5
  038d848  fadds 4, 4, 6
  038d84c  fadds 4, 4, 7
  038d850  bdnz 0x38d828
  038d854  lis 3, 57
  038d858  addi 3, 3, -11700
  038d85c  lfs 5, 80(3)
  038d860  fadds 4, 4, 5
  038d864  fmadds 2, 4, 2, 3
  038d868  lis 3, 57
  038d86c  fmr 25, 31
  038d870  lis 28, 114
  038d874  fmr 4, 30
  038d878  addi 3, 3, -11700
  038d87c  fmr 5, 30
  038d880  addic 5, 30, 52
  038d884  lfs 31, 84(3)
  038d888  lfs 3, -3048(28)
  038d88c  fmuls 3, 3, 31
  038d890  bl 0xff190
  038d894  nop
  038d898  fmuls 2, 28, 28
  038d89c  stfs 27, 412(1)
  038d8a0  stfs 1, 72(31)
  038d8a4  fabs 6, 27
  038d8a8  lfs 1, 68(31)
  038d8ac  fmadds 2, 25, 25, 2
  038d8b0  fsqrts 3, 2
  038d8b4  lfs 2, -3048(28)
  038d8b8  lwz 3, 412(1)
  038d8bc  lfs 4, 412(1)
  038d8c0  fabs 5, 4
  038d8c4  rlwinm 3, 3, 3, 29, 29
  038d8c8  fabs 4, 3
  038d8cc  stfs 3, 408(1)
  038d8d0  fsubs 3, 4, 6
  038d8d4  stfs 3, 416(1)
  038d8d8  lwz 4, 408(1)
  038d8dc  lfs 3, 408(1)
  038d8e0  lwz 5, 416(1)
  038d8e4  lfs 7, 416(1)
  038d8e8  fabs 3, 3
  038d8ec  rlwimi 3, 5, 2, 30, 30
  038d8f0  fsub 8, 7, 30
  038d8f4  fsub 7, 7, 30
  038d8f8  rlwimi 3, 4, 4, 28, 28
  038d8fc  ori 4, 29, 0
  038d900  rlwimi 4, 3, 2, 26, 28
  038d904  slwi 3, 3, 2
  038d908  clrldi 4, 4, 32
  038d90c  fsel 6, 8, 3, 6
  038d910  lfsx 3, 29, 3
  038d914  fsel 5, 7, 5, 4
  038d918  lfs 4, 4(4)
  038d91c  fcmpu 0, 6, 30
  038d920  bt 1, 0x38d92c
  038d924  fmr 3, 30
  038d928  b 0x38da50
  038d92c  fsubs 7, 5, 6
  038d930  fadds 5, 5, 6
  038d934  addic 3, 1, 16
  038d938  li 6, 2
  038d93c  addic 5, 3, 496
  038d940  addic 4, 3, 480
  038d944  mtctr 6
  038d948  fdivs 5, 7, 5
  038d94c  fmuls 6, 5, 5
  038d950  stfs 5, 508(1)
  038d954  stfs 5, 500(1)
  038d958  stfs 5, 504(1)
  038d95c  stfs 5, 496(1)
  038d960  lfs 8, 508(1)
  038d964  lfs 9, 500(1)
  038d968  lfs 10, 504(1)
  038d96c  fmuls 7, 6, 6
  038d970  fmuls 9, 9, 6
  038d974  fmuls 8, 8, 7
  038d978  fmuls 5, 7, 7
  038d97c  fmuls 7, 10, 7
  038d980  stfs 9, 500(1)
  038d984  fmuls 6, 8, 6
  038d988  stfs 7, 504(1)
  038d98c  stfs 6, 508(1)
  038d990  lfs 6, 480(3)
  038d994  fmuls 6, 6, 5
  038d998  stfs 6, 496(3)
  038d99c  lfs 6, 4(4)
  038d9a0  addic 4, 4, 8
  038d9a4  fmuls 6, 6, 5
  038d9a8  addic 3, 3, 8
  038d9ac  stfs 6, 4(5)
  038d9b0  addic 5, 5, 8
  038d9b4  bdnz 0x38d990
  038d9b8  li 5, 4
  038d9bc  ori 3, 1, 0
  038d9c0  mtctr 5
  038d9c4  lis 4, 115
  038d9c8  addic 5, 3, 496
  038d9cc  addic 4, 4, 22752
  038d9d0  ori 7, 5, 0
  038d9d4  lfs 5, 496(3)
  038d9d8  lfs 6, 0(4)
  038d9dc  fmuls 5, 5, 6
  038d9e0  lfs 6, 4(4)
  038d9e4  addic 4, 4, 8
  038d9e8  stfs 5, 496(3)
  038d9ec  lfs 5, 4(5)
  038d9f0  addic 3, 3, 8
  038d9f4  fmuls 5, 5, 6
  038d9f8  stfs 5, 4(5)
  038d9fc  addic 5, 5, 8
  038da00  bdnz 0x38d9d4
  038da04  ori 3, 1, 0
  038da08  fmr 5, 30
  038da0c  mtctr 6
  038da10  lfs 6, 496(3)
  038da14  fadds 5, 5, 6
  038da18  lfs 6, 4(7)
  038da1c  addic 3, 3, 16
  038da20  lfs 7, 8(7)
  038da24  lfs 8, 12(7)
  038da28  addic 7, 7, 16
  038da2c  fadds 5, 5, 6
  038da30  fadds 5, 5, 7
  038da34  fadds 5, 5, 8
  038da38  bdnz 0x38da10
  038da3c  lis 3, 57
  038da40  addi 3, 3, -11700
  038da44  lfs 6, 80(3)
  038da48  fadds 5, 5, 6
  038da4c  fmadds 3, 5, 3, 4
  038da50  fneg 6, 3
  038da54  addic 5, 30, 56
  038da58  fmuls 3, 2, 31
  038da5c  fmr 4, 30
  038da60  fmr 5, 30
  038da64  fmr 2, 6
  038da68  bl 0xff190
  038da6c  nop
  038da70  lis 3, 114
  038da74  stfs 1, 68(31)
  038da78  lfs 5, -3064(3)
  038da7c  fsqrts 26, 26
  038da80  lis 3, 57
  038da84  addi 3, 3, -11700
  038da88  lfs 1, 88(3)
  038da8c  fcmpu 0, 26, 1
  038da90  cror 6, 1, 2
  038da94  bt 6, 0x38dab4
  038da98  lis 3, 57
  038da9c  addi 3, 3, -11700
  038daa0  lfs 1, 92(3)
  038daa4  lfs 2, 68(30)
  038daa8  fmuls 26, 26, 1
  038daac  fmuls 26, 2, 26
  038dab0  b 0x38dabc
  038dab4  lfs 26, 68(30)
  038dab8  fmadds 26, 5, 29, 26
  038dabc  stfs 26, 68(30)
  038dac0  lfs 1, 48(30)
  038dac4  addic 3, 1, 240
  038dac8  lfs 2, 72(31)
  038dacc  lfs 3, 68(31)
  038dad0  fneg 3, 3
  038dad4  bl 0xfe610
  038dad8  nop
  038dadc  li 3, 0
  038dae0  lis 4, 57
  038dae4  addi 29, 4, -11700
  038dae8  stw 3, 256(1)
  038daec  stw 3, 260(1)
  038daf0  stw 3, 264(1)
  038daf4  stw 3, 268(1)
  038daf8  lfs 31, 76(29)
  038dafc  lfs 28, 96(29)
  038db00  fmr 1, 31
  038db04  fmr 2, 28
  038db08  bl 0xfcbe8
  038db0c  nop
  038db10  stfs 1, 256(1)
  038db14  fmr 2, 28
  038db18  fmr 1, 31
  038db1c  bl 0xfcbe8
  038db20  nop
  038db24  stfs 1, 260(1)
  038db28  fmr 1, 31
  038db2c  fmr 2, 28
  038db30  bl 0xfcbe8
  038db34  nop
  038db38  stfs 1, 264(1)
  038db3c  lfs 2, 100(29)
  038db40  fmr 1, 29
  038db44  bl 0xfcbe8
  038db48  nop
  038db4c  lfs 3, 260(1)
  038db50  lfs 4, 256(1)
  038db54  fmuls 2, 3, 3
  038db58  lfs 5, 264(1)
  038db5c  lis 3, 114
  038db60  fmadds 2, 4, 4, 2
  038db64  fmadds 2, 5, 5, 2
  038db68  fsqrts 7, 2
  038db6c  lfs 2, -3052(3)
  038db70  fmuls 8, 1, 2
  038db74  fmuls 1, 2, 29
  038db78  fdivs 6, 8, 7
  038db7c  fsub 8, 30, 7
  038db80  fsub 9, 30, 7
  038db84  fsub 10, 30, 7
  038db88  fsub 11, 7, 30
  038db8c  fsub 12, 7, 30
  038db90  fsub 7, 7, 30
  038db94  fmuls 4, 4, 6
  038db98  fmuls 3, 3, 6
  038db9c  fmuls 5, 5, 6
  038dba0  fsel 6, 8, 30, 4
  038dba4  fsel 8, 9, 30, 3
  038dba8  fsel 9, 10, 30, 5
  038dbac  fsel 4, 11, 6, 4
  038dbb0  fsel 3, 12, 8, 3
  038dbb4  fsel 5, 7, 9, 5
  038dbb8  stfs 4, 256(1)
  038dbbc  stfs 3, 260(1)
  038dbc0  stfs 5, 264(1)
  038dbc4  bl 0xfcbe8
  038dbc8  nop
  038dbcc  lfs 3, 244(1)
  038dbd0  lfs 4, 240(1)
  038dbd4  fmuls 2, 3, 3
  038dbd8  lfs 5, 248(1)
  038dbdc  fneg 6, 1
  038dbe0  lfs 8, 256(1)
  038dbe4  lfs 9, 260(1)
  038dbe8  fmadds 2, 4, 4, 2
  038dbec  lfs 10, 264(1)
  038dbf0  lfs 1, 252(1)
  038dbf4  stfs 1, 236(1)
  038dbf8  fmadds 2, 5, 5, 2
  038dbfc  fmr 1, 30
  038dc00  fsqrts 7, 2
  038dc04  fmr 2, 28
  038dc08  fdivs 6, 6, 7
  038dc0c  fsub 11, 30, 7
  038dc10  fsub 12, 30, 7
  038dc14  fsub 13, 30, 7
  038dc18  fsub 0, 7, 30
  038dc1c  fsub 31, 7, 30
  038dc20  fsub 7, 7, 30
  038dc24  fmuls 4, 4, 6
  038dc28  fmuls 3, 3, 6
  038dc2c  fmuls 5, 5, 6
  038dc30  fsel 6, 11, 30, 4
  038dc34  fsel 11, 12, 30, 3
  038dc38  fsel 12, 13, 30, 5
  038dc3c  fsel 4, 0, 6, 4
  038dc40  fsel 3, 31, 11, 3
  038dc44  fsel 5, 7, 12, 5
  038dc48  fadds 6, 8, 4
  038dc4c  fadds 7, 9, 3
  038dc50  fadds 8, 10, 5
  038dc54  stfs 4, 224(1)
  038dc58  stfs 3, 228(1)
  038dc5c  stfs 5, 232(1)
  038dc60  stfs 6, 256(1)
  038dc64  stfs 7, 260(1)
  038dc68  stfs 8, 264(1)
  038dc6c  bl 0xfcbe8
  038dc70  nop
  038dc74  lfs 2, 244(1)
  038dc78  lfs 3, 240(1)
  038dc7c  fmuls 4, 2, 2
  038dc80  lfs 5, 248(1)
  038dc84  lfs 6, 48(30)
  038dc88  fmuls 1, 1, 6
  038dc8c  lfs 7, 16(31)
  038dc90  fmadds 4, 3, 3, 4
  038dc94  lfs 8, 20(31)
  038dc98  lfs 9, 24(31)
  038dc9c  lfs 10, 252(1)
  038dca0  stfs 10, 236(1)
  038dca4  fmadds 4, 5, 5, 4
  038dca8  li 3, 28
  038dcac  li 4, 40
  038dcb0  fsqrts 4, 4
  038dcb4  fdivs 1, 1, 4
  038dcb8  fsub 6, 30, 4
  038dcbc  fsub 10, 30, 4
  038dcc0  fsub 11, 30, 4
  038dcc4  fsub 12, 4, 30
  038dcc8  fsub 13, 4, 30
  038dccc  fsub 4, 4, 30
  038dcd0  fmuls 5, 5, 1
  038dcd4  fmuls 2, 2, 1
  038dcd8  fmuls 1, 3, 1
  038dcdc  fsel 3, 6, 30, 5
  038dce0  fsel 6, 10, 30, 2
  038dce4  fsel 10, 11, 30, 1
  038dce8  fsel 3, 12, 3, 5
  038dcec  fsel 2, 13, 6, 2
  038dcf0  fsel 1, 4, 10, 1
  038dcf4  fadds 3, 3, 9
  038dcf8  fadds 2, 2, 8
  038dcfc  fadds 1, 1, 7
  038dd00  stfs 3, 232(1)
  038dd04  stfs 2, 228(1)
  038dd08  stfs 1, 224(1)
  038dd0c  bl 0xfe484
  038dd10  nop
  038dd14  extsw 3, 3
  038dd18  li 4, 70
  038dd1c  std 3, 560(1)
  038dd20  lis 3, 114
  038dd24  lfs 31, 104(29)
  038dd28  lfs 1, -3056(3)
  038dd2c  lfd 2, 560(1)
  038dd30  fcfid 2, 2
  038dd34  li 3, 40
  038dd38  frsp 2, 2
  038dd3c  fadds 2, 2, 31
  038dd40  fmuls 1, 1, 2
  038dd44  fctiwz 1, 1
  038dd48  stfd 1, 560(1)
  038dd4c  lwz 5, 564(1)
  038dd50  extsw 28, 5
  038dd54  bl 0xfe484
  038dd58  nop
  038dd5c  lis 5, 28416
  038dd60  lis 6, 4096
  038dd64  ori 9, 3, 0
  038dd68  ori 7, 28, 0
  038dd6c  li 8, 40
  038dd70  addic 3, 1, 224
  038dd74  li 10, 1
  038dd78  addic 4, 1, 256
  038dd7c  ori 5, 5, 45055
  038dd80  ori 6, 6, 255
  038dd84  bl 0x121740
  038dd88  nop
  038dd8c  lfs 1, 16(31)
  038dd90  lfs 2, 20(31)
  038dd94  stfs 1, 192(1)
  038dd98  lfs 1, 24(31)
  038dd9c  stfs 2, 196(1)
  038dda0  lfs 2, 28(31)
  038dda4  stfs 1, 200(1)
  038dda8  stfs 2, 204(1)
  038ddac  lfs 1, 16(30)
  038ddb0  lfs 2, 240(1)
  038ddb4  lfs 4, 20(30)
  038ddb8  fadds 3, 1, 2
  038ddbc  lfs 5, 24(30)
  038ddc0  lfs 1, 72(30)
  038ddc4  lfs 2, 80(30)
  038ddc8  stfs 3, 16(30)
  038ddcc  lfs 3, 244(1)
  038ddd0  fadds 3, 4, 3
  038ddd4  stfs 3, 20(30)
  038ddd8  lfs 3, 248(1)
  038dddc  fadds 3, 5, 3
  038dde0  stfs 3, 24(30)
  038dde4  bl 0x502578
  038dde8  nop
  038ddec  lfs 2, 76(30)
  038ddf0  stfs 1, 72(30)
  038ddf4  fmr 1, 2
  038ddf8  lfs 3, 84(30)
  038ddfc  fmr 2, 3
  038de00  bl 0x502578
  038de04  nop
  038de08  lfs 27, 32(29)
  038de0c  lfs 26, 36(29)
  038de10  fsubs 2, 27, 1
  038de14  fsubs 3, 26, 1
  038de18  lfs 25, 40(29)
  038de1c  lfs 24, 44(29)
  038de20  lfs 23, 48(29)
  038de24  lfs 22, 52(29)
  038de28  fsub 4, 1, 2
  038de2c  fsel 2, 4, 2, 1
  038de30  fsub 4, 3, 2
  038de34  fsel 2, 4, 3, 2
  038de38  lfs 3, 72(30)
  038de3c  lfs 5, 108(29)
  038de40  stfs 1, 76(30)
  038de44  fmr 1, 3
  038de48  fmuls 4, 2, 2
  038de4c  fmuls 6, 4, 2
  038de50  fmuls 7, 4, 6
  038de54  fmadds 2, 6, 25, 2
  038de58  fmuls 3, 4, 7
  038de5c  fmadds 2, 7, 24, 2
  038de60  fmuls 4, 4, 3
  038de64  fmadds 2, 3, 23, 2
  038de68  fmadds 2, 4, 22, 2
  038de6c  fmuls 2, 2, 5
  038de70  bl 0x502578
  038de74  nop
  038de78  lwz 3, 68(30)
  038de7c  lis 4, 16230
  038de80  stfs 1, 72(30)
  038de84  srawi 5, 3, 31
  038de88  ori 4, 4, 26214
  038de8c  lfs 2, 68(30)
  038de90  srwi 6, 5, 1
  038de94  lfs 1, 112(29)
  038de98  xor 3, 6, 3
  038de9c  subc 3, 3, 5
  038dea0  cmpw 3, 4
  038dea4  bf 1, 0x38deb8
  038dea8  lis 3, 16230
  038deac  fmr 2, 1
  038deb0  ori 3, 3, 26214
  038deb4  stw 3, 68(30)
  038deb8  lis 3, 57
  038debc  fmr 1, 2
  038dec0  addic 26, 31, 16
  038dec4  addi 3, 3, -11700
  038dec8  li 29, 0
  038decc  addic 28, 31, 64
  038ded0  addic 27, 1, 192
  038ded4  lfs 21, 60(3)
  038ded8  lfs 20, 116(3)
  038dedc  lfs 3, 76(30)
  038dee0  lfs 4, 72(30)
  038dee4  fadds 3, 3, 21
  038dee8  fsubs 5, 27, 4
  038deec  fadds 6, 4, 21
  038def0  fsubs 7, 26, 4
  038def4  addic 3, 1, 320
  038def8  ori 4, 28, 0
  038defc  fsubs 8, 27, 3
  038df00  fsub 9, 4, 5
  038df04  fsubs 10, 27, 6
  038df08  fsubs 11, 26, 3
  038df0c  fsubs 12, 26, 6
  038df10  fsub 13, 3, 8
  038df14  fsel 4, 9, 5, 4
  038df18  fsub 5, 6, 10
  038df1c  fsel 3, 13, 8, 3
  038df20  fsub 8, 7, 4
  038df24  fsel 5, 5, 10, 6
  038df28  fsub 6, 11, 3
  038df2c  fsel 4, 8, 7, 4
  038df30  fsub 7, 12, 5
  038df34  fsel 3, 6, 11, 3
  038df38  fmuls 6, 4, 4
  038df3c  fsel 5, 7, 12, 5
  038df40  fmuls 7, 3, 3
  038df44  fmuls 8, 6, 4
  038df48  fmuls 9, 5, 5
  038df4c  fmuls 10, 7, 3
  038df50  fmuls 11, 6, 8
  038df54  fmadds 4, 8, 25, 4
  038df58  fmuls 8, 9, 5
  038df5c  fmuls 12, 7, 10
  038df60  fmadds 3, 10, 25, 3
  038df64  fmuls 10, 6, 11
  038df68  fmadds 4, 11, 24, 4
  038df6c  fmuls 11, 9, 8
  038df70  fmadds 5, 8, 25, 5
  038df74  fmuls 8, 7, 12
  038df78  fmadds 3, 12, 24, 3
  038df7c  fmuls 6, 6, 10
  038df80  fmadds 4, 10, 23, 4
  038df84  fmuls 10, 9, 11
  038df88  fmadds 5, 11, 24, 5
  038df8c  fmuls 7, 7, 8
  038df90  fmadds 3, 8, 23, 3
  038df94  fmadds 4, 6, 22, 4
  038df98  fmuls 6, 9, 10
  038df9c  fmadds 5, 10, 23, 5
  038dfa0  fmadds 3, 7, 22, 3
  038dfa4  fmuls 1, 1, 4
  038dfa8  fmadds 4, 6, 22, 5
  038dfac  fmuls 19, 1, 3
  038dfb0  fmuls 1, 2, 4
  038dfb4  fmuls 18, 1, 3
  038dfb8  bl 0x500ca4
  038dfbc  nop
  038dfc0  lfs 1, 336(1)
  038dfc4  lfs 2, 352(1)
  038dfc8  fmuls 1, 1, 19
  038dfcc  lfs 3, 340(1)
  038dfd0  lfs 4, 16(30)
  038dfd4  fmuls 3, 3, 19
  038dfd8  lfs 5, 356(1)
  038dfdc  lfs 6, 344(1)
  038dfe0  ori 3, 27, 0
  038dfe4  ori 4, 26, 0
  038dfe8  li 5, 6
  038dfec  ori 6, 31, 0
  038dff0  fmadds 1, 2, 18, 1
  038dff4  fmuls 2, 6, 19
  038dff8  fmadds 3, 5, 18, 3
  038dffc  lfs 5, 360(1)
  038e000  li 7, 0
  038e004  fadds 1, 4, 1
  038e008  fmadds 2, 5, 18, 2
  038e00c  stfs 1, 16(31)
  038e010  lfs 1, 20(30)
  038e014  fadds 1, 1, 3
  038e018  stfs 1, 20(31)
  038e01c  lfs 1, 24(30)
  038e020  fadds 1, 1, 2
  038e024  stfs 1, 24(31)
  038e028  lfs 1, 28(30)
  038e02c  stfs 1, 28(31)
  038e030  bl 0x57820
  038e034  nop
  038e038  cmpwi 3, 0
  038e03c  bt 2, 0x38e060
  038e040  lfs 2, 68(30)
  038e044  li 29, 1
  038e048  fmuls 2, 2, 20
  038e04c  fmr 1, 2
  038e050  stfs 2, 68(30)
  038e054  fcmpu 0, 1, 29
  038e058  bt 1, 0x38dedc
  038e05c  b 0x38e068
  038e060  cmpwi 29, 0
  038e064  bt 2, 0x38e400
  038e068  lfs 4, 16(31)
  038e06c  lfs 5, 192(1)
  038e070  lfs 6, 20(31)
  038e074  lfs 7, 196(1)
  038e078  fsubs 1, 4, 5
  038e07c  fsubs 2, 6, 7
  038e080  lis 3, 115
  038e084  addic 3, 3, 22784
  038e088  fabs 3, 1
  038e08c  fabs 8, 2
  038e090  stfs 1, 396(1)
  038e094  stfs 2, 400(1)
  038e098  fsubs 1, 3, 8
  038e09c  stfs 1, 404(1)
  038e0a0  lwz 4, 396(1)
  038e0a4  lfs 1, 396(1)
  038e0a8  lwz 5, 400(1)
  038e0ac  lfs 2, 400(1)
  038e0b0  lwz 6, 404(1)
  038e0b4  rlwinm 5, 5, 3, 29, 29
  038e0b8  fabs 9, 2
  038e0bc  lfs 2, 404(1)
  038e0c0  fabs 1, 1
  038e0c4  rlwimi 5, 6, 2, 30, 30
  038e0c8  fsub 10, 2, 30
  038e0cc  fsub 11, 2, 30
  038e0d0  rlwimi 5, 4, 4, 28, 28
  038e0d4  ori 4, 3, 0
  038e0d8  rlwimi 4, 5, 2, 26, 28
  038e0dc  slwi 5, 5, 2
  038e0e0  clrldi 4, 4, 32
  038e0e4  fsel 8, 10, 1, 8
  038e0e8  lfsx 1, 3, 5
  038e0ec  fsel 3, 11, 9, 3
  038e0f0  lfs 2, 4(4)
  038e0f4  fcmpu 0, 8, 30
  038e0f8  bt 1, 0x38e104
  038e0fc  fmr 1, 30
  038e100  b 0x38e228
  038e104  fsubs 9, 3, 8
  038e108  fadds 3, 3, 8
  038e10c  addic 4, 1, 16
  038e110  li 7, 2
  038e114  addic 6, 4, 464
  038e118  addic 5, 4, 448
  038e11c  mtctr 7
  038e120  fdivs 3, 9, 3
  038e124  fmuls 8, 3, 3
  038e128  stfs 3, 476(1)
  038e12c  stfs 3, 468(1)
  038e130  stfs 3, 472(1)
  038e134  stfs 3, 464(1)
  038e138  lfs 10, 476(1)
  038e13c  lfs 11, 468(1)
  038e140  lfs 12, 472(1)
  038e144  fmuls 9, 8, 8
  038e148  fmuls 11, 11, 8
  038e14c  fmuls 10, 10, 9
  038e150  fmuls 3, 9, 9
  038e154  fmuls 9, 12, 9
  038e158  stfs 11, 468(1)
  038e15c  fmuls 8, 10, 8
  038e160  stfs 9, 472(1)
  038e164  stfs 8, 476(1)
  038e168  lfs 8, 448(4)
  038e16c  fmuls 8, 8, 3
  038e170  stfs 8, 464(4)
  038e174  lfs 8, 4(5)
  038e178  addic 5, 5, 8
  038e17c  fmuls 8, 8, 3
  038e180  addic 4, 4, 8
  038e184  stfs 8, 4(6)
  038e188  addic 6, 6, 8
  038e18c  bdnz 0x38e168
  038e190  li 6, 4
  038e194  ori 4, 1, 0
  038e198  mtctr 6
  038e19c  lis 5, 115
  038e1a0  addic 6, 4, 464
  038e1a4  addic 5, 5, 22752
  038e1a8  ori 8, 6, 0
  038e1ac  lfs 3, 464(4)
  038e1b0  lfs 8, 0(5)
  038e1b4  fmuls 3, 3, 8
  038e1b8  lfs 8, 4(5)
  038e1bc  addic 5, 5, 8
  038e1c0  stfs 3, 464(4)
  038e1c4  lfs 3, 4(6)
  038e1c8  addic 4, 4, 8
  038e1cc  fmuls 3, 3, 8
  038e1d0  stfs 3, 4(6)
  038e1d4  addic 6, 6, 8
  038e1d8  bdnz 0x38e1ac
  038e1dc  ori 4, 1, 0
  038e1e0  fmr 3, 30
  038e1e4  mtctr 7
  038e1e8  lfs 8, 464(4)
  038e1ec  fadds 3, 3, 8
  038e1f0  lfs 8, 4(8)
  038e1f4  addic 4, 4, 16
  038e1f8  lfs 9, 8(8)
  038e1fc  lfs 10, 12(8)
  038e200  addic 8, 8, 16
  038e204  fadds 3, 3, 8
  038e208  fadds 3, 3, 9
  038e20c  fadds 3, 3, 10
  038e210  bdnz 0x38e1e8
  038e214  lis 4, 57
  038e218  addi 4, 4, -11700
  038e21c  lfs 8, 80(4)
  038e220  fadds 3, 3, 8
  038e224  fmadds 1, 3, 1, 2
  038e228  fsubs 2, 7, 6
  038e22c  fsubs 3, 5, 4
  038e230  fmuls 2, 2, 2
  038e234  fmadds 2, 3, 3, 2
  038e238  lfs 3, 24(31)
  038e23c  lfs 4, 200(1)
  038e240  stfs 1, 72(31)
  038e244  fsubs 1, 3, 4
  038e248  fsqrts 2, 2
  038e24c  stfs 1, 388(1)
  038e250  fabs 4, 1
  038e254  fabs 3, 2
  038e258  stfs 2, 384(1)
  038e25c  lwz 4, 388(1)
  038e260  rlwinm 4, 4, 3, 29, 29
  038e264  fsubs 1, 3, 4
  038e268  stfs 1, 392(1)
  038e26c  lwz 5, 384(1)
  038e270  lfs 1, 384(1)
  038e274  lfs 2, 388(1)
  038e278  lwz 6, 392(1)
  038e27c  lfs 5, 392(1)
  038e280  fabs 1, 1
  038e284  rlwimi 4, 6, 2, 30, 30
  038e288  fsub 6, 5, 30
  038e28c  fabs 2, 2
  038e290  fsub 5, 5, 30
  038e294  rlwimi 4, 5, 4, 28, 28
  038e298  ori 5, 3, 0
  038e29c  rlwimi 5, 4, 2, 26, 28
  038e2a0  slwi 4, 4, 2
  038e2a4  clrldi 5, 5, 32
  038e2a8  fsel 4, 6, 1, 4
  038e2ac  lfsx 1, 3, 4
  038e2b0  fsel 3, 5, 2, 3
  038e2b4  lfs 2, 4(5)
  038e2b8  fcmpu 0, 4, 30
  038e2bc  bt 1, 0x38e2c8
  038e2c0  fmr 1, 30
  038e2c4  b 0x38e3ec
  038e2c8  fsubs 5, 3, 4
  038e2cc  fadds 3, 3, 4
  038e2d0  addic 3, 1, 16
  038e2d4  li 7, 2
  038e2d8  addic 4, 3, 416
  038e2dc  addic 5, 3, 432
  038e2e0  mtctr 7
  038e2e4  fdivs 3, 5, 3
  038e2e8  fmuls 4, 3, 3
  038e2ec  stfs 3, 444(1)
  038e2f0  stfs 3, 436(1)
  038e2f4  stfs 3, 440(1)
  038e2f8  stfs 3, 432(1)
  038e2fc  lfs 6, 444(1)
  038e300  lfs 7, 436(1)
  038e304  lfs 8, 440(1)
  038e308  fmuls 5, 4, 4
  038e30c  fmuls 7, 7, 4
  038e310  fmuls 6, 6, 5
  038e314  fmuls 3, 5, 5
  038e318  fmuls 5, 8, 5
  038e31c  stfs 7, 436(1)
  038e320  fmuls 4, 6, 4
  038e324  stfs 5, 440(1)
  038e328  stfs 4, 444(1)
  038e32c  lfs 4, 416(3)
  038e330  fmuls 4, 4, 3
  038e334  stfs 4, 432(3)
  038e338  lfs 4, 4(4)
  038e33c  addic 3, 3, 8
  038e340  addic 4, 4, 8
  038e344  fmuls 4, 4, 3
  038e348  stfs 4, 4(5)
  038e34c  addic 5, 5, 8
  038e350  bdnz 0x38e32c
  038e354  li 5, 4
  038e358  ori 3, 1, 0
  038e35c  mtctr 5
  038e360  lis 4, 115
  038e364  addic 5, 3, 432
  038e368  addic 4, 4, 22752
  038e36c  ori 6, 5, 0
  038e370  lfs 3, 432(3)
  038e374  lfs 4, 0(4)
  038e378  fmuls 3, 3, 4
  038e37c  lfs 4, 4(4)
  038e380  addic 4, 4, 8
  038e384  stfs 3, 432(3)
  038e388  lfs 3, 4(5)
  038e38c  addic 3, 3, 8
  038e390  fmuls 3, 3, 4
  038e394  stfs 3, 4(5)
  038e398  addic 5, 5, 8
  038e39c  bdnz 0x38e370
  038e3a0  fmr 3, 30
  038e3a4  ori 3, 1, 0
  038e3a8  mtctr 7
  038e3ac  lfs 4, 432(3)
  038e3b0  fadds 3, 3, 4
  038e3b4  addic 3, 3, 16
  038e3b8  lfs 4, 4(6)
  038e3bc  lfs 5, 8(6)
  038e3c0  lfs 6, 12(6)
  038e3c4  addic 6, 6, 16
  038e3c8  fadds 3, 3, 4
  038e3cc  fadds 3, 3, 5
  038e3d0  fadds 3, 3, 6
  038e3d4  bdnz 0x38e3ac
  038e3d8  lis 3, 57
  038e3dc  addi 3, 3, -11700
  038e3e0  lfs 4, 80(3)
  038e3e4  fadds 3, 3, 4
  038e3e8  fmadds 1, 3, 1, 2
  038e3ec  fneg 1, 1
  038e3f0  li 3, 0
  038e3f4  stfs 1, 68(31)
  038e3f8  stw 3, 52(30)
  038e3fc  stw 3, 56(30)
  038e400  lwz 3, 16(31)
  038e404  cmpwi 3, 0
  038e408  bt 0, 0x38e424
  038e40c  lwz 3, 20(31)
  038e410  cmpwi 3, 0
  038e414  bt 0, 0x38e424
  038e418  lwz 3, 24(31)
  038e41c  cmpwi 3, 0
  038e420  bf 0, 0x38e434
  038e424  ori 3, 31, 0
  038e428  bl 0xefb38
  038e42c  nop
  038e430  b 0x38e8d8
  038e434  lfs 2, 244(1)
  038e438  lfs 1, 240(1)
  038e43c  fmuls 3, 2, 2
  038e440  fmr 4, 30
  038e444  lis 3, 131
  038e448  stw 31, 288(1)
  038e44c  lis 4, 16448
  038e450  li 5, 1
  038e454  stw 3, 292(1)
  038e458  fmadds 3, 1, 1, 3
  038e45c  fmr 5, 4
  038e460  stw 4, 300(1)
  038e464  stw 5, 304(1)
  038e468  fsqrts 6, 3
  038e46c  fcmpu 0, 6, 5
  038e470  bt 2, 0x38e4b0
  038e474  frsqrte 4, 3
  038e478  fmuls 5, 3, 4
  038e47c  fmuls 6, 31, 4
  038e480  fnmsubs 5, 5, 4, 28
  038e484  fmadds 4, 5, 6, 4
  038e488  fmuls 5, 3, 4
  038e48c  fmuls 6, 31, 4
  038e490  fnmsubs 5, 5, 4, 28
  038e494  fmadds 4, 5, 6, 4
  038e498  fmuls 3, 3, 4
  038e49c  fmuls 5, 31, 4
  038e4a0  fnmsubs 3, 3, 4, 28
  038e4a4  fmadds 4, 3, 5, 4
  038e4a8  fmuls 5, 1, 4
  038e4ac  fmuls 4, 2, 4
  038e4b0  lis 3, 17839
  038e4b4  lis 4, 16256
  038e4b8  stfs 5, 272(1)
  038e4bc  ori 5, 3, 57190
  038e4c0  stfs 4, 276(1)
  038e4c4  li 8, 3
  038e4c8  ori 3, 27, 0
  038e4cc  stw 4, 280(1)
  038e4d0  ori 6, 31, 0
  038e4d4  stw 5, 284(1)
  038e4d8  addic 7, 1, 272
  038e4dc  lhz 9, 166(31)
  038e4e0  ori 4, 26, 0
  038e4e4  stb 8, 296(1)
  038e4e8  li 5, 0
  038e4ec  stb 8, 297(1)
  038e4f0  sth 9, 298(1)
  038e4f4  bl 0x57820
  038e4f8  nop
  038e4fc  cmpwi 3, 0
  038e500  bt 2, 0x38e7c0
  038e504  lis 5, 161
  038e508  lis 3, 57
  038e50c  addic 5, 5, 2368
  038e510  addi 6, 3, -11700
  038e514  addic 3, 5, 64
  038e518  lwz 4, 24(5)
  038e51c  lfs 31, 120(6)
  038e520  cmpwi 4, 0
  038e524  lfs 29, 124(6)
  038e528  bt 2, 0x38e68c
  038e52c  lis 6, 151
  038e530  addic 6, 6, -25376
  038e534  lwz 6, 8320(6)
  038e538  cmpw 4, 6
  038e53c  bt 2, 0x38e82c
  038e540  lwz 6, 32(30)
  038e544  cmpw 4, 6
  038e548  bt 2, 0x38e82c
  038e54c  lhz 4, 166(4)
  038e550  cmpwi 1, 4, 0
  038e554  cmpwi 4, 457
  038e558  cror 2, 2, 6
  038e55c  bt 2, 0x38e82c
  038e560  ori 6, 5, 0
  038e564  ori 5, 3, 0
  038e568  li 3, 2
  038e56c  addic 30, 1, 208
  038e570  addic 4, 1, 240
  038e574  stb 3, 188(31)
  038e578  lfs 1, 32(6)
  038e57c  ori 3, 30, 0
  038e580  stfs 1, 16(31)
  038e584  lfs 1, 36(6)
  038e588  stfs 1, 20(31)
  038e58c  lfs 1, 40(6)
  038e590  stfs 1, 24(31)
  038e594  lfs 1, 44(6)
  038e598  stfs 1, 28(31)
  038e59c  bl 0x500608
  038e5a0  nop
  038e5a4  lfs 3, 212(1)
  038e5a8  lfs 8, 208(1)
  038e5ac  fmuls 1, 3, 3
  038e5b0  lfs 9, 216(1)
  038e5b4  lis 3, 57
  038e5b8  addi 6, 3, -11700
  038e5bc  lis 3, 114
  038e5c0  fmr 5, 31
  038e5c4  fmadds 1, 8, 8, 1
  038e5c8  lfs 4, 72(6)
  038e5cc  fmr 7, 29
  038e5d0  li 12, 0
  038e5d4  li 11, 1
  038e5d8  fmr 2, 30
  038e5dc  li 7, -1
  038e5e0  fmr 6, 28
  038e5e4  fmadds 1, 9, 9, 1
  038e5e8  ori 4, 30, 0
  038e5ec  li 10, 9
  038e5f0  li 5, 0
  038e5f4  li 8, 10
  038e5f8  li 9, 3
  038e5fc  fsqrts 10, 1
  038e600  lfs 1, -3052(3)
  038e604  std 12, 144(1)
  038e608  ori 3, 31, 0
  038e60c  std 11, 160(1)
  038e610  std 11, 168(1)
  038e614  std 7, 176(1)
  038e618  std 12, 184(1)
  038e61c  fmuls 11, 1, 4
  038e620  fmr 1, 30
  038e624  fdivs 11, 11, 10
  038e628  fsub 12, 30, 10
  038e62c  fsub 13, 30, 10
  038e630  fsub 0, 30, 10
  038e634  fsub 31, 10, 30
  038e638  fsub 29, 10, 30
  038e63c  fsub 10, 10, 30
  038e640  fmuls 8, 8, 11
  038e644  fmuls 3, 3, 11
  038e648  fmuls 9, 9, 11
  038e64c  fsel 11, 12, 30, 8
  038e650  fsel 12, 13, 30, 3
  038e654  fsel 13, 0, 30, 9
  038e658  fsel 8, 31, 11, 8
  038e65c  fsel 3, 29, 12, 3
  038e660  fsel 9, 10, 13, 9
  038e664  stfs 8, 208(1)
  038e668  stfs 3, 212(1)
  038e66c  stfs 9, 216(1)
  038e670  lfs 3, 68(6)
  038e674  bl 0x10e030
  038e678  nop
  038e67c  ori 3, 31, 0
  038e680  bl 0xefb38
  038e684  nop
  038e688  b 0x38e8d8
  038e68c  lwz 4, 28(5)
  038e690  cmpwi 4, 0
  038e694  bf 1, 0x38e82c
  038e698  ori 6, 5, 0
  038e69c  li 30, 1
  038e6a0  addic 29, 1, 208
  038e6a4  ori 5, 3, 0
  038e6a8  addic 4, 1, 240
  038e6ac  stb 30, 188(31)
  038e6b0  lfs 1, 32(6)
  038e6b4  ori 3, 29, 0
  038e6b8  stfs 1, 16(31)
  038e6bc  lfs 1, 36(6)
  038e6c0  stfs 1, 20(31)
  038e6c4  lfs 1, 40(6)
  038e6c8  stfs 1, 24(31)
  038e6cc  lfs 1, 44(6)
  038e6d0  stfs 1, 28(31)
  038e6d4  bl 0x500608
  038e6d8  nop
  038e6dc  lfs 3, 212(1)
  038e6e0  lfs 8, 208(1)
  038e6e4  fmuls 1, 3, 3
  038e6e8  lfs 9, 216(1)
  038e6ec  lis 3, 57
  038e6f0  addi 6, 3, -11700
  038e6f4  lis 3, 114
  038e6f8  fmadds 1, 8, 8, 1
  038e6fc  lfs 4, 72(6)
  038e700  fmr 5, 31
  038e704  li 11, 0
  038e708  fmr 7, 29
  038e70c  li 7, -1
  038e710  li 8, 10
  038e714  fmr 2, 28
  038e718  fmadds 1, 9, 9, 1
  038e71c  li 9, 3
  038e720  ori 4, 29, 0
  038e724  fmr 6, 28
  038e728  li 10, 9
  038e72c  li 5, 0
  038e730  fsqrts 10, 1
  038e734  lfs 1, -3052(3)
  038e738  std 11, 144(1)
  038e73c  ori 3, 31, 0
  038e740  std 30, 160(1)
  038e744  std 30, 168(1)
  038e748  std 7, 176(1)
  038e74c  std 11, 184(1)
  038e750  fmuls 11, 1, 4
  038e754  fmr 1, 30
  038e758  fdivs 11, 11, 10
  038e75c  fsub 12, 30, 10
  038e760  fsub 13, 30, 10
  038e764  fsub 0, 30, 10
  038e768  fsub 31, 10, 30
  038e76c  fsub 29, 10, 30
  038e770  fsub 10, 10, 30
  038e774  fmuls 8, 8, 11
  038e778  fmuls 3, 3, 11
  038e77c  fmuls 9, 9, 11
  038e780  fsel 11, 12, 30, 8
  038e784  fsel 12, 13, 30, 3
  038e788  fsel 13, 0, 30, 9
  038e78c  fsel 8, 31, 11, 8
  038e790  fsel 3, 29, 12, 3
  038e794  fsel 9, 10, 13, 9
  038e798  stfs 8, 208(1)
  038e79c  stfs 3, 212(1)
  038e7a0  stfs 9, 216(1)
  038e7a4  lfs 3, 68(6)
  038e7a8  bl 0x10e030
  038e7ac  nop
  038e7b0  ori 3, 31, 0
  038e7b4  bl 0xefb38
  038e7b8  nop
  038e7bc  b 0x38e8d8
  038e7c0  addic 3, 30, 36
  038e7c4  bl 0x4fff60
  038e7c8  nop
  038e7cc  cmpwi 3, 0
  038e7d0  bf 2, 0x38e81c
  038e7d4  lis 3, 151
  038e7d8  lfs 1, 20(31)
  038e7dc  addic 3, 3, -25376
  038e7e0  lwz 3, 8320(3)
  038e7e4  lfs 2, 16(31)
  038e7e8  lfs 3, 20(3)
  038e7ec  lfs 4, 16(3)
  038e7f0  fsubs 1, 1, 3
  038e7f4  fsubs 2, 2, 4
  038e7f8  lis 3, 57
  038e7fc  addi 3, 3, -11700
  038e800  fmuls 1, 1, 1
  038e804  fmadds 1, 2, 2, 1
  038e808  lfs 2, 128(3)
  038e80c  fsqrts 1, 1
  038e810  fcmpu 0, 1, 2
  038e814  cror 6, 0, 2
  038e818  bt 6, 0x38e82c
  038e81c  ori 3, 31, 0
  038e820  bl 0xefb38
  038e824  nop
  038e828  b 0x38e8d8
  038e82c  lis 3, 57
  038e830  lis 4, 114
  038e834  addi 3, 3, -11700
  038e838  lfs 1, 132(3)
  038e83c  lfs 2, -3056(4)
  038e840  lwz 3, 36(30)
  038e844  fmuls 1, 2, 1
  038e848  fctiwz 1, 1
  038e84c  stfd 1, 560(1)
  038e850  lwz 4, 564(1)
  038e854  divw 5, 3, 4
  038e858  mullw 4, 5, 4
  038e85c  subc 3, 3, 4
  038e860  cmpwi 3, 0
  038e864  bf 2, 0x38e8d8
  038e868  bl 0x5c8318
  038e86c  nop
  038e870  clrlwi 3, 3, 31
  038e874  cmpwi 3, 0
  038e878  bt 2, 0x38e8a0
  038e87c  lis 3, 57
  038e880  addi 3, 3, -11700
  038e884  lfs 1, 136(3)
  038e888  lfs 2, 140(3)
  038e88c  bl 0xfcbe8
  038e890  nop
  038e894  lfs 2, 80(30)
  038e898  fmuls 1, 2, 1
  038e89c  stfs 1, 80(30)
  038e8a0  bl 0x5c8318
  038e8a4  nop
  038e8a8  clrlwi 3, 3, 31
  038e8ac  cmpwi 3, 0
  038e8b0  bt 2, 0x38e8d8
  038e8b4  lis 3, 57
  038e8b8  addi 3, 3, -11700
  038e8bc  lfs 1, 144(3)
  038e8c0  lfs 2, 148(3)
  038e8c4  bl 0xfcbe8
  038e8c8  nop
  038e8cc  lfs 2, 84(30)
  038e8d0  fmuls 1, 2, 1
  038e8d4  stfs 1, 84(30)
  038e8d8  ld 0, 752(1)
  038e8dc  mtlr 0
  038e8e0  lfd 18, 624(1)
  038e8e4  lfd 19, 632(1)
  038e8e8  lfd 20, 640(1)
  038e8ec  lfd 21, 648(1)
  038e8f0  lfd 22, 656(1)
  038e8f4  lfd 23, 664(1)
  038e8f8  lfd 24, 672(1)
  038e8fc  lfd 25, 680(1)
  038e900  lfd 26, 688(1)
  038e904  lfd 27, 696(1)
  038e908  lfd 28, 704(1)
  038e90c  lfd 29, 712(1)
  038e910  lfd 30, 720(1)
  038e914  lfd 31, 728(1)
  038e918  ld 26, 576(1)
  038e91c  ld 27, 584(1)
  038e920  ld 28, 592(1)
  038e924  ld 29, 600(1)
  038e928  ld 30, 608(1)
  038e92c  ld 31, 616(1)
  038e930  addi 1, 1, 736
  038e934  blr
