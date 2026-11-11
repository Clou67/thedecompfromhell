# game/update/moby1001.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1001_001817a4:   # 0x1817a4, 0x14 bytes
  01817a4  lis 3, 116
  01817a8  lis 4, 1
  01817ac  addic 3, 3, -18740
  01817b0  stw 4, 72(3)
  01817b4  blr

UpdateMoby_1001:   # 0x1817b8, 0x4 bytes
  01817b8  blr
