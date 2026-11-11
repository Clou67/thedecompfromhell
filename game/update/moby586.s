# game/update/moby586.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M586_003d3cec:   # 0x3d3cec, 0x14 bytes
  03d3cec  lis 3, 132
  03d3cf0  lis 4, 1
  03d3cf4  addic 3, 3, 26108
  03d3cf8  stw 4, 72(3)
  03d3cfc  blr

UpdateMoby_586:   # 0x3d3d30, 0x4f8 bytes
  03d3d30  stdu 1, -160(1)
  03d3d34  mflr 0
  03d3d38  std 0, 176(1)
  03d3d3c  std 31, 152(1)
  03d3d40  ori 31, 3, 0
  03d3d44  std 30, 144(1)
  03d3d48  lbz 3, 32(31)
  03d3d4c  lwz 30, 120(31)
  03d3d50  cmpwi 3, 5
  03d3d54  cmpwi 1, 3, 4
  03d3d58  cmpwi 6, 3, 3
  03d3d5c  std 29, 136(1)
  03d3d60  cmpwi 7, 3, 2
  03d3d64  bt 2, 0x3d41d4
  03d3d68  bt 6, 0x3d3f5c
  03d3d6c  bt 26, 0x3d3dd4
  03d3d70  bt 30, 0x3d3e24
  03d3d74  cmpwi 3, 1
  03d3d78  bt 2, 0x3d3dd4
  03d3d7c  cmpwi 3, 0
  03d3d80  bf 2, 0x3d420c
  03d3d84  lhz 3, 62(30)
  03d3d88  lfs 1, 24(31)
  03d3d8c  ori 3, 3, 8
  03d3d90  lwz 4, 96(30)
  03d3d94  stfs 1, 100(30)
  03d3d98  cmpwi 4, 0
  03d3d9c  sth 3, 62(30)
  03d3da0  bt 2, 0x3d3dc8
  03d3da4  li 3, 1
  03d3da8  lwz 5, 36(31)
  03d3dac  lis 4, 132
  03d3db0  stb 3, 32(31)
  03d3db4  lfs 1, 26224(4)
  03d3db8  lfs 2, 36(5)
  03d3dbc  fmuls 1, 2, 1
  03d3dc0  stfs 1, 44(31)
  03d3dc4  b 0x3d420c
  03d3dc8  li 3, 4
  03d3dcc  stb 3, 32(31)
  03d3dd0  b 0x3d420c
  03d3dd4  lis 3, 61
  03d3dd8  lfs 1, 100(30)
  03d3ddc  lis 4, 132
  03d3de0  addi 6, 3, 15616
  03d3de4  lis 7, 114
  03d3de8  lis 8, 114
  03d3dec  addic 5, 30, 104
  03d3df0  addic 3, 31, 24
  03d3df4  lfs 4, 0(6)
  03d3df8  lfs 3, 4(6)
  03d3dfc  lfs 2, 26232(4)
  03d3e00  lfs 5, -3048(7)
  03d3e04  fadds 1, 1, 2
  03d3e08  lfs 6, -3052(8)
  03d3e0c  fmuls 2, 5, 4
  03d3e10  fmuls 3, 5, 3
  03d3e14  fmuls 4, 6, 4
  03d3e18  bl 0x109c30
  03d3e1c  nop
  03d3e20  b 0x3d420c
  03d3e24  lis 3, 61
  03d3e28  lfs 1, 100(30)
  03d3e2c  lis 4, 132
  03d3e30  addi 6, 3, 15616
  03d3e34  lis 7, 114
  03d3e38  lis 8, 114
  03d3e3c  addic 3, 31, 24
  03d3e40  addic 5, 30, 104
  03d3e44  lfs 2, 8(6)
  03d3e48  lfs 3, 12(6)
  03d3e4c  lfs 4, 26228(4)
  03d3e50  lfs 5, 0(6)
  03d3e54  fadds 1, 1, 4
  03d3e58  lfs 4, -3048(7)
  03d3e5c  lfs 6, -3052(8)
  03d3e60  fmuls 2, 4, 2
  03d3e64  fmuls 3, 4, 3
  03d3e68  fmuls 4, 6, 5
  03d3e6c  bl 0x109c30
  03d3e70  nop
  03d3e74  lis 3, 151
  03d3e78  addic 3, 3, -25376
  03d3e7c  lhz 4, 782(3)
  03d3e80  cmpwi 4, 0
  03d3e84  bf 2, 0x3d3f18
  03d3e88  lwz 4, 764(3)
  03d3e8c  cmpw 4, 31
  03d3e90  bf 2, 0x3d3f18
  03d3e94  lwz 4, 8324(3)
  03d3e98  cmpwi 4, 34
  03d3e9c  bf 2, 0x3d3f18
  03d3ea0  li 6, 3
  03d3ea4  li 4, 0
  03d3ea8  li 3, 0
  03d3eac  ori 5, 31, 0
  03d3eb0  stb 6, 32(31)
  03d3eb4  bl 0x15d12c
  03d3eb8  nop
  03d3ebc  lwz 4, 112(30)
  03d3ec0  cmpwi 4, -1
  03d3ec4  bt 2, 0x3d3f0c
  03d3ec8  sldi 3, 4, 7
  03d3ecc  sldi 6, 4, 4
  03d3ed0  lis 5, 150
  03d3ed4  subc 3, 3, 6
  03d3ed8  addic 5, 5, 14312
  03d3edc  extsw 3, 3
  03d3ee0  lwzx 5, 5, 3
  03d3ee4  cmpw 5, 31
  03d3ee8  bf 2, 0x3d3f0c
  03d3eec  lis 5, 150
  03d3ef0  addic 5, 5, 14292
  03d3ef4  lbzx 3, 5, 3
  03d3ef8  cmpwi 3, 0
  03d3efc  bt 2, 0x3d3f0c
  03d3f00  extsw 3, 4
  03d3f04  bl 0x15cdb0
  03d3f08  nop
  03d3f0c  li 3, -1
  03d3f10  stw 3, 112(30)
  03d3f14  b 0x3d420c
  03d3f18  lwz 3, 8324(3)
  03d3f1c  cmpwi 3, 114
  03d3f20  bt 2, 0x3d420c
  03d3f24  lis 3, 113
  03d3f28  ori 4, 31, 0
  03d3f2c  addic 3, 3, -10344
  03d3f30  bl 0x6d720
  03d3f34  nop
  03d3f38  addic 3, 30, 108
  03d3f3c  bl 0x4fff60
  03d3f40  nop
  03d3f44  cmpwi 3, 0
  03d3f48  bt 2, 0x3d420c
  03d3f4c  lis 3, 251
  03d3f50  li 4, 1
  03d3f54  stw 4, -13196(3)
  03d3f58  b 0x3d420c
  03d3f5c  lis 3, 151
  03d3f60  addic 3, 3, -25376
  03d3f64  lhz 4, 782(3)
  03d3f68  cmpwi 4, 0
  03d3f6c  bf 2, 0x3d3fd0
  03d3f70  lwz 4, 764(3)
  03d3f74  cmpw 4, 31
  03d3f78  bf 2, 0x3d3fd0
  03d3f7c  lwz 4, 8324(3)
  03d3f80  cmpwi 4, 34
  03d3f84  bf 2, 0x3d3fd0
  03d3f88  lis 5, 61
  03d3f8c  li 4, 1
  03d3f90  addi 5, 5, 15616
  03d3f94  stb 4, 188(31)
  03d3f98  lfs 1, 24(31)
  03d3f9c  lfs 2, 16(5)
  03d3fa0  li 4, 5
  03d3fa4  lis 5, 151
  03d3fa8  fsubs 1, 1, 2
  03d3fac  stb 4, 32(31)
  03d3fb0  stfs 1, 24(31)
  03d3fb4  lwz 4, -25488(5)
  03d3fb8  cmpwi 4, 18
  03d3fbc  bf 2, 0x3d3fd0
  03d3fc0  lis 4, 151
  03d3fc4  li 5, 1
  03d3fc8  addic 4, 4, -16400
  03d3fcc  stb 5, 127(4)
  03d3fd0  lfs 1, 20(31)
  03d3fd4  lfs 2, 132(3)
  03d3fd8  lfs 3, 16(31)
  03d3fdc  fsubs 1, 1, 2
  03d3fe0  lfs 2, 128(3)
  03d3fe4  fsubs 2, 3, 2
  03d3fe8  lis 3, 61
  03d3fec  addi 3, 3, 15616
  03d3ff0  fmuls 1, 1, 1
  03d3ff4  fmadds 1, 2, 2, 1
  03d3ff8  lfs 2, 20(3)
  03d3ffc  fsqrts 1, 1
  03d4000  fcmpu 0, 1, 2
  03d4004  cror 6, 1, 2
  03d4008  bt 6, 0x3d420c
  03d400c  lis 3, 162
  03d4010  lis 4, 151
  03d4014  li 5, 1
  03d4018  lwz 3, 22552(3)
  03d401c  lwz 4, -25488(4)
  03d4020  slw 4, 5, 4
  03d4024  and 3, 3, 4
  03d4028  cmpwi 3, 0
  03d402c  bf 2, 0x3d420c
  03d4030  lis 3, 161
  03d4034  addic 3, 3, 12
  03d4038  lhz 5, 904(3)
  03d403c  cmpwi 5, 0
  03d4040  bt 2, 0x3d4120
  03d4044  lis 4, 161
  03d4048  lis 5, 61
  03d404c  lwz 4, -2344(4)
  03d4050  extsw 4, 4
  03d4054  std 4, 112(1)
  03d4058  addi 4, 5, 15616
  03d405c  lis 5, 114
  03d4060  lfs 1, 24(4)
  03d4064  lfs 2, -3056(5)
  03d4068  lfd 3, 112(1)
  03d406c  fcfid 3, 3
  03d4070  frsp 3, 3
  03d4074  fadds 1, 3, 1
  03d4078  fmuls 1, 2, 1
  03d407c  fctiwz 1, 1
  03d4080  stfd 1, 112(1)
  03d4084  lfs 1, 28(4)
  03d4088  fmuls 1, 2, 1
  03d408c  lfs 3, 32(4)
  03d4090  lhz 4, 906(3)
  03d4094  mulli 6, 4, 600
  03d4098  fctidz 1, 1
  03d409c  lwz 5, 116(1)
  03d40a0  cmpwi 1, 6, 0
  03d40a4  subc 7, 5, 6
  03d40a8  fcfid 1, 1
  03d40ac  frsp 1, 1
  03d40b0  fmuls 1, 1, 3
  03d40b4  fctiwz 1, 1
  03d40b8  stfd 1, 112(1)
  03d40bc  lwz 6, 116(1)
  03d40c0  cmpw 7, 6
  03d40c4  bt 1, 0x3d40cc
  03d40c8  bf 6, 0x3d40e0
  03d40cc  li 3, 11009
  03d40d0  li 4, 113
  03d40d4  bl 0x7b310
  03d40d8  nop
  03d40dc  b 0x3d420c
  03d40e0  lis 6, 6990
  03d40e4  ori 6, 6, 33205
  03d40e8  mulhw 6, 6, 5
  03d40ec  srawi 6, 6, 6
  03d40f0  srwi 7, 6, 31
  03d40f4  addc 6, 6, 7
  03d40f8  cmpw 6, 4
  03d40fc  bf 1, 0x3d420c
  03d4100  lis 4, 6990
  03d4104  ori 4, 4, 33205
  03d4108  mulhw 4, 4, 5
  03d410c  srawi 4, 4, 6
  03d4110  srwi 5, 4, 31
  03d4114  addc 4, 4, 5
  03d4118  sth 4, 906(3)
  03d411c  b 0x3d420c
  03d4120  lis 6, 0
  03d4124  ori 6, 6, 65535
  03d4128  cmpw 5, 6
  03d412c  bf 0, 0x3d4138
  03d4130  addic 5, 5, 1
  03d4134  sth 5, 904(3)
  03d4138  lis 5, 161
  03d413c  lis 6, 114
  03d4140  lwz 5, -2344(5)
  03d4144  extsw 5, 5
  03d4148  std 5, 112(1)
  03d414c  lis 5, 61
  03d4150  addi 5, 5, 15616
  03d4154  lfs 1, 24(5)
  03d4158  lfs 2, -3056(6)
  03d415c  lfd 3, 112(1)
  03d4160  lis 5, 6990
  03d4164  fcfid 3, 3
  03d4168  ori 6, 5, 33205
  03d416c  lhz 7, 906(3)
  03d4170  frsp 3, 3
  03d4174  fadds 1, 3, 1
  03d4178  fmuls 1, 2, 1
  03d417c  fctiwz 1, 1
  03d4180  stfd 1, 112(1)
  03d4184  lwz 5, 116(1)
  03d4188  mulhw 6, 6, 5
  03d418c  srawi 6, 6, 6
  03d4190  srwi 8, 6, 31
  03d4194  addc 6, 6, 8
  03d4198  cmpw 6, 7
  03d419c  bf 1, 0x3d41bc
  03d41a0  lis 6, 6990
  03d41a4  ori 6, 6, 33205
  03d41a8  mulhw 5, 6, 5
  03d41ac  srawi 5, 5, 6
  03d41b0  srwi 6, 5, 31
  03d41b4  addc 5, 5, 6
  03d41b8  sth 5, 906(3)
  03d41bc  lwz 6, 908(3)
  03d41c0  lis 5, -32768
  03d41c4  or 4, 6, 4
  03d41c8  or 4, 4, 5
  03d41cc  stw 4, 908(3)
  03d41d0  b 0x3d420c
  03d41d4  lis 3, 61
  03d41d8  lfs 1, 100(30)
  03d41dc  addi 29, 3, 15616
  03d41e0  addic 3, 31, 24
  03d41e4  lfs 3, 16(29)
  03d41e8  lfs 2, 36(29)
  03d41ec  fsubs 1, 1, 3
  03d41f0  bl 0x109af0
  03d41f4  nop
  03d41f8  lfs 2, 40(29)
  03d41fc  fcmpu 0, 1, 2
  03d4200  bf 2, 0x3d420c
  03d4204  li 3, 6
  03d4208  stb 3, 32(31)
  03d420c  ld 0, 176(1)
  03d4210  mtlr 0
  03d4214  ld 29, 136(1)
  03d4218  ld 30, 144(1)
  03d421c  ld 31, 152(1)
  03d4220  addi 1, 1, 160
  03d4224  blr
