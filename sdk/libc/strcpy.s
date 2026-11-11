# sdk/libc/strcpy.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

strcpy:   # 0x5cc8d8, 0xec bytes
  05cc8d8  or 11, 3, 4
  05cc8dc  mr 6, 3
  05cc8e0  clrlwi 0, 11, 29
  05cc8e4  cmpwi 7, 0, 0
  05cc8e8  bf 30, 0x5cc960
  05cc8ec  lis 10, 32639
  05cc8f0  ld 11, 0(4)
  05cc8f4  ori 10, 10, 32639
  05cc8f8  sldi 10, 10, 32
  05cc8fc  oris 10, 10, 32639
  05cc900  ori 10, 10, 32639
  05cc904  and 0, 11, 10
  05cc908  or 9, 11, 10
  05cc90c  add 0, 0, 10
  05cc910  nor 8, 0, 9
  05cc914  cmpdi 8, 0
  05cc918  bf 2, 0x5cc940
  05cc91c  std 11, 0(3)
  05cc920  ldu 11, 8(4)
  05cc924  addi 3, 3, 8
  05cc928  and 0, 11, 10
  05cc92c  or 9, 11, 10
  05cc930  add 0, 0, 10
  05cc934  nor 8, 0, 9
  05cc938  cmpdi 8, 0
  05cc93c  bt 2, 0x5cc91c
  05cc940  lbz 0, 0(4)
  05cc944  addi 4, 4, 1
  05cc948  cmpwi 7, 0, 0
  05cc94c  stb 0, 0(3)
  05cc950  addi 3, 3, 1
  05cc954  bf 30, 0x5cc940
  05cc958  clrldi 3, 6, 32
  05cc95c  blr
  05cc960  clrlwi 0, 11, 30
  05cc964  cmpwi 7, 0, 0
  05cc968  bf 30, 0x5cc940
  05cc96c  lis 10, 32639
  05cc970  lwz 11, 0(4)
  05cc974  ori 10, 10, 32639
  05cc978  b 0x5cc988
  05cc97c  stw 11, 0(3)
  05cc980  lwzu 11, 4(4)
  05cc984  addi 3, 3, 4
  05cc988  and 9, 11, 10
  05cc98c  oris 0, 11, 32639
  05cc990  addis 9, 9, 32639
  05cc994  ori 0, 0, 32639
  05cc998  addi 9, 9, 32639
  05cc99c  nor 9, 9, 0
  05cc9a0  cmpwi 7, 9, 0
  05cc9a4  bt 30, 0x5cc97c
  05cc9a8  lbz 0, 0(4)
  05cc9ac  addi 4, 4, 1
  05cc9b0  cmpwi 7, 0, 0
  05cc9b4  stb 0, 0(3)
  05cc9b8  addi 3, 3, 1
  05cc9bc  bf 30, 0x5cc940
  05cc9c0  b 0x5cc958
