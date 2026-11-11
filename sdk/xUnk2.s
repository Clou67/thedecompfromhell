# sdk/xUnk2.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

memcpy4:   # 0x5cc0a8, 0x30 bytes
  05cc0a8  stdu 1, -112(1)
  05cc0ac  mflr 0
  05cc0b0  stw 4, 168(1)
  05cc0b4  li 5, 4
  05cc0b8  addi 4, 1, 168
  05cc0bc  std 0, 128(1)
  05cc0c0  bl 0x5c5ad0
  05cc0c4  nop
  05cc0c8  ld 0, 128(1)
  05cc0cc  addi 1, 1, 112
  05cc0d0  mtlr 0
  05cc0d4  blr
