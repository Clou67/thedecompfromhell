# game/update/moby176.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1750_002b2274:   # 0x2b2274, 0x40 bytes
  02b2274  lwz 6, 120(3)
  02b2278  li 5, 0
  02b227c  ori 3, 6, 0
  02b2280  lwz 7, 4(3)
  02b2284  cmpwi 7, 0
  02b2288  bf 2, 0x2b22a0
  02b228c  slwi 3, 5, 2
  02b2290  addc 3, 6, 3
  02b2294  clrldi 3, 3, 32
  02b2298  stw 4, 4(3)
  02b229c  b 0x2b22b0
  02b22a0  addic 5, 5, 1
  02b22a4  addic 3, 3, 4
  02b22a8  cmpwi 5, 15
  02b22ac  bt 0, 0x2b2280
  02b22b0  blr

M176_002b22c0:   # 0x2b22c0, 0x268 bytes
  02b22c0  stdu 1, -144(1)
  02b22c4  mflr 0
  02b22c8  std 0, 160(1)
  02b22cc  std 30, 128(1)
  02b22d0  ori 30, 3, 0
  02b22d4  lis 3, 43
  02b22d8  addi 3, 3, 8884
  02b22dc  std 31, 136(1)
  02b22e0  lbz 4, 83(30)
  02b22e4  lwz 31, 120(30)
  02b22e8  cmpwi 4, 2
  02b22ec  bf 2, 0x2b2388
  02b22f0  li 3, 4
  02b22f4  stb 3, 32(30)
  02b22f8  lwz 3, 0(31)
  02b22fc  cmpwi 3, 0
  02b2300  bt 2, 0x2b230c
  02b2304  bl 0xefb38
  02b2308  nop
  02b230c  lhz 3, 68(31)
  02b2310  extsh 3, 3
  02b2314  cmpwi 3, -1
  02b2318  bt 2, 0x2b232c
  02b231c  bl 0xda9e8
  02b2320  nop
  02b2324  li 3, -1
  02b2328  sth 3, 68(31)
  02b232c  lhz 4, 74(31)
  02b2330  extsh 4, 4
  02b2334  cmpwi 4, -1
  02b2338  bt 2, 0x2b237c
  02b233c  lis 3, 150
  02b2340  sldi 5, 4, 7
  02b2344  sldi 6, 4, 4
  02b2348  addic 7, 3, 14312
  02b234c  subc 3, 5, 6
  02b2350  lwzx 5, 7, 3
  02b2354  cmpw 5, 30
  02b2358  bf 2, 0x2b237c
  02b235c  lis 5, 150
  02b2360  addic 5, 5, 14292
  02b2364  lbzx 3, 5, 3
  02b2368  cmpwi 3, 0
  02b236c  bt 2, 0x2b237c
  02b2370  ori 3, 4, 0
  02b2374  bl 0x15cdb0
  02b2378  nop
  02b237c  li 3, -1
  02b2380  sth 3, 74(31)
  02b2384  b 0x2b2510
  02b2388  lis 4, 161
  02b238c  addic 4, 4, 12
  02b2390  lhz 4, 624(4)
  02b2394  cmpwi 4, 0
  02b2398  bf 2, 0x2b2510
  02b239c  lis 4, 161
  02b23a0  addic 4, 4, -276
  02b23a4  lhz 5, 80(4)
  02b23a8  cmpwi 5, 0
  02b23ac  bf 2, 0x2b2510
  02b23b0  lbz 6, 32(30)
  02b23b4  cmpwi 6, 3
  02b23b8  bf 2, 0x2b23cc
  02b23bc  lhz 3, 80(31)
  02b23c0  addic 3, 3, 1
  02b23c4  sth 3, 80(31)
  02b23c8  b 0x2b2510
  02b23cc  lhz 6, 80(31)
  02b23d0  cmpwi 6, 0
  02b23d4  bt 2, 0x2b2510
  02b23d8  lis 7, 114
  02b23dc  lfs 2, 0(3)
  02b23e0  extsh 6, 6
  02b23e4  lfs 1, -3056(7)
  02b23e8  fmuls 2, 1, 2
  02b23ec  fctiwz 2, 2
  02b23f0  stfd 2, 112(1)
  02b23f4  lwz 7, 116(1)
  02b23f8  cmpw 6, 7
  02b23fc  bf 1, 0x2b24b4
  02b2400  lis 6, 0
  02b2404  ori 6, 6, 65535
  02b2408  cmpw 5, 6
  02b240c  bf 0, 0x2b2418
  02b2410  addic 5, 5, 1
  02b2414  sth 5, 80(4)
  02b2418  lis 5, 161
  02b241c  lwz 5, -2344(5)
  02b2420  extsw 5, 5
  02b2424  std 5, 112(1)
  02b2428  lfs 2, 4(3)
  02b242c  lhz 6, 82(4)
  02b2430  lfd 3, 112(1)
  02b2434  fcfid 3, 3
  02b2438  lis 3, 6990
  02b243c  ori 5, 3, 33205
  02b2440  frsp 3, 3
  02b2444  fadds 2, 3, 2
  02b2448  fmuls 1, 1, 2
  02b244c  fctiwz 1, 1
  02b2450  stfd 1, 112(1)
  02b2454  lwz 3, 116(1)
  02b2458  mulhw 5, 5, 3
  02b245c  srawi 5, 5, 6
  02b2460  srwi 7, 5, 31
  02b2464  addc 5, 5, 7
  02b2468  cmpw 5, 6
  02b246c  bf 1, 0x2b248c
  02b2470  lis 5, 6990
  02b2474  ori 5, 5, 33205
  02b2478  mulhw 3, 5, 3
  02b247c  srawi 3, 3, 6
  02b2480  srwi 5, 3, 31
  02b2484  addc 3, 3, 5
  02b2488  sth 3, 82(4)
  02b248c  lis 3, 151
  02b2490  lwz 7, 84(4)
  02b2494  li 5, 1
  02b2498  lis 6, -32768
  02b249c  lwz 3, -25488(3)
  02b24a0  slw 3, 5, 3
  02b24a4  or 3, 7, 3
  02b24a8  or 3, 3, 6
  02b24ac  stw 3, 84(4)
  02b24b0  b 0x2b24e4
  02b24b4  lfs 2, 8(3)
  02b24b8  fmuls 1, 1, 2
  02b24bc  fctiwz 1, 1
  02b24c0  stfd 1, 112(1)
  02b24c4  lwz 3, 116(1)
  02b24c8  cmpw 6, 3
  02b24cc  bf 0, 0x2b24e4
  02b24d0  lis 3, 151
  02b24d4  addic 3, 3, -25376
  02b24d8  lbz 4, 8372(3)
  02b24dc  addic 4, 4, 1
  02b24e0  stb 4, 8372(3)
  02b24e4  lis 3, 151
  02b24e8  li 4, 0
  02b24ec  addic 3, 3, -25376
  02b24f0  sth 4, 80(31)
  02b24f4  lbz 3, 8372(3)
  02b24f8  cmpwi 3, 3
  02b24fc  bt 0, 0x2b2510
  02b2500  li 3, 20004
  02b2504  li 4, 78
  02b2508  bl 0x7b310
  02b250c  nop
  02b2510  ld 0, 160(1)
  02b2514  mtlr 0
  02b2518  ld 30, 128(1)
  02b251c  ld 31, 136(1)
  02b2520  addi 1, 1, 144
  02b2524  blr

UpdateMoby_176:   # 0x2b2590, 0xecc bytes
  02b2590  stdu 1, -480(1)
  02b2594  mflr 0
  02b2598  std 0, 496(1)
  02b259c  stfd 23, 408(1)
  02b25a0  stfd 24, 416(1)
  02b25a4  stfd 25, 424(1)
  02b25a8  stfd 26, 432(1)
  02b25ac  stfd 27, 440(1)
  02b25b0  stfd 28, 448(1)
  02b25b4  stfd 29, 456(1)
  02b25b8  stfd 30, 464(1)
  02b25bc  stfd 31, 472(1)
  02b25c0  std 31, 400(1)
  02b25c4  std 28, 376(1)
  02b25c8  ori 31, 3, 0
  02b25cc  std 30, 392(1)
  02b25d0  std 29, 384(1)
  02b25d4  std 27, 368(1)
  02b25d8  std 26, 360(1)
  02b25dc  std 25, 352(1)
  02b25e0  std 24, 344(1)
  02b25e4  std 23, 336(1)
  02b25e8  std 22, 328(1)
  02b25ec  std 21, 320(1)
  02b25f0  lwz 28, 120(31)
  02b25f4  bl 0x2b22c0
  02b25f8  ori 3, 31, 0
  02b25fc  addic 5, 1, 112
  02b2600  li 4, 0
  02b2604  bl 0xf1114
  02b2608  nop
  02b260c  lbz 3, 32(31)
  02b2610  cmpwi 3, 1
  02b2614  bt 1, 0x2b262c
  02b2618  cmpwi 3, -1
  02b261c  bf 1, 0x2b338c
  02b2620  cmpwi 3, 0
  02b2624  bf 1, 0x2b2640
  02b2628  b 0x2b2658
  02b262c  cmpwi 3, 2
  02b2630  bf 1, 0x2b2708
  02b2634  cmpwi 3, 3
  02b2638  bf 1, 0x2b2924
  02b263c  b 0x2b338c
  02b2640  li 3, -1
  02b2644  li 4, 1
  02b2648  sth 3, 68(28)
  02b264c  sth 3, 74(28)
  02b2650  stb 4, 32(31)
  02b2654  b 0x2b338c
  02b2658  lbz 3, 82(31)
  02b265c  cmpwi 3, 1
  02b2660  cmpwi 1, 3, 0
  02b2664  bf 2, 0x2b2670
  02b2668  li 3, 2
  02b266c  stb 3, 32(31)
  02b2670  bf 6, 0x2b338c
  02b2674  ori 3, 31, 0
  02b2678  bl 0xefe40
  02b267c  nop
  02b2680  lis 3, 43
  02b2684  addi 3, 3, 9512
  02b2688  lfs 2, 0(3)
  02b268c  fcmpu 0, 1, 2
  02b2690  cror 6, 0, 2
  02b2694  bt 6, 0x2b338c
  02b2698  lis 3, 150
  02b269c  lis 4, 151
  02b26a0  addic 3, 3, 19008
  02b26a4  addic 4, 4, -25376
  02b26a8  lwz 3, 160(3)
  02b26ac  lwz 4, 4256(4)
  02b26b0  and 3, 3, 4
  02b26b4  cmpwi 3, 0
  02b26b8  bt 2, 0x2b338c
  02b26bc  lbz 3, 83(31)
  02b26c0  cmpwi 3, 1
  02b26c4  bt 2, 0x2b338c
  02b26c8  lis 3, 43
  02b26cc  lis 4, 114
  02b26d0  addi 3, 3, 9512
  02b26d4  li 5, 0
  02b26d8  lfs 1, 4(3)
  02b26dc  lfs 2, -3056(4)
  02b26e0  ori 3, 31, 0
  02b26e4  li 4, 1
  02b26e8  fmuls 1, 2, 1
  02b26ec  fctiwz 1, 1
  02b26f0  stfd 1, 296(1)
  02b26f4  lwz 6, 300(1)
  02b26f8  extsw 6, 6
  02b26fc  bl 0xfddc0
  02b2700  nop
  02b2704  b 0x2b338c
  02b2708  lwz 3, 0(28)
  02b270c  cmpwi 3, 0
  02b2710  bf 2, 0x2b274c
  02b2714  ori 3, 31, 0
  02b2718  bl 0x2b9870
  02b271c  nop
  02b2720  cmpwi 3, 0
  02b2724  stw 3, 0(28)
  02b2728  bt 2, 0x2b274c
  02b272c  lhz 5, 52(3)
  02b2730  lis 4, 123
  02b2734  ori 5, 5, 256
  02b2738  sth 5, 52(3)
  02b273c  lwz 3, 0(28)
  02b2740  lfs 1, 30160(4)
  02b2744  lwz 3, 120(3)
  02b2748  stfs 1, 12(3)
  02b274c  lhz 3, 68(28)
  02b2750  extsh 3, 3
  02b2754  cmpwi 3, -1
  02b2758  bt 2, 0x2b2818
  02b275c  lis 4, 162
  02b2760  lis 5, 161
  02b2764  addic 4, 4, -8448
  02b2768  sldi 3, 3, 5
  02b276c  addic 6, 5, 23856
  02b2770  addc 3, 4, 3
  02b2774  lfs 1, 23856(5)
  02b2778  clrldi 3, 3, 32
  02b277c  lis 5, 43
  02b2780  lfs 2, 4(6)
  02b2784  lfs 3, 8(6)
  02b2788  addi 5, 5, 9512
  02b278c  lfs 4, 0(3)
  02b2790  lfs 5, 4(3)
  02b2794  fsubs 1, 1, 4
  02b2798  lfs 6, 8(3)
  02b279c  fsubs 2, 2, 5
  02b27a0  lfs 7, 8(5)
  02b27a4  fsubs 3, 3, 6
  02b27a8  lfs 8, 12(6)
  02b27ac  stfs 8, 12(3)
  02b27b0  fmadds 1, 1, 7, 4
  02b27b4  fmadds 2, 2, 7, 5
  02b27b8  fmadds 3, 3, 7, 6
  02b27bc  stfs 1, 0(3)
  02b27c0  stfs 2, 4(3)
  02b27c4  stfs 3, 8(3)
  02b27c8  lhz 3, 68(28)
  02b27cc  extsh 3, 3
  02b27d0  sldi 6, 3, 5
  02b27d4  addc 4, 4, 6
  02b27d8  clrldi 4, 4, 32
  02b27dc  lfs 1, 4(4)
  02b27e0  lfs 2, 0(4)
  02b27e4  fmuls 1, 1, 1
  02b27e8  lfs 3, 8(4)
  02b27ec  fmadds 1, 2, 2, 1
  02b27f0  lfs 2, 12(5)
  02b27f4  fmadds 1, 3, 3, 1
  02b27f8  fsqrts 1, 1
  02b27fc  fcmpu 0, 1, 2
  02b2800  cror 6, 1, 2
  02b2804  bt 6, 0x2b2818
  02b2808  bl 0xda9e8
  02b280c  nop
  02b2810  li 3, -1
  02b2814  sth 3, 68(28)
  02b2818  lis 30, 150
  02b281c  lis 29, 151
  02b2820  addic 30, 30, 19008
  02b2824  addic 29, 29, -25376
  02b2828  lwz 4, 160(30)
  02b282c  lwz 3, 4256(29)
  02b2830  and 4, 4, 3
  02b2834  cmpwi 4, 0
  02b2838  bt 2, 0x2b28e8
  02b283c  lbz 4, 8364(29)
  02b2840  cmpwi 4, 0
  02b2844  bf 2, 0x2b28e8
  02b2848  li 3, -1
  02b284c  bl 0x8e0f4
  02b2850  nop
  02b2854  ori 4, 3, 0
  02b2858  lwz 3, 4256(29)
  02b285c  cmpwi 4, 0
  02b2860  bt 2, 0x2b28e8
  02b2864  li 3, 3
  02b2868  stb 3, 32(31)
  02b286c  bl 0x99ea8
  02b2870  nop
  02b2874  lis 3, 43
  02b2878  vspltisw 2, -1
  02b287c  li 5, 16
  02b2880  addi 3, 3, 9512
  02b2884  lis 4, 114
  02b2888  li 6, -3056
  02b288c  vslw 2, 2, 2
  02b2890  <unknown>
  02b2894  li 3, 76
  02b2898  vspltw 3, 3, 0
  02b289c  <unknown>
  02b28a0  lhz 4, 68(28)
  02b28a4  vmaddfp 2, 4, 3, 2
  02b28a8  extsh 4, 4
  02b28ac  cmpwi 4, -1
  02b28b0  vctsxs 2, 2, 0
  02b28b4  vsplth 2, 2, 1
  02b28b8  stvehx 2, 3, 28
  02b28bc  bf 2, 0x2b338c
  02b28c0  lis 4, 43
  02b28c4  addic 3, 31, 16
  02b28c8  addi 4, 4, 9512
  02b28cc  li 6, 0
  02b28d0  lfs 1, 20(4)
  02b28d4  lfs 2, 24(4)
  02b28d8  bl 0xda308
  02b28dc  nop
  02b28e0  sth 3, 68(28)
  02b28e4  b 0x2b338c
  02b28e8  lwz 4, 164(30)
  02b28ec  and 3, 4, 3
  02b28f0  cmpwi 3, 0
  02b28f4  bt 2, 0x2b338c
  02b28f8  li 3, -1
  02b28fc  bl 0x8e0f4
  02b2900  nop
  02b2904  cmpwi 3, 0
  02b2908  bf 2, 0x2b338c
  02b290c  li 3, 0
  02b2910  li 4, 0
  02b2914  ori 5, 31, 0
  02b2918  bl 0x15d12c
  02b291c  nop
  02b2920  b 0x2b338c
  02b2924  ori 3, 31, 0
  02b2928  lhz 4, 74(28)
  02b292c  extsh 4, 4
  02b2930  bl 0x15cc7c
  02b2934  nop
  02b2938  cmpwi 3, 0
  02b293c  bf 2, 0x2b2958
  02b2940  li 3, 1
  02b2944  li 4, 4
  02b2948  ori 5, 31, 0
  02b294c  bl 0x15d12c
  02b2950  nop
  02b2954  sth 3, 74(28)
  02b2958  lhz 3, 68(28)
  02b295c  extsh 3, 3
  02b2960  cmpwi 3, -1
  02b2964  bt 2, 0x2b2b54
  02b2968  lbz 4, 32(31)
  02b296c  cmpwi 4, 3
  02b2970  bf 2, 0x2b2b54
  02b2974  lis 4, 43
  02b2978  lis 5, 151
  02b297c  addi 4, 4, 9512
  02b2980  addic 5, 5, -25376
  02b2984  lis 6, 162
  02b2988  sldi 3, 3, 5
  02b298c  addic 6, 6, -8448
  02b2990  lfs 1, 28(4)
  02b2994  lfs 2, 1600(5)
  02b2998  addc 3, 6, 3
  02b299c  lfs 3, 1632(5)
  02b29a0  fmuls 2, 2, 1
  02b29a4  lfs 4, 1604(5)
  02b29a8  clrldi 3, 3, 32
  02b29ac  lfs 5, 1636(5)
  02b29b0  fmuls 4, 4, 1
  02b29b4  lfs 6, 128(5)
  02b29b8  lfs 7, 1608(5)
  02b29bc  lfs 8, 1640(5)
  02b29c0  fmuls 7, 7, 1
  02b29c4  lis 7, 161
  02b29c8  fmadds 2, 3, 1, 2
  02b29cc  lis 8, -30584
  02b29d0  fmadds 3, 5, 1, 4
  02b29d4  ori 8, 8, 34953
  02b29d8  lis 9, 16624
  02b29dc  fmadds 1, 8, 1, 7
  02b29e0  fadds 2, 6, 2
  02b29e4  stfs 2, 16(3)
  02b29e8  lfs 2, 132(5)
  02b29ec  fadds 2, 2, 3
  02b29f0  stfs 2, 20(3)
  02b29f4  lfs 2, 136(5)
  02b29f8  fadds 1, 2, 1
  02b29fc  stfs 1, 24(3)
  02b2a00  lfs 1, 140(5)
  02b2a04  stfs 1, 28(3)
  02b2a08  lwz 3, 1808(7)
  02b2a0c  mulhw 5, 8, 3
  02b2a10  addc 5, 5, 3
  02b2a14  srawi 5, 5, 6
  02b2a18  srwi 7, 5, 31
  02b2a1c  addc 5, 5, 7
  02b2a20  lhz 7, 68(28)
  02b2a24  sldi 8, 5, 7
  02b2a28  sldi 5, 5, 3
  02b2a2c  subc 5, 8, 5
  02b2a30  extsh 8, 7
  02b2a34  subc 3, 3, 5
  02b2a38  sldi 5, 8, 5
  02b2a3c  extsw 3, 3
  02b2a40  addc 5, 6, 5
  02b2a44  std 3, 296(1)
  02b2a48  stw 9, 28(5)
  02b2a4c  lfs 1, 32(4)
  02b2a50  lfs 2, 36(4)
  02b2a54  lfs 3, 40(4)
  02b2a58  lfs 4, 44(4)
  02b2a5c  lfs 5, 48(4)
  02b2a60  lfd 6, 296(1)
  02b2a64  fcfid 6, 6
  02b2a68  lis 3, 123
  02b2a6c  lis 5, 123
  02b2a70  addic 8, 3, 30144
  02b2a74  addic 9, 5, 30128
  02b2a78  frsp 6, 6
  02b2a7c  fmuls 1, 6, 1
  02b2a80  fmsubs 1, 1, 2, 3
  02b2a84  fsubs 2, 4, 1
  02b2a88  fsubs 3, 5, 1
  02b2a8c  lfs 5, 52(4)
  02b2a90  fsub 4, 1, 2
  02b2a94  fsel 1, 4, 2, 1
  02b2a98  lfs 2, 56(4)
  02b2a9c  fsub 4, 3, 1
  02b2aa0  fsel 1, 4, 3, 1
  02b2aa4  lfs 3, 60(4)
  02b2aa8  lfs 4, 64(4)
  02b2aac  lfs 7, 68(4)
  02b2ab0  fmuls 6, 1, 1
  02b2ab4  fmuls 8, 6, 1
  02b2ab8  fmuls 9, 6, 8
  02b2abc  fmadds 1, 8, 5, 1
  02b2ac0  lfs 5, 30144(3)
  02b2ac4  lfs 8, 30128(5)
  02b2ac8  extsh 3, 7
  02b2acc  fsubs 5, 5, 8
  02b2ad0  sldi 3, 3, 5
  02b2ad4  addc 3, 6, 3
  02b2ad8  fmuls 10, 6, 9
  02b2adc  fmadds 1, 9, 2, 1
  02b2ae0  clrldi 3, 3, 32
  02b2ae4  lfs 2, 4(8)
  02b2ae8  lfs 9, 4(9)
  02b2aec  lfs 11, 8(8)
  02b2af0  fsubs 2, 2, 9
  02b2af4  fmuls 6, 6, 10
  02b2af8  fmadds 1, 10, 3, 1
  02b2afc  lfs 3, 8(9)
  02b2b00  fsubs 10, 11, 3
  02b2b04  fmadds 1, 6, 4, 1
  02b2b08  lfs 4, 8(4)
  02b2b0c  lfs 6, 0(3)
  02b2b10  fmadds 1, 1, 7, 7
  02b2b14  lfs 7, 4(3)
  02b2b18  lfs 11, 8(3)
  02b2b1c  lfs 12, 12(8)
  02b2b20  stfs 12, 12(3)
  02b2b24  fmadds 5, 1, 5, 8
  02b2b28  fmadds 2, 1, 2, 9
  02b2b2c  fmadds 1, 1, 10, 3
  02b2b30  fsubs 3, 5, 6
  02b2b34  fsubs 2, 2, 7
  02b2b38  fsubs 1, 1, 11
  02b2b3c  fmadds 3, 3, 4, 6
  02b2b40  fmadds 2, 2, 4, 7
  02b2b44  fmadds 1, 1, 4, 11
  02b2b48  stfs 3, 0(3)
  02b2b4c  stfs 2, 4(3)
  02b2b50  stfs 1, 8(3)
  02b2b54  lis 3, 43
  02b2b58  lis 25, 151
  02b2b5c  addi 30, 3, 9512
  02b2b60  li 22, 0
  02b2b64  addic 25, 25, -25432
  02b2b68  lfs 29, 24(30)
  02b2b6c  stw 22, 288(1)
  02b2b70  stw 22, 292(1)
  02b2b74  lbz 3, 16(25)
  02b2b78  bl 0x502730
  02b2b7c  nop
  02b2b80  lis 3, 161
  02b2b84  lis 24, 151
  02b2b88  lfs 28, 72(30)
  02b2b8c  fmr 31, 1
  02b2b90  addic 24, 24, -25376
  02b2b94  lwz 30, 1808(3)
  02b2b98  lhz 3, 52(31)
  02b2b9c  srawi 4, 30, 2
  02b2ba0  lfs 1, 112(1)
  02b2ba4  lfs 2, 116(1)
  02b2ba8  addze 4, 4
  02b2bac  lwz 5, 8324(24)
  02b2bb0  sldi 4, 4, 2
  02b2bb4  cmpwi 5, 1
  02b2bb8  lfs 3, 120(1)
  02b2bbc  subc 30, 30, 4
  02b2bc0  lfs 4, 124(1)
  02b2bc4  bf 2, 0x2b2cb4
  02b2bc8  clrlwi 3, 3, 31
  02b2bcc  cmpwi 3, 0
  02b2bd0  bt 2, 0x2b2cb4
  02b2bd4  lis 3, 149
  02b2bd8  addic 3, 3, 5056
  02b2bdc  lfs 1, 884(3)
  02b2be0  lfs 2, 880(3)
  02b2be4  fmuls 1, 1, 1
  02b2be8  lfs 3, 888(3)
  02b2bec  fmadds 1, 2, 2, 1
  02b2bf0  fmadds 1, 3, 3, 1
  02b2bf4  fsqrts 1, 1
  02b2bf8  fcmpu 0, 1, 29
  02b2bfc  bf 2, 0x2b2c34
  02b2c00  fmr 3, 29
  02b2c04  stfs 2, 128(1)
  02b2c08  lfs 1, 884(3)
  02b2c0c  stfs 1, 132(1)
  02b2c10  lfs 1, 888(3)
  02b2c14  stfs 1, 136(1)
  02b2c18  lfs 4, 892(3)
  02b2c1c  stw 22, 136(1)
  02b2c20  fmr 2, 3
  02b2c24  stw 22, 132(1)
  02b2c28  stw 22, 128(1)
  02b2c2c  fmr 1, 2
  02b2c30  b 0x2b2c68
  02b2c34  lis 4, 43
  02b2c38  addi 4, 4, 9512
  02b2c3c  lfs 3, 76(4)
  02b2c40  fdivs 3, 3, 1
  02b2c44  lfs 5, 884(3)
  02b2c48  lfs 6, 888(3)
  02b2c4c  lfs 4, 892(3)
  02b2c50  fmuls 1, 2, 3
  02b2c54  fmuls 2, 5, 3
  02b2c58  fmuls 3, 6, 3
  02b2c5c  stfs 1, 128(1)
  02b2c60  stfs 2, 132(1)
  02b2c64  stfs 3, 136(1)
  02b2c68  lfs 5, 320(3)
  02b2c6c  lfs 26, 852(3)
  02b2c70  lis 4, 123
  02b2c74  lfs 6, 324(3)
  02b2c78  fadds 1, 1, 5
  02b2c7c  lfs 5, 328(3)
  02b2c80  fmr 7, 26
  02b2c84  fadds 2, 2, 6
  02b2c88  stfs 4, 140(1)
  02b2c8c  fadds 3, 3, 5
  02b2c90  lfs 4, 30176(4)
  02b2c94  lfs 6, 848(3)
  02b2c98  lfs 5, 856(3)
  02b2c9c  lfs 23, 860(3)
  02b2ca0  fmr 8, 7
  02b2ca4  stfs 1, 128(1)
  02b2ca8  stfs 2, 132(1)
  02b2cac  stfs 3, 136(1)
  02b2cb0  b 0x2b2ce4
  02b2cb4  lfs 26, 1652(24)
  02b2cb8  lis 3, 123
  02b2cbc  stfs 1, 128(1)
  02b2cc0  fmr 7, 26
  02b2cc4  stfs 2, 132(1)
  02b2cc8  stfs 3, 136(1)
  02b2ccc  stfs 4, 140(1)
  02b2cd0  lfs 4, 30176(3)
  02b2cd4  lfs 6, 1648(24)
  02b2cd8  lfs 5, 1656(24)
  02b2cdc  lfs 23, 1660(24)
  02b2ce0  fmr 8, 7
  02b2ce4  fmuls 7, 7, 8
  02b2ce8  lis 3, 43
  02b2cec  fmadds 4, 31, 28, 4
  02b2cf0  addi 3, 3, 9512
  02b2cf4  lfs 30, 80(3)
  02b2cf8  fmadds 7, 6, 6, 7
  02b2cfc  fadds 4, 4, 30
  02b2d00  stfs 23, 156(1)
  02b2d04  addic 3, 24, 208
  02b2d08  addic 4, 1, 128
  02b2d0c  fmadds 7, 5, 5, 7
  02b2d10  li 5, 2
  02b2d14  li 6, 0
  02b2d18  li 7, 0
  02b2d1c  fsqrts 7, 7
  02b2d20  fdivs 4, 4, 7
  02b2d24  fsub 10, 29, 7
  02b2d28  fsub 9, 29, 7
  02b2d2c  fsub 8, 29, 7
  02b2d30  fsub 25, 7, 29
  02b2d34  fsub 27, 7, 29
  02b2d38  fsub 7, 7, 29
  02b2d3c  fmuls 5, 5, 4
  02b2d40  fmuls 11, 26, 4
  02b2d44  fmuls 4, 6, 4
  02b2d48  fsel 26, 10, 29, 5
  02b2d4c  fsel 6, 9, 29, 11
  02b2d50  fsel 8, 8, 29, 4
  02b2d54  fsel 26, 7, 26, 5
  02b2d58  fsel 27, 27, 6, 11
  02b2d5c  fsel 25, 25, 8, 4
  02b2d60  fadds 3, 26, 3
  02b2d64  fadds 2, 27, 2
  02b2d68  fadds 1, 25, 1
  02b2d6c  stfs 3, 152(1)
  02b2d70  stfs 2, 148(1)
  02b2d74  stfs 1, 144(1)
  02b2d78  bl 0x57820
  02b2d7c  nop
  02b2d80  cmpwi 3, 0
  02b2d84  bt 2, 0x2b2d90
  02b2d88  fmr 30, 29
  02b2d8c  b 0x2b2e14
  02b2d90  addic 3, 1, 128
  02b2d94  addic 4, 1, 144
  02b2d98  li 5, 2
  02b2d9c  li 6, 0
  02b2da0  li 7, 0
  02b2da4  bl 0x57820
  02b2da8  nop
  02b2dac  cmpwi 3, 0
  02b2db0  bt 2, 0x2b2e08
  02b2db4  lis 3, 161
  02b2db8  lfs 1, 132(1)
  02b2dbc  lfs 2, 128(1)
  02b2dc0  addic 3, 3, 2368
  02b2dc4  lfs 3, 36(3)
  02b2dc8  lfs 4, 32(3)
  02b2dcc  fsubs 1, 1, 3
  02b2dd0  fsubs 2, 2, 4
  02b2dd4  lfs 3, 136(1)
  02b2dd8  lfs 4, 40(3)
  02b2ddc  fsubs 3, 3, 4
  02b2de0  fmuls 1, 1, 1
  02b2de4  fmadds 1, 2, 2, 1
  02b2de8  fmadds 1, 3, 3, 1
  02b2dec  fsqrts 1, 1
  02b2df0  fsubs 30, 1, 30
  02b2df4  fcmpu 0, 30, 29
  02b2df8  cror 6, 1, 2
  02b2dfc  bt 6, 0x2b2e14
  02b2e00  fmr 30, 29
  02b2e04  b 0x2b2e14
  02b2e08  lis 3, 123
  02b2e0c  lfs 30, 30176(3)
  02b2e10  fmadds 30, 31, 28, 30
  02b2e14  lis 3, 43
  02b2e18  fmr 24, 27
  02b2e1c  lis 5, 114
  02b2e20  fmr 1, 30
  02b2e24  addi 3, 3, 9512
  02b2e28  lis 4, 123
  02b2e2c  lis 6, 115
  02b2e30  lis 27, 114
  02b2e34  lfs 27, 84(3)
  02b2e38  lfs 3, -3048(5)
  02b2e3c  lfs 4, 30164(4)
  02b2e40  addic 3, 1, 292
  02b2e44  lfs 2, -26876(6)
  02b2e48  addic 5, 1, 288
  02b2e4c  lfs 5, -3052(27)
  02b2e50  fmuls 3, 3, 2
  02b2e54  fmuls 4, 4, 5
  02b2e58  fmr 2, 27
  02b2e5c  bl 0x109c30
  02b2e60  nop
  02b2e64  fmuls 1, 24, 24
  02b2e68  lfs 2, 288(1)
  02b2e6c  fcmpu 0, 30, 28
  02b2e70  lis 4, 123
  02b2e74  lis 26, 123
  02b2e78  lhz 3, 52(31)
  02b2e7c  fmadds 1, 25, 25, 1
  02b2e80  lwz 23, 30168(4)
  02b2e84  lwz 26, 30172(26)
  02b2e88  fmadds 1, 26, 26, 1
  02b2e8c  fsqrts 1, 1
  02b2e90  fdivs 2, 2, 1
  02b2e94  fsub 3, 29, 1
  02b2e98  fsub 4, 29, 1
  02b2e9c  fsub 5, 29, 1
  02b2ea0  fsub 6, 1, 29
  02b2ea4  fsub 7, 1, 29
  02b2ea8  fsub 1, 1, 29
  02b2eac  fmuls 26, 2, 26
  02b2eb0  fmuls 8, 2, 24
  02b2eb4  fmuls 24, 2, 25
  02b2eb8  fsel 2, 3, 29, 26
  02b2ebc  fsel 25, 4, 29, 8
  02b2ec0  fsel 3, 5, 29, 24
  02b2ec4  fsel 26, 6, 2, 26
  02b2ec8  fsel 25, 7, 25, 8
  02b2ecc  fsel 24, 1, 3, 24
  02b2ed0  bt 0, 0x2b2ee0
  02b2ed4  clrlwi 3, 3, 31
  02b2ed8  cmpwi 3, 0
  02b2edc  bt 2, 0x2b2ee4
  02b2ee0  li 23, 1
  02b2ee4  addc 26, 26, 23
  02b2ee8  ori 29, 22, 0
  02b2eec  cmpwi 26, 0
  02b2ef0  bf 1, 0x2b3014
  02b2ef4  extsw 23, 23
  02b2ef8  lis 3, 123
  02b2efc  lis 4, 123
  02b2f00  lfs 1, 30176(3)
  02b2f04  fmadds 1, 31, 28, 1
  02b2f08  lis 3, 123
  02b2f0c  addic 21, 1, 176
  02b2f10  fdivs 2, 30, 1
  02b2f14  lfs 1, 30180(3)
  02b2f18  lfs 3, 30184(4)
  02b2f1c  lfs 4, -3052(27)
  02b2f20  ori 3, 21, 0
  02b2f24  fsubs 5, 1, 3
  02b2f28  fmr 1, 29
  02b2f2c  fmadds 2, 5, 2, 3
  02b2f30  fmuls 2, 4, 2
  02b2f34  bl 0xfea60
  02b2f38  nop
  02b2f3c  lfs 1, 176(1)
  02b2f40  lfs 2, 180(1)
  02b2f44  fadds 3, 1, 24
  02b2f48  lfs 1, 184(1)
  02b2f4c  fadds 4, 2, 25
  02b2f50  fadds 5, 1, 26
  02b2f54  fmr 1, 29
  02b2f58  fmr 2, 27
  02b2f5c  stfs 3, 176(1)
  02b2f60  stfs 4, 180(1)
  02b2f64  stfs 5, 184(1)
  02b2f68  bl 0xfcbe8
  02b2f6c  nop
  02b2f70  lfs 2, 128(1)
  02b2f74  lfs 3, 132(1)
  02b2f78  subc 4, 29, 23
  02b2f7c  fmadds 2, 1, 24, 2
  02b2f80  lfs 4, 136(1)
  02b2f84  fmadds 3, 1, 25, 3
  02b2f88  stfs 23, 172(1)
  02b2f8c  fmadds 4, 1, 26, 4
  02b2f90  rldicl 6, 4, 1, 63
  02b2f94  addic 3, 1, 160
  02b2f98  fmr 1, 30
  02b2f9c  ori 4, 21, 0
  02b2fa0  ori 6, 6, 4
  02b2fa4  stfs 2, 160(1)
  02b2fa8  stfs 3, 164(1)
  02b2fac  stfs 4, 168(1)
  02b2fb0  bl 0x123ec8
  02b2fb4  nop
  02b2fb8  cmpwi 29, 2
  02b2fbc  ori 4, 3, 0
  02b2fc0  bf 2, 0x2b3008
  02b2fc4  cmpwi 30, 0
  02b2fc8  bf 2, 0x2b3008
  02b2fcc  lwz 3, 120(31)
  02b2fd0  ori 5, 22, 0
  02b2fd4  ori 6, 3, 0
  02b2fd8  lwz 7, 4(6)
  02b2fdc  cmpwi 7, 0
  02b2fe0  bf 2, 0x2b2ff8
  02b2fe4  slwi 5, 5, 2
  02b2fe8  addc 3, 3, 5
  02b2fec  clrldi 3, 3, 32
  02b2ff0  stw 4, 4(3)
  02b2ff4  b 0x2b3008
  02b2ff8  addic 5, 5, 1
  02b2ffc  addic 6, 6, 4
  02b3000  cmpwi 5, 15
  02b3004  bt 0, 0x2b2fd8
  02b3008  addic 29, 29, 1
  02b300c  cmpw 29, 26
  02b3010  bt 0, 0x2b2ef8
  02b3014  lis 3, 43
  02b3018  addi 3, 3, 9512
  02b301c  lfs 1, 88(3)
  02b3020  lfs 2, 1612(24)
  02b3024  lfs 3, 1600(24)
  02b3028  lis 3, 1
  02b302c  lfs 4, 1604(24)
  02b3030  fmuls 2, 2, 1
  02b3034  lfs 5, 1608(24)
  02b3038  lfs 6, 112(1)
  02b303c  lfs 7, 116(1)
  02b3040  lfs 8, 120(1)
  02b3044  fmadds 3, 3, 1, 6
  02b3048  stw 31, 256(1)
  02b304c  fmadds 4, 4, 1, 7
  02b3050  stw 3, 260(1)
  02b3054  fmadds 1, 5, 1, 8
  02b3058  stfs 2, 204(1)
  02b305c  stfs 3, 192(1)
  02b3060  stfs 4, 196(1)
  02b3064  stfs 1, 200(1)
  02b3068  lbz 3, 16(25)
  02b306c  bl 0x502730
  02b3070  nop
  02b3074  fmuls 2, 25, 25
  02b3078  fadds 1, 1, 27
  02b307c  fmadds 6, 24, 24, 2
  02b3080  fmr 2, 29
  02b3084  stfs 1, 268(1)
  02b3088  fsqrts 5, 6
  02b308c  fmr 3, 2
  02b3090  fmr 1, 6
  02b3094  fcmpu 0, 5, 3
  02b3098  bt 2, 0x2b30e4
  02b309c  frsqrte 2, 1
  02b30a0  lis 3, 43
  02b30a4  addi 3, 3, 9512
  02b30a8  lfs 3, 68(3)
  02b30ac  fmuls 4, 1, 2
  02b30b0  fmuls 5, 3, 2
  02b30b4  fnmsubs 4, 4, 2, 27
  02b30b8  fmadds 2, 4, 5, 2
  02b30bc  fmuls 4, 1, 2
  02b30c0  fmuls 5, 3, 2
  02b30c4  fnmsubs 4, 4, 2, 27
  02b30c8  fmadds 2, 4, 5, 2
  02b30cc  fmuls 1, 1, 2
  02b30d0  fmuls 3, 3, 2
  02b30d4  fnmsubs 1, 1, 2, 27
  02b30d8  fmadds 2, 1, 3, 2
  02b30dc  fmuls 3, 24, 2
  02b30e0  fmuls 2, 25, 2
  02b30e4  lis 3, 17839
  02b30e8  stfs 3, 240(1)
  02b30ec  lis 5, 16256
  02b30f0  stfs 2, 244(1)
  02b30f4  ori 3, 3, 57190
  02b30f8  lis 7, 43
  02b30fc  li 4, 1
  02b3100  li 6, 5
  02b3104  addi 30, 7, 9512
  02b3108  stw 5, 248(1)
  02b310c  stw 3, 252(1)
  02b3110  addic 29, 1, 192
  02b3114  stw 4, 272(1)
  02b3118  addic 26, 1, 240
  02b311c  stb 6, 264(1)
  02b3120  ori 3, 29, 0
  02b3124  li 5, 5
  02b3128  lfs 31, 92(30)
  02b312c  lwz 6, 8320(24)
  02b3130  ori 7, 26, 0
  02b3134  fmr 1, 31
  02b3138  bl 0x5e598
  02b313c  nop
  02b3140  lfs 1, 96(30)
  02b3144  lfs 2, 1600(24)
  02b3148  ori 3, 29, 0
  02b314c  lfs 3, 1604(24)
  02b3150  li 5, 5
  02b3154  lfs 4, 1608(24)
  02b3158  ori 7, 26, 0
  02b315c  lfs 5, 1612(24)
  02b3160  lfs 6, 112(1)
  02b3164  lfs 7, 116(1)
  02b3168  fmuls 5, 5, 1
  02b316c  lfs 8, 120(1)
  02b3170  fmadds 2, 2, 1, 6
  02b3174  fmadds 3, 3, 1, 7
  02b3178  fmadds 4, 4, 1, 8
  02b317c  lwz 6, 8320(24)
  02b3180  fmr 1, 31
  02b3184  stfs 5, 204(1)
  02b3188  stfs 2, 192(1)
  02b318c  stfs 3, 196(1)
  02b3190  stfs 4, 200(1)
  02b3194  bl 0x5e598
  02b3198  nop
  02b319c  addic 3, 28, 78
  02b31a0  bl 0x4fffb4
  02b31a4  nop
  02b31a8  cmpwi 3, 0
  02b31ac  bt 2, 0x2b3248
  02b31b0  lis 3, 43
  02b31b4  addi 30, 3, 9512
  02b31b8  lfs 1, 0(30)
  02b31bc  lfs 2, 100(30)
  02b31c0  bl 0xfcbe8
  02b31c4  nop
  02b31c8  lis 3, 114
  02b31cc  lfs 2, -3056(3)
  02b31d0  fmuls 1, 1, 2
  02b31d4  bl 0x502758
  02b31d8  nop
  02b31dc  sth 3, 78(28)
  02b31e0  fmr 1, 29
  02b31e4  lfs 3, 28(30)
  02b31e8  addic 3, 1, 224
  02b31ec  lfs 2, -3052(27)
  02b31f0  fmuls 2, 2, 3
  02b31f4  bl 0xfea60
  02b31f8  nop
  02b31fc  lfs 1, 68(30)
  02b3200  lfs 2, 8(30)
  02b3204  bl 0xfcbe8
  02b3208  nop
  02b320c  lfs 2, 224(1)
  02b3210  addic 4, 1, 208
  02b3214  lfs 3, 228(1)
  02b3218  addic 3, 1, 128
  02b321c  fmadds 2, 1, 24, 2
  02b3220  lfs 4, 232(1)
  02b3224  fmadds 3, 1, 25, 3
  02b3228  stfs 23, 220(1)
  02b322c  fmadds 1, 1, 26, 4
  02b3230  lbz 5, 16(25)
  02b3234  stfs 2, 208(1)
  02b3238  stfs 3, 212(1)
  02b323c  stfs 1, 216(1)
  02b3240  bl 0x127918
  02b3244  nop
  02b3248  lis 3, 123
  02b324c  lis 4, 114
  02b3250  lwz 3, 30192(3)
  02b3254  extsw 3, 3
  02b3258  std 3, 296(1)
  02b325c  lis 3, 43
  02b3260  addi 3, 3, 9512
  02b3264  lfs 1, 68(3)
  02b3268  lfs 2, -3056(4)
  02b326c  lfd 3, 296(1)
  02b3270  lis 3, 161
  02b3274  fcfid 3, 3
  02b3278  lwz 3, 1808(3)
  02b327c  frsp 3, 3
  02b3280  fadds 1, 3, 1
  02b3284  fmuls 1, 2, 1
  02b3288  fctiwz 1, 1
  02b328c  stfd 1, 296(1)
  02b3290  lwz 4, 300(1)
  02b3294  divw 5, 3, 4
  02b3298  mullw 4, 5, 4
  02b329c  subc 3, 3, 4
  02b32a0  cmpwi 3, 0
  02b32a4  bf 2, 0x2b32b8
  02b32a8  li 3, -1
  02b32ac  li 4, 1
  02b32b0  bl 0xaa258
  02b32b4  nop
  02b32b8  li 3, -1
  02b32bc  bl 0x8e0f4
  02b32c0  nop
  02b32c4  ori 30, 3, 0
  02b32c8  addic 3, 28, 76
  02b32cc  bl 0x4fffb4
  02b32d0  nop
  02b32d4  cmpwi 3, 0
  02b32d8  bt 2, 0x2b338c
  02b32dc  lis 3, 150
  02b32e0  lwz 4, 4256(24)
  02b32e4  addic 3, 3, 19008
  02b32e8  lwz 3, 160(3)
  02b32ec  and 3, 3, 4
  02b32f0  cmpwi 3, 0
  02b32f4  bt 2, 0x2b330c
  02b32f8  lbz 3, 8364(24)
  02b32fc  cmpwi 3, 0
  02b3300  bf 2, 0x2b330c
  02b3304  cmpwi 30, 0
  02b3308  bf 2, 0x2b338c
  02b330c  li 3, 2
  02b3310  stb 3, 32(31)
  02b3314  bl 0x855b8
  02b3318  nop
  02b331c  lhz 3, 74(28)
  02b3320  extsh 3, 3
  02b3324  cmpwi 3, -1
  02b3328  bt 2, 0x2b3368
  02b332c  lis 4, 150
  02b3330  sldi 5, 3, 7
  02b3334  sldi 6, 3, 4
  02b3338  addic 7, 4, 14312
  02b333c  subc 4, 5, 6
  02b3340  lwzx 5, 7, 4
  02b3344  cmpw 5, 31
  02b3348  bf 2, 0x2b3368
  02b334c  lis 5, 150
  02b3350  addic 5, 5, 14292
  02b3354  lbzx 4, 5, 4
  02b3358  cmpwi 4, 0
  02b335c  bt 2, 0x2b3368
  02b3360  bl 0x15cdb0
  02b3364  nop
  02b3368  li 3, -1
  02b336c  cmpwi 30, 0
  02b3370  sth 3, 74(28)
  02b3374  bf 2, 0x2b338c
  02b3378  li 3, 0
  02b337c  li 4, 0
  02b3380  ori 5, 31, 0
  02b3384  bl 0x15d12c
  02b3388  nop
  02b338c  lwz 3, 0(28)
  02b3390  cmpwi 3, 0
  02b3394  bt 2, 0x2b33f4
  02b3398  addic 5, 3, 192
  02b339c  addic 4, 3, 64
  02b33a0  ori 3, 5, 0
  02b33a4  bl 0x500b64
  02b33a8  nop
  02b33ac  lwz 3, 0(28)
  02b33b0  addic 4, 31, 192
  02b33b4  addic 3, 3, 192
  02b33b8  ori 5, 3, 0
  02b33bc  bl 0x5014d4
  02b33c0  nop
  02b33c4  lwz 3, 0(28)
  02b33c8  lfs 1, 112(1)
  02b33cc  stfs 1, 16(3)
  02b33d0  lfs 1, 116(1)
  02b33d4  stfs 1, 20(3)
  02b33d8  lfs 1, 120(1)
  02b33dc  stfs 1, 24(3)
  02b33e0  lfs 1, 124(1)
  02b33e4  stfs 1, 28(3)
  02b33e8  lwz 3, 0(28)
  02b33ec  bl 0xf31a8
  02b33f0  nop
  02b33f4  ori 3, 31, 0
  02b33f8  bl 0x2b1de0
  02b33fc  ld 0, 496(1)
  02b3400  mtlr 0
  02b3404  lfd 23, 408(1)
  02b3408  lfd 24, 416(1)
  02b340c  lfd 25, 424(1)
  02b3410  lfd 26, 432(1)
  02b3414  lfd 27, 440(1)
  02b3418  lfd 28, 448(1)
  02b341c  lfd 29, 456(1)
  02b3420  lfd 30, 464(1)
  02b3424  lfd 31, 472(1)
  02b3428  ld 21, 320(1)
  02b342c  ld 22, 328(1)
  02b3430  ld 23, 336(1)
  02b3434  ld 24, 344(1)
  02b3438  ld 25, 352(1)
  02b343c  ld 26, 360(1)
  02b3440  ld 27, 368(1)
  02b3444  ld 28, 376(1)
  02b3448  ld 29, 384(1)
  02b344c  ld 30, 392(1)
  02b3450  ld 31, 400(1)
  02b3454  addi 1, 1, 480
  02b3458  blr
