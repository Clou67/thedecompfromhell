# game/update/moby1051.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1051_001a2500:   # 0x1a2500, 0x14 bytes
  01a2500  lis 3, 116
  01a2504  lis 4, 1
  01a2508  addic 3, 3, 1872
  01a250c  stw 4, 72(3)
  01a2510  blr

M1051_001a2558:   # 0x1a2558, 0x8c8 bytes
  01a2558  stdu 1, -368(1)
  01a255c  mflr 0
  01a2560  std 0, 384(1)
  01a2564  stfd 26, 320(1)
  01a2568  stfd 27, 328(1)
  01a256c  stfd 28, 336(1)
  01a2570  stfd 29, 344(1)
  01a2574  stfd 30, 352(1)
  01a2578  stfd 31, 360(1)
  01a257c  std 27, 280(1)
  01a2580  std 30, 304(1)
  01a2584  lis 27, 151
  01a2588  lwz 30, 120(3)
  01a258c  addic 27, 27, -25376
  01a2590  lis 4, 26
  01a2594  addi 4, 4, 9496
  01a2598  lfs 1, 128(27)
  01a259c  lfs 2, 132(27)
  01a25a0  lfs 4, 208(30)
  01a25a4  lfs 5, 212(30)
  01a25a8  fsubs 1, 1, 4
  01a25ac  std 29, 296(1)
  01a25b0  std 28, 288(1)
  01a25b4  fsubs 2, 2, 5
  01a25b8  lwz 29, 176(30)
  01a25bc  std 31, 312(1)
  01a25c0  lis 28, 115
  01a25c4  ori 31, 3, 0
  01a25c8  addic 28, 28, 22784
  01a25cc  fabs 3, 1
  01a25d0  fabs 8, 2
  01a25d4  stfs 1, 136(1)
  01a25d8  stfs 2, 140(1)
  01a25dc  fsubs 1, 3, 8
  01a25e0  stfs 1, 144(1)
  01a25e4  lwz 5, 136(1)
  01a25e8  lfs 29, 0(4)
  01a25ec  lfs 1, 136(1)
  01a25f0  lwz 6, 140(1)
  01a25f4  lfs 2, 140(1)
  01a25f8  fabs 1, 1
  01a25fc  lfs 6, 16(3)
  01a2600  rlwinm 6, 6, 3, 29, 29
  01a2604  fabs 9, 2
  01a2608  lwz 7, 144(1)
  01a260c  lfs 2, 144(1)
  01a2610  rlwimi 6, 7, 2, 30, 30
  01a2614  fsub 10, 2, 29
  01a2618  lfs 7, 20(3)
  01a261c  rlwimi 6, 5, 4, 28, 28
  01a2620  fsub 11, 2, 29
  01a2624  ori 5, 28, 0
  01a2628  rlwimi 5, 6, 2, 26, 28
  01a262c  slwi 6, 6, 2
  01a2630  clrldi 5, 5, 32
  01a2634  fsel 8, 10, 1, 8
  01a2638  lfsx 1, 28, 6
  01a263c  lfs 2, 4(5)
  01a2640  fsel 3, 11, 9, 3
  01a2644  lfs 28, 4(4)
  01a2648  std 26, 272(1)
  01a264c  fcmpu 0, 8, 29
  01a2650  bt 1, 0x1a265c
  01a2654  fmr 1, 29
  01a2658  b 0x1a2774
  01a265c  fsubs 9, 3, 8
  01a2660  fadds 3, 3, 8
  01a2664  addic 3, 1, 16
  01a2668  li 7, 2
  01a266c  addic 5, 3, 212
  01a2670  addic 4, 3, 196
  01a2674  mtctr 7
  01a2678  fdivs 3, 9, 3
  01a267c  fmuls 8, 3, 3
  01a2680  stfs 3, 224(1)
  01a2684  stfs 3, 216(1)
  01a2688  stfs 3, 220(1)
  01a268c  stfs 3, 212(1)
  01a2690  lfs 10, 224(1)
  01a2694  lfs 11, 216(1)
  01a2698  lfs 12, 220(1)
  01a269c  fmuls 9, 8, 8
  01a26a0  fmuls 11, 11, 8
  01a26a4  fmuls 10, 10, 9
  01a26a8  fmuls 3, 9, 9
  01a26ac  fmuls 9, 12, 9
  01a26b0  stfs 11, 216(1)
  01a26b4  fmuls 8, 10, 8
  01a26b8  stfs 9, 220(1)
  01a26bc  stfs 8, 224(1)
  01a26c0  lfs 8, 196(3)
  01a26c4  fmuls 8, 8, 3
  01a26c8  stfs 8, 212(3)
  01a26cc  lfs 8, 4(4)
  01a26d0  addic 4, 4, 8
  01a26d4  fmuls 8, 8, 3
  01a26d8  addic 3, 3, 8
  01a26dc  stfs 8, 4(5)
  01a26e0  addic 5, 5, 8
  01a26e4  bdnz 0x1a26c0
  01a26e8  li 5, 4
  01a26ec  ori 3, 1, 0
  01a26f0  mtctr 5
  01a26f4  lis 4, 115
  01a26f8  addic 5, 3, 212
  01a26fc  addic 4, 4, 22752
  01a2700  ori 6, 5, 0
  01a2704  lfs 3, 212(3)
  01a2708  lfs 8, 0(4)
  01a270c  fmuls 3, 3, 8
  01a2710  lfs 8, 4(4)
  01a2714  addic 4, 4, 8
  01a2718  stfs 3, 212(3)
  01a271c  lfs 3, 4(5)
  01a2720  addic 3, 3, 8
  01a2724  fmuls 3, 3, 8
  01a2728  stfs 3, 4(5)
  01a272c  addic 5, 5, 8
  01a2730  bdnz 0x1a2704
  01a2734  ori 3, 1, 0
  01a2738  fmr 3, 29
  01a273c  mtctr 7
  01a2740  lfs 8, 212(3)
  01a2744  fadds 3, 3, 8
  01a2748  lfs 8, 4(6)
  01a274c  addic 3, 3, 16
  01a2750  lfs 9, 8(6)
  01a2754  lfs 10, 12(6)
  01a2758  addic 6, 6, 16
  01a275c  fadds 3, 3, 8
  01a2760  fadds 3, 3, 9
  01a2764  fadds 3, 3, 10
  01a2768  bdnz 0x1a2740
  01a276c  fadds 3, 3, 28
  01a2770  fmadds 1, 3, 1, 2
  01a2774  fsubs 2, 6, 4
  01a2778  fsubs 3, 7, 5
  01a277c  fabs 6, 2
  01a2780  fabs 5, 3
  01a2784  stfs 2, 124(1)
  01a2788  stfs 3, 128(1)
  01a278c  fsubs 2, 6, 5
  01a2790  stfs 2, 132(1)
  01a2794  lwz 3, 124(1)
  01a2798  lfs 2, 124(1)
  01a279c  lwz 4, 128(1)
  01a27a0  lfs 3, 128(1)
  01a27a4  fabs 2, 2
  01a27a8  lwz 5, 132(1)
  01a27ac  rlwinm 4, 4, 3, 29, 29
  01a27b0  lfs 4, 132(1)
  01a27b4  fabs 3, 3
  01a27b8  rlwimi 4, 5, 2, 30, 30
  01a27bc  fsub 7, 4, 29
  01a27c0  fsub 8, 4, 29
  01a27c4  rlwimi 4, 3, 4, 28, 28
  01a27c8  ori 3, 28, 0
  01a27cc  rlwimi 3, 4, 2, 26, 28
  01a27d0  slwi 4, 4, 2
  01a27d4  clrldi 3, 3, 32
  01a27d8  fsel 5, 7, 2, 5
  01a27dc  lfsx 4, 28, 4
  01a27e0  fsel 3, 8, 3, 6
  01a27e4  lfs 2, 4(3)
  01a27e8  fcmpu 0, 5, 29
  01a27ec  bt 1, 0x1a27f8
  01a27f0  fmr 31, 29
  01a27f4  b 0x1a2910
  01a27f8  fsubs 6, 3, 5
  01a27fc  fadds 3, 3, 5
  01a2800  addic 3, 1, 16
  01a2804  li 6, 2
  01a2808  addic 4, 3, 164
  01a280c  addic 5, 3, 180
  01a2810  mtctr 6
  01a2814  fdivs 3, 6, 3
  01a2818  fmuls 5, 3, 3
  01a281c  stfs 3, 192(1)
  01a2820  stfs 3, 184(1)
  01a2824  stfs 3, 188(1)
  01a2828  stfs 3, 180(1)
  01a282c  lfs 7, 192(1)
  01a2830  lfs 8, 184(1)
  01a2834  lfs 9, 188(1)
  01a2838  fmuls 6, 5, 5
  01a283c  fmuls 8, 8, 5
  01a2840  fmuls 7, 7, 6
  01a2844  fmuls 3, 6, 6
  01a2848  fmuls 6, 9, 6
  01a284c  stfs 8, 184(1)
  01a2850  fmuls 5, 7, 5
  01a2854  stfs 6, 188(1)
  01a2858  stfs 5, 192(1)
  01a285c  lfs 5, 164(3)
  01a2860  fmuls 5, 5, 3
  01a2864  stfs 5, 180(3)
  01a2868  lfs 5, 4(4)
  01a286c  addic 3, 3, 8
  01a2870  addic 4, 4, 8
  01a2874  fmuls 5, 5, 3
  01a2878  stfs 5, 4(5)
  01a287c  addic 5, 5, 8
  01a2880  bdnz 0x1a285c
  01a2884  li 5, 4
  01a2888  ori 3, 1, 0
  01a288c  mtctr 5
  01a2890  lis 4, 115
  01a2894  addic 5, 3, 180
  01a2898  addic 4, 4, 22752
  01a289c  ori 7, 5, 0
  01a28a0  lfs 3, 180(3)
  01a28a4  lfs 5, 0(4)
  01a28a8  fmuls 3, 3, 5
  01a28ac  lfs 5, 4(4)
  01a28b0  addic 4, 4, 8
  01a28b4  stfs 3, 180(3)
  01a28b8  lfs 3, 4(5)
  01a28bc  addic 3, 3, 8
  01a28c0  fmuls 3, 3, 5
  01a28c4  stfs 3, 4(5)
  01a28c8  addic 5, 5, 8
  01a28cc  bdnz 0x1a28a0
  01a28d0  fmr 31, 29
  01a28d4  ori 3, 1, 0
  01a28d8  mtctr 6
  01a28dc  lfs 3, 180(3)
  01a28e0  lfs 5, 4(7)
  01a28e4  fadds 3, 31, 3
  01a28e8  lfs 6, 8(7)
  01a28ec  addic 3, 3, 16
  01a28f0  lfs 31, 12(7)
  01a28f4  addic 7, 7, 16
  01a28f8  fadds 3, 3, 5
  01a28fc  fadds 3, 3, 6
  01a2900  fadds 31, 3, 31
  01a2904  bdnz 0x1a28dc
  01a2908  fadds 31, 31, 28
  01a290c  fmadds 31, 31, 4, 2
  01a2910  lis 3, 26
  01a2914  addi 3, 3, 9496
  01a2918  lfs 2, 8(3)
  01a291c  bl 0x502578
  01a2920  nop
  01a2924  fmr 2, 31
  01a2928  bl 0x5025e0
  01a292c  nop
  01a2930  fcmpu 0, 1, 28
  01a2934  cror 6, 0, 2
  01a2938  bt 6, 0x1a2944
  01a293c  fmr 1, 28
  01a2940  b 0x1a2960
  01a2944  lis 3, 26
  01a2948  addi 3, 3, 9496
  01a294c  lfs 2, 12(3)
  01a2950  fcmpu 0, 1, 2
  01a2954  cror 6, 1, 2
  01a2958  bt 6, 0x1a2960
  01a295c  fmr 1, 2
  01a2960  fmr 2, 31
  01a2964  bl 0x502578
  01a2968  nop
  01a296c  lis 3, 26
  01a2970  addi 3, 3, 9496
  01a2974  lfs 2, 16(3)
  01a2978  lfs 3, 20(3)
  01a297c  fadds 2, 1, 2
  01a2980  fsubs 9, 3, 1
  01a2984  lfs 4, 24(3)
  01a2988  lfs 5, 16(29)
  01a298c  lfs 6, 16(31)
  01a2990  lfs 7, 20(29)
  01a2994  lfs 8, 20(31)
  01a2998  fsubs 5, 5, 6
  01a299c  lfs 31, 220(30)
  01a29a0  fsubs 6, 7, 8
  01a29a4  lfs 12, 208(30)
  01a29a8  lfs 30, 212(30)
  01a29ac  fsubs 3, 3, 2
  01a29b0  fsub 11, 1, 9
  01a29b4  lfs 27, 216(30)
  01a29b8  fsubs 10, 4, 2
  01a29bc  fsubs 4, 4, 1
  01a29c0  fabs 7, 5
  01a29c4  addic 29, 31, 72
  01a29c8  fsub 13, 2, 3
  01a29cc  fsel 1, 11, 9, 1
  01a29d0  fsel 2, 13, 3, 2
  01a29d4  fsub 9, 4, 1
  01a29d8  fabs 13, 6
  01a29dc  lfs 3, 28(3)
  01a29e0  lfs 8, 32(3)
  01a29e4  fsub 26, 10, 2
  01a29e8  fsel 1, 9, 4, 1
  01a29ec  lfs 9, 36(3)
  01a29f0  fsubs 4, 7, 13
  01a29f4  lfs 0, 40(3)
  01a29f8  stfs 5, 112(1)
  01a29fc  fmr 5, 8
  01a2a00  fsel 2, 26, 10, 2
  01a2a04  fmuls 8, 1, 1
  01a2a08  stfs 4, 120(1)
  01a2a0c  stfs 6, 116(1)
  01a2a10  fmr 6, 0
  01a2a14  lwz 3, 112(1)
  01a2a18  lwz 4, 120(1)
  01a2a1c  fmuls 4, 2, 2
  01a2a20  fmuls 10, 8, 1
  01a2a24  fmuls 11, 4, 2
  01a2a28  fmuls 0, 8, 10
  01a2a2c  fmadds 1, 10, 3, 1
  01a2a30  fmadds 2, 11, 3, 2
  01a2a34  fmuls 10, 4, 11
  01a2a38  fmuls 3, 8, 0
  01a2a3c  lfs 11, 120(1)
  01a2a40  fmadds 1, 0, 5, 1
  01a2a44  lfs 0, 112(1)
  01a2a48  lwz 5, 116(1)
  01a2a4c  rlwinm 5, 5, 3, 29, 29
  01a2a50  rlwimi 5, 4, 2, 30, 30
  01a2a54  fmuls 26, 4, 10
  01a2a58  fmadds 2, 10, 5, 2
  01a2a5c  rlwimi 5, 3, 4, 28, 28
  01a2a60  fmuls 8, 8, 3
  01a2a64  fmadds 1, 3, 9, 1
  01a2a68  fabs 5, 0
  01a2a6c  ori 3, 28, 0
  01a2a70  fsub 3, 11, 29
  01a2a74  slwi 4, 5, 2
  01a2a78  rlwimi 3, 5, 2, 26, 28
  01a2a7c  clrldi 3, 3, 32
  01a2a80  fmuls 10, 4, 26
  01a2a84  fmadds 2, 26, 9, 2
  01a2a88  fmadds 1, 8, 6, 1
  01a2a8c  fsel 4, 3, 5, 13
  01a2a90  lfs 3, 116(1)
  01a2a94  fsub 5, 11, 29
  01a2a98  fabs 3, 3
  01a2a9c  fmadds 2, 10, 6, 2
  01a2aa0  fmadds 30, 1, 31, 30
  01a2aa4  lfsx 1, 28, 4
  01a2aa8  fcmpu 0, 4, 29
  01a2aac  fsel 3, 5, 3, 7
  01a2ab0  fmadds 31, 2, 31, 12
  01a2ab4  lfs 2, 4(3)
  01a2ab8  bt 1, 0x1a2ac4
  01a2abc  fmr 1, 29
  01a2ac0  b 0x1a2bdc
  01a2ac4  fsubs 5, 3, 4
  01a2ac8  fadds 3, 3, 4
  01a2acc  addic 3, 1, 16
  01a2ad0  li 7, 2
  01a2ad4  addic 5, 3, 148
  01a2ad8  addic 4, 3, 132
  01a2adc  mtctr 7
  01a2ae0  fdivs 3, 5, 3
  01a2ae4  fmuls 4, 3, 3
  01a2ae8  stfs 3, 160(1)
  01a2aec  stfs 3, 152(1)
  01a2af0  stfs 3, 156(1)
  01a2af4  stfs 3, 148(1)
  01a2af8  lfs 6, 160(1)
  01a2afc  lfs 7, 152(1)
  01a2b00  lfs 8, 156(1)
  01a2b04  fmuls 5, 4, 4
  01a2b08  fmuls 7, 7, 4
  01a2b0c  fmuls 6, 6, 5
  01a2b10  fmuls 3, 5, 5
  01a2b14  fmuls 5, 8, 5
  01a2b18  stfs 7, 152(1)
  01a2b1c  fmuls 4, 6, 4
  01a2b20  stfs 5, 156(1)
  01a2b24  stfs 4, 160(1)
  01a2b28  lfs 4, 132(3)
  01a2b2c  fmuls 4, 4, 3
  01a2b30  stfs 4, 148(3)
  01a2b34  lfs 4, 4(4)
  01a2b38  addic 4, 4, 8
  01a2b3c  fmuls 4, 4, 3
  01a2b40  addic 3, 3, 8
  01a2b44  stfs 4, 4(5)
  01a2b48  addic 5, 5, 8
  01a2b4c  bdnz 0x1a2b28
  01a2b50  li 5, 4
  01a2b54  ori 3, 1, 0
  01a2b58  mtctr 5
  01a2b5c  lis 4, 115
  01a2b60  addic 5, 3, 148
  01a2b64  addic 4, 4, 22752
  01a2b68  ori 6, 5, 0
  01a2b6c  lfs 3, 148(3)
  01a2b70  lfs 4, 0(4)
  01a2b74  fmuls 3, 3, 4
  01a2b78  lfs 4, 4(4)
  01a2b7c  addic 4, 4, 8
  01a2b80  stfs 3, 148(3)
  01a2b84  lfs 3, 4(5)
  01a2b88  addic 3, 3, 8
  01a2b8c  fmuls 3, 3, 4
  01a2b90  stfs 3, 4(5)
  01a2b94  addic 5, 5, 8
  01a2b98  bdnz 0x1a2b6c
  01a2b9c  ori 3, 1, 0
  01a2ba0  fmr 3, 29
  01a2ba4  mtctr 7
  01a2ba8  lfs 4, 148(3)
  01a2bac  fadds 3, 3, 4
  01a2bb0  lfs 4, 4(6)
  01a2bb4  addic 3, 3, 16
  01a2bb8  lfs 5, 8(6)
  01a2bbc  lfs 6, 12(6)
  01a2bc0  addic 6, 6, 16
  01a2bc4  fadds 3, 3, 4
  01a2bc8  fadds 3, 3, 5
  01a2bcc  fadds 3, 3, 6
  01a2bd0  bdnz 0x1a2ba8
  01a2bd4  fadds 3, 3, 28
  01a2bd8  fmadds 1, 3, 1, 2
  01a2bdc  lis 3, 26
  01a2be0  lis 26, 114
  01a2be4  addi 28, 3, 9496
  01a2be8  lis 3, 114
  01a2bec  addic 5, 30, 224
  01a2bf0  lfs 2, 44(28)
  01a2bf4  lfs 3, -3048(26)
  01a2bf8  lfs 4, 48(28)
  01a2bfc  fmuls 2, 3, 2
  01a2c00  lfs 5, -3052(3)
  01a2c04  ori 3, 29, 0
  01a2c08  fmuls 4, 5, 4
  01a2c0c  fmr 3, 2
  01a2c10  bl 0x10a2e0
  01a2c14  nop
  01a2c18  lfs 3, 20(31)
  01a2c1c  lfs 2, 16(31)
  01a2c20  fsubs 1, 3, 30
  01a2c24  lfs 5, 24(31)
  01a2c28  fsubs 4, 2, 31
  01a2c2c  fsubs 5, 5, 27
  01a2c30  lfs 27, 52(28)
  01a2c34  lis 3, 116
  01a2c38  addic 29, 30, 232
  01a2c3c  fmuls 1, 1, 1
  01a2c40  fmadds 1, 4, 4, 1
  01a2c44  fmadds 1, 5, 5, 1
  01a2c48  fsqrts 4, 1
  01a2c4c  lfs 1, -3048(26)
  01a2c50  lfs 5, 1992(3)
  01a2c54  fmuls 1, 5, 1
  01a2c58  fcmpu 0, 4, 27
  01a2c5c  cror 6, 0, 2
  01a2c60  bt 6, 0x1a2cc0
  01a2c64  lfs 4, 132(27)
  01a2c68  lfs 5, 128(27)
  01a2c6c  fsubs 3, 3, 4
  01a2c70  fsubs 2, 2, 5
  01a2c74  lis 3, 26
  01a2c78  addi 3, 3, 9496
  01a2c7c  fmuls 3, 3, 3
  01a2c80  fmadds 2, 2, 2, 3
  01a2c84  lfs 3, 56(3)
  01a2c88  fsqrts 2, 2
  01a2c8c  fcmpu 0, 2, 3
  01a2c90  cror 6, 1, 2
  01a2c94  bt 6, 0x1a2cc0
  01a2c98  lis 4, 116
  01a2c9c  fmr 2, 1
  01a2ca0  lis 5, 114
  01a2ca4  ori 3, 29, 0
  01a2ca8  lfs 1, 1988(4)
  01a2cac  lfs 3, -3052(5)
  01a2cb0  fmuls 1, 1, 3
  01a2cb4  bl 0x109af0
  01a2cb8  nop
  01a2cbc  b 0x1a2cd4
  01a2cc0  fmr 2, 1
  01a2cc4  ori 3, 29, 0
  01a2cc8  fmr 1, 29
  01a2ccc  bl 0x109af0
  01a2cd0  nop
  01a2cd4  lis 3, 26
  01a2cd8  lwz 4, 232(30)
  01a2cdc  addi 3, 3, 9496
  01a2ce0  cmpwi 4, 0
  01a2ce4  lfs 1, 60(3)
  01a2ce8  bf 2, 0x1a2d2c
  01a2cec  lbz 3, 83(31)
  01a2cf0  cmpwi 3, 1
  01a2cf4  bt 2, 0x1a2d68
  01a2cf8  lis 3, 114
  01a2cfc  li 4, 1
  01a2d00  li 5, 0
  01a2d04  lfs 2, -3056(3)
  01a2d08  ori 3, 31, 0
  01a2d0c  fmuls 1, 2, 1
  01a2d10  fctiwz 1, 1
  01a2d14  stfd 1, 248(1)
  01a2d18  lwz 6, 252(1)
  01a2d1c  extsw 6, 6
  01a2d20  bl 0xfddc0
  01a2d24  nop
  01a2d28  b 0x1a2d68
  01a2d2c  lbz 3, 83(31)
  01a2d30  cmpwi 3, 0
  01a2d34  bt 2, 0x1a2d68
  01a2d38  lis 3, 114
  01a2d3c  li 4, 0
  01a2d40  li 5, 0
  01a2d44  lfs 2, -3056(3)
  01a2d48  ori 3, 31, 0
  01a2d4c  fmuls 1, 2, 1
  01a2d50  fctiwz 1, 1
  01a2d54  stfd 1, 248(1)
  01a2d58  lwz 6, 252(1)
  01a2d5c  extsw 6, 6
  01a2d60  bl 0xfddc0
  01a2d64  nop
  01a2d68  lfs 2, 20(31)
  01a2d6c  lfs 3, 16(31)
  01a2d70  fsubs 4, 30, 2
  01a2d74  fsubs 5, 31, 3
  01a2d78  lfs 7, 232(30)
  01a2d7c  addic 5, 31, 16
  01a2d80  lwz 3, 236(30)
  01a2d84  fmuls 1, 4, 4
  01a2d88  ori 6, 5, 0
  01a2d8c  extsw 3, 3
  01a2d90  fmadds 1, 5, 5, 1
  01a2d94  fsqrts 6, 1
  01a2d98  fmr 1, 27
  01a2d9c  fdivs 7, 7, 6
  01a2da0  fsub 8, 29, 6
  01a2da4  fsub 9, 29, 6
  01a2da8  fsub 10, 6, 29
  01a2dac  fsub 6, 6, 29
  01a2db0  fmuls 4, 7, 4
  01a2db4  fmuls 5, 7, 5
  01a2db8  fsel 7, 8, 29, 4
  01a2dbc  fsel 8, 9, 29, 5
  01a2dc0  fsel 4, 10, 7, 4
  01a2dc4  fsel 5, 6, 8, 5
  01a2dc8  fadds 2, 2, 4
  01a2dcc  fadds 3, 3, 5
  01a2dd0  stfs 2, 20(31)
  01a2dd4  stfs 3, 16(31)
  01a2dd8  bl 0x1145d8
  01a2ddc  nop
  01a2de0  ld 0, 384(1)
  01a2de4  mtlr 0
  01a2de8  lfd 26, 320(1)
  01a2dec  lfd 27, 328(1)
  01a2df0  lfd 28, 336(1)
  01a2df4  lfd 29, 344(1)
  01a2df8  lfd 30, 352(1)
  01a2dfc  lfd 31, 360(1)
  01a2e00  ld 26, 272(1)
  01a2e04  ld 27, 280(1)
  01a2e08  ld 28, 288(1)
  01a2e0c  ld 29, 296(1)
  01a2e10  ld 30, 304(1)
  01a2e14  ld 31, 312(1)
  01a2e18  addi 1, 1, 368
  01a2e1c  blr

M1051_001a2e28:   # 0x1a2e28, 0xf8 bytes
  01a2e28  stdu 1, -176(1)
  01a2e2c  mflr 0
  01a2e30  std 0, 192(1)
  01a2e34  stfd 30, 160(1)
  01a2e38  stfd 31, 168(1)
  01a2e3c  lwz 3, 120(3)
  01a2e40  std 31, 152(1)
  01a2e44  lis 4, 165
  01a2e48  addic 31, 4, -28284
  01a2e4c  lwz 3, 240(3)
  01a2e50  slwi 3, 3, 2
  01a2e54  extsw 3, 3
  01a2e58  lwzx 31, 31, 3
  01a2e5c  std 30, 144(1)
  01a2e60  std 29, 136(1)
  01a2e64  cmpwi 31, 0
  01a2e68  bt 2, 0x1a2efc
  01a2e6c  lis 3, 26
  01a2e70  addi 3, 3, 11808
  01a2e74  lfs 30, 0(3)
  01a2e78  lfs 31, 4(3)
  01a2e7c  lis 30, 164
  01a2e80  lhz 3, 0(31)
  01a2e84  fmr 1, 30
  01a2e88  rlwinm 29, 3, 8, 9, 23
  01a2e8c  fmr 2, 31
  01a2e90  lwz 4, -28512(30)
  01a2e94  addc 3, 4, 29
  01a2e98  clrldi 3, 3, 32
  01a2e9c  lfs 3, 16(3)
  01a2ea0  stfs 3, 112(1)
  01a2ea4  lfs 3, 20(3)
  01a2ea8  stfs 3, 116(1)
  01a2eac  lfs 3, 24(3)
  01a2eb0  stfs 3, 120(1)
  01a2eb4  lfs 3, 28(3)
  01a2eb8  stfs 3, 124(1)
  01a2ebc  bl 0xfcbe8
  01a2ec0  nop
  01a2ec4  lfs 2, 120(1)
  01a2ec8  addic 4, 1, 112
  01a2ecc  lwz 3, -28512(30)
  01a2ed0  fadds 1, 2, 1
  01a2ed4  addc 3, 3, 29
  01a2ed8  clrldi 3, 3, 32
  01a2edc  stfs 1, 120(1)
  01a2ee0  bl 0x47ca58
  01a2ee4  nop
  01a2ee8  lhz 3, 0(31)
  01a2eec  addic 31, 31, 2
  01a2ef0  extsh 3, 3
  01a2ef4  cmpwi 3, 0
  01a2ef8  bf 0, 0x1a2e7c
  01a2efc  ld 0, 192(1)
  01a2f00  mtlr 0
  01a2f04  lfd 30, 160(1)
  01a2f08  lfd 31, 168(1)
  01a2f0c  ld 29, 136(1)
  01a2f10  ld 30, 144(1)
  01a2f14  ld 31, 152(1)
  01a2f18  addi 1, 1, 176
  01a2f1c  blr

M1051_001a2f20:   # 0x1a2f20, 0x64 bytes
  01a2f20  stdu 1, -128(1)
  01a2f24  mflr 0
  01a2f28  std 0, 144(1)
  01a2f2c  std 31, 120(1)
  01a2f30  lwz 31, 120(3)
  01a2f34  li 3, 0
  01a2f38  li 4, 0
  01a2f3c  bl 0xb72b0
  01a2f40  nop
  01a2f44  lwz 3, 236(31)
  01a2f48  lis 4, 165
  01a2f4c  lwz 5, 276(31)
  01a2f50  slwi 3, 3, 2
  01a2f54  addic 4, 4, 7136
  01a2f58  extsw 6, 3
  01a2f5c  li 3, 2
  01a2f60  lwzx 4, 4, 6
  01a2f64  stw 5, 0(4)
  01a2f68  bl 0x481d0
  01a2f6c  nop
  01a2f70  ld 0, 144(1)
  01a2f74  mtlr 0
  01a2f78  ld 31, 120(1)
  01a2f7c  addi 1, 1, 128
  01a2f80  blr

M1051_001a2fb0:   # 0x1a2fb0, 0x644 bytes
  01a2fb0  stdu 1, -368(1)
  01a2fb4  mflr 0
  01a2fb8  std 0, 384(1)
  01a2fbc  stfd 19, 264(1)
  01a2fc0  stfd 20, 272(1)
  01a2fc4  stfd 21, 280(1)
  01a2fc8  stfd 22, 288(1)
  01a2fcc  stfd 23, 296(1)
  01a2fd0  stfd 24, 304(1)
  01a2fd4  stfd 25, 312(1)
  01a2fd8  stfd 26, 320(1)
  01a2fdc  stfd 27, 328(1)
  01a2fe0  stfd 28, 336(1)
  01a2fe4  stfd 29, 344(1)
  01a2fe8  stfd 30, 352(1)
  01a2fec  stfd 31, 360(1)
  01a2ff0  lis 4, 26
  01a2ff4  std 30, 248(1)
  01a2ff8  li 5, 0
  01a2ffc  lwz 30, 120(3)
  01a3000  std 31, 256(1)
  01a3004  addi 4, 4, 12164
  01a3008  ori 31, 3, 0
  01a300c  lbz 3, 83(3)
  01a3010  cmpwi 3, 6
  01a3014  lfs 31, 0(4)
  01a3018  stw 5, 140(1)
  01a301c  stw 5, 136(1)
  01a3020  stw 5, 132(1)
  01a3024  std 29, 240(1)
  01a3028  stw 5, 128(1)
  01a302c  bf 2, 0x1a3060
  01a3030  lis 3, 149
  01a3034  lfs 4, 16(31)
  01a3038  addic 3, 3, 5056
  01a303c  lfs 6, 320(3)
  01a3040  lfs 7, 324(3)
  01a3044  stfs 6, 112(1)
  01a3048  lfs 3, 328(3)
  01a304c  stfs 7, 116(1)
  01a3050  lfs 1, 332(3)
  01a3054  stfs 3, 120(1)
  01a3058  lfs 5, 20(31)
  01a305c  b 0x1a31c8
  01a3060  lis 3, 26
  01a3064  lis 4, 114
  01a3068  addi 29, 3, 12164
  01a306c  lis 6, 114
  01a3070  addic 3, 30, 280
  01a3074  addic 5, 30, 284
  01a3078  lfs 4, 8(29)
  01a307c  lfs 2, -3048(4)
  01a3080  lfs 1, 4(29)
  01a3084  fmuls 2, 2, 4
  01a3088  lfs 3, -3052(6)
  01a308c  fmuls 4, 3, 4
  01a3090  fmr 3, 2
  01a3094  bl 0x109c30
  01a3098  nop
  01a309c  lfs 1, 196(31)
  01a30a0  lfs 3, 192(31)
  01a30a4  lis 3, 151
  01a30a8  fmuls 2, 1, 1
  01a30ac  lfs 4, 200(31)
  01a30b0  addic 4, 3, -25376
  01a30b4  lfs 6, -25376(3)
  01a30b8  lfs 7, 4(4)
  01a30bc  lfs 8, 8(4)
  01a30c0  fmuls 5, 7, 7
  01a30c4  fmadds 2, 3, 3, 2
  01a30c8  fmadds 5, 6, 6, 5
  01a30cc  fmadds 2, 4, 4, 2
  01a30d0  fmadds 4, 8, 8, 5
  01a30d4  fsqrts 2, 2
  01a30d8  lfs 5, 12(29)
  01a30dc  lfs 9, 20(29)
  01a30e0  lfs 10, 16(31)
  01a30e4  lfs 11, 20(31)
  01a30e8  lfs 12, 136(4)
  01a30ec  lfs 13, 16(29)
  01a30f0  lfs 30, 280(30)
  01a30f4  lfs 29, 24(29)
  01a30f8  lfs 28, 128(4)
  01a30fc  lfs 27, 132(4)
  01a3100  lfs 26, 12(4)
  01a3104  fsqrts 0, 4
  01a3108  fmr 4, 5
  01a310c  fmr 5, 9
  01a3110  fadds 13, 12, 13
  01a3114  fdivs 9, 4, 2
  01a3118  fsub 25, 31, 2
  01a311c  fsub 24, 31, 2
  01a3120  fsub 23, 2, 31
  01a3124  fsub 2, 2, 31
  01a3128  fmr 4, 10
  01a312c  fdivs 22, 5, 0
  01a3130  fmr 5, 11
  01a3134  fsub 21, 31, 0
  01a3138  fsub 11, 31, 0
  01a313c  fsub 20, 31, 0
  01a3140  fsub 10, 0, 31
  01a3144  fsub 19, 0, 31
  01a3148  fsub 0, 0, 31
  01a314c  fmuls 1, 1, 9
  01a3150  fmuls 3, 3, 9
  01a3154  fsel 9, 25, 31, 1
  01a3158  fsel 25, 24, 31, 3
  01a315c  fsel 1, 23, 9, 1
  01a3160  fsel 2, 2, 25, 3
  01a3164  fmuls 3, 8, 22
  01a3168  fmuls 7, 7, 22
  01a316c  fmuls 6, 6, 22
  01a3170  fadds 8, 1, 5
  01a3174  fadds 2, 2, 4
  01a3178  fsel 1, 21, 31, 3
  01a317c  fsel 9, 11, 31, 7
  01a3180  fsel 11, 20, 31, 6
  01a3184  fsel 3, 10, 1, 3
  01a3188  fsel 7, 19, 9, 7
  01a318c  fsel 6, 0, 11, 6
  01a3190  fmr 1, 26
  01a3194  fadds 3, 3, 12
  01a3198  fadds 7, 7, 27
  01a319c  fadds 6, 6, 28
  01a31a0  fadds 3, 3, 29
  01a31a4  fsubs 7, 7, 8
  01a31a8  fsubs 6, 6, 2
  01a31ac  fsubs 3, 3, 13
  01a31b0  fmadds 7, 30, 7, 8
  01a31b4  fmadds 6, 30, 6, 2
  01a31b8  fmadds 3, 30, 3, 13
  01a31bc  stfs 7, 116(1)
  01a31c0  stfs 6, 112(1)
  01a31c4  stfs 3, 120(1)
  01a31c8  fsubs 2, 4, 6
  01a31cc  fsubs 8, 5, 7
  01a31d0  lis 3, 115
  01a31d4  lis 6, 26
  01a31d8  addic 3, 3, 22784
  01a31dc  addi 6, 6, 12164
  01a31e0  fabs 9, 2
  01a31e4  fabs 10, 8
  01a31e8  stfs 2, 156(1)
  01a31ec  stfs 8, 160(1)
  01a31f0  stfs 1, 124(1)
  01a31f4  fsubs 2, 9, 10
  01a31f8  stfs 2, 164(1)
  01a31fc  lwz 4, 156(1)
  01a3200  lfs 1, 156(1)
  01a3204  lwz 5, 160(1)
  01a3208  lfs 2, 160(1)
  01a320c  fabs 1, 1
  01a3210  lwz 7, 164(1)
  01a3214  rlwinm 5, 5, 3, 29, 29
  01a3218  lfs 8, 164(1)
  01a321c  fabs 2, 2
  01a3220  rlwimi 5, 7, 2, 30, 30
  01a3224  fsub 11, 8, 31
  01a3228  fsub 8, 8, 31
  01a322c  rlwimi 5, 4, 4, 28, 28
  01a3230  ori 4, 3, 0
  01a3234  rlwimi 4, 5, 2, 26, 28
  01a3238  slwi 5, 5, 2
  01a323c  clrldi 4, 4, 32
  01a3240  fsel 10, 11, 1, 10
  01a3244  lfsx 1, 3, 5
  01a3248  fsel 9, 8, 2, 9
  01a324c  lfs 8, 4(4)
  01a3250  lfs 2, 28(6)
  01a3254  fcmpu 0, 10, 31
  01a3258  bt 1, 0x1a3264
  01a325c  fmr 1, 31
  01a3260  b 0x1a337c
  01a3264  fsubs 11, 9, 10
  01a3268  fadds 9, 9, 10
  01a326c  addic 4, 1, 16
  01a3270  li 8, 2
  01a3274  addic 6, 4, 200
  01a3278  addic 5, 4, 184
  01a327c  mtctr 8
  01a3280  fdivs 9, 11, 9
  01a3284  fmuls 10, 9, 9
  01a3288  stfs 9, 212(1)
  01a328c  stfs 9, 204(1)
  01a3290  stfs 9, 208(1)
  01a3294  stfs 9, 200(1)
  01a3298  lfs 12, 212(1)
  01a329c  lfs 13, 204(1)
  01a32a0  lfs 0, 208(1)
  01a32a4  fmuls 11, 10, 10
  01a32a8  fmuls 13, 13, 10
  01a32ac  fmuls 12, 12, 11
  01a32b0  fmuls 9, 11, 11
  01a32b4  fmuls 11, 0, 11
  01a32b8  stfs 13, 204(1)
  01a32bc  fmuls 10, 12, 10
  01a32c0  stfs 11, 208(1)
  01a32c4  stfs 10, 212(1)
  01a32c8  lfs 10, 184(4)
  01a32cc  fmuls 10, 10, 9
  01a32d0  stfs 10, 200(4)
  01a32d4  lfs 10, 4(5)
  01a32d8  addic 5, 5, 8
  01a32dc  fmuls 10, 10, 9
  01a32e0  addic 4, 4, 8
  01a32e4  stfs 10, 4(6)
  01a32e8  addic 6, 6, 8
  01a32ec  bdnz 0x1a32c8
  01a32f0  li 6, 4
  01a32f4  ori 4, 1, 0
  01a32f8  mtctr 6
  01a32fc  lis 5, 115
  01a3300  addic 6, 4, 200
  01a3304  addic 5, 5, 22752
  01a3308  ori 7, 6, 0
  01a330c  lfs 9, 200(4)
  01a3310  lfs 10, 0(5)
  01a3314  fmuls 9, 9, 10
  01a3318  lfs 10, 4(5)
  01a331c  addic 5, 5, 8
  01a3320  stfs 9, 200(4)
  01a3324  lfs 9, 4(6)
  01a3328  addic 4, 4, 8
  01a332c  fmuls 9, 9, 10
  01a3330  stfs 9, 4(6)
  01a3334  addic 6, 6, 8
  01a3338  bdnz 0x1a330c
  01a333c  ori 4, 1, 0
  01a3340  fmr 9, 31
  01a3344  mtctr 8
  01a3348  lfs 10, 200(4)
  01a334c  fadds 9, 9, 10
  01a3350  lfs 10, 4(7)
  01a3354  addic 4, 4, 16
  01a3358  lfs 11, 8(7)
  01a335c  lfs 12, 12(7)
  01a3360  addic 7, 7, 16
  01a3364  fadds 9, 9, 10
  01a3368  fadds 9, 9, 11
  01a336c  fadds 9, 9, 12
  01a3370  bdnz 0x1a3348
  01a3374  fadds 9, 9, 2
  01a3378  fmadds 1, 9, 1, 8
  01a337c  fsubs 5, 7, 5
  01a3380  fsubs 4, 6, 4
  01a3384  fmuls 5, 5, 5
  01a3388  fmadds 4, 4, 4, 5
  01a338c  lfs 5, 24(31)
  01a3390  stfs 1, 136(1)
  01a3394  fsubs 1, 5, 3
  01a3398  fsqrts 4, 4
  01a339c  stfs 1, 148(1)
  01a33a0  fabs 6, 1
  01a33a4  fabs 5, 4
  01a33a8  stfs 4, 144(1)
  01a33ac  lwz 4, 148(1)
  01a33b0  rlwinm 4, 4, 3, 29, 29
  01a33b4  fsubs 1, 5, 6
  01a33b8  stfs 1, 152(1)
  01a33bc  lwz 5, 144(1)
  01a33c0  lfs 1, 144(1)
  01a33c4  lfs 3, 148(1)
  01a33c8  lfs 4, 280(30)
  01a33cc  fabs 1, 1
  01a33d0  fabs 7, 3
  01a33d4  lwz 6, 152(1)
  01a33d8  lfs 3, 152(1)
  01a33dc  rlwimi 4, 6, 2, 30, 30
  01a33e0  fsub 8, 3, 31
  01a33e4  fsub 9, 3, 31
  01a33e8  rlwimi 4, 5, 4, 28, 28
  01a33ec  ori 5, 3, 0
  01a33f0  rlwimi 5, 4, 2, 26, 28
  01a33f4  slwi 4, 4, 2
  01a33f8  clrldi 5, 5, 32
  01a33fc  fsel 6, 8, 1, 6
  01a3400  lfsx 1, 3, 4
  01a3404  fsel 5, 9, 7, 5
  01a3408  lfs 3, 4(5)
  01a340c  fcmpu 0, 6, 31
  01a3410  bt 1, 0x1a3418
  01a3414  b 0x1a352c
  01a3418  fsubs 7, 5, 6
  01a341c  fadds 5, 5, 6
  01a3420  addic 3, 1, 16
  01a3424  li 6, 2
  01a3428  addic 4, 3, 152
  01a342c  addic 5, 3, 168
  01a3430  mtctr 6
  01a3434  fdivs 5, 7, 5
  01a3438  fmuls 6, 5, 5
  01a343c  stfs 5, 180(1)
  01a3440  stfs 5, 172(1)
  01a3444  stfs 5, 176(1)
  01a3448  stfs 5, 168(1)
  01a344c  lfs 8, 180(1)
  01a3450  lfs 9, 172(1)
  01a3454  lfs 10, 176(1)
  01a3458  fmuls 7, 6, 6
  01a345c  fmuls 9, 9, 6
  01a3460  fmuls 8, 8, 7
  01a3464  fmuls 5, 7, 7
  01a3468  fmuls 7, 10, 7
  01a346c  stfs 9, 172(1)
  01a3470  fmuls 6, 8, 6
  01a3474  stfs 7, 176(1)
  01a3478  stfs 6, 180(1)
  01a347c  lfs 6, 152(3)
  01a3480  fmuls 6, 6, 5
  01a3484  stfs 6, 168(3)
  01a3488  lfs 6, 4(4)
  01a348c  addic 3, 3, 8
  01a3490  addic 4, 4, 8
  01a3494  fmuls 6, 6, 5
  01a3498  stfs 6, 4(5)
  01a349c  addic 5, 5, 8
  01a34a0  bdnz 0x1a347c
  01a34a4  li 5, 4
  01a34a8  ori 3, 1, 0
  01a34ac  mtctr 5
  01a34b0  lis 4, 115
  01a34b4  addic 5, 3, 168
  01a34b8  addic 4, 4, 22752
  01a34bc  ori 7, 5, 0
  01a34c0  lfs 5, 168(3)
  01a34c4  lfs 6, 0(4)
  01a34c8  fmuls 5, 5, 6
  01a34cc  lfs 6, 4(4)
  01a34d0  addic 4, 4, 8
  01a34d4  stfs 5, 168(3)
  01a34d8  lfs 5, 4(5)
  01a34dc  addic 3, 3, 8
  01a34e0  fmuls 5, 5, 6
  01a34e4  stfs 5, 4(5)
  01a34e8  addic 5, 5, 8
  01a34ec  bdnz 0x1a34c0
  01a34f0  ori 3, 1, 0
  01a34f4  mtctr 6
  01a34f8  lfs 5, 168(3)
  01a34fc  lfs 6, 4(7)
  01a3500  fadds 5, 31, 5
  01a3504  lfs 7, 8(7)
  01a3508  lfs 31, 12(7)
  01a350c  addic 3, 3, 16
  01a3510  addic 7, 7, 16
  01a3514  fadds 5, 5, 6
  01a3518  fadds 5, 5, 7
  01a351c  fadds 31, 5, 31
  01a3520  bdnz 0x1a34f8
  01a3524  fadds 31, 31, 2
  01a3528  fmadds 31, 31, 1, 3
  01a352c  lis 3, 26
  01a3530  fneg 1, 31
  01a3534  addi 3, 3, 12164
  01a3538  lis 29, 16256
  01a353c  lfs 2, 4(3)
  01a3540  lfs 3, 32(3)
  01a3544  fsubs 2, 2, 4
  01a3548  lfs 5, 36(3)
  01a354c  addic 3, 1, 112
  01a3550  fmuls 2, 2, 3
  01a3554  fnmsubs 1, 2, 5, 1
  01a3558  stfs 1, 132(1)
  01a355c  bl 0x47b98
  01a3560  nop
  01a3564  addic 3, 1, 128
  01a3568  bl 0x47c08
  01a356c  nop
  01a3570  lwz 4, 280(30)
  01a3574  li 3, 0
  01a3578  srawi 5, 4, 31
  01a357c  srwi 6, 5, 1
  01a3580  xor 4, 6, 4
  01a3584  subc 4, 4, 5
  01a3588  cmpw 4, 29
  01a358c  bt 0, 0x1a35a4
  01a3590  lbz 4, 83(31)
  01a3594  li 3, 0
  01a3598  cmpwi 4, 1
  01a359c  bf 2, 0x1a35a4
  01a35a0  li 3, 1
  01a35a4  ld 0, 384(1)
  01a35a8  mtlr 0
  01a35ac  lfd 19, 264(1)
  01a35b0  lfd 20, 272(1)
  01a35b4  lfd 21, 280(1)
  01a35b8  lfd 22, 288(1)
  01a35bc  lfd 23, 296(1)
  01a35c0  lfd 24, 304(1)
  01a35c4  lfd 25, 312(1)
  01a35c8  lfd 26, 320(1)
  01a35cc  lfd 27, 328(1)
  01a35d0  lfd 28, 336(1)
  01a35d4  lfd 29, 344(1)
  01a35d8  lfd 30, 352(1)
  01a35dc  lfd 31, 360(1)
  01a35e0  ld 29, 240(1)
  01a35e4  ld 30, 248(1)
  01a35e8  ld 31, 256(1)
  01a35ec  addi 1, 1, 368
  01a35f0  blr

M1051_001a35f4:   # 0x1a35f4, 0x64 bytes
  01a35f4  stdu 1, -128(1)
  01a35f8  mflr 0
  01a35fc  std 0, 144(1)
  01a3600  std 31, 120(1)
  01a3604  lwz 31, 120(3)
  01a3608  li 3, 0
  01a360c  li 4, 0
  01a3610  bl 0xb72b0
  01a3614  nop
  01a3618  lwz 3, 236(31)
  01a361c  lis 4, 165
  01a3620  lwz 5, 276(31)
  01a3624  slwi 3, 3, 2
  01a3628  addic 4, 4, 7136
  01a362c  extsw 6, 3
  01a3630  li 3, 2
  01a3634  lwzx 4, 4, 6
  01a3638  stw 5, 0(4)
  01a363c  bl 0x481d0
  01a3640  nop
  01a3644  ld 0, 144(1)
  01a3648  mtlr 0
  01a364c  ld 31, 120(1)
  01a3650  addi 1, 1, 128
  01a3654  blr

M1051_001a3680:   # 0x1a3680, 0x644 bytes
  01a3680  stdu 1, -368(1)
  01a3684  mflr 0
  01a3688  std 0, 384(1)
  01a368c  stfd 19, 264(1)
  01a3690  stfd 20, 272(1)
  01a3694  stfd 21, 280(1)
  01a3698  stfd 22, 288(1)
  01a369c  stfd 23, 296(1)
  01a36a0  stfd 24, 304(1)
  01a36a4  stfd 25, 312(1)
  01a36a8  stfd 26, 320(1)
  01a36ac  stfd 27, 328(1)
  01a36b0  stfd 28, 336(1)
  01a36b4  stfd 29, 344(1)
  01a36b8  stfd 30, 352(1)
  01a36bc  stfd 31, 360(1)
  01a36c0  lis 4, 26
  01a36c4  std 30, 248(1)
  01a36c8  li 5, 0
  01a36cc  lwz 30, 120(3)
  01a36d0  std 31, 256(1)
  01a36d4  addi 4, 4, 13912
  01a36d8  ori 31, 3, 0
  01a36dc  lbz 3, 83(3)
  01a36e0  cmpwi 3, 6
  01a36e4  lfs 31, 0(4)
  01a36e8  stw 5, 140(1)
  01a36ec  stw 5, 136(1)
  01a36f0  stw 5, 132(1)
  01a36f4  std 29, 240(1)
  01a36f8  stw 5, 128(1)
  01a36fc  bf 2, 0x1a3730
  01a3700  lis 3, 149
  01a3704  lfs 4, 16(31)
  01a3708  addic 3, 3, 5056
  01a370c  lfs 6, 320(3)
  01a3710  lfs 7, 324(3)
  01a3714  stfs 6, 112(1)
  01a3718  lfs 3, 328(3)
  01a371c  stfs 7, 116(1)
  01a3720  lfs 1, 332(3)
  01a3724  stfs 3, 120(1)
  01a3728  lfs 5, 20(31)
  01a372c  b 0x1a3898
  01a3730  lis 3, 26
  01a3734  lis 4, 114
  01a3738  addi 29, 3, 13912
  01a373c  lis 6, 114
  01a3740  addic 3, 30, 280
  01a3744  addic 5, 30, 284
  01a3748  lfs 4, 8(29)
  01a374c  lfs 2, -3048(4)
  01a3750  lfs 1, 4(29)
  01a3754  fmuls 2, 2, 4
  01a3758  lfs 3, -3052(6)
  01a375c  fmuls 4, 3, 4
  01a3760  fmr 3, 2
  01a3764  bl 0x109c30
  01a3768  nop
  01a376c  lfs 1, 196(31)
  01a3770  lfs 3, 192(31)
  01a3774  lis 3, 151
  01a3778  fmuls 2, 1, 1
  01a377c  lfs 4, 200(31)
  01a3780  addic 4, 3, -25376
  01a3784  lfs 6, -25376(3)
  01a3788  lfs 7, 4(4)
  01a378c  lfs 8, 8(4)
  01a3790  fmuls 5, 7, 7
  01a3794  fmadds 2, 3, 3, 2
  01a3798  fmadds 5, 6, 6, 5
  01a379c  fmadds 2, 4, 4, 2
  01a37a0  fmadds 4, 8, 8, 5
  01a37a4  fsqrts 2, 2
  01a37a8  lfs 5, 12(29)
  01a37ac  lfs 9, 20(29)
  01a37b0  lfs 10, 16(31)
  01a37b4  lfs 11, 20(31)
  01a37b8  lfs 12, 136(4)
  01a37bc  lfs 13, 16(29)
  01a37c0  lfs 30, 280(30)
  01a37c4  lfs 29, 24(29)
  01a37c8  lfs 28, 128(4)
  01a37cc  lfs 27, 132(4)
  01a37d0  lfs 26, 12(4)
  01a37d4  fsqrts 0, 4
  01a37d8  fmr 4, 5
  01a37dc  fmr 5, 9
  01a37e0  fadds 13, 12, 13
  01a37e4  fdivs 9, 4, 2
  01a37e8  fsub 25, 31, 2
  01a37ec  fsub 24, 31, 2
  01a37f0  fsub 23, 2, 31
  01a37f4  fsub 2, 2, 31
  01a37f8  fmr 4, 10
  01a37fc  fdivs 22, 5, 0
  01a3800  fmr 5, 11
  01a3804  fsub 21, 31, 0
  01a3808  fsub 11, 31, 0
  01a380c  fsub 20, 31, 0
  01a3810  fsub 10, 0, 31
  01a3814  fsub 19, 0, 31
  01a3818  fsub 0, 0, 31
  01a381c  fmuls 1, 1, 9
  01a3820  fmuls 3, 3, 9
  01a3824  fsel 9, 25, 31, 1
  01a3828  fsel 25, 24, 31, 3
  01a382c  fsel 1, 23, 9, 1
  01a3830  fsel 2, 2, 25, 3
  01a3834  fmuls 3, 8, 22
  01a3838  fmuls 7, 7, 22
  01a383c  fmuls 6, 6, 22
  01a3840  fadds 8, 1, 5
  01a3844  fadds 2, 2, 4
  01a3848  fsel 1, 21, 31, 3
  01a384c  fsel 9, 11, 31, 7
  01a3850  fsel 11, 20, 31, 6
  01a3854  fsel 3, 10, 1, 3
  01a3858  fsel 7, 19, 9, 7
  01a385c  fsel 6, 0, 11, 6
  01a3860  fmr 1, 26
  01a3864  fadds 3, 3, 12
  01a3868  fadds 7, 7, 27
  01a386c  fadds 6, 6, 28
  01a3870  fadds 3, 3, 29
  01a3874  fsubs 7, 7, 8
  01a3878  fsubs 6, 6, 2
  01a387c  fsubs 3, 3, 13
  01a3880  fmadds 7, 30, 7, 8
  01a3884  fmadds 6, 30, 6, 2
  01a3888  fmadds 3, 30, 3, 13
  01a388c  stfs 7, 116(1)
  01a3890  stfs 6, 112(1)
  01a3894  stfs 3, 120(1)
  01a3898  fsubs 2, 4, 6
  01a389c  fsubs 8, 5, 7
  01a38a0  lis 3, 115
  01a38a4  lis 6, 26
  01a38a8  addic 3, 3, 22784
  01a38ac  addi 6, 6, 13912
  01a38b0  fabs 9, 2
  01a38b4  fabs 10, 8
  01a38b8  stfs 2, 156(1)
  01a38bc  stfs 8, 160(1)
  01a38c0  stfs 1, 124(1)
  01a38c4  fsubs 2, 9, 10
  01a38c8  stfs 2, 164(1)
  01a38cc  lwz 4, 156(1)
  01a38d0  lfs 1, 156(1)
  01a38d4  lwz 5, 160(1)
  01a38d8  lfs 2, 160(1)
  01a38dc  fabs 1, 1
  01a38e0  lwz 7, 164(1)
  01a38e4  rlwinm 5, 5, 3, 29, 29
  01a38e8  lfs 8, 164(1)
  01a38ec  fabs 2, 2
  01a38f0  rlwimi 5, 7, 2, 30, 30
  01a38f4  fsub 11, 8, 31
  01a38f8  fsub 8, 8, 31
  01a38fc  rlwimi 5, 4, 4, 28, 28
  01a3900  ori 4, 3, 0
  01a3904  rlwimi 4, 5, 2, 26, 28
  01a3908  slwi 5, 5, 2
  01a390c  clrldi 4, 4, 32
  01a3910  fsel 10, 11, 1, 10
  01a3914  lfsx 1, 3, 5
  01a3918  fsel 9, 8, 2, 9
  01a391c  lfs 8, 4(4)
  01a3920  lfs 2, 28(6)
  01a3924  fcmpu 0, 10, 31
  01a3928  bt 1, 0x1a3934
  01a392c  fmr 1, 31
  01a3930  b 0x1a3a4c
  01a3934  fsubs 11, 9, 10
  01a3938  fadds 9, 9, 10
  01a393c  addic 4, 1, 16
  01a3940  li 8, 2
  01a3944  addic 6, 4, 200
  01a3948  addic 5, 4, 184
  01a394c  mtctr 8
  01a3950  fdivs 9, 11, 9
  01a3954  fmuls 10, 9, 9
  01a3958  stfs 9, 212(1)
  01a395c  stfs 9, 204(1)
  01a3960  stfs 9, 208(1)
  01a3964  stfs 9, 200(1)
  01a3968  lfs 12, 212(1)
  01a396c  lfs 13, 204(1)
  01a3970  lfs 0, 208(1)
  01a3974  fmuls 11, 10, 10
  01a3978  fmuls 13, 13, 10
  01a397c  fmuls 12, 12, 11
  01a3980  fmuls 9, 11, 11
  01a3984  fmuls 11, 0, 11
  01a3988  stfs 13, 204(1)
  01a398c  fmuls 10, 12, 10
  01a3990  stfs 11, 208(1)
  01a3994  stfs 10, 212(1)
  01a3998  lfs 10, 184(4)
  01a399c  fmuls 10, 10, 9
  01a39a0  stfs 10, 200(4)
  01a39a4  lfs 10, 4(5)
  01a39a8  addic 5, 5, 8
  01a39ac  fmuls 10, 10, 9
  01a39b0  addic 4, 4, 8
  01a39b4  stfs 10, 4(6)
  01a39b8  addic 6, 6, 8
  01a39bc  bdnz 0x1a3998
  01a39c0  li 6, 4
  01a39c4  ori 4, 1, 0
  01a39c8  mtctr 6
  01a39cc  lis 5, 115
  01a39d0  addic 6, 4, 200
  01a39d4  addic 5, 5, 22752
  01a39d8  ori 7, 6, 0
  01a39dc  lfs 9, 200(4)
  01a39e0  lfs 10, 0(5)
  01a39e4  fmuls 9, 9, 10
  01a39e8  lfs 10, 4(5)
  01a39ec  addic 5, 5, 8
  01a39f0  stfs 9, 200(4)
  01a39f4  lfs 9, 4(6)
  01a39f8  addic 4, 4, 8
  01a39fc  fmuls 9, 9, 10
  01a3a00  stfs 9, 4(6)
  01a3a04  addic 6, 6, 8
  01a3a08  bdnz 0x1a39dc
  01a3a0c  ori 4, 1, 0
  01a3a10  fmr 9, 31
  01a3a14  mtctr 8
  01a3a18  lfs 10, 200(4)
  01a3a1c  fadds 9, 9, 10
  01a3a20  lfs 10, 4(7)
  01a3a24  addic 4, 4, 16
  01a3a28  lfs 11, 8(7)
  01a3a2c  lfs 12, 12(7)
  01a3a30  addic 7, 7, 16
  01a3a34  fadds 9, 9, 10
  01a3a38  fadds 9, 9, 11
  01a3a3c  fadds 9, 9, 12
  01a3a40  bdnz 0x1a3a18
  01a3a44  fadds 9, 9, 2
  01a3a48  fmadds 1, 9, 1, 8
  01a3a4c  fsubs 5, 7, 5
  01a3a50  fsubs 4, 6, 4
  01a3a54  fmuls 5, 5, 5
  01a3a58  fmadds 4, 4, 4, 5
  01a3a5c  lfs 5, 24(31)
  01a3a60  stfs 1, 136(1)
  01a3a64  fsubs 1, 5, 3
  01a3a68  fsqrts 4, 4
  01a3a6c  stfs 1, 148(1)
  01a3a70  fabs 6, 1
  01a3a74  fabs 5, 4
  01a3a78  stfs 4, 144(1)
  01a3a7c  lwz 4, 148(1)
  01a3a80  rlwinm 4, 4, 3, 29, 29
  01a3a84  fsubs 1, 5, 6
  01a3a88  stfs 1, 152(1)
  01a3a8c  lwz 5, 144(1)
  01a3a90  lfs 1, 144(1)
  01a3a94  lfs 3, 148(1)
  01a3a98  lfs 4, 280(30)
  01a3a9c  fabs 1, 1
  01a3aa0  fabs 7, 3
  01a3aa4  lwz 6, 152(1)
  01a3aa8  lfs 3, 152(1)
  01a3aac  rlwimi 4, 6, 2, 30, 30
  01a3ab0  fsub 8, 3, 31
  01a3ab4  fsub 9, 3, 31
  01a3ab8  rlwimi 4, 5, 4, 28, 28
  01a3abc  ori 5, 3, 0
  01a3ac0  rlwimi 5, 4, 2, 26, 28
  01a3ac4  slwi 4, 4, 2
  01a3ac8  clrldi 5, 5, 32
  01a3acc  fsel 6, 8, 1, 6
  01a3ad0  lfsx 1, 3, 4
  01a3ad4  fsel 5, 9, 7, 5
  01a3ad8  lfs 3, 4(5)
  01a3adc  fcmpu 0, 6, 31
  01a3ae0  bt 1, 0x1a3ae8
  01a3ae4  b 0x1a3bfc
  01a3ae8  fsubs 7, 5, 6
  01a3aec  fadds 5, 5, 6
  01a3af0  addic 3, 1, 16
  01a3af4  li 6, 2
  01a3af8  addic 4, 3, 152
  01a3afc  addic 5, 3, 168
  01a3b00  mtctr 6
  01a3b04  fdivs 5, 7, 5
  01a3b08  fmuls 6, 5, 5
  01a3b0c  stfs 5, 180(1)
  01a3b10  stfs 5, 172(1)
  01a3b14  stfs 5, 176(1)
  01a3b18  stfs 5, 168(1)
  01a3b1c  lfs 8, 180(1)
  01a3b20  lfs 9, 172(1)
  01a3b24  lfs 10, 176(1)
  01a3b28  fmuls 7, 6, 6
  01a3b2c  fmuls 9, 9, 6
  01a3b30  fmuls 8, 8, 7
  01a3b34  fmuls 5, 7, 7
  01a3b38  fmuls 7, 10, 7
  01a3b3c  stfs 9, 172(1)
  01a3b40  fmuls 6, 8, 6
  01a3b44  stfs 7, 176(1)
  01a3b48  stfs 6, 180(1)
  01a3b4c  lfs 6, 152(3)
  01a3b50  fmuls 6, 6, 5
  01a3b54  stfs 6, 168(3)
  01a3b58  lfs 6, 4(4)
  01a3b5c  addic 3, 3, 8
  01a3b60  addic 4, 4, 8
  01a3b64  fmuls 6, 6, 5
  01a3b68  stfs 6, 4(5)
  01a3b6c  addic 5, 5, 8
  01a3b70  bdnz 0x1a3b4c
  01a3b74  li 5, 4
  01a3b78  ori 3, 1, 0
  01a3b7c  mtctr 5
  01a3b80  lis 4, 115
  01a3b84  addic 5, 3, 168
  01a3b88  addic 4, 4, 22752
  01a3b8c  ori 7, 5, 0
  01a3b90  lfs 5, 168(3)
  01a3b94  lfs 6, 0(4)
  01a3b98  fmuls 5, 5, 6
  01a3b9c  lfs 6, 4(4)
  01a3ba0  addic 4, 4, 8
  01a3ba4  stfs 5, 168(3)
  01a3ba8  lfs 5, 4(5)
  01a3bac  addic 3, 3, 8
  01a3bb0  fmuls 5, 5, 6
  01a3bb4  stfs 5, 4(5)
  01a3bb8  addic 5, 5, 8
  01a3bbc  bdnz 0x1a3b90
  01a3bc0  ori 3, 1, 0
  01a3bc4  mtctr 6
  01a3bc8  lfs 5, 168(3)
  01a3bcc  lfs 6, 4(7)
  01a3bd0  fadds 5, 31, 5
  01a3bd4  lfs 7, 8(7)
  01a3bd8  lfs 31, 12(7)
  01a3bdc  addic 3, 3, 16
  01a3be0  addic 7, 7, 16
  01a3be4  fadds 5, 5, 6
  01a3be8  fadds 5, 5, 7
  01a3bec  fadds 31, 5, 31
  01a3bf0  bdnz 0x1a3bc8
  01a3bf4  fadds 31, 31, 2
  01a3bf8  fmadds 31, 31, 1, 3
  01a3bfc  lis 3, 26
  01a3c00  fneg 1, 31
  01a3c04  addi 3, 3, 13912
  01a3c08  lis 29, 16256
  01a3c0c  lfs 2, 4(3)
  01a3c10  lfs 3, 32(3)
  01a3c14  fsubs 2, 2, 4
  01a3c18  lfs 5, 36(3)
  01a3c1c  addic 3, 1, 112
  01a3c20  fmuls 2, 2, 3
  01a3c24  fnmsubs 1, 2, 5, 1
  01a3c28  stfs 1, 132(1)
  01a3c2c  bl 0x47b98
  01a3c30  nop
  01a3c34  addic 3, 1, 128
  01a3c38  bl 0x47c08
  01a3c3c  nop
  01a3c40  lwz 4, 280(30)
  01a3c44  li 3, 0
  01a3c48  srawi 5, 4, 31
  01a3c4c  srwi 6, 5, 1
  01a3c50  xor 4, 6, 4
  01a3c54  subc 4, 4, 5
  01a3c58  cmpw 4, 29
  01a3c5c  bt 0, 0x1a3c74
  01a3c60  lbz 4, 83(31)
  01a3c64  li 3, 0
  01a3c68  cmpwi 4, 1
  01a3c6c  bf 2, 0x1a3c74
  01a3c70  li 3, 1
  01a3c74  ld 0, 384(1)
  01a3c78  mtlr 0
  01a3c7c  lfd 19, 264(1)
  01a3c80  lfd 20, 272(1)
  01a3c84  lfd 21, 280(1)
  01a3c88  lfd 22, 288(1)
  01a3c8c  lfd 23, 296(1)
  01a3c90  lfd 24, 304(1)
  01a3c94  lfd 25, 312(1)
  01a3c98  lfd 26, 320(1)
  01a3c9c  lfd 27, 328(1)
  01a3ca0  lfd 28, 336(1)
  01a3ca4  lfd 29, 344(1)
  01a3ca8  lfd 30, 352(1)
  01a3cac  lfd 31, 360(1)
  01a3cb0  ld 29, 240(1)
  01a3cb4  ld 30, 248(1)
  01a3cb8  ld 31, 256(1)
  01a3cbc  addi 1, 1, 368
  01a3cc0  blr

M1051_001a3cc4:   # 0x1a3cc4, 0x64 bytes
  01a3cc4  stdu 1, -128(1)
  01a3cc8  mflr 0
  01a3ccc  std 0, 144(1)
  01a3cd0  std 31, 120(1)
  01a3cd4  lwz 31, 120(3)
  01a3cd8  li 3, 0
  01a3cdc  li 4, 0
  01a3ce0  bl 0xb72b0
  01a3ce4  nop
  01a3ce8  lwz 3, 236(31)
  01a3cec  lis 4, 165
  01a3cf0  lwz 5, 276(31)
  01a3cf4  slwi 3, 3, 2
  01a3cf8  addic 4, 4, 7136
  01a3cfc  extsw 6, 3
  01a3d00  li 3, 2
  01a3d04  lwzx 4, 4, 6
  01a3d08  stw 5, 0(4)
  01a3d0c  bl 0x481d0
  01a3d10  nop
  01a3d14  ld 0, 144(1)
  01a3d18  mtlr 0
  01a3d1c  ld 31, 120(1)
  01a3d20  addi 1, 1, 128
  01a3d24  blr

M1051_001a3d50:   # 0x1a3d50, 0x644 bytes
  01a3d50  stdu 1, -368(1)
  01a3d54  mflr 0
  01a3d58  std 0, 384(1)
  01a3d5c  stfd 18, 256(1)
  01a3d60  stfd 19, 264(1)
  01a3d64  stfd 20, 272(1)
  01a3d68  stfd 21, 280(1)
  01a3d6c  stfd 22, 288(1)
  01a3d70  stfd 23, 296(1)
  01a3d74  stfd 24, 304(1)
  01a3d78  stfd 25, 312(1)
  01a3d7c  stfd 26, 320(1)
  01a3d80  stfd 27, 328(1)
  01a3d84  stfd 28, 336(1)
  01a3d88  stfd 29, 344(1)
  01a3d8c  stfd 30, 352(1)
  01a3d90  stfd 31, 360(1)
  01a3d94  lis 4, 26
  01a3d98  std 30, 240(1)
  01a3d9c  li 5, 0
  01a3da0  lwz 30, 120(3)
  01a3da4  std 31, 248(1)
  01a3da8  addi 4, 4, 15656
  01a3dac  ori 31, 3, 0
  01a3db0  lbz 3, 83(3)
  01a3db4  cmpwi 3, 8
  01a3db8  lfs 31, 0(4)
  01a3dbc  stw 5, 140(1)
  01a3dc0  stw 5, 136(1)
  01a3dc4  stw 5, 132(1)
  01a3dc8  std 29, 232(1)
  01a3dcc  stw 5, 128(1)
  01a3dd0  bf 2, 0x1a3e04
  01a3dd4  lis 3, 149
  01a3dd8  lfs 4, 16(31)
  01a3ddc  addic 3, 3, 5056
  01a3de0  lfs 6, 320(3)
  01a3de4  lfs 7, 324(3)
  01a3de8  stfs 6, 112(1)
  01a3dec  lfs 3, 328(3)
  01a3df0  stfs 7, 116(1)
  01a3df4  lfs 1, 332(3)
  01a3df8  stfs 3, 120(1)
  01a3dfc  lfs 5, 20(31)
  01a3e00  b 0x1a3f64
  01a3e04  lis 3, 26
  01a3e08  lis 4, 114
  01a3e0c  addi 29, 3, 15656
  01a3e10  lis 6, 114
  01a3e14  addic 3, 30, 280
  01a3e18  addic 5, 30, 284
  01a3e1c  lfs 3, 8(29)
  01a3e20  lfs 2, -3048(4)
  01a3e24  lfs 30, 12(29)
  01a3e28  fmuls 2, 2, 3
  01a3e2c  lfs 1, 4(29)
  01a3e30  lfs 4, -3052(6)
  01a3e34  fmuls 4, 4, 30
  01a3e38  fmr 3, 2
  01a3e3c  bl 0x109c30
  01a3e40  nop
  01a3e44  lfs 2, 196(31)
  01a3e48  lis 3, 151
  01a3e4c  lfs 3, 192(31)
  01a3e50  fmuls 1, 2, 2
  01a3e54  addic 4, 3, -25376
  01a3e58  lfs 4, 200(31)
  01a3e5c  lfs 6, -25376(3)
  01a3e60  lfs 7, 4(4)
  01a3e64  lfs 8, 8(4)
  01a3e68  fmuls 5, 7, 7
  01a3e6c  fmadds 1, 3, 3, 1
  01a3e70  fmadds 5, 6, 6, 5
  01a3e74  fmadds 1, 4, 4, 1
  01a3e78  fmadds 4, 8, 8, 5
  01a3e7c  fsqrts 1, 1
  01a3e80  fsqrts 13, 4
  01a3e84  lfs 4, 16(29)
  01a3e88  lfs 5, 20(29)
  01a3e8c  lfs 10, 16(31)
  01a3e90  lfs 11, 20(31)
  01a3e94  lfs 12, 136(4)
  01a3e98  lfs 0, 280(30)
  01a3e9c  lfs 29, 24(29)
  01a3ea0  lfs 28, 128(4)
  01a3ea4  lfs 27, 132(4)
  01a3ea8  lfs 26, 12(4)
  01a3eac  fadds 30, 12, 30
  01a3eb0  fdivs 9, 4, 1
  01a3eb4  fsub 25, 31, 1
  01a3eb8  fsub 24, 31, 1
  01a3ebc  fsub 23, 1, 31
  01a3ec0  fsub 20, 1, 31
  01a3ec4  fmr 1, 26
  01a3ec8  fmr 4, 10
  01a3ecc  fdivs 22, 5, 13
  01a3ed0  fsub 21, 31, 13
  01a3ed4  fmr 5, 11
  01a3ed8  fsub 11, 31, 13
  01a3edc  fsub 19, 31, 13
  01a3ee0  fsub 10, 13, 31
  01a3ee4  fsub 18, 13, 31
  01a3ee8  fsub 13, 13, 31
  01a3eec  fmuls 2, 2, 9
  01a3ef0  fmuls 3, 3, 9
  01a3ef4  fsel 9, 25, 31, 2
  01a3ef8  fsel 26, 24, 31, 3
  01a3efc  fsel 2, 23, 9, 2
  01a3f00  fsel 3, 20, 26, 3
  01a3f04  fmuls 8, 8, 22
  01a3f08  fmuls 7, 7, 22
  01a3f0c  fmuls 6, 6, 22
  01a3f10  fadds 2, 2, 5
  01a3f14  fadds 3, 3, 4
  01a3f18  fsel 9, 21, 31, 8
  01a3f1c  fsel 11, 11, 31, 7
  01a3f20  fsel 26, 19, 31, 6
  01a3f24  fsel 8, 10, 9, 8
  01a3f28  fsel 7, 18, 11, 7
  01a3f2c  fsel 6, 13, 26, 6
  01a3f30  fadds 8, 8, 12
  01a3f34  fadds 7, 7, 27
  01a3f38  fadds 6, 6, 28
  01a3f3c  fadds 8, 8, 29
  01a3f40  fsubs 7, 7, 2
  01a3f44  fsubs 6, 6, 3
  01a3f48  fsubs 8, 8, 30
  01a3f4c  fmadds 7, 0, 7, 2
  01a3f50  fmadds 6, 0, 6, 3
  01a3f54  fmadds 3, 0, 8, 30
  01a3f58  stfs 7, 116(1)
  01a3f5c  stfs 6, 112(1)
  01a3f60  stfs 3, 120(1)
  01a3f64  fsubs 2, 4, 6
  01a3f68  fsubs 8, 5, 7
  01a3f6c  lis 3, 115
  01a3f70  lis 6, 26
  01a3f74  addic 3, 3, 22784
  01a3f78  addi 6, 6, 15656
  01a3f7c  fabs 9, 2
  01a3f80  fabs 10, 8
  01a3f84  stfs 2, 156(1)
  01a3f88  stfs 8, 160(1)
  01a3f8c  stfs 1, 124(1)
  01a3f90  fsubs 2, 9, 10
  01a3f94  stfs 2, 164(1)
  01a3f98  lwz 4, 156(1)
  01a3f9c  lfs 1, 156(1)
  01a3fa0  lwz 5, 160(1)
  01a3fa4  lfs 2, 160(1)
  01a3fa8  fabs 1, 1
  01a3fac  lwz 7, 164(1)
  01a3fb0  rlwinm 5, 5, 3, 29, 29
  01a3fb4  lfs 8, 164(1)
  01a3fb8  fabs 2, 2
  01a3fbc  rlwimi 5, 7, 2, 30, 30
  01a3fc0  fsub 11, 8, 31
  01a3fc4  fsub 8, 8, 31
  01a3fc8  rlwimi 5, 4, 4, 28, 28
  01a3fcc  ori 4, 3, 0
  01a3fd0  rlwimi 4, 5, 2, 26, 28
  01a3fd4  slwi 5, 5, 2
  01a3fd8  clrldi 4, 4, 32
  01a3fdc  fsel 10, 11, 1, 10
  01a3fe0  lfsx 1, 3, 5
  01a3fe4  fsel 9, 8, 2, 9
  01a3fe8  lfs 8, 4(4)
  01a3fec  lfs 2, 28(6)
  01a3ff0  fcmpu 0, 10, 31
  01a3ff4  bt 1, 0x1a4000
  01a3ff8  fmr 1, 31
  01a3ffc  b 0x1a4118
  01a4000  fsubs 11, 9, 10
  01a4004  fadds 9, 9, 10
  01a4008  addic 4, 1, 16
  01a400c  li 8, 2
  01a4010  addic 6, 4, 200
  01a4014  addic 5, 4, 184
  01a4018  mtctr 8
  01a401c  fdivs 9, 11, 9
  01a4020  fmuls 10, 9, 9
  01a4024  stfs 9, 212(1)
  01a4028  stfs 9, 204(1)
  01a402c  stfs 9, 208(1)
  01a4030  stfs 9, 200(1)
  01a4034  lfs 12, 212(1)
  01a4038  lfs 13, 204(1)
  01a403c  lfs 0, 208(1)
  01a4040  fmuls 11, 10, 10
  01a4044  fmuls 13, 13, 10
  01a4048  fmuls 12, 12, 11
  01a404c  fmuls 9, 11, 11
  01a4050  fmuls 11, 0, 11
  01a4054  stfs 13, 204(1)
  01a4058  fmuls 10, 12, 10
  01a405c  stfs 11, 208(1)
  01a4060  stfs 10, 212(1)
  01a4064  lfs 10, 184(4)
  01a4068  fmuls 10, 10, 9
  01a406c  stfs 10, 200(4)
  01a4070  lfs 10, 4(5)
  01a4074  addic 5, 5, 8
  01a4078  fmuls 10, 10, 9
  01a407c  addic 4, 4, 8
  01a4080  stfs 10, 4(6)
  01a4084  addic 6, 6, 8
  01a4088  bdnz 0x1a4064
  01a408c  li 6, 4
  01a4090  ori 4, 1, 0
  01a4094  mtctr 6
  01a4098  lis 5, 115
  01a409c  addic 6, 4, 200
  01a40a0  addic 5, 5, 22752
  01a40a4  ori 7, 6, 0
  01a40a8  lfs 9, 200(4)
  01a40ac  lfs 10, 0(5)
  01a40b0  fmuls 9, 9, 10
  01a40b4  lfs 10, 4(5)
  01a40b8  addic 5, 5, 8
  01a40bc  stfs 9, 200(4)
  01a40c0  lfs 9, 4(6)
  01a40c4  addic 4, 4, 8
  01a40c8  fmuls 9, 9, 10
  01a40cc  stfs 9, 4(6)
  01a40d0  addic 6, 6, 8
  01a40d4  bdnz 0x1a40a8
  01a40d8  ori 4, 1, 0
  01a40dc  fmr 9, 31
  01a40e0  mtctr 8
  01a40e4  lfs 10, 200(4)
  01a40e8  fadds 9, 9, 10
  01a40ec  lfs 10, 4(7)
  01a40f0  addic 4, 4, 16
  01a40f4  lfs 11, 8(7)
  01a40f8  lfs 12, 12(7)
  01a40fc  addic 7, 7, 16
  01a4100  fadds 9, 9, 10
  01a4104  fadds 9, 9, 11
  01a4108  fadds 9, 9, 12
  01a410c  bdnz 0x1a40e4
  01a4110  fadds 9, 9, 2
  01a4114  fmadds 1, 9, 1, 8
  01a4118  fsubs 5, 7, 5
  01a411c  fsubs 4, 6, 4
  01a4120  fmuls 5, 5, 5
  01a4124  fmadds 4, 4, 4, 5
  01a4128  lfs 5, 24(31)
  01a412c  stfs 1, 136(1)
  01a4130  fsubs 1, 5, 3
  01a4134  fsqrts 4, 4
  01a4138  stfs 1, 148(1)
  01a413c  fabs 6, 1
  01a4140  fabs 5, 4
  01a4144  stfs 4, 144(1)
  01a4148  lwz 4, 148(1)
  01a414c  rlwinm 4, 4, 3, 29, 29
  01a4150  fsubs 1, 5, 6
  01a4154  stfs 1, 152(1)
  01a4158  lwz 5, 144(1)
  01a415c  lfs 1, 144(1)
  01a4160  lfs 3, 148(1)
  01a4164  lfs 4, 280(30)
  01a4168  fabs 1, 1
  01a416c  fabs 7, 3
  01a4170  lwz 6, 152(1)
  01a4174  lfs 3, 152(1)
  01a4178  rlwimi 4, 6, 2, 30, 30
  01a417c  fsub 8, 3, 31
  01a4180  fsub 9, 3, 31
  01a4184  rlwimi 4, 5, 4, 28, 28
  01a4188  ori 5, 3, 0
  01a418c  rlwimi 5, 4, 2, 26, 28
  01a4190  slwi 4, 4, 2
  01a4194  clrldi 5, 5, 32
  01a4198  fsel 6, 8, 1, 6
  01a419c  lfsx 1, 3, 4
  01a41a0  fsel 5, 9, 7, 5
  01a41a4  lfs 3, 4(5)
  01a41a8  fcmpu 0, 6, 31
  01a41ac  bt 1, 0x1a41b4
  01a41b0  b 0x1a42c8
  01a41b4  fsubs 7, 5, 6
  01a41b8  fadds 5, 5, 6
  01a41bc  addic 3, 1, 16
  01a41c0  li 7, 2
  01a41c4  addic 4, 3, 152
  01a41c8  addic 5, 3, 168
  01a41cc  mtctr 7
  01a41d0  fdivs 5, 7, 5
  01a41d4  fmuls 6, 5, 5
  01a41d8  stfs 5, 180(1)
  01a41dc  stfs 5, 172(1)
  01a41e0  stfs 5, 176(1)
  01a41e4  stfs 5, 168(1)
  01a41e8  lfs 8, 180(1)
  01a41ec  lfs 9, 172(1)
  01a41f0  lfs 10, 176(1)
  01a41f4  fmuls 7, 6, 6
  01a41f8  fmuls 9, 9, 6
  01a41fc  fmuls 8, 8, 7
  01a4200  fmuls 5, 7, 7
  01a4204  fmuls 7, 10, 7
  01a4208  stfs 9, 172(1)
  01a420c  fmuls 6, 8, 6
  01a4210  stfs 7, 176(1)
  01a4214  stfs 6, 180(1)
  01a4218  lfs 6, 152(3)
  01a421c  fmuls 6, 6, 5
  01a4220  stfs 6, 168(3)
  01a4224  lfs 6, 4(4)
  01a4228  addic 3, 3, 8
  01a422c  addic 4, 4, 8
  01a4230  fmuls 6, 6, 5
  01a4234  stfs 6, 4(5)
  01a4238  addic 5, 5, 8
  01a423c  bdnz 0x1a4218
  01a4240  li 5, 4
  01a4244  ori 3, 1, 0
  01a4248  mtctr 5
  01a424c  lis 4, 115
  01a4250  addic 5, 3, 168
  01a4254  addic 4, 4, 22752
  01a4258  ori 6, 5, 0
  01a425c  lfs 5, 168(3)
  01a4260  lfs 6, 0(4)
  01a4264  fmuls 5, 5, 6
  01a4268  lfs 6, 4(4)
  01a426c  addic 4, 4, 8
  01a4270  stfs 5, 168(3)
  01a4274  lfs 5, 4(5)
  01a4278  addic 3, 3, 8
  01a427c  fmuls 5, 5, 6
  01a4280  stfs 5, 4(5)
  01a4284  addic 5, 5, 8
  01a4288  bdnz 0x1a425c
  01a428c  ori 3, 1, 0
  01a4290  mtctr 7
  01a4294  lfs 5, 168(3)
  01a4298  lfs 6, 4(6)
  01a429c  fadds 5, 31, 5
  01a42a0  lfs 7, 8(6)
  01a42a4  lfs 31, 12(6)
  01a42a8  addic 3, 3, 16
  01a42ac  addic 6, 6, 16
  01a42b0  fadds 5, 5, 6
  01a42b4  fadds 5, 5, 7
  01a42b8  fadds 31, 5, 31
  01a42bc  bdnz 0x1a4294
  01a42c0  fadds 31, 31, 2
  01a42c4  fmadds 31, 31, 1, 3
  01a42c8  lis 3, 26
  01a42cc  fneg 1, 31
  01a42d0  addi 3, 3, 15656
  01a42d4  lis 29, 16256
  01a42d8  lfs 2, 4(3)
  01a42dc  lfs 3, 32(3)
  01a42e0  fsubs 2, 2, 4
  01a42e4  lfs 5, 36(3)
  01a42e8  addic 3, 1, 112
  01a42ec  fmuls 2, 2, 3
  01a42f0  fnmsubs 1, 2, 5, 1
  01a42f4  stfs 1, 132(1)
  01a42f8  bl 0x47b98
  01a42fc  nop
  01a4300  addic 3, 1, 128
  01a4304  bl 0x47c08
  01a4308  nop
  01a430c  lwz 4, 280(30)
  01a4310  li 3, 0
  01a4314  srawi 5, 4, 31
  01a4318  srwi 6, 5, 1
  01a431c  xor 4, 6, 4
  01a4320  subc 4, 4, 5
  01a4324  cmpw 4, 29
  01a4328  bt 0, 0x1a4340
  01a432c  lbz 4, 83(31)
  01a4330  li 3, 0
  01a4334  cmpwi 4, 1
  01a4338  bf 2, 0x1a4340
  01a433c  li 3, 1
  01a4340  ld 0, 384(1)
  01a4344  mtlr 0
  01a4348  lfd 18, 256(1)
  01a434c  lfd 19, 264(1)
  01a4350  lfd 20, 272(1)
  01a4354  lfd 21, 280(1)
  01a4358  lfd 22, 288(1)
  01a435c  lfd 23, 296(1)
  01a4360  lfd 24, 304(1)
  01a4364  lfd 25, 312(1)
  01a4368  lfd 26, 320(1)
  01a436c  lfd 27, 328(1)
  01a4370  lfd 28, 336(1)
  01a4374  lfd 29, 344(1)
  01a4378  lfd 30, 352(1)
  01a437c  lfd 31, 360(1)
  01a4380  ld 29, 232(1)
  01a4384  ld 30, 240(1)
  01a4388  ld 31, 248(1)
  01a438c  addi 1, 1, 368
  01a4390  blr

M1051_001a43a8:   # 0x1a43a8, 0x514 bytes
  01a43a8  stdu 1, -288(1)
  01a43ac  mflr 0
  01a43b0  std 0, 304(1)
  01a43b4  stfd 30, 272(1)
  01a43b8  stfd 31, 280(1)
  01a43bc  std 30, 256(1)
  01a43c0  ori 30, 3, 0
  01a43c4  lis 3, 26
  01a43c8  std 29, 248(1)
  01a43cc  std 28, 240(1)
  01a43d0  lis 4, 165
  01a43d4  addi 29, 3, 17300
  01a43d8  std 31, 264(1)
  01a43dc  li 28, 0
  01a43e0  lwz 31, 120(30)
  01a43e4  li 5, 114
  01a43e8  li 6, 0
  01a43ec  lwz 3, 7128(4)
  01a43f0  lfs 31, 0(29)
  01a43f4  lwz 4, 248(31)
  01a43f8  stw 28, 280(31)
  01a43fc  slwi 4, 4, 7
  01a4400  addc 3, 3, 4
  01a4404  addic 4, 3, 48
  01a4408  addic 7, 3, 112
  01a440c  clrldi 3, 4, 32
  01a4410  clrldi 4, 7, 32
  01a4414  bl 0xa0c38
  01a4418  nop
  01a441c  lfs 1, 196(30)
  01a4420  lfs 2, 192(30)
  01a4424  fmuls 3, 1, 1
  01a4428  lfs 4, 200(30)
  01a442c  lfs 8, 16(30)
  01a4430  lfs 9, 20(30)
  01a4434  stfs 8, 112(1)
  01a4438  lfs 10, 24(30)
  01a443c  stfs 9, 116(1)
  01a4440  lfs 5, 28(30)
  01a4444  fmadds 3, 2, 2, 3
  01a4448  stfs 10, 120(1)
  01a444c  stfs 5, 124(1)
  01a4450  lfs 5, 8(29)
  01a4454  lis 3, 151
  01a4458  lfs 6, 4(29)
  01a445c  addic 3, 3, -25376
  01a4460  fmadds 3, 4, 4, 3
  01a4464  lfs 7, 136(3)
  01a4468  fadds 6, 7, 6
  01a446c  stw 28, 140(1)
  01a4470  fsqrts 3, 3
  01a4474  stw 28, 128(1)
  01a4478  lis 3, 115
  01a447c  addic 3, 3, 22784
  01a4480  fdivs 5, 5, 3
  01a4484  fsub 7, 31, 3
  01a4488  fsub 11, 31, 3
  01a448c  fsub 12, 3, 31
  01a4490  fsub 13, 3, 31
  01a4494  fsub 0, 31, 3
  01a4498  fsub 3, 3, 31
  01a449c  fmuls 1, 1, 5
  01a44a0  fmuls 2, 2, 5
  01a44a4  fmuls 4, 4, 5
  01a44a8  fsel 7, 7, 31, 1
  01a44ac  fsel 11, 11, 31, 2
  01a44b0  fsel 5, 0, 31, 4
  01a44b4  fsel 1, 12, 7, 1
  01a44b8  fsel 7, 13, 11, 2
  01a44bc  fsel 3, 3, 5, 4
  01a44c0  fadds 2, 9, 1
  01a44c4  fadds 1, 8, 7
  01a44c8  fadds 3, 6, 3
  01a44cc  fsubs 7, 9, 2
  01a44d0  fsubs 11, 8, 1
  01a44d4  fabs 4, 7
  01a44d8  fabs 12, 11
  01a44dc  stfs 11, 156(1)
  01a44e0  stfs 7, 160(1)
  01a44e4  stfs 1, 112(1)
  01a44e8  stfs 2, 116(1)
  01a44ec  fsubs 5, 12, 4
  01a44f0  stfs 5, 164(1)
  01a44f4  lwz 4, 156(1)
  01a44f8  lfs 5, 156(1)
  01a44fc  stfs 3, 120(1)
  01a4500  fabs 11, 5
  01a4504  lwz 5, 160(1)
  01a4508  lfs 5, 160(1)
  01a450c  lfs 7, 12(29)
  01a4510  fabs 6, 5
  01a4514  rlwinm 5, 5, 3, 29, 29
  01a4518  lwz 6, 164(1)
  01a451c  lfs 5, 164(1)
  01a4520  rlwimi 5, 6, 2, 30, 30
  01a4524  fsub 13, 5, 31
  01a4528  fsub 0, 5, 31
  01a452c  rlwimi 5, 4, 4, 28, 28
  01a4530  ori 4, 3, 0
  01a4534  rlwimi 4, 5, 2, 26, 28
  01a4538  slwi 5, 5, 2
  01a453c  clrldi 4, 4, 32
  01a4540  fsel 11, 13, 11, 4
  01a4544  lfsx 4, 3, 5
  01a4548  lfs 5, 4(4)
  01a454c  fsel 6, 0, 6, 12
  01a4550  fcmpu 0, 11, 31
  01a4554  bt 1, 0x1a4560
  01a4558  fmr 4, 31
  01a455c  b 0x1a4678
  01a4560  fsubs 12, 6, 11
  01a4564  fadds 6, 6, 11
  01a4568  addic 4, 1, 16
  01a456c  li 7, 2
  01a4570  addic 5, 4, 184
  01a4574  addic 6, 4, 200
  01a4578  mtctr 7
  01a457c  fdivs 6, 12, 6
  01a4580  fmuls 11, 6, 6
  01a4584  stfs 6, 212(1)
  01a4588  stfs 6, 204(1)
  01a458c  stfs 6, 208(1)
  01a4590  stfs 6, 200(1)
  01a4594  lfs 13, 212(1)
  01a4598  lfs 0, 204(1)
  01a459c  lfs 30, 208(1)
  01a45a0  fmuls 12, 11, 11
  01a45a4  fmuls 0, 0, 11
  01a45a8  fmuls 13, 13, 12
  01a45ac  fmuls 6, 12, 12
  01a45b0  fmuls 12, 30, 12
  01a45b4  stfs 0, 204(1)
  01a45b8  fmuls 11, 13, 11
  01a45bc  stfs 12, 208(1)
  01a45c0  stfs 11, 212(1)
  01a45c4  lfs 11, 184(4)
  01a45c8  fmuls 11, 11, 6
  01a45cc  stfs 11, 200(4)
  01a45d0  lfs 11, 4(5)
  01a45d4  addic 4, 4, 8
  01a45d8  addic 5, 5, 8
  01a45dc  fmuls 11, 11, 6
  01a45e0  stfs 11, 4(6)
  01a45e4  addic 6, 6, 8
  01a45e8  bdnz 0x1a45c4
  01a45ec  li 6, 4
  01a45f0  ori 4, 1, 0
  01a45f4  mtctr 6
  01a45f8  lis 5, 115
  01a45fc  addic 6, 4, 200
  01a4600  addic 5, 5, 22752
  01a4604  ori 8, 6, 0
  01a4608  lfs 6, 200(4)
  01a460c  lfs 11, 0(5)
  01a4610  fmuls 6, 6, 11
  01a4614  lfs 11, 4(5)
  01a4618  addic 5, 5, 8
  01a461c  stfs 6, 200(4)
  01a4620  lfs 6, 4(6)
  01a4624  addic 4, 4, 8
  01a4628  fmuls 6, 6, 11
  01a462c  stfs 6, 4(6)
  01a4630  addic 6, 6, 8
  01a4634  bdnz 0x1a4608
  01a4638  fmr 6, 31
  01a463c  ori 4, 1, 0
  01a4640  mtctr 7
  01a4644  lfs 11, 200(4)
  01a4648  fadds 6, 6, 11
  01a464c  addic 4, 4, 16
  01a4650  lfs 11, 4(8)
  01a4654  lfs 12, 8(8)
  01a4658  lfs 13, 12(8)
  01a465c  addic 8, 8, 16
  01a4660  fadds 6, 6, 11
  01a4664  fadds 6, 6, 12
  01a4668  fadds 6, 6, 13
  01a466c  bdnz 0x1a4644
  01a4670  fadds 6, 6, 7
  01a4674  fmadds 4, 6, 4, 5
  01a4678  fsubs 2, 2, 9
  01a467c  fsubs 1, 1, 8
  01a4680  stfs 4, 136(1)
  01a4684  fmuls 2, 2, 2
  01a4688  fmadds 1, 1, 1, 2
  01a468c  fsubs 2, 10, 3
  01a4690  fsqrts 1, 1
  01a4694  stfs 2, 148(1)
  01a4698  fabs 4, 2
  01a469c  fabs 3, 1
  01a46a0  stfs 1, 144(1)
  01a46a4  lwz 4, 148(1)
  01a46a8  rlwinm 4, 4, 3, 29, 29
  01a46ac  fsubs 1, 3, 4
  01a46b0  stfs 1, 152(1)
  01a46b4  lwz 5, 144(1)
  01a46b8  lfs 1, 144(1)
  01a46bc  lfs 2, 148(1)
  01a46c0  lwz 6, 152(1)
  01a46c4  lfs 5, 152(1)
  01a46c8  fabs 1, 1
  01a46cc  rlwimi 4, 6, 2, 30, 30
  01a46d0  fsub 6, 5, 31
  01a46d4  fabs 2, 2
  01a46d8  fsub 5, 5, 31
  01a46dc  rlwimi 4, 5, 4, 28, 28
  01a46e0  ori 5, 3, 0
  01a46e4  rlwimi 5, 4, 2, 26, 28
  01a46e8  slwi 4, 4, 2
  01a46ec  clrldi 5, 5, 32
  01a46f0  fsel 4, 6, 1, 4
  01a46f4  lfsx 1, 3, 4
  01a46f8  fsel 3, 5, 2, 3
  01a46fc  lfs 2, 4(5)
  01a4700  fcmpu 0, 4, 31
  01a4704  bt 1, 0x1a470c
  01a4708  b 0x1a4820
  01a470c  fsubs 5, 3, 4
  01a4710  fadds 3, 3, 4
  01a4714  addic 3, 1, 16
  01a4718  li 6, 2
  01a471c  addic 5, 3, 168
  01a4720  addic 4, 3, 152
  01a4724  mtctr 6
  01a4728  fdivs 3, 5, 3
  01a472c  fmuls 4, 3, 3
  01a4730  stfs 3, 180(1)
  01a4734  stfs 3, 172(1)
  01a4738  stfs 3, 176(1)
  01a473c  stfs 3, 168(1)
  01a4740  lfs 6, 180(1)
  01a4744  lfs 8, 172(1)
  01a4748  lfs 9, 176(1)
  01a474c  fmuls 5, 4, 4
  01a4750  fmuls 8, 8, 4
  01a4754  fmuls 6, 6, 5
  01a4758  fmuls 3, 5, 5
  01a475c  fmuls 5, 9, 5
  01a4760  stfs 8, 172(1)
  01a4764  fmuls 4, 6, 4
  01a4768  stfs 5, 176(1)
  01a476c  stfs 4, 180(1)
  01a4770  lfs 4, 152(3)
  01a4774  fmuls 4, 4, 3
  01a4778  stfs 4, 168(3)
  01a477c  lfs 4, 4(4)
  01a4780  addic 4, 4, 8
  01a4784  fmuls 4, 4, 3
  01a4788  addic 3, 3, 8
  01a478c  stfs 4, 4(5)
  01a4790  addic 5, 5, 8
  01a4794  bdnz 0x1a4770
  01a4798  li 5, 4
  01a479c  ori 3, 1, 0
  01a47a0  mtctr 5
  01a47a4  lis 4, 115
  01a47a8  addic 5, 3, 168
  01a47ac  addic 4, 4, 22752
  01a47b0  ori 7, 5, 0
  01a47b4  lfs 3, 168(3)
  01a47b8  lfs 4, 0(4)
  01a47bc  fmuls 3, 3, 4
  01a47c0  lfs 4, 4(4)
  01a47c4  addic 4, 4, 8
  01a47c8  stfs 3, 168(3)
  01a47cc  lfs 3, 4(5)
  01a47d0  addic 3, 3, 8
  01a47d4  fmuls 3, 3, 4
  01a47d8  stfs 3, 4(5)
  01a47dc  addic 5, 5, 8
  01a47e0  bdnz 0x1a47b4
  01a47e4  ori 3, 1, 0
  01a47e8  mtctr 6
  01a47ec  lfs 3, 168(3)
  01a47f0  lfs 4, 4(7)
  01a47f4  fadds 3, 31, 3
  01a47f8  lfs 5, 8(7)
  01a47fc  addic 3, 3, 16
  01a4800  lfs 31, 12(7)
  01a4804  addic 7, 7, 16
  01a4808  fadds 3, 3, 4
  01a480c  fadds 3, 3, 5
  01a4810  fadds 31, 3, 31
  01a4814  bdnz 0x1a47ec
  01a4818  fadds 31, 31, 7
  01a481c  fmadds 31, 31, 1, 2
  01a4820  fneg 1, 31
  01a4824  lis 3, 26
  01a4828  addic 30, 1, 112
  01a482c  addi 3, 3, 17300
  01a4830  addic 29, 1, 128
  01a4834  li 5, 1
  01a4838  li 6, 0
  01a483c  ori 4, 29, 0
  01a4840  lfs 2, 16(3)
  01a4844  li 7, 0
  01a4848  ori 3, 30, 0
  01a484c  fsubs 1, 1, 2
  01a4850  stfs 1, 132(1)
  01a4854  bl 0x47f74
  01a4858  nop
  01a485c  ori 3, 30, 0
  01a4860  bl 0x47b98
  01a4864  nop
  01a4868  ori 3, 29, 0
  01a486c  bl 0x47c08
  01a4870  nop
  01a4874  lwz 3, 236(31)
  01a4878  lis 4, 165
  01a487c  slwi 3, 3, 2
  01a4880  addic 4, 4, 7136
  01a4884  extsw 3, 3
  01a4888  li 5, 0
  01a488c  lwzx 3, 4, 3
  01a4890  stw 5, 0(3)
  01a4894  ld 0, 304(1)
  01a4898  mtlr 0
  01a489c  lfd 30, 272(1)
  01a48a0  lfd 31, 280(1)
  01a48a4  ld 28, 240(1)
  01a48a8  ld 29, 248(1)
  01a48ac  ld 30, 256(1)
  01a48b0  ld 31, 264(1)
  01a48b4  addi 1, 1, 288
  01a48b8  blr

M1051_001a48d0:   # 0x1a48d0, 0x514 bytes
  01a48d0  stdu 1, -288(1)
  01a48d4  mflr 0
  01a48d8  std 0, 304(1)
  01a48dc  stfd 30, 272(1)
  01a48e0  stfd 31, 280(1)
  01a48e4  std 30, 256(1)
  01a48e8  ori 30, 3, 0
  01a48ec  lis 3, 26
  01a48f0  std 29, 248(1)
  01a48f4  std 28, 240(1)
  01a48f8  lis 4, 165
  01a48fc  addi 29, 3, 18620
  01a4900  std 31, 264(1)
  01a4904  li 28, 0
  01a4908  lwz 31, 120(30)
  01a490c  li 5, 114
  01a4910  li 6, 0
  01a4914  lwz 3, 7128(4)
  01a4918  lfs 31, 0(29)
  01a491c  lwz 4, 248(31)
  01a4920  stw 28, 280(31)
  01a4924  slwi 4, 4, 7
  01a4928  addc 3, 3, 4
  01a492c  addic 4, 3, 48
  01a4930  addic 7, 3, 112
  01a4934  clrldi 3, 4, 32
  01a4938  clrldi 4, 7, 32
  01a493c  bl 0xa0c38
  01a4940  nop
  01a4944  lfs 1, 196(30)
  01a4948  lfs 2, 192(30)
  01a494c  fmuls 3, 1, 1
  01a4950  lfs 4, 200(30)
  01a4954  lfs 8, 16(30)
  01a4958  lfs 9, 20(30)
  01a495c  stfs 8, 112(1)
  01a4960  lfs 10, 24(30)
  01a4964  stfs 9, 116(1)
  01a4968  lfs 5, 28(30)
  01a496c  fmadds 3, 2, 2, 3
  01a4970  stfs 10, 120(1)
  01a4974  stfs 5, 124(1)
  01a4978  lfs 5, 8(29)
  01a497c  lis 3, 151
  01a4980  lfs 6, 4(29)
  01a4984  addic 3, 3, -25376
  01a4988  fmadds 3, 4, 4, 3
  01a498c  lfs 7, 136(3)
  01a4990  fadds 6, 7, 6
  01a4994  stw 28, 140(1)
  01a4998  fsqrts 3, 3
  01a499c  stw 28, 128(1)
  01a49a0  lis 3, 115
  01a49a4  addic 3, 3, 22784
  01a49a8  fdivs 5, 5, 3
  01a49ac  fsub 7, 31, 3
  01a49b0  fsub 11, 31, 3
  01a49b4  fsub 12, 3, 31
  01a49b8  fsub 13, 3, 31
  01a49bc  fsub 0, 31, 3
  01a49c0  fsub 3, 3, 31
  01a49c4  fmuls 1, 1, 5
  01a49c8  fmuls 2, 2, 5
  01a49cc  fmuls 4, 4, 5
  01a49d0  fsel 7, 7, 31, 1
  01a49d4  fsel 11, 11, 31, 2
  01a49d8  fsel 5, 0, 31, 4
  01a49dc  fsel 1, 12, 7, 1
  01a49e0  fsel 7, 13, 11, 2
  01a49e4  fsel 3, 3, 5, 4
  01a49e8  fadds 2, 9, 1
  01a49ec  fadds 1, 8, 7
  01a49f0  fadds 3, 6, 3
  01a49f4  fsubs 7, 9, 2
  01a49f8  fsubs 11, 8, 1
  01a49fc  fabs 4, 7
  01a4a00  fabs 12, 11
  01a4a04  stfs 11, 156(1)
  01a4a08  stfs 7, 160(1)
  01a4a0c  stfs 1, 112(1)
  01a4a10  stfs 2, 116(1)
  01a4a14  fsubs 5, 12, 4
  01a4a18  stfs 5, 164(1)
  01a4a1c  lwz 4, 156(1)
  01a4a20  lfs 5, 156(1)
  01a4a24  stfs 3, 120(1)
  01a4a28  fabs 11, 5
  01a4a2c  lwz 5, 160(1)
  01a4a30  lfs 5, 160(1)
  01a4a34  lfs 7, 12(29)
  01a4a38  fabs 6, 5
  01a4a3c  rlwinm 5, 5, 3, 29, 29
  01a4a40  lwz 6, 164(1)
  01a4a44  lfs 5, 164(1)
  01a4a48  rlwimi 5, 6, 2, 30, 30
  01a4a4c  fsub 13, 5, 31
  01a4a50  fsub 0, 5, 31
  01a4a54  rlwimi 5, 4, 4, 28, 28
  01a4a58  ori 4, 3, 0
  01a4a5c  rlwimi 4, 5, 2, 26, 28
  01a4a60  slwi 5, 5, 2
  01a4a64  clrldi 4, 4, 32
  01a4a68  fsel 11, 13, 11, 4
  01a4a6c  lfsx 4, 3, 5
  01a4a70  lfs 5, 4(4)
  01a4a74  fsel 6, 0, 6, 12
  01a4a78  fcmpu 0, 11, 31
  01a4a7c  bt 1, 0x1a4a88
  01a4a80  fmr 4, 31
  01a4a84  b 0x1a4ba0
  01a4a88  fsubs 12, 6, 11
  01a4a8c  fadds 6, 6, 11
  01a4a90  addic 4, 1, 16
  01a4a94  li 8, 2
  01a4a98  addic 5, 4, 184
  01a4a9c  addic 6, 4, 200
  01a4aa0  mtctr 8
  01a4aa4  fdivs 6, 12, 6
  01a4aa8  fmuls 11, 6, 6
  01a4aac  stfs 6, 212(1)
  01a4ab0  stfs 6, 204(1)
  01a4ab4  stfs 6, 208(1)
  01a4ab8  stfs 6, 200(1)
  01a4abc  lfs 13, 212(1)
  01a4ac0  lfs 0, 204(1)
  01a4ac4  lfs 30, 208(1)
  01a4ac8  fmuls 12, 11, 11
  01a4acc  fmuls 0, 0, 11
  01a4ad0  fmuls 13, 13, 12
  01a4ad4  fmuls 6, 12, 12
  01a4ad8  fmuls 12, 30, 12
  01a4adc  stfs 0, 204(1)
  01a4ae0  fmuls 11, 13, 11
  01a4ae4  stfs 12, 208(1)
  01a4ae8  stfs 11, 212(1)
  01a4aec  lfs 11, 184(4)
  01a4af0  fmuls 11, 11, 6
  01a4af4  stfs 11, 200(4)
  01a4af8  lfs 11, 4(5)
  01a4afc  addic 4, 4, 8
  01a4b00  addic 5, 5, 8
  01a4b04  fmuls 11, 11, 6
  01a4b08  stfs 11, 4(6)
  01a4b0c  addic 6, 6, 8
  01a4b10  bdnz 0x1a4aec
  01a4b14  li 6, 4
  01a4b18  ori 4, 1, 0
  01a4b1c  mtctr 6
  01a4b20  lis 5, 115
  01a4b24  addic 6, 4, 200
  01a4b28  addic 5, 5, 22752
  01a4b2c  ori 7, 6, 0
  01a4b30  lfs 6, 200(4)
  01a4b34  lfs 11, 0(5)
  01a4b38  fmuls 6, 6, 11
  01a4b3c  lfs 11, 4(5)
  01a4b40  addic 5, 5, 8
  01a4b44  stfs 6, 200(4)
  01a4b48  lfs 6, 4(6)
  01a4b4c  addic 4, 4, 8
  01a4b50  fmuls 6, 6, 11
  01a4b54  stfs 6, 4(6)
  01a4b58  addic 6, 6, 8
  01a4b5c  bdnz 0x1a4b30
  01a4b60  fmr 6, 31
  01a4b64  ori 4, 1, 0
  01a4b68  mtctr 8
  01a4b6c  lfs 11, 200(4)
  01a4b70  fadds 6, 6, 11
  01a4b74  addic 4, 4, 16
  01a4b78  lfs 11, 4(7)
  01a4b7c  lfs 12, 8(7)
  01a4b80  lfs 13, 12(7)
  01a4b84  addic 7, 7, 16
  01a4b88  fadds 6, 6, 11
  01a4b8c  fadds 6, 6, 12
  01a4b90  fadds 6, 6, 13
  01a4b94  bdnz 0x1a4b6c
  01a4b98  fadds 6, 6, 7
  01a4b9c  fmadds 4, 6, 4, 5
  01a4ba0  fsubs 2, 2, 9
  01a4ba4  fsubs 1, 1, 8
  01a4ba8  stfs 4, 136(1)
  01a4bac  fmuls 2, 2, 2
  01a4bb0  fmadds 1, 1, 1, 2
  01a4bb4  fsubs 2, 10, 3
  01a4bb8  fsqrts 1, 1
  01a4bbc  stfs 2, 148(1)
  01a4bc0  fabs 4, 2
  01a4bc4  fabs 3, 1
  01a4bc8  stfs 1, 144(1)
  01a4bcc  lwz 4, 148(1)
  01a4bd0  rlwinm 4, 4, 3, 29, 29
  01a4bd4  fsubs 1, 3, 4
  01a4bd8  stfs 1, 152(1)
  01a4bdc  lwz 5, 144(1)
  01a4be0  lfs 1, 144(1)
  01a4be4  lfs 2, 148(1)
  01a4be8  lwz 6, 152(1)
  01a4bec  lfs 5, 152(1)
  01a4bf0  fabs 1, 1
  01a4bf4  rlwimi 4, 6, 2, 30, 30
  01a4bf8  fsub 6, 5, 31
  01a4bfc  fabs 2, 2
  01a4c00  fsub 5, 5, 31
  01a4c04  rlwimi 4, 5, 4, 28, 28
  01a4c08  ori 5, 3, 0
  01a4c0c  rlwimi 5, 4, 2, 26, 28
  01a4c10  slwi 4, 4, 2
  01a4c14  clrldi 5, 5, 32
  01a4c18  fsel 4, 6, 1, 4
  01a4c1c  lfsx 1, 3, 4
  01a4c20  fsel 3, 5, 2, 3
  01a4c24  lfs 2, 4(5)
  01a4c28  fcmpu 0, 4, 31
  01a4c2c  bt 1, 0x1a4c34
  01a4c30  b 0x1a4d48
  01a4c34  fsubs 5, 3, 4
  01a4c38  fadds 3, 3, 4
  01a4c3c  addic 3, 1, 16
  01a4c40  li 7, 2
  01a4c44  addic 5, 3, 168
  01a4c48  addic 4, 3, 152
  01a4c4c  mtctr 7
  01a4c50  fdivs 3, 5, 3
  01a4c54  fmuls 4, 3, 3
  01a4c58  stfs 3, 180(1)
  01a4c5c  stfs 3, 172(1)
  01a4c60  stfs 3, 176(1)
  01a4c64  stfs 3, 168(1)
  01a4c68  lfs 6, 180(1)
  01a4c6c  lfs 8, 172(1)
  01a4c70  lfs 9, 176(1)
  01a4c74  fmuls 5, 4, 4
  01a4c78  fmuls 8, 8, 4
  01a4c7c  fmuls 6, 6, 5
  01a4c80  fmuls 3, 5, 5
  01a4c84  fmuls 5, 9, 5
  01a4c88  stfs 8, 172(1)
  01a4c8c  fmuls 4, 6, 4
  01a4c90  stfs 5, 176(1)
  01a4c94  stfs 4, 180(1)
  01a4c98  lfs 4, 152(3)
  01a4c9c  fmuls 4, 4, 3
  01a4ca0  stfs 4, 168(3)
  01a4ca4  lfs 4, 4(4)
  01a4ca8  addic 4, 4, 8
  01a4cac  fmuls 4, 4, 3
  01a4cb0  addic 3, 3, 8
  01a4cb4  stfs 4, 4(5)
  01a4cb8  addic 5, 5, 8
  01a4cbc  bdnz 0x1a4c98
  01a4cc0  li 5, 4
  01a4cc4  ori 3, 1, 0
  01a4cc8  mtctr 5
  01a4ccc  lis 4, 115
  01a4cd0  addic 5, 3, 168
  01a4cd4  addic 4, 4, 22752
  01a4cd8  ori 6, 5, 0
  01a4cdc  lfs 3, 168(3)
  01a4ce0  lfs 4, 0(4)
  01a4ce4  fmuls 3, 3, 4
  01a4ce8  lfs 4, 4(4)
  01a4cec  addic 4, 4, 8
  01a4cf0  stfs 3, 168(3)
  01a4cf4  lfs 3, 4(5)
  01a4cf8  addic 3, 3, 8
  01a4cfc  fmuls 3, 3, 4
  01a4d00  stfs 3, 4(5)
  01a4d04  addic 5, 5, 8
  01a4d08  bdnz 0x1a4cdc
  01a4d0c  ori 3, 1, 0
  01a4d10  mtctr 7
  01a4d14  lfs 3, 168(3)
  01a4d18  lfs 4, 4(6)
  01a4d1c  fadds 3, 31, 3
  01a4d20  lfs 5, 8(6)
  01a4d24  addic 3, 3, 16
  01a4d28  lfs 31, 12(6)
  01a4d2c  addic 6, 6, 16
  01a4d30  fadds 3, 3, 4
  01a4d34  fadds 3, 3, 5
  01a4d38  fadds 31, 3, 31
  01a4d3c  bdnz 0x1a4d14
  01a4d40  fadds 31, 31, 7
  01a4d44  fmadds 31, 31, 1, 2
  01a4d48  fneg 1, 31
  01a4d4c  lis 3, 26
  01a4d50  addic 30, 1, 112
  01a4d54  addi 3, 3, 18620
  01a4d58  addic 29, 1, 128
  01a4d5c  li 5, 1
  01a4d60  li 6, 0
  01a4d64  ori 4, 29, 0
  01a4d68  lfs 2, 16(3)
  01a4d6c  li 7, 0
  01a4d70  ori 3, 30, 0
  01a4d74  fsubs 1, 1, 2
  01a4d78  stfs 1, 132(1)
  01a4d7c  bl 0x47f74
  01a4d80  nop
  01a4d84  ori 3, 30, 0
  01a4d88  bl 0x47b98
  01a4d8c  nop
  01a4d90  ori 3, 29, 0
  01a4d94  bl 0x47c08
  01a4d98  nop
  01a4d9c  lwz 3, 236(31)
  01a4da0  lis 4, 165
  01a4da4  slwi 3, 3, 2
  01a4da8  addic 4, 4, 7136
  01a4dac  extsw 3, 3
  01a4db0  li 5, 0
  01a4db4  lwzx 3, 4, 3
  01a4db8  stw 5, 0(3)
  01a4dbc  ld 0, 304(1)
  01a4dc0  mtlr 0
  01a4dc4  lfd 30, 272(1)
  01a4dc8  lfd 31, 280(1)
  01a4dcc  ld 28, 240(1)
  01a4dd0  ld 29, 248(1)
  01a4dd4  ld 30, 256(1)
  01a4dd8  ld 31, 264(1)
  01a4ddc  addi 1, 1, 288
  01a4de0  blr

M1051_001a4df8:   # 0x1a4df8, 0x514 bytes
  01a4df8  stdu 1, -288(1)
  01a4dfc  mflr 0
  01a4e00  std 0, 304(1)
  01a4e04  stfd 30, 272(1)
  01a4e08  stfd 31, 280(1)
  01a4e0c  std 30, 256(1)
  01a4e10  ori 30, 3, 0
  01a4e14  lis 3, 26
  01a4e18  std 29, 248(1)
  01a4e1c  std 28, 240(1)
  01a4e20  lis 4, 165
  01a4e24  addi 29, 3, 19940
  01a4e28  std 31, 264(1)
  01a4e2c  li 28, 0
  01a4e30  lwz 31, 120(30)
  01a4e34  li 5, 114
  01a4e38  li 6, 0
  01a4e3c  lwz 3, 7128(4)
  01a4e40  lfs 31, 0(29)
  01a4e44  lwz 4, 248(31)
  01a4e48  stw 28, 280(31)
  01a4e4c  slwi 4, 4, 7
  01a4e50  addc 3, 3, 4
  01a4e54  addic 4, 3, 48
  01a4e58  addic 7, 3, 112
  01a4e5c  clrldi 3, 4, 32
  01a4e60  clrldi 4, 7, 32
  01a4e64  bl 0xa0c38
  01a4e68  nop
  01a4e6c  lfs 1, 196(30)
  01a4e70  lfs 2, 192(30)
  01a4e74  fmuls 3, 1, 1
  01a4e78  lfs 4, 200(30)
  01a4e7c  lfs 8, 16(30)
  01a4e80  lfs 9, 20(30)
  01a4e84  stfs 8, 112(1)
  01a4e88  lfs 10, 24(30)
  01a4e8c  stfs 9, 116(1)
  01a4e90  lfs 5, 28(30)
  01a4e94  fmadds 3, 2, 2, 3
  01a4e98  stfs 10, 120(1)
  01a4e9c  stfs 5, 124(1)
  01a4ea0  lfs 5, 8(29)
  01a4ea4  lis 3, 151
  01a4ea8  lfs 6, 4(29)
  01a4eac  addic 3, 3, -25376
  01a4eb0  fmadds 3, 4, 4, 3
  01a4eb4  lfs 7, 136(3)
  01a4eb8  fadds 6, 7, 6
  01a4ebc  stw 28, 140(1)
  01a4ec0  fsqrts 3, 3
  01a4ec4  stw 28, 128(1)
  01a4ec8  lis 3, 115
  01a4ecc  addic 3, 3, 22784
  01a4ed0  fdivs 5, 5, 3
  01a4ed4  fsub 7, 31, 3
  01a4ed8  fsub 11, 31, 3
  01a4edc  fsub 12, 3, 31
  01a4ee0  fsub 13, 3, 31
  01a4ee4  fsub 0, 31, 3
  01a4ee8  fsub 3, 3, 31
  01a4eec  fmuls 1, 1, 5
  01a4ef0  fmuls 2, 2, 5
  01a4ef4  fmuls 4, 4, 5
  01a4ef8  fsel 7, 7, 31, 1
  01a4efc  fsel 11, 11, 31, 2
  01a4f00  fsel 5, 0, 31, 4
  01a4f04  fsel 1, 12, 7, 1
  01a4f08  fsel 7, 13, 11, 2
  01a4f0c  fsel 3, 3, 5, 4
  01a4f10  fadds 2, 9, 1
  01a4f14  fadds 1, 8, 7
  01a4f18  fadds 3, 6, 3
  01a4f1c  fsubs 7, 9, 2
  01a4f20  fsubs 11, 8, 1
  01a4f24  fabs 4, 7
  01a4f28  fabs 12, 11
  01a4f2c  stfs 11, 156(1)
  01a4f30  stfs 7, 160(1)
  01a4f34  stfs 1, 112(1)
  01a4f38  stfs 2, 116(1)
  01a4f3c  fsubs 5, 12, 4
  01a4f40  stfs 5, 164(1)
  01a4f44  lwz 4, 156(1)
  01a4f48  lfs 5, 156(1)
  01a4f4c  stfs 3, 120(1)
  01a4f50  fabs 11, 5
  01a4f54  lwz 5, 160(1)
  01a4f58  lfs 5, 160(1)
  01a4f5c  lfs 7, 12(29)
  01a4f60  fabs 6, 5
  01a4f64  rlwinm 5, 5, 3, 29, 29
  01a4f68  lwz 6, 164(1)
  01a4f6c  lfs 5, 164(1)
  01a4f70  rlwimi 5, 6, 2, 30, 30
  01a4f74  fsub 13, 5, 31
  01a4f78  fsub 0, 5, 31
  01a4f7c  rlwimi 5, 4, 4, 28, 28
  01a4f80  ori 4, 3, 0
  01a4f84  rlwimi 4, 5, 2, 26, 28
  01a4f88  slwi 5, 5, 2
  01a4f8c  clrldi 4, 4, 32
  01a4f90  fsel 11, 13, 11, 4
  01a4f94  lfsx 4, 3, 5
  01a4f98  lfs 5, 4(4)
  01a4f9c  fsel 6, 0, 6, 12
  01a4fa0  fcmpu 0, 11, 31
  01a4fa4  bt 1, 0x1a4fb0
  01a4fa8  fmr 4, 31
  01a4fac  b 0x1a50c8
  01a4fb0  fsubs 12, 6, 11
  01a4fb4  fadds 6, 6, 11
  01a4fb8  addic 4, 1, 16
  01a4fbc  li 8, 2
  01a4fc0  addic 5, 4, 184
  01a4fc4  addic 6, 4, 200
  01a4fc8  mtctr 8
  01a4fcc  fdivs 6, 12, 6
  01a4fd0  fmuls 11, 6, 6
  01a4fd4  stfs 6, 212(1)
  01a4fd8  stfs 6, 204(1)
  01a4fdc  stfs 6, 208(1)
  01a4fe0  stfs 6, 200(1)
  01a4fe4  lfs 13, 212(1)
  01a4fe8  lfs 0, 204(1)
  01a4fec  lfs 30, 208(1)
  01a4ff0  fmuls 12, 11, 11
  01a4ff4  fmuls 0, 0, 11
  01a4ff8  fmuls 13, 13, 12
  01a4ffc  fmuls 6, 12, 12
  01a5000  fmuls 12, 30, 12
  01a5004  stfs 0, 204(1)
  01a5008  fmuls 11, 13, 11
  01a500c  stfs 12, 208(1)
  01a5010  stfs 11, 212(1)
  01a5014  lfs 11, 184(4)
  01a5018  fmuls 11, 11, 6
  01a501c  stfs 11, 200(4)
  01a5020  lfs 11, 4(5)
  01a5024  addic 4, 4, 8
  01a5028  addic 5, 5, 8
  01a502c  fmuls 11, 11, 6
  01a5030  stfs 11, 4(6)
  01a5034  addic 6, 6, 8
  01a5038  bdnz 0x1a5014
  01a503c  li 6, 4
  01a5040  ori 4, 1, 0
  01a5044  mtctr 6
  01a5048  lis 5, 115
  01a504c  addic 6, 4, 200
  01a5050  addic 5, 5, 22752
  01a5054  ori 7, 6, 0
  01a5058  lfs 6, 200(4)
  01a505c  lfs 11, 0(5)
  01a5060  fmuls 6, 6, 11
  01a5064  lfs 11, 4(5)
  01a5068  addic 5, 5, 8
  01a506c  stfs 6, 200(4)
  01a5070  lfs 6, 4(6)
  01a5074  addic 4, 4, 8
  01a5078  fmuls 6, 6, 11
  01a507c  stfs 6, 4(6)
  01a5080  addic 6, 6, 8
  01a5084  bdnz 0x1a5058
  01a5088  fmr 6, 31
  01a508c  ori 4, 1, 0
  01a5090  mtctr 8
  01a5094  lfs 11, 200(4)
  01a5098  fadds 6, 6, 11
  01a509c  addic 4, 4, 16
  01a50a0  lfs 11, 4(7)
  01a50a4  lfs 12, 8(7)
  01a50a8  lfs 13, 12(7)
  01a50ac  addic 7, 7, 16
  01a50b0  fadds 6, 6, 11
  01a50b4  fadds 6, 6, 12
  01a50b8  fadds 6, 6, 13
  01a50bc  bdnz 0x1a5094
  01a50c0  fadds 6, 6, 7
  01a50c4  fmadds 4, 6, 4, 5
  01a50c8  fsubs 2, 2, 9
  01a50cc  fsubs 1, 1, 8
  01a50d0  stfs 4, 136(1)
  01a50d4  fmuls 2, 2, 2
  01a50d8  fmadds 1, 1, 1, 2
  01a50dc  fsubs 2, 10, 3
  01a50e0  fsqrts 1, 1
  01a50e4  stfs 2, 148(1)
  01a50e8  fabs 4, 2
  01a50ec  fabs 3, 1
  01a50f0  stfs 1, 144(1)
  01a50f4  lwz 4, 148(1)
  01a50f8  rlwinm 4, 4, 3, 29, 29
  01a50fc  fsubs 1, 3, 4
  01a5100  stfs 1, 152(1)
  01a5104  lwz 5, 144(1)
  01a5108  lfs 1, 144(1)
  01a510c  lfs 2, 148(1)
  01a5110  lwz 6, 152(1)
  01a5114  lfs 5, 152(1)
  01a5118  fabs 1, 1
  01a511c  rlwimi 4, 6, 2, 30, 30
  01a5120  fsub 6, 5, 31
  01a5124  fabs 2, 2
  01a5128  fsub 5, 5, 31
  01a512c  rlwimi 4, 5, 4, 28, 28
  01a5130  ori 5, 3, 0
  01a5134  rlwimi 5, 4, 2, 26, 28
  01a5138  slwi 4, 4, 2
  01a513c  clrldi 5, 5, 32
  01a5140  fsel 4, 6, 1, 4
  01a5144  lfsx 1, 3, 4
  01a5148  fsel 3, 5, 2, 3
  01a514c  lfs 2, 4(5)
  01a5150  fcmpu 0, 4, 31
  01a5154  bt 1, 0x1a515c
  01a5158  b 0x1a5270
  01a515c  fsubs 5, 3, 4
  01a5160  fadds 3, 3, 4
  01a5164  addic 3, 1, 16
  01a5168  li 7, 2
  01a516c  addic 5, 3, 168
  01a5170  addic 4, 3, 152
  01a5174  mtctr 7
  01a5178  fdivs 3, 5, 3
  01a517c  fmuls 4, 3, 3
  01a5180  stfs 3, 180(1)
  01a5184  stfs 3, 172(1)
  01a5188  stfs 3, 176(1)
  01a518c  stfs 3, 168(1)
  01a5190  lfs 6, 180(1)
  01a5194  lfs 8, 172(1)
  01a5198  lfs 9, 176(1)
  01a519c  fmuls 5, 4, 4
  01a51a0  fmuls 8, 8, 4
  01a51a4  fmuls 6, 6, 5
  01a51a8  fmuls 3, 5, 5
  01a51ac  fmuls 5, 9, 5
  01a51b0  stfs 8, 172(1)
  01a51b4  fmuls 4, 6, 4
  01a51b8  stfs 5, 176(1)
  01a51bc  stfs 4, 180(1)
  01a51c0  lfs 4, 152(3)
  01a51c4  fmuls 4, 4, 3
  01a51c8  stfs 4, 168(3)
  01a51cc  lfs 4, 4(4)
  01a51d0  addic 4, 4, 8
  01a51d4  fmuls 4, 4, 3
  01a51d8  addic 3, 3, 8
  01a51dc  stfs 4, 4(5)
  01a51e0  addic 5, 5, 8
  01a51e4  bdnz 0x1a51c0
  01a51e8  li 5, 4
  01a51ec  ori 3, 1, 0
  01a51f0  mtctr 5
  01a51f4  lis 4, 115
  01a51f8  addic 5, 3, 168
  01a51fc  addic 4, 4, 22752
  01a5200  ori 6, 5, 0
  01a5204  lfs 3, 168(3)
  01a5208  lfs 4, 0(4)
  01a520c  fmuls 3, 3, 4
  01a5210  lfs 4, 4(4)
  01a5214  addic 4, 4, 8
  01a5218  stfs 3, 168(3)
  01a521c  lfs 3, 4(5)
  01a5220  addic 3, 3, 8
  01a5224  fmuls 3, 3, 4
  01a5228  stfs 3, 4(5)
  01a522c  addic 5, 5, 8
  01a5230  bdnz 0x1a5204
  01a5234  ori 3, 1, 0
  01a5238  mtctr 7
  01a523c  lfs 3, 168(3)
  01a5240  lfs 4, 4(6)
  01a5244  fadds 3, 31, 3
  01a5248  lfs 5, 8(6)
  01a524c  addic 3, 3, 16
  01a5250  lfs 31, 12(6)
  01a5254  addic 6, 6, 16
  01a5258  fadds 3, 3, 4
  01a525c  fadds 3, 3, 5
  01a5260  fadds 31, 3, 31
  01a5264  bdnz 0x1a523c
  01a5268  fadds 31, 31, 7
  01a526c  fmadds 31, 31, 1, 2
  01a5270  fneg 1, 31
  01a5274  lis 3, 26
  01a5278  addic 30, 1, 112
  01a527c  addi 3, 3, 19940
  01a5280  addic 29, 1, 128
  01a5284  li 5, 1
  01a5288  li 6, 0
  01a528c  ori 4, 29, 0
  01a5290  lfs 2, 16(3)
  01a5294  li 7, 0
  01a5298  ori 3, 30, 0
  01a529c  fsubs 1, 1, 2
  01a52a0  stfs 1, 132(1)
  01a52a4  bl 0x47f74
  01a52a8  nop
  01a52ac  ori 3, 30, 0
  01a52b0  bl 0x47b98
  01a52b4  nop
  01a52b8  ori 3, 29, 0
  01a52bc  bl 0x47c08
  01a52c0  nop
  01a52c4  lwz 3, 236(31)
  01a52c8  lis 4, 165
  01a52cc  slwi 3, 3, 2
  01a52d0  addic 4, 4, 7136
  01a52d4  extsw 3, 3
  01a52d8  li 5, 0
  01a52dc  lwzx 3, 4, 3
  01a52e0  stw 5, 0(3)
  01a52e4  ld 0, 304(1)
  01a52e8  mtlr 0
  01a52ec  lfd 30, 272(1)
  01a52f0  lfd 31, 280(1)
  01a52f4  ld 28, 240(1)
  01a52f8  ld 29, 248(1)
  01a52fc  ld 30, 256(1)
  01a5300  ld 31, 264(1)
  01a5304  addi 1, 1, 288
  01a5308  blr

M1051_001a5360:   # 0x1a5360, 0xb74 bytes
  01a5360  stdu 1, -272(1)
  01a5364  mflr 0
  01a5368  std 0, 288(1)
  01a536c  stfd 30, 256(1)
  01a5370  stfd 31, 264(1)
  01a5374  std 31, 248(1)
  01a5378  lbz 4, 32(3)
  01a537c  std 30, 240(1)
  01a5380  ori 31, 3, 0
  01a5384  lwz 30, 120(3)
  01a5388  cmpwi 4, 0
  01a538c  cmpwi 1, 4, 3
  01a5390  std 29, 232(1)
  01a5394  cmpwi 6, 4, 14
  01a5398  bt 2, 0x1a5eb0
  01a539c  bf 5, 0x1a53bc
  01a53a0  bf 24, 0x1a53bc
  01a53a4  lwz 3, 264(30)
  01a53a8  cmpwi 3, -1
  01a53ac  bt 2, 0x1a53bc
  01a53b0  lis 4, 151
  01a53b4  addic 4, 4, -25376
  01a53b8  sth 3, 8922(4)
  01a53bc  lis 3, 26
  01a53c0  lfs 1, 32(30)
  01a53c4  addi 29, 3, 21260
  01a53c8  lfs 2, 0(29)
  01a53cc  fmuls 1, 1, 2
  01a53d0  bl 0x502758
  01a53d4  nop
  01a53d8  li 5, 0
  01a53dc  stw 3, 272(30)
  01a53e0  lis 4, 51
  01a53e4  lfs 30, 4(29)
  01a53e8  ori 3, 31, 0
  01a53ec  stw 5, 116(1)
  01a53f0  li 5, 0
  01a53f4  bl 0x10675c
  01a53f8  nop
  01a53fc  ori 29, 3, 0
  01a5400  addic 5, 30, 32
  01a5404  ori 4, 29, 0
  01a5408  li 6, 0
  01a540c  addic 7, 1, 112
  01a5410  li 9, 0
  01a5414  addic 8, 1, 116
  01a5418  ori 3, 31, 0
  01a541c  li 10, 4
  01a5420  bl 0x106840
  01a5424  nop
  01a5428  lwz 4, 112(1)
  01a542c  lfs 2, 116(1)
  01a5430  cmpwi 4, 1
  01a5434  bt 2, 0x1a56f4
  01a5438  lbz 4, 32(31)
  01a543c  cmpwi 1, 4, 3
  01a5440  cmpwi 4, 14
  01a5444  cror 2, 2, 6
  01a5448  bt 2, 0x1a56f4
  01a544c  cmpwi 4, 5
  01a5450  bt 2, 0x1a56f4
  01a5454  lwz 29, 32(29)
  01a5458  cmpwi 29, 0
  01a545c  bt 2, 0x1a54b8
  01a5460  lhz 4, 166(29)
  01a5464  extsh 4, 4
  01a5468  cmpwi 4, 827
  01a546c  cmpwi 1, 4, 305
  01a5470  cmpwi 6, 4, 176
  01a5474  cmpwi 7, 4, 121
  01a5478  bt 2, 0x1a54a4
  01a547c  bt 6, 0x1a548c
  01a5480  bt 26, 0x1a54a4
  01a5484  bt 30, 0x1a54a4
  01a5488  b 0x1a54b8
  01a548c  lis 4, 26
  01a5490  addi 4, 4, 21260
  01a5494  lfs 1, 8(4)
  01a5498  fmuls 2, 2, 1
  01a549c  stfs 2, 116(1)
  01a54a0  b 0x1a54b8
  01a54a4  lis 4, 26
  01a54a8  addi 4, 4, 21260
  01a54ac  lfs 1, 12(4)
  01a54b0  fmuls 2, 2, 1
  01a54b4  stfs 2, 116(1)
  01a54b8  lfs 3, 32(30)
  01a54bc  lwz 4, 368(30)
  01a54c0  fsubs 3, 3, 2
  01a54c4  cmpwi 4, 0
  01a54c8  stfs 3, 32(30)
  01a54cc  bf 2, 0x1a55bc
  01a54d0  lis 4, 26
  01a54d4  lis 5, 114
  01a54d8  vspltisw 2, -1
  01a54dc  addi 4, 4, 21260
  01a54e0  li 6, -3056
  01a54e4  li 7, 20
  01a54e8  vslw 2, 2, 2
  01a54ec  lfs 1, 16(4)
  01a54f0  lfs 4, -3056(5)
  01a54f4  lwz 8, 300(30)
  01a54f8  fmuls 1, 4, 1
  01a54fc  <unknown>
  01a5500  fctiwz 1, 1
  01a5504  stfd 1, 208(1)
  01a5508  <unknown>
  01a550c  lwz 4, 212(1)
  01a5510  vspltw 4, 4, 0
  01a5514  cmpw 1, 8, 4
  01a5518  vmaddfp 2, 3, 4, 2
  01a551c  vctsxs 2, 2, 0
  01a5520  vspltw 2, 2, 0
  01a5524  bt 4, 0x1a5570
  01a5528  lis 4, 26
  01a552c  addi 4, 4, 21260
  01a5530  lfs 1, 24(4)
  01a5534  fcmpu 0, 3, 1
  01a5538  bt 1, 0x1a5570
  01a553c  fadds 4, 3, 2
  01a5540  fcmpu 0, 4, 1
  01a5544  cror 2, 0, 2
  01a5548  bt 2, 0x1a5570
  01a554c  lis 4, 16800
  01a5550  fmr 3, 1
  01a5554  li 5, 1
  01a5558  li 6, 300
  01a555c  stw 4, 32(30)
  01a5560  stw 4, 372(30)
  01a5564  stw 5, 368(30)
  01a5568  stvewx 2, 6, 30
  01a556c  b 0x1a55d4
  01a5570  bt 4, 0x1a55d4
  01a5574  lis 4, 26
  01a5578  addi 4, 4, 21260
  01a557c  lfs 1, 28(4)
  01a5580  fcmpu 0, 3, 1
  01a5584  bt 1, 0x1a55d4
  01a5588  fadds 2, 3, 2
  01a558c  fcmpu 0, 2, 1
  01a5590  cror 6, 0, 2
  01a5594  bt 6, 0x1a55d4
  01a5598  lis 4, 16672
  01a559c  li 5, 1
  01a55a0  fmr 3, 1
  01a55a4  li 6, 300
  01a55a8  stw 4, 32(30)
  01a55ac  stw 4, 372(30)
  01a55b0  stw 5, 368(30)
  01a55b4  stvewx 2, 6, 30
  01a55b8  b 0x1a55d4
  01a55bc  lfs 1, 372(30)
  01a55c0  fcmpu 0, 3, 1
  01a55c4  cror 6, 1, 2
  01a55c8  bt 6, 0x1a55d4
  01a55cc  fmr 3, 1
  01a55d0  stfs 1, 32(30)
  01a55d4  fcmpu 0, 3, 30
  01a55d8  cror 6, 0, 2
  01a55dc  bt 6, 0x1a5618
  01a55e0  cmpwi 3, 1
  01a55e4  bt 2, 0x1a560c
  01a55e8  cmpwi 3, 2
  01a55ec  bt 1, 0x1a5604
  01a55f0  cmpwi 3, -1
  01a55f4  bf 1, 0x1a56e4
  01a55f8  cmpwi 3, 0
  01a55fc  bf 1, 0x1a56e4
  01a5600  b 0x1a5618
  01a5604  cmpwi 3, 10
  01a5608  bt 1, 0x1a56e4
  01a560c  li 3, 200
  01a5610  stb 3, 103(30)
  01a5614  b 0x1a56e4
  01a5618  lwz 3, 268(30)
  01a561c  cmpwi 3, -1
  01a5620  bt 2, 0x1a563c
  01a5624  extsw 3, 3
  01a5628  li 4, 0
  01a562c  bl 0xc8b28
  01a5630  nop
  01a5634  li 3, -1
  01a5638  stw 3, 268(30)
  01a563c  li 6, 14
  01a5640  ori 3, 31, 0
  01a5644  li 4, 0
  01a5648  li 5, -1
  01a564c  stb 6, 32(31)
  01a5650  bl 0xfd8d0
  01a5654  nop
  01a5658  lis 3, 165
  01a565c  lwz 4, 248(30)
  01a5660  slwi 4, 4, 7
  01a5664  lwz 3, 7128(3)
  01a5668  addc 3, 3, 4
  01a566c  addic 4, 3, 48
  01a5670  addic 5, 3, 112
  01a5674  clrldi 3, 4, 32
  01a5678  clrldi 4, 5, 32
  01a567c  bl 0x151e70
  01a5680  nop
  01a5684  lhz 3, 52(31)
  01a5688  li 4, 0
  01a568c  lbz 5, 83(31)
  01a5690  rlwimi 3, 4, 0, 19, 19
  01a5694  cmpwi 5, 10
  01a5698  sth 3, 52(31)
  01a569c  bt 2, 0x1a56dc
  01a56a0  lis 3, 26
  01a56a4  lis 4, 114
  01a56a8  addi 3, 3, 21260
  01a56ac  li 5, 0
  01a56b0  lfs 1, 16(3)
  01a56b4  lfs 2, -3056(4)
  01a56b8  ori 3, 31, 0
  01a56bc  li 4, 10
  01a56c0  fmuls 1, 2, 1
  01a56c4  fctiwz 1, 1
  01a56c8  stfd 1, 208(1)
  01a56cc  lwz 6, 212(1)
  01a56d0  extsw 6, 6
  01a56d4  bl 0xfddc0
  01a56d8  nop
  01a56dc  li 3, 250
  01a56e0  stb 3, 103(30)
  01a56e4  addic 4, 30, 96
  01a56e8  ori 3, 31, 0
  01a56ec  bl 0x10c808
  01a56f0  nop
  01a56f4  li 5, 255
  01a56f8  ori 3, 31, 0
  01a56fc  addic 4, 30, 96
  01a5700  stb 5, 164(31)
  01a5704  bl 0x10c9a0
  01a5708  nop
  01a570c  lbz 3, 46(30)
  01a5710  rlwinm 4, 3, 0, 30, 30
  01a5714  lbz 3, 32(31)
  01a5718  cmpwi 4, 0
  01a571c  bt 2, 0x1a5758
  01a5720  cmpwi 3, 15
  01a5724  bt 2, 0x1a5758
  01a5728  lwz 3, 268(30)
  01a572c  cmpwi 3, -1
  01a5730  bt 2, 0x1a574c
  01a5734  extsw 3, 3
  01a5738  li 4, 0
  01a573c  bl 0xc8b28
  01a5740  nop
  01a5744  li 3, -1
  01a5748  stw 3, 268(30)
  01a574c  li 3, 14
  01a5750  stb 3, 32(31)
  01a5754  b 0x1a5eb0
  01a5758  cmpwi 3, 1
  01a575c  bf 1, 0x1a5794
  01a5760  lis 3, 151
  01a5764  addic 3, 3, -25376
  01a5768  lwz 3, 4280(3)
  01a576c  cmpwi 3, 8
  01a5770  bt 2, 0x1a5794
  01a5774  lis 3, 150
  01a5778  addic 3, 3, 19008
  01a577c  lwz 3, 160(3)
  01a5780  rlwinm 3, 3, 0, 26, 26
  01a5784  cmpwi 3, 0
  01a5788  bt 2, 0x1a5794
  01a578c  li 3, 1
  01a5790  stw 3, 376(30)
  01a5794  lwz 3, 300(30)
  01a5798  cmpwi 3, 0
  01a579c  bt 2, 0x1a5d30
  01a57a0  lwz 4, 368(30)
  01a57a4  cmpwi 4, 0
  01a57a8  bt 2, 0x1a5d30
  01a57ac  lis 4, 26
  01a57b0  addic 3, 3, -1
  01a57b4  addi 4, 4, 21260
  01a57b8  lis 5, 114
  01a57bc  stw 3, 300(30)
  01a57c0  lfs 1, 16(4)
  01a57c4  lfs 2, -3056(5)
  01a57c8  fmuls 1, 2, 1
  01a57cc  fctiwz 1, 1
  01a57d0  stfd 1, 208(1)
  01a57d4  lwz 4, 212(1)
  01a57d8  cmpw 3, 4
  01a57dc  bf 0, 0x1a581c
  01a57e0  extsw 3, 3
  01a57e4  bl 0x502730
  01a57e8  nop
  01a57ec  lis 3, 26
  01a57f0  lis 4, 114
  01a57f4  addi 3, 3, 21260
  01a57f8  lfs 2, 28(3)
  01a57fc  lfs 3, -3056(4)
  01a5800  fmuls 2, 3, 2
  01a5804  lis 4, 150
  01a5808  fdivs 1, 1, 2
  01a580c  lfs 2, 32(3)
  01a5810  lwz 3, 300(30)
  01a5814  fsubs 1, 2, 1
  01a5818  stfs 1, -12528(4)
  01a581c  cmpwi 3, 0
  01a5820  bf 2, 0x1a5d98
  01a5824  lbz 3, 32(31)
  01a5828  cmpwi 3, 1
  01a582c  bt 2, 0x1a5d98
  01a5830  lis 3, 26
  01a5834  lwz 5, 32(30)
  01a5838  lis 4, 16672
  01a583c  addi 3, 3, 21260
  01a5840  srawi 6, 5, 31
  01a5844  lfs 31, 36(3)
  01a5848  srwi 3, 6, 1
  01a584c  xor 3, 3, 5
  01a5850  subc 3, 3, 6
  01a5854  cmpw 3, 4
  01a5858  bf 1, 0x1a5aac
  01a585c  lis 3, 16799
  01a5860  li 4, 3
  01a5864  ori 3, 3, 13107
  01a5868  lis 5, 151
  01a586c  stw 3, 32(30)
  01a5870  stb 4, 32(31)
  01a5874  addic 3, 5, -25376
  01a5878  lfs 1, 192(30)
  01a587c  stfs 1, 16(31)
  01a5880  lfs 2, 196(30)
  01a5884  stfs 2, 20(31)
  01a5888  lfs 3, 200(30)
  01a588c  stfs 3, 24(31)
  01a5890  lfs 3, 204(30)
  01a5894  stfs 3, 28(31)
  01a5898  lfs 3, 128(3)
  01a589c  lfs 4, 132(3)
  01a58a0  fsubs 1, 3, 1
  01a58a4  li 3, 0
  01a58a8  fsubs 2, 4, 2
  01a58ac  stw 3, 368(30)
  01a58b0  lis 3, 115
  01a58b4  addic 3, 3, 22784
  01a58b8  fabs 3, 1
  01a58bc  fabs 4, 2
  01a58c0  stfs 1, 132(1)
  01a58c4  stfs 2, 136(1)
  01a58c8  fsubs 1, 3, 4
  01a58cc  stfs 1, 140(1)
  01a58d0  lwz 4, 132(1)
  01a58d4  lfs 1, 132(1)
  01a58d8  lwz 5, 136(1)
  01a58dc  lfs 2, 136(1)
  01a58e0  lwz 6, 140(1)
  01a58e4  rlwinm 5, 5, 3, 29, 29
  01a58e8  fabs 5, 2
  01a58ec  lfs 2, 140(1)
  01a58f0  fabs 1, 1
  01a58f4  rlwimi 5, 6, 2, 30, 30
  01a58f8  fsub 6, 2, 30
  01a58fc  fsub 7, 2, 30
  01a5900  rlwimi 5, 4, 4, 28, 28
  01a5904  ori 4, 3, 0
  01a5908  rlwimi 4, 5, 2, 26, 28
  01a590c  slwi 5, 5, 2
  01a5910  clrldi 4, 4, 32
  01a5914  fsel 4, 6, 1, 4
  01a5918  lfsx 1, 3, 5
  01a591c  fsel 3, 7, 5, 3
  01a5920  lfs 2, 4(4)
  01a5924  fcmpu 0, 4, 30
  01a5928  bt 1, 0x1a5930
  01a592c  b 0x1a5a44
  01a5930  fsubs 5, 3, 4
  01a5934  fadds 3, 3, 4
  01a5938  addic 3, 1, 16
  01a593c  li 7, 2
  01a5940  addic 4, 3, 160
  01a5944  addic 5, 3, 176
  01a5948  mtctr 7
  01a594c  fdivs 3, 5, 3
  01a5950  fmuls 4, 3, 3
  01a5954  stfs 3, 188(1)
  01a5958  stfs 3, 180(1)
  01a595c  stfs 3, 184(1)
  01a5960  stfs 3, 176(1)
  01a5964  lfs 6, 188(1)
  01a5968  lfs 7, 180(1)
  01a596c  lfs 8, 184(1)
  01a5970  fmuls 5, 4, 4
  01a5974  fmuls 7, 7, 4
  01a5978  fmuls 6, 6, 5
  01a597c  fmuls 3, 5, 5
  01a5980  fmuls 5, 8, 5
  01a5984  stfs 7, 180(1)
  01a5988  fmuls 4, 6, 4
  01a598c  stfs 5, 184(1)
  01a5990  stfs 4, 188(1)
  01a5994  lfs 4, 160(3)
  01a5998  fmuls 4, 4, 3
  01a599c  stfs 4, 176(3)
  01a59a0  lfs 4, 4(4)
  01a59a4  addic 3, 3, 8
  01a59a8  addic 4, 4, 8
  01a59ac  fmuls 4, 4, 3
  01a59b0  stfs 4, 4(5)
  01a59b4  addic 5, 5, 8
  01a59b8  bdnz 0x1a5994
  01a59bc  li 5, 4
  01a59c0  ori 3, 1, 0
  01a59c4  mtctr 5
  01a59c8  lis 4, 115
  01a59cc  addic 5, 3, 176
  01a59d0  addic 4, 4, 22752
  01a59d4  ori 6, 5, 0
  01a59d8  lfs 3, 176(3)
  01a59dc  lfs 4, 0(4)
  01a59e0  fmuls 3, 3, 4
  01a59e4  lfs 4, 4(4)
  01a59e8  addic 4, 4, 8
  01a59ec  stfs 3, 176(3)
  01a59f0  lfs 3, 4(5)
  01a59f4  addic 3, 3, 8
  01a59f8  fmuls 3, 3, 4
  01a59fc  stfs 3, 4(5)
  01a5a00  addic 5, 5, 8
  01a5a04  bdnz 0x1a59d8
  01a5a08  ori 3, 1, 0
  01a5a0c  mtctr 7
  01a5a10  lfs 3, 176(3)
  01a5a14  lfs 4, 4(6)
  01a5a18  fadds 3, 30, 3
  01a5a1c  lfs 5, 8(6)
  01a5a20  lfs 30, 12(6)
  01a5a24  addic 3, 3, 16
  01a5a28  addic 6, 6, 16
  01a5a2c  fadds 3, 3, 4
  01a5a30  fadds 3, 3, 5
  01a5a34  fadds 30, 3, 30
  01a5a38  bdnz 0x1a5a10
  01a5a3c  fadds 30, 30, 31
  01a5a40  fmadds 30, 30, 1, 2
  01a5a44  addic 3, 31, 192
  01a5a48  stfs 30, 72(31)
  01a5a4c  addic 4, 31, 64
  01a5a50  bl 0x500b64
  01a5a54  nop
  01a5a58  lbz 3, 83(31)
  01a5a5c  cmpwi 3, 6
  01a5a60  bt 2, 0x1a5aa0
  01a5a64  lis 3, 26
  01a5a68  lis 4, 114
  01a5a6c  addi 3, 3, 21260
  01a5a70  li 5, 0
  01a5a74  lfs 1, 40(3)
  01a5a78  lfs 2, -3056(4)
  01a5a7c  ori 3, 31, 0
  01a5a80  li 4, 6
  01a5a84  fmuls 1, 2, 1
  01a5a88  fctiwz 1, 1
  01a5a8c  stfd 1, 208(1)
  01a5a90  lwz 6, 212(1)
  01a5a94  extsw 6, 6
  01a5a98  bl 0xfddc0
  01a5a9c  nop
  01a5aa0  ori 3, 31, 0
  01a5aa4  bl 0x1a4df8
  01a5aa8  b 0x1a5d98
  01a5aac  lis 3, 16670
  01a5ab0  li 5, 5
  01a5ab4  ori 3, 3, 26214
  01a5ab8  lis 4, 165
  01a5abc  li 6, 0
  01a5ac0  stw 3, 32(30)
  01a5ac4  stb 5, 32(31)
  01a5ac8  lwz 3, 248(30)
  01a5acc  lwz 4, 7128(4)
  01a5ad0  li 5, 114
  01a5ad4  slwi 3, 3, 7
  01a5ad8  stw 6, 368(30)
  01a5adc  li 6, 1
  01a5ae0  addc 3, 4, 3
  01a5ae4  addic 4, 3, 48
  01a5ae8  addic 7, 3, 112
  01a5aec  clrldi 3, 4, 32
  01a5af0  clrldi 4, 7, 32
  01a5af4  bl 0xa0c38
  01a5af8  nop
  01a5afc  lfs 1, 192(30)
  01a5b00  lis 3, 151
  01a5b04  stfs 1, 16(31)
  01a5b08  addic 3, 3, -25376
  01a5b0c  lfs 2, 196(30)
  01a5b10  stfs 2, 20(31)
  01a5b14  lfs 3, 200(30)
  01a5b18  stfs 3, 24(31)
  01a5b1c  lfs 3, 204(30)
  01a5b20  stfs 3, 28(31)
  01a5b24  lfs 3, 128(3)
  01a5b28  lfs 4, 132(3)
  01a5b2c  fsubs 1, 3, 1
  01a5b30  fsubs 2, 4, 2
  01a5b34  lis 3, 115
  01a5b38  addic 3, 3, 22784
  01a5b3c  fabs 3, 1
  01a5b40  fabs 4, 2
  01a5b44  stfs 1, 120(1)
  01a5b48  stfs 2, 124(1)
  01a5b4c  fsubs 1, 3, 4
  01a5b50  stfs 1, 128(1)
  01a5b54  lwz 4, 120(1)
  01a5b58  lfs 1, 120(1)
  01a5b5c  lwz 5, 124(1)
  01a5b60  lfs 2, 124(1)
  01a5b64  lwz 6, 128(1)
  01a5b68  rlwinm 5, 5, 3, 29, 29
  01a5b6c  fabs 5, 2
  01a5b70  lfs 2, 128(1)
  01a5b74  fabs 1, 1
  01a5b78  rlwimi 5, 6, 2, 30, 30
  01a5b7c  fsub 6, 2, 30
  01a5b80  fsub 7, 2, 30
  01a5b84  rlwimi 5, 4, 4, 28, 28
  01a5b88  ori 4, 3, 0
  01a5b8c  rlwimi 4, 5, 2, 26, 28
  01a5b90  slwi 5, 5, 2
  01a5b94  clrldi 4, 4, 32
  01a5b98  fsel 4, 6, 1, 4
  01a5b9c  lfsx 1, 3, 5
  01a5ba0  fsel 3, 7, 5, 3
  01a5ba4  lfs 2, 4(4)
  01a5ba8  fcmpu 0, 4, 30
  01a5bac  bt 1, 0x1a5bb4
  01a5bb0  b 0x1a5cc8
  01a5bb4  fsubs 5, 3, 4
  01a5bb8  fadds 3, 3, 4
  01a5bbc  addic 3, 1, 16
  01a5bc0  li 6, 2
  01a5bc4  addic 4, 3, 128
  01a5bc8  addic 5, 3, 144
  01a5bcc  mtctr 6
  01a5bd0  fdivs 3, 5, 3
  01a5bd4  fmuls 4, 3, 3
  01a5bd8  stfs 3, 156(1)
  01a5bdc  stfs 3, 148(1)
  01a5be0  stfs 3, 152(1)
  01a5be4  stfs 3, 144(1)
  01a5be8  lfs 6, 156(1)
  01a5bec  lfs 7, 148(1)
  01a5bf0  lfs 8, 152(1)
  01a5bf4  fmuls 5, 4, 4
  01a5bf8  fmuls 7, 7, 4
  01a5bfc  fmuls 6, 6, 5
  01a5c00  fmuls 3, 5, 5
  01a5c04  fmuls 5, 8, 5
  01a5c08  stfs 7, 148(1)
  01a5c0c  fmuls 4, 6, 4
  01a5c10  stfs 5, 152(1)
  01a5c14  stfs 4, 156(1)
  01a5c18  lfs 4, 128(3)
  01a5c1c  fmuls 4, 4, 3
  01a5c20  stfs 4, 144(3)
  01a5c24  lfs 4, 4(4)
  01a5c28  addic 3, 3, 8
  01a5c2c  addic 4, 4, 8
  01a5c30  fmuls 4, 4, 3
  01a5c34  stfs 4, 4(5)
  01a5c38  addic 5, 5, 8
  01a5c3c  bdnz 0x1a5c18
  01a5c40  li 5, 4
  01a5c44  ori 3, 1, 0
  01a5c48  mtctr 5
  01a5c4c  lis 4, 115
  01a5c50  addic 5, 3, 144
  01a5c54  addic 4, 4, 22752
  01a5c58  ori 7, 5, 0
  01a5c5c  lfs 3, 144(3)
  01a5c60  lfs 4, 0(4)
  01a5c64  fmuls 3, 3, 4
  01a5c68  lfs 4, 4(4)
  01a5c6c  addic 4, 4, 8
  01a5c70  stfs 3, 144(3)
  01a5c74  lfs 3, 4(5)
  01a5c78  addic 3, 3, 8
  01a5c7c  fmuls 3, 3, 4
  01a5c80  stfs 3, 4(5)
  01a5c84  addic 5, 5, 8
  01a5c88  bdnz 0x1a5c5c
  01a5c8c  ori 3, 1, 0
  01a5c90  mtctr 6
  01a5c94  lfs 3, 144(3)
  01a5c98  lfs 4, 4(7)
  01a5c9c  fadds 3, 30, 3
  01a5ca0  lfs 5, 8(7)
  01a5ca4  lfs 30, 12(7)
  01a5ca8  addic 3, 3, 16
  01a5cac  addic 7, 7, 16
  01a5cb0  fadds 3, 3, 4
  01a5cb4  fadds 3, 3, 5
  01a5cb8  fadds 30, 3, 30
  01a5cbc  bdnz 0x1a5c94
  01a5cc0  fadds 30, 30, 31
  01a5cc4  fmadds 30, 30, 1, 2
  01a5cc8  addic 3, 31, 192
  01a5ccc  stfs 30, 72(31)
  01a5cd0  addic 4, 31, 64
  01a5cd4  bl 0x500b64
  01a5cd8  nop
  01a5cdc  lbz 3, 83(31)
  01a5ce0  cmpwi 3, 6
  01a5ce4  bt 2, 0x1a5d24
  01a5ce8  lis 3, 26
  01a5cec  lis 4, 114
  01a5cf0  addi 3, 3, 21260
  01a5cf4  li 5, 0
  01a5cf8  lfs 1, 40(3)
  01a5cfc  lfs 2, -3056(4)
  01a5d00  ori 3, 31, 0
  01a5d04  li 4, 6
  01a5d08  fmuls 1, 2, 1
  01a5d0c  fctiwz 1, 1
  01a5d10  stfd 1, 208(1)
  01a5d14  lwz 6, 212(1)
  01a5d18  extsw 6, 6
  01a5d1c  bl 0xfddc0
  01a5d20  nop
  01a5d24  ori 3, 31, 0
  01a5d28  bl 0x1a48d0
  01a5d2c  b 0x1a5d98
  01a5d30  lwz 4, 368(30)
  01a5d34  cmpwi 4, 0
  01a5d38  bf 2, 0x1a5d98
  01a5d3c  lis 4, 26
  01a5d40  lis 5, 114
  01a5d44  addi 4, 4, 21260
  01a5d48  lfs 1, 16(4)
  01a5d4c  lfs 2, -3056(5)
  01a5d50  fmuls 1, 2, 1
  01a5d54  fctiwz 1, 1
  01a5d58  stfd 1, 208(1)
  01a5d5c  lwz 4, 212(1)
  01a5d60  cmpw 3, 4
  01a5d64  bf 0, 0x1a5d98
  01a5d68  addic 4, 3, 1
  01a5d6c  extsw 3, 4
  01a5d70  stw 4, 300(30)
  01a5d74  bl 0x502730
  01a5d78  nop
  01a5d7c  lis 3, 26
  01a5d80  lis 4, 150
  01a5d84  addi 3, 3, 21260
  01a5d88  lfs 2, 44(3)
  01a5d8c  lfs 3, 32(3)
  01a5d90  fnmsubs 1, 1, 2, 3
  01a5d94  stfs 1, -12528(4)
  01a5d98  lis 3, 26
  01a5d9c  lis 4, 114
  01a5da0  addi 29, 3, 21260
  01a5da4  lis 3, 116
  01a5da8  lfs 3, 48(29)
  01a5dac  lfs 2, 2008(3)
  01a5db0  lfs 1, 296(30)
  01a5db4  fmuls 2, 2, 3
  01a5db8  lfs 4, -3052(4)
  01a5dbc  fmuls 2, 2, 4
  01a5dc0  bl 0x502578
  01a5dc4  nop
  01a5dc8  lfs 2, 52(29)
  01a5dcc  lfs 3, 56(29)
  01a5dd0  fsubs 2, 2, 1
  01a5dd4  fsubs 3, 3, 1
  01a5dd8  lfs 5, 60(29)
  01a5ddc  lis 3, 116
  01a5de0  lis 4, 116
  01a5de4  fsub 4, 1, 2
  01a5de8  fsel 2, 4, 2, 1
  01a5dec  lfs 4, 64(29)
  01a5df0  fsub 6, 3, 2
  01a5df4  fsel 2, 6, 3, 2
  01a5df8  lfs 3, 68(29)
  01a5dfc  lfs 6, 72(29)
  01a5e00  lfs 8, 32(29)
  01a5e04  lwz 3, 2012(3)
  01a5e08  lwz 4, 2016(4)
  01a5e0c  extsw 3, 3
  01a5e10  extsw 4, 4
  01a5e14  fmuls 7, 2, 2
  01a5e18  fmuls 9, 7, 2
  01a5e1c  fmuls 10, 7, 9
  01a5e20  fmadds 2, 9, 5, 2
  01a5e24  fmuls 9, 7, 10
  01a5e28  fmadds 2, 10, 4, 2
  01a5e2c  lfs 4, 76(29)
  01a5e30  stfs 1, 296(30)
  01a5e34  fmuls 5, 7, 9
  01a5e38  fmadds 2, 9, 3, 2
  01a5e3c  fmadds 1, 5, 6, 2
  01a5e40  fadds 1, 1, 8
  01a5e44  fmuls 1, 1, 4
  01a5e48  bl 0x5027bc
  01a5e4c  nop
  01a5e50  stw 3, 144(31)
  01a5e54  lis 4, 165
  01a5e58  lwz 3, 236(30)
  01a5e5c  li 6, 0
  01a5e60  addic 5, 4, 7136
  01a5e64  lfs 1, 80(29)
  01a5e68  slwi 3, 3, 2
  01a5e6c  addic 4, 30, 112
  01a5e70  extsw 7, 3
  01a5e74  ori 3, 31, 0
  01a5e78  lwzx 5, 5, 7
  01a5e7c  li 7, 0
  01a5e80  addic 8, 5, 16
  01a5e84  lwz 9, 0(5)
  01a5e88  extsw 9, 9
  01a5e8c  bl 0x111ba0
  01a5e90  nop
  01a5e94  lwz 3, 176(30)
  01a5e98  cmpwi 3, 0
  01a5e9c  bf 2, 0x1a5eb0
  01a5ea0  lis 3, 151
  01a5ea4  addic 3, 3, -25376
  01a5ea8  lwz 3, 8320(3)
  01a5eac  stw 3, 176(30)
  01a5eb0  ld 0, 288(1)
  01a5eb4  mtlr 0
  01a5eb8  lfd 30, 256(1)
  01a5ebc  lfd 31, 264(1)
  01a5ec0  ld 29, 232(1)
  01a5ec4  ld 30, 240(1)
  01a5ec8  ld 31, 248(1)
  01a5ecc  addi 1, 1, 272
  01a5ed0  blr

UpdateMoby_1051:   # 0x1a5f50, 0x1cd4 bytes
  01a5f50  stdu 1, -496(1)
  01a5f54  mflr 0
  01a5f58  std 0, 512(1)
  01a5f5c  stfd 29, 472(1)
  01a5f60  stfd 30, 480(1)
  01a5f64  stfd 31, 488(1)
  01a5f68  std 31, 464(1)
  01a5f6c  ori 31, 3, 0
  01a5f70  std 29, 448(1)
  01a5f74  std 28, 440(1)
  01a5f78  lis 4, 26
  01a5f7c  addi 28, 4, 24276
  01a5f80  std 30, 456(1)
  01a5f84  std 27, 432(1)
  01a5f88  std 26, 424(1)
  01a5f8c  lwz 29, 120(31)
  01a5f90  bl 0x1a5360
  01a5f94  lis 4, 116
  01a5f98  lwz 30, 176(29)
  01a5f9c  ori 3, 31, 0
  01a5fa0  lfs 1, 0(28)
  01a5fa4  addic 5, 29, 304
  01a5fa8  lwz 4, 1980(4)
  01a5fac  extsw 4, 4
  01a5fb0  bl 0x119a18
  01a5fb4  nop
  01a5fb8  lbz 3, 49(31)
  01a5fbc  cmpwi 3, 0
  01a5fc0  bt 2, 0x1a6004
  01a5fc4  lis 4, 149
  01a5fc8  addic 3, 31, 16
  01a5fcc  addic 4, 4, 5376
  01a5fd0  bl 0x5e8548
  01a5fd4  nop
  01a5fd8  lis 3, 26
  01a5fdc  addi 3, 3, 24276
  01a5fe0  lfs 2, 4(3)
  01a5fe4  fcmpu 0, 1, 2
  01a5fe8  cror 6, 1, 2
  01a5fec  bt 6, 0x1a6004
  01a5ff0  ori 3, 31, 0
  01a5ff4  bl 0x106360
  01a5ff8  nop
  01a5ffc  li 3, 36
  01a6000  stb 3, 127(31)
  01a6004  lbz 3, 32(31)
  01a6008  cmpwi 1, 3, 13
  01a600c  cmpwi 3, 3
  01a6010  cror 2, 0, 5
  01a6014  bt 2, 0x1a6054
  01a6018  li 3, 22
  01a601c  lis 5, 112
  01a6020  lis 6, 112
  01a6024  lis 4, 0
  01a6028  lis 7, 112
  01a602c  addic 8, 29, 272
  01a6030  addic 5, 5, 22176
  01a6034  ori 4, 4, 65535
  01a6038  addic 6, 6, 22216
  01a603c  li 9, 495
  01a6040  addic 7, 7, 22632
  01a6044  bl 0xc8444
  01a6048  nop
  01a604c  stw 3, 268(29)
  01a6050  lbz 3, 32(31)
  01a6054  cmpwi 6, 3, 7
  01a6058  cmpwi 7, 3, 15
  01a605c  bt 25, 0x1a60a0
  01a6060  cmpwi 1, 3, 6
  01a6064  bt 26, 0x1a690c
  01a6068  cmpwi 6, 3, 5
  01a606c  bt 6, 0x1a682c
  01a6070  cmpwi 1, 3, 4
  01a6074  bt 26, 0x1a66a0
  01a6078  cmpwi 6, 3, 3
  01a607c  bt 6, 0x1a6778
  01a6080  cmpwi 1, 3, 2
  01a6084  bt 26, 0x1a6524
  01a6088  cmpwi 6, 3, 1
  01a608c  bt 6, 0x1a635c
  01a6090  cmpwi 1, 3, 0
  01a6094  bt 26, 0x1a625c
  01a6098  bt 6, 0x1a60e0
  01a609c  b 0x1a7bf0
  01a60a0  cmpwi 1, 3, 14
  01a60a4  bt 30, 0x1a7b54
  01a60a8  cmpwi 6, 3, 13
  01a60ac  bt 6, 0x1a7958
  01a60b0  cmpwi 1, 3, 12
  01a60b4  bt 26, 0x1a7440
  01a60b8  cmpwi 6, 3, 11
  01a60bc  bt 6, 0x1a6f90
  01a60c0  cmpwi 1, 3, 10
  01a60c4  bt 26, 0x1a73dc
  01a60c8  cmpwi 6, 3, 9
  01a60cc  bt 6, 0x1a70f4
  01a60d0  cmpwi 1, 3, 8
  01a60d4  bt 26, 0x1a7044
  01a60d8  bt 6, 0x1a696c
  01a60dc  b 0x1a7bf0
  01a60e0  lis 3, 16880
  01a60e4  li 4, 30
  01a60e8  li 5, 3
  01a60ec  lis 7, 26
  01a60f0  li 6, 1
  01a60f4  stw 3, 32(29)
  01a60f8  addi 30, 7, 24276
  01a60fc  sth 4, 36(29)
  01a6100  stb 5, 40(29)
  01a6104  stb 6, 41(29)
  01a6108  stb 6, 46(29)
  01a610c  lfs 1, 8(30)
  01a6110  bl 0x502758
  01a6114  nop
  01a6118  stb 3, 88(29)
  01a611c  lfs 1, 12(30)
  01a6120  bl 0x502758
  01a6124  nop
  01a6128  stb 3, 90(29)
  01a612c  li 3, 1200
  01a6130  bl 0x5e7e18
  01a6134  nop
  01a6138  li 28, 0
  01a613c  stw 3, 288(29)
  01a6140  addic 27, 29, 192
  01a6144  addic 4, 31, 16
  01a6148  ori 3, 27, 0
  01a614c  stw 28, 376(29)
  01a6150  bl 0x5e7e98
  01a6154  nop
  01a6158  lwz 3, 236(29)
  01a615c  lis 4, 165
  01a6160  li 5, -1
  01a6164  slwi 3, 3, 2
  01a6168  addic 4, 4, 7136
  01a616c  extsw 3, 3
  01a6170  stw 5, 268(29)
  01a6174  addic 26, 29, 208
  01a6178  lwzx 5, 4, 3
  01a617c  ori 3, 26, 0
  01a6180  addic 4, 5, 16
  01a6184  lwz 6, 0(5)
  01a6188  stw 6, 276(29)
  01a618c  lwz 6, 0(5)
  01a6190  lfs 1, 16(30)
  01a6194  srawi 6, 6, 1
  01a6198  addze 6, 6
  01a619c  sldi 6, 6, 4
  01a61a0  addc 5, 5, 6
  01a61a4  addic 5, 5, 16
  01a61a8  clrldi 5, 5, 32
  01a61ac  bl 0x5e8f04
  01a61b0  nop
  01a61b4  ori 3, 27, 0
  01a61b8  ori 4, 26, 0
  01a61bc  bl 0x5e8588
  01a61c0  nop
  01a61c4  stfs 1, 220(29)
  01a61c8  bl 0xfcc68
  01a61cc  nop
  01a61d0  li 3, 30
  01a61d4  stfs 1, 296(29)
  01a61d8  bl 0x5e7e18
  01a61dc  nop
  01a61e0  stw 3, 300(29)
  01a61e4  lfs 1, 20(30)
  01a61e8  lfs 2, 24(31)
  01a61ec  lhz 3, 52(31)
  01a61f0  fadds 1, 2, 1
  01a61f4  stw 28, 148(31)
  01a61f8  ori 4, 3, 16385
  01a61fc  lwz 3, 244(29)
  01a6200  rlwimi 4, 28, 0, 19, 19
  01a6204  extsw 3, 3
  01a6208  sth 4, 52(31)
  01a620c  stfs 1, 24(31)
  01a6210  bl 0x1a1e24
  01a6214  nop
  01a6218  lis 3, 151
  01a621c  addic 3, 3, -16400
  01a6220  lbz 3, 35(3)
  01a6224  cmpwi 3, 0
  01a6228  bt 2, 0x1a6250
  01a622c  lis 3, 151
  01a6230  addic 3, 3, -16027
  01a6234  lbz 3, 29(3)
  01a6238  cmpwi 3, 0
  01a623c  bf 2, 0x1a6250
  01a6240  ori 3, 31, 0
  01a6244  bl 0xefb38
  01a6248  nop
  01a624c  b 0x1a7bf0
  01a6250  li 3, 1
  01a6254  stb 3, 32(31)
  01a6258  b 0x1a7bf0
  01a625c  lwz 3, 368(29)
  01a6260  cmpwi 3, 0
  01a6264  bf 2, 0x1a629c
  01a6268  lwz 3, 180(29)
  01a626c  cmpwi 3, 2
  01a6270  bt 2, 0x1a7bf0
  01a6274  lhz 3, 166(30)
  01a6278  cmpwi 3, 0
  01a627c  bf 2, 0x1a7bf0
  01a6280  li 4, 1
  01a6284  li 3, 10
  01a6288  stw 4, 368(29)
  01a628c  bl 0x5e7e18
  01a6290  nop
  01a6294  stw 3, 300(29)
  01a6298  b 0x1a7bf0
  01a629c  lwz 3, 300(29)
  01a62a0  cmpwi 3, 0
  01a62a4  bf 2, 0x1a7bf0
  01a62a8  lis 30, 164
  01a62ac  lwz 3, 252(29)
  01a62b0  slwi 3, 3, 8
  01a62b4  lwz 4, -28512(30)
  01a62b8  addc 3, 4, 3
  01a62bc  clrldi 3, 3, 32
  01a62c0  bl 0x189040
  01a62c4  nop
  01a62c8  lwz 3, 256(29)
  01a62cc  lwz 4, -28512(30)
  01a62d0  slwi 3, 3, 8
  01a62d4  addc 3, 4, 3
  01a62d8  clrldi 3, 3, 32
  01a62dc  bl 0x189040
  01a62e0  nop
  01a62e4  lwz 3, 260(29)
  01a62e8  extsw 3, 3
  01a62ec  bl 0x35511c
  01a62f0  nop
  01a62f4  li 3, 0
  01a62f8  lwz 4, 36(31)
  01a62fc  li 5, 2
  01a6300  lhz 6, 52(31)
  01a6304  ori 6, 6, 4096
  01a6308  stw 3, 368(29)
  01a630c  stb 5, 32(31)
  01a6310  rlwinm 3, 6, 0, 16, 30
  01a6314  lwz 4, 16(4)
  01a6318  lbz 5, 83(31)
  01a631c  stw 4, 148(31)
  01a6320  cmpwi 5, 8
  01a6324  sth 3, 52(31)
  01a6328  bt 2, 0x1a6350
  01a632c  li 3, 1
  01a6330  bl 0x5e7e18
  01a6334  nop
  01a6338  ori 6, 3, 0
  01a633c  ori 3, 31, 0
  01a6340  li 4, 8
  01a6344  li 5, 0
  01a6348  bl 0xfddc0
  01a634c  nop
  01a6350  ori 3, 31, 0
  01a6354  bl 0x1a43a8
  01a6358  b 0x1a7bf0
  01a635c  lfs 1, 24(31)
  01a6360  lis 3, 26
  01a6364  lfs 2, 72(29)
  01a6368  lis 4, 114
  01a636c  addi 3, 3, 24276
  01a6370  fadds 1, 1, 2
  01a6374  stfs 1, 24(31)
  01a6378  lfs 1, 24(3)
  01a637c  lfs 2, 72(29)
  01a6380  lfs 3, -3048(4)
  01a6384  fnmsubs 1, 3, 1, 2
  01a6388  stfs 1, 72(29)
  01a638c  lbz 3, 83(31)
  01a6390  lwz 5, 84(31)
  01a6394  cmpwi 3, 8
  01a6398  lbz 4, 112(31)
  01a639c  cmpwi 1, 3, 9
  01a63a0  cmpwi 6, 5, 0
  01a63a4  cmpwi 7, 3, 6
  01a63a8  bf 2, 0x1a6400
  01a63ac  lfs 2, 24(31)
  01a63b0  lfs 3, 200(29)
  01a63b4  fsubs 2, 2, 3
  01a63b8  lis 3, 26
  01a63bc  addi 3, 3, 24276
  01a63c0  fdivs 1, 2, 1
  01a63c4  lfs 2, 28(3)
  01a63c8  fabs 1, 1
  01a63cc  fcmpu 0, 1, 2
  01a63d0  bt 1, 0x1a64c8
  01a63d4  bt 6, 0x1a64c8
  01a63d8  li 3, 5
  01a63dc  bl 0x5e7e18
  01a63e0  nop
  01a63e4  ori 6, 3, 0
  01a63e8  ori 3, 31, 0
  01a63ec  li 4, 9
  01a63f0  li 5, 0
  01a63f4  bl 0xfddc0
  01a63f8  nop
  01a63fc  b 0x1a64c8
  01a6400  lwz 5, 24(31)
  01a6404  lwz 6, 200(29)
  01a6408  srawi 8, 5, 31
  01a640c  srawi 7, 6, 31
  01a6410  lfs 1, 200(29)
  01a6414  srwi 10, 8, 1
  01a6418  srwi 9, 7, 1
  01a641c  xor 5, 10, 5
  01a6420  xor 6, 9, 6
  01a6424  subc 5, 5, 8
  01a6428  subc 6, 6, 7
  01a642c  cmpw 5, 6
  01a6430  bf 0, 0x1a6438
  01a6434  stfs 1, 24(31)
  01a6438  bf 26, 0x1a64c8
  01a643c  rlwinm 4, 4, 0, 30, 30
  01a6440  cmpwi 4, 0
  01a6444  bt 2, 0x1a64c8
  01a6448  lis 4, 26
  01a644c  addi 4, 4, 24276
  01a6450  lfs 1, 32(4)
  01a6454  bf 6, 0x1a6490
  01a6458  bt 30, 0x1a64c8
  01a645c  lis 3, 114
  01a6460  li 4, 6
  01a6464  li 5, 0
  01a6468  lfs 2, -3056(3)
  01a646c  ori 3, 31, 0
  01a6470  fmuls 1, 2, 1
  01a6474  fctiwz 1, 1
  01a6478  stfd 1, 400(1)
  01a647c  lwz 6, 404(1)
  01a6480  extsw 6, 6
  01a6484  bl 0xfddc0
  01a6488  nop
  01a648c  b 0x1a64c8
  01a6490  cmpwi 3, 1
  01a6494  bt 2, 0x1a64c8
  01a6498  lis 3, 114
  01a649c  li 4, 1
  01a64a0  li 5, 0
  01a64a4  lfs 2, -3056(3)
  01a64a8  ori 3, 31, 0
  01a64ac  fmuls 1, 2, 1
  01a64b0  fctiwz 1, 1
  01a64b4  stfd 1, 400(1)
  01a64b8  lwz 6, 404(1)
  01a64bc  extsw 6, 6
  01a64c0  bl 0xfddc0
  01a64c4  nop
  01a64c8  ori 3, 31, 0
  01a64cc  bl 0x1a3d50
  01a64d0  cmpwi 3, 0
  01a64d4  bt 2, 0x1a7bf0
  01a64d8  li 5, 7
  01a64dc  lwz 30, 120(31)
  01a64e0  li 3, 0
  01a64e4  li 4, 0
  01a64e8  stb 5, 32(31)
  01a64ec  bl 0xb72b0
  01a64f0  nop
  01a64f4  lis 3, 165
  01a64f8  lwz 4, 236(30)
  01a64fc  addic 5, 3, 7136
  01a6500  slwi 3, 4, 2
  01a6504  lwz 4, 276(30)
  01a6508  extsw 6, 3
  01a650c  li 3, 2
  01a6510  lwzx 5, 5, 6
  01a6514  stw 4, 0(5)
  01a6518  bl 0x481d0
  01a651c  nop
  01a6520  b 0x1a7bf0
  01a6524  lbz 3, 83(31)
  01a6528  cmpwi 3, 6
  01a652c  cmpwi 1, 3, 1
  01a6530  bf 2, 0x1a6644
  01a6534  lwz 3, 84(31)
  01a6538  cmpwi 3, 0
  01a653c  bf 2, 0x1a6644
  01a6540  lbz 3, 112(31)
  01a6544  rlwinm 3, 3, 0, 30, 30
  01a6548  cmpwi 3, 0
  01a654c  bt 2, 0x1a6644
  01a6550  bt 6, 0x1a6590
  01a6554  lis 3, 26
  01a6558  lis 4, 114
  01a655c  addi 3, 3, 24276
  01a6560  li 5, 0
  01a6564  lfs 1, 36(3)
  01a6568  lfs 2, -3056(4)
  01a656c  ori 3, 31, 0
  01a6570  li 4, 1
  01a6574  fmuls 1, 2, 1
  01a6578  fctiwz 1, 1
  01a657c  stfd 1, 400(1)
  01a6580  lwz 6, 404(1)
  01a6584  extsw 6, 6
  01a6588  bl 0xfddc0
  01a658c  nop
  01a6590  lis 3, 165
  01a6594  addic 30, 3, -28284
  01a6598  lwz 3, 120(31)
  01a659c  lwz 3, 240(3)
  01a65a0  slwi 3, 3, 2
  01a65a4  extsw 3, 3
  01a65a8  lwzx 30, 30, 3
  01a65ac  cmpwi 30, 0
  01a65b0  bt 2, 0x1a6644
  01a65b4  lis 3, 26
  01a65b8  addi 3, 3, 24276
  01a65bc  lfs 31, 40(3)
  01a65c0  lfs 30, 44(3)
  01a65c4  lis 29, 164
  01a65c8  lhz 3, 0(30)
  01a65cc  fmr 1, 31
  01a65d0  rlwinm 28, 3, 8, 9, 23
  01a65d4  fmr 2, 30
  01a65d8  lwz 4, -28512(29)
  01a65dc  addc 3, 4, 28
  01a65e0  clrldi 3, 3, 32
  01a65e4  lfs 3, 16(3)
  01a65e8  stfs 3, 160(1)
  01a65ec  lfs 3, 20(3)
  01a65f0  stfs 3, 164(1)
  01a65f4  lfs 3, 24(3)
  01a65f8  stfs 3, 168(1)
  01a65fc  lfs 3, 28(3)
  01a6600  stfs 3, 172(1)
  01a6604  bl 0xfcbe8
  01a6608  nop
  01a660c  lfs 2, 168(1)
  01a6610  lwz 3, -28512(29)
  01a6614  addic 4, 1, 160
  01a6618  fadds 1, 2, 1
  01a661c  addc 3, 3, 28
  01a6620  clrldi 3, 3, 32
  01a6624  stfs 1, 168(1)
  01a6628  bl 0x47ca58
  01a662c  nop
  01a6630  lhz 3, 0(30)
  01a6634  addic 30, 30, 2
  01a6638  extsh 3, 3
  01a663c  cmpwi 3, 0
  01a6640  bf 0, 0x1a65c4
  01a6644  ori 3, 31, 0
  01a6648  bl 0x1a3680
  01a664c  cmpwi 3, 0
  01a6650  bt 2, 0x1a7bf0
  01a6654  li 5, 4
  01a6658  lwz 30, 120(31)
  01a665c  li 3, 0
  01a6660  li 4, 0
  01a6664  stb 5, 32(31)
  01a6668  bl 0xb72b0
  01a666c  nop
  01a6670  lis 3, 165
  01a6674  lwz 4, 236(30)
  01a6678  addic 5, 3, 7136
  01a667c  slwi 3, 4, 2
  01a6680  lwz 4, 276(30)
  01a6684  extsw 6, 3
  01a6688  li 3, 2
  01a668c  lwzx 5, 5, 6
  01a6690  stw 4, 0(5)
  01a6694  bl 0x481d0
  01a6698  nop
  01a669c  b 0x1a7bf0
  01a66a0  lbz 3, 83(31)
  01a66a4  cmpwi 3, 6
  01a66a8  cmpwi 1, 3, 1
  01a66ac  bf 2, 0x1a671c
  01a66b0  lwz 3, 84(31)
  01a66b4  cmpwi 3, 0
  01a66b8  bf 2, 0x1a671c
  01a66bc  lbz 3, 112(31)
  01a66c0  rlwinm 3, 3, 0, 30, 30
  01a66c4  cmpwi 3, 0
  01a66c8  bt 2, 0x1a671c
  01a66cc  bt 6, 0x1a670c
  01a66d0  lis 3, 26
  01a66d4  lis 4, 114
  01a66d8  addi 3, 3, 24276
  01a66dc  li 5, 0
  01a66e0  lfs 1, 36(3)
  01a66e4  lfs 2, -3056(4)
  01a66e8  ori 3, 31, 0
  01a66ec  li 4, 1
  01a66f0  fmuls 1, 2, 1
  01a66f4  fctiwz 1, 1
  01a66f8  stfd 1, 400(1)
  01a66fc  lwz 6, 404(1)
  01a6700  extsw 6, 6
  01a6704  bl 0xfddc0
  01a6708  nop
  01a670c  lwz 3, 244(29)
  01a6710  extsw 3, 3
  01a6714  bl 0x1a1e90
  01a6718  nop
  01a671c  ori 3, 31, 0
  01a6720  bl 0x1a2fb0
  01a6724  cmpwi 3, 0
  01a6728  bt 2, 0x1a7bf0
  01a672c  li 5, 6
  01a6730  lwz 30, 120(31)
  01a6734  li 3, 0
  01a6738  li 4, 0
  01a673c  stb 5, 32(31)
  01a6740  bl 0xb72b0
  01a6744  nop
  01a6748  lwz 3, 236(30)
  01a674c  lis 4, 165
  01a6750  lwz 5, 276(30)
  01a6754  slwi 3, 3, 2
  01a6758  addic 4, 4, 7136
  01a675c  extsw 6, 3
  01a6760  li 3, 2
  01a6764  lwzx 4, 4, 6
  01a6768  stw 5, 0(4)
  01a676c  bl 0x481d0
  01a6770  nop
  01a6774  b 0x1a7bf0
  01a6778  lis 3, 165
  01a677c  addic 30, 3, -28284
  01a6780  lwz 3, 120(31)
  01a6784  lwz 3, 240(3)
  01a6788  slwi 3, 3, 2
  01a678c  extsw 3, 3
  01a6790  lwzx 30, 30, 3
  01a6794  cmpwi 30, 0
  01a6798  bt 2, 0x1a682c
  01a679c  lis 3, 26
  01a67a0  addi 3, 3, 24276
  01a67a4  lfs 31, 40(3)
  01a67a8  lfs 30, 44(3)
  01a67ac  lis 28, 164
  01a67b0  lhz 3, 0(30)
  01a67b4  fmr 1, 31
  01a67b8  rlwinm 27, 3, 8, 9, 23
  01a67bc  fmr 2, 30
  01a67c0  lwz 4, -28512(28)
  01a67c4  addc 3, 4, 27
  01a67c8  clrldi 3, 3, 32
  01a67cc  lfs 3, 16(3)
  01a67d0  stfs 3, 144(1)
  01a67d4  lfs 3, 20(3)
  01a67d8  stfs 3, 148(1)
  01a67dc  lfs 3, 24(3)
  01a67e0  stfs 3, 152(1)
  01a67e4  lfs 3, 28(3)
  01a67e8  stfs 3, 156(1)
  01a67ec  bl 0xfcbe8
  01a67f0  nop
  01a67f4  lfs 2, 152(1)
  01a67f8  lwz 3, -28512(28)
  01a67fc  addic 4, 1, 144
  01a6800  fadds 1, 2, 1
  01a6804  addc 3, 3, 27
  01a6808  clrldi 3, 3, 32
  01a680c  stfs 1, 152(1)
  01a6810  bl 0x47ca58
  01a6814  nop
  01a6818  lhz 3, 0(30)
  01a681c  addic 30, 30, 2
  01a6820  extsh 3, 3
  01a6824  cmpwi 3, 0
  01a6828  bf 0, 0x1a67ac
  01a682c  ori 3, 31, 0
  01a6830  bl 0x1a2558
  01a6834  lbz 3, 32(31)
  01a6838  cmpwi 3, 4
  01a683c  bf 2, 0x1a685c
  01a6840  lwz 3, 240(29)
  01a6844  extsw 3, 3
  01a6848  bl 0x47cc38
  01a684c  nop
  01a6850  cmpwi 3, 0
  01a6854  bf 2, 0x1a6880
  01a6858  lbz 3, 32(31)
  01a685c  cmpwi 3, 6
  01a6860  bf 2, 0x1a7bf0
  01a6864  lwz 3, 244(29)
  01a6868  li 4, -1
  01a686c  extsw 3, 3
  01a6870  bl 0x104214
  01a6874  nop
  01a6878  cmpwi 3, 0
  01a687c  bf 2, 0x1a7bf0
  01a6880  lis 3, 26
  01a6884  li 4, 8
  01a6888  vspltisw 2, -1
  01a688c  addi 3, 3, 24276
  01a6890  li 5, 48
  01a6894  lis 6, 114
  01a6898  stb 4, 32(31)
  01a689c  li 4, -3056
  01a68a0  vslw 2, 2, 2
  01a68a4  <unknown>
  01a68a8  li 3, 288
  01a68ac  vspltw 3, 3, 0
  01a68b0  <unknown>
  01a68b4  lfs 1, -3056(6)
  01a68b8  vmaddfp 2, 4, 3, 2
  01a68bc  vctsxs 2, 2, 0
  01a68c0  vspltw 2, 2, 0
  01a68c4  stvewx 2, 3, 29
  01a68c8  lbz 3, 83(31)
  01a68cc  cmpwi 3, 3
  01a68d0  bt 2, 0x1a7bf0
  01a68d4  lis 3, 26
  01a68d8  addi 3, 3, 24276
  01a68dc  li 4, 3
  01a68e0  li 5, 0
  01a68e4  lfs 2, 36(3)
  01a68e8  ori 3, 31, 0
  01a68ec  fmuls 1, 1, 2
  01a68f0  fctiwz 1, 1
  01a68f4  stfd 1, 400(1)
  01a68f8  lwz 6, 404(1)
  01a68fc  extsw 6, 6
  01a6900  bl 0xfddc0
  01a6904  nop
  01a6908  b 0x1a7bf0
  01a690c  lwz 3, 180(29)
  01a6910  cmpwi 3, 2
  01a6914  bt 2, 0x1a7bf0
  01a6918  li 3, 8
  01a691c  lbz 4, 83(31)
  01a6920  cmpwi 4, 3
  01a6924  stb 3, 32(31)
  01a6928  bt 2, 0x1a7bf0
  01a692c  lis 3, 26
  01a6930  lis 4, 114
  01a6934  addi 3, 3, 24276
  01a6938  li 5, 0
  01a693c  lfs 1, 36(3)
  01a6940  lfs 2, -3056(4)
  01a6944  ori 3, 31, 0
  01a6948  fmuls 1, 2, 1
  01a694c  li 4, 3
  01a6950  fctiwz 1, 1
  01a6954  stfd 1, 400(1)
  01a6958  lwz 6, 404(1)
  01a695c  extsw 6, 6
  01a6960  bl 0xfddc0
  01a6964  nop
  01a6968  b 0x1a7bf0
  01a696c  lfs 1, 16(31)
  01a6970  lfs 2, 16(30)
  01a6974  lfs 3, 20(31)
  01a6978  lis 3, 26
  01a697c  lfs 4, 20(30)
  01a6980  fsubs 5, 2, 1
  01a6984  fsubs 2, 1, 2
  01a6988  addi 3, 3, 24276
  01a698c  fsubs 6, 4, 3
  01a6990  fsubs 3, 3, 4
  01a6994  lis 28, 115
  01a6998  addic 28, 28, 22784
  01a699c  fabs 7, 5
  01a69a0  fabs 4, 6
  01a69a4  stfs 5, 260(1)
  01a69a8  fmuls 3, 3, 3
  01a69ac  stfs 6, 264(1)
  01a69b0  lfs 1, 72(31)
  01a69b4  fsubs 5, 7, 4
  01a69b8  fmadds 31, 2, 2, 3
  01a69bc  stfs 5, 268(1)
  01a69c0  lwz 4, 260(1)
  01a69c4  lfs 29, 52(3)
  01a69c8  lfs 5, 260(1)
  01a69cc  lwz 3, 264(1)
  01a69d0  lfs 3, 264(1)
  01a69d4  fabs 2, 5
  01a69d8  rlwinm 3, 3, 3, 29, 29
  01a69dc  lwz 5, 268(1)
  01a69e0  lfs 5, 268(1)
  01a69e4  rlwimi 3, 5, 2, 30, 30
  01a69e8  fabs 3, 3
  01a69ec  fsub 6, 5, 29
  01a69f0  rlwimi 3, 4, 4, 28, 28
  01a69f4  fsub 5, 5, 29
  01a69f8  ori 4, 28, 0
  01a69fc  fsqrts 31, 31
  01a6a00  rlwimi 4, 3, 2, 26, 28
  01a6a04  slwi 3, 3, 2
  01a6a08  clrldi 4, 4, 32
  01a6a0c  lfsx 30, 28, 3
  01a6a10  fsel 4, 6, 2, 4
  01a6a14  lfs 2, 4(4)
  01a6a18  fsel 3, 5, 3, 7
  01a6a1c  fcmpu 0, 4, 29
  01a6a20  bt 1, 0x1a6a2c
  01a6a24  fmr 30, 29
  01a6a28  b 0x1a6b50
  01a6a2c  fsubs 5, 3, 4
  01a6a30  fadds 3, 3, 4
  01a6a34  addic 3, 1, 16
  01a6a38  li 7, 2
  01a6a3c  addic 4, 3, 352
  01a6a40  addic 5, 3, 368
  01a6a44  mtctr 7
  01a6a48  fdivs 3, 5, 3
  01a6a4c  fmuls 4, 3, 3
  01a6a50  stfs 3, 380(1)
  01a6a54  stfs 3, 372(1)
  01a6a58  stfs 3, 376(1)
  01a6a5c  stfs 3, 368(1)
  01a6a60  lfs 6, 380(1)
  01a6a64  lfs 7, 372(1)
  01a6a68  lfs 8, 376(1)
  01a6a6c  fmuls 5, 4, 4
  01a6a70  fmuls 7, 7, 4
  01a6a74  fmuls 6, 6, 5
  01a6a78  fmuls 3, 5, 5
  01a6a7c  fmuls 5, 8, 5
  01a6a80  stfs 7, 372(1)
  01a6a84  fmuls 4, 6, 4
  01a6a88  stfs 5, 376(1)
  01a6a8c  stfs 4, 380(1)
  01a6a90  lfs 4, 352(3)
  01a6a94  fmuls 4, 4, 3
  01a6a98  stfs 4, 368(3)
  01a6a9c  lfs 4, 4(4)
  01a6aa0  addic 3, 3, 8
  01a6aa4  addic 4, 4, 8
  01a6aa8  fmuls 4, 4, 3
  01a6aac  stfs 4, 4(5)
  01a6ab0  addic 5, 5, 8
  01a6ab4  bdnz 0x1a6a90
  01a6ab8  li 5, 4
  01a6abc  ori 3, 1, 0
  01a6ac0  mtctr 5
  01a6ac4  lis 4, 115
  01a6ac8  addic 5, 3, 368
  01a6acc  addic 4, 4, 22752
  01a6ad0  ori 6, 5, 0
  01a6ad4  lfs 3, 368(3)
  01a6ad8  lfs 4, 0(4)
  01a6adc  fmuls 3, 3, 4
  01a6ae0  lfs 4, 4(4)
  01a6ae4  addic 4, 4, 8
  01a6ae8  stfs 3, 368(3)
  01a6aec  lfs 3, 4(5)
  01a6af0  addic 3, 3, 8
  01a6af4  fmuls 3, 3, 4
  01a6af8  stfs 3, 4(5)
  01a6afc  addic 5, 5, 8
  01a6b00  bdnz 0x1a6ad4
  01a6b04  fmr 3, 29
  01a6b08  ori 3, 1, 0
  01a6b0c  mtctr 7
  01a6b10  lfs 4, 368(3)
  01a6b14  fadds 3, 3, 4
  01a6b18  addic 3, 3, 16
  01a6b1c  lfs 4, 4(6)
  01a6b20  lfs 5, 8(6)
  01a6b24  lfs 6, 12(6)
  01a6b28  addic 6, 6, 16
  01a6b2c  fadds 3, 3, 4
  01a6b30  fadds 3, 3, 5
  01a6b34  fadds 3, 3, 6
  01a6b38  bdnz 0x1a6b10
  01a6b3c  lis 3, 26
  01a6b40  addi 3, 3, 24276
  01a6b44  lfs 4, 56(3)
  01a6b48  fadds 3, 3, 4
  01a6b4c  fmadds 30, 3, 30, 2
  01a6b50  fmr 2, 30
  01a6b54  bl 0x5026a0
  01a6b58  nop
  01a6b5c  lfs 2, 16(30)
  01a6b60  lfs 3, 16(31)
  01a6b64  lfs 4, 20(30)
  01a6b68  lfs 5, 20(31)
  01a6b6c  fsubs 2, 2, 3
  01a6b70  fsubs 3, 4, 5
  01a6b74  fmr 30, 1
  01a6b78  addic 3, 31, 72
  01a6b7c  fabs 5, 2
  01a6b80  fabs 4, 3
  01a6b84  stfs 2, 248(1)
  01a6b88  stfs 3, 252(1)
  01a6b8c  fsubs 2, 5, 4
  01a6b90  stfs 2, 256(1)
  01a6b94  lwz 4, 248(1)
  01a6b98  lfs 1, 248(1)
  01a6b9c  lwz 5, 252(1)
  01a6ba0  lfs 2, 252(1)
  01a6ba4  lwz 6, 256(1)
  01a6ba8  rlwinm 5, 5, 3, 29, 29
  01a6bac  fabs 3, 2
  01a6bb0  lfs 2, 256(1)
  01a6bb4  fabs 1, 1
  01a6bb8  rlwimi 5, 6, 2, 30, 30
  01a6bbc  fsub 6, 2, 29
  01a6bc0  fsub 2, 2, 29
  01a6bc4  rlwimi 5, 4, 4, 28, 28
  01a6bc8  ori 4, 28, 0
  01a6bcc  rlwimi 4, 5, 2, 26, 28
  01a6bd0  slwi 5, 5, 2
  01a6bd4  clrldi 4, 4, 32
  01a6bd8  fsel 4, 6, 1, 4
  01a6bdc  lfsx 1, 28, 5
  01a6be0  fsel 3, 2, 3, 5
  01a6be4  lfs 2, 4(4)
  01a6be8  fcmpu 0, 4, 29
  01a6bec  bt 1, 0x1a6bf8
  01a6bf0  fmr 1, 29
  01a6bf4  b 0x1a6d1c
  01a6bf8  fsubs 5, 3, 4
  01a6bfc  fadds 3, 3, 4
  01a6c00  addic 4, 1, 16
  01a6c04  li 8, 2
  01a6c08  addic 6, 4, 336
  01a6c0c  addic 5, 4, 320
  01a6c10  mtctr 8
  01a6c14  fdivs 3, 5, 3
  01a6c18  fmuls 4, 3, 3
  01a6c1c  stfs 3, 348(1)
  01a6c20  stfs 3, 340(1)
  01a6c24  stfs 3, 344(1)
  01a6c28  stfs 3, 336(1)
  01a6c2c  lfs 6, 348(1)
  01a6c30  lfs 7, 340(1)
  01a6c34  lfs 8, 344(1)
  01a6c38  fmuls 5, 4, 4
  01a6c3c  fmuls 7, 7, 4
  01a6c40  fmuls 6, 6, 5
  01a6c44  fmuls 3, 5, 5
  01a6c48  fmuls 5, 8, 5
  01a6c4c  stfs 7, 340(1)
  01a6c50  fmuls 4, 6, 4
  01a6c54  stfs 5, 344(1)
  01a6c58  stfs 4, 348(1)
  01a6c5c  lfs 4, 320(4)
  01a6c60  fmuls 4, 4, 3
  01a6c64  stfs 4, 336(4)
  01a6c68  lfs 4, 4(5)
  01a6c6c  addic 5, 5, 8
  01a6c70  fmuls 4, 4, 3
  01a6c74  addic 4, 4, 8
  01a6c78  stfs 4, 4(6)
  01a6c7c  addic 6, 6, 8
  01a6c80  bdnz 0x1a6c5c
  01a6c84  li 6, 4
  01a6c88  ori 4, 1, 0
  01a6c8c  mtctr 6
  01a6c90  lis 5, 115
  01a6c94  addic 6, 4, 336
  01a6c98  addic 5, 5, 22752
  01a6c9c  ori 7, 6, 0
  01a6ca0  lfs 3, 336(4)
  01a6ca4  lfs 4, 0(5)
  01a6ca8  fmuls 3, 3, 4
  01a6cac  lfs 4, 4(5)
  01a6cb0  addic 5, 5, 8
  01a6cb4  stfs 3, 336(4)
  01a6cb8  lfs 3, 4(6)
  01a6cbc  addic 4, 4, 8
  01a6cc0  fmuls 3, 3, 4
  01a6cc4  stfs 3, 4(6)
  01a6cc8  addic 6, 6, 8
  01a6ccc  bdnz 0x1a6ca0
  01a6cd0  ori 4, 1, 0
  01a6cd4  fmr 3, 29
  01a6cd8  mtctr 8
  01a6cdc  lfs 4, 336(4)
  01a6ce0  fadds 3, 3, 4
  01a6ce4  lfs 4, 4(7)
  01a6ce8  addic 4, 4, 16
  01a6cec  lfs 5, 8(7)
  01a6cf0  lfs 6, 12(7)
  01a6cf4  addic 7, 7, 16
  01a6cf8  fadds 3, 3, 4
  01a6cfc  fadds 3, 3, 5
  01a6d00  fadds 3, 3, 6
  01a6d04  bdnz 0x1a6cdc
  01a6d08  lis 4, 26
  01a6d0c  addi 4, 4, 24276
  01a6d10  lfs 4, 56(4)
  01a6d14  fadds 3, 3, 4
  01a6d18  fmadds 1, 3, 1, 2
  01a6d1c  lis 4, 26
  01a6d20  lis 27, 114
  01a6d24  addi 28, 4, 24276
  01a6d28  lis 26, 114
  01a6d2c  addic 5, 29, 224
  01a6d30  lfs 2, 60(28)
  01a6d34  lfs 3, -3048(27)
  01a6d38  lfs 4, 64(28)
  01a6d3c  fmuls 2, 3, 2
  01a6d40  lfs 5, -3052(26)
  01a6d44  fmuls 4, 5, 4
  01a6d48  fmr 3, 2
  01a6d4c  bl 0x10a2e0
  01a6d50  nop
  01a6d54  lfs 3, 56(28)
  01a6d58  addic 3, 29, 232
  01a6d5c  lfs 1, -3052(26)
  01a6d60  fcmpu 0, 30, 3
  01a6d64  lfs 2, -3048(27)
  01a6d68  cror 6, 1, 2
  01a6d6c  bt 6, 0x1a6da8
  01a6d70  lis 4, 116
  01a6d74  lfs 3, 1996(4)
  01a6d78  fcmpu 0, 3, 31
  01a6d7c  cror 6, 1, 2
  01a6d80  bt 6, 0x1a6da8
  01a6d84  lis 4, 116
  01a6d88  lis 5, 116
  01a6d8c  lfs 3, 1984(4)
  01a6d90  lfs 4, 1992(5)
  01a6d94  fmuls 1, 3, 1
  01a6d98  fmuls 2, 4, 2
  01a6d9c  bl 0x109af0
  01a6da0  nop
  01a6da4  b 0x1a6e00
  01a6da8  lis 4, 116
  01a6dac  lfs 3, 2000(4)
  01a6db0  fcmpu 0, 3, 31
  01a6db4  cror 6, 0, 2
  01a6db8  bt 6, 0x1a6de4
  01a6dbc  lis 4, 116
  01a6dc0  lis 5, 116
  01a6dc4  lfs 3, 1984(4)
  01a6dc8  fmuls 1, 3, 1
  01a6dcc  lfs 3, 1992(5)
  01a6dd0  fmuls 2, 3, 2
  01a6dd4  fneg 1, 1
  01a6dd8  bl 0x109af0
  01a6ddc  nop
  01a6de0  b 0x1a6e00
  01a6de4  lis 4, 26
  01a6de8  fmr 1, 29
  01a6dec  addi 4, 4, 24276
  01a6df0  lfs 3, 68(4)
  01a6df4  fmuls 2, 2, 3
  01a6df8  bl 0x109af0
  01a6dfc  nop
  01a6e00  lfs 1, 20(30)
  01a6e04  lfs 2, 20(31)
  01a6e08  lfs 3, 16(30)
  01a6e0c  fsubs 1, 1, 2
  01a6e10  lfs 4, 16(31)
  01a6e14  fsubs 3, 3, 4
  01a6e18  lfs 6, 232(29)
  01a6e1c  lis 3, 26
  01a6e20  fmuls 5, 1, 1
  01a6e24  addi 4, 3, 24276
  01a6e28  lwz 3, 236(29)
  01a6e2c  addic 5, 31, 16
  01a6e30  fmadds 5, 3, 3, 5
  01a6e34  extsw 3, 3
  01a6e38  ori 6, 5, 0
  01a6e3c  fsqrts 5, 5
  01a6e40  fdivs 6, 6, 5
  01a6e44  fsub 7, 29, 5
  01a6e48  fsub 8, 29, 5
  01a6e4c  fsub 9, 5, 29
  01a6e50  fsub 5, 5, 29
  01a6e54  fmuls 1, 6, 1
  01a6e58  fmuls 3, 6, 3
  01a6e5c  fsel 6, 7, 29, 1
  01a6e60  fsel 7, 8, 29, 3
  01a6e64  fsel 1, 9, 6, 1
  01a6e68  fsel 3, 5, 7, 3
  01a6e6c  fadds 1, 2, 1
  01a6e70  fadds 2, 4, 3
  01a6e74  stfs 1, 20(31)
  01a6e78  stfs 2, 16(31)
  01a6e7c  lfs 1, 72(4)
  01a6e80  bl 0x1145d8
  01a6e84  nop
  01a6e88  lwz 3, 180(29)
  01a6e8c  cmpwi 3, 2
  01a6e90  bf 2, 0x1a6ea0
  01a6e94  li 3, 13
  01a6e98  stb 3, 32(31)
  01a6e9c  b 0x1a7bf0
  01a6ea0  addic 3, 29, 288
  01a6ea4  bl 0x4fff60
  01a6ea8  nop
  01a6eac  cmpwi 3, 0
  01a6eb0  bt 2, 0x1a6efc
  01a6eb4  lis 3, 26
  01a6eb8  vspltisw 2, -1
  01a6ebc  li 5, 76
  01a6ec0  addi 3, 3, 24276
  01a6ec4  lis 4, 114
  01a6ec8  li 6, -3056
  01a6ecc  vslw 2, 2, 2
  01a6ed0  <unknown>
  01a6ed4  li 3, 288
  01a6ed8  vspltw 3, 3, 0
  01a6edc  <unknown>
  01a6ee0  li 4, 12
  01a6ee4  vmaddfp 2, 4, 3, 2
  01a6ee8  vctsxs 2, 2, 0
  01a6eec  vspltw 2, 2, 0
  01a6ef0  stvewx 2, 3, 29
  01a6ef4  stb 4, 32(31)
  01a6ef8  b 0x1a7bf0
  01a6efc  lis 3, 116
  01a6f00  lfs 1, 1996(3)
  01a6f04  fcmpu 0, 1, 31
  01a6f08  cror 6, 0, 2
  01a6f0c  bt 6, 0x1a7bf0
  01a6f10  lis 3, 26
  01a6f14  lis 4, 116
  01a6f18  addi 3, 3, 24276
  01a6f1c  lfs 1, 80(3)
  01a6f20  lfs 2, 2004(4)
  01a6f24  fmuls 1, 2, 1
  01a6f28  fcmpu 0, 30, 1
  01a6f2c  cror 6, 1, 2
  01a6f30  bt 6, 0x1a7bf0
  01a6f34  li 3, 9
  01a6f38  lbz 5, 83(31)
  01a6f3c  li 4, 7
  01a6f40  cmpwi 5, 4
  01a6f44  stb 3, 32(31)
  01a6f48  stb 4, 188(31)
  01a6f4c  bt 2, 0x1a7bf0
  01a6f50  lis 3, 26
  01a6f54  lis 4, 114
  01a6f58  addi 3, 3, 24276
  01a6f5c  li 5, 0
  01a6f60  lfs 1, 36(3)
  01a6f64  lfs 2, -3056(4)
  01a6f68  ori 3, 31, 0
  01a6f6c  li 4, 4
  01a6f70  fmuls 1, 2, 1
  01a6f74  fctiwz 1, 1
  01a6f78  stfd 1, 400(1)
  01a6f7c  lwz 6, 404(1)
  01a6f80  extsw 6, 6
  01a6f84  bl 0xfddc0
  01a6f88  nop
  01a6f8c  b 0x1a7bf0
  01a6f90  ori 3, 31, 0
  01a6f94  bl 0x1a2558
  01a6f98  addic 3, 29, 288
  01a6f9c  bl 0x4fff60
  01a6fa0  nop
  01a6fa4  cmpwi 3, 0
  01a6fa8  bt 2, 0x1a7bf0
  01a6fac  lis 3, 26
  01a6fb0  li 4, 48
  01a6fb4  vspltisw 2, -1
  01a6fb8  addi 3, 3, 24276
  01a6fbc  lis 5, 114
  01a6fc0  li 6, -3056
  01a6fc4  vslw 2, 2, 2
  01a6fc8  <unknown>
  01a6fcc  li 3, 288
  01a6fd0  vspltw 3, 3, 0
  01a6fd4  <unknown>
  01a6fd8  li 4, 11
  01a6fdc  vmaddfp 2, 4, 3, 2
  01a6fe0  li 5, 7
  01a6fe4  vctsxs 2, 2, 0
  01a6fe8  vspltw 2, 2, 0
  01a6fec  stvewx 2, 3, 29
  01a6ff0  lbz 3, 83(31)
  01a6ff4  stb 4, 32(31)
  01a6ff8  cmpwi 3, 6
  01a6ffc  stb 5, 188(31)
  01a7000  bt 2, 0x1a7bf0
  01a7004  lis 3, 26
  01a7008  lis 4, 114
  01a700c  addi 3, 3, 24276
  01a7010  li 5, 0
  01a7014  lfs 1, 36(3)
  01a7018  lfs 2, -3056(4)
  01a701c  ori 3, 31, 0
  01a7020  li 4, 6
  01a7024  fmuls 1, 2, 1
  01a7028  fctiwz 1, 1
  01a702c  stfd 1, 400(1)
  01a7030  lwz 6, 404(1)
  01a7034  extsw 6, 6
  01a7038  bl 0xfddc0
  01a703c  nop
  01a7040  b 0x1a7bf0
  01a7044  addic 3, 29, 288
  01a7048  bl 0x4fff60
  01a704c  nop
  01a7050  lis 3, 26
  01a7054  lis 5, 114
  01a7058  addi 4, 3, 24276
  01a705c  lis 6, 114
  01a7060  addic 3, 31, 72
  01a7064  lfs 3, 60(4)
  01a7068  lfs 2, -3048(5)
  01a706c  lfs 5, 64(4)
  01a7070  fmuls 2, 2, 3
  01a7074  lfs 1, 72(31)
  01a7078  lfs 6, -3052(6)
  01a707c  addic 5, 29, 224
  01a7080  fmuls 4, 6, 5
  01a7084  fmr 3, 2
  01a7088  bl 0x10a2e0
  01a708c  nop
  01a7090  lbz 3, 112(31)
  01a7094  rlwinm 3, 3, 0, 30, 30
  01a7098  cmpwi 3, 0
  01a709c  bt 2, 0x1a7bf0
  01a70a0  li 3, 10
  01a70a4  lbz 4, 83(31)
  01a70a8  cmpwi 4, 5
  01a70ac  stb 3, 32(31)
  01a70b0  bt 2, 0x1a7bf0
  01a70b4  lis 3, 26
  01a70b8  lis 4, 114
  01a70bc  addi 3, 3, 24276
  01a70c0  li 5, 0
  01a70c4  lfs 1, 36(3)
  01a70c8  lfs 2, -3056(4)
  01a70cc  ori 3, 31, 0
  01a70d0  li 4, 5
  01a70d4  fmuls 1, 2, 1
  01a70d8  fctiwz 1, 1
  01a70dc  stfd 1, 400(1)
  01a70e0  lwz 6, 404(1)
  01a70e4  extsw 6, 6
  01a70e8  bl 0xfddc0
  01a70ec  nop
  01a70f0  b 0x1a7bf0
  01a70f4  addic 3, 29, 288
  01a70f8  bl 0x4fff60
  01a70fc  nop
  01a7100  ori 3, 31, 0
  01a7104  bl 0xefe40
  01a7108  nop
  01a710c  lis 3, 26
  01a7110  addi 3, 3, 24276
  01a7114  lfs 2, 72(3)
  01a7118  fcmpu 0, 1, 2
  01a711c  cror 6, 0, 2
  01a7120  bt 6, 0x1a7378
  01a7124  ori 3, 31, 0
  01a7128  bl 0xefe40
  01a712c  nop
  01a7130  lis 3, 26
  01a7134  addi 3, 3, 24276
  01a7138  lfs 2, 68(3)
  01a713c  fcmpu 0, 1, 2
  01a7140  cror 6, 1, 2
  01a7144  bt 6, 0x1a7378
  01a7148  lis 3, 26
  01a714c  lfs 1, 72(31)
  01a7150  addi 30, 3, 24276
  01a7154  li 4, 0
  01a7158  lfs 2, 84(30)
  01a715c  lfs 3, 88(30)
  01a7160  fadds 2, 1, 2
  01a7164  lfs 4, 92(30)
  01a7168  fsubs 5, 3, 1
  01a716c  lis 3, 16256
  01a7170  li 5, 1
  01a7174  addic 29, 1, 112
  01a7178  fsubs 3, 3, 2
  01a717c  fsub 7, 1, 5
  01a7180  fsubs 6, 4, 2
  01a7184  fsubs 4, 4, 1
  01a7188  fsub 9, 2, 3
  01a718c  fsel 1, 7, 5, 1
  01a7190  lfs 5, 96(30)
  01a7194  lfs 7, 100(30)
  01a7198  fsel 2, 9, 3, 2
  01a719c  fsub 3, 4, 1
  01a71a0  fsub 9, 6, 2
  01a71a4  fsel 1, 3, 4, 1
  01a71a8  lfs 3, 104(30)
  01a71ac  lfs 4, 108(30)
  01a71b0  stw 4, 184(1)
  01a71b4  stw 3, 204(1)
  01a71b8  stw 5, 208(1)
  01a71bc  ori 3, 31, 0
  01a71c0  stw 5, 196(1)
  01a71c4  li 4, 0
  01a71c8  fsel 2, 9, 6, 2
  01a71cc  fmuls 6, 1, 1
  01a71d0  stw 31, 192(1)
  01a71d4  ori 5, 29, 0
  01a71d8  fmuls 8, 2, 2
  01a71dc  fmuls 9, 6, 1
  01a71e0  fmuls 10, 8, 2
  01a71e4  fmuls 11, 6, 9
  01a71e8  fmadds 1, 9, 5, 1
  01a71ec  fmuls 9, 8, 10
  01a71f0  fmadds 2, 10, 5, 2
  01a71f4  fmuls 5, 6, 11
  01a71f8  fmadds 1, 11, 7, 1
  01a71fc  fmuls 10, 8, 9
  01a7200  fmadds 2, 9, 7, 2
  01a7204  fmuls 6, 6, 5
  01a7208  fmadds 1, 5, 3, 1
  01a720c  fmuls 5, 8, 10
  01a7210  fmadds 2, 10, 3, 2
  01a7214  fmadds 1, 6, 4, 1
  01a7218  fmadds 2, 5, 4, 2
  01a721c  stfs 1, 180(1)
  01a7220  stfs 2, 176(1)
  01a7224  bl 0xf1114
  01a7228  nop
  01a722c  lfs 31, 16(30)
  01a7230  addic 28, 1, 176
  01a7234  ori 3, 29, 0
  01a7238  li 5, 0
  01a723c  fmr 1, 31
  01a7240  ori 6, 31, 0
  01a7244  ori 7, 28, 0
  01a7248  bl 0x5e598
  01a724c  nop
  01a7250  ori 3, 31, 0
  01a7254  ori 5, 29, 0
  01a7258  li 4, 1
  01a725c  bl 0xf1114
  01a7260  nop
  01a7264  ori 3, 29, 0
  01a7268  li 5, 0
  01a726c  fmr 1, 31
  01a7270  ori 6, 31, 0
  01a7274  ori 7, 28, 0
  01a7278  bl 0x5e598
  01a727c  nop
  01a7280  ori 3, 31, 0
  01a7284  ori 5, 29, 0
  01a7288  li 4, 2
  01a728c  bl 0xf1114
  01a7290  nop
  01a7294  ori 3, 29, 0
  01a7298  li 5, 0
  01a729c  fmr 1, 31
  01a72a0  ori 6, 31, 0
  01a72a4  ori 7, 28, 0
  01a72a8  bl 0x5e598
  01a72ac  nop
  01a72b0  ori 3, 31, 0
  01a72b4  ori 5, 29, 0
  01a72b8  li 4, 3
  01a72bc  bl 0xf1114
  01a72c0  nop
  01a72c4  ori 3, 29, 0
  01a72c8  li 5, 0
  01a72cc  fmr 1, 31
  01a72d0  ori 6, 31, 0
  01a72d4  ori 7, 28, 0
  01a72d8  bl 0x5e598
  01a72dc  nop
  01a72e0  ori 3, 31, 0
  01a72e4  ori 5, 29, 0
  01a72e8  li 4, 4
  01a72ec  bl 0xf1114
  01a72f0  nop
  01a72f4  ori 3, 29, 0
  01a72f8  fmr 1, 31
  01a72fc  li 5, 0
  01a7300  ori 6, 31, 0
  01a7304  ori 7, 28, 0
  01a7308  bl 0x5e598
  01a730c  nop
  01a7310  ori 3, 31, 0
  01a7314  li 4, 5
  01a7318  ori 5, 29, 0
  01a731c  bl 0xf1114
  01a7320  nop
  01a7324  lfs 31, 112(30)
  01a7328  ori 3, 29, 0
  01a732c  li 5, 0
  01a7330  ori 6, 31, 0
  01a7334  fmr 1, 31
  01a7338  ori 7, 28, 0
  01a733c  bl 0x5e598
  01a7340  nop
  01a7344  ori 3, 31, 0
  01a7348  ori 5, 29, 0
  01a734c  li 4, 6
  01a7350  bl 0xf1114
  01a7354  nop
  01a7358  ori 3, 29, 0
  01a735c  fmr 1, 31
  01a7360  li 5, 0
  01a7364  ori 6, 31, 0
  01a7368  ori 7, 28, 0
  01a736c  bl 0x5e598
  01a7370  nop
  01a7374  b 0x1a7bf0
  01a7378  lbz 3, 112(31)
  01a737c  rlwinm 3, 3, 0, 30, 30
  01a7380  cmpwi 3, 0
  01a7384  bt 2, 0x1a7bf0
  01a7388  lbz 3, 188(31)
  01a738c  lbz 4, 83(31)
  01a7390  stb 3, 32(31)
  01a7394  cmpwi 4, 1
  01a7398  bt 2, 0x1a7bf0
  01a739c  lis 3, 26
  01a73a0  lis 4, 114
  01a73a4  addi 3, 3, 24276
  01a73a8  li 5, 0
  01a73ac  lfs 1, 36(3)
  01a73b0  lfs 2, -3056(4)
  01a73b4  ori 3, 31, 0
  01a73b8  li 4, 1
  01a73bc  fmuls 1, 2, 1
  01a73c0  fctiwz 1, 1
  01a73c4  stfd 1, 400(1)
  01a73c8  lwz 6, 404(1)
  01a73cc  extsw 6, 6
  01a73d0  bl 0xfddc0
  01a73d4  nop
  01a73d8  b 0x1a7bf0
  01a73dc  lbz 3, 112(31)
  01a73e0  rlwinm 3, 3, 0, 30, 30
  01a73e4  cmpwi 3, 0
  01a73e8  bt 2, 0x1a7bf0
  01a73ec  lbz 3, 188(31)
  01a73f0  lbz 4, 83(31)
  01a73f4  stb 3, 32(31)
  01a73f8  cmpwi 4, 1
  01a73fc  bt 2, 0x1a7bf0
  01a7400  lis 3, 26
  01a7404  lis 4, 114
  01a7408  addi 3, 3, 24276
  01a740c  li 5, 0
  01a7410  lfs 1, 36(3)
  01a7414  lfs 2, -3056(4)
  01a7418  ori 3, 31, 0
  01a741c  fmuls 1, 2, 1
  01a7420  li 4, 1
  01a7424  fctiwz 1, 1
  01a7428  stfd 1, 400(1)
  01a742c  lwz 6, 404(1)
  01a7430  extsw 6, 6
  01a7434  bl 0xfddc0
  01a7438  nop
  01a743c  b 0x1a7bf0
  01a7440  lfs 1, 16(31)
  01a7444  lfs 2, 192(29)
  01a7448  lfs 3, 20(31)
  01a744c  lis 3, 26
  01a7450  lfs 4, 196(29)
  01a7454  fsubs 5, 2, 1
  01a7458  fsubs 1, 1, 2
  01a745c  addi 3, 3, 24276
  01a7460  fsubs 6, 4, 3
  01a7464  fsubs 3, 3, 4
  01a7468  lis 30, 115
  01a746c  addic 30, 30, 22784
  01a7470  fabs 7, 5
  01a7474  fabs 4, 6
  01a7478  fmuls 3, 3, 3
  01a747c  stfs 5, 236(1)
  01a7480  stfs 6, 240(1)
  01a7484  lfs 30, 72(31)
  01a7488  fsubs 2, 7, 4
  01a748c  fmadds 31, 1, 1, 3
  01a7490  stfs 2, 244(1)
  01a7494  lwz 4, 236(1)
  01a7498  lfs 29, 52(3)
  01a749c  lfs 2, 236(1)
  01a74a0  lwz 3, 240(1)
  01a74a4  fabs 1, 2
  01a74a8  lfs 2, 240(1)
  01a74ac  rlwinm 3, 3, 3, 29, 29
  01a74b0  lwz 5, 244(1)
  01a74b4  lfs 3, 244(1)
  01a74b8  rlwimi 3, 5, 2, 30, 30
  01a74bc  fabs 6, 2
  01a74c0  fsub 5, 3, 29
  01a74c4  rlwimi 3, 4, 4, 28, 28
  01a74c8  fsub 3, 3, 29
  01a74cc  ori 4, 30, 0
  01a74d0  fsqrts 31, 31
  01a74d4  rlwimi 4, 3, 2, 26, 28
  01a74d8  slwi 3, 3, 2
  01a74dc  clrldi 4, 4, 32
  01a74e0  fsel 4, 5, 1, 4
  01a74e4  lfsx 1, 30, 3
  01a74e8  lfs 2, 4(4)
  01a74ec  fsel 3, 3, 6, 7
  01a74f0  fcmpu 0, 4, 29
  01a74f4  bt 1, 0x1a7500
  01a74f8  fmr 1, 29
  01a74fc  b 0x1a7624
  01a7500  fsubs 5, 3, 4
  01a7504  fadds 3, 3, 4
  01a7508  addic 3, 1, 16
  01a750c  li 6, 2
  01a7510  addic 4, 3, 288
  01a7514  addic 5, 3, 304
  01a7518  mtctr 6
  01a751c  fdivs 3, 5, 3
  01a7520  fmuls 4, 3, 3
  01a7524  stfs 3, 316(1)
  01a7528  stfs 3, 308(1)
  01a752c  stfs 3, 312(1)
  01a7530  stfs 3, 304(1)
  01a7534  lfs 6, 316(1)
  01a7538  lfs 7, 308(1)
  01a753c  lfs 8, 312(1)
  01a7540  fmuls 5, 4, 4
  01a7544  fmuls 7, 7, 4
  01a7548  fmuls 6, 6, 5
  01a754c  fmuls 3, 5, 5
  01a7550  fmuls 5, 8, 5
  01a7554  stfs 7, 308(1)
  01a7558  fmuls 4, 6, 4
  01a755c  stfs 5, 312(1)
  01a7560  stfs 4, 316(1)
  01a7564  lfs 4, 288(3)
  01a7568  fmuls 4, 4, 3
  01a756c  stfs 4, 304(3)
  01a7570  lfs 4, 4(4)
  01a7574  addic 3, 3, 8
  01a7578  addic 4, 4, 8
  01a757c  fmuls 4, 4, 3
  01a7580  stfs 4, 4(5)
  01a7584  addic 5, 5, 8
  01a7588  bdnz 0x1a7564
  01a758c  li 5, 4
  01a7590  ori 3, 1, 0
  01a7594  mtctr 5
  01a7598  lis 4, 115
  01a759c  addic 5, 3, 304
  01a75a0  addic 4, 4, 22752
  01a75a4  ori 7, 5, 0
  01a75a8  lfs 3, 304(3)
  01a75ac  lfs 4, 0(4)
  01a75b0  fmuls 3, 3, 4
  01a75b4  lfs 4, 4(4)
  01a75b8  addic 4, 4, 8
  01a75bc  stfs 3, 304(3)
  01a75c0  lfs 3, 4(5)
  01a75c4  addic 3, 3, 8
  01a75c8  fmuls 3, 3, 4
  01a75cc  stfs 3, 4(5)
  01a75d0  addic 5, 5, 8
  01a75d4  bdnz 0x1a75a8
  01a75d8  fmr 3, 29
  01a75dc  ori 3, 1, 0
  01a75e0  mtctr 6
  01a75e4  lfs 4, 304(3)
  01a75e8  fadds 3, 3, 4
  01a75ec  addic 3, 3, 16
  01a75f0  lfs 4, 4(7)
  01a75f4  lfs 5, 8(7)
  01a75f8  lfs 6, 12(7)
  01a75fc  addic 7, 7, 16
  01a7600  fadds 3, 3, 4
  01a7604  fadds 3, 3, 5
  01a7608  fadds 3, 3, 6
  01a760c  bdnz 0x1a75e4
  01a7610  lis 3, 26
  01a7614  addi 3, 3, 24276
  01a7618  lfs 4, 56(3)
  01a761c  fadds 3, 3, 4
  01a7620  fmadds 1, 3, 1, 2
  01a7624  fmr 2, 1
  01a7628  fmr 1, 30
  01a762c  bl 0x5026a0
  01a7630  nop
  01a7634  lfs 2, 192(29)
  01a7638  lfs 3, 16(31)
  01a763c  lfs 4, 196(29)
  01a7640  lfs 5, 20(31)
  01a7644  fsubs 2, 2, 3
  01a7648  fsubs 3, 4, 5
  01a764c  fmr 30, 1
  01a7650  addic 3, 31, 72
  01a7654  fabs 5, 2
  01a7658  fabs 4, 3
  01a765c  stfs 2, 224(1)
  01a7660  stfs 3, 228(1)
  01a7664  fsubs 2, 5, 4
  01a7668  stfs 2, 232(1)
  01a766c  lwz 4, 224(1)
  01a7670  lfs 1, 224(1)
  01a7674  lwz 5, 228(1)
  01a7678  lfs 2, 228(1)
  01a767c  fabs 1, 1
  01a7680  lwz 6, 232(1)
  01a7684  rlwinm 5, 5, 3, 29, 29
  01a7688  fabs 3, 2
  01a768c  lfs 2, 232(1)
  01a7690  rlwimi 5, 6, 2, 30, 30
  01a7694  fsub 6, 2, 29
  01a7698  fsub 2, 2, 29
  01a769c  rlwimi 5, 4, 4, 28, 28
  01a76a0  ori 4, 30, 0
  01a76a4  rlwimi 4, 5, 2, 26, 28
  01a76a8  slwi 5, 5, 2
  01a76ac  clrldi 4, 4, 32
  01a76b0  fsel 4, 6, 1, 4
  01a76b4  lfsx 1, 30, 5
  01a76b8  fsel 3, 2, 3, 5
  01a76bc  lfs 2, 4(4)
  01a76c0  fcmpu 0, 4, 29
  01a76c4  bt 1, 0x1a76d0
  01a76c8  fmr 1, 29
  01a76cc  b 0x1a77f4
  01a76d0  fsubs 5, 3, 4
  01a76d4  fadds 3, 3, 4
  01a76d8  addic 4, 1, 16
  01a76dc  li 8, 2
  01a76e0  addic 5, 4, 256
  01a76e4  addic 6, 4, 272
  01a76e8  mtctr 8
  01a76ec  fdivs 3, 5, 3
  01a76f0  fmuls 4, 3, 3
  01a76f4  stfs 3, 284(1)
  01a76f8  stfs 3, 276(1)
  01a76fc  stfs 3, 280(1)
  01a7700  stfs 3, 272(1)
  01a7704  lfs 6, 284(1)
  01a7708  lfs 7, 276(1)
  01a770c  lfs 8, 280(1)
  01a7710  fmuls 5, 4, 4
  01a7714  fmuls 7, 7, 4
  01a7718  fmuls 6, 6, 5
  01a771c  fmuls 3, 5, 5
  01a7720  fmuls 5, 8, 5
  01a7724  stfs 7, 276(1)
  01a7728  fmuls 4, 6, 4
  01a772c  stfs 5, 280(1)
  01a7730  stfs 4, 284(1)
  01a7734  lfs 4, 256(4)
  01a7738  fmuls 4, 4, 3
  01a773c  stfs 4, 272(4)
  01a7740  lfs 4, 4(5)
  01a7744  addic 4, 4, 8
  01a7748  addic 5, 5, 8
  01a774c  fmuls 4, 4, 3
  01a7750  stfs 4, 4(6)
  01a7754  addic 6, 6, 8
  01a7758  bdnz 0x1a7734
  01a775c  li 6, 4
  01a7760  ori 4, 1, 0
  01a7764  mtctr 6
  01a7768  lis 5, 115
  01a776c  addic 6, 4, 272
  01a7770  addic 5, 5, 22752
  01a7774  ori 7, 6, 0
  01a7778  lfs 3, 272(4)
  01a777c  lfs 4, 0(5)
  01a7780  fmuls 3, 3, 4
  01a7784  lfs 4, 4(5)
  01a7788  addic 5, 5, 8
  01a778c  stfs 3, 272(4)
  01a7790  lfs 3, 4(6)
  01a7794  addic 4, 4, 8
  01a7798  fmuls 3, 3, 4
  01a779c  stfs 3, 4(6)
  01a77a0  addic 6, 6, 8
  01a77a4  bdnz 0x1a7778
  01a77a8  fmr 3, 29
  01a77ac  ori 4, 1, 0
  01a77b0  mtctr 8
  01a77b4  lfs 4, 272(4)
  01a77b8  fadds 3, 3, 4
  01a77bc  addic 4, 4, 16
  01a77c0  lfs 4, 4(7)
  01a77c4  lfs 5, 8(7)
  01a77c8  lfs 6, 12(7)
  01a77cc  addic 7, 7, 16
  01a77d0  fadds 3, 3, 4
  01a77d4  fadds 3, 3, 5
  01a77d8  fadds 3, 3, 6
  01a77dc  bdnz 0x1a77b4
  01a77e0  lis 4, 26
  01a77e4  addi 4, 4, 24276
  01a77e8  lfs 4, 56(4)
  01a77ec  fadds 3, 3, 4
  01a77f0  fmadds 1, 3, 1, 2
  01a77f4  lis 4, 26
  01a77f8  lis 6, 114
  01a77fc  addi 30, 4, 24276
  01a7800  lis 4, 114
  01a7804  addic 5, 29, 224
  01a7808  lfs 2, 60(30)
  01a780c  lfs 3, -3048(4)
  01a7810  lfs 4, 64(30)
  01a7814  fmuls 2, 3, 2
  01a7818  lfs 5, -3052(6)
  01a781c  fmuls 4, 5, 4
  01a7820  fmr 3, 2
  01a7824  bl 0x10a2e0
  01a7828  nop
  01a782c  lfs 1, 56(30)
  01a7830  fcmpu 0, 30, 1
  01a7834  cror 6, 1, 2
  01a7838  bt 6, 0x1a78d4
  01a783c  lfs 1, 196(29)
  01a7840  lfs 2, 20(31)
  01a7844  lfs 3, 192(29)
  01a7848  fsubs 1, 1, 2
  01a784c  lfs 4, 16(31)
  01a7850  fsubs 3, 3, 4
  01a7854  lis 3, 116
  01a7858  lis 4, 114
  01a785c  lfs 6, 1984(3)
  01a7860  fmuls 5, 1, 1
  01a7864  lfs 7, -3052(4)
  01a7868  fmuls 6, 6, 7
  01a786c  lis 3, 26
  01a7870  addic 5, 31, 16
  01a7874  fmadds 5, 3, 3, 5
  01a7878  addi 4, 3, 24276
  01a787c  lwz 3, 236(29)
  01a7880  ori 6, 5, 0
  01a7884  fsqrts 5, 5
  01a7888  extsw 3, 3
  01a788c  fdivs 6, 6, 5
  01a7890  fsub 7, 29, 5
  01a7894  fsub 8, 29, 5
  01a7898  fsub 9, 5, 29
  01a789c  fsub 5, 5, 29
  01a78a0  fmuls 1, 6, 1
  01a78a4  fmuls 3, 6, 3
  01a78a8  fsel 6, 7, 29, 1
  01a78ac  fsel 7, 8, 29, 3
  01a78b0  fsel 1, 9, 6, 1
  01a78b4  fsel 3, 5, 7, 3
  01a78b8  fadds 1, 2, 1
  01a78bc  fadds 2, 4, 3
  01a78c0  stfs 1, 20(31)
  01a78c4  stfs 2, 16(31)
  01a78c8  lfs 1, 72(4)
  01a78cc  bl 0x1145d8
  01a78d0  nop
  01a78d4  lwz 3, 180(29)
  01a78d8  cmpwi 3, 2
  01a78dc  bt 2, 0x1a78ec
  01a78e0  li 3, 7
  01a78e4  stb 3, 32(31)
  01a78e8  b 0x1a7bf0
  01a78ec  lis 3, 26
  01a78f0  addi 3, 3, 24276
  01a78f4  lfs 1, 72(3)
  01a78f8  fcmpu 0, 31, 1
  01a78fc  cror 6, 1, 2
  01a7900  bt 6, 0x1a7bf0
  01a7904  li 3, 7
  01a7908  lbz 4, 83(31)
  01a790c  cmpwi 4, 1
  01a7910  stb 3, 32(31)
  01a7914  bt 2, 0x1a7bf0
  01a7918  lis 3, 26
  01a791c  lis 4, 114
  01a7920  addi 3, 3, 24276
  01a7924  li 5, 0
  01a7928  lfs 1, 36(3)
  01a792c  lfs 2, -3056(4)
  01a7930  ori 3, 31, 0
  01a7934  fmuls 1, 2, 1
  01a7938  li 4, 1
  01a793c  fctiwz 1, 1
  01a7940  stfd 1, 400(1)
  01a7944  lwz 6, 404(1)
  01a7948  extsw 6, 6
  01a794c  bl 0xfddc0
  01a7950  nop
  01a7954  b 0x1a7bf0
  01a7958  lis 3, 151
  01a795c  li 5, 1
  01a7960  addic 3, 3, -16400
  01a7964  li 4, 0
  01a7968  li 6, 255
  01a796c  stb 5, 35(3)
  01a7970  stw 4, 272(29)
  01a7974  stb 6, 48(31)
  01a7978  lbz 3, 46(29)
  01a797c  cmpwi 3, 2
  01a7980  bf 2, 0x1a7a20
  01a7984  lis 3, 164
  01a7988  lwz 4, 256(29)
  01a798c  slwi 4, 4, 8
  01a7990  lwz 3, -28512(3)
  01a7994  addc 3, 3, 4
  01a7998  clrldi 3, 3, 32
  01a799c  bl 0x188fb4
  01a79a0  nop
  01a79a4  lwz 3, 260(29)
  01a79a8  extsw 3, 3
  01a79ac  bl 0x355188
  01a79b0  nop
  01a79b4  lhz 3, 52(31)
  01a79b8  li 4, 0
  01a79bc  lbz 6, 83(31)
  01a79c0  ori 3, 3, 1
  01a79c4  li 5, 15
  01a79c8  cmpwi 6, 1
  01a79cc  stb 4, 49(31)
  01a79d0  stw 4, 148(31)
  01a79d4  sth 3, 52(31)
  01a79d8  stb 5, 32(31)
  01a79dc  bt 2, 0x1a7bf0
  01a79e0  lis 3, 26
  01a79e4  lis 4, 114
  01a79e8  addi 3, 3, 24276
  01a79ec  li 5, 0
  01a79f0  lfs 1, 36(3)
  01a79f4  lfs 2, -3056(4)
  01a79f8  ori 3, 31, 0
  01a79fc  fmuls 1, 2, 1
  01a7a00  li 4, 1
  01a7a04  fctiwz 1, 1
  01a7a08  stfd 1, 400(1)
  01a7a0c  lwz 6, 404(1)
  01a7a10  extsw 6, 6
  01a7a14  bl 0xfddc0
  01a7a18  nop
  01a7a1c  b 0x1a7bf0
  01a7a20  lbz 3, 112(31)
  01a7a24  rlwinm 3, 3, 0, 30, 30
  01a7a28  cmpwi 3, 0
  01a7a2c  bt 2, 0x1a7bf0
  01a7a30  lis 3, 26
  01a7a34  lfs 1, 16(31)
  01a7a38  lfs 2, 20(31)
  01a7a3c  addic 4, 1, 128
  01a7a40  addi 5, 3, 24276
  01a7a44  stfs 1, 128(1)
  01a7a48  lfs 1, 28(31)
  01a7a4c  ori 3, 31, 0
  01a7a50  stfs 2, 132(1)
  01a7a54  li 6, -1
  01a7a58  stfs 1, 140(1)
  01a7a5c  lfs 1, 72(5)
  01a7a60  lfs 2, 24(31)
  01a7a64  fadds 1, 2, 1
  01a7a68  stfs 1, 136(1)
  01a7a6c  lfs 1, 116(5)
  01a7a70  lfs 2, 44(5)
  01a7a74  bl 0x110040
  01a7a78  nop
  01a7a7c  ori 3, 31, 0
  01a7a80  li 9, 2
  01a7a84  li 4, 1698
  01a7a88  li 5, 1
  01a7a8c  li 6, 1699
  01a7a90  li 7, 3
  01a7a94  li 8, 6
  01a7a98  bl 0x11aa78
  01a7a9c  nop
  01a7aa0  lis 3, 164
  01a7aa4  lwz 4, 256(29)
  01a7aa8  slwi 4, 4, 8
  01a7aac  lwz 3, -28512(3)
  01a7ab0  addc 3, 3, 4
  01a7ab4  clrldi 3, 3, 32
  01a7ab8  bl 0x188fb4
  01a7abc  nop
  01a7ac0  lwz 3, 260(29)
  01a7ac4  extsw 3, 3
  01a7ac8  bl 0x355188
  01a7acc  nop
  01a7ad0  li 3, 15
  01a7ad4  lbz 4, 83(31)
  01a7ad8  cmpwi 4, 1
  01a7adc  stb 3, 32(31)
  01a7ae0  bt 2, 0x1a7b20
  01a7ae4  lis 3, 26
  01a7ae8  lis 4, 114
  01a7aec  addi 3, 3, 24276
  01a7af0  li 5, 0
  01a7af4  lfs 1, 36(3)
  01a7af8  lfs 2, -3056(4)
  01a7afc  ori 3, 31, 0
  01a7b00  li 4, 1
  01a7b04  fmuls 1, 2, 1
  01a7b08  fctiwz 1, 1
  01a7b0c  stfd 1, 400(1)
  01a7b10  lwz 6, 404(1)
  01a7b14  extsw 6, 6
  01a7b18  bl 0xfddc0
  01a7b1c  nop
  01a7b20  li 3, 0
  01a7b24  lhz 4, 52(31)
  01a7b28  ori 4, 4, 1
  01a7b2c  stb 3, 49(31)
  01a7b30  lwz 5, 376(29)
  01a7b34  stw 3, 148(31)
  01a7b38  cmpwi 5, 0
  01a7b3c  sth 4, 52(31)
  01a7b40  bf 2, 0x1a7bf0
  01a7b44  li 3, 10
  01a7b48  bl 0x11b728
  01a7b4c  nop
  01a7b50  b 0x1a7bf0
  01a7b54  lis 5, 149
  01a7b58  lis 6, 149
  01a7b5c  li 3, 0
  01a7b60  addic 5, 5, 16352
  01a7b64  addic 6, 6, 6752
  01a7b68  lbzx 4, 5, 3
  01a7b6c  cmpwi 4, 0
  01a7b70  bt 2, 0x1a7ba4
  01a7b74  sldi 4, 3, 7
  01a7b78  sldi 7, 3, 5
  01a7b7c  addc 4, 4, 7
  01a7b80  addc 4, 6, 4
  01a7b84  clrldi 4, 4, 32
  01a7b88  lhz 7, 134(4)
  01a7b8c  cmpwi 7, 18
  01a7b90  bf 2, 0x1a7ba4
  01a7b94  ori 3, 4, 0
  01a7b98  bl 0x3fad4
  01a7b9c  nop
  01a7ba0  b 0x1a7bb4
  01a7ba4  addic 3, 3, 1
  01a7ba8  extsw 3, 3
  01a7bac  cmpwi 3, 48
  01a7bb0  bt 0, 0x1a7b68
  01a7bb4  lis 3, 161
  01a7bb8  lwz 3, 1800(3)
  01a7bbc  cmpwi 3, 2
  01a7bc0  bf 2, 0x1a7bf0
  01a7bc4  lis 3, 164
  01a7bc8  lwz 4, 252(29)
  01a7bcc  slwi 4, 4, 8
  01a7bd0  lwz 3, -28512(3)
  01a7bd4  addc 3, 3, 4
  01a7bd8  clrldi 3, 3, 32
  01a7bdc  bl 0x188fb4
  01a7be0  nop
  01a7be4  ori 3, 31, 0
  01a7be8  bl 0xefb38
  01a7bec  nop
  01a7bf0  ld 0, 512(1)
  01a7bf4  mtlr 0
  01a7bf8  lfd 29, 472(1)
  01a7bfc  lfd 30, 480(1)
  01a7c00  lfd 31, 488(1)
  01a7c04  ld 26, 424(1)
  01a7c08  ld 27, 432(1)
  01a7c0c  ld 28, 440(1)
  01a7c10  ld 29, 448(1)
  01a7c14  ld 30, 456(1)
  01a7c18  ld 31, 464(1)
  01a7c1c  addi 1, 1, 496
  01a7c20  blr
