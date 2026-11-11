# game/update/moby913.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M913_004af340:   # 0x4af340, 0x14 bytes
  04af340  lis 3, 143
  04af344  lis 4, 1
  04af348  addic 3, 3, 16712
  04af34c  stw 4, 72(3)
  04af350  blr

UpdateMoby_913:   # 0x4af358, 0x4 bytes
  04af358  blr
