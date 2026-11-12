# game/update/moby886.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_886:   # 0x4a20d8, 0x77c bytes
  04a20d8  stdu 1, -272(1)
  04a20dc  mflr 0
  04a20e0  std 0, 288(1)
  04a20e4  stfd 28, 240(1)
  04a20e8  stfd 29, 248(1)
  04a20ec  stfd 30, 256(1)
  04a20f0  stfd 31, 264(1)
  04a20f4  std 31, 232(1)
  04a20f8  cmpwi 3, 0
  04a20fc  std 30, 224(1)
  04a2100  std 29, 216(1)
  04a2104  std 28, 208(1)
  04a2108  std 27, 200(1)
  04a210c  ori 31, 3, 0
  04a2110  bt 2, 0x4a2820
  04a2114  lwz 29, 120(31)
  04a2118  cmpwi 29, 0
  04a211c  bt 2, 0x4a2820
  04a2120  lbz 3, 32(31)
  04a2124  li 28, 0
  04a2128  cmpwi 3, 6
  04a212c  ori 30, 28, 0
  04a2130  bf 0, 0x4a217c
  04a2134  lbz 3, 176(31)
  04a2138  cmpwi 3, 255
  04a213c  bt 2, 0x4a217c
  04a2140  lis 4, 151
  04a2144  lis 5, 161
  04a2148  addic 5, 5, -13692
  04a214c  lwz 4, -25488(4)
  04a2150  addc 3, 3, 5
  04a2154  slwi 4, 4, 4
  04a2158  clrldi 3, 3, 32
  04a215c  extsw 4, 4
  04a2160  lbzx 3, 3, 4
  04a2164  cmpwi 3, 255
  04a2168  bf 2, 0x4a217c
  04a216c  li 4, 6
  04a2170  lbz 3, 33(31)
  04a2174  bl 0x1042ec
  04a2178  nop
  04a217c  lwz 3, 8(29)
  04a2180  cmpwi 3, 0
  04a2184  bf 2, 0x4a2318
  04a2188  lis 3, 151
  04a218c  addic 3, 3, -25376
  04a2190  lhz 4, 782(3)
  04a2194  cmpwi 4, 0
  04a2198  bf 2, 0x4a21ac
  04a219c  lwz 3, 764(3)
  04a21a0  cmpw 3, 31
  04a21a4  bf 2, 0x4a21ac
  04a21a8  li 28, 1
  04a21ac  lis 3, 16201
  04a21b0  lwz 4, 68(31)
  04a21b4  ori 3, 3, 4059
  04a21b8  clrlwi 4, 4, 1
  04a21bc  cmpw 4, 3
  04a21c0  bf 1, 0x4a2318
  04a21c4  lis 3, 151
  04a21c8  lfs 31, 20(31)
  04a21cc  lfs 30, 16(31)
  04a21d0  addic 3, 3, -25376
  04a21d4  lis 4, 74
  04a21d8  lfs 1, 132(3)
  04a21dc  lfs 2, 128(3)
  04a21e0  fsubs 31, 31, 1
  04a21e4  fsubs 30, 30, 2
  04a21e8  addi 4, 4, 8368
  04a21ec  lfs 2, 0(4)
  04a21f0  fmuls 1, 31, 31
  04a21f4  fmadds 1, 30, 30, 1
  04a21f8  fsqrts 1, 1
  04a21fc  fcmpu 0, 1, 2
  04a2200  cror 6, 1, 2
  04a2204  bt 6, 0x4a2318
  04a2208  lwz 4, 8324(3)
  04a220c  cmpwi 4, 17
  04a2210  bf 2, 0x4a2318
  04a2214  lwz 5, 2728(3)
  04a2218  lis 4, 16608
  04a221c  srawi 6, 5, 31
  04a2220  srwi 7, 6, 1
  04a2224  xor 5, 7, 5
  04a2228  subc 5, 5, 6
  04a222c  cmpw 5, 4
  04a2230  bf 0, 0x4a2318
  04a2234  ori 4, 3, 0
  04a2238  fmr 29, 31
  04a223c  lfs 1, 24(31)
  04a2240  addic 27, 1, 112
  04a2244  ori 3, 27, 0
  04a2248  lfs 2, 136(4)
  04a224c  lfs 31, 28(31)
  04a2250  fsubs 28, 1, 2
  04a2254  bl 0x500af8
  04a2258  nop
  04a225c  addic 4, 31, 192
  04a2260  ori 3, 27, 0
  04a2264  bl 0x5010c0
  04a2268  nop
  04a226c  lfs 1, 128(1)
  04a2270  lfs 2, 112(1)
  04a2274  fmuls 1, 1, 29
  04a2278  lfs 3, 144(1)
  04a227c  lfs 5, 160(1)
  04a2280  lis 3, 74
  04a2284  lfs 4, 132(1)
  04a2288  lfs 6, 136(1)
  04a228c  fmuls 4, 4, 29
  04a2290  addi 3, 3, 8368
  04a2294  fmuls 6, 6, 29
  04a2298  fmadds 1, 2, 30, 1
  04a229c  lfs 2, 116(1)
  04a22a0  lfs 7, 120(1)
  04a22a4  fmadds 4, 2, 30, 4
  04a22a8  fmadds 6, 7, 30, 6
  04a22ac  lfs 30, 4(3)
  04a22b0  lfs 2, 148(1)
  04a22b4  fmadds 1, 3, 28, 1
  04a22b8  lfs 3, 164(1)
  04a22bc  fmadds 4, 2, 28, 4
  04a22c0  lfs 2, 152(1)
  04a22c4  fmadds 2, 2, 28, 6
  04a22c8  fmadds 5, 5, 31, 1
  04a22cc  lfs 1, 168(1)
  04a22d0  fabs 5, 5
  04a22d4  fcmpu 0, 5, 30
  04a22d8  cror 6, 1, 2
  04a22dc  bt 6, 0x4a2318
  04a22e0  fmadds 3, 3, 31, 4
  04a22e4  fabs 3, 3
  04a22e8  fcmpu 0, 3, 30
  04a22ec  cror 6, 1, 2
  04a22f0  bt 6, 0x4a2318
  04a22f4  fmadds 1, 1, 31, 2
  04a22f8  lis 3, 74
  04a22fc  addi 3, 3, 8368
  04a2300  lfs 2, 8(3)
  04a2304  fabs 1, 1
  04a2308  fcmpu 0, 1, 2
  04a230c  cror 6, 1, 2
  04a2310  bt 6, 0x4a2318
  04a2314  li 28, 1
  04a2318  lbz 3, 32(31)
  04a231c  cmpwi 1, 3, 6
  04a2320  cmpwi 3, 1
  04a2324  crnand 2, 1, 4
  04a2328  bt 2, 0x4a2404
  04a232c  lbz 3, 188(31)
  04a2330  cmpwi 3, 1
  04a2334  bf 2, 0x4a2404
  04a2338  ori 3, 29, 0
  04a233c  bl 0x4fff60
  04a2340  nop
  04a2344  cmpwi 3, 0
  04a2348  bt 2, 0x4a2374
  04a234c  li 3, 2
  04a2350  li 4, 0
  04a2354  ori 5, 31, 0
  04a2358  bl 0x15d12c
  04a235c  nop
  04a2360  lbz 3, 33(31)
  04a2364  li 4, 8
  04a2368  bl 0x1042ec
  04a236c  nop
  04a2370  b 0x4a2404
  04a2374  addic 3, 29, 4
  04a2378  bl 0x4fff60
  04a237c  nop
  04a2380  cmpwi 3, 0
  04a2384  bt 2, 0x4a2404
  04a2388  li 3, 0
  04a238c  li 4, 0
  04a2390  ori 5, 31, 0
  04a2394  bl 0x15d12c
  04a2398  nop
  04a239c  lis 3, 74
  04a23a0  lis 4, 114
  04a23a4  addi 5, 3, 8368
  04a23a8  lfs 1, 12(5)
  04a23ac  lfs 2, -3056(4)
  04a23b0  fmuls 1, 2, 1
  04a23b4  fctiwz 1, 1
  04a23b8  stfd 1, 176(1)
  04a23bc  lfs 1, 16(5)
  04a23c0  lwz 3, 180(1)
  04a23c4  fmuls 1, 2, 1
  04a23c8  lwz 4, 0(29)
  04a23cc  fctiwz 1, 1
  04a23d0  stfd 1, 176(1)
  04a23d4  lfs 1, 20(5)
  04a23d8  lwz 5, 180(1)
  04a23dc  fmuls 1, 2, 1
  04a23e0  fctiwz 1, 1
  04a23e4  stfd 1, 176(1)
  04a23e8  lwz 6, 180(1)
  04a23ec  divw 4, 4, 6
  04a23f0  addc 4, 5, 4
  04a23f4  cmpw 3, 4
  04a23f8  bt 0, 0x4a2400
  04a23fc  ori 3, 4, 0
  04a2400  stw 3, 4(29)
  04a2404  lbz 3, 32(31)
  04a2408  cmpwi 3, 3
  04a240c  cmpwi 1, 3, 0
  04a2410  cmpwi 6, 3, -1
  04a2414  cmpwi 7, 3, 1
  04a2418  bt 1, 0x4a243c
  04a241c  bt 5, 0x4a2428
  04a2420  bf 25, 0x4a2820
  04a2424  b 0x4a2470
  04a2428  bf 29, 0x4a24ac
  04a242c  cmpwi 3, 2
  04a2430  cmpwi 1, 28, 0
  04a2434  bf 1, 0x4a25dc
  04a2438  b 0x4a25e8
  04a243c  cmpwi 3, 6
  04a2440  bt 1, 0x4a245c
  04a2444  cmpwi 3, 4
  04a2448  bf 1, 0x4a2634
  04a244c  cmpwi 3, 5
  04a2450  cmpwi 1, 28, 0
  04a2454  bf 1, 0x4a2640
  04a2458  b 0x4a268c
  04a245c  cmpwi 3, 7
  04a2460  bf 1, 0x4a26f0
  04a2464  cmpwi 3, 8
  04a2468  bf 1, 0x4a27fc
  04a246c  b 0x4a2820
  04a2470  ori 3, 31, 0
  04a2474  li 4, 128
  04a2478  li 5, 128
  04a247c  li 6, 128
  04a2480  bl 0xf1ec8
  04a2484  nop
  04a2488  lbz 3, 33(31)
  04a248c  li 4, 0
  04a2490  bl 0x104298
  04a2494  nop
  04a2498  lbz 3, 33(31)
  04a249c  li 4, 1
  04a24a0  bl 0x1042ec
  04a24a4  nop
  04a24a8  b 0x4a2820
  04a24ac  ori 3, 31, 0
  04a24b0  stw 30, 8(29)
  04a24b4  li 4, 128
  04a24b8  li 5, 128
  04a24bc  li 6, 128
  04a24c0  bl 0xf1ec8
  04a24c4  nop
  04a24c8  cmpwi 28, 0
  04a24cc  bt 2, 0x4a2820
  04a24d0  li 3, 16
  04a24d4  addi 4, 3, 16
  04a24d8  lvlx 2, 3, 29
  04a24dc  lwz 3, 16(29)
  04a24e0  lvrx 3, 4, 29
  04a24e4  cmpwi 3, 0
  04a24e8  vor 2, 2, 3
  04a24ec  bf 1, 0x4a2544
  04a24f0  lis 3, 74
  04a24f4  li 4, 24
  04a24f8  vspltisw 3, -16
  04a24fc  addi 3, 3, 8368
  04a2500  vspltisw 4, 0
  04a2504  lis 5, 114
  04a2508  li 6, -3056
  04a250c  lvlx 5, 4, 3
  04a2510  li 4, 28
  04a2514  vspltw 5, 5, 0
  04a2518  vrlw 6, 5, 3
  04a251c  vmulouh 5, 2, 5
  04a2520  vmsumshm 2, 2, 6, 4
  04a2524  lvlx 4, 4, 3
  04a2528  vslw 2, 2, 3
  04a252c  vspltw 3, 4, 0
  04a2530  vadduwm 2, 2, 5
  04a2534  vcfsx 5, 2, 0
  04a2538  lvlx 2, 6, 5
  04a253c  vaddfp 3, 5, 3
  04a2540  b 0x4a2564
  04a2544  lis 5, 74
  04a2548  lis 3, 114
  04a254c  li 6, -3056
  04a2550  li 4, 32
  04a2554  addi 5, 5, 8368
  04a2558  lvlx 2, 6, 3
  04a255c  lvlx 3, 4, 5
  04a2560  vspltw 3, 3, 0
  04a2564  vspltisw 4, -1
  04a2568  vspltw 3, 3, 0
  04a256c  vspltw 2, 2, 0
  04a2570  ori 3, 31, 0
  04a2574  vslw 4, 4, 4
  04a2578  li 4, 0
  04a257c  li 5, 255
  04a2580  li 6, 0
  04a2584  vmaddfp 2, 2, 3, 4
  04a2588  vctsxs 2, 2, 0
  04a258c  stvewx 2, 0, 29
  04a2590  bl 0xf1ec8
  04a2594  nop
  04a2598  li 30, 1
  04a259c  li 4, 0
  04a25a0  stw 30, 8(29)
  04a25a4  lbz 3, 33(31)
  04a25a8  bl 0x104298
  04a25ac  nop
  04a25b0  stb 30, 188(31)
  04a25b4  li 3, 3
  04a25b8  li 4, 0
  04a25bc  ori 5, 31, 0
  04a25c0  bl 0x15d12c
  04a25c4  nop
  04a25c8  lbz 3, 33(31)
  04a25cc  li 4, 2
  04a25d0  bl 0x1042ec
  04a25d4  nop
  04a25d8  b 0x4a2820
  04a25dc  li 3, 3
  04a25e0  stb 3, 32(31)
  04a25e4  b 0x4a2820
  04a25e8  bt 6, 0x4a2820
  04a25ec  li 6, 1
  04a25f0  ori 3, 31, 0
  04a25f4  li 4, 0
  04a25f8  li 5, 255
  04a25fc  stw 6, 8(29)
  04a2600  li 6, 0
  04a2604  bl 0xf1ec8
  04a2608  nop
  04a260c  li 3, 3
  04a2610  li 4, 0
  04a2614  ori 5, 31, 0
  04a2618  bl 0x15d12c
  04a261c  nop
  04a2620  lbz 3, 33(31)
  04a2624  li 4, 4
  04a2628  bl 0x1042ec
  04a262c  nop
  04a2630  b 0x4a2820
  04a2634  li 3, 5
  04a2638  stb 3, 32(31)
  04a263c  b 0x4a2820
  04a2640  bt 6, 0x4a2820
  04a2644  li 6, 1
  04a2648  ori 3, 31, 0
  04a264c  li 4, 0
  04a2650  li 5, 255
  04a2654  stw 6, 8(29)
  04a2658  li 6, 0
  04a265c  bl 0xf1ec8
  04a2660  nop
  04a2664  lbz 3, 33(31)
  04a2668  li 4, 6
  04a266c  bl 0x1042ec
  04a2670  nop
  04a2674  li 3, 1
  04a2678  li 4, 0
  04a267c  ori 5, 31, 0
  04a2680  bl 0x15d12c
  04a2684  nop
  04a2688  b 0x4a2820
  04a268c  lis 3, 74
  04a2690  vspltisw 2, -1
  04a2694  li 5, 36
  04a2698  addi 3, 3, 8368
  04a269c  lis 4, 114
  04a26a0  li 6, -3056
  04a26a4  vslw 2, 2, 2
  04a26a8  li 7, 12
  04a26ac  lvlx 3, 5, 3
  04a26b0  vspltw 3, 3, 0
  04a26b4  lvlx 4, 6, 4
  04a26b8  ori 3, 31, 0
  04a26bc  li 4, 128
  04a26c0  vmaddfp 2, 4, 3, 2
  04a26c4  li 5, 255
  04a26c8  li 6, 128
  04a26cc  vctsxs 2, 2, 0
  04a26d0  vsplth 2, 2, 1
  04a26d4  stvehx 2, 7, 29
  04a26d8  sth 30, 14(29)
  04a26dc  bl 0xf1ec8
  04a26e0  nop
  04a26e4  li 3, 7
  04a26e8  stb 3, 32(31)
  04a26ec  b 0x4a2820
  04a26f0  lbz 3, 176(31)
  04a26f4  cmpwi 3, 255
  04a26f8  bt 2, 0x4a2730
  04a26fc  lis 4, 151
  04a2700  lis 5, 161
  04a2704  addic 5, 5, -13692
  04a2708  lwz 4, -25488(4)
  04a270c  addc 5, 3, 5
  04a2710  slwi 4, 4, 4
  04a2714  clrldi 5, 5, 32
  04a2718  extsw 4, 4
  04a271c  lbzx 4, 5, 4
  04a2720  cmpwi 4, 255
  04a2724  bt 2, 0x4a2730
  04a2728  bl 0xf1e50
  04a272c  nop
  04a2730  addic 3, 29, 12
  04a2734  bl 0x4fffb4
  04a2738  nop
  04a273c  cmpwi 3, 0
  04a2740  bt 2, 0x4a2820
  04a2744  lis 3, 74
  04a2748  vspltisw 2, -1
  04a274c  li 5, 36
  04a2750  addi 3, 3, 8368
  04a2754  lis 4, 114
  04a2758  li 6, -3056
  04a275c  vslw 2, 2, 2
  04a2760  lvlx 3, 5, 3
  04a2764  li 3, 12
  04a2768  vspltw 3, 3, 0
  04a276c  lvlx 4, 6, 4
  04a2770  vmaddfp 2, 4, 3, 2
  04a2774  vctsxs 2, 2, 0
  04a2778  vsplth 2, 2, 1
  04a277c  stvehx 2, 3, 29
  04a2780  lhz 3, 14(29)
  04a2784  extsh 3, 3
  04a2788  cmpwi 3, 0
  04a278c  cmpwi 1, 3, -1
  04a2790  cmpwi 6, 3, 1
  04a2794  cmpwi 7, 3, 5
  04a2798  bt 1, 0x4a27a4
  04a279c  bf 5, 0x4a2820
  04a27a0  b 0x4a27b0
  04a27a4  bf 25, 0x4a27d4
  04a27a8  bf 29, 0x4a27f4
  04a27ac  b 0x4a2820
  04a27b0  ori 3, 31, 0
  04a27b4  li 4, 0
  04a27b8  li 5, 255
  04a27bc  li 6, 0
  04a27c0  bl 0xf1ec8
  04a27c4  nop
  04a27c8  li 3, 1
  04a27cc  sth 3, 14(29)
  04a27d0  b 0x4a2820
  04a27d4  ori 3, 31, 0
  04a27d8  li 4, 255
  04a27dc  li 5, 255
  04a27e0  li 6, 255
  04a27e4  bl 0xf1ec8
  04a27e8  nop
  04a27ec  sth 30, 14(29)
  04a27f0  b 0x4a2820
  04a27f4  sth 30, 14(29)
  04a27f8  b 0x4a2820
  04a27fc  ori 3, 31, 0
  04a2800  li 4, 128
  04a2804  li 5, 128
  04a2808  li 6, 128
  04a280c  bl 0xf1ec8
  04a2810  nop
  04a2814  li 3, 1
  04a2818  stb 30, 188(31)
  04a281c  stb 3, 32(31)
  04a2820  ld 0, 288(1)
  04a2824  mtlr 0
  04a2828  lfd 28, 240(1)
  04a282c  lfd 29, 248(1)
  04a2830  lfd 30, 256(1)
  04a2834  lfd 31, 264(1)
  04a2838  ld 27, 200(1)
  04a283c  ld 28, 208(1)
  04a2840  ld 29, 216(1)
  04a2844  ld 30, 224(1)
  04a2848  ld 31, 232(1)
  04a284c  addi 1, 1, 272
  04a2850  blr
