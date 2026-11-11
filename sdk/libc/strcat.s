# sdk/libc/strcat.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

strcat:   # 0x5cc44c, 0x12c bytes
  05cc44c  clrldi 7, 3, 32
  05cc450  rlwinm 3, 3, 0, 0, 28
  05cc454  clrldi 0, 7, 61
  05cc458  cmpdi 7, 0, 0
  05cc45c  bt 30, 0x5cc4ec
  05cc460  lis 9, 32639
  05cc464  clrldi 8, 3, 32
  05cc468  subfic 10, 0, 8
  05cc46c  ori 9, 9, 32639
  05cc470  sldi 10, 10, 3
  05cc474  sldi 9, 9, 32
  05cc478  li 0, -1
  05cc47c  ld 11, 0(8)
  05cc480  oris 9, 9, 32639
  05cc484  sld 0, 0, 10
  05cc488  ori 9, 9, 32639
  05cc48c  or 11, 11, 0
  05cc490  and 0, 11, 9
  05cc494  or 11, 11, 9
  05cc498  add 0, 0, 9
  05cc49c  nor 0, 0, 11
  05cc4a0  cmpdi 0, 0
  05cc4a4  bt 2, 0x5cc4e8
  05cc4a8  cntlzd 0, 0
  05cc4ac  rldicl 0, 0, 61, 3
  05cc4b0  lbz 11, 0(4)
  05cc4b4  add 3, 3, 0
  05cc4b8  cmpwi 7, 11, 0
  05cc4bc  clrldi 9, 3, 32
  05cc4c0  stb 11, 0(9)
  05cc4c4  bt 30, 0x5cc4e0
  05cc4c8  addi 3, 3, 1
  05cc4cc  lbzu 0, 1(4)
  05cc4d0  clrldi 9, 3, 32
  05cc4d4  cmpwi 7, 0, 0
  05cc4d8  stb 0, 0(9)
  05cc4dc  bf 30, 0x5cc4c8
  05cc4e0  mr 3, 7
  05cc4e4  blr
  05cc4e8  addi 3, 3, 8
  05cc4ec  lis 9, 32639
  05cc4f0  clrldi 10, 3, 32
  05cc4f4  ori 9, 9, 32639
  05cc4f8  sldi 9, 9, 32
  05cc4fc  b 0x5cc514
  05cc500  lis 9, 32639
  05cc504  addi 3, 3, 8
  05cc508  ori 9, 9, 32639
  05cc50c  clrldi 10, 3, 32
  05cc510  sldi 9, 9, 32
  05cc514  oris 9, 9, 32639
  05cc518  ld 11, 0(10)
  05cc51c  ori 9, 9, 32639
  05cc520  and 0, 11, 9
  05cc524  or 11, 11, 9
  05cc528  add 0, 0, 9
  05cc52c  nor 0, 0, 11
  05cc530  cmpdi 0, 0
  05cc534  bt 2, 0x5cc500
  05cc538  cntlzd 0, 0
  05cc53c  rldicl 0, 0, 61, 3
  05cc540  lbz 11, 0(4)
  05cc544  add 3, 3, 0
  05cc548  cmpwi 7, 11, 0
  05cc54c  clrldi 9, 3, 32
  05cc550  stb 11, 0(9)
  05cc554  bt 30, 0x5cc4e0
  05cc558  addi 3, 3, 1
  05cc55c  lbzu 0, 1(4)
  05cc560  clrldi 9, 3, 32
  05cc564  cmpwi 7, 0, 0
  05cc568  stb 0, 0(9)
  05cc56c  bf 30, 0x5cc558
  05cc570  mr 3, 7
  05cc574  blr
