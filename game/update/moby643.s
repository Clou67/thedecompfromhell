# game/update/moby643.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_643:   # 0x3ff9c0, 0x5d0 bytes
  03ff9c0  stdu 1, -304(1)
  03ff9c4  mflr 0
  03ff9c8  std 0, 320(1)
  03ff9cc  stfd 29, 280(1)
  03ff9d0  stfd 30, 288(1)
  03ff9d4  stfd 31, 296(1)
  03ff9d8  std 31, 272(1)
  03ff9dc  lbz 4, 32(3)
  03ff9e0  std 30, 264(1)
  03ff9e4  ori 31, 3, 0
  03ff9e8  lwz 30, 120(3)
  03ff9ec  cmpwi 4, 0
  03ff9f0  cmpwi 1, 4, 1
  03ff9f4  std 29, 256(1)
  03ff9f8  std 28, 248(1)
  03ff9fc  std 27, 240(1)
  03ffa00  cmpwi 6, 4, -1
  03ffa04  bt 1, 0x3ffa10
  03ffa08  bf 25, 0x3fff60
  03ffa0c  b 0x3ffa18
  03ffa10  bf 5, 0x3ffbe4
  03ffa14  b 0x3fff60
  03ffa18  lwz 3, 96(30)
  03ffa1c  cmpwi 3, -1
  03ffa20  bf 2, 0x3ffa4c
  03ffa24  lis 3, 101
  03ffa28  lhz 4, 178(31)
  03ffa2c  addic 3, 3, 28356
  03ffa30  extsh 4, 4
  03ffa34  bl 0x5cd098
  03ffa38  nop
  03ffa3c  ori 3, 31, 0
  03ffa40  bl 0xefb38
  03ffa44  nop
  03ffa48  b 0x3fff60
  03ffa4c  lis 4, 165
  03ffa50  slwi 3, 3, 2
  03ffa54  addic 29, 4, 7136
  03ffa58  extsw 3, 3
  03ffa5c  lwzx 29, 29, 3
  03ffa60  lwz 3, 0(29)
  03ffa64  cmpwi 3, 0
  03ffa68  bf 2, 0x3ffa94
  03ffa6c  lis 3, 101
  03ffa70  lhz 4, 178(31)
  03ffa74  addic 3, 3, 28420
  03ffa78  extsh 4, 4
  03ffa7c  bl 0x5cd098
  03ffa80  nop
  03ffa84  ori 3, 31, 0
  03ffa88  bl 0xefb38
  03ffa8c  nop
  03ffa90  b 0x3fff60
  03ffa94  li 4, 0
  03ffa98  cmpwi 3, 0
  03ffa9c  ori 28, 4, 0
  03ffaa0  bf 1, 0x3ffb10
  03ffaa4  ori 6, 29, 0
  03ffaa8  addic 5, 6, 16
  03ffaac  addic 4, 4, 1
  03ffab0  divw 7, 4, 3
  03ffab4  mullw 3, 7, 3
  03ffab8  lfs 1, 20(6)
  03ffabc  subc 3, 4, 3
  03ffac0  lfs 2, 16(6)
  03ffac4  sldi 3, 3, 4
  03ffac8  lfs 3, 24(6)
  03ffacc  addc 3, 3, 5
  03ffad0  clrldi 3, 3, 32
  03ffad4  lfs 4, 4(3)
  03ffad8  lfs 5, 0(3)
  03ffadc  fsubs 1, 1, 4
  03ffae0  fsubs 2, 2, 5
  03ffae4  lfs 4, 8(3)
  03ffae8  fsubs 3, 3, 4
  03ffaec  fmuls 1, 1, 1
  03ffaf0  fmadds 1, 2, 2, 1
  03ffaf4  fmadds 1, 3, 3, 1
  03ffaf8  fsqrts 1, 1
  03ffafc  stfs 1, 28(6)
  03ffb00  lwz 3, 0(29)
  03ffb04  addic 6, 6, 16
  03ffb08  cmpw 4, 3
  03ffb0c  bt 0, 0x3ffaac
  03ffb10  lis 4, 64
  03ffb14  stw 28, 100(30)
  03ffb18  li 3, 2
  03ffb1c  addi 27, 4, -1696
  03ffb20  lfs 31, 0(27)
  03ffb24  stw 28, 104(30)
  03ffb28  bl 0xfc620
  03ffb2c  nop
  03ffb30  cmpwi 3, 0
  03ffb34  lfs 1, 4(27)
  03ffb38  bt 2, 0x3ffb48
  03ffb3c  lis 3, 64
  03ffb40  addi 3, 3, -1696
  03ffb44  lfs 1, 8(3)
  03ffb48  stfs 1, 108(30)
  03ffb4c  lis 3, 64
  03ffb50  lfs 1, 16(29)
  03ffb54  li 4, 1
  03ffb58  addi 27, 3, -1696
  03ffb5c  stfs 1, 16(31)
  03ffb60  lfs 1, 20(29)
  03ffb64  stfs 1, 20(31)
  03ffb68  lfs 1, 24(29)
  03ffb6c  stfs 1, 24(31)
  03ffb70  lfs 1, 28(29)
  03ffb74  stb 4, 32(31)
  03ffb78  stfs 1, 28(31)
  03ffb7c  lfs 1, 12(27)
  03ffb80  lfs 2, 16(27)
  03ffb84  bl 0xfcbe8
  03ffb88  nop
  03ffb8c  stfs 1, 128(30)
  03ffb90  lfs 30, 20(27)
  03ffb94  lfs 2, 24(27)
  03ffb98  fmr 1, 30
  03ffb9c  bl 0xfcbe8
  03ffba0  nop
  03ffba4  stfs 1, 132(30)
  03ffba8  lfs 1, 28(27)
  03ffbac  fmr 2, 30
  03ffbb0  bl 0xfcbe8
  03ffbb4  nop
  03ffbb8  stfs 1, 136(30)
  03ffbbc  stw 28, 124(30)
  03ffbc0  fmr 1, 31
  03ffbc4  stw 28, 120(30)
  03ffbc8  stw 28, 116(30)
  03ffbcc  stw 28, 112(30)
  03ffbd0  lfs 2, 32(27)
  03ffbd4  bl 0xfe4f0
  03ffbd8  nop
  03ffbdc  stfs 1, 124(30)
  03ffbe0  b 0x3fff60
  03ffbe4  lis 3, 114
  03ffbe8  lis 4, 133
  03ffbec  lis 5, 165
  03ffbf0  addic 6, 30, 104
  03ffbf4  addic 7, 5, 7136
  03ffbf8  lwz 5, 96(30)
  03ffbfc  li 8, 1
  03ffc00  lfs 1, -3052(3)
  03ffc04  lfs 2, 18156(4)
  03ffc08  slwi 3, 5, 2
  03ffc0c  fmuls 1, 1, 2
  03ffc10  extsw 3, 3
  03ffc14  lfs 2, 108(30)
  03ffc18  addic 4, 1, 192
  03ffc1c  addic 5, 30, 100
  03ffc20  lwzx 3, 7, 3
  03ffc24  fmuls 1, 1, 2
  03ffc28  bl 0x10ce18
  03ffc2c  nop
  03ffc30  lis 3, 64
  03ffc34  lfs 1, 192(1)
  03ffc38  addic 5, 30, 112
  03ffc3c  addi 4, 3, -1696
  03ffc40  addic 3, 31, 16
  03ffc44  lfs 30, 36(4)
  03ffc48  lfs 29, 40(4)
  03ffc4c  lfs 31, 0(4)
  03ffc50  fmr 2, 30
  03ffc54  fmr 3, 29
  03ffc58  fmr 4, 31
  03ffc5c  bl 0x109b40
  03ffc60  nop
  03ffc64  addic 3, 31, 20
  03ffc68  lfs 1, 196(1)
  03ffc6c  fmr 2, 30
  03ffc70  addic 5, 30, 116
  03ffc74  fmr 3, 29
  03ffc78  fmr 4, 31
  03ffc7c  bl 0x109b40
  03ffc80  nop
  03ffc84  addic 3, 31, 24
  03ffc88  lfs 1, 200(1)
  03ffc8c  addic 5, 30, 120
  03ffc90  fmr 2, 30
  03ffc94  fmr 3, 29
  03ffc98  fmr 4, 31
  03ffc9c  bl 0x109b40
  03ffca0  nop
  03ffca4  ori 3, 31, 0
  03ffca8  lis 4, 35
  03ffcac  li 5, 0
  03ffcb0  bl 0x10675c
  03ffcb4  nop
  03ffcb8  ori 29, 3, 0
  03ffcbc  ori 3, 31, 0
  03ffcc0  addic 5, 30, 32
  03ffcc4  li 8, 0
  03ffcc8  addic 7, 1, 224
  03ffccc  li 10, 4
  03ffcd0  ori 4, 29, 0
  03ffcd4  li 6, 0
  03ffcd8  li 9, 0
  03ffcdc  bl 0x106840
  03ffce0  nop
  03ffce4  lwz 3, 224(1)
  03ffce8  lfs 1, 64(31)
  03ffcec  cmpwi 3, 1
  03ffcf0  bf 1, 0x3ffd0c
  03ffcf4  cmpwi 29, 0
  03ffcf8  bt 2, 0x3ffd0c
  03ffcfc  lwz 3, 32(29)
  03ffd00  lhz 3, 166(3)
  03ffd04  cmpwi 3, 643
  03ffd08  bf 2, 0x3ffd20
  03ffd0c  lis 3, 151
  03ffd10  addic 3, 3, -25376
  03ffd14  lwz 3, 572(3)
  03ffd18  cmpw 3, 31
  03ffd1c  bf 2, 0x3ffe68
  03ffd20  li 6, 0
  03ffd24  li 3, 0
  03ffd28  li 4, 0
  03ffd2c  ori 5, 31, 0
  03ffd30  stw 6, 220(1)
  03ffd34  stw 6, 216(1)
  03ffd38  stw 6, 212(1)
  03ffd3c  stw 6, 208(1)
  03ffd40  bl 0x15d12c
  03ffd44  nop
  03ffd48  lis 3, 151
  03ffd4c  lis 4, 64
  03ffd50  addic 5, 3, -25376
  03ffd54  addi 4, 4, -1696
  03ffd58  addic 3, 31, 16
  03ffd5c  lwz 5, 572(5)
  03ffd60  lfs 3, 44(4)
  03ffd64  lfs 2, 48(4)
  03ffd68  lfs 1, 52(4)
  03ffd6c  cmpw 5, 31
  03ffd70  lfs 4, 56(4)
  03ffd74  bf 2, 0x3ffde8
  03ffd78  ori 5, 3, 0
  03ffd7c  fmr 5, 3
  03ffd80  lis 3, 64
  03ffd84  fmr 6, 2
  03ffd88  li 7, -1
  03ffd8c  fmr 7, 1
  03ffd90  addi 4, 3, -1696
  03ffd94  fmr 1, 4
  03ffd98  li 6, 1
  03ffd9c  fmr 3, 4
  03ffda0  li 11, 0
  03ffda4  ori 3, 31, 0
  03ffda8  li 8, 10
  03ffdac  lfs 2, 8(4)
  03ffdb0  std 7, 144(1)
  03ffdb4  addic 4, 1, 208
  03ffdb8  std 6, 160(1)
  03ffdbc  fmr 4, 5
  03ffdc0  std 6, 168(1)
  03ffdc4  fmr 5, 6
  03ffdc8  std 7, 176(1)
  03ffdcc  li 9, 20
  03ffdd0  li 10, 60
  03ffdd4  std 11, 184(1)
  03ffdd8  fmr 6, 2
  03ffddc  bl 0x10e030
  03ffde0  nop
  03ffde4  b 0x3ffe58
  03ffde8  fmr 5, 3
  03ffdec  lis 4, 64
  03ffdf0  fmr 7, 2
  03ffdf4  li 6, -1
  03ffdf8  fmr 8, 1
  03ffdfc  addi 4, 4, -1696
  03ffe00  li 11, 1
  03ffe04  fmr 3, 4
  03ffe08  li 7, 0
  03ffe0c  fmr 1, 31
  03ffe10  ori 5, 3, 0
  03ffe14  fmr 2, 31
  03ffe18  ori 3, 31, 0
  03ffe1c  lfs 6, 8(4)
  03ffe20  std 6, 144(1)
  03ffe24  addic 4, 1, 208
  03ffe28  std 11, 160(1)
  03ffe2c  li 8, 10
  03ffe30  fmr 4, 5
  03ffe34  std 11, 168(1)
  03ffe38  fmr 5, 7
  03ffe3c  std 6, 176(1)
  03ffe40  li 9, 20
  03ffe44  fmr 7, 8
  03ffe48  li 10, 60
  03ffe4c  std 7, 184(1)
  03ffe50  bl 0x10e030
  03ffe54  nop
  03ffe58  ori 3, 31, 0
  03ffe5c  bl 0xefb38
  03ffe60  nop
  03ffe64  b 0x3fff60
  03ffe68  lfs 2, 128(30)
  03ffe6c  bl 0x502578
  03ffe70  nop
  03ffe74  stfs 1, 64(31)
  03ffe78  lfs 1, 68(31)
  03ffe7c  lfs 2, 132(30)
  03ffe80  bl 0x502578
  03ffe84  nop
  03ffe88  stfs 1, 68(31)
  03ffe8c  lfs 1, 72(31)
  03ffe90  lfs 2, 136(30)
  03ffe94  bl 0x502578
  03ffe98  nop
  03ffe9c  lis 3, 133
  03ffea0  stfs 1, 72(31)
  03ffea4  lfs 1, 124(30)
  03ffea8  lfs 2, 18160(3)
  03ffeac  bl 0x502578
  03ffeb0  nop
  03ffeb4  lis 3, 64
  03ffeb8  addi 29, 3, -1696
  03ffebc  lfs 2, 60(29)
  03ffec0  lfs 3, 64(29)
  03ffec4  fsubs 2, 2, 1
  03ffec8  fsubs 3, 3, 1
  03ffecc  fsub 4, 1, 2
  03ffed0  fsel 2, 4, 2, 1
  03ffed4  lfs 4, 68(29)
  03ffed8  lfs 5, 72(29)
  03ffedc  fsub 6, 3, 2
  03ffee0  fsel 2, 6, 3, 2
  03ffee4  lfs 3, 76(29)
  03ffee8  lfs 6, 80(29)
  03ffeec  lfs 8, 84(29)
  03ffef0  stfs 1, 124(30)
  03ffef4  fmuls 7, 2, 2
  03ffef8  fmuls 9, 7, 2
  03ffefc  fmuls 10, 7, 9
  03fff00  fmadds 2, 9, 4, 2
  03fff04  fmuls 1, 7, 10
  03fff08  fmadds 2, 10, 5, 2
  03fff0c  fmuls 4, 7, 1
  03fff10  fmadds 1, 1, 3, 2
  03fff14  fmadds 31, 4, 6, 1
  03fff18  fmuls 1, 31, 8
  03fff1c  bl 0x502758
  03fff20  nop
  03fff24  lfs 1, 88(29)
  03fff28  addic 30, 3, 207
  03fff2c  fmuls 1, 31, 1
  03fff30  bl 0x502758
  03fff34  nop
  03fff38  slwi 4, 3, 8
  03fff3c  slwi 3, 3, 16
  03fff40  addic 4, 4, 12288
  03fff44  lis 5, 48
  03fff48  or 4, 4, 30
  03fff4c  addc 3, 3, 5
  03fff50  lis 6, -256
  03fff54  or 3, 4, 3
  03fff58  or 3, 3, 6
  03fff5c  stw 3, 144(31)
  03fff60  ld 0, 320(1)
  03fff64  mtlr 0
  03fff68  lfd 29, 280(1)
  03fff6c  lfd 30, 288(1)
  03fff70  lfd 31, 296(1)
  03fff74  ld 27, 240(1)
  03fff78  ld 28, 248(1)
  03fff7c  ld 29, 256(1)
  03fff80  ld 30, 264(1)
  03fff84  ld 31, 272(1)
  03fff88  addi 1, 1, 304
  03fff8c  blr
