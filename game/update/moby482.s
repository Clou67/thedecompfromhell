# game/update/moby482.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M482_0039ecd0:   # 0x39ecd0, 0x14 bytes
  039ecd0  lis 3, 132
  039ecd4  lis 4, 1
  039ecd8  addic 3, 3, 12488
  039ecdc  stw 4, 72(3)
  039ece0  blr

UpdateMoby_482:   # 0x39ece8, 0x24 bytes
  039ece8  stdu 1, -112(1)
  039ecec  mflr 0
  039ecf0  std 0, 128(1)
  039ecf4  bl 0xefb38
  039ecf8  nop
  039ecfc  ld 0, 128(1)
  039ed00  mtlr 0
  039ed04  addi 1, 1, 112
  039ed08  blr
