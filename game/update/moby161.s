# game/update/moby161.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M161_002a3d6c:   # 0x2a3d6c, 0x14 bytes
  02a3d6c  lis 3, 123
  02a3d70  lis 4, 1
  02a3d74  addic 3, 3, -14252
  02a3d78  stw 4, 72(3)
  02a3d7c  blr

M161_002a3d80:   # 0x2a3d80, 0x158 bytes
  02a3d80  stdu 1, -144(1)
  02a3d84  mflr 0
  02a3d88  std 0, 160(1)
  02a3d8c  std 31, 136(1)
  02a3d90  ori 31, 3, 0
  02a3d94  std 30, 128(1)
  02a3d98  std 29, 120(1)
  02a3d9c  li 3, 161
  02a3da0  bl 0xefa28
  02a3da4  nop
  02a3da8  ori 30, 3, 0
  02a3dac  cmpwi 30, 0
  02a3db0  bt 2, 0x2a3eb8
  02a3db4  li 7, 64
  02a3db8  lwz 29, 120(30)
  02a3dbc  li 8, 1
  02a3dc0  ori 3, 30, 0
  02a3dc4  li 4, 128
  02a3dc8  stb 7, 48(30)
  02a3dcc  sth 7, 50(30)
  02a3dd0  li 5, 128
  02a3dd4  li 6, 128
  02a3dd8  stb 8, 49(30)
  02a3ddc  bl 0xf1ec8
  02a3de0  nop
  02a3de4  li 3, 128
  02a3de8  lis 4, 16256
  02a3dec  li 5, 66
  02a3df0  li 6, 67
  02a3df4  stb 3, 35(30)
  02a3df8  li 7, 69
  02a3dfc  stw 4, 88(30)
  02a3e00  li 3, 0
  02a3e04  lfs 1, 0(31)
  02a3e08  li 4, 65
  02a3e0c  li 8, 70
  02a3e10  stfs 1, 16(30)
  02a3e14  lfs 1, 4(31)
  02a3e18  li 9, 75
  02a3e1c  stw 3, 148(30)
  02a3e20  stfs 1, 20(30)
  02a3e24  lfs 1, 8(31)
  02a3e28  stfs 1, 24(30)
  02a3e2c  lfs 1, 12(31)
  02a3e30  stb 3, 64(30)
  02a3e34  stfs 1, 28(30)
  02a3e38  stbx 3, 30, 4
  02a3e3c  li 4, 71
  02a3e40  stbx 3, 30, 5
  02a3e44  stbx 3, 30, 6
  02a3e48  li 5, 73
  02a3e4c  stb 3, 68(30)
  02a3e50  li 6, 74
  02a3e54  stbx 3, 30, 7
  02a3e58  stbx 3, 30, 8
  02a3e5c  stbx 3, 30, 4
  02a3e60  li 7, 77
  02a3e64  stb 3, 72(30)
  02a3e68  li 8, 78
  02a3e6c  stbx 3, 30, 5
  02a3e70  li 4, 79
  02a3e74  stbx 3, 30, 6
  02a3e78  stbx 3, 30, 9
  02a3e7c  stb 3, 76(30)
  02a3e80  stbx 3, 30, 7
  02a3e84  stbx 3, 30, 8
  02a3e88  stbx 3, 30, 4
  02a3e8c  bl 0x5c8318
  02a3e90  nop
  02a3e94  addic 4, 3, 30
  02a3e98  ori 3, 30, 0
  02a3e9c  clrlwi 4, 4, 24
  02a3ea0  stw 4, 0(29)
  02a3ea4  bl 0xf31a8
  02a3ea8  nop
  02a3eac  lhz 3, 52(30)
  02a3eb0  ori 3, 3, 4
  02a3eb4  sth 3, 52(30)
  02a3eb8  ori 3, 30, 0
  02a3ebc  ld 0, 160(1)
  02a3ec0  mtlr 0
  02a3ec4  ld 29, 120(1)
  02a3ec8  ld 30, 128(1)
  02a3ecc  ld 31, 136(1)
  02a3ed0  addi 1, 1, 144
  02a3ed4  blr

UpdateMoby_161:   # 0x2a3ee0, 0x15c bytes
  02a3ee0  stdu 1, -144(1)
  02a3ee4  mflr 0
  02a3ee8  std 0, 160(1)
  02a3eec  std 31, 136(1)
  02a3ef0  cmpwi 3, 0
  02a3ef4  std 30, 128(1)
  02a3ef8  ori 31, 3, 0
  02a3efc  bt 2, 0x2a4024
  02a3f00  li 3, 0
  02a3f04  lwz 30, 120(31)
  02a3f08  stw 3, 148(31)
  02a3f0c  lwz 3, 0(30)
  02a3f10  cmpwi 3, 0
  02a3f14  bf 2, 0x2a3fb4
  02a3f18  lbz 3, 83(31)
  02a3f1c  cmpwi 3, 1
  02a3f20  bt 2, 0x2a3f60
  02a3f24  lis 3, 42
  02a3f28  lis 4, 114
  02a3f2c  addi 3, 3, 16088
  02a3f30  li 5, 0
  02a3f34  lfs 1, 0(3)
  02a3f38  lfs 2, -3056(4)
  02a3f3c  ori 3, 31, 0
  02a3f40  li 4, 1
  02a3f44  fmuls 1, 2, 1
  02a3f48  fctiwz 1, 1
  02a3f4c  stfd 1, 112(1)
  02a3f50  lwz 6, 116(1)
  02a3f54  extsw 6, 6
  02a3f58  bl 0xfddc0
  02a3f5c  nop
  02a3f60  bl 0x5c8318
  02a3f64  nop
  02a3f68  addic 3, 3, 30
  02a3f6c  lis 4, 42
  02a3f70  clrlwi 3, 3, 24
  02a3f74  extsw 3, 3
  02a3f78  std 3, 112(1)
  02a3f7c  addi 3, 4, 16088
  02a3f80  lis 4, 114
  02a3f84  lfs 1, 4(3)
  02a3f88  lfs 2, -3056(4)
  02a3f8c  lfd 3, 112(1)
  02a3f90  fcfid 3, 3
  02a3f94  frsp 3, 3
  02a3f98  fadds 1, 3, 1
  02a3f9c  fmuls 1, 2, 1
  02a3fa0  fctiwz 2, 1
  02a3fa4  fctiwz 1, 1
  02a3fa8  stfd 2, 112(1)
  02a3fac  lwz 3, 116(1)
  02a3fb0  stfiwx 1, 0, 30
  02a3fb4  lbz 4, 112(31)
  02a3fb8  rlwinm 4, 4, 0, 30, 30
  02a3fbc  cmpwi 4, 0
  02a3fc0  bt 2, 0x2a4010
  02a3fc4  lbz 4, 83(31)
  02a3fc8  cmpwi 4, 0
  02a3fcc  bt 2, 0x2a4010
  02a3fd0  lis 3, 42
  02a3fd4  lis 4, 114
  02a3fd8  addi 3, 3, 16088
  02a3fdc  li 5, 0
  02a3fe0  lfs 1, 0(3)
  02a3fe4  lfs 2, -3056(4)
  02a3fe8  ori 3, 31, 0
  02a3fec  fmuls 1, 2, 1
  02a3ff0  li 4, 0
  02a3ff4  fctiwz 1, 1
  02a3ff8  stfd 1, 112(1)
  02a3ffc  lwz 6, 116(1)
  02a4000  extsw 6, 6
  02a4004  bl 0xfddc0
  02a4008  nop
  02a400c  lwz 3, 0(30)
  02a4010  addic 4, 3, -1
  02a4014  ori 3, 31, 0
  02a4018  stw 4, 0(30)
  02a401c  bl 0xf30a0
  02a4020  nop
  02a4024  ld 0, 160(1)
  02a4028  mtlr 0
  02a402c  ld 30, 128(1)
  02a4030  ld 31, 136(1)
  02a4034  addi 1, 1, 144
  02a4038  blr
