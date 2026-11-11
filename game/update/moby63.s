# game/update/moby63.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M63_003ec788:   # 0x3ec788, 0x50 bytes
  03ec788  addic 4, 4, -1
  03ec78c  extsw 4, 4
  03ec790  cmpwi 4, 0
  03ec794  bt 0, 0x3ec7d0
  03ec798  lis 6, 161
  03ec79c  lwz 6, 1808(6)
  03ec7a0  sldi 7, 4, 2
  03ec7a4  extsw 7, 7
  03ec7a8  lwzx 8, 3, 7
  03ec7ac  cmpw 6, 8
  03ec7b0  bf 1, 0x3ec7c0
  03ec7b4  addc 5, 5, 6
  03ec7b8  stwx 5, 3, 7
  03ec7bc  b 0x3ec7d0
  03ec7c0  addic 4, 4, -1
  03ec7c4  extsw 4, 4
  03ec7c8  cmpwi 4, 0
  03ec7cc  bf 0, 0x3ec7a0
  03ec7d0  ori 3, 4, 0
  03ec7d4  blr

M63_003ec7e0:   # 0x3ec7e0, 0x98 bytes
  03ec7e0  stdu 1, -128(1)
  03ec7e4  mflr 0
  03ec7e8  std 0, 144(1)
  03ec7ec  std 31, 120(1)
  03ec7f0  ori 31, 4, 0
  03ec7f4  lbz 4, 49(3)
  03ec7f8  cmpwi 4, 0
  03ec7fc  bt 2, 0x3ec848
  03ec800  lwz 4, 552(31)
  03ec804  cmpwi 4, 0
  03ec808  bf 2, 0x3ec864
  03ec80c  lis 4, 63
  03ec810  lis 6, -32640
  03ec814  addi 4, 4, -14376
  03ec818  lis 8, 4224
  03ec81c  li 10, 25
  03ec820  ori 6, 6, 32896
  03ec824  ori 8, 8, 32896
  03ec828  lfs 1, 0(4)
  03ec82c  lfs 3, 4(4)
  03ec830  li 4, 0
  03ec834  fmr 2, 1
  03ec838  bl 0x133280
  03ec83c  nop
  03ec840  stw 3, 552(31)
  03ec844  b 0x3ec864
  03ec848  lwz 3, 552(31)
  03ec84c  cmpwi 3, 0
  03ec850  bt 2, 0x3ec864
  03ec854  bl 0x11e6ec
  03ec858  nop
  03ec85c  li 3, 0
  03ec860  stw 3, 552(31)
  03ec864  ld 0, 144(1)
  03ec868  mtlr 0
  03ec86c  ld 31, 120(1)
  03ec870  addi 1, 1, 128
  03ec874  blr

M63_003ec878:   # 0x3ec878, 0x44 bytes
  03ec878  stdu 1, -128(1)
  03ec87c  mflr 0
  03ec880  std 0, 144(1)
  03ec884  std 31, 120(1)
  03ec888  ori 31, 3, 0
  03ec88c  lwz 3, 552(31)
  03ec890  cmpwi 3, 0
  03ec894  bt 2, 0x3ec8a8
  03ec898  bl 0x11e6ec
  03ec89c  nop
  03ec8a0  li 3, 0
  03ec8a4  stw 3, 552(31)
  03ec8a8  ld 0, 144(1)
  03ec8ac  mtlr 0
  03ec8b0  ld 31, 120(1)
  03ec8b4  addi 1, 1, 128
  03ec8b8  blr

M63_003ec8c8:   # 0x3ec8c8, 0xf4 bytes
  03ec8c8  stdu 1, -144(1)
  03ec8cc  mflr 0
  03ec8d0  std 0, 160(1)
  03ec8d4  std 30, 128(1)
  03ec8d8  std 29, 120(1)
  03ec8dc  lis 5, 63
  03ec8e0  ori 30, 3, 0
  03ec8e4  std 31, 136(1)
  03ec8e8  addi 29, 5, -14148
  03ec8ec  ori 31, 4, 0
  03ec8f0  addic 3, 30, 16
  03ec8f4  li 4, 0
  03ec8f8  lfs 1, 0(29)
  03ec8fc  bl 0xffb70
  03ec900  nop
  03ec904  lfs 4, 4(29)
  03ec908  fmr 2, 1
  03ec90c  lfs 1, 24(30)
  03ec910  fadds 3, 1, 4
  03ec914  fcmpu 0, 2, 3
  03ec918  cror 6, 1, 2
  03ec91c  bt 6, 0x3ec95c
  03ec920  lis 3, 63
  03ec924  lis 4, 114
  03ec928  lfs 3, 296(31)
  03ec92c  addi 3, 3, -14148
  03ec930  lfs 4, 8(3)
  03ec934  lfs 5, -3048(4)
  03ec938  fnmsubs 3, 5, 4, 3
  03ec93c  fadds 1, 1, 3
  03ec940  stfs 3, 296(31)
  03ec944  fcmpu 0, 1, 2
  03ec948  stfs 1, 24(30)
  03ec94c  cror 6, 1, 2
  03ec950  bt 6, 0x3ec9a0
  03ec954  stfs 2, 24(30)
  03ec958  b 0x3ec9a0
  03ec95c  fcmpu 0, 2, 1
  03ec960  cror 6, 0, 2
  03ec964  bt 6, 0x3ec994
  03ec968  lis 3, 63
  03ec96c  lis 4, 114
  03ec970  vspltisw 2, 0
  03ec974  addi 3, 3, -14148
  03ec978  lfs 2, 8(3)
  03ec97c  lfs 3, -3048(4)
  03ec980  li 3, 288
  03ec984  fmadds 1, 3, 2, 1
  03ec988  stfs 1, 24(30)
  03ec98c  stvx 2, 3, 31
  03ec990  b 0x3ec9a0
  03ec994  vspltisw 2, 0
  03ec998  li 3, 288
  03ec99c  stvx 2, 3, 31
  03ec9a0  ld 0, 160(1)
  03ec9a4  mtlr 0
  03ec9a8  ld 29, 120(1)
  03ec9ac  ld 30, 128(1)
  03ec9b0  ld 31, 136(1)
  03ec9b4  addi 1, 1, 144
  03ec9b8  blr

UpdateMoby_63:   # 0x3eca78, 0x301c bytes
  03eca78  stdu 1, -784(1)
  03eca7c  mflr 0
  03eca80  std 0, 800(1)
  03eca84  stfd 23, 712(1)
  03eca88  stfd 24, 720(1)
  03eca8c  stfd 25, 728(1)
  03eca90  stfd 26, 736(1)
  03eca94  stfd 27, 744(1)
  03eca98  stfd 28, 752(1)
  03eca9c  stfd 29, 760(1)
  03ecaa0  stfd 30, 768(1)
  03ecaa4  stfd 31, 776(1)
  03ecaa8  std 31, 704(1)
  03ecaac  lis 4, 63
  03ecab0  ori 31, 3, 0
  03ecab4  addi 5, 4, -13892
  03ecab8  std 30, 696(1)
  03ecabc  li 4, 0
  03ecac0  lwz 30, 120(31)
  03ecac4  lfs 1, 0(5)
  03ecac8  std 29, 688(1)
  03ecacc  std 28, 680(1)
  03ecad0  std 27, 672(1)
  03ecad4  std 26, 664(1)
  03ecad8  std 25, 656(1)
  03ecadc  std 24, 648(1)
  03ecae0  std 23, 640(1)
  03ecae4  addic 5, 30, 560
  03ecae8  bl 0x119a18
  03ecaec  nop
  03ecaf0  lbz 3, 49(31)
  03ecaf4  cmpwi 3, 0
  03ecaf8  bt 2, 0x3ecb3c
  03ecafc  lis 4, 149
  03ecb00  addic 3, 31, 16
  03ecb04  addic 4, 4, 5376
  03ecb08  bl 0x5e8548
  03ecb0c  nop
  03ecb10  lis 3, 63
  03ecb14  addi 3, 3, -13892
  03ecb18  lfs 2, 4(3)
  03ecb1c  fcmpu 0, 1, 2
  03ecb20  cror 6, 1, 2
  03ecb24  bt 6, 0x3ecb3c
  03ecb28  ori 3, 31, 0
  03ecb2c  bl 0x106360
  03ecb30  nop
  03ecb34  li 3, 22
  03ecb38  stb 3, 127(31)
  03ecb3c  lis 3, 161
  03ecb40  lwz 3, 1800(3)
  03ecb44  cmpwi 3, 2
  03ecb48  bf 2, 0x3ecb64
  03ecb4c  li 3, 0
  03ecb50  lhz 4, 52(31)
  03ecb54  stw 3, 148(31)
  03ecb58  ori 3, 4, 65
  03ecb5c  sth 3, 52(31)
  03ecb60  b 0x3efa3c
  03ecb64  lwz 5, 36(31)
  03ecb68  li 3, -66
  03ecb6c  lis 4, 63
  03ecb70  lhz 6, 52(31)
  03ecb74  addi 4, 4, -13892
  03ecb78  and 3, 6, 3
  03ecb7c  lwz 5, 16(5)
  03ecb80  stw 5, 148(31)
  03ecb84  sth 3, 52(31)
  03ecb88  addic 5, 1, 512
  03ecb8c  lfs 31, 8(4)
  03ecb90  ori 3, 31, 0
  03ecb94  lfs 1, 508(30)
  03ecb98  fadds 1, 1, 31
  03ecb9c  bl 0x1118d8
  03ecba0  nop
  03ecba4  lwz 29, 576(1)
  03ecba8  cmpwi 29, 0
  03ecbac  bt 2, 0x3ecbe0
  03ecbb0  lhz 3, 532(30)
  03ecbb4  cmpwi 3, 0
  03ecbb8  bf 2, 0x3ecbf4
  03ecbbc  lwz 3, 556(30)
  03ecbc0  cmpwi 3, -1
  03ecbc4  bt 2, 0x3ecbf4
  03ecbc8  extsw 4, 3
  03ecbcc  addic 3, 1, 512
  03ecbd0  bl 0x110b70
  03ecbd4  nop
  03ecbd8  cmpwi 3, 0
  03ecbdc  bf 2, 0x3ecbf4
  03ecbe0  vspltisw 2, 0
  03ecbe4  li 29, 0
  03ecbe8  li 3, 512
  03ecbec  stw 29, 576(1)
  03ecbf0  stvx 2, 3, 1
  03ecbf4  addic 27, 31, 16
  03ecbf8  addic 3, 1, 112
  03ecbfc  ori 4, 27, 0
  03ecc00  bl 0x5e7e98
  03ecc04  nop
  03ecc08  lwz 3, 56(30)
  03ecc0c  cmpwi 3, 0
  03ecc10  bt 2, 0x3ecc24
  03ecc14  li 3, 240
  03ecc18  bl 0x5e7e18
  03ecc1c  nop
  03ecc20  sth 3, 532(30)
  03ecc24  li 26, 0
  03ecc28  addic 3, 30, 520
  03ecc2c  stw 26, 56(30)
  03ecc30  bl 0x4fffb4
  03ecc34  nop
  03ecc38  lbz 3, 32(31)
  03ecc3c  cmpwi 3, 0
  03ecc40  bt 2, 0x3ecc68
  03ecc44  addic 3, 30, 532
  03ecc48  bl 0x4fffb4
  03ecc4c  nop
  03ecc50  cmpwi 3, 0
  03ecc54  bt 2, 0x3ecc60
  03ecc58  lfs 1, 476(30)
  03ecc5c  b 0x3ecc64
  03ecc60  lfs 1, 512(30)
  03ecc64  stfs 1, 508(30)
  03ecc68  lis 3, 63
  03ecc6c  lis 4, 51
  03ecc70  addi 6, 3, -13892
  03ecc74  ori 3, 31, 0
  03ecc78  li 5, 0
  03ecc7c  lfs 30, 12(6)
  03ecc80  stw 26, 596(1)
  03ecc84  bl 0x10675c
  03ecc88  nop
  03ecc8c  ori 28, 3, 0
  03ecc90  ori 3, 31, 0
  03ecc94  ori 4, 28, 0
  03ecc98  addic 5, 30, 32
  03ecc9c  li 6, 0
  03ecca0  addic 7, 1, 592
  03ecca4  li 9, 0
  03ecca8  addic 8, 1, 596
  03eccac  li 10, 4
  03eccb0  bl 0x106840
  03eccb4  nop
  03eccb8  addic 3, 30, 38
  03eccbc  bl 0x4fffb4
  03eccc0  nop
  03eccc4  lhz 4, 38(30)
  03eccc8  li 3, 45
  03ecccc  extsh 25, 4
  03eccd0  bl 0x5e7e18
  03eccd4  nop
  03eccd8  cmpw 25, 3
  03eccdc  bf 0, 0x3ecfc0
  03ecce0  cmpwi 28, 0
  03ecce4  bt 2, 0x3ecfc0
  03ecce8  lbz 3, 32(31)
  03eccec  cmpwi 3, 99
  03eccf0  bt 2, 0x3ecfc0
  03eccf4  lwz 3, 32(28)
  03eccf8  lhz 3, 166(3)
  03eccfc  cmpwi 3, 176
  03ecd00  cmpwi 1, 3, 177
  03ecd04  bt 2, 0x3ecd0c
  03ecd08  bf 6, 0x3ecd1c
  03ecd0c  lhz 3, 38(30)
  03ecd10  cmpwi 3, 0
  03ecd14  bt 2, 0x3ecd1c
  03ecd18  stw 26, 44(28)
  03ecd1c  lbz 3, 33(31)
  03ecd20  cmpwi 3, 255
  03ecd24  bt 2, 0x3ecd34
  03ecd28  li 4, 1
  03ecd2c  bl 0x104298
  03ecd30  nop
  03ecd34  lwz 3, 44(28)
  03ecd38  cmpwi 3, 0
  03ecd3c  bt 2, 0x3ecfc0
  03ecd40  lfs 1, 16(31)
  03ecd44  lfs 2, 512(1)
  03ecd48  lfs 3, 20(31)
  03ecd4c  fsubs 1, 1, 2
  03ecd50  lfs 4, 516(1)
  03ecd54  fsubs 2, 3, 4
  03ecd58  bl 0x5e8338
  03ecd5c  nop
  03ecd60  li 3, 514
  03ecd64  lis 4, 16128
  03ecd68  stfs 1, 600(1)
  03ecd6c  lfs 1, 32(30)
  03ecd70  lis 5, 15284
  03ecd74  lis 6, 114
  03ecd78  stw 3, 320(30)
  03ecd7c  stw 4, 328(30)
  03ecd80  lis 3, 14992
  03ecd84  lfs 2, 44(28)
  03ecd88  ori 4, 5, 14680
  03ecd8c  ori 3, 3, 11744
  03ecd90  fsubs 1, 1, 2
  03ecd94  lis 5, 133
  03ecd98  stw 4, 304(30)
  03ecd9c  stw 3, 308(30)
  03ecda0  li 4, 9
  03ecda4  lis 3, 133
  03ecda8  fcmpu 0, 1, 30
  03ecdac  stfs 1, 32(30)
  03ecdb0  lfs 2, 17068(5)
  03ecdb4  lfs 3, -3052(6)
  03ecdb8  stw 4, 324(30)
  03ecdbc  fmuls 2, 2, 3
  03ecdc0  stfs 2, 312(30)
  03ecdc4  lfs 1, 17064(3)
  03ecdc8  stb 26, 349(30)
  03ecdcc  fmuls 1, 1, 3
  03ecdd0  stfs 1, 316(30)
  03ecdd4  bt 1, 0x3ecf08
  03ecdd8  lis 3, 63
  03ecddc  lhz 4, 52(31)
  03ecde0  addi 25, 3, -13892
  03ecde4  lis 3, 114
  03ecde8  rlwimi 4, 26, 0, 19, 19
  03ecdec  addic 5, 1, 600
  03ecdf0  addic 6, 30, 312
  03ecdf4  lfs 1, -3052(3)
  03ecdf8  sth 4, 52(31)
  03ecdfc  lfs 2, 16(25)
  03ece00  addic 7, 30, 316
  03ece04  fmuls 2, 1, 2
  03ece08  stfs 2, 312(30)
  03ece0c  lfs 2, 20(25)
  03ece10  fmuls 1, 1, 2
  03ece14  stfs 1, 316(30)
  03ece18  lfs 1, 16(28)
  03ece1c  lfs 2, 24(28)
  03ece20  stfs 1, 48(1)
  03ece24  stfs 2, 56(1)
  03ece28  lfs 1, 20(28)
  03ece2c  lfs 2, 28(28)
  03ece30  stfs 1, 52(1)
  03ece34  stfs 2, 60(1)
  03ece38  ld 3, 48(1)
  03ece3c  ld 4, 56(1)
  03ece40  bl 0x107de8
  03ece44  nop
  03ece48  addic 28, 30, 288
  03ece4c  lfs 29, 600(1)
  03ece50  bl 0x5c8318
  03ece54  nop
  03ece58  clrlwi 6, 3, 31
  03ece5c  ori 4, 28, 0
  03ece60  fmr 1, 29
  03ece64  ori 3, 31, 0
  03ece68  addic 6, 6, 9
  03ece6c  li 7, 1
  03ece70  li 8, 0
  03ece74  bl 0x10ad80
  03ece78  nop
  03ece7c  lis 4, 16688
  03ece80  lis 5, 16784
  03ece84  li 6, 99
  03ece88  ori 3, 30, 0
  03ece8c  stw 4, 368(30)
  03ece90  stw 5, 372(30)
  03ece94  stb 6, 32(31)
  03ece98  bl 0x3ec878
  03ece9c  li 5, 120
  03ecea0  ori 3, 31, 0
  03ecea4  addic 4, 30, 272
  03ecea8  stb 5, 279(30)
  03eceac  bl 0x10c808
  03eceb0  nop
  03eceb4  lis 3, 151
  03eceb8  lfs 1, 24(25)
  03ecebc  addic 3, 3, -25376
  03ecec0  lfs 2, 136(3)
  03ecec4  fsubs 1, 2, 1
  03ecec8  fabs 1, 1
  03ececc  fcmpu 0, 1, 31
  03eced0  cror 6, 1, 2
  03eced4  bt 6, 0x3ecef0
  03eced8  ori 3, 31, 0
  03ecedc  li 4, 512
  03ecee0  li 5, -1
  03ecee4  bl 0xfd8d0
  03ecee8  nop
  03eceec  b 0x3ecfc0
  03ecef0  ori 3, 31, 0
  03ecef4  li 4, 0
  03ecef8  li 5, -1
  03ecefc  bl 0xfd8d0
  03ecf00  nop
  03ecf04  b 0x3ecfc0
  03ecf08  lfs 1, 16(28)
  03ecf0c  addic 5, 1, 600
  03ecf10  lfs 2, 24(28)
  03ecf14  addic 6, 30, 312
  03ecf18  stfs 1, 48(1)
  03ecf1c  addic 7, 30, 316
  03ecf20  stfs 2, 56(1)
  03ecf24  lfs 1, 20(28)
  03ecf28  lfs 2, 28(28)
  03ecf2c  stfs 1, 52(1)
  03ecf30  stfs 2, 60(1)
  03ecf34  ld 3, 48(1)
  03ecf38  ld 4, 56(1)
  03ecf3c  bl 0x107de8
  03ecf40  nop
  03ecf44  addic 28, 30, 288
  03ecf48  lfs 29, 600(1)
  03ecf4c  bl 0x5c8318
  03ecf50  nop
  03ecf54  clrlwi 6, 3, 31
  03ecf58  ori 4, 28, 0
  03ecf5c  fmr 1, 29
  03ecf60  ori 3, 31, 0
  03ecf64  addic 6, 6, 9
  03ecf68  li 7, 1
  03ecf6c  li 8, 0
  03ecf70  bl 0x10ad80
  03ecf74  nop
  03ecf78  lis 4, 16544
  03ecf7c  lis 5, 16672
  03ecf80  li 6, 6
  03ecf84  ori 3, 30, 0
  03ecf88  stw 4, 368(30)
  03ecf8c  stw 5, 372(30)
  03ecf90  stb 6, 32(31)
  03ecf94  bl 0x3ec878
  03ecf98  li 4, 250
  03ecf9c  li 3, 60
  03ecfa0  stb 4, 279(30)
  03ecfa4  bl 0x5e7e18
  03ecfa8  nop
  03ecfac  sth 3, 38(30)
  03ecfb0  addic 4, 30, 272
  03ecfb4  ori 3, 31, 0
  03ecfb8  bl 0x10c808
  03ecfbc  nop
  03ecfc0  li 4, 255
  03ecfc4  lbz 3, 32(31)
  03ecfc8  cmpwi 3, 9
  03ecfcc  stb 4, 164(31)
  03ecfd0  cmpwi 1, 3, 3
  03ecfd4  cmpwi 6, 3, 0
  03ecfd8  cmpwi 7, 3, -1
  03ecfdc  bt 1, 0x3ed034
  03ecfe0  bt 5, 0x3ed004
  03ecfe4  bt 25, 0x3ecff0
  03ecfe8  bf 29, 0x3ef8b8
  03ecfec  b 0x3ed094
  03ecff0  cmpwi 3, 1
  03ecff4  bf 1, 0x3edfc0
  03ecff8  cmpwi 3, 2
  03ecffc  bf 1, 0x3ee624
  03ed000  b 0x3ee8ac
  03ed004  cmpwi 3, 6
  03ed008  bt 1, 0x3ed020
  03ed00c  cmpwi 3, 4
  03ed010  bf 1, 0x3eeb88
  03ed014  cmpwi 3, 5
  03ed018  bf 1, 0x3eee48
  03ed01c  b 0x3ef0b8
  03ed020  cmpwi 3, 7
  03ed024  bf 1, 0x3ef1c4
  03ed028  cmpwi 3, 8
  03ed02c  bf 1, 0x3ee224
  03ed030  b 0x3ef8b8
  03ed034  cmpwi 3, 15
  03ed038  bt 1, 0x3ed06c
  03ed03c  cmpwi 3, 12
  03ed040  bt 1, 0x3ed058
  03ed044  cmpwi 3, 10
  03ed048  bf 1, 0x3ee2ec
  03ed04c  cmpwi 3, 11
  03ed050  bf 1, 0x3ee4ac
  03ed054  b 0x3ef2fc
  03ed058  cmpwi 3, 13
  03ed05c  bf 1, 0x3ef604
  03ed060  cmpwi 3, 14
  03ed064  bf 1, 0x3ed204
  03ed068  b 0x3ed5a0
  03ed06c  cmpwi 3, 18
  03ed070  bt 1, 0x3ed088
  03ed074  cmpwi 3, 16
  03ed078  bf 1, 0x3ede70
  03ed07c  cmpwi 3, 17
  03ed080  bf 1, 0x3edccc
  03ed084  b 0x3ed7b4
  03ed088  cmpwi 3, 99
  03ed08c  bt 2, 0x3ef218
  03ed090  b 0x3ef8b8
  03ed094  addic 3, 30, 464
  03ed098  ori 4, 27, 0
  03ed09c  bl 0x5e7e98
  03ed0a0  nop
  03ed0a4  lfs 1, 508(30)
  03ed0a8  lhz 3, 522(30)
  03ed0ac  stfs 1, 476(30)
  03ed0b0  cmpwi 3, 0
  03ed0b4  bt 2, 0x3ed0e8
  03ed0b8  li 3, 1
  03ed0bc  lbz 4, 83(31)
  03ed0c0  cmpwi 4, 3
  03ed0c4  stb 3, 32(31)
  03ed0c8  bt 2, 0x3ed12c
  03ed0cc  ori 3, 31, 0
  03ed0d0  li 4, 3
  03ed0d4  li 5, 0
  03ed0d8  li 6, 0
  03ed0dc  bl 0xfddc0
  03ed0e0  nop
  03ed0e4  b 0x3ed12c
  03ed0e8  lis 3, 63
  03ed0ec  lfs 1, 24(31)
  03ed0f0  li 4, 14
  03ed0f4  addi 3, 3, -13892
  03ed0f8  lfs 2, 28(3)
  03ed0fc  stb 4, 32(31)
  03ed100  fadds 1, 1, 2
  03ed104  lbz 3, 83(31)
  03ed108  cmpwi 3, 0
  03ed10c  stfs 1, 24(31)
  03ed110  bt 2, 0x3ed12c
  03ed114  ori 3, 31, 0
  03ed118  li 4, 0
  03ed11c  li 5, 0
  03ed120  li 6, 0
  03ed124  bl 0xfddc0
  03ed128  nop
  03ed12c  lis 3, 16256
  03ed130  li 5, 1
  03ed134  li 6, 8
  03ed138  li 4, 4
  03ed13c  stw 3, 32(30)
  03ed140  sth 5, 36(30)
  03ed144  sth 26, 532(30)
  03ed148  addic 3, 30, 384
  03ed14c  sth 26, 520(30)
  03ed150  stb 6, 88(30)
  03ed154  stb 4, 90(30)
  03ed158  stb 26, 41(30)
  03ed15c  bl 0x100f8c
  03ed160  nop
  03ed164  lis 3, 16384
  03ed168  lfs 1, 516(30)
  03ed16c  lis 4, 114
  03ed170  li 5, 909
  03ed174  stw 3, 396(30)
  03ed178  stw 3, 392(30)
  03ed17c  lfs 2, -3052(4)
  03ed180  lwz 3, 440(30)
  03ed184  fmuls 1, 1, 2
  03ed188  stw 5, 384(30)
  03ed18c  ori 3, 3, 48
  03ed190  stw 3, 440(30)
  03ed194  stfs 1, 420(30)
  03ed198  bl 0x5c8318
  03ed19c  nop
  03ed1a0  clrlwi 3, 3, 31
  03ed1a4  cmpwi 3, 0
  03ed1a8  bt 2, 0x3ed1c0
  03ed1ac  lis 3, 0
  03ed1b0  lhz 4, 52(31)
  03ed1b4  ori 3, 3, 32768
  03ed1b8  or 3, 4, 3
  03ed1bc  sth 3, 52(31)
  03ed1c0  lis 3, 133
  03ed1c4  addic 4, 3, 17080
  03ed1c8  lwz 3, 544(30)
  03ed1cc  cmpwi 3, -1
  03ed1d0  stw 4, 208(30)
  03ed1d4  bt 2, 0x3ef8b8
  03ed1d8  lis 4, 165
  03ed1dc  slwi 3, 3, 2
  03ed1e0  fmr 1, 30
  03ed1e4  addic 4, 4, 7136
  03ed1e8  extsw 5, 3
  03ed1ec  ori 3, 27, 0
  03ed1f0  lwzx 4, 4, 5
  03ed1f4  bl 0x1367d0
  03ed1f8  nop
  03ed1fc  stw 3, 548(30)
  03ed200  b 0x3ef8b8
  03ed204  ori 3, 31, 0
  03ed208  ori 4, 30, 0
  03ed20c  bl 0x3ec7e0
  03ed210  addic 3, 1, 128
  03ed214  addic 4, 1, 512
  03ed218  ori 5, 27, 0
  03ed21c  bl 0x5e81f0
  03ed220  nop
  03ed224  lis 3, 63
  03ed228  li 4, 288
  03ed22c  addi 29, 3, -13892
  03ed230  ori 3, 27, 0
  03ed234  lfs 29, 32(29)
  03ed238  fmr 1, 29
  03ed23c  bl 0xffb70
  03ed240  nop
  03ed244  fmr 27, 1
  03ed248  lfs 28, 36(29)
  03ed24c  fcmpu 0, 27, 28
  03ed250  cror 6, 0, 2
  03ed254  bt 6, 0x3ed2f8
  03ed258  addic 3, 1, 128
  03ed25c  bl 0x5e7ebc
  03ed260  nop
  03ed264  lfs 2, 508(30)
  03ed268  fadds 2, 2, 31
  03ed26c  fcmpu 0, 1, 2
  03ed270  cror 6, 1, 2
  03ed274  bt 6, 0x3ed2f8
  03ed278  lfs 1, 24(31)
  03ed27c  lis 3, 63
  03ed280  lfs 2, 520(1)
  03ed284  addi 3, 3, -13892
  03ed288  fsubs 1, 1, 2
  03ed28c  lfs 2, 16(3)
  03ed290  fabs 1, 1
  03ed294  fcmpu 0, 1, 2
  03ed298  cror 6, 1, 2
  03ed29c  bt 6, 0x3ed2f8
  03ed2a0  li 3, 19
  03ed2a4  bl 0xfc620
  03ed2a8  nop
  03ed2ac  cmpwi 3, 0
  03ed2b0  bf 2, 0x3ed2f8
  03ed2b4  lbz 3, 83(31)
  03ed2b8  cmpwi 3, 0
  03ed2bc  bt 2, 0x3ed2e4
  03ed2c0  li 3, 3
  03ed2c4  bl 0x5e7e18
  03ed2c8  nop
  03ed2cc  ori 6, 3, 0
  03ed2d0  ori 3, 31, 0
  03ed2d4  li 4, 0
  03ed2d8  li 5, 0
  03ed2dc  bl 0xfddc0
  03ed2e0  nop
  03ed2e4  li 4, 17
  03ed2e8  ori 3, 30, 0
  03ed2ec  stb 4, 32(31)
  03ed2f0  bl 0x3ec878
  03ed2f4  b 0x3ef8b8
  03ed2f8  fcmpu 0, 27, 28
  03ed2fc  cror 6, 0, 2
  03ed300  bt 6, 0x3ed3dc
  03ed304  lbz 3, 188(31)
  03ed308  cmpwi 3, 1
  03ed30c  bf 2, 0x3ed3dc
  03ed310  li 3, 4
  03ed314  bl 0xfc620
  03ed318  nop
  03ed31c  cmpwi 3, 0
  03ed320  bf 2, 0x3ed3dc
  03ed324  li 3, 256
  03ed328  bl 0xfc620
  03ed32c  nop
  03ed330  clrlwi 3, 3, 31
  03ed334  lfs 1, 504(30)
  03ed338  cmpwi 3, 0
  03ed33c  bt 2, 0x3ed348
  03ed340  fneg 1, 1
  03ed344  stfs 1, 504(30)
  03ed348  lis 3, 63
  03ed34c  addi 3, 3, -13892
  03ed350  lfs 2, 40(3)
  03ed354  fmuls 1, 1, 2
  03ed358  stfs 1, 500(30)
  03ed35c  lfs 1, 44(3)
  03ed360  lfs 2, 48(3)
  03ed364  bl 0xfcbe8
  03ed368  nop
  03ed36c  fctiwz 1, 1
  03ed370  stfd 1, 616(1)
  03ed374  lwz 3, 620(1)
  03ed378  extsw 3, 3
  03ed37c  bl 0x5e7e18
  03ed380  nop
  03ed384  sth 3, 528(30)
  03ed388  lbz 3, 83(31)
  03ed38c  cmpwi 3, 0
  03ed390  bt 2, 0x3ed3b8
  03ed394  li 3, 3
  03ed398  bl 0x5e7e18
  03ed39c  nop
  03ed3a0  ori 6, 3, 0
  03ed3a4  ori 3, 31, 0
  03ed3a8  li 4, 0
  03ed3ac  li 5, 0
  03ed3b0  bl 0xfddc0
  03ed3b4  nop
  03ed3b8  ori 3, 30, 0
  03ed3bc  bl 0x3ec878
  03ed3c0  li 4, 17
  03ed3c4  addic 3, 30, 64
  03ed3c8  stb 4, 32(31)
  03ed3cc  bl 0x5e7e70
  03ed3d0  nop
  03ed3d4  stb 26, 188(31)
  03ed3d8  b 0x3ef8b8
  03ed3dc  lwz 29, 544(30)
  03ed3e0  cmpwi 29, -1
  03ed3e4  bt 2, 0x3ed480
  03ed3e8  lis 3, 165
  03ed3ec  lwz 5, 548(30)
  03ed3f0  slwi 4, 29, 2
  03ed3f4  addic 29, 3, 7136
  03ed3f8  extsw 4, 4
  03ed3fc  slwi 5, 5, 4
  03ed400  ori 3, 27, 0
  03ed404  lwzx 29, 29, 4
  03ed408  addc 4, 29, 5
  03ed40c  addic 4, 4, 16
  03ed410  clrldi 4, 4, 32
  03ed414  bl 0x5e8548
  03ed418  nop
  03ed41c  lis 3, 63
  03ed420  addi 4, 3, -13892
  03ed424  lwz 3, 548(30)
  03ed428  lfs 2, 52(4)
  03ed42c  fcmpu 0, 1, 2
  03ed430  cror 6, 1, 2
  03ed434  bt 6, 0x3ed454
  03ed438  addic 3, 3, 1
  03ed43c  stw 3, 548(30)
  03ed440  lwz 4, 0(29)
  03ed444  cmpw 3, 4
  03ed448  bt 0, 0x3ed454
  03ed44c  ori 3, 26, 0
  03ed450  stw 26, 548(30)
  03ed454  slwi 3, 3, 4
  03ed458  addic 4, 30, 480
  03ed45c  addc 5, 29, 3
  03ed460  ori 3, 4, 0
  03ed464  addic 4, 5, 16
  03ed468  clrldi 4, 4, 32
  03ed46c  bl 0x5e7e98
  03ed470  nop
  03ed474  li 3, 18
  03ed478  stb 3, 32(31)
  03ed47c  b 0x3ef8b8
  03ed480  addic 3, 30, 524
  03ed484  bl 0x4fff60
  03ed488  nop
  03ed48c  cmpwi 3, 0
  03ed490  bt 2, 0x3ef8b8
  03ed494  li 3, 40
  03ed498  li 4, 120
  03ed49c  bl 0xfe484
  03ed4a0  nop
  03ed4a4  bl 0x5e7e18
  03ed4a8  nop
  03ed4ac  lis 4, 63
  03ed4b0  stw 3, 524(30)
  03ed4b4  ori 29, 26, 0
  03ed4b8  addi 3, 4, -13892
  03ed4bc  addic 28, 30, 480
  03ed4c0  addic 27, 30, 464
  03ed4c4  lfs 27, 56(3)
  03ed4c8  lfs 26, 60(3)
  03ed4cc  fmr 1, 30
  03ed4d0  fmr 2, 31
  03ed4d4  bl 0xfcbe8
  03ed4d8  nop
  03ed4dc  fmr 25, 1
  03ed4e0  bl 0xfcc68
  03ed4e4  nop
  03ed4e8  fmr 24, 1
  03ed4ec  bl 0x5e8078
  03ed4f0  nop
  03ed4f4  fmuls 2, 1, 25
  03ed4f8  fmr 1, 24
  03ed4fc  stfs 2, 144(1)
  03ed500  bl 0x5e8128
  03ed504  nop
  03ed508  fmuls 3, 1, 25
  03ed50c  stw 26, 152(1)
  03ed510  fmr 1, 27
  03ed514  fmr 2, 26
  03ed518  stfs 3, 148(1)
  03ed51c  bl 0xfcbe8
  03ed520  nop
  03ed524  stfs 1, 152(1)
  03ed528  addic 4, 1, 144
  03ed52c  ori 3, 28, 0
  03ed530  ori 5, 27, 0
  03ed534  bl 0x5e7f54
  03ed538  nop
  03ed53c  fmr 1, 29
  03ed540  ori 3, 28, 0
  03ed544  li 4, 288
  03ed548  bl 0xffb70
  03ed54c  nop
  03ed550  fcmpu 0, 1, 28
  03ed554  bt 1, 0x3ed564
  03ed558  addic 29, 29, 1
  03ed55c  cmpwi 29, 10
  03ed560  bt 0, 0x3ed4cc
  03ed564  lbz 3, 83(31)
  03ed568  cmpwi 3, 0
  03ed56c  bt 2, 0x3ed594
  03ed570  li 3, 3
  03ed574  bl 0x5e7e18
  03ed578  nop
  03ed57c  ori 6, 3, 0
  03ed580  ori 3, 31, 0
  03ed584  li 4, 0
  03ed588  li 5, 0
  03ed58c  bl 0xfddc0
  03ed590  nop
  03ed594  li 3, 15
  03ed598  stb 3, 32(31)
  03ed59c  b 0x3ef8b8
  03ed5a0  lfs 1, 480(30)
  03ed5a4  lfs 2, 16(31)
  03ed5a8  lfs 3, 484(30)
  03ed5ac  lfs 4, 20(31)
  03ed5b0  fsubs 1, 1, 2
  03ed5b4  fsubs 2, 3, 4
  03ed5b8  bl 0x5e8338
  03ed5bc  nop
  03ed5c0  lis 3, 63
  03ed5c4  addic 5, 30, 496
  03ed5c8  addi 28, 3, -13892
  03ed5cc  ori 3, 31, 0
  03ed5d0  lfs 2, 64(28)
  03ed5d4  lfs 3, 68(28)
  03ed5d8  lfs 4, 72(28)
  03ed5dc  bl 0xff2e8
  03ed5e0  nop
  03ed5e4  addic 29, 30, 64
  03ed5e8  ori 3, 29, 0
  03ed5ec  bl 0x5e8030
  03ed5f0  nop
  03ed5f4  stfs 1, 604(1)
  03ed5f8  lfs 2, 76(28)
  03ed5fc  ori 3, 29, 0
  03ed600  lfs 3, 36(28)
  03ed604  ori 5, 27, 0
  03ed608  addic 28, 30, 480
  03ed60c  fmr 30, 3
  03ed610  ori 4, 28, 0
  03ed614  fmadds 1, 1, 2, 30
  03ed618  stfs 1, 88(31)
  03ed61c  bl 0x5e81f0
  03ed620  nop
  03ed624  ori 3, 29, 0
  03ed628  bl 0x5e8030
  03ed62c  nop
  03ed630  fcmpu 0, 1, 30
  03ed634  cror 6, 0, 2
  03ed638  bt 6, 0x3ed670
  03ed63c  lis 3, 63
  03ed640  lis 4, 114
  03ed644  addi 5, 3, -13892
  03ed648  lis 6, 114
  03ed64c  addic 3, 1, 604
  03ed650  lfs 1, -3052(4)
  03ed654  lfs 2, 28(5)
  03ed658  lfs 3, -3048(6)
  03ed65c  fmuls 1, 1, 31
  03ed660  fmuls 2, 3, 2
  03ed664  bl 0x109af0
  03ed668  nop
  03ed66c  b 0x3ed69c
  03ed670  lis 3, 63
  03ed674  lis 4, 114
  03ed678  addi 5, 3, -13892
  03ed67c  lis 6, 114
  03ed680  addic 3, 1, 604
  03ed684  lfs 1, -3052(4)
  03ed688  lfs 2, 80(5)
  03ed68c  lfs 3, -3048(6)
  03ed690  fmuls 2, 3, 2
  03ed694  bl 0x109af0
  03ed698  nop
  03ed69c  ori 3, 29, 0
  03ed6a0  lfs 1, 604(1)
  03ed6a4  bl 0x110488
  03ed6a8  nop
  03ed6ac  addic 26, 1, 160
  03ed6b0  ori 4, 29, 0
  03ed6b4  ori 3, 26, 0
  03ed6b8  ori 5, 27, 0
  03ed6bc  bl 0x5e7f54
  03ed6c0  nop
  03ed6c4  lis 3, 63
  03ed6c8  li 5, 0
  03ed6cc  addi 4, 3, -13892
  03ed6d0  ori 3, 26, 0
  03ed6d4  ori 6, 31, 0
  03ed6d8  lfs 1, 84(4)
  03ed6dc  bl 0x59e20
  03ed6e0  nop
  03ed6e4  cmpwi 3, 0
  03ed6e8  bt 2, 0x3ed734
  03ed6ec  ori 3, 29, 0
  03ed6f0  bl 0x5e7e70
  03ed6f4  nop
  03ed6f8  lbz 3, 83(31)
  03ed6fc  cmpwi 3, 0
  03ed700  bt 2, 0x3ed728
  03ed704  li 3, 3
  03ed708  bl 0x5e7e18
  03ed70c  nop
  03ed710  ori 6, 3, 0
  03ed714  ori 3, 31, 0
  03ed718  li 4, 0
  03ed71c  li 5, 0
  03ed720  bl 0xfddc0
  03ed724  nop
  03ed728  li 3, 14
  03ed72c  stb 3, 32(31)
  03ed730  b 0x3ed744
  03ed734  addic 4, 1, 160
  03ed738  ori 3, 27, 0
  03ed73c  bl 0x5e7e98
  03ed740  nop
  03ed744  ori 3, 27, 0
  03ed748  ori 4, 28, 0
  03ed74c  bl 0x5e8548
  03ed750  nop
  03ed754  lwz 3, 604(1)
  03ed758  lfs 2, 604(1)
  03ed75c  lbz 27, 83(31)
  03ed760  fcmpu 0, 1, 2
  03ed764  bt 0, 0x3ed770
  03ed768  cmpwi 3, 0
  03ed76c  bf 2, 0x3ed7a4
  03ed770  cmpwi 27, 0
  03ed774  bt 2, 0x3ed79c
  03ed778  li 3, 3
  03ed77c  bl 0x5e7e18
  03ed780  nop
  03ed784  ori 6, 3, 0
  03ed788  ori 3, 31, 0
  03ed78c  li 4, 0
  03ed790  li 5, 0
  03ed794  bl 0xfddc0
  03ed798  nop
  03ed79c  li 3, 14
  03ed7a0  stb 3, 32(31)
  03ed7a4  ori 3, 31, 0
  03ed7a8  ori 4, 30, 0
  03ed7ac  bl 0x3ec7e0
  03ed7b0  b 0x3ef8b8
  03ed7b4  lis 3, 165
  03ed7b8  addic 29, 3, 7136
  03ed7bc  lwz 3, 544(30)
  03ed7c0  lfs 1, 480(30)
  03ed7c4  slwi 3, 3, 2
  03ed7c8  lfs 2, 16(31)
  03ed7cc  lfs 3, 484(30)
  03ed7d0  extsw 3, 3
  03ed7d4  lfs 4, 20(31)
  03ed7d8  fsubs 1, 1, 2
  03ed7dc  fsubs 2, 3, 4
  03ed7e0  lwzx 29, 29, 3
  03ed7e4  bl 0x5e8338
  03ed7e8  nop
  03ed7ec  lis 3, 63
  03ed7f0  addic 5, 30, 496
  03ed7f4  addi 28, 3, -13892
  03ed7f8  ori 3, 31, 0
  03ed7fc  lfs 2, 88(28)
  03ed800  lfs 3, 92(28)
  03ed804  lfs 4, 72(28)
  03ed808  bl 0xff2e8
  03ed80c  nop
  03ed810  addic 24, 30, 480
  03ed814  addic 25, 30, 64
  03ed818  ori 4, 24, 0
  03ed81c  ori 3, 25, 0
  03ed820  ori 5, 27, 0
  03ed824  bl 0x5e81f0
  03ed828  nop
  03ed82c  lis 4, 114
  03ed830  ori 3, 25, 0
  03ed834  lfs 1, -3052(4)
  03ed838  fmuls 1, 1, 31
  03ed83c  bl 0x110488
  03ed840  nop
  03ed844  addic 23, 1, 176
  03ed848  ori 4, 25, 0
  03ed84c  ori 3, 23, 0
  03ed850  ori 5, 27, 0
  03ed854  bl 0x5e7f54
  03ed858  nop
  03ed85c  ori 3, 25, 0
  03ed860  bl 0x5e8030
  03ed864  nop
  03ed868  lfs 2, 76(28)
  03ed86c  lfs 29, 36(28)
  03ed870  ori 3, 23, 0
  03ed874  ori 6, 31, 0
  03ed878  fmadds 1, 1, 2, 29
  03ed87c  li 5, 0
  03ed880  stfs 1, 88(31)
  03ed884  lfs 1, 84(28)
  03ed888  bl 0x59e20
  03ed88c  nop
  03ed890  cmpwi 3, 0
  03ed894  bt 2, 0x3ed99c
  03ed898  li 3, 120
  03ed89c  bl 0x5e7e18
  03ed8a0  nop
  03ed8a4  lis 4, 63
  03ed8a8  stw 3, 524(30)
  03ed8ac  ori 28, 26, 0
  03ed8b0  addi 3, 4, -13892
  03ed8b4  addic 23, 30, 464
  03ed8b8  lfs 28, 96(3)
  03ed8bc  lfs 27, 56(3)
  03ed8c0  lfs 26, 60(3)
  03ed8c4  lfs 25, 32(3)
  03ed8c8  fmr 1, 30
  03ed8cc  fmr 2, 28
  03ed8d0  bl 0xfcbe8
  03ed8d4  nop
  03ed8d8  fmr 24, 1
  03ed8dc  bl 0xfcc68
  03ed8e0  nop
  03ed8e4  fmr 23, 1
  03ed8e8  bl 0x5e8078
  03ed8ec  nop
  03ed8f0  fmuls 2, 1, 24
  03ed8f4  fmr 1, 23
  03ed8f8  stfs 2, 192(1)
  03ed8fc  bl 0x5e8128
  03ed900  nop
  03ed904  fmuls 3, 1, 24
  03ed908  stw 26, 200(1)
  03ed90c  fmr 1, 27
  03ed910  fmr 2, 26
  03ed914  stfs 3, 196(1)
  03ed918  bl 0xfcbe8
  03ed91c  nop
  03ed920  stfs 1, 200(1)
  03ed924  addic 4, 1, 192
  03ed928  ori 3, 24, 0
  03ed92c  ori 5, 23, 0
  03ed930  bl 0x5e7f54
  03ed934  nop
  03ed938  fmr 1, 25
  03ed93c  ori 3, 24, 0
  03ed940  li 4, 288
  03ed944  bl 0xffb70
  03ed948  nop
  03ed94c  fcmpu 0, 1, 29
  03ed950  bt 1, 0x3ed960
  03ed954  addic 28, 28, 1
  03ed958  cmpwi 28, 10
  03ed95c  bt 0, 0x3ed8c8
  03ed960  lbz 3, 83(31)
  03ed964  cmpwi 3, 0
  03ed968  bt 2, 0x3ed990
  03ed96c  li 3, 3
  03ed970  bl 0x5e7e18
  03ed974  nop
  03ed978  ori 6, 3, 0
  03ed97c  ori 3, 31, 0
  03ed980  li 4, 0
  03ed984  li 5, 0
  03ed988  bl 0xfddc0
  03ed98c  nop
  03ed990  li 3, 15
  03ed994  stb 3, 32(31)
  03ed998  b 0x3ed9ac
  03ed99c  addic 4, 1, 176
  03ed9a0  ori 3, 27, 0
  03ed9a4  bl 0x5e7e98
  03ed9a8  nop
  03ed9ac  ori 3, 27, 0
  03ed9b0  ori 4, 24, 0
  03ed9b4  bl 0x5e8548
  03ed9b8  nop
  03ed9bc  fmr 30, 1
  03ed9c0  ori 3, 25, 0
  03ed9c4  bl 0x5e8030
  03ed9c8  nop
  03ed9cc  fcmpu 0, 30, 1
  03ed9d0  cror 6, 1, 2
  03ed9d4  bt 6, 0x3edcbc
  03ed9d8  lwz 3, 548(30)
  03ed9dc  addic 3, 3, 1
  03ed9e0  stw 3, 548(30)
  03ed9e4  lwz 4, 0(29)
  03ed9e8  cmpw 3, 4
  03ed9ec  bt 0, 0x3ed9f8
  03ed9f0  ori 3, 26, 0
  03ed9f4  stw 26, 548(30)
  03ed9f8  slwi 3, 3, 4
  03ed9fc  addc 4, 29, 3
  03eda00  ori 3, 24, 0
  03eda04  addic 4, 4, 16
  03eda08  clrldi 4, 4, 32
  03eda0c  bl 0x5e7e98
  03eda10  nop
  03eda14  lis 3, 63
  03eda18  addi 29, 3, -13892
  03eda1c  lfs 1, 100(29)
  03eda20  lfs 2, 104(29)
  03eda24  bl 0xfcbe8
  03eda28  nop
  03eda2c  lfs 2, 488(30)
  03eda30  ori 3, 27, 0
  03eda34  li 4, 288
  03eda38  fadds 1, 2, 1
  03eda3c  stfs 1, 488(30)
  03eda40  lfs 1, 32(29)
  03eda44  bl 0xffb70
  03eda48  nop
  03eda4c  fmr 30, 1
  03eda50  fcmpu 0, 30, 29
  03eda54  cror 6, 0, 2
  03eda58  bt 6, 0x3edb6c
  03eda5c  addic 3, 1, 208
  03eda60  bl 0x5e7ebc
  03eda64  nop
  03eda68  lfs 2, 508(30)
  03eda6c  fadds 2, 2, 31
  03eda70  fcmpu 0, 1, 2
  03eda74  cror 6, 1, 2
  03eda78  bt 6, 0x3edb6c
  03eda7c  lfs 1, 24(31)
  03eda80  lis 3, 63
  03eda84  lfs 2, 520(1)
  03eda88  addi 3, 3, -13892
  03eda8c  fsubs 1, 1, 2
  03eda90  lfs 2, 16(3)
  03eda94  fabs 1, 1
  03eda98  fcmpu 0, 1, 2
  03eda9c  cror 6, 1, 2
  03edaa0  bt 6, 0x3edb6c
  03edaa4  li 3, 19
  03edaa8  bl 0xfc620
  03edaac  nop
  03edab0  cmpwi 3, 0
  03edab4  bf 2, 0x3edb6c
  03edab8  lbz 3, 83(31)
  03edabc  cmpwi 3, 0
  03edac0  bt 2, 0x3edae8
  03edac4  li 3, 3
  03edac8  bl 0x5e7e18
  03edacc  nop
  03edad0  ori 6, 3, 0
  03edad4  ori 3, 31, 0
  03edad8  li 4, 0
  03edadc  li 5, 0
  03edae0  bl 0xfddc0
  03edae4  nop
  03edae8  li 3, 65
  03edaec  li 4, 66
  03edaf0  stb 26, 64(30)
  03edaf4  li 6, 67
  03edaf8  li 5, 69
  03edafc  li 8, 70
  03edb00  stbx 26, 30, 3
  03edb04  li 3, 71
  03edb08  stbx 26, 30, 4
  03edb0c  stbx 26, 30, 6
  03edb10  li 7, 73
  03edb14  stb 26, 68(30)
  03edb18  li 4, 74
  03edb1c  stbx 26, 30, 5
  03edb20  li 6, 77
  03edb24  li 5, 75
  03edb28  stbx 26, 30, 8
  03edb2c  stbx 26, 30, 3
  03edb30  li 8, 78
  03edb34  stb 26, 72(30)
  03edb38  li 9, 79
  03edb3c  stbx 26, 30, 7
  03edb40  ori 3, 30, 0
  03edb44  stbx 26, 30, 4
  03edb48  li 7, 17
  03edb4c  stbx 26, 30, 5
  03edb50  stb 26, 76(30)
  03edb54  stbx 26, 30, 6
  03edb58  stbx 26, 30, 8
  03edb5c  stbx 26, 30, 9
  03edb60  stb 7, 32(31)
  03edb64  bl 0x3ec878
  03edb68  b 0x3edcbc
  03edb6c  fcmpu 0, 30, 29
  03edb70  cror 6, 0, 2
  03edb74  bt 6, 0x3edcbc
  03edb78  lbz 3, 188(31)
  03edb7c  cmpwi 3, 1
  03edb80  bf 2, 0x3edcbc
  03edb84  li 3, 4
  03edb88  bl 0xfc620
  03edb8c  nop
  03edb90  cmpwi 3, 0
  03edb94  bf 2, 0x3edcbc
  03edb98  li 3, 256
  03edb9c  bl 0xfc620
  03edba0  nop
  03edba4  clrlwi 3, 3, 31
  03edba8  lfs 1, 504(30)
  03edbac  cmpwi 3, 0
  03edbb0  bt 2, 0x3edbbc
  03edbb4  fneg 1, 1
  03edbb8  stfs 1, 504(30)
  03edbbc  lis 3, 63
  03edbc0  addi 3, 3, -13892
  03edbc4  lfs 2, 40(3)
  03edbc8  fmuls 1, 1, 2
  03edbcc  stfs 1, 500(30)
  03edbd0  lfs 1, 44(3)
  03edbd4  lfs 2, 48(3)
  03edbd8  bl 0xfcbe8
  03edbdc  nop
  03edbe0  fctiwz 1, 1
  03edbe4  stfd 1, 616(1)
  03edbe8  lwz 3, 620(1)
  03edbec  extsw 3, 3
  03edbf0  bl 0x5e7e18
  03edbf4  nop
  03edbf8  sth 3, 528(30)
  03edbfc  lbz 3, 83(31)
  03edc00  cmpwi 3, 0
  03edc04  bt 2, 0x3edc2c
  03edc08  li 3, 3
  03edc0c  bl 0x5e7e18
  03edc10  nop
  03edc14  ori 6, 3, 0
  03edc18  ori 3, 31, 0
  03edc1c  li 4, 0
  03edc20  li 5, 0
  03edc24  bl 0xfddc0
  03edc28  nop
  03edc2c  ori 3, 30, 0
  03edc30  bl 0x3ec878
  03edc34  li 3, 65
  03edc38  stb 26, 64(30)
  03edc3c  li 4, 66
  03edc40  li 6, 67
  03edc44  li 5, 69
  03edc48  li 7, 73
  03edc4c  stbx 26, 30, 3
  03edc50  li 8, 75
  03edc54  li 3, 70
  03edc58  stbx 26, 30, 4
  03edc5c  li 4, 71
  03edc60  stbx 26, 30, 6
  03edc64  stb 26, 68(30)
  03edc68  li 6, 74
  03edc6c  stbx 26, 30, 5
  03edc70  li 9, 78
  03edc74  li 5, 77
  03edc78  stbx 26, 30, 3
  03edc7c  stbx 26, 30, 4
  03edc80  ori 3, 25, 0
  03edc84  stb 26, 72(30)
  03edc88  li 4, 79
  03edc8c  stbx 26, 30, 7
  03edc90  stbx 26, 30, 6
  03edc94  stbx 26, 30, 8
  03edc98  li 6, 17
  03edc9c  stb 26, 76(30)
  03edca0  stbx 26, 30, 5
  03edca4  stbx 26, 30, 9
  03edca8  stbx 26, 30, 4
  03edcac  stb 6, 32(31)
  03edcb0  bl 0x5e7e70
  03edcb4  nop
  03edcb8  stb 26, 188(31)
  03edcbc  ori 3, 31, 0
  03edcc0  ori 4, 30, 0
  03edcc4  bl 0x3ec7e0
  03edcc8  b 0x3ef8b8
  03edccc  lis 3, 63
  03edcd0  li 4, 288
  03edcd4  addi 29, 3, -13892
  03edcd8  ori 3, 27, 0
  03edcdc  lfs 29, 32(29)
  03edce0  fmr 1, 29
  03edce4  bl 0xffb70
  03edce8  nop
  03edcec  lis 4, 114
  03edcf0  lis 5, 114
  03edcf4  lfs 2, 108(29)
  03edcf8  lfs 3, 112(29)
  03edcfc  fmr 31, 1
  03edd00  addic 3, 30, 72
  03edd04  lfs 1, -3052(4)
  03edd08  lfs 4, -3048(5)
  03edd0c  fmuls 1, 1, 2
  03edd10  fmuls 2, 4, 3
  03edd14  bl 0x109af0
  03edd18  nop
  03edd1c  addic 27, 30, 64
  03edd20  lfs 1, 68(29)
  03edd24  ori 3, 31, 0
  03edd28  fmr 2, 29
  03edd2c  ori 4, 27, 0
  03edd30  fmr 3, 30
  03edd34  li 8, 0
  03edd38  bl 0x1009b0
  03edd3c  nop
  03edd40  lbz 3, 83(31)
  03edd44  cmpwi 3, 2
  03edd48  bt 2, 0x3eddb4
  03edd4c  lis 4, 63
  03edd50  lis 6, 114
  03edd54  addi 4, 4, -13892
  03edd58  lis 5, 114
  03edd5c  lfs 1, 80(4)
  03edd60  lfs 2, 116(4)
  03edd64  lfs 3, -3052(6)
  03edd68  lfs 4, -3056(5)
  03edd6c  fmuls 1, 3, 1
  03edd70  fmuls 2, 4, 2
  03edd74  lfs 5, 24(31)
  03edd78  fsubs 5, 5, 31
  03edd7c  fmuls 1, 1, 2
  03edd80  fcmpu 0, 5, 1
  03edd84  bt 1, 0x3eddb4
  03edd88  cmpwi 3, 2
  03edd8c  bt 2, 0x3eddb4
  03edd90  li 3, 5
  03edd94  bl 0x5e7e18
  03edd98  nop
  03edd9c  ori 6, 3, 0
  03edda0  ori 3, 31, 0
  03edda4  li 4, 2
  03edda8  li 5, 0
  03eddac  bl 0xfddc0
  03eddb0  nop
  03eddb4  lfs 1, 24(31)
  03eddb8  fcmpu 0, 1, 31
  03eddbc  bt 1, 0x3ef8b8
  03eddc0  li 3, 256
  03eddc4  stfs 31, 24(31)
  03eddc8  bl 0xfc620
  03eddcc  nop
  03eddd0  clrlwi 3, 3, 31
  03eddd4  lfs 31, 504(30)
  03eddd8  cmpwi 3, 0
  03edddc  bt 2, 0x3edde8
  03edde0  fneg 31, 31
  03edde4  stfs 31, 504(30)
  03edde8  lis 3, 63
  03eddec  addi 3, 3, -13892
  03eddf0  lfs 1, 40(3)
  03eddf4  fmuls 1, 31, 1
  03eddf8  stfs 1, 500(30)
  03eddfc  lfs 1, 44(3)
  03ede00  lfs 2, 48(3)
  03ede04  bl 0xfcbe8
  03ede08  nop
  03ede0c  fctiwz 1, 1
  03ede10  stfd 1, 616(1)
  03ede14  lwz 3, 620(1)
  03ede18  extsw 3, 3
  03ede1c  bl 0x5e7e18
  03ede20  nop
  03ede24  li 4, 3
  03ede28  sth 3, 528(30)
  03ede2c  ori 3, 27, 0
  03ede30  stb 4, 32(31)
  03ede34  bl 0x5e7e70
  03ede38  nop
  03ede3c  lbz 3, 83(31)
  03ede40  cmpwi 3, 5
  03ede44  bt 2, 0x3ef8b8
  03ede48  li 3, 3
  03ede4c  bl 0x5e7e18
  03ede50  nop
  03ede54  ori 6, 3, 0
  03ede58  ori 3, 31, 0
  03ede5c  li 4, 5
  03ede60  li 5, 0
  03ede64  bl 0xfddc0
  03ede68  nop
  03ede6c  b 0x3ef8b8
  03ede70  lis 3, 63
  03ede74  li 4, 288
  03ede78  addi 29, 3, -13892
  03ede7c  ori 3, 27, 0
  03ede80  lfs 29, 32(29)
  03ede84  fmr 1, 29
  03ede88  bl 0xffb70
  03ede8c  nop
  03ede90  fmr 31, 1
  03ede94  lfs 1, 24(31)
  03ede98  lfs 2, 96(29)
  03ede9c  fsubs 1, 1, 31
  03edea0  fcmpu 0, 1, 2
  03edea4  cror 6, 1, 2
  03edea8  bt 6, 0x3edee4
  03edeac  lis 3, 63
  03edeb0  lis 6, 114
  03edeb4  addi 4, 3, -13892
  03edeb8  lis 5, 114
  03edebc  addic 3, 30, 72
  03edec0  lfs 1, 80(4)
  03edec4  lfs 2, 112(4)
  03edec8  lfs 3, -3052(6)
  03edecc  lfs 4, -3048(5)
  03eded0  fmuls 1, 3, 1
  03eded4  fmuls 2, 4, 2
  03eded8  bl 0x109af0
  03ededc  nop
  03edee0  b 0x3edf10
  03edee4  lis 3, 63
  03edee8  lis 4, 114
  03edeec  addi 5, 3, -13892
  03edef0  lis 6, 114
  03edef4  addic 3, 30, 72
  03edef8  lfs 1, -3052(4)
  03edefc  lfs 2, 112(5)
  03edf00  lfs 3, -3048(6)
  03edf04  fmuls 2, 3, 2
  03edf08  bl 0x109af0
  03edf0c  nop
  03edf10  lis 4, 63
  03edf14  fmr 2, 29
  03edf18  addic 29, 30, 64
  03edf1c  fmr 3, 30
  03edf20  addi 28, 4, -13892
  03edf24  ori 3, 31, 0
  03edf28  li 8, 0
  03edf2c  ori 4, 29, 0
  03edf30  lfs 1, 68(28)
  03edf34  bl 0x1009b0
  03edf38  nop
  03edf3c  lfs 1, 28(28)
  03edf40  lfs 2, 24(31)
  03edf44  lfs 3, 120(28)
  03edf48  fsubs 4, 2, 31
  03edf4c  lfs 5, 56(28)
  03edf50  fadds 31, 31, 1
  03edf54  fmuls 3, 4, 3
  03edf58  fcmpu 0, 2, 31
  03edf5c  fnmsubs 1, 3, 5, 1
  03edf60  stfs 1, 88(31)
  03edf64  bt 0, 0x3edfb0
  03edf68  lbz 3, 83(31)
  03edf6c  stfs 31, 24(31)
  03edf70  cmpwi 3, 0
  03edf74  bt 2, 0x3edf9c
  03edf78  li 3, 3
  03edf7c  bl 0x5e7e18
  03edf80  nop
  03edf84  ori 6, 3, 0
  03edf88  ori 3, 31, 0
  03edf8c  li 4, 0
  03edf90  li 5, 0
  03edf94  bl 0xfddc0
  03edf98  nop
  03edf9c  li 4, 14
  03edfa0  ori 3, 29, 0
  03edfa4  stb 4, 32(31)
  03edfa8  bl 0x5e7e70
  03edfac  nop
  03edfb0  ori 3, 31, 0
  03edfb4  ori 4, 30, 0
  03edfb8  bl 0x3ec7e0
  03edfbc  b 0x3ef8b8
  03edfc0  addic 29, 1, 224
  03edfc4  addic 4, 1, 512
  03edfc8  ori 3, 29, 0
  03edfcc  ori 5, 27, 0
  03edfd0  bl 0x5e81f0
  03edfd4  nop
  03edfd8  ori 3, 29, 0
  03edfdc  bl 0x5e8030
  03edfe0  nop
  03edfe4  lfs 2, 508(30)
  03edfe8  fadds 2, 2, 31
  03edfec  fcmpu 0, 1, 2
  03edff0  cror 6, 1, 2
  03edff4  bt 6, 0x3ee070
  03edff8  lfs 1, 24(31)
  03edffc  lfs 2, 520(1)
  03ee000  lis 3, 63
  03ee004  fsubs 1, 1, 2
  03ee008  addi 3, 3, -13892
  03ee00c  lfs 2, 80(3)
  03ee010  fabs 1, 1
  03ee014  fcmpu 0, 1, 2
  03ee018  cror 6, 1, 2
  03ee01c  bt 6, 0x3ee070
  03ee020  li 3, 19
  03ee024  bl 0xfc620
  03ee028  nop
  03ee02c  cmpwi 3, 0
  03ee030  bf 2, 0x3ee070
  03ee034  li 3, 2
  03ee038  lbz 4, 83(31)
  03ee03c  cmpwi 4, 4
  03ee040  stb 3, 32(31)
  03ee044  bt 2, 0x3ee214
  03ee048  li 3, 3
  03ee04c  bl 0x5e7e18
  03ee050  nop
  03ee054  ori 6, 3, 0
  03ee058  ori 3, 31, 0
  03ee05c  li 4, 4
  03ee060  li 5, 0
  03ee064  bl 0xfddc0
  03ee068  nop
  03ee06c  b 0x3ee214
  03ee070  lbz 3, 188(31)
  03ee074  cmpwi 3, 1
  03ee078  bf 2, 0x3ee134
  03ee07c  li 3, 19
  03ee080  bl 0xfc620
  03ee084  nop
  03ee088  cmpwi 3, 0
  03ee08c  bf 2, 0x3ee134
  03ee090  li 3, 256
  03ee094  bl 0xfc620
  03ee098  nop
  03ee09c  clrlwi 3, 3, 31
  03ee0a0  lfs 1, 504(30)
  03ee0a4  cmpwi 3, 0
  03ee0a8  bt 2, 0x3ee0b4
  03ee0ac  fneg 1, 1
  03ee0b0  stfs 1, 504(30)
  03ee0b4  lis 3, 63
  03ee0b8  addi 3, 3, -13892
  03ee0bc  lfs 2, 40(3)
  03ee0c0  fmuls 1, 1, 2
  03ee0c4  stfs 1, 500(30)
  03ee0c8  lfs 1, 44(3)
  03ee0cc  lfs 2, 48(3)
  03ee0d0  bl 0xfcbe8
  03ee0d4  nop
  03ee0d8  fctiwz 1, 1
  03ee0dc  stfd 1, 616(1)
  03ee0e0  lwz 3, 620(1)
  03ee0e4  extsw 3, 3
  03ee0e8  bl 0x5e7e18
  03ee0ec  nop
  03ee0f0  sth 3, 528(30)
  03ee0f4  li 3, 3
  03ee0f8  lbz 4, 83(31)
  03ee0fc  cmpwi 4, 5
  03ee100  stb 3, 32(31)
  03ee104  bt 2, 0x3ee12c
  03ee108  li 3, 3
  03ee10c  bl 0x5e7e18
  03ee110  nop
  03ee114  ori 6, 3, 0
  03ee118  ori 3, 31, 0
  03ee11c  li 4, 5
  03ee120  li 5, 0
  03ee124  bl 0xfddc0
  03ee128  nop
  03ee12c  stb 26, 188(31)
  03ee130  b 0x3ee214
  03ee134  addic 3, 1, 224
  03ee138  bl 0x5e8030
  03ee13c  nop
  03ee140  lis 3, 63
  03ee144  lfs 2, 508(30)
  03ee148  addi 3, 3, -13892
  03ee14c  lfs 3, 28(3)
  03ee150  fadds 2, 2, 3
  03ee154  fcmpu 0, 1, 2
  03ee158  cror 6, 0, 2
  03ee15c  bt 6, 0x3ee214
  03ee160  lhz 3, 522(30)
  03ee164  cmpwi 3, 0
  03ee168  bf 2, 0x3ee214
  03ee16c  li 3, 65
  03ee170  stb 26, 64(30)
  03ee174  li 5, 66
  03ee178  li 7, 67
  03ee17c  li 4, 69
  03ee180  li 6, 70
  03ee184  stbx 26, 30, 3
  03ee188  li 8, 75
  03ee18c  li 3, 71
  03ee190  stbx 26, 30, 5
  03ee194  stbx 26, 30, 7
  03ee198  li 5, 73
  03ee19c  stb 26, 68(30)
  03ee1a0  li 7, 74
  03ee1a4  stbx 26, 30, 4
  03ee1a8  stbx 26, 30, 6
  03ee1ac  stbx 26, 30, 3
  03ee1b0  li 4, 77
  03ee1b4  stb 26, 72(30)
  03ee1b8  li 6, 78
  03ee1bc  stbx 26, 30, 5
  03ee1c0  li 3, 79
  03ee1c4  stbx 26, 30, 7
  03ee1c8  li 5, 16
  03ee1cc  stbx 26, 30, 8
  03ee1d0  stb 26, 76(30)
  03ee1d4  stbx 26, 30, 4
  03ee1d8  stbx 26, 30, 6
  03ee1dc  stbx 26, 30, 3
  03ee1e0  lbz 3, 83(31)
  03ee1e4  stb 5, 32(31)
  03ee1e8  cmpwi 3, 0
  03ee1ec  bt 2, 0x3ee214
  03ee1f0  li 3, 3
  03ee1f4  bl 0x5e7e18
  03ee1f8  nop
  03ee1fc  ori 6, 3, 0
  03ee200  ori 3, 31, 0
  03ee204  li 4, 0
  03ee208  li 5, 0
  03ee20c  bl 0xfddc0
  03ee210  nop
  03ee214  ori 3, 31, 0
  03ee218  ori 4, 30, 0
  03ee21c  bl 0x3ec8c8
  03ee220  b 0x3ef8b8
  03ee224  addic 29, 1, 240
  03ee228  addic 4, 1, 512
  03ee22c  ori 3, 29, 0
  03ee230  ori 5, 27, 0
  03ee234  bl 0x5e81f0
  03ee238  nop
  03ee23c  ori 3, 29, 0
  03ee240  bl 0x5e8030
  03ee244  nop
  03ee248  lfs 2, 508(30)
  03ee24c  fsubs 2, 2, 31
  03ee250  fcmpu 0, 1, 2
  03ee254  cror 6, 1, 2
  03ee258  bt 6, 0x3ef8b8
  03ee25c  lfs 1, 24(31)
  03ee260  lfs 2, 520(1)
  03ee264  lis 3, 63
  03ee268  fsubs 1, 1, 2
  03ee26c  addi 3, 3, -13892
  03ee270  lfs 2, 80(3)
  03ee274  fabs 1, 1
  03ee278  fcmpu 0, 1, 2
  03ee27c  cror 6, 1, 2
  03ee280  bt 6, 0x3ef8b8
  03ee284  li 3, 19
  03ee288  bl 0xfc620
  03ee28c  nop
  03ee290  cmpwi 3, 0
  03ee294  bf 2, 0x3ef8b8
  03ee298  lis 3, 63
  03ee29c  lfs 1, 24(31)
  03ee2a0  addi 3, 3, -13892
  03ee2a4  lfs 2, 36(3)
  03ee2a8  li 3, 2
  03ee2ac  lbz 4, 83(31)
  03ee2b0  fadds 1, 1, 2
  03ee2b4  cmpwi 4, 4
  03ee2b8  stb 3, 32(31)
  03ee2bc  stfs 1, 24(31)
  03ee2c0  bt 2, 0x3ef8b8
  03ee2c4  li 3, 3
  03ee2c8  bl 0x5e7e18
  03ee2cc  nop
  03ee2d0  ori 6, 3, 0
  03ee2d4  ori 3, 31, 0
  03ee2d8  li 4, 4
  03ee2dc  li 5, 0
  03ee2e0  bl 0xfddc0
  03ee2e4  nop
  03ee2e8  b 0x3ef8b8
  03ee2ec  lfs 1, 464(30)
  03ee2f0  lfs 2, 16(31)
  03ee2f4  lfs 3, 468(30)
  03ee2f8  lfs 4, 20(31)
  03ee2fc  fsubs 1, 1, 2
  03ee300  fsubs 2, 3, 4
  03ee304  bl 0x5e8338
  03ee308  nop
  03ee30c  lis 3, 63
  03ee310  addic 5, 30, 496
  03ee314  addi 4, 3, -13892
  03ee318  ori 3, 31, 0
  03ee31c  lfs 2, 124(4)
  03ee320  lfs 3, 128(4)
  03ee324  lfs 4, 104(4)
  03ee328  bl 0xff2e8
  03ee32c  nop
  03ee330  addic 28, 1, 256
  03ee334  addic 29, 30, 464
  03ee338  ori 3, 28, 0
  03ee33c  addic 4, 1, 512
  03ee340  ori 5, 29, 0
  03ee344  bl 0x5e81f0
  03ee348  nop
  03ee34c  ori 3, 28, 0
  03ee350  bl 0x5e8030
  03ee354  nop
  03ee358  lfs 2, 508(30)
  03ee35c  fcmpu 0, 1, 2
  03ee360  cror 6, 1, 2
  03ee364  bt 6, 0x3ee38c
  03ee368  lfs 1, 472(30)
  03ee36c  lis 3, 63
  03ee370  lfs 2, 520(1)
  03ee374  addi 3, 3, -13892
  03ee378  fsubs 1, 1, 2
  03ee37c  lfs 2, 80(3)
  03ee380  fabs 1, 1
  03ee384  fcmpu 0, 1, 2
  03ee388  bt 0, 0x3ee398
  03ee38c  lbz 3, 188(31)
  03ee390  cmpwi 3, 2
  03ee394  bf 2, 0x3ef8b8
  03ee398  lbz 3, 33(31)
  03ee39c  cmpwi 3, 255
  03ee3a0  bt 2, 0x3ee3b0
  03ee3a4  li 4, 2
  03ee3a8  bl 0x104298
  03ee3ac  nop
  03ee3b0  lbz 28, 83(31)
  03ee3b4  bl 0x5c8318
  03ee3b8  nop
  03ee3bc  clrlwi 3, 3, 31
  03ee3c0  addic 3, 3, 9
  03ee3c4  cmpw 28, 3
  03ee3c8  bt 2, 0x3ee400
  03ee3cc  bl 0x5c8318
  03ee3d0  nop
  03ee3d4  clrlwi 4, 3, 31
  03ee3d8  li 3, 3
  03ee3dc  addic 28, 4, 9
  03ee3e0  bl 0x5e7e18
  03ee3e4  nop
  03ee3e8  ori 6, 3, 0
  03ee3ec  ori 3, 31, 0
  03ee3f0  ori 4, 28, 0
  03ee3f4  li 5, 0
  03ee3f8  bl 0xfddc0
  03ee3fc  nop
  03ee400  lis 3, 133
  03ee404  lis 4, 133
  03ee408  lis 5, 114
  03ee40c  addic 7, 1, 608
  03ee410  lfs 2, 17076(3)
  03ee414  stw 26, 308(30)
  03ee418  stfs 2, 304(30)
  03ee41c  ori 3, 27, 0
  03ee420  lfs 1, 17072(4)
  03ee424  fneg 2, 2
  03ee428  lfs 3, -3052(5)
  03ee42c  ori 4, 29, 0
  03ee430  fmuls 1, 1, 3
  03ee434  stfs 1, 312(30)
  03ee438  bl 0x108180
  03ee43c  nop
  03ee440  li 3, 13
  03ee444  stfs 1, 316(30)
  03ee448  stb 26, 349(30)
  03ee44c  addic 29, 30, 288
  03ee450  lfs 31, 72(31)
  03ee454  stw 3, 324(30)
  03ee458  bl 0x5c8318
  03ee45c  nop
  03ee460  clrlwi 6, 3, 31
  03ee464  fmr 1, 31
  03ee468  ori 4, 29, 0
  03ee46c  li 7, 1
  03ee470  addic 6, 6, 9
  03ee474  ori 3, 31, 0
  03ee478  li 8, 0
  03ee47c  bl 0x10ad80
  03ee480  nop
  03ee484  lis 4, 16544
  03ee488  lis 5, 16672
  03ee48c  ori 3, 31, 0
  03ee490  stw 4, 368(30)
  03ee494  ori 4, 30, 0
  03ee498  stw 5, 372(30)
  03ee49c  bl 0x3ec7e0
  03ee4a0  li 3, 11
  03ee4a4  stb 3, 32(31)
  03ee4a8  b 0x3ef8b8
  03ee4ac  ori 3, 31, 0
  03ee4b0  addic 4, 30, 288
  03ee4b4  bl 0x10b030
  03ee4b8  nop
  03ee4bc  clrlwi 3, 3, 31
  03ee4c0  cmpwi 3, 0
  03ee4c4  bt 2, 0x3ee5e0
  03ee4c8  ori 3, 30, 0
  03ee4cc  bl 0x3ec878
  03ee4d0  li 3, 289
  03ee4d4  stb 26, 288(30)
  03ee4d8  li 4, 290
  03ee4dc  li 6, 291
  03ee4e0  li 5, 293
  03ee4e4  li 7, 297
  03ee4e8  stbx 26, 30, 3
  03ee4ec  li 8, 299
  03ee4f0  li 3, 294
  03ee4f4  stbx 26, 30, 4
  03ee4f8  li 4, 295
  03ee4fc  stbx 26, 30, 6
  03ee500  stb 26, 292(30)
  03ee504  li 6, 298
  03ee508  stbx 26, 30, 5
  03ee50c  li 9, 302
  03ee510  li 5, 301
  03ee514  stbx 26, 30, 3
  03ee518  stbx 26, 30, 4
  03ee51c  li 3, 256
  03ee520  stb 26, 296(30)
  03ee524  li 4, 303
  03ee528  stbx 26, 30, 7
  03ee52c  stbx 26, 30, 6
  03ee530  stbx 26, 30, 8
  03ee534  li 6, 3
  03ee538  stb 26, 300(30)
  03ee53c  stbx 26, 30, 5
  03ee540  stbx 26, 30, 9
  03ee544  stbx 26, 30, 4
  03ee548  stb 6, 32(31)
  03ee54c  bl 0xfc620
  03ee550  nop
  03ee554  clrlwi 3, 3, 31
  03ee558  lfs 1, 504(30)
  03ee55c  cmpwi 3, 0
  03ee560  bt 2, 0x3ee56c
  03ee564  fneg 1, 1
  03ee568  stfs 1, 504(30)
  03ee56c  lis 3, 63
  03ee570  addi 3, 3, -13892
  03ee574  lfs 2, 40(3)
  03ee578  fmuls 1, 1, 2
  03ee57c  stfs 1, 500(30)
  03ee580  lfs 1, 44(3)
  03ee584  lfs 2, 48(3)
  03ee588  bl 0xfcbe8
  03ee58c  nop
  03ee590  fctiwz 1, 1
  03ee594  stfd 1, 616(1)
  03ee598  lwz 3, 620(1)
  03ee59c  extsw 3, 3
  03ee5a0  bl 0x5e7e18
  03ee5a4  nop
  03ee5a8  sth 3, 528(30)
  03ee5ac  lbz 3, 83(31)
  03ee5b0  cmpwi 3, 5
  03ee5b4  bt 2, 0x3efa3c
  03ee5b8  li 3, 3
  03ee5bc  bl 0x5e7e18
  03ee5c0  nop
  03ee5c4  ori 6, 3, 0
  03ee5c8  ori 3, 31, 0
  03ee5cc  li 4, 5
  03ee5d0  li 5, 8
  03ee5d4  bl 0xfddc0
  03ee5d8  nop
  03ee5dc  b 0x3efa3c
  03ee5e0  lwz 4, 24(31)
  03ee5e4  lis 3, 16544
  03ee5e8  srawi 5, 4, 31
  03ee5ec  srwi 6, 5, 1
  03ee5f0  xor 4, 6, 4
  03ee5f4  subc 4, 4, 5
  03ee5f8  cmpw 4, 3
  03ee5fc  bf 0, 0x3ef8b8
  03ee600  ori 3, 31, 0
  03ee604  li 4, 0
  03ee608  li 5, -1
  03ee60c  bl 0xfd8d0
  03ee610  nop
  03ee614  ori 3, 31, 0
  03ee618  bl 0xefb38
  03ee61c  nop
  03ee620  b 0x3efa3c
  03ee624  lfs 1, 16(31)
  03ee628  lfs 2, 512(1)
  03ee62c  lfs 3, 20(31)
  03ee630  lfs 4, 516(1)
  03ee634  fsubs 1, 1, 2
  03ee638  fsubs 2, 3, 4
  03ee63c  bl 0x5e8338
  03ee640  nop
  03ee644  lis 3, 63
  03ee648  addic 5, 30, 496
  03ee64c  addi 4, 3, -13892
  03ee650  ori 3, 31, 0
  03ee654  lfs 2, 132(4)
  03ee658  lfs 3, 128(4)
  03ee65c  lfs 4, 136(4)
  03ee660  bl 0xff2e8
  03ee664  nop
  03ee668  addic 29, 1, 272
  03ee66c  addic 4, 1, 512
  03ee670  ori 3, 29, 0
  03ee674  ori 5, 27, 0
  03ee678  bl 0x5e81f0
  03ee67c  nop
  03ee680  ori 3, 29, 0
  03ee684  bl 0x5e8030
  03ee688  nop
  03ee68c  lfs 2, 508(30)
  03ee690  fcmpu 0, 1, 2
  03ee694  cror 6, 1, 2
  03ee698  bt 6, 0x3ee794
  03ee69c  lfs 1, 24(31)
  03ee6a0  lis 3, 63
  03ee6a4  lfs 2, 520(1)
  03ee6a8  addi 3, 3, -13892
  03ee6ac  fsubs 1, 1, 2
  03ee6b0  lfs 2, 80(3)
  03ee6b4  fabs 1, 1
  03ee6b8  fcmpu 0, 1, 2
  03ee6bc  cror 6, 1, 2
  03ee6c0  bt 6, 0x3ee794
  03ee6c4  li 3, 19
  03ee6c8  bl 0xfc620
  03ee6cc  nop
  03ee6d0  cmpwi 3, 0
  03ee6d4  bf 2, 0x3ee794
  03ee6d8  lbz 3, 33(31)
  03ee6dc  cmpwi 3, 255
  03ee6e0  bt 2, 0x3ee6f0
  03ee6e4  li 4, 1
  03ee6e8  bl 0x104298
  03ee6ec  nop
  03ee6f0  li 3, 256
  03ee6f4  bl 0xfc620
  03ee6f8  nop
  03ee6fc  clrlwi 3, 3, 31
  03ee700  lfs 1, 504(30)
  03ee704  cmpwi 3, 0
  03ee708  bt 2, 0x3ee714
  03ee70c  fneg 1, 1
  03ee710  stfs 1, 504(30)
  03ee714  lis 3, 63
  03ee718  addi 3, 3, -13892
  03ee71c  lfs 2, 40(3)
  03ee720  fmuls 1, 1, 2
  03ee724  stfs 1, 500(30)
  03ee728  lfs 1, 44(3)
  03ee72c  lfs 2, 48(3)
  03ee730  bl 0xfcbe8
  03ee734  nop
  03ee738  fctiwz 1, 1
  03ee73c  stfd 1, 616(1)
  03ee740  lwz 3, 620(1)
  03ee744  extsw 3, 3
  03ee748  bl 0x5e7e18
  03ee74c  nop
  03ee750  sth 3, 528(30)
  03ee754  li 3, 3
  03ee758  lbz 4, 83(31)
  03ee75c  cmpwi 4, 5
  03ee760  stb 3, 32(31)
  03ee764  bt 2, 0x3ee78c
  03ee768  li 3, 3
  03ee76c  bl 0x5e7e18
  03ee770  nop
  03ee774  ori 6, 3, 0
  03ee778  ori 3, 31, 0
  03ee77c  li 4, 5
  03ee780  li 5, 0
  03ee784  bl 0xfddc0
  03ee788  nop
  03ee78c  stb 26, 188(31)
  03ee790  b 0x3ee854
  03ee794  lbz 3, 188(31)
  03ee798  cmpwi 3, 1
  03ee79c  bf 2, 0x3ee854
  03ee7a0  li 3, 19
  03ee7a4  bl 0xfc620
  03ee7a8  nop
  03ee7ac  cmpwi 3, 0
  03ee7b0  bf 2, 0x3ee854
  03ee7b4  li 3, 256
  03ee7b8  bl 0xfc620
  03ee7bc  nop
  03ee7c0  clrlwi 3, 3, 31
  03ee7c4  lfs 1, 504(30)
  03ee7c8  cmpwi 3, 0
  03ee7cc  bt 2, 0x3ee7d8
  03ee7d0  fneg 1, 1
  03ee7d4  stfs 1, 504(30)
  03ee7d8  lis 3, 63
  03ee7dc  addi 3, 3, -13892
  03ee7e0  lfs 2, 40(3)
  03ee7e4  fmuls 1, 1, 2
  03ee7e8  stfs 1, 500(30)
  03ee7ec  lfs 1, 44(3)
  03ee7f0  lfs 2, 48(3)
  03ee7f4  bl 0xfcbe8
  03ee7f8  nop
  03ee7fc  fctiwz 1, 1
  03ee800  stfd 1, 616(1)
  03ee804  lwz 3, 620(1)
  03ee808  extsw 3, 3
  03ee80c  bl 0x5e7e18
  03ee810  nop
  03ee814  li 4, 3
  03ee818  sth 3, 528(30)
  03ee81c  lbz 3, 83(31)
  03ee820  cmpwi 3, 5
  03ee824  stb 4, 32(31)
  03ee828  bt 2, 0x3ee850
  03ee82c  li 3, 3
  03ee830  bl 0x5e7e18
  03ee834  nop
  03ee838  ori 6, 3, 0
  03ee83c  ori 3, 31, 0
  03ee840  li 4, 5
  03ee844  li 5, 0
  03ee848  bl 0xfddc0
  03ee84c  nop
  03ee850  stb 26, 188(31)
  03ee854  lbz 3, 83(31)
  03ee858  cmpwi 3, 4
  03ee85c  cmpwi 1, 3, 3
  03ee860  bf 2, 0x3ee89c
  03ee864  lbz 3, 112(31)
  03ee868  rlwinm 3, 3, 0, 30, 30
  03ee86c  cmpwi 3, 0
  03ee870  bt 2, 0x3ee89c
  03ee874  bt 6, 0x3ee89c
  03ee878  li 3, 3
  03ee87c  bl 0x5e7e18
  03ee880  nop
  03ee884  ori 6, 3, 0
  03ee888  ori 3, 31, 0
  03ee88c  li 4, 3
  03ee890  li 5, 0
  03ee894  bl 0xfddc0
  03ee898  nop
  03ee89c  ori 3, 31, 0
  03ee8a0  ori 4, 30, 0
  03ee8a4  bl 0x3ec8c8
  03ee8a8  b 0x3ef8b8
  03ee8ac  lfs 1, 24(31)
  03ee8b0  lfs 2, 520(1)
  03ee8b4  ori 3, 27, 0
  03ee8b8  addic 4, 1, 512
  03ee8bc  fsubs 1, 1, 2
  03ee8c0  fabs 30, 1
  03ee8c4  bl 0x5e8588
  03ee8c8  nop
  03ee8cc  lwz 3, 540(30)
  03ee8d0  fdivs 30, 30, 1
  03ee8d4  cmpwi 3, -1
  03ee8d8  bt 2, 0x3ee908
  03ee8dc  lis 4, 165
  03ee8e0  slwi 3, 3, 2
  03ee8e4  addic 4, 4, 7136
  03ee8e8  extsw 7, 3
  03ee8ec  addic 5, 1, 512
  03ee8f0  addic 6, 1, 304
  03ee8f4  ori 3, 31, 0
  03ee8f8  lwzx 4, 4, 7
  03ee8fc  bl 0x1385d0
  03ee900  nop
  03ee904  b 0x3ee918
  03ee908  addic 4, 1, 512
  03ee90c  addic 3, 1, 304
  03ee910  bl 0x5e7e98
  03ee914  nop
  03ee918  lfs 1, 304(1)
  03ee91c  lfs 2, 16(31)
  03ee920  lfs 3, 308(1)
  03ee924  fsubs 1, 1, 2
  03ee928  lfs 4, 20(31)
  03ee92c  fsubs 2, 3, 4
  03ee930  bl 0x5e8338
  03ee934  nop
  03ee938  lis 3, 63
  03ee93c  lfs 2, 500(30)
  03ee940  addic 5, 30, 496
  03ee944  addi 29, 3, -13892
  03ee948  fadds 1, 1, 2
  03ee94c  ori 3, 31, 0
  03ee950  lfs 2, 124(29)
  03ee954  lfs 3, 128(29)
  03ee958  lfs 4, 104(29)
  03ee95c  bl 0xff2e8
  03ee960  nop
  03ee964  lfs 1, 72(31)
  03ee968  bl 0x5e8078
  03ee96c  nop
  03ee970  lfs 29, 140(29)
  03ee974  lfs 2, 72(31)
  03ee978  fmuls 3, 1, 29
  03ee97c  fmr 1, 2
  03ee980  stfs 3, 288(1)
  03ee984  bl 0x5e8128
  03ee988  nop
  03ee98c  fmuls 1, 1, 29
  03ee990  stw 26, 296(1)
  03ee994  ori 3, 31, 0
  03ee998  addic 4, 30, 384
  03ee99c  addic 5, 1, 288
  03ee9a0  addic 6, 1, 304
  03ee9a4  stfs 1, 292(1)
  03ee9a8  lfs 29, 36(29)
  03ee9ac  fmr 1, 29
  03ee9b0  bl 0x101058
  03ee9b4  nop
  03ee9b8  ori 29, 3, 0
  03ee9bc  addic 3, 30, 528
  03ee9c0  bl 0x4fffb4
  03ee9c4  nop
  03ee9c8  cmpwi 3, 0
  03ee9cc  bt 2, 0x3eea10
  03ee9d0  lis 3, 63
  03ee9d4  addi 3, 3, -13892
  03ee9d8  lfs 1, 44(3)
  03ee9dc  lfs 2, 48(3)
  03ee9e0  bl 0xfcbe8
  03ee9e4  nop
  03ee9e8  fctiwz 1, 1
  03ee9ec  stfd 1, 616(1)
  03ee9f0  lwz 3, 620(1)
  03ee9f4  extsw 3, 3
  03ee9f8  bl 0x5e7e18
  03ee9fc  nop
  03eea00  lfs 1, 500(30)
  03eea04  sth 3, 528(30)
  03eea08  fneg 1, 1
  03eea0c  stfs 1, 500(30)
  03eea10  addic 28, 1, 512
  03eea14  addic 3, 1, 320
  03eea18  addic 5, 30, 464
  03eea1c  ori 4, 28, 0
  03eea20  bl 0x5e81f0
  03eea24  nop
  03eea28  ori 3, 27, 0
  03eea2c  ori 4, 28, 0
  03eea30  bl 0x5e8588
  03eea34  nop
  03eea38  lis 3, 63
  03eea3c  lbz 27, 83(31)
  03eea40  addi 3, 3, -13892
  03eea44  lfs 2, 144(3)
  03eea48  fcmpu 0, 1, 2
  03eea4c  bt 0, 0x3eea94
  03eea50  lwz 3, 576(1)
  03eea54  cmpwi 3, 0
  03eea58  bt 2, 0x3eead8
  03eea5c  lhz 4, 166(3)
  03eea60  cmpwi 4, 270
  03eea64  bf 2, 0x3eead8
  03eea68  lbz 3, 32(3)
  03eea6c  cmpwi 1, 3, 253
  03eea70  cmpwi 3, 254
  03eea74  cror 2, 2, 6
  03eea78  bt 2, 0x3eead8
  03eea7c  lis 3, 63
  03eea80  addi 3, 3, -13892
  03eea84  lfs 2, 148(3)
  03eea88  fcmpu 0, 1, 2
  03eea8c  cror 6, 1, 2
  03eea90  bt 6, 0x3eead8
  03eea94  rlwinm 3, 29, 0, 30, 30
  03eea98  cmpwi 3, 0
  03eea9c  bf 2, 0x3eead8
  03eeaa0  li 3, 4
  03eeaa4  cmpwi 27, 6
  03eeaa8  stb 3, 32(31)
  03eeaac  bt 2, 0x3eeb74
  03eeab0  li 3, 3
  03eeab4  bl 0x5e7e18
  03eeab8  nop
  03eeabc  ori 6, 3, 0
  03eeac0  ori 3, 31, 0
  03eeac4  li 4, 6
  03eeac8  li 5, 0
  03eeacc  bl 0xfddc0
  03eead0  nop
  03eead4  b 0x3eeb74
  03eead8  fcmpu 0, 30, 29
  03eeadc  bt 1, 0x3eeaec
  03eeae0  rlwinm 3, 29, 0, 30, 30
  03eeae4  cmpwi 3, 0
  03eeae8  bt 2, 0x3eeafc
  03eeaec  lfs 1, 112(1)
  03eeaf0  lfs 2, 116(1)
  03eeaf4  stfs 1, 16(31)
  03eeaf8  stfs 2, 20(31)
  03eeafc  addic 3, 1, 320
  03eeb00  bl 0x5e8030
  03eeb04  nop
  03eeb08  lfs 2, 508(30)
  03eeb0c  fadds 2, 2, 31
  03eeb10  fcmpu 0, 1, 2
  03eeb14  cror 6, 1, 2
  03eeb18  bt 6, 0x3eeb60
  03eeb1c  lfs 1, 24(31)
  03eeb20  lfs 2, 520(1)
  03eeb24  lis 3, 63
  03eeb28  fsubs 1, 1, 2
  03eeb2c  addi 3, 3, -13892
  03eeb30  lfs 2, 80(3)
  03eeb34  fabs 1, 1
  03eeb38  fcmpu 0, 1, 2
  03eeb3c  cror 6, 1, 2
  03eeb40  bt 6, 0x3eeb60
  03eeb44  lbz 3, 33(31)
  03eeb48  cmpwi 3, 255
  03eeb4c  bt 2, 0x3eeb74
  03eeb50  li 4, 1
  03eeb54  bl 0x104298
  03eeb58  nop
  03eeb5c  b 0x3eeb74
  03eeb60  lbz 3, 188(31)
  03eeb64  cmpwi 3, 1
  03eeb68  bt 2, 0x3eeb74
  03eeb6c  li 3, 5
  03eeb70  stb 3, 32(31)
  03eeb74  ori 3, 31, 0
  03eeb78  ori 4, 30, 0
  03eeb7c  stb 26, 188(31)
  03eeb80  bl 0x3ec8c8
  03eeb84  b 0x3ef8b8
  03eeb88  lfs 1, 512(1)
  03eeb8c  lfs 2, 16(31)
  03eeb90  lfs 3, 516(1)
  03eeb94  lfs 4, 20(31)
  03eeb98  fsubs 1, 1, 2
  03eeb9c  fsubs 2, 3, 4
  03eeba0  bl 0x5e8338
  03eeba4  nop
  03eeba8  lis 3, 63
  03eebac  addic 5, 30, 496
  03eebb0  addi 4, 3, -13892
  03eebb4  ori 3, 31, 0
  03eebb8  lfs 28, 104(4)
  03eebbc  lfs 2, 124(4)
  03eebc0  lfs 3, 128(4)
  03eebc4  fmr 4, 28
  03eebc8  bl 0xff2e8
  03eebcc  nop
  03eebd0  lbz 4, 82(31)
  03eebd4  lbz 5, 83(31)
  03eebd8  ori 3, 31, 0
  03eebdc  subc 28, 4, 5
  03eebe0  bl 0xefe40
  03eebe4  nop
  03eebe8  lfs 2, 24(31)
  03eebec  lfs 3, 520(1)
  03eebf0  fmr 31, 1
  03eebf4  addic 4, 1, 512
  03eebf8  fsubs 30, 2, 3
  03eebfc  ori 3, 27, 0
  03eec00  fabs 30, 30
  03eec04  bl 0x5e8588
  03eec08  nop
  03eec0c  lfs 2, 512(1)
  03eec10  fmr 29, 1
  03eec14  lfs 1, 16(31)
  03eec18  lfs 3, 516(1)
  03eec1c  lfs 4, 20(31)
  03eec20  fsubs 1, 2, 1
  03eec24  fsubs 2, 3, 4
  03eec28  bl 0x5e8338
  03eec2c  nop
  03eec30  lfs 2, 72(31)
  03eec34  bl 0x5026a0
  03eec38  nop
  03eec3c  cmpwi 28, 0
  03eec40  lfs 2, 72(31)
  03eec44  bf 2, 0x3eed74
  03eec48  lis 3, 63
  03eec4c  addi 3, 3, -13892
  03eec50  lfs 3, 152(3)
  03eec54  fsubs 3, 31, 3
  03eec58  fabs 3, 3
  03eec5c  fcmpu 0, 3, 28
  03eec60  cror 6, 1, 2
  03eec64  bt 6, 0x3eed74
  03eec68  lis 3, 63
  03eec6c  addi 3, 3, -13892
  03eec70  lfs 3, 144(3)
  03eec74  fcmpu 0, 30, 3
  03eec78  cror 6, 1, 2
  03eec7c  bt 6, 0x3eed74
  03eec80  lis 3, 63
  03eec84  addi 3, 3, -13892
  03eec88  lfs 3, 140(3)
  03eec8c  fcmpu 0, 29, 3
  03eec90  bt 0, 0x3eecd8
  03eec94  lwz 3, 576(1)
  03eec98  cmpwi 3, 0
  03eec9c  bt 2, 0x3eed74
  03eeca0  lhz 4, 166(3)
  03eeca4  cmpwi 4, 270
  03eeca8  bf 2, 0x3eed74
  03eecac  lbz 3, 32(3)
  03eecb0  cmpwi 1, 3, 253
  03eecb4  cmpwi 3, 254
  03eecb8  cror 2, 2, 6
  03eecbc  bt 2, 0x3eed74
  03eecc0  lis 3, 63
  03eecc4  addi 3, 3, -13892
  03eecc8  lfs 3, 156(3)
  03eeccc  fcmpu 0, 29, 3
  03eecd0  cror 6, 1, 2
  03eecd4  bt 6, 0x3eed74
  03eecd8  lis 3, 63
  03eecdc  addi 3, 3, -13892
  03eece0  lfs 3, 160(3)
  03eece4  fcmpu 0, 1, 3
  03eece8  cror 6, 1, 2
  03eecec  bt 6, 0x3eed74
  03eecf0  fmr 1, 2
  03eecf4  bl 0x5e8078
  03eecf8  nop
  03eecfc  fmuls 2, 1, 28
  03eed00  lfs 1, 72(31)
  03eed04  stfs 2, 336(1)
  03eed08  bl 0x5e8128
  03eed0c  nop
  03eed10  fmuls 1, 1, 28
  03eed14  addic 3, 1, 352
  03eed18  stw 26, 344(1)
  03eed1c  addic 4, 1, 512
  03eed20  stfs 1, 340(1)
  03eed24  bl 0x5e7e98
  03eed28  nop
  03eed2c  lis 3, 63
  03eed30  lfs 1, 360(1)
  03eed34  cmpwi 29, 0
  03eed38  addi 3, 3, -13892
  03eed3c  lfs 2, 164(3)
  03eed40  fadds 1, 1, 2
  03eed44  stfs 1, 360(1)
  03eed48  bt 2, 0x3eed74
  03eed4c  lis 4, 63
  03eed50  ori 3, 29, 0
  03eed54  addi 4, 4, -13892
  03eed58  li 5, 1
  03eed5c  addic 8, 1, 336
  03eed60  addic 7, 1, 352
  03eed64  lfs 1, 36(4)
  03eed68  ori 4, 31, 0
  03eed6c  bl 0x105c08
  03eed70  nop
  03eed74  lbz 3, 112(31)
  03eed78  rlwinm 3, 3, 0, 30, 30
  03eed7c  cmpwi 3, 0
  03eed80  bt 2, 0x3eede4
  03eed84  ori 3, 27, 0
  03eed88  addic 4, 1, 512
  03eed8c  bl 0x5e8588
  03eed90  nop
  03eed94  lis 3, 63
  03eed98  addi 3, 3, -13892
  03eed9c  lfs 2, 144(3)
  03eeda0  fcmpu 0, 1, 2
  03eeda4  cror 6, 0, 2
  03eeda8  bt 6, 0x3eede4
  03eedac  li 3, 3
  03eedb0  lbz 4, 83(31)
  03eedb4  cmpwi 4, 5
  03eedb8  stb 3, 32(31)
  03eedbc  bt 2, 0x3eede4
  03eedc0  li 3, 3
  03eedc4  bl 0x5e7e18
  03eedc8  nop
  03eedcc  ori 6, 3, 0
  03eedd0  ori 3, 31, 0
  03eedd4  li 4, 5
  03eedd8  li 5, 0
  03eeddc  bl 0xfddc0
  03eede0  nop
  03eede4  lis 3, 63
  03eede8  li 4, 288
  03eedec  addi 29, 3, -13892
  03eedf0  ori 3, 27, 0
  03eedf4  lfs 1, 32(29)
  03eedf8  bl 0xffb70
  03eedfc  nop
  03eee00  lis 3, 114
  03eee04  lfs 2, 168(29)
  03eee08  lfs 3, 408(30)
  03eee0c  lfs 4, -3048(3)
  03eee10  fnmsubs 2, 4, 2, 3
  03eee14  stfs 2, 408(30)
  03eee18  lfs 3, 24(31)
  03eee1c  fadds 2, 3, 2
  03eee20  fcmpu 0, 2, 1
  03eee24  stfs 2, 24(31)
  03eee28  cror 6, 1, 2
  03eee2c  bt 6, 0x3eee38
  03eee30  stw 26, 408(30)
  03eee34  stfs 1, 24(31)
  03eee38  ori 3, 31, 0
  03eee3c  ori 4, 30, 0
  03eee40  bl 0x3ec8c8
  03eee44  b 0x3ef8b8
  03eee48  lwz 3, 540(30)
  03eee4c  cmpwi 3, -1
  03eee50  bt 2, 0x3eee80
  03eee54  lis 4, 165
  03eee58  slwi 3, 3, 2
  03eee5c  addic 4, 4, 7136
  03eee60  extsw 7, 3
  03eee64  addic 5, 30, 464
  03eee68  addic 6, 1, 384
  03eee6c  ori 3, 31, 0
  03eee70  lwzx 4, 4, 7
  03eee74  bl 0x1385d0
  03eee78  nop
  03eee7c  b 0x3eee90
  03eee80  addic 4, 30, 464
  03eee84  addic 3, 1, 384
  03eee88  bl 0x5e7e98
  03eee8c  nop
  03eee90  lfs 1, 384(1)
  03eee94  lfs 2, 16(31)
  03eee98  lfs 3, 388(1)
  03eee9c  lfs 4, 20(31)
  03eeea0  fsubs 1, 1, 2
  03eeea4  fsubs 2, 3, 4
  03eeea8  bl 0x5e8338
  03eeeac  nop
  03eeeb0  lis 3, 63
  03eeeb4  addic 5, 30, 496
  03eeeb8  addi 29, 3, -13892
  03eeebc  ori 3, 31, 0
  03eeec0  lfs 2, 132(29)
  03eeec4  lfs 3, 128(29)
  03eeec8  lfs 4, 136(29)
  03eeecc  bl 0xff2e8
  03eeed0  nop
  03eeed4  lfs 1, 72(31)
  03eeed8  bl 0x5e8078
  03eeedc  nop
  03eeee0  lfs 31, 140(29)
  03eeee4  lfs 2, 72(31)
  03eeee8  fmuls 3, 1, 31
  03eeeec  fmr 1, 2
  03eeef0  stfs 3, 368(1)
  03eeef4  bl 0x5e8128
  03eeef8  nop
  03eeefc  fmuls 1, 1, 31
  03eef00  stw 26, 376(1)
  03eef04  ori 3, 31, 0
  03eef08  addic 4, 30, 384
  03eef0c  addic 5, 1, 368
  03eef10  addic 6, 1, 384
  03eef14  stfs 1, 372(1)
  03eef18  lfs 1, 36(29)
  03eef1c  bl 0x101058
  03eef20  nop
  03eef24  addic 28, 30, 464
  03eef28  ori 29, 3, 0
  03eef2c  ori 4, 28, 0
  03eef30  ori 3, 27, 0
  03eef34  bl 0x5e8588
  03eef38  nop
  03eef3c  fcmpu 0, 1, 31
  03eef40  cror 6, 1, 2
  03eef44  bt 6, 0x3eef80
  03eef48  li 3, 1
  03eef4c  lbz 4, 83(31)
  03eef50  cmpwi 4, 3
  03eef54  stb 3, 32(31)
  03eef58  bt 2, 0x3eef80
  03eef5c  li 3, 3
  03eef60  bl 0x5e7e18
  03eef64  nop
  03eef68  ori 6, 3, 0
  03eef6c  ori 3, 31, 0
  03eef70  li 4, 3
  03eef74  li 5, 0
  03eef78  bl 0xfddc0
  03eef7c  nop
  03eef80  addic 27, 1, 400
  03eef84  addic 4, 1, 512
  03eef88  ori 3, 27, 0
  03eef8c  ori 5, 28, 0
  03eef90  bl 0x5e81f0
  03eef94  nop
  03eef98  ori 3, 27, 0
  03eef9c  bl 0x5e8030
  03eefa0  nop
  03eefa4  lfs 2, 508(30)
  03eefa8  fcmpu 0, 1, 2
  03eefac  cror 6, 1, 2
  03eefb0  bt 6, 0x3ef008
  03eefb4  lbz 3, 33(31)
  03eefb8  cmpwi 3, 255
  03eefbc  bt 2, 0x3eefcc
  03eefc0  li 4, 1
  03eefc4  bl 0x104298
  03eefc8  nop
  03eefcc  li 3, 3
  03eefd0  lbz 4, 83(31)
  03eefd4  cmpwi 4, 5
  03eefd8  stb 3, 32(31)
  03eefdc  bt 2, 0x3ef0a4
  03eefe0  li 3, 3
  03eefe4  bl 0x5e7e18
  03eefe8  nop
  03eefec  ori 6, 3, 0
  03eeff0  ori 3, 31, 0
  03eeff4  li 4, 5
  03eeff8  li 5, 0
  03eeffc  bl 0xfddc0
  03ef000  nop
  03ef004  b 0x3ef0a4
  03ef008  lbz 3, 188(31)
  03ef00c  cmpwi 3, 1
  03ef010  bf 2, 0x3ef050
  03ef014  li 3, 3
  03ef018  lbz 4, 83(31)
  03ef01c  cmpwi 4, 5
  03ef020  stb 3, 32(31)
  03ef024  bt 2, 0x3ef0a4
  03ef028  li 3, 3
  03ef02c  bl 0x5e7e18
  03ef030  nop
  03ef034  ori 6, 3, 0
  03ef038  ori 3, 31, 0
  03ef03c  li 4, 5
  03ef040  li 5, 0
  03ef044  bl 0xfddc0
  03ef048  nop
  03ef04c  b 0x3ef0a4
  03ef050  rlwinm 3, 29, 0, 30, 30
  03ef054  cmpwi 3, 0
  03ef058  bt 2, 0x3ef0a4
  03ef05c  lfs 1, 112(1)
  03ef060  lfs 2, 116(1)
  03ef064  li 3, 12
  03ef068  stfs 1, 16(31)
  03ef06c  lbz 4, 83(31)
  03ef070  stfs 2, 20(31)
  03ef074  cmpwi 4, 4
  03ef078  stb 3, 32(31)
  03ef07c  bt 2, 0x3ef0a4
  03ef080  li 3, 3
  03ef084  bl 0x5e7e18
  03ef088  nop
  03ef08c  ori 6, 3, 0
  03ef090  ori 3, 31, 0
  03ef094  li 4, 4
  03ef098  li 5, 0
  03ef09c  bl 0xfddc0
  03ef0a0  nop
  03ef0a4  ori 3, 31, 0
  03ef0a8  ori 4, 30, 0
  03ef0ac  bl 0x3ec8c8
  03ef0b0  stb 26, 188(31)
  03ef0b4  b 0x3ef8b8
  03ef0b8  ori 3, 31, 0
  03ef0bc  addic 4, 30, 288
  03ef0c0  bl 0x10b030
  03ef0c4  nop
  03ef0c8  clrlwi 3, 3, 31
  03ef0cc  cmpwi 3, 0
  03ef0d0  bt 2, 0x3ef180
  03ef0d4  li 3, 289
  03ef0d8  stb 26, 288(30)
  03ef0dc  li 5, 290
  03ef0e0  li 7, 291
  03ef0e4  li 4, 293
  03ef0e8  li 6, 294
  03ef0ec  stbx 26, 30, 3
  03ef0f0  li 8, 299
  03ef0f4  li 3, 295
  03ef0f8  stbx 26, 30, 5
  03ef0fc  stbx 26, 30, 7
  03ef100  li 5, 297
  03ef104  stb 26, 292(30)
  03ef108  li 7, 298
  03ef10c  stbx 26, 30, 4
  03ef110  stbx 26, 30, 6
  03ef114  stbx 26, 30, 3
  03ef118  li 4, 301
  03ef11c  stb 26, 296(30)
  03ef120  li 6, 302
  03ef124  stbx 26, 30, 5
  03ef128  li 3, 303
  03ef12c  stbx 26, 30, 7
  03ef130  li 5, 3
  03ef134  stbx 26, 30, 8
  03ef138  stb 26, 300(30)
  03ef13c  stbx 26, 30, 4
  03ef140  stbx 26, 30, 6
  03ef144  stbx 26, 30, 3
  03ef148  lbz 3, 83(31)
  03ef14c  stb 5, 32(31)
  03ef150  cmpwi 3, 5
  03ef154  bt 2, 0x3efa3c
  03ef158  li 3, 3
  03ef15c  bl 0x5e7e18
  03ef160  nop
  03ef164  ori 6, 3, 0
  03ef168  ori 3, 31, 0
  03ef16c  li 4, 5
  03ef170  li 5, 0
  03ef174  bl 0xfddc0
  03ef178  nop
  03ef17c  b 0x3efa3c
  03ef180  lwz 4, 24(31)
  03ef184  lis 3, 16544
  03ef188  srawi 5, 4, 31
  03ef18c  srwi 6, 5, 1
  03ef190  xor 4, 6, 4
  03ef194  subc 4, 4, 5
  03ef198  cmpw 4, 3
  03ef19c  bf 0, 0x3ef8b8
  03ef1a0  ori 3, 31, 0
  03ef1a4  li 4, 0
  03ef1a8  li 5, -1
  03ef1ac  bl 0xfd8d0
  03ef1b0  nop
  03ef1b4  ori 3, 31, 0
  03ef1b8  bl 0xefb38
  03ef1bc  nop
  03ef1c0  b 0x3efa3c
  03ef1c4  ori 3, 30, 0
  03ef1c8  bl 0x3ec878
  03ef1cc  ori 3, 31, 0
  03ef1d0  addic 4, 30, 288
  03ef1d4  bl 0x48c188
  03ef1d8  nop
  03ef1dc  cmpwi 3, 0
  03ef1e0  bt 2, 0x3ef8b8
  03ef1e4  li 3, 14
  03ef1e8  lbz 4, 83(31)
  03ef1ec  cmpwi 4, 0
  03ef1f0  stb 3, 32(31)
  03ef1f4  bt 2, 0x3ef210
  03ef1f8  ori 3, 31, 0
  03ef1fc  li 4, 0
  03ef200  li 5, 0
  03ef204  li 6, 0
  03ef208  bl 0xfddc0
  03ef20c  nop
  03ef210  sth 26, 200(30)
  03ef214  b 0x3ef8b8
  03ef218  lhz 5, 52(31)
  03ef21c  addic 4, 30, 288
  03ef220  rlwimi 5, 26, 0, 19, 19
  03ef224  ori 3, 31, 0
  03ef228  sth 5, 52(31)
  03ef22c  bl 0x10b030
  03ef230  nop
  03ef234  li 4, 320
  03ef238  and 3, 3, 4
  03ef23c  cmpwi 3, 0
  03ef240  bt 2, 0x3ef2e0
  03ef244  addic 3, 1, 416
  03ef248  bl 0x5e7e70
  03ef24c  nop
  03ef250  lis 4, 269
  03ef254  li 3, 1
  03ef258  addic 30, 4, -17468
  03ef25c  bl 0x5e7e18
  03ef260  nop
  03ef264  extsw 3, 3
  03ef268  lis 4, 63
  03ef26c  std 3, 616(1)
  03ef270  addi 3, 4, -13892
  03ef274  li 4, 3
  03ef278  lfs 1, 172(3)
  03ef27c  lfd 2, 616(1)
  03ef280  ori 3, 30, 0
  03ef284  fcfid 2, 2
  03ef288  frsp 2, 2
  03ef28c  fmuls 1, 2, 1
  03ef290  fctiwz 1, 1
  03ef294  stfd 1, 616(1)
  03ef298  lwz 5, 620(1)
  03ef29c  extsw 5, 5
  03ef2a0  bl 0x3ec788
  03ef2a4  cmpwi 3, 0
  03ef2a8  bt 0, 0x3ef2d0
  03ef2ac  lis 3, 63
  03ef2b0  ori 4, 27, 0
  03ef2b4  addi 5, 3, -13892
  03ef2b8  ori 3, 31, 0
  03ef2bc  li 6, 4
  03ef2c0  lfs 1, 32(5)
  03ef2c4  lfs 2, 152(5)
  03ef2c8  bl 0x10fb28
  03ef2cc  nop
  03ef2d0  ori 3, 31, 0
  03ef2d4  bl 0xefb38
  03ef2d8  nop
  03ef2dc  b 0x3efa3c
  03ef2e0  lwz 3, 24(31)
  03ef2e4  cmpwi 3, 0
  03ef2e8  bf 0, 0x3ef8b8
  03ef2ec  ori 3, 31, 0
  03ef2f0  bl 0xefb38
  03ef2f4  nop
  03ef2f8  b 0x3efa3c
  03ef2fc  lfs 1, 24(31)
  03ef300  lfs 2, 520(1)
  03ef304  ori 3, 27, 0
  03ef308  addic 4, 1, 512
  03ef30c  fsubs 1, 1, 2
  03ef310  fabs 31, 1
  03ef314  bl 0x5e8588
  03ef318  nop
  03ef31c  lwz 3, 540(30)
  03ef320  fdivs 31, 31, 1
  03ef324  cmpwi 3, -1
  03ef328  bt 2, 0x3ef358
  03ef32c  lis 4, 165
  03ef330  slwi 3, 3, 2
  03ef334  addic 4, 4, 7136
  03ef338  extsw 7, 3
  03ef33c  addic 5, 30, 464
  03ef340  addic 6, 1, 448
  03ef344  ori 3, 31, 0
  03ef348  lwzx 4, 4, 7
  03ef34c  bl 0x1385d0
  03ef350  nop
  03ef354  b 0x3ef368
  03ef358  addic 4, 30, 464
  03ef35c  addic 3, 1, 448
  03ef360  bl 0x5e7e98
  03ef364  nop
  03ef368  lfs 1, 448(1)
  03ef36c  lfs 2, 16(31)
  03ef370  lfs 3, 452(1)
  03ef374  lfs 4, 20(31)
  03ef378  fsubs 1, 1, 2
  03ef37c  fsubs 2, 3, 4
  03ef380  bl 0x5e8338
  03ef384  nop
  03ef388  lis 3, 63
  03ef38c  addic 5, 30, 496
  03ef390  addi 28, 3, -13892
  03ef394  ori 3, 31, 0
  03ef398  lfs 2, 124(28)
  03ef39c  lfs 3, 128(28)
  03ef3a0  lfs 4, 104(28)
  03ef3a4  bl 0xff2e8
  03ef3a8  nop
  03ef3ac  lfs 1, 72(31)
  03ef3b0  bl 0x5e8078
  03ef3b4  nop
  03ef3b8  lfs 30, 140(28)
  03ef3bc  lfs 2, 72(31)
  03ef3c0  fmuls 3, 1, 30
  03ef3c4  fmr 1, 2
  03ef3c8  stfs 3, 432(1)
  03ef3cc  bl 0x5e8128
  03ef3d0  nop
  03ef3d4  fmuls 1, 1, 30
  03ef3d8  stw 26, 440(1)
  03ef3dc  ori 3, 31, 0
  03ef3e0  addic 4, 30, 384
  03ef3e4  addic 5, 1, 432
  03ef3e8  addic 6, 1, 448
  03ef3ec  stfs 1, 436(1)
  03ef3f0  lfs 30, 36(28)
  03ef3f4  fmr 1, 30
  03ef3f8  bl 0x101058
  03ef3fc  nop
  03ef400  addic 25, 1, 512
  03ef404  ori 29, 3, 0
  03ef408  addic 3, 1, 464
  03ef40c  ori 4, 25, 0
  03ef410  addic 5, 30, 464
  03ef414  bl 0x5e81f0
  03ef418  nop
  03ef41c  ori 3, 27, 0
  03ef420  ori 4, 25, 0
  03ef424  bl 0x5e8588
  03ef428  nop
  03ef42c  lfs 2, 144(28)
  03ef430  lbz 27, 83(31)
  03ef434  fcmpu 0, 1, 2
  03ef438  lbz 3, 112(31)
  03ef43c  cror 6, 1, 2
  03ef440  bt 6, 0x3ef484
  03ef444  fcmpu 0, 31, 30
  03ef448  bt 1, 0x3ef484
  03ef44c  li 3, 4
  03ef450  cmpwi 27, 6
  03ef454  stb 3, 32(31)
  03ef458  bt 2, 0x3ef5fc
  03ef45c  li 3, 3
  03ef460  bl 0x5e7e18
  03ef464  nop
  03ef468  ori 6, 3, 0
  03ef46c  ori 3, 31, 0
  03ef470  li 4, 6
  03ef474  li 5, 0
  03ef478  bl 0xfddc0
  03ef47c  nop
  03ef480  b 0x3ef5fc
  03ef484  fcmpu 0, 31, 30
  03ef488  bt 1, 0x3ef4d0
  03ef48c  rlwinm 4, 29, 0, 30, 30
  03ef490  cmpwi 4, 0
  03ef494  bf 2, 0x3ef4d0
  03ef498  li 3, 5
  03ef49c  cmpwi 27, 5
  03ef4a0  stb 3, 32(31)
  03ef4a4  bt 2, 0x3ef5fc
  03ef4a8  li 3, 3
  03ef4ac  bl 0x5e7e18
  03ef4b0  nop
  03ef4b4  ori 6, 3, 0
  03ef4b8  ori 3, 31, 0
  03ef4bc  li 4, 5
  03ef4c0  li 5, 0
  03ef4c4  bl 0xfddc0
  03ef4c8  nop
  03ef4cc  b 0x3ef5fc
  03ef4d0  rlwinm 3, 3, 0, 30, 30
  03ef4d4  cmpwi 3, 0
  03ef4d8  bt 2, 0x3ef540
  03ef4dc  li 3, 4
  03ef4e0  bl 0xfc620
  03ef4e4  nop
  03ef4e8  li 3, 4
  03ef4ec  bl 0xfc620
  03ef4f0  nop
  03ef4f4  li 4, 0
  03ef4f8  li 5, 4
  03ef4fc  subc 4, 4, 3
  03ef500  li 6, 3
  03ef504  cntlzw 4, 4
  03ef508  subc 5, 5, 6
  03ef50c  sldi 4, 4, 58
  03ef510  li 3, 3
  03ef514  sradi 4, 4, 63
  03ef518  and 4, 4, 5
  03ef51c  addc 29, 6, 4
  03ef520  bl 0x5e7e18
  03ef524  nop
  03ef528  ori 6, 3, 0
  03ef52c  ori 3, 31, 0
  03ef530  ori 4, 29, 0
  03ef534  li 5, 0
  03ef538  bl 0xfddc0
  03ef53c  nop
  03ef540  li 3, 99
  03ef544  bl 0xfc620
  03ef548  nop
  03ef54c  cmpwi 3, 0
  03ef550  bf 2, 0x3ef5fc
  03ef554  li 3, 65
  03ef558  li 4, 66
  03ef55c  stb 26, 64(30)
  03ef560  li 6, 67
  03ef564  li 5, 69
  03ef568  li 8, 70
  03ef56c  stbx 26, 30, 3
  03ef570  li 3, 71
  03ef574  stbx 26, 30, 4
  03ef578  stbx 26, 30, 6
  03ef57c  li 7, 73
  03ef580  stb 26, 68(30)
  03ef584  li 4, 74
  03ef588  stbx 26, 30, 5
  03ef58c  li 6, 77
  03ef590  li 5, 75
  03ef594  stbx 26, 30, 8
  03ef598  stbx 26, 30, 3
  03ef59c  li 8, 79
  03ef5a0  stb 26, 72(30)
  03ef5a4  li 3, 78
  03ef5a8  stbx 26, 30, 7
  03ef5ac  stbx 26, 30, 4
  03ef5b0  stbx 26, 30, 5
  03ef5b4  li 4, 16
  03ef5b8  stb 26, 76(30)
  03ef5bc  stbx 26, 30, 6
  03ef5c0  stbx 26, 30, 3
  03ef5c4  stbx 26, 30, 8
  03ef5c8  lbz 3, 83(31)
  03ef5cc  stb 4, 32(31)
  03ef5d0  cmpwi 3, 0
  03ef5d4  bt 2, 0x3ef5fc
  03ef5d8  li 3, 3
  03ef5dc  bl 0x5e7e18
  03ef5e0  nop
  03ef5e4  ori 6, 3, 0
  03ef5e8  ori 3, 31, 0
  03ef5ec  li 4, 0
  03ef5f0  li 5, 0
  03ef5f4  bl 0xfddc0
  03ef5f8  nop
  03ef5fc  stb 26, 188(31)
  03ef600  b 0x3ef8b8
  03ef604  lbz 3, 82(31)
  03ef608  cmpwi 3, 5
  03ef60c  bt 2, 0x3ef640
  03ef610  lbz 3, 83(31)
  03ef614  cmpwi 3, 5
  03ef618  bt 2, 0x3ef640
  03ef61c  li 3, 3
  03ef620  bl 0x5e7e18
  03ef624  nop
  03ef628  ori 6, 3, 0
  03ef62c  ori 3, 31, 0
  03ef630  li 4, 5
  03ef634  li 5, 0
  03ef638  bl 0xfddc0
  03ef63c  nop
  03ef640  li 3, 1
  03ef644  lfs 1, 72(31)
  03ef648  sth 3, 530(30)
  03ef64c  bl 0x5e8078
  03ef650  nop
  03ef654  lis 29, 114
  03ef658  lfs 2, 516(30)
  03ef65c  lfs 3, 72(31)
  03ef660  lfs 4, -3052(29)
  03ef664  fmuls 2, 2, 4
  03ef668  fmuls 2, 2, 1
  03ef66c  fmr 1, 3
  03ef670  stfs 2, 480(1)
  03ef674  bl 0x5e8128
  03ef678  nop
  03ef67c  lfs 2, 516(30)
  03ef680  lfs 3, -3052(29)
  03ef684  addic 28, 1, 496
  03ef688  stw 26, 488(1)
  03ef68c  addic 5, 1, 480
  03ef690  fmuls 2, 2, 3
  03ef694  ori 3, 28, 0
  03ef698  ori 4, 27, 0
  03ef69c  fmuls 1, 2, 1
  03ef6a0  stfs 1, 484(1)
  03ef6a4  bl 0x5e7f54
  03ef6a8  nop
  03ef6ac  lis 3, 164
  03ef6b0  lwz 29, -28500(3)
  03ef6b4  cmpwi 29, 0
  03ef6b8  bt 2, 0x3ef7dc
  03ef6bc  lis 3, 63
  03ef6c0  addi 3, 3, -13892
  03ef6c4  lfs 29, 140(3)
  03ef6c8  lfs 28, 176(3)
  03ef6cc  lfs 27, 180(3)
  03ef6d0  cmpw 29, 31
  03ef6d4  bt 2, 0x3ef7d0
  03ef6d8  lbz 3, 32(29)
  03ef6dc  cmpwi 3, 128
  03ef6e0  bf 0, 0x3ef7d0
  03ef6e4  lhz 3, 166(29)
  03ef6e8  cmpwi 3, 0
  03ef6ec  cmpwi 1, 3, 63
  03ef6f0  bt 2, 0x3ef6f8
  03ef6f4  bf 6, 0x3ef7d0
  03ef6f8  addic 25, 29, 16
  03ef6fc  ori 3, 28, 0
  03ef700  ori 4, 25, 0
  03ef704  bl 0x5e8588
  03ef708  nop
  03ef70c  fcmpu 0, 1, 29
  03ef710  cror 6, 1, 2
  03ef714  bt 6, 0x3ef7d0
  03ef718  lfs 1, 16(29)
  03ef71c  lfs 26, 72(31)
  03ef720  lfs 31, 24(31)
  03ef724  lfs 2, 16(31)
  03ef728  lfs 3, 20(29)
  03ef72c  fsubs 1, 1, 2
  03ef730  lfs 4, 20(31)
  03ef734  fsubs 2, 3, 4
  03ef738  bl 0x5e8338
  03ef73c  nop
  03ef740  fmr 2, 1
  03ef744  fmr 1, 26
  03ef748  bl 0x5025e0
  03ef74c  nop
  03ef750  fmr 2, 1
  03ef754  lfs 1, 72(31)
  03ef758  fcmpu 0, 2, 30
  03ef75c  cror 6, 0, 2
  03ef760  bt 6, 0x3ef774
  03ef764  lis 3, 114
  03ef768  fmr 3, 28
  03ef76c  lfs 2, -3052(3)
  03ef770  b 0x3ef780
  03ef774  lis 3, 114
  03ef778  fmr 3, 27
  03ef77c  lfs 2, -3052(3)
  03ef780  fmuls 2, 2, 3
  03ef784  bl 0x502578
  03ef788  nop
  03ef78c  ori 3, 28, 0
  03ef790  ori 4, 27, 0
  03ef794  stfs 1, 72(31)
  03ef798  ori 5, 25, 0
  03ef79c  bl 0x5e81f0
  03ef7a0  nop
  03ef7a4  ori 3, 28, 0
  03ef7a8  ori 4, 28, 0
  03ef7ac  fmr 1, 29
  03ef7b0  bl 0x5e7f98
  03ef7b4  nop
  03ef7b8  ori 3, 28, 0
  03ef7bc  ori 4, 28, 0
  03ef7c0  ori 5, 25, 0
  03ef7c4  bl 0x5e7f54
  03ef7c8  nop
  03ef7cc  stfs 31, 504(1)
  03ef7d0  lwz 29, 40(29)
  03ef7d4  cmpwi 29, 0
  03ef7d8  bf 2, 0x3ef6d0
  03ef7dc  ori 3, 27, 0
  03ef7e0  ori 4, 28, 0
  03ef7e4  bl 0x5e7e98
  03ef7e8  nop
  03ef7ec  lis 3, 63
  03ef7f0  li 4, 288
  03ef7f4  addi 29, 3, -13892
  03ef7f8  ori 3, 27, 0
  03ef7fc  lfs 1, 32(29)
  03ef800  bl 0xffb70
  03ef804  nop
  03ef808  lis 3, 114
  03ef80c  lfs 2, 168(29)
  03ef810  lfs 3, 408(30)
  03ef814  lfs 4, -3048(3)
  03ef818  fnmsubs 2, 4, 2, 3
  03ef81c  stfs 2, 408(30)
  03ef820  lfs 3, 24(31)
  03ef824  fadds 2, 3, 2
  03ef828  fcmpu 0, 2, 1
  03ef82c  stfs 2, 24(31)
  03ef830  cror 6, 1, 2
  03ef834  bt 6, 0x3ef840
  03ef838  stw 26, 408(30)
  03ef83c  stfs 1, 24(31)
  03ef840  lwz 3, 536(30)
  03ef844  cmpwi 3, 0
  03ef848  bt 2, 0x3ef87c
  03ef84c  addic 4, 3, 16
  03ef850  ori 3, 27, 0
  03ef854  bl 0x5e8588
  03ef858  nop
  03ef85c  fmr 31, 1
  03ef860  lhz 3, 534(30)
  03ef864  extsh 3, 3
  03ef868  bl 0x502730
  03ef86c  nop
  03ef870  fcmpu 0, 31, 1
  03ef874  cror 6, 0, 2
  03ef878  bt 6, 0x3ef8b4
  03ef87c  li 3, 5
  03ef880  lbz 4, 83(31)
  03ef884  cmpwi 4, 5
  03ef888  stb 3, 32(31)
  03ef88c  bt 2, 0x3ef8b4
  03ef890  li 3, 3
  03ef894  bl 0x5e7e18
  03ef898  nop
  03ef89c  ori 6, 3, 0
  03ef8a0  ori 3, 31, 0
  03ef8a4  li 4, 5
  03ef8a8  li 5, 0
  03ef8ac  bl 0xfddc0
  03ef8b0  nop
  03ef8b4  stb 26, 188(31)
  03ef8b8  ori 3, 31, 0
  03ef8bc  addic 4, 30, 272
  03ef8c0  bl 0x10c9a0
  03ef8c4  nop
  03ef8c8  lwz 3, 16(31)
  03ef8cc  lis 4, 16384
  03ef8d0  srawi 5, 3, 31
  03ef8d4  srwi 6, 5, 1
  03ef8d8  xor 3, 6, 3
  03ef8dc  subc 3, 3, 5
  03ef8e0  cmpw 3, 4
  03ef8e4  bt 0, 0x3ef958
  03ef8e8  lis 4, 17535
  03ef8ec  ori 4, 4, 16384
  03ef8f0  cmpw 3, 4
  03ef8f4  bt 1, 0x3ef958
  03ef8f8  lwz 5, 20(31)
  03ef8fc  lis 3, 17535
  03ef900  lis 4, 16384
  03ef904  srawi 6, 5, 31
  03ef908  ori 3, 3, 16384
  03ef90c  srwi 7, 6, 1
  03ef910  xor 5, 7, 5
  03ef914  subc 5, 5, 6
  03ef918  cmpw 1, 5, 3
  03ef91c  cmpw 5, 4
  03ef920  cror 2, 0, 5
  03ef924  bt 2, 0x3ef958
  03ef928  lwz 5, 24(31)
  03ef92c  lis 3, 17535
  03ef930  lis 4, 16384
  03ef934  srawi 6, 5, 31
  03ef938  ori 3, 3, 16384
  03ef93c  srwi 7, 6, 1
  03ef940  xor 5, 7, 5
  03ef944  subc 5, 5, 6
  03ef948  cmpw 5, 4
  03ef94c  cmpw 1, 5, 3
  03ef950  bt 0, 0x3ef958
  03ef954  bf 5, 0x3ef968
  03ef958  ori 3, 31, 0
  03ef95c  bl 0xefb38
  03ef960  nop
  03ef964  b 0x3efa3c
  03ef968  lhz 3, 522(30)
  03ef96c  cmpwi 3, 2
  03ef970  bf 2, 0x3efa3c
  03ef974  lis 3, 161
  03ef978  lis 4, 16250
  03ef97c  ori 4, 4, 57672
  03ef980  lwz 3, 1816(3)
  03ef984  srawi 5, 3, 31
  03ef988  srwi 6, 5, 1
  03ef98c  xor 3, 6, 3
  03ef990  subc 3, 3, 5
  03ef994  cmpw 3, 4
  03ef998  bt 1, 0x3ef9c4
  03ef99c  lis 3, 161
  03ef9a0  lis 4, 16250
  03ef9a4  ori 4, 4, 57672
  03ef9a8  lwz 3, 1812(3)
  03ef9ac  srawi 5, 3, 31
  03ef9b0  srwi 6, 5, 1
  03ef9b4  xor 3, 6, 3
  03ef9b8  subc 3, 3, 5
  03ef9bc  cmpw 3, 4
  03ef9c0  bf 1, 0x3efa3c
  03ef9c4  li 3, 29
  03ef9c8  bl 0xfc620
  03ef9cc  nop
  03ef9d0  cmpwi 3, 0
  03ef9d4  bf 2, 0x3efa3c
  03ef9d8  lbz 3, 49(31)
  03ef9dc  cmpwi 3, 0
  03ef9e0  bf 2, 0x3efa3c
  03ef9e4  bl 0x5c8318
  03ef9e8  nop
  03ef9ec  lis 4, 21845
  03ef9f0  ori 4, 4, 21846
  03ef9f4  mulhw 5, 4, 3
  03ef9f8  lbz 4, 33(31)
  03ef9fc  srwi 6, 5, 31
  03efa00  cmpwi 4, 255
  03efa04  addc 5, 5, 6
  03efa08  addc 6, 5, 5
  03efa0c  addc 5, 5, 6
  03efa10  subc 3, 3, 5
  03efa14  bt 2, 0x3efa28
  03efa18  ori 3, 4, 0
  03efa1c  li 4, -1
  03efa20  bl 0x104214
  03efa24  nop
  03efa28  cmpwi 3, 2
  03efa2c  bf 1, 0x3efa3c
  03efa30  ori 3, 31, 0
  03efa34  bl 0xefb38
  03efa38  nop
  03efa3c  ld 0, 800(1)
  03efa40  mtlr 0
  03efa44  lfd 23, 712(1)
  03efa48  lfd 24, 720(1)
  03efa4c  lfd 25, 728(1)
  03efa50  lfd 26, 736(1)
  03efa54  lfd 27, 744(1)
  03efa58  lfd 28, 752(1)
  03efa5c  lfd 29, 760(1)
  03efa60  lfd 30, 768(1)
  03efa64  lfd 31, 776(1)
  03efa68  ld 23, 640(1)
  03efa6c  ld 24, 648(1)
  03efa70  ld 25, 656(1)
  03efa74  ld 26, 664(1)
  03efa78  ld 27, 672(1)
  03efa7c  ld 28, 680(1)
  03efa80  ld 29, 688(1)
  03efa84  ld 30, 696(1)
  03efa88  ld 31, 704(1)
  03efa8c  addi 1, 1, 784
  03efa90  blr
