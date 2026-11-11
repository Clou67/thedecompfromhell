# game/update/camera16.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_UNKNOWN:   # 0x3c818, 0x14 bytes
  003c818  lis 3, 114
  003c81c  lis 4, 1
  003c820  addic 3, 3, -9896
  003c824  stw 4, 72(3)
  003c828  blr

Cam16_AreMobyGroupDead:   # 0x3c830, 0x6c bytes
  003c830  lis 4, 165
  003c834  sldi 3, 3, 2
  003c838  addic 4, 4, -28284
  003c83c  extsw 3, 3
  003c840  lis 5, 164
  003c844  lwzx 4, 4, 3
  003c848  lwz 3, -28512(5)
  003c84c  cmpwi 4, 0
  003c850  bf 2, 0x3c85c
  003c854  li 3, 1
  003c858  b 0x3c898
  003c85c  lhz 5, 0(4)
  003c860  rlwinm 5, 5, 8, 9, 23
  003c864  addc 5, 3, 5
  003c868  clrldi 5, 5, 32
  003c86c  lbz 5, 32(5)
  003c870  cmpwi 5, 128
  003c874  bf 0, 0x3c880
  003c878  li 3, 0
  003c87c  b 0x3c898
  003c880  lhz 5, 0(4)
  003c884  addic 4, 4, 2
  003c888  extsh 5, 5
  003c88c  cmpwi 5, 0
  003c890  bf 0, 0x3c85c
  003c894  li 3, 1
  003c898  blr

Cam16_InitSplineSegLens:   # 0x3c89c, 0xc0 bytes
  003c89c  lis 4, 149
  003c8a0  lhz 3, 132(3)
  003c8a4  lis 5, 165
  003c8a8  extsh 3, 3
  003c8ac  addic 6, 5, 7136
  003c8b0  sldi 3, 3, 5
  003c8b4  lwz 4, 16468(4)
  003c8b8  li 5, 0
  003c8bc  addc 3, 4, 3
  003c8c0  ori 4, 5, 0
  003c8c4  clrldi 7, 3, 32
  003c8c8  lwz 7, 28(7)
  003c8cc  lwz 3, 20(7)
  003c8d0  slwi 3, 3, 2
  003c8d4  extsw 3, 3
  003c8d8  lwzx 6, 6, 3
  003c8dc  lwz 3, 0(6)
  003c8e0  cmpwi 3, 0
  003c8e4  bf 1, 0x3c954
  003c8e8  ori 9, 6, 0
  003c8ec  addic 8, 9, 16
  003c8f0  addic 5, 5, 1
  003c8f4  divw 10, 5, 3
  003c8f8  mullw 3, 10, 3
  003c8fc  lfs 1, 20(9)
  003c900  subc 3, 5, 3
  003c904  lfs 2, 16(9)
  003c908  sldi 3, 3, 4
  003c90c  lfs 3, 24(9)
  003c910  addc 3, 3, 8
  003c914  clrldi 3, 3, 32
  003c918  lfs 4, 4(3)
  003c91c  lfs 5, 0(3)
  003c920  fsubs 1, 1, 4
  003c924  fsubs 2, 2, 5
  003c928  lfs 4, 8(3)
  003c92c  fsubs 3, 3, 4
  003c930  lwz 3, 0(6)
  003c934  cmpw 5, 3
  003c938  fmuls 1, 1, 1
  003c93c  fmadds 1, 2, 2, 1
  003c940  fmadds 1, 3, 3, 1
  003c944  fsqrts 1, 1
  003c948  stfs 1, 28(9)
  003c94c  addic 9, 9, 16
  003c950  bt 0, 0x3c8f0
  003c954  stw 4, 48(7)
  003c958  blr

Cam16_IsHeroInVolume:   # 0x3c95c, 0xd4 bytes
  003c95c  stdu 1, -112(1)
  003c960  mflr 0
  003c964  std 0, 128(1)
  003c968  lis 4, 149
  003c96c  lhz 3, 132(3)
  003c970  extsh 3, 3
  003c974  lwz 4, 16468(4)
  003c978  sldi 3, 3, 5
  003c97c  addc 3, 4, 3
  003c980  clrldi 3, 3, 32
  003c984  lwz 3, 28(3)
  003c988  lwz 4, 12(3)
  003c98c  cmpwi 4, 0
  003c990  bt 0, 0x3c9b8
  003c994  lis 3, 151
  003c998  extsw 4, 4
  003c99c  addic 3, 3, -25376
  003c9a0  addic 3, 3, 128
  003c9a4  bl 0x110b70
  003c9a8  nop
  003c9ac  cmpwi 3, 0
  003c9b0  bf 2, 0x3ca14
  003c9b4  b 0x3ca1c
  003c9b8  lwz 4, 16(3)
  003c9bc  cmpwi 4, 0
  003c9c0  bt 0, 0x3c9e8
  003c9c4  lis 3, 151
  003c9c8  extsw 4, 4
  003c9cc  addic 3, 3, -25376
  003c9d0  addic 3, 3, 128
  003c9d4  bl 0x110c60
  003c9d8  nop
  003c9dc  cmpwi 3, 0
  003c9e0  bf 2, 0x3ca14
  003c9e4  b 0x3ca1c
  003c9e8  lwz 3, 8(3)
  003c9ec  cmpwi 3, 0
  003c9f0  bt 0, 0x3ca1c
  003c9f4  lis 5, 151
  003c9f8  extsw 4, 3
  003c9fc  addic 3, 5, -25376
  003ca00  addic 3, 3, 128
  003ca04  bl 0x110d48
  003ca08  nop
  003ca0c  cmpwi 3, 0
  003ca10  bt 2, 0x3ca1c
  003ca14  li 3, 1
  003ca18  b 0x3ca20
  003ca1c  li 3, 0
  003ca20  ld 0, 128(1)
  003ca24  mtlr 0
  003ca28  addi 1, 1, 112
  003ca2c  blr

Cam16_ModifyFollowCam:   # 0x3ca68, 0x804 bytes
  003ca68  stdu 1, -304(1)
  003ca6c  mflr 0
  003ca70  std 0, 320(1)
  003ca74  stfd 29, 280(1)
  003ca78  stfd 30, 288(1)
  003ca7c  stfd 31, 296(1)
  003ca80  std 31, 272(1)
  003ca84  ori 31, 3, 0
  003ca88  lis 4, 149
  003ca8c  lhz 5, 132(31)
  003ca90  lwz 4, 16468(4)
  003ca94  extsh 5, 5
  003ca98  sldi 5, 5, 5
  003ca9c  std 29, 256(1)
  003caa0  addc 4, 4, 5
  003caa4  clrldi 29, 4, 32
  003caa8  std 30, 264(1)
  003caac  std 28, 248(1)
  003cab0  std 27, 240(1)
  003cab4  lwz 29, 28(29)
  003cab8  bl 0x32c24
  003cabc  nop
  003cac0  cmpwi 3, 0
  003cac4  bt 1, 0x3cadc
  003cac8  li 3, 0
  003cacc  li 4, 1
  003cad0  stw 3, 48(29)
  003cad4  stw 4, 36(29)
  003cad8  b 0x3d23c
  003cadc  lwz 3, 60(29)
  003cae0  cmpwi 3, 0
  003cae4  bt 0, 0x3cb54
  003cae8  lis 4, 165
  003caec  slwi 3, 3, 2
  003caf0  addic 4, 4, -28284
  003caf4  extsw 3, 3
  003caf8  lis 5, 164
  003cafc  lwzx 3, 4, 3
  003cb00  lwz 4, -28512(5)
  003cb04  cmpwi 3, 0
  003cb08  bt 2, 0x3cb3c
  003cb0c  lhz 5, 0(3)
  003cb10  rlwinm 5, 5, 8, 9, 23
  003cb14  addc 5, 4, 5
  003cb18  clrldi 5, 5, 32
  003cb1c  lbz 5, 32(5)
  003cb20  cmpwi 5, 128
  003cb24  bt 0, 0x3cb54
  003cb28  lhz 5, 0(3)
  003cb2c  addic 3, 3, 2
  003cb30  extsh 5, 5
  003cb34  cmpwi 5, 0
  003cb38  bf 0, 0x3cb0c
  003cb3c  li 4, -1
  003cb40  ori 3, 31, 0
  003cb44  stw 4, 36(29)
  003cb48  bl 0x32bd4
  003cb4c  nop
  003cb50  b 0x3d23c
  003cb54  lis 3, 149
  003cb58  lhz 4, 132(31)
  003cb5c  lis 28, 151
  003cb60  extsh 4, 4
  003cb64  addic 28, 28, -25376
  003cb68  lwz 3, 16468(3)
  003cb6c  sldi 4, 4, 5
  003cb70  addic 30, 28, 128
  003cb74  addc 3, 3, 4
  003cb78  clrldi 3, 3, 32
  003cb7c  lwz 3, 28(3)
  003cb80  lwz 4, 12(3)
  003cb84  cmpwi 4, 0
  003cb88  bt 0, 0x3cba8
  003cb8c  ori 3, 30, 0
  003cb90  extsw 4, 4
  003cb94  bl 0x110b70
  003cb98  nop
  003cb9c  cmpwi 3, 0
  003cba0  bf 2, 0x3cc14
  003cba4  b 0x3cbf4
  003cba8  lwz 4, 16(3)
  003cbac  cmpwi 4, 0
  003cbb0  bt 0, 0x3cbd0
  003cbb4  ori 3, 30, 0
  003cbb8  extsw 4, 4
  003cbbc  bl 0x110c60
  003cbc0  nop
  003cbc4  cmpwi 3, 0
  003cbc8  bf 2, 0x3cc14
  003cbcc  b 0x3cbf4
  003cbd0  lwz 3, 8(3)
  003cbd4  cmpwi 3, 0
  003cbd8  bt 0, 0x3cbf4
  003cbdc  extsw 4, 3
  003cbe0  ori 3, 30, 0
  003cbe4  bl 0x110d48
  003cbe8  nop
  003cbec  cmpwi 3, 0
  003cbf0  bf 2, 0x3cc14
  003cbf4  ori 3, 31, 0
  003cbf8  bl 0x32bd4
  003cbfc  nop
  003cc00  li 3, 0
  003cc04  li 4, 1
  003cc08  stw 3, 48(29)
  003cc0c  stw 4, 36(29)
  003cc10  b 0x3d23c
  003cc14  lis 3, 150
  003cc18  lis 4, 16025
  003cc1c  ori 4, 4, 39322
  003cc20  lwz 3, 19008(3)
  003cc24  clrlwi 3, 3, 1
  003cc28  cmpw 3, 4
  003cc2c  bt 1, 0x3cc50
  003cc30  lis 3, 150
  003cc34  lis 4, 16025
  003cc38  addic 3, 3, 19008
  003cc3c  ori 4, 4, 39322
  003cc40  lwz 3, 4(3)
  003cc44  clrlwi 3, 3, 1
  003cc48  cmpw 3, 4
  003cc4c  bf 1, 0x3cca0
  003cc50  ori 3, 31, 0
  003cc54  bl 0x32bd4
  003cc58  nop
  003cc5c  lis 3, 4
  003cc60  vspltisw 2, -1
  003cc64  lis 4, 114
  003cc68  addi 3, 3, -13776
  003cc6c  li 5, -3056
  003cc70  vslw 2, 2, 2
  003cc74  <unknown>
  003cc78  <unknown>
  003cc7c  vspltw 3, 3, 0
  003cc80  li 3, 48
  003cc84  li 4, 1
  003cc88  vmaddfp 2, 4, 3, 2
  003cc8c  vctsxs 2, 2, 0
  003cc90  vspltw 2, 2, 0
  003cc94  stvewx 2, 3, 29
  003cc98  stw 4, 36(29)
  003cc9c  b 0x3d23c
  003cca0  addic 3, 29, 48
  003cca4  bl 0x4fff60
  003cca8  nop
  003ccac  cmpwi 3, 0
  003ccb0  bf 2, 0x3cccc
  003ccb4  ori 3, 31, 0
  003ccb8  bl 0x32bd4
  003ccbc  nop
  003ccc0  li 3, 1
  003ccc4  stw 3, 36(29)
  003ccc8  b 0x3d23c
  003cccc  lis 3, 4
  003ccd0  li 5, 0
  003ccd4  addi 3, 3, -13776
  003ccd8  lis 6, 165
  003ccdc  ori 4, 30, 0
  003cce0  stw 5, 160(1)
  003cce4  addic 30, 6, 7136
  003cce8  lfs 29, 4(3)
  003ccec  stw 5, 164(1)
  003ccf0  addic 7, 1, 164
  003ccf4  lwz 6, 20(29)
  003ccf8  addic 5, 1, 128
  003ccfc  lfs 1, 8(3)
  003cd00  li 9, 0
  003cd04  slwi 6, 6, 2
  003cd08  lfs 2, 12(3)
  003cd0c  fmr 3, 29
  003cd10  extsw 3, 6
  003cd14  addic 6, 1, 160
  003cd18  lwzx 30, 30, 3
  003cd1c  ori 3, 30, 0
  003cd20  bl 0x10d7a0
  003cd24  nop
  003cd28  cmpwi 3, 0
  003cd2c  bf 2, 0x3cd40
  003cd30  ori 3, 31, 0
  003cd34  bl 0x32bd4
  003cd38  nop
  003cd3c  b 0x3d23c
  003cd40  lfs 1, 132(28)
  003cd44  lfs 2, 132(1)
  003cd48  lfs 3, 128(28)
  003cd4c  fsubs 1, 1, 2
  003cd50  lfs 2, 128(1)
  003cd54  fsubs 2, 3, 2
  003cd58  fmuls 1, 1, 1
  003cd5c  fmadds 1, 2, 2, 1
  003cd60  lfs 2, 32(29)
  003cd64  fsqrts 1, 1
  003cd68  fcmpu 0, 1, 2
  003cd6c  cror 6, 0, 2
  003cd70  bt 6, 0x3cd84
  003cd74  ori 3, 31, 0
  003cd78  bl 0x32bd4
  003cd7c  nop
  003cd80  b 0x3d23c
  003cd84  lwz 3, 160(1)
  003cd88  lis 31, 149
  003cd8c  slwi 3, 3, 4
  003cd90  addic 31, 31, 5056
  003cd94  addc 3, 30, 3
  003cd98  clrldi 3, 3, 32
  003cd9c  lfs 5, 324(31)
  003cda0  lfs 4, 320(31)
  003cda4  lfs 1, 20(3)
  003cda8  lfs 31, 16(3)
  003cdac  fsubs 5, 1, 5
  003cdb0  fsubs 4, 31, 4
  003cdb4  fmr 2, 29
  003cdb8  fmuls 6, 5, 5
  003cdbc  fmr 3, 2
  003cdc0  fmadds 6, 4, 4, 6
  003cdc4  fsqrts 7, 6
  003cdc8  fcmpu 0, 7, 3
  003cdcc  bt 2, 0x3ce1c
  003cdd0  frsqrte 2, 6
  003cdd4  lis 4, 4
  003cdd8  addi 4, 4, -13776
  003cddc  lfs 3, 16(4)
  003cde0  lfs 7, 20(4)
  003cde4  fmuls 8, 6, 2
  003cde8  fmuls 9, 3, 2
  003cdec  fnmsubs 8, 8, 2, 7
  003cdf0  fmadds 2, 8, 9, 2
  003cdf4  fmuls 8, 6, 2
  003cdf8  fmuls 9, 3, 2
  003cdfc  fnmsubs 8, 8, 2, 7
  003ce00  fmadds 2, 8, 9, 2
  003ce04  fmuls 6, 6, 2
  003ce08  fmuls 3, 3, 2
  003ce0c  fnmsubs 6, 6, 2, 7
  003ce10  fmadds 3, 6, 3, 2
  003ce14  fmuls 2, 4, 3
  003ce18  fmuls 3, 5, 3
  003ce1c  lfs 6, 36(3)
  003ce20  lfs 5, 32(3)
  003ce24  fsubs 6, 6, 1
  003ce28  fsubs 5, 5, 31
  003ce2c  fmr 31, 29
  003ce30  fmuls 4, 6, 6
  003ce34  fmr 1, 31
  003ce38  fmadds 4, 5, 5, 4
  003ce3c  fsqrts 7, 4
  003ce40  fcmpu 0, 7, 1
  003ce44  bt 2, 0x3ce94
  003ce48  frsqrte 1, 4
  003ce4c  lis 3, 4
  003ce50  addi 3, 3, -13776
  003ce54  lfs 7, 16(3)
  003ce58  lfs 8, 20(3)
  003ce5c  fmuls 9, 4, 1
  003ce60  fmuls 10, 7, 1
  003ce64  fnmsubs 9, 9, 1, 8
  003ce68  fmadds 1, 9, 10, 1
  003ce6c  fmuls 9, 4, 1
  003ce70  fmuls 10, 7, 1
  003ce74  fnmsubs 9, 9, 1, 8
  003ce78  fmadds 1, 9, 10, 1
  003ce7c  fmuls 4, 4, 1
  003ce80  fmuls 7, 7, 1
  003ce84  fnmsubs 4, 4, 1, 8
  003ce88  fmadds 1, 4, 7, 1
  003ce8c  fmuls 31, 5, 1
  003ce90  fmuls 1, 6, 1
  003ce94  fmuls 1, 1, 3
  003ce98  lis 3, 4
  003ce9c  addic 4, 1, 144
  003cea0  addi 27, 3, -13776
  003cea4  ori 3, 30, 0
  003cea8  addic 5, 1, 160
  003ceac  addic 6, 1, 164
  003ceb0  li 8, 0
  003ceb4  fmadds 1, 31, 2, 1
  003ceb8  lfs 31, 20(27)
  003cebc  lfs 4, 24(27)
  003cec0  lfs 3, 40(29)
  003cec4  fmr 2, 4
  003cec8  fsub 1, 1, 29
  003cecc  fsel 1, 1, 31, 2
  003ced0  fmuls 1, 3, 1
  003ced4  bl 0x10ce18
  003ced8  nop
  003cedc  lfs 1, 148(1)
  003cee0  lfs 2, 132(28)
  003cee4  lfs 3, 144(1)
  003cee8  fsubs 1, 1, 2
  003ceec  lfs 2, 128(28)
  003cef0  fsubs 2, 3, 2
  003cef4  fmuls 1, 1, 1
  003cef8  fmadds 1, 2, 2, 1
  003cefc  lfs 2, 16(27)
  003cf00  lfs 3, 40(29)
  003cf04  fsubs 2, 3, 2
  003cf08  fsqrts 1, 1
  003cf0c  fcmpu 0, 1, 2
  003cf10  cror 6, 1, 2
  003cf14  bt 6, 0x3cf24
  003cf18  li 3, 1
  003cf1c  stw 3, 36(29)
  003cf20  b 0x3d23c
  003cf24  lis 3, 4
  003cf28  lis 4, 114
  003cf2c  addi 3, 3, -13776
  003cf30  lfs 1, 28(3)
  003cf34  lfs 2, -3056(4)
  003cf38  fmuls 1, 2, 1
  003cf3c  fctiwz 1, 1
  003cf40  stfd 1, 216(1)
  003cf44  lwz 3, 220(1)
  003cf48  extsw 3, 3
  003cf4c  bl 0x502730
  003cf50  nop
  003cf54  fmr 30, 1
  003cf58  lwz 3, 36(29)
  003cf5c  extsw 3, 3
  003cf60  bl 0x502730
  003cf64  nop
  003cf68  fsub 5, 30, 1
  003cf6c  fmr 2, 29
  003cf70  fmr 3, 31
  003cf74  fmr 4, 29
  003cf78  fsel 5, 5, 1, 30
  003cf7c  fmr 1, 31
  003cf80  fdivs 5, 5, 30
  003cf84  bl 0xfec94
  003cf88  nop
  003cf8c  lfs 2, 144(1)
  003cf90  lfs 3, 320(31)
  003cf94  lfs 4, 148(1)
  003cf98  lfs 5, 324(31)
  003cf9c  fsubs 2, 2, 3
  003cfa0  lfs 30, 0(29)
  003cfa4  fsubs 3, 4, 5
  003cfa8  fmr 31, 1
  003cfac  lis 3, 115
  003cfb0  addic 3, 3, 22784
  003cfb4  fabs 4, 2
  003cfb8  fabs 5, 3
  003cfbc  stfs 2, 168(1)
  003cfc0  stfs 3, 172(1)
  003cfc4  fmuls 30, 30, 31
  003cfc8  fsubs 2, 4, 5
  003cfcc  stfs 2, 176(1)
  003cfd0  lwz 4, 168(1)
  003cfd4  lfs 1, 168(1)
  003cfd8  lwz 5, 172(1)
  003cfdc  lfs 2, 172(1)
  003cfe0  lfs 3, 344(31)
  003cfe4  fabs 1, 1
  003cfe8  fabs 6, 2
  003cfec  rlwinm 5, 5, 3, 29, 29
  003cff0  lwz 6, 176(1)
  003cff4  lfs 2, 176(1)
  003cff8  rlwimi 5, 6, 2, 30, 30
  003cffc  fsub 7, 2, 29
  003d000  fsub 8, 2, 29
  003d004  rlwimi 5, 4, 4, 28, 28
  003d008  ori 4, 3, 0
  003d00c  rlwimi 4, 5, 2, 26, 28
  003d010  slwi 5, 5, 2
  003d014  clrldi 4, 4, 32
  003d018  fsel 5, 7, 1, 5
  003d01c  lfsx 1, 3, 5
  003d020  lfs 2, 4(4)
  003d024  fsel 4, 8, 6, 4
  003d028  fcmpu 0, 5, 29
  003d02c  bt 1, 0x3d038
  003d030  fmr 1, 29
  003d034  b 0x3d15c
  003d038  fsubs 6, 4, 5
  003d03c  fadds 4, 4, 5
  003d040  addic 3, 1, 16
  003d044  li 7, 2
  003d048  addic 4, 3, 164
  003d04c  addic 5, 3, 180
  003d050  mtctr 7
  003d054  fdivs 4, 6, 4
  003d058  fmuls 5, 4, 4
  003d05c  stfs 4, 192(1)
  003d060  stfs 4, 184(1)
  003d064  stfs 4, 188(1)
  003d068  stfs 4, 180(1)
  003d06c  lfs 7, 192(1)
  003d070  lfs 8, 184(1)
  003d074  lfs 9, 188(1)
  003d078  fmuls 6, 5, 5
  003d07c  fmuls 8, 8, 5
  003d080  fmuls 7, 7, 6
  003d084  fmuls 4, 6, 6
  003d088  fmuls 6, 9, 6
  003d08c  stfs 8, 184(1)
  003d090  fmuls 5, 7, 5
  003d094  stfs 6, 188(1)
  003d098  stfs 5, 192(1)
  003d09c  lfs 5, 164(3)
  003d0a0  fmuls 5, 5, 4
  003d0a4  stfs 5, 180(3)
  003d0a8  lfs 5, 4(4)
  003d0ac  addic 3, 3, 8
  003d0b0  addic 4, 4, 8
  003d0b4  fmuls 5, 5, 4
  003d0b8  stfs 5, 4(5)
  003d0bc  addic 5, 5, 8
  003d0c0  bdnz 0x3d09c
  003d0c4  li 5, 4
  003d0c8  ori 3, 1, 0
  003d0cc  mtctr 5
  003d0d0  lis 4, 115
  003d0d4  addic 5, 3, 180
  003d0d8  addic 4, 4, 22752
  003d0dc  ori 6, 5, 0
  003d0e0  lfs 4, 180(3)
  003d0e4  lfs 5, 0(4)
  003d0e8  fmuls 4, 4, 5
  003d0ec  lfs 5, 4(4)
  003d0f0  addic 4, 4, 8
  003d0f4  stfs 4, 180(3)
  003d0f8  lfs 4, 4(5)
  003d0fc  addic 3, 3, 8
  003d100  fmuls 4, 4, 5
  003d104  stfs 4, 4(5)
  003d108  addic 5, 5, 8
  003d10c  bdnz 0x3d0e0
  003d110  fmr 4, 29
  003d114  ori 3, 1, 0
  003d118  mtctr 7
  003d11c  lfs 5, 180(3)
  003d120  fadds 4, 4, 5
  003d124  addic 3, 3, 16
  003d128  lfs 5, 4(6)
  003d12c  lfs 6, 8(6)
  003d130  lfs 7, 12(6)
  003d134  addic 6, 6, 16
  003d138  fadds 4, 4, 5
  003d13c  fadds 4, 4, 6
  003d140  fadds 4, 4, 7
  003d144  bdnz 0x3d11c
  003d148  lis 3, 4
  003d14c  addi 3, 3, -13776
  003d150  lfs 5, 32(3)
  003d154  fadds 4, 4, 5
  003d158  fmadds 1, 4, 1, 2
  003d15c  fmr 2, 3
  003d160  bl 0x5026a0
  003d164  nop
  003d168  lis 3, 4
  003d16c  lfs 2, 44(29)
  003d170  fmr 3, 1
  003d174  addi 3, 3, -13776
  003d178  lfs 1, 36(3)
  003d17c  fmuls 2, 2, 1
  003d180  fcmpu 0, 3, 2
  003d184  bt 1, 0x3d1a0
  003d188  fmuls 1, 30, 1
  003d18c  addic 3, 1, 144
  003d190  fmr 2, 29
  003d194  bl 0x2f31c
  003d198  nop
  003d19c  b 0x3d1a8
  003d1a0  li 3, 1
  003d1a4  stw 3, 36(29)
  003d1a8  lwz 3, 52(29)
  003d1ac  lfs 1, 52(29)
  003d1b0  cmpwi 3, 0
  003d1b4  bt 2, 0x3d1d0
  003d1b8  lis 3, 4
  003d1bc  li 4, 0
  003d1c0  addi 3, 3, -13776
  003d1c4  lfs 2, 40(3)
  003d1c8  bl 0x2f3d8
  003d1cc  nop
  003d1d0  lwz 3, 56(29)
  003d1d4  lfs 1, 56(29)
  003d1d8  cmpwi 3, 0
  003d1dc  bt 2, 0x3d1f4
  003d1e0  lis 3, 4
  003d1e4  addi 3, 3, -13776
  003d1e8  lfs 2, 40(3)
  003d1ec  bl 0x2e354
  003d1f0  nop
  003d1f4  li 3, 0
  003d1f8  bl 0x2f064
  003d1fc  nop
  003d200  bl 0x2f3b0
  003d204  nop
  003d208  bl 0x2f03c
  003d20c  nop
  003d210  lis 3, 4
  003d214  addi 3, 3, -13776
  003d218  lfs 1, 44(3)
  003d21c  lfs 3, 48(3)
  003d220  lfs 2, 52(3)
  003d224  fmadds 1, 31, 1, 3
  003d228  bl 0x2eff8
  003d22c  nop
  003d230  lwz 3, 36(29)
  003d234  addic 3, 3, 1
  003d238  stw 3, 36(29)
  003d23c  ld 0, 320(1)
  003d240  mtlr 0
  003d244  lfd 29, 280(1)
  003d248  lfd 30, 288(1)
  003d24c  lfd 31, 296(1)
  003d250  ld 27, 240(1)
  003d254  ld 28, 248(1)
  003d258  ld 29, 256(1)
  003d25c  ld 30, 264(1)
  003d260  ld 31, 272(1)
  003d264  addi 1, 1, 304
  003d268  blr

ActivateCamera_16:   # 0x3d26c, 0xa0 bytes
  003d26c  stdu 1, -128(1)
  003d270  mflr 0
  003d274  std 0, 144(1)
  003d278  lis 4, 149
  003d27c  std 31, 120(1)
  003d280  lhz 5, 132(3)
  003d284  ori 31, 3, 0
  003d288  extsh 5, 5
  003d28c  lwz 4, 16468(4)
  003d290  sldi 5, 5, 5
  003d294  std 30, 112(1)
  003d298  addc 4, 4, 5
  003d29c  clrldi 30, 4, 32
  003d2a0  lwz 30, 28(30)
  003d2a4  lwz 3, 36(30)
  003d2a8  cmpwi 3, -1
  003d2ac  cmpwi 1, 3, 0
  003d2b0  bf 2, 0x3d2bc
  003d2b4  li 3, -1
  003d2b8  b 0x3d2f4
  003d2bc  bf 6, 0x3d2d0
  003d2c0  ori 3, 31, 0
  003d2c4  bl 0x3c89c
  003d2c8  li 3, 1
  003d2cc  stw 3, 36(30)
  003d2d0  lis 3, 149
  003d2d4  addic 3, 3, 5056
  003d2d8  lwz 3, 384(3)
  003d2dc  lhz 3, 134(3)
  003d2e0  cmpwi 3, 0
  003d2e4  bf 2, 0x3d2f0
  003d2e8  ori 3, 31, 0
  003d2ec  bl 0x3ca68
  003d2f0  li 3, -1
  003d2f4  ld 0, 144(1)
  003d2f8  mtlr 0
  003d2fc  ld 30, 112(1)
  003d300  ld 31, 120(1)
  003d304  addi 1, 1, 128
  003d308  blr

STUB_0003d30c:   # 0x3d30c, 0x4 bytes
  003d30c  blr

STUB_0003d310:   # 0x3d310, 0x4 bytes
  003d310  blr

STUB_0003d314:   # 0x3d314, 0x4 bytes
  003d314  blr
