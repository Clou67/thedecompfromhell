# game/update/moby734.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M734_00437df4:   # 0x437df4, 0x14 bytes
  0437df4  lis 3, 134
  0437df8  lis 4, 1
  0437dfc  addic 3, 3, -24036
  0437e00  stw 4, 72(3)
  0437e04  blr

UpdateMoby_734:   # 0x437e10, 0x9c bytes
  0437e10  stdu 1, -160(1)
  0437e14  mflr 0
  0437e18  std 0, 176(1)
  0437e1c  std 31, 152(1)
  0437e20  ori 31, 3, 0
  0437e24  vspltisw 2, 0
  0437e28  li 4, 112
  0437e2c  lis 3, 67
  0437e30  std 30, 144(1)
  0437e34  addi 3, 3, 32264
  0437e38  lwz 30, 120(31)
  0437e3c  stvx 2, 4, 1
  0437e40  lfs 1, 64(31)
  0437e44  lis 4, 114
  0437e48  lfs 2, 68(31)
  0437e4c  stfs 1, 128(1)
  0437e50  lfs 1, 72(31)
  0437e54  stfs 2, 132(1)
  0437e58  lfs 2, 76(31)
  0437e5c  stfs 1, 136(1)
  0437e60  stfs 2, 140(1)
  0437e64  lfs 2, 0(3)
  0437e68  lfs 3, -3052(4)
  0437e6c  fmuls 2, 3, 2
  0437e70  bl 0x502578
  0437e74  nop
  0437e78  addic 3, 30, 32
  0437e7c  stfs 1, 72(31)
  0437e80  addic 5, 1, 128
  0437e84  addic 6, 31, 64
  0437e88  addic 4, 1, 112
  0437e8c  bl 0x112900
  0437e90  nop
  0437e94  ld 0, 176(1)
  0437e98  mtlr 0
  0437e9c  ld 30, 144(1)
  0437ea0  ld 31, 152(1)
  0437ea4  addi 1, 1, 160
  0437ea8  blr
