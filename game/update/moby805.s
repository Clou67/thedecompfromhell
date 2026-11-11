# game/update/moby805.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_805_CheckpointManager:   # 0x465d10, 0x380 bytes
  0465d10  stdu 1, -160(1)
  0465d14  mflr 0
  0465d18  std 0, 176(1)
  0465d1c  std 28, 128(1)
  0465d20  std 31, 152(1)
  0465d24  ori 31, 3, 0
  0465d28  std 30, 144(1)
  0465d2c  li 28, 0
  0465d30  std 29, 136(1)
  0465d34  ori 30, 28, 0
  0465d38  lwz 29, 120(31)
  0465d3c  lwz 3, 8(29)
  0465d40  rlwinm 4, 3, 0, 28, 28
  0465d44  cmpwi 4, 0
  0465d48  bf 2, 0x466070
  0465d4c  lbz 4, 188(31)
  0465d50  cmpwi 4, 0
  0465d54  bf 2, 0x465d68
  0465d58  li 3, 1
  0465d5c  stb 3, 188(31)
  0465d60  stw 28, 20(29)
  0465d64  b 0x466070
  0465d68  lwz 4, 24(29)
  0465d6c  cmpwi 4, -1
  0465d70  bt 2, 0x465da0
  0465d74  lis 5, 151
  0465d78  lis 6, 161
  0465d7c  addic 6, 6, -13692
  0465d80  lwz 5, -25488(5)
  0465d84  addc 4, 4, 6
  0465d88  slwi 5, 5, 4
  0465d8c  clrldi 4, 4, 32
  0465d90  extsw 5, 5
  0465d94  lbzx 4, 4, 5
  0465d98  cmpwi 4, 255
  0465d9c  bf 2, 0x466070
  0465da0  rlwinm 4, 3, 0, 30, 30
  0465da4  cmpwi 4, 0
  0465da8  bt 2, 0x465dc0
  0465dac  lis 4, 151
  0465db0  addic 4, 4, -25376
  0465db4  lbz 4, 8356(4)
  0465db8  cmpwi 4, 1
  0465dbc  bf 2, 0x466070
  0465dc0  rlwinm 4, 3, 0, 29, 29
  0465dc4  cmpwi 4, 0
  0465dc8  bt 2, 0x465de8
  0465dcc  lis 4, 151
  0465dd0  addic 4, 4, -25376
  0465dd4  lbz 4, 8356(4)
  0465dd8  cmpwi 4, 3
  0465ddc  cmpwi 1, 4, 0
  0465de0  bt 2, 0x465de8
  0465de4  bf 6, 0x466070
  0465de8  rlwinm 3, 3, 0, 27, 27
  0465dec  cmpwi 3, 0
  0465df0  bt 2, 0x465e18
  0465df4  lis 3, 151
  0465df8  addic 3, 3, -25376
  0465dfc  lwz 3, 8332(3)
  0465e00  cmpwi 6, 3, 1
  0465e04  cmpwi 3, 0
  0465e08  cror 2, 2, 26
  0465e0c  cmpwi 1, 3, 9
  0465e10  bt 2, 0x465e18
  0465e14  bf 6, 0x466070
  0465e18  lis 3, 151
  0465e1c  lwz 3, -25488(3)
  0465e20  cmpwi 3, 15
  0465e24  bf 2, 0x465e3c
  0465e28  lis 3, 151
  0465e2c  addic 3, 3, -25376
  0465e30  lbz 3, 8356(3)
  0465e34  cmpwi 3, 2
  0465e38  bt 2, 0x466070
  0465e3c  lis 3, 151
  0465e40  lwz 4, 0(29)
  0465e44  addic 3, 3, -25376
  0465e48  extsw 4, 4
  0465e4c  addic 3, 3, 128
  0465e50  bl 0x110b70
  0465e54  nop
  0465e58  lis 5, 151
  0465e5c  cmpwi 3, 0
  0465e60  ori 4, 28, 0
  0465e64  lwz 3, -25488(5)
  0465e68  bt 2, 0x465e9c
  0465e6c  li 6, 0
  0465e70  lwz 7, 20(29)
  0465e74  li 5, 1
  0465e78  subc 6, 6, 7
  0465e7c  li 28, 0
  0465e80  cntlzw 6, 6
  0465e84  subc 5, 5, 28
  0465e88  sldi 6, 6, 58
  0465e8c  li 4, 1
  0465e90  sradi 6, 6, 63
  0465e94  and 5, 6, 5
  0465e98  addc 28, 28, 5
  0465e9c  cmpwi 28, 0
  0465ea0  stw 4, 20(29)
  0465ea4  bf 2, 0x465f00
  0465ea8  lis 4, 165
  0465eac  lhz 5, 178(31)
  0465eb0  addic 6, 4, 17860
  0465eb4  extsh 4, 5
  0465eb8  lbzx 6, 6, 4
  0465ebc  cmpwi 6, 0
  0465ec0  bf 2, 0x465f00
  0465ec4  lis 6, 161
  0465ec8  srawi 4, 4, 5
  0465ecc  addic 6, 6, -13028
  0465ed0  sldi 4, 4, 2
  0465ed4  slwi 7, 3, 8
  0465ed8  addc 4, 4, 6
  0465edc  extsw 7, 7
  0465ee0  clrldi 4, 4, 32
  0465ee4  clrlwi 5, 5, 27
  0465ee8  li 6, 1
  0465eec  slw 5, 6, 5
  0465ef0  lwzx 4, 4, 7
  0465ef4  and 4, 4, 5
  0465ef8  cmpwi 4, 0
  0465efc  bt 2, 0x466030
  0465f00  lwz 4, 12(29)
  0465f04  cmpwi 4, 0
  0465f08  bt 2, 0x465f18
  0465f0c  lwz 4, 16(29)
  0465f10  cmpwi 4, 0
  0465f14  bt 2, 0x466034
  0465f18  li 3, 1
  0465f1c  stw 3, 12(29)
  0465f20  lbz 3, 176(31)
  0465f24  bl 0xf1e50
  0465f28  nop
  0465f2c  lfs 1, 16(31)
  0465f30  lis 4, 70
  0465f34  lfs 2, 20(31)
  0465f38  addic 3, 1, 112
  0465f3c  stfs 1, 112(1)
  0465f40  addi 29, 4, 23816
  0465f44  lfs 1, 24(31)
  0465f48  li 4, 0
  0465f4c  stfs 2, 116(1)
  0465f50  lfs 2, 28(31)
  0465f54  stfs 1, 120(1)
  0465f58  stfs 2, 124(1)
  0465f5c  lfs 1, 0(29)
  0465f60  bl 0xffb70
  0465f64  nop
  0465f68  fmr 2, 1
  0465f6c  lfs 1, 24(31)
  0465f70  fsubs 3, 1, 2
  0465f74  stfs 2, 120(1)
  0465f78  lfs 2, 4(29)
  0465f7c  fabs 3, 3
  0465f80  fcmpu 0, 3, 2
  0465f84  cror 6, 0, 2
  0465f88  bt 6, 0x465f90
  0465f8c  stfs 1, 120(1)
  0465f90  addic 4, 31, 64
  0465f94  addic 3, 1, 112
  0465f98  bl 0x151e70
  0465f9c  nop
  0465fa0  lis 3, 165
  0465fa4  lhz 4, 178(31)
  0465fa8  lis 5, 165
  0465fac  addic 3, 3, 14692
  0465fb0  extsh 6, 4
  0465fb4  addic 5, 5, 17860
  0465fb8  lis 7, 151
  0465fbc  lis 8, 161
  0465fc0  srawi 9, 6, 5
  0465fc4  stbx 30, 3, 6
  0465fc8  clrlwi 4, 4, 27
  0465fcc  stbx 30, 5, 6
  0465fd0  addic 3, 8, -13028
  0465fd4  sldi 5, 9, 2
  0465fd8  lis 6, 165
  0465fdc  addc 5, 5, 3
  0465fe0  lwz 3, -25488(7)
  0465fe4  lhz 8, 178(31)
  0465fe8  clrldi 5, 5, 32
  0465fec  slwi 7, 3, 8
  0465ff0  extsh 9, 8
  0465ff4  extsw 7, 7
  0465ff8  li 10, 1
  0465ffc  srawi 9, 9, 5
  0466000  addic 6, 6, 19920
  0466004  slw 4, 10, 4
  0466008  lwzx 11, 5, 7
  046600c  sldi 9, 9, 2
  0466010  clrlwi 8, 8, 27
  0466014  andc 4, 11, 4
  0466018  slw 8, 10, 8
  046601c  lwzx 10, 6, 9
  0466020  stwx 4, 5, 7
  0466024  andc 4, 10, 8
  0466028  stwx 4, 6, 9
  046602c  b 0x466034
  0466030  stw 30, 12(29)
  0466034  lbz 4, 32(31)
  0466038  cmpwi 4, 0
  046603c  bf 2, 0x466070
  0466040  lis 4, 161
  0466044  lbz 5, 176(31)
  0466048  slwi 3, 3, 4
  046604c  addic 4, 4, -13692
  0466050  extsw 3, 3
  0466054  addc 4, 5, 4
  0466058  clrldi 4, 4, 32
  046605c  lbzx 3, 4, 3
  0466060  cmpwi 3, 255
  0466064  bf 2, 0x466070
  0466068  li 3, 1
  046606c  stb 3, 32(31)
  0466070  ld 0, 176(1)
  0466074  mtlr 0
  0466078  ld 28, 128(1)
  046607c  ld 29, 136(1)
  0466080  ld 30, 144(1)
  0466084  ld 31, 152(1)
  0466088  addi 1, 1, 160
  046608c  blr
