# game/update/moby554.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M554_003b1fd0:   # 0x3b1fd0, 0x220 bytes
  03b1fd0  stdu 1, -336(1)
  03b1fd4  mflr 0
  03b1fd8  std 0, 352(1)
  03b1fdc  lfs 1, 20(4)
  03b1fe0  lfs 2, 20(3)
  03b1fe4  li 5, 0
  03b1fe8  lfs 3, 16(4)
  03b1fec  lis 6, 16256
  03b1ff0  fsubs 1, 1, 2
  03b1ff4  lfs 4, 16(3)
  03b1ff8  lfs 5, 24(4)
  03b1ffc  lis 7, 132
  03b2000  fsubs 3, 3, 4
  03b2004  lfs 6, 24(3)
  03b2008  lfs 7, 28(4)
  03b200c  fsubs 5, 5, 6
  03b2010  stw 5, 136(1)
  03b2014  lis 4, 132
  03b2018  stw 5, 140(1)
  03b201c  stfs 7, 124(1)
  03b2020  fneg 8, 1
  03b2024  stfs 1, 116(1)
  03b2028  stw 5, 156(1)
  03b202c  stfs 3, 132(1)
  03b2030  stfs 3, 112(1)
  03b2034  stw 5, 148(1)
  03b2038  stw 5, 144(1)
  03b203c  stfs 5, 120(1)
  03b2040  stfs 8, 128(1)
  03b2044  lfs 1, 22448(4)
  03b2048  stw 6, 152(1)
  03b204c  fadds 1, 6, 1
  03b2050  lfs 3, 28(3)
  03b2054  stfs 4, 160(1)
  03b2058  stfs 6, 168(1)
  03b205c  stfs 2, 164(1)
  03b2060  stfs 3, 172(1)
  03b2064  lwz 3, 22456(7)
  03b2068  stw 6, 172(1)
  03b206c  extsw 3, 3
  03b2070  std 31, 328(1)
  03b2074  std 30, 320(1)
  03b2078  stfs 1, 168(1)
  03b207c  bl 0x685c4
  03b2080  nop
  03b2084  std 3, 296(1)
  03b2088  li 3, 0
  03b208c  lis 9, 0
  03b2090  li 4, 0
  03b2094  li 5, 1
  03b2098  li 6, 1
  03b209c  li 7, 1
  03b20a0  li 8, 0
  03b20a4  ori 9, 9, 65424
  03b20a8  bl 0x502fd4
  03b20ac  nop
  03b20b0  std 3, 304(1)
  03b20b4  li 4, 0
  03b20b8  li 3, 0
  03b20bc  li 5, 0
  03b20c0  li 6, 0
  03b20c4  li 7, 0
  03b20c8  li 8, 0
  03b20cc  bl 0x502f08
  03b20d0  nop
  03b20d4  std 3, 288(1)
  03b20d8  lis 3, 269
  03b20dc  lis 4, 269
  03b20e0  lis 5, 132
  03b20e4  lis 6, 132
  03b20e8  li 7, 128
  03b20ec  lwz 8, -24760(3)
  03b20f0  lwz 3, -24764(4)
  03b20f4  lwz 4, 22336(5)
  03b20f8  lwz 6, 22340(6)
  03b20fc  ori 5, 8, 0
  03b2100  bl 0x502ea8
  03b2104  nop
  03b2108  std 3, 312(1)
  03b210c  lis 6, 132
  03b2110  li 3, 4
  03b2114  lis 5, 132
  03b2118  lis 9, 132
  03b211c  mtctr 3
  03b2120  ori 8, 1, 0
  03b2124  ori 7, 1, 0
  03b2128  addic 5, 5, 22420
  03b212c  addic 6, 6, 22416
  03b2130  addic 4, 1, 176
  03b2134  addic 3, 9, 22352
  03b2138  lis 9, 132
  03b213c  lfs 1, 0(6)
  03b2140  lfs 2, 0(5)
  03b2144  addic 6, 6, 8
  03b2148  stfs 1, 256(8)
  03b214c  addic 5, 5, 8
  03b2150  lwz 9, 22460(9)
  03b2154  stfs 2, 260(8)
  03b2158  stw 9, 240(7)
  03b215c  addic 8, 8, 8
  03b2160  lfs 1, 0(3)
  03b2164  addic 7, 7, 4
  03b2168  stfs 1, 0(4)
  03b216c  lfs 1, 4(3)
  03b2170  stfs 1, 4(4)
  03b2174  lfs 1, 8(3)
  03b2178  stfs 1, 8(4)
  03b217c  lfs 1, 12(3)
  03b2180  addic 3, 3, 16
  03b2184  stfs 1, 12(4)
  03b2188  addic 4, 4, 16
  03b218c  bdnz 0x3b2138
  03b2190  lis 31, 161
  03b2194  li 30, 0
  03b2198  addic 31, 31, 24396
  03b219c  addic 3, 1, 176
  03b21a0  addic 4, 1, 112
  03b21a4  lwz 6, 28(31)
  03b21a8  li 5, 0
  03b21ac  li 7, 9
  03b21b0  bl 0x72280
  03b21b4  nop
  03b21b8  lis 3, 132
  03b21bc  lfs 1, 168(1)
  03b21c0  addic 30, 30, 1
  03b21c4  cmpwi 30, 4
  03b21c8  lfs 2, 22452(3)
  03b21cc  fadds 1, 1, 2
  03b21d0  stfs 1, 168(1)
  03b21d4  bt 0, 0x3b219c
  03b21d8  ld 0, 352(1)
  03b21dc  mtlr 0
  03b21e0  ld 30, 320(1)
  03b21e4  ld 31, 328(1)
  03b21e8  addi 1, 1, 336
  03b21ec  blr

M554_003b21f0:   # 0x3b21f0, 0xbc bytes
  03b21f0  stdu 1, -128(1)
  03b21f4  mflr 0
  03b21f8  std 0, 144(1)
  03b21fc  lis 4, 165
  03b2200  lbz 3, 33(3)
  03b2204  addic 4, 4, -28284
  03b2208  std 31, 120(1)
  03b220c  slwi 3, 3, 2
  03b2210  lwzx 31, 4, 3
  03b2214  cmpwi 31, 0
  03b2218  bt 2, 0x3b2298
  03b221c  lis 3, 164
  03b2220  lhz 4, 0(31)
  03b2224  rlwinm 4, 4, 8, 9, 23
  03b2228  lwz 3, -28512(3)
  03b222c  addc 6, 3, 4
  03b2230  clrldi 6, 6, 32
  03b2234  lhz 3, 166(6)
  03b2238  cmpwi 3, 552
  03b223c  bf 2, 0x3b2284
  03b2240  lis 4, 161
  03b2244  lwz 5, 120(6)
  03b2248  lwz 4, 1808(4)
  03b224c  lwz 3, 4(5)
  03b2250  cmpw 3, 4
  03b2254  bt 2, 0x3b2284
  03b2258  lwz 3, 0(5)
  03b225c  cmpwi 3, 0
  03b2260  bt 2, 0x3b2284
  03b2264  ori 8, 3, 0
  03b2268  ori 3, 6, 0
  03b226c  ori 7, 4, 0
  03b2270  ori 4, 8, 0
  03b2274  lwz 6, 120(8)
  03b2278  stw 7, 4(5)
  03b227c  stw 7, 4(6)
  03b2280  bl 0x3b1fd0
  03b2284  lhz 3, 0(31)
  03b2288  addic 31, 31, 2
  03b228c  extsh 3, 3
  03b2290  cmpwi 3, 0
  03b2294  bf 0, 0x3b221c
  03b2298  ld 0, 144(1)
  03b229c  mtlr 0
  03b22a0  ld 31, 120(1)
  03b22a4  addi 1, 1, 128
  03b22a8  blr

M554_003b22ac:   # 0x3b22ac, 0x14 bytes
  03b22ac  lis 3, 132
  03b22b0  lis 4, 1
  03b22b4  addic 3, 3, 22468
  03b22b8  stw 4, 72(3)
  03b22bc  blr

M554_003b22e0:   # 0x3b22e0, 0x580 bytes
  03b22e0  stdu 1, -240(1)
  03b22e4  mflr 0
  03b22e8  std 0, 256(1)
  03b22ec  stfd 29, 216(1)
  03b22f0  stfd 30, 224(1)
  03b22f4  stfd 31, 232(1)
  03b22f8  std 27, 176(1)
  03b22fc  lwz 27, 120(3)
  03b2300  std 28, 184(1)
  03b2304  lis 4, 165
  03b2308  addic 28, 4, 7136
  03b230c  lwz 4, 172(27)
  03b2310  lhz 5, 186(27)
  03b2314  slwi 4, 4, 2
  03b2318  lfs 1, 20(3)
  03b231c  extsh 6, 5
  03b2320  extsw 4, 4
  03b2324  sldi 6, 6, 4
  03b2328  lwzx 28, 28, 4
  03b232c  lfs 3, 16(3)
  03b2330  addc 4, 28, 6
  03b2334  clrldi 4, 4, 32
  03b2338  lfs 30, 20(4)
  03b233c  lfs 29, 16(4)
  03b2340  fsubs 4, 30, 1
  03b2344  fsubs 5, 29, 3
  03b2348  lfs 31, 24(4)
  03b234c  lfs 6, 24(3)
  03b2350  fsubs 7, 31, 6
  03b2354  lfs 9, 168(27)
  03b2358  fmuls 2, 4, 4
  03b235c  lis 4, 59
  03b2360  std 26, 168(1)
  03b2364  addi 4, 4, 8896
  03b2368  fmadds 2, 5, 5, 2
  03b236c  std 31, 208(1)
  03b2370  addic 26, 3, 72
  03b2374  ori 31, 3, 0
  03b2378  fmadds 2, 7, 7, 2
  03b237c  fsqrts 8, 2
  03b2380  lfs 2, 0(4)
  03b2384  extsh 4, 5
  03b2388  sldi 4, 4, 4
  03b238c  addc 4, 28, 4
  03b2390  clrldi 4, 4, 32
  03b2394  std 29, 192(1)
  03b2398  lis 5, 115
  03b239c  li 29, 0
  03b23a0  std 30, 200(1)
  03b23a4  addic 5, 5, 22784
  03b23a8  ori 30, 29, 0
  03b23ac  fdivs 9, 9, 8
  03b23b0  fsub 10, 2, 8
  03b23b4  fsub 11, 2, 8
  03b23b8  fsub 12, 2, 8
  03b23bc  fsub 13, 8, 2
  03b23c0  fsub 0, 8, 2
  03b23c4  fsub 8, 8, 2
  03b23c8  fmuls 7, 7, 9
  03b23cc  fmuls 4, 4, 9
  03b23d0  fmuls 5, 5, 9
  03b23d4  fsel 9, 10, 2, 7
  03b23d8  fsel 10, 11, 2, 4
  03b23dc  fsel 11, 12, 2, 5
  03b23e0  fsel 7, 13, 9, 7
  03b23e4  fsel 4, 0, 10, 4
  03b23e8  fsel 5, 8, 11, 5
  03b23ec  fadds 6, 6, 7
  03b23f0  fadds 1, 1, 4
  03b23f4  fadds 3, 3, 5
  03b23f8  stfs 6, 24(3)
  03b23fc  stfs 1, 20(3)
  03b2400  stfs 3, 16(3)
  03b2404  lfs 4, 16(4)
  03b2408  lfs 5, 20(4)
  03b240c  fsubs 3, 4, 3
  03b2410  fsubs 1, 5, 1
  03b2414  fabs 6, 3
  03b2418  fabs 5, 1
  03b241c  stfs 3, 120(1)
  03b2420  stfs 1, 124(1)
  03b2424  fsubs 1, 6, 5
  03b2428  stfs 1, 128(1)
  03b242c  lwz 3, 120(1)
  03b2430  lfs 1, 120(1)
  03b2434  lwz 4, 124(1)
  03b2438  fabs 3, 1
  03b243c  lfs 1, 124(1)
  03b2440  rlwinm 4, 4, 3, 29, 29
  03b2444  fabs 7, 1
  03b2448  lfs 1, 188(27)
  03b244c  lwz 6, 128(1)
  03b2450  lfs 4, 128(1)
  03b2454  rlwimi 4, 6, 2, 30, 30
  03b2458  fsub 8, 4, 2
  03b245c  fsub 9, 4, 2
  03b2460  rlwimi 4, 3, 4, 28, 28
  03b2464  ori 3, 5, 0
  03b2468  rlwimi 3, 4, 2, 26, 28
  03b246c  slwi 4, 4, 2
  03b2470  clrldi 3, 3, 32
  03b2474  fsel 5, 8, 3, 5
  03b2478  lfsx 4, 5, 4
  03b247c  lfs 3, 4(3)
  03b2480  fsel 6, 9, 7, 6
  03b2484  fcmpu 0, 5, 2
  03b2488  bt 1, 0x3b2490
  03b248c  b 0x3b25b4
  03b2490  fsubs 7, 6, 5
  03b2494  fadds 5, 6, 5
  03b2498  addic 6, 1, 16
  03b249c  li 3, 2
  03b24a0  addic 4, 6, 132
  03b24a4  addic 5, 6, 116
  03b24a8  mtctr 3
  03b24ac  fdivs 5, 7, 5
  03b24b0  fmuls 7, 5, 5
  03b24b4  stfs 5, 144(1)
  03b24b8  stfs 5, 136(1)
  03b24bc  stfs 5, 140(1)
  03b24c0  stfs 5, 132(1)
  03b24c4  lfs 8, 144(1)
  03b24c8  lfs 9, 136(1)
  03b24cc  lfs 10, 140(1)
  03b24d0  fmuls 5, 7, 7
  03b24d4  fmuls 9, 9, 7
  03b24d8  fmuls 8, 8, 5
  03b24dc  fmuls 6, 5, 5
  03b24e0  fmuls 5, 10, 5
  03b24e4  stfs 9, 136(1)
  03b24e8  fmuls 7, 8, 7
  03b24ec  stfs 5, 140(1)
  03b24f0  stfs 7, 144(1)
  03b24f4  lfs 5, 116(6)
  03b24f8  fmuls 5, 5, 6
  03b24fc  stfs 5, 132(6)
  03b2500  lfs 5, 4(5)
  03b2504  addic 5, 5, 8
  03b2508  fmuls 5, 5, 6
  03b250c  addic 6, 6, 8
  03b2510  stfs 5, 4(4)
  03b2514  addic 4, 4, 8
  03b2518  bdnz 0x3b24f4
  03b251c  ori 7, 1, 0
  03b2520  li 4, 4
  03b2524  lis 6, 115
  03b2528  addic 5, 7, 132
  03b252c  mtctr 4
  03b2530  addic 6, 6, 22752
  03b2534  ori 4, 5, 0
  03b2538  lfs 5, 132(7)
  03b253c  lfs 6, 0(6)
  03b2540  fmuls 5, 5, 6
  03b2544  lfs 6, 4(6)
  03b2548  addic 6, 6, 8
  03b254c  stfs 5, 132(7)
  03b2550  lfs 5, 4(5)
  03b2554  addic 7, 7, 8
  03b2558  fmuls 5, 5, 6
  03b255c  stfs 5, 4(5)
  03b2560  addic 5, 5, 8
  03b2564  bdnz 0x3b2538
  03b2568  ori 5, 3, 0
  03b256c  ori 3, 1, 0
  03b2570  mtctr 5
  03b2574  lfs 5, 132(3)
  03b2578  fadds 2, 2, 5
  03b257c  lfs 5, 4(4)
  03b2580  addic 3, 3, 16
  03b2584  lfs 6, 8(4)
  03b2588  lfs 7, 12(4)
  03b258c  addic 4, 4, 16
  03b2590  fadds 2, 2, 5
  03b2594  fadds 2, 2, 6
  03b2598  fadds 2, 2, 7
  03b259c  bdnz 0x3b2574
  03b25a0  lis 3, 59
  03b25a4  addi 3, 3, 8896
  03b25a8  lfs 5, 4(3)
  03b25ac  fadds 2, 2, 5
  03b25b0  fmadds 2, 2, 4, 3
  03b25b4  fmr 3, 1
  03b25b8  fmr 1, 2
  03b25bc  fmr 2, 3
  03b25c0  bl 0x502578
  03b25c4  nop
  03b25c8  lis 3, 59
  03b25cc  lis 4, 114
  03b25d0  addi 3, 3, 8896
  03b25d4  lis 6, 114
  03b25d8  addic 5, 27, 164
  03b25dc  lfs 2, 8(3)
  03b25e0  lfs 3, -3048(4)
  03b25e4  lfs 4, 12(3)
  03b25e8  fmuls 2, 3, 2
  03b25ec  lfs 5, -3052(6)
  03b25f0  ori 3, 26, 0
  03b25f4  fmuls 4, 5, 4
  03b25f8  fmr 3, 2
  03b25fc  bl 0x10a2e0
  03b2600  nop
  03b2604  lhz 3, 184(27)
  03b2608  extsh 3, 3
  03b260c  cmpwi 3, 0
  03b2610  bf 1, 0x3b2704
  03b2614  lfs 1, 20(31)
  03b2618  lfs 2, 16(31)
  03b261c  fsubs 1, 30, 1
  03b2620  lfs 3, 24(31)
  03b2624  fsubs 2, 29, 2
  03b2628  fsubs 3, 31, 3
  03b262c  lis 3, 59
  03b2630  addi 3, 3, 8896
  03b2634  fmuls 1, 1, 1
  03b2638  fmadds 1, 2, 2, 1
  03b263c  lfs 2, 16(3)
  03b2640  fmadds 1, 3, 3, 1
  03b2644  lfs 3, 168(27)
  03b2648  lwz 3, 0(28)
  03b264c  fmuls 2, 3, 2
  03b2650  fsqrts 1, 1
  03b2654  fcmpu 0, 1, 2
  03b2658  cror 6, 1, 2
  03b265c  bt 6, 0x3b2680
  03b2660  lhz 4, 186(27)
  03b2664  lwz 3, 0(28)
  03b2668  addic 4, 4, 1
  03b266c  extsh 5, 4
  03b2670  cmpw 5, 3
  03b2674  sth 4, 186(27)
  03b2678  bf 2, 0x3b2680
  03b267c  li 29, 1
  03b2680  slwi 3, 3, 4
  03b2684  lfs 1, 20(31)
  03b2688  addc 3, 28, 3
  03b268c  lfs 2, 16(31)
  03b2690  clrldi 3, 3, 32
  03b2694  lis 4, 114
  03b2698  lis 6, 114
  03b269c  addic 5, 27, 168
  03b26a0  lfs 3, 4(3)
  03b26a4  lfs 4, 0(3)
  03b26a8  fsubs 1, 1, 3
  03b26ac  fsubs 2, 2, 4
  03b26b0  lfs 3, 8(3)
  03b26b4  lfs 4, 24(31)
  03b26b8  lis 3, 59
  03b26bc  stw 30, 112(1)
  03b26c0  fsubs 3, 4, 3
  03b26c4  addi 3, 3, 8896
  03b26c8  fmuls 1, 1, 1
  03b26cc  lfs 4, 20(3)
  03b26d0  lfs 5, -3048(4)
  03b26d4  lfs 6, 24(3)
  03b26d8  lfs 7, -3052(6)
  03b26dc  addic 3, 1, 112
  03b26e0  fmadds 1, 2, 2, 1
  03b26e4  fmuls 2, 5, 4
  03b26e8  fmuls 4, 7, 6
  03b26ec  fmadds 1, 3, 3, 1
  03b26f0  fmr 3, 2
  03b26f4  fsqrts 1, 1
  03b26f8  bl 0x109c30
  03b26fc  nop
  03b2700  b 0x3b27dc
  03b2704  lfs 1, 20(31)
  03b2708  lfs 2, 16(31)
  03b270c  fsubs 1, 30, 1
  03b2710  lfs 3, 24(31)
  03b2714  fsubs 2, 29, 2
  03b2718  fsubs 3, 31, 3
  03b271c  lis 3, 59
  03b2720  addi 3, 3, 8896
  03b2724  fmuls 1, 1, 1
  03b2728  fmadds 1, 2, 2, 1
  03b272c  lfs 2, 16(3)
  03b2730  fmadds 1, 3, 3, 1
  03b2734  lfs 3, 168(27)
  03b2738  fmuls 2, 3, 2
  03b273c  fsqrts 1, 1
  03b2740  fcmpu 0, 1, 2
  03b2744  cror 6, 1, 2
  03b2748  bt 6, 0x3b2768
  03b274c  lhz 3, 186(27)
  03b2750  addic 3, 3, -1
  03b2754  extsh 4, 3
  03b2758  cmpwi 4, -1
  03b275c  sth 3, 186(27)
  03b2760  bf 2, 0x3b2768
  03b2764  li 29, 1
  03b2768  lfs 1, 20(31)
  03b276c  lfs 2, 20(28)
  03b2770  lis 3, 59
  03b2774  lfs 3, 16(31)
  03b2778  lis 4, 114
  03b277c  fsubs 1, 1, 2
  03b2780  addi 3, 3, 8896
  03b2784  lfs 2, 16(28)
  03b2788  addic 5, 27, 168
  03b278c  fsubs 2, 3, 2
  03b2790  lfs 3, 24(28)
  03b2794  lfs 4, 24(31)
  03b2798  stw 30, 116(1)
  03b279c  fsubs 3, 4, 3
  03b27a0  lfs 4, 20(3)
  03b27a4  lfs 5, -3048(4)
  03b27a8  fmuls 1, 1, 1
  03b27ac  lis 4, 114
  03b27b0  lfs 6, 24(3)
  03b27b4  addic 3, 1, 116
  03b27b8  fmadds 1, 2, 2, 1
  03b27bc  fmuls 2, 5, 4
  03b27c0  lfs 4, -3052(4)
  03b27c4  fmuls 4, 4, 6
  03b27c8  fmadds 1, 3, 3, 1
  03b27cc  fmr 3, 2
  03b27d0  fsqrts 1, 1
  03b27d4  bl 0x109c30
  03b27d8  nop
  03b27dc  lhz 4, 186(27)
  03b27e0  lis 3, 16936
  03b27e4  extsh 4, 4
  03b27e8  sldi 4, 4, 4
  03b27ec  addc 4, 28, 4
  03b27f0  clrldi 4, 4, 32
  03b27f4  lwz 4, 28(4)
  03b27f8  cmpw 4, 3
  03b27fc  bf 2, 0x3b2804
  03b2800  stw 30, 188(27)
  03b2804  lfs 1, 192(27)
  03b2808  lfs 2, 168(27)
  03b280c  bl 0x502578
  03b2810  nop
  03b2814  addic 3, 27, 112
  03b2818  stfs 1, 192(27)
  03b281c  li 4, 0
  03b2820  bl 0x501980
  03b2824  nop
  03b2828  ori 3, 29, 0
  03b282c  ld 0, 256(1)
  03b2830  mtlr 0
  03b2834  lfd 29, 216(1)
  03b2838  lfd 30, 224(1)
  03b283c  lfd 31, 232(1)
  03b2840  ld 26, 168(1)
  03b2844  ld 27, 176(1)
  03b2848  ld 28, 184(1)
  03b284c  ld 29, 192(1)
  03b2850  ld 30, 200(1)
  03b2854  ld 31, 208(1)
  03b2858  addi 1, 1, 240
  03b285c  blr

M554_003b2868:   # 0x3b2868, 0x9c4 bytes
  03b2868  stdu 1, -320(1)
  03b286c  mflr 0
  03b2870  std 0, 336(1)
  03b2874  std 30, 304(1)
  03b2878  lwz 30, 120(3)
  03b287c  std 29, 296(1)
  03b2880  lfs 1, 16(3)
  03b2884  lis 29, 165
  03b2888  lfs 2, 20(3)
  03b288c  cmpwi 30, 0
  03b2890  fneg 1, 1
  03b2894  lfs 3, 24(3)
  03b2898  fneg 2, 2
  03b289c  addic 29, 29, 7136
  03b28a0  std 31, 312(1)
  03b28a4  lwz 4, 172(30)
  03b28a8  ori 31, 3, 0
  03b28ac  fneg 3, 3
  03b28b0  lfs 4, 28(3)
  03b28b4  slwi 4, 4, 2
  03b28b8  lfs 5, 64(3)
  03b28bc  std 28, 288(1)
  03b28c0  stfs 4, 124(1)
  03b28c4  extsw 28, 4
  03b28c8  lfs 4, 68(3)
  03b28cc  lwzx 28, 29, 28
  03b28d0  stfs 1, 112(1)
  03b28d4  stfs 2, 116(1)
  03b28d8  stfs 5, 128(1)
  03b28dc  stfs 3, 120(1)
  03b28e0  lfs 1, 72(3)
  03b28e4  stfs 4, 132(1)
  03b28e8  lfs 2, 76(3)
  03b28ec  stfs 1, 136(1)
  03b28f0  stfs 2, 140(1)
  03b28f4  bt 2, 0x3b320c
  03b28f8  lbz 3, 32(31)
  03b28fc  cmpwi 3, 1
  03b2900  cmpwi 1, 3, 3
  03b2904  cmpwi 6, 3, 2
  03b2908  cmpwi 7, 3, 0
  03b290c  bt 1, 0x3b2920
  03b2910  cmpwi 3, -1
  03b2914  bf 1, 0x3b31c4
  03b2918  bf 29, 0x3b292c
  03b291c  b 0x3b2c00
  03b2920  bf 25, 0x3b2be0
  03b2924  bf 5, 0x3b30bc
  03b2928  b 0x3b31c4
  03b292c  li 3, 255
  03b2930  li 4, -1
  03b2934  stb 3, 48(31)
  03b2938  lwz 3, 160(30)
  03b293c  stw 4, 196(30)
  03b2940  cmpwi 3, 0
  03b2944  bt 2, 0x3b31c4
  03b2948  ori 3, 31, 0
  03b294c  addic 5, 30, 96
  03b2950  li 4, 0
  03b2954  bl 0xf0ea8
  03b2958  nop
  03b295c  lwz 3, 172(30)
  03b2960  li 4, 1
  03b2964  lbz 7, 176(31)
  03b2968  slwi 3, 3, 2
  03b296c  lis 5, 151
  03b2970  extsw 3, 3
  03b2974  lis 6, 161
  03b2978  lwzx 29, 29, 3
  03b297c  stb 4, 32(31)
  03b2980  addic 3, 6, -13692
  03b2984  lwz 4, -25488(5)
  03b2988  addc 3, 7, 3
  03b298c  slwi 4, 4, 4
  03b2990  clrldi 3, 3, 32
  03b2994  extsw 4, 4
  03b2998  lbzx 3, 3, 4
  03b299c  cmpwi 3, 255
  03b29a0  bf 2, 0x3b29dc
  03b29a4  li 3, -1
  03b29a8  sth 3, 184(30)
  03b29ac  lwz 3, 0(29)
  03b29b0  addic 3, 3, -2
  03b29b4  sth 3, 186(30)
  03b29b8  lwz 3, 0(29)
  03b29bc  slwi 3, 3, 4
  03b29c0  addc 3, 29, 3
  03b29c4  clrldi 3, 3, 32
  03b29c8  lfs 4, 0(3)
  03b29cc  lfs 3, 4(3)
  03b29d0  lfs 2, 8(3)
  03b29d4  lfs 1, 12(3)
  03b29d8  b 0x3b29f8
  03b29dc  li 3, 1
  03b29e0  sth 3, 184(30)
  03b29e4  sth 3, 186(30)
  03b29e8  lfs 4, 16(29)
  03b29ec  lfs 3, 20(29)
  03b29f0  lfs 2, 24(29)
  03b29f4  lfs 1, 28(29)
  03b29f8  lhz 3, 186(30)
  03b29fc  stfs 4, 16(31)
  03b2a00  extsh 3, 3
  03b2a04  stfs 3, 20(31)
  03b2a08  stfs 2, 24(31)
  03b2a0c  sldi 3, 3, 4
  03b2a10  stfs 1, 28(31)
  03b2a14  addc 3, 29, 3
  03b2a18  clrldi 3, 3, 32
  03b2a1c  lis 4, 115
  03b2a20  lfs 1, 16(3)
  03b2a24  lfs 2, 20(3)
  03b2a28  fsubs 1, 1, 4
  03b2a2c  lis 3, 59
  03b2a30  fsubs 2, 2, 3
  03b2a34  addi 3, 3, 10336
  03b2a38  addic 4, 4, 22784
  03b2a3c  fabs 4, 1
  03b2a40  fabs 5, 2
  03b2a44  stfs 1, 168(1)
  03b2a48  stfs 2, 172(1)
  03b2a4c  fsubs 1, 4, 5
  03b2a50  stfs 1, 176(1)
  03b2a54  lwz 5, 168(1)
  03b2a58  lfs 3, 0(3)
  03b2a5c  lfs 1, 168(1)
  03b2a60  lwz 3, 172(1)
  03b2a64  lfs 2, 172(1)
  03b2a68  lwz 6, 176(1)
  03b2a6c  rlwinm 3, 3, 3, 29, 29
  03b2a70  fabs 6, 2
  03b2a74  lfs 2, 176(1)
  03b2a78  fabs 1, 1
  03b2a7c  rlwimi 3, 6, 2, 30, 30
  03b2a80  fsub 7, 2, 3
  03b2a84  rlwimi 3, 5, 4, 28, 28
  03b2a88  fsub 8, 2, 3
  03b2a8c  ori 5, 4, 0
  03b2a90  rlwimi 5, 3, 2, 26, 28
  03b2a94  slwi 3, 3, 2
  03b2a98  clrldi 5, 5, 32
  03b2a9c  fsel 5, 7, 1, 5
  03b2aa0  lfsx 1, 4, 3
  03b2aa4  lfs 2, 4(5)
  03b2aa8  fsel 4, 8, 6, 4
  03b2aac  fcmpu 0, 5, 3
  03b2ab0  bt 1, 0x3b2ab8
  03b2ab4  b 0x3b2bd8
  03b2ab8  fsubs 6, 4, 5
  03b2abc  fadds 4, 4, 5
  03b2ac0  addic 3, 1, 16
  03b2ac4  li 6, 2
  03b2ac8  addic 4, 3, 228
  03b2acc  addic 5, 3, 244
  03b2ad0  mtctr 6
  03b2ad4  fdivs 4, 6, 4
  03b2ad8  fmuls 5, 4, 4
  03b2adc  stfs 4, 256(1)
  03b2ae0  stfs 4, 248(1)
  03b2ae4  stfs 4, 252(1)
  03b2ae8  stfs 4, 244(1)
  03b2aec  lfs 7, 256(1)
  03b2af0  lfs 8, 248(1)
  03b2af4  lfs 9, 252(1)
  03b2af8  fmuls 6, 5, 5
  03b2afc  fmuls 8, 8, 5
  03b2b00  fmuls 7, 7, 6
  03b2b04  fmuls 4, 6, 6
  03b2b08  fmuls 6, 9, 6
  03b2b0c  stfs 8, 248(1)
  03b2b10  fmuls 5, 7, 5
  03b2b14  stfs 6, 252(1)
  03b2b18  stfs 5, 256(1)
  03b2b1c  lfs 5, 228(3)
  03b2b20  fmuls 5, 5, 4
  03b2b24  stfs 5, 244(3)
  03b2b28  lfs 5, 4(4)
  03b2b2c  addic 3, 3, 8
  03b2b30  addic 4, 4, 8
  03b2b34  fmuls 5, 5, 4
  03b2b38  stfs 5, 4(5)
  03b2b3c  addic 5, 5, 8
  03b2b40  bdnz 0x3b2b1c
  03b2b44  li 5, 4
  03b2b48  ori 3, 1, 0
  03b2b4c  mtctr 5
  03b2b50  lis 4, 115
  03b2b54  addic 5, 3, 244
  03b2b58  addic 4, 4, 22752
  03b2b5c  ori 7, 5, 0
  03b2b60  lfs 4, 244(3)
  03b2b64  lfs 5, 0(4)
  03b2b68  fmuls 4, 4, 5
  03b2b6c  lfs 5, 4(4)
  03b2b70  addic 4, 4, 8
  03b2b74  stfs 4, 244(3)
  03b2b78  lfs 4, 4(5)
  03b2b7c  addic 3, 3, 8
  03b2b80  fmuls 4, 4, 5
  03b2b84  stfs 4, 4(5)
  03b2b88  addic 5, 5, 8
  03b2b8c  bdnz 0x3b2b60
  03b2b90  ori 3, 1, 0
  03b2b94  mtctr 6
  03b2b98  lfs 4, 244(3)
  03b2b9c  fadds 3, 3, 4
  03b2ba0  lfs 4, 4(7)
  03b2ba4  addic 3, 3, 16
  03b2ba8  lfs 5, 8(7)
  03b2bac  lfs 6, 12(7)
  03b2bb0  addic 7, 7, 16
  03b2bb4  fadds 3, 3, 4
  03b2bb8  fadds 3, 3, 5
  03b2bbc  fadds 3, 3, 6
  03b2bc0  bdnz 0x3b2b98
  03b2bc4  lis 3, 59
  03b2bc8  addi 3, 3, 10336
  03b2bcc  lfs 4, 4(3)
  03b2bd0  fadds 3, 3, 4
  03b2bd4  fmadds 3, 3, 1, 2
  03b2bd8  stfs 3, 72(31)
  03b2bdc  b 0x3b31c4
  03b2be0  lis 3, 151
  03b2be4  addic 3, 3, -25376
  03b2be8  lwz 3, 764(3)
  03b2bec  cmpw 3, 31
  03b2bf0  bt 2, 0x3b31c4
  03b2bf4  li 3, 1
  03b2bf8  stb 3, 32(31)
  03b2bfc  b 0x3b31c4
  03b2c00  lhz 3, 184(30)
  03b2c04  extsh 3, 3
  03b2c08  cmpwi 3, 0
  03b2c0c  bf 1, 0x3b2e54
  03b2c10  lwz 3, 180(30)
  03b2c14  cmpwi 3, -1
  03b2c18  bt 2, 0x3b2e54
  03b2c1c  lis 5, 151
  03b2c20  extsw 4, 3
  03b2c24  addic 3, 5, -25376
  03b2c28  addic 3, 3, 128
  03b2c2c  bl 0x110b70
  03b2c30  nop
  03b2c34  cmpwi 3, 0
  03b2c38  bt 2, 0x3b2e54
  03b2c3c  li 3, -1
  03b2c40  lwz 4, 0(28)
  03b2c44  addic 5, 4, -2
  03b2c48  slwi 4, 4, 4
  03b2c4c  sth 3, 184(30)
  03b2c50  addc 3, 28, 4
  03b2c54  sth 5, 186(30)
  03b2c58  clrldi 3, 3, 32
  03b2c5c  lis 4, 115
  03b2c60  lfs 1, 0(3)
  03b2c64  stfs 1, 16(31)
  03b2c68  lfs 2, 4(3)
  03b2c6c  stfs 2, 20(31)
  03b2c70  lfs 3, 8(3)
  03b2c74  stfs 3, 24(31)
  03b2c78  lfs 3, 12(3)
  03b2c7c  stfs 3, 28(31)
  03b2c80  lhz 3, 186(30)
  03b2c84  extsh 3, 3
  03b2c88  sldi 3, 3, 4
  03b2c8c  addc 3, 28, 3
  03b2c90  clrldi 3, 3, 32
  03b2c94  addic 4, 4, 22784
  03b2c98  lfs 3, 16(3)
  03b2c9c  lfs 4, 20(3)
  03b2ca0  fsubs 1, 3, 1
  03b2ca4  lis 3, 59
  03b2ca8  fsubs 2, 4, 2
  03b2cac  addi 3, 3, 10336
  03b2cb0  fabs 3, 1
  03b2cb4  fabs 5, 2
  03b2cb8  stfs 1, 156(1)
  03b2cbc  stfs 2, 160(1)
  03b2cc0  fsubs 1, 3, 5
  03b2cc4  stfs 1, 164(1)
  03b2cc8  lwz 5, 156(1)
  03b2ccc  lfs 4, 0(3)
  03b2cd0  lfs 1, 156(1)
  03b2cd4  lwz 3, 160(1)
  03b2cd8  lfs 2, 160(1)
  03b2cdc  fabs 1, 1
  03b2ce0  lwz 6, 164(1)
  03b2ce4  rlwinm 3, 3, 3, 29, 29
  03b2ce8  fabs 6, 2
  03b2cec  lfs 2, 164(1)
  03b2cf0  rlwimi 3, 6, 2, 30, 30
  03b2cf4  fsub 7, 2, 4
  03b2cf8  rlwimi 3, 5, 4, 28, 28
  03b2cfc  fsub 8, 2, 4
  03b2d00  ori 5, 4, 0
  03b2d04  rlwimi 5, 3, 2, 26, 28
  03b2d08  slwi 3, 3, 2
  03b2d0c  clrldi 5, 5, 32
  03b2d10  fsel 5, 7, 1, 5
  03b2d14  lfsx 1, 4, 3
  03b2d18  lfs 2, 4(5)
  03b2d1c  fsel 3, 8, 6, 3
  03b2d20  fcmpu 0, 5, 4
  03b2d24  bt 1, 0x3b2d2c
  03b2d28  b 0x3b2e4c
  03b2d2c  fsubs 6, 3, 5
  03b2d30  fadds 3, 3, 5
  03b2d34  addic 3, 1, 16
  03b2d38  li 7, 2
  03b2d3c  addic 5, 3, 212
  03b2d40  addic 4, 3, 196
  03b2d44  mtctr 7
  03b2d48  fdivs 3, 6, 3
  03b2d4c  fmuls 5, 3, 3
  03b2d50  stfs 3, 224(1)
  03b2d54  stfs 3, 216(1)
  03b2d58  stfs 3, 220(1)
  03b2d5c  stfs 3, 212(1)
  03b2d60  lfs 7, 224(1)
  03b2d64  lfs 8, 216(1)
  03b2d68  lfs 9, 220(1)
  03b2d6c  fmuls 6, 5, 5
  03b2d70  fmuls 8, 8, 5
  03b2d74  fmuls 7, 7, 6
  03b2d78  fmuls 3, 6, 6
  03b2d7c  fmuls 6, 9, 6
  03b2d80  stfs 8, 216(1)
  03b2d84  fmuls 5, 7, 5
  03b2d88  stfs 6, 220(1)
  03b2d8c  stfs 5, 224(1)
  03b2d90  lfs 5, 196(3)
  03b2d94  fmuls 5, 5, 3
  03b2d98  stfs 5, 212(3)
  03b2d9c  lfs 5, 4(4)
  03b2da0  addic 4, 4, 8
  03b2da4  fmuls 5, 5, 3
  03b2da8  addic 3, 3, 8
  03b2dac  stfs 5, 4(5)
  03b2db0  addic 5, 5, 8
  03b2db4  bdnz 0x3b2d90
  03b2db8  li 5, 4
  03b2dbc  ori 3, 1, 0
  03b2dc0  mtctr 5
  03b2dc4  lis 4, 115
  03b2dc8  addic 5, 3, 212
  03b2dcc  addic 4, 4, 22752
  03b2dd0  ori 6, 5, 0
  03b2dd4  lfs 3, 212(3)
  03b2dd8  lfs 5, 0(4)
  03b2ddc  fmuls 3, 3, 5
  03b2de0  lfs 5, 4(4)
  03b2de4  addic 4, 4, 8
  03b2de8  stfs 3, 212(3)
  03b2dec  lfs 3, 4(5)
  03b2df0  addic 3, 3, 8
  03b2df4  fmuls 3, 3, 5
  03b2df8  stfs 3, 4(5)
  03b2dfc  addic 5, 5, 8
  03b2e00  bdnz 0x3b2dd4
  03b2e04  ori 3, 1, 0
  03b2e08  mtctr 7
  03b2e0c  lfs 3, 212(3)
  03b2e10  fadds 3, 4, 3
  03b2e14  addic 3, 3, 16
  03b2e18  lfs 4, 4(6)
  03b2e1c  lfs 5, 8(6)
  03b2e20  lfs 6, 12(6)
  03b2e24  addic 6, 6, 16
  03b2e28  fadds 3, 3, 4
  03b2e2c  fadds 4, 3, 5
  03b2e30  fadds 4, 4, 6
  03b2e34  bdnz 0x3b2e0c
  03b2e38  lis 3, 59
  03b2e3c  addi 3, 3, 10336
  03b2e40  lfs 3, 4(3)
  03b2e44  fadds 4, 4, 3
  03b2e48  fmadds 4, 4, 1, 2
  03b2e4c  stfs 4, 72(31)
  03b2e50  b 0x3b3090
  03b2e54  lhz 3, 184(30)
  03b2e58  extsh 3, 3
  03b2e5c  cmpwi 3, 0
  03b2e60  bf 0, 0x3b3090
  03b2e64  lwz 3, 176(30)
  03b2e68  cmpwi 3, -1
  03b2e6c  bt 2, 0x3b3090
  03b2e70  lis 5, 151
  03b2e74  extsw 4, 3
  03b2e78  addic 3, 5, -25376
  03b2e7c  addic 3, 3, 128
  03b2e80  bl 0x110b70
  03b2e84  nop
  03b2e88  cmpwi 3, 0
  03b2e8c  bt 2, 0x3b3090
  03b2e90  li 3, 1
  03b2e94  sth 3, 186(30)
  03b2e98  lfs 1, 16(28)
  03b2e9c  stfs 1, 16(31)
  03b2ea0  lfs 2, 20(28)
  03b2ea4  stfs 2, 20(31)
  03b2ea8  lfs 3, 24(28)
  03b2eac  stfs 3, 24(31)
  03b2eb0  lfs 3, 28(28)
  03b2eb4  stfs 3, 28(31)
  03b2eb8  sth 3, 184(30)
  03b2ebc  lhz 3, 186(30)
  03b2ec0  extsh 3, 3
  03b2ec4  sldi 3, 3, 4
  03b2ec8  addc 3, 28, 3
  03b2ecc  clrldi 3, 3, 32
  03b2ed0  lis 4, 115
  03b2ed4  lfs 3, 16(3)
  03b2ed8  lfs 4, 20(3)
  03b2edc  fsubs 1, 3, 1
  03b2ee0  fsubs 2, 4, 2
  03b2ee4  lis 3, 59
  03b2ee8  addi 3, 3, 10336
  03b2eec  addic 4, 4, 22784
  03b2ef0  fabs 3, 1
  03b2ef4  fabs 5, 2
  03b2ef8  stfs 1, 144(1)
  03b2efc  stfs 2, 148(1)
  03b2f00  fsubs 1, 3, 5
  03b2f04  stfs 1, 152(1)
  03b2f08  lwz 5, 144(1)
  03b2f0c  lfs 4, 0(3)
  03b2f10  lfs 1, 144(1)
  03b2f14  lwz 3, 148(1)
  03b2f18  lfs 2, 148(1)
  03b2f1c  fabs 1, 1
  03b2f20  lwz 6, 152(1)
  03b2f24  rlwinm 3, 3, 3, 29, 29
  03b2f28  fabs 6, 2
  03b2f2c  lfs 2, 152(1)
  03b2f30  rlwimi 3, 6, 2, 30, 30
  03b2f34  fsub 7, 2, 4
  03b2f38  rlwimi 3, 5, 4, 28, 28
  03b2f3c  fsub 8, 2, 4
  03b2f40  ori 5, 4, 0
  03b2f44  rlwimi 5, 3, 2, 26, 28
  03b2f48  slwi 3, 3, 2
  03b2f4c  clrldi 5, 5, 32
  03b2f50  fsel 5, 7, 1, 5
  03b2f54  lfsx 1, 4, 3
  03b2f58  lfs 2, 4(5)
  03b2f5c  fsel 3, 8, 6, 3
  03b2f60  fcmpu 0, 5, 4
  03b2f64  bt 1, 0x3b2f6c
  03b2f68  b 0x3b308c
  03b2f6c  fsubs 6, 3, 5
  03b2f70  fadds 3, 3, 5
  03b2f74  addic 3, 1, 16
  03b2f78  li 7, 2
  03b2f7c  addic 5, 3, 180
  03b2f80  addic 4, 3, 164
  03b2f84  mtctr 7
  03b2f88  fdivs 3, 6, 3
  03b2f8c  fmuls 5, 3, 3
  03b2f90  stfs 3, 192(1)
  03b2f94  stfs 3, 184(1)
  03b2f98  stfs 3, 188(1)
  03b2f9c  stfs 3, 180(1)
  03b2fa0  lfs 7, 192(1)
  03b2fa4  lfs 8, 184(1)
  03b2fa8  lfs 9, 188(1)
  03b2fac  fmuls 6, 5, 5
  03b2fb0  fmuls 8, 8, 5
  03b2fb4  fmuls 7, 7, 6
  03b2fb8  fmuls 3, 6, 6
  03b2fbc  fmuls 6, 9, 6
  03b2fc0  stfs 8, 184(1)
  03b2fc4  fmuls 5, 7, 5
  03b2fc8  stfs 6, 188(1)
  03b2fcc  stfs 5, 192(1)
  03b2fd0  lfs 5, 164(3)
  03b2fd4  fmuls 5, 5, 3
  03b2fd8  stfs 5, 180(3)
  03b2fdc  lfs 5, 4(4)
  03b2fe0  addic 4, 4, 8
  03b2fe4  fmuls 5, 5, 3
  03b2fe8  addic 3, 3, 8
  03b2fec  stfs 5, 4(5)
  03b2ff0  addic 5, 5, 8
  03b2ff4  bdnz 0x3b2fd0
  03b2ff8  li 5, 4
  03b2ffc  ori 3, 1, 0
  03b3000  mtctr 5
  03b3004  lis 4, 115
  03b3008  addic 5, 3, 180
  03b300c  addic 4, 4, 22752
  03b3010  ori 6, 5, 0
  03b3014  lfs 3, 180(3)
  03b3018  lfs 5, 0(4)
  03b301c  fmuls 3, 3, 5
  03b3020  lfs 5, 4(4)
  03b3024  addic 4, 4, 8
  03b3028  stfs 3, 180(3)
  03b302c  lfs 3, 4(5)
  03b3030  addic 3, 3, 8
  03b3034  fmuls 3, 3, 5
  03b3038  stfs 3, 4(5)
  03b303c  addic 5, 5, 8
  03b3040  bdnz 0x3b3014
  03b3044  ori 3, 1, 0
  03b3048  mtctr 7
  03b304c  lfs 3, 180(3)
  03b3050  fadds 3, 4, 3
  03b3054  addic 3, 3, 16
  03b3058  lfs 4, 4(6)
  03b305c  lfs 5, 8(6)
  03b3060  lfs 6, 12(6)
  03b3064  addic 6, 6, 16
  03b3068  fadds 3, 3, 4
  03b306c  fadds 4, 3, 5
  03b3070  fadds 4, 4, 6
  03b3074  bdnz 0x3b304c
  03b3078  lis 3, 59
  03b307c  addi 3, 3, 10336
  03b3080  lfs 3, 4(3)
  03b3084  fadds 4, 4, 3
  03b3088  fmadds 4, 4, 1, 2
  03b308c  stfs 4, 72(31)
  03b3090  lis 3, 151
  03b3094  addic 3, 3, -25376
  03b3098  lwz 4, 764(3)
  03b309c  cmpw 4, 31
  03b30a0  bf 2, 0x3b31c4
  03b30a4  lhz 3, 782(3)
  03b30a8  cmpwi 3, 0
  03b30ac  bf 2, 0x3b31c4
  03b30b0  li 3, 3
  03b30b4  stb 3, 32(31)
  03b30b8  b 0x3b31c4
  03b30bc  lis 3, 161
  03b30c0  srawi 4, 31, 8
  03b30c4  lwz 3, 1808(3)
  03b30c8  xor 3, 3, 4
  03b30cc  clrlwi 3, 3, 29
  03b30d0  cmpwi 3, 0
  03b30d4  bf 2, 0x3b3120
  03b30d8  lwz 3, 196(30)
  03b30dc  cmpwi 3, -1
  03b30e0  bt 2, 0x3b3100
  03b30e4  extsw 4, 3
  03b30e8  ori 3, 31, 0
  03b30ec  bl 0x15cc7c
  03b30f0  nop
  03b30f4  cmpwi 3, 0
  03b30f8  bf 2, 0x3b3120
  03b30fc  lwz 3, 196(30)
  03b3100  cmpwi 3, -1
  03b3104  bf 2, 0x3b3120
  03b3108  li 3, 0
  03b310c  li 4, 4
  03b3110  ori 5, 31, 0
  03b3114  bl 0x15d12c
  03b3118  nop
  03b311c  stw 3, 196(30)
  03b3120  ori 3, 31, 0
  03b3124  bl 0x3b22e0
  03b3128  cmpwi 3, 0
  03b312c  bt 2, 0x3b31c4
  03b3130  lwz 3, 196(30)
  03b3134  cmpwi 3, -1
  03b3138  bt 2, 0x3b3180
  03b313c  sldi 4, 3, 7
  03b3140  sldi 6, 3, 4
  03b3144  lis 5, 150
  03b3148  subc 4, 4, 6
  03b314c  addic 5, 5, 14312
  03b3150  extsw 4, 4
  03b3154  lwzx 5, 5, 4
  03b3158  cmpw 5, 31
  03b315c  bf 2, 0x3b3180
  03b3160  lis 5, 150
  03b3164  addic 5, 5, 14292
  03b3168  lbzx 4, 5, 4
  03b316c  cmpwi 4, 0
  03b3170  bt 2, 0x3b3180
  03b3174  extsw 3, 3
  03b3178  bl 0x15cdb0
  03b317c  nop
  03b3180  li 3, -1
  03b3184  li 4, 2
  03b3188  lis 5, 16457
  03b318c  stw 3, 196(30)
  03b3190  ori 5, 5, 4059
  03b3194  stb 4, 32(31)
  03b3198  li 3, 0
  03b319c  lhz 4, 184(30)
  03b31a0  neg 4, 4
  03b31a4  stw 5, 188(30)
  03b31a8  extsh 5, 4
  03b31ac  cmpwi 5, 0
  03b31b0  sth 4, 184(30)
  03b31b4  bt 1, 0x3b31c0
  03b31b8  lwz 3, 0(28)
  03b31bc  addic 3, 3, -1
  03b31c0  sth 3, 186(30)
  03b31c4  lfs 1, 112(1)
  03b31c8  addic 3, 30, 32
  03b31cc  lfs 2, 16(31)
  03b31d0  addic 4, 1, 112
  03b31d4  lfs 3, 116(1)
  03b31d8  addic 5, 1, 128
  03b31dc  fadds 1, 1, 2
  03b31e0  addic 6, 31, 64
  03b31e4  lfs 2, 20(31)
  03b31e8  lfs 4, 120(1)
  03b31ec  fadds 2, 3, 2
  03b31f0  lfs 3, 24(31)
  03b31f4  fadds 3, 4, 3
  03b31f8  stfs 1, 112(1)
  03b31fc  stfs 2, 116(1)
  03b3200  stfs 3, 120(1)
  03b3204  bl 0x112900
  03b3208  nop
  03b320c  ld 0, 336(1)
  03b3210  mtlr 0
  03b3214  ld 28, 288(1)
  03b3218  ld 29, 296(1)
  03b321c  ld 30, 304(1)
  03b3220  ld 31, 312(1)
  03b3224  addi 1, 1, 320
  03b3228  blr

M554_003b322c:   # 0x3b322c, 0x14 bytes
  03b322c  lis 3, 132
  03b3230  lis 4, 1
  03b3234  addic 3, 3, 22580
  03b3238  stw 4, 72(3)
  03b323c  blr

UpdateMoby_554:   # 0x3b3248, 0x11c bytes
  03b3248  stdu 1, -128(1)
  03b324c  mflr 0
  03b3250  std 0, 144(1)
  03b3254  std 31, 120(1)
  03b3258  std 30, 112(1)
  03b325c  ori 31, 3, 0
  03b3260  lwz 30, 120(31)
  03b3264  addic 3, 30, 4
  03b3268  bl 0x4fff60
  03b326c  nop
  03b3270  cmpwi 3, 0
  03b3274  bt 2, 0x3b334c
  03b3278  lis 3, 151
  03b327c  lfs 1, 20(31)
  03b3280  lfs 2, 16(31)
  03b3284  addic 3, 3, -25376
  03b3288  lfs 3, 132(3)
  03b328c  lfs 4, 128(3)
  03b3290  fsubs 1, 1, 3
  03b3294  fsubs 2, 2, 4
  03b3298  lis 3, 59
  03b329c  addi 3, 3, 12864
  03b32a0  fmuls 1, 1, 1
  03b32a4  fmadds 1, 2, 2, 1
  03b32a8  lfs 2, 0(3)
  03b32ac  fsqrts 1, 1
  03b32b0  fcmpu 0, 1, 2
  03b32b4  cror 6, 0, 2
  03b32b8  bt 6, 0x3b334c
  03b32bc  lis 3, 59
  03b32c0  li 4, 4
  03b32c4  vspltisw 2, -1
  03b32c8  addi 3, 3, 12864
  03b32cc  lis 5, 114
  03b32d0  li 6, -3056
  03b32d4  vslw 2, 2, 2
  03b32d8  lvlx 3, 4, 3
  03b32dc  li 4, 4
  03b32e0  vspltw 3, 3, 0
  03b32e4  lvlx 4, 6, 5
  03b32e8  lwz 3, 0(30)
  03b32ec  lis 5, 165
  03b32f0  vmaddfp 2, 4, 3, 2
  03b32f4  slwi 3, 3, 2
  03b32f8  addic 5, 5, 7136
  03b32fc  extsw 3, 3
  03b3300  vctsxs 2, 2, 0
  03b3304  vspltw 2, 2, 0
  03b3308  stvewx 2, 4, 30
  03b330c  lwzx 30, 5, 3
  03b3310  cmpwi 30, 0
  03b3314  bt 2, 0x3b334c
  03b3318  lfs 1, 16(31)
  03b331c  ori 3, 30, 0
  03b3320  lfs 2, 24(31)
  03b3324  stfs 1, 64(1)
  03b3328  stfs 2, 72(1)
  03b332c  lfs 1, 20(31)
  03b3330  lfs 2, 28(31)
  03b3334  stfs 1, 68(1)
  03b3338  stfs 2, 76(1)
  03b333c  ld 5, 64(1)
  03b3340  ld 6, 72(1)
  03b3344  bl 0x31d8e0
  03b3348  nop
  03b334c  ld 0, 144(1)
  03b3350  mtlr 0
  03b3354  ld 30, 112(1)
  03b3358  ld 31, 120(1)
  03b335c  addi 1, 1, 128
  03b3360  blr
