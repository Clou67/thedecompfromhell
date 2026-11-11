# game/update/moby707.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_707:   # 0x429f78, 0x9c bytes
  0429f78  stdu 1, -160(1)
  0429f7c  mflr 0
  0429f80  std 0, 176(1)
  0429f84  std 31, 152(1)
  0429f88  ori 31, 3, 0
  0429f8c  vspltisw 2, 0
  0429f90  li 4, 112
  0429f94  lis 3, 67
  0429f98  std 30, 144(1)
  0429f9c  addi 3, 3, -24720
  0429fa0  lwz 30, 120(31)
  0429fa4  stvx 2, 4, 1
  0429fa8  lfs 1, 64(31)
  0429fac  lis 4, 114
  0429fb0  lfs 2, 68(31)
  0429fb4  stfs 1, 128(1)
  0429fb8  lfs 1, 72(31)
  0429fbc  stfs 2, 132(1)
  0429fc0  lfs 2, 76(31)
  0429fc4  stfs 1, 136(1)
  0429fc8  stfs 2, 140(1)
  0429fcc  lfs 2, 0(3)
  0429fd0  lfs 3, -3052(4)
  0429fd4  fmuls 2, 3, 2
  0429fd8  bl 0x502578
  0429fdc  nop
  0429fe0  addic 3, 30, 32
  0429fe4  stfs 1, 72(31)
  0429fe8  addic 5, 1, 128
  0429fec  addic 6, 31, 64
  0429ff0  addic 4, 1, 112
  0429ff4  bl 0x112900
  0429ff8  nop
  0429ffc  ld 0, 176(1)
  042a000  mtlr 0
  042a004  ld 30, 144(1)
  042a008  ld 31, 152(1)
  042a00c  addi 1, 1, 160
  042a010  blr
