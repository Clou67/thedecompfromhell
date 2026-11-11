# game/update/moby434.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M434_00372c8c:   # 0x372c8c, 0x14 bytes
  0372c8c  lis 3, 132
  0372c90  lis 4, 1
  0372c94  addic 3, 3, 5744
  0372c98  stw 4, 72(3)
  0372c9c  blr

UpdateMoby_434:   # 0x372cb0, 0x538 bytes
  0372cb0  stdu 1, -144(1)
  0372cb4  mflr 0
  0372cb8  std 0, 160(1)
  0372cbc  std 30, 128(1)
  0372cc0  lwz 30, 120(3)
  0372cc4  std 31, 136(1)
  0372cc8  lfs 1, 84(3)
  0372ccc  ori 31, 3, 0
  0372cd0  cmpwi 30, 0
  0372cd4  fmr 2, 1
  0372cd8  bf 2, 0x372cec
  0372cdc  ori 3, 31, 0
  0372ce0  bl 0xefb38
  0372ce4  nop
  0372ce8  b 0x3731d0
  0372cec  lbz 3, 32(31)
  0372cf0  cmpwi 3, 0
  0372cf4  cmpwi 1, 3, -1
  0372cf8  cmpwi 6, 3, 1
  0372cfc  cmpwi 7, 3, 2
  0372d00  bt 1, 0x372d0c
  0372d04  bf 5, 0x37319c
  0372d08  b 0x372d18
  0372d0c  bf 25, 0x372d70
  0372d10  bf 29, 0x372f98
  0372d14  b 0x37319c
  0372d18  lis 3, 55
  0372d1c  lis 4, 114
  0372d20  addi 3, 3, 11424
  0372d24  li 5, 0
  0372d28  lfs 1, 0(3)
  0372d2c  lfs 2, -3056(4)
  0372d30  ori 3, 31, 0
  0372d34  li 4, 1
  0372d38  fmuls 1, 2, 1
  0372d3c  fctiwz 1, 1
  0372d40  stfd 1, 112(1)
  0372d44  lwz 6, 116(1)
  0372d48  extsw 6, 6
  0372d4c  bl 0xfddc0
  0372d50  nop
  0372d54  li 3, 0
  0372d58  li 4, 1
  0372d5c  li 5, -1
  0372d60  stw 3, 88(31)
  0372d64  stb 4, 32(31)
  0372d68  stw 5, 8(30)
  0372d6c  b 0x37319c
  0372d70  lwz 3, 0(30)
  0372d74  cmpwi 3, -1
  0372d78  bt 2, 0x37319c
  0372d7c  lis 4, 164
  0372d80  slwi 3, 3, 8
  0372d84  lwz 4, -28512(4)
  0372d88  addc 3, 4, 3
  0372d8c  clrldi 3, 3, 32
  0372d90  lhz 5, 166(3)
  0372d94  cmpwi 5, 280
  0372d98  bf 2, 0x37319c
  0372d9c  lbz 5, 32(3)
  0372da0  lwz 3, 120(3)
  0372da4  cmpwi 5, 3
  0372da8  bf 2, 0x372dc8
  0372dac  lis 4, 55
  0372db0  lfs 2, 0(3)
  0372db4  addi 4, 4, 11424
  0372db8  lfs 3, 4(4)
  0372dbc  fsubs 2, 3, 2
  0372dc0  stfs 2, 84(31)
  0372dc4  b 0x372e44
  0372dc8  lis 5, 16256
  0372dcc  lwz 6, 0(3)
  0372dd0  cmpw 6, 5
  0372dd4  bt 2, 0x372de4
  0372dd8  li 4, 2
  0372ddc  stb 4, 32(31)
  0372de0  b 0x372e44
  0372de4  lwz 5, 4(30)
  0372de8  cmpwi 5, -1
  0372dec  bt 2, 0x372e44
  0372df0  lwz 6, 12(30)
  0372df4  cmpwi 6, 0
  0372df8  bf 2, 0x372e44
  0372dfc  lis 7, 151
  0372e00  addic 7, 7, -25376
  0372e04  lwz 6, 8332(7)
  0372e08  cmpwi 1, 6, 1
  0372e0c  cmpwi 6, 0
  0372e10  cror 2, 2, 6
  0372e14  bt 2, 0x372e28
  0372e18  cmpwi 6, 9
  0372e1c  bt 2, 0x372e28
  0372e20  cmpwi 6, 12
  0372e24  bf 2, 0x372e44
  0372e28  slwi 5, 5, 8
  0372e2c  addc 4, 4, 5
  0372e30  lwz 5, 764(7)
  0372e34  cmpw 5, 4
  0372e38  bf 2, 0x372e44
  0372e3c  li 4, 2
  0372e40  stb 4, 32(31)
  0372e44  fcmpu 0, 2, 1
  0372e48  bt 2, 0x372f24
  0372e4c  lis 4, 16256
  0372e50  lwz 3, 0(3)
  0372e54  cmpw 3, 4
  0372e58  cmpwi 1, 3, 0
  0372e5c  bt 2, 0x372e64
  0372e60  bf 6, 0x372eec
  0372e64  ori 3, 31, 0
  0372e68  lwz 4, 8(30)
  0372e6c  extsw 4, 4
  0372e70  bl 0x15cc7c
  0372e74  nop
  0372e78  cmpwi 3, 0
  0372e7c  bt 2, 0x372ed4
  0372e80  lwz 3, 8(30)
  0372e84  cmpwi 3, -1
  0372e88  bt 2, 0x372ecc
  0372e8c  sldi 4, 3, 7
  0372e90  sldi 6, 3, 4
  0372e94  lis 5, 150
  0372e98  subc 4, 4, 6
  0372e9c  addic 5, 5, 14176
  0372ea0  extsw 4, 4
  0372ea4  addc 4, 5, 4
  0372ea8  lwz 5, 136(4)
  0372eac  cmpw 5, 31
  0372eb0  bf 2, 0x372ecc
  0372eb4  lbz 4, 116(4)
  0372eb8  cmpwi 4, 0
  0372ebc  bt 2, 0x372ecc
  0372ec0  extsw 3, 3
  0372ec4  bl 0x15cdb0
  0372ec8  nop
  0372ecc  li 3, -1
  0372ed0  stw 3, 8(30)
  0372ed4  li 3, 1
  0372ed8  li 4, 0
  0372edc  ori 5, 31, 0
  0372ee0  bl 0x15d12c
  0372ee4  nop
  0372ee8  b 0x37319c
  0372eec  ori 3, 31, 0
  0372ef0  lwz 4, 8(30)
  0372ef4  extsw 4, 4
  0372ef8  bl 0x15cc7c
  0372efc  nop
  0372f00  cmpwi 3, 0
  0372f04  bf 2, 0x37319c
  0372f08  li 3, 0
  0372f0c  li 4, 4
  0372f10  ori 5, 31, 0
  0372f14  bl 0x15d12c
  0372f18  nop
  0372f1c  stw 3, 8(30)
  0372f20  b 0x37319c
  0372f24  ori 3, 31, 0
  0372f28  lwz 4, 8(30)
  0372f2c  extsw 4, 4
  0372f30  bl 0x15cc7c
  0372f34  nop
  0372f38  cmpwi 3, 0
  0372f3c  bt 2, 0x37319c
  0372f40  lwz 3, 8(30)
  0372f44  cmpwi 3, -1
  0372f48  bt 2, 0x372f8c
  0372f4c  sldi 4, 3, 7
  0372f50  sldi 6, 3, 4
  0372f54  lis 5, 150
  0372f58  subc 4, 4, 6
  0372f5c  addic 5, 5, 14176
  0372f60  extsw 4, 4
  0372f64  addc 4, 5, 4
  0372f68  lwz 5, 136(4)
  0372f6c  cmpw 5, 31
  0372f70  bf 2, 0x372f8c
  0372f74  lbz 4, 116(4)
  0372f78  cmpwi 4, 0
  0372f7c  bt 2, 0x372f8c
  0372f80  extsw 3, 3
  0372f84  bl 0x15cdb0
  0372f88  nop
  0372f8c  li 3, -1
  0372f90  stw 3, 8(30)
  0372f94  b 0x37319c
  0372f98  lis 3, 55
  0372f9c  lis 4, 114
  0372fa0  addi 3, 3, 11424
  0372fa4  lfs 2, 8(3)
  0372fa8  lfs 3, -3052(4)
  0372fac  fmadds 3, 3, 2, 1
  0372fb0  stfs 3, 84(31)
  0372fb4  lfs 2, 4(3)
  0372fb8  fcmpu 0, 3, 2
  0372fbc  cror 6, 0, 2
  0372fc0  bt 6, 0x372fd0
  0372fc4  lis 3, 16256
  0372fc8  fmr 3, 2
  0372fcc  stw 3, 84(31)
  0372fd0  lwz 3, 0(30)
  0372fd4  cmpwi 3, -1
  0372fd8  bt 2, 0x37319c
  0372fdc  lis 4, 164
  0372fe0  slwi 3, 3, 8
  0372fe4  lwz 4, -28512(4)
  0372fe8  addc 3, 4, 3
  0372fec  clrldi 3, 3, 32
  0372ff0  lhz 4, 166(3)
  0372ff4  cmpwi 4, 280
  0372ff8  bf 2, 0x37319c
  0372ffc  lbz 4, 32(3)
  0373000  lwz 3, 120(3)
  0373004  cmpwi 4, 3
  0373008  bf 2, 0x373024
  037300c  lfs 3, 0(3)
  0373010  li 4, 1
  0373014  fsubs 2, 2, 3
  0373018  stb 4, 32(31)
  037301c  stfs 2, 84(31)
  0373020  b 0x37304c
  0373024  fsubs 2, 2, 3
  0373028  lis 4, 55
  037302c  lfs 3, 48(3)
  0373030  addi 4, 4, 11424
  0373034  stfs 2, 0(3)
  0373038  lfs 4, 12(4)
  037303c  fmuls 3, 3, 4
  0373040  fmuls 2, 3, 2
  0373044  stfs 2, 24(3)
  0373048  lfs 2, 84(31)
  037304c  fcmpu 0, 2, 1
  0373050  bt 2, 0x37312c
  0373054  lis 4, 16256
  0373058  lwz 3, 0(3)
  037305c  cmpw 3, 4
  0373060  cmpwi 1, 3, 0
  0373064  bt 2, 0x37306c
  0373068  bf 6, 0x3730f4
  037306c  ori 3, 31, 0
  0373070  lwz 4, 8(30)
  0373074  extsw 4, 4
  0373078  bl 0x15cc7c
  037307c  nop
  0373080  cmpwi 3, 0
  0373084  bt 2, 0x3730dc
  0373088  lwz 3, 8(30)
  037308c  cmpwi 3, -1
  0373090  bt 2, 0x3730d4
  0373094  sldi 4, 3, 7
  0373098  sldi 6, 3, 4
  037309c  lis 5, 150
  03730a0  subc 4, 4, 6
  03730a4  addic 5, 5, 14176
  03730a8  extsw 4, 4
  03730ac  addc 4, 5, 4
  03730b0  lwz 5, 136(4)
  03730b4  cmpw 5, 31
  03730b8  bf 2, 0x3730d4
  03730bc  lbz 4, 116(4)
  03730c0  cmpwi 4, 0
  03730c4  bt 2, 0x3730d4
  03730c8  extsw 3, 3
  03730cc  bl 0x15cdb0
  03730d0  nop
  03730d4  li 3, -1
  03730d8  stw 3, 8(30)
  03730dc  li 3, 1
  03730e0  li 4, 0
  03730e4  ori 5, 31, 0
  03730e8  bl 0x15d12c
  03730ec  nop
  03730f0  b 0x37319c
  03730f4  ori 3, 31, 0
  03730f8  lwz 4, 8(30)
  03730fc  extsw 4, 4
  0373100  bl 0x15cc7c
  0373104  nop
  0373108  cmpwi 3, 0
  037310c  bf 2, 0x37319c
  0373110  li 3, 0
  0373114  li 4, 4
  0373118  ori 5, 31, 0
  037311c  bl 0x15d12c
  0373120  nop
  0373124  stw 3, 8(30)
  0373128  b 0x37319c
  037312c  ori 3, 31, 0
  0373130  lwz 4, 8(30)
  0373134  extsw 4, 4
  0373138  bl 0x15cc7c
  037313c  nop
  0373140  cmpwi 3, 0
  0373144  bt 2, 0x37319c
  0373148  lwz 3, 8(30)
  037314c  cmpwi 3, -1
  0373150  bt 2, 0x373194
  0373154  sldi 4, 3, 7
  0373158  sldi 6, 3, 4
  037315c  lis 5, 150
  0373160  subc 4, 4, 6
  0373164  addic 5, 5, 14176
  0373168  extsw 4, 4
  037316c  addc 4, 5, 4
  0373170  lwz 5, 136(4)
  0373174  cmpw 5, 31
  0373178  bf 2, 0x373194
  037317c  lbz 4, 116(4)
  0373180  cmpwi 4, 0
  0373184  bt 2, 0x373194
  0373188  extsw 3, 3
  037318c  bl 0x15cdb0
  0373190  nop
  0373194  li 3, -1
  0373198  stw 3, 8(30)
  037319c  lwz 30, 4(30)
  03731a0  cmpwi 30, -1
  03731a4  bt 2, 0x3731d0
  03731a8  lis 4, 164
  03731ac  slwi 5, 30, 8
  03731b0  ori 3, 31, 0
  03731b4  lwz 6, -28512(4)
  03731b8  li 4, 0
  03731bc  addc 5, 6, 5
  03731c0  addic 5, 5, 16
  03731c4  clrldi 5, 5, 32
  03731c8  bl 0xf1114
  03731cc  nop
  03731d0  ld 0, 160(1)
  03731d4  mtlr 0
  03731d8  ld 30, 128(1)
  03731dc  ld 31, 136(1)
  03731e0  addi 1, 1, 144
  03731e4  blr
