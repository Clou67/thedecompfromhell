# game/update/moby1144.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1144_001df5e0:   # 0x1df5e0, 0x130 bytes
  01df5e0  stdu 1, -160(1)
  01df5e4  mflr 0
  01df5e8  std 0, 176(1)
  01df5ec  std 31, 152(1)
  01df5f0  lis 4, 161
  01df5f4  ori 31, 3, 0
  01df5f8  lwz 3, 1800(4)
  01df5fc  std 30, 144(1)
  01df600  std 29, 136(1)
  01df604  std 28, 128(1)
  01df608  std 27, 120(1)
  01df60c  cmpwi 3, 2
  01df610  bf 2, 0x1df6ec
  01df614  lis 3, 151
  01df618  lbz 3, -16268(3)
  01df61c  cmpwi 3, 0
  01df620  bt 2, 0x1df6ec
  01df624  lis 28, 150
  01df628  addic 28, 28, -12976
  01df62c  lwz 3, 48(28)
  01df630  cmpwi 3, 3
  01df634  bf 2, 0x1df668
  01df638  lwz 3, 52(28)
  01df63c  cmpwi 1, 3, 643
  01df640  cmpwi 3, 442
  01df644  cror 2, 0, 5
  01df648  bt 2, 0x1df668
  01df64c  lis 3, 114
  01df650  lis 5, -16743
  01df654  lis 4, 16256
  01df658  lis 6, 161
  01df65c  ori 5, 5, 39322
  01df660  stw 4, -1064(3)
  01df664  stw 5, 24368(6)
  01df668  lhz 3, 68(28)
  01df66c  li 27, 0
  01df670  extsh 4, 3
  01df674  cmpwi 4, 0
  01df678  bf 1, 0x1df6ec
  01df67c  lis 29, 162
  01df680  ori 30, 28, 0
  01df684  addic 29, 29, -16512
  01df688  lwz 4, 376(30)
  01df68c  lhz 5, 166(31)
  01df690  extsh 5, 5
  01df694  lhz 6, 166(4)
  01df698  extsh 6, 6
  01df69c  cmpw 6, 5
  01df6a0  bf 2, 0x1df6d8
  01df6a4  lbz 5, 1(29)
  01df6a8  cmpwi 5, 0
  01df6ac  bf 2, 0x1df6d8
  01df6b0  ori 3, 4, 0
  01df6b4  li 4, 0
  01df6b8  ori 5, 29, 0
  01df6bc  bl 0xf0ea8
  01df6c0  nop
  01df6c4  lis 4, 16432
  01df6c8  lhz 3, 68(28)
  01df6cc  stw 4, 32(29)
  01df6d0  stw 4, 36(29)
  01df6d4  stw 4, 40(29)
  01df6d8  extsh 4, 3
  01df6dc  addic 27, 27, 1
  01df6e0  addic 30, 30, 4
  01df6e4  cmpw 27, 4
  01df6e8  bt 0, 0x1df688
  01df6ec  ld 0, 176(1)
  01df6f0  mtlr 0
  01df6f4  ld 27, 120(1)
  01df6f8  ld 28, 128(1)
  01df6fc  ld 29, 136(1)
  01df700  ld 30, 144(1)
  01df704  ld 31, 152(1)
  01df708  addi 1, 1, 160
  01df70c  blr

UpdateMoby_1144:   # 0x1df770, 0xcd8 bytes
  01df770  stdu 1, -352(1)
  01df774  mflr 0
  01df778  std 0, 368(1)
  01df77c  stfd 27, 312(1)
  01df780  stfd 28, 320(1)
  01df784  stfd 29, 328(1)
  01df788  stfd 30, 336(1)
  01df78c  stfd 31, 344(1)
  01df790  std 31, 304(1)
  01df794  lis 4, 161
  01df798  ori 31, 3, 0
  01df79c  std 30, 296(1)
  01df7a0  lwz 4, 1800(4)
  01df7a4  lwz 30, 120(3)
  01df7a8  std 29, 288(1)
  01df7ac  std 28, 280(1)
  01df7b0  std 27, 272(1)
  01df7b4  std 26, 264(1)
  01df7b8  cmpwi 4, 2
  01df7bc  bf 2, 0x1df894
  01df7c0  lis 3, 151
  01df7c4  lbz 3, -16268(3)
  01df7c8  cmpwi 3, 0
  01df7cc  bt 2, 0x1df894
  01df7d0  lis 28, 150
  01df7d4  addic 28, 28, -12976
  01df7d8  lwz 3, 48(28)
  01df7dc  cmpwi 3, 3
  01df7e0  bf 2, 0x1df814
  01df7e4  lwz 3, 52(28)
  01df7e8  cmpwi 1, 3, 643
  01df7ec  cmpwi 3, 442
  01df7f0  cror 2, 0, 5
  01df7f4  bt 2, 0x1df814
  01df7f8  lis 3, 114
  01df7fc  lis 5, -16743
  01df800  lis 4, 16256
  01df804  lis 6, 161
  01df808  ori 5, 5, 39322
  01df80c  stw 4, -1064(3)
  01df810  stw 5, 24368(6)
  01df814  lhz 4, 68(28)
  01df818  li 29, 0
  01df81c  extsh 3, 4
  01df820  cmpwi 3, 0
  01df824  bf 1, 0x1df894
  01df828  lis 27, 162
  01df82c  ori 26, 28, 0
  01df830  addic 27, 27, -16512
  01df834  lwz 3, 376(26)
  01df838  lhz 5, 166(31)
  01df83c  extsh 5, 5
  01df840  lhz 6, 166(3)
  01df844  extsh 6, 6
  01df848  cmpw 6, 5
  01df84c  bf 2, 0x1df880
  01df850  lbz 5, 1(27)
  01df854  cmpwi 5, 0
  01df858  bf 2, 0x1df880
  01df85c  li 4, 0
  01df860  ori 5, 27, 0
  01df864  bl 0xf0ea8
  01df868  nop
  01df86c  lis 3, 16432
  01df870  lhz 4, 68(28)
  01df874  stw 3, 32(27)
  01df878  stw 3, 36(27)
  01df87c  stw 3, 40(27)
  01df880  extsh 3, 4
  01df884  addic 29, 29, 1
  01df888  addic 26, 26, 4
  01df88c  cmpw 29, 3
  01df890  bt 0, 0x1df834
  01df894  lbz 3, 49(31)
  01df898  cmpwi 3, 0
  01df89c  bt 2, 0x1df908
  01df8a0  lis 3, 149
  01df8a4  lfs 1, 20(31)
  01df8a8  addic 3, 3, 5056
  01df8ac  lfs 2, 16(31)
  01df8b0  lfs 3, 324(3)
  01df8b4  lfs 4, 320(3)
  01df8b8  fsubs 1, 1, 3
  01df8bc  fsubs 2, 2, 4
  01df8c0  lfs 3, 24(31)
  01df8c4  lfs 4, 328(3)
  01df8c8  fsubs 3, 3, 4
  01df8cc  lis 3, 30
  01df8d0  fmuls 1, 1, 1
  01df8d4  addi 3, 3, -2288
  01df8d8  fmadds 1, 2, 2, 1
  01df8dc  lfs 2, 0(3)
  01df8e0  fmadds 1, 3, 3, 1
  01df8e4  fsqrts 1, 1
  01df8e8  fcmpu 0, 1, 2
  01df8ec  cror 6, 1, 2
  01df8f0  bt 6, 0x1df908
  01df8f4  ori 3, 31, 0
  01df8f8  bl 0x106360
  01df8fc  nop
  01df900  li 3, 24
  01df904  stb 3, 127(31)
  01df908  lbz 3, 32(31)
  01df90c  cmpwi 3, 0
  01df910  cmpwi 1, 3, 2
  01df914  cmpwi 6, 3, 1
  01df918  cmpwi 7, 3, -1
  01df91c  bt 1, 0x1df928
  01df920  bf 29, 0x1dfb90
  01df924  b 0x1df934
  01df928  bf 25, 0x1dfa0c
  01df92c  bf 5, 0x1dfa68
  01df930  b 0x1dfb90
  01df934  lbz 3, 83(31)
  01df938  cmpwi 3, 1
  01df93c  bt 2, 0x1df97c
  01df940  lis 3, 30
  01df944  lis 4, 114
  01df948  addi 3, 3, -2288
  01df94c  li 5, 0
  01df950  lfs 1, 4(3)
  01df954  lfs 2, -3056(4)
  01df958  ori 3, 31, 0
  01df95c  li 4, 1
  01df960  fmuls 1, 2, 1
  01df964  fctiwz 1, 1
  01df968  stfd 1, 248(1)
  01df96c  lwz 6, 252(1)
  01df970  extsw 6, 6
  01df974  bl 0xfddc0
  01df978  nop
  01df97c  lis 3, 151
  01df980  addic 3, 3, -13812
  01df984  lbz 3, 9(3)
  01df988  cmpwi 3, 0
  01df98c  bt 2, 0x1df9d0
  01df990  lis 3, 151
  01df994  lis 4, 161
  01df998  lbz 5, 176(31)
  01df99c  addic 4, 4, -13692
  01df9a0  lwz 3, -25488(3)
  01df9a4  addc 4, 5, 4
  01df9a8  slwi 3, 3, 4
  01df9ac  clrldi 4, 4, 32
  01df9b0  extsw 3, 3
  01df9b4  lbzx 3, 4, 3
  01df9b8  cmpwi 3, 255
  01df9bc  bf 2, 0x1df9d0
  01df9c0  ori 3, 31, 0
  01df9c4  bl 0xefb38
  01df9c8  nop
  01df9cc  b 0x1e040c
  01df9d0  lis 3, 101
  01df9d4  lis 5, 16512
  01df9d8  addic 3, 3, 18476
  01df9dc  li 4, 1
  01df9e0  stw 5, 44(30)
  01df9e4  stw 3, 64(30)
  01df9e8  stb 4, 32(31)
  01df9ec  lwz 3, 100(30)
  01df9f0  cmpwi 3, 0
  01df9f4  bt 0, 0x1dfb90
  01df9f8  addic 4, 30, 32
  01df9fc  ori 3, 31, 0
  01dfa00  bl 0x4d3720
  01dfa04  nop
  01dfa08  b 0x1dfb90
  01dfa0c  lis 3, 151
  01dfa10  lfs 1, 20(31)
  01dfa14  addic 3, 3, -25376
  01dfa18  lfs 2, 16(31)
  01dfa1c  lfs 3, 132(3)
  01dfa20  lfs 4, 128(3)
  01dfa24  fsubs 1, 1, 3
  01dfa28  fsubs 2, 2, 4
  01dfa2c  lis 3, 30
  01dfa30  addi 3, 3, -2288
  01dfa34  fmuls 1, 1, 1
  01dfa38  fmadds 1, 2, 2, 1
  01dfa3c  lfs 2, 8(3)
  01dfa40  fsqrts 1, 1
  01dfa44  fcmpu 0, 1, 2
  01dfa48  cror 6, 1, 2
  01dfa4c  bt 6, 0x1dfb90
  01dfa50  lbz 3, 176(31)
  01dfa54  bl 0xf1e50
  01dfa58  nop
  01dfa5c  li 3, 2
  01dfa60  stb 3, 32(31)
  01dfa64  b 0x1dfb90
  01dfa68  lbz 3, 112(31)
  01dfa6c  rlwinm 3, 3, 0, 30, 30
  01dfa70  cmpwi 3, 0
  01dfa74  bt 2, 0x1dfae0
  01dfa78  li 3, 2
  01dfa7c  lbz 29, 83(31)
  01dfa80  bl 0xfc620
  01dfa84  nop
  01dfa88  addic 3, 3, 1
  01dfa8c  cmpw 29, 3
  01dfa90  bt 2, 0x1dfae0
  01dfa94  li 3, 2
  01dfa98  bl 0xfc620
  01dfa9c  nop
  01dfaa0  lis 4, 30
  01dfaa4  lis 5, 114
  01dfaa8  addi 4, 4, -2288
  01dfaac  lfs 1, 4(4)
  01dfab0  lfs 2, -3056(5)
  01dfab4  addic 4, 3, 1
  01dfab8  ori 3, 31, 0
  01dfabc  fmuls 1, 2, 1
  01dfac0  extsw 4, 4
  01dfac4  li 5, 0
  01dfac8  fctiwz 1, 1
  01dfacc  stfd 1, 248(1)
  01dfad0  lwz 6, 252(1)
  01dfad4  extsw 6, 6
  01dfad8  bl 0xfddc0
  01dfadc  nop
  01dfae0  lis 3, 151
  01dfae4  addic 3, 3, -25376
  01dfae8  lwz 4, 764(3)
  01dfaec  cmpwi 4, 0
  01dfaf0  bf 2, 0x1dfb58
  01dfaf4  lis 4, 30
  01dfaf8  lis 5, 114
  01dfafc  addi 4, 4, -2288
  01dfb00  lfs 1, 12(4)
  01dfb04  lfs 2, -3056(5)
  01dfb08  lwz 3, 768(3)
  01dfb0c  fmuls 1, 2, 1
  01dfb10  fctiwz 1, 1
  01dfb14  stfd 1, 248(1)
  01dfb18  lwz 4, 252(1)
  01dfb1c  cmpw 3, 4
  01dfb20  bt 1, 0x1dfb30
  01dfb24  lhz 3, 86(30)
  01dfb28  cmpwi 3, 0
  01dfb2c  bt 2, 0x1dfb58
  01dfb30  ori 3, 31, 0
  01dfb34  addic 4, 30, 32
  01dfb38  bl 0x4d3870
  01dfb3c  nop
  01dfb40  lis 3, 30
  01dfb44  addi 4, 3, -2288
  01dfb48  ori 3, 31, 0
  01dfb4c  lfs 1, 16(4)
  01dfb50  bl 0x119488
  01dfb54  nop
  01dfb58  lhz 3, 36(30)
  01dfb5c  cmpwi 3, 4
  01dfb60  bf 2, 0x1dfb90
  01dfb64  li 3, 9
  01dfb68  bl 0x112c20
  01dfb6c  nop
  01dfb70  li 3, 0
  01dfb74  li 4, -1
  01dfb78  bl 0xe8aa4
  01dfb7c  nop
  01dfb80  ori 3, 31, 0
  01dfb84  bl 0xefb38
  01dfb88  nop
  01dfb8c  b 0x1e040c
  01dfb90  lis 3, 30
  01dfb94  lbz 4, 83(31)
  01dfb98  addi 3, 3, -2288
  01dfb9c  cmpwi 4, 1
  01dfba0  lfs 31, 20(3)
  01dfba4  bf 2, 0x1e03a4
  01dfba8  lis 29, 151
  01dfbac  lfs 2, 20(31)
  01dfbb0  lfs 1, 16(31)
  01dfbb4  addic 29, 29, -25376
  01dfbb8  lis 3, 30
  01dfbbc  lfs 3, 132(29)
  01dfbc0  lfs 4, 128(29)
  01dfbc4  fsubs 3, 2, 3
  01dfbc8  fsubs 4, 1, 4
  01dfbcc  addi 3, 3, -2288
  01dfbd0  fmuls 3, 3, 3
  01dfbd4  fmadds 3, 4, 4, 3
  01dfbd8  lfs 4, 8(3)
  01dfbdc  fsqrts 3, 3
  01dfbe0  fcmpu 0, 3, 4
  01dfbe4  cror 6, 1, 2
  01dfbe8  bt 6, 0x1dfe58
  01dfbec  lfs 3, 208(29)
  01dfbf0  lfs 4, 212(29)
  01dfbf4  lis 3, 30
  01dfbf8  fsubs 1, 3, 1
  01dfbfc  fsubs 2, 4, 2
  01dfc00  addi 3, 3, -2288
  01dfc04  lis 4, 115
  01dfc08  addic 4, 4, 22784
  01dfc0c  fabs 5, 1
  01dfc10  fabs 6, 2
  01dfc14  stfs 1, 136(1)
  01dfc18  stfs 2, 140(1)
  01dfc1c  lfs 3, 72(31)
  01dfc20  fsubs 1, 5, 6
  01dfc24  stfs 1, 144(1)
  01dfc28  lwz 5, 136(1)
  01dfc2c  lfs 4, 24(3)
  01dfc30  lfs 1, 136(1)
  01dfc34  lwz 3, 140(1)
  01dfc38  lfs 2, 140(1)
  01dfc3c  fabs 1, 1
  01dfc40  lwz 6, 144(1)
  01dfc44  rlwinm 3, 3, 3, 29, 29
  01dfc48  fabs 7, 2
  01dfc4c  lfs 2, 144(1)
  01dfc50  rlwimi 3, 6, 2, 30, 30
  01dfc54  fsub 8, 2, 4
  01dfc58  rlwimi 3, 5, 4, 28, 28
  01dfc5c  fsub 9, 2, 4
  01dfc60  ori 5, 4, 0
  01dfc64  rlwimi 5, 3, 2, 26, 28
  01dfc68  slwi 3, 3, 2
  01dfc6c  clrldi 5, 5, 32
  01dfc70  fsel 6, 8, 1, 6
  01dfc74  lfsx 1, 4, 3
  01dfc78  lfs 2, 4(5)
  01dfc7c  fsel 5, 9, 7, 5
  01dfc80  fcmpu 0, 6, 4
  01dfc84  bt 1, 0x1dfc8c
  01dfc88  b 0x1dfdac
  01dfc8c  fsubs 7, 5, 6
  01dfc90  fadds 5, 5, 6
  01dfc94  addic 3, 1, 16
  01dfc98  li 6, 2
  01dfc9c  addic 5, 3, 212
  01dfca0  addic 4, 3, 196
  01dfca4  mtctr 6
  01dfca8  fdivs 5, 7, 5
  01dfcac  fmuls 6, 5, 5
  01dfcb0  stfs 5, 224(1)
  01dfcb4  stfs 5, 216(1)
  01dfcb8  stfs 5, 220(1)
  01dfcbc  stfs 5, 212(1)
  01dfcc0  lfs 8, 224(1)
  01dfcc4  lfs 9, 216(1)
  01dfcc8  lfs 10, 220(1)
  01dfccc  fmuls 7, 6, 6
  01dfcd0  fmuls 9, 9, 6
  01dfcd4  fmuls 8, 8, 7
  01dfcd8  fmuls 5, 7, 7
  01dfcdc  fmuls 7, 10, 7
  01dfce0  stfs 9, 216(1)
  01dfce4  fmuls 6, 8, 6
  01dfce8  stfs 7, 220(1)
  01dfcec  stfs 6, 224(1)
  01dfcf0  lfs 6, 196(3)
  01dfcf4  fmuls 6, 6, 5
  01dfcf8  stfs 6, 212(3)
  01dfcfc  lfs 6, 4(4)
  01dfd00  addic 4, 4, 8
  01dfd04  fmuls 6, 6, 5
  01dfd08  addic 3, 3, 8
  01dfd0c  stfs 6, 4(5)
  01dfd10  addic 5, 5, 8
  01dfd14  bdnz 0x1dfcf0
  01dfd18  li 5, 4
  01dfd1c  ori 3, 1, 0
  01dfd20  mtctr 5
  01dfd24  lis 4, 115
  01dfd28  addic 5, 3, 212
  01dfd2c  addic 4, 4, 22752
  01dfd30  ori 7, 5, 0
  01dfd34  lfs 5, 212(3)
  01dfd38  lfs 6, 0(4)
  01dfd3c  fmuls 5, 5, 6
  01dfd40  lfs 6, 4(4)
  01dfd44  addic 4, 4, 8
  01dfd48  stfs 5, 212(3)
  01dfd4c  lfs 5, 4(5)
  01dfd50  addic 3, 3, 8
  01dfd54  fmuls 5, 5, 6
  01dfd58  stfs 5, 4(5)
  01dfd5c  addic 5, 5, 8
  01dfd60  bdnz 0x1dfd34
  01dfd64  ori 3, 1, 0
  01dfd68  mtctr 6
  01dfd6c  lfs 5, 212(3)
  01dfd70  fadds 4, 4, 5
  01dfd74  addic 3, 3, 16
  01dfd78  lfs 5, 4(7)
  01dfd7c  lfs 6, 8(7)
  01dfd80  lfs 7, 12(7)
  01dfd84  addic 7, 7, 16
  01dfd88  fadds 4, 4, 5
  01dfd8c  fadds 4, 4, 6
  01dfd90  fadds 4, 4, 7
  01dfd94  bdnz 0x1dfd6c
  01dfd98  lis 3, 30
  01dfd9c  addi 3, 3, -2288
  01dfda0  lfs 5, 28(3)
  01dfda4  fadds 4, 4, 5
  01dfda8  fmadds 4, 4, 1, 2
  01dfdac  fmr 1, 3
  01dfdb0  fmr 2, 4
  01dfdb4  bl 0x5026a0
  01dfdb8  nop
  01dfdbc  lis 3, 30
  01dfdc0  addi 3, 3, -2288
  01dfdc4  lfs 2, 32(3)
  01dfdc8  fcmpu 0, 1, 2
  01dfdcc  cror 6, 1, 2
  01dfdd0  bt 6, 0x1dfe58
  01dfdd4  lfs 1, 260(29)
  01dfdd8  lfs 2, 256(29)
  01dfddc  fmuls 1, 1, 1
  01dfde0  lfs 3, 264(29)
  01dfde4  lis 3, 30
  01dfde8  addi 3, 3, -2288
  01dfdec  fmadds 1, 2, 2, 1
  01dfdf0  lfs 2, 36(3)
  01dfdf4  fmadds 1, 3, 3, 1
  01dfdf8  fsqrts 1, 1
  01dfdfc  fcmpu 0, 1, 2
  01dfe00  cror 6, 0, 2
  01dfe04  bt 6, 0x1dfe48
  01dfe08  lis 3, 30
  01dfe0c  vspltisw 2, -1
  01dfe10  li 5, 40
  01dfe14  addi 3, 3, -2288
  01dfe18  lis 4, 114
  01dfe1c  li 6, -3056
  01dfe20  vslw 2, 2, 2
  01dfe24  lvlx 3, 5, 3
  01dfe28  li 3, 404
  01dfe2c  vspltw 3, 3, 0
  01dfe30  lvlx 4, 6, 4
  01dfe34  vmaddfp 2, 4, 3, 2
  01dfe38  vctsxs 2, 2, 0
  01dfe3c  vspltw 2, 2, 0
  01dfe40  stvewx 2, 3, 30
  01dfe44  b 0x1dfe8c
  01dfe48  addic 3, 30, 404
  01dfe4c  bl 0x4fff60
  01dfe50  nop
  01dfe54  b 0x1dfe8c
  01dfe58  lwz 3, 404(30)
  01dfe5c  cmpwi 3, 0
  01dfe60  bt 2, 0x1dfe8c
  01dfe64  li 3, 0
  01dfe68  stw 3, 404(30)
  01dfe6c  lfs 1, 208(29)
  01dfe70  stfs 1, 384(30)
  01dfe74  lfs 1, 212(29)
  01dfe78  stfs 1, 388(30)
  01dfe7c  lfs 1, 216(29)
  01dfe80  stfs 1, 392(30)
  01dfe84  lfs 1, 220(29)
  01dfe88  stfs 1, 396(30)
  01dfe8c  addic 3, 30, 408
  01dfe90  bl 0x4fff60
  01dfe94  nop
  01dfe98  cmpwi 3, 0
  01dfe9c  bt 2, 0x1dff54
  01dfea0  lis 3, 30
  01dfea4  addi 28, 3, -2288
  01dfea8  lfs 1, 44(28)
  01dfeac  lfs 2, 48(28)
  01dfeb0  bl 0xfcbe8
  01dfeb4  nop
  01dfeb8  lis 3, 114
  01dfebc  lfs 2, -3056(3)
  01dfec0  fmuls 1, 1, 2
  01dfec4  bl 0x502758
  01dfec8  nop
  01dfecc  stw 3, 408(30)
  01dfed0  lfs 1, 52(28)
  01dfed4  lfs 30, 72(31)
  01dfed8  lfs 2, 56(28)
  01dfedc  bl 0xfcbe8
  01dfee0  nop
  01dfee4  lfs 29, 60(28)
  01dfee8  fmuls 2, 1, 29
  01dfeec  fmr 1, 30
  01dfef0  bl 0x502578
  01dfef4  nop
  01dfef8  fmr 30, 1
  01dfefc  lfs 1, 24(28)
  01dff00  lfs 2, 0(28)
  01dff04  bl 0xfcbe8
  01dff08  nop
  01dff0c  fmuls 3, 1, 29
  01dff10  lfs 1, 64(28)
  01dff14  addic 3, 30, 384
  01dff18  fmr 2, 30
  01dff1c  bl 0xfe610
  01dff20  nop
  01dff24  lfs 1, 384(30)
  01dff28  lfs 2, 16(31)
  01dff2c  fadds 1, 1, 2
  01dff30  lfs 2, 388(30)
  01dff34  lfs 3, 392(30)
  01dff38  stfs 1, 384(30)
  01dff3c  lfs 1, 20(31)
  01dff40  fadds 1, 2, 1
  01dff44  stfs 1, 388(30)
  01dff48  lfs 1, 24(31)
  01dff4c  fadds 1, 3, 1
  01dff50  stfs 1, 392(30)
  01dff54  lwz 3, 404(30)
  01dff58  cmpwi 3, 0
  01dff5c  bt 2, 0x1dff7c
  01dff60  lis 3, 30
  01dff64  lfs 30, 208(29)
  01dff68  lfs 29, 212(29)
  01dff6c  addi 3, 3, -2288
  01dff70  lfs 28, 216(29)
  01dff74  lfs 31, 68(3)
  01dff78  b 0x1dff88
  01dff7c  lfs 30, 384(30)
  01dff80  lfs 29, 388(30)
  01dff84  lfs 28, 392(30)
  01dff88  lfs 1, 16(31)
  01dff8c  lis 3, 30
  01dff90  lfs 2, 20(31)
  01dff94  fsubs 30, 30, 1
  01dff98  fsubs 29, 29, 2
  01dff9c  addi 3, 3, -2288
  01dffa0  lis 29, 115
  01dffa4  addic 29, 29, 22784
  01dffa8  lfs 1, 72(3)
  01dffac  fabs 3, 30
  01dffb0  fabs 4, 29
  01dffb4  stfs 30, 124(1)
  01dffb8  stfs 29, 128(1)
  01dffbc  lfs 5, 24(31)
  01dffc0  fadds 1, 5, 1
  01dffc4  fsubs 2, 3, 4
  01dffc8  fsubs 28, 28, 1
  01dffcc  stfs 2, 132(1)
  01dffd0  lwz 4, 124(1)
  01dffd4  lfs 27, 24(3)
  01dffd8  lfs 2, 124(1)
  01dffdc  lwz 3, 128(1)
  01dffe0  lfs 1, 128(1)
  01dffe4  fabs 2, 2
  01dffe8  lwz 5, 132(1)
  01dffec  rlwinm 3, 3, 3, 29, 29
  01dfff0  fabs 5, 1
  01dfff4  lfs 1, 132(1)
  01dfff8  rlwimi 3, 5, 2, 30, 30
  01dfffc  fsub 6, 1, 27
  01e0000  fsub 7, 1, 27
  01e0004  rlwimi 3, 4, 4, 28, 28
  01e0008  ori 4, 29, 0
  01e000c  rlwimi 4, 3, 2, 26, 28
  01e0010  slwi 3, 3, 2
  01e0014  clrldi 4, 4, 32
  01e0018  fsel 4, 6, 2, 4
  01e001c  lfsx 1, 29, 3
  01e0020  fsel 3, 7, 5, 3
  01e0024  lfs 2, 4(4)
  01e0028  fcmpu 0, 4, 27
  01e002c  bt 1, 0x1e0038
  01e0030  fmr 1, 27
  01e0034  b 0x1e015c
  01e0038  fsubs 5, 3, 4
  01e003c  fadds 3, 3, 4
  01e0040  addic 3, 1, 16
  01e0044  li 6, 2
  01e0048  addic 4, 3, 164
  01e004c  addic 5, 3, 180
  01e0050  mtctr 6
  01e0054  fdivs 3, 5, 3
  01e0058  fmuls 4, 3, 3
  01e005c  stfs 3, 192(1)
  01e0060  stfs 3, 184(1)
  01e0064  stfs 3, 188(1)
  01e0068  stfs 3, 180(1)
  01e006c  lfs 6, 192(1)
  01e0070  lfs 7, 184(1)
  01e0074  lfs 8, 188(1)
  01e0078  fmuls 5, 4, 4
  01e007c  fmuls 7, 7, 4
  01e0080  fmuls 6, 6, 5
  01e0084  fmuls 3, 5, 5
  01e0088  fmuls 5, 8, 5
  01e008c  stfs 7, 184(1)
  01e0090  fmuls 4, 6, 4
  01e0094  stfs 5, 188(1)
  01e0098  stfs 4, 192(1)
  01e009c  lfs 4, 164(3)
  01e00a0  fmuls 4, 4, 3
  01e00a4  stfs 4, 180(3)
  01e00a8  lfs 4, 4(4)
  01e00ac  addic 3, 3, 8
  01e00b0  addic 4, 4, 8
  01e00b4  fmuls 4, 4, 3
  01e00b8  stfs 4, 4(5)
  01e00bc  addic 5, 5, 8
  01e00c0  bdnz 0x1e009c
  01e00c4  li 5, 4
  01e00c8  ori 3, 1, 0
  01e00cc  mtctr 5
  01e00d0  lis 4, 115
  01e00d4  addic 5, 3, 180
  01e00d8  addic 4, 4, 22752
  01e00dc  ori 7, 5, 0
  01e00e0  lfs 3, 180(3)
  01e00e4  lfs 4, 0(4)
  01e00e8  fmuls 3, 3, 4
  01e00ec  lfs 4, 4(4)
  01e00f0  addic 4, 4, 8
  01e00f4  stfs 3, 180(3)
  01e00f8  lfs 3, 4(5)
  01e00fc  addic 3, 3, 8
  01e0100  fmuls 3, 3, 4
  01e0104  stfs 3, 4(5)
  01e0108  addic 5, 5, 8
  01e010c  bdnz 0x1e00e0
  01e0110  fmr 3, 27
  01e0114  ori 3, 1, 0
  01e0118  mtctr 6
  01e011c  lfs 4, 180(3)
  01e0120  fadds 3, 3, 4
  01e0124  addic 3, 3, 16
  01e0128  lfs 4, 4(7)
  01e012c  lfs 5, 8(7)
  01e0130  lfs 6, 12(7)
  01e0134  addic 7, 7, 16
  01e0138  fadds 3, 3, 4
  01e013c  fadds 3, 3, 5
  01e0140  fadds 3, 3, 6
  01e0144  bdnz 0x1e011c
  01e0148  lis 3, 30
  01e014c  addi 3, 3, -2288
  01e0150  lfs 4, 28(3)
  01e0154  fadds 3, 3, 4
  01e0158  fmadds 1, 3, 1, 2
  01e015c  lfs 2, 72(31)
  01e0160  bl 0x5025e0
  01e0164  nop
  01e0168  fmuls 2, 29, 29
  01e016c  stfs 28, 116(1)
  01e0170  fabs 4, 28
  01e0174  fmadds 2, 30, 30, 2
  01e0178  fsqrts 2, 2
  01e017c  lwz 3, 116(1)
  01e0180  lfs 3, 116(1)
  01e0184  rlwinm 3, 3, 3, 29, 29
  01e0188  fabs 3, 3
  01e018c  fabs 5, 2
  01e0190  stfs 2, 112(1)
  01e0194  fsubs 2, 5, 4
  01e0198  stfs 2, 120(1)
  01e019c  lwz 4, 112(1)
  01e01a0  lfs 2, 112(1)
  01e01a4  lwz 5, 120(1)
  01e01a8  lfs 6, 120(1)
  01e01ac  fabs 2, 2
  01e01b0  rlwimi 3, 5, 2, 30, 30
  01e01b4  fsub 7, 6, 27
  01e01b8  fsub 6, 6, 27
  01e01bc  rlwimi 3, 4, 4, 28, 28
  01e01c0  ori 4, 29, 0
  01e01c4  rlwimi 4, 3, 2, 26, 28
  01e01c8  slwi 3, 3, 2
  01e01cc  clrldi 4, 4, 32
  01e01d0  fsel 4, 7, 2, 4
  01e01d4  lfsx 30, 29, 3
  01e01d8  lfs 2, 4(4)
  01e01dc  fsel 3, 6, 3, 5
  01e01e0  fcmpu 0, 4, 27
  01e01e4  bt 1, 0x1e01ec
  01e01e8  b 0x1e030c
  01e01ec  fsubs 5, 3, 4
  01e01f0  fadds 3, 3, 4
  01e01f4  addic 3, 1, 16
  01e01f8  li 6, 2
  01e01fc  addic 5, 3, 148
  01e0200  addic 4, 3, 132
  01e0204  mtctr 6
  01e0208  fdivs 3, 5, 3
  01e020c  fmuls 4, 3, 3
  01e0210  stfs 3, 160(1)
  01e0214  stfs 3, 152(1)
  01e0218  stfs 3, 156(1)
  01e021c  stfs 3, 148(1)
  01e0220  lfs 6, 160(1)
  01e0224  lfs 7, 152(1)
  01e0228  lfs 8, 156(1)
  01e022c  fmuls 5, 4, 4
  01e0230  fmuls 7, 7, 4
  01e0234  fmuls 6, 6, 5
  01e0238  fmuls 3, 5, 5
  01e023c  fmuls 5, 8, 5
  01e0240  stfs 7, 152(1)
  01e0244  fmuls 4, 6, 4
  01e0248  stfs 5, 156(1)
  01e024c  stfs 4, 160(1)
  01e0250  lfs 4, 132(3)
  01e0254  fmuls 4, 4, 3
  01e0258  stfs 4, 148(3)
  01e025c  lfs 4, 4(4)
  01e0260  addic 4, 4, 8
  01e0264  fmuls 4, 4, 3
  01e0268  addic 3, 3, 8
  01e026c  stfs 4, 4(5)
  01e0270  addic 5, 5, 8
  01e0274  bdnz 0x1e0250
  01e0278  li 5, 4
  01e027c  ori 3, 1, 0
  01e0280  mtctr 5
  01e0284  lis 4, 115
  01e0288  addic 5, 3, 148
  01e028c  addic 4, 4, 22752
  01e0290  ori 7, 5, 0
  01e0294  lfs 3, 148(3)
  01e0298  lfs 4, 0(4)
  01e029c  fmuls 3, 3, 4
  01e02a0  lfs 4, 4(4)
  01e02a4  addic 4, 4, 8
  01e02a8  stfs 3, 148(3)
  01e02ac  lfs 3, 4(5)
  01e02b0  addic 3, 3, 8
  01e02b4  fmuls 3, 3, 4
  01e02b8  stfs 3, 4(5)
  01e02bc  addic 5, 5, 8
  01e02c0  bdnz 0x1e0294
  01e02c4  ori 3, 1, 0
  01e02c8  mtctr 6
  01e02cc  lfs 3, 148(3)
  01e02d0  lfs 4, 4(7)
  01e02d4  fadds 3, 27, 3
  01e02d8  lfs 5, 8(7)
  01e02dc  addic 3, 3, 16
  01e02e0  lfs 27, 12(7)
  01e02e4  addic 7, 7, 16
  01e02e8  fadds 3, 3, 4
  01e02ec  fadds 3, 3, 5
  01e02f0  fadds 27, 3, 27
  01e02f4  bdnz 0x1e02cc
  01e02f8  lis 3, 30
  01e02fc  addi 3, 3, -2288
  01e0300  lfs 3, 28(3)
  01e0304  fadds 27, 27, 3
  01e0308  fmadds 27, 27, 30, 2
  01e030c  lis 3, 30
  01e0310  fneg 27, 27
  01e0314  addi 3, 3, -2288
  01e0318  lfs 2, 32(3)
  01e031c  fcmpu 0, 1, 2
  01e0320  cror 6, 0, 2
  01e0324  bt 6, 0x1e0330
  01e0328  fmr 1, 2
  01e032c  b 0x1e034c
  01e0330  lis 3, 30
  01e0334  addi 3, 3, -2288
  01e0338  lfs 2, 76(3)
  01e033c  fcmpu 0, 1, 2
  01e0340  cror 6, 1, 2
  01e0344  bt 6, 0x1e034c
  01e0348  fmr 1, 2
  01e034c  lis 3, 30
  01e0350  addi 3, 3, -2288
  01e0354  lfs 2, 80(3)
  01e0358  fcmpu 0, 27, 2
  01e035c  cror 6, 0, 2
  01e0360  bt 6, 0x1e036c
  01e0364  fmr 27, 2
  01e0368  b 0x1e0388
  01e036c  lis 3, 30
  01e0370  addi 3, 3, -2288
  01e0374  lfs 2, 84(3)
  01e0378  fcmpu 0, 27, 2
  01e037c  cror 6, 1, 2
  01e0380  bt 6, 0x1e0388
  01e0384  fmr 27, 2
  01e0388  lis 3, 30
  01e038c  addi 3, 3, -2288
  01e0390  lfs 2, 88(3)
  01e0394  stfs 27, 228(30)
  01e0398  fmuls 1, 1, 2
  01e039c  stfs 1, 232(30)
  01e03a0  stfs 1, 360(30)
  01e03a4  lis 3, 151
  01e03a8  lbz 3, -16268(3)
  01e03ac  cmpwi 3, 0
  01e03b0  bt 2, 0x1e03bc
  01e03b4  lis 3, 16432
  01e03b8  stw 3, 240(30)
  01e03bc  lis 3, 30
  01e03c0  lis 29, 114
  01e03c4  addi 5, 3, -2288
  01e03c8  addic 4, 30, 128
  01e03cc  ori 3, 31, 0
  01e03d0  lfs 30, 92(5)
  01e03d4  lfs 2, -3060(29)
  01e03d8  li 5, 0
  01e03dc  fmuls 1, 2, 31
  01e03e0  fmuls 2, 2, 30
  01e03e4  bl 0x1167c8
  01e03e8  nop
  01e03ec  lfs 2, -3060(29)
  01e03f0  addic 4, 30, 256
  01e03f4  fmuls 1, 2, 31
  01e03f8  ori 3, 31, 0
  01e03fc  fmuls 2, 2, 30
  01e0400  li 5, 1
  01e0404  bl 0x1167c8
  01e0408  nop
  01e040c  ld 0, 368(1)
  01e0410  mtlr 0
  01e0414  lfd 27, 312(1)
  01e0418  lfd 28, 320(1)
  01e041c  lfd 29, 328(1)
  01e0420  lfd 30, 336(1)
  01e0424  lfd 31, 344(1)
  01e0428  ld 26, 264(1)
  01e042c  ld 27, 272(1)
  01e0430  ld 28, 280(1)
  01e0434  ld 29, 288(1)
  01e0438  ld 30, 296(1)
  01e043c  ld 31, 304(1)
  01e0440  addi 1, 1, 352
  01e0444  blr
