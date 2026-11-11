# game/update/moby1304.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1304_002437c0:   # 0x2437c0, 0x14 bytes
  02437c0  lis 3, 121
  02437c4  lis 4, 1
  02437c8  addic 3, 3, -7812
  02437cc  stw 4, 72(3)
  02437d0  blr

UpdateMoby_1304:   # 0x2437d8, 0x24 bytes
  02437d8  stdu 1, -112(1)
  02437dc  mflr 0
  02437e0  std 0, 128(1)
  02437e4  bl 0xefb38
  02437e8  nop
  02437ec  ld 0, 128(1)
  02437f0  mtlr 0
  02437f4  addi 1, 1, 112
  02437f8  blr
