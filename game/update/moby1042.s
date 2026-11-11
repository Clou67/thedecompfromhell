# game/update/moby1042.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1042:   # 0x196a88, 0x58 bytes
  0196a88  stdu 1, -128(1)
  0196a8c  mflr 0
  0196a90  std 0, 144(1)
  0196a94  std 31, 120(1)
  0196a98  ori 31, 3, 0
  0196a9c  lis 4, 1
  0196aa0  li 5, 0
  0196aa4  bl 0x10675c
  0196aa8  nop
  0196aac  cmpwi 3, 0
  0196ab0  bt 2, 0x196acc
  0196ab4  lwz 3, 44(3)
  0196ab8  cmpwi 3, 0
  0196abc  bf 1, 0x196acc
  0196ac0  ori 3, 31, 0
  0196ac4  bl 0xefb38
  0196ac8  nop
  0196acc  ld 0, 144(1)
  0196ad0  mtlr 0
  0196ad4  ld 31, 120(1)
  0196ad8  addi 1, 1, 128
  0196adc  blr
