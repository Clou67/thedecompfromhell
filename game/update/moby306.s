# game/update/moby306.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M306_0033bf70:   # 0x33bf70, 0x14 bytes
  033bf70  lis 3, 129
  033bf74  lis 4, 1
  033bf78  addic 3, 3, 7540
  033bf7c  stw 4, 72(3)
  033bf80  blr

UpdateMoby_306:   # 0x33bf88, 0x4 bytes
  033bf88  blr
