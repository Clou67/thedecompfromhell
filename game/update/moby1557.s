# game/update/moby1557.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1557:   # 0x298b84, 0xb8 bytes
  0298b84  stdu 1, -112(1)
  0298b88  mflr 0
  0298b8c  std 0, 128(1)
  0298b90  lbz 4, 32(3)
  0298b94  cmpwi 4, 0
  0298b98  cmpwi 1, 4, 1
  0298b9c  cmpwi 6, 4, -1
  0298ba0  bt 1, 0x298bac
  0298ba4  bf 25, 0x298c2c
  0298ba8  b 0x298bb4
  0298bac  bf 5, 0x298bc8
  0298bb0  b 0x298c2c
  0298bb4  li 4, 255
  0298bb8  li 5, 1
  0298bbc  stb 4, 48(3)
  0298bc0  stb 5, 32(3)
  0298bc4  b 0x298c2c
  0298bc8  lis 3, 161
  0298bcc  lwz 3, 1800(3)
  0298bd0  cmpwi 3, 2
  0298bd4  bf 2, 0x298c2c
  0298bd8  lis 3, 150
  0298bdc  addic 3, 3, -12976
  0298be0  lwz 4, 48(3)
  0298be4  cmpwi 4, 1
  0298be8  cmpwi 1, 4, 7
  0298bec  bt 2, 0x298bf4
  0298bf0  bf 6, 0x298c2c
  0298bf4  li 5, 1
  0298bf8  li 6, 2
  0298bfc  subc 4, 5, 4
  0298c00  li 5, 0
  0298c04  cntlzw 4, 4
  0298c08  subc 6, 6, 5
  0298c0c  sldi 4, 4, 58
  0298c10  sradi 4, 4, 63
  0298c14  and 4, 4, 6
  0298c18  addc 4, 5, 4
  0298c1c  rlwimi 3, 4, 2, 28, 28
  0298c20  lwz 3, 376(3)
  0298c24  bl 0x119600
  0298c28  nop
  0298c2c  ld 0, 128(1)
  0298c30  mtlr 0
  0298c34  addi 1, 1, 112
  0298c38  blr
