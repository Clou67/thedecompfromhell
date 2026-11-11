# game/update/moby174.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M174_002b06a4:   # 0x2b06a4, 0x14 bytes
  02b06a4  lis 3, 123
  02b06a8  lis 4, 1
  02b06ac  addic 3, 3, 29684
  02b06b0  stw 4, 72(3)
  02b06b4  blr

UpdateMoby_174:   # 0x2b06b8, 0x4 bytes
  02b06b8  blr
