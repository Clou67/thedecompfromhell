# game/update/moby1978.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1978_002e502c:   # 0x2e502c, 0x14 bytes
  02e502c  lis 3, 128
  02e5030  lis 4, 1
  02e5034  addic 3, 3, -6012
  02e5038  stw 4, 72(3)
  02e503c  blr

UpdateMoby_1978:   # 0x2e5040, 0x4 bytes
  02e5040  blr
