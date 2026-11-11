# game/update/moby607.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M607_003d9450:   # 0x3d9450, 0x14 bytes
  03d9450  lis 3, 133
  03d9454  lis 4, 1
  03d9458  addic 3, 3, 14188
  03d945c  stw 4, 72(3)
  03d9460  blr

UpdateMoby_607:   # 0x3d9470, 0x74 bytes
  03d9470  stdu 1, -128(1)
  03d9474  mflr 0
  03d9478  std 0, 144(1)
  03d947c  lis 4, 151
  03d9480  addic 4, 4, -25376
  03d9484  lwz 4, 8324(4)
  03d9488  cmpwi 4, 8
  03d948c  bf 2, 0x3d94d4
  03d9490  lbz 4, 83(3)
  03d9494  cmpwi 4, 6
  03d9498  bt 2, 0x3d94d4
  03d949c  lis 4, 62
  03d94a0  lis 5, 114
  03d94a4  addi 4, 4, -27544
  03d94a8  lfs 1, 0(4)
  03d94ac  lfs 2, -3056(5)
  03d94b0  li 4, 6
  03d94b4  fmuls 1, 2, 1
  03d94b8  li 5, 0
  03d94bc  fctiwz 1, 1
  03d94c0  stfd 1, 112(1)
  03d94c4  lwz 6, 116(1)
  03d94c8  extsw 6, 6
  03d94cc  bl 0xfddc0
  03d94d0  nop
  03d94d4  ld 0, 144(1)
  03d94d8  mtlr 0
  03d94dc  addi 1, 1, 128
  03d94e0  blr
