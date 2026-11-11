# sdk/libm/xferaise.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Feraise:   # 0x5dd4f8, 0xb0 bytes
  05dd4f8  stdu 1, -128(1)
  05dd4fc  mflr 0
  05dd500  std 31, 120(1)
  05dd504  std 0, 144(1)
  05dd508  rlwinm 0, 3, 0, 3, 4
  05dd50c  mr 31, 3
  05dd510  cmpwi 7, 0, 0
  05dd514  bt 30, 0x5dd51c
  05dd518  oris 31, 3, 512
  05dd51c  extsw 3, 31
  05dd520  bl 0x5ddaec
  05dd524  nop
  05dd528  rlwinm 0, 31, 0, 3, 4
  05dd52c  cmpwi 6, 0, 0
  05dd530  lis 0, 9216
  05dd534  and 0, 31, 0
  05dd538  cmpwi 7, 0, 0
  05dd53c  bf 30, 0x5dd580
  05dd540  bf 26, 0x5dd558
  05dd544  ld 0, 144(1)
  05dd548  ld 31, 120(1)
  05dd54c  addi 1, 1, 128
  05dd550  mtlr 0
  05dd554  blr
  05dd558  bl 0x5d5904
  05dd55c  nop
  05dd560  lis 0, -32767
  05dd564  ld 31, 120(1)
  05dd568  ori 0, 0, 28
  05dd56c  stw 0, 0(3)
  05dd570  ld 0, 144(1)
  05dd574  addi 1, 1, 128
  05dd578  mtlr 0
  05dd57c  blr
  05dd580  bl 0x5d5904
  05dd584  nop
  05dd588  lis 0, -32767
  05dd58c  ld 31, 120(1)
  05dd590  ori 0, 0, 27
  05dd594  stw 0, 0(3)
  05dd598  ld 0, 144(1)
  05dd59c  addi 1, 1, 128
  05dd5a0  mtlr 0
  05dd5a4  blr
