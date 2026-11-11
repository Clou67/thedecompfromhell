# game/update/moby1750.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1750_002b1950:   # 0x2b1950, 0x434 bytes
  02b1950  stdu 1, -432(1)
  02b1954  mflr 0
  02b1958  std 0, 448(1)
  02b195c  stfd 14, 288(1)
  02b1960  stfd 15, 296(1)
  02b1964  stfd 16, 304(1)
  02b1968  stfd 17, 312(1)
  02b196c  stfd 18, 320(1)
  02b1970  stfd 19, 328(1)
  02b1974  stfd 20, 336(1)
  02b1978  stfd 21, 344(1)
  02b197c  stfd 22, 352(1)
  02b1980  stfd 23, 360(1)
  02b1984  stfd 24, 368(1)
  02b1988  stfd 25, 376(1)
  02b198c  stfd 26, 384(1)
  02b1990  stfd 27, 392(1)
  02b1994  stfd 28, 400(1)
  02b1998  stfd 29, 408(1)
  02b199c  stfd 30, 416(1)
  02b19a0  stfd 31, 424(1)
  02b19a4  std 31, 280(1)
  02b19a8  ori 31, 3, 0
  02b19ac  std 30, 272(1)
  02b19b0  li 3, 8
  02b19b4  lis 30, 43
  02b19b8  std 29, 264(1)
  02b19bc  addi 30, 30, 6464
  02b19c0  bl 0x685c4
  02b19c4  nop
  02b19c8  std 3, 232(1)
  02b19cc  li 3, 0
  02b19d0  li 4, 2
  02b19d4  li 5, 0
  02b19d8  li 6, 1
  02b19dc  li 7, 128
  02b19e0  bl 0x502ea8
  02b19e4  nop
  02b19e8  std 3, 248(1)
  02b19ec  li 3, 0
  02b19f0  lis 9, 0
  02b19f4  li 4, 0
  02b19f8  li 5, 1
  02b19fc  li 6, 1
  02b1a00  li 7, 1
  02b1a04  li 8, 0
  02b1a08  ori 9, 9, 65424
  02b1a0c  bl 0x502fd4
  02b1a10  nop
  02b1a14  std 3, 240(1)
  02b1a18  li 4, 0
  02b1a1c  li 3, 0
  02b1a20  li 5, 0
  02b1a24  li 6, 0
  02b1a28  li 7, 0
  02b1a2c  li 8, 0
  02b1a30  bl 0x502f08
  02b1a34  nop
  02b1a38  li 4, 0
  02b1a3c  std 3, 224(1)
  02b1a40  lfs 22, 0(30)
  02b1a44  lis 3, 16256
  02b1a48  stw 4, 192(1)
  02b1a4c  stw 4, 196(1)
  02b1a50  stw 4, 200(1)
  02b1a54  lfs 21, 4(30)
  02b1a58  stw 3, 204(1)
  02b1a5c  stw 3, 208(1)
  02b1a60  stw 4, 212(1)
  02b1a64  stw 3, 216(1)
  02b1a68  stw 3, 220(1)
  02b1a6c  lfs 30, 212(31)
  02b1a70  lfs 1, 208(31)
  02b1a74  fmuls 2, 30, 30
  02b1a78  lfs 29, 216(31)
  02b1a7c  fmadds 2, 1, 1, 2
  02b1a80  fmadds 31, 29, 29, 2
  02b1a84  fsqrts 31, 31
  02b1a88  fcmpu 0, 31, 22
  02b1a8c  bf 2, 0x2b1aa4
  02b1a90  fmr 31, 22
  02b1a94  lfs 28, 220(31)
  02b1a98  fmr 30, 31
  02b1a9c  fmr 29, 30
  02b1aa0  b 0x2b1abc
  02b1aa4  lfs 2, 8(30)
  02b1aa8  fdivs 2, 2, 31
  02b1aac  lfs 28, 220(31)
  02b1ab0  fmuls 31, 1, 2
  02b1ab4  fmuls 30, 30, 2
  02b1ab8  fmuls 29, 29, 2
  02b1abc  li 29, 0
  02b1ac0  ori 31, 29, 0
  02b1ac4  lis 4, 251
  02b1ac8  addic 4, 4, 404
  02b1acc  addc 3, 4, 29
  02b1ad0  lhz 5, 8(3)
  02b1ad4  cmpwi 5, 0
  02b1ad8  bt 2, 0x2b1d10
  02b1adc  lis 5, 151
  02b1ae0  addic 5, 5, -25376
  02b1ae4  fmr 20, 22
  02b1ae8  lfs 1, 656(5)
  02b1aec  lfs 2, 664(5)
  02b1af0  fmuls 3, 1, 29
  02b1af4  fmuls 5, 2, 31
  02b1af8  lfs 4, 660(5)
  02b1afc  fmuls 1, 1, 30
  02b1b00  fmuls 6, 4, 29
  02b1b04  fmuls 4, 4, 31
  02b1b08  fmuls 2, 2, 30
  02b1b0c  fmr 19, 20
  02b1b10  fneg 3, 3
  02b1b14  fneg 5, 5
  02b1b18  fneg 1, 1
  02b1b1c  fneg 6, 6
  02b1b20  fneg 4, 4
  02b1b24  fneg 2, 2
  02b1b28  lis 5, 251
  02b1b2c  fmr 18, 19
  02b1b30  lfsx 27, 4, 29
  02b1b34  fsubs 3, 5, 3
  02b1b38  fsubs 4, 1, 4
  02b1b3c  fsubs 2, 6, 2
  02b1b40  addic 4, 5, 544
  02b1b44  lfs 26, 544(5)
  02b1b48  fmuls 1, 3, 3
  02b1b4c  lfs 25, 4(4)
  02b1b50  lfs 24, 8(4)
  02b1b54  lfs 23, 12(4)
  02b1b58  fmadds 1, 2, 2, 1
  02b1b5c  fmadds 1, 4, 4, 1
  02b1b60  fsqrts 5, 1
  02b1b64  fcmpu 0, 5, 18
  02b1b68  bt 2, 0x2b1bb0
  02b1b6c  frsqrte 5, 1
  02b1b70  lfs 6, 12(30)
  02b1b74  fmuls 7, 1, 5
  02b1b78  fmuls 8, 6, 5
  02b1b7c  fnmsubs 7, 7, 5, 21
  02b1b80  fmadds 5, 7, 8, 5
  02b1b84  fmuls 7, 1, 5
  02b1b88  fmuls 8, 6, 5
  02b1b8c  fnmsubs 7, 7, 5, 21
  02b1b90  fmadds 5, 7, 8, 5
  02b1b94  fmuls 1, 1, 5
  02b1b98  fmuls 6, 6, 5
  02b1b9c  fnmsubs 1, 1, 5, 21
  02b1ba0  fmadds 20, 1, 6, 5
  02b1ba4  fmuls 18, 2, 20
  02b1ba8  fmuls 19, 3, 20
  02b1bac  fmuls 20, 4, 20
  02b1bb0  lhz 3, 4(3)
  02b1bb4  fmr 17, 27
  02b1bb8  extsh 3, 3
  02b1bbc  fmuls 16, 19, 29
  02b1bc0  fmuls 15, 20, 31
  02b1bc4  fmuls 14, 18, 30
  02b1bc8  bl 0x502730
  02b1bcc  nop
  02b1bd0  lis 3, 251
  02b1bd4  lis 4, 123
  02b1bd8  lis 5, 123
  02b1bdc  lfs 2, 536(3)
  02b1be0  lis 3, 123
  02b1be4  fmuls 1, 1, 2
  02b1be8  lfs 2, 30000(4)
  02b1bec  lfs 27, 30004(5)
  02b1bf0  lwz 3, 29916(3)
  02b1bf4  stfs 21, 256(1)
  02b1bf8  fsubs 2, 2, 27
  02b1bfc  extsw 3, 3
  02b1c00  fsub 3, 21, 1
  02b1c04  fsel 21, 3, 1, 21
  02b1c08  fmadds 27, 2, 21, 27
  02b1c0c  bl 0x502730
  02b1c10  nop
  02b1c14  fmuls 1, 1, 21
  02b1c18  bl 0x502758
  02b1c1c  nop
  02b1c20  lis 5, 123
  02b1c24  lis 6, 123
  02b1c28  fmuls 1, 27, 18
  02b1c2c  li 7, 4
  02b1c30  fmuls 2, 27, 19
  02b1c34  addic 4, 1, 112
  02b1c38  fmuls 3, 27, 20
  02b1c3c  mtctr 7
  02b1c40  fmuls 4, 27, 28
  02b1c44  lwz 5, 29920(5)
  02b1c48  fmsubs 5, 20, 30, 16
  02b1c4c  clrlwi 5, 5, 8
  02b1c50  fmadds 6, 17, 31, 26
  02b1c54  fmsubs 7, 18, 29, 15
  02b1c58  rlwimi 5, 3, 24, 0, 7
  02b1c5c  fmadds 8, 17, 30, 25
  02b1c60  addic 3, 6, 29936
  02b1c64  fmsubs 9, 19, 31, 14
  02b1c68  fmadds 10, 17, 29, 24
  02b1c6c  stw 5, 188(1)
  02b1c70  stw 5, 184(1)
  02b1c74  stw 5, 180(1)
  02b1c78  stw 5, 176(1)
  02b1c7c  lfs 21, 256(1)
  02b1c80  lfs 11, 0(3)
  02b1c84  lfs 12, 4(3)
  02b1c88  fmuls 13, 11, 27
  02b1c8c  fmuls 0, 12, 1
  02b1c90  lfs 26, 8(3)
  02b1c94  fmuls 25, 12, 2
  02b1c98  lfs 24, 12(3)
  02b1c9c  fmuls 12, 12, 3
  02b1ca0  fmuls 11, 11, 4
  02b1ca4  fmuls 26, 26, 27
  02b1ca8  addic 3, 3, 16
  02b1cac  fmadds 0, 13, 31, 0
  02b1cb0  fmadds 25, 13, 30, 25
  02b1cb4  fmadds 12, 13, 29, 12
  02b1cb8  fmadds 11, 24, 23, 11
  02b1cbc  fmadds 13, 5, 26, 0
  02b1cc0  fmadds 0, 7, 26, 25
  02b1cc4  fmadds 12, 9, 26, 12
  02b1cc8  stfs 11, 12(4)
  02b1ccc  fmadds 11, 6, 24, 13
  02b1cd0  fmadds 13, 8, 24, 0
  02b1cd4  fmadds 12, 10, 24, 12
  02b1cd8  stfs 11, 0(4)
  02b1cdc  stfs 13, 4(4)
  02b1ce0  stfs 12, 8(4)
  02b1ce4  addic 4, 4, 16
  02b1ce8  bdnz 0x2b1c80
  02b1cec  lis 3, 161
  02b1cf0  li 4, 0
  02b1cf4  addic 6, 3, 24396
  02b1cf8  li 5, 0
  02b1cfc  addic 3, 1, 112
  02b1d00  li 7, 9
  02b1d04  lwz 6, 28(6)
  02b1d08  bl 0x72280
  02b1d0c  nop
  02b1d10  addic 31, 31, 1
  02b1d14  addic 29, 29, 12
  02b1d18  cmpwi 31, 10
  02b1d1c  bt 0, 0x2b1ac4
  02b1d20  ld 0, 448(1)
  02b1d24  mtlr 0
  02b1d28  lfd 14, 288(1)
  02b1d2c  lfd 15, 296(1)
  02b1d30  lfd 16, 304(1)
  02b1d34  lfd 17, 312(1)
  02b1d38  lfd 18, 320(1)
  02b1d3c  lfd 19, 328(1)
  02b1d40  lfd 20, 336(1)
  02b1d44  lfd 21, 344(1)
  02b1d48  lfd 22, 352(1)
  02b1d4c  lfd 23, 360(1)
  02b1d50  lfd 24, 368(1)
  02b1d54  lfd 25, 376(1)
  02b1d58  lfd 26, 384(1)
  02b1d5c  lfd 27, 392(1)
  02b1d60  lfd 28, 400(1)
  02b1d64  lfd 29, 408(1)
  02b1d68  lfd 30, 416(1)
  02b1d6c  lfd 31, 424(1)
  02b1d70  ld 29, 264(1)
  02b1d74  ld 30, 272(1)
  02b1d78  ld 31, 280(1)
  02b1d7c  addi 1, 1, 432
  02b1d80  blr

M1750_002b1d84:   # 0x2b1d84, 0x14 bytes
  02b1d84  lis 3, 123
  02b1d88  lis 4, 1
  02b1d8c  addic 3, 3, 30012
  02b1d90  stw 4, 72(3)
  02b1d94  blr

UpdateMoby_1750:   # 0x2b1d98, 0x2c bytes
  02b1d98  stdu 1, -112(1)
  02b1d9c  mflr 0
  02b1da0  std 0, 128(1)
  02b1da4  lis 3, 251
  02b1da8  addic 3, 3, 560
  02b1dac  bl 0x13ea48
  02b1db0  nop
  02b1db4  ld 0, 128(1)
  02b1db8  mtlr 0
  02b1dbc  addi 1, 1, 112
  02b1dc0  blr

M176_002b1de0:   # 0x2b1de0, 0x494 bytes
  02b1de0  stdu 1, -400(1)
  02b1de4  mflr 0
  02b1de8  std 0, 416(1)
  02b1dec  stfd 28, 368(1)
  02b1df0  stfd 29, 376(1)
  02b1df4  stfd 30, 384(1)
  02b1df8  stfd 31, 392(1)
  02b1dfc  std 26, 320(1)
  02b1e00  std 31, 360(1)
  02b1e04  li 26, 0
  02b1e08  std 28, 336(1)
  02b1e0c  ori 31, 3, 0
  02b1e10  std 30, 352(1)
  02b1e14  std 29, 344(1)
  02b1e18  std 27, 328(1)
  02b1e1c  std 25, 312(1)
  02b1e20  std 24, 304(1)
  02b1e24  std 23, 296(1)
  02b1e28  std 22, 288(1)
  02b1e2c  std 21, 280(1)
  02b1e30  std 20, 272(1)
  02b1e34  std 19, 264(1)
  02b1e38  lwz 28, 120(3)
  02b1e3c  ori 30, 26, 0
  02b1e40  lwz 27, 4(28)
  02b1e44  cmpwi 27, 0
  02b1e48  bt 2, 0x2b2210
  02b1e4c  lbz 3, 0(27)
  02b1e50  cmpwi 3, 12
  02b1e54  bf 2, 0x2b220c
  02b1e58  lbz 3, 1(27)
  02b1e5c  cmpwi 3, 128
  02b1e60  bf 0, 0x2b220c
  02b1e64  lfs 1, 36(27)
  02b1e68  lfs 29, 32(27)
  02b1e6c  fmuls 1, 1, 1
  02b1e70  lis 3, 43
  02b1e74  addi 3, 3, 7624
  02b1e78  lfs 31, 8(3)
  02b1e7c  fmadds 1, 29, 29, 1
  02b1e80  lfs 6, 0(3)
  02b1e84  lfs 4, 12(27)
  02b1e88  lfs 2, 4(3)
  02b1e8c  fmuls 30, 4, 6
  02b1e90  fsqrts 3, 1
  02b1e94  fmuls 30, 30, 2
  02b1e98  fcmpu 0, 3, 31
  02b1e9c  bf 2, 0x2b1eac
  02b1ea0  fmr 29, 31
  02b1ea4  stw 30, 128(1)
  02b1ea8  b 0x2b1efc
  02b1eac  frsqrte 3, 1
  02b1eb0  lis 3, 43
  02b1eb4  addi 3, 3, 7624
  02b1eb8  lfs 4, 12(3)
  02b1ebc  fmuls 5, 1, 3
  02b1ec0  fmuls 6, 2, 3
  02b1ec4  fnmsubs 5, 5, 3, 4
  02b1ec8  fmadds 3, 5, 6, 3
  02b1ecc  fmuls 5, 1, 3
  02b1ed0  fmuls 6, 2, 3
  02b1ed4  fnmsubs 5, 5, 3, 4
  02b1ed8  fmadds 3, 5, 6, 3
  02b1edc  fmuls 1, 1, 3
  02b1ee0  fmuls 2, 2, 3
  02b1ee4  fnmsubs 1, 1, 3, 4
  02b1ee8  fmadds 1, 1, 2, 3
  02b1eec  fmuls 2, 29, 1
  02b1ef0  stfs 2, 128(1)
  02b1ef4  lfs 29, 36(27)
  02b1ef8  fmuls 29, 29, 1
  02b1efc  lis 3, 43
  02b1f00  stfs 29, 132(1)
  02b1f04  lis 29, 151
  02b1f08  addi 3, 3, 7624
  02b1f0c  lis 4, 17839
  02b1f10  lis 5, 16256
  02b1f14  addic 29, 29, -25432
  02b1f18  addic 25, 1, 192
  02b1f1c  lfs 29, 12(3)
  02b1f20  ori 3, 4, 57190
  02b1f24  stw 5, 136(1)
  02b1f28  lbz 4, 16(29)
  02b1f2c  stw 3, 140(1)
  02b1f30  ori 3, 4, 0
  02b1f34  bl 0x502730
  02b1f38  nop
  02b1f3c  ori 4, 31, 0
  02b1f40  fadds 1, 1, 29
  02b1f44  addic 7, 1, 128
  02b1f48  ori 3, 25, 0
  02b1f4c  lis 5, 1
  02b1f50  bl 0x10581c
  02b1f54  nop
  02b1f58  li 4, 5
  02b1f5c  li 7, 1
  02b1f60  lhz 8, 166(31)
  02b1f64  addic 3, 27, 16
  02b1f68  fmr 1, 30
  02b1f6c  li 5, 0
  02b1f70  stb 4, 216(1)
  02b1f74  stb 7, 217(1)
  02b1f78  ori 6, 31, 0
  02b1f7c  sth 8, 218(1)
  02b1f80  ori 7, 25, 0
  02b1f84  bl 0x5e598
  02b1f88  nop
  02b1f8c  lhz 3, 10(27)
  02b1f90  cmpwi 3, 10
  02b1f94  bf 2, 0x2b21f8
  02b1f98  lis 3, 123
  02b1f9c  ori 25, 30, 0
  02b1fa0  lwz 3, 30236(3)
  02b1fa4  cmpwi 3, 0
  02b1fa8  bf 1, 0x2b2210
  02b1fac  lis 3, 43
  02b1fb0  addi 3, 3, 7624
  02b1fb4  lfs 1, 20(3)
  02b1fb8  lfs 28, 16(3)
  02b1fbc  fmuls 30, 30, 1
  02b1fc0  lfs 1, 32(27)
  02b1fc4  lis 4, 123
  02b1fc8  stfs 1, 144(1)
  02b1fcc  lfs 1, 36(27)
  02b1fd0  lis 24, 114
  02b1fd4  addic 23, 1, 160
  02b1fd8  stfs 1, 148(1)
  02b1fdc  lfs 1, 40(27)
  02b1fe0  ori 3, 23, 0
  02b1fe4  lfs 2, 30200(4)
  02b1fe8  stfs 1, 152(1)
  02b1fec  lfs 3, 44(27)
  02b1ff0  fmr 1, 31
  02b1ff4  lfs 4, -3052(24)
  02b1ff8  stfs 3, 156(1)
  02b1ffc  fmuls 2, 2, 4
  02b2000  bl 0xfea60
  02b2004  nop
  02b2008  lfs 1, -3052(24)
  02b200c  lis 3, 123
  02b2010  fmuls 2, 1, 28
  02b2014  lis 4, 123
  02b2018  fmr 1, 31
  02b201c  lis 5, 123
  02b2020  lis 6, 123
  02b2024  lfs 3, 30204(3)
  02b2028  lfs 4, 30208(4)
  02b202c  stfs 3, 156(1)
  02b2030  lwz 3, 30212(5)
  02b2034  stfs 4, 172(1)
  02b2038  extsw 24, 3
  02b203c  lwz 3, 30216(6)
  02b2040  stfs 2, 168(1)
  02b2044  extsw 22, 3
  02b2048  fmr 2, 29
  02b204c  bl 0xfcbe8
  02b2050  nop
  02b2054  ori 3, 24, 0
  02b2058  ori 4, 22, 0
  02b205c  bl 0x5027bc
  02b2060  nop
  02b2064  ori 24, 3, 0
  02b2068  lbz 4, 16(29)
  02b206c  bl 0x10a668
  02b2070  nop
  02b2074  lis 3, 123
  02b2078  fmr 1, 31
  02b207c  lis 4, 123
  02b2080  fmr 2, 29
  02b2084  lwz 3, 30220(3)
  02b2088  lwz 4, 30224(4)
  02b208c  extsw 22, 3
  02b2090  extsw 21, 4
  02b2094  bl 0xfcbe8
  02b2098  nop
  02b209c  ori 3, 22, 0
  02b20a0  ori 4, 21, 0
  02b20a4  bl 0x5027bc
  02b20a8  nop
  02b20ac  lbz 4, 16(29)
  02b20b0  ori 22, 3, 0
  02b20b4  bl 0x10a668
  02b20b8  nop
  02b20bc  lis 21, 123
  02b20c0  lis 20, 123
  02b20c4  lwz 3, 30228(21)
  02b20c8  lwz 4, 30232(20)
  02b20cc  extsw 3, 3
  02b20d0  extsw 4, 4
  02b20d4  std 3, 240(1)
  02b20d8  lfd 1, 240(1)
  02b20dc  std 4, 240(1)
  02b20e0  fcfid 1, 1
  02b20e4  frsp 1, 1
  02b20e8  lfd 2, 240(1)
  02b20ec  fcfid 2, 2
  02b20f0  frsp 2, 2
  02b20f4  bl 0xfcbe8
  02b20f8  nop
  02b20fc  lis 19, 114
  02b2100  lfs 2, -3056(19)
  02b2104  fmuls 1, 1, 2
  02b2108  bl 0x502758
  02b210c  nop
  02b2110  lwz 4, 30228(21)
  02b2114  lwz 5, 30232(20)
  02b2118  extsw 4, 4
  02b211c  ori 21, 3, 0
  02b2120  std 4, 240(1)
  02b2124  extsw 4, 5
  02b2128  lfd 1, 240(1)
  02b212c  std 4, 240(1)
  02b2130  fcfid 1, 1
  02b2134  frsp 1, 1
  02b2138  lfd 2, 240(1)
  02b213c  fcfid 2, 2
  02b2140  frsp 2, 2
  02b2144  bl 0xfcbe8
  02b2148  nop
  02b214c  lfs 2, -3056(19)
  02b2150  fmuls 1, 1, 2
  02b2154  bl 0x502758
  02b2158  nop
  02b215c  addic 20, 1, 176
  02b2160  fmr 1, 31
  02b2164  ori 19, 3, 0
  02b2168  fmr 2, 30
  02b216c  ori 3, 20, 0
  02b2170  bl 0xfea60
  02b2174  nop
  02b2178  lfs 1, 176(1)
  02b217c  lfs 2, 16(27)
  02b2180  lis 5, 123
  02b2184  fadds 1, 1, 2
  02b2188  lfs 2, 180(1)
  02b218c  lfs 3, 184(1)
  02b2190  ori 3, 20, 0
  02b2194  lwz 6, 30188(5)
  02b2198  addic 4, 1, 144
  02b219c  ori 10, 19, 0
  02b21a0  extsw 11, 6
  02b21a4  ori 5, 23, 0
  02b21a8  ori 6, 24, 0
  02b21ac  ori 7, 22, 0
  02b21b0  li 8, 10
  02b21b4  ori 9, 21, 0
  02b21b8  stfs 1, 176(1)
  02b21bc  lfs 1, 20(27)
  02b21c0  std 11, 112(1)
  02b21c4  fadds 1, 2, 1
  02b21c8  stfs 1, 180(1)
  02b21cc  lfs 1, 24(27)
  02b21d0  fadds 1, 3, 1
  02b21d4  stfs 1, 184(1)
  02b21d8  bl 0x1206e8
  02b21dc  nop
  02b21e0  lis 3, 123
  02b21e4  addic 25, 25, 1
  02b21e8  lwz 3, 30236(3)
  02b21ec  cmpw 3, 25
  02b21f0  bt 1, 0x2b1fc0
  02b21f4  b 0x2b2210
  02b21f8  extsh 3, 3
  02b21fc  cmpwi 3, 2
  02b2200  bf 0, 0x2b2210
  02b2204  stw 30, 4(28)
  02b2208  b 0x2b2210
  02b220c  stw 30, 4(28)
  02b2210  addic 26, 26, 1
  02b2214  addic 28, 28, 4
  02b2218  cmpwi 26, 15
  02b221c  bt 0, 0x2b1e40
  02b2220  ld 0, 416(1)
  02b2224  mtlr 0
  02b2228  lfd 28, 368(1)
  02b222c  lfd 29, 376(1)
  02b2230  lfd 30, 384(1)
  02b2234  lfd 31, 392(1)
  02b2238  ld 19, 264(1)
  02b223c  ld 20, 272(1)
  02b2240  ld 21, 280(1)
  02b2244  ld 22, 288(1)
  02b2248  ld 23, 296(1)
  02b224c  ld 24, 304(1)
  02b2250  ld 25, 312(1)
  02b2254  ld 26, 320(1)
  02b2258  ld 27, 328(1)
  02b225c  ld 28, 336(1)
  02b2260  ld 29, 344(1)
  02b2264  ld 30, 352(1)
  02b2268  ld 31, 360(1)
  02b226c  addi 1, 1, 400
  02b2270  blr
