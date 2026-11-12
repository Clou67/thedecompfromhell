# game/mobyproc.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_MOBYPROC:   # 0xf1e84, 0x14 bytes
  00f1e84  lis 3, 115
  00f1e88  lis 4, 1
  00f1e8c  addic 3, 3, -28476
  00f1e90  stw 4, 72(3)
  00f1e94  blr

MB_SetLights:   # 0xf1ea0, 0x28 bytes
  00f1ea0  sldi 6, 6, 8
  00f1ea4  sldi 7, 7, 16
  00f1ea8  extsw 6, 6
  00f1eac  sldi 4, 4, 32
  00f1eb0  or 5, 6, 5
  00f1eb4  extsw 6, 7
  00f1eb8  or 4, 4, 6
  00f1ebc  or 4, 5, 4
  00f1ec0  std 4, 56(3)
  00f1ec4  blr

SetColorOfMoby:   # 0xf1ec8, 0x28 bytes
  00f1ec8  ld 7, 56(3)
  00f1ecc  sldi 4, 4, 32
  00f1ed0  sldi 5, 5, 40
  00f1ed4  slwi 7, 7, 0
  00f1ed8  sldi 6, 6, 48
  00f1edc  or 4, 7, 4
  00f1ee0  or 4, 4, 5
  00f1ee4  or 4, 4, 6
  00f1ee8  std 4, 56(3)
  00f1eec  blr

MB_GetLights:   # 0xf1ef0, 0x2c bytes
  00f1ef0  ld 3, 56(3)
  00f1ef4  rldicl 7, 3, 32, 32
  00f1ef8  rldicl 8, 3, 24, 40
  00f1efc  rldicl 3, 3, 16, 48
  00f1f00  clrlwi 7, 7, 24
  00f1f04  clrlwi 8, 8, 24
  00f1f08  clrlwi 3, 3, 24
  00f1f0c  stw 7, 0(4)
  00f1f10  stw 8, 0(5)
  00f1f14  stw 3, 0(6)
  00f1f18  blr

MB_GetLightDirection:   # 0xf1f28, 0xe0 bytes
  00f1f28  stdu 1, -64(1)
  00f1f2c  ld 7, 56(3)
  00f1f30  lis 5, 162
  00f1f34  rldicl 6, 7, 48, 48
  00f1f38  clrlwi 3, 7, 24
  00f1f3c  cmpwi 6, 0
  00f1f40  addic 5, 5, -9472
  00f1f44  rldicl 7, 7, 56, 56
  00f1f48  slwi 3, 3, 6
  00f1f4c  bt 2, 0xf1fd4
  00f1f50  clrldi 6, 6, 32
  00f1f54  addc 3, 5, 3
  00f1f58  std 6, 48(1)
  00f1f5c  lis 6, 15
  00f1f60  addi 6, 6, 7964
  00f1f64  lfs 1, 0(6)
  00f1f68  lfs 2, 4(6)
  00f1f6c  lfs 3, 16(3)
  00f1f70  lfd 4, 48(1)
  00f1f74  fcfid 4, 4
  00f1f78  slwi 6, 7, 6
  00f1f7c  addc 5, 5, 6
  00f1f80  lfs 5, 16(5)
  00f1f84  frsp 4, 4
  00f1f88  fmuls 1, 4, 1
  00f1f8c  fsubs 2, 2, 1
  00f1f90  fmuls 4, 5, 1
  00f1f94  fmuls 3, 3, 2
  00f1f98  fadds 3, 3, 4
  00f1f9c  stfs 3, 0(4)
  00f1fa0  lfs 3, 20(3)
  00f1fa4  lfs 4, 20(5)
  00f1fa8  fmuls 3, 3, 2
  00f1fac  fmuls 4, 4, 1
  00f1fb0  fadds 3, 3, 4
  00f1fb4  stfs 3, 4(4)
  00f1fb8  lfs 3, 24(3)
  00f1fbc  lfs 4, 24(5)
  00f1fc0  fmuls 2, 3, 2
  00f1fc4  fmuls 1, 4, 1
  00f1fc8  fadds 1, 2, 1
  00f1fcc  stfs 1, 8(4)
  00f1fd0  b 0xf2000
  00f1fd4  addic 5, 5, 16
  00f1fd8  addc 3, 5, 3
  00f1fdc  clrldi 3, 3, 32
  00f1fe0  lfs 1, 0(3)
  00f1fe4  stfs 1, 0(4)
  00f1fe8  lfs 1, 4(3)
  00f1fec  stfs 1, 4(4)
  00f1ff0  lfs 1, 8(3)
  00f1ff4  stfs 1, 8(4)
  00f1ff8  lfs 1, 12(3)
  00f1ffc  stfs 1, 12(4)
  00f2000  addi 1, 1, 64
  00f2004  blr

MB_GetLightColor:   # 0xf2010, 0xdc bytes
  00f2010  stdu 1, -64(1)
  00f2014  ori 5, 3, 0
  00f2018  lis 3, 162
  00f201c  addic 3, 3, -9472
  00f2020  ld 8, 56(5)
  00f2024  clrlwi 5, 8, 24
  00f2028  rldicl 7, 8, 48, 48
  00f202c  slwi 5, 5, 6
  00f2030  cmpwi 7, 0
  00f2034  addc 6, 3, 5
  00f2038  rldicl 8, 8, 56, 56
  00f203c  bt 2, 0xf20c0
  00f2040  clrldi 7, 7, 32
  00f2044  std 7, 48(1)
  00f2048  lis 7, 15
  00f204c  addi 7, 7, 8200
  00f2050  lfs 1, 0(7)
  00f2054  lfs 2, 4(7)
  00f2058  lfsx 3, 3, 5
  00f205c  lfd 4, 48(1)
  00f2060  slwi 7, 8, 6
  00f2064  fcfid 4, 4
  00f2068  lfsx 5, 3, 7
  00f206c  addc 3, 3, 7
  00f2070  frsp 4, 4
  00f2074  fmuls 1, 4, 1
  00f2078  fsubs 2, 2, 1
  00f207c  fmuls 4, 5, 1
  00f2080  fmuls 3, 3, 2
  00f2084  fadds 3, 3, 4
  00f2088  stfs 3, 0(4)
  00f208c  lfs 3, 4(6)
  00f2090  lfs 4, 4(3)
  00f2094  fmuls 3, 3, 2
  00f2098  fmuls 4, 4, 1
  00f209c  fadds 3, 3, 4
  00f20a0  stfs 3, 4(4)
  00f20a4  lfs 3, 8(6)
  00f20a8  lfs 4, 8(3)
  00f20ac  fmuls 2, 3, 2
  00f20b0  fmuls 1, 4, 1
  00f20b4  fadds 1, 2, 1
  00f20b8  stfs 1, 8(4)
  00f20bc  b 0xf20e4
  00f20c0  clrldi 3, 6, 32
  00f20c4  lfs 1, 0(3)
  00f20c8  stfs 1, 0(4)
  00f20cc  lfs 1, 4(3)
  00f20d0  stfs 1, 4(4)
  00f20d4  lfs 1, 8(3)
  00f20d8  stfs 1, 8(4)
  00f20dc  lfs 1, 12(3)
  00f20e0  stfs 1, 12(4)
  00f20e4  addi 1, 1, 64
  00f20e8  blr

MB_BSphereGap:   # 0xf20f0, 0x60 bytes
  00f20f0  lfs 1, 0(3)
  00f20f4  lfs 2, 0(4)
  00f20f8  lfs 3, 4(3)
  00f20fc  lfs 4, 4(4)
  00f2100  fsubs 1, 1, 2
  00f2104  fsubs 2, 3, 4
  00f2108  lfs 3, 8(3)
  00f210c  lfs 4, 8(4)
  00f2110  fsubs 3, 3, 4
  00f2114  lis 5, 15
  00f2118  fmuls 1, 1, 1
  00f211c  fmuls 2, 2, 2
  00f2120  fmuls 3, 3, 3
  00f2124  addi 5, 5, 8428
  00f2128  fadds 1, 1, 2
  00f212c  lfs 2, 12(3)
  00f2130  fadds 1, 1, 3
  00f2134  lfs 3, 12(4)
  00f2138  fadds 2, 2, 3
  00f213c  lfs 3, 0(5)
  00f2140  fsqrts 1, 1
  00f2144  fsubs 1, 1, 2
  00f2148  fmuls 1, 1, 3
  00f214c  blr

MobyGrid_Free:   # 0xf2150, 0x68 bytes
  00f2150  ori 5, 4, 0
  00f2154  ori 4, 3, 0
  00f2158  addc 3, 5, 3
  00f215c  lis 6, 165
  00f2160  cmpw 4, 3
  00f2164  addic 5, 6, -28384
  00f2168  bf 0, 0xf21b4
  00f216c  srawi 6, 4, 5
  00f2170  li 7, 1
  00f2174  addze 6, 6
  00f2178  srawi 8, 4, 5
  00f217c  sldi 6, 6, 5
  00f2180  sldi 8, 8, 2
  00f2184  subc 6, 4, 6
  00f2188  addc 8, 8, 5
  00f218c  slw 6, 7, 6
  00f2190  clrldi 7, 8, 32
  00f2194  li 9, -1
  00f2198  addic 4, 4, 1
  00f219c  xor 6, 6, 9
  00f21a0  cmpw 4, 3
  00f21a4  lwz 8, 0(7)
  00f21a8  and 6, 6, 8
  00f21ac  stw 6, 0(7)
  00f21b0  bt 0, 0xf216c
  00f21b4  blr

MobyGrid_Alloc:   # 0xf21b8, 0x6c bytes
  00f21b8  li 5, 1
  00f21bc  li 8, 0
  00f21c0  lis 10, 165
  00f21c4  slw 9, 5, 3
  00f21c8  ori 4, 8, 0
  00f21cc  addic 10, 10, -28384
  00f21d0  addic 9, 9, -1
  00f21d4  lwz 7, 0(10)
  00f21d8  cmpwi 7, -1
  00f21dc  bt 2, 0xf2218
  00f21e0  ori 6, 4, 0
  00f21e4  slw 5, 9, 6
  00f21e8  and 11, 7, 5
  00f21ec  cmpwi 11, 0
  00f21f0  bf 2, 0xf2210
  00f21f4  cmpwi 6, 32
  00f21f8  bt 2, 0xf2218
  00f21fc  or 4, 7, 5
  00f2200  addc 3, 8, 6
  00f2204  extsw 3, 3
  00f2208  stw 4, 0(10)
  00f220c  blr
  00f2210  addc 6, 3, 6
  00f2214  b 0xf21e4
  00f2218  addic 8, 8, 32
  00f221c  addic 10, 10, 4
  00f2220  b 0xf21d4

FreeMobyGridLists:   # 0xf2224, 0x198 bytes
  00f2224  stdu 1, -64(1)
  00f2228  lhz 6, 0(3)
  00f222c  lis 5, 165
  00f2230  lbz 4, 3(3)
  00f2234  extsh 6, 6
  00f2238  addic 5, 5, -28384
  00f223c  addc 4, 4, 6
  00f2240  std 31, 56(1)
  00f2244  std 30, 48(1)
  00f2248  cmpw 6, 4
  00f224c  bf 0, 0xf2298
  00f2250  srawi 7, 6, 5
  00f2254  li 10, 1
  00f2258  addze 7, 7
  00f225c  srawi 9, 6, 5
  00f2260  sldi 7, 7, 5
  00f2264  sldi 9, 9, 2
  00f2268  subc 7, 6, 7
  00f226c  addc 9, 9, 5
  00f2270  li 8, -1
  00f2274  clrldi 9, 9, 32
  00f2278  slw 7, 10, 7
  00f227c  addic 6, 6, 1
  00f2280  xor 7, 7, 8
  00f2284  cmpw 6, 4
  00f2288  lwz 8, 0(9)
  00f228c  and 7, 7, 8
  00f2290  stw 7, 0(9)
  00f2294  bt 0, 0xf2250
  00f2298  lbz 8, 3(3)
  00f229c  lbz 6, 2(3)
  00f22a0  rlwinm 7, 8, 31, 24, 31
  00f22a4  cmpwi 7, 0
  00f22a8  bf 2, 0xf22e4
  00f22ac  lis 4, 164
  00f22b0  lhz 5, 0(3)
  00f22b4  li 8, 0
  00f22b8  addic 4, 4, -28384
  00f22bc  extsh 5, 5
  00f22c0  addic 4, 4, 16384
  00f22c4  sldi 5, 5, 5
  00f22c8  sth 8, 0(3)
  00f22cc  addc 4, 4, 5
  00f22d0  clrldi 4, 4, 32
  00f22d4  stw 8, 0(4)
  00f22d8  stb 6, 2(3)
  00f22dc  stb 7, 3(3)
  00f22e0  b 0xf23ac
  00f22e4  li 4, 1
  00f22e8  slw 31, 4, 7
  00f22ec  li 4, 0
  00f22f0  addic 31, 31, -1
  00f22f4  ori 12, 4, 0
  00f22f8  lwz 11, 0(5)
  00f22fc  cmpwi 11, -1
  00f2300  bt 2, 0xf2378
  00f2304  ori 10, 12, 0
  00f2308  slw 9, 31, 10
  00f230c  and 30, 11, 9
  00f2310  cmpwi 30, 0
  00f2314  bf 2, 0xf2370
  00f2318  cmpwi 10, 32
  00f231c  bt 2, 0xf2378
  00f2320  or 9, 11, 9
  00f2324  lis 11, 164
  00f2328  rlwinm 8, 8, 2, 21, 28
  00f232c  addic 11, 11, -28384
  00f2330  stw 9, 0(5)
  00f2334  addc 5, 4, 10
  00f2338  lhz 4, 0(3)
  00f233c  extsh 9, 5
  00f2340  extsh 4, 4
  00f2344  sldi 9, 9, 5
  00f2348  sldi 4, 4, 5
  00f234c  addc 9, 11, 9
  00f2350  addc 4, 11, 4
  00f2354  addic 9, 9, 16384
  00f2358  addic 4, 4, 16384
  00f235c  cmpwi 8, 0
  00f2360  clrldi 4, 4, 32
  00f2364  clrldi 9, 9, 32
  00f2368  bt 1, 0xf2384
  00f236c  b 0xf23a0
  00f2370  addc 10, 7, 10
  00f2374  b 0xf2308
  00f2378  addic 4, 4, 32
  00f237c  addic 5, 5, 4
  00f2380  b 0xf22f8
  00f2384  addic 8, 8, -1
  00f2388  lwz 10, 0(4)
  00f238c  addic 4, 4, 4
  00f2390  cmpwi 8, 0
  00f2394  stw 10, 0(9)
  00f2398  addic 9, 9, 4
  00f239c  bt 1, 0xf2384
  00f23a0  sth 5, 0(3)
  00f23a4  stb 6, 2(3)
  00f23a8  stb 7, 3(3)
  00f23ac  ld 30, 48(1)
  00f23b0  ld 31, 56(1)
  00f23b4  addi 1, 1, 64
  00f23b8  blr

AllocMobyGridLists:   # 0xf23bc, 0x18c bytes
  00f23bc  stdu 1, -64(1)
  00f23c0  lbz 10, 3(3)
  00f23c4  li 4, 1
  00f23c8  slwi 5, 10, 1
  00f23cc  ori 7, 4, 0
  00f23d0  std 31, 56(1)
  00f23d4  std 30, 48(1)
  00f23d8  cmpwi 5, 1
  00f23dc  bf 1, 0xf23e4
  00f23e0  rlwinm 4, 10, 1, 23, 30
  00f23e4  clrlwi 4, 4, 24
  00f23e8  lis 5, 165
  00f23ec  slw 31, 7, 4
  00f23f0  addic 5, 5, -28384
  00f23f4  li 9, 0
  00f23f8  ori 6, 5, 0
  00f23fc  addic 31, 31, -1
  00f2400  ori 12, 9, 0
  00f2404  lwz 11, 0(5)
  00f2408  cmpwi 11, -1
  00f240c  bt 2, 0xf245c
  00f2410  ori 8, 12, 0
  00f2414  slw 10, 31, 8
  00f2418  and 30, 11, 10
  00f241c  cmpwi 30, 0
  00f2420  bf 2, 0xf2454
  00f2424  cmpwi 8, 32
  00f2428  bt 2, 0xf245c
  00f242c  or 10, 11, 10
  00f2430  stw 10, 0(5)
  00f2434  lbz 10, 3(3)
  00f2438  addc 5, 9, 8
  00f243c  cmpwi 10, 0
  00f2440  extsh 9, 5
  00f2444  lbz 8, 2(3)
  00f2448  ori 11, 5, 0
  00f244c  bt 2, 0xf2468
  00f2450  b 0xf2478
  00f2454  addc 8, 4, 8
  00f2458  b 0xf2414
  00f245c  addic 9, 9, 32
  00f2460  addic 5, 5, 4
  00f2464  b 0xf2404
  00f2468  sth 11, 0(3)
  00f246c  stb 8, 2(3)
  00f2470  stb 4, 3(3)
  00f2474  b 0xf2538
  00f2478  lhz 11, 0(3)
  00f247c  extsh 11, 11
  00f2480  addc 10, 10, 11
  00f2484  cmpw 11, 10
  00f2488  bf 0, 0xf24d0
  00f248c  srawi 12, 11, 5
  00f2490  li 30, -1
  00f2494  addze 12, 12
  00f2498  srawi 31, 11, 5
  00f249c  sldi 12, 12, 5
  00f24a0  sldi 31, 31, 2
  00f24a4  subc 12, 11, 12
  00f24a8  addc 31, 31, 6
  00f24ac  slw 12, 7, 12
  00f24b0  clrldi 31, 31, 32
  00f24b4  xor 12, 12, 30
  00f24b8  addic 11, 11, 1
  00f24bc  cmpw 11, 10
  00f24c0  lwz 30, 0(31)
  00f24c4  and 12, 12, 30
  00f24c8  stw 12, 0(31)
  00f24cc  bt 0, 0xf248c
  00f24d0  sldi 7, 9, 5
  00f24d4  lhz 9, 0(3)
  00f24d8  lis 6, 164
  00f24dc  lbz 10, 3(3)
  00f24e0  extsh 9, 9
  00f24e4  addic 6, 6, -28384
  00f24e8  sldi 9, 9, 5
  00f24ec  addc 7, 6, 7
  00f24f0  addc 6, 6, 9
  00f24f4  slwi 9, 10, 3
  00f24f8  addic 7, 7, 16384
  00f24fc  addic 6, 6, 16384
  00f2500  cmpwi 9, 0
  00f2504  clrldi 7, 7, 32
  00f2508  clrldi 6, 6, 32
  00f250c  bf 1, 0xf252c
  00f2510  addic 9, 9, -1
  00f2514  lwz 10, 0(6)
  00f2518  cmpwi 9, 0
  00f251c  stw 10, 0(7)
  00f2520  addic 6, 6, 4
  00f2524  addic 7, 7, 4
  00f2528  bt 1, 0xf2510
  00f252c  sth 5, 0(3)
  00f2530  stb 8, 2(3)
  00f2534  stb 4, 3(3)
  00f2538  ld 30, 48(1)
  00f253c  ld 31, 56(1)
  00f2540  addi 1, 1, 64
  00f2544  blr

ByteSwap32:   # 0xf2548, 0x34 bytes
  00f2548  stdu 1, -64(1)
  00f254c  addic 4, 1, 48
  00f2550  srwi 5, 3, 24
  00f2554  rlwinm 6, 3, 16, 24, 31
  00f2558  rlwinm 7, 3, 24, 24, 31
  00f255c  stb 5, 3(4)
  00f2560  stb 6, 2(4)
  00f2564  stb 7, 1(4)
  00f2568  stb 3, 0(4)
  00f256c  lwz 3, 48(1)
  00f2570  extsw 3, 3
  00f2574  addi 1, 1, 64
  00f2578  blr

MB_PointInByteRect:   # 0xf257c, 0x78 bytes
  00f257c  stdu 1, -64(1)
  00f2580  addic 6, 1, 48
  00f2584  stw 5, 48(1)
  00f2588  lbz 5, 0(6)
  00f258c  lbz 7, 1(6)
  00f2590  lbz 8, 2(6)
  00f2594  extsb 5, 5
  00f2598  lbz 6, 3(6)
  00f259c  extsb 7, 7
  00f25a0  extsb 8, 8
  00f25a4  extsb 6, 6
  00f25a8  cmpw 5, 3
  00f25ac  cmpw 6, 7, 4
  00f25b0  cmpw 1, 6, 4
  00f25b4  cmpw 7, 8, 3
  00f25b8  bf 1, 0xf25c4
  00f25bc  li 3, 0
  00f25c0  b 0xf25ec
  00f25c4  bf 28, 0xf25d0
  00f25c8  li 3, 0
  00f25cc  b 0xf25ec
  00f25d0  bf 25, 0xf25dc
  00f25d4  li 3, 0
  00f25d8  b 0xf25ec
  00f25dc  bf 4, 0xf25e8
  00f25e0  li 3, 0
  00f25e4  b 0xf25ec
  00f25e8  li 3, 1
  00f25ec  addi 1, 1, 64
  00f25f0  blr

UpdateMobyGrids:   # 0xf25f4, 0x3bc bytes
  00f25f4  stdu 1, -192(1)
  00f25f8  mflr 0
  00f25fc  std 0, 208(1)
  00f2600  std 31, 184(1)
  00f2604  lis 5, -32640
  00f2608  std 30, 176(1)
  00f260c  ori 31, 3, 0
  00f2610  ori 30, 4, 0
  00f2614  ori 3, 5, 32639
  00f2618  std 29, 168(1)
  00f261c  std 28, 160(1)
  00f2620  std 27, 152(1)
  00f2624  std 26, 144(1)
  00f2628  std 25, 136(1)
  00f262c  cmpw 30, 3
  00f2630  bf 2, 0xf2658
  00f2634  addic 3, 1, 128
  00f2638  srwi 4, 30, 24
  00f263c  rlwinm 5, 30, 16, 24, 31
  00f2640  rlwinm 6, 30, 24, 24, 31
  00f2644  stb 4, 3(3)
  00f2648  stb 5, 2(3)
  00f264c  stb 6, 1(3)
  00f2650  stb 30, 0(3)
  00f2654  lwz 30, 128(1)
  00f2658  addic 29, 31, 160
  00f265c  addic 3, 1, 124
  00f2660  lwz 4, 0(29)
  00f2664  srwi 5, 4, 24
  00f2668  rlwinm 6, 4, 16, 24, 31
  00f266c  stb 4, 0(3)
  00f2670  rlwinm 7, 4, 24, 24, 31
  00f2674  stb 5, 3(3)
  00f2678  stb 6, 2(3)
  00f267c  stb 7, 1(3)
  00f2680  lwz 3, 124(1)
  00f2684  cmpwi 3, 0
  00f2688  bt 0, 0xf280c
  00f268c  lbz 28, 161(31)
  00f2690  lbz 3, 163(31)
  00f2694  addic 3, 3, 1
  00f2698  cmpw 28, 3
  00f269c  bf 0, 0xf280c
  00f26a0  lbz 27, 160(31)
  00f26a4  lbz 3, 162(31)
  00f26a8  addic 3, 3, 1
  00f26ac  cmpw 27, 3
  00f26b0  bf 0, 0xf27f8
  00f26b4  slwi 26, 27, 2
  00f26b8  addic 3, 1, 120
  00f26bc  stw 30, 120(1)
  00f26c0  lbz 4, 0(3)
  00f26c4  lbz 5, 2(3)
  00f26c8  lbz 6, 1(3)
  00f26cc  extsb 7, 4
  00f26d0  lbz 4, 3(3)
  00f26d4  extsb 5, 5
  00f26d8  cmpw 7, 27
  00f26dc  extsb 3, 6
  00f26e0  extsb 4, 4
  00f26e4  cmpw 1, 5, 27
  00f26e8  bf 1, 0xf26f4
  00f26ec  li 3, 0
  00f26f0  b 0xf2724
  00f26f4  cmpw 6, 3, 28
  00f26f8  bf 4, 0xf2704
  00f26fc  li 3, 0
  00f2700  b 0xf2724
  00f2704  cmpw 1, 4, 28
  00f2708  bf 25, 0xf2714
  00f270c  li 3, 0
  00f2710  b 0xf2724
  00f2714  bf 4, 0xf2720
  00f2718  li 3, 0
  00f271c  b 0xf2724
  00f2720  li 3, 1
  00f2724  cmpwi 3, 0
  00f2728  bf 2, 0xf27e0
  00f272c  slwi 3, 28, 8
  00f2730  lis 4, 164
  00f2734  addc 3, 26, 3
  00f2738  addic 4, 4, -28384
  00f273c  addc 3, 3, 4
  00f2740  addic 5, 4, 16384
  00f2744  clrldi 3, 3, 32
  00f2748  lhz 4, 0(3)
  00f274c  lbz 6, 2(3)
  00f2750  extsh 4, 4
  00f2754  slwi 7, 6, 1
  00f2758  sldi 4, 4, 5
  00f275c  addc 6, 5, 4
  00f2760  clrldi 6, 6, 32
  00f2764  addc 4, 6, 7
  00f2768  clrldi 4, 4, 32
  00f276c  ori 5, 6, 0
  00f2770  addic 6, 5, 2
  00f2774  lhz 7, 0(5)
  00f2778  lwz 8, 172(31)
  00f277c  extsh 7, 7
  00f2780  cmpw 7, 8
  00f2784  bf 2, 0xf276c
  00f2788  addic 6, 5, 2
  00f278c  lhz 7, -2(4)
  00f2790  li 5, 0
  00f2794  sth 7, -2(6)
  00f2798  sth 5, -2(4)
  00f279c  lbz 4, 2(3)
  00f27a0  lbz 6, 3(3)
  00f27a4  addic 7, 4, -1
  00f27a8  slwi 8, 6, 3
  00f27ac  clrlwi 4, 7, 24
  00f27b0  addic 8, 8, -4
  00f27b4  stb 7, 2(3)
  00f27b8  cmpw 8, 4
  00f27bc  bf 1, 0xf27c4
  00f27c0  li 5, 1
  00f27c4  cmpwi 4, 0
  00f27c8  bt 2, 0xf27dc
  00f27cc  cmpwi 1, 5, 0
  00f27d0  cmpwi 6, 1
  00f27d4  cror 2, 2, 6
  00f27d8  bt 2, 0xf27e0
  00f27dc  bl 0xf2224
  00f27e0  lbz 3, 162(31)
  00f27e4  addic 27, 27, 1
  00f27e8  addic 3, 3, 1
  00f27ec  addic 26, 26, 4
  00f27f0  cmpw 27, 3
  00f27f4  bt 0, 0xf26b8
  00f27f8  lbz 3, 163(31)
  00f27fc  addic 28, 28, 1
  00f2800  addic 3, 3, 1
  00f2804  cmpw 28, 3
  00f2808  bt 0, 0xf26a0
  00f280c  ori 3, 30, 0
  00f2810  addic 5, 1, 116
  00f2814  srwi 6, 3, 24
  00f2818  lwz 30, 0(29)
  00f281c  rlwinm 7, 3, 16, 24, 31
  00f2820  rlwinm 4, 3, 24, 24, 31
  00f2824  stw 3, 0(29)
  00f2828  stb 6, 3(5)
  00f282c  stb 7, 2(5)
  00f2830  stb 4, 1(5)
  00f2834  stb 3, 0(5)
  00f2838  lwz 3, 116(1)
  00f283c  cmpwi 3, 0
  00f2840  bt 0, 0xf2984
  00f2844  lbz 28, 161(31)
  00f2848  lbz 3, 163(31)
  00f284c  addic 3, 3, 1
  00f2850  cmpw 28, 3
  00f2854  bf 0, 0xf2984
  00f2858  lbz 27, 160(31)
  00f285c  lbz 3, 162(31)
  00f2860  addic 3, 3, 1
  00f2864  cmpw 27, 3
  00f2868  bf 0, 0xf2970
  00f286c  slwi 25, 27, 2
  00f2870  addic 3, 1, 112
  00f2874  stw 30, 112(1)
  00f2878  lbz 4, 0(3)
  00f287c  lbz 5, 2(3)
  00f2880  lbz 6, 1(3)
  00f2884  extsb 4, 4
  00f2888  lbz 7, 3(3)
  00f288c  extsb 5, 5
  00f2890  cmpw 4, 27
  00f2894  extsb 3, 6
  00f2898  extsb 4, 7
  00f289c  cmpw 1, 5, 27
  00f28a0  bf 1, 0xf28ac
  00f28a4  li 3, 0
  00f28a8  b 0xf28dc
  00f28ac  cmpw 6, 3, 28
  00f28b0  bf 4, 0xf28bc
  00f28b4  li 3, 0
  00f28b8  b 0xf28dc
  00f28bc  cmpw 1, 4, 28
  00f28c0  bf 25, 0xf28cc
  00f28c4  li 3, 0
  00f28c8  b 0xf28dc
  00f28cc  bf 4, 0xf28d8
  00f28d0  li 3, 0
  00f28d4  b 0xf28dc
  00f28d8  li 3, 1
  00f28dc  cmpwi 3, 0
  00f28e0  bf 2, 0xf2958
  00f28e4  slwi 3, 28, 8
  00f28e8  lis 29, 164
  00f28ec  addc 3, 25, 3
  00f28f0  addic 29, 29, -28384
  00f28f4  addc 26, 3, 29
  00f28f8  clrldi 26, 26, 32
  00f28fc  lbz 3, 3(26)
  00f2900  lbz 4, 2(26)
  00f2904  slwi 5, 3, 4
  00f2908  cmpw 5, 4
  00f290c  bf 1, 0xf2918
  00f2910  cmpwi 3, 0
  00f2914  bf 2, 0xf2920
  00f2918  ori 3, 26, 0
  00f291c  bl 0xf23bc
  00f2920  lhz 4, 0(26)
  00f2924  addic 3, 29, 16384
  00f2928  lbz 5, 2(26)
  00f292c  extsh 4, 4
  00f2930  slwi 5, 5, 1
  00f2934  sldi 4, 4, 5
  00f2938  addc 3, 3, 4
  00f293c  lwz 4, 172(31)
  00f2940  addc 3, 3, 5
  00f2944  clrldi 3, 3, 32
  00f2948  sth 4, 0(3)
  00f294c  lbz 3, 2(26)
  00f2950  addic 3, 3, 1
  00f2954  stb 3, 2(26)
  00f2958  lbz 3, 162(31)
  00f295c  addic 27, 27, 1
  00f2960  addic 25, 25, 4
  00f2964  addic 3, 3, 1
  00f2968  cmpw 27, 3
  00f296c  bt 0, 0xf2870
  00f2970  lbz 3, 163(31)
  00f2974  addic 28, 28, 1
  00f2978  addic 3, 3, 1
  00f297c  cmpw 28, 3
  00f2980  bt 0, 0xf2858
  00f2984  ld 0, 208(1)
  00f2988  mtlr 0
  00f298c  ld 25, 136(1)
  00f2990  ld 26, 144(1)
  00f2994  ld 27, 152(1)
  00f2998  ld 28, 160(1)
  00f299c  ld 29, 168(1)
  00f29a0  ld 30, 176(1)
  00f29a4  ld 31, 184(1)
  00f29a8  addi 1, 1, 192
  00f29ac  blr

PostUpdateMobyBsphere:   # 0xf29b8, 0x6e0 bytes
  00f29b8  stdu 1, -240(1)
  00f29bc  mflr 0
  00f29c0  std 0, 256(1)
  00f29c4  stfd 29, 216(1)
  00f29c8  stfd 30, 224(1)
  00f29cc  stfd 31, 232(1)
  00f29d0  std 26, 168(1)
  00f29d4  std 28, 184(1)
  00f29d8  std 25, 160(1)
  00f29dc  ori 26, 7, 0
  00f29e0  lbz 25, 82(3)
  00f29e4  std 30, 200(1)
  00f29e8  ori 28, 10, 0
  00f29ec  lbz 30, 83(3)
  00f29f0  li 7, 240
  00f29f4  ori 10, 4, 0
  00f29f8  std 31, 208(1)
  00f29fc  addc 4, 1, 7
  00f2a00  std 29, 192(1)
  00f2a04  ori 31, 5, 0
  00f2a08  ori 29, 8, 0
  00f2a0c  std 27, 176(1)
  00f2a10  ori 8, 6, 0
  00f2a14  ori 27, 9, 0
  00f2a18  std 10, 56(4)
  00f2a1c  std 31, 64(4)
  00f2a20  addic 12, 7, 56
  00f2a24  std 8, 72(4)
  00f2a28  ori 31, 25, 0
  00f2a2c  std 26, 80(4)
  00f2a30  addic 11, 7, 64
  00f2a34  std 29, 88(4)
  00f2a38  cmpw 31, 30
  00f2a3c  std 27, 96(4)
  00f2a40  addic 9, 7, 96
  00f2a44  addic 6, 7, 72
  00f2a48  std 28, 104(4)
  00f2a4c  addic 5, 7, 80
  00f2a50  addic 10, 7, 88
  00f2a54  addic 8, 7, 104
  00f2a58  bt 2, 0xf2b28
  00f2a5c  cmpwi 31, 255
  00f2a60  bf 2, 0xf2a90
  00f2a64  lis 31, 163
  00f2a68  lbz 29, 80(3)
  00f2a6c  addic 31, 31, 17920
  00f2a70  slwi 29, 29, 4
  00f2a74  addc 31, 31, 29
  00f2a78  clrldi 31, 31, 32
  00f2a7c  lfs 4, 0(31)
  00f2a80  lfs 3, 4(31)
  00f2a84  lfs 2, 8(31)
  00f2a88  lfs 1, 12(31)
  00f2a8c  b 0xf2ab8
  00f2a90  lwz 29, 36(3)
  00f2a94  slwi 31, 31, 2
  00f2a98  addic 29, 29, 72
  00f2a9c  addc 31, 29, 31
  00f2aa0  clrldi 31, 31, 32
  00f2aa4  lwz 31, 0(31)
  00f2aa8  lfs 4, 0(31)
  00f2aac  lfs 3, 4(31)
  00f2ab0  lfs 2, 8(31)
  00f2ab4  lfs 1, 12(31)
  00f2ab8  rlwinm 31, 30, 2, 22, 29
  00f2abc  lwz 30, 36(3)
  00f2ac0  lfs 5, 84(3)
  00f2ac4  addic 30, 30, 72
  00f2ac8  fmuls 6, 5, 4
  00f2acc  addc 31, 30, 31
  00f2ad0  fmuls 11, 5, 3
  00f2ad4  fmuls 12, 5, 2
  00f2ad8  clrldi 31, 31, 32
  00f2adc  lwz 31, 0(31)
  00f2ae0  lfs 7, 0(31)
  00f2ae4  lfs 8, 4(31)
  00f2ae8  lfs 9, 8(31)
  00f2aec  lfs 10, 12(31)
  00f2af0  fmuls 7, 5, 7
  00f2af4  fmuls 8, 5, 8
  00f2af8  fmuls 9, 5, 9
  00f2afc  fmuls 10, 5, 10
  00f2b00  fmuls 5, 5, 1
  00f2b04  fadds 4, 7, 4
  00f2b08  fadds 3, 8, 3
  00f2b0c  fadds 2, 9, 2
  00f2b10  fadds 1, 10, 1
  00f2b14  fsubs 4, 4, 6
  00f2b18  fsubs 3, 3, 11
  00f2b1c  fsubs 2, 2, 12
  00f2b20  fsubs 1, 1, 5
  00f2b24  b 0xf2b98
  00f2b28  lbz 30, 113(3)
  00f2b2c  cmpw 31, 30
  00f2b30  bt 2, 0xf2b80
  00f2b34  lwz 29, 36(3)
  00f2b38  slwi 30, 31, 2
  00f2b3c  stb 31, 113(3)
  00f2b40  addic 31, 29, 72
  00f2b44  addc 31, 31, 30
  00f2b48  clrldi 31, 31, 32
  00f2b4c  lwz 31, 0(31)
  00f2b50  lfs 4, 0(31)
  00f2b54  lfs 3, 4(31)
  00f2b58  lfs 2, 8(31)
  00f2b5c  lfs 1, 12(31)
  00f2b60  stfs 4, 240(3)
  00f2b64  lfs 5, 4(31)
  00f2b68  stfs 5, 244(3)
  00f2b6c  lfs 5, 8(31)
  00f2b70  stfs 5, 248(3)
  00f2b74  lfs 5, 12(31)
  00f2b78  stfs 5, 252(3)
  00f2b7c  b 0xf2b98
  00f2b80  addic 31, 3, 240
  00f2b84  addic 30, 3, 240
  00f2b88  lfs 4, 0(31)
  00f2b8c  lfs 3, 4(30)
  00f2b90  lfs 2, 8(30)
  00f2b94  lfs 1, 12(30)
  00f2b98  lhz 31, 52(3)
  00f2b9c  rlwinm 31, 31, 0, 16, 16
  00f2ba0  cmpwi 31, 0
  00f2ba4  bt 2, 0xf2be0
  00f2ba8  lfsx 5, 1, 6
  00f2bac  lfs 6, 76(4)
  00f2bb0  addic 31, 7, 76
  00f2bb4  fneg 5, 5
  00f2bb8  lfsx 7, 1, 5
  00f2bbc  fneg 6, 6
  00f2bc0  lfs 8, 84(4)
  00f2bc4  fneg 7, 7
  00f2bc8  addic 30, 7, 84
  00f2bcc  fneg 8, 8
  00f2bd0  stfsx 5, 1, 6
  00f2bd4  stfsx 6, 1, 31
  00f2bd8  stfsx 7, 1, 5
  00f2bdc  stfsx 8, 1, 30
  00f2be0  addic 31, 3, 192
  00f2be4  addic 30, 3, 192
  00f2be8  lfsx 5, 1, 12
  00f2bec  lfs 6, 60(4)
  00f2bf0  addic 12, 3, 208
  00f2bf4  lfsx 7, 1, 11
  00f2bf8  addic 29, 3, 208
  00f2bfc  lfs 8, 68(4)
  00f2c00  addic 11, 7, 60
  00f2c04  stfs 5, 0(31)
  00f2c08  stfs 6, 4(30)
  00f2c0c  stfs 7, 8(30)
  00f2c10  lfsx 6, 1, 6
  00f2c14  stfs 8, 12(30)
  00f2c18  addic 6, 3, 224
  00f2c1c  lfs 8, 76(4)
  00f2c20  lfsx 9, 1, 5
  00f2c24  lfs 10, 84(4)
  00f2c28  addic 5, 3, 224
  00f2c2c  stfs 6, 0(12)
  00f2c30  stfs 8, 4(29)
  00f2c34  stfs 9, 8(29)
  00f2c38  addic 12, 7, 76
  00f2c3c  stfs 10, 12(29)
  00f2c40  lfsx 8, 1, 10
  00f2c44  lfs 10, 92(4)
  00f2c48  lfsx 11, 1, 9
  00f2c4c  lfs 12, 100(4)
  00f2c50  stfs 8, 0(6)
  00f2c54  stfs 10, 4(5)
  00f2c58  stfs 11, 8(5)
  00f2c5c  stfs 12, 12(5)
  00f2c60  lfs 10, 44(3)
  00f2c64  lfsx 12, 1, 11
  00f2c68  addic 5, 7, 92
  00f2c6c  fmuls 4, 4, 10
  00f2c70  lfsx 13, 1, 12
  00f2c74  fmuls 3, 3, 10
  00f2c78  lis 6, 15
  00f2c7c  fmuls 2, 2, 10
  00f2c80  addi 6, 6, 10672
  00f2c84  lfsx 0, 1, 5
  00f2c88  fmuls 1, 1, 10
  00f2c8c  lfs 31, 16(3)
  00f2c90  lfs 30, 0(6)
  00f2c94  lfs 29, 20(3)
  00f2c98  fmuls 5, 5, 4
  00f2c9c  fmuls 6, 6, 3
  00f2ca0  fmuls 12, 12, 4
  00f2ca4  fmuls 13, 13, 3
  00f2ca8  fmuls 4, 7, 4
  00f2cac  fmuls 3, 9, 3
  00f2cb0  fmuls 8, 8, 2
  00f2cb4  fmuls 0, 0, 2
  00f2cb8  fmuls 2, 11, 2
  00f2cbc  fadds 5, 5, 6
  00f2cc0  lfsx 6, 1, 8
  00f2cc4  fadds 7, 12, 13
  00f2cc8  lfs 9, 24(3)
  00f2ccc  lfs 12, 108(4)
  00f2cd0  fmuls 13, 31, 30
  00f2cd4  fadds 3, 4, 3
  00f2cd8  fmuls 31, 29, 30
  00f2cdc  lfs 4, 112(4)
  00f2ce0  stfs 1, 12(3)
  00f2ce4  fctiwz 1, 1
  00f2ce8  fadds 5, 5, 8
  00f2cec  fmuls 8, 9, 30
  00f2cf0  fadds 7, 7, 0
  00f2cf4  lwz 4, 168(3)
  00f2cf8  fadds 2, 3, 2
  00f2cfc  addic 6, 4, 1
  00f2d00  fadds 3, 5, 6
  00f2d04  fadds 5, 7, 12
  00f2d08  fadds 2, 2, 4
  00f2d0c  fadds 3, 3, 13
  00f2d10  fadds 4, 5, 31
  00f2d14  fadds 2, 2, 8
  00f2d18  fctiwz 5, 3
  00f2d1c  fctiwz 6, 4
  00f2d20  stfs 3, 0(3)
  00f2d24  stfs 4, 4(3)
  00f2d28  lwz 4, 148(3)
  00f2d2c  stfs 2, 8(3)
  00f2d30  cmpwi 4, 0
  00f2d34  stfd 5, 144(1)
  00f2d38  lwz 5, 148(1)
  00f2d3c  stfd 6, 144(1)
  00f2d40  lwz 4, 148(1)
  00f2d44  stfd 1, 144(1)
  00f2d48  lwz 12, 148(1)
  00f2d4c  stw 6, 168(3)
  00f2d50  bt 2, 0xf3060
  00f2d54  subc 6, 5, 12
  00f2d58  li 0, 128
  00f2d5c  srawi 6, 6, 14
  00f2d60  addc 5, 12, 5
  00f2d64  srawi 5, 5, 14
  00f2d68  stw 6, 128(1)
  00f2d6c  stw 6, 132(1)
  00f2d70  stw 6, 136(1)
  00f2d74  stw 6, 140(1)
  00f2d78  subc 6, 4, 12
  00f2d7c  lvx 2, 1, 0
  00f2d80  addc 4, 12, 4
  00f2d84  srawi 6, 6, 14
  00f2d88  li 0, 128
  00f2d8c  vspltw 2, 2, 0
  00f2d90  srawi 4, 4, 14
  00f2d94  stw 6, 128(1)
  00f2d98  stw 6, 132(1)
  00f2d9c  stw 6, 136(1)
  00f2da0  stw 6, 140(1)
  00f2da4  lvx 3, 1, 0
  00f2da8  li 0, 128
  00f2dac  stw 5, 128(1)
  00f2db0  stw 5, 132(1)
  00f2db4  stw 5, 136(1)
  00f2db8  stw 5, 140(1)
  00f2dbc  lvx 4, 1, 0
  00f2dc0  vspltw 2, 2, 0
  00f2dc4  li 0, 128
  00f2dc8  stw 4, 128(1)
  00f2dcc  stw 4, 132(1)
  00f2dd0  stw 4, 136(1)
  00f2dd4  vspltw 2, 2, 0
  00f2dd8  stw 4, 140(1)
  00f2ddc  vspltw 3, 3, 0
  00f2de0  lvx 5, 1, 0
  00f2de4  vspltw 4, 4, 0
  00f2de8  vspltw 5, 5, 0
  00f2dec  vspltw 2, 2, 0
  00f2df0  vspltw 3, 3, 0
  00f2df4  vspltw 4, 4, 0
  00f2df8  vspltw 5, 5, 0
  00f2dfc  vspltw 2, 2, 0
  00f2e00  vspltw 3, 3, 0
  00f2e04  vspltw 4, 4, 0
  00f2e08  vspltw 5, 5, 0
  00f2e0c  vspltw 2, 2, 0
  00f2e10  vspltw 3, 3, 0
  00f2e14  vspltw 4, 4, 0
  00f2e18  vspltw 5, 5, 0
  00f2e1c  vspltw 2, 2, 0
  00f2e20  vspltw 3, 3, 0
  00f2e24  vspltw 4, 4, 0
  00f2e28  vspltw 5, 5, 0
  00f2e2c  vspltw 2, 2, 0
  00f2e30  vspltw 3, 3, 0
  00f2e34  vspltw 4, 4, 0
  00f2e38  vspltw 5, 5, 0
  00f2e3c  vspltw 2, 2, 0
  00f2e40  vspltw 3, 3, 0
  00f2e44  vspltw 4, 4, 0
  00f2e48  vspltw 5, 5, 0
  00f2e4c  vspltw 2, 2, 0
  00f2e50  vspltw 3, 3, 0
  00f2e54  vspltw 4, 4, 0
  00f2e58  vspltw 5, 5, 0
  00f2e5c  vspltw 2, 2, 0
  00f2e60  vspltw 3, 3, 0
  00f2e64  vspltw 4, 4, 0
  00f2e68  vspltw 5, 5, 0
  00f2e6c  vspltw 2, 2, 0
  00f2e70  vspltw 3, 3, 0
  00f2e74  vspltw 4, 4, 0
  00f2e78  vspltw 5, 5, 0
  00f2e7c  vspltw 2, 2, 0
  00f2e80  vspltw 3, 3, 0
  00f2e84  vspltw 4, 4, 0
  00f2e88  vspltw 5, 5, 0
  00f2e8c  vspltw 2, 2, 0
  00f2e90  vspltw 3, 3, 0
  00f2e94  vspltw 4, 4, 0
  00f2e98  vspltw 5, 5, 0
  00f2e9c  vspltw 2, 2, 0
  00f2ea0  vspltw 3, 3, 0
  00f2ea4  vspltw 4, 4, 0
  00f2ea8  vspltw 5, 5, 0
  00f2eac  vspltw 2, 2, 0
  00f2eb0  vspltw 3, 3, 0
  00f2eb4  vspltw 4, 4, 0
  00f2eb8  vspltw 5, 5, 0
  00f2ebc  vspltw 2, 2, 0
  00f2ec0  vspltw 3, 3, 0
  00f2ec4  vspltw 4, 4, 0
  00f2ec8  vspltw 5, 5, 0
  00f2ecc  vspltw 2, 2, 0
  00f2ed0  vspltw 3, 3, 0
  00f2ed4  vspltw 4, 4, 0
  00f2ed8  vspltw 5, 5, 0
  00f2edc  vspltw 2, 2, 0
  00f2ee0  vspltw 3, 3, 0
  00f2ee4  vspltw 4, 4, 0
  00f2ee8  vspltw 5, 5, 0
  00f2eec  vspltw 2, 2, 0
  00f2ef0  vspltw 3, 3, 0
  00f2ef4  vspltw 4, 4, 0
  00f2ef8  vspltw 5, 5, 0
  00f2efc  vspltw 2, 2, 0
  00f2f00  vspltw 3, 3, 0
  00f2f04  vspltw 4, 4, 0
  00f2f08  vspltw 5, 5, 0
  00f2f0c  vspltw 2, 2, 0
  00f2f10  vspltw 3, 3, 0
  00f2f14  vspltw 4, 4, 0
  00f2f18  vspltw 5, 5, 0
  00f2f1c  vspltw 2, 2, 0
  00f2f20  vspltw 3, 3, 0
  00f2f24  vspltw 4, 4, 0
  00f2f28  vspltw 5, 5, 0
  00f2f2c  vspltw 2, 2, 0
  00f2f30  vspltw 3, 3, 0
  00f2f34  vspltw 4, 4, 0
  00f2f38  vspltw 5, 5, 0
  00f2f3c  vspltw 2, 2, 0
  00f2f40  vspltw 3, 3, 0
  00f2f44  vspltw 4, 4, 0
  00f2f48  vspltw 5, 5, 0
  00f2f4c  vspltw 2, 2, 0
  00f2f50  vspltw 3, 3, 0
  00f2f54  vspltw 4, 4, 0
  00f2f58  vspltw 5, 5, 0
  00f2f5c  vspltw 2, 2, 0
  00f2f60  vspltw 3, 3, 0
  00f2f64  vspltw 4, 4, 0
  00f2f68  vspltw 5, 5, 0
  00f2f6c  vspltw 2, 2, 0
  00f2f70  vspltw 3, 3, 0
  00f2f74  vspltw 4, 4, 0
  00f2f78  vspltw 5, 5, 0
  00f2f7c  vspltw 2, 2, 0
  00f2f80  addic 4, 1, 112
  00f2f84  vspltw 3, 3, 0
  00f2f88  vspltw 4, 4, 0
  00f2f8c  vspltw 5, 5, 0
  00f2f90  vspltw 2, 2, 0
  00f2f94  vspltw 3, 3, 0
  00f2f98  vspltw 4, 4, 0
  00f2f9c  vspltw 5, 5, 0
  00f2fa0  vspltw 2, 2, 0
  00f2fa4  vspltw 3, 3, 0
  00f2fa8  addic 5, 1, 113
  00f2fac  vspltw 4, 4, 0
  00f2fb0  addic 6, 1, 114
  00f2fb4  vspltw 5, 5, 0
  00f2fb8  addic 7, 1, 115
  00f2fbc  vspltw 2, 2, 0
  00f2fc0  addic 8, 3, 160
  00f2fc4  vspltw 3, 3, 0
  00f2fc8  vspltw 4, 4, 0
  00f2fcc  vspltw 5, 5, 0
  00f2fd0  vspltw 2, 2, 0
  00f2fd4  vspltw 3, 3, 0
  00f2fd8  vspltw 4, 4, 0
  00f2fdc  vspltw 5, 5, 0
  00f2fe0  vspltw 2, 2, 0
  00f2fe4  vspltw 3, 3, 0
  00f2fe8  vspltw 4, 4, 0
  00f2fec  vspltw 5, 5, 0
  00f2ff0  vspltw 2, 2, 0
  00f2ff4  vspltw 3, 3, 0
  00f2ff8  vspltw 4, 4, 0
  00f2ffc  vspltw 5, 5, 0
  00f3000  vspltb 2, 2, 3
  00f3004  vspltw 3, 3, 0
  00f3008  vspltw 4, 4, 0
  00f300c  vspltw 5, 5, 0
  00f3010  vspltw 3, 3, 0
  00f3014  vspltw 4, 4, 0
  00f3018  stvebx 2, 0, 4
  00f301c  vspltw 2, 5, 0
  00f3020  vspltb 3, 3, 3
  00f3024  vspltb 4, 4, 3
  00f3028  vspltb 2, 2, 3
  00f302c  stvebx 3, 0, 5
  00f3030  stvebx 4, 0, 6
  00f3034  stvebx 2, 0, 7
  00f3038  lwz 5, 0(4)
  00f303c  lwz 4, 0(8)
  00f3040  cmpw 4, 5
  00f3044  bt 2, 0xf3060
  00f3048  lis 4, -16192
  00f304c  and 4, 5, 4
  00f3050  cmpwi 4, 0
  00f3054  bf 2, 0xf3060
  00f3058  extsw 4, 5
  00f305c  bl 0xf25f4
  00f3060  ld 0, 256(1)
  00f3064  mtlr 0
  00f3068  lfd 29, 216(1)
  00f306c  lfd 30, 224(1)
  00f3070  lfd 31, 232(1)
  00f3074  ld 25, 160(1)
  00f3078  ld 26, 168(1)
  00f307c  ld 27, 176(1)
  00f3080  ld 28, 184(1)
  00f3084  ld 29, 192(1)
  00f3088  ld 30, 200(1)
  00f308c  ld 31, 208(1)
  00f3090  addi 1, 1, 240
  00f3094  blr

PostUpdateMobyLockTransform:   # 0xf30a0, 0xfc bytes
  00f30a0  stdu 1, -128(1)
  00f30a4  mflr 0
  00f30a8  std 0, 144(1)
  00f30ac  lbz 4, 32(3)
  00f30b0  extsb 4, 4
  00f30b4  cmpwi 4, 0
  00f30b8  bt 0, 0xf318c
  00f30bc  addic 4, 3, 192
  00f30c0  addic 5, 3, 192
  00f30c4  addic 7, 3, 208
  00f30c8  addic 6, 3, 224
  00f30cc  addic 8, 3, 224
  00f30d0  lfs 1, 0(4)
  00f30d4  addic 4, 3, 208
  00f30d8  lfs 2, 4(5)
  00f30dc  lfs 3, 8(5)
  00f30e0  lfs 4, 12(5)
  00f30e4  lfs 5, 0(7)
  00f30e8  lfs 6, 4(4)
  00f30ec  lfs 7, 8(4)
  00f30f0  lfs 8, 12(4)
  00f30f4  lfs 9, 0(6)
  00f30f8  lfs 10, 4(8)
  00f30fc  lis 4, 15
  00f3100  lfs 11, 8(8)
  00f3104  lfs 12, 12(8)
  00f3108  stfs 1, 56(1)
  00f310c  addi 4, 4, 12440
  00f3110  stfs 2, 60(1)
  00f3114  stfs 3, 64(1)
  00f3118  stfs 4, 68(1)
  00f311c  stfs 5, 72(1)
  00f3120  stfs 6, 76(1)
  00f3124  stfs 7, 80(1)
  00f3128  stfs 8, 84(1)
  00f312c  stfs 9, 88(1)
  00f3130  stfs 10, 92(1)
  00f3134  stfs 11, 96(1)
  00f3138  stfs 12, 100(1)
  00f313c  lfs 1, 0(4)
  00f3140  ld 5, 56(1)
  00f3144  ld 6, 64(1)
  00f3148  stfs 1, 104(1)
  00f314c  stfs 1, 108(1)
  00f3150  stfs 1, 112(1)
  00f3154  lfs 1, 4(4)
  00f3158  ld 7, 72(1)
  00f315c  ori 4, 5, 0
  00f3160  ld 8, 80(1)
  00f3164  ori 5, 6, 0
  00f3168  ld 9, 88(1)
  00f316c  ori 6, 7, 0
  00f3170  ld 10, 96(1)
  00f3174  ori 7, 8, 0
  00f3178  ori 8, 9, 0
  00f317c  stfs 1, 116(1)
  00f3180  ori 9, 10, 0
  00f3184  ld 10, 104(1)
  00f3188  bl 0xf29b8
  00f318c  ld 0, 144(1)
  00f3190  mtlr 0
  00f3194  addi 1, 1, 128
  00f3198  blr

UpdateMobyTransform:   # 0xf31a8, 0x340 bytes
  00f31a8  stdu 1, -272(1)
  00f31ac  mflr 0
  00f31b0  std 0, 288(1)
  00f31b4  stfd 26, 224(1)
  00f31b8  stfd 27, 232(1)
  00f31bc  stfd 28, 240(1)
  00f31c0  stfd 29, 248(1)
  00f31c4  stfd 30, 256(1)
  00f31c8  stfd 31, 264(1)
  00f31cc  std 31, 216(1)
  00f31d0  ori 31, 3, 0
  00f31d4  lbz 3, 32(31)
  00f31d8  extsb 3, 3
  00f31dc  std 30, 208(1)
  00f31e0  std 29, 200(1)
  00f31e4  cmpwi 3, 0
  00f31e8  bt 0, 0xf34b4
  00f31ec  lhz 4, 52(31)
  00f31f0  rlwinm 4, 4, 0, 23, 23
  00f31f4  cmpwi 4, 0
  00f31f8  bt 2, 0xf32dc
  00f31fc  cmpwi 3, 0
  00f3200  bt 0, 0xf32d8
  00f3204  addic 3, 31, 192
  00f3208  addic 4, 31, 208
  00f320c  addic 5, 31, 192
  00f3210  addic 7, 31, 208
  00f3214  addic 6, 31, 224
  00f3218  lfs 1, 0(3)
  00f321c  lfs 2, 4(4)
  00f3220  addic 3, 31, 224
  00f3224  lfs 3, 4(5)
  00f3228  lfs 4, 8(5)
  00f322c  lfs 5, 12(5)
  00f3230  lfs 6, 0(7)
  00f3234  lfs 7, 8(4)
  00f3238  lfs 8, 12(4)
  00f323c  lfs 9, 0(6)
  00f3240  lis 4, 15
  00f3244  lfs 10, 4(3)
  00f3248  lfs 11, 8(3)
  00f324c  lfs 12, 12(3)
  00f3250  addi 4, 4, 12700
  00f3254  stfs 1, 56(1)
  00f3258  ori 3, 31, 0
  00f325c  stfs 3, 60(1)
  00f3260  stfs 4, 64(1)
  00f3264  stfs 5, 68(1)
  00f3268  stfs 6, 72(1)
  00f326c  stfs 2, 76(1)
  00f3270  stfs 7, 80(1)
  00f3274  stfs 8, 84(1)
  00f3278  stfs 9, 88(1)
  00f327c  stfs 10, 92(1)
  00f3280  stfs 11, 96(1)
  00f3284  stfs 12, 100(1)
  00f3288  lfs 1, 0(4)
  00f328c  ld 5, 56(1)
  00f3290  ld 6, 64(1)
  00f3294  stfs 1, 104(1)
  00f3298  stfs 1, 108(1)
  00f329c  stfs 1, 112(1)
  00f32a0  lfs 1, 4(4)
  00f32a4  ld 7, 72(1)
  00f32a8  ori 4, 5, 0
  00f32ac  ld 8, 80(1)
  00f32b0  ori 5, 6, 0
  00f32b4  ld 9, 88(1)
  00f32b8  ori 6, 7, 0
  00f32bc  ld 10, 96(1)
  00f32c0  ori 7, 8, 0
  00f32c4  ori 8, 9, 0
  00f32c8  stfs 1, 116(1)
  00f32cc  ori 9, 10, 0
  00f32d0  ld 10, 104(1)
  00f32d4  bl 0xf29b8
  00f32d8  b 0xf34b4
  00f32dc  lfs 31, 64(31)
  00f32e0  li 30, 0
  00f32e4  lfs 30, 68(31)
  00f32e8  fmr 1, 31
  00f32ec  lfs 29, 72(31)
  00f32f0  ori 4, 30, 0
  00f32f4  bl 0x5dd914
  00f32f8  nop
  00f32fc  fmr 28, 1
  00f3300  fmr 1, 31
  00f3304  li 29, 1
  00f3308  ori 4, 29, 0
  00f330c  bl 0x5dd914
  00f3310  nop
  00f3314  fmr 31, 1
  00f3318  fmr 1, 30
  00f331c  ori 4, 30, 0
  00f3320  bl 0x5dd914
  00f3324  nop
  00f3328  fmr 27, 1
  00f332c  ori 4, 29, 0
  00f3330  fmr 1, 30
  00f3334  bl 0x5dd914
  00f3338  nop
  00f333c  fmr 30, 1
  00f3340  fmr 1, 29
  00f3344  ori 4, 30, 0
  00f3348  bl 0x5dd914
  00f334c  nop
  00f3350  fmr 26, 1
  00f3354  ori 4, 29, 0
  00f3358  fmr 1, 29
  00f335c  bl 0x5dd914
  00f3360  nop
  00f3364  fmuls 2, 1, 27
  00f3368  fmuls 3, 27, 26
  00f336c  addic 3, 1, 128
  00f3370  fmuls 4, 31, 26
  00f3374  lis 9, 16256
  00f3378  fmuls 5, 31, 1
  00f337c  addic 5, 3, 16
  00f3380  fmuls 6, 28, 26
  00f3384  addic 6, 3, 16
  00f3388  fmuls 7, 1, 28
  00f338c  addic 4, 3, 32
  00f3390  fmuls 1, 30, 1
  00f3394  addic 7, 3, 32
  00f3398  fmuls 8, 30, 26
  00f339c  addic 8, 3, 48
  00f33a0  fneg 11, 27
  00f33a4  fmuls 12, 30, 28
  00f33a8  fmuls 9, 28, 2
  00f33ac  fmuls 10, 28, 3
  00f33b0  fmuls 2, 31, 2
  00f33b4  fmuls 3, 31, 3
  00f33b8  fmuls 13, 31, 30
  00f33bc  stfs 1, 0(3)
  00f33c0  stfs 8, 4(3)
  00f33c4  fsubs 4, 9, 4
  00f33c8  fadds 5, 10, 5
  00f33cc  stfs 11, 8(3)
  00f33d0  fadds 2, 2, 6
  00f33d4  stw 30, 12(3)
  00f33d8  fsubs 3, 3, 7
  00f33dc  addic 3, 3, 48
  00f33e0  stfs 4, 0(5)
  00f33e4  stfs 5, 4(6)
  00f33e8  stfs 12, 8(6)
  00f33ec  stw 30, 12(6)
  00f33f0  stfs 2, 0(4)
  00f33f4  stfs 3, 4(7)
  00f33f8  stfs 13, 8(7)
  00f33fc  stw 30, 12(7)
  00f3400  stw 30, 0(8)
  00f3404  stw 30, 4(3)
  00f3408  stw 30, 8(3)
  00f340c  stw 9, 12(3)
  00f3410  lfs 1, 128(1)
  00f3414  lfs 2, 136(1)
  00f3418  stfs 1, 56(1)
  00f341c  stfs 2, 64(1)
  00f3420  lfs 1, 144(1)
  00f3424  lfs 2, 152(1)
  00f3428  stfs 1, 72(1)
  00f342c  stfs 2, 80(1)
  00f3430  lfs 1, 160(1)
  00f3434  ori 3, 31, 0
  00f3438  lfs 2, 168(1)
  00f343c  stfs 1, 88(1)
  00f3440  stfs 2, 96(1)
  00f3444  lfs 1, 176(1)
  00f3448  lfs 2, 132(1)
  00f344c  lfs 3, 140(1)
  00f3450  stfs 1, 104(1)
  00f3454  stfs 2, 60(1)
  00f3458  stfs 3, 68(1)
  00f345c  lfs 1, 148(1)
  00f3460  lfs 2, 156(1)
  00f3464  stfs 1, 76(1)
  00f3468  stfs 2, 84(1)
  00f346c  lfs 1, 164(1)
  00f3470  ld 4, 56(1)
  00f3474  ld 5, 64(1)
  00f3478  lfs 2, 172(1)
  00f347c  stfs 1, 92(1)
  00f3480  ld 6, 72(1)
  00f3484  ld 7, 80(1)
  00f3488  stfs 2, 100(1)
  00f348c  lfs 1, 180(1)
  00f3490  ld 8, 88(1)
  00f3494  ld 9, 96(1)
  00f3498  lfs 2, 184(1)
  00f349c  lfs 3, 188(1)
  00f34a0  stfs 1, 108(1)
  00f34a4  ld 10, 104(1)
  00f34a8  stfs 2, 112(1)
  00f34ac  stfs 3, 116(1)
  00f34b0  bl 0xf29b8
  00f34b4  ld 0, 288(1)
  00f34b8  mtlr 0
  00f34bc  lfd 26, 224(1)
  00f34c0  lfd 27, 232(1)
  00f34c4  lfd 28, 240(1)
  00f34c8  lfd 29, 248(1)
  00f34cc  lfd 30, 256(1)
  00f34d0  lfd 31, 264(1)
  00f34d4  ld 29, 200(1)
  00f34d8  ld 30, 208(1)
  00f34dc  ld 31, 216(1)
  00f34e0  addi 1, 1, 272
  00f34e4  blr

MB_TransformJointBatch:   # 0xf34e8, 0x11c bytes
  00f34e8  stdu 1, -224(1)
  00f34ec  mflr 0
  00f34f0  std 0, 240(1)
  00f34f4  std 28, 192(1)
  00f34f8  std 29, 200(1)
  00f34fc  ori 28, 4, 0
  00f3500  std 30, 208(1)
  00f3504  li 29, 0
  00f3508  std 27, 184(1)
  00f350c  ori 30, 5, 0
  00f3510  cmplw 28, 29
  00f3514  std 31, 216(1)
  00f3518  ori 27, 3, 0
  00f351c  bf 1, 0xf35d8
  00f3520  ori 31, 29, 0
  00f3524  lbz 3, 0(30)
  00f3528  cmpwi 3, 0
  00f352c  bt 2, 0xf35c0
  00f3530  addic 5, 27, 32
  00f3534  addic 4, 27, 16
  00f3538  addic 6, 1, 112
  00f353c  ori 3, 27, 0
  00f3540  bl 0x502238
  00f3544  nop
  00f3548  addic 5, 27, 44
  00f354c  lis 4, 165
  00f3550  addic 4, 4, -9408
  00f3554  lwz 5, 0(5)
  00f3558  addc 3, 4, 31
  00f355c  cmpwi 5, 0
  00f3560  clrldi 3, 3, 32
  00f3564  bt 2, 0xf3584
  00f3568  rlwinm 6, 5, 0, 4, 25
  00f356c  addic 5, 1, 112
  00f3570  addc 4, 4, 6
  00f3574  clrldi 4, 4, 32
  00f3578  bl 0x50162c
  00f357c  nop
  00f3580  b 0xf35c0
  00f3584  addic 4, 1, 112
  00f3588  addic 5, 1, 128
  00f358c  addic 6, 1, 144
  00f3590  addic 8, 1, 160
  00f3594  li 7, 16
  00f3598  lvx 2, 0, 4
  00f359c  li 4, 32
  00f35a0  lvx 3, 0, 5
  00f35a4  li 9, 48
  00f35a8  lvx 4, 0, 6
  00f35ac  lvx 5, 0, 8
  00f35b0  stvx 2, 0, 3
  00f35b4  stvx 3, 7, 3
  00f35b8  stvx 4, 4, 3
  00f35bc  stvx 5, 9, 3
  00f35c0  addic 29, 29, 1
  00f35c4  addic 27, 27, 64
  00f35c8  cmplw 29, 28
  00f35cc  addic 30, 30, 1
  00f35d0  addic 31, 31, 64
  00f35d4  bt 0, 0xf3524
  00f35d8  lis 3, 165
  00f35dc  addic 3, 3, -9408
  00f35e0  ld 0, 240(1)
  00f35e4  mtlr 0
  00f35e8  ld 27, 184(1)
  00f35ec  ld 28, 192(1)
  00f35f0  ld 29, 200(1)
  00f35f4  ld 30, 208(1)
  00f35f8  ld 31, 216(1)
  00f35fc  addi 1, 1, 224
  00f3600  blr

ProcessManipulators:   # 0xf3618, 0x508 bytes
  00f3618  stdu 1, -512(1)
  00f361c  mflr 0
  00f3620  std 0, 528(1)
  00f3624  stfd 19, 408(1)
  00f3628  stfd 20, 416(1)
  00f362c  stfd 21, 424(1)
  00f3630  stfd 22, 432(1)
  00f3634  stfd 23, 440(1)
  00f3638  stfd 24, 448(1)
  00f363c  stfd 25, 456(1)
  00f3640  stfd 26, 464(1)
  00f3644  stfd 27, 472(1)
  00f3648  stfd 28, 480(1)
  00f364c  stfd 29, 488(1)
  00f3650  stfd 30, 496(1)
  00f3654  stfd 31, 504(1)
  00f3658  std 30, 392(1)
  00f365c  std 31, 400(1)
  00f3660  ori 30, 3, 0
  00f3664  ori 31, 4, 0
  00f3668  std 29, 384(1)
  00f366c  std 28, 376(1)
  00f3670  cmpwi 30, 0
  00f3674  bt 2, 0xf3acc
  00f3678  lwz 4, 4(30)
  00f367c  addic 3, 30, 16
  00f3680  rlwinm 4, 4, 0, 4, 25
  00f3684  addic 8, 30, 16
  00f3688  addc 29, 31, 4
  00f368c  clrldi 29, 29, 32
  00f3690  addic 4, 29, 16
  00f3694  addic 6, 29, 16
  00f3698  addic 7, 29, 32
  00f369c  lfs 1, 0(29)
  00f36a0  addic 5, 29, 32
  00f36a4  stfs 1, 112(1)
  00f36a8  lfs 1, 4(29)
  00f36ac  stfs 1, 116(1)
  00f36b0  lfs 1, 8(29)
  00f36b4  stfs 1, 120(1)
  00f36b8  lfs 1, 12(29)
  00f36bc  stfs 1, 124(1)
  00f36c0  lfs 19, 0(4)
  00f36c4  lfs 20, 4(6)
  00f36c8  addic 4, 30, 32
  00f36cc  lfs 21, 8(6)
  00f36d0  lfs 22, 0(7)
  00f36d4  lfs 23, 4(5)
  00f36d8  lfs 24, 8(5)
  00f36dc  lfs 1, 0(3)
  00f36e0  addic 5, 30, 32
  00f36e4  lis 3, 15
  00f36e8  stfs 1, 128(1)
  00f36ec  lfs 1, 4(8)
  00f36f0  addi 6, 3, 13828
  00f36f4  addic 3, 1, 144
  00f36f8  stfs 1, 132(1)
  00f36fc  lfs 1, 8(8)
  00f3700  stfs 1, 136(1)
  00f3704  lfs 1, 12(8)
  00f3708  stfs 1, 140(1)
  00f370c  lfs 25, 0(4)
  00f3710  lfs 26, 4(5)
  00f3714  lfs 27, 8(5)
  00f3718  addic 4, 30, 48
  00f371c  lfs 1, 0(6)
  00f3720  bl 0x5023bc
  00f3724  nop
  00f3728  lbz 3, 3(30)
  00f372c  cmpwi 3, 0
  00f3730  bt 2, 0xf39e4
  00f3734  lfs 1, 128(1)
  00f3738  lfs 2, 112(1)
  00f373c  lfs 3, 132(1)
  00f3740  lfs 4, 116(1)
  00f3744  fmuls 1, 1, 2
  00f3748  lis 3, 15
  00f374c  fmuls 2, 3, 4
  00f3750  lfs 3, 136(1)
  00f3754  lfs 4, 120(1)
  00f3758  addi 3, 3, 13828
  00f375c  fmuls 3, 3, 4
  00f3760  lfs 4, 140(1)
  00f3764  lfs 5, 124(1)
  00f3768  lfs 28, 12(30)
  00f376c  fmuls 4, 4, 5
  00f3770  lfs 29, 4(3)
  00f3774  lfs 31, 8(3)
  00f3778  fadds 1, 1, 2
  00f377c  fsubs 30, 29, 28
  00f3780  fadds 1, 1, 3
  00f3784  fadds 1, 1, 4
  00f3788  fcmpu 0, 1, 31
  00f378c  cror 6, 1, 2
  00f3790  bt 6, 0xf3854
  00f3794  lis 3, 15
  00f3798  addic 28, 1, 208
  00f379c  addi 5, 3, 13828
  00f37a0  addic 4, 1, 112
  00f37a4  ori 3, 28, 0
  00f37a8  lfs 1, 12(5)
  00f37ac  bl 0x5023bc
  00f37b0  nop
  00f37b4  fmr 1, 28
  00f37b8  addic 3, 1, 240
  00f37bc  addic 4, 1, 128
  00f37c0  bl 0x5023bc
  00f37c4  nop
  00f37c8  lfs 1, 240(1)
  00f37cc  lfs 2, 244(1)
  00f37d0  addic 3, 1, 256
  00f37d4  stfs 1, 176(1)
  00f37d8  ori 4, 28, 0
  00f37dc  lfs 3, 248(1)
  00f37e0  fmr 1, 30
  00f37e4  stfs 2, 180(1)
  00f37e8  lfs 2, 252(1)
  00f37ec  stfs 3, 184(1)
  00f37f0  stfs 2, 188(1)
  00f37f4  bl 0x5023bc
  00f37f8  nop
  00f37fc  lfs 1, 256(1)
  00f3800  addic 5, 1, 192
  00f3804  lfs 2, 260(1)
  00f3808  addic 3, 1, 224
  00f380c  stfs 1, 192(1)
  00f3810  addic 4, 1, 176
  00f3814  lfs 1, 264(1)
  00f3818  stfs 2, 196(1)
  00f381c  lfs 2, 268(1)
  00f3820  stfs 1, 200(1)
  00f3824  stfs 2, 204(1)
  00f3828  bl 0x5023f0
  00f382c  nop
  00f3830  lfs 1, 224(1)
  00f3834  lfs 2, 228(1)
  00f3838  stfs 1, 160(1)
  00f383c  lfs 1, 232(1)
  00f3840  stfs 2, 164(1)
  00f3844  lfs 2, 236(1)
  00f3848  stfs 1, 168(1)
  00f384c  stfs 2, 172(1)
  00f3850  b 0xf38f0
  00f3854  fmr 1, 28
  00f3858  addic 3, 1, 320
  00f385c  addic 4, 1, 128
  00f3860  bl 0x5023bc
  00f3864  nop
  00f3868  lfs 1, 320(1)
  00f386c  lfs 2, 324(1)
  00f3870  addic 3, 1, 336
  00f3874  stfs 1, 272(1)
  00f3878  addic 4, 1, 112
  00f387c  lfs 3, 328(1)
  00f3880  fmr 1, 30
  00f3884  stfs 2, 276(1)
  00f3888  lfs 2, 332(1)
  00f388c  stfs 3, 280(1)
  00f3890  stfs 2, 284(1)
  00f3894  bl 0x5023bc
  00f3898  nop
  00f389c  lfs 1, 336(1)
  00f38a0  addic 5, 1, 288
  00f38a4  lfs 2, 340(1)
  00f38a8  addic 3, 1, 304
  00f38ac  stfs 1, 288(1)
  00f38b0  addic 4, 1, 272
  00f38b4  lfs 1, 344(1)
  00f38b8  stfs 2, 292(1)
  00f38bc  lfs 2, 348(1)
  00f38c0  stfs 1, 296(1)
  00f38c4  stfs 2, 300(1)
  00f38c8  bl 0x5023f0
  00f38cc  nop
  00f38d0  lfs 1, 304(1)
  00f38d4  lfs 2, 308(1)
  00f38d8  stfs 1, 160(1)
  00f38dc  lfs 1, 312(1)
  00f38e0  stfs 2, 164(1)
  00f38e4  lfs 2, 316(1)
  00f38e8  stfs 1, 168(1)
  00f38ec  stfs 2, 172(1)
  00f38f0  lfs 5, 160(1)
  00f38f4  lfs 4, 164(1)
  00f38f8  fmuls 1, 5, 5
  00f38fc  fmuls 6, 4, 4
  00f3900  lfs 3, 168(1)
  00f3904  lfs 2, 172(1)
  00f3908  fmuls 7, 3, 3
  00f390c  fmuls 8, 2, 2
  00f3910  fadds 1, 1, 6
  00f3914  fadds 1, 1, 7
  00f3918  fadds 1, 1, 8
  00f391c  fcmpu 0, 1, 31
  00f3920  cror 6, 0, 2
  00f3924  bt 6, 0xf3964
  00f3928  fsqrts 1, 1
  00f392c  addic 3, 1, 352
  00f3930  addic 4, 1, 160
  00f3934  fdivs 1, 29, 1
  00f3938  bl 0x5023bc
  00f393c  nop
  00f3940  lfs 1, 352(1)
  00f3944  stfs 1, 0(29)
  00f3948  lfs 1, 356(1)
  00f394c  stfs 1, 4(29)
  00f3950  lfs 1, 360(1)
  00f3954  stfs 1, 8(29)
  00f3958  lfs 1, 364(1)
  00f395c  stfs 1, 12(29)
  00f3960  b 0xf3974
  00f3964  stfs 5, 0(29)
  00f3968  stfs 4, 4(29)
  00f396c  stfs 3, 8(29)
  00f3970  stfs 2, 12(29)
  00f3974  fmuls 1, 28, 25
  00f3978  fmuls 2, 30, 19
  00f397c  fmuls 3, 28, 26
  00f3980  fmuls 4, 30, 20
  00f3984  fmuls 5, 28, 27
  00f3988  fmuls 6, 30, 21
  00f398c  fmuls 7, 30, 22
  00f3990  fadds 1, 1, 2
  00f3994  fadds 2, 3, 4
  00f3998  fadds 3, 5, 6
  00f399c  fmuls 4, 30, 23
  00f39a0  stfs 1, 16(29)
  00f39a4  stfs 2, 20(29)
  00f39a8  stfs 3, 24(29)
  00f39ac  lfs 1, 144(1)
  00f39b0  fmuls 2, 30, 24
  00f39b4  fmuls 1, 1, 28
  00f39b8  fadds 1, 1, 7
  00f39bc  stfs 1, 32(29)
  00f39c0  lfs 1, 148(1)
  00f39c4  fmuls 1, 1, 28
  00f39c8  fadds 1, 1, 4
  00f39cc  stfs 1, 36(29)
  00f39d0  lfs 1, 152(1)
  00f39d4  fmuls 1, 1, 28
  00f39d8  fadds 1, 1, 2
  00f39dc  stfs 1, 40(29)
  00f39e0  b 0xf3ac0
  00f39e4  fmuls 1, 19, 25
  00f39e8  fmuls 2, 20, 26
  00f39ec  fmuls 3, 21, 27
  00f39f0  stfs 1, 16(29)
  00f39f4  stfs 2, 20(29)
  00f39f8  stfs 3, 24(29)
  00f39fc  lfs 1, 144(1)
  00f3a00  fadds 1, 22, 1
  00f3a04  stfs 1, 32(29)
  00f3a08  lfs 1, 148(1)
  00f3a0c  fadds 1, 23, 1
  00f3a10  stfs 1, 36(29)
  00f3a14  lfs 1, 152(1)
  00f3a18  fadds 1, 24, 1
  00f3a1c  stfs 1, 40(29)
  00f3a20  lfs 1, 112(1)
  00f3a24  lfs 2, 128(1)
  00f3a28  lfs 3, 116(1)
  00f3a2c  lfs 4, 132(1)
  00f3a30  fmuls 5, 1, 2
  00f3a34  lfs 6, 124(1)
  00f3a38  fmuls 7, 3, 4
  00f3a3c  lfs 8, 140(1)
  00f3a40  fmuls 9, 2, 6
  00f3a44  lfs 10, 120(1)
  00f3a48  fmuls 11, 4, 6
  00f3a4c  lfs 12, 136(1)
  00f3a50  fmuls 13, 6, 8
  00f3a54  fmuls 0, 1, 8
  00f3a58  fmuls 31, 10, 12
  00f3a5c  fmuls 30, 3, 8
  00f3a60  fmuls 6, 12, 6
  00f3a64  fmuls 8, 10, 8
  00f3a68  fmuls 29, 3, 12
  00f3a6c  fadds 5, 5, 7
  00f3a70  fmuls 7, 4, 10
  00f3a74  fmuls 12, 12, 1
  00f3a78  fmuls 10, 10, 2
  00f3a7c  fmuls 2, 2, 3
  00f3a80  fmuls 1, 1, 4
  00f3a84  fadds 3, 0, 9
  00f3a88  fadds 4, 30, 11
  00f3a8c  fadds 6, 8, 6
  00f3a90  fadds 5, 5, 31
  00f3a94  fsubs 7, 7, 29
  00f3a98  fsubs 9, 12, 10
  00f3a9c  fsubs 1, 2, 1
  00f3aa0  fsubs 2, 13, 5
  00f3aa4  fadds 3, 3, 7
  00f3aa8  fadds 4, 4, 9
  00f3aac  fadds 1, 6, 1
  00f3ab0  stfs 2, 12(29)
  00f3ab4  stfs 3, 0(29)
  00f3ab8  stfs 4, 4(29)
  00f3abc  stfs 1, 8(29)
  00f3ac0  lwz 30, 8(30)
  00f3ac4  cmpwi 30, 0
  00f3ac8  bf 2, 0xf3678
  00f3acc  ld 0, 528(1)
  00f3ad0  mtlr 0
  00f3ad4  lfd 19, 408(1)
  00f3ad8  lfd 20, 416(1)
  00f3adc  lfd 21, 424(1)
  00f3ae0  lfd 22, 432(1)
  00f3ae4  lfd 23, 440(1)
  00f3ae8  lfd 24, 448(1)
  00f3aec  lfd 25, 456(1)
  00f3af0  lfd 26, 464(1)
  00f3af4  lfd 27, 472(1)
  00f3af8  lfd 28, 480(1)
  00f3afc  lfd 29, 488(1)
  00f3b00  lfd 30, 496(1)
  00f3b04  lfd 31, 504(1)
  00f3b08  ld 28, 376(1)
  00f3b0c  ld 29, 384(1)
  00f3b10  ld 30, 392(1)
  00f3b14  ld 31, 400(1)
  00f3b18  addi 1, 1, 512
  00f3b1c  blr

ProcessAnimLayers:   # 0xf3b30, 0x464 bytes
  00f3b30  stdu 1, -560(1)
  00f3b34  mflr 0
  00f3b38  std 0, 576(1)
  00f3b3c  stfd 16, 432(1)
  00f3b40  stfd 17, 440(1)
  00f3b44  stfd 18, 448(1)
  00f3b48  stfd 19, 456(1)
  00f3b4c  stfd 20, 464(1)
  00f3b50  stfd 21, 472(1)
  00f3b54  stfd 22, 480(1)
  00f3b58  stfd 23, 488(1)
  00f3b5c  stfd 24, 496(1)
  00f3b60  stfd 25, 504(1)
  00f3b64  stfd 26, 512(1)
  00f3b68  stfd 27, 520(1)
  00f3b6c  stfd 28, 528(1)
  00f3b70  stfd 29, 536(1)
  00f3b74  stfd 30, 544(1)
  00f3b78  stfd 31, 552(1)
  00f3b7c  std 26, 384(1)
  00f3b80  std 25, 376(1)
  00f3b84  ori 26, 3, 0
  00f3b88  lis 25, 15
  00f3b8c  cmpwi 26, 0
  00f3b90  std 31, 424(1)
  00f3b94  addi 25, 25, 15136
  00f3b98  std 30, 416(1)
  00f3b9c  std 29, 408(1)
  00f3ba0  std 28, 400(1)
  00f3ba4  std 27, 392(1)
  00f3ba8  std 24, 368(1)
  00f3bac  ori 31, 4, 0
  00f3bb0  bt 2, 0xf3f24
  00f3bb4  lwz 3, 8(26)
  00f3bb8  li 28, 0
  00f3bbc  stw 3, 352(1)
  00f3bc0  lfs 30, 0(25)
  00f3bc4  lhz 30, 2(26)
  00f3bc8  lwz 29, 16(26)
  00f3bcc  extsh 30, 30
  00f3bd0  lfs 31, 352(1)
  00f3bd4  cmplw 30, 28
  00f3bd8  fsubs 29, 30, 31
  00f3bdc  bf 1, 0xf3f14
  00f3be0  lfs 1, 0(29)
  00f3be4  addic 3, 29, 44
  00f3be8  addic 5, 29, 16
  00f3bec  stfs 1, 112(1)
  00f3bf0  lfs 2, 4(29)
  00f3bf4  addic 7, 29, 16
  00f3bf8  addic 4, 29, 32
  00f3bfc  stfs 2, 116(1)
  00f3c00  lfs 3, 8(29)
  00f3c04  addic 6, 29, 32
  00f3c08  lwz 3, 0(3)
  00f3c0c  stfs 3, 120(1)
  00f3c10  lfs 4, 12(29)
  00f3c14  slwi 3, 3, 6
  00f3c18  stfs 4, 124(1)
  00f3c1c  addc 27, 31, 3
  00f3c20  lfs 28, 0(5)
  00f3c24  clrldi 27, 27, 32
  00f3c28  lfs 27, 4(7)
  00f3c2c  lfs 26, 8(7)
  00f3c30  lfs 25, 0(4)
  00f3c34  lfs 24, 4(6)
  00f3c38  lfs 23, 8(6)
  00f3c3c  lfs 5, 0(27)
  00f3c40  stfs 5, 128(1)
  00f3c44  fmuls 1, 1, 5
  00f3c48  lfs 6, 4(27)
  00f3c4c  addic 3, 27, 16
  00f3c50  fmuls 2, 2, 6
  00f3c54  stfs 6, 132(1)
  00f3c58  lfs 5, 8(27)
  00f3c5c  addic 4, 27, 16
  00f3c60  fmuls 3, 3, 5
  00f3c64  stfs 5, 136(1)
  00f3c68  lfs 5, 12(27)
  00f3c6c  addic 5, 27, 32
  00f3c70  addic 6, 27, 32
  00f3c74  fmuls 4, 4, 5
  00f3c78  stfs 5, 140(1)
  00f3c7c  lfs 16, 4(25)
  00f3c80  fadds 1, 1, 2
  00f3c84  lfs 22, 0(3)
  00f3c88  lfs 21, 4(4)
  00f3c8c  lfs 20, 8(4)
  00f3c90  lfs 19, 0(5)
  00f3c94  lfs 18, 4(6)
  00f3c98  lfs 17, 8(6)
  00f3c9c  fadds 1, 1, 3
  00f3ca0  fadds 1, 1, 4
  00f3ca4  fcmpu 0, 1, 16
  00f3ca8  cror 6, 1, 2
  00f3cac  bt 6, 0xf3d68
  00f3cb0  addic 24, 1, 192
  00f3cb4  lfs 1, 8(25)
  00f3cb8  addic 4, 1, 128
  00f3cbc  ori 3, 24, 0
  00f3cc0  bl 0x5023bc
  00f3cc4  nop
  00f3cc8  fmr 1, 31
  00f3ccc  addic 3, 1, 224
  00f3cd0  addic 4, 1, 112
  00f3cd4  bl 0x5023bc
  00f3cd8  nop
  00f3cdc  lfs 1, 224(1)
  00f3ce0  lfs 2, 228(1)
  00f3ce4  addic 3, 1, 240
  00f3ce8  stfs 1, 160(1)
  00f3cec  ori 4, 24, 0
  00f3cf0  lfs 3, 232(1)
  00f3cf4  fmr 1, 29
  00f3cf8  stfs 2, 164(1)
  00f3cfc  lfs 2, 236(1)
  00f3d00  stfs 3, 168(1)
  00f3d04  stfs 2, 172(1)
  00f3d08  bl 0x5023bc
  00f3d0c  nop
  00f3d10  lfs 1, 240(1)
  00f3d14  addic 5, 1, 176
  00f3d18  lfs 2, 244(1)
  00f3d1c  addic 3, 1, 208
  00f3d20  stfs 1, 176(1)
  00f3d24  addic 4, 1, 160
  00f3d28  lfs 1, 248(1)
  00f3d2c  stfs 2, 180(1)
  00f3d30  lfs 2, 252(1)
  00f3d34  stfs 1, 184(1)
  00f3d38  stfs 2, 188(1)
  00f3d3c  bl 0x5023f0
  00f3d40  nop
  00f3d44  lfs 1, 208(1)
  00f3d48  lfs 2, 212(1)
  00f3d4c  stfs 1, 144(1)
  00f3d50  lfs 1, 216(1)
  00f3d54  stfs 2, 148(1)
  00f3d58  lfs 2, 220(1)
  00f3d5c  stfs 1, 152(1)
  00f3d60  stfs 2, 156(1)
  00f3d64  b 0xf3e04
  00f3d68  fmr 1, 31
  00f3d6c  addic 3, 1, 304
  00f3d70  addic 4, 1, 112
  00f3d74  bl 0x5023bc
  00f3d78  nop
  00f3d7c  lfs 1, 304(1)
  00f3d80  lfs 2, 308(1)
  00f3d84  addic 3, 1, 320
  00f3d88  stfs 1, 256(1)
  00f3d8c  addic 4, 1, 128
  00f3d90  lfs 3, 312(1)
  00f3d94  fmr 1, 29
  00f3d98  stfs 2, 260(1)
  00f3d9c  lfs 2, 316(1)
  00f3da0  stfs 3, 264(1)
  00f3da4  stfs 2, 268(1)
  00f3da8  bl 0x5023bc
  00f3dac  nop
  00f3db0  lfs 1, 320(1)
  00f3db4  addic 5, 1, 272
  00f3db8  lfs 2, 324(1)
  00f3dbc  addic 3, 1, 288
  00f3dc0  stfs 1, 272(1)
  00f3dc4  addic 4, 1, 256
  00f3dc8  lfs 1, 328(1)
  00f3dcc  stfs 2, 276(1)
  00f3dd0  lfs 2, 332(1)
  00f3dd4  stfs 1, 280(1)
  00f3dd8  stfs 2, 284(1)
  00f3ddc  bl 0x5023f0
  00f3de0  nop
  00f3de4  lfs 1, 288(1)
  00f3de8  lfs 2, 292(1)
  00f3dec  stfs 1, 144(1)
  00f3df0  lfs 1, 296(1)
  00f3df4  stfs 2, 148(1)
  00f3df8  lfs 2, 300(1)
  00f3dfc  stfs 1, 152(1)
  00f3e00  stfs 2, 156(1)
  00f3e04  lfs 1, 144(1)
  00f3e08  lfs 2, 148(1)
  00f3e0c  fmuls 5, 1, 1
  00f3e10  fmuls 6, 2, 2
  00f3e14  lfs 3, 152(1)
  00f3e18  lfs 4, 156(1)
  00f3e1c  fmuls 7, 3, 3
  00f3e20  fmuls 8, 4, 4
  00f3e24  fadds 5, 5, 6
  00f3e28  fadds 5, 5, 7
  00f3e2c  fadds 5, 5, 8
  00f3e30  fcmpu 0, 5, 16
  00f3e34  cror 6, 0, 2
  00f3e38  bt 6, 0xf3e78
  00f3e3c  fsqrts 1, 5
  00f3e40  addic 3, 1, 336
  00f3e44  addic 4, 1, 144
  00f3e48  fdivs 1, 30, 1
  00f3e4c  bl 0x5023bc
  00f3e50  nop
  00f3e54  lfs 1, 336(1)
  00f3e58  stfs 1, 0(27)
  00f3e5c  lfs 1, 340(1)
  00f3e60  stfs 1, 4(27)
  00f3e64  lfs 1, 344(1)
  00f3e68  stfs 1, 8(27)
  00f3e6c  lfs 1, 348(1)
  00f3e70  stfs 1, 12(27)
  00f3e74  b 0xf3e88
  00f3e78  stfs 1, 0(27)
  00f3e7c  stfs 2, 4(27)
  00f3e80  stfs 3, 8(27)
  00f3e84  stfs 4, 12(27)
  00f3e88  fmuls 1, 28, 31
  00f3e8c  fmuls 2, 29, 22
  00f3e90  fmuls 3, 27, 31
  00f3e94  fmuls 4, 29, 21
  00f3e98  fmuls 5, 26, 31
  00f3e9c  fmuls 6, 29, 20
  00f3ea0  fmuls 7, 25, 31
  00f3ea4  fmuls 8, 29, 19
  00f3ea8  fmuls 9, 24, 31
  00f3eac  fmuls 10, 29, 18
  00f3eb0  fmuls 11, 23, 31
  00f3eb4  fadds 1, 1, 2
  00f3eb8  fmuls 2, 29, 17
  00f3ebc  fadds 3, 3, 4
  00f3ec0  fadds 4, 5, 6
  00f3ec4  fadds 5, 7, 8
  00f3ec8  fadds 6, 9, 10
  00f3ecc  fadds 2, 11, 2
  00f3ed0  stfs 1, 16(27)
  00f3ed4  stfs 3, 20(27)
  00f3ed8  stfs 4, 24(27)
  00f3edc  stfs 5, 32(27)
  00f3ee0  stfs 6, 36(27)
  00f3ee4  stfs 2, 40(27)
  00f3ee8  addic 27, 27, 28
  00f3eec  lwz 3, 0(27)
  00f3ef0  cmpwi 3, 0
  00f3ef4  bt 2, 0xf3f04
  00f3ef8  addic 3, 29, 28
  00f3efc  lwz 3, 0(3)
  00f3f00  stw 3, 0(27)
  00f3f04  addic 28, 28, 1
  00f3f08  addic 29, 29, 48
  00f3f0c  cmplw 28, 30
  00f3f10  bt 0, 0xf3be0
  00f3f14  lwz 3, 28(26)
  00f3f18  ori 26, 3, 0
  00f3f1c  cmpwi 26, 0
  00f3f20  bf 2, 0xf3bb4
  00f3f24  ld 0, 576(1)
  00f3f28  mtlr 0
  00f3f2c  lfd 16, 432(1)
  00f3f30  lfd 17, 440(1)
  00f3f34  lfd 18, 448(1)
  00f3f38  lfd 19, 456(1)
  00f3f3c  lfd 20, 464(1)
  00f3f40  lfd 21, 472(1)
  00f3f44  lfd 22, 480(1)
  00f3f48  lfd 23, 488(1)
  00f3f4c  lfd 24, 496(1)
  00f3f50  lfd 25, 504(1)
  00f3f54  lfd 26, 512(1)
  00f3f58  lfd 27, 520(1)
  00f3f5c  lfd 28, 528(1)
  00f3f60  lfd 29, 536(1)
  00f3f64  lfd 30, 544(1)
  00f3f68  lfd 31, 552(1)
  00f3f6c  ld 24, 368(1)
  00f3f70  ld 25, 376(1)
  00f3f74  ld 26, 384(1)
  00f3f78  ld 27, 392(1)
  00f3f7c  ld 28, 400(1)
  00f3f80  ld 29, 408(1)
  00f3f84  ld 30, 416(1)
  00f3f88  ld 31, 424(1)
  00f3f8c  addi 1, 1, 560
  00f3f90  blr

MB_BlendJointFrames:   # 0xf3fe0, 0x1844 bytes
  00f3fe0  stdu 1, -4640(1)
  00f3fe4  mflr 0
  00f3fe8  std 0, 4656(1)
  00f3fec  stfd 28, 4608(1)
  00f3ff0  stfd 29, 4616(1)
  00f3ff4  stfd 30, 4624(1)
  00f3ff8  stfd 31, 4632(1)
  00f3ffc  std 29, 4584(1)
  00f4000  std 31, 4600(1)
  00f4004  ori 31, 3, 0
  00f4008  std 30, 4592(1)
  00f400c  lis 29, 15
  00f4010  lis 30, 165
  00f4014  cmpwi 31, 0
  00f4018  addi 29, 29, 16288
  00f401c  addic 3, 1, 352
  00f4020  std 28, 4576(1)
  00f4024  std 27, 4568(1)
  00f4028  std 26, 4560(1)
  00f402c  std 25, 4552(1)
  00f4030  std 24, 4544(1)
  00f4034  std 23, 4536(1)
  00f4038  std 22, 4528(1)
  00f403c  std 21, 4520(1)
  00f4040  std 20, 4512(1)
  00f4044  addic 30, 30, -1152
  00f4048  bt 2, 0xf57d0
  00f404c  lfs 31, 0(29)
  00f4050  li 0, 4480
  00f4054  fsubs 30, 31, 1
  00f4058  fmr 29, 1
  00f405c  li 4, 0
  00f4060  ori 11, 5, 0
  00f4064  ori 10, 4, 0
  00f4068  ori 5, 10, 0
  00f406c  stfs 30, 4480(1)
  00f4070  stfs 30, 4484(1)
  00f4074  stfs 30, 4488(1)
  00f4078  stfs 30, 4492(1)
  00f407c  lvx 2, 1, 0
  00f4080  vspltw 2, 2, 0
  00f4084  vspltw 2, 2, 0
  00f4088  vspltw 2, 2, 0
  00f408c  vspltw 2, 2, 0
  00f4090  vspltw 2, 2, 0
  00f4094  vspltw 2, 2, 0
  00f4098  vspltw 2, 2, 0
  00f409c  vspltw 2, 2, 0
  00f40a0  vspltw 2, 2, 0
  00f40a4  ori 8, 5, 0
  00f40a8  vspltw 2, 2, 0
  00f40ac  ori 9, 8, 0
  00f40b0  vspltw 2, 2, 0
  00f40b4  ori 12, 9, 0
  00f40b8  vspltw 2, 2, 0
  00f40bc  cmplw 31, 12
  00f40c0  vspltw 2, 2, 0
  00f40c4  vspltw 2, 2, 0
  00f40c8  vspltw 2, 2, 0
  00f40cc  vspltw 2, 2, 0
  00f40d0  lvlx 5, 0, 29
  00f40d4  vspltw 2, 2, 0
  00f40d8  li 0, 4480
  00f40dc  stfs 29, 4480(1)
  00f40e0  vspltw 2, 2, 0
  00f40e4  stfs 29, 4484(1)
  00f40e8  vspltw 2, 2, 0
  00f40ec  stfs 29, 4488(1)
  00f40f0  vspltw 2, 2, 0
  00f40f4  stfs 29, 4492(1)
  00f40f8  vspltw 2, 2, 0
  00f40fc  vspltw 5, 5, 0
  00f4100  vspltw 2, 2, 0
  00f4104  lvx 4, 1, 0
  00f4108  vspltw 2, 2, 0
  00f410c  vspltw 2, 2, 0
  00f4110  vspltw 2, 2, 0
  00f4114  vspltw 2, 2, 0
  00f4118  vspltw 2, 2, 0
  00f411c  vspltw 2, 2, 0
  00f4120  vspltw 2, 2, 0
  00f4124  vspltw 2, 2, 0
  00f4128  vspltw 2, 2, 0
  00f412c  vspltw 2, 2, 0
  00f4130  vspltw 2, 2, 0
  00f4134  vspltw 2, 2, 0
  00f4138  vspltw 2, 2, 0
  00f413c  vspltw 2, 2, 0
  00f4140  vspltw 2, 2, 0
  00f4144  vspltw 3, 2, 0
  00f4148  vspltisw 2, 0
  00f414c  vspltw 3, 3, 0
  00f4150  vspltw 3, 3, 0
  00f4154  bf 1, 0xf41ec
  00f4158  ori 28, 4, 0
  00f415c  ori 25, 1, 0
  00f4160  ori 27, 28, 0
  00f4164  ori 26, 27, 0
  00f4168  ori 24, 26, 0
  00f416c  li 23, 16
  00f4170  addic 22, 26, 1
  00f4174  stvx 5, 28, 30
  00f4178  addic 20, 26, 2
  00f417c  slwi 22, 22, 4
  00f4180  li 21, 32
  00f4184  lvx 6, 23, 29
  00f4188  slwi 23, 20, 4
  00f418c  addic 20, 24, 1
  00f4190  stvx 6, 22, 30
  00f4194  addic 12, 12, 1
  00f4198  lvx 6, 27, 11
  00f419c  addic 22, 26, 3
  00f41a0  slwi 20, 20, 4
  00f41a4  stvx 6, 23, 30
  00f41a8  slwi 23, 22, 4
  00f41ac  lvx 7, 21, 29
  00f41b0  addc 22, 1, 20
  00f41b4  addic 21, 25, 352
  00f41b8  vsel 6, 6, 2, 7
  00f41bc  clrldi 22, 22, 32
  00f41c0  cmplw 12, 31
  00f41c4  addic 22, 22, 352
  00f41c8  addic 28, 28, 64
  00f41cc  stvx 5, 0, 21
  00f41d0  addic 27, 27, 16
  00f41d4  stvx 6, 23, 30
  00f41d8  addic 26, 26, 4
  00f41dc  stvx 5, 0, 22
  00f41e0  addic 25, 25, 32
  00f41e4  addic 24, 24, 2
  00f41e8  bt 0, 0xf416c
  00f41ec  lhz 28, 8(6)
  00f41f0  ori 12, 4, 0
  00f41f4  lhz 27, 10(6)
  00f41f8  addc 28, 6, 28
  00f41fc  cmplw 27, 12
  00f4200  clrldi 25, 28, 32
  00f4204  ori 11, 12, 0
  00f4208  addic 25, 25, 16
  00f420c  bf 1, 0xf4534
  00f4210  lhz 28, 0(25)
  00f4214  slwi 28, 28, 3
  00f4218  extsw 28, 28
  00f421c  li 0, 4480
  00f4220  std 28, 4496(1)
  00f4224  lfs 1, 48(29)
  00f4228  lhz 28, 2(25)
  00f422c  lhz 27, 4(25)
  00f4230  slwi 28, 28, 3
  00f4234  lfd 2, 4496(1)
  00f4238  extsw 28, 28
  00f423c  fcfid 2, 2
  00f4240  std 28, 4496(1)
  00f4244  slwi 28, 27, 3
  00f4248  extsw 28, 28
  00f424c  frsp 2, 2
  00f4250  cmpwi 1, 8, 0
  00f4254  cmpwi 6, 11, 0
  00f4258  fmuls 2, 2, 1
  00f425c  lfd 3, 4496(1)
  00f4260  fcfid 3, 3
  00f4264  stfs 2, 4480(1)
  00f4268  stfs 2, 4484(1)
  00f426c  stfs 2, 4488(1)
  00f4270  stfs 2, 4492(1)
  00f4274  std 28, 4496(1)
  00f4278  frsp 2, 3
  00f427c  lvx 5, 1, 0
  00f4280  li 0, 4480
  00f4284  vspltw 5, 5, 0
  00f4288  vspltw 5, 5, 0
  00f428c  fmuls 2, 2, 1
  00f4290  vspltw 5, 5, 0
  00f4294  vspltw 5, 5, 0
  00f4298  vspltw 5, 5, 0
  00f429c  stfs 2, 4480(1)
  00f42a0  stfs 2, 4484(1)
  00f42a4  lfd 3, 4496(1)
  00f42a8  stfs 2, 4488(1)
  00f42ac  fcfid 3, 3
  00f42b0  stfs 2, 4492(1)
  00f42b4  lvx 6, 1, 0
  00f42b8  li 0, 4480
  00f42bc  vspltw 5, 5, 0
  00f42c0  vspltw 6, 6, 0
  00f42c4  vspltw 5, 5, 0
  00f42c8  vspltw 6, 6, 0
  00f42cc  frsp 2, 3
  00f42d0  vspltw 5, 5, 0
  00f42d4  vspltw 6, 6, 0
  00f42d8  vspltw 5, 5, 0
  00f42dc  vspltw 6, 6, 0
  00f42e0  fmuls 1, 2, 1
  00f42e4  vspltw 6, 6, 0
  00f42e8  vspltw 5, 5, 0
  00f42ec  vspltw 6, 6, 0
  00f42f0  vspltw 5, 5, 0
  00f42f4  vspltw 6, 6, 0
  00f42f8  vspltw 5, 5, 0
  00f42fc  stfs 1, 4480(1)
  00f4300  stfs 1, 4484(1)
  00f4304  stfs 1, 4488(1)
  00f4308  stfs 1, 4492(1)
  00f430c  lvx 7, 1, 0
  00f4310  vspltw 6, 6, 0
  00f4314  vspltw 7, 7, 0
  00f4318  vspltw 5, 5, 0
  00f431c  vspltw 6, 6, 0
  00f4320  vspltw 7, 7, 0
  00f4324  vspltw 5, 5, 0
  00f4328  vspltw 6, 6, 0
  00f432c  vspltw 7, 7, 0
  00f4330  vspltw 5, 5, 0
  00f4334  vspltw 6, 6, 0
  00f4338  vspltw 7, 7, 0
  00f433c  vspltw 5, 5, 0
  00f4340  vspltw 6, 6, 0
  00f4344  vspltw 7, 7, 0
  00f4348  vspltw 5, 5, 0
  00f434c  vspltw 6, 6, 0
  00f4350  vspltw 7, 7, 0
  00f4354  vspltw 5, 5, 0
  00f4358  vspltw 6, 6, 0
  00f435c  vspltw 7, 7, 0
  00f4360  vspltw 5, 5, 0
  00f4364  vspltw 6, 6, 0
  00f4368  vspltw 7, 7, 0
  00f436c  vspltw 5, 5, 0
  00f4370  vspltw 6, 6, 0
  00f4374  vspltw 7, 7, 0
  00f4378  vspltw 5, 5, 0
  00f437c  vspltw 6, 6, 0
  00f4380  vspltw 7, 7, 0
  00f4384  vspltw 5, 5, 0
  00f4388  vspltw 6, 6, 0
  00f438c  vspltw 7, 7, 0
  00f4390  vspltw 5, 5, 0
  00f4394  vspltw 6, 6, 0
  00f4398  vspltw 7, 7, 0
  00f439c  vspltw 5, 5, 0
  00f43a0  vspltw 6, 6, 0
  00f43a4  vspltw 7, 7, 0
  00f43a8  vspltw 5, 5, 0
  00f43ac  vspltw 6, 6, 0
  00f43b0  vspltw 7, 7, 0
  00f43b4  vspltw 5, 5, 0
  00f43b8  vspltw 6, 6, 0
  00f43bc  vspltw 7, 7, 0
  00f43c0  vspltw 5, 5, 0
  00f43c4  vspltw 6, 6, 0
  00f43c8  vspltw 7, 7, 0
  00f43cc  vspltw 5, 5, 0
  00f43d0  vspltw 6, 6, 0
  00f43d4  vspltw 7, 7, 0
  00f43d8  vspltw 5, 5, 0
  00f43dc  vspltw 6, 6, 0
  00f43e0  vspltw 7, 7, 0
  00f43e4  vspltw 5, 5, 0
  00f43e8  vspltw 6, 6, 0
  00f43ec  vspltw 7, 7, 0
  00f43f0  vspltw 5, 5, 0
  00f43f4  lbz 28, 6(25)
  00f43f8  vspltw 6, 6, 0
  00f43fc  vspltw 7, 7, 0
  00f4400  vspltw 5, 5, 0
  00f4404  slwi 27, 28, 6
  00f4408  lbz 26, 7(25)
  00f440c  vspltw 6, 6, 0
  00f4410  vspltw 7, 7, 0
  00f4414  extsb 26, 26
  00f4418  vspltw 5, 5, 0
  00f441c  addc 27, 30, 27
  00f4420  cmpwi 26, 0
  00f4424  vspltw 6, 6, 0
  00f4428  vspltw 7, 7, 0
  00f442c  clrldi 27, 27, 32
  00f4430  vspltw 5, 5, 0
  00f4434  vspltw 6, 6, 0
  00f4438  vspltw 7, 7, 0
  00f443c  vspltw 5, 5, 0
  00f4440  vspltw 6, 6, 0
  00f4444  vspltw 7, 7, 0
  00f4448  vspltw 6, 6, 0
  00f444c  vspltw 7, 7, 0
  00f4450  vspltw 6, 6, 0
  00f4454  vspltw 7, 7, 0
  00f4458  vspltw 6, 6, 0
  00f445c  vspltw 7, 7, 0
  00f4460  vspltw 6, 6, 0
  00f4464  vspltw 7, 7, 0
  00f4468  vspltw 7, 7, 0
  00f446c  vspltw 7, 7, 0
  00f4470  vspltw 7, 7, 0
  00f4474  vspltw 7, 7, 0
  00f4478  vspltw 7, 7, 0
  00f447c  vspltw 7, 7, 0
  00f4480  vspltw 7, 7, 0
  00f4484  bf 0, 0xf44c8
  00f4488  bf 6, 0xf4494
  00f448c  ori 8, 27, 0
  00f4490  b 0xf4498
  00f4494  stw 27, 12(5)
  00f4498  vspltw 5, 5, 0
  00f449c  ori 5, 27, 0
  00f44a0  vspltw 6, 6, 0
  00f44a4  li 28, 4
  00f44a8  vspltw 7, 7, 0
  00f44ac  li 27, 8
  00f44b0  li 26, 1
  00f44b4  stvewx 5, 0, 5
  00f44b8  stvewx 6, 28, 5
  00f44bc  stvewx 7, 27, 5
  00f44c0  stw 26, 28(5)
  00f44c4  b 0xf4520
  00f44c8  slwi 27, 28, 5
  00f44cc  rlwinm 28, 28, 5, 19, 26
  00f44d0  addc 26, 3, 27
  00f44d4  addc 27, 3, 28
  00f44d8  clrldi 26, 26, 32
  00f44dc  bf 26, 0xf44e8
  00f44e0  ori 11, 27, 0
  00f44e4  b 0xf44ec
  00f44e8  stw 27, 12(4)
  00f44ec  vspltw 5, 5, 0
  00f44f0  addic 4, 3, 4
  00f44f4  vspltw 6, 6, 0
  00f44f8  addic 27, 3, 8
  00f44fc  vspltw 7, 7, 0
  00f4500  addc 4, 4, 28
  00f4504  addc 27, 27, 28
  00f4508  clrldi 24, 4, 32
  00f450c  stvewx 5, 28, 3
  00f4510  clrldi 28, 27, 32
  00f4514  ori 4, 26, 0
  00f4518  stvewx 6, 0, 24
  00f451c  stvewx 7, 0, 28
  00f4520  addic 12, 12, 1
  00f4524  lhz 28, 10(6)
  00f4528  addic 25, 25, 8
  00f452c  cmplw 12, 28
  00f4530  bt 0, 0xf4210
  00f4534  lhz 27, 12(6)
  00f4538  ori 28, 10, 0
  00f453c  lhz 26, 14(6)
  00f4540  addc 27, 6, 27
  00f4544  cmplw 26, 28
  00f4548  clrldi 26, 27, 32
  00f454c  ori 12, 28, 0
  00f4550  addic 26, 26, 16
  00f4554  bf 1, 0xf4814
  00f4558  lhz 27, 0(26)
  00f455c  extsh 27, 27
  00f4560  extsw 27, 27
  00f4564  li 0, 4480
  00f4568  std 27, 4496(1)
  00f456c  lfs 1, 52(29)
  00f4570  lhz 27, 2(26)
  00f4574  lhz 25, 4(26)
  00f4578  extsh 27, 27
  00f457c  lfd 2, 4496(1)
  00f4580  extsw 27, 27
  00f4584  fcfid 2, 2
  00f4588  std 27, 4496(1)
  00f458c  extsh 27, 25
  00f4590  extsw 27, 27
  00f4594  frsp 2, 2
  00f4598  cmpwi 9, 0
  00f459c  fmuls 2, 2, 1
  00f45a0  lfd 3, 4496(1)
  00f45a4  fcfid 3, 3
  00f45a8  stfs 2, 4480(1)
  00f45ac  stfs 2, 4484(1)
  00f45b0  stfs 2, 4488(1)
  00f45b4  stfs 2, 4492(1)
  00f45b8  std 27, 4496(1)
  00f45bc  frsp 2, 3
  00f45c0  lvx 5, 1, 0
  00f45c4  li 0, 4480
  00f45c8  vspltw 5, 5, 0
  00f45cc  vspltw 5, 5, 0
  00f45d0  fmuls 2, 2, 1
  00f45d4  vspltw 5, 5, 0
  00f45d8  vspltw 5, 5, 0
  00f45dc  vspltw 5, 5, 0
  00f45e0  stfs 2, 4480(1)
  00f45e4  stfs 2, 4484(1)
  00f45e8  lfd 3, 4496(1)
  00f45ec  stfs 2, 4488(1)
  00f45f0  fcfid 3, 3
  00f45f4  stfs 2, 4492(1)
  00f45f8  lvx 6, 1, 0
  00f45fc  li 0, 4480
  00f4600  vspltw 6, 6, 0
  00f4604  vspltw 5, 5, 0
  00f4608  vspltw 6, 6, 0
  00f460c  vspltw 5, 5, 0
  00f4610  frsp 2, 3
  00f4614  vspltw 6, 6, 0
  00f4618  vspltw 5, 5, 0
  00f461c  vspltw 6, 6, 0
  00f4620  vspltw 5, 5, 0
  00f4624  fmuls 1, 2, 1
  00f4628  vspltw 6, 6, 0
  00f462c  vspltw 5, 5, 0
  00f4630  vspltw 6, 6, 0
  00f4634  vspltw 5, 5, 0
  00f4638  vspltw 6, 6, 0
  00f463c  vspltw 5, 5, 0
  00f4640  stfs 1, 4480(1)
  00f4644  stfs 1, 4484(1)
  00f4648  stfs 1, 4488(1)
  00f464c  stfs 1, 4492(1)
  00f4650  lvx 7, 1, 0
  00f4654  vspltw 6, 6, 0
  00f4658  vspltw 7, 7, 0
  00f465c  vspltw 5, 5, 0
  00f4660  vspltw 6, 6, 0
  00f4664  vspltw 7, 7, 0
  00f4668  vspltw 5, 5, 0
  00f466c  vspltw 6, 6, 0
  00f4670  vspltw 7, 7, 0
  00f4674  vspltw 5, 5, 0
  00f4678  vspltw 6, 6, 0
  00f467c  vspltw 7, 7, 0
  00f4680  vspltw 5, 5, 0
  00f4684  vspltw 6, 6, 0
  00f4688  vspltw 7, 7, 0
  00f468c  vspltw 5, 5, 0
  00f4690  vspltw 6, 6, 0
  00f4694  vspltw 7, 7, 0
  00f4698  vspltw 5, 5, 0
  00f469c  vspltw 6, 6, 0
  00f46a0  vspltw 7, 7, 0
  00f46a4  vspltw 5, 5, 0
  00f46a8  vspltw 6, 6, 0
  00f46ac  vspltw 7, 7, 0
  00f46b0  vspltw 5, 5, 0
  00f46b4  vspltw 6, 6, 0
  00f46b8  vspltw 7, 7, 0
  00f46bc  vspltw 5, 5, 0
  00f46c0  vspltw 6, 6, 0
  00f46c4  vspltw 7, 7, 0
  00f46c8  vspltw 5, 5, 0
  00f46cc  vspltw 6, 6, 0
  00f46d0  vspltw 7, 7, 0
  00f46d4  vspltw 5, 5, 0
  00f46d8  vspltw 6, 6, 0
  00f46dc  vspltw 7, 7, 0
  00f46e0  vspltw 5, 5, 0
  00f46e4  li 25, 32
  00f46e8  vspltw 6, 6, 0
  00f46ec  vspltw 7, 7, 0
  00f46f0  vspltw 5, 5, 0
  00f46f4  vspltw 6, 6, 0
  00f46f8  vspltw 7, 7, 0
  00f46fc  vspltw 5, 5, 0
  00f4700  vspltw 6, 6, 0
  00f4704  vspltw 7, 7, 0
  00f4708  vspltw 5, 5, 0
  00f470c  li 24, 36
  00f4710  vspltw 6, 6, 0
  00f4714  vspltw 7, 7, 0
  00f4718  vspltw 5, 5, 0
  00f471c  li 23, 40
  00f4720  vspltw 6, 6, 0
  00f4724  vspltw 7, 7, 0
  00f4728  vspltw 5, 5, 0
  00f472c  lbz 27, 6(26)
  00f4730  vspltw 6, 6, 0
  00f4734  vspltw 7, 7, 0
  00f4738  vspltw 5, 5, 0
  00f473c  extsb 27, 27
  00f4740  vspltw 6, 6, 0
  00f4744  vspltw 7, 7, 0
  00f4748  vspltw 5, 5, 0
  00f474c  sldi 27, 27, 6
  00f4750  vspltw 6, 6, 0
  00f4754  vspltw 7, 7, 0
  00f4758  vspltw 5, 5, 0
  00f475c  addc 27, 30, 27
  00f4760  vspltw 6, 6, 0
  00f4764  vspltw 7, 7, 0
  00f4768  vspltw 5, 5, 0
  00f476c  clrldi 27, 27, 32
  00f4770  vspltw 6, 6, 0
  00f4774  vspltw 7, 7, 0
  00f4778  vspltw 5, 5, 0
  00f477c  vspltw 6, 6, 0
  00f4780  vspltw 7, 7, 0
  00f4784  vspltw 5, 5, 0
  00f4788  vspltw 6, 6, 0
  00f478c  vspltw 7, 7, 0
  00f4790  vspltw 5, 5, 0
  00f4794  vspltw 6, 6, 0
  00f4798  vspltw 7, 7, 0
  00f479c  vspltw 6, 6, 0
  00f47a0  vspltw 7, 7, 0
  00f47a4  stvewx 5, 25, 27
  00f47a8  vspltw 6, 6, 0
  00f47ac  vspltw 7, 7, 0
  00f47b0  vspltw 6, 6, 0
  00f47b4  vspltw 7, 7, 0
  00f47b8  vspltw 6, 6, 0
  00f47bc  vspltw 7, 7, 0
  00f47c0  vspltw 7, 7, 0
  00f47c4  stvewx 6, 24, 27
  00f47c8  vspltw 7, 7, 0
  00f47cc  vspltw 7, 7, 0
  00f47d0  vspltw 7, 7, 0
  00f47d4  vspltw 7, 7, 0
  00f47d8  vspltw 5, 7, 0
  00f47dc  vspltw 5, 5, 0
  00f47e0  stvewx 5, 23, 27
  00f47e4  bf 2, 0xf47f4
  00f47e8  ori 12, 27, 0
  00f47ec  ori 9, 12, 0
  00f47f0  b 0xf4800
  00f47f4  stw 27, 60(12)
  00f47f8  ori 12, 27, 0
  00f47fc  stw 10, 60(12)
  00f4800  addic 28, 28, 1
  00f4804  lhz 27, 14(6)
  00f4808  addic 26, 26, 8
  00f480c  cmplw 28, 27
  00f4810  bt 0, 0xf4558
  00f4814  lhz 28, 8(7)
  00f4818  ori 26, 10, 0
  00f481c  lhz 27, 10(7)
  00f4820  addc 28, 7, 28
  00f4824  cmplw 27, 26
  00f4828  clrldi 28, 28, 32
  00f482c  addic 28, 28, 16
  00f4830  bf 1, 0xf4b9c
  00f4834  lhz 27, 0(28)
  00f4838  slwi 27, 27, 3
  00f483c  extsw 27, 27
  00f4840  li 0, 4480
  00f4844  std 27, 4496(1)
  00f4848  lfs 1, 48(29)
  00f484c  lhz 27, 2(28)
  00f4850  lhz 25, 4(28)
  00f4854  slwi 27, 27, 3
  00f4858  lfd 2, 4496(1)
  00f485c  extsw 27, 27
  00f4860  fcfid 2, 2
  00f4864  slwi 25, 25, 3
  00f4868  std 27, 4496(1)
  00f486c  extsw 27, 25
  00f4870  frsp 2, 2
  00f4874  fmuls 2, 2, 1
  00f4878  lfd 3, 4496(1)
  00f487c  fcfid 3, 3
  00f4880  stfs 2, 4480(1)
  00f4884  stfs 2, 4484(1)
  00f4888  stfs 2, 4488(1)
  00f488c  stfs 2, 4492(1)
  00f4890  frsp 2, 3
  00f4894  std 27, 4496(1)
  00f4898  lvx 5, 1, 0
  00f489c  li 0, 4480
  00f48a0  vspltw 5, 5, 0
  00f48a4  vspltw 5, 5, 0
  00f48a8  fmuls 2, 2, 1
  00f48ac  vspltw 5, 5, 0
  00f48b0  vspltw 5, 5, 0
  00f48b4  vspltw 5, 5, 0
  00f48b8  stfs 2, 4480(1)
  00f48bc  lfd 3, 4496(1)
  00f48c0  stfs 2, 4484(1)
  00f48c4  fcfid 3, 3
  00f48c8  stfs 2, 4488(1)
  00f48cc  stfs 2, 4492(1)
  00f48d0  lvx 6, 1, 0
  00f48d4  li 0, 4480
  00f48d8  vspltw 6, 6, 0
  00f48dc  vspltw 5, 5, 0
  00f48e0  frsp 2, 3
  00f48e4  vspltw 6, 6, 0
  00f48e8  vspltw 5, 5, 0
  00f48ec  vspltw 6, 6, 0
  00f48f0  vspltw 5, 5, 0
  00f48f4  vspltw 6, 6, 0
  00f48f8  fmuls 1, 2, 1
  00f48fc  vspltw 5, 5, 0
  00f4900  vspltw 6, 6, 0
  00f4904  vspltw 5, 5, 0
  00f4908  vspltw 6, 6, 0
  00f490c  vspltw 5, 5, 0
  00f4910  vspltw 6, 6, 0
  00f4914  stfs 1, 4480(1)
  00f4918  stfs 1, 4484(1)
  00f491c  stfs 1, 4488(1)
  00f4920  stfs 1, 4492(1)
  00f4924  lvx 7, 1, 0
  00f4928  vspltw 6, 6, 0
  00f492c  vspltw 7, 7, 0
  00f4930  vspltw 5, 5, 0
  00f4934  vspltw 6, 6, 0
  00f4938  vspltw 7, 7, 0
  00f493c  vspltw 5, 5, 0
  00f4940  vspltw 6, 6, 0
  00f4944  vspltw 7, 7, 0
  00f4948  vspltw 5, 5, 0
  00f494c  vspltw 6, 6, 0
  00f4950  vspltw 7, 7, 0
  00f4954  vspltw 5, 5, 0
  00f4958  vspltw 6, 6, 0
  00f495c  vspltw 7, 7, 0
  00f4960  vspltw 5, 5, 0
  00f4964  vspltw 6, 6, 0
  00f4968  vspltw 7, 7, 0
  00f496c  vspltw 5, 5, 0
  00f4970  vspltw 6, 6, 0
  00f4974  vspltw 7, 7, 0
  00f4978  vspltw 5, 5, 0
  00f497c  vspltw 6, 6, 0
  00f4980  vspltw 7, 7, 0
  00f4984  vspltw 5, 5, 0
  00f4988  vspltw 6, 6, 0
  00f498c  vspltw 7, 7, 0
  00f4990  vspltw 5, 5, 0
  00f4994  vspltw 6, 6, 0
  00f4998  vspltw 7, 7, 0
  00f499c  vspltw 5, 5, 0
  00f49a0  vspltw 6, 6, 0
  00f49a4  vspltw 7, 7, 0
  00f49a8  vspltw 5, 5, 0
  00f49ac  vspltw 6, 6, 0
  00f49b0  vspltw 7, 7, 0
  00f49b4  vspltw 5, 5, 0
  00f49b8  vspltw 6, 6, 0
  00f49bc  vspltw 7, 7, 0
  00f49c0  vspltw 5, 5, 0
  00f49c4  vspltw 6, 6, 0
  00f49c8  vspltw 7, 7, 0
  00f49cc  vspltw 5, 5, 0
  00f49d0  vspltw 6, 6, 0
  00f49d4  vspltw 7, 7, 0
  00f49d8  vspltw 5, 5, 0
  00f49dc  vspltw 6, 6, 0
  00f49e0  vspltw 7, 7, 0
  00f49e4  vspltw 5, 5, 0
  00f49e8  vspltw 6, 6, 0
  00f49ec  vspltw 7, 7, 0
  00f49f0  vspltw 5, 5, 0
  00f49f4  vspltw 6, 6, 0
  00f49f8  vspltw 7, 7, 0
  00f49fc  vspltw 5, 5, 0
  00f4a00  vspltw 6, 6, 0
  00f4a04  vspltw 7, 7, 0
  00f4a08  vspltw 5, 5, 0
  00f4a0c  lbz 27, 7(28)
  00f4a10  vspltw 6, 6, 0
  00f4a14  vspltw 7, 7, 0
  00f4a18  vspltw 5, 5, 0
  00f4a1c  extsb 27, 27
  00f4a20  vspltw 6, 6, 0
  00f4a24  vspltw 7, 7, 0
  00f4a28  vspltw 5, 5, 0
  00f4a2c  cmpwi 27, 0
  00f4a30  vspltw 6, 6, 0
  00f4a34  vspltw 7, 7, 0
  00f4a38  vspltw 5, 5, 0
  00f4a3c  vspltw 6, 6, 0
  00f4a40  vspltw 7, 7, 0
  00f4a44  vspltw 5, 5, 0
  00f4a48  vspltw 6, 6, 0
  00f4a4c  vspltw 7, 7, 0
  00f4a50  vspltw 5, 5, 0
  00f4a54  vspltw 6, 6, 0
  00f4a58  vspltw 7, 7, 0
  00f4a5c  vspltw 6, 6, 0
  00f4a60  vspltw 7, 7, 0
  00f4a64  vspltw 6, 6, 0
  00f4a68  vspltw 7, 7, 0
  00f4a6c  vspltw 6, 6, 0
  00f4a70  vspltw 7, 7, 0
  00f4a74  vspltw 7, 7, 0
  00f4a78  vspltw 7, 7, 0
  00f4a7c  vspltw 7, 7, 0
  00f4a80  vspltw 7, 7, 0
  00f4a84  vspltw 7, 7, 0
  00f4a88  vspltw 7, 7, 0
  00f4a8c  vspltw 7, 7, 0
  00f4a90  bf 0, 0xf4afc
  00f4a94  lbz 27, 6(28)
  00f4a98  vspltw 5, 5, 0
  00f4a9c  li 25, 16
  00f4aa0  slwi 27, 27, 6
  00f4aa4  vspltw 6, 6, 0
  00f4aa8  li 24, 20
  00f4aac  vspltw 7, 7, 0
  00f4ab0  addc 27, 30, 27
  00f4ab4  li 23, 24
  00f4ab8  clrldi 27, 27, 32
  00f4abc  li 22, 1
  00f4ac0  cmpwi 1, 8, 0
  00f4ac4  stvewx 5, 25, 27
  00f4ac8  stvewx 6, 24, 27
  00f4acc  stvewx 7, 23, 27
  00f4ad0  lwz 25, 12(27)
  00f4ad4  stw 22, 28(27)
  00f4ad8  cmpwi 25, 0
  00f4adc  bf 2, 0xf4b88
  00f4ae0  bf 6, 0xf4af0
  00f4ae4  ori 8, 27, 0
  00f4ae8  ori 5, 8, 0
  00f4aec  b 0xf4b88
  00f4af0  stw 27, 12(5)
  00f4af4  ori 5, 27, 0
  00f4af8  b 0xf4b88
  00f4afc  lbz 27, 6(28)
  00f4b00  addic 24, 3, 16
  00f4b04  vspltw 5, 5, 0
  00f4b08  slwi 25, 27, 5
  00f4b0c  vspltw 6, 6, 0
  00f4b10  addic 21, 3, 28
  00f4b14  vspltw 7, 7, 0
  00f4b18  addc 24, 24, 25
  00f4b1c  rlwinm 27, 27, 5, 19, 26
  00f4b20  clrldi 24, 24, 32
  00f4b24  addic 23, 3, 20
  00f4b28  addc 21, 21, 27
  00f4b2c  addic 22, 3, 24
  00f4b30  addc 23, 23, 27
  00f4b34  clrldi 21, 21, 32
  00f4b38  addc 22, 22, 25
  00f4b3c  stvewx 5, 0, 24
  00f4b40  clrldi 23, 23, 32
  00f4b44  clrldi 24, 22, 32
  00f4b48  cmpwi 1, 11, 0
  00f4b4c  lwz 22, 0(21)
  00f4b50  stvewx 6, 0, 23
  00f4b54  cmpwi 22, 0
  00f4b58  stvewx 7, 0, 24
  00f4b5c  bf 2, 0xf4b88
  00f4b60  ori 24, 27, 0
  00f4b64  addc 27, 3, 25
  00f4b68  addc 25, 3, 24
  00f4b6c  clrldi 25, 25, 32
  00f4b70  bf 6, 0xf4b80
  00f4b74  ori 11, 27, 0
  00f4b78  ori 4, 25, 0
  00f4b7c  b 0xf4b88
  00f4b80  stw 27, 12(4)
  00f4b84  ori 4, 25, 0
  00f4b88  addic 26, 26, 1
  00f4b8c  lhz 27, 10(7)
  00f4b90  addic 28, 28, 8
  00f4b94  cmplw 26, 27
  00f4b98  bt 0, 0xf4834
  00f4b9c  cmpwi 5, 0
  00f4ba0  cmpwi 1, 4, 0
  00f4ba4  bt 2, 0xf4bac
  00f4ba8  stw 10, 12(5)
  00f4bac  bt 6, 0xf4bb4
  00f4bb0  stw 10, 12(4)
  00f4bb4  lhz 3, 12(7)
  00f4bb8  ori 4, 10, 0
  00f4bbc  lhz 5, 14(7)
  00f4bc0  addc 3, 7, 3
  00f4bc4  cmplw 5, 4
  00f4bc8  clrldi 3, 3, 32
  00f4bcc  addic 3, 3, 16
  00f4bd0  bf 1, 0xf4e9c
  00f4bd4  lhz 5, 0(3)
  00f4bd8  extsh 5, 5
  00f4bdc  extsw 5, 5
  00f4be0  li 0, 4480
  00f4be4  std 5, 4496(1)
  00f4be8  lfs 1, 52(29)
  00f4bec  lhz 5, 2(3)
  00f4bf0  lhz 11, 4(3)
  00f4bf4  extsh 5, 5
  00f4bf8  lfd 2, 4496(1)
  00f4bfc  extsw 5, 5
  00f4c00  fcfid 2, 2
  00f4c04  extsh 11, 11
  00f4c08  std 5, 4496(1)
  00f4c0c  extsw 5, 11
  00f4c10  frsp 2, 2
  00f4c14  cmpwi 1, 9, 0
  00f4c18  fmuls 2, 2, 1
  00f4c1c  lfd 3, 4496(1)
  00f4c20  fcfid 3, 3
  00f4c24  stfs 2, 4480(1)
  00f4c28  stfs 2, 4484(1)
  00f4c2c  stfs 2, 4488(1)
  00f4c30  stfs 2, 4492(1)
  00f4c34  frsp 2, 3
  00f4c38  std 5, 4496(1)
  00f4c3c  lvx 5, 1, 0
  00f4c40  li 0, 4480
  00f4c44  vspltw 5, 5, 0
  00f4c48  vspltw 5, 5, 0
  00f4c4c  fmuls 2, 2, 1
  00f4c50  vspltw 5, 5, 0
  00f4c54  vspltw 5, 5, 0
  00f4c58  vspltw 5, 5, 0
  00f4c5c  stfs 2, 4480(1)
  00f4c60  lfd 3, 4496(1)
  00f4c64  stfs 2, 4484(1)
  00f4c68  fcfid 3, 3
  00f4c6c  stfs 2, 4488(1)
  00f4c70  stfs 2, 4492(1)
  00f4c74  lvx 6, 1, 0
  00f4c78  li 0, 4480
  00f4c7c  vspltw 5, 5, 0
  00f4c80  vspltw 6, 6, 0
  00f4c84  vspltw 5, 5, 0
  00f4c88  vspltw 6, 6, 0
  00f4c8c  frsp 2, 3
  00f4c90  vspltw 5, 5, 0
  00f4c94  vspltw 6, 6, 0
  00f4c98  vspltw 5, 5, 0
  00f4c9c  vspltw 6, 6, 0
  00f4ca0  fmuls 1, 2, 1
  00f4ca4  vspltw 6, 6, 0
  00f4ca8  vspltw 5, 5, 0
  00f4cac  vspltw 6, 6, 0
  00f4cb0  vspltw 5, 5, 0
  00f4cb4  vspltw 6, 6, 0
  00f4cb8  vspltw 5, 5, 0
  00f4cbc  stfs 1, 4480(1)
  00f4cc0  stfs 1, 4484(1)
  00f4cc4  stfs 1, 4488(1)
  00f4cc8  stfs 1, 4492(1)
  00f4ccc  lvx 7, 1, 0
  00f4cd0  vspltw 6, 6, 0
  00f4cd4  vspltw 7, 7, 0
  00f4cd8  vspltw 5, 5, 0
  00f4cdc  vspltw 6, 6, 0
  00f4ce0  vspltw 7, 7, 0
  00f4ce4  vspltw 5, 5, 0
  00f4ce8  vspltw 6, 6, 0
  00f4cec  vspltw 7, 7, 0
  00f4cf0  vspltw 5, 5, 0
  00f4cf4  vspltw 6, 6, 0
  00f4cf8  vspltw 7, 7, 0
  00f4cfc  vspltw 5, 5, 0
  00f4d00  vspltw 6, 6, 0
  00f4d04  vspltw 7, 7, 0
  00f4d08  vspltw 5, 5, 0
  00f4d0c  vspltw 6, 6, 0
  00f4d10  vspltw 7, 7, 0
  00f4d14  vspltw 5, 5, 0
  00f4d18  vspltw 6, 6, 0
  00f4d1c  vspltw 7, 7, 0
  00f4d20  vspltw 5, 5, 0
  00f4d24  vspltw 6, 6, 0
  00f4d28  vspltw 7, 7, 0
  00f4d2c  vspltw 5, 5, 0
  00f4d30  vspltw 6, 6, 0
  00f4d34  vspltw 7, 7, 0
  00f4d38  vspltw 5, 5, 0
  00f4d3c  vspltw 6, 6, 0
  00f4d40  vspltw 7, 7, 0
  00f4d44  vspltw 5, 5, 0
  00f4d48  vspltw 6, 6, 0
  00f4d4c  vspltw 7, 7, 0
  00f4d50  vspltw 5, 5, 0
  00f4d54  li 11, 48
  00f4d58  vspltw 6, 6, 0
  00f4d5c  vspltw 7, 7, 0
  00f4d60  vspltw 5, 5, 0
  00f4d64  vspltw 6, 6, 0
  00f4d68  vspltw 7, 7, 0
  00f4d6c  vspltw 5, 5, 0
  00f4d70  vspltw 6, 6, 0
  00f4d74  vspltw 7, 7, 0
  00f4d78  vspltw 5, 5, 0
  00f4d7c  li 28, 52
  00f4d80  vspltw 6, 6, 0
  00f4d84  vspltw 7, 7, 0
  00f4d88  vspltw 5, 5, 0
  00f4d8c  li 27, 56
  00f4d90  vspltw 6, 6, 0
  00f4d94  vspltw 7, 7, 0
  00f4d98  vspltw 5, 5, 0
  00f4d9c  vspltw 6, 6, 0
  00f4da0  vspltw 7, 7, 0
  00f4da4  vspltw 5, 5, 0
  00f4da8  lbz 5, 6(3)
  00f4dac  vspltw 6, 6, 0
  00f4db0  vspltw 7, 7, 0
  00f4db4  extsb 5, 5
  00f4db8  vspltw 5, 5, 0
  00f4dbc  sldi 5, 5, 6
  00f4dc0  vspltw 6, 6, 0
  00f4dc4  vspltw 7, 7, 0
  00f4dc8  vspltw 5, 5, 0
  00f4dcc  addc 5, 30, 5
  00f4dd0  vspltw 6, 6, 0
  00f4dd4  vspltw 7, 7, 0
  00f4dd8  vspltw 5, 5, 0
  00f4ddc  clrldi 5, 5, 32
  00f4de0  vspltw 6, 6, 0
  00f4de4  vspltw 7, 7, 0
  00f4de8  vspltw 5, 5, 0
  00f4dec  vspltw 6, 6, 0
  00f4df0  vspltw 7, 7, 0
  00f4df4  vspltw 5, 5, 0
  00f4df8  vspltw 6, 6, 0
  00f4dfc  vspltw 7, 7, 0
  00f4e00  vspltw 5, 5, 0
  00f4e04  vspltw 6, 6, 0
  00f4e08  vspltw 7, 7, 0
  00f4e0c  vspltw 5, 5, 0
  00f4e10  vspltw 6, 6, 0
  00f4e14  vspltw 7, 7, 0
  00f4e18  vspltw 6, 6, 0
  00f4e1c  vspltw 7, 7, 0
  00f4e20  stvewx 5, 11, 5
  00f4e24  vspltw 6, 6, 0
  00f4e28  vspltw 7, 7, 0
  00f4e2c  vspltw 6, 6, 0
  00f4e30  vspltw 7, 7, 0
  00f4e34  vspltw 6, 6, 0
  00f4e38  vspltw 7, 7, 0
  00f4e3c  vspltw 7, 7, 0
  00f4e40  stvewx 6, 28, 5
  00f4e44  vspltw 7, 7, 0
  00f4e48  vspltw 7, 7, 0
  00f4e4c  vspltw 7, 7, 0
  00f4e50  vspltw 7, 7, 0
  00f4e54  vspltw 5, 7, 0
  00f4e58  vspltw 5, 5, 0
  00f4e5c  stvewx 5, 27, 5
  00f4e60  lwz 11, 60(5)
  00f4e64  cmpwi 11, 0
  00f4e68  bf 2, 0xf4e88
  00f4e6c  bf 6, 0xf4e7c
  00f4e70  ori 12, 5, 0
  00f4e74  ori 9, 12, 0
  00f4e78  b 0xf4e88
  00f4e7c  stw 5, 60(12)
  00f4e80  ori 12, 5, 0
  00f4e84  stw 10, 60(12)
  00f4e88  addic 4, 4, 1
  00f4e8c  lhz 5, 14(7)
  00f4e90  addic 3, 3, 8
  00f4e94  cmplw 4, 5
  00f4e98  bt 0, 0xf4bd4
  00f4e9c  cmpwi 8, 0
  00f4ea0  bt 2, 0xf4ed8
  00f4ea4  ori 3, 8, 0
  00f4ea8  li 4, 16
  00f4eac  li 5, 32
  00f4eb0  lvx 5, 0, 3
  00f4eb4  lvx 6, 4, 3
  00f4eb8  vmaddfp 5, 5, 3, 2
  00f4ebc  lwz 8, 12(8)
  00f4ec0  lvx 7, 5, 29
  00f4ec4  cmpwi 8, 0
  00f4ec8  vmaddfp 5, 6, 4, 5
  00f4ecc  vsel 5, 5, 6, 7
  00f4ed0  stvx 5, 4, 3
  00f4ed4  bf 2, 0xf4ea4
  00f4ed8  cmpwi 9, 0
  00f4edc  bt 2, 0xf4f18
  00f4ee0  ori 3, 9, 0
  00f4ee4  li 4, 32
  00f4ee8  li 5, 48
  00f4eec  li 8, 32
  00f4ef0  lvx 5, 4, 3
  00f4ef4  lvx 7, 5, 3
  00f4ef8  vmaddfp 6, 5, 3, 2
  00f4efc  lwz 9, 60(9)
  00f4f00  lvx 8, 8, 29
  00f4f04  cmpwi 9, 0
  00f4f08  vmaddfp 6, 7, 4, 6
  00f4f0c  vsel 5, 6, 5, 8
  00f4f10  stvx 5, 4, 3
  00f4f14  bf 2, 0xf4ee0
  00f4f18  ori 25, 10, 0
  00f4f1c  addic 28, 6, 16
  00f4f20  cmplw 31, 25
  00f4f24  addic 27, 7, 16
  00f4f28  ori 26, 30, 0
  00f4f2c  bf 1, 0xf57d0
  00f4f30  lhz 3, 0(28)
  00f4f34  li 0, 4480
  00f4f38  extsh 3, 3
  00f4f3c  extsw 3, 3
  00f4f40  std 3, 4496(1)
  00f4f44  lfs 1, 48(29)
  00f4f48  lfd 2, 4496(1)
  00f4f4c  fcfid 2, 2
  00f4f50  addic 3, 1, 112
  00f4f54  frsp 2, 2
  00f4f58  fmuls 2, 2, 1
  00f4f5c  stfs 2, 4480(1)
  00f4f60  stfs 2, 4484(1)
  00f4f64  stfs 2, 4488(1)
  00f4f68  stfs 2, 4492(1)
  00f4f6c  lvx 2, 1, 0
  00f4f70  vspltw 2, 2, 0
  00f4f74  vspltw 2, 2, 0
  00f4f78  vspltw 2, 2, 0
  00f4f7c  vspltw 2, 2, 0
  00f4f80  vspltw 2, 2, 0
  00f4f84  vspltw 2, 2, 0
  00f4f88  vspltw 2, 2, 0
  00f4f8c  vspltw 2, 2, 0
  00f4f90  vspltw 2, 2, 0
  00f4f94  vspltw 2, 2, 0
  00f4f98  vspltw 2, 2, 0
  00f4f9c  vspltw 2, 2, 0
  00f4fa0  vspltw 2, 2, 0
  00f4fa4  vspltw 2, 2, 0
  00f4fa8  vspltw 2, 2, 0
  00f4fac  vspltw 2, 2, 0
  00f4fb0  vspltw 2, 2, 0
  00f4fb4  vspltw 2, 2, 0
  00f4fb8  vspltw 2, 2, 0
  00f4fbc  vspltw 2, 2, 0
  00f4fc0  vspltw 2, 2, 0
  00f4fc4  vspltw 2, 2, 0
  00f4fc8  vspltw 2, 2, 0
  00f4fcc  vspltw 2, 2, 0
  00f4fd0  vspltw 2, 2, 0
  00f4fd4  vspltw 2, 2, 0
  00f4fd8  vspltw 2, 2, 0
  00f4fdc  vspltw 2, 2, 0
  00f4fe0  vspltw 2, 2, 0
  00f4fe4  vspltw 2, 2, 0
  00f4fe8  vspltw 2, 2, 0
  00f4fec  vspltw 2, 2, 0
  00f4ff0  vspltw 2, 2, 0
  00f4ff4  vspltw 2, 2, 0
  00f4ff8  vspltw 2, 2, 0
  00f4ffc  vspltw 2, 2, 0
  00f5000  stvewx 2, 0, 3
  00f5004  lhz 3, 2(28)
  00f5008  extsh 3, 3
  00f500c  extsw 3, 3
  00f5010  li 0, 4480
  00f5014  std 3, 4496(1)
  00f5018  addic 3, 1, 116
  00f501c  lfd 3, 4496(1)
  00f5020  fcfid 3, 3
  00f5024  frsp 3, 3
  00f5028  fmuls 3, 3, 1
  00f502c  stfs 3, 4480(1)
  00f5030  stfs 3, 4484(1)
  00f5034  stfs 3, 4488(1)
  00f5038  stfs 3, 4492(1)
  00f503c  lvx 2, 1, 0
  00f5040  vspltw 2, 2, 0
  00f5044  vspltw 2, 2, 0
  00f5048  vspltw 2, 2, 0
  00f504c  vspltw 2, 2, 0
  00f5050  vspltw 2, 2, 0
  00f5054  vspltw 2, 2, 0
  00f5058  vspltw 2, 2, 0
  00f505c  vspltw 2, 2, 0
  00f5060  vspltw 2, 2, 0
  00f5064  vspltw 2, 2, 0
  00f5068  vspltw 2, 2, 0
  00f506c  vspltw 2, 2, 0
  00f5070  vspltw 2, 2, 0
  00f5074  vspltw 2, 2, 0
  00f5078  vspltw 2, 2, 0
  00f507c  vspltw 2, 2, 0
  00f5080  vspltw 2, 2, 0
  00f5084  vspltw 2, 2, 0
  00f5088  vspltw 2, 2, 0
  00f508c  vspltw 2, 2, 0
  00f5090  vspltw 2, 2, 0
  00f5094  vspltw 2, 2, 0
  00f5098  vspltw 2, 2, 0
  00f509c  vspltw 2, 2, 0
  00f50a0  vspltw 2, 2, 0
  00f50a4  vspltw 2, 2, 0
  00f50a8  vspltw 2, 2, 0
  00f50ac  vspltw 2, 2, 0
  00f50b0  vspltw 2, 2, 0
  00f50b4  vspltw 2, 2, 0
  00f50b8  vspltw 2, 2, 0
  00f50bc  vspltw 2, 2, 0
  00f50c0  vspltw 2, 2, 0
  00f50c4  vspltw 2, 2, 0
  00f50c8  vspltw 2, 2, 0
  00f50cc  vspltw 2, 2, 0
  00f50d0  stvewx 2, 0, 3
  00f50d4  lhz 3, 4(28)
  00f50d8  extsh 3, 3
  00f50dc  extsw 3, 3
  00f50e0  li 0, 4480
  00f50e4  std 3, 4496(1)
  00f50e8  addic 3, 1, 120
  00f50ec  lfd 4, 4496(1)
  00f50f0  fcfid 4, 4
  00f50f4  frsp 4, 4
  00f50f8  fmuls 4, 4, 1
  00f50fc  stfs 4, 4480(1)
  00f5100  stfs 4, 4484(1)
  00f5104  stfs 4, 4488(1)
  00f5108  stfs 4, 4492(1)
  00f510c  lvx 2, 1, 0
  00f5110  vspltw 2, 2, 0
  00f5114  vspltw 2, 2, 0
  00f5118  vspltw 2, 2, 0
  00f511c  vspltw 2, 2, 0
  00f5120  vspltw 2, 2, 0
  00f5124  vspltw 2, 2, 0
  00f5128  vspltw 2, 2, 0
  00f512c  vspltw 2, 2, 0
  00f5130  vspltw 2, 2, 0
  00f5134  vspltw 2, 2, 0
  00f5138  vspltw 2, 2, 0
  00f513c  vspltw 2, 2, 0
  00f5140  vspltw 2, 2, 0
  00f5144  vspltw 2, 2, 0
  00f5148  vspltw 2, 2, 0
  00f514c  vspltw 2, 2, 0
  00f5150  vspltw 2, 2, 0
  00f5154  vspltw 2, 2, 0
  00f5158  vspltw 2, 2, 0
  00f515c  vspltw 2, 2, 0
  00f5160  vspltw 2, 2, 0
  00f5164  vspltw 2, 2, 0
  00f5168  vspltw 2, 2, 0
  00f516c  vspltw 2, 2, 0
  00f5170  vspltw 2, 2, 0
  00f5174  vspltw 2, 2, 0
  00f5178  vspltw 2, 2, 0
  00f517c  vspltw 2, 2, 0
  00f5180  vspltw 2, 2, 0
  00f5184  vspltw 2, 2, 0
  00f5188  vspltw 2, 2, 0
  00f518c  vspltw 2, 2, 0
  00f5190  vspltw 2, 2, 0
  00f5194  vspltw 2, 2, 0
  00f5198  vspltw 2, 2, 0
  00f519c  vspltw 2, 2, 0
  00f51a0  stvewx 2, 0, 3
  00f51a4  lhz 3, 6(28)
  00f51a8  extsh 3, 3
  00f51ac  extsw 3, 3
  00f51b0  li 0, 4480
  00f51b4  std 3, 4496(1)
  00f51b8  addic 3, 1, 124
  00f51bc  lfd 5, 4496(1)
  00f51c0  fcfid 5, 5
  00f51c4  frsp 5, 5
  00f51c8  fmuls 5, 5, 1
  00f51cc  stfs 5, 4480(1)
  00f51d0  stfs 5, 4484(1)
  00f51d4  stfs 5, 4488(1)
  00f51d8  stfs 5, 4492(1)
  00f51dc  lvx 2, 1, 0
  00f51e0  vspltw 2, 2, 0
  00f51e4  vspltw 2, 2, 0
  00f51e8  vspltw 2, 2, 0
  00f51ec  vspltw 2, 2, 0
  00f51f0  vspltw 2, 2, 0
  00f51f4  vspltw 2, 2, 0
  00f51f8  vspltw 2, 2, 0
  00f51fc  vspltw 2, 2, 0
  00f5200  vspltw 2, 2, 0
  00f5204  vspltw 2, 2, 0
  00f5208  vspltw 2, 2, 0
  00f520c  vspltw 2, 2, 0
  00f5210  vspltw 2, 2, 0
  00f5214  vspltw 2, 2, 0
  00f5218  vspltw 2, 2, 0
  00f521c  vspltw 2, 2, 0
  00f5220  vspltw 2, 2, 0
  00f5224  vspltw 2, 2, 0
  00f5228  vspltw 2, 2, 0
  00f522c  vspltw 2, 2, 0
  00f5230  vspltw 2, 2, 0
  00f5234  vspltw 2, 2, 0
  00f5238  vspltw 2, 2, 0
  00f523c  vspltw 2, 2, 0
  00f5240  vspltw 2, 2, 0
  00f5244  vspltw 2, 2, 0
  00f5248  vspltw 2, 2, 0
  00f524c  vspltw 2, 2, 0
  00f5250  vspltw 2, 2, 0
  00f5254  vspltw 2, 2, 0
  00f5258  vspltw 2, 2, 0
  00f525c  vspltw 2, 2, 0
  00f5260  vspltw 2, 2, 0
  00f5264  vspltw 2, 2, 0
  00f5268  vspltw 2, 2, 0
  00f526c  vspltw 2, 2, 0
  00f5270  stvewx 2, 0, 3
  00f5274  lhz 3, 0(27)
  00f5278  extsh 3, 3
  00f527c  extsw 3, 3
  00f5280  li 0, 4480
  00f5284  std 3, 4496(1)
  00f5288  addic 3, 1, 128
  00f528c  lfd 6, 4496(1)
  00f5290  fcfid 6, 6
  00f5294  frsp 6, 6
  00f5298  fmuls 6, 6, 1
  00f529c  stfs 6, 4480(1)
  00f52a0  stfs 6, 4484(1)
  00f52a4  stfs 6, 4488(1)
  00f52a8  stfs 6, 4492(1)
  00f52ac  lvx 2, 1, 0
  00f52b0  vspltw 2, 2, 0
  00f52b4  vspltw 2, 2, 0
  00f52b8  vspltw 2, 2, 0
  00f52bc  vspltw 2, 2, 0
  00f52c0  vspltw 2, 2, 0
  00f52c4  vspltw 2, 2, 0
  00f52c8  vspltw 2, 2, 0
  00f52cc  vspltw 2, 2, 0
  00f52d0  vspltw 2, 2, 0
  00f52d4  vspltw 2, 2, 0
  00f52d8  vspltw 2, 2, 0
  00f52dc  vspltw 2, 2, 0
  00f52e0  vspltw 2, 2, 0
  00f52e4  vspltw 2, 2, 0
  00f52e8  vspltw 2, 2, 0
  00f52ec  vspltw 2, 2, 0
  00f52f0  vspltw 2, 2, 0
  00f52f4  vspltw 2, 2, 0
  00f52f8  vspltw 2, 2, 0
  00f52fc  vspltw 2, 2, 0
  00f5300  vspltw 2, 2, 0
  00f5304  vspltw 2, 2, 0
  00f5308  vspltw 2, 2, 0
  00f530c  vspltw 2, 2, 0
  00f5310  vspltw 2, 2, 0
  00f5314  vspltw 2, 2, 0
  00f5318  vspltw 2, 2, 0
  00f531c  vspltw 2, 2, 0
  00f5320  vspltw 2, 2, 0
  00f5324  vspltw 2, 2, 0
  00f5328  vspltw 2, 2, 0
  00f532c  vspltw 2, 2, 0
  00f5330  vspltw 2, 2, 0
  00f5334  vspltw 2, 2, 0
  00f5338  vspltw 2, 2, 0
  00f533c  vspltw 2, 2, 0
  00f5340  stvewx 2, 0, 3
  00f5344  lhz 3, 2(27)
  00f5348  extsh 3, 3
  00f534c  extsw 3, 3
  00f5350  li 0, 4480
  00f5354  std 3, 4496(1)
  00f5358  addic 3, 1, 132
  00f535c  fmuls 2, 2, 6
  00f5360  lfd 7, 4496(1)
  00f5364  fcfid 7, 7
  00f5368  frsp 7, 7
  00f536c  fmuls 7, 7, 1
  00f5370  stfs 7, 4480(1)
  00f5374  stfs 7, 4484(1)
  00f5378  stfs 7, 4488(1)
  00f537c  stfs 7, 4492(1)
  00f5380  lvx 2, 1, 0
  00f5384  vspltw 2, 2, 0
  00f5388  vspltw 2, 2, 0
  00f538c  vspltw 2, 2, 0
  00f5390  vspltw 2, 2, 0
  00f5394  vspltw 2, 2, 0
  00f5398  vspltw 2, 2, 0
  00f539c  vspltw 2, 2, 0
  00f53a0  vspltw 2, 2, 0
  00f53a4  vspltw 2, 2, 0
  00f53a8  vspltw 2, 2, 0
  00f53ac  vspltw 2, 2, 0
  00f53b0  vspltw 2, 2, 0
  00f53b4  vspltw 2, 2, 0
  00f53b8  vspltw 2, 2, 0
  00f53bc  vspltw 2, 2, 0
  00f53c0  vspltw 2, 2, 0
  00f53c4  vspltw 2, 2, 0
  00f53c8  vspltw 2, 2, 0
  00f53cc  vspltw 2, 2, 0
  00f53d0  vspltw 2, 2, 0
  00f53d4  vspltw 2, 2, 0
  00f53d8  vspltw 2, 2, 0
  00f53dc  vspltw 2, 2, 0
  00f53e0  vspltw 2, 2, 0
  00f53e4  vspltw 2, 2, 0
  00f53e8  vspltw 2, 2, 0
  00f53ec  vspltw 2, 2, 0
  00f53f0  vspltw 2, 2, 0
  00f53f4  vspltw 2, 2, 0
  00f53f8  vspltw 2, 2, 0
  00f53fc  vspltw 2, 2, 0
  00f5400  vspltw 2, 2, 0
  00f5404  vspltw 2, 2, 0
  00f5408  vspltw 2, 2, 0
  00f540c  vspltw 2, 2, 0
  00f5410  vspltw 2, 2, 0
  00f5414  stvewx 2, 0, 3
  00f5418  lhz 3, 4(27)
  00f541c  extsh 3, 3
  00f5420  extsw 3, 3
  00f5424  li 0, 4480
  00f5428  std 3, 4496(1)
  00f542c  addic 3, 1, 136
  00f5430  fmuls 3, 3, 7
  00f5434  lfd 8, 4496(1)
  00f5438  fcfid 8, 8
  00f543c  frsp 8, 8
  00f5440  fmuls 8, 8, 1
  00f5444  stfs 8, 4480(1)
  00f5448  stfs 8, 4484(1)
  00f544c  stfs 8, 4488(1)
  00f5450  stfs 8, 4492(1)
  00f5454  lvx 2, 1, 0
  00f5458  vspltw 2, 2, 0
  00f545c  vspltw 2, 2, 0
  00f5460  vspltw 2, 2, 0
  00f5464  vspltw 2, 2, 0
  00f5468  vspltw 2, 2, 0
  00f546c  vspltw 2, 2, 0
  00f5470  vspltw 2, 2, 0
  00f5474  vspltw 2, 2, 0
  00f5478  vspltw 2, 2, 0
  00f547c  vspltw 2, 2, 0
  00f5480  vspltw 2, 2, 0
  00f5484  vspltw 2, 2, 0
  00f5488  vspltw 2, 2, 0
  00f548c  vspltw 2, 2, 0
  00f5490  vspltw 2, 2, 0
  00f5494  vspltw 2, 2, 0
  00f5498  vspltw 2, 2, 0
  00f549c  vspltw 2, 2, 0
  00f54a0  vspltw 2, 2, 0
  00f54a4  vspltw 2, 2, 0
  00f54a8  vspltw 2, 2, 0
  00f54ac  vspltw 2, 2, 0
  00f54b0  vspltw 2, 2, 0
  00f54b4  vspltw 2, 2, 0
  00f54b8  vspltw 2, 2, 0
  00f54bc  vspltw 2, 2, 0
  00f54c0  vspltw 2, 2, 0
  00f54c4  vspltw 2, 2, 0
  00f54c8  vspltw 2, 2, 0
  00f54cc  vspltw 2, 2, 0
  00f54d0  vspltw 2, 2, 0
  00f54d4  vspltw 2, 2, 0
  00f54d8  vspltw 2, 2, 0
  00f54dc  vspltw 2, 2, 0
  00f54e0  vspltw 2, 2, 0
  00f54e4  vspltw 2, 2, 0
  00f54e8  stvewx 2, 0, 3
  00f54ec  lhz 3, 6(27)
  00f54f0  extsh 3, 3
  00f54f4  extsw 3, 3
  00f54f8  li 0, 4480
  00f54fc  std 3, 4496(1)
  00f5500  fmuls 4, 4, 8
  00f5504  addic 3, 1, 140
  00f5508  fadds 2, 2, 3
  00f550c  fadds 2, 2, 4
  00f5510  lfd 9, 4496(1)
  00f5514  fcfid 9, 9
  00f5518  frsp 9, 9
  00f551c  fmuls 1, 9, 1
  00f5520  stfs 1, 4480(1)
  00f5524  stfs 1, 4484(1)
  00f5528  stfs 1, 4488(1)
  00f552c  stfs 1, 4492(1)
  00f5530  lvx 2, 1, 0
  00f5534  vspltw 2, 2, 0
  00f5538  vspltw 2, 2, 0
  00f553c  vspltw 2, 2, 0
  00f5540  vspltw 2, 2, 0
  00f5544  fmuls 1, 5, 1
  00f5548  vspltw 2, 2, 0
  00f554c  vspltw 2, 2, 0
  00f5550  vspltw 2, 2, 0
  00f5554  fadds 1, 2, 1
  00f5558  vspltw 2, 2, 0
  00f555c  vspltw 2, 2, 0
  00f5560  vspltw 2, 2, 0
  00f5564  vspltw 2, 2, 0
  00f5568  vspltw 2, 2, 0
  00f556c  vspltw 2, 2, 0
  00f5570  vspltw 2, 2, 0
  00f5574  vspltw 2, 2, 0
  00f5578  vspltw 2, 2, 0
  00f557c  vspltw 2, 2, 0
  00f5580  vspltw 2, 2, 0
  00f5584  vspltw 2, 2, 0
  00f5588  vspltw 2, 2, 0
  00f558c  vspltw 2, 2, 0
  00f5590  vspltw 2, 2, 0
  00f5594  vspltw 2, 2, 0
  00f5598  vspltw 2, 2, 0
  00f559c  vspltw 2, 2, 0
  00f55a0  vspltw 2, 2, 0
  00f55a4  vspltw 2, 2, 0
  00f55a8  vspltw 2, 2, 0
  00f55ac  vspltw 2, 2, 0
  00f55b0  vspltw 2, 2, 0
  00f55b4  vspltw 2, 2, 0
  00f55b8  vspltw 2, 2, 0
  00f55bc  vspltw 2, 2, 0
  00f55c0  vspltw 2, 2, 0
  00f55c4  vspltw 2, 2, 0
  00f55c8  vspltw 2, 2, 0
  00f55cc  stvewx 2, 0, 3
  00f55d0  lfs 28, 4(29)
  00f55d4  fcmpu 0, 1, 28
  00f55d8  cror 6, 1, 2
  00f55dc  bt 6, 0xf5698
  00f55e0  addic 24, 1, 192
  00f55e4  lfs 1, 56(29)
  00f55e8  addic 4, 1, 128
  00f55ec  ori 3, 24, 0
  00f55f0  bl 0x5023bc
  00f55f4  nop
  00f55f8  fmr 1, 30
  00f55fc  addic 3, 1, 224
  00f5600  addic 4, 1, 112
  00f5604  bl 0x5023bc
  00f5608  nop
  00f560c  lfs 1, 224(1)
  00f5610  lfs 2, 228(1)
  00f5614  addic 3, 1, 240
  00f5618  stfs 1, 160(1)
  00f561c  ori 4, 24, 0
  00f5620  lfs 3, 232(1)
  00f5624  fmr 1, 29
  00f5628  stfs 2, 164(1)
  00f562c  lfs 2, 236(1)
  00f5630  stfs 3, 168(1)
  00f5634  stfs 2, 172(1)
  00f5638  bl 0x5023bc
  00f563c  nop
  00f5640  lfs 1, 240(1)
  00f5644  addic 5, 1, 176
  00f5648  lfs 2, 244(1)
  00f564c  addic 3, 1, 208
  00f5650  stfs 1, 176(1)
  00f5654  addic 4, 1, 160
  00f5658  lfs 1, 248(1)
  00f565c  stfs 2, 180(1)
  00f5660  lfs 2, 252(1)
  00f5664  stfs 1, 184(1)
  00f5668  stfs 2, 188(1)
  00f566c  bl 0x5023f0
  00f5670  nop
  00f5674  lfs 1, 208(1)
  00f5678  lfs 2, 212(1)
  00f567c  stfs 1, 144(1)
  00f5680  lfs 1, 216(1)
  00f5684  stfs 2, 148(1)
  00f5688  lfs 2, 220(1)
  00f568c  stfs 1, 152(1)
  00f5690  stfs 2, 156(1)
  00f5694  b 0xf5734
  00f5698  fmr 1, 30
  00f569c  addic 3, 1, 304
  00f56a0  addic 4, 1, 112
  00f56a4  bl 0x5023bc
  00f56a8  nop
  00f56ac  lfs 1, 304(1)
  00f56b0  lfs 2, 308(1)
  00f56b4  addic 3, 1, 320
  00f56b8  stfs 1, 256(1)
  00f56bc  addic 4, 1, 128
  00f56c0  lfs 3, 312(1)
  00f56c4  fmr 1, 29
  00f56c8  stfs 2, 260(1)
  00f56cc  lfs 2, 316(1)
  00f56d0  stfs 3, 264(1)
  00f56d4  stfs 2, 268(1)
  00f56d8  bl 0x5023bc
  00f56dc  nop
  00f56e0  lfs 1, 320(1)
  00f56e4  addic 5, 1, 272
  00f56e8  lfs 2, 324(1)
  00f56ec  addic 3, 1, 288
  00f56f0  stfs 1, 272(1)
  00f56f4  addic 4, 1, 256
  00f56f8  lfs 1, 328(1)
  00f56fc  stfs 2, 276(1)
  00f5700  lfs 2, 332(1)
  00f5704  stfs 1, 280(1)
  00f5708  stfs 2, 284(1)
  00f570c  bl 0x5023f0
  00f5710  nop
  00f5714  lfs 1, 288(1)
  00f5718  lfs 2, 292(1)
  00f571c  stfs 1, 144(1)
  00f5720  lfs 1, 296(1)
  00f5724  stfs 2, 148(1)
  00f5728  lfs 2, 300(1)
  00f572c  stfs 1, 152(1)
  00f5730  stfs 2, 156(1)
  00f5734  lfs 1, 144(1)
  00f5738  lfs 2, 148(1)
  00f573c  fmuls 5, 1, 1
  00f5740  fmuls 6, 2, 2
  00f5744  lfs 3, 152(1)
  00f5748  lfs 4, 156(1)
  00f574c  fmuls 7, 3, 3
  00f5750  fmuls 8, 4, 4
  00f5754  fadds 5, 5, 6
  00f5758  fadds 5, 5, 7
  00f575c  fadds 5, 5, 8
  00f5760  fcmpu 0, 5, 28
  00f5764  cror 6, 0, 2
  00f5768  bt 6, 0xf57a8
  00f576c  fsqrts 1, 5
  00f5770  addic 3, 1, 336
  00f5774  addic 4, 1, 144
  00f5778  fdivs 1, 31, 1
  00f577c  bl 0x5023bc
  00f5780  nop
  00f5784  lfs 1, 336(1)
  00f5788  stfs 1, 0(26)
  00f578c  lfs 1, 340(1)
  00f5790  stfs 1, 4(26)
  00f5794  lfs 1, 344(1)
  00f5798  stfs 1, 8(26)
  00f579c  lfs 1, 348(1)
  00f57a0  stfs 1, 12(26)
  00f57a4  b 0xf57b8
  00f57a8  stfs 1, 0(26)
  00f57ac  stfs 2, 4(26)
  00f57b0  stfs 3, 8(26)
  00f57b4  stfs 4, 12(26)
  00f57b8  addic 25, 25, 1
  00f57bc  addic 26, 26, 64
  00f57c0  cmplw 25, 31
  00f57c4  addic 28, 28, 8
  00f57c8  addic 27, 27, 8
  00f57cc  bt 0, 0xf4f30
  00f57d0  ori 3, 30, 0
  00f57d4  ld 0, 4656(1)
  00f57d8  mtlr 0
  00f57dc  lfd 28, 4608(1)
  00f57e0  lfd 29, 4616(1)
  00f57e4  lfd 30, 4624(1)
  00f57e8  lfd 31, 4632(1)
  00f57ec  ld 20, 4512(1)
  00f57f0  ld 21, 4520(1)
  00f57f4  ld 22, 4528(1)
  00f57f8  ld 23, 4536(1)
  00f57fc  ld 24, 4544(1)
  00f5800  ld 25, 4552(1)
  00f5804  ld 26, 4560(1)
  00f5808  ld 27, 4568(1)
  00f580c  ld 28, 4576(1)
  00f5810  ld 29, 4584(1)
  00f5814  ld 30, 4592(1)
  00f5818  ld 31, 4600(1)
  00f581c  addi 1, 1, 4640
  00f5820  blr

MB_ComputeAnimDirect:   # 0xf5824, 0xb4 bytes
  00f5824  stdu 1, -144(1)
  00f5828  mflr 0
  00f582c  std 0, 160(1)
  00f5830  std 30, 128(1)
  00f5834  std 31, 136(1)
  00f5838  ori 30, 3, 0
  00f583c  std 28, 112(1)
  00f5840  ori 31, 5, 0
  00f5844  ori 28, 4, 0
  00f5848  lwz 3, 36(30)
  00f584c  lfs 1, 84(30)
  00f5850  lwz 6, 104(30)
  00f5854  lwz 7, 108(30)
  00f5858  lwz 5, 24(3)
  00f585c  lbz 4, 8(3)
  00f5860  std 29, 120(1)
  00f5864  ori 3, 4, 0
  00f5868  bl 0xf3fe0
  00f586c  ori 29, 3, 0
  00f5870  lwz 3, 96(30)
  00f5874  cmpwi 3, 0
  00f5878  bt 2, 0xf5890
  00f587c  clrlwi 4, 28, 24
  00f5880  cmpwi 4, 0
  00f5884  bt 2, 0xf5890
  00f5888  ori 4, 29, 0
  00f588c  bl 0xf3b30
  00f5890  lwz 30, 100(30)
  00f5894  cmpwi 30, 0
  00f5898  bt 2, 0xf58b4
  00f589c  clrlwi 3, 31, 24
  00f58a0  cmpwi 3, 0
  00f58a4  bt 2, 0xf58b4
  00f58a8  ori 4, 29, 0
  00f58ac  ori 3, 30, 0
  00f58b0  bl 0xf3618
  00f58b4  ori 3, 29, 0
  00f58b8  ld 0, 160(1)
  00f58bc  mtlr 0
  00f58c0  ld 28, 112(1)
  00f58c4  ld 29, 120(1)
  00f58c8  ld 30, 128(1)
  00f58cc  ld 31, 136(1)
  00f58d0  addi 1, 1, 144
  00f58d4  blr

ComputeAnimation:   # 0xf58d8, 0x84 bytes
  00f58d8  stdu 1, -128(1)
  00f58dc  mflr 0
  00f58e0  std 0, 144(1)
  00f58e4  std 31, 120(1)
  00f58e8  ori 31, 3, 0
  00f58ec  lwz 3, 36(31)
  00f58f0  lfs 1, 84(31)
  00f58f4  lwz 6, 104(31)
  00f58f8  lwz 7, 108(31)
  00f58fc  lwz 5, 24(3)
  00f5900  lbz 4, 8(3)
  00f5904  std 30, 112(1)
  00f5908  ori 3, 4, 0
  00f590c  bl 0xf3fe0
  00f5910  ori 30, 3, 0
  00f5914  lwz 3, 96(31)
  00f5918  cmpwi 3, 0
  00f591c  bt 2, 0xf5928
  00f5920  ori 4, 30, 0
  00f5924  bl 0xf3b30
  00f5928  lwz 31, 100(31)
  00f592c  cmpwi 31, 0
  00f5930  bt 2, 0xf5940
  00f5934  ori 4, 30, 0
  00f5938  ori 3, 31, 0
  00f593c  bl 0xf3618
  00f5940  ori 3, 30, 0
  00f5944  ld 0, 144(1)
  00f5948  mtlr 0
  00f594c  ld 30, 112(1)
  00f5950  ld 31, 120(1)
  00f5954  addi 1, 1, 128
  00f5958  blr

Moby_BuildJointMatrices:   # 0xf595c, 0x118 bytes
  00f595c  stdu 1, -288(1)
  00f5960  mflr 0
  00f5964  std 0, 304(1)
  00f5968  std 28, 256(1)
  00f596c  std 30, 272(1)
  00f5970  ori 28, 3, 0
  00f5974  ori 30, 5, 0
  00f5978  lwz 3, 36(28)
  00f597c  lfs 1, 84(28)
  00f5980  lwz 6, 104(28)
  00f5984  std 31, 280(1)
  00f5988  lwz 7, 108(28)
  00f598c  lbz 31, 8(3)
  00f5990  lwz 5, 24(3)
  00f5994  std 29, 264(1)
  00f5998  ori 3, 31, 0
  00f599c  bl 0xf3fe0
  00f59a0  ori 29, 3, 0
  00f59a4  lwz 3, 96(28)
  00f59a8  cmpwi 3, 0
  00f59ac  bt 2, 0xf59b8
  00f59b0  ori 4, 29, 0
  00f59b4  bl 0xf3b30
  00f59b8  lwz 28, 100(28)
  00f59bc  cmpwi 28, 0
  00f59c0  bt 2, 0xf59d0
  00f59c4  ori 4, 29, 0
  00f59c8  ori 3, 28, 0
  00f59cc  bl 0xf3618
  00f59d0  addic 28, 1, 112
  00f59d4  li 4, 1
  00f59d8  ori 3, 28, 0
  00f59dc  li 5, 129
  00f59e0  bl 0x5d0140
  00f59e4  nop
  00f59e8  ori 3, 29, 0
  00f59ec  ori 4, 31, 0
  00f59f0  ori 5, 28, 0
  00f59f4  bl 0xf34e8
  00f59f8  ori 29, 3, 0
  00f59fc  ori 3, 30, 0
  00f5a00  li 30, 0
  00f5a04  cmpw 31, 30
  00f5a08  bf 1, 0xf5a54
  00f5a0c  ori 4, 3, 0
  00f5a10  ori 3, 30, 0
  00f5a14  addic 5, 29, 48
  00f5a18  addic 30, 30, 1
  00f5a1c  addc 5, 5, 3
  00f5a20  cmpw 30, 31
  00f5a24  clrldi 5, 5, 32
  00f5a28  addic 3, 3, 64
  00f5a2c  lfs 1, 0(5)
  00f5a30  stfs 1, 0(4)
  00f5a34  lfs 1, 4(5)
  00f5a38  stfs 1, 4(4)
  00f5a3c  lfs 1, 8(5)
  00f5a40  stfs 1, 8(4)
  00f5a44  lfs 1, 12(5)
  00f5a48  stfs 1, 12(4)
  00f5a4c  addic 4, 4, 16
  00f5a50  bt 0, 0xf5a14
  00f5a54  ld 0, 304(1)
  00f5a58  mtlr 0
  00f5a5c  ld 28, 256(1)
  00f5a60  ld 29, 264(1)
  00f5a64  ld 30, 272(1)
  00f5a68  ld 31, 280(1)
  00f5a6c  addi 1, 1, 288
  00f5a70  blr

STUB_000f5a74:   # 0xf5a74, 0x8 bytes
  00f5a74  li 3, 0
  00f5a78  blr

STUB_000f5a7c:   # 0xf5a7c, 0x4 bytes
  00f5a7c  blr

MB_DrawEntries:   # 0xf5b80, 0x1ec4 bytes
  00f5b80  stdu 1, -13024(1)
  00f5b84  mflr 0
  00f5b88  std 0, 13040(1)
  00f5b8c  stfd 28, 12992(1)
  00f5b90  stfd 29, 13000(1)
  00f5b94  stfd 30, 13008(1)
  00f5b98  stfd 31, 13016(1)
  00f5b9c  std 22, 12912(1)
  00f5ba0  addi 0, 1, 12832
  00f5ba4  stvx 29, 0, 0
  00f5ba8  addic 0, 0, 16
  00f5bac  stvx 30, 0, 0
  00f5bb0  addic 0, 0, 16
  00f5bb4  stvx 31, 0, 0
  00f5bb8  std 29, 12968(1)
  00f5bbc  std 21, 12904(1)
  00f5bc0  li 22, 0
  00f5bc4  lis 21, 15
  00f5bc8  std 31, 12984(1)
  00f5bcc  ori 29, 22, 0
  00f5bd0  ori 31, 4, 0
  00f5bd4  std 23, 12920(1)
  00f5bd8  cmplw 4, 29
  00f5bdc  addi 21, 21, 23168
  00f5be0  std 30, 12976(1)
  00f5be4  ori 23, 3, 0
  00f5be8  std 28, 12960(1)
  00f5bec  std 27, 12952(1)
  00f5bf0  std 26, 12944(1)
  00f5bf4  std 25, 12936(1)
  00f5bf8  std 24, 12928(1)
  00f5bfc  std 20, 12896(1)
  00f5c00  std 19, 12888(1)
  00f5c04  std 18, 12880(1)
  00f5c08  addic 30, 1, 4544
  00f5c0c  bf 1, 0xf79d4
  00f5c10  lwz 8, 104(23)
  00f5c14  cmpwi 8, 0
  00f5c18  bf 2, 0xf5c5c
  00f5c1c  lwz 8, 100(23)
  00f5c20  li 3, 16
  00f5c24  lvx 2, 0, 21
  00f5c28  li 4, 16
  00f5c2c  li 6, 32
  00f5c30  li 5, 32
  00f5c34  stvx 2, 0, 8
  00f5c38  lvx 2, 3, 21
  00f5c3c  li 7, 48
  00f5c40  li 9, 48
  00f5c44  stvx 2, 4, 8
  00f5c48  lvx 2, 6, 21
  00f5c4c  stvx 2, 5, 8
  00f5c50  lvx 2, 7, 21
  00f5c54  stvx 2, 9, 8
  00f5c58  b 0xf79c4
  00f5c5c  lfs 30, 0(21)
  00f5c60  lfs 31, 120(23)
  00f5c64  li 0, 12800
  00f5c68  fsubs 29, 30, 31
  00f5c6c  ori 3, 22, 0
  00f5c70  addic 7, 8, 1
  00f5c74  ori 4, 3, 0
  00f5c78  srwi 7, 7, 1
  00f5c7c  ori 5, 4, 0
  00f5c80  stfs 29, 12800(1)
  00f5c84  stfs 29, 12804(1)
  00f5c88  stfs 29, 12808(1)
  00f5c8c  stfs 29, 12812(1)
  00f5c90  lvx 2, 1, 0
  00f5c94  li 0, 12800
  00f5c98  vspltw 2, 2, 0
  00f5c9c  stfs 31, 12800(1)
  00f5ca0  stfs 31, 12804(1)
  00f5ca4  stfs 31, 12808(1)
  00f5ca8  vspltw 2, 2, 0
  00f5cac  stfs 31, 12812(1)
  00f5cb0  lvx 3, 1, 0
  00f5cb4  vspltw 2, 2, 0
  00f5cb8  vspltw 3, 3, 0
  00f5cbc  vspltw 2, 2, 0
  00f5cc0  vspltw 3, 3, 0
  00f5cc4  vspltw 2, 2, 0
  00f5cc8  vspltw 3, 3, 0
  00f5ccc  vspltw 2, 2, 0
  00f5cd0  vspltw 3, 3, 0
  00f5cd4  vspltw 2, 2, 0
  00f5cd8  vspltw 3, 3, 0
  00f5cdc  vspltw 2, 2, 0
  00f5ce0  vspltw 3, 3, 0
  00f5ce4  vspltw 2, 2, 0
  00f5ce8  vspltw 3, 3, 0
  00f5cec  vspltw 2, 2, 0
  00f5cf0  vspltw 3, 3, 0
  00f5cf4  vspltw 2, 2, 0
  00f5cf8  vspltw 3, 3, 0
  00f5cfc  vspltw 2, 2, 0
  00f5d00  vspltw 3, 3, 0
  00f5d04  vspltw 2, 2, 0
  00f5d08  vspltw 3, 3, 0
  00f5d0c  vspltw 2, 2, 0
  00f5d10  vspltw 3, 3, 0
  00f5d14  vspltw 2, 2, 0
  00f5d18  vspltw 3, 3, 0
  00f5d1c  vspltw 2, 2, 0
  00f5d20  vspltw 3, 3, 0
  00f5d24  vspltw 2, 2, 0
  00f5d28  vspltw 3, 3, 0
  00f5d2c  vspltw 2, 2, 0
  00f5d30  vspltw 3, 3, 0
  00f5d34  vspltw 2, 2, 0
  00f5d38  vspltw 3, 3, 0
  00f5d3c  vspltw 2, 2, 0
  00f5d40  vspltw 3, 3, 0
  00f5d44  vspltw 2, 2, 0
  00f5d48  vspltw 3, 3, 0
  00f5d4c  vspltw 2, 2, 0
  00f5d50  vspltw 3, 3, 0
  00f5d54  ori 6, 5, 0
  00f5d58  vspltw 2, 2, 0
  00f5d5c  vspltw 3, 3, 0
  00f5d60  vspltw 2, 2, 0
  00f5d64  vspltw 3, 3, 0
  00f5d68  vspltw 2, 2, 0
  00f5d6c  vspltw 3, 3, 0
  00f5d70  vspltw 2, 2, 0
  00f5d74  vspltw 3, 3, 0
  00f5d78  vspltw 2, 2, 0
  00f5d7c  vspltw 3, 3, 0
  00f5d80  vspltw 2, 2, 0
  00f5d84  vspltw 3, 3, 0
  00f5d88  vspltw 2, 2, 0
  00f5d8c  vspltw 3, 3, 0
  00f5d90  vspltw 2, 2, 0
  00f5d94  vspltw 3, 3, 0
  00f5d98  ori 10, 6, 0
  00f5d9c  lvlx 29, 0, 21
  00f5da0  vspltw 2, 2, 0
  00f5da4  vspltw 3, 3, 0
  00f5da8  cmplw 8, 10
  00f5dac  vspltw 29, 29, 0
  00f5db0  vspltw 2, 2, 0
  00f5db4  vspltw 3, 3, 0
  00f5db8  lwz 9, 132(23)
  00f5dbc  vspltw 2, 2, 0
  00f5dc0  vspltw 3, 3, 0
  00f5dc4  vspltw 2, 2, 0
  00f5dc8  vspltw 3, 3, 0
  00f5dcc  vspltw 2, 2, 0
  00f5dd0  vspltw 2, 2, 0
  00f5dd4  vspltw 2, 2, 0
  00f5dd8  vspltw 2, 2, 0
  00f5ddc  vspltw 31, 2, 0
  00f5de0  vspltw 2, 3, 0
  00f5de4  vspltw 31, 31, 0
  00f5de8  vspltw 2, 2, 0
  00f5dec  vspltw 2, 2, 0
  00f5df0  vspltw 2, 2, 0
  00f5df4  vspltw 2, 2, 0
  00f5df8  vspltw 2, 2, 0
  00f5dfc  vspltw 30, 2, 0
  00f5e00  vspltw 30, 30, 0
  00f5e04  bf 1, 0xf5ec8
  00f5e08  ori 12, 22, 0
  00f5e0c  ori 11, 1, 0
  00f5e10  ori 28, 12, 0
  00f5e14  ori 27, 1, 0
  00f5e18  ori 26, 28, 0
  00f5e1c  addic 25, 28, 1
  00f5e20  addic 24, 11, 4544
  00f5e24  vspltisw 3, 0
  00f5e28  slwi 25, 25, 4
  00f5e2c  addic 20, 28, 2
  00f5e30  addc 25, 1, 25
  00f5e34  slwi 20, 20, 4
  00f5e38  li 19, 64
  00f5e3c  stvx 29, 0, 24
  00f5e40  clrldi 25, 25, 32
  00f5e44  addc 24, 1, 20
  00f5e48  addic 25, 25, 4544
  00f5e4c  clrldi 24, 24, 32
  00f5e50  lvx 2, 19, 21
  00f5e54  li 20, 80
  00f5e58  addic 24, 24, 4544
  00f5e5c  addic 18, 28, 3
  00f5e60  stvx 2, 0, 25
  00f5e64  addic 19, 26, 1
  00f5e68  slwi 25, 18, 4
  00f5e6c  lvx 2, 12, 9
  00f5e70  slwi 19, 19, 4
  00f5e74  addc 25, 1, 25
  00f5e78  stvx 2, 0, 24
  00f5e7c  addic 10, 10, 1
  00f5e80  lvx 4, 20, 21
  00f5e84  addc 24, 1, 19
  00f5e88  clrldi 25, 25, 32
  00f5e8c  vsel 2, 2, 3, 4
  00f5e90  addic 25, 25, 4544
  00f5e94  clrldi 24, 24, 32
  00f5e98  addic 20, 27, 416
  00f5e9c  addic 24, 24, 416
  00f5ea0  cmplw 10, 8
  00f5ea4  stvx 2, 0, 25
  00f5ea8  addic 26, 26, 2
  00f5eac  stvx 29, 0, 20
  00f5eb0  addic 27, 27, 32
  00f5eb4  stvx 29, 0, 24
  00f5eb8  addic 28, 28, 4
  00f5ebc  addic 12, 12, 16
  00f5ec0  addic 11, 11, 64
  00f5ec4  bt 0, 0xf5e1c
  00f5ec8  lwz 9, 140(23)
  00f5ecc  ori 8, 22, 0
  00f5ed0  ori 28, 8, 0
  00f5ed4  lhz 10, 8(9)
  00f5ed8  lhz 11, 10(9)
  00f5edc  addc 9, 9, 10
  00f5ee0  cmplw 11, 8
  00f5ee4  clrldi 11, 9, 32
  00f5ee8  addic 11, 11, 16
  00f5eec  bf 1, 0xf624c
  00f5ef0  lhz 9, 0(11)
  00f5ef4  slwi 9, 9, 3
  00f5ef8  extsw 9, 9
  00f5efc  li 0, 12800
  00f5f00  std 9, 12816(1)
  00f5f04  lfs 1, 96(21)
  00f5f08  lhz 9, 2(11)
  00f5f0c  lhz 10, 4(11)
  00f5f10  slwi 9, 9, 3
  00f5f14  lfd 2, 12816(1)
  00f5f18  extsw 9, 9
  00f5f1c  fcfid 2, 2
  00f5f20  std 9, 12816(1)
  00f5f24  slwi 9, 10, 3
  00f5f28  extsw 9, 9
  00f5f2c  frsp 2, 2
  00f5f30  cmpwi 1, 5, 0
  00f5f34  cmpwi 6, 28, 0
  00f5f38  fmuls 2, 2, 1
  00f5f3c  lfd 3, 12816(1)
  00f5f40  fcfid 3, 3
  00f5f44  stfs 2, 12800(1)
  00f5f48  stfs 2, 12804(1)
  00f5f4c  stfs 2, 12808(1)
  00f5f50  stfs 2, 12812(1)
  00f5f54  std 9, 12816(1)
  00f5f58  frsp 2, 3
  00f5f5c  lvx 2, 1, 0
  00f5f60  li 0, 12800
  00f5f64  vspltw 2, 2, 0
  00f5f68  vspltw 2, 2, 0
  00f5f6c  fmuls 2, 2, 1
  00f5f70  vspltw 2, 2, 0
  00f5f74  vspltw 2, 2, 0
  00f5f78  vspltw 2, 2, 0
  00f5f7c  stfs 2, 12800(1)
  00f5f80  stfs 2, 12804(1)
  00f5f84  lfd 3, 12816(1)
  00f5f88  stfs 2, 12808(1)
  00f5f8c  fcfid 3, 3
  00f5f90  stfs 2, 12812(1)
  00f5f94  lvx 3, 1, 0
  00f5f98  li 0, 12800
  00f5f9c  vspltw 2, 2, 0
  00f5fa0  vspltw 3, 3, 0
  00f5fa4  vspltw 2, 2, 0
  00f5fa8  vspltw 3, 3, 0
  00f5fac  frsp 2, 3
  00f5fb0  vspltw 2, 2, 0
  00f5fb4  vspltw 3, 3, 0
  00f5fb8  vspltw 2, 2, 0
  00f5fbc  vspltw 3, 3, 0
  00f5fc0  fmuls 1, 2, 1
  00f5fc4  vspltw 3, 3, 0
  00f5fc8  vspltw 2, 2, 0
  00f5fcc  vspltw 3, 3, 0
  00f5fd0  vspltw 2, 2, 0
  00f5fd4  vspltw 3, 3, 0
  00f5fd8  vspltw 2, 2, 0
  00f5fdc  stfs 1, 12800(1)
  00f5fe0  stfs 1, 12804(1)
  00f5fe4  stfs 1, 12808(1)
  00f5fe8  stfs 1, 12812(1)
  00f5fec  lvx 4, 1, 0
  00f5ff0  vspltw 3, 3, 0
  00f5ff4  vspltw 4, 4, 0
  00f5ff8  vspltw 2, 2, 0
  00f5ffc  vspltw 3, 3, 0
  00f6000  vspltw 4, 4, 0
  00f6004  vspltw 2, 2, 0
  00f6008  vspltw 3, 3, 0
  00f600c  vspltw 4, 4, 0
  00f6010  vspltw 2, 2, 0
  00f6014  vspltw 3, 3, 0
  00f6018  vspltw 4, 4, 0
  00f601c  vspltw 2, 2, 0
  00f6020  vspltw 3, 3, 0
  00f6024  vspltw 4, 4, 0
  00f6028  vspltw 2, 2, 0
  00f602c  vspltw 3, 3, 0
  00f6030  vspltw 4, 4, 0
  00f6034  vspltw 2, 2, 0
  00f6038  vspltw 3, 3, 0
  00f603c  vspltw 4, 4, 0
  00f6040  vspltw 2, 2, 0
  00f6044  vspltw 3, 3, 0
  00f6048  vspltw 4, 4, 0
  00f604c  vspltw 2, 2, 0
  00f6050  vspltw 3, 3, 0
  00f6054  vspltw 4, 4, 0
  00f6058  vspltw 2, 2, 0
  00f605c  vspltw 3, 3, 0
  00f6060  vspltw 4, 4, 0
  00f6064  vspltw 2, 2, 0
  00f6068  vspltw 3, 3, 0
  00f606c  vspltw 4, 4, 0
  00f6070  vspltw 2, 2, 0
  00f6074  vspltw 3, 3, 0
  00f6078  vspltw 4, 4, 0
  00f607c  vspltw 2, 2, 0
  00f6080  vspltw 3, 3, 0
  00f6084  vspltw 4, 4, 0
  00f6088  vspltw 2, 2, 0
  00f608c  vspltw 3, 3, 0
  00f6090  vspltw 4, 4, 0
  00f6094  vspltw 2, 2, 0
  00f6098  vspltw 3, 3, 0
  00f609c  vspltw 4, 4, 0
  00f60a0  vspltw 2, 2, 0
  00f60a4  vspltw 3, 3, 0
  00f60a8  vspltw 4, 4, 0
  00f60ac  vspltw 2, 2, 0
  00f60b0  vspltw 3, 3, 0
  00f60b4  vspltw 4, 4, 0
  00f60b8  vspltw 2, 2, 0
  00f60bc  vspltw 3, 3, 0
  00f60c0  vspltw 4, 4, 0
  00f60c4  vspltw 2, 2, 0
  00f60c8  vspltw 3, 3, 0
  00f60cc  vspltw 4, 4, 0
  00f60d0  vspltw 2, 2, 0
  00f60d4  lbz 10, 6(11)
  00f60d8  vspltw 3, 3, 0
  00f60dc  vspltw 4, 4, 0
  00f60e0  vspltw 2, 2, 0
  00f60e4  slwi 9, 10, 6
  00f60e8  lbz 12, 7(11)
  00f60ec  vspltw 3, 3, 0
  00f60f0  vspltw 4, 4, 0
  00f60f4  extsb 12, 12
  00f60f8  vspltw 2, 2, 0
  00f60fc  addc 9, 30, 9
  00f6100  cmpwi 12, 0
  00f6104  vspltw 3, 3, 0
  00f6108  vspltw 4, 4, 0
  00f610c  clrldi 9, 9, 32
  00f6110  vspltw 2, 2, 0
  00f6114  vspltw 3, 3, 0
  00f6118  vspltw 4, 4, 0
  00f611c  vspltw 2, 2, 0
  00f6120  vspltw 3, 3, 0
  00f6124  vspltw 4, 4, 0
  00f6128  vspltw 3, 3, 0
  00f612c  vspltw 4, 4, 0
  00f6130  vspltw 3, 3, 0
  00f6134  vspltw 4, 4, 0
  00f6138  vspltw 3, 3, 0
  00f613c  vspltw 4, 4, 0
  00f6140  vspltw 3, 3, 0
  00f6144  vspltw 4, 4, 0
  00f6148  vspltw 4, 4, 0
  00f614c  vspltw 4, 4, 0
  00f6150  vspltw 4, 4, 0
  00f6154  vspltw 4, 4, 0
  00f6158  vspltw 4, 4, 0
  00f615c  vspltw 4, 4, 0
  00f6160  vspltw 4, 4, 0
  00f6164  bf 0, 0xf61a8
  00f6168  bf 6, 0xf6174
  00f616c  ori 5, 9, 0
  00f6170  b 0xf6178
  00f6174  stw 9, 12(4)
  00f6178  vspltw 2, 2, 0
  00f617c  ori 4, 9, 0
  00f6180  vspltw 3, 3, 0
  00f6184  li 9, 4
  00f6188  vspltw 4, 4, 0
  00f618c  li 10, 8
  00f6190  li 12, 1
  00f6194  stvewx 2, 0, 4
  00f6198  stvewx 3, 9, 4
  00f619c  stvewx 4, 10, 4
  00f61a0  stw 12, 28(4)
  00f61a4  b 0xf6234
  00f61a8  rlwinm 9, 10, 5, 19, 26
  00f61ac  addic 12, 1, 416
  00f61b0  addc 9, 12, 9
  00f61b4  bf 26, 0xf61d0
  00f61b8  slwi 3, 10, 5
  00f61bc  addic 10, 1, 416
  00f61c0  clrldi 28, 9, 32
  00f61c4  addc 3, 10, 3
  00f61c8  clrldi 3, 3, 32
  00f61cc  b 0xf61e8
  00f61d0  stw 9, 12(3)
  00f61d4  addic 10, 1, 416
  00f61d8  lbz 3, 6(11)
  00f61dc  slwi 3, 3, 5
  00f61e0  addc 3, 10, 3
  00f61e4  clrldi 3, 3, 32
  00f61e8  lbz 12, 6(11)
  00f61ec  addic 9, 1, 416
  00f61f0  vspltw 2, 2, 0
  00f61f4  slwi 12, 12, 5
  00f61f8  addic 10, 9, 4
  00f61fc  vspltw 3, 3, 0
  00f6200  addic 27, 9, 8
  00f6204  stvewx 2, 12, 9
  00f6208  lbz 9, 6(11)
  00f620c  vspltw 2, 4, 0
  00f6210  slwi 9, 9, 5
  00f6214  addc 9, 10, 9
  00f6218  clrldi 9, 9, 32
  00f621c  stvewx 3, 0, 9
  00f6220  lbz 9, 6(11)
  00f6224  slwi 9, 9, 5
  00f6228  addc 9, 27, 9
  00f622c  clrldi 9, 9, 32
  00f6230  stvewx 2, 0, 9
  00f6234  lwz 9, 140(23)
  00f6238  addic 8, 8, 1
  00f623c  addic 11, 11, 8
  00f6240  lhz 9, 10(9)
  00f6244  cmplw 8, 9
  00f6248  bt 0, 0xf5ef0
  00f624c  lwz 10, 140(23)
  00f6250  ori 9, 22, 0
  00f6254  ori 8, 9, 0
  00f6258  lhz 11, 12(10)
  00f625c  addc 11, 10, 11
  00f6260  lhz 10, 14(10)
  00f6264  clrldi 11, 11, 32
  00f6268  cmplw 10, 9
  00f626c  addic 11, 11, 16
  00f6270  bf 1, 0xf6534
  00f6274  lhz 10, 0(11)
  00f6278  extsh 10, 10
  00f627c  extsw 10, 10
  00f6280  li 0, 12800
  00f6284  std 10, 12816(1)
  00f6288  lfs 1, 100(21)
  00f628c  lhz 10, 2(11)
  00f6290  lhz 12, 4(11)
  00f6294  extsh 10, 10
  00f6298  lfd 2, 12816(1)
  00f629c  extsw 10, 10
  00f62a0  fcfid 2, 2
  00f62a4  extsh 12, 12
  00f62a8  std 10, 12816(1)
  00f62ac  extsw 10, 12
  00f62b0  frsp 2, 2
  00f62b4  cmpwi 6, 0
  00f62b8  fmuls 2, 2, 1
  00f62bc  lfd 3, 12816(1)
  00f62c0  fcfid 3, 3
  00f62c4  stfs 2, 12800(1)
  00f62c8  stfs 2, 12804(1)
  00f62cc  stfs 2, 12808(1)
  00f62d0  stfs 2, 12812(1)
  00f62d4  frsp 2, 3
  00f62d8  std 10, 12816(1)
  00f62dc  lvx 2, 1, 0
  00f62e0  li 0, 12800
  00f62e4  vspltw 2, 2, 0
  00f62e8  vspltw 2, 2, 0
  00f62ec  fmuls 2, 2, 1
  00f62f0  vspltw 2, 2, 0
  00f62f4  vspltw 2, 2, 0
  00f62f8  vspltw 2, 2, 0
  00f62fc  stfs 2, 12800(1)
  00f6300  lfd 3, 12816(1)
  00f6304  stfs 2, 12804(1)
  00f6308  fcfid 3, 3
  00f630c  stfs 2, 12808(1)
  00f6310  stfs 2, 12812(1)
  00f6314  lvx 3, 1, 0
  00f6318  li 0, 12800
  00f631c  vspltw 2, 2, 0
  00f6320  vspltw 3, 3, 0
  00f6324  vspltw 2, 2, 0
  00f6328  vspltw 3, 3, 0
  00f632c  frsp 2, 3
  00f6330  vspltw 2, 2, 0
  00f6334  vspltw 3, 3, 0
  00f6338  vspltw 2, 2, 0
  00f633c  vspltw 3, 3, 0
  00f6340  fmuls 1, 2, 1
  00f6344  vspltw 3, 3, 0
  00f6348  vspltw 2, 2, 0
  00f634c  vspltw 3, 3, 0
  00f6350  vspltw 2, 2, 0
  00f6354  vspltw 3, 3, 0
  00f6358  vspltw 2, 2, 0
  00f635c  stfs 1, 12800(1)
  00f6360  stfs 1, 12804(1)
  00f6364  stfs 1, 12808(1)
  00f6368  stfs 1, 12812(1)
  00f636c  lvx 4, 1, 0
  00f6370  vspltw 3, 3, 0
  00f6374  vspltw 4, 4, 0
  00f6378  vspltw 2, 2, 0
  00f637c  vspltw 3, 3, 0
  00f6380  vspltw 4, 4, 0
  00f6384  vspltw 2, 2, 0
  00f6388  vspltw 3, 3, 0
  00f638c  vspltw 4, 4, 0
  00f6390  vspltw 2, 2, 0
  00f6394  vspltw 3, 3, 0
  00f6398  vspltw 4, 4, 0
  00f639c  vspltw 2, 2, 0
  00f63a0  vspltw 3, 3, 0
  00f63a4  vspltw 4, 4, 0
  00f63a8  vspltw 2, 2, 0
  00f63ac  vspltw 3, 3, 0
  00f63b0  vspltw 4, 4, 0
  00f63b4  vspltw 2, 2, 0
  00f63b8  vspltw 3, 3, 0
  00f63bc  vspltw 4, 4, 0
  00f63c0  vspltw 2, 2, 0
  00f63c4  vspltw 3, 3, 0
  00f63c8  vspltw 4, 4, 0
  00f63cc  vspltw 2, 2, 0
  00f63d0  vspltw 3, 3, 0
  00f63d4  vspltw 4, 4, 0
  00f63d8  vspltw 2, 2, 0
  00f63dc  vspltw 3, 3, 0
  00f63e0  vspltw 4, 4, 0
  00f63e4  vspltw 2, 2, 0
  00f63e8  vspltw 3, 3, 0
  00f63ec  vspltw 4, 4, 0
  00f63f0  vspltw 2, 2, 0
  00f63f4  li 12, 32
  00f63f8  vspltw 3, 3, 0
  00f63fc  vspltw 4, 4, 0
  00f6400  vspltw 2, 2, 0
  00f6404  vspltw 3, 3, 0
  00f6408  vspltw 4, 4, 0
  00f640c  vspltw 2, 2, 0
  00f6410  vspltw 3, 3, 0
  00f6414  vspltw 4, 4, 0
  00f6418  vspltw 2, 2, 0
  00f641c  li 27, 36
  00f6420  vspltw 3, 3, 0
  00f6424  vspltw 4, 4, 0
  00f6428  vspltw 2, 2, 0
  00f642c  li 26, 40
  00f6430  vspltw 3, 3, 0
  00f6434  vspltw 4, 4, 0
  00f6438  vspltw 2, 2, 0
  00f643c  vspltw 3, 3, 0
  00f6440  vspltw 4, 4, 0
  00f6444  vspltw 2, 2, 0
  00f6448  lbz 10, 6(11)
  00f644c  vspltw 3, 3, 0
  00f6450  vspltw 4, 4, 0
  00f6454  extsb 10, 10
  00f6458  vspltw 2, 2, 0
  00f645c  sldi 10, 10, 6
  00f6460  vspltw 3, 3, 0
  00f6464  vspltw 4, 4, 0
  00f6468  vspltw 2, 2, 0
  00f646c  addc 10, 30, 10
  00f6470  vspltw 3, 3, 0
  00f6474  vspltw 4, 4, 0
  00f6478  vspltw 2, 2, 0
  00f647c  clrldi 10, 10, 32
  00f6480  vspltw 3, 3, 0
  00f6484  vspltw 4, 4, 0
  00f6488  vspltw 2, 2, 0
  00f648c  vspltw 3, 3, 0
  00f6490  vspltw 4, 4, 0
  00f6494  vspltw 2, 2, 0
  00f6498  vspltw 3, 3, 0
  00f649c  vspltw 4, 4, 0
  00f64a0  vspltw 2, 2, 0
  00f64a4  vspltw 3, 3, 0
  00f64a8  vspltw 4, 4, 0
  00f64ac  vspltw 2, 2, 0
  00f64b0  vspltw 3, 3, 0
  00f64b4  vspltw 4, 4, 0
  00f64b8  vspltw 3, 3, 0
  00f64bc  vspltw 4, 4, 0
  00f64c0  stvewx 2, 12, 10
  00f64c4  vspltw 3, 3, 0
  00f64c8  vspltw 4, 4, 0
  00f64cc  vspltw 3, 3, 0
  00f64d0  vspltw 4, 4, 0
  00f64d4  vspltw 3, 3, 0
  00f64d8  vspltw 4, 4, 0
  00f64dc  vspltw 4, 4, 0
  00f64e0  stvewx 3, 27, 10
  00f64e4  vspltw 4, 4, 0
  00f64e8  vspltw 4, 4, 0
  00f64ec  vspltw 4, 4, 0
  00f64f0  vspltw 4, 4, 0
  00f64f4  vspltw 2, 4, 0
  00f64f8  vspltw 2, 2, 0
  00f64fc  stvewx 2, 26, 10
  00f6500  bf 2, 0xf6510
  00f6504  ori 8, 10, 0
  00f6508  ori 6, 8, 0
  00f650c  b 0xf651c
  00f6510  stw 10, 60(8)
  00f6514  ori 8, 10, 0
  00f6518  stw 22, 60(8)
  00f651c  lwz 10, 140(23)
  00f6520  addic 9, 9, 1
  00f6524  addic 11, 11, 8
  00f6528  lhz 10, 14(10)
  00f652c  cmplw 9, 10
  00f6530  bt 0, 0xf6274
  00f6534  lwz 9, 144(23)
  00f6538  ori 12, 22, 0
  00f653c  lhz 10, 8(9)
  00f6540  lhz 11, 10(9)
  00f6544  addc 9, 9, 10
  00f6548  cmplw 11, 12
  00f654c  clrldi 9, 9, 32
  00f6550  addic 9, 9, 16
  00f6554  bf 1, 0xf68f0
  00f6558  lhz 10, 0(9)
  00f655c  slwi 10, 10, 3
  00f6560  extsw 10, 10
  00f6564  li 0, 12800
  00f6568  std 10, 12816(1)
  00f656c  lfs 1, 96(21)
  00f6570  lhz 10, 2(9)
  00f6574  lhz 11, 4(9)
  00f6578  slwi 10, 10, 3
  00f657c  lfd 2, 12816(1)
  00f6580  extsw 10, 10
  00f6584  fcfid 2, 2
  00f6588  std 10, 12816(1)
  00f658c  slwi 10, 11, 3
  00f6590  extsw 10, 10
  00f6594  frsp 2, 2
  00f6598  fmuls 2, 2, 1
  00f659c  lfd 3, 12816(1)
  00f65a0  fcfid 3, 3
  00f65a4  stfs 2, 12800(1)
  00f65a8  stfs 2, 12804(1)
  00f65ac  stfs 2, 12808(1)
  00f65b0  stfs 2, 12812(1)
  00f65b4  std 10, 12816(1)
  00f65b8  frsp 2, 3
  00f65bc  lvx 2, 1, 0
  00f65c0  li 0, 12800
  00f65c4  vspltw 2, 2, 0
  00f65c8  vspltw 2, 2, 0
  00f65cc  fmuls 2, 2, 1
  00f65d0  vspltw 2, 2, 0
  00f65d4  vspltw 2, 2, 0
  00f65d8  vspltw 2, 2, 0
  00f65dc  stfs 2, 12800(1)
  00f65e0  stfs 2, 12804(1)
  00f65e4  lfd 3, 12816(1)
  00f65e8  stfs 2, 12808(1)
  00f65ec  fcfid 3, 3
  00f65f0  stfs 2, 12812(1)
  00f65f4  lvx 3, 1, 0
  00f65f8  li 0, 12800
  00f65fc  vspltw 2, 2, 0
  00f6600  vspltw 3, 3, 0
  00f6604  vspltw 2, 2, 0
  00f6608  vspltw 3, 3, 0
  00f660c  frsp 2, 3
  00f6610  vspltw 2, 2, 0
  00f6614  vspltw 3, 3, 0
  00f6618  vspltw 2, 2, 0
  00f661c  vspltw 3, 3, 0
  00f6620  fmuls 1, 2, 1
  00f6624  vspltw 3, 3, 0
  00f6628  vspltw 2, 2, 0
  00f662c  vspltw 3, 3, 0
  00f6630  vspltw 2, 2, 0
  00f6634  vspltw 3, 3, 0
  00f6638  vspltw 2, 2, 0
  00f663c  stfs 1, 12800(1)
  00f6640  stfs 1, 12804(1)
  00f6644  stfs 1, 12808(1)
  00f6648  stfs 1, 12812(1)
  00f664c  lvx 4, 1, 0
  00f6650  vspltw 3, 3, 0
  00f6654  vspltw 4, 4, 0
  00f6658  vspltw 2, 2, 0
  00f665c  vspltw 3, 3, 0
  00f6660  vspltw 4, 4, 0
  00f6664  vspltw 2, 2, 0
  00f6668  vspltw 3, 3, 0
  00f666c  vspltw 4, 4, 0
  00f6670  vspltw 2, 2, 0
  00f6674  vspltw 3, 3, 0
  00f6678  vspltw 4, 4, 0
  00f667c  vspltw 2, 2, 0
  00f6680  vspltw 3, 3, 0
  00f6684  vspltw 4, 4, 0
  00f6688  vspltw 2, 2, 0
  00f668c  vspltw 3, 3, 0
  00f6690  vspltw 4, 4, 0
  00f6694  vspltw 2, 2, 0
  00f6698  vspltw 3, 3, 0
  00f669c  vspltw 4, 4, 0
  00f66a0  vspltw 2, 2, 0
  00f66a4  vspltw 3, 3, 0
  00f66a8  vspltw 4, 4, 0
  00f66ac  vspltw 2, 2, 0
  00f66b0  vspltw 3, 3, 0
  00f66b4  vspltw 4, 4, 0
  00f66b8  vspltw 2, 2, 0
  00f66bc  vspltw 3, 3, 0
  00f66c0  vspltw 4, 4, 0
  00f66c4  vspltw 2, 2, 0
  00f66c8  vspltw 3, 3, 0
  00f66cc  vspltw 4, 4, 0
  00f66d0  vspltw 2, 2, 0
  00f66d4  vspltw 3, 3, 0
  00f66d8  vspltw 4, 4, 0
  00f66dc  vspltw 2, 2, 0
  00f66e0  vspltw 3, 3, 0
  00f66e4  vspltw 4, 4, 0
  00f66e8  vspltw 2, 2, 0
  00f66ec  vspltw 3, 3, 0
  00f66f0  vspltw 4, 4, 0
  00f66f4  vspltw 2, 2, 0
  00f66f8  vspltw 3, 3, 0
  00f66fc  vspltw 4, 4, 0
  00f6700  vspltw 2, 2, 0
  00f6704  vspltw 3, 3, 0
  00f6708  vspltw 4, 4, 0
  00f670c  vspltw 2, 2, 0
  00f6710  vspltw 3, 3, 0
  00f6714  vspltw 4, 4, 0
  00f6718  vspltw 2, 2, 0
  00f671c  vspltw 3, 3, 0
  00f6720  vspltw 4, 4, 0
  00f6724  vspltw 2, 2, 0
  00f6728  vspltw 3, 3, 0
  00f672c  vspltw 4, 4, 0
  00f6730  vspltw 2, 2, 0
  00f6734  lbz 10, 7(9)
  00f6738  vspltw 3, 3, 0
  00f673c  vspltw 4, 4, 0
  00f6740  vspltw 2, 2, 0
  00f6744  extsb 10, 10
  00f6748  vspltw 3, 3, 0
  00f674c  vspltw 4, 4, 0
  00f6750  vspltw 2, 2, 0
  00f6754  cmpwi 10, 0
  00f6758  vspltw 3, 3, 0
  00f675c  vspltw 4, 4, 0
  00f6760  vspltw 2, 2, 0
  00f6764  vspltw 3, 3, 0
  00f6768  vspltw 4, 4, 0
  00f676c  vspltw 2, 2, 0
  00f6770  vspltw 3, 3, 0
  00f6774  vspltw 4, 4, 0
  00f6778  vspltw 3, 3, 0
  00f677c  vspltw 4, 4, 0
  00f6780  vspltw 3, 3, 0
  00f6784  vspltw 4, 4, 0
  00f6788  vspltw 3, 3, 0
  00f678c  vspltw 4, 4, 0
  00f6790  vspltw 3, 3, 0
  00f6794  vspltw 4, 4, 0
  00f6798  vspltw 4, 4, 0
  00f679c  vspltw 4, 4, 0
  00f67a0  vspltw 4, 4, 0
  00f67a4  vspltw 4, 4, 0
  00f67a8  vspltw 4, 4, 0
  00f67ac  vspltw 4, 4, 0
  00f67b0  vspltw 4, 4, 0
  00f67b4  bf 0, 0xf6820
  00f67b8  lbz 10, 6(9)
  00f67bc  li 11, 16
  00f67c0  vspltw 2, 2, 0
  00f67c4  li 27, 20
  00f67c8  slwi 10, 10, 6
  00f67cc  vspltw 3, 3, 0
  00f67d0  vspltw 4, 4, 0
  00f67d4  li 26, 24
  00f67d8  addc 10, 30, 10
  00f67dc  li 25, 1
  00f67e0  clrldi 10, 10, 32
  00f67e4  cmpwi 1, 5, 0
  00f67e8  stvewx 2, 11, 10
  00f67ec  stvewx 3, 27, 10
  00f67f0  stvewx 4, 26, 10
  00f67f4  lwz 11, 12(10)
  00f67f8  stw 25, 28(10)
  00f67fc  cmpwi 11, 0
  00f6800  bf 2, 0xf68d8
  00f6804  bf 6, 0xf6814
  00f6808  ori 5, 10, 0
  00f680c  ori 4, 5, 0
  00f6810  b 0xf68d8
  00f6814  stw 10, 12(4)
  00f6818  ori 4, 10, 0
  00f681c  b 0xf68d8
  00f6820  addic 10, 1, 416
  00f6824  lbz 27, 6(9)
  00f6828  vspltw 2, 2, 0
  00f682c  addic 11, 10, 16
  00f6830  slwi 27, 27, 5
  00f6834  vspltw 3, 3, 0
  00f6838  addic 26, 10, 20
  00f683c  addc 11, 11, 27
  00f6840  addic 27, 10, 24
  00f6844  clrldi 11, 11, 32
  00f6848  cmpwi 1, 28, 0
  00f684c  stvewx 2, 0, 11
  00f6850  lbz 11, 6(9)
  00f6854  vspltw 2, 4, 0
  00f6858  slwi 11, 11, 5
  00f685c  addc 11, 26, 11
  00f6860  addic 26, 10, 28
  00f6864  clrldi 11, 11, 32
  00f6868  stvewx 3, 0, 11
  00f686c  lbz 10, 6(9)
  00f6870  slwi 10, 10, 5
  00f6874  addc 10, 27, 10
  00f6878  clrldi 10, 10, 32
  00f687c  stvewx 2, 0, 10
  00f6880  lbz 10, 6(9)
  00f6884  slwi 11, 10, 5
  00f6888  addc 27, 26, 11
  00f688c  clrldi 27, 27, 32
  00f6890  lwz 27, 0(27)
  00f6894  cmpwi 27, 0
  00f6898  bf 2, 0xf68d8
  00f689c  rlwinm 10, 10, 5, 19, 26
  00f68a0  addic 27, 1, 416
  00f68a4  addc 10, 27, 10
  00f68a8  bf 6, 0xf68c0
  00f68ac  addic 3, 1, 416
  00f68b0  clrldi 28, 10, 32
  00f68b4  addc 3, 3, 11
  00f68b8  clrldi 3, 3, 32
  00f68bc  b 0xf68d8
  00f68c0  stw 10, 12(3)
  00f68c4  addic 11, 1, 416
  00f68c8  lbz 3, 6(9)
  00f68cc  slwi 3, 3, 5
  00f68d0  addc 3, 11, 3
  00f68d4  clrldi 3, 3, 32
  00f68d8  lwz 10, 144(23)
  00f68dc  addic 12, 12, 1
  00f68e0  addic 9, 9, 8
  00f68e4  lhz 10, 10(10)
  00f68e8  cmplw 12, 10
  00f68ec  bt 0, 0xf6558
  00f68f0  cmpwi 4, 0
  00f68f4  cmpwi 1, 3, 0
  00f68f8  bt 2, 0xf6900
  00f68fc  stw 22, 12(4)
  00f6900  bt 6, 0xf6908
  00f6904  stw 22, 12(3)
  00f6908  lwz 3, 144(23)
  00f690c  ori 9, 22, 0
  00f6910  lhz 4, 12(3)
  00f6914  addc 4, 3, 4
  00f6918  lhz 3, 14(3)
  00f691c  cmplw 3, 9
  00f6920  clrldi 3, 4, 32
  00f6924  addic 3, 3, 16
  00f6928  bf 1, 0xf6bf8
  00f692c  lhz 4, 0(3)
  00f6930  extsh 4, 4
  00f6934  extsw 4, 4
  00f6938  li 0, 12800
  00f693c  std 4, 12816(1)
  00f6940  lfs 1, 100(21)
  00f6944  lhz 4, 2(3)
  00f6948  lhz 10, 4(3)
  00f694c  extsh 4, 4
  00f6950  lfd 2, 12816(1)
  00f6954  extsw 4, 4
  00f6958  fcfid 2, 2
  00f695c  extsh 10, 10
  00f6960  std 4, 12816(1)
  00f6964  extsw 4, 10
  00f6968  frsp 2, 2
  00f696c  cmpwi 1, 6, 0
  00f6970  fmuls 2, 2, 1
  00f6974  lfd 3, 12816(1)
  00f6978  fcfid 3, 3
  00f697c  stfs 2, 12800(1)
  00f6980  stfs 2, 12804(1)
  00f6984  stfs 2, 12808(1)
  00f6988  stfs 2, 12812(1)
  00f698c  frsp 2, 3
  00f6990  std 4, 12816(1)
  00f6994  lvx 2, 1, 0
  00f6998  li 0, 12800
  00f699c  vspltw 2, 2, 0
  00f69a0  vspltw 2, 2, 0
  00f69a4  fmuls 2, 2, 1
  00f69a8  vspltw 2, 2, 0
  00f69ac  vspltw 2, 2, 0
  00f69b0  vspltw 2, 2, 0
  00f69b4  stfs 2, 12800(1)
  00f69b8  lfd 3, 12816(1)
  00f69bc  stfs 2, 12804(1)
  00f69c0  fcfid 3, 3
  00f69c4  stfs 2, 12808(1)
  00f69c8  stfs 2, 12812(1)
  00f69cc  lvx 3, 1, 0
  00f69d0  li 0, 12800
  00f69d4  vspltw 2, 2, 0
  00f69d8  vspltw 3, 3, 0
  00f69dc  vspltw 2, 2, 0
  00f69e0  vspltw 3, 3, 0
  00f69e4  frsp 2, 3
  00f69e8  vspltw 2, 2, 0
  00f69ec  vspltw 3, 3, 0
  00f69f0  vspltw 2, 2, 0
  00f69f4  vspltw 3, 3, 0
  00f69f8  fmuls 1, 2, 1
  00f69fc  vspltw 3, 3, 0
  00f6a00  vspltw 2, 2, 0
  00f6a04  vspltw 3, 3, 0
  00f6a08  vspltw 2, 2, 0
  00f6a0c  vspltw 3, 3, 0
  00f6a10  vspltw 2, 2, 0
  00f6a14  stfs 1, 12800(1)
  00f6a18  stfs 1, 12804(1)
  00f6a1c  stfs 1, 12808(1)
  00f6a20  stfs 1, 12812(1)
  00f6a24  lvx 4, 1, 0
  00f6a28  vspltw 3, 3, 0
  00f6a2c  vspltw 4, 4, 0
  00f6a30  vspltw 2, 2, 0
  00f6a34  vspltw 3, 3, 0
  00f6a38  vspltw 4, 4, 0
  00f6a3c  vspltw 2, 2, 0
  00f6a40  vspltw 3, 3, 0
  00f6a44  vspltw 4, 4, 0
  00f6a48  vspltw 2, 2, 0
  00f6a4c  vspltw 3, 3, 0
  00f6a50  vspltw 4, 4, 0
  00f6a54  vspltw 2, 2, 0
  00f6a58  vspltw 3, 3, 0
  00f6a5c  vspltw 4, 4, 0
  00f6a60  vspltw 2, 2, 0
  00f6a64  vspltw 3, 3, 0
  00f6a68  vspltw 4, 4, 0
  00f6a6c  vspltw 2, 2, 0
  00f6a70  vspltw 3, 3, 0
  00f6a74  vspltw 4, 4, 0
  00f6a78  vspltw 2, 2, 0
  00f6a7c  vspltw 3, 3, 0
  00f6a80  vspltw 4, 4, 0
  00f6a84  vspltw 2, 2, 0
  00f6a88  vspltw 3, 3, 0
  00f6a8c  vspltw 4, 4, 0
  00f6a90  vspltw 2, 2, 0
  00f6a94  vspltw 3, 3, 0
  00f6a98  vspltw 4, 4, 0
  00f6a9c  vspltw 2, 2, 0
  00f6aa0  vspltw 3, 3, 0
  00f6aa4  vspltw 4, 4, 0
  00f6aa8  vspltw 2, 2, 0
  00f6aac  li 10, 48
  00f6ab0  vspltw 3, 3, 0
  00f6ab4  vspltw 4, 4, 0
  00f6ab8  vspltw 2, 2, 0
  00f6abc  vspltw 3, 3, 0
  00f6ac0  vspltw 4, 4, 0
  00f6ac4  vspltw 2, 2, 0
  00f6ac8  vspltw 3, 3, 0
  00f6acc  vspltw 4, 4, 0
  00f6ad0  vspltw 2, 2, 0
  00f6ad4  li 11, 52
  00f6ad8  vspltw 3, 3, 0
  00f6adc  vspltw 4, 4, 0
  00f6ae0  vspltw 2, 2, 0
  00f6ae4  li 12, 56
  00f6ae8  vspltw 3, 3, 0
  00f6aec  vspltw 4, 4, 0
  00f6af0  vspltw 2, 2, 0
  00f6af4  vspltw 3, 3, 0
  00f6af8  vspltw 4, 4, 0
  00f6afc  vspltw 2, 2, 0
  00f6b00  lbz 4, 6(3)
  00f6b04  vspltw 3, 3, 0
  00f6b08  vspltw 4, 4, 0
  00f6b0c  extsb 4, 4
  00f6b10  vspltw 2, 2, 0
  00f6b14  sldi 4, 4, 6
  00f6b18  vspltw 3, 3, 0
  00f6b1c  vspltw 4, 4, 0
  00f6b20  vspltw 2, 2, 0
  00f6b24  addc 4, 30, 4
  00f6b28  vspltw 3, 3, 0
  00f6b2c  vspltw 4, 4, 0
  00f6b30  vspltw 2, 2, 0
  00f6b34  clrldi 4, 4, 32
  00f6b38  vspltw 3, 3, 0
  00f6b3c  vspltw 4, 4, 0
  00f6b40  vspltw 2, 2, 0
  00f6b44  vspltw 3, 3, 0
  00f6b48  vspltw 4, 4, 0
  00f6b4c  vspltw 2, 2, 0
  00f6b50  vspltw 3, 3, 0
  00f6b54  vspltw 4, 4, 0
  00f6b58  vspltw 2, 2, 0
  00f6b5c  vspltw 3, 3, 0
  00f6b60  vspltw 4, 4, 0
  00f6b64  vspltw 2, 2, 0
  00f6b68  vspltw 3, 3, 0
  00f6b6c  vspltw 4, 4, 0
  00f6b70  vspltw 3, 3, 0
  00f6b74  vspltw 4, 4, 0
  00f6b78  stvewx 2, 10, 4
  00f6b7c  vspltw 3, 3, 0
  00f6b80  vspltw 4, 4, 0
  00f6b84  vspltw 3, 3, 0
  00f6b88  vspltw 4, 4, 0
  00f6b8c  vspltw 3, 3, 0
  00f6b90  vspltw 4, 4, 0
  00f6b94  vspltw 4, 4, 0
  00f6b98  stvewx 3, 11, 4
  00f6b9c  vspltw 4, 4, 0
  00f6ba0  vspltw 4, 4, 0
  00f6ba4  vspltw 4, 4, 0
  00f6ba8  vspltw 4, 4, 0
  00f6bac  vspltw 2, 4, 0
  00f6bb0  vspltw 2, 2, 0
  00f6bb4  stvewx 2, 12, 4
  00f6bb8  lwz 10, 60(4)
  00f6bbc  cmpwi 10, 0
  00f6bc0  bf 2, 0xf6be0
  00f6bc4  bf 6, 0xf6bd4
  00f6bc8  ori 8, 4, 0
  00f6bcc  ori 6, 8, 0
  00f6bd0  b 0xf6be0
  00f6bd4  stw 4, 60(8)
  00f6bd8  ori 8, 4, 0
  00f6bdc  stw 22, 60(8)
  00f6be0  lwz 4, 144(23)
  00f6be4  addic 9, 9, 1
  00f6be8  addic 3, 3, 8
  00f6bec  lhz 4, 14(4)
  00f6bf0  cmplw 9, 4
  00f6bf4  bt 0, 0xf692c
  00f6bf8  cmpwi 5, 0
  00f6bfc  bt 2, 0xf6c38
  00f6c00  ori 3, 5, 0
  00f6c04  vspltisw 2, 0
  00f6c08  li 4, 16
  00f6c0c  li 8, 80
  00f6c10  lvx 3, 0, 3
  00f6c14  vmaddfp 2, 3, 31, 2
  00f6c18  lvx 3, 4, 3
  00f6c1c  lwz 5, 12(5)
  00f6c20  lvx 4, 8, 21
  00f6c24  cmpwi 5, 0
  00f6c28  vmaddfp 2, 3, 30, 2
  00f6c2c  vsel 2, 2, 3, 4
  00f6c30  stvx 2, 4, 3
  00f6c34  bf 2, 0xf6c00
  00f6c38  cmpwi 6, 0
  00f6c3c  bt 2, 0xf6c7c
  00f6c40  ori 3, 6, 0
  00f6c44  vspltisw 2, 0
  00f6c48  li 4, 32
  00f6c4c  li 5, 48
  00f6c50  lvx 3, 4, 3
  00f6c54  lvx 4, 5, 3
  00f6c58  vmaddfp 2, 3, 31, 2
  00f6c5c  li 5, 80
  00f6c60  lwz 6, 60(6)
  00f6c64  cmpwi 6, 0
  00f6c68  lvx 5, 5, 21
  00f6c6c  vmaddfp 2, 4, 30, 2
  00f6c70  vsel 2, 2, 3, 5
  00f6c74  stvx 2, 4, 3
  00f6c78  bf 2, 0xf6c40
  00f6c7c  lbz 3, 148(23)
  00f6c80  cmpwi 3, 0
  00f6c84  bt 2, 0xf6d0c
  00f6c88  ori 6, 22, 0
  00f6c8c  lwz 3, 140(23)
  00f6c90  lwz 4, 144(23)
  00f6c94  ori 5, 30, 0
  00f6c98  cmplw 7, 6
  00f6c9c  addic 3, 3, 16
  00f6ca0  addic 4, 4, 16
  00f6ca4  bf 1, 0xf75d4
  00f6ca8  lvx 3, 0, 3
  00f6cac  li 8, 64
  00f6cb0  lvx 5, 0, 4
  00f6cb4  vupkhsh 4, 3
  00f6cb8  vupklsh 3, 3
  00f6cbc  addic 6, 6, 1
  00f6cc0  vspltisw 2, 0
  00f6cc4  vupkhsh 6, 5
  00f6cc8  vcfsx 4, 4, 15
  00f6ccc  vupklsh 5, 5
  00f6cd0  vcfsx 3, 3, 15
  00f6cd4  cmplw 6, 7
  00f6cd8  addic 4, 4, 16
  00f6cdc  vcfsx 6, 6, 15
  00f6ce0  vcfsx 5, 5, 15
  00f6ce4  addic 3, 3, 16
  00f6ce8  vmaddfp 4, 4, 31, 2
  00f6cec  vmaddfp 2, 3, 31, 2
  00f6cf0  vmaddfp 3, 6, 30, 4
  00f6cf4  vmaddfp 2, 5, 30, 2
  00f6cf8  stvx 3, 0, 5
  00f6cfc  stvx 2, 8, 5
  00f6d00  addic 5, 5, 128
  00f6d04  bt 0, 0xf6ca8
  00f6d08  b 0xf75d4
  00f6d0c  lwz 27, 140(23)
  00f6d10  lwz 26, 144(23)
  00f6d14  ori 24, 22, 0
  00f6d18  lwz 3, 104(23)
  00f6d1c  ori 25, 30, 0
  00f6d20  addic 27, 27, 16
  00f6d24  cmplw 3, 24
  00f6d28  addic 26, 26, 16
  00f6d2c  bf 1, 0xf75d4
  00f6d30  lhz 3, 0(27)
  00f6d34  li 0, 12800
  00f6d38  extsh 3, 3
  00f6d3c  extsw 3, 3
  00f6d40  std 3, 12816(1)
  00f6d44  lfs 1, 96(21)
  00f6d48  lfd 2, 12816(1)
  00f6d4c  fcfid 2, 2
  00f6d50  addic 3, 1, 112
  00f6d54  frsp 2, 2
  00f6d58  fmuls 2, 2, 1
  00f6d5c  stfs 2, 12800(1)
  00f6d60  stfs 2, 12804(1)
  00f6d64  stfs 2, 12808(1)
  00f6d68  stfs 2, 12812(1)
  00f6d6c  lvx 2, 1, 0
  00f6d70  vspltw 2, 2, 0
  00f6d74  vspltw 2, 2, 0
  00f6d78  vspltw 2, 2, 0
  00f6d7c  vspltw 2, 2, 0
  00f6d80  vspltw 2, 2, 0
  00f6d84  vspltw 2, 2, 0
  00f6d88  vspltw 2, 2, 0
  00f6d8c  vspltw 2, 2, 0
  00f6d90  vspltw 2, 2, 0
  00f6d94  vspltw 2, 2, 0
  00f6d98  vspltw 2, 2, 0
  00f6d9c  vspltw 2, 2, 0
  00f6da0  vspltw 2, 2, 0
  00f6da4  vspltw 2, 2, 0
  00f6da8  vspltw 2, 2, 0
  00f6dac  vspltw 2, 2, 0
  00f6db0  vspltw 2, 2, 0
  00f6db4  vspltw 2, 2, 0
  00f6db8  vspltw 2, 2, 0
  00f6dbc  vspltw 2, 2, 0
  00f6dc0  vspltw 2, 2, 0
  00f6dc4  vspltw 2, 2, 0
  00f6dc8  vspltw 2, 2, 0
  00f6dcc  vspltw 2, 2, 0
  00f6dd0  vspltw 2, 2, 0
  00f6dd4  vspltw 2, 2, 0
  00f6dd8  vspltw 2, 2, 0
  00f6ddc  vspltw 2, 2, 0
  00f6de0  vspltw 2, 2, 0
  00f6de4  vspltw 2, 2, 0
  00f6de8  vspltw 2, 2, 0
  00f6dec  vspltw 2, 2, 0
  00f6df0  vspltw 2, 2, 0
  00f6df4  vspltw 2, 2, 0
  00f6df8  vspltw 2, 2, 0
  00f6dfc  vspltw 2, 2, 0
  00f6e00  stvewx 2, 0, 3
  00f6e04  lhz 3, 2(27)
  00f6e08  extsh 3, 3
  00f6e0c  extsw 3, 3
  00f6e10  li 0, 12800
  00f6e14  std 3, 12816(1)
  00f6e18  addic 3, 1, 116
  00f6e1c  lfd 3, 12816(1)
  00f6e20  fcfid 3, 3
  00f6e24  frsp 3, 3
  00f6e28  fmuls 3, 3, 1
  00f6e2c  stfs 3, 12800(1)
  00f6e30  stfs 3, 12804(1)
  00f6e34  stfs 3, 12808(1)
  00f6e38  stfs 3, 12812(1)
  00f6e3c  lvx 2, 1, 0
  00f6e40  vspltw 2, 2, 0
  00f6e44  vspltw 2, 2, 0
  00f6e48  vspltw 2, 2, 0
  00f6e4c  vspltw 2, 2, 0
  00f6e50  vspltw 2, 2, 0
  00f6e54  vspltw 2, 2, 0
  00f6e58  vspltw 2, 2, 0
  00f6e5c  vspltw 2, 2, 0
  00f6e60  vspltw 2, 2, 0
  00f6e64  vspltw 2, 2, 0
  00f6e68  vspltw 2, 2, 0
  00f6e6c  vspltw 2, 2, 0
  00f6e70  vspltw 2, 2, 0
  00f6e74  vspltw 2, 2, 0
  00f6e78  vspltw 2, 2, 0
  00f6e7c  vspltw 2, 2, 0
  00f6e80  vspltw 2, 2, 0
  00f6e84  vspltw 2, 2, 0
  00f6e88  vspltw 2, 2, 0
  00f6e8c  vspltw 2, 2, 0
  00f6e90  vspltw 2, 2, 0
  00f6e94  vspltw 2, 2, 0
  00f6e98  vspltw 2, 2, 0
  00f6e9c  vspltw 2, 2, 0
  00f6ea0  vspltw 2, 2, 0
  00f6ea4  vspltw 2, 2, 0
  00f6ea8  vspltw 2, 2, 0
  00f6eac  vspltw 2, 2, 0
  00f6eb0  vspltw 2, 2, 0
  00f6eb4  vspltw 2, 2, 0
  00f6eb8  vspltw 2, 2, 0
  00f6ebc  vspltw 2, 2, 0
  00f6ec0  vspltw 2, 2, 0
  00f6ec4  vspltw 2, 2, 0
  00f6ec8  vspltw 2, 2, 0
  00f6ecc  vspltw 2, 2, 0
  00f6ed0  stvewx 2, 0, 3
  00f6ed4  lhz 3, 4(27)
  00f6ed8  extsh 3, 3
  00f6edc  extsw 3, 3
  00f6ee0  li 0, 12800
  00f6ee4  std 3, 12816(1)
  00f6ee8  addic 3, 1, 120
  00f6eec  lfd 4, 12816(1)
  00f6ef0  fcfid 4, 4
  00f6ef4  frsp 4, 4
  00f6ef8  fmuls 4, 4, 1
  00f6efc  stfs 4, 12800(1)
  00f6f00  stfs 4, 12804(1)
  00f6f04  stfs 4, 12808(1)
  00f6f08  stfs 4, 12812(1)
  00f6f0c  lvx 2, 1, 0
  00f6f10  vspltw 2, 2, 0
  00f6f14  vspltw 2, 2, 0
  00f6f18  vspltw 2, 2, 0
  00f6f1c  vspltw 2, 2, 0
  00f6f20  vspltw 2, 2, 0
  00f6f24  vspltw 2, 2, 0
  00f6f28  vspltw 2, 2, 0
  00f6f2c  vspltw 2, 2, 0
  00f6f30  vspltw 2, 2, 0
  00f6f34  vspltw 2, 2, 0
  00f6f38  vspltw 2, 2, 0
  00f6f3c  vspltw 2, 2, 0
  00f6f40  vspltw 2, 2, 0
  00f6f44  vspltw 2, 2, 0
  00f6f48  vspltw 2, 2, 0
  00f6f4c  vspltw 2, 2, 0
  00f6f50  vspltw 2, 2, 0
  00f6f54  vspltw 2, 2, 0
  00f6f58  vspltw 2, 2, 0
  00f6f5c  vspltw 2, 2, 0
  00f6f60  vspltw 2, 2, 0
  00f6f64  vspltw 2, 2, 0
  00f6f68  vspltw 2, 2, 0
  00f6f6c  vspltw 2, 2, 0
  00f6f70  vspltw 2, 2, 0
  00f6f74  vspltw 2, 2, 0
  00f6f78  vspltw 2, 2, 0
  00f6f7c  vspltw 2, 2, 0
  00f6f80  vspltw 2, 2, 0
  00f6f84  vspltw 2, 2, 0
  00f6f88  vspltw 2, 2, 0
  00f6f8c  vspltw 2, 2, 0
  00f6f90  vspltw 2, 2, 0
  00f6f94  vspltw 2, 2, 0
  00f6f98  vspltw 2, 2, 0
  00f6f9c  vspltw 2, 2, 0
  00f6fa0  stvewx 2, 0, 3
  00f6fa4  lhz 3, 6(27)
  00f6fa8  extsh 3, 3
  00f6fac  extsw 3, 3
  00f6fb0  li 0, 12800
  00f6fb4  std 3, 12816(1)
  00f6fb8  addic 3, 1, 124
  00f6fbc  lfd 5, 12816(1)
  00f6fc0  fcfid 5, 5
  00f6fc4  frsp 5, 5
  00f6fc8  fmuls 5, 5, 1
  00f6fcc  stfs 5, 12800(1)
  00f6fd0  stfs 5, 12804(1)
  00f6fd4  stfs 5, 12808(1)
  00f6fd8  stfs 5, 12812(1)
  00f6fdc  lvx 2, 1, 0
  00f6fe0  vspltw 2, 2, 0
  00f6fe4  vspltw 2, 2, 0
  00f6fe8  vspltw 2, 2, 0
  00f6fec  vspltw 2, 2, 0
  00f6ff0  vspltw 2, 2, 0
  00f6ff4  vspltw 2, 2, 0
  00f6ff8  vspltw 2, 2, 0
  00f6ffc  vspltw 2, 2, 0
  00f7000  vspltw 2, 2, 0
  00f7004  vspltw 2, 2, 0
  00f7008  vspltw 2, 2, 0
  00f700c  vspltw 2, 2, 0
  00f7010  vspltw 2, 2, 0
  00f7014  vspltw 2, 2, 0
  00f7018  vspltw 2, 2, 0
  00f701c  vspltw 2, 2, 0
  00f7020  vspltw 2, 2, 0
  00f7024  vspltw 2, 2, 0
  00f7028  vspltw 2, 2, 0
  00f702c  vspltw 2, 2, 0
  00f7030  vspltw 2, 2, 0
  00f7034  vspltw 2, 2, 0
  00f7038  vspltw 2, 2, 0
  00f703c  vspltw 2, 2, 0
  00f7040  vspltw 2, 2, 0
  00f7044  vspltw 2, 2, 0
  00f7048  vspltw 2, 2, 0
  00f704c  vspltw 2, 2, 0
  00f7050  vspltw 2, 2, 0
  00f7054  vspltw 2, 2, 0
  00f7058  vspltw 2, 2, 0
  00f705c  vspltw 2, 2, 0
  00f7060  vspltw 2, 2, 0
  00f7064  vspltw 2, 2, 0
  00f7068  vspltw 2, 2, 0
  00f706c  vspltw 2, 2, 0
  00f7070  stvewx 2, 0, 3
  00f7074  lhz 3, 0(26)
  00f7078  extsh 3, 3
  00f707c  extsw 3, 3
  00f7080  li 0, 12800
  00f7084  std 3, 12816(1)
  00f7088  addic 3, 1, 128
  00f708c  lfd 6, 12816(1)
  00f7090  fcfid 6, 6
  00f7094  frsp 6, 6
  00f7098  fmuls 6, 6, 1
  00f709c  stfs 6, 12800(1)
  00f70a0  stfs 6, 12804(1)
  00f70a4  stfs 6, 12808(1)
  00f70a8  stfs 6, 12812(1)
  00f70ac  lvx 2, 1, 0
  00f70b0  vspltw 2, 2, 0
  00f70b4  vspltw 2, 2, 0
  00f70b8  vspltw 2, 2, 0
  00f70bc  vspltw 2, 2, 0
  00f70c0  vspltw 2, 2, 0
  00f70c4  vspltw 2, 2, 0
  00f70c8  vspltw 2, 2, 0
  00f70cc  vspltw 2, 2, 0
  00f70d0  vspltw 2, 2, 0
  00f70d4  vspltw 2, 2, 0
  00f70d8  vspltw 2, 2, 0
  00f70dc  vspltw 2, 2, 0
  00f70e0  vspltw 2, 2, 0
  00f70e4  vspltw 2, 2, 0
  00f70e8  vspltw 2, 2, 0
  00f70ec  vspltw 2, 2, 0
  00f70f0  vspltw 2, 2, 0
  00f70f4  vspltw 2, 2, 0
  00f70f8  vspltw 2, 2, 0
  00f70fc  vspltw 2, 2, 0
  00f7100  vspltw 2, 2, 0
  00f7104  vspltw 2, 2, 0
  00f7108  vspltw 2, 2, 0
  00f710c  vspltw 2, 2, 0
  00f7110  vspltw 2, 2, 0
  00f7114  vspltw 2, 2, 0
  00f7118  vspltw 2, 2, 0
  00f711c  vspltw 2, 2, 0
  00f7120  vspltw 2, 2, 0
  00f7124  vspltw 2, 2, 0
  00f7128  vspltw 2, 2, 0
  00f712c  vspltw 2, 2, 0
  00f7130  vspltw 2, 2, 0
  00f7134  vspltw 2, 2, 0
  00f7138  vspltw 2, 2, 0
  00f713c  vspltw 2, 2, 0
  00f7140  stvewx 2, 0, 3
  00f7144  lhz 3, 2(26)
  00f7148  extsh 3, 3
  00f714c  extsw 3, 3
  00f7150  li 0, 12800
  00f7154  std 3, 12816(1)
  00f7158  addic 3, 1, 132
  00f715c  fmuls 2, 2, 6
  00f7160  lfd 7, 12816(1)
  00f7164  fcfid 7, 7
  00f7168  frsp 7, 7
  00f716c  fmuls 7, 7, 1
  00f7170  stfs 7, 12800(1)
  00f7174  stfs 7, 12804(1)
  00f7178  stfs 7, 12808(1)
  00f717c  stfs 7, 12812(1)
  00f7180  lvx 2, 1, 0
  00f7184  vspltw 2, 2, 0
  00f7188  vspltw 2, 2, 0
  00f718c  vspltw 2, 2, 0
  00f7190  vspltw 2, 2, 0
  00f7194  vspltw 2, 2, 0
  00f7198  vspltw 2, 2, 0
  00f719c  vspltw 2, 2, 0
  00f71a0  vspltw 2, 2, 0
  00f71a4  vspltw 2, 2, 0
  00f71a8  vspltw 2, 2, 0
  00f71ac  vspltw 2, 2, 0
  00f71b0  vspltw 2, 2, 0
  00f71b4  vspltw 2, 2, 0
  00f71b8  vspltw 2, 2, 0
  00f71bc  vspltw 2, 2, 0
  00f71c0  vspltw 2, 2, 0
  00f71c4  vspltw 2, 2, 0
  00f71c8  vspltw 2, 2, 0
  00f71cc  vspltw 2, 2, 0
  00f71d0  vspltw 2, 2, 0
  00f71d4  vspltw 2, 2, 0
  00f71d8  vspltw 2, 2, 0
  00f71dc  vspltw 2, 2, 0
  00f71e0  vspltw 2, 2, 0
  00f71e4  vspltw 2, 2, 0
  00f71e8  vspltw 2, 2, 0
  00f71ec  vspltw 2, 2, 0
  00f71f0  vspltw 2, 2, 0
  00f71f4  vspltw 2, 2, 0
  00f71f8  vspltw 2, 2, 0
  00f71fc  vspltw 2, 2, 0
  00f7200  vspltw 2, 2, 0
  00f7204  vspltw 2, 2, 0
  00f7208  vspltw 2, 2, 0
  00f720c  vspltw 2, 2, 0
  00f7210  vspltw 2, 2, 0
  00f7214  stvewx 2, 0, 3
  00f7218  lhz 3, 4(26)
  00f721c  extsh 3, 3
  00f7220  extsw 3, 3
  00f7224  li 0, 12800
  00f7228  std 3, 12816(1)
  00f722c  addic 3, 1, 136
  00f7230  fmuls 3, 3, 7
  00f7234  lfd 8, 12816(1)
  00f7238  fcfid 8, 8
  00f723c  frsp 8, 8
  00f7240  fmuls 8, 8, 1
  00f7244  stfs 8, 12800(1)
  00f7248  stfs 8, 12804(1)
  00f724c  stfs 8, 12808(1)
  00f7250  stfs 8, 12812(1)
  00f7254  lvx 2, 1, 0
  00f7258  vspltw 2, 2, 0
  00f725c  vspltw 2, 2, 0
  00f7260  vspltw 2, 2, 0
  00f7264  vspltw 2, 2, 0
  00f7268  vspltw 2, 2, 0
  00f726c  vspltw 2, 2, 0
  00f7270  vspltw 2, 2, 0
  00f7274  vspltw 2, 2, 0
  00f7278  vspltw 2, 2, 0
  00f727c  vspltw 2, 2, 0
  00f7280  vspltw 2, 2, 0
  00f7284  vspltw 2, 2, 0
  00f7288  vspltw 2, 2, 0
  00f728c  vspltw 2, 2, 0
  00f7290  vspltw 2, 2, 0
  00f7294  vspltw 2, 2, 0
  00f7298  vspltw 2, 2, 0
  00f729c  vspltw 2, 2, 0
  00f72a0  vspltw 2, 2, 0
  00f72a4  vspltw 2, 2, 0
  00f72a8  vspltw 2, 2, 0
  00f72ac  vspltw 2, 2, 0
  00f72b0  vspltw 2, 2, 0
  00f72b4  vspltw 2, 2, 0
  00f72b8  vspltw 2, 2, 0
  00f72bc  vspltw 2, 2, 0
  00f72c0  vspltw 2, 2, 0
  00f72c4  vspltw 2, 2, 0
  00f72c8  vspltw 2, 2, 0
  00f72cc  vspltw 2, 2, 0
  00f72d0  vspltw 2, 2, 0
  00f72d4  vspltw 2, 2, 0
  00f72d8  vspltw 2, 2, 0
  00f72dc  vspltw 2, 2, 0
  00f72e0  vspltw 2, 2, 0
  00f72e4  vspltw 2, 2, 0
  00f72e8  stvewx 2, 0, 3
  00f72ec  lhz 3, 6(26)
  00f72f0  extsh 3, 3
  00f72f4  extsw 3, 3
  00f72f8  li 0, 12800
  00f72fc  std 3, 12816(1)
  00f7300  fmuls 4, 4, 8
  00f7304  addic 3, 1, 140
  00f7308  fadds 2, 2, 3
  00f730c  fadds 2, 2, 4
  00f7310  lfd 9, 12816(1)
  00f7314  fcfid 9, 9
  00f7318  frsp 9, 9
  00f731c  fmuls 1, 9, 1
  00f7320  stfs 1, 12800(1)
  00f7324  stfs 1, 12804(1)
  00f7328  stfs 1, 12808(1)
  00f732c  stfs 1, 12812(1)
  00f7330  lvx 2, 1, 0
  00f7334  vspltw 2, 2, 0
  00f7338  vspltw 2, 2, 0
  00f733c  vspltw 2, 2, 0
  00f7340  vspltw 2, 2, 0
  00f7344  fmuls 1, 5, 1
  00f7348  vspltw 2, 2, 0
  00f734c  vspltw 2, 2, 0
  00f7350  vspltw 2, 2, 0
  00f7354  fadds 1, 2, 1
  00f7358  vspltw 2, 2, 0
  00f735c  vspltw 2, 2, 0
  00f7360  vspltw 2, 2, 0
  00f7364  vspltw 2, 2, 0
  00f7368  vspltw 2, 2, 0
  00f736c  vspltw 2, 2, 0
  00f7370  vspltw 2, 2, 0
  00f7374  vspltw 2, 2, 0
  00f7378  vspltw 2, 2, 0
  00f737c  vspltw 2, 2, 0
  00f7380  vspltw 2, 2, 0
  00f7384  vspltw 2, 2, 0
  00f7388  vspltw 2, 2, 0
  00f738c  vspltw 2, 2, 0
  00f7390  vspltw 2, 2, 0
  00f7394  vspltw 2, 2, 0
  00f7398  vspltw 2, 2, 0
  00f739c  vspltw 2, 2, 0
  00f73a0  vspltw 2, 2, 0
  00f73a4  vspltw 2, 2, 0
  00f73a8  vspltw 2, 2, 0
  00f73ac  vspltw 2, 2, 0
  00f73b0  vspltw 2, 2, 0
  00f73b4  vspltw 2, 2, 0
  00f73b8  vspltw 2, 2, 0
  00f73bc  vspltw 2, 2, 0
  00f73c0  vspltw 2, 2, 0
  00f73c4  vspltw 2, 2, 0
  00f73c8  vspltw 2, 2, 0
  00f73cc  stvewx 2, 0, 3
  00f73d0  lfs 28, 4(21)
  00f73d4  fcmpu 0, 1, 28
  00f73d8  cror 6, 1, 2
  00f73dc  bt 6, 0xf7498
  00f73e0  addic 20, 1, 192
  00f73e4  lfs 1, 104(21)
  00f73e8  addic 4, 1, 128
  00f73ec  ori 3, 20, 0
  00f73f0  bl 0x5023bc
  00f73f4  nop
  00f73f8  fmr 1, 29
  00f73fc  addic 3, 1, 224
  00f7400  addic 4, 1, 112
  00f7404  bl 0x5023bc
  00f7408  nop
  00f740c  lfs 1, 224(1)
  00f7410  lfs 2, 228(1)
  00f7414  addic 3, 1, 240
  00f7418  stfs 1, 160(1)
  00f741c  ori 4, 20, 0
  00f7420  lfs 3, 232(1)
  00f7424  fmr 1, 31
  00f7428  stfs 2, 164(1)
  00f742c  lfs 2, 236(1)
  00f7430  stfs 3, 168(1)
  00f7434  stfs 2, 172(1)
  00f7438  bl 0x5023bc
  00f743c  nop
  00f7440  lfs 1, 240(1)
  00f7444  addic 5, 1, 176
  00f7448  lfs 2, 244(1)
  00f744c  addic 3, 1, 208
  00f7450  stfs 1, 176(1)
  00f7454  addic 4, 1, 160
  00f7458  lfs 1, 248(1)
  00f745c  stfs 2, 180(1)
  00f7460  lfs 2, 252(1)
  00f7464  stfs 1, 184(1)
  00f7468  stfs 2, 188(1)
  00f746c  bl 0x5023f0
  00f7470  nop
  00f7474  lfs 1, 208(1)
  00f7478  lfs 2, 212(1)
  00f747c  stfs 1, 144(1)
  00f7480  lfs 1, 216(1)
  00f7484  stfs 2, 148(1)
  00f7488  lfs 2, 220(1)
  00f748c  stfs 1, 152(1)
  00f7490  stfs 2, 156(1)
  00f7494  b 0xf7534
  00f7498  fmr 1, 29
  00f749c  addic 3, 1, 304
  00f74a0  addic 4, 1, 112
  00f74a4  bl 0x5023bc
  00f74a8  nop
  00f74ac  lfs 1, 304(1)
  00f74b0  lfs 2, 308(1)
  00f74b4  addic 3, 1, 320
  00f74b8  stfs 1, 256(1)
  00f74bc  addic 4, 1, 128
  00f74c0  lfs 3, 312(1)
  00f74c4  fmr 1, 31
  00f74c8  stfs 2, 260(1)
  00f74cc  lfs 2, 316(1)
  00f74d0  stfs 3, 264(1)
  00f74d4  stfs 2, 268(1)
  00f74d8  bl 0x5023bc
  00f74dc  nop
  00f74e0  lfs 1, 320(1)
  00f74e4  addic 5, 1, 272
  00f74e8  lfs 2, 324(1)
  00f74ec  addic 3, 1, 288
  00f74f0  stfs 1, 272(1)
  00f74f4  addic 4, 1, 256
  00f74f8  lfs 1, 328(1)
  00f74fc  stfs 2, 276(1)
  00f7500  lfs 2, 332(1)
  00f7504  stfs 1, 280(1)
  00f7508  stfs 2, 284(1)
  00f750c  bl 0x5023f0
  00f7510  nop
  00f7514  lfs 1, 288(1)
  00f7518  lfs 2, 292(1)
  00f751c  stfs 1, 144(1)
  00f7520  lfs 1, 296(1)
  00f7524  stfs 2, 148(1)
  00f7528  lfs 2, 300(1)
  00f752c  stfs 1, 152(1)
  00f7530  stfs 2, 156(1)
  00f7534  lfs 1, 144(1)
  00f7538  lfs 2, 148(1)
  00f753c  fmuls 5, 1, 1
  00f7540  fmuls 6, 2, 2
  00f7544  lfs 3, 152(1)
  00f7548  lfs 4, 156(1)
  00f754c  fmuls 7, 3, 3
  00f7550  fmuls 8, 4, 4
  00f7554  fadds 5, 5, 6
  00f7558  fadds 5, 5, 7
  00f755c  fadds 5, 5, 8
  00f7560  fcmpu 0, 5, 28
  00f7564  cror 6, 0, 2
  00f7568  bt 6, 0xf75a8
  00f756c  fsqrts 1, 5
  00f7570  addic 3, 1, 336
  00f7574  addic 4, 1, 144
  00f7578  fdivs 1, 30, 1
  00f757c  bl 0x5023bc
  00f7580  nop
  00f7584  lfs 1, 336(1)
  00f7588  stfs 1, 0(25)
  00f758c  lfs 1, 340(1)
  00f7590  stfs 1, 4(25)
  00f7594  lfs 1, 344(1)
  00f7598  stfs 1, 8(25)
  00f759c  lfs 1, 348(1)
  00f75a0  stfs 1, 12(25)
  00f75a4  b 0xf75b8
  00f75a8  stfs 1, 0(25)
  00f75ac  stfs 2, 4(25)
  00f75b0  stfs 3, 8(25)
  00f75b4  stfs 4, 12(25)
  00f75b8  addic 24, 24, 1
  00f75bc  lwz 3, 104(23)
  00f75c0  addic 26, 26, 8
  00f75c4  cmplw 24, 3
  00f75c8  addic 27, 27, 8
  00f75cc  addic 25, 25, 64
  00f75d0  bt 0, 0xf6d30
  00f75d4  lwz 3, 124(23)
  00f75d8  cmpwi 3, 0
  00f75dc  bt 2, 0xf75e8
  00f75e0  ori 4, 30, 0
  00f75e4  bl 0xf3b30
  00f75e8  lwz 3, 128(23)
  00f75ec  cmpwi 3, 0
  00f75f0  bt 2, 0xf75fc
  00f75f4  ori 4, 30, 0
  00f75f8  bl 0xf3618
  00f75fc  ori 5, 22, 0
  00f7600  lwz 6, 104(23)
  00f7604  ori 4, 30, 0
  00f7608  lwz 3, 100(23)
  00f760c  cmplw 6, 5
  00f7610  bf 1, 0xf7850
  00f7614  ori 7, 22, 0
  00f7618  ori 8, 3, 0
  00f761c  li 10, 32
  00f7620  li 6, 80
  00f7624  vspltisw 6, 0
  00f7628  addic 11, 1, 400
  00f762c  li 9, 160
  00f7630  lvx 2, 10, 4
  00f7634  lvx 3, 6, 21
  00f7638  lvx 4, 0, 4
  00f763c  li 6, 144
  00f7640  vsel 2, 2, 29, 3
  00f7644  vaddfp 3, 4, 4
  00f7648  vspltw 5, 4, 3
  00f764c  li 12, 128
  00f7650  li 27, 192
  00f7654  stvx 2, 0, 11
  00f7658  lvx 2, 6, 21
  00f765c  lvx 8, 9, 21
  00f7660  vperm 7, 4, 4, 2
  00f7664  li 6, 112
  00f7668  vperm 4, 4, 4, 8
  00f766c  addic 9, 1, 352
  00f7670  vperm 2, 3, 3, 2
  00f7674  vmaddfp 9, 7, 3, 6
  00f7678  vperm 8, 3, 3, 8
  00f767c  addic 26, 1, 384
  00f7680  li 25, 208
  00f7684  vmaddfp 10, 2, 5, 6
  00f7688  vnmsubfp 2, 7, 2, 29
  00f768c  lvx 7, 6, 21
  00f7690  lvx 11, 12, 21
  00f7694  li 6, 176
  00f7698  addic 12, 1, 368
  00f769c  li 24, 224
  00f76a0  vnmsubfp 5, 8, 5, 9
  00f76a4  vmaddfp 3, 4, 3, 10
  00f76a8  vnmsubfp 2, 4, 8, 2
  00f76ac  vsel 4, 5, 3, 7
  00f76b0  vsel 8, 3, 2, 7
  00f76b4  vsel 7, 2, 5, 7
  00f76b8  vsel 2, 4, 2, 11
  00f76bc  vsel 4, 8, 5, 11
  00f76c0  vsel 3, 7, 3, 11
  00f76c4  vmrghw 5, 4, 2
  00f76c8  vmrglw 2, 4, 2
  00f76cc  vmrghw 4, 5, 3
  00f76d0  stvx 4, 0, 9
  00f76d4  lvx 4, 6, 21
  00f76d8  li 6, 16
  00f76dc  vperm 4, 5, 3, 4
  00f76e0  stvx 4, 0, 12
  00f76e4  lvx 4, 27, 21
  00f76e8  li 27, 240
  00f76ec  vperm 2, 2, 3, 4
  00f76f0  lvx 3, 6, 4
  00f76f4  addic 6, 7, 11
  00f76f8  slwi 6, 6, 2
  00f76fc  stvx 2, 0, 26
  00f7700  lvx 2, 25, 21
  00f7704  lvx 4, 24, 21
  00f7708  lvx 5, 27, 21
  00f770c  vperm 2, 3, 6, 2
  00f7710  vperm 4, 3, 6, 4
  00f7714  vperm 3, 3, 6, 5
  00f7718  lvx 5, 0, 9
  00f771c  vmaddfp 5, 5, 2, 6
  00f7720  lvx 2, 0, 12
  00f7724  lwzx 6, 30, 6
  00f7728  vmaddfp 4, 2, 4, 6
  00f772c  lvx 2, 0, 26
  00f7730  cmpwi 6, 0
  00f7734  vmaddfp 2, 2, 3, 6
  00f7738  stvx 5, 0, 9
  00f773c  stvx 4, 0, 12
  00f7740  stvx 2, 0, 26
  00f7744  bt 2, 0xf7810
  00f7748  rlwinm 6, 6, 0, 4, 25
  00f774c  lvx 3, 0, 9
  00f7750  li 9, 16
  00f7754  vspltisw 5, 0
  00f7758  addc 6, 3, 6
  00f775c  vspltw 4, 3, 0
  00f7760  vspltw 10, 2, 0
  00f7764  clrldi 6, 6, 32
  00f7768  vspltw 8, 3, 1
  00f776c  vspltw 14, 2, 1
  00f7770  vspltw 1, 3, 2
  00f7774  lvx 6, 0, 6
  00f7778  lvx 7, 0, 12
  00f777c  lvx 11, 9, 6
  00f7780  vspltw 9, 7, 0
  00f7784  vmaddfp 4, 6, 4, 5
  00f7788  lvx 12, 0, 11
  00f778c  vmaddfp 10, 6, 10, 5
  00f7790  vspltw 0, 12, 0
  00f7794  li 11, 48
  00f7798  vmaddfp 9, 6, 9, 5
  00f779c  vspltw 13, 7, 1
  00f77a0  lvx 15, 10, 6
  00f77a4  vspltw 3, 3, 3
  00f77a8  vmaddfp 5, 6, 0, 5
  00f77ac  vspltw 6, 7, 2
  00f77b0  vspltw 7, 7, 3
  00f77b4  lvx 0, 11, 6
  00f77b8  vmaddfp 4, 11, 8, 4
  00f77bc  vspltw 8, 12, 1
  00f77c0  vmaddfp 10, 11, 14, 10
  00f77c4  vspltw 14, 12, 2
  00f77c8  vmaddfp 9, 11, 13, 9
  00f77cc  vspltw 13, 2, 2
  00f77d0  vspltw 2, 2, 3
  00f77d4  vmaddfp 5, 11, 8, 5
  00f77d8  vspltw 8, 12, 3
  00f77dc  vmaddfp 4, 15, 1, 4
  00f77e0  vmaddfp 6, 15, 6, 9
  00f77e4  vmaddfp 9, 15, 13, 10
  00f77e8  vmaddfp 5, 15, 14, 5
  00f77ec  vmaddfp 3, 0, 3, 4
  00f77f0  vmaddfp 4, 0, 7, 6
  00f77f4  vmaddfp 2, 0, 2, 9
  00f77f8  vmaddfp 5, 0, 8, 5
  00f77fc  stvx 3, 0, 8
  00f7800  stvx 4, 9, 8
  00f7804  stvx 2, 10, 8
  00f7808  stvx 5, 11, 8
  00f780c  b 0xf7834
  00f7810  li 6, 16
  00f7814  lvx 3, 0, 9
  00f7818  li 27, 48
  00f781c  lvx 4, 0, 12
  00f7820  stvx 3, 0, 8
  00f7824  stvx 4, 6, 8
  00f7828  lvx 3, 0, 11
  00f782c  stvx 2, 10, 8
  00f7830  stvx 3, 27, 8
  00f7834  addic 5, 5, 1
  00f7838  lwz 6, 104(23)
  00f783c  addic 8, 8, 64
  00f7840  addic 7, 7, 16
  00f7844  cmplw 5, 6
  00f7848  addic 4, 4, 64
  00f784c  bt 0, 0xf761c
  00f7850  cmpwi 28, 0
  00f7854  bt 2, 0xf78f8
  00f7858  vspltisw 2, 0
  00f785c  li 4, 16
  00f7860  lvx 3, 0, 28
  00f7864  li 5, 224
  00f7868  li 6, 240
  00f786c  addic 7, 1, 416
  00f7870  vmaddfp 2, 3, 31, 2
  00f7874  lvx 3, 4, 28
  00f7878  li 4, 208
  00f787c  lwz 8, 104(23)
  00f7880  lvx 4, 4, 21
  00f7884  subc 4, 28, 7
  00f7888  lvx 5, 5, 21
  00f788c  srwi 5, 4, 5
  00f7890  lvx 6, 6, 21
  00f7894  vmaddfp 7, 3, 30, 2
  00f7898  cmplw 5, 8
  00f789c  vperm 2, 7, 29, 4
  00f78a0  vperm 3, 7, 29, 5
  00f78a4  vperm 4, 7, 29, 6
  00f78a8  bf 0, 0xf78ec
  00f78ac  rlwinm 5, 4, 1, 0, 25
  00f78b0  vspltisw 5, 0
  00f78b4  rlwinm 4, 4, 29, 3, 29
  00f78b8  addic 6, 4, 1
  00f78bc  addic 4, 4, 2
  00f78c0  lvx 6, 5, 3
  00f78c4  slwi 6, 6, 4
  00f78c8  slwi 4, 4, 4
  00f78cc  vmaddfp 2, 6, 2, 5
  00f78d0  stvx 2, 5, 3
  00f78d4  lvx 2, 6, 3
  00f78d8  vmaddfp 2, 2, 3, 5
  00f78dc  stvx 2, 6, 3
  00f78e0  lvx 2, 4, 3
  00f78e4  vmaddfp 2, 2, 4, 5
  00f78e8  stvx 2, 4, 3
  00f78ec  lwz 28, 12(28)
  00f78f0  cmpwi 28, 0
  00f78f4  bf 2, 0xf7858
  00f78f8  lwz 4, 136(23)
  00f78fc  ori 5, 22, 0
  00f7900  lwz 6, 104(23)
  00f7904  cmplw 6, 5
  00f7908  bf 1, 0xf79c4
  00f790c  li 6, 16
  00f7910  li 7, 32
  00f7914  lvx 2, 0, 4
  00f7918  li 8, 48
  00f791c  lvx 3, 0, 3
  00f7920  vspltw 4, 2, 0
  00f7924  vspltisw 5, 0
  00f7928  lvx 6, 6, 4
  00f792c  lvx 9, 7, 4
  00f7930  vspltw 8, 6, 0
  00f7934  lvx 10, 6, 3
  00f7938  vspltw 11, 9, 0
  00f793c  vmaddfp 4, 3, 4, 5
  00f7940  lvx 12, 8, 4
  00f7944  vmaddfp 8, 3, 8, 5
  00f7948  vspltw 0, 12, 0
  00f794c  vmaddfp 5, 3, 11, 5
  00f7950  lvx 11, 8, 3
  00f7954  vspltw 7, 2, 1
  00f7958  vmaddfp 3, 3, 0, 11
  00f795c  vspltw 13, 6, 1
  00f7960  vspltw 1, 9, 1
  00f7964  addic 5, 5, 1
  00f7968  vspltw 2, 2, 2
  00f796c  addic 4, 4, 64
  00f7970  vspltw 6, 6, 2
  00f7974  lvx 11, 7, 3
  00f7978  vmaddfp 4, 10, 7, 4
  00f797c  vspltw 9, 9, 2
  00f7980  vspltw 7, 12, 1
  00f7984  vmaddfp 8, 10, 13, 8
  00f7988  vspltw 12, 12, 2
  00f798c  vmaddfp 5, 10, 1, 5
  00f7990  vmaddfp 3, 10, 7, 3
  00f7994  vmaddfp 2, 11, 2, 4
  00f7998  vmaddfp 4, 11, 6, 8
  00f799c  vmaddfp 5, 11, 9, 5
  00f79a0  vmaddfp 3, 11, 12, 3
  00f79a4  stvx 2, 0, 3
  00f79a8  stvx 4, 6, 3
  00f79ac  stvx 5, 7, 3
  00f79b0  stvx 3, 8, 3
  00f79b4  lwz 6, 104(23)
  00f79b8  addic 3, 3, 64
  00f79bc  cmplw 5, 6
  00f79c0  bt 0, 0xf790c
  00f79c4  addic 29, 29, 1
  00f79c8  addic 23, 23, 176
  00f79cc  cmplw 29, 31
  00f79d0  bt 0, 0xf5c10
  00f79d4  li 0, 12832
  00f79d8  lvx 29, 1, 0
  00f79dc  addic 0, 0, 16
  00f79e0  lvx 30, 1, 0
  00f79e4  addic 0, 0, 16
  00f79e8  lvx 31, 1, 0
  00f79ec  ld 0, 13040(1)
  00f79f0  mtlr 0
  00f79f4  lfd 28, 12992(1)
  00f79f8  lfd 29, 13000(1)
  00f79fc  lfd 30, 13008(1)
  00f7a00  lfd 31, 13016(1)
  00f7a04  ld 18, 12880(1)
  00f7a08  ld 19, 12888(1)
  00f7a0c  ld 20, 12896(1)
  00f7a10  ld 21, 12904(1)
  00f7a14  ld 22, 12912(1)
  00f7a18  ld 23, 12920(1)
  00f7a1c  ld 24, 12928(1)
  00f7a20  ld 25, 12936(1)
  00f7a24  ld 26, 12944(1)
  00f7a28  ld 27, 12952(1)
  00f7a2c  ld 28, 12960(1)
  00f7a30  ld 29, 12968(1)
  00f7a34  ld 30, 12976(1)
  00f7a38  ld 31, 12984(1)
  00f7a3c  addi 1, 1, 13024
  00f7a40  blr

MB_DrawEntryList:   # 0xf7a44, 0x50 bytes
  00f7a44  stdu 1, -128(1)
  00f7a48  mflr 0
  00f7a4c  std 0, 144(1)
  00f7a50  std 30, 112(1)
  00f7a54  std 31, 120(1)
  00f7a58  ori 30, 3, 0
  00f7a5c  ori 31, 4, 0
  00f7a60  bl 0xf5b80
  00f7a64  lis 3, 273
  00f7a68  extsw 5, 31
  00f7a6c  addic 3, 3, 5888
  00f7a70  ori 4, 30, 0
  00f7a74  bl 0x4ed52c
  00f7a78  nop
  00f7a7c  ld 0, 144(1)
  00f7a80  mtlr 0
  00f7a84  ld 30, 112(1)
  00f7a88  ld 31, 120(1)
  00f7a8c  addi 1, 1, 128
  00f7a90  blr

MB_BuildDrawEntry:   # 0xf7af0, 0x1aac bytes
  00f7af0  stdu 1, -688(1)
  00f7af4  mflr 0
  00f7af8  std 0, 704(1)
  00f7afc  stfd 27, 648(1)
  00f7b00  stfd 28, 656(1)
  00f7b04  stfd 29, 664(1)
  00f7b08  stfd 30, 672(1)
  00f7b0c  stfd 31, 680(1)
  00f7b10  std 18, 536(1)
  00f7b14  lis 6, 161
  00f7b18  std 20, 552(1)
  00f7b1c  lis 18, 144
  00f7b20  std 16, 520(1)
  00f7b24  ori 20, 4, 0
  00f7b28  std 14, 504(1)
  00f7b2c  lis 16, 15
  00f7b30  ori 14, 5, 0
  00f7b34  lwz 4, 1800(6)
  00f7b38  addi 16, 16, 31392
  00f7b3c  std 23, 576(1)
  00f7b40  lwz 18, -23196(18)
  00f7b44  ori 23, 3, 0
  00f7b48  std 31, 640(1)
  00f7b4c  std 30, 632(1)
  00f7b50  std 29, 624(1)
  00f7b54  std 28, 616(1)
  00f7b58  std 27, 608(1)
  00f7b5c  std 26, 600(1)
  00f7b60  std 25, 592(1)
  00f7b64  std 24, 584(1)
  00f7b68  std 22, 568(1)
  00f7b6c  std 21, 560(1)
  00f7b70  std 19, 544(1)
  00f7b74  std 17, 528(1)
  00f7b78  std 15, 512(1)
  00f7b7c  cmpwi 4, 6
  00f7b80  bf 2, 0xf7bb4
  00f7b84  lis 3, 150
  00f7b88  addic 3, 3, 17776
  00f7b8c  lwz 3, 32(3)
  00f7b90  cmpwi 3, 4
  00f7b94  bf 2, 0xf7bb4
  00f7b98  li 3, 0
  00f7b9c  lfs 1, 0(16)
  00f7ba0  stw 3, 140(1)
  00f7ba4  stfs 1, 136(1)
  00f7ba8  stfs 1, 132(1)
  00f7bac  stfs 1, 128(1)
  00f7bb0  b 0xf7be8
  00f7bb4  lis 3, 161
  00f7bb8  addic 3, 3, 24396
  00f7bbc  lwz 3, 24(3)
  00f7bc0  addic 4, 3, 16
  00f7bc4  addic 3, 3, 16
  00f7bc8  lfs 1, 0(4)
  00f7bcc  stfs 1, 128(1)
  00f7bd0  lfs 1, 4(3)
  00f7bd4  stfs 1, 132(1)
  00f7bd8  lfs 1, 8(3)
  00f7bdc  stfs 1, 136(1)
  00f7be0  lfs 1, 12(3)
  00f7be4  stfs 1, 140(1)
  00f7be8  lis 29, 144
  00f7bec  addic 29, 29, -23532
  00f7bf0  lwz 3, 16(29)
  00f7bf4  lwz 4, 12(29)
  00f7bf8  stw 3, 416(1)
  00f7bfc  lwz 3, 28(29)
  00f7c00  lwz 5, 36(29)
  00f7c04  stw 4, 428(1)
  00f7c08  stw 3, 420(1)
  00f7c0c  stw 5, 424(1)
  00f7c10  lwz 3, 24(29)
  00f7c14  lwz 4, 32(29)
  00f7c18  lwz 5, 8920(18)
  00f7c1c  stw 3, 432(1)
  00f7c20  cmpwi 5, 0
  00f7c24  stw 4, 436(1)
  00f7c28  bt 2, 0xf7e34
  00f7c2c  lis 4, 0
  00f7c30  lwz 5, 40(29)
  00f7c34  lis 3, 4
  00f7c38  ori 4, 4, 32774
  00f7c3c  ori 3, 3, 800
  00f7c40  slwi 6, 4, 16
  00f7c44  or 4, 4, 6
  00f7c48  lwz 6, 8(5)
  00f7c4c  stw 3, 0(6)
  00f7c50  lwz 3, 8(5)
  00f7c54  lis 6, 8
  00f7c58  stw 4, 4(3)
  00f7c5c  lwz 3, 8(5)
  00f7c60  ori 4, 6, 788
  00f7c64  lis 6, 770
  00f7c68  addic 3, 3, 8
  00f7c6c  stw 3, 8(5)
  00f7c70  lwz 3, 40(29)
  00f7c74  ori 5, 6, 770
  00f7c78  lis 6, 771
  00f7c7c  ori 6, 6, 771
  00f7c80  lwz 7, 8(3)
  00f7c84  stw 4, 0(7)
  00f7c88  lwz 4, 8(3)
  00f7c8c  li 7, 20
  00f7c90  stw 5, 4(4)
  00f7c94  lwz 4, 8(3)
  00f7c98  lis 5, 20
  00f7c9c  stw 6, 8(4)
  00f7ca0  lwz 4, 8(3)
  00f7ca4  ori 6, 5, 7932
  00f7ca8  addic 4, 4, 12
  00f7cac  stw 4, 8(3)
  00f7cb0  lwz 5, 40(29)
  00f7cb4  addic 3, 1, 128
  00f7cb8  li 4, 4
  00f7cbc  lwz 8, 8(5)
  00f7cc0  stw 6, 0(8)
  00f7cc4  lwz 6, 8(5)
  00f7cc8  stw 7, 4(6)
  00f7ccc  lwz 6, 8(5)
  00f7cd0  addic 6, 6, 8
  00f7cd4  stw 6, 8(5)
  00f7cd8  lwz 6, 8(5)
  00f7cdc  lwz 7, 0(3)
  00f7ce0  addic 4, 4, -1
  00f7ce4  addic 3, 3, 4
  00f7ce8  cmpwi 4, 0
  00f7cec  stw 7, 0(6)
  00f7cf0  lwz 6, 8(5)
  00f7cf4  addic 6, 6, 4
  00f7cf8  stw 6, 8(5)
  00f7cfc  bf 2, 0xf7cd8
  00f7d00  li 5, 5
  00f7d04  ori 3, 18, 0
  00f7d08  lwz 4, 40(29)
  00f7d0c  bl 0x4d83ec
  00f7d10  nop
  00f7d14  li 5, 8
  00f7d18  lwz 4, 40(29)
  00f7d1c  ori 3, 18, 0
  00f7d20  bl 0x4d82b8
  00f7d24  nop
  00f7d28  li 31, 2
  00f7d2c  li 30, 3
  00f7d30  lwz 3, 40(29)
  00f7d34  li 28, 28
  00f7d38  li 27, 0
  00f7d3c  ori 5, 31, 0
  00f7d40  ori 4, 27, 0
  00f7d44  ori 6, 30, 0
  00f7d48  ori 7, 28, 0
  00f7d4c  ori 8, 27, 0
  00f7d50  bl 0x5e85b4
  00f7d54  nop
  00f7d58  li 26, 1
  00f7d5c  ori 5, 31, 0
  00f7d60  lwz 3, 40(29)
  00f7d64  ori 8, 27, 0
  00f7d68  ori 4, 26, 0
  00f7d6c  ori 6, 31, 0
  00f7d70  ori 7, 28, 0
  00f7d74  bl 0x5e85b4
  00f7d78  nop
  00f7d7c  li 5, 4
  00f7d80  lwz 3, 40(29)
  00f7d84  ori 4, 30, 0
  00f7d88  ori 7, 28, 0
  00f7d8c  ori 8, 27, 0
  00f7d90  ori 6, 5, 0
  00f7d94  bl 0x5e85b4
  00f7d98  nop
  00f7d9c  lwz 3, 40(29)
  00f7da0  lis 4, 8
  00f7da4  li 6, 518
  00f7da8  ori 4, 4, 776
  00f7dac  lwz 5, 8(3)
  00f7db0  stw 4, 0(5)
  00f7db4  lwz 5, 8(3)
  00f7db8  ori 4, 26, 0
  00f7dbc  stw 6, 4(5)
  00f7dc0  lwz 5, 8(3)
  00f7dc4  stw 26, 8(5)
  00f7dc8  lwz 5, 8(3)
  00f7dcc  addic 5, 5, 12
  00f7dd0  stw 5, 8(3)
  00f7dd4  lwz 3, 40(29)
  00f7dd8  bl 0x5e85f0
  00f7ddc  nop
  00f7de0  lwz 3, 40(29)
  00f7de4  lis 4, 4
  00f7de8  lis 6, 4
  00f7dec  ori 4, 4, 2672
  00f7df0  lwz 5, 8(3)
  00f7df4  stw 4, 0(5)
  00f7df8  lwz 4, 8(3)
  00f7dfc  ori 5, 6, 2676
  00f7e00  stw 26, 4(4)
  00f7e04  lwz 4, 8(3)
  00f7e08  addic 4, 4, 8
  00f7e0c  stw 4, 8(3)
  00f7e10  lwz 3, 40(29)
  00f7e14  lwz 4, 8(3)
  00f7e18  stw 5, 0(4)
  00f7e1c  lwz 4, 8(3)
  00f7e20  stw 26, 4(4)
  00f7e24  lwz 4, 8(3)
  00f7e28  addic 4, 4, 8
  00f7e2c  stw 4, 8(3)
  00f7e30  b 0xf8108
  00f7e34  li 31, 0
  00f7e38  ori 27, 1, 0
  00f7e3c  li 25, 0
  00f7e40  lwz 30, 416(27)
  00f7e44  lwz 28, 428(27)
  00f7e48  ori 4, 25, 0
  00f7e4c  ori 3, 30, 0
  00f7e50  bl 0x5e8610
  00f7e54  nop
  00f7e58  li 26, 1
  00f7e5c  ori 3, 30, 0
  00f7e60  ori 4, 26, 0
  00f7e64  bl 0x5e8610
  00f7e68  nop
  00f7e6c  li 24, 3
  00f7e70  ori 3, 30, 0
  00f7e74  ori 4, 24, 0
  00f7e78  bl 0x5e8610
  00f7e7c  nop
  00f7e80  ori 3, 28, 0
  00f7e84  ori 4, 25, 0
  00f7e88  bl 0x5e8610
  00f7e8c  nop
  00f7e90  ori 3, 28, 0
  00f7e94  ori 4, 26, 0
  00f7e98  bl 0x5e8610
  00f7e9c  nop
  00f7ea0  li 22, 2
  00f7ea4  ori 3, 28, 0
  00f7ea8  ori 4, 22, 0
  00f7eac  bl 0x5e8610
  00f7eb0  nop
  00f7eb4  ori 4, 24, 0
  00f7eb8  ori 3, 28, 0
  00f7ebc  bl 0x5e8610
  00f7ec0  nop
  00f7ec4  lis 4, 4
  00f7ec8  lwz 3, 8(30)
  00f7ecc  lis 5, 0
  00f7ed0  ori 4, 4, 800
  00f7ed4  ori 5, 5, 32774
  00f7ed8  slwi 6, 5, 16
  00f7edc  stw 4, 0(3)
  00f7ee0  lwz 4, 8(30)
  00f7ee4  or 3, 5, 6
  00f7ee8  lis 5, 8
  00f7eec  li 8, 20
  00f7ef0  ori 5, 5, 788
  00f7ef4  stw 3, 4(4)
  00f7ef8  lwz 3, 8(30)
  00f7efc  lis 4, 770
  00f7f00  addic 3, 3, 8
  00f7f04  ori 6, 4, 770
  00f7f08  lis 4, 771
  00f7f0c  stw 3, 8(30)
  00f7f10  stw 5, 0(3)
  00f7f14  lwz 9, 8(30)
  00f7f18  ori 5, 4, 771
  00f7f1c  lis 3, 20
  00f7f20  li 4, 4
  00f7f24  ori 7, 3, 7932
  00f7f28  addic 3, 1, 128
  00f7f2c  stw 6, 4(9)
  00f7f30  lwz 6, 8(30)
  00f7f34  stw 5, 8(6)
  00f7f38  lwz 5, 8(30)
  00f7f3c  addic 5, 5, 12
  00f7f40  stw 5, 8(30)
  00f7f44  stw 7, 0(5)
  00f7f48  lwz 5, 8(30)
  00f7f4c  stw 8, 4(5)
  00f7f50  lwz 5, 8(30)
  00f7f54  addic 5, 5, 8
  00f7f58  stw 5, 8(30)
  00f7f5c  lwz 5, 8(30)
  00f7f60  addic 4, 4, -1
  00f7f64  lwz 6, 0(3)
  00f7f68  cmpwi 4, 0
  00f7f6c  addic 3, 3, 4
  00f7f70  stw 6, 0(5)
  00f7f74  lwz 5, 8(30)
  00f7f78  addic 5, 5, 4
  00f7f7c  stw 5, 8(30)
  00f7f80  bf 2, 0xf7f5c
  00f7f84  li 5, 5
  00f7f88  ori 3, 18, 0
  00f7f8c  ori 4, 30, 0
  00f7f90  bl 0x4d83ec
  00f7f94  nop
  00f7f98  li 5, 8
  00f7f9c  ori 3, 18, 0
  00f7fa0  ori 4, 30, 0
  00f7fa4  bl 0x4d82b8
  00f7fa8  nop
  00f7fac  li 25, 28
  00f7fb0  li 21, 0
  00f7fb4  ori 5, 22, 0
  00f7fb8  ori 3, 30, 0
  00f7fbc  ori 4, 21, 0
  00f7fc0  ori 6, 24, 0
  00f7fc4  ori 7, 25, 0
  00f7fc8  ori 8, 21, 0
  00f7fcc  bl 0x5e85b4
  00f7fd0  nop
  00f7fd4  ori 5, 22, 0
  00f7fd8  ori 3, 30, 0
  00f7fdc  ori 4, 26, 0
  00f7fe0  ori 6, 22, 0
  00f7fe4  ori 7, 25, 0
  00f7fe8  ori 8, 21, 0
  00f7fec  bl 0x5e85b4
  00f7ff0  nop
  00f7ff4  li 5, 4
  00f7ff8  ori 7, 25, 0
  00f7ffc  ori 3, 30, 0
  00f8000  ori 8, 21, 0
  00f8004  ori 4, 24, 0
  00f8008  ori 6, 5, 0
  00f800c  bl 0x5e85b4
  00f8010  nop
  00f8014  cmpwi 28, 0
  00f8018  bt 2, 0xf8080
  00f801c  li 21, 0
  00f8020  ori 5, 22, 0
  00f8024  ori 8, 21, 0
  00f8028  ori 3, 28, 0
  00f802c  ori 4, 21, 0
  00f8030  ori 6, 24, 0
  00f8034  ori 7, 25, 0
  00f8038  bl 0x5e85b4
  00f803c  nop
  00f8040  ori 5, 22, 0
  00f8044  ori 3, 28, 0
  00f8048  ori 4, 26, 0
  00f804c  ori 6, 22, 0
  00f8050  ori 7, 25, 0
  00f8054  ori 8, 21, 0
  00f8058  bl 0x5e85b4
  00f805c  nop
  00f8060  li 5, 4
  00f8064  ori 3, 28, 0
  00f8068  ori 4, 24, 0
  00f806c  ori 7, 25, 0
  00f8070  ori 8, 21, 0
  00f8074  ori 6, 5, 0
  00f8078  bl 0x5e85b4
  00f807c  nop
  00f8080  lis 3, 8
  00f8084  li 24, 518
  00f8088  ori 25, 3, 776
  00f808c  lwz 3, 8(28)
  00f8090  li 5, 255
  00f8094  ori 4, 26, 0
  00f8098  stw 25, 0(3)
  00f809c  lwz 6, 8(28)
  00f80a0  ori 3, 28, 0
  00f80a4  stw 24, 4(6)
  00f80a8  lwz 6, 8(28)
  00f80ac  stw 5, 8(6)
  00f80b0  lwz 5, 8(28)
  00f80b4  addic 5, 5, 12
  00f80b8  stw 5, 8(28)
  00f80bc  bl 0x5e85f0
  00f80c0  nop
  00f80c4  lwz 4, 8(30)
  00f80c8  ori 3, 28, 0
  00f80cc  stw 25, 0(4)
  00f80d0  lwz 5, 8(30)
  00f80d4  ori 4, 26, 0
  00f80d8  stw 24, 4(5)
  00f80dc  lwz 5, 8(30)
  00f80e0  stw 26, 8(5)
  00f80e4  lwz 5, 8(30)
  00f80e8  addic 5, 5, 12
  00f80ec  stw 5, 8(30)
  00f80f0  bl 0x5e85f0
  00f80f4  nop
  00f80f8  addic 31, 31, 1
  00f80fc  addic 27, 27, 4
  00f8100  cmplwi 31, 3
  00f8104  bt 0, 0xf7e3c
  00f8108  sldi 14, 14, 8
  00f810c  lfs 31, 0(16)
  00f8110  li 26, 0
  00f8114  addc 14, 23, 14
  00f8118  fmr 30, 31
  00f811c  cmpw 23, 14
  00f8120  bt 2, 0xf91c8
  00f8124  lwz 31, 28(29)
  00f8128  lwz 30, 24(29)
  00f812c  ori 19, 26, 0
  00f8130  lwz 3, 8920(18)
  00f8134  cmpwi 3, 0
  00f8138  bf 2, 0xf81c0
  00f813c  lbz 3, 127(23)
  00f8140  cmpwi 3, 0
  00f8144  bt 2, 0xf8164
  00f8148  lfs 1, 132(23)
  00f814c  fcmpu 0, 1, 31
  00f8150  bt 2, 0xf8164
  00f8154  li 19, 1
  00f8158  lbz 17, 189(23)
  00f815c  fmr 30, 1
  00f8160  b 0xf81c0
  00f8164  ori 4, 26, 0
  00f8168  ori 3, 4, 0
  00f816c  sldi 6, 4, 6
  00f8170  sldi 7, 4, 4
  00f8174  lis 5, 151
  00f8178  addc 6, 6, 7
  00f817c  addic 5, 5, -25376
  00f8180  clrldi 6, 6, 32
  00f8184  addc 6, 5, 6
  00f8188  lwz 6, 4240(6)
  00f818c  cmpw 23, 6
  00f8190  bf 2, 0xf819c
  00f8194  li 3, 1
  00f8198  b 0xf81a8
  00f819c  addic 4, 4, 1
  00f81a0  cmplwi 4, 7
  00f81a4  bt 0, 0xf816c
  00f81a8  cmpwi 3, 0
  00f81ac  bt 2, 0xf81c0
  00f81b0  lwz 3, 8320(5)
  00f81b4  li 19, 1
  00f81b8  lbz 17, 189(3)
  00f81bc  lfs 30, 132(3)
  00f81c0  lbz 3, 32(23)
  00f81c4  stb 26, 49(23)
  00f81c8  cmpwi 3, 255
  00f81cc  bt 2, 0xf91c8
  00f81d0  extsb 3, 3
  00f81d4  cmpwi 3, 0
  00f81d8  bt 0, 0xf91bc
  00f81dc  li 3, 129
  00f81e0  lhz 4, 52(23)
  00f81e4  and 3, 4, 3
  00f81e8  cmpwi 3, 0
  00f81ec  bf 2, 0xf91bc
  00f81f0  lwz 27, 36(23)
  00f81f4  cmpwi 27, 0
  00f81f8  bt 2, 0xf91bc
  00f81fc  ori 3, 18, 0
  00f8200  lhz 4, 54(23)
  00f8204  bl 0x5e8638
  00f8208  nop
  00f820c  cmpwi 3, 0
  00f8210  bf 2, 0xf91bc
  00f8214  addic 28, 1, 440
  00f8218  lfs 27, 4(16)
  00f821c  ori 4, 23, 0
  00f8220  lfs 29, 12(23)
  00f8224  ori 3, 28, 0
  00f8228  fmuls 29, 29, 27
  00f822c  bl 0x5e868c
  00f8230  nop
  00f8234  lfs 1, 8(16)
  00f8238  addic 3, 1, 452
  00f823c  ori 4, 28, 0
  00f8240  bl 0x5e86a8
  00f8244  nop
  00f8248  lhz 3, 50(23)
  00f824c  lfs 1, 452(1)
  00f8250  extsh 3, 3
  00f8254  extsw 3, 3
  00f8258  std 3, 480(1)
  00f825c  stfs 1, 48(1)
  00f8260  lfs 1, 460(1)
  00f8264  stfs 1, 56(1)
  00f8268  lfs 1, 456(1)
  00f826c  stfs 1, 52(1)
  00f8270  lfd 2, 480(1)
  00f8274  fmr 1, 29
  00f8278  ld 3, 48(1)
  00f827c  fcfid 2, 2
  00f8280  ld 4, 56(1)
  00f8284  frsp 2, 2
  00f8288  bl 0x5e86d8
  00f828c  nop
  00f8290  cmpwi 3, 0
  00f8294  bt 2, 0xf91bc
  00f8298  lfs 1, 0(23)
  00f829c  addic 3, 1, 176
  00f82a0  lfs 2, 4(23)
  00f82a4  lfs 3, 8(23)
  00f82a8  fmuls 1, 1, 27
  00f82ac  fmuls 2, 2, 27
  00f82b0  fmuls 3, 3, 27
  00f82b4  bl 0x5e87d8
  00f82b8  nop
  00f82bc  cmpwi 19, 0
  00f82c0  bf 2, 0xf82cc
  00f82c4  lwz 31, 16(29)
  00f82c8  lwz 30, 12(29)
  00f82cc  lbz 4, 35(23)
  00f82d0  lis 3, 162
  00f82d4  lfs 1, 452(1)
  00f82d8  clrldi 4, 4, 32
  00f82dc  addic 5, 3, 17928
  00f82e0  std 4, 480(1)
  00f82e4  stfs 1, 48(1)
  00f82e8  lfs 1, 460(1)
  00f82ec  lfs 2, 17928(3)
  00f82f0  stfs 1, 56(1)
  00f82f4  stfs 2, 64(1)
  00f82f8  lfs 1, 8(5)
  00f82fc  stfs 1, 72(1)
  00f8300  lfs 1, 456(1)
  00f8304  lfs 2, 4(5)
  00f8308  stfs 1, 52(1)
  00f830c  stfs 2, 68(1)
  00f8310  lfd 1, 480(1)
  00f8314  ld 3, 48(1)
  00f8318  fcfid 28, 1
  00f831c  ld 4, 56(1)
  00f8320  ld 5, 64(1)
  00f8324  ld 6, 72(1)
  00f8328  frsp 28, 28
  00f832c  bl 0x5e87e8
  00f8330  nop
  00f8334  lhz 3, 50(23)
  00f8338  fsubs 2, 1, 29
  00f833c  extsh 3, 3
  00f8340  extsw 3, 3
  00f8344  ori 15, 26, 0
  00f8348  std 3, 480(1)
  00f834c  lfs 3, 12(16)
  00f8350  lfd 1, 480(1)
  00f8354  fcfid 1, 1
  00f8358  frsp 1, 1
  00f835c  fsubs 3, 1, 3
  00f8360  fcmpu 0, 2, 3
  00f8364  cror 6, 0, 2
  00f8368  bt 6, 0xf83e4
  00f836c  fsubs 1, 1, 2
  00f8370  lfs 3, 16(16)
  00f8374  fmuls 1, 1, 3
  00f8378  fcmpu 0, 1, 31
  00f837c  cror 6, 1, 2
  00f8380  bt 6, 0xf8388
  00f8384  fmr 1, 31
  00f8388  lfs 2, 20(16)
  00f838c  fcmpu 0, 1, 2
  00f8390  cror 6, 0, 2
  00f8394  bt 6, 0xf839c
  00f8398  fmr 1, 2
  00f839c  lwz 30, 32(29)
  00f83a0  lis 3, 8
  00f83a4  lwz 31, 36(29)
  00f83a8  li 4, 518
  00f83ac  fmuls 28, 28, 1
  00f83b0  ori 3, 3, 776
  00f83b4  li 5, 4
  00f83b8  lwz 6, 8(30)
  00f83bc  ori 19, 26, 0
  00f83c0  li 15, 1
  00f83c4  stw 3, 0(6)
  00f83c8  lwz 3, 8(30)
  00f83cc  stw 4, 4(3)
  00f83d0  lwz 3, 8(30)
  00f83d4  stw 5, 8(3)
  00f83d8  lwz 3, 8(30)
  00f83dc  addic 3, 3, 12
  00f83e0  stw 3, 8(30)
  00f83e4  lwz 3, 8920(18)
  00f83e8  cmpwi 3, 0
  00f83ec  bf 2, 0xf8408
  00f83f0  lhz 3, 52(23)
  00f83f4  rlwinm 3, 3, 0, 20, 20
  00f83f8  cmpwi 3, 0
  00f83fc  bt 2, 0xf8408
  00f8400  lwz 31, 36(29)
  00f8404  lwz 30, 32(29)
  00f8408  cmpwi 19, 0
  00f840c  bt 2, 0xf84ac
  00f8410  li 28, 2
  00f8414  lwz 3, 20(29)
  00f8418  li 25, 3
  00f841c  li 24, 28
  00f8420  ori 5, 28, 0
  00f8424  ori 4, 26, 0
  00f8428  ori 6, 25, 0
  00f842c  ori 7, 24, 0
  00f8430  ori 8, 26, 0
  00f8434  bl 0x5e85b4
  00f8438  nop
  00f843c  ori 5, 28, 0
  00f8440  lwz 3, 20(29)
  00f8444  li 4, 1
  00f8448  ori 6, 28, 0
  00f844c  ori 7, 24, 0
  00f8450  ori 8, 26, 0
  00f8454  bl 0x5e85b4
  00f8458  nop
  00f845c  li 5, 4
  00f8460  lwz 3, 20(29)
  00f8464  ori 4, 25, 0
  00f8468  ori 7, 24, 0
  00f846c  ori 8, 26, 0
  00f8470  ori 6, 5, 0
  00f8474  bl 0x5e85b4
  00f8478  nop
  00f847c  lis 3, 165
  00f8480  addic 4, 1, 176
  00f8484  fmr 1, 29
  00f8488  addic 5, 3, -15136
  00f848c  sldi 6, 17, 4
  00f8490  ori 3, 18, 0
  00f8494  addc 5, 5, 6
  00f8498  lvx 2, 0, 4
  00f849c  clrldi 5, 5, 32
  00f84a0  ori 4, 17, 0
  00f84a4  bl 0x4dfe70
  00f84a8  nop
  00f84ac  li 21, 1
  00f84b0  stb 21, 49(23)
  00f84b4  lbz 3, 8(27)
  00f84b8  lwz 28, 0(27)
  00f84bc  cmpwi 3, 0
  00f84c0  bf 2, 0xf84e4
  00f84c4  lis 3, 144
  00f84c8  li 4, 64
  00f84cc  li 5, 16
  00f84d0  lwz 3, -23488(3)
  00f84d4  bl 0x4fe098
  00f84d8  nop
  00f84dc  stw 3, 100(20)
  00f84e0  b 0xf8500
  00f84e4  lis 6, 144
  00f84e8  slwi 4, 3, 6
  00f84ec  li 5, 16
  00f84f0  lwz 3, -23488(6)
  00f84f4  bl 0x4fe098
  00f84f8  nop
  00f84fc  stw 3, 100(20)
  00f8500  lbz 4, 8(27)
  00f8504  addic 22, 1, 144
  00f8508  stw 4, 104(20)
  00f850c  ori 3, 22, 0
  00f8510  lfs 1, 0(23)
  00f8514  lfs 2, 4(23)
  00f8518  lfs 3, 8(23)
  00f851c  lfs 4, 12(23)
  00f8520  bl 0x5e8848
  00f8524  nop
  00f8528  ori 3, 22, 0
  00f852c  fmr 1, 27
  00f8530  bl 0x5e885c
  00f8534  nop
  00f8538  addic 3, 1, 208
  00f853c  li 5, 112
  00f8540  li 4, 64
  00f8544  ori 24, 26, 0
  00f8548  stvx 2, 0, 3
  00f854c  stvx 2, 5, 1
  00f8550  lvx 2, 0, 3
  00f8554  stvx 2, 4, 20
  00f8558  lwz 25, 100(20)
  00f855c  lbz 3, 8(27)
  00f8560  cmplw 3, 24
  00f8564  bf 1, 0xf85a4
  00f8568  std 22, 496(1)
  00f856c  addic 22, 1, 352
  00f8570  ori 3, 22, 0
  00f8574  bl 0x5e88f0
  00f8578  nop
  00f857c  ori 3, 25, 0
  00f8580  ori 4, 22, 0
  00f8584  bl 0x5e8940
  00f8588  nop
  00f858c  lbz 3, 8(27)
  00f8590  addic 24, 24, 1
  00f8594  ld 22, 496(1)
  00f8598  addic 25, 25, 64
  00f859c  cmplw 24, 3
  00f85a0  bt 0, 0xf8568
  00f85a4  lwz 4, 16(28)
  00f85a8  lwz 5, 1192(18)
  00f85ac  lis 3, 144
  00f85b0  addc 4, 5, 4
  00f85b4  li 5, 16
  00f85b8  stw 4, 92(20)
  00f85bc  lhz 4, 24(28)
  00f85c0  sth 4, 80(20)
  00f85c4  lhz 6, 26(28)
  00f85c8  lwz 3, -23488(3)
  00f85cc  addc 4, 4, 6
  00f85d0  sldi 6, 4, 5
  00f85d4  sldi 4, 4, 2
  00f85d8  subc 4, 6, 4
  00f85dc  bl 0x4fe098
  00f85e0  nop
  00f85e4  stw 3, 96(20)
  00f85e8  lhz 4, 26(28)
  00f85ec  sth 4, 82(20)
  00f85f0  lhz 4, 28(28)
  00f85f4  sth 4, 84(20)
  00f85f8  ld 4, 56(23)
  00f85fc  slwi 5, 4, 0
  00f8600  rldicl 4, 4, 32, 32
  00f8604  stw 5, 108(20)
  00f8608  stw 4, 112(20)
  00f860c  lwz 4, 144(23)
  00f8610  sth 17, 150(20)
  00f8614  stw 4, 116(20)
  00f8618  lwz 4, 96(23)
  00f861c  stw 4, 124(20)
  00f8620  lwz 4, 24(27)
  00f8624  stw 4, 132(20)
  00f8628  lwz 4, 104(23)
  00f862c  stw 4, 140(20)
  00f8630  lwz 4, 108(23)
  00f8634  stw 4, 144(20)
  00f8638  lfs 1, 84(23)
  00f863c  stfs 1, 120(20)
  00f8640  lwz 4, 100(23)
  00f8644  fctidz 1, 28
  00f8648  stw 4, 128(20)
  00f864c  lbz 4, 80(23)
  00f8650  lbz 5, 81(23)
  00f8654  addic 4, 4, 1
  00f8658  subc 4, 4, 5
  00f865c  cntlzw 4, 4
  00f8660  srwi 4, 4, 5
  00f8664  li 0, 464
  00f8668  stb 4, 148(20)
  00f866c  lwz 4, 20(27)
  00f8670  stw 4, 136(20)
  00f8674  stfd 1, 480(1)
  00f8678  lwz 4, 484(1)
  00f867c  stb 4, 149(20)
  00f8680  lhz 4, 4(27)
  00f8684  extsh 4, 4
  00f8688  extsw 4, 4
  00f868c  std 4, 480(1)
  00f8690  lfs 1, 48(16)
  00f8694  lfd 2, 480(1)
  00f8698  fcfid 2, 2
  00f869c  li 4, 152
  00f86a0  frsp 2, 2
  00f86a4  fmuls 2, 2, 1
  00f86a8  stfs 2, 464(1)
  00f86ac  stfs 2, 468(1)
  00f86b0  stfs 2, 472(1)
  00f86b4  stfs 2, 476(1)
  00f86b8  lvx 2, 1, 0
  00f86bc  vspltw 2, 2, 0
  00f86c0  vspltw 2, 2, 0
  00f86c4  vspltw 2, 2, 0
  00f86c8  vspltw 2, 2, 0
  00f86cc  vspltw 2, 2, 0
  00f86d0  vspltw 2, 2, 0
  00f86d4  vspltw 2, 2, 0
  00f86d8  vspltw 2, 2, 0
  00f86dc  vspltw 2, 2, 0
  00f86e0  vspltw 2, 2, 0
  00f86e4  vspltw 2, 2, 0
  00f86e8  vspltw 2, 2, 0
  00f86ec  vspltw 2, 2, 0
  00f86f0  vspltw 2, 2, 0
  00f86f4  vspltw 2, 2, 0
  00f86f8  vspltw 2, 2, 0
  00f86fc  vspltw 2, 2, 0
  00f8700  vspltw 2, 2, 0
  00f8704  vspltw 2, 2, 0
  00f8708  vspltw 2, 2, 0
  00f870c  vspltw 2, 2, 0
  00f8710  vspltw 2, 2, 0
  00f8714  vspltw 2, 2, 0
  00f8718  vspltw 2, 2, 0
  00f871c  li 0, 464
  00f8720  vspltw 2, 2, 0
  00f8724  vspltw 2, 2, 0
  00f8728  vspltw 2, 2, 0
  00f872c  vspltw 2, 2, 0
  00f8730  vspltw 2, 2, 0
  00f8734  vspltw 2, 2, 0
  00f8738  vspltw 2, 2, 0
  00f873c  vspltw 2, 2, 0
  00f8740  vspltw 2, 2, 0
  00f8744  vspltw 2, 2, 0
  00f8748  vspltw 2, 2, 0
  00f874c  vspltw 2, 2, 0
  00f8750  stvewx 2, 4, 20
  00f8754  lhz 4, 6(27)
  00f8758  extsh 4, 4
  00f875c  extsw 4, 4
  00f8760  std 4, 480(1)
  00f8764  li 4, 156
  00f8768  lfd 2, 480(1)
  00f876c  fcfid 2, 2
  00f8770  frsp 2, 2
  00f8774  fmuls 1, 2, 1
  00f8778  stfs 1, 464(1)
  00f877c  stfs 1, 468(1)
  00f8780  stfs 1, 472(1)
  00f8784  stfs 1, 476(1)
  00f8788  lvx 2, 1, 0
  00f878c  vspltw 2, 2, 0
  00f8790  vspltw 2, 2, 0
  00f8794  vspltw 2, 2, 0
  00f8798  vspltw 2, 2, 0
  00f879c  vspltw 2, 2, 0
  00f87a0  vspltw 2, 2, 0
  00f87a4  vspltw 2, 2, 0
  00f87a8  vspltw 2, 2, 0
  00f87ac  vspltw 2, 2, 0
  00f87b0  vspltw 2, 2, 0
  00f87b4  vspltw 2, 2, 0
  00f87b8  vspltw 2, 2, 0
  00f87bc  vspltw 2, 2, 0
  00f87c0  vspltw 2, 2, 0
  00f87c4  vspltw 2, 2, 0
  00f87c8  vspltw 2, 2, 0
  00f87cc  vspltw 2, 2, 0
  00f87d0  vspltw 2, 2, 0
  00f87d4  vspltw 2, 2, 0
  00f87d8  vspltw 2, 2, 0
  00f87dc  vspltw 2, 2, 0
  00f87e0  vspltw 2, 2, 0
  00f87e4  vspltw 2, 2, 0
  00f87e8  vspltw 2, 2, 0
  00f87ec  vspltw 2, 2, 0
  00f87f0  vspltw 2, 2, 0
  00f87f4  vspltw 2, 2, 0
  00f87f8  vspltw 2, 2, 0
  00f87fc  vspltw 2, 2, 0
  00f8800  vspltw 2, 2, 0
  00f8804  vspltw 2, 2, 0
  00f8808  vspltw 2, 2, 0
  00f880c  vspltw 2, 2, 0
  00f8810  vspltw 2, 2, 0
  00f8814  vspltw 2, 2, 0
  00f8818  vspltw 2, 2, 0
  00f881c  stvewx 2, 4, 20
  00f8820  stw 23, 160(20)
  00f8824  lwz 4, 1192(18)
  00f8828  lwz 5, 8920(18)
  00f882c  subc 27, 3, 4
  00f8830  cmpwi 5, 0
  00f8834  clrldi 27, 27, 32
  00f8838  addic 24, 27, 24
  00f883c  addic 25, 27, 12
  00f8840  bt 2, 0xf8894
  00f8844  lwz 3, 40(29)
  00f8848  ori 4, 26, 0
  00f884c  ori 5, 27, 0
  00f8850  bl 0x5e8970
  00f8854  nop
  00f8858  lwz 3, 40(29)
  00f885c  ori 4, 21, 0
  00f8860  ori 5, 25, 0
  00f8864  bl 0x5e8970
  00f8868  nop
  00f886c  lwz 3, 40(29)
  00f8870  li 4, 3
  00f8874  ori 5, 24, 0
  00f8878  bl 0x5e8970
  00f887c  nop
  00f8880  lwz 3, 40(29)
  00f8884  lwz 4, 20(28)
  00f8888  bl 0x5e899c
  00f888c  nop
  00f8890  b 0xf89fc
  00f8894  ori 3, 31, 0
  00f8898  ori 4, 26, 0
  00f889c  ori 5, 27, 0
  00f88a0  bl 0x5e8970
  00f88a4  nop
  00f88a8  ori 3, 31, 0
  00f88ac  ori 4, 21, 0
  00f88b0  ori 5, 25, 0
  00f88b4  bl 0x5e8970
  00f88b8  nop
  00f88bc  li 4, 3
  00f88c0  ori 3, 31, 0
  00f88c4  ori 5, 24, 0
  00f88c8  bl 0x5e8970
  00f88cc  nop
  00f88d0  lwz 4, 20(28)
  00f88d4  ori 3, 31, 0
  00f88d8  bl 0x5e899c
  00f88dc  nop
  00f88e0  cmpwi 30, 0
  00f88e4  bt 2, 0xf8934
  00f88e8  ori 3, 30, 0
  00f88ec  ori 4, 26, 0
  00f88f0  ori 5, 27, 0
  00f88f4  bl 0x5e8970
  00f88f8  nop
  00f88fc  ori 3, 30, 0
  00f8900  ori 4, 21, 0
  00f8904  ori 5, 25, 0
  00f8908  bl 0x5e8970
  00f890c  nop
  00f8910  li 4, 3
  00f8914  ori 3, 30, 0
  00f8918  ori 5, 24, 0
  00f891c  bl 0x5e8970
  00f8920  nop
  00f8924  lwz 4, 20(28)
  00f8928  ori 3, 30, 0
  00f892c  bl 0x5e899c
  00f8930  nop
  00f8934  cmpwi 19, 0
  00f8938  bt 2, 0xf89fc
  00f893c  lwz 5, 20(29)
  00f8940  lis 3, 4
  00f8944  lis 4, -32768
  00f8948  ori 3, 3, 5760
  00f894c  or 6, 27, 4
  00f8950  lwz 7, 8(5)
  00f8954  lis 8, 4
  00f8958  stw 3, 0(7)
  00f895c  lwz 3, 8(5)
  00f8960  ori 7, 8, 5764
  00f8964  stw 6, 4(3)
  00f8968  lwz 3, 8(5)
  00f896c  lis 6, 4
  00f8970  addic 3, 3, 8
  00f8974  ori 6, 6, 5772
  00f8978  stw 3, 8(5)
  00f897c  lwz 3, 20(29)
  00f8980  or 5, 25, 4
  00f8984  or 4, 24, 4
  00f8988  lwz 8, 8(3)
  00f898c  stw 7, 0(8)
  00f8990  lwz 7, 8(3)
  00f8994  stw 5, 4(7)
  00f8998  lwz 5, 8(3)
  00f899c  lis 7, 8
  00f89a0  addic 5, 5, 8
  00f89a4  stw 5, 8(3)
  00f89a8  lwz 3, 20(29)
  00f89ac  lwz 5, 8(3)
  00f89b0  stw 6, 0(5)
  00f89b4  lwz 5, 8(3)
  00f89b8  ori 6, 7, 6172
  00f89bc  stw 4, 4(5)
  00f89c0  lwz 4, 8(3)
  00f89c4  li 5, 17
  00f89c8  addic 4, 4, 8
  00f89cc  stw 4, 8(3)
  00f89d0  lwz 3, 20(29)
  00f89d4  lwz 4, 20(28)
  00f89d8  lwz 7, 8(3)
  00f89dc  stw 6, 0(7)
  00f89e0  lwz 6, 8(3)
  00f89e4  stw 4, 4(6)
  00f89e8  lwz 4, 8(3)
  00f89ec  stw 5, 8(4)
  00f89f0  lwz 4, 8(3)
  00f89f4  addic 4, 4, 12
  00f89f8  stw 4, 8(3)
  00f89fc  addic 27, 1, 288
  00f8a00  addic 4, 23, 192
  00f8a04  ori 3, 27, 0
  00f8a08  bl 0x5e89c4
  00f8a0c  nop
  00f8a10  lfs 1, 44(23)
  00f8a14  ori 3, 27, 0
  00f8a18  bl 0x5e89f4
  00f8a1c  nop
  00f8a20  lfs 1, 16(23)
  00f8a24  ori 3, 22, 0
  00f8a28  lfs 2, 20(23)
  00f8a2c  lfs 3, 24(23)
  00f8a30  lfs 4, 20(16)
  00f8a34  bl 0x5e8848
  00f8a38  nop
  00f8a3c  addic 25, 1, 336
  00f8a40  addic 24, 1, 304
  00f8a44  lvx 2, 0, 22
  00f8a48  lvx 3, 0, 27
  00f8a4c  li 3, 16
  00f8a50  addic 22, 1, 320
  00f8a54  li 4, 32
  00f8a58  stvx 2, 0, 25
  00f8a5c  li 5, 48
  00f8a60  stvx 3, 0, 20
  00f8a64  addic 21, 1, 224
  00f8a68  lvx 2, 0, 24
  00f8a6c  stvx 2, 3, 20
  00f8a70  lvx 2, 0, 22
  00f8a74  ori 3, 21, 0
  00f8a78  stvx 2, 4, 20
  00f8a7c  lvx 2, 0, 25
  00f8a80  ori 4, 27, 0
  00f8a84  stvx 2, 5, 20
  00f8a88  lfs 1, 44(23)
  00f8a8c  stfs 1, 88(20)
  00f8a90  bl 0x5e8a94
  00f8a94  nop
  00f8a98  addic 3, 1, 240
  00f8a9c  lvx 2, 0, 21
  00f8aa0  addic 4, 1, 256
  00f8aa4  fmr 1, 31
  00f8aa8  addic 5, 1, 272
  00f8aac  stvx 2, 0, 27
  00f8ab0  addic 21, 1, 160
  00f8ab4  fmr 2, 31
  00f8ab8  fmr 3, 31
  00f8abc  lvx 2, 0, 3
  00f8ac0  lvx 3, 0, 4
  00f8ac4  ori 3, 21, 0
  00f8ac8  stvx 2, 0, 24
  00f8acc  lvx 2, 0, 5
  00f8ad0  stvx 3, 0, 22
  00f8ad4  stvx 2, 0, 25
  00f8ad8  bl 0x5e8b10
  00f8adc  nop
  00f8ae0  addic 3, 1, 192
  00f8ae4  lvx 2, 0, 21
  00f8ae8  li 4, 64
  00f8aec  stvx 2, 0, 3
  00f8af0  lvx 2, 0, 25
  00f8af4  lvx 3, 4, 16
  00f8af8  lwz 4, 8920(18)
  00f8afc  lvx 4, 0, 3
  00f8b00  cmpwi 4, 0
  00f8b04  vsel 2, 4, 2, 3
  00f8b08  stvx 2, 0, 25
  00f8b0c  bt 2, 0xf8b6c
  00f8b10  lis 3, 68
  00f8b14  li 6, 4
  00f8b18  ori 5, 3, 7932
  00f8b1c  lwz 3, 40(29)
  00f8b20  ori 4, 26, 0
  00f8b24  lwz 7, 8(3)
  00f8b28  stw 5, 0(7)
  00f8b2c  lwz 5, 8(3)
  00f8b30  stw 6, 4(5)
  00f8b34  lwz 5, 8(3)
  00f8b38  addic 5, 5, 8
  00f8b3c  stw 5, 8(3)
  00f8b40  lwz 5, 8(3)
  00f8b44  addic 4, 4, 1
  00f8b48  lwz 6, 0(27)
  00f8b4c  cmplwi 4, 16
  00f8b50  addic 27, 27, 4
  00f8b54  stw 6, 0(5)
  00f8b58  lwz 5, 8(3)
  00f8b5c  addic 5, 5, 4
  00f8b60  stw 5, 8(3)
  00f8b64  bt 0, 0xf8b40
  00f8b68  b 0xf8c70
  00f8b6c  lis 4, 68
  00f8b70  lwz 7, 8(31)
  00f8b74  li 3, 4
  00f8b78  ori 4, 4, 7932
  00f8b7c  ori 5, 27, 0
  00f8b80  li 6, 16
  00f8b84  stw 4, 0(7)
  00f8b88  lwz 7, 8(31)
  00f8b8c  stw 3, 4(7)
  00f8b90  lwz 7, 8(31)
  00f8b94  addic 7, 7, 8
  00f8b98  stw 7, 8(31)
  00f8b9c  lwz 7, 8(31)
  00f8ba0  lwz 8, 0(5)
  00f8ba4  addic 6, 6, -1
  00f8ba8  addic 5, 5, 4
  00f8bac  cmpwi 6, 0
  00f8bb0  stw 8, 0(7)
  00f8bb4  lwz 7, 8(31)
  00f8bb8  addic 7, 7, 4
  00f8bbc  stw 7, 8(31)
  00f8bc0  bf 2, 0xf8b9c
  00f8bc4  cmpwi 30, 0
  00f8bc8  bt 2, 0xf8c18
  00f8bcc  lwz 7, 8(30)
  00f8bd0  ori 5, 27, 0
  00f8bd4  li 6, 16
  00f8bd8  stw 4, 0(7)
  00f8bdc  lwz 7, 8(30)
  00f8be0  stw 3, 4(7)
  00f8be4  lwz 7, 8(30)
  00f8be8  addic 7, 7, 8
  00f8bec  stw 7, 8(30)
  00f8bf0  lwz 7, 8(30)
  00f8bf4  addic 6, 6, -1
  00f8bf8  lwz 8, 0(5)
  00f8bfc  cmpwi 6, 0
  00f8c00  addic 5, 5, 4
  00f8c04  stw 8, 0(7)
  00f8c08  lwz 7, 8(30)
  00f8c0c  addic 7, 7, 4
  00f8c10  stw 7, 8(30)
  00f8c14  bf 2, 0xf8bf0
  00f8c18  cmpwi 19, 0
  00f8c1c  bt 2, 0xf8c70
  00f8c20  ori 5, 3, 0
  00f8c24  lwz 3, 20(29)
  00f8c28  lwz 6, 8(3)
  00f8c2c  stw 4, 0(6)
  00f8c30  lwz 6, 8(3)
  00f8c34  li 4, 16
  00f8c38  stw 5, 4(6)
  00f8c3c  lwz 5, 8(3)
  00f8c40  addic 5, 5, 8
  00f8c44  stw 5, 8(3)
  00f8c48  lwz 5, 8(3)
  00f8c4c  addic 4, 4, -1
  00f8c50  lwz 6, 0(27)
  00f8c54  cmpwi 4, 0
  00f8c58  addic 27, 27, 4
  00f8c5c  stw 6, 0(5)
  00f8c60  lwz 5, 8(3)
  00f8c64  addic 5, 5, 4
  00f8c68  stw 5, 8(3)
  00f8c6c  bf 2, 0xf8c48
  00f8c70  lwz 3, 8920(18)
  00f8c74  addic 20, 20, 176
  00f8c78  cmpwi 3, 0
  00f8c7c  clrldi 20, 20, 32
  00f8c80  bt 2, 0xf8e30
  00f8c84  lwz 31, 8(28)
  00f8c88  ori 30, 26, 0
  00f8c8c  lwz 3, 0(28)
  00f8c90  cmplw 3, 30
  00f8c94  bf 1, 0xf8d18
  00f8c98  lwz 3, 40(29)
  00f8c9c  ori 4, 26, 0
  00f8ca0  lwz 5, 0(31)
  00f8ca4  lbz 7, 12(31)
  00f8ca8  clrlwi 6, 7, 30
  00f8cac  rlwinm 7, 7, 30, 30, 31
  00f8cb0  bl 0x4d676c
  00f8cb4  nop
  00f8cb8  lwz 3, 40(29)
  00f8cbc  li 4, 5
  00f8cc0  bl 0x5e8b20
  00f8cc4  nop
  00f8cc8  lwz 3, 40(29)
  00f8ccc  lwz 4, 4(31)
  00f8cd0  lwz 5, 8(31)
  00f8cd4  bl 0x5e8b5c
  00f8cd8  nop
  00f8cdc  lwz 3, 40(29)
  00f8ce0  lis 4, 4
  00f8ce4  addic 30, 30, 1
  00f8ce8  ori 4, 4, 6152
  00f8cec  addic 31, 31, 16
  00f8cf0  lwz 5, 8(3)
  00f8cf4  stw 4, 0(5)
  00f8cf8  lwz 4, 8(3)
  00f8cfc  stw 26, 4(4)
  00f8d00  lwz 4, 8(3)
  00f8d04  addic 4, 4, 8
  00f8d08  stw 4, 8(3)
  00f8d0c  lwz 3, 0(28)
  00f8d10  cmplw 30, 3
  00f8d14  bt 0, 0xf8c98
  00f8d18  lwz 3, 4(28)
  00f8d1c  cmpwi 3, 0
  00f8d20  bt 2, 0xf91bc
  00f8d24  lwz 4, 40(29)
  00f8d28  lis 3, 8
  00f8d2c  lis 31, 770
  00f8d30  ori 3, 3, 788
  00f8d34  ori 31, 31, 770
  00f8d38  lwz 6, 8(4)
  00f8d3c  lis 5, 1
  00f8d40  ori 27, 26, 0
  00f8d44  ori 5, 5, 1
  00f8d48  stw 3, 0(6)
  00f8d4c  lwz 3, 8(4)
  00f8d50  stw 31, 4(3)
  00f8d54  lwz 3, 8(4)
  00f8d58  stw 5, 8(3)
  00f8d5c  lwz 3, 8(4)
  00f8d60  addic 3, 3, 12
  00f8d64  stw 3, 8(4)
  00f8d68  lwz 30, 12(28)
  00f8d6c  lwz 3, 4(28)
  00f8d70  cmplw 3, 27
  00f8d74  bf 1, 0xf8df4
  00f8d78  li 6, 3
  00f8d7c  lwz 3, 40(29)
  00f8d80  lwz 5, 0(30)
  00f8d84  ori 4, 26, 0
  00f8d88  ori 7, 6, 0
  00f8d8c  bl 0x4d676c
  00f8d90  nop
  00f8d94  lwz 3, 40(29)
  00f8d98  li 4, 5
  00f8d9c  bl 0x5e8b20
  00f8da0  nop
  00f8da4  lwz 3, 40(29)
  00f8da8  lwz 4, 4(30)
  00f8dac  lwz 5, 8(30)
  00f8db0  bl 0x5e8b5c
  00f8db4  nop
  00f8db8  lwz 3, 40(29)
  00f8dbc  lis 4, 4
  00f8dc0  addic 27, 27, 1
  00f8dc4  ori 4, 4, 6152
  00f8dc8  addic 30, 30, 16
  00f8dcc  lwz 5, 8(3)
  00f8dd0  stw 4, 0(5)
  00f8dd4  lwz 4, 8(3)
  00f8dd8  stw 26, 4(4)
  00f8ddc  lwz 4, 8(3)
  00f8de0  addic 4, 4, 8
  00f8de4  stw 4, 8(3)
  00f8de8  lwz 3, 4(28)
  00f8dec  cmplw 27, 3
  00f8df0  bt 0, 0xf8d78
  00f8df4  lwz 5, 40(29)
  00f8df8  lis 3, 8
  00f8dfc  lis 4, 771
  00f8e00  ori 3, 3, 788
  00f8e04  ori 4, 4, 771
  00f8e08  lwz 6, 8(5)
  00f8e0c  stw 3, 0(6)
  00f8e10  lwz 3, 8(5)
  00f8e14  stw 31, 4(3)
  00f8e18  lwz 3, 8(5)
  00f8e1c  stw 4, 8(3)
  00f8e20  lwz 3, 8(5)
  00f8e24  addic 3, 3, 12
  00f8e28  stw 3, 8(5)
  00f8e2c  b 0xf91bc
  00f8e30  lwz 27, 8(28)
  00f8e34  ori 25, 26, 0
  00f8e38  lwz 3, 0(28)
  00f8e3c  cmplw 3, 25
  00f8e40  bf 1, 0xf8f98
  00f8e44  lwz 5, 0(27)
  00f8e48  lbz 7, 12(27)
  00f8e4c  ori 3, 31, 0
  00f8e50  ori 4, 26, 0
  00f8e54  clrlwi 6, 7, 30
  00f8e58  rlwinm 7, 7, 30, 30, 31
  00f8e5c  bl 0x4d676c
  00f8e60  nop
  00f8e64  li 24, 5
  00f8e68  ori 3, 31, 0
  00f8e6c  ori 4, 24, 0
  00f8e70  bl 0x5e8b20
  00f8e74  nop
  00f8e78  lwz 4, 4(27)
  00f8e7c  ori 3, 31, 0
  00f8e80  lwz 5, 8(27)
  00f8e84  bl 0x5e8b5c
  00f8e88  nop
  00f8e8c  lis 22, 4
  00f8e90  lwz 3, 8(31)
  00f8e94  cmpwi 30, 0
  00f8e98  ori 22, 22, 6152
  00f8e9c  stw 22, 0(3)
  00f8ea0  lwz 3, 8(31)
  00f8ea4  stw 26, 4(3)
  00f8ea8  lwz 3, 8(31)
  00f8eac  addic 3, 3, 8
  00f8eb0  stw 3, 8(31)
  00f8eb4  bt 2, 0xf8f18
  00f8eb8  lwz 5, 0(27)
  00f8ebc  ori 4, 26, 0
  00f8ec0  lbz 7, 12(27)
  00f8ec4  ori 3, 30, 0
  00f8ec8  clrlwi 6, 7, 30
  00f8ecc  rlwinm 7, 7, 30, 30, 31
  00f8ed0  bl 0x4d676c
  00f8ed4  nop
  00f8ed8  ori 4, 24, 0
  00f8edc  ori 3, 30, 0
  00f8ee0  bl 0x5e8b20
  00f8ee4  nop
  00f8ee8  lwz 4, 4(27)
  00f8eec  ori 3, 30, 0
  00f8ef0  lwz 5, 8(27)
  00f8ef4  bl 0x5e8b5c
  00f8ef8  nop
  00f8efc  lwz 3, 8(30)
  00f8f00  stw 22, 0(3)
  00f8f04  lwz 3, 8(30)
  00f8f08  stw 26, 4(3)
  00f8f0c  lwz 3, 8(30)
  00f8f10  addic 3, 3, 8
  00f8f14  stw 3, 8(30)
  00f8f18  cmpwi 19, 0
  00f8f1c  bt 2, 0xf8f84
  00f8f20  lwz 3, 20(29)
  00f8f24  ori 4, 26, 0
  00f8f28  lwz 5, 0(27)
  00f8f2c  lbz 7, 12(27)
  00f8f30  clrlwi 6, 7, 30
  00f8f34  rlwinm 7, 7, 30, 30, 31
  00f8f38  bl 0x4d676c
  00f8f3c  nop
  00f8f40  lwz 3, 20(29)
  00f8f44  ori 4, 24, 0
  00f8f48  bl 0x5e8b20
  00f8f4c  nop
  00f8f50  lwz 3, 20(29)
  00f8f54  lwz 4, 4(27)
  00f8f58  lwz 5, 8(27)
  00f8f5c  bl 0x5e8b5c
  00f8f60  nop
  00f8f64  lwz 3, 20(29)
  00f8f68  lwz 4, 8(3)
  00f8f6c  stw 22, 0(4)
  00f8f70  lwz 4, 8(3)
  00f8f74  stw 26, 4(4)
  00f8f78  lwz 4, 8(3)
  00f8f7c  addic 4, 4, 8
  00f8f80  stw 4, 8(3)
  00f8f84  addic 25, 25, 1
  00f8f88  lwz 3, 0(28)
  00f8f8c  addic 27, 27, 16
  00f8f90  cmplw 25, 3
  00f8f94  bt 0, 0xf8e44
  00f8f98  lwz 3, 4(28)
  00f8f9c  cmpwi 3, 0
  00f8fa0  bt 2, 0xf90a0
  00f8fa4  lis 3, 8
  00f8fa8  lwz 5, 8(31)
  00f8fac  lis 27, 770
  00f8fb0  ori 3, 3, 788
  00f8fb4  ori 27, 27, 770
  00f8fb8  lis 4, 1
  00f8fbc  ori 24, 26, 0
  00f8fc0  stw 3, 0(5)
  00f8fc4  ori 4, 4, 1
  00f8fc8  lwz 3, 8(31)
  00f8fcc  stw 27, 4(3)
  00f8fd0  lwz 3, 8(31)
  00f8fd4  stw 4, 8(3)
  00f8fd8  lwz 3, 8(31)
  00f8fdc  addic 3, 3, 12
  00f8fe0  stw 3, 8(31)
  00f8fe4  lwz 25, 12(28)
  00f8fe8  lwz 3, 4(28)
  00f8fec  cmplw 3, 24
  00f8ff0  bf 1, 0xf906c
  00f8ff4  li 6, 3
  00f8ff8  ori 4, 26, 0
  00f8ffc  lwz 5, 0(25)
  00f9000  ori 3, 31, 0
  00f9004  ori 7, 6, 0
  00f9008  bl 0x4d676c
  00f900c  nop
  00f9010  li 4, 5
  00f9014  ori 3, 31, 0
  00f9018  bl 0x5e8b20
  00f901c  nop
  00f9020  lwz 4, 4(25)
  00f9024  ori 3, 31, 0
  00f9028  lwz 5, 8(25)
  00f902c  bl 0x5e8b5c
  00f9030  nop
  00f9034  lis 4, 4
  00f9038  lwz 3, 8(31)
  00f903c  addic 24, 24, 1
  00f9040  ori 4, 4, 6152
  00f9044  addic 25, 25, 16
  00f9048  stw 4, 0(3)
  00f904c  lwz 3, 8(31)
  00f9050  stw 26, 4(3)
  00f9054  lwz 3, 8(31)
  00f9058  addic 3, 3, 8
  00f905c  stw 3, 8(31)
  00f9060  lwz 3, 4(28)
  00f9064  cmplw 24, 3
  00f9068  bt 0, 0xf8ff4
  00f906c  lis 3, 8
  00f9070  lwz 5, 8(31)
  00f9074  lis 4, 771
  00f9078  ori 3, 3, 788
  00f907c  ori 4, 4, 771
  00f9080  stw 3, 0(5)
  00f9084  lwz 3, 8(31)
  00f9088  stw 27, 4(3)
  00f908c  lwz 3, 8(31)
  00f9090  stw 4, 8(3)
  00f9094  lwz 3, 8(31)
  00f9098  addic 3, 3, 12
  00f909c  stw 3, 8(31)
  00f90a0  cmpwi 15, 0
  00f90a4  cmpwi 1, 19, 0
  00f90a8  bt 2, 0xf90e0
  00f90ac  lis 3, 8
  00f90b0  lwz 5, 8(30)
  00f90b4  li 4, 518
  00f90b8  ori 3, 3, 776
  00f90bc  li 6, 255
  00f90c0  stw 3, 0(5)
  00f90c4  lwz 3, 8(30)
  00f90c8  stw 4, 4(3)
  00f90cc  lwz 3, 8(30)
  00f90d0  stw 6, 8(3)
  00f90d4  lwz 3, 8(30)
  00f90d8  addic 3, 3, 12
  00f90dc  stw 3, 8(30)
  00f90e0  bt 6, 0xf91bc
  00f90e4  lwz 5, 20(29)
  00f90e8  lis 3, 4
  00f90ec  li 4, 2
  00f90f0  ori 3, 3, 5952
  00f90f4  lis 6, 4
  00f90f8  lwz 7, 8(5)
  00f90fc  ori 6, 6, 5956
  00f9100  addic 8, 1, 176
  00f9104  fmr 1, 29
  00f9108  stw 3, 0(7)
  00f910c  lwz 3, 8(5)
  00f9110  sldi 9, 17, 4
  00f9114  fmr 2, 30
  00f9118  stw 4, 4(3)
  00f911c  lwz 3, 8(5)
  00f9120  addic 3, 3, 8
  00f9124  stw 3, 8(5)
  00f9128  lwz 3, 20(29)
  00f912c  lis 5, 4
  00f9130  ori 5, 5, 5960
  00f9134  lwz 7, 8(3)
  00f9138  stw 6, 0(7)
  00f913c  lwz 6, 8(3)
  00f9140  stw 4, 4(6)
  00f9144  lwz 6, 8(3)
  00f9148  addic 6, 6, 8
  00f914c  stw 6, 8(3)
  00f9150  lwz 3, 20(29)
  00f9154  lis 6, 4
  00f9158  ori 6, 6, 5964
  00f915c  lwz 7, 8(3)
  00f9160  stw 5, 0(7)
  00f9164  lwz 5, 8(3)
  00f9168  lis 7, 165
  00f916c  stw 4, 4(5)
  00f9170  lwz 5, 8(3)
  00f9174  addic 5, 5, 8
  00f9178  stw 5, 8(3)
  00f917c  lwz 3, 20(29)
  00f9180  addic 5, 7, -15136
  00f9184  addc 5, 5, 9
  00f9188  lwz 7, 8(3)
  00f918c  clrldi 5, 5, 32
  00f9190  stw 6, 0(7)
  00f9194  lwz 6, 8(3)
  00f9198  stw 4, 4(6)
  00f919c  lwz 4, 8(3)
  00f91a0  addic 6, 4, 8
  00f91a4  ori 4, 17, 0
  00f91a8  stw 6, 8(3)
  00f91ac  ori 3, 18, 0
  00f91b0  lvx 2, 0, 8
  00f91b4  bl 0x4e1b80
  00f91b8  nop
  00f91bc  addic 23, 23, 256
  00f91c0  cmpw 23, 14
  00f91c4  bf 2, 0xf8124
  00f91c8  lwz 3, 8920(18)
  00f91cc  cmpwi 3, 0
  00f91d0  bt 2, 0xf9400
  00f91d4  lwz 4, 40(29)
  00f91d8  lis 3, 4
  00f91dc  li 6, 2
  00f91e0  ori 3, 3, 5952
  00f91e4  lis 5, 4
  00f91e8  lwz 7, 8(4)
  00f91ec  ori 5, 5, 5956
  00f91f0  stw 3, 0(7)
  00f91f4  lwz 3, 8(4)
  00f91f8  stw 6, 4(3)
  00f91fc  lwz 3, 8(4)
  00f9200  addic 3, 3, 8
  00f9204  stw 3, 8(4)
  00f9208  lwz 3, 40(29)
  00f920c  lis 4, 4
  00f9210  ori 4, 4, 5960
  00f9214  lwz 7, 8(3)
  00f9218  stw 5, 0(7)
  00f921c  lwz 5, 8(3)
  00f9220  stw 6, 4(5)
  00f9224  lwz 5, 8(3)
  00f9228  addic 5, 5, 8
  00f922c  stw 5, 8(3)
  00f9230  lwz 3, 40(29)
  00f9234  lis 5, 4
  00f9238  ori 8, 5, 5964
  00f923c  li 5, 144
  00f9240  lwz 7, 8(3)
  00f9244  stw 4, 0(7)
  00f9248  lwz 4, 8(3)
  00f924c  stw 6, 4(4)
  00f9250  lwz 4, 8(3)
  00f9254  addic 4, 4, 8
  00f9258  stw 4, 8(3)
  00f925c  lwz 3, 40(29)
  00f9260  ori 4, 26, 0
  00f9264  lwz 7, 8(3)
  00f9268  stw 8, 0(7)
  00f926c  lwz 7, 8(3)
  00f9270  stw 6, 4(7)
  00f9274  lwz 6, 8(3)
  00f9278  addic 6, 6, 8
  00f927c  stw 6, 8(3)
  00f9280  lwz 31, 40(29)
  00f9284  addic 3, 31, 20
  00f9288  bl 0x5d0140
  00f928c  nop
  00f9290  addic 3, 31, 168
  00f9294  li 4, 255
  00f9298  li 5, 72
  00f929c  bl 0x5d0140
  00f92a0  nop
  00f92a4  stw 26, 196(31)
  00f92a8  li 30, 12
  00f92ac  stw 26, 192(31)
  00f92b0  ori 3, 18, 0
  00f92b4  lwz 4, 40(29)
  00f92b8  ori 5, 30, 0
  00f92bc  bl 0x4d83ec
  00f92c0  nop
  00f92c4  lwz 4, 40(29)
  00f92c8  ori 3, 18, 0
  00f92cc  ori 5, 30, 0
  00f92d0  bl 0x4d82b8
  00f92d4  nop
  00f92d8  lwz 3, 40(29)
  00f92dc  lis 4, 4
  00f92e0  lis 6, 4
  00f92e4  ori 4, 4, 2672
  00f92e8  lwz 5, 8(3)
  00f92ec  lis 7, 4
  00f92f0  stw 4, 0(5)
  00f92f4  lwz 4, 8(3)
  00f92f8  ori 5, 6, 2676
  00f92fc  stw 26, 4(4)
  00f9300  lwz 4, 8(3)
  00f9304  addic 4, 4, 8
  00f9308  stw 4, 8(3)
  00f930c  lwz 3, 40(29)
  00f9310  lis 4, 8
  00f9314  ori 4, 4, 776
  00f9318  lwz 6, 8(3)
  00f931c  stw 5, 0(6)
  00f9320  lwz 5, 8(3)
  00f9324  li 6, 518
  00f9328  stw 26, 4(5)
  00f932c  lwz 5, 8(3)
  00f9330  addic 5, 5, 8
  00f9334  stw 5, 8(3)
  00f9338  lwz 3, 40(29)
  00f933c  lwz 5, 8(3)
  00f9340  stw 4, 0(5)
  00f9344  lwz 4, 8(3)
  00f9348  ori 5, 7, 772
  00f934c  lis 7, 8
  00f9350  stw 6, 4(4)
  00f9354  lwz 4, 8(3)
  00f9358  lis 6, 4
  00f935c  ori 6, 6, 800
  00f9360  stw 26, 8(4)
  00f9364  lwz 4, 8(3)
  00f9368  addic 4, 4, 12
  00f936c  stw 4, 8(3)
  00f9370  lwz 3, 40(29)
  00f9374  lwz 4, 8(3)
  00f9378  stw 5, 0(4)
  00f937c  lwz 4, 8(3)
  00f9380  lis 5, 0
  00f9384  ori 5, 5, 32774
  00f9388  stw 26, 4(4)
  00f938c  lwz 4, 8(3)
  00f9390  addic 4, 4, 8
  00f9394  stw 4, 8(3)
  00f9398  lwz 3, 40(29)
  00f939c  slwi 4, 5, 16
  00f93a0  or 4, 5, 4
  00f93a4  lwz 5, 8(3)
  00f93a8  stw 6, 0(5)
  00f93ac  lwz 5, 8(3)
  00f93b0  ori 6, 7, 788
  00f93b4  stw 4, 4(5)
  00f93b8  lwz 4, 8(3)
  00f93bc  lis 5, 770
  00f93c0  addic 4, 4, 8
  00f93c4  stw 4, 8(3)
  00f93c8  lwz 3, 40(29)
  00f93cc  ori 4, 5, 770
  00f93d0  lis 5, 771
  00f93d4  ori 5, 5, 771
  00f93d8  lwz 7, 8(3)
  00f93dc  stw 6, 0(7)
  00f93e0  lwz 6, 8(3)
  00f93e4  stw 4, 4(6)
  00f93e8  lwz 4, 8(3)
  00f93ec  stw 5, 8(4)
  00f93f0  lwz 4, 8(3)
  00f93f4  addic 4, 4, 12
  00f93f8  stw 4, 8(3)
  00f93fc  b 0xf952c
  00f9400  lwz 4, 32(29)
  00f9404  lis 3, 8
  00f9408  li 5, 518
  00f940c  ori 3, 3, 776
  00f9410  li 6, 1
  00f9414  ori 29, 1, 0
  00f9418  lwz 7, 8(4)
  00f941c  stw 3, 0(7)
  00f9420  lwz 7, 8(4)
  00f9424  li 3, 3
  00f9428  stw 5, 4(7)
  00f942c  lwz 5, 8(4)
  00f9430  stw 6, 8(5)
  00f9434  lwz 5, 8(4)
  00f9438  addic 5, 5, 12
  00f943c  stw 5, 8(4)
  00f9440  lwz 5, 416(29)
  00f9444  lis 4, 4
  00f9448  lwz 7, 428(29)
  00f944c  li 6, 2
  00f9450  ori 4, 4, 5952
  00f9454  lis 9, 4
  00f9458  lwz 8, 8(5)
  00f945c  ori 9, 9, 5956
  00f9460  lis 10, 4
  00f9464  ori 10, 10, 5964
  00f9468  stw 4, 0(8)
  00f946c  lwz 8, 8(5)
  00f9470  addic 3, 3, -1
  00f9474  stw 6, 4(8)
  00f9478  lwz 8, 8(5)
  00f947c  addic 8, 8, 8
  00f9480  cmpwi 3, 0
  00f9484  stw 8, 8(5)
  00f9488  stw 9, 0(8)
  00f948c  lwz 11, 8(5)
  00f9490  lis 8, 4
  00f9494  ori 8, 8, 5960
  00f9498  stw 6, 4(11)
  00f949c  lwz 11, 8(5)
  00f94a0  addic 11, 11, 8
  00f94a4  addic 29, 29, 4
  00f94a8  stw 11, 8(5)
  00f94ac  stw 8, 0(11)
  00f94b0  lwz 8, 8(5)
  00f94b4  stw 6, 4(8)
  00f94b8  lwz 8, 8(5)
  00f94bc  addic 8, 8, 8
  00f94c0  stw 8, 8(5)
  00f94c4  stw 10, 0(8)
  00f94c8  lwz 8, 8(5)
  00f94cc  stw 6, 4(8)
  00f94d0  lwz 8, 8(5)
  00f94d4  addic 8, 8, 8
  00f94d8  stw 8, 8(5)
  00f94dc  lwz 5, 8(7)
  00f94e0  stw 4, 0(5)
  00f94e4  lwz 4, 8(7)
  00f94e8  stw 6, 4(4)
  00f94ec  lwz 4, 8(7)
  00f94f0  addic 4, 4, 8
  00f94f4  stw 4, 8(7)
  00f94f8  stw 9, 0(4)
  00f94fc  lwz 4, 8(7)
  00f9500  stw 6, 4(4)
  00f9504  lwz 4, 8(7)
  00f9508  addic 4, 4, 8
  00f950c  stw 4, 8(7)
  00f9510  stw 10, 0(4)
  00f9514  lwz 4, 8(7)
  00f9518  stw 6, 4(4)
  00f951c  lwz 4, 8(7)
  00f9520  addic 4, 4, 8
  00f9524  stw 4, 8(7)
  00f9528  bf 2, 0xf9440
  00f952c  ori 3, 20, 0
  00f9530  ld 0, 704(1)
  00f9534  mtlr 0
  00f9538  lfd 27, 648(1)
  00f953c  lfd 28, 656(1)
  00f9540  lfd 29, 664(1)
  00f9544  lfd 30, 672(1)
  00f9548  lfd 31, 680(1)
  00f954c  ld 14, 504(1)
  00f9550  ld 15, 512(1)
  00f9554  ld 16, 520(1)
  00f9558  ld 17, 528(1)
  00f955c  ld 18, 536(1)
  00f9560  ld 19, 544(1)
  00f9564  ld 20, 552(1)
  00f9568  ld 21, 560(1)
  00f956c  ld 22, 568(1)
  00f9570  ld 23, 576(1)
  00f9574  ld 24, 584(1)
  00f9578  ld 25, 592(1)
  00f957c  ld 26, 600(1)
  00f9580  ld 27, 608(1)
  00f9584  ld 28, 616(1)
  00f9588  ld 29, 624(1)
  00f958c  ld 30, 632(1)
  00f9590  ld 31, 640(1)
  00f9594  addi 1, 1, 688
  00f9598  blr

FindMobysCloseToUpdate:   # 0xf959c, 0x324 bytes
  00f959c  stdu 1, -2080(1)
  00f95a0  mflr 0
  00f95a4  std 0, 2096(1)
  00f95a8  std 30, 2064(1)
  00f95ac  std 31, 2072(1)
  00f95b0  lis 30, 165
  00f95b4  li 31, 0
  00f95b8  addic 3, 1, 128
  00f95bc  ori 4, 31, 0
  00f95c0  addic 30, 30, -27836
  00f95c4  std 29, 2056(1)
  00f95c8  std 28, 2048(1)
  00f95cc  li 5, 1792
  00f95d0  bl 0x5d0140
  00f95d4  nop
  00f95d8  addic 3, 1, 1920
  00f95dc  li 5, 112
  00f95e0  ori 4, 31, 0
  00f95e4  bl 0x5d0140
  00f95e8  nop
  00f95ec  lis 3, 164
  00f95f0  lwz 29, -28512(3)
  00f95f4  lbz 3, 32(29)
  00f95f8  cmpwi 3, 255
  00f95fc  bt 2, 0xf9764
  00f9600  extsb 3, 3
  00f9604  cmpwi 3, 0
  00f9608  bt 0, 0xf975c
  00f960c  lhz 3, 52(29)
  00f9610  rlwinm 3, 3, 0, 30, 30
  00f9614  cmpwi 3, 0
  00f9618  bf 2, 0xf975c
  00f961c  lbz 3, 49(29)
  00f9620  ori 28, 31, 0
  00f9624  cmpwi 3, 0
  00f9628  bt 2, 0xf9630
  00f962c  li 28, 1
  00f9630  lhz 3, 50(29)
  00f9634  cmpwi 3, 255
  00f9638  bt 2, 0xf9648
  00f963c  lbz 3, 48(29)
  00f9640  cmpwi 3, 255
  00f9644  bf 2, 0xf9650
  00f9648  li 28, 1
  00f964c  b 0xf96b4
  00f9650  lis 5, 149
  00f9654  addic 3, 1, 112
  00f9658  addic 4, 29, 16
  00f965c  addic 5, 5, 5376
  00f9660  bl 0x502a64
  00f9664  nop
  00f9668  lbz 3, 48(29)
  00f966c  lfs 1, 112(1)
  00f9670  lfs 2, 116(1)
  00f9674  fmuls 1, 1, 1
  00f9678  clrldi 3, 3, 32
  00f967c  fmuls 2, 2, 2
  00f9680  std 3, 2032(1)
  00f9684  lfs 3, 120(1)
  00f9688  fmuls 3, 3, 3
  00f968c  fadds 1, 1, 2
  00f9690  lfd 2, 2032(1)
  00f9694  fcfid 2, 2
  00f9698  fadds 1, 1, 3
  00f969c  frsp 2, 2
  00f96a0  fmuls 2, 2, 2
  00f96a4  fcmpu 0, 1, 2
  00f96a8  cror 6, 1, 2
  00f96ac  bt 6, 0xf96b4
  00f96b0  li 28, 1
  00f96b4  cmpwi 28, 0
  00f96b8  bt 2, 0xf975c
  00f96bc  lbz 3, 33(29)
  00f96c0  extsb 4, 3
  00f96c4  cmpwi 4, 0
  00f96c8  bt 0, 0xf96e0
  00f96cc  addc 3, 1, 3
  00f96d0  li 4, 1
  00f96d4  clrldi 3, 3, 32
  00f96d8  stb 4, 1920(3)
  00f96dc  b 0xf975c
  00f96e0  lhz 3, 52(29)
  00f96e4  rlwinm 3, 3, 0, 19, 19
  00f96e8  cmpwi 3, 0
  00f96ec  bt 2, 0xf96fc
  00f96f0  addic 3, 30, 4
  00f96f4  stw 29, 0(30)
  00f96f8  clrldi 30, 3, 32
  00f96fc  lbz 3, 34(29)
  00f9700  rlwinm 4, 3, 3, 21, 28
  00f9704  slwi 3, 3, 3
  00f9708  addc 4, 1, 4
  00f970c  addc 5, 1, 3
  00f9710  clrldi 3, 4, 32
  00f9714  clrldi 4, 5, 32
  00f9718  lwz 4, 132(4)
  00f971c  cmpwi 4, 0
  00f9720  bf 2, 0xf9740
  00f9724  stw 29, 132(3)
  00f9728  lbz 3, 34(29)
  00f972c  slwi 3, 3, 3
  00f9730  addc 3, 1, 3
  00f9734  clrldi 3, 3, 32
  00f9738  stw 29, 128(3)
  00f973c  b 0xf975c
  00f9740  lwz 3, 132(3)
  00f9744  stw 29, 40(3)
  00f9748  lbz 3, 34(29)
  00f974c  slwi 3, 3, 3
  00f9750  addc 3, 1, 3
  00f9754  clrldi 3, 3, 32
  00f9758  stw 29, 132(3)
  00f975c  addic 29, 29, 256
  00f9760  b 0xf95f4
  00f9764  ori 8, 31, 0
  00f9768  ori 5, 1, 0
  00f976c  ori 4, 8, 0
  00f9770  lbz 3, 1920(5)
  00f9774  cmpwi 3, 0
  00f9778  bt 2, 0xf9834
  00f977c  lis 3, 165
  00f9780  addic 3, 3, -28284
  00f9784  lwzx 7, 3, 4
  00f9788  lis 3, 164
  00f978c  lhz 6, 0(7)
  00f9790  rlwinm 6, 6, 8, 9, 23
  00f9794  lwz 3, -28512(3)
  00f9798  addc 6, 3, 6
  00f979c  clrldi 6, 6, 32
  00f97a0  lhz 3, 52(6)
  00f97a4  rlwinm 3, 3, 0, 19, 19
  00f97a8  cmpwi 3, 0
  00f97ac  bt 2, 0xf97bc
  00f97b0  addic 3, 30, 4
  00f97b4  stw 6, 0(30)
  00f97b8  clrldi 30, 3, 32
  00f97bc  lbz 3, 34(6)
  00f97c0  rlwinm 9, 3, 3, 21, 28
  00f97c4  slwi 3, 3, 3
  00f97c8  addc 9, 1, 9
  00f97cc  addc 10, 1, 3
  00f97d0  clrldi 3, 9, 32
  00f97d4  clrldi 9, 10, 32
  00f97d8  lwz 9, 132(9)
  00f97dc  cmpwi 9, 0
  00f97e0  bf 2, 0xf9800
  00f97e4  stw 6, 132(3)
  00f97e8  lbz 3, 34(6)
  00f97ec  slwi 3, 3, 3
  00f97f0  addc 3, 1, 3
  00f97f4  clrldi 3, 3, 32
  00f97f8  stw 6, 128(3)
  00f97fc  b 0xf981c
  00f9800  lwz 3, 132(3)
  00f9804  stw 6, 40(3)
  00f9808  lbz 3, 34(6)
  00f980c  slwi 3, 3, 3
  00f9810  addc 3, 1, 3
  00f9814  clrldi 3, 3, 32
  00f9818  stw 6, 132(3)
  00f981c  lhz 3, 0(7)
  00f9820  extsh 3, 3
  00f9824  cmpwi 3, 0
  00f9828  bt 0, 0xf9834
  00f982c  addic 7, 7, 2
  00f9830  b 0xf9788
  00f9834  addic 8, 8, 1
  00f9838  addic 5, 5, 1
  00f983c  cmpwi 8, 112
  00f9840  addic 4, 4, 4
  00f9844  bt 0, 0xf9770
  00f9848  ori 6, 31, 0
  00f984c  ori 3, 1, 0
  00f9850  ori 5, 6, 0
  00f9854  ori 7, 5, 0
  00f9858  lwz 4, 128(3)
  00f985c  cmpwi 1, 7, 0
  00f9860  cmpwi 4, 0
  00f9864  bt 2, 0xf9888
  00f9868  bf 6, 0xf9878
  00f986c  ori 7, 4, 0
  00f9870  lwz 6, 132(3)
  00f9874  b 0xf9888
  00f9878  stw 4, 40(6)
  00f987c  lwz 4, 132(3)
  00f9880  stw 31, 40(4)
  00f9884  lwz 6, 132(3)
  00f9888  addic 5, 5, 1
  00f988c  addic 3, 3, 8
  00f9890  cmplwi 5, 224
  00f9894  bt 0, 0xf9858
  00f9898  ori 3, 7, 0
  00f989c  stw 31, 0(30)
  00f98a0  ld 0, 2096(1)
  00f98a4  mtlr 0
  00f98a8  ld 28, 2048(1)
  00f98ac  ld 29, 2056(1)
  00f98b0  ld 30, 2064(1)
  00f98b4  ld 31, 2072(1)
  00f98b8  addi 1, 1, 2080
  00f98bc  blr

UpdateMobyAnimFrame:   # 0xf98d8, 0x380 bytes
  00f98d8  stdu 1, -176(1)
  00f98dc  mflr 0
  00f98e0  std 0, 192(1)
  00f98e4  stfd 30, 160(1)
  00f98e8  stfd 31, 168(1)
  00f98ec  lis 4, 16
  00f98f0  std 30, 144(1)
  00f98f4  lfs 1, 92(3)
  00f98f8  std 28, 128(1)
  00f98fc  li 30, 0
  00f9900  addi 4, 4, -26432
  00f9904  std 31, 152(1)
  00f9908  ori 28, 30, 0
  00f990c  ori 31, 3, 0
  00f9910  lfs 5, 0(4)
  00f9914  lfs 2, 88(3)
  00f9918  fcmpu 0, 1, 5
  00f991c  std 29, 136(1)
  00f9920  std 27, 120(1)
  00f9924  lwz 4, 36(3)
  00f9928  bt 2, 0xf9bec
  00f992c  fcmpu 0, 2, 5
  00f9930  bt 2, 0xf9bec
  00f9934  lbz 7, 82(31)
  00f9938  lbz 3, 83(31)
  00f993c  lfs 31, 84(31)
  00f9940  cmpw 7, 3
  00f9944  bt 2, 0xf9950
  00f9948  fadds 2, 1, 31
  00f994c  b 0xf9958
  00f9950  fmuls 2, 1, 2
  00f9954  fadds 2, 31, 2
  00f9958  lis 5, 16
  00f995c  addi 5, 5, -26432
  00f9960  lfs 3, 4(5)
  00f9964  fcmpu 0, 2, 3
  00f9968  cror 6, 0, 2
  00f996c  bt 6, 0xf9994
  00f9970  lis 5, 16
  00f9974  addi 5, 5, -26432
  00f9978  lfs 3, 8(5)
  00f997c  fcmpu 0, 2, 3
  00f9980  cror 6, 1, 2
  00f9984  bt 6, 0xf9994
  00f9988  lis 5, 16
  00f998c  addi 5, 5, -26432
  00f9990  lfs 2, 12(5)
  00f9994  lis 5, 16
  00f9998  fcmpu 1, 2, 5
  00f999c  addic 4, 4, 72
  00f99a0  addi 5, 5, -26432
  00f99a4  rlwinm 6, 3, 2, 22, 29
  00f99a8  addc 4, 4, 6
  00f99ac  lfs 3, 12(5)
  00f99b0  clrldi 4, 4, 32
  00f99b4  lbz 29, 80(31)
  00f99b8  fcmpu 0, 2, 3
  00f99bc  ori 5, 29, 0
  00f99c0  lwz 4, 0(4)
  00f99c4  lbz 6, 81(31)
  00f99c8  lfs 4, 24(4)
  00f99cc  bt 0, 0xf9a64
  00f99d0  li 10, 8
  00f99d4  ori 5, 6, 0
  00f99d8  fsubs 2, 2, 3
  00f99dc  cmpw 7, 3
  00f99e0  lwz 8, 108(31)
  00f99e4  addic 6, 5, 1
  00f99e8  ori 9, 30, 0
  00f99ec  clrlwi 6, 6, 24
  00f99f0  bt 2, 0xf9a00
  00f99f4  lbz 11, 18(4)
  00f99f8  ori 7, 3, 0
  00f99fc  stb 11, 126(31)
  00f9a00  lfs 4, 24(4)
  00f9a04  lbz 11, 16(4)
  00f9a08  ori 30, 30, 1
  00f9a0c  fdivs 2, 2, 1
  00f9a10  cmpw 6, 11
  00f9a14  fcmpu 1, 4, 5
  00f9a18  bt 0, 0xf9a24
  00f9a1c  ori 6, 28, 0
  00f9a20  ori 30, 9, 3
  00f9a24  addic 9, 4, 28
  00f9a28  slwi 11, 6, 2
  00f9a2c  addc 9, 9, 11
  00f9a30  clrldi 9, 9, 32
  00f9a34  lwz 9, 0(9)
  00f9a38  bf 6, 0xf9a40
  00f9a3c  lfs 4, 0(8)
  00f9a40  addic 10, 10, -1
  00f9a44  fmuls 2, 4, 2
  00f9a48  cmpwi 10, 0
  00f9a4c  bt 1, 0xf9a54
  00f9a50  fmr 2, 5
  00f9a54  fcmpu 0, 2, 3
  00f9a58  cror 6, 1, 2
  00f9a5c  bt 6, 0xf99d4
  00f9a60  b 0xf9af0
  00f9a64  bf 4, 0xf9ae4
  00f9a68  li 3, 8
  00f9a6c  ori 6, 5, 0
  00f9a70  fdivs 2, 2, 1
  00f9a74  addic 5, 6, -1
  00f9a78  clrlwi 5, 5, 24
  00f9a7c  extsb 8, 5
  00f9a80  cmpwi 8, 0
  00f9a84  lwz 9, 104(31)
  00f9a88  fcmpu 1, 4, 5
  00f9a8c  bf 0, 0xf9aa4
  00f9a90  lbz 5, 16(4)
  00f9a94  ori 30, 30, 2
  00f9a98  addic 5, 5, -1
  00f9a9c  clrlwi 30, 30, 24
  00f9aa0  clrlwi 5, 5, 24
  00f9aa4  addic 8, 4, 28
  00f9aa8  slwi 10, 5, 2
  00f9aac  addc 8, 8, 10
  00f9ab0  clrldi 8, 8, 32
  00f9ab4  lwz 8, 0(8)
  00f9ab8  bf 6, 0xf9ac0
  00f9abc  lfs 4, 0(8)
  00f9ac0  fmuls 2, 4, 2
  00f9ac4  addic 3, 3, -1
  00f9ac8  cmpwi 3, 0
  00f9acc  fadds 2, 2, 3
  00f9ad0  bt 1, 0xf9ad8
  00f9ad4  fmr 2, 5
  00f9ad8  fcmpu 0, 2, 5
  00f9adc  bt 0, 0xf9a6c
  00f9ae0  b 0xf9af0
  00f9ae4  stfs 2, 84(31)
  00f9ae8  stb 30, 112(31)
  00f9aec  b 0xf9b10
  00f9af0  stb 7, 82(31)
  00f9af4  stb 5, 80(31)
  00f9af8  stb 6, 81(31)
  00f9afc  stw 8, 104(31)
  00f9b00  stw 9, 108(31)
  00f9b04  stfs 4, 92(31)
  00f9b08  stfs 2, 84(31)
  00f9b0c  stb 30, 112(31)
  00f9b10  lbz 3, 126(31)
  00f9b14  cmpwi 3, 0
  00f9b18  bt 2, 0xf9bec
  00f9b1c  lis 3, 16
  00f9b20  lfs 1, 84(31)
  00f9b24  ori 27, 29, 0
  00f9b28  addi 3, 3, -26432
  00f9b2c  lfs 2, 16(3)
  00f9b30  fmr 30, 2
  00f9b34  fmuls 1, 1, 30
  00f9b38  bl 0x502758
  00f9b3c  nop
  00f9b40  lbz 4, 80(31)
  00f9b44  fmuls 1, 31, 30
  00f9b48  slwi 29, 4, 4
  00f9b4c  addc 29, 29, 3
  00f9b50  bl 0x502758
  00f9b54  nop
  00f9b58  lwz 4, 36(31)
  00f9b5c  lbz 5, 82(31)
  00f9b60  ori 6, 28, 0
  00f9b64  addic 4, 4, 72
  00f9b68  slwi 5, 5, 2
  00f9b6c  addc 4, 4, 5
  00f9b70  rlwinm 5, 27, 4, 20, 27
  00f9b74  clrldi 4, 4, 32
  00f9b78  addc 3, 5, 3
  00f9b7c  lwz 4, 0(4)
  00f9b80  addic 5, 4, 28
  00f9b84  lbz 7, 16(4)
  00f9b88  lbz 8, 18(4)
  00f9b8c  slwi 7, 7, 2
  00f9b90  cmpw 8, 6
  00f9b94  addc 5, 5, 7
  00f9b98  clrldi 5, 5, 32
  00f9b9c  bf 1, 0xf9bec
  00f9ba0  lhz 8, 2(5)
  00f9ba4  lhz 7, 0(5)
  00f9ba8  extsh 8, 8
  00f9bac  extsh 7, 7
  00f9bb0  cmpw 1, 29, 8
  00f9bb4  cmpw 3, 8
  00f9bb8  crorc 2, 4, 0
  00f9bbc  bt 2, 0xf9bd8
  00f9bc0  clrldi 3, 7, 32
  00f9bc4  ori 4, 28, 0
  00f9bc8  ori 5, 31, 0
  00f9bcc  bl 0x15d12c
  00f9bd0  nop
  00f9bd4  b 0xf9bec
  00f9bd8  addic 6, 6, 1
  00f9bdc  lbz 7, 18(4)
  00f9be0  addic 5, 5, 4
  00f9be4  cmpw 6, 7
  00f9be8  bt 0, 0xf9ba0
  00f9bec  stb 30, 112(31)
  00f9bf0  lbz 3, 124(31)
  00f9bf4  lbz 30, 125(31)
  00f9bf8  cmpw 3, 30
  00f9bfc  bt 2, 0xf9c2c
  00f9c00  cmpwi 30, 255
  00f9c04  bf 2, 0xf9c20
  00f9c08  lis 3, 161
  00f9c0c  rlwinm 4, 31, 24, 30, 31
  00f9c10  lwz 3, 1808(3)
  00f9c14  clrlwi 3, 3, 30
  00f9c18  cmpw 4, 3
  00f9c1c  bf 2, 0xf9c2c
  00f9c20  ori 3, 31, 0
  00f9c24  bl 0xefba0
  00f9c28  nop
  00f9c2c  ld 0, 192(1)
  00f9c30  mtlr 0
  00f9c34  lfd 30, 160(1)
  00f9c38  lfd 31, 168(1)
  00f9c3c  ld 27, 120(1)
  00f9c40  ld 28, 128(1)
  00f9c44  ld 29, 136(1)
  00f9c48  ld 30, 144(1)
  00f9c4c  ld 31, 152(1)
  00f9c50  addi 1, 1, 176
  00f9c54  blr

MB_ProcessJoints:   # 0xf9c58, 0xc0 bytes
  00f9c58  stdu 1, -144(1)
  00f9c5c  mflr 0
  00f9c60  std 0, 160(1)
  00f9c64  std 29, 120(1)
  00f9c68  std 30, 128(1)
  00f9c6c  lwz 29, 36(3)
  00f9c70  std 31, 136(1)
  00f9c74  ori 30, 3, 0
  00f9c78  std 28, 112(1)
  00f9c7c  ori 31, 4, 0
  00f9c80  lbz 28, 8(29)
  00f9c84  cmpwi 28, 0
  00f9c88  bf 2, 0xf9ca0
  00f9c8c  li 3, 0
  00f9c90  ori 4, 3, 0
  00f9c94  ori 5, 3, 0
  00f9c98  bl 0xf34e8
  00f9c9c  b 0xf9cf8
  00f9ca0  lbz 3, 8(29)
  00f9ca4  lfs 1, 84(30)
  00f9ca8  lwz 5, 24(29)
  00f9cac  lwz 6, 104(30)
  00f9cb0  lwz 7, 108(30)
  00f9cb4  bl 0xf3fe0
  00f9cb8  ori 29, 3, 0
  00f9cbc  lwz 3, 96(30)
  00f9cc0  cmpwi 3, 0
  00f9cc4  bt 2, 0xf9cd0
  00f9cc8  ori 4, 29, 0
  00f9ccc  bl 0xf3b30
  00f9cd0  lwz 30, 100(30)
  00f9cd4  cmpwi 30, 0
  00f9cd8  bt 2, 0xf9ce8
  00f9cdc  ori 4, 29, 0
  00f9ce0  ori 3, 30, 0
  00f9ce4  bl 0xf3618
  00f9ce8  ori 3, 29, 0
  00f9cec  ori 4, 28, 0
  00f9cf0  ori 5, 31, 0
  00f9cf4  bl 0xf34e8
  00f9cf8  ld 0, 160(1)
  00f9cfc  mtlr 0
  00f9d00  ld 28, 112(1)
  00f9d04  ld 29, 120(1)
  00f9d08  ld 30, 128(1)
  00f9d0c  ld 31, 136(1)
  00f9d10  addi 1, 1, 144
  00f9d14  blr

MB_ComputeSelectedJoints:   # 0xf9d18, 0x2a8 bytes
  00f9d18  stdu 1, -176(1)
  00f9d1c  mflr 0
  00f9d20  std 0, 192(1)
  00f9d24  std 31, 168(1)
  00f9d28  std 29, 152(1)
  00f9d2c  std 25, 120(1)
  00f9d30  ori 31, 3, 0
  00f9d34  lis 29, 163
  00f9d38  std 30, 160(1)
  00f9d3c  li 25, 0
  00f9d40  ori 30, 4, 0
  00f9d44  std 28, 144(1)
  00f9d48  addic 29, 29, 18176
  00f9d4c  ori 28, 5, 0
  00f9d50  ori 4, 25, 0
  00f9d54  std 26, 128(1)
  00f9d58  li 5, 128
  00f9d5c  ori 3, 29, 0
  00f9d60  std 27, 136(1)
  00f9d64  std 24, 112(1)
  00f9d68  ori 26, 6, 0
  00f9d6c  bl 0x5d0140
  00f9d70  nop
  00f9d74  lwz 4, 36(31)
  00f9d78  ori 5, 25, 0
  00f9d7c  addic 6, 29, 128
  00f9d80  cmpw 30, 5
  00f9d84  ori 24, 6, 0
  00f9d88  ori 3, 5, 0
  00f9d8c  lwz 4, 28(4)
  00f9d90  bf 1, 0xf9e10
  00f9d94  ori 11, 25, 0
  00f9d98  lwzx 8, 28, 11
  00f9d9c  addic 7, 4, 4
  00f9da0  slwi 8, 8, 2
  00f9da4  ori 9, 25, 0
  00f9da8  addc 7, 7, 8
  00f9dac  clrldi 7, 7, 32
  00f9db0  lwz 8, 0(7)
  00f9db4  addic 7, 8, 4
  00f9db8  clrldi 7, 7, 32
  00f9dbc  lhz 8, 0(8)
  00f9dc0  cmplw 8, 9
  00f9dc4  bf 1, 0xf9dec
  00f9dc8  addic 10, 7, 1
  00f9dcc  lbz 27, 0(7)
  00f9dd0  li 12, 1
  00f9dd4  clrldi 7, 10, 32
  00f9dd8  ori 10, 27, 0
  00f9ddc  addic 9, 9, 1
  00f9de0  cmplw 9, 8
  00f9de4  stbx 12, 10, 29
  00f9de8  bt 0, 0xf9dc8
  00f9dec  cmpw 10, 3
  00f9df0  stb 10, 0(6)
  00f9df4  addic 6, 6, 1
  00f9df8  bf 1, 0xf9e00
  00f9dfc  extsw 3, 10
  00f9e00  addic 5, 5, 1
  00f9e04  addic 11, 11, 4
  00f9e08  cmpw 5, 30
  00f9e0c  bt 0, 0xf9d98
  00f9e10  addic 4, 3, 1
  00f9e14  li 5, 255
  00f9e18  stb 4, 127(29)
  00f9e1c  stbx 5, 29, 3
  00f9e20  lwz 3, 36(31)
  00f9e24  lbz 28, 8(3)
  00f9e28  cmpwi 28, 0
  00f9e2c  bf 2, 0xf9e48
  00f9e30  ori 3, 25, 0
  00f9e34  ori 4, 25, 0
  00f9e38  ori 5, 25, 0
  00f9e3c  bl 0xf34e8
  00f9e40  ori 29, 3, 0
  00f9e44  b 0xf9ea8
  00f9e48  lwz 5, 24(3)
  00f9e4c  lbz 4, 8(3)
  00f9e50  lfs 1, 84(31)
  00f9e54  ori 3, 4, 0
  00f9e58  lwz 6, 104(31)
  00f9e5c  lwz 7, 108(31)
  00f9e60  bl 0xf3fe0
  00f9e64  ori 27, 3, 0
  00f9e68  lwz 3, 96(31)
  00f9e6c  cmpwi 3, 0
  00f9e70  bt 2, 0xf9e7c
  00f9e74  ori 4, 27, 0
  00f9e78  bl 0xf3b30
  00f9e7c  lwz 31, 100(31)
  00f9e80  cmpwi 31, 0
  00f9e84  bt 2, 0xf9e94
  00f9e88  ori 4, 27, 0
  00f9e8c  ori 3, 31, 0
  00f9e90  bl 0xf3618
  00f9e94  ori 3, 27, 0
  00f9e98  ori 5, 29, 0
  00f9e9c  ori 4, 28, 0
  00f9ea0  bl 0xf34e8
  00f9ea4  ori 29, 3, 0
  00f9ea8  cmpw 30, 25
  00f9eac  bf 1, 0xf9f90
  00f9eb0  lbz 5, 0(24)
  00f9eb4  addic 3, 29, 16
  00f9eb8  addic 4, 26, 16
  00f9ebc  slwi 5, 5, 6
  00f9ec0  addic 7, 26, 16
  00f9ec4  addc 6, 29, 5
  00f9ec8  addc 3, 3, 5
  00f9ecc  clrldi 6, 6, 32
  00f9ed0  clrldi 3, 3, 32
  00f9ed4  addic 8, 26, 32
  00f9ed8  addic 25, 25, 1
  00f9edc  lfs 1, 0(6)
  00f9ee0  stfs 1, 0(26)
  00f9ee4  lfs 1, 4(6)
  00f9ee8  stfs 1, 4(26)
  00f9eec  lfs 1, 8(6)
  00f9ef0  stfs 1, 8(26)
  00f9ef4  lfs 1, 12(6)
  00f9ef8  addic 6, 29, 32
  00f9efc  stfs 1, 12(26)
  00f9f00  lfs 1, 0(3)
  00f9f04  addc 6, 6, 5
  00f9f08  stfs 1, 0(4)
  00f9f0c  clrldi 6, 6, 32
  00f9f10  lfs 1, 4(3)
  00f9f14  addic 4, 26, 32
  00f9f18  cmpw 25, 30
  00f9f1c  stfs 1, 4(7)
  00f9f20  lfs 1, 8(3)
  00f9f24  addic 24, 24, 1
  00f9f28  stfs 1, 8(7)
  00f9f2c  lfs 1, 12(3)
  00f9f30  addic 3, 29, 48
  00f9f34  stfs 1, 12(7)
  00f9f38  lfs 1, 0(6)
  00f9f3c  addc 3, 3, 5
  00f9f40  addic 5, 26, 48
  00f9f44  stfs 1, 0(4)
  00f9f48  lfs 1, 4(6)
  00f9f4c  clrldi 3, 3, 32
  00f9f50  addic 4, 26, 48
  00f9f54  stfs 1, 4(8)
  00f9f58  lfs 1, 8(6)
  00f9f5c  addic 26, 26, 64
  00f9f60  stfs 1, 8(8)
  00f9f64  lfs 1, 12(6)
  00f9f68  stfs 1, 12(8)
  00f9f6c  lfs 1, 0(3)
  00f9f70  stfs 1, 0(4)
  00f9f74  lfs 1, 4(3)
  00f9f78  stfs 1, 4(5)
  00f9f7c  lfs 1, 8(3)
  00f9f80  stfs 1, 8(5)
  00f9f84  lfs 1, 12(3)
  00f9f88  stfs 1, 12(5)
  00f9f8c  bt 0, 0xf9eb0
  00f9f90  ld 0, 192(1)
  00f9f94  mtlr 0
  00f9f98  ld 24, 112(1)
  00f9f9c  ld 25, 120(1)
  00f9fa0  ld 26, 128(1)
  00f9fa4  ld 27, 136(1)
  00f9fa8  ld 28, 144(1)
  00f9fac  ld 29, 152(1)
  00f9fb0  ld 30, 160(1)
  00f9fb4  ld 31, 168(1)
  00f9fb8  addi 1, 1, 176
  00f9fbc  blr

MB_ComputeSelectedJointPos:   # 0xf9fc0, 0x210 bytes
  00f9fc0  stdu 1, -176(1)
  00f9fc4  mflr 0
  00f9fc8  std 0, 192(1)
  00f9fcc  std 31, 168(1)
  00f9fd0  std 29, 152(1)
  00f9fd4  std 25, 120(1)
  00f9fd8  ori 31, 3, 0
  00f9fdc  lis 29, 163
  00f9fe0  std 30, 160(1)
  00f9fe4  li 25, 0
  00f9fe8  ori 30, 4, 0
  00f9fec  std 28, 144(1)
  00f9ff0  addic 29, 29, 18176
  00f9ff4  ori 28, 5, 0
  00f9ff8  ori 4, 25, 0
  00f9ffc  std 26, 128(1)
  00fa000  li 5, 128
  00fa004  ori 3, 29, 0
  00fa008  std 27, 136(1)
  00fa00c  std 24, 112(1)
  00fa010  ori 26, 6, 0
  00fa014  bl 0x5d0140
  00fa018  nop
  00fa01c  lwz 4, 36(31)
  00fa020  ori 5, 25, 0
  00fa024  addic 6, 29, 128
  00fa028  cmpw 30, 5
  00fa02c  ori 24, 6, 0
  00fa030  ori 3, 5, 0
  00fa034  lwz 4, 28(4)
  00fa038  bf 1, 0xfa0b8
  00fa03c  ori 11, 25, 0
  00fa040  lwzx 8, 28, 11
  00fa044  addic 7, 4, 4
  00fa048  slwi 8, 8, 2
  00fa04c  ori 9, 25, 0
  00fa050  addc 7, 7, 8
  00fa054  clrldi 7, 7, 32
  00fa058  lwz 8, 0(7)
  00fa05c  addic 7, 8, 4
  00fa060  clrldi 7, 7, 32
  00fa064  lhz 8, 0(8)
  00fa068  cmplw 8, 9
  00fa06c  bf 1, 0xfa094
  00fa070  addic 10, 7, 1
  00fa074  lbz 27, 0(7)
  00fa078  li 12, 1
  00fa07c  clrldi 7, 10, 32
  00fa080  ori 10, 27, 0
  00fa084  addic 9, 9, 1
  00fa088  cmplw 9, 8
  00fa08c  stbx 12, 10, 29
  00fa090  bt 0, 0xfa070
  00fa094  cmpw 10, 3
  00fa098  stb 10, 0(6)
  00fa09c  addic 6, 6, 1
  00fa0a0  bf 1, 0xfa0a8
  00fa0a4  extsw 3, 10
  00fa0a8  addic 5, 5, 1
  00fa0ac  addic 11, 11, 4
  00fa0b0  cmpw 5, 30
  00fa0b4  bt 0, 0xfa040
  00fa0b8  addic 4, 3, 1
  00fa0bc  li 5, 255
  00fa0c0  stb 4, 127(29)
  00fa0c4  stbx 5, 29, 3
  00fa0c8  lwz 3, 36(31)
  00fa0cc  lbz 28, 8(3)
  00fa0d0  cmpwi 28, 0
  00fa0d4  bf 2, 0xfa0f0
  00fa0d8  ori 3, 25, 0
  00fa0dc  ori 4, 25, 0
  00fa0e0  ori 5, 25, 0
  00fa0e4  bl 0xf34e8
  00fa0e8  ori 29, 3, 0
  00fa0ec  b 0xfa150
  00fa0f0  lwz 5, 24(3)
  00fa0f4  lbz 4, 8(3)
  00fa0f8  lfs 1, 84(31)
  00fa0fc  ori 3, 4, 0
  00fa100  lwz 6, 104(31)
  00fa104  lwz 7, 108(31)
  00fa108  bl 0xf3fe0
  00fa10c  ori 27, 3, 0
  00fa110  lwz 3, 96(31)
  00fa114  cmpwi 3, 0
  00fa118  bt 2, 0xfa124
  00fa11c  ori 4, 27, 0
  00fa120  bl 0xf3b30
  00fa124  lwz 31, 100(31)
  00fa128  cmpwi 31, 0
  00fa12c  bt 2, 0xfa13c
  00fa130  ori 4, 27, 0
  00fa134  ori 3, 31, 0
  00fa138  bl 0xf3618
  00fa13c  ori 3, 27, 0
  00fa140  ori 5, 29, 0
  00fa144  ori 4, 28, 0
  00fa148  bl 0xf34e8
  00fa14c  ori 29, 3, 0
  00fa150  cmpw 30, 25
  00fa154  bf 1, 0xfa1a0
  00fa158  lbz 4, 0(24)
  00fa15c  addic 3, 29, 48
  00fa160  addic 25, 25, 1
  00fa164  slwi 4, 4, 6
  00fa168  cmpw 25, 30
  00fa16c  addc 3, 3, 4
  00fa170  addic 24, 24, 1
  00fa174  clrldi 3, 3, 32
  00fa178  lfs 1, 0(3)
  00fa17c  stfs 1, 0(26)
  00fa180  lfs 1, 4(3)
  00fa184  stfs 1, 4(26)
  00fa188  lfs 1, 8(3)
  00fa18c  stfs 1, 8(26)
  00fa190  lfs 1, 12(3)
  00fa194  stfs 1, 12(26)
  00fa198  addic 26, 26, 16
  00fa19c  bt 0, 0xfa158
  00fa1a0  ld 0, 192(1)
  00fa1a4  mtlr 0
  00fa1a8  ld 24, 112(1)
  00fa1ac  ld 25, 120(1)
  00fa1b0  ld 26, 128(1)
  00fa1b4  ld 27, 136(1)
  00fa1b8  ld 28, 144(1)
  00fa1bc  ld 29, 152(1)
  00fa1c0  ld 30, 160(1)
  00fa1c4  ld 31, 168(1)
  00fa1c8  addi 1, 1, 176
  00fa1cc  blr

GetBlenderAtPnt:   # 0xfa1e0, 0x19c bytes
  00fa1e0  stdu 1, -64(1)
  00fa1e4  ori 10, 3, 0
  00fa1e8  li 9, -1
  00fa1ec  lis 8, 162
  00fa1f0  li 7, 0
  00fa1f4  lis 6, 16
  00fa1f8  lfs 3, 0(10)
  00fa1fc  stw 9, 0(5)
  00fa200  ori 3, 7, 0
  00fa204  lfs 1, 4(10)
  00fa208  lis 11, 162
  00fa20c  lfs 2, 8(10)
  00fa210  addi 6, 6, -24112
  00fa214  lwz 10, -14140(8)
  00fa218  addic 9, 11, -14080
  00fa21c  cmpw 10, 3
  00fa220  bf 1, 0xfa374
  00fa224  lfs 4, 0(9)
  00fa228  lfs 5, 4(9)
  00fa22c  fsubs 4, 3, 4
  00fa230  lfs 6, 8(9)
  00fa234  fsubs 5, 1, 5
  00fa238  lfs 7, 12(9)
  00fa23c  fsubs 6, 2, 6
  00fa240  fmuls 4, 4, 4
  00fa244  fmuls 5, 5, 5
  00fa248  fmuls 6, 6, 6
  00fa24c  fadds 4, 4, 5
  00fa250  fadds 4, 4, 6
  00fa254  fcmpu 0, 4, 7
  00fa258  cror 6, 1, 2
  00fa25c  bt 6, 0xfa360
  00fa260  lis 8, 162
  00fa264  slwi 9, 7, 7
  00fa268  addic 8, 8, -13568
  00fa26c  addc 8, 8, 9
  00fa270  clrldi 8, 8, 32
  00fa274  addic 9, 1, 48
  00fa278  lfs 4, 0(8)
  00fa27c  lfs 5, 16(8)
  00fa280  fmuls 4, 4, 3
  00fa284  fmuls 5, 5, 1
  00fa288  lfs 6, 32(8)
  00fa28c  lfs 7, 48(8)
  00fa290  fmuls 6, 6, 2
  00fa294  lfs 8, 8(8)
  00fa298  lfs 9, 24(8)
  00fa29c  fmuls 8, 8, 3
  00fa2a0  fmuls 9, 9, 1
  00fa2a4  fadds 4, 4, 5
  00fa2a8  lfs 5, 4(8)
  00fa2ac  lfs 10, 20(8)
  00fa2b0  fmuls 3, 5, 3
  00fa2b4  fmuls 1, 10, 1
  00fa2b8  lfs 11, 36(8)
  00fa2bc  lfs 5, 52(8)
  00fa2c0  lfs 10, 40(8)
  00fa2c4  fadds 8, 8, 9
  00fa2c8  fmuls 10, 10, 2
  00fa2cc  fmuls 2, 11, 2
  00fa2d0  fadds 4, 4, 6
  00fa2d4  lfs 6, 56(8)
  00fa2d8  ori 8, 3, 0
  00fa2dc  fadds 1, 3, 1
  00fa2e0  fadds 3, 8, 10
  00fa2e4  fadds 4, 4, 7
  00fa2e8  fadds 7, 1, 2
  00fa2ec  fadds 2, 3, 6
  00fa2f0  stfs 4, 0(9)
  00fa2f4  lfs 1, 0(6)
  00fa2f8  fadds 3, 7, 5
  00fa2fc  fcmpu 0, 4, 1
  00fa300  fcmpu 6, 2, 1
  00fa304  bt 1, 0xfa334
  00fa308  fmr 5, 2
  00fa30c  lfs 2, 4(6)
  00fa310  fcmpu 0, 4, 2
  00fa314  fcmpu 1, 5, 2
  00fa318  bt 0, 0xfa334
  00fa31c  fcmpu 0, 3, 1
  00fa320  bt 1, 0xfa334
  00fa324  fcmpu 0, 3, 2
  00fa328  bt 0, 0xfa334
  00fa32c  bt 25, 0xfa334
  00fa330  bf 4, 0xfa338
  00fa334  li 8, 1
  00fa338  cmpwi 8, 0
  00fa33c  bf 2, 0xfa374
  00fa340  lfs 2, 48(1)
  00fa344  li 3, 1
  00fa348  fadds 1, 2, 1
  00fa34c  lfs 2, 8(6)
  00fa350  stw 7, 0(5)
  00fa354  fmuls 1, 1, 2
  00fa358  stfs 1, 0(4)
  00fa35c  b 0xfa374
  00fa360  addic 7, 7, 1
  00fa364  lwz 10, -14140(8)
  00fa368  addic 9, 9, 16
  00fa36c  cmpw 10, 7
  00fa370  bt 1, 0xfa224
  00fa374  addi 1, 1, 64
  00fa378  blr

SetMobyLightFromBlender:   # 0xfa3a8, 0x568 bytes
  00fa3a8  stdu 1, -208(1)
  00fa3ac  mflr 0
  00fa3b0  std 0, 224(1)
  00fa3b4  stfd 31, 200(1)
  00fa3b8  std 31, 192(1)
  00fa3bc  ori 31, 3, 0
  00fa3c0  lis 3, 16
  00fa3c4  addic 6, 31, 16
  00fa3c8  addic 4, 31, 16
  00fa3cc  addi 7, 3, -23680
  00fa3d0  lis 8, 16256
  00fa3d4  addic 3, 1, 112
  00fa3d8  lfs 1, 0(6)
  00fa3dc  std 29, 176(1)
  00fa3e0  addic 5, 1, 128
  00fa3e4  li 29, 0
  00fa3e8  stfs 1, 112(1)
  00fa3ec  lfs 1, 4(4)
  00fa3f0  stfs 1, 116(1)
  00fa3f4  lfs 1, 8(4)
  00fa3f8  addic 4, 1, 132
  00fa3fc  stfs 1, 120(1)
  00fa400  lfs 31, 0(7)
  00fa404  std 30, 184(1)
  00fa408  stw 8, 124(1)
  00fa40c  bl 0xfa1e0
  00fa410  cmpwi 3, 0
  00fa414  bt 2, 0xfa430
  00fa418  lis 3, 162
  00fa41c  lwz 4, 128(1)
  00fa420  addic 3, 3, -13568
  00fa424  slwi 4, 4, 7
  00fa428  addc 29, 3, 4
  00fa42c  clrldi 29, 29, 32
  00fa430  lis 30, 115
  00fa434  lwz 3, 128(1)
  00fa438  lwz 4, -28252(30)
  00fa43c  cmpw 4, 3
  00fa440  bt 2, 0xfa4b0
  00fa444  cmpwi 3, -1
  00fa448  bf 2, 0xfa474
  00fa44c  lwz 4, -28252(30)
  00fa450  lis 3, 101
  00fa454  ld 6, 56(31)
  00fa458  addic 3, 3, 11848
  00fa45c  rldicl 5, 6, 32, 32
  00fa460  extsw 4, 4
  00fa464  slwi 6, 6, 0
  00fa468  bl 0x5cd098
  00fa46c  nop
  00fa470  b 0xfa4a8
  00fa474  lis 5, 101
  00fa478  extsw 4, 3
  00fa47c  addic 3, 5, 11896
  00fa480  lwz 5, 72(29)
  00fa484  lwz 6, 76(29)
  00fa488  lwz 7, 64(29)
  00fa48c  lwz 8, 68(29)
  00fa490  extsw 5, 5
  00fa494  extsw 6, 6
  00fa498  extsw 7, 7
  00fa49c  extsw 8, 8
  00fa4a0  bl 0x5cd098
  00fa4a4  nop
  00fa4a8  lwz 3, 128(1)
  00fa4ac  stw 3, -28252(30)
  00fa4b0  cmpwi 29, 0
  00fa4b4  bt 2, 0xfa75c
  00fa4b8  lwz 3, 80(29)
  00fa4bc  clrlwi 3, 3, 31
  00fa4c0  cmpwi 3, 0
  00fa4c4  bt 2, 0xfa75c
  00fa4c8  lwz 3, 64(29)
  00fa4cc  clrlwi 4, 3, 24
  00fa4d0  clrldi 4, 4, 32
  00fa4d4  lis 5, 16
  00fa4d8  std 4, 160(1)
  00fa4dc  rlwinm 4, 3, 24, 24, 31
  00fa4e0  lfs 4, 132(1)
  00fa4e4  lfd 1, 160(1)
  00fa4e8  clrldi 4, 4, 32
  00fa4ec  fcfid 1, 1
  00fa4f0  rlwinm 3, 3, 16, 24, 31
  00fa4f4  fsubs 5, 31, 4
  00fa4f8  addi 5, 5, -23680
  00fa4fc  clrldi 3, 3, 32
  00fa500  std 4, 160(1)
  00fa504  frsp 7, 1
  00fa508  fmuls 7, 5, 7
  00fa50c  lfd 1, 160(1)
  00fa510  std 3, 160(1)
  00fa514  fcfid 2, 1
  00fa518  lfs 1, 4(5)
  00fa51c  fcmpu 0, 7, 1
  00fa520  frsp 6, 2
  00fa524  lfd 2, 160(1)
  00fa528  fcfid 2, 2
  00fa52c  cror 6, 0, 2
  00fa530  fmuls 6, 6, 5
  00fa534  frsp 2, 2
  00fa538  fmuls 5, 2, 5
  00fa53c  bt 6, 0xfa544
  00fa540  fmr 7, 1
  00fa544  fcmpu 0, 6, 1
  00fa548  fcmpu 1, 5, 1
  00fa54c  cror 2, 0, 2
  00fa550  bt 2, 0xfa558
  00fa554  fmr 6, 1
  00fa558  bf 5, 0xfa560
  00fa55c  fmr 5, 1
  00fa560  lwz 3, 68(29)
  00fa564  clrlwi 4, 3, 24
  00fa568  fmr 2, 4
  00fa56c  clrldi 4, 4, 32
  00fa570  std 4, 160(1)
  00fa574  rlwinm 4, 3, 24, 24, 31
  00fa578  rlwinm 3, 3, 16, 24, 31
  00fa57c  clrldi 4, 4, 32
  00fa580  clrldi 3, 3, 32
  00fa584  lfd 3, 160(1)
  00fa588  std 4, 160(1)
  00fa58c  fcfid 3, 3
  00fa590  frsp 4, 3
  00fa594  lfd 3, 160(1)
  00fa598  fmuls 4, 4, 2
  00fa59c  std 3, 160(1)
  00fa5a0  fcfid 3, 3
  00fa5a4  fcmpu 0, 4, 1
  00fa5a8  frsp 3, 3
  00fa5ac  cror 6, 0, 2
  00fa5b0  lfd 8, 160(1)
  00fa5b4  fmuls 3, 3, 2
  00fa5b8  fcfid 8, 8
  00fa5bc  fcmpu 6, 3, 1
  00fa5c0  frsp 8, 8
  00fa5c4  fmuls 2, 8, 2
  00fa5c8  bt 6, 0xfa5d0
  00fa5cc  fmr 4, 1
  00fa5d0  fcmpu 1, 2, 1
  00fa5d4  bf 25, 0xfa5dc
  00fa5d8  fmr 3, 1
  00fa5dc  bf 5, 0xfa5e4
  00fa5e0  fmr 2, 1
  00fa5e4  fadds 4, 7, 4
  00fa5e8  lis 3, 16
  00fa5ec  fadds 2, 5, 2
  00fa5f0  addi 3, 3, -23680
  00fa5f4  fadds 7, 6, 3
  00fa5f8  lfs 5, 8(3)
  00fa5fc  fadds 3, 4, 5
  00fa600  fadds 2, 2, 5
  00fa604  fadds 7, 7, 5
  00fa608  fcmpu 0, 3, 1
  00fa60c  fcmpu 6, 7, 1
  00fa610  cror 6, 0, 2
  00fa614  bt 6, 0xfa61c
  00fa618  fmr 3, 1
  00fa61c  fcmpu 1, 2, 1
  00fa620  bf 25, 0xfa628
  00fa624  fmr 7, 1
  00fa628  bf 5, 0xfa630
  00fa62c  fmr 2, 1
  00fa630  fctiwz 1, 3
  00fa634  fctiwz 3, 7
  00fa638  lis 3, -256
  00fa63c  fctiwz 2, 2
  00fa640  li 0, 144
  00fa644  stfd 1, 160(1)
  00fa648  lwz 4, 164(1)
  00fa64c  stfd 3, 160(1)
  00fa650  lwz 5, 164(1)
  00fa654  stfd 2, 160(1)
  00fa658  slwi 5, 5, 8
  00fa65c  lwz 6, 164(1)
  00fa660  or 4, 4, 5
  00fa664  slwi 5, 6, 16
  00fa668  or 4, 4, 5
  00fa66c  or 3, 4, 3
  00fa670  stw 3, 144(1)
  00fa674  stw 3, 148(1)
  00fa678  stw 3, 152(1)
  00fa67c  stw 3, 156(1)
  00fa680  lvx 2, 1, 0
  00fa684  vspltw 2, 2, 0
  00fa688  vspltw 2, 2, 0
  00fa68c  vspltw 2, 2, 0
  00fa690  vspltw 2, 2, 0
  00fa694  vspltw 2, 2, 0
  00fa698  vspltw 2, 2, 0
  00fa69c  vspltw 2, 2, 0
  00fa6a0  lis 4, 16
  00fa6a4  vspltw 2, 2, 0
  00fa6a8  li 3, 128
  00fa6ac  vspltw 2, 2, 0
  00fa6b0  addi 4, 4, -23680
  00fa6b4  vspltw 2, 2, 0
  00fa6b8  vspltw 2, 2, 0
  00fa6bc  vspltw 2, 2, 0
  00fa6c0  vspltw 2, 2, 0
  00fa6c4  vspltw 2, 2, 0
  00fa6c8  lfs 1, 132(1)
  00fa6cc  vspltw 2, 2, 0
  00fa6d0  vspltw 2, 2, 0
  00fa6d4  vspltw 2, 2, 0
  00fa6d8  vspltw 2, 2, 0
  00fa6dc  vspltw 2, 2, 0
  00fa6e0  vspltw 2, 2, 0
  00fa6e4  vspltw 2, 2, 0
  00fa6e8  vspltw 2, 2, 0
  00fa6ec  vspltw 2, 2, 0
  00fa6f0  vspltw 2, 2, 0
  00fa6f4  vspltw 2, 2, 0
  00fa6f8  vspltw 2, 2, 0
  00fa6fc  vspltw 2, 2, 0
  00fa700  vspltw 2, 2, 0
  00fa704  vspltw 2, 2, 0
  00fa708  vspltw 2, 2, 0
  00fa70c  vspltw 2, 2, 0
  00fa710  vspltw 2, 2, 0
  00fa714  vspltw 2, 2, 0
  00fa718  vspltw 2, 2, 0
  00fa71c  vspltw 2, 2, 0
  00fa720  vspltw 2, 2, 0
  00fa724  stvewx 2, 3, 31
  00fa728  lfs 2, 12(4)
  00fa72c  lwz 3, 72(29)
  00fa730  fmuls 1, 1, 2
  00fa734  lwz 4, 76(29)
  00fa738  clrlwi 3, 3, 24
  00fa73c  rlwimi 3, 4, 8, 16, 23
  00fa740  fctidz 1, 1
  00fa744  stfd 1, 160(1)
  00fa748  lwz 4, 164(1)
  00fa74c  rlwimi 3, 4, 16, 0, 15
  00fa750  clrldi 3, 3, 32
  00fa754  std 3, 56(31)
  00fa758  b 0xfa768
  00fa75c  ld 3, 56(31)
  00fa760  slwi 3, 3, 0
  00fa764  std 3, 56(31)
  00fa768  addic 3, 1, 112
  00fa76c  addic 4, 1, 136
  00fa770  bl 0xda2f8
  00fa774  nop
  00fa778  cmpwi 3, 0
  00fa77c  bt 2, 0xfa8dc
  00fa780  lwz 4, 16(3)
  00fa784  clrlwi 5, 4, 24
  00fa788  clrldi 5, 5, 32
  00fa78c  std 5, 160(1)
  00fa790  lfs 1, 136(1)
  00fa794  lfs 2, 12(3)
  00fa798  rlwinm 5, 4, 24, 24, 31
  00fa79c  fmuls 1, 1, 1
  00fa7a0  rlwinm 4, 4, 16, 24, 31
  00fa7a4  clrldi 5, 5, 32
  00fa7a8  clrldi 3, 4, 32
  00fa7ac  lwz 4, 128(31)
  00fa7b0  clrlwi 6, 4, 24
  00fa7b4  fdivs 1, 1, 2
  00fa7b8  lfd 2, 160(1)
  00fa7bc  std 5, 160(1)
  00fa7c0  clrldi 5, 6, 32
  00fa7c4  rlwinm 6, 4, 24, 24, 31
  00fa7c8  rlwinm 4, 4, 16, 24, 31
  00fa7cc  clrldi 6, 6, 32
  00fa7d0  clrldi 4, 4, 32
  00fa7d4  fcfid 2, 2
  00fa7d8  lfd 3, 160(1)
  00fa7dc  std 3, 160(1)
  00fa7e0  lis 3, 16
  00fa7e4  fcfid 3, 3
  00fa7e8  addi 7, 3, -23680
  00fa7ec  frsp 2, 2
  00fa7f0  frsp 3, 3
  00fa7f4  lfd 4, 160(1)
  00fa7f8  std 5, 160(1)
  00fa7fc  ld 3, 56(31)
  00fa800  lfd 5, 160(1)
  00fa804  std 6, 160(1)
  00fa808  fcfid 4, 4
  00fa80c  fcfid 5, 5
  00fa810  frsp 4, 4
  00fa814  frsp 5, 5
  00fa818  fsubs 1, 31, 1
  00fa81c  fmuls 2, 2, 1
  00fa820  fmuls 6, 3, 1
  00fa824  lfd 3, 160(1)
  00fa828  fmuls 1, 4, 1
  00fa82c  std 4, 160(1)
  00fa830  fcfid 3, 3
  00fa834  lfs 4, 8(7)
  00fa838  lfs 31, 4(7)
  00fa83c  fadds 2, 2, 5
  00fa840  frsp 5, 3
  00fa844  fadds 3, 2, 4
  00fa848  lfd 2, 160(1)
  00fa84c  fcfid 2, 2
  00fa850  fadds 5, 6, 5
  00fa854  fcmpu 0, 3, 31
  00fa858  frsp 6, 2
  00fa85c  fadds 2, 5, 4
  00fa860  cror 6, 0, 2
  00fa864  fadds 1, 1, 6
  00fa868  fadds 1, 1, 4
  00fa86c  bt 6, 0xfa874
  00fa870  fmr 3, 31
  00fa874  fcmpu 0, 2, 31
  00fa878  fcmpu 1, 1, 31
  00fa87c  cror 2, 0, 2
  00fa880  bt 2, 0xfa888
  00fa884  fmr 2, 31
  00fa888  bf 5, 0xfa890
  00fa88c  fmr 1, 31
  00fa890  fctiwz 3, 3
  00fa894  fctiwz 2, 2
  00fa898  lis 4, -256
  00fa89c  fctiwz 1, 1
  00fa8a0  stfd 3, 160(1)
  00fa8a4  lwz 5, 164(1)
  00fa8a8  stfd 2, 160(1)
  00fa8ac  lwz 6, 164(1)
  00fa8b0  stfd 1, 160(1)
  00fa8b4  slwi 6, 6, 8
  00fa8b8  lwz 7, 164(1)
  00fa8bc  or 5, 5, 6
  00fa8c0  slwi 6, 7, 16
  00fa8c4  or 5, 5, 6
  00fa8c8  or 4, 5, 4
  00fa8cc  sldi 4, 4, 32
  00fa8d0  or 3, 3, 4
  00fa8d4  std 3, 56(31)
  00fa8d8  b 0xfa8f0
  00fa8dc  lwz 3, 128(31)
  00fa8e0  ld 4, 56(31)
  00fa8e4  sldi 3, 3, 32
  00fa8e8  or 3, 4, 3
  00fa8ec  std 3, 56(31)
  00fa8f0  ld 0, 224(1)
  00fa8f4  mtlr 0
  00fa8f8  lfd 31, 200(1)
  00fa8fc  ld 29, 176(1)
  00fa900  ld 30, 184(1)
  00fa904  ld 31, 192(1)
  00fa908  addi 1, 1, 208
  00fa90c  blr

STUB_000fa910:   # 0xfa910, 0x24 bytes
  00fa910  stdu 1, -112(1)
  00fa914  mflr 0
  00fa918  std 0, 128(1)
  00fa91c  bl 0xda2f8
  00fa920  nop
  00fa924  ld 0, 128(1)
  00fa928  mtlr 0
  00fa92c  addi 1, 1, 112
  00fa930  blr

InterpolateAnimation:   # 0xfa940, 0x146c bytes
  00fa940  stdu 1, -8992(1)
  00fa944  mflr 0
  00fa948  std 0, 9008(1)
  00fa94c  stfd 27, 8952(1)
  00fa950  stfd 28, 8960(1)
  00fa954  stfd 29, 8968(1)
  00fa958  stfd 30, 8976(1)
  00fa95c  stfd 31, 8984(1)
  00fa960  addi 0, 1, 8752
  00fa964  stvx 29, 0, 0
  00fa968  addic 0, 0, 16
  00fa96c  stvx 30, 0, 0
  00fa970  addic 0, 0, 16
  00fa974  stvx 31, 0, 0
  00fa978  std 19, 8848(1)
  00fa97c  std 14, 8808(1)
  00fa980  ori 14, 3, 0
  00fa984  std 31, 8944(1)
  00fa988  ori 19, 4, 0
  00fa98c  std 30, 8936(1)
  00fa990  rlwinm 31, 19, 0, 23, 23
  00fa994  rlwinm 30, 19, 0, 22, 22
  00fa998  lwz 3, 36(14)
  00fa99c  lfs 1, 84(14)
  00fa9a0  lwz 6, 104(14)
  00fa9a4  lwz 7, 108(14)
  00fa9a8  lwz 5, 24(3)
  00fa9ac  lbz 4, 8(3)
  00fa9b0  std 29, 8928(1)
  00fa9b4  std 28, 8920(1)
  00fa9b8  std 27, 8912(1)
  00fa9bc  std 26, 8904(1)
  00fa9c0  std 25, 8896(1)
  00fa9c4  std 24, 8888(1)
  00fa9c8  std 23, 8880(1)
  00fa9cc  std 22, 8872(1)
  00fa9d0  std 21, 8864(1)
  00fa9d4  std 20, 8856(1)
  00fa9d8  std 18, 8840(1)
  00fa9dc  std 17, 8832(1)
  00fa9e0  std 16, 8824(1)
  00fa9e4  std 15, 8816(1)
  00fa9e8  ori 3, 4, 0
  00fa9ec  bl 0xf3fe0
  00fa9f0  ori 29, 3, 0
  00fa9f4  lwz 3, 96(14)
  00fa9f8  cmpwi 3, 0
  00fa9fc  bt 2, 0xfaa10
  00faa00  cmpwi 31, 0
  00faa04  bf 2, 0xfaa10
  00faa08  ori 4, 29, 0
  00faa0c  bl 0xf3b30
  00faa10  lwz 3, 100(14)
  00faa14  std 29, 8704(1)
  00faa18  cmpwi 3, 0
  00faa1c  bt 2, 0xfaa38
  00faa20  cmpwi 30, 0
  00faa24  std 29, 8704(1)
  00faa28  bf 2, 0xfaa38
  00faa2c  ori 4, 29, 0
  00faa30  std 29, 8704(1)
  00faa34  bl 0xf3618
  00faa38  lis 3, 163
  00faa3c  lwz 30, 104(14)
  00faa40  rlwinm 4, 19, 11, 13, 20
  00faa44  lwz 15, 36(14)
  00faa48  addic 3, 3, -14912
  00faa4c  ori 31, 30, 0
  00faa50  addc 19, 3, 4
  00faa54  li 14, 0
  00faa58  clrldi 19, 19, 32
  00faa5c  lbz 27, 8(15)
  00faa60  lwz 15, 24(15)
  00faa64  addic 3, 1, 8552
  00faa68  addic 4, 19, 16
  00faa6c  lhz 5, 8(30)
  00faa70  lhz 6, 8(31)
  00faa74  addc 29, 30, 5
  00faa78  addc 28, 31, 6
  00faa7c  stw 4, 8720(1)
  00faa80  ori 4, 14, 0
  00faa84  li 5, 129
  00faa88  addic 29, 29, 16
  00faa8c  addic 28, 28, 16
  00faa90  bl 0x5d0140
  00faa94  nop
  00faa98  ori 3, 14, 0
  00faa9c  lhz 4, 10(30)
  00faaa0  cmpw 4, 3
  00faaa4  bf 1, 0xfaad4
  00faaa8  clrldi 4, 29, 32
  00faaac  addic 3, 3, 1
  00faab0  addic 29, 29, 8
  00faab4  lbz 5, 6(4)
  00faab8  lbz 4, 7(4)
  00faabc  addc 5, 1, 5
  00faac0  clrldi 5, 5, 32
  00faac4  stb 4, 8552(5)
  00faac8  lhz 4, 10(30)
  00faacc  cmpw 3, 4
  00faad0  bt 0, 0xfaaa8
  00faad4  ori 3, 14, 0
  00faad8  lhz 4, 10(31)
  00faadc  cmpw 4, 3
  00faae0  bf 1, 0xfab18
  00faae4  clrldi 4, 28, 32
  00faae8  addic 3, 3, 1
  00faaec  addic 28, 28, 8
  00faaf0  lbz 5, 6(4)
  00faaf4  lbz 4, 7(4)
  00faaf8  addc 5, 1, 5
  00faafc  clrldi 5, 5, 32
  00fab00  lbz 6, 8552(5)
  00fab04  or 4, 6, 4
  00fab08  stb 4, 8552(5)
  00fab0c  lhz 4, 10(31)
  00fab10  cmpw 3, 4
  00fab14  bt 0, 0xfaae4
  00fab18  ori 20, 14, 0
  00fab1c  std 27, 8712(1)
  00fab20  ori 29, 20, 0
  00fab24  cmpw 27, 29
  00fab28  ori 18, 29, 0
  00fab2c  bf 1, 0xfbcac
  00fab30  ori 24, 14, 0
  00fab34  ld 31, 8704(1)
  00fab38  ori 16, 1, 0
  00fab3c  ori 28, 24, 0
  00fab40  ori 17, 19, 0
  00fab44  lfs 1, 0(31)
  00fab48  ld 3, 8704(1)
  00fab4c  stfs 1, 112(1)
  00fab50  lfs 1, 4(31)
  00fab54  addic 4, 3, 16
  00fab58  addic 3, 3, 32
  00fab5c  stfs 1, 116(1)
  00fab60  addc 4, 4, 24
  00fab64  lfs 1, 8(31)
  00fab68  addc 3, 3, 24
  00fab6c  clrldi 4, 4, 32
  00fab70  stfs 1, 120(1)
  00fab74  clrldi 3, 3, 32
  00fab78  lfs 1, 12(31)
  00fab7c  stfs 1, 124(1)
  00fab80  lfs 1, 0(4)
  00fab84  stfs 1, 128(1)
  00fab88  lfs 1, 4(4)
  00fab8c  stfs 1, 132(1)
  00fab90  lfs 1, 8(4)
  00fab94  stfs 1, 136(1)
  00fab98  lfs 1, 12(4)
  00fab9c  lis 4, 16
  00faba0  stfs 1, 140(1)
  00faba4  lfs 1, 0(3)
  00faba8  addi 30, 4, -22220
  00fabac  stfs 1, 144(1)
  00fabb0  lfs 1, 4(3)
  00fabb4  addic 4, 1, 112
  00fabb8  stfs 1, 148(1)
  00fabbc  lfs 1, 8(3)
  00fabc0  stfs 1, 152(1)
  00fabc4  lfs 1, 12(3)
  00fabc8  addic 3, 1, 160
  00fabcc  stfs 1, 156(1)
  00fabd0  lfs 31, 0(30)
  00fabd4  fmr 1, 31
  00fabd8  bl 0x5023bc
  00fabdc  nop
  00fabe0  lfs 30, 160(1)
  00fabe4  fmr 1, 31
  00fabe8  lfs 29, 164(1)
  00fabec  addic 3, 1, 176
  00fabf0  lfs 31, 168(1)
  00fabf4  addic 4, 1, 128
  00fabf8  lfs 28, 172(1)
  00fabfc  bl 0x5023bc
  00fac00  nop
  00fac04  lfs 1, 176(1)
  00fac08  lfs 2, 180(1)
  00fac0c  addic 3, 1, 192
  00fac10  fctiwz 1, 1
  00fac14  lfs 3, 184(1)
  00fac18  fctiwz 2, 2
  00fac1c  addic 4, 1, 144
  00fac20  fctiwz 3, 3
  00fac24  stfd 1, 8728(1)
  00fac28  lwz 25, 8732(1)
  00fac2c  stfd 2, 8728(1)
  00fac30  lwz 26, 8732(1)
  00fac34  stfd 3, 8728(1)
  00fac38  lfs 27, 4(30)
  00fac3c  lwz 27, 8732(1)
  00fac40  fmr 1, 27
  00fac44  bl 0x5023bc
  00fac48  nop
  00fac4c  lfs 1, 192(1)
  00fac50  lfs 2, 196(1)
  00fac54  li 0, 8688
  00fac58  fctiwz 1, 1
  00fac5c  lfs 3, 200(1)
  00fac60  fctiwz 2, 2
  00fac64  addic 3, 1, 208
  00fac68  ori 4, 15, 0
  00fac6c  stfd 1, 8728(1)
  00fac70  lwz 22, 8732(1)
  00fac74  fctiwz 1, 3
  00fac78  stw 22, 8688(1)
  00fac7c  stw 22, 8692(1)
  00fac80  stw 22, 8696(1)
  00fac84  stw 22, 8700(1)
  00fac88  stfd 2, 8728(1)
  00fac8c  lwz 23, 8732(1)
  00fac90  lvx 2, 1, 0
  00fac94  li 0, 8688
  00fac98  vspltw 2, 2, 0
  00fac9c  stw 23, 8688(1)
  00faca0  stw 23, 8692(1)
  00faca4  vspltw 2, 2, 0
  00faca8  stw 23, 8696(1)
  00facac  stw 23, 8700(1)
  00facb0  stfd 1, 8728(1)
  00facb4  vspltw 2, 2, 0
  00facb8  lwz 21, 8732(1)
  00facbc  lvx 3, 1, 0
  00facc0  li 0, 8688
  00facc4  vspltw 2, 2, 0
  00facc8  vspltw 3, 3, 0
  00faccc  stw 21, 8688(1)
  00facd0  stw 21, 8692(1)
  00facd4  vspltw 2, 2, 0
  00facd8  vspltw 3, 3, 0
  00facdc  stw 21, 8696(1)
  00face0  stw 21, 8700(1)
  00face4  vspltw 2, 2, 0
  00face8  vspltw 3, 3, 0
  00facec  lvx 4, 1, 0
  00facf0  vspltw 2, 2, 0
  00facf4  vspltw 3, 3, 0
  00facf8  vspltw 4, 4, 0
  00facfc  vspltw 2, 2, 0
  00fad00  vspltw 3, 3, 0
  00fad04  vspltw 4, 4, 0
  00fad08  vspltw 2, 2, 0
  00fad0c  vspltw 3, 3, 0
  00fad10  vspltw 4, 4, 0
  00fad14  vspltw 2, 2, 0
  00fad18  vspltw 3, 3, 0
  00fad1c  vspltw 4, 4, 0
  00fad20  vspltw 2, 2, 0
  00fad24  vspltw 3, 3, 0
  00fad28  vspltw 4, 4, 0
  00fad2c  vspltw 2, 2, 0
  00fad30  vspltw 3, 3, 0
  00fad34  vspltw 4, 4, 0
  00fad38  vspltw 2, 2, 0
  00fad3c  vspltw 3, 3, 0
  00fad40  vspltw 4, 4, 0
  00fad44  vspltw 2, 2, 0
  00fad48  vspltw 3, 3, 0
  00fad4c  vspltw 4, 4, 0
  00fad50  vspltw 2, 2, 0
  00fad54  vspltw 3, 3, 0
  00fad58  vspltw 4, 4, 0
  00fad5c  vspltw 2, 2, 0
  00fad60  vspltw 3, 3, 0
  00fad64  vspltw 4, 4, 0
  00fad68  vspltw 2, 2, 0
  00fad6c  vspltw 3, 3, 0
  00fad70  vspltw 4, 4, 0
  00fad74  vspltw 2, 2, 0
  00fad78  vspltw 3, 3, 0
  00fad7c  vspltw 4, 4, 0
  00fad80  vspltw 2, 2, 0
  00fad84  vspltw 3, 3, 0
  00fad88  vspltw 4, 4, 0
  00fad8c  vspltw 2, 2, 0
  00fad90  vspltw 3, 3, 0
  00fad94  vspltw 4, 4, 0
  00fad98  vspltw 2, 2, 0
  00fad9c  vspltw 3, 3, 0
  00fada0  vspltw 4, 4, 0
  00fada4  vspltw 2, 2, 0
  00fada8  vspltw 3, 3, 0
  00fadac  vspltw 4, 4, 0
  00fadb0  vspltw 2, 2, 0
  00fadb4  vspltw 3, 3, 0
  00fadb8  vspltw 4, 4, 0
  00fadbc  vspltw 2, 2, 0
  00fadc0  vspltw 3, 3, 0
  00fadc4  vspltw 4, 4, 0
  00fadc8  vspltw 2, 2, 0
  00fadcc  vspltw 3, 3, 0
  00fadd0  vspltw 4, 4, 0
  00fadd4  vspltw 2, 2, 0
  00fadd8  vspltw 3, 3, 0
  00faddc  vspltw 4, 4, 0
  00fade0  vspltw 2, 2, 0
  00fade4  vspltw 3, 3, 0
  00fade8  vspltw 4, 4, 0
  00fadec  vspltw 2, 2, 0
  00fadf0  vspltw 3, 3, 0
  00fadf4  vspltw 4, 4, 0
  00fadf8  vspltw 2, 2, 0
  00fadfc  vspltw 3, 3, 0
  00fae00  vspltw 2, 2, 0
  00fae04  vspltw 3, 3, 0
  00fae08  vspltw 2, 2, 0
  00fae0c  vspltw 3, 3, 0
  00fae10  fmr 1, 27
  00fae14  vspltw 2, 2, 0
  00fae18  vspltw 2, 2, 0
  00fae1c  vspltw 31, 2, 0
  00fae20  vspltw 2, 3, 0
  00fae24  vspltw 3, 4, 0
  00fae28  vspltw 2, 2, 0
  00fae2c  vspltw 3, 3, 0
  00fae30  vspltw 31, 31, 0
  00fae34  vspltw 2, 2, 0
  00fae38  vspltw 3, 3, 0
  00fae3c  vspltw 2, 2, 0
  00fae40  vspltw 3, 3, 0
  00fae44  vspltw 2, 2, 0
  00fae48  vspltw 3, 3, 0
  00fae4c  vspltw 30, 2, 0
  00fae50  vspltw 2, 3, 0
  00fae54  vspltw 30, 30, 0
  00fae58  vspltw 2, 2, 0
  00fae5c  vspltw 2, 2, 0
  00fae60  vspltw 2, 2, 0
  00fae64  vspltw 2, 2, 0
  00fae68  vspltw 2, 2, 0
  00fae6c  vspltw 29, 2, 0
  00fae70  vspltw 29, 29, 0
  00fae74  bl 0x5023bc
  00fae78  nop
  00fae7c  fctiwz 4, 30
  00fae80  fctiwz 5, 29
  00fae84  lfs 1, 208(1)
  00fae88  fctiwz 6, 31
  00fae8c  lfs 2, 212(1)
  00fae90  fctiwz 7, 28
  00fae94  lfs 3, 216(1)
  00fae98  li 10, -32768
  00fae9c  stfd 4, 8728(1)
  00faea0  lwz 9, 8732(1)
  00faea4  stfd 5, 8728(1)
  00faea8  lwz 8, 8732(1)
  00faeac  cmpw 9, 10
  00faeb0  stfd 6, 8728(1)
  00faeb4  lwz 4, 8732(1)
  00faeb8  stfd 7, 8728(1)
  00faebc  lwz 3, 8732(1)
  00faec0  bf 1, 0xfaec8
  00faec4  ori 10, 9, 0
  00faec8  li 0, 8688
  00faecc  stw 10, 8688(1)
  00faed0  stw 10, 8692(1)
  00faed4  stw 10, 8696(1)
  00faed8  stw 10, 8700(1)
  00faedc  lvx 2, 1, 0
  00faee0  vspltw 2, 2, 0
  00faee4  vspltw 2, 2, 0
  00faee8  vspltw 2, 2, 0
  00faeec  vspltw 2, 2, 0
  00faef0  vspltw 2, 2, 0
  00faef4  li 9, -32768
  00faef8  vspltw 2, 2, 0
  00faefc  cmpw 8, 9
  00faf00  vspltw 2, 2, 0
  00faf04  vspltw 2, 2, 0
  00faf08  vspltw 2, 2, 0
  00faf0c  vspltw 2, 2, 0
  00faf10  vspltw 2, 2, 0
  00faf14  vspltw 2, 2, 0
  00faf18  vspltw 2, 2, 0
  00faf1c  vspltw 2, 2, 0
  00faf20  vspltw 2, 2, 0
  00faf24  vspltw 2, 2, 0
  00faf28  vspltw 2, 2, 0
  00faf2c  vspltw 2, 2, 0
  00faf30  vspltw 2, 2, 0
  00faf34  vspltw 2, 2, 0
  00faf38  vspltw 2, 2, 0
  00faf3c  vspltw 2, 2, 0
  00faf40  vspltw 2, 2, 0
  00faf44  vspltw 2, 2, 0
  00faf48  vspltw 2, 2, 0
  00faf4c  vspltw 2, 2, 0
  00faf50  vspltw 2, 2, 0
  00faf54  vspltw 2, 2, 0
  00faf58  vspltw 2, 2, 0
  00faf5c  vspltw 2, 2, 0
  00faf60  vspltw 2, 2, 0
  00faf64  vspltw 2, 2, 0
  00faf68  vspltw 2, 2, 0
  00faf6c  vspltw 2, 2, 0
  00faf70  vspltw 2, 2, 0
  00faf74  bf 1, 0xfaf7c
  00faf78  ori 9, 8, 0
  00faf7c  li 0, 8688
  00faf80  stw 9, 8688(1)
  00faf84  stw 9, 8692(1)
  00faf88  stw 9, 8696(1)
  00faf8c  stw 9, 8700(1)
  00faf90  lvx 3, 1, 0
  00faf94  vspltw 3, 3, 0
  00faf98  vspltw 3, 3, 0
  00faf9c  vspltw 3, 3, 0
  00fafa0  vspltw 3, 3, 0
  00fafa4  li 8, -32768
  00fafa8  vspltw 3, 3, 0
  00fafac  cmpw 4, 8
  00fafb0  vspltw 3, 3, 0
  00fafb4  vspltw 3, 3, 0
  00fafb8  vspltw 3, 3, 0
  00fafbc  vspltw 3, 3, 0
  00fafc0  vspltw 3, 3, 0
  00fafc4  vspltw 3, 3, 0
  00fafc8  vspltw 3, 3, 0
  00fafcc  vspltw 3, 3, 0
  00fafd0  vspltw 3, 3, 0
  00fafd4  vspltw 3, 3, 0
  00fafd8  vspltw 3, 3, 0
  00fafdc  vspltw 3, 3, 0
  00fafe0  vspltw 3, 3, 0
  00fafe4  vspltw 3, 3, 0
  00fafe8  vspltw 3, 3, 0
  00fafec  vspltw 3, 3, 0
  00faff0  vspltw 3, 3, 0
  00faff4  vspltw 3, 3, 0
  00faff8  vspltw 3, 3, 0
  00faffc  vspltw 3, 3, 0
  00fb000  vspltw 3, 3, 0
  00fb004  vspltw 3, 3, 0
  00fb008  vspltw 3, 3, 0
  00fb00c  vspltw 3, 3, 0
  00fb010  vspltw 3, 3, 0
  00fb014  vspltw 3, 3, 0
  00fb018  vspltw 3, 3, 0
  00fb01c  vspltw 3, 3, 0
  00fb020  vspltw 3, 3, 0
  00fb024  vspltw 3, 3, 0
  00fb028  bf 1, 0xfb030
  00fb02c  ori 8, 4, 0
  00fb030  li 0, 8688
  00fb034  stw 8, 8688(1)
  00fb038  stw 8, 8692(1)
  00fb03c  stw 8, 8696(1)
  00fb040  stw 8, 8700(1)
  00fb044  lvx 4, 1, 0
  00fb048  vspltw 4, 4, 0
  00fb04c  vspltw 4, 4, 0
  00fb050  vspltw 4, 4, 0
  00fb054  vspltw 4, 4, 0
  00fb058  vspltw 4, 4, 0
  00fb05c  li 4, -32768
  00fb060  vspltw 4, 4, 0
  00fb064  cmpw 3, 4
  00fb068  vspltw 4, 4, 0
  00fb06c  vspltw 4, 4, 0
  00fb070  vspltw 4, 4, 0
  00fb074  vspltw 4, 4, 0
  00fb078  vspltw 4, 4, 0
  00fb07c  vspltw 4, 4, 0
  00fb080  vspltw 4, 4, 0
  00fb084  vspltw 4, 4, 0
  00fb088  vspltw 4, 4, 0
  00fb08c  vspltw 4, 4, 0
  00fb090  vspltw 4, 4, 0
  00fb094  vspltw 4, 4, 0
  00fb098  vspltw 4, 4, 0
  00fb09c  vspltw 4, 4, 0
  00fb0a0  vspltw 4, 4, 0
  00fb0a4  vspltw 4, 4, 0
  00fb0a8  vspltw 4, 4, 0
  00fb0ac  vspltw 4, 4, 0
  00fb0b0  vspltw 4, 4, 0
  00fb0b4  vspltw 4, 4, 0
  00fb0b8  vspltw 4, 4, 0
  00fb0bc  vspltw 4, 4, 0
  00fb0c0  vspltw 4, 4, 0
  00fb0c4  vspltw 4, 4, 0
  00fb0c8  vspltw 4, 4, 0
  00fb0cc  vspltw 4, 4, 0
  00fb0d0  vspltw 4, 4, 0
  00fb0d4  vspltw 4, 4, 0
  00fb0d8  vspltw 4, 4, 0
  00fb0dc  bf 1, 0xfb0e4
  00fb0e0  ori 4, 3, 0
  00fb0e4  li 0, 8688
  00fb0e8  stw 4, 8688(1)
  00fb0ec  stw 4, 8692(1)
  00fb0f0  stw 4, 8696(1)
  00fb0f4  stw 4, 8700(1)
  00fb0f8  lvx 5, 1, 0
  00fb0fc  vspltw 5, 5, 0
  00fb100  vspltw 5, 5, 0
  00fb104  vspltw 5, 5, 0
  00fb108  vspltw 5, 5, 0
  00fb10c  addic 5, 1, 260
  00fb110  vspltw 5, 5, 0
  00fb114  li 30, 4
  00fb118  vspltw 5, 5, 0
  00fb11c  li 12, 8
  00fb120  vspltw 5, 5, 0
  00fb124  li 11, 32767
  00fb128  vspltw 5, 5, 0
  00fb12c  li 6, 12
  00fb130  vspltw 5, 5, 0
  00fb134  ori 3, 11, 0
  00fb138  vspltw 5, 5, 0
  00fb13c  cmpw 10, 3
  00fb140  vspltw 2, 2, 0
  00fb144  vspltw 5, 5, 0
  00fb148  vspltw 5, 5, 0
  00fb14c  stvewx 2, 0, 5
  00fb150  vspltw 5, 5, 0
  00fb154  vspltw 3, 3, 0
  00fb158  vspltw 5, 5, 0
  00fb15c  vspltw 4, 4, 0
  00fb160  vspltw 5, 5, 0
  00fb164  stvewx 3, 30, 5
  00fb168  vspltw 5, 5, 0
  00fb16c  stvewx 4, 12, 5
  00fb170  vspltw 5, 5, 0
  00fb174  vspltw 5, 5, 0
  00fb178  vspltw 5, 5, 0
  00fb17c  vspltw 5, 5, 0
  00fb180  vspltw 5, 5, 0
  00fb184  vspltw 5, 5, 0
  00fb188  vspltw 5, 5, 0
  00fb18c  vspltw 5, 5, 0
  00fb190  vspltw 5, 5, 0
  00fb194  vspltw 5, 5, 0
  00fb198  vspltw 5, 5, 0
  00fb19c  vspltw 5, 5, 0
  00fb1a0  vspltw 5, 5, 0
  00fb1a4  vspltw 5, 5, 0
  00fb1a8  vspltw 5, 5, 0
  00fb1ac  vspltw 5, 5, 0
  00fb1b0  vspltw 5, 5, 0
  00fb1b4  vspltw 5, 5, 0
  00fb1b8  vspltw 2, 5, 0
  00fb1bc  vspltw 2, 2, 0
  00fb1c0  stvewx 2, 6, 5
  00fb1c4  bf 0, 0xfb1cc
  00fb1c8  ori 3, 10, 0
  00fb1cc  li 0, 8688
  00fb1d0  stw 3, 8688(1)
  00fb1d4  stw 3, 8692(1)
  00fb1d8  stw 3, 8696(1)
  00fb1dc  stw 3, 8700(1)
  00fb1e0  lvx 2, 1, 0
  00fb1e4  vspltw 2, 2, 0
  00fb1e8  vspltw 2, 2, 0
  00fb1ec  vspltw 2, 2, 0
  00fb1f0  vspltw 2, 2, 0
  00fb1f4  ori 3, 11, 0
  00fb1f8  vspltw 2, 2, 0
  00fb1fc  cmpw 9, 3
  00fb200  vspltw 2, 2, 0
  00fb204  vspltw 2, 2, 0
  00fb208  vspltw 2, 2, 0
  00fb20c  vspltw 2, 2, 0
  00fb210  vspltw 2, 2, 0
  00fb214  vspltw 2, 2, 0
  00fb218  vspltw 2, 2, 0
  00fb21c  vspltw 2, 2, 0
  00fb220  vspltw 2, 2, 0
  00fb224  vspltw 2, 2, 0
  00fb228  vspltw 2, 2, 0
  00fb22c  vspltw 2, 2, 0
  00fb230  vspltw 2, 2, 0
  00fb234  vspltw 2, 2, 0
  00fb238  vspltw 2, 2, 0
  00fb23c  vspltw 2, 2, 0
  00fb240  vspltw 2, 2, 0
  00fb244  vspltw 2, 2, 0
  00fb248  vspltw 2, 2, 0
  00fb24c  vspltw 2, 2, 0
  00fb250  vspltw 2, 2, 0
  00fb254  vspltw 2, 2, 0
  00fb258  vspltw 2, 2, 0
  00fb25c  vspltw 2, 2, 0
  00fb260  vspltw 2, 2, 0
  00fb264  vspltw 2, 2, 0
  00fb268  vspltw 2, 2, 0
  00fb26c  vspltw 2, 2, 0
  00fb270  vspltw 2, 2, 0
  00fb274  vspltw 2, 2, 0
  00fb278  bf 0, 0xfb280
  00fb27c  ori 3, 9, 0
  00fb280  li 0, 8688
  00fb284  stw 3, 8688(1)
  00fb288  stw 3, 8692(1)
  00fb28c  stw 3, 8696(1)
  00fb290  stw 3, 8700(1)
  00fb294  lvx 3, 1, 0
  00fb298  vspltw 3, 3, 0
  00fb29c  vspltw 3, 3, 0
  00fb2a0  vspltw 3, 3, 0
  00fb2a4  vspltw 3, 3, 0
  00fb2a8  vspltw 3, 3, 0
  00fb2ac  ori 3, 11, 0
  00fb2b0  vspltw 3, 3, 0
  00fb2b4  cmpw 8, 3
  00fb2b8  vspltw 3, 3, 0
  00fb2bc  vspltw 3, 3, 0
  00fb2c0  vspltw 3, 3, 0
  00fb2c4  vspltw 3, 3, 0
  00fb2c8  vspltw 3, 3, 0
  00fb2cc  vspltw 3, 3, 0
  00fb2d0  vspltw 3, 3, 0
  00fb2d4  vspltw 3, 3, 0
  00fb2d8  vspltw 3, 3, 0
  00fb2dc  vspltw 3, 3, 0
  00fb2e0  vspltw 3, 3, 0
  00fb2e4  vspltw 3, 3, 0
  00fb2e8  vspltw 3, 3, 0
  00fb2ec  vspltw 3, 3, 0
  00fb2f0  vspltw 3, 3, 0
  00fb2f4  vspltw 3, 3, 0
  00fb2f8  vspltw 3, 3, 0
  00fb2fc  vspltw 3, 3, 0
  00fb300  vspltw 3, 3, 0
  00fb304  vspltw 3, 3, 0
  00fb308  vspltw 3, 3, 0
  00fb30c  vspltw 3, 3, 0
  00fb310  vspltw 3, 3, 0
  00fb314  vspltw 3, 3, 0
  00fb318  vspltw 3, 3, 0
  00fb31c  vspltw 3, 3, 0
  00fb320  vspltw 3, 3, 0
  00fb324  vspltw 3, 3, 0
  00fb328  vspltw 3, 3, 0
  00fb32c  bf 0, 0xfb334
  00fb330  ori 3, 8, 0
  00fb334  li 0, 8688
  00fb338  stw 3, 8688(1)
  00fb33c  stw 3, 8692(1)
  00fb340  stw 3, 8696(1)
  00fb344  stw 3, 8700(1)
  00fb348  lvx 4, 1, 0
  00fb34c  vspltw 4, 4, 0
  00fb350  vspltw 4, 4, 0
  00fb354  vspltw 4, 4, 0
  00fb358  vspltw 4, 4, 0
  00fb35c  ori 3, 11, 0
  00fb360  vspltw 4, 4, 0
  00fb364  cmpw 4, 3
  00fb368  vspltw 4, 4, 0
  00fb36c  vspltw 4, 4, 0
  00fb370  vspltw 4, 4, 0
  00fb374  vspltw 4, 4, 0
  00fb378  vspltw 4, 4, 0
  00fb37c  vspltw 4, 4, 0
  00fb380  vspltw 4, 4, 0
  00fb384  vspltw 4, 4, 0
  00fb388  vspltw 4, 4, 0
  00fb38c  vspltw 4, 4, 0
  00fb390  vspltw 4, 4, 0
  00fb394  vspltw 4, 4, 0
  00fb398  vspltw 4, 4, 0
  00fb39c  vspltw 4, 4, 0
  00fb3a0  vspltw 4, 4, 0
  00fb3a4  vspltw 4, 4, 0
  00fb3a8  vspltw 4, 4, 0
  00fb3ac  vspltw 4, 4, 0
  00fb3b0  vspltw 4, 4, 0
  00fb3b4  vspltw 4, 4, 0
  00fb3b8  vspltw 4, 4, 0
  00fb3bc  vspltw 4, 4, 0
  00fb3c0  vspltw 4, 4, 0
  00fb3c4  vspltw 4, 4, 0
  00fb3c8  vspltw 4, 4, 0
  00fb3cc  vspltw 4, 4, 0
  00fb3d0  vspltw 4, 4, 0
  00fb3d4  vspltw 4, 4, 0
  00fb3d8  vspltw 4, 4, 0
  00fb3dc  vspltw 4, 4, 0
  00fb3e0  bf 0, 0xfb3e8
  00fb3e4  ori 3, 4, 0
  00fb3e8  li 0, 8688
  00fb3ec  stw 3, 8688(1)
  00fb3f0  stw 3, 8692(1)
  00fb3f4  stw 3, 8696(1)
  00fb3f8  stw 3, 8700(1)
  00fb3fc  lvx 5, 1, 0
  00fb400  vspltw 5, 5, 0
  00fb404  vspltw 5, 5, 0
  00fb408  vspltw 5, 5, 0
  00fb40c  vspltw 5, 5, 0
  00fb410  vspltw 5, 5, 0
  00fb414  addic 4, 1, 276
  00fb418  vspltw 5, 5, 0
  00fb41c  li 5, 12
  00fb420  vspltw 5, 5, 0
  00fb424  srawi 3, 25, 3
  00fb428  vspltw 5, 5, 0
  00fb42c  vspltw 5, 5, 0
  00fb430  vspltw 5, 5, 0
  00fb434  srawi 9, 27, 3
  00fb438  vspltw 5, 5, 0
  00fb43c  vspltw 6, 2, 0
  00fb440  vspltw 5, 5, 0
  00fb444  vspltw 5, 5, 0
  00fb448  vspltw 7, 3, 0
  00fb44c  vspltw 5, 5, 0
  00fb450  vspltw 8, 4, 0
  00fb454  vspltw 5, 5, 0
  00fb458  stvewx 6, 0, 4
  00fb45c  vspltw 5, 5, 0
  00fb460  stvewx 7, 30, 4
  00fb464  li 0, 8688
  00fb468  vspltw 5, 5, 0
  00fb46c  stvewx 8, 12, 4
  00fb470  vspltw 5, 5, 0
  00fb474  vspltw 5, 5, 0
  00fb478  vspltw 5, 5, 0
  00fb47c  vspltw 5, 5, 0
  00fb480  vspltw 5, 5, 0
  00fb484  vspltw 5, 5, 0
  00fb488  vspltw 5, 5, 0
  00fb48c  vspltw 5, 5, 0
  00fb490  vspltw 5, 5, 0
  00fb494  vspltw 5, 5, 0
  00fb498  vspltw 5, 5, 0
  00fb49c  vspltw 5, 5, 0
  00fb4a0  vspltw 5, 5, 0
  00fb4a4  vspltw 5, 5, 0
  00fb4a8  vspltw 5, 5, 0
  00fb4ac  vspltw 5, 5, 0
  00fb4b0  vspltw 5, 5, 0
  00fb4b4  vspltw 5, 5, 0
  00fb4b8  vspltw 6, 5, 0
  00fb4bc  ori 8, 14, 0
  00fb4c0  stvewx 6, 5, 4
  00fb4c4  stw 3, 8688(1)
  00fb4c8  stw 3, 8692(1)
  00fb4cc  srawi 4, 26, 3
  00fb4d0  stw 3, 8696(1)
  00fb4d4  stw 3, 8700(1)
  00fb4d8  lvx 6, 1, 0
  00fb4dc  li 0, 8688
  00fb4e0  vspltw 6, 6, 0
  00fb4e4  stw 4, 8688(1)
  00fb4e8  stw 4, 8692(1)
  00fb4ec  stw 4, 8696(1)
  00fb4f0  vspltw 6, 6, 0
  00fb4f4  stw 4, 8700(1)
  00fb4f8  lvx 7, 1, 0
  00fb4fc  li 0, 8688
  00fb500  vspltw 6, 6, 0
  00fb504  stw 9, 8688(1)
  00fb508  stw 9, 8692(1)
  00fb50c  stw 9, 8696(1)
  00fb510  vspltw 6, 6, 0
  00fb514  stw 9, 8700(1)
  00fb518  lvx 8, 1, 0
  00fb51c  vspltw 7, 7, 0
  00fb520  vspltw 8, 8, 0
  00fb524  vspltw 6, 6, 0
  00fb528  vspltw 7, 7, 0
  00fb52c  vspltw 8, 8, 0
  00fb530  vspltw 6, 6, 0
  00fb534  vspltw 7, 7, 0
  00fb538  vspltw 8, 8, 0
  00fb53c  vspltw 6, 6, 0
  00fb540  vspltw 7, 7, 0
  00fb544  vspltw 8, 8, 0
  00fb548  vspltw 6, 6, 0
  00fb54c  vspltw 7, 7, 0
  00fb550  vspltw 8, 8, 0
  00fb554  vspltw 6, 6, 0
  00fb558  vspltw 7, 7, 0
  00fb55c  vspltw 8, 8, 0
  00fb560  vspltw 6, 6, 0
  00fb564  vspltw 7, 7, 0
  00fb568  vspltw 8, 8, 0
  00fb56c  vspltw 6, 6, 0
  00fb570  vspltw 7, 7, 0
  00fb574  vspltw 8, 8, 0
  00fb578  vspltw 6, 6, 0
  00fb57c  vspltw 7, 7, 0
  00fb580  vspltw 8, 8, 0
  00fb584  vspltw 6, 6, 0
  00fb588  vspltw 7, 7, 0
  00fb58c  vspltw 8, 8, 0
  00fb590  vspltw 6, 6, 0
  00fb594  vspltw 7, 7, 0
  00fb598  vspltw 8, 8, 0
  00fb59c  vspltw 6, 6, 0
  00fb5a0  vspltw 7, 7, 0
  00fb5a4  vspltw 8, 8, 0
  00fb5a8  vspltw 6, 6, 0
  00fb5ac  vspltw 7, 7, 0
  00fb5b0  vspltw 8, 8, 0
  00fb5b4  vspltw 6, 6, 0
  00fb5b8  vspltw 7, 7, 0
  00fb5bc  vspltw 8, 8, 0
  00fb5c0  vspltw 6, 6, 0
  00fb5c4  vspltw 7, 7, 0
  00fb5c8  vspltw 8, 8, 0
  00fb5cc  vspltw 6, 6, 0
  00fb5d0  vspltw 7, 7, 0
  00fb5d4  vspltw 8, 8, 0
  00fb5d8  vspltw 6, 6, 0
  00fb5dc  vspltw 7, 7, 0
  00fb5e0  vspltw 8, 8, 0
  00fb5e4  vspltw 6, 6, 0
  00fb5e8  vspltw 7, 7, 0
  00fb5ec  vspltw 8, 8, 0
  00fb5f0  vspltw 6, 6, 0
  00fb5f4  addic 5, 1, 224
  00fb5f8  vspltw 7, 7, 0
  00fb5fc  vspltw 8, 8, 0
  00fb600  vspltw 6, 6, 0
  00fb604  vspltw 7, 7, 0
  00fb608  vspltw 8, 8, 0
  00fb60c  vspltw 6, 6, 0
  00fb610  vspltw 7, 7, 0
  00fb614  vspltw 8, 8, 0
  00fb618  vspltw 6, 6, 0
  00fb61c  vspltw 7, 7, 0
  00fb620  vspltw 8, 8, 0
  00fb624  vspltw 6, 6, 0
  00fb628  vspltw 7, 7, 0
  00fb62c  vspltw 8, 8, 0
  00fb630  vspltw 6, 6, 0
  00fb634  cmpw 3, 8
  00fb638  vspltw 7, 7, 0
  00fb63c  vspltw 8, 8, 0
  00fb640  vspltw 6, 6, 0
  00fb644  vspltw 7, 7, 0
  00fb648  vspltw 8, 8, 0
  00fb64c  vspltw 6, 6, 0
  00fb650  vspltw 7, 7, 0
  00fb654  vspltw 8, 8, 0
  00fb658  vspltw 6, 6, 0
  00fb65c  vspltw 7, 7, 0
  00fb660  vspltw 8, 8, 0
  00fb664  vspltw 6, 6, 0
  00fb668  vspltw 7, 7, 0
  00fb66c  vspltw 8, 8, 0
  00fb670  vspltw 6, 6, 0
  00fb674  vspltw 7, 7, 0
  00fb678  vspltw 8, 8, 0
  00fb67c  vspltw 6, 6, 0
  00fb680  vspltw 7, 7, 0
  00fb684  vspltw 8, 8, 0
  00fb688  vspltw 6, 6, 0
  00fb68c  vspltw 7, 7, 0
  00fb690  vspltw 8, 8, 0
  00fb694  vspltw 6, 6, 0
  00fb698  vspltw 7, 7, 0
  00fb69c  vspltw 8, 8, 0
  00fb6a0  vspltw 6, 6, 0
  00fb6a4  vspltw 7, 7, 0
  00fb6a8  vspltw 8, 8, 0
  00fb6ac  vspltw 7, 7, 0
  00fb6b0  stvewx 6, 0, 5
  00fb6b4  vspltw 6, 8, 0
  00fb6b8  vspltw 7, 7, 0
  00fb6bc  vspltw 6, 6, 0
  00fb6c0  vspltw 7, 7, 0
  00fb6c4  vspltw 6, 6, 0
  00fb6c8  stvewx 7, 30, 5
  00fb6cc  stvewx 6, 12, 5
  00fb6d0  bf 1, 0xfb6d8
  00fb6d4  ori 8, 3, 0
  00fb6d8  li 0, 8688
  00fb6dc  stw 8, 8688(1)
  00fb6e0  stw 8, 8692(1)
  00fb6e4  stw 8, 8696(1)
  00fb6e8  stw 8, 8700(1)
  00fb6ec  lvx 6, 1, 0
  00fb6f0  vspltw 6, 6, 0
  00fb6f4  vspltw 6, 6, 0
  00fb6f8  vspltw 6, 6, 0
  00fb6fc  vspltw 6, 6, 0
  00fb700  vspltw 6, 6, 0
  00fb704  ori 3, 14, 0
  00fb708  vspltw 6, 6, 0
  00fb70c  cmpw 4, 3
  00fb710  vspltw 6, 6, 0
  00fb714  vspltw 6, 6, 0
  00fb718  vspltw 6, 6, 0
  00fb71c  vspltw 6, 6, 0
  00fb720  vspltw 6, 6, 0
  00fb724  vspltw 6, 6, 0
  00fb728  vspltw 6, 6, 0
  00fb72c  vspltw 6, 6, 0
  00fb730  vspltw 6, 6, 0
  00fb734  vspltw 6, 6, 0
  00fb738  vspltw 6, 6, 0
  00fb73c  vspltw 6, 6, 0
  00fb740  vspltw 6, 6, 0
  00fb744  vspltw 6, 6, 0
  00fb748  vspltw 6, 6, 0
  00fb74c  vspltw 6, 6, 0
  00fb750  vspltw 6, 6, 0
  00fb754  vspltw 6, 6, 0
  00fb758  vspltw 6, 6, 0
  00fb75c  vspltw 6, 6, 0
  00fb760  vspltw 6, 6, 0
  00fb764  vspltw 6, 6, 0
  00fb768  vspltw 6, 6, 0
  00fb76c  vspltw 6, 6, 0
  00fb770  vspltw 6, 6, 0
  00fb774  vspltw 6, 6, 0
  00fb778  vspltw 6, 6, 0
  00fb77c  vspltw 6, 6, 0
  00fb780  vspltw 6, 6, 0
  00fb784  bf 1, 0xfb78c
  00fb788  ori 3, 4, 0
  00fb78c  li 0, 8688
  00fb790  stw 3, 8688(1)
  00fb794  stw 3, 8692(1)
  00fb798  stw 3, 8696(1)
  00fb79c  stw 3, 8700(1)
  00fb7a0  lvx 7, 1, 0
  00fb7a4  vspltw 7, 7, 0
  00fb7a8  vspltw 7, 7, 0
  00fb7ac  vspltw 7, 7, 0
  00fb7b0  vspltw 7, 7, 0
  00fb7b4  ori 4, 14, 0
  00fb7b8  vspltw 7, 7, 0
  00fb7bc  cmpw 9, 4
  00fb7c0  vspltw 7, 7, 0
  00fb7c4  vspltw 7, 7, 0
  00fb7c8  vspltw 7, 7, 0
  00fb7cc  vspltw 7, 7, 0
  00fb7d0  vspltw 7, 7, 0
  00fb7d4  vspltw 7, 7, 0
  00fb7d8  vspltw 7, 7, 0
  00fb7dc  vspltw 7, 7, 0
  00fb7e0  vspltw 7, 7, 0
  00fb7e4  vspltw 7, 7, 0
  00fb7e8  vspltw 7, 7, 0
  00fb7ec  vspltw 7, 7, 0
  00fb7f0  vspltw 7, 7, 0
  00fb7f4  vspltw 7, 7, 0
  00fb7f8  vspltw 7, 7, 0
  00fb7fc  vspltw 7, 7, 0
  00fb800  vspltw 7, 7, 0
  00fb804  vspltw 7, 7, 0
  00fb808  vspltw 7, 7, 0
  00fb80c  vspltw 7, 7, 0
  00fb810  vspltw 7, 7, 0
  00fb814  vspltw 7, 7, 0
  00fb818  vspltw 7, 7, 0
  00fb81c  vspltw 7, 7, 0
  00fb820  vspltw 7, 7, 0
  00fb824  vspltw 7, 7, 0
  00fb828  vspltw 7, 7, 0
  00fb82c  vspltw 7, 7, 0
  00fb830  vspltw 7, 7, 0
  00fb834  vspltw 7, 7, 0
  00fb838  bf 1, 0xfb840
  00fb83c  ori 4, 9, 0
  00fb840  li 0, 8688
  00fb844  stw 4, 8688(1)
  00fb848  stw 4, 8692(1)
  00fb84c  stw 4, 8696(1)
  00fb850  stw 4, 8700(1)
  00fb854  lvx 8, 1, 0
  00fb858  vspltw 8, 8, 0
  00fb85c  vspltw 8, 8, 0
  00fb860  vspltw 8, 8, 0
  00fb864  addic 6, 1, 236
  00fb868  vspltw 8, 8, 0
  00fb86c  vspltw 8, 8, 0
  00fb870  vspltw 8, 8, 0
  00fb874  lis 5, 0
  00fb878  vspltw 8, 8, 0
  00fb87c  ori 5, 5, 65535
  00fb880  vspltw 8, 8, 0
  00fb884  cmpw 8, 5
  00fb888  vspltw 8, 8, 0
  00fb88c  vspltw 6, 6, 0
  00fb890  vspltw 8, 8, 0
  00fb894  vspltw 8, 8, 0
  00fb898  stvewx 6, 0, 6
  00fb89c  vspltw 8, 8, 0
  00fb8a0  vspltw 8, 8, 0
  00fb8a4  vspltw 7, 7, 0
  00fb8a8  vspltw 8, 8, 0
  00fb8ac  vspltw 8, 8, 0
  00fb8b0  stvewx 7, 30, 6
  00fb8b4  vspltw 8, 8, 0
  00fb8b8  vspltw 8, 8, 0
  00fb8bc  vspltw 8, 8, 0
  00fb8c0  vspltw 8, 8, 0
  00fb8c4  vspltw 8, 8, 0
  00fb8c8  vspltw 8, 8, 0
  00fb8cc  vspltw 8, 8, 0
  00fb8d0  vspltw 8, 8, 0
  00fb8d4  vspltw 8, 8, 0
  00fb8d8  vspltw 8, 8, 0
  00fb8dc  vspltw 8, 8, 0
  00fb8e0  vspltw 8, 8, 0
  00fb8e4  vspltw 8, 8, 0
  00fb8e8  vspltw 8, 8, 0
  00fb8ec  vspltw 8, 8, 0
  00fb8f0  vspltw 8, 8, 0
  00fb8f4  vspltw 8, 8, 0
  00fb8f8  vspltw 8, 8, 0
  00fb8fc  vspltw 6, 8, 0
  00fb900  vspltw 6, 6, 0
  00fb904  vspltw 6, 6, 0
  00fb908  stvewx 6, 12, 6
  00fb90c  bf 0, 0xfb914
  00fb910  ori 5, 8, 0
  00fb914  li 0, 8688
  00fb918  stw 5, 8688(1)
  00fb91c  stw 5, 8692(1)
  00fb920  stw 5, 8696(1)
  00fb924  stw 5, 8700(1)
  00fb928  lvx 6, 1, 0
  00fb92c  vspltw 6, 6, 0
  00fb930  vspltw 6, 6, 0
  00fb934  vspltw 6, 6, 0
  00fb938  vspltw 6, 6, 0
  00fb93c  lis 6, 0
  00fb940  vspltw 6, 6, 0
  00fb944  ori 6, 6, 65535
  00fb948  vspltw 6, 6, 0
  00fb94c  cmpw 3, 6
  00fb950  vspltw 6, 6, 0
  00fb954  vspltw 6, 6, 0
  00fb958  vspltw 6, 6, 0
  00fb95c  vspltw 6, 6, 0
  00fb960  vspltw 6, 6, 0
  00fb964  vspltw 6, 6, 0
  00fb968  vspltw 6, 6, 0
  00fb96c  vspltw 6, 6, 0
  00fb970  vspltw 6, 6, 0
  00fb974  vspltw 6, 6, 0
  00fb978  vspltw 6, 6, 0
  00fb97c  vspltw 6, 6, 0
  00fb980  vspltw 6, 6, 0
  00fb984  vspltw 6, 6, 0
  00fb988  vspltw 6, 6, 0
  00fb98c  vspltw 6, 6, 0
  00fb990  vspltw 6, 6, 0
  00fb994  vspltw 6, 6, 0
  00fb998  vspltw 6, 6, 0
  00fb99c  vspltw 6, 6, 0
  00fb9a0  vspltw 6, 6, 0
  00fb9a4  vspltw 6, 6, 0
  00fb9a8  vspltw 6, 6, 0
  00fb9ac  vspltw 6, 6, 0
  00fb9b0  vspltw 6, 6, 0
  00fb9b4  vspltw 6, 6, 0
  00fb9b8  vspltw 6, 6, 0
  00fb9bc  vspltw 6, 6, 0
  00fb9c0  vspltw 6, 6, 0
  00fb9c4  bf 0, 0xfb9cc
  00fb9c8  ori 6, 3, 0
  00fb9cc  li 0, 8688
  00fb9d0  stw 6, 8688(1)
  00fb9d4  stw 6, 8692(1)
  00fb9d8  stw 6, 8696(1)
  00fb9dc  stw 6, 8700(1)
  00fb9e0  lvx 7, 1, 0
  00fb9e4  vspltw 7, 7, 0
  00fb9e8  vspltw 7, 7, 0
  00fb9ec  vspltw 7, 7, 0
  00fb9f0  vspltw 7, 7, 0
  00fb9f4  lis 3, 0
  00fb9f8  vspltw 7, 7, 0
  00fb9fc  ori 3, 3, 65535
  00fba00  vspltw 7, 7, 0
  00fba04  cmpw 4, 3
  00fba08  vspltw 7, 7, 0
  00fba0c  vspltw 7, 7, 0
  00fba10  vspltw 7, 7, 0
  00fba14  vspltw 7, 7, 0
  00fba18  vspltw 7, 7, 0
  00fba1c  vspltw 7, 7, 0
  00fba20  vspltw 7, 7, 0
  00fba24  vspltw 7, 7, 0
  00fba28  vspltw 7, 7, 0
  00fba2c  vspltw 7, 7, 0
  00fba30  vspltw 7, 7, 0
  00fba34  vspltw 7, 7, 0
  00fba38  vspltw 7, 7, 0
  00fba3c  vspltw 7, 7, 0
  00fba40  vspltw 7, 7, 0
  00fba44  vspltw 7, 7, 0
  00fba48  vspltw 7, 7, 0
  00fba4c  vspltw 7, 7, 0
  00fba50  vspltw 7, 7, 0
  00fba54  vspltw 7, 7, 0
  00fba58  vspltw 7, 7, 0
  00fba5c  vspltw 7, 7, 0
  00fba60  vspltw 7, 7, 0
  00fba64  vspltw 7, 7, 0
  00fba68  vspltw 7, 7, 0
  00fba6c  vspltw 7, 7, 0
  00fba70  vspltw 7, 7, 0
  00fba74  vspltw 7, 7, 0
  00fba78  vspltw 7, 7, 0
  00fba7c  bf 0, 0xfba84
  00fba80  ori 3, 4, 0
  00fba84  li 0, 8688
  00fba88  stw 3, 8688(1)
  00fba8c  stw 3, 8692(1)
  00fba90  stw 3, 8696(1)
  00fba94  stw 3, 8700(1)
  00fba98  lvx 8, 1, 0
  00fba9c  vspltw 8, 8, 0
  00fbaa0  vspltw 8, 8, 0
  00fbaa4  vspltw 8, 8, 0
  00fbaa8  vspltw 8, 8, 0
  00fbaac  addic 4, 1, 248
  00fbab0  vspltw 8, 8, 0
  00fbab4  addic 7, 19, 18
  00fbab8  vspltw 8, 8, 0
  00fbabc  addic 9, 19, 20
  00fbac0  vspltw 8, 8, 0
  00fbac4  addc 7, 7, 28
  00fbac8  vspltw 8, 8, 0
  00fbacc  addic 10, 19, 22
  00fbad0  vspltw 8, 8, 0
  00fbad4  li 8, 16
  00fbad8  vspltw 8, 8, 0
  00fbadc  addc 9, 9, 28
  00fbae0  vspltw 9, 6, 0
  00fbae4  vspltw 8, 8, 0
  00fbae8  vspltw 8, 8, 0
  00fbaec  clrldi 7, 7, 32
  00fbaf0  stvewx 9, 0, 4
  00fbaf4  vspltw 8, 8, 0
  00fbaf8  vsplth 9, 2, 1
  00fbafc  vspltw 8, 8, 0
  00fbb00  vspltw 10, 7, 0
  00fbb04  addc 10, 10, 28
  00fbb08  vspltw 8, 8, 0
  00fbb0c  clrldi 9, 9, 32
  00fbb10  vsplth 3, 3, 1
  00fbb14  clrldi 10, 10, 32
  00fbb18  vspltw 8, 8, 0
  00fbb1c  li 11, 4096
  00fbb20  vsplth 4, 4, 1
  00fbb24  vspltw 8, 8, 0
  00fbb28  vsplth 5, 5, 1
  00fbb2c  cmpw 5, 11
  00fbb30  vspltw 8, 8, 0
  00fbb34  stvewx 10, 30, 4
  00fbb38  vspltw 8, 8, 0
  00fbb3c  ori 30, 14, 0
  00fbb40  vspltw 8, 8, 0
  00fbb44  vspltw 8, 8, 0
  00fbb48  vspltw 8, 8, 0
  00fbb4c  vspltw 8, 8, 0
  00fbb50  vspltw 8, 8, 0
  00fbb54  vspltw 8, 8, 0
  00fbb58  vspltw 8, 8, 0
  00fbb5c  vspltw 8, 8, 0
  00fbb60  vspltw 8, 8, 0
  00fbb64  vspltw 8, 8, 0
  00fbb68  vspltw 8, 8, 0
  00fbb6c  vspltw 8, 8, 0
  00fbb70  vspltw 8, 8, 0
  00fbb74  vspltw 8, 8, 0
  00fbb78  vspltw 8, 8, 0
  00fbb7c  vspltw 2, 8, 0
  00fbb80  vspltw 8, 2, 0
  00fbb84  stvewx 8, 12, 4
  00fbb88  stvehx 9, 8, 17
  00fbb8c  stvehx 3, 0, 7
  00fbb90  stvehx 4, 0, 9
  00fbb94  stvehx 5, 0, 10
  00fbb98  bf 2, 0xfbbb0
  00fbb9c  li 4, 4096
  00fbba0  cmpw 1, 3, 4
  00fbba4  cmpw 6, 4
  00fbba8  crand 2, 2, 6
  00fbbac  bt 2, 0xfbbb4
  00fbbb0  li 30, 1
  00fbbb4  cmpwi 30, 0
  00fbbb8  bt 2, 0xfbbfc
  00fbbbc  sldi 3, 18, 3
  00fbbc0  vsplth 3, 6, 1
  00fbbc4  addic 18, 18, 1
  00fbbc8  addc 3, 1, 3
  00fbbcc  vsplth 4, 7, 1
  00fbbd0  vsplth 2, 2, 1
  00fbbd4  clrldi 3, 3, 32
  00fbbd8  lbz 7, 8552(16)
  00fbbdc  addic 5, 3, 292
  00fbbe0  addic 6, 3, 294
  00fbbe4  addic 4, 3, 296
  00fbbe8  stvehx 3, 0, 5
  00fbbec  stvehx 4, 0, 6
  00fbbf0  stvehx 2, 0, 4
  00fbbf4  stb 29, 298(3)
  00fbbf8  stb 7, 299(3)
  00fbbfc  fctiwz 1, 1
  00fbc00  fctiwz 2, 2
  00fbc04  ori 4, 14, 0
  00fbc08  fctiwz 3, 3
  00fbc0c  stfd 1, 8728(1)
  00fbc10  lwz 3, 8732(1)
  00fbc14  stfd 2, 8728(1)
  00fbc18  cmpw 22, 3
  00fbc1c  lwz 3, 8732(1)
  00fbc20  stfd 3, 8728(1)
  00fbc24  cmpw 1, 23, 3
  00fbc28  crnand 2, 2, 6
  00fbc2c  lwz 3, 8732(1)
  00fbc30  bt 2, 0xfbc3c
  00fbc34  cmpw 21, 3
  00fbc38  bt 2, 0xfbc40
  00fbc3c  li 4, 1
  00fbc40  cmpwi 4, 0
  00fbc44  bt 2, 0xfbc84
  00fbc48  sldi 3, 20, 3
  00fbc4c  vsplth 2, 31, 1
  00fbc50  vsplth 3, 30, 1
  00fbc54  addic 20, 20, 1
  00fbc58  addc 3, 1, 3
  00fbc5c  vsplth 4, 29, 1
  00fbc60  clrldi 3, 3, 32
  00fbc64  addic 4, 3, 4420
  00fbc68  addic 5, 3, 4422
  00fbc6c  addic 6, 3, 4424
  00fbc70  stvehx 2, 0, 4
  00fbc74  stvehx 3, 0, 5
  00fbc78  stvehx 4, 0, 6
  00fbc7c  stb 29, 4426(3)
  00fbc80  stb 14, 4427(3)
  00fbc84  addic 29, 29, 1
  00fbc88  ld 3, 8712(1)
  00fbc8c  addic 17, 17, 8
  00fbc90  addic 16, 16, 1
  00fbc94  cmpw 29, 3
  00fbc98  addic 28, 28, 8
  00fbc9c  addic 15, 15, 16
  00fbca0  addic 24, 24, 64
  00fbca4  addic 31, 31, 64
  00fbca8  bt 0, 0xfab44
  00fbcac  ld 3, 8712(1)
  00fbcb0  stw 14, 0(19)
  00fbcb4  sldi 31, 18, 3
  00fbcb8  slwi 5, 3, 3
  00fbcbc  sth 14, 4(19)
  00fbcc0  addc 3, 3, 18
  00fbcc4  lwz 6, 8720(1)
  00fbcc8  addc 4, 3, 20
  00fbccc  sldi 3, 3, 3
  00fbcd0  sldi 4, 4, 3
  00fbcd4  sth 5, 8(19)
  00fbcd8  addc 6, 6, 5
  00fbcdc  sth 18, 10(19)
  00fbce0  srawi 4, 4, 4
  00fbce4  sth 20, 14(19)
  00fbce8  clrldi 30, 6, 32
  00fbcec  sth 3, 12(19)
  00fbcf0  addze 7, 4
  00fbcf4  clrldi 5, 31, 32
  00fbcf8  ori 3, 30, 0
  00fbcfc  addic 4, 1, 292
  00fbd00  sth 7, 6(19)
  00fbd04  bl 0x5c5ad0
  00fbd08  nop
  00fbd0c  addc 3, 30, 31
  00fbd10  sldi 5, 20, 3
  00fbd14  clrldi 3, 3, 32
  00fbd18  addic 4, 1, 4420
  00fbd1c  clrldi 5, 5, 32
  00fbd20  bl 0x5c5ad0
  00fbd24  nop
  00fbd28  li 0, 8752
  00fbd2c  lvx 29, 1, 0
  00fbd30  addic 0, 0, 16
  00fbd34  lvx 30, 1, 0
  00fbd38  addic 0, 0, 16
  00fbd3c  lvx 31, 1, 0
  00fbd40  ld 0, 9008(1)
  00fbd44  mtlr 0
  00fbd48  lfd 27, 8952(1)
  00fbd4c  lfd 28, 8960(1)
  00fbd50  lfd 29, 8968(1)
  00fbd54  lfd 30, 8976(1)
  00fbd58  lfd 31, 8984(1)
  00fbd5c  ld 14, 8808(1)
  00fbd60  ld 15, 8816(1)
  00fbd64  ld 16, 8824(1)
  00fbd68  ld 17, 8832(1)
  00fbd6c  ld 18, 8840(1)
  00fbd70  ld 19, 8848(1)
  00fbd74  ld 20, 8856(1)
  00fbd78  ld 21, 8864(1)
  00fbd7c  ld 22, 8872(1)
  00fbd80  ld 23, 8880(1)
  00fbd84  ld 24, 8888(1)
  00fbd88  ld 25, 8896(1)
  00fbd8c  ld 26, 8904(1)
  00fbd90  ld 27, 8912(1)
  00fbd94  ld 28, 8920(1)
  00fbd98  ld 29, 8928(1)
  00fbd9c  ld 30, 8936(1)
  00fbda0  ld 31, 8944(1)
  00fbda4  addi 1, 1, 8992
  00fbda8  blr

MB_AnimLayerBlend:   # 0xfbdac, 0x194 bytes
  00fbdac  stdu 1, -160(1)
  00fbdb0  mflr 0
  00fbdb4  std 0, 176(1)
  00fbdb8  std 31, 152(1)
  00fbdbc  std 30, 144(1)
  00fbdc0  ori 31, 3, 0
  00fbdc4  li 30, 0
  00fbdc8  std 29, 136(1)
  00fbdcc  li 3, 129
  00fbdd0  std 28, 128(1)
  00fbdd4  lhz 29, 2(31)
  00fbdd8  extsh 29, 29
  00fbddc  addic 3, 3, -1
  00fbde0  cmpwi 3, 0
  00fbde4  bf 2, 0xfbddc
  00fbde8  ori 3, 30, 0
  00fbdec  lwz 28, 12(31)
  00fbdf0  cmpw 29, 3
  00fbdf4  bf 1, 0xfbe08
  00fbdf8  addic 3, 3, 1
  00fbdfc  extsw 3, 3
  00fbe00  cmpw 3, 29
  00fbe04  bt 0, 0xfbdf8
  00fbe08  lwz 3, 36(31)
  00fbe0c  stw 3, 112(1)
  00fbe10  lwz 3, 20(31)
  00fbe14  lwz 6, 56(31)
  00fbe18  lwz 7, 60(31)
  00fbe1c  lwz 5, 24(3)
  00fbe20  lbz 4, 8(3)
  00fbe24  lfs 1, 112(1)
  00fbe28  ori 3, 4, 0
  00fbe2c  bl 0xf3fe0
  00fbe30  lwz 4, 16(31)
  00fbe34  cmpw 29, 30
  00fbe38  ori 31, 4, 0
  00fbe3c  bf 1, 0xfbf20
  00fbe40  lbzx 6, 28, 30
  00fbe44  sldi 4, 30, 4
  00fbe48  addic 10, 31, 16
  00fbe4c  slwi 7, 6, 2
  00fbe50  slwi 8, 6, 6
  00fbe54  addic 9, 7, 2
  00fbe58  addc 8, 3, 8
  00fbe5c  addic 7, 7, 1
  00fbe60  addc 5, 4, 4
  00fbe64  clrldi 8, 8, 32
  00fbe68  slwi 7, 7, 4
  00fbe6c  addc 4, 4, 5
  00fbe70  addc 5, 3, 7
  00fbe74  slwi 9, 9, 4
  00fbe78  clrldi 5, 5, 32
  00fbe7c  lfs 1, 0(8)
  00fbe80  lfs 2, 4(8)
  00fbe84  addc 7, 3, 9
  00fbe88  lfs 3, 8(8)
  00fbe8c  addc 10, 10, 4
  00fbe90  lfs 4, 12(8)
  00fbe94  clrldi 7, 7, 32
  00fbe98  addc 8, 31, 4
  00fbe9c  lfs 5, 0(5)
  00fbea0  lfs 6, 4(5)
  00fbea4  clrldi 8, 8, 32
  00fbea8  lfs 7, 8(5)
  00fbeac  addic 9, 31, 32
  00fbeb0  lfs 8, 12(5)
  00fbeb4  addic 30, 30, 1
  00fbeb8  lfs 9, 0(7)
  00fbebc  clrldi 5, 10, 32
  00fbec0  lfs 10, 4(7)
  00fbec4  addc 9, 9, 4
  00fbec8  lfs 11, 8(7)
  00fbecc  extsw 30, 30
  00fbed0  lfs 12, 12(7)
  00fbed4  stfs 1, 0(8)
  00fbed8  stfs 2, 4(8)
  00fbedc  clrldi 7, 9, 32
  00fbee0  stfs 3, 8(8)
  00fbee4  addic 9, 31, 44
  00fbee8  stfs 4, 12(8)
  00fbeec  cmpw 30, 29
  00fbef0  stfs 5, 0(5)
  00fbef4  addc 4, 9, 4
  00fbef8  stfs 6, 4(5)
  00fbefc  stfs 7, 8(5)
  00fbf00  clrldi 4, 4, 32
  00fbf04  stfs 8, 12(5)
  00fbf08  stfs 9, 0(7)
  00fbf0c  stfs 10, 4(7)
  00fbf10  stfs 11, 8(7)
  00fbf14  stfs 12, 12(7)
  00fbf18  stw 6, 0(4)
  00fbf1c  bt 0, 0xfbe40
  00fbf20  ld 0, 176(1)
  00fbf24  mtlr 0
  00fbf28  ld 28, 128(1)
  00fbf2c  ld 29, 136(1)
  00fbf30  ld 30, 144(1)
  00fbf34  ld 31, 152(1)
  00fbf38  addi 1, 1, 160
  00fbf3c  blr
