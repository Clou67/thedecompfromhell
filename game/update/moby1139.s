# game/update/moby1139.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1139:   # 0x1dbf60, 0x158 bytes
  01dbf60  stdu 1, -192(1)
  01dbf64  mflr 0
  01dbf68  std 0, 208(1)
  01dbf6c  stfd 30, 176(1)
  01dbf70  stfd 31, 184(1)
  01dbf74  std 31, 168(1)
  01dbf78  ori 31, 3, 0
  01dbf7c  lbz 3, 32(3)
  01dbf80  cmpwi 3, 0
  01dbf84  cmpwi 1, 3, 1
  01dbf88  std 30, 160(1)
  01dbf8c  std 29, 152(1)
  01dbf90  cmpwi 6, 3, -1
  01dbf94  bt 1, 0x1dbfa0
  01dbf98  bf 25, 0x1dc094
  01dbf9c  b 0x1dbfa8
  01dbfa0  bf 5, 0x1dbfc8
  01dbfa4  b 0x1dc094
  01dbfa8  li 3, 128
  01dbfac  lhz 5, 52(31)
  01dbfb0  li 4, 1
  01dbfb4  stb 3, 48(31)
  01dbfb8  ori 3, 5, 65
  01dbfbc  stb 4, 32(31)
  01dbfc0  sth 3, 52(31)
  01dbfc4  b 0x1dc094
  01dbfc8  lis 5, 30
  01dbfcc  lfs 1, 16(31)
  01dbfd0  lis 4, 16640
  01dbfd4  lfs 2, 20(31)
  01dbfd8  addi 5, 5, -16552
  01dbfdc  stfs 1, 112(1)
  01dbfe0  addic 3, 1, 112
  01dbfe4  lfs 1, 24(31)
  01dbfe8  stfs 2, 116(1)
  01dbfec  stfs 1, 120(1)
  01dbff0  stw 4, 124(1)
  01dbff4  lfs 1, 0(5)
  01dbff8  bl 0x502910
  01dbffc  nop
  01dc000  cmpwi 3, -1
  01dc004  bt 2, 0x1dc094
  01dc008  lis 3, 151
  01dc00c  addic 3, 3, -25376
  01dc010  lwz 3, 8332(3)
  01dc014  cmpwi 3, 22
  01dc018  bf 2, 0x1dc094
  01dc01c  lis 3, 30
  01dc020  lis 30, 161
  01dc024  addi 3, 3, -16552
  01dc028  li 29, 0
  01dc02c  addic 30, 30, 23856
  01dc030  lfs 31, 4(3)
  01dc034  bl 0xfcc68
  01dc038  nop
  01dc03c  fmr 30, 1
  01dc040  bl 0xfcc68
  01dc044  nop
  01dc048  lis 3, 114
  01dc04c  fmr 2, 1
  01dc050  ori 4, 30, 0
  01dc054  li 8, 1
  01dc058  li 9, 127
  01dc05c  li 10, 0
  01dc060  lfs 1, -3056(3)
  01dc064  ori 3, 31, 0
  01dc068  fmuls 3, 1, 31
  01dc06c  fmr 1, 30
  01dc070  fctiwz 3, 3
  01dc074  stfd 3, 128(1)
  01dc078  lwz 7, 132(1)
  01dc07c  extsw 7, 7
  01dc080  bl 0x132bb0
  01dc084  nop
  01dc088  addic 29, 29, 1
  01dc08c  cmpwi 29, 3
  01dc090  bt 0, 0x1dc034
  01dc094  ld 0, 208(1)
  01dc098  mtlr 0
  01dc09c  lfd 30, 176(1)
  01dc0a0  lfd 31, 184(1)
  01dc0a4  ld 29, 152(1)
  01dc0a8  ld 30, 160(1)
  01dc0ac  ld 31, 168(1)
  01dc0b0  addi 1, 1, 192
  01dc0b4  blr
