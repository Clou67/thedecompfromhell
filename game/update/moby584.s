# game/update/moby584.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_003d1d10:   # 0x3d1d10, 0x460 bytes
  03d1d10  stdu 1, -256(1)
  03d1d14  mflr 0
  03d1d18  std 0, 272(1)
  03d1d1c  stfd 30, 240(1)
  03d1d20  stfd 31, 248(1)
  03d1d24  lis 6, 61
  03d1d28  lis 7, 165
  03d1d2c  sldi 5, 5, 2
  03d1d30  addi 6, 6, 7432
  03d1d34  addic 7, 7, -28284
  03d1d38  std 31, 232(1)
  03d1d3c  extsw 5, 5
  03d1d40  std 30, 224(1)
  03d1d44  ori 31, 3, 0
  03d1d48  ori 30, 4, 0
  03d1d4c  std 28, 208(1)
  03d1d50  lfs 31, 0(6)
  03d1d54  lwzx 28, 7, 5
  03d1d58  fmr 30, 31
  03d1d5c  std 29, 216(1)
  03d1d60  std 27, 200(1)
  03d1d64  cmpwi 28, 0
  03d1d68  bf 2, 0x3d1d74
  03d1d6c  li 3, 0
  03d1d70  b 0x3d2144
  03d1d74  li 29, 0
  03d1d78  lis 3, 164
  03d1d7c  lhz 27, 0(28)
  03d1d80  rlwinm 27, 27, 8, 9, 23
  03d1d84  lwz 3, -28512(3)
  03d1d88  addc 5, 3, 27
  03d1d8c  clrldi 5, 5, 32
  03d1d90  lhz 3, 166(5)
  03d1d94  cmpwi 3, 583
  03d1d98  bf 2, 0x3d212c
  03d1d9c  lfs 5, 0(31)
  03d1da0  lfs 1, 0(30)
  03d1da4  lfs 6, 4(31)
  03d1da8  lfs 2, 4(30)
  03d1dac  fsubs 1, 5, 1
  03d1db0  fsubs 2, 6, 2
  03d1db4  lis 3, 115
  03d1db8  lis 4, 61
  03d1dbc  addic 3, 3, 22784
  03d1dc0  addi 4, 4, 7432
  03d1dc4  fabs 3, 1
  03d1dc8  fabs 7, 2
  03d1dcc  stfs 1, 124(1)
  03d1dd0  stfs 2, 128(1)
  03d1dd4  fsubs 1, 3, 7
  03d1dd8  stfs 1, 132(1)
  03d1ddc  lwz 6, 124(1)
  03d1de0  lfs 1, 124(1)
  03d1de4  lwz 7, 128(1)
  03d1de8  lfs 2, 128(1)
  03d1dec  fabs 1, 1
  03d1df0  lwz 8, 132(1)
  03d1df4  rlwinm 7, 7, 3, 29, 29
  03d1df8  lfs 4, 132(1)
  03d1dfc  fabs 2, 2
  03d1e00  rlwimi 7, 8, 2, 30, 30
  03d1e04  fsub 8, 4, 30
  03d1e08  fsub 4, 4, 30
  03d1e0c  rlwimi 7, 6, 4, 28, 28
  03d1e10  ori 6, 3, 0
  03d1e14  rlwimi 6, 7, 2, 26, 28
  03d1e18  slwi 7, 7, 2
  03d1e1c  clrldi 6, 6, 32
  03d1e20  fsel 7, 8, 1, 7
  03d1e24  lfsx 1, 3, 7
  03d1e28  fsel 3, 4, 2, 3
  03d1e2c  lfs 2, 4(6)
  03d1e30  lfs 4, 4(4)
  03d1e34  fcmpu 0, 7, 30
  03d1e38  bt 1, 0x3d1e44
  03d1e3c  fmr 1, 30
  03d1e40  b 0x3d1f5c
  03d1e44  fsubs 8, 3, 7
  03d1e48  fadds 3, 3, 7
  03d1e4c  addic 4, 1, 16
  03d1e50  li 8, 2
  03d1e54  addic 7, 4, 168
  03d1e58  addic 6, 4, 152
  03d1e5c  mtctr 8
  03d1e60  fdivs 3, 8, 3
  03d1e64  fmuls 7, 3, 3
  03d1e68  stfs 3, 180(1)
  03d1e6c  stfs 3, 172(1)
  03d1e70  stfs 3, 176(1)
  03d1e74  stfs 3, 168(1)
  03d1e78  lfs 9, 180(1)
  03d1e7c  lfs 10, 172(1)
  03d1e80  lfs 11, 176(1)
  03d1e84  fmuls 8, 7, 7
  03d1e88  fmuls 10, 10, 7
  03d1e8c  fmuls 9, 9, 8
  03d1e90  fmuls 3, 8, 8
  03d1e94  fmuls 8, 11, 8
  03d1e98  stfs 10, 172(1)
  03d1e9c  fmuls 7, 9, 7
  03d1ea0  stfs 8, 176(1)
  03d1ea4  stfs 7, 180(1)
  03d1ea8  lfs 7, 152(4)
  03d1eac  fmuls 7, 7, 3
  03d1eb0  stfs 7, 168(4)
  03d1eb4  lfs 7, 4(6)
  03d1eb8  addic 6, 6, 8
  03d1ebc  fmuls 7, 7, 3
  03d1ec0  addic 4, 4, 8
  03d1ec4  stfs 7, 4(7)
  03d1ec8  addic 7, 7, 8
  03d1ecc  bdnz 0x3d1ea8
  03d1ed0  li 7, 4
  03d1ed4  ori 4, 1, 0
  03d1ed8  mtctr 7
  03d1edc  lis 6, 115
  03d1ee0  addic 7, 4, 168
  03d1ee4  addic 6, 6, 22752
  03d1ee8  ori 9, 7, 0
  03d1eec  lfs 3, 168(4)
  03d1ef0  lfs 7, 0(6)
  03d1ef4  fmuls 3, 3, 7
  03d1ef8  lfs 7, 4(6)
  03d1efc  addic 6, 6, 8
  03d1f00  stfs 3, 168(4)
  03d1f04  lfs 3, 4(7)
  03d1f08  addic 4, 4, 8
  03d1f0c  fmuls 3, 3, 7
  03d1f10  stfs 3, 4(7)
  03d1f14  addic 7, 7, 8
  03d1f18  bdnz 0x3d1eec
  03d1f1c  ori 4, 1, 0
  03d1f20  fmr 3, 30
  03d1f24  mtctr 8
  03d1f28  lfs 7, 168(4)
  03d1f2c  fadds 3, 3, 7
  03d1f30  lfs 7, 4(9)
  03d1f34  addic 4, 4, 16
  03d1f38  lfs 8, 8(9)
  03d1f3c  lfs 9, 12(9)
  03d1f40  addic 9, 9, 16
  03d1f44  fadds 3, 3, 7
  03d1f48  fadds 3, 3, 8
  03d1f4c  fadds 3, 3, 9
  03d1f50  bdnz 0x3d1f28
  03d1f54  fadds 3, 3, 4
  03d1f58  fmadds 1, 3, 1, 2
  03d1f5c  lfs 2, 16(5)
  03d1f60  lfs 3, 20(5)
  03d1f64  fsubs 2, 5, 2
  03d1f68  fsubs 3, 6, 3
  03d1f6c  fabs 7, 2
  03d1f70  fabs 6, 3
  03d1f74  stfs 2, 112(1)
  03d1f78  stfs 3, 116(1)
  03d1f7c  fsubs 2, 7, 6
  03d1f80  stfs 2, 120(1)
  03d1f84  lwz 4, 112(1)
  03d1f88  lfs 2, 112(1)
  03d1f8c  lwz 5, 116(1)
  03d1f90  lfs 3, 116(1)
  03d1f94  fabs 2, 2
  03d1f98  lwz 6, 120(1)
  03d1f9c  rlwinm 5, 5, 3, 29, 29
  03d1fa0  lfs 5, 120(1)
  03d1fa4  fabs 3, 3
  03d1fa8  rlwimi 5, 6, 2, 30, 30
  03d1fac  fsub 8, 5, 30
  03d1fb0  fsub 9, 5, 30
  03d1fb4  rlwimi 5, 4, 4, 28, 28
  03d1fb8  ori 4, 3, 0
  03d1fbc  rlwimi 4, 5, 2, 26, 28
  03d1fc0  slwi 5, 5, 2
  03d1fc4  clrldi 4, 4, 32
  03d1fc8  fsel 6, 8, 2, 6
  03d1fcc  lfsx 5, 3, 5
  03d1fd0  fsel 3, 9, 3, 7
  03d1fd4  lfs 2, 4(4)
  03d1fd8  fcmpu 0, 6, 30
  03d1fdc  bt 1, 0x3d1fe8
  03d1fe0  fmr 4, 30
  03d1fe4  b 0x3d2100
  03d1fe8  fsubs 7, 3, 6
  03d1fec  fadds 3, 3, 6
  03d1ff0  addic 3, 1, 16
  03d1ff4  li 6, 2
  03d1ff8  addic 4, 3, 120
  03d1ffc  addic 5, 3, 136
  03d2000  mtctr 6
  03d2004  fdivs 3, 7, 3
  03d2008  fmuls 6, 3, 3
  03d200c  stfs 3, 148(1)
  03d2010  stfs 3, 140(1)
  03d2014  stfs 3, 144(1)
  03d2018  stfs 3, 136(1)
  03d201c  lfs 8, 148(1)
  03d2020  lfs 9, 140(1)
  03d2024  lfs 10, 144(1)
  03d2028  fmuls 7, 6, 6
  03d202c  fmuls 9, 9, 6
  03d2030  fmuls 8, 8, 7
  03d2034  fmuls 3, 7, 7
  03d2038  fmuls 7, 10, 7
  03d203c  stfs 9, 140(1)
  03d2040  fmuls 6, 8, 6
  03d2044  stfs 7, 144(1)
  03d2048  stfs 6, 148(1)
  03d204c  lfs 6, 120(3)
  03d2050  fmuls 6, 6, 3
  03d2054  stfs 6, 136(3)
  03d2058  lfs 6, 4(4)
  03d205c  addic 3, 3, 8
  03d2060  addic 4, 4, 8
  03d2064  fmuls 6, 6, 3
  03d2068  stfs 6, 4(5)
  03d206c  addic 5, 5, 8
  03d2070  bdnz 0x3d204c
  03d2074  ori 3, 1, 0
  03d2078  lis 4, 115
  03d207c  li 8, 4
  03d2080  addic 5, 3, 136
  03d2084  addic 4, 4, 22752
  03d2088  ori 7, 5, 0
  03d208c  mtctr 8
  03d2090  lfs 3, 136(3)
  03d2094  lfs 6, 0(4)
  03d2098  fmuls 3, 3, 6
  03d209c  lfs 6, 4(4)
  03d20a0  addic 4, 4, 8
  03d20a4  stfs 3, 136(3)
  03d20a8  lfs 3, 4(5)
  03d20ac  addic 3, 3, 8
  03d20b0  fmuls 3, 3, 6
  03d20b4  stfs 3, 4(5)
  03d20b8  addic 5, 5, 8
  03d20bc  bdnz 0x3d2090
  03d20c0  fmr 3, 30
  03d20c4  ori 3, 1, 0
  03d20c8  mtctr 6
  03d20cc  lfs 6, 136(3)
  03d20d0  fadds 3, 3, 6
  03d20d4  addic 3, 3, 16
  03d20d8  lfs 6, 4(7)
  03d20dc  lfs 7, 8(7)
  03d20e0  lfs 8, 12(7)
  03d20e4  addic 7, 7, 16
  03d20e8  fadds 3, 3, 6
  03d20ec  fadds 3, 3, 7
  03d20f0  fadds 3, 3, 8
  03d20f4  bdnz 0x3d20cc
  03d20f8  fadds 4, 3, 4
  03d20fc  fmadds 4, 4, 5, 2
  03d2100  fmr 2, 4
  03d2104  bl 0x5026a0
  03d2108  nop
  03d210c  fcmpu 0, 31, 1
  03d2110  cror 6, 1, 2
  03d2114  bt 6, 0x3d212c
  03d2118  lis 3, 164
  03d211c  fmr 31, 1
  03d2120  lwz 3, -28512(3)
  03d2124  addc 29, 3, 27
  03d2128  clrldi 29, 29, 32
  03d212c  lhz 3, 0(28)
  03d2130  addic 28, 28, 2
  03d2134  extsh 3, 3
  03d2138  cmpwi 3, 0
  03d213c  bf 0, 0x3d1d78
  03d2140  ori 3, 29, 0
  03d2144  ld 0, 272(1)
  03d2148  mtlr 0
  03d214c  lfd 30, 240(1)
  03d2150  lfd 31, 248(1)
  03d2154  ld 27, 200(1)
  03d2158  ld 28, 208(1)
  03d215c  ld 29, 216(1)
  03d2160  ld 30, 224(1)
  03d2164  ld 31, 232(1)
  03d2168  addi 1, 1, 256
  03d216c  blr

FUN_003d2178:   # 0x3d2178, 0xbc bytes
  03d2178  lis 6, 61
  03d217c  lis 5, 165
  03d2180  sldi 4, 4, 2
  03d2184  addi 6, 6, 8560
  03d2188  addic 5, 5, -28284
  03d218c  extsw 4, 4
  03d2190  lfs 2, 0(6)
  03d2194  lwzx 4, 5, 4
  03d2198  cmpwi 4, 0
  03d219c  bf 2, 0x3d21a8
  03d21a0  li 3, 0
  03d21a4  b 0x3d2230
  03d21a8  lis 5, 164
  03d21ac  li 7, 0
  03d21b0  lwz 5, -28512(5)
  03d21b4  lhz 6, 0(4)
  03d21b8  rlwinm 6, 6, 8, 9, 23
  03d21bc  addc 6, 5, 6
  03d21c0  clrldi 6, 6, 32
  03d21c4  lhz 8, 166(6)
  03d21c8  cmpwi 8, 583
  03d21cc  bf 2, 0x3d2218
  03d21d0  lfs 1, 4(3)
  03d21d4  lfs 3, 20(6)
  03d21d8  lfs 4, 0(3)
  03d21dc  fsubs 1, 1, 3
  03d21e0  lfs 3, 16(6)
  03d21e4  fsubs 3, 4, 3
  03d21e8  lfs 4, 8(3)
  03d21ec  lfs 5, 24(6)
  03d21f0  fsubs 4, 4, 5
  03d21f4  fmuls 1, 1, 1
  03d21f8  fmadds 1, 3, 3, 1
  03d21fc  fmadds 1, 4, 4, 1
  03d2200  fsqrts 1, 1
  03d2204  fcmpu 0, 2, 1
  03d2208  cror 6, 0, 2
  03d220c  bt 6, 0x3d2218
  03d2210  ori 7, 6, 0
  03d2214  fmr 2, 1
  03d2218  lhz 6, 0(4)
  03d221c  addic 4, 4, 2
  03d2220  extsh 6, 6
  03d2224  cmpwi 6, 0
  03d2228  bf 0, 0x3d21b4
  03d222c  ori 3, 7, 0
  03d2230  blr

FUN_003d2234:   # 0x3d2234, 0x6c bytes
  03d2234  lis 4, 165
  03d2238  sldi 3, 3, 2
  03d223c  addic 4, 4, -28284
  03d2240  extsw 3, 3
  03d2244  lwzx 3, 4, 3
  03d2248  cmpwi 3, 0
  03d224c  bt 2, 0x3d229c
  03d2250  lis 5, 164
  03d2254  li 6, 1
  03d2258  lis 4, 16320
  03d225c  lwz 5, -28512(5)
  03d2260  lhz 7, 0(3)
  03d2264  rlwinm 7, 7, 8, 9, 23
  03d2268  addc 7, 5, 7
  03d226c  clrldi 7, 7, 32
  03d2270  lhz 8, 166(7)
  03d2274  cmpwi 8, 583
  03d2278  bf 2, 0x3d2288
  03d227c  lwz 7, 120(7)
  03d2280  stw 6, 48(7)
  03d2284  stw 4, 36(7)
  03d2288  lhz 7, 0(3)
  03d228c  addic 3, 3, 2
  03d2290  extsh 7, 7
  03d2294  cmpwi 7, 0
  03d2298  bf 0, 0x3d2260
  03d229c  blr

FUN_003d22a0:   # 0x3d22a0, 0x18 bytes
  03d22a0  lwz 3, 120(3)
  03d22a4  li 4, 5
  03d22a8  lis 5, 16320
  03d22ac  stw 4, 44(3)
  03d22b0  stw 5, 36(3)
  03d22b4  blr

M584_003d22b8:   # 0x3d22b8, 0x14 bytes
  03d22b8  lis 3, 132
  03d22bc  lis 4, 1
  03d22c0  addic 3, 3, 25920
  03d22c4  stw 4, 72(3)
  03d22c8  blr

M584_003d22d0:   # 0x3d22d0, 0xd8 bytes
  03d22d0  stdu 1, -160(1)
  03d22d4  mflr 0
  03d22d8  std 0, 176(1)
  03d22dc  std 29, 136(1)
  03d22e0  ori 29, 3, 0
  03d22e4  std 31, 152(1)
  03d22e8  li 3, 584
  03d22ec  std 30, 144(1)
  03d22f0  ori 31, 6, 0
  03d22f4  std 28, 128(1)
  03d22f8  ori 30, 5, 0
  03d22fc  std 27, 120(1)
  03d2300  li 28, 160
  03d2304  bl 0xefa28
  03d2308  nop
  03d230c  ori 27, 3, 0
  03d2310  cmpwi 27, 0
  03d2314  bt 2, 0x3d2380
  03d2318  addc 4, 1, 28
  03d231c  li 5, 255
  03d2320  li 6, 1
  03d2324  li 3, 0
  03d2328  std 30, 64(4)
  03d232c  std 31, 72(4)
  03d2330  stb 5, 48(27)
  03d2334  sth 5, 50(27)
  03d2338  stb 6, 49(27)
  03d233c  lfs 1, 72(29)
  03d2340  stw 3, 64(27)
  03d2344  stw 3, 68(27)
  03d2348  ld 3, 56(29)
  03d234c  stfs 1, 72(27)
  03d2350  std 3, 56(27)
  03d2354  lfs 1, 68(4)
  03d2358  lfs 2, 76(4)
  03d235c  ori 3, 27, 0
  03d2360  stfs 1, 20(27)
  03d2364  stfs 2, 28(27)
  03d2368  lfs 1, 64(4)
  03d236c  lfs 2, 72(4)
  03d2370  stfs 1, 16(27)
  03d2374  stfs 2, 24(27)
  03d2378  bl 0xf31a8
  03d237c  nop
  03d2380  ori 3, 27, 0
  03d2384  ld 0, 176(1)
  03d2388  mtlr 0
  03d238c  ld 27, 120(1)
  03d2390  ld 28, 128(1)
  03d2394  ld 29, 136(1)
  03d2398  ld 30, 144(1)
  03d239c  ld 31, 152(1)
  03d23a0  addi 1, 1, 160
  03d23a4  blr

UpdateMoby_584:   # 0x3d23a8, 0xe0 bytes
  03d23a8  stdu 1, -144(1)
  03d23ac  mflr 0
  03d23b0  std 0, 160(1)
  03d23b4  std 31, 136(1)
  03d23b8  ori 31, 3, 0
  03d23bc  addic 4, 1, 112
  03d23c0  std 30, 128(1)
  03d23c4  addic 5, 31, 64
  03d23c8  lwz 30, 120(31)
  03d23cc  lfs 1, 16(31)
  03d23d0  ori 6, 5, 0
  03d23d4  addic 3, 30, 96
  03d23d8  lfs 2, 160(30)
  03d23dc  fsubs 1, 1, 2
  03d23e0  stfs 1, 112(1)
  03d23e4  lfs 1, 20(31)
  03d23e8  lfs 2, 164(30)
  03d23ec  fsubs 1, 1, 2
  03d23f0  stfs 1, 116(1)
  03d23f4  lfs 1, 24(31)
  03d23f8  lfs 2, 168(30)
  03d23fc  fsubs 1, 1, 2
  03d2400  stfs 1, 120(1)
  03d2404  lfs 1, 28(31)
  03d2408  stfs 1, 124(1)
  03d240c  bl 0x112900
  03d2410  nop
  03d2414  lfs 1, 16(31)
  03d2418  stfs 1, 160(30)
  03d241c  lfs 1, 20(31)
  03d2420  stfs 1, 164(30)
  03d2424  lfs 1, 24(31)
  03d2428  stfs 1, 168(30)
  03d242c  lfs 1, 28(31)
  03d2430  stfs 1, 172(30)
  03d2434  lbz 3, 32(31)
  03d2438  cmpwi 3, 0
  03d243c  bf 2, 0x3d2470
  03d2440  li 4, 0
  03d2444  li 5, 4
  03d2448  li 6, 13
  03d244c  ori 3, 31, 0
  03d2450  stw 4, 32(30)
  03d2454  sth 4, 36(30)
  03d2458  stb 5, 40(30)
  03d245c  sth 6, 62(30)
  03d2460  bl 0x10c000
  03d2464  nop
  03d2468  li 3, 1
  03d246c  stb 3, 32(31)
  03d2470  ld 0, 160(1)
  03d2474  mtlr 0
  03d2478  ld 30, 128(1)
  03d247c  ld 31, 136(1)
  03d2480  addi 1, 1, 144
  03d2484  blr
