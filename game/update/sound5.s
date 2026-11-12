# game/update/sound5.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateSound_5:   # 0x1806e8, 0xf8 bytes
  01806e8  stdu 1, -128(1)
  01806ec  mflr 0
  01806f0  std 0, 144(1)
  01806f4  std 31, 120(1)
  01806f8  lwz 31, 8(3)
  01806fc  lis 5, 149
  0180700  lis 4, 150
  0180704  addic 7, 5, 5056
  0180708  addic 4, 4, 14176
  018070c  lwz 5, 4(31)
  0180710  sldi 6, 5, 7
  0180714  sldi 5, 5, 4
  0180718  lfs 1, 320(7)
  018071c  subc 5, 6, 5
  0180720  addc 5, 4, 5
  0180724  clrldi 5, 5, 32
  0180728  li 6, 0
  018072c  stfs 1, 144(5)
  0180730  lfs 1, 324(7)
  0180734  stfs 1, 148(5)
  0180738  lfs 1, 328(7)
  018073c  stfs 1, 152(5)
  0180740  lfs 1, 332(7)
  0180744  stfs 1, 156(5)
  0180748  lwz 5, 4(31)
  018074c  lwz 7, 916(7)
  0180750  sldi 8, 5, 7
  0180754  sldi 9, 5, 4
  0180758  cmpwi 6, 7, 0
  018075c  subc 8, 8, 9
  0180760  addc 4, 4, 8
  0180764  ori 8, 3, 0
  0180768  clrldi 4, 4, 32
  018076c  lwz 7, 140(4)
  0180770  cmpw 7, 8
  0180774  bf 2, 0x180788
  0180778  lbz 4, 116(4)
  018077c  cmpwi 4, 0
  0180780  bt 2, 0x180788
  0180784  li 6, 1
  0180788  cmpwi 1, 6, 0
  018078c  bt 26, 0x1807b4
  0180790  bf 6, 0x1807cc
  0180794  ori 5, 3, 0
  0180798  lwz 3, 0(31)
  018079c  li 4, 21
  01807a0  li 6, 1024
  01807a4  bl 0x15d434
  01807a8  nop
  01807ac  stw 3, 4(31)
  01807b0  b 0x1807cc
  01807b4  bt 6, 0x1807cc
  01807b8  extsw 3, 5
  01807bc  bl 0x15cdb0
  01807c0  nop
  01807c4  li 3, -1
  01807c8  stw 3, 4(31)
  01807cc  ld 0, 144(1)
  01807d0  mtlr 0
  01807d4  ld 31, 120(1)
  01807d8  addi 1, 1, 128
  01807dc  blr
