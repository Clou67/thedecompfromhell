# game/update/moby574.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M574_003c1f3c:   # 0x3c1f3c, 0x58 bytes
  03c1f3c  stdu 1, -128(1)
  03c1f40  mflr 0
  03c1f44  std 0, 144(1)
  03c1f48  std 31, 120(1)
  03c1f4c  ori 31, 3, 0
  03c1f50  bl 0x48a718
  03c1f54  nop
  03c1f58  cmpwi 3, 0
  03c1f5c  bt 2, 0x3c1f6c
  03c1f60  li 4, 9
  03c1f64  stb 4, 32(31)
  03c1f68  b 0x3c1f80
  03c1f6c  lbz 4, 32(31)
  03c1f70  cmpwi 4, 9
  03c1f74  bf 2, 0x3c1f80
  03c1f78  li 4, 1
  03c1f7c  stb 4, 32(31)
  03c1f80  ld 0, 144(1)
  03c1f84  mtlr 0
  03c1f88  ld 31, 120(1)
  03c1f8c  addi 1, 1, 128
  03c1f90  blr

M574_003c1f94:   # 0x3c1f94, 0x58 bytes
  03c1f94  stdu 1, -128(1)
  03c1f98  mflr 0
  03c1f9c  std 0, 144(1)
  03c1fa0  std 31, 120(1)
  03c1fa4  ori 31, 3, 0
  03c1fa8  bl 0x48aa70
  03c1fac  nop
  03c1fb0  cmpwi 3, 0
  03c1fb4  bt 2, 0x3c1fc4
  03c1fb8  li 4, 9
  03c1fbc  stb 4, 32(31)
  03c1fc0  b 0x3c1fd8
  03c1fc4  lbz 4, 32(31)
  03c1fc8  cmpwi 4, 9
  03c1fcc  bf 2, 0x3c1fd8
  03c1fd0  li 4, 1
  03c1fd4  stb 4, 32(31)
  03c1fd8  ld 0, 144(1)
  03c1fdc  mtlr 0
  03c1fe0  ld 31, 120(1)
  03c1fe4  addi 1, 1, 128
  03c1fe8  blr

M574_003c1fec:   # 0x3c1fec, 0x58 bytes
  03c1fec  stdu 1, -128(1)
  03c1ff0  mflr 0
  03c1ff4  std 0, 144(1)
  03c1ff8  std 31, 120(1)
  03c1ffc  ori 31, 3, 0
  03c2000  bl 0x48acb8
  03c2004  nop
  03c2008  cmpwi 3, 0
  03c200c  bt 2, 0x3c201c
  03c2010  li 4, 9
  03c2014  stb 4, 32(31)
  03c2018  b 0x3c2030
  03c201c  lbz 4, 32(31)
  03c2020  cmpwi 4, 9
  03c2024  bf 2, 0x3c2030
  03c2028  li 4, 1
  03c202c  stb 4, 32(31)
  03c2030  ld 0, 144(1)
  03c2034  mtlr 0
  03c2038  ld 31, 120(1)
  03c203c  addi 1, 1, 128
  03c2040  blr

M574_003c2044:   # 0x3c2044, 0x38 bytes
  03c2044  stdu 1, -128(1)
  03c2048  mflr 0
  03c204c  std 0, 144(1)
  03c2050  std 31, 120(1)
  03c2054  ori 31, 3, 0
  03c2058  bl 0x48afe8
  03c205c  nop
  03c2060  li 4, 9
  03c2064  stb 4, 32(31)
  03c2068  ld 0, 144(1)
  03c206c  mtlr 0
  03c2070  ld 31, 120(1)
  03c2074  addi 1, 1, 128
  03c2078  blr

M574_003c207c:   # 0x3c207c, 0x40 bytes
  03c207c  cmpwi 3, 0
  03c2080  bt 2, 0x3c20b4
  03c2084  li 4, 0
  03c2088  lwz 3, 120(3)
  03c208c  li 5, 0
  03c2090  subc 4, 4, 3
  03c2094  addic 3, 3, 96
  03c2098  cntlzw 4, 4
  03c209c  subc 5, 5, 3
  03c20a0  sldi 4, 4, 58
  03c20a4  sradi 4, 4, 63
  03c20a8  and 4, 4, 5
  03c20ac  addc 3, 3, 4
  03c20b0  b 0x3c20b8
  03c20b4  li 3, 0
  03c20b8  blr

M574_003c20bc:   # 0x3c20bc, 0x14 bytes
  03c20bc  lis 3, 132
  03c20c0  lis 4, 1
  03c20c4  addic 3, 3, 24428
  03c20c8  stw 4, 72(3)
  03c20cc  blr

FUN_003c20d0:   # 0x3c20d0, 0x28 bytes
  03c20d0  lhz 4, 166(3)
  03c20d4  cmpwi 4, 574
  03c20d8  bf 2, 0x3c20f0
  03c20dc  lbz 3, 32(3)
  03c20e0  cmpwi 3, 14
  03c20e4  bf 2, 0x3c20f0
  03c20e8  li 3, 1
  03c20ec  b 0x3c20f4
  03c20f0  li 3, 0
  03c20f4  blr

FUN_003c20f8:   # 0x3c20f8, 0xc bytes
  03c20f8  li 4, 14
  03c20fc  stb 4, 32(3)
  03c2100  blr

M573_003c2108:   # 0x3c2108, 0xc4 bytes
  03c2108  stdu 1, -128(1)
  03c210c  mflr 0
  03c2110  std 0, 144(1)
  03c2114  std 31, 120(1)
  03c2118  cmpwi 3, 0
  03c211c  std 30, 112(1)
  03c2120  ori 31, 3, 0
  03c2124  lwz 30, 120(3)
  03c2128  bt 2, 0x3c214c
  03c212c  lbz 3, 32(31)
  03c2130  cmpwi 1, 3, 253
  03c2134  cmpwi 3, 254
  03c2138  cror 2, 2, 6
  03c213c  bt 2, 0x3c214c
  03c2140  lhz 4, 166(31)
  03c2144  cmpwi 4, 574
  03c2148  bt 2, 0x3c2154
  03c214c  li 3, 0
  03c2150  b 0x3c21b4
  03c2154  lbz 4, 82(31)
  03c2158  cmpwi 4, 10
  03c215c  bf 2, 0x3c218c
  03c2160  ori 3, 31, 0
  03c2164  bl 0xefe40
  03c2168  nop
  03c216c  lis 3, 60
  03c2170  addi 3, 3, 8452
  03c2174  lfs 2, 0(3)
  03c2178  lbz 3, 32(31)
  03c217c  fcmpu 0, 1, 2
  03c2180  bt 0, 0x3c218c
  03c2184  li 3, 1
  03c2188  b 0x3c21b4
  03c218c  cmpwi 1, 3, 13
  03c2190  cmpwi 3, 10
  03c2194  cror 2, 2, 6
  03c2198  bt 2, 0x3c21a8
  03c219c  lwz 3, 644(30)
  03c21a0  cmpwi 3, -1
  03c21a4  bf 2, 0x3c21b0
  03c21a8  li 3, 1
  03c21ac  b 0x3c21b4
  03c21b0  li 3, 0
  03c21b4  ld 0, 144(1)
  03c21b8  mtlr 0
  03c21bc  ld 30, 112(1)
  03c21c0  ld 31, 120(1)
  03c21c4  addi 1, 1, 128
  03c21c8  blr

M574_003c21cc:   # 0x3c21cc, 0x40 bytes
  03c21cc  cmpwi 3, 0
  03c21d0  bt 2, 0x3c2204
  03c21d4  lbz 4, 32(3)
  03c21d8  cmpwi 6, 4, 253
  03c21dc  cmpwi 4, 254
  03c21e0  cror 2, 2, 26
  03c21e4  cmpwi 1, 4, 9
  03c21e8  bt 2, 0x3c2204
  03c21ec  lhz 3, 166(3)
  03c21f0  cmpwi 3, 574
  03c21f4  bf 2, 0x3c2204
  03c21f8  bf 6, 0x3c2204
  03c21fc  li 3, 1
  03c2200  b 0x3c2208
  03c2204  li 3, 0
  03c2208  blr

M574_003c220c:   # 0x3c220c, 0xc4 bytes
  03c220c  stdu 1, -128(1)
  03c2210  mflr 0
  03c2214  std 0, 144(1)
  03c2218  cmpwi 3, 255
  03c221c  bf 2, 0x3c2228
  03c2220  li 3, 0
  03c2224  b 0x3c22c0
  03c2228  ori 4, 3, 0
  03c222c  addic 3, 1, 112
  03c2230  li 5, 0
  03c2234  li 6, 0
  03c2238  bl 0x104800
  03c223c  nop
  03c2240  lwz 3, 112(1)
  03c2244  cmpwi 3, 0
  03c2248  bt 2, 0x3c22bc
  03c224c  cmpwi 3, 0
  03c2250  bt 2, 0x3c2280
  03c2254  lbz 4, 32(3)
  03c2258  cmpwi 6, 4, 253
  03c225c  cmpwi 4, 254
  03c2260  cror 2, 2, 26
  03c2264  cmpwi 1, 4, 9
  03c2268  bt 2, 0x3c2280
  03c226c  lhz 4, 166(3)
  03c2270  cmpwi 4, 574
  03c2274  bf 2, 0x3c2280
  03c2278  bf 6, 0x3c2280
  03c227c  b 0x3c2290
  03c2280  bl 0x3c04c8
  03c2284  nop
  03c2288  cmpwi 3, 0
  03c228c  bt 2, 0x3c2298
  03c2290  li 3, 1
  03c2294  b 0x3c22c0
  03c2298  addic 3, 1, 112
  03c229c  lwz 4, 112(1)
  03c22a0  li 5, 0
  03c22a4  li 6, 0
  03c22a8  bl 0x10466c
  03c22ac  nop
  03c22b0  lwz 3, 112(1)
  03c22b4  cmpwi 3, 0
  03c22b8  bf 2, 0x3c224c
  03c22bc  li 3, 0
  03c22c0  ld 0, 144(1)
  03c22c4  mtlr 0
  03c22c8  addi 1, 1, 128
  03c22cc  blr

M574_003c22e8:   # 0x3c22e8, 0x1e4 bytes
  03c22e8  stdu 1, -160(1)
  03c22ec  mflr 0
  03c22f0  std 0, 176(1)
  03c22f4  stfd 31, 152(1)
  03c22f8  std 31, 144(1)
  03c22fc  ori 31, 4, 0
  03c2300  std 30, 136(1)
  03c2304  lwz 4, 64(4)
  03c2308  ori 30, 3, 0
  03c230c  std 29, 128(1)
  03c2310  fmr 31, 1
  03c2314  lwz 29, 120(3)
  03c2318  cmpwi 4, 0
  03c231c  lfs 1, 72(3)
  03c2320  bf 2, 0x3c232c
  03c2324  li 3, 0
  03c2328  b 0x3c24ac
  03c232c  lwz 3, 612(29)
  03c2330  cmpwi 3, -1
  03c2334  bt 2, 0x3c236c
  03c2338  lis 4, 164
  03c233c  slwi 3, 3, 8
  03c2340  lwz 4, -28512(4)
  03c2344  addc 3, 4, 3
  03c2348  clrldi 3, 3, 32
  03c234c  lhz 4, 166(3)
  03c2350  cmpwi 4, 822
  03c2354  bf 2, 0x3c236c
  03c2358  lbz 3, 188(3)
  03c235c  cmpwi 3, 4
  03c2360  bt 2, 0x3c236c
  03c2364  li 3, 0
  03c2368  b 0x3c24ac
  03c236c  fmr 2, 1
  03c2370  fmr 1, 31
  03c2374  bl 0x5025e0
  03c2378  nop
  03c237c  fabs 1, 1
  03c2380  lis 3, 60
  03c2384  addi 3, 3, 8912
  03c2388  lfs 2, 0(3)
  03c238c  fcmpu 0, 1, 2
  03c2390  bt 0, 0x3c23ac
  03c2394  lbz 3, 611(29)
  03c2398  cmpwi 3, 0
  03c239c  bf 2, 0x3c23ac
  03c23a0  lbz 3, 83(30)
  03c23a4  cmpwi 3, 1
  03c23a8  bf 2, 0x3c23c4
  03c23ac  lis 3, 60
  03c23b0  addi 3, 3, 8912
  03c23b4  lfs 2, 4(3)
  03c23b8  fcmpu 0, 1, 2
  03c23bc  cror 6, 0, 2
  03c23c0  bt 6, 0x3c24a8
  03c23c4  lfs 2, 20(30)
  03c23c8  lfs 3, 4(31)
  03c23cc  lfs 4, 16(30)
  03c23d0  fsubs 2, 2, 3
  03c23d4  lfs 3, 0(31)
  03c23d8  fsubs 3, 4, 3
  03c23dc  lis 3, 60
  03c23e0  addi 3, 3, 8912
  03c23e4  fmuls 2, 2, 2
  03c23e8  fmadds 2, 3, 3, 2
  03c23ec  lfs 3, 8(3)
  03c23f0  fsqrts 2, 2
  03c23f4  fcmpu 0, 2, 3
  03c23f8  cror 6, 1, 2
  03c23fc  bt 6, 0x3c24a8
  03c2400  fmr 2, 1
  03c2404  lis 3, 60
  03c2408  addi 3, 3, 8912
  03c240c  lfs 3, 12(3)
  03c2410  lfs 1, 16(3)
  03c2414  fcmpu 0, 2, 3
  03c2418  cror 6, 0, 2
  03c241c  bt 6, 0x3c245c
  03c2420  lis 3, 114
  03c2424  li 4, 1
  03c2428  li 5, 0
  03c242c  lfs 2, -3056(3)
  03c2430  ori 3, 30, 0
  03c2434  fmuls 1, 2, 1
  03c2438  fctiwz 1, 1
  03c243c  stfd 1, 112(1)
  03c2440  lwz 6, 116(1)
  03c2444  extsw 6, 6
  03c2448  bl 0xfddc0
  03c244c  nop
  03c2450  lis 3, 16256
  03c2454  stw 3, 88(30)
  03c2458  b 0x3c248c
  03c245c  lis 3, 114
  03c2460  li 4, 9
  03c2464  li 5, 0
  03c2468  lfs 2, -3056(3)
  03c246c  ori 3, 30, 0
  03c2470  fmuls 1, 2, 1
  03c2474  fctiwz 1, 1
  03c2478  stfd 1, 112(1)
  03c247c  lwz 6, 116(1)
  03c2480  extsw 6, 6
  03c2484  bl 0xfddc0
  03c2488  nop
  03c248c  li 4, 12
  03c2490  stfs 31, 652(29)
  03c2494  li 3, 1
  03c2498  lbz 5, 32(30)
  03c249c  stb 4, 32(30)
  03c24a0  stb 5, 188(30)
  03c24a4  b 0x3c24ac
  03c24a8  li 3, 0
  03c24ac  ld 0, 176(1)
  03c24b0  mtlr 0
  03c24b4  lfd 31, 152(1)
  03c24b8  ld 29, 128(1)
  03c24bc  ld 30, 136(1)
  03c24c0  ld 31, 144(1)
  03c24c4  addi 1, 1, 160
  03c24c8  blr

M574_003c24e8:   # 0x3c24e8, 0x538 bytes
  03c24e8  stdu 1, -400(1)
  03c24ec  mflr 0
  03c24f0  std 0, 416(1)
  03c24f4  stfd 26, 352(1)
  03c24f8  stfd 27, 360(1)
  03c24fc  stfd 28, 368(1)
  03c2500  stfd 29, 376(1)
  03c2504  stfd 30, 384(1)
  03c2508  stfd 31, 392(1)
  03c250c  std 31, 344(1)
  03c2510  ori 31, 3, 0
  03c2514  lis 3, 60
  03c2518  std 29, 328(1)
  03c251c  addic 5, 1, 144
  03c2520  addi 29, 3, 9420
  03c2524  std 30, 336(1)
  03c2528  ori 3, 31, 0
  03c252c  lwz 30, 120(31)
  03c2530  lfs 1, 624(30)
  03c2534  bl 0x1118d8
  03c2538  nop
  03c253c  lwz 3, 288(30)
  03c2540  addic 4, 31, 16
  03c2544  addic 5, 1, 128
  03c2548  stw 3, 224(1)
  03c254c  lfs 31, 0(29)
  03c2550  addic 6, 1, 224
  03c2554  lwz 3, 304(30)
  03c2558  addic 7, 1, 228
  03c255c  fmr 26, 31
  03c2560  lfs 1, 4(29)
  03c2564  lfs 2, 8(29)
  03c2568  li 9, 0
  03c256c  fmr 30, 26
  03c2570  fmr 3, 30
  03c2574  bl 0x10d7a0
  03c2578  nop
  03c257c  li 29, 0
  03c2580  ori 3, 29, 0
  03c2584  stw 29, 288(30)
  03c2588  lwz 4, 224(1)
  03c258c  cmpw 3, 4
  03c2590  bt 2, 0x3c29b4
  03c2594  slwi 3, 3, 4
  03c2598  lwz 4, 304(30)
  03c259c  lfs 5, 16(31)
  03c25a0  addc 3, 4, 3
  03c25a4  lfs 6, 20(31)
  03c25a8  clrldi 3, 3, 32
  03c25ac  lis 4, 60
  03c25b0  lfs 29, 16(3)
  03c25b4  lfs 28, 20(3)
  03c25b8  fsubs 1, 29, 5
  03c25bc  fsubs 2, 28, 6
  03c25c0  lfs 27, 24(3)
  03c25c4  lis 3, 115
  03c25c8  addi 4, 4, 9420
  03c25cc  addic 3, 3, 22784
  03c25d0  fabs 3, 1
  03c25d4  fabs 7, 2
  03c25d8  stfs 1, 244(1)
  03c25dc  stfs 2, 248(1)
  03c25e0  fsubs 1, 3, 7
  03c25e4  stfs 1, 252(1)
  03c25e8  lwz 5, 244(1)
  03c25ec  lfs 1, 244(1)
  03c25f0  lwz 6, 248(1)
  03c25f4  lfs 2, 248(1)
  03c25f8  fabs 1, 1
  03c25fc  lwz 7, 252(1)
  03c2600  rlwinm 6, 6, 3, 29, 29
  03c2604  lfs 4, 252(1)
  03c2608  fabs 2, 2
  03c260c  rlwimi 6, 7, 2, 30, 30
  03c2610  fsub 8, 4, 26
  03c2614  fsub 4, 4, 26
  03c2618  rlwimi 6, 5, 4, 28, 28
  03c261c  ori 5, 3, 0
  03c2620  rlwimi 5, 6, 2, 26, 28
  03c2624  slwi 6, 6, 2
  03c2628  clrldi 5, 5, 32
  03c262c  fsel 7, 8, 1, 7
  03c2630  lfsx 1, 3, 6
  03c2634  fsel 3, 4, 2, 3
  03c2638  lfs 2, 4(5)
  03c263c  lfs 4, 12(4)
  03c2640  fcmpu 0, 7, 26
  03c2644  bt 1, 0x3c2650
  03c2648  fmr 1, 26
  03c264c  b 0x3c2768
  03c2650  fsubs 8, 3, 7
  03c2654  fadds 3, 3, 7
  03c2658  addic 4, 1, 16
  03c265c  li 7, 2
  03c2660  addic 6, 4, 288
  03c2664  addic 5, 4, 272
  03c2668  mtctr 7
  03c266c  fdivs 3, 8, 3
  03c2670  fmuls 7, 3, 3
  03c2674  stfs 3, 300(1)
  03c2678  stfs 3, 292(1)
  03c267c  stfs 3, 296(1)
  03c2680  stfs 3, 288(1)
  03c2684  lfs 9, 300(1)
  03c2688  lfs 10, 292(1)
  03c268c  lfs 11, 296(1)
  03c2690  fmuls 8, 7, 7
  03c2694  fmuls 10, 10, 7
  03c2698  fmuls 9, 9, 8
  03c269c  fmuls 3, 8, 8
  03c26a0  fmuls 8, 11, 8
  03c26a4  stfs 10, 292(1)
  03c26a8  fmuls 7, 9, 7
  03c26ac  stfs 8, 296(1)
  03c26b0  stfs 7, 300(1)
  03c26b4  lfs 7, 272(4)
  03c26b8  fmuls 7, 7, 3
  03c26bc  stfs 7, 288(4)
  03c26c0  lfs 7, 4(5)
  03c26c4  addic 5, 5, 8
  03c26c8  fmuls 7, 7, 3
  03c26cc  addic 4, 4, 8
  03c26d0  stfs 7, 4(6)
  03c26d4  addic 6, 6, 8
  03c26d8  bdnz 0x3c26b4
  03c26dc  li 6, 4
  03c26e0  ori 4, 1, 0
  03c26e4  mtctr 6
  03c26e8  lis 5, 115
  03c26ec  addic 6, 4, 288
  03c26f0  addic 5, 5, 22752
  03c26f4  ori 8, 6, 0
  03c26f8  lfs 3, 288(4)
  03c26fc  lfs 7, 0(5)
  03c2700  fmuls 3, 3, 7
  03c2704  lfs 7, 4(5)
  03c2708  addic 5, 5, 8
  03c270c  stfs 3, 288(4)
  03c2710  lfs 3, 4(6)
  03c2714  addic 4, 4, 8
  03c2718  fmuls 3, 3, 7
  03c271c  stfs 3, 4(6)
  03c2720  addic 6, 6, 8
  03c2724  bdnz 0x3c26f8
  03c2728  ori 4, 1, 0
  03c272c  fmr 3, 26
  03c2730  mtctr 7
  03c2734  lfs 7, 288(4)
  03c2738  fadds 3, 3, 7
  03c273c  lfs 7, 4(8)
  03c2740  addic 4, 4, 16
  03c2744  lfs 8, 8(8)
  03c2748  lfs 9, 12(8)
  03c274c  addic 8, 8, 16
  03c2750  fadds 3, 3, 7
  03c2754  fadds 3, 3, 8
  03c2758  fadds 3, 3, 9
  03c275c  bdnz 0x3c2734
  03c2760  fadds 3, 3, 4
  03c2764  fmadds 1, 3, 1, 2
  03c2768  lfs 2, 144(1)
  03c276c  lfs 3, 148(1)
  03c2770  fsubs 2, 2, 5
  03c2774  fsubs 3, 3, 6
  03c2778  fabs 7, 2
  03c277c  fabs 6, 3
  03c2780  stfs 2, 232(1)
  03c2784  stfs 3, 236(1)
  03c2788  fsubs 2, 7, 6
  03c278c  stfs 2, 240(1)
  03c2790  lwz 4, 232(1)
  03c2794  lfs 2, 232(1)
  03c2798  lwz 5, 236(1)
  03c279c  lfs 3, 236(1)
  03c27a0  fabs 2, 2
  03c27a4  lwz 6, 240(1)
  03c27a8  rlwinm 5, 5, 3, 29, 29
  03c27ac  lfs 5, 240(1)
  03c27b0  fabs 3, 3
  03c27b4  rlwimi 5, 6, 2, 30, 30
  03c27b8  fsub 8, 5, 26
  03c27bc  fsub 9, 5, 26
  03c27c0  rlwimi 5, 4, 4, 28, 28
  03c27c4  ori 4, 3, 0
  03c27c8  rlwimi 4, 5, 2, 26, 28
  03c27cc  slwi 5, 5, 2
  03c27d0  clrldi 4, 4, 32
  03c27d4  fsel 6, 8, 2, 6
  03c27d8  lfsx 5, 3, 5
  03c27dc  fsel 3, 9, 3, 7
  03c27e0  lfs 2, 4(4)
  03c27e4  fcmpu 0, 6, 26
  03c27e8  bt 1, 0x3c27f4
  03c27ec  fmr 4, 26
  03c27f0  b 0x3c290c
  03c27f4  fsubs 7, 3, 6
  03c27f8  fadds 3, 3, 6
  03c27fc  addic 3, 1, 16
  03c2800  li 6, 2
  03c2804  addic 4, 3, 240
  03c2808  addic 5, 3, 256
  03c280c  mtctr 6
  03c2810  fdivs 3, 7, 3
  03c2814  fmuls 6, 3, 3
  03c2818  stfs 3, 268(1)
  03c281c  stfs 3, 260(1)
  03c2820  stfs 3, 264(1)
  03c2824  stfs 3, 256(1)
  03c2828  lfs 8, 268(1)
  03c282c  lfs 9, 260(1)
  03c2830  lfs 10, 264(1)
  03c2834  fmuls 7, 6, 6
  03c2838  fmuls 9, 9, 6
  03c283c  fmuls 8, 8, 7
  03c2840  fmuls 3, 7, 7
  03c2844  fmuls 7, 10, 7
  03c2848  stfs 9, 260(1)
  03c284c  fmuls 6, 8, 6
  03c2850  stfs 7, 264(1)
  03c2854  stfs 6, 268(1)
  03c2858  lfs 6, 240(3)
  03c285c  fmuls 6, 6, 3
  03c2860  stfs 6, 256(3)
  03c2864  lfs 6, 4(4)
  03c2868  addic 3, 3, 8
  03c286c  addic 4, 4, 8
  03c2870  fmuls 6, 6, 3
  03c2874  stfs 6, 4(5)
  03c2878  addic 5, 5, 8
  03c287c  bdnz 0x3c2858
  03c2880  li 5, 4
  03c2884  ori 3, 1, 0
  03c2888  mtctr 5
  03c288c  lis 4, 115
  03c2890  addic 5, 3, 256
  03c2894  addic 4, 4, 22752
  03c2898  ori 7, 5, 0
  03c289c  lfs 3, 256(3)
  03c28a0  lfs 6, 0(4)
  03c28a4  fmuls 3, 3, 6
  03c28a8  lfs 6, 4(4)
  03c28ac  addic 4, 4, 8
  03c28b0  stfs 3, 256(3)
  03c28b4  lfs 3, 4(5)
  03c28b8  addic 3, 3, 8
  03c28bc  fmuls 3, 3, 6
  03c28c0  stfs 3, 4(5)
  03c28c4  addic 5, 5, 8
  03c28c8  bdnz 0x3c289c
  03c28cc  fmr 3, 26
  03c28d0  ori 3, 1, 0
  03c28d4  mtctr 6
  03c28d8  lfs 6, 256(3)
  03c28dc  fadds 3, 3, 6
  03c28e0  addic 3, 3, 16
  03c28e4  lfs 6, 4(7)
  03c28e8  lfs 7, 8(7)
  03c28ec  lfs 8, 12(7)
  03c28f0  addic 7, 7, 16
  03c28f4  fadds 3, 3, 6
  03c28f8  fadds 3, 3, 7
  03c28fc  fadds 3, 3, 8
  03c2900  bdnz 0x3c28d8
  03c2904  fadds 4, 3, 4
  03c2908  fmadds 4, 4, 5, 2
  03c290c  fmr 2, 4
  03c2910  bl 0x5026a0
  03c2914  nop
  03c2918  lfs 2, 148(1)
  03c291c  lfs 3, 144(1)
  03c2920  fsubs 2, 2, 28
  03c2924  fsubs 3, 3, 29
  03c2928  lfs 4, 152(1)
  03c292c  fsubs 4, 4, 27
  03c2930  lis 3, 60
  03c2934  addi 3, 3, 9420
  03c2938  fmuls 2, 2, 2
  03c293c  fmadds 2, 3, 3, 2
  03c2940  fmadds 2, 4, 4, 2
  03c2944  fsqrts 2, 2
  03c2948  stfs 2, 228(1)
  03c294c  lfs 3, 16(3)
  03c2950  fcmpu 0, 1, 3
  03c2954  cror 6, 1, 2
  03c2958  bt 6, 0x3c2978
  03c295c  fcmpu 0, 30, 1
  03c2960  cror 6, 1, 2
  03c2964  bt 6, 0x3c29b4
  03c2968  fmr 31, 2
  03c296c  fmr 30, 1
  03c2970  lwz 29, 288(30)
  03c2974  b 0x3c29b4
  03c2978  lis 3, 60
  03c297c  fcmpu 6, 31, 2
  03c2980  addi 3, 3, 9420
  03c2984  lfs 3, 20(3)
  03c2988  fcmpu 7, 2, 3
  03c298c  bt 28, 0x3c299c
  03c2990  fcmpu 1, 31, 3
  03c2994  bt 25, 0x3c29a8
  03c2998  bt 4, 0x3c29a8
  03c299c  fcmpu 1, 31, 2
  03c29a0  bf 28, 0x3c29b4
  03c29a4  bf 4, 0x3c29b4
  03c29a8  fmr 31, 2
  03c29ac  fmr 30, 1
  03c29b0  lwz 29, 288(30)
  03c29b4  lwz 3, 304(30)
  03c29b8  lwz 4, 288(30)
  03c29bc  lbz 5, 292(30)
  03c29c0  extsb 5, 5
  03c29c4  lwz 3, 0(3)
  03c29c8  addc 4, 4, 3
  03c29cc  addc 4, 4, 5
  03c29d0  divw 5, 4, 3
  03c29d4  mullw 3, 5, 3
  03c29d8  subc 3, 4, 3
  03c29dc  cmpwi 3, 0
  03c29e0  stw 3, 288(30)
  03c29e4  bf 2, 0x3c2588
  03c29e8  stw 29, 288(30)
  03c29ec  ld 0, 416(1)
  03c29f0  mtlr 0
  03c29f4  lfd 26, 352(1)
  03c29f8  lfd 27, 360(1)
  03c29fc  lfd 28, 368(1)
  03c2a00  lfd 29, 376(1)
  03c2a04  lfd 30, 384(1)
  03c2a08  lfd 31, 392(1)
  03c2a0c  ld 29, 328(1)
  03c2a10  ld 30, 336(1)
  03c2a14  ld 31, 344(1)
  03c2a18  addi 1, 1, 400
  03c2a1c  blr

M574_003c2a58:   # 0x3c2a58, 0xc2c bytes
  03c2a58  stdu 1, -320(1)
  03c2a5c  mflr 0
  03c2a60  std 0, 336(1)
  03c2a64  stfd 31, 312(1)
  03c2a68  lis 4, 60
  03c2a6c  std 30, 296(1)
  03c2a70  li 5, 0
  03c2a74  lwz 30, 120(3)
  03c2a78  std 31, 304(1)
  03c2a7c  addi 4, 4, 10784
  03c2a80  ori 31, 3, 0
  03c2a84  lfs 31, 0(4)
  03c2a88  stw 5, 116(1)
  03c2a8c  lwz 3, 56(30)
  03c2a90  std 29, 288(1)
  03c2a94  std 28, 280(1)
  03c2a98  cmpwi 3, 0
  03c2a9c  bt 2, 0x3c2ae4
  03c2aa0  lis 3, 60
  03c2aa4  li 4, 0
  03c2aa8  vspltisw 2, -1
  03c2aac  addi 3, 3, 10784
  03c2ab0  li 5, 4
  03c2ab4  lis 6, 114
  03c2ab8  stw 4, 56(30)
  03c2abc  li 4, -3056
  03c2ac0  vslw 2, 2, 2
  03c2ac4  lvlx 3, 5, 3
  03c2ac8  li 3, 594
  03c2acc  vspltw 3, 3, 0
  03c2ad0  lvlx 4, 4, 6
  03c2ad4  vmaddfp 2, 4, 3, 2
  03c2ad8  vctsxs 2, 2, 0
  03c2adc  vsplth 2, 2, 1
  03c2ae0  stvehx 2, 3, 30
  03c2ae4  addic 3, 30, 594
  03c2ae8  bl 0x4fffb4
  03c2aec  nop
  03c2af0  cmpwi 3, 0
  03c2af4  bt 2, 0x3c2b00
  03c2af8  lfs 1, 620(30)
  03c2afc  b 0x3c2b14
  03c2b00  lis 3, 60
  03c2b04  lfs 1, 620(30)
  03c2b08  addi 3, 3, 10784
  03c2b0c  lfs 2, 8(3)
  03c2b10  fadds 1, 1, 2
  03c2b14  ori 3, 31, 0
  03c2b18  stfs 1, 624(30)
  03c2b1c  lis 4, 51
  03c2b20  li 5, 0
  03c2b24  bl 0x10675c
  03c2b28  nop
  03c2b2c  ori 29, 3, 0
  03c2b30  addic 5, 30, 32
  03c2b34  ori 4, 29, 0
  03c2b38  li 6, 0
  03c2b3c  addic 7, 1, 112
  03c2b40  li 9, 0
  03c2b44  addic 8, 1, 116
  03c2b48  ori 3, 31, 0
  03c2b4c  li 10, 4
  03c2b50  bl 0x106840
  03c2b54  nop
  03c2b58  cmpwi 29, 0
  03c2b5c  bt 2, 0x3c3648
  03c2b60  lwz 4, 112(1)
  03c2b64  cmpwi 4, 1
  03c2b68  bt 2, 0x3c3648
  03c2b6c  lbz 4, 32(31)
  03c2b70  cmpwi 4, 13
  03c2b74  bt 2, 0x3c3648
  03c2b78  lis 4, 60
  03c2b7c  addi 5, 4, 10784
  03c2b80  lwz 4, 32(29)
  03c2b84  cmpwi 4, 0
  03c2b88  lfs 4, 12(5)
  03c2b8c  bt 2, 0x3c2f18
  03c2b90  lis 5, 151
  03c2b94  addic 5, 5, -25376
  03c2b98  lwz 6, 4240(5)
  03c2b9c  cmpw 4, 6
  03c2ba0  bt 2, 0x3c2d60
  03c2ba4  lfs 1, 16(31)
  03c2ba8  lfs 2, 16(4)
  03c2bac  lfs 3, 20(31)
  03c2bb0  lfs 5, 20(4)
  03c2bb4  fsubs 1, 1, 2
  03c2bb8  fsubs 2, 3, 5
  03c2bbc  lis 4, 115
  03c2bc0  addic 4, 4, 22784
  03c2bc4  fabs 3, 1
  03c2bc8  fabs 5, 2
  03c2bcc  stfs 1, 148(1)
  03c2bd0  stfs 2, 152(1)
  03c2bd4  fsubs 1, 3, 5
  03c2bd8  stfs 1, 156(1)
  03c2bdc  lwz 5, 148(1)
  03c2be0  lfs 1, 148(1)
  03c2be4  lwz 6, 152(1)
  03c2be8  lfs 2, 152(1)
  03c2bec  lwz 7, 156(1)
  03c2bf0  rlwinm 6, 6, 3, 29, 29
  03c2bf4  fabs 6, 2
  03c2bf8  lfs 2, 156(1)
  03c2bfc  fabs 1, 1
  03c2c00  rlwimi 6, 7, 2, 30, 30
  03c2c04  fsub 7, 2, 31
  03c2c08  fsub 8, 2, 31
  03c2c0c  rlwimi 6, 5, 4, 28, 28
  03c2c10  ori 5, 4, 0
  03c2c14  rlwimi 5, 6, 2, 26, 28
  03c2c18  slwi 6, 6, 2
  03c2c1c  clrldi 5, 5, 32
  03c2c20  fsel 5, 7, 1, 5
  03c2c24  lfsx 1, 4, 6
  03c2c28  fsel 3, 8, 6, 3
  03c2c2c  lfs 2, 4(5)
  03c2c30  fcmpu 0, 5, 31
  03c2c34  bt 1, 0x3c2c40
  03c2c38  fmr 1, 31
  03c2c3c  b 0x3c2d58
  03c2c40  fsubs 6, 3, 5
  03c2c44  fadds 3, 3, 5
  03c2c48  addic 4, 1, 16
  03c2c4c  li 7, 2
  03c2c50  addic 6, 4, 224
  03c2c54  addic 5, 4, 208
  03c2c58  mtctr 7
  03c2c5c  fdivs 3, 6, 3
  03c2c60  fmuls 5, 3, 3
  03c2c64  stfs 3, 236(1)
  03c2c68  stfs 3, 228(1)
  03c2c6c  stfs 3, 232(1)
  03c2c70  stfs 3, 224(1)
  03c2c74  lfs 7, 236(1)
  03c2c78  lfs 8, 228(1)
  03c2c7c  lfs 9, 232(1)
  03c2c80  fmuls 6, 5, 5
  03c2c84  fmuls 8, 8, 5
  03c2c88  fmuls 7, 7, 6
  03c2c8c  fmuls 3, 6, 6
  03c2c90  fmuls 6, 9, 6
  03c2c94  stfs 8, 228(1)
  03c2c98  fmuls 5, 7, 5
  03c2c9c  stfs 6, 232(1)
  03c2ca0  stfs 5, 236(1)
  03c2ca4  lfs 5, 208(4)
  03c2ca8  fmuls 5, 5, 3
  03c2cac  stfs 5, 224(4)
  03c2cb0  lfs 5, 4(5)
  03c2cb4  addic 5, 5, 8
  03c2cb8  fmuls 5, 5, 3
  03c2cbc  addic 4, 4, 8
  03c2cc0  stfs 5, 4(6)
  03c2cc4  addic 6, 6, 8
  03c2cc8  bdnz 0x3c2ca4
  03c2ccc  li 6, 4
  03c2cd0  ori 4, 1, 0
  03c2cd4  mtctr 6
  03c2cd8  lis 5, 115
  03c2cdc  addic 6, 4, 224
  03c2ce0  addic 5, 5, 22752
  03c2ce4  ori 8, 6, 0
  03c2ce8  lfs 3, 224(4)
  03c2cec  lfs 5, 0(5)
  03c2cf0  fmuls 3, 3, 5
  03c2cf4  lfs 5, 4(5)
  03c2cf8  addic 5, 5, 8
  03c2cfc  stfs 3, 224(4)
  03c2d00  lfs 3, 4(6)
  03c2d04  addic 4, 4, 8
  03c2d08  fmuls 3, 3, 5
  03c2d0c  stfs 3, 4(6)
  03c2d10  addic 6, 6, 8
  03c2d14  bdnz 0x3c2ce8
  03c2d18  ori 4, 1, 0
  03c2d1c  fmr 3, 31
  03c2d20  mtctr 7
  03c2d24  lfs 5, 224(4)
  03c2d28  fadds 3, 3, 5
  03c2d2c  lfs 5, 4(8)
  03c2d30  addic 4, 4, 16
  03c2d34  lfs 6, 8(8)
  03c2d38  lfs 7, 12(8)
  03c2d3c  addic 8, 8, 16
  03c2d40  fadds 3, 3, 5
  03c2d44  fadds 3, 3, 6
  03c2d48  fadds 3, 3, 7
  03c2d4c  bdnz 0x3c2d24
  03c2d50  fadds 3, 3, 4
  03c2d54  fmadds 1, 3, 1, 2
  03c2d58  fmr 4, 1
  03c2d5c  b 0x3c2f14
  03c2d60  lfs 1, 16(31)
  03c2d64  lfs 2, 128(5)
  03c2d68  lfs 3, 20(31)
  03c2d6c  lfs 5, 132(5)
  03c2d70  fsubs 1, 1, 2
  03c2d74  fsubs 2, 3, 5
  03c2d78  lis 4, 115
  03c2d7c  addic 4, 4, 22784
  03c2d80  fabs 3, 1
  03c2d84  fabs 5, 2
  03c2d88  stfs 1, 136(1)
  03c2d8c  stfs 2, 140(1)
  03c2d90  fsubs 1, 3, 5
  03c2d94  stfs 1, 144(1)
  03c2d98  lwz 5, 136(1)
  03c2d9c  lfs 1, 136(1)
  03c2da0  lwz 6, 140(1)
  03c2da4  lfs 2, 140(1)
  03c2da8  fabs 1, 1
  03c2dac  lwz 7, 144(1)
  03c2db0  rlwinm 6, 6, 3, 29, 29
  03c2db4  lfs 6, 144(1)
  03c2db8  fabs 2, 2
  03c2dbc  rlwimi 6, 7, 2, 30, 30
  03c2dc0  fsub 7, 6, 31
  03c2dc4  fsub 6, 6, 31
  03c2dc8  rlwimi 6, 5, 4, 28, 28
  03c2dcc  ori 5, 4, 0
  03c2dd0  rlwimi 5, 6, 2, 26, 28
  03c2dd4  slwi 6, 6, 2
  03c2dd8  clrldi 5, 5, 32
  03c2ddc  fsel 5, 7, 1, 5
  03c2de0  lfsx 1, 4, 6
  03c2de4  fsel 3, 6, 2, 3
  03c2de8  lfs 2, 4(5)
  03c2dec  fcmpu 0, 5, 31
  03c2df0  bt 1, 0x3c2dfc
  03c2df4  fmr 4, 31
  03c2df8  b 0x3c2f14
  03c2dfc  fsubs 6, 3, 5
  03c2e00  fadds 3, 3, 5
  03c2e04  addic 4, 1, 16
  03c2e08  li 7, 2
  03c2e0c  addic 5, 4, 176
  03c2e10  addic 6, 4, 192
  03c2e14  mtctr 7
  03c2e18  fdivs 3, 6, 3
  03c2e1c  fmuls 5, 3, 3
  03c2e20  stfs 3, 204(1)
  03c2e24  stfs 3, 196(1)
  03c2e28  stfs 3, 200(1)
  03c2e2c  stfs 3, 192(1)
  03c2e30  lfs 7, 204(1)
  03c2e34  lfs 8, 196(1)
  03c2e38  lfs 9, 200(1)
  03c2e3c  fmuls 6, 5, 5
  03c2e40  fmuls 8, 8, 5
  03c2e44  fmuls 7, 7, 6
  03c2e48  fmuls 3, 6, 6
  03c2e4c  fmuls 6, 9, 6
  03c2e50  stfs 8, 196(1)
  03c2e54  fmuls 5, 7, 5
  03c2e58  stfs 6, 200(1)
  03c2e5c  stfs 5, 204(1)
  03c2e60  lfs 5, 176(4)
  03c2e64  fmuls 5, 5, 3
  03c2e68  stfs 5, 192(4)
  03c2e6c  lfs 5, 4(5)
  03c2e70  addic 4, 4, 8
  03c2e74  addic 5, 5, 8
  03c2e78  fmuls 5, 5, 3
  03c2e7c  stfs 5, 4(6)
  03c2e80  addic 6, 6, 8
  03c2e84  bdnz 0x3c2e60
  03c2e88  li 6, 4
  03c2e8c  ori 4, 1, 0
  03c2e90  mtctr 6
  03c2e94  lis 5, 115
  03c2e98  addic 6, 4, 192
  03c2e9c  addic 5, 5, 22752
  03c2ea0  ori 8, 6, 0
  03c2ea4  lfs 3, 192(4)
  03c2ea8  lfs 5, 0(5)
  03c2eac  fmuls 3, 3, 5
  03c2eb0  lfs 5, 4(5)
  03c2eb4  addic 5, 5, 8
  03c2eb8  stfs 3, 192(4)
  03c2ebc  lfs 3, 4(6)
  03c2ec0  addic 4, 4, 8
  03c2ec4  fmuls 3, 3, 5
  03c2ec8  stfs 3, 4(6)
  03c2ecc  addic 6, 6, 8
  03c2ed0  bdnz 0x3c2ea4
  03c2ed4  fmr 3, 31
  03c2ed8  ori 4, 1, 0
  03c2edc  mtctr 7
  03c2ee0  lfs 5, 192(4)
  03c2ee4  fadds 3, 3, 5
  03c2ee8  addic 4, 4, 16
  03c2eec  lfs 5, 4(8)
  03c2ef0  lfs 6, 8(8)
  03c2ef4  lfs 7, 12(8)
  03c2ef8  addic 8, 8, 16
  03c2efc  fadds 3, 3, 5
  03c2f00  fadds 3, 3, 6
  03c2f04  fadds 3, 3, 7
  03c2f08  bdnz 0x3c2ee0
  03c2f0c  fadds 4, 3, 4
  03c2f10  fmadds 4, 4, 1, 2
  03c2f14  b 0x3c30d4
  03c2f18  lis 4, 151
  03c2f1c  lfs 1, 16(31)
  03c2f20  lfs 2, 20(31)
  03c2f24  addic 4, 4, -25376
  03c2f28  lfs 3, 128(4)
  03c2f2c  lfs 5, 132(4)
  03c2f30  fsubs 1, 1, 3
  03c2f34  fsubs 2, 2, 5
  03c2f38  lis 4, 115
  03c2f3c  addic 4, 4, 22784
  03c2f40  fabs 3, 1
  03c2f44  fabs 5, 2
  03c2f48  stfs 1, 124(1)
  03c2f4c  stfs 2, 128(1)
  03c2f50  fsubs 1, 3, 5
  03c2f54  stfs 1, 132(1)
  03c2f58  lwz 5, 124(1)
  03c2f5c  lfs 1, 124(1)
  03c2f60  lwz 6, 128(1)
  03c2f64  lfs 2, 128(1)
  03c2f68  lwz 7, 132(1)
  03c2f6c  rlwinm 6, 6, 3, 29, 29
  03c2f70  fabs 6, 2
  03c2f74  lfs 2, 132(1)
  03c2f78  fabs 1, 1
  03c2f7c  rlwimi 6, 7, 2, 30, 30
  03c2f80  fsub 7, 2, 31
  03c2f84  fsub 8, 2, 31
  03c2f88  rlwimi 6, 5, 4, 28, 28
  03c2f8c  ori 5, 4, 0
  03c2f90  rlwimi 5, 6, 2, 26, 28
  03c2f94  slwi 6, 6, 2
  03c2f98  clrldi 5, 5, 32
  03c2f9c  fsel 5, 7, 1, 5
  03c2fa0  lfsx 1, 4, 6
  03c2fa4  fsel 3, 8, 6, 3
  03c2fa8  lfs 2, 4(5)
  03c2fac  fcmpu 0, 5, 31
  03c2fb0  bt 1, 0x3c2fbc
  03c2fb4  fmr 4, 31
  03c2fb8  b 0x3c30d4
  03c2fbc  fsubs 6, 3, 5
  03c2fc0  fadds 3, 3, 5
  03c2fc4  addic 4, 1, 16
  03c2fc8  li 7, 2
  03c2fcc  addic 6, 4, 160
  03c2fd0  addic 5, 4, 144
  03c2fd4  mtctr 7
  03c2fd8  fdivs 3, 6, 3
  03c2fdc  fmuls 5, 3, 3
  03c2fe0  stfs 3, 172(1)
  03c2fe4  stfs 3, 164(1)
  03c2fe8  stfs 3, 168(1)
  03c2fec  stfs 3, 160(1)
  03c2ff0  lfs 7, 172(1)
  03c2ff4  lfs 8, 164(1)
  03c2ff8  lfs 9, 168(1)
  03c2ffc  fmuls 6, 5, 5
  03c3000  fmuls 8, 8, 5
  03c3004  fmuls 7, 7, 6
  03c3008  fmuls 3, 6, 6
  03c300c  fmuls 6, 9, 6
  03c3010  stfs 8, 164(1)
  03c3014  fmuls 5, 7, 5
  03c3018  stfs 6, 168(1)
  03c301c  stfs 5, 172(1)
  03c3020  lfs 5, 144(4)
  03c3024  fmuls 5, 5, 3
  03c3028  stfs 5, 160(4)
  03c302c  lfs 5, 4(5)
  03c3030  addic 5, 5, 8
  03c3034  fmuls 5, 5, 3
  03c3038  addic 4, 4, 8
  03c303c  stfs 5, 4(6)
  03c3040  addic 6, 6, 8
  03c3044  bdnz 0x3c3020
  03c3048  li 6, 4
  03c304c  ori 4, 1, 0
  03c3050  mtctr 6
  03c3054  lis 5, 115
  03c3058  addic 6, 4, 160
  03c305c  addic 5, 5, 22752
  03c3060  ori 8, 6, 0
  03c3064  lfs 3, 160(4)
  03c3068  lfs 5, 0(5)
  03c306c  fmuls 3, 3, 5
  03c3070  lfs 5, 4(5)
  03c3074  addic 5, 5, 8
  03c3078  stfs 3, 160(4)
  03c307c  lfs 3, 4(6)
  03c3080  addic 4, 4, 8
  03c3084  fmuls 3, 3, 5
  03c3088  stfs 3, 4(6)
  03c308c  addic 6, 6, 8
  03c3090  bdnz 0x3c3064
  03c3094  ori 4, 1, 0
  03c3098  fmr 3, 31
  03c309c  mtctr 7
  03c30a0  lfs 5, 160(4)
  03c30a4  fadds 3, 3, 5
  03c30a8  lfs 5, 4(8)
  03c30ac  addic 4, 4, 16
  03c30b0  lfs 6, 8(8)
  03c30b4  lfs 7, 12(8)
  03c30b8  addic 8, 8, 16
  03c30bc  fadds 3, 3, 5
  03c30c0  fadds 3, 3, 6
  03c30c4  fadds 3, 3, 7
  03c30c8  bdnz 0x3c30a0
  03c30cc  fadds 4, 3, 4
  03c30d0  fmadds 4, 4, 1, 2
  03c30d4  stfs 4, 120(1)
  03c30d8  lfs 1, 32(30)
  03c30dc  lfs 2, 116(1)
  03c30e0  fsubs 1, 1, 2
  03c30e4  fcmpu 0, 1, 31
  03c30e8  stfs 1, 32(30)
  03c30ec  cror 6, 0, 2
  03c30f0  bt 6, 0x3c34cc
  03c30f4  cmpwi 3, 5
  03c30f8  bt 1, 0x3c311c
  03c30fc  cmpwi 3, 2
  03c3100  bt 1, 0x3c3110
  03c3104  cmpwi 3, 1
  03c3108  bt 2, 0x3c34cc
  03c310c  b 0x3c3638
  03c3110  cmpwi 3, 3
  03c3114  bf 1, 0x3c32ac
  03c3118  b 0x3c33bc
  03c311c  cmpwi 3, 8
  03c3120  bt 1, 0x3c3130
  03c3124  cmpwi 3, 6
  03c3128  bf 1, 0x3c314c
  03c312c  b 0x3c32ac
  03c3130  cmpwi 3, 11
  03c3134  bf 1, 0x3c3638
  03c3138  cmpwi 3, 13
  03c313c  bt 1, 0x3c3638
  03c3140  li 3, 120
  03c3144  stb 3, 103(30)
  03c3148  b 0x3c3638
  03c314c  lis 4, 60
  03c3150  li 3, 120
  03c3154  addi 28, 4, 10784
  03c3158  lis 4, 114
  03c315c  stb 3, 103(30)
  03c3160  lis 3, 132
  03c3164  lfs 1, 16(28)
  03c3168  lfs 2, -3048(4)
  03c316c  fmuls 1, 2, 1
  03c3170  li 4, 9
  03c3174  addic 5, 1, 120
  03c3178  addic 6, 30, 136
  03c317c  stfs 1, 128(30)
  03c3180  lfs 3, 20(28)
  03c3184  lfs 4, 24536(3)
  03c3188  fmuls 4, 4, 3
  03c318c  lis 3, 132
  03c3190  fmuls 4, 4, 1
  03c3194  lfs 5, 24540(3)
  03c3198  lis 3, 132
  03c319c  lfs 6, 24(28)
  03c31a0  fsqrts 4, 4
  03c31a4  lfs 7, 24544(3)
  03c31a8  addic 7, 30, 140
  03c31ac  li 3, 0
  03c31b0  stb 3, 173(30)
  03c31b4  stw 4, 148(30)
  03c31b8  fmuls 2, 2, 7
  03c31bc  fmuls 2, 2, 6
  03c31c0  fmuls 3, 4, 3
  03c31c4  stfs 4, 140(30)
  03c31c8  fdivs 1, 3, 1
  03c31cc  fdivs 3, 5, 1
  03c31d0  fmadds 1, 2, 1, 3
  03c31d4  fmuls 1, 1, 6
  03c31d8  stfs 1, 136(30)
  03c31dc  lfs 1, 16(29)
  03c31e0  lfs 2, 24(29)
  03c31e4  stfs 1, 48(1)
  03c31e8  stfs 2, 56(1)
  03c31ec  lfs 1, 20(29)
  03c31f0  lfs 2, 28(29)
  03c31f4  stfs 1, 52(1)
  03c31f8  stfs 2, 60(1)
  03c31fc  ld 3, 48(1)
  03c3200  ld 4, 56(1)
  03c3204  bl 0x107de8
  03c3208  nop
  03c320c  lfs 1, 72(31)
  03c3210  lfs 2, 120(1)
  03c3214  bl 0x5026a0
  03c3218  nop
  03c321c  lfs 2, 28(28)
  03c3220  fcmpu 0, 1, 2
  03c3224  cror 6, 1, 2
  03c3228  bt 6, 0x3c3248
  03c322c  lis 3, 60
  03c3230  lfs 1, 120(1)
  03c3234  addi 3, 3, 10784
  03c3238  lfs 2, 32(3)
  03c323c  bl 0x502578
  03c3240  nop
  03c3244  stfs 1, 72(31)
  03c3248  addic 4, 30, 112
  03c324c  ori 3, 31, 0
  03c3250  lfs 1, 120(1)
  03c3254  li 6, 5
  03c3258  li 7, 5
  03c325c  li 8, 0
  03c3260  bl 0x10ad80
  03c3264  nop
  03c3268  li 4, 5
  03c326c  ori 3, 31, 0
  03c3270  li 5, 5
  03c3274  bl 0xfdcf0
  03c3278  nop
  03c327c  lis 4, 16736
  03c3280  lis 5, 16864
  03c3284  li 6, 10
  03c3288  li 3, 1
  03c328c  stw 4, 192(30)
  03c3290  stw 5, 196(30)
  03c3294  li 4, 0
  03c3298  stb 6, 32(31)
  03c329c  ori 5, 31, 0
  03c32a0  bl 0x15d12c
  03c32a4  nop
  03c32a8  b 0x3c3638
  03c32ac  lis 4, 60
  03c32b0  li 3, 120
  03c32b4  addi 4, 4, 10784
  03c32b8  lis 5, 114
  03c32bc  stb 3, 103(30)
  03c32c0  lis 3, 132
  03c32c4  lfs 1, 16(4)
  03c32c8  lfs 2, -3048(5)
  03c32cc  lis 5, 132
  03c32d0  fmuls 1, 2, 1
  03c32d4  addic 6, 30, 136
  03c32d8  addic 7, 30, 140
  03c32dc  stfs 1, 128(30)
  03c32e0  lfs 3, 24544(3)
  03c32e4  fmuls 2, 2, 3
  03c32e8  lis 3, 132
  03c32ec  stfs 2, 132(30)
  03c32f0  lfs 3, 20(4)
  03c32f4  lfs 4, 24536(5)
  03c32f8  fmuls 4, 4, 3
  03c32fc  lfs 5, 24540(3)
  03c3300  lfs 6, 24(4)
  03c3304  fmuls 4, 4, 1
  03c3308  li 3, 0
  03c330c  fmuls 2, 2, 6
  03c3310  li 4, 9
  03c3314  fsqrts 4, 4
  03c3318  stb 3, 173(30)
  03c331c  stw 4, 148(30)
  03c3320  addic 5, 1, 120
  03c3324  fmuls 3, 4, 3
  03c3328  stfs 4, 140(30)
  03c332c  fdivs 1, 3, 1
  03c3330  fdivs 3, 5, 1
  03c3334  fmadds 1, 2, 1, 3
  03c3338  stfs 1, 136(30)
  03c333c  lfs 1, 16(29)
  03c3340  lfs 2, 24(29)
  03c3344  stfs 1, 48(1)
  03c3348  stfs 2, 56(1)
  03c334c  lfs 1, 20(29)
  03c3350  lfs 2, 28(29)
  03c3354  stfs 1, 52(1)
  03c3358  stfs 2, 60(1)
  03c335c  ld 3, 48(1)
  03c3360  ld 4, 56(1)
  03c3364  bl 0x107de8
  03c3368  nop
  03c336c  addic 4, 30, 112
  03c3370  lfs 1, 120(1)
  03c3374  ori 3, 31, 0
  03c3378  li 6, 5
  03c337c  li 7, 5
  03c3380  li 8, 0
  03c3384  bl 0x10ad80
  03c3388  nop
  03c338c  lis 4, 16576
  03c3390  lis 5, 16720
  03c3394  li 6, 10
  03c3398  li 3, 1
  03c339c  stw 4, 192(30)
  03c33a0  stw 5, 196(30)
  03c33a4  li 4, 0
  03c33a8  stb 6, 32(31)
  03c33ac  ori 5, 31, 0
  03c33b0  bl 0x15d12c
  03c33b4  nop
  03c33b8  b 0x3c3638
  03c33bc  lis 4, 60
  03c33c0  li 3, 120
  03c33c4  addi 4, 4, 10784
  03c33c8  lis 5, 114
  03c33cc  stb 3, 103(30)
  03c33d0  lis 3, 132
  03c33d4  lfs 1, 16(4)
  03c33d8  lfs 2, -3048(5)
  03c33dc  lis 5, 132
  03c33e0  fmuls 1, 2, 1
  03c33e4  addic 6, 30, 136
  03c33e8  addic 7, 30, 140
  03c33ec  stfs 1, 128(30)
  03c33f0  lfs 3, 24544(3)
  03c33f4  fmuls 2, 2, 3
  03c33f8  lis 3, 132
  03c33fc  stfs 2, 132(30)
  03c3400  lfs 3, 20(4)
  03c3404  lfs 4, 24536(5)
  03c3408  fmuls 4, 4, 3
  03c340c  lfs 5, 24540(3)
  03c3410  lfs 6, 24(4)
  03c3414  fmuls 4, 4, 1
  03c3418  li 3, 0
  03c341c  fmuls 2, 2, 6
  03c3420  li 4, 9
  03c3424  fsqrts 4, 4
  03c3428  stb 3, 173(30)
  03c342c  stw 4, 148(30)
  03c3430  addic 5, 1, 120
  03c3434  fmuls 3, 4, 3
  03c3438  stfs 4, 140(30)
  03c343c  fdivs 1, 3, 1
  03c3440  fdivs 3, 5, 1
  03c3444  fmadds 1, 2, 1, 3
  03c3448  stfs 1, 136(30)
  03c344c  lfs 1, 16(29)
  03c3450  lfs 2, 24(29)
  03c3454  stfs 1, 48(1)
  03c3458  stfs 2, 56(1)
  03c345c  lfs 1, 20(29)
  03c3460  lfs 2, 28(29)
  03c3464  stfs 1, 52(1)
  03c3468  stfs 2, 60(1)
  03c346c  ld 3, 48(1)
  03c3470  ld 4, 56(1)
  03c3474  bl 0x107de8
  03c3478  nop
  03c347c  addic 4, 30, 112
  03c3480  lfs 1, 120(1)
  03c3484  ori 3, 31, 0
  03c3488  li 6, 6
  03c348c  li 7, 5
  03c3490  li 8, 2
  03c3494  bl 0x10ad80
  03c3498  nop
  03c349c  lis 4, 16544
  03c34a0  lis 5, 16672
  03c34a4  li 6, 10
  03c34a8  li 3, 1
  03c34ac  stw 4, 192(30)
  03c34b0  stw 5, 196(30)
  03c34b4  li 4, 0
  03c34b8  stb 6, 32(31)
  03c34bc  ori 5, 31, 0
  03c34c0  bl 0x15d12c
  03c34c4  nop
  03c34c8  b 0x3c3638
  03c34cc  lis 3, 60
  03c34d0  lis 4, 114
  03c34d4  addi 3, 3, 10784
  03c34d8  lis 5, 132
  03c34dc  lfs 1, 36(3)
  03c34e0  lfs 2, -3048(4)
  03c34e4  fmuls 1, 2, 1
  03c34e8  li 28, 0
  03c34ec  addic 6, 30, 136
  03c34f0  addic 7, 30, 140
  03c34f4  stfs 1, 128(30)
  03c34f8  lfs 3, 24544(5)
  03c34fc  fmuls 2, 2, 3
  03c3500  addic 5, 1, 120
  03c3504  stfs 2, 132(30)
  03c3508  lfs 3, 40(3)
  03c350c  fmuls 3, 1, 3
  03c3510  lfs 31, 20(3)
  03c3514  lfs 4, 44(3)
  03c3518  lfs 6, 24(3)
  03c351c  fmr 5, 6
  03c3520  li 3, 9
  03c3524  fsqrts 3, 3
  03c3528  stb 28, 173(30)
  03c352c  stw 3, 148(30)
  03c3530  fmuls 2, 2, 5
  03c3534  fmuls 5, 3, 31
  03c3538  stfs 3, 140(30)
  03c353c  fdivs 1, 5, 1
  03c3540  fdivs 3, 4, 1
  03c3544  fmadds 1, 2, 1, 3
  03c3548  stfs 1, 136(30)
  03c354c  lfs 1, 16(29)
  03c3550  lfs 2, 24(29)
  03c3554  stfs 1, 48(1)
  03c3558  stfs 2, 56(1)
  03c355c  lfs 1, 20(29)
  03c3560  lfs 2, 28(29)
  03c3564  stfs 1, 52(1)
  03c3568  stfs 2, 60(1)
  03c356c  ld 3, 48(1)
  03c3570  ld 4, 56(1)
  03c3574  bl 0x107de8
  03c3578  nop
  03c357c  ori 3, 31, 0
  03c3580  lfs 1, 120(1)
  03c3584  addic 4, 30, 112
  03c3588  li 6, 7
  03c358c  li 7, 5
  03c3590  li 8, 2
  03c3594  bl 0x10ad80
  03c3598  nop
  03c359c  lis 3, 16672
  03c35a0  lis 4, 16800
  03c35a4  lis 5, 114
  03c35a8  li 6, 250
  03c35ac  stw 3, 192(30)
  03c35b0  li 7, 13
  03c35b4  stw 4, 196(30)
  03c35b8  li 3, 3
  03c35bc  li 4, 0
  03c35c0  lfs 1, -3052(5)
  03c35c4  stb 28, 597(30)
  03c35c8  ori 5, 31, 0
  03c35cc  fmuls 1, 1, 31
  03c35d0  lhz 8, 52(31)
  03c35d4  rlwimi 8, 28, 0, 19, 19
  03c35d8  sth 8, 52(31)
  03c35dc  stb 6, 103(30)
  03c35e0  stfs 1, 188(30)
  03c35e4  stb 7, 32(31)
  03c35e8  bl 0x15d12c
  03c35ec  nop
  03c35f0  lbz 3, 83(31)
  03c35f4  cmpwi 3, 7
  03c35f8  bt 2, 0x3c3638
  03c35fc  lis 3, 60
  03c3600  lis 4, 114
  03c3604  addi 3, 3, 10784
  03c3608  li 5, 0
  03c360c  lfs 1, 48(3)
  03c3610  lfs 2, -3056(4)
  03c3614  ori 3, 31, 0
  03c3618  fmuls 1, 2, 1
  03c361c  li 4, 7
  03c3620  fctiwz 1, 1
  03c3624  stfd 1, 256(1)
  03c3628  lwz 6, 260(1)
  03c362c  extsw 6, 6
  03c3630  bl 0xfddc0
  03c3634  nop
  03c3638  addic 4, 30, 96
  03c363c  ori 3, 31, 0
  03c3640  bl 0x10c808
  03c3644  nop
  03c3648  li 5, 255
  03c364c  addic 4, 30, 96
  03c3650  ori 3, 31, 0
  03c3654  stb 5, 164(31)
  03c3658  bl 0x10c9a0
  03c365c  nop
  03c3660  ld 0, 336(1)
  03c3664  mtlr 0
  03c3668  lfd 31, 312(1)
  03c366c  ld 28, 280(1)
  03c3670  ld 29, 288(1)
  03c3674  ld 30, 296(1)
  03c3678  ld 31, 304(1)
  03c367c  addi 1, 1, 320
  03c3680  blr

UpdateMoby_574:   # 0x3c3730, 0x2e3c bytes
  03c3730  stdu 1, -720(1)
  03c3734  mflr 0
  03c3738  std 0, 736(1)
  03c373c  stfd 28, 688(1)
  03c3740  stfd 29, 696(1)
  03c3744  stfd 30, 704(1)
  03c3748  stfd 31, 712(1)
  03c374c  std 31, 680(1)
  03c3750  ori 31, 3, 0
  03c3754  std 30, 672(1)
  03c3758  lis 4, 60
  03c375c  std 29, 664(1)
  03c3760  addic 30, 1, 496
  03c3764  addi 29, 4, 13956
  03c3768  std 28, 656(1)
  03c376c  ori 5, 30, 0
  03c3770  lwz 28, 120(31)
  03c3774  std 27, 648(1)
  03c3778  std 26, 640(1)
  03c377c  std 25, 632(1)
  03c3780  lfs 1, 624(28)
  03c3784  bl 0x1118d8
  03c3788  nop
  03c378c  addic 27, 31, 16
  03c3790  ori 4, 30, 0
  03c3794  ori 3, 27, 0
  03c3798  bl 0x5e8588
  03c379c  nop
  03c37a0  addic 30, 28, 336
  03c37a4  fmr 31, 1
  03c37a8  lfs 1, 0(29)
  03c37ac  ori 3, 30, 0
  03c37b0  bl 0x119ac0
  03c37b4  nop
  03c37b8  lwz 3, 16(31)
  03c37bc  lwz 4, 20(31)
  03c37c0  srawi 5, 3, 31
  03c37c4  lbz 6, 610(28)
  03c37c8  srawi 8, 4, 31
  03c37cc  srwi 9, 5, 1
  03c37d0  lwz 7, 24(31)
  03c37d4  srwi 10, 8, 1
  03c37d8  xor 3, 9, 3
  03c37dc  srawi 9, 7, 31
  03c37e0  subc 5, 3, 5
  03c37e4  srwi 3, 9, 1
  03c37e8  xor 4, 10, 4
  03c37ec  xor 3, 3, 7
  03c37f0  cmpwi 6, 1
  03c37f4  subc 4, 4, 8
  03c37f8  subc 3, 3, 9
  03c37fc  bf 2, 0x3c3848
  03c3800  lis 3, 151
  03c3804  lis 4, 161
  03c3808  lbz 5, 176(31)
  03c380c  addic 4, 4, -13692
  03c3810  lwz 3, -25488(3)
  03c3814  addc 4, 5, 4
  03c3818  slwi 3, 3, 4
  03c381c  clrldi 4, 4, 32
  03c3820  extsw 3, 3
  03c3824  lbzx 3, 4, 3
  03c3828  cmpwi 3, 255
  03c382c  bf 2, 0x3c6530
  03c3830  lhz 4, 52(31)
  03c3834  li 3, 0
  03c3838  ori 4, 4, 65
  03c383c  stw 3, 148(31)
  03c3840  sth 4, 52(31)
  03c3844  b 0x3c6530
  03c3848  lis 6, 161
  03c384c  lwz 6, 1800(6)
  03c3850  cmpwi 6, 2
  03c3854  bf 2, 0x3c386c
  03c3858  lhz 7, 52(31)
  03c385c  lbz 6, 32(31)
  03c3860  ori 7, 7, 65
  03c3864  sth 7, 52(31)
  03c3868  b 0x3c3888
  03c386c  lbz 6, 32(31)
  03c3870  cmpwi 6, 14
  03c3874  bt 2, 0x3c3888
  03c3878  li 7, -66
  03c387c  lhz 8, 52(31)
  03c3880  and 7, 8, 7
  03c3884  sth 7, 52(31)
  03c3888  lis 7, 60
  03c388c  lis 8, 16384
  03c3890  addi 7, 7, 13956
  03c3894  cmpw 5, 8
  03c3898  cmpw 6, 4, 8
  03c389c  lfs 29, 4(7)
  03c38a0  bt 0, 0x3c38d4
  03c38a4  lis 7, 17535
  03c38a8  ori 7, 7, 16384
  03c38ac  cmpw 5, 7
  03c38b0  cmpw 1, 4, 7
  03c38b4  cmpw 7, 3, 7
  03c38b8  bt 1, 0x3c38d4
  03c38bc  bt 24, 0x3c38d4
  03c38c0  bt 5, 0x3c38d4
  03c38c4  lis 4, 16384
  03c38c8  cmpw 3, 4
  03c38cc  bt 0, 0x3c38d4
  03c38d0  bf 29, 0x3c38e4
  03c38d4  ori 3, 31, 0
  03c38d8  bl 0xefb38
  03c38dc  nop
  03c38e0  b 0x3c6530
  03c38e4  lwz 3, 308(28)
  03c38e8  cmpwi 1, 6, 13
  03c38ec  cmpwi 3, -1
  03c38f0  crorc 2, 6, 2
  03c38f4  bt 2, 0x3c3908
  03c38f8  ori 3, 31, 0
  03c38fc  bl 0xefb38
  03c3900  nop
  03c3904  b 0x3c6530
  03c3908  ori 3, 31, 0
  03c390c  bl 0x3c2a58
  03c3910  addic 3, 28, 611
  03c3914  bl 0x5000b4
  03c3918  nop
  03c391c  lbz 4, 49(31)
  03c3920  lbz 3, 32(31)
  03c3924  lfs 2, 496(1)
  03c3928  lfs 1, 72(31)
  03c392c  cmpwi 4, 0
  03c3930  lfs 3, 16(31)
  03c3934  lfs 4, 500(1)
  03c3938  lfs 5, 20(31)
  03c393c  bf 2, 0x3c3958
  03c3940  lis 4, 60
  03c3944  addi 4, 4, 13956
  03c3948  lfs 6, 8(4)
  03c394c  fcmpu 0, 31, 6
  03c3950  cror 6, 1, 2
  03c3954  bt 6, 0x3c3ad0
  03c3958  cmpwi 3, 12
  03c395c  cmpwi 1, 3, 7
  03c3960  bf 2, 0x3c39ac
  03c3964  fmr 2, 1
  03c3968  lfs 1, 652(28)
  03c396c  bl 0x5025e0
  03c3970  nop
  03c3974  lis 3, 60
  03c3978  addi 29, 3, 13956
  03c397c  lfs 2, 12(29)
  03c3980  lfs 3, 652(28)
  03c3984  fmuls 2, 1, 2
  03c3988  fmr 1, 3
  03c398c  stfs 2, 440(28)
  03c3990  lfs 2, 72(31)
  03c3994  bl 0x5025e0
  03c3998  nop
  03c399c  lfs 2, 16(29)
  03c39a0  fmuls 1, 1, 2
  03c39a4  stfs 1, 568(28)
  03c39a8  b 0x3c39e0
  03c39ac  bf 4, 0x3c39e0
  03c39b0  lfs 1, 624(28)
  03c39b4  fcmpu 0, 31, 1
  03c39b8  cror 6, 1, 2
  03c39bc  bt 6, 0x3c39e0
  03c39c0  fsubs 1, 2, 3
  03c39c4  fsubs 2, 4, 5
  03c39c8  bl 0x5e8338
  03c39cc  nop
  03c39d0  lfs 2, 72(31)
  03c39d4  bl 0x5025e0
  03c39d8  nop
  03c39dc  stfs 1, 568(28)
  03c39e0  lwz 3, 440(28)
  03c39e4  lis 4, 16201
  03c39e8  srawi 5, 3, 31
  03c39ec  ori 4, 4, 4059
  03c39f0  srwi 6, 5, 1
  03c39f4  xor 3, 6, 3
  03c39f8  subc 3, 3, 5
  03c39fc  cmpw 3, 4
  03c3a00  bf 1, 0x3c3a0c
  03c3a04  stw 4, 440(28)
  03c3a08  b 0x3c3a28
  03c3a0c  lis 5, -16202
  03c3a10  ori 5, 5, 61477
  03c3a14  cmpw 3, 5
  03c3a18  bf 0, 0x3c3a28
  03c3a1c  lis 3, -16567
  03c3a20  ori 3, 3, 4059
  03c3a24  stw 3, 440(28)
  03c3a28  lwz 3, 568(28)
  03c3a2c  srawi 5, 3, 31
  03c3a30  srwi 6, 5, 1
  03c3a34  xor 3, 6, 3
  03c3a38  subc 3, 3, 5
  03c3a3c  cmpw 3, 4
  03c3a40  bf 1, 0x3c3a4c
  03c3a44  stw 4, 568(28)
  03c3a48  b 0x3c3a68
  03c3a4c  lis 4, -16202
  03c3a50  ori 4, 4, 61477
  03c3a54  cmpw 3, 4
  03c3a58  bf 0, 0x3c3a68
  03c3a5c  lis 3, -16567
  03c3a60  ori 3, 3, 4059
  03c3a64  stw 3, 568(28)
  03c3a68  lis 3, 60
  03c3a6c  lis 29, 114
  03c3a70  addi 4, 3, 13956
  03c3a74  ori 3, 31, 0
  03c3a78  li 5, 2
  03c3a7c  lfs 30, 20(4)
  03c3a80  lfs 28, 24(4)
  03c3a84  lfs 3, -3060(29)
  03c3a88  ori 4, 30, 0
  03c3a8c  fmuls 2, 3, 28
  03c3a90  fmuls 1, 3, 30
  03c3a94  bl 0x1167c8
  03c3a98  nop
  03c3a9c  lfs 2, -3060(29)
  03c3aa0  addic 4, 28, 464
  03c3aa4  fmuls 1, 2, 30
  03c3aa8  fmuls 2, 2, 28
  03c3aac  ori 3, 31, 0
  03c3ab0  li 5, 3
  03c3ab4  bl 0x1167c8
  03c3ab8  nop
  03c3abc  lfs 2, 496(1)
  03c3ac0  lbz 3, 32(31)
  03c3ac4  lfs 3, 16(31)
  03c3ac8  lfs 4, 500(1)
  03c3acc  lfs 5, 20(31)
  03c3ad0  cmpwi 1, 3, 7
  03c3ad4  cmpwi 6, 3, 15
  03c3ad8  bt 5, 0x3c3b14
  03c3adc  cmpwi 6, 3, 6
  03c3ae0  bt 6, 0x3c4d14
  03c3ae4  cmpwi 1, 3, 5
  03c3ae8  bt 26, 0x3c49e4
  03c3aec  cmpwi 6, 3, 4
  03c3af0  bt 6, 0x3c4424
  03c3af4  cmpwi 1, 3, 2
  03c3af8  bt 26, 0x3c4278
  03c3afc  cmpwi 6, 3, 1
  03c3b00  bt 6, 0x3c4154
  03c3b04  cmpwi 1, 3, 0
  03c3b08  bt 26, 0x3c3d74
  03c3b0c  bt 6, 0x3c3b54
  03c3b10  b 0x3c5f48
  03c3b14  cmpwi 1, 3, 14
  03c3b18  bt 26, 0x3c5eb8
  03c3b1c  cmpwi 6, 3, 13
  03c3b20  bt 6, 0x3c5e44
  03c3b24  cmpwi 1, 3, 12
  03c3b28  bt 26, 0x3c5b44
  03c3b2c  cmpwi 6, 3, 11
  03c3b30  bt 6, 0x3c5910
  03c3b34  cmpwi 1, 3, 10
  03c3b38  bt 26, 0x3c55b8
  03c3b3c  cmpwi 6, 3, 9
  03c3b40  bt 6, 0x3c51f0
  03c3b44  cmpwi 1, 3, 8
  03c3b48  bt 26, 0x3c507c
  03c3b4c  bt 6, 0x3c4f5c
  03c3b50  b 0x3c5f48
  03c3b54  lis 3, 151
  03c3b58  li 5, 28
  03c3b5c  addic 4, 3, -25376
  03c3b60  addic 3, 28, 208
  03c3b64  lwz 4, 8320(4)
  03c3b68  ld 4, 56(4)
  03c3b6c  stb 5, 127(31)
  03c3b70  std 4, 56(31)
  03c3b74  bl 0x100f8c
  03c3b78  nop
  03c3b7c  lis 3, 60
  03c3b80  addi 30, 3, 13956
  03c3b84  lis 3, 114
  03c3b88  lis 4, 16448
  03c3b8c  lfs 1, 28(30)
  03c3b90  lfs 2, -3048(3)
  03c3b94  lis 3, 114
  03c3b98  fmuls 1, 2, 1
  03c3b9c  lis 5, 16384
  03c3ba0  lis 6, 16457
  03c3ba4  li 26, 0
  03c3ba8  li 7, 9
  03c3bac  stfs 1, 268(28)
  03c3bb0  lfs 1, 32(30)
  03c3bb4  fmuls 1, 2, 1
  03c3bb8  stfs 1, 272(28)
  03c3bbc  lfs 1, 36(30)
  03c3bc0  lfs 2, -3052(3)
  03c3bc4  ori 3, 6, 4059
  03c3bc8  fmuls 1, 2, 1
  03c3bcc  lis 6, 114
  03c3bd0  stfs 1, 276(28)
  03c3bd4  lfs 1, 40(30)
  03c3bd8  fmuls 2, 2, 1
  03c3bdc  stfs 2, 244(28)
  03c3be0  lfs 1, 44(30)
  03c3be4  stw 4, 220(28)
  03c3be8  stw 5, 216(28)
  03c3bec  stw 26, 232(28)
  03c3bf0  stw 3, 248(28)
  03c3bf4  lfs 3, 48(30)
  03c3bf8  lfs 4, -3056(6)
  03c3bfc  stw 7, 264(28)
  03c3c00  fmuls 3, 4, 3
  03c3c04  stw 4, 32(28)
  03c3c08  fmuls 2, 3, 2
  03c3c0c  stfs 2, 252(28)
  03c3c10  bl 0x502758
  03c3c14  nop
  03c3c18  sth 3, 36(28)
  03c3c1c  lis 4, 16352
  03c3c20  li 3, 2
  03c3c24  lis 5, 16179
  03c3c28  li 29, 1
  03c3c2c  ori 5, 5, 13107
  03c3c30  stb 3, 40(28)
  03c3c34  stw 4, 48(28)
  03c3c38  stb 29, 41(28)
  03c3c3c  stw 5, 152(28)
  03c3c40  lfs 1, 52(30)
  03c3c44  bl 0x502758
  03c3c48  nop
  03c3c4c  li 4, 10
  03c3c50  li 5, 12
  03c3c54  stw 3, 144(28)
  03c3c58  stw 26, 188(28)
  03c3c5c  addic 3, 28, 64
  03c3c60  stb 4, 88(28)
  03c3c64  stb 5, 90(28)
  03c3c68  bl 0x5e7e70
  03c3c6c  nop
  03c3c70  lhz 3, 52(31)
  03c3c74  lis 5, 165
  03c3c78  lwz 4, 308(28)
  03c3c7c  ori 3, 3, 4096
  03c3c80  slwi 4, 4, 2
  03c3c84  addic 5, 5, 7136
  03c3c88  extsw 4, 4
  03c3c8c  sth 3, 52(31)
  03c3c90  sth 26, 592(28)
  03c3c94  ori 3, 27, 0
  03c3c98  stw 26, 288(28)
  03c3c9c  lwzx 5, 5, 4
  03c3ca0  addic 4, 5, 16
  03c3ca4  stw 5, 304(28)
  03c3ca8  bl 0x5e7e98
  03c3cac  nop
  03c3cb0  lis 3, 269
  03c3cb4  stb 29, 32(31)
  03c3cb8  lhz 4, 50(31)
  03c3cbc  lwz 29, 304(28)
  03c3cc0  sth 4, 648(28)
  03c3cc4  cmpwi 29, 0
  03c3cc8  lwz 4, -24744(3)
  03c3ccc  clrlwi 5, 4, 29
  03c3cd0  addic 4, 4, 1
  03c3cd4  sth 5, 650(28)
  03c3cd8  stw 4, -24744(3)
  03c3cdc  stb 26, 611(28)
  03c3ce0  bt 2, 0x3c3d2c
  03c3ce4  lwz 3, 0(29)
  03c3ce8  addic 3, 3, -2
  03c3cec  cmpwi 3, 0
  03c3cf0  bf 1, 0x3c3d2c
  03c3cf4  ori 26, 29, 0
  03c3cf8  li 30, 0
  03c3cfc  addic 25, 26, 16
  03c3d00  addic 4, 26, 32
  03c3d04  ori 3, 25, 0
  03c3d08  bl 0x5e8548
  03c3d0c  nop
  03c3d10  stfs 1, 28(26)
  03c3d14  addic 30, 30, 1
  03c3d18  lwz 3, 0(29)
  03c3d1c  ori 26, 25, 0
  03c3d20  addic 3, 3, -2
  03c3d24  cmpw 30, 3
  03c3d28  bt 0, 0x3c3cfc
  03c3d2c  lwz 3, 644(28)
  03c3d30  cmpwi 3, -1
  03c3d34  bt 2, 0x3c5f48
  03c3d38  lwz 3, 656(28)
  03c3d3c  cmpwi 3, -1
  03c3d40  bf 2, 0x3c5f48
  03c3d44  li 3, 10
  03c3d48  bl 0x5e7e18
  03c3d4c  nop
  03c3d50  ori 6, 3, 0
  03c3d54  ori 3, 31, 0
  03c3d58  li 4, 0
  03c3d5c  li 5, 0
  03c3d60  bl 0xfddc0
  03c3d64  nop
  03c3d68  li 3, 2
  03c3d6c  stb 3, 32(31)
  03c3d70  b 0x3c5f48
  03c3d74  lbz 3, 112(31)
  03c3d78  rlwinm 3, 3, 0, 30, 30
  03c3d7c  cmpwi 3, 0
  03c3d80  bt 2, 0x3c3dc4
  03c3d84  lbz 3, 82(31)
  03c3d88  cmpwi 3, 0
  03c3d8c  bt 2, 0x3c3dc4
  03c3d90  li 3, 10
  03c3d94  bl 0x5e7e18
  03c3d98  nop
  03c3d9c  ori 6, 3, 0
  03c3da0  ori 3, 31, 0
  03c3da4  li 4, 0
  03c3da8  li 5, 0
  03c3dac  bl 0xfddc0
  03c3db0  nop
  03c3db4  lfs 2, 496(1)
  03c3db8  lfs 3, 16(31)
  03c3dbc  lfs 4, 500(1)
  03c3dc0  lfs 5, 20(31)
  03c3dc4  lwz 3, 656(28)
  03c3dc8  cmpwi 1, 3, -1
  03c3dcc  bt 6, 0x3c3ef8
  03c3dd0  lis 4, 165
  03c3dd4  slwi 3, 3, 2
  03c3dd8  addic 4, 4, 7136
  03c3ddc  extsw 3, 3
  03c3de0  lwzx 3, 4, 3
  03c3de4  lfs 1, 16(3)
  03c3de8  stfs 1, 16(31)
  03c3dec  lfs 2, 20(3)
  03c3df0  stfs 2, 20(31)
  03c3df4  lfs 3, 24(3)
  03c3df8  stfs 3, 24(31)
  03c3dfc  lfs 3, 28(3)
  03c3e00  stfs 3, 28(31)
  03c3e04  lfs 3, 32(3)
  03c3e08  lfs 4, 36(3)
  03c3e0c  fsubs 1, 3, 1
  03c3e10  fsubs 2, 4, 2
  03c3e14  bl 0x5e8338
  03c3e18  nop
  03c3e1c  lbz 3, 33(31)
  03c3e20  stfs 1, 72(31)
  03c3e24  bl 0x3c220c
  03c3e28  cmpwi 3, 0
  03c3e2c  bf 2, 0x3c3eb4
  03c3e30  addic 3, 1, 496
  03c3e34  lwz 4, 668(28)
  03c3e38  extsw 4, 4
  03c3e3c  bl 0x110b70
  03c3e40  nop
  03c3e44  cmpwi 3, 0
  03c3e48  bf 2, 0x3c3eb4
  03c3e4c  lis 3, 151
  03c3e50  lbz 5, 176(31)
  03c3e54  lis 4, 161
  03c3e58  addic 4, 4, -13692
  03c3e5c  lwz 3, -25488(3)
  03c3e60  addc 4, 5, 4
  03c3e64  slwi 3, 3, 4
  03c3e68  clrldi 4, 4, 32
  03c3e6c  extsw 3, 3
  03c3e70  lbzx 3, 4, 3
  03c3e74  cmpwi 3, 255
  03c3e78  bt 2, 0x3c3eb4
  03c3e7c  lfs 1, 660(28)
  03c3e80  fcmpu 0, 31, 1
  03c3e84  cror 6, 1, 2
  03c3e88  bt 6, 0x3c5f48
  03c3e8c  lfs 1, 504(1)
  03c3e90  lis 3, 60
  03c3e94  lfs 2, 24(31)
  03c3e98  addi 3, 3, 13956
  03c3e9c  fsubs 1, 1, 2
  03c3ea0  lfs 2, 56(3)
  03c3ea4  fabs 1, 1
  03c3ea8  fcmpu 0, 1, 2
  03c3eac  cror 6, 1, 2
  03c3eb0  bt 6, 0x3c5f48
  03c3eb4  li 3, 0
  03c3eb8  li 4, 9
  03c3ebc  stw 3, 664(28)
  03c3ec0  lbz 3, 83(31)
  03c3ec4  stb 4, 32(31)
  03c3ec8  cmpwi 3, 1
  03c3ecc  bt 2, 0x3c5f48
  03c3ed0  li 3, 10
  03c3ed4  bl 0x5e7e18
  03c3ed8  nop
  03c3edc  ori 6, 3, 0
  03c3ee0  ori 3, 31, 0
  03c3ee4  li 4, 1
  03c3ee8  li 5, 0
  03c3eec  bl 0xfddc0
  03c3ef0  nop
  03c3ef4  b 0x3c5f48
  03c3ef8  lwz 3, 644(28)
  03c3efc  cmpwi 3, -1
  03c3f00  bt 2, 0x3c3f38
  03c3f04  bf 6, 0x3c3f38
  03c3f08  li 3, 10
  03c3f0c  bl 0x5e7e18
  03c3f10  nop
  03c3f14  ori 6, 3, 0
  03c3f18  ori 3, 31, 0
  03c3f1c  li 4, 0
  03c3f20  li 5, 0
  03c3f24  bl 0xfddc0
  03c3f28  nop
  03c3f2c  li 3, 2
  03c3f30  stb 3, 32(31)
  03c3f34  b 0x3c5f48
  03c3f38  lfs 1, 624(28)
  03c3f3c  fcmpu 0, 31, 1
  03c3f40  bt 0, 0x3c3f54
  03c3f44  lfs 1, 636(28)
  03c3f48  fcmpu 0, 31, 1
  03c3f4c  cror 6, 1, 2
  03c3f50  bt 6, 0x3c3f7c
  03c3f54  fsubs 1, 2, 3
  03c3f58  fsubs 2, 4, 5
  03c3f5c  bl 0x5e8338
  03c3f60  nop
  03c3f64  ori 3, 31, 0
  03c3f68  addic 4, 1, 496
  03c3f6c  bl 0x3c22e8
  03c3f70  cmpwi 3, 0
  03c3f74  bf 2, 0x3c5f48
  03c3f78  lfs 1, 636(28)
  03c3f7c  fcmpu 0, 31, 1
  03c3f80  cror 6, 1, 2
  03c3f84  bt 6, 0x3c3ff8
  03c3f88  lfs 1, 504(1)
  03c3f8c  lis 3, 60
  03c3f90  lfs 2, 24(31)
  03c3f94  addi 3, 3, 13956
  03c3f98  fsubs 1, 1, 2
  03c3f9c  lfs 2, 56(3)
  03c3fa0  fabs 1, 1
  03c3fa4  fcmpu 0, 1, 2
  03c3fa8  cror 6, 1, 2
  03c3fac  bt 6, 0x3c3ff8
  03c3fb0  li 3, 1
  03c3fb4  li 5, 0
  03c3fb8  li 4, 8
  03c3fbc  sth 3, 598(28)
  03c3fc0  stw 5, 636(28)
  03c3fc4  lbz 3, 83(31)
  03c3fc8  stb 4, 32(31)
  03c3fcc  cmpwi 3, 1
  03c3fd0  bt 2, 0x3c3ff8
  03c3fd4  li 3, 10
  03c3fd8  bl 0x5e7e18
  03c3fdc  nop
  03c3fe0  ori 6, 3, 0
  03c3fe4  ori 3, 31, 0
  03c3fe8  li 4, 1
  03c3fec  li 5, 0
  03c3ff0  bl 0xfddc0
  03c3ff4  nop
  03c3ff8  lis 3, 60
  03c3ffc  addi 3, 3, 13956
  03c4000  lfs 1, 60(3)
  03c4004  fcmpu 0, 31, 1
  03c4008  cror 6, 1, 2
  03c400c  bt 6, 0x3c4074
  03c4010  lfs 1, 504(1)
  03c4014  lis 3, 60
  03c4018  lfs 2, 24(31)
  03c401c  addi 3, 3, 13956
  03c4020  fsubs 1, 1, 2
  03c4024  lfs 2, 44(3)
  03c4028  fabs 1, 1
  03c402c  fcmpu 0, 1, 2
  03c4030  cror 6, 1, 2
  03c4034  bt 6, 0x3c4074
  03c4038  li 3, 6
  03c403c  lbz 4, 83(31)
  03c4040  cmpwi 4, 2
  03c4044  stb 3, 32(31)
  03c4048  bt 2, 0x3c5f48
  03c404c  li 3, 10
  03c4050  bl 0x5e7e18
  03c4054  nop
  03c4058  ori 6, 3, 0
  03c405c  ori 3, 31, 0
  03c4060  li 4, 2
  03c4064  li 5, 0
  03c4068  bl 0xfddc0
  03c406c  nop
  03c4070  b 0x3c5f48
  03c4074  lfs 1, 624(28)
  03c4078  fcmpu 0, 31, 1
  03c407c  cror 6, 1, 2
  03c4080  bt 6, 0x3c5f48
  03c4084  lfs 1, 504(1)
  03c4088  lfs 2, 24(31)
  03c408c  lis 3, 60
  03c4090  fsubs 1, 1, 2
  03c4094  addi 3, 3, 13956
  03c4098  lfs 2, 64(3)
  03c409c  fabs 1, 1
  03c40a0  fcmpu 0, 1, 2
  03c40a4  cror 6, 1, 2
  03c40a8  bt 6, 0x3c5f48
  03c40ac  addic 3, 28, 592
  03c40b0  bl 0x4fffb4
  03c40b4  nop
  03c40b8  cmpwi 3, 0
  03c40bc  bt 2, 0x3c5f48
  03c40c0  lfs 1, 496(1)
  03c40c4  lfs 31, 72(31)
  03c40c8  lfs 2, 16(31)
  03c40cc  lfs 3, 500(1)
  03c40d0  fsubs 1, 1, 2
  03c40d4  lfs 4, 20(31)
  03c40d8  fsubs 2, 3, 4
  03c40dc  bl 0x5e8338
  03c40e0  nop
  03c40e4  fmr 2, 1
  03c40e8  fmr 1, 31
  03c40ec  bl 0x5026a0
  03c40f0  nop
  03c40f4  lis 3, 60
  03c40f8  addi 3, 3, 13956
  03c40fc  lfs 2, 68(3)
  03c4100  fcmpu 0, 1, 2
  03c4104  cror 6, 1, 2
  03c4108  bt 6, 0x3c5f48
  03c410c  lbz 3, 49(31)
  03c4110  cmpwi 3, 0
  03c4114  bt 2, 0x3c5f48
  03c4118  li 3, 4
  03c411c  lbz 4, 83(31)
  03c4120  cmpwi 4, 3
  03c4124  stb 3, 32(31)
  03c4128  bt 2, 0x3c5f48
  03c412c  li 3, 10
  03c4130  bl 0x5e7e18
  03c4134  nop
  03c4138  ori 6, 3, 0
  03c413c  ori 3, 31, 0
  03c4140  li 4, 3
  03c4144  li 5, 0
  03c4148  bl 0xfddc0
  03c414c  nop
  03c4150  b 0x3c5f48
  03c4154  lfs 1, 624(28)
  03c4158  fcmpu 0, 31, 1
  03c415c  cror 6, 1, 2
  03c4160  bt 6, 0x3c41c0
  03c4164  lfs 1, 504(1)
  03c4168  lfs 6, 24(31)
  03c416c  lis 3, 60
  03c4170  fsubs 1, 1, 6
  03c4174  addi 3, 3, 13956
  03c4178  lfs 6, 56(3)
  03c417c  fabs 1, 1
  03c4180  fcmpu 0, 1, 6
  03c4184  cror 6, 1, 2
  03c4188  bt 6, 0x3c41c0
  03c418c  lbz 3, 83(31)
  03c4190  cmpwi 3, 10
  03c4194  bt 2, 0x3c41c0
  03c4198  li 3, 10
  03c419c  bl 0x5e7e18
  03c41a0  nop
  03c41a4  ori 6, 3, 0
  03c41a8  ori 3, 31, 0
  03c41ac  li 4, 10
  03c41b0  li 5, 0
  03c41b4  bl 0xfddc0
  03c41b8  nop
  03c41bc  b 0x3c5f48
  03c41c0  lis 3, 164
  03c41c4  lwz 4, 644(28)
  03c41c8  slwi 4, 4, 8
  03c41cc  lwz 3, -28512(3)
  03c41d0  addc 3, 3, 4
  03c41d4  cmpwi 3, 0
  03c41d8  bt 2, 0x3c4210
  03c41dc  clrldi 3, 3, 32
  03c41e0  lbz 3, 32(3)
  03c41e4  cmpwi 1, 3, 253
  03c41e8  cmpwi 3, 254
  03c41ec  cror 2, 2, 6
  03c41f0  bt 2, 0x3c4210
  03c41f4  lbz 3, 82(31)
  03c41f8  cmpwi 3, 10
  03c41fc  bf 2, 0x3c4258
  03c4200  lbz 3, 112(31)
  03c4204  rlwinm 3, 3, 0, 30, 30
  03c4208  cmpwi 3, 0
  03c420c  bt 2, 0x3c4258
  03c4210  li 4, 1
  03c4214  li 3, 10
  03c4218  stb 4, 32(31)
  03c421c  bl 0x5e7e18
  03c4220  nop
  03c4224  ori 6, 3, 0
  03c4228  ori 3, 31, 0
  03c422c  li 4, 0
  03c4230  li 5, 0
  03c4234  bl 0xfddc0
  03c4238  nop
  03c423c  li 3, 60
  03c4240  bl 0x5e7e18
  03c4244  nop
  03c4248  sth 3, 592(28)
  03c424c  li 3, -1
  03c4250  stw 3, 644(28)
  03c4254  b 0x3c5f48
  03c4258  fsubs 1, 2, 3
  03c425c  fsubs 2, 4, 5
  03c4260  bl 0x5e8338
  03c4264  nop
  03c4268  addic 4, 1, 496
  03c426c  ori 3, 31, 0
  03c4270  bl 0x3c22e8
  03c4274  b 0x3c5f48
  03c4278  lbz 3, 112(31)
  03c427c  rlwinm 3, 3, 0, 30, 30
  03c4280  cmpwi 3, 0
  03c4284  bt 2, 0x3c42c0
  03c4288  li 3, 5
  03c428c  li 4, 0
  03c4290  stb 3, 32(31)
  03c4294  stb 4, 596(28)
  03c4298  lbz 3, 83(31)
  03c429c  cmpwi 3, 4
  03c42a0  bt 2, 0x3c5f48
  03c42a4  ori 3, 31, 0
  03c42a8  li 4, 4
  03c42ac  li 5, 0
  03c42b0  li 6, 0
  03c42b4  bl 0xfddc0
  03c42b8  nop
  03c42bc  b 0x3c5f48
  03c42c0  lis 3, 60
  03c42c4  addi 3, 3, 13956
  03c42c8  lfs 1, 60(3)
  03c42cc  fcmpu 0, 31, 1
  03c42d0  cror 6, 1, 2
  03c42d4  bt 6, 0x3c433c
  03c42d8  lfs 1, 504(1)
  03c42dc  lfs 2, 24(31)
  03c42e0  lis 3, 60
  03c42e4  fsubs 1, 1, 2
  03c42e8  addi 3, 3, 13956
  03c42ec  lfs 2, 44(3)
  03c42f0  fabs 1, 1
  03c42f4  fcmpu 0, 1, 2
  03c42f8  cror 6, 1, 2
  03c42fc  bt 6, 0x3c433c
  03c4300  li 3, 6
  03c4304  lbz 4, 83(31)
  03c4308  cmpwi 4, 2
  03c430c  stb 3, 32(31)
  03c4310  bt 2, 0x3c5f48
  03c4314  li 3, 10
  03c4318  bl 0x5e7e18
  03c431c  nop
  03c4320  ori 6, 3, 0
  03c4324  ori 3, 31, 0
  03c4328  li 4, 2
  03c432c  li 5, 0
  03c4330  bl 0xfddc0
  03c4334  nop
  03c4338  b 0x3c5f48
  03c433c  lfs 1, 632(28)
  03c4340  fcmpu 0, 31, 1
  03c4344  cror 6, 1, 2
  03c4348  bt 6, 0x3c5f48
  03c434c  lfs 1, 504(1)
  03c4350  lis 3, 60
  03c4354  lfs 2, 24(31)
  03c4358  addi 3, 3, 13956
  03c435c  fsubs 1, 1, 2
  03c4360  lfs 2, 64(3)
  03c4364  fabs 1, 1
  03c4368  fcmpu 0, 1, 2
  03c436c  cror 6, 1, 2
  03c4370  bt 6, 0x3c5f48
  03c4374  lwz 3, 628(28)
  03c4378  cmpwi 3, 0
  03c437c  bt 2, 0x3c43e0
  03c4380  lwz 3, 120(31)
  03c4384  lwz 5, 304(3)
  03c4388  lwz 4, 288(3)
  03c438c  lwz 5, 0(5)
  03c4390  addic 5, 5, -1
  03c4394  cmpw 4, 5
  03c4398  bf 0, 0x3c5f48
  03c439c  addic 4, 4, 1
  03c43a0  li 5, 7
  03c43a4  stw 4, 288(3)
  03c43a8  lbz 3, 83(31)
  03c43ac  stb 5, 32(31)
  03c43b0  cmpwi 3, 1
  03c43b4  bt 2, 0x3c5f48
  03c43b8  li 3, 10
  03c43bc  bl 0x5e7e18
  03c43c0  nop
  03c43c4  ori 6, 3, 0
  03c43c8  ori 3, 31, 0
  03c43cc  li 4, 1
  03c43d0  li 5, 0
  03c43d4  bl 0xfddc0
  03c43d8  nop
  03c43dc  b 0x3c5f48
  03c43e0  ori 3, 31, 0
  03c43e4  bl 0x3c24e8
  03c43e8  li 4, 7
  03c43ec  lbz 3, 83(31)
  03c43f0  cmpwi 3, 1
  03c43f4  stb 4, 32(31)
  03c43f8  bt 2, 0x3c5f48
  03c43fc  li 3, 10
  03c4400  bl 0x5e7e18
  03c4404  nop
  03c4408  ori 6, 3, 0
  03c440c  ori 3, 31, 0
  03c4410  li 4, 1
  03c4414  li 5, 0
  03c4418  bl 0xfddc0
  03c441c  nop
  03c4420  b 0x3c5f48
  03c4424  lis 3, 60
  03c4428  addi 4, 3, 13956
  03c442c  ori 3, 31, 0
  03c4430  lfs 1, 72(4)
  03c4434  bl 0x113e88
  03c4438  nop
  03c443c  cmpwi 3, 0
  03c4440  bt 2, 0x3c4664
  03c4444  lbz 6, 596(28)
  03c4448  addic 30, 1, 192
  03c444c  addic 6, 6, 1
  03c4450  ori 3, 31, 0
  03c4454  li 4, 0
  03c4458  ori 5, 30, 0
  03c445c  stb 6, 596(28)
  03c4460  bl 0xf1114
  03c4464  nop
  03c4468  addic 29, 1, 208
  03c446c  addic 4, 1, 528
  03c4470  ori 3, 29, 0
  03c4474  ori 5, 30, 0
  03c4478  bl 0x5e81f0
  03c447c  nop
  03c4480  lis 3, 60
  03c4484  lis 5, 114
  03c4488  addi 30, 3, 13956
  03c448c  ori 3, 29, 0
  03c4490  ori 4, 29, 0
  03c4494  lfs 28, 40(30)
  03c4498  lfs 1, -3052(5)
  03c449c  fmuls 1, 1, 28
  03c44a0  bl 0x5e7f98
  03c44a4  nop
  03c44a8  lfs 4, 76(30)
  03c44ac  lfs 3, 216(1)
  03c44b0  lfs 1, 208(1)
  03c44b4  fmuls 3, 3, 4
  03c44b8  lfs 2, 212(1)
  03c44bc  stfs 3, 216(1)
  03c44c0  bl 0x5e8338
  03c44c4  nop
  03c44c8  lfs 2, 72(31)
  03c44cc  fmr 30, 1
  03c44d0  bl 0x5025e0
  03c44d4  nop
  03c44d8  lfs 2, 80(30)
  03c44dc  fcmpu 0, 1, 2
  03c44e0  cror 6, 0, 2
  03c44e4  bt 6, 0x3c453c
  03c44e8  lfs 1, 72(31)
  03c44ec  bl 0x502578
  03c44f0  nop
  03c44f4  fmr 30, 1
  03c44f8  bl 0x5e8078
  03c44fc  nop
  03c4500  lis 30, 114
  03c4504  lfs 2, -3052(30)
  03c4508  fmuls 2, 2, 28
  03c450c  fmuls 2, 2, 1
  03c4510  fmr 1, 30
  03c4514  stfs 2, 208(1)
  03c4518  bl 0x5e8128
  03c451c  nop
  03c4520  lfs 2, -3052(30)
  03c4524  li 3, 0
  03c4528  fmuls 2, 2, 28
  03c452c  stw 3, 216(1)
  03c4530  fmuls 1, 2, 1
  03c4534  stfs 1, 212(1)
  03c4538  b 0x3c45ac
  03c453c  fmr 2, 1
  03c4540  lis 3, 60
  03c4544  addi 3, 3, 13956
  03c4548  lfs 1, 84(3)
  03c454c  fcmpu 0, 2, 1
  03c4550  cror 6, 1, 2
  03c4554  bt 6, 0x3c45ac
  03c4558  fmr 2, 1
  03c455c  lfs 1, 72(31)
  03c4560  bl 0x502578
  03c4564  nop
  03c4568  fmr 30, 1
  03c456c  bl 0x5e8078
  03c4570  nop
  03c4574  lis 30, 114
  03c4578  lfs 2, -3052(30)
  03c457c  fmuls 2, 2, 28
  03c4580  fmuls 2, 2, 1
  03c4584  fmr 1, 30
  03c4588  stfs 2, 208(1)
  03c458c  bl 0x5e8128
  03c4590  nop
  03c4594  lfs 2, -3052(30)
  03c4598  li 3, 0
  03c459c  fmuls 2, 2, 28
  03c45a0  stw 3, 216(1)
  03c45a4  fmuls 1, 2, 1
  03c45a8  stfs 1, 212(1)
  03c45ac  lis 3, 60
  03c45b0  lis 4, 114
  03c45b4  addi 30, 3, 13956
  03c45b8  addic 29, 1, 224
  03c45bc  addic 26, 1, 208
  03c45c0  ori 3, 29, 0
  03c45c4  lfs 1, 64(30)
  03c45c8  lfs 2, -3056(4)
  03c45cc  ori 4, 26, 0
  03c45d0  fmuls 1, 2, 1
  03c45d4  bl 0x5e822c
  03c45d8  nop
  03c45dc  addic 25, 1, 192
  03c45e0  addic 3, 1, 240
  03c45e4  ori 4, 29, 0
  03c45e8  ori 5, 25, 0
  03c45ec  bl 0x502b08
  03c45f0  nop
  03c45f4  lfs 1, 224(1)
  03c45f8  lfs 2, 232(1)
  03c45fc  ori 3, 31, 0
  03c4600  stfs 1, 64(1)
  03c4604  li 7, 0
  03c4608  stfs 2, 72(1)
  03c460c  lfs 1, 228(1)
  03c4610  lfs 2, 236(1)
  03c4614  stfs 1, 68(1)
  03c4618  stfs 2, 76(1)
  03c461c  ld 5, 64(1)
  03c4620  ld 6, 72(1)
  03c4624  bl 0x1162a0
  03c4628  nop
  03c462c  li 3, 130
  03c4630  bl 0x5e7e18
  03c4634  nop
  03c4638  lis 5, 114
  03c463c  lfs 3, 16(30)
  03c4640  ori 6, 3, 0
  03c4644  fmr 1, 30
  03c4648  ori 3, 26, 0
  03c464c  ori 4, 25, 0
  03c4650  lfs 2, -3052(5)
  03c4654  ori 5, 31, 0
  03c4658  fmuls 2, 2, 28
  03c465c  bl 0x4804e0
  03c4660  nop
  03c4664  lbz 3, 112(31)
  03c4668  rlwinm 3, 3, 0, 30, 30
  03c466c  cmpwi 3, 0
  03c4670  bt 2, 0x3c484c
  03c4674  lbz 3, 596(28)
  03c4678  cmpwi 3, 1
  03c467c  bt 0, 0x3c5f48
  03c4680  lfs 1, 636(28)
  03c4684  fcmpu 0, 31, 1
  03c4688  cror 6, 1, 2
  03c468c  bt 6, 0x3c46f8
  03c4690  lfs 1, 504(1)
  03c4694  lis 3, 60
  03c4698  lfs 2, 24(31)
  03c469c  addi 3, 3, 13956
  03c46a0  fsubs 1, 1, 2
  03c46a4  lfs 2, 56(3)
  03c46a8  fabs 1, 1
  03c46ac  fcmpu 0, 1, 2
  03c46b0  cror 6, 1, 2
  03c46b4  bt 6, 0x3c46f8
  03c46b8  li 3, 0
  03c46bc  li 4, 8
  03c46c0  stw 3, 636(28)
  03c46c4  lbz 3, 83(31)
  03c46c8  stb 4, 32(31)
  03c46cc  cmpwi 3, 1
  03c46d0  bt 2, 0x3c46f8
  03c46d4  li 3, 10
  03c46d8  bl 0x5e7e18
  03c46dc  nop
  03c46e0  ori 6, 3, 0
  03c46e4  ori 3, 31, 0
  03c46e8  li 4, 1
  03c46ec  li 5, 0
  03c46f0  bl 0xfddc0
  03c46f4  nop
  03c46f8  lfs 1, 496(1)
  03c46fc  lfs 2, 16(31)
  03c4700  lfs 3, 500(1)
  03c4704  lfs 4, 20(31)
  03c4708  fsubs 1, 1, 2
  03c470c  fsubs 2, 3, 4
  03c4710  bl 0x5e8338
  03c4714  nop
  03c4718  ori 3, 31, 0
  03c471c  addic 4, 1, 496
  03c4720  bl 0x3c22e8
  03c4724  cmpwi 3, 0
  03c4728  bf 2, 0x3c5f48
  03c472c  lfs 1, 624(28)
  03c4730  fcmpu 0, 31, 1
  03c4734  cror 6, 1, 2
  03c4738  bt 6, 0x3c47d0
  03c473c  lfs 1, 504(1)
  03c4740  lis 3, 60
  03c4744  lfs 2, 24(31)
  03c4748  addi 3, 3, 13956
  03c474c  fsubs 1, 1, 2
  03c4750  lfs 2, 64(3)
  03c4754  fabs 1, 1
  03c4758  fcmpu 0, 1, 2
  03c475c  cror 6, 1, 2
  03c4760  bt 6, 0x3c47d0
  03c4764  addic 3, 28, 592
  03c4768  bl 0x4fffb4
  03c476c  nop
  03c4770  cmpwi 3, 0
  03c4774  bt 2, 0x3c47d0
  03c4778  lfs 1, 496(1)
  03c477c  lfs 30, 72(31)
  03c4780  lfs 2, 16(31)
  03c4784  lfs 3, 500(1)
  03c4788  fsubs 1, 1, 2
  03c478c  lfs 4, 20(31)
  03c4790  fsubs 2, 3, 4
  03c4794  bl 0x5e8338
  03c4798  nop
  03c479c  fmr 2, 1
  03c47a0  fmr 1, 30
  03c47a4  bl 0x5026a0
  03c47a8  nop
  03c47ac  lis 3, 60
  03c47b0  addi 3, 3, 13956
  03c47b4  lfs 2, 88(3)
  03c47b8  fcmpu 0, 1, 2
  03c47bc  cror 6, 1, 2
  03c47c0  bt 6, 0x3c47d0
  03c47c4  lbz 3, 49(31)
  03c47c8  cmpwi 3, 0
  03c47cc  bf 2, 0x3c5f48
  03c47d0  lis 3, 60
  03c47d4  addi 3, 3, 13956
  03c47d8  lfs 1, 60(3)
  03c47dc  fcmpu 0, 31, 1
  03c47e0  cror 6, 1, 2
  03c47e4  bt 6, 0x3c5f48
  03c47e8  lfs 1, 504(1)
  03c47ec  lfs 2, 24(31)
  03c47f0  lis 3, 60
  03c47f4  fsubs 1, 1, 2
  03c47f8  addi 3, 3, 13956
  03c47fc  lfs 2, 44(3)
  03c4800  fabs 1, 1
  03c4804  fcmpu 0, 1, 2
  03c4808  cror 6, 1, 2
  03c480c  bt 6, 0x3c5f48
  03c4810  li 3, 6
  03c4814  lbz 4, 83(31)
  03c4818  cmpwi 4, 2
  03c481c  stb 3, 32(31)
  03c4820  bt 2, 0x3c5f48
  03c4824  li 3, 10
  03c4828  bl 0x5e7e18
  03c482c  nop
  03c4830  ori 6, 3, 0
  03c4834  ori 3, 31, 0
  03c4838  li 4, 2
  03c483c  li 5, 0
  03c4840  bl 0xfddc0
  03c4844  nop
  03c4848  b 0x3c5f48
  03c484c  lis 3, 60
  03c4850  addi 3, 3, 13956
  03c4854  lfs 1, 60(3)
  03c4858  fcmpu 0, 31, 1
  03c485c  cror 6, 1, 2
  03c4860  bt 6, 0x3c48fc
  03c4864  lfs 1, 504(1)
  03c4868  lis 3, 60
  03c486c  lfs 2, 24(31)
  03c4870  addi 3, 3, 13956
  03c4874  fsubs 1, 1, 2
  03c4878  lfs 2, 44(3)
  03c487c  fabs 1, 1
  03c4880  fcmpu 0, 1, 2
  03c4884  cror 6, 1, 2
  03c4888  bt 6, 0x3c48fc
  03c488c  lfs 1, 496(1)
  03c4890  lfs 2, 16(31)
  03c4894  lfs 3, 500(1)
  03c4898  lfs 4, 20(31)
  03c489c  fsubs 1, 1, 2
  03c48a0  fsubs 2, 3, 4
  03c48a4  bl 0x5e8338
  03c48a8  nop
  03c48ac  ori 3, 31, 0
  03c48b0  addic 4, 1, 496
  03c48b4  bl 0x3c22e8
  03c48b8  cmpwi 3, 0
  03c48bc  bf 2, 0x3c5f48
  03c48c0  li 3, 6
  03c48c4  lbz 4, 83(31)
  03c48c8  cmpwi 4, 2
  03c48cc  stb 3, 32(31)
  03c48d0  bt 2, 0x3c5f48
  03c48d4  li 3, 10
  03c48d8  bl 0x5e7e18
  03c48dc  nop
  03c48e0  ori 6, 3, 0
  03c48e4  ori 3, 31, 0
  03c48e8  li 4, 2
  03c48ec  li 5, 0
  03c48f0  bl 0xfddc0
  03c48f4  nop
  03c48f8  b 0x3c5f48
  03c48fc  lfs 1, 632(28)
  03c4900  fcmpu 0, 31, 1
  03c4904  cror 6, 1, 2
  03c4908  bt 6, 0x3c5f48
  03c490c  lfs 1, 504(1)
  03c4910  lfs 2, 24(31)
  03c4914  lis 3, 60
  03c4918  fsubs 1, 1, 2
  03c491c  addi 3, 3, 13956
  03c4920  lfs 2, 64(3)
  03c4924  fabs 1, 1
  03c4928  fcmpu 0, 1, 2
  03c492c  cror 6, 1, 2
  03c4930  bt 6, 0x3c5f48
  03c4934  lwz 3, 628(28)
  03c4938  cmpwi 3, 0
  03c493c  bt 2, 0x3c49a0
  03c4940  lwz 3, 120(31)
  03c4944  lwz 5, 304(3)
  03c4948  lwz 4, 288(3)
  03c494c  lwz 5, 0(5)
  03c4950  addic 5, 5, -1
  03c4954  cmpw 4, 5
  03c4958  bf 0, 0x3c5f48
  03c495c  addic 4, 4, 1
  03c4960  li 5, 7
  03c4964  stw 4, 288(3)
  03c4968  lbz 3, 83(31)
  03c496c  stb 5, 32(31)
  03c4970  cmpwi 3, 1
  03c4974  bt 2, 0x3c5f48
  03c4978  li 3, 10
  03c497c  bl 0x5e7e18
  03c4980  nop
  03c4984  ori 6, 3, 0
  03c4988  ori 3, 31, 0
  03c498c  li 4, 1
  03c4990  li 5, 0
  03c4994  bl 0xfddc0
  03c4998  nop
  03c499c  b 0x3c5f48
  03c49a0  ori 3, 31, 0
  03c49a4  bl 0x3c24e8
  03c49a8  li 3, 7
  03c49ac  lbz 4, 83(31)
  03c49b0  cmpwi 4, 1
  03c49b4  stb 3, 32(31)
  03c49b8  bt 2, 0x3c5f48
  03c49bc  li 3, 10
  03c49c0  bl 0x5e7e18
  03c49c4  nop
  03c49c8  ori 6, 3, 0
  03c49cc  ori 3, 31, 0
  03c49d0  li 4, 1
  03c49d4  li 5, 0
  03c49d8  bl 0xfddc0
  03c49dc  nop
  03c49e0  b 0x3c5f48
  03c49e4  ori 3, 31, 0
  03c49e8  bl 0xefe40
  03c49ec  nop
  03c49f0  lfs 2, 496(1)
  03c49f4  fmr 31, 1
  03c49f8  lfs 1, 16(31)
  03c49fc  lfs 3, 500(1)
  03c4a00  lfs 4, 20(31)
  03c4a04  fsubs 1, 2, 1
  03c4a08  fsubs 2, 3, 4
  03c4a0c  bl 0x5e8338
  03c4a10  nop
  03c4a14  lis 3, 60
  03c4a18  addic 5, 28, 600
  03c4a1c  addi 30, 3, 13956
  03c4a20  ori 3, 31, 0
  03c4a24  lfs 3, 24(30)
  03c4a28  lfs 2, 20(30)
  03c4a2c  fmr 4, 3
  03c4a30  bl 0xff2e8
  03c4a34  nop
  03c4a38  addic 5, 1, 256
  03c4a3c  ori 3, 31, 0
  03c4a40  li 4, 0
  03c4a44  bl 0xf1114
  03c4a48  nop
  03c4a4c  lfs 1, 92(30)
  03c4a50  fcmpu 0, 31, 1
  03c4a54  bt 0, 0x3c4bec
  03c4a58  lis 3, 60
  03c4a5c  addi 3, 3, 13956
  03c4a60  lfs 1, 96(3)
  03c4a64  fcmpu 0, 31, 1
  03c4a68  bt 1, 0x3c4bec
  03c4a6c  lfs 1, 24(31)
  03c4a70  lfs 2, 504(1)
  03c4a74  fsubs 1, 1, 2
  03c4a78  fabs 1, 1
  03c4a7c  fcmpu 0, 1, 29
  03c4a80  cror 6, 1, 2
  03c4a84  bt 6, 0x3c4bec
  03c4a88  ori 3, 27, 0
  03c4a8c  addic 4, 1, 496
  03c4a90  bl 0x5e8588
  03c4a94  nop
  03c4a98  lis 3, 60
  03c4a9c  addi 3, 3, 13956
  03c4aa0  lfs 2, 60(3)
  03c4aa4  fcmpu 0, 1, 2
  03c4aa8  cror 6, 1, 2
  03c4aac  bt 6, 0x3c4bec
  03c4ab0  lfs 1, 496(1)
  03c4ab4  lfs 2, 16(31)
  03c4ab8  lfs 3, 500(1)
  03c4abc  lfs 4, 20(31)
  03c4ac0  fsubs 1, 1, 2
  03c4ac4  fsubs 2, 3, 4
  03c4ac8  bl 0x5e8338
  03c4acc  nop
  03c4ad0  lfs 2, 72(31)
  03c4ad4  bl 0x5026a0
  03c4ad8  nop
  03c4adc  lis 3, 60
  03c4ae0  addi 3, 3, 13956
  03c4ae4  lfs 2, 100(3)
  03c4ae8  fcmpu 0, 1, 2
  03c4aec  cror 6, 1, 2
  03c4af0  bt 6, 0x3c4bec
  03c4af4  lis 3, 1
  03c4af8  stw 31, 464(1)
  03c4afc  lis 4, 60
  03c4b00  ori 3, 3, 1
  03c4b04  addi 29, 4, 13956
  03c4b08  lis 30, 16256
  03c4b0c  stw 3, 468(1)
  03c4b10  lfs 1, 72(31)
  03c4b14  lfs 2, 104(29)
  03c4b18  stw 30, 476(1)
  03c4b1c  fmr 31, 2
  03c4b20  bl 0x5e8078
  03c4b24  nop
  03c4b28  lfs 30, 108(29)
  03c4b2c  lfs 2, 72(31)
  03c4b30  fmuls 3, 1, 30
  03c4b34  fmr 1, 2
  03c4b38  stfs 3, 448(1)
  03c4b3c  bl 0x5e8128
  03c4b40  nop
  03c4b44  fmuls 2, 1, 30
  03c4b48  li 29, 0
  03c4b4c  addic 3, 1, 448
  03c4b50  fmr 1, 31
  03c4b54  ori 4, 3, 0
  03c4b58  stw 29, 456(1)
  03c4b5c  stfs 2, 452(1)
  03c4b60  bl 0x5e84c0
  03c4b64  nop
  03c4b68  lis 3, 17839
  03c4b6c  stw 30, 456(1)
  03c4b70  li 4, 1
  03c4b74  ori 5, 3, 57190
  03c4b78  stb 29, 472(1)
  03c4b7c  lhz 6, 166(31)
  03c4b80  lwz 3, 560(1)
  03c4b84  stb 4, 473(1)
  03c4b88  stw 5, 460(1)
  03c4b8c  cmpwi 3, 0
  03c4b90  sth 6, 474(1)
  03c4b94  bt 2, 0x3c5f48
  03c4b98  li 4, 448
  03c4b9c  li 5, 464
  03c4ba0  li 6, 64
  03c4ba4  li 7, 480
  03c4ba8  li 8, 80
  03c4bac  lvx 2, 4, 1
  03c4bb0  li 4, 96
  03c4bb4  lvx 3, 5, 1
  03c4bb8  stvx 2, 6, 1
  03c4bbc  lvx 2, 7, 1
  03c4bc0  stvx 3, 8, 1
  03c4bc4  stvx 2, 4, 1
  03c4bc8  ld 5, 64(1)
  03c4bcc  ld 6, 72(1)
  03c4bd0  ld 7, 80(1)
  03c4bd4  ld 8, 88(1)
  03c4bd8  ld 9, 96(1)
  03c4bdc  ld 10, 104(1)
  03c4be0  bl 0x105ab4
  03c4be4  nop
  03c4be8  b 0x3c5f48
  03c4bec  lbz 3, 112(31)
  03c4bf0  rlwinm 3, 3, 0, 30, 30
  03c4bf4  cmpwi 3, 0
  03c4bf8  bt 2, 0x3c5f48
  03c4bfc  lwz 3, 628(28)
  03c4c00  cmpwi 3, 0
  03c4c04  bt 2, 0x3c4cd0
  03c4c08  lwz 3, 120(31)
  03c4c0c  lwz 5, 304(3)
  03c4c10  lwz 4, 288(3)
  03c4c14  lwz 5, 0(5)
  03c4c18  addic 5, 5, -1
  03c4c1c  cmpw 4, 5
  03c4c20  bf 0, 0x3c4c68
  03c4c24  addic 4, 4, 1
  03c4c28  li 5, 7
  03c4c2c  stw 4, 288(3)
  03c4c30  lbz 3, 83(31)
  03c4c34  stb 5, 32(31)
  03c4c38  cmpwi 3, 1
  03c4c3c  bt 2, 0x3c5f48
  03c4c40  li 3, 10
  03c4c44  bl 0x5e7e18
  03c4c48  nop
  03c4c4c  ori 6, 3, 0
  03c4c50  ori 3, 31, 0
  03c4c54  li 4, 1
  03c4c58  li 5, 0
  03c4c5c  bl 0xfddc0
  03c4c60  nop
  03c4c64  b 0x3c5f48
  03c4c68  li 3, 1
  03c4c6c  lbz 4, 83(31)
  03c4c70  cmpwi 4, 0
  03c4c74  stb 3, 32(31)
  03c4c78  bt 2, 0x3c4ca0
  03c4c7c  li 3, 10
  03c4c80  bl 0x5e7e18
  03c4c84  nop
  03c4c88  ori 6, 3, 0
  03c4c8c  ori 3, 31, 0
  03c4c90  li 4, 0
  03c4c94  li 5, 0
  03c4c98  bl 0xfddc0
  03c4c9c  nop
  03c4ca0  lfs 1, 496(1)
  03c4ca4  lfs 2, 16(31)
  03c4ca8  lfs 3, 500(1)
  03c4cac  lfs 4, 20(31)
  03c4cb0  fsubs 1, 1, 2
  03c4cb4  fsubs 2, 3, 4
  03c4cb8  bl 0x5e8338
  03c4cbc  nop
  03c4cc0  addic 4, 1, 496
  03c4cc4  ori 3, 31, 0
  03c4cc8  bl 0x3c22e8
  03c4ccc  b 0x3c5f48
  03c4cd0  ori 3, 31, 0
  03c4cd4  bl 0x3c24e8
  03c4cd8  li 3, 7
  03c4cdc  lbz 4, 83(31)
  03c4ce0  cmpwi 4, 1
  03c4ce4  stb 3, 32(31)
  03c4ce8  bt 2, 0x3c5f48
  03c4cec  li 3, 10
  03c4cf0  bl 0x5e7e18
  03c4cf4  nop
  03c4cf8  ori 6, 3, 0
  03c4cfc  ori 3, 31, 0
  03c4d00  li 4, 1
  03c4d04  li 5, 0
  03c4d08  bl 0xfddc0
  03c4d0c  nop
  03c4d10  b 0x3c5f48
  03c4d14  lhz 3, 598(28)
  03c4d18  cmpwi 3, 0
  03c4d1c  bt 2, 0x3c4d2c
  03c4d20  li 3, 8
  03c4d24  stb 3, 32(31)
  03c4d28  b 0x3c5f48
  03c4d2c  lwz 3, 288(28)
  03c4d30  lwz 4, 304(28)
  03c4d34  slwi 3, 3, 4
  03c4d38  addc 3, 4, 3
  03c4d3c  clrldi 3, 3, 32
  03c4d40  lfs 1, 16(3)
  03c4d44  lfs 2, 20(3)
  03c4d48  fsubs 1, 1, 3
  03c4d4c  fsubs 2, 2, 5
  03c4d50  bl 0x5e8338
  03c4d54  nop
  03c4d58  ori 3, 31, 0
  03c4d5c  addic 4, 1, 496
  03c4d60  bl 0x3c22e8
  03c4d64  cmpwi 3, 0
  03c4d68  bf 2, 0x3c5f48
  03c4d6c  lwz 5, 288(28)
  03c4d70  lwz 7, 304(28)
  03c4d74  addic 4, 28, 208
  03c4d78  slwi 5, 5, 4
  03c4d7c  addic 6, 28, 64
  03c4d80  addc 5, 7, 5
  03c4d84  ori 3, 31, 0
  03c4d88  addic 5, 5, 16
  03c4d8c  clrldi 5, 5, 32
  03c4d90  bl 0x101cc0
  03c4d94  nop
  03c4d98  li 4, 20
  03c4d9c  lbz 5, 83(31)
  03c4da0  and 3, 3, 4
  03c4da4  cmpwi 3, 0
  03c4da8  bt 2, 0x3c5f48
  03c4dac  lfs 1, 632(28)
  03c4db0  fcmpu 0, 31, 1
  03c4db4  cror 6, 1, 2
  03c4db8  bt 6, 0x3c4ef8
  03c4dbc  lfs 1, 504(1)
  03c4dc0  lfs 2, 24(31)
  03c4dc4  lis 3, 60
  03c4dc8  fsubs 1, 1, 2
  03c4dcc  addi 3, 3, 13956
  03c4dd0  lfs 2, 64(3)
  03c4dd4  fabs 1, 1
  03c4dd8  fcmpu 0, 1, 2
  03c4ddc  cror 6, 1, 2
  03c4de0  bt 6, 0x3c4ef8
  03c4de4  lwz 3, 628(28)
  03c4de8  cmpwi 3, 0
  03c4dec  bt 2, 0x3c4eb4
  03c4df0  lwz 3, 120(31)
  03c4df4  lwz 6, 304(3)
  03c4df8  lwz 4, 288(3)
  03c4dfc  lwz 6, 0(6)
  03c4e00  addic 6, 6, -1
  03c4e04  cmpw 4, 6
  03c4e08  bf 0, 0x3c4e50
  03c4e0c  addic 4, 4, 1
  03c4e10  li 5, 7
  03c4e14  stw 4, 288(3)
  03c4e18  lbz 3, 83(31)
  03c4e1c  stb 5, 32(31)
  03c4e20  cmpwi 3, 1
  03c4e24  bt 2, 0x3c5f48
  03c4e28  li 3, 10
  03c4e2c  bl 0x5e7e18
  03c4e30  nop
  03c4e34  ori 6, 3, 0
  03c4e38  ori 3, 31, 0
  03c4e3c  li 4, 1
  03c4e40  li 5, 0
  03c4e44  bl 0xfddc0
  03c4e48  nop
  03c4e4c  b 0x3c5f48
  03c4e50  li 3, 1
  03c4e54  cmpwi 5, 0
  03c4e58  stb 3, 32(31)
  03c4e5c  bt 2, 0x3c4e84
  03c4e60  li 3, 10
  03c4e64  bl 0x5e7e18
  03c4e68  nop
  03c4e6c  ori 6, 3, 0
  03c4e70  ori 3, 31, 0
  03c4e74  li 4, 0
  03c4e78  li 5, 0
  03c4e7c  bl 0xfddc0
  03c4e80  nop
  03c4e84  lfs 1, 496(1)
  03c4e88  lfs 2, 16(31)
  03c4e8c  lfs 3, 500(1)
  03c4e90  lfs 4, 20(31)
  03c4e94  fsubs 1, 1, 2
  03c4e98  fsubs 2, 3, 4
  03c4e9c  bl 0x5e8338
  03c4ea0  nop
  03c4ea4  addic 4, 1, 496
  03c4ea8  ori 3, 31, 0
  03c4eac  bl 0x3c22e8
  03c4eb0  b 0x3c5f48
  03c4eb4  ori 3, 31, 0
  03c4eb8  bl 0x3c24e8
  03c4ebc  li 3, 7
  03c4ec0  lbz 4, 83(31)
  03c4ec4  cmpwi 4, 1
  03c4ec8  stb 3, 32(31)
  03c4ecc  bt 2, 0x3c5f48
  03c4ed0  li 3, 10
  03c4ed4  bl 0x5e7e18
  03c4ed8  nop
  03c4edc  ori 6, 3, 0
  03c4ee0  ori 3, 31, 0
  03c4ee4  li 4, 1
  03c4ee8  li 5, 0
  03c4eec  bl 0xfddc0
  03c4ef0  nop
  03c4ef4  b 0x3c5f48
  03c4ef8  li 3, 1
  03c4efc  cmpwi 5, 0
  03c4f00  stb 3, 32(31)
  03c4f04  bt 2, 0x3c4f2c
  03c4f08  li 3, 10
  03c4f0c  bl 0x5e7e18
  03c4f10  nop
  03c4f14  ori 6, 3, 0
  03c4f18  ori 3, 31, 0
  03c4f1c  li 4, 0
  03c4f20  li 5, 0
  03c4f24  bl 0xfddc0
  03c4f28  nop
  03c4f2c  lfs 1, 496(1)
  03c4f30  lfs 2, 16(31)
  03c4f34  lfs 3, 500(1)
  03c4f38  lfs 4, 20(31)
  03c4f3c  fsubs 1, 1, 2
  03c4f40  fsubs 2, 3, 4
  03c4f44  bl 0x5e8338
  03c4f48  nop
  03c4f4c  addic 4, 1, 496
  03c4f50  ori 3, 31, 0
  03c4f54  bl 0x3c22e8
  03c4f58  b 0x3c5f48
  03c4f5c  lis 3, 60
  03c4f60  addic 5, 1, 272
  03c4f64  addi 8, 3, 13956
  03c4f68  lwz 3, 304(28)
  03c4f6c  addic 6, 1, 576
  03c4f70  addic 7, 1, 580
  03c4f74  ori 4, 27, 0
  03c4f78  lfs 1, 112(8)
  03c4f7c  lfs 2, 116(8)
  03c4f80  li 9, 0
  03c4f84  lfs 3, 120(8)
  03c4f88  bl 0x10d7a0
  03c4f8c  nop
  03c4f90  lwz 3, 576(1)
  03c4f94  lwz 5, 288(28)
  03c4f98  lwz 7, 304(28)
  03c4f9c  subc 6, 3, 5
  03c4fa0  extsw 3, 3
  03c4fa4  extsw 4, 5
  03c4fa8  subc 8, 4, 3
  03c4fac  addic 4, 28, 208
  03c4fb0  sradi 3, 8, 63
  03c4fb4  and 3, 3, 6
  03c4fb8  addic 6, 28, 64
  03c4fbc  addc 5, 5, 3
  03c4fc0  ori 3, 31, 0
  03c4fc4  sldi 8, 5, 4
  03c4fc8  addc 7, 7, 8
  03c4fcc  stw 5, 288(28)
  03c4fd0  addic 5, 7, 16
  03c4fd4  clrldi 5, 5, 32
  03c4fd8  bl 0x101cc0
  03c4fdc  nop
  03c4fe0  li 4, 20
  03c4fe4  and 3, 3, 4
  03c4fe8  cmpwi 3, 0
  03c4fec  bt 2, 0x3c5f48
  03c4ff0  lwz 4, 304(28)
  03c4ff4  lwz 3, 288(28)
  03c4ff8  lwz 4, 0(4)
  03c4ffc  addic 4, 4, -1
  03c5000  cmpw 3, 4
  03c5004  bf 0, 0x3c5014
  03c5008  addic 3, 3, 1
  03c500c  stw 3, 288(28)
  03c5010  b 0x3c5f48
  03c5014  li 3, 1
  03c5018  lbz 4, 83(31)
  03c501c  cmpwi 4, 0
  03c5020  stb 3, 32(31)
  03c5024  bt 2, 0x3c504c
  03c5028  li 3, 10
  03c502c  bl 0x5e7e18
  03c5030  nop
  03c5034  ori 6, 3, 0
  03c5038  ori 3, 31, 0
  03c503c  li 4, 0
  03c5040  li 5, 0
  03c5044  bl 0xfddc0
  03c5048  nop
  03c504c  lfs 1, 496(1)
  03c5050  lfs 2, 16(31)
  03c5054  lfs 3, 500(1)
  03c5058  lfs 4, 20(31)
  03c505c  fsubs 1, 1, 2
  03c5060  fsubs 2, 3, 4
  03c5064  bl 0x5e8338
  03c5068  nop
  03c506c  addic 4, 1, 496
  03c5070  ori 3, 31, 0
  03c5074  bl 0x3c22e8
  03c5078  b 0x3c5f48
  03c507c  lis 3, 165
  03c5080  lis 4, 60
  03c5084  addic 30, 3, 7136
  03c5088  lwz 3, 656(28)
  03c508c  addi 8, 4, 13956
  03c5090  addic 5, 1, 288
  03c5094  slwi 3, 3, 2
  03c5098  addic 6, 1, 584
  03c509c  extsw 3, 3
  03c50a0  lfs 1, 112(8)
  03c50a4  addic 7, 1, 588
  03c50a8  lfs 2, 116(8)
  03c50ac  ori 4, 27, 0
  03c50b0  li 9, 0
  03c50b4  lwzx 30, 30, 3
  03c50b8  lfs 3, 120(8)
  03c50bc  ori 3, 30, 0
  03c50c0  bl 0x10d7a0
  03c50c4  nop
  03c50c8  lwz 3, 584(1)
  03c50cc  lwz 4, 664(28)
  03c50d0  subc 5, 3, 4
  03c50d4  extsw 3, 3
  03c50d8  extsw 6, 4
  03c50dc  subc 3, 6, 3
  03c50e0  addic 6, 28, 64
  03c50e4  sradi 3, 3, 63
  03c50e8  and 3, 3, 5
  03c50ec  addc 5, 4, 3
  03c50f0  addic 4, 28, 208
  03c50f4  sldi 7, 5, 4
  03c50f8  ori 3, 31, 0
  03c50fc  stw 5, 664(28)
  03c5100  addc 5, 30, 7
  03c5104  addic 5, 5, 16
  03c5108  clrldi 5, 5, 32
  03c510c  bl 0x101cc0
  03c5110  nop
  03c5114  li 4, 20
  03c5118  and 3, 3, 4
  03c511c  cmpwi 3, 0
  03c5120  bt 2, 0x3c5f48
  03c5124  lwz 4, 0(30)
  03c5128  lwz 3, 664(28)
  03c512c  addic 4, 4, -1
  03c5130  cmpw 3, 4
  03c5134  bf 0, 0x3c5144
  03c5138  addic 3, 3, 1
  03c513c  stw 3, 664(28)
  03c5140  b 0x3c5f48
  03c5144  li 3, -1
  03c5148  li 4, 1
  03c514c  stw 3, 656(28)
  03c5150  lbz 3, 83(31)
  03c5154  stb 4, 32(31)
  03c5158  cmpwi 3, 0
  03c515c  bt 2, 0x3c5184
  03c5160  li 3, 10
  03c5164  bl 0x5e7e18
  03c5168  nop
  03c516c  ori 6, 3, 0
  03c5170  ori 3, 31, 0
  03c5174  li 4, 0
  03c5178  li 5, 0
  03c517c  bl 0xfddc0
  03c5180  nop
  03c5184  lwz 3, 644(28)
  03c5188  cmpwi 3, -1
  03c518c  bt 2, 0x3c51c0
  03c5190  li 3, 10
  03c5194  bl 0x5e7e18
  03c5198  nop
  03c519c  ori 6, 3, 0
  03c51a0  ori 3, 31, 0
  03c51a4  li 4, 0
  03c51a8  li 5, 0
  03c51ac  bl 0xfddc0
  03c51b0  nop
  03c51b4  li 3, 2
  03c51b8  stb 3, 32(31)
  03c51bc  b 0x3c5f48
  03c51c0  lfs 1, 496(1)
  03c51c4  lfs 2, 16(31)
  03c51c8  lfs 3, 500(1)
  03c51cc  lfs 4, 20(31)
  03c51d0  fsubs 1, 1, 2
  03c51d4  fsubs 2, 3, 4
  03c51d8  bl 0x5e8338
  03c51dc  nop
  03c51e0  addic 4, 1, 496
  03c51e4  ori 3, 31, 0
  03c51e8  bl 0x3c22e8
  03c51ec  b 0x3c5f48
  03c51f0  lhz 4, 174(28)
  03c51f4  li 3, 0
  03c51f8  cmpwi 4, 2
  03c51fc  ori 29, 3, 0
  03c5200  bt 2, 0x3c5218
  03c5204  addic 4, 28, 112
  03c5208  ori 3, 31, 0
  03c520c  bl 0x10b030
  03c5210  nop
  03c5214  b 0x3c5234
  03c5218  lis 4, 16256
  03c521c  lbz 5, 112(31)
  03c5220  stw 4, 88(31)
  03c5224  rlwinm 4, 5, 0, 30, 30
  03c5228  cmpwi 4, 0
  03c522c  bt 2, 0x3c5234
  03c5230  li 3, 64
  03c5234  li 4, -1
  03c5238  rlwinm 5, 3, 0, 25, 25
  03c523c  cmpwi 5, 0
  03c5240  stw 4, 656(28)
  03c5244  bt 2, 0x3c5360
  03c5248  lwz 3, 628(28)
  03c524c  cmpwi 3, 0
  03c5250  bt 2, 0x3c531c
  03c5254  lwz 3, 120(31)
  03c5258  lwz 5, 304(3)
  03c525c  lwz 4, 288(3)
  03c5260  lwz 5, 0(5)
  03c5264  addic 5, 5, -1
  03c5268  cmpw 4, 5
  03c526c  bf 0, 0x3c52b4
  03c5270  addic 4, 4, 1
  03c5274  li 5, 7
  03c5278  stw 4, 288(3)
  03c527c  lbz 3, 83(31)
  03c5280  stb 5, 32(31)
  03c5284  cmpwi 3, 1
  03c5288  bt 2, 0x3c5534
  03c528c  li 3, 10
  03c5290  bl 0x5e7e18
  03c5294  nop
  03c5298  ori 6, 3, 0
  03c529c  ori 3, 31, 0
  03c52a0  li 4, 1
  03c52a4  li 5, 0
  03c52a8  bl 0xfddc0
  03c52ac  nop
  03c52b0  b 0x3c5534
  03c52b4  li 3, 1
  03c52b8  lbz 4, 83(31)
  03c52bc  cmpwi 4, 0
  03c52c0  stb 3, 32(31)
  03c52c4  bt 2, 0x3c52ec
  03c52c8  li 3, 10
  03c52cc  bl 0x5e7e18
  03c52d0  nop
  03c52d4  ori 6, 3, 0
  03c52d8  ori 3, 31, 0
  03c52dc  li 4, 0
  03c52e0  li 5, 0
  03c52e4  bl 0xfddc0
  03c52e8  nop
  03c52ec  lfs 1, 496(1)
  03c52f0  lfs 2, 16(31)
  03c52f4  lfs 3, 500(1)
  03c52f8  lfs 4, 20(31)
  03c52fc  fsubs 1, 1, 2
  03c5300  fsubs 2, 3, 4
  03c5304  bl 0x5e8338
  03c5308  nop
  03c530c  addic 4, 1, 496
  03c5310  ori 3, 31, 0
  03c5314  bl 0x3c22e8
  03c5318  b 0x3c5534
  03c531c  ori 3, 31, 0
  03c5320  bl 0x3c24e8
  03c5324  li 4, 7
  03c5328  lbz 3, 83(31)
  03c532c  cmpwi 3, 1
  03c5330  stb 4, 32(31)
  03c5334  bt 2, 0x3c5534
  03c5338  li 3, 10
  03c533c  bl 0x5e7e18
  03c5340  nop
  03c5344  ori 6, 3, 0
  03c5348  ori 3, 31, 0
  03c534c  li 4, 1
  03c5350  li 5, 0
  03c5354  bl 0xfddc0
  03c5358  nop
  03c535c  b 0x3c5534
  03c5360  lwz 5, 24(31)
  03c5364  lis 4, 16544
  03c5368  srawi 6, 5, 31
  03c536c  srwi 7, 6, 1
  03c5370  xor 5, 7, 5
  03c5374  subc 5, 5, 6
  03c5378  cmpw 5, 4
  03c537c  bt 0, 0x3c538c
  03c5380  rlwinm 3, 3, 0, 26, 26
  03c5384  cmpwi 3, 0
  03c5388  bt 2, 0x3c5534
  03c538c  addic 26, 1, 304
  03c5390  ori 4, 27, 0
  03c5394  ori 3, 26, 0
  03c5398  bl 0x5e7e98
  03c539c  nop
  03c53a0  lis 3, 60
  03c53a4  lfs 1, 312(1)
  03c53a8  li 7, 6
  03c53ac  addi 6, 3, 13956
  03c53b0  fmr 3, 29
  03c53b4  li 11, 1
  03c53b8  li 12, -1
  03c53bc  addic 30, 28, 64
  03c53c0  ori 3, 31, 0
  03c53c4  lfs 4, 104(6)
  03c53c8  ori 4, 30, 0
  03c53cc  std 7, 144(1)
  03c53d0  ori 5, 26, 0
  03c53d4  fadds 1, 1, 4
  03c53d8  std 11, 160(1)
  03c53dc  std 11, 168(1)
  03c53e0  li 8, 5
  03c53e4  std 12, 176(1)
  03c53e8  li 9, 2
  03c53ec  std 29, 184(1)
  03c53f0  li 10, 4
  03c53f4  fmr 6, 4
  03c53f8  stfs 1, 312(1)
  03c53fc  lfs 31, 120(6)
  03c5400  lfs 5, 124(6)
  03c5404  lfs 7, 48(6)
  03c5408  fmr 1, 31
  03c540c  fmr 2, 31
  03c5410  bl 0x10e030
  03c5414  nop
  03c5418  lis 4, 161
  03c541c  addic 26, 31, 64
  03c5420  fmr 1, 31
  03c5424  addic 25, 4, 23856
  03c5428  ori 3, 31, 0
  03c542c  ori 10, 25, 0
  03c5430  li 4, 1744
  03c5434  std 25, 112(1)
  03c5438  ori 5, 27, 0
  03c543c  std 25, 120(1)
  03c5440  ori 6, 26, 0
  03c5444  li 7, 0
  03c5448  li 8, 0
  03c544c  bl 0x11a560
  03c5450  nop
  03c5454  std 25, 112(1)
  03c5458  ori 3, 31, 0
  03c545c  std 25, 120(1)
  03c5460  ori 10, 25, 0
  03c5464  li 4, 1745
  03c5468  fmr 1, 31
  03c546c  ori 5, 27, 0
  03c5470  ori 6, 26, 0
  03c5474  li 7, 0
  03c5478  li 8, 0
  03c547c  bl 0x11a560
  03c5480  nop
  03c5484  ori 3, 31, 0
  03c5488  std 25, 112(1)
  03c548c  ori 10, 25, 0
  03c5490  fmr 1, 31
  03c5494  li 4, 1746
  03c5498  std 25, 120(1)
  03c549c  ori 5, 27, 0
  03c54a0  ori 6, 26, 0
  03c54a4  li 7, 0
  03c54a8  li 8, 0
  03c54ac  bl 0x11a560
  03c54b0  nop
  03c54b4  ori 3, 31, 0
  03c54b8  li 4, 0
  03c54bc  li 5, -1
  03c54c0  bl 0xfd8d0
  03c54c4  nop
  03c54c8  lwz 3, 612(28)
  03c54cc  cmpwi 3, -1
  03c54d0  bf 2, 0x3c54e4
  03c54d4  ori 3, 31, 0
  03c54d8  bl 0xefb38
  03c54dc  nop
  03c54e0  b 0x3c6530
  03c54e4  lwz 4, 304(28)
  03c54e8  ori 3, 30, 0
  03c54ec  lfs 1, 16(4)
  03c54f0  stfs 1, 16(31)
  03c54f4  lfs 1, 20(4)
  03c54f8  stfs 1, 20(31)
  03c54fc  lfs 1, 24(4)
  03c5500  stfs 1, 24(31)
  03c5504  lfs 1, 28(4)
  03c5508  stfs 1, 28(31)
  03c550c  bl 0x5e7e70
  03c5510  nop
  03c5514  lhz 3, 52(31)
  03c5518  li 4, 14
  03c551c  stw 29, 232(28)
  03c5520  ori 3, 3, 65
  03c5524  stw 29, 148(31)
  03c5528  stb 4, 32(31)
  03c552c  sth 3, 52(31)
  03c5530  b 0x3c6530
  03c5534  lfs 1, 24(31)
  03c5538  ori 3, 27, 0
  03c553c  fadds 1, 1, 29
  03c5540  stfs 1, 24(31)
  03c5544  bl 0xffc18
  03c5548  nop
  03c554c  lis 3, 60
  03c5550  addi 3, 3, 13956
  03c5554  lfs 2, 24(31)
  03c5558  fsubs 2, 2, 29
  03c555c  stfs 2, 24(31)
  03c5560  lfs 3, 116(3)
  03c5564  fadds 1, 1, 3
  03c5568  fcmpu 0, 2, 1
  03c556c  cror 6, 0, 2
  03c5570  bt 6, 0x3c5f48
  03c5574  li 3, 10
  03c5578  li 4, 33
  03c557c  ori 5, 31, 0
  03c5580  bl 0x15d12c
  03c5584  nop
  03c5588  li 3, 10
  03c558c  bl 0x5e7e18
  03c5590  nop
  03c5594  ori 6, 3, 0
  03c5598  ori 3, 31, 0
  03c559c  li 4, 11
  03c55a0  li 5, 0
  03c55a4  bl 0xfddc0
  03c55a8  nop
  03c55ac  li 3, 11
  03c55b0  stb 3, 32(31)
  03c55b4  b 0x3c5f48
  03c55b8  lfs 1, 120(28)
  03c55bc  lfs 2, 128(28)
  03c55c0  addic 30, 28, 112
  03c55c4  fsubs 1, 1, 2
  03c55c8  ori 3, 30, 0
  03c55cc  stfs 1, 120(28)
  03c55d0  bl 0x5e7ebc
  03c55d4  nop
  03c55d8  lis 3, 60
  03c55dc  stfs 1, 592(1)
  03c55e0  addi 3, 3, 13956
  03c55e4  lhz 4, 174(28)
  03c55e8  lfs 2, 132(28)
  03c55ec  cmpwi 4, 2
  03c55f0  lfs 1, 120(3)
  03c55f4  fmr 31, 1
  03c55f8  bt 2, 0x3c5600
  03c55fc  lfs 1, 188(28)
  03c5600  addic 3, 1, 592
  03c5604  bl 0x109af0
  03c5608  nop
  03c560c  lfs 1, 592(1)
  03c5610  ori 3, 30, 0
  03c5614  ori 4, 30, 0
  03c5618  bl 0x5e84c0
  03c561c  nop
  03c5620  addic 3, 1, 320
  03c5624  ori 4, 27, 0
  03c5628  bl 0x5e7e98
  03c562c  nop
  03c5630  lfs 1, 328(1)
  03c5634  lfs 2, 152(28)
  03c5638  ori 3, 27, 0
  03c563c  ori 4, 27, 0
  03c5640  fadds 1, 1, 2
  03c5644  ori 5, 30, 0
  03c5648  stfs 1, 328(1)
  03c564c  bl 0x5e7f54
  03c5650  nop
  03c5654  addic 3, 1, 336
  03c5658  ori 4, 27, 0
  03c565c  bl 0x5e7e98
  03c5660  nop
  03c5664  lfs 1, 344(1)
  03c5668  ori 3, 30, 0
  03c566c  lfs 2, 152(28)
  03c5670  fadds 1, 1, 2
  03c5674  stfs 1, 344(1)
  03c5678  bl 0x5e8030
  03c567c  nop
  03c5680  lwz 30, 144(28)
  03c5684  extsw 3, 30
  03c5688  std 3, 608(1)
  03c568c  lfd 2, 608(1)
  03c5690  fcfid 2, 2
  03c5694  frsp 2, 2
  03c5698  fcmpu 0, 1, 2
  03c569c  cror 6, 0, 2
  03c56a0  bt 6, 0x3c56e0
  03c56a4  addic 30, 1, 336
  03c56a8  ori 6, 31, 0
  03c56ac  ori 4, 30, 0
  03c56b0  addic 3, 1, 320
  03c56b4  li 5, 36
  03c56b8  li 7, 0
  03c56bc  bl 0x57820
  03c56c0  nop
  03c56c4  lis 4, 161
  03c56c8  ori 3, 30, 0
  03c56cc  addic 4, 4, 2368
  03c56d0  addic 4, 4, 32
  03c56d4  bl 0x5e7e98
  03c56d8  nop
  03c56dc  lwz 30, 144(28)
  03c56e0  extsw 3, 30
  03c56e4  bl 0x502730
  03c56e8  nop
  03c56ec  lis 3, 60
  03c56f0  li 5, 36
  03c56f4  addi 4, 3, 13956
  03c56f8  addic 3, 1, 336
  03c56fc  ori 6, 31, 0
  03c5700  lfs 2, 128(4)
  03c5704  fmuls 1, 1, 2
  03c5708  bl 0x59e20
  03c570c  nop
  03c5710  cmpwi 3, 0
  03c5714  lfs 1, 24(31)
  03c5718  bt 2, 0x3c574c
  03c571c  lis 4, 161
  03c5720  ori 3, 27, 0
  03c5724  addic 4, 4, 2368
  03c5728  addic 4, 4, 48
  03c572c  bl 0x5e7e98
  03c5730  nop
  03c5734  lfs 1, 328(1)
  03c5738  lfs 2, 120(28)
  03c573c  fadds 1, 1, 2
  03c5740  lfs 2, 152(28)
  03c5744  fsubs 1, 1, 2
  03c5748  stfs 1, 24(31)
  03c574c  lis 3, 60
  03c5750  addi 3, 3, 13956
  03c5754  lfs 2, 116(3)
  03c5758  fcmpu 0, 1, 2
  03c575c  cror 6, 1, 2
  03c5760  bt 6, 0x3c5910
  03c5764  addic 29, 1, 352
  03c5768  ori 4, 27, 0
  03c576c  ori 3, 29, 0
  03c5770  bl 0x5e7e98
  03c5774  nop
  03c5778  lis 3, 60
  03c577c  lfs 1, 360(1)
  03c5780  li 10, 6
  03c5784  addi 6, 3, 13956
  03c5788  fmr 2, 31
  03c578c  li 11, 1
  03c5790  fmr 3, 29
  03c5794  li 12, -1
  03c5798  li 7, 0
  03c579c  addic 30, 28, 64
  03c57a0  lfs 4, 104(6)
  03c57a4  std 10, 144(1)
  03c57a8  ori 4, 30, 0
  03c57ac  fadds 5, 1, 4
  03c57b0  std 11, 160(1)
  03c57b4  std 11, 168(1)
  03c57b8  li 8, 5
  03c57bc  std 12, 176(1)
  03c57c0  ori 3, 31, 0
  03c57c4  std 7, 184(1)
  03c57c8  fmr 1, 31
  03c57cc  ori 5, 29, 0
  03c57d0  fmr 6, 4
  03c57d4  li 9, 2
  03c57d8  li 10, 4
  03c57dc  stfs 5, 360(1)
  03c57e0  lfs 5, 124(6)
  03c57e4  lfs 7, 48(6)
  03c57e8  bl 0x10e030
  03c57ec  nop
  03c57f0  lis 4, 161
  03c57f4  addic 26, 31, 64
  03c57f8  fmr 1, 31
  03c57fc  addic 29, 4, 23856
  03c5800  ori 3, 31, 0
  03c5804  li 4, 1744
  03c5808  ori 10, 29, 0
  03c580c  std 29, 112(1)
  03c5810  ori 5, 27, 0
  03c5814  std 29, 120(1)
  03c5818  ori 6, 26, 0
  03c581c  li 7, 0
  03c5820  li 8, 0
  03c5824  bl 0x11a560
  03c5828  nop
  03c582c  std 29, 112(1)
  03c5830  ori 3, 31, 0
  03c5834  std 29, 120(1)
  03c5838  li 4, 1745
  03c583c  ori 10, 29, 0
  03c5840  fmr 1, 31
  03c5844  ori 5, 27, 0
  03c5848  ori 6, 26, 0
  03c584c  li 7, 0
  03c5850  li 8, 0
  03c5854  bl 0x11a560
  03c5858  nop
  03c585c  ori 3, 31, 0
  03c5860  std 29, 112(1)
  03c5864  li 4, 1746
  03c5868  fmr 1, 31
  03c586c  ori 10, 29, 0
  03c5870  std 29, 120(1)
  03c5874  ori 5, 27, 0
  03c5878  ori 6, 26, 0
  03c587c  li 7, 0
  03c5880  li 8, 0
  03c5884  bl 0x11a560
  03c5888  nop
  03c588c  ori 3, 31, 0
  03c5890  li 4, 512
  03c5894  li 5, -1
  03c5898  bl 0xfd8d0
  03c589c  nop
  03c58a0  lwz 3, 612(28)
  03c58a4  cmpwi 3, -1
  03c58a8  bf 2, 0x3c58bc
  03c58ac  ori 3, 31, 0
  03c58b0  bl 0xefb38
  03c58b4  nop
  03c58b8  b 0x3c6530
  03c58bc  lwz 4, 304(28)
  03c58c0  ori 3, 30, 0
  03c58c4  lfs 1, 16(4)
  03c58c8  stfs 1, 16(31)
  03c58cc  lfs 1, 20(4)
  03c58d0  stfs 1, 20(31)
  03c58d4  lfs 1, 24(4)
  03c58d8  stfs 1, 24(31)
  03c58dc  lfs 1, 28(4)
  03c58e0  stfs 1, 28(31)
  03c58e4  bl 0x5e7e70
  03c58e8  nop
  03c58ec  lhz 3, 52(31)
  03c58f0  li 4, 0
  03c58f4  li 5, 14
  03c58f8  stfs 31, 232(28)
  03c58fc  ori 3, 3, 65
  03c5900  stw 4, 148(31)
  03c5904  stb 5, 32(31)
  03c5908  sth 3, 52(31)
  03c590c  b 0x3c6530
  03c5910  lbz 3, 83(31)
  03c5914  cmpwi 3, 1
  03c5918  cmpwi 1, 3, 0
  03c591c  cmpwi 6, 3, 9
  03c5920  bt 1, 0x3c592c
  03c5924  bf 5, 0x3c5f48
  03c5928  b 0x3c5934
  03c592c  bt 26, 0x3c5a40
  03c5930  b 0x3c5f48
  03c5934  lis 3, 60
  03c5938  lfs 1, 652(28)
  03c593c  addic 5, 28, 600
  03c5940  addi 30, 3, 13956
  03c5944  ori 3, 31, 0
  03c5948  lfs 2, 132(30)
  03c594c  lfs 3, 136(30)
  03c5950  lfs 4, 140(30)
  03c5954  bl 0xff2e8
  03c5958  nop
  03c595c  lfs 1, 72(31)
  03c5960  lfs 2, 652(28)
  03c5964  bl 0x5026a0
  03c5968  nop
  03c596c  lfs 2, 144(30)
  03c5970  fcmpu 0, 1, 2
  03c5974  cror 6, 1, 2
  03c5978  bt 6, 0x3c5f48
  03c597c  li 3, 60
  03c5980  bl 0x5e7e18
  03c5984  nop
  03c5988  stb 3, 611(28)
  03c598c  lbz 3, 188(31)
  03c5990  cmpwi 3, 7
  03c5994  bt 2, 0x3c59a0
  03c5998  cmpwi 3, 8
  03c599c  bf 2, 0x3c59f4
  03c59a0  cmpwi 3, 7
  03c59a4  bf 2, 0x3c59b4
  03c59a8  ori 3, 31, 0
  03c59ac  bl 0x3c24e8
  03c59b0  lbz 3, 188(31)
  03c59b4  lbz 4, 83(31)
  03c59b8  stb 3, 32(31)
  03c59bc  cmpwi 4, 1
  03c59c0  bt 2, 0x3c59e8
  03c59c4  li 3, 10
  03c59c8  bl 0x5e7e18
  03c59cc  nop
  03c59d0  ori 6, 3, 0
  03c59d4  ori 3, 31, 0
  03c59d8  li 4, 1
  03c59dc  li 5, 0
  03c59e0  bl 0xfddc0
  03c59e4  nop
  03c59e8  lis 3, 16256
  03c59ec  stw 3, 88(31)
  03c59f0  b 0x3c5f48
  03c59f4  li 3, 1
  03c59f8  lbz 4, 83(31)
  03c59fc  cmpwi 4, 0
  03c5a00  stb 3, 32(31)
  03c5a04  bt 2, 0x3c5a2c
  03c5a08  li 3, 10
  03c5a0c  bl 0x5e7e18
  03c5a10  nop
  03c5a14  ori 6, 3, 0
  03c5a18  ori 3, 31, 0
  03c5a1c  li 4, 0
  03c5a20  li 5, 0
  03c5a24  bl 0xfddc0
  03c5a28  nop
  03c5a2c  li 3, 10
  03c5a30  bl 0x5e7e18
  03c5a34  nop
  03c5a38  sth 3, 592(28)
  03c5a3c  b 0x3c5f48
  03c5a40  lis 3, 60
  03c5a44  lfs 1, 652(28)
  03c5a48  addic 5, 28, 600
  03c5a4c  addi 30, 3, 13956
  03c5a50  ori 3, 31, 0
  03c5a54  lfs 2, 148(30)
  03c5a58  lfs 3, 24(30)
  03c5a5c  lfs 4, 108(30)
  03c5a60  bl 0xff2e8
  03c5a64  nop
  03c5a68  lfs 1, 72(31)
  03c5a6c  lfs 2, 652(28)
  03c5a70  bl 0x5026a0
  03c5a74  nop
  03c5a78  lfs 2, 144(30)
  03c5a7c  fcmpu 0, 1, 2
  03c5a80  cror 6, 1, 2
  03c5a84  bt 6, 0x3c5f48
  03c5a88  li 3, 60
  03c5a8c  bl 0x5e7e18
  03c5a90  nop
  03c5a94  stb 3, 611(28)
  03c5a98  lbz 3, 188(31)
  03c5a9c  cmpwi 3, 7
  03c5aa0  bt 2, 0x3c5aac
  03c5aa4  cmpwi 3, 8
  03c5aa8  bf 2, 0x3c5af8
  03c5aac  cmpwi 3, 7
  03c5ab0  bf 2, 0x3c5ac0
  03c5ab4  ori 3, 31, 0
  03c5ab8  bl 0x3c24e8
  03c5abc  lbz 3, 188(31)
  03c5ac0  lbz 4, 83(31)
  03c5ac4  stb 3, 32(31)
  03c5ac8  cmpwi 4, 1
  03c5acc  bt 2, 0x3c5f48
  03c5ad0  li 3, 10
  03c5ad4  bl 0x5e7e18
  03c5ad8  nop
  03c5adc  ori 6, 3, 0
  03c5ae0  ori 3, 31, 0
  03c5ae4  li 4, 1
  03c5ae8  li 5, 0
  03c5aec  bl 0xfddc0
  03c5af0  nop
  03c5af4  b 0x3c5f48
  03c5af8  li 3, 1
  03c5afc  lbz 4, 83(31)
  03c5b00  cmpwi 4, 0
  03c5b04  stb 3, 32(31)
  03c5b08  bt 2, 0x3c5b30
  03c5b0c  li 3, 10
  03c5b10  bl 0x5e7e18
  03c5b14  nop
  03c5b18  ori 6, 3, 0
  03c5b1c  ori 3, 31, 0
  03c5b20  li 4, 0
  03c5b24  li 5, 0
  03c5b28  bl 0xfddc0
  03c5b2c  nop
  03c5b30  li 3, 10
  03c5b34  bl 0x5e7e18
  03c5b38  nop
  03c5b3c  sth 3, 592(28)
  03c5b40  b 0x3c5f48
  03c5b44  addic 4, 28, 112
  03c5b48  ori 3, 31, 0
  03c5b4c  bl 0x10b030
  03c5b50  nop
  03c5b54  lbz 4, 597(28)
  03c5b58  ori 30, 3, 0
  03c5b5c  ori 3, 27, 0
  03c5b60  addic 4, 4, 1
  03c5b64  stb 4, 597(28)
  03c5b68  bl 0xffc18
  03c5b6c  nop
  03c5b70  rlwinm 29, 30, 0, 25, 26
  03c5b74  cmpwi 29, 0
  03c5b78  bt 2, 0x3c5bc4
  03c5b7c  lis 3, 60
  03c5b80  addi 3, 3, 13956
  03c5b84  lfs 2, 116(3)
  03c5b88  lfs 3, 24(31)
  03c5b8c  fadds 1, 1, 2
  03c5b90  fcmpu 0, 3, 1
  03c5b94  cror 6, 0, 2
  03c5b98  bt 6, 0x3c5bc4
  03c5b9c  lbz 3, 188(31)
  03c5ba0  cmpwi 3, 11
  03c5ba4  bt 2, 0x3c5bc4
  03c5ba8  li 3, 10
  03c5bac  li 4, 0
  03c5bb0  ori 5, 31, 0
  03c5bb4  bl 0x15d12c
  03c5bb8  nop
  03c5bbc  li 3, 11
  03c5bc0  stb 3, 188(31)
  03c5bc4  clrlwi 4, 30, 31
  03c5bc8  li 3, 0
  03c5bcc  cmpwi 4, 0
  03c5bd0  lhz 4, 52(31)
  03c5bd4  rlwimi 4, 3, 0, 19, 19
  03c5bd8  sth 4, 52(31)
  03c5bdc  bt 2, 0x3c5be8
  03c5be0  li 3, 0
  03c5be4  stb 3, 597(28)
  03c5be8  cmpwi 29, 0
  03c5bec  bt 2, 0x3c5da0
  03c5bf0  addic 29, 1, 368
  03c5bf4  ori 4, 27, 0
  03c5bf8  ori 3, 29, 0
  03c5bfc  bl 0x5e7e98
  03c5c00  nop
  03c5c04  lis 3, 60
  03c5c08  lfs 1, 376(1)
  03c5c0c  li 7, 6
  03c5c10  fmr 3, 29
  03c5c14  addi 6, 3, 13956
  03c5c18  li 11, 1
  03c5c1c  li 12, -1
  03c5c20  li 26, 0
  03c5c24  addic 30, 28, 64
  03c5c28  lfs 4, 104(6)
  03c5c2c  std 7, 144(1)
  03c5c30  ori 4, 30, 0
  03c5c34  fadds 1, 1, 4
  03c5c38  std 11, 160(1)
  03c5c3c  std 11, 168(1)
  03c5c40  ori 3, 31, 0
  03c5c44  std 12, 176(1)
  03c5c48  ori 5, 29, 0
  03c5c4c  std 26, 184(1)
  03c5c50  li 8, 5
  03c5c54  li 9, 2
  03c5c58  fmr 6, 4
  03c5c5c  li 10, 4
  03c5c60  stfs 1, 376(1)
  03c5c64  lfs 31, 120(6)
  03c5c68  lfs 5, 124(6)
  03c5c6c  lfs 7, 48(6)
  03c5c70  fmr 1, 31
  03c5c74  fmr 2, 31
  03c5c78  bl 0x10e030
  03c5c7c  nop
  03c5c80  lis 4, 161
  03c5c84  addic 29, 31, 64
  03c5c88  fmr 1, 31
  03c5c8c  addic 26, 4, 23856
  03c5c90  ori 3, 31, 0
  03c5c94  ori 10, 26, 0
  03c5c98  li 4, 1744
  03c5c9c  std 26, 112(1)
  03c5ca0  ori 5, 27, 0
  03c5ca4  std 26, 120(1)
  03c5ca8  ori 6, 29, 0
  03c5cac  li 7, 0
  03c5cb0  li 8, 0
  03c5cb4  bl 0x11a560
  03c5cb8  nop
  03c5cbc  std 26, 112(1)
  03c5cc0  ori 3, 31, 0
  03c5cc4  std 26, 120(1)
  03c5cc8  ori 10, 26, 0
  03c5ccc  li 4, 1745
  03c5cd0  fmr 1, 31
  03c5cd4  ori 5, 27, 0
  03c5cd8  ori 6, 29, 0
  03c5cdc  li 7, 0
  03c5ce0  li 8, 0
  03c5ce4  bl 0x11a560
  03c5ce8  nop
  03c5cec  ori 3, 31, 0
  03c5cf0  std 26, 112(1)
  03c5cf4  ori 10, 26, 0
  03c5cf8  fmr 1, 31
  03c5cfc  li 4, 1746
  03c5d00  std 26, 120(1)
  03c5d04  ori 5, 27, 0
  03c5d08  ori 6, 29, 0
  03c5d0c  li 7, 0
  03c5d10  li 8, 0
  03c5d14  bl 0x11a560
  03c5d18  nop
  03c5d1c  ori 3, 31, 0
  03c5d20  li 4, 0
  03c5d24  li 5, -1
  03c5d28  bl 0xfd8d0
  03c5d2c  nop
  03c5d30  lwz 3, 612(28)
  03c5d34  cmpwi 3, -1
  03c5d38  bf 2, 0x3c5d4c
  03c5d3c  ori 3, 31, 0
  03c5d40  bl 0xefb38
  03c5d44  nop
  03c5d48  b 0x3c6530
  03c5d4c  lwz 4, 304(28)
  03c5d50  ori 3, 30, 0
  03c5d54  lfs 1, 16(4)
  03c5d58  stfs 1, 16(31)
  03c5d5c  lfs 1, 20(4)
  03c5d60  stfs 1, 20(31)
  03c5d64  lfs 1, 24(4)
  03c5d68  stfs 1, 24(31)
  03c5d6c  lfs 1, 28(4)
  03c5d70  stfs 1, 28(31)
  03c5d74  bl 0x5e7e70
  03c5d78  nop
  03c5d7c  lhz 3, 52(31)
  03c5d80  li 4, 0
  03c5d84  li 5, 14
  03c5d88  ori 3, 3, 65
  03c5d8c  stw 4, 232(28)
  03c5d90  stw 4, 148(31)
  03c5d94  sth 3, 52(31)
  03c5d98  stb 5, 32(31)
  03c5d9c  b 0x3c6530
  03c5da0  lwz 4, 24(31)
  03c5da4  lis 3, 16544
  03c5da8  srawi 5, 4, 31
  03c5dac  srwi 6, 5, 1
  03c5db0  xor 4, 6, 4
  03c5db4  subc 4, 4, 5
  03c5db8  cmpw 4, 3
  03c5dbc  bf 0, 0x3c5f48
  03c5dc0  ori 3, 31, 0
  03c5dc4  li 4, 0
  03c5dc8  li 5, -1
  03c5dcc  bl 0xfd8d0
  03c5dd0  nop
  03c5dd4  lwz 3, 612(28)
  03c5dd8  cmpwi 3, -1
  03c5ddc  bf 2, 0x3c5df0
  03c5de0  ori 3, 31, 0
  03c5de4  bl 0xefb38
  03c5de8  nop
  03c5dec  b 0x3c6530
  03c5df0  lwz 4, 304(28)
  03c5df4  addic 3, 28, 64
  03c5df8  lfs 1, 16(4)
  03c5dfc  stfs 1, 16(31)
  03c5e00  lfs 1, 20(4)
  03c5e04  stfs 1, 20(31)
  03c5e08  lfs 1, 24(4)
  03c5e0c  stfs 1, 24(31)
  03c5e10  lfs 1, 28(4)
  03c5e14  stfs 1, 28(31)
  03c5e18  bl 0x5e7e70
  03c5e1c  nop
  03c5e20  li 3, 0
  03c5e24  lhz 4, 52(31)
  03c5e28  li 5, 14
  03c5e2c  ori 4, 4, 65
  03c5e30  stw 3, 232(28)
  03c5e34  stw 3, 148(31)
  03c5e38  stb 5, 32(31)
  03c5e3c  sth 4, 52(31)
  03c5e40  b 0x3c6530
  03c5e44  lbz 3, 83(31)
  03c5e48  cmpwi 3, 0
  03c5e4c  bt 2, 0x3c5e74
  03c5e50  li 3, 10
  03c5e54  bl 0x5e7e18
  03c5e58  nop
  03c5e5c  ori 6, 3, 0
  03c5e60  ori 3, 31, 0
  03c5e64  li 4, 0
  03c5e68  li 5, 0
  03c5e6c  bl 0xfddc0
  03c5e70  nop
  03c5e74  li 3, 0
  03c5e78  lhz 4, 52(31)
  03c5e7c  rlwimi 4, 3, 0, 19, 19
  03c5e80  sth 4, 52(31)
  03c5e84  lwz 5, 304(28)
  03c5e88  ori 4, 4, 65
  03c5e8c  lfs 1, 16(5)
  03c5e90  stfs 1, 16(31)
  03c5e94  lfs 1, 20(5)
  03c5e98  stfs 1, 20(31)
  03c5e9c  lfs 1, 24(5)
  03c5ea0  stfs 1, 24(31)
  03c5ea4  lfs 1, 28(5)
  03c5ea8  stw 3, 148(31)
  03c5eac  stfs 1, 28(31)
  03c5eb0  sth 4, 52(31)
  03c5eb4  b 0x3c5f48
  03c5eb8  lis 3, 151
  03c5ebc  lis 4, 161
  03c5ec0  lbz 5, 176(31)
  03c5ec4  addic 4, 4, -13692
  03c5ec8  lwz 3, -25488(3)
  03c5ecc  addc 4, 5, 4
  03c5ed0  slwi 3, 3, 4
  03c5ed4  clrldi 4, 4, 32
  03c5ed8  extsw 3, 3
  03c5edc  lbzx 3, 4, 3
  03c5ee0  cmpwi 3, 255
  03c5ee4  bf 2, 0x3c5ef8
  03c5ee8  ori 3, 31, 0
  03c5eec  bl 0xefb38
  03c5ef0  nop
  03c5ef4  b 0x3c6530
  03c5ef8  lwz 4, 36(31)
  03c5efc  li 3, -66
  03c5f00  lhz 5, 52(31)
  03c5f04  and 3, 5, 3
  03c5f08  ori 3, 3, 4096
  03c5f0c  lwz 4, 16(4)
  03c5f10  stw 4, 148(31)
  03c5f14  sth 3, 52(31)
  03c5f18  lhz 3, 36(28)
  03c5f1c  extsh 3, 3
  03c5f20  bl 0x502730
  03c5f24  nop
  03c5f28  lwz 4, 304(28)
  03c5f2c  ori 3, 27, 0
  03c5f30  stfs 1, 32(28)
  03c5f34  addic 4, 4, 16
  03c5f38  bl 0x5e7e98
  03c5f3c  nop
  03c5f40  li 3, 1
  03c5f44  stb 3, 32(31)
  03c5f48  lbz 3, 49(31)
  03c5f4c  cmpwi 3, 0
  03c5f50  bt 2, 0x3c5f8c
  03c5f54  lis 4, 149
  03c5f58  ori 3, 27, 0
  03c5f5c  addic 4, 4, 5376
  03c5f60  bl 0x5e8548
  03c5f64  nop
  03c5f68  lis 3, 60
  03c5f6c  addi 3, 3, 13956
  03c5f70  lfs 2, 152(3)
  03c5f74  fcmpu 0, 1, 2
  03c5f78  cror 6, 1, 2
  03c5f7c  bt 6, 0x3c5f8c
  03c5f80  ori 3, 31, 0
  03c5f84  bl 0x106360
  03c5f88  nop
  03c5f8c  lwz 3, 640(28)
  03c5f90  cmpwi 6, 3, -1
  03c5f94  bt 26, 0x3c5fc8
  03c5f98  lis 30, 164
  03c5f9c  slwi 3, 3, 8
  03c5fa0  lwz 30, -28512(30)
  03c5fa4  addc 3, 30, 3
  03c5fa8  cmpwi 3, 0
  03c5fac  bt 2, 0x3c5fc8
  03c5fb0  clrldi 3, 3, 32
  03c5fb4  lbz 3, 32(3)
  03c5fb8  cmpwi 3, 254
  03c5fbc  cmpwi 1, 3, 253
  03c5fc0  bt 2, 0x3c5fc8
  03c5fc4  bf 6, 0x3c5fd4
  03c5fc8  li 3, -1
  03c5fcc  stw 3, 640(28)
  03c5fd0  b 0x3c60a4
  03c5fd4  bt 26, 0x3c60a4
  03c5fd8  lwz 3, 640(28)
  03c5fdc  li 25, 0
  03c5fe0  slwi 3, 3, 8
  03c5fe4  addc 30, 30, 3
  03c5fe8  stw 25, 384(1)
  03c5fec  clrldi 30, 30, 32
  03c5ff0  stw 25, 388(1)
  03c5ff4  stw 25, 392(1)
  03c5ff8  stw 25, 396(1)
  03c5ffc  lhz 3, 166(30)
  03c6000  cmpwi 3, 821
  03c6004  cmpwi 1, 3, 1210
  03c6008  bt 2, 0x3c6010
  03c600c  bf 6, 0x3c607c
  03c6010  lwz 3, 304(28)
  03c6014  lwz 3, 0(3)
  03c6018  cmpwi 3, 0
  03c601c  bf 1, 0x3c607c
  03c6020  ori 26, 25, 0
  03c6024  ori 29, 26, 0
  03c6028  stw 25, 400(1)
  03c602c  addic 6, 1, 400
  03c6030  stw 25, 404(1)
  03c6034  ori 3, 31, 0
  03c6038  stw 25, 408(1)
  03c603c  ori 8, 6, 0
  03c6040  stw 25, 412(1)
  03c6044  lwz 4, 304(28)
  03c6048  addc 4, 4, 26
  03c604c  addic 5, 4, 16
  03c6050  ori 4, 30, 0
  03c6054  clrldi 5, 5, 32
  03c6058  ori 7, 5, 0
  03c605c  bl 0x1122e0
  03c6060  nop
  03c6064  lwz 3, 304(28)
  03c6068  addic 29, 29, 1
  03c606c  addic 26, 26, 16
  03c6070  lwz 3, 0(3)
  03c6074  cmpw 29, 3
  03c6078  bt 0, 0x3c6028
  03c607c  addic 6, 31, 64
  03c6080  addic 8, 1, 384
  03c6084  ori 3, 31, 0
  03c6088  ori 4, 30, 0
  03c608c  ori 5, 27, 0
  03c6090  ori 7, 27, 0
  03c6094  bl 0x1122e0
  03c6098  nop
  03c609c  lfs 1, 392(1)
  03c60a0  stfs 1, 72(31)
  03c60a4  lbz 3, 32(31)
  03c60a8  cmpwi 1, 3, 13
  03c60ac  cmpwi 3, 12
  03c60b0  cror 2, 2, 6
  03c60b4  bt 2, 0x3c62b4
  03c60b8  cmpwi 3, 14
  03c60bc  bt 2, 0x3c62b4
  03c60c0  cmpwi 3, 11
  03c60c4  bt 2, 0x3c62b4
  03c60c8  lis 4, 60
  03c60cc  cmpwi 3, 10
  03c60d0  addi 4, 4, 13956
  03c60d4  lfs 1, 120(4)
  03c60d8  fmr 30, 1
  03c60dc  bt 2, 0x3c60fc
  03c60e0  lis 3, 60
  03c60e4  lfs 1, 232(28)
  03c60e8  lis 4, 114
  03c60ec  addi 3, 3, 13956
  03c60f0  lfs 2, 156(3)
  03c60f4  lfs 3, -3048(4)
  03c60f8  fmadds 1, 3, 2, 1
  03c60fc  fsubs 2, 1, 29
  03c6100  stfs 1, 232(28)
  03c6104  lis 3, 60
  03c6108  lfs 1, 24(31)
  03c610c  li 4, 0
  03c6110  addi 5, 3, 13956
  03c6114  ori 3, 27, 0
  03c6118  fsubs 1, 1, 2
  03c611c  stfs 1, 24(31)
  03c6120  lfs 1, 76(5)
  03c6124  bl 0xffb70
  03c6128  nop
  03c612c  lfs 2, 24(31)
  03c6130  fmr 31, 1
  03c6134  fsubs 1, 2, 29
  03c6138  fcmpu 0, 1, 31
  03c613c  stfs 1, 24(31)
  03c6140  cror 6, 1, 2
  03c6144  bt 6, 0x3c6238
  03c6148  lis 30, 161
  03c614c  addic 30, 30, 2368
  03c6150  lwz 3, 24(30)
  03c6154  cmpwi 3, 0
  03c6158  bt 2, 0x3c618c
  03c615c  bl 0x1122ac
  03c6160  nop
  03c6164  cmpwi 3, 0
  03c6168  bt 2, 0x3c618c
  03c616c  lis 3, 164
  03c6170  lwz 4, 24(30)
  03c6174  lwz 3, -28512(3)
  03c6178  subc 3, 4, 3
  03c617c  srawi 3, 3, 8
  03c6180  addze 3, 3
  03c6184  stw 3, 640(28)
  03c6188  b 0x3c61c8
  03c618c  lwz 3, 640(28)
  03c6190  cmpwi 3, -1
  03c6194  bt 2, 0x3c61c8
  03c6198  lis 4, 164
  03c619c  slwi 3, 3, 8
  03c61a0  lwz 4, -28512(4)
  03c61a4  addc 3, 4, 3
  03c61a8  clrldi 3, 3, 32
  03c61ac  lhz 3, 166(3)
  03c61b0  cmpwi 1, 3, 1210
  03c61b4  cmpwi 3, 821
  03c61b8  cror 2, 2, 6
  03c61bc  bt 2, 0x3c61c8
  03c61c0  li 3, -1
  03c61c4  stw 3, 640(28)
  03c61c8  lwz 3, 640(28)
  03c61cc  stfs 31, 24(31)
  03c61d0  cmpwi 3, -1
  03c61d4  stfs 30, 232(28)
  03c61d8  bt 2, 0x3c62b4
  03c61dc  lfs 1, 72(31)
  03c61e0  lfs 2, 64(30)
  03c61e4  lfs 3, 72(30)
  03c61e8  stfs 2, 48(1)
  03c61ec  stfs 3, 56(1)
  03c61f0  lfs 2, 64(31)
  03c61f4  stfs 1, 88(1)
  03c61f8  stfs 2, 80(1)
  03c61fc  lfs 2, 68(30)
  03c6200  lfs 3, 76(30)
  03c6204  stfs 2, 52(1)
  03c6208  stfs 3, 60(1)
  03c620c  lfs 2, 68(31)
  03c6210  lfs 3, 76(31)
  03c6214  stfs 2, 84(1)
  03c6218  stfs 3, 92(1)
  03c621c  ld 3, 48(1)
  03c6220  ld 4, 56(1)
  03c6224  ld 8, 88(1)
  03c6228  ld 7, 80(1)
  03c622c  bl 0x113288
  03c6230  nop
  03c6234  b 0x3c62b4
  03c6238  lis 3, 60
  03c623c  addi 3, 3, 13956
  03c6240  lfs 2, 116(3)
  03c6244  fadds 2, 31, 2
  03c6248  fcmpu 0, 1, 2
  03c624c  cror 6, 0, 2
  03c6250  bt 6, 0x3c62b4
  03c6254  li 3, 10
  03c6258  bl 0x5e7e18
  03c625c  nop
  03c6260  ori 6, 3, 0
  03c6264  li 4, 11
  03c6268  ori 3, 31, 0
  03c626c  li 5, 0
  03c6270  bl 0xfddc0
  03c6274  nop
  03c6278  li 4, 11
  03c627c  addic 3, 28, 112
  03c6280  stb 4, 32(31)
  03c6284  bl 0x5e7e70
  03c6288  nop
  03c628c  lfs 1, 232(28)
  03c6290  lis 3, 60
  03c6294  fneg 1, 1
  03c6298  addi 3, 3, 13956
  03c629c  lis 4, 114
  03c62a0  stfs 1, 120(28)
  03c62a4  lfs 1, 160(3)
  03c62a8  lfs 2, -3048(4)
  03c62ac  fmuls 1, 2, 1
  03c62b0  stfs 1, 128(28)
  03c62b4  lbz 3, 610(28)
  03c62b8  cmpwi 3, 0
  03c62bc  bf 2, 0x3c6530
  03c62c0  lis 4, 149
  03c62c4  ori 3, 27, 0
  03c62c8  addic 4, 4, 5376
  03c62cc  bl 0x5e8588
  03c62d0  nop
  03c62d4  lis 3, 60
  03c62d8  addi 3, 3, 13956
  03c62dc  lfs 2, 164(3)
  03c62e0  fcmpu 0, 1, 2
  03c62e4  cror 6, 1, 2
  03c62e8  bt 6, 0x3c6530
  03c62ec  lis 3, 161
  03c62f0  lwz 3, 1808(3)
  03c62f4  lhz 4, 650(28)
  03c62f8  clrlwi 3, 3, 29
  03c62fc  extsh 4, 4
  03c6300  cmpw 3, 4
  03c6304  bf 2, 0x3c6530
  03c6308  lis 3, 60
  03c630c  lwz 4, 304(28)
  03c6310  addic 5, 1, 416
  03c6314  addi 3, 3, 13956
  03c6318  lis 30, 16544
  03c631c  addic 6, 1, 596
  03c6320  addic 7, 1, 600
  03c6324  li 9, 0
  03c6328  lfs 31, 120(3)
  03c632c  lfs 1, 112(3)
  03c6330  lfs 2, 116(3)
  03c6334  fmr 3, 31
  03c6338  ori 3, 4, 0
  03c633c  ori 4, 27, 0
  03c6340  bl 0x10d7a0
  03c6344  nop
  03c6348  lwz 3, 24(31)
  03c634c  lfs 1, 24(31)
  03c6350  srawi 4, 3, 31
  03c6354  srwi 5, 4, 1
  03c6358  xor 3, 5, 3
  03c635c  subc 3, 3, 4
  03c6360  cmpw 3, 30
  03c6364  bt 0, 0x3c6388
  03c6368  lis 3, 60
  03c636c  lfs 2, 424(1)
  03c6370  addi 3, 3, 13956
  03c6374  lfs 3, 64(3)
  03c6378  fsubs 2, 2, 3
  03c637c  fcmpu 0, 1, 2
  03c6380  cror 6, 1, 2
  03c6384  bt 6, 0x3c6530
  03c6388  addic 29, 1, 432
  03c638c  ori 4, 27, 0
  03c6390  ori 3, 29, 0
  03c6394  bl 0x5e7e98
  03c6398  nop
  03c639c  lis 3, 60
  03c63a0  lfs 1, 440(1)
  03c63a4  li 10, 6
  03c63a8  addi 6, 3, 13956
  03c63ac  fmr 2, 31
  03c63b0  li 11, 1
  03c63b4  fmr 3, 29
  03c63b8  li 12, -1
  03c63bc  li 7, 0
  03c63c0  addic 30, 28, 64
  03c63c4  lfs 4, 104(6)
  03c63c8  std 10, 144(1)
  03c63cc  ori 4, 30, 0
  03c63d0  fadds 5, 1, 4
  03c63d4  std 11, 160(1)
  03c63d8  std 11, 168(1)
  03c63dc  li 8, 5
  03c63e0  std 12, 176(1)
  03c63e4  ori 3, 31, 0
  03c63e8  std 7, 184(1)
  03c63ec  fmr 1, 31
  03c63f0  ori 5, 29, 0
  03c63f4  fmr 6, 4
  03c63f8  li 9, 2
  03c63fc  li 10, 4
  03c6400  stfs 5, 440(1)
  03c6404  lfs 5, 124(6)
  03c6408  lfs 7, 48(6)
  03c640c  bl 0x10e030
  03c6410  nop
  03c6414  lis 4, 161
  03c6418  addic 26, 31, 64
  03c641c  fmr 1, 31
  03c6420  addic 29, 4, 23856
  03c6424  ori 3, 31, 0
  03c6428  li 4, 1744
  03c642c  ori 10, 29, 0
  03c6430  std 29, 112(1)
  03c6434  ori 5, 27, 0
  03c6438  std 29, 120(1)
  03c643c  ori 6, 26, 0
  03c6440  li 7, 0
  03c6444  li 8, 0
  03c6448  bl 0x11a560
  03c644c  nop
  03c6450  std 29, 112(1)
  03c6454  ori 3, 31, 0
  03c6458  std 29, 120(1)
  03c645c  li 4, 1745
  03c6460  ori 10, 29, 0
  03c6464  fmr 1, 31
  03c6468  ori 5, 27, 0
  03c646c  ori 6, 26, 0
  03c6470  li 7, 0
  03c6474  li 8, 0
  03c6478  bl 0x11a560
  03c647c  nop
  03c6480  ori 3, 31, 0
  03c6484  std 29, 112(1)
  03c6488  li 4, 1746
  03c648c  fmr 1, 31
  03c6490  ori 10, 29, 0
  03c6494  std 29, 120(1)
  03c6498  ori 5, 27, 0
  03c649c  ori 6, 26, 0
  03c64a0  li 7, 0
  03c64a4  li 8, 0
  03c64a8  bl 0x11a560
  03c64ac  nop
  03c64b0  ori 3, 31, 0
  03c64b4  li 4, 512
  03c64b8  li 5, -1
  03c64bc  bl 0xfd8d0
  03c64c0  nop
  03c64c4  lwz 3, 612(28)
  03c64c8  cmpwi 3, -1
  03c64cc  bf 2, 0x3c64e0
  03c64d0  ori 3, 31, 0
  03c64d4  bl 0xefb38
  03c64d8  nop
  03c64dc  b 0x3c6530
  03c64e0  lwz 4, 304(28)
  03c64e4  ori 3, 30, 0
  03c64e8  lfs 1, 16(4)
  03c64ec  stfs 1, 16(31)
  03c64f0  lfs 1, 20(4)
  03c64f4  stfs 1, 20(31)
  03c64f8  lfs 1, 24(4)
  03c64fc  stfs 1, 24(31)
  03c6500  lfs 1, 28(4)
  03c6504  stfs 1, 28(31)
  03c6508  bl 0x5e7e70
  03c650c  nop
  03c6510  lhz 3, 52(31)
  03c6514  li 4, 0
  03c6518  li 5, 14
  03c651c  ori 3, 3, 65
  03c6520  stw 4, 232(28)
  03c6524  stw 4, 148(31)
  03c6528  sth 3, 52(31)
  03c652c  stb 5, 32(31)
  03c6530  ld 0, 736(1)
  03c6534  mtlr 0
  03c6538  lfd 28, 688(1)
  03c653c  lfd 29, 696(1)
  03c6540  lfd 30, 704(1)
  03c6544  lfd 31, 712(1)
  03c6548  ld 25, 632(1)
  03c654c  ld 26, 640(1)
  03c6550  ld 27, 648(1)
  03c6554  ld 28, 656(1)
  03c6558  ld 29, 664(1)
  03c655c  ld 30, 672(1)
  03c6560  ld 31, 680(1)
  03c6564  addi 1, 1, 720
  03c6568  blr
