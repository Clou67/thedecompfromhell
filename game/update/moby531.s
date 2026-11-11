# game/update/moby531.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M531_003ac61c:   # 0x3ac61c, 0x14 bytes
  03ac61c  lis 3, 132
  03ac620  lis 4, 1
  03ac624  addic 3, 3, 21784
  03ac628  stw 4, 72(3)
  03ac62c  blr

UpdateMoby_531:   # 0x3ac630, 0x4 bytes
  03ac630  blr
