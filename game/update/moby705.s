# game/update/moby705.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_705:   # 0x429d80, 0x1f0 bytes
  0429d80  stdu 1, -192(1)
  0429d84  mflr 0
  0429d88  std 0, 208(1)
  0429d8c  stfd 30, 176(1)
  0429d90  stfd 31, 184(1)
  0429d94  std 31, 168(1)
  0429d98  lbz 4, 32(3)
  0429d9c  std 30, 160(1)
  0429da0  ori 31, 3, 0
  0429da4  lwz 30, 120(3)
  0429da8  cmpwi 4, 0
  0429dac  bf 2, 0x429e04
  0429db0  ori 3, 31, 0
  0429db4  bl 0x10c000
  0429db8  nop
  0429dbc  lis 3, 67
  0429dc0  li 4, 1
  0429dc4  addi 3, 3, -25240
  0429dc8  stb 4, 32(31)
  0429dcc  lfs 30, 0(3)
  0429dd0  lfs 31, 4(3)
  0429dd4  fmr 1, 30
  0429dd8  fmr 2, 31
  0429ddc  bl 0xfcbe8
  0429de0  nop
  0429de4  stfs 1, 0(30)
  0429de8  bl 0x5c8318
  0429dec  nop
  0429df0  clrlwi 3, 3, 31
  0429df4  cmpwi 3, 0
  0429df8  bt 2, 0x429e00
  0429dfc  fmr 30, 31
  0429e00  stfs 30, 4(30)
  0429e04  lis 3, 1
  0429e08  li 4, 0
  0429e0c  stw 31, 128(1)
  0429e10  ori 6, 3, 1
  0429e14  lis 5, 67
  0429e18  addic 3, 31, 16
  0429e1c  stw 4, 140(1)
  0429e20  stw 6, 132(1)
  0429e24  addi 8, 5, -25240
  0429e28  stw 4, 124(1)
  0429e2c  addic 7, 1, 112
  0429e30  stw 4, 120(1)
  0429e34  li 5, 16
  0429e38  stw 4, 116(1)
  0429e3c  ori 6, 31, 0
  0429e40  stw 4, 112(1)
  0429e44  stw 4, 144(1)
  0429e48  lfs 1, 8(8)
  0429e4c  bl 0x5e598
  0429e50  nop
  0429e54  lwz 3, 4(30)
  0429e58  lfs 1, 4(30)
  0429e5c  lwz 4, 0(30)
  0429e60  cmpw 3, 4
  0429e64  bf 2, 0x429ec4
  0429e68  addic 3, 30, 8
  0429e6c  bl 0x4fff60
  0429e70  nop
  0429e74  cmpwi 3, 0
  0429e78  lfs 1, 4(30)
  0429e7c  bt 2, 0x429ec4
  0429e80  fneg 1, 1
  0429e84  lis 3, 67
  0429e88  li 4, 12
  0429e8c  vspltisw 2, -1
  0429e90  addi 3, 3, -25240
  0429e94  lis 5, 114
  0429e98  li 6, -3056
  0429e9c  vslw 2, 2, 2
  0429ea0  stfs 1, 4(30)
  0429ea4  lvlx 3, 4, 3
  0429ea8  lvlx 4, 6, 5
  0429eac  li 3, 8
  0429eb0  vspltw 3, 3, 0
  0429eb4  vmaddfp 2, 4, 3, 2
  0429eb8  vctsxs 2, 2, 0
  0429ebc  vspltw 2, 2, 0
  0429ec0  stvewx 2, 3, 30
  0429ec4  lis 3, 67
  0429ec8  lis 4, 114
  0429ecc  addi 3, 3, -25240
  0429ed0  lfs 3, 16(3)
  0429ed4  lfs 2, -3052(4)
  0429ed8  lfs 4, 0(30)
  0429edc  fmuls 3, 2, 3
  0429ee0  fmadds 1, 3, 1, 4
  0429ee4  stfs 1, 0(30)
  0429ee8  lfs 3, 4(3)
  0429eec  fcmpu 0, 1, 3
  0429ef0  cror 6, 0, 2
  0429ef4  bt 6, 0x429f04
  0429ef8  lis 3, 16256
  0429efc  fmr 1, 3
  0429f00  stw 3, 0(30)
  0429f04  lis 3, 67
  0429f08  addi 3, 3, -25240
  0429f0c  lfs 3, 0(3)
  0429f10  fcmpu 0, 1, 3
  0429f14  cror 6, 1, 2
  0429f18  bt 6, 0x429f28
  0429f1c  lis 3, -16512
  0429f20  fmr 1, 3
  0429f24  stw 3, 0(30)
  0429f28  lis 3, 67
  0429f2c  fmr 3, 1
  0429f30  addi 3, 3, -25240
  0429f34  lfs 4, 20(3)
  0429f38  lfs 1, 72(31)
  0429f3c  fmuls 2, 2, 4
  0429f40  fmuls 2, 2, 3
  0429f44  bl 0x502578
  0429f48  nop
  0429f4c  stfs 1, 72(31)
  0429f50  ld 0, 208(1)
  0429f54  mtlr 0
  0429f58  lfd 30, 176(1)
  0429f5c  lfd 31, 184(1)
  0429f60  ld 30, 160(1)
  0429f64  ld 31, 168(1)
  0429f68  addi 1, 1, 192
  0429f6c  blr
