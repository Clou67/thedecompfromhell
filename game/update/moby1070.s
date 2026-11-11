# game/update/moby1070.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1070_001b3df4:   # 0x1b3df4, 0x14 bytes
  01b3df4  lis 3, 117
  01b3df8  lis 4, 1
  01b3dfc  addic 3, 3, 31968
  01b3e00  stw 4, 72(3)
  01b3e04  blr

UpdateMoby_1070:   # 0x1b3e18, 0x2e8 bytes
  01b3e18  stdu 1, -304(1)
  01b3e1c  mflr 0
  01b3e20  std 0, 320(1)
  01b3e24  stfd 24, 240(1)
  01b3e28  stfd 25, 248(1)
  01b3e2c  stfd 26, 256(1)
  01b3e30  stfd 27, 264(1)
  01b3e34  stfd 28, 272(1)
  01b3e38  stfd 29, 280(1)
  01b3e3c  stfd 30, 288(1)
  01b3e40  stfd 31, 296(1)
  01b3e44  lfs 1, 16(3)
  01b3e48  lfs 2, 20(3)
  01b3e4c  li 5, 1
  01b3e50  fneg 1, 1
  01b3e54  lfs 3, 24(3)
  01b3e58  fneg 2, 2
  01b3e5c  lis 4, 27
  01b3e60  fneg 3, 3
  01b3e64  std 29, 216(1)
  01b3e68  lis 6, 114
  01b3e6c  lwz 29, 120(3)
  01b3e70  addi 4, 4, 15880
  01b3e74  lfs 4, 28(3)
  01b3e78  lfs 5, 64(3)
  01b3e7c  stfs 4, 124(1)
  01b3e80  lfs 4, 68(3)
  01b3e84  stfs 5, 128(1)
  01b3e88  lfs 5, 72(3)
  01b3e8c  std 30, 224(1)
  01b3e90  stfs 4, 132(1)
  01b3e94  lis 30, 151
  01b3e98  stfs 1, 112(1)
  01b3e9c  stfs 2, 116(1)
  01b3ea0  stfs 3, 120(1)
  01b3ea4  lfs 1, 76(3)
  01b3ea8  stfs 5, 136(1)
  01b3eac  stfs 1, 140(1)
  01b3eb0  stw 5, 92(29)
  01b3eb4  lis 5, 117
  01b3eb8  lfs 31, 0(4)
  01b3ebc  lis 4, 117
  01b3ec0  addic 30, 30, -25376
  01b3ec4  lfs 1, 32096(5)
  01b3ec8  lis 5, 117
  01b3ecc  fmuls 1, 1, 31
  01b3ed0  lfs 2, 32080(4)
  01b3ed4  lfs 3, -3048(6)
  01b3ed8  fmuls 2, 2, 4
  01b3edc  lis 4, 117
  01b3ee0  lfs 4, 96(29)
  01b3ee4  lfs 5, 32100(5)
  01b3ee8  std 31, 232(1)
  01b3eec  fmuls 5, 5, 31
  01b3ef0  ori 31, 3, 0
  01b3ef4  lfs 6, 32084(4)
  01b3ef8  lwz 4, 764(30)
  01b3efc  fmuls 1, 1, 3
  01b3f00  fmuls 6, 6, 4
  01b3f04  cmpw 4, 3
  01b3f08  fmuls 3, 5, 3
  01b3f0c  fmadds 2, 1, 2, 4
  01b3f10  fmadds 2, 3, 6, 2
  01b3f14  stfs 2, 96(29)
  01b3f18  bf 2, 0x1b406c
  01b3f1c  lhz 3, 782(30)
  01b3f20  cmpwi 3, 0
  01b3f24  bf 2, 0x1b406c
  01b3f28  lfs 30, 132(30)
  01b3f2c  lfs 29, 128(30)
  01b3f30  addic 3, 1, 144
  01b3f34  lfs 28, 20(31)
  01b3f38  addic 4, 31, 192
  01b3f3c  lfs 27, 16(31)
  01b3f40  lfs 26, 136(30)
  01b3f44  lfs 25, 24(31)
  01b3f48  lfs 24, 140(30)
  01b3f4c  bl 0x5010c0
  01b3f50  nop
  01b3f54  fsubs 1, 30, 28
  01b3f58  lfs 2, 160(1)
  01b3f5c  fsubs 3, 29, 27
  01b3f60  lfs 4, 144(1)
  01b3f64  fsubs 5, 26, 25
  01b3f68  lfs 6, 176(1)
  01b3f6c  lis 3, 117
  01b3f70  lfs 7, 192(1)
  01b3f74  lis 4, 117
  01b3f78  fmuls 1, 2, 1
  01b3f7c  lfs 2, 32092(3)
  01b3f80  lis 3, 114
  01b3f84  fmuls 8, 2, 31
  01b3f88  lfs 9, 32076(4)
  01b3f8c  lfs 2, -3048(3)
  01b3f90  lis 3, 27
  01b3f94  fmadds 1, 4, 3, 1
  01b3f98  addi 3, 3, 15880
  01b3f9c  fmuls 3, 8, 2
  01b3fa0  fmadds 4, 6, 5, 1
  01b3fa4  lfs 1, 96(29)
  01b3fa8  fmadds 5, 7, 24, 4
  01b3fac  lfs 4, 4(3)
  01b3fb0  fmuls 5, 9, 5
  01b3fb4  fmuls 3, 3, 5
  01b3fb8  fmuls 5, 1, 3
  01b3fbc  fcmpu 0, 5, 4
  01b3fc0  cror 6, 1, 2
  01b3fc4  bt 6, 0x1b3fec
  01b3fc8  lfs 5, 68(31)
  01b3fcc  fmuls 5, 5, 3
  01b3fd0  fcmpu 0, 5, 4
  01b3fd4  cror 6, 1, 2
  01b3fd8  bt 6, 0x1b3fec
  01b3fdc  lis 3, 27
  01b3fe0  addi 3, 3, 15880
  01b3fe4  lfs 5, 8(3)
  01b3fe8  fmuls 3, 3, 5
  01b3fec  fcmpu 0, 3, 4
  01b3ff0  cror 6, 1, 2
  01b3ff4  bt 6, 0x1b400c
  01b3ff8  lis 3, 117
  01b3ffc  lfs 4, 32088(3)
  01b4000  fmuls 4, 4, 31
  01b4004  fnmsubs 2, 4, 2, 3
  01b4008  b 0x1b401c
  01b400c  lis 3, 117
  01b4010  lfs 4, 32088(3)
  01b4014  fmuls 4, 4, 31
  01b4018  fmadds 2, 4, 2, 3
  01b401c  fadds 2, 1, 2
  01b4020  lis 3, 117
  01b4024  stfs 2, 96(29)
  01b4028  lfs 1, 68(31)
  01b402c  lfs 3, 32104(3)
  01b4030  fabs 1, 1
  01b4034  fmuls 3, 3, 31
  01b4038  fcmpu 0, 1, 3
  01b403c  cror 6, 0, 2
  01b4040  bt 6, 0x1b406c
  01b4044  lwz 3, 8332(30)
  01b4048  cmpwi 3, 0
  01b404c  cmpwi 1, 3, 1
  01b4050  bt 2, 0x1b4058
  01b4054  bf 6, 0x1b406c
  01b4058  li 3, 6
  01b405c  li 4, 1
  01b4060  bl 0xb72b0
  01b4064  nop
  01b4068  lfs 2, 96(29)
  01b406c  lfs 1, 68(31)
  01b4070  bl 0x502578
  01b4074  nop
  01b4078  lfs 2, 112(1)
  01b407c  lfs 3, 16(31)
  01b4080  addic 3, 29, 32
  01b4084  lfs 4, 116(1)
  01b4088  addic 4, 1, 112
  01b408c  fadds 2, 2, 3
  01b4090  addic 5, 1, 128
  01b4094  lfs 3, 20(31)
  01b4098  addic 6, 31, 64
  01b409c  lfs 5, 120(1)
  01b40a0  fadds 3, 4, 3
  01b40a4  lfs 4, 24(31)
  01b40a8  stfs 1, 68(31)
  01b40ac  fadds 1, 5, 4
  01b40b0  stfs 2, 112(1)
  01b40b4  stfs 3, 116(1)
  01b40b8  stfs 1, 120(1)
  01b40bc  bl 0x112900
  01b40c0  nop
  01b40c4  ld 0, 320(1)
  01b40c8  mtlr 0
  01b40cc  lfd 24, 240(1)
  01b40d0  lfd 25, 248(1)
  01b40d4  lfd 26, 256(1)
  01b40d8  lfd 27, 264(1)
  01b40dc  lfd 28, 272(1)
  01b40e0  lfd 29, 280(1)
  01b40e4  lfd 30, 288(1)
  01b40e8  lfd 31, 296(1)
  01b40ec  ld 29, 216(1)
  01b40f0  ld 30, 224(1)
  01b40f4  ld 31, 232(1)
  01b40f8  addi 1, 1, 304
  01b40fc  blr
