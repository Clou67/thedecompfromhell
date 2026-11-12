# game/update/moby621.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_621:   # 0x3e2218, 0x844 bytes
  03e2218  stdu 1, -368(1)
  03e221c  mflr 0
  03e2220  std 0, 384(1)
  03e2224  stfd 27, 328(1)
  03e2228  stfd 28, 336(1)
  03e222c  stfd 29, 344(1)
  03e2230  stfd 30, 352(1)
  03e2234  stfd 31, 360(1)
  03e2238  std 31, 320(1)
  03e223c  ori 31, 3, 0
  03e2240  std 30, 312(1)
  03e2244  lbz 3, 32(31)
  03e2248  lwz 30, 120(31)
  03e224c  cmpwi 3, 1
  03e2250  cmpwi 1, 3, -1
  03e2254  cmpwi 6, 3, 0
  03e2258  std 29, 304(1)
  03e225c  std 28, 296(1)
  03e2260  std 27, 288(1)
  03e2264  cmpwi 7, 3, 2
  03e2268  bt 1, 0x3e2278
  03e226c  bf 5, 0x3e2a24
  03e2270  bf 25, 0x3e2288
  03e2274  b 0x3e22ac
  03e2278  bf 29, 0x3e243c
  03e227c  cmpwi 3, 3
  03e2280  bf 1, 0x3e2988
  03e2284  b 0x3e2a24
  03e2288  lis 3, 62
  03e228c  lfs 1, 24(31)
  03e2290  addi 3, 3, 8640
  03e2294  lfs 2, 0(3)
  03e2298  li 3, 1
  03e229c  fadds 1, 1, 2
  03e22a0  stb 3, 32(31)
  03e22a4  stfs 1, 24(31)
  03e22a8  b 0x3e2a24
  03e22ac  lis 4, 51
  03e22b0  ori 3, 31, 0
  03e22b4  li 5, 0
  03e22b8  bl 0x10675c
  03e22bc  nop
  03e22c0  lis 4, 151
  03e22c4  lfs 1, 20(31)
  03e22c8  lfs 2, 16(31)
  03e22cc  addic 4, 4, -25376
  03e22d0  lis 5, 62
  03e22d4  lfs 3, 132(4)
  03e22d8  lfs 4, 128(4)
  03e22dc  fsubs 1, 1, 3
  03e22e0  fsubs 2, 2, 4
  03e22e4  addi 5, 5, 8640
  03e22e8  fmuls 1, 1, 1
  03e22ec  fmadds 1, 2, 2, 1
  03e22f0  lfs 2, 4(5)
  03e22f4  lwz 5, 572(4)
  03e22f8  fsqrts 1, 1
  03e22fc  fcmpu 0, 1, 2
  03e2300  cror 6, 1, 2
  03e2304  bt 6, 0x3e2314
  03e2308  lwz 4, 8324(4)
  03e230c  cmpwi 4, 66
  03e2310  bt 2, 0x3e231c
  03e2314  cmpw 5, 31
  03e2318  bf 2, 0x3e23a8
  03e231c  li 3, 0
  03e2320  li 4, 0
  03e2324  ori 5, 31, 0
  03e2328  bl 0x15d12c
  03e232c  nop
  03e2330  lis 3, 62
  03e2334  li 7, -1
  03e2338  addi 3, 3, 8640
  03e233c  li 6, 1
  03e2340  li 11, 0
  03e2344  lis 4, 161
  03e2348  addic 5, 31, 16
  03e234c  lfs 1, 8(3)
  03e2350  lfs 2, 20(3)
  03e2354  addic 4, 4, 23856
  03e2358  lfs 4, 12(3)
  03e235c  li 8, 10
  03e2360  lfs 5, 16(3)
  03e2364  li 9, 20
  03e2368  lfs 7, 24(3)
  03e236c  li 10, 60
  03e2370  std 7, 144(1)
  03e2374  ori 3, 31, 0
  03e2378  std 6, 160(1)
  03e237c  fmr 3, 1
  03e2380  std 6, 168(1)
  03e2384  fmr 6, 2
  03e2388  std 7, 176(1)
  03e238c  std 11, 184(1)
  03e2390  bl 0x10e030
  03e2394  nop
  03e2398  ori 3, 31, 0
  03e239c  bl 0xefb38
  03e23a0  nop
  03e23a4  b 0x3e2a24
  03e23a8  cmpwi 3, 0
  03e23ac  bt 2, 0x3e2a24
  03e23b0  li 3, 0
  03e23b4  li 4, 0
  03e23b8  ori 5, 31, 0
  03e23bc  bl 0x15d12c
  03e23c0  nop
  03e23c4  lis 3, 62
  03e23c8  li 7, -1
  03e23cc  addi 3, 3, 8640
  03e23d0  li 6, 1
  03e23d4  li 11, 0
  03e23d8  lis 4, 161
  03e23dc  addic 5, 31, 16
  03e23e0  lfs 1, 28(3)
  03e23e4  lfs 3, 20(3)
  03e23e8  addic 4, 4, 23856
  03e23ec  lfs 4, 8(3)
  03e23f0  li 8, 10
  03e23f4  lfs 5, 16(3)
  03e23f8  li 9, 20
  03e23fc  lfs 7, 24(3)
  03e2400  li 10, 60
  03e2404  std 7, 144(1)
  03e2408  ori 3, 31, 0
  03e240c  std 6, 160(1)
  03e2410  fmr 2, 1
  03e2414  std 6, 168(1)
  03e2418  fmr 6, 3
  03e241c  std 7, 176(1)
  03e2420  std 11, 184(1)
  03e2424  bl 0x10e030
  03e2428  nop
  03e242c  ori 3, 31, 0
  03e2430  bl 0xefb38
  03e2434  nop
  03e2438  b 0x3e2a24
  03e243c  lis 3, 62
  03e2440  lfs 1, 24(31)
  03e2444  addi 3, 3, 8640
  03e2448  lfs 31, 0(3)
  03e244c  lwz 3, 20(30)
  03e2450  fsubs 1, 1, 31
  03e2454  cmpwi 3, -1
  03e2458  stfs 1, 24(31)
  03e245c  bf 2, 0x3e2470
  03e2460  ori 3, 31, 0
  03e2464  bl 0xefb38
  03e2468  nop
  03e246c  b 0x3e2a24
  03e2470  lwz 3, 16(30)
  03e2474  lwz 3, 0(3)
  03e2478  cmpwi 3, 0
  03e247c  bf 2, 0x3e2490
  03e2480  ori 3, 31, 0
  03e2484  bl 0xefb38
  03e2488  nop
  03e248c  b 0x3e2a24
  03e2490  lis 3, 62
  03e2494  lis 4, 114
  03e2498  addi 29, 3, 8640
  03e249c  lis 3, 133
  03e24a0  lfs 3, 32(29)
  03e24a4  lfs 2, 15664(3)
  03e24a8  lfs 1, 68(31)
  03e24ac  fmuls 2, 2, 3
  03e24b0  lfs 4, -3052(4)
  03e24b4  fmuls 2, 2, 4
  03e24b8  bl 0x502578
  03e24bc  nop
  03e24c0  lis 27, 151
  03e24c4  stfs 1, 68(31)
  03e24c8  lfs 2, 20(31)
  03e24cc  addic 27, 27, -25376
  03e24d0  lfs 1, 16(31)
  03e24d4  lfs 3, 132(27)
  03e24d8  lfs 4, 128(27)
  03e24dc  fsubs 3, 2, 3
  03e24e0  fsubs 4, 1, 4
  03e24e4  fmuls 3, 3, 3
  03e24e8  fmadds 3, 4, 4, 3
  03e24ec  lfs 4, 4(29)
  03e24f0  fsqrts 3, 3
  03e24f4  fcmpu 0, 3, 4
  03e24f8  cror 6, 1, 2
  03e24fc  bt 6, 0x3e2590
  03e2500  lwz 3, 8324(27)
  03e2504  cmpwi 3, 66
  03e2508  bf 2, 0x3e2590
  03e250c  lis 3, 62
  03e2510  li 7, 0
  03e2514  addi 6, 3, 8640
  03e2518  li 12, -1
  03e251c  li 11, 1
  03e2520  ori 3, 31, 0
  03e2524  addic 4, 1, 192
  03e2528  lfs 1, 28(6)
  03e252c  addic 5, 31, 16
  03e2530  stw 7, 204(1)
  03e2534  li 8, 10
  03e2538  stw 7, 200(1)
  03e253c  li 9, 20
  03e2540  stw 7, 196(1)
  03e2544  li 10, 60
  03e2548  stw 7, 192(1)
  03e254c  fmr 2, 1
  03e2550  lfs 3, 8(6)
  03e2554  lfs 4, 12(6)
  03e2558  lfs 5, 16(6)
  03e255c  lfs 6, 20(6)
  03e2560  lfs 7, 24(6)
  03e2564  std 12, 144(1)
  03e2568  std 11, 160(1)
  03e256c  std 11, 168(1)
  03e2570  std 12, 176(1)
  03e2574  std 7, 184(1)
  03e2578  bl 0x10e030
  03e257c  nop
  03e2580  ori 3, 31, 0
  03e2584  bl 0xefb38
  03e2588  nop
  03e258c  b 0x3e2a24
  03e2590  lwz 3, 16(30)
  03e2594  lwz 4, 0(30)
  03e2598  lbz 5, 4(30)
  03e259c  extsb 5, 5
  03e25a0  lwz 6, 0(3)
  03e25a4  addc 4, 4, 6
  03e25a8  addc 29, 4, 5
  03e25ac  divw 4, 29, 6
  03e25b0  mullw 4, 4, 6
  03e25b4  subc 29, 29, 4
  03e25b8  sldi 28, 29, 4
  03e25bc  addc 3, 3, 28
  03e25c0  clrldi 3, 3, 32
  03e25c4  lis 4, 115
  03e25c8  lfs 3, 16(3)
  03e25cc  lfs 4, 20(3)
  03e25d0  fsubs 1, 3, 1
  03e25d4  fsubs 2, 4, 2
  03e25d8  lis 3, 62
  03e25dc  addi 3, 3, 8640
  03e25e0  addic 4, 4, 22784
  03e25e4  fabs 3, 1
  03e25e8  fabs 4, 2
  03e25ec  stfs 1, 228(1)
  03e25f0  stfs 2, 232(1)
  03e25f4  fsubs 1, 3, 4
  03e25f8  stfs 1, 236(1)
  03e25fc  lwz 5, 228(1)
  03e2600  lfs 30, 28(3)
  03e2604  lfs 1, 228(1)
  03e2608  lwz 3, 232(1)
  03e260c  lfs 2, 232(1)
  03e2610  fabs 1, 1
  03e2614  lwz 6, 236(1)
  03e2618  rlwinm 3, 3, 3, 29, 29
  03e261c  fabs 5, 2
  03e2620  lfs 2, 236(1)
  03e2624  rlwimi 3, 6, 2, 30, 30
  03e2628  fsub 6, 2, 30
  03e262c  rlwimi 3, 5, 4, 28, 28
  03e2630  fsub 7, 2, 30
  03e2634  ori 5, 4, 0
  03e2638  rlwimi 5, 3, 2, 26, 28
  03e263c  slwi 3, 3, 2
  03e2640  clrldi 5, 5, 32
  03e2644  fsel 4, 6, 1, 4
  03e2648  lfsx 1, 4, 3
  03e264c  lfs 2, 4(5)
  03e2650  fsel 3, 7, 5, 3
  03e2654  fcmpu 0, 4, 30
  03e2658  bt 1, 0x3e2664
  03e265c  fmr 1, 30
  03e2660  b 0x3e2788
  03e2664  fsubs 5, 3, 4
  03e2668  fadds 3, 3, 4
  03e266c  addic 3, 1, 16
  03e2670  li 7, 2
  03e2674  addic 4, 3, 224
  03e2678  addic 5, 3, 240
  03e267c  mtctr 7
  03e2680  fdivs 3, 5, 3
  03e2684  fmuls 4, 3, 3
  03e2688  stfs 3, 252(1)
  03e268c  stfs 3, 244(1)
  03e2690  stfs 3, 248(1)
  03e2694  stfs 3, 240(1)
  03e2698  lfs 6, 252(1)
  03e269c  lfs 7, 244(1)
  03e26a0  lfs 8, 248(1)
  03e26a4  fmuls 5, 4, 4
  03e26a8  fmuls 7, 7, 4
  03e26ac  fmuls 6, 6, 5
  03e26b0  fmuls 3, 5, 5
  03e26b4  fmuls 5, 8, 5
  03e26b8  stfs 7, 244(1)
  03e26bc  fmuls 4, 6, 4
  03e26c0  stfs 5, 248(1)
  03e26c4  stfs 4, 252(1)
  03e26c8  lfs 4, 224(3)
  03e26cc  fmuls 4, 4, 3
  03e26d0  stfs 4, 240(3)
  03e26d4  lfs 4, 4(4)
  03e26d8  addic 3, 3, 8
  03e26dc  addic 4, 4, 8
  03e26e0  fmuls 4, 4, 3
  03e26e4  stfs 4, 4(5)
  03e26e8  addic 5, 5, 8
  03e26ec  bdnz 0x3e26c8
  03e26f0  li 5, 4
  03e26f4  ori 3, 1, 0
  03e26f8  mtctr 5
  03e26fc  lis 4, 115
  03e2700  addic 5, 3, 240
  03e2704  addic 4, 4, 22752
  03e2708  ori 6, 5, 0
  03e270c  lfs 3, 240(3)
  03e2710  lfs 4, 0(4)
  03e2714  fmuls 3, 3, 4
  03e2718  lfs 4, 4(4)
  03e271c  addic 4, 4, 8
  03e2720  stfs 3, 240(3)
  03e2724  lfs 3, 4(5)
  03e2728  addic 3, 3, 8
  03e272c  fmuls 3, 3, 4
  03e2730  stfs 3, 4(5)
  03e2734  addic 5, 5, 8
  03e2738  bdnz 0x3e270c
  03e273c  fmr 3, 30
  03e2740  ori 3, 1, 0
  03e2744  mtctr 7
  03e2748  lfs 4, 240(3)
  03e274c  fadds 3, 3, 4
  03e2750  addic 3, 3, 16
  03e2754  lfs 4, 4(6)
  03e2758  lfs 5, 8(6)
  03e275c  lfs 6, 12(6)
  03e2760  addic 6, 6, 16
  03e2764  fadds 3, 3, 4
  03e2768  fadds 3, 3, 5
  03e276c  fadds 3, 3, 6
  03e2770  bdnz 0x3e2748
  03e2774  lis 3, 62
  03e2778  addi 3, 3, 8640
  03e277c  lfs 4, 36(3)
  03e2780  fadds 3, 3, 4
  03e2784  fmadds 1, 3, 1, 2
  03e2788  lis 3, 62
  03e278c  addic 5, 30, 52
  03e2790  addi 4, 3, 8640
  03e2794  ori 3, 31, 0
  03e2798  lfs 29, 48(4)
  03e279c  lfs 2, 40(4)
  03e27a0  lfs 3, 44(4)
  03e27a4  fmr 4, 29
  03e27a8  bl 0xff2e8
  03e27ac  nop
  03e27b0  lwz 3, 16(30)
  03e27b4  cmpwi 29, 0
  03e27b8  addc 3, 3, 28
  03e27bc  clrldi 3, 3, 32
  03e27c0  lfs 1, 16(3)
  03e27c4  lfs 2, 20(3)
  03e27c8  lfs 3, 24(3)
  03e27cc  bt 2, 0x3e286c
  03e27d0  lfs 5, 20(31)
  03e27d4  lfs 4, 16(31)
  03e27d8  fsubs 6, 2, 5
  03e27dc  fsubs 7, 1, 4
  03e27e0  lfs 8, 24(31)
  03e27e4  fsubs 9, 3, 8
  03e27e8  lis 3, 62
  03e27ec  lis 4, 114
  03e27f0  addi 3, 3, 8640
  03e27f4  fmuls 10, 6, 6
  03e27f8  lfs 11, 8(3)
  03e27fc  lfs 12, -3052(4)
  03e2800  fmuls 11, 12, 11
  03e2804  fmadds 10, 7, 7, 10
  03e2808  fmadds 10, 9, 9, 10
  03e280c  fsqrts 10, 10
  03e2810  fdivs 11, 11, 10
  03e2814  fsub 12, 30, 10
  03e2818  fsub 13, 30, 10
  03e281c  fsub 0, 30, 10
  03e2820  fsub 28, 10, 30
  03e2824  fsub 27, 10, 30
  03e2828  fsub 10, 10, 30
  03e282c  fmuls 9, 9, 11
  03e2830  fmuls 6, 6, 11
  03e2834  fmuls 7, 7, 11
  03e2838  fsel 11, 12, 30, 9
  03e283c  fsel 12, 13, 30, 6
  03e2840  fsel 13, 0, 30, 7
  03e2844  fsel 30, 28, 11, 9
  03e2848  fsel 6, 27, 12, 6
  03e284c  fsel 7, 10, 13, 7
  03e2850  fadds 30, 8, 30
  03e2854  fadds 5, 5, 6
  03e2858  fadds 4, 4, 7
  03e285c  stfs 30, 24(31)
  03e2860  stfs 5, 20(31)
  03e2864  stfs 4, 16(31)
  03e2868  b 0x3e294c
  03e286c  lfs 5, 20(31)
  03e2870  lfs 4, 16(31)
  03e2874  lfs 6, 132(27)
  03e2878  lfs 7, 128(27)
  03e287c  fsubs 6, 5, 6
  03e2880  fsubs 7, 4, 7
  03e2884  lis 3, 62
  03e2888  addi 3, 3, 8640
  03e288c  fmuls 6, 6, 6
  03e2890  fmadds 6, 7, 7, 6
  03e2894  lfs 7, 52(3)
  03e2898  fsqrts 6, 6
  03e289c  fcmpu 0, 6, 7
  03e28a0  cror 6, 1, 2
  03e28a4  bt 6, 0x3e2940
  03e28a8  li 6, 0
  03e28ac  lis 3, 62
  03e28b0  fmr 1, 30
  03e28b4  li 11, -1
  03e28b8  fmr 2, 30
  03e28bc  addi 9, 3, 8640
  03e28c0  stw 6, 220(1)
  03e28c4  stw 6, 216(1)
  03e28c8  li 7, 1
  03e28cc  stw 6, 212(1)
  03e28d0  ori 3, 31, 0
  03e28d4  stw 6, 208(1)
  03e28d8  addic 4, 1, 208
  03e28dc  lfs 3, 8(9)
  03e28e0  addic 5, 31, 16
  03e28e4  lfs 4, 12(9)
  03e28e8  li 8, 10
  03e28ec  lfs 5, 16(9)
  03e28f0  li 10, 60
  03e28f4  lfs 6, 20(9)
  03e28f8  lfs 7, 24(9)
  03e28fc  std 11, 144(1)
  03e2900  li 9, 20
  03e2904  std 7, 160(1)
  03e2908  std 7, 168(1)
  03e290c  std 11, 176(1)
  03e2910  std 6, 184(1)
  03e2914  bl 0x10e030
  03e2918  nop
  03e291c  li 3, 0
  03e2920  li 4, 0
  03e2924  ori 5, 31, 0
  03e2928  bl 0x15d12c
  03e292c  nop
  03e2930  ori 3, 31, 0
  03e2934  bl 0xefb38
  03e2938  nop
  03e293c  b 0x3e2a24
  03e2940  li 3, 3
  03e2944  lfs 30, 24(31)
  03e2948  stb 3, 32(31)
  03e294c  fsubs 2, 5, 2
  03e2950  fsubs 1, 4, 1
  03e2954  fsubs 3, 30, 3
  03e2958  fmuls 2, 2, 2
  03e295c  fmadds 1, 1, 1, 2
  03e2960  fmadds 1, 3, 3, 1
  03e2964  fsqrts 1, 1
  03e2968  fcmpu 0, 1, 29
  03e296c  cror 6, 1, 2
  03e2970  bt 6, 0x3e297c
  03e2974  stw 29, 0(30)
  03e2978  lfs 30, 24(31)
  03e297c  fadds 1, 30, 31
  03e2980  stfs 1, 24(31)
  03e2984  b 0x3e2a24
  03e2988  li 30, 35
  03e298c  vspltisw 2, -8
  03e2990  lis 3, 62
  03e2994  li 29, 224
  03e2998  addi 4, 3, 8640
  03e299c  lis 3, 114
  03e29a0  lvlx 3, 30, 31
  03e29a4  vsrw 2, 3, 2
  03e29a8  lfs 1, -3056(3)
  03e29ac  vcfux 2, 2, 0
  03e29b0  addic 3, 1, 224
  03e29b4  vspltw 2, 2, 0
  03e29b8  stvewx 2, 29, 1
  03e29bc  lfs 2, 56(4)
  03e29c0  fmuls 2, 1, 2
  03e29c4  lfs 3, 60(4)
  03e29c8  lfs 4, 28(4)
  03e29cc  fmr 1, 4
  03e29d0  fctidz 2, 2
  03e29d4  fcfid 2, 2
  03e29d8  frsp 2, 2
  03e29dc  fdivs 2, 3, 2
  03e29e0  bl 0x109af0
  03e29e4  nop
  03e29e8  lvlx 2, 29, 1
  03e29ec  lfs 1, 224(1)
  03e29f0  vctuxs 2, 2, 0
  03e29f4  fctidz 1, 1
  03e29f8  vspltb 2, 2, 3
  03e29fc  stfd 1, 272(1)
  03e2a00  lwz 3, 276(1)
  03e2a04  clrlwi 3, 3, 24
  03e2a08  cmpwi 3, 0
  03e2a0c  stvebx 2, 30, 31
  03e2a10  bf 2, 0x3e2a24
  03e2a14  ori 3, 31, 0
  03e2a18  bl 0xefb38
  03e2a1c  nop
  03e2a20  b 0x3e2a24
  03e2a24  ld 0, 384(1)
  03e2a28  mtlr 0
  03e2a2c  lfd 27, 328(1)
  03e2a30  lfd 28, 336(1)
  03e2a34  lfd 29, 344(1)
  03e2a38  lfd 30, 352(1)
  03e2a3c  lfd 31, 360(1)
  03e2a40  ld 27, 288(1)
  03e2a44  ld 28, 296(1)
  03e2a48  ld 29, 304(1)
  03e2a4c  ld 30, 312(1)
  03e2a50  ld 31, 320(1)
  03e2a54  addi 1, 1, 368
  03e2a58  blr
