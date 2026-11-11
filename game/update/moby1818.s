# game/update/moby1818.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1818_002bc878:   # 0x2bc878, 0xd8 bytes
  02bc878  lis 3, 151
  02bc87c  addic 3, 3, -25376
  02bc880  lis 6, 44
  02bc884  lwz 5, 8320(3)
  02bc888  addi 6, 6, -14232
  02bc88c  lfs 4, 212(5)
  02bc890  lfs 5, 208(5)
  02bc894  fmuls 1, 4, 4
  02bc898  lfs 3, 216(5)
  02bc89c  lfs 2, 0(6)
  02bc8a0  fmadds 6, 5, 5, 1
  02bc8a4  lfs 1, 128(3)
  02bc8a8  fmadds 6, 3, 3, 6
  02bc8ac  fsqrts 7, 6
  02bc8b0  fcmpu 0, 7, 2
  02bc8b4  bf 2, 0x2bc8c8
  02bc8b8  fmr 4, 2
  02bc8bc  lfs 5, 220(5)
  02bc8c0  fmr 3, 4
  02bc8c4  b 0x2bc928
  02bc8c8  frsqrte 2, 6
  02bc8cc  lis 6, 44
  02bc8d0  addi 6, 6, -14232
  02bc8d4  fmr 11, 4
  02bc8d8  lfs 7, 4(6)
  02bc8dc  lfs 8, 8(6)
  02bc8e0  fmuls 9, 6, 2
  02bc8e4  fmuls 10, 7, 2
  02bc8e8  fnmsubs 9, 9, 2, 8
  02bc8ec  fmadds 2, 9, 10, 2
  02bc8f0  fmr 9, 3
  02bc8f4  lfs 10, 220(5)
  02bc8f8  fmuls 3, 6, 2
  02bc8fc  fmuls 4, 7, 2
  02bc900  fnmsubs 3, 3, 2, 8
  02bc904  fmadds 2, 3, 4, 2
  02bc908  fmuls 3, 6, 2
  02bc90c  fmuls 4, 7, 2
  02bc910  fnmsubs 3, 3, 2, 8
  02bc914  fmadds 2, 3, 4, 2
  02bc918  fmuls 4, 5, 2
  02bc91c  fmuls 3, 11, 2
  02bc920  fmuls 2, 9, 2
  02bc924  fmr 5, 10
  02bc928  fadds 1, 4, 1
  02bc92c  stfs 1, 0(4)
  02bc930  lfs 1, 132(3)
  02bc934  fadds 1, 3, 1
  02bc938  stfs 1, 4(4)
  02bc93c  lfs 1, 136(3)
  02bc940  stfs 5, 12(4)
  02bc944  fadds 1, 2, 1
  02bc948  stfs 1, 8(4)
  02bc94c  blr

M1818_002bc960:   # 0x2bc960, 0x128 bytes
  02bc960  lis 3, 151
  02bc964  addic 3, 3, -25376
  02bc968  lis 5, 44
  02bc96c  lwz 6, 8320(3)
  02bc970  addi 5, 5, -14000
  02bc974  lfs 7, 212(6)
  02bc978  lfs 8, 208(6)
  02bc97c  fmuls 1, 7, 7
  02bc980  lfs 6, 216(6)
  02bc984  lfs 4, 0(5)
  02bc988  lfs 3, 224(6)
  02bc98c  lfs 2, 228(6)
  02bc990  fmadds 1, 8, 8, 1
  02bc994  fmadds 5, 6, 6, 1
  02bc998  lfs 1, 232(6)
  02bc99c  fsqrts 5, 5
  02bc9a0  fcmpu 0, 5, 4
  02bc9a4  bf 2, 0x2bc9bc
  02bc9a8  fmr 8, 4
  02bc9ac  lfs 5, 220(6)
  02bc9b0  fmr 7, 8
  02bc9b4  fmr 6, 7
  02bc9b8  b 0x2bc9d4
  02bc9bc  lfs 9, 4(5)
  02bc9c0  fdivs 9, 9, 5
  02bc9c4  lfs 5, 220(6)
  02bc9c8  fmuls 8, 8, 9
  02bc9cc  fmuls 7, 7, 9
  02bc9d0  fmuls 6, 6, 9
  02bc9d4  fmuls 9, 2, 2
  02bc9d8  fmr 10, 4
  02bc9dc  fmadds 11, 3, 3, 9
  02bc9e0  fmr 9, 10
  02bc9e4  fmadds 11, 1, 1, 11
  02bc9e8  fsqrts 12, 11
  02bc9ec  fcmpu 0, 12, 4
  02bc9f0  bt 2, 0x2bca3c
  02bc9f4  frsqrte 4, 11
  02bc9f8  lfs 9, 8(5)
  02bc9fc  lfs 10, 12(5)
  02bca00  fmuls 12, 11, 4
  02bca04  fmuls 13, 9, 4
  02bca08  fnmsubs 12, 12, 4, 10
  02bca0c  fmadds 4, 12, 13, 4
  02bca10  fmuls 12, 11, 4
  02bca14  fmuls 13, 9, 4
  02bca18  fnmsubs 12, 12, 4, 10
  02bca1c  fmadds 4, 12, 13, 4
  02bca20  fmuls 11, 11, 4
  02bca24  fmuls 9, 9, 4
  02bca28  fnmsubs 10, 11, 4, 10
  02bca2c  fmadds 4, 10, 9, 4
  02bca30  fmuls 10, 3, 4
  02bca34  fmuls 9, 2, 4
  02bca38  fmuls 4, 1, 4
  02bca3c  fadds 1, 8, 10
  02bca40  fadds 2, 7, 9
  02bca44  stfs 5, 12(4)
  02bca48  fadds 3, 6, 4
  02bca4c  stfs 1, 0(4)
  02bca50  stfs 2, 4(4)
  02bca54  stfs 3, 8(4)
  02bca58  lfs 4, 128(3)
  02bca5c  fadds 1, 1, 4
  02bca60  stfs 1, 0(4)
  02bca64  lfs 1, 132(3)
  02bca68  fadds 1, 2, 1
  02bca6c  stfs 1, 4(4)
  02bca70  lfs 1, 136(3)
  02bca74  lfs 2, 12(5)
  02bca78  fadds 1, 3, 1
  02bca7c  fadds 1, 1, 2
  02bca80  stfs 1, 8(4)
  02bca84  blr

M1818_002bca98:   # 0x2bca98, 0x654 bytes
  02bca98  stdu 1, -368(1)
  02bca9c  mflr 0
  02bcaa0  std 0, 384(1)
  02bcaa4  stfd 21, 280(1)
  02bcaa8  stfd 22, 288(1)
  02bcaac  stfd 23, 296(1)
  02bcab0  stfd 24, 304(1)
  02bcab4  stfd 25, 312(1)
  02bcab8  stfd 26, 320(1)
  02bcabc  stfd 27, 328(1)
  02bcac0  stfd 28, 336(1)
  02bcac4  stfd 29, 344(1)
  02bcac8  stfd 30, 352(1)
  02bcacc  stfd 31, 360(1)
  02bcad0  lis 7, 165
  02bcad4  lis 6, 44
  02bcad8  std 28, 248(1)
  02bcadc  fmr 31, 1
  02bcae0  li 28, 0
  02bcae4  fmr 30, 2
  02bcae8  addi 6, 6, -13688
  02bcaec  std 31, 272(1)
  02bcaf0  fmr 29, 3
  02bcaf4  std 27, 240(1)
  02bcaf8  ori 31, 3, 0
  02bcafc  fmr 28, 4
  02bcb00  std 30, 264(1)
  02bcb04  lwz 27, -27836(7)
  02bcb08  std 29, 256(1)
  02bcb0c  ori 30, 4, 0
  02bcb10  ori 29, 5, 0
  02bcb14  fmr 27, 5
  02bcb18  cmpwi 27, 0
  02bcb1c  fmr 26, 6
  02bcb20  std 26, 232(1)
  02bcb24  std 25, 224(1)
  02bcb28  lfs 25, 0(6)
  02bcb2c  bt 2, 0x2bd090
  02bcb30  ori 25, 28, 0
  02bcb34  lhz 3, 50(27)
  02bcb38  cmpwi 3, 0
  02bcb3c  bt 2, 0x2bd074
  02bcb40  ori 3, 27, 0
  02bcb44  bl 0xfcccc
  02bcb48  nop
  02bcb4c  lwz 4, 36(27)
  02bcb50  cmpwi 4, 0
  02bcb54  bt 2, 0x2bd074
  02bcb58  lhz 4, 70(4)
  02bcb5c  extsh 4, 4
  02bcb60  cmpwi 4, 5
  02bcb64  bf 2, 0x2bd074
  02bcb68  cmpwi 3, 0
  02bcb6c  bt 2, 0x2bd074
  02bcb70  lis 4, 44
  02bcb74  lwz 3, 0(3)
  02bcb78  addi 4, 4, -13688
  02bcb7c  cmpwi 3, 0
  02bcb80  lfs 21, 4(4)
  02bcb84  bf 1, 0x2bd074
  02bcb88  lfs 3, 4(30)
  02bcb8c  lfs 2, 20(27)
  02bcb90  lfs 1, 0(30)
  02bcb94  fsubs 4, 3, 2
  02bcb98  lfs 2, 16(27)
  02bcb9c  lfs 6, 8(30)
  02bcba0  fsubs 5, 1, 2
  02bcba4  lfs 7, 24(27)
  02bcba8  fsubs 6, 6, 7
  02bcbac  fmuls 4, 4, 4
  02bcbb0  fmadds 4, 5, 5, 4
  02bcbb4  fmadds 24, 6, 6, 4
  02bcbb8  fsqrts 24, 24
  02bcbbc  fcmpu 0, 24, 29
  02bcbc0  cror 6, 1, 2
  02bcbc4  bt 6, 0x2bd074
  02bcbc8  fsubs 1, 2, 1
  02bcbcc  stfs 2, 112(1)
  02bcbd0  lfs 2, 20(27)
  02bcbd4  lis 3, 44
  02bcbd8  fsubs 3, 2, 3
  02bcbdc  stfs 2, 116(1)
  02bcbe0  lfs 2, 24(27)
  02bcbe4  addi 3, 3, -13688
  02bcbe8  stfs 2, 120(1)
  02bcbec  lfs 4, 28(27)
  02bcbf0  stfs 4, 124(1)
  02bcbf4  fabs 5, 1
  02bcbf8  lfs 4, 8(3)
  02bcbfc  stfs 1, 140(1)
  02bcc00  fabs 6, 3
  02bcc04  fmr 1, 4
  02bcc08  stfs 3, 144(1)
  02bcc0c  lfs 22, 8(29)
  02bcc10  lis 26, 115
  02bcc14  addic 26, 26, 22784
  02bcc18  fsubs 3, 5, 6
  02bcc1c  fadds 1, 2, 1
  02bcc20  stfs 3, 148(1)
  02bcc24  lwz 4, 140(1)
  02bcc28  lfs 2, 140(1)
  02bcc2c  lwz 5, 144(1)
  02bcc30  stfs 1, 120(1)
  02bcc34  fabs 4, 2
  02bcc38  lfs 1, 144(1)
  02bcc3c  rlwinm 5, 5, 3, 29, 29
  02bcc40  lfs 23, 12(3)
  02bcc44  fabs 3, 1
  02bcc48  lwz 3, 148(1)
  02bcc4c  lfs 1, 148(1)
  02bcc50  rlwimi 5, 3, 2, 30, 30
  02bcc54  fsub 2, 1, 21
  02bcc58  fsub 7, 1, 21
  02bcc5c  rlwimi 5, 4, 4, 28, 28
  02bcc60  ori 3, 26, 0
  02bcc64  slwi 4, 5, 2
  02bcc68  rlwimi 3, 5, 2, 26, 28
  02bcc6c  clrldi 3, 3, 32
  02bcc70  lfsx 1, 26, 4
  02bcc74  fsel 4, 2, 4, 6
  02bcc78  lfs 2, 4(3)
  02bcc7c  fsel 3, 7, 3, 5
  02bcc80  fcmpu 0, 4, 21
  02bcc84  bt 1, 0x2bcc90
  02bcc88  fmr 1, 21
  02bcc8c  b 0x2bcda8
  02bcc90  fsubs 5, 3, 4
  02bcc94  fadds 3, 3, 4
  02bcc98  addic 3, 1, 16
  02bcc9c  li 6, 2
  02bcca0  addic 4, 3, 168
  02bcca4  addic 5, 3, 184
  02bcca8  mtctr 6
  02bccac  fdivs 3, 5, 3
  02bccb0  fmuls 4, 3, 3
  02bccb4  stfs 3, 196(1)
  02bccb8  stfs 3, 188(1)
  02bccbc  stfs 3, 192(1)
  02bccc0  stfs 3, 184(1)
  02bccc4  lfs 6, 196(1)
  02bccc8  lfs 7, 188(1)
  02bcccc  lfs 8, 192(1)
  02bccd0  fmuls 5, 4, 4
  02bccd4  fmuls 7, 7, 4
  02bccd8  fmuls 6, 6, 5
  02bccdc  fmuls 3, 5, 5
  02bcce0  fmuls 5, 8, 5
  02bcce4  stfs 7, 188(1)
  02bcce8  fmuls 4, 6, 4
  02bccec  stfs 5, 192(1)
  02bccf0  stfs 4, 196(1)
  02bccf4  lfs 4, 168(3)
  02bccf8  fmuls 4, 4, 3
  02bccfc  stfs 4, 184(3)
  02bcd00  lfs 4, 4(4)
  02bcd04  addic 3, 3, 8
  02bcd08  addic 4, 4, 8
  02bcd0c  fmuls 4, 4, 3
  02bcd10  stfs 4, 4(5)
  02bcd14  addic 5, 5, 8
  02bcd18  bdnz 0x2bccf4
  02bcd1c  li 5, 4
  02bcd20  ori 3, 1, 0
  02bcd24  mtctr 5
  02bcd28  lis 4, 115
  02bcd2c  addic 5, 3, 184
  02bcd30  addic 4, 4, 22752
  02bcd34  ori 7, 5, 0
  02bcd38  lfs 3, 184(3)
  02bcd3c  lfs 4, 0(4)
  02bcd40  fmuls 3, 3, 4
  02bcd44  lfs 4, 4(4)
  02bcd48  addic 4, 4, 8
  02bcd4c  stfs 3, 184(3)
  02bcd50  lfs 3, 4(5)
  02bcd54  addic 3, 3, 8
  02bcd58  fmuls 3, 3, 4
  02bcd5c  stfs 3, 4(5)
  02bcd60  addic 5, 5, 8
  02bcd64  bdnz 0x2bcd38
  02bcd68  fmr 3, 21
  02bcd6c  ori 3, 1, 0
  02bcd70  mtctr 6
  02bcd74  lfs 4, 184(3)
  02bcd78  fadds 3, 3, 4
  02bcd7c  addic 3, 3, 16
  02bcd80  lfs 4, 4(7)
  02bcd84  lfs 5, 8(7)
  02bcd88  lfs 6, 12(7)
  02bcd8c  addic 7, 7, 16
  02bcd90  fadds 3, 3, 4
  02bcd94  fadds 3, 3, 5
  02bcd98  fadds 3, 3, 6
  02bcd9c  bdnz 0x2bcd74
  02bcda0  fadds 3, 3, 23
  02bcda4  fmadds 1, 3, 1, 2
  02bcda8  fmr 2, 1
  02bcdac  fmr 1, 22
  02bcdb0  bl 0x5026a0
  02bcdb4  nop
  02bcdb8  fmuls 22, 1, 1
  02bcdbc  lfs 2, 120(1)
  02bcdc0  fmuls 4, 31, 31
  02bcdc4  lfs 3, 8(30)
  02bcdc8  lfs 1, 4(29)
  02bcdcc  fcmpu 0, 22, 4
  02bcdd0  bt 0, 0x2bcdf0
  02bcdd4  fcmpu 0, 28, 24
  02bcdd8  cror 6, 0, 2
  02bcddc  bt 6, 0x2bd074
  02bcde0  fmuls 4, 27, 27
  02bcde4  fcmpu 0, 22, 4
  02bcde8  cror 6, 1, 2
  02bcdec  bt 6, 0x2bd074
  02bcdf0  fsubs 2, 2, 3
  02bcdf4  stfs 24, 128(1)
  02bcdf8  fabs 4, 24
  02bcdfc  fabs 5, 2
  02bce00  stfs 2, 132(1)
  02bce04  lwz 3, 128(1)
  02bce08  lfs 3, 128(1)
  02bce0c  fsubs 2, 4, 5
  02bce10  stfs 2, 136(1)
  02bce14  fabs 2, 3
  02bce18  lwz 4, 132(1)
  02bce1c  lfs 3, 132(1)
  02bce20  lwz 5, 136(1)
  02bce24  rlwinm 4, 4, 3, 29, 29
  02bce28  lfs 6, 136(1)
  02bce2c  fabs 3, 3
  02bce30  rlwimi 4, 5, 2, 30, 30
  02bce34  fsub 7, 6, 21
  02bce38  fsub 6, 6, 21
  02bce3c  rlwimi 4, 3, 4, 28, 28
  02bce40  ori 3, 26, 0
  02bce44  rlwimi 3, 4, 2, 26, 28
  02bce48  slwi 4, 4, 2
  02bce4c  clrldi 3, 3, 32
  02bce50  fsel 5, 7, 2, 5
  02bce54  lfsx 2, 26, 4
  02bce58  fsel 4, 6, 3, 4
  02bce5c  lfs 3, 4(3)
  02bce60  fcmpu 0, 5, 21
  02bce64  bt 1, 0x2bce6c
  02bce68  b 0x2bcf80
  02bce6c  fsubs 6, 4, 5
  02bce70  fadds 4, 4, 5
  02bce74  addic 3, 1, 16
  02bce78  li 6, 2
  02bce7c  addic 5, 3, 152
  02bce80  addic 4, 3, 136
  02bce84  mtctr 6
  02bce88  fdivs 4, 6, 4
  02bce8c  fmuls 5, 4, 4
  02bce90  stfs 4, 164(1)
  02bce94  stfs 4, 156(1)
  02bce98  stfs 4, 160(1)
  02bce9c  stfs 4, 152(1)
  02bcea0  lfs 7, 164(1)
  02bcea4  lfs 8, 156(1)
  02bcea8  lfs 9, 160(1)
  02bceac  fmuls 6, 5, 5
  02bceb0  fmuls 8, 8, 5
  02bceb4  fmuls 7, 7, 6
  02bceb8  fmuls 4, 6, 6
  02bcebc  fmuls 6, 9, 6
  02bcec0  stfs 8, 156(1)
  02bcec4  fmuls 5, 7, 5
  02bcec8  stfs 6, 160(1)
  02bcecc  stfs 5, 164(1)
  02bced0  lfs 5, 136(3)
  02bced4  fmuls 5, 5, 4
  02bced8  stfs 5, 152(3)
  02bcedc  lfs 5, 4(4)
  02bcee0  addic 4, 4, 8
  02bcee4  fmuls 5, 5, 4
  02bcee8  addic 3, 3, 8
  02bceec  stfs 5, 4(5)
  02bcef0  addic 5, 5, 8
  02bcef4  bdnz 0x2bced0
  02bcef8  li 5, 4
  02bcefc  ori 3, 1, 0
  02bcf00  mtctr 5
  02bcf04  lis 4, 115
  02bcf08  addic 5, 3, 152
  02bcf0c  addic 4, 4, 22752
  02bcf10  ori 7, 5, 0
  02bcf14  lfs 4, 152(3)
  02bcf18  lfs 5, 0(4)
  02bcf1c  fmuls 4, 4, 5
  02bcf20  lfs 5, 4(4)
  02bcf24  addic 4, 4, 8
  02bcf28  stfs 4, 152(3)
  02bcf2c  lfs 4, 4(5)
  02bcf30  addic 3, 3, 8
  02bcf34  fmuls 4, 4, 5
  02bcf38  stfs 4, 4(5)
  02bcf3c  addic 5, 5, 8
  02bcf40  bdnz 0x2bcf14
  02bcf44  ori 3, 1, 0
  02bcf48  mtctr 6
  02bcf4c  lfs 4, 152(3)
  02bcf50  lfs 5, 4(7)
  02bcf54  fadds 4, 21, 4
  02bcf58  lfs 6, 8(7)
  02bcf5c  addic 3, 3, 16
  02bcf60  lfs 21, 12(7)
  02bcf64  addic 7, 7, 16
  02bcf68  fadds 4, 4, 5
  02bcf6c  fadds 4, 4, 6
  02bcf70  fadds 21, 4, 21
  02bcf74  bdnz 0x2bcf4c
  02bcf78  fadds 21, 21, 23
  02bcf7c  fmadds 21, 21, 2, 3
  02bcf80  fmr 2, 21
  02bcf84  bl 0x5026a0
  02bcf88  nop
  02bcf8c  fmuls 21, 1, 1
  02bcf90  fmuls 7, 30, 30
  02bcf94  lfs 1, 0(30)
  02bcf98  lfs 2, 112(1)
  02bcf9c  lfs 3, 4(30)
  02bcfa0  lfs 4, 116(1)
  02bcfa4  lfs 5, 8(30)
  02bcfa8  lfs 6, 120(1)
  02bcfac  fcmpu 0, 21, 7
  02bcfb0  bt 0, 0x2bcfd0
  02bcfb4  fcmpu 0, 28, 24
  02bcfb8  cror 6, 0, 2
  02bcfbc  bt 6, 0x2bd074
  02bcfc0  fmuls 7, 26, 26
  02bcfc4  fcmpu 0, 21, 7
  02bcfc8  cror 6, 1, 2
  02bcfcc  bt 6, 0x2bd074
  02bcfd0  fsubs 3, 3, 4
  02bcfd4  fsubs 1, 1, 2
  02bcfd8  fsubs 2, 5, 6
  02bcfdc  fmuls 24, 22, 21
  02bcfe0  fmuls 3, 3, 3
  02bcfe4  fmadds 1, 1, 1, 3
  02bcfe8  fmadds 1, 2, 2, 1
  02bcfec  fsqrts 1, 1
  02bcff0  fsqrts 1, 1
  02bcff4  fmuls 24, 24, 1
  02bcff8  fcmpu 0, 25, 24
  02bcffc  cror 6, 0, 2
  02bd000  bt 6, 0x2bd074
  02bd004  ori 3, 30, 0
  02bd008  addic 4, 1, 112
  02bd00c  li 5, 0
  02bd010  ori 6, 31, 0
  02bd014  li 7, 0
  02bd018  bl 0x57820
  02bd01c  nop
  02bd020  cmpwi 3, 0
  02bd024  bt 2, 0x2bd06c
  02bd028  lis 3, 161
  02bd02c  addic 3, 3, 2368
  02bd030  lwz 3, 24(3)
  02bd034  cmpwi 3, 0
  02bd038  bt 2, 0x2bd074
  02bd03c  lis 4, 151
  02bd040  addic 4, 4, -25376
  02bd044  lwz 4, 8320(4)
  02bd048  cmpw 3, 4
  02bd04c  bt 2, 0x2bd074
  02bd050  lwz 3, 36(3)
  02bd054  cmpwi 3, 0
  02bd058  bt 2, 0x2bd074
  02bd05c  lhz 3, 70(3)
  02bd060  extsh 3, 3
  02bd064  cmpwi 3, 5
  02bd068  bf 2, 0x2bd074
  02bd06c  ori 28, 27, 0
  02bd070  fmr 25, 24
  02bd074  lis 3, 165
  02bd078  addic 25, 25, 4
  02bd07c  addic 3, 3, -27836
  02bd080  extsw 4, 25
  02bd084  lwzx 27, 3, 4
  02bd088  cmpwi 27, 0
  02bd08c  bf 2, 0x2bcb34
  02bd090  ori 3, 28, 0
  02bd094  ld 0, 384(1)
  02bd098  mtlr 0
  02bd09c  lfd 21, 280(1)
  02bd0a0  lfd 22, 288(1)
  02bd0a4  lfd 23, 296(1)
  02bd0a8  lfd 24, 304(1)
  02bd0ac  lfd 25, 312(1)
  02bd0b0  lfd 26, 320(1)
  02bd0b4  lfd 27, 328(1)
  02bd0b8  lfd 28, 336(1)
  02bd0bc  lfd 29, 344(1)
  02bd0c0  lfd 30, 352(1)
  02bd0c4  lfd 31, 360(1)
  02bd0c8  ld 25, 224(1)
  02bd0cc  ld 26, 232(1)
  02bd0d0  ld 27, 240(1)
  02bd0d4  ld 28, 248(1)
  02bd0d8  ld 29, 256(1)
  02bd0dc  ld 30, 264(1)
  02bd0e0  ld 31, 272(1)
  02bd0e4  addi 1, 1, 368
  02bd0e8  blr

M1818_002bd110:   # 0x2bd110, 0xb24 bytes
  02bd110  stdu 1, -496(1)
  02bd114  mflr 0
  02bd118  std 0, 512(1)
  02bd11c  stfd 21, 408(1)
  02bd120  stfd 22, 416(1)
  02bd124  stfd 23, 424(1)
  02bd128  stfd 24, 432(1)
  02bd12c  stfd 25, 440(1)
  02bd130  stfd 26, 448(1)
  02bd134  stfd 27, 456(1)
  02bd138  stfd 28, 464(1)
  02bd13c  stfd 29, 472(1)
  02bd140  stfd 30, 480(1)
  02bd144  stfd 31, 488(1)
  02bd148  std 30, 392(1)
  02bd14c  std 31, 400(1)
  02bd150  ori 30, 4, 0
  02bd154  ori 31, 3, 0
  02bd158  std 29, 384(1)
  02bd15c  std 28, 376(1)
  02bd160  addic 3, 30, 84
  02bd164  bl 0x4fffb4
  02bd168  nop
  02bd16c  cmpwi 3, 0
  02bd170  bt 2, 0x2bdbe8
  02bd174  lbz 4, 86(30)
  02bd178  addic 29, 1, 128
  02bd17c  ori 3, 31, 0
  02bd180  clrlwi 4, 4, 31
  02bd184  ori 5, 29, 0
  02bd188  addic 4, 4, 1
  02bd18c  bl 0xf1114
  02bd190  nop
  02bd194  lbz 3, 86(30)
  02bd198  lis 4, 44
  02bd19c  lis 7, 123
  02bd1a0  xori 3, 3, 1
  02bd1a4  addi 6, 4, -12052
  02bd1a8  lis 4, 123
  02bd1ac  lis 8, 123
  02bd1b0  stb 3, 86(30)
  02bd1b4  ori 3, 31, 0
  02bd1b8  lfs 2, 0(6)
  02bd1bc  lfs 5, 8(6)
  02bd1c0  addic 5, 31, 64
  02bd1c4  lfs 1, 32260(4)
  02bd1c8  lfs 6, 32264(7)
  02bd1cc  fmuls 1, 1, 2
  02bd1d0  lfs 3, 32256(8)
  02bd1d4  ori 4, 29, 0
  02bd1d8  fmuls 2, 6, 2
  02bd1dc  lfs 4, 4(6)
  02bd1e0  fmr 6, 5
  02bd1e4  bl 0x2bca98
  02bd1e8  ori 29, 3, 0
  02bd1ec  cmpwi 29, 0
  02bd1f0  bt 2, 0x2bdbe0
  02bd1f4  lis 3, 44
  02bd1f8  lis 4, 151
  02bd1fc  stw 29, 96(30)
  02bd200  addi 3, 3, -12052
  02bd204  addic 4, 4, -25376
  02bd208  lfs 1, 12(3)
  02bd20c  lfs 2, 136(4)
  02bd210  lfs 3, 24(31)
  02bd214  fadds 1, 2, 1
  02bd218  fcmpu 0, 3, 1
  02bd21c  cror 6, 0, 2
  02bd220  bt 6, 0x2bdbe8
  02bd224  lfs 1, 16(29)
  02bd228  lfs 2, 16(31)
  02bd22c  lfs 3, 20(29)
  02bd230  lfs 4, 20(31)
  02bd234  fsubs 1, 1, 2
  02bd238  lis 3, 44
  02bd23c  fsubs 2, 3, 4
  02bd240  addi 3, 3, -12052
  02bd244  lis 28, 115
  02bd248  addic 28, 28, 22784
  02bd24c  fabs 4, 1
  02bd250  fabs 5, 2
  02bd254  stfs 1, 192(1)
  02bd258  stfs 2, 196(1)
  02bd25c  lfs 1, 72(31)
  02bd260  fsubs 2, 4, 5
  02bd264  stfs 2, 200(1)
  02bd268  lwz 4, 192(1)
  02bd26c  lfs 28, 16(3)
  02bd270  lfs 2, 192(1)
  02bd274  lwz 5, 196(1)
  02bd278  lfs 3, 196(1)
  02bd27c  fabs 2, 2
  02bd280  lfs 29, 20(3)
  02bd284  rlwinm 5, 5, 3, 29, 29
  02bd288  fabs 6, 3
  02bd28c  lwz 3, 200(1)
  02bd290  lfs 3, 200(1)
  02bd294  rlwimi 5, 3, 2, 30, 30
  02bd298  fsub 7, 3, 28
  02bd29c  ori 3, 28, 0
  02bd2a0  fsub 8, 3, 28
  02bd2a4  rlwimi 5, 4, 4, 28, 28
  02bd2a8  rlwimi 3, 5, 2, 26, 28
  02bd2ac  slwi 4, 5, 2
  02bd2b0  clrldi 3, 3, 32
  02bd2b4  fsel 5, 7, 2, 5
  02bd2b8  lfsx 2, 28, 4
  02bd2bc  fsel 4, 8, 6, 4
  02bd2c0  lfs 3, 4(3)
  02bd2c4  fcmpu 0, 5, 28
  02bd2c8  bt 1, 0x2bd2d4
  02bd2cc  fmr 2, 28
  02bd2d0  b 0x2bd3ec
  02bd2d4  fsubs 6, 4, 5
  02bd2d8  fadds 4, 4, 5
  02bd2dc  addic 3, 1, 16
  02bd2e0  li 6, 2
  02bd2e4  addic 5, 3, 332
  02bd2e8  addic 4, 3, 316
  02bd2ec  mtctr 6
  02bd2f0  fdivs 4, 6, 4
  02bd2f4  fmuls 5, 4, 4
  02bd2f8  stfs 4, 344(1)
  02bd2fc  stfs 4, 336(1)
  02bd300  stfs 4, 340(1)
  02bd304  stfs 4, 332(1)
  02bd308  lfs 7, 344(1)
  02bd30c  lfs 8, 336(1)
  02bd310  lfs 9, 340(1)
  02bd314  fmuls 6, 5, 5
  02bd318  fmuls 8, 8, 5
  02bd31c  fmuls 7, 7, 6
  02bd320  fmuls 4, 6, 6
  02bd324  fmuls 6, 9, 6
  02bd328  stfs 8, 336(1)
  02bd32c  fmuls 5, 7, 5
  02bd330  stfs 6, 340(1)
  02bd334  stfs 5, 344(1)
  02bd338  lfs 5, 316(3)
  02bd33c  fmuls 5, 5, 4
  02bd340  stfs 5, 332(3)
  02bd344  lfs 5, 4(4)
  02bd348  addic 4, 4, 8
  02bd34c  fmuls 5, 5, 4
  02bd350  addic 3, 3, 8
  02bd354  stfs 5, 4(5)
  02bd358  addic 5, 5, 8
  02bd35c  bdnz 0x2bd338
  02bd360  li 5, 4
  02bd364  ori 3, 1, 0
  02bd368  mtctr 5
  02bd36c  lis 4, 115
  02bd370  addic 5, 3, 332
  02bd374  addic 4, 4, 22752
  02bd378  ori 7, 5, 0
  02bd37c  lfs 4, 332(3)
  02bd380  lfs 5, 0(4)
  02bd384  fmuls 4, 4, 5
  02bd388  lfs 5, 4(4)
  02bd38c  addic 4, 4, 8
  02bd390  stfs 4, 332(3)
  02bd394  lfs 4, 4(5)
  02bd398  addic 3, 3, 8
  02bd39c  fmuls 4, 4, 5
  02bd3a0  stfs 4, 4(5)
  02bd3a4  addic 5, 5, 8
  02bd3a8  bdnz 0x2bd37c
  02bd3ac  ori 3, 1, 0
  02bd3b0  fmr 4, 28
  02bd3b4  mtctr 6
  02bd3b8  lfs 5, 332(3)
  02bd3bc  fadds 4, 4, 5
  02bd3c0  lfs 5, 4(7)
  02bd3c4  addic 3, 3, 16
  02bd3c8  lfs 6, 8(7)
  02bd3cc  lfs 7, 12(7)
  02bd3d0  addic 7, 7, 16
  02bd3d4  fadds 4, 4, 5
  02bd3d8  fadds 4, 4, 6
  02bd3dc  fadds 4, 4, 7
  02bd3e0  bdnz 0x2bd3b8
  02bd3e4  fadds 4, 4, 29
  02bd3e8  fmadds 2, 4, 2, 3
  02bd3ec  bl 0x5026a0
  02bd3f0  nop
  02bd3f4  lis 3, 44
  02bd3f8  addi 3, 3, -12052
  02bd3fc  lfs 2, 24(3)
  02bd400  fcmpu 0, 1, 2
  02bd404  cror 6, 1, 2
  02bd408  bt 6, 0x2bdbe8
  02bd40c  lis 3, 161
  02bd410  lwz 3, 1800(3)
  02bd414  cmpwi 3, 2
  02bd418  bt 2, 0x2bdbe8
  02bd41c  lfs 31, 16(29)
  02bd420  ori 3, 29, 0
  02bd424  lfs 30, 20(29)
  02bd428  lfs 26, 24(29)
  02bd42c  bl 0xfcccc
  02bd430  nop
  02bd434  ori 29, 3, 0
  02bd438  lfs 1, 128(1)
  02bd43c  lfs 2, 132(1)
  02bd440  cmpwi 29, 0
  02bd444  lfs 3, 136(1)
  02bd448  lfs 27, 140(1)
  02bd44c  bt 2, 0x2bd458
  02bd450  lfs 4, 16(29)
  02bd454  b 0x2bd464
  02bd458  lis 3, 123
  02bd45c  fmr 4, 26
  02bd460  lfs 26, 32272(3)
  02bd464  fsubs 5, 30, 2
  02bd468  fadds 7, 26, 4
  02bd46c  fsubs 4, 31, 1
  02bd470  lis 3, 123
  02bd474  fmuls 6, 5, 5
  02bd478  fsubs 8, 7, 3
  02bd47c  lfs 9, 32268(3)
  02bd480  fmadds 6, 4, 4, 6
  02bd484  fmadds 6, 8, 8, 6
  02bd488  fsqrts 6, 6
  02bd48c  fdivs 9, 9, 6
  02bd490  fsub 10, 28, 6
  02bd494  fsub 11, 28, 6
  02bd498  fsub 12, 6, 28
  02bd49c  fsub 13, 6, 28
  02bd4a0  fsub 0, 28, 6
  02bd4a4  fsub 6, 6, 28
  02bd4a8  fmuls 5, 5, 9
  02bd4ac  fmuls 4, 4, 9
  02bd4b0  fmuls 8, 8, 9
  02bd4b4  fsel 10, 10, 28, 5
  02bd4b8  fsel 11, 11, 28, 4
  02bd4bc  fsel 5, 12, 10, 5
  02bd4c0  fsel 4, 13, 11, 4
  02bd4c4  fadds 2, 2, 5
  02bd4c8  fadds 1, 1, 4
  02bd4cc  fsel 4, 0, 28, 8
  02bd4d0  fsubs 12, 30, 2
  02bd4d4  fsubs 11, 31, 1
  02bd4d8  fsel 6, 6, 4, 8
  02bd4dc  fabs 5, 12
  02bd4e0  fabs 4, 11
  02bd4e4  fadds 3, 3, 6
  02bd4e8  stfs 11, 180(1)
  02bd4ec  stfs 12, 184(1)
  02bd4f0  stfs 1, 128(1)
  02bd4f4  stfs 2, 132(1)
  02bd4f8  fsubs 13, 4, 5
  02bd4fc  stfs 13, 188(1)
  02bd500  lwz 3, 180(1)
  02bd504  lfs 6, 180(1)
  02bd508  lwz 4, 184(1)
  02bd50c  fabs 10, 6
  02bd510  stfs 3, 136(1)
  02bd514  rlwinm 4, 4, 3, 29, 29
  02bd518  lfs 6, 184(1)
  02bd51c  lwz 5, 188(1)
  02bd520  fabs 9, 6
  02bd524  lfs 6, 188(1)
  02bd528  rlwimi 4, 5, 2, 30, 30
  02bd52c  fsub 8, 6, 28
  02bd530  fsub 0, 6, 28
  02bd534  rlwimi 4, 3, 4, 28, 28
  02bd538  ori 3, 28, 0
  02bd53c  rlwimi 3, 4, 2, 26, 28
  02bd540  slwi 4, 4, 2
  02bd544  clrldi 3, 3, 32
  02bd548  fsel 10, 8, 10, 5
  02bd54c  lfsx 6, 28, 4
  02bd550  fsel 9, 0, 9, 4
  02bd554  lfs 8, 4(3)
  02bd558  fcmpu 0, 10, 28
  02bd55c  bt 1, 0x2bd568
  02bd560  fmr 6, 28
  02bd564  b 0x2bd680
  02bd568  fsubs 0, 9, 10
  02bd56c  fadds 9, 9, 10
  02bd570  addic 3, 1, 16
  02bd574  li 6, 2
  02bd578  addic 4, 3, 284
  02bd57c  addic 5, 3, 300
  02bd580  mtctr 6
  02bd584  fdivs 9, 0, 9
  02bd588  fmuls 10, 9, 9
  02bd58c  stfs 9, 312(1)
  02bd590  stfs 9, 304(1)
  02bd594  stfs 9, 308(1)
  02bd598  stfs 9, 300(1)
  02bd59c  lfs 26, 312(1)
  02bd5a0  lfs 25, 304(1)
  02bd5a4  lfs 24, 308(1)
  02bd5a8  fmuls 0, 10, 10
  02bd5ac  fmuls 25, 25, 10
  02bd5b0  fmuls 26, 26, 0
  02bd5b4  fmuls 9, 0, 0
  02bd5b8  fmuls 0, 24, 0
  02bd5bc  stfs 25, 304(1)
  02bd5c0  fmuls 10, 26, 10
  02bd5c4  stfs 0, 308(1)
  02bd5c8  stfs 10, 312(1)
  02bd5cc  lfs 10, 284(3)
  02bd5d0  fmuls 10, 10, 9
  02bd5d4  stfs 10, 300(3)
  02bd5d8  lfs 10, 4(4)
  02bd5dc  addic 3, 3, 8
  02bd5e0  addic 4, 4, 8
  02bd5e4  fmuls 10, 10, 9
  02bd5e8  stfs 10, 4(5)
  02bd5ec  addic 5, 5, 8
  02bd5f0  bdnz 0x2bd5cc
  02bd5f4  li 5, 4
  02bd5f8  ori 3, 1, 0
  02bd5fc  mtctr 5
  02bd600  lis 4, 115
  02bd604  addic 5, 3, 300
  02bd608  addic 4, 4, 22752
  02bd60c  ori 7, 5, 0
  02bd610  lfs 9, 300(3)
  02bd614  lfs 10, 0(4)
  02bd618  fmuls 9, 9, 10
  02bd61c  lfs 10, 4(4)
  02bd620  addic 4, 4, 8
  02bd624  stfs 9, 300(3)
  02bd628  lfs 9, 4(5)
  02bd62c  addic 3, 3, 8
  02bd630  fmuls 9, 9, 10
  02bd634  stfs 9, 4(5)
  02bd638  addic 5, 5, 8
  02bd63c  bdnz 0x2bd610
  02bd640  fmr 9, 28
  02bd644  ori 3, 1, 0
  02bd648  mtctr 6
  02bd64c  lfs 10, 300(3)
  02bd650  fadds 9, 9, 10
  02bd654  addic 3, 3, 16
  02bd658  lfs 10, 4(7)
  02bd65c  lfs 0, 8(7)
  02bd660  lfs 26, 12(7)
  02bd664  addic 7, 7, 16
  02bd668  fadds 9, 9, 10
  02bd66c  fadds 9, 9, 0
  02bd670  fadds 9, 9, 26
  02bd674  bdnz 0x2bd64c
  02bd678  fadds 9, 9, 29
  02bd67c  fmadds 6, 9, 6, 8
  02bd680  fsubs 8, 2, 30
  02bd684  fsubs 9, 1, 31
  02bd688  fsubs 0, 7, 3
  02bd68c  fmuls 8, 8, 8
  02bd690  stfs 0, 172(1)
  02bd694  fmadds 31, 9, 9, 8
  02bd698  fabs 8, 0
  02bd69c  fsqrts 31, 31
  02bd6a0  fabs 7, 31
  02bd6a4  stfs 31, 168(1)
  02bd6a8  lwz 3, 172(1)
  02bd6ac  lfs 9, 172(1)
  02bd6b0  rlwinm 3, 3, 3, 29, 29
  02bd6b4  fabs 26, 9
  02bd6b8  fsubs 30, 7, 8
  02bd6bc  stfs 30, 176(1)
  02bd6c0  lwz 4, 168(1)
  02bd6c4  lfs 10, 168(1)
  02bd6c8  lwz 5, 176(1)
  02bd6cc  lfs 9, 176(1)
  02bd6d0  fabs 25, 10
  02bd6d4  rlwimi 3, 5, 2, 30, 30
  02bd6d8  fsub 10, 9, 28
  02bd6dc  fsub 24, 9, 28
  02bd6e0  rlwimi 3, 4, 4, 28, 28
  02bd6e4  ori 4, 28, 0
  02bd6e8  rlwimi 4, 3, 2, 26, 28
  02bd6ec  slwi 3, 3, 2
  02bd6f0  clrldi 4, 4, 32
  02bd6f4  fsel 25, 10, 25, 8
  02bd6f8  lfsx 9, 28, 3
  02bd6fc  fsel 26, 24, 26, 7
  02bd700  lfs 10, 4(4)
  02bd704  fcmpu 0, 25, 28
  02bd708  bt 1, 0x2bd714
  02bd70c  fmr 9, 28
  02bd710  b 0x2bd82c
  02bd714  fsubs 24, 26, 25
  02bd718  fadds 26, 26, 25
  02bd71c  addic 3, 1, 16
  02bd720  li 6, 2
  02bd724  addic 5, 3, 268
  02bd728  addic 4, 3, 252
  02bd72c  mtctr 6
  02bd730  fdivs 26, 24, 26
  02bd734  fmuls 25, 26, 26
  02bd738  stfs 26, 280(1)
  02bd73c  stfs 26, 272(1)
  02bd740  stfs 26, 276(1)
  02bd744  stfs 26, 268(1)
  02bd748  lfs 23, 280(1)
  02bd74c  lfs 22, 272(1)
  02bd750  lfs 21, 276(1)
  02bd754  fmuls 24, 25, 25
  02bd758  fmuls 22, 22, 25
  02bd75c  fmuls 23, 23, 24
  02bd760  fmuls 26, 24, 24
  02bd764  fmuls 24, 21, 24
  02bd768  stfs 22, 272(1)
  02bd76c  fmuls 25, 23, 25
  02bd770  stfs 24, 276(1)
  02bd774  stfs 25, 280(1)
  02bd778  lfs 25, 252(3)
  02bd77c  fmuls 25, 25, 26
  02bd780  stfs 25, 268(3)
  02bd784  lfs 25, 4(4)
  02bd788  addic 4, 4, 8
  02bd78c  fmuls 25, 25, 26
  02bd790  addic 3, 3, 8
  02bd794  stfs 25, 4(5)
  02bd798  addic 5, 5, 8
  02bd79c  bdnz 0x2bd778
  02bd7a0  li 5, 4
  02bd7a4  ori 3, 1, 0
  02bd7a8  mtctr 5
  02bd7ac  lis 4, 115
  02bd7b0  addic 5, 3, 268
  02bd7b4  addic 4, 4, 22752
  02bd7b8  ori 7, 5, 0
  02bd7bc  lfs 26, 268(3)
  02bd7c0  lfs 25, 0(4)
  02bd7c4  fmuls 26, 26, 25
  02bd7c8  lfs 25, 4(4)
  02bd7cc  addic 4, 4, 8
  02bd7d0  stfs 26, 268(3)
  02bd7d4  lfs 26, 4(5)
  02bd7d8  addic 3, 3, 8
  02bd7dc  fmuls 26, 26, 25
  02bd7e0  stfs 26, 4(5)
  02bd7e4  addic 5, 5, 8
  02bd7e8  bdnz 0x2bd7bc
  02bd7ec  ori 3, 1, 0
  02bd7f0  fmr 26, 28
  02bd7f4  mtctr 6
  02bd7f8  lfs 25, 268(3)
  02bd7fc  fadds 26, 26, 25
  02bd800  lfs 25, 4(7)
  02bd804  addic 3, 3, 16
  02bd808  lfs 24, 8(7)
  02bd80c  lfs 23, 12(7)
  02bd810  addic 7, 7, 16
  02bd814  fadds 26, 26, 25
  02bd818  fadds 26, 26, 24
  02bd81c  fadds 26, 26, 23
  02bd820  bdnz 0x2bd7f8
  02bd824  fadds 26, 26, 29
  02bd828  fmadds 9, 26, 9, 10
  02bd82c  stfs 11, 156(1)
  02bd830  stfs 13, 164(1)
  02bd834  stfs 12, 160(1)
  02bd838  lwz 3, 156(1)
  02bd83c  fmr 12, 4
  02bd840  lwz 4, 164(1)
  02bd844  lfs 4, 164(1)
  02bd848  lfs 10, 156(1)
  02bd84c  fsub 11, 4, 28
  02bd850  fabs 10, 10
  02bd854  lwz 5, 160(1)
  02bd858  lfs 13, 160(1)
  02bd85c  rlwinm 5, 5, 3, 29, 29
  02bd860  fabs 13, 13
  02bd864  rlwimi 5, 4, 2, 30, 30
  02bd868  rlwimi 5, 3, 4, 28, 28
  02bd86c  ori 3, 28, 0
  02bd870  slwi 4, 5, 2
  02bd874  fsel 10, 11, 10, 5
  02bd878  fsub 5, 4, 28
  02bd87c  rlwimi 3, 5, 2, 26, 28
  02bd880  clrldi 3, 3, 32
  02bd884  lfsx 11, 28, 4
  02bd888  lfs 4, 4(3)
  02bd88c  fcmpu 0, 10, 28
  02bd890  fsel 5, 5, 13, 12
  02bd894  bt 1, 0x2bd8a0
  02bd898  fmr 11, 28
  02bd89c  b 0x2bd9b8
  02bd8a0  fsubs 12, 5, 10
  02bd8a4  fadds 5, 5, 10
  02bd8a8  addic 3, 1, 16
  02bd8ac  li 6, 2
  02bd8b0  addic 4, 3, 220
  02bd8b4  addic 5, 3, 236
  02bd8b8  mtctr 6
  02bd8bc  fdivs 5, 12, 5
  02bd8c0  fmuls 10, 5, 5
  02bd8c4  stfs 5, 248(1)
  02bd8c8  stfs 5, 240(1)
  02bd8cc  stfs 5, 244(1)
  02bd8d0  stfs 5, 236(1)
  02bd8d4  lfs 13, 248(1)
  02bd8d8  lfs 26, 240(1)
  02bd8dc  lfs 25, 244(1)
  02bd8e0  fmuls 12, 10, 10
  02bd8e4  fmuls 26, 26, 10
  02bd8e8  fmuls 13, 13, 12
  02bd8ec  fmuls 5, 12, 12
  02bd8f0  fmuls 12, 25, 12
  02bd8f4  stfs 26, 240(1)
  02bd8f8  fmuls 10, 13, 10
  02bd8fc  stfs 12, 244(1)
  02bd900  stfs 10, 248(1)
  02bd904  lfs 10, 220(3)
  02bd908  fmuls 10, 10, 5
  02bd90c  stfs 10, 236(3)
  02bd910  lfs 10, 4(4)
  02bd914  addic 3, 3, 8
  02bd918  addic 4, 4, 8
  02bd91c  fmuls 10, 10, 5
  02bd920  stfs 10, 4(5)
  02bd924  addic 5, 5, 8
  02bd928  bdnz 0x2bd904
  02bd92c  li 5, 4
  02bd930  ori 3, 1, 0
  02bd934  mtctr 5
  02bd938  lis 4, 115
  02bd93c  addic 5, 3, 236
  02bd940  addic 4, 4, 22752
  02bd944  ori 7, 5, 0
  02bd948  lfs 5, 236(3)
  02bd94c  lfs 10, 0(4)
  02bd950  fmuls 5, 5, 10
  02bd954  lfs 10, 4(4)
  02bd958  addic 4, 4, 8
  02bd95c  stfs 5, 236(3)
  02bd960  lfs 5, 4(5)
  02bd964  addic 3, 3, 8
  02bd968  fmuls 5, 5, 10
  02bd96c  stfs 5, 4(5)
  02bd970  addic 5, 5, 8
  02bd974  bdnz 0x2bd948
  02bd978  fmr 5, 28
  02bd97c  ori 3, 1, 0
  02bd980  mtctr 6
  02bd984  lfs 10, 236(3)
  02bd988  fadds 5, 5, 10
  02bd98c  addic 3, 3, 16
  02bd990  lfs 10, 4(7)
  02bd994  lfs 12, 8(7)
  02bd998  lfs 13, 12(7)
  02bd99c  addic 7, 7, 16
  02bd9a0  fadds 5, 5, 10
  02bd9a4  fadds 5, 5, 12
  02bd9a8  fadds 5, 5, 13
  02bd9ac  bdnz 0x2bd984
  02bd9b0  fadds 5, 5, 29
  02bd9b4  fmadds 11, 5, 11, 4
  02bd9b8  stfs 0, 148(1)
  02bd9bc  stfs 31, 144(1)
  02bd9c0  stfs 30, 152(1)
  02bd9c4  lwz 3, 148(1)
  02bd9c8  lwz 4, 144(1)
  02bd9cc  lwz 5, 152(1)
  02bd9d0  lfs 4, 152(1)
  02bd9d4  rlwinm 3, 3, 3, 29, 29
  02bd9d8  lfs 5, 148(1)
  02bd9dc  lfs 10, 144(1)
  02bd9e0  fsub 12, 4, 28
  02bd9e4  rlwimi 3, 5, 2, 30, 30
  02bd9e8  fabs 5, 5
  02bd9ec  fabs 10, 10
  02bd9f0  fsub 4, 4, 28
  02bd9f4  rlwimi 3, 4, 4, 28, 28
  02bd9f8  ori 4, 28, 0
  02bd9fc  rlwimi 4, 3, 2, 26, 28
  02bda00  slwi 3, 3, 2
  02bda04  clrldi 4, 4, 32
  02bda08  fsel 5, 12, 5, 7
  02bda0c  lfsx 31, 28, 3
  02bda10  fsel 7, 4, 10, 8
  02bda14  lfs 4, 4(4)
  02bda18  fcmpu 0, 7, 28
  02bda1c  bt 1, 0x2bda24
  02bda20  b 0x2bdb38
  02bda24  fsubs 8, 5, 7
  02bda28  fadds 5, 5, 7
  02bda2c  addic 3, 1, 16
  02bda30  li 6, 2
  02bda34  addic 5, 3, 204
  02bda38  addic 4, 3, 188
  02bda3c  mtctr 6
  02bda40  fdivs 5, 8, 5
  02bda44  fmuls 7, 5, 5
  02bda48  stfs 5, 216(1)
  02bda4c  stfs 5, 208(1)
  02bda50  stfs 5, 212(1)
  02bda54  stfs 5, 204(1)
  02bda58  lfs 10, 216(1)
  02bda5c  lfs 12, 208(1)
  02bda60  lfs 13, 212(1)
  02bda64  fmuls 8, 7, 7
  02bda68  fmuls 12, 12, 7
  02bda6c  fmuls 10, 10, 8
  02bda70  fmuls 5, 8, 8
  02bda74  fmuls 8, 13, 8
  02bda78  stfs 12, 208(1)
  02bda7c  fmuls 7, 10, 7
  02bda80  stfs 8, 212(1)
  02bda84  stfs 7, 216(1)
  02bda88  lfs 7, 188(3)
  02bda8c  fmuls 7, 7, 5
  02bda90  stfs 7, 204(3)
  02bda94  lfs 7, 4(4)
  02bda98  addic 4, 4, 8
  02bda9c  fmuls 7, 7, 5
  02bdaa0  addic 3, 3, 8
  02bdaa4  stfs 7, 4(5)
  02bdaa8  addic 5, 5, 8
  02bdaac  bdnz 0x2bda88
  02bdab0  li 5, 4
  02bdab4  ori 3, 1, 0
  02bdab8  mtctr 5
  02bdabc  lis 4, 115
  02bdac0  addic 5, 3, 204
  02bdac4  addic 4, 4, 22752
  02bdac8  ori 7, 5, 0
  02bdacc  lfs 5, 204(3)
  02bdad0  lfs 7, 0(4)
  02bdad4  fmuls 5, 5, 7
  02bdad8  lfs 7, 4(4)
  02bdadc  addic 4, 4, 8
  02bdae0  stfs 5, 204(3)
  02bdae4  lfs 5, 4(5)
  02bdae8  addic 3, 3, 8
  02bdaec  fmuls 5, 5, 7
  02bdaf0  stfs 5, 4(5)
  02bdaf4  addic 5, 5, 8
  02bdaf8  bdnz 0x2bdacc
  02bdafc  ori 3, 1, 0
  02bdb00  mtctr 6
  02bdb04  lfs 5, 204(3)
  02bdb08  lfs 7, 4(7)
  02bdb0c  fadds 5, 28, 5
  02bdb10  lfs 8, 8(7)
  02bdb14  addic 3, 3, 16
  02bdb18  lfs 28, 12(7)
  02bdb1c  addic 7, 7, 16
  02bdb20  fadds 5, 5, 7
  02bdb24  fadds 5, 5, 8
  02bdb28  fadds 28, 5, 28
  02bdb2c  bdnz 0x2bdb04
  02bdb30  fadds 28, 28, 29
  02bdb34  fmadds 28, 28, 31, 4
  02bdb38  stfs 1, 64(1)
  02bdb3c  ori 3, 31, 0
  02bdb40  stfs 3, 72(1)
  02bdb44  fneg 4, 28
  02bdb48  stfs 2, 68(1)
  02bdb4c  fmr 1, 6
  02bdb50  stfs 27, 76(1)
  02bdb54  fneg 2, 9
  02bdb58  ld 5, 64(1)
  02bdb5c  fmr 3, 11
  02bdb60  ld 6, 72(1)
  02bdb64  bl 0x2a5158
  02bdb68  nop
  02bdb6c  li 3, 0
  02bdb70  li 4, 0
  02bdb74  ori 5, 31, 0
  02bdb78  bl 0x15d12c
  02bdb7c  nop
  02bdb80  lis 3, 123
  02bdb84  vspltisw 4, -1
  02bdb88  li 4, 32252
  02bdb8c  lis 5, 44
  02bdb90  li 6, 28
  02bdb94  addi 5, 5, -12052
  02bdb98  vslw 4, 4, 4
  02bdb9c  <unknown>
  02bdba0  lis 3, 114
  02bdba4  vcfsx 2, 2, 0
  02bdba8  <unknown>
  02bdbac  li 4, -3056
  02bdbb0  vspltw 3, 3, 0
  02bdbb4  <unknown>
  02bdbb8  li 3, 84
  02bdbbc  lwz 4, 92(30)
  02bdbc0  addic 4, 4, 1
  02bdbc4  vaddfp 2, 2, 3
  02bdbc8  vmaddfp 2, 5, 2, 4
  02bdbcc  vctsxs 2, 2, 0
  02bdbd0  vsplth 2, 2, 1
  02bdbd4  stvehx 2, 3, 30
  02bdbd8  stw 4, 92(30)
  02bdbdc  b 0x2bdbe8
  02bdbe0  li 3, 0
  02bdbe4  stw 3, 96(30)
  02bdbe8  ld 0, 512(1)
  02bdbec  mtlr 0
  02bdbf0  lfd 21, 408(1)
  02bdbf4  lfd 22, 416(1)
  02bdbf8  lfd 23, 424(1)
  02bdbfc  lfd 24, 432(1)
  02bdc00  lfd 25, 440(1)
  02bdc04  lfd 26, 448(1)
  02bdc08  lfd 27, 456(1)
  02bdc0c  lfd 28, 464(1)
  02bdc10  lfd 29, 472(1)
  02bdc14  lfd 30, 480(1)
  02bdc18  lfd 31, 488(1)
  02bdc1c  ld 28, 376(1)
  02bdc20  ld 29, 384(1)
  02bdc24  ld 30, 392(1)
  02bdc28  ld 31, 400(1)
  02bdc2c  addi 1, 1, 496
  02bdc30  blr

M1818_002bdc98:   # 0x2bdc98, 0xc54 bytes
  02bdc98  stdu 1, -368(1)
  02bdc9c  mflr 0
  02bdca0  std 0, 384(1)
  02bdca4  stfd 27, 328(1)
  02bdca8  stfd 28, 336(1)
  02bdcac  stfd 29, 344(1)
  02bdcb0  stfd 30, 352(1)
  02bdcb4  stfd 31, 360(1)
  02bdcb8  lfs 29, 0(4)
  02bdcbc  std 30, 312(1)
  02bdcc0  lfs 1, 16(3)
  02bdcc4  ori 30, 4, 0
  02bdcc8  std 31, 320(1)
  02bdccc  lfs 28, 4(4)
  02bdcd0  ori 31, 3, 0
  02bdcd4  lfs 2, 20(3)
  02bdcd8  fsubs 29, 29, 1
  02bdcdc  lfs 31, 8(4)
  02bdce0  lfs 3, 24(3)
  02bdce4  lbz 4, 32(3)
  02bdce8  lbz 3, 188(3)
  02bdcec  cmpwi 4, 6
  02bdcf0  fsubs 28, 28, 2
  02bdcf4  fsubs 31, 31, 3
  02bdcf8  cmpwi 1, 3, 2
  02bdcfc  cmpwi 6, 3, -1
  02bdd00  std 29, 304(1)
  02bdd04  cmpwi 7, 3, 0
  02bdd08  bf 2, 0x2bdd18
  02bdd0c  lfs 30, 48(30)
  02bdd10  lfs 3, 52(30)
  02bdd14  b 0x2bdd28
  02bdd18  lis 3, 151
  02bdd1c  addic 3, 3, -25376
  02bdd20  lfs 30, 128(3)
  02bdd24  lfs 3, 132(3)
  02bdd28  fsubs 3, 2, 3
  02bdd2c  lis 3, 44
  02bdd30  fsubs 4, 1, 30
  02bdd34  addi 3, 3, -9164
  02bdd38  lfs 30, 0(3)
  02bdd3c  fmuls 3, 3, 3
  02bdd40  fmadds 27, 4, 4, 3
  02bdd44  fsqrts 27, 27
  02bdd48  bt 29, 0x2bdd54
  02bdd4c  bf 25, 0x2be80c
  02bdd50  b 0x2bdd5c
  02bdd54  bt 6, 0x2bdf68
  02bdd58  b 0x2be80c
  02bdd5c  fabs 3, 29
  02bdd60  fabs 4, 28
  02bdd64  lis 3, 44
  02bdd68  stfs 29, 148(1)
  02bdd6c  addi 3, 3, -9164
  02bdd70  stfs 28, 152(1)
  02bdd74  lis 4, 115
  02bdd78  addic 4, 4, 22784
  02bdd7c  fsubs 1, 3, 4
  02bdd80  stfs 1, 156(1)
  02bdd84  lfs 2, 4(3)
  02bdd88  lwz 3, 148(1)
  02bdd8c  lfs 1, 148(1)
  02bdd90  lwz 5, 152(1)
  02bdd94  lfs 5, 152(1)
  02bdd98  lwz 6, 156(1)
  02bdd9c  rlwinm 5, 5, 3, 29, 29
  02bdda0  lfs 6, 156(1)
  02bdda4  fabs 1, 1
  02bdda8  rlwimi 5, 6, 2, 30, 30
  02bddac  fabs 5, 5
  02bddb0  fsub 7, 6, 2
  02bddb4  rlwimi 5, 3, 4, 28, 28
  02bddb8  fsub 6, 6, 2
  02bddbc  ori 3, 4, 0
  02bddc0  rlwimi 3, 5, 2, 26, 28
  02bddc4  slwi 5, 5, 2
  02bddc8  clrldi 3, 3, 32
  02bddcc  fsel 4, 7, 1, 4
  02bddd0  lfsx 29, 4, 5
  02bddd4  lfs 1, 4(3)
  02bddd8  fsel 3, 6, 5, 3
  02bdddc  fcmpu 0, 4, 2
  02bdde0  bt 1, 0x2bdde8
  02bdde4  b 0x2bdefc
  02bdde8  fsubs 5, 3, 4
  02bddec  fadds 3, 3, 4
  02bddf0  addic 3, 1, 16
  02bddf4  li 6, 2
  02bddf8  addic 4, 3, 240
  02bddfc  addic 5, 3, 256
  02bde00  mtctr 6
  02bde04  fdivs 3, 5, 3
  02bde08  fmuls 4, 3, 3
  02bde0c  stfs 3, 268(1)
  02bde10  stfs 3, 260(1)
  02bde14  stfs 3, 264(1)
  02bde18  stfs 3, 256(1)
  02bde1c  lfs 6, 268(1)
  02bde20  lfs 7, 260(1)
  02bde24  lfs 8, 264(1)
  02bde28  fmuls 5, 4, 4
  02bde2c  fmuls 7, 7, 4
  02bde30  fmuls 6, 6, 5
  02bde34  fmuls 3, 5, 5
  02bde38  fmuls 5, 8, 5
  02bde3c  stfs 7, 260(1)
  02bde40  fmuls 4, 6, 4
  02bde44  stfs 5, 264(1)
  02bde48  stfs 4, 268(1)
  02bde4c  lfs 4, 240(3)
  02bde50  fmuls 4, 4, 3
  02bde54  stfs 4, 256(3)
  02bde58  lfs 4, 4(4)
  02bde5c  addic 3, 3, 8
  02bde60  addic 4, 4, 8
  02bde64  fmuls 4, 4, 3
  02bde68  stfs 4, 4(5)
  02bde6c  addic 5, 5, 8
  02bde70  bdnz 0x2bde4c
  02bde74  li 5, 4
  02bde78  ori 3, 1, 0
  02bde7c  mtctr 5
  02bde80  lis 4, 115
  02bde84  addic 5, 3, 256
  02bde88  addic 4, 4, 22752
  02bde8c  ori 7, 5, 0
  02bde90  lfs 3, 256(3)
  02bde94  lfs 4, 0(4)
  02bde98  fmuls 3, 3, 4
  02bde9c  lfs 4, 4(4)
  02bdea0  addic 4, 4, 8
  02bdea4  stfs 3, 256(3)
  02bdea8  lfs 3, 4(5)
  02bdeac  addic 3, 3, 8
  02bdeb0  fmuls 3, 3, 4
  02bdeb4  stfs 3, 4(5)
  02bdeb8  addic 5, 5, 8
  02bdebc  bdnz 0x2bde90
  02bdec0  ori 3, 1, 0
  02bdec4  mtctr 6
  02bdec8  lfs 3, 256(3)
  02bdecc  fadds 2, 2, 3
  02bded0  lfs 3, 4(7)
  02bded4  addic 3, 3, 16
  02bded8  lfs 4, 8(7)
  02bdedc  lfs 5, 12(7)
  02bdee0  addic 7, 7, 16
  02bdee4  fadds 2, 2, 3
  02bdee8  fadds 2, 2, 4
  02bdeec  fadds 2, 2, 5
  02bdef0  bdnz 0x2bdec8
  02bdef4  fadds 2, 2, 30
  02bdef8  fmadds 2, 2, 29, 1
  02bdefc  lis 3, 44
  02bdf00  lis 4, 268
  02bdf04  fmr 1, 2
  02bdf08  addi 29, 3, -9164
  02bdf0c  lis 3, 114
  02bdf10  addic 5, 4, 20820
  02bdf14  lis 4, 114
  02bdf18  addic 5, 5, 20
  02bdf1c  lfs 4, 8(29)
  02bdf20  lfs 3, -3048(3)
  02bdf24  lfs 6, 12(29)
  02bdf28  fmuls 7, 3, 4
  02bdf2c  lfs 5, 16(29)
  02bdf30  lfs 2, -3052(4)
  02bdf34  ori 3, 31, 0
  02bdf38  fmuls 3, 3, 6
  02bdf3c  fmuls 4, 2, 5
  02bdf40  fmr 2, 7
  02bdf44  bl 0xff2e8
  02bdf48  nop
  02bdf4c  lfs 1, 20(29)
  02bdf50  fcmpu 0, 27, 1
  02bdf54  cror 6, 0, 2
  02bdf58  bt 6, 0x2be834
  02bdf5c  li 3, 2
  02bdf60  stb 3, 188(31)
  02bdf64  b 0x2be834
  02bdf68  lwz 3, 96(30)
  02bdf6c  cmpwi 3, 0
  02bdf70  bf 2, 0x2be164
  02bdf74  fabs 3, 29
  02bdf78  fabs 5, 28
  02bdf7c  lis 3, 44
  02bdf80  stfs 29, 136(1)
  02bdf84  addi 3, 3, -9164
  02bdf88  stfs 28, 140(1)
  02bdf8c  lis 4, 115
  02bdf90  addic 4, 4, 22784
  02bdf94  fsubs 1, 3, 5
  02bdf98  stfs 1, 144(1)
  02bdf9c  lfs 4, 4(3)
  02bdfa0  lwz 3, 136(1)
  02bdfa4  lfs 1, 136(1)
  02bdfa8  lwz 5, 140(1)
  02bdfac  lfs 2, 140(1)
  02bdfb0  lwz 6, 144(1)
  02bdfb4  rlwinm 5, 5, 3, 29, 29
  02bdfb8  fabs 6, 2
  02bdfbc  lfs 2, 144(1)
  02bdfc0  fabs 1, 1
  02bdfc4  rlwimi 5, 6, 2, 30, 30
  02bdfc8  fsub 7, 2, 4
  02bdfcc  rlwimi 5, 3, 4, 28, 28
  02bdfd0  fsub 8, 2, 4
  02bdfd4  ori 3, 4, 0
  02bdfd8  rlwimi 3, 5, 2, 26, 28
  02bdfdc  slwi 5, 5, 2
  02bdfe0  clrldi 3, 3, 32
  02bdfe4  fsel 5, 7, 1, 5
  02bdfe8  lfsx 1, 4, 5
  02bdfec  lfs 2, 4(3)
  02bdff0  fsel 3, 8, 6, 3
  02bdff4  fcmpu 0, 5, 4
  02bdff8  bt 1, 0x2be000
  02bdffc  b 0x2be114
  02be000  fsubs 6, 3, 5
  02be004  fadds 3, 3, 5
  02be008  addic 3, 1, 16
  02be00c  li 6, 2
  02be010  addic 4, 3, 208
  02be014  addic 5, 3, 224
  02be018  mtctr 6
  02be01c  fdivs 3, 6, 3
  02be020  fmuls 5, 3, 3
  02be024  stfs 3, 236(1)
  02be028  stfs 3, 228(1)
  02be02c  stfs 3, 232(1)
  02be030  stfs 3, 224(1)
  02be034  lfs 7, 236(1)
  02be038  lfs 8, 228(1)
  02be03c  lfs 9, 232(1)
  02be040  fmuls 6, 5, 5
  02be044  fmuls 8, 8, 5
  02be048  fmuls 7, 7, 6
  02be04c  fmuls 3, 6, 6
  02be050  fmuls 6, 9, 6
  02be054  stfs 8, 228(1)
  02be058  fmuls 5, 7, 5
  02be05c  stfs 6, 232(1)
  02be060  stfs 5, 236(1)
  02be064  lfs 5, 208(3)
  02be068  fmuls 5, 5, 3
  02be06c  stfs 5, 224(3)
  02be070  lfs 5, 4(4)
  02be074  addic 3, 3, 8
  02be078  addic 4, 4, 8
  02be07c  fmuls 5, 5, 3
  02be080  stfs 5, 4(5)
  02be084  addic 5, 5, 8
  02be088  bdnz 0x2be064
  02be08c  li 5, 4
  02be090  ori 3, 1, 0
  02be094  mtctr 5
  02be098  lis 4, 115
  02be09c  addic 5, 3, 224
  02be0a0  addic 4, 4, 22752
  02be0a4  ori 7, 5, 0
  02be0a8  lfs 3, 224(3)
  02be0ac  lfs 5, 0(4)
  02be0b0  fmuls 3, 3, 5
  02be0b4  lfs 5, 4(4)
  02be0b8  addic 4, 4, 8
  02be0bc  stfs 3, 224(3)
  02be0c0  lfs 3, 4(5)
  02be0c4  addic 3, 3, 8
  02be0c8  fmuls 3, 3, 5
  02be0cc  stfs 3, 4(5)
  02be0d0  addic 5, 5, 8
  02be0d4  bdnz 0x2be0a8
  02be0d8  ori 3, 1, 0
  02be0dc  mtctr 6
  02be0e0  lfs 3, 224(3)
  02be0e4  fadds 3, 4, 3
  02be0e8  lfs 4, 4(7)
  02be0ec  addic 3, 3, 16
  02be0f0  lfs 5, 8(7)
  02be0f4  lfs 6, 12(7)
  02be0f8  addic 7, 7, 16
  02be0fc  fadds 3, 3, 4
  02be100  fadds 4, 3, 5
  02be104  fadds 4, 4, 6
  02be108  bdnz 0x2be0e0
  02be10c  fadds 4, 4, 30
  02be110  fmadds 4, 4, 1, 2
  02be114  lis 3, 44
  02be118  lis 4, 114
  02be11c  fmr 1, 4
  02be120  addi 3, 3, -9164
  02be124  lis 6, 114
  02be128  lis 5, 268
  02be12c  addic 5, 5, 20820
  02be130  lfs 3, 16(3)
  02be134  lfs 2, 8(3)
  02be138  lfs 6, 12(3)
  02be13c  addic 5, 5, 20
  02be140  lfs 5, -3052(4)
  02be144  ori 3, 31, 0
  02be148  lfs 7, -3048(6)
  02be14c  fmuls 4, 5, 3
  02be150  fmuls 2, 7, 2
  02be154  fmuls 3, 7, 6
  02be158  bl 0xff2e8
  02be15c  nop
  02be160  b 0x2be37c
  02be164  lfs 3, 16(3)
  02be168  lfs 4, 20(3)
  02be16c  fsubs 1, 3, 1
  02be170  fsubs 2, 4, 2
  02be174  lis 3, 44
  02be178  addi 3, 3, -9164
  02be17c  lis 4, 115
  02be180  addic 4, 4, 22784
  02be184  fabs 4, 1
  02be188  fabs 5, 2
  02be18c  stfs 1, 124(1)
  02be190  stfs 2, 128(1)
  02be194  fsubs 1, 4, 5
  02be198  stfs 1, 132(1)
  02be19c  lwz 5, 124(1)
  02be1a0  lfs 3, 4(3)
  02be1a4  lfs 1, 124(1)
  02be1a8  lwz 3, 128(1)
  02be1ac  lfs 2, 128(1)
  02be1b0  lwz 6, 132(1)
  02be1b4  rlwinm 3, 3, 3, 29, 29
  02be1b8  fabs 6, 2
  02be1bc  lfs 2, 132(1)
  02be1c0  fabs 1, 1
  02be1c4  rlwimi 3, 6, 2, 30, 30
  02be1c8  fsub 7, 2, 3
  02be1cc  rlwimi 3, 5, 4, 28, 28
  02be1d0  fsub 8, 2, 3
  02be1d4  ori 5, 4, 0
  02be1d8  rlwimi 5, 3, 2, 26, 28
  02be1dc  slwi 3, 3, 2
  02be1e0  clrldi 5, 5, 32
  02be1e4  fsel 5, 7, 1, 5
  02be1e8  lfsx 1, 4, 3
  02be1ec  lfs 2, 4(5)
  02be1f0  fsel 4, 8, 6, 4
  02be1f4  fcmpu 0, 5, 3
  02be1f8  bt 1, 0x2be200
  02be1fc  b 0x2be314
  02be200  fsubs 6, 4, 5
  02be204  fadds 4, 4, 5
  02be208  addic 3, 1, 16
  02be20c  li 6, 2
  02be210  addic 4, 3, 176
  02be214  addic 5, 3, 192
  02be218  mtctr 6
  02be21c  fdivs 4, 6, 4
  02be220  fmuls 5, 4, 4
  02be224  stfs 4, 204(1)
  02be228  stfs 4, 196(1)
  02be22c  stfs 4, 200(1)
  02be230  stfs 4, 192(1)
  02be234  lfs 7, 204(1)
  02be238  lfs 8, 196(1)
  02be23c  lfs 9, 200(1)
  02be240  fmuls 6, 5, 5
  02be244  fmuls 8, 8, 5
  02be248  fmuls 7, 7, 6
  02be24c  fmuls 4, 6, 6
  02be250  fmuls 6, 9, 6
  02be254  stfs 8, 196(1)
  02be258  fmuls 5, 7, 5
  02be25c  stfs 6, 200(1)
  02be260  stfs 5, 204(1)
  02be264  lfs 5, 176(3)
  02be268  fmuls 5, 5, 4
  02be26c  stfs 5, 192(3)
  02be270  lfs 5, 4(4)
  02be274  addic 3, 3, 8
  02be278  addic 4, 4, 8
  02be27c  fmuls 5, 5, 4
  02be280  stfs 5, 4(5)
  02be284  addic 5, 5, 8
  02be288  bdnz 0x2be264
  02be28c  li 5, 4
  02be290  ori 3, 1, 0
  02be294  mtctr 5
  02be298  lis 4, 115
  02be29c  addic 5, 3, 192
  02be2a0  addic 4, 4, 22752
  02be2a4  ori 7, 5, 0
  02be2a8  lfs 4, 192(3)
  02be2ac  lfs 5, 0(4)
  02be2b0  fmuls 4, 4, 5
  02be2b4  lfs 5, 4(4)
  02be2b8  addic 4, 4, 8
  02be2bc  stfs 4, 192(3)
  02be2c0  lfs 4, 4(5)
  02be2c4  addic 3, 3, 8
  02be2c8  fmuls 4, 4, 5
  02be2cc  stfs 4, 4(5)
  02be2d0  addic 5, 5, 8
  02be2d4  bdnz 0x2be2a8
  02be2d8  ori 3, 1, 0
  02be2dc  mtctr 6
  02be2e0  lfs 4, 192(3)
  02be2e4  fadds 3, 3, 4
  02be2e8  lfs 4, 4(7)
  02be2ec  addic 3, 3, 16
  02be2f0  lfs 5, 8(7)
  02be2f4  lfs 6, 12(7)
  02be2f8  addic 7, 7, 16
  02be2fc  fadds 3, 3, 4
  02be300  fadds 3, 3, 5
  02be304  fadds 3, 3, 6
  02be308  bdnz 0x2be2e0
  02be30c  fadds 3, 3, 30
  02be310  fmadds 3, 3, 1, 2
  02be314  lis 3, 44
  02be318  lis 4, 123
  02be31c  fmr 1, 3
  02be320  addi 3, 3, -9164
  02be324  lis 5, 123
  02be328  lis 6, 123
  02be32c  lfs 2, 24(3)
  02be330  lfs 4, 32324(4)
  02be334  lis 3, 114
  02be338  lfs 5, 32320(5)
  02be33c  lis 4, 268
  02be340  lfs 6, 32328(6)
  02be344  fmuls 3, 4, 2
  02be348  fmuls 4, 5, 2
  02be34c  addic 5, 4, 20820
  02be350  fmuls 5, 6, 2
  02be354  lfs 7, -3048(3)
  02be358  lis 3, 114
  02be35c  addic 5, 5, 20
  02be360  lfs 6, -3052(3)
  02be364  ori 3, 31, 0
  02be368  fmuls 2, 4, 7
  02be36c  fmuls 3, 3, 7
  02be370  fmuls 4, 5, 6
  02be374  bl 0xff2e8
  02be378  nop
  02be37c  lis 3, 44
  02be380  lis 4, 114
  02be384  addi 3, 3, -9164
  02be388  lfs 1, 28(3)
  02be38c  lfs 6, 20(3)
  02be390  lfs 2, -3064(4)
  02be394  fcmpu 0, 27, 6
  02be398  fmuls 7, 2, 1
  02be39c  lfs 3, 16(30)
  02be3a0  lfs 4, 20(30)
  02be3a4  lfs 5, 24(30)
  02be3a8  cror 6, 0, 2
  02be3ac  fmsubs 29, 29, 7, 3
  02be3b0  fmsubs 1, 28, 7, 4
  02be3b4  fmsubs 31, 31, 7, 5
  02be3b8  bt 6, 0x2be3d4
  02be3bc  lis 3, 44
  02be3c0  lis 4, 114
  02be3c4  addi 3, 3, -9164
  02be3c8  lfs 6, -3060(4)
  02be3cc  lfs 7, 32(3)
  02be3d0  b 0x2be3e8
  02be3d4  lis 3, 44
  02be3d8  lis 4, 114
  02be3dc  addi 3, 3, -9164
  02be3e0  lfs 6, -3060(4)
  02be3e4  lfs 7, 36(3)
  02be3e8  fmuls 6, 6, 7
  02be3ec  lis 3, 44
  02be3f0  addi 3, 3, -9164
  02be3f4  lfs 7, 40(3)
  02be3f8  fmuls 9, 31, 6
  02be3fc  lfs 31, 44(3)
  02be400  fmadds 29, 29, 6, 3
  02be404  fmadds 2, 2, 7, 31
  02be408  fmadds 1, 1, 6, 4
  02be40c  fmadds 2, 9, 2, 5
  02be410  stfs 29, 16(30)
  02be414  stfs 1, 20(30)
  02be418  stfs 2, 24(30)
  02be41c  lbz 3, 32(31)
  02be420  cmpwi 3, 6
  02be424  bf 2, 0x2be478
  02be428  fmuls 3, 1, 1
  02be42c  lis 3, 44
  02be430  lis 4, 114
  02be434  addi 3, 3, -9164
  02be438  fmadds 3, 29, 29, 3
  02be43c  fmadds 4, 2, 2, 3
  02be440  lfs 3, 48(3)
  02be444  lfs 5, -3052(4)
  02be448  fmuls 3, 5, 3
  02be44c  fsqrts 4, 4
  02be450  fcmpu 0, 3, 4
  02be454  cror 6, 1, 2
  02be458  bt 6, 0x2be478
  02be45c  fdivs 3, 3, 4
  02be460  fmuls 4, 29, 3
  02be464  fmuls 1, 1, 3
  02be468  fmuls 2, 2, 3
  02be46c  stfs 4, 16(30)
  02be470  stfs 1, 20(30)
  02be474  stfs 2, 24(30)
  02be478  lis 5, 268
  02be47c  fmr 1, 31
  02be480  ori 3, 31, 0
  02be484  addic 7, 5, 20820
  02be488  addic 4, 30, 16
  02be48c  li 8, 0
  02be490  lwz 6, 20820(5)
  02be494  lfs 2, 48(7)
  02be498  extsw 6, 6
  02be49c  bl 0x100ef8
  02be4a0  nop
  02be4a4  lfs 1, 20(30)
  02be4a8  lfs 31, 16(30)
  02be4ac  cmpwi 3, 0
  02be4b0  fmuls 2, 1, 1
  02be4b4  lfs 3, 24(30)
  02be4b8  fmadds 2, 31, 31, 2
  02be4bc  fmadds 2, 3, 3, 2
  02be4c0  fsqrts 2, 2
  02be4c4  bt 2, 0x2be554
  02be4c8  lis 3, 44
  02be4cc  addi 3, 3, -9164
  02be4d0  lfs 3, 52(3)
  02be4d4  fcmpu 0, 2, 3
  02be4d8  cror 6, 1, 2
  02be4dc  bt 6, 0x2be55c
  02be4e0  lis 3, 44
  02be4e4  lhz 5, 80(30)
  02be4e8  lis 4, 114
  02be4ec  addi 3, 3, -9164
  02be4f0  addic 5, 5, 1
  02be4f4  lfs 2, -3056(4)
  02be4f8  sth 5, 80(30)
  02be4fc  lfs 3, 56(3)
  02be500  extsh 3, 5
  02be504  fmuls 2, 2, 3
  02be508  fctiwz 2, 2
  02be50c  stfd 2, 288(1)
  02be510  lwz 4, 292(1)
  02be514  cmpw 3, 4
  02be518  bf 1, 0x2be55c
  02be51c  lbz 3, 49(31)
  02be520  cmpwi 3, 0
  02be524  bf 2, 0x2be55c
  02be528  lfs 2, 0(30)
  02be52c  li 3, 0
  02be530  stfs 2, 16(31)
  02be534  lfs 2, 4(30)
  02be538  stfs 2, 20(31)
  02be53c  lfs 2, 8(30)
  02be540  sth 3, 80(30)
  02be544  stfs 2, 24(31)
  02be548  lfs 2, 12(30)
  02be54c  stfs 2, 28(31)
  02be550  b 0x2be55c
  02be554  li 3, 0
  02be558  sth 3, 80(30)
  02be55c  lis 3, 44
  02be560  addi 3, 3, -9164
  02be564  lfs 5, 60(3)
  02be568  fcmpu 0, 27, 5
  02be56c  cror 6, 1, 2
  02be570  bt 6, 0x2be834
  02be574  lis 3, 151
  02be578  lfs 2, 16(31)
  02be57c  addic 3, 3, -25376
  02be580  lfs 3, 20(31)
  02be584  lis 4, 115
  02be588  lfs 4, 128(3)
  02be58c  lfs 6, 132(3)
  02be590  fsubs 2, 4, 2
  02be594  lis 3, 44
  02be598  fsubs 3, 6, 3
  02be59c  addi 3, 3, -9164
  02be5a0  addic 4, 4, 22784
  02be5a4  fabs 4, 2
  02be5a8  fabs 7, 3
  02be5ac  stfs 2, 112(1)
  02be5b0  stfs 3, 116(1)
  02be5b4  fsubs 2, 4, 7
  02be5b8  stfs 2, 120(1)
  02be5bc  lwz 5, 112(1)
  02be5c0  lfs 6, 4(3)
  02be5c4  lfs 2, 112(1)
  02be5c8  lwz 3, 116(1)
  02be5cc  lfs 3, 116(1)
  02be5d0  lwz 6, 120(1)
  02be5d4  rlwinm 3, 3, 3, 29, 29
  02be5d8  fabs 8, 3
  02be5dc  lfs 3, 120(1)
  02be5e0  fabs 2, 2
  02be5e4  rlwimi 3, 6, 2, 30, 30
  02be5e8  fsub 9, 3, 6
  02be5ec  rlwimi 3, 5, 4, 28, 28
  02be5f0  fsub 10, 3, 6
  02be5f4  ori 5, 4, 0
  02be5f8  rlwimi 5, 3, 2, 26, 28
  02be5fc  slwi 3, 3, 2
  02be600  clrldi 5, 5, 32
  02be604  fsel 7, 9, 2, 7
  02be608  lfsx 2, 4, 3
  02be60c  lfs 3, 4(5)
  02be610  fsel 4, 10, 8, 4
  02be614  fcmpu 0, 7, 6
  02be618  bt 1, 0x2be620
  02be61c  b 0x2be734
  02be620  fsubs 8, 4, 7
  02be624  fadds 4, 4, 7
  02be628  addic 3, 1, 16
  02be62c  li 6, 2
  02be630  addic 4, 3, 144
  02be634  addic 5, 3, 160
  02be638  mtctr 6
  02be63c  fdivs 4, 8, 4
  02be640  fmuls 7, 4, 4
  02be644  stfs 4, 172(1)
  02be648  stfs 4, 164(1)
  02be64c  stfs 4, 168(1)
  02be650  stfs 4, 160(1)
  02be654  lfs 9, 172(1)
  02be658  lfs 10, 164(1)
  02be65c  lfs 11, 168(1)
  02be660  fmuls 8, 7, 7
  02be664  fmuls 10, 10, 7
  02be668  fmuls 9, 9, 8
  02be66c  fmuls 4, 8, 8
  02be670  fmuls 8, 11, 8
  02be674  stfs 10, 164(1)
  02be678  fmuls 7, 9, 7
  02be67c  stfs 8, 168(1)
  02be680  stfs 7, 172(1)
  02be684  lfs 7, 144(3)
  02be688  fmuls 7, 7, 4
  02be68c  stfs 7, 160(3)
  02be690  lfs 7, 4(4)
  02be694  addic 3, 3, 8
  02be698  addic 4, 4, 8
  02be69c  fmuls 7, 7, 4
  02be6a0  stfs 7, 4(5)
  02be6a4  addic 5, 5, 8
  02be6a8  bdnz 0x2be684
  02be6ac  li 5, 4
  02be6b0  ori 3, 1, 0
  02be6b4  mtctr 5
  02be6b8  lis 4, 115
  02be6bc  addic 5, 3, 160
  02be6c0  addic 4, 4, 22752
  02be6c4  ori 7, 5, 0
  02be6c8  lfs 4, 160(3)
  02be6cc  lfs 7, 0(4)
  02be6d0  fmuls 4, 4, 7
  02be6d4  lfs 7, 4(4)
  02be6d8  addic 4, 4, 8
  02be6dc  stfs 4, 160(3)
  02be6e0  lfs 4, 4(5)
  02be6e4  addic 3, 3, 8
  02be6e8  fmuls 4, 4, 7
  02be6ec  stfs 4, 4(5)
  02be6f0  addic 5, 5, 8
  02be6f4  bdnz 0x2be6c8
  02be6f8  ori 3, 1, 0
  02be6fc  mtctr 6
  02be700  lfs 4, 160(3)
  02be704  fadds 4, 6, 4
  02be708  lfs 6, 4(7)
  02be70c  addic 3, 3, 16
  02be710  lfs 7, 8(7)
  02be714  lfs 8, 12(7)
  02be718  addic 7, 7, 16
  02be71c  fadds 4, 4, 6
  02be720  fadds 6, 4, 7
  02be724  fadds 6, 6, 8
  02be728  bdnz 0x2be700
  02be72c  fadds 6, 6, 30
  02be730  fmadds 6, 6, 2, 3
  02be734  lis 3, 44
  02be738  addi 3, 3, -9164
  02be73c  fsubs 5, 5, 27
  02be740  lfs 2, 64(3)
  02be744  lfs 3, 68(3)
  02be748  fadds 2, 6, 2
  02be74c  lfs 4, 72(3)
  02be750  fsubs 7, 3, 6
  02be754  fsubs 3, 3, 2
  02be758  fsubs 8, 4, 2
  02be75c  fsub 9, 6, 7
  02be760  fsubs 4, 4, 6
  02be764  fsub 10, 2, 3
  02be768  fsel 6, 9, 7, 6
  02be76c  fsel 2, 10, 3, 2
  02be770  lfs 3, 76(3)
  02be774  fsub 9, 4, 6
  02be778  lfs 7, 80(3)
  02be77c  fsub 10, 8, 2
  02be780  fsel 4, 9, 4, 6
  02be784  lfs 6, 84(3)
  02be788  fsel 2, 10, 8, 2
  02be78c  fmuls 9, 4, 4
  02be790  lfs 8, 88(3)
  02be794  lfs 11, 92(3)
  02be798  lis 3, 114
  02be79c  fmuls 10, 2, 2
  02be7a0  fmuls 12, 9, 4
  02be7a4  fmuls 13, 10, 2
  02be7a8  fmuls 0, 9, 12
  02be7ac  fmuls 30, 10, 13
  02be7b0  fmadds 2, 13, 3, 2
  02be7b4  fmadds 3, 12, 3, 4
  02be7b8  lfs 13, -3060(3)
  02be7bc  fmuls 4, 13, 11
  02be7c0  fmuls 13, 9, 0
  02be7c4  fmuls 12, 10, 30
  02be7c8  fmadds 2, 30, 7, 2
  02be7cc  fmadds 3, 0, 7, 3
  02be7d0  fmuls 9, 9, 13
  02be7d4  fmuls 7, 10, 12
  02be7d8  fmadds 2, 12, 6, 2
  02be7dc  fmadds 3, 13, 6, 3
  02be7e0  fmadds 2, 7, 8, 2
  02be7e4  fmadds 3, 9, 8, 3
  02be7e8  fmuls 2, 5, 2
  02be7ec  fmuls 3, 5, 3
  02be7f0  fnmsubs 2, 2, 4, 31
  02be7f4  stfs 2, 16(30)
  02be7f8  lfs 2, -3060(3)
  02be7fc  fmuls 2, 2, 11
  02be800  fnmsubs 1, 3, 2, 1
  02be804  stfs 1, 20(30)
  02be808  b 0x2be834
  02be80c  lis 3, 44
  02be810  li 4, 0
  02be814  addi 3, 3, -9164
  02be818  stb 4, 188(31)
  02be81c  lfs 1, 20(3)
  02be820  fcmpu 0, 27, 1
  02be824  cror 6, 0, 2
  02be828  bt 6, 0x2be834
  02be82c  li 3, 2
  02be830  stb 3, 188(31)
  02be834  lis 3, 268
  02be838  lis 4, 123
  02be83c  lfs 31, 64(31)
  02be840  addic 3, 3, 20820
  02be844  lfs 1, 32332(4)
  02be848  lfs 2, 20(3)
  02be84c  fmuls 1, 2, 1
  02be850  bl 0x10de78
  02be854  nop
  02be858  lfs 2, 64(31)
  02be85c  lis 3, 123
  02be860  fsubs 1, 1, 2
  02be864  lfs 2, 32340(3)
  02be868  lis 3, 123
  02be86c  fmadds 1, 1, 2, 31
  02be870  stfs 1, 64(31)
  02be874  lfs 1, 20(30)
  02be878  lfs 2, 16(30)
  02be87c  fmuls 1, 1, 1
  02be880  lfs 3, 24(30)
  02be884  lfs 31, 68(31)
  02be888  fmadds 1, 2, 2, 1
  02be88c  lfs 2, 32336(3)
  02be890  fmadds 1, 3, 3, 1
  02be894  fsqrts 1, 1
  02be898  fmuls 1, 2, 1
  02be89c  bl 0x10de78
  02be8a0  nop
  02be8a4  lfs 2, 68(31)
  02be8a8  lis 3, 123
  02be8ac  fsubs 1, 1, 2
  02be8b0  lfs 2, 32344(3)
  02be8b4  fmadds 1, 1, 2, 31
  02be8b8  stfs 1, 68(31)
  02be8bc  ld 0, 384(1)
  02be8c0  mtlr 0
  02be8c4  lfd 27, 328(1)
  02be8c8  lfd 28, 336(1)
  02be8cc  lfd 29, 344(1)
  02be8d0  lfd 30, 352(1)
  02be8d4  lfd 31, 360(1)
  02be8d8  ld 29, 304(1)
  02be8dc  ld 30, 312(1)
  02be8e0  ld 31, 320(1)
  02be8e4  addi 1, 1, 368
  02be8e8  blr

M1818_002be8f8:   # 0x2be8f8, 0x100 bytes
  02be8f8  stdu 1, -176(1)
  02be8fc  mflr 0
  02be900  std 0, 192(1)
  02be904  std 31, 168(1)
  02be908  ori 31, 3, 0
  02be90c  lbz 3, 49(3)
  02be910  std 30, 160(1)
  02be914  std 29, 152(1)
  02be918  cmpwi 3, 0
  02be91c  bt 2, 0x2be9dc
  02be920  li 3, 0
  02be924  lis 4, 44
  02be928  addi 4, 4, -5908
  02be92c  stw 3, 128(1)
  02be930  stw 3, 132(1)
  02be934  stw 3, 136(1)
  02be938  stw 3, 140(1)
  02be93c  lfs 1, 0(4)
  02be940  lfs 2, 4(4)
  02be944  bl 0xfcbe8
  02be948  nop
  02be94c  lis 4, 114
  02be950  addic 30, 1, 112
  02be954  ori 3, 31, 0
  02be958  ori 5, 30, 0
  02be95c  lfs 2, -3052(4)
  02be960  li 4, 0
  02be964  fmuls 1, 1, 2
  02be968  fneg 1, 1
  02be96c  stfs 1, 136(1)
  02be970  bl 0xf1114
  02be974  nop
  02be978  lis 6, 123
  02be97c  addic 29, 1, 128
  02be980  addic 6, 6, 32348
  02be984  ori 3, 31, 0
  02be988  ori 4, 30, 0
  02be98c  ori 5, 29, 0
  02be990  li 7, 1
  02be994  bl 0x1349f0
  02be998  nop
  02be99c  lis 6, 123
  02be9a0  ori 3, 31, 0
  02be9a4  addic 6, 6, 32364
  02be9a8  ori 4, 30, 0
  02be9ac  ori 5, 29, 0
  02be9b0  li 7, 1
  02be9b4  bl 0x1349f0
  02be9b8  nop
  02be9bc  lis 6, 123
  02be9c0  ori 3, 31, 0
  02be9c4  addic 6, 6, 32380
  02be9c8  ori 4, 30, 0
  02be9cc  ori 5, 29, 0
  02be9d0  li 7, 1
  02be9d4  bl 0x1349f0
  02be9d8  nop
  02be9dc  ld 0, 192(1)
  02be9e0  mtlr 0
  02be9e4  ld 29, 152(1)
  02be9e8  ld 30, 160(1)
  02be9ec  ld 31, 168(1)
  02be9f0  addi 1, 1, 176
  02be9f4  blr

M1818_002bea00:   # 0x2bea00, 0x80 bytes
  02bea00  stdu 1, -144(1)
  02bea04  mflr 0
  02bea08  std 0, 160(1)
  02bea0c  stfd 30, 128(1)
  02bea10  stfd 31, 136(1)
  02bea14  std 31, 120(1)
  02bea18  lis 4, 44
  02bea1c  std 30, 112(1)
  02bea20  lwz 31, 120(3)
  02bea24  li 30, 0
  02bea28  addi 4, 4, -5640
  02bea2c  lfs 30, 0(4)
  02bea30  lfs 31, 4(4)
  02bea34  lis 4, 9512
  02bea38  fmr 1, 30
  02bea3c  addic 3, 31, 112
  02bea40  fmr 2, 31
  02bea44  ori 4, 4, 43560
  02bea48  bl 0x119028
  02bea4c  nop
  02bea50  addic 30, 30, 1
  02bea54  addic 31, 31, 16
  02bea58  cmpwi 30, 2
  02bea5c  bt 0, 0x2bea34
  02bea60  ld 0, 160(1)
  02bea64  mtlr 0
  02bea68  lfd 30, 128(1)
  02bea6c  lfd 31, 136(1)
  02bea70  ld 30, 112(1)
  02bea74  ld 31, 120(1)
  02bea78  addi 1, 1, 144
  02bea7c  blr

M1818_002bea80:   # 0x2bea80, 0x7c bytes
  02bea80  stdu 1, -144(1)
  02bea84  mflr 0
  02bea88  std 0, 160(1)
  02bea8c  std 29, 120(1)
  02bea90  std 31, 136(1)
  02bea94  li 29, 0
  02bea98  std 30, 128(1)
  02bea9c  ori 31, 3, 0
  02beaa0  lwz 30, 120(3)
  02beaa4  addic 4, 29, 3
  02beaa8  addic 5, 30, 112
  02beaac  extsw 4, 4
  02beab0  ori 3, 31, 0
  02beab4  bl 0xf1114
  02beab8  nop
  02beabc  addic 29, 29, 1
  02beac0  addic 30, 30, 16
  02beac4  cmpwi 29, 2
  02beac8  bt 0, 0x2beaa4
  02beacc  lis 3, 113
  02bead0  ori 4, 31, 0
  02bead4  addic 3, 3, -20504
  02bead8  bl 0x6d720
  02beadc  nop
  02beae0  ld 0, 160(1)
  02beae4  mtlr 0
  02beae8  ld 29, 120(1)
  02beaec  ld 30, 128(1)
  02beaf0  ld 31, 136(1)
  02beaf4  addi 1, 1, 144
  02beaf8  blr

UpdateMoby_1818:   # 0x2beb68, 0x1fcc bytes
  02beb68  stdu 1, -528(1)
  02beb6c  mflr 0
  02beb70  std 0, 544(1)
  02beb74  stfd 31, 520(1)
  02beb78  std 31, 512(1)
  02beb7c  cmpwi 3, 0
  02beb80  std 30, 504(1)
  02beb84  std 29, 496(1)
  02beb88  std 28, 488(1)
  02beb8c  std 27, 480(1)
  02beb90  std 26, 472(1)
  02beb94  std 25, 464(1)
  02beb98  ori 31, 3, 0
  02beb9c  bt 2, 0x2c0b04
  02beba0  lwz 29, 120(31)
  02beba4  cmpwi 29, 0
  02beba8  bt 2, 0x2c0b04
  02bebac  lwz 4, 72(29)
  02bebb0  cmpwi 4, -1
  02bebb4  bt 2, 0x2befa0
  02bebb8  lbz 3, 32(31)
  02bebbc  cmpwi 3, 4
  02bebc0  bf 1, 0x2beda0
  02bebc4  lis 3, 164
  02bebc8  slwi 5, 4, 8
  02bebcc  lwz 3, -28512(3)
  02bebd0  lfs 1, 16(31)
  02bebd4  addc 3, 3, 5
  02bebd8  lfs 2, 20(31)
  02bebdc  clrldi 3, 3, 32
  02bebe0  lis 5, 115
  02bebe4  lfs 3, 16(3)
  02bebe8  lfs 4, 20(3)
  02bebec  fsubs 1, 1, 3
  02bebf0  fsubs 2, 2, 4
  02bebf4  lis 3, 44
  02bebf8  addi 3, 3, -5380
  02bebfc  addic 5, 5, 22784
  02bec00  fabs 3, 1
  02bec04  fabs 5, 2
  02bec08  stfs 1, 272(1)
  02bec0c  stfs 2, 276(1)
  02bec10  fsubs 1, 3, 5
  02bec14  stfs 1, 280(1)
  02bec18  lwz 6, 272(1)
  02bec1c  lfs 4, 0(3)
  02bec20  lfs 1, 272(1)
  02bec24  lwz 3, 276(1)
  02bec28  lfs 2, 276(1)
  02bec2c  fabs 1, 1
  02bec30  lwz 7, 280(1)
  02bec34  rlwinm 3, 3, 3, 29, 29
  02bec38  fabs 6, 2
  02bec3c  lfs 2, 280(1)
  02bec40  rlwimi 3, 7, 2, 30, 30
  02bec44  fsub 7, 2, 4
  02bec48  rlwimi 3, 6, 4, 28, 28
  02bec4c  fsub 8, 2, 4
  02bec50  ori 6, 5, 0
  02bec54  rlwimi 6, 3, 2, 26, 28
  02bec58  slwi 3, 3, 2
  02bec5c  clrldi 6, 6, 32
  02bec60  fsel 5, 7, 1, 5
  02bec64  lfsx 1, 5, 3
  02bec68  lfs 2, 4(6)
  02bec6c  fsel 3, 8, 6, 3
  02bec70  fcmpu 0, 5, 4
  02bec74  bt 1, 0x2bec7c
  02bec78  b 0x2bed9c
  02bec7c  fsubs 6, 3, 5
  02bec80  fadds 3, 3, 5
  02bec84  addic 3, 1, 16
  02bec88  li 7, 2
  02bec8c  addic 6, 3, 412
  02bec90  addic 5, 3, 396
  02bec94  mtctr 7
  02bec98  fdivs 3, 6, 3
  02bec9c  fmuls 5, 3, 3
  02beca0  stfs 3, 424(1)
  02beca4  stfs 3, 416(1)
  02beca8  stfs 3, 420(1)
  02becac  stfs 3, 412(1)
  02becb0  lfs 7, 424(1)
  02becb4  lfs 8, 416(1)
  02becb8  lfs 9, 420(1)
  02becbc  fmuls 6, 5, 5
  02becc0  fmuls 8, 8, 5
  02becc4  fmuls 7, 7, 6
  02becc8  fmuls 3, 6, 6
  02beccc  fmuls 6, 9, 6
  02becd0  stfs 8, 416(1)
  02becd4  fmuls 5, 7, 5
  02becd8  stfs 6, 420(1)
  02becdc  stfs 5, 424(1)
  02bece0  lfs 5, 396(3)
  02bece4  fmuls 5, 5, 3
  02bece8  stfs 5, 412(3)
  02becec  lfs 5, 4(5)
  02becf0  addic 5, 5, 8
  02becf4  fmuls 5, 5, 3
  02becf8  addic 3, 3, 8
  02becfc  stfs 5, 4(6)
  02bed00  addic 6, 6, 8
  02bed04  bdnz 0x2bece0
  02bed08  li 6, 4
  02bed0c  ori 3, 1, 0
  02bed10  mtctr 6
  02bed14  lis 5, 115
  02bed18  addic 6, 3, 412
  02bed1c  addic 5, 5, 22752
  02bed20  ori 8, 6, 0
  02bed24  lfs 3, 412(3)
  02bed28  lfs 5, 0(5)
  02bed2c  fmuls 3, 3, 5
  02bed30  lfs 5, 4(5)
  02bed34  addic 5, 5, 8
  02bed38  stfs 3, 412(3)
  02bed3c  lfs 3, 4(6)
  02bed40  addic 3, 3, 8
  02bed44  fmuls 3, 3, 5
  02bed48  stfs 3, 4(6)
  02bed4c  addic 6, 6, 8
  02bed50  bdnz 0x2bed24
  02bed54  ori 3, 1, 0
  02bed58  mtctr 7
  02bed5c  lfs 3, 412(3)
  02bed60  fadds 3, 4, 3
  02bed64  addic 3, 3, 16
  02bed68  lfs 4, 4(8)
  02bed6c  lfs 5, 8(8)
  02bed70  lfs 6, 12(8)
  02bed74  addic 8, 8, 16
  02bed78  fadds 3, 3, 4
  02bed7c  fadds 4, 3, 5
  02bed80  fadds 4, 4, 6
  02bed84  bdnz 0x2bed5c
  02bed88  lis 3, 44
  02bed8c  addi 3, 3, -5380
  02bed90  lfs 3, 4(3)
  02bed94  fadds 4, 4, 3
  02bed98  fmadds 4, 4, 1, 2
  02bed9c  b 0x2bef80
  02beda0  lis 3, 164
  02beda4  lis 5, 151
  02beda8  slwi 6, 4, 8
  02bedac  addic 5, 5, -25376
  02bedb0  lwz 3, -28512(3)
  02bedb4  addc 3, 3, 6
  02bedb8  lfs 1, 128(5)
  02bedbc  clrldi 3, 3, 32
  02bedc0  lfs 2, 132(5)
  02bedc4  lis 5, 115
  02bedc8  lfs 3, 16(3)
  02bedcc  lfs 4, 20(3)
  02bedd0  fsubs 1, 1, 3
  02bedd4  lis 3, 44
  02bedd8  fsubs 2, 2, 4
  02beddc  addi 3, 3, -5380
  02bede0  addic 5, 5, 22784
  02bede4  fabs 3, 1
  02bede8  fabs 5, 2
  02bedec  stfs 1, 260(1)
  02bedf0  stfs 2, 264(1)
  02bedf4  fsubs 1, 3, 5
  02bedf8  stfs 1, 268(1)
  02bedfc  lwz 6, 260(1)
  02bee00  lfs 4, 0(3)
  02bee04  lfs 1, 260(1)
  02bee08  lwz 3, 264(1)
  02bee0c  lfs 2, 264(1)
  02bee10  lwz 7, 268(1)
  02bee14  rlwinm 3, 3, 3, 29, 29
  02bee18  fabs 6, 2
  02bee1c  lfs 2, 268(1)
  02bee20  fabs 1, 1
  02bee24  rlwimi 3, 7, 2, 30, 30
  02bee28  fsub 7, 2, 4
  02bee2c  rlwimi 3, 6, 4, 28, 28
  02bee30  fsub 8, 2, 4
  02bee34  ori 6, 5, 0
  02bee38  rlwimi 6, 3, 2, 26, 28
  02bee3c  slwi 3, 3, 2
  02bee40  clrldi 6, 6, 32
  02bee44  fsel 5, 7, 1, 5
  02bee48  lfsx 1, 5, 3
  02bee4c  lfs 2, 4(6)
  02bee50  fsel 3, 8, 6, 3
  02bee54  fcmpu 0, 5, 4
  02bee58  bt 1, 0x2bee60
  02bee5c  b 0x2bef80
  02bee60  fsubs 6, 3, 5
  02bee64  fadds 3, 3, 5
  02bee68  addic 3, 1, 16
  02bee6c  li 8, 2
  02bee70  addic 5, 3, 364
  02bee74  addic 6, 3, 380
  02bee78  mtctr 8
  02bee7c  fdivs 3, 6, 3
  02bee80  fmuls 5, 3, 3
  02bee84  stfs 3, 392(1)
  02bee88  stfs 3, 384(1)
  02bee8c  stfs 3, 388(1)
  02bee90  stfs 3, 380(1)
  02bee94  lfs 7, 392(1)
  02bee98  lfs 8, 384(1)
  02bee9c  lfs 9, 388(1)
  02beea0  fmuls 6, 5, 5
  02beea4  fmuls 8, 8, 5
  02beea8  fmuls 7, 7, 6
  02beeac  fmuls 3, 6, 6
  02beeb0  fmuls 6, 9, 6
  02beeb4  stfs 8, 384(1)
  02beeb8  fmuls 5, 7, 5
  02beebc  stfs 6, 388(1)
  02beec0  stfs 5, 392(1)
  02beec4  lfs 5, 364(3)
  02beec8  fmuls 5, 5, 3
  02beecc  stfs 5, 380(3)
  02beed0  lfs 5, 4(5)
  02beed4  addic 3, 3, 8
  02beed8  addic 5, 5, 8
  02beedc  fmuls 5, 5, 3
  02beee0  stfs 5, 4(6)
  02beee4  addic 6, 6, 8
  02beee8  bdnz 0x2beec4
  02beeec  li 6, 4
  02beef0  ori 3, 1, 0
  02beef4  mtctr 6
  02beef8  lis 5, 115
  02beefc  addic 6, 3, 380
  02bef00  addic 5, 5, 22752
  02bef04  ori 7, 6, 0
  02bef08  lfs 3, 380(3)
  02bef0c  lfs 5, 0(5)
  02bef10  fmuls 3, 3, 5
  02bef14  lfs 5, 4(5)
  02bef18  addic 5, 5, 8
  02bef1c  stfs 3, 380(3)
  02bef20  lfs 3, 4(6)
  02bef24  addic 3, 3, 8
  02bef28  fmuls 3, 3, 5
  02bef2c  stfs 3, 4(6)
  02bef30  addic 6, 6, 8
  02bef34  bdnz 0x2bef08
  02bef38  ori 3, 1, 0
  02bef3c  mtctr 8
  02bef40  lfs 3, 380(3)
  02bef44  fadds 3, 4, 3
  02bef48  lfs 4, 4(7)
  02bef4c  addic 3, 3, 16
  02bef50  lfs 5, 8(7)
  02bef54  lfs 6, 12(7)
  02bef58  addic 7, 7, 16
  02bef5c  fadds 3, 3, 4
  02bef60  fadds 4, 3, 5
  02bef64  fadds 4, 4, 6
  02bef68  bdnz 0x2bef40
  02bef6c  lis 3, 44
  02bef70  addi 3, 3, -5380
  02bef74  lfs 3, 4(3)
  02bef78  fadds 4, 4, 3
  02bef7c  fmadds 4, 4, 1, 2
  02bef80  lis 3, 164
  02bef84  slwi 4, 4, 8
  02bef88  lwz 3, -28512(3)
  02bef8c  addc 3, 3, 4
  02bef90  clrldi 3, 3, 32
  02bef94  lwz 3, 120(3)
  02bef98  stfs 4, 0(3)
  02bef9c  lwz 4, 72(29)
  02befa0  cmpwi 4, -1
  02befa4  bt 2, 0x2befc4
  02befa8  lis 3, 164
  02befac  slwi 4, 4, 8
  02befb0  li 5, 0
  02befb4  lwz 3, -28512(3)
  02befb8  addc 3, 3, 4
  02befbc  clrldi 3, 3, 32
  02befc0  stw 5, 148(3)
  02befc4  lbz 3, 32(31)
  02befc8  cmpwi 3, 3
  02befcc  bt 0, 0x2bf07c
  02befd0  lis 3, 151
  02befd4  lbz 3, -16268(3)
  02befd8  cmpwi 3, 0
  02befdc  bt 2, 0x2bf018
  02befe0  lbz 3, 145(29)
  02befe4  cmpwi 3, 0
  02befe8  bf 2, 0x2bf000
  02befec  addic 5, 29, 144
  02beff0  ori 3, 31, 0
  02beff4  li 4, 5
  02beff8  bl 0xf0ea8
  02beffc  nop
  02bf000  lis 3, 16390
  02bf004  ori 3, 3, 26214
  02bf008  stw 3, 176(29)
  02bf00c  stw 3, 180(29)
  02bf010  stw 3, 184(29)
  02bf014  b 0x2bf034
  02bf018  lbz 3, 145(29)
  02bf01c  cmpwi 3, 0
  02bf020  bt 2, 0x2bf034
  02bf024  addic 4, 29, 144
  02bf028  ori 3, 31, 0
  02bf02c  bl 0xf0f1c
  02bf030  nop
  02bf034  li 30, 0
  02bf038  lwz 28, 120(31)
  02bf03c  addic 4, 30, 3
  02bf040  addic 5, 28, 112
  02bf044  extsw 4, 4
  02bf048  ori 3, 31, 0
  02bf04c  bl 0xf1114
  02bf050  nop
  02bf054  addic 30, 30, 1
  02bf058  addic 28, 28, 16
  02bf05c  cmpwi 30, 2
  02bf060  bt 0, 0x2bf03c
  02bf064  lis 3, 113
  02bf068  ori 4, 31, 0
  02bf06c  addic 3, 3, -20504
  02bf070  bl 0x6d720
  02bf074  nop
  02bf078  lbz 3, 32(31)
  02bf07c  cmpwi 3, 7
  02bf080  cmpwi 1, 3, 6
  02bf084  bt 2, 0x2c0664
  02bf088  cmpwi 6, 3, 5
  02bf08c  bt 6, 0x2c0384
  02bf090  cmpwi 1, 3, 4
  02bf094  bt 26, 0x2c0040
  02bf098  cmpwi 6, 3, 3
  02bf09c  bt 6, 0x2bff8c
  02bf0a0  cmpwi 1, 3, 2
  02bf0a4  bt 26, 0x2bfa70
  02bf0a8  cmpwi 6, 3, 1
  02bf0ac  bt 6, 0x2bf958
  02bf0b0  cmpwi 1, 3, 0
  02bf0b4  bt 26, 0x2bf40c
  02bf0b8  bf 6, 0x2c09ec
  02bf0bc  li 3, 0
  02bf0c0  li 5, 17
  02bf0c4  li 7, 18
  02bf0c8  li 4, 19
  02bf0cc  stb 3, 0(29)
  02bf0d0  li 6, 21
  02bf0d4  stb 3, 1(29)
  02bf0d8  li 8, 22
  02bf0dc  stb 3, 2(29)
  02bf0e0  li 9, 23
  02bf0e4  stb 3, 3(29)
  02bf0e8  stb 3, 4(29)
  02bf0ec  stb 3, 5(29)
  02bf0f0  stb 3, 6(29)
  02bf0f4  stb 3, 7(29)
  02bf0f8  stb 3, 8(29)
  02bf0fc  stb 3, 9(29)
  02bf100  stb 3, 10(29)
  02bf104  stb 3, 11(29)
  02bf108  stb 3, 12(29)
  02bf10c  stb 3, 13(29)
  02bf110  stb 3, 14(29)
  02bf114  stb 3, 15(29)
  02bf118  stb 3, 16(29)
  02bf11c  stbx 3, 29, 5
  02bf120  stbx 3, 29, 7
  02bf124  stbx 3, 29, 4
  02bf128  li 5, 25
  02bf12c  stb 3, 20(29)
  02bf130  li 7, 26
  02bf134  stbx 3, 29, 6
  02bf138  li 4, 27
  02bf13c  stbx 3, 29, 8
  02bf140  li 6, 29
  02bf144  stbx 3, 29, 9
  02bf148  li 8, 30
  02bf14c  stb 3, 24(29)
  02bf150  li 9, 31
  02bf154  stbx 3, 29, 5
  02bf158  stbx 3, 29, 7
  02bf15c  stbx 3, 29, 4
  02bf160  stb 3, 28(29)
  02bf164  stbx 3, 29, 6
  02bf168  stbx 3, 29, 8
  02bf16c  stbx 3, 29, 9
  02bf170  sth 3, 80(29)
  02bf174  sth 3, 82(29)
  02bf178  lbz 3, 83(31)
  02bf17c  cmpwi 3, 0
  02bf180  bt 2, 0x2bf1c0
  02bf184  lis 3, 44
  02bf188  lis 4, 114
  02bf18c  addi 3, 3, -5380
  02bf190  li 5, 0
  02bf194  lfs 1, 8(3)
  02bf198  lfs 2, -3056(4)
  02bf19c  ori 3, 31, 0
  02bf1a0  fmuls 1, 2, 1
  02bf1a4  li 4, 0
  02bf1a8  fctiwz 1, 1
  02bf1ac  stfd 1, 448(1)
  02bf1b0  lwz 6, 452(1)
  02bf1b4  extsw 6, 6
  02bf1b8  bl 0xfddc0
  02bf1bc  nop
  02bf1c0  li 3, 255
  02bf1c4  stb 3, 48(31)
  02bf1c8  sth 3, 50(31)
  02bf1cc  lwz 3, 72(29)
  02bf1d0  cmpwi 3, -1
  02bf1d4  bt 2, 0x2bf2a0
  02bf1d8  lis 4, 164
  02bf1dc  slwi 3, 3, 8
  02bf1e0  lis 5, 44
  02bf1e4  lwz 4, -28512(4)
  02bf1e8  addc 3, 4, 3
  02bf1ec  addi 4, 5, -5380
  02bf1f0  clrldi 3, 3, 32
  02bf1f4  lis 5, 165
  02bf1f8  addic 5, 5, 17860
  02bf1fc  lfs 1, 16(3)
  02bf200  stfs 1, 16(31)
  02bf204  lfs 2, 20(3)
  02bf208  stfs 2, 20(31)
  02bf20c  lfs 2, 24(3)
  02bf210  stfs 2, 24(31)
  02bf214  lfs 3, 28(3)
  02bf218  stfs 3, 28(31)
  02bf21c  lfs 3, 12(4)
  02bf220  lhz 3, 178(31)
  02bf224  fadds 2, 2, 3
  02bf228  extsh 4, 3
  02bf22c  stfs 2, 24(31)
  02bf230  lbzx 5, 5, 4
  02bf234  cmpwi 5, 0
  02bf238  bf 2, 0x2bf280
  02bf23c  lis 6, 151
  02bf240  lis 5, 161
  02bf244  srawi 4, 4, 5
  02bf248  addic 5, 5, -13028
  02bf24c  sldi 4, 4, 2
  02bf250  lwz 6, -25488(6)
  02bf254  addc 4, 4, 5
  02bf258  slwi 5, 6, 8
  02bf25c  clrldi 4, 4, 32
  02bf260  extsw 5, 5
  02bf264  li 7, 1
  02bf268  clrlwi 3, 3, 27
  02bf26c  slw 3, 7, 3
  02bf270  lwzx 4, 4, 5
  02bf274  and 3, 4, 3
  02bf278  cmpwi 3, 0
  02bf27c  bt 2, 0x2bf2c0
  02bf280  lis 3, 101
  02bf284  addic 3, 3, 23252
  02bf288  bl 0x5cd098
  02bf28c  nop
  02bf290  ori 3, 31, 0
  02bf294  bl 0xefb38
  02bf298  nop
  02bf29c  b 0x2c0b04
  02bf2a0  lis 3, 101
  02bf2a4  addic 3, 3, 23284
  02bf2a8  bl 0x5cd098
  02bf2ac  nop
  02bf2b0  ori 3, 31, 0
  02bf2b4  bl 0xefb38
  02bf2b8  nop
  02bf2bc  b 0x2c0b04
  02bf2c0  stfs 1, 32(29)
  02bf2c4  lfs 1, 20(31)
  02bf2c8  lis 30, 268
  02bf2cc  stfs 1, 36(29)
  02bf2d0  addic 28, 30, 20820
  02bf2d4  lfs 1, 24(31)
  02bf2d8  ori 3, 28, 0
  02bf2dc  stfs 1, 40(29)
  02bf2e0  lfs 1, 28(31)
  02bf2e4  stfs 1, 44(29)
  02bf2e8  lfs 1, 16(31)
  02bf2ec  stfs 1, 48(29)
  02bf2f0  lfs 1, 20(31)
  02bf2f4  stfs 1, 52(29)
  02bf2f8  lfs 1, 24(31)
  02bf2fc  stfs 1, 56(29)
  02bf300  lfs 1, 28(31)
  02bf304  stfs 1, 60(29)
  02bf308  bl 0x100f8c
  02bf30c  nop
  02bf310  lis 3, 15897
  02bf314  lis 4, 44
  02bf318  ori 3, 3, 39322
  02bf31c  addi 4, 4, -5380
  02bf320  lis 5, 114
  02bf324  stw 3, 8(28)
  02bf328  stw 3, 12(28)
  02bf32c  lfs 1, 16(4)
  02bf330  lis 3, 114
  02bf334  lfs 2, -3064(5)
  02bf338  lis 7, 15267
  02bf33c  fmuls 1, 2, 1
  02bf340  li 5, 500
  02bf344  ori 7, 7, 55050
  02bf348  lfs 3, -3052(3)
  02bf34c  lwz 6, 56(28)
  02bf350  lis 3, 16025
  02bf354  lis 8, 114
  02bf358  ori 3, 3, 39322
  02bf35c  ori 6, 6, 8
  02bf360  vspltisw 2, -1
  02bf364  stfs 1, 20(28)
  02bf368  lfs 1, 20(4)
  02bf36c  fmuls 1, 2, 1
  02bf370  vslw 2, 2, 2
  02bf374  stfs 1, 16(28)
  02bf378  lfs 2, 24(4)
  02bf37c  stfs 1, 28(28)
  02bf380  fmuls 2, 3, 2
  02bf384  stw 5, 20820(30)
  02bf388  stw 3, 4(28)
  02bf38c  stw 7, 48(28)
  02bf390  lis 5, 114
  02bf394  stw 6, 56(28)
  02bf398  lfs 1, -3048(8)
  02bf39c  li 6, -3056
  02bf3a0  li 3, 40
  02bf3a4  lis 7, 16457
  02bf3a8  li 8, 0
  02bf3ac  stfs 2, 36(28)
  02bf3b0  lfs 2, 28(4)
  02bf3b4  fmuls 2, 1, 2
  02bf3b8  ori 7, 7, 4059
  02bf3bc  stfs 2, 60(28)
  02bf3c0  lfs 2, 32(4)
  02bf3c4  <unknown>
  02bf3c8  fmuls 1, 1, 2
  02bf3cc  li 5, 72
  02bf3d0  li 6, 1
  02bf3d4  stfs 1, 64(28)
  02bf3d8  lfs 1, 36(4)
  02bf3dc  fmuls 1, 3, 1
  02bf3e0  stfs 1, 68(28)
  02bf3e4  <unknown>
  02bf3e8  vspltw 4, 4, 0
  02bf3ec  vmaddfp 2, 3, 4, 2
  02bf3f0  vctsxs 2, 2, 0
  02bf3f4  vspltw 2, 2, 0
  02bf3f8  stvewx 2, 5, 28
  02bf3fc  stw 7, 40(28)
  02bf400  stb 6, 32(31)
  02bf404  sth 8, 50(31)
  02bf408  b 0x2c09ec
  02bf40c  lis 3, 151
  02bf410  addic 3, 3, -16064
  02bf414  lbz 3, 5(3)
  02bf418  cmpwi 3, 0
  02bf41c  bt 2, 0x2c09ec
  02bf420  lis 30, 151
  02bf424  addic 30, 30, -25376
  02bf428  lwz 3, 4440(30)
  02bf42c  cmpwi 3, 5
  02bf430  bf 2, 0x2c09ec
  02bf434  li 3, 0
  02bf438  vspltisw 4, -1
  02bf43c  lis 4, 123
  02bf440  li 5, 32276
  02bf444  li 6, 44
  02bf448  stw 3, 92(29)
  02bf44c  lis 3, 44
  02bf450  vslw 4, 4, 4
  02bf454  <unknown>
  02bf458  addi 3, 3, -5380
  02bf45c  lis 4, 114
  02bf460  vcfsx 2, 2, 0
  02bf464  li 5, -3056
  02bf468  <unknown>
  02bf46c  vspltw 3, 3, 0
  02bf470  <unknown>
  02bf474  lfs 31, 44(3)
  02bf478  li 3, 88
  02bf47c  lfs 1, -3056(4)
  02bf480  vaddfp 2, 2, 3
  02bf484  vmaddfp 2, 5, 2, 4
  02bf488  vctsxs 2, 2, 0
  02bf48c  vspltw 2, 2, 0
  02bf490  stvewx 2, 3, 29
  02bf494  lbz 3, 49(31)
  02bf498  cmpwi 3, 0
  02bf49c  bt 2, 0x2bf4f0
  02bf4a0  lbz 3, 112(31)
  02bf4a4  rlwinm 3, 3, 0, 30, 30
  02bf4a8  cmpwi 3, 0
  02bf4ac  bt 2, 0x2bf4f0
  02bf4b0  lbz 3, 83(31)
  02bf4b4  cmpwi 3, 2
  02bf4b8  bt 2, 0x2bf4f0
  02bf4bc  lis 3, 44
  02bf4c0  addi 3, 3, -5380
  02bf4c4  li 4, 2
  02bf4c8  li 5, 0
  02bf4cc  lfs 2, 8(3)
  02bf4d0  ori 3, 31, 0
  02bf4d4  fmuls 1, 1, 2
  02bf4d8  fctiwz 1, 1
  02bf4dc  stfd 1, 448(1)
  02bf4e0  lwz 6, 452(1)
  02bf4e4  extsw 6, 6
  02bf4e8  bl 0xfddc0
  02bf4ec  nop
  02bf4f0  lwz 3, 72(29)
  02bf4f4  cmpwi 3, -1
  02bf4f8  bt 2, 0x2bf554
  02bf4fc  lwz 4, 64(29)
  02bf500  addic 3, 30, 128
  02bf504  extsw 4, 4
  02bf508  bl 0x110b70
  02bf50c  nop
  02bf510  lis 6, 164
  02bf514  li 4, 0
  02bf518  lwz 5, 72(29)
  02bf51c  subc 3, 4, 3
  02bf520  slwi 4, 5, 8
  02bf524  lwz 5, -28512(6)
  02bf528  cntlzw 3, 3
  02bf52c  li 6, 3
  02bf530  addc 4, 5, 4
  02bf534  sldi 3, 3, 58
  02bf538  li 5, 1
  02bf53c  sradi 3, 3, 63
  02bf540  subc 5, 5, 6
  02bf544  clrldi 4, 4, 32
  02bf548  and 3, 3, 5
  02bf54c  addc 3, 6, 3
  02bf550  stb 3, 188(4)
  02bf554  lwz 3, 4400(30)
  02bf558  cmpwi 3, 0
  02bf55c  bt 2, 0x2c09ec
  02bf560  lwz 3, 4440(30)
  02bf564  cmpwi 3, 5
  02bf568  bf 2, 0x2c09ec
  02bf56c  lfs 1, 128(30)
  02bf570  lfs 2, 16(31)
  02bf574  lfs 3, 132(30)
  02bf578  lis 3, 44
  02bf57c  lfs 4, 20(31)
  02bf580  fsubs 1, 1, 2
  02bf584  addi 3, 3, -5380
  02bf588  fsubs 2, 3, 4
  02bf58c  lis 4, 115
  02bf590  addic 4, 4, 22784
  02bf594  fabs 3, 1
  02bf598  fabs 5, 2
  02bf59c  stfs 1, 248(1)
  02bf5a0  stfs 2, 252(1)
  02bf5a4  fsubs 1, 3, 5
  02bf5a8  stfs 1, 256(1)
  02bf5ac  lwz 5, 248(1)
  02bf5b0  lfs 4, 0(3)
  02bf5b4  lfs 1, 248(1)
  02bf5b8  lwz 3, 252(1)
  02bf5bc  lfs 2, 252(1)
  02bf5c0  fabs 1, 1
  02bf5c4  lwz 6, 256(1)
  02bf5c8  rlwinm 3, 3, 3, 29, 29
  02bf5cc  fabs 6, 2
  02bf5d0  lfs 2, 256(1)
  02bf5d4  rlwimi 3, 6, 2, 30, 30
  02bf5d8  fsub 7, 2, 4
  02bf5dc  rlwimi 3, 5, 4, 28, 28
  02bf5e0  fsub 8, 2, 4
  02bf5e4  ori 5, 4, 0
  02bf5e8  rlwimi 5, 3, 2, 26, 28
  02bf5ec  slwi 3, 3, 2
  02bf5f0  clrldi 5, 5, 32
  02bf5f4  fsel 5, 7, 1, 5
  02bf5f8  lfsx 1, 4, 3
  02bf5fc  lfs 2, 4(5)
  02bf600  fsel 3, 8, 6, 3
  02bf604  fcmpu 0, 5, 4
  02bf608  bt 1, 0x2bf610
  02bf60c  b 0x2bf730
  02bf610  fsubs 6, 3, 5
  02bf614  fadds 3, 3, 5
  02bf618  addic 3, 1, 16
  02bf61c  li 7, 2
  02bf620  addic 5, 3, 348
  02bf624  addic 4, 3, 332
  02bf628  mtctr 7
  02bf62c  fdivs 3, 6, 3
  02bf630  fmuls 5, 3, 3
  02bf634  stfs 3, 360(1)
  02bf638  stfs 3, 352(1)
  02bf63c  stfs 3, 356(1)
  02bf640  stfs 3, 348(1)
  02bf644  lfs 7, 360(1)
  02bf648  lfs 8, 352(1)
  02bf64c  lfs 9, 356(1)
  02bf650  fmuls 6, 5, 5
  02bf654  fmuls 8, 8, 5
  02bf658  fmuls 7, 7, 6
  02bf65c  fmuls 3, 6, 6
  02bf660  fmuls 6, 9, 6
  02bf664  stfs 8, 352(1)
  02bf668  fmuls 5, 7, 5
  02bf66c  stfs 6, 356(1)
  02bf670  stfs 5, 360(1)
  02bf674  lfs 5, 332(3)
  02bf678  fmuls 5, 5, 3
  02bf67c  stfs 5, 348(3)
  02bf680  lfs 5, 4(4)
  02bf684  addic 4, 4, 8
  02bf688  fmuls 5, 5, 3
  02bf68c  addic 3, 3, 8
  02bf690  stfs 5, 4(5)
  02bf694  addic 5, 5, 8
  02bf698  bdnz 0x2bf674
  02bf69c  li 5, 4
  02bf6a0  ori 3, 1, 0
  02bf6a4  mtctr 5
  02bf6a8  lis 4, 115
  02bf6ac  addic 5, 3, 348
  02bf6b0  addic 4, 4, 22752
  02bf6b4  ori 6, 5, 0
  02bf6b8  lfs 3, 348(3)
  02bf6bc  lfs 5, 0(4)
  02bf6c0  fmuls 3, 3, 5
  02bf6c4  lfs 5, 4(4)
  02bf6c8  addic 4, 4, 8
  02bf6cc  stfs 3, 348(3)
  02bf6d0  lfs 3, 4(5)
  02bf6d4  addic 3, 3, 8
  02bf6d8  fmuls 3, 3, 5
  02bf6dc  stfs 3, 4(5)
  02bf6e0  addic 5, 5, 8
  02bf6e4  bdnz 0x2bf6b8
  02bf6e8  ori 3, 1, 0
  02bf6ec  mtctr 7
  02bf6f0  lfs 3, 348(3)
  02bf6f4  fadds 3, 4, 3
  02bf6f8  addic 3, 3, 16
  02bf6fc  lfs 4, 4(6)
  02bf700  lfs 5, 8(6)
  02bf704  lfs 6, 12(6)
  02bf708  addic 6, 6, 16
  02bf70c  fadds 3, 3, 4
  02bf710  fadds 4, 3, 5
  02bf714  fadds 4, 4, 6
  02bf718  bdnz 0x2bf6f0
  02bf71c  lis 3, 44
  02bf720  addi 3, 3, -5380
  02bf724  lfs 3, 4(3)
  02bf728  fadds 4, 4, 3
  02bf72c  fmadds 4, 4, 1, 2
  02bf730  lis 3, 44
  02bf734  lis 4, 114
  02bf738  fmr 1, 4
  02bf73c  addi 27, 3, -5380
  02bf740  lis 3, 114
  02bf744  lis 28, 268
  02bf748  addic 28, 28, 20820
  02bf74c  lfs 3, 36(27)
  02bf750  lfs 2, 28(27)
  02bf754  lfs 6, 32(27)
  02bf758  addic 5, 28, 20
  02bf75c  lfs 5, -3052(3)
  02bf760  lfs 7, -3048(4)
  02bf764  ori 3, 31, 0
  02bf768  fmuls 4, 5, 3
  02bf76c  fmuls 2, 7, 2
  02bf770  fmuls 3, 7, 6
  02bf774  bl 0xff2e8
  02bf778  nop
  02bf77c  lis 3, 164
  02bf780  lwz 4, 72(29)
  02bf784  slwi 4, 4, 8
  02bf788  lwz 3, -28512(3)
  02bf78c  lfs 1, 128(30)
  02bf790  addc 3, 3, 4
  02bf794  clrldi 3, 3, 32
  02bf798  lfs 2, 16(3)
  02bf79c  stfs 2, 128(1)
  02bf7a0  lfs 2, 20(3)
  02bf7a4  stfs 2, 132(1)
  02bf7a8  lfs 2, 24(3)
  02bf7ac  fadds 3, 2, 31
  02bf7b0  stfs 2, 136(1)
  02bf7b4  lfs 2, 28(3)
  02bf7b8  lfs 4, 132(30)
  02bf7bc  stfs 2, 140(1)
  02bf7c0  addic 3, 30, 128
  02bf7c4  stfs 1, 144(1)
  02bf7c8  lfs 1, 136(30)
  02bf7cc  stfs 4, 148(1)
  02bf7d0  lfs 2, 140(30)
  02bf7d4  stfs 1, 152(1)
  02bf7d8  stfs 2, 156(1)
  02bf7dc  stfs 3, 136(1)
  02bf7e0  lfs 2, 48(27)
  02bf7e4  fadds 1, 1, 2
  02bf7e8  stfs 1, 152(1)
  02bf7ec  lwz 4, 64(29)
  02bf7f0  extsw 4, 4
  02bf7f4  bl 0x110b70
  02bf7f8  nop
  02bf7fc  cmpwi 3, 0
  02bf800  bt 2, 0x2c09ec
  02bf804  addic 3, 1, 128
  02bf808  addic 4, 1, 144
  02bf80c  li 5, 0
  02bf810  ori 6, 31, 0
  02bf814  li 7, 0
  02bf818  bl 0x57820
  02bf81c  nop
  02bf820  cmpwi 3, 0
  02bf824  bt 2, 0x2bf840
  02bf828  lis 3, 161
  02bf82c  lwz 4, 8320(30)
  02bf830  addic 3, 3, 2368
  02bf834  lwz 3, 24(3)
  02bf838  cmpw 3, 4
  02bf83c  bf 2, 0x2c09ec
  02bf840  ori 3, 31, 0
  02bf844  ori 4, 29, 0
  02bf848  bl 0x2bc878
  02bf84c  lwz 30, 4400(30)
  02bf850  cmpwi 30, 0
  02bf854  bt 2, 0x2bf880
  02bf858  lhz 3, 166(30)
  02bf85c  cmpwi 3, 433
  02bf860  bf 2, 0x2bf880
  02bf864  lbz 3, 32(30)
  02bf868  cmpwi 1, 3, 253
  02bf86c  cmpwi 3, 254
  02bf870  cror 2, 2, 6
  02bf874  bt 2, 0x2bf880
  02bf878  li 3, 1
  02bf87c  stb 3, 32(30)
  02bf880  li 3, 31
  02bf884  stw 31, 80(28)
  02bf888  li 4, 0
  02bf88c  bl 0xb72b0
  02bf890  nop
  02bf894  lis 3, 44
  02bf898  lis 4, 114
  02bf89c  addi 3, 3, -5380
  02bf8a0  lfs 1, 52(3)
  02bf8a4  lfs 2, -3056(4)
  02bf8a8  li 3, 0
  02bf8ac  fmuls 1, 2, 1
  02bf8b0  li 4, 0
  02bf8b4  fctidz 1, 1
  02bf8b8  fcfid 1, 1
  02bf8bc  frsp 1, 1
  02bf8c0  bl 0x85300
  02bf8c4  nop
  02bf8c8  lwz 28, 72(29)
  02bf8cc  cmpwi 28, -1
  02bf8d0  bt 2, 0x2bf8fc
  02bf8d4  lis 3, 164
  02bf8d8  slwi 4, 28, 8
  02bf8dc  li 6, 5
  02bf8e0  li 5, 2
  02bf8e4  lwz 3, -28512(3)
  02bf8e8  addc 3, 3, 4
  02bf8ec  clrldi 3, 3, 32
  02bf8f0  stb 6, 188(3)
  02bf8f4  stb 5, 32(31)
  02bf8f8  b 0x2c09ec
  02bf8fc  li 3, 255
  02bf900  lbz 4, 83(31)
  02bf904  cmpwi 4, 0
  02bf908  sth 3, 50(31)
  02bf90c  bt 2, 0x2bf94c
  02bf910  lis 3, 44
  02bf914  lis 4, 114
  02bf918  addi 3, 3, -5380
  02bf91c  li 5, 0
  02bf920  lfs 1, 8(3)
  02bf924  lfs 2, -3056(4)
  02bf928  ori 3, 31, 0
  02bf92c  fmuls 1, 2, 1
  02bf930  li 4, 0
  02bf934  fctiwz 1, 1
  02bf938  stfd 1, 448(1)
  02bf93c  lwz 6, 452(1)
  02bf940  extsw 6, 6
  02bf944  bl 0xfddc0
  02bf948  nop
  02bf94c  li 3, 3
  02bf950  stb 3, 32(31)
  02bf954  b 0x2c09ec
  02bf958  lwz 3, 72(29)
  02bf95c  cmpwi 3, -1
  02bf960  bt 2, 0x2bf9e8
  02bf964  lis 4, 164
  02bf968  slwi 3, 3, 8
  02bf96c  lwz 4, -28512(4)
  02bf970  addc 3, 4, 3
  02bf974  clrldi 3, 3, 32
  02bf978  lbz 3, 32(3)
  02bf97c  cmpwi 3, 5
  02bf980  bf 2, 0x2c09ec
  02bf984  lbz 3, 83(31)
  02bf988  cmpwi 3, 0
  02bf98c  bt 2, 0x2bf9cc
  02bf990  lis 3, 44
  02bf994  lis 4, 114
  02bf998  addi 3, 3, -5380
  02bf99c  li 5, 0
  02bf9a0  lfs 1, 8(3)
  02bf9a4  lfs 2, -3056(4)
  02bf9a8  ori 3, 31, 0
  02bf9ac  fmuls 1, 2, 1
  02bf9b0  li 4, 0
  02bf9b4  fctiwz 1, 1
  02bf9b8  stfd 1, 448(1)
  02bf9bc  lwz 6, 452(1)
  02bf9c0  extsw 6, 6
  02bf9c4  bl 0xfddc0
  02bf9c8  nop
  02bf9cc  li 3, 3
  02bf9d0  li 4, 0
  02bf9d4  li 5, 255
  02bf9d8  stb 3, 32(31)
  02bf9dc  sth 4, 82(29)
  02bf9e0  sth 5, 50(31)
  02bf9e4  b 0x2c09ec
  02bf9e8  li 3, 0
  02bf9ec  li 4, 255
  02bf9f0  sth 3, 82(29)
  02bf9f4  lbz 3, 83(31)
  02bf9f8  sth 4, 50(31)
  02bf9fc  cmpwi 3, 0
  02bfa00  bt 2, 0x2bfa40
  02bfa04  lis 3, 44
  02bfa08  lis 4, 114
  02bfa0c  addi 3, 3, -5380
  02bfa10  li 5, 0
  02bfa14  lfs 1, 56(3)
  02bfa18  lfs 2, -3056(4)
  02bfa1c  ori 3, 31, 0
  02bfa20  li 4, 0
  02bfa24  fmuls 1, 2, 1
  02bfa28  fctiwz 1, 1
  02bfa2c  stfd 1, 448(1)
  02bfa30  lwz 6, 452(1)
  02bfa34  extsw 6, 6
  02bfa38  bl 0xfddc0
  02bfa3c  nop
  02bfa40  lwz 3, 100(29)
  02bfa44  cmpwi 3, -1
  02bfa48  bf 2, 0x2bfa64
  02bfa4c  li 3, 1
  02bfa50  li 4, 4
  02bfa54  ori 5, 31, 0
  02bfa58  bl 0x15d12c
  02bfa5c  nop
  02bfa60  stw 3, 100(29)
  02bfa64  li 3, 3
  02bfa68  stb 3, 32(31)
  02bfa6c  b 0x2c09ec
  02bfa70  lwz 4, 100(29)
  02bfa74  lis 3, 150
  02bfa78  sldi 5, 4, 7
  02bfa7c  sldi 4, 4, 4
  02bfa80  addic 3, 3, 14176
  02bfa84  subc 4, 5, 4
  02bfa88  extsw 4, 4
  02bfa8c  addc 3, 3, 4
  02bfa90  lwz 4, 136(3)
  02bfa94  cmpw 4, 31
  02bfa98  bf 2, 0x2bfaa8
  02bfa9c  lbz 3, 116(3)
  02bfaa0  cmpwi 3, 0
  02bfaa4  bf 2, 0x2bfac8
  02bfaa8  li 6, -1
  02bfaac  li 3, 1
  02bfab0  li 4, 4
  02bfab4  ori 5, 31, 0
  02bfab8  stw 6, 100(29)
  02bfabc  bl 0x15d12c
  02bfac0  nop
  02bfac4  stw 3, 100(29)
  02bfac8  lfs 1, 20(31)
  02bfacc  lfs 2, 52(29)
  02bfad0  lfs 3, 16(31)
  02bfad4  fsubs 1, 1, 2
  02bfad8  lfs 2, 48(29)
  02bfadc  fsubs 2, 3, 2
  02bfae0  lis 3, 44
  02bfae4  addi 3, 3, -5380
  02bfae8  fmuls 1, 1, 1
  02bfaec  fmadds 1, 2, 2, 1
  02bfaf0  lfs 2, 60(3)
  02bfaf4  fsqrts 1, 1
  02bfaf8  fcmpu 0, 1, 2
  02bfafc  cror 6, 0, 2
  02bfb00  bt 6, 0x2bfb58
  02bfb04  lhz 3, 82(29)
  02bfb08  cmpwi 3, 0
  02bfb0c  bf 2, 0x2bfb58
  02bfb10  lis 3, 268
  02bfb14  lis 4, 16179
  02bfb18  addic 5, 3, 20820
  02bfb1c  ori 6, 4, 13107
  02bfb20  ori 4, 29, 0
  02bfb24  ori 3, 31, 0
  02bfb28  stw 6, 4(5)
  02bfb2c  bl 0x2bc960
  02bfb30  ori 4, 29, 0
  02bfb34  ori 3, 31, 0
  02bfb38  bl 0x2bdc98
  02bfb3c  lhz 4, 80(29)
  02bfb40  li 3, 0
  02bfb44  extsh 4, 4
  02bfb48  cmpwi 4, 20
  02bfb4c  bf 1, 0x2bfd94
  02bfb50  li 3, 2
  02bfb54  b 0x2bfd94
  02bfb58  ori 3, 31, 0
  02bfb5c  ori 4, 29, 0
  02bfb60  bl 0x2bc878
  02bfb64  lfs 1, 0(29)
  02bfb68  lfs 2, 16(31)
  02bfb6c  lfs 3, 4(29)
  02bfb70  lis 3, 44
  02bfb74  lfs 4, 20(31)
  02bfb78  fsubs 1, 1, 2
  02bfb7c  addi 3, 3, -5380
  02bfb80  fsubs 2, 3, 4
  02bfb84  lis 4, 115
  02bfb88  addic 4, 4, 22784
  02bfb8c  fabs 3, 1
  02bfb90  fabs 5, 2
  02bfb94  stfs 1, 236(1)
  02bfb98  stfs 2, 240(1)
  02bfb9c  fsubs 1, 3, 5
  02bfba0  stfs 1, 244(1)
  02bfba4  lwz 5, 236(1)
  02bfba8  lfs 4, 0(3)
  02bfbac  lfs 1, 236(1)
  02bfbb0  lwz 3, 240(1)
  02bfbb4  lfs 2, 240(1)
  02bfbb8  fabs 1, 1
  02bfbbc  lwz 6, 244(1)
  02bfbc0  rlwinm 3, 3, 3, 29, 29
  02bfbc4  fabs 6, 2
  02bfbc8  lfs 2, 244(1)
  02bfbcc  rlwimi 3, 6, 2, 30, 30
  02bfbd0  fsub 7, 2, 4
  02bfbd4  rlwimi 3, 5, 4, 28, 28
  02bfbd8  fsub 8, 2, 4
  02bfbdc  ori 5, 4, 0
  02bfbe0  rlwimi 5, 3, 2, 26, 28
  02bfbe4  slwi 3, 3, 2
  02bfbe8  clrldi 5, 5, 32
  02bfbec  fsel 5, 7, 1, 5
  02bfbf0  lfsx 1, 4, 3
  02bfbf4  lfs 2, 4(5)
  02bfbf8  fsel 3, 8, 6, 3
  02bfbfc  fcmpu 0, 5, 4
  02bfc00  bt 1, 0x2bfc08
  02bfc04  b 0x2bfd28
  02bfc08  fsubs 6, 3, 5
  02bfc0c  fadds 3, 3, 5
  02bfc10  addic 3, 1, 16
  02bfc14  li 7, 2
  02bfc18  addic 5, 3, 316
  02bfc1c  addic 4, 3, 300
  02bfc20  mtctr 7
  02bfc24  fdivs 3, 6, 3
  02bfc28  fmuls 5, 3, 3
  02bfc2c  stfs 3, 328(1)
  02bfc30  stfs 3, 320(1)
  02bfc34  stfs 3, 324(1)
  02bfc38  stfs 3, 316(1)
  02bfc3c  lfs 7, 328(1)
  02bfc40  lfs 8, 320(1)
  02bfc44  lfs 9, 324(1)
  02bfc48  fmuls 6, 5, 5
  02bfc4c  fmuls 8, 8, 5
  02bfc50  fmuls 7, 7, 6
  02bfc54  fmuls 3, 6, 6
  02bfc58  fmuls 6, 9, 6
  02bfc5c  stfs 8, 320(1)
  02bfc60  fmuls 5, 7, 5
  02bfc64  stfs 6, 324(1)
  02bfc68  stfs 5, 328(1)
  02bfc6c  lfs 5, 300(3)
  02bfc70  fmuls 5, 5, 3
  02bfc74  stfs 5, 316(3)
  02bfc78  lfs 5, 4(4)
  02bfc7c  addic 4, 4, 8
  02bfc80  fmuls 5, 5, 3
  02bfc84  addic 3, 3, 8
  02bfc88  stfs 5, 4(5)
  02bfc8c  addic 5, 5, 8
  02bfc90  bdnz 0x2bfc6c
  02bfc94  li 5, 4
  02bfc98  ori 3, 1, 0
  02bfc9c  mtctr 5
  02bfca0  lis 4, 115
  02bfca4  addic 5, 3, 316
  02bfca8  addic 4, 4, 22752
  02bfcac  ori 6, 5, 0
  02bfcb0  lfs 3, 316(3)
  02bfcb4  lfs 5, 0(4)
  02bfcb8  fmuls 3, 3, 5
  02bfcbc  lfs 5, 4(4)
  02bfcc0  addic 4, 4, 8
  02bfcc4  stfs 3, 316(3)
  02bfcc8  lfs 3, 4(5)
  02bfccc  addic 3, 3, 8
  02bfcd0  fmuls 3, 3, 5
  02bfcd4  stfs 3, 4(5)
  02bfcd8  addic 5, 5, 8
  02bfcdc  bdnz 0x2bfcb0
  02bfce0  ori 3, 1, 0
  02bfce4  mtctr 7
  02bfce8  lfs 3, 316(3)
  02bfcec  fadds 3, 4, 3
  02bfcf0  addic 3, 3, 16
  02bfcf4  lfs 4, 4(6)
  02bfcf8  lfs 5, 8(6)
  02bfcfc  lfs 6, 12(6)
  02bfd00  addic 6, 6, 16
  02bfd04  fadds 3, 3, 4
  02bfd08  fadds 4, 3, 5
  02bfd0c  fadds 4, 4, 6
  02bfd10  bdnz 0x2bfce8
  02bfd14  lis 3, 44
  02bfd18  addi 3, 3, -5380
  02bfd1c  lfs 3, 4(3)
  02bfd20  fadds 4, 4, 3
  02bfd24  fmadds 4, 4, 1, 2
  02bfd28  lis 3, 44
  02bfd2c  lis 4, 114
  02bfd30  fmr 1, 4
  02bfd34  addi 3, 3, -5380
  02bfd38  lis 6, 114
  02bfd3c  lis 5, 268
  02bfd40  addic 30, 5, 20820
  02bfd44  lfs 3, 36(3)
  02bfd48  lfs 2, 28(3)
  02bfd4c  lfs 6, 32(3)
  02bfd50  addic 5, 30, 20
  02bfd54  lfs 5, -3052(4)
  02bfd58  ori 3, 31, 0
  02bfd5c  lfs 7, -3048(6)
  02bfd60  fmuls 4, 5, 3
  02bfd64  fmuls 2, 7, 2
  02bfd68  fmuls 3, 7, 6
  02bfd6c  bl 0xff2e8
  02bfd70  nop
  02bfd74  li 5, 0
  02bfd78  addic 6, 29, 16
  02bfd7c  ori 3, 31, 0
  02bfd80  ori 4, 30, 0
  02bfd84  stw 5, 24(29)
  02bfd88  ori 5, 29, 0
  02bfd8c  bl 0x101cc0
  02bfd90  nop
  02bfd94  rlwinm 3, 3, 0, 29, 30
  02bfd98  cmpwi 3, 0
  02bfd9c  bf 2, 0x2bfdec
  02bfda0  lfs 1, 20(31)
  02bfda4  lfs 2, 4(29)
  02bfda8  lfs 3, 16(31)
  02bfdac  fsubs 1, 1, 2
  02bfdb0  lfs 2, 0(29)
  02bfdb4  fsubs 2, 3, 2
  02bfdb8  lfs 3, 24(31)
  02bfdbc  lfs 4, 8(29)
  02bfdc0  fsubs 3, 3, 4
  02bfdc4  fmuls 1, 1, 1
  02bfdc8  lis 3, 44
  02bfdcc  addi 3, 3, -5380
  02bfdd0  fmadds 1, 2, 2, 1
  02bfdd4  lfs 2, 64(3)
  02bfdd8  fmadds 1, 3, 3, 1
  02bfddc  fsqrts 1, 1
  02bfde0  fcmpu 0, 1, 2
  02bfde4  cror 6, 1, 2
  02bfde8  bt 6, 0x2bfeec
  02bfdec  lbz 3, 83(31)
  02bfdf0  cmpwi 3, 2
  02bfdf4  bt 2, 0x2bfe34
  02bfdf8  lis 3, 44
  02bfdfc  lis 4, 114
  02bfe00  addi 3, 3, -5380
  02bfe04  li 5, 0
  02bfe08  lfs 1, 8(3)
  02bfe0c  lfs 2, -3056(4)
  02bfe10  ori 3, 31, 0
  02bfe14  li 4, 2
  02bfe18  fmuls 1, 2, 1
  02bfe1c  fctiwz 1, 1
  02bfe20  stfd 1, 448(1)
  02bfe24  lwz 6, 452(1)
  02bfe28  extsw 6, 6
  02bfe2c  bl 0xfddc0
  02bfe30  nop
  02bfe34  li 3, 0
  02bfe38  vspltisw 3, -1
  02bfe3c  li 5, 17
  02bfe40  li 7, 18
  02bfe44  li 4, 19
  02bfe48  li 6, 21
  02bfe4c  stb 3, 16(29)
  02bfe50  li 8, 22
  02bfe54  stbx 3, 29, 5
  02bfe58  li 9, 23
  02bfe5c  stbx 3, 29, 7
  02bfe60  li 5, 25
  02bfe64  stbx 3, 29, 4
  02bfe68  li 7, 26
  02bfe6c  stb 3, 20(29)
  02bfe70  li 4, 27
  02bfe74  stbx 3, 29, 6
  02bfe78  stbx 3, 29, 8
  02bfe7c  stbx 3, 29, 9
  02bfe80  li 6, 29
  02bfe84  stb 3, 24(29)
  02bfe88  li 8, 30
  02bfe8c  stbx 3, 29, 5
  02bfe90  li 9, 31
  02bfe94  lis 5, 44
  02bfe98  stbx 3, 29, 7
  02bfe9c  stbx 3, 29, 4
  02bfea0  li 7, 4
  02bfea4  addi 4, 5, -5380
  02bfea8  stb 3, 28(29)
  02bfeac  li 5, 68
  02bfeb0  stbx 3, 29, 6
  02bfeb4  stbx 3, 29, 8
  02bfeb8  lis 6, 114
  02bfebc  stbx 3, 29, 9
  02bfec0  li 8, -3056
  02bfec4  stb 7, 32(31)
  02bfec8  li 3, 82
  02bfecc  vslw 3, 3, 3
  02bfed0  <unknown>
  02bfed4  vspltw 2, 2, 0
  02bfed8  <unknown>
  02bfedc  vmaddfp 2, 4, 2, 3
  02bfee0  vctsxs 2, 2, 0
  02bfee4  vsplth 2, 2, 1
  02bfee8  stvehx 2, 3, 29
  02bfeec  lbz 3, 112(31)
  02bfef0  rlwinm 3, 3, 0, 30, 30
  02bfef4  cmpwi 3, 0
  02bfef8  bt 2, 0x2c09ec
  02bfefc  lbz 3, 83(31)
  02bff00  cmpwi 3, 1
  02bff04  bt 2, 0x2bff6c
  02bff08  li 3, 7
  02bff0c  li 4, 12
  02bff10  bl 0xfe484
  02bff14  nop
  02bff18  extsw 3, 3
  02bff1c  lis 4, 114
  02bff20  std 3, 448(1)
  02bff24  lis 3, 44
  02bff28  addi 3, 3, -5380
  02bff2c  li 5, 0
  02bff30  lfs 1, 44(3)
  02bff34  lfs 2, -3056(4)
  02bff38  lfd 3, 448(1)
  02bff3c  fcfid 3, 3
  02bff40  ori 3, 31, 0
  02bff44  li 4, 1
  02bff48  frsp 3, 3
  02bff4c  fadds 1, 3, 1
  02bff50  fmuls 1, 2, 1
  02bff54  fctiwz 1, 1
  02bff58  stfd 1, 448(1)
  02bff5c  lwz 6, 452(1)
  02bff60  extsw 6, 6
  02bff64  bl 0xfddc0
  02bff68  nop
  02bff6c  lis 3, 44
  02bff70  addi 3, 3, -5380
  02bff74  lfs 1, 72(3)
  02bff78  lfs 2, 76(3)
  02bff7c  bl 0xfcbe8
  02bff80  nop
  02bff84  stfs 1, 88(31)
  02bff88  b 0x2c09ec
  02bff8c  lwz 4, 100(29)
  02bff90  lis 3, 150
  02bff94  sldi 5, 4, 7
  02bff98  sldi 4, 4, 4
  02bff9c  addic 3, 3, 14176
  02bffa0  subc 4, 5, 4
  02bffa4  extsw 4, 4
  02bffa8  addc 3, 3, 4
  02bffac  lwz 4, 136(3)
  02bffb0  cmpw 4, 31
  02bffb4  bf 2, 0x2bffc4
  02bffb8  lbz 3, 116(3)
  02bffbc  cmpwi 3, 0
  02bffc0  bf 2, 0x2bffe4
  02bffc4  li 6, -1
  02bffc8  li 3, 1
  02bffcc  li 4, 4
  02bffd0  ori 5, 31, 0
  02bffd4  stw 6, 100(29)
  02bffd8  bl 0x15d12c
  02bffdc  nop
  02bffe0  stw 3, 100(29)
  02bffe4  li 3, 0
  02bffe8  li 4, 1
  02bffec  bl 0xb72b0
  02bfff0  nop
  02bfff4  lhz 3, 52(31)
  02bfff8  li 4, -66
  02bfffc  and 3, 3, 4
  02c0000  sth 3, 52(31)
  02c0004  lwz 3, 72(29)
  02c0008  cmpwi 3, -1
  02c000c  bt 2, 0x2c0034
  02c0010  lis 4, 164
  02c0014  slwi 3, 3, 8
  02c0018  li 5, -66
  02c001c  lwz 4, -28512(4)
  02c0020  addc 3, 4, 3
  02c0024  clrldi 3, 3, 32
  02c0028  lhz 4, 52(3)
  02c002c  and 4, 4, 5
  02c0030  sth 4, 52(3)
  02c0034  li 3, 5
  02c0038  stb 3, 32(31)
  02c003c  b 0x2c09ec
  02c0040  lwz 3, 100(29)
  02c0044  lis 30, 150
  02c0048  sldi 4, 3, 7
  02c004c  sldi 3, 3, 4
  02c0050  addic 30, 30, 14176
  02c0054  subc 3, 4, 3
  02c0058  extsw 3, 3
  02c005c  addc 3, 30, 3
  02c0060  lwz 4, 136(3)
  02c0064  cmpw 4, 31
  02c0068  bf 2, 0x2c0078
  02c006c  lbz 3, 116(3)
  02c0070  cmpwi 3, 0
  02c0074  bf 2, 0x2c0098
  02c0078  li 6, -1
  02c007c  li 3, 1
  02c0080  li 4, 4
  02c0084  ori 5, 31, 0
  02c0088  stw 6, 100(29)
  02c008c  bl 0x15d12c
  02c0090  nop
  02c0094  stw 3, 100(29)
  02c0098  lis 3, 44
  02c009c  lis 4, 114
  02c00a0  addi 3, 3, -5380
  02c00a4  lfs 2, 56(3)
  02c00a8  lfs 1, -3056(4)
  02c00ac  lhz 3, 82(29)
  02c00b0  fmuls 2, 1, 2
  02c00b4  extsh 3, 3
  02c00b8  fctiwz 2, 2
  02c00bc  stfd 2, 448(1)
  02c00c0  lwz 4, 452(1)
  02c00c4  cmpw 1, 3, 4
  02c00c8  bt 6, 0x2c00e4
  02c00cc  lis 3, 123
  02c00d0  lwz 3, 32280(3)
  02c00d4  lwz 4, 92(29)
  02c00d8  addic 3, 3, -5
  02c00dc  cmpw 4, 3
  02c00e0  bf 1, 0x2c0128
  02c00e4  lbz 3, 83(31)
  02c00e8  cmpwi 3, 2
  02c00ec  bt 2, 0x2c01c8
  02c00f0  lis 3, 44
  02c00f4  addi 3, 3, -5380
  02c00f8  li 4, 2
  02c00fc  li 5, 0
  02c0100  lfs 2, 80(3)
  02c0104  ori 3, 31, 0
  02c0108  fmuls 1, 1, 2
  02c010c  fctiwz 1, 1
  02c0110  stfd 1, 448(1)
  02c0114  lwz 6, 452(1)
  02c0118  extsw 6, 6
  02c011c  bl 0xfddc0
  02c0120  nop
  02c0124  b 0x2c01c8
  02c0128  bf 5, 0x2c01c8
  02c012c  lbz 3, 112(31)
  02c0130  rlwinm 3, 3, 0, 30, 30
  02c0134  cmpwi 3, 0
  02c0138  bt 2, 0x2c01c8
  02c013c  lbz 3, 83(31)
  02c0140  cmpwi 3, 1
  02c0144  bt 2, 0x2c01ac
  02c0148  li 3, 7
  02c014c  li 4, 12
  02c0150  bl 0xfe484
  02c0154  nop
  02c0158  extsw 3, 3
  02c015c  lis 4, 114
  02c0160  std 3, 448(1)
  02c0164  lis 3, 44
  02c0168  addi 3, 3, -5380
  02c016c  li 5, 0
  02c0170  lfs 1, 44(3)
  02c0174  lfs 2, -3056(4)
  02c0178  lfd 3, 448(1)
  02c017c  fcfid 3, 3
  02c0180  ori 3, 31, 0
  02c0184  li 4, 1
  02c0188  frsp 3, 3
  02c018c  fadds 1, 3, 1
  02c0190  fmuls 1, 2, 1
  02c0194  fctiwz 1, 1
  02c0198  stfd 1, 448(1)
  02c019c  lwz 6, 452(1)
  02c01a0  extsw 6, 6
  02c01a4  bl 0xfddc0
  02c01a8  nop
  02c01ac  lis 3, 44
  02c01b0  addi 3, 3, -5380
  02c01b4  lfs 1, 72(3)
  02c01b8  lfs 2, 76(3)
  02c01bc  bl 0xfcbe8
  02c01c0  nop
  02c01c4  stfs 1, 88(31)
  02c01c8  lis 3, 151
  02c01cc  addic 3, 3, -25376
  02c01d0  lwz 4, 4400(3)
  02c01d4  cmpwi 4, 0
  02c01d8  bt 2, 0x2c0264
  02c01dc  lwz 4, 4440(3)
  02c01e0  cmpwi 4, 5
  02c01e4  bf 2, 0x2c0264
  02c01e8  lwz 4, 8332(3)
  02c01ec  cmpwi 1, 4, 20
  02c01f0  cmpwi 4, 22
  02c01f4  cror 2, 2, 6
  02c01f8  bt 2, 0x2c0264
  02c01fc  lbz 3, 8356(3)
  02c0200  cmpwi 3, 0
  02c0204  bf 2, 0x2c0264
  02c0208  lis 3, 149
  02c020c  addic 3, 3, 5056
  02c0210  lwz 3, 384(3)
  02c0214  lhz 3, 134(3)
  02c0218  cmpwi 3, 20
  02c021c  bt 2, 0x2c0264
  02c0220  addic 3, 29, 88
  02c0224  bl 0x4fff60
  02c0228  nop
  02c022c  cmpwi 3, 0
  02c0230  bf 2, 0x2c0264
  02c0234  lis 3, 123
  02c0238  lwz 4, 92(29)
  02c023c  lwz 3, 32280(3)
  02c0240  cmpw 4, 3
  02c0244  bf 0, 0x2c0264
  02c0248  ori 3, 31, 0
  02c024c  ori 4, 29, 0
  02c0250  bl 0x2bc960
  02c0254  ori 3, 31, 0
  02c0258  ori 4, 29, 0
  02c025c  bl 0x2bdc98
  02c0260  b 0x2c0374
  02c0264  li 3, 0
  02c0268  li 5, 17
  02c026c  li 7, 18
  02c0270  li 4, 19
  02c0274  li 6, 21
  02c0278  stb 3, 16(29)
  02c027c  li 8, 22
  02c0280  stbx 3, 29, 5
  02c0284  li 9, 23
  02c0288  stbx 3, 29, 7
  02c028c  stbx 3, 29, 4
  02c0290  li 5, 25
  02c0294  stb 3, 20(29)
  02c0298  li 7, 26
  02c029c  stbx 3, 29, 6
  02c02a0  li 4, 27
  02c02a4  stbx 3, 29, 8
  02c02a8  li 6, 29
  02c02ac  stbx 3, 29, 9
  02c02b0  li 8, 30
  02c02b4  stb 3, 24(29)
  02c02b8  li 9, 31
  02c02bc  stbx 3, 29, 5
  02c02c0  stbx 3, 29, 7
  02c02c4  lis 5, 123
  02c02c8  stbx 3, 29, 4
  02c02cc  stb 3, 28(29)
  02c02d0  stbx 3, 29, 6
  02c02d4  stbx 3, 29, 8
  02c02d8  stbx 3, 29, 9
  02c02dc  lwz 4, 32288(5)
  02c02e0  lwz 3, 100(29)
  02c02e4  sth 4, 82(29)
  02c02e8  cmpwi 3, -1
  02c02ec  bt 2, 0x2c0328
  02c02f0  sldi 4, 3, 7
  02c02f4  sldi 5, 3, 4
  02c02f8  subc 4, 4, 5
  02c02fc  extsw 4, 4
  02c0300  addc 30, 30, 4
  02c0304  lwz 4, 136(30)
  02c0308  cmpw 4, 31
  02c030c  bf 2, 0x2c0328
  02c0310  lbz 4, 116(30)
  02c0314  cmpwi 4, 0
  02c0318  bt 2, 0x2c0328
  02c031c  extsw 3, 3
  02c0320  bl 0x15cdb0
  02c0324  nop
  02c0328  li 6, -1
  02c032c  li 3, 2
  02c0330  li 4, 0
  02c0334  ori 5, 31, 0
  02c0338  stw 6, 100(29)
  02c033c  bl 0x15d12c
  02c0340  nop
  02c0344  li 3, 6
  02c0348  stb 3, 32(31)
  02c034c  lwz 3, 72(29)
  02c0350  cmpwi 3, -1
  02c0354  bt 2, 0x2c0374
  02c0358  lis 4, 164
  02c035c  slwi 3, 3, 8
  02c0360  li 5, 5
  02c0364  lwz 4, -28512(4)
  02c0368  addc 3, 4, 3
  02c036c  clrldi 3, 3, 32
  02c0370  stb 5, 188(3)
  02c0374  ori 3, 31, 0
  02c0378  ori 4, 29, 0
  02c037c  bl 0x2bd110
  02c0380  b 0x2c09ec
  02c0384  lwz 3, 100(29)
  02c0388  cmpwi 3, -1
  02c038c  bt 2, 0x2c03d0
  02c0390  sldi 4, 3, 7
  02c0394  sldi 6, 3, 4
  02c0398  lis 5, 150
  02c039c  subc 4, 4, 6
  02c03a0  addic 5, 5, 14176
  02c03a4  extsw 4, 4
  02c03a8  addc 4, 5, 4
  02c03ac  lwz 5, 136(4)
  02c03b0  cmpw 5, 31
  02c03b4  bf 2, 0x2c03d0
  02c03b8  lbz 4, 116(4)
  02c03bc  cmpwi 4, 0
  02c03c0  bt 2, 0x2c03d0
  02c03c4  extsw 3, 3
  02c03c8  bl 0x15cdb0
  02c03cc  nop
  02c03d0  li 4, -1
  02c03d4  addic 3, 29, 82
  02c03d8  stw 4, 100(29)
  02c03dc  bl 0x4fffb4
  02c03e0  nop
  02c03e4  cmpwi 3, 0
  02c03e8  bt 2, 0x2c04c0
  02c03ec  li 3, 128
  02c03f0  li 4, 0
  02c03f4  li 6, 18
  02c03f8  li 5, 19
  02c03fc  stb 3, 35(31)
  02c0400  lfs 1, 48(29)
  02c0404  li 3, 17
  02c0408  li 7, 21
  02c040c  stfs 1, 16(31)
  02c0410  lfs 1, 52(29)
  02c0414  li 8, 22
  02c0418  li 9, 27
  02c041c  stfs 1, 20(31)
  02c0420  lfs 1, 56(29)
  02c0424  stfs 1, 24(31)
  02c0428  lfs 1, 60(29)
  02c042c  stfs 1, 28(31)
  02c0430  lfs 1, 48(29)
  02c0434  lfs 2, 52(29)
  02c0438  stfs 1, 0(29)
  02c043c  lfs 1, 56(29)
  02c0440  stfs 2, 4(29)
  02c0444  lfs 2, 60(29)
  02c0448  stfs 1, 8(29)
  02c044c  stfs 2, 12(29)
  02c0450  stb 4, 16(29)
  02c0454  stbx 4, 29, 3
  02c0458  li 3, 23
  02c045c  stbx 4, 29, 6
  02c0460  stbx 4, 29, 5
  02c0464  li 6, 25
  02c0468  stb 4, 20(29)
  02c046c  li 5, 26
  02c0470  stbx 4, 29, 7
  02c0474  stbx 4, 29, 8
  02c0478  stbx 4, 29, 3
  02c047c  li 7, 29
  02c0480  stb 4, 24(29)
  02c0484  li 8, 30
  02c0488  stbx 4, 29, 6
  02c048c  li 3, 31
  02c0490  stbx 4, 29, 5
  02c0494  stbx 4, 29, 9
  02c0498  stb 4, 28(29)
  02c049c  li 5, 7
  02c04a0  stbx 4, 29, 7
  02c04a4  stbx 4, 29, 8
  02c04a8  stbx 4, 29, 3
  02c04ac  lhz 3, 52(31)
  02c04b0  stb 5, 32(31)
  02c04b4  rlwimi 3, 4, 0, 22, 22
  02c04b8  sth 3, 52(31)
  02c04bc  b 0x2c09ec
  02c04c0  li 4, 0
  02c04c4  lis 5, 123
  02c04c8  addic 30, 1, 160
  02c04cc  stw 4, 176(1)
  02c04d0  stw 4, 180(1)
  02c04d4  ori 3, 30, 0
  02c04d8  lfs 1, 16(31)
  02c04dc  stw 4, 184(1)
  02c04e0  stw 4, 188(1)
  02c04e4  lfs 2, 20(31)
  02c04e8  stfs 1, 160(1)
  02c04ec  lfs 1, 24(31)
  02c04f0  stfs 2, 164(1)
  02c04f4  lfs 2, 28(31)
  02c04f8  stfs 1, 168(1)
  02c04fc  stfs 2, 172(1)
  02c0500  lfs 1, 32300(5)
  02c0504  bl 0x110950
  02c0508  nop
  02c050c  bl 0x5c8318
  02c0510  nop
  02c0514  addic 3, 3, 48
  02c0518  clrlwi 28, 3, 26
  02c051c  bl 0x5c8318
  02c0520  nop
  02c0524  addic 27, 3, 32
  02c0528  bl 0x5c8318
  02c052c  nop
  02c0530  lis 5, 123
  02c0534  li 4, 47
  02c0538  rlwimi 28, 27, 8, 18, 23
  02c053c  and 3, 3, 4
  02c0540  slwi 3, 3, 16
  02c0544  lwz 4, 32312(5)
  02c0548  rlwimi 3, 4, 24, 0, 7
  02c054c  or 3, 28, 3
  02c0550  extsw 28, 3
  02c0554  bl 0x5c8318
  02c0558  nop
  02c055c  srawi 4, 3, 1
  02c0560  lhz 5, 82(29)
  02c0564  li 6, 0
  02c0568  addze 4, 4
  02c056c  clrlwi 5, 5, 31
  02c0570  sldi 4, 4, 1
  02c0574  lis 7, 123
  02c0578  subc 3, 3, 4
  02c057c  subc 4, 6, 5
  02c0580  extsw 3, 3
  02c0584  lis 5, 123
  02c0588  neg 6, 3
  02c058c  cntlzw 4, 4
  02c0590  subc 8, 3, 6
  02c0594  sldi 3, 4, 58
  02c0598  lwz 4, 32292(5)
  02c059c  sradi 5, 3, 63
  02c05a0  lwz 7, 32296(7)
  02c05a4  extsw 3, 4
  02c05a8  and 5, 5, 8
  02c05ac  extsw 4, 7
  02c05b0  addc 27, 6, 5
  02c05b4  bl 0xfe484
  02c05b8  nop
  02c05bc  lis 4, 123
  02c05c0  lis 5, 123
  02c05c4  ori 26, 3, 0
  02c05c8  lfs 1, 32304(4)
  02c05cc  lfs 2, 32308(5)
  02c05d0  bl 0xfcbe8
  02c05d4  nop
  02c05d8  lis 3, 44
  02c05dc  lis 4, 123
  02c05e0  addi 25, 3, -5380
  02c05e4  lis 5, 114
  02c05e8  ori 3, 30, 0
  02c05ec  addic 10, 1, 176
  02c05f0  lfs 3, 32316(4)
  02c05f4  ori 7, 28, 0
  02c05f8  lfs 2, 84(25)
  02c05fc  ori 4, 26, 0
  02c0600  lfs 4, -3048(5)
  02c0604  li 8, 2
  02c0608  ori 9, 27, 0
  02c060c  fmuls 3, 3, 4
  02c0610  bl 0x12f8c0
  02c0614  nop
  02c0618  lis 3, 123
  02c061c  lhz 5, 52(31)
  02c0620  lbz 6, 35(31)
  02c0624  li 4, 128
  02c0628  lwz 3, 32288(3)
  02c062c  divw 3, 4, 3
  02c0630  ori 4, 5, 512
  02c0634  subc 3, 6, 3
  02c0638  lis 5, 114
  02c063c  sth 4, 52(31)
  02c0640  stb 3, 35(31)
  02c0644  lfs 3, 88(25)
  02c0648  lfs 1, 72(31)
  02c064c  lfs 4, -3052(5)
  02c0650  fmuls 2, 4, 3
  02c0654  bl 0x502578
  02c0658  nop
  02c065c  stfs 1, 72(31)
  02c0660  b 0x2c09ec
  02c0664  lwz 3, 100(29)
  02c0668  cmpwi 3, -1
  02c066c  bt 2, 0x2c06b0
  02c0670  sldi 4, 3, 7
  02c0674  sldi 6, 3, 4
  02c0678  lis 5, 150
  02c067c  subc 4, 4, 6
  02c0680  addic 5, 5, 14176
  02c0684  extsw 4, 4
  02c0688  addc 4, 5, 4
  02c068c  lwz 5, 136(4)
  02c0690  cmpw 5, 31
  02c0694  bf 2, 0x2c06b0
  02c0698  lbz 4, 116(4)
  02c069c  cmpwi 4, 0
  02c06a0  bt 2, 0x2c06b0
  02c06a4  extsw 3, 3
  02c06a8  bl 0x15cdb0
  02c06ac  nop
  02c06b0  li 3, -1
  02c06b4  li 5, 0
  02c06b8  li 7, 17
  02c06bc  li 4, 18
  02c06c0  li 6, 19
  02c06c4  stw 3, 100(29)
  02c06c8  li 8, 21
  02c06cc  stb 5, 16(29)
  02c06d0  li 3, 22
  02c06d4  stbx 5, 29, 7
  02c06d8  li 9, 23
  02c06dc  stbx 5, 29, 4
  02c06e0  stbx 5, 29, 6
  02c06e4  li 7, 25
  02c06e8  stb 5, 20(29)
  02c06ec  li 4, 26
  02c06f0  stbx 5, 29, 8
  02c06f4  li 6, 27
  02c06f8  stbx 5, 29, 3
  02c06fc  li 8, 30
  02c0700  stbx 5, 29, 9
  02c0704  li 3, 29
  02c0708  stb 5, 24(29)
  02c070c  li 9, 31
  02c0710  stbx 5, 29, 7
  02c0714  stbx 5, 29, 4
  02c0718  stbx 5, 29, 6
  02c071c  lis 7, 164
  02c0720  stb 5, 28(29)
  02c0724  stbx 5, 29, 3
  02c0728  stbx 5, 29, 8
  02c072c  stbx 5, 29, 9
  02c0730  lwz 3, 72(29)
  02c0734  lwz 4, -28512(7)
  02c0738  slwi 3, 3, 8
  02c073c  addc 3, 4, 3
  02c0740  lis 4, 268
  02c0744  clrldi 3, 3, 32
  02c0748  addic 4, 4, 20820
  02c074c  lfs 1, 16(3)
  02c0750  stfs 1, 0(29)
  02c0754  lfs 1, 20(3)
  02c0758  stfs 1, 4(29)
  02c075c  lfs 1, 24(3)
  02c0760  stfs 1, 8(29)
  02c0764  lfs 1, 28(3)
  02c0768  stfs 1, 12(29)
  02c076c  stw 5, 80(4)
  02c0770  lfs 1, 16(31)
  02c0774  lfs 2, 20(31)
  02c0778  lfs 3, 0(29)
  02c077c  lis 3, 44
  02c0780  fsubs 1, 3, 1
  02c0784  lfs 3, 4(29)
  02c0788  addi 3, 3, -5380
  02c078c  fsubs 2, 3, 2
  02c0790  lis 5, 115
  02c0794  addic 5, 5, 22784
  02c0798  fabs 3, 1
  02c079c  stfs 1, 224(1)
  02c07a0  fabs 5, 2
  02c07a4  stfs 2, 228(1)
  02c07a8  fsubs 1, 3, 5
  02c07ac  stfs 1, 232(1)
  02c07b0  lwz 6, 224(1)
  02c07b4  lfs 4, 0(3)
  02c07b8  lfs 1, 224(1)
  02c07bc  lwz 3, 228(1)
  02c07c0  lfs 2, 228(1)
  02c07c4  fabs 1, 1
  02c07c8  lwz 7, 232(1)
  02c07cc  rlwinm 3, 3, 3, 29, 29
  02c07d0  fabs 6, 2
  02c07d4  lfs 2, 232(1)
  02c07d8  rlwimi 3, 7, 2, 30, 30
  02c07dc  fsub 7, 2, 4
  02c07e0  rlwimi 3, 6, 4, 28, 28
  02c07e4  fsub 8, 2, 4
  02c07e8  ori 6, 5, 0
  02c07ec  rlwimi 6, 3, 2, 26, 28
  02c07f0  slwi 3, 3, 2
  02c07f4  clrldi 6, 6, 32
  02c07f8  fsel 5, 7, 1, 5
  02c07fc  lfsx 1, 5, 3
  02c0800  lfs 2, 4(6)
  02c0804  fsel 3, 8, 6, 3
  02c0808  fcmpu 0, 5, 4
  02c080c  bt 1, 0x2c0814
  02c0810  b 0x2c0934
  02c0814  fsubs 6, 3, 5
  02c0818  fadds 3, 3, 5
  02c081c  addic 3, 1, 16
  02c0820  li 7, 2
  02c0824  addic 6, 3, 284
  02c0828  addic 5, 3, 268
  02c082c  mtctr 7
  02c0830  fdivs 3, 6, 3
  02c0834  fmuls 5, 3, 3
  02c0838  stfs 3, 296(1)
  02c083c  stfs 3, 288(1)
  02c0840  stfs 3, 292(1)
  02c0844  stfs 3, 284(1)
  02c0848  lfs 7, 296(1)
  02c084c  lfs 8, 288(1)
  02c0850  lfs 9, 292(1)
  02c0854  fmuls 6, 5, 5
  02c0858  fmuls 8, 8, 5
  02c085c  fmuls 7, 7, 6
  02c0860  fmuls 3, 6, 6
  02c0864  fmuls 6, 9, 6
  02c0868  stfs 8, 288(1)
  02c086c  fmuls 5, 7, 5
  02c0870  stfs 6, 292(1)
  02c0874  stfs 5, 296(1)
  02c0878  lfs 5, 268(3)
  02c087c  fmuls 5, 5, 3
  02c0880  stfs 5, 284(3)
  02c0884  lfs 5, 4(5)
  02c0888  addic 5, 5, 8
  02c088c  fmuls 5, 5, 3
  02c0890  addic 3, 3, 8
  02c0894  stfs 5, 4(6)
  02c0898  addic 6, 6, 8
  02c089c  bdnz 0x2c0878
  02c08a0  li 6, 4
  02c08a4  ori 3, 1, 0
  02c08a8  mtctr 6
  02c08ac  lis 5, 115
  02c08b0  addic 6, 3, 284
  02c08b4  addic 5, 5, 22752
  02c08b8  ori 8, 6, 0
  02c08bc  lfs 3, 284(3)
  02c08c0  lfs 5, 0(5)
  02c08c4  fmuls 3, 3, 5
  02c08c8  lfs 5, 4(5)
  02c08cc  addic 5, 5, 8
  02c08d0  stfs 3, 284(3)
  02c08d4  lfs 3, 4(6)
  02c08d8  addic 3, 3, 8
  02c08dc  fmuls 3, 3, 5
  02c08e0  stfs 3, 4(6)
  02c08e4  addic 6, 6, 8
  02c08e8  bdnz 0x2c08bc
  02c08ec  ori 3, 1, 0
  02c08f0  mtctr 7
  02c08f4  lfs 3, 284(3)
  02c08f8  fadds 3, 4, 3
  02c08fc  addic 3, 3, 16
  02c0900  lfs 4, 4(8)
  02c0904  lfs 5, 8(8)
  02c0908  lfs 6, 12(8)
  02c090c  addic 8, 8, 16
  02c0910  fadds 3, 3, 4
  02c0914  fadds 4, 3, 5
  02c0918  fadds 4, 4, 6
  02c091c  bdnz 0x2c08f4
  02c0920  lis 3, 44
  02c0924  addi 3, 3, -5380
  02c0928  lfs 3, 4(3)
  02c092c  fadds 4, 4, 3
  02c0930  fmadds 4, 4, 1, 2
  02c0934  lis 3, 44
  02c0938  lis 6, 114
  02c093c  fmr 1, 4
  02c0940  addi 3, 3, -5380
  02c0944  lis 7, 114
  02c0948  addic 5, 4, 20
  02c094c  lfs 3, 36(3)
  02c0950  lfs 2, 28(3)
  02c0954  lfs 6, 32(3)
  02c0958  lfs 5, -3052(6)
  02c095c  ori 3, 31, 0
  02c0960  lfs 7, -3048(7)
  02c0964  fmuls 4, 5, 3
  02c0968  fmuls 2, 7, 2
  02c096c  fmuls 3, 7, 6
  02c0970  bl 0xff2e8
  02c0974  nop
  02c0978  lbz 3, 83(31)
  02c097c  cmpwi 3, 0
  02c0980  bt 2, 0x2c09c0
  02c0984  lis 3, 44
  02c0988  lis 4, 114
  02c098c  addi 3, 3, -5380
  02c0990  li 5, 0
  02c0994  lfs 1, 52(3)
  02c0998  lfs 2, -3056(4)
  02c099c  ori 3, 31, 0
  02c09a0  li 4, 0
  02c09a4  fmuls 1, 2, 1
  02c09a8  fctiwz 1, 1
  02c09ac  stfd 1, 448(1)
  02c09b0  lwz 6, 452(1)
  02c09b4  extsw 6, 6
  02c09b8  bl 0xfddc0
  02c09bc  nop
  02c09c0  lis 3, 164
  02c09c4  lwz 6, 72(29)
  02c09c8  li 5, 1
  02c09cc  slwi 6, 6, 8
  02c09d0  li 4, 0
  02c09d4  lwz 3, -28512(3)
  02c09d8  addc 3, 3, 6
  02c09dc  clrldi 3, 3, 32
  02c09e0  stb 5, 188(3)
  02c09e4  sth 4, 50(31)
  02c09e8  stb 5, 32(31)
  02c09ec  lbz 3, 32(31)
  02c09f0  cmpwi 3, 1
  02c09f4  bf 1, 0x2c0ad8
  02c09f8  lis 3, 44
  02c09fc  addi 4, 3, -5380
  02c0a00  ori 3, 31, 0
  02c0a04  lfs 1, 92(4)
  02c0a08  bl 0x106150
  02c0a0c  nop
  02c0a10  lbz 3, 49(31)
  02c0a14  cmpwi 3, 0
  02c0a18  bt 2, 0x2c0ad8
  02c0a1c  li 3, 0
  02c0a20  lis 4, 44
  02c0a24  addi 4, 4, -5380
  02c0a28  stw 3, 208(1)
  02c0a2c  stw 3, 212(1)
  02c0a30  stw 3, 216(1)
  02c0a34  stw 3, 220(1)
  02c0a38  lfs 1, 96(4)
  02c0a3c  lfs 2, 100(4)
  02c0a40  bl 0xfcbe8
  02c0a44  nop
  02c0a48  lis 4, 114
  02c0a4c  addic 30, 1, 192
  02c0a50  ori 3, 31, 0
  02c0a54  ori 5, 30, 0
  02c0a58  lfs 2, -3052(4)
  02c0a5c  li 4, 0
  02c0a60  fmuls 1, 1, 2
  02c0a64  fneg 1, 1
  02c0a68  stfs 1, 216(1)
  02c0a6c  bl 0xf1114
  02c0a70  nop
  02c0a74  lis 6, 123
  02c0a78  addic 28, 1, 208
  02c0a7c  addic 6, 6, 32348
  02c0a80  ori 3, 31, 0
  02c0a84  ori 4, 30, 0
  02c0a88  ori 5, 28, 0
  02c0a8c  li 7, 1
  02c0a90  bl 0x1349f0
  02c0a94  nop
  02c0a98  lis 6, 123
  02c0a9c  ori 3, 31, 0
  02c0aa0  addic 6, 6, 32364
  02c0aa4  ori 4, 30, 0
  02c0aa8  ori 5, 28, 0
  02c0aac  li 7, 1
  02c0ab0  bl 0x1349f0
  02c0ab4  nop
  02c0ab8  lis 6, 123
  02c0abc  ori 3, 31, 0
  02c0ac0  addic 6, 6, 32380
  02c0ac4  ori 4, 30, 0
  02c0ac8  ori 5, 28, 0
  02c0acc  li 7, 1
  02c0ad0  bl 0x1349f0
  02c0ad4  nop
  02c0ad8  lwz 29, 72(29)
  02c0adc  cmpwi 29, -1
  02c0ae0  bt 2, 0x2c0b04
  02c0ae4  lis 3, 164
  02c0ae8  slwi 4, 29, 8
  02c0aec  lwz 3, -28512(3)
  02c0af0  addc 3, 3, 4
  02c0af4  clrldi 3, 3, 32
  02c0af8  lwz 4, 36(3)
  02c0afc  lwz 4, 16(4)
  02c0b00  stw 4, 148(3)
  02c0b04  ld 0, 544(1)
  02c0b08  mtlr 0
  02c0b0c  lfd 31, 520(1)
  02c0b10  ld 25, 464(1)
  02c0b14  ld 26, 472(1)
  02c0b18  ld 27, 480(1)
  02c0b1c  ld 28, 488(1)
  02c0b20  ld 29, 496(1)
  02c0b24  ld 30, 504(1)
  02c0b28  ld 31, 512(1)
  02c0b2c  addi 1, 1, 528
  02c0b30  blr
