# game/update/moby1562.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1562_0029a1b0:   # 0x29a1b0, 0x14 bytes
  029a1b0  lis 3, 123
  029a1b4  lis 4, 1
  029a1b8  addic 3, 3, -18268
  029a1bc  stw 4, 72(3)
  029a1c0  blr

UpdateMoby_1562:   # 0x29a1c4, 0xa0 bytes
  029a1c4  stdu 1, -112(1)
  029a1c8  mflr 0
  029a1cc  std 0, 128(1)
  029a1d0  lbz 4, 32(3)
  029a1d4  cmpwi 4, 0
  029a1d8  cmpwi 1, 4, -1
  029a1dc  cmpwi 6, 4, 1
  029a1e0  bt 1, 0x29a1ec
  029a1e4  bf 5, 0x29a254
  029a1e8  b 0x29a1f4
  029a1ec  bf 25, 0x29a208
  029a1f0  b 0x29a254
  029a1f4  li 4, 255
  029a1f8  li 5, 1
  029a1fc  stb 4, 48(3)
  029a200  stb 5, 32(3)
  029a204  b 0x29a254
  029a208  lis 3, 161
  029a20c  lwz 3, 1800(3)
  029a210  cmpwi 3, 2
  029a214  bf 2, 0x29a254
  029a218  lis 3, 150
  029a21c  addic 3, 3, -12976
  029a220  lwz 4, 48(3)
  029a224  cmpwi 6, 4, 0
  029a228  cmpwi 1, 4, 2
  029a22c  bt 26, 0x29a234
  029a230  bf 6, 0x29a254
  029a234  li 4, 0
  029a238  bt 26, 0x29a240
  029a23c  bf 6, 0x29a244
  029a240  li 4, 2
  029a244  rlwimi 3, 4, 2, 28, 28
  029a248  lwz 3, 376(3)
  029a24c  bl 0x119600
  029a250  nop
  029a254  ld 0, 128(1)
  029a258  mtlr 0
  029a25c  addi 1, 1, 112
  029a260  blr
