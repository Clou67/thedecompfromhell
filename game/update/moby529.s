# game/update/moby529.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M529_003aba28:   # 0x3aba28, 0x14 bytes
  03aba28  lis 3, 132
  03aba2c  lis 4, 1
  03aba30  addic 3, 3, 14124
  03aba34  stw 4, 72(3)
  03aba38  blr

UpdateMoby_529:   # 0x3aba40, 0x40 bytes
  03aba40  stdu 1, -112(1)
  03aba44  mflr 0
  03aba48  std 0, 128(1)
  03aba4c  ori 4, 3, 0
  03aba50  li 5, 8
  03aba54  li 6, 533
  03aba58  lis 3, 112
  03aba5c  stb 5, 48(4)
  03aba60  addic 3, 3, 31960
  03aba64  sth 6, 166(4)
  03aba68  bl 0x6d720
  03aba6c  nop
  03aba70  ld 0, 128(1)
  03aba74  mtlr 0
  03aba78  addi 1, 1, 112
  03aba7c  blr
