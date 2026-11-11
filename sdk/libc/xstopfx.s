# sdk/libc/xstopfx.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Stopfx:   # 0x5ca99c, 0x290 bytes
  05ca99c  lwz 9, -24664(2)
  05ca9a0  mr 6, 3
  05ca9a4  mr 5, 4
  05ca9a8  lwz 8, 0(3)
  05ca9ac  lwz 7, 0(9)
  05ca9b0  b 0x5ca9b8
  05ca9b4  addi 8, 8, 1
  05ca9b8  clrldi 10, 8, 32
  05ca9bc  lbz 11, 0(10)
  05ca9c0  rlwinm 9, 11, 1, 23, 30
  05ca9c4  add 9, 9, 7
  05ca9c8  clrldi 9, 9, 32
  05ca9cc  lhz 0, 0(9)
  05ca9d0  li 9, 324
  05ca9d4  and 9, 0, 9
  05ca9d8  cmpwi 7, 9, 0
  05ca9dc  bf 30, 0x5ca9b4
  05ca9e0  extsb 0, 11
  05ca9e4  cmpwi 7, 0, 45
  05ca9e8  bt 30, 0x5cab08
  05ca9ec  cmpwi 7, 0, 43
  05ca9f0  li 3, 0
  05ca9f4  bt 30, 0x5cab18
  05ca9f8  lbz 0, 0(10)
  05ca9fc  extsb 0, 0
  05caa00  cmpwi 7, 0, 110
  05caa04  bt 30, 0x5caa94
  05caa08  cmpwi 7, 0, 78
  05caa0c  bt 30, 0x5caa94
  05caa10  cmpwi 7, 0, 105
  05caa14  bt 30, 0x5caa38
  05caa18  cmpwi 7, 0, 73
  05caa1c  bt 30, 0x5caa38
  05caa20  cmpwi 7, 0, 48
  05caa24  bt 30, 0x5cab5c
  05caa28  ori 3, 3, 1
  05caa2c  extsw 3, 3
  05caa30  stw 8, 0(6)
  05caa34  blr
  05caa38  addi 8, 8, 1
  05caa3c  clrldi 9, 8, 32
  05caa40  lbz 0, 0(9)
  05caa44  extsb 0, 0
  05caa48  cmpwi 7, 0, 110
  05caa4c  bt 30, 0x5caa58
  05caa50  cmpwi 7, 0, 78
  05caa54  bf 30, 0x5caa78
  05caa58  addi 8, 8, 1
  05caa5c  clrldi 9, 8, 32
  05caa60  lbz 0, 0(9)
  05caa64  extsb 0, 0
  05caa68  cmpwi 7, 0, 102
  05caa6c  bt 30, 0x5cab80
  05caa70  cmpwi 7, 0, 70
  05caa74  bt 30, 0x5cab80
  05caa78  li 3, 0
  05caa7c  cmpwi 7, 5, 0
  05caa80  bt 30, 0x5caa2c
  05caa84  extsw 3, 3
  05caa88  stw 8, 0(4)
  05caa8c  stw 8, 0(6)
  05caa90  blr
  05caa94  addi 8, 8, 1
  05caa98  clrldi 9, 8, 32
  05caa9c  lbz 0, 0(9)
  05caaa0  extsb 0, 0
  05caaa4  cmpwi 7, 0, 97
  05caaa8  bt 30, 0x5caab4
  05caaac  cmpwi 7, 0, 65
  05caab0  bf 30, 0x5caa78
  05caab4  addi 8, 8, 1
  05caab8  clrldi 9, 8, 32
  05caabc  lbz 0, 0(9)
  05caac0  extsb 0, 0
  05caac4  cmpwi 7, 0, 110
  05caac8  bt 30, 0x5caad4
  05caacc  cmpwi 7, 0, 78
  05caad0  bf 30, 0x5caa78
  05caad4  addi 8, 8, 1
  05caad8  clrldi 9, 8, 32
  05caadc  mr 10, 8
  05caae0  mr 11, 9
  05caae4  lbz 0, 0(9)
  05caae8  cmpwi 7, 0, 40
  05caaec  bt 30, 0x5cab24
  05caaf0  lbz 0, 0(11)
  05caaf4  li 3, 4
  05caaf8  cmpwi 7, 0, 41
  05caafc  bf 30, 0x5caa7c
  05cab00  addi 8, 10, 1
  05cab04  b 0x5caa7c
  05cab08  addi 8, 8, 1
  05cab0c  li 3, 8
  05cab10  clrldi 10, 8, 32
  05cab14  b 0x5ca9f8
  05cab18  addi 8, 8, 1
  05cab1c  clrldi 10, 8, 32
  05cab20  b 0x5ca9f8
  05cab24  addi 10, 10, 1
  05cab28  clrldi 11, 10, 32
  05cab2c  lbz 0, 0(11)
  05cab30  rlwinm 9, 0, 1, 23, 30
  05cab34  cmpwi 6, 0, 95
  05cab38  add 9, 9, 7
  05cab3c  clrldi 9, 9, 32
  05cab40  lhz 0, 0(9)
  05cab44  li 9, 562
  05cab48  and 9, 0, 9
  05cab4c  cmpwi 7, 9, 0
  05cab50  bf 30, 0x5cab24
  05cab54  bt 26, 0x5cab24
  05cab58  b 0x5caaf0
  05cab5c  lbz 0, 1(10)
  05cab60  extsb 0, 0
  05cab64  cmpwi 7, 0, 120
  05cab68  bt 30, 0x5cab74
  05cab6c  cmpwi 7, 0, 88
  05cab70  bf 30, 0x5caa28
  05cab74  addi 8, 8, 2
  05cab78  ori 3, 3, 2
  05cab7c  b 0x5caa2c
  05cab80  addi 8, 8, 1
  05cab84  ori 3, 3, 3
  05cab88  clrldi 9, 8, 32
  05cab8c  lbz 0, 0(9)
  05cab90  extsb 0, 0
  05cab94  cmpwi 7, 0, 105
  05cab98  bt 30, 0x5caba4
  05cab9c  cmpwi 7, 0, 73
  05caba0  bf 30, 0x5caa7c
  05caba4  addi 11, 8, 1
  05caba8  clrldi 9, 11, 32
  05cabac  lbz 0, 0(9)
  05cabb0  extsb 0, 0
  05cabb4  cmpwi 7, 0, 110
  05cabb8  bt 30, 0x5cabc4
  05cabbc  cmpwi 7, 0, 78
  05cabc0  bf 30, 0x5caa7c
  05cabc4  addi 11, 11, 1
  05cabc8  clrldi 9, 11, 32
  05cabcc  lbz 0, 0(9)
  05cabd0  extsb 0, 0
  05cabd4  cmpwi 7, 0, 105
  05cabd8  bt 30, 0x5cabe4
  05cabdc  cmpwi 7, 0, 73
  05cabe0  bf 30, 0x5caa7c
  05cabe4  addi 11, 11, 1
  05cabe8  clrldi 9, 11, 32
  05cabec  lbz 0, 0(9)
  05cabf0  extsb 0, 0
  05cabf4  cmpwi 7, 0, 116
  05cabf8  bt 30, 0x5cac04
  05cabfc  cmpwi 7, 0, 84
  05cac00  bf 30, 0x5caa7c
  05cac04  addi 11, 11, 1
  05cac08  clrldi 9, 11, 32
  05cac0c  lbz 0, 0(9)
  05cac10  extsb 0, 0
  05cac14  cmpwi 7, 0, 121
  05cac18  bt 30, 0x5cac24
  05cac1c  cmpwi 7, 0, 89
  05cac20  bf 30, 0x5caa7c
  05cac24  addi 8, 11, 1
  05cac28  b 0x5caa7c
