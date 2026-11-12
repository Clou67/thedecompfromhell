# game/update/moby919.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M919_004b1914:   # 0x4b1914, 0x14 bytes
  04b1914  lis 3, 143
  04b1918  lis 4, 1
  04b191c  addic 3, 3, 17252
  04b1920  stw 4, 72(3)
  04b1924  blr

M919_004b1928:   # 0x4b1928, 0xf8 bytes
  04b1928  stdu 1, -160(1)
  04b192c  mflr 0
  04b1930  std 0, 176(1)
  04b1934  std 31, 152(1)
  04b1938  lis 4, 161
  04b193c  ori 31, 3, 0
  04b1940  lwz 3, 1800(4)
  04b1944  std 30, 144(1)
  04b1948  std 29, 136(1)
  04b194c  std 28, 128(1)
  04b1950  std 27, 120(1)
  04b1954  cmpwi 3, 2
  04b1958  bf 2, 0x4b19fc
  04b195c  lis 3, 151
  04b1960  lbz 3, -16268(3)
  04b1964  cmpwi 3, 0
  04b1968  bt 2, 0x4b19fc
  04b196c  lis 28, 150
  04b1970  li 27, 0
  04b1974  addic 28, 28, -12976
  04b1978  lhz 3, 68(28)
  04b197c  extsh 4, 3
  04b1980  cmpwi 4, 0
  04b1984  bf 1, 0x4b19fc
  04b1988  lis 29, 162
  04b198c  ori 30, 28, 0
  04b1990  addic 29, 29, -16512
  04b1994  lwz 4, 376(30)
  04b1998  lhz 5, 166(31)
  04b199c  extsh 5, 5
  04b19a0  lhz 6, 166(4)
  04b19a4  extsh 6, 6
  04b19a8  cmpw 6, 5
  04b19ac  bf 2, 0x4b19e8
  04b19b0  lbz 5, 1(29)
  04b19b4  cmpwi 5, 0
  04b19b8  bf 2, 0x4b19e8
  04b19bc  ori 3, 4, 0
  04b19c0  li 4, 0
  04b19c4  ori 5, 29, 0
  04b19c8  bl 0xf0ea8
  04b19cc  nop
  04b19d0  lis 4, 143
  04b19d4  lhz 3, 68(28)
  04b19d8  lfs 1, 17360(4)
  04b19dc  stfs 1, 32(29)
  04b19e0  stfs 1, 36(29)
  04b19e4  stfs 1, 40(29)
  04b19e8  extsh 4, 3
  04b19ec  addic 27, 27, 1
  04b19f0  addic 30, 30, 4
  04b19f4  cmpw 27, 4
  04b19f8  bt 0, 0x4b1994
  04b19fc  ld 0, 176(1)
  04b1a00  mtlr 0
  04b1a04  ld 27, 120(1)
  04b1a08  ld 28, 128(1)
  04b1a0c  ld 29, 136(1)
  04b1a10  ld 30, 144(1)
  04b1a14  ld 31, 152(1)
  04b1a18  addi 1, 1, 160
  04b1a1c  blr

UpdateMoby_919:   # 0x4b1a88, 0xbb8 bytes
  04b1a88  stdu 1, -352(1)
  04b1a8c  mflr 0
  04b1a90  std 0, 368(1)
  04b1a94  stfd 27, 312(1)
  04b1a98  stfd 28, 320(1)
  04b1a9c  stfd 29, 328(1)
  04b1aa0  stfd 30, 336(1)
  04b1aa4  stfd 31, 344(1)
  04b1aa8  std 31, 304(1)
  04b1aac  lis 4, 161
  04b1ab0  ori 31, 3, 0
  04b1ab4  std 30, 296(1)
  04b1ab8  lwz 4, 1800(4)
  04b1abc  lwz 30, 120(3)
  04b1ac0  std 29, 288(1)
  04b1ac4  std 28, 280(1)
  04b1ac8  std 27, 272(1)
  04b1acc  std 26, 264(1)
  04b1ad0  cmpwi 4, 2
  04b1ad4  bf 2, 0x4b1b74
  04b1ad8  lis 3, 151
  04b1adc  lbz 3, -16268(3)
  04b1ae0  cmpwi 3, 0
  04b1ae4  bt 2, 0x4b1b74
  04b1ae8  lis 28, 150
  04b1aec  li 29, 0
  04b1af0  addic 28, 28, -12976
  04b1af4  lhz 4, 68(28)
  04b1af8  extsh 3, 4
  04b1afc  cmpwi 3, 0
  04b1b00  bf 1, 0x4b1b74
  04b1b04  lis 27, 162
  04b1b08  ori 26, 28, 0
  04b1b0c  addic 27, 27, -16512
  04b1b10  lwz 3, 376(26)
  04b1b14  lhz 5, 166(31)
  04b1b18  extsh 5, 5
  04b1b1c  lhz 6, 166(3)
  04b1b20  extsh 6, 6
  04b1b24  cmpw 6, 5
  04b1b28  bf 2, 0x4b1b60
  04b1b2c  lbz 5, 1(27)
  04b1b30  cmpwi 5, 0
  04b1b34  bf 2, 0x4b1b60
  04b1b38  li 4, 0
  04b1b3c  ori 5, 27, 0
  04b1b40  bl 0xf0ea8
  04b1b44  nop
  04b1b48  lis 3, 143
  04b1b4c  lhz 4, 68(28)
  04b1b50  lfs 1, 17360(3)
  04b1b54  stfs 1, 32(27)
  04b1b58  stfs 1, 36(27)
  04b1b5c  stfs 1, 40(27)
  04b1b60  extsh 3, 4
  04b1b64  addic 29, 29, 1
  04b1b68  addic 26, 26, 4
  04b1b6c  cmpw 29, 3
  04b1b70  bt 0, 0x4b1b10
  04b1b74  cmpwi 30, 0
  04b1b78  bt 2, 0x4b2604
  04b1b7c  lbz 3, 32(31)
  04b1b80  cmpwi 3, 0
  04b1b84  cmpwi 1, 3, 1
  04b1b88  cmpwi 6, 3, -1
  04b1b8c  bt 1, 0x4b1b98
  04b1b90  bf 25, 0x4b1d88
  04b1b94  b 0x4b1ba0
  04b1b98  bf 5, 0x4b1c04
  04b1b9c  b 0x4b1d88
  04b1ba0  lis 3, 151
  04b1ba4  addic 3, 3, -13812
  04b1ba8  lbz 3, 7(3)
  04b1bac  cmpwi 3, 0
  04b1bb0  bt 2, 0x4b1bc4
  04b1bb4  ori 3, 31, 0
  04b1bb8  bl 0xefb38
  04b1bbc  nop
  04b1bc0  b 0x4b2604
  04b1bc4  lis 3, 102
  04b1bc8  li 5, 1
  04b1bcc  addic 6, 3, -30220
  04b1bd0  ori 4, 30, 0
  04b1bd4  ori 3, 31, 0
  04b1bd8  stw 6, 32(30)
  04b1bdc  stb 5, 32(31)
  04b1be0  bl 0x4d3720
  04b1be4  nop
  04b1be8  lis 4, 16492
  04b1bec  ori 3, 31, 0
  04b1bf0  ori 4, 4, 52429
  04b1bf4  stw 4, 12(30)
  04b1bf8  bl 0x106308
  04b1bfc  nop
  04b1c00  b 0x4b1d88
  04b1c04  ori 3, 31, 0
  04b1c08  ori 4, 30, 0
  04b1c0c  bl 0x4d3870
  04b1c10  nop
  04b1c14  cmpwi 3, 0
  04b1c18  bt 2, 0x4b1c34
  04b1c1c  lis 3, 75
  04b1c20  addi 4, 3, 6688
  04b1c24  ori 3, 31, 0
  04b1c28  lfs 1, 0(4)
  04b1c2c  bl 0x119488
  04b1c30  nop
  04b1c34  lhz 3, 4(30)
  04b1c38  cmpwi 3, 5
  04b1c3c  bf 2, 0x4b1c6c
  04b1c40  li 3, 7
  04b1c44  bl 0x112c20
  04b1c48  nop
  04b1c4c  li 3, 0
  04b1c50  li 4, -1
  04b1c54  bl 0xe8aa4
  04b1c58  nop
  04b1c5c  ori 3, 31, 0
  04b1c60  bl 0xefb38
  04b1c64  nop
  04b1c68  b 0x4b2604
  04b1c6c  lis 3, 75
  04b1c70  addi 4, 3, 6688
  04b1c74  lbz 3, 83(31)
  04b1c78  cmpwi 3, 0
  04b1c7c  lfs 31, 4(4)
  04b1c80  bf 2, 0x4b1d40
  04b1c84  addic 3, 30, 324
  04b1c88  bl 0x4fff60
  04b1c8c  nop
  04b1c90  ori 4, 3, 0
  04b1c94  lbz 3, 83(31)
  04b1c98  cmpwi 4, 0
  04b1c9c  bt 2, 0x4b1d40
  04b1ca0  lis 3, 75
  04b1ca4  addi 3, 3, 6688
  04b1ca8  lfs 1, 8(3)
  04b1cac  lfs 2, 12(3)
  04b1cb0  bl 0xfcbe8
  04b1cb4  nop
  04b1cb8  lis 29, 114
  04b1cbc  lfs 2, -3056(29)
  04b1cc0  fmuls 1, 1, 2
  04b1cc4  bl 0x502758
  04b1cc8  nop
  04b1ccc  stw 3, 324(30)
  04b1cd0  li 3, 2
  04b1cd4  bl 0xfc620
  04b1cd8  nop
  04b1cdc  li 4, 0
  04b1ce0  li 5, 2
  04b1ce4  subc 3, 4, 3
  04b1ce8  li 6, 1
  04b1cec  cntlzw 3, 3
  04b1cf0  lbz 4, 83(31)
  04b1cf4  subc 5, 5, 6
  04b1cf8  lfs 1, -3056(29)
  04b1cfc  sldi 3, 3, 58
  04b1d00  sradi 3, 3, 63
  04b1d04  and 3, 3, 5
  04b1d08  addc 3, 6, 3
  04b1d0c  cmpw 4, 3
  04b1d10  bt 2, 0x4b1d88
  04b1d14  fmuls 1, 1, 31
  04b1d18  ori 4, 3, 0
  04b1d1c  ori 3, 31, 0
  04b1d20  li 5, 0
  04b1d24  fctiwz 1, 1
  04b1d28  stfd 1, 248(1)
  04b1d2c  lwz 6, 252(1)
  04b1d30  extsw 6, 6
  04b1d34  bl 0xfddc0
  04b1d38  nop
  04b1d3c  b 0x4b1d88
  04b1d40  cmpwi 1, 3, 0
  04b1d44  lbz 3, 112(31)
  04b1d48  rlwinm 3, 3, 0, 30, 30
  04b1d4c  cmpwi 3, 0
  04b1d50  cror 2, 2, 6
  04b1d54  bt 2, 0x4b1d88
  04b1d58  lis 3, 114
  04b1d5c  li 4, 0
  04b1d60  li 5, 0
  04b1d64  lfs 1, -3056(3)
  04b1d68  ori 3, 31, 0
  04b1d6c  fmuls 1, 1, 31
  04b1d70  fctiwz 1, 1
  04b1d74  stfd 1, 248(1)
  04b1d78  lwz 6, 252(1)
  04b1d7c  extsw 6, 6
  04b1d80  bl 0xfddc0
  04b1d84  nop
  04b1d88  lis 3, 75
  04b1d8c  lbz 4, 83(31)
  04b1d90  addi 3, 3, 6688
  04b1d94  cmpwi 4, 0
  04b1d98  lfs 31, 16(3)
  04b1d9c  bf 2, 0x4b259c
  04b1da0  lis 29, 151
  04b1da4  lfs 2, 20(31)
  04b1da8  addic 29, 29, -25376
  04b1dac  lfs 1, 16(31)
  04b1db0  lis 3, 75
  04b1db4  lfs 3, 132(29)
  04b1db8  lfs 4, 128(29)
  04b1dbc  fsubs 3, 2, 3
  04b1dc0  fsubs 4, 1, 4
  04b1dc4  addi 3, 3, 6688
  04b1dc8  fmuls 3, 3, 3
  04b1dcc  fmadds 3, 4, 4, 3
  04b1dd0  lfs 4, 20(3)
  04b1dd4  fsqrts 3, 3
  04b1dd8  fcmpu 0, 3, 4
  04b1ddc  cror 6, 1, 2
  04b1de0  bt 6, 0x4b2050
  04b1de4  lfs 3, 208(29)
  04b1de8  lis 3, 75
  04b1dec  lfs 4, 212(29)
  04b1df0  fsubs 1, 3, 1
  04b1df4  fsubs 2, 4, 2
  04b1df8  addi 3, 3, 6688
  04b1dfc  lis 4, 115
  04b1e00  addic 4, 4, 22784
  04b1e04  fabs 5, 1
  04b1e08  fabs 6, 2
  04b1e0c  stfs 1, 136(1)
  04b1e10  stfs 2, 140(1)
  04b1e14  lfs 3, 72(31)
  04b1e18  fsubs 1, 5, 6
  04b1e1c  stfs 1, 144(1)
  04b1e20  lwz 5, 136(1)
  04b1e24  lfs 4, 24(3)
  04b1e28  lfs 1, 136(1)
  04b1e2c  lwz 3, 140(1)
  04b1e30  lfs 2, 140(1)
  04b1e34  lwz 6, 144(1)
  04b1e38  rlwinm 3, 3, 3, 29, 29
  04b1e3c  fabs 7, 2
  04b1e40  lfs 2, 144(1)
  04b1e44  fabs 1, 1
  04b1e48  rlwimi 3, 6, 2, 30, 30
  04b1e4c  fsub 8, 2, 4
  04b1e50  rlwimi 3, 5, 4, 28, 28
  04b1e54  fsub 9, 2, 4
  04b1e58  ori 5, 4, 0
  04b1e5c  rlwimi 5, 3, 2, 26, 28
  04b1e60  slwi 3, 3, 2
  04b1e64  clrldi 5, 5, 32
  04b1e68  fsel 6, 8, 1, 6
  04b1e6c  lfsx 1, 4, 3
  04b1e70  lfs 2, 4(5)
  04b1e74  fsel 5, 9, 7, 5
  04b1e78  fcmpu 0, 6, 4
  04b1e7c  bt 1, 0x4b1e84
  04b1e80  b 0x4b1fa4
  04b1e84  fsubs 7, 5, 6
  04b1e88  fadds 5, 5, 6
  04b1e8c  addic 3, 1, 16
  04b1e90  li 7, 2
  04b1e94  addic 4, 3, 196
  04b1e98  addic 5, 3, 212
  04b1e9c  mtctr 7
  04b1ea0  fdivs 5, 7, 5
  04b1ea4  fmuls 6, 5, 5
  04b1ea8  stfs 5, 224(1)
  04b1eac  stfs 5, 216(1)
  04b1eb0  stfs 5, 220(1)
  04b1eb4  stfs 5, 212(1)
  04b1eb8  lfs 8, 224(1)
  04b1ebc  lfs 9, 216(1)
  04b1ec0  lfs 10, 220(1)
  04b1ec4  fmuls 7, 6, 6
  04b1ec8  fmuls 9, 9, 6
  04b1ecc  fmuls 8, 8, 7
  04b1ed0  fmuls 5, 7, 7
  04b1ed4  fmuls 7, 10, 7
  04b1ed8  stfs 9, 216(1)
  04b1edc  fmuls 6, 8, 6
  04b1ee0  stfs 7, 220(1)
  04b1ee4  stfs 6, 224(1)
  04b1ee8  lfs 6, 196(3)
  04b1eec  fmuls 6, 6, 5
  04b1ef0  stfs 6, 212(3)
  04b1ef4  lfs 6, 4(4)
  04b1ef8  addic 3, 3, 8
  04b1efc  addic 4, 4, 8
  04b1f00  fmuls 6, 6, 5
  04b1f04  stfs 6, 4(5)
  04b1f08  addic 5, 5, 8
  04b1f0c  bdnz 0x4b1ee8
  04b1f10  li 5, 4
  04b1f14  ori 3, 1, 0
  04b1f18  mtctr 5
  04b1f1c  lis 4, 115
  04b1f20  addic 5, 3, 212
  04b1f24  addic 4, 4, 22752
  04b1f28  ori 6, 5, 0
  04b1f2c  lfs 5, 212(3)
  04b1f30  lfs 6, 0(4)
  04b1f34  fmuls 5, 5, 6
  04b1f38  lfs 6, 4(4)
  04b1f3c  addic 4, 4, 8
  04b1f40  stfs 5, 212(3)
  04b1f44  lfs 5, 4(5)
  04b1f48  addic 3, 3, 8
  04b1f4c  fmuls 5, 5, 6
  04b1f50  stfs 5, 4(5)
  04b1f54  addic 5, 5, 8
  04b1f58  bdnz 0x4b1f2c
  04b1f5c  ori 3, 1, 0
  04b1f60  mtctr 7
  04b1f64  lfs 5, 212(3)
  04b1f68  fadds 4, 4, 5
  04b1f6c  lfs 5, 4(6)
  04b1f70  addic 3, 3, 16
  04b1f74  lfs 6, 8(6)
  04b1f78  lfs 7, 12(6)
  04b1f7c  addic 6, 6, 16
  04b1f80  fadds 4, 4, 5
  04b1f84  fadds 4, 4, 6
  04b1f88  fadds 4, 4, 7
  04b1f8c  bdnz 0x4b1f64
  04b1f90  lis 3, 75
  04b1f94  addi 3, 3, 6688
  04b1f98  lfs 5, 28(3)
  04b1f9c  fadds 4, 4, 5
  04b1fa0  fmadds 4, 4, 1, 2
  04b1fa4  fmr 1, 3
  04b1fa8  fmr 2, 4
  04b1fac  bl 0x5026a0
  04b1fb0  nop
  04b1fb4  lis 3, 75
  04b1fb8  addi 3, 3, 6688
  04b1fbc  lfs 2, 32(3)
  04b1fc0  fcmpu 0, 1, 2
  04b1fc4  cror 6, 1, 2
  04b1fc8  bt 6, 0x4b2050
  04b1fcc  lfs 1, 260(29)
  04b1fd0  lfs 2, 256(29)
  04b1fd4  fmuls 1, 1, 1
  04b1fd8  lfs 3, 264(29)
  04b1fdc  lis 3, 75
  04b1fe0  addi 3, 3, 6688
  04b1fe4  fmadds 1, 2, 2, 1
  04b1fe8  lfs 2, 36(3)
  04b1fec  fmadds 1, 3, 3, 1
  04b1ff0  fsqrts 1, 1
  04b1ff4  fcmpu 0, 1, 2
  04b1ff8  cror 6, 0, 2
  04b1ffc  bt 6, 0x4b2040
  04b2000  lis 3, 75
  04b2004  li 4, 40
  04b2008  vspltisw 2, -1
  04b200c  addi 3, 3, 6688
  04b2010  lis 5, 114
  04b2014  li 6, -3056
  04b2018  vslw 2, 2, 2
  04b201c  lvlx 3, 4, 3
  04b2020  li 3, 328
  04b2024  vspltw 3, 3, 0
  04b2028  lvlx 4, 6, 5
  04b202c  vmaddfp 2, 4, 3, 2
  04b2030  vctsxs 2, 2, 0
  04b2034  vspltw 2, 2, 0
  04b2038  stvewx 2, 3, 30
  04b203c  b 0x4b2084
  04b2040  addic 3, 30, 328
  04b2044  bl 0x4fff60
  04b2048  nop
  04b204c  b 0x4b2084
  04b2050  lwz 3, 328(30)
  04b2054  cmpwi 3, 0
  04b2058  bt 2, 0x4b2084
  04b205c  li 3, 0
  04b2060  stw 3, 328(30)
  04b2064  lfs 1, 208(29)
  04b2068  stfs 1, 336(30)
  04b206c  lfs 1, 212(29)
  04b2070  stfs 1, 340(30)
  04b2074  lfs 1, 216(29)
  04b2078  stfs 1, 344(30)
  04b207c  lfs 1, 220(29)
  04b2080  stfs 1, 348(30)
  04b2084  addic 3, 30, 332
  04b2088  bl 0x4fff60
  04b208c  nop
  04b2090  cmpwi 3, 0
  04b2094  bt 2, 0x4b214c
  04b2098  lis 3, 75
  04b209c  addi 28, 3, 6688
  04b20a0  lfs 1, 44(28)
  04b20a4  lfs 2, 48(28)
  04b20a8  bl 0xfcbe8
  04b20ac  nop
  04b20b0  lis 3, 114
  04b20b4  lfs 2, -3056(3)
  04b20b8  fmuls 1, 1, 2
  04b20bc  bl 0x502758
  04b20c0  nop
  04b20c4  stw 3, 332(30)
  04b20c8  lfs 1, 52(28)
  04b20cc  lfs 30, 72(31)
  04b20d0  lfs 2, 56(28)
  04b20d4  bl 0xfcbe8
  04b20d8  nop
  04b20dc  lfs 29, 60(28)
  04b20e0  fmuls 2, 1, 29
  04b20e4  fmr 1, 30
  04b20e8  bl 0x502578
  04b20ec  nop
  04b20f0  fmr 30, 1
  04b20f4  lfs 1, 24(28)
  04b20f8  lfs 2, 64(28)
  04b20fc  bl 0xfcbe8
  04b2100  nop
  04b2104  fmuls 3, 1, 29
  04b2108  addic 3, 30, 336
  04b210c  lfs 1, 68(28)
  04b2110  fmr 2, 30
  04b2114  bl 0xfe610
  04b2118  nop
  04b211c  lfs 1, 336(30)
  04b2120  lfs 2, 16(31)
  04b2124  fadds 1, 1, 2
  04b2128  lfs 2, 340(30)
  04b212c  lfs 3, 344(30)
  04b2130  stfs 1, 336(30)
  04b2134  lfs 1, 20(31)
  04b2138  fadds 1, 2, 1
  04b213c  stfs 1, 340(30)
  04b2140  lfs 1, 24(31)
  04b2144  fadds 1, 3, 1
  04b2148  stfs 1, 344(30)
  04b214c  lwz 3, 328(30)
  04b2150  cmpwi 3, 0
  04b2154  bt 2, 0x4b2174
  04b2158  lis 3, 75
  04b215c  lfs 30, 208(29)
  04b2160  addi 3, 3, 6688
  04b2164  lfs 29, 212(29)
  04b2168  lfs 28, 216(29)
  04b216c  lfs 31, 72(3)
  04b2170  b 0x4b2180
  04b2174  lfs 30, 336(30)
  04b2178  lfs 29, 340(30)
  04b217c  lfs 28, 344(30)
  04b2180  lfs 1, 16(31)
  04b2184  lfs 2, 20(31)
  04b2188  lis 3, 75
  04b218c  fsubs 30, 30, 1
  04b2190  fsubs 29, 29, 2
  04b2194  addi 3, 3, 6688
  04b2198  lis 29, 115
  04b219c  addic 29, 29, 22784
  04b21a0  lfs 1, 76(3)
  04b21a4  fabs 3, 30
  04b21a8  fabs 4, 29
  04b21ac  stfs 30, 124(1)
  04b21b0  stfs 29, 128(1)
  04b21b4  lfs 5, 24(31)
  04b21b8  fadds 1, 5, 1
  04b21bc  fsubs 2, 3, 4
  04b21c0  fsubs 28, 28, 1
  04b21c4  stfs 2, 132(1)
  04b21c8  lwz 4, 124(1)
  04b21cc  lfs 27, 24(3)
  04b21d0  lfs 2, 124(1)
  04b21d4  lwz 3, 128(1)
  04b21d8  lfs 5, 128(1)
  04b21dc  lwz 5, 132(1)
  04b21e0  rlwinm 3, 3, 3, 29, 29
  04b21e4  lfs 1, 132(1)
  04b21e8  fabs 2, 2
  04b21ec  rlwimi 3, 5, 2, 30, 30
  04b21f0  fabs 5, 5
  04b21f4  fsub 6, 1, 27
  04b21f8  fsub 7, 1, 27
  04b21fc  rlwimi 3, 4, 4, 28, 28
  04b2200  ori 4, 29, 0
  04b2204  rlwimi 4, 3, 2, 26, 28
  04b2208  slwi 3, 3, 2
  04b220c  clrldi 4, 4, 32
  04b2210  fsel 4, 6, 2, 4
  04b2214  lfsx 1, 29, 3
  04b2218  fsel 3, 7, 5, 3
  04b221c  lfs 2, 4(4)
  04b2220  fcmpu 0, 4, 27
  04b2224  bt 1, 0x4b2230
  04b2228  fmr 1, 27
  04b222c  b 0x4b2354
  04b2230  fsubs 5, 3, 4
  04b2234  fadds 3, 3, 4
  04b2238  addic 3, 1, 16
  04b223c  li 6, 2
  04b2240  addic 5, 3, 180
  04b2244  addic 4, 3, 164
  04b2248  mtctr 6
  04b224c  fdivs 3, 5, 3
  04b2250  fmuls 4, 3, 3
  04b2254  stfs 3, 192(1)
  04b2258  stfs 3, 184(1)
  04b225c  stfs 3, 188(1)
  04b2260  stfs 3, 180(1)
  04b2264  lfs 6, 192(1)
  04b2268  lfs 7, 184(1)
  04b226c  lfs 8, 188(1)
  04b2270  fmuls 5, 4, 4
  04b2274  fmuls 7, 7, 4
  04b2278  fmuls 6, 6, 5
  04b227c  fmuls 3, 5, 5
  04b2280  fmuls 5, 8, 5
  04b2284  stfs 7, 184(1)
  04b2288  fmuls 4, 6, 4
  04b228c  stfs 5, 188(1)
  04b2290  stfs 4, 192(1)
  04b2294  lfs 4, 164(3)
  04b2298  fmuls 4, 4, 3
  04b229c  stfs 4, 180(3)
  04b22a0  lfs 4, 4(4)
  04b22a4  addic 4, 4, 8
  04b22a8  fmuls 4, 4, 3
  04b22ac  addic 3, 3, 8
  04b22b0  stfs 4, 4(5)
  04b22b4  addic 5, 5, 8
  04b22b8  bdnz 0x4b2294
  04b22bc  li 5, 4
  04b22c0  ori 3, 1, 0
  04b22c4  mtctr 5
  04b22c8  lis 4, 115
  04b22cc  addic 5, 3, 180
  04b22d0  addic 4, 4, 22752
  04b22d4  ori 7, 5, 0
  04b22d8  lfs 3, 180(3)
  04b22dc  lfs 4, 0(4)
  04b22e0  fmuls 3, 3, 4
  04b22e4  lfs 4, 4(4)
  04b22e8  addic 4, 4, 8
  04b22ec  stfs 3, 180(3)
  04b22f0  lfs 3, 4(5)
  04b22f4  addic 3, 3, 8
  04b22f8  fmuls 3, 3, 4
  04b22fc  stfs 3, 4(5)
  04b2300  addic 5, 5, 8
  04b2304  bdnz 0x4b22d8
  04b2308  ori 3, 1, 0
  04b230c  fmr 3, 27
  04b2310  mtctr 6
  04b2314  lfs 4, 180(3)
  04b2318  fadds 3, 3, 4
  04b231c  lfs 4, 4(7)
  04b2320  addic 3, 3, 16
  04b2324  lfs 5, 8(7)
  04b2328  lfs 6, 12(7)
  04b232c  addic 7, 7, 16
  04b2330  fadds 3, 3, 4
  04b2334  fadds 3, 3, 5
  04b2338  fadds 3, 3, 6
  04b233c  bdnz 0x4b2314
  04b2340  lis 3, 75
  04b2344  addi 3, 3, 6688
  04b2348  lfs 4, 28(3)
  04b234c  fadds 3, 3, 4
  04b2350  fmadds 1, 3, 1, 2
  04b2354  lfs 2, 72(31)
  04b2358  bl 0x5025e0
  04b235c  nop
  04b2360  fmuls 2, 29, 29
  04b2364  stfs 28, 116(1)
  04b2368  fabs 4, 28
  04b236c  fmadds 2, 30, 30, 2
  04b2370  fsqrts 2, 2
  04b2374  lwz 3, 116(1)
  04b2378  lfs 3, 116(1)
  04b237c  rlwinm 3, 3, 3, 29, 29
  04b2380  fabs 3, 3
  04b2384  fabs 5, 2
  04b2388  stfs 2, 112(1)
  04b238c  fsubs 2, 5, 4
  04b2390  stfs 2, 120(1)
  04b2394  lwz 4, 112(1)
  04b2398  lfs 2, 112(1)
  04b239c  lwz 5, 120(1)
  04b23a0  lfs 6, 120(1)
  04b23a4  fabs 2, 2
  04b23a8  rlwimi 3, 5, 2, 30, 30
  04b23ac  fsub 7, 6, 27
  04b23b0  fsub 6, 6, 27
  04b23b4  rlwimi 3, 4, 4, 28, 28
  04b23b8  ori 4, 29, 0
  04b23bc  rlwimi 4, 3, 2, 26, 28
  04b23c0  slwi 3, 3, 2
  04b23c4  clrldi 4, 4, 32
  04b23c8  fsel 4, 7, 2, 4
  04b23cc  lfsx 30, 29, 3
  04b23d0  fsel 3, 6, 3, 5
  04b23d4  lfs 2, 4(4)
  04b23d8  fcmpu 0, 4, 27
  04b23dc  bt 1, 0x4b23e4
  04b23e0  b 0x4b2504
  04b23e4  fsubs 5, 3, 4
  04b23e8  fadds 3, 3, 4
  04b23ec  addic 3, 1, 16
  04b23f0  li 6, 2
  04b23f4  addic 4, 3, 132
  04b23f8  addic 5, 3, 148
  04b23fc  mtctr 6
  04b2400  fdivs 3, 5, 3
  04b2404  fmuls 4, 3, 3
  04b2408  stfs 3, 160(1)
  04b240c  stfs 3, 152(1)
  04b2410  stfs 3, 156(1)
  04b2414  stfs 3, 148(1)
  04b2418  lfs 6, 160(1)
  04b241c  lfs 7, 152(1)
  04b2420  lfs 8, 156(1)
  04b2424  fmuls 5, 4, 4
  04b2428  fmuls 7, 7, 4
  04b242c  fmuls 6, 6, 5
  04b2430  fmuls 3, 5, 5
  04b2434  fmuls 5, 8, 5
  04b2438  stfs 7, 152(1)
  04b243c  fmuls 4, 6, 4
  04b2440  stfs 5, 156(1)
  04b2444  stfs 4, 160(1)
  04b2448  lfs 4, 132(3)
  04b244c  fmuls 4, 4, 3
  04b2450  stfs 4, 148(3)
  04b2454  lfs 4, 4(4)
  04b2458  addic 3, 3, 8
  04b245c  addic 4, 4, 8
  04b2460  fmuls 4, 4, 3
  04b2464  stfs 4, 4(5)
  04b2468  addic 5, 5, 8
  04b246c  bdnz 0x4b2448
  04b2470  li 5, 4
  04b2474  ori 3, 1, 0
  04b2478  mtctr 5
  04b247c  lis 4, 115
  04b2480  addic 5, 3, 148
  04b2484  addic 4, 4, 22752
  04b2488  ori 7, 5, 0
  04b248c  lfs 3, 148(3)
  04b2490  lfs 4, 0(4)
  04b2494  fmuls 3, 3, 4
  04b2498  lfs 4, 4(4)
  04b249c  addic 4, 4, 8
  04b24a0  stfs 3, 148(3)
  04b24a4  lfs 3, 4(5)
  04b24a8  addic 3, 3, 8
  04b24ac  fmuls 3, 3, 4
  04b24b0  stfs 3, 4(5)
  04b24b4  addic 5, 5, 8
  04b24b8  bdnz 0x4b248c
  04b24bc  ori 3, 1, 0
  04b24c0  mtctr 6
  04b24c4  lfs 3, 148(3)
  04b24c8  lfs 4, 4(7)
  04b24cc  fadds 3, 27, 3
  04b24d0  lfs 5, 8(7)
  04b24d4  lfs 27, 12(7)
  04b24d8  addic 3, 3, 16
  04b24dc  addic 7, 7, 16
  04b24e0  fadds 3, 3, 4
  04b24e4  fadds 3, 3, 5
  04b24e8  fadds 27, 3, 27
  04b24ec  bdnz 0x4b24c4
  04b24f0  lis 3, 75
  04b24f4  addi 3, 3, 6688
  04b24f8  lfs 3, 28(3)
  04b24fc  fadds 27, 27, 3
  04b2500  fmadds 27, 27, 30, 2
  04b2504  lis 3, 75
  04b2508  fneg 27, 27
  04b250c  addi 3, 3, 6688
  04b2510  lfs 2, 32(3)
  04b2514  fcmpu 0, 1, 2
  04b2518  cror 6, 0, 2
  04b251c  bt 6, 0x4b2528
  04b2520  fmr 1, 2
  04b2524  b 0x4b2544
  04b2528  lis 3, 75
  04b252c  addi 3, 3, 6688
  04b2530  lfs 2, 80(3)
  04b2534  fcmpu 0, 1, 2
  04b2538  cror 6, 1, 2
  04b253c  bt 6, 0x4b2544
  04b2540  fmr 1, 2
  04b2544  lis 3, 75
  04b2548  addi 3, 3, 6688
  04b254c  lfs 2, 84(3)
  04b2550  fcmpu 0, 27, 2
  04b2554  cror 6, 0, 2
  04b2558  bt 6, 0x4b2564
  04b255c  fmr 27, 2
  04b2560  b 0x4b2580
  04b2564  lis 3, 75
  04b2568  addi 3, 3, 6688
  04b256c  lfs 2, 88(3)
  04b2570  fcmpu 0, 27, 2
  04b2574  cror 6, 1, 2
  04b2578  bt 6, 0x4b2580
  04b257c  fmr 27, 2
  04b2580  lis 3, 75
  04b2584  addi 3, 3, 6688
  04b2588  lfs 2, 92(3)
  04b258c  stfs 27, 164(30)
  04b2590  fmuls 1, 1, 2
  04b2594  stfs 1, 168(30)
  04b2598  stfs 1, 296(30)
  04b259c  lis 3, 151
  04b25a0  lbz 3, -16268(3)
  04b25a4  cmpwi 3, 0
  04b25a8  bt 2, 0x4b25b4
  04b25ac  lis 3, 16432
  04b25b0  stw 3, 176(30)
  04b25b4  lis 3, 75
  04b25b8  lis 29, 114
  04b25bc  addi 3, 3, 6688
  04b25c0  addic 4, 30, 64
  04b25c4  li 5, 0
  04b25c8  lfs 30, 96(3)
  04b25cc  lfs 2, -3060(29)
  04b25d0  ori 3, 31, 0
  04b25d4  fmuls 1, 2, 31
  04b25d8  fmuls 2, 2, 30
  04b25dc  bl 0x1167c8
  04b25e0  nop
  04b25e4  lfs 2, -3060(29)
  04b25e8  addic 4, 30, 192
  04b25ec  ori 3, 31, 0
  04b25f0  fmuls 1, 2, 31
  04b25f4  li 5, 1
  04b25f8  fmuls 2, 2, 30
  04b25fc  bl 0x1167c8
  04b2600  nop
  04b2604  ld 0, 368(1)
  04b2608  mtlr 0
  04b260c  lfd 27, 312(1)
  04b2610  lfd 28, 320(1)
  04b2614  lfd 29, 328(1)
  04b2618  lfd 30, 336(1)
  04b261c  lfd 31, 344(1)
  04b2620  ld 26, 264(1)
  04b2624  ld 27, 272(1)
  04b2628  ld 28, 280(1)
  04b262c  ld 29, 288(1)
  04b2630  ld 30, 296(1)
  04b2634  ld 31, 304(1)
  04b2638  addi 1, 1, 352
  04b263c  blr

M919_004b2640:   # 0x4b2640, 0x14 bytes
  04b2640  lis 3, 143
  04b2644  lis 4, 1
  04b2648  addic 3, 3, 17368
  04b264c  stw 4, 72(3)
  04b2650  blr
