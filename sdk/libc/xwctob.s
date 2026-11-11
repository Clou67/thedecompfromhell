# sdk/libc/xwctob.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Wctob:   # 0x5cc0d8, 0x64 bytes
  05cc0d8  stdu 1, -128(1)
  05cc0dc  mflr 0
  05cc0e0  li 9, 0
  05cc0e4  std 0, 144(1)
  05cc0e8  mr 0, 3
  05cc0ec  addi 5, 1, 116
  05cc0f0  cmpwi 7, 0, -1
  05cc0f4  addi 3, 1, 112
  05cc0f8  clrldi 4, 0, 48
  05cc0fc  bf 30, 0x5cc118
  05cc100  li 3, -1
  05cc104  ld 0, 144(1)
  05cc108  extsw 3, 3
  05cc10c  addi 1, 1, 128
  05cc110  mtlr 0
  05cc114  blr
  05cc118  sth 9, 122(1)
  05cc11c  stw 9, 116(1)
  05cc120  sth 9, 120(1)
  05cc124  bl 0x5cc418
  05cc128  nop
  05cc12c  cmpwi 7, 3, 1
  05cc130  bf 30, 0x5cc100
  05cc134  lbz 3, 112(1)
  05cc138  b 0x5cc104
