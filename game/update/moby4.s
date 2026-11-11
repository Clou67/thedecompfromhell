# game/update/moby4.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_4:   # 0x3627a4, 0x68 bytes
  03627a4  stdu 1, -112(1)
  03627a8  mflr 0
  03627ac  std 0, 128(1)
  03627b0  lbz 4, 32(3)
  03627b4  cmpwi 4, 0
  03627b8  cmpwi 1, 4, 1
  03627bc  cmpwi 6, 4, -1
  03627c0  bt 1, 0x3627cc
  03627c4  bf 25, 0x3627fc
  03627c8  b 0x3627d4
  03627cc  bf 5, 0x3627e8
  03627d0  b 0x3627fc
  03627d4  li 4, 1
  03627d8  li 5, 255
  03627dc  stb 4, 32(3)
  03627e0  stb 5, 48(3)
  03627e4  b 0x3627fc
  03627e8  lis 5, 113
  03627ec  ori 4, 3, 0
  03627f0  addic 3, 5, -14400
  03627f4  bl 0x6d7e0
  03627f8  nop
  03627fc  ld 0, 128(1)
  0362800  mtlr 0
  0362804  addi 1, 1, 112
  0362808  blr
