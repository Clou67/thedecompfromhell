# game/update/moby2000.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M2000_002e68a0:   # 0x2e68a0, 0x14 bytes
  02e68a0  lis 3, 128
  02e68a4  lis 4, 1
  02e68a8  addic 3, 3, -5676
  02e68ac  stw 4, 72(3)
  02e68b0  blr

UpdateMoby_2000:   # 0x2e68b8, 0x4 bytes
  02e68b8  blr
