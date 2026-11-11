# game/update/moby1558.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1558:   # 0x298c3c, 0xb0 bytes
  0298c3c  stdu 1, -112(1)
  0298c40  mflr 0
  0298c44  std 0, 128(1)
  0298c48  lbz 4, 32(3)
  0298c4c  cmpwi 4, 0
  0298c50  cmpwi 1, 4, 1
  0298c54  cmpwi 6, 4, -1
  0298c58  bt 1, 0x298c64
  0298c5c  bf 25, 0x298cdc
  0298c60  b 0x298c6c
  0298c64  bf 5, 0x298c80
  0298c68  b 0x298cdc
  0298c6c  li 4, 255
  0298c70  li 5, 1
  0298c74  stb 4, 48(3)
  0298c78  stb 5, 32(3)
  0298c7c  b 0x298cdc
  0298c80  lis 3, 161
  0298c84  lwz 3, 1800(3)
  0298c88  cmpwi 3, 2
  0298c8c  bf 2, 0x298cdc
  0298c90  lis 3, 150
  0298c94  addic 3, 3, -12976
  0298c98  lwz 4, 48(3)
  0298c9c  cmpwi 4, 2
  0298ca0  bf 2, 0x298cdc
  0298ca4  li 5, 2
  0298ca8  li 6, 2
  0298cac  subc 4, 5, 4
  0298cb0  li 5, 0
  0298cb4  cntlzw 4, 4
  0298cb8  subc 6, 6, 5
  0298cbc  sldi 4, 4, 58
  0298cc0  sradi 4, 4, 63
  0298cc4  and 4, 4, 6
  0298cc8  addc 4, 5, 4
  0298ccc  rlwimi 3, 4, 2, 28, 28
  0298cd0  lwz 3, 376(3)
  0298cd4  bl 0x119600
  0298cd8  nop
  0298cdc  ld 0, 128(1)
  0298ce0  mtlr 0
  0298ce4  addi 1, 1, 112
  0298ce8  blr
