# game/update/moby585.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M585_003d24a8:   # 0x3d24a8, 0x690 bytes
  03d24a8  stdu 1, -480(1)
  03d24ac  mflr 0
  03d24b0  std 0, 496(1)
  03d24b4  stfd 14, 336(1)
  03d24b8  stfd 15, 344(1)
  03d24bc  stfd 16, 352(1)
  03d24c0  stfd 17, 360(1)
  03d24c4  stfd 18, 368(1)
  03d24c8  stfd 19, 376(1)
  03d24cc  stfd 20, 384(1)
  03d24d0  stfd 21, 392(1)
  03d24d4  stfd 22, 400(1)
  03d24d8  stfd 23, 408(1)
  03d24dc  stfd 24, 416(1)
  03d24e0  stfd 25, 424(1)
  03d24e4  stfd 26, 432(1)
  03d24e8  stfd 27, 440(1)
  03d24ec  stfd 28, 448(1)
  03d24f0  stfd 29, 456(1)
  03d24f4  stfd 30, 464(1)
  03d24f8  stfd 31, 472(1)
  03d24fc  std 31, 328(1)
  03d2500  ori 31, 3, 0
  03d2504  std 29, 312(1)
  03d2508  lis 3, 132
  03d250c  lis 4, 61
  03d2510  std 30, 320(1)
  03d2514  addi 29, 4, 9352
  03d2518  lwz 30, 120(31)
  03d251c  lwz 3, 26048(3)
  03d2520  std 28, 304(1)
  03d2524  std 27, 296(1)
  03d2528  std 26, 288(1)
  03d252c  extsw 3, 3
  03d2530  bl 0x685c4
  03d2534  nop
  03d2538  ori 28, 3, 0
  03d253c  lis 9, 0
  03d2540  li 3, 0
  03d2544  li 4, 0
  03d2548  ori 9, 9, 65424
  03d254c  li 5, 1
  03d2550  li 6, 1
  03d2554  li 7, 1
  03d2558  li 8, 0
  03d255c  bl 0x502fd4
  03d2560  nop
  03d2564  ori 27, 3, 0
  03d2568  li 4, 1
  03d256c  li 3, 0
  03d2570  li 5, 0
  03d2574  li 6, 0
  03d2578  li 7, 0
  03d257c  li 8, 0
  03d2580  bl 0x502f08
  03d2584  nop
  03d2588  lis 4, 269
  03d258c  lis 6, 132
  03d2590  lis 7, 269
  03d2594  lis 8, 132
  03d2598  lis 5, 132
  03d259c  ori 26, 3, 0
  03d25a0  lwz 3, -24688(4)
  03d25a4  lwz 4, 26032(6)
  03d25a8  lwz 6, -24684(7)
  03d25ac  lwz 7, 26036(8)
  03d25b0  lwz 8, 26040(5)
  03d25b4  ori 5, 6, 0
  03d25b8  ori 6, 7, 0
  03d25bc  ori 7, 8, 0
  03d25c0  bl 0x502ea8
  03d25c4  nop
  03d25c8  lis 4, 132
  03d25cc  std 28, 232(1)
  03d25d0  std 27, 240(1)
  03d25d4  li 5, 0
  03d25d8  lis 6, 16256
  03d25dc  lwz 4, 26044(4)
  03d25e0  std 26, 224(1)
  03d25e4  stw 4, 188(1)
  03d25e8  stw 4, 184(1)
  03d25ec  stw 4, 180(1)
  03d25f0  stw 4, 176(1)
  03d25f4  std 3, 248(1)
  03d25f8  lfs 31, 0(29)
  03d25fc  lis 3, 114
  03d2600  stw 5, 192(1)
  03d2604  stw 5, 208(1)
  03d2608  lfs 23, 4(29)
  03d260c  stw 6, 200(1)
  03d2610  stw 6, 216(1)
  03d2614  stw 5, 196(1)
  03d2618  stw 5, 204(1)
  03d261c  stw 6, 212(1)
  03d2620  stw 6, 220(1)
  03d2624  lfs 0, 36(30)
  03d2628  lfs 1, -3052(3)
  03d262c  fadds 0, 0, 1
  03d2630  lfs 1, 40(30)
  03d2634  lfs 2, 48(30)
  03d2638  lfs 3, 52(30)
  03d263c  lfs 4, 56(30)
  03d2640  fcmpu 0, 0, 23
  03d2644  stfs 0, 36(30)
  03d2648  cror 6, 0, 2
  03d264c  bt 6, 0x3d2658
  03d2650  fsubs 0, 0, 23
  03d2654  stfs 0, 36(30)
  03d2658  fcmpu 0, 0, 1
  03d265c  cror 6, 0, 2
  03d2660  bt 6, 0x3d2668
  03d2664  stfs 0, 40(30)
  03d2668  fmuls 1, 3, 3
  03d266c  fmr 16, 31
  03d2670  fmr 30, 0
  03d2674  fmadds 1, 2, 2, 1
  03d2678  fmr 15, 16
  03d267c  fmadds 1, 4, 4, 1
  03d2680  fmr 14, 15
  03d2684  fsqrts 5, 1
  03d2688  fcmpu 0, 5, 14
  03d268c  bt 2, 0x3d26dc
  03d2690  frsqrte 5, 1
  03d2694  lis 3, 61
  03d2698  addi 3, 3, 9352
  03d269c  lfs 6, 8(3)
  03d26a0  fmuls 7, 1, 5
  03d26a4  fmuls 8, 6, 5
  03d26a8  fnmsubs 7, 7, 5, 23
  03d26ac  fmadds 5, 7, 8, 5
  03d26b0  fmuls 7, 1, 5
  03d26b4  fmuls 8, 6, 5
  03d26b8  fnmsubs 7, 7, 5, 23
  03d26bc  fmadds 5, 7, 8, 5
  03d26c0  fmuls 1, 1, 5
  03d26c4  fmuls 6, 6, 5
  03d26c8  fnmsubs 1, 1, 5, 23
  03d26cc  fmadds 14, 1, 6, 5
  03d26d0  fmuls 16, 2, 14
  03d26d4  fmuls 15, 3, 14
  03d26d8  fmuls 14, 4, 14
  03d26dc  fmuls 1, 14, 14
  03d26e0  fmr 21, 31
  03d26e4  fneg 1, 1
  03d26e8  fmr 22, 21
  03d26ec  fneg 1, 1
  03d26f0  fmadds 1, 15, 15, 1
  03d26f4  fsqrts 2, 1
  03d26f8  fcmpu 0, 2, 22
  03d26fc  bt 2, 0x3d274c
  03d2700  frsqrte 2, 1
  03d2704  lis 3, 61
  03d2708  addi 3, 3, 9352
  03d270c  lfs 3, 8(3)
  03d2710  fmuls 4, 1, 2
  03d2714  fmuls 5, 3, 2
  03d2718  fnmsubs 4, 4, 2, 23
  03d271c  fmadds 2, 4, 5, 2
  03d2720  fmuls 4, 1, 2
  03d2724  fmuls 5, 3, 2
  03d2728  fnmsubs 4, 4, 2, 23
  03d272c  fmadds 2, 4, 5, 2
  03d2730  fmuls 1, 1, 2
  03d2734  fmuls 3, 3, 2
  03d2738  fnmsubs 1, 1, 2, 23
  03d273c  fmadds 21, 1, 3, 2
  03d2740  fmuls 22, 14, 21
  03d2744  fmuls 21, 15, 21
  03d2748  fneg 22, 22
  03d274c  fmuls 2, 21, 15
  03d2750  fmsubs 3, 21, 16, 31
  03d2754  fmuls 4, 22, 16
  03d2758  fmr 18, 31
  03d275c  fmsubs 2, 22, 14, 2
  03d2760  fmuls 1, 3, 3
  03d2764  fmsubs 4, 31, 15, 4
  03d2768  fmr 19, 18
  03d276c  fmadds 1, 2, 2, 1
  03d2770  fmr 20, 19
  03d2774  fmadds 1, 4, 4, 1
  03d2778  fsqrts 5, 1
  03d277c  fcmpu 0, 5, 20
  03d2780  bt 2, 0x3d27d0
  03d2784  frsqrte 5, 1
  03d2788  lis 3, 61
  03d278c  addi 3, 3, 9352
  03d2790  lfs 6, 8(3)
  03d2794  fmuls 7, 1, 5
  03d2798  fmuls 8, 6, 5
  03d279c  fnmsubs 7, 7, 5, 23
  03d27a0  fmadds 5, 7, 8, 5
  03d27a4  fmuls 7, 1, 5
  03d27a8  fmuls 8, 6, 5
  03d27ac  fnmsubs 7, 7, 5, 23
  03d27b0  fmadds 5, 7, 8, 5
  03d27b4  fmuls 1, 1, 5
  03d27b8  fmuls 6, 6, 5
  03d27bc  fnmsubs 1, 1, 5, 23
  03d27c0  fmadds 18, 1, 6, 5
  03d27c4  fmuls 20, 2, 18
  03d27c8  fmuls 19, 3, 18
  03d27cc  fmuls 18, 4, 18
  03d27d0  fsubs 1, 0, 23
  03d27d4  fmr 27, 0
  03d27d8  fcmpu 0, 0, 1
  03d27dc  cror 6, 0, 2
  03d27e0  bt 6, 0x3d2ac8
  03d27e4  fmuls 1, 15, 15
  03d27e8  fmuls 2, 19, 19
  03d27ec  fmuls 3, 22, 22
  03d27f0  lis 3, 61
  03d27f4  addi 3, 3, 9352
  03d27f8  fmadds 1, 16, 16, 1
  03d27fc  fmadds 2, 20, 20, 2
  03d2800  fmadds 3, 31, 31, 3
  03d2804  lfs 24, 8(3)
  03d2808  lfs 5, 12(3)
  03d280c  lis 29, 161
  03d2810  addic 29, 29, 24396
  03d2814  fmadds 1, 14, 14, 1
  03d2818  fmadds 29, 18, 18, 2
  03d281c  fmadds 26, 21, 21, 3
  03d2820  frsqrte 2, 1
  03d2824  frsqrte 3, 29
  03d2828  frsqrte 4, 26
  03d282c  fsqrts 28, 1
  03d2830  fmuls 6, 1, 2
  03d2834  fmuls 7, 24, 2
  03d2838  fmuls 8, 29, 3
  03d283c  fmuls 10, 26, 4
  03d2840  fmuls 9, 24, 3
  03d2844  fmuls 11, 24, 4
  03d2848  fnmsubs 6, 6, 2, 23
  03d284c  fnmsubs 8, 8, 3, 23
  03d2850  fnmsubs 10, 10, 4, 23
  03d2854  fmadds 2, 6, 7, 2
  03d2858  fmadds 3, 8, 9, 3
  03d285c  fmadds 4, 10, 11, 4
  03d2860  lfs 11, 16(3)
  03d2864  stfd 5, 264(1)
  03d2868  lfs 25, 20(3)
  03d286c  lfs 17, 24(3)
  03d2870  fmuls 6, 1, 2
  03d2874  fmuls 7, 24, 2
  03d2878  fmuls 8, 29, 3
  03d287c  fmuls 10, 26, 4
  03d2880  fmuls 9, 24, 3
  03d2884  fmuls 12, 24, 4
  03d2888  stfd 11, 256(1)
  03d288c  fnmsubs 6, 6, 2, 23
  03d2890  fnmsubs 8, 8, 3, 23
  03d2894  fnmsubs 10, 10, 4, 23
  03d2898  fmadds 2, 6, 7, 2
  03d289c  fmadds 3, 8, 9, 3
  03d28a0  fmadds 4, 10, 12, 4
  03d28a4  fmuls 1, 1, 2
  03d28a8  fmuls 5, 24, 2
  03d28ac  fmuls 6, 29, 3
  03d28b0  fmuls 8, 26, 4
  03d28b4  fmuls 7, 24, 3
  03d28b8  fsqrts 29, 29
  03d28bc  fnmsubs 1, 1, 2, 23
  03d28c0  fnmsubs 6, 6, 3, 23
  03d28c4  fsqrts 26, 26
  03d28c8  fmadds 1, 1, 5, 2
  03d28cc  fmuls 2, 24, 4
  03d28d0  fnmsubs 5, 8, 4, 23
  03d28d4  fmadds 3, 6, 7, 3
  03d28d8  fmuls 14, 1, 14
  03d28dc  fmuls 15, 1, 15
  03d28e0  fmuls 16, 1, 16
  03d28e4  fmadds 1, 5, 2, 4
  03d28e8  fmuls 18, 3, 18
  03d28ec  fmuls 19, 3, 19
  03d28f0  fmuls 20, 3, 20
  03d28f4  fmuls 21, 1, 21
  03d28f8  fmuls 22, 1, 22
  03d28fc  lfs 1, 40(30)
  03d2900  fcmpu 0, 30, 1
  03d2904  bt 1, 0x3d2aa8
  03d2908  fmuls 1, 30, 16
  03d290c  lfd 6, 264(1)
  03d2910  fsub 2, 31, 28
  03d2914  lfs 11, 16(30)
  03d2918  fmuls 3, 30, 15
  03d291c  fsub 5, 31, 28
  03d2920  fsub 4, 28, 31
  03d2924  fmuls 7, 30, 14
  03d2928  fsub 9, 31, 28
  03d292c  stfs 22, 272(1)
  03d2930  fmadds 6, 30, 24, 6
  03d2934  fsub 8, 28, 31
  03d2938  fsub 10, 28, 31
  03d293c  fsub 12, 31, 29
  03d2940  fsel 2, 2, 31, 1
  03d2944  fsub 13, 31, 29
  03d2948  fsel 5, 5, 31, 3
  03d294c  fsub 0, 31, 26
  03d2950  fsel 1, 4, 2, 1
  03d2954  fsel 2, 9, 31, 7
  03d2958  fmuls 4, 6, 18
  03d295c  fsel 3, 8, 5, 3
  03d2960  fmuls 5, 6, 19
  03d2964  fsub 9, 29, 31
  03d2968  fmuls 8, 6, 20
  03d296c  fsubs 1, 11, 1
  03d2970  fsel 2, 10, 2, 7
  03d2974  fsel 10, 12, 31, 4
  03d2978  fsub 7, 29, 31
  03d297c  fsel 11, 13, 31, 5
  03d2980  fsub 12, 31, 29
  03d2984  fmuls 13, 6, 21
  03d2988  fmuls 6, 6, 22
  03d298c  fsub 22, 31, 26
  03d2990  stfs 1, 112(1)
  03d2994  fsel 4, 9, 10, 4
  03d2998  lfs 9, 20(30)
  03d299c  fsel 5, 7, 11, 5
  03d29a0  fsubs 3, 9, 3
  03d29a4  fsel 7, 12, 31, 8
  03d29a8  fsub 9, 29, 31
  03d29ac  fsel 10, 0, 31, 13
  03d29b0  fsel 11, 22, 31, 6
  03d29b4  fsub 0, 26, 31
  03d29b8  fsub 12, 26, 31
  03d29bc  stfs 3, 116(1)
  03d29c0  fsel 7, 9, 7, 8
  03d29c4  lfs 8, 24(30)
  03d29c8  fsel 6, 0, 11, 6
  03d29cc  fsubs 2, 8, 2
  03d29d0  fsubs 9, 3, 5
  03d29d4  fadds 3, 3, 5
  03d29d8  fsel 8, 12, 10, 13
  03d29dc  fsubs 5, 1, 7
  03d29e0  fadds 1, 1, 7
  03d29e4  fsubs 10, 2, 4
  03d29e8  fadds 4, 2, 4
  03d29ec  stfs 2, 120(1)
  03d29f0  fsubs 2, 9, 6
  03d29f4  lfs 11, 28(30)
  03d29f8  fadds 9, 9, 6
  03d29fc  fsubs 7, 3, 6
  03d2a00  stfs 11, 124(1)
  03d2a04  fadds 3, 3, 6
  03d2a08  stfs 11, 140(1)
  03d2a0c  stfs 11, 156(1)
  03d2a10  stfs 11, 172(1)
  03d2a14  fsubs 6, 10, 8
  03d2a18  fadds 10, 10, 8
  03d2a1c  stfs 5, 112(1)
  03d2a20  fsubs 11, 4, 8
  03d2a24  stfs 5, 144(1)
  03d2a28  fadds 4, 4, 8
  03d2a2c  stfs 2, 116(1)
  03d2a30  fsubs 2, 23, 30
  03d2a34  stfs 9, 148(1)
  03d2a38  stfs 1, 128(1)
  03d2a3c  stfs 7, 132(1)
  03d2a40  stfs 1, 160(1)
  03d2a44  lwz 3, 144(31)
  03d2a48  stfs 6, 120(1)
  03d2a4c  clrlwi 28, 3, 8
  03d2a50  stfs 10, 152(1)
  03d2a54  stfs 11, 136(1)
  03d2a58  lfd 1, 256(1)
  03d2a5c  stfs 3, 164(1)
  03d2a60  stfs 4, 168(1)
  03d2a64  fmuls 1, 2, 1
  03d2a68  bl 0x502758
  03d2a6c  nop
  03d2a70  rlwimi 28, 3, 24, 0, 7
  03d2a74  lwz 6, 28(29)
  03d2a78  addic 3, 1, 112
  03d2a7c  li 4, 0
  03d2a80  li 5, 1
  03d2a84  stw 28, 188(1)
  03d2a88  stw 28, 184(1)
  03d2a8c  li 7, 9
  03d2a90  stw 28, 180(1)
  03d2a94  stw 28, 176(1)
  03d2a98  bl 0x72280
  03d2a9c  nop
  03d2aa0  lfs 0, 36(30)
  03d2aa4  lfs 22, 272(1)
  03d2aa8  fsubs 1, 0, 23
  03d2aac  fsubs 27, 27, 25
  03d2ab0  fsubs 2, 30, 25
  03d2ab4  fsubs 30, 30, 17
  03d2ab8  fcmpu 0, 27, 1
  03d2abc  fsub 1, 2, 31
  03d2ac0  fsel 30, 1, 2, 30
  03d2ac4  bt 1, 0x3d28fc
  03d2ac8  ld 0, 496(1)
  03d2acc  mtlr 0
  03d2ad0  lfd 14, 336(1)
  03d2ad4  lfd 15, 344(1)
  03d2ad8  lfd 16, 352(1)
  03d2adc  lfd 17, 360(1)
  03d2ae0  lfd 18, 368(1)
  03d2ae4  lfd 19, 376(1)
  03d2ae8  lfd 20, 384(1)
  03d2aec  lfd 21, 392(1)
  03d2af0  lfd 22, 400(1)
  03d2af4  lfd 23, 408(1)
  03d2af8  lfd 24, 416(1)
  03d2afc  lfd 25, 424(1)
  03d2b00  lfd 26, 432(1)
  03d2b04  lfd 27, 440(1)
  03d2b08  lfd 28, 448(1)
  03d2b0c  lfd 29, 456(1)
  03d2b10  lfd 30, 464(1)
  03d2b14  lfd 31, 472(1)
  03d2b18  ld 26, 288(1)
  03d2b1c  ld 27, 296(1)
  03d2b20  ld 28, 304(1)
  03d2b24  ld 29, 312(1)
  03d2b28  ld 30, 320(1)
  03d2b2c  ld 31, 328(1)
  03d2b30  addi 1, 1, 480
  03d2b34  blr

M585_003d2b38:   # 0x3d2b38, 0xc8 bytes
  03d2b38  lis 4, 151
  03d2b3c  lwz 4, -25488(4)
  03d2b40  cmpwi 4, 20
  03d2b44  bf 0, 0x3d2bfc
  03d2b48  ori 5, 3, 0
  03d2b4c  lis 3, 161
  03d2b50  slwi 6, 4, 4
  03d2b54  addic 4, 3, -13372
  03d2b58  extsw 3, 6
  03d2b5c  lbz 5, 188(5)
  03d2b60  addic 5, 5, -1
  03d2b64  clrlwi 6, 5, 31
  03d2b68  cmpwi 6, 0
  03d2b6c  bt 2, 0x3d2bb8
  03d2b70  srawi 5, 5, 1
  03d2b74  li 6, 15
  03d2b78  addze 5, 5
  03d2b7c  addc 4, 5, 4
  03d2b80  li 5, 15
  03d2b84  clrldi 4, 4, 32
  03d2b88  lbzx 7, 4, 3
  03d2b8c  clrlwi 8, 7, 28
  03d2b90  rlwinm 7, 7, 0, 24, 27
  03d2b94  addic 8, 8, 1
  03d2b98  subc 5, 5, 8
  03d2b9c  subc 6, 6, 8
  03d2ba0  sradi 5, 5, 63
  03d2ba4  and 5, 5, 6
  03d2ba8  addc 5, 8, 5
  03d2bac  or 5, 5, 7
  03d2bb0  stbx 5, 4, 3
  03d2bb4  b 0x3d2bfc
  03d2bb8  srawi 5, 5, 1
  03d2bbc  li 6, 15
  03d2bc0  addze 5, 5
  03d2bc4  addc 4, 5, 4
  03d2bc8  li 5, 15
  03d2bcc  clrldi 4, 4, 32
  03d2bd0  lbzx 7, 4, 3
  03d2bd4  rlwinm 8, 7, 28, 28, 31
  03d2bd8  clrlwi 7, 7, 28
  03d2bdc  addic 8, 8, 1
  03d2be0  subc 5, 5, 8
  03d2be4  subc 6, 6, 8
  03d2be8  sradi 5, 5, 63
  03d2bec  and 5, 5, 6
  03d2bf0  addc 5, 8, 5
  03d2bf4  rlwimi 7, 5, 4, 23, 27
  03d2bf8  stbx 7, 4, 3
  03d2bfc  blr

UpdateMoby_585:   # 0x3d2c48, 0x10a4 bytes
  03d2c48  stdu 1, -704(1)
  03d2c4c  mflr 0
  03d2c50  std 0, 720(1)
  03d2c54  stfd 27, 664(1)
  03d2c58  stfd 28, 672(1)
  03d2c5c  stfd 29, 680(1)
  03d2c60  stfd 30, 688(1)
  03d2c64  stfd 31, 696(1)
  03d2c68  std 31, 656(1)
  03d2c6c  cmpwi 3, 0
  03d2c70  std 30, 648(1)
  03d2c74  std 29, 640(1)
  03d2c78  std 28, 632(1)
  03d2c7c  std 27, 624(1)
  03d2c80  ori 31, 3, 0
  03d2c84  bt 2, 0x3d3cb4
  03d2c88  lwz 30, 120(31)
  03d2c8c  cmpwi 30, 0
  03d2c90  bt 2, 0x3d3cb4
  03d2c94  addic 29, 30, 16
  03d2c98  ori 3, 31, 0
  03d2c9c  li 4, 0
  03d2ca0  ori 5, 29, 0
  03d2ca4  bl 0xf1114
  03d2ca8  nop
  03d2cac  lbz 3, 32(31)
  03d2cb0  cmpwi 3, 0
  03d2cb4  bt 1, 0x3d2cc4
  03d2cb8  cmpwi 3, -1
  03d2cbc  bf 1, 0x3d3cb4
  03d2cc0  b 0x3d2cd0
  03d2cc4  cmpwi 3, 2
  03d2cc8  bf 1, 0x3d2d4c
  03d2ccc  b 0x3d3cb4
  03d2cd0  lis 3, 151
  03d2cd4  vspltisw 2, 0
  03d2cd8  lis 4, 18371
  03d2cdc  addic 3, 3, -25376
  03d2ce0  ori 4, 4, 20480
  03d2ce4  li 6, 0
  03d2ce8  li 5, -1
  03d2cec  lis 7, 150
  03d2cf0  stw 4, 8260(3)
  03d2cf4  li 8, 32767
  03d2cf8  addic 7, 7, 19008
  03d2cfc  stw 6, 8256(3)
  03d2d00  stw 5, 0(30)
  03d2d04  lis 9, 269
  03d2d08  stw 5, 4(30)
  03d2d0c  li 10, -24672
  03d2d10  stw 5, 12(30)
  03d2d14  ori 3, 31, 0
  03d2d18  stw 8, 8(30)
  03d2d1c  addic 5, 9, -24672
  03d2d20  lbz 7, 137(7)
  03d2d24  li 4, 3
  03d2d28  stb 7, 32(30)
  03d2d2c  stw 6, 36(30)
  03d2d30  stw 6, 40(30)
  03d2d34  stvx 2, 10, 9
  03d2d38  bl 0xf0ea8
  03d2d3c  nop
  03d2d40  li 3, 1
  03d2d44  stb 3, 32(31)
  03d2d48  b 0x3d3cb4
  03d2d4c  lis 3, 61
  03d2d50  li 4, 0
  03d2d54  addi 3, 3, 11264
  03d2d58  lis 28, 151
  03d2d5c  lis 5, 16256
  03d2d60  addic 28, 28, -25376
  03d2d64  lfs 29, 0(3)
  03d2d68  stw 4, 128(1)
  03d2d6c  stw 4, 132(1)
  03d2d70  lfs 31, 4(3)
  03d2d74  lwz 3, 8256(28)
  03d2d78  stw 5, 136(1)
  03d2d7c  cmpwi 3, 0
  03d2d80  stw 4, 140(1)
  03d2d84  lfs 2, 152(28)
  03d2d88  bt 2, 0x3d35dc
  03d2d8c  lhz 4, 166(3)
  03d2d90  cmpwi 4, 605
  03d2d94  bf 2, 0x3d35dc
  03d2d98  lbz 4, 32(3)
  03d2d9c  cmpwi 1, 4, 253
  03d2da0  cmpwi 4, 254
  03d2da4  cror 2, 2, 6
  03d2da8  bt 2, 0x3d35dc
  03d2dac  lfs 7, 20(30)
  03d2db0  lfs 4, 20(3)
  03d2db4  lfs 6, 16(30)
  03d2db8  fsubs 1, 7, 4
  03d2dbc  lfs 3, 16(3)
  03d2dc0  fsubs 5, 6, 3
  03d2dc4  lis 4, 61
  03d2dc8  addi 4, 4, 11264
  03d2dcc  fmuls 1, 1, 1
  03d2dd0  fmadds 1, 5, 5, 1
  03d2dd4  lfs 5, 24(3)
  03d2dd8  lfs 8, 24(30)
  03d2ddc  fsubs 5, 5, 8
  03d2de0  lis 3, 115
  03d2de4  fsqrts 1, 1
  03d2de8  addic 3, 3, 22784
  03d2dec  stfs 5, 528(1)
  03d2df0  fabs 9, 5
  03d2df4  fabs 8, 1
  03d2df8  stfs 1, 524(1)
  03d2dfc  lwz 5, 528(1)
  03d2e00  rlwinm 5, 5, 3, 29, 29
  03d2e04  fsubs 1, 8, 9
  03d2e08  stfs 1, 532(1)
  03d2e0c  lwz 6, 524(1)
  03d2e10  lfs 1, 524(1)
  03d2e14  fabs 5, 1
  03d2e18  lfs 1, 528(1)
  03d2e1c  fabs 10, 1
  03d2e20  lfs 1, 8(4)
  03d2e24  lwz 4, 532(1)
  03d2e28  lfs 11, 532(1)
  03d2e2c  rlwimi 5, 4, 2, 30, 30
  03d2e30  fsub 12, 11, 29
  03d2e34  ori 4, 3, 0
  03d2e38  fsub 11, 11, 29
  03d2e3c  rlwimi 5, 6, 4, 28, 28
  03d2e40  rlwimi 4, 5, 2, 26, 28
  03d2e44  slwi 5, 5, 2
  03d2e48  clrldi 4, 4, 32
  03d2e4c  lfsx 30, 3, 5
  03d2e50  fsel 9, 12, 5, 9
  03d2e54  fsel 8, 11, 10, 8
  03d2e58  lfs 5, 4(4)
  03d2e5c  fcmpu 0, 9, 29
  03d2e60  bt 1, 0x3d2e6c
  03d2e64  fmr 30, 29
  03d2e68  b 0x3d2f84
  03d2e6c  fsubs 10, 8, 9
  03d2e70  fadds 8, 8, 9
  03d2e74  addic 4, 1, 16
  03d2e78  li 7, 2
  03d2e7c  addic 6, 4, 568
  03d2e80  addic 5, 4, 552
  03d2e84  mtctr 7
  03d2e88  fdivs 8, 10, 8
  03d2e8c  fmuls 9, 8, 8
  03d2e90  stfs 8, 580(1)
  03d2e94  stfs 8, 572(1)
  03d2e98  stfs 8, 576(1)
  03d2e9c  stfs 8, 568(1)
  03d2ea0  lfs 11, 580(1)
  03d2ea4  lfs 12, 572(1)
  03d2ea8  lfs 13, 576(1)
  03d2eac  fmuls 10, 9, 9
  03d2eb0  fmuls 12, 12, 9
  03d2eb4  fmuls 11, 11, 10
  03d2eb8  fmuls 8, 10, 10
  03d2ebc  fmuls 10, 13, 10
  03d2ec0  stfs 12, 572(1)
  03d2ec4  fmuls 9, 11, 9
  03d2ec8  stfs 10, 576(1)
  03d2ecc  stfs 9, 580(1)
  03d2ed0  lfs 9, 552(4)
  03d2ed4  fmuls 9, 9, 8
  03d2ed8  stfs 9, 568(4)
  03d2edc  lfs 9, 4(5)
  03d2ee0  addic 5, 5, 8
  03d2ee4  fmuls 9, 9, 8
  03d2ee8  addic 4, 4, 8
  03d2eec  stfs 9, 4(6)
  03d2ef0  addic 6, 6, 8
  03d2ef4  bdnz 0x3d2ed0
  03d2ef8  li 6, 4
  03d2efc  ori 4, 1, 0
  03d2f00  mtctr 6
  03d2f04  lis 5, 115
  03d2f08  addic 6, 4, 568
  03d2f0c  addic 5, 5, 22752
  03d2f10  ori 8, 6, 0
  03d2f14  lfs 8, 568(4)
  03d2f18  lfs 9, 0(5)
  03d2f1c  fmuls 8, 8, 9
  03d2f20  lfs 9, 4(5)
  03d2f24  addic 5, 5, 8
  03d2f28  stfs 8, 568(4)
  03d2f2c  lfs 8, 4(6)
  03d2f30  addic 4, 4, 8
  03d2f34  fmuls 8, 8, 9
  03d2f38  stfs 8, 4(6)
  03d2f3c  addic 6, 6, 8
  03d2f40  bdnz 0x3d2f14
  03d2f44  ori 4, 1, 0
  03d2f48  fmr 8, 29
  03d2f4c  mtctr 7
  03d2f50  lfs 9, 568(4)
  03d2f54  fadds 8, 8, 9
  03d2f58  lfs 9, 4(8)
  03d2f5c  addic 4, 4, 16
  03d2f60  lfs 10, 8(8)
  03d2f64  lfs 11, 12(8)
  03d2f68  addic 8, 8, 16
  03d2f6c  fadds 8, 8, 9
  03d2f70  fadds 8, 8, 10
  03d2f74  fadds 8, 8, 11
  03d2f78  bdnz 0x3d2f50
  03d2f7c  fadds 8, 8, 1
  03d2f80  fmadds 30, 8, 30, 5
  03d2f84  fsubs 3, 3, 6
  03d2f88  fsubs 4, 4, 7
  03d2f8c  fabs 5, 3
  03d2f90  fabs 6, 4
  03d2f94  stfs 3, 512(1)
  03d2f98  stfs 4, 516(1)
  03d2f9c  fsubs 3, 5, 6
  03d2fa0  stfs 3, 520(1)
  03d2fa4  lwz 4, 512(1)
  03d2fa8  lfs 3, 512(1)
  03d2fac  lwz 5, 516(1)
  03d2fb0  lfs 4, 516(1)
  03d2fb4  fabs 3, 3
  03d2fb8  lwz 6, 520(1)
  03d2fbc  rlwinm 5, 5, 3, 29, 29
  03d2fc0  lfs 7, 520(1)
  03d2fc4  fabs 4, 4
  03d2fc8  rlwimi 5, 6, 2, 30, 30
  03d2fcc  fsub 8, 7, 29
  03d2fd0  fsub 7, 7, 29
  03d2fd4  rlwimi 5, 4, 4, 28, 28
  03d2fd8  ori 4, 3, 0
  03d2fdc  rlwimi 4, 5, 2, 26, 28
  03d2fe0  slwi 5, 5, 2
  03d2fe4  clrldi 4, 4, 32
  03d2fe8  fsel 6, 8, 3, 6
  03d2fec  lfsx 3, 3, 5
  03d2ff0  fsel 5, 7, 4, 5
  03d2ff4  lfs 4, 4(4)
  03d2ff8  fcmpu 0, 6, 29
  03d2ffc  bt 1, 0x3d3008
  03d3000  fmr 1, 29
  03d3004  b 0x3d3120
  03d3008  fsubs 7, 5, 6
  03d300c  fadds 5, 5, 6
  03d3010  addic 3, 1, 16
  03d3014  li 6, 2
  03d3018  addic 4, 3, 520
  03d301c  addic 5, 3, 536
  03d3020  mtctr 6
  03d3024  fdivs 5, 7, 5
  03d3028  fmuls 6, 5, 5
  03d302c  stfs 5, 548(1)
  03d3030  stfs 5, 540(1)
  03d3034  stfs 5, 544(1)
  03d3038  stfs 5, 536(1)
  03d303c  lfs 8, 548(1)
  03d3040  lfs 9, 540(1)
  03d3044  lfs 10, 544(1)
  03d3048  fmuls 7, 6, 6
  03d304c  fmuls 9, 9, 6
  03d3050  fmuls 8, 8, 7
  03d3054  fmuls 5, 7, 7
  03d3058  fmuls 7, 10, 7
  03d305c  stfs 9, 540(1)
  03d3060  fmuls 6, 8, 6
  03d3064  stfs 7, 544(1)
  03d3068  stfs 6, 548(1)
  03d306c  lfs 6, 520(3)
  03d3070  fmuls 6, 6, 5
  03d3074  stfs 6, 536(3)
  03d3078  lfs 6, 4(4)
  03d307c  addic 3, 3, 8
  03d3080  addic 4, 4, 8
  03d3084  fmuls 6, 6, 5
  03d3088  stfs 6, 4(5)
  03d308c  addic 5, 5, 8
  03d3090  bdnz 0x3d306c
  03d3094  li 5, 4
  03d3098  ori 3, 1, 0
  03d309c  mtctr 5
  03d30a0  lis 4, 115
  03d30a4  addic 5, 3, 536
  03d30a8  addic 4, 4, 22752
  03d30ac  ori 7, 5, 0
  03d30b0  lfs 5, 536(3)
  03d30b4  lfs 6, 0(4)
  03d30b8  fmuls 5, 5, 6
  03d30bc  lfs 6, 4(4)
  03d30c0  addic 4, 4, 8
  03d30c4  stfs 5, 536(3)
  03d30c8  lfs 5, 4(5)
  03d30cc  addic 3, 3, 8
  03d30d0  fmuls 5, 5, 6
  03d30d4  stfs 5, 4(5)
  03d30d8  addic 5, 5, 8
  03d30dc  bdnz 0x3d30b0
  03d30e0  fmr 5, 29
  03d30e4  ori 3, 1, 0
  03d30e8  mtctr 6
  03d30ec  lfs 6, 536(3)
  03d30f0  fadds 5, 5, 6
  03d30f4  addic 3, 3, 16
  03d30f8  lfs 6, 4(7)
  03d30fc  lfs 7, 8(7)
  03d3100  lfs 8, 12(7)
  03d3104  addic 7, 7, 16
  03d3108  fadds 5, 5, 6
  03d310c  fadds 5, 5, 7
  03d3110  fadds 5, 5, 8
  03d3114  bdnz 0x3d30ec
  03d3118  fadds 1, 5, 1
  03d311c  fmadds 1, 1, 3, 4
  03d3120  bl 0x5025e0
  03d3124  nop
  03d3128  fmr 28, 1
  03d312c  lis 3, 61
  03d3130  fmr 1, 30
  03d3134  addi 27, 3, 11264
  03d3138  lfs 30, 12(27)
  03d313c  fmr 2, 30
  03d3140  bl 0x5025e0
  03d3144  nop
  03d3148  fabs 3, 28
  03d314c  fabs 4, 1
  03d3150  lis 3, 132
  03d3154  lfs 10, 16(27)
  03d3158  lis 4, 132
  03d315c  lfs 6, 26096(3)
  03d3160  fdivs 5, 28, 3
  03d3164  lfs 7, 26100(4)
  03d3168  lfs 9, 152(28)
  03d316c  fdivs 8, 1, 4
  03d3170  fmuls 6, 6, 10
  03d3174  fmuls 7, 7, 10
  03d3178  fmr 2, 9
  03d317c  fsub 3, 6, 3
  03d3180  fsub 4, 7, 4
  03d3184  fmuls 5, 6, 5
  03d3188  fsel 3, 3, 28, 5
  03d318c  fmuls 5, 7, 8
  03d3190  fsel 28, 4, 1, 5
  03d3194  fmr 1, 3
  03d3198  bl 0x502578
  03d319c  nop
  03d31a0  fmr 27, 1
  03d31a4  fmr 1, 28
  03d31a8  fmr 2, 30
  03d31ac  bl 0x502578
  03d31b0  nop
  03d31b4  fmr 3, 1
  03d31b8  lfs 1, 20(27)
  03d31bc  addic 3, 1, 128
  03d31c0  fmr 2, 27
  03d31c4  bl 0xfe610
  03d31c8  nop
  03d31cc  lfs 1, 16(30)
  03d31d0  lfs 2, 128(1)
  03d31d4  addic 4, 1, 144
  03d31d8  fadds 1, 1, 2
  03d31dc  lfs 2, 132(1)
  03d31e0  lfs 3, 136(1)
  03d31e4  ori 3, 29, 0
  03d31e8  stfs 1, 144(1)
  03d31ec  lfs 1, 20(30)
  03d31f0  fadds 1, 1, 2
  03d31f4  stfs 1, 148(1)
  03d31f8  lfs 1, 24(30)
  03d31fc  fadds 1, 1, 3
  03d3200  stfs 1, 152(1)
  03d3204  lfs 1, 28(30)
  03d3208  stfs 1, 156(1)
  03d320c  bl 0x65468
  03d3210  nop
  03d3214  lfs 1, 132(1)
  03d3218  lfs 2, 128(1)
  03d321c  fmuls 3, 1, 1
  03d3220  lfs 4, 136(1)
  03d3224  lis 3, 132
  03d3228  lwz 3, 26064(3)
  03d322c  extsw 3, 3
  03d3230  fmadds 3, 2, 2, 3
  03d3234  std 3, 600(1)
  03d3238  lis 3, 269
  03d323c  fmadds 3, 4, 4, 3
  03d3240  lis 5, 132
  03d3244  fsqrts 3, 3
  03d3248  lfd 5, 600(1)
  03d324c  lis 7, 132
  03d3250  li 8, 0
  03d3254  lis 9, 132
  03d3258  lis 10, 16256
  03d325c  fcfid 5, 5
  03d3260  lwz 3, -24608(3)
  03d3264  lfs 6, 140(1)
  03d3268  slwi 3, 3, 4
  03d326c  addc 3, 1, 3
  03d3270  addic 3, 3, 192
  03d3274  frsp 5, 5
  03d3278  clrldi 6, 3, 32
  03d327c  lis 3, 132
  03d3280  addic 4, 3, 26080
  03d3284  stfs 6, 12(6)
  03d3288  fdivs 5, 5, 3
  03d328c  fsub 6, 29, 3
  03d3290  fsub 7, 29, 3
  03d3294  fsub 8, 29, 3
  03d3298  fsub 9, 3, 29
  03d329c  fsub 10, 3, 29
  03d32a0  fsub 3, 3, 29
  03d32a4  fmuls 2, 2, 5
  03d32a8  fmuls 1, 1, 5
  03d32ac  fmuls 4, 4, 5
  03d32b0  fsel 5, 6, 29, 2
  03d32b4  fsel 6, 7, 29, 1
  03d32b8  fsel 7, 8, 29, 4
  03d32bc  fsel 2, 9, 5, 2
  03d32c0  fsel 1, 10, 6, 1
  03d32c4  fsel 3, 3, 7, 4
  03d32c8  stfs 2, 0(6)
  03d32cc  stfs 1, 4(6)
  03d32d0  stfs 3, 8(6)
  03d32d4  lfs 4, 26080(3)
  03d32d8  lfs 5, 8(4)
  03d32dc  fmuls 6, 4, 3
  03d32e0  lfs 7, 4(4)
  03d32e4  fmuls 8, 5, 1
  03d32e8  fmuls 9, 7, 2
  03d32ec  lwz 3, 26068(5)
  03d32f0  extsw 3, 3
  03d32f4  fmsubs 2, 5, 2, 6
  03d32f8  fmsubs 3, 7, 3, 8
  03d32fc  fmsubs 1, 4, 1, 9
  03d3300  std 3, 600(1)
  03d3304  fmuls 4, 2, 2
  03d3308  addic 5, 1, 256
  03d330c  li 4, 2
  03d3310  fmadds 4, 3, 3, 4
  03d3314  lfd 5, 600(1)
  03d3318  fcfid 5, 5
  03d331c  fmadds 4, 1, 1, 4
  03d3320  lwz 3, 26056(7)
  03d3324  slwi 3, 3, 4
  03d3328  frsp 5, 5
  03d332c  fsqrts 4, 4
  03d3330  addc 3, 1, 3
  03d3334  addic 3, 3, 192
  03d3338  clrldi 7, 3, 32
  03d333c  ori 3, 31, 0
  03d3340  stw 8, 12(7)
  03d3344  fdivs 5, 5, 4
  03d3348  fsub 6, 29, 4
  03d334c  fsub 7, 29, 4
  03d3350  fsub 8, 29, 4
  03d3354  fsub 9, 4, 29
  03d3358  fsub 10, 4, 29
  03d335c  fsub 4, 4, 29
  03d3360  fmuls 3, 3, 5
  03d3364  fmuls 2, 2, 5
  03d3368  fmuls 1, 1, 5
  03d336c  fsel 5, 6, 29, 3
  03d3370  fsel 6, 7, 29, 2
  03d3374  fsel 7, 8, 29, 1
  03d3378  fsel 3, 9, 5, 3
  03d337c  fsel 2, 10, 6, 2
  03d3380  fsel 1, 4, 7, 1
  03d3384  stfs 3, 0(7)
  03d3388  stfs 2, 4(7)
  03d338c  stfs 1, 8(7)
  03d3390  lfs 4, 4(6)
  03d3394  lfs 5, 8(6)
  03d3398  lfs 6, 0(6)
  03d339c  fmuls 9, 4, 3
  03d33a0  fmuls 7, 5, 2
  03d33a4  fmuls 8, 6, 1
  03d33a8  lwz 6, 26052(9)
  03d33ac  slwi 6, 6, 4
  03d33b0  addc 6, 1, 6
  03d33b4  addic 6, 6, 192
  03d33b8  fmsubs 2, 6, 2, 9
  03d33bc  fmsubs 1, 4, 1, 7
  03d33c0  fmsubs 3, 5, 3, 8
  03d33c4  clrldi 6, 6, 32
  03d33c8  stw 8, 12(6)
  03d33cc  stfs 1, 0(6)
  03d33d0  stfs 3, 4(6)
  03d33d4  stfs 2, 8(6)
  03d33d8  stw 8, 248(1)
  03d33dc  stw 8, 244(1)
  03d33e0  stw 8, 240(1)
  03d33e4  stw 10, 252(1)
  03d33e8  bl 0xf1038
  03d33ec  nop
  03d33f0  lfs 2, 260(1)
  03d33f4  lfs 1, 256(1)
  03d33f8  fmuls 4, 2, 2
  03d33fc  lfs 3, 264(1)
  03d3400  lfs 7, 272(1)
  03d3404  lfs 8, 276(1)
  03d3408  lfs 9, 280(1)
  03d340c  lfs 10, 288(1)
  03d3410  lfs 11, 292(1)
  03d3414  lfs 12, 296(1)
  03d3418  fmadds 30, 1, 1, 4
  03d341c  fmr 4, 29
  03d3420  fmadds 30, 3, 3, 30
  03d3424  fmr 5, 4
  03d3428  fsqrts 13, 30
  03d342c  fmr 6, 5
  03d3430  fcmpu 0, 13, 6
  03d3434  bt 2, 0x3d3484
  03d3438  frsqrte 4, 30
  03d343c  lis 3, 61
  03d3440  addi 3, 3, 11264
  03d3444  lfs 5, 24(3)
  03d3448  fmuls 6, 30, 4
  03d344c  fmuls 13, 5, 4
  03d3450  fnmsubs 6, 6, 4, 31
  03d3454  fmadds 4, 6, 13, 4
  03d3458  fmuls 6, 30, 4
  03d345c  fmuls 13, 5, 4
  03d3460  fnmsubs 6, 6, 4, 31
  03d3464  fmadds 4, 6, 13, 4
  03d3468  fmuls 6, 30, 4
  03d346c  fmuls 5, 5, 4
  03d3470  fnmsubs 6, 6, 4, 31
  03d3474  fmadds 4, 6, 5, 4
  03d3478  fmuls 6, 1, 4
  03d347c  fmuls 5, 2, 4
  03d3480  fmuls 4, 3, 4
  03d3484  fmuls 1, 8, 8
  03d3488  stfs 4, 264(1)
  03d348c  stfs 6, 256(1)
  03d3490  stfs 5, 260(1)
  03d3494  fmadds 4, 7, 7, 1
  03d3498  fmr 1, 29
  03d349c  fmadds 4, 9, 9, 4
  03d34a0  fmr 2, 1
  03d34a4  fsqrts 13, 4
  03d34a8  fmr 3, 2
  03d34ac  fcmpu 0, 13, 3
  03d34b0  bt 2, 0x3d3500
  03d34b4  frsqrte 1, 4
  03d34b8  lis 3, 61
  03d34bc  addi 3, 3, 11264
  03d34c0  lfs 2, 24(3)
  03d34c4  fmuls 3, 4, 1
  03d34c8  fmuls 5, 2, 1
  03d34cc  fnmsubs 3, 3, 1, 31
  03d34d0  fmadds 1, 3, 5, 1
  03d34d4  fmuls 3, 4, 1
  03d34d8  fmuls 5, 2, 1
  03d34dc  fnmsubs 3, 3, 1, 31
  03d34e0  fmadds 1, 3, 5, 1
  03d34e4  fmuls 3, 4, 1
  03d34e8  fmuls 2, 2, 1
  03d34ec  fnmsubs 3, 3, 1, 31
  03d34f0  fmadds 1, 3, 2, 1
  03d34f4  fmuls 3, 7, 1
  03d34f8  fmuls 2, 8, 1
  03d34fc  fmuls 1, 9, 1
  03d3500  fmuls 4, 11, 11
  03d3504  stfs 1, 280(1)
  03d3508  stfs 2, 276(1)
  03d350c  fmr 2, 29
  03d3510  stfs 3, 272(1)
  03d3514  fmadds 1, 10, 10, 4
  03d3518  fmr 3, 2
  03d351c  fmadds 1, 12, 12, 1
  03d3520  fsqrts 4, 1
  03d3524  fcmpu 0, 4, 3
  03d3528  bt 2, 0x3d3578
  03d352c  frsqrte 2, 1
  03d3530  lis 3, 61
  03d3534  addi 3, 3, 11264
  03d3538  lfs 3, 24(3)
  03d353c  fmuls 4, 1, 2
  03d3540  fmuls 5, 3, 2
  03d3544  fnmsubs 4, 4, 2, 31
  03d3548  fmadds 2, 4, 5, 2
  03d354c  fmuls 4, 1, 2
  03d3550  fmuls 5, 3, 2
  03d3554  fnmsubs 4, 4, 2, 31
  03d3558  fmadds 2, 4, 5, 2
  03d355c  fmuls 1, 1, 2
  03d3560  fmuls 3, 3, 2
  03d3564  fnmsubs 1, 1, 2, 31
  03d3568  fmadds 29, 1, 3, 2
  03d356c  fmuls 3, 10, 29
  03d3570  fmuls 2, 11, 29
  03d3574  fmuls 29, 12, 29
  03d3578  addic 29, 1, 320
  03d357c  stfs 3, 288(1)
  03d3580  stfs 2, 292(1)
  03d3584  addic 4, 1, 256
  03d3588  ori 3, 29, 0
  03d358c  stfs 29, 296(1)
  03d3590  bl 0x5010c0
  03d3594  nop
  03d3598  li 6, 0
  03d359c  lis 7, 16256
  03d35a0  addic 27, 1, 384
  03d35a4  ori 4, 29, 0
  03d35a8  stw 6, 376(1)
  03d35ac  ori 3, 27, 0
  03d35b0  stw 6, 372(1)
  03d35b4  addic 5, 1, 192
  03d35b8  stw 6, 368(1)
  03d35bc  stw 7, 380(1)
  03d35c0  bl 0x50162c
  03d35c4  nop
  03d35c8  addic 3, 1, 112
  03d35cc  ori 4, 27, 0
  03d35d0  bl 0x10bcf0
  03d35d4  nop
  03d35d8  b 0x3d3600
  03d35dc  li 5, 0
  03d35e0  addic 3, 1, 112
  03d35e4  addic 4, 1, 160
  03d35e8  stw 5, 160(1)
  03d35ec  stw 5, 164(1)
  03d35f0  stw 5, 168(1)
  03d35f4  stw 5, 172(1)
  03d35f8  bl 0x106078
  03d35fc  nop
  03d3600  lfs 1, 128(1)
  03d3604  lis 3, 61
  03d3608  lis 4, 269
  03d360c  stfs 1, 48(30)
  03d3610  lfs 1, 132(1)
  03d3614  addi 3, 3, 11264
  03d3618  addic 4, 4, -24672
  03d361c  stfs 1, 52(30)
  03d3620  lfs 1, 136(1)
  03d3624  addic 5, 1, 112
  03d3628  stfs 1, 56(30)
  03d362c  lfs 1, 140(1)
  03d3630  stfs 1, 60(30)
  03d3634  lfs 29, 28(3)
  03d3638  addic 3, 4, 16
  03d363c  fmr 1, 29
  03d3640  ori 4, 3, 0
  03d3644  bl 0x501848
  03d3648  nop
  03d364c  addic 5, 1, 448
  03d3650  ori 3, 31, 0
  03d3654  li 4, 3
  03d3658  bl 0xf1038
  03d365c  nop
  03d3660  lfs 1, 448(1)
  03d3664  lis 3, 150
  03d3668  stfs 1, 48(30)
  03d366c  addic 3, 3, 19008
  03d3670  lfs 1, 452(1)
  03d3674  stfs 1, 52(30)
  03d3678  lfs 1, 456(1)
  03d367c  stfs 1, 56(30)
  03d3680  lfs 1, 460(1)
  03d3684  stfs 1, 60(30)
  03d3688  lwz 4, 164(3)
  03d368c  rlwinm 4, 4, 0, 26, 26
  03d3690  cmpwi 4, 0
  03d3694  bt 2, 0x3d36a4
  03d3698  li 4, 0
  03d369c  stw 4, 36(30)
  03d36a0  stw 4, 40(30)
  03d36a4  lwz 3, 160(3)
  03d36a8  rlwinm 3, 3, 0, 26, 26
  03d36ac  cmpwi 3, 0
  03d36b0  bt 2, 0x3d3bac
  03d36b4  lis 3, 61
  03d36b8  lis 4, 114
  03d36bc  addi 3, 3, 11264
  03d36c0  lfs 1, 32(3)
  03d36c4  lfs 2, -3056(4)
  03d36c8  lwz 3, 4272(28)
  03d36cc  fmuls 1, 2, 1
  03d36d0  fctiwz 1, 1
  03d36d4  stfd 1, 600(1)
  03d36d8  lwz 4, 604(1)
  03d36dc  cmpw 3, 4
  03d36e0  bf 1, 0x3d3bac
  03d36e4  lis 3, 61
  03d36e8  lwz 5, 8260(28)
  03d36ec  lis 4, 16672
  03d36f0  addi 3, 3, 11264
  03d36f4  srawi 6, 5, 31
  03d36f8  lfs 30, 36(3)
  03d36fc  srwi 3, 6, 1
  03d3700  xor 3, 3, 5
  03d3704  subc 3, 3, 6
  03d3708  cmpw 3, 4
  03d370c  bf 0, 0x3d3a8c
  03d3710  ori 3, 31, 0
  03d3714  lwz 4, 12(30)
  03d3718  extsw 4, 4
  03d371c  bl 0x15cc7c
  03d3720  nop
  03d3724  cmpwi 3, 0
  03d3728  lwz 3, 12(30)
  03d372c  bf 2, 0x3d3750
  03d3730  cmpwi 3, -1
  03d3734  bf 2, 0x3d3750
  03d3738  li 3, 1
  03d373c  li 4, 4
  03d3740  ori 5, 31, 0
  03d3744  bl 0x15d12c
  03d3748  nop
  03d374c  stw 3, 12(30)
  03d3750  cmpwi 3, -1
  03d3754  bt 2, 0x3d37b8
  03d3758  lis 4, 61
  03d375c  lfs 1, 8260(28)
  03d3760  extsw 27, 3
  03d3764  addi 29, 4, 11264
  03d3768  lfs 2, 40(29)
  03d376c  lfs 3, 44(29)
  03d3770  fnmsubs 1, 1, 2, 30
  03d3774  fmuls 1, 1, 3
  03d3778  bl 0x502758
  03d377c  nop
  03d3780  extsw 3, 3
  03d3784  std 3, 600(1)
  03d3788  lfs 1, 48(29)
  03d378c  lfd 2, 600(1)
  03d3790  fcfid 2, 2
  03d3794  ori 3, 27, 0
  03d3798  frsp 2, 2
  03d379c  fsubs 1, 2, 1
  03d37a0  fctiwz 1, 1
  03d37a4  stfd 1, 600(1)
  03d37a8  lwz 4, 604(1)
  03d37ac  extsw 4, 4
  03d37b0  bl 0x15d734
  03d37b4  nop
  03d37b8  lis 3, 61
  03d37bc  lfs 1, 8260(28)
  03d37c0  addi 3, 3, 11264
  03d37c4  lfs 2, 52(3)
  03d37c8  fmuls 1, 1, 2
  03d37cc  fmuls 1, 1, 29
  03d37d0  bl 0x502758
  03d37d4  nop
  03d37d8  slwi 4, 3, 16
  03d37dc  lwz 29, 8256(28)
  03d37e0  lis 5, -256
  03d37e4  slwi 3, 3, 8
  03d37e8  or 4, 4, 5
  03d37ec  cmpwi 29, 0
  03d37f0  or 3, 4, 3
  03d37f4  ori 3, 3, 255
  03d37f8  stw 3, 144(31)
  03d37fc  bt 2, 0x3d3b94
  03d3800  lhz 3, 166(29)
  03d3804  cmpwi 3, 605
  03d3808  bf 2, 0x3d3b94
  03d380c  lbz 3, 32(29)
  03d3810  cmpwi 1, 3, 253
  03d3814  cmpwi 3, 254
  03d3818  cror 2, 2, 6
  03d381c  bt 2, 0x3d3b94
  03d3820  lwz 4, 8260(28)
  03d3824  lis 3, 16256
  03d3828  srawi 5, 4, 31
  03d382c  srwi 6, 5, 1
  03d3830  xor 4, 6, 4
  03d3834  subc 4, 4, 5
  03d3838  cmpw 4, 3
  03d383c  bf 0, 0x3d3b94
  03d3840  lwz 29, 120(29)
  03d3844  lwz 3, 24(29)
  03d3848  cmpwi 3, 0
  03d384c  bf 1, 0x3d39f8
  03d3850  lis 3, 61
  03d3854  addi 3, 3, 11264
  03d3858  lfs 29, 56(3)
  03d385c  lfs 28, 60(3)
  03d3860  lfs 27, 64(3)
  03d3864  fmr 1, 31
  03d3868  fmr 2, 30
  03d386c  bl 0xfcbe8
  03d3870  nop
  03d3874  lis 27, 114
  03d3878  fmr 2, 30
  03d387c  lfs 3, -3052(27)
  03d3880  fmuls 3, 1, 3
  03d3884  fmr 1, 29
  03d3888  stfs 3, 176(1)
  03d388c  bl 0xfcbe8
  03d3890  nop
  03d3894  lfs 2, -3052(27)
  03d3898  fmuls 3, 1, 2
  03d389c  fmr 1, 31
  03d38a0  fmr 2, 28
  03d38a4  stfs 3, 180(1)
  03d38a8  bl 0xfcbe8
  03d38ac  nop
  03d38b0  lfs 2, -3052(27)
  03d38b4  lis 3, 151
  03d38b8  fmuls 1, 1, 2
  03d38bc  lfs 2, 180(1)
  03d38c0  lfs 3, 176(1)
  03d38c4  lfs 4, 188(1)
  03d38c8  stfs 1, 184(1)
  03d38cc  lfs 5, 16(28)
  03d38d0  lfs 6, 28(28)
  03d38d4  lfs 7, 20(28)
  03d38d8  fmuls 6, 6, 2
  03d38dc  lfs 8, -25376(3)
  03d38e0  fmuls 5, 5, 2
  03d38e4  lfs 9, 24(28)
  03d38e8  fmuls 7, 7, 2
  03d38ec  lfs 10, 12(28)
  03d38f0  fmuls 2, 9, 2
  03d38f4  lfs 9, 4(28)
  03d38f8  lfs 11, 8(28)
  03d38fc  lfs 12, 32(28)
  03d3900  fmadds 6, 10, 3, 6
  03d3904  fmadds 5, 8, 3, 5
  03d3908  fmadds 7, 9, 3, 7
  03d390c  lfs 8, 44(28)
  03d3910  fmadds 2, 11, 3, 2
  03d3914  lfs 9, 36(28)
  03d3918  lfs 3, 40(28)
  03d391c  lwz 4, 8256(28)
  03d3920  addic 3, 4, 16
  03d3924  fmadds 6, 8, 1, 6
  03d3928  fmadds 5, 12, 1, 5
  03d392c  fmadds 7, 9, 1, 7
  03d3930  fmadds 1, 3, 1, 2
  03d3934  fadds 2, 6, 4
  03d3938  stfs 5, 176(1)
  03d393c  stfs 7, 180(1)
  03d3940  stfs 1, 184(1)
  03d3944  fmr 1, 27
  03d3948  stfs 2, 188(1)
  03d394c  lfs 2, 16(30)
  03d3950  stfs 2, 16(4)
  03d3954  lfs 2, 20(30)
  03d3958  stfs 2, 20(4)
  03d395c  lfs 2, 24(30)
  03d3960  stfs 2, 24(4)
  03d3964  lfs 2, 28(30)
  03d3968  stfs 2, 28(4)
  03d396c  bl 0x110950
  03d3970  nop
  03d3974  lwz 3, 8256(28)
  03d3978  addic 5, 1, 176
  03d397c  addic 4, 3, 16
  03d3980  li 7, 5
  03d3984  li 6, 19
  03d3988  li 8, 0
  03d398c  bl 0x242738
  03d3990  nop
  03d3994  lwz 3, 8256(28)
  03d3998  lfs 1, 16(30)
  03d399c  cmpwi 29, 0
  03d39a0  stfs 1, 16(3)
  03d39a4  lfs 1, 20(30)
  03d39a8  stfs 1, 20(3)
  03d39ac  lfs 1, 24(30)
  03d39b0  stfs 1, 24(3)
  03d39b4  lfs 1, 28(30)
  03d39b8  stfs 1, 28(3)
  03d39bc  bt 2, 0x3d39e8
  03d39c0  lwz 4, 24(29)
  03d39c4  cmpwi 4, 0
  03d39c8  bf 1, 0x3d39e0
  03d39cc  addic 3, 4, -5
  03d39d0  stw 3, 24(29)
  03d39d4  lwz 3, 8256(28)
  03d39d8  bl 0x3d2b38
  03d39dc  b 0x3d39ec
  03d39e0  bl 0x3d2b38
  03d39e4  b 0x3d39ec
  03d39e8  bl 0x3d2b38
  03d39ec  lwz 3, 24(29)
  03d39f0  cmpwi 3, 0
  03d39f4  bt 1, 0x3d3864
  03d39f8  lwz 3, 8256(28)
  03d39fc  bl 0xefb38
  03d3a00  nop
  03d3a04  lis 3, 18371
  03d3a08  li 4, 0
  03d3a0c  ori 5, 3, 20480
  03d3a10  li 6, 32767
  03d3a14  li 3, 3
  03d3a18  stw 4, 8256(28)
  03d3a1c  stw 5, 8260(28)
  03d3a20  li 4, 0
  03d3a24  stw 6, 8(30)
  03d3a28  ori 5, 31, 0
  03d3a2c  bl 0x15d12c
  03d3a30  nop
  03d3a34  lwz 28, 12(30)
  03d3a38  cmpwi 28, -1
  03d3a3c  bt 2, 0x3d3a80
  03d3a40  sldi 3, 28, 7
  03d3a44  sldi 5, 28, 4
  03d3a48  lis 4, 150
  03d3a4c  subc 3, 3, 5
  03d3a50  addic 4, 4, 14176
  03d3a54  extsw 3, 3
  03d3a58  addc 3, 4, 3
  03d3a5c  lwz 4, 136(3)
  03d3a60  cmpw 4, 31
  03d3a64  bf 2, 0x3d3a80
  03d3a68  lbz 3, 116(3)
  03d3a6c  cmpwi 3, 0
  03d3a70  bt 2, 0x3d3a80
  03d3a74  extsw 3, 28
  03d3a78  bl 0x15cdb0
  03d3a7c  nop
  03d3a80  li 3, -1
  03d3a84  stw 3, 12(30)
  03d3a88  b 0x3d3b94
  03d3a8c  lis 3, -32640
  03d3a90  ori 3, 3, 32896
  03d3a94  stw 3, 144(31)
  03d3a98  lwz 3, 0(30)
  03d3a9c  cmpwi 3, -1
  03d3aa0  bt 2, 0x3d3ae4
  03d3aa4  sldi 4, 3, 7
  03d3aa8  sldi 6, 3, 4
  03d3aac  lis 5, 150
  03d3ab0  subc 4, 4, 6
  03d3ab4  addic 5, 5, 14176
  03d3ab8  extsw 4, 4
  03d3abc  addc 4, 5, 4
  03d3ac0  lwz 5, 136(4)
  03d3ac4  cmpw 5, 31
  03d3ac8  bf 2, 0x3d3ae4
  03d3acc  lbz 4, 116(4)
  03d3ad0  cmpwi 4, 0
  03d3ad4  bt 2, 0x3d3ae4
  03d3ad8  extsw 3, 3
  03d3adc  bl 0x15cdb0
  03d3ae0  nop
  03d3ae4  li 4, -1
  03d3ae8  lwz 3, 4(30)
  03d3aec  cmpwi 3, -1
  03d3af0  stw 4, 0(30)
  03d3af4  bt 2, 0x3d3b38
  03d3af8  sldi 4, 3, 7
  03d3afc  sldi 6, 3, 4
  03d3b00  lis 5, 150
  03d3b04  subc 4, 4, 6
  03d3b08  addic 5, 5, 14176
  03d3b0c  extsw 4, 4
  03d3b10  addc 4, 5, 4
  03d3b14  lwz 5, 136(4)
  03d3b18  cmpw 5, 31
  03d3b1c  bf 2, 0x3d3b38
  03d3b20  lbz 4, 116(4)
  03d3b24  cmpwi 4, 0
  03d3b28  bt 2, 0x3d3b38
  03d3b2c  extsw 3, 3
  03d3b30  bl 0x15cdb0
  03d3b34  nop
  03d3b38  li 4, -1
  03d3b3c  lwz 3, 12(30)
  03d3b40  cmpwi 3, -1
  03d3b44  stw 4, 4(30)
  03d3b48  bt 2, 0x3d3b8c
  03d3b4c  sldi 4, 3, 7
  03d3b50  sldi 6, 3, 4
  03d3b54  lis 5, 150
  03d3b58  subc 4, 4, 6
  03d3b5c  addic 5, 5, 14176
  03d3b60  extsw 4, 4
  03d3b64  addc 4, 5, 4
  03d3b68  lwz 5, 136(4)
  03d3b6c  cmpw 5, 31
  03d3b70  bf 2, 0x3d3b8c
  03d3b74  lbz 4, 116(4)
  03d3b78  cmpwi 4, 0
  03d3b7c  bt 2, 0x3d3b8c
  03d3b80  extsw 3, 3
  03d3b84  bl 0x15cdb0
  03d3b88  nop
  03d3b8c  li 3, -1
  03d3b90  stw 3, 12(30)
  03d3b94  lis 3, 113
  03d3b98  ori 4, 31, 0
  03d3b9c  addic 3, 3, -10408
  03d3ba0  bl 0x6d720
  03d3ba4  nop
  03d3ba8  b 0x3d3cb4
  03d3bac  lis 3, -32640
  03d3bb0  ori 3, 3, 32896
  03d3bb4  stw 3, 144(31)
  03d3bb8  lwz 3, 0(30)
  03d3bbc  cmpwi 3, -1
  03d3bc0  bt 2, 0x3d3c04
  03d3bc4  sldi 4, 3, 7
  03d3bc8  sldi 6, 3, 4
  03d3bcc  lis 5, 150
  03d3bd0  subc 4, 4, 6
  03d3bd4  addic 5, 5, 14176
  03d3bd8  extsw 4, 4
  03d3bdc  addc 4, 5, 4
  03d3be0  lwz 5, 136(4)
  03d3be4  cmpw 5, 31
  03d3be8  bf 2, 0x3d3c04
  03d3bec  lbz 4, 116(4)
  03d3bf0  cmpwi 4, 0
  03d3bf4  bt 2, 0x3d3c04
  03d3bf8  extsw 3, 3
  03d3bfc  bl 0x15cdb0
  03d3c00  nop
  03d3c04  li 4, -1
  03d3c08  lwz 3, 4(30)
  03d3c0c  cmpwi 3, -1
  03d3c10  stw 4, 0(30)
  03d3c14  bt 2, 0x3d3c58
  03d3c18  sldi 4, 3, 7
  03d3c1c  sldi 6, 3, 4
  03d3c20  lis 5, 150
  03d3c24  subc 4, 4, 6
  03d3c28  addic 5, 5, 14176
  03d3c2c  extsw 4, 4
  03d3c30  addc 4, 5, 4
  03d3c34  lwz 5, 136(4)
  03d3c38  cmpw 5, 31
  03d3c3c  bf 2, 0x3d3c58
  03d3c40  lbz 4, 116(4)
  03d3c44  cmpwi 4, 0
  03d3c48  bt 2, 0x3d3c58
  03d3c4c  extsw 3, 3
  03d3c50  bl 0x15cdb0
  03d3c54  nop
  03d3c58  li 4, -1
  03d3c5c  lwz 3, 12(30)
  03d3c60  cmpwi 3, -1
  03d3c64  stw 4, 4(30)
  03d3c68  bt 2, 0x3d3cac
  03d3c6c  sldi 4, 3, 7
  03d3c70  sldi 6, 3, 4
  03d3c74  lis 5, 150
  03d3c78  subc 4, 4, 6
  03d3c7c  addic 5, 5, 14176
  03d3c80  extsw 4, 4
  03d3c84  addc 4, 5, 4
  03d3c88  lwz 5, 136(4)
  03d3c8c  cmpw 5, 31
  03d3c90  bf 2, 0x3d3cac
  03d3c94  lbz 4, 116(4)
  03d3c98  cmpwi 4, 0
  03d3c9c  bt 2, 0x3d3cac
  03d3ca0  extsw 3, 3
  03d3ca4  bl 0x15cdb0
  03d3ca8  nop
  03d3cac  li 3, -1
  03d3cb0  stw 3, 12(30)
  03d3cb4  ld 0, 720(1)
  03d3cb8  mtlr 0
  03d3cbc  lfd 27, 664(1)
  03d3cc0  lfd 28, 672(1)
  03d3cc4  lfd 29, 680(1)
  03d3cc8  lfd 30, 688(1)
  03d3ccc  lfd 31, 696(1)
  03d3cd0  ld 27, 624(1)
  03d3cd4  ld 28, 632(1)
  03d3cd8  ld 29, 640(1)
  03d3cdc  ld 30, 648(1)
  03d3ce0  ld 31, 656(1)
  03d3ce4  addi 1, 1, 704
  03d3ce8  blr
