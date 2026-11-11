# game/update/moby76.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_76:   # 0x44f060, 0x2e8 bytes
  044f060  stdu 1, -144(1)
  044f064  mflr 0
  044f068  std 0, 160(1)
  044f06c  std 31, 136(1)
  044f070  ori 31, 3, 0
  044f074  std 30, 128(1)
  044f078  lbz 3, 32(31)
  044f07c  lwz 30, 120(31)
  044f080  cmpwi 3, 1
  044f084  cmpwi 1, 3, -1
  044f088  cmpwi 6, 3, 0
  044f08c  cmpwi 7, 3, 2
  044f090  bt 1, 0x44f0a0
  044f094  bf 5, 0x44f330
  044f098  bf 25, 0x44f0b0
  044f09c  b 0x44f0bc
  044f0a0  bf 29, 0x44f128
  044f0a4  cmpwi 3, 3
  044f0a8  bf 1, 0x44f2c8
  044f0ac  b 0x44f330
  044f0b0  li 3, 1
  044f0b4  stb 3, 32(31)
  044f0b8  b 0x44f330
  044f0bc  lwz 3, 0(30)
  044f0c0  extsw 3, 3
  044f0c4  bl 0x214100
  044f0c8  nop
  044f0cc  cmpwi 3, 0
  044f0d0  bt 2, 0x44f330
  044f0d4  li 3, 2
  044f0d8  lbz 4, 83(31)
  044f0dc  cmpwi 4, 1
  044f0e0  stb 3, 32(31)
  044f0e4  bt 2, 0x44f330
  044f0e8  lis 3, 69
  044f0ec  lis 4, 114
  044f0f0  addi 3, 3, -4016
  044f0f4  li 5, 0
  044f0f8  lfs 1, 0(3)
  044f0fc  lfs 2, -3056(4)
  044f100  ori 3, 31, 0
  044f104  fmuls 1, 2, 1
  044f108  li 4, 1
  044f10c  fctiwz 1, 1
  044f110  stfd 1, 112(1)
  044f114  lwz 6, 116(1)
  044f118  extsw 6, 6
  044f11c  bl 0xfddc0
  044f120  nop
  044f124  b 0x44f330
  044f128  lbz 3, 83(31)
  044f12c  cmpwi 3, 1
  044f130  cmpwi 1, 3, 2
  044f134  bf 2, 0x44f188
  044f138  lbz 3, 112(31)
  044f13c  rlwinm 3, 3, 0, 30, 30
  044f140  cmpwi 3, 0
  044f144  bt 2, 0x44f188
  044f148  bt 6, 0x44f188
  044f14c  lis 3, 69
  044f150  lis 4, 114
  044f154  addi 3, 3, -4016
  044f158  li 5, 0
  044f15c  lfs 1, 0(3)
  044f160  lfs 2, -3056(4)
  044f164  ori 3, 31, 0
  044f168  li 4, 2
  044f16c  fmuls 1, 2, 1
  044f170  fctiwz 1, 1
  044f174  stfd 1, 112(1)
  044f178  lwz 6, 116(1)
  044f17c  extsw 6, 6
  044f180  bl 0xfddc0
  044f184  nop
  044f188  lis 3, 151
  044f18c  lfs 1, 20(31)
  044f190  lfs 2, 16(31)
  044f194  addic 3, 3, -25376
  044f198  lfs 3, 132(3)
  044f19c  lfs 4, 128(3)
  044f1a0  fsubs 1, 1, 3
  044f1a4  fsubs 2, 2, 4
  044f1a8  lis 3, 69
  044f1ac  addi 3, 3, -4016
  044f1b0  fmuls 1, 1, 1
  044f1b4  fmadds 1, 2, 2, 1
  044f1b8  lfs 2, 4(3)
  044f1bc  fsqrts 1, 1
  044f1c0  fcmpu 0, 1, 2
  044f1c4  cror 6, 1, 2
  044f1c8  bt 6, 0x44f254
  044f1cc  lwz 3, 12(30)
  044f1d0  lwz 4, 16(30)
  044f1d4  cmpw 3, 4
  044f1d8  bt 1, 0x44f254
  044f1dc  addic 3, 30, 8
  044f1e0  bl 0x4fff60
  044f1e4  nop
  044f1e8  cmpwi 3, 0
  044f1ec  bt 2, 0x44f254
  044f1f0  lwz 3, 4(30)
  044f1f4  addic 4, 31, 16
  044f1f8  extsw 3, 3
  044f1fc  bl 0x454348
  044f200  nop
  044f204  cmpwi 3, 0
  044f208  bt 2, 0x44f254
  044f20c  lis 3, 69
  044f210  lwz 5, 12(30)
  044f214  li 4, 8
  044f218  addi 3, 3, -4016
  044f21c  vspltisw 2, -1
  044f220  addic 5, 5, 1
  044f224  li 6, -3056
  044f228  lis 7, 114
  044f22c  vslw 2, 2, 2
  044f230  stw 5, 12(30)
  044f234  <unknown>
  044f238  li 3, 8
  044f23c  vspltw 3, 3, 0
  044f240  <unknown>
  044f244  vmaddfp 2, 4, 3, 2
  044f248  vctsxs 2, 2, 0
  044f24c  vspltw 2, 2, 0
  044f250  stvewx 2, 3, 30
  044f254  lwz 3, 0(30)
  044f258  extsw 3, 3
  044f25c  bl 0x214100
  044f260  nop
  044f264  cmpwi 3, 0
  044f268  bf 2, 0x44f330
  044f26c  li 3, 0
  044f270  li 4, 3
  044f274  stw 3, 12(30)
  044f278  lbz 3, 83(31)
  044f27c  stb 4, 32(31)
  044f280  cmpwi 3, 3
  044f284  bt 2, 0x44f330
  044f288  lis 3, 69
  044f28c  lis 4, 114
  044f290  addi 3, 3, -4016
  044f294  li 5, 0
  044f298  lfs 1, 0(3)
  044f29c  lfs 2, -3056(4)
  044f2a0  ori 3, 31, 0
  044f2a4  fmuls 1, 2, 1
  044f2a8  li 4, 3
  044f2ac  fctiwz 1, 1
  044f2b0  stfd 1, 112(1)
  044f2b4  lwz 6, 116(1)
  044f2b8  extsw 6, 6
  044f2bc  bl 0xfddc0
  044f2c0  nop
  044f2c4  b 0x44f330
  044f2c8  lbz 3, 83(31)
  044f2cc  cmpwi 3, 3
  044f2d0  cmpwi 1, 3, 0
  044f2d4  bf 2, 0x44f330
  044f2d8  lbz 3, 112(31)
  044f2dc  rlwinm 3, 3, 0, 30, 30
  044f2e0  cmpwi 3, 0
  044f2e4  bt 2, 0x44f330
  044f2e8  li 3, 1
  044f2ec  stb 3, 32(31)
  044f2f0  bt 6, 0x44f330
  044f2f4  lis 3, 69
  044f2f8  lis 4, 114
  044f2fc  addi 3, 3, -4016
  044f300  li 5, 0
  044f304  lfs 1, 0(3)
  044f308  lfs 2, -3056(4)
  044f30c  ori 3, 31, 0
  044f310  li 4, 0
  044f314  fmuls 1, 2, 1
  044f318  fctiwz 1, 1
  044f31c  stfd 1, 112(1)
  044f320  lwz 6, 116(1)
  044f324  extsw 6, 6
  044f328  bl 0xfddc0
  044f32c  nop
  044f330  ld 0, 160(1)
  044f334  mtlr 0
  044f338  ld 30, 128(1)
  044f33c  ld 31, 136(1)
  044f340  addi 1, 1, 144
  044f344  blr
