# game/update/moby1908.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1908_002d7c68:   # 0x2d7c68, 0x228 bytes
  02d7c68  stdu 1, -64(1)
  02d7c6c  stfd 30, 48(1)
  02d7c70  stfd 31, 56(1)
  02d7c74  cmpwi 3, 0
  02d7c78  li 8, 0
  02d7c7c  bf 1, 0x2d7e80
  02d7c80  ori 9, 4, 0
  02d7c84  lis 4, 45
  02d7c88  lis 6, 149
  02d7c8c  addi 10, 4, 31824
  02d7c90  ori 4, 7, 0
  02d7c94  addic 7, 6, 5056
  02d7c98  ori 6, 5, 0
  02d7c9c  ori 5, 9, 0
  02d7ca0  lfs 5, 0(10)
  02d7ca4  lfs 4, 4(10)
  02d7ca8  lfs 3, 8(10)
  02d7cac  lfs 2, 12(10)
  02d7cb0  lfs 1, 16(10)
  02d7cb4  lfs 10, 4(6)
  02d7cb8  lfs 6, 324(7)
  02d7cbc  lfs 11, 0(6)
  02d7cc0  fsubs 10, 10, 6
  02d7cc4  lfs 6, 320(7)
  02d7cc8  lfs 9, 8(6)
  02d7ccc  fsubs 11, 11, 6
  02d7cd0  lfs 6, 328(7)
  02d7cd4  fsubs 9, 9, 6
  02d7cd8  fmr 8, 5
  02d7cdc  fmuls 6, 10, 10
  02d7ce0  fmr 7, 8
  02d7ce4  fmadds 12, 11, 11, 6
  02d7ce8  fmr 6, 7
  02d7cec  fmadds 12, 9, 9, 12
  02d7cf0  fsqrts 13, 12
  02d7cf4  fcmpu 0, 13, 6
  02d7cf8  bt 2, 0x2d7d3c
  02d7cfc  frsqrte 6, 12
  02d7d00  fmuls 7, 12, 6
  02d7d04  fmuls 8, 6, 4
  02d7d08  fnmsubs 7, 7, 6, 3
  02d7d0c  fmadds 6, 7, 8, 6
  02d7d10  fmuls 7, 12, 6
  02d7d14  fmuls 8, 6, 4
  02d7d18  fnmsubs 7, 7, 6, 3
  02d7d1c  fmadds 6, 7, 8, 6
  02d7d20  fmuls 7, 12, 6
  02d7d24  fmuls 8, 6, 4
  02d7d28  fnmsubs 7, 7, 6, 3
  02d7d2c  fmadds 6, 7, 8, 6
  02d7d30  fmuls 8, 11, 6
  02d7d34  fmuls 7, 10, 6
  02d7d38  fmuls 6, 9, 6
  02d7d3c  lfs 0, 4(5)
  02d7d40  lfs 31, 0(5)
  02d7d44  fmuls 9, 0, 0
  02d7d48  lfs 13, 8(5)
  02d7d4c  fmr 11, 5
  02d7d50  fmadds 12, 31, 31, 9
  02d7d54  fmr 10, 11
  02d7d58  fmadds 12, 13, 13, 12
  02d7d5c  fmr 9, 10
  02d7d60  fsqrts 30, 12
  02d7d64  fcmpu 0, 30, 9
  02d7d68  bt 2, 0x2d7dac
  02d7d6c  frsqrte 9, 12
  02d7d70  fmuls 10, 12, 9
  02d7d74  fmuls 11, 9, 4
  02d7d78  fnmsubs 10, 10, 9, 3
  02d7d7c  fmadds 9, 10, 11, 9
  02d7d80  fmuls 10, 12, 9
  02d7d84  fmuls 11, 9, 4
  02d7d88  fnmsubs 10, 10, 9, 3
  02d7d8c  fmadds 9, 10, 11, 9
  02d7d90  fmuls 10, 12, 9
  02d7d94  fmuls 11, 9, 4
  02d7d98  fnmsubs 10, 10, 9, 3
  02d7d9c  fmadds 9, 10, 11, 9
  02d7da0  fmuls 11, 9, 31
  02d7da4  fmuls 10, 9, 0
  02d7da8  fmuls 9, 9, 13
  02d7dac  fmr 12, 6
  02d7db0  fmuls 6, 7, 10
  02d7db4  fmadds 6, 8, 11, 6
  02d7db8  fmadds 6, 12, 9, 6
  02d7dbc  fmuls 13, 6, 2
  02d7dc0  fnmsubs 6, 13, 10, 7
  02d7dc4  fnmsubs 7, 13, 11, 8
  02d7dc8  fnmsubs 8, 13, 9, 12
  02d7dcc  fmr 12, 5
  02d7dd0  fmuls 9, 6, 6
  02d7dd4  fmr 11, 12
  02d7dd8  fmadds 9, 7, 7, 9
  02d7ddc  fmr 10, 11
  02d7de0  fmadds 9, 8, 8, 9
  02d7de4  fsqrts 13, 9
  02d7de8  fcmpu 0, 13, 10
  02d7dec  bt 2, 0x2d7e30
  02d7df0  frsqrte 10, 9
  02d7df4  fmuls 11, 9, 10
  02d7df8  fmuls 12, 10, 4
  02d7dfc  fnmsubs 11, 11, 10, 3
  02d7e00  fmadds 10, 11, 12, 10
  02d7e04  fmuls 11, 9, 10
  02d7e08  fmuls 12, 10, 4
  02d7e0c  fnmsubs 11, 11, 10, 3
  02d7e10  fmadds 10, 11, 12, 10
  02d7e14  fmuls 9, 9, 10
  02d7e18  fmuls 11, 10, 4
  02d7e1c  fnmsubs 9, 9, 10, 3
  02d7e20  fmadds 10, 9, 11, 10
  02d7e24  fmuls 12, 10, 7
  02d7e28  fmuls 11, 10, 6
  02d7e2c  fmuls 10, 10, 8
  02d7e30  fmuls 6, 11, 11
  02d7e34  fadds 7, 10, 3
  02d7e38  addic 8, 8, 1
  02d7e3c  addic 6, 6, 12
  02d7e40  cmpw 8, 3
  02d7e44  fmadds 6, 12, 12, 6
  02d7e48  addic 5, 5, 12
  02d7e4c  fmadds 6, 7, 7, 6
  02d7e50  fsqrts 6, 6
  02d7e54  fmuls 6, 6, 2
  02d7e58  fdivs 7, 12, 6
  02d7e5c  fdivs 6, 11, 6
  02d7e60  fadds 7, 7, 4
  02d7e64  fmuls 7, 7, 1
  02d7e68  fadds 6, 6, 4
  02d7e6c  stfs 7, 0(4)
  02d7e70  fmuls 6, 6, 1
  02d7e74  stfs 6, 4(4)
  02d7e78  addic 4, 4, 8
  02d7e7c  bt 0, 0x2d7cb4
  02d7e80  lfd 30, 48(1)
  02d7e84  lfd 31, 56(1)
  02d7e88  addi 1, 1, 64
  02d7e8c  blr

M1908_002d7e90:   # 0x2d7e90, 0x150 bytes
  02d7e90  stdu 1, -144(1)
  02d7e94  mflr 0
  02d7e98  std 0, 160(1)
  02d7e9c  std 31, 136(1)
  02d7ea0  std 30, 128(1)
  02d7ea4  std 29, 120(1)
  02d7ea8  std 28, 112(1)
  02d7eac  li 3, 48
  02d7eb0  bl 0x685c4
  02d7eb4  nop
  02d7eb8  ori 4, 3, 0
  02d7ebc  li 3, 24
  02d7ec0  bl 0x174f80
  02d7ec4  nop
  02d7ec8  li 3, 0
  02d7ecc  li 4, 1
  02d7ed0  li 5, 2
  02d7ed4  li 6, 1
  02d7ed8  li 7, 32
  02d7edc  bl 0x502ea8
  02d7ee0  nop
  02d7ee4  ori 4, 3, 0
  02d7ee8  li 3, 3
  02d7eec  bl 0x174f80
  02d7ef0  nop
  02d7ef4  li 3, 0
  02d7ef8  li 4, 0
  02d7efc  li 5, 0
  02d7f00  li 6, 0
  02d7f04  li 7, 0
  02d7f08  li 8, 0
  02d7f0c  bl 0x502f08
  02d7f10  nop
  02d7f14  ori 4, 3, 0
  02d7f18  li 3, 6
  02d7f1c  bl 0x174f80
  02d7f20  nop
  02d7f24  li 3, 0
  02d7f28  lis 9, 0
  02d7f2c  li 4, 0
  02d7f30  li 5, 1
  02d7f34  li 6, 1
  02d7f38  li 7, 1
  02d7f3c  li 8, 0
  02d7f40  ori 9, 9, 65424
  02d7f44  bl 0x502fd4
  02d7f48  nop
  02d7f4c  ori 4, 3, 0
  02d7f50  li 3, 26
  02d7f54  bl 0x174f80
  02d7f58  nop
  02d7f5c  bl 0x71170
  02d7f60  nop
  02d7f64  lis 31, 126
  02d7f68  lis 3, 126
  02d7f6c  lis 5, 126
  02d7f70  lis 4, 267
  02d7f74  lis 30, 126
  02d7f78  lwz 6, -28368(31)
  02d7f7c  addic 28, 4, 29888
  02d7f80  lis 29, 126
  02d7f84  lwz 4, -25944(3)
  02d7f88  lwz 8, -25948(5)
  02d7f8c  extsw 3, 6
  02d7f90  ori 7, 28, 0
  02d7f94  lwz 5, -25952(30)
  02d7f98  ori 6, 8, 0
  02d7f9c  bl 0x2d7c68
  02d7fa0  lwz 3, -28368(31)
  02d7fa4  lwz 4, -25952(30)
  02d7fa8  ori 6, 28, 0
  02d7fac  lwz 5, -25940(29)
  02d7fb0  extsw 3, 3
  02d7fb4  li 7, 9
  02d7fb8  bl 0x74604
  02d7fbc  nop
  02d7fc0  ld 0, 160(1)
  02d7fc4  mtlr 0
  02d7fc8  ld 28, 112(1)
  02d7fcc  ld 29, 120(1)
  02d7fd0  ld 30, 128(1)
  02d7fd4  ld 31, 136(1)
  02d7fd8  addi 1, 1, 144
  02d7fdc  blr

UpdateMoby_1908:   # 0x2d7fe0, 0x60 bytes
  02d7fe0  stdu 1, -112(1)
  02d7fe4  mflr 0
  02d7fe8  std 0, 128(1)
  02d7fec  lbz 4, 32(3)
  02d7ff0  cmpwi 4, 0
  02d7ff4  cmpwi 1, 4, 1
  02d7ff8  cmpwi 6, 4, -1
  02d7ffc  bt 1, 0x2d8008
  02d8000  bf 25, 0x2d8030
  02d8004  b 0x2d8010
  02d8008  bf 5, 0x2d801c
  02d800c  b 0x2d8030
  02d8010  li 4, 1
  02d8014  stb 4, 32(3)
  02d8018  b 0x2d8030
  02d801c  lis 5, 113
  02d8020  ori 4, 3, 0
  02d8024  addic 3, 5, -19440
  02d8028  bl 0x6d720
  02d802c  nop
  02d8030  ld 0, 128(1)
  02d8034  mtlr 0
  02d8038  addi 1, 1, 112
  02d803c  blr
