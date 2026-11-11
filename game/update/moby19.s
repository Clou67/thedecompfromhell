# game/update/moby19.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M19_002d1870:   # 0x2d1870, 0x1a0 bytes
  02d1870  mulli 8, 3, 4512
  02d1874  lis 4, 45
  02d1878  lis 7, 266
  02d187c  addi 5, 4, 6248
  02d1880  addic 7, 7, 9280
  02d1884  extsw 8, 8
  02d1888  li 10, 255
  02d188c  addc 4, 7, 8
  02d1890  lfs 2, 0(5)
  02d1894  ori 6, 7, 0
  02d1898  lfs 1, 4(5)
  02d189c  li 9, 0
  02d18a0  addic 5, 6, 4
  02d18a4  stb 10, 12(4)
  02d18a8  stb 10, 14(4)
  02d18ac  stb 10, 13(4)
  02d18b0  stb 10, 15(4)
  02d18b4  stb 10, 16(4)
  02d18b8  stb 10, 17(4)
  02d18bc  stb 10, 18(4)
  02d18c0  stb 10, 19(4)
  02d18c4  cmpw 3, 9
  02d18c8  bt 2, 0x2d19f8
  02d18cc  lfsx 4, 7, 8
  02d18d0  lfs 3, 0(6)
  02d18d4  fsubs 4, 4, 3
  02d18d8  lfs 3, 4(4)
  02d18dc  lfs 5, 0(5)
  02d18e0  fsubs 3, 3, 5
  02d18e4  fabs 5, 4
  02d18e8  fcmpu 0, 5, 2
  02d18ec  cror 6, 1, 2
  02d18f0  bt 6, 0x2d1928
  02d18f4  fsubs 4, 3, 1
  02d18f8  fabs 4, 4
  02d18fc  fcmpu 0, 4, 2
  02d1900  cror 6, 1, 2
  02d1904  bt 6, 0x2d190c
  02d1908  stb 9, 12(4)
  02d190c  fadds 3, 3, 1
  02d1910  fabs 3, 3
  02d1914  fcmpu 0, 3, 2
  02d1918  cror 6, 1, 2
  02d191c  bt 6, 0x2d19f8
  02d1920  stb 9, 14(4)
  02d1924  b 0x2d19f8
  02d1928  fabs 5, 3
  02d192c  fcmpu 0, 5, 2
  02d1930  cror 6, 1, 2
  02d1934  bt 6, 0x2d196c
  02d1938  fsubs 3, 4, 1
  02d193c  fabs 3, 3
  02d1940  fcmpu 0, 3, 2
  02d1944  cror 6, 1, 2
  02d1948  bt 6, 0x2d1950
  02d194c  stb 9, 13(4)
  02d1950  fadds 3, 4, 1
  02d1954  fabs 3, 3
  02d1958  fcmpu 0, 3, 2
  02d195c  cror 6, 1, 2
  02d1960  bt 6, 0x2d19f8
  02d1964  stb 9, 15(4)
  02d1968  b 0x2d19f8
  02d196c  fadds 5, 4, 1
  02d1970  fabs 5, 5
  02d1974  fcmpu 0, 5, 2
  02d1978  cror 6, 1, 2
  02d197c  bt 6, 0x2d19b4
  02d1980  fsubs 4, 3, 1
  02d1984  fabs 4, 4
  02d1988  fcmpu 0, 4, 2
  02d198c  cror 6, 1, 2
  02d1990  bt 6, 0x2d1998
  02d1994  stb 9, 17(4)
  02d1998  fadds 3, 3, 1
  02d199c  fabs 3, 3
  02d19a0  fcmpu 0, 3, 2
  02d19a4  cror 6, 1, 2
  02d19a8  bt 6, 0x2d19f8
  02d19ac  stb 9, 19(4)
  02d19b0  b 0x2d19f8
  02d19b4  fsubs 4, 4, 1
  02d19b8  fabs 4, 4
  02d19bc  fcmpu 0, 4, 2
  02d19c0  cror 6, 1, 2
  02d19c4  bt 6, 0x2d19f8
  02d19c8  fsubs 4, 3, 1
  02d19cc  fabs 4, 4
  02d19d0  fcmpu 0, 4, 2
  02d19d4  cror 6, 1, 2
  02d19d8  bt 6, 0x2d19e0
  02d19dc  stb 9, 16(4)
  02d19e0  fadds 3, 3, 1
  02d19e4  fabs 3, 3
  02d19e8  fcmpu 0, 3, 2
  02d19ec  cror 6, 1, 2
  02d19f0  bt 6, 0x2d19f8
  02d19f4  stb 9, 18(4)
  02d19f8  addic 9, 9, 1
  02d19fc  addic 6, 6, 4512
  02d1a00  cmpwi 9, 17
  02d1a04  addic 5, 5, 4512
  02d1a08  bt 0, 0x2d18c4
  02d1a0c  blr

UpdateMoby_19:   # 0x2d1a58, 0x838 bytes
  02d1a58  stdu 1, -224(1)
  02d1a5c  mflr 0
  02d1a60  std 0, 240(1)
  02d1a64  stfd 30, 208(1)
  02d1a68  stfd 31, 216(1)
  02d1a6c  std 31, 200(1)
  02d1a70  lbz 4, 32(3)
  02d1a74  std 30, 192(1)
  02d1a78  ori 31, 3, 0
  02d1a7c  lwz 30, 120(3)
  02d1a80  cmpwi 4, 0
  02d1a84  cmpwi 1, 4, 2
  02d1a88  cmpwi 6, 4, 1
  02d1a8c  std 29, 184(1)
  02d1a90  std 28, 176(1)
  02d1a94  std 27, 168(1)
  02d1a98  std 26, 160(1)
  02d1a9c  cmpwi 7, 4, -1
  02d1aa0  bt 1, 0x2d1aac
  02d1aa4  bf 29, 0x2d2194
  02d1aa8  b 0x2d1ab8
  02d1aac  bf 25, 0x2d1f80
  02d1ab0  bf 5, 0x2d1fac
  02d1ab4  b 0x2d2194
  02d1ab8  lis 3, 267
  02d1abc  lwz 4, 20484(3)
  02d1ac0  stw 4, 12(30)
  02d1ac4  addic 4, 4, 1
  02d1ac8  cmpwi 4, 127
  02d1acc  stw 4, 20484(3)
  02d1ad0  bf 1, 0x2d1ae4
  02d1ad4  lis 3, 101
  02d1ad8  addic 3, 3, 23528
  02d1adc  bl 0x5cd098
  02d1ae0  nop
  02d1ae4  lis 3, 45
  02d1ae8  lwz 5, 36(31)
  02d1aec  li 4, 3
  02d1af0  addi 3, 3, 6672
  02d1af4  lfs 1, 0(3)
  02d1af8  lfs 2, 36(5)
  02d1afc  li 3, 255
  02d1b00  stw 4, 0(30)
  02d1b04  fmuls 1, 2, 1
  02d1b08  lhz 4, 52(31)
  02d1b0c  stb 3, 48(31)
  02d1b10  ori 4, 4, 1
  02d1b14  lwz 29, 12(30)
  02d1b18  cmpwi 29, 0
  02d1b1c  sth 4, 52(31)
  02d1b20  stfs 1, 44(31)
  02d1b24  bf 2, 0x2d1e88
  02d1b28  lis 28, 266
  02d1b2c  li 27, 17
  02d1b30  addic 28, 28, 9280
  02d1b34  li 29, 0
  02d1b38  addic 3, 28, 30
  02d1b3c  mtctr 27
  02d1b40  sth 29, 0(3)
  02d1b44  addic 3, 3, 4512
  02d1b48  bdnz 0x2d1b40
  02d1b4c  ori 3, 28, 0
  02d1b50  li 4, 17
  02d1b54  bl 0x17b230
  02d1b58  nop
  02d1b5c  lis 3, 45
  02d1b60  addi 26, 3, 6672
  02d1b64  lfs 1, 4(26)
  02d1b68  bl 0x17b780
  02d1b6c  nop
  02d1b70  lis 3, 162
  02d1b74  lis 6, 116
  02d1b78  addic 3, 3, -9472
  02d1b7c  lis 5, 16768
  02d1b80  addic 4, 6, -22016
  02d1b84  lis 9, 16230
  02d1b88  lis 10, 15820
  02d1b8c  lwz 7, 16(3)
  02d1b90  lwz 8, 20(3)
  02d1b94  ori 9, 9, 26214
  02d1b98  lfs 1, 16(3)
  02d1b9c  lfs 2, 20(3)
  02d1ba0  fabs 3, 1
  02d1ba4  lis 3, -16128
  02d1ba8  fabs 6, 2
  02d1bac  stw 5, -22016(6)
  02d1bb0  lis 6, 16256
  02d1bb4  stw 5, 4(4)
  02d1bb8  ori 5, 10, 52429
  02d1bbc  stw 3, 8(4)
  02d1bc0  stw 3, 12(4)
  02d1bc4  stw 6, 16(4)
  02d1bc8  stw 6, 20(4)
  02d1bcc  stw 9, 24(4)
  02d1bd0  stw 5, 32(4)
  02d1bd4  rlwinm 3, 8, 3, 29, 29
  02d1bd8  fsubs 1, 3, 6
  02d1bdc  lis 5, 115
  02d1be0  addic 5, 5, 22784
  02d1be4  stfs 1, 112(1)
  02d1be8  lfs 4, 8(26)
  02d1bec  lwz 6, 112(1)
  02d1bf0  lfs 1, 112(1)
  02d1bf4  rlwimi 3, 6, 2, 30, 30
  02d1bf8  fsub 5, 1, 4
  02d1bfc  ori 6, 5, 0
  02d1c00  fsub 7, 1, 4
  02d1c04  rlwimi 3, 7, 4, 28, 28
  02d1c08  rlwimi 6, 3, 2, 26, 28
  02d1c0c  slwi 3, 3, 2
  02d1c10  clrldi 6, 6, 32
  02d1c14  lfsx 1, 5, 3
  02d1c18  fsel 5, 5, 3, 6
  02d1c1c  lfs 2, 4(6)
  02d1c20  fsel 3, 7, 6, 3
  02d1c24  fcmpu 0, 5, 4
  02d1c28  bt 1, 0x2d1c30
  02d1c2c  b 0x2d1d50
  02d1c30  fsubs 6, 3, 5
  02d1c34  fadds 3, 3, 5
  02d1c38  addic 3, 1, 16
  02d1c3c  li 8, 2
  02d1c40  addic 5, 3, 100
  02d1c44  addic 6, 3, 116
  02d1c48  mtctr 8
  02d1c4c  fdivs 3, 6, 3
  02d1c50  fmuls 5, 3, 3
  02d1c54  stfs 3, 128(1)
  02d1c58  stfs 3, 120(1)
  02d1c5c  stfs 3, 124(1)
  02d1c60  stfs 3, 116(1)
  02d1c64  lfs 7, 128(1)
  02d1c68  lfs 8, 120(1)
  02d1c6c  lfs 9, 124(1)
  02d1c70  fmuls 6, 5, 5
  02d1c74  fmuls 8, 8, 5
  02d1c78  fmuls 7, 7, 6
  02d1c7c  fmuls 3, 6, 6
  02d1c80  fmuls 6, 9, 6
  02d1c84  stfs 8, 120(1)
  02d1c88  fmuls 5, 7, 5
  02d1c8c  stfs 6, 124(1)
  02d1c90  stfs 5, 128(1)
  02d1c94  lfs 5, 100(3)
  02d1c98  fmuls 5, 5, 3
  02d1c9c  stfs 5, 116(3)
  02d1ca0  lfs 5, 4(5)
  02d1ca4  addic 3, 3, 8
  02d1ca8  addic 5, 5, 8
  02d1cac  fmuls 5, 5, 3
  02d1cb0  stfs 5, 4(6)
  02d1cb4  addic 6, 6, 8
  02d1cb8  bdnz 0x2d1c94
  02d1cbc  li 6, 4
  02d1cc0  ori 3, 1, 0
  02d1cc4  mtctr 6
  02d1cc8  lis 5, 115
  02d1ccc  addic 6, 3, 116
  02d1cd0  addic 5, 5, 22752
  02d1cd4  ori 7, 6, 0
  02d1cd8  lfs 3, 116(3)
  02d1cdc  lfs 5, 0(5)
  02d1ce0  fmuls 3, 3, 5
  02d1ce4  lfs 5, 4(5)
  02d1ce8  addic 5, 5, 8
  02d1cec  stfs 3, 116(3)
  02d1cf0  lfs 3, 4(6)
  02d1cf4  addic 3, 3, 8
  02d1cf8  fmuls 3, 3, 5
  02d1cfc  stfs 3, 4(6)
  02d1d00  addic 6, 6, 8
  02d1d04  bdnz 0x2d1cd8
  02d1d08  ori 3, 1, 0
  02d1d0c  mtctr 8
  02d1d10  lfs 3, 116(3)
  02d1d14  fadds 3, 4, 3
  02d1d18  lfs 4, 4(7)
  02d1d1c  addic 3, 3, 16
  02d1d20  lfs 5, 8(7)
  02d1d24  lfs 6, 12(7)
  02d1d28  addic 7, 7, 16
  02d1d2c  fadds 3, 3, 4
  02d1d30  fadds 4, 3, 5
  02d1d34  fadds 4, 4, 6
  02d1d38  bdnz 0x2d1d10
  02d1d3c  lis 3, 45
  02d1d40  addi 3, 3, 6672
  02d1d44  lfs 3, 12(3)
  02d1d48  fadds 4, 4, 3
  02d1d4c  fmadds 4, 4, 1, 2
  02d1d50  lis 3, 45
  02d1d54  addi 3, 3, 6672
  02d1d58  lfs 1, 16(3)
  02d1d5c  lfs 2, 20(3)
  02d1d60  fadds 1, 4, 1
  02d1d64  lfs 3, 24(3)
  02d1d68  fsubs 5, 2, 4
  02d1d6c  li 6, 28
  02d1d70  lis 7, 230
  02d1d74  lis 9, 230
  02d1d78  lis 8, 18176
  02d1d7c  fsubs 2, 2, 1
  02d1d80  fsub 7, 4, 5
  02d1d84  fsubs 6, 3, 1
  02d1d88  fsubs 3, 3, 4
  02d1d8c  fsub 8, 1, 2
  02d1d90  fsel 4, 7, 5, 4
  02d1d94  fsel 1, 8, 2, 1
  02d1d98  fsub 5, 3, 4
  02d1d9c  lfs 2, 28(3)
  02d1da0  fsub 7, 6, 1
  02d1da4  fsel 3, 5, 3, 4
  02d1da8  lfs 4, 32(3)
  02d1dac  lfs 5, 36(3)
  02d1db0  lfs 8, 40(3)
  02d1db4  fsel 1, 7, 6, 1
  02d1db8  fmuls 6, 3, 3
  02d1dbc  fmuls 7, 1, 1
  02d1dc0  fmuls 9, 6, 3
  02d1dc4  fmuls 10, 7, 1
  02d1dc8  fmuls 11, 6, 9
  02d1dcc  fmadds 3, 9, 2, 3
  02d1dd0  lfs 9, 44(3)
  02d1dd4  lwz 5, 0(30)
  02d1dd8  lis 3, -16621
  02d1ddc  addic 5, 5, 40
  02d1de0  ori 3, 3, 52534
  02d1de4  fmuls 12, 7, 10
  02d1de8  fmadds 1, 10, 2, 1
  02d1dec  fmuls 2, 6, 11
  02d1df0  fmadds 3, 11, 4, 3
  02d1df4  stw 5, 40(4)
  02d1df8  lwz 5, 4(30)
  02d1dfc  stw 3, 56(4)
  02d1e00  addic 5, 5, 40
  02d1e04  li 3, 64
  02d1e08  fmuls 10, 7, 12
  02d1e0c  fmadds 1, 12, 4, 1
  02d1e10  fmuls 4, 6, 2
  02d1e14  stw 5, 44(4)
  02d1e18  fmadds 2, 2, 5, 3
  02d1e1c  lis 5, 266
  02d1e20  stb 6, 60(4)
  02d1e24  stb 3, 61(4)
  02d1e28  lis 6, 230
  02d1e2c  addic 3, 5, 8960
  02d1e30  lis 5, 230
  02d1e34  fmuls 3, 7, 10
  02d1e38  fmadds 1, 10, 5, 1
  02d1e3c  fmadds 2, 4, 8, 2
  02d1e40  fmadds 1, 3, 8, 1
  02d1e44  fmuls 2, 2, 9
  02d1e48  fmuls 1, 1, 9
  02d1e4c  stfs 2, 52(4)
  02d1e50  stw 28, -21888(7)
  02d1e54  lis 7, 116
  02d1e58  stw 3, -21884(6)
  02d1e5c  lis 3, 116
  02d1e60  stw 27, -21880(5)
  02d1e64  lis 6, 16960
  02d1e68  lis 5, 17279
  02d1e6c  stfs 1, 48(4)
  02d1e70  lis 4, 116
  02d1e74  stw 29, -21856(9)
  02d1e78  stw 8, -22168(7)
  02d1e7c  stw 5, -22164(3)
  02d1e80  lwz 29, 12(30)
  02d1e84  stw 6, -22160(4)
  02d1e88  mulli 3, 29, 4512
  02d1e8c  lwz 5, 12(30)
  02d1e90  mulli 6, 5, 4512
  02d1e94  lis 4, 266
  02d1e98  mulli 7, 5, 4512
  02d1e9c  extsw 3, 3
  02d1ea0  addic 4, 4, 9280
  02d1ea4  lfs 1, 16(31)
  02d1ea8  extsw 7, 7
  02d1eac  addc 7, 4, 7
  02d1eb0  stfsx 1, 4, 3
  02d1eb4  extsw 3, 6
  02d1eb8  lfs 1, 20(31)
  02d1ebc  addc 3, 4, 3
  02d1ec0  lwz 6, 0(30)
  02d1ec4  addic 6, 6, 40
  02d1ec8  stfs 1, 4(3)
  02d1ecc  lfs 1, 24(31)
  02d1ed0  stw 6, 20(7)
  02d1ed4  lwz 3, 12(30)
  02d1ed8  mulli 3, 3, 4512
  02d1edc  lwz 6, 4(30)
  02d1ee0  extsw 3, 3
  02d1ee4  addic 6, 6, 40
  02d1ee8  addc 3, 4, 3
  02d1eec  li 7, 28
  02d1ef0  mulli 5, 5, 4512
  02d1ef4  stw 6, 24(3)
  02d1ef8  lwz 3, 12(30)
  02d1efc  extsw 5, 5
  02d1f00  mulli 3, 3, 4512
  02d1f04  li 6, 68
  02d1f08  extsw 3, 3
  02d1f0c  addc 5, 4, 5
  02d1f10  addc 3, 4, 3
  02d1f14  lis 8, 266
  02d1f18  stb 7, 28(3)
  02d1f1c  lwz 3, 12(30)
  02d1f20  mulli 3, 3, 4512
  02d1f24  lis 7, 0
  02d1f28  extsw 3, 3
  02d1f2c  ori 7, 7, 65535
  02d1f30  addc 3, 4, 3
  02d1f34  stb 6, 29(3)
  02d1f38  stfs 1, 8(5)
  02d1f3c  lwz 3, 12(30)
  02d1f40  mulli 5, 3, 4512
  02d1f44  mulli 6, 3, 4512
  02d1f48  extsw 5, 5
  02d1f4c  addc 6, 4, 6
  02d1f50  addc 4, 4, 5
  02d1f54  addic 5, 8, 8960
  02d1f58  slwi 8, 3, 4
  02d1f5c  clrldi 3, 6, 32
  02d1f60  addc 5, 5, 8
  02d1f64  sth 7, 30(4)
  02d1f68  clrldi 4, 5, 32
  02d1f6c  bl 0x17b4b0
  02d1f70  nop
  02d1f74  li 3, 1
  02d1f78  stb 3, 32(31)
  02d1f7c  b 0x2d2194
  02d1f80  lis 3, 267
  02d1f84  li 4, 0
  02d1f88  stw 4, 20484(3)
  02d1f8c  lwz 3, 12(30)
  02d1f90  extsw 3, 3
  02d1f94  bl 0x2d1870
  02d1f98  li 3, 2
  02d1f9c  lfs 1, 24(31)
  02d1fa0  stb 3, 32(31)
  02d1fa4  stfs 1, 16(30)
  02d1fa8  b 0x2d2194
  02d1fac  lbz 3, 188(31)
  02d1fb0  rlwinm 3, 3, 0, 29, 29
  02d1fb4  cmpwi 3, 0
  02d1fb8  bt 2, 0x2d1fdc
  02d1fbc  lis 4, 45
  02d1fc0  li 3, 1
  02d1fc4  addi 4, 4, 6672
  02d1fc8  stw 3, 20(30)
  02d1fcc  lfs 1, 16(30)
  02d1fd0  lfs 2, 48(4)
  02d1fd4  fadds 1, 1, 2
  02d1fd8  stfs 1, 16(30)
  02d1fdc  li 3, 1
  02d1fe0  stb 3, 188(31)
  02d1fe4  lwz 3, 20(30)
  02d1fe8  cmpwi 3, 0
  02d1fec  bt 2, 0x2d20a8
  02d1ff0  lis 3, 45
  02d1ff4  lis 4, 114
  02d1ff8  addi 3, 3, 6672
  02d1ffc  lis 6, 114
  02d2000  addic 5, 30, 8
  02d2004  lfs 4, 52(3)
  02d2008  lfs 2, -3048(4)
  02d200c  lfs 1, 16(30)
  02d2010  addic 3, 31, 24
  02d2014  fmuls 2, 2, 4
  02d2018  lfs 3, -3052(6)
  02d201c  fmuls 4, 3, 4
  02d2020  fmr 3, 2
  02d2024  bl 0x109c30
  02d2028  nop
  02d202c  lbz 3, 33(31)
  02d2030  lis 4, 165
  02d2034  lis 5, 164
  02d2038  addic 6, 4, -28284
  02d203c  slwi 3, 3, 2
  02d2040  lis 4, 266
  02d2044  lwz 5, -28512(5)
  02d2048  addic 4, 4, 9280
  02d204c  lwzx 3, 6, 3
  02d2050  lhz 7, 0(3)
  02d2054  lis 6, 164
  02d2058  lfs 1, 24(31)
  02d205c  rlwinm 7, 7, 8, 9, 23
  02d2060  addc 5, 5, 7
  02d2064  clrldi 5, 5, 32
  02d2068  stfs 1, 24(5)
  02d206c  lwz 5, -28512(6)
  02d2070  lfs 1, 24(31)
  02d2074  addc 6, 5, 7
  02d2078  clrldi 6, 6, 32
  02d207c  lwz 6, 120(6)
  02d2080  lwz 6, 12(6)
  02d2084  mulli 6, 6, 4512
  02d2088  extsw 6, 6
  02d208c  addc 6, 4, 6
  02d2090  stfs 1, 8(6)
  02d2094  lhz 6, 0(3)
  02d2098  addic 3, 3, 2
  02d209c  extsh 6, 6
  02d20a0  cmpwi 6, 0
  02d20a4  bf 0, 0x2d2050
  02d20a8  lis 3, 151
  02d20ac  lfs 1, 16(31)
  02d20b0  lis 4, 45
  02d20b4  addic 3, 3, -25376
  02d20b8  addi 4, 4, 6672
  02d20bc  lfs 2, 128(3)
  02d20c0  fsubs 2, 2, 1
  02d20c4  lfs 1, 56(4)
  02d20c8  fabs 2, 2
  02d20cc  fcmpu 0, 2, 1
  02d20d0  cror 6, 0, 2
  02d20d4  bt 6, 0x2d20f0
  02d20d8  lfs 2, 132(3)
  02d20dc  lfs 3, 20(31)
  02d20e0  fsubs 2, 2, 3
  02d20e4  fabs 2, 2
  02d20e8  fcmpu 0, 2, 1
  02d20ec  bt 1, 0x2d20f8
  02d20f0  lfs 1, 24(31)
  02d20f4  stfs 1, 752(3)
  02d20f8  li 3, 200
  02d20fc  bl 0xfc620
  02d2100  nop
  02d2104  cmpwi 3, 0
  02d2108  bf 2, 0x2d2194
  02d210c  lis 3, 45
  02d2110  addi 29, 3, 6672
  02d2114  lfs 31, 60(29)
  02d2118  lfs 30, 52(29)
  02d211c  fmr 1, 31
  02d2120  fmr 2, 30
  02d2124  bl 0xfcbe8
  02d2128  nop
  02d212c  lwz 3, 12(30)
  02d2130  lis 4, 266
  02d2134  mulli 3, 3, 4512
  02d2138  addic 28, 4, 9280
  02d213c  extsw 3, 3
  02d2140  fmr 2, 30
  02d2144  lfsx 3, 28, 3
  02d2148  fadds 30, 3, 1
  02d214c  fmr 1, 31
  02d2150  bl 0xfcbe8
  02d2154  nop
  02d2158  lwz 3, 12(30)
  02d215c  mulli 3, 3, 4512
  02d2160  lfs 3, 4(29)
  02d2164  extsw 5, 3
  02d2168  lfs 4, 64(29)
  02d216c  addc 3, 28, 3
  02d2170  addc 5, 28, 5
  02d2174  li 4, 1
  02d2178  li 9, 1
  02d217c  clrldi 3, 3, 32
  02d2180  lfs 2, 4(5)
  02d2184  fadds 2, 2, 1
  02d2188  fmr 1, 30
  02d218c  bl 0x17bd90
  02d2190  nop
  02d2194  lwz 3, 12(30)
  02d2198  cmpwi 3, -1
  02d219c  bf 1, 0x2d2260
  02d21a0  lis 3, 45
  02d21a4  addi 4, 3, 6672
  02d21a8  ori 3, 31, 0
  02d21ac  lfs 31, 8(4)
  02d21b0  lfs 1, 68(4)
  02d21b4  fmr 30, 31
  02d21b8  bl 0x1129d0
  02d21bc  nop
  02d21c0  ori 4, 3, 0
  02d21c4  lwz 3, 24(30)
  02d21c8  cmpwi 4, -1
  02d21cc  bt 2, 0x2d21dc
  02d21d0  lis 4, 45
  02d21d4  addi 4, 4, 6672
  02d21d8  lfs 31, 4(4)
  02d21dc  cmpwi 3, -1
  02d21e0  bt 2, 0x2d2204
  02d21e4  lis 5, 149
  02d21e8  extsw 4, 3
  02d21ec  addic 3, 5, 5376
  02d21f0  bl 0x110b70
  02d21f4  nop
  02d21f8  cmpwi 3, 0
  02d21fc  bf 2, 0x2d2204
  02d2200  fmr 31, 30
  02d2204  fcmpu 0, 31, 30
  02d2208  lis 3, 0
  02d220c  ori 3, 3, 65535
  02d2210  bf 2, 0x2d2218
  02d2214  li 3, 0
  02d2218  lis 4, 266
  02d221c  ori 5, 3, 0
  02d2220  addic 3, 4, 9280
  02d2224  lwz 4, 12(30)
  02d2228  mulli 6, 4, 4512
  02d222c  cmpwi 4, 0
  02d2230  extsw 6, 6
  02d2234  addc 4, 3, 6
  02d2238  sth 5, 30(4)
  02d223c  bf 2, 0x2d2260
  02d2240  li 4, 17
  02d2244  bl 0x17b8b8
  02d2248  nop
  02d224c  lis 3, 113
  02d2250  ori 4, 31, 0
  02d2254  addic 3, 3, -19752
  02d2258  bl 0x6d720
  02d225c  nop
  02d2260  ld 0, 240(1)
  02d2264  mtlr 0
  02d2268  lfd 30, 208(1)
  02d226c  lfd 31, 216(1)
  02d2270  ld 26, 160(1)
  02d2274  ld 27, 168(1)
  02d2278  ld 28, 176(1)
  02d227c  ld 29, 184(1)
  02d2280  ld 30, 192(1)
  02d2284  ld 31, 200(1)
  02d2288  addi 1, 1, 224
  02d228c  blr
