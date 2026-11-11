# game/update/moby1117.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1117_001d3ba8:   # 0x1d3ba8, 0x58 bytes
  01d3ba8  lis 5, 151
  01d3bac  addic 5, 5, -25376
  01d3bb0  lwz 6, 8332(5)
  01d3bb4  lwz 4, 1272(5)
  01d3bb8  cmpwi 6, 3
  01d3bbc  bt 2, 0x1d3bcc
  01d3bc0  lwz 6, 8324(5)
  01d3bc4  cmpwi 6, 28
  01d3bc8  bf 2, 0x1d3bd8
  01d3bcc  cmpw 4, 3
  01d3bd0  bt 2, 0x1d3bf0
  01d3bd4  b 0x1d3bf8
  01d3bd8  lhz 4, 782(5)
  01d3bdc  cmpwi 4, 0
  01d3be0  bf 2, 0x1d3bf8
  01d3be4  lwz 4, 764(5)
  01d3be8  cmpw 4, 3
  01d3bec  bf 2, 0x1d3bf8
  01d3bf0  li 3, 1
  01d3bf4  b 0x1d3bfc
  01d3bf8  li 3, 0
  01d3bfc  blr

UpdateMoby_1117:   # 0x1d3c28, 0x3e8 bytes
  01d3c28  stdu 1, -192(1)
  01d3c2c  mflr 0
  01d3c30  std 0, 208(1)
  01d3c34  stfd 28, 160(1)
  01d3c38  stfd 29, 168(1)
  01d3c3c  stfd 30, 176(1)
  01d3c40  stfd 31, 184(1)
  01d3c44  std 30, 144(1)
  01d3c48  std 31, 152(1)
  01d3c4c  lis 30, 151
  01d3c50  ori 31, 3, 0
  01d3c54  std 29, 136(1)
  01d3c58  addic 30, 30, -25376
  01d3c5c  lwz 29, 120(31)
  01d3c60  lfs 29, 16(31)
  01d3c64  lwz 3, 8332(30)
  01d3c68  lfs 30, 20(31)
  01d3c6c  lfs 31, 24(31)
  01d3c70  cmpwi 3, 3
  01d3c74  std 28, 128(1)
  01d3c78  lwz 3, 1272(30)
  01d3c7c  bt 2, 0x1d3c8c
  01d3c80  lwz 4, 8324(30)
  01d3c84  cmpwi 4, 28
  01d3c88  bf 2, 0x1d3c98
  01d3c8c  cmpw 3, 31
  01d3c90  bt 2, 0x1d3cb0
  01d3c94  b 0x1d3cb8
  01d3c98  lhz 3, 782(30)
  01d3c9c  cmpwi 3, 0
  01d3ca0  bf 2, 0x1d3cb8
  01d3ca4  lwz 3, 764(30)
  01d3ca8  cmpw 3, 31
  01d3cac  bf 2, 0x1d3cb8
  01d3cb0  li 3, 2
  01d3cb4  stb 3, 32(31)
  01d3cb8  addic 3, 29, 188
  01d3cbc  bl 0x4fff60
  01d3cc0  nop
  01d3cc4  lbz 3, 32(31)
  01d3cc8  cmpwi 3, 1
  01d3ccc  bt 1, 0x1d3ce4
  01d3cd0  cmpwi 3, -1
  01d3cd4  bf 1, 0x1d3f9c
  01d3cd8  cmpwi 3, 0
  01d3cdc  bf 1, 0x1d3cf8
  01d3ce0  b 0x1d3d80
  01d3ce4  cmpwi 3, 2
  01d3ce8  bf 1, 0x1d3de0
  01d3cec  cmpwi 3, 3
  01d3cf0  bf 1, 0x1d3eb0
  01d3cf4  b 0x1d3f9c
  01d3cf8  lis 3, 29
  01d3cfc  li 5, 4
  01d3d00  addi 30, 3, 15360
  01d3d04  li 3, 0
  01d3d08  li 4, 5
  01d3d0c  lfs 28, 0(30)
  01d3d10  stw 3, 32(29)
  01d3d14  stb 5, 40(29)
  01d3d18  sth 3, 36(29)
  01d3d1c  lfs 1, 24(31)
  01d3d20  sth 4, 62(29)
  01d3d24  stfs 1, 160(29)
  01d3d28  bl 0xfcc68
  01d3d2c  nop
  01d3d30  stfs 1, 168(29)
  01d3d34  bl 0xfcc68
  01d3d38  nop
  01d3d3c  stfs 1, 180(29)
  01d3d40  bl 0xfcc68
  01d3d44  nop
  01d3d48  stfs 1, 184(29)
  01d3d4c  lis 28, 114
  01d3d50  fmr 1, 28
  01d3d54  lfs 2, 4(30)
  01d3d58  lfs 3, -3052(28)
  01d3d5c  fmuls 2, 3, 2
  01d3d60  bl 0xfe4f0
  01d3d64  nop
  01d3d68  lfs 2, 8(30)
  01d3d6c  li 3, 1
  01d3d70  lfs 3, -3052(28)
  01d3d74  fmadds 1, 3, 2, 1
  01d3d78  stfs 1, 176(29)
  01d3d7c  stb 3, 32(31)
  01d3d80  lis 5, 29
  01d3d84  li 3, 0
  01d3d88  addi 30, 5, 15360
  01d3d8c  addic 4, 29, 168
  01d3d90  addic 5, 29, 172
  01d3d94  stw 3, 164(29)
  01d3d98  lfs 2, 176(29)
  01d3d9c  ori 3, 31, 0
  01d3da0  lfs 1, 12(30)
  01d3da4  bl 0x116a68
  01d3da8  nop
  01d3dac  lis 6, 114
  01d3db0  lfs 3, 20(30)
  01d3db4  ori 3, 31, 0
  01d3db8  lfs 4, 24(30)
  01d3dbc  addic 4, 29, 180
  01d3dc0  lfs 1, 16(30)
  01d3dc4  addic 5, 29, 184
  01d3dc8  lfs 5, -3052(6)
  01d3dcc  fmuls 2, 5, 3
  01d3dd0  fmuls 3, 5, 4
  01d3dd4  bl 0x116b70
  01d3dd8  nop
  01d3ddc  b 0x1d3f9c
  01d3de0  lis 3, 29
  01d3de4  lfs 1, 164(29)
  01d3de8  lis 4, 114
  01d3dec  addi 3, 3, 15360
  01d3df0  lfs 2, 28(3)
  01d3df4  lfs 3, -3048(4)
  01d3df8  lis 4, 114
  01d3dfc  fnmsubs 1, 3, 2, 1
  01d3e00  stfs 1, 164(29)
  01d3e04  lfs 2, 32(3)
  01d3e08  lfs 3, -3052(4)
  01d3e0c  fmuls 2, 3, 2
  01d3e10  fcmpu 0, 1, 2
  01d3e14  cror 6, 1, 2
  01d3e18  bt 6, 0x1d3e24
  01d3e1c  fmr 1, 2
  01d3e20  stfs 2, 164(29)
  01d3e24  lfs 2, 24(31)
  01d3e28  lwz 3, 8332(30)
  01d3e2c  fadds 1, 2, 1
  01d3e30  cmpwi 3, 3
  01d3e34  stfs 1, 24(31)
  01d3e38  bt 2, 0x1d3e48
  01d3e3c  lwz 3, 8324(30)
  01d3e40  cmpwi 3, 28
  01d3e44  bf 2, 0x1d3e58
  01d3e48  lwz 3, 1272(30)
  01d3e4c  cmpw 3, 31
  01d3e50  bt 2, 0x1d3e78
  01d3e54  b 0x1d3e70
  01d3e58  lhz 3, 782(30)
  01d3e5c  cmpwi 3, 0
  01d3e60  bf 2, 0x1d3e70
  01d3e64  lwz 3, 764(30)
  01d3e68  cmpw 3, 31
  01d3e6c  bt 2, 0x1d3e78
  01d3e70  li 3, 3
  01d3e74  stb 3, 32(31)
  01d3e78  lwz 3, 188(29)
  01d3e7c  cmpwi 3, 0
  01d3e80  bt 1, 0x1d3f9c
  01d3e84  li 3, 0
  01d3e88  li 4, 0
  01d3e8c  ori 5, 31, 0
  01d3e90  bl 0x15d12c
  01d3e94  nop
  01d3e98  li 3, 40
  01d3e9c  li 4, 60
  01d3ea0  bl 0xfe484
  01d3ea4  nop
  01d3ea8  stw 3, 188(29)
  01d3eac  b 0x1d3f9c
  01d3eb0  lis 3, 29
  01d3eb4  lwz 4, 164(29)
  01d3eb8  lfs 1, 164(29)
  01d3ebc  addi 3, 3, 15360
  01d3ec0  cmpwi 4, 0
  01d3ec4  lfs 5, 0(3)
  01d3ec8  bt 0, 0x1d3f0c
  01d3ecc  lis 3, 29
  01d3ed0  lis 4, 114
  01d3ed4  fmuls 3, 1, 1
  01d3ed8  addi 3, 3, 15360
  01d3edc  lfs 2, 28(3)
  01d3ee0  lfs 4, -3048(4)
  01d3ee4  fmuls 4, 4, 2
  01d3ee8  lfs 6, 160(29)
  01d3eec  lfs 7, 24(31)
  01d3ef0  fmuls 4, 4, 2
  01d3ef4  fdivs 8, 3, 4
  01d3ef8  fsubs 4, 6, 7
  01d3efc  fcmpu 1, 4, 5
  01d3f00  fcmpu 0, 4, 8
  01d3f04  cror 2, 0, 2
  01d3f08  bt 2, 0x1d3f4c
  01d3f0c  lis 3, 114
  01d3f10  lis 4, 29
  01d3f14  addi 4, 4, 15360
  01d3f18  lfs 2, -3048(3)
  01d3f1c  lis 3, 114
  01d3f20  fadds 1, 1, 2
  01d3f24  stfs 1, 164(29)
  01d3f28  lfs 2, 28(4)
  01d3f2c  lfs 3, -3052(3)
  01d3f30  fmuls 2, 3, 2
  01d3f34  fcmpu 0, 1, 2
  01d3f38  cror 6, 0, 2
  01d3f3c  bt 6, 0x1d3f78
  01d3f40  fmr 1, 2
  01d3f44  stfs 2, 164(29)
  01d3f48  b 0x1d3f78
  01d3f4c  bf 5, 0x1d3f78
  01d3f50  fmuls 2, 4, 2
  01d3f54  fdivs 2, 3, 2
  01d3f58  fsubs 1, 1, 2
  01d3f5c  fcmpu 0, 1, 5
  01d3f60  stfs 1, 164(29)
  01d3f64  cror 6, 1, 2
  01d3f68  bt 6, 0x1d3f78
  01d3f6c  li 3, 0
  01d3f70  fmr 1, 5
  01d3f74  stw 3, 164(29)
  01d3f78  lfs 2, 24(31)
  01d3f7c  fadds 2, 2, 1
  01d3f80  stfs 2, 24(31)
  01d3f84  lfs 1, 160(29)
  01d3f88  fcmpu 0, 2, 1
  01d3f8c  bt 0, 0x1d3f9c
  01d3f90  li 3, 1
  01d3f94  stfs 1, 24(31)
  01d3f98  stb 3, 32(31)
  01d3f9c  lfs 1, 16(31)
  01d3fa0  lfs 2, 20(31)
  01d3fa4  addic 5, 31, 64
  01d3fa8  fsubs 1, 1, 29
  01d3fac  lfs 3, 24(31)
  01d3fb0  fsubs 2, 2, 30
  01d3fb4  lfs 4, 28(31)
  01d3fb8  fsubs 3, 3, 31
  01d3fbc  addic 3, 29, 96
  01d3fc0  stfs 4, 124(1)
  01d3fc4  addic 4, 1, 112
  01d3fc8  ori 6, 5, 0
  01d3fcc  stfs 1, 112(1)
  01d3fd0  stfs 2, 116(1)
  01d3fd4  stfs 3, 120(1)
  01d3fd8  bl 0x112900
  01d3fdc  nop
  01d3fe0  ld 0, 208(1)
  01d3fe4  mtlr 0
  01d3fe8  lfd 28, 160(1)
  01d3fec  lfd 29, 168(1)
  01d3ff0  lfd 30, 176(1)
  01d3ff4  lfd 31, 184(1)
  01d3ff8  ld 28, 128(1)
  01d3ffc  ld 29, 136(1)
  01d4000  ld 30, 144(1)
  01d4004  ld 31, 152(1)
  01d4008  addi 1, 1, 192
  01d400c  blr
