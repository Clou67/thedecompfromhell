# sdk/libc/strncat.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

strncat:   # 0x5cc9c4, 0x164 bytes
  05cc9c4  clrldi 7, 3, 32
  05cc9c8  rlwinm 3, 3, 0, 0, 28
  05cc9cc  clrldi 0, 7, 61
  05cc9d0  cmpdi 7, 0, 0
  05cc9d4  bt 30, 0x5cca80
  05cc9d8  lis 9, 32639
  05cc9dc  clrldi 8, 3, 32
  05cc9e0  subfic 10, 0, 8
  05cc9e4  ori 9, 9, 32639
  05cc9e8  sldi 10, 10, 3
  05cc9ec  sldi 9, 9, 32
  05cc9f0  li 0, -1
  05cc9f4  ld 11, 0(8)
  05cc9f8  oris 9, 9, 32639
  05cc9fc  sld 0, 0, 10
  05cca00  ori 9, 9, 32639
  05cca04  or 11, 11, 0
  05cca08  and 0, 11, 9
  05cca0c  or 11, 11, 9
  05cca10  add 0, 0, 9
  05cca14  nor 0, 0, 11
  05cca18  cmpdi 0, 0
  05cca1c  bt 2, 0x5cca7c
  05cca20  cntlzd 0, 0
  05cca24  cmpwi 7, 5, 0
  05cca28  rldicl 0, 0, 61, 3
  05cca2c  add 3, 3, 0
  05cca30  bt 30, 0x5cca68
  05cca34  lbz 0, 0(4)
  05cca38  cmpwi 7, 0, 0
  05cca3c  bt 30, 0x5cca68
  05cca40  clrldi 5, 5, 32
  05cca44  mtctr 5
  05cca48  b 0x5cca58
  05cca4c  lbzu 0, 1(4)
  05cca50  cmpwi 7, 0, 0
  05cca54  bt 30, 0x5cca68
  05cca58  clrldi 9, 3, 32
  05cca5c  addi 3, 3, 1
  05cca60  stb 0, 0(9)
  05cca64  bdnz 0x5cca4c
  05cca68  clrldi 9, 3, 32
  05cca6c  li 0, 0
  05cca70  mr 3, 7
  05cca74  stb 0, 0(9)
  05cca78  blr
  05cca7c  addi 3, 3, 8
  05cca80  lis 9, 32639
  05cca84  clrldi 10, 3, 32
  05cca88  ori 9, 9, 32639
  05cca8c  sldi 9, 9, 32
  05cca90  b 0x5ccaa8
  05cca94  lis 9, 32639
  05cca98  addi 3, 3, 8
  05cca9c  ori 9, 9, 32639
  05ccaa0  clrldi 10, 3, 32
  05ccaa4  sldi 9, 9, 32
  05ccaa8  oris 9, 9, 32639
  05ccaac  ld 11, 0(10)
  05ccab0  ori 9, 9, 32639
  05ccab4  and 0, 11, 9
  05ccab8  or 11, 11, 9
  05ccabc  add 0, 0, 9
  05ccac0  nor 0, 0, 11
  05ccac4  cmpdi 0, 0
  05ccac8  bt 2, 0x5cca94
  05ccacc  cntlzd 0, 0
  05ccad0  cmpwi 7, 5, 0
  05ccad4  rldicl 0, 0, 61, 3
  05ccad8  add 3, 3, 0
  05ccadc  bt 30, 0x5cca68
  05ccae0  lbz 0, 0(4)
  05ccae4  cmpwi 7, 0, 0
  05ccae8  bt 30, 0x5cca68
  05ccaec  clrldi 5, 5, 32
  05ccaf0  mtctr 5
  05ccaf4  b 0x5ccb04
  05ccaf8  lbzu 0, 1(4)
  05ccafc  cmpwi 7, 0, 0
  05ccb00  bt 30, 0x5cca68
  05ccb04  clrldi 9, 3, 32
  05ccb08  addi 3, 3, 1
  05ccb0c  stb 0, 0(9)
  05ccb10  bdnz 0x5ccaf8
  05ccb14  clrldi 9, 3, 32
  05ccb18  li 0, 0
  05ccb1c  mr 3, 7
  05ccb20  stb 0, 0(9)
  05ccb24  blr
