# game/update/moby343.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M343_00350984:   # 0x350984, 0x14 bytes
  0350984  lis 3, 132
  0350988  lis 4, 1
  035098c  addic 3, 3, 328
  0350990  stw 4, 72(3)
  0350994  blr

UpdateMoby_343:   # 0x350998, 0x4 bytes
  0350998  blr
