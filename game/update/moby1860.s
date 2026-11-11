# game/update/moby1860.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1860_002cd95c:   # 0x2cd95c, 0x14 bytes
  02cd95c  lis 3, 124
  02cd960  lis 4, 1
  02cd964  addic 3, 3, -11068
  02cd968  stw 4, 72(3)
  02cd96c  blr

UpdateMoby_1860:   # 0x2cd970, 0x4 bytes
  02cd970  blr
