# game/update/moby1112.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1112_001d216c:   # 0x1d216c, 0x14 bytes
  01d216c  lis 3, 118
  01d2170  lis 4, 1
  01d2174  addic 3, 3, 17428
  01d2178  stw 4, 72(3)
  01d217c  blr

M1112_001d2188:   # 0x1d2188, 0x78 bytes
  01d2188  stdu 1, -112(1)
  01d218c  mflr 0
  01d2190  std 0, 128(1)
  01d2194  cmpwi 4, 0
  01d2198  lwz 5, 120(3)
  01d219c  bt 2, 0x1d21e8
  01d21a0  li 6, 132
  01d21a4  vspltisw 4, -1
  01d21a8  lis 7, 29
  01d21ac  addi 7, 7, 8576
  01d21b0  vslw 4, 4, 4
  01d21b4  lvlx 2, 6, 4
  01d21b8  lis 4, 114
  01d21bc  vcfsx 2, 2, 0
  01d21c0  lvlx 3, 0, 7
  01d21c4  li 6, -3056
  01d21c8  vspltw 3, 3, 0
  01d21cc  lvlx 5, 6, 4
  01d21d0  li 4, 152
  01d21d4  vaddfp 2, 2, 3
  01d21d8  vmaddfp 2, 5, 2, 4
  01d21dc  vctsxs 2, 2, 0
  01d21e0  vspltw 2, 2, 0
  01d21e4  stvewx 2, 4, 5
  01d21e8  bl 0xefb38
  01d21ec  nop
  01d21f0  ld 0, 128(1)
  01d21f4  mtlr 0
  01d21f8  addi 1, 1, 112
  01d21fc  blr

UpdateMoby_1112:   # 0x1d2258, 0x1530 bytes
  01d2258  stdu 1, -640(1)
  01d225c  mflr 0
  01d2260  std 0, 656(1)
  01d2264  stfd 29, 616(1)
  01d2268  stfd 30, 624(1)
  01d226c  stfd 31, 632(1)
  01d2270  std 31, 608(1)
  01d2274  cmpwi 3, 0
  01d2278  std 30, 600(1)
  01d227c  std 29, 592(1)
  01d2280  std 28, 584(1)
  01d2284  std 27, 576(1)
  01d2288  std 26, 568(1)
  01d228c  ori 31, 3, 0
  01d2290  bt 2, 0x1d3754
  01d2294  lwz 28, 120(31)
  01d2298  cmpwi 28, 0
  01d229c  bt 2, 0x1d3754
  01d22a0  lwz 30, 160(28)
  01d22a4  cmpwi 30, 0
  01d22a8  bt 2, 0x1d3754
  01d22ac  lwz 30, 120(30)
  01d22b0  ori 3, 31, 0
  01d22b4  addic 5, 1, 256
  01d22b8  lfs 1, 140(30)
  01d22bc  bl 0x1118d8
  01d22c0  nop
  01d22c4  lbz 3, 49(31)
  01d22c8  addic 29, 28, 32
  01d22cc  cmpwi 3, 0
  01d22d0  bt 2, 0x1d233c
  01d22d4  lis 3, 149
  01d22d8  lfs 1, 20(31)
  01d22dc  lfs 2, 16(31)
  01d22e0  addic 3, 3, 5056
  01d22e4  lfs 3, 324(3)
  01d22e8  lfs 4, 320(3)
  01d22ec  fsubs 1, 1, 3
  01d22f0  fsubs 2, 2, 4
  01d22f4  lfs 3, 24(31)
  01d22f8  lfs 4, 328(3)
  01d22fc  fsubs 3, 3, 4
  01d2300  lis 3, 29
  01d2304  fmuls 1, 1, 1
  01d2308  addi 3, 3, 8704
  01d230c  fmadds 1, 2, 2, 1
  01d2310  lfs 2, 0(3)
  01d2314  fmadds 1, 3, 3, 1
  01d2318  fsqrts 1, 1
  01d231c  fcmpu 0, 1, 2
  01d2320  cror 6, 1, 2
  01d2324  bt 6, 0x1d233c
  01d2328  ori 3, 31, 0
  01d232c  bl 0x106360
  01d2330  nop
  01d2334  li 3, 21
  01d2338  stb 3, 127(31)
  01d233c  ori 3, 31, 0
  01d2340  ori 27, 29, 0
  01d2344  lis 4, 35
  01d2348  li 5, 0
  01d234c  bl 0x10675c
  01d2350  nop
  01d2354  ori 29, 3, 0
  01d2358  ori 3, 31, 0
  01d235c  li 6, 0
  01d2360  addic 7, 1, 336
  01d2364  li 9, 0
  01d2368  li 10, 4
  01d236c  ori 4, 29, 0
  01d2370  ori 5, 27, 0
  01d2374  li 8, 0
  01d2378  bl 0x106840
  01d237c  nop
  01d2380  lwz 3, 336(1)
  01d2384  cmpwi 3, 1
  01d2388  bf 1, 0x1d24a0
  01d238c  cmpwi 29, 0
  01d2390  bt 2, 0x1d24a0
  01d2394  lwz 29, 32(29)
  01d2398  lhz 29, 166(29)
  01d239c  cmpwi 1, 29, 1112
  01d23a0  cmpwi 29, 867
  01d23a4  cror 2, 2, 6
  01d23a8  bt 2, 0x1d24a0
  01d23ac  cmpwi 29, 871
  01d23b0  bt 2, 0x1d24a0
  01d23b4  lis 3, 29
  01d23b8  li 7, 2
  01d23bc  addi 3, 3, 8704
  01d23c0  li 11, 0
  01d23c4  li 10, 1
  01d23c8  li 6, -1
  01d23cc  addic 4, 28, 96
  01d23d0  lfs 1, 4(3)
  01d23d4  lfs 4, 16(3)
  01d23d8  li 5, 0
  01d23dc  lfs 3, 8(3)
  01d23e0  li 8, 3
  01d23e4  lfs 5, 12(3)
  01d23e8  li 9, 3
  01d23ec  lfs 7, 20(3)
  01d23f0  fmr 2, 1
  01d23f4  std 7, 144(1)
  01d23f8  ori 3, 31, 0
  01d23fc  std 11, 160(1)
  01d2400  fmr 6, 4
  01d2404  std 10, 168(1)
  01d2408  std 6, 176(1)
  01d240c  li 10, 5
  01d2410  std 11, 184(1)
  01d2414  bl 0x10e030
  01d2418  nop
  01d241c  ori 3, 31, 0
  01d2420  li 4, 0
  01d2424  li 5, -1
  01d2428  bl 0xfd8d0
  01d242c  nop
  01d2430  cmpwi 30, 0
  01d2434  lwz 3, 120(31)
  01d2438  bt 2, 0x1d2494
  01d243c  li 4, 132
  01d2440  vspltisw 4, -1
  01d2444  lis 6, 29
  01d2448  addi 5, 4, 16
  01d244c  vslw 4, 4, 4
  01d2450  lvlx 2, 4, 30
  01d2454  addi 4, 6, 8704
  01d2458  lvrx 3, 5, 30
  01d245c  li 5, 24
  01d2460  vor 2, 2, 3
  01d2464  vcfsx 2, 2, 0
  01d2468  lvlx 3, 5, 4
  01d246c  lis 4, 114
  01d2470  vspltw 3, 3, 0
  01d2474  li 5, -3056
  01d2478  lvlx 5, 5, 4
  01d247c  li 4, 152
  01d2480  vaddfp 2, 2, 3
  01d2484  vmaddfp 2, 5, 2, 4
  01d2488  vctsxs 2, 2, 0
  01d248c  vspltw 2, 2, 0
  01d2490  stvewx 2, 4, 3
  01d2494  ori 3, 31, 0
  01d2498  bl 0xefb38
  01d249c  nop
  01d24a0  lbz 3, 32(31)
  01d24a4  cmpwi 3, 1
  01d24a8  cmpwi 1, 3, -1
  01d24ac  cmpwi 6, 3, 0
  01d24b0  cmpwi 7, 3, 2
  01d24b4  bt 1, 0x1d24c4
  01d24b8  bf 5, 0x1d373c
  01d24bc  bf 25, 0x1d24d4
  01d24c0  b 0x1d2700
  01d24c4  bf 29, 0x1d2cbc
  01d24c8  cmpwi 3, 3
  01d24cc  bf 1, 0x1d3664
  01d24d0  b 0x1d373c
  01d24d4  cmpwi 30, 0
  01d24d8  bt 2, 0x1d373c
  01d24dc  lis 3, 29
  01d24e0  lhz 5, 52(31)
  01d24e4  li 4, 0
  01d24e8  addi 3, 3, 8704
  01d24ec  ori 5, 5, 4096
  01d24f0  sth 5, 52(31)
  01d24f4  lfs 4, 4(3)
  01d24f8  stw 4, 108(28)
  01d24fc  stw 4, 104(28)
  01d2500  stw 4, 100(28)
  01d2504  stw 4, 96(28)
  01d2508  lfs 1, 16(31)
  01d250c  stfs 1, 112(28)
  01d2510  lfs 1, 20(31)
  01d2514  stfs 1, 116(28)
  01d2518  lfs 1, 24(31)
  01d251c  stfs 1, 120(28)
  01d2520  lfs 1, 28(31)
  01d2524  stfs 1, 124(28)
  01d2528  stw 4, 68(31)
  01d252c  lfs 1, 128(28)
  01d2530  lfs 2, 16(31)
  01d2534  lfs 3, 132(28)
  01d2538  lfs 5, 20(31)
  01d253c  fsubs 1, 1, 2
  01d2540  fsubs 2, 3, 5
  01d2544  lis 3, 115
  01d2548  addic 3, 3, 22784
  01d254c  fabs 3, 1
  01d2550  fabs 5, 2
  01d2554  stfs 1, 388(1)
  01d2558  stfs 2, 392(1)
  01d255c  fsubs 1, 3, 5
  01d2560  stfs 1, 396(1)
  01d2564  lwz 4, 388(1)
  01d2568  lfs 1, 388(1)
  01d256c  lwz 5, 392(1)
  01d2570  lfs 2, 392(1)
  01d2574  lwz 6, 396(1)
  01d2578  rlwinm 5, 5, 3, 29, 29
  01d257c  lfs 6, 396(1)
  01d2580  fabs 1, 1
  01d2584  rlwimi 5, 6, 2, 30, 30
  01d2588  fabs 2, 2
  01d258c  fsub 7, 6, 4
  01d2590  fsub 6, 6, 4
  01d2594  rlwimi 5, 4, 4, 28, 28
  01d2598  ori 4, 3, 0
  01d259c  rlwimi 4, 5, 2, 26, 28
  01d25a0  slwi 5, 5, 2
  01d25a4  clrldi 4, 4, 32
  01d25a8  fsel 5, 7, 1, 5
  01d25ac  lfsx 1, 3, 5
  01d25b0  fsel 3, 6, 2, 3
  01d25b4  lfs 2, 4(4)
  01d25b8  fcmpu 0, 5, 4
  01d25bc  bt 1, 0x1d25c4
  01d25c0  b 0x1d26e4
  01d25c4  fsubs 6, 3, 5
  01d25c8  fadds 3, 3, 5
  01d25cc  addic 3, 1, 16
  01d25d0  li 7, 2
  01d25d4  addic 4, 3, 512
  01d25d8  addic 5, 3, 528
  01d25dc  mtctr 7
  01d25e0  fdivs 3, 6, 3
  01d25e4  fmuls 5, 3, 3
  01d25e8  stfs 3, 540(1)
  01d25ec  stfs 3, 532(1)
  01d25f0  stfs 3, 536(1)
  01d25f4  stfs 3, 528(1)
  01d25f8  lfs 7, 540(1)
  01d25fc  lfs 8, 532(1)
  01d2600  lfs 9, 536(1)
  01d2604  fmuls 6, 5, 5
  01d2608  fmuls 8, 8, 5
  01d260c  fmuls 7, 7, 6
  01d2610  fmuls 3, 6, 6
  01d2614  fmuls 6, 9, 6
  01d2618  stfs 8, 532(1)
  01d261c  fmuls 5, 7, 5
  01d2620  stfs 6, 536(1)
  01d2624  stfs 5, 540(1)
  01d2628  lfs 5, 512(3)
  01d262c  fmuls 5, 5, 3
  01d2630  stfs 5, 528(3)
  01d2634  lfs 5, 4(4)
  01d2638  addic 3, 3, 8
  01d263c  addic 4, 4, 8
  01d2640  fmuls 5, 5, 3
  01d2644  stfs 5, 4(5)
  01d2648  addic 5, 5, 8
  01d264c  bdnz 0x1d2628
  01d2650  li 5, 4
  01d2654  ori 3, 1, 0
  01d2658  mtctr 5
  01d265c  lis 4, 115
  01d2660  addic 5, 3, 528
  01d2664  addic 4, 4, 22752
  01d2668  ori 6, 5, 0
  01d266c  lfs 3, 528(3)
  01d2670  lfs 5, 0(4)
  01d2674  fmuls 3, 3, 5
  01d2678  lfs 5, 4(4)
  01d267c  addic 4, 4, 8
  01d2680  stfs 3, 528(3)
  01d2684  lfs 3, 4(5)
  01d2688  addic 3, 3, 8
  01d268c  fmuls 3, 3, 5
  01d2690  stfs 3, 4(5)
  01d2694  addic 5, 5, 8
  01d2698  bdnz 0x1d266c
  01d269c  ori 3, 1, 0
  01d26a0  mtctr 7
  01d26a4  lfs 3, 528(3)
  01d26a8  fadds 3, 4, 3
  01d26ac  lfs 4, 4(6)
  01d26b0  addic 3, 3, 16
  01d26b4  lfs 5, 8(6)
  01d26b8  lfs 6, 12(6)
  01d26bc  addic 6, 6, 16
  01d26c0  fadds 3, 3, 4
  01d26c4  fadds 4, 3, 5
  01d26c8  fadds 4, 4, 6
  01d26cc  bdnz 0x1d26a4
  01d26d0  lis 3, 29
  01d26d4  addi 3, 3, 8704
  01d26d8  lfs 3, 28(3)
  01d26dc  fadds 4, 4, 3
  01d26e0  fmadds 4, 4, 1, 2
  01d26e4  li 3, 0
  01d26e8  stfs 4, 72(31)
  01d26ec  li 4, 1
  01d26f0  stb 3, 41(28)
  01d26f4  stb 3, 188(31)
  01d26f8  stb 4, 32(31)
  01d26fc  b 0x1d373c
  01d2700  lfs 1, 128(28)
  01d2704  lfs 2, 16(31)
  01d2708  lfs 3, 132(28)
  01d270c  fsubs 2, 1, 2
  01d2710  lfs 4, 136(28)
  01d2714  lfs 5, 140(28)
  01d2718  lis 3, 29
  01d271c  addi 3, 3, 8704
  01d2720  lis 29, 115
  01d2724  addic 29, 29, 22784
  01d2728  stfs 2, 96(28)
  01d272c  lfs 2, 20(31)
  01d2730  fsubs 2, 3, 2
  01d2734  stfs 2, 100(28)
  01d2738  lfs 2, 24(31)
  01d273c  stfs 5, 108(28)
  01d2740  fsubs 2, 4, 2
  01d2744  stfs 2, 104(28)
  01d2748  lfs 2, 16(31)
  01d274c  lfs 4, 20(31)
  01d2750  fsubs 1, 1, 2
  01d2754  fsubs 2, 3, 4
  01d2758  fabs 3, 1
  01d275c  fabs 4, 2
  01d2760  stfs 1, 376(1)
  01d2764  stfs 2, 380(1)
  01d2768  fsubs 1, 3, 4
  01d276c  stfs 1, 384(1)
  01d2770  lwz 4, 376(1)
  01d2774  lfs 31, 4(3)
  01d2778  lfs 1, 376(1)
  01d277c  lwz 3, 380(1)
  01d2780  lfs 2, 380(1)
  01d2784  lwz 5, 384(1)
  01d2788  rlwinm 3, 3, 3, 29, 29
  01d278c  fabs 5, 2
  01d2790  lfs 2, 384(1)
  01d2794  fabs 1, 1
  01d2798  rlwimi 3, 5, 2, 30, 30
  01d279c  fsub 6, 2, 31
  01d27a0  rlwimi 3, 4, 4, 28, 28
  01d27a4  fsub 7, 2, 31
  01d27a8  ori 4, 29, 0
  01d27ac  rlwimi 4, 3, 2, 26, 28
  01d27b0  slwi 3, 3, 2
  01d27b4  clrldi 4, 4, 32
  01d27b8  fsel 4, 6, 1, 4
  01d27bc  lfsx 1, 29, 3
  01d27c0  lfs 2, 4(4)
  01d27c4  fsel 3, 7, 5, 3
  01d27c8  fcmpu 0, 4, 31
  01d27cc  bt 1, 0x1d27d8
  01d27d0  fmr 1, 31
  01d27d4  b 0x1d28fc
  01d27d8  fsubs 5, 3, 4
  01d27dc  fadds 3, 3, 4
  01d27e0  addic 3, 1, 16
  01d27e4  li 6, 2
  01d27e8  addic 5, 3, 496
  01d27ec  addic 4, 3, 480
  01d27f0  mtctr 6
  01d27f4  fdivs 3, 5, 3
  01d27f8  fmuls 4, 3, 3
  01d27fc  stfs 3, 508(1)
  01d2800  stfs 3, 500(1)
  01d2804  stfs 3, 504(1)
  01d2808  stfs 3, 496(1)
  01d280c  lfs 6, 508(1)
  01d2810  lfs 7, 500(1)
  01d2814  lfs 8, 504(1)
  01d2818  fmuls 5, 4, 4
  01d281c  fmuls 7, 7, 4
  01d2820  fmuls 6, 6, 5
  01d2824  fmuls 3, 5, 5
  01d2828  fmuls 5, 8, 5
  01d282c  stfs 7, 500(1)
  01d2830  fmuls 4, 6, 4
  01d2834  stfs 5, 504(1)
  01d2838  stfs 4, 508(1)
  01d283c  lfs 4, 480(3)
  01d2840  fmuls 4, 4, 3
  01d2844  stfs 4, 496(3)
  01d2848  lfs 4, 4(4)
  01d284c  addic 4, 4, 8
  01d2850  fmuls 4, 4, 3
  01d2854  addic 3, 3, 8
  01d2858  stfs 4, 4(5)
  01d285c  addic 5, 5, 8
  01d2860  bdnz 0x1d283c
  01d2864  li 5, 4
  01d2868  ori 3, 1, 0
  01d286c  mtctr 5
  01d2870  lis 4, 115
  01d2874  addic 5, 3, 496
  01d2878  addic 4, 4, 22752
  01d287c  ori 7, 5, 0
  01d2880  lfs 3, 496(3)
  01d2884  lfs 4, 0(4)
  01d2888  fmuls 3, 3, 4
  01d288c  lfs 4, 4(4)
  01d2890  addic 4, 4, 8
  01d2894  stfs 3, 496(3)
  01d2898  lfs 3, 4(5)
  01d289c  addic 3, 3, 8
  01d28a0  fmuls 3, 3, 4
  01d28a4  stfs 3, 4(5)
  01d28a8  addic 5, 5, 8
  01d28ac  bdnz 0x1d2880
  01d28b0  ori 3, 1, 0
  01d28b4  fmr 3, 31
  01d28b8  mtctr 6
  01d28bc  lfs 4, 496(3)
  01d28c0  fadds 3, 3, 4
  01d28c4  lfs 4, 4(7)
  01d28c8  addic 3, 3, 16
  01d28cc  lfs 5, 8(7)
  01d28d0  lfs 6, 12(7)
  01d28d4  addic 7, 7, 16
  01d28d8  fadds 3, 3, 4
  01d28dc  fadds 3, 3, 5
  01d28e0  fadds 3, 3, 6
  01d28e4  bdnz 0x1d28bc
  01d28e8  lis 3, 29
  01d28ec  addi 3, 3, 8704
  01d28f0  lfs 4, 28(3)
  01d28f4  fadds 3, 3, 4
  01d28f8  fmadds 1, 3, 1, 2
  01d28fc  lis 3, 29
  01d2900  lis 6, 114
  01d2904  addi 3, 3, 8704
  01d2908  lis 4, 114
  01d290c  addic 5, 28, 164
  01d2910  lfs 4, 32(3)
  01d2914  lfs 3, 36(3)
  01d2918  lfs 2, -3048(6)
  01d291c  lfs 5, -3052(4)
  01d2920  ori 3, 31, 0
  01d2924  fmuls 2, 2, 4
  01d2928  fmuls 3, 5, 3
  01d292c  fmuls 4, 5, 4
  01d2930  bl 0xff2e8
  01d2934  nop
  01d2938  lfs 1, 128(28)
  01d293c  stfs 1, 16(31)
  01d2940  lfs 2, 132(28)
  01d2944  stfs 2, 20(31)
  01d2948  lfs 6, 136(28)
  01d294c  stfs 6, 24(31)
  01d2950  lfs 3, 140(28)
  01d2954  lwz 4, 320(1)
  01d2958  stfs 3, 28(31)
  01d295c  lwz 3, 56(28)
  01d2960  lfs 3, 256(1)
  01d2964  lfs 4, 260(1)
  01d2968  cmpwi 3, 0
  01d296c  lfs 7, 264(1)
  01d2970  lfs 5, 72(31)
  01d2974  bt 2, 0x1d29cc
  01d2978  lfs 8, 20(3)
  01d297c  lfs 9, 16(3)
  01d2980  fsubs 8, 2, 8
  01d2984  fsubs 9, 1, 9
  01d2988  lis 5, 29
  01d298c  addi 5, 5, 8704
  01d2990  fmuls 8, 8, 8
  01d2994  fmadds 8, 9, 9, 8
  01d2998  lfs 9, 40(5)
  01d299c  fsqrts 8, 8
  01d29a0  fcmpu 0, 8, 9
  01d29a4  cror 6, 1, 2
  01d29a8  bt 6, 0x1d29cc
  01d29ac  lfs 8, 24(3)
  01d29b0  lis 5, 29
  01d29b4  fsubs 8, 6, 8
  01d29b8  addi 5, 5, 8704
  01d29bc  lfs 9, 44(5)
  01d29c0  fabs 8, 8
  01d29c4  fcmpu 0, 8, 9
  01d29c8  bt 0, 0x1d2c08
  01d29cc  cmpwi 4, 0
  01d29d0  bt 2, 0x1d373c
  01d29d4  fsubs 8, 2, 4
  01d29d8  fsubs 6, 6, 7
  01d29dc  fsubs 9, 1, 3
  01d29e0  fmuls 7, 8, 8
  01d29e4  fmadds 7, 9, 9, 7
  01d29e8  fmadds 6, 6, 6, 7
  01d29ec  lfs 7, 140(30)
  01d29f0  fsqrts 6, 6
  01d29f4  fcmpu 0, 6, 7
  01d29f8  cror 6, 1, 2
  01d29fc  bt 6, 0x1d373c
  01d2a00  lwz 3, 160(28)
  01d2a04  lfs 6, 20(3)
  01d2a08  lfs 7, 16(3)
  01d2a0c  fsubs 6, 2, 6
  01d2a10  fsubs 7, 1, 7
  01d2a14  lis 3, 29
  01d2a18  addi 3, 3, 8704
  01d2a1c  fmuls 6, 6, 6
  01d2a20  fmadds 6, 7, 7, 6
  01d2a24  lfs 7, 8(3)
  01d2a28  fsqrts 6, 6
  01d2a2c  fcmpu 0, 6, 7
  01d2a30  cror 6, 0, 2
  01d2a34  bt 6, 0x1d373c
  01d2a38  fsubs 1, 3, 1
  01d2a3c  fsubs 2, 4, 2
  01d2a40  fabs 3, 1
  01d2a44  fabs 4, 2
  01d2a48  stfs 1, 364(1)
  01d2a4c  stfs 2, 368(1)
  01d2a50  fsubs 1, 3, 4
  01d2a54  stfs 1, 372(1)
  01d2a58  lwz 3, 364(1)
  01d2a5c  lfs 1, 364(1)
  01d2a60  lwz 4, 368(1)
  01d2a64  lfs 2, 368(1)
  01d2a68  fabs 1, 1
  01d2a6c  lwz 5, 372(1)
  01d2a70  rlwinm 4, 4, 3, 29, 29
  01d2a74  lfs 6, 372(1)
  01d2a78  fabs 2, 2
  01d2a7c  rlwimi 4, 5, 2, 30, 30
  01d2a80  fsub 7, 6, 31
  01d2a84  fsub 6, 6, 31
  01d2a88  rlwimi 4, 3, 4, 28, 28
  01d2a8c  ori 3, 29, 0
  01d2a90  rlwimi 3, 4, 2, 26, 28
  01d2a94  slwi 4, 4, 2
  01d2a98  clrldi 3, 3, 32
  01d2a9c  fsel 4, 7, 1, 4
  01d2aa0  lfsx 1, 29, 4
  01d2aa4  fsel 3, 6, 2, 3
  01d2aa8  lfs 2, 4(3)
  01d2aac  fcmpu 0, 4, 31
  01d2ab0  bt 1, 0x1d2ab8
  01d2ab4  b 0x1d2bd8
  01d2ab8  fsubs 6, 3, 4
  01d2abc  fadds 3, 3, 4
  01d2ac0  addic 3, 1, 16
  01d2ac4  li 7, 2
  01d2ac8  addic 5, 3, 464
  01d2acc  addic 4, 3, 448
  01d2ad0  mtctr 7
  01d2ad4  fdivs 3, 6, 3
  01d2ad8  fmuls 4, 3, 3
  01d2adc  stfs 3, 476(1)
  01d2ae0  stfs 3, 468(1)
  01d2ae4  stfs 3, 472(1)
  01d2ae8  stfs 3, 464(1)
  01d2aec  lfs 7, 476(1)
  01d2af0  lfs 8, 468(1)
  01d2af4  lfs 9, 472(1)
  01d2af8  fmuls 6, 4, 4
  01d2afc  fmuls 8, 8, 4
  01d2b00  fmuls 7, 7, 6
  01d2b04  fmuls 3, 6, 6
  01d2b08  fmuls 6, 9, 6
  01d2b0c  stfs 8, 468(1)
  01d2b10  fmuls 4, 7, 4
  01d2b14  stfs 6, 472(1)
  01d2b18  stfs 4, 476(1)
  01d2b1c  lfs 4, 448(3)
  01d2b20  fmuls 4, 4, 3
  01d2b24  stfs 4, 464(3)
  01d2b28  lfs 4, 4(4)
  01d2b2c  addic 4, 4, 8
  01d2b30  fmuls 4, 4, 3
  01d2b34  addic 3, 3, 8
  01d2b38  stfs 4, 4(5)
  01d2b3c  addic 5, 5, 8
  01d2b40  bdnz 0x1d2b1c
  01d2b44  li 5, 4
  01d2b48  ori 3, 1, 0
  01d2b4c  mtctr 5
  01d2b50  lis 4, 115
  01d2b54  addic 5, 3, 464
  01d2b58  addic 4, 4, 22752
  01d2b5c  ori 6, 5, 0
  01d2b60  lfs 3, 464(3)
  01d2b64  lfs 4, 0(4)
  01d2b68  fmuls 3, 3, 4
  01d2b6c  lfs 4, 4(4)
  01d2b70  addic 4, 4, 8
  01d2b74  stfs 3, 464(3)
  01d2b78  lfs 3, 4(5)
  01d2b7c  addic 3, 3, 8
  01d2b80  fmuls 3, 3, 4
  01d2b84  stfs 3, 4(5)
  01d2b88  addic 5, 5, 8
  01d2b8c  bdnz 0x1d2b60
  01d2b90  ori 3, 1, 0
  01d2b94  mtctr 7
  01d2b98  lfs 3, 464(3)
  01d2b9c  lfs 4, 4(6)
  01d2ba0  fadds 3, 31, 3
  01d2ba4  lfs 6, 8(6)
  01d2ba8  addic 3, 3, 16
  01d2bac  lfs 31, 12(6)
  01d2bb0  addic 6, 6, 16
  01d2bb4  fadds 3, 3, 4
  01d2bb8  fadds 3, 3, 6
  01d2bbc  fadds 31, 3, 31
  01d2bc0  bdnz 0x1d2b98
  01d2bc4  lis 3, 29
  01d2bc8  addi 3, 3, 8704
  01d2bcc  lfs 3, 28(3)
  01d2bd0  fadds 31, 31, 3
  01d2bd4  fmadds 31, 31, 1, 2
  01d2bd8  fmr 1, 5
  01d2bdc  fmr 2, 31
  01d2be0  bl 0x5026a0
  01d2be4  nop
  01d2be8  lis 3, 29
  01d2bec  lfs 2, 136(30)
  01d2bf0  addi 3, 3, 8704
  01d2bf4  lfs 3, 48(3)
  01d2bf8  fmuls 2, 2, 3
  01d2bfc  fcmpu 0, 1, 2
  01d2c00  cror 6, 1, 2
  01d2c04  bt 6, 0x1d373c
  01d2c08  lbz 3, 83(31)
  01d2c0c  cmpwi 3, 1
  01d2c10  bt 2, 0x1d2c2c
  01d2c14  ori 3, 31, 0
  01d2c18  li 4, 1
  01d2c1c  li 5, 0
  01d2c20  li 6, 10
  01d2c24  bl 0xfddc0
  01d2c28  nop
  01d2c2c  lis 3, 114
  01d2c30  lfs 1, 124(30)
  01d2c34  lis 5, 29
  01d2c38  vspltisw 2, -1
  01d2c3c  li 4, 52
  01d2c40  lis 6, 114
  01d2c44  lfs 2, -3052(3)
  01d2c48  addi 3, 5, 8704
  01d2c4c  fmuls 1, 1, 2
  01d2c50  li 5, -3056
  01d2c54  vslw 2, 2, 2
  01d2c58  li 7, 152
  01d2c5c  li 8, 56
  01d2c60  li 9, 172
  01d2c64  li 10, 2
  01d2c68  stfs 1, 156(28)
  01d2c6c  lvlx 3, 4, 3
  01d2c70  lvlx 4, 5, 6
  01d2c74  vspltw 3, 3, 0
  01d2c78  li 4, 1
  01d2c7c  vmaddfp 2, 4, 3, 2
  01d2c80  vspltisw 3, -1
  01d2c84  vslw 3, 3, 3
  01d2c88  vctsxs 2, 2, 0
  01d2c8c  vspltw 2, 2, 0
  01d2c90  stvewx 2, 7, 28
  01d2c94  stb 4, 188(31)
  01d2c98  lvlx 2, 8, 3
  01d2c9c  lvlx 4, 5, 6
  01d2ca0  vspltw 2, 2, 0
  01d2ca4  vmaddfp 2, 4, 2, 3
  01d2ca8  vctsxs 2, 2, 0
  01d2cac  vspltw 2, 2, 0
  01d2cb0  stvewx 2, 9, 28
  01d2cb4  stb 10, 32(31)
  01d2cb8  b 0x1d373c
  01d2cbc  lbz 3, 112(31)
  01d2cc0  rlwinm 3, 3, 0, 30, 30
  01d2cc4  cmpwi 3, 0
  01d2cc8  bt 2, 0x1d2cfc
  01d2ccc  lbz 3, 82(31)
  01d2cd0  cmpwi 3, 1
  01d2cd4  bf 2, 0x1d2cfc
  01d2cd8  lbz 3, 83(31)
  01d2cdc  cmpwi 3, 2
  01d2ce0  bt 2, 0x1d2cfc
  01d2ce4  ori 3, 31, 0
  01d2ce8  li 4, 2
  01d2cec  li 5, 0
  01d2cf0  li 6, 10
  01d2cf4  bl 0xfddc0
  01d2cf8  nop
  01d2cfc  lbz 3, 188(31)
  01d2d00  cmpwi 3, 1
  01d2d04  cmpwi 1, 3, 2
  01d2d08  bf 2, 0x1d2d88
  01d2d0c  lis 3, 29
  01d2d10  lfs 1, 24(31)
  01d2d14  lis 4, 114
  01d2d18  addi 3, 3, 8704
  01d2d1c  lfs 2, 60(3)
  01d2d20  lfs 3, -3064(4)
  01d2d24  addic 3, 28, 172
  01d2d28  fmadds 1, 3, 2, 1
  01d2d2c  stfs 1, 24(31)
  01d2d30  bl 0x4fff60
  01d2d34  nop
  01d2d38  cmpwi 3, 0
  01d2d3c  bt 2, 0x1d2dc8
  01d2d40  lis 3, 29
  01d2d44  li 4, 56
  01d2d48  vspltisw 2, -1
  01d2d4c  addi 3, 3, 8704
  01d2d50  lis 5, 114
  01d2d54  li 6, -3056
  01d2d58  vslw 2, 2, 2
  01d2d5c  lvlx 3, 4, 3
  01d2d60  li 3, 172
  01d2d64  vspltw 3, 3, 0
  01d2d68  li 4, 2
  01d2d6c  lvlx 4, 6, 5
  01d2d70  vmaddfp 2, 4, 3, 2
  01d2d74  vctsxs 2, 2, 0
  01d2d78  vspltw 2, 2, 0
  01d2d7c  stvewx 2, 3, 28
  01d2d80  stb 4, 188(31)
  01d2d84  b 0x1d2dc8
  01d2d88  bf 6, 0x1d2dc8
  01d2d8c  lis 3, 29
  01d2d90  lfs 1, 24(31)
  01d2d94  lis 4, 114
  01d2d98  addi 3, 3, 8704
  01d2d9c  lfs 2, 60(3)
  01d2da0  lfs 3, -3064(4)
  01d2da4  addic 3, 28, 172
  01d2da8  fnmsubs 1, 3, 2, 1
  01d2dac  stfs 1, 24(31)
  01d2db0  bl 0x4fff60
  01d2db4  nop
  01d2db8  cmpwi 3, 0
  01d2dbc  bt 2, 0x1d2dc8
  01d2dc0  li 3, 0
  01d2dc4  stb 3, 188(31)
  01d2dc8  lfs 1, 256(1)
  01d2dcc  lfs 2, 16(31)
  01d2dd0  lfs 3, 260(1)
  01d2dd4  lfs 4, 20(31)
  01d2dd8  fsubs 1, 1, 2
  01d2ddc  lis 3, 29
  01d2de0  fsubs 2, 3, 4
  01d2de4  addi 3, 3, 8704
  01d2de8  lis 29, 115
  01d2dec  addic 29, 29, 22784
  01d2df0  fabs 3, 1
  01d2df4  fabs 4, 2
  01d2df8  stfs 1, 352(1)
  01d2dfc  stfs 2, 356(1)
  01d2e00  fsubs 1, 3, 4
  01d2e04  stfs 1, 360(1)
  01d2e08  lwz 4, 352(1)
  01d2e0c  lfs 31, 4(3)
  01d2e10  lfs 1, 352(1)
  01d2e14  lwz 3, 356(1)
  01d2e18  lfs 2, 356(1)
  01d2e1c  lwz 5, 360(1)
  01d2e20  rlwinm 3, 3, 3, 29, 29
  01d2e24  fabs 5, 2
  01d2e28  lfs 2, 360(1)
  01d2e2c  fabs 1, 1
  01d2e30  rlwimi 3, 5, 2, 30, 30
  01d2e34  fsub 6, 2, 31
  01d2e38  rlwimi 3, 4, 4, 28, 28
  01d2e3c  fsub 7, 2, 31
  01d2e40  ori 4, 29, 0
  01d2e44  rlwimi 4, 3, 2, 26, 28
  01d2e48  slwi 3, 3, 2
  01d2e4c  clrldi 4, 4, 32
  01d2e50  fsel 4, 6, 1, 4
  01d2e54  lfsx 1, 29, 3
  01d2e58  lfs 2, 4(4)
  01d2e5c  fsel 3, 7, 5, 3
  01d2e60  fcmpu 0, 4, 31
  01d2e64  bt 1, 0x1d2e70
  01d2e68  fmr 1, 31
  01d2e6c  b 0x1d2f94
  01d2e70  fsubs 5, 3, 4
  01d2e74  fadds 3, 3, 4
  01d2e78  addic 3, 1, 16
  01d2e7c  li 7, 2
  01d2e80  addic 5, 3, 432
  01d2e84  addic 4, 3, 416
  01d2e88  mtctr 7
  01d2e8c  fdivs 3, 5, 3
  01d2e90  fmuls 4, 3, 3
  01d2e94  stfs 3, 444(1)
  01d2e98  stfs 3, 436(1)
  01d2e9c  stfs 3, 440(1)
  01d2ea0  stfs 3, 432(1)
  01d2ea4  lfs 6, 444(1)
  01d2ea8  lfs 7, 436(1)
  01d2eac  lfs 8, 440(1)
  01d2eb0  fmuls 5, 4, 4
  01d2eb4  fmuls 7, 7, 4
  01d2eb8  fmuls 6, 6, 5
  01d2ebc  fmuls 3, 5, 5
  01d2ec0  fmuls 5, 8, 5
  01d2ec4  stfs 7, 436(1)
  01d2ec8  fmuls 4, 6, 4
  01d2ecc  stfs 5, 440(1)
  01d2ed0  stfs 4, 444(1)
  01d2ed4  lfs 4, 416(3)
  01d2ed8  fmuls 4, 4, 3
  01d2edc  stfs 4, 432(3)
  01d2ee0  lfs 4, 4(4)
  01d2ee4  addic 4, 4, 8
  01d2ee8  fmuls 4, 4, 3
  01d2eec  addic 3, 3, 8
  01d2ef0  stfs 4, 4(5)
  01d2ef4  addic 5, 5, 8
  01d2ef8  bdnz 0x1d2ed4
  01d2efc  li 5, 4
  01d2f00  ori 3, 1, 0
  01d2f04  mtctr 5
  01d2f08  lis 4, 115
  01d2f0c  addic 5, 3, 432
  01d2f10  addic 4, 4, 22752
  01d2f14  ori 6, 5, 0
  01d2f18  lfs 3, 432(3)
  01d2f1c  lfs 4, 0(4)
  01d2f20  fmuls 3, 3, 4
  01d2f24  lfs 4, 4(4)
  01d2f28  addic 4, 4, 8
  01d2f2c  stfs 3, 432(3)
  01d2f30  lfs 3, 4(5)
  01d2f34  addic 3, 3, 8
  01d2f38  fmuls 3, 3, 4
  01d2f3c  stfs 3, 4(5)
  01d2f40  addic 5, 5, 8
  01d2f44  bdnz 0x1d2f18
  01d2f48  ori 3, 1, 0
  01d2f4c  fmr 3, 31
  01d2f50  mtctr 7
  01d2f54  lfs 4, 432(3)
  01d2f58  fadds 3, 3, 4
  01d2f5c  lfs 4, 4(6)
  01d2f60  addic 3, 3, 16
  01d2f64  lfs 5, 8(6)
  01d2f68  lfs 6, 12(6)
  01d2f6c  addic 6, 6, 16
  01d2f70  fadds 3, 3, 4
  01d2f74  fadds 3, 3, 5
  01d2f78  fadds 3, 3, 6
  01d2f7c  bdnz 0x1d2f54
  01d2f80  lis 3, 29
  01d2f84  addi 3, 3, 8704
  01d2f88  lfs 4, 28(3)
  01d2f8c  fadds 3, 3, 4
  01d2f90  fmadds 1, 3, 1, 2
  01d2f94  lis 3, 29
  01d2f98  lis 26, 114
  01d2f9c  addi 3, 3, 8704
  01d2fa0  lis 27, 114
  01d2fa4  addic 5, 28, 164
  01d2fa8  lfs 30, 36(3)
  01d2fac  lfs 29, 32(3)
  01d2fb0  lfs 2, -3048(26)
  01d2fb4  lfs 4, -3052(27)
  01d2fb8  ori 3, 31, 0
  01d2fbc  fmuls 2, 2, 30
  01d2fc0  fmuls 3, 4, 30
  01d2fc4  fmuls 4, 4, 29
  01d2fc8  bl 0xff2e8
  01d2fcc  nop
  01d2fd0  lfs 1, 20(31)
  01d2fd4  lfs 2, 260(1)
  01d2fd8  lfs 3, 16(31)
  01d2fdc  fsubs 1, 1, 2
  01d2fe0  lfs 2, 256(1)
  01d2fe4  fsubs 2, 3, 2
  01d2fe8  lfs 5, 264(1)
  01d2fec  lfs 6, 24(31)
  01d2ff0  fsubs 5, 5, 6
  01d2ff4  fmuls 1, 1, 1
  01d2ff8  fabs 7, 5
  01d2ffc  fmadds 1, 2, 2, 1
  01d3000  fsqrts 2, 1
  01d3004  lfs 1, 68(31)
  01d3008  lfs 3, -3048(26)
  01d300c  lfs 4, -3052(27)
  01d3010  stfs 5, 344(1)
  01d3014  fabs 6, 2
  01d3018  stfs 2, 340(1)
  01d301c  lwz 3, 344(1)
  01d3020  rlwinm 3, 3, 3, 29, 29
  01d3024  fsubs 2, 6, 7
  01d3028  stfs 2, 348(1)
  01d302c  lwz 4, 340(1)
  01d3030  lfs 2, 340(1)
  01d3034  lfs 5, 344(1)
  01d3038  lwz 5, 348(1)
  01d303c  lfs 8, 348(1)
  01d3040  fabs 2, 2
  01d3044  rlwimi 3, 5, 2, 30, 30
  01d3048  fabs 5, 5
  01d304c  fsub 9, 8, 31
  01d3050  fsub 8, 8, 31
  01d3054  rlwimi 3, 4, 4, 28, 28
  01d3058  ori 4, 29, 0
  01d305c  rlwimi 4, 3, 2, 26, 28
  01d3060  slwi 3, 3, 2
  01d3064  clrldi 4, 4, 32
  01d3068  fsel 7, 9, 2, 7
  01d306c  lfsx 2, 29, 3
  01d3070  fsel 6, 8, 5, 6
  01d3074  lfs 5, 4(4)
  01d3078  fcmpu 0, 7, 31
  01d307c  bt 1, 0x1d3088
  01d3080  fmr 2, 31
  01d3084  b 0x1d31ac
  01d3088  fsubs 8, 6, 7
  01d308c  fadds 6, 6, 7
  01d3090  addic 3, 1, 16
  01d3094  li 7, 2
  01d3098  addic 5, 3, 400
  01d309c  addic 4, 3, 384
  01d30a0  mtctr 7
  01d30a4  fdivs 6, 8, 6
  01d30a8  fmuls 7, 6, 6
  01d30ac  stfs 6, 412(1)
  01d30b0  stfs 6, 404(1)
  01d30b4  stfs 6, 408(1)
  01d30b8  stfs 6, 400(1)
  01d30bc  lfs 9, 412(1)
  01d30c0  lfs 10, 404(1)
  01d30c4  lfs 11, 408(1)
  01d30c8  fmuls 8, 7, 7
  01d30cc  fmuls 10, 10, 7
  01d30d0  fmuls 9, 9, 8
  01d30d4  fmuls 6, 8, 8
  01d30d8  fmuls 8, 11, 8
  01d30dc  stfs 10, 404(1)
  01d30e0  fmuls 7, 9, 7
  01d30e4  stfs 8, 408(1)
  01d30e8  stfs 7, 412(1)
  01d30ec  lfs 7, 384(3)
  01d30f0  fmuls 7, 7, 6
  01d30f4  stfs 7, 400(3)
  01d30f8  lfs 7, 4(4)
  01d30fc  addic 4, 4, 8
  01d3100  fmuls 7, 7, 6
  01d3104  addic 3, 3, 8
  01d3108  stfs 7, 4(5)
  01d310c  addic 5, 5, 8
  01d3110  bdnz 0x1d30ec
  01d3114  li 5, 4
  01d3118  ori 3, 1, 0
  01d311c  mtctr 5
  01d3120  lis 4, 115
  01d3124  addic 5, 3, 400
  01d3128  addic 4, 4, 22752
  01d312c  ori 6, 5, 0
  01d3130  lfs 6, 400(3)
  01d3134  lfs 7, 0(4)
  01d3138  fmuls 6, 6, 7
  01d313c  lfs 7, 4(4)
  01d3140  addic 4, 4, 8
  01d3144  stfs 6, 400(3)
  01d3148  lfs 6, 4(5)
  01d314c  addic 3, 3, 8
  01d3150  fmuls 6, 6, 7
  01d3154  stfs 6, 4(5)
  01d3158  addic 5, 5, 8
  01d315c  bdnz 0x1d3130
  01d3160  ori 3, 1, 0
  01d3164  fmr 6, 31
  01d3168  mtctr 7
  01d316c  lfs 7, 400(3)
  01d3170  fadds 6, 6, 7
  01d3174  lfs 7, 4(6)
  01d3178  addic 3, 3, 16
  01d317c  lfs 8, 8(6)
  01d3180  lfs 9, 12(6)
  01d3184  addic 6, 6, 16
  01d3188  fadds 6, 6, 7
  01d318c  fadds 6, 6, 8
  01d3190  fadds 6, 6, 9
  01d3194  bdnz 0x1d316c
  01d3198  lis 3, 29
  01d319c  addi 3, 3, 8704
  01d31a0  lfs 7, 28(3)
  01d31a4  fadds 6, 6, 7
  01d31a8  fmadds 2, 6, 2, 5
  01d31ac  fmuls 6, 4, 30
  01d31b0  addic 5, 28, 168
  01d31b4  fmuls 5, 4, 29
  01d31b8  fmuls 3, 3, 30
  01d31bc  fmr 4, 6
  01d31c0  bl 0xff190
  01d31c4  nop
  01d31c8  lfs 2, 256(1)
  01d31cc  stfs 1, 68(31)
  01d31d0  lis 3, 114
  01d31d4  lfs 1, 16(31)
  01d31d8  lis 4, 114
  01d31dc  lfs 3, 260(1)
  01d31e0  lfs 4, 20(31)
  01d31e4  lfs 5, 264(1)
  01d31e8  fsubs 1, 2, 1
  01d31ec  lfs 6, 24(31)
  01d31f0  fsubs 2, 3, 4
  01d31f4  lbz 5, 188(31)
  01d31f8  fsubs 3, 5, 6
  01d31fc  lfs 4, -3048(3)
  01d3200  cmpwi 5, 0
  01d3204  lfs 5, 96(28)
  01d3208  lfs 6, 100(28)
  01d320c  lfs 7, 104(28)
  01d3210  lfs 8, -3052(4)
  01d3214  bt 2, 0x1d321c
  01d3218  fmr 3, 31
  01d321c  fmuls 9, 2, 2
  01d3220  lis 3, 29
  01d3224  addi 3, 3, 8704
  01d3228  lfs 10, 64(3)
  01d322c  fmadds 9, 1, 1, 9
  01d3230  fmuls 4, 4, 10
  01d3234  fmadds 9, 3, 3, 9
  01d3238  fsqrts 9, 9
  01d323c  fdivs 4, 4, 9
  01d3240  fsub 10, 31, 9
  01d3244  fsub 12, 31, 9
  01d3248  fsub 13, 31, 9
  01d324c  fsub 11, 9, 31
  01d3250  fsub 0, 9, 31
  01d3254  fsub 9, 9, 31
  01d3258  fmuls 2, 2, 4
  01d325c  fmuls 1, 1, 4
  01d3260  fmuls 3, 3, 4
  01d3264  fsel 4, 10, 31, 2
  01d3268  fsel 10, 12, 31, 1
  01d326c  fsel 12, 13, 31, 3
  01d3270  fsel 2, 11, 4, 2
  01d3274  fsel 4, 0, 10, 1
  01d3278  fsel 3, 9, 12, 3
  01d327c  fadds 1, 6, 2
  01d3280  fadds 5, 5, 4
  01d3284  fadds 2, 7, 3
  01d3288  fmuls 3, 1, 1
  01d328c  stfs 5, 96(28)
  01d3290  stfs 1, 100(28)
  01d3294  stfs 2, 104(28)
  01d3298  fmadds 3, 5, 5, 3
  01d329c  fmadds 4, 2, 2, 3
  01d32a0  lfs 3, 68(3)
  01d32a4  fmuls 3, 8, 3
  01d32a8  fsqrts 4, 4
  01d32ac  fcmpu 0, 3, 4
  01d32b0  cror 6, 1, 2
  01d32b4  bt 6, 0x1d32d4
  01d32b8  fdivs 3, 3, 4
  01d32bc  fmuls 5, 5, 3
  01d32c0  fmuls 1, 1, 3
  01d32c4  fmuls 2, 2, 3
  01d32c8  stfs 5, 96(28)
  01d32cc  stfs 1, 100(28)
  01d32d0  stfs 2, 104(28)
  01d32d4  lfs 1, 16(31)
  01d32d8  lfs 2, 20(31)
  01d32dc  fadds 1, 1, 5
  01d32e0  lfs 3, 24(31)
  01d32e4  lis 3, 29
  01d32e8  addi 3, 3, 8704
  01d32ec  stfs 1, 16(31)
  01d32f0  lfs 4, 100(28)
  01d32f4  fadds 2, 2, 4
  01d32f8  stfs 2, 20(31)
  01d32fc  lfs 4, 104(28)
  01d3300  fadds 3, 3, 4
  01d3304  stfs 3, 24(31)
  01d3308  lfs 4, 116(28)
  01d330c  lfs 5, 112(28)
  01d3310  fsubs 2, 2, 4
  01d3314  fsubs 1, 1, 5
  01d3318  lfs 4, 120(28)
  01d331c  fsubs 3, 3, 4
  01d3320  fmuls 2, 2, 2
  01d3324  fmadds 1, 1, 1, 2
  01d3328  lfs 2, 72(3)
  01d332c  fmadds 1, 3, 3, 1
  01d3330  fsqrts 1, 1
  01d3334  fcmpu 0, 1, 2
  01d3338  cror 6, 0, 2
  01d333c  bt 6, 0x1d33b0
  01d3340  cmpwi 30, 0
  01d3344  lwz 3, 120(31)
  01d3348  bt 2, 0x1d33a4
  01d334c  li 4, 132
  01d3350  vspltisw 4, -1
  01d3354  lis 6, 29
  01d3358  addi 5, 4, 16
  01d335c  vslw 4, 4, 4
  01d3360  lvlx 2, 4, 30
  01d3364  addi 4, 6, 8704
  01d3368  lvrx 3, 5, 30
  01d336c  li 5, 24
  01d3370  vor 2, 2, 3
  01d3374  vcfsx 2, 2, 0
  01d3378  lvlx 3, 5, 4
  01d337c  lis 4, 114
  01d3380  vspltw 3, 3, 0
  01d3384  li 5, -3056
  01d3388  lvlx 5, 5, 4
  01d338c  li 4, 152
  01d3390  vaddfp 2, 2, 3
  01d3394  vmaddfp 2, 5, 2, 4
  01d3398  vctsxs 2, 2, 0
  01d339c  vspltw 2, 2, 0
  01d33a0  stvewx 2, 4, 3
  01d33a4  ori 3, 31, 0
  01d33a8  bl 0xefb38
  01d33ac  nop
  01d33b0  lis 3, 29
  01d33b4  addic 29, 28, 96
  01d33b8  addi 27, 3, 8704
  01d33bc  addic 26, 1, 208
  01d33c0  lis 5, 1
  01d33c4  ori 7, 29, 0
  01d33c8  ori 3, 26, 0
  01d33cc  lfs 30, 16(27)
  01d33d0  ori 4, 31, 0
  01d33d4  ori 5, 5, 1
  01d33d8  fmr 1, 30
  01d33dc  bl 0x10581c
  01d33e0  nop
  01d33e4  lfs 1, 16(31)
  01d33e8  addic 3, 1, 192
  01d33ec  lfs 2, 20(31)
  01d33f0  li 5, 16
  01d33f4  stfs 1, 192(1)
  01d33f8  ori 6, 31, 0
  01d33fc  lfs 1, 28(31)
  01d3400  ori 7, 26, 0
  01d3404  stfs 2, 196(1)
  01d3408  stfs 1, 204(1)
  01d340c  lfs 1, 76(27)
  01d3410  lfs 2, 24(31)
  01d3414  fadds 2, 2, 1
  01d3418  stfs 2, 200(1)
  01d341c  bl 0x5e598
  01d3420  nop
  01d3424  cmpwi 3, 0
  01d3428  bt 2, 0x1d3544
  01d342c  lis 3, 161
  01d3430  addic 3, 3, 2368
  01d3434  lwz 3, 24(3)
  01d3438  cmpwi 3, 0
  01d343c  bt 2, 0x1d3544
  01d3440  lhz 3, 166(3)
  01d3444  cmpwi 1, 3, 1110
  01d3448  cmpwi 3, 867
  01d344c  cror 2, 2, 6
  01d3450  bt 2, 0x1d3544
  01d3454  cmpwi 3, 1112
  01d3458  bt 2, 0x1d3544
  01d345c  cmpwi 3, 869
  01d3460  bt 2, 0x1d3544
  01d3464  cmpwi 3, 871
  01d3468  bt 2, 0x1d3544
  01d346c  lis 3, 29
  01d3470  fmr 1, 31
  01d3474  li 7, 2
  01d3478  fmr 2, 31
  01d347c  addi 5, 3, 8704
  01d3480  fmr 4, 30
  01d3484  li 11, 0
  01d3488  fmr 6, 30
  01d348c  li 12, 1
  01d3490  li 6, -1
  01d3494  ori 3, 31, 0
  01d3498  lfs 3, 8(5)
  01d349c  lfs 5, 12(5)
  01d34a0  ori 4, 29, 0
  01d34a4  lfs 7, 20(5)
  01d34a8  li 8, 3
  01d34ac  std 7, 144(1)
  01d34b0  li 5, 0
  01d34b4  std 11, 160(1)
  01d34b8  li 9, 3
  01d34bc  std 12, 168(1)
  01d34c0  li 10, 5
  01d34c4  std 6, 176(1)
  01d34c8  std 11, 184(1)
  01d34cc  bl 0x10e030
  01d34d0  nop
  01d34d4  cmpwi 30, 0
  01d34d8  lwz 29, 120(31)
  01d34dc  bt 2, 0x1d3538
  01d34e0  li 3, 132
  01d34e4  li 5, 24
  01d34e8  vspltisw 4, -1
  01d34ec  addi 4, 3, 16
  01d34f0  lvlx 2, 3, 30
  01d34f4  lis 3, 29
  01d34f8  vslw 4, 4, 4
  01d34fc  lvrx 3, 4, 30
  01d3500  addi 3, 3, 8704
  01d3504  vor 2, 2, 3
  01d3508  lis 4, 114
  01d350c  vcfsx 2, 2, 0
  01d3510  lvlx 3, 5, 3
  01d3514  li 3, -3056
  01d3518  vspltw 3, 3, 0
  01d351c  lvlx 5, 3, 4
  01d3520  li 3, 152
  01d3524  vaddfp 2, 2, 3
  01d3528  vmaddfp 2, 5, 2, 4
  01d352c  vctsxs 2, 2, 0
  01d3530  vspltw 2, 2, 0
  01d3534  stvewx 2, 3, 29
  01d3538  ori 3, 31, 0
  01d353c  bl 0xefb38
  01d3540  nop
  01d3544  lis 3, 29
  01d3548  lfs 1, 16(31)
  01d354c  lfs 2, 20(31)
  01d3550  li 5, 0
  01d3554  addi 3, 3, 8704
  01d3558  stfs 1, 192(1)
  01d355c  lfs 1, 28(31)
  01d3560  ori 6, 31, 0
  01d3564  stfs 2, 196(1)
  01d3568  stfs 1, 204(1)
  01d356c  lfs 1, 80(3)
  01d3570  lfs 2, 24(31)
  01d3574  addic 3, 1, 192
  01d3578  fadds 2, 2, 1
  01d357c  stfs 2, 200(1)
  01d3580  bl 0x59e20
  01d3584  nop
  01d3588  ori 4, 3, 0
  01d358c  lwz 3, 120(31)
  01d3590  cmpwi 4, 0
  01d3594  bt 2, 0x1d35e8
  01d3598  lis 4, 161
  01d359c  lfs 1, 192(1)
  01d35a0  addic 4, 4, 2368
  01d35a4  lfs 2, 196(1)
  01d35a8  lfs 3, 48(4)
  01d35ac  lfs 4, 52(4)
  01d35b0  fsubs 1, 3, 1
  01d35b4  lfs 3, 56(4)
  01d35b8  fsubs 2, 4, 2
  01d35bc  lfs 4, 200(1)
  01d35c0  fsubs 3, 3, 4
  01d35c4  lfs 4, 16(31)
  01d35c8  lfs 5, 20(31)
  01d35cc  lfs 6, 24(31)
  01d35d0  fadds 1, 4, 1
  01d35d4  fadds 2, 5, 2
  01d35d8  fadds 3, 6, 3
  01d35dc  stfs 1, 16(31)
  01d35e0  stfs 2, 20(31)
  01d35e4  stfs 3, 24(31)
  01d35e8  lwz 4, 152(28)
  01d35ec  cmpwi 4, 0
  01d35f0  bf 2, 0x1d373c
  01d35f4  cmpwi 30, 0
  01d35f8  bt 2, 0x1d3654
  01d35fc  li 4, 132
  01d3600  vspltisw 4, -1
  01d3604  lis 6, 29
  01d3608  addi 5, 4, 16
  01d360c  vslw 4, 4, 4
  01d3610  lvlx 2, 4, 30
  01d3614  addi 4, 6, 8704
  01d3618  lvrx 3, 5, 30
  01d361c  li 5, 24
  01d3620  vor 2, 2, 3
  01d3624  vcfsx 2, 2, 0
  01d3628  lvlx 3, 5, 4
  01d362c  lis 4, 114
  01d3630  vspltw 3, 3, 0
  01d3634  li 5, -3056
  01d3638  lvlx 5, 5, 4
  01d363c  li 4, 152
  01d3640  vaddfp 2, 2, 3
  01d3644  vmaddfp 2, 5, 2, 4
  01d3648  vctsxs 2, 2, 0
  01d364c  vspltw 2, 2, 0
  01d3650  stvewx 2, 4, 3
  01d3654  ori 3, 31, 0
  01d3658  bl 0xefb38
  01d365c  nop
  01d3660  b 0x1d373c
  01d3664  lis 3, 29
  01d3668  li 7, 2
  01d366c  addi 3, 3, 8704
  01d3670  li 11, 0
  01d3674  li 10, 1
  01d3678  li 6, -1
  01d367c  addic 4, 28, 96
  01d3680  lfs 1, 4(3)
  01d3684  lfs 4, 16(3)
  01d3688  li 5, 0
  01d368c  lfs 3, 8(3)
  01d3690  li 8, 3
  01d3694  lfs 5, 12(3)
  01d3698  li 9, 3
  01d369c  lfs 7, 20(3)
  01d36a0  fmr 2, 1
  01d36a4  std 7, 144(1)
  01d36a8  ori 3, 31, 0
  01d36ac  std 11, 160(1)
  01d36b0  fmr 6, 4
  01d36b4  std 10, 168(1)
  01d36b8  std 6, 176(1)
  01d36bc  li 10, 5
  01d36c0  std 11, 184(1)
  01d36c4  bl 0x10e030
  01d36c8  nop
  01d36cc  cmpwi 30, 0
  01d36d0  lwz 28, 120(31)
  01d36d4  bt 2, 0x1d3730
  01d36d8  li 3, 132
  01d36dc  li 5, 24
  01d36e0  vspltisw 4, -1
  01d36e4  addi 4, 3, 16
  01d36e8  lvlx 2, 3, 30
  01d36ec  lis 3, 29
  01d36f0  vslw 4, 4, 4
  01d36f4  lvrx 3, 4, 30
  01d36f8  addi 3, 3, 8704
  01d36fc  vor 2, 2, 3
  01d3700  lis 4, 114
  01d3704  vcfsx 2, 2, 0
  01d3708  lvlx 3, 5, 3
  01d370c  li 3, -3056
  01d3710  vspltw 3, 3, 0
  01d3714  lvlx 5, 3, 4
  01d3718  li 3, 152
  01d371c  vaddfp 2, 2, 3
  01d3720  vmaddfp 2, 5, 2, 4
  01d3724  vctsxs 2, 2, 0
  01d3728  vspltw 2, 2, 0
  01d372c  stvewx 2, 3, 28
  01d3730  ori 3, 31, 0
  01d3734  bl 0xefb38
  01d3738  nop
  01d373c  lis 3, 29
  01d3740  addi 4, 3, 8704
  01d3744  ori 3, 31, 0
  01d3748  lfs 1, 84(4)
  01d374c  bl 0x106150
  01d3750  nop
  01d3754  ld 0, 656(1)
  01d3758  mtlr 0
  01d375c  lfd 29, 616(1)
  01d3760  lfd 30, 624(1)
  01d3764  lfd 31, 632(1)
  01d3768  ld 26, 568(1)
  01d376c  ld 27, 576(1)
  01d3770  ld 28, 584(1)
  01d3774  ld 29, 592(1)
  01d3778  ld 30, 600(1)
  01d377c  ld 31, 608(1)
  01d3780  addi 1, 1, 640
  01d3784  blr
