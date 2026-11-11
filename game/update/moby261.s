# game/update/moby261.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M261_0031ddc8:   # 0x31ddc8, 0x14 bytes
  031ddc8  lis 3, 128
  031ddcc  lis 4, 1
  031ddd0  addic 3, 3, -28
  031ddd4  stw 4, 72(3)
  031ddd8  blr

UpdateMoby_261:   # 0x31dde0, 0x4 bytes
  031dde0  blr
