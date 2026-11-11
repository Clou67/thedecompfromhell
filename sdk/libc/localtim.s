# sdk/libc/localtim.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

localtime:   # 0x5c5900, 0x84 bytes
  05c5900  stdu 1, -160(1)
  05c5904  mflr 0
  05c5908  std 28, 128(1)
  05c590c  std 29, 136(1)
  05c5910  mr 28, 3
  05c5914  std 0, 176(1)
  05c5918  addi 4, 1, 116
  05c591c  addi 3, 1, 112
  05c5920  li 11, 144
  05c5924  sc
  05c5928  lwz 0, 116(1)
  05c592c  li 3, 0
  05c5930  lwz 29, 112(1)
  05c5934  srawi 9, 0, 31
  05c5938  slwi 4, 29, 6
  05c593c  xor 5, 9, 0
  05c5940  ld 0, 0(28)
  05c5944  slwi 29, 29, 2
  05c5948  sub 5, 9, 5
  05c594c  sub 4, 4, 29
  05c5950  srwi 5, 5, 31
  05c5954  extsw 4, 4
  05c5958  extsw 5, 5
  05c595c  add 4, 4, 0
  05c5960  bl 0x5cbe4c
  05c5964  nop
  05c5968  ld 0, 176(1)
  05c596c  ld 28, 128(1)
  05c5970  clrldi 3, 3, 32
  05c5974  ld 29, 136(1)
  05c5978  mtlr 0
  05c597c  addi 1, 1, 160
  05c5980  blr
