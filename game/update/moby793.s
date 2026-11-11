# game/update/moby793.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M793_004603ac:   # 0x4603ac, 0x14 bytes
  04603ac  lis 3, 135
  04603b0  lis 4, 1
  04603b4  addic 3, 3, 15620
  04603b8  stw 4, 72(3)
  04603bc  blr

UpdateMoby_793:   # 0x4603c0, 0x4 bytes
  04603c0  blr
