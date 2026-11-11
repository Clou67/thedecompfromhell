# game/update/moby1394.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1394_00269d18:   # 0x269d18, 0x448 bytes
  0269d18  stdu 1, -880(1)
  0269d1c  mflr 0
  0269d20  std 0, 896(1)
  0269d24  stfd 29, 856(1)
  0269d28  stfd 30, 864(1)
  0269d2c  stfd 31, 872(1)
  0269d30  addi 0, 1, 768
  0269d34  stvx 29, 0, 0
  0269d38  addic 0, 0, 16
  0269d3c  stvx 30, 0, 0
  0269d40  addic 0, 0, 16
  0269d44  stvx 31, 0, 0
  0269d48  std 31, 848(1)
  0269d4c  ori 31, 3, 0
  0269d50  lis 4, 39
  0269d54  std 29, 832(1)
  0269d58  addic 3, 1, 112
  0269d5c  addi 29, 4, -25340
  0269d60  std 30, 840(1)
  0269d64  addic 4, 31, 192
  0269d68  std 28, 824(1)
  0269d6c  std 27, 816(1)
  0269d70  lwz 30, 120(31)
  0269d74  bl 0x500f6c
  0269d78  nop
  0269d7c  lfs 1, 16(31)
  0269d80  lfs 2, 20(31)
  0269d84  lis 3, 16256
  0269d88  stfs 1, 160(1)
  0269d8c  lis 4, 122
  0269d90  lfs 1, 24(31)
  0269d94  lis 5, 114
  0269d98  stfs 2, 164(1)
  0269d9c  stfs 1, 168(1)
  0269da0  lfs 2, 0(29)
  0269da4  stw 3, 172(1)
  0269da8  lfs 3, 8(30)
  0269dac  lfs 1, -13592(4)
  0269db0  lfs 4, -3052(5)
  0269db4  fmadds 3, 1, 4, 3
  0269db8  lfs 1, 12(30)
  0269dbc  fcmpu 0, 3, 2
  0269dc0  stfs 3, 8(30)
  0269dc4  cror 6, 0, 2
  0269dc8  bt 6, 0x269dd4
  0269dcc  fsubs 2, 3, 2
  0269dd0  stfs 2, 8(30)
  0269dd4  lis 3, 149
  0269dd8  lfs 2, 20(31)
  0269ddc  addic 3, 3, 5056
  0269de0  lfs 3, 324(3)
  0269de4  lfs 4, 16(31)
  0269de8  fsubs 2, 2, 3
  0269dec  lfs 3, 320(3)
  0269df0  fsubs 3, 4, 3
  0269df4  lfs 4, 24(31)
  0269df8  lfs 5, 328(3)
  0269dfc  fsubs 4, 4, 5
  0269e00  fmuls 2, 2, 2
  0269e04  lis 3, 39
  0269e08  addi 3, 3, -25340
  0269e0c  li 4, 8
  0269e10  fmadds 2, 3, 3, 2
  0269e14  lfs 3, 4(3)
  0269e18  lfs 31, 8(3)
  0269e1c  <unknown>
  0269e20  vspltw 30, 30, 0
  0269e24  fmadds 2, 4, 4, 2
  0269e28  fsqrts 2, 2
  0269e2c  fsubs 30, 3, 2
  0269e30  fmuls 30, 30, 31
  0269e34  fcmpu 0, 30, 1
  0269e38  cror 6, 0, 2
  0269e3c  bt 6, 0x269e48
  0269e40  fmr 30, 1
  0269e44  b 0x269e64
  0269e48  lis 3, 39
  0269e4c  addi 3, 3, -25340
  0269e50  lfs 1, 12(3)
  0269e54  fcmpu 0, 30, 1
  0269e58  cror 6, 1, 2
  0269e5c  bt 6, 0x269e64
  0269e60  fmr 30, 1
  0269e64  li 28, 0
  0269e68  ori 29, 1, 0
  0269e6c  vspltisw 31, 0
  0269e70  ori 31, 28, 0
  0269e74  li 3, 14
  0269e78  bl 0x685c4
  0269e7c  nop
  0269e80  std 3, 296(29)
  0269e84  lis 9, 0
  0269e88  li 3, 0
  0269e8c  li 4, 0
  0269e90  li 5, 1
  0269e94  li 6, 1
  0269e98  li 7, 1
  0269e9c  li 8, 0
  0269ea0  ori 9, 9, 65424
  0269ea4  bl 0x502fd4
  0269ea8  nop
  0269eac  std 3, 304(29)
  0269eb0  li 3, 0
  0269eb4  li 4, 0
  0269eb8  li 5, 0
  0269ebc  li 6, 0
  0269ec0  li 7, 0
  0269ec4  li 8, 0
  0269ec8  bl 0x502f08
  0269ecc  nop
  0269ed0  std 3, 288(29)
  0269ed4  lis 4, 250
  0269ed8  lis 3, 250
  0269edc  lis 5, 122
  0269ee0  lis 6, 122
  0269ee4  li 7, 128
  0269ee8  lwz 8, 17228(3)
  0269eec  lwz 3, 17224(4)
  0269ef0  lwz 4, -13588(5)
  0269ef4  lwz 6, -13584(6)
  0269ef8  ori 5, 8, 0
  0269efc  bl 0x502ea8
  0269f00  nop
  0269f04  extsw 4, 28
  0269f08  std 3, 312(29)
  0269f0c  vcfsx 29, 31, 0
  0269f10  std 4, 752(1)
  0269f14  lfs 1, 8(30)
  0269f18  lfd 2, 752(1)
  0269f1c  fcfid 2, 2
  0269f20  frsp 2, 2
  0269f24  fmadds 29, 2, 31, 1
  0269f28  fmr 1, 29
  0269f2c  bl 0x502758
  0269f30  nop
  0269f34  extsw 3, 3
  0269f38  lis 4, 122
  0269f3c  std 3, 752(1)
  0269f40  lis 3, 122
  0269f44  lwz 3, -13616(3)
  0269f48  lwz 4, -13612(4)
  0269f4c  lfd 1, 752(1)
  0269f50  extsw 3, 3
  0269f54  fcfid 1, 1
  0269f58  extsw 4, 4
  0269f5c  frsp 1, 1
  0269f60  fsubs 29, 29, 1
  0269f64  fmr 1, 29
  0269f68  bl 0x5027bc
  0269f6c  nop
  0269f70  ori 4, 3, 0
  0269f74  fmr 1, 30
  0269f78  clrlwi 3, 4, 8
  0269f7c  bl 0x5027bc
  0269f80  nop
  0269f84  ori 11, 31, 0
  0269f88  ori 8, 29, 0
  0269f8c  ori 12, 3, 0
  0269f90  addic 3, 11, 176
  0269f94  ori 7, 8, 0
  0269f98  lis 10, 122
  0269f9c  lis 9, 122
  0269fa0  lis 5, 122
  0269fa4  li 27, 256
  0269fa8  ori 4, 7, 0
  0269fac  addc 6, 29, 3
  0269fb0  addic 10, 10, -13580
  0269fb4  addic 5, 5, -13536
  0269fb8  clrldi 6, 6, 32
  0269fbc  addic 9, 9, -13576
  0269fc0  addc 3, 4, 27
  0269fc4  <unknown>
  0269fc8  lfs 1, 0(9)
  0269fcc  clrlwi 27, 11, 31
  0269fd0  vmaddfp 2, 29, 30, 2
  0269fd4  cmpwi 27, 0
  0269fd8  vspltw 2, 2, 0
  0269fdc  stvewx 2, 0, 3
  0269fe0  stfs 1, 260(8)
  0269fe4  stw 12, 240(7)
  0269fe8  lfs 1, 0(5)
  0269fec  stfs 1, 0(6)
  0269ff0  lfs 1, 4(5)
  0269ff4  stfs 1, 4(6)
  0269ff8  lfs 1, 8(5)
  0269ffc  stfs 1, 8(6)
  026a000  lfs 1, 12(5)
  026a004  stfs 1, 12(6)
  026a008  bt 2, 0x26a020
  026a00c  lis 27, 122
  026a010  lfs 1, 184(4)
  026a014  lfs 2, -13604(27)
  026a018  fmadds 1, 2, 29, 1
  026a01c  b 0x26a030
  026a020  lis 27, 122
  026a024  lfs 1, 184(4)
  026a028  lfs 2, -13604(27)
  026a02c  fnmsubs 1, 2, 29, 1
  026a030  addic 11, 11, 1
  026a034  stfs 1, 184(4)
  026a038  addic 6, 6, 16
  026a03c  cmpwi 11, 4
  026a040  addic 10, 10, 8
  026a044  addic 3, 3, 8
  026a048  addic 8, 8, 8
  026a04c  addic 9, 9, 8
  026a050  addic 7, 7, 4
  026a054  addic 4, 4, 16
  026a058  addic 5, 5, 16
  026a05c  bt 0, 0x269fc4
  026a060  vspltisw 2, 1
  026a064  addic 28, 28, 1
  026a068  addic 29, 29, 144
  026a06c  cmpwi 28, 4
  026a070  vadduwm 31, 31, 2
  026a074  bt 0, 0x269e74
  026a078  lis 3, 161
  026a07c  ori 30, 31, 0
  026a080  addic 31, 3, 24396
  026a084  lis 3, 122
  026a088  lfs 1, 168(1)
  026a08c  addic 29, 1, 112
  026a090  li 7, 9
  026a094  ori 4, 29, 0
  026a098  li 5, 0
  026a09c  lfs 2, -13608(3)
  026a0a0  lwz 6, 28(31)
  026a0a4  addic 3, 1, 176
  026a0a8  fadds 1, 1, 2
  026a0ac  stfs 1, 168(1)
  026a0b0  bl 0x72280
  026a0b4  nop
  026a0b8  addic 3, 1, 320
  026a0bc  lwz 6, 28(31)
  026a0c0  ori 4, 29, 0
  026a0c4  li 5, 0
  026a0c8  li 7, 9
  026a0cc  bl 0x72280
  026a0d0  nop
  026a0d4  addic 3, 1, 464
  026a0d8  lwz 6, 28(31)
  026a0dc  ori 4, 29, 0
  026a0e0  li 5, 0
  026a0e4  li 7, 9
  026a0e8  bl 0x72280
  026a0ec  nop
  026a0f0  addic 3, 1, 608
  026a0f4  lwz 6, 28(31)
  026a0f8  ori 4, 29, 0
  026a0fc  li 5, 0
  026a100  li 7, 9
  026a104  bl 0x72280
  026a108  nop
  026a10c  addic 30, 30, 1
  026a110  cmpwi 30, 3
  026a114  bt 0, 0x26a084
  026a118  li 0, 768
  026a11c  lvx 29, 1, 0
  026a120  addic 0, 0, 16
  026a124  lvx 30, 1, 0
  026a128  addic 0, 0, 16
  026a12c  lvx 31, 1, 0
  026a130  ld 0, 896(1)
  026a134  mtlr 0
  026a138  lfd 29, 856(1)
  026a13c  lfd 30, 864(1)
  026a140  lfd 31, 872(1)
  026a144  ld 27, 816(1)
  026a148  ld 28, 824(1)
  026a14c  ld 29, 832(1)
  026a150  ld 30, 840(1)
  026a154  ld 31, 848(1)
  026a158  addi 1, 1, 880
  026a15c  blr

UpdateMoby_1394:   # 0x26a168, 0xe8 bytes
  026a168  stdu 1, -144(1)
  026a16c  mflr 0
  026a170  std 0, 160(1)
  026a174  stfd 31, 136(1)
  026a178  lis 4, 39
  026a17c  std 31, 128(1)
  026a180  lbz 5, 32(3)
  026a184  ori 31, 3, 0
  026a188  std 30, 120(1)
  026a18c  addi 4, 4, -24224
  026a190  lwz 30, 120(3)
  026a194  cmpwi 5, 0
  026a198  cmpwi 1, 5, 1
  026a19c  cmpwi 6, 5, -1
  026a1a0  lfs 31, 0(4)
  026a1a4  bt 1, 0x26a1b0
  026a1a8  bf 25, 0x26a234
  026a1ac  b 0x26a1b8
  026a1b0  bf 5, 0x26a1ec
  026a1b4  b 0x26a234
  026a1b8  lfs 1, 4(30)
  026a1bc  lis 3, 114
  026a1c0  fmuls 1, 1, 31
  026a1c4  lfs 2, -3056(3)
  026a1c8  fmuls 1, 2, 1
  026a1cc  bl 0x502758
  026a1d0  nop
  026a1d4  stw 3, 0(30)
  026a1d8  li 4, 255
  026a1dc  li 3, 1
  026a1e0  stb 3, 32(31)
  026a1e4  stb 4, 48(31)
  026a1e8  b 0x26a234
  026a1ec  ori 3, 30, 0
  026a1f0  bl 0x4fff60
  026a1f4  nop
  026a1f8  cmpwi 3, 0
  026a1fc  bt 2, 0x26a234
  026a200  lis 3, 122
  026a204  lis 4, 114
  026a208  lfs 1, -13472(3)
  026a20c  lfs 2, -3056(4)
  026a210  fmuls 1, 1, 31
  026a214  fmuls 1, 2, 1
  026a218  bl 0x502758
  026a21c  nop
  026a220  stw 3, 0(30)
  026a224  addic 4, 31, 16
  026a228  ori 3, 31, 0
  026a22c  bl 0x229438
  026a230  nop
  026a234  ld 0, 160(1)
  026a238  mtlr 0
  026a23c  lfd 31, 136(1)
  026a240  ld 30, 120(1)
  026a244  ld 31, 128(1)
  026a248  addi 1, 1, 144
  026a24c  blr
