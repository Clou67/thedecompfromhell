# game/update/moby552.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M552_003b1bf0:   # 0x3b1bf0, 0x78 bytes
  03b1bf0  lis 4, 165
  03b1bf4  lbz 3, 33(3)
  03b1bf8  lis 5, 164
  03b1bfc  addic 4, 4, -28284
  03b1c00  slwi 6, 3, 2
  03b1c04  lwz 3, -28512(5)
  03b1c08  lwzx 4, 4, 6
  03b1c0c  cmpwi 4, 0
  03b1c10  bf 2, 0x3b1c1c
  03b1c14  li 3, 1
  03b1c18  b 0x3b1c64
  03b1c1c  lhz 5, 0(4)
  03b1c20  rlwinm 5, 5, 8, 9, 23
  03b1c24  addc 5, 3, 5
  03b1c28  clrldi 5, 5, 32
  03b1c2c  lhz 6, 166(5)
  03b1c30  cmpwi 6, 546
  03b1c34  bf 2, 0x3b1c4c
  03b1c38  lbz 5, 188(5)
  03b1c3c  cmpwi 5, 0
  03b1c40  bt 2, 0x3b1c4c
  03b1c44  li 3, 0
  03b1c48  b 0x3b1c64
  03b1c4c  lhz 5, 0(4)
  03b1c50  addic 4, 4, 2
  03b1c54  extsh 5, 5
  03b1c58  cmpwi 5, 0
  03b1c5c  bf 0, 0x3b1c1c
  03b1c60  li 3, 1
  03b1c64  blr

M552_003b1c70:   # 0x3b1c70, 0x9c bytes
  03b1c70  lis 5, 59
  03b1c74  lbz 6, 33(3)
  03b1c78  lis 4, 165
  03b1c7c  lfs 1, 24(3)
  03b1c80  addi 5, 5, 7272
  03b1c84  addic 4, 4, -28284
  03b1c88  slwi 6, 6, 2
  03b1c8c  lis 7, 164
  03b1c90  lfs 2, 0(5)
  03b1c94  lwzx 6, 4, 6
  03b1c98  lwz 4, -28512(7)
  03b1c9c  cmpwi 6, 0
  03b1ca0  bf 2, 0x3b1cac
  03b1ca4  li 3, 0
  03b1ca8  b 0x3b1d08
  03b1cac  lhz 5, 0(6)
  03b1cb0  rlwinm 5, 5, 8, 9, 23
  03b1cb4  addc 5, 4, 5
  03b1cb8  clrldi 5, 5, 32
  03b1cbc  lhz 7, 166(5)
  03b1cc0  cmpwi 7, 552
  03b1cc4  bf 2, 0x3b1cf0
  03b1cc8  cmpw 3, 5
  03b1ccc  bt 2, 0x3b1cf0
  03b1cd0  lfs 3, 24(5)
  03b1cd4  fsubs 3, 3, 1
  03b1cd8  fabs 3, 3
  03b1cdc  fcmpu 0, 3, 2
  03b1ce0  cror 6, 1, 2
  03b1ce4  bt 6, 0x3b1cf0
  03b1ce8  ori 3, 5, 0
  03b1cec  b 0x3b1d08
  03b1cf0  lhz 5, 0(6)
  03b1cf4  addic 6, 6, 2
  03b1cf8  extsh 5, 5
  03b1cfc  cmpwi 5, 0
  03b1d00  bf 0, 0x3b1cac
  03b1d04  li 3, 0
  03b1d08  blr

M552_003b1d10:   # 0x3b1d10, 0x114 bytes
  03b1d10  stdu 1, -64(1)
  03b1d14  lis 6, 165
  03b1d18  lbz 4, 33(3)
  03b1d1c  addic 6, 6, -28284
  03b1d20  slwi 4, 4, 2
  03b1d24  lwzx 9, 6, 4
  03b1d28  std 31, 56(1)
  03b1d2c  cmpwi 9, 0
  03b1d30  bt 2, 0x3b1e18
  03b1d34  lis 4, 59
  03b1d38  lis 5, 164
  03b1d3c  addi 7, 4, 7436
  03b1d40  lwz 4, -28512(5)
  03b1d44  lfs 1, 0(7)
  03b1d48  lhz 7, 0(9)
  03b1d4c  ori 10, 4, 0
  03b1d50  rlwinm 7, 7, 8, 9, 23
  03b1d54  addc 12, 10, 7
  03b1d58  clrldi 12, 12, 32
  03b1d5c  lhz 7, 166(12)
  03b1d60  cmpwi 7, 552
  03b1d64  bf 2, 0x3b1e04
  03b1d68  cmpw 3, 12
  03b1d6c  bt 2, 0x3b1d84
  03b1d70  lhz 4, 52(12)
  03b1d74  ori 4, 4, 2
  03b1d78  sth 4, 52(12)
  03b1d7c  lwz 10, -28512(5)
  03b1d80  ori 4, 10, 0
  03b1d84  lbz 7, 33(12)
  03b1d88  lwz 8, 120(12)
  03b1d8c  slwi 7, 7, 2
  03b1d90  lwzx 11, 6, 7
  03b1d94  cmpwi 11, 0
  03b1d98  bf 2, 0x3b1da4
  03b1d9c  li 7, 0
  03b1da0  b 0x3b1e00
  03b1da4  lhz 7, 0(11)
  03b1da8  rlwinm 7, 7, 8, 9, 23
  03b1dac  addc 7, 10, 7
  03b1db0  clrldi 7, 7, 32
  03b1db4  cmpw 1, 12, 7
  03b1db8  lhz 31, 166(7)
  03b1dbc  cmpwi 31, 552
  03b1dc0  crorc 2, 6, 2
  03b1dc4  bt 2, 0x3b1de8
  03b1dc8  lfs 2, 24(7)
  03b1dcc  lfs 3, 24(12)
  03b1dd0  fsubs 2, 2, 3
  03b1dd4  fabs 2, 2
  03b1dd8  fcmpu 0, 2, 1
  03b1ddc  cror 6, 1, 2
  03b1de0  bt 6, 0x3b1de8
  03b1de4  b 0x3b1e00
  03b1de8  lhz 7, 0(11)
  03b1dec  addic 11, 11, 2
  03b1df0  extsh 7, 7
  03b1df4  cmpwi 7, 0
  03b1df8  bf 0, 0x3b1da4
  03b1dfc  li 7, 0
  03b1e00  stw 7, 0(8)
  03b1e04  lhz 7, 0(9)
  03b1e08  addic 9, 9, 2
  03b1e0c  extsh 7, 7
  03b1e10  cmpwi 7, 0
  03b1e14  bf 0, 0x3b1d48
  03b1e18  ld 31, 56(1)
  03b1e1c  addi 1, 1, 64
  03b1e20  blr

UpdateMoby_552:   # 0x3b1e24, 0x1ac bytes
  03b1e24  stdu 1, -128(1)
  03b1e28  mflr 0
  03b1e2c  std 0, 144(1)
  03b1e30  std 31, 120(1)
  03b1e34  lhz 4, 52(3)
  03b1e38  std 30, 112(1)
  03b1e3c  ori 31, 3, 0
  03b1e40  lwz 30, 120(3)
  03b1e44  rlwinm 3, 4, 0, 30, 30
  03b1e48  cmpwi 3, 0
  03b1e4c  bf 2, 0x3b1fb8
  03b1e50  lbz 3, 32(31)
  03b1e54  cmpwi 3, 0
  03b1e58  cmpwi 1, 3, 1
  03b1e5c  cmpwi 6, 3, -1
  03b1e60  bt 1, 0x3b1e6c
  03b1e64  bf 25, 0x3b1fb8
  03b1e68  b 0x3b1e74
  03b1e6c  bf 5, 0x3b1e94
  03b1e70  b 0x3b1fb8
  03b1e74  lwz 3, 0(30)
  03b1e78  cmpwi 3, 0
  03b1e7c  bf 2, 0x3b1fb8
  03b1e80  ori 3, 31, 0
  03b1e84  bl 0x3b1d10
  03b1e88  li 3, 1
  03b1e8c  stb 3, 32(31)
  03b1e90  b 0x3b1fb8
  03b1e94  lis 3, 165
  03b1e98  lbz 5, 33(31)
  03b1e9c  addic 4, 3, -28284
  03b1ea0  lis 3, 164
  03b1ea4  slwi 5, 5, 2
  03b1ea8  lwz 3, -28512(3)
  03b1eac  lwzx 5, 4, 5
  03b1eb0  cmpwi 5, 0
  03b1eb4  bt 2, 0x3b1f04
  03b1eb8  lhz 4, 0(5)
  03b1ebc  rlwinm 4, 4, 8, 9, 23
  03b1ec0  addc 4, 3, 4
  03b1ec4  clrldi 4, 4, 32
  03b1ec8  lhz 6, 166(4)
  03b1ecc  cmpwi 6, 546
  03b1ed0  bf 2, 0x3b1ef0
  03b1ed4  lbz 4, 188(4)
  03b1ed8  cmpwi 4, 0
  03b1edc  bt 2, 0x3b1ef0
  03b1ee0  lwz 3, 8(30)
  03b1ee4  cmpwi 3, 0
  03b1ee8  bf 2, 0x3b1f58
  03b1eec  b 0x3b1fb8
  03b1ef0  lhz 4, 0(5)
  03b1ef4  addic 5, 5, 2
  03b1ef8  extsh 4, 4
  03b1efc  cmpwi 4, 0
  03b1f00  bf 0, 0x3b1eb8
  03b1f04  li 5, 1
  03b1f08  lis 3, 113
  03b1f0c  ori 4, 31, 0
  03b1f10  addic 3, 3, -11888
  03b1f14  stw 5, 8(30)
  03b1f18  bl 0x6d720
  03b1f1c  nop
  03b1f20  lwz 4, 12(30)
  03b1f24  ori 3, 31, 0
  03b1f28  extsw 4, 4
  03b1f2c  bl 0x15cc7c
  03b1f30  nop
  03b1f34  cmpwi 3, 0
  03b1f38  bf 2, 0x3b1fb8
  03b1f3c  li 3, 0
  03b1f40  li 4, 4
  03b1f44  ori 5, 31, 0
  03b1f48  bl 0x15d12c
  03b1f4c  nop
  03b1f50  stw 3, 12(30)
  03b1f54  b 0x3b1fb8
  03b1f58  li 3, 0
  03b1f5c  lwz 4, 12(30)
  03b1f60  cmpwi 4, -1
  03b1f64  stw 3, 8(30)
  03b1f68  bt 2, 0x3b1fb0
  03b1f6c  sldi 3, 4, 7
  03b1f70  sldi 6, 4, 4
  03b1f74  lis 5, 150
  03b1f78  subc 3, 3, 6
  03b1f7c  addic 5, 5, 14312
  03b1f80  extsw 3, 3
  03b1f84  lwzx 5, 5, 3
  03b1f88  cmpw 5, 31
  03b1f8c  bf 2, 0x3b1fb0
  03b1f90  lis 5, 150
  03b1f94  addic 5, 5, 14292
  03b1f98  lbzx 3, 5, 3
  03b1f9c  cmpwi 3, 0
  03b1fa0  bt 2, 0x3b1fb0
  03b1fa4  extsw 3, 4
  03b1fa8  bl 0x15cdb0
  03b1fac  nop
  03b1fb0  li 3, -1
  03b1fb4  stw 3, 12(30)
  03b1fb8  ld 0, 144(1)
  03b1fbc  mtlr 0
  03b1fc0  ld 30, 112(1)
  03b1fc4  ld 31, 120(1)
  03b1fc8  addi 1, 1, 128
  03b1fcc  blr
