# game/update/moby632.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M632_003f24f0:   # 0x3f24f0, 0x14 bytes
  03f24f0  lis 3, 133
  03f24f4  lis 4, 1
  03f24f8  addic 3, 3, 17220
  03f24fc  stw 4, 72(3)
  03f2500  blr

UpdateMoby_632:   # 0x3f25b8, 0xca8 bytes
  03f25b8  stdu 1, -448(1)
  03f25bc  mflr 0
  03f25c0  std 0, 464(1)
  03f25c4  stfd 30, 432(1)
  03f25c8  stfd 31, 440(1)
  03f25cc  std 31, 424(1)
  03f25d0  lbz 4, 32(3)
  03f25d4  std 30, 416(1)
  03f25d8  ori 31, 3, 0
  03f25dc  lwz 30, 120(3)
  03f25e0  cmpwi 4, 1
  03f25e4  cmpwi 1, 4, 2
  03f25e8  std 29, 408(1)
  03f25ec  std 28, 400(1)
  03f25f0  std 27, 392(1)
  03f25f4  std 26, 384(1)
  03f25f8  cmpwi 6, 4, 0
  03f25fc  bt 1, 0x3f2608
  03f2600  bf 25, 0x3f3230
  03f2604  b 0x3f2610
  03f2608  bf 5, 0x3f3200
  03f260c  b 0x3f3230
  03f2610  lfs 1, 16(31)
  03f2614  lis 3, 63
  03f2618  lfs 2, 20(31)
  03f261c  lis 5, 114
  03f2620  stfs 1, 112(1)
  03f2624  addi 4, 3, 9488
  03f2628  lfs 1, 24(31)
  03f262c  stfs 2, 116(1)
  03f2630  lfs 2, 28(31)
  03f2634  stfs 1, 120(1)
  03f2638  stfs 2, 124(1)
  03f263c  lfs 2, 12(30)
  03f2640  lfs 3, 0(4)
  03f2644  fsubs 1, 2, 1
  03f2648  lwz 29, 0(30)
  03f264c  lwz 3, 4(30)
  03f2650  fmuls 3, 1, 3
  03f2654  lfs 1, 0(30)
  03f2658  lfs 2, 4(30)
  03f265c  stfs 3, 8(30)
  03f2660  lfs 5, 4(4)
  03f2664  lfs 4, -3052(5)
  03f2668  fmuls 5, 4, 5
  03f266c  fcmpu 0, 3, 5
  03f2670  cror 6, 0, 2
  03f2674  bt 6, 0x3f2680
  03f2678  stfs 5, 8(30)
  03f267c  b 0x3f26a0
  03f2680  lis 4, 63
  03f2684  addi 4, 4, 9488
  03f2688  lfs 5, 8(4)
  03f268c  fmuls 4, 4, 5
  03f2690  fcmpu 0, 3, 4
  03f2694  cror 6, 1, 2
  03f2698  bt 6, 0x3f26a0
  03f269c  stfs 4, 8(30)
  03f26a0  fabs 3, 1
  03f26a4  lis 4, 63
  03f26a8  fabs 2, 2
  03f26ac  addi 4, 4, 9488
  03f26b0  rlwinm 3, 3, 3, 29, 29
  03f26b4  lis 5, 115
  03f26b8  fsubs 1, 3, 2
  03f26bc  stfs 1, 224(1)
  03f26c0  lfs 30, 12(4)
  03f26c4  lfs 31, 16(4)
  03f26c8  lwz 4, 224(1)
  03f26cc  lfs 1, 224(1)
  03f26d0  rlwimi 3, 4, 2, 30, 30
  03f26d4  fsub 4, 1, 30
  03f26d8  rlwimi 3, 29, 4, 28, 28
  03f26dc  fsub 5, 1, 30
  03f26e0  addic 29, 5, 22784
  03f26e4  slwi 4, 3, 2
  03f26e8  ori 5, 29, 0
  03f26ec  rlwimi 5, 3, 2, 26, 28
  03f26f0  clrldi 3, 5, 32
  03f26f4  lfsx 1, 29, 4
  03f26f8  fsel 4, 4, 3, 2
  03f26fc  fsel 3, 5, 2, 3
  03f2700  lfs 2, 4(3)
  03f2704  fcmpu 0, 4, 30
  03f2708  bt 1, 0x3f2714
  03f270c  fmr 1, 30
  03f2710  b 0x3f282c
  03f2714  fsubs 5, 3, 4
  03f2718  fadds 3, 3, 4
  03f271c  addic 3, 1, 16
  03f2720  li 6, 2
  03f2724  addic 5, 3, 324
  03f2728  addic 4, 3, 308
  03f272c  mtctr 6
  03f2730  fdivs 3, 5, 3
  03f2734  fmuls 4, 3, 3
  03f2738  stfs 3, 336(1)
  03f273c  stfs 3, 328(1)
  03f2740  stfs 3, 332(1)
  03f2744  stfs 3, 324(1)
  03f2748  lfs 6, 336(1)
  03f274c  lfs 7, 328(1)
  03f2750  lfs 8, 332(1)
  03f2754  fmuls 5, 4, 4
  03f2758  fmuls 7, 7, 4
  03f275c  fmuls 6, 6, 5
  03f2760  fmuls 3, 5, 5
  03f2764  fmuls 5, 8, 5
  03f2768  stfs 7, 328(1)
  03f276c  fmuls 4, 6, 4
  03f2770  stfs 5, 332(1)
  03f2774  stfs 4, 336(1)
  03f2778  lfs 4, 308(3)
  03f277c  fmuls 4, 4, 3
  03f2780  stfs 4, 324(3)
  03f2784  lfs 4, 4(4)
  03f2788  addic 4, 4, 8
  03f278c  fmuls 4, 4, 3
  03f2790  addic 3, 3, 8
  03f2794  stfs 4, 4(5)
  03f2798  addic 5, 5, 8
  03f279c  bdnz 0x3f2778
  03f27a0  li 5, 4
  03f27a4  ori 3, 1, 0
  03f27a8  mtctr 5
  03f27ac  lis 4, 115
  03f27b0  addic 5, 3, 324
  03f27b4  addic 4, 4, 22752
  03f27b8  ori 7, 5, 0
  03f27bc  lfs 3, 324(3)
  03f27c0  lfs 4, 0(4)
  03f27c4  fmuls 3, 3, 4
  03f27c8  lfs 4, 4(4)
  03f27cc  addic 4, 4, 8
  03f27d0  stfs 3, 324(3)
  03f27d4  lfs 3, 4(5)
  03f27d8  addic 3, 3, 8
  03f27dc  fmuls 3, 3, 4
  03f27e0  stfs 3, 4(5)
  03f27e4  addic 5, 5, 8
  03f27e8  bdnz 0x3f27bc
  03f27ec  ori 3, 1, 0
  03f27f0  fmr 3, 30
  03f27f4  mtctr 6
  03f27f8  lfs 4, 324(3)
  03f27fc  fadds 3, 3, 4
  03f2800  lfs 4, 4(7)
  03f2804  addic 3, 3, 16
  03f2808  lfs 5, 8(7)
  03f280c  lfs 6, 12(7)
  03f2810  addic 7, 7, 16
  03f2814  fadds 3, 3, 4
  03f2818  fadds 3, 3, 5
  03f281c  fadds 3, 3, 6
  03f2820  bdnz 0x3f27f8
  03f2824  fadds 3, 3, 31
  03f2828  fmadds 1, 3, 1, 2
  03f282c  lis 28, 151
  03f2830  lfs 2, 16(31)
  03f2834  addic 28, 28, -25376
  03f2838  lfs 3, 20(31)
  03f283c  lfs 4, 128(28)
  03f2840  lfs 5, 132(28)
  03f2844  fsubs 2, 4, 2
  03f2848  fsubs 3, 5, 3
  03f284c  fabs 4, 2
  03f2850  fabs 5, 3
  03f2854  stfs 2, 212(1)
  03f2858  stfs 3, 216(1)
  03f285c  stfs 1, 192(1)
  03f2860  fsubs 2, 4, 5
  03f2864  stfs 2, 220(1)
  03f2868  lwz 3, 212(1)
  03f286c  lfs 2, 212(1)
  03f2870  lwz 4, 216(1)
  03f2874  lfs 3, 216(1)
  03f2878  lwz 5, 220(1)
  03f287c  rlwinm 4, 4, 3, 29, 29
  03f2880  fabs 6, 3
  03f2884  lfs 3, 220(1)
  03f2888  fabs 2, 2
  03f288c  rlwimi 4, 5, 2, 30, 30
  03f2890  fsub 7, 3, 30
  03f2894  fsub 8, 3, 30
  03f2898  rlwimi 4, 3, 4, 28, 28
  03f289c  ori 3, 29, 0
  03f28a0  rlwimi 3, 4, 2, 26, 28
  03f28a4  slwi 4, 4, 2
  03f28a8  clrldi 3, 3, 32
  03f28ac  fsel 5, 7, 2, 5
  03f28b0  lfsx 2, 29, 4
  03f28b4  fsel 4, 8, 6, 4
  03f28b8  lfs 3, 4(3)
  03f28bc  fcmpu 0, 5, 30
  03f28c0  bt 1, 0x3f28cc
  03f28c4  fmr 2, 30
  03f28c8  b 0x3f29e4
  03f28cc  fsubs 6, 4, 5
  03f28d0  fadds 4, 4, 5
  03f28d4  addic 3, 1, 16
  03f28d8  li 7, 2
  03f28dc  addic 5, 3, 292
  03f28e0  addic 4, 3, 276
  03f28e4  mtctr 7
  03f28e8  fdivs 4, 6, 4
  03f28ec  fmuls 5, 4, 4
  03f28f0  stfs 4, 304(1)
  03f28f4  stfs 4, 296(1)
  03f28f8  stfs 4, 300(1)
  03f28fc  stfs 4, 292(1)
  03f2900  lfs 7, 304(1)
  03f2904  lfs 8, 296(1)
  03f2908  lfs 9, 300(1)
  03f290c  fmuls 6, 5, 5
  03f2910  fmuls 8, 8, 5
  03f2914  fmuls 7, 7, 6
  03f2918  fmuls 4, 6, 6
  03f291c  fmuls 6, 9, 6
  03f2920  stfs 8, 296(1)
  03f2924  fmuls 5, 7, 5
  03f2928  stfs 6, 300(1)
  03f292c  stfs 5, 304(1)
  03f2930  lfs 5, 276(3)
  03f2934  fmuls 5, 5, 4
  03f2938  stfs 5, 292(3)
  03f293c  lfs 5, 4(4)
  03f2940  addic 4, 4, 8
  03f2944  fmuls 5, 5, 4
  03f2948  addic 3, 3, 8
  03f294c  stfs 5, 4(5)
  03f2950  addic 5, 5, 8
  03f2954  bdnz 0x3f2930
  03f2958  li 5, 4
  03f295c  ori 3, 1, 0
  03f2960  mtctr 5
  03f2964  lis 4, 115
  03f2968  addic 5, 3, 292
  03f296c  addic 4, 4, 22752
  03f2970  ori 6, 5, 0
  03f2974  lfs 4, 292(3)
  03f2978  lfs 5, 0(4)
  03f297c  fmuls 4, 4, 5
  03f2980  lfs 5, 4(4)
  03f2984  addic 4, 4, 8
  03f2988  stfs 4, 292(3)
  03f298c  lfs 4, 4(5)
  03f2990  addic 3, 3, 8
  03f2994  fmuls 4, 4, 5
  03f2998  stfs 4, 4(5)
  03f299c  addic 5, 5, 8
  03f29a0  bdnz 0x3f2974
  03f29a4  ori 3, 1, 0
  03f29a8  fmr 4, 30
  03f29ac  mtctr 7
  03f29b0  lfs 5, 292(3)
  03f29b4  fadds 4, 4, 5
  03f29b8  lfs 5, 4(6)
  03f29bc  addic 3, 3, 16
  03f29c0  lfs 6, 8(6)
  03f29c4  lfs 7, 12(6)
  03f29c8  addic 6, 6, 16
  03f29cc  fadds 4, 4, 5
  03f29d0  fadds 4, 4, 6
  03f29d4  fadds 4, 4, 7
  03f29d8  bdnz 0x3f29b0
  03f29dc  fadds 4, 4, 31
  03f29e0  fmadds 2, 4, 2, 3
  03f29e4  bl 0x5026a0
  03f29e8  nop
  03f29ec  fmr 3, 1
  03f29f0  lis 3, 63
  03f29f4  lfs 2, 0(30)
  03f29f8  lis 4, 114
  03f29fc  addi 3, 3, 9488
  03f2a00  lfs 4, 20(3)
  03f2a04  lfs 1, -3052(4)
  03f2a08  fcmpu 0, 3, 4
  03f2a0c  cror 6, 1, 2
  03f2a10  bt 6, 0x3f2cbc
  03f2a14  lfs 2, 128(28)
  03f2a18  lfs 3, 16(31)
  03f2a1c  lfs 4, 132(28)
  03f2a20  lfs 5, 20(31)
  03f2a24  fsubs 2, 2, 3
  03f2a28  fsubs 3, 4, 5
  03f2a2c  fabs 4, 2
  03f2a30  fabs 5, 3
  03f2a34  stfs 2, 200(1)
  03f2a38  stfs 3, 204(1)
  03f2a3c  fsubs 2, 4, 5
  03f2a40  stfs 2, 208(1)
  03f2a44  lwz 3, 200(1)
  03f2a48  lfs 2, 200(1)
  03f2a4c  lwz 4, 204(1)
  03f2a50  lfs 3, 204(1)
  03f2a54  fabs 2, 2
  03f2a58  lwz 5, 208(1)
  03f2a5c  rlwinm 4, 4, 3, 29, 29
  03f2a60  lfs 6, 208(1)
  03f2a64  fabs 3, 3
  03f2a68  rlwimi 4, 5, 2, 30, 30
  03f2a6c  fsub 7, 6, 30
  03f2a70  fsub 6, 6, 30
  03f2a74  rlwimi 4, 3, 4, 28, 28
  03f2a78  ori 3, 29, 0
  03f2a7c  rlwimi 3, 4, 2, 26, 28
  03f2a80  slwi 4, 4, 2
  03f2a84  clrldi 3, 3, 32
  03f2a88  fsel 5, 7, 2, 5
  03f2a8c  lfsx 2, 29, 4
  03f2a90  fsel 4, 6, 3, 4
  03f2a94  lfs 3, 4(3)
  03f2a98  fcmpu 0, 5, 30
  03f2a9c  bt 1, 0x3f2aa8
  03f2aa0  fmr 2, 30
  03f2aa4  b 0x3f2bc0
  03f2aa8  fsubs 6, 4, 5
  03f2aac  fadds 4, 4, 5
  03f2ab0  addic 3, 1, 16
  03f2ab4  li 6, 2
  03f2ab8  addic 4, 3, 244
  03f2abc  addic 5, 3, 260
  03f2ac0  mtctr 6
  03f2ac4  fdivs 4, 6, 4
  03f2ac8  fmuls 5, 4, 4
  03f2acc  stfs 4, 272(1)
  03f2ad0  stfs 4, 264(1)
  03f2ad4  stfs 4, 268(1)
  03f2ad8  stfs 4, 260(1)
  03f2adc  lfs 7, 272(1)
  03f2ae0  lfs 8, 264(1)
  03f2ae4  lfs 9, 268(1)
  03f2ae8  fmuls 6, 5, 5
  03f2aec  fmuls 8, 8, 5
  03f2af0  fmuls 7, 7, 6
  03f2af4  fmuls 4, 6, 6
  03f2af8  fmuls 6, 9, 6
  03f2afc  stfs 8, 264(1)
  03f2b00  fmuls 5, 7, 5
  03f2b04  stfs 6, 268(1)
  03f2b08  stfs 5, 272(1)
  03f2b0c  lfs 5, 244(3)
  03f2b10  fmuls 5, 5, 4
  03f2b14  stfs 5, 260(3)
  03f2b18  lfs 5, 4(4)
  03f2b1c  addic 3, 3, 8
  03f2b20  addic 4, 4, 8
  03f2b24  fmuls 5, 5, 4
  03f2b28  stfs 5, 4(5)
  03f2b2c  addic 5, 5, 8
  03f2b30  bdnz 0x3f2b0c
  03f2b34  li 5, 4
  03f2b38  ori 3, 1, 0
  03f2b3c  mtctr 5
  03f2b40  lis 4, 115
  03f2b44  addic 5, 3, 260
  03f2b48  addic 4, 4, 22752
  03f2b4c  ori 7, 5, 0
  03f2b50  lfs 4, 260(3)
  03f2b54  lfs 5, 0(4)
  03f2b58  fmuls 4, 4, 5
  03f2b5c  lfs 5, 4(4)
  03f2b60  addic 4, 4, 8
  03f2b64  stfs 4, 260(3)
  03f2b68  lfs 4, 4(5)
  03f2b6c  addic 3, 3, 8
  03f2b70  fmuls 4, 4, 5
  03f2b74  stfs 4, 4(5)
  03f2b78  addic 5, 5, 8
  03f2b7c  bdnz 0x3f2b50
  03f2b80  fmr 4, 30
  03f2b84  ori 3, 1, 0
  03f2b88  mtctr 6
  03f2b8c  lfs 5, 260(3)
  03f2b90  fadds 4, 4, 5
  03f2b94  addic 3, 3, 16
  03f2b98  lfs 5, 4(7)
  03f2b9c  lfs 6, 8(7)
  03f2ba0  lfs 7, 12(7)
  03f2ba4  addic 7, 7, 16
  03f2ba8  fadds 4, 4, 5
  03f2bac  fadds 4, 4, 6
  03f2bb0  fadds 4, 4, 7
  03f2bb4  bdnz 0x3f2b8c
  03f2bb8  fadds 4, 4, 31
  03f2bbc  fmadds 2, 4, 2, 3
  03f2bc0  lis 3, 63
  03f2bc4  fmr 3, 1
  03f2bc8  fmr 1, 2
  03f2bcc  li 6, 0
  03f2bd0  addi 28, 3, 9488
  03f2bd4  lis 3, 133
  03f2bd8  lfs 5, 24(28)
  03f2bdc  lfs 4, 17332(3)
  03f2be0  addic 3, 1, 192
  03f2be4  fmuls 2, 4, 5
  03f2be8  fmuls 2, 2, 3
  03f2bec  bl 0x109ec0
  03f2bf0  nop
  03f2bf4  lfs 1, 28(28)
  03f2bf8  lfs 2, 192(1)
  03f2bfc  lfs 3, 32(28)
  03f2c00  fadds 1, 2, 1
  03f2c04  lfs 4, 36(28)
  03f2c08  lfs 5, 4(30)
  03f2c0c  lfs 6, 0(30)
  03f2c10  fmuls 5, 5, 5
  03f2c14  fsubs 7, 3, 1
  03f2c18  fsubs 8, 4, 1
  03f2c1c  fmadds 6, 6, 6, 5
  03f2c20  fsubs 3, 3, 2
  03f2c24  fsub 9, 1, 7
  03f2c28  fsqrts 6, 6
  03f2c2c  fsel 1, 9, 7, 1
  03f2c30  lfs 7, 40(28)
  03f2c34  fsub 13, 2, 3
  03f2c38  lfs 9, 44(28)
  03f2c3c  lfs 11, 48(28)
  03f2c40  fsub 10, 8, 1
  03f2c44  fsel 3, 13, 3, 2
  03f2c48  fsubs 2, 4, 2
  03f2c4c  fsel 1, 10, 8, 1
  03f2c50  lfs 8, 52(28)
  03f2c54  fmuls 10, 1, 1
  03f2c58  fmuls 12, 10, 1
  03f2c5c  fmuls 0, 10, 12
  03f2c60  fmadds 1, 12, 7, 1
  03f2c64  fmuls 12, 10, 0
  03f2c68  fmadds 1, 0, 9, 1
  03f2c6c  fmuls 4, 10, 12
  03f2c70  fmadds 1, 12, 11, 1
  03f2c74  fsub 10, 2, 3
  03f2c78  fmadds 1, 4, 8, 1
  03f2c7c  fsel 3, 10, 2, 3
  03f2c80  fmuls 2, 1, 6
  03f2c84  fmuls 1, 3, 3
  03f2c88  fmadds 4, 2, 2, 5
  03f2c8c  fmuls 5, 1, 3
  03f2c90  stfs 2, 0(30)
  03f2c94  fsqrts 4, 4
  03f2c98  fmuls 6, 1, 5
  03f2c9c  fmadds 3, 5, 7, 3
  03f2ca0  fmuls 5, 1, 6
  03f2ca4  fmadds 3, 6, 9, 3
  03f2ca8  fmuls 1, 1, 5
  03f2cac  fmadds 3, 5, 11, 3
  03f2cb0  fmadds 1, 1, 8, 3
  03f2cb4  fmuls 1, 1, 4
  03f2cb8  stfs 1, 4(30)
  03f2cbc  lfs 1, 16(31)
  03f2cc0  fadds 1, 1, 2
  03f2cc4  lfs 2, 20(31)
  03f2cc8  lfs 3, 24(31)
  03f2ccc  stfs 1, 16(31)
  03f2cd0  lfs 1, 4(30)
  03f2cd4  fadds 1, 2, 1
  03f2cd8  stfs 1, 20(31)
  03f2cdc  lfs 1, 8(30)
  03f2ce0  fadds 1, 3, 1
  03f2ce4  stfs 1, 24(31)
  03f2ce8  lwz 3, 0(30)
  03f2cec  lwz 4, 4(30)
  03f2cf0  lfs 1, 0(30)
  03f2cf4  lfs 2, 4(30)
  03f2cf8  fabs 3, 1
  03f2cfc  fabs 5, 2
  03f2d00  rlwinm 4, 4, 3, 29, 29
  03f2d04  fsubs 1, 3, 5
  03f2d08  stfs 1, 196(1)
  03f2d0c  lwz 5, 196(1)
  03f2d10  lfs 1, 196(1)
  03f2d14  rlwimi 4, 5, 2, 30, 30
  03f2d18  fsub 4, 1, 30
  03f2d1c  fsub 6, 1, 30
  03f2d20  rlwimi 4, 3, 4, 28, 28
  03f2d24  ori 3, 29, 0
  03f2d28  rlwimi 3, 4, 2, 26, 28
  03f2d2c  slwi 4, 4, 2
  03f2d30  clrldi 3, 3, 32
  03f2d34  fsel 4, 4, 3, 5
  03f2d38  lfsx 2, 29, 4
  03f2d3c  fsel 3, 6, 5, 3
  03f2d40  lfs 1, 4(3)
  03f2d44  fcmpu 0, 4, 30
  03f2d48  bt 1, 0x3f2d54
  03f2d4c  fmr 31, 30
  03f2d50  b 0x3f2e6c
  03f2d54  fsubs 5, 3, 4
  03f2d58  fadds 3, 3, 4
  03f2d5c  addic 3, 1, 16
  03f2d60  li 6, 2
  03f2d64  addic 5, 3, 228
  03f2d68  addic 4, 3, 212
  03f2d6c  mtctr 6
  03f2d70  fdivs 3, 5, 3
  03f2d74  fmuls 4, 3, 3
  03f2d78  stfs 3, 240(1)
  03f2d7c  stfs 3, 232(1)
  03f2d80  stfs 3, 236(1)
  03f2d84  stfs 3, 228(1)
  03f2d88  lfs 6, 240(1)
  03f2d8c  lfs 7, 232(1)
  03f2d90  lfs 8, 236(1)
  03f2d94  fmuls 5, 4, 4
  03f2d98  fmuls 7, 7, 4
  03f2d9c  fmuls 6, 6, 5
  03f2da0  fmuls 3, 5, 5
  03f2da4  fmuls 5, 8, 5
  03f2da8  stfs 7, 232(1)
  03f2dac  fmuls 4, 6, 4
  03f2db0  stfs 5, 236(1)
  03f2db4  stfs 4, 240(1)
  03f2db8  lfs 4, 212(3)
  03f2dbc  fmuls 4, 4, 3
  03f2dc0  stfs 4, 228(3)
  03f2dc4  lfs 4, 4(4)
  03f2dc8  addic 4, 4, 8
  03f2dcc  fmuls 4, 4, 3
  03f2dd0  addic 3, 3, 8
  03f2dd4  stfs 4, 4(5)
  03f2dd8  addic 5, 5, 8
  03f2ddc  bdnz 0x3f2db8
  03f2de0  li 5, 4
  03f2de4  ori 3, 1, 0
  03f2de8  mtctr 5
  03f2dec  lis 4, 115
  03f2df0  addic 5, 3, 228
  03f2df4  addic 4, 4, 22752
  03f2df8  ori 7, 5, 0
  03f2dfc  lfs 3, 228(3)
  03f2e00  lfs 4, 0(4)
  03f2e04  fmuls 3, 3, 4
  03f2e08  lfs 4, 4(4)
  03f2e0c  addic 4, 4, 8
  03f2e10  stfs 3, 228(3)
  03f2e14  lfs 3, 4(5)
  03f2e18  addic 3, 3, 8
  03f2e1c  fmuls 3, 3, 4
  03f2e20  stfs 3, 4(5)
  03f2e24  addic 5, 5, 8
  03f2e28  bdnz 0x3f2dfc
  03f2e2c  ori 3, 1, 0
  03f2e30  fmr 3, 30
  03f2e34  mtctr 6
  03f2e38  lfs 4, 228(3)
  03f2e3c  fadds 3, 3, 4
  03f2e40  lfs 4, 4(7)
  03f2e44  addic 3, 3, 16
  03f2e48  lfs 5, 8(7)
  03f2e4c  lfs 6, 12(7)
  03f2e50  addic 7, 7, 16
  03f2e54  fadds 3, 3, 4
  03f2e58  fadds 3, 3, 5
  03f2e5c  fadds 3, 3, 6
  03f2e60  bdnz 0x3f2e38
  03f2e64  fadds 31, 3, 31
  03f2e68  fmadds 31, 31, 2, 1
  03f2e6c  li 5, 0
  03f2e70  stfs 31, 72(31)
  03f2e74  li 3, 15
  03f2e78  addic 29, 31, 16
  03f2e7c  addic 28, 1, 128
  03f2e80  stw 5, 140(1)
  03f2e84  li 4, 22
  03f2e88  stw 5, 136(1)
  03f2e8c  stw 5, 132(1)
  03f2e90  stw 5, 128(1)
  03f2e94  bl 0xfe484
  03f2e98  nop
  03f2e9c  extsw 3, 3
  03f2ea0  lis 27, 114
  03f2ea4  std 3, 360(1)
  03f2ea8  lis 3, 63
  03f2eac  addi 3, 3, 9488
  03f2eb0  li 4, 35
  03f2eb4  lfs 31, 56(3)
  03f2eb8  lfs 1, -3056(27)
  03f2ebc  lfd 2, 360(1)
  03f2ec0  fcfid 2, 2
  03f2ec4  li 3, 20
  03f2ec8  frsp 2, 2
  03f2ecc  fadds 2, 2, 31
  03f2ed0  fmuls 1, 1, 2
  03f2ed4  fctiwz 1, 1
  03f2ed8  stfd 1, 360(1)
  03f2edc  lwz 5, 364(1)
  03f2ee0  extsw 26, 5
  03f2ee4  bl 0xfe484
  03f2ee8  nop
  03f2eec  ori 9, 3, 0
  03f2ef0  lis 5, 28416
  03f2ef4  ori 3, 29, 0
  03f2ef8  li 6, 255
  03f2efc  ori 7, 26, 0
  03f2f00  li 8, 40
  03f2f04  ori 4, 28, 0
  03f2f08  ori 5, 5, 45055
  03f2f0c  li 10, 1
  03f2f10  bl 0x121740
  03f2f14  nop
  03f2f18  li 3, 30
  03f2f1c  li 4, 60
  03f2f20  bl 0xfe484
  03f2f24  nop
  03f2f28  extsw 3, 3
  03f2f2c  li 4, 75
  03f2f30  std 3, 360(1)
  03f2f34  lfs 1, -3056(27)
  03f2f38  lfd 2, 360(1)
  03f2f3c  li 3, 50
  03f2f40  fcfid 2, 2
  03f2f44  frsp 2, 2
  03f2f48  fadds 2, 2, 31
  03f2f4c  fmuls 1, 1, 2
  03f2f50  fctiwz 1, 1
  03f2f54  stfd 1, 360(1)
  03f2f58  lwz 5, 364(1)
  03f2f5c  extsw 27, 5
  03f2f60  bl 0xfe484
  03f2f64  nop
  03f2f68  ori 9, 3, 0
  03f2f6c  lis 5, 8191
  03f2f70  lis 6, 79
  03f2f74  ori 3, 29, 0
  03f2f78  ori 7, 27, 0
  03f2f7c  li 8, 40
  03f2f80  ori 4, 28, 0
  03f2f84  li 10, 0
  03f2f88  ori 5, 5, 65535
  03f2f8c  ori 6, 6, 20303
  03f2f90  bl 0x121740
  03f2f94  nop
  03f2f98  ori 3, 29, 0
  03f2f9c  lwz 6, 16(30)
  03f2fa0  addic 4, 1, 112
  03f2fa4  li 5, 0
  03f2fa8  li 7, 0
  03f2fac  bl 0x57820
  03f2fb0  nop
  03f2fb4  cmpwi 3, 0
  03f2fb8  bt 2, 0x3f31e0
  03f2fbc  lis 29, 161
  03f2fc0  lwz 3, 16(30)
  03f2fc4  addic 29, 29, 2368
  03f2fc8  lwz 4, 24(29)
  03f2fcc  cmpw 4, 3
  03f2fd0  cmpwi 1, 4, 0
  03f2fd4  bt 2, 0x3f31e0
  03f2fd8  bt 6, 0x3f31d8
  03f2fdc  lis 4, 63
  03f2fe0  lis 5, 1
  03f2fe4  addi 6, 4, 9488
  03f2fe8  addic 3, 1, 144
  03f2fec  ori 4, 31, 0
  03f2ff0  ori 5, 5, 1
  03f2ff4  ori 7, 30, 0
  03f2ff8  lfs 1, 60(6)
  03f2ffc  bl 0x10581c
  03f3000  nop
  03f3004  lfs 1, 148(1)
  03f3008  lfs 2, 144(1)
  03f300c  fmuls 1, 1, 1
  03f3010  vspltisw 2, -1
  03f3014  li 3, 148
  03f3018  li 4, 144
  03f301c  vspltisw 7, -16
  03f3020  li 5, 166
  03f3024  vslw 5, 2, 2
  03f3028  <unknown>
  03f302c  fmadds 1, 2, 2, 1
  03f3030  vmaddfp 5, 3, 3, 5
  03f3034  vspltisw 2, 0
  03f3038  <unknown>
  03f303c  <unknown>
  03f3040  lwz 29, 24(29)
  03f3044  vsldoi 6, 2, 2, 0
  03f3048  vsrw 7, 8, 7
  03f304c  fsqrts 1, 1
  03f3050  vmaddfp 5, 4, 4, 5
  03f3054  fcmpu 0, 1, 30
  03f3058  bt 2, 0x3f30f8
  03f305c  vrsqrtefp 2, 5
  03f3060  vspltisw 6, -1
  03f3064  lis 3, 63
  03f3068  li 4, 56
  03f306c  vspltisw 8, -1
  03f3070  addi 3, 3, 9488
  03f3074  vspltisw 11, -1
  03f3078  li 5, 60
  03f307c  vslw 6, 6, 6
  03f3080  vslw 8, 8, 8
  03f3084  vslw 11, 11, 11
  03f3088  <unknown>
  03f308c  <unknown>
  03f3090  vspltw 9, 9, 0
  03f3094  vspltw 10, 10, 0
  03f3098  vspltisw 12, -1
  03f309c  vmaddfp 6, 5, 2, 6
  03f30a0  vmaddfp 8, 9, 2, 8
  03f30a4  vspltisw 13, -1
  03f30a8  vslw 12, 12, 12
  03f30ac  vspltisw 0, -1
  03f30b0  vnmsubfp 6, 6, 2, 10
  03f30b4  vmaddfp 2, 6, 8, 2
  03f30b8  vslw 6, 13, 13
  03f30bc  vspltisw 8, -1
  03f30c0  vspltisw 13, -1
  03f30c4  vslw 8, 8, 8
  03f30c8  vslw 13, 13, 13
  03f30cc  vmaddfp 11, 5, 2, 11
  03f30d0  vmaddfp 12, 9, 2, 12
  03f30d4  vnmsubfp 11, 11, 2, 10
  03f30d8  vmaddfp 2, 11, 12, 2
  03f30dc  vslw 11, 0, 0
  03f30e0  vmaddfp 5, 5, 2, 6
  03f30e4  vmaddfp 6, 9, 2, 8
  03f30e8  vnmsubfp 5, 5, 2, 10
  03f30ec  vmaddfp 2, 5, 6, 2
  03f30f0  vmaddfp 6, 4, 2, 13
  03f30f4  vmaddfp 2, 3, 2, 11
  03f30f8  vspltw 3, 6, 0
  03f30fc  li 3, 144
  03f3100  vspltw 4, 2, 0
  03f3104  li 4, 148
  03f3108  lis 5, 17839
  03f310c  lis 7, 16256
  03f3110  li 6, 160
  03f3114  li 8, 0
  03f3118  stvewx 3, 3, 1
  03f311c  ori 3, 5, 57190
  03f3120  stvewx 4, 4, 1
  03f3124  li 5, 170
  03f3128  stw 7, 152(1)
  03f312c  li 4, 1
  03f3130  vsplth 3, 7, 1
  03f3134  lis 7, 63
  03f3138  stw 3, 156(1)
  03f313c  lvx 4, 6, 1
  03f3140  li 3, 80
  03f3144  stb 8, 168(1)
  03f3148  addi 6, 7, 9488
  03f314c  stb 4, 169(1)
  03f3150  li 7, 112
  03f3154  li 4, 64
  03f3158  stvehx 3, 5, 1
  03f315c  li 8, 80
  03f3160  li 5, 96
  03f3164  lvx 3, 3, 6
  03f3168  li 3, 128
  03f316c  <unknown>
  03f3170  vperm 2, 6, 2, 3
  03f3174  li 7, 144
  03f3178  lvx 8, 4, 6
  03f317c  vspltw 3, 5, 0
  03f3180  lvx 5, 5, 6
  03f3184  li 4, 176
  03f3188  lvx 6, 3, 6
  03f318c  li 5, 96
  03f3190  vperm 2, 2, 8, 5
  03f3194  li 3, 64
  03f3198  vperm 3, 7, 3, 6
  03f319c  lvx 5, 7, 6
  03f31a0  lvx 6, 4, 1
  03f31a4  vperm 3, 3, 4, 5
  03f31a8  stvx 2, 3, 1
  03f31ac  stvx 6, 5, 1
  03f31b0  ld 5, 64(1)
  03f31b4  ori 3, 29, 0
  03f31b8  ld 6, 72(1)
  03f31bc  stvx 3, 8, 1
  03f31c0  ld 7, 80(1)
  03f31c4  ld 8, 88(1)
  03f31c8  ld 9, 96(1)
  03f31cc  ld 10, 104(1)
  03f31d0  bl 0x105ab4
  03f31d4  nop
  03f31d8  li 3, 2
  03f31dc  stb 3, 32(31)
  03f31e0  addic 3, 30, 20
  03f31e4  bl 0x4fff60
  03f31e8  nop
  03f31ec  cmpwi 3, 0
  03f31f0  bt 2, 0x3f3230
  03f31f4  li 3, 2
  03f31f8  stb 3, 32(31)
  03f31fc  b 0x3f3230
  03f3200  lis 4, 63
  03f3204  ori 3, 31, 0
  03f3208  addi 5, 4, 9488
  03f320c  li 6, -1
  03f3210  addic 4, 31, 16
  03f3214  lfs 1, 160(5)
  03f3218  lfs 2, 164(5)
  03f321c  bl 0x10fb28
  03f3220  nop
  03f3224  ori 3, 31, 0
  03f3228  bl 0xefb38
  03f322c  nop
  03f3230  ld 0, 464(1)
  03f3234  mtlr 0
  03f3238  lfd 30, 432(1)
  03f323c  lfd 31, 440(1)
  03f3240  ld 26, 384(1)
  03f3244  ld 27, 392(1)
  03f3248  ld 28, 400(1)
  03f324c  ld 29, 408(1)
  03f3250  ld 30, 416(1)
  03f3254  ld 31, 424(1)
  03f3258  addi 1, 1, 448
  03f325c  blr
