# game/update/moby1404.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1404:   # 0x26e290, 0x114 bytes
  026e290  stdu 1, -144(1)
  026e294  mflr 0
  026e298  std 0, 160(1)
  026e29c  lis 4, 161
  026e2a0  std 30, 128(1)
  026e2a4  lwz 4, 1808(4)
  026e2a8  lwz 30, 120(3)
  026e2ac  std 31, 136(1)
  026e2b0  std 29, 120(1)
  026e2b4  cmpwi 4, 0
  026e2b8  bt 2, 0x26e388
  026e2bc  lis 4, 161
  026e2c0  lwz 4, 1800(4)
  026e2c4  cmpwi 4, 0
  026e2c8  bf 2, 0x26e388
  026e2cc  lis 31, 151
  026e2d0  lwz 4, 4(30)
  026e2d4  addic 31, 31, -16308
  026e2d8  extsw 4, 4
  026e2dc  lbzx 4, 31, 4
  026e2e0  cmpwi 4, 0
  026e2e4  bt 2, 0x26e2f4
  026e2e8  bl 0xefb38
  026e2ec  nop
  026e2f0  b 0x26e388
  026e2f4  lis 29, 151
  026e2f8  lwz 4, 0(30)
  026e2fc  addic 29, 29, -25376
  026e300  extsw 4, 4
  026e304  addic 3, 29, 128
  026e308  bl 0x110b70
  026e30c  nop
  026e310  cmpwi 3, 0
  026e314  bt 2, 0x26e388
  026e318  lis 4, 150
  026e31c  li 3, 1
  026e320  addic 5, 4, -12976
  026e324  lwz 4, 4(30)
  026e328  lfs 1, 128(29)
  026e32c  extsw 4, 4
  026e330  lfs 2, 132(29)
  026e334  stfs 1, 16(5)
  026e338  lfs 1, 140(29)
  026e33c  stbx 3, 31, 4
  026e340  stfs 2, 20(5)
  026e344  li 4, 0
  026e348  lfs 2, 728(29)
  026e34c  stfs 1, 28(5)
  026e350  lfs 1, 144(29)
  026e354  stfs 2, 24(5)
  026e358  lfs 2, 148(29)
  026e35c  stfs 1, 32(5)
  026e360  lfs 1, 152(29)
  026e364  stfs 2, 36(5)
  026e368  lfs 2, 156(29)
  026e36c  stb 3, 74(5)
  026e370  stfs 1, 40(5)
  026e374  lwz 3, 8(30)
  026e378  stfs 2, 44(5)
  026e37c  extsw 3, 3
  026e380  bl 0x167e60
  026e384  nop
  026e388  ld 0, 160(1)
  026e38c  mtlr 0
  026e390  ld 29, 120(1)
  026e394  ld 30, 128(1)
  026e398  ld 31, 136(1)
  026e39c  addi 1, 1, 144
  026e3a0  blr
