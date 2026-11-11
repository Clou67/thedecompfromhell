# sdk/libc/strncmp.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

strncmp:   # 0x5ccb28, 0x1c4 bytes
  05ccb28  cmplwi 7, 5, 7
  05ccb2c  mr 11, 3
  05ccb30  mr 10, 4
  05ccb34  mr 7, 4
  05ccb38  bf 29, 0x5ccbd4
  05ccb3c  or 8, 11, 10
  05ccb40  clrlwi 0, 8, 29
  05ccb44  cmpwi 7, 0, 0
  05ccb48  bf 30, 0x5ccc24
  05ccb4c  srwi 6, 5, 3
  05ccb50  ld 9, 0(11)
  05ccb54  clrlwi 5, 5, 29
  05ccb58  ld 0, 0(10)
  05ccb5c  cmpwi 7, 6, 0
  05ccb60  bf 29, 0x5ccbd4
  05ccb64  cmpd 7, 9, 0
  05ccb68  bf 30, 0x5cccdc
  05ccb6c  lis 11, 32639
  05ccb70  ori 11, 11, 32639
  05ccb74  sldi 11, 11, 32
  05ccb78  oris 11, 11, 32639
  05ccb7c  ori 11, 11, 32639
  05ccb80  and 0, 9, 11
  05ccb84  or 9, 9, 11
  05ccb88  add 0, 0, 11
  05ccb8c  nor 10, 0, 9
  05ccb90  cmpdi 10, 0
  05ccb94  bf 2, 0x5ccc18
  05ccb98  clrldi 6, 6, 32
  05ccb9c  mr 8, 11
  05ccba0  mtctr 6
  05ccba4  b 0x5ccbb0
  05ccba8  bf 30, 0x5cccdc
  05ccbac  bf 2, 0x5ccc18
  05ccbb0  ldu 0, 8(4)
  05ccbb4  ldu 11, 8(3)
  05ccbb8  and 9, 0, 8
  05ccbbc  or 10, 0, 8
  05ccbc0  add 9, 9, 8
  05ccbc4  cmpd 7, 11, 0
  05ccbc8  nor 0, 9, 10
  05ccbcc  cmpdi 0, 0
  05ccbd0  bdnz 0x5ccba8
  05ccbd4  cmpwi 7, 5, 0
  05ccbd8  bt 30, 0x5ccc18
  05ccbdc  lbz 0, 0(3)
  05ccbe0  lbz 9, 0(4)
  05ccbe4  cmpw 7, 0, 9
  05ccbe8  bf 30, 0x5cccc8
  05ccbec  cmpwi 7, 0, 0
  05ccbf0  clrldi 5, 5, 32
  05ccbf4  mtctr 5
  05ccbf8  bt 30, 0x5ccc18
  05ccbfc  bdz 0x5ccc18
  05ccc00  lbzu 0, 1(3)
  05ccc04  lbzu 9, 1(4)
  05ccc08  cmpwi 6, 0, 0
  05ccc0c  cmpw 7, 0, 9
  05ccc10  bf 30, 0x5cccc8
  05ccc14  bf 26, 0x5ccbfc
  05ccc18  li 3, 0
  05ccc1c  extsw 3, 3
  05ccc20  blr
  05ccc24  clrlwi 0, 8, 30
  05ccc28  mr 3, 11
  05ccc2c  cmpwi 7, 0, 0
  05ccc30  mr 4, 10
  05ccc34  bf 30, 0x5ccbdc
  05ccc38  srwi 10, 5, 2
  05ccc3c  lwz 9, 0(11)
  05ccc40  clrlwi 5, 5, 30
  05ccc44  lwz 0, 0(7)
  05ccc48  cmpwi 7, 10, 0
  05ccc4c  bf 29, 0x5ccbd4
  05ccc50  cmpw 7, 9, 0
  05ccc54  bf 30, 0x5ccce4
  05ccc58  lis 0, 32639
  05ccc5c  oris 11, 9, 32639
  05ccc60  ori 0, 0, 32639
  05ccc64  ori 11, 11, 32639
  05ccc68  and 9, 9, 0
  05ccc6c  clrldi 10, 10, 32
  05ccc70  addis 9, 9, 32639
  05ccc74  mr 8, 0
  05ccc78  mtctr 10
  05ccc7c  addi 9, 9, 32639
  05ccc80  nor 9, 9, 11
  05ccc84  cmpwi 7, 9, 0
  05ccc88  bt 30, 0x5ccc9c
  05ccc8c  b 0x5ccc18
  05ccc90  cmpwi 7, 9, 0
  05ccc94  bf 26, 0x5ccce4
  05ccc98  bf 30, 0x5ccc18
  05ccc9c  lwzu 0, 4(4)
  05ccca0  lwzu 10, 4(3)
  05ccca4  and 9, 0, 8
  05ccca8  oris 11, 0, 32639
  05cccac  addis 9, 9, 32639
  05cccb0  ori 11, 11, 32639
  05cccb4  addi 9, 9, 32639
  05cccb8  cmpw 6, 10, 0
  05cccbc  nor 9, 9, 11
  05cccc0  bdnz 0x5ccc90
  05cccc4  b 0x5ccbd4
  05cccc8  cmplw 7, 0, 9
  05ccccc  li 3, 1
  05cccd0  bf 28, 0x5ccc1c
  05cccd4  li 3, -1
  05cccd8  b 0x5ccc1c
  05cccdc  li 5, 8
  05ccce0  b 0x5ccbd4
  05ccce4  li 5, 4
  05ccce8  b 0x5ccbd4
