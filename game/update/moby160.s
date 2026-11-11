# game/update/moby160.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M160_002a1a48:   # 0x2a1a48, 0x92c bytes
  02a1a48  stdu 1, -352(1)
  02a1a4c  mflr 0
  02a1a50  std 0, 368(1)
  02a1a54  stfd 24, 288(1)
  02a1a58  stfd 25, 296(1)
  02a1a5c  stfd 26, 304(1)
  02a1a60  stfd 27, 312(1)
  02a1a64  stfd 28, 320(1)
  02a1a68  stfd 29, 328(1)
  02a1a6c  stfd 30, 336(1)
  02a1a70  stfd 31, 344(1)
  02a1a74  std 27, 248(1)
  02a1a78  std 31, 280(1)
  02a1a7c  lis 27, 151
  02a1a80  std 28, 256(1)
  02a1a84  ori 31, 3, 0
  02a1a88  addic 27, 27, -25376
  02a1a8c  std 30, 272(1)
  02a1a90  lis 28, 42
  02a1a94  ori 30, 4, 0
  02a1a98  std 29, 264(1)
  02a1a9c  addi 28, 28, 6664
  02a1aa0  ori 29, 5, 0
  02a1aa4  lwz 3, 8324(27)
  02a1aa8  cmpwi 3, 114
  02a1aac  bt 2, 0x2a1ac0
  02a1ab0  lis 3, 161
  02a1ab4  lwz 3, 1800(3)
  02a1ab8  cmpwi 3, 0
  02a1abc  bt 2, 0x2a1ac8
  02a1ac0  li 3, 0
  02a1ac4  b 0x2a2330
  02a1ac8  lfs 31, 16(30)
  02a1acc  lfs 1, 20(30)
  02a1ad0  stfs 31, 128(1)
  02a1ad4  lfs 2, 24(30)
  02a1ad8  stfs 1, 132(1)
  02a1adc  lfs 3, 28(30)
  02a1ae0  lbz 3, 32(30)
  02a1ae4  stfs 2, 136(1)
  02a1ae8  cmpwi 3, 0
  02a1aec  stfs 3, 140(1)
  02a1af0  bf 2, 0x2a1c78
  02a1af4  lfs 31, 0(28)
  02a1af8  lfs 2, 152(27)
  02a1afc  fmr 1, 31
  02a1b00  bl 0x502578
  02a1b04  nop
  02a1b08  lfs 2, 4(28)
  02a1b0c  lfs 30, 8(28)
  02a1b10  fadds 1, 1, 2
  02a1b14  lfs 29, 12(28)
  02a1b18  lfs 28, 16(28)
  02a1b1c  lfs 27, 20(28)
  02a1b20  lfs 26, 24(28)
  02a1b24  lfs 25, 28(28)
  02a1b28  lfs 24, 32(28)
  02a1b2c  fsubs 2, 30, 1
  02a1b30  fsubs 3, 29, 1
  02a1b34  fsub 5, 1, 2
  02a1b38  fsel 1, 5, 2, 1
  02a1b3c  fsub 2, 3, 1
  02a1b40  fsel 1, 2, 3, 1
  02a1b44  fmuls 3, 1, 1
  02a1b48  fmuls 4, 3, 1
  02a1b4c  fmuls 2, 3, 4
  02a1b50  fmadds 1, 4, 28, 1
  02a1b54  fmuls 5, 3, 2
  02a1b58  fmadds 6, 2, 27, 1
  02a1b5c  fmr 1, 31
  02a1b60  lfs 2, 152(27)
  02a1b64  fmuls 3, 3, 5
  02a1b68  fmadds 4, 5, 26, 6
  02a1b6c  fmadds 3, 3, 25, 4
  02a1b70  fmuls 3, 3, 24
  02a1b74  stfs 3, 112(1)
  02a1b78  bl 0x502578
  02a1b7c  nop
  02a1b80  fsubs 2, 30, 1
  02a1b84  fsubs 3, 29, 1
  02a1b88  li 3, 0
  02a1b8c  fsub 4, 1, 2
  02a1b90  fsel 1, 4, 2, 1
  02a1b94  fsub 2, 3, 1
  02a1b98  fsel 1, 2, 3, 1
  02a1b9c  lfs 2, 112(1)
  02a1ba0  lfs 4, 128(27)
  02a1ba4  fadds 2, 2, 4
  02a1ba8  lfs 6, 132(27)
  02a1bac  stw 3, 120(1)
  02a1bb0  fmuls 3, 1, 1
  02a1bb4  stfs 2, 112(1)
  02a1bb8  lfs 31, 0(31)
  02a1bbc  fmuls 5, 3, 1
  02a1bc0  lfs 30, 4(31)
  02a1bc4  lfs 29, 8(31)
  02a1bc8  lfs 2, 136(27)
  02a1bcc  lwz 3, 764(27)
  02a1bd0  cmpwi 3, 0
  02a1bd4  fmuls 4, 3, 5
  02a1bd8  fmadds 1, 5, 28, 1
  02a1bdc  fmuls 5, 3, 4
  02a1be0  fmadds 1, 4, 27, 1
  02a1be4  fmuls 3, 3, 5
  02a1be8  fmadds 1, 5, 26, 1
  02a1bec  fmadds 1, 3, 25, 1
  02a1bf0  fmuls 1, 1, 24
  02a1bf4  fadds 3, 1, 6
  02a1bf8  stfs 1, 116(1)
  02a1bfc  stfs 3, 116(1)
  02a1c00  lfs 1, 36(28)
  02a1c04  fadds 1, 2, 1
  02a1c08  stfs 1, 120(1)
  02a1c0c  bt 2, 0x2a1c40
  02a1c10  bl 0x1122ac
  02a1c14  nop
  02a1c18  cmpwi 3, 0
  02a1c1c  bt 2, 0x2a1c40
  02a1c20  cmpwi 29, 0
  02a1c24  bt 2, 0x2a1c40
  02a1c28  lfs 1, 256(27)
  02a1c2c  lfs 2, 260(27)
  02a1c30  fadds 31, 31, 1
  02a1c34  lfs 1, 264(27)
  02a1c38  fadds 30, 30, 2
  02a1c3c  fadds 29, 29, 1
  02a1c40  li 3, 40
  02a1c44  vspltisw 2, -1
  02a1c48  lis 4, 114
  02a1c4c  li 5, -3056
  02a1c50  vslw 2, 2, 2
  02a1c54  <unknown>
  02a1c58  li 3, 160
  02a1c5c  vspltw 3, 3, 0
  02a1c60  <unknown>
  02a1c64  vmaddfp 2, 4, 3, 2
  02a1c68  vctsxs 2, 2, 0
  02a1c6c  vspltw 2, 2, 0
  02a1c70  stvewx 2, 3, 1
  02a1c74  b 0x2a1cc0
  02a1c78  lwz 3, 48(31)
  02a1c7c  lhz 4, 52(31)
  02a1c80  lfs 4, 0(31)
  02a1c84  extsh 4, 4
  02a1c88  lwz 3, 120(3)
  02a1c8c  stfs 31, 112(1)
  02a1c90  stfs 1, 116(1)
  02a1c94  fmr 31, 4
  02a1c98  stfs 2, 120(1)
  02a1c9c  stfs 3, 124(1)
  02a1ca0  lfs 30, 4(31)
  02a1ca4  lfs 29, 8(31)
  02a1ca8  stw 4, 160(1)
  02a1cac  lwz 3, 80(3)
  02a1cb0  cmpwi 3, 0
  02a1cb4  bt 2, 0x2a1cc0
  02a1cb8  li 3, 1
  02a1cbc  sth 3, 54(31)
  02a1cc0  lwz 8, 8320(27)
  02a1cc4  addic 3, 1, 144
  02a1cc8  lfs 1, 120(1)
  02a1ccc  addic 4, 1, 112
  02a1cd0  li 5, 16
  02a1cd4  li 7, 0
  02a1cd8  ori 6, 8, 0
  02a1cdc  lfs 2, 16(8)
  02a1ce0  stfs 2, 144(1)
  02a1ce4  lfs 2, 20(8)
  02a1ce8  stfs 2, 148(1)
  02a1cec  lfs 2, 24(8)
  02a1cf0  stfs 2, 152(1)
  02a1cf4  lfs 2, 28(8)
  02a1cf8  stfs 1, 152(1)
  02a1cfc  stfs 2, 156(1)
  02a1d00  bl 0x57820
  02a1d04  nop
  02a1d08  cmpwi 3, 0
  02a1d0c  bt 2, 0x2a1d54
  02a1d10  bl 0x60780
  02a1d14  nop
  02a1d18  cmpwi 3, 0
  02a1d1c  bt 2, 0x2a1d54
  02a1d20  lis 3, 161
  02a1d24  addic 3, 3, 2368
  02a1d28  lwz 4, 28(3)
  02a1d2c  cmpwi 4, 0
  02a1d30  bf 1, 0x2a1d54
  02a1d34  lfs 1, 32(3)
  02a1d38  stfs 1, 16(31)
  02a1d3c  lfs 1, 36(3)
  02a1d40  stfs 1, 20(31)
  02a1d44  lfs 1, 40(3)
  02a1d48  stfs 1, 24(31)
  02a1d4c  lfs 1, 44(3)
  02a1d50  stfs 1, 28(31)
  02a1d54  addic 3, 1, 160
  02a1d58  bl 0x4fff60
  02a1d5c  nop
  02a1d60  cmpwi 3, 0
  02a1d64  bf 2, 0x2a1e24
  02a1d68  lfs 1, 112(1)
  02a1d6c  lis 3, 114
  02a1d70  lfs 2, 116(1)
  02a1d74  addic 4, 1, 112
  02a1d78  lfs 3, 120(1)
  02a1d7c  fadds 4, 1, 31
  02a1d80  stfs 1, 128(1)
  02a1d84  li 5, 18
  02a1d88  fadds 1, 2, 30
  02a1d8c  stfs 2, 132(1)
  02a1d90  fadds 2, 3, 29
  02a1d94  lfs 5, 124(1)
  02a1d98  stfs 3, 136(1)
  02a1d9c  ori 6, 30, 0
  02a1da0  stfs 5, 140(1)
  02a1da4  li 7, 0
  02a1da8  lfs 3, -3048(3)
  02a1dac  addic 3, 1, 128
  02a1db0  stfs 4, 112(1)
  02a1db4  stfs 1, 116(1)
  02a1db8  stfs 2, 120(1)
  02a1dbc  lfs 1, 44(28)
  02a1dc0  fnmsubs 29, 3, 1, 29
  02a1dc4  bl 0x57820
  02a1dc8  nop
  02a1dcc  cmpwi 3, 0
  02a1dd0  bt 2, 0x2a1d54
  02a1dd4  bl 0x60780
  02a1dd8  nop
  02a1ddc  cmpwi 3, 0
  02a1de0  bf 2, 0x2a1df0
  02a1de4  lfs 1, 48(28)
  02a1de8  fcmpu 0, 29, 1
  02a1dec  bt 1, 0x2a1d54
  02a1df0  lis 3, 161
  02a1df4  addic 3, 3, 2368
  02a1df8  lwz 4, 28(3)
  02a1dfc  cmpwi 4, 0
  02a1e00  bf 1, 0x2a1d54
  02a1e04  lfs 1, 32(3)
  02a1e08  stfs 1, 16(31)
  02a1e0c  lfs 1, 36(3)
  02a1e10  stfs 1, 20(31)
  02a1e14  lfs 1, 40(3)
  02a1e18  stfs 1, 24(31)
  02a1e1c  lfs 1, 44(3)
  02a1e20  stfs 1, 28(31)
  02a1e24  lwz 3, 160(1)
  02a1e28  cmpwi 3, 0
  02a1e2c  bt 2, 0x2a232c
  02a1e30  cmpwi 29, 0
  02a1e34  bf 2, 0x2a1e5c
  02a1e38  lis 3, 161
  02a1e3c  addic 3, 3, 2368
  02a1e40  lwz 3, 24(3)
  02a1e44  cmpwi 3, 0
  02a1e48  bt 2, 0x2a232c
  02a1e4c  bl 0x1122ac
  02a1e50  nop
  02a1e54  cmpwi 3, 0
  02a1e58  bt 2, 0x2a232c
  02a1e5c  cmpwi 29, 2
  02a1e60  bf 2, 0x2a1e88
  02a1e64  lis 3, 161
  02a1e68  addic 3, 3, 2368
  02a1e6c  lwz 3, 24(3)
  02a1e70  cmpwi 3, 0
  02a1e74  bt 2, 0x2a1e88
  02a1e78  bl 0x1122ac
  02a1e7c  nop
  02a1e80  cmpwi 3, 0
  02a1e84  bf 2, 0x2a1e9c
  02a1e88  lis 3, 113
  02a1e8c  ori 4, 30, 0
  02a1e90  addic 3, 3, -21640
  02a1e94  bl 0x6d720
  02a1e98  nop
  02a1e9c  lfs 1, 4(28)
  02a1ea0  lfs 2, 8(28)
  02a1ea4  lfs 3, 40(31)
  02a1ea8  lfs 4, 12(28)
  02a1eac  fadds 1, 3, 1
  02a1eb0  fsubs 5, 2, 3
  02a1eb4  fsubs 6, 4, 3
  02a1eb8  lis 3, 161
  02a1ebc  addic 3, 3, 2368
  02a1ec0  fsubs 2, 2, 1
  02a1ec4  fsub 7, 3, 5
  02a1ec8  fsubs 4, 4, 1
  02a1ecc  fsub 9, 1, 2
  02a1ed0  fsel 3, 7, 5, 3
  02a1ed4  lfs 5, 16(28)
  02a1ed8  lfs 7, 20(28)
  02a1edc  fsel 1, 9, 2, 1
  02a1ee0  fsub 2, 6, 3
  02a1ee4  lis 30, 115
  02a1ee8  fsub 8, 4, 1
  02a1eec  fsel 2, 2, 6, 3
  02a1ef0  lfs 3, 24(28)
  02a1ef4  lfs 6, 68(3)
  02a1ef8  fsel 1, 8, 4, 1
  02a1efc  fmuls 4, 2, 2
  02a1f00  lfs 8, 28(28)
  02a1f04  lfs 11, 64(3)
  02a1f08  lwz 29, 72(3)
  02a1f0c  lfs 31, 72(3)
  02a1f10  fmuls 9, 1, 1
  02a1f14  fmuls 10, 4, 2
  02a1f18  addic 30, 30, 22784
  02a1f1c  fmuls 12, 9, 1
  02a1f20  fmuls 13, 4, 10
  02a1f24  fmadds 2, 10, 5, 2
  02a1f28  fmadds 1, 12, 5, 1
  02a1f2c  fmuls 10, 9, 12
  02a1f30  fmuls 5, 4, 13
  02a1f34  fmadds 2, 13, 7, 2
  02a1f38  fmuls 12, 9, 10
  02a1f3c  fmadds 1, 10, 7, 1
  02a1f40  fmuls 4, 4, 5
  02a1f44  fmadds 2, 5, 3, 2
  02a1f48  fmuls 5, 9, 12
  02a1f4c  fmadds 1, 12, 3, 1
  02a1f50  fmuls 3, 31, 31
  02a1f54  fmadds 2, 4, 8, 2
  02a1f58  fmadds 1, 5, 8, 1
  02a1f5c  fmuls 30, 6, 2
  02a1f60  fmuls 2, 11, 2
  02a1f64  fmadds 30, 11, 1, 30
  02a1f68  fmsubs 1, 6, 1, 2
  02a1f6c  fmadds 3, 30, 30, 3
  02a1f70  fabs 4, 1
  02a1f74  stfs 1, 176(1)
  02a1f78  fsqrts 2, 3
  02a1f7c  lwz 3, 176(1)
  02a1f80  lfs 1, 176(1)
  02a1f84  fabs 3, 1
  02a1f88  rlwinm 3, 3, 3, 29, 29
  02a1f8c  fabs 5, 2
  02a1f90  stfs 2, 172(1)
  02a1f94  fsubs 1, 5, 4
  02a1f98  stfs 1, 180(1)
  02a1f9c  lwz 4, 172(1)
  02a1fa0  lfs 28, 48(28)
  02a1fa4  lfs 1, 172(1)
  02a1fa8  lfs 29, 52(28)
  02a1fac  lwz 5, 180(1)
  02a1fb0  lfs 2, 180(1)
  02a1fb4  fabs 1, 1
  02a1fb8  rlwimi 3, 5, 2, 30, 30
  02a1fbc  fsub 6, 2, 28
  02a1fc0  fsub 7, 2, 28
  02a1fc4  rlwimi 3, 4, 4, 28, 28
  02a1fc8  ori 4, 30, 0
  02a1fcc  rlwimi 4, 3, 2, 26, 28
  02a1fd0  slwi 3, 3, 2
  02a1fd4  clrldi 4, 4, 32
  02a1fd8  fsel 4, 6, 1, 4
  02a1fdc  lfsx 1, 30, 3
  02a1fe0  lfs 2, 4(4)
  02a1fe4  fsel 3, 7, 3, 5
  02a1fe8  fcmpu 0, 4, 28
  02a1fec  bt 1, 0x2a1ff8
  02a1ff0  fmr 1, 28
  02a1ff4  b 0x2a2110
  02a1ff8  fsubs 5, 3, 4
  02a1ffc  fadds 3, 3, 4
  02a2000  addic 3, 1, 16
  02a2004  li 6, 2
  02a2008  addic 4, 3, 200
  02a200c  addic 5, 3, 216
  02a2010  mtctr 6
  02a2014  fdivs 3, 5, 3
  02a2018  fmuls 4, 3, 3
  02a201c  stfs 3, 228(1)
  02a2020  stfs 3, 220(1)
  02a2024  stfs 3, 224(1)
  02a2028  stfs 3, 216(1)
  02a202c  lfs 6, 228(1)
  02a2030  lfs 7, 220(1)
  02a2034  lfs 8, 224(1)
  02a2038  fmuls 5, 4, 4
  02a203c  fmuls 7, 7, 4
  02a2040  fmuls 6, 6, 5
  02a2044  fmuls 3, 5, 5
  02a2048  fmuls 5, 8, 5
  02a204c  stfs 7, 220(1)
  02a2050  fmuls 4, 6, 4
  02a2054  stfs 5, 224(1)
  02a2058  stfs 4, 228(1)
  02a205c  lfs 4, 200(3)
  02a2060  fmuls 4, 4, 3
  02a2064  stfs 4, 216(3)
  02a2068  lfs 4, 4(4)
  02a206c  addic 3, 3, 8
  02a2070  addic 4, 4, 8
  02a2074  fmuls 4, 4, 3
  02a2078  stfs 4, 4(5)
  02a207c  addic 5, 5, 8
  02a2080  bdnz 0x2a205c
  02a2084  li 5, 4
  02a2088  ori 3, 1, 0
  02a208c  mtctr 5
  02a2090  lis 4, 115
  02a2094  addic 5, 3, 216
  02a2098  addic 4, 4, 22752
  02a209c  ori 7, 5, 0
  02a20a0  lfs 3, 216(3)
  02a20a4  lfs 4, 0(4)
  02a20a8  fmuls 3, 3, 4
  02a20ac  lfs 4, 4(4)
  02a20b0  addic 4, 4, 8
  02a20b4  stfs 3, 216(3)
  02a20b8  lfs 3, 4(5)
  02a20bc  addic 3, 3, 8
  02a20c0  fmuls 3, 3, 4
  02a20c4  stfs 3, 4(5)
  02a20c8  addic 5, 5, 8
  02a20cc  bdnz 0x2a20a0
  02a20d0  fmr 3, 28
  02a20d4  ori 3, 1, 0
  02a20d8  mtctr 6
  02a20dc  lfs 4, 216(3)
  02a20e0  fadds 3, 3, 4
  02a20e4  addic 3, 3, 16
  02a20e8  lfs 4, 4(7)
  02a20ec  lfs 5, 8(7)
  02a20f0  lfs 6, 12(7)
  02a20f4  addic 7, 7, 16
  02a20f8  fadds 3, 3, 4
  02a20fc  fadds 3, 3, 5
  02a2100  fadds 3, 3, 6
  02a2104  bdnz 0x2a20dc
  02a2108  fadds 3, 3, 29
  02a210c  fmadds 1, 3, 1, 2
  02a2110  fneg 1, 1
  02a2114  lfs 2, 56(28)
  02a2118  bl 0x502578
  02a211c  nop
  02a2120  fabs 6, 31
  02a2124  stfs 30, 164(1)
  02a2128  fabs 7, 30
  02a212c  stfs 1, 32(31)
  02a2130  lfs 2, 16(31)
  02a2134  fsubs 3, 6, 7
  02a2138  stfs 3, 168(1)
  02a213c  lwz 3, 164(1)
  02a2140  lfs 1, 164(1)
  02a2144  lfs 3, 20(31)
  02a2148  lfs 4, 24(31)
  02a214c  fabs 8, 1
  02a2150  lfs 5, 28(31)
  02a2154  rlwinm 3, 3, 3, 29, 29
  02a2158  lwz 4, 168(1)
  02a215c  lfs 1, 168(1)
  02a2160  rlwimi 3, 4, 2, 30, 30
  02a2164  fsub 9, 1, 28
  02a2168  fsub 10, 1, 28
  02a216c  rlwimi 3, 29, 4, 28, 28
  02a2170  ori 4, 30, 0
  02a2174  rlwimi 4, 3, 2, 26, 28
  02a2178  slwi 3, 3, 2
  02a217c  clrldi 4, 4, 32
  02a2180  fsel 7, 9, 6, 7
  02a2184  lfsx 31, 30, 3
  02a2188  lfs 1, 4(4)
  02a218c  fsel 6, 10, 8, 6
  02a2190  fcmpu 0, 7, 28
  02a2194  bt 1, 0x2a219c
  02a2198  b 0x2a22b0
  02a219c  fsubs 8, 6, 7
  02a21a0  fadds 6, 6, 7
  02a21a4  addic 3, 1, 16
  02a21a8  li 6, 2
  02a21ac  addic 5, 3, 184
  02a21b0  addic 4, 3, 168
  02a21b4  mtctr 6
  02a21b8  fdivs 6, 8, 6
  02a21bc  fmuls 7, 6, 6
  02a21c0  stfs 6, 196(1)
  02a21c4  stfs 6, 188(1)
  02a21c8  stfs 6, 192(1)
  02a21cc  stfs 6, 184(1)
  02a21d0  lfs 9, 196(1)
  02a21d4  lfs 10, 188(1)
  02a21d8  lfs 11, 192(1)
  02a21dc  fmuls 8, 7, 7
  02a21e0  fmuls 10, 10, 7
  02a21e4  fmuls 9, 9, 8
  02a21e8  fmuls 6, 8, 8
  02a21ec  fmuls 8, 11, 8
  02a21f0  stfs 10, 188(1)
  02a21f4  fmuls 7, 9, 7
  02a21f8  stfs 8, 192(1)
  02a21fc  stfs 7, 196(1)
  02a2200  lfs 7, 168(3)
  02a2204  fmuls 7, 7, 6
  02a2208  stfs 7, 184(3)
  02a220c  lfs 7, 4(4)
  02a2210  addic 4, 4, 8
  02a2214  fmuls 7, 7, 6
  02a2218  addic 3, 3, 8
  02a221c  stfs 7, 4(5)
  02a2220  addic 5, 5, 8
  02a2224  bdnz 0x2a2200
  02a2228  li 5, 4
  02a222c  ori 3, 1, 0
  02a2230  mtctr 5
  02a2234  lis 4, 115
  02a2238  addic 5, 3, 184
  02a223c  addic 4, 4, 22752
  02a2240  ori 7, 5, 0
  02a2244  lfs 6, 184(3)
  02a2248  lfs 7, 0(4)
  02a224c  fmuls 6, 6, 7
  02a2250  lfs 7, 4(4)
  02a2254  addic 4, 4, 8
  02a2258  stfs 6, 184(3)
  02a225c  lfs 6, 4(5)
  02a2260  addic 3, 3, 8
  02a2264  fmuls 6, 6, 7
  02a2268  stfs 6, 4(5)
  02a226c  addic 5, 5, 8
  02a2270  bdnz 0x2a2244
  02a2274  ori 3, 1, 0
  02a2278  mtctr 6
  02a227c  lfs 6, 184(3)
  02a2280  lfs 7, 4(7)
  02a2284  fadds 6, 28, 6
  02a2288  lfs 8, 8(7)
  02a228c  addic 3, 3, 16
  02a2290  lfs 28, 12(7)
  02a2294  addic 7, 7, 16
  02a2298  fadds 6, 6, 7
  02a229c  fadds 6, 6, 8
  02a22a0  fadds 28, 6, 28
  02a22a4  bdnz 0x2a227c
  02a22a8  fadds 28, 28, 29
  02a22ac  fmadds 28, 28, 31, 1
  02a22b0  lis 3, 149
  02a22b4  stfs 28, 36(31)
  02a22b8  li 4, 0
  02a22bc  addic 5, 3, 5056
  02a22c0  stw 4, 40(31)
  02a22c4  lfs 1, 320(5)
  02a22c8  lfs 6, 324(5)
  02a22cc  fsubs 2, 2, 1
  02a22d0  fsubs 3, 3, 6
  02a22d4  stfs 5, 140(1)
  02a22d8  lfs 5, 328(5)
  02a22dc  li 3, 1
  02a22e0  fsubs 4, 4, 5
  02a22e4  stfs 2, 128(1)
  02a22e8  stfs 3, 132(1)
  02a22ec  lfs 5, 60(28)
  02a22f0  fmuls 2, 2, 5
  02a22f4  fmuls 3, 3, 5
  02a22f8  fmuls 4, 4, 5
  02a22fc  fadds 1, 2, 1
  02a2300  stfs 2, 128(1)
  02a2304  stfs 3, 132(1)
  02a2308  stfs 4, 136(1)
  02a230c  stfs 1, 16(31)
  02a2310  lfs 1, 324(5)
  02a2314  fadds 1, 3, 1
  02a2318  stfs 1, 20(31)
  02a231c  lfs 1, 328(5)
  02a2320  fadds 1, 4, 1
  02a2324  stfs 1, 24(31)
  02a2328  b 0x2a2330
  02a232c  li 3, 0
  02a2330  ld 0, 368(1)
  02a2334  mtlr 0
  02a2338  lfd 24, 288(1)
  02a233c  lfd 25, 296(1)
  02a2340  lfd 26, 304(1)
  02a2344  lfd 27, 312(1)
  02a2348  lfd 28, 320(1)
  02a234c  lfd 29, 328(1)
  02a2350  lfd 30, 336(1)
  02a2354  lfd 31, 344(1)
  02a2358  ld 27, 248(1)
  02a235c  ld 28, 256(1)
  02a2360  ld 29, 264(1)
  02a2364  ld 30, 272(1)
  02a2368  ld 31, 280(1)
  02a236c  addi 1, 1, 352
  02a2370  blr

UpdateMoby_160:   # 0x2a2438, 0x1930 bytes
  02a2438  stdu 1, -928(1)
  02a243c  mflr 0
  02a2440  std 0, 944(1)
  02a2444  stfd 14, 784(1)
  02a2448  stfd 15, 792(1)
  02a244c  stfd 16, 800(1)
  02a2450  stfd 17, 808(1)
  02a2454  stfd 18, 816(1)
  02a2458  stfd 19, 824(1)
  02a245c  stfd 20, 832(1)
  02a2460  stfd 21, 840(1)
  02a2464  stfd 22, 848(1)
  02a2468  stfd 23, 856(1)
  02a246c  stfd 24, 864(1)
  02a2470  stfd 25, 872(1)
  02a2474  stfd 26, 880(1)
  02a2478  stfd 27, 888(1)
  02a247c  stfd 28, 896(1)
  02a2480  stfd 29, 904(1)
  02a2484  stfd 30, 912(1)
  02a2488  stfd 31, 920(1)
  02a248c  lis 4, 123
  02a2490  li 5, 16
  02a2494  addic 6, 4, -14144
  02a2498  li 9, -14144
  02a249c  li 7, 32
  02a24a0  li 10, 48
  02a24a4  li 8, 544
  02a24a8  lvx 2, 5, 6
  02a24ac  li 12, 560
  02a24b0  lvx 3, 9, 4
  02a24b4  lis 11, 42
  02a24b8  li 4, 576
  02a24bc  lvx 4, 7, 6
  02a24c0  li 7, 592
  02a24c4  lvx 5, 10, 6
  02a24c8  li 9, 64
  02a24cc  stvx 3, 8, 1
  02a24d0  li 8, 608
  02a24d4  stvx 2, 12, 1
  02a24d8  addi 5, 11, 9076
  02a24dc  std 24, 720(1)
  02a24e0  stvx 4, 4, 1
  02a24e4  stvx 5, 7, 1
  02a24e8  std 26, 736(1)
  02a24ec  li 24, 0
  02a24f0  lvx 2, 9, 6
  02a24f4  std 27, 744(1)
  02a24f8  lis 26, 114
  02a24fc  lis 27, 151
  02a2500  stvx 2, 8, 1
  02a2504  lfs 1, 0(5)
  02a2508  addic 27, 27, -25376
  02a250c  std 31, 776(1)
  02a2510  stw 24, 160(1)
  02a2514  ori 31, 3, 0
  02a2518  stw 24, 164(1)
  02a251c  lis 4, 16256
  02a2520  stw 24, 168(1)
  02a2524  stw 24, 172(1)
  02a2528  lfs 31, 4(5)
  02a252c  lfs 2, -3052(26)
  02a2530  stw 24, 192(1)
  02a2534  fmuls 2, 2, 31
  02a2538  stw 24, 196(1)
  02a253c  std 29, 760(1)
  02a2540  lbz 3, 8357(27)
  02a2544  lwz 29, 120(31)
  02a2548  cmpwi 3, 0
  02a254c  lhz 3, 52(31)
  02a2550  stfs 2, 168(1)
  02a2554  lfs 2, 8(5)
  02a2558  stw 4, 200(1)
  02a255c  stw 24, 204(1)
  02a2560  std 30, 768(1)
  02a2564  std 28, 752(1)
  02a2568  std 25, 728(1)
  02a256c  std 23, 712(1)
  02a2570  std 22, 704(1)
  02a2574  std 21, 696(1)
  02a2578  stfd 2, 656(1)
  02a257c  bt 2, 0x2a2594
  02a2580  lbz 4, 32(31)
  02a2584  cmpwi 4, 0
  02a2588  bf 2, 0x2a2594
  02a258c  ori 3, 3, 65
  02a2590  b 0x2a259c
  02a2594  li 4, -66
  02a2598  and 3, 3, 4
  02a259c  sth 3, 52(31)
  02a25a0  lwz 3, 48(29)
  02a25a4  stfs 1, 664(1)
  02a25a8  cmpwi 3, 0
  02a25ac  bt 2, 0x2a266c
  02a25b0  lbz 4, 32(3)
  02a25b4  stfs 1, 664(1)
  02a25b8  cmpwi 1, 4, 253
  02a25bc  cmpwi 4, 254
  02a25c0  cror 2, 2, 6
  02a25c4  bt 2, 0x2a266c
  02a25c8  lhz 3, 166(3)
  02a25cc  stfs 1, 664(1)
  02a25d0  cmpwi 3, 190
  02a25d4  bf 2, 0x2a266c
  02a25d8  lhz 3, 54(29)
  02a25dc  stfs 1, 664(1)
  02a25e0  cmpwi 3, 0
  02a25e4  bf 2, 0x2a266c
  02a25e8  lfs 2, 4(29)
  02a25ec  lfs 3, 0(29)
  02a25f0  fmuls 2, 2, 2
  02a25f4  lfs 4, 8(29)
  02a25f8  stfs 1, 664(1)
  02a25fc  fmadds 2, 3, 3, 2
  02a2600  fmadds 2, 4, 4, 2
  02a2604  fsqrts 2, 2
  02a2608  fcmpu 0, 2, 1
  02a260c  cror 6, 0, 2
  02a2610  bt 6, 0x2a266c
  02a2614  lwz 3, 764(27)
  02a2618  cmpwi 3, 0
  02a261c  bt 2, 0x2a2630
  02a2620  bl 0x1122ac
  02a2624  nop
  02a2628  cmpwi 3, 0
  02a262c  bf 2, 0x2a2644
  02a2630  ori 3, 29, 0
  02a2634  ori 4, 31, 0
  02a2638  li 5, 1
  02a263c  bl 0x2a1a48
  02a2640  b 0x2a266c
  02a2644  ori 3, 29, 0
  02a2648  ori 4, 31, 0
  02a264c  li 5, 0
  02a2650  bl 0x2a1a48
  02a2654  cmpwi 3, 0
  02a2658  bf 2, 0x2a266c
  02a265c  ori 3, 29, 0
  02a2660  ori 4, 31, 0
  02a2664  li 5, 2
  02a2668  bl 0x2a1a48
  02a266c  lbz 3, 32(31)
  02a2670  cmpwi 3, 0
  02a2674  bf 2, 0x2a2718
  02a2678  lwz 27, 4240(27)
  02a267c  cmpwi 27, 0
  02a2680  bt 2, 0x2a2690
  02a2684  lhz 3, 166(27)
  02a2688  cmpwi 3, 190
  02a268c  bt 2, 0x2a26a0
  02a2690  ori 3, 31, 0
  02a2694  bl 0xefb38
  02a2698  nop
  02a269c  b 0x2a3ce4
  02a26a0  lis 3, 16457
  02a26a4  stw 24, 212(1)
  02a26a8  addic 30, 1, 416
  02a26ac  ori 5, 3, 4059
  02a26b0  addic 4, 1, 208
  02a26b4  ori 3, 30, 0
  02a26b8  stw 5, 208(1)
  02a26bc  stw 24, 216(1)
  02a26c0  stw 24, 220(1)
  02a26c4  bl 0x500ca4
  02a26c8  nop
  02a26cc  addic 28, 1, 480
  02a26d0  lwz 3, 48(29)
  02a26d4  li 4, 0
  02a26d8  ori 5, 28, 0
  02a26dc  bl 0xf1038
  02a26e0  nop
  02a26e4  ori 3, 30, 0
  02a26e8  ori 4, 28, 0
  02a26ec  ori 5, 30, 0
  02a26f0  bl 0x50162c
  02a26f4  nop
  02a26f8  addic 3, 31, 192
  02a26fc  ori 4, 30, 0
  02a2700  bl 0x500fa8
  02a2704  nop
  02a2708  lhz 3, 52(31)
  02a270c  ori 3, 3, 256
  02a2710  sth 3, 52(31)
  02a2714  b 0x2a3ce4
  02a2718  rlwinm 3, 3, 0, 29, 29
  02a271c  cmpwi 3, 0
  02a2720  lhz 3, 52(31)
  02a2724  lfs 1, 16(31)
  02a2728  rlwimi 3, 24, 0, 23, 23
  02a272c  stw 24, 152(31)
  02a2730  lfs 2, 20(31)
  02a2734  sth 3, 52(31)
  02a2738  stfs 1, 176(1)
  02a273c  lfs 3, 24(31)
  02a2740  stfs 2, 180(1)
  02a2744  lfs 4, 28(31)
  02a2748  stfs 3, 184(1)
  02a274c  stfs 4, 188(1)
  02a2750  bf 2, 0x2a2884
  02a2754  lfs 4, 0(29)
  02a2758  lwz 3, 100(29)
  02a275c  fadds 1, 1, 4
  02a2760  cmpwi 3, 0
  02a2764  stfs 1, 16(31)
  02a2768  lfs 1, 4(29)
  02a276c  fadds 1, 2, 1
  02a2770  stfs 1, 20(31)
  02a2774  lfs 1, 8(29)
  02a2778  fadds 1, 3, 1
  02a277c  stfs 1, 24(31)
  02a2780  bf 2, 0x2a27a8
  02a2784  lis 3, 42
  02a2788  lis 4, 114
  02a278c  lfs 1, 8(29)
  02a2790  addi 3, 3, 9076
  02a2794  lfs 2, 12(3)
  02a2798  lfs 3, -3048(4)
  02a279c  fnmsubs 1, 3, 2, 1
  02a27a0  stfs 1, 8(29)
  02a27a4  b 0x2a2884
  02a27a8  lis 3, 42
  02a27ac  lis 4, 114
  02a27b0  addi 3, 3, 9076
  02a27b4  lfs 1, 12(3)
  02a27b8  lfs 2, -3048(4)
  02a27bc  lfs 30, 16(3)
  02a27c0  fmuls 1, 2, 1
  02a27c4  lfs 3, 8(29)
  02a27c8  lis 4, 114
  02a27cc  fnmsubs 1, 1, 30, 3
  02a27d0  stfs 1, 8(29)
  02a27d4  lfs 1, 20(3)
  02a27d8  lfs 2, -3056(4)
  02a27dc  fmuls 1, 2, 1
  02a27e0  fctiwz 1, 1
  02a27e4  stfd 1, 672(1)
  02a27e8  lwz 3, 676(1)
  02a27ec  addic 3, 3, -1
  02a27f0  extsw 3, 3
  02a27f4  bl 0xfc620
  02a27f8  nop
  02a27fc  cmpwi 3, 0
  02a2800  bf 2, 0x2a2884
  02a2804  addic 30, 31, 16
  02a2808  addic 28, 1, 224
  02a280c  ori 3, 30, 0
  02a2810  ori 4, 28, 0
  02a2814  bl 0x105f40
  02a2818  nop
  02a281c  lis 3, 42
  02a2820  lfs 2, 0(29)
  02a2824  fmr 29, 1
  02a2828  addi 25, 3, 9076
  02a282c  lfs 3, 24(25)
  02a2830  fmuls 1, 2, 3
  02a2834  fmr 2, 30
  02a2838  stfs 1, 224(1)
  02a283c  lfs 1, 4(29)
  02a2840  fmuls 1, 1, 3
  02a2844  stfs 1, 228(1)
  02a2848  lfs 1, 8(29)
  02a284c  fmuls 1, 1, 3
  02a2850  stfs 1, 232(1)
  02a2854  lfs 1, 12(29)
  02a2858  stfs 1, 236(1)
  02a285c  lfs 1, 28(25)
  02a2860  bl 0xfcbe8
  02a2864  nop
  02a2868  lfs 3, 32(25)
  02a286c  ori 3, 30, 0
  02a2870  ori 4, 28, 0
  02a2874  fmr 2, 29
  02a2878  fmuls 1, 1, 3
  02a287c  bl 0x12a440
  02a2880  nop
  02a2884  lis 3, 42
  02a2888  lis 4, 131
  02a288c  stw 31, 384(1)
  02a2890  addi 3, 3, 9076
  02a2894  lis 5, 16448
  02a2898  li 30, 1
  02a289c  stw 4, 388(1)
  02a28a0  lfs 30, 36(3)
  02a28a4  stw 5, 396(1)
  02a28a8  lfs 1, 0(29)
  02a28ac  addic 3, 1, 368
  02a28b0  stfs 1, 368(1)
  02a28b4  ori 4, 3, 0
  02a28b8  lfs 1, 4(29)
  02a28bc  stw 30, 400(1)
  02a28c0  stfs 1, 372(1)
  02a28c4  lfs 1, 8(29)
  02a28c8  lfd 2, 656(1)
  02a28cc  stfs 1, 376(1)
  02a28d0  lfs 3, 12(29)
  02a28d4  fmr 1, 2
  02a28d8  stfs 3, 380(1)
  02a28dc  bl 0x5e84c0
  02a28e0  nop
  02a28e4  lis 3, 17839
  02a28e8  li 4, 2
  02a28ec  ori 7, 3, 57190
  02a28f0  lbz 3, 32(31)
  02a28f4  lis 5, 16256
  02a28f8  lhz 8, 166(31)
  02a28fc  stb 30, 393(1)
  02a2900  stb 4, 392(1)
  02a2904  rlwinm 4, 3, 0, 29, 29
  02a2908  stw 5, 376(1)
  02a290c  stw 7, 380(1)
  02a2910  cmpwi 4, 0
  02a2914  sth 8, 394(1)
  02a2918  bf 2, 0x2a31a4
  02a291c  addic 28, 31, 16
  02a2920  addic 3, 1, 176
  02a2924  ori 4, 28, 0
  02a2928  addic 7, 1, 368
  02a292c  li 5, 16
  02a2930  ori 6, 31, 0
  02a2934  bl 0x57820
  02a2938  nop
  02a293c  ori 4, 3, 0
  02a2940  lbz 3, 32(31)
  02a2944  cmpwi 4, 0
  02a2948  bt 2, 0x2a31a4
  02a294c  lwz 3, 100(29)
  02a2950  cmpwi 3, 0
  02a2954  bf 2, 0x2a2ad0
  02a2958  bl 0x60780
  02a295c  nop
  02a2960  cmpwi 3, 0
  02a2964  bf 2, 0x2a2ad0
  02a2968  lwz 3, 8(29)
  02a296c  cmpwi 3, 0
  02a2970  bf 0, 0x2a2ad0
  02a2974  lis 3, 230
  02a2978  lis 4, 230
  02a297c  lis 5, 42
  02a2980  li 9, 1
  02a2984  addi 30, 5, 9076
  02a2988  lwz 3, -21888(3)
  02a298c  lwz 4, -21880(4)
  02a2990  lfs 1, 16(31)
  02a2994  lfs 2, 20(31)
  02a2998  lfs 3, 40(30)
  02a299c  extsw 4, 4
  02a29a0  lfs 4, 44(30)
  02a29a4  bl 0x17bd90
  02a29a8  nop
  02a29ac  li 3, 1
  02a29b0  stw 24, 12(29)
  02a29b4  fmr 1, 31
  02a29b8  stw 24, 4(29)
  02a29bc  stw 24, 0(29)
  02a29c0  stw 3, 100(29)
  02a29c4  lfs 3, 48(30)
  02a29c8  lfs 2, -3052(26)
  02a29cc  lis 3, 161
  02a29d0  fmuls 2, 2, 3
  02a29d4  addic 4, 3, 2368
  02a29d8  addic 3, 1, 240
  02a29dc  stfs 2, 8(29)
  02a29e0  lfs 2, 16(31)
  02a29e4  lfs 3, 20(31)
  02a29e8  stfs 2, 240(1)
  02a29ec  stfs 3, 244(1)
  02a29f0  lfs 2, 40(4)
  02a29f4  stfs 2, 248(1)
  02a29f8  bl 0x456478
  02a29fc  nop
  02a2a00  cmpwi 3, 0
  02a2a04  bt 2, 0x2a2a10
  02a2a08  li 4, 112
  02a2a0c  stb 4, 35(3)
  02a2a10  lis 3, 42
  02a2a14  lfs 28, 664(1)
  02a2a18  ori 30, 24, 0
  02a2a1c  addi 3, 3, 9076
  02a2a20  lfs 29, 20(3)
  02a2a24  bl 0xfcc68
  02a2a28  nop
  02a2a2c  fmr 27, 1
  02a2a30  fmr 1, 28
  02a2a34  lfs 2, -3052(26)
  02a2a38  fmuls 2, 2, 30
  02a2a3c  bl 0xfcbe8
  02a2a40  nop
  02a2a44  fmr 26, 1
  02a2a48  fmr 1, 27
  02a2a4c  bl 0x5e8078
  02a2a50  nop
  02a2a54  fmuls 2, 1, 26
  02a2a58  fmr 1, 27
  02a2a5c  stfs 2, 256(1)
  02a2a60  bl 0x5e8128
  02a2a64  nop
  02a2a68  fmuls 3, 1, 26
  02a2a6c  lfs 2, -3052(26)
  02a2a70  fmuls 1, 2, 30
  02a2a74  fmuls 2, 2, 29
  02a2a78  stfs 3, 260(1)
  02a2a7c  bl 0xfcbe8
  02a2a80  nop
  02a2a84  li 3, 90
  02a2a88  stfs 1, 264(1)
  02a2a8c  li 4, 120
  02a2a90  bl 0xfe484
  02a2a94  nop
  02a2a98  ori 28, 3, 0
  02a2a9c  li 3, 2
  02a2aa0  bl 0xfc620
  02a2aa4  nop
  02a2aa8  ori 5, 3, 0
  02a2aac  addic 3, 1, 240
  02a2ab0  addic 4, 1, 256
  02a2ab4  ori 6, 28, 0
  02a2ab8  bl 0x12ab08
  02a2abc  nop
  02a2ac0  addic 30, 30, 1
  02a2ac4  cmpwi 30, 16
  02a2ac8  bt 0, 0x2a2a24
  02a2acc  b 0x2a3378
  02a2ad0  lwz 3, 100(29)
  02a2ad4  cmpwi 3, 0
  02a2ad8  bf 2, 0x2a2aec
  02a2adc  bl 0x60780
  02a2ae0  nop
  02a2ae4  cmpwi 3, 0
  02a2ae8  bt 2, 0x2a3378
  02a2aec  lis 25, 161
  02a2af0  addic 25, 25, 2368
  02a2af4  lwz 6, 24(25)
  02a2af8  cmpwi 6, 0
  02a2afc  bt 2, 0x2a2bb4
  02a2b00  ori 3, 6, 0
  02a2b04  bl 0x10af88
  02a2b08  nop
  02a2b0c  ori 7, 3, 0
  02a2b10  lwz 6, 24(25)
  02a2b14  lhz 3, 166(31)
  02a2b18  lwz 4, 8320(27)
  02a2b1c  cmpwi 7, 0
  02a2b20  lbz 5, 32(31)
  02a2b24  lfs 1, 32(25)
  02a2b28  lfs 2, 36(25)
  02a2b2c  lfs 3, 40(25)
  02a2b30  lfs 4, 44(25)
  02a2b34  bf 2, 0x2a2b48
  02a2b38  lhz 7, 52(6)
  02a2b3c  rlwinm 7, 7, 0, 19, 19
  02a2b40  cmpwi 7, 0
  02a2b44  bt 2, 0x2a2bb4
  02a2b48  cmpw 1, 6, 4
  02a2b4c  lhz 4, 166(6)
  02a2b50  extsh 3, 3
  02a2b54  extsh 4, 4
  02a2b58  cmpw 4, 3
  02a2b5c  cror 2, 2, 6
  02a2b60  bt 2, 0x2a2bb4
  02a2b64  lwz 3, 48(29)
  02a2b68  cmpw 6, 3
  02a2b6c  bt 2, 0x2a2bb4
  02a2b70  li 3, 1
  02a2b74  cmpwi 5, 1
  02a2b78  stb 3, 188(31)
  02a2b7c  bt 2, 0x2a3378
  02a2b80  lis 3, 42
  02a2b84  stfs 1, 16(31)
  02a2b88  stfs 2, 20(31)
  02a2b8c  li 4, 0
  02a2b90  addi 5, 3, 9076
  02a2b94  stfs 3, 24(31)
  02a2b98  stfs 4, 28(31)
  02a2b9c  ori 3, 28, 0
  02a2ba0  lfs 1, 40(5)
  02a2ba4  bl 0xffb70
  02a2ba8  nop
  02a2bac  stfs 1, 24(31)
  02a2bb0  b 0x2a3378
  02a2bb4  cmpwi 6, 0
  02a2bb8  bt 2, 0x2a2e4c
  02a2bbc  lhz 3, 166(6)
  02a2bc0  lhz 4, 166(31)
  02a2bc4  extsh 3, 3
  02a2bc8  extsh 4, 4
  02a2bcc  cmpw 3, 4
  02a2bd0  bf 2, 0x2a2e34
  02a2bd4  lfs 1, 16(31)
  02a2bd8  lfs 2, 16(6)
  02a2bdc  lis 3, 42
  02a2be0  fsubs 1, 1, 2
  02a2be4  lfs 2, -3052(26)
  02a2be8  addi 3, 3, 9076
  02a2bec  stfs 1, 64(25)
  02a2bf0  lfs 1, 20(31)
  02a2bf4  lfs 3, 20(6)
  02a2bf8  fsubs 1, 1, 3
  02a2bfc  stfs 1, 68(25)
  02a2c00  lfs 1, 24(31)
  02a2c04  lfs 3, 24(6)
  02a2c08  fsubs 1, 1, 3
  02a2c0c  stfs 1, 72(25)
  02a2c10  lfs 1, 28(31)
  02a2c14  stfs 1, 76(25)
  02a2c18  lfs 1, 52(3)
  02a2c1c  lfs 3, 8(29)
  02a2c20  fmuls 1, 2, 1
  02a2c24  fcmpu 0, 3, 1
  02a2c28  cror 6, 1, 2
  02a2c2c  bt 6, 0x2a2ca4
  02a2c30  li 5, 1
  02a2c34  addic 30, 1, 160
  02a2c38  addic 28, 25, 64
  02a2c3c  ori 4, 29, 0
  02a2c40  stb 5, 188(31)
  02a2c44  ori 3, 30, 0
  02a2c48  lfs 1, 32(25)
  02a2c4c  ori 5, 28, 0
  02a2c50  stfs 1, 16(31)
  02a2c54  lfs 1, 36(25)
  02a2c58  stfs 1, 20(31)
  02a2c5c  lfs 1, 40(25)
  02a2c60  stfs 1, 24(31)
  02a2c64  lfs 1, 44(25)
  02a2c68  stfs 1, 28(31)
  02a2c6c  bl 0x500608
  02a2c70  nop
  02a2c74  lfs 1, -3052(26)
  02a2c78  ori 3, 30, 0
  02a2c7c  ori 4, 30, 0
  02a2c80  fmuls 1, 1, 31
  02a2c84  bl 0x5e7f98
  02a2c88  nop
  02a2c8c  addic 3, 1, 192
  02a2c90  lfd 1, 656(1)
  02a2c94  ori 4, 28, 0
  02a2c98  bl 0x5e7f98
  02a2c9c  nop
  02a2ca0  b 0x2a3378
  02a2ca4  lfs 1, 32(25)
  02a2ca8  lis 3, 42
  02a2cac  stfs 1, 16(31)
  02a2cb0  lfs 1, 36(25)
  02a2cb4  addi 30, 3, 9076
  02a2cb8  lis 3, 114
  02a2cbc  stfs 1, 20(31)
  02a2cc0  lfs 1, 40(25)
  02a2cc4  addic 28, 1, 272
  02a2cc8  addic 23, 25, 64
  02a2ccc  stfs 1, 24(31)
  02a2cd0  lfs 1, 44(25)
  02a2cd4  ori 4, 23, 0
  02a2cd8  stfs 1, 28(31)
  02a2cdc  lfs 1, 56(30)
  02a2ce0  lfs 2, -3048(3)
  02a2ce4  ori 3, 28, 0
  02a2ce8  fmuls 1, 2, 1
  02a2cec  bl 0x5e7f98
  02a2cf0  nop
  02a2cf4  lfs 1, 16(31)
  02a2cf8  lfs 2, 272(1)
  02a2cfc  ori 3, 29, 0
  02a2d00  lfs 3, 20(31)
  02a2d04  ori 4, 29, 0
  02a2d08  fadds 1, 1, 2
  02a2d0c  ori 5, 23, 0
  02a2d10  lfs 2, 276(1)
  02a2d14  lfs 4, 24(31)
  02a2d18  fadds 2, 3, 2
  02a2d1c  lfs 3, 280(1)
  02a2d20  fadds 3, 4, 3
  02a2d24  stfs 1, 16(31)
  02a2d28  stfs 2, 20(31)
  02a2d2c  stfs 3, 24(31)
  02a2d30  bl 0x500608
  02a2d34  nop
  02a2d38  lfs 3, 60(30)
  02a2d3c  ori 3, 28, 0
  02a2d40  lfs 2, 0(29)
  02a2d44  ori 4, 23, 0
  02a2d48  lfs 4, 4(29)
  02a2d4c  lfs 5, 8(29)
  02a2d50  fmuls 2, 2, 3
  02a2d54  lfd 1, 656(1)
  02a2d58  fmuls 4, 4, 3
  02a2d5c  fmuls 3, 5, 3
  02a2d60  stfs 2, 0(29)
  02a2d64  stfs 4, 4(29)
  02a2d68  stfs 3, 8(29)
  02a2d6c  bl 0x5e7f98
  02a2d70  nop
  02a2d74  lfs 29, 64(25)
  02a2d78  lfs 1, 72(31)
  02a2d7c  lfs 28, 68(25)
  02a2d80  lfs 27, 72(25)
  02a2d84  bl 0x5e8078
  02a2d88  nop
  02a2d8c  lfs 2, 72(31)
  02a2d90  fmr 26, 1
  02a2d94  fmr 1, 2
  02a2d98  bl 0x5e8128
  02a2d9c  nop
  02a2da0  fmuls 2, 28, 1
  02a2da4  lfs 1, 72(31)
  02a2da8  fmadds 26, 29, 26, 2
  02a2dac  bl 0x5e8078
  02a2db0  nop
  02a2db4  lfs 2, 72(31)
  02a2db8  fmr 25, 1
  02a2dbc  fmr 1, 2
  02a2dc0  bl 0x5e8128
  02a2dc4  nop
  02a2dc8  fmuls 2, 27, 27
  02a2dcc  fmuls 1, 29, 1
  02a2dd0  lfs 29, 64(31)
  02a2dd4  fmadds 3, 26, 26, 2
  02a2dd8  fmsubs 2, 28, 25, 1
  02a2ddc  fsqrts 1, 3
  02a2de0  bl 0x5e8338
  02a2de4  nop
  02a2de8  lfs 28, 64(30)
  02a2dec  fmr 3, 28
  02a2df0  fneg 2, 1
  02a2df4  fmr 1, 29
  02a2df8  bl 0x4d04e0
  02a2dfc  nop
  02a2e00  stfs 1, 64(31)
  02a2e04  fmr 2, 26
  02a2e08  fmr 1, 27
  02a2e0c  lfs 29, 68(31)
  02a2e10  bl 0x5e8338
  02a2e14  nop
  02a2e18  fmr 2, 1
  02a2e1c  fmr 1, 29
  02a2e20  fmr 3, 28
  02a2e24  bl 0x4d04e0
  02a2e28  nop
  02a2e2c  stfs 1, 68(31)
  02a2e30  b 0x2a3378
  02a2e34  lwz 3, 8320(27)
  02a2e38  cmpw 6, 3
  02a2e3c  bt 2, 0x2a2e4c
  02a2e40  lwz 3, 48(29)
  02a2e44  cmpw 6, 3
  02a2e48  bf 2, 0x2a2e58
  02a2e4c  lwz 3, 28(25)
  02a2e50  cmpwi 3, 0
  02a2e54  bf 1, 0x2a3378
  02a2e58  lwz 3, 100(29)
  02a2e5c  cmpwi 3, 0
  02a2e60  bf 2, 0x2a2e98
  02a2e64  bl 0x60780
  02a2e68  nop
  02a2e6c  cmpwi 3, 0
  02a2e70  bt 2, 0x2a2e98
  02a2e74  lis 3, 42
  02a2e78  lfs 1, -3052(26)
  02a2e7c  addi 3, 3, 9076
  02a2e80  lfs 2, 52(3)
  02a2e84  lfs 3, 8(29)
  02a2e88  fmuls 1, 1, 2
  02a2e8c  fcmpu 0, 3, 1
  02a2e90  cror 6, 1, 2
  02a2e94  bt 6, 0x2a2f0c
  02a2e98  li 5, 1
  02a2e9c  addic 30, 1, 160
  02a2ea0  addic 28, 25, 64
  02a2ea4  ori 4, 29, 0
  02a2ea8  stb 5, 188(31)
  02a2eac  ori 3, 30, 0
  02a2eb0  lfs 1, 32(25)
  02a2eb4  ori 5, 28, 0
  02a2eb8  stfs 1, 16(31)
  02a2ebc  lfs 1, 36(25)
  02a2ec0  stfs 1, 20(31)
  02a2ec4  lfs 1, 40(25)
  02a2ec8  stfs 1, 24(31)
  02a2ecc  lfs 1, 44(25)
  02a2ed0  stfs 1, 28(31)
  02a2ed4  bl 0x500608
  02a2ed8  nop
  02a2edc  lfs 1, -3052(26)
  02a2ee0  ori 3, 30, 0
  02a2ee4  ori 4, 30, 0
  02a2ee8  fmuls 1, 1, 31
  02a2eec  bl 0x5e7f98
  02a2ef0  nop
  02a2ef4  addic 3, 1, 192
  02a2ef8  lfd 1, 656(1)
  02a2efc  ori 4, 28, 0
  02a2f00  bl 0x5e7f98
  02a2f04  nop
  02a2f08  b 0x2a3378
  02a2f0c  lwz 3, 24(25)
  02a2f10  ori 30, 24, 0
  02a2f14  cmpwi 3, 0
  02a2f18  bt 2, 0x2a2f28
  02a2f1c  bl 0x1122ac
  02a2f20  nop
  02a2f24  ori 30, 3, 0
  02a2f28  lfs 1, 32(25)
  02a2f2c  lis 3, 42
  02a2f30  addic 22, 1, 288
  02a2f34  stfs 1, 16(31)
  02a2f38  lfs 1, 36(25)
  02a2f3c  addi 23, 3, 9076
  02a2f40  lis 3, 114
  02a2f44  stfs 1, 20(31)
  02a2f48  lfs 1, 40(25)
  02a2f4c  addic 21, 25, 64
  02a2f50  stfs 1, 24(31)
  02a2f54  ori 4, 21, 0
  02a2f58  lfs 1, 44(25)
  02a2f5c  stfs 1, 28(31)
  02a2f60  lfs 2, -3048(3)
  02a2f64  lfs 1, 56(23)
  02a2f68  ori 3, 22, 0
  02a2f6c  fmuls 1, 2, 1
  02a2f70  bl 0x5e7f98
  02a2f74  nop
  02a2f78  lfs 1, 16(31)
  02a2f7c  ori 3, 29, 0
  02a2f80  lfs 2, 288(1)
  02a2f84  ori 4, 29, 0
  02a2f88  lfs 3, 20(31)
  02a2f8c  ori 5, 21, 0
  02a2f90  fadds 1, 1, 2
  02a2f94  lfs 2, 292(1)
  02a2f98  lfs 4, 24(31)
  02a2f9c  fadds 2, 3, 2
  02a2fa0  lfs 3, 296(1)
  02a2fa4  fadds 3, 4, 3
  02a2fa8  stfs 1, 16(31)
  02a2fac  stfs 2, 20(31)
  02a2fb0  stfs 3, 24(31)
  02a2fb4  bl 0x500608
  02a2fb8  nop
  02a2fbc  lfs 3, 68(23)
  02a2fc0  lfs 2, 0(29)
  02a2fc4  ori 3, 22, 0
  02a2fc8  lfs 4, 4(29)
  02a2fcc  ori 4, 21, 0
  02a2fd0  lfs 5, 8(29)
  02a2fd4  fmuls 2, 2, 3
  02a2fd8  fmuls 4, 4, 3
  02a2fdc  lfd 1, 656(1)
  02a2fe0  fmuls 3, 5, 3
  02a2fe4  stfs 2, 0(29)
  02a2fe8  stfs 4, 4(29)
  02a2fec  stfs 3, 8(29)
  02a2ff0  bl 0x5e7f98
  02a2ff4  nop
  02a2ff8  lfs 1, 292(1)
  02a2ffc  lfs 2, 196(1)
  02a3000  lfs 3, 288(1)
  02a3004  fmuls 1, 1, 2
  02a3008  lfs 2, 192(1)
  02a300c  lfs 4, 296(1)
  02a3010  lfs 5, 200(1)
  02a3014  lfs 6, 72(23)
  02a3018  fmadds 1, 3, 2, 1
  02a301c  fmadds 1, 4, 5, 1
  02a3020  fcmpu 0, 1, 6
  02a3024  cror 6, 0, 2
  02a3028  bt 6, 0x2a30dc
  02a302c  lis 3, 42
  02a3030  li 4, 0
  02a3034  addi 5, 3, 9076
  02a3038  ori 3, 28, 0
  02a303c  lfs 1, 40(5)
  02a3040  bl 0xffb70
  02a3044  nop
  02a3048  lfs 2, 24(31)
  02a304c  fcmpu 0, 2, 1
  02a3050  cror 6, 1, 2
  02a3054  bt 6, 0x2a305c
  02a3058  stfs 1, 24(31)
  02a305c  lfs 1, 4(29)
  02a3060  lfs 2, 0(29)
  02a3064  fmuls 1, 1, 1
  02a3068  stw 24, 8(29)
  02a306c  cmpwi 1, 30, 0
  02a3070  fmadds 1, 2, 2, 1
  02a3074  lfs 2, -3052(26)
  02a3078  fsqrts 1, 1
  02a307c  fcmpu 0, 1, 2
  02a3080  bt 0, 0x2a3088
  02a3084  bt 6, 0x2a30dc
  02a3088  stw 24, 12(29)
  02a308c  cmpwi 1, 30, 0
  02a3090  stw 24, 8(29)
  02a3094  stw 24, 4(29)
  02a3098  stw 24, 0(29)
  02a309c  lbz 3, 32(31)
  02a30a0  ori 3, 3, 4
  02a30a4  stb 3, 32(31)
  02a30a8  lwz 3, 24(25)
  02a30ac  cmpwi 3, 0
  02a30b0  cror 2, 2, 6
  02a30b4  bt 2, 0x2a30dc
  02a30b8  ori 4, 3, 0
  02a30bc  addic 6, 31, 64
  02a30c0  ori 5, 28, 0
  02a30c4  addic 7, 29, 64
  02a30c8  addic 8, 29, 80
  02a30cc  stw 4, 96(29)
  02a30d0  ori 3, 31, 0
  02a30d4  bl 0x1124c0
  02a30d8  nop
  02a30dc  lfs 29, 64(25)
  02a30e0  lfs 1, 72(31)
  02a30e4  lfs 28, 68(25)
  02a30e8  lfs 27, 72(25)
  02a30ec  bl 0x5e8078
  02a30f0  nop
  02a30f4  lfs 2, 72(31)
  02a30f8  fmr 26, 1
  02a30fc  fmr 1, 2
  02a3100  bl 0x5e8128
  02a3104  nop
  02a3108  fmuls 2, 28, 1
  02a310c  lfs 1, 72(31)
  02a3110  fmadds 26, 29, 26, 2
  02a3114  bl 0x5e8078
  02a3118  nop
  02a311c  lfs 2, 72(31)
  02a3120  fmr 25, 1
  02a3124  fmr 1, 2
  02a3128  bl 0x5e8128
  02a312c  nop
  02a3130  fmuls 2, 27, 27
  02a3134  fmuls 1, 29, 1
  02a3138  lfs 29, 64(31)
  02a313c  fmadds 3, 26, 26, 2
  02a3140  fmsubs 2, 28, 25, 1
  02a3144  fsqrts 1, 3
  02a3148  bl 0x5e8338
  02a314c  nop
  02a3150  lis 3, 42
  02a3154  addi 3, 3, 9076
  02a3158  fneg 2, 1
  02a315c  fmr 1, 29
  02a3160  lfs 29, 64(3)
  02a3164  fmr 3, 29
  02a3168  bl 0x4d04e0
  02a316c  nop
  02a3170  stfs 1, 64(31)
  02a3174  fmr 2, 26
  02a3178  fmr 1, 27
  02a317c  lfs 28, 68(31)
  02a3180  bl 0x5e8338
  02a3184  nop
  02a3188  fmr 2, 1
  02a318c  fmr 1, 28
  02a3190  fmr 3, 29
  02a3194  bl 0x4d04e0
  02a3198  nop
  02a319c  stfs 1, 68(31)
  02a31a0  b 0x2a3378
  02a31a4  rlwinm 3, 3, 0, 29, 29
  02a31a8  cmpwi 3, 0
  02a31ac  bt 2, 0x2a3378
  02a31b0  lis 3, 42
  02a31b4  addic 30, 31, 16
  02a31b8  addi 5, 3, 9076
  02a31bc  ori 3, 30, 0
  02a31c0  li 4, 0
  02a31c4  lfs 1, 40(5)
  02a31c8  bl 0xffb70
  02a31cc  nop
  02a31d0  lwz 3, 96(29)
  02a31d4  cmpwi 3, 0
  02a31d8  bt 2, 0x2a3224
  02a31dc  lbz 4, 32(3)
  02a31e0  cmpwi 4, 254
  02a31e4  cmpwi 1, 4, 253
  02a31e8  bt 2, 0x2a31f0
  02a31ec  bf 6, 0x2a3200
  02a31f0  li 3, 1
  02a31f4  stb 3, 188(31)
  02a31f8  stw 24, 96(29)
  02a31fc  b 0x2a32ac
  02a3200  ori 4, 3, 0
  02a3204  addic 5, 29, 64
  02a3208  ori 7, 30, 0
  02a320c  addic 6, 29, 80
  02a3210  addic 8, 31, 64
  02a3214  ori 3, 31, 0
  02a3218  bl 0x112678
  02a321c  nop
  02a3220  b 0x2a32ac
  02a3224  lis 3, 42
  02a3228  lis 4, 114
  02a322c  lfs 2, 24(31)
  02a3230  addi 3, 3, 9076
  02a3234  fsubs 2, 2, 1
  02a3238  lfs 3, 76(3)
  02a323c  lfs 4, -3048(4)
  02a3240  fmuls 3, 4, 3
  02a3244  fcmpu 0, 2, 3
  02a3248  cror 6, 1, 2
  02a324c  bt 6, 0x2a3258
  02a3250  stfs 1, 24(31)
  02a3254  b 0x2a32ac
  02a3258  li 3, 1
  02a325c  vspltisw 3, -1
  02a3260  lis 5, 42
  02a3264  li 4, 80
  02a3268  addi 5, 5, 9076
  02a326c  stb 3, 32(31)
  02a3270  stw 24, 12(29)
  02a3274  lis 3, 114
  02a3278  stw 24, 8(29)
  02a327c  li 6, -3056
  02a3280  stw 24, 4(29)
  02a3284  stw 24, 0(29)
  02a3288  <unknown>
  02a328c  vslw 3, 3, 3
  02a3290  vspltw 2, 2, 0
  02a3294  <unknown>
  02a3298  li 3, 52
  02a329c  vmaddfp 2, 4, 2, 3
  02a32a0  vctsxs 2, 2, 0
  02a32a4  vsplth 2, 2, 1
  02a32a8  stvehx 2, 3, 29
  02a32ac  lis 3, 161
  02a32b0  lfs 1, 72(31)
  02a32b4  addic 3, 3, 2368
  02a32b8  lfs 29, 64(3)
  02a32bc  lfs 28, 68(3)
  02a32c0  lfs 27, 72(3)
  02a32c4  bl 0x5e8078
  02a32c8  nop
  02a32cc  lfs 2, 72(31)
  02a32d0  fmr 26, 1
  02a32d4  fmr 1, 2
  02a32d8  bl 0x5e8128
  02a32dc  nop
  02a32e0  fmuls 2, 28, 1
  02a32e4  lfs 1, 72(31)
  02a32e8  fmadds 26, 29, 26, 2
  02a32ec  bl 0x5e8078
  02a32f0  nop
  02a32f4  lfs 2, 72(31)
  02a32f8  fmr 25, 1
  02a32fc  fmr 1, 2
  02a3300  bl 0x5e8128
  02a3304  nop
  02a3308  fmuls 2, 27, 27
  02a330c  fmuls 1, 29, 1
  02a3310  lfs 29, 64(31)
  02a3314  fmadds 3, 26, 26, 2
  02a3318  fmsubs 2, 28, 25, 1
  02a331c  fsqrts 1, 3
  02a3320  bl 0x5e8338
  02a3324  nop
  02a3328  lis 3, 42
  02a332c  addi 3, 3, 9076
  02a3330  fneg 2, 1
  02a3334  fmr 1, 29
  02a3338  lfs 29, 84(3)
  02a333c  fmr 3, 29
  02a3340  bl 0x4d04e0
  02a3344  nop
  02a3348  stfs 1, 64(31)
  02a334c  fmr 2, 26
  02a3350  fmr 1, 27
  02a3354  lfs 28, 68(31)
  02a3358  bl 0x5e8338
  02a335c  nop
  02a3360  fmr 2, 1
  02a3364  fmr 1, 28
  02a3368  fmr 3, 29
  02a336c  bl 0x4d04e0
  02a3370  nop
  02a3374  stfs 1, 68(31)
  02a3378  addic 3, 29, 52
  02a337c  bl 0x4fffb4
  02a3380  nop
  02a3384  cmpwi 3, 0
  02a3388  bt 2, 0x2a33e0
  02a338c  lbz 3, 32(31)
  02a3390  lbz 4, 83(31)
  02a3394  ori 3, 3, 2
  02a3398  cmpwi 4, 1
  02a339c  stb 3, 32(31)
  02a33a0  bt 2, 0x2a33e0
  02a33a4  lis 3, 42
  02a33a8  lis 4, 114
  02a33ac  addi 3, 3, 9076
  02a33b0  li 5, 0
  02a33b4  lfs 1, 88(3)
  02a33b8  lfs 2, -3056(4)
  02a33bc  ori 3, 31, 0
  02a33c0  li 4, 1
  02a33c4  fmuls 1, 2, 1
  02a33c8  fctiwz 1, 1
  02a33cc  stfd 1, 672(1)
  02a33d0  lwz 6, 676(1)
  02a33d4  extsw 6, 6
  02a33d8  bl 0xfddc0
  02a33dc  nop
  02a33e0  lis 4, 131
  02a33e4  ori 3, 31, 0
  02a33e8  li 5, 0
  02a33ec  bl 0x10675c
  02a33f0  nop
  02a33f4  lbz 4, 32(31)
  02a33f8  lwz 5, 8320(27)
  02a33fc  cmpwi 3, 0
  02a3400  lfs 1, 16(31)
  02a3404  lfs 2, 20(31)
  02a3408  lfs 3, 24(31)
  02a340c  lfs 4, 136(27)
  02a3410  bt 2, 0x2a3440
  02a3414  lwz 3, 32(3)
  02a3418  cmpwi 3, 0
  02a341c  bt 2, 0x2a3440
  02a3420  lhz 3, 166(3)
  02a3424  lhz 6, 166(31)
  02a3428  extsh 3, 3
  02a342c  extsh 6, 6
  02a3430  cmpw 3, 6
  02a3434  bt 2, 0x2a3440
  02a3438  li 3, 1
  02a343c  stb 3, 188(31)
  02a3440  li 3, 255
  02a3444  rlwinm 6, 4, 0, 30, 30
  02a3448  cmpwi 6, 0
  02a344c  stb 3, 164(31)
  02a3450  bt 2, 0x2a3550
  02a3454  rlwinm 3, 4, 0, 29, 29
  02a3458  cmpwi 3, 0
  02a345c  bf 2, 0x2a346c
  02a3460  li 3, 1
  02a3464  stb 3, 188(31)
  02a3468  b 0x2a3550
  02a346c  lfs 5, 20(5)
  02a3470  lfs 6, 16(5)
  02a3474  fsubs 5, 5, 2
  02a3478  fsubs 6, 6, 1
  02a347c  lis 3, 42
  02a3480  addi 3, 3, 9076
  02a3484  fmuls 5, 5, 5
  02a3488  fmadds 5, 6, 6, 5
  02a348c  lfs 6, 40(3)
  02a3490  fsqrts 5, 5
  02a3494  fcmpu 0, 5, 6
  02a3498  cror 6, 1, 2
  02a349c  bt 6, 0x2a34cc
  02a34a0  fsubs 4, 3, 4
  02a34a4  lis 3, 42
  02a34a8  addi 3, 3, 9076
  02a34ac  lfs 5, 24(3)
  02a34b0  fabs 4, 4
  02a34b4  fcmpu 0, 4, 5
  02a34b8  cror 6, 1, 2
  02a34bc  bt 6, 0x2a34cc
  02a34c0  li 3, 1
  02a34c4  stb 3, 188(31)
  02a34c8  b 0x2a3550
  02a34cc  lis 3, 164
  02a34d0  lwz 3, -28500(3)
  02a34d4  cmpwi 3, 0
  02a34d8  bt 2, 0x2a3550
  02a34dc  lbz 4, 32(3)
  02a34e0  cmpwi 4, 128
  02a34e4  bf 0, 0x2a3544
  02a34e8  lhz 4, 52(3)
  02a34ec  rlwinm 4, 4, 0, 19, 19
  02a34f0  cmpwi 4, 0
  02a34f4  bt 2, 0x2a3544
  02a34f8  lfs 4, 20(3)
  02a34fc  lfs 5, 16(3)
  02a3500  fsubs 4, 2, 4
  02a3504  fsubs 5, 1, 5
  02a3508  fmuls 4, 4, 4
  02a350c  fmadds 4, 5, 5, 4
  02a3510  fsqrts 4, 4
  02a3514  fcmpu 0, 4, 31
  02a3518  cror 6, 1, 2
  02a351c  bt 6, 0x2a3544
  02a3520  lfs 4, 24(3)
  02a3524  fsubs 4, 4, 3
  02a3528  fabs 4, 4
  02a352c  fcmpu 0, 4, 31
  02a3530  cror 6, 1, 2
  02a3534  bt 6, 0x2a3544
  02a3538  li 3, 1
  02a353c  stb 3, 188(31)
  02a3540  b 0x2a3550
  02a3544  lwz 3, 40(3)
  02a3548  cmpwi 3, 0
  02a354c  bf 2, 0x2a34dc
  02a3550  lbz 3, 188(31)
  02a3554  cmpwi 3, 0
  02a3558  bt 2, 0x2a3ce4
  02a355c  lis 30, 149
  02a3560  addic 30, 30, 5056
  02a3564  lfs 3, 324(30)
  02a3568  lfs 4, 320(30)
  02a356c  fsubs 2, 2, 3
  02a3570  fsubs 1, 1, 4
  02a3574  lwz 3, 100(29)
  02a3578  cmpwi 3, 0
  02a357c  fmuls 2, 2, 2
  02a3580  fmadds 22, 1, 1, 2
  02a3584  fsqrts 22, 22
  02a3588  bf 2, 0x2a3620
  02a358c  addic 3, 31, 16
  02a3590  fmr 1, 31
  02a3594  li 5, 16
  02a3598  ori 6, 31, 0
  02a359c  li 7, 0
  02a35a0  bl 0x5e598
  02a35a4  nop
  02a35a8  lis 4, 42
  02a35ac  lfs 1, 16(31)
  02a35b0  lfs 2, 24(31)
  02a35b4  li 5, 4
  02a35b8  addi 4, 4, 9076
  02a35bc  lis 7, 161
  02a35c0  lis 10, 129
  02a35c4  ori 8, 3, 0
  02a35c8  addic 7, 7, 18944
  02a35cc  lfs 3, 24(4)
  02a35d0  lfs 4, 92(4)
  02a35d4  ori 3, 31, 0
  02a35d8  stfs 1, 64(1)
  02a35dc  li 4, 1
  02a35e0  stfs 2, 72(1)
  02a35e4  li 9, 0
  02a35e8  lfs 1, 20(31)
  02a35ec  fmr 2, 3
  02a35f0  fmr 3, 4
  02a35f4  ori 10, 10, 1
  02a35f8  stfs 1, 68(1)
  02a35fc  lfs 1, 28(31)
  02a3600  stfs 1, 76(1)
  02a3604  std 5, 120(1)
  02a3608  std 4, 128(1)
  02a360c  fmr 1, 30
  02a3610  ld 5, 64(1)
  02a3614  ld 6, 72(1)
  02a3618  bl 0x107860
  02a361c  nop
  02a3620  addic 25, 31, 16
  02a3624  ori 3, 25, 0
  02a3628  bl 0xffc18
  02a362c  nop
  02a3630  lwz 3, 100(29)
  02a3634  cmpwi 3, 0
  02a3638  bt 2, 0x2a3748
  02a363c  lfd 30, 656(1)
  02a3640  lfs 1, 24(31)
  02a3644  addic 4, 1, 304
  02a3648  fadds 1, 1, 30
  02a364c  ori 3, 25, 0
  02a3650  stfs 1, 24(31)
  02a3654  bl 0x105f40
  02a3658  nop
  02a365c  lis 3, 42
  02a3660  ori 29, 24, 0
  02a3664  addi 3, 3, 9076
  02a3668  lfs 2, 24(31)
  02a366c  fsubs 2, 2, 30
  02a3670  fmr 30, 1
  02a3674  stfs 2, 24(31)
  02a3678  lfs 29, 96(3)
  02a367c  lfs 28, 100(3)
  02a3680  lfs 27, 104(3)
  02a3684  lfs 26, 108(3)
  02a3688  lfs 25, 28(3)
  02a368c  lfs 24, 16(3)
  02a3690  lfs 23, 32(3)
  02a3694  stfs 22, 668(1)
  02a3698  fmr 1, 29
  02a369c  stw 24, 320(1)
  02a36a0  stw 24, 324(1)
  02a36a4  lfd 21, 656(1)
  02a36a8  stw 24, 328(1)
  02a36ac  stw 24, 332(1)
  02a36b0  fmr 2, 21
  02a36b4  bl 0xfcbe8
  02a36b8  nop
  02a36bc  stfs 1, 320(1)
  02a36c0  fmr 1, 29
  02a36c4  fmr 2, 21
  02a36c8  bl 0xfcbe8
  02a36cc  nop
  02a36d0  stfs 1, 324(1)
  02a36d4  fmr 2, 31
  02a36d8  fmr 1, 28
  02a36dc  bl 0xfcbe8
  02a36e0  nop
  02a36e4  lfs 2, -3052(26)
  02a36e8  stfs 1, 328(1)
  02a36ec  fmuls 1, 2, 27
  02a36f0  fmuls 2, 2, 26
  02a36f4  bl 0xfcbe8
  02a36f8  nop
  02a36fc  addic 28, 1, 320
  02a3700  ori 3, 28, 0
  02a3704  ori 4, 28, 0
  02a3708  bl 0x5e7f98
  02a370c  nop
  02a3710  fmr 1, 25
  02a3714  fmr 2, 24
  02a3718  bl 0xfcbe8
  02a371c  nop
  02a3720  ori 3, 25, 0
  02a3724  fmuls 1, 1, 23
  02a3728  ori 4, 28, 0
  02a372c  fmr 2, 30
  02a3730  bl 0x12a440
  02a3734  nop
  02a3738  addic 29, 29, 1
  02a373c  cmpwi 29, 150
  02a3740  bt 0, 0x2a3694
  02a3744  b 0x2a3c30
  02a3748  fadds 1, 1, 31
  02a374c  lfs 2, 24(31)
  02a3750  fcmpu 0, 2, 1
  02a3754  cror 6, 0, 2
  02a3758  bt 6, 0x2a3788
  02a375c  lis 3, 42
  02a3760  stfs 22, 668(1)
  02a3764  ori 4, 25, 0
  02a3768  addi 5, 3, 9076
  02a376c  lfd 1, 656(1)
  02a3770  ori 3, 31, 0
  02a3774  li 6, -1
  02a3778  lfs 2, 112(5)
  02a377c  bl 0x10fb28
  02a3780  nop
  02a3784  b 0x2a3c30
  02a3788  lis 3, 42
  02a378c  li 29, 150
  02a3790  addi 3, 3, 9076
  02a3794  lfs 1, 116(3)
  02a3798  ori 3, 24, 0
  02a379c  fcmpu 0, 22, 1
  02a37a0  cror 6, 1, 2
  02a37a4  bt 6, 0x2a37ac
  02a37a8  li 3, 1
  02a37ac  addic 3, 3, 50
  02a37b0  stfs 22, 668(1)
  02a37b4  cmpwi 3, 0
  02a37b8  bt 2, 0x2a37e4
  02a37bc  lis 3, 42
  02a37c0  stfs 22, 668(1)
  02a37c4  addi 3, 3, 9076
  02a37c8  lfs 1, 120(3)
  02a37cc  fmuls 1, 22, 1
  02a37d0  bl 0x502758
  02a37d4  nop
  02a37d8  ori 29, 3, 0
  02a37dc  cmpwi 29, 0
  02a37e0  bf 1, 0x2a3c30
  02a37e4  lis 3, 42
  02a37e8  ori 28, 24, 0
  02a37ec  addi 3, 3, 9076
  02a37f0  lfs 1, 124(3)
  02a37f4  lfs 2, 128(3)
  02a37f8  lfs 14, 132(3)
  02a37fc  lfs 24, 100(3)
  02a3800  lfs 30, 40(3)
  02a3804  lfs 15, 104(3)
  02a3808  lfs 16, 136(3)
  02a380c  lfs 17, 108(3)
  02a3810  lfs 25, 140(3)
  02a3814  lfs 26, 144(3)
  02a3818  lfs 27, 148(3)
  02a381c  stfd 1, 648(1)
  02a3820  stfd 2, 640(1)
  02a3824  lfs 28, 152(3)
  02a3828  lfs 18, 156(3)
  02a382c  lfs 19, 160(3)
  02a3830  lfs 20, 164(3)
  02a3834  lfs 21, 168(3)
  02a3838  lfs 22, 172(3)
  02a383c  lfs 29, 24(3)
  02a3840  lfs 23, 176(3)
  02a3844  li 3, 4
  02a3848  bl 0xfc620
  02a384c  nop
  02a3850  lfd 1, 648(1)
  02a3854  ori 27, 3, 0
  02a3858  lfd 2, 640(1)
  02a385c  lfs 3, -3052(26)
  02a3860  stw 24, 636(1)
  02a3864  fmuls 4, 3, 1
  02a3868  fmuls 5, 3, 2
  02a386c  stw 24, 336(1)
  02a3870  fmuls 6, 3, 14
  02a3874  stw 24, 340(1)
  02a3878  stw 24, 344(1)
  02a387c  fmuls 1, 3, 24
  02a3880  stw 24, 348(1)
  02a3884  fmuls 2, 3, 30
  02a3888  stfs 4, 624(1)
  02a388c  stfs 5, 628(1)
  02a3890  stfs 6, 632(1)
  02a3894  bl 0xfcbe8
  02a3898  nop
  02a389c  lfs 2, -3052(26)
  02a38a0  stfs 1, 336(1)
  02a38a4  fmuls 1, 2, 24
  02a38a8  fmuls 2, 2, 30
  02a38ac  bl 0xfcbe8
  02a38b0  nop
  02a38b4  sldi 3, 27, 2
  02a38b8  lfs 2, -3052(26)
  02a38bc  addc 3, 3, 1
  02a38c0  stfs 1, 340(1)
  02a38c4  clrldi 3, 3, 32
  02a38c8  fmuls 1, 2, 15
  02a38cc  lfs 2, 624(3)
  02a38d0  bl 0xfcbe8
  02a38d4  nop
  02a38d8  cmpwi 27, 1
  02a38dc  stfs 1, 344(1)
  02a38e0  fmr 31, 29
  02a38e4  bf 2, 0x2a38ec
  02a38e8  fmr 31, 30
  02a38ec  stfs 23, 688(1)
  02a38f0  lfs 1, 664(1)
  02a38f4  fmr 2, 31
  02a38f8  bl 0xfcbe8
  02a38fc  nop
  02a3900  fmr 23, 1
  02a3904  bl 0xfcc68
  02a3908  nop
  02a390c  fmr 31, 1
  02a3910  bl 0x5e8078
  02a3914  nop
  02a3918  fmuls 2, 1, 23
  02a391c  stfs 31, 692(1)
  02a3920  fmr 1, 31
  02a3924  stfs 2, 352(1)
  02a3928  bl 0x5e8128
  02a392c  nop
  02a3930  lfs 2, 352(1)
  02a3934  lfs 3, 16(31)
  02a3938  lfs 4, 20(31)
  02a393c  fadds 2, 2, 3
  02a3940  fmadds 3, 1, 23, 4
  02a3944  lfs 31, 24(31)
  02a3948  fmr 1, 16
  02a394c  stfs 31, 360(1)
  02a3950  stfs 2, 352(1)
  02a3954  stfs 3, 356(1)
  02a3958  bl 0x5e8078
  02a395c  nop
  02a3960  lfs 2, -3052(26)
  02a3964  fnmsubs 1, 23, 1, 31
  02a3968  lfs 3, 344(1)
  02a396c  cmpwi 27, 1
  02a3970  fmuls 2, 2, 23
  02a3974  fnmsubs 2, 2, 17, 3
  02a3978  stfs 1, 360(1)
  02a397c  stfs 2, 344(1)
  02a3980  lfs 23, 688(1)
  02a3984  lfs 31, 692(1)
  02a3988  bt 1, 0x2a39a0
  02a398c  cmpwi 27, -1
  02a3990  bf 1, 0x2a3c24
  02a3994  cmpwi 27, 0
  02a3998  bf 1, 0x2a39b4
  02a399c  b 0x2a3a30
  02a39a0  cmpwi 27, 2
  02a39a4  bf 1, 0x2a3a84
  02a39a8  cmpwi 27, 3
  02a39ac  bf 1, 0x2a3b1c
  02a39b0  b 0x2a3c24
  02a39b4  fmr 1, 26
  02a39b8  fmr 2, 27
  02a39bc  bl 0xfcbe8
  02a39c0  nop
  02a39c4  lis 3, 114
  02a39c8  fmr 31, 1
  02a39cc  lfs 1, -3056(3)
  02a39d0  fmuls 2, 1, 25
  02a39d4  fmuls 1, 1, 28
  02a39d8  fctiwz 2, 2
  02a39dc  fctiwz 1, 1
  02a39e0  stfd 2, 672(1)
  02a39e4  lwz 3, 676(1)
  02a39e8  stfd 1, 672(1)
  02a39ec  lwz 4, 676(1)
  02a39f0  extsw 3, 3
  02a39f4  extsw 4, 4
  02a39f8  bl 0xfe484
  02a39fc  nop
  02a3a00  lis 5, 7952
  02a3a04  fmr 1, 31
  02a3a08  lis 6, 16
  02a3a0c  ori 8, 3, 0
  02a3a10  li 9, 0
  02a3a14  addic 3, 1, 352
  02a3a18  addic 4, 1, 336
  02a3a1c  ori 5, 5, 6176
  02a3a20  ori 6, 6, 4112
  02a3a24  bl 0x125350
  02a3a28  nop
  02a3a2c  b 0x2a3c24
  02a3a30  fmr 1, 18
  02a3a34  fmr 2, 19
  02a3a38  bl 0xfcbe8
  02a3a3c  nop
  02a3a40  lis 3, 114
  02a3a44  lis 5, 16136
  02a3a48  lis 6, 3848
  02a3a4c  li 9, 1
  02a3a50  addic 4, 1, 336
  02a3a54  lfs 2, -3056(3)
  02a3a58  addic 3, 1, 352
  02a3a5c  fmuls 2, 2, 25
  02a3a60  ori 5, 5, 4128
  02a3a64  ori 6, 6, 4128
  02a3a68  fctiwz 2, 2
  02a3a6c  stfd 2, 672(1)
  02a3a70  lwz 8, 676(1)
  02a3a74  extsw 8, 8
  02a3a78  bl 0x125350
  02a3a7c  nop
  02a3a80  b 0x2a3c24
  02a3a84  li 3, 100
  02a3a88  bl 0xfc620
  02a3a8c  nop
  02a3a90  lis 4, 114
  02a3a94  li 5, 40
  02a3a98  lis 6, 24568
  02a3a9c  subc 3, 3, 5
  02a3aa0  ori 6, 6, 63736
  02a3aa4  lfs 1, -3056(4)
  02a3aa8  lis 4, 12104
  02a3aac  fmuls 2, 1, 21
  02a3ab0  fmuls 1, 1, 22
  02a3ab4  ori 4, 4, 24696
  02a3ab8  sradi 3, 3, 63
  02a3abc  subc 5, 6, 4
  02a3ac0  and 3, 3, 5
  02a3ac4  addc 27, 4, 3
  02a3ac8  fctiwz 2, 2
  02a3acc  fctiwz 1, 1
  02a3ad0  stfd 2, 672(1)
  02a3ad4  lwz 3, 676(1)
  02a3ad8  stfd 1, 672(1)
  02a3adc  lwz 4, 676(1)
  02a3ae0  extsw 3, 3
  02a3ae4  extsw 4, 4
  02a3ae8  bl 0xfe484
  02a3aec  nop
  02a3af0  lis 6, 3840
  02a3af4  fmr 1, 20
  02a3af8  ori 8, 3, 0
  02a3afc  li 9, 2
  02a3b00  addic 3, 1, 352
  02a3b04  addic 4, 1, 336
  02a3b08  ori 5, 27, 0
  02a3b0c  ori 6, 6, 32
  02a3b10  bl 0x125350
  02a3b14  nop
  02a3b18  b 0x2a3c24
  02a3b1c  fmr 1, 29
  02a3b20  stfs 29, 688(1)
  02a3b24  lfd 29, 656(1)
  02a3b28  fmr 2, 29
  02a3b2c  bl 0xfcbe8
  02a3b30  nop
  02a3b34  lis 4, 32536
  02a3b38  lis 3, 32512
  02a3b3c  ori 4, 4, 8240
  02a3b40  bl 0x106738
  02a3b44  nop
  02a3b48  fmr 1, 30
  02a3b4c  ori 27, 3, 0
  02a3b50  fmr 2, 29
  02a3b54  bl 0xfcbe8
  02a3b58  nop
  02a3b5c  lis 4, 95
  02a3b60  li 3, 0
  02a3b64  ori 4, 4, 24415
  02a3b68  bl 0x106738
  02a3b6c  nop
  02a3b70  lfs 1, 664(1)
  02a3b74  fmr 2, 29
  02a3b78  ori 23, 3, 0
  02a3b7c  bl 0xfcbe8
  02a3b80  nop
  02a3b84  lfs 2, -3052(26)
  02a3b88  fmuls 29, 1, 2
  02a3b8c  bl 0xfcc68
  02a3b90  nop
  02a3b94  addic 22, 1, 336
  02a3b98  fmr 3, 1
  02a3b9c  fmr 1, 29
  02a3ba0  ori 3, 22, 0
  02a3ba4  fmr 2, 31
  02a3ba8  bl 0xfe610
  02a3bac  nop
  02a3bb0  fmr 1, 26
  02a3bb4  fmr 2, 27
  02a3bb8  bl 0xfcbe8
  02a3bbc  nop
  02a3bc0  lis 3, 114
  02a3bc4  fmr 31, 1
  02a3bc8  lfs 1, -3056(3)
  02a3bcc  fmuls 2, 1, 28
  02a3bd0  fmuls 1, 1, 23
  02a3bd4  fctiwz 2, 2
  02a3bd8  fctiwz 1, 1
  02a3bdc  stfd 2, 672(1)
  02a3be0  lwz 3, 676(1)
  02a3be4  stfd 1, 672(1)
  02a3be8  lwz 4, 676(1)
  02a3bec  extsw 3, 3
  02a3bf0  extsw 4, 4
  02a3bf4  bl 0xfe484
  02a3bf8  nop
  02a3bfc  ori 8, 3, 0
  02a3c00  addic 3, 1, 352
  02a3c04  fmr 1, 31
  02a3c08  li 9, 3
  02a3c0c  ori 4, 22, 0
  02a3c10  ori 5, 27, 0
  02a3c14  ori 6, 23, 0
  02a3c18  bl 0x125350
  02a3c1c  nop
  02a3c20  lfs 29, 688(1)
  02a3c24  addic 28, 28, 1
  02a3c28  cmpw 28, 29
  02a3c2c  bt 0, 0x2a3844
  02a3c30  li 3, 0
  02a3c34  lfs 31, 668(1)
  02a3c38  li 4, 0
  02a3c3c  stb 24, 188(31)
  02a3c40  ori 5, 31, 0
  02a3c44  bl 0x15d12c
  02a3c48  nop
  02a3c4c  lis 3, 42
  02a3c50  addi 7, 3, 9076
  02a3c54  vspltisw 2, -1
  02a3c58  lis 3, 114
  02a3c5c  li 4, -3056
  02a3c60  li 8, 192
  02a3c64  lfs 1, 180(7)
  02a3c68  lfs 2, 184(7)
  02a3c6c  fsub 1, 31, 1
  02a3c70  fmuls 2, 31, 2
  02a3c74  lfs 3, 188(7)
  02a3c78  lfs 4, 60(7)
  02a3c7c  <unknown>
  02a3c80  vslw 2, 2, 2
  02a3c84  li 9, 360
  02a3c88  ori 4, 25, 0
  02a3c8c  addic 3, 1, 544
  02a3c90  li 5, 0
  02a3c94  li 6, 0
  02a3c98  fsel 1, 1, 3, 2
  02a3c9c  fsubs 1, 4, 1
  02a3ca0  stfs 1, 352(30)
  02a3ca4  <unknown>
  02a3ca8  vspltw 4, 4, 0
  02a3cac  vmaddfp 2, 3, 4, 2
  02a3cb0  vctsxs 2, 2, 0
  02a3cb4  vspltw 2, 2, 0
  02a3cb8  stvewx 2, 9, 30
  02a3cbc  bl 0x3fda38
  02a3cc0  nop
  02a3cc4  lis 4, 165
  02a3cc8  ori 3, 31, 0
  02a3ccc  addic 4, 4, 7912
  02a3cd0  bl 0x110798
  02a3cd4  nop
  02a3cd8  ori 3, 31, 0
  02a3cdc  bl 0xefb38
  02a3ce0  nop
  02a3ce4  ld 0, 944(1)
  02a3ce8  mtlr 0
  02a3cec  lfd 14, 784(1)
  02a3cf0  lfd 15, 792(1)
  02a3cf4  lfd 16, 800(1)
  02a3cf8  lfd 17, 808(1)
  02a3cfc  lfd 18, 816(1)
  02a3d00  lfd 19, 824(1)
  02a3d04  lfd 20, 832(1)
  02a3d08  lfd 21, 840(1)
  02a3d0c  lfd 22, 848(1)
  02a3d10  lfd 23, 856(1)
  02a3d14  lfd 24, 864(1)
  02a3d18  lfd 25, 872(1)
  02a3d1c  lfd 26, 880(1)
  02a3d20  lfd 27, 888(1)
  02a3d24  lfd 28, 896(1)
  02a3d28  lfd 29, 904(1)
  02a3d2c  lfd 30, 912(1)
  02a3d30  lfd 31, 920(1)
  02a3d34  ld 21, 696(1)
  02a3d38  ld 22, 704(1)
  02a3d3c  ld 23, 712(1)
  02a3d40  ld 24, 720(1)
  02a3d44  ld 25, 728(1)
  02a3d48  ld 26, 736(1)
  02a3d4c  ld 27, 744(1)
  02a3d50  ld 28, 752(1)
  02a3d54  ld 29, 760(1)
  02a3d58  ld 30, 768(1)
  02a3d5c  ld 31, 776(1)
  02a3d60  addi 1, 1, 928
  02a3d64  blr
