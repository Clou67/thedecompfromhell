# game/update/moby1686.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1686_002acde4:   # 0x2acde4, 0x14 bytes
  02acde4  lis 3, 123
  02acde8  lis 4, 1
  02acdec  addic 3, 3, 29236
  02acdf0  stw 4, 72(3)
  02acdf4  blr

UpdateMoby_1686:   # 0x2ace00, 0x190 bytes
  02ace00  stdu 1, -176(1)
  02ace04  mflr 0
  02ace08  std 0, 192(1)
  02ace0c  stfd 31, 168(1)
  02ace10  std 31, 160(1)
  02ace14  ori 31, 3, 0
  02ace18  lis 4, 1
  02ace1c  std 30, 152(1)
  02ace20  std 29, 144(1)
  02ace24  std 28, 136(1)
  02ace28  li 5, 0
  02ace2c  bl 0x10675c
  02ace30  nop
  02ace34  ori 4, 3, 0
  02ace38  lbz 3, 32(31)
  02ace3c  cmpwi 3, 0
  02ace40  bt 1, 0x2ace50
  02ace44  cmpwi 3, -1
  02ace48  bf 1, 0x2acf6c
  02ace4c  b 0x2ace64
  02ace50  cmpwi 3, 1
  02ace54  bf 1, 0x2ace70
  02ace58  cmpwi 3, 2
  02ace5c  bf 1, 0x2ace90
  02ace60  b 0x2acf6c
  02ace64  li 3, 1
  02ace68  stb 3, 32(31)
  02ace6c  b 0x2acf6c
  02ace70  cmpwi 4, 0
  02ace74  bt 2, 0x2acf6c
  02ace78  lwz 3, 44(4)
  02ace7c  cmpwi 3, 0
  02ace80  bf 1, 0x2acf6c
  02ace84  li 3, 2
  02ace88  stb 3, 32(31)
  02ace8c  b 0x2acf6c
  02ace90  li 3, 0
  02ace94  li 4, 0
  02ace98  ori 5, 31, 0
  02ace9c  bl 0x15d12c
  02acea0  nop
  02acea4  ori 3, 31, 0
  02acea8  bl 0x11a100
  02aceac  nop
  02aceb0  lis 3, 43
  02aceb4  lis 4, 161
  02aceb8  addi 5, 3, -12808
  02acebc  addic 28, 4, 23856
  02acec0  addic 30, 31, 16
  02acec4  addic 29, 31, 64
  02acec8  ori 3, 31, 0
  02acecc  lfs 31, 0(5)
  02aced0  std 28, 112(1)
  02aced4  li 4, 1688
  02aced8  std 28, 120(1)
  02acedc  ori 5, 30, 0
  02acee0  ori 6, 29, 0
  02acee4  fmr 1, 31
  02acee8  li 7, 0
  02aceec  li 8, 0
  02acef0  ori 10, 28, 0
  02acef4  bl 0x11a560
  02acef8  nop
  02acefc  std 28, 112(1)
  02acf00  ori 3, 31, 0
  02acf04  std 28, 120(1)
  02acf08  ori 10, 28, 0
  02acf0c  fmr 1, 31
  02acf10  li 4, 1689
  02acf14  ori 5, 30, 0
  02acf18  ori 6, 29, 0
  02acf1c  li 7, 0
  02acf20  li 8, 0
  02acf24  bl 0x11a560
  02acf28  nop
  02acf2c  ori 3, 31, 0
  02acf30  std 28, 112(1)
  02acf34  ori 10, 28, 0
  02acf38  li 4, 1690
  02acf3c  fmr 1, 31
  02acf40  ori 5, 30, 0
  02acf44  std 28, 120(1)
  02acf48  ori 6, 29, 0
  02acf4c  li 7, 0
  02acf50  li 8, 0
  02acf54  bl 0x11a560
  02acf58  nop
  02acf5c  ori 3, 31, 0
  02acf60  bl 0xefb38
  02acf64  nop
  02acf68  b 0x2acf6c
  02acf6c  ld 0, 192(1)
  02acf70  mtlr 0
  02acf74  lfd 31, 168(1)
  02acf78  ld 28, 136(1)
  02acf7c  ld 29, 144(1)
  02acf80  ld 30, 152(1)
  02acf84  ld 31, 160(1)
  02acf88  addi 1, 1, 176
  02acf8c  blr
