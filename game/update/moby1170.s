# game/update/moby1170.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1170_001ec8ac:   # 0x1ec8ac, 0x14 bytes
  01ec8ac  lis 3, 118
  01ec8b0  lis 4, 1
  01ec8b4  addic 3, 3, 23624
  01ec8b8  stw 4, 72(3)
  01ec8bc  blr

M1170_001ec8c8:   # 0x1ec8c8, 0x210 bytes
  01ec8c8  stdu 1, -144(1)
  01ec8cc  mflr 0
  01ec8d0  std 0, 160(1)
  01ec8d4  stfd 31, 136(1)
  01ec8d8  std 31, 128(1)
  01ec8dc  lbz 4, 32(3)
  01ec8e0  std 30, 120(1)
  01ec8e4  ori 31, 3, 0
  01ec8e8  lwz 30, 120(3)
  01ec8ec  cmpwi 4, 0
  01ec8f0  bt 2, 0x1ecabc
  01ec8f4  lis 3, 118
  01ec8f8  lwz 5, 36(31)
  01ec8fc  lis 4, 31
  01ec900  li 7, 0
  01ec904  addi 6, 4, -14144
  01ec908  lis 4, 51
  01ec90c  lfs 1, 23732(3)
  01ec910  lfs 2, 36(5)
  01ec914  ori 3, 31, 0
  01ec918  fmuls 1, 2, 1
  01ec91c  li 5, 0
  01ec920  stfs 1, 44(31)
  01ec924  lfs 31, 0(6)
  01ec928  stw 7, 116(1)
  01ec92c  bl 0x10675c
  01ec930  nop
  01ec934  cmpwi 3, 0
  01ec938  bt 2, 0x1ec96c
  01ec93c  lwz 4, 32(3)
  01ec940  cmpwi 4, 0
  01ec944  bt 2, 0x1ec96c
  01ec948  lhz 4, 166(4)
  01ec94c  lhz 5, 166(31)
  01ec950  cmpwi 1, 4, 880
  01ec954  extsh 4, 4
  01ec958  extsh 5, 5
  01ec95c  cmpw 4, 5
  01ec960  bt 2, 0x1ec968
  01ec964  bf 6, 0x1ec96c
  01ec968  li 3, 0
  01ec96c  ori 4, 3, 0
  01ec970  addic 5, 30, 32
  01ec974  li 6, 0
  01ec978  addic 7, 1, 112
  01ec97c  li 9, 0
  01ec980  addic 8, 1, 116
  01ec984  ori 3, 31, 0
  01ec988  li 10, 4
  01ec98c  bl 0x106840
  01ec990  nop
  01ec994  lwz 4, 112(1)
  01ec998  cmpwi 4, 1
  01ec99c  bt 2, 0x1eca40
  01ec9a0  lbz 4, 32(31)
  01ec9a4  cmpwi 4, 6
  01ec9a8  bt 2, 0x1eca40
  01ec9ac  lfs 1, 32(30)
  01ec9b0  lfs 2, 116(1)
  01ec9b4  lhz 4, 52(31)
  01ec9b8  fsubs 1, 1, 2
  01ec9bc  fcmpu 0, 1, 31
  01ec9c0  stfs 1, 32(30)
  01ec9c4  cror 6, 0, 2
  01ec9c8  bt 6, 0x1ec9fc
  01ec9cc  cmpwi 3, 2
  01ec9d0  bt 1, 0x1ec9e8
  01ec9d4  cmpwi 3, -1
  01ec9d8  bf 1, 0x1eca30
  01ec9dc  cmpwi 3, 0
  01ec9e0  bf 1, 0x1eca30
  01ec9e4  b 0x1ec9fc
  01ec9e8  cmpwi 3, 10
  01ec9ec  bt 1, 0x1eca30
  01ec9f0  li 3, 250
  01ec9f4  stb 3, 103(30)
  01ec9f8  b 0x1eca30
  01ec9fc  li 3, 0
  01eca00  ori 7, 4, 0
  01eca04  li 5, 6
  01eca08  rlwimi 7, 3, 0, 19, 19
  01eca0c  li 6, 250
  01eca10  ori 3, 31, 0
  01eca14  stb 5, 32(31)
  01eca18  li 4, 0
  01eca1c  sth 7, 52(31)
  01eca20  li 5, -1
  01eca24  stb 6, 103(30)
  01eca28  bl 0xfd8d0
  01eca2c  nop
  01eca30  addic 4, 30, 96
  01eca34  ori 3, 31, 0
  01eca38  bl 0x10c808
  01eca3c  nop
  01eca40  li 5, 255
  01eca44  addic 4, 30, 96
  01eca48  ori 3, 31, 0
  01eca4c  stb 5, 164(31)
  01eca50  bl 0x10c9a0
  01eca54  nop
  01eca58  lwz 4, 196(30)
  01eca5c  lis 3, 165
  01eca60  slwi 4, 4, 2
  01eca64  addic 6, 3, 7136
  01eca68  extsw 7, 4
  01eca6c  lis 5, 31
  01eca70  ori 3, 31, 0
  01eca74  addi 5, 5, -14144
  01eca78  addic 4, 30, 112
  01eca7c  lwzx 9, 6, 7
  01eca80  li 6, 0
  01eca84  addic 8, 9, 16
  01eca88  lfs 1, 4(5)
  01eca8c  li 7, 0
  01eca90  lwz 9, 0(9)
  01eca94  extsw 9, 9
  01eca98  bl 0x111ba0
  01eca9c  nop
  01ecaa0  lwz 3, 176(30)
  01ecaa4  cmpwi 3, 0
  01ecaa8  bf 2, 0x1ecabc
  01ecaac  lis 3, 151
  01ecab0  addic 3, 3, -25376
  01ecab4  lwz 3, 8320(3)
  01ecab8  stw 3, 176(30)
  01ecabc  ld 0, 160(1)
  01ecac0  mtlr 0
  01ecac4  lfd 31, 136(1)
  01ecac8  ld 30, 120(1)
  01ecacc  ld 31, 128(1)
  01ecad0  addi 1, 1, 144
  01ecad4  blr

UpdateMoby_1170:   # 0x1ecb08, 0x6c8 bytes
  01ecb08  stdu 1, -304(1)
  01ecb0c  mflr 0
  01ecb10  std 0, 320(1)
  01ecb14  std 31, 296(1)
  01ecb18  std 30, 288(1)
  01ecb1c  ori 31, 3, 0
  01ecb20  std 29, 280(1)
  01ecb24  lwz 30, 120(31)
  01ecb28  bl 0x1ec8c8
  01ecb2c  lbz 3, 32(31)
  01ecb30  cmpwi 3, 6
  01ecb34  bt 2, 0x1ed144
  01ecb38  cmpwi 3, 5
  01ecb3c  bt 2, 0x1ed05c
  01ecb40  cmpwi 3, 4
  01ecb44  bt 2, 0x1ece68
  01ecb48  cmpwi 3, 3
  01ecb4c  bt 2, 0x1ece28
  01ecb50  cmpwi 3, 2
  01ecb54  bt 2, 0x1ecd40
  01ecb58  cmpwi 3, 1
  01ecb5c  bt 2, 0x1ecd28
  01ecb60  cmpwi 3, 0
  01ecb64  bf 2, 0x1ed1b4
  01ecb68  lwz 3, 192(30)
  01ecb6c  cmpwi 3, -1
  01ecb70  bf 2, 0x1ecb9c
  01ecb74  lis 3, 101
  01ecb78  lhz 4, 178(31)
  01ecb7c  addic 3, 3, 19188
  01ecb80  extsh 4, 4
  01ecb84  bl 0x5cd098
  01ecb88  nop
  01ecb8c  ori 3, 31, 0
  01ecb90  bl 0xefb38
  01ecb94  nop
  01ecb98  b 0x1ed1b4
  01ecb9c  lis 4, 165
  01ecba0  slwi 5, 3, 2
  01ecba4  addic 3, 4, 7136
  01ecba8  extsw 4, 5
  01ecbac  lwzx 4, 3, 4
  01ecbb0  lwz 4, 0(4)
  01ecbb4  cmpwi 4, 0
  01ecbb8  bf 2, 0x1ecbe4
  01ecbbc  lis 3, 101
  01ecbc0  lhz 4, 178(31)
  01ecbc4  addic 3, 3, 19228
  01ecbc8  extsh 4, 4
  01ecbcc  bl 0x5cd098
  01ecbd0  nop
  01ecbd4  ori 3, 31, 0
  01ecbd8  bl 0xefb38
  01ecbdc  nop
  01ecbe0  b 0x1ed1b4
  01ecbe4  lwz 4, 196(30)
  01ecbe8  cmpwi 4, -1
  01ecbec  bf 2, 0x1ecc18
  01ecbf0  lis 3, 101
  01ecbf4  lhz 4, 178(31)
  01ecbf8  addic 3, 3, 19292
  01ecbfc  extsh 4, 4
  01ecc00  bl 0x5cd098
  01ecc04  nop
  01ecc08  ori 3, 31, 0
  01ecc0c  bl 0xefb38
  01ecc10  nop
  01ecc14  b 0x1ed1b4
  01ecc18  slwi 4, 4, 2
  01ecc1c  extsw 4, 4
  01ecc20  lwzx 4, 3, 4
  01ecc24  lwz 4, 0(4)
  01ecc28  cmpwi 4, 0
  01ecc2c  bf 2, 0x1ecc58
  01ecc30  lis 3, 101
  01ecc34  lhz 4, 178(31)
  01ecc38  addic 3, 3, 19332
  01ecc3c  extsh 4, 4
  01ecc40  bl 0x5cd098
  01ecc44  nop
  01ecc48  ori 3, 31, 0
  01ecc4c  bl 0xefb38
  01ecc50  nop
  01ecc54  b 0x1ed1b4
  01ecc58  lwz 4, 200(30)
  01ecc5c  cmpwi 4, -1
  01ecc60  bf 2, 0x1ecc8c
  01ecc64  lis 3, 101
  01ecc68  lhz 4, 178(31)
  01ecc6c  addic 3, 3, 19396
  01ecc70  extsh 4, 4
  01ecc74  bl 0x5cd098
  01ecc78  nop
  01ecc7c  ori 3, 31, 0
  01ecc80  bl 0xefb38
  01ecc84  nop
  01ecc88  b 0x1ed1b4
  01ecc8c  slwi 4, 4, 2
  01ecc90  extsw 4, 4
  01ecc94  lwzx 4, 3, 4
  01ecc98  lwz 4, 0(4)
  01ecc9c  cmpwi 4, 0
  01ecca0  bf 2, 0x1ecccc
  01ecca4  lis 3, 101
  01ecca8  lhz 4, 178(31)
  01eccac  addic 3, 3, 19436
  01eccb0  extsh 4, 4
  01eccb4  bl 0x5cd098
  01eccb8  nop
  01eccbc  ori 3, 31, 0
  01eccc0  bl 0xefb38
  01eccc4  nop
  01eccc8  b 0x1ed1b4
  01ecccc  lis 4, 16608
  01eccd0  li 5, 7
  01eccd4  li 7, 3
  01eccd8  li 8, 1
  01eccdc  li 6, 128
  01ecce0  stw 4, 32(30)
  01ecce4  sth 5, 36(30)
  01ecce8  stb 7, 40(30)
  01eccec  stb 8, 32(31)
  01eccf0  stb 6, 48(31)
  01eccf4  lwz 4, 192(30)
  01eccf8  slwi 4, 4, 2
  01eccfc  extsw 4, 4
  01ecd00  lwzx 3, 3, 4
  01ecd04  lfs 1, 16(3)
  01ecd08  stfs 1, 16(31)
  01ecd0c  lfs 1, 20(3)
  01ecd10  stfs 1, 20(31)
  01ecd14  lfs 1, 24(3)
  01ecd18  stfs 1, 24(31)
  01ecd1c  lfs 1, 28(3)
  01ecd20  stfs 1, 28(31)
  01ecd24  b 0x1ed1b4
  01ecd28  lwz 3, 180(30)
  01ecd2c  cmpwi 3, 2
  01ecd30  bt 2, 0x1ed1b4
  01ecd34  li 3, 2
  01ecd38  stb 3, 32(31)
  01ecd3c  b 0x1ed1b4
  01ecd40  lwz 4, 192(30)
  01ecd44  lis 3, 165
  01ecd48  lfs 1, 16(31)
  01ecd4c  slwi 4, 4, 2
  01ecd50  addic 3, 3, 7136
  01ecd54  lfs 2, 20(31)
  01ecd58  extsw 4, 4
  01ecd5c  lis 5, 114
  01ecd60  lwzx 4, 3, 4
  01ecd64  lis 3, 31
  01ecd68  addi 29, 3, -13608
  01ecd6c  lfs 3, 32(4)
  01ecd70  fsubs 1, 3, 1
  01ecd74  lfs 3, 24(31)
  01ecd78  addic 3, 1, 192
  01ecd7c  stfs 1, 192(1)
  01ecd80  lfs 1, 36(4)
  01ecd84  fsubs 1, 1, 2
  01ecd88  lfs 2, -3052(5)
  01ecd8c  stfs 1, 196(1)
  01ecd90  lfs 1, 40(4)
  01ecd94  fsubs 1, 1, 3
  01ecd98  stfs 1, 200(1)
  01ecd9c  lfs 1, 44(4)
  01ecda0  stfs 1, 204(1)
  01ecda4  lfs 1, 0(29)
  01ecda8  fmuls 1, 2, 1
  01ecdac  bl 0x110488
  01ecdb0  nop
  01ecdb4  lfs 1, 196(1)
  01ecdb8  lfs 2, 192(1)
  01ecdbc  fmuls 3, 1, 1
  01ecdc0  lfs 4, 200(1)
  01ecdc4  lfs 5, 16(31)
  01ecdc8  lfs 6, 20(31)
  01ecdcc  fadds 1, 6, 1
  01ecdd0  fmadds 3, 2, 2, 3
  01ecdd4  fadds 2, 5, 2
  01ecdd8  lfs 5, 24(31)
  01ecddc  fmadds 3, 4, 4, 3
  01ecde0  fadds 4, 5, 4
  01ecde4  stfs 2, 16(31)
  01ecde8  stfs 1, 20(31)
  01ecdec  fsqrts 3, 3
  01ecdf0  stfs 4, 24(31)
  01ecdf4  lfs 1, 4(29)
  01ecdf8  fcmpu 0, 3, 1
  01ecdfc  cror 6, 1, 2
  01ece00  bt 6, 0x1ece10
  01ece04  li 3, 3
  01ece08  stb 3, 32(31)
  01ece0c  b 0x1ed1b4
  01ece10  lwz 3, 180(30)
  01ece14  cmpwi 3, 2
  01ece18  bf 2, 0x1ed1b4
  01ece1c  li 3, 5
  01ece20  stb 3, 32(31)
  01ece24  b 0x1ed1b4
  01ece28  lwz 3, 180(30)
  01ece2c  cmpwi 3, 2
  01ece30  bf 2, 0x1ece40
  01ece34  li 3, 5
  01ece38  stb 3, 32(31)
  01ece3c  b 0x1ed1b4
  01ece40  addic 3, 30, 204
  01ece44  bl 0x4fff60
  01ece48  nop
  01ece4c  cmpwi 3, 0
  01ece50  bt 2, 0x1ed1b4
  01ece54  li 3, 4
  01ece58  li 4, 0
  01ece5c  stb 3, 32(31)
  01ece60  stw 4, 208(30)
  01ece64  b 0x1ed1b4
  01ece68  addic 3, 30, 204
  01ece6c  bl 0x4fff60
  01ece70  nop
  01ece74  cmpwi 3, 0
  01ece78  bt 2, 0x1ed1b4
  01ece7c  lis 3, 165
  01ece80  lis 7, 114
  01ece84  addic 29, 3, 7136
  01ece88  lwz 3, 200(30)
  01ece8c  lfs 1, 16(31)
  01ece90  slwi 4, 3, 2
  01ece94  lfs 2, 20(31)
  01ece98  lwz 5, 208(30)
  01ece9c  extsw 4, 4
  01ecea0  stfs 1, 208(1)
  01ecea4  slwi 6, 5, 4
  01ecea8  lfs 3, 24(31)
  01eceac  stfs 2, 212(1)
  01eceb0  lwzx 4, 29, 4
  01eceb4  lfs 4, 28(31)
  01eceb8  addc 4, 4, 6
  01ecebc  stfs 3, 216(1)
  01ecec0  stfs 4, 220(1)
  01ecec4  lis 6, 118
  01ecec8  clrldi 4, 4, 32
  01ececc  lfs 4, 16(4)
  01eced0  fsubs 4, 4, 1
  01eced4  lfs 1, 23736(6)
  01eced8  lfs 5, -3056(7)
  01ecedc  lis 6, 31
  01ecee0  fmuls 5, 1, 5
  01ecee4  addi 6, 6, -13608
  01ecee8  slwi 3, 3, 2
  01eceec  lis 8, 114
  01ecef0  extsw 3, 3
  01ecef4  li 9, 0
  01ecef8  stfs 4, 224(1)
  01ecefc  lfs 1, 20(4)
  01ecf00  fsubs 2, 1, 2
  01ecf04  slwi 5, 5, 4
  01ecf08  fmuls 8, 5, 5
  01ecf0c  stfs 2, 228(1)
  01ecf10  lfs 1, 24(4)
  01ecf14  fsubs 1, 1, 3
  01ecf18  stfs 1, 232(1)
  01ecf1c  lfs 1, 28(4)
  01ecf20  stfs 1, 236(1)
  01ecf24  lfs 1, 8(6)
  01ecf28  fdivs 6, 1, 5
  01ecf2c  lis 4, 118
  01ecf30  lfs 1, 23740(4)
  01ecf34  lfs 7, -3048(8)
  01ecf38  stw 9, 232(1)
  01ecf3c  addic 4, 1, 208
  01ecf40  lwzx 3, 29, 3
  01ecf44  fmuls 1, 1, 7
  01ecf48  addc 3, 3, 5
  01ecf4c  clrldi 8, 3, 32
  01ecf50  ori 3, 31, 0
  01ecf54  addic 5, 1, 224
  01ecf58  fmuls 7, 8, 1
  01ecf5c  fmuls 4, 4, 6
  01ecf60  fmuls 2, 2, 6
  01ecf64  stfs 4, 224(1)
  01ecf68  stfs 2, 228(1)
  01ecf6c  lfs 2, 24(8)
  01ecf70  lfs 4, 12(6)
  01ecf74  fsubs 2, 3, 2
  01ecf78  fmr 3, 4
  01ecf7c  fnmadds 2, 7, 3, 2
  01ecf80  fdivs 2, 2, 5
  01ecf84  stfs 2, 72(30)
  01ecf88  lfs 2, 16(6)
  01ecf8c  lfs 3, -3056(7)
  01ecf90  fmuls 2, 3, 2
  01ecf94  fctiwz 2, 2
  01ecf98  stfd 2, 256(1)
  01ecf9c  lwz 7, 260(1)
  01ecfa0  extsw 7, 7
  01ecfa4  bl 0x1f29e8
  01ecfa8  nop
  01ecfac  lwz 3, 200(30)
  01ecfb0  lwz 4, 208(30)
  01ecfb4  slwi 3, 3, 2
  01ecfb8  addic 4, 4, 1
  01ecfbc  extsw 3, 3
  01ecfc0  stw 4, 208(30)
  01ecfc4  lwzx 3, 29, 3
  01ecfc8  lwz 3, 0(3)
  01ecfcc  cmpw 4, 3
  01ecfd0  bt 0, 0x1ed01c
  01ecfd4  lis 3, 31
  01ecfd8  li 4, 3
  01ecfdc  vspltisw 2, -1
  01ecfe0  addi 3, 3, -13608
  01ecfe4  li 5, 20
  01ecfe8  lis 6, 114
  01ecfec  stb 4, 32(31)
  01ecff0  li 4, -3056
  01ecff4  vslw 2, 2, 2
  01ecff8  <unknown>
  01ecffc  li 3, 204
  01ed000  vspltw 3, 3, 0
  01ed004  <unknown>
  01ed008  vmaddfp 2, 4, 3, 2
  01ed00c  vctsxs 2, 2, 0
  01ed010  vspltw 2, 2, 0
  01ed014  stvewx 2, 3, 30
  01ed018  b 0x1ed1b4
  01ed01c  lis 3, 31
  01ed020  li 4, 24
  01ed024  vspltisw 2, -1
  01ed028  addi 3, 3, -13608
  01ed02c  lis 5, 114
  01ed030  li 6, -3056
  01ed034  vslw 2, 2, 2
  01ed038  <unknown>
  01ed03c  li 3, 204
  01ed040  vspltw 3, 3, 0
  01ed044  <unknown>
  01ed048  vmaddfp 2, 4, 3, 2
  01ed04c  vctsxs 2, 2, 0
  01ed050  vspltw 2, 2, 0
  01ed054  stvewx 2, 3, 30
  01ed058  b 0x1ed1b4
  01ed05c  lwz 4, 192(30)
  01ed060  lis 3, 165
  01ed064  lfs 1, 16(31)
  01ed068  slwi 4, 4, 2
  01ed06c  addic 3, 3, 7136
  01ed070  extsw 4, 4
  01ed074  lis 5, 114
  01ed078  lwzx 4, 3, 4
  01ed07c  lfs 2, 20(31)
  01ed080  lis 3, 31
  01ed084  lfs 3, 16(4)
  01ed088  fsubs 1, 3, 1
  01ed08c  lfs 3, 24(31)
  01ed090  addi 29, 3, -13608
  01ed094  addic 3, 1, 240
  01ed098  stfs 1, 240(1)
  01ed09c  lfs 1, 20(4)
  01ed0a0  fsubs 1, 1, 2
  01ed0a4  lfs 2, -3052(5)
  01ed0a8  stfs 1, 244(1)
  01ed0ac  lfs 1, 24(4)
  01ed0b0  fsubs 1, 1, 3
  01ed0b4  stfs 1, 248(1)
  01ed0b8  lfs 1, 28(4)
  01ed0bc  stfs 1, 252(1)
  01ed0c0  lfs 1, 0(29)
  01ed0c4  fmuls 1, 2, 1
  01ed0c8  bl 0x110488
  01ed0cc  nop
  01ed0d0  lfs 1, 244(1)
  01ed0d4  lfs 2, 240(1)
  01ed0d8  fmuls 3, 1, 1
  01ed0dc  lfs 4, 248(1)
  01ed0e0  lfs 5, 16(31)
  01ed0e4  lfs 6, 20(31)
  01ed0e8  lfs 7, 24(31)
  01ed0ec  fadds 1, 6, 1
  01ed0f0  fmadds 3, 2, 2, 3
  01ed0f4  fadds 2, 5, 2
  01ed0f8  fmadds 3, 4, 4, 3
  01ed0fc  fadds 4, 7, 4
  01ed100  stfs 2, 16(31)
  01ed104  stfs 1, 20(31)
  01ed108  fsqrts 3, 3
  01ed10c  stfs 4, 24(31)
  01ed110  lfs 1, 4(29)
  01ed114  fcmpu 0, 3, 1
  01ed118  cror 6, 1, 2
  01ed11c  bt 6, 0x1ed12c
  01ed120  li 3, 1
  01ed124  stb 3, 32(31)
  01ed128  b 0x1ed1b4
  01ed12c  lwz 3, 180(30)
  01ed130  cmpwi 3, 2
  01ed134  bt 2, 0x1ed1b4
  01ed138  li 3, 2
  01ed13c  stb 3, 32(31)
  01ed140  b 0x1ed1b4
  01ed144  lis 3, 31
  01ed148  li 7, -1
  01ed14c  addi 3, 3, -13608
  01ed150  li 6, 1
  01ed154  li 11, 0
  01ed158  addic 4, 30, 64
  01ed15c  addic 5, 31, 16
  01ed160  lfs 1, 28(3)
  01ed164  li 8, 5
  01ed168  lfs 4, 8(3)
  01ed16c  li 9, 2
  01ed170  lfs 3, 32(3)
  01ed174  li 10, 4
  01ed178  lfs 5, 36(3)
  01ed17c  fmr 2, 1
  01ed180  lfs 7, 40(3)
  01ed184  fmr 6, 4
  01ed188  std 7, 144(1)
  01ed18c  ori 3, 31, 0
  01ed190  std 6, 160(1)
  01ed194  std 6, 168(1)
  01ed198  std 7, 176(1)
  01ed19c  std 11, 184(1)
  01ed1a0  bl 0x10e030
  01ed1a4  nop
  01ed1a8  ori 3, 31, 0
  01ed1ac  bl 0xefb38
  01ed1b0  nop
  01ed1b4  ld 0, 320(1)
  01ed1b8  mtlr 0
  01ed1bc  ld 29, 280(1)
  01ed1c0  ld 30, 288(1)
  01ed1c4  ld 31, 296(1)
  01ed1c8  addi 1, 1, 304
  01ed1cc  blr
