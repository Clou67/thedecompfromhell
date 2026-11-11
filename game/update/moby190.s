# game/update/moby190.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M190_002d2290:   # 0x2d2290, 0x30 bytes
  02d2290  stdu 1, -112(1)
  02d2294  mflr 0
  02d2298  std 0, 128(1)
  02d229c  lis 3, 266
  02d22a0  li 4, 17
  02d22a4  addic 3, 3, 9280
  02d22a8  bl 0x17cfdc
  02d22ac  nop
  02d22b0  ld 0, 128(1)
  02d22b4  mtlr 0
  02d22b8  addi 1, 1, 112
  02d22bc  blr

M190_002d22c0:   # 0x2d22c0, 0x14 bytes
  02d22c0  lis 3, 124
  02d22c4  lis 4, 1
  02d22c8  addic 3, 3, -10592
  02d22cc  stw 4, 72(3)
  02d22d0  blr

M190_002d2308:   # 0x2d2308, 0x400 bytes
  02d2308  stdu 1, -192(1)
  02d230c  stfd 20, 96(1)
  02d2310  stfd 21, 104(1)
  02d2314  stfd 22, 112(1)
  02d2318  stfd 23, 120(1)
  02d231c  stfd 24, 128(1)
  02d2320  stfd 25, 136(1)
  02d2324  stfd 26, 144(1)
  02d2328  stfd 27, 152(1)
  02d232c  stfd 28, 160(1)
  02d2330  stfd 29, 168(1)
  02d2334  stfd 30, 176(1)
  02d2338  stfd 31, 184(1)
  02d233c  lfs 5, 4(3)
  02d2340  fmr 31, 3
  02d2344  lfs 6, 4(4)
  02d2348  lfs 7, 0(3)
  02d234c  fsubs 10, 6, 5
  02d2350  lfs 8, 0(4)
  02d2354  lfs 11, 8(3)
  02d2358  fsubs 13, 8, 7
  02d235c  lfs 12, 8(4)
  02d2360  fsubs 0, 12, 11
  02d2364  fsubs 30, 7, 8
  02d2368  lis 3, 45
  02d236c  fmuls 4, 10, 10
  02d2370  addi 3, 3, 8920
  02d2374  fsubs 26, 11, 12
  02d2378  fmadds 3, 13, 13, 4
  02d237c  fsubs 4, 5, 6
  02d2380  fmadds 9, 0, 0, 3
  02d2384  fmuls 4, 4, 4
  02d2388  lfs 3, 8(3)
  02d238c  lfs 29, 4(3)
  02d2390  fsubs 27, 31, 3
  02d2394  lfs 28, 0(3)
  02d2398  fsqrts 9, 9
  02d239c  lis 3, 115
  02d23a0  addic 3, 3, 22784
  02d23a4  fmadds 30, 30, 30, 4
  02d23a8  fmr 4, 29
  02d23ac  fmadds 30, 26, 26, 30
  02d23b0  fsqrts 30, 30
  02d23b4  fdivs 29, 27, 9
  02d23b8  fsub 27, 4, 9
  02d23bc  fsub 26, 4, 9
  02d23c0  fsub 25, 9, 4
  02d23c4  fsub 24, 9, 4
  02d23c8  fsub 23, 4, 9
  02d23cc  fsub 22, 9, 4
  02d23d0  fmuls 9, 1, 31
  02d23d4  fmuls 9, 9, 28
  02d23d8  fsub 21, 31, 30
  02d23dc  fsub 20, 31, 30
  02d23e0  fsub 31, 31, 30
  02d23e4  fmuls 10, 29, 10
  02d23e8  fmuls 13, 29, 13
  02d23ec  fmuls 0, 29, 0
  02d23f0  fsel 30, 27, 4, 10
  02d23f4  fsel 28, 26, 4, 13
  02d23f8  fsel 10, 25, 30, 10
  02d23fc  fsel 13, 24, 28, 13
  02d2400  fadds 10, 10, 5
  02d2404  fadds 13, 13, 7
  02d2408  fsel 6, 21, 6, 10
  02d240c  fsel 8, 20, 8, 13
  02d2410  fsel 10, 23, 4, 0
  02d2414  fsubs 13, 6, 5
  02d2418  fsubs 30, 8, 7
  02d241c  fsel 10, 22, 10, 0
  02d2420  fsubs 5, 5, 6
  02d2424  fsubs 7, 7, 8
  02d2428  fabs 0, 13
  02d242c  fabs 29, 30
  02d2430  fadds 10, 10, 11
  02d2434  fmuls 5, 5, 5
  02d2438  stfs 30, 48(1)
  02d243c  stfs 13, 52(1)
  02d2440  fsubs 6, 29, 0
  02d2444  fsel 8, 31, 12, 10
  02d2448  fmadds 5, 7, 7, 5
  02d244c  fsubs 7, 8, 11
  02d2450  stfs 6, 56(1)
  02d2454  lwz 4, 48(1)
  02d2458  lfs 6, 48(1)
  02d245c  lwz 6, 52(1)
  02d2460  fabs 10, 6
  02d2464  lfs 6, 52(1)
  02d2468  fsqrts 8, 5
  02d246c  rlwinm 6, 6, 3, 29, 29
  02d2470  lwz 7, 56(1)
  02d2474  lfs 5, 56(1)
  02d2478  fabs 11, 6
  02d247c  rlwimi 6, 7, 2, 30, 30
  02d2480  fsub 6, 5, 4
  02d2484  fsub 5, 5, 4
  02d2488  rlwimi 6, 4, 4, 28, 28
  02d248c  ori 4, 3, 0
  02d2490  rlwimi 4, 6, 2, 26, 28
  02d2494  slwi 6, 6, 2
  02d2498  clrldi 4, 4, 32
  02d249c  fsel 10, 6, 10, 0
  02d24a0  lfsx 6, 3, 6
  02d24a4  fsel 11, 5, 11, 29
  02d24a8  lfs 5, 4(4)
  02d24ac  fcmpu 0, 10, 4
  02d24b0  bt 1, 0x2d24b8
  02d24b4  b 0x2d25dc
  02d24b8  fsubs 12, 11, 10
  02d24bc  fadds 10, 11, 10
  02d24c0  addic 7, 1, 16
  02d24c4  li 3, 2
  02d24c8  addic 4, 7, 60
  02d24cc  addic 6, 7, 44
  02d24d0  mtctr 3
  02d24d4  fdivs 10, 12, 10
  02d24d8  fmuls 12, 10, 10
  02d24dc  stfs 10, 72(1)
  02d24e0  stfs 10, 64(1)
  02d24e4  stfs 10, 68(1)
  02d24e8  stfs 10, 60(1)
  02d24ec  lfs 13, 72(1)
  02d24f0  lfs 0, 64(1)
  02d24f4  lfs 31, 68(1)
  02d24f8  fmuls 10, 12, 12
  02d24fc  fmuls 0, 0, 12
  02d2500  fmuls 13, 13, 10
  02d2504  fmuls 11, 10, 10
  02d2508  fmuls 10, 31, 10
  02d250c  stfs 0, 64(1)
  02d2510  fmuls 12, 13, 12
  02d2514  stfs 10, 68(1)
  02d2518  stfs 12, 72(1)
  02d251c  lfs 10, 44(7)
  02d2520  fmuls 10, 10, 11
  02d2524  stfs 10, 60(7)
  02d2528  lfs 10, 4(6)
  02d252c  addic 6, 6, 8
  02d2530  fmuls 10, 10, 11
  02d2534  addic 7, 7, 8
  02d2538  stfs 10, 4(4)
  02d253c  addic 4, 4, 8
  02d2540  bdnz 0x2d251c
  02d2544  ori 8, 1, 0
  02d2548  li 4, 4
  02d254c  lis 7, 115
  02d2550  addic 6, 8, 60
  02d2554  mtctr 4
  02d2558  addic 7, 7, 22752
  02d255c  ori 4, 6, 0
  02d2560  lfs 10, 60(8)
  02d2564  lfs 11, 0(7)
  02d2568  fmuls 10, 10, 11
  02d256c  lfs 11, 4(7)
  02d2570  addic 7, 7, 8
  02d2574  stfs 10, 60(8)
  02d2578  lfs 10, 4(6)
  02d257c  addic 8, 8, 8
  02d2580  fmuls 10, 10, 11
  02d2584  stfs 10, 4(6)
  02d2588  addic 6, 6, 8
  02d258c  bdnz 0x2d2560
  02d2590  ori 6, 3, 0
  02d2594  ori 3, 1, 0
  02d2598  mtctr 6
  02d259c  lfs 10, 60(3)
  02d25a0  fadds 4, 4, 10
  02d25a4  lfs 10, 4(4)
  02d25a8  addic 3, 3, 16
  02d25ac  lfs 11, 8(4)
  02d25b0  lfs 12, 12(4)
  02d25b4  addic 4, 4, 16
  02d25b8  fadds 4, 4, 10
  02d25bc  fadds 4, 4, 11
  02d25c0  fadds 4, 4, 12
  02d25c4  bdnz 0x2d259c
  02d25c8  lis 3, 45
  02d25cc  addi 3, 3, 8920
  02d25d0  lfs 10, 12(3)
  02d25d4  fadds 4, 4, 10
  02d25d8  fmadds 4, 4, 6, 5
  02d25dc  fsub 5, 8, 2
  02d25e0  lis 3, 45
  02d25e4  addi 3, 3, 8920
  02d25e8  fsel 2, 5, 8, 2
  02d25ec  lfs 5, 16(3)
  02d25f0  fsubs 3, 2, 3
  02d25f4  fsub 6, 7, 2
  02d25f8  fmuls 1, 2, 1
  02d25fc  fsel 3, 6, 3, 7
  02d2600  fmuls 1, 1, 2
  02d2604  fsubs 2, 2, 3
  02d2608  lfs 3, 20(3)
  02d260c  fadds 3, 4, 3
  02d2610  fmuls 2, 2, 5
  02d2614  lfs 5, 24(3)
  02d2618  fsubs 10, 5, 3
  02d261c  fsubs 5, 5, 4
  02d2620  fdivs 1, 1, 2
  02d2624  lfs 2, 28(3)
  02d2628  lfs 6, 32(3)
  02d262c  lfs 7, 36(3)
  02d2630  lfs 8, 40(3)
  02d2634  fsub 13, 4, 5
  02d2638  fsubs 12, 2, 3
  02d263c  fsub 11, 3, 10
  02d2640  fsubs 2, 2, 4
  02d2644  fsel 4, 13, 5, 4
  02d2648  fmr 5, 6
  02d264c  fsel 3, 11, 10, 3
  02d2650  fsub 10, 2, 4
  02d2654  fsub 6, 12, 3
  02d2658  fsel 2, 10, 2, 4
  02d265c  fsel 3, 6, 12, 3
  02d2660  fmuls 10, 2, 2
  02d2664  fmuls 6, 3, 3
  02d2668  fsub 4, 9, 1
  02d266c  fsel 1, 4, 1, 9
  02d2670  fmuls 4, 6, 3
  02d2674  fmuls 9, 10, 2
  02d2678  fsqrts 1, 1
  02d267c  fmadds 3, 4, 5, 3
  02d2680  fmuls 12, 6, 4
  02d2684  fmr 4, 8
  02d2688  fmadds 2, 9, 5, 2
  02d268c  fmuls 8, 10, 9
  02d2690  lfs 5, 44(3)
  02d2694  fmuls 9, 6, 12
  02d2698  fmadds 3, 12, 7, 3
  02d269c  fmuls 11, 10, 8
  02d26a0  fmadds 2, 8, 7, 2
  02d26a4  fmuls 6, 6, 9
  02d26a8  fmadds 3, 9, 4, 3
  02d26ac  fmuls 7, 10, 11
  02d26b0  fmadds 2, 11, 4, 2
  02d26b4  fmadds 3, 6, 5, 3
  02d26b8  fmadds 2, 7, 5, 2
  02d26bc  fmuls 3, 3, 1
  02d26c0  stfs 1, 8(5)
  02d26c4  fmuls 2, 2, 1
  02d26c8  stfs 3, 0(5)
  02d26cc  stfs 2, 4(5)
  02d26d0  lfd 20, 96(1)
  02d26d4  lfd 21, 104(1)
  02d26d8  lfd 22, 112(1)
  02d26dc  lfd 23, 120(1)
  02d26e0  lfd 24, 128(1)
  02d26e4  lfd 25, 136(1)
  02d26e8  lfd 26, 144(1)
  02d26ec  lfd 27, 152(1)
  02d26f0  lfd 28, 160(1)
  02d26f4  lfd 29, 168(1)
  02d26f8  lfd 30, 176(1)
  02d26fc  lfd 31, 184(1)
  02d2700  addi 1, 1, 192
  02d2704  blr

UpdateMoby_190:   # 0x2d2780, 0x1608 bytes
  02d2780  stdu 1, -848(1)
  02d2784  mflr 0
  02d2788  std 0, 864(1)
  02d278c  stfd 17, 728(1)
  02d2790  stfd 18, 736(1)
  02d2794  stfd 19, 744(1)
  02d2798  stfd 20, 752(1)
  02d279c  stfd 21, 760(1)
  02d27a0  stfd 22, 768(1)
  02d27a4  stfd 23, 776(1)
  02d27a8  stfd 24, 784(1)
  02d27ac  stfd 25, 792(1)
  02d27b0  stfd 26, 800(1)
  02d27b4  stfd 27, 808(1)
  02d27b8  stfd 28, 816(1)
  02d27bc  stfd 29, 824(1)
  02d27c0  stfd 30, 832(1)
  02d27c4  stfd 31, 840(1)
  02d27c8  std 31, 720(1)
  02d27cc  cmpwi 3, 0
  02d27d0  std 30, 712(1)
  02d27d4  std 29, 704(1)
  02d27d8  std 28, 696(1)
  02d27dc  std 27, 688(1)
  02d27e0  std 26, 680(1)
  02d27e4  std 25, 672(1)
  02d27e8  std 24, 664(1)
  02d27ec  ori 31, 3, 0
  02d27f0  bt 2, 0x2d3d1c
  02d27f4  lwz 30, 120(31)
  02d27f8  lwz 3, 92(30)
  02d27fc  cmpwi 3, 3
  02d2800  bf 0, 0x2d2810
  02d2804  addic 3, 3, 1
  02d2808  stw 3, 92(30)
  02d280c  b 0x2d3d1c
  02d2810  lis 3, 45
  02d2814  lis 29, 149
  02d2818  addi 5, 3, 9992
  02d281c  addic 28, 1, 208
  02d2820  addic 29, 29, 5056
  02d2824  ori 3, 28, 0
  02d2828  ori 4, 29, 0
  02d282c  lfs 31, 0(5)
  02d2830  lfs 30, 4(5)
  02d2834  bl 0x500fa8
  02d2838  nop
  02d283c  addic 3, 1, 320
  02d2840  ori 4, 28, 0
  02d2844  bl 0x5010c0
  02d2848  nop
  02d284c  cmpwi 30, 0
  02d2850  bt 2, 0x2d3d1c
  02d2854  addic 5, 1, 112
  02d2858  ori 3, 31, 0
  02d285c  li 4, 0
  02d2860  bl 0xf1114
  02d2864  nop
  02d2868  addic 5, 1, 256
  02d286c  ori 3, 31, 0
  02d2870  li 4, 0
  02d2874  bl 0xf1038
  02d2878  nop
  02d287c  lfs 1, 288(1)
  02d2880  lfs 2, 272(1)
  02d2884  fmuls 1, 1, 30
  02d2888  lfs 3, 292(1)
  02d288c  lfs 4, 276(1)
  02d2890  fmuls 3, 3, 30
  02d2894  lfs 5, 112(1)
  02d2898  lfs 6, 296(1)
  02d289c  lfs 7, 280(1)
  02d28a0  fmuls 6, 6, 30
  02d28a4  lwz 3, 80(30)
  02d28a8  fmadds 1, 2, 31, 1
  02d28ac  cmpwi 3, 0
  02d28b0  fmadds 2, 4, 31, 3
  02d28b4  fmadds 3, 7, 31, 6
  02d28b8  fadds 1, 5, 1
  02d28bc  stfs 1, 64(30)
  02d28c0  lfs 1, 116(1)
  02d28c4  fadds 1, 1, 2
  02d28c8  stfs 1, 68(30)
  02d28cc  lfs 1, 120(1)
  02d28d0  fadds 1, 1, 3
  02d28d4  stfs 1, 72(30)
  02d28d8  lfs 1, 124(1)
  02d28dc  stfs 1, 76(30)
  02d28e0  bt 2, 0x2d28f0
  02d28e4  li 4, 1
  02d28e8  stw 4, 152(3)
  02d28ec  lwz 3, 80(30)
  02d28f0  cmpwi 3, 0
  02d28f4  bt 2, 0x2d290c
  02d28f8  lbz 3, 32(3)
  02d28fc  cmpwi 3, 254
  02d2900  cmpwi 1, 3, 253
  02d2904  bt 2, 0x2d290c
  02d2908  bf 6, 0x2d2914
  02d290c  li 3, 0
  02d2910  stw 3, 80(30)
  02d2914  lis 26, 151
  02d2918  addic 26, 26, -25376
  02d291c  lwz 3, 8324(26)
  02d2920  cmpwi 3, 1
  02d2924  bf 2, 0x2d2938
  02d2928  li 3, 30
  02d292c  li 4, 1
  02d2930  bl 0xb72b0
  02d2934  nop
  02d2938  addic 3, 30, 88
  02d293c  bl 0x4fff60
  02d2940  nop
  02d2944  lwz 4, 8324(26)
  02d2948  cmpwi 3, 0
  02d294c  lwz 3, 4256(26)
  02d2950  bt 2, 0x2d2a34
  02d2954  lbz 5, 8364(26)
  02d2958  cmpwi 5, 0
  02d295c  bf 2, 0x2d2a34
  02d2960  lbz 5, 8360(26)
  02d2964  cmpwi 5, 0
  02d2968  bt 2, 0x2d299c
  02d296c  lis 5, 45
  02d2970  lis 6, 114
  02d2974  addi 5, 5, 9992
  02d2978  lfs 1, 8(5)
  02d297c  lfs 2, -3056(6)
  02d2980  lwz 5, 444(26)
  02d2984  fmuls 1, 2, 1
  02d2988  fctiwz 1, 1
  02d298c  stfd 1, 640(1)
  02d2990  lwz 6, 644(1)
  02d2994  cmpw 5, 6
  02d2998  bt 2, 0x2d2a0c
  02d299c  lis 5, 150
  02d29a0  cmpwi 1, 4, 30
  02d29a4  addic 5, 5, 19008
  02d29a8  lwz 5, 164(5)
  02d29ac  and 3, 5, 3
  02d29b0  cmpwi 3, 0
  02d29b4  crorc 2, 2, 6
  02d29b8  bt 2, 0x2d29d4
  02d29bc  li 3, -1
  02d29c0  bl 0x8e0f4
  02d29c4  nop
  02d29c8  cmpwi 3, 0
  02d29cc  bf 2, 0x2d2a0c
  02d29d0  lwz 4, 8324(26)
  02d29d4  cmpwi 4, 35
  02d29d8  bf 2, 0x2d2a34
  02d29dc  lis 3, 45
  02d29e0  lis 4, 114
  02d29e4  addi 3, 3, 9992
  02d29e8  lfs 1, 12(3)
  02d29ec  lfs 2, -3056(4)
  02d29f0  lwz 3, 408(26)
  02d29f4  fmuls 1, 2, 1
  02d29f8  fctiwz 1, 1
  02d29fc  stfd 1, 640(1)
  02d2a00  lwz 4, 644(1)
  02d2a04  cmpw 3, 4
  02d2a08  bf 2, 0x2d2a34
  02d2a0c  li 3, 26
  02d2a10  li 4, 0
  02d2a14  bl 0x816ec
  02d2a18  nop
  02d2a1c  li 3, -1
  02d2a20  li 4, 1
  02d2a24  bl 0xaa258
  02d2a28  nop
  02d2a2c  li 3, 3
  02d2a30  stb 3, 32(31)
  02d2a34  lwz 28, 80(30)
  02d2a38  cmpwi 28, 0
  02d2a3c  bt 2, 0x2d3a28
  02d2a40  lbz 3, 8364(26)
  02d2a44  cmpwi 3, 0
  02d2a48  bf 2, 0x2d3a28
  02d2a4c  lis 3, 45
  02d2a50  lis 25, 151
  02d2a54  lwz 28, 120(28)
  02d2a58  addi 3, 3, 9992
  02d2a5c  addic 25, 25, -25432
  02d2a60  lfs 27, 16(3)
  02d2a64  lbz 3, 17(25)
  02d2a68  cmpwi 3, 0
  02d2a6c  bt 2, 0x2d2aa8
  02d2a70  lis 3, 150
  02d2a74  lis 4, 45
  02d2a78  addic 3, 3, 19008
  02d2a7c  li 5, 5
  02d2a80  addi 4, 4, 9992
  02d2a84  lwz 3, 160(3)
  02d2a88  and 3, 3, 5
  02d2a8c  lfs 31, 20(4)
  02d2a90  cmpwi 3, 0
  02d2a94  bt 2, 0x2d2aa4
  02d2a98  lis 3, 45
  02d2a9c  addi 3, 3, 9992
  02d2aa0  lfs 31, 24(3)
  02d2aa4  b 0x2d2adc
  02d2aa8  lis 3, 150
  02d2aac  lis 4, 45
  02d2ab0  addic 3, 3, 19008
  02d2ab4  li 5, 5
  02d2ab8  addi 4, 4, 9992
  02d2abc  lwz 3, 160(3)
  02d2ac0  and 3, 3, 5
  02d2ac4  lfs 31, 20(4)
  02d2ac8  cmpwi 3, 0
  02d2acc  bt 2, 0x2d2adc
  02d2ad0  lis 3, 45
  02d2ad4  addi 3, 3, 9992
  02d2ad8  lfs 31, 28(3)
  02d2adc  lwz 4, 1648(26)
  02d2ae0  lis 3, 45
  02d2ae4  lwz 5, 1652(26)
  02d2ae8  lis 6, 114
  02d2aec  lfs 1, 1648(26)
  02d2af0  addi 3, 3, 9992
  02d2af4  lfs 2, 1652(26)
  02d2af8  fabs 3, 1
  02d2afc  fabs 2, 2
  02d2b00  rlwinm 5, 5, 3, 29, 29
  02d2b04  lfs 26, 32(3)
  02d2b08  lfs 4, -3052(6)
  02d2b0c  fmuls 28, 4, 31
  02d2b10  lfs 31, 1600(26)
  02d2b14  lfs 30, 1604(26)
  02d2b18  lis 27, 115
  02d2b1c  fsubs 1, 3, 2
  02d2b20  addic 27, 27, 22784
  02d2b24  fmuls 31, 31, 28
  02d2b28  fmuls 30, 30, 28
  02d2b2c  stfs 1, 412(1)
  02d2b30  lfs 29, 1608(26)
  02d2b34  lfs 1, 1612(26)
  02d2b38  fmuls 29, 29, 28
  02d2b3c  lfs 17, 36(3)
  02d2b40  fmuls 28, 1, 28
  02d2b44  lwz 3, 412(1)
  02d2b48  lfs 1, 412(1)
  02d2b4c  rlwimi 5, 3, 2, 30, 30
  02d2b50  fsub 4, 1, 27
  02d2b54  fsub 5, 1, 27
  02d2b58  rlwimi 5, 4, 4, 28, 28
  02d2b5c  ori 3, 27, 0
  02d2b60  slwi 4, 5, 2
  02d2b64  rlwimi 3, 5, 2, 26, 28
  02d2b68  clrldi 3, 3, 32
  02d2b6c  lfsx 1, 27, 4
  02d2b70  fsel 4, 4, 3, 2
  02d2b74  fsel 3, 5, 2, 3
  02d2b78  lfs 2, 4(3)
  02d2b7c  fcmpu 0, 4, 27
  02d2b80  bt 1, 0x2d2b8c
  02d2b84  fmr 1, 27
  02d2b88  b 0x2d2ca4
  02d2b8c  fsubs 5, 3, 4
  02d2b90  fadds 3, 3, 4
  02d2b94  addic 3, 1, 16
  02d2b98  li 7, 2
  02d2b9c  addic 4, 3, 592
  02d2ba0  addic 5, 3, 608
  02d2ba4  mtctr 7
  02d2ba8  fdivs 3, 5, 3
  02d2bac  fmuls 4, 3, 3
  02d2bb0  stfs 3, 620(1)
  02d2bb4  stfs 3, 612(1)
  02d2bb8  stfs 3, 616(1)
  02d2bbc  stfs 3, 608(1)
  02d2bc0  lfs 6, 620(1)
  02d2bc4  lfs 7, 612(1)
  02d2bc8  lfs 8, 616(1)
  02d2bcc  fmuls 5, 4, 4
  02d2bd0  fmuls 7, 7, 4
  02d2bd4  fmuls 6, 6, 5
  02d2bd8  fmuls 3, 5, 5
  02d2bdc  fmuls 5, 8, 5
  02d2be0  stfs 7, 612(1)
  02d2be4  fmuls 4, 6, 4
  02d2be8  stfs 5, 616(1)
  02d2bec  stfs 4, 620(1)
  02d2bf0  lfs 4, 592(3)
  02d2bf4  fmuls 4, 4, 3
  02d2bf8  stfs 4, 608(3)
  02d2bfc  lfs 4, 4(4)
  02d2c00  addic 3, 3, 8
  02d2c04  addic 4, 4, 8
  02d2c08  fmuls 4, 4, 3
  02d2c0c  stfs 4, 4(5)
  02d2c10  addic 5, 5, 8
  02d2c14  bdnz 0x2d2bf0
  02d2c18  li 5, 4
  02d2c1c  ori 3, 1, 0
  02d2c20  mtctr 5
  02d2c24  lis 4, 115
  02d2c28  addic 5, 3, 608
  02d2c2c  addic 4, 4, 22752
  02d2c30  ori 6, 5, 0
  02d2c34  lfs 3, 608(3)
  02d2c38  lfs 4, 0(4)
  02d2c3c  fmuls 3, 3, 4
  02d2c40  lfs 4, 4(4)
  02d2c44  addic 4, 4, 8
  02d2c48  stfs 3, 608(3)
  02d2c4c  lfs 3, 4(5)
  02d2c50  addic 3, 3, 8
  02d2c54  fmuls 3, 3, 4
  02d2c58  stfs 3, 4(5)
  02d2c5c  addic 5, 5, 8
  02d2c60  bdnz 0x2d2c34
  02d2c64  fmr 3, 27
  02d2c68  ori 3, 1, 0
  02d2c6c  mtctr 7
  02d2c70  lfs 4, 608(3)
  02d2c74  fadds 3, 3, 4
  02d2c78  addic 3, 3, 16
  02d2c7c  lfs 4, 4(6)
  02d2c80  lfs 5, 8(6)
  02d2c84  lfs 6, 12(6)
  02d2c88  addic 6, 6, 16
  02d2c8c  fadds 3, 3, 4
  02d2c90  fadds 3, 3, 5
  02d2c94  fadds 3, 3, 6
  02d2c98  bdnz 0x2d2c70
  02d2c9c  fadds 3, 3, 17
  02d2ca0  fmadds 1, 3, 1, 2
  02d2ca4  fmr 2, 1
  02d2ca8  fmr 1, 26
  02d2cac  bl 0x502578
  02d2cb0  nop
  02d2cb4  lis 3, 45
  02d2cb8  addi 3, 3, 9992
  02d2cbc  lfs 25, 40(3)
  02d2cc0  lfs 24, 44(3)
  02d2cc4  fadds 1, 1, 25
  02d2cc8  lfs 23, 48(3)
  02d2ccc  lwz 4, 1648(26)
  02d2cd0  lwz 5, 1652(26)
  02d2cd4  lfs 4, 1648(26)
  02d2cd8  lfs 6, 1652(26)
  02d2cdc  fabs 7, 4
  02d2ce0  lfs 22, 52(3)
  02d2ce4  fabs 6, 6
  02d2ce8  lfs 21, 56(3)
  02d2cec  lfs 20, 60(3)
  02d2cf0  lfs 19, 64(3)
  02d2cf4  fsubs 2, 24, 1
  02d2cf8  lfs 18, 68(3)
  02d2cfc  fsubs 3, 23, 1
  02d2d00  rlwinm 5, 5, 3, 29, 29
  02d2d04  fsub 5, 1, 2
  02d2d08  fsel 1, 5, 2, 1
  02d2d0c  fsubs 2, 7, 6
  02d2d10  fsub 4, 3, 1
  02d2d14  stfs 2, 408(1)
  02d2d18  fsel 1, 4, 3, 1
  02d2d1c  fmuls 2, 1, 1
  02d2d20  lwz 3, 408(1)
  02d2d24  lfs 5, 408(1)
  02d2d28  rlwimi 5, 3, 2, 30, 30
  02d2d2c  ori 3, 27, 0
  02d2d30  rlwimi 5, 4, 4, 28, 28
  02d2d34  fmuls 3, 2, 1
  02d2d38  rlwimi 3, 5, 2, 26, 28
  02d2d3c  slwi 4, 5, 2
  02d2d40  clrldi 3, 3, 32
  02d2d44  fmuls 4, 2, 3
  02d2d48  fmadds 1, 3, 22, 1
  02d2d4c  fsub 3, 5, 27
  02d2d50  fmuls 8, 2, 4
  02d2d54  fmadds 1, 4, 21, 1
  02d2d58  fsel 4, 3, 7, 6
  02d2d5c  fsub 3, 5, 27
  02d2d60  fmuls 2, 2, 8
  02d2d64  fmadds 1, 8, 20, 1
  02d2d68  fcmpu 0, 4, 27
  02d2d6c  fsel 3, 3, 6, 7
  02d2d70  fmadds 1, 2, 19, 1
  02d2d74  fmuls 1, 1, 18
  02d2d78  stfs 1, 128(1)
  02d2d7c  lfsx 1, 27, 4
  02d2d80  lfs 2, 4(3)
  02d2d84  bt 1, 0x2d2d90
  02d2d88  fmr 1, 27
  02d2d8c  b 0x2d2ea8
  02d2d90  fsubs 5, 3, 4
  02d2d94  fadds 3, 3, 4
  02d2d98  addic 3, 1, 16
  02d2d9c  li 7, 2
  02d2da0  addic 5, 3, 576
  02d2da4  addic 4, 3, 560
  02d2da8  mtctr 7
  02d2dac  fdivs 3, 5, 3
  02d2db0  fmuls 4, 3, 3
  02d2db4  stfs 3, 588(1)
  02d2db8  stfs 3, 580(1)
  02d2dbc  stfs 3, 584(1)
  02d2dc0  stfs 3, 576(1)
  02d2dc4  lfs 6, 588(1)
  02d2dc8  lfs 7, 580(1)
  02d2dcc  lfs 8, 584(1)
  02d2dd0  fmuls 5, 4, 4
  02d2dd4  fmuls 7, 7, 4
  02d2dd8  fmuls 6, 6, 5
  02d2ddc  fmuls 3, 5, 5
  02d2de0  fmuls 5, 8, 5
  02d2de4  stfs 7, 580(1)
  02d2de8  fmuls 4, 6, 4
  02d2dec  stfs 5, 584(1)
  02d2df0  stfs 4, 588(1)
  02d2df4  lfs 4, 560(3)
  02d2df8  fmuls 4, 4, 3
  02d2dfc  stfs 4, 576(3)
  02d2e00  lfs 4, 4(4)
  02d2e04  addic 4, 4, 8
  02d2e08  fmuls 4, 4, 3
  02d2e0c  addic 3, 3, 8
  02d2e10  stfs 4, 4(5)
  02d2e14  addic 5, 5, 8
  02d2e18  bdnz 0x2d2df4
  02d2e1c  li 5, 4
  02d2e20  ori 3, 1, 0
  02d2e24  mtctr 5
  02d2e28  lis 4, 115
  02d2e2c  addic 5, 3, 576
  02d2e30  addic 4, 4, 22752
  02d2e34  ori 6, 5, 0
  02d2e38  lfs 3, 576(3)
  02d2e3c  lfs 4, 0(4)
  02d2e40  fmuls 3, 3, 4
  02d2e44  lfs 4, 4(4)
  02d2e48  addic 4, 4, 8
  02d2e4c  stfs 3, 576(3)
  02d2e50  lfs 3, 4(5)
  02d2e54  addic 3, 3, 8
  02d2e58  fmuls 3, 3, 4
  02d2e5c  stfs 3, 4(5)
  02d2e60  addic 5, 5, 8
  02d2e64  bdnz 0x2d2e38
  02d2e68  ori 3, 1, 0
  02d2e6c  fmr 3, 27
  02d2e70  mtctr 7
  02d2e74  lfs 4, 576(3)
  02d2e78  fadds 3, 3, 4
  02d2e7c  lfs 4, 4(6)
  02d2e80  addic 3, 3, 16
  02d2e84  lfs 5, 8(6)
  02d2e88  lfs 6, 12(6)
  02d2e8c  addic 6, 6, 16
  02d2e90  fadds 3, 3, 4
  02d2e94  fadds 3, 3, 5
  02d2e98  fadds 3, 3, 6
  02d2e9c  bdnz 0x2d2e74
  02d2ea0  fadds 3, 3, 17
  02d2ea4  fmadds 1, 3, 1, 2
  02d2ea8  fmr 2, 1
  02d2eac  fmr 1, 26
  02d2eb0  bl 0x502578
  02d2eb4  nop
  02d2eb8  fsubs 2, 24, 1
  02d2ebc  fsubs 3, 23, 1
  02d2ec0  li 3, 0
  02d2ec4  fabs 10, 31
  02d2ec8  fabs 11, 30
  02d2ecc  lis 4, 45
  02d2ed0  addi 4, 4, 9992
  02d2ed4  fsub 4, 1, 2
  02d2ed8  fsubs 12, 10, 11
  02d2edc  fsel 1, 4, 2, 1
  02d2ee0  fsub 9, 12, 27
  02d2ee4  fsub 12, 12, 27
  02d2ee8  fsub 2, 3, 1
  02d2eec  fsel 9, 9, 10, 11
  02d2ef0  fsel 1, 2, 3, 1
  02d2ef4  lfs 2, 128(1)
  02d2ef8  lfs 4, 128(26)
  02d2efc  lfs 8, 132(26)
  02d2f00  fcmpu 0, 9, 27
  02d2f04  stw 3, 136(1)
  02d2f08  fmuls 3, 1, 1
  02d2f0c  cror 6, 0, 2
  02d2f10  fmuls 5, 3, 1
  02d2f14  fmuls 6, 3, 5
  02d2f18  fmadds 5, 5, 22, 1
  02d2f1c  fadds 1, 2, 4
  02d2f20  fmuls 2, 3, 6
  02d2f24  fmadds 4, 6, 21, 5
  02d2f28  stfs 1, 128(1)
  02d2f2c  lbz 3, 17(25)
  02d2f30  fmuls 3, 3, 2
  02d2f34  fmadds 2, 2, 20, 4
  02d2f38  lfs 4, 352(1)
  02d2f3c  lfs 5, 356(1)
  02d2f40  lfs 6, 360(1)
  02d2f44  lfs 7, 364(1)
  02d2f48  lfs 13, 136(26)
  02d2f4c  fmadds 2, 3, 19, 2
  02d2f50  fmuls 3, 2, 18
  02d2f54  fadds 2, 3, 8
  02d2f58  fsel 8, 12, 11, 10
  02d2f5c  stfs 3, 132(1)
  02d2f60  stfs 2, 132(1)
  02d2f64  lfs 3, 72(4)
  02d2f68  fadds 3, 13, 3
  02d2f6c  stfs 3, 136(1)
  02d2f70  bt 6, 0x2d3048
  02d2f74  fsubs 10, 8, 9
  02d2f78  fadds 8, 8, 9
  02d2f7c  addic 4, 1, 16
  02d2f80  li 7, 2
  02d2f84  addic 5, 4, 528
  02d2f88  addic 6, 4, 544
  02d2f8c  mtctr 7
  02d2f90  fdivs 8, 10, 8
  02d2f94  fmuls 9, 8, 8
  02d2f98  stfs 8, 556(1)
  02d2f9c  stfs 8, 548(1)
  02d2fa0  stfs 8, 552(1)
  02d2fa4  stfs 8, 544(1)
  02d2fa8  lfs 11, 556(1)
  02d2fac  lfs 12, 548(1)
  02d2fb0  lfs 13, 552(1)
  02d2fb4  fmuls 10, 9, 9
  02d2fb8  fmuls 12, 12, 9
  02d2fbc  fmuls 11, 11, 10
  02d2fc0  fmuls 8, 10, 10
  02d2fc4  fmuls 10, 13, 10
  02d2fc8  stfs 12, 548(1)
  02d2fcc  fmuls 9, 11, 9
  02d2fd0  stfs 10, 552(1)
  02d2fd4  stfs 9, 556(1)
  02d2fd8  lfs 9, 528(4)
  02d2fdc  fmuls 9, 9, 8
  02d2fe0  stfs 9, 544(4)
  02d2fe4  lfs 9, 4(5)
  02d2fe8  addic 4, 4, 8
  02d2fec  addic 5, 5, 8
  02d2ff0  fmuls 9, 9, 8
  02d2ff4  stfs 9, 4(6)
  02d2ff8  addic 6, 6, 8
  02d2ffc  bdnz 0x2d2fd8
  02d3000  lis 5, 115
  02d3004  ori 4, 1, 0
  02d3008  li 7, 4
  02d300c  addic 5, 5, 22752
  02d3010  addic 6, 4, 544
  02d3014  mtctr 7
  02d3018  lfs 8, 544(4)
  02d301c  lfs 9, 0(5)
  02d3020  fmuls 8, 8, 9
  02d3024  lfs 9, 4(5)
  02d3028  addic 5, 5, 8
  02d302c  stfs 8, 544(4)
  02d3030  lfs 8, 4(6)
  02d3034  addic 4, 4, 8
  02d3038  fmuls 8, 8, 9
  02d303c  stfs 8, 4(6)
  02d3040  addic 6, 6, 8
  02d3044  bdnz 0x2d3018
  02d3048  lis 4, 45
  02d304c  lis 5, 114
  02d3050  addi 4, 4, 9992
  02d3054  lis 24, 150
  02d3058  addic 24, 24, 19008
  02d305c  lfs 8, 76(4)
  02d3060  lfs 9, -3056(5)
  02d3064  stfs 28, 156(1)
  02d3068  li 4, 5
  02d306c  fmuls 8, 9, 8
  02d3070  lwz 5, 160(24)
  02d3074  and 4, 5, 4
  02d3078  cmpwi 4, 0
  02d307c  fmadds 1, 31, 8, 1
  02d3080  fmadds 2, 30, 8, 2
  02d3084  fmadds 3, 29, 8, 3
  02d3088  stfs 1, 144(1)
  02d308c  stfs 2, 148(1)
  02d3090  stfs 3, 152(1)
  02d3094  bt 2, 0x2d3994
  02d3098  cmpwi 3, 0
  02d309c  bt 2, 0x2d30b0
  02d30a0  lis 3, 45
  02d30a4  addi 3, 3, 9992
  02d30a8  lfs 1, 24(3)
  02d30ac  b 0x2d30bc
  02d30b0  lis 3, 45
  02d30b4  addi 3, 3, 9992
  02d30b8  lfs 1, 28(3)
  02d30bc  fmuls 2, 4, 1
  02d30c0  fmuls 3, 5, 1
  02d30c4  fmuls 4, 6, 1
  02d30c8  fmuls 1, 7, 1
  02d30cc  lwz 3, 8320(26)
  02d30d0  fabs 6, 2
  02d30d4  fabs 5, 3
  02d30d8  stfs 2, 160(1)
  02d30dc  stfs 3, 164(1)
  02d30e0  stfs 4, 168(1)
  02d30e4  stfs 1, 172(1)
  02d30e8  lfs 1, 72(3)
  02d30ec  stfs 2, 396(1)
  02d30f0  stfs 3, 400(1)
  02d30f4  fsubs 2, 6, 5
  02d30f8  stfs 2, 404(1)
  02d30fc  lwz 3, 396(1)
  02d3100  lfs 2, 396(1)
  02d3104  lwz 4, 400(1)
  02d3108  lfs 3, 400(1)
  02d310c  lwz 5, 404(1)
  02d3110  rlwinm 4, 4, 3, 29, 29
  02d3114  fabs 4, 3
  02d3118  lfs 3, 404(1)
  02d311c  fabs 2, 2
  02d3120  rlwimi 4, 5, 2, 30, 30
  02d3124  fsub 7, 3, 27
  02d3128  fsub 8, 3, 27
  02d312c  rlwimi 4, 3, 4, 28, 28
  02d3130  ori 3, 27, 0
  02d3134  rlwimi 3, 4, 2, 26, 28
  02d3138  slwi 4, 4, 2
  02d313c  clrldi 3, 3, 32
  02d3140  fsel 5, 7, 2, 5
  02d3144  lfsx 2, 27, 4
  02d3148  fsel 4, 8, 4, 6
  02d314c  lfs 3, 4(3)
  02d3150  fcmpu 0, 5, 27
  02d3154  bt 1, 0x2d3160
  02d3158  fmr 2, 27
  02d315c  b 0x2d3278
  02d3160  fsubs 6, 4, 5
  02d3164  fadds 4, 4, 5
  02d3168  addic 3, 1, 16
  02d316c  li 7, 2
  02d3170  addic 5, 3, 512
  02d3174  addic 4, 3, 496
  02d3178  mtctr 7
  02d317c  fdivs 4, 6, 4
  02d3180  fmuls 5, 4, 4
  02d3184  stfs 4, 524(1)
  02d3188  stfs 4, 516(1)
  02d318c  stfs 4, 520(1)
  02d3190  stfs 4, 512(1)
  02d3194  lfs 7, 524(1)
  02d3198  lfs 8, 516(1)
  02d319c  lfs 9, 520(1)
  02d31a0  fmuls 6, 5, 5
  02d31a4  fmuls 8, 8, 5
  02d31a8  fmuls 7, 7, 6
  02d31ac  fmuls 4, 6, 6
  02d31b0  fmuls 6, 9, 6
  02d31b4  stfs 8, 516(1)
  02d31b8  fmuls 5, 7, 5
  02d31bc  stfs 6, 520(1)
  02d31c0  stfs 5, 524(1)
  02d31c4  lfs 5, 496(3)
  02d31c8  fmuls 5, 5, 4
  02d31cc  stfs 5, 512(3)
  02d31d0  lfs 5, 4(4)
  02d31d4  addic 4, 4, 8
  02d31d8  fmuls 5, 5, 4
  02d31dc  addic 3, 3, 8
  02d31e0  stfs 5, 4(5)
  02d31e4  addic 5, 5, 8
  02d31e8  bdnz 0x2d31c4
  02d31ec  li 5, 4
  02d31f0  ori 3, 1, 0
  02d31f4  mtctr 5
  02d31f8  lis 4, 115
  02d31fc  addic 5, 3, 512
  02d3200  addic 4, 4, 22752
  02d3204  ori 6, 5, 0
  02d3208  lfs 4, 512(3)
  02d320c  lfs 5, 0(4)
  02d3210  fmuls 4, 4, 5
  02d3214  lfs 5, 4(4)
  02d3218  addic 4, 4, 8
  02d321c  stfs 4, 512(3)
  02d3220  lfs 4, 4(5)
  02d3224  addic 3, 3, 8
  02d3228  fmuls 4, 4, 5
  02d322c  stfs 4, 4(5)
  02d3230  addic 5, 5, 8
  02d3234  bdnz 0x2d3208
  02d3238  ori 3, 1, 0
  02d323c  fmr 4, 27
  02d3240  mtctr 7
  02d3244  lfs 5, 512(3)
  02d3248  fadds 4, 4, 5
  02d324c  lfs 5, 4(6)
  02d3250  addic 3, 3, 16
  02d3254  lfs 6, 8(6)
  02d3258  lfs 7, 12(6)
  02d325c  addic 6, 6, 16
  02d3260  fadds 4, 4, 5
  02d3264  fadds 4, 4, 6
  02d3268  fadds 4, 4, 7
  02d326c  bdnz 0x2d3244
  02d3270  fadds 4, 4, 17
  02d3274  fmadds 2, 4, 2, 3
  02d3278  bl 0x5025e0
  02d327c  nop
  02d3280  lwz 3, 160(1)
  02d3284  lwz 4, 164(1)
  02d3288  lfs 3, 160(1)
  02d328c  lfs 4, 164(1)
  02d3290  rlwinm 7, 4, 3, 29, 29
  02d3294  fabs 6, 3
  02d3298  fabs 2, 4
  02d329c  lwz 6, 168(1)
  02d32a0  fsubs 1, 6, 2
  02d32a4  stfs 1, 392(1)
  02d32a8  lfs 5, 168(1)
  02d32ac  lbz 4, 17(25)
  02d32b0  lwz 5, 160(24)
  02d32b4  lwz 8, 392(1)
  02d32b8  lfs 1, 392(1)
  02d32bc  rlwimi 7, 8, 2, 30, 30
  02d32c0  fsub 7, 1, 27
  02d32c4  fsub 8, 1, 27
  02d32c8  rlwimi 7, 3, 4, 28, 28
  02d32cc  ori 3, 27, 0
  02d32d0  rlwimi 3, 7, 2, 26, 28
  02d32d4  slwi 7, 7, 2
  02d32d8  clrldi 3, 3, 32
  02d32dc  fsel 7, 7, 6, 2
  02d32e0  lfsx 1, 27, 7
  02d32e4  fsel 6, 8, 2, 6
  02d32e8  lfs 2, 4(3)
  02d32ec  fcmpu 0, 7, 27
  02d32f0  bt 1, 0x2d32fc
  02d32f4  fmr 31, 27
  02d32f8  b 0x2d3414
  02d32fc  fsubs 8, 6, 7
  02d3300  fadds 6, 6, 7
  02d3304  addic 3, 1, 16
  02d3308  li 10, 2
  02d330c  addic 7, 3, 464
  02d3310  addic 8, 3, 480
  02d3314  mtctr 10
  02d3318  fdivs 6, 8, 6
  02d331c  fmuls 7, 6, 6
  02d3320  stfs 6, 492(1)
  02d3324  stfs 6, 484(1)
  02d3328  stfs 6, 488(1)
  02d332c  stfs 6, 480(1)
  02d3330  lfs 9, 492(1)
  02d3334  lfs 10, 484(1)
  02d3338  lfs 11, 488(1)
  02d333c  fmuls 8, 7, 7
  02d3340  fmuls 10, 10, 7
  02d3344  fmuls 9, 9, 8
  02d3348  fmuls 6, 8, 8
  02d334c  fmuls 8, 11, 8
  02d3350  stfs 10, 484(1)
  02d3354  fmuls 7, 9, 7
  02d3358  stfs 8, 488(1)
  02d335c  stfs 7, 492(1)
  02d3360  lfs 7, 464(3)
  02d3364  fmuls 7, 7, 6
  02d3368  stfs 7, 480(3)
  02d336c  lfs 7, 4(7)
  02d3370  addic 3, 3, 8
  02d3374  addic 7, 7, 8
  02d3378  fmuls 7, 7, 6
  02d337c  stfs 7, 4(8)
  02d3380  addic 8, 8, 8
  02d3384  bdnz 0x2d3360
  02d3388  li 8, 4
  02d338c  ori 3, 1, 0
  02d3390  mtctr 8
  02d3394  lis 7, 115
  02d3398  addic 8, 3, 480
  02d339c  addic 7, 7, 22752
  02d33a0  ori 9, 8, 0
  02d33a4  lfs 6, 480(3)
  02d33a8  lfs 7, 0(7)
  02d33ac  fmuls 6, 6, 7
  02d33b0  lfs 7, 4(7)
  02d33b4  addic 7, 7, 8
  02d33b8  stfs 6, 480(3)
  02d33bc  lfs 6, 4(8)
  02d33c0  addic 3, 3, 8
  02d33c4  fmuls 6, 6, 7
  02d33c8  stfs 6, 4(8)
  02d33cc  addic 8, 8, 8
  02d33d0  bdnz 0x2d33a4
  02d33d4  fmr 31, 27
  02d33d8  ori 3, 1, 0
  02d33dc  mtctr 10
  02d33e0  lfs 6, 480(3)
  02d33e4  lfs 7, 4(9)
  02d33e8  fadds 6, 31, 6
  02d33ec  lfs 8, 8(9)
  02d33f0  addic 3, 3, 16
  02d33f4  lfs 31, 12(9)
  02d33f8  addic 9, 9, 16
  02d33fc  fadds 6, 6, 7
  02d3400  fadds 6, 6, 8
  02d3404  fadds 31, 6, 31
  02d3408  bdnz 0x2d33e0
  02d340c  fadds 31, 31, 17
  02d3410  fmadds 31, 31, 1, 2
  02d3414  fmuls 1, 4, 4
  02d3418  rlwinm 3, 6, 3, 29, 29
  02d341c  fabs 2, 5
  02d3420  fmadds 1, 3, 3, 1
  02d3424  fsqrts 1, 1
  02d3428  fabs 5, 1
  02d342c  stfs 1, 384(1)
  02d3430  fsubs 1, 5, 2
  02d3434  stfs 1, 388(1)
  02d3438  lwz 6, 384(1)
  02d343c  lfs 1, 384(1)
  02d3440  lwz 7, 388(1)
  02d3444  fabs 4, 1
  02d3448  lfs 1, 388(1)
  02d344c  rlwimi 3, 7, 2, 30, 30
  02d3450  fsub 3, 1, 27
  02d3454  fsub 1, 1, 27
  02d3458  rlwimi 3, 6, 4, 28, 28
  02d345c  ori 6, 27, 0
  02d3460  rlwimi 6, 3, 2, 26, 28
  02d3464  slwi 3, 3, 2
  02d3468  clrldi 6, 6, 32
  02d346c  fsel 4, 3, 4, 2
  02d3470  lfsx 3, 27, 3
  02d3474  fsel 2, 1, 2, 5
  02d3478  lfs 1, 4(6)
  02d347c  fcmpu 0, 4, 27
  02d3480  bt 1, 0x2d348c
  02d3484  fmr 3, 27
  02d3488  b 0x2d35a4
  02d348c  fsubs 5, 2, 4
  02d3490  fadds 2, 2, 4
  02d3494  addic 3, 1, 16
  02d3498  li 9, 2
  02d349c  addic 6, 3, 432
  02d34a0  addic 7, 3, 448
  02d34a4  mtctr 9
  02d34a8  fdivs 2, 5, 2
  02d34ac  fmuls 4, 2, 2
  02d34b0  stfs 2, 460(1)
  02d34b4  stfs 2, 452(1)
  02d34b8  stfs 2, 456(1)
  02d34bc  stfs 2, 448(1)
  02d34c0  lfs 6, 460(1)
  02d34c4  lfs 7, 452(1)
  02d34c8  lfs 8, 456(1)
  02d34cc  fmuls 5, 4, 4
  02d34d0  fmuls 7, 7, 4
  02d34d4  fmuls 6, 6, 5
  02d34d8  fmuls 2, 5, 5
  02d34dc  fmuls 5, 8, 5
  02d34e0  stfs 7, 452(1)
  02d34e4  fmuls 4, 6, 4
  02d34e8  stfs 5, 456(1)
  02d34ec  stfs 4, 460(1)
  02d34f0  lfs 4, 432(3)
  02d34f4  fmuls 4, 4, 2
  02d34f8  stfs 4, 448(3)
  02d34fc  lfs 4, 4(6)
  02d3500  addic 3, 3, 8
  02d3504  addic 6, 6, 8
  02d3508  fmuls 4, 4, 2
  02d350c  stfs 4, 4(7)
  02d3510  addic 7, 7, 8
  02d3514  bdnz 0x2d34f0
  02d3518  li 7, 4
  02d351c  ori 3, 1, 0
  02d3520  mtctr 7
  02d3524  lis 6, 115
  02d3528  addic 7, 3, 448
  02d352c  addic 6, 6, 22752
  02d3530  ori 8, 7, 0
  02d3534  lfs 2, 448(3)
  02d3538  lfs 4, 0(6)
  02d353c  fmuls 2, 2, 4
  02d3540  lfs 4, 4(6)
  02d3544  addic 6, 6, 8
  02d3548  stfs 2, 448(3)
  02d354c  lfs 2, 4(7)
  02d3550  addic 3, 3, 8
  02d3554  fmuls 2, 2, 4
  02d3558  stfs 2, 4(7)
  02d355c  addic 7, 7, 8
  02d3560  bdnz 0x2d3534
  02d3564  fmr 2, 27
  02d3568  ori 3, 1, 0
  02d356c  mtctr 9
  02d3570  lfs 4, 448(3)
  02d3574  fadds 2, 2, 4
  02d3578  addic 3, 3, 16
  02d357c  lfs 4, 4(8)
  02d3580  lfs 5, 8(8)
  02d3584  lfs 6, 12(8)
  02d3588  addic 8, 8, 16
  02d358c  fadds 2, 2, 4
  02d3590  fadds 2, 2, 5
  02d3594  fadds 2, 2, 6
  02d3598  bdnz 0x2d3570
  02d359c  fadds 2, 2, 17
  02d35a0  fmadds 3, 2, 3, 1
  02d35a4  lis 3, 45
  02d35a8  addi 3, 3, 9992
  02d35ac  cmpwi 4, 0
  02d35b0  lfs 1, 80(3)
  02d35b4  lfs 2, 84(3)
  02d35b8  fsub 4, 1, 3
  02d35bc  fsel 3, 4, 3, 1
  02d35c0  fsub 1, 3, 2
  02d35c4  fsel 3, 1, 3, 2
  02d35c8  bt 2, 0x2d35f8
  02d35cc  lis 3, 45
  02d35d0  li 4, 5
  02d35d4  addi 3, 3, 9992
  02d35d8  and 4, 5, 4
  02d35dc  cmpwi 4, 0
  02d35e0  lfs 30, 20(3)
  02d35e4  bt 2, 0x2d35f4
  02d35e8  lis 3, 45
  02d35ec  addi 3, 3, 9992
  02d35f0  lfs 30, 24(3)
  02d35f4  b 0x2d3620
  02d35f8  lis 3, 45
  02d35fc  li 4, 5
  02d3600  addi 3, 3, 9992
  02d3604  and 4, 5, 4
  02d3608  cmpwi 4, 0
  02d360c  lfs 30, 20(3)
  02d3610  bt 2, 0x2d3620
  02d3614  lis 3, 45
  02d3618  addi 3, 3, 9992
  02d361c  lfs 30, 28(3)
  02d3620  fmr 1, 30
  02d3624  addic 3, 1, 160
  02d3628  fmr 2, 31
  02d362c  bl 0xfe610
  02d3630  nop
  02d3634  lfs 1, 164(1)
  02d3638  lfs 2, 160(1)
  02d363c  fmuls 1, 1, 1
  02d3640  lis 3, 45
  02d3644  lis 4, 114
  02d3648  addi 3, 3, 9992
  02d364c  fmadds 1, 2, 2, 1
  02d3650  lfs 5, 88(3)
  02d3654  lfs 2, 92(3)
  02d3658  lfs 30, 168(1)
  02d365c  lfs 4, -3048(4)
  02d3660  lbz 3, 17(25)
  02d3664  fmuls 2, 4, 2
  02d3668  fsqrts 1, 1
  02d366c  cmpwi 3, 0
  02d3670  lwz 3, 160(24)
  02d3674  fsub 3, 27, 1
  02d3678  fsub 4, 1, 27
  02d367c  fsel 3, 3, 5, 1
  02d3680  fsel 1, 4, 3, 1
  02d3684  fdivs 30, 30, 1
  02d3688  bt 2, 0x2d36b8
  02d368c  lis 4, 45
  02d3690  li 5, 5
  02d3694  addi 4, 4, 9992
  02d3698  and 3, 3, 5
  02d369c  cmpwi 3, 0
  02d36a0  lfs 1, 20(4)
  02d36a4  bt 2, 0x2d36b4
  02d36a8  lis 3, 45
  02d36ac  addi 3, 3, 9992
  02d36b0  lfs 1, 24(3)
  02d36b4  b 0x2d36e0
  02d36b8  lis 4, 45
  02d36bc  li 5, 5
  02d36c0  addi 4, 4, 9992
  02d36c4  and 3, 3, 5
  02d36c8  cmpwi 3, 0
  02d36cc  lfs 1, 20(4)
  02d36d0  bt 2, 0x2d36e0
  02d36d4  lis 3, 45
  02d36d8  addi 3, 3, 9992
  02d36dc  lfs 1, 28(3)
  02d36e0  fmuls 1, 2, 1
  02d36e4  lis 3, 45
  02d36e8  addi 3, 3, 9992
  02d36ec  lfs 3, 96(3)
  02d36f0  fmuls 1, 1, 3
  02d36f4  lfs 3, 100(3)
  02d36f8  lfs 4, 104(3)
  02d36fc  fsubs 4, 4, 30
  02d3700  fsqrts 1, 1
  02d3704  fmuls 3, 1, 3
  02d3708  fmuls 1, 3, 1
  02d370c  fmuls 1, 1, 4
  02d3710  fdivs 1, 1, 2
  02d3714  fcmpu 0, 1, 27
  02d3718  fmuls 30, 30, 1
  02d371c  cror 6, 0, 2
  02d3720  bt 6, 0x2d3994
  02d3724  fadds 2, 31, 25
  02d3728  fsubs 3, 24, 31
  02d372c  fsubs 4, 23, 31
  02d3730  addic 3, 29, 320
  02d3734  addic 4, 1, 176
  02d3738  li 5, 2
  02d373c  ori 6, 31, 0
  02d3740  fsubs 5, 24, 2
  02d3744  fsub 6, 31, 3
  02d3748  fsubs 7, 23, 2
  02d374c  li 7, 0
  02d3750  fsub 8, 2, 5
  02d3754  fsel 3, 6, 3, 31
  02d3758  fsel 2, 8, 5, 2
  02d375c  fsub 5, 4, 3
  02d3760  fsub 6, 7, 2
  02d3764  fsel 3, 5, 4, 3
  02d3768  fsel 2, 6, 7, 2
  02d376c  fmuls 4, 3, 3
  02d3770  fmuls 5, 2, 2
  02d3774  fmuls 6, 4, 3
  02d3778  fmuls 7, 5, 2
  02d377c  fmuls 8, 4, 6
  02d3780  fmadds 3, 6, 22, 3
  02d3784  fmuls 6, 5, 7
  02d3788  fmadds 2, 7, 22, 2
  02d378c  fmuls 7, 4, 8
  02d3790  fmadds 3, 8, 21, 3
  02d3794  fmuls 8, 5, 6
  02d3798  fmadds 2, 6, 21, 2
  02d379c  fmuls 4, 4, 7
  02d37a0  lfs 6, 320(29)
  02d37a4  fmadds 3, 7, 20, 3
  02d37a8  fmuls 5, 5, 8
  02d37ac  fmadds 2, 8, 20, 2
  02d37b0  fmadds 31, 4, 19, 3
  02d37b4  lfs 3, 324(29)
  02d37b8  lfs 4, 328(29)
  02d37bc  stfs 30, 168(1)
  02d37c0  fmadds 25, 5, 19, 2
  02d37c4  fadds 2, 4, 30
  02d37c8  fmuls 31, 31, 1
  02d37cc  lfs 4, 332(29)
  02d37d0  fmuls 25, 25, 1
  02d37d4  fadds 1, 3, 31
  02d37d8  stfs 31, 164(1)
  02d37dc  stfs 2, 184(1)
  02d37e0  stfs 4, 188(1)
  02d37e4  fadds 2, 6, 25
  02d37e8  stfs 25, 160(1)
  02d37ec  stfs 1, 180(1)
  02d37f0  stfs 2, 176(1)
  02d37f4  bl 0x57820
  02d37f8  nop
  02d37fc  cmpwi 3, 0
  02d3800  bt 2, 0x2d394c
  02d3804  lis 3, 161
  02d3808  lwz 4, 8320(26)
  02d380c  addic 3, 3, 2368
  02d3810  lwz 5, 24(3)
  02d3814  cmpw 5, 4
  02d3818  bt 2, 0x2d394c
  02d381c  lfs 1, 32(3)
  02d3820  lfs 2, 36(3)
  02d3824  lfs 3, 128(1)
  02d3828  lfs 4, 132(1)
  02d382c  fsubs 3, 1, 3
  02d3830  stfs 1, 144(1)
  02d3834  fsubs 4, 2, 4
  02d3838  lfs 1, 40(3)
  02d383c  stfs 2, 148(1)
  02d3840  lfs 2, 44(3)
  02d3844  stfs 1, 152(1)
  02d3848  stfs 2, 156(1)
  02d384c  fabs 3, 3
  02d3850  fabs 4, 4
  02d3854  fsubs 1, 3, 4
  02d3858  fsub 2, 1, 27
  02d385c  fsub 1, 1, 27
  02d3860  fsel 2, 2, 3, 4
  02d3864  fsel 1, 1, 4, 3
  02d3868  fcmpu 0, 2, 27
  02d386c  cror 6, 0, 2
  02d3870  bt 6, 0x2d3994
  02d3874  fsubs 3, 1, 2
  02d3878  fadds 1, 1, 2
  02d387c  addic 3, 1, 16
  02d3880  li 6, 2
  02d3884  addic 4, 3, 400
  02d3888  addic 5, 3, 416
  02d388c  mtctr 6
  02d3890  fdivs 1, 3, 1
  02d3894  fmuls 2, 1, 1
  02d3898  stfs 1, 428(1)
  02d389c  stfs 1, 420(1)
  02d38a0  stfs 1, 424(1)
  02d38a4  stfs 1, 416(1)
  02d38a8  lfs 4, 428(1)
  02d38ac  lfs 5, 420(1)
  02d38b0  lfs 6, 424(1)
  02d38b4  fmuls 3, 2, 2
  02d38b8  fmuls 5, 5, 2
  02d38bc  fmuls 4, 4, 3
  02d38c0  fmuls 1, 3, 3
  02d38c4  fmuls 3, 6, 3
  02d38c8  stfs 5, 420(1)
  02d38cc  fmuls 2, 4, 2
  02d38d0  stfs 3, 424(1)
  02d38d4  stfs 2, 428(1)
  02d38d8  lfs 2, 400(3)
  02d38dc  fmuls 2, 2, 1
  02d38e0  stfs 2, 416(3)
  02d38e4  lfs 2, 4(4)
  02d38e8  addic 3, 3, 8
  02d38ec  addic 4, 4, 8
  02d38f0  fmuls 2, 2, 1
  02d38f4  stfs 2, 4(5)
  02d38f8  addic 5, 5, 8
  02d38fc  bdnz 0x2d38d8
  02d3900  lis 4, 115
  02d3904  ori 3, 1, 0
  02d3908  li 6, 4
  02d390c  addic 4, 4, 22752
  02d3910  addic 5, 3, 416
  02d3914  mtctr 6
  02d3918  lfs 1, 416(3)
  02d391c  lfs 2, 0(4)
  02d3920  fmuls 1, 1, 2
  02d3924  lfs 2, 4(4)
  02d3928  addic 4, 4, 8
  02d392c  stfs 1, 416(3)
  02d3930  lfs 1, 4(5)
  02d3934  addic 3, 3, 8
  02d3938  fmuls 1, 1, 2
  02d393c  stfs 1, 4(5)
  02d3940  addic 5, 5, 8
  02d3944  bdnz 0x2d3918
  02d3948  b 0x2d3994
  02d394c  lis 3, 45
  02d3950  addi 3, 3, 9992
  02d3954  lfs 1, 108(3)
  02d3958  lfs 2, 320(29)
  02d395c  fmuls 5, 25, 1
  02d3960  lfs 3, 324(29)
  02d3964  fmuls 6, 31, 1
  02d3968  lfs 4, 328(29)
  02d396c  fmuls 1, 30, 1
  02d3970  fadds 2, 5, 2
  02d3974  fadds 3, 6, 3
  02d3978  fadds 4, 1, 4
  02d397c  stfs 5, 144(1)
  02d3980  stfs 6, 148(1)
  02d3984  stfs 1, 152(1)
  02d3988  stfs 2, 144(1)
  02d398c  stfs 3, 148(1)
  02d3990  stfs 4, 152(1)
  02d3994  lis 3, 45
  02d3998  lbz 5, 17(25)
  02d399c  lis 4, 114
  02d39a0  addi 3, 3, 9992
  02d39a4  cmpwi 5, 0
  02d39a8  lfs 1, 92(3)
  02d39ac  lfs 3, -3048(4)
  02d39b0  lfs 2, 104(3)
  02d39b4  fmuls 1, 3, 1
  02d39b8  bt 2, 0x2d39ec
  02d39bc  lis 3, 45
  02d39c0  lwz 5, 160(24)
  02d39c4  li 4, 5
  02d39c8  addi 3, 3, 9992
  02d39cc  lfs 3, 20(3)
  02d39d0  and 3, 5, 4
  02d39d4  cmpwi 3, 0
  02d39d8  bt 2, 0x2d39e8
  02d39dc  lis 3, 45
  02d39e0  addi 3, 3, 9992
  02d39e4  lfs 3, 24(3)
  02d39e8  b 0x2d3a18
  02d39ec  lis 3, 45
  02d39f0  lwz 5, 160(24)
  02d39f4  li 4, 5
  02d39f8  addi 3, 3, 9992
  02d39fc  lfs 3, 20(3)
  02d3a00  and 3, 5, 4
  02d3a04  cmpwi 3, 0
  02d3a08  bt 2, 0x2d3a18
  02d3a0c  lis 3, 45
  02d3a10  addi 3, 3, 9992
  02d3a14  lfs 3, 28(3)
  02d3a18  addic 4, 1, 144
  02d3a1c  addic 3, 1, 128
  02d3a20  ori 5, 28, 0
  02d3a24  bl 0x2d2308
  02d3a28  lbz 3, 32(31)
  02d3a2c  cmpwi 3, 6
  02d3a30  cmpwi 1, 3, 5
  02d3a34  cmpwi 6, 3, 4
  02d3a38  cmpwi 7, 3, 3
  02d3a3c  bt 2, 0x2d3c80
  02d3a40  bt 6, 0x2d3c74
  02d3a44  bt 26, 0x2d3c50
  02d3a48  bt 30, 0x2d3abc
  02d3a4c  cmpwi 3, 2
  02d3a50  bt 2, 0x2d3c9c
  02d3a54  cmpwi 3, 1
  02d3a58  bt 2, 0x2d3aa0
  02d3a5c  cmpwi 3, 0
  02d3a60  bf 2, 0x2d3c9c
  02d3a64  li 3, 0
  02d3a68  li 5, 0
  02d3a6c  li 4, 1
  02d3a70  li 6, 2
  02d3a74  stw 3, 80(30)
  02d3a78  lbz 3, 112(31)
  02d3a7c  subc 4, 4, 6
  02d3a80  rlwinm 3, 3, 0, 30, 30
  02d3a84  subc 3, 5, 3
  02d3a88  cntlzw 3, 3
  02d3a8c  sldi 3, 3, 58
  02d3a90  sradi 3, 3, 63
  02d3a94  and 3, 3, 4
  02d3a98  addc 3, 6, 3
  02d3a9c  stb 3, 32(31)
  02d3aa0  lbz 3, 112(31)
  02d3aa4  rlwinm 3, 3, 0, 30, 30
  02d3aa8  cmpwi 3, 0
  02d3aac  bt 2, 0x2d3c9c
  02d3ab0  li 3, 2
  02d3ab4  stb 3, 32(31)
  02d3ab8  b 0x2d3c9c
  02d3abc  lwz 3, 80(30)
  02d3ac0  cmpwi 3, 0
  02d3ac4  bt 2, 0x2d3c08
  02d3ac8  ori 4, 3, 0
  02d3acc  addic 3, 1, 128
  02d3ad0  lwz 5, 120(4)
  02d3ad4  bl 0x43ce28
  02d3ad8  nop
  02d3adc  lis 4, 161
  02d3ae0  lis 3, 0
  02d3ae4  addic 4, 4, -732
  02d3ae8  ori 6, 3, 65535
  02d3aec  lhz 3, 136(4)
  02d3af0  lhz 5, 138(4)
  02d3af4  cmpw 3, 6
  02d3af8  lwz 6, 140(4)
  02d3afc  bf 0, 0x2d3b08
  02d3b00  addic 3, 3, 1
  02d3b04  sth 3, 136(4)
  02d3b08  lis 3, 161
  02d3b0c  lis 7, 114
  02d3b10  lwz 3, -2344(3)
  02d3b14  extsw 3, 3
  02d3b18  std 3, 640(1)
  02d3b1c  lis 3, 45
  02d3b20  addi 3, 3, 9992
  02d3b24  lfs 1, 96(3)
  02d3b28  lfs 2, -3056(7)
  02d3b2c  lfd 3, 640(1)
  02d3b30  lis 3, 6990
  02d3b34  fcfid 3, 3
  02d3b38  ori 7, 3, 33205
  02d3b3c  frsp 3, 3
  02d3b40  fadds 1, 3, 1
  02d3b44  fmuls 1, 2, 1
  02d3b48  fctiwz 1, 1
  02d3b4c  stfd 1, 640(1)
  02d3b50  lwz 3, 644(1)
  02d3b54  mulhw 7, 7, 3
  02d3b58  srawi 7, 7, 6
  02d3b5c  srwi 8, 7, 31
  02d3b60  addc 7, 7, 8
  02d3b64  cmpw 7, 5
  02d3b68  bf 1, 0x2d3b88
  02d3b6c  lis 5, 6990
  02d3b70  ori 5, 5, 33205
  02d3b74  mulhw 3, 5, 3
  02d3b78  srawi 3, 3, 6
  02d3b7c  srwi 5, 3, 31
  02d3b80  addc 3, 3, 5
  02d3b84  sth 3, 138(4)
  02d3b88  ori 3, 4, 0
  02d3b8c  lis 4, 151
  02d3b90  li 5, 1
  02d3b94  lis 7, -32768
  02d3b98  lis 8, 165
  02d3b9c  lwz 4, -25488(4)
  02d3ba0  slw 5, 5, 4
  02d3ba4  addic 4, 8, 7912
  02d3ba8  or 6, 6, 5
  02d3bac  li 5, 63
  02d3bb0  or 6, 6, 7
  02d3bb4  stw 6, 140(3)
  02d3bb8  lwz 3, 80(30)
  02d3bbc  bl 0x110724
  02d3bc0  nop
  02d3bc4  lis 3, 45
  02d3bc8  vspltisw 2, -1
  02d3bcc  li 4, 0
  02d3bd0  addi 3, 3, 9992
  02d3bd4  li 6, 112
  02d3bd8  li 5, -3056
  02d3bdc  stw 4, 80(30)
  02d3be0  lis 4, 114
  02d3be4  vslw 2, 2, 2
  02d3be8  <unknown>
  02d3bec  li 3, 84
  02d3bf0  vspltw 3, 3, 0
  02d3bf4  <unknown>
  02d3bf8  vmaddfp 2, 4, 3, 2
  02d3bfc  vctsxs 2, 2, 0
  02d3c00  vspltw 2, 2, 0
  02d3c04  stvewx 2, 3, 30
  02d3c08  lis 3, 45
  02d3c0c  li 4, 4
  02d3c10  vspltisw 2, -1
  02d3c14  addi 3, 3, 9992
  02d3c18  li 5, 116
  02d3c1c  lis 6, 114
  02d3c20  stb 4, 32(31)
  02d3c24  li 4, -3056
  02d3c28  vslw 2, 2, 2
  02d3c2c  <unknown>
  02d3c30  li 3, 88
  02d3c34  vspltw 3, 3, 0
  02d3c38  <unknown>
  02d3c3c  vmaddfp 2, 4, 3, 2
  02d3c40  vctsxs 2, 2, 0
  02d3c44  vspltw 2, 2, 0
  02d3c48  stvewx 2, 3, 30
  02d3c4c  b 0x2d3c9c
  02d3c50  lwz 3, 8324(26)
  02d3c54  cmpwi 3, 35
  02d3c58  bt 2, 0x2d3c9c
  02d3c5c  lbz 3, 8360(26)
  02d3c60  cmpwi 3, 0
  02d3c64  bf 2, 0x2d3c9c
  02d3c68  li 3, 2
  02d3c6c  stb 3, 32(31)
  02d3c70  b 0x2d3c9c
  02d3c74  li 3, 6
  02d3c78  stb 3, 32(31)
  02d3c7c  b 0x2d3c9c
  02d3c80  lwz 3, 80(30)
  02d3c84  cmpwi 3, 0
  02d3c88  bt 2, 0x2d3c9c
  02d3c8c  bl 0xefb38
  02d3c90  nop
  02d3c94  li 3, 0
  02d3c98  stw 3, 80(30)
  02d3c9c  addic 3, 30, 84
  02d3ca0  bl 0x4fff60
  02d3ca4  nop
  02d3ca8  lwz 3, 80(30)
  02d3cac  cmpwi 3, 0
  02d3cb0  bt 2, 0x2d3cd8
  02d3cb4  lfs 1, 64(30)
  02d3cb8  stfs 1, 16(3)
  02d3cbc  lfs 1, 68(30)
  02d3cc0  stfs 1, 20(3)
  02d3cc4  lfs 1, 72(30)
  02d3cc8  stfs 1, 24(3)
  02d3ccc  lfs 1, 76(30)
  02d3cd0  stfs 1, 28(3)
  02d3cd4  b 0x2d3d1c
  02d3cd8  lwz 3, 84(30)
  02d3cdc  cmpwi 3, 0
  02d3ce0  bf 2, 0x2d3d1c
  02d3ce4  li 3, -1
  02d3ce8  bl 0x8e0f4
  02d3cec  nop
  02d3cf0  cmpwi 3, 0
  02d3cf4  bt 2, 0x2d3d1c
  02d3cf8  vspltisw 2, 0
  02d3cfc  li 6, 192
  02d3d00  ori 3, 31, 0
  02d3d04  addic 5, 1, 192
  02d3d08  addic 4, 30, 64
  02d3d0c  stvx 2, 6, 1
  02d3d10  bl 0x43cc98
  02d3d14  nop
  02d3d18  stw 3, 80(30)
  02d3d1c  ld 0, 864(1)
  02d3d20  mtlr 0
  02d3d24  lfd 17, 728(1)
  02d3d28  lfd 18, 736(1)
  02d3d2c  lfd 19, 744(1)
  02d3d30  lfd 20, 752(1)
  02d3d34  lfd 21, 760(1)
  02d3d38  lfd 22, 768(1)
  02d3d3c  lfd 23, 776(1)
  02d3d40  lfd 24, 784(1)
  02d3d44  lfd 25, 792(1)
  02d3d48  lfd 26, 800(1)
  02d3d4c  lfd 27, 808(1)
  02d3d50  lfd 28, 816(1)
  02d3d54  lfd 29, 824(1)
  02d3d58  lfd 30, 832(1)
  02d3d5c  lfd 31, 840(1)
  02d3d60  ld 24, 664(1)
  02d3d64  ld 25, 672(1)
  02d3d68  ld 26, 680(1)
  02d3d6c  ld 27, 688(1)
  02d3d70  ld 28, 696(1)
  02d3d74  ld 29, 704(1)
  02d3d78  ld 30, 712(1)
  02d3d7c  ld 31, 720(1)
  02d3d80  addi 1, 1, 848
  02d3d84  blr
