# game/update/moby779.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_779:   # 0x459d68, 0x288 bytes
  0459d68  stdu 1, -256(1)
  0459d6c  mflr 0
  0459d70  std 0, 272(1)
  0459d74  stfd 24, 192(1)
  0459d78  stfd 25, 200(1)
  0459d7c  stfd 26, 208(1)
  0459d80  stfd 27, 216(1)
  0459d84  stfd 28, 224(1)
  0459d88  stfd 29, 232(1)
  0459d8c  stfd 30, 240(1)
  0459d90  stfd 31, 248(1)
  0459d94  std 31, 184(1)
  0459d98  std 30, 176(1)
  0459d9c  ori 31, 3, 0
  0459da0  lwz 30, 120(31)
  0459da4  lwz 4, 0(30)
  0459da8  std 29, 168(1)
  0459dac  std 28, 160(1)
  0459db0  extsw 4, 4
  0459db4  bl 0x15cc7c
  0459db8  nop
  0459dbc  cmpwi 3, 0
  0459dc0  bf 2, 0x459ddc
  0459dc4  li 3, 0
  0459dc8  li 4, 4
  0459dcc  ori 5, 31, 0
  0459dd0  bl 0x15d12c
  0459dd4  nop
  0459dd8  stw 3, 0(30)
  0459ddc  lis 3, 70
  0459de0  li 29, 0
  0459de4  addi 3, 3, -25268
  0459de8  ori 30, 29, 0
  0459dec  lfs 25, 0(3)
  0459df0  lfs 26, 4(3)
  0459df4  lfs 27, 8(3)
  0459df8  lfs 28, 12(3)
  0459dfc  lfs 29, 16(3)
  0459e00  lfs 30, 20(3)
  0459e04  lfs 31, 24(3)
  0459e08  lis 3, -16820
  0459e0c  stw 30, 116(1)
  0459e10  lis 4, 16281
  0459e14  fmr 1, 26
  0459e18  ori 3, 3, 52429
  0459e1c  fmr 2, 25
  0459e20  ori 4, 4, 39322
  0459e24  stw 3, 112(1)
  0459e28  stw 4, 120(1)
  0459e2c  stw 30, 124(1)
  0459e30  stw 30, 128(1)
  0459e34  stw 30, 132(1)
  0459e38  stw 30, 136(1)
  0459e3c  stw 30, 140(1)
  0459e40  bl 0xfcbe8
  0459e44  nop
  0459e48  lis 28, 114
  0459e4c  fmr 2, 25
  0459e50  lfs 3, -3052(28)
  0459e54  fmuls 3, 3, 27
  0459e58  fmuls 3, 3, 1
  0459e5c  fmr 1, 26
  0459e60  stfs 3, 128(1)
  0459e64  bl 0xfcbe8
  0459e68  nop
  0459e6c  lfs 2, -3052(28)
  0459e70  lfs 3, 132(1)
  0459e74  fmuls 2, 2, 28
  0459e78  lfs 4, 128(1)
  0459e7c  lfs 5, 208(31)
  0459e80  lfs 6, 220(31)
  0459e84  lfs 7, 212(31)
  0459e88  fmuls 6, 6, 3
  0459e8c  lfs 8, 192(31)
  0459e90  lfs 9, 216(31)
  0459e94  fmuls 5, 5, 3
  0459e98  fmuls 7, 7, 3
  0459e9c  fmuls 1, 2, 1
  0459ea0  fmuls 2, 9, 3
  0459ea4  lfs 3, 204(31)
  0459ea8  lfs 9, 196(31)
  0459eac  lfs 10, 200(31)
  0459eb0  fmadds 3, 3, 4, 6
  0459eb4  fmadds 5, 8, 4, 5
  0459eb8  lfs 8, 224(31)
  0459ebc  fmadds 7, 9, 4, 7
  0459ec0  lfs 6, 236(31)
  0459ec4  lfs 9, 228(31)
  0459ec8  lfs 11, 232(31)
  0459ecc  fmadds 2, 10, 4, 2
  0459ed0  lfs 4, 140(1)
  0459ed4  fmadds 3, 6, 1, 3
  0459ed8  fmadds 5, 8, 1, 5
  0459edc  fmadds 6, 9, 1, 7
  0459ee0  lfs 7, 112(1)
  0459ee4  lfs 8, 116(1)
  0459ee8  fmadds 2, 11, 1, 2
  0459eec  fmr 1, 29
  0459ef0  fadds 3, 3, 4
  0459ef4  stfs 5, 128(1)
  0459ef8  lfs 4, 120(1)
  0459efc  stfs 6, 132(1)
  0459f00  stfs 2, 136(1)
  0459f04  fmr 2, 30
  0459f08  stfs 3, 140(1)
  0459f0c  lfs 3, 16(31)
  0459f10  lfs 5, 20(31)
  0459f14  fadds 3, 7, 3
  0459f18  lfs 6, 24(31)
  0459f1c  fadds 5, 8, 5
  0459f20  fadds 4, 4, 6
  0459f24  stfs 3, 112(1)
  0459f28  stfs 5, 116(1)
  0459f2c  stfs 4, 120(1)
  0459f30  bl 0xfcbe8
  0459f34  nop
  0459f38  li 3, 45
  0459f3c  fmr 24, 1
  0459f40  li 4, 60
  0459f44  bl 0xfe484
  0459f48  nop
  0459f4c  extsw 3, 3
  0459f50  lis 5, 8319
  0459f54  fmr 1, 24
  0459f58  std 3, 144(1)
  0459f5c  lis 3, 114
  0459f60  lis 6, 39
  0459f64  addic 4, 1, 128
  0459f68  ori 5, 5, 32639
  0459f6c  lfs 2, -3056(3)
  0459f70  lfd 3, 144(1)
  0459f74  addic 3, 1, 112
  0459f78  fcfid 3, 3
  0459f7c  ori 6, 6, 10023
  0459f80  frsp 3, 3
  0459f84  fadds 3, 3, 31
  0459f88  fmuls 2, 2, 3
  0459f8c  fctiwz 2, 2
  0459f90  stfd 2, 144(1)
  0459f94  lwz 8, 148(1)
  0459f98  extsw 8, 8
  0459f9c  bl 0x126dd8
  0459fa0  nop
  0459fa4  addic 29, 29, 1
  0459fa8  cmpwi 29, 2
  0459fac  bt 0, 0x459e08
  0459fb0  ld 0, 272(1)
  0459fb4  mtlr 0
  0459fb8  lfd 24, 192(1)
  0459fbc  lfd 25, 200(1)
  0459fc0  lfd 26, 208(1)
  0459fc4  lfd 27, 216(1)
  0459fc8  lfd 28, 224(1)
  0459fcc  lfd 29, 232(1)
  0459fd0  lfd 30, 240(1)
  0459fd4  lfd 31, 248(1)
  0459fd8  ld 28, 160(1)
  0459fdc  ld 29, 168(1)
  0459fe0  ld 30, 176(1)
  0459fe4  ld 31, 184(1)
  0459fe8  addi 1, 1, 256
  0459fec  blr
