# game/update/moby484.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_484:   # 0x39ed0c, 0x24 bytes
  039ed0c  stdu 1, -112(1)
  039ed10  mflr 0
  039ed14  std 0, 128(1)
  039ed18  bl 0xefb38
  039ed1c  nop
  039ed20  ld 0, 128(1)
  039ed24  mtlr 0
  039ed28  addi 1, 1, 112
  039ed2c  blr
