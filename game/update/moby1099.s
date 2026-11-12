# game/update/moby1099.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1099:   # 0x1bc828, 0x40 bytes
  01bc828  lis 4, 161
  01bc82c  lwz 4, 1800(4)
  01bc830  cmpwi 4, 2
  01bc834  bf 2, 0x1bc850
  01bc838  li 4, 0
  01bc83c  lhz 5, 52(3)
  01bc840  stb 4, 49(3)
  01bc844  ori 4, 5, 1
  01bc848  sth 4, 52(3)
  01bc84c  b 0x1bc864
  01bc850  li 4, 1
  01bc854  lhz 5, 52(3)
  01bc858  stb 4, 49(3)
  01bc85c  rlwinm 4, 5, 0, 0, 30
  01bc860  sth 4, 52(3)
  01bc864  blr

M1099_001bc8c8:   # 0x1bc8c8, 0xb18 bytes
  01bc8c8  stdu 1, -816(1)
  01bc8cc  mflr 0
  01bc8d0  std 0, 832(1)
  01bc8d4  stfd 16, 688(1)
  01bc8d8  stfd 17, 696(1)
  01bc8dc  stfd 18, 704(1)
  01bc8e0  stfd 19, 712(1)
  01bc8e4  stfd 20, 720(1)
  01bc8e8  stfd 21, 728(1)
  01bc8ec  stfd 22, 736(1)
  01bc8f0  stfd 23, 744(1)
  01bc8f4  stfd 24, 752(1)
  01bc8f8  stfd 25, 760(1)
  01bc8fc  stfd 26, 768(1)
  01bc900  stfd 27, 776(1)
  01bc904  stfd 28, 784(1)
  01bc908  stfd 29, 792(1)
  01bc90c  stfd 30, 800(1)
  01bc910  stfd 31, 808(1)
  01bc914  addi 0, 1, 384
  01bc918  stvx 20, 0, 0
  01bc91c  addic 0, 0, 16
  01bc920  stvx 21, 0, 0
  01bc924  addic 0, 0, 16
  01bc928  stvx 22, 0, 0
  01bc92c  addic 0, 0, 16
  01bc930  stvx 23, 0, 0
  01bc934  addic 0, 0, 16
  01bc938  stvx 24, 0, 0
  01bc93c  addic 0, 0, 16
  01bc940  stvx 25, 0, 0
  01bc944  addic 0, 0, 16
  01bc948  stvx 26, 0, 0
  01bc94c  addic 0, 0, 16
  01bc950  stvx 27, 0, 0
  01bc954  addic 0, 0, 16
  01bc958  stvx 28, 0, 0
  01bc95c  addic 0, 0, 16
  01bc960  stvx 29, 0, 0
  01bc964  addic 0, 0, 16
  01bc968  stvx 30, 0, 0
  01bc96c  addic 0, 0, 16
  01bc970  stvx 31, 0, 0
  01bc974  std 31, 680(1)
  01bc978  lis 4, 28
  01bc97c  std 29, 664(1)
  01bc980  ori 31, 3, 0
  01bc984  addi 29, 4, -14232
  01bc988  lis 4, 149
  01bc98c  li 5, 0
  01bc990  addic 6, 4, 5056
  01bc994  addic 3, 1, 144
  01bc998  lfs 1, 0(29)
  01bc99c  addic 4, 1, 112
  01bc9a0  std 30, 672(1)
  01bc9a4  stw 5, 112(1)
  01bc9a8  lwz 30, 120(31)
  01bc9ac  stw 5, 116(1)
  01bc9b0  lfs 2, 344(6)
  01bc9b4  std 6, 336(1)
  01bc9b8  stfs 2, 120(1)
  01bc9bc  std 28, 656(1)
  01bc9c0  std 27, 648(1)
  01bc9c4  std 26, 640(1)
  01bc9c8  std 25, 632(1)
  01bc9cc  std 24, 624(1)
  01bc9d0  std 23, 616(1)
  01bc9d4  std 22, 608(1)
  01bc9d8  std 21, 600(1)
  01bc9dc  std 20, 592(1)
  01bc9e0  std 19, 584(1)
  01bc9e4  stfd 1, 360(1)
  01bc9e8  bl 0x500b64
  01bc9ec  nop
  01bc9f0  lis 28, 118
  01bc9f4  lfs 2, 4(29)
  01bc9f8  lfs 1, 15756(28)
  01bc9fc  stfd 2, 352(1)
  01bca00  fadds 1, 1, 2
  01bca04  stfs 1, 15756(28)
  01bca08  lfs 2, 8(29)
  01bca0c  fcmpu 0, 1, 2
  01bca10  stfd 2, 344(1)
  01bca14  cror 6, 0, 2
  01bca18  bt 6, 0x1bca28
  01bca1c  lfd 2, 344(1)
  01bca20  fsubs 1, 1, 2
  01bca24  stfs 1, 15756(28)
  01bca28  li 3, 0
  01bca2c  li 4, 0
  01bca30  li 5, 0
  01bca34  li 6, 0
  01bca38  li 7, 0
  01bca3c  li 8, 0
  01bca40  bl 0x502f08
  01bca44  nop
  01bca48  std 3, 304(1)
  01bca4c  li 3, 1
  01bca50  li 4, 0
  01bca54  li 5, 0
  01bca58  li 6, 0
  01bca5c  li 7, 0
  01bca60  li 8, 0
  01bca64  li 9, 0
  01bca68  bl 0x502fd4
  01bca6c  nop
  01bca70  std 3, 320(1)
  01bca74  li 3, 0
  01bca78  li 4, 1
  01bca7c  li 5, 0
  01bca80  li 6, 1
  01bca84  li 7, 64
  01bca88  bl 0x502ea8
  01bca8c  nop
  01bca90  std 3, 328(1)
  01bca94  li 3, 24
  01bca98  bl 0x685c4
  01bca9c  nop
  01bcaa0  lis 22, 118
  01bcaa4  lis 27, 118
  01bcaa8  std 3, 312(1)
  01bcaac  addic 22, 22, 15580
  01bcab0  lis 26, 118
  01bcab4  lis 23, 161
  01bcab8  lis 25, 118
  01bcabc  addic 27, 27, 15328
  01bcac0  addic 21, 22, 4
  01bcac4  addic 24, 1, 192
  01bcac8  addic 20, 22, 8
  01bcacc  addic 23, 23, 24396
  01bcad0  addic 19, 22, 12
  01bcad4  li 29, 0
  01bcad8  addic 26, 26, 15544
  01bcadc  addic 25, 25, 15472
  01bcae0  lwz 3, 0(22)
  01bcae4  lfs 1, 160(1)
  01bcae8  slwi 4, 3, 4
  01bcaec  lfs 2, 144(1)
  01bcaf0  addc 4, 4, 27
  01bcaf4  lfs 3, 164(1)
  01bcaf8  clrldi 4, 4, 32
  01bcafc  lfs 4, 4(4)
  01bcb00  lfs 5, 0(4)
  01bcb04  lfs 7, 176(1)
  01bcb08  fmuls 6, 1, 4
  01bcb0c  lfs 9, 8(4)
  01bcb10  fmuls 8, 3, 4
  01bcb14  lfs 10, 168(1)
  01bcb18  lfs 11, 148(1)
  01bcb1c  fmuls 4, 10, 4
  01bcb20  lfs 12, 152(1)
  01bcb24  lwz 4, 0(21)
  01bcb28  lfs 13, 180(1)
  01bcb2c  slwi 5, 4, 4
  01bcb30  lfs 0, 184(1)
  01bcb34  lwz 6, 0(20)
  01bcb38  addc 5, 5, 27
  01bcb3c  fmadds 6, 2, 5, 6
  01bcb40  slwi 7, 6, 4
  01bcb44  fmadds 8, 11, 5, 8
  01bcb48  clrldi 5, 5, 32
  01bcb4c  addc 7, 7, 27
  01bcb50  fmadds 4, 12, 5, 4
  01bcb54  clrldi 7, 7, 32
  01bcb58  slwi 9, 6, 3
  01bcb5c  fmadds 5, 7, 9, 6
  01bcb60  lfs 6, 4(5)
  01bcb64  fmadds 8, 13, 9, 8
  01bcb68  lfs 30, 0(5)
  01bcb6c  fmuls 31, 1, 6
  01bcb70  fmadds 4, 0, 9, 4
  01bcb74  lfs 9, 8(5)
  01bcb78  fmuls 29, 3, 6
  01bcb7c  lwz 5, 0(19)
  01bcb80  lfs 28, 16(31)
  01bcb84  lfs 27, 0(7)
  01bcb88  fmuls 6, 10, 6
  01bcb8c  lfs 26, 4(7)
  01bcb90  slwi 8, 5, 4
  01bcb94  lfs 25, 8(7)
  01bcb98  lfs 24, 144(30)
  01bcb9c  addc 8, 8, 27
  01bcba0  fmadds 5, 5, 24, 28
  01bcba4  clrldi 8, 8, 32
  01bcba8  fmadds 31, 2, 30, 31
  01bcbac  fmadds 29, 11, 30, 29
  01bcbb0  fmuls 21, 1, 26
  01bcbb4  fmadds 6, 12, 30, 6
  01bcbb8  lfs 30, 0(8)
  01bcbbc  lfs 24, 4(8)
  01bcbc0  lfs 23, 8(8)
  01bcbc4  lfs 22, 20(31)
  01bcbc8  lfs 20, 24(31)
  01bcbcc  fmadds 31, 7, 9, 31
  01bcbd0  stfs 5, 192(1)
  01bcbd4  lfs 5, 144(30)
  01bcbd8  fadds 4, 20, 4
  01bcbdc  fmadds 29, 13, 9, 29
  01bcbe0  fmadds 5, 8, 5, 22
  01bcbe4  fmadds 6, 0, 9, 6
  01bcbe8  fmadds 8, 2, 27, 21
  01bcbec  fmuls 9, 3, 26
  01bcbf0  fmuls 26, 10, 26
  01bcbf4  fmuls 1, 1, 24
  01bcbf8  slwi 7, 3, 3
  01bcbfc  fmuls 3, 3, 24
  01bcc00  slwi 3, 3, 2
  01bcc04  extsw 7, 7
  01bcc08  stfs 4, 200(1)
  01bcc0c  fadds 6, 20, 6
  01bcc10  stfs 5, 196(1)
  01bcc14  lfs 5, 144(30)
  01bcc18  fmadds 8, 7, 25, 8
  01bcc1c  fmadds 4, 11, 27, 9
  01bcc20  fmadds 5, 31, 5, 28
  01bcc24  fmadds 9, 12, 27, 26
  01bcc28  extsw 3, 3
  01bcc2c  fmadds 1, 2, 30, 1
  01bcc30  slwi 8, 4, 3
  01bcc34  fmadds 3, 11, 30, 3
  01bcc38  addc 10, 7, 25
  01bcc3c  slwi 4, 4, 2
  01bcc40  slwi 6, 6, 2
  01bcc44  extsw 4, 4
  01bcc48  extsw 6, 6
  01bcc4c  fmadds 2, 13, 25, 4
  01bcc50  extsw 8, 8
  01bcc54  fmadds 4, 0, 25, 9
  01bcc58  stfs 5, 208(1)
  01bcc5c  lfs 5, 144(30)
  01bcc60  fmadds 1, 7, 23, 1
  01bcc64  stfs 6, 216(1)
  01bcc68  fmadds 5, 29, 5, 22
  01bcc6c  fmuls 6, 10, 24
  01bcc70  extsw 9, 9
  01bcc74  fmadds 3, 13, 23, 3
  01bcc78  fadds 4, 20, 4
  01bcc7c  fmadds 6, 12, 30, 6
  01bcc80  stfs 5, 212(1)
  01bcc84  lfs 5, 144(30)
  01bcc88  fmadds 5, 8, 5, 28
  01bcc8c  stfs 5, 224(1)
  01bcc90  fmadds 5, 0, 23, 6
  01bcc94  lfs 6, 144(30)
  01bcc98  stfs 4, 232(1)
  01bcc9c  fmadds 2, 2, 6, 22
  01bcca0  fadds 4, 20, 5
  01bcca4  stfs 2, 228(1)
  01bcca8  lfs 2, 144(30)
  01bccac  lwzx 3, 26, 3
  01bccb0  fmadds 1, 1, 2, 28
  01bccb4  lfs 2, 4(10)
  01bccb8  lfs 5, 15756(28)
  01bccbc  stw 3, 256(1)
  01bccc0  slwi 10, 5, 2
  01bccc4  lwzx 4, 26, 4
  01bccc8  addc 3, 8, 25
  01bcccc  fadds 2, 2, 5
  01bccd0  extsw 10, 10
  01bccd4  stw 4, 260(1)
  01bccd8  slwi 4, 5, 3
  01bccdc  lwzx 5, 26, 6
  01bcce0  addc 6, 9, 25
  01bcce4  extsw 4, 4
  01bcce8  stfs 1, 240(1)
  01bccec  lfs 1, 144(30)
  01bccf0  stfs 4, 248(1)
  01bccf4  fmadds 1, 3, 1, 22
  01bccf8  lfs 3, 4(3)
  01bccfc  stw 5, 264(1)
  01bcd00  lwzx 3, 26, 10
  01bcd04  fadds 3, 3, 5
  01bcd08  addc 5, 4, 25
  01bcd0c  stw 3, 268(1)
  01bcd10  lfsx 4, 25, 7
  01bcd14  lfs 6, 4(6)
  01bcd18  ori 3, 24, 0
  01bcd1c  stfs 4, 272(1)
  01bcd20  li 7, 9
  01bcd24  stfs 2, 276(1)
  01bcd28  fadds 4, 6, 5
  01bcd2c  stfs 1, 244(1)
  01bcd30  lfsx 1, 25, 8
  01bcd34  lfs 2, 4(5)
  01bcd38  stfs 1, 280(1)
  01bcd3c  fadds 1, 2, 5
  01bcd40  stfs 3, 284(1)
  01bcd44  lfsx 2, 25, 9
  01bcd48  li 5, 1
  01bcd4c  lfsx 3, 25, 4
  01bcd50  stfs 2, 288(1)
  01bcd54  stfs 3, 296(1)
  01bcd58  li 4, 0
  01bcd5c  stfs 4, 292(1)
  01bcd60  lwz 6, 28(23)
  01bcd64  stfs 1, 300(1)
  01bcd68  bl 0x72280
  01bcd6c  nop
  01bcd70  addic 29, 29, 1
  01bcd74  addic 22, 22, 16
  01bcd78  cmpwi 29, 4
  01bcd7c  addic 21, 21, 16
  01bcd80  addic 20, 20, 16
  01bcd84  addic 19, 19, 16
  01bcd88  bt 0, 0x1bcae0
  01bcd8c  li 3, 27
  01bcd90  bl 0x685c4
  01bcd94  nop
  01bcd98  lis 4, 118
  01bcd9c  lfd 16, 352(1)
  01bcda0  lfs 1, 15760(4)
  01bcda4  fadds 16, 1, 16
  01bcda8  lfd 1, 344(1)
  01bcdac  std 3, 312(1)
  01bcdb0  lfs 18, 144(30)
  01bcdb4  fmr 17, 16
  01bcdb8  stfs 16, 15760(4)
  01bcdbc  fcmpu 0, 17, 1
  01bcdc0  cror 6, 0, 2
  01bcdc4  bt 6, 0x1bcddc
  01bcdc8  lis 3, 118
  01bcdcc  li 4, 0
  01bcdd0  stw 4, 15760(3)
  01bcdd4  lfd 17, 360(1)
  01bcdd8  lfs 16, 15760(3)
  01bcddc  lis 3, 28
  01bcde0  li 29, 0
  01bcde4  addi 30, 3, -14232
  01bcde8  li 3, 20
  01bcdec  lfs 1, 12(30)
  01bcdf0  lfs 2, 24(30)
  01bcdf4  fmuls 6, 17, 1
  01bcdf8  lfs 3, 16(30)
  01bcdfc  fmuls 1, 16, 1
  01bce00  lfs 4, 20(30)
  01bce04  fmuls 2, 16, 2
  01bce08  lfs 5, 28(30)
  01bce0c  fmadds 31, 16, 3, 4
  01bce10  ld 4, 336(1)
  01bce14  lvlx 29, 3, 30
  01bce18  addic 3, 1, 144
  01bce1c  vspltw 29, 29, 0
  01bce20  fmuls 30, 6, 18
  01bce24  fmuls 28, 1, 18
  01bce28  lfs 1, 344(4)
  01bce2c  stw 29, 112(1)
  01bce30  fmuls 29, 2, 18
  01bce34  stw 29, 116(1)
  01bce38  fsubs 27, 31, 5
  01bce3c  stfs 1, 120(1)
  01bce40  addic 4, 1, 112
  01bce44  bl 0x500b64
  01bce48  nop
  01bce4c  lfs 1, 160(1)
  01bce50  lfs 2, 164(1)
  01bce54  fmuls 3, 1, 30
  01bce58  lfs 5, 168(1)
  01bce5c  fmuls 7, 1, 28
  01bce60  lfs 6, 144(1)
  01bce64  fmuls 4, 2, 30
  01bce68  lfs 9, 148(1)
  01bce6c  fmuls 8, 5, 30
  01bce70  lfs 11, 152(1)
  01bce74  fmuls 10, 2, 28
  01bce78  lfs 13, 176(1)
  01bce7c  fmuls 12, 5, 28
  01bce80  lfs 0, 180(1)
  01bce84  fmuls 1, 1, 29
  01bce88  lfs 26, 184(1)
  01bce8c  fmuls 2, 2, 29
  01bce90  fmuls 5, 5, 29
  01bce94  fmadds 3, 6, 30, 3
  01bce98  fmadds 7, 6, 29, 7
  01bce9c  fmadds 4, 9, 30, 4
  01bcea0  fmadds 8, 11, 30, 8
  01bcea4  fmadds 10, 9, 29, 10
  01bcea8  fmadds 12, 11, 29, 12
  01bceac  fmadds 30, 6, 28, 1
  01bceb0  fmadds 25, 9, 28, 2
  01bceb4  fmadds 28, 11, 28, 5
  01bceb8  fmadds 1, 6, 29, 1
  01bcebc  fmadds 3, 13, 31, 3
  01bcec0  li 3, 8
  01bcec4  fmadds 2, 9, 29, 2
  01bcec8  fmadds 7, 13, 27, 7
  01bcecc  fmadds 5, 11, 29, 5
  01bced0  fmadds 4, 0, 31, 4
  01bced4  fmadds 8, 26, 31, 8
  01bced8  li 4, 15760
  01bcedc  fmadds 6, 0, 27, 10
  01bcee0  lis 5, 118
  01bcee4  fmadds 9, 26, 27, 12
  01bcee8  fmadds 10, 13, 31, 30
  01bceec  fmadds 11, 0, 31, 25
  01bcef0  fmadds 12, 26, 31, 28
  01bcef4  lfs 31, 16(31)
  01bcef8  fmadds 1, 13, 27, 1
  01bcefc  fmadds 2, 0, 27, 2
  01bcf00  lfs 13, 20(31)
  01bcf04  fadds 3, 31, 3
  01bcf08  lfs 0, 24(31)
  01bcf0c  fmadds 5, 26, 27, 5
  01bcf10  fadds 7, 31, 7
  01bcf14  fadds 4, 13, 4
  01bcf18  li 6, 32
  01bcf1c  fadds 8, 0, 8
  01bcf20  fadds 6, 13, 6
  01bcf24  fadds 9, 0, 9
  01bcf28  fadds 10, 31, 10
  01bcf2c  fadds 11, 13, 11
  01bcf30  fadds 12, 0, 12
  01bcf34  fadds 1, 31, 1
  01bcf38  fadds 2, 13, 2
  01bcf3c  fadds 5, 0, 5
  01bcf40  stfs 3, 192(1)
  01bcf44  stfs 7, 208(1)
  01bcf48  stfs 4, 196(1)
  01bcf4c  stfs 8, 200(1)
  01bcf50  stfs 6, 212(1)
  01bcf54  stfs 9, 216(1)
  01bcf58  stfs 10, 224(1)
  01bcf5c  stfs 11, 228(1)
  01bcf60  stfs 12, 232(1)
  01bcf64  stfs 1, 240(1)
  01bcf68  stfs 2, 244(1)
  01bcf6c  stfs 5, 248(1)
  01bcf70  lvlx 2, 3, 30
  01bcf74  lvlx 3, 4, 5
  01bcf78  li 3, 36
  01bcf7c  vspltw 2, 2, 0
  01bcf80  lvlx 4, 6, 30
  01bcf84  vspltisw 30, 0
  01bcf88  vspltw 4, 4, 0
  01bcf8c  vsubfp 2, 2, 3
  01bcf90  vspltisw 3, -1
  01bcf94  lvlx 5, 3, 30
  01bcf98  li 8, 256
  01bcf9c  li 3, 40
  01bcfa0  vspltw 5, 5, 0
  01bcfa4  vslw 3, 3, 3
  01bcfa8  li 9, 260
  01bcfac  li 10, 264
  01bcfb0  li 11, 268
  01bcfb4  lvlx 6, 3, 30
  01bcfb8  lis 12, 16256
  01bcfbc  lwz 6, 28(23)
  01bcfc0  ori 3, 24, 0
  01bcfc4  vspltw 6, 6, 0
  01bcfc8  vmaddfp 2, 2, 4, 3
  01bcfcc  vspltisw 3, -16
  01bcfd0  li 4, 0
  01bcfd4  li 5, 1
  01bcfd8  li 7, 9
  01bcfdc  vrlw 4, 5, 3
  01bcfe0  vctsxs 2, 2, 0
  01bcfe4  vmsumshm 4, 2, 4, 30
  01bcfe8  vmulouh 2, 2, 5
  01bcfec  vslw 3, 4, 3
  01bcff0  vadduwm 2, 3, 2
  01bcff4  vor 2, 2, 6
  01bcff8  vspltw 2, 2, 0
  01bcffc  stvewx 2, 8, 1
  01bd000  stvewx 2, 9, 1
  01bd004  stvewx 2, 10, 1
  01bd008  stvewx 2, 11, 1
  01bd00c  stw 29, 272(1)
  01bd010  stw 29, 276(1)
  01bd014  stw 12, 280(1)
  01bd018  stw 29, 284(1)
  01bd01c  stw 29, 288(1)
  01bd020  stw 12, 292(1)
  01bd024  stw 12, 296(1)
  01bd028  stw 12, 300(1)
  01bd02c  bl 0x72280
  01bd030  nop
  01bd034  li 3, 44
  01bd038  li 5, 48
  01bd03c  li 7, 52
  01bd040  li 4, 56
  01bd044  li 6, 60
  01bd048  li 8, 64
  01bd04c  lvlx 20, 3, 30
  01bd050  li 9, 84
  01bd054  lvlx 21, 5, 30
  01bd058  li 3, 80
  01bd05c  lvlx 23, 7, 30
  01bd060  li 5, 68
  01bd064  lvlx 24, 4, 30
  01bd068  li 7, 72
  01bd06c  lvlx 28, 6, 30
  01bd070  li 4, 88
  01bd074  lvlx 27, 8, 30
  01bd078  li 6, 368
  01bd07c  lvlx 2, 3, 30
  01bd080  ori 24, 29, 0
  01bd084  lvlx 26, 5, 30
  01bd088  vspltw 2, 2, 0
  01bd08c  lvlx 25, 7, 30
  01bd090  lfs 18, 76(30)
  01bd094  lvlx 31, 9, 30
  01bd098  lvlx 22, 4, 30
  01bd09c  vspltw 20, 20, 0
  01bd0a0  vspltw 21, 21, 0
  01bd0a4  vspltw 23, 23, 0
  01bd0a8  vspltw 24, 24, 0
  01bd0ac  vspltw 28, 28, 0
  01bd0b0  vspltw 27, 27, 0
  01bd0b4  vspltw 26, 26, 0
  01bd0b8  vspltw 25, 25, 0
  01bd0bc  vspltw 31, 31, 0
  01bd0c0  vspltw 22, 22, 0
  01bd0c4  stvx 2, 6, 1
  01bd0c8  vcfsx 2, 30, 0
  01bd0cc  li 3, 368
  01bd0d0  vspltisw 8, -1
  01bd0d4  vspltisw 4, -1
  01bd0d8  vspltisw 13, -1
  01bd0dc  lvx 3, 3, 1
  01bd0e0  vslw 4, 4, 4
  01bd0e4  vspltisw 12, -1
  01bd0e8  vnmsubfp 2, 2, 3, 20
  01bd0ec  vspltisw 3, -1
  01bd0f0  li 3, 208
  01bd0f4  li 4, 220
  01bd0f8  vslw 3, 3, 3
  01bd0fc  li 5, 212
  01bd100  li 6, 192
  01bd104  vxor 2, 2, 22
  01bd108  li 7, 216
  01bd10c  vaddfp 5, 2, 21
  01bd110  vsubfp 6, 23, 2
  01bd114  vsubfp 7, 24, 2
  01bd118  li 8, 24
  01bd11c  li 9, 128
  01bd120  fmr 1, 18
  01bd124  li 10, 132
  01bd128  li 11, 136
  01bd12c  vsubfp 9, 23, 5
  01bd130  vcmpgtfp 11, 6, 2
  01bd134  vsubfp 10, 24, 5
  01bd138  vsel 2, 6, 2, 11
  01bd13c  vslw 6, 8, 8
  01bd140  vcmpgtfp 8, 2, 7
  01bd144  vsel 2, 7, 2, 8
  01bd148  vspltisw 8, -1
  01bd14c  vcmpgtfp 11, 9, 5
  01bd150  vmaddfp 4, 2, 2, 4
  01bd154  vsel 5, 9, 5, 11
  01bd158  vspltisw 9, -1
  01bd15c  vspltisw 11, -1
  01bd160  vslw 8, 8, 8
  01bd164  vcmpgtfp 7, 5, 10
  01bd168  vslw 9, 9, 9
  01bd16c  vsel 5, 10, 5, 7
  01bd170  vspltisw 7, -1
  01bd174  vslw 11, 11, 11
  01bd178  vspltisw 10, -1
  01bd17c  vmaddfp 3, 5, 5, 3
  01bd180  vslw 7, 7, 7
  01bd184  vslw 10, 10, 10
  01bd188  vmaddfp 7, 4, 2, 7
  01bd18c  vmaddfp 6, 3, 5, 6
  01bd190  vmaddfp 9, 4, 7, 9
  01bd194  vmaddfp 2, 7, 28, 2
  01bd198  vmaddfp 7, 3, 6, 8
  01bd19c  vmaddfp 5, 6, 28, 5
  01bd1a0  vslw 8, 13, 13
  01bd1a4  vslw 6, 12, 12
  01bd1a8  vspltisw 12, -1
  01bd1ac  vmaddfp 11, 4, 9, 11
  01bd1b0  vmaddfp 2, 9, 27, 2
  01bd1b4  vmaddfp 9, 3, 7, 10
  01bd1b8  vmaddfp 5, 7, 27, 5
  01bd1bc  vspltisw 10, -1
  01bd1c0  vslw 7, 12, 12
  01bd1c4  vmaddfp 4, 4, 11, 8
  01bd1c8  vmaddfp 2, 11, 26, 2
  01bd1cc  vspltisw 8, -1
  01bd1d0  vmaddfp 3, 3, 9, 6
  01bd1d4  vmaddfp 5, 9, 26, 5
  01bd1d8  vslw 6, 10, 10
  01bd1dc  vmaddfp 2, 4, 25, 2
  01bd1e0  vspltisw 4, -1
  01bd1e4  vslw 4, 4, 4
  01bd1e8  vmaddfp 3, 3, 25, 5
  01bd1ec  vspltisw 5, -1
  01bd1f0  vmaddfp 2, 2, 29, 6
  01bd1f4  vslw 5, 5, 5
  01bd1f8  lvlx 6, 3, 31
  01bd1fc  li 3, 204
  01bd200  vmaddfp 3, 3, 29, 7
  01bd204  lvlx 7, 4, 31
  01bd208  lvlx 9, 5, 31
  01bd20c  lvlx 10, 6, 31
  01bd210  li 4, 196
  01bd214  li 5, 224
  01bd218  vmaddfp 4, 6, 2, 4
  01bd21c  vmaddfp 5, 7, 2, 5
  01bd220  vslw 6, 8, 8
  01bd224  vspltisw 8, -1
  01bd228  li 6, 228
  01bd22c  lvlx 7, 3, 31
  01bd230  lvlx 11, 7, 31
  01bd234  vmaddfp 6, 9, 2, 6
  01bd238  li 3, 200
  01bd23c  vslw 8, 8, 8
  01bd240  li 7, 140
  01bd244  lvlx 9, 4, 31
  01bd248  li 4, 236
  01bd24c  vmaddfp 2, 11, 2, 8
  01bd250  lvlx 12, 3, 31
  01bd254  vmaddfp 4, 10, 3, 4
  01bd258  vmaddfp 5, 7, 3, 5
  01bd25c  lvlx 13, 5, 31
  01bd260  li 3, 232
  01bd264  lvlx 7, 4, 31
  01bd268  li 5, 16
  01bd26c  lvlx 8, 6, 31
  01bd270  vmaddfp 6, 9, 3, 6
  01bd274  lvlx 9, 7, 1
  01bd278  li 6, 20
  01bd27c  lvlx 10, 3, 31
  01bd280  lwz 4, 144(31)
  01bd284  vmaddfp 2, 12, 3, 2
  01bd288  lfd 2, 360(1)
  01bd28c  vmaddfp 3, 13, 31, 4
  01bd290  vmaddfp 4, 7, 31, 5
  01bd294  addic 3, 1, 128
  01bd298  rlwinm 4, 4, 0, 0, 15
  01bd29c  vmaddfp 5, 8, 31, 6
  01bd2a0  vmaddfp 2, 10, 31, 2
  01bd2a4  vaddfp 4, 4, 9
  01bd2a8  vspltw 4, 4, 0
  01bd2ac  stvewx 4, 7, 1
  01bd2b0  lvlx 4, 5, 31
  01bd2b4  lvlx 6, 6, 31
  01bd2b8  vaddfp 3, 3, 4
  01bd2bc  vaddfp 4, 5, 6
  01bd2c0  lvlx 5, 8, 31
  01bd2c4  vaddfp 2, 2, 5
  01bd2c8  vspltw 3, 3, 0
  01bd2cc  vspltw 4, 4, 0
  01bd2d0  vspltw 2, 2, 0
  01bd2d4  stvewx 3, 9, 1
  01bd2d8  stvewx 4, 10, 1
  01bd2dc  stvewx 2, 11, 1
  01bd2e0  bl 0x119028
  01bd2e4  nop
  01bd2e8  vspltisw 2, 1
  01bd2ec  addic 24, 24, 1
  01bd2f0  cmpwi 24, 4
  01bd2f4  vadduwm 30, 30, 2
  01bd2f8  bt 0, 0x1bd0c8
  01bd2fc  li 0, 384
  01bd300  lvx 20, 1, 0
  01bd304  addic 0, 0, 16
  01bd308  lvx 21, 1, 0
  01bd30c  addic 0, 0, 16
  01bd310  lvx 22, 1, 0
  01bd314  addic 0, 0, 16
  01bd318  lvx 23, 1, 0
  01bd31c  addic 0, 0, 16
  01bd320  lvx 24, 1, 0
  01bd324  addic 0, 0, 16
  01bd328  lvx 25, 1, 0
  01bd32c  addic 0, 0, 16
  01bd330  lvx 26, 1, 0
  01bd334  addic 0, 0, 16
  01bd338  lvx 27, 1, 0
  01bd33c  addic 0, 0, 16
  01bd340  lvx 28, 1, 0
  01bd344  addic 0, 0, 16
  01bd348  lvx 29, 1, 0
  01bd34c  addic 0, 0, 16
  01bd350  lvx 30, 1, 0
  01bd354  addic 0, 0, 16
  01bd358  lvx 31, 1, 0
  01bd35c  ld 0, 832(1)
  01bd360  mtlr 0
  01bd364  lfd 16, 688(1)
  01bd368  lfd 17, 696(1)
  01bd36c  lfd 18, 704(1)
  01bd370  lfd 19, 712(1)
  01bd374  lfd 20, 720(1)
  01bd378  lfd 21, 728(1)
  01bd37c  lfd 22, 736(1)
  01bd380  lfd 23, 744(1)
  01bd384  lfd 24, 752(1)
  01bd388  lfd 25, 760(1)
  01bd38c  lfd 26, 768(1)
  01bd390  lfd 27, 776(1)
  01bd394  lfd 28, 784(1)
  01bd398  lfd 29, 792(1)
  01bd39c  lfd 30, 800(1)
  01bd3a0  lfd 31, 808(1)
  01bd3a4  ld 19, 584(1)
  01bd3a8  ld 20, 592(1)
  01bd3ac  ld 21, 600(1)
  01bd3b0  ld 22, 608(1)
  01bd3b4  ld 23, 616(1)
  01bd3b8  ld 24, 624(1)
  01bd3bc  ld 25, 632(1)
  01bd3c0  ld 26, 640(1)
  01bd3c4  ld 27, 648(1)
  01bd3c8  ld 28, 656(1)
  01bd3cc  ld 29, 664(1)
  01bd3d0  ld 30, 672(1)
  01bd3d4  ld 31, 680(1)
  01bd3d8  addi 1, 1, 816
  01bd3dc  blr
