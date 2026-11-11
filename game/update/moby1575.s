# game/update/moby1575.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1575_0029ff34:   # 0x29ff34, 0x14 bytes
  029ff34  lis 3, 123
  029ff38  lis 4, 1
  029ff3c  addic 3, 3, -14476
  029ff40  stw 4, 72(3)
  029ff44  blr

UpdateMoby_1575:   # 0x29ff48, 0x4 bytes
  029ff48  blr
