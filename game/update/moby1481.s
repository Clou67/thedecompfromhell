# game/update/moby1481.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1481_0028cb80:   # 0x28cb80, 0x14 bytes
  028cb80  lis 3, 123
  028cb84  lis 4, 1
  028cb88  addic 3, 3, -20236
  028cb8c  stw 4, 72(3)
  028cb90  blr

UpdateMoby_1481:   # 0x28cb98, 0x4 bytes
  028cb98  blr
