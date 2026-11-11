# game/update/moby41.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_41:   # 0x3658b0, 0x8d0 bytes
  03658b0  stdu 1, -480(1)
  03658b4  mflr 0
  03658b8  std 0, 496(1)
  03658bc  stfd 29, 456(1)
  03658c0  stfd 30, 464(1)
  03658c4  stfd 31, 472(1)
  03658c8  std 31, 448(1)
  03658cc  lis 4, 54
  03658d0  ori 31, 3, 0
  03658d4  addi 3, 4, 22632
  03658d8  std 30, 440(1)
  03658dc  lis 4, 114
  03658e0  lwz 30, 120(31)
  03658e4  lfs 3, 0(3)
  03658e8  lfs 1, 64(31)
  03658ec  lfs 4, -3052(4)
  03658f0  std 29, 432(1)
  03658f4  std 28, 424(1)
  03658f8  fmuls 2, 4, 3
  03658fc  bl 0x502578
  0365900  nop
  0365904  lhz 3, 18(30)
  0365908  stfs 1, 64(31)
  036590c  cmpwi 3, 0
  0365910  bt 2, 0x365d58
  0365914  lis 3, 151
  0365918  lfs 2, 16(31)
  036591c  addic 3, 3, -25376
  0365920  lfs 1, 192(3)
  0365924  lfs 4, 0(30)
  0365928  fsubs 2, 1, 2
  036592c  lfs 1, 4(30)
  0365930  lfs 5, 8(30)
  0365934  fmuls 1, 1, 1
  0365938  stfs 2, 0(30)
  036593c  lfs 3, 196(3)
  0365940  fmadds 1, 4, 4, 1
  0365944  lfs 6, 20(31)
  0365948  fsubs 3, 3, 6
  036594c  fmadds 1, 5, 5, 1
  0365950  fmuls 6, 3, 3
  0365954  stfs 3, 4(30)
  0365958  lfs 4, 200(3)
  036595c  lfs 5, 24(31)
  0365960  fsubs 4, 4, 5
  0365964  fsqrts 1, 1
  0365968  stfs 4, 8(30)
  036596c  fmadds 5, 2, 2, 6
  0365970  lfs 6, 204(3)
  0365974  stfs 6, 12(30)
  0365978  fmadds 5, 4, 4, 5
  036597c  fsqrts 5, 5
  0365980  fcmpu 0, 5, 1
  0365984  cror 6, 0, 2
  0365988  bt 6, 0x365d30
  036598c  fdivs 1, 1, 5
  0365990  lis 3, 54
  0365994  addi 4, 3, 22632
  0365998  lis 3, 115
  036599c  addic 3, 3, 22784
  03659a0  fmr 7, 4
  03659a4  lfs 4, 4(4)
  03659a8  fsub 6, 4, 5
  03659ac  fsub 8, 4, 5
  03659b0  fsub 11, 4, 5
  03659b4  fsub 9, 5, 4
  03659b8  fsub 10, 5, 4
  03659bc  fsub 5, 5, 4
  03659c0  fmuls 2, 2, 1
  03659c4  fmuls 3, 3, 1
  03659c8  fmuls 1, 7, 1
  03659cc  fsel 6, 6, 4, 2
  03659d0  fsel 7, 8, 4, 3
  03659d4  fsel 8, 11, 4, 1
  03659d8  fsel 2, 9, 6, 2
  03659dc  fsel 3, 10, 7, 3
  03659e0  fsel 1, 5, 8, 1
  03659e4  fabs 5, 2
  03659e8  fabs 6, 3
  03659ec  stfs 2, 0(30)
  03659f0  stfs 3, 4(30)
  03659f4  stfs 1, 8(30)
  03659f8  stfs 2, 328(1)
  03659fc  stfs 3, 332(1)
  0365a00  fsubs 1, 5, 6
  0365a04  stfs 1, 336(1)
  0365a08  lwz 5, 328(1)
  0365a0c  lfs 1, 328(1)
  0365a10  lwz 6, 332(1)
  0365a14  lfs 2, 332(1)
  0365a18  fabs 1, 1
  0365a1c  lfs 3, 8(4)
  0365a20  rlwinm 6, 6, 3, 29, 29
  0365a24  lwz 4, 336(1)
  0365a28  lfs 7, 336(1)
  0365a2c  fabs 2, 2
  0365a30  rlwimi 6, 4, 2, 30, 30
  0365a34  fsub 8, 7, 4
  0365a38  ori 4, 3, 0
  0365a3c  fsub 7, 7, 4
  0365a40  rlwimi 6, 5, 4, 28, 28
  0365a44  rlwimi 4, 6, 2, 26, 28
  0365a48  slwi 5, 6, 2
  0365a4c  clrldi 4, 4, 32
  0365a50  fsel 6, 8, 1, 6
  0365a54  lfsx 1, 3, 5
  0365a58  fsel 5, 7, 2, 5
  0365a5c  lfs 2, 4(4)
  0365a60  fcmpu 0, 6, 4
  0365a64  bt 1, 0x365a70
  0365a68  fmr 1, 4
  0365a6c  b 0x365b88
  0365a70  fsubs 7, 5, 6
  0365a74  fadds 5, 5, 6
  0365a78  addic 4, 1, 16
  0365a7c  li 7, 2
  0365a80  addic 6, 4, 372
  0365a84  addic 5, 4, 356
  0365a88  mtctr 7
  0365a8c  fdivs 5, 7, 5
  0365a90  fmuls 6, 5, 5
  0365a94  stfs 5, 384(1)
  0365a98  stfs 5, 376(1)
  0365a9c  stfs 5, 380(1)
  0365aa0  stfs 5, 372(1)
  0365aa4  lfs 8, 384(1)
  0365aa8  lfs 9, 376(1)
  0365aac  lfs 10, 380(1)
  0365ab0  fmuls 7, 6, 6
  0365ab4  fmuls 9, 9, 6
  0365ab8  fmuls 8, 8, 7
  0365abc  fmuls 5, 7, 7
  0365ac0  fmuls 7, 10, 7
  0365ac4  stfs 9, 376(1)
  0365ac8  fmuls 6, 8, 6
  0365acc  stfs 7, 380(1)
  0365ad0  stfs 6, 384(1)
  0365ad4  lfs 6, 356(4)
  0365ad8  fmuls 6, 6, 5
  0365adc  stfs 6, 372(4)
  0365ae0  lfs 6, 4(5)
  0365ae4  addic 5, 5, 8
  0365ae8  fmuls 6, 6, 5
  0365aec  addic 4, 4, 8
  0365af0  stfs 6, 4(6)
  0365af4  addic 6, 6, 8
  0365af8  bdnz 0x365ad4
  0365afc  li 6, 4
  0365b00  ori 4, 1, 0
  0365b04  mtctr 6
  0365b08  lis 5, 115
  0365b0c  addic 6, 4, 372
  0365b10  addic 5, 5, 22752
  0365b14  ori 8, 6, 0
  0365b18  lfs 5, 372(4)
  0365b1c  lfs 6, 0(5)
  0365b20  fmuls 5, 5, 6
  0365b24  lfs 6, 4(5)
  0365b28  addic 5, 5, 8
  0365b2c  stfs 5, 372(4)
  0365b30  lfs 5, 4(6)
  0365b34  addic 4, 4, 8
  0365b38  fmuls 5, 5, 6
  0365b3c  stfs 5, 4(6)
  0365b40  addic 6, 6, 8
  0365b44  bdnz 0x365b18
  0365b48  ori 4, 1, 0
  0365b4c  fmr 5, 4
  0365b50  mtctr 7
  0365b54  lfs 6, 372(4)
  0365b58  fadds 5, 5, 6
  0365b5c  lfs 6, 4(8)
  0365b60  addic 4, 4, 16
  0365b64  lfs 7, 8(8)
  0365b68  lfs 8, 12(8)
  0365b6c  addic 8, 8, 16
  0365b70  fadds 5, 5, 6
  0365b74  fadds 5, 5, 7
  0365b78  fadds 5, 5, 8
  0365b7c  bdnz 0x365b54
  0365b80  fadds 5, 5, 3
  0365b84  fmadds 1, 5, 1, 2
  0365b88  stfs 1, 72(31)
  0365b8c  lfs 1, 4(30)
  0365b90  lfs 2, 0(30)
  0365b94  fmuls 1, 1, 1
  0365b98  lwz 4, 8(30)
  0365b9c  rlwinm 4, 4, 3, 29, 29
  0365ba0  fmadds 1, 2, 2, 1
  0365ba4  lfs 2, 8(30)
  0365ba8  fabs 5, 2
  0365bac  fsqrts 1, 1
  0365bb0  fabs 2, 1
  0365bb4  stfs 1, 320(1)
  0365bb8  fsubs 1, 2, 5
  0365bbc  stfs 1, 324(1)
  0365bc0  lwz 5, 320(1)
  0365bc4  lfs 1, 320(1)
  0365bc8  lwz 6, 324(1)
  0365bcc  fabs 6, 1
  0365bd0  lfs 1, 324(1)
  0365bd4  rlwimi 4, 6, 2, 30, 30
  0365bd8  fsub 7, 1, 4
  0365bdc  fsub 8, 1, 4
  0365be0  rlwimi 4, 5, 4, 28, 28
  0365be4  ori 5, 3, 0
  0365be8  rlwimi 5, 4, 2, 26, 28
  0365bec  slwi 4, 4, 2
  0365bf0  clrldi 5, 5, 32
  0365bf4  fsel 6, 7, 6, 5
  0365bf8  lfsx 1, 3, 4
  0365bfc  fsel 5, 8, 5, 2
  0365c00  lfs 2, 4(5)
  0365c04  fcmpu 0, 6, 4
  0365c08  bt 1, 0x365c10
  0365c0c  b 0x365d24
  0365c10  fsubs 7, 5, 6
  0365c14  fadds 5, 5, 6
  0365c18  addic 3, 1, 16
  0365c1c  li 7, 2
  0365c20  addic 5, 3, 340
  0365c24  addic 4, 3, 324
  0365c28  mtctr 7
  0365c2c  fdivs 5, 7, 5
  0365c30  fmuls 6, 5, 5
  0365c34  stfs 5, 352(1)
  0365c38  stfs 5, 344(1)
  0365c3c  stfs 5, 348(1)
  0365c40  stfs 5, 340(1)
  0365c44  lfs 8, 352(1)
  0365c48  lfs 9, 344(1)
  0365c4c  lfs 10, 348(1)
  0365c50  fmuls 7, 6, 6
  0365c54  fmuls 9, 9, 6
  0365c58  fmuls 8, 8, 7
  0365c5c  fmuls 5, 7, 7
  0365c60  fmuls 7, 10, 7
  0365c64  stfs 9, 344(1)
  0365c68  fmuls 6, 8, 6
  0365c6c  stfs 7, 348(1)
  0365c70  stfs 6, 352(1)
  0365c74  lfs 6, 324(3)
  0365c78  fmuls 6, 6, 5
  0365c7c  stfs 6, 340(3)
  0365c80  lfs 6, 4(4)
  0365c84  addic 4, 4, 8
  0365c88  fmuls 6, 6, 5
  0365c8c  addic 3, 3, 8
  0365c90  stfs 6, 4(5)
  0365c94  addic 5, 5, 8
  0365c98  bdnz 0x365c74
  0365c9c  li 5, 4
  0365ca0  ori 3, 1, 0
  0365ca4  mtctr 5
  0365ca8  lis 4, 115
  0365cac  addic 5, 3, 340
  0365cb0  addic 4, 4, 22752
  0365cb4  ori 6, 5, 0
  0365cb8  lfs 5, 340(3)
  0365cbc  lfs 6, 0(4)
  0365cc0  fmuls 5, 5, 6
  0365cc4  lfs 6, 4(4)
  0365cc8  addic 4, 4, 8
  0365ccc  stfs 5, 340(3)
  0365cd0  lfs 5, 4(5)
  0365cd4  addic 3, 3, 8
  0365cd8  fmuls 5, 5, 6
  0365cdc  stfs 5, 4(5)
  0365ce0  addic 5, 5, 8
  0365ce4  bdnz 0x365cb8
  0365ce8  ori 3, 1, 0
  0365cec  mtctr 7
  0365cf0  lfs 5, 340(3)
  0365cf4  fadds 4, 4, 5
  0365cf8  addic 3, 3, 16
  0365cfc  lfs 5, 4(6)
  0365d00  lfs 6, 8(6)
  0365d04  lfs 7, 12(6)
  0365d08  addic 6, 6, 16
  0365d0c  fadds 4, 4, 5
  0365d10  fadds 4, 4, 6
  0365d14  fadds 4, 4, 7
  0365d18  bdnz 0x365cf0
  0365d1c  fadds 4, 4, 3
  0365d20  fmadds 4, 4, 1, 2
  0365d24  fneg 1, 4
  0365d28  stfs 1, 68(31)
  0365d2c  b 0x365d58
  0365d30  lis 3, 54
  0365d34  addi 3, 3, 22632
  0365d38  lfs 1, 12(3)
  0365d3c  fcmpu 0, 5, 1
  0365d40  cror 6, 1, 2
  0365d44  bt 6, 0x365d58
  0365d48  ori 3, 31, 0
  0365d4c  bl 0xefb38
  0365d50  nop
  0365d54  b 0x366154
  0365d58  lfs 1, 16(31)
  0365d5c  lfs 2, 0(30)
  0365d60  fadds 3, 1, 2
  0365d64  lfs 2, 20(31)
  0365d68  lfs 4, 24(31)
  0365d6c  lfs 5, 28(31)
  0365d70  lwz 3, 20(30)
  0365d74  cmpwi 3, 0
  0365d78  stfs 3, 192(1)
  0365d7c  lfs 3, 4(30)
  0365d80  fadds 3, 2, 3
  0365d84  stfs 3, 196(1)
  0365d88  lfs 3, 8(30)
  0365d8c  stfs 5, 204(1)
  0365d90  fadds 3, 4, 3
  0365d94  stfs 3, 200(1)
  0365d98  bt 2, 0x365e30
  0365d9c  lhz 4, 166(3)
  0365da0  cmpwi 4, 46
  0365da4  bf 2, 0x365e30
  0365da8  lbz 4, 32(3)
  0365dac  cmpwi 1, 4, 253
  0365db0  cmpwi 4, 254
  0365db4  cror 2, 2, 6
  0365db8  bt 2, 0x365e30
  0365dbc  lfs 3, 16(3)
  0365dc0  fsubs 1, 1, 3
  0365dc4  li 4, 0
  0365dc8  stfs 1, 208(1)
  0365dcc  lfs 3, 20(3)
  0365dd0  fsubs 2, 2, 3
  0365dd4  lis 3, 54
  0365dd8  addi 3, 3, 22632
  0365ddc  fmuls 3, 2, 2
  0365de0  lfs 4, 16(3)
  0365de4  lfs 5, 4(3)
  0365de8  stw 4, 216(1)
  0365dec  fmadds 3, 1, 1, 3
  0365df0  fsqrts 3, 3
  0365df4  fdivs 4, 4, 3
  0365df8  fsub 6, 5, 3
  0365dfc  fsub 7, 5, 3
  0365e00  fsub 8, 3, 5
  0365e04  fsub 3, 3, 5
  0365e08  fmuls 1, 1, 4
  0365e0c  fmuls 2, 2, 4
  0365e10  fsel 4, 6, 5, 1
  0365e14  fsel 5, 7, 5, 2
  0365e18  fsel 1, 8, 4, 1
  0365e1c  fsel 2, 3, 5, 2
  0365e20  stfs 1, 208(1)
  0365e24  stfs 2, 212(1)
  0365e28  lfs 1, 20(3)
  0365e2c  b 0x365ec0
  0365e30  lfs 1, 4(30)
  0365e34  lfs 2, 0(30)
  0365e38  fmuls 1, 1, 1
  0365e3c  lfs 3, 8(30)
  0365e40  lis 3, 54
  0365e44  addi 3, 3, 22632
  0365e48  fmadds 1, 2, 2, 1
  0365e4c  fmadds 1, 3, 3, 1
  0365e50  lfs 3, 4(3)
  0365e54  fsqrts 1, 1
  0365e58  fcmpu 0, 1, 3
  0365e5c  bf 2, 0x365e8c
  0365e60  stfs 2, 208(1)
  0365e64  lfs 1, 4(30)
  0365e68  li 3, 0
  0365e6c  stfs 1, 212(1)
  0365e70  lfs 1, 8(30)
  0365e74  stfs 1, 216(1)
  0365e78  lfs 1, 12(30)
  0365e7c  stw 3, 216(1)
  0365e80  stw 3, 212(1)
  0365e84  stw 3, 208(1)
  0365e88  b 0x365ec0
  0365e8c  lis 3, 54
  0365e90  addi 3, 3, 22632
  0365e94  lfs 3, 16(3)
  0365e98  fdivs 1, 3, 1
  0365e9c  fmuls 2, 2, 1
  0365ea0  stfs 2, 208(1)
  0365ea4  lfs 2, 4(30)
  0365ea8  fmuls 2, 2, 1
  0365eac  stfs 2, 212(1)
  0365eb0  lfs 2, 8(30)
  0365eb4  fmuls 1, 2, 1
  0365eb8  stfs 1, 216(1)
  0365ebc  lfs 1, 12(30)
  0365ec0  lis 3, 54
  0365ec4  stfs 1, 220(1)
  0365ec8  addic 28, 1, 272
  0365ecc  addi 4, 3, 22632
  0365ed0  ori 3, 28, 0
  0365ed4  addic 7, 1, 208
  0365ed8  li 5, 1
  0365edc  lfs 1, 16(4)
  0365ee0  ori 4, 31, 0
  0365ee4  bl 0x10581c
  0365ee8  nop
  0365eec  lhz 3, 166(31)
  0365ef0  addic 29, 31, 16
  0365ef4  lwz 6, 20(30)
  0365ef8  sth 3, 298(1)
  0365efc  addic 4, 1, 192
  0365f00  ori 3, 29, 0
  0365f04  li 5, 0
  0365f08  ori 7, 28, 0
  0365f0c  bl 0x57820
  0365f10  nop
  0365f14  cmpwi 3, 0
  0365f18  bf 2, 0x365f30
  0365f1c  addic 3, 30, 16
  0365f20  bl 0x4fffb4
  0365f24  nop
  0365f28  cmpwi 3, 0
  0365f2c  bt 2, 0x365fa0
  0365f30  lis 3, 54
  0365f34  li 6, 0
  0365f38  addi 4, 3, 22632
  0365f3c  li 7, -1
  0365f40  ori 3, 31, 0
  0365f44  ori 5, 29, 0
  0365f48  li 8, 10
  0365f4c  lfs 2, 28(4)
  0365f50  lfs 4, 36(4)
  0365f54  li 9, 6
  0365f58  lfs 1, 24(4)
  0365f5c  li 10, 4
  0365f60  lfs 5, 32(4)
  0365f64  fmr 3, 2
  0365f68  lfs 7, 4(4)
  0365f6c  fmr 6, 4
  0365f70  std 6, 144(1)
  0365f74  ori 4, 30, 0
  0365f78  std 6, 160(1)
  0365f7c  std 6, 168(1)
  0365f80  std 7, 176(1)
  0365f84  std 6, 184(1)
  0365f88  bl 0x10e030
  0365f8c  nop
  0365f90  ori 3, 31, 0
  0365f94  bl 0xefb38
  0365f98  nop
  0365f9c  b 0x366154
  0365fa0  lis 3, 54
  0365fa4  lfs 1, 192(1)
  0365fa8  lfs 2, 196(1)
  0365fac  addic 28, 1, 224
  0365fb0  addi 29, 3, 22632
  0365fb4  stfs 1, 16(31)
  0365fb8  lfs 1, 200(1)
  0365fbc  lis 3, 114
  0365fc0  stfs 2, 20(31)
  0365fc4  lfs 2, 204(1)
  0365fc8  stfs 1, 24(31)
  0365fcc  stfs 2, 28(31)
  0365fd0  lfs 3, -3052(3)
  0365fd4  lfs 1, 12(29)
  0365fd8  lfs 2, 40(29)
  0365fdc  ori 3, 28, 0
  0365fe0  fmuls 1, 3, 1
  0365fe4  fmuls 2, 3, 2
  0365fe8  bl 0xfea60
  0365fec  nop
  0365ff0  lfs 30, 4(29)
  0365ff4  lfs 29, 28(29)
  0365ff8  fmr 1, 30
  0365ffc  fmr 2, 29
  0366000  bl 0xfcbe8
  0366004  nop
  0366008  lfs 2, 0(30)
  036600c  lis 3, 114
  0366010  lfs 3, 16(31)
  0366014  fmuls 2, 2, 1
  0366018  lfs 4, 20(31)
  036601c  lfs 5, 24(31)
  0366020  lis 7, 96
  0366024  ori 4, 28, 0
  0366028  li 6, 127
  036602c  ori 7, 7, 24672
  0366030  li 8, 3
  0366034  stfs 2, 240(1)
  0366038  lfs 6, 4(30)
  036603c  fadds 2, 2, 3
  0366040  lfs 7, -3056(3)
  0366044  fmuls 6, 6, 1
  0366048  addic 3, 1, 240
  036604c  stfs 6, 244(1)
  0366050  lfs 3, 8(30)
  0366054  fmuls 1, 3, 1
  0366058  fadds 3, 6, 4
  036605c  fadds 4, 1, 5
  0366060  stfs 1, 248(1)
  0366064  lfs 1, 12(30)
  0366068  stfs 2, 240(1)
  036606c  stfs 1, 252(1)
  0366070  stfs 3, 244(1)
  0366074  fmr 5, 30
  0366078  fmr 3, 29
  036607c  stfs 4, 248(1)
  0366080  lfs 31, 44(29)
  0366084  fmuls 1, 7, 31
  0366088  fctiwz 1, 1
  036608c  stfd 1, 408(1)
  0366090  lwz 5, 412(1)
  0366094  lfs 1, 48(29)
  0366098  lfs 2, 52(29)
  036609c  extsw 5, 5
  03660a0  lfs 4, 56(29)
  03660a4  bl 0x12e3e8
  03660a8  nop
  03660ac  ori 30, 3, 0
  03660b0  lfs 1, 224(31)
  03660b4  lfs 2, 228(31)
  03660b8  cmpwi 30, 0
  03660bc  lfs 3, 232(31)
  03660c0  lfs 4, 236(31)
  03660c4  bt 2, 0x3660e4
  03660c8  lis 3, 165
  03660cc  li 4, 68
  03660d0  addic 3, 3, 10244
  03660d4  lwz 3, 92(3)
  03660d8  lbz 3, 0(3)
  03660dc  stb 4, 3(30)
  03660e0  stb 3, 2(30)
  03660e4  lis 3, 54
  03660e8  lis 6, 114
  03660ec  addi 5, 3, 22632
  03660f0  lis 7, 20224
  03660f4  addic 4, 1, 256
  03660f8  li 9, 1
  03660fc  lfs 5, 60(5)
  0366100  fmuls 1, 1, 5
  0366104  fmuls 2, 2, 5
  0366108  fmuls 3, 3, 5
  036610c  fmuls 4, 4, 5
  0366110  addic 3, 1, 240
  0366114  stfs 1, 256(1)
  0366118  stfs 2, 260(1)
  036611c  stfs 3, 264(1)
  0366120  stfs 4, 268(1)
  0366124  lfs 1, -3056(6)
  0366128  lis 6, 8191
  036612c  fmuls 2, 1, 31
  0366130  lfs 1, 64(5)
  0366134  ori 6, 6, 65535
  0366138  ori 5, 7, 32767
  036613c  fctiwz 2, 2
  0366140  stfd 2, 408(1)
  0366144  lwz 8, 412(1)
  0366148  extsw 8, 8
  036614c  bl 0x1268f8
  0366150  nop
  0366154  ld 0, 496(1)
  0366158  mtlr 0
  036615c  lfd 29, 456(1)
  0366160  lfd 30, 464(1)
  0366164  lfd 31, 472(1)
  0366168  ld 28, 424(1)
  036616c  ld 29, 432(1)
  0366170  ld 30, 440(1)
  0366174  ld 31, 448(1)
  0366178  addi 1, 1, 480
  036617c  blr
