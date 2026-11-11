# sdk/libc/gmtime.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

gmtime:   # 0x5c58b0, 0x50 bytes
  05c58b0  stdu 1, -160(1)
  05c58b4  mflr 0
  05c58b8  std 29, 136(1)
  05c58bc  std 0, 176(1)
  05c58c0  mr 29, 3
  05c58c4  addi 4, 1, 116
  05c58c8  addi 3, 1, 112
  05c58cc  li 11, 144
  05c58d0  sc
  05c58d4  li 3, 0
  05c58d8  ld 4, 0(29)
  05c58dc  li 5, 0
  05c58e0  bl 0x5cbe4c
  05c58e4  nop
  05c58e8  ld 0, 176(1)
  05c58ec  ld 29, 136(1)
  05c58f0  clrldi 3, 3, 32
  05c58f4  mtlr 0
  05c58f8  addi 1, 1, 160
  05c58fc  blr
