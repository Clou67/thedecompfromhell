# game/update/moby1149.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1149_001e0448:   # 0x1e0448, 0x14 bytes
  01e0448  lis 3, 118
  01e044c  lis 4, 1
  01e0450  addic 3, 3, 19656
  01e0454  stw 4, 72(3)
  01e0458  blr

UpdateMoby_1149:   # 0x1e0460, 0x144 bytes
  01e0460  stdu 1, -144(1)
  01e0464  mflr 0
  01e0468  std 0, 160(1)
  01e046c  std 31, 136(1)
  01e0470  ori 31, 3, 0
  01e0474  lis 3, 165
  01e0478  addic 5, 3, 17860
  01e047c  std 29, 120(1)
  01e0480  lhz 4, 178(31)
  01e0484  lwz 29, 120(31)
  01e0488  extsh 3, 4
  01e048c  lbzx 5, 5, 3
  01e0490  std 30, 128(1)
  01e0494  cmpwi 5, 0
  01e0498  bf 2, 0x1e0588
  01e049c  lis 5, 151
  01e04a0  lis 30, 161
  01e04a4  srawi 3, 3, 5
  01e04a8  addic 30, 30, -13028
  01e04ac  sldi 3, 3, 2
  01e04b0  lwz 5, -25488(5)
  01e04b4  addc 3, 3, 30
  01e04b8  slwi 5, 5, 8
  01e04bc  clrldi 3, 3, 32
  01e04c0  extsw 5, 5
  01e04c4  li 6, 1
  01e04c8  clrlwi 4, 4, 27
  01e04cc  slw 4, 6, 4
  01e04d0  lwzx 3, 3, 5
  01e04d4  and 3, 3, 4
  01e04d8  cmpwi 3, 0
  01e04dc  bf 2, 0x1e0588
  01e04e0  lis 3, 151
  01e04e4  lwz 4, 0(29)
  01e04e8  addic 3, 3, -25248
  01e04ec  extsw 4, 4
  01e04f0  bl 0x110b70
  01e04f4  nop
  01e04f8  cmpwi 3, 0
  01e04fc  bt 2, 0x1e0588
  01e0500  lwz 3, 4(29)
  01e0504  cmpwi 3, -1
  01e0508  bt 2, 0x1e0588
  01e050c  lhz 5, 178(31)
  01e0510  lis 3, 151
  01e0514  lis 4, 165
  01e0518  extsh 6, 5
  01e051c  extsh 7, 5
  01e0520  srawi 6, 6, 5
  01e0524  lwz 3, -25488(3)
  01e0528  clrlwi 8, 5, 27
  01e052c  sldi 6, 6, 2
  01e0530  slwi 3, 3, 8
  01e0534  addc 6, 6, 30
  01e0538  extsw 3, 3
  01e053c  clrldi 6, 6, 32
  01e0540  srawi 7, 7, 5
  01e0544  li 9, 1
  01e0548  addic 10, 4, 19920
  01e054c  sldi 7, 7, 2
  01e0550  lwzx 4, 6, 3
  01e0554  slw 8, 9, 8
  01e0558  clrlwi 5, 5, 27
  01e055c  or 8, 4, 8
  01e0560  slw 5, 9, 5
  01e0564  lwzx 9, 10, 7
  01e0568  li 4, 0
  01e056c  stwx 8, 6, 3
  01e0570  or 3, 9, 5
  01e0574  stwx 3, 10, 7
  01e0578  lwz 3, 4(29)
  01e057c  extsw 3, 3
  01e0580  bl 0x167e60
  01e0584  nop
  01e0588  ld 0, 160(1)
  01e058c  mtlr 0
  01e0590  ld 29, 120(1)
  01e0594  ld 30, 128(1)
  01e0598  ld 31, 136(1)
  01e059c  addi 1, 1, 144
  01e05a0  blr
