# game/update/moby17.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_17:   # 0x2acf90, 0xf8 bytes
  02acf90  stdu 1, -128(1)
  02acf94  mflr 0
  02acf98  std 0, 144(1)
  02acf9c  std 31, 120(1)
  02acfa0  lbz 4, 32(3)
  02acfa4  std 30, 112(1)
  02acfa8  ori 31, 3, 0
  02acfac  lwz 30, 120(3)
  02acfb0  cmpwi 4, 0
  02acfb4  cmpwi 1, 4, 2
  02acfb8  cmpwi 6, 4, 1
  02acfbc  cmpwi 7, 4, -1
  02acfc0  bt 1, 0x2acfcc
  02acfc4  bf 29, 0x2ad070
  02acfc8  b 0x2acfd8
  02acfcc  bf 25, 0x2ad000
  02acfd0  bf 5, 0x2ad024
  02acfd4  b 0x2ad070
  02acfd8  li 5, 1
  02acfdc  ori 3, 31, 0
  02acfe0  ori 4, 30, 0
  02acfe4  stb 5, 32(31)
  02acfe8  bl 0x4d3720
  02acfec  nop
  02acff0  lis 3, 16492
  02acff4  ori 3, 3, 52429
  02acff8  stw 3, 12(30)
  02acffc  b 0x2ad070
  02ad000  ori 3, 31, 0
  02ad004  ori 4, 30, 0
  02ad008  bl 0x4d3870
  02ad00c  nop
  02ad010  cmpwi 3, 0
  02ad014  bt 2, 0x2ad070
  02ad018  li 3, 2
  02ad01c  stb 3, 32(31)
  02ad020  b 0x2ad070
  02ad024  lis 3, 161
  02ad028  lwz 3, 1800(3)
  02ad02c  cmpwi 3, 2
  02ad030  bt 2, 0x2ad070
  02ad034  li 3, 1
  02ad038  stb 3, 32(31)
  02ad03c  lhz 3, 4(30)
  02ad040  cmpwi 3, 2
  02ad044  bf 2, 0x2ad070
  02ad048  bl 0x7b458
  02ad04c  nop
  02ad050  li 3, 3
  02ad054  li 4, 1
  02ad058  bl 0x112e18
  02ad05c  nop
  02ad060  li 3, 11003
  02ad064  li 4, 61
  02ad068  bl 0x7b310
  02ad06c  nop
  02ad070  ld 0, 144(1)
  02ad074  mtlr 0
  02ad078  ld 30, 112(1)
  02ad07c  ld 31, 120(1)
  02ad080  addi 1, 1, 128
  02ad084  blr
