# sdk/libm/fmodf.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

fmodf:   # 0x5dc9a4, 0x234 bytes
  05dc9a4  stdu 1, -176(1)
  05dc9a8  mflr 0
  05dc9ac  addi 3, 1, 224
  05dc9b0  stfs 1, 224(1)
  05dc9b4  std 29, 152(1)
  05dc9b8  std 0, 192(1)
  05dc9bc  stfs 2, 232(1)
  05dc9c0  std 26, 128(1)
  05dc9c4  std 27, 136(1)
  05dc9c8  std 28, 144(1)
  05dc9cc  std 30, 160(1)
  05dc9d0  std 31, 168(1)
  05dc9d4  bl 0x5dd48c
  05dc9d8  nop
  05dc9dc  mr 29, 3
  05dc9e0  addi 3, 1, 232
  05dc9e4  extsh 29, 29
  05dc9e8  bl 0x5dd48c
  05dc9ec  nop
  05dc9f0  cmpwi 7, 29, 0
  05dc9f4  bt 28, 0x5dcab0
  05dc9f8  cmpwi 7, 29, 2
  05dc9fc  extsh 3, 3
  05dca00  bt 30, 0x5dca58
  05dca04  cmpwi 7, 3, 2
  05dca08  bt 30, 0x5dca84
  05dca0c  cmpwi 7, 29, 1
  05dca10  bt 30, 0x5dca1c
  05dca14  cmpwi 7, 3, 0
  05dca18  bf 30, 0x5dca58
  05dca1c  lis 3, 8192
  05dca20  bl 0x5dd4f8
  05dca24  nop
  05dca28  lwz 9, -23900(2)
  05dca2c  lfs 1, 0(9)
  05dca30  ld 0, 192(1)
  05dca34  ld 26, 128(1)
  05dca38  ld 27, 136(1)
  05dca3c  mtlr 0
  05dca40  ld 28, 144(1)
  05dca44  ld 29, 152(1)
  05dca48  ld 30, 160(1)
  05dca4c  ld 31, 168(1)
  05dca50  addi 1, 1, 176
  05dca54  blr
  05dca58  ld 0, 192(1)
  05dca5c  lfs 1, 224(1)
  05dca60  ld 26, 128(1)
  05dca64  mtlr 0
  05dca68  ld 27, 136(1)
  05dca6c  ld 28, 144(1)
  05dca70  ld 29, 152(1)
  05dca74  ld 30, 160(1)
  05dca78  ld 31, 168(1)
  05dca7c  addi 1, 1, 176
  05dca80  blr
  05dca84  ld 0, 192(1)
  05dca88  lfs 1, 232(1)
  05dca8c  ld 26, 128(1)
  05dca90  mtlr 0
  05dca94  ld 27, 136(1)
  05dca98  ld 28, 144(1)
  05dca9c  ld 29, 152(1)
  05dcaa0  ld 30, 160(1)
  05dcaa4  ld 31, 168(1)
  05dcaa8  addi 1, 1, 176
  05dcaac  blr
  05dcab0  extsh 3, 3
  05dcab4  cmpwi 7, 3, 0
  05dcab8  bf 28, 0x5dca04
  05dcabc  lfs 12, 232(1)
  05dcac0  lfs 13, -23896(2)
  05dcac4  fcmpu 7, 12, 13
  05dcac8  bt 28, 0x5dcbc4
  05dcacc  lfs 0, 224(1)
  05dcad0  li 26, 0
  05dcad4  fcmpu 7, 0, 13
  05dcad8  bt 28, 0x5dcbb4
  05dcadc  addi 28, 1, 116
  05dcae0  stfs 12, 116(1)
  05dcae4  addi 3, 1, 112
  05dcae8  mr 4, 28
  05dcaec  addi 27, 1, 114
  05dcaf0  bl 0x5e6774
  05dcaf4  nop
  05dcaf8  lfs 0, 224(1)
  05dcafc  stfs 0, 116(1)
  05dcb00  mr 3, 27
  05dcb04  mr 4, 28
  05dcb08  bl 0x5e6774
  05dcb0c  nop
  05dcb10  extsh 3, 3
  05dcb14  cmpwi 7, 3, 0
  05dcb18  bt 30, 0x5dcbd0
  05dcb1c  lhz 0, 114(1)
  05dcb20  lhz 9, 112(1)
  05dcb24  sub 0, 0, 9
  05dcb28  extsh 30, 0
  05dcb2c  cmpwi 7, 30, 0
  05dcb30  bt 28, 0x5dcbd0
  05dcb34  mr 29, 0
  05dcb38  li 31, 0
  05dcb3c  sub 4, 30, 31
  05dcb40  lfs 0, 232(1)
  05dcb44  clrldi 3, 28, 32
  05dcb48  stfs 0, 116(1)
  05dcb4c  extsw 4, 4
  05dcb50  addi 31, 31, 1
  05dcb54  bl 0x5e659c
  05dcb58  nop
  05dcb5c  lfs 0, 116(1)
  05dcb60  lfs 13, 224(1)
  05dcb64  fcmpu 7, 0, 13
  05dcb68  cror 30, 28, 30
  05dcb6c  bt 30, 0x5dcb98
  05dcb70  addi 29, 29, -1
  05dcb74  extsh 0, 29
  05dcb78  cmpwi 7, 0, -1
  05dcb7c  bf 30, 0x5dcb3c
  05dcb80  extsh 0, 26
  05dcb84  fmr 1, 13
  05dcb88  cmpwi 0, 0
  05dcb8c  bt 2, 0x5dca30
  05dcb90  fneg 1, 13
  05dcb94  b 0x5dca30
  05dcb98  fsubs 13, 13, 0
  05dcb9c  extsh 0, 29
  05dcba0  cmpwi 7, 0, 0
  05dcba4  stfs 13, 224(1)
  05dcba8  bt- 28, 0x5dcb80
  05dcbac  stfs 13, 116(1)
  05dcbb0  b 0x5dcb00
  05dcbb4  fneg 13, 0
  05dcbb8  li 26, 1
  05dcbbc  stfs 13, 224(1)
  05dcbc0  b 0x5dcadc
  05dcbc4  fneg 12, 12
  05dcbc8  stfs 12, 232(1)
  05dcbcc  b 0x5dcacc
  05dcbd0  lfs 13, 224(1)
  05dcbd4  b 0x5dcb80
