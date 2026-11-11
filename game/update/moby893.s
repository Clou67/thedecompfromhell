# game/update/moby893.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M893_004a3bc8:   # 0x4a3bc8, 0x14 bytes
  04a3bc8  lis 3, 141
  04a3bcc  lis 4, 1
  04a3bd0  addic 3, 3, -16164
  04a3bd4  stw 4, 72(3)
  04a3bd8  blr

UpdateMoby_893:   # 0x4a3c20, 0x514 bytes
  04a3c20  stdu 1, -176(1)
  04a3c24  mflr 0
  04a3c28  std 0, 192(1)
  04a3c2c  stfd 28, 144(1)
  04a3c30  stfd 29, 152(1)
  04a3c34  stfd 30, 160(1)
  04a3c38  stfd 31, 168(1)
  04a3c3c  std 31, 136(1)
  04a3c40  ori 31, 3, 0
  04a3c44  std 30, 128(1)
  04a3c48  lbz 3, 32(31)
  04a3c4c  lwz 30, 120(31)
  04a3c50  lfs 3, 16(31)
  04a3c54  cmpwi 3, 2
  04a3c58  lfs 2, 20(31)
  04a3c5c  cmpwi 1, 3, -1
  04a3c60  cmpwi 6, 3, 0
  04a3c64  lfs 1, 24(31)
  04a3c68  std 29, 120(1)
  04a3c6c  cmpwi 7, 3, 4
  04a3c70  bt 1, 0x4a3c80
  04a3c74  bf 5, 0x4a4108
  04a3c78  bf 25, 0x4a3c90
  04a3c7c  b 0x4a3db8
  04a3c80  bf 29, 0x4a3f74
  04a3c84  cmpwi 3, 6
  04a3c88  bf 1, 0x4a3e20
  04a3c8c  b 0x4a4108
  04a3c90  lwz 3, 80(30)
  04a3c94  cmpwi 3, 0
  04a3c98  bt 2, 0x4a3cbc
  04a3c9c  lis 3, 16457
  04a3ca0  lis 4, 74
  04a3ca4  ori 3, 3, 4059
  04a3ca8  addi 4, 4, 15328
  04a3cac  stw 3, 64(31)
  04a3cb0  lfs 2, 0(4)
  04a3cb4  fadds 1, 1, 2
  04a3cb8  stfs 1, 24(31)
  04a3cbc  stfs 3, 0(30)
  04a3cc0  ori 3, 31, 0
  04a3cc4  lfs 1, 20(31)
  04a3cc8  addic 5, 30, 16
  04a3ccc  li 4, 0
  04a3cd0  stfs 1, 4(30)
  04a3cd4  lfs 1, 24(31)
  04a3cd8  stfs 1, 8(30)
  04a3cdc  lfs 1, 28(31)
  04a3ce0  stfs 1, 12(30)
  04a3ce4  bl 0xf0ea8
  04a3ce8  nop
  04a3cec  lwz 3, 84(30)
  04a3cf0  cmpwi 3, 0
  04a3cf4  bt 2, 0x4a3d70
  04a3cf8  li 3, 0
  04a3cfc  li 4, 2
  04a3d00  stw 3, 96(30)
  04a3d04  stb 4, 32(31)
  04a3d08  lwz 3, 80(30)
  04a3d0c  lfs 7, 16(31)
  04a3d10  cmpwi 3, 0
  04a3d14  lfs 6, 20(31)
  04a3d18  lfs 5, 24(31)
  04a3d1c  bt 2, 0x4a3d3c
  04a3d20  lis 3, 74
  04a3d24  lfs 2, 208(31)
  04a3d28  addi 3, 3, 15328
  04a3d2c  lfs 3, 212(31)
  04a3d30  lfs 1, 4(3)
  04a3d34  lfs 4, 216(31)
  04a3d38  b 0x4a3d54
  04a3d3c  lis 3, 74
  04a3d40  lfs 2, 208(31)
  04a3d44  lfs 3, 212(31)
  04a3d48  addi 3, 3, 15328
  04a3d4c  lfs 1, 8(3)
  04a3d50  lfs 4, 216(31)
  04a3d54  fmadds 2, 2, 1, 7
  04a3d58  fmadds 3, 3, 1, 6
  04a3d5c  fmadds 1, 4, 1, 5
  04a3d60  stfs 2, 16(31)
  04a3d64  stfs 3, 20(31)
  04a3d68  stfs 1, 24(31)
  04a3d6c  b 0x4a3da0
  04a3d70  lis 3, 74
  04a3d74  li 4, 1
  04a3d78  addi 5, 3, 15328
  04a3d7c  lis 6, 16151
  04a3d80  addic 3, 30, 32
  04a3d84  ori 6, 6, 59864
  04a3d88  stb 4, 32(31)
  04a3d8c  li 4, 0
  04a3d90  lfs 1, 12(5)
  04a3d94  stw 6, 96(30)
  04a3d98  bl 0x501980
  04a3d9c  nop
  04a3da0  lis 3, 151
  04a3da4  addic 3, 3, -25376
  04a3da8  lwz 3, 8320(3)
  04a3dac  ld 3, 56(3)
  04a3db0  std 3, 56(31)
  04a3db4  b 0x4a4108
  04a3db8  lis 4, 164
  04a3dbc  lwz 5, 88(30)
  04a3dc0  slwi 5, 5, 8
  04a3dc4  lwz 4, -28512(4)
  04a3dc8  addc 4, 4, 5
  04a3dcc  clrldi 4, 4, 32
  04a3dd0  lbz 4, 188(4)
  04a3dd4  cmpwi 4, 0
  04a3dd8  cmpwi 1, 4, 2
  04a3ddc  bt 2, 0x4a4108
  04a3de0  cmpwi 3, 2
  04a3de4  bf 2, 0x4a3df8
  04a3de8  bt 6, 0x4a3df8
  04a3dec  li 3, 4
  04a3df0  stb 3, 32(31)
  04a3df4  b 0x4a4108
  04a3df8  cmpwi 3, 1
  04a3dfc  bf 2, 0x4a4108
  04a3e00  li 3, 0
  04a3e04  li 4, 0
  04a3e08  ori 5, 31, 0
  04a3e0c  bl 0x15d12c
  04a3e10  nop
  04a3e14  li 3, 6
  04a3e18  stb 3, 32(31)
  04a3e1c  b 0x4a4108
  04a3e20  lis 4, 74
  04a3e24  cmpwi 3, 5
  04a3e28  addi 4, 4, 15328
  04a3e2c  lfs 30, 16(4)
  04a3e30  lfs 1, 20(4)
  04a3e34  fmr 31, 30
  04a3e38  bf 2, 0x4a3e4c
  04a3e3c  lis 3, 74
  04a3e40  addi 3, 3, 15328
  04a3e44  lfs 30, 12(3)
  04a3e48  lfs 1, 24(3)
  04a3e4c  lis 3, 74
  04a3e50  lis 5, 114
  04a3e54  addi 4, 3, 15328
  04a3e58  lis 6, 114
  04a3e5c  addic 3, 30, 96
  04a3e60  lfs 2, 28(4)
  04a3e64  lfs 3, -3048(5)
  04a3e68  lfs 4, 32(4)
  04a3e6c  fmuls 2, 3, 2
  04a3e70  lfs 5, -3052(6)
  04a3e74  addic 5, 30, 100
  04a3e78  fmuls 4, 5, 4
  04a3e7c  fmr 3, 2
  04a3e80  bl 0x10a2e0
  04a3e84  nop
  04a3e88  lwz 3, 96(30)
  04a3e8c  lis 4, 16151
  04a3e90  lfs 1, 96(30)
  04a3e94  srawi 5, 3, 31
  04a3e98  ori 4, 4, 59864
  04a3e9c  srwi 6, 5, 1
  04a3ea0  xor 3, 6, 3
  04a3ea4  subc 3, 3, 5
  04a3ea8  cmpw 3, 4
  04a3eac  bt 1, 0x4a3eb8
  04a3eb0  cmpwi 3, 0
  04a3eb4  bf 0, 0x4a3f5c
  04a3eb8  lis 4, 16151
  04a3ebc  ori 4, 4, 59864
  04a3ec0  cmpw 3, 4
  04a3ec4  bf 1, 0x4a3ee4
  04a3ec8  lis 3, 16151
  04a3ecc  lis 4, 74
  04a3ed0  ori 3, 3, 59864
  04a3ed4  addi 4, 4, 15328
  04a3ed8  stw 3, 96(30)
  04a3edc  lfs 1, 12(4)
  04a3ee0  b 0x4a3ef4
  04a3ee4  cmpwi 3, 0
  04a3ee8  bf 0, 0x4a3ef4
  04a3eec  fmr 1, 31
  04a3ef0  stfs 31, 96(30)
  04a3ef4  lbz 3, 188(31)
  04a3ef8  fcmpu 1, 1, 30
  04a3efc  cmpwi 3, 0
  04a3f00  bf 2, 0x4a3f28
  04a3f04  lis 4, 74
  04a3f08  li 3, 1
  04a3f0c  addi 4, 4, 15328
  04a3f10  stb 3, 188(31)
  04a3f14  lfs 1, 100(30)
  04a3f18  lfs 2, 36(4)
  04a3f1c  fmuls 1, 1, 2
  04a3f20  stfs 1, 100(30)
  04a3f24  b 0x4a3f5c
  04a3f28  bf 6, 0x4a3f5c
  04a3f2c  li 3, 5
  04a3f30  lbz 6, 32(31)
  04a3f34  li 4, 7
  04a3f38  subc 3, 3, 6
  04a3f3c  li 5, 3
  04a3f40  cntlzw 3, 3
  04a3f44  subc 4, 4, 5
  04a3f48  sldi 3, 3, 58
  04a3f4c  sradi 3, 3, 63
  04a3f50  and 3, 3, 4
  04a3f54  addc 3, 5, 3
  04a3f58  stb 3, 32(31)
  04a3f5c  addic 3, 30, 32
  04a3f60  lfs 1, 96(30)
  04a3f64  li 4, 0
  04a3f68  bl 0x501980
  04a3f6c  nop
  04a3f70  b 0x4a4108
  04a3f74  cmpwi 3, 3
  04a3f78  bf 2, 0x4a3fb0
  04a3f7c  lis 3, 74
  04a3f80  lfs 29, 208(31)
  04a3f84  addi 3, 3, 15328
  04a3f88  lfs 31, 40(3)
  04a3f8c  lfs 30, 212(31)
  04a3f90  lfs 4, 216(31)
  04a3f94  lfs 5, 0(30)
  04a3f98  lfs 6, 4(30)
  04a3f9c  lfs 7, 8(30)
  04a3fa0  fmadds 29, 29, 31, 5
  04a3fa4  fmadds 30, 30, 31, 6
  04a3fa8  fmadds 31, 4, 31, 7
  04a3fac  b 0x4a3fbc
  04a3fb0  lfs 29, 0(30)
  04a3fb4  lfs 30, 4(30)
  04a3fb8  lfs 31, 8(30)
  04a3fbc  fsubs 2, 30, 2
  04a3fc0  lis 3, 74
  04a3fc4  fsubs 3, 29, 3
  04a3fc8  li 4, 0
  04a3fcc  fsubs 1, 31, 1
  04a3fd0  addi 29, 3, 15328
  04a3fd4  lis 6, 114
  04a3fd8  lis 7, 114
  04a3fdc  addic 3, 1, 112
  04a3fe0  addic 5, 30, 92
  04a3fe4  lfs 28, 16(29)
  04a3fe8  stw 4, 112(1)
  04a3fec  lfs 5, 44(29)
  04a3ff0  fmuls 2, 2, 2
  04a3ff4  lfs 4, 48(29)
  04a3ff8  lfs 6, 52(29)
  04a3ffc  lfs 7, -3048(6)
  04a4000  lfs 9, -3052(7)
  04a4004  fmadds 8, 3, 3, 2
  04a4008  fmuls 3, 7, 4
  04a400c  fmuls 2, 7, 5
  04a4010  fmuls 4, 9, 6
  04a4014  fmadds 1, 1, 1, 8
  04a4018  fsqrts 1, 1
  04a401c  bl 0x109c30
  04a4020  nop
  04a4024  lfs 1, 20(31)
  04a4028  lfs 2, 16(31)
  04a402c  fsubs 3, 30, 1
  04a4030  lfs 5, 24(31)
  04a4034  fsubs 4, 29, 2
  04a4038  fsubs 6, 31, 5
  04a403c  lfs 8, 92(30)
  04a4040  fmuls 7, 3, 3
  04a4044  lbz 30, 32(31)
  04a4048  fmadds 7, 4, 4, 7
  04a404c  fmadds 7, 6, 6, 7
  04a4050  fsqrts 7, 7
  04a4054  fdivs 8, 8, 7
  04a4058  fsub 9, 28, 7
  04a405c  fsub 11, 28, 7
  04a4060  fsub 10, 7, 28
  04a4064  fsub 12, 28, 7
  04a4068  fsub 13, 7, 28
  04a406c  fsub 7, 7, 28
  04a4070  fmuls 3, 3, 8
  04a4074  fmuls 4, 4, 8
  04a4078  fmuls 6, 6, 8
  04a407c  fsel 8, 9, 28, 3
  04a4080  fsel 9, 11, 28, 4
  04a4084  fsel 11, 12, 28, 6
  04a4088  fsel 3, 10, 8, 3
  04a408c  fsel 4, 13, 9, 4
  04a4090  fsel 6, 7, 11, 6
  04a4094  fadds 1, 1, 3
  04a4098  fadds 2, 2, 4
  04a409c  fadds 3, 5, 6
  04a40a0  fsubs 4, 1, 30
  04a40a4  fsubs 5, 2, 29
  04a40a8  fsubs 6, 3, 31
  04a40ac  stfs 2, 16(31)
  04a40b0  stfs 1, 20(31)
  04a40b4  stfs 3, 24(31)
  04a40b8  lfs 2, 56(29)
  04a40bc  fmuls 4, 4, 4
  04a40c0  fmadds 4, 5, 5, 4
  04a40c4  fmadds 4, 6, 6, 4
  04a40c8  fsqrts 1, 4
  04a40cc  fcmpu 0, 1, 2
  04a40d0  cror 6, 1, 2
  04a40d4  bt 6, 0x4a4108
  04a40d8  cmpwi 30, 3
  04a40dc  bf 2, 0x4a4100
  04a40e0  li 3, 1
  04a40e4  li 4, 0
  04a40e8  ori 5, 31, 0
  04a40ec  bl 0x15d12c
  04a40f0  nop
  04a40f4  li 3, 7
  04a40f8  stb 3, 32(31)
  04a40fc  b 0x4a4108
  04a4100  li 3, 5
  04a4104  stb 3, 32(31)
  04a4108  ld 0, 192(1)
  04a410c  mtlr 0
  04a4110  lfd 28, 144(1)
  04a4114  lfd 29, 152(1)
  04a4118  lfd 30, 160(1)
  04a411c  lfd 31, 168(1)
  04a4120  ld 29, 120(1)
  04a4124  ld 30, 128(1)
  04a4128  ld 31, 136(1)
  04a412c  addi 1, 1, 176
  04a4130  blr
