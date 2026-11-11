# game/update/moby1.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_MOBY1:   # 0x18095c, 0x14 bytes
  018095c  lis 3, 116
  0180960  lis 4, 1
  0180964  addic 3, 3, -19020
  0180968  stw 4, 72(3)
  018096c  blr

UpdateMoby_1:   # 0x180970, 0x14 bytes
  0180970  lwz 3, 120(3)
  0180974  lwz 4, 0(3)
  0180978  addic 4, 4, 1
  018097c  stw 4, 0(3)
  0180980  blr
