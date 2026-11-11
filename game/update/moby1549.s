# game/update/moby1549.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1549:   # 0x298448, 0xa8 bytes
  0298448  stdu 1, -112(1)
  029844c  mflr 0
  0298450  std 0, 128(1)
  0298454  lbz 4, 32(3)
  0298458  cmpwi 4, 0
  029845c  cmpwi 1, 4, -1
  0298460  cmpwi 6, 4, 1
  0298464  bt 1, 0x298470
  0298468  bf 5, 0x2984e0
  029846c  b 0x298478
  0298470  bf 25, 0x29848c
  0298474  b 0x2984e0
  0298478  li 4, 255
  029847c  li 5, 1
  0298480  stb 4, 48(3)
  0298484  stb 5, 32(3)
  0298488  b 0x2984e0
  029848c  lis 3, 161
  0298490  lwz 3, 1800(3)
  0298494  cmpwi 3, 2
  0298498  bf 2, 0x2984e0
  029849c  lis 3, 150
  02984a0  addic 3, 3, -12976
  02984a4  lwz 4, 48(3)
  02984a8  cmpwi 6, 4, 0
  02984ac  cmpwi 1, 4, 1
  02984b0  bt 26, 0x2984b8
  02984b4  bf 6, 0x2984e0
  02984b8  li 4, 0
  02984bc  bf 26, 0x2984c8
  02984c0  li 4, 3
  02984c4  b 0x2984d0
  02984c8  bf 6, 0x2984d0
  02984cc  li 4, 2
  02984d0  rlwimi 3, 4, 2, 28, 29
  02984d4  lwz 3, 376(3)
  02984d8  bl 0x119600
  02984dc  nop
  02984e0  ld 0, 128(1)
  02984e4  mtlr 0
  02984e8  addi 1, 1, 112
  02984ec  blr
