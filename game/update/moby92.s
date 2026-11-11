# game/update/moby92.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_92:   # 0x4b2670, 0x5f0 bytes
  04b2670  stdu 1, -144(1)
  04b2674  mflr 0
  04b2678  std 0, 160(1)
  04b267c  stfd 31, 136(1)
  04b2680  std 31, 128(1)
  04b2684  ori 31, 3, 0
  04b2688  std 30, 120(1)
  04b268c  lbz 3, 32(31)
  04b2690  lwz 30, 120(31)
  04b2694  cmpwi 3, 5
  04b2698  cmpwi 1, 3, 4
  04b269c  cmpwi 6, 3, 3
  04b26a0  std 29, 112(1)
  04b26a4  cmpwi 7, 3, 2
  04b26a8  bt 2, 0x4b2bd8
  04b26ac  bt 6, 0x4b2a28
  04b26b0  bt 26, 0x4b2994
  04b26b4  bt 30, 0x4b2850
  04b26b8  cmpwi 3, 1
  04b26bc  bt 2, 0x4b274c
  04b26c0  cmpwi 3, 0
  04b26c4  bf 2, 0x4b2c40
  04b26c8  lfs 1, 16(31)
  04b26cc  li 3, 1
  04b26d0  li 4, 0
  04b26d4  stfs 1, 0(30)
  04b26d8  lfs 1, 20(31)
  04b26dc  stfs 1, 4(30)
  04b26e0  lfs 1, 24(31)
  04b26e4  stfs 1, 8(30)
  04b26e8  lfs 1, 28(31)
  04b26ec  stfs 1, 12(30)
  04b26f0  stb 3, 32(31)
  04b26f4  lwz 3, 32(30)
  04b26f8  stw 4, 40(30)
  04b26fc  cmpwi 3, -1
  04b2700  lfs 1, 24(31)
  04b2704  bt 2, 0x4b2710
  04b2708  li 3, 255
  04b270c  stb 3, 48(31)
  04b2710  lis 3, 151
  04b2714  addic 3, 3, -13812
  04b2718  lbz 3, 16(3)
  04b271c  cmpwi 3, 0
  04b2720  bt 2, 0x4b2c40
  04b2724  lwz 3, 32(30)
  04b2728  cmpwi 3, -1
  04b272c  bt 2, 0x4b2c40
  04b2730  lis 3, 143
  04b2734  li 4, 5
  04b2738  lfs 2, 17476(3)
  04b273c  stb 4, 32(31)
  04b2740  fsubs 1, 1, 2
  04b2744  stfs 1, 24(31)
  04b2748  b 0x4b2c40
  04b274c  li 3, 0
  04b2750  lwz 4, 32(30)
  04b2754  cmpwi 4, -1
  04b2758  stw 3, 24(30)
  04b275c  bt 2, 0x4b276c
  04b2760  lis 3, 162
  04b2764  li 4, 0
  04b2768  stw 4, 2088(3)
  04b276c  lwz 3, 36(30)
  04b2770  cmpwi 3, -1
  04b2774  bt 2, 0x4b27cc
  04b2778  lis 4, 164
  04b277c  slwi 3, 3, 8
  04b2780  lwz 4, -28512(4)
  04b2784  addc 3, 4, 3
  04b2788  cmpwi 3, 0
  04b278c  bt 2, 0x4b27a8
  04b2790  clrldi 3, 3, 32
  04b2794  lbz 3, 32(3)
  04b2798  cmpwi 3, 254
  04b279c  cmpwi 1, 3, 253
  04b27a0  bt 2, 0x4b27a8
  04b27a4  bf 6, 0x4b2810
  04b27a8  lis 3, 268
  04b27ac  lwz 3, 20780(3)
  04b27b0  cmpwi 3, 0
  04b27b4  bf 2, 0x4b2810
  04b27b8  li 3, 2
  04b27bc  li 4, 1
  04b27c0  stb 3, 32(31)
  04b27c4  stw 4, 40(30)
  04b27c8  b 0x4b2810
  04b27cc  lis 29, 151
  04b27d0  lwz 4, 16(30)
  04b27d4  addic 29, 29, -25376
  04b27d8  extsw 4, 4
  04b27dc  addic 3, 29, 128
  04b27e0  bl 0x110b70
  04b27e4  nop
  04b27e8  cmpwi 3, 0
  04b27ec  bt 2, 0x4b2810
  04b27f0  lwz 3, 32(30)
  04b27f4  cmpwi 3, -1
  04b27f8  bt 2, 0x4b2808
  04b27fc  lbz 3, 8356(29)
  04b2800  cmpwi 3, 2
  04b2804  bf 2, 0x4b2810
  04b2808  li 3, 2
  04b280c  stb 3, 32(31)
  04b2810  lis 3, 151
  04b2814  addic 3, 3, -13812
  04b2818  lbz 3, 16(3)
  04b281c  cmpwi 3, 0
  04b2820  bt 2, 0x4b2c40
  04b2824  lwz 3, 32(30)
  04b2828  cmpwi 3, -1
  04b282c  bt 2, 0x4b2c40
  04b2830  lis 3, 143
  04b2834  lfs 1, 8(30)
  04b2838  li 4, 5
  04b283c  lfs 2, 17476(3)
  04b2840  stb 4, 32(31)
  04b2844  fsubs 1, 1, 2
  04b2848  stfs 1, 24(31)
  04b284c  b 0x4b2c40
  04b2850  lis 4, 75
  04b2854  lis 3, 143
  04b2858  addi 4, 4, 9816
  04b285c  lfs 1, 17476(3)
  04b2860  lfs 2, 0(4)
  04b2864  lis 3, 114
  04b2868  lwz 4, 32(30)
  04b286c  fmuls 2, 1, 2
  04b2870  cmpwi 4, -1
  04b2874  lfs 31, -3052(3)
  04b2878  fmuls 31, 2, 31
  04b287c  bt 2, 0x4b2890
  04b2880  lis 3, 75
  04b2884  addi 3, 3, 9816
  04b2888  lfs 2, 4(3)
  04b288c  fmuls 31, 31, 2
  04b2890  lwz 3, 28(30)
  04b2894  lis 29, 150
  04b2898  sldi 4, 3, 7
  04b289c  sldi 5, 3, 4
  04b28a0  addic 29, 29, 14176
  04b28a4  subc 4, 4, 5
  04b28a8  extsw 4, 4
  04b28ac  addc 4, 29, 4
  04b28b0  lwz 5, 136(4)
  04b28b4  cmpw 5, 31
  04b28b8  bf 2, 0x4b28c8
  04b28bc  lbz 4, 116(4)
  04b28c0  cmpwi 4, 0
  04b28c4  bf 2, 0x4b28e8
  04b28c8  li 4, 4
  04b28cc  li 3, 0
  04b28d0  ori 5, 31, 0
  04b28d4  bl 0x15d12c
  04b28d8  nop
  04b28dc  lis 4, 143
  04b28e0  lfs 1, 17476(4)
  04b28e4  stw 3, 28(30)
  04b28e8  lfs 2, 24(30)
  04b28ec  cmpwi 1, 3, -1
  04b28f0  fadds 31, 2, 31
  04b28f4  fcmpu 0, 31, 1
  04b28f8  stfs 31, 24(30)
  04b28fc  cror 2, 0, 2
  04b2900  bt 2, 0x4b2960
  04b2904  bt 6, 0x4b2948
  04b2908  sldi 4, 3, 7
  04b290c  sldi 5, 3, 4
  04b2910  subc 4, 4, 5
  04b2914  extsw 4, 4
  04b2918  addc 29, 29, 4
  04b291c  lwz 4, 136(29)
  04b2920  cmpw 4, 31
  04b2924  bf 2, 0x4b2948
  04b2928  lbz 4, 116(29)
  04b292c  cmpwi 4, 0
  04b2930  bt 2, 0x4b2948
  04b2934  extsw 3, 3
  04b2938  bl 0x15cdb0
  04b293c  nop
  04b2940  lis 3, 143
  04b2944  lfs 1, 17476(3)
  04b2948  li 3, -1
  04b294c  stfs 1, 24(30)
  04b2950  li 4, 3
  04b2954  stw 3, 28(30)
  04b2958  stb 4, 32(31)
  04b295c  lfs 31, 24(30)
  04b2960  lis 3, 75
  04b2964  lwz 4, 32(30)
  04b2968  lfs 1, 8(30)
  04b296c  addi 3, 3, 9816
  04b2970  cmpwi 4, -1
  04b2974  lfs 2, 8(3)
  04b2978  bf 2, 0x4b2988
  04b297c  lis 3, 75
  04b2980  addi 3, 3, 9816
  04b2984  lfs 2, 12(3)
  04b2988  fmadds 1, 31, 2, 1
  04b298c  stfs 1, 24(31)
  04b2990  b 0x4b2c40
  04b2994  lwz 3, 32(30)
  04b2998  cmpwi 3, -1
  04b299c  bt 2, 0x4b29ac
  04b29a0  lis 3, 162
  04b29a4  li 4, 1
  04b29a8  stw 4, 2088(3)
  04b29ac  lis 3, 151
  04b29b0  lwz 4, 20(30)
  04b29b4  addic 29, 3, -25376
  04b29b8  extsw 4, 4
  04b29bc  addic 29, 29, 128
  04b29c0  ori 3, 29, 0
  04b29c4  bl 0x110b70
  04b29c8  nop
  04b29cc  cmpwi 3, 0
  04b29d0  bf 2, 0x4b29f4
  04b29d4  lis 3, 149
  04b29d8  lwz 4, 20(30)
  04b29dc  addic 3, 3, 5376
  04b29e0  extsw 4, 4
  04b29e4  bl 0x110b70
  04b29e8  nop
  04b29ec  cmpwi 3, 0
  04b29f0  bt 2, 0x4b2a10
  04b29f4  ori 3, 29, 0
  04b29f8  lwz 4, 32(30)
  04b29fc  extsw 4, 4
  04b2a00  bl 0x110b70
  04b2a04  nop
  04b2a08  cmpwi 3, 0
  04b2a0c  bt 2, 0x4b2c40
  04b2a10  lwz 3, 40(30)
  04b2a14  cmpwi 3, 0
  04b2a18  bf 2, 0x4b2c40
  04b2a1c  li 3, 4
  04b2a20  stb 3, 32(31)
  04b2a24  b 0x4b2c40
  04b2a28  lis 3, 75
  04b2a2c  lis 4, 143
  04b2a30  addi 3, 3, 9816
  04b2a34  lis 5, 114
  04b2a38  lfs 1, 0(3)
  04b2a3c  lfs 2, 17476(4)
  04b2a40  lfs 31, -3052(5)
  04b2a44  fmuls 1, 2, 1
  04b2a48  lwz 3, 32(30)
  04b2a4c  cmpwi 3, -1
  04b2a50  fmuls 31, 1, 31
  04b2a54  bt 2, 0x4b2a68
  04b2a58  lis 3, 75
  04b2a5c  addi 3, 3, 9816
  04b2a60  lfs 1, 4(3)
  04b2a64  fmuls 31, 31, 1
  04b2a68  lwz 3, 28(30)
  04b2a6c  lis 29, 150
  04b2a70  sldi 4, 3, 7
  04b2a74  sldi 5, 3, 4
  04b2a78  addic 29, 29, 14176
  04b2a7c  subc 4, 4, 5
  04b2a80  extsw 4, 4
  04b2a84  addc 4, 29, 4
  04b2a88  lwz 5, 136(4)
  04b2a8c  cmpw 5, 31
  04b2a90  bf 2, 0x4b2aa0
  04b2a94  lbz 4, 116(4)
  04b2a98  cmpwi 4, 0
  04b2a9c  bf 2, 0x4b2ab8
  04b2aa0  li 3, 0
  04b2aa4  li 4, 4
  04b2aa8  ori 5, 31, 0
  04b2aac  bl 0x15d12c
  04b2ab0  nop
  04b2ab4  stw 3, 28(30)
  04b2ab8  lfs 1, 24(30)
  04b2abc  lis 4, 75
  04b2ac0  cmpwi 1, 3, -1
  04b2ac4  fsubs 1, 1, 31
  04b2ac8  addi 4, 4, 9816
  04b2acc  stfs 1, 24(30)
  04b2ad0  lfs 2, 16(4)
  04b2ad4  fcmpu 0, 1, 2
  04b2ad8  cror 2, 1, 2
  04b2adc  bt 2, 0x4b2b54
  04b2ae0  bt 6, 0x4b2b1c
  04b2ae4  sldi 4, 3, 7
  04b2ae8  sldi 5, 3, 4
  04b2aec  subc 4, 4, 5
  04b2af0  extsw 4, 4
  04b2af4  addc 29, 29, 4
  04b2af8  lwz 4, 136(29)
  04b2afc  cmpw 4, 31
  04b2b00  bf 2, 0x4b2b1c
  04b2b04  lbz 4, 116(29)
  04b2b08  cmpwi 4, 0
  04b2b0c  bt 2, 0x4b2b1c
  04b2b10  extsw 3, 3
  04b2b14  bl 0x15cdb0
  04b2b18  nop
  04b2b1c  li 3, -1
  04b2b20  li 4, 0
  04b2b24  li 5, 1
  04b2b28  stw 3, 28(30)
  04b2b2c  stw 4, 24(30)
  04b2b30  stb 5, 32(31)
  04b2b34  lwz 3, 32(30)
  04b2b38  cmpwi 3, -1
  04b2b3c  bt 2, 0x4b2b54
  04b2b40  li 3, 5
  04b2b44  lis 4, 162
  04b2b48  li 5, 0
  04b2b4c  stb 3, 32(31)
  04b2b50  stw 5, 2088(4)
  04b2b54  lis 3, 75
  04b2b58  lwz 4, 32(30)
  04b2b5c  addi 3, 3, 9816
  04b2b60  lfs 1, 8(30)
  04b2b64  cmpwi 4, -1
  04b2b68  lfs 3, 24(30)
  04b2b6c  lfs 2, 8(3)
  04b2b70  bf 2, 0x4b2b80
  04b2b74  lis 3, 75
  04b2b78  addi 3, 3, 9816
  04b2b7c  lfs 2, 12(3)
  04b2b80  fmadds 1, 3, 2, 1
  04b2b84  lis 3, 151
  04b2b88  lwz 4, 16(30)
  04b2b8c  addic 3, 3, -25376
  04b2b90  extsw 4, 4
  04b2b94  addic 3, 3, 128
  04b2b98  stfs 1, 24(31)
  04b2b9c  bl 0x110b70
  04b2ba0  nop
  04b2ba4  cmpwi 3, 0
  04b2ba8  bf 2, 0x4b2bcc
  04b2bac  lis 3, 149
  04b2bb0  lwz 4, 16(30)
  04b2bb4  addic 3, 3, 5376
  04b2bb8  extsw 4, 4
  04b2bbc  bl 0x110b70
  04b2bc0  nop
  04b2bc4  cmpwi 3, 0
  04b2bc8  bt 2, 0x4b2c40
  04b2bcc  li 3, 2
  04b2bd0  stb 3, 32(31)
  04b2bd4  b 0x4b2c40
  04b2bd8  lis 3, 151
  04b2bdc  addic 3, 3, -13812
  04b2be0  lbz 3, 16(3)
  04b2be4  cmpwi 3, 0
  04b2be8  bt 2, 0x4b2c10
  04b2bec  lis 3, 143
  04b2bf0  lfs 1, 8(30)
  04b2bf4  lis 4, 162
  04b2bf8  li 5, 1
  04b2bfc  lfs 2, 17476(3)
  04b2c00  stw 5, 2088(4)
  04b2c04  fsubs 1, 1, 2
  04b2c08  stfs 1, 24(31)
  04b2c0c  b 0x4b2c40
  04b2c10  lis 3, 151
  04b2c14  addic 3, 3, -25376
  04b2c18  lbz 3, 8356(3)
  04b2c1c  cmpwi 3, 2
  04b2c20  bt 2, 0x4b2c40
  04b2c24  li 3, 1
  04b2c28  lis 4, 162
  04b2c2c  lfs 1, 8(30)
  04b2c30  li 5, 0
  04b2c34  stb 3, 32(31)
  04b2c38  stfs 1, 24(31)
  04b2c3c  stw 5, 2088(4)
  04b2c40  ld 0, 160(1)
  04b2c44  mtlr 0
  04b2c48  lfd 31, 136(1)
  04b2c4c  ld 29, 112(1)
  04b2c50  ld 30, 120(1)
  04b2c54  ld 31, 128(1)
  04b2c58  addi 1, 1, 144
  04b2c5c  blr
