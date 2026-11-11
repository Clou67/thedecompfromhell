# game/update/moby1843.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1843_002c1bd0:   # 0x2c1bd0, 0x3e8 bytes
  02c1bd0  stdu 1, -2576(1)
  02c1bd4  mflr 0
  02c1bd8  std 0, 2592(1)
  02c1bdc  stfd 28, 2544(1)
  02c1be0  stfd 29, 2552(1)
  02c1be4  stfd 30, 2560(1)
  02c1be8  stfd 31, 2568(1)
  02c1bec  std 31, 2536(1)
  02c1bf0  ori 31, 3, 0
  02c1bf4  lis 3, 44
  02c1bf8  addi 3, 3, 7096
  02c1bfc  lbz 4, 33(31)
  02c1c00  std 30, 2528(1)
  02c1c04  std 29, 2520(1)
  02c1c08  std 28, 2512(1)
  02c1c0c  std 27, 2504(1)
  02c1c10  std 26, 2496(1)
  02c1c14  std 25, 2488(1)
  02c1c18  std 24, 2480(1)
  02c1c1c  std 23, 2472(1)
  02c1c20  std 22, 2464(1)
  02c1c24  std 21, 2456(1)
  02c1c28  cmpwi 4, 255
  02c1c2c  bt 2, 0x2c1f6c
  02c1c30  lis 4, 151
  02c1c34  lfs 30, 0(3)
  02c1c38  addic 4, 4, -16268
  02c1c3c  lbz 4, 2(4)
  02c1c40  cmpwi 4, 0
  02c1c44  bt 2, 0x2c1c4c
  02c1c48  lfs 30, 4(3)
  02c1c4c  lis 28, 123
  02c1c50  li 30, 0
  02c1c54  ori 22, 1, 0
  02c1c58  ori 25, 30, 0
  02c1c5c  stfs 30, 32724(28)
  02c1c60  lfs 30, 8(3)
  02c1c64  lfs 29, 12(3)
  02c1c68  lfs 28, 16(3)
  02c1c6c  li 3, 19
  02c1c70  bl 0x685c4
  02c1c74  nop
  02c1c78  std 3, 264(22)
  02c1c7c  li 3, 0
  02c1c80  lis 9, 0
  02c1c84  li 4, 0
  02c1c88  li 5, 1
  02c1c8c  li 6, 1
  02c1c90  li 7, 1
  02c1c94  li 8, 0
  02c1c98  ori 9, 9, 65424
  02c1c9c  bl 0x502fd4
  02c1ca0  nop
  02c1ca4  std 3, 272(22)
  02c1ca8  li 4, 0
  02c1cac  li 3, 0
  02c1cb0  li 5, 0
  02c1cb4  li 6, 0
  02c1cb8  li 7, 0
  02c1cbc  li 8, 0
  02c1cc0  bl 0x502f08
  02c1cc4  nop
  02c1cc8  std 3, 256(22)
  02c1ccc  li 4, 2
  02c1cd0  li 3, 0
  02c1cd4  li 5, 0
  02c1cd8  li 6, 1
  02c1cdc  li 7, 128
  02c1ce0  bl 0x502ea8
  02c1ce4  nop
  02c1ce8  lis 4, 161
  02c1cec  std 3, 280(22)
  02c1cf0  lwz 3, 1808(4)
  02c1cf4  addic 3, 3, 3
  02c1cf8  clrlwi 3, 3, 30
  02c1cfc  bl 0x502730
  02c1d00  nop
  02c1d04  lfs 2, 32724(28)
  02c1d08  lis 27, 123
  02c1d0c  lis 26, 123
  02c1d10  fmuls 31, 2, 30
  02c1d14  ori 24, 22, 0
  02c1d18  ori 29, 25, 0
  02c1d1c  addic 27, 27, 32728
  02c1d20  addic 26, 26, 32732
  02c1d24  ori 23, 24, 0
  02c1d28  fdivs 31, 1, 31
  02c1d2c  srawi 3, 29, 1
  02c1d30  lfs 1, 0(27)
  02c1d34  lfs 2, 0(26)
  02c1d38  subc 3, 30, 3
  02c1d3c  stfs 1, 224(24)
  02c1d40  addic 3, 3, 1
  02c1d44  stfs 2, 228(24)
  02c1d48  extsw 3, 3
  02c1d4c  bl 0x502730
  02c1d50  nop
  02c1d54  lfs 2, 32724(28)
  02c1d58  fdivs 1, 1, 2
  02c1d5c  fadds 1, 1, 31
  02c1d60  fcmpu 0, 1, 29
  02c1d64  cror 6, 0, 2
  02c1d68  bt 6, 0x2c1d74
  02c1d6c  fmr 1, 29
  02c1d70  b 0x2c1d84
  02c1d74  fcmpu 0, 1, 28
  02c1d78  cror 6, 1, 2
  02c1d7c  bt 6, 0x2c1d84
  02c1d80  fmr 1, 28
  02c1d84  lis 3, -29656
  02c1d88  lis 4, 20
  02c1d8c  ori 3, 3, 43560
  02c1d90  ori 4, 4, 17990
  02c1d94  bl 0x5027bc
  02c1d98  nop
  02c1d9c  addic 29, 29, 1
  02c1da0  stw 3, 208(23)
  02c1da4  addic 27, 27, 8
  02c1da8  cmpwi 29, 4
  02c1dac  addic 24, 24, 8
  02c1db0  addic 26, 26, 8
  02c1db4  addic 23, 23, 4
  02c1db8  bt 0, 0x2c1d2c
  02c1dbc  addic 30, 30, 1
  02c1dc0  addic 22, 22, 144
  02c1dc4  cmpwi 30, 16
  02c1dc8  bt 0, 0x2c1c6c
  02c1dcc  lis 3, 16000
  02c1dd0  lbz 6, 33(31)
  02c1dd4  stw 25, 112(1)
  02c1dd8  lis 4, 165
  02c1ddc  stw 25, 116(1)
  02c1de0  lis 5, -16768
  02c1de4  addic 4, 4, -28284
  02c1de8  stw 3, 120(1)
  02c1dec  slwi 6, 6, 2
  02c1df0  stw 25, 124(1)
  02c1df4  stw 25, 128(1)
  02c1df8  lis 21, 161
  02c1dfc  stw 25, 132(1)
  02c1e00  stw 5, 136(1)
  02c1e04  stw 25, 140(1)
  02c1e08  addic 21, 21, 24396
  02c1e0c  lwzx 30, 4, 6
  02c1e10  lis 3, 164
  02c1e14  lhz 4, 0(30)
  02c1e18  rlwinm 4, 4, 8, 9, 23
  02c1e1c  lwz 3, -28512(3)
  02c1e20  lhz 5, 166(31)
  02c1e24  addc 29, 3, 4
  02c1e28  extsh 3, 5
  02c1e2c  clrldi 29, 29, 32
  02c1e30  lhz 4, 166(29)
  02c1e34  lbz 5, 49(29)
  02c1e38  extsh 4, 4
  02c1e3c  cmpwi 5, 0
  02c1e40  cmpw 1, 4, 3
  02c1e44  bt 2, 0x2c1f58
  02c1e48  bf 6, 0x2c1f58
  02c1e4c  lwz 29, 120(29)
  02c1e50  ori 28, 25, 0
  02c1e54  lwz 3, 704(29)
  02c1e58  cmpwi 3, 0
  02c1e5c  bf 1, 0x2c1f58
  02c1e60  ori 24, 1, 0
  02c1e64  addic 23, 24, 144
  02c1e68  lwz 3, 708(29)
  02c1e6c  ori 26, 25, 0
  02c1e70  subc 3, 3, 28
  02c1e74  addic 22, 29, 192
  02c1e78  addic 27, 3, 15
  02c1e7c  srawi 3, 27, 4
  02c1e80  addze 3, 3
  02c1e84  sldi 3, 3, 4
  02c1e88  subc 27, 27, 3
  02c1e8c  li 5, 4
  02c1e90  ori 3, 25, 0
  02c1e94  addic 4, 24, 144
  02c1e98  mtctr 5
  02c1e9c  srawi 5, 3, 1
  02c1ea0  rlwinm 7, 3, 4, 27, 27
  02c1ea4  addc 5, 5, 27
  02c1ea8  addic 8, 1, 112
  02c1eac  srawi 6, 5, 4
  02c1eb0  addze 6, 6
  02c1eb4  sldi 6, 6, 4
  02c1eb8  subc 5, 5, 6
  02c1ebc  addc 6, 7, 8
  02c1ec0  sldi 5, 5, 4
  02c1ec4  clrldi 6, 6, 32
  02c1ec8  addc 5, 5, 22
  02c1ecc  clrldi 5, 5, 32
  02c1ed0  lfs 1, 0(6)
  02c1ed4  addic 3, 3, 1
  02c1ed8  lfs 2, 0(5)
  02c1edc  fadds 1, 2, 1
  02c1ee0  stfs 1, 0(4)
  02c1ee4  lfs 1, 4(5)
  02c1ee8  lfs 2, 4(6)
  02c1eec  fadds 1, 1, 2
  02c1ef0  stfs 1, 4(4)
  02c1ef4  lfs 1, 8(5)
  02c1ef8  lfs 2, 8(6)
  02c1efc  fadds 1, 1, 2
  02c1f00  stfs 1, 8(4)
  02c1f04  lfs 1, 12(5)
  02c1f08  stfs 1, 12(4)
  02c1f0c  addic 4, 4, 16
  02c1f10  bdnz 0x2c1e9c
  02c1f14  ori 3, 23, 0
  02c1f18  lwz 6, 28(21)
  02c1f1c  li 4, 0
  02c1f20  li 5, 0
  02c1f24  li 7, 9
  02c1f28  bl 0x72280
  02c1f2c  nop
  02c1f30  addic 26, 26, 1
  02c1f34  addic 22, 22, 256
  02c1f38  cmpwi 26, 2
  02c1f3c  bt 0, 0x2c1e8c
  02c1f40  addic 28, 28, 1
  02c1f44  lwz 3, 704(29)
  02c1f48  addic 23, 23, 144
  02c1f4c  addic 24, 24, 144
  02c1f50  cmpw 28, 3
  02c1f54  bt 0, 0x2c1e68
  02c1f58  lhz 3, 0(30)
  02c1f5c  addic 30, 30, 2
  02c1f60  extsh 3, 3
  02c1f64  cmpwi 3, 0
  02c1f68  bf 0, 0x2c1e10
  02c1f6c  ld 0, 2592(1)
  02c1f70  mtlr 0
  02c1f74  lfd 28, 2544(1)
  02c1f78  lfd 29, 2552(1)
  02c1f7c  lfd 30, 2560(1)
  02c1f80  lfd 31, 2568(1)
  02c1f84  ld 21, 2456(1)
  02c1f88  ld 22, 2464(1)
  02c1f8c  ld 23, 2472(1)
  02c1f90  ld 24, 2480(1)
  02c1f94  ld 25, 2488(1)
  02c1f98  ld 26, 2496(1)
  02c1f9c  ld 27, 2504(1)
  02c1fa0  ld 28, 2512(1)
  02c1fa4  ld 29, 2520(1)
  02c1fa8  ld 30, 2528(1)
  02c1fac  ld 31, 2536(1)
  02c1fb0  addi 1, 1, 2576
  02c1fb4  blr

M1843_002c1fc8:   # 0x2c1fc8, 0x238 bytes
  02c1fc8  stdu 1, -112(1)
  02c1fcc  mflr 0
  02c1fd0  std 0, 128(1)
  02c1fd4  lis 4, 161
  02c1fd8  lwz 5, 120(3)
  02c1fdc  lwz 4, 1808(4)
  02c1fe0  clrlwi 6, 4, 30
  02c1fe4  cmpwi 1, 4, 0
  02c1fe8  cmpwi 6, 0
  02c1fec  lwz 6, 708(5)
  02c1ff0  bf 2, 0x2c2054
  02c1ff4  li 7, 704
  02c1ff8  lis 9, 123
  02c1ffc  addi 8, 7, 16
  02c2000  addic 6, 6, 1
  02c2004  <unknown>
  02c2008  li 7, 32724
  02c200c  <unknown>
  02c2010  vor 2, 2, 3
  02c2014  <unknown>
  02c2018  srawi 7, 6, 4
  02c201c  vcfsx 4, 2, 0
  02c2020  vspltw 3, 3, 0
  02c2024  addze 7, 7
  02c2028  sldi 7, 7, 4
  02c202c  subc 6, 6, 7
  02c2030  stw 6, 708(5)
  02c2034  vspltw 4, 4, 0
  02c2038  vcmpgefp. 3, 4, 3
  02c203c  bf 26, 0x2c2054
  02c2040  vspltisw 3, 1
  02c2044  li 7, 704
  02c2048  vadduwm 2, 2, 3
  02c204c  vspltw 2, 2, 0
  02c2050  stvewx 2, 7, 5
  02c2054  lis 7, 44
  02c2058  addi 7, 7, 8120
  02c205c  sldi 6, 6, 4
  02c2060  addc 6, 5, 6
  02c2064  lfs 1, 4(7)
  02c2068  lfs 2, 0(7)
  02c206c  lfs 3, 208(3)
  02c2070  lfs 4, 8(7)
  02c2074  fmuls 3, 3, 1
  02c2078  lfs 5, 192(3)
  02c207c  clrldi 6, 6, 32
  02c2080  lfs 6, 212(3)
  02c2084  lfs 7, 224(3)
  02c2088  fmuls 6, 6, 1
  02c208c  lfs 8, 196(3)
  02c2090  lfs 9, 216(3)
  02c2094  lfs 10, 228(3)
  02c2098  lfs 11, 16(3)
  02c209c  fmuls 9, 9, 1
  02c20a0  fmadds 3, 5, 2, 3
  02c20a4  lis 8, 16256
  02c20a8  fmadds 5, 8, 2, 6
  02c20ac  lfs 6, 200(3)
  02c20b0  lfs 8, 220(3)
  02c20b4  lfs 12, 232(3)
  02c20b8  fmadds 6, 6, 2, 9
  02c20bc  fmuls 1, 8, 1
  02c20c0  fmadds 3, 7, 4, 3
  02c20c4  lfs 9, 204(3)
  02c20c8  lfs 8, 236(3)
  02c20cc  fmadds 5, 10, 4, 5
  02c20d0  fmadds 6, 12, 4, 6
  02c20d4  fmadds 1, 9, 2, 1
  02c20d8  fadds 3, 3, 11
  02c20dc  fmadds 1, 8, 4, 1
  02c20e0  stfs 3, 192(6)
  02c20e4  lfs 3, 20(3)
  02c20e8  fadds 3, 5, 3
  02c20ec  stfs 3, 196(6)
  02c20f0  lfs 3, 24(3)
  02c20f4  stfs 1, 204(6)
  02c20f8  fadds 3, 6, 3
  02c20fc  stfs 3, 200(6)
  02c2100  lwz 6, 708(5)
  02c2104  slwi 9, 6, 4
  02c2108  addc 9, 5, 9
  02c210c  clrldi 9, 9, 32
  02c2110  slwi 6, 6, 4
  02c2114  addc 6, 5, 6
  02c2118  stw 8, 204(9)
  02c211c  lfs 1, 12(7)
  02c2120  lfs 3, 208(3)
  02c2124  clrldi 6, 6, 32
  02c2128  lfs 5, 192(3)
  02c212c  fmuls 3, 3, 1
  02c2130  lfs 6, 212(3)
  02c2134  lfs 7, 224(3)
  02c2138  fmuls 6, 6, 1
  02c213c  lfs 8, 196(3)
  02c2140  lfs 9, 216(3)
  02c2144  lfs 10, 228(3)
  02c2148  fmuls 9, 9, 1
  02c214c  lfs 11, 16(3)
  02c2150  lfs 12, 200(3)
  02c2154  fmadds 3, 5, 2, 3
  02c2158  fmadds 5, 8, 2, 6
  02c215c  lfs 6, 220(3)
  02c2160  fmadds 8, 12, 2, 9
  02c2164  lfs 9, 232(3)
  02c2168  fmuls 1, 6, 1
  02c216c  lfs 12, 204(3)
  02c2170  lfs 6, 236(3)
  02c2174  fmadds 3, 7, 4, 3
  02c2178  fmadds 5, 10, 4, 5
  02c217c  fmadds 1, 12, 2, 1
  02c2180  fmadds 2, 9, 4, 8
  02c2184  fadds 3, 3, 11
  02c2188  fmadds 1, 6, 4, 1
  02c218c  stfs 3, 448(6)
  02c2190  lfs 3, 20(3)
  02c2194  fadds 3, 5, 3
  02c2198  stfs 3, 452(6)
  02c219c  lfs 3, 24(3)
  02c21a0  stfs 1, 460(6)
  02c21a4  fadds 2, 2, 3
  02c21a8  stfs 2, 456(6)
  02c21ac  lwz 6, 708(5)
  02c21b0  slwi 6, 6, 4
  02c21b4  addc 6, 5, 6
  02c21b8  clrldi 6, 6, 32
  02c21bc  stw 8, 460(6)
  02c21c0  bt 6, 0x2c21f0
  02c21c4  lwz 5, 712(5)
  02c21c8  lwz 6, 0(5)
  02c21cc  cmpw 4, 6
  02c21d0  bt 2, 0x2c21f0
  02c21d4  ori 6, 4, 0
  02c21d8  lis 7, 113
  02c21dc  ori 4, 3, 0
  02c21e0  addic 3, 7, -20400
  02c21e4  stw 6, 0(5)
  02c21e8  bl 0x6d720
  02c21ec  nop
  02c21f0  ld 0, 128(1)
  02c21f4  mtlr 0
  02c21f8  addi 1, 1, 112
  02c21fc  blr

M1843_002c2230:   # 0x2c2230, 0xb40 bytes
  02c2230  stdu 1, -544(1)
  02c2234  mflr 0
  02c2238  std 0, 560(1)
  02c223c  stfd 14, 400(1)
  02c2240  stfd 15, 408(1)
  02c2244  stfd 16, 416(1)
  02c2248  stfd 17, 424(1)
  02c224c  stfd 18, 432(1)
  02c2250  stfd 19, 440(1)
  02c2254  stfd 20, 448(1)
  02c2258  stfd 21, 456(1)
  02c225c  stfd 22, 464(1)
  02c2260  stfd 23, 472(1)
  02c2264  stfd 24, 480(1)
  02c2268  stfd 25, 488(1)
  02c226c  stfd 26, 496(1)
  02c2270  stfd 27, 504(1)
  02c2274  stfd 28, 512(1)
  02c2278  stfd 29, 520(1)
  02c227c  stfd 30, 528(1)
  02c2280  stfd 31, 536(1)
  02c2284  std 31, 392(1)
  02c2288  ori 31, 3, 0
  02c228c  lis 3, 165
  02c2290  std 30, 384(1)
  02c2294  addic 3, 3, 7136
  02c2298  lwz 30, 120(31)
  02c229c  lis 9, 44
  02c22a0  lwz 4, 96(30)
  02c22a4  lwz 5, 100(30)
  02c22a8  slwi 4, 4, 2
  02c22ac  addic 6, 5, 1
  02c22b0  extsw 4, 4
  02c22b4  lwzx 3, 3, 4
  02c22b8  slwi 4, 5, 4
  02c22bc  addic 5, 5, 2
  02c22c0  addc 4, 3, 4
  02c22c4  lwz 7, 0(3)
  02c22c8  divw 8, 6, 7
  02c22cc  mullw 8, 8, 7
  02c22d0  clrldi 4, 4, 32
  02c22d4  subc 6, 6, 8
  02c22d8  divw 8, 5, 7
  02c22dc  sldi 6, 6, 4
  02c22e0  lfs 20, 16(4)
  02c22e4  addc 6, 3, 6
  02c22e8  lfs 19, 20(4)
  02c22ec  clrldi 6, 6, 32
  02c22f0  mullw 7, 8, 7
  02c22f4  lfs 17, 16(6)
  02c22f8  lfs 16, 20(6)
  02c22fc  subc 5, 5, 7
  02c2300  fsubs 14, 20, 17
  02c2304  addi 8, 9, 8704
  02c2308  fsubs 6, 19, 16
  02c230c  sldi 5, 5, 4
  02c2310  lfs 18, 24(4)
  02c2314  addc 3, 3, 5
  02c2318  lfs 1, 24(6)
  02c231c  li 5, 0
  02c2320  clrldi 3, 3, 32
  02c2324  lfs 15, 0(8)
  02c2328  ori 4, 1, 0
  02c232c  fabs 7, 14
  02c2330  fabs 8, 6
  02c2334  lfs 30, 16(3)
  02c2338  lfs 4, 20(3)
  02c233c  lfs 2, 24(3)
  02c2340  stfs 14, 232(1)
  02c2344  stfs 6, 236(1)
  02c2348  stw 5, 124(1)
  02c234c  lis 3, 115
  02c2350  addic 3, 3, 22784
  02c2354  fsubs 3, 7, 8
  02c2358  stfs 3, 240(1)
  02c235c  lwz 6, 232(1)
  02c2360  lfs 3, 232(1)
  02c2364  stw 5, 120(1)
  02c2368  lwz 7, 236(1)
  02c236c  stw 5, 116(1)
  02c2370  stw 5, 112(1)
  02c2374  fabs 3, 3
  02c2378  lfs 5, 236(1)
  02c237c  rlwinm 5, 7, 3, 29, 29
  02c2380  lfs 10, 4(8)
  02c2384  fabs 9, 5
  02c2388  lwz 7, 240(1)
  02c238c  lfs 5, 240(1)
  02c2390  rlwimi 5, 7, 2, 30, 30
  02c2394  fsub 11, 5, 15
  02c2398  fsub 12, 5, 15
  02c239c  rlwimi 5, 6, 4, 28, 28
  02c23a0  ori 6, 3, 0
  02c23a4  rlwimi 6, 5, 2, 26, 28
  02c23a8  slwi 5, 5, 2
  02c23ac  clrldi 6, 6, 32
  02c23b0  fsel 8, 11, 3, 8
  02c23b4  lfsx 31, 3, 5
  02c23b8  lfs 5, 4(6)
  02c23bc  fsel 7, 12, 9, 7
  02c23c0  fmr 3, 10
  02c23c4  fcmpu 0, 8, 15
  02c23c8  bt 1, 0x2c23d4
  02c23cc  fmr 31, 15
  02c23d0  b 0x2c24ec
  02c23d4  fsubs 9, 7, 8
  02c23d8  fadds 7, 7, 8
  02c23dc  addic 5, 1, 16
  02c23e0  li 8, 2
  02c23e4  addic 7, 5, 340
  02c23e8  addic 6, 5, 324
  02c23ec  mtctr 8
  02c23f0  fdivs 7, 9, 7
  02c23f4  fmuls 8, 7, 7
  02c23f8  stfs 7, 340(4)
  02c23fc  stfs 7, 344(4)
  02c2400  stfs 7, 348(4)
  02c2404  stfs 7, 352(4)
  02c2408  lfs 7, 352(1)
  02c240c  lfs 9, 344(1)
  02c2410  lfs 11, 348(1)
  02c2414  fmuls 10, 8, 8
  02c2418  fmuls 9, 9, 8
  02c241c  fmuls 12, 7, 10
  02c2420  fmuls 11, 11, 10
  02c2424  fmuls 7, 10, 10
  02c2428  stfs 9, 344(1)
  02c242c  fmuls 8, 12, 8
  02c2430  stfs 11, 348(1)
  02c2434  stfs 8, 352(1)
  02c2438  lfs 8, 324(5)
  02c243c  fmuls 8, 8, 7
  02c2440  stfs 8, 340(5)
  02c2444  lfs 8, 4(6)
  02c2448  addic 6, 6, 8
  02c244c  fmuls 8, 8, 7
  02c2450  addic 5, 5, 8
  02c2454  stfs 8, 4(7)
  02c2458  addic 7, 7, 8
  02c245c  bdnz 0x2c2438
  02c2460  li 7, 4
  02c2464  ori 5, 1, 0
  02c2468  mtctr 7
  02c246c  lis 6, 115
  02c2470  addic 7, 5, 340
  02c2474  addic 6, 6, 22752
  02c2478  ori 9, 7, 0
  02c247c  lfs 7, 340(5)
  02c2480  lfs 8, 0(6)
  02c2484  fmuls 7, 7, 8
  02c2488  lfs 8, 4(6)
  02c248c  addic 6, 6, 8
  02c2490  stfs 7, 340(5)
  02c2494  lfs 7, 4(7)
  02c2498  addic 5, 5, 8
  02c249c  fmuls 7, 7, 8
  02c24a0  stfs 7, 4(7)
  02c24a4  addic 7, 7, 8
  02c24a8  bdnz 0x2c247c
  02c24ac  ori 5, 1, 0
  02c24b0  fmr 7, 15
  02c24b4  mtctr 8
  02c24b8  lfs 8, 340(5)
  02c24bc  fadds 7, 7, 8
  02c24c0  lfs 8, 4(9)
  02c24c4  addic 5, 5, 16
  02c24c8  lfs 9, 8(9)
  02c24cc  lfs 10, 12(9)
  02c24d0  addic 9, 9, 16
  02c24d4  fadds 7, 7, 8
  02c24d8  fadds 7, 7, 9
  02c24dc  fadds 7, 7, 10
  02c24e0  bdnz 0x2c24b8
  02c24e4  fadds 7, 7, 3
  02c24e8  fmadds 31, 7, 31, 5
  02c24ec  fmr 5, 4
  02c24f0  fsubs 4, 17, 30
  02c24f4  fsubs 5, 16, 5
  02c24f8  fabs 8, 4
  02c24fc  stfs 4, 220(1)
  02c2500  fabs 9, 5
  02c2504  stfs 5, 224(1)
  02c2508  lwz 5, 220(1)
  02c250c  lfs 10, 220(1)
  02c2510  fsubs 7, 8, 9
  02c2514  stfs 7, 228(1)
  02c2518  fabs 7, 10
  02c251c  lwz 6, 224(1)
  02c2520  lfs 10, 224(1)
  02c2524  lwz 7, 228(1)
  02c2528  lfs 11, 228(1)
  02c252c  rlwinm 6, 6, 3, 29, 29
  02c2530  fabs 10, 10
  02c2534  fsub 12, 11, 15
  02c2538  rlwimi 6, 7, 2, 30, 30
  02c253c  fsub 11, 11, 15
  02c2540  rlwimi 6, 5, 4, 28, 28
  02c2544  ori 5, 3, 0
  02c2548  rlwimi 5, 6, 2, 26, 28
  02c254c  slwi 6, 6, 2
  02c2550  clrldi 5, 5, 32
  02c2554  fsel 9, 12, 7, 9
  02c2558  fsel 8, 11, 10, 8
  02c255c  lfsx 30, 3, 6
  02c2560  lfs 7, 4(5)
  02c2564  fcmpu 0, 9, 15
  02c2568  bt 1, 0x2c2574
  02c256c  fmr 30, 15
  02c2570  b 0x2c268c
  02c2574  fsubs 10, 8, 9
  02c2578  fadds 8, 8, 9
  02c257c  addic 5, 1, 16
  02c2580  li 8, 2
  02c2584  addic 7, 5, 308
  02c2588  addic 6, 5, 292
  02c258c  mtctr 8
  02c2590  fdivs 8, 10, 8
  02c2594  fmuls 9, 8, 8
  02c2598  stfs 8, 308(4)
  02c259c  stfs 8, 312(4)
  02c25a0  stfs 8, 316(4)
  02c25a4  stfs 8, 320(4)
  02c25a8  lfs 8, 320(1)
  02c25ac  lfs 10, 312(1)
  02c25b0  lfs 12, 316(1)
  02c25b4  fmuls 11, 9, 9
  02c25b8  fmuls 10, 10, 9
  02c25bc  fmuls 13, 8, 11
  02c25c0  fmuls 12, 12, 11
  02c25c4  fmuls 8, 11, 11
  02c25c8  stfs 10, 312(1)
  02c25cc  fmuls 9, 13, 9
  02c25d0  stfs 12, 316(1)
  02c25d4  stfs 9, 320(1)
  02c25d8  lfs 9, 292(5)
  02c25dc  fmuls 9, 9, 8
  02c25e0  stfs 9, 308(5)
  02c25e4  lfs 9, 4(6)
  02c25e8  addic 6, 6, 8
  02c25ec  fmuls 9, 9, 8
  02c25f0  addic 5, 5, 8
  02c25f4  stfs 9, 4(7)
  02c25f8  addic 7, 7, 8
  02c25fc  bdnz 0x2c25d8
  02c2600  li 7, 4
  02c2604  ori 5, 1, 0
  02c2608  mtctr 7
  02c260c  lis 6, 115
  02c2610  addic 7, 5, 308
  02c2614  addic 6, 6, 22752
  02c2618  ori 9, 7, 0
  02c261c  lfs 8, 308(5)
  02c2620  lfs 9, 0(6)
  02c2624  fmuls 8, 8, 9
  02c2628  lfs 9, 4(6)
  02c262c  addic 6, 6, 8
  02c2630  stfs 8, 308(5)
  02c2634  lfs 8, 4(7)
  02c2638  addic 5, 5, 8
  02c263c  fmuls 8, 8, 9
  02c2640  stfs 8, 4(7)
  02c2644  addic 7, 7, 8
  02c2648  bdnz 0x2c261c
  02c264c  ori 5, 1, 0
  02c2650  fmr 8, 15
  02c2654  mtctr 8
  02c2658  lfs 9, 308(5)
  02c265c  fadds 8, 8, 9
  02c2660  lfs 9, 4(9)
  02c2664  addic 5, 5, 16
  02c2668  lfs 10, 8(9)
  02c266c  lfs 11, 12(9)
  02c2670  addic 9, 9, 16
  02c2674  fadds 8, 8, 9
  02c2678  fadds 8, 8, 10
  02c267c  fadds 8, 8, 11
  02c2680  bdnz 0x2c2658
  02c2684  fadds 8, 8, 3
  02c2688  fmadds 30, 8, 30, 7
  02c268c  fmuls 6, 6, 6
  02c2690  fmadds 6, 14, 14, 6
  02c2694  fsubs 14, 1, 18
  02c2698  fsqrts 6, 6
  02c269c  stfs 14, 212(1)
  02c26a0  fabs 9, 14
  02c26a4  fabs 8, 6
  02c26a8  stfs 6, 208(1)
  02c26ac  lwz 5, 212(1)
  02c26b0  rlwinm 5, 5, 3, 29, 29
  02c26b4  fsubs 6, 8, 9
  02c26b8  stfs 6, 216(1)
  02c26bc  lwz 6, 208(1)
  02c26c0  lfs 6, 208(1)
  02c26c4  lfs 7, 212(1)
  02c26c8  lwz 7, 216(1)
  02c26cc  lfs 10, 216(1)
  02c26d0  fabs 6, 6
  02c26d4  rlwimi 5, 7, 2, 30, 30
  02c26d8  fsub 11, 10, 15
  02c26dc  fabs 7, 7
  02c26e0  fsub 10, 10, 15
  02c26e4  rlwimi 5, 6, 4, 28, 28
  02c26e8  ori 6, 3, 0
  02c26ec  rlwimi 6, 5, 2, 26, 28
  02c26f0  slwi 5, 5, 2
  02c26f4  clrldi 6, 6, 32
  02c26f8  fsel 9, 11, 6, 9
  02c26fc  lfsx 6, 3, 5
  02c2700  fsel 8, 10, 7, 8
  02c2704  lfs 7, 4(6)
  02c2708  fcmpu 0, 9, 15
  02c270c  bt 1, 0x2c2718
  02c2710  fmr 29, 15
  02c2714  b 0x2c2830
  02c2718  fsubs 10, 8, 9
  02c271c  fadds 8, 8, 9
  02c2720  addic 5, 1, 16
  02c2724  li 9, 2
  02c2728  addic 6, 5, 260
  02c272c  addic 7, 5, 276
  02c2730  mtctr 9
  02c2734  fdivs 8, 10, 8
  02c2738  fmuls 9, 8, 8
  02c273c  stfs 8, 276(4)
  02c2740  stfs 8, 280(4)
  02c2744  stfs 8, 284(4)
  02c2748  stfs 8, 288(4)
  02c274c  lfs 8, 288(1)
  02c2750  lfs 10, 280(1)
  02c2754  lfs 12, 284(1)
  02c2758  fmuls 11, 9, 9
  02c275c  fmuls 10, 10, 9
  02c2760  fmuls 13, 8, 11
  02c2764  fmuls 12, 12, 11
  02c2768  fmuls 8, 11, 11
  02c276c  stfs 10, 280(1)
  02c2770  fmuls 9, 13, 9
  02c2774  stfs 12, 284(1)
  02c2778  stfs 9, 288(1)
  02c277c  lfs 9, 260(5)
  02c2780  fmuls 9, 9, 8
  02c2784  stfs 9, 276(5)
  02c2788  lfs 9, 4(6)
  02c278c  addic 5, 5, 8
  02c2790  addic 6, 6, 8
  02c2794  fmuls 9, 9, 8
  02c2798  stfs 9, 4(7)
  02c279c  addic 7, 7, 8
  02c27a0  bdnz 0x2c277c
  02c27a4  li 7, 4
  02c27a8  ori 5, 1, 0
  02c27ac  mtctr 7
  02c27b0  lis 6, 115
  02c27b4  addic 7, 5, 276
  02c27b8  addic 6, 6, 22752
  02c27bc  ori 8, 7, 0
  02c27c0  lfs 8, 276(5)
  02c27c4  lfs 9, 0(6)
  02c27c8  fmuls 8, 8, 9
  02c27cc  lfs 9, 4(6)
  02c27d0  addic 6, 6, 8
  02c27d4  stfs 8, 276(5)
  02c27d8  lfs 8, 4(7)
  02c27dc  addic 5, 5, 8
  02c27e0  fmuls 8, 8, 9
  02c27e4  stfs 8, 4(7)
  02c27e8  addic 7, 7, 8
  02c27ec  bdnz 0x2c27c0
  02c27f0  fmr 29, 15
  02c27f4  ori 5, 1, 0
  02c27f8  mtctr 9
  02c27fc  lfs 8, 276(5)
  02c2800  lfs 9, 4(8)
  02c2804  fadds 8, 29, 8
  02c2808  lfs 10, 8(8)
  02c280c  addic 5, 5, 16
  02c2810  lfs 29, 12(8)
  02c2814  addic 8, 8, 16
  02c2818  fadds 8, 8, 9
  02c281c  fadds 8, 8, 10
  02c2820  fadds 29, 8, 29
  02c2824  bdnz 0x2c27fc
  02c2828  fadds 29, 29, 3
  02c282c  fmadds 29, 29, 6, 7
  02c2830  fmuls 5, 5, 5
  02c2834  fsubs 1, 2, 1
  02c2838  fmadds 4, 4, 4, 5
  02c283c  fabs 5, 1
  02c2840  stfs 1, 200(1)
  02c2844  fsqrts 4, 4
  02c2848  fabs 6, 4
  02c284c  stfs 4, 196(1)
  02c2850  lwz 5, 200(1)
  02c2854  lfs 2, 200(1)
  02c2858  rlwinm 5, 5, 3, 29, 29
  02c285c  fabs 4, 2
  02c2860  fsubs 1, 6, 5
  02c2864  stfs 1, 204(1)
  02c2868  lwz 6, 196(1)
  02c286c  lfs 1, 196(1)
  02c2870  lwz 7, 204(1)
  02c2874  lfs 2, 204(1)
  02c2878  fabs 1, 1
  02c287c  rlwimi 5, 7, 2, 30, 30
  02c2880  fsub 7, 2, 15
  02c2884  fsub 8, 2, 15
  02c2888  rlwimi 5, 6, 4, 28, 28
  02c288c  ori 6, 3, 0
  02c2890  rlwimi 6, 5, 2, 26, 28
  02c2894  slwi 5, 5, 2
  02c2898  clrldi 6, 6, 32
  02c289c  fsel 5, 7, 1, 5
  02c28a0  lfsx 1, 3, 5
  02c28a4  fsel 4, 8, 4, 6
  02c28a8  lfs 2, 4(6)
  02c28ac  fcmpu 0, 5, 15
  02c28b0  bt 1, 0x2c28bc
  02c28b4  fmr 3, 15
  02c28b8  b 0x2c29d4
  02c28bc  fsubs 6, 4, 5
  02c28c0  fadds 4, 4, 5
  02c28c4  li 6, 2
  02c28c8  mtctr 6
  02c28cc  fdivs 4, 6, 4
  02c28d0  fmuls 5, 4, 4
  02c28d4  stfs 4, 244(4)
  02c28d8  stfs 4, 248(4)
  02c28dc  stfs 4, 252(4)
  02c28e0  stfs 4, 256(4)
  02c28e4  lfs 4, 256(1)
  02c28e8  lfs 6, 248(1)
  02c28ec  addic 4, 1, 16
  02c28f0  lfs 8, 252(1)
  02c28f4  fmuls 7, 5, 5
  02c28f8  fmuls 6, 6, 5
  02c28fc  addic 3, 4, 228
  02c2900  addic 5, 4, 244
  02c2904  fmuls 9, 4, 7
  02c2908  fmuls 8, 8, 7
  02c290c  fmuls 4, 7, 7
  02c2910  stfs 6, 248(1)
  02c2914  fmuls 5, 9, 5
  02c2918  stfs 8, 252(1)
  02c291c  stfs 5, 256(1)
  02c2920  lfs 5, 228(4)
  02c2924  fmuls 5, 5, 4
  02c2928  stfs 5, 244(4)
  02c292c  lfs 5, 4(3)
  02c2930  addic 3, 3, 8
  02c2934  fmuls 5, 5, 4
  02c2938  addic 4, 4, 8
  02c293c  stfs 5, 4(5)
  02c2940  addic 5, 5, 8
  02c2944  bdnz 0x2c2920
  02c2948  li 5, 4
  02c294c  ori 3, 1, 0
  02c2950  mtctr 5
  02c2954  lis 4, 115
  02c2958  addic 5, 3, 244
  02c295c  addic 4, 4, 22752
  02c2960  ori 7, 5, 0
  02c2964  lfs 4, 244(3)
  02c2968  lfs 5, 0(4)
  02c296c  fmuls 4, 4, 5
  02c2970  lfs 5, 4(4)
  02c2974  addic 4, 4, 8
  02c2978  stfs 4, 244(3)
  02c297c  lfs 4, 4(5)
  02c2980  addic 3, 3, 8
  02c2984  fmuls 4, 4, 5
  02c2988  stfs 4, 4(5)
  02c298c  addic 5, 5, 8
  02c2990  bdnz 0x2c2964
  02c2994  ori 3, 1, 0
  02c2998  fmr 4, 15
  02c299c  mtctr 6
  02c29a0  lfs 5, 244(3)
  02c29a4  fadds 4, 4, 5
  02c29a8  lfs 5, 4(7)
  02c29ac  addic 3, 3, 16
  02c29b0  lfs 6, 8(7)
  02c29b4  lfs 7, 12(7)
  02c29b8  addic 7, 7, 16
  02c29bc  fadds 4, 4, 5
  02c29c0  fadds 4, 4, 6
  02c29c4  fadds 4, 4, 7
  02c29c8  bdnz 0x2c29a0
  02c29cc  fadds 3, 4, 3
  02c29d0  fmadds 3, 3, 1, 2
  02c29d4  fmr 1, 3
  02c29d8  fmr 2, 29
  02c29dc  bl 0x5025e0
  02c29e0  nop
  02c29e4  lfs 3, 104(30)
  02c29e8  fmr 2, 29
  02c29ec  fmuls 1, 1, 3
  02c29f0  bl 0x502578
  02c29f4  nop
  02c29f8  stfs 1, 116(1)
  02c29fc  fmr 2, 31
  02c2a00  fmr 1, 30
  02c2a04  bl 0x5025e0
  02c2a08  nop
  02c2a0c  lfs 3, 104(30)
  02c2a10  fmr 2, 31
  02c2a14  fmuls 1, 1, 3
  02c2a18  bl 0x502578
  02c2a1c  nop
  02c2a20  fmr 31, 1
  02c2a24  lfs 1, 112(1)
  02c2a28  lfs 2, 116(1)
  02c2a2c  stfs 1, 64(31)
  02c2a30  lfs 1, 124(1)
  02c2a34  stfs 2, 68(31)
  02c2a38  stfs 1, 76(31)
  02c2a3c  stfs 31, 120(1)
  02c2a40  stfs 31, 72(31)
  02c2a44  lwz 3, 108(30)
  02c2a48  cmpwi 3, 0
  02c2a4c  bf 1, 0x2c2a78
  02c2a50  lis 3, 44
  02c2a54  fmr 1, 31
  02c2a58  addi 3, 3, 8704
  02c2a5c  lfs 2, 8(3)
  02c2a60  bl 0x502578
  02c2a64  nop
  02c2a68  lfs 2, 68(31)
  02c2a6c  stfs 1, 72(31)
  02c2a70  fneg 2, 2
  02c2a74  stfs 2, 68(31)
  02c2a78  fsubs 1, 17, 20
  02c2a7c  lfs 3, 104(30)
  02c2a80  fsubs 2, 16, 19
  02c2a84  addic 3, 1, 128
  02c2a88  addic 4, 1, 112
  02c2a8c  fmadds 31, 3, 14, 18
  02c2a90  fmadds 30, 3, 1, 20
  02c2a94  fmadds 29, 3, 2, 19
  02c2a98  bl 0x500ca4
  02c2a9c  nop
  02c2aa0  lis 3, 44
  02c2aa4  lfs 1, 112(30)
  02c2aa8  addi 3, 3, 8704
  02c2aac  lfs 2, 12(3)
  02c2ab0  lfs 3, 16(3)
  02c2ab4  fsubs 8, 2, 1
  02c2ab8  lfs 4, 148(1)
  02c2abc  fsubs 10, 3, 1
  02c2ac0  lfs 5, 36(3)
  02c2ac4  fmuls 12, 4, 4
  02c2ac8  fadds 5, 1, 5
  02c2acc  lfs 6, 144(1)
  02c2ad0  lfs 7, 164(1)
  02c2ad4  lfs 9, 152(1)
  02c2ad8  fmuls 26, 7, 7
  02c2adc  lfs 11, 160(1)
  02c2ae0  lfs 13, 168(1)
  02c2ae4  fsub 0, 1, 8
  02c2ae8  fmadds 12, 6, 6, 12
  02c2aec  fsubs 2, 2, 5
  02c2af0  fsubs 3, 3, 5
  02c2af4  fsel 1, 0, 8, 1
  02c2af8  lfs 8, 20(3)
  02c2afc  fmadds 12, 9, 9, 12
  02c2b00  fsub 0, 5, 2
  02c2b04  fsub 28, 10, 1
  02c2b08  fsqrts 12, 12
  02c2b0c  li 4, 0
  02c2b10  lis 5, 114
  02c2b14  fsel 1, 28, 10, 1
  02c2b18  fsel 2, 0, 2, 5
  02c2b1c  fmadds 10, 11, 11, 26
  02c2b20  lfs 5, 24(3)
  02c2b24  lfs 0, 28(3)
  02c2b28  lfs 24, 120(30)
  02c2b2c  lfs 23, 32(3)
  02c2b30  fmr 26, 23
  02c2b34  fmuls 28, 1, 1
  02c2b38  fsub 27, 3, 2
  02c2b3c  fmadds 10, 13, 13, 10
  02c2b40  fmuls 25, 28, 1
  02c2b44  fsel 2, 27, 3, 2
  02c2b48  fsqrts 3, 10
  02c2b4c  lfs 10, 20(31)
  02c2b50  lfs 27, 16(31)
  02c2b54  lfs 23, 24(31)
  02c2b58  stw 4, 192(1)
  02c2b5c  lis 4, 114
  02c2b60  fmuls 22, 28, 25
  02c2b64  fmadds 1, 25, 8, 1
  02c2b68  fmuls 25, 2, 2
  02c2b6c  fmuls 21, 28, 22
  02c2b70  fmadds 1, 22, 5, 1
  02c2b74  fmuls 22, 25, 2
  02c2b78  fmuls 28, 28, 21
  02c2b7c  fmadds 1, 21, 0, 1
  02c2b80  fmuls 21, 25, 22
  02c2b84  fmadds 2, 22, 8, 2
  02c2b88  fmadds 1, 28, 26, 1
  02c2b8c  fmuls 8, 25, 21
  02c2b90  fmadds 2, 21, 5, 2
  02c2b94  fsub 28, 15, 12
  02c2b98  fmuls 1, 24, 1
  02c2b9c  fmuls 5, 25, 8
  02c2ba0  fmadds 2, 8, 0, 2
  02c2ba4  fsub 0, 15, 12
  02c2ba8  fsub 8, 12, 15
  02c2bac  fsub 25, 15, 3
  02c2bb0  fsub 21, 15, 3
  02c2bb4  fdivs 1, 1, 12
  02c2bb8  fmadds 2, 5, 26, 2
  02c2bbc  fsub 5, 15, 12
  02c2bc0  fsub 26, 12, 15
  02c2bc4  fsub 12, 12, 15
  02c2bc8  fsub 22, 15, 3
  02c2bcc  fsub 20, 3, 15
  02c2bd0  fmuls 2, 24, 2
  02c2bd4  fsub 24, 3, 15
  02c2bd8  fdivs 2, 2, 3
  02c2bdc  fsub 3, 3, 15
  02c2be0  fmuls 4, 4, 1
  02c2be4  fmuls 6, 6, 1
  02c2be8  fmuls 1, 9, 1
  02c2bec  fsel 5, 5, 15, 4
  02c2bf0  fsel 9, 0, 15, 6
  02c2bf4  fsel 0, 28, 15, 1
  02c2bf8  fsel 4, 8, 5, 4
  02c2bfc  fsel 5, 26, 9, 6
  02c2c00  fsel 1, 12, 0, 1
  02c2c04  lfs 12, 40(3)
  02c2c08  fadds 4, 4, 29
  02c2c0c  fadds 5, 5, 30
  02c2c10  fadds 1, 1, 31
  02c2c14  fmuls 6, 7, 2
  02c2c18  fmuls 7, 11, 2
  02c2c1c  fmuls 2, 13, 2
  02c2c20  fsel 8, 25, 15, 6
  02c2c24  fsel 9, 22, 15, 7
  02c2c28  fsel 11, 21, 15, 2
  02c2c2c  fsel 6, 24, 8, 6
  02c2c30  fmr 8, 12
  02c2c34  fsel 2, 3, 11, 2
  02c2c38  fsel 7, 20, 9, 7
  02c2c3c  lfs 3, -3048(5)
  02c2c40  addic 5, 30, 128
  02c2c44  fadds 31, 6, 4
  02c2c48  fadds 29, 2, 1
  02c2c4c  fmuls 2, 3, 8
  02c2c50  fadds 30, 7, 5
  02c2c54  lfs 4, 44(3)
  02c2c58  lfs 7, -3052(4)
  02c2c5c  addic 3, 1, 192
  02c2c60  fmuls 4, 7, 4
  02c2c64  fsubs 3, 10, 31
  02c2c68  fsubs 6, 23, 29
  02c2c6c  fsubs 5, 27, 30
  02c2c70  fmuls 1, 3, 3
  02c2c74  fmr 3, 2
  02c2c78  fmadds 1, 5, 5, 1
  02c2c7c  fmadds 1, 6, 6, 1
  02c2c80  fsqrts 1, 1
  02c2c84  bl 0x109c30
  02c2c88  nop
  02c2c8c  lfs 1, 20(31)
  02c2c90  lfs 2, 16(31)
  02c2c94  fsubs 3, 31, 1
  02c2c98  fsubs 4, 30, 2
  02c2c9c  lfs 5, 24(31)
  02c2ca0  fsubs 6, 29, 5
  02c2ca4  lfs 8, 128(30)
  02c2ca8  fmuls 7, 3, 3
  02c2cac  fmadds 7, 4, 4, 7
  02c2cb0  fmadds 7, 6, 6, 7
  02c2cb4  fsqrts 7, 7
  02c2cb8  fdivs 8, 8, 7
  02c2cbc  fsub 9, 15, 7
  02c2cc0  fsub 10, 15, 7
  02c2cc4  fsub 11, 15, 7
  02c2cc8  fsub 12, 7, 15
  02c2ccc  fsub 13, 7, 15
  02c2cd0  fsub 7, 7, 15
  02c2cd4  fmuls 6, 6, 8
  02c2cd8  fmuls 3, 3, 8
  02c2cdc  fmuls 4, 4, 8
  02c2ce0  fsel 8, 9, 15, 6
  02c2ce4  fsel 9, 10, 15, 3
  02c2ce8  fsel 10, 11, 15, 4
  02c2cec  fsel 6, 12, 8, 6
  02c2cf0  fsel 3, 13, 9, 3
  02c2cf4  fsel 4, 7, 10, 4
  02c2cf8  fadds 5, 5, 6
  02c2cfc  fadds 1, 1, 3
  02c2d00  fadds 2, 2, 4
  02c2d04  stfs 5, 24(31)
  02c2d08  stfs 1, 20(31)
  02c2d0c  stfs 2, 16(31)
  02c2d10  ld 0, 560(1)
  02c2d14  mtlr 0
  02c2d18  lfd 14, 400(1)
  02c2d1c  lfd 15, 408(1)
  02c2d20  lfd 16, 416(1)
  02c2d24  lfd 17, 424(1)
  02c2d28  lfd 18, 432(1)
  02c2d2c  lfd 19, 440(1)
  02c2d30  lfd 20, 448(1)
  02c2d34  lfd 21, 456(1)
  02c2d38  lfd 22, 464(1)
  02c2d3c  lfd 23, 472(1)
  02c2d40  lfd 24, 480(1)
  02c2d44  lfd 25, 488(1)
  02c2d48  lfd 26, 496(1)
  02c2d4c  lfd 27, 504(1)
  02c2d50  lfd 28, 512(1)
  02c2d54  lfd 29, 520(1)
  02c2d58  lfd 30, 528(1)
  02c2d5c  lfd 31, 536(1)
  02c2d60  ld 30, 384(1)
  02c2d64  ld 31, 392(1)
  02c2d68  addi 1, 1, 544
  02c2d6c  blr

M1843_002c2d80:   # 0x2c2d80, 0x314 bytes
  02c2d80  stdu 1, -144(1)
  02c2d84  mflr 0
  02c2d88  std 0, 160(1)
  02c2d8c  std 31, 136(1)
  02c2d90  ori 31, 3, 0
  02c2d94  lis 4, 51
  02c2d98  std 30, 128(1)
  02c2d9c  li 5, 0
  02c2da0  lwz 30, 120(31)
  02c2da4  bl 0x10675c
  02c2da8  nop
  02c2dac  lis 4, 151
  02c2db0  li 5, 255
  02c2db4  addic 6, 4, -25376
  02c2db8  stb 5, 164(31)
  02c2dbc  lbz 4, 32(31)
  02c2dc0  lwz 5, 8324(6)
  02c2dc4  cmpwi 5, 50
  02c2dc8  bt 2, 0x2c2ddc
  02c2dcc  li 8, 0
  02c2dd0  lhz 6, 52(31)
  02c2dd4  rlwimi 6, 8, 0, 19, 19
  02c2dd8  b 0x2c2de4
  02c2ddc  lhz 6, 52(31)
  02c2de0  ori 6, 6, 4096
  02c2de4  cmpwi 3, 0
  02c2de8  sth 6, 52(31)
  02c2dec  bt 2, 0x2c2fdc
  02c2df0  lis 4, 162
  02c2df4  lis 5, 0
  02c2df8  ori 5, 5, 65535
  02c2dfc  lhz 4, 22516(4)
  02c2e00  cmpw 4, 5
  02c2e04  bf 0, 0x2c2e14
  02c2e08  lis 5, 162
  02c2e0c  addic 4, 4, 1
  02c2e10  sth 4, 22516(5)
  02c2e14  lis 4, 161
  02c2e18  lis 5, 114
  02c2e1c  lwz 4, -2344(4)
  02c2e20  extsw 4, 4
  02c2e24  std 4, 112(1)
  02c2e28  lis 4, 44
  02c2e2c  addi 4, 4, 11632
  02c2e30  lfs 1, 0(4)
  02c2e34  lfs 2, -3056(5)
  02c2e38  lfd 3, 112(1)
  02c2e3c  lis 4, 6990
  02c2e40  fcfid 3, 3
  02c2e44  ori 5, 4, 33205
  02c2e48  lis 4, 162
  02c2e4c  lhz 6, 22518(4)
  02c2e50  frsp 3, 3
  02c2e54  fadds 1, 3, 1
  02c2e58  fmuls 1, 2, 1
  02c2e5c  fctiwz 1, 1
  02c2e60  stfd 1, 112(1)
  02c2e64  lwz 4, 116(1)
  02c2e68  mulhw 5, 5, 4
  02c2e6c  srawi 5, 5, 6
  02c2e70  srwi 7, 5, 31
  02c2e74  addc 5, 5, 7
  02c2e78  cmpw 5, 6
  02c2e7c  bf 1, 0x2c2ea0
  02c2e80  lis 5, 6990
  02c2e84  ori 5, 5, 33205
  02c2e88  mulhw 4, 5, 4
  02c2e8c  lis 5, 162
  02c2e90  srawi 4, 4, 6
  02c2e94  srwi 6, 4, 31
  02c2e98  addc 4, 4, 6
  02c2e9c  sth 4, 22518(5)
  02c2ea0  lis 4, 162
  02c2ea4  lis 5, 151
  02c2ea8  li 6, 1
  02c2eac  lis 7, -32768
  02c2eb0  lwz 8, 22520(4)
  02c2eb4  lwz 5, -25488(5)
  02c2eb8  slw 6, 6, 5
  02c2ebc  cmpwi 5, 11
  02c2ec0  or 6, 8, 6
  02c2ec4  or 5, 6, 7
  02c2ec8  stw 5, 22520(4)
  02c2ecc  bf 2, 0x2c2f0c
  02c2ed0  lwz 3, 32(3)
  02c2ed4  cmpwi 3, 0
  02c2ed8  bt 2, 0x2c2f0c
  02c2edc  lhz 3, 166(3)
  02c2ee0  cmpwi 3, 172
  02c2ee4  bf 2, 0x2c2f0c
  02c2ee8  lis 3, 151
  02c2eec  lwz 4, -13848(3)
  02c2ef0  addic 4, 4, 1
  02c2ef4  cmpwi 4, 3
  02c2ef8  stw 4, -13848(3)
  02c2efc  bt 0, 0x2c2f0c
  02c2f00  li 3, 18
  02c2f04  bl 0x11b728
  02c2f08  nop
  02c2f0c  lwz 3, 136(30)
  02c2f10  cmpwi 1, 3, 0
  02c2f14  bt 6, 0x2c2f78
  02c2f18  lbz 3, 32(31)
  02c2f1c  cmpwi 3, 6
  02c2f20  bt 2, 0x2c2f78
  02c2f24  li 3, 6
  02c2f28  lbz 4, 83(31)
  02c2f2c  cmpwi 4, 1
  02c2f30  stb 3, 32(31)
  02c2f34  bt 2, 0x2c307c
  02c2f38  lis 3, 44
  02c2f3c  lis 4, 114
  02c2f40  addi 3, 3, 11632
  02c2f44  li 5, 0
  02c2f48  lfs 1, 4(3)
  02c2f4c  lfs 2, -3056(4)
  02c2f50  ori 3, 31, 0
  02c2f54  fmuls 1, 2, 1
  02c2f58  li 4, 1
  02c2f5c  fctiwz 1, 1
  02c2f60  stfd 1, 112(1)
  02c2f64  lwz 6, 116(1)
  02c2f68  extsw 6, 6
  02c2f6c  bl 0xfddc0
  02c2f70  nop
  02c2f74  b 0x2c307c
  02c2f78  bf 6, 0x2c307c
  02c2f7c  lbz 3, 32(31)
  02c2f80  cmpwi 3, 2
  02c2f84  bt 2, 0x2c307c
  02c2f88  li 3, 2
  02c2f8c  lbz 4, 83(31)
  02c2f90  cmpwi 4, 1
  02c2f94  stb 3, 32(31)
  02c2f98  bt 2, 0x2c307c
  02c2f9c  lis 3, 44
  02c2fa0  lis 4, 114
  02c2fa4  addi 3, 3, 11632
  02c2fa8  li 5, 0
  02c2fac  lfs 1, 4(3)
  02c2fb0  lfs 2, -3056(4)
  02c2fb4  ori 3, 31, 0
  02c2fb8  li 4, 1
  02c2fbc  fmuls 1, 2, 1
  02c2fc0  fctiwz 1, 1
  02c2fc4  stfd 1, 112(1)
  02c2fc8  lwz 6, 116(1)
  02c2fcc  extsw 6, 6
  02c2fd0  bl 0xfddc0
  02c2fd4  nop
  02c2fd8  b 0x2c307c
  02c2fdc  cmpwi 4, 5
  02c2fe0  bf 2, 0x2c307c
  02c2fe4  cmpwi 5, 50
  02c2fe8  bt 2, 0x2c3004
  02c2fec  li 3, 4
  02c2ff0  ori 4, 6, 1
  02c2ff4  li 5, 0
  02c2ff8  stb 3, 32(31)
  02c2ffc  sth 4, 52(31)
  02c3000  stw 5, 148(31)
  02c3004  lis 4, 44
  02c3008  addic 3, 31, 16
  02c300c  addi 4, 4, 11632
  02c3010  li 5, 0
  02c3014  ori 6, 31, 0
  02c3018  lfs 1, 8(4)
  02c301c  bl 0x59e20
  02c3020  nop
  02c3024  cmpwi 3, 0
  02c3028  bt 2, 0x2c307c
  02c302c  li 3, 6
  02c3030  lbz 4, 83(31)
  02c3034  cmpwi 4, 1
  02c3038  stb 3, 32(31)
  02c303c  bt 2, 0x2c307c
  02c3040  lis 3, 44
  02c3044  lis 4, 114
  02c3048  addi 3, 3, 11632
  02c304c  li 5, 0
  02c3050  lfs 1, 4(3)
  02c3054  lfs 2, -3056(4)
  02c3058  ori 3, 31, 0
  02c305c  fmuls 1, 2, 1
  02c3060  li 4, 1
  02c3064  fctiwz 1, 1
  02c3068  stfd 1, 112(1)
  02c306c  lwz 6, 116(1)
  02c3070  extsw 6, 6
  02c3074  bl 0xfddc0
  02c3078  nop
  02c307c  ld 0, 160(1)
  02c3080  mtlr 0
  02c3084  ld 30, 128(1)
  02c3088  ld 31, 136(1)
  02c308c  addi 1, 1, 144
  02c3090  blr

UpdateMoby_1843:   # 0x2c3118, 0x156c bytes
  02c3118  stdu 1, -640(1)
  02c311c  mflr 0
  02c3120  std 0, 656(1)
  02c3124  stfd 14, 496(1)
  02c3128  stfd 15, 504(1)
  02c312c  stfd 16, 512(1)
  02c3130  stfd 17, 520(1)
  02c3134  stfd 18, 528(1)
  02c3138  stfd 19, 536(1)
  02c313c  stfd 20, 544(1)
  02c3140  stfd 21, 552(1)
  02c3144  stfd 22, 560(1)
  02c3148  stfd 23, 568(1)
  02c314c  stfd 24, 576(1)
  02c3150  stfd 25, 584(1)
  02c3154  stfd 26, 592(1)
  02c3158  stfd 27, 600(1)
  02c315c  stfd 28, 608(1)
  02c3160  stfd 29, 616(1)
  02c3164  stfd 30, 624(1)
  02c3168  stfd 31, 632(1)
  02c316c  std 31, 488(1)
  02c3170  std 30, 480(1)
  02c3174  ori 31, 3, 0
  02c3178  std 29, 472(1)
  02c317c  std 28, 464(1)
  02c3180  std 27, 456(1)
  02c3184  lwz 30, 120(31)
  02c3188  bl 0x2c2d80
  02c318c  lbz 3, 32(31)
  02c3190  cmpwi 3, 3
  02c3194  bt 1, 0x2c31b8
  02c3198  cmpwi 3, 0
  02c319c  bt 1, 0x2c31ac
  02c31a0  cmpwi 3, -1
  02c31a4  bf 1, 0x2c4618
  02c31a8  b 0x2c31d8
  02c31ac  cmpwi 3, 2
  02c31b0  bf 1, 0x2c3280
  02c31b4  b 0x2c3480
  02c31b8  cmpwi 3, 5
  02c31bc  bt 1, 0x2c31cc
  02c31c0  cmpwi 3, 4
  02c31c4  bf 1, 0x2c4618
  02c31c8  b 0x2c35a4
  02c31cc  cmpwi 3, 6
  02c31d0  bf 1, 0x2c451c
  02c31d4  b 0x2c4618
  02c31d8  li 3, 255
  02c31dc  stb 3, 48(31)
  02c31e0  lwz 4, 136(30)
  02c31e4  sth 3, 50(31)
  02c31e8  cmpwi 4, 0
  02c31ec  bf 2, 0x2c3260
  02c31f0  lis 3, 44
  02c31f4  li 4, 1
  02c31f8  addi 29, 3, 12436
  02c31fc  stb 4, 32(31)
  02c3200  lfs 1, 0(29)
  02c3204  lfs 2, 4(29)
  02c3208  bl 0xfe4f0
  02c320c  nop
  02c3210  stfs 1, 108(30)
  02c3214  bl 0xfcc68
  02c3218  nop
  02c321c  stfs 1, 112(30)
  02c3220  lfs 1, 8(29)
  02c3224  lfs 2, 12(29)
  02c3228  bl 0xfe4f0
  02c322c  nop
  02c3230  lfs 2, 16(29)
  02c3234  lis 3, 114
  02c3238  fmuls 1, 1, 2
  02c323c  lfs 3, -3052(3)
  02c3240  fmuls 1, 1, 3
  02c3244  stfs 1, 116(30)
  02c3248  lfs 1, 20(29)
  02c324c  lfs 2, 24(29)
  02c3250  bl 0xfcbe8
  02c3254  nop
  02c3258  stfs 1, 120(30)
  02c325c  b 0x2c4618
  02c3260  li 3, 4
  02c3264  lhz 5, 52(31)
  02c3268  li 4, 0
  02c326c  stb 3, 32(31)
  02c3270  ori 3, 5, 1
  02c3274  stw 4, 148(31)
  02c3278  sth 3, 52(31)
  02c327c  b 0x2c4618
  02c3280  ori 3, 31, 0
  02c3284  bl 0x2c1fc8
  02c3288  lfs 1, 104(30)
  02c328c  lfs 2, 108(30)
  02c3290  lis 3, 44
  02c3294  lfs 3, 112(30)
  02c3298  fadds 1, 1, 2
  02c329c  addi 4, 3, 12436
  02c32a0  lfs 4, 116(30)
  02c32a4  lis 3, 165
  02c32a8  addic 3, 3, 7136
  02c32ac  stfs 1, 104(30)
  02c32b0  lfs 2, 28(4)
  02c32b4  fcmpu 0, 1, 2
  02c32b8  cror 6, 0, 2
  02c32bc  bt 6, 0x2c32f8
  02c32c0  fsubs 1, 1, 2
  02c32c4  lwz 4, 96(30)
  02c32c8  lwz 5, 100(30)
  02c32cc  slwi 4, 4, 2
  02c32d0  addic 5, 5, 1
  02c32d4  extsw 4, 4
  02c32d8  stfs 1, 104(30)
  02c32dc  lwzx 3, 3, 4
  02c32e0  lwz 3, 0(3)
  02c32e4  divw 4, 5, 3
  02c32e8  mullw 3, 4, 3
  02c32ec  subc 3, 5, 3
  02c32f0  stw 3, 100(30)
  02c32f4  b 0x2c3348
  02c32f8  lis 4, 44
  02c32fc  addi 4, 4, 12436
  02c3300  lfs 5, 32(4)
  02c3304  fcmpu 0, 1, 5
  02c3308  cror 6, 1, 2
  02c330c  bt 6, 0x2c3348
  02c3310  fadds 1, 1, 2
  02c3314  lwz 4, 96(30)
  02c3318  lwz 5, 100(30)
  02c331c  slwi 4, 4, 2
  02c3320  extsw 4, 4
  02c3324  stfs 1, 104(30)
  02c3328  lwzx 3, 3, 4
  02c332c  lwz 3, 0(3)
  02c3330  addc 4, 5, 3
  02c3334  addic 4, 4, -1
  02c3338  divw 5, 4, 3
  02c333c  mullw 3, 5, 3
  02c3340  subc 3, 4, 3
  02c3344  stw 3, 100(30)
  02c3348  fmr 1, 3
  02c334c  fmr 2, 4
  02c3350  bl 0x502578
  02c3354  nop
  02c3358  ori 3, 31, 0
  02c335c  bl 0x2c2230
  02c3360  lbz 3, 32(31)
  02c3364  cmpwi 3, 2
  02c3368  bf 2, 0x2c3400
  02c336c  lis 3, 44
  02c3370  addic 30, 31, 16
  02c3374  addi 5, 3, 12436
  02c3378  ori 3, 31, 0
  02c337c  ori 4, 30, 0
  02c3380  li 6, -1
  02c3384  lfs 1, 36(5)
  02c3388  lfs 2, 40(5)
  02c338c  bl 0x10fb28
  02c3390  nop
  02c3394  li 3, 2
  02c3398  bl 0xfc620
  02c339c  nop
  02c33a0  cmpwi 3, 0
  02c33a4  bt 2, 0x2c33bc
  02c33a8  ori 3, 30, 0
  02c33ac  li 4, 224
  02c33b0  bl 0x2f9610
  02c33b4  nop
  02c33b8  b 0x2c33cc
  02c33bc  ori 3, 30, 0
  02c33c0  li 4, 228
  02c33c4  bl 0x2f9610
  02c33c8  nop
  02c33cc  li 3, 1
  02c33d0  li 4, 0
  02c33d4  ori 5, 31, 0
  02c33d8  bl 0x15d12c
  02c33dc  nop
  02c33e0  lhz 3, 52(31)
  02c33e4  li 4, 3
  02c33e8  li 5, 0
  02c33ec  ori 3, 3, 1
  02c33f0  stb 4, 32(31)
  02c33f4  stw 5, 148(31)
  02c33f8  sth 3, 52(31)
  02c33fc  b 0x2c4618
  02c3400  lbz 3, 49(31)
  02c3404  cmpwi 3, 0
  02c3408  bf 2, 0x2c4618
  02c340c  lis 3, 151
  02c3410  lfs 1, 20(31)
  02c3414  addic 3, 3, -25376
  02c3418  lfs 2, 16(31)
  02c341c  lfs 3, 132(3)
  02c3420  lfs 4, 128(3)
  02c3424  fsubs 1, 1, 3
  02c3428  fsubs 2, 2, 4
  02c342c  lfs 3, 24(31)
  02c3430  lfs 4, 136(3)
  02c3434  fsubs 3, 3, 4
  02c3438  lis 3, 44
  02c343c  fmuls 1, 1, 1
  02c3440  addi 3, 3, 12436
  02c3444  fmadds 1, 2, 2, 1
  02c3448  lfs 2, 44(3)
  02c344c  fmadds 1, 3, 3, 1
  02c3450  fsqrts 1, 1
  02c3454  fcmpu 0, 1, 2
  02c3458  cror 6, 1, 2
  02c345c  bt 6, 0x2c4618
  02c3460  li 3, 3
  02c3464  lhz 5, 52(31)
  02c3468  li 4, 0
  02c346c  stb 3, 32(31)
  02c3470  ori 3, 5, 1
  02c3474  stw 4, 148(31)
  02c3478  sth 3, 52(31)
  02c347c  b 0x2c4618
  02c3480  lis 4, 44
  02c3484  addic 3, 31, 16
  02c3488  addi 4, 4, 12436
  02c348c  lfs 1, 48(4)
  02c3490  bl 0x502910
  02c3494  nop
  02c3498  cmpwi 3, -1
  02c349c  bf 2, 0x2c3598
  02c34a0  lis 3, 151
  02c34a4  lfs 1, 20(31)
  02c34a8  lfs 2, 16(31)
  02c34ac  addic 3, 3, -25376
  02c34b0  lfs 3, 132(3)
  02c34b4  lfs 4, 128(3)
  02c34b8  fsubs 1, 1, 3
  02c34bc  fsubs 2, 2, 4
  02c34c0  lfs 3, 24(31)
  02c34c4  lfs 4, 136(3)
  02c34c8  fsubs 3, 3, 4
  02c34cc  lis 3, 44
  02c34d0  fmuls 1, 1, 1
  02c34d4  addi 3, 3, 12436
  02c34d8  fmadds 1, 2, 2, 1
  02c34dc  lfs 2, 44(3)
  02c34e0  fmadds 1, 3, 3, 1
  02c34e4  fsqrts 1, 1
  02c34e8  fcmpu 0, 1, 2
  02c34ec  cror 6, 0, 2
  02c34f0  bt 6, 0x2c3598
  02c34f4  lis 3, 44
  02c34f8  lwz 4, 132(30)
  02c34fc  lis 5, 114
  02c3500  addi 3, 3, 12436
  02c3504  addic 4, 4, 1
  02c3508  stw 4, 132(30)
  02c350c  lfs 1, 52(3)
  02c3510  lfs 2, -3056(5)
  02c3514  fmuls 1, 2, 1
  02c3518  fctiwz 1, 1
  02c351c  stfd 1, 440(1)
  02c3520  lwz 3, 444(1)
  02c3524  cmpw 4, 3
  02c3528  bf 1, 0x2c4618
  02c352c  li 3, 1
  02c3530  lbz 4, 83(31)
  02c3534  cmpwi 4, 0
  02c3538  stb 3, 32(31)
  02c353c  bt 2, 0x2c357c
  02c3540  lis 3, 44
  02c3544  lis 4, 114
  02c3548  addi 3, 3, 12436
  02c354c  li 5, 0
  02c3550  lfs 1, 56(3)
  02c3554  lfs 2, -3056(4)
  02c3558  ori 3, 31, 0
  02c355c  fmuls 1, 2, 1
  02c3560  li 4, 0
  02c3564  fctiwz 1, 1
  02c3568  stfd 1, 440(1)
  02c356c  lwz 6, 444(1)
  02c3570  extsw 6, 6
  02c3574  bl 0xfddc0
  02c3578  nop
  02c357c  lhz 3, 52(31)
  02c3580  lwz 4, 36(31)
  02c3584  rlwinm 3, 3, 0, 0, 30
  02c3588  sth 3, 52(31)
  02c358c  lwz 3, 16(4)
  02c3590  stw 3, 148(31)
  02c3594  b 0x2c4618
  02c3598  li 3, 0
  02c359c  stw 3, 132(30)
  02c35a0  b 0x2c4618
  02c35a4  lis 29, 149
  02c35a8  lis 3, 44
  02c35ac  addic 29, 29, 5056
  02c35b0  addi 3, 3, 12436
  02c35b4  li 4, 0
  02c35b8  lis 7, 16006
  02c35bc  lwz 5, 340(29)
  02c35c0  lfs 22, 32(3)
  02c35c4  srawi 3, 5, 31
  02c35c8  lfs 1, 336(29)
  02c35cc  stw 4, 224(1)
  02c35d0  srwi 6, 3, 1
  02c35d4  stfs 1, 128(1)
  02c35d8  lfs 1, 340(29)
  02c35dc  xor 5, 6, 5
  02c35e0  lfs 2, 344(29)
  02c35e4  ori 6, 7, 2706
  02c35e8  stfs 1, 132(1)
  02c35ec  subc 3, 5, 3
  02c35f0  lfs 1, 348(29)
  02c35f4  stfs 2, 136(1)
  02c35f8  cmpw 3, 6
  02c35fc  stfs 1, 140(1)
  02c3600  stw 4, 128(1)
  02c3604  bf 1, 0x2c3618
  02c3608  lis 3, 16006
  02c360c  ori 3, 3, 2706
  02c3610  stw 3, 132(1)
  02c3614  b 0x2c3634
  02c3618  lis 4, -16007
  02c361c  ori 4, 4, 62830
  02c3620  cmpw 3, 4
  02c3624  bf 0, 0x2c3634
  02c3628  lis 3, -16762
  02c362c  ori 3, 3, 2706
  02c3630  stw 3, 132(1)
  02c3634  addic 3, 1, 176
  02c3638  addic 4, 1, 128
  02c363c  bl 0x500b64
  02c3640  nop
  02c3644  lis 28, 151
  02c3648  lfs 1, 176(30)
  02c364c  lis 3, 44
  02c3650  addic 28, 28, -25376
  02c3654  lfs 2, 180(30)
  02c3658  lfs 3, 184(30)
  02c365c  addi 27, 3, 12436
  02c3660  lfs 4, 128(28)
  02c3664  lfs 5, 132(28)
  02c3668  lfs 6, 136(28)
  02c366c  fsubs 1, 4, 1
  02c3670  lfs 31, 140(28)
  02c3674  fsubs 2, 5, 2
  02c3678  stfs 4, 176(30)
  02c367c  fsubs 3, 6, 3
  02c3680  lfs 4, 132(28)
  02c3684  stfs 4, 180(30)
  02c3688  lfs 4, 136(28)
  02c368c  stfs 4, 184(30)
  02c3690  lfs 4, 140(28)
  02c3694  stfs 4, 188(30)
  02c3698  lfs 4, 16(31)
  02c369c  lfs 5, 20(31)
  02c36a0  fadds 4, 4, 1
  02c36a4  lfs 6, 24(31)
  02c36a8  fadds 5, 5, 2
  02c36ac  fadds 6, 6, 3
  02c36b0  lwz 3, 136(30)
  02c36b4  extsw 3, 3
  02c36b8  stfs 4, 16(31)
  02c36bc  stfs 5, 20(31)
  02c36c0  stfs 6, 24(31)
  02c36c4  lfs 4, 60(27)
  02c36c8  std 3, 440(1)
  02c36cc  stfs 1, 424(1)
  02c36d0  fmr 1, 4
  02c36d4  stfs 2, 420(1)
  02c36d8  stfs 3, 416(1)
  02c36dc  lfs 3, 64(27)
  02c36e0  stfs 1, 428(1)
  02c36e4  lfd 2, 440(1)
  02c36e8  fcfid 2, 2
  02c36ec  frsp 2, 2
  02c36f0  fmuls 2, 2, 3
  02c36f4  bl 0x502578
  02c36f8  nop
  02c36fc  lfs 2, 68(27)
  02c3700  lfs 3, 72(27)
  02c3704  fsubs 7, 2, 1
  02c3708  lfs 4, 196(1)
  02c370c  fsubs 9, 3, 1
  02c3710  lfs 5, 192(1)
  02c3714  fmuls 6, 4, 4
  02c3718  lfs 8, 200(1)
  02c371c  fsub 10, 1, 7
  02c3720  fmadds 6, 5, 5, 6
  02c3724  fsel 7, 10, 7, 1
  02c3728  lfs 10, 76(27)
  02c372c  fmadds 6, 8, 8, 6
  02c3730  lfs 11, 80(27)
  02c3734  lfs 12, 84(27)
  02c3738  fsub 29, 9, 7
  02c373c  fsqrts 6, 6
  02c3740  fsel 7, 29, 9, 7
  02c3744  lfs 9, 88(27)
  02c3748  lfs 0, 20(27)
  02c374c  lfs 30, 204(1)
  02c3750  fmuls 13, 7, 7
  02c3754  stfs 30, 124(1)
  02c3758  fmuls 29, 13, 7
  02c375c  fmuls 28, 13, 29
  02c3760  fmadds 7, 29, 10, 7
  02c3764  fmuls 29, 13, 28
  02c3768  fmadds 7, 28, 11, 7
  02c376c  fsub 26, 22, 6
  02c3770  fsub 25, 22, 6
  02c3774  fsub 24, 22, 6
  02c3778  fsub 23, 6, 22
  02c377c  fsub 21, 6, 22
  02c3780  fmuls 13, 13, 29
  02c3784  fmadds 7, 29, 12, 7
  02c3788  fmadds 7, 13, 9, 7
  02c378c  lfs 13, 212(1)
  02c3790  lfs 30, 208(1)
  02c3794  lfs 29, 180(1)
  02c3798  lfs 28, 216(1)
  02c379c  fmuls 19, 13, 13
  02c37a0  lfs 27, 176(1)
  02c37a4  fmuls 18, 29, 29
  02c37a8  lfs 20, 184(1)
  02c37ac  fmuls 7, 7, 0
  02c37b0  fmadds 19, 30, 30, 19
  02c37b4  fmadds 18, 27, 27, 18
  02c37b8  fdivs 7, 7, 6
  02c37bc  fsub 6, 6, 22
  02c37c0  fmadds 18, 20, 20, 18
  02c37c4  fmadds 19, 28, 28, 19
  02c37c8  fmuls 5, 5, 7
  02c37cc  fmuls 4, 4, 7
  02c37d0  fmuls 7, 8, 7
  02c37d4  fsel 8, 26, 22, 5
  02c37d8  fsel 26, 25, 22, 4
  02c37dc  fsel 25, 24, 22, 7
  02c37e0  fsel 5, 23, 8, 5
  02c37e4  fsel 4, 21, 26, 4
  02c37e8  fsel 6, 6, 25, 7
  02c37ec  stfs 5, 112(1)
  02c37f0  stfs 4, 116(1)
  02c37f4  stfs 6, 120(1)
  02c37f8  lfs 7, 92(27)
  02c37fc  fadds 1, 1, 7
  02c3800  fsqrts 7, 19
  02c3804  lfs 21, 96(27)
  02c3808  lfs 8, 20(31)
  02c380c  lfs 26, 16(31)
  02c3810  fsubs 2, 2, 1
  02c3814  fsubs 3, 3, 1
  02c3818  fsub 25, 1, 2
  02c381c  fsel 1, 25, 2, 1
  02c3820  fsqrts 2, 18
  02c3824  lfs 25, 324(29)
  02c3828  lfs 24, 24(31)
  02c382c  lfs 23, 320(29)
  02c3830  fsub 19, 3, 1
  02c3834  fadds 5, 23, 5
  02c3838  fadds 4, 25, 4
  02c383c  fsub 25, 22, 7
  02c3840  fsel 1, 19, 3, 1
  02c3844  fmuls 3, 1, 1
  02c3848  fmuls 19, 3, 1
  02c384c  fmuls 18, 3, 19
  02c3850  fmadds 1, 19, 10, 1
  02c3854  fsub 23, 22, 2
  02c3858  fsub 17, 22, 2
  02c385c  fsub 19, 2, 22
  02c3860  fsub 16, 2, 22
  02c3864  fmuls 10, 3, 18
  02c3868  fmadds 1, 18, 11, 1
  02c386c  fsub 18, 22, 2
  02c3870  fsub 11, 22, 7
  02c3874  fmuls 3, 3, 10
  02c3878  fmadds 1, 10, 12, 1
  02c387c  fdivs 10, 21, 2
  02c3880  fmadds 1, 3, 9, 1
  02c3884  fsub 2, 2, 22
  02c3888  fsub 12, 7, 22
  02c388c  lfs 3, 328(29)
  02c3890  fadds 3, 3, 6
  02c3894  fsub 6, 7, 22
  02c3898  fmuls 1, 1, 0
  02c389c  fsub 0, 22, 7
  02c38a0  lfs 9, 332(29)
  02c38a4  lbz 3, 5647(28)
  02c38a8  stfs 9, 124(1)
  02c38ac  addic 29, 30, 108
  02c38b0  stfd 31, 432(1)
  02c38b4  fdivs 1, 1, 7
  02c38b8  rlwinm 3, 3, 0, 30, 30
  02c38bc  cmpwi 3, 0
  02c38c0  fsub 7, 7, 22
  02c38c4  fmuls 29, 29, 10
  02c38c8  fmuls 27, 27, 10
  02c38cc  fmuls 10, 20, 10
  02c38d0  fsel 23, 23, 22, 29
  02c38d4  fsel 20, 18, 22, 27
  02c38d8  fsel 18, 17, 22, 10
  02c38dc  fsel 29, 19, 23, 29
  02c38e0  fsel 19, 2, 18, 10
  02c38e4  fsel 17, 16, 20, 27
  02c38e8  fmuls 2, 13, 1
  02c38ec  fmuls 10, 30, 1
  02c38f0  fmuls 1, 28, 1
  02c38f4  fsel 11, 11, 22, 2
  02c38f8  fsel 13, 0, 22, 10
  02c38fc  fsel 0, 25, 22, 1
  02c3900  fsel 2, 12, 11, 2
  02c3904  fsel 6, 6, 13, 10
  02c3908  fsel 1, 7, 0, 1
  02c390c  fadds 18, 4, 2
  02c3910  fadds 2, 5, 6
  02c3914  fadds 1, 3, 1
  02c3918  fadds 18, 18, 29
  02c391c  fadds 17, 2, 17
  02c3920  fadds 19, 1, 19
  02c3924  fsubs 1, 18, 8
  02c3928  fsubs 2, 17, 26
  02c392c  fsubs 3, 19, 24
  02c3930  fmuls 4, 1, 1
  02c3934  stfs 1, 116(1)
  02c3938  stfs 2, 112(1)
  02c393c  stfs 3, 120(1)
  02c3940  fmadds 1, 2, 2, 4
  02c3944  fmadds 20, 3, 3, 1
  02c3948  fsqrts 20, 20
  02c394c  bt 2, 0x2c398c
  02c3950  lis 3, 44
  02c3954  fmr 1, 20
  02c3958  lis 4, 114
  02c395c  addi 3, 3, 12436
  02c3960  lis 5, 114
  02c3964  lfs 5, 36(3)
  02c3968  lfs 2, -3048(4)
  02c396c  addic 3, 1, 224
  02c3970  lfs 4, -3052(5)
  02c3974  fmuls 3, 2, 21
  02c3978  ori 5, 29, 0
  02c397c  fmuls 2, 2, 5
  02c3980  bl 0x109c30
  02c3984  nop
  02c3988  b 0x2c3a1c
  02c398c  lbz 3, 188(31)
  02c3990  cmpwi 3, 0
  02c3994  bt 2, 0x2c39dc
  02c3998  lis 3, 44
  02c399c  fmr 1, 20
  02c39a0  lis 4, 114
  02c39a4  addi 3, 3, 12436
  02c39a8  lis 5, 114
  02c39ac  lfs 4, 36(3)
  02c39b0  lfs 6, 100(3)
  02c39b4  lfs 5, -3048(4)
  02c39b8  lfs 7, -3052(5)
  02c39bc  addic 3, 1, 224
  02c39c0  fmuls 2, 5, 4
  02c39c4  ori 5, 29, 0
  02c39c8  fmuls 3, 5, 21
  02c39cc  fmuls 4, 7, 6
  02c39d0  bl 0x109c30
  02c39d4  nop
  02c39d8  b 0x2c3a1c
  02c39dc  lis 3, 44
  02c39e0  lis 6, 114
  02c39e4  fmr 1, 20
  02c39e8  addi 3, 3, 12436
  02c39ec  lis 4, 114
  02c39f0  ori 5, 29, 0
  02c39f4  lfs 4, 36(3)
  02c39f8  lfs 6, 104(3)
  02c39fc  lfs 5, -3048(6)
  02c3a00  lfs 7, -3052(4)
  02c3a04  addic 3, 1, 224
  02c3a08  fmuls 2, 5, 4
  02c3a0c  fmuls 3, 5, 21
  02c3a10  fmuls 4, 7, 6
  02c3a14  bl 0x109c30
  02c3a18  nop
  02c3a1c  lfs 1, 108(30)
  02c3a20  addic 3, 1, 112
  02c3a24  bl 0x110488
  02c3a28  nop
  02c3a2c  lfs 31, 16(31)
  02c3a30  lfs 1, 112(1)
  02c3a34  lis 3, 114
  02c3a38  lfs 30, 20(31)
  02c3a3c  fadds 31, 31, 1
  02c3a40  lfs 1, 116(1)
  02c3a44  lfs 29, 24(31)
  02c3a48  fadds 30, 30, 1
  02c3a4c  lfs 1, 120(1)
  02c3a50  lbz 4, 188(31)
  02c3a54  fadds 29, 29, 1
  02c3a58  cmpwi 4, 0
  02c3a5c  stfs 31, 16(31)
  02c3a60  stfs 30, 20(31)
  02c3a64  stfs 29, 24(31)
  02c3a68  lfs 1, -3048(3)
  02c3a6c  bt 2, 0x2c3b00
  02c3a70  lbz 3, 49(31)
  02c3a74  cmpwi 3, 0
  02c3a78  bt 2, 0x2c3a94
  02c3a7c  lwz 3, 152(30)
  02c3a80  lfs 31, 16(31)
  02c3a84  addic 3, 3, 1
  02c3a88  lfs 30, 20(31)
  02c3a8c  lfs 29, 24(31)
  02c3a90  stw 3, 152(30)
  02c3a94  fsubs 1, 18, 30
  02c3a98  fsubs 2, 17, 31
  02c3a9c  fsubs 3, 19, 29
  02c3aa0  lis 3, 44
  02c3aa4  addi 3, 3, 12436
  02c3aa8  fmuls 1, 1, 1
  02c3aac  fmadds 1, 2, 2, 1
  02c3ab0  lfs 2, 36(3)
  02c3ab4  fmadds 1, 3, 3, 1
  02c3ab8  fsqrts 1, 1
  02c3abc  fcmpu 0, 1, 2
  02c3ac0  bt 0, 0x2c3af4
  02c3ac4  lis 3, 44
  02c3ac8  lis 4, 114
  02c3acc  addi 3, 3, 12436
  02c3ad0  lfs 1, 108(3)
  02c3ad4  lfs 2, -3056(4)
  02c3ad8  lwz 3, 152(30)
  02c3adc  fmuls 1, 2, 1
  02c3ae0  fctiwz 1, 1
  02c3ae4  stfd 1, 440(1)
  02c3ae8  lwz 4, 444(1)
  02c3aec  cmpw 3, 4
  02c3af0  bf 1, 0x2c4618
  02c3af4  li 3, 0
  02c3af8  stb 3, 188(31)
  02c3afc  b 0x2c4618
  02c3b00  lfs 2, 128(28)
  02c3b04  lfs 3, 132(28)
  02c3b08  fsubs 31, 2, 31
  02c3b0c  fsubs 30, 3, 30
  02c3b10  lis 29, 115
  02c3b14  addic 3, 31, 72
  02c3b18  addic 29, 29, 22784
  02c3b1c  fabs 4, 31
  02c3b20  fabs 5, 30
  02c3b24  stfs 31, 256(1)
  02c3b28  stfs 30, 260(1)
  02c3b2c  lfs 3, 136(28)
  02c3b30  fsubs 29, 3, 29
  02c3b34  fsubs 2, 4, 5
  02c3b38  stfs 2, 264(1)
  02c3b3c  lwz 4, 256(1)
  02c3b40  lfs 2, 256(1)
  02c3b44  lwz 5, 260(1)
  02c3b48  lfs 3, 260(1)
  02c3b4c  fabs 2, 2
  02c3b50  lwz 6, 264(1)
  02c3b54  rlwinm 5, 5, 3, 29, 29
  02c3b58  lfs 6, 264(1)
  02c3b5c  fabs 3, 3
  02c3b60  rlwimi 5, 6, 2, 30, 30
  02c3b64  fsub 7, 6, 22
  02c3b68  fsub 6, 6, 22
  02c3b6c  rlwimi 5, 4, 4, 28, 28
  02c3b70  ori 4, 29, 0
  02c3b74  rlwimi 4, 5, 2, 26, 28
  02c3b78  slwi 5, 5, 2
  02c3b7c  clrldi 4, 4, 32
  02c3b80  fsel 5, 7, 2, 5
  02c3b84  lfsx 2, 29, 5
  02c3b88  fsel 4, 6, 3, 4
  02c3b8c  lfs 3, 4(4)
  02c3b90  fcmpu 0, 5, 22
  02c3b94  bt 1, 0x2c3ba0
  02c3b98  fmr 2, 22
  02c3b9c  b 0x2c3cbc
  02c3ba0  fsubs 6, 4, 5
  02c3ba4  fadds 4, 4, 5
  02c3ba8  addic 4, 1, 16
  02c3bac  li 8, 2
  02c3bb0  addic 5, 4, 348
  02c3bb4  addic 6, 4, 364
  02c3bb8  mtctr 8
  02c3bbc  fdivs 4, 6, 4
  02c3bc0  fmuls 5, 4, 4
  02c3bc4  stfs 4, 376(1)
  02c3bc8  stfs 4, 368(1)
  02c3bcc  stfs 4, 372(1)
  02c3bd0  stfs 4, 364(1)
  02c3bd4  lfs 7, 376(1)
  02c3bd8  lfs 8, 368(1)
  02c3bdc  lfs 9, 372(1)
  02c3be0  fmuls 6, 5, 5
  02c3be4  fmuls 8, 8, 5
  02c3be8  fmuls 7, 7, 6
  02c3bec  fmuls 4, 6, 6
  02c3bf0  fmuls 6, 9, 6
  02c3bf4  stfs 8, 368(1)
  02c3bf8  fmuls 5, 7, 5
  02c3bfc  stfs 6, 372(1)
  02c3c00  stfs 5, 376(1)
  02c3c04  lfs 5, 348(4)
  02c3c08  fmuls 5, 5, 4
  02c3c0c  stfs 5, 364(4)
  02c3c10  lfs 5, 4(5)
  02c3c14  addic 4, 4, 8
  02c3c18  addic 5, 5, 8
  02c3c1c  fmuls 5, 5, 4
  02c3c20  stfs 5, 4(6)
  02c3c24  addic 6, 6, 8
  02c3c28  bdnz 0x2c3c04
  02c3c2c  li 6, 4
  02c3c30  ori 4, 1, 0
  02c3c34  mtctr 6
  02c3c38  lis 5, 115
  02c3c3c  addic 6, 4, 364
  02c3c40  addic 5, 5, 22752
  02c3c44  ori 7, 6, 0
  02c3c48  lfs 4, 364(4)
  02c3c4c  lfs 5, 0(5)
  02c3c50  fmuls 4, 4, 5
  02c3c54  lfs 5, 4(5)
  02c3c58  addic 5, 5, 8
  02c3c5c  stfs 4, 364(4)
  02c3c60  lfs 4, 4(6)
  02c3c64  addic 4, 4, 8
  02c3c68  fmuls 4, 4, 5
  02c3c6c  stfs 4, 4(6)
  02c3c70  addic 6, 6, 8
  02c3c74  bdnz 0x2c3c48
  02c3c78  fmr 4, 22
  02c3c7c  ori 4, 1, 0
  02c3c80  mtctr 8
  02c3c84  lfs 5, 364(4)
  02c3c88  fadds 4, 4, 5
  02c3c8c  addic 4, 4, 16
  02c3c90  lfs 5, 4(7)
  02c3c94  lfs 6, 8(7)
  02c3c98  lfs 7, 12(7)
  02c3c9c  addic 7, 7, 16
  02c3ca0  fadds 4, 4, 5
  02c3ca4  fadds 4, 4, 6
  02c3ca8  fadds 4, 4, 7
  02c3cac  bdnz 0x2c3c84
  02c3cb0  lfs 5, 428(1)
  02c3cb4  fadds 4, 4, 5
  02c3cb8  fmadds 2, 4, 2, 3
  02c3cbc  fmr 3, 1
  02c3cc0  lis 4, 44
  02c3cc4  fmr 28, 31
  02c3cc8  lis 27, 114
  02c3ccc  fmr 1, 2
  02c3cd0  addi 4, 4, 12436
  02c3cd4  addic 5, 30, 140
  02c3cd8  lfs 31, 112(4)
  02c3cdc  lfs 4, -3052(27)
  02c3ce0  fmuls 3, 3, 31
  02c3ce4  fmuls 4, 4, 31
  02c3ce8  fmr 2, 3
  02c3cec  bl 0x10a2e0
  02c3cf0  nop
  02c3cf4  fmuls 1, 30, 30
  02c3cf8  fabs 6, 29
  02c3cfc  lis 4, 114
  02c3d00  stfs 29, 248(1)
  02c3d04  lfs 3, -3052(27)
  02c3d08  addic 3, 31, 68
  02c3d0c  lfs 4, -3048(4)
  02c3d10  lwz 4, 248(1)
  02c3d14  fmadds 1, 28, 28, 1
  02c3d18  lfs 2, 248(1)
  02c3d1c  rlwinm 4, 4, 3, 29, 29
  02c3d20  fabs 5, 2
  02c3d24  fsqrts 1, 1
  02c3d28  fabs 7, 1
  02c3d2c  stfs 1, 244(1)
  02c3d30  fsubs 1, 7, 6
  02c3d34  stfs 1, 252(1)
  02c3d38  lwz 5, 244(1)
  02c3d3c  lfs 1, 244(1)
  02c3d40  lwz 6, 252(1)
  02c3d44  lfs 2, 252(1)
  02c3d48  fabs 1, 1
  02c3d4c  rlwimi 4, 6, 2, 30, 30
  02c3d50  fsub 8, 2, 22
  02c3d54  fsub 9, 2, 22
  02c3d58  rlwimi 4, 5, 4, 28, 28
  02c3d5c  ori 5, 29, 0
  02c3d60  rlwimi 5, 4, 2, 26, 28
  02c3d64  slwi 4, 4, 2
  02c3d68  clrldi 5, 5, 32
  02c3d6c  fsel 6, 8, 1, 6
  02c3d70  lfsx 1, 29, 4
  02c3d74  fsel 5, 9, 5, 7
  02c3d78  lfs 2, 4(5)
  02c3d7c  fcmpu 0, 6, 22
  02c3d80  bt 1, 0x2c3d8c
  02c3d84  fmr 1, 22
  02c3d88  b 0x2c3ea8
  02c3d8c  fsubs 7, 5, 6
  02c3d90  fadds 5, 5, 6
  02c3d94  addic 4, 1, 16
  02c3d98  li 7, 2
  02c3d9c  addic 6, 4, 332
  02c3da0  addic 5, 4, 316
  02c3da4  mtctr 7
  02c3da8  fdivs 5, 7, 5
  02c3dac  fmuls 6, 5, 5
  02c3db0  stfs 5, 344(1)
  02c3db4  stfs 5, 336(1)
  02c3db8  stfs 5, 340(1)
  02c3dbc  stfs 5, 332(1)
  02c3dc0  lfs 8, 344(1)
  02c3dc4  lfs 9, 336(1)
  02c3dc8  lfs 10, 340(1)
  02c3dcc  fmuls 7, 6, 6
  02c3dd0  fmuls 9, 9, 6
  02c3dd4  fmuls 8, 8, 7
  02c3dd8  fmuls 5, 7, 7
  02c3ddc  fmuls 7, 10, 7
  02c3de0  stfs 9, 336(1)
  02c3de4  fmuls 6, 8, 6
  02c3de8  stfs 7, 340(1)
  02c3dec  stfs 6, 344(1)
  02c3df0  lfs 6, 316(4)
  02c3df4  fmuls 6, 6, 5
  02c3df8  stfs 6, 332(4)
  02c3dfc  lfs 6, 4(5)
  02c3e00  addic 5, 5, 8
  02c3e04  fmuls 6, 6, 5
  02c3e08  addic 4, 4, 8
  02c3e0c  stfs 6, 4(6)
  02c3e10  addic 6, 6, 8
  02c3e14  bdnz 0x2c3df0
  02c3e18  li 6, 4
  02c3e1c  ori 4, 1, 0
  02c3e20  mtctr 6
  02c3e24  lis 5, 115
  02c3e28  addic 6, 4, 332
  02c3e2c  addic 5, 5, 22752
  02c3e30  ori 8, 6, 0
  02c3e34  lfs 5, 332(4)
  02c3e38  lfs 6, 0(5)
  02c3e3c  fmuls 5, 5, 6
  02c3e40  lfs 6, 4(5)
  02c3e44  addic 5, 5, 8
  02c3e48  stfs 5, 332(4)
  02c3e4c  lfs 5, 4(6)
  02c3e50  addic 4, 4, 8
  02c3e54  fmuls 5, 5, 6
  02c3e58  stfs 5, 4(6)
  02c3e5c  addic 6, 6, 8
  02c3e60  bdnz 0x2c3e34
  02c3e64  ori 4, 1, 0
  02c3e68  fmr 5, 22
  02c3e6c  mtctr 7
  02c3e70  lfs 6, 332(4)
  02c3e74  fadds 5, 5, 6
  02c3e78  lfs 6, 4(8)
  02c3e7c  addic 4, 4, 16
  02c3e80  lfs 7, 8(8)
  02c3e84  lfs 8, 12(8)
  02c3e88  addic 8, 8, 16
  02c3e8c  fadds 5, 5, 6
  02c3e90  fadds 5, 5, 7
  02c3e94  fadds 5, 5, 8
  02c3e98  bdnz 0x2c3e70
  02c3e9c  lfs 6, 428(1)
  02c3ea0  fadds 5, 5, 6
  02c3ea4  fmadds 1, 5, 1, 2
  02c3ea8  fmuls 2, 4, 31
  02c3eac  addic 5, 30, 144
  02c3eb0  fmuls 4, 3, 31
  02c3eb4  fneg 1, 1
  02c3eb8  fmr 3, 2
  02c3ebc  bl 0x10a2e0
  02c3ec0  nop
  02c3ec4  lis 3, 161
  02c3ec8  lis 4, 26214
  02c3ecc  ori 4, 4, 26215
  02c3ed0  lwz 3, 1808(3)
  02c3ed4  mulhw 4, 4, 3
  02c3ed8  srawi 4, 4, 2
  02c3edc  srwi 5, 4, 31
  02c3ee0  addc 4, 4, 5
  02c3ee4  sldi 5, 4, 3
  02c3ee8  addc 5, 4, 5
  02c3eec  addc 4, 4, 5
  02c3ef0  subc 3, 3, 4
  02c3ef4  cmpwi 3, 0
  02c3ef8  bf 2, 0x2c44f0
  02c3efc  lfs 31, 424(1)
  02c3f00  li 4, 0
  02c3f04  lfs 30, 420(1)
  02c3f08  li 3, 2
  02c3f0c  lfs 29, 416(1)
  02c3f10  ori 5, 31, 0
  02c3f14  bl 0x15d12c
  02c3f18  nop
  02c3f1c  lis 4, 44
  02c3f20  fmr 1, 22
  02c3f24  addic 3, 30, 148
  02c3f28  addi 4, 4, 12436
  02c3f2c  lfs 2, 116(4)
  02c3f30  bl 0x109af0
  02c3f34  nop
  02c3f38  fmuls 1, 30, 30
  02c3f3c  lfs 2, 148(30)
  02c3f40  lfs 3, 128(28)
  02c3f44  lis 3, 161
  02c3f48  lfs 4, 132(28)
  02c3f4c  lis 4, 26214
  02c3f50  lfs 14, 136(28)
  02c3f54  lfs 15, 16(31)
  02c3f58  fmadds 1, 31, 31, 1
  02c3f5c  lfs 16, 20(31)
  02c3f60  lfs 17, 24(31)
  02c3f64  ori 4, 4, 26215
  02c3f68  lwz 3, 1808(3)
  02c3f6c  lis 30, 124
  02c3f70  mulhw 4, 4, 3
  02c3f74  fmadds 1, 29, 29, 1
  02c3f78  srawi 4, 4, 3
  02c3f7c  addic 30, 30, -32768
  02c3f80  srwi 5, 4, 31
  02c3f84  fsqrts 1, 1
  02c3f88  addc 4, 4, 5
  02c3f8c  sldi 5, 4, 4
  02c3f90  sldi 4, 4, 2
  02c3f94  addc 4, 5, 4
  02c3f98  subc 3, 3, 4
  02c3f9c  cmpwi 3, 0
  02c3fa0  fdivs 2, 2, 1
  02c3fa4  fsub 5, 22, 1
  02c3fa8  fsub 6, 22, 1
  02c3fac  fsub 7, 22, 1
  02c3fb0  fsub 8, 1, 22
  02c3fb4  fsub 9, 1, 22
  02c3fb8  fsub 1, 1, 22
  02c3fbc  fmuls 10, 30, 2
  02c3fc0  fmuls 11, 31, 2
  02c3fc4  fmuls 2, 29, 2
  02c3fc8  fsel 5, 5, 22, 10
  02c3fcc  fsel 6, 6, 22, 11
  02c3fd0  fsel 7, 7, 22, 2
  02c3fd4  fsel 5, 8, 5, 10
  02c3fd8  fsel 6, 9, 6, 11
  02c3fdc  fsel 1, 1, 7, 2
  02c3fe0  fadds 2, 5, 4
  02c3fe4  fadds 3, 6, 3
  02c3fe8  fadds 14, 1, 14
  02c3fec  stfd 2, 400(1)
  02c3ff0  stfd 3, 408(1)
  02c3ff4  bf 2, 0x2c4040
  02c3ff8  lis 3, 124
  02c3ffc  lfs 23, 192(31)
  02c4000  lfs 13, -32768(3)
  02c4004  lfs 30, 208(31)
  02c4008  lfs 12, 4(30)
  02c400c  lfs 21, 224(31)
  02c4010  lfs 0, 8(30)
  02c4014  lfs 24, 196(31)
  02c4018  lfs 29, 212(31)
  02c401c  lfs 20, 228(31)
  02c4020  lfs 25, 200(31)
  02c4024  lfs 28, 216(31)
  02c4028  lfs 19, 232(31)
  02c402c  lfs 27, 204(31)
  02c4030  lfs 31, 220(31)
  02c4034  lfs 26, 236(31)
  02c4038  lfs 18, 12(30)
  02c403c  b 0x2c4080
  02c4040  lfs 23, 192(31)
  02c4044  lfs 13, 16(30)
  02c4048  lfs 30, 208(31)
  02c404c  lfs 12, 20(30)
  02c4050  lfs 21, 224(31)
  02c4054  lfs 0, 24(30)
  02c4058  lfs 24, 196(31)
  02c405c  lfs 29, 212(31)
  02c4060  lfs 20, 228(31)
  02c4064  lfs 25, 200(31)
  02c4068  lfs 28, 216(31)
  02c406c  lfs 19, 232(31)
  02c4070  lfs 27, 204(31)
  02c4074  lfs 31, 220(31)
  02c4078  lfs 26, 236(31)
  02c407c  lfs 18, 28(30)
  02c4080  fmadds 1, 24, 13, 16
  02c4084  lfd 4, 400(1)
  02c4088  fmadds 2, 23, 13, 15
  02c408c  lfd 5, 408(1)
  02c4090  fmadds 3, 25, 13, 17
  02c4094  lis 3, 123
  02c4098  fmadds 7, 27, 13, 18
  02c409c  lis 4, 114
  02c40a0  fmadds 1, 20, 0, 1
  02c40a4  fmadds 2, 21, 0, 2
  02c40a8  fmadds 3, 19, 0, 3
  02c40ac  fmadds 7, 26, 0, 7
  02c40b0  fmadds 1, 29, 12, 1
  02c40b4  fmadds 2, 30, 12, 2
  02c40b8  fmadds 3, 28, 12, 3
  02c40bc  fmadds 7, 31, 12, 7
  02c40c0  fsubs 4, 4, 1
  02c40c4  fsubs 5, 5, 2
  02c40c8  fsubs 6, 14, 3
  02c40cc  stfs 7, 172(1)
  02c40d0  lfs 7, 32720(3)
  02c40d4  fmuls 8, 4, 4
  02c40d8  lfs 9, -3052(4)
  02c40dc  fmuls 7, 7, 9
  02c40e0  stfs 2, 160(1)
  02c40e4  fmadds 8, 5, 5, 8
  02c40e8  stfs 1, 164(1)
  02c40ec  stfs 3, 168(1)
  02c40f0  lfs 1, 424(1)
  02c40f4  lfs 2, 420(1)
  02c40f8  fmadds 8, 6, 6, 8
  02c40fc  lfs 3, 416(1)
  02c4100  lfd 10, 432(1)
  02c4104  lis 3, 44
  02c4108  stfs 10, 156(1)
  02c410c  addi 6, 3, 12436
  02c4110  fsqrts 8, 8
  02c4114  ori 3, 31, 0
  02c4118  addic 4, 1, 144
  02c411c  addic 5, 1, 160
  02c4120  fdivs 7, 7, 8
  02c4124  fsub 9, 22, 8
  02c4128  fsub 10, 22, 8
  02c412c  fsub 11, 22, 8
  02c4130  fsub 12, 8, 22
  02c4134  fsub 13, 8, 22
  02c4138  fsub 8, 8, 22
  02c413c  fmuls 6, 6, 7
  02c4140  fmuls 4, 4, 7
  02c4144  fmuls 5, 5, 7
  02c4148  fsel 7, 9, 22, 6
  02c414c  fsel 9, 10, 22, 4
  02c4150  fsel 10, 11, 22, 5
  02c4154  fsel 6, 12, 7, 6
  02c4158  fsel 4, 13, 9, 4
  02c415c  fsel 5, 8, 10, 5
  02c4160  fadds 3, 6, 3
  02c4164  fadds 2, 4, 2
  02c4168  fadds 1, 5, 1
  02c416c  stfs 3, 152(1)
  02c4170  stfs 2, 148(1)
  02c4174  stfs 1, 144(1)
  02c4178  lfs 1, 120(6)
  02c417c  lfs 2, 124(6)
  02c4180  lfs 3, 128(6)
  02c4184  bl 0x187e00
  02c4188  nop
  02c418c  cmpwi 3, 0
  02c4190  lfs 5, 428(1)
  02c4194  bt 2, 0x2c44f0
  02c4198  lfs 1, 420(1)
  02c419c  lfs 2, 148(1)
  02c41a0  lfs 3, 424(1)
  02c41a4  fsubs 1, 2, 1
  02c41a8  lfs 2, 144(1)
  02c41ac  fsubs 2, 2, 3
  02c41b0  lfs 4, 416(1)
  02c41b4  lfs 6, 152(1)
  02c41b8  fmuls 3, 1, 1
  02c41bc  stfs 2, 144(1)
  02c41c0  stfs 1, 148(1)
  02c41c4  fsubs 1, 6, 4
  02c41c8  fmadds 3, 2, 2, 3
  02c41cc  fabs 4, 1
  02c41d0  fsqrts 3, 3
  02c41d4  stfs 1, 236(1)
  02c41d8  stfs 1, 152(1)
  02c41dc  fabs 2, 3
  02c41e0  stfs 3, 232(1)
  02c41e4  lwz 4, 236(1)
  02c41e8  rlwinm 4, 4, 3, 29, 29
  02c41ec  fsubs 1, 2, 4
  02c41f0  stfs 1, 240(1)
  02c41f4  lwz 5, 232(1)
  02c41f8  lfs 1, 232(1)
  02c41fc  lfs 3, 236(1)
  02c4200  lwz 6, 240(1)
  02c4204  lfs 6, 240(1)
  02c4208  fabs 1, 1
  02c420c  rlwimi 4, 6, 2, 30, 30
  02c4210  fsub 7, 6, 22
  02c4214  fabs 3, 3
  02c4218  fsub 6, 6, 22
  02c421c  rlwimi 4, 5, 4, 28, 28
  02c4220  ori 5, 29, 0
  02c4224  rlwimi 5, 4, 2, 26, 28
  02c4228  slwi 4, 4, 2
  02c422c  clrldi 5, 5, 32
  02c4230  fsel 4, 7, 1, 4
  02c4234  lfsx 1, 29, 4
  02c4238  fsel 3, 6, 3, 2
  02c423c  lfs 2, 4(5)
  02c4240  fcmpu 0, 4, 22
  02c4244  bt 1, 0x2c4250
  02c4248  fmr 1, 22
  02c424c  b 0x2c4368
  02c4250  fsubs 6, 3, 4
  02c4254  fadds 3, 3, 4
  02c4258  addic 4, 1, 16
  02c425c  li 8, 2
  02c4260  addic 5, 4, 284
  02c4264  addic 6, 4, 300
  02c4268  mtctr 8
  02c426c  fdivs 3, 6, 3
  02c4270  fmuls 4, 3, 3
  02c4274  stfs 3, 312(1)
  02c4278  stfs 3, 304(1)
  02c427c  stfs 3, 308(1)
  02c4280  stfs 3, 300(1)
  02c4284  lfs 7, 312(1)
  02c4288  lfs 8, 304(1)
  02c428c  lfs 9, 308(1)
  02c4290  fmuls 6, 4, 4
  02c4294  fmuls 8, 8, 4
  02c4298  fmuls 7, 7, 6
  02c429c  fmuls 3, 6, 6
  02c42a0  fmuls 6, 9, 6
  02c42a4  stfs 8, 304(1)
  02c42a8  fmuls 4, 7, 4
  02c42ac  stfs 6, 308(1)
  02c42b0  stfs 4, 312(1)
  02c42b4  lfs 4, 284(4)
  02c42b8  fmuls 4, 4, 3
  02c42bc  stfs 4, 300(4)
  02c42c0  lfs 4, 4(5)
  02c42c4  addic 4, 4, 8
  02c42c8  addic 5, 5, 8
  02c42cc  fmuls 4, 4, 3
  02c42d0  stfs 4, 4(6)
  02c42d4  addic 6, 6, 8
  02c42d8  bdnz 0x2c42b4
  02c42dc  li 6, 4
  02c42e0  ori 4, 1, 0
  02c42e4  mtctr 6
  02c42e8  lis 5, 115
  02c42ec  addic 6, 4, 300
  02c42f0  addic 5, 5, 22752
  02c42f4  ori 7, 6, 0
  02c42f8  lfs 3, 300(4)
  02c42fc  lfs 4, 0(5)
  02c4300  fmuls 3, 3, 4
  02c4304  lfs 4, 4(5)
  02c4308  addic 5, 5, 8
  02c430c  stfs 3, 300(4)
  02c4310  lfs 3, 4(6)
  02c4314  addic 4, 4, 8
  02c4318  fmuls 3, 3, 4
  02c431c  stfs 3, 4(6)
  02c4320  addic 6, 6, 8
  02c4324  bdnz 0x2c42f8
  02c4328  fmr 3, 22
  02c432c  ori 4, 1, 0
  02c4330  mtctr 8
  02c4334  lfs 4, 300(4)
  02c4338  fadds 3, 3, 4
  02c433c  addic 4, 4, 16
  02c4340  lfs 4, 4(7)
  02c4344  lfs 6, 8(7)
  02c4348  lfs 7, 12(7)
  02c434c  addic 7, 7, 16
  02c4350  fadds 3, 3, 4
  02c4354  fadds 3, 3, 6
  02c4358  fadds 3, 3, 7
  02c435c  bdnz 0x2c4334
  02c4360  fadds 3, 3, 5
  02c4364  fmadds 1, 3, 1, 2
  02c4368  fneg 1, 1
  02c436c  stfs 1, 68(3)
  02c4370  lwz 4, 144(1)
  02c4374  lwz 5, 148(1)
  02c4378  lfs 1, 144(1)
  02c437c  lfs 2, 148(1)
  02c4380  fabs 3, 1
  02c4384  fabs 6, 2
  02c4388  rlwinm 5, 5, 3, 29, 29
  02c438c  fsubs 1, 3, 6
  02c4390  stfs 1, 228(1)
  02c4394  lwz 6, 228(1)
  02c4398  lfs 1, 228(1)
  02c439c  rlwimi 5, 6, 2, 30, 30
  02c43a0  fsub 4, 1, 22
  02c43a4  fsub 7, 1, 22
  02c43a8  rlwimi 5, 4, 4, 28, 28
  02c43ac  ori 4, 29, 0
  02c43b0  rlwimi 4, 5, 2, 26, 28
  02c43b4  slwi 5, 5, 2
  02c43b8  clrldi 4, 4, 32
  02c43bc  fsel 4, 4, 3, 6
  02c43c0  lfsx 1, 29, 5
  02c43c4  fsel 3, 7, 6, 3
  02c43c8  lfs 2, 4(4)
  02c43cc  fcmpu 0, 4, 22
  02c43d0  bt 1, 0x2c43d8
  02c43d4  b 0x2c44ec
  02c43d8  fsubs 6, 3, 4
  02c43dc  fadds 3, 3, 4
  02c43e0  addic 4, 1, 16
  02c43e4  li 8, 2
  02c43e8  addic 5, 4, 252
  02c43ec  addic 6, 4, 268
  02c43f0  mtctr 8
  02c43f4  fdivs 3, 6, 3
  02c43f8  fmuls 4, 3, 3
  02c43fc  stfs 3, 280(1)
  02c4400  stfs 3, 272(1)
  02c4404  stfs 3, 276(1)
  02c4408  stfs 3, 268(1)
  02c440c  lfs 7, 280(1)
  02c4410  lfs 8, 272(1)
  02c4414  lfs 9, 276(1)
  02c4418  fmuls 6, 4, 4
  02c441c  fmuls 8, 8, 4
  02c4420  fmuls 7, 7, 6
  02c4424  fmuls 3, 6, 6
  02c4428  fmuls 6, 9, 6
  02c442c  stfs 8, 272(1)
  02c4430  fmuls 4, 7, 4
  02c4434  stfs 6, 276(1)
  02c4438  stfs 4, 280(1)
  02c443c  lfs 4, 252(4)
  02c4440  fmuls 4, 4, 3
  02c4444  stfs 4, 268(4)
  02c4448  lfs 4, 4(5)
  02c444c  addic 4, 4, 8
  02c4450  addic 5, 5, 8
  02c4454  fmuls 4, 4, 3
  02c4458  stfs 4, 4(6)
  02c445c  addic 6, 6, 8
  02c4460  bdnz 0x2c443c
  02c4464  li 6, 4
  02c4468  ori 4, 1, 0
  02c446c  mtctr 6
  02c4470  lis 5, 115
  02c4474  addic 6, 4, 268
  02c4478  addic 5, 5, 22752
  02c447c  ori 7, 6, 0
  02c4480  lfs 3, 268(4)
  02c4484  lfs 4, 0(5)
  02c4488  fmuls 3, 3, 4
  02c448c  lfs 4, 4(5)
  02c4490  addic 5, 5, 8
  02c4494  stfs 3, 268(4)
  02c4498  lfs 3, 4(6)
  02c449c  addic 4, 4, 8
  02c44a0  fmuls 3, 3, 4
  02c44a4  stfs 3, 4(6)
  02c44a8  addic 6, 6, 8
  02c44ac  bdnz 0x2c4480
  02c44b0  ori 4, 1, 0
  02c44b4  mtctr 8
  02c44b8  lfs 3, 268(4)
  02c44bc  lfs 4, 4(7)
  02c44c0  fadds 3, 22, 3
  02c44c4  lfs 6, 8(7)
  02c44c8  lfs 22, 12(7)
  02c44cc  addic 4, 4, 16
  02c44d0  addic 7, 7, 16
  02c44d4  fadds 3, 3, 4
  02c44d8  fadds 3, 3, 6
  02c44dc  fadds 22, 3, 22
  02c44e0  bdnz 0x2c44b8
  02c44e4  fadds 22, 22, 5
  02c44e8  fmadds 22, 22, 1, 2
  02c44ec  stfs 22, 72(3)
  02c44f0  lbz 3, 49(31)
  02c44f4  cmpwi 3, 0
  02c44f8  bf 2, 0x2c4618
  02c44fc  li 3, 4
  02c4500  lhz 5, 52(31)
  02c4504  li 4, 0
  02c4508  stb 3, 32(31)
  02c450c  ori 3, 5, 1
  02c4510  stw 4, 148(31)
  02c4514  sth 3, 52(31)
  02c4518  b 0x2c4618
  02c451c  lis 3, 151
  02c4520  lfs 1, 176(30)
  02c4524  addic 3, 3, -25376
  02c4528  lfs 2, 180(30)
  02c452c  li 6, -1
  02c4530  lfs 3, 128(3)
  02c4534  lfs 4, 132(3)
  02c4538  lfs 5, 136(3)
  02c453c  fsubs 1, 3, 1
  02c4540  lfs 6, 184(30)
  02c4544  fsubs 2, 4, 2
  02c4548  stfs 3, 176(30)
  02c454c  lfs 4, 132(3)
  02c4550  fsubs 3, 5, 6
  02c4554  stfs 4, 180(30)
  02c4558  lfs 4, 136(3)
  02c455c  stfs 4, 184(30)
  02c4560  lfs 4, 140(3)
  02c4564  lis 3, 44
  02c4568  stfs 4, 188(30)
  02c456c  lfs 4, 16(31)
  02c4570  lfs 5, 20(31)
  02c4574  addi 5, 3, 12436
  02c4578  fadds 1, 4, 1
  02c457c  addic 30, 31, 16
  02c4580  lfs 4, 24(31)
  02c4584  fadds 2, 5, 2
  02c4588  ori 3, 31, 0
  02c458c  fadds 3, 4, 3
  02c4590  ori 4, 30, 0
  02c4594  stfs 1, 16(31)
  02c4598  stfs 2, 20(31)
  02c459c  stfs 3, 24(31)
  02c45a0  lfs 1, 36(5)
  02c45a4  lfs 2, 40(5)
  02c45a8  bl 0x10fb28
  02c45ac  nop
  02c45b0  li 3, 2
  02c45b4  bl 0xfc620
  02c45b8  nop
  02c45bc  cmpwi 3, 0
  02c45c0  bt 2, 0x2c45d8
  02c45c4  ori 3, 30, 0
  02c45c8  li 4, 224
  02c45cc  bl 0x2f9610
  02c45d0  nop
  02c45d4  b 0x2c45e8
  02c45d8  ori 3, 30, 0
  02c45dc  li 4, 228
  02c45e0  bl 0x2f9610
  02c45e4  nop
  02c45e8  li 3, 1
  02c45ec  li 4, 0
  02c45f0  ori 5, 31, 0
  02c45f4  bl 0x15d12c
  02c45f8  nop
  02c45fc  li 3, 4
  02c4600  lhz 4, 52(31)
  02c4604  li 5, 0
  02c4608  ori 4, 4, 1
  02c460c  stb 3, 32(31)
  02c4610  stw 5, 148(31)
  02c4614  sth 4, 52(31)
  02c4618  ld 0, 656(1)
  02c461c  mtlr 0
  02c4620  lfd 14, 496(1)
  02c4624  lfd 15, 504(1)
  02c4628  lfd 16, 512(1)
  02c462c  lfd 17, 520(1)
  02c4630  lfd 18, 528(1)
  02c4634  lfd 19, 536(1)
  02c4638  lfd 20, 544(1)
  02c463c  lfd 21, 552(1)
  02c4640  lfd 22, 560(1)
  02c4644  lfd 23, 568(1)
  02c4648  lfd 24, 576(1)
  02c464c  lfd 25, 584(1)
  02c4650  lfd 26, 592(1)
  02c4654  lfd 27, 600(1)
  02c4658  lfd 28, 608(1)
  02c465c  lfd 29, 616(1)
  02c4660  lfd 30, 624(1)
  02c4664  lfd 31, 632(1)
  02c4668  ld 27, 456(1)
  02c466c  ld 28, 464(1)
  02c4670  ld 29, 472(1)
  02c4674  ld 30, 480(1)
  02c4678  ld 31, 488(1)
  02c467c  addi 1, 1, 640
  02c4680  blr
