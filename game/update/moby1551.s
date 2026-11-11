# game/update/moby1551.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1551:   # 0x2985a0, 0xb4 bytes
  02985a0  stdu 1, -128(1)
  02985a4  mflr 0
  02985a8  std 0, 144(1)
  02985ac  lbz 4, 32(3)
  02985b0  cmpwi 4, 0
  02985b4  cmpwi 1, 4, 1
  02985b8  cmpwi 6, 4, -1
  02985bc  bt 1, 0x2985c8
  02985c0  bf 25, 0x298644
  02985c4  b 0x2985d0
  02985c8  bf 5, 0x2985e4
  02985cc  b 0x298644
  02985d0  li 4, 255
  02985d4  li 5, 1
  02985d8  stb 4, 48(3)
  02985dc  stb 5, 32(3)
  02985e0  b 0x298644
  02985e4  lis 3, 161
  02985e8  lwz 3, 1800(3)
  02985ec  cmpwi 3, 2
  02985f0  bf 2, 0x298644
  02985f4  lis 3, 150
  02985f8  addic 3, 3, -12976
  02985fc  lwz 4, 48(3)
  0298600  cmpwi 4, 5
  0298604  bf 2, 0x298644
  0298608  lis 4, 42
  029860c  lis 5, 114
  0298610  addi 4, 4, -31336
  0298614  lfs 1, 0(4)
  0298618  lfs 2, -3056(5)
  029861c  lwz 4, 52(3)
  0298620  fmuls 1, 2, 1
  0298624  fctiwz 1, 1
  0298628  stfd 1, 112(1)
  029862c  lwz 5, 116(1)
  0298630  cmpw 4, 5
  0298634  bt 1, 0x298644
  0298638  lwz 3, 384(3)
  029863c  bl 0x119600
  0298640  nop
  0298644  ld 0, 144(1)
  0298648  mtlr 0
  029864c  addi 1, 1, 128
  0298650  blr
