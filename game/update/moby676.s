# game/update/moby676.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M676_0040f810:   # 0x40f810, 0x38 bytes
  040f810  stdu 1, -112(1)
  040f814  mflr 0
  040f818  std 0, 128(1)
  040f81c  bl 0x17d488
  040f820  nop
  040f824  lis 4, 133
  040f828  li 3, 8
  040f82c  addic 4, 4, 27616
  040f830  bl 0x17d4b8
  040f834  nop
  040f838  ld 0, 128(1)
  040f83c  mtlr 0
  040f840  addi 1, 1, 112
  040f844  blr

UpdateMoby_676:   # 0x40f848, 0x30 bytes
  040f848  stdu 1, -112(1)
  040f84c  mflr 0
  040f850  std 0, 128(1)
  040f854  lis 5, 113
  040f858  ori 4, 3, 0
  040f85c  addic 3, 5, -8232
  040f860  bl 0x6d720
  040f864  nop
  040f868  ld 0, 128(1)
  040f86c  mtlr 0
  040f870  addi 1, 1, 112
  040f874  blr
