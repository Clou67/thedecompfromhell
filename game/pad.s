# game/pad.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

InitPadRing:   # 0x11dfc8, 0x18 bytes
  011dfc8  lis 3, 150
  011dfcc  li 4, 0
  011dfd0  addic 3, 3, 19008
  011dfd4  sth 4, 142(3)
  011dfd8  stw 4, 144(3)
  011dfdc  blr

PadRingBitsOn:   # 0x11dfe0, 0xc4 bytes
  011dfe0  lis 6, 150
  011dfe4  ori 8, 4, 0
  011dfe8  addic 4, 6, 19008
  011dfec  li 7, 1
  011dff0  lwz 6, 144(4)
  011dff4  extsw 9, 6
  011dff8  subc 10, 8, 6
  011dffc  subc 9, 8, 9
  011e000  lhz 8, 142(4)
  011e004  sradi 9, 9, 63
  011e008  and 9, 9, 10
  011e00c  addc 6, 6, 9
  011e010  addic 6, 6, 1
  011e014  cmpwi 6, 1
  011e018  bf 1, 0x11e09c
  011e01c  extsh 8, 8
  011e020  subc 9, 8, 7
  011e024  lis 10, -30584
  011e028  addic 9, 9, 30
  011e02c  ori 10, 10, 34953
  011e030  mulhw 10, 10, 9
  011e034  addc 10, 10, 9
  011e038  srawi 10, 10, 4
  011e03c  srwi 11, 10, 31
  011e040  addc 10, 10, 11
  011e044  sldi 11, 10, 5
  011e048  subc 11, 11, 10
  011e04c  subc 10, 11, 10
  011e050  subc 9, 9, 10
  011e054  sldi 9, 9, 2
  011e058  extsw 9, 9
  011e05c  addc 9, 4, 9
  011e060  lwz 10, 224(9)
  011e064  and 11, 10, 3
  011e068  cmpwi 11, 0
  011e06c  bt 2, 0x11e090
  011e070  cmpwi 5, 0
  011e074  bt 2, 0x11e084
  011e078  addic 4, 7, -1
  011e07c  stw 4, 0(5)
  011e080  lwz 10, 224(9)
  011e084  and 3, 10, 3
  011e088  extsw 3, 3
  011e08c  b 0x11e0a0
  011e090  addic 7, 7, 1
  011e094  cmpw 7, 6
  011e098  bt 0, 0x11e020
  011e09c  li 3, 0
  011e0a0  blr

PadRingCoincidentBitsOn:   # 0x11e0a4, 0x1bc bytes
  011e0a4  stdu 1, -144(1)
  011e0a8  lis 7, 150
  011e0ac  li 9, 1
  011e0b0  addic 7, 7, 19008
  011e0b4  li 10, 0
  011e0b8  lwz 8, 144(7)
  011e0bc  extsw 11, 8
  011e0c0  subc 12, 5, 8
  011e0c4  subc 5, 5, 11
  011e0c8  lhz 11, 142(7)
  011e0cc  sradi 5, 5, 63
  011e0d0  and 12, 5, 12
  011e0d4  ori 5, 9, 0
  011e0d8  addc 8, 8, 12
  011e0dc  addic 8, 8, 1
  011e0e0  std 31, 136(1)
  011e0e4  std 30, 128(1)
  011e0e8  std 29, 120(1)
  011e0ec  cmpwi 1, 8, 1
  011e0f0  bf 5, 0x11e248
  011e0f4  extsh 11, 11
  011e0f8  subc 12, 11, 9
  011e0fc  lis 31, -30584
  011e100  addic 12, 12, 30
  011e104  ori 31, 31, 34953
  011e108  mulhw 31, 31, 12
  011e10c  addc 31, 31, 12
  011e110  srawi 31, 31, 4
  011e114  srwi 30, 31, 31
  011e118  addc 31, 31, 30
  011e11c  sldi 30, 31, 5
  011e120  subc 30, 30, 31
  011e124  subc 31, 30, 31
  011e128  subc 12, 12, 31
  011e12c  sldi 12, 12, 2
  011e130  extsw 12, 12
  011e134  addc 12, 7, 12
  011e138  lwz 12, 224(12)
  011e13c  and 12, 12, 3
  011e140  cmpwi 12, 0
  011e144  bt 2, 0x11e17c
  011e148  addic 3, 9, -1
  011e14c  addic 12, 1, 112
  011e150  li 31, 0
  011e154  subc 12, 31, 12
  011e158  subc 31, 9, 3
  011e15c  cntlzw 12, 12
  011e160  sldi 30, 12, 58
  011e164  ori 12, 5, 0
  011e168  sradi 30, 30, 63
  011e16c  and 31, 30, 31
  011e170  addc 3, 3, 31
  011e174  bt 5, 0x11e18c
  011e178  b 0x11e248
  011e17c  addic 9, 9, 1
  011e180  cmpw 9, 8
  011e184  bt 0, 0x11e0f8
  011e188  b 0x11e248
  011e18c  subc 31, 11, 12
  011e190  lis 30, -30584
  011e194  addic 31, 31, 30
  011e198  ori 30, 30, 34953
  011e19c  mulhw 30, 30, 31
  011e1a0  addc 30, 30, 31
  011e1a4  srawi 30, 30, 4
  011e1a8  srwi 29, 30, 31
  011e1ac  addc 30, 30, 29
  011e1b0  sldi 29, 30, 5
  011e1b4  subc 29, 29, 30
  011e1b8  subc 30, 29, 30
  011e1bc  subc 31, 31, 30
  011e1c0  sldi 31, 31, 2
  011e1c4  extsw 31, 31
  011e1c8  addc 31, 7, 31
  011e1cc  lwz 31, 224(31)
  011e1d0  and 31, 31, 4
  011e1d4  cmpwi 31, 0
  011e1d8  bt 2, 0x11e234
  011e1dc  addic 4, 1, 116
  011e1e0  li 7, 0
  011e1e4  addic 8, 12, -1
  011e1e8  subc 4, 7, 4
  011e1ec  subc 7, 9, 8
  011e1f0  cntlzw 4, 4
  011e1f4  sldi 4, 4, 58
  011e1f8  sradi 4, 4, 63
  011e1fc  and 4, 4, 7
  011e200  addc 4, 8, 4
  011e204  subc 3, 3, 4
  011e208  li 4, 0
  011e20c  extsw 3, 3
  011e210  neg 7, 3
  011e214  subc 4, 3, 4
  011e218  subc 7, 7, 3
  011e21c  sradi 4, 4, 63
  011e220  and 4, 4, 7
  011e224  addc 3, 3, 4
  011e228  cmpw 3, 6
  011e22c  bt 0, 0x11e244
  011e230  b 0x11e248
  011e234  addic 12, 12, 1
  011e238  cmpw 12, 8
  011e23c  bt 0, 0x11e18c
  011e240  b 0x11e248
  011e244  ori 10, 5, 0
  011e248  ori 3, 10, 0
  011e24c  ld 29, 120(1)
  011e250  ld 30, 128(1)
  011e254  ld 31, 136(1)
  011e258  addi 1, 1, 144
  011e25c  blr

PadRingAng:   # 0x11e260, 0x74 bytes
  011e260  lis 4, 150
  011e264  lis 5, -30584
  011e268  addic 4, 4, 19008
  011e26c  ori 5, 5, 34953
  011e270  lwz 6, 144(4)
  011e274  lhz 7, 142(4)
  011e278  extsw 9, 6
  011e27c  subc 8, 3, 6
  011e280  subc 3, 3, 9
  011e284  extsh 7, 7
  011e288  sradi 3, 3, 63
  011e28c  and 3, 3, 8
  011e290  addc 3, 6, 3
  011e294  subc 3, 7, 3
  011e298  addic 3, 3, 30
  011e29c  mulhw 5, 5, 3
  011e2a0  addc 5, 5, 3
  011e2a4  srawi 5, 5, 4
  011e2a8  srwi 6, 5, 31
  011e2ac  addc 5, 5, 6
  011e2b0  sldi 6, 5, 5
  011e2b4  subc 6, 6, 5
  011e2b8  subc 5, 6, 5
  011e2bc  subc 3, 3, 5
  011e2c0  sldi 3, 3, 2
  011e2c4  extsw 3, 3
  011e2c8  addc 3, 4, 3
  011e2cc  lfs 1, 464(3)
  011e2d0  blr

UpdatePad:   # 0x11e2d4, 0xec bytes
  011e2d4  stdu 1, -144(1)
  011e2d8  mflr 0
  011e2dc  std 0, 160(1)
  011e2e0  std 28, 112(1)
  011e2e4  std 29, 120(1)
  011e2e8  li 28, 0
  011e2ec  std 31, 136(1)
  011e2f0  lis 29, 150
  011e2f4  std 30, 128(1)
  011e2f8  ori 31, 28, 0
  011e2fc  addic 29, 29, 21824
  011e300  lis 3, 144
  011e304  mulli 4, 28, 1380
  011e308  lwz 3, 11996(3)
  011e30c  std 2, 40(1)
  011e310  addc 30, 29, 4
  011e314  ori 4, 28, 0
  011e318  clrldi 30, 30, 32
  011e31c  lwz 6, 0(3)
  011e320  ori 5, 30, 0
  011e324  lwz 6, 16(6)
  011e328  lwz 7, 0(6)
  011e32c  lwz 2, 4(6)
  011e330  mtctr 7
  011e334  bcctrl 20, 30
  011e338  lwz 3, 156(30)
  011e33c  ld 2, 40(1)
  011e340  cmpwi 3, 0
  011e344  bt 2, 0x11e390
  011e348  ori 3, 31, 0
  011e34c  li 4, 172
  011e350  lis 31, 150
  011e354  mtctr 4
  011e358  addic 31, 31, 19008
  011e35c  addc 4, 3, 30
  011e360  lwzx 7, 30, 3
  011e364  addc 6, 3, 31
  011e368  clrldi 4, 4, 32
  011e36c  addic 5, 3, 8
  011e370  lwz 4, 4(4)
  011e374  stwx 7, 31, 3
  011e378  extsw 3, 5
  011e37c  stw 4, 4(6)
  011e380  bdnz 0x11e35c
  011e384  lwzx 4, 30, 3
  011e388  stwx 4, 31, 3
  011e38c  b 0x11e3a0
  011e390  addic 28, 28, 1
  011e394  extsw 28, 28
  011e398  cmpwi 28, 4
  011e39c  bt 0, 0x11e300
  011e3a0  ld 0, 160(1)
  011e3a4  mtlr 0
  011e3a8  ld 28, 112(1)
  011e3ac  ld 29, 120(1)
  011e3b0  ld 30, 128(1)
  011e3b4  ld 31, 136(1)
  011e3b8  addi 1, 1, 144
  011e3bc  blr

pad_Init:   # 0x11e3c0, 0x44 bytes
  011e3c0  stdu 1, -112(1)
  011e3c4  mflr 0
  011e3c8  std 0, 128(1)
  011e3cc  lis 3, 144
  011e3d0  lwz 3, 11996(3)
  011e3d4  std 2, 40(1)
  011e3d8  lwz 4, 0(3)
  011e3dc  lwz 4, 8(4)
  011e3e0  lwz 5, 0(4)
  011e3e4  lwz 2, 4(4)
  011e3e8  mtctr 5
  011e3ec  bcctrl 20, 30
  011e3f0  ld 2, 40(1)
  011e3f4  ld 0, 128(1)
  011e3f8  mtlr 0
  011e3fc  addi 1, 1, 112
  011e400  blr

pad_Shutdown:   # 0x11e404, 0x44 bytes
  011e404  stdu 1, -112(1)
  011e408  mflr 0
  011e40c  std 0, 128(1)
  011e410  lis 3, 144
  011e414  lwz 3, 11996(3)
  011e418  std 2, 40(1)
  011e41c  lwz 4, 0(3)
  011e420  lwz 4, 12(4)
  011e424  lwz 5, 0(4)
  011e428  lwz 2, 4(4)
  011e42c  mtctr 5
  011e430  bcctrl 20, 30
  011e434  ld 2, 40(1)
  011e438  ld 0, 128(1)
  011e43c  mtlr 0
  011e440  addi 1, 1, 112
  011e444  blr
