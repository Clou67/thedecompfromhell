# idol/mUnk.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

idol_draw::DrawGalacticMapFrame:   # 0x4d27b0, 0x66c bytes
  04d27b0  stdu 1, -320(1)
  04d27b4  mflr 0
  04d27b8  std 0, 336(1)
  04d27bc  stfd 29, 296(1)
  04d27c0  stfd 30, 304(1)
  04d27c4  stfd 31, 312(1)
  04d27c8  std 30, 280(1)
  04d27cc  ori 30, 4, 0
  04d27d0  std 28, 264(1)
  04d27d4  lis 4, 77
  04d27d8  ori 28, 3, 0
  04d27dc  std 31, 288(1)
  04d27e0  li 3, 0
  04d27e4  std 29, 272(1)
  04d27e8  ori 31, 6, 0
  04d27ec  std 27, 256(1)
  04d27f0  ori 29, 5, 0
  04d27f4  std 26, 248(1)
  04d27f8  std 25, 240(1)
  04d27fc  std 24, 232(1)
  04d2800  std 23, 224(1)
  04d2804  std 22, 216(1)
  04d2808  std 21, 208(1)
  04d280c  std 20, 200(1)
  04d2810  std 19, 192(1)
  04d2814  std 18, 184(1)
  04d2818  std 17, 176(1)
  04d281c  std 16, 168(1)
  04d2820  std 15, 160(1)
  04d2824  std 14, 152(1)
  04d2828  addi 27, 4, 10148
  04d282c  bl 0x6d704
  04d2830  nop
  04d2834  li 3, 0
  04d2838  li 4, 1
  04d283c  li 5, 0
  04d2840  li 6, 1
  04d2844  li 7, 128
  04d2848  bl 0x502ea8
  04d284c  nop
  04d2850  ori 4, 3, 0
  04d2854  li 3, 3
  04d2858  bl 0x174f80
  04d285c  nop
  04d2860  li 3, 1
  04d2864  li 4, 5
  04d2868  li 10, 0
  04d286c  li 5, 4
  04d2870  li 6, 0
  04d2874  li 7, 0
  04d2878  li 8, 0
  04d287c  li 9, 0
  04d2880  bl 0x502f98
  04d2884  nop
  04d2888  ori 4, 3, 0
  04d288c  li 3, 22
  04d2890  bl 0x174f80
  04d2894  nop
  04d2898  lis 4, -32768
  04d289c  subc 5, 30, 28
  04d28a0  subc 6, 31, 29
  04d28a4  clrldi 18, 4, 32
  04d28a8  li 3, 0
  04d28ac  extsw 31, 5
  04d28b0  extsw 30, 6
  04d28b4  li 4, 0
  04d28b8  li 5, 512
  04d28bc  li 6, 448
  04d28c0  li 8, 0
  04d28c4  ori 7, 18, 0
  04d28c8  bl 0xca72c
  04d28cc  nop
  04d28d0  lis 3, 0
  04d28d4  li 4, 14
  04d28d8  ori 3, 3, 59802
  04d28dc  bl 0xca3e4
  04d28e0  nop
  04d28e4  li 4, 0
  04d28e8  li 8, 0
  04d28ec  li 10, 128
  04d28f0  li 5, 0
  04d28f4  ori 6, 31, 0
  04d28f8  ori 7, 30, 0
  04d28fc  li 9, 0
  04d2900  bl 0xd721c
  04d2904  nop
  04d2908  li 3, 0
  04d290c  li 4, 0
  04d2910  li 8, 0
  04d2914  li 5, 0
  04d2918  li 6, 0
  04d291c  li 7, 0
  04d2920  bl 0x502f08
  04d2924  nop
  04d2928  ori 4, 3, 0
  04d292c  li 3, 6
  04d2930  bl 0x174f80
  04d2934  nop
  04d2938  lis 3, 0
  04d293c  li 4, 15
  04d2940  ori 3, 3, 59802
  04d2944  bl 0xca3e4
  04d2948  nop
  04d294c  lis 6, 346
  04d2950  li 4, 0
  04d2954  li 9, 0
  04d2958  li 5, 0
  04d295c  ori 7, 30, 0
  04d2960  lwz 8, -15568(6)
  04d2964  ori 6, 31, 0
  04d2968  li 10, 128
  04d296c  clrlwi 8, 8, 20
  04d2970  bl 0xd721c
  04d2974  nop
  04d2978  li 3, 1
  04d297c  li 4, 1
  04d2980  li 5, 0
  04d2984  li 6, 0
  04d2988  li 7, 0
  04d298c  li 8, 0
  04d2990  bl 0x502f08
  04d2994  nop
  04d2998  ori 4, 3, 0
  04d299c  li 3, 6
  04d29a0  bl 0x174f80
  04d29a4  nop
  04d29a8  lis 3, 151
  04d29ac  lis 4, 151
  04d29b0  lfs 31, 0(27)
  04d29b4  addic 3, 3, -13792
  04d29b8  lfs 30, 4(27)
  04d29bc  addic 4, 4, -13812
  04d29c0  lis 5, -32528
  04d29c4  lis 16, 115
  04d29c8  std 3, 120(1)
  04d29cc  lis 14, 162
  04d29d0  lfs 29, 8(27)
  04d29d4  lis 15, 115
  04d29d8  std 4, 112(1)
  04d29dc  ori 3, 5, 61680
  04d29e0  li 21, 1
  04d29e4  addic 16, 16, 21396
  04d29e8  addic 14, 14, 1216
  04d29ec  addic 15, 15, 21172
  04d29f0  clrldi 17, 3, 32
  04d29f4  slwi 22, 21, 4
  04d29f8  extsw 22, 22
  04d29fc  lwzx 19, 16, 22
  04d2a00  cmpwi 19, 0
  04d2a04  bt 2, 0x4d2da0
  04d2a08  ld 4, 120(1)
  04d2a0c  li 3, 3
  04d2a10  lbzx 4, 4, 21
  04d2a14  cmpwi 4, 0
  04d2a18  bf 2, 0x4d2a54
  04d2a1c  ld 5, 112(1)
  04d2a20  li 3, 0
  04d2a24  li 4, 0
  04d2a28  li 6, 2
  04d2a2c  subc 4, 4, 6
  04d2a30  lbzx 5, 5, 21
  04d2a34  subc 3, 3, 5
  04d2a38  cntlzw 3, 3
  04d2a3c  sldi 3, 3, 58
  04d2a40  sradi 3, 3, 63
  04d2a44  and 3, 3, 4
  04d2a48  addc 3, 6, 3
  04d2a4c  cmpwi 3, 0
  04d2a50  bt 2, 0x4d2da0
  04d2a54  addc 20, 22, 16
  04d2a58  lis 4, 150
  04d2a5c  cmpwi 6, 3, 3
  04d2a60  lwz 22, 4(20)
  04d2a64  lwz 4, 27372(4)
  04d2a68  cmpwi 4, 0
  04d2a6c  bt 2, 0x4d2a94
  04d2a70  sldi 4, 22, 9
  04d2a74  sldi 5, 22, 6
  04d2a78  lis 6, 20164
  04d2a7c  subc 4, 4, 5
  04d2a80  ori 5, 6, 60495
  04d2a84  mulhw 4, 5, 4
  04d2a88  srawi 22, 4, 7
  04d2a8c  srwi 4, 22, 31
  04d2a90  addc 22, 22, 4
  04d2a94  cmpwi 1, 3, 2
  04d2a98  bt 26, 0x4d2ae8
  04d2a9c  bf 6, 0x4d2b20
  04d2aa0  lis 3, 114
  04d2aa4  lfs 1, -3056(3)
  04d2aa8  lis 3, 346
  04d2aac  fmuls 2, 1, 31
  04d2ab0  fmuls 1, 1, 30
  04d2ab4  lwz 3, -15568(3)
  04d2ab8  fctiwz 2, 2
  04d2abc  fctiwz 1, 1
  04d2ac0  stfd 2, 128(1)
  04d2ac4  lwz 4, 132(1)
  04d2ac8  stfd 1, 128(1)
  04d2acc  lwz 5, 132(1)
  04d2ad0  addc 5, 4, 5
  04d2ad4  divw 6, 3, 5
  04d2ad8  mullw 5, 6, 5
  04d2adc  subc 3, 3, 5
  04d2ae0  cmpw 3, 4
  04d2ae4  bf 0, 0x4d2b20
  04d2ae8  lis 3, 0
  04d2aec  li 4, 12
  04d2af0  ori 3, 3, 59802
  04d2af4  bl 0xca3e4
  04d2af8  nop
  04d2afc  addic 4, 19, -5
  04d2b00  addic 5, 22, -5
  04d2b04  li 6, 10
  04d2b08  extsw 4, 4
  04d2b0c  li 8, 128
  04d2b10  extsw 5, 5
  04d2b14  li 7, 10
  04d2b18  bl 0xcc0f0
  04d2b1c  nop
  04d2b20  lwz 3, 548(14)
  04d2b24  cmpw 21, 3
  04d2b28  bf 2, 0x4d2da0
  04d2b2c  lwz 3, 8(20)
  04d2b30  lwz 5, 12(20)
  04d2b34  extsw 4, 3
  04d2b38  extsw 6, 5
  04d2b3c  std 4, 128(1)
  04d2b40  addc 31, 19, 3
  04d2b44  neg 4, 3
  04d2b48  addc 3, 21, 21
  04d2b4c  addc 30, 22, 5
  04d2b50  addc 3, 21, 3
  04d2b54  sldi 3, 3, 2
  04d2b58  extsw 3, 3
  04d2b5c  lfd 1, 128(1)
  04d2b60  std 6, 128(1)
  04d2b64  fcfid 1, 1
  04d2b68  neg 6, 5
  04d2b6c  frsp 1, 1
  04d2b70  lfd 2, 128(1)
  04d2b74  fcfid 2, 2
  04d2b78  lwzx 3, 15, 3
  04d2b7c  extsw 3, 3
  04d2b80  frsp 2, 2
  04d2b84  fmuls 2, 2, 2
  04d2b88  fmadds 1, 1, 1, 2
  04d2b8c  fsqrts 1, 1
  04d2b90  fmuls 1, 1, 29
  04d2b94  fctiwz 1, 1
  04d2b98  stfd 1, 128(1)
  04d2b9c  lwz 5, 132(1)
  04d2ba0  addic 7, 5, -8000
  04d2ba4  mullw 4, 4, 7
  04d2ba8  mullw 6, 6, 7
  04d2bac  divw 4, 4, 5
  04d2bb0  divw 5, 6, 5
  04d2bb4  addc 29, 31, 4
  04d2bb8  addc 28, 30, 5
  04d2bbc  bl 0x7b740
  04d2bc0  nop
  04d2bc4  li 4, -1
  04d2bc8  ori 27, 3, 0
  04d2bcc  bl 0x6cde8
  04d2bd0  nop
  04d2bd4  lwz 4, 8(20)
  04d2bd8  li 6, 0
  04d2bdc  neg 5, 3
  04d2be0  extsw 4, 4
  04d2be4  subc 5, 5, 3
  04d2be8  subc 4, 4, 6
  04d2bec  li 6, 12
  04d2bf0  sradi 4, 4, 63
  04d2bf4  subc 6, 6, 21
  04d2bf8  and 4, 4, 5
  04d2bfc  cntlzw 5, 6
  04d2c00  addc 3, 3, 4
  04d2c04  sldi 4, 5, 58
  04d2c08  li 6, -13
  04d2c0c  li 7, 0
  04d2c10  sradi 4, 4, 63
  04d2c14  subc 6, 6, 7
  04d2c18  addic 5, 31, 7
  04d2c1c  and 4, 4, 6
  04d2c20  addic 6, 30, 7
  04d2c24  addc 26, 31, 3
  04d2c28  addic 8, 28, 7
  04d2c2c  extsw 24, 5
  04d2c30  addic 3, 29, 7
  04d2c34  addc 25, 7, 4
  04d2c38  extsw 23, 6
  04d2c3c  ori 5, 24, 0
  04d2c40  extsw 4, 8
  04d2c44  extsw 3, 3
  04d2c48  ori 7, 18, 0
  04d2c4c  li 8, 0
  04d2c50  ori 6, 23, 0
  04d2c54  bl 0xd865c
  04d2c58  nop
  04d2c5c  addic 5, 26, 7
  04d2c60  ori 4, 23, 0
  04d2c64  extsw 5, 5
  04d2c68  ori 3, 24, 0
  04d2c6c  ori 7, 18, 0
  04d2c70  ori 6, 23, 0
  04d2c74  li 8, 0
  04d2c78  bl 0xd865c
  04d2c7c  nop
  04d2c80  extsw 4, 31
  04d2c84  extsw 5, 26
  04d2c88  lis 24, 144
  04d2c8c  lis 23, 144
  04d2c90  subc 4, 5, 4
  04d2c94  subc 3, 26, 31
  04d2c98  sradi 4, 4, 63
  04d2c9c  lwz 5, -27852(24)
  04d2ca0  li 7, -1
  04d2ca4  and 3, 4, 3
  04d2ca8  lwz 4, -27856(23)
  04d2cac  addc 6, 5, 25
  04d2cb0  addc 20, 31, 3
  04d2cb4  subc 4, 30, 4
  04d2cb8  addc 3, 6, 20
  04d2cbc  addic 4, 4, 1
  04d2cc0  addic 3, 3, 1
  04d2cc4  extsw 4, 4
  04d2cc8  ori 5, 18, 0
  04d2ccc  ori 6, 27, 0
  04d2cd0  extsw 3, 3
  04d2cd4  bl 0x6cc0c
  04d2cd8  nop
  04d2cdc  addic 4, 31, 6
  04d2ce0  addic 8, 30, 6
  04d2ce4  addic 3, 29, 6
  04d2ce8  addic 6, 28, 6
  04d2cec  extsw 31, 4
  04d2cf0  extsw 29, 8
  04d2cf4  ori 5, 31, 0
  04d2cf8  extsw 4, 6
  04d2cfc  extsw 3, 3
  04d2d00  ori 7, 17, 0
  04d2d04  li 8, 0
  04d2d08  ori 6, 29, 0
  04d2d0c  bl 0xd865c
  04d2d10  nop
  04d2d14  addic 5, 26, 6
  04d2d18  ori 3, 31, 0
  04d2d1c  ori 7, 17, 0
  04d2d20  extsw 5, 5
  04d2d24  ori 4, 29, 0
  04d2d28  ori 6, 29, 0
  04d2d2c  li 8, 0
  04d2d30  bl 0xd865c
  04d2d34  nop
  04d2d38  lwz 3, -27852(24)
  04d2d3c  lwz 4, -27856(23)
  04d2d40  ori 5, 17, 0
  04d2d44  addc 3, 3, 25
  04d2d48  subc 4, 30, 4
  04d2d4c  addc 3, 3, 20
  04d2d50  extsw 4, 4
  04d2d54  extsw 3, 3
  04d2d58  ori 6, 27, 0
  04d2d5c  li 7, -1
  04d2d60  bl 0x6cc0c
  04d2d64  nop
  04d2d68  lis 3, 0
  04d2d6c  li 4, 13
  04d2d70  ori 3, 3, 59802
  04d2d74  bl 0xca3e4
  04d2d78  nop
  04d2d7c  addic 4, 19, -10
  04d2d80  addic 5, 22, -10
  04d2d84  li 6, 20
  04d2d88  extsw 4, 4
  04d2d8c  li 8, 128
  04d2d90  extsw 5, 5
  04d2d94  li 7, 20
  04d2d98  bl 0xcc0f0
  04d2d9c  nop
  04d2da0  addic 21, 21, 1
  04d2da4  extsw 21, 21
  04d2da8  cmpwi 21, 20
  04d2dac  bt 0, 0x4d29f4
  04d2db0  bl 0x6d708
  04d2db4  nop
  04d2db8  ld 0, 336(1)
  04d2dbc  mtlr 0
  04d2dc0  lfd 29, 296(1)
  04d2dc4  lfd 30, 304(1)
  04d2dc8  lfd 31, 312(1)
  04d2dcc  ld 14, 152(1)
  04d2dd0  ld 15, 160(1)
  04d2dd4  ld 16, 168(1)
  04d2dd8  ld 17, 176(1)
  04d2ddc  ld 18, 184(1)
  04d2de0  ld 19, 192(1)
  04d2de4  ld 20, 200(1)
  04d2de8  ld 21, 208(1)
  04d2dec  ld 22, 216(1)
  04d2df0  ld 23, 224(1)
  04d2df4  ld 24, 232(1)
  04d2df8  ld 25, 240(1)
  04d2dfc  ld 26, 248(1)
  04d2e00  ld 27, 256(1)
  04d2e04  ld 28, 264(1)
  04d2e08  ld 29, 272(1)
  04d2e0c  ld 30, 280(1)
  04d2e10  ld 31, 288(1)
  04d2e14  addi 1, 1, 320
  04d2e18  blr

FUN_004d2e1c:   # 0x4d2e1c, 0x14 bytes
  04d2e1c  lis 3, 144
  04d2e20  lis 4, 1
  04d2e24  addic 3, 3, -27844
  04d2e28  stw 4, 72(3)
  04d2e2c  blr

UnlockPurchasableItem:   # 0x4d2e30, 0x214 bytes
  04d2e30  stdu 1, -112(1)
  04d2e34  mflr 0
  04d2e38  std 0, 128(1)
  04d2e3c  lis 3, 151
  04d2e40  lwz 5, -25488(3)
  04d2e44  cmpwi 5, 18
  04d2e48  bf 1, 0x4d2f30
  04d2e4c  lis 4, 151
  04d2e50  lis 3, 151
  04d2e54  li 6, 0
  04d2e58  li 5, 1
  04d2e5c  addic 4, 4, -16064
  04d2e60  addic 3, 3, -16027
  04d2e64  addic 7, 6, 1
  04d2e68  stbx 5, 4, 6
  04d2e6c  stbx 5, 3, 6
  04d2e70  extsw 6, 7
  04d2e74  cmpwi 6, 37
  04d2e78  bt 0, 0x4d2e64
  04d2e7c  lis 3, 114
  04d2e80  li 4, 74
  04d2e84  addic 6, 3, -1236
  04d2e88  li 5, 84
  04d2e8c  li 7, 81
  04d2e90  stb 4, -1236(3)
  04d2e94  li 8, 77
  04d2e98  li 3, 80
  04d2e9c  li 4, 79
  04d2ea0  stb 5, 3(6)
  04d2ea4  li 5, 78
  04d2ea8  stb 3, 1(6)
  04d2eac  li 3, 75
  04d2eb0  stb 4, 2(6)
  04d2eb4  li 4, 82
  04d2eb8  stb 7, 4(6)
  04d2ebc  stb 5, 5(6)
  04d2ec0  li 7, 89
  04d2ec4  stb 3, 6(6)
  04d2ec8  li 5, 88
  04d2ecc  stb 4, 7(6)
  04d2ed0  lis 3, 151
  04d2ed4  stb 8, 8(6)
  04d2ed8  li 4, 83
  04d2edc  li 8, 15
  04d2ee0  stb 7, 9(6)
  04d2ee4  addic 7, 3, -15908
  04d2ee8  stb 5, 10(6)
  04d2eec  li 5, 12
  04d2ef0  stb 4, 11(6)
  04d2ef4  li 4, 13
  04d2ef8  stw 8, -15908(3)
  04d2efc  li 6, 17
  04d2f00  li 3, 11
  04d2f04  stw 5, 4(7)
  04d2f08  li 8, 10
  04d2f0c  li 5, 16
  04d2f10  stw 4, 8(7)
  04d2f14  li 4, 19
  04d2f18  stw 3, 12(7)
  04d2f1c  stw 6, 16(7)
  04d2f20  stw 8, 20(7)
  04d2f24  stw 5, 24(7)
  04d2f28  stw 4, 28(7)
  04d2f2c  b 0x4d3034
  04d2f30  lis 3, 151
  04d2f34  addic 3, 3, -16064
  04d2f38  lbz 3, 10(3)
  04d2f3c  cmpwi 3, 0
  04d2f40  bf 2, 0x4d2f74
  04d2f44  li 3, 10
  04d2f48  li 4, 1
  04d2f4c  bl 0x112e18
  04d2f50  nop
  04d2f54  lis 3, 114
  04d2f58  li 4, 74
  04d2f5c  lis 5, 151
  04d2f60  li 6, 10
  04d2f64  lis 7, 151
  04d2f68  stb 4, -1236(3)
  04d2f6c  stw 6, -25476(5)
  04d2f70  lwz 5, -25488(7)
  04d2f74  li 9, 0
  04d2f78  lis 3, 114
  04d2f7c  lis 6, 115
  04d2f80  ori 4, 9, 0
  04d2f84  addic 3, 3, -1236
  04d2f88  li 7, 255
  04d2f8c  lbzx 8, 3, 9
  04d2f90  cmpwi 8, 255
  04d2f94  bt 2, 0x4d2fdc
  04d2f98  clrlwi 8, 8, 26
  04d2f9c  cmpwi 8, 10
  04d2fa0  cmpwi 1, 8, 0
  04d2fa4  bt 2, 0x4d2fdc
  04d2fa8  ori 11, 4, 0
  04d2fac  addic 10, 6, 31728
  04d2fb0  lwz 12, 0(10)
  04d2fb4  cmpw 12, 8
  04d2fb8  bt 2, 0x4d2fcc
  04d2fbc  addic 11, 11, 1
  04d2fc0  addic 10, 10, 4
  04d2fc4  cmpwi 11, 19
  04d2fc8  bt 0, 0x4d2fb0
  04d2fcc  cmpwi 11, 19
  04d2fd0  bt 2, 0x4d2fd8
  04d2fd4  bf 6, 0x4d2fdc
  04d2fd8  stbx 7, 3, 9
  04d2fdc  addic 9, 9, 1
  04d2fe0  extsw 9, 9
  04d2fe4  cmpwi 9, 12
  04d2fe8  bt 0, 0x4d2f8c
  04d2fec  slwi 5, 5, 2
  04d2ff0  addic 6, 6, 31728
  04d2ff4  extsw 5, 5
  04d2ff8  lwzx 6, 6, 5
  04d2ffc  cmpwi 6, 0
  04d3000  bt 2, 0x4d3034
  04d3004  lbzx 5, 3, 4
  04d3008  clrlwi 7, 5, 26
  04d300c  cmpwi 1, 5, 255
  04d3010  cmpw 7, 6
  04d3014  cror 2, 2, 6
  04d3018  bt 2, 0x4d3028
  04d301c  addic 4, 4, 1
  04d3020  extsw 4, 4
  04d3024  b 0x4d3004
  04d3028  cmpwi 5, 255
  04d302c  bf 2, 0x4d3034
  04d3030  stbx 6, 3, 4
  04d3034  ld 0, 128(1)
  04d3038  mtlr 0
  04d303c  addi 1, 1, 112
  04d3040  blr

FUN_004d3044:   # 0x4d3044, 0x154 bytes
  04d3044  stdu 1, -112(1)
  04d3048  mflr 0
  04d304c  std 0, 128(1)
  04d3050  bl 0x11ba2c
  04d3054  nop
  04d3058  bl 0x174bdc
  04d305c  nop
  04d3060  bl 0xd89d0
  04d3064  nop
  04d3068  lis 3, 150
  04d306c  lis 4, 150
  04d3070  addic 3, 3, 27352
  04d3074  lis 6, 150
  04d3078  lis 7, 161
  04d307c  lis 8, -30875
  04d3080  li 5, 16
  04d3084  lwz 9, 12(3)
  04d3088  addic 3, 7, 2496
  04d308c  stw 9, 27344(4)
  04d3090  ori 4, 8, 17185
  04d3094  stw 9, 27348(6)
  04d3098  bl 0x5001fc
  04d309c  nop
  04d30a0  lis 3, 163
  04d30a4  li 4, -1
  04d30a8  addic 3, 3, 21696
  04d30ac  li 5, 2048
  04d30b0  bl 0x5001fc
  04d30b4  nop
  04d30b8  lis 3, 164
  04d30bc  li 4, -1
  04d30c0  addic 3, 3, -32112
  04d30c4  li 5, 3584
  04d30c8  bl 0x5001fc
  04d30cc  nop
  04d30d0  lis 3, 163
  04d30d4  li 4, 0
  04d30d8  addic 3, 3, 31632
  04d30dc  li 5, 224
  04d30e0  bl 0x5001fc
  04d30e4  nop
  04d30e8  lis 3, 229
  04d30ec  li 4, -1
  04d30f0  addic 3, 3, 30704
  04d30f4  li 5, 3072
  04d30f8  bl 0x5001fc
  04d30fc  nop
  04d3100  lis 3, 230
  04d3104  li 4, -1
  04d3108  addic 3, 3, -27632
  04d310c  li 5, 2048
  04d3110  bl 0x5001fc
  04d3114  nop
  04d3118  lis 3, 230
  04d311c  li 4, 0
  04d3120  addic 3, 3, -29680
  04d3124  li 5, 128
  04d3128  bl 0x5001fc
  04d312c  nop
  04d3130  bl 0x68160
  04d3134  nop
  04d3138  bl 0x668d0
  04d313c  nop
  04d3140  bl 0x174c24
  04d3144  nop
  04d3148  bl 0x11fbb0
  04d314c  nop
  04d3150  bl 0x1754dc
  04d3154  nop
  04d3158  bl 0x4d2e30
  04d315c  lis 3, 151
  04d3160  lwz 3, -25488(3)
  04d3164  cmpwi 3, 0
  04d3168  bt 2, 0x4d3178
  04d316c  extsw 3, 3
  04d3170  bl 0x112c20
  04d3174  nop
  04d3178  lis 3, 151
  04d317c  lwz 4, -13824(3)
  04d3180  addic 4, 4, 180
  04d3184  stw 4, -13824(3)
  04d3188  ld 0, 128(1)
  04d318c  mtlr 0
  04d3190  addi 1, 1, 112
  04d3194  blr

FUN_004d3198:   # 0x4d3198, 0x14 bytes
  04d3198  lis 3, 144
  04d319c  lis 4, 1
  04d31a0  addic 3, 3, -27732
  04d31a4  stw 4, 72(3)
  04d31a8  blr

FUN_004d31b0:   # 0x4d31b0, 0x4e8 bytes
  04d31b0  stdu 1, -480(1)
  04d31b4  mflr 0
  04d31b8  std 0, 496(1)
  04d31bc  std 30, 464(1)
  04d31c0  ori 30, 4, 0
  04d31c4  std 31, 472(1)
  04d31c8  cmpwi 1, 5, 0
  04d31cc  ori 31, 3, 0
  04d31d0  lhz 4, 54(30)
  04d31d4  lwz 3, 60(30)
  04d31d8  extsh 5, 4
  04d31dc  cmpwi 3, 0
  04d31e0  sldi 6, 5, 5
  04d31e4  sldi 7, 5, 2
  04d31e8  std 29, 456(1)
  04d31ec  subc 6, 6, 7
  04d31f0  addc 29, 3, 6
  04d31f4  std 28, 448(1)
  04d31f8  std 27, 440(1)
  04d31fc  std 26, 432(1)
  04d3200  clrldi 29, 29, 32
  04d3204  bt 2, 0x4d3670
  04d3208  bt 6, 0x4d32c8
  04d320c  lis 6, 161
  04d3210  ori 7, 5, 0
  04d3214  lwz 5, 1808(6)
  04d3218  sth 4, 4(30)
  04d321c  stw 5, 56(30)
  04d3220  lhz 4, 6(29)
  04d3224  extsh 5, 4
  04d3228  cmpw 7, 5
  04d322c  bt 2, 0x4d32c8
  04d3230  sldi 6, 5, 5
  04d3234  sldi 5, 5, 2
  04d3238  subc 5, 6, 5
  04d323c  addc 3, 3, 5
  04d3240  lhz 5, 16(29)
  04d3244  clrldi 29, 3, 32
  04d3248  rlwinm 3, 5, 0, 29, 29
  04d324c  sth 4, 54(30)
  04d3250  cmpwi 3, 0
  04d3254  lhz 3, 16(29)
  04d3258  clrlwi 3, 3, 31
  04d325c  stb 3, 8(30)
  04d3260  bt 2, 0x4d32c8
  04d3264  lis 3, 161
  04d3268  addic 3, 3, 23556
  04d326c  stw 31, 8(3)
  04d3270  stw 30, 12(3)
  04d3274  lhz 3, 4(29)
  04d3278  rlwinm 4, 3, 0, 17, 17
  04d327c  cmpwi 4, 0
  04d3280  bt 2, 0x4d3298
  04d3284  extsh 3, 3
  04d3288  xori 3, 3, 16384
  04d328c  bl 0x168dec
  04d3290  nop
  04d3294  b 0x4d32c8
  04d3298  lis 28, 144
  04d329c  lwz 3, -27624(28)
  04d32a0  extsw 3, 3
  04d32a4  bl 0xc8964
  04d32a8  nop
  04d32ac  li 3, -1
  04d32b0  li 4, 0
  04d32b4  stw 3, -27624(28)
  04d32b8  lhz 3, 4(29)
  04d32bc  extsh 3, 3
  04d32c0  bl 0x167e60
  04d32c4  nop
  04d32c8  lhz 3, 54(30)
  04d32cc  extsh 3, 3
  04d32d0  cmpwi 3, -1
  04d32d4  bt 2, 0x4d3670
  04d32d8  lis 27, 161
  04d32dc  lwz 3, 0(29)
  04d32e0  addic 27, 27, 23556
  04d32e4  stw 3, 20(27)
  04d32e8  lhz 4, 8(29)
  04d32ec  cmpwi 4, 6
  04d32f0  bf 2, 0x4d342c
  04d32f4  lis 5, 102
  04d32f8  lis 4, 102
  04d32fc  addic 5, 5, -29120
  04d3300  addic 4, 4, -29128
  04d3304  lis 28, 144
  04d3308  extsw 3, 3
  04d330c  stw 5, 124(1)
  04d3310  stw 4, 112(1)
  04d3314  stw 4, 116(1)
  04d3318  stw 4, 120(1)
  04d331c  stw 4, 128(1)
  04d3320  stw 5, 132(1)
  04d3324  lwz 28, 11976(28)
  04d3328  bl 0x7b740
  04d332c  nop
  04d3330  ori 4, 3, 0
  04d3334  ori 3, 28, 0
  04d3338  bl 0x5cc8d8
  04d333c  nop
  04d3340  lis 4, 102
  04d3344  ori 3, 28, 0
  04d3348  addic 4, 4, -29112
  04d334c  bl 0x5c8700
  04d3350  nop
  04d3354  cmpwi 3, 0
  04d3358  bt 2, 0x4d3364
  04d335c  li 4, 115
  04d3360  stb 4, 1(3)
  04d3364  lhz 5, 10(29)
  04d3368  lis 6, 151
  04d336c  extsh 5, 5
  04d3370  lis 3, 115
  04d3374  sldi 5, 5, 3
  04d3378  lis 4, 10922
  04d337c  addc 7, 5, 5
  04d3380  addic 3, 3, 32048
  04d3384  lwz 6, -25484(6)
  04d3388  ori 4, 4, 43691
  04d338c  addc 5, 5, 7
  04d3390  mulhw 4, 4, 6
  04d3394  addc 3, 3, 5
  04d3398  lis 7, 4194
  04d339c  srwi 8, 4, 31
  04d33a0  ori 5, 7, 19923
  04d33a4  addc 4, 4, 8
  04d33a8  lhz 7, 20(3)
  04d33ac  addic 26, 1, 136
  04d33b0  mulhw 3, 5, 7
  04d33b4  mulhw 5, 5, 7
  04d33b8  addc 8, 4, 4
  04d33bc  srawi 3, 3, 6
  04d33c0  addc 4, 4, 8
  04d33c4  srwi 9, 3, 31
  04d33c8  addc 4, 4, 4
  04d33cc  lis 8, 102
  04d33d0  subc 6, 6, 4
  04d33d4  addc 3, 3, 9
  04d33d8  addic 4, 8, -29104
  04d33dc  mulli 8, 3, 1000
  04d33e0  sldi 3, 6, 2
  04d33e4  srawi 5, 5, 6
  04d33e8  addc 3, 1, 3
  04d33ec  srwi 9, 5, 31
  04d33f0  clrldi 6, 3, 32
  04d33f4  addc 5, 5, 9
  04d33f8  subc 7, 7, 8
  04d33fc  extsw 5, 5
  04d3400  ori 3, 26, 0
  04d3404  extsw 7, 7
  04d3408  lwz 6, 112(6)
  04d340c  bl 0x5cd2a8
  04d3410  nop
  04d3414  addic 3, 1, 168
  04d3418  ori 4, 28, 0
  04d341c  ori 5, 26, 0
  04d3420  bl 0x5cd2a8
  04d3424  nop
  04d3428  b 0x4d344c
  04d342c  extsw 3, 3
  04d3430  addic 28, 1, 168
  04d3434  bl 0x7b740
  04d3438  nop
  04d343c  ori 4, 3, 0
  04d3440  ori 3, 28, 0
  04d3444  bl 0x5cd2a8
  04d3448  nop
  04d344c  lwz 3, 20(27)
  04d3450  cmpwi 3, 0
  04d3454  bt 2, 0x4d3468
  04d3458  addic 3, 1, 168
  04d345c  bl 0xccda0
  04d3460  nop
  04d3464  b 0x4d3490
  04d3468  lis 3, 144
  04d346c  lwz 3, -27624(3)
  04d3470  cmpwi 3, -1
  04d3474  bt 2, 0x4d3490
  04d3478  extsw 3, 3
  04d347c  bl 0xc8964
  04d3480  nop
  04d3484  lis 3, 144
  04d3488  li 4, -1
  04d348c  stw 4, -27624(3)
  04d3490  lhz 3, 8(29)
  04d3494  cmpwi 3, 0
  04d3498  bt 2, 0x4d3670
  04d349c  extsh 3, 3
  04d34a0  cmpwi 3, 6
  04d34a4  cmpwi 1, 3, 5
  04d34a8  cmpwi 6, 3, 4
  04d34ac  cmpwi 7, 3, 3
  04d34b0  bt 2, 0x4d35b4
  04d34b4  bt 6, 0x4d3594
  04d34b8  bt 26, 0x4d3570
  04d34bc  bt 30, 0x4d3534
  04d34c0  cmpwi 3, 2
  04d34c4  bt 2, 0x4d3510
  04d34c8  cmpwi 3, 1
  04d34cc  bf 2, 0x4d3610
  04d34d0  lhz 5, 10(29)
  04d34d4  lis 3, 115
  04d34d8  lis 4, 151
  04d34dc  extsh 5, 5
  04d34e0  addic 3, 3, 32048
  04d34e4  sldi 5, 5, 3
  04d34e8  addc 6, 5, 5
  04d34ec  lwz 4, -25440(4)
  04d34f0  addc 5, 5, 6
  04d34f4  extsw 4, 4
  04d34f8  lwzx 3, 3, 5
  04d34fc  extsw 3, 3
  04d3500  subc 5, 4, 3
  04d3504  rldicl 28, 5, 1, 63
  04d3508  xori 28, 28, 1
  04d350c  b 0x4d3600
  04d3510  lis 3, 151
  04d3514  lhz 4, 10(29)
  04d3518  addic 3, 3, -16064
  04d351c  extsh 4, 4
  04d3520  lbzx 3, 3, 4
  04d3524  cntlzw 3, 3
  04d3528  rlwinm 28, 3, 27, 31, 31
  04d352c  xori 28, 28, 1
  04d3530  b 0x4d3600
  04d3534  lis 3, 151
  04d3538  li 28, 0
  04d353c  addic 4, 3, -16064
  04d3540  lhz 3, 10(29)
  04d3544  extsh 3, 3
  04d3548  lbzx 4, 4, 3
  04d354c  cmpwi 4, 0
  04d3550  bt 2, 0x4d356c
  04d3554  lis 4, 151
  04d3558  addic 4, 4, -16027
  04d355c  lbzx 3, 4, 3
  04d3560  cmpwi 3, 0
  04d3564  bf 2, 0x4d356c
  04d3568  li 28, 1
  04d356c  b 0x4d3600
  04d3570  lis 3, 151
  04d3574  lhz 4, 10(29)
  04d3578  addic 3, 3, -16400
  04d357c  extsh 4, 4
  04d3580  lbzx 3, 3, 4
  04d3584  cntlzw 3, 3
  04d3588  rlwinm 28, 3, 27, 31, 31
  04d358c  xori 28, 28, 1
  04d3590  b 0x4d3600
  04d3594  bl 0x11b2c4
  04d3598  nop
  04d359c  lhz 4, 10(29)
  04d35a0  extsh 4, 4
  04d35a4  subc 3, 3, 4
  04d35a8  rldicl 28, 3, 1, 63
  04d35ac  xori 28, 28, 1
  04d35b0  b 0x4d3600
  04d35b4  lhz 5, 10(29)
  04d35b8  lis 3, 115
  04d35bc  extsh 5, 5
  04d35c0  addic 3, 3, 32048
  04d35c4  sldi 5, 5, 3
  04d35c8  lis 4, 151
  04d35cc  addc 6, 5, 5
  04d35d0  li 28, 0
  04d35d4  addc 5, 5, 6
  04d35d8  addc 3, 3, 5
  04d35dc  lwz 4, -25440(4)
  04d35e0  lhz 3, 20(3)
  04d35e4  cmpw 4, 3
  04d35e8  bt 0, 0x4d3600
  04d35ec  bl 0x11b2c4
  04d35f0  nop
  04d35f4  cmpwi 3, 4
  04d35f8  bt 0, 0x4d3600
  04d35fc  li 28, 1
  04d3600  cmpwi 28, 0
  04d3604  bt 2, 0x4d3610
  04d3608  lhz 29, 12(29)
  04d360c  b 0x4d3614
  04d3610  lhz 29, 14(29)
  04d3614  lhz 3, 54(30)
  04d3618  extsh 29, 29
  04d361c  extsh 3, 3
  04d3620  cmpw 29, 3
  04d3624  bt 2, 0x4d3670
  04d3628  extsh 3, 29
  04d362c  lis 4, 161
  04d3630  sldi 5, 3, 5
  04d3634  sldi 3, 3, 2
  04d3638  subc 3, 5, 3
  04d363c  lwz 5, 60(30)
  04d3640  sth 29, 54(30)
  04d3644  addc 3, 5, 3
  04d3648  lwz 4, 1808(4)
  04d364c  clrldi 5, 3, 32
  04d3650  stw 4, 56(30)
  04d3654  ori 3, 31, 0
  04d3658  ori 4, 30, 0
  04d365c  lhz 6, 16(5)
  04d3660  li 5, 0
  04d3664  clrlwi 6, 6, 31
  04d3668  stb 6, 8(30)
  04d366c  bl 0x4d31b0
  04d3670  ld 0, 496(1)
  04d3674  mtlr 0
  04d3678  ld 26, 432(1)
  04d367c  ld 27, 440(1)
  04d3680  ld 28, 448(1)
  04d3684  ld 29, 456(1)
  04d3688  ld 30, 464(1)
  04d368c  ld 31, 472(1)
  04d3690  addi 1, 1, 480
  04d3694  blr

FUN_004d3698:   # 0x4d3698, 0x88 bytes
  04d3698  lis 5, 151
  04d369c  lwz 5, -25488(5)
  04d36a0  cmpwi 5, 0
  04d36a4  cmpwi 1, 5, 18
  04d36a8  bt 0, 0x4d36b0
  04d36ac  bf 5, 0x4d36b8
  04d36b0  li 3, 0
  04d36b4  b 0x4d371c
  04d36b8  lis 4, 116
  04d36bc  slwi 5, 5, 2
  04d36c0  addic 4, 4, -32456
  04d36c4  extsw 5, 5
  04d36c8  lis 6, 116
  04d36cc  addic 6, 6, -32452
  04d36d0  lwzx 4, 4, 5
  04d36d4  extsw 4, 4
  04d36d8  lwzx 5, 6, 5
  04d36dc  cmpw 5, 4
  04d36e0  bf 1, 0x4d3718
  04d36e4  lis 6, 161
  04d36e8  addic 6, 6, 23872
  04d36ec  slwi 7, 4, 2
  04d36f0  extsw 7, 7
  04d36f4  lwzx 7, 6, 7
  04d36f8  cmpw 7, 3
  04d36fc  bf 2, 0x4d3708
  04d3700  ori 3, 4, 0
  04d3704  b 0x4d371c
  04d3708  addic 4, 4, 1
  04d370c  extsw 4, 4
  04d3710  cmpw 5, 4
  04d3714  bt 1, 0x4d36ec
  04d3718  li 3, -1
  04d371c  blr

FUN_004d3720:   # 0x4d3720, 0x13c bytes
  04d3720  lis 6, 151
  04d3724  lwz 6, -25488(6)
  04d3728  cmpwi 6, 0
  04d372c  cmpwi 1, 6, 18
  04d3730  bt 0, 0x4d3738
  04d3734  bf 5, 0x4d3740
  04d3738  li 3, 0
  04d373c  b 0x4d37b0
  04d3740  lis 5, 116
  04d3744  slwi 6, 6, 2
  04d3748  lis 7, 116
  04d374c  addic 5, 5, -32456
  04d3750  extsw 6, 6
  04d3754  addic 7, 7, -32452
  04d3758  lwzx 5, 5, 6
  04d375c  lwzx 6, 7, 6
  04d3760  extsw 5, 5
  04d3764  cmpw 6, 5
  04d3768  bf 1, 0x4d37a8
  04d376c  lis 7, 161
  04d3770  addic 7, 7, 23872
  04d3774  slwi 8, 5, 2
  04d3778  extsw 8, 8
  04d377c  lwzx 8, 7, 8
  04d3780  cmpw 8, 3
  04d3784  bf 2, 0x4d3798
  04d3788  ori 3, 5, 0
  04d378c  cmpwi 3, -1
  04d3790  bt 2, 0x4d37ac
  04d3794  b 0x4d37b0
  04d3798  addic 5, 5, 1
  04d379c  extsw 5, 5
  04d37a0  cmpw 6, 5
  04d37a4  bt 1, 0x4d3774
  04d37a8  li 3, -1
  04d37ac  b 0x4d3858
  04d37b0  lis 6, 144
  04d37b4  slwi 5, 3, 2
  04d37b8  addic 6, 6, -24148
  04d37bc  extsw 5, 5
  04d37c0  lwzx 7, 6, 5
  04d37c4  cmpwi 7, 0
  04d37c8  bf 2, 0x4d37d4
  04d37cc  li 3, -1
  04d37d0  b 0x4d3858
  04d37d4  li 7, 1
  04d37d8  lis 8, 161
  04d37dc  ori 9, 5, 0
  04d37e0  lis 5, 151
  04d37e4  stb 7, 9(4)
  04d37e8  li 10, -1
  04d37ec  slwi 7, 3, 4
  04d37f0  lwz 8, 1808(8)
  04d37f4  addic 11, 5, -15784
  04d37f8  li 5, 0
  04d37fc  stw 8, 56(4)
  04d3800  extsw 7, 7
  04d3804  sth 10, 4(4)
  04d3808  lwzx 6, 6, 9
  04d380c  sth 5, 54(4)
  04d3810  stw 6, 60(4)
  04d3814  lwzx 7, 11, 7
  04d3818  cmpwi 7, 0
  04d381c  bt 2, 0x4d3834
  04d3820  lhz 7, 8(6)
  04d3824  cmpwi 7, 0
  04d3828  bf 2, 0x4d3834
  04d382c  lhz 5, 6(6)
  04d3830  sth 5, 54(4)
  04d3834  extsh 5, 5
  04d3838  sldi 7, 5, 5
  04d383c  sldi 5, 5, 2
  04d3840  subc 5, 7, 5
  04d3844  addc 5, 6, 5
  04d3848  clrldi 5, 5, 32
  04d384c  lhz 5, 16(5)
  04d3850  clrlwi 5, 5, 31
  04d3854  stb 5, 8(4)
  04d3858  blr

FUN_004d3870:   # 0x4d3870, 0x80c bytes
  04d3870  stdu 1, -272(1)
  04d3874  mflr 0
  04d3878  std 0, 288(1)
  04d387c  stfd 30, 256(1)
  04d3880  stfd 31, 264(1)
  04d3884  std 28, 224(1)
  04d3888  std 31, 248(1)
  04d388c  lis 28, 151
  04d3890  ori 31, 3, 0
  04d3894  std 30, 240(1)
  04d3898  addic 28, 28, -25376
  04d389c  ori 30, 4, 0
  04d38a0  lwz 3, 8324(28)
  04d38a4  std 29, 232(1)
  04d38a8  cmpwi 3, 29
  04d38ac  bf 2, 0x4d38b8
  04d38b0  li 3, 0
  04d38b4  b 0x4d4054
  04d38b8  lwz 3, 8872(28)
  04d38bc  cmpwi 3, 0
  04d38c0  bf 2, 0x4d38cc
  04d38c4  li 3, 0
  04d38c8  b 0x4d4054
  04d38cc  lbz 3, 9(30)
  04d38d0  cmpwi 3, 0
  04d38d4  bf 2, 0x4d38e4
  04d38d8  ori 3, 31, 0
  04d38dc  ori 4, 30, 0
  04d38e0  bl 0x4d3720
  04d38e4  lis 3, 161
  04d38e8  lwz 3, 1800(3)
  04d38ec  cmpwi 3, 0
  04d38f0  bt 2, 0x4d38fc
  04d38f4  li 3, 0
  04d38f8  b 0x4d4054
  04d38fc  cmpwi 30, 0
  04d3900  bf 2, 0x4d390c
  04d3904  li 3, 0
  04d3908  b 0x4d4054
  04d390c  lhz 3, 54(30)
  04d3910  extsh 3, 3
  04d3914  cmpwi 3, -1
  04d3918  bf 2, 0x4d3924
  04d391c  li 3, 0
  04d3920  b 0x4d4054
  04d3924  lbz 3, 8(30)
  04d3928  cmpwi 3, 255
  04d392c  cmpwi 1, 3, 0
  04d3930  bf 2, 0x4d393c
  04d3934  li 3, 0
  04d3938  b 0x4d4054
  04d393c  lfs 3, 20(31)
  04d3940  lfs 1, 132(28)
  04d3944  lfs 2, 16(31)
  04d3948  fsubs 4, 3, 1
  04d394c  lfs 31, 128(28)
  04d3950  lfs 6, 24(31)
  04d3954  fsubs 5, 2, 31
  04d3958  lfs 7, 136(28)
  04d395c  fsubs 6, 6, 7
  04d3960  lis 3, 77
  04d3964  addi 3, 3, 14428
  04d3968  fmuls 4, 4, 4
  04d396c  fmadds 4, 5, 5, 4
  04d3970  lfs 5, 0(3)
  04d3974  fmadds 4, 6, 6, 4
  04d3978  lfs 6, 12(30)
  04d397c  fmuls 5, 6, 5
  04d3980  fsqrts 4, 4
  04d3984  fcmpu 0, 4, 5
  04d3988  cror 2, 0, 2
  04d398c  bt 2, 0x4d3998
  04d3990  li 3, 0
  04d3994  b 0x4d4054
  04d3998  bf 6, 0x4d3d4c
  04d399c  fsubs 2, 31, 2
  04d39a0  fsubs 1, 1, 3
  04d39a4  lis 3, 77
  04d39a8  addi 3, 3, 14428
  04d39ac  lis 29, 115
  04d39b0  addic 29, 29, 22784
  04d39b4  fabs 3, 2
  04d39b8  fabs 4, 1
  04d39bc  stfs 2, 124(1)
  04d39c0  stfs 1, 128(1)
  04d39c4  fsubs 1, 3, 4
  04d39c8  stfs 1, 132(1)
  04d39cc  lwz 4, 124(1)
  04d39d0  lfs 30, 4(3)
  04d39d4  lfs 1, 124(1)
  04d39d8  lwz 5, 128(1)
  04d39dc  lfs 2, 128(1)
  04d39e0  lwz 6, 132(1)
  04d39e4  rlwinm 5, 5, 3, 29, 29
  04d39e8  fabs 5, 2
  04d39ec  lfs 2, 132(1)
  04d39f0  fabs 1, 1
  04d39f4  rlwimi 5, 6, 2, 30, 30
  04d39f8  fsub 6, 2, 30
  04d39fc  rlwimi 5, 4, 4, 28, 28
  04d3a00  fsub 7, 2, 30
  04d3a04  ori 4, 29, 0
  04d3a08  rlwimi 4, 5, 2, 26, 28
  04d3a0c  slwi 5, 5, 2
  04d3a10  clrldi 4, 4, 32
  04d3a14  fsel 4, 6, 1, 4
  04d3a18  lfsx 1, 29, 5
  04d3a1c  lfs 2, 4(4)
  04d3a20  fsel 3, 7, 5, 3
  04d3a24  lfs 31, 8(3)
  04d3a28  fcmpu 0, 4, 30
  04d3a2c  bt 1, 0x4d3a38
  04d3a30  fmr 1, 30
  04d3a34  b 0x4d3b50
  04d3a38  fsubs 5, 3, 4
  04d3a3c  fadds 3, 3, 4
  04d3a40  addic 3, 1, 16
  04d3a44  li 6, 2
  04d3a48  addic 4, 3, 152
  04d3a4c  addic 5, 3, 168
  04d3a50  mtctr 6
  04d3a54  fdivs 3, 5, 3
  04d3a58  fmuls 4, 3, 3
  04d3a5c  stfs 3, 180(1)
  04d3a60  stfs 3, 172(1)
  04d3a64  stfs 3, 176(1)
  04d3a68  stfs 3, 168(1)
  04d3a6c  lfs 6, 180(1)
  04d3a70  lfs 7, 172(1)
  04d3a74  lfs 8, 176(1)
  04d3a78  fmuls 5, 4, 4
  04d3a7c  fmuls 7, 7, 4
  04d3a80  fmuls 6, 6, 5
  04d3a84  fmuls 3, 5, 5
  04d3a88  fmuls 5, 8, 5
  04d3a8c  stfs 7, 172(1)
  04d3a90  fmuls 4, 6, 4
  04d3a94  stfs 5, 176(1)
  04d3a98  stfs 4, 180(1)
  04d3a9c  lfs 4, 152(3)
  04d3aa0  fmuls 4, 4, 3
  04d3aa4  stfs 4, 168(3)
  04d3aa8  lfs 4, 4(4)
  04d3aac  addic 3, 3, 8
  04d3ab0  addic 4, 4, 8
  04d3ab4  fmuls 4, 4, 3
  04d3ab8  stfs 4, 4(5)
  04d3abc  addic 5, 5, 8
  04d3ac0  bdnz 0x4d3a9c
  04d3ac4  li 5, 4
  04d3ac8  ori 3, 1, 0
  04d3acc  mtctr 5
  04d3ad0  lis 4, 115
  04d3ad4  addic 5, 3, 168
  04d3ad8  addic 4, 4, 22752
  04d3adc  ori 7, 5, 0
  04d3ae0  lfs 3, 168(3)
  04d3ae4  lfs 4, 0(4)
  04d3ae8  fmuls 3, 3, 4
  04d3aec  lfs 4, 4(4)
  04d3af0  addic 4, 4, 8
  04d3af4  stfs 3, 168(3)
  04d3af8  lfs 3, 4(5)
  04d3afc  addic 3, 3, 8
  04d3b00  fmuls 3, 3, 4
  04d3b04  stfs 3, 4(5)
  04d3b08  addic 5, 5, 8
  04d3b0c  bdnz 0x4d3ae0
  04d3b10  fmr 3, 30
  04d3b14  ori 3, 1, 0
  04d3b18  mtctr 6
  04d3b1c  lfs 4, 168(3)
  04d3b20  fadds 3, 3, 4
  04d3b24  addic 3, 3, 16
  04d3b28  lfs 4, 4(7)
  04d3b2c  lfs 5, 8(7)
  04d3b30  lfs 6, 12(7)
  04d3b34  addic 7, 7, 16
  04d3b38  fadds 3, 3, 4
  04d3b3c  fadds 3, 3, 5
  04d3b40  fadds 3, 3, 6
  04d3b44  bdnz 0x4d3b1c
  04d3b48  fadds 3, 3, 31
  04d3b4c  fmadds 1, 3, 1, 2
  04d3b50  lfs 2, 72(31)
  04d3b54  bl 0x5026a0
  04d3b58  nop
  04d3b5c  lfs 2, 12(30)
  04d3b60  lfs 4, 152(28)
  04d3b64  fcmpu 0, 1, 2
  04d3b68  cror 6, 0, 2
  04d3b6c  bt 6, 0x4d3b78
  04d3b70  li 3, 0
  04d3b74  b 0x4d4054
  04d3b78  lfs 1, 16(31)
  04d3b7c  lfs 2, 128(28)
  04d3b80  lfs 3, 20(31)
  04d3b84  lfs 5, 132(28)
  04d3b88  fsubs 1, 1, 2
  04d3b8c  fsubs 2, 3, 5
  04d3b90  fabs 3, 1
  04d3b94  fabs 5, 2
  04d3b98  stfs 1, 112(1)
  04d3b9c  stfs 2, 116(1)
  04d3ba0  fsubs 1, 3, 5
  04d3ba4  stfs 1, 120(1)
  04d3ba8  lwz 3, 112(1)
  04d3bac  lfs 1, 112(1)
  04d3bb0  lwz 4, 116(1)
  04d3bb4  lfs 2, 116(1)
  04d3bb8  fabs 1, 1
  04d3bbc  lwz 5, 120(1)
  04d3bc0  rlwinm 4, 4, 3, 29, 29
  04d3bc4  lfs 6, 120(1)
  04d3bc8  fabs 2, 2
  04d3bcc  rlwimi 4, 5, 2, 30, 30
  04d3bd0  fsub 7, 6, 30
  04d3bd4  fsub 6, 6, 30
  04d3bd8  rlwimi 4, 3, 4, 28, 28
  04d3bdc  ori 3, 29, 0
  04d3be0  rlwimi 3, 4, 2, 26, 28
  04d3be4  slwi 4, 4, 2
  04d3be8  clrldi 3, 3, 32
  04d3bec  fsel 5, 7, 1, 5
  04d3bf0  lfsx 1, 29, 4
  04d3bf4  fsel 3, 6, 2, 3
  04d3bf8  lfs 2, 4(3)
  04d3bfc  fcmpu 0, 5, 30
  04d3c00  bt 1, 0x4d3c08
  04d3c04  b 0x4d3d1c
  04d3c08  fsubs 6, 3, 5
  04d3c0c  fadds 3, 3, 5
  04d3c10  addic 3, 1, 16
  04d3c14  li 6, 2
  04d3c18  addic 5, 3, 136
  04d3c1c  addic 4, 3, 120
  04d3c20  mtctr 6
  04d3c24  fdivs 3, 6, 3
  04d3c28  fmuls 5, 3, 3
  04d3c2c  stfs 3, 148(1)
  04d3c30  stfs 3, 140(1)
  04d3c34  stfs 3, 144(1)
  04d3c38  stfs 3, 136(1)
  04d3c3c  lfs 7, 148(1)
  04d3c40  lfs 8, 140(1)
  04d3c44  lfs 9, 144(1)
  04d3c48  fmuls 6, 5, 5
  04d3c4c  fmuls 8, 8, 5
  04d3c50  fmuls 7, 7, 6
  04d3c54  fmuls 3, 6, 6
  04d3c58  fmuls 6, 9, 6
  04d3c5c  stfs 8, 140(1)
  04d3c60  fmuls 5, 7, 5
  04d3c64  stfs 6, 144(1)
  04d3c68  stfs 5, 148(1)
  04d3c6c  lfs 5, 120(3)
  04d3c70  fmuls 5, 5, 3
  04d3c74  stfs 5, 136(3)
  04d3c78  lfs 5, 4(4)
  04d3c7c  addic 4, 4, 8
  04d3c80  fmuls 5, 5, 3
  04d3c84  addic 3, 3, 8
  04d3c88  stfs 5, 4(5)
  04d3c8c  addic 5, 5, 8
  04d3c90  bdnz 0x4d3c6c
  04d3c94  li 5, 4
  04d3c98  ori 3, 1, 0
  04d3c9c  mtctr 5
  04d3ca0  lis 4, 115
  04d3ca4  addic 5, 3, 136
  04d3ca8  addic 4, 4, 22752
  04d3cac  ori 7, 5, 0
  04d3cb0  lfs 3, 136(3)
  04d3cb4  lfs 5, 0(4)
  04d3cb8  fmuls 3, 3, 5
  04d3cbc  lfs 5, 4(4)
  04d3cc0  addic 4, 4, 8
  04d3cc4  stfs 3, 136(3)
  04d3cc8  lfs 3, 4(5)
  04d3ccc  addic 3, 3, 8
  04d3cd0  fmuls 3, 3, 5
  04d3cd4  stfs 3, 4(5)
  04d3cd8  addic 5, 5, 8
  04d3cdc  bdnz 0x4d3cb0
  04d3ce0  ori 3, 1, 0
  04d3ce4  mtctr 6
  04d3ce8  lfs 3, 136(3)
  04d3cec  lfs 5, 4(7)
  04d3cf0  fadds 3, 30, 3
  04d3cf4  lfs 6, 8(7)
  04d3cf8  addic 3, 3, 16
  04d3cfc  lfs 30, 12(7)
  04d3d00  addic 7, 7, 16
  04d3d04  fadds 3, 3, 5
  04d3d08  fadds 3, 3, 6
  04d3d0c  fadds 30, 3, 30
  04d3d10  bdnz 0x4d3ce8
  04d3d14  fadds 30, 30, 31
  04d3d18  fmadds 30, 30, 1, 2
  04d3d1c  fmr 1, 30
  04d3d20  fmr 2, 4
  04d3d24  bl 0x5026a0
  04d3d28  nop
  04d3d2c  lis 3, 77
  04d3d30  addi 3, 3, 14428
  04d3d34  lfs 2, 12(3)
  04d3d38  fcmpu 0, 1, 2
  04d3d3c  cror 6, 0, 2
  04d3d40  bt 6, 0x4d3d4c
  04d3d44  li 3, 0
  04d3d48  b 0x4d4054
  04d3d4c  ori 3, 31, 0
  04d3d50  ori 4, 30, 0
  04d3d54  li 5, 0
  04d3d58  bl 0x4d31b0
  04d3d5c  lis 3, 161
  04d3d60  lis 4, 161
  04d3d64  addic 3, 3, 23556
  04d3d68  lwz 4, 1808(4)
  04d3d6c  lwz 5, 16(3)
  04d3d70  cmpw 4, 5
  04d3d74  bf 0, 0x4d3d80
  04d3d78  li 3, 0
  04d3d7c  b 0x4d4054
  04d3d80  lbz 4, 8(30)
  04d3d84  cmpwi 4, 0
  04d3d88  bf 2, 0x4d3da4
  04d3d8c  lis 4, 150
  04d3d90  addic 4, 4, 19008
  04d3d94  lwz 4, 164(4)
  04d3d98  rlwinm 4, 4, 0, 27, 27
  04d3d9c  cmpwi 4, 0
  04d3da0  bt 2, 0x4d3f5c
  04d3da4  lis 4, 151
  04d3da8  lwz 4, -25488(4)
  04d3dac  cmpwi 4, 0
  04d3db0  cmpwi 1, 4, 18
  04d3db4  bt 0, 0x4d3dbc
  04d3db8  bf 5, 0x4d3dc4
  04d3dbc  li 5, 0
  04d3dc0  b 0x4d3e20
  04d3dc4  lis 5, 116
  04d3dc8  slwi 4, 4, 2
  04d3dcc  lis 6, 116
  04d3dd0  addic 5, 5, -32456
  04d3dd4  extsw 4, 4
  04d3dd8  addic 6, 6, -32452
  04d3ddc  lwzx 5, 5, 4
  04d3de0  lwzx 4, 6, 4
  04d3de4  cmpw 4, 5
  04d3de8  bf 1, 0x4d3e1c
  04d3dec  lis 7, 161
  04d3df0  slwi 6, 5, 2
  04d3df4  addic 7, 7, 23872
  04d3df8  extsw 8, 6
  04d3dfc  lwzx 8, 7, 8
  04d3e00  cmpw 8, 31
  04d3e04  bf 2, 0x4d3e0c
  04d3e08  b 0x4d3e20
  04d3e0c  addic 5, 5, 1
  04d3e10  addic 6, 6, 4
  04d3e14  cmpw 4, 5
  04d3e18  bt 1, 0x4d3df8
  04d3e1c  li 5, -1
  04d3e20  lis 4, 151
  04d3e24  sldi 5, 5, 4
  04d3e28  addic 4, 4, -15784
  04d3e2c  extsw 5, 5
  04d3e30  lwzx 6, 4, 5
  04d3e34  cmpwi 6, 0
  04d3e38  bf 2, 0x4d3e44
  04d3e3c  li 6, 1
  04d3e40  stwx 6, 4, 5
  04d3e44  lhz 4, 54(30)
  04d3e48  stw 31, 8(3)
  04d3e4c  extsh 4, 4
  04d3e50  stw 30, 12(3)
  04d3e54  sldi 5, 4, 5
  04d3e58  sldi 4, 4, 2
  04d3e5c  lwz 6, 60(30)
  04d3e60  subc 4, 5, 4
  04d3e64  addc 29, 6, 4
  04d3e68  clrldi 29, 29, 32
  04d3e6c  lhz 4, 16(29)
  04d3e70  rlwinm 4, 4, 0, 28, 28
  04d3e74  cmpwi 4, 0
  04d3e78  bt 2, 0x4d3edc
  04d3e7c  lhz 4, 8(29)
  04d3e80  cmpwi 4, 1
  04d3e84  cmpwi 1, 4, 4
  04d3e88  bf 2, 0x4d3ec0
  04d3e8c  lhz 6, 10(29)
  04d3e90  lis 4, 115
  04d3e94  extsh 6, 6
  04d3e98  lis 5, 151
  04d3e9c  sldi 6, 6, 3
  04d3ea0  addic 4, 4, 32048
  04d3ea4  addc 8, 6, 6
  04d3ea8  addc 6, 6, 8
  04d3eac  lwz 7, -25440(5)
  04d3eb0  lwzx 4, 4, 6
  04d3eb4  subc 4, 7, 4
  04d3eb8  stw 4, -25440(5)
  04d3ebc  b 0x4d3edc
  04d3ec0  bf 6, 0x4d3edc
  04d3ec4  lis 4, 151
  04d3ec8  lhz 6, 10(29)
  04d3ecc  li 5, 0
  04d3ed0  addic 4, 4, -16400
  04d3ed4  extsh 6, 6
  04d3ed8  stbx 5, 4, 6
  04d3edc  lhz 4, 4(29)
  04d3ee0  extsh 5, 4
  04d3ee4  cmpwi 5, -1
  04d3ee8  bf 2, 0x4d3f00
  04d3eec  ori 3, 31, 0
  04d3ef0  ori 4, 30, 0
  04d3ef4  li 5, 1
  04d3ef8  bl 0x4d31b0
  04d3efc  b 0x4d3f54
  04d3f00  rlwinm 4, 4, 0, 17, 17
  04d3f04  stw 31, 8(3)
  04d3f08  cmpwi 4, 0
  04d3f0c  stw 30, 12(3)
  04d3f10  bt 2, 0x4d3f24
  04d3f14  xori 3, 5, 16384
  04d3f18  bl 0x168dec
  04d3f1c  nop
  04d3f20  b 0x4d3f54
  04d3f24  lis 31, 144
  04d3f28  lwz 3, -27624(31)
  04d3f2c  extsw 3, 3
  04d3f30  bl 0xc8964
  04d3f34  nop
  04d3f38  li 3, -1
  04d3f3c  li 4, 0
  04d3f40  stw 3, -27624(31)
  04d3f44  lhz 3, 4(29)
  04d3f48  extsh 3, 3
  04d3f4c  bl 0x167e60
  04d3f50  nop
  04d3f54  li 3, 1
  04d3f58  b 0x4d4054
  04d3f5c  lis 3, 144
  04d3f60  li 4, 10
  04d3f64  lwz 3, -27624(3)
  04d3f68  extsw 3, 3
  04d3f6c  bl 0xc90a0
  04d3f70  nop
  04d3f74  cmpwi 3, 0
  04d3f78  bt 2, 0x4d3fb4
  04d3f7c  lis 5, 112
  04d3f80  lis 6, 112
  04d3f84  lis 7, 112
  04d3f88  li 4, 0
  04d3f8c  li 3, 12
  04d3f90  addic 5, 5, 22352
  04d3f94  li 8, 0
  04d3f98  addic 6, 6, 22360
  04d3f9c  li 9, 0
  04d3fa0  addic 7, 7, 22408
  04d3fa4  bl 0xc8444
  04d3fa8  nop
  04d3fac  lis 4, 144
  04d3fb0  stw 3, -27624(4)
  04d3fb4  lhz 3, 54(30)
  04d3fb8  lwz 4, 60(30)
  04d3fbc  extsh 3, 3
  04d3fc0  sldi 5, 3, 5
  04d3fc4  sldi 3, 3, 2
  04d3fc8  subc 3, 5, 3
  04d3fcc  addc 3, 4, 3
  04d3fd0  clrldi 3, 3, 32
  04d3fd4  lhz 3, 8(3)
  04d3fd8  cmpwi 3, 1
  04d3fdc  cmpwi 1, 3, 6
  04d3fe0  bt 2, 0x4d3fe8
  04d3fe4  bf 6, 0x4d4050
  04d3fe8  lis 5, 112
  04d3fec  lis 9, 152
  04d3ff0  lis 6, 112
  04d3ff4  lis 7, 112
  04d3ff8  lis 8, 151
  04d3ffc  li 4, 30030
  04d4000  li 3, 2
  04d4004  addic 5, 5, 22544
  04d4008  ori 9, 9, 38527
  04d400c  addic 6, 6, 22552
  04d4010  addic 7, 7, 22560
  04d4014  addic 8, 8, -25440
  04d4018  bl 0xc8444
  04d401c  nop
  04d4020  lis 4, 77
  04d4024  lis 5, 114
  04d4028  addi 4, 4, 14428
  04d402c  lfs 1, 16(4)
  04d4030  lfs 2, -3056(5)
  04d4034  fmuls 1, 2, 1
  04d4038  fctiwz 1, 1
  04d403c  stfd 1, 200(1)
  04d4040  lwz 4, 204(1)
  04d4044  extsw 4, 4
  04d4048  bl 0xc90a0
  04d404c  nop
  04d4050  li 3, 0
  04d4054  ld 0, 288(1)
  04d4058  mtlr 0
  04d405c  lfd 30, 256(1)
  04d4060  lfd 31, 264(1)
  04d4064  ld 28, 224(1)
  04d4068  ld 29, 232(1)
  04d406c  ld 30, 240(1)
  04d4070  ld 31, 248(1)
  04d4074  addi 1, 1, 272
  04d4078  blr

FUN_004d407c:   # 0x4d407c, 0x9c bytes
  04d407c  lis 6, 151
  04d4080  lwz 6, -25488(6)
  04d4084  cmpwi 6, 0
  04d4088  cmpwi 1, 6, 18
  04d408c  bt 0, 0x4d4094
  04d4090  bf 5, 0x4d409c
  04d4094  li 5, 0
  04d4098  b 0x4d4100
  04d409c  lis 5, 116
  04d40a0  slwi 6, 6, 2
  04d40a4  lis 7, 116
  04d40a8  addic 5, 5, -32456
  04d40ac  extsw 6, 6
  04d40b0  addic 7, 7, -32452
  04d40b4  lwzx 5, 5, 6
  04d40b8  lwzx 6, 7, 6
  04d40bc  cmpw 6, 5
  04d40c0  bf 1, 0x4d4114
  04d40c4  lis 7, 161
  04d40c8  slwi 8, 5, 2
  04d40cc  addic 7, 7, 23872
  04d40d0  extsw 9, 8
  04d40d4  lwzx 9, 7, 9
  04d40d8  cmpw 9, 3
  04d40dc  bf 2, 0x4d40ec
  04d40e0  cmpwi 5, -1
  04d40e4  bt 2, 0x4d4114
  04d40e8  b 0x4d4100
  04d40ec  addic 5, 5, 1
  04d40f0  addic 8, 8, 4
  04d40f4  cmpw 6, 5
  04d40f8  bt 1, 0x4d40d0
  04d40fc  b 0x4d4114
  04d4100  lis 3, 151
  04d4104  slwi 5, 5, 4
  04d4108  addic 3, 3, -15784
  04d410c  extsw 5, 5
  04d4110  stwx 4, 3, 5
  04d4114  blr

FUN_004d4118:   # 0x4d4118, 0x14 bytes
  04d4118  lis 3, 144
  04d411c  lis 4, 1
  04d4120  addic 3, 3, -23660
  04d4124  stw 4, 72(3)
  04d4128  blr

FUN_004d4138:   # 0x4d4138, 0x1e8 bytes
  04d4138  stdu 1, -240(1)
  04d413c  mflr 0
  04d4140  std 0, 256(1)
  04d4144  stfd 27, 200(1)
  04d4148  stfd 28, 208(1)
  04d414c  stfd 29, 216(1)
  04d4150  stfd 30, 224(1)
  04d4154  stfd 31, 232(1)
  04d4158  std 25, 144(1)
  04d415c  lis 6, 0
  04d4160  ori 25, 3, 0
  04d4164  fmr 31, 1
  04d4168  std 31, 192(1)
  04d416c  li 3, 1192
  04d4170  std 30, 184(1)
  04d4174  ori 31, 10, 0
  04d4178  std 29, 176(1)
  04d417c  ori 30, 9, 0
  04d4180  std 28, 168(1)
  04d4184  ori 29, 8, 0
  04d4188  std 27, 160(1)
  04d418c  std 23, 128(1)
  04d4190  ori 28, 7, 0
  04d4194  ori 27, 5, 0
  04d4198  std 26, 152(1)
  04d419c  lwz 23, 356(1)
  04d41a0  std 24, 136(1)
  04d41a4  std 22, 120(1)
  04d41a8  std 21, 112(1)
  04d41ac  ori 26, 4, 0
  04d41b0  bl 0xefa28
  04d41b4  nop
  04d41b8  ori 24, 3, 0
  04d41bc  cmpwi 24, 0
  04d41c0  bt 2, 0x4d42cc
  04d41c4  lis 3, 77
  04d41c8  lwz 22, 120(24)
  04d41cc  addi 3, 3, 16688
  04d41d0  lfs 30, 0(3)
  04d41d4  lfs 29, 4(3)
  04d41d8  fmr 1, 30
  04d41dc  fmr 2, 29
  04d41e0  bl 0xfcbe8
  04d41e4  nop
  04d41e8  fmr 28, 1
  04d41ec  fmr 1, 30
  04d41f0  fmr 2, 29
  04d41f4  bl 0xfcbe8
  04d41f8  nop
  04d41fc  fmr 27, 1
  04d4200  fmr 1, 30
  04d4204  fmr 2, 29
  04d4208  bl 0xfcbe8
  04d420c  nop
  04d4210  li 3, 255
  04d4214  li 7, 1
  04d4218  fmr 30, 1
  04d421c  li 21, 0
  04d4220  clrlwi 4, 29, 24
  04d4224  stb 3, 48(24)
  04d4228  clrlwi 5, 30, 24
  04d422c  sth 3, 50(24)
  04d4230  clrlwi 6, 31, 24
  04d4234  stb 7, 49(24)
  04d4238  ori 3, 24, 0
  04d423c  stb 21, 32(24)
  04d4240  stb 23, 35(24)
  04d4244  bl 0xf1ec8
  04d4248  nop
  04d424c  lfs 1, 44(24)
  04d4250  clrlwi 4, 23, 24
  04d4254  stw 25, 16(22)
  04d4258  fmuls 1, 1, 31
  04d425c  stw 28, 20(22)
  04d4260  sth 28, 28(22)
  04d4264  sth 4, 30(22)
  04d4268  ori 3, 24, 0
  04d426c  stfs 1, 24(22)
  04d4270  stw 21, 44(24)
  04d4274  lfs 1, 0(26)
  04d4278  stfs 1, 16(24)
  04d427c  lfs 1, 4(26)
  04d4280  stfs 1, 20(24)
  04d4284  lfs 1, 8(26)
  04d4288  stfs 1, 24(24)
  04d428c  lfs 1, 12(26)
  04d4290  stfs 1, 28(24)
  04d4294  lfs 1, 0(27)
  04d4298  stfs 1, 0(22)
  04d429c  lfs 1, 4(27)
  04d42a0  stfs 1, 4(22)
  04d42a4  lfs 1, 8(27)
  04d42a8  stfs 1, 8(22)
  04d42ac  lfs 1, 12(27)
  04d42b0  stfs 1, 12(22)
  04d42b4  stfs 28, 64(24)
  04d42b8  stfs 27, 68(24)
  04d42bc  stfs 30, 72(24)
  04d42c0  stw 21, 76(24)
  04d42c4  bl 0xf31a8
  04d42c8  nop
  04d42cc  ori 3, 24, 0
  04d42d0  ld 0, 256(1)
  04d42d4  mtlr 0
  04d42d8  lfd 27, 200(1)
  04d42dc  lfd 28, 208(1)
  04d42e0  lfd 29, 216(1)
  04d42e4  lfd 30, 224(1)
  04d42e8  lfd 31, 232(1)
  04d42ec  ld 21, 112(1)
  04d42f0  ld 22, 120(1)
  04d42f4  ld 23, 128(1)
  04d42f8  ld 24, 136(1)
  04d42fc  ld 25, 144(1)
  04d4300  ld 26, 152(1)
  04d4304  ld 27, 160(1)
  04d4308  ld 28, 168(1)
  04d430c  ld 29, 176(1)
  04d4310  ld 30, 184(1)
  04d4314  ld 31, 192(1)
  04d4318  addi 1, 1, 240
  04d431c  blr

FUN_004d4328:   # 0x4d4328, 0xdc bytes
  04d4328  lwz 6, 8(3)
  04d432c  li 4, 4
  04d4330  lis 5, 77
  04d4334  vspltisw 5, -1
  04d4338  vspltisw 6, -1
  04d433c  addi 5, 5, 17184
  04d4340  lvlx 2, 0, 6
  04d4344  lvlx 3, 4, 6
  04d4348  vcfux 2, 2, 0
  04d434c  vcfux 3, 3, 0
  04d4350  lvlx 4, 0, 5
  04d4354  vslw 5, 5, 5
  04d4358  vspltw 4, 4, 0
  04d435c  vslw 6, 6, 6
  04d4360  vspltisw 9, -1
  04d4364  vspltisw 10, -1
  04d4368  vspltisw 0, -1
  04d436c  li 4, 20
  04d4370  vslw 9, 9, 9
  04d4374  vrefp 7, 2
  04d4378  vrefp 8, 3
  04d437c  vslw 10, 10, 10
  04d4380  vspltisw 13, -1
  04d4384  li 5, 24
  04d4388  vnmsubfp 11, 7, 2, 4
  04d438c  vnmsubfp 12, 8, 3, 4
  04d4390  vmaddfp 5, 7, 11, 5
  04d4394  vmaddfp 6, 8, 12, 6
  04d4398  vspltisw 8, -1
  04d439c  lvlx 7, 4, 3
  04d43a0  li 4, 40
  04d43a4  vslw 8, 8, 8
  04d43a8  vnmsubfp 11, 5, 2, 4
  04d43ac  vnmsubfp 12, 6, 3, 4
  04d43b0  vmaddfp 5, 5, 11, 9
  04d43b4  vmaddfp 6, 6, 12, 10
  04d43b8  vslw 10, 0, 0
  04d43bc  vspltisw 12, -1
  04d43c0  vslw 9, 13, 13
  04d43c4  lvlx 11, 5, 3
  04d43c8  lis 5, 16256
  04d43cc  vnmsubfp 2, 5, 2, 4
  04d43d0  vnmsubfp 3, 6, 3, 4
  04d43d4  vslw 4, 12, 12
  04d43d8  vmaddfp 2, 5, 2, 8
  04d43dc  vmaddfp 3, 6, 3, 10
  04d43e0  vmaddfp 2, 2, 7, 9
  04d43e4  vmaddfp 3, 3, 11, 4
  04d43e8  vcmpgtfp 4, 3, 2
  04d43ec  vsel 2, 3, 2, 4
  04d43f0  vspltw 2, 2, 0
  04d43f4  stvewx 2, 4, 3
  04d43f8  stw 5, 28(3)
  04d43fc  stw 5, 32(3)
  04d4400  blr

FUN_004d4404:   # 0x4d4404, 0x18 bytes
  04d4404  lwz 3, 160(4)
  04d4408  cmpwi 3, 0
  04d440c  bt 2, 0x4d4418
  04d4410  li 3, 0
  04d4414  stw 3, 160(4)
  04d4418  blr

FUN_004d441c:   # 0x4d441c, 0x84 bytes
  04d441c  lwz 8, 20(3)
  04d4420  lis 5, 0
  04d4424  lis 9, 1
  04d4428  stw 8, 0(4)
  04d442c  lbz 8, 0(3)
  04d4430  ori 5, 5, 32809
  04d4434  lbz 10, 1(3)
  04d4438  li 7, 2
  04d443c  slwi 8, 8, 8
  04d4440  rlwinm 11, 10, 15, 9, 16
  04d4444  or 5, 8, 5
  04d4448  ori 8, 9, 771
  04d444c  rlwimi 5, 10, 16, 8, 15
  04d4450  lis 6, -32768
  04d4454  addic 9, 11, -32768
  04d4458  rlwimi 5, 7, 0, 30, 31
  04d445c  lis 10, 518
  04d4460  stw 8, 8(4)
  04d4464  or 6, 9, 6
  04d4468  lhz 7, 8(3)
  04d446c  lhz 8, 10(3)
  04d4470  ori 9, 10, 8192
  04d4474  stw 5, 4(4)
  04d4478  rlwimi 8, 7, 16, 0, 15
  04d447c  stw 6, 12(4)
  04d4480  lwz 5, 4(3)
  04d4484  stw 9, 20(4)
  04d4488  stw 5, 16(4)
  04d448c  stw 8, 24(4)
  04d4490  lwz 3, 16(3)
  04d4494  oris 3, 3, 16
  04d4498  stw 3, 28(4)
  04d449c  blr

FUN_004d44a0:   # 0x4d44a0, 0x9c bytes
  04d44a0  stdu 1, -64(1)
  04d44a4  ori 8, 3, 0
  04d44a8  mullw 3, 4, 7
  04d44ac  li 10, 161
  04d44b0  addic 3, 3, 127
  04d44b4  li 11, 1
  04d44b8  rlwinm 3, 3, 0, 0, 24
  04d44bc  li 9, 0
  04d44c0  std 31, 56(1)
  04d44c4  addc 3, 6, 3
  04d44c8  li 31, 2
  04d44cc  clrldi 3, 3, 32
  04d44d0  lis 12, 0
  04d44d4  stb 10, 0(3)
  04d44d8  stb 11, 1(3)
  04d44dc  lis 10, 144
  04d44e0  stb 9, 3(3)
  04d44e4  ori 9, 12, 43748
  04d44e8  stb 31, 2(3)
  04d44ec  stb 11, 14(3)
  04d44f0  sth 8, 8(3)
  04d44f4  stw 9, 4(3)
  04d44f8  lwz 8, -23196(10)
  04d44fc  sth 4, 10(3)
  04d4500  sth 11, 12(3)
  04d4504  stw 7, 16(3)
  04d4508  lwz 4, 1192(8)
  04d450c  subc 4, 6, 4
  04d4510  cmpwi 4, 0
  04d4514  stw 4, 20(3)
  04d4518  bf 2, 0x4d4524
  04d451c  li 3, 0
  04d4520  b 0x4d4530
  04d4524  ori 4, 3, 0
  04d4528  li 3, 1
  04d452c  stw 4, 0(5)
  04d4530  ld 31, 56(1)
  04d4534  addi 1, 1, 64
  04d4538  blr

FUN_004d453c:   # 0x4d453c, 0x190 bytes
  04d453c  stdu 1, -112(1)
  04d4540  lwz 10, 24(3)
  04d4544  li 11, 0
  04d4548  std 31, 104(1)
  04d454c  lwz 12, 60(3)
  04d4550  li 31, 0
  04d4554  std 30, 96(1)
  04d4558  subc 10, 11, 10
  04d455c  lwz 30, 36(3)
  04d4560  lwz 11, 12(3)
  04d4564  subc 12, 31, 12
  04d4568  std 28, 80(1)
  04d456c  cntlzw 10, 10
  04d4570  lwz 31, 4(3)
  04d4574  std 29, 88(1)
  04d4578  li 28, 0
  04d457c  lwz 29, 8(3)
  04d4580  sldi 10, 10, 58
  04d4584  std 27, 72(1)
  04d4588  lwz 3, 16(3)
  04d458c  li 27, 0
  04d4590  subc 28, 28, 31
  04d4594  sradi 10, 10, 63
  04d4598  cntlzw 12, 12
  04d459c  subc 30, 27, 30
  04d45a0  li 27, 0
  04d45a4  and 10, 10, 28
  04d45a8  sldi 12, 12, 58
  04d45ac  subc 27, 27, 31
  04d45b0  addc 10, 31, 10
  04d45b4  sradi 12, 12, 63
  04d45b8  addic 11, 11, 15
  04d45bc  std 26, 64(1)
  04d45c0  cntlzw 30, 30
  04d45c4  mullw 26, 29, 10
  04d45c8  and 12, 12, 27
  04d45cc  rlwinm 11, 11, 0, 0, 27
  04d45d0  li 28, 0
  04d45d4  sldi 30, 30, 58
  04d45d8  addc 12, 31, 12
  04d45dc  subc 28, 28, 11
  04d45e0  sradi 30, 30, 63
  04d45e4  mullw 31, 12, 29
  04d45e8  and 30, 30, 28
  04d45ec  li 29, 0
  04d45f0  addc 11, 11, 30
  04d45f4  mullw 3, 3, 11
  04d45f8  addic 30, 26, 127
  04d45fc  addic 31, 31, 127
  04d4600  rlwinm 30, 30, 0, 0, 24
  04d4604  rlwinm 31, 31, 0, 0, 24
  04d4608  subc 29, 29, 30
  04d460c  li 28, 0
  04d4610  cntlzw 29, 29
  04d4614  subc 28, 28, 31
  04d4618  addic 26, 30, 128
  04d461c  sldi 29, 29, 58
  04d4620  addic 3, 3, 127
  04d4624  cntlzw 28, 28
  04d4628  subc 30, 30, 26
  04d462c  sradi 29, 29, 63
  04d4630  std 25, 56(1)
  04d4634  rlwinm 3, 3, 0, 0, 24
  04d4638  li 25, 0
  04d463c  addic 27, 31, 128
  04d4640  sldi 28, 28, 58
  04d4644  and 30, 29, 30
  04d4648  subc 25, 25, 3
  04d464c  subc 31, 31, 27
  04d4650  sradi 29, 28, 63
  04d4654  addc 30, 26, 30
  04d4658  cntlzw 26, 25
  04d465c  and 31, 29, 31
  04d4660  addic 28, 3, 128
  04d4664  sldi 29, 26, 58
  04d4668  stw 30, 0(6)
  04d466c  addc 31, 27, 31
  04d4670  subc 3, 3, 28
  04d4674  sradi 29, 29, 63
  04d4678  addc 6, 31, 30
  04d467c  and 3, 29, 3
  04d4680  or 10, 10, 12
  04d4684  addc 3, 28, 3
  04d4688  stw 6, 0(4)
  04d468c  addc 4, 6, 3
  04d4690  slwi 3, 3, 1
  04d4694  addc 3, 6, 3
  04d4698  stw 4, 0(5)
  04d469c  stw 3, 0(7)
  04d46a0  stw 10, 0(8)
  04d46a4  stw 11, 0(9)
  04d46a8  ld 25, 56(1)
  04d46ac  ld 26, 64(1)
  04d46b0  ld 27, 72(1)
  04d46b4  ld 28, 80(1)
  04d46b8  ld 29, 88(1)
  04d46bc  ld 30, 96(1)
  04d46c0  ld 31, 104(1)
  04d46c4  addi 1, 1, 112
  04d46c8  blr

FUN_004d46cc:   # 0x4d46cc, 0x474 bytes
  04d46cc  stdu 1, -224(1)
  04d46d0  mflr 0
  04d46d4  std 0, 240(1)
  04d46d8  std 31, 216(1)
  04d46dc  std 29, 200(1)
  04d46e0  ori 31, 5, 0
  04d46e4  std 30, 208(1)
  04d46e8  ori 29, 3, 0
  04d46ec  ori 30, 4, 0
  04d46f0  ori 3, 31, 0
  04d46f4  addic 7, 1, 124
  04d46f8  addic 9, 1, 132
  04d46fc  addic 4, 1, 112
  04d4700  addic 5, 1, 116
  04d4704  addic 6, 1, 120
  04d4708  std 28, 192(1)
  04d470c  std 27, 184(1)
  04d4710  std 26, 176(1)
  04d4714  std 25, 168(1)
  04d4718  std 24, 160(1)
  04d471c  std 23, 152(1)
  04d4720  std 22, 144(1)
  04d4724  addic 8, 1, 128
  04d4728  bl 0x4d453c
  04d472c  lwz 3, 0(31)
  04d4730  lwz 4, 124(1)
  04d4734  li 5, 128
  04d4738  mullw 3, 4, 3
  04d473c  addic 6, 3, 128
  04d4740  ori 3, 30, 0
  04d4744  extsw 4, 6
  04d4748  stw 6, 88(29)
  04d474c  bl 0x4fe098
  04d4750  nop
  04d4754  ori 22, 3, 0
  04d4758  lwz 3, 124(1)
  04d475c  li 23, 0
  04d4760  ori 24, 23, 0
  04d4764  stw 22, 160(31)
  04d4768  stw 22, 84(29)
  04d476c  lwz 4, 0(31)
  04d4770  cmpwi 4, 0
  04d4774  bf 1, 0x4d4ae4
  04d4778  lis 25, 271
  04d477c  ori 28, 31, 0
  04d4780  addic 25, 25, -7744
  04d4784  ori 30, 31, 0
  04d4788  addic 26, 25, 36
  04d478c  addic 27, 25, 72
  04d4790  addic 29, 25, 144
  04d4794  lwz 3, 24(28)
  04d4798  cmpwi 3, 0
  04d479c  bt 2, 0x4d4854
  04d47a0  lwz 7, 128(1)
  04d47a4  addic 5, 30, 120
  04d47a8  stw 22, 28(28)
  04d47ac  ori 6, 22, 0
  04d47b0  lwz 3, 4(31)
  04d47b4  lwz 8, 8(31)
  04d47b8  stw 7, 32(28)
  04d47bc  ori 4, 8, 0
  04d47c0  bl 0x4d44a0
  04d47c4  cmpwi 3, 0
  04d47c8  bt 2, 0x4d4af4
  04d47cc  lwz 4, 120(30)
  04d47d0  lis 3, 0
  04d47d4  lis 6, 1
  04d47d8  ori 3, 3, 32809
  04d47dc  li 5, 2
  04d47e0  ori 6, 6, 771
  04d47e4  lwz 7, 20(4)
  04d47e8  stw 7, 0(25)
  04d47ec  lbz 7, 0(4)
  04d47f0  lbz 8, 1(4)
  04d47f4  slwi 7, 7, 8
  04d47f8  stw 6, 8(25)
  04d47fc  lis 6, 518
  04d4800  or 3, 7, 3
  04d4804  ori 6, 6, 8192
  04d4808  rlwimi 3, 8, 16, 8, 15
  04d480c  rlwimi 3, 5, 0, 30, 31
  04d4810  lis 5, -32768
  04d4814  stw 3, 4(25)
  04d4818  lbz 3, 1(4)
  04d481c  slwi 3, 3, 15
  04d4820  addic 3, 3, -32768
  04d4824  or 3, 3, 5
  04d4828  stw 3, 12(25)
  04d482c  lwz 3, 4(4)
  04d4830  stw 6, 20(25)
  04d4834  stw 3, 16(25)
  04d4838  lhz 3, 8(4)
  04d483c  lhz 5, 10(4)
  04d4840  rlwimi 5, 3, 16, 0, 15
  04d4844  stw 5, 24(25)
  04d4848  lwz 3, 16(4)
  04d484c  oris 3, 3, 16
  04d4850  stw 3, 28(25)
  04d4854  lwz 3, 36(28)
  04d4858  cmpwi 3, 0
  04d485c  bt 2, 0x4d491c
  04d4860  lwz 3, 112(1)
  04d4864  lwz 7, 132(1)
  04d4868  addic 5, 30, 124
  04d486c  addc 6, 22, 3
  04d4870  stw 6, 40(28)
  04d4874  lwz 3, 12(31)
  04d4878  clrldi 6, 6, 32
  04d487c  lwz 8, 16(31)
  04d4880  stw 7, 44(28)
  04d4884  ori 4, 8, 0
  04d4888  bl 0x4d44a0
  04d488c  cmpwi 3, 0
  04d4890  bt 2, 0x4d4af4
  04d4894  lwz 5, 124(30)
  04d4898  lis 3, 0
  04d489c  lis 6, 1
  04d48a0  ori 3, 3, 32809
  04d48a4  li 4, 2
  04d48a8  lwz 7, 20(5)
  04d48ac  ori 6, 6, 771
  04d48b0  stw 7, 0(26)
  04d48b4  lbz 7, 0(5)
  04d48b8  lbz 8, 1(5)
  04d48bc  slwi 7, 7, 8
  04d48c0  stw 6, 8(26)
  04d48c4  or 3, 7, 3
  04d48c8  lis 6, 518
  04d48cc  rlwimi 3, 8, 16, 8, 15
  04d48d0  ori 6, 6, 8192
  04d48d4  rlwimi 3, 4, 0, 30, 31
  04d48d8  lis 4, -32768
  04d48dc  stw 3, 4(26)
  04d48e0  lbz 3, 1(5)
  04d48e4  slwi 3, 3, 15
  04d48e8  addic 3, 3, -32768
  04d48ec  or 3, 3, 4
  04d48f0  stw 3, 12(26)
  04d48f4  lwz 3, 4(5)
  04d48f8  stw 6, 20(26)
  04d48fc  stw 3, 16(26)
  04d4900  lhz 3, 8(5)
  04d4904  lhz 4, 10(5)
  04d4908  rlwimi 4, 3, 16, 0, 15
  04d490c  stw 4, 24(26)
  04d4910  lwz 3, 16(5)
  04d4914  oris 3, 3, 16
  04d4918  stw 3, 28(26)
  04d491c  lwz 3, 48(28)
  04d4920  cmpwi 3, 0
  04d4924  bt 2, 0x4d49e4
  04d4928  lwz 3, 116(1)
  04d492c  addic 5, 30, 128
  04d4930  lwz 7, 132(1)
  04d4934  addc 8, 22, 3
  04d4938  lwz 3, 12(31)
  04d493c  lwz 9, 16(31)
  04d4940  stw 7, 56(28)
  04d4944  clrldi 6, 8, 32
  04d4948  stw 8, 52(28)
  04d494c  ori 4, 9, 0
  04d4950  bl 0x4d44a0
  04d4954  cmpwi 3, 0
  04d4958  bt 2, 0x4d4af4
  04d495c  lwz 4, 128(30)
  04d4960  lis 3, 0
  04d4964  lis 6, 1
  04d4968  ori 3, 3, 32809
  04d496c  li 5, 2
  04d4970  ori 6, 6, 771
  04d4974  lwz 7, 20(4)
  04d4978  stw 7, 0(27)
  04d497c  lbz 7, 0(4)
  04d4980  lbz 8, 1(4)
  04d4984  slwi 7, 7, 8
  04d4988  stw 6, 8(27)
  04d498c  lis 6, 518
  04d4990  or 3, 7, 3
  04d4994  ori 6, 6, 8192
  04d4998  rlwimi 3, 8, 16, 8, 15
  04d499c  rlwimi 3, 5, 0, 30, 31
  04d49a0  lis 5, -32768
  04d49a4  stw 3, 4(27)
  04d49a8  lbz 3, 1(4)
  04d49ac  slwi 3, 3, 15
  04d49b0  addic 3, 3, -32768
  04d49b4  or 3, 3, 5
  04d49b8  stw 3, 12(27)
  04d49bc  lwz 3, 4(4)
  04d49c0  stw 6, 20(27)
  04d49c4  stw 3, 16(27)
  04d49c8  lhz 3, 8(4)
  04d49cc  lhz 5, 10(4)
  04d49d0  rlwimi 5, 3, 16, 0, 15
  04d49d4  stw 5, 24(27)
  04d49d8  lwz 3, 16(4)
  04d49dc  oris 3, 3, 16
  04d49e0  stw 3, 28(27)
  04d49e4  lwz 3, 60(28)
  04d49e8  cmpwi 3, 0
  04d49ec  bt 2, 0x4d4aac
  04d49f0  lwz 3, 120(1)
  04d49f4  lwz 7, 128(1)
  04d49f8  addic 5, 30, 132
  04d49fc  addc 6, 22, 3
  04d4a00  stw 6, 64(28)
  04d4a04  lwz 3, 4(31)
  04d4a08  clrldi 6, 6, 32
  04d4a0c  lwz 8, 8(31)
  04d4a10  stw 7, 68(28)
  04d4a14  ori 4, 8, 0
  04d4a18  bl 0x4d44a0
  04d4a1c  cmpwi 3, 0
  04d4a20  bt 2, 0x4d4af4
  04d4a24  lwz 5, 132(30)
  04d4a28  lis 3, 0
  04d4a2c  lis 6, 1
  04d4a30  ori 3, 3, 32809
  04d4a34  li 4, 2
  04d4a38  lwz 7, 20(5)
  04d4a3c  ori 6, 6, 771
  04d4a40  stw 7, 0(29)
  04d4a44  lbz 7, 0(5)
  04d4a48  lbz 8, 1(5)
  04d4a4c  slwi 7, 7, 8
  04d4a50  stw 6, 8(29)
  04d4a54  or 3, 7, 3
  04d4a58  lis 6, 518
  04d4a5c  rlwimi 3, 8, 16, 8, 15
  04d4a60  ori 6, 6, 8192
  04d4a64  rlwimi 3, 4, 0, 30, 31
  04d4a68  lis 4, -32768
  04d4a6c  stw 3, 4(29)
  04d4a70  lbz 3, 1(5)
  04d4a74  slwi 3, 3, 15
  04d4a78  addic 3, 3, -32768
  04d4a7c  or 3, 3, 4
  04d4a80  stw 3, 12(29)
  04d4a84  lwz 3, 4(5)
  04d4a88  stw 6, 20(29)
  04d4a8c  stw 3, 16(29)
  04d4a90  lhz 3, 8(5)
  04d4a94  lhz 4, 10(5)
  04d4a98  rlwimi 4, 3, 16, 0, 15
  04d4a9c  stw 4, 24(29)
  04d4aa0  lwz 3, 16(5)
  04d4aa4  oris 3, 3, 16
  04d4aa8  stw 3, 28(29)
  04d4aac  lwz 3, 124(1)
  04d4ab0  stw 24, 136(30)
  04d4ab4  addic 23, 23, 1
  04d4ab8  lwz 4, 0(31)
  04d4abc  addc 22, 22, 3
  04d4ac0  addic 28, 28, 48
  04d4ac4  cmpw 23, 4
  04d4ac8  addic 25, 25, 144
  04d4acc  addic 26, 26, 144
  04d4ad0  addic 27, 27, 144
  04d4ad4  addic 29, 29, 144
  04d4ad8  clrldi 22, 22, 32
  04d4adc  addic 30, 30, 20
  04d4ae0  bt 0, 0x4d4794
  04d4ae4  ori 4, 3, 0
  04d4ae8  li 3, 1
  04d4aec  stw 4, 164(31)
  04d4af0  b 0x4d4b08
  04d4af4  lwz 3, 160(31)
  04d4af8  cmpwi 3, 0
  04d4afc  bt 2, 0x4d4b04
  04d4b00  stw 24, 160(31)
  04d4b04  ori 3, 24, 0
  04d4b08  ld 0, 240(1)
  04d4b0c  mtlr 0
  04d4b10  ld 22, 144(1)
  04d4b14  ld 23, 152(1)
  04d4b18  ld 24, 160(1)
  04d4b1c  ld 25, 168(1)
  04d4b20  ld 26, 176(1)
  04d4b24  ld 27, 184(1)
  04d4b28  ld 28, 192(1)
  04d4b2c  ld 29, 200(1)
  04d4b30  ld 30, 208(1)
  04d4b34  ld 31, 216(1)
  04d4b38  addi 1, 1, 224
  04d4b3c  blr

FUN_004d4b40:   # 0x4d4b40, 0x54 bytes
  04d4b40  stdu 1, -128(1)
  04d4b44  mflr 0
  04d4b48  std 0, 144(1)
  04d4b4c  std 31, 120(1)
  04d4b50  ori 31, 3, 0
  04d4b54  lis 3, 102
  04d4b58  lis 4, 102
  04d4b5c  addic 3, 3, -29064
  04d4b60  addic 4, 4, -29048
  04d4b64  lwz 5, 88(31)
  04d4b68  bl 0x4ffc9c
  04d4b6c  nop
  04d4b70  lwz 3, 4(31)
  04d4b74  lwz 4, 84(31)
  04d4b78  bl 0x4fe61c
  04d4b7c  nop
  04d4b80  ld 0, 144(1)
  04d4b84  mtlr 0
  04d4b88  ld 31, 120(1)
  04d4b8c  addi 1, 1, 128
  04d4b90  blr

FUN_004d4b94:   # 0x4d4b94, 0xf4 bytes
  04d4b94  stdu 1, -144(1)
  04d4b98  mflr 0
  04d4b9c  std 0, 160(1)
  04d4ba0  lis 5, 271
  04d4ba4  li 6, 0
  04d4ba8  ori 4, 6, 0
  04d4bac  lwz 7, -7912(5)
  04d4bb0  std 31, 136(1)
  04d4bb4  std 30, 128(1)
  04d4bb8  std 29, 120(1)
  04d4bbc  cmpwi 7, 0
  04d4bc0  bf 1, 0x4d4c58
  04d4bc4  addic 9, 5, -7912
  04d4bc8  addic 30, 9, 24
  04d4bcc  addic 8, 9, 60
  04d4bd0  addic 31, 9, 28
  04d4bd4  addic 7, 9, 64
  04d4bd8  addic 12, 9, 36
  04d4bdc  addic 11, 9, 40
  04d4be0  addic 10, 9, 48
  04d4be4  addic 9, 9, 52
  04d4be8  lwz 29, 0(30)
  04d4bec  cmpwi 29, 0
  04d4bf0  bt 2, 0x4d4bf8
  04d4bf4  stw 4, 0(31)
  04d4bf8  lwz 29, 0(12)
  04d4bfc  cmpwi 29, 0
  04d4c00  bt 2, 0x4d4c08
  04d4c04  stw 4, 0(11)
  04d4c08  lwz 29, 0(10)
  04d4c0c  cmpwi 29, 0
  04d4c10  bt 2, 0x4d4c18
  04d4c14  stw 4, 0(9)
  04d4c18  lwz 29, 0(8)
  04d4c1c  cmpwi 29, 0
  04d4c20  bt 2, 0x4d4c28
  04d4c24  stw 4, 0(7)
  04d4c28  addic 6, 6, 1
  04d4c2c  lwz 29, -7912(5)
  04d4c30  addic 9, 9, 48
  04d4c34  cmpw 6, 29
  04d4c38  addic 30, 30, 48
  04d4c3c  addic 8, 8, 48
  04d4c40  addic 31, 31, 48
  04d4c44  addic 12, 12, 48
  04d4c48  addic 11, 11, 48
  04d4c4c  addic 10, 10, 48
  04d4c50  addic 7, 7, 48
  04d4c54  bt 0, 0x4d4be8
  04d4c58  lwz 5, 76(3)
  04d4c5c  lwz 3, 0(3)
  04d4c60  ori 4, 5, 0
  04d4c64  bl 0x4fe61c
  04d4c68  nop
  04d4c6c  ld 0, 160(1)
  04d4c70  mtlr 0
  04d4c74  ld 29, 120(1)
  04d4c78  ld 30, 128(1)
  04d4c7c  ld 31, 136(1)
  04d4c80  addi 1, 1, 144
  04d4c84  blr

FUN_004d4c88:   # 0x4d4c88, 0x144 bytes
  04d4c88  stdu 1, -144(1)
  04d4c8c  mflr 0
  04d4c90  std 0, 160(1)
  04d4c94  std 31, 136(1)
  04d4c98  lwz 4, 8(3)
  04d4c9c  ori 31, 3, 0
  04d4ca0  std 30, 128(1)
  04d4ca4  std 29, 120(1)
  04d4ca8  cmpwi 4, 0
  04d4cac  bt 2, 0x4d4db0
  04d4cb0  li 5, 1
  04d4cb4  ori 3, 4, 0
  04d4cb8  stw 5, 16(31)
  04d4cbc  bl 0x5ee638
  04d4cc0  nop
  04d4cc4  lis 3, 271
  04d4cc8  li 4, 0
  04d4ccc  lwz 5, -7912(3)
  04d4cd0  stw 4, 8(31)
  04d4cd4  cmpwi 5, 0
  04d4cd8  bf 1, 0x4d4d74
  04d4cdc  addic 8, 3, -7912
  04d4ce0  ori 30, 4, 0
  04d4ce4  addic 9, 8, 40
  04d4ce8  addic 7, 8, 52
  04d4cec  addic 12, 8, 24
  04d4cf0  addic 6, 8, 60
  04d4cf4  addic 11, 8, 28
  04d4cf8  addic 5, 8, 64
  04d4cfc  addic 10, 8, 36
  04d4d00  addic 8, 8, 48
  04d4d04  lwz 29, 0(12)
  04d4d08  cmpwi 29, 0
  04d4d0c  bt 2, 0x4d4d14
  04d4d10  stw 4, 0(11)
  04d4d14  lwz 29, 0(10)
  04d4d18  cmpwi 29, 0
  04d4d1c  bt 2, 0x4d4d24
  04d4d20  stw 4, 0(9)
  04d4d24  lwz 29, 0(8)
  04d4d28  cmpwi 29, 0
  04d4d2c  bt 2, 0x4d4d34
  04d4d30  stw 4, 0(7)
  04d4d34  lwz 29, 0(6)
  04d4d38  cmpwi 29, 0
  04d4d3c  bt 2, 0x4d4d44
  04d4d40  stw 4, 0(5)
  04d4d44  addic 30, 30, 1
  04d4d48  lwz 29, -7912(3)
  04d4d4c  addic 7, 7, 48
  04d4d50  cmpw 30, 29
  04d4d54  addic 12, 12, 48
  04d4d58  addic 6, 6, 48
  04d4d5c  addic 11, 11, 48
  04d4d60  addic 10, 10, 48
  04d4d64  addic 9, 9, 48
  04d4d68  addic 8, 8, 48
  04d4d6c  addic 5, 5, 48
  04d4d70  bt 0, 0x4d4d04
  04d4d74  lwz 3, 0(31)
  04d4d78  lwz 4, 76(31)
  04d4d7c  bl 0x4fe61c
  04d4d80  nop
  04d4d84  lis 3, 102
  04d4d88  lwz 5, 88(31)
  04d4d8c  lis 4, 102
  04d4d90  addic 3, 3, -29064
  04d4d94  addic 4, 4, -29048
  04d4d98  bl 0x4ffc9c
  04d4d9c  nop
  04d4da0  lwz 3, 4(31)
  04d4da4  lwz 4, 84(31)
  04d4da8  bl 0x4fe61c
  04d4dac  nop
  04d4db0  ld 0, 160(1)
  04d4db4  mtlr 0
  04d4db8  ld 29, 120(1)
  04d4dbc  ld 30, 128(1)
  04d4dc0  ld 31, 136(1)
  04d4dc4  addi 1, 1, 144
  04d4dc8  blr

FUN_004d4dd0:   # 0x4d4dd0, 0x48c bytes
  04d4dd0  stdu 1, -288(1)
  04d4dd4  mflr 0
  04d4dd8  std 0, 304(1)
  04d4ddc  std 30, 272(1)
  04d4de0  std 29, 264(1)
  04d4de4  ori 29, 4, 0
  04d4de8  std 31, 280(1)
  04d4dec  ori 30, 3, 0
  04d4df0  std 28, 256(1)
  04d4df4  std 27, 248(1)
  04d4df8  std 26, 240(1)
  04d4dfc  std 25, 232(1)
  04d4e00  std 24, 224(1)
  04d4e04  std 23, 216(1)
  04d4e08  std 22, 208(1)
  04d4e0c  std 21, 200(1)
  04d4e10  std 20, 192(1)
  04d4e14  std 19, 184(1)
  04d4e18  std 18, 176(1)
  04d4e1c  std 17, 168(1)
  04d4e20  std 16, 160(1)
  04d4e24  std 15, 152(1)
  04d4e28  std 14, 144(1)
  04d4e2c  ori 31, 5, 0
  04d4e30  bl 0x64f504
  04d4e34  ld 2, 40(1)
  04d4e38  ori 3, 29, 0
  04d4e3c  clrldi 4, 31, 32
  04d4e40  bl 0x5f3984
  04d4e44  nop
  04d4e48  stw 3, 8(30)
  04d4e4c  bl 0x64f504
  04d4e50  ld 2, 40(1)
  04d4e54  bl 0x5ea348
  04d4e58  nop
  04d4e5c  ori 31, 3, 0
  04d4e60  bl 0x5c8510
  04d4e64  nop
  04d4e68  cmpwi 3, 0
  04d4e6c  bt 2, 0x4d4e90
  04d4e70  lis 3, 102
  04d4e74  ori 4, 31, 0
  04d4e78  addic 3, 3, -28984
  04d4e7c  bl 0x5cd098
  04d4e80  nop
  04d4e84  bl 0x64f504
  04d4e88  ld 2, 40(1)
  04d4e8c  b 0x4d4e84
  04d4e90  lis 3, 144
  04d4e94  lwz 27, 11980(3)
  04d4e98  std 30, 112(1)
  04d4e9c  addic 27, 27, 124
  04d4ea0  stw 27, 0(30)
  04d4ea4  lwz 3, 11980(3)
  04d4ea8  bl 0x50436c
  04d4eac  nop
  04d4eb0  ori 31, 3, 0
  04d4eb4  lis 26, 271
  04d4eb8  li 28, 0
  04d4ebc  lwz 3, 8(30)
  04d4ec0  addic 29, 26, -7912
  04d4ec4  stw 31, 4(30)
  04d4ec8  ori 4, 29, 0
  04d4ecc  bl 0x5ea3e8
  04d4ed0  nop
  04d4ed4  ori 14, 28, 0
  04d4ed8  lwz 3, -7912(26)
  04d4edc  std 31, 128(1)
  04d4ee0  cmpwi 3, 0
  04d4ee4  stb 14, 120(1)
  04d4ee8  bf 1, 0x4d50dc
  04d4eec  addic 15, 29, 24
  04d4ef0  addic 16, 29, 32
  04d4ef4  addic 22, 29, 56
  04d4ef8  addic 17, 29, 28
  04d4efc  addic 23, 29, 52
  04d4f00  addic 18, 29, 36
  04d4f04  addic 24, 29, 60
  04d4f08  addic 19, 29, 44
  04d4f0c  addic 25, 29, 68
  04d4f10  addic 20, 29, 40
  04d4f14  addic 26, 29, 64
  04d4f18  addic 21, 29, 48
  04d4f1c  lwz 3, 0(15)
  04d4f20  cmpwi 3, 0
  04d4f24  bt 2, 0x4d4f90
  04d4f28  lwz 4, 4(29)
  04d4f2c  ori 3, 27, 0
  04d4f30  lwz 5, 8(29)
  04d4f34  addic 4, 4, 15
  04d4f38  rlwinm 4, 4, 0, 0, 27
  04d4f3c  mullw 30, 4, 5
  04d4f40  stw 4, 0(16)
  04d4f44  li 5, 16
  04d4f48  slwi 30, 30, 2
  04d4f4c  extsw 31, 30
  04d4f50  ori 4, 31, 0
  04d4f54  bl 0x4fe098
  04d4f58  nop
  04d4f5c  lbz 4, 120(1)
  04d4f60  stw 3, 0(17)
  04d4f64  cmpwi 4, 0
  04d4f68  bf 2, 0x4d4f7c
  04d4f6c  li 4, 1
  04d4f70  ld 5, 112(1)
  04d4f74  stb 4, 120(1)
  04d4f78  stw 3, 76(5)
  04d4f7c  ori 3, 27, 0
  04d4f80  addc 28, 30, 28
  04d4f84  ori 4, 31, 0
  04d4f88  bl 0x4fe6ec
  04d4f8c  nop
  04d4f90  lwz 3, 0(18)
  04d4f94  cmpwi 3, 0
  04d4f98  bt 2, 0x4d4fe8
  04d4f9c  lwz 4, 12(29)
  04d4fa0  lwz 5, 16(29)
  04d4fa4  ori 3, 27, 0
  04d4fa8  addic 4, 4, 15
  04d4fac  rlwinm 4, 4, 0, 0, 27
  04d4fb0  mullw 5, 4, 5
  04d4fb4  stw 4, 0(19)
  04d4fb8  slwi 31, 5, 2
  04d4fbc  li 5, 16
  04d4fc0  extsw 30, 31
  04d4fc4  ori 4, 30, 0
  04d4fc8  bl 0x4fe098
  04d4fcc  nop
  04d4fd0  stw 3, 0(20)
  04d4fd4  addc 28, 31, 28
  04d4fd8  ori 3, 27, 0
  04d4fdc  ori 4, 30, 0
  04d4fe0  bl 0x4fe6ec
  04d4fe4  nop
  04d4fe8  lwz 3, 0(21)
  04d4fec  cmpwi 3, 0
  04d4ff0  bt 2, 0x4d5040
  04d4ff4  lwz 4, 12(29)
  04d4ff8  lwz 5, 16(29)
  04d4ffc  ori 3, 27, 0
  04d5000  addic 4, 4, 15
  04d5004  rlwinm 4, 4, 0, 0, 27
  04d5008  mullw 5, 4, 5
  04d500c  stw 4, 0(22)
  04d5010  slwi 31, 5, 2
  04d5014  li 5, 16
  04d5018  extsw 30, 31
  04d501c  ori 4, 30, 0
  04d5020  bl 0x4fe098
  04d5024  nop
  04d5028  stw 3, 0(23)
  04d502c  addc 28, 31, 28
  04d5030  ori 3, 27, 0
  04d5034  ori 4, 30, 0
  04d5038  bl 0x4fe6ec
  04d503c  nop
  04d5040  lwz 3, 0(24)
  04d5044  cmpwi 3, 0
  04d5048  bt 2, 0x4d5098
  04d504c  lwz 4, 4(29)
  04d5050  lwz 5, 8(29)
  04d5054  ori 3, 27, 0
  04d5058  addic 4, 4, 15
  04d505c  rlwinm 4, 4, 0, 0, 27
  04d5060  mullw 5, 4, 5
  04d5064  stw 4, 0(25)
  04d5068  slwi 31, 5, 2
  04d506c  li 5, 16
  04d5070  extsw 30, 31
  04d5074  ori 4, 30, 0
  04d5078  bl 0x4fe098
  04d507c  nop
  04d5080  stw 3, 0(26)
  04d5084  addc 28, 31, 28
  04d5088  ori 3, 27, 0
  04d508c  ori 4, 30, 0
  04d5090  bl 0x4fe6ec
  04d5094  nop
  04d5098  lis 3, 271
  04d509c  addic 14, 14, 1
  04d50a0  addic 15, 15, 48
  04d50a4  addic 21, 21, 48
  04d50a8  addic 16, 16, 48
  04d50ac  lwz 3, -7912(3)
  04d50b0  addic 17, 17, 48
  04d50b4  cmpw 14, 3
  04d50b8  addic 23, 23, 48
  04d50bc  addic 18, 18, 48
  04d50c0  addic 24, 24, 48
  04d50c4  addic 19, 19, 48
  04d50c8  addic 25, 25, 48
  04d50cc  addic 20, 20, 48
  04d50d0  addic 22, 22, 48
  04d50d4  addic 26, 26, 48
  04d50d8  bt 0, 0x4d4f1c
  04d50dc  ld 31, 112(1)
  04d50e0  ori 3, 27, 0
  04d50e4  ld 30, 128(1)
  04d50e8  extsw 4, 28
  04d50ec  stw 28, 80(31)
  04d50f0  bl 0x4fe6ec
  04d50f4  nop
  04d50f8  ori 3, 31, 0
  04d50fc  ori 4, 30, 0
  04d5100  ori 5, 29, 0
  04d5104  bl 0x4d46cc
  04d5108  lwz 3, 8(31)
  04d510c  ori 4, 29, 0
  04d5110  bl 0x5ea4dc
  04d5114  nop
  04d5118  lwz 3, 8(31)
  04d511c  li 4, 4
  04d5120  vspltisw 5, -1
  04d5124  lis 5, 77
  04d5128  vspltisw 8, -1
  04d512c  addi 5, 5, 19916
  04d5130  lvlx 2, 0, 3
  04d5134  lvlx 3, 4, 3
  04d5138  vcfux 2, 2, 0
  04d513c  vcfux 3, 3, 0
  04d5140  vslw 5, 5, 5
  04d5144  lvlx 4, 0, 5
  04d5148  vslw 8, 8, 8
  04d514c  vspltw 4, 4, 0
  04d5150  vspltisw 12, -1
  04d5154  vspltisw 9, -1
  04d5158  li 4, 20
  04d515c  vspltisw 0, -1
  04d5160  lis 6, 16256
  04d5164  vspltisw 13, -1
  04d5168  vslw 9, 9, 9
  04d516c  vrefp 6, 2
  04d5170  vrefp 7, 3
  04d5174  li 5, 2
  04d5178  vnmsubfp 10, 6, 2, 4
  04d517c  vnmsubfp 11, 7, 3, 4
  04d5180  vmaddfp 5, 6, 10, 5
  04d5184  vmaddfp 6, 7, 11, 8
  04d5188  vspltisw 10, -1
  04d518c  vslw 7, 12, 12
  04d5190  lvlx 8, 4, 31
  04d5194  li 4, 24
  04d5198  vslw 10, 10, 10
  04d519c  vnmsubfp 11, 5, 2, 4
  04d51a0  vnmsubfp 12, 6, 3, 4
  04d51a4  vmaddfp 5, 5, 11, 9
  04d51a8  vmaddfp 6, 6, 12, 7
  04d51ac  vslw 9, 0, 0
  04d51b0  vspltisw 12, -1
  04d51b4  vslw 7, 13, 13
  04d51b8  lvlx 11, 4, 31
  04d51bc  li 4, 40
  04d51c0  vnmsubfp 2, 5, 2, 4
  04d51c4  vnmsubfp 3, 6, 3, 4
  04d51c8  vslw 4, 12, 12
  04d51cc  vmaddfp 2, 5, 2, 10
  04d51d0  vmaddfp 3, 6, 3, 9
  04d51d4  vmaddfp 2, 2, 8, 7
  04d51d8  vmaddfp 3, 3, 11, 4
  04d51dc  vcmpgtfp 4, 3, 2
  04d51e0  vsel 2, 3, 2, 4
  04d51e4  vspltw 2, 2, 0
  04d51e8  stvewx 2, 4, 31
  04d51ec  stw 6, 28(31)
  04d51f0  stw 6, 32(31)
  04d51f4  stw 5, 16(31)
  04d51f8  bl 0x5f0a98
  04d51fc  nop
  04d5200  lwz 3, 8(31)
  04d5204  ld 0, 304(1)
  04d5208  mtlr 0
  04d520c  ld 14, 144(1)
  04d5210  ld 15, 152(1)
  04d5214  ld 16, 160(1)
  04d5218  ld 17, 168(1)
  04d521c  ld 18, 176(1)
  04d5220  ld 19, 184(1)
  04d5224  ld 20, 192(1)
  04d5228  ld 21, 200(1)
  04d522c  ld 22, 208(1)
  04d5230  ld 23, 216(1)
  04d5234  ld 24, 224(1)
  04d5238  ld 25, 232(1)
  04d523c  ld 26, 240(1)
  04d5240  ld 27, 248(1)
  04d5244  ld 28, 256(1)
  04d5248  ld 29, 264(1)
  04d524c  ld 30, 272(1)
  04d5250  ld 31, 280(1)
  04d5254  addi 1, 1, 288
  04d5258  blr

FUN_004d525c:   # 0x4d525c, 0xac bytes
  04d525c  stdu 1, -400(1)
  04d5260  mflr 0
  04d5264  std 0, 416(1)
  04d5268  std 31, 392(1)
  04d526c  ori 31, 3, 0
  04d5270  lis 3, 144
  04d5274  ori 6, 4, 0
  04d5278  addic 7, 3, -23552
  04d527c  lis 4, 8
  04d5280  std 30, 384(1)
  04d5284  lwz 3, 92(31)
  04d5288  addic 30, 1, 112
  04d528c  ori 4, 4, 16384
  04d5290  std 29, 376(1)
  04d5294  slwi 3, 3, 2
  04d5298  or 29, 5, 4
  04d529c  extsw 8, 3
  04d52a0  lis 4, 102
  04d52a4  ori 3, 30, 0
  04d52a8  addic 4, 4, -28948
  04d52ac  std 28, 368(1)
  04d52b0  lwzx 5, 7, 8
  04d52b4  bl 0x5cd2a8
  04d52b8  nop
  04d52bc  bl 0x4ef34c
  04d52c0  nop
  04d52c4  addic 28, 1, 240
  04d52c8  ori 4, 30, 0
  04d52cc  ori 5, 28, 0
  04d52d0  bl 0x4ef4d0
  04d52d4  nop
  04d52d8  ori 3, 31, 0
  04d52dc  ori 4, 28, 0
  04d52e0  ori 5, 29, 0
  04d52e4  bl 0x4d4dd0
  04d52e8  ld 0, 416(1)
  04d52ec  mtlr 0
  04d52f0  ld 28, 368(1)
  04d52f4  ld 29, 376(1)
  04d52f8  ld 30, 384(1)
  04d52fc  ld 31, 392(1)
  04d5300  addi 1, 1, 400
  04d5304  blr

FUN_004d5310:   # 0x4d5310, 0x130 bytes
  04d5310  stdu 1, -432(1)
  04d5314  mflr 0
  04d5318  std 0, 448(1)
  04d531c  std 29, 408(1)
  04d5320  cmpwi 5, 1
  04d5324  std 30, 416(1)
  04d5328  ori 29, 3, 0
  04d532c  stw 5, 368(1)
  04d5330  std 31, 424(1)
  04d5334  ori 30, 4, 0
  04d5338  std 28, 400(1)
  04d533c  ori 31, 6, 0
  04d5340  bf 2, 0x4d534c
  04d5344  li 3, 0
  04d5348  stw 3, 368(1)
  04d534c  li 3, 1
  04d5350  addic 4, 1, 368
  04d5354  bl 0x5ea398
  04d5358  nop
  04d535c  lis 3, 144
  04d5360  lwz 4, 92(29)
  04d5364  lis 5, 8
  04d5368  addic 6, 3, -23552
  04d536c  slwi 3, 4, 2
  04d5370  ori 5, 5, 16384
  04d5374  extsw 4, 3
  04d5378  or 31, 31, 5
  04d537c  addic 28, 1, 112
  04d5380  ori 3, 28, 0
  04d5384  lwzx 5, 6, 4
  04d5388  lis 4, 102
  04d538c  ori 6, 30, 0
  04d5390  addic 4, 4, -28948
  04d5394  bl 0x5cd2a8
  04d5398  nop
  04d539c  bl 0x4ef34c
  04d53a0  nop
  04d53a4  addic 30, 1, 240
  04d53a8  ori 4, 28, 0
  04d53ac  ori 5, 30, 0
  04d53b0  bl 0x4ef4d0
  04d53b4  nop
  04d53b8  ori 3, 29, 0
  04d53bc  ori 4, 30, 0
  04d53c0  ori 5, 31, 0
  04d53c4  bl 0x4d4dd0
  04d53c8  lis 3, 114
  04d53cc  lwz 3, -1208(3)
  04d53d0  extsw 3, 3
  04d53d4  std 3, 376(1)
  04d53d8  lis 3, 77
  04d53dc  addi 3, 3, 21256
  04d53e0  lfs 1, 0(3)
  04d53e4  lfs 2, 4(3)
  04d53e8  lfd 3, 376(1)
  04d53ec  fcfid 3, 3
  04d53f0  lwz 3, 8(29)
  04d53f4  lwz 4, 368(1)
  04d53f8  frsp 3, 3
  04d53fc  fmuls 1, 3, 1
  04d5400  fmuls 1, 1, 2
  04d5404  fctiwz 1, 1
  04d5408  stfd 1, 376(1)
  04d540c  lwz 5, 380(1)
  04d5410  extsw 5, 5
  04d5414  bl 0x5ed898
  04d5418  nop
  04d541c  lwz 3, 8(29)
  04d5420  ld 0, 448(1)
  04d5424  mtlr 0
  04d5428  ld 28, 400(1)
  04d542c  ld 29, 408(1)
  04d5430  ld 30, 416(1)
  04d5434  ld 31, 424(1)
  04d5438  addi 1, 1, 432
  04d543c  blr

FUN_004d5448:   # 0x4d5448, 0xd4 bytes
  04d5448  stdu 1, -160(1)
  04d544c  mflr 0
  04d5450  std 0, 176(1)
  04d5454  std 29, 136(1)
  04d5458  cmpwi 5, 1
  04d545c  std 30, 144(1)
  04d5460  ori 29, 6, 0
  04d5464  stw 5, 112(1)
  04d5468  std 31, 152(1)
  04d546c  ori 30, 3, 0
  04d5470  ori 31, 4, 0
  04d5474  bf 2, 0x4d5480
  04d5478  li 3, 0
  04d547c  stw 3, 112(1)
  04d5480  addic 4, 1, 112
  04d5484  li 3, 1
  04d5488  bl 0x5ea398
  04d548c  nop
  04d5490  lis 5, 8
  04d5494  ori 3, 30, 0
  04d5498  ori 5, 5, 16384
  04d549c  ori 4, 31, 0
  04d54a0  or 5, 29, 5
  04d54a4  bl 0x4d4dd0
  04d54a8  lis 3, 114
  04d54ac  lis 4, 77
  04d54b0  lwz 3, -1208(3)
  04d54b4  extsw 3, 3
  04d54b8  std 3, 120(1)
  04d54bc  addi 3, 4, 21568
  04d54c0  lfs 1, 0(3)
  04d54c4  lfs 2, 4(3)
  04d54c8  lwz 3, 8(30)
  04d54cc  lfd 3, 120(1)
  04d54d0  fcfid 3, 3
  04d54d4  lwz 4, 112(1)
  04d54d8  frsp 3, 3
  04d54dc  fmuls 1, 3, 1
  04d54e0  fmuls 1, 1, 2
  04d54e4  fctiwz 1, 1
  04d54e8  stfd 1, 120(1)
  04d54ec  lwz 5, 124(1)
  04d54f0  extsw 5, 5
  04d54f4  bl 0x5ed898
  04d54f8  nop
  04d54fc  lwz 3, 8(30)
  04d5500  ld 0, 176(1)
  04d5504  mtlr 0
  04d5508  ld 29, 136(1)
  04d550c  ld 30, 144(1)
  04d5510  ld 31, 152(1)
  04d5514  addi 1, 1, 160
  04d5518  blr

FUN_004d551c:   # 0x4d551c, 0x8 bytes
  04d551c  lwz 3, 8(3)
  04d5520  blr

FUN_004d5524:   # 0x4d5524, 0xc bytes
  04d5524  lwz 3, 16(3)
  04d5528  extsw 3, 3
  04d552c  blr

FUN_004d5530:   # 0x4d5530, 0x28 bytes
  04d5530  stdu 1, -112(1)
  04d5534  mflr 0
  04d5538  std 0, 128(1)
  04d553c  ori 3, 4, 0
  04d5540  bl 0x5ee638
  04d5544  nop
  04d5548  ld 0, 128(1)
  04d554c  mtlr 0
  04d5550  addi 1, 1, 112
  04d5554  blr

FUN_004d5558:   # 0x4d5558, 0x3c bytes
  04d5558  lis 3, 271
  04d555c  sldi 6, 4, 5
  04d5560  addic 3, 3, -7912
  04d5564  lis 5, 271
  04d5568  sldi 4, 4, 2
  04d556c  addic 5, 5, -7744
  04d5570  addc 4, 6, 4
  04d5574  lwz 3, 20(3)
  04d5578  addc 4, 4, 5
  04d557c  sldi 5, 3, 7
  04d5580  sldi 3, 3, 4
  04d5584  addc 3, 5, 3
  04d5588  addc 3, 4, 3
  04d558c  clrldi 3, 3, 32
  04d5590  blr

FUN_004d5594:   # 0x4d5594, 0x2ec bytes
  04d5594  stdu 1, -176(1)
  04d5598  mflr 0
  04d559c  std 0, 192(1)
  04d55a0  clrlwi 3, 4, 24
  04d55a4  li 4, 0
  04d55a8  li 5, 0
  04d55ac  subc 4, 4, 3
  04d55b0  li 6, 0
  04d55b4  cntlzw 4, 4
  04d55b8  subc 5, 5, 3
  04d55bc  subc 3, 6, 3
  04d55c0  sldi 4, 4, 58
  04d55c4  li 6, 512
  04d55c8  li 7, 492
  04d55cc  sradi 4, 4, 63
  04d55d0  subc 6, 6, 7
  04d55d4  cntlzw 5, 5
  04d55d8  and 4, 4, 6
  04d55dc  std 30, 160(1)
  04d55e0  lis 8, 271
  04d55e4  addc 30, 7, 4
  04d55e8  sldi 5, 5, 58
  04d55ec  li 4, 416
  04d55f0  std 29, 152(1)
  04d55f4  li 6, 400
  04d55f8  addic 29, 8, -7912
  04d55fc  sradi 5, 5, 63
  04d5600  subc 4, 4, 6
  04d5604  lis 7, 271
  04d5608  and 4, 5, 4
  04d560c  cntlzw 3, 3
  04d5610  std 28, 144(1)
  04d5614  lwz 5, 20(29)
  04d5618  std 27, 136(1)
  04d561c  addic 28, 7, -7744
  04d5620  addc 27, 6, 4
  04d5624  sldi 3, 3, 58
  04d5628  lis 4, 144
  04d562c  li 6, 0
  04d5630  li 7, 20
  04d5634  sldi 8, 5, 7
  04d5638  sradi 3, 3, 63
  04d563c  sldi 5, 5, 4
  04d5640  std 26, 128(1)
  04d5644  subc 6, 6, 7
  04d5648  addic 26, 4, -23532
  04d564c  and 3, 3, 6
  04d5650  std 25, 120(1)
  04d5654  addc 4, 8, 5
  04d5658  addc 25, 7, 3
  04d565c  addc 5, 28, 4
  04d5660  std 31, 168(1)
  04d5664  lwz 3, 40(26)
  04d5668  li 31, 0
  04d566c  clrldi 5, 5, 32
  04d5670  li 4, 0
  04d5674  bl 0x4d6bb0
  04d5678  nop
  04d567c  lwz 3, 20(29)
  04d5680  lwz 5, 40(26)
  04d5684  sldi 4, 3, 7
  04d5688  sldi 3, 3, 4
  04d568c  addc 3, 4, 3
  04d5690  li 4, 1
  04d5694  addc 6, 28, 3
  04d5698  ori 3, 5, 0
  04d569c  addic 5, 6, 36
  04d56a0  clrldi 5, 5, 32
  04d56a4  bl 0x4d6bb0
  04d56a8  nop
  04d56ac  lwz 3, 20(29)
  04d56b0  lwz 5, 40(26)
  04d56b4  sldi 4, 3, 7
  04d56b8  sldi 3, 3, 4
  04d56bc  addc 3, 4, 3
  04d56c0  li 4, 2
  04d56c4  addc 6, 28, 3
  04d56c8  ori 3, 5, 0
  04d56cc  addic 5, 6, 72
  04d56d0  clrldi 5, 5, 32
  04d56d4  bl 0x4d6bb0
  04d56d8  nop
  04d56dc  lwz 3, 40(26)
  04d56e0  bl 0x4d6948
  04d56e4  nop
  04d56e8  lwz 3, 40(26)
  04d56ec  lis 28, 4
  04d56f0  lwz 4, 8(3)
  04d56f4  addic 5, 4, 8
  04d56f8  stw 5, 8(3)
  04d56fc  lwz 3, 40(26)
  04d5700  lwz 5, 8(3)
  04d5704  addic 6, 5, 24
  04d5708  stw 6, 8(3)
  04d570c  lwz 3, 40(26)
  04d5710  lwz 6, 8(3)
  04d5714  addic 7, 6, 8
  04d5718  stw 7, 8(3)
  04d571c  lwz 3, 40(26)
  04d5720  lwz 7, 8(3)
  04d5724  addic 8, 7, 8
  04d5728  stw 8, 8(3)
  04d572c  lwz 3, 40(26)
  04d5730  lis 8, 4
  04d5734  ori 8, 8, 6472
  04d5738  lwz 9, 8(3)
  04d573c  addic 10, 9, 8
  04d5740  stw 10, 8(3)
  04d5744  lwz 3, 40(26)
  04d5748  li 10, -1
  04d574c  lwz 11, 8(3)
  04d5750  stw 8, 0(4)
  04d5754  addic 12, 11, 8
  04d5758  lis 8, 16396
  04d575c  stw 12, 8(3)
  04d5760  lwz 3, 40(26)
  04d5764  stw 10, 4(4)
  04d5768  ori 4, 8, 5908
  04d576c  lis 8, 4
  04d5770  li 10, 8
  04d5774  lwz 12, 8(3)
  04d5778  stw 4, 0(5)
  04d577c  ori 8, 8, 6152
  04d5780  addic 29, 12, 8
  04d5784  stw 31, 4(5)
  04d5788  lis 4, 4
  04d578c  ori 4, 4, 6400
  04d5790  stw 29, 8(3)
  04d5794  lwz 3, 40(26)
  04d5798  stw 31, 8(5)
  04d579c  ori 29, 28, 6404
  04d57a0  stw 31, 12(5)
  04d57a4  lis 28, 1
  04d57a8  stw 8, 16(5)
  04d57ac  stw 10, 20(5)
  04d57b0  lwz 5, 8(3)
  04d57b4  stw 29, 0(6)
  04d57b8  addic 10, 5, 8
  04d57bc  stw 31, 4(6)
  04d57c0  stw 4, 0(7)
  04d57c4  extsh 6, 25
  04d57c8  stw 10, 8(3)
  04d57cc  lwz 10, 40(26)
  04d57d0  slwi 3, 27, 16
  04d57d4  stw 6, 4(7)
  04d57d8  stw 29, 0(9)
  04d57dc  or 27, 3, 6
  04d57e0  lis 6, 1
  04d57e4  lwz 7, 8(10)
  04d57e8  stw 28, 4(9)
  04d57ec  ori 6, 6, 1
  04d57f0  addic 9, 7, 8
  04d57f4  stw 4, 0(11)
  04d57f8  stw 27, 4(11)
  04d57fc  extsh 11, 30
  04d5800  stw 29, 0(12)
  04d5804  li 30, 1
  04d5808  stw 9, 8(10)
  04d580c  or 3, 3, 11
  04d5810  lwz 9, 40(26)
  04d5814  stw 6, 4(12)
  04d5818  stw 4, 0(5)
  04d581c  stw 3, 4(5)
  04d5820  lwz 3, 8(9)
  04d5824  stw 29, 0(7)
  04d5828  addic 5, 3, 8
  04d582c  stw 30, 4(7)
  04d5830  stw 5, 8(9)
  04d5834  lwz 5, 40(26)
  04d5838  stw 4, 0(3)
  04d583c  stw 11, 4(3)
  04d5840  lwz 3, 8(5)
  04d5844  addic 4, 3, 8
  04d5848  stw 8, 0(3)
  04d584c  stw 31, 4(3)
  04d5850  stw 4, 8(5)
  04d5854  ld 0, 192(1)
  04d5858  mtlr 0
  04d585c  ld 25, 120(1)
  04d5860  ld 26, 128(1)
  04d5864  ld 27, 136(1)
  04d5868  ld 28, 144(1)
  04d586c  ld 29, 152(1)
  04d5870  ld 30, 160(1)
  04d5874  ld 31, 168(1)
  04d5878  addi 1, 1, 176
  04d587c  blr

FUN_004d5880:   # 0x4d5880, 0xb4 bytes
  04d5880  stdu 1, -144(1)
  04d5884  mflr 0
  04d5888  std 0, 160(1)
  04d588c  std 29, 120(1)
  04d5890  lis 29, 144
  04d5894  std 31, 136(1)
  04d5898  lis 4, 271
  04d589c  ori 31, 3, 0
  04d58a0  addic 4, 4, -7912
  04d58a4  lwz 29, -23196(29)
  04d58a8  lwz 3, 60(4)
  04d58ac  lwz 4, 12(29)
  04d58b0  std 30, 128(1)
  04d58b4  cmpwi 3, 0
  04d58b8  cntlzw 30, 4
  04d58bc  rlwinm 30, 30, 27, 31, 31
  04d58c0  bt 2, 0x4d58d4
  04d58c4  ori 3, 31, 0
  04d58c8  ori 4, 30, 0
  04d58cc  bl 0x4d5594
  04d58d0  b 0x4d58fc
  04d58d4  lis 3, 144
  04d58d8  li 5, 20
  04d58dc  addic 4, 3, -23532
  04d58e0  ori 3, 29, 0
  04d58e4  lwz 4, 40(4)
  04d58e8  bl 0x4d82b8
  04d58ec  nop
  04d58f0  ori 3, 31, 0
  04d58f4  ori 4, 30, 0
  04d58f8  bl 0x4d5594
  04d58fc  lis 3, 144
  04d5900  li 5, 12
  04d5904  addic 4, 3, -23532
  04d5908  ori 3, 29, 0
  04d590c  lwz 4, 40(4)
  04d5910  bl 0x4d82b8
  04d5914  nop
  04d5918  ld 0, 160(1)
  04d591c  mtlr 0
  04d5920  ld 29, 120(1)
  04d5924  ld 30, 128(1)
  04d5928  ld 31, 136(1)
  04d592c  addi 1, 1, 144
  04d5930  blr

FUN_004d5934:   # 0x4d5934, 0xb4 bytes
  04d5934  stdu 1, -144(1)
  04d5938  mflr 0
  04d593c  std 0, 160(1)
  04d5940  std 30, 128(1)
  04d5944  lis 30, 144
  04d5948  std 31, 136(1)
  04d594c  lis 4, 271
  04d5950  ori 31, 3, 0
  04d5954  addic 4, 4, -7912
  04d5958  lwz 30, -23196(30)
  04d595c  lwz 3, 60(4)
  04d5960  lwz 4, 12(30)
  04d5964  std 29, 120(1)
  04d5968  cmpwi 3, 0
  04d596c  cntlzw 29, 4
  04d5970  rlwinm 29, 29, 27, 31, 31
  04d5974  bt 2, 0x4d5988
  04d5978  ori 3, 31, 0
  04d597c  ori 4, 29, 0
  04d5980  bl 0x4d5594
  04d5984  b 0x4d59b0
  04d5988  lis 3, 144
  04d598c  li 5, 20
  04d5990  addic 4, 3, -23532
  04d5994  ori 3, 30, 0
  04d5998  lwz 4, 40(4)
  04d599c  bl 0x4d82b8
  04d59a0  nop
  04d59a4  ori 3, 31, 0
  04d59a8  ori 4, 29, 0
  04d59ac  bl 0x4d5594
  04d59b0  lis 3, 144
  04d59b4  li 5, 12
  04d59b8  addic 4, 3, -23532
  04d59bc  ori 3, 30, 0
  04d59c0  lwz 4, 40(4)
  04d59c4  bl 0x4d82b8
  04d59c8  nop
  04d59cc  ld 0, 160(1)
  04d59d0  mtlr 0
  04d59d4  ld 29, 120(1)
  04d59d8  ld 30, 128(1)
  04d59dc  ld 31, 136(1)
  04d59e0  addi 1, 1, 144
  04d59e4  blr

FUN_004d59e8:   # 0x4d59e8, 0x324 bytes
  04d59e8  stdu 1, -144(1)
  04d59ec  mflr 0
  04d59f0  std 0, 160(1)
  04d59f4  std 31, 136(1)
  04d59f8  std 30, 128(1)
  04d59fc  std 29, 120(1)
  04d5a00  std 28, 112(1)
  04d5a04  ori 31, 3, 0
  04d5a08  bl 0x64f504
  04d5a0c  ld 2, 40(1)
  04d5a10  lis 3, 144
  04d5a14  lis 4, 4
  04d5a18  lis 5, -256
  04d5a1c  ori 4, 4, 7568
  04d5a20  lis 7, 4
  04d5a24  lwz 6, -23532(3)
  04d5a28  ori 7, 7, 7564
  04d5a2c  li 29, 0
  04d5a30  lwz 8, 8(6)
  04d5a34  ori 30, 29, 0
  04d5a38  stw 4, 0(8)
  04d5a3c  lwz 4, 8(6)
  04d5a40  lis 8, 4
  04d5a44  stw 5, 4(4)
  04d5a48  lwz 4, 8(6)
  04d5a4c  li 5, -256
  04d5a50  addic 4, 4, 8
  04d5a54  stw 4, 8(6)
  04d5a58  lwz 4, -23532(3)
  04d5a5c  lwz 6, 8(4)
  04d5a60  stw 7, 0(6)
  04d5a64  lwz 6, 8(4)
  04d5a68  ori 7, 8, 7572
  04d5a6c  stw 5, 4(6)
  04d5a70  lwz 5, 8(4)
  04d5a74  lis 6, 4
  04d5a78  addic 5, 5, 8
  04d5a7c  stw 5, 8(4)
  04d5a80  lwz 3, -23532(3)
  04d5a84  li 4, 243
  04d5a88  lwz 5, 8(3)
  04d5a8c  stw 7, 0(5)
  04d5a90  lwz 5, 8(3)
  04d5a94  stw 4, 4(5)
  04d5a98  lwz 4, 8(3)
  04d5a9c  addic 5, 4, 8
  04d5aa0  stw 5, 8(3)
  04d5aa4  ori 5, 6, 256
  04d5aa8  stw 5, 8(4)
  04d5aac  lwz 4, 8(3)
  04d5ab0  stw 29, 4(4)
  04d5ab4  lwz 5, 8(3)
  04d5ab8  lwz 4, 16(31)
  04d5abc  addic 5, 5, 8
  04d5ac0  cmpwi 4, 1
  04d5ac4  stw 5, 8(3)
  04d5ac8  lwz 3, 8(31)
  04d5acc  bt 2, 0x4d5c5c
  04d5ad0  cmpwi 4, 0
  04d5ad4  ori 30, 29, 0
  04d5ad8  bt 2, 0x4d5c5c
  04d5adc  li 30, 1
  04d5ae0  bl 0x5edea0
  04d5ae4  nop
  04d5ae8  ori 4, 3, 0
  04d5aec  lwz 3, 8(31)
  04d5af0  cmpwi 4, 0
  04d5af4  bf 2, 0x4d5c5c
  04d5af8  li 4, 3
  04d5afc  stw 4, 16(31)
  04d5b00  bl 0x5f0a98
  04d5b04  nop
  04d5b08  lwz 3, 8(31)
  04d5b0c  bl 0x5ef740
  04d5b10  nop
  04d5b14  cmpwi 3, 0
  04d5b18  bt 2, 0x4d5b38
  04d5b1c  lwz 3, 8(31)
  04d5b20  bl 0x5efeb0
  04d5b24  nop
  04d5b28  lwz 3, 8(31)
  04d5b2c  bl 0x5f0a98
  04d5b30  nop
  04d5b34  b 0x4d5b08
  04d5b38  lwz 3, 8(31)
  04d5b3c  bl 0x5efeb0
  04d5b40  nop
  04d5b44  lwz 3, 8(31)
  04d5b48  lwz 4, 12(3)
  04d5b4c  lwz 5, 8(3)
  04d5b50  cmpw 4, 5
  04d5b54  bf 2, 0x4d5c5c
  04d5b58  cmpwi 3, 0
  04d5b5c  bt 2, 0x4d5c54
  04d5b60  stw 30, 16(31)
  04d5b64  bl 0x5ee638
  04d5b68  nop
  04d5b6c  lis 3, 271
  04d5b70  stw 29, 8(31)
  04d5b74  lwz 4, -7912(3)
  04d5b78  cmpwi 4, 0
  04d5b7c  bf 1, 0x4d5c18
  04d5b80  addic 7, 3, -7912
  04d5b84  ori 12, 29, 0
  04d5b88  addic 8, 7, 40
  04d5b8c  addic 6, 7, 52
  04d5b90  addic 11, 7, 24
  04d5b94  addic 5, 7, 60
  04d5b98  addic 10, 7, 28
  04d5b9c  addic 4, 7, 64
  04d5ba0  addic 9, 7, 36
  04d5ba4  addic 7, 7, 48
  04d5ba8  lwz 28, 0(11)
  04d5bac  cmpwi 28, 0
  04d5bb0  bt 2, 0x4d5bb8
  04d5bb4  stw 29, 0(10)
  04d5bb8  lwz 28, 0(9)
  04d5bbc  cmpwi 28, 0
  04d5bc0  bt 2, 0x4d5bc8
  04d5bc4  stw 29, 0(8)
  04d5bc8  lwz 28, 0(7)
  04d5bcc  cmpwi 28, 0
  04d5bd0  bt 2, 0x4d5bd8
  04d5bd4  stw 29, 0(6)
  04d5bd8  lwz 28, 0(5)
  04d5bdc  cmpwi 28, 0
  04d5be0  bt 2, 0x4d5be8
  04d5be4  stw 29, 0(4)
  04d5be8  addic 12, 12, 1
  04d5bec  lwz 28, -7912(3)
  04d5bf0  addic 6, 6, 48
  04d5bf4  cmpw 12, 28
  04d5bf8  addic 11, 11, 48
  04d5bfc  addic 5, 5, 48
  04d5c00  addic 10, 10, 48
  04d5c04  addic 9, 9, 48
  04d5c08  addic 8, 8, 48
  04d5c0c  addic 7, 7, 48
  04d5c10  addic 4, 4, 48
  04d5c14  bt 0, 0x4d5ba8
  04d5c18  lwz 3, 0(31)
  04d5c1c  lwz 4, 76(31)
  04d5c20  bl 0x4fe61c
  04d5c24  nop
  04d5c28  lis 3, 102
  04d5c2c  lwz 5, 88(31)
  04d5c30  lis 4, 102
  04d5c34  addic 3, 3, -29064
  04d5c38  addic 4, 4, -29048
  04d5c3c  bl 0x4ffc9c
  04d5c40  nop
  04d5c44  lwz 3, 4(31)
  04d5c48  lwz 4, 84(31)
  04d5c4c  bl 0x4fe61c
  04d5c50  nop
  04d5c54  ori 29, 30, 0
  04d5c58  b 0x4d5ce8
  04d5c5c  cmpwi 1, 30, 0
  04d5c60  cmpwi 3, 0
  04d5c64  cror 2, 2, 6
  04d5c68  bt 2, 0x4d5ce8
  04d5c6c  lis 30, 144
  04d5c70  lis 3, 271
  04d5c74  addic 3, 3, -7912
  04d5c78  lwz 30, -23196(30)
  04d5c7c  lwz 3, 60(3)
  04d5c80  lwz 4, 12(30)
  04d5c84  cmpwi 3, 0
  04d5c88  cntlzw 28, 4
  04d5c8c  rlwinm 28, 28, 27, 31, 31
  04d5c90  bt 2, 0x4d5ca4
  04d5c94  ori 3, 31, 0
  04d5c98  ori 4, 28, 0
  04d5c9c  bl 0x4d5594
  04d5ca0  b 0x4d5ccc
  04d5ca4  lis 3, 144
  04d5ca8  li 5, 20
  04d5cac  addic 4, 3, -23532
  04d5cb0  ori 3, 30, 0
  04d5cb4  lwz 4, 40(4)
  04d5cb8  bl 0x4d82b8
  04d5cbc  nop
  04d5cc0  ori 3, 31, 0
  04d5cc4  ori 4, 28, 0
  04d5cc8  bl 0x4d5594
  04d5ccc  lis 3, 144
  04d5cd0  li 5, 12
  04d5cd4  addic 4, 3, -23532
  04d5cd8  ori 3, 30, 0
  04d5cdc  lwz 4, 40(4)
  04d5ce0  bl 0x4d82b8
  04d5ce4  nop
  04d5ce8  ori 3, 29, 0
  04d5cec  ld 0, 160(1)
  04d5cf0  mtlr 0
  04d5cf4  ld 28, 112(1)
  04d5cf8  ld 29, 120(1)
  04d5cfc  ld 30, 128(1)
  04d5d00  ld 31, 136(1)
  04d5d04  addi 1, 1, 144
  04d5d08  blr

FUN_004d5d0c:   # 0x4d5d0c, 0x50 bytes
  04d5d0c  stdu 1, -128(1)
  04d5d10  mflr 0
  04d5d14  std 0, 144(1)
  04d5d18  std 31, 120(1)
  04d5d1c  ori 31, 3, 0
  04d5d20  lwz 3, 92(3)
  04d5d24  cmpwi 3, -1
  04d5d28  bt 2, 0x4d5d48
  04d5d2c  lwz 3, 8(31)
  04d5d30  bl 0x5ee638
  04d5d34  nop
  04d5d38  li 3, 0
  04d5d3c  stw 3, 16(31)
  04d5d40  bl 0x5ef8f0
  04d5d44  nop
  04d5d48  ld 0, 144(1)
  04d5d4c  mtlr 0
  04d5d50  ld 31, 120(1)
  04d5d54  addi 1, 1, 128
  04d5d58  blr

FUN_004d5d5c:   # 0x4d5d5c, 0x24 bytes
  04d5d5c  lis 4, 17408
  04d5d60  lis 5, 17360
  04d5d64  li 6, 0
  04d5d68  li 7, -1
  04d5d6c  stw 4, 20(3)
  04d5d70  stw 5, 24(3)
  04d5d74  stw 6, 16(3)
  04d5d78  stw 7, 92(3)
  04d5d7c  blr

FUN_004d5d80:   # 0x4d5d80, 0x24 bytes
  04d5d80  lis 4, 17408
  04d5d84  lis 5, 17360
  04d5d88  li 6, 0
  04d5d8c  li 7, -1
  04d5d90  stw 4, 20(3)
  04d5d94  stw 5, 24(3)
  04d5d98  stw 6, 16(3)
  04d5d9c  stw 7, 92(3)
  04d5da0  blr

FUN_004d5da4:   # 0x4d5da4, 0x4 bytes
  04d5da4  blr

FUN_004d5da8:   # 0x4d5da8, 0x4 bytes
  04d5da8  blr

FUN_004d5dac:   # 0x4d5dac, 0x3c bytes
  04d5dac  lis 3, 144
  04d5db0  rlwinm 4, 4, 5, 19, 26
  04d5db4  addic 3, 3, -23532
  04d5db8  addic 4, 4, 6668
  04d5dbc  li 5, 0
  04d5dc0  oris 4, 4, 4
  04d5dc4  lwz 3, 40(3)
  04d5dc8  lwz 6, 8(3)
  04d5dcc  stw 4, 0(6)
  04d5dd0  lwz 4, 8(3)
  04d5dd4  stw 5, 4(4)
  04d5dd8  lwz 4, 8(3)
  04d5ddc  addic 4, 4, 8
  04d5de0  stw 4, 8(3)
  04d5de4  blr

FUN_004d5df0:   # 0x4d5df0, 0x58 bytes
  04d5df0  stdu 1, -112(1)
  04d5df4  mflr 0
  04d5df8  std 0, 128(1)
  04d5dfc  lis 3, 271
  04d5e00  lwz 3, -2784(3)
  04d5e04  lwz 4, 0(3)
  04d5e08  lwz 3, 4(3)
  04d5e0c  cmpw 4, 3
  04d5e10  bt 2, 0x4d5e38
  04d5e14  li 11, 141
  04d5e18  li 3, 30
  04d5e1c  sc
  04d5e20  lis 3, 271
  04d5e24  lwz 3, -2784(3)
  04d5e28  lwz 4, 0(3)
  04d5e2c  lwz 3, 4(3)
  04d5e30  cmpw 4, 3
  04d5e34  bf 2, 0x4d5e14
  04d5e38  ld 0, 128(1)
  04d5e3c  mtlr 0
  04d5e40  addi 1, 1, 112
  04d5e44  blr

FUN_004d5e48:   # 0x4d5e48, 0x164 bytes
  04d5e48  stdu 1, -144(1)
  04d5e4c  mflr 0
  04d5e50  std 0, 160(1)
  04d5e54  std 29, 120(1)
  04d5e58  lis 4, 271
  04d5e5c  std 31, 136(1)
  04d5e60  lis 29, 0
  04d5e64  ori 31, 3, 0
  04d5e68  ori 29, 29, 40000
  04d5e6c  lwz 4, -2784(4)
  04d5e70  lwz 4, 8(4)
  04d5e74  std 30, 128(1)
  04d5e78  cmpw 4, 3
  04d5e7c  bt 2, 0x4d5ec0
  04d5e80  lis 30, 102
  04d5e84  addic 30, 30, -28864
  04d5e88  li 11, 141
  04d5e8c  li 3, 50
  04d5e90  sc
  04d5e94  addic 29, 29, -1
  04d5e98  cmpwi 29, 0
  04d5e9c  bf 2, 0x4d5eac
  04d5ea0  ori 3, 30, 0
  04d5ea4  bl 0x5cd098
  04d5ea8  nop
  04d5eac  lis 3, 271
  04d5eb0  lwz 3, -2784(3)
  04d5eb4  lwz 3, 8(3)
  04d5eb8  cmpw 3, 31
  04d5ebc  bf 2, 0x4d5e88
  04d5ec0  bl 0x650684
  04d5ec4  ld 2, 40(1)
  04d5ec8  lis 4, 144
  04d5ecc  lis 5, 271
  04d5ed0  li 8, 50
  04d5ed4  li 6, 22000
  04d5ed8  lwz 7, -23196(4)
  04d5edc  ld 5, -2816(5)
  04d5ee0  ori 4, 3, 0
  04d5ee4  li 3, 18000
  04d5ee8  subc 5, 4, 5
  04d5eec  subc 6, 6, 3
  04d5ef0  lwz 7, 24(7)
  04d5ef4  subc 7, 8, 7
  04d5ef8  cntlzw 7, 7
  04d5efc  sldi 7, 7, 58
  04d5f00  sradi 7, 7, 63
  04d5f04  and 6, 7, 6
  04d5f08  addc 3, 3, 6
  04d5f0c  cmpd 5, 3
  04d5f10  bf 1, 0x4d5f44
  04d5f14  lis 3, 271
  04d5f18  li 5, 20
  04d5f1c  li 6, 20
  04d5f20  lwz 3, -2820(3)
  04d5f24  addic 3, 3, 5
  04d5f28  extsw 7, 3
  04d5f2c  subc 6, 6, 3
  04d5f30  subc 5, 5, 7
  04d5f34  sradi 5, 5, 63
  04d5f38  and 5, 5, 6
  04d5f3c  addc 3, 3, 5
  04d5f40  b 0x4d5f70
  04d5f44  lis 3, 271
  04d5f48  li 5, 0
  04d5f4c  li 6, 0
  04d5f50  lwz 3, -2820(3)
  04d5f54  addic 3, 3, -1
  04d5f58  extsw 7, 3
  04d5f5c  subc 6, 6, 3
  04d5f60  subc 5, 7, 5
  04d5f64  sradi 5, 5, 63
  04d5f68  and 5, 5, 6
  04d5f6c  addc 3, 3, 5
  04d5f70  lis 5, 271
  04d5f74  cntlzw 6, 3
  04d5f78  lis 7, 144
  04d5f7c  rlwinm 6, 6, 27, 31, 31
  04d5f80  lis 8, 271
  04d5f84  stw 3, -2820(5)
  04d5f88  stb 6, -23220(7)
  04d5f8c  std 4, -2816(8)
  04d5f90  ld 0, 160(1)
  04d5f94  mtlr 0
  04d5f98  ld 29, 120(1)
  04d5f9c  ld 30, 128(1)
  04d5fa0  ld 31, 136(1)
  04d5fa4  addi 1, 1, 144
  04d5fa8  blr

FUN_004d5fac:   # 0x4d5fac, 0x38 bytes
  04d5fac  lwz 5, 0(3)
  04d5fb0  lwz 6, 0(4)
  04d5fb4  cmpw 5, 6
  04d5fb8  bt 2, 0x4d5fc4
  04d5fbc  li 3, 0
  04d5fc0  b 0x4d5fe0
  04d5fc4  lwz 3, 8(3)
  04d5fc8  lwz 4, 8(4)
  04d5fcc  cmpw 3, 4
  04d5fd0  bt 2, 0x4d5fdc
  04d5fd4  li 3, 0
  04d5fd8  b 0x4d5fe0
  04d5fdc  li 3, 1
  04d5fe0  blr

idol_draw::DrawDepth:   # 0x4d5fe4, 0x5e4 bytes
  04d5fe4  stdu 1, -64(1)
  04d5fe8  lis 5, 271
  04d5fec  std 4, 224(3)
  04d5ff0  clrlwi 10, 4, 24
  04d5ff4  addic 5, 5, -7456
  04d5ff8  lis 9, 4
  04d5ffc  lis 8, 8
  04d6000  lis 7, 4
  04d6004  cmpwi 10, 97
  04d6008  std 4, 56(5)
  04d600c  ori 9, 9, 800
  04d6010  li 6, 1
  04d6014  lwz 5, 8(3)
  04d6018  ori 7, 7, 772
  04d601c  ori 8, 8, 788
  04d6020  cmpwi 1, 10, 72
  04d6024  cmpwi 6, 10, 68
  04d6028  std 31, 56(1)
  04d602c  cmpwi 7, 10, 66
  04d6030  bt 1, 0x4d604c
  04d6034  bt 6, 0x4d621c
  04d6038  bt 26, 0x4d60e0
  04d603c  bt 30, 0x4d641c
  04d6040  cmpwi 10, 0
  04d6044  bt 2, 0x4d6078
  04d6048  b 0x4d65bc
  04d604c  cmpwi 10, 161
  04d6050  bt 2, 0x4d6488
  04d6054  cmpwi 10, 126
  04d6058  bt 2, 0x4d6554
  04d605c  cmpwi 10, 104
  04d6060  bt 2, 0x4d6288
  04d6064  cmpwi 10, 100
  04d6068  bt 2, 0x4d614c
  04d606c  cmpwi 10, 98
  04d6070  bt 2, 0x4d6354
  04d6074  b 0x4d65bc
  04d6078  lis 4, -32762
  04d607c  stw 9, 0(5)
  04d6080  lwz 5, 8(3)
  04d6084  ori 4, 4, 32774
  04d6088  lis 9, 1
  04d608c  stw 4, 4(5)
  04d6090  lwz 4, 8(3)
  04d6094  addic 5, 4, 8
  04d6098  stw 5, 8(3)
  04d609c  stw 8, 8(4)
  04d60a0  li 5, 0
  04d60a4  lwz 8, 8(3)
  04d60a8  ori 4, 9, 1
  04d60ac  stw 4, 4(8)
  04d60b0  lwz 4, 8(3)
  04d60b4  stw 5, 8(4)
  04d60b8  lwz 4, 8(3)
  04d60bc  addic 5, 4, 12
  04d60c0  stw 5, 8(3)
  04d60c4  stw 7, 12(4)
  04d60c8  lwz 4, 8(3)
  04d60cc  stw 6, 4(4)
  04d60d0  lwz 4, 8(3)
  04d60d4  addic 4, 4, 8
  04d60d8  stw 4, 8(3)
  04d60dc  b 0x4d65bc
  04d60e0  lis 4, -32762
  04d60e4  stw 9, 0(5)
  04d60e8  lwz 5, 8(3)
  04d60ec  ori 4, 4, 32774
  04d60f0  lis 9, 770
  04d60f4  stw 4, 4(5)
  04d60f8  lwz 4, 8(3)
  04d60fc  addic 5, 4, 8
  04d6100  stw 5, 8(3)
  04d6104  stw 8, 8(4)
  04d6108  lis 5, 771
  04d610c  lwz 8, 8(3)
  04d6110  ori 4, 9, 770
  04d6114  ori 5, 5, 771
  04d6118  stw 4, 4(8)
  04d611c  lwz 4, 8(3)
  04d6120  stw 5, 8(4)
  04d6124  lwz 4, 8(3)
  04d6128  addic 5, 4, 12
  04d612c  stw 5, 8(3)
  04d6130  stw 7, 12(4)
  04d6134  lwz 4, 8(3)
  04d6138  stw 6, 4(4)
  04d613c  lwz 4, 8(3)
  04d6140  addic 4, 4, 8
  04d6144  stw 4, 8(3)
  04d6148  b 0x4d65bc
  04d614c  rldicl 4, 4, 32, 56
  04d6150  li 6, 255
  04d6154  addic 4, 4, 1
  04d6158  li 10, 255
  04d615c  clrldi 11, 4, 32
  04d6160  subc 10, 10, 4
  04d6164  subc 6, 6, 11
  04d6168  lis 11, 4
  04d616c  sradi 6, 6, 63
  04d6170  ori 11, 11, 796
  04d6174  and 6, 6, 10
  04d6178  addc 4, 4, 6
  04d617c  stw 11, 0(5)
  04d6180  slwi 6, 4, 8
  04d6184  slwi 5, 4, 16
  04d6188  slwi 10, 4, 24
  04d618c  or 4, 4, 6
  04d6190  lwz 6, 8(3)
  04d6194  or 4, 4, 5
  04d6198  or 4, 4, 10
  04d619c  stw 4, 4(6)
  04d61a0  lwz 4, 8(3)
  04d61a4  lis 6, -32762
  04d61a8  addic 5, 4, 8
  04d61ac  stw 5, 8(3)
  04d61b0  stw 9, 8(4)
  04d61b4  lwz 10, 8(3)
  04d61b8  ori 5, 6, 32774
  04d61bc  lis 4, -32765
  04d61c0  lis 6, -32764
  04d61c4  ori 4, 4, 32771
  04d61c8  ori 6, 6, 32772
  04d61cc  stw 5, 4(10)
  04d61d0  li 9, 0
  04d61d4  lwz 5, 8(3)
  04d61d8  addic 10, 5, 8
  04d61dc  stw 10, 8(3)
  04d61e0  stw 8, 8(5)
  04d61e4  lwz 5, 8(3)
  04d61e8  stw 4, 4(5)
  04d61ec  lwz 4, 8(3)
  04d61f0  stw 6, 8(4)
  04d61f4  lwz 4, 8(3)
  04d61f8  addic 5, 4, 12
  04d61fc  stw 5, 8(3)
  04d6200  stw 7, 12(4)
  04d6204  lwz 4, 8(3)
  04d6208  stw 9, 4(4)
  04d620c  lwz 4, 8(3)
  04d6210  addic 4, 4, 8
  04d6214  stw 4, 8(3)
  04d6218  b 0x4d65bc
  04d621c  lis 4, -32762
  04d6220  stw 9, 0(5)
  04d6224  lwz 5, 8(3)
  04d6228  lis 9, 770
  04d622c  ori 4, 4, 32774
  04d6230  stw 4, 4(5)
  04d6234  lwz 4, 8(3)
  04d6238  addic 5, 4, 8
  04d623c  stw 5, 8(3)
  04d6240  stw 8, 8(4)
  04d6244  lwz 8, 8(3)
  04d6248  ori 5, 9, 770
  04d624c  lis 4, 1
  04d6250  ori 4, 4, 1
  04d6254  stw 5, 4(8)
  04d6258  lwz 5, 8(3)
  04d625c  stw 4, 8(5)
  04d6260  lwz 4, 8(3)
  04d6264  addic 5, 4, 12
  04d6268  stw 5, 8(3)
  04d626c  stw 7, 12(4)
  04d6270  lwz 4, 8(3)
  04d6274  stw 6, 4(4)
  04d6278  lwz 4, 8(3)
  04d627c  addic 4, 4, 8
  04d6280  stw 4, 8(3)
  04d6284  b 0x4d65bc
  04d6288  rldicl 4, 4, 32, 56
  04d628c  li 10, 255
  04d6290  addic 4, 4, 1
  04d6294  li 12, 255
  04d6298  clrldi 11, 4, 32
  04d629c  subc 10, 10, 11
  04d62a0  subc 11, 12, 4
  04d62a4  sradi 10, 10, 63
  04d62a8  and 10, 10, 11
  04d62ac  lis 11, 4
  04d62b0  addc 4, 4, 10
  04d62b4  ori 10, 11, 796
  04d62b8  slwi 12, 4, 8
  04d62bc  slwi 11, 4, 16
  04d62c0  slwi 31, 4, 24
  04d62c4  or 4, 4, 12
  04d62c8  stw 10, 0(5)
  04d62cc  lwz 5, 8(3)
  04d62d0  or 4, 4, 11
  04d62d4  or 4, 4, 31
  04d62d8  stw 4, 4(5)
  04d62dc  lwz 4, 8(3)
  04d62e0  addic 5, 4, 8
  04d62e4  stw 5, 8(3)
  04d62e8  lis 5, -32762
  04d62ec  stw 9, 8(4)
  04d62f0  lwz 10, 8(3)
  04d62f4  ori 4, 5, 32774
  04d62f8  lis 5, -32765
  04d62fc  lis 9, 1
  04d6300  ori 5, 5, 32771
  04d6304  stw 4, 4(10)
  04d6308  ori 9, 9, 1
  04d630c  lwz 4, 8(3)
  04d6310  addic 10, 4, 8
  04d6314  stw 10, 8(3)
  04d6318  stw 8, 8(4)
  04d631c  lwz 4, 8(3)
  04d6320  stw 5, 4(4)
  04d6324  lwz 4, 8(3)
  04d6328  stw 9, 8(4)
  04d632c  lwz 4, 8(3)
  04d6330  addic 5, 4, 12
  04d6334  stw 5, 8(3)
  04d6338  stw 7, 12(4)
  04d633c  lwz 4, 8(3)
  04d6340  stw 6, 4(4)
  04d6344  lwz 4, 8(3)
  04d6348  addic 4, 4, 8
  04d634c  stw 4, 8(3)
  04d6350  b 0x4d65bc
  04d6354  rldicl 4, 4, 32, 56
  04d6358  li 10, 255
  04d635c  addic 4, 4, 1
  04d6360  li 11, 255
  04d6364  clrldi 12, 4, 32
  04d6368  subc 11, 11, 4
  04d636c  subc 10, 10, 12
  04d6370  lis 12, 4
  04d6374  sradi 10, 10, 63
  04d6378  ori 12, 12, 796
  04d637c  and 10, 10, 11
  04d6380  addc 4, 4, 10
  04d6384  stw 12, 0(5)
  04d6388  slwi 10, 4, 8
  04d638c  slwi 5, 4, 16
  04d6390  slwi 11, 4, 24
  04d6394  or 4, 4, 10
  04d6398  lwz 10, 8(3)
  04d639c  or 4, 4, 5
  04d63a0  or 4, 4, 11
  04d63a4  stw 4, 4(10)
  04d63a8  lwz 4, 8(3)
  04d63ac  lis 10, -32762
  04d63b0  addic 5, 4, 8
  04d63b4  stw 5, 8(3)
  04d63b8  ori 5, 10, 32779
  04d63bc  stw 9, 8(4)
  04d63c0  lwz 10, 8(3)
  04d63c4  lis 4, -32765
  04d63c8  lis 9, 1
  04d63cc  ori 9, 9, 1
  04d63d0  stw 5, 4(10)
  04d63d4  lwz 5, 8(3)
  04d63d8  addic 10, 5, 8
  04d63dc  stw 10, 8(3)
  04d63e0  stw 8, 8(5)
  04d63e4  lwz 5, 8(3)
  04d63e8  stw 4, 4(5)
  04d63ec  lwz 4, 8(3)
  04d63f0  stw 9, 8(4)
  04d63f4  lwz 4, 8(3)
  04d63f8  addic 5, 4, 12
  04d63fc  stw 5, 8(3)
  04d6400  stw 7, 12(4)
  04d6404  lwz 4, 8(3)
  04d6408  stw 6, 4(4)
  04d640c  lwz 4, 8(3)
  04d6410  addic 4, 4, 8
  04d6414  stw 4, 8(3)
  04d6418  b 0x4d65bc
  04d641c  lis 4, -32762
  04d6420  stw 9, 0(5)
  04d6424  lwz 5, 8(3)
  04d6428  lis 9, 770
  04d642c  ori 4, 4, 32779
  04d6430  stw 4, 4(5)
  04d6434  lwz 4, 8(3)
  04d6438  addic 5, 4, 8
  04d643c  stw 5, 8(3)
  04d6440  stw 8, 8(4)
  04d6444  lwz 8, 8(3)
  04d6448  ori 5, 9, 770
  04d644c  lis 4, 1
  04d6450  ori 4, 4, 1
  04d6454  stw 5, 4(8)
  04d6458  lwz 5, 8(3)
  04d645c  stw 4, 8(5)
  04d6460  lwz 4, 8(3)
  04d6464  addic 5, 4, 12
  04d6468  stw 5, 8(3)
  04d646c  stw 7, 12(4)
  04d6470  lwz 4, 8(3)
  04d6474  stw 6, 4(4)
  04d6478  lwz 4, 8(3)
  04d647c  addic 4, 4, 8
  04d6480  stw 4, 8(3)
  04d6484  b 0x4d65bc
  04d6488  rldicl 4, 4, 32, 56
  04d648c  li 10, 255
  04d6490  addic 4, 4, 1
  04d6494  li 12, 255
  04d6498  clrldi 11, 4, 32
  04d649c  subc 10, 10, 11
  04d64a0  subc 11, 12, 4
  04d64a4  sradi 10, 10, 63
  04d64a8  and 10, 10, 11
  04d64ac  lis 11, 4
  04d64b0  addc 4, 4, 10
  04d64b4  ori 10, 11, 796
  04d64b8  slwi 12, 4, 8
  04d64bc  slwi 11, 4, 16
  04d64c0  slwi 31, 4, 24
  04d64c4  or 4, 4, 12
  04d64c8  stw 10, 0(5)
  04d64cc  lwz 5, 8(3)
  04d64d0  or 4, 4, 11
  04d64d4  or 4, 4, 31
  04d64d8  stw 4, 4(5)
  04d64dc  lwz 4, 8(3)
  04d64e0  addic 5, 4, 8
  04d64e4  stw 5, 8(3)
  04d64e8  lis 5, -32762
  04d64ec  stw 9, 8(4)
  04d64f0  lwz 10, 8(3)
  04d64f4  ori 4, 5, 32779
  04d64f8  lis 5, -32765
  04d64fc  lis 9, 1
  04d6500  ori 5, 5, 32771
  04d6504  stw 4, 4(10)
  04d6508  ori 9, 9, 1
  04d650c  lwz 4, 8(3)
  04d6510  addic 10, 4, 8
  04d6514  stw 10, 8(3)
  04d6518  stw 8, 8(4)
  04d651c  lwz 4, 8(3)
  04d6520  stw 5, 4(4)
  04d6524  lwz 4, 8(3)
  04d6528  stw 9, 8(4)
  04d652c  lwz 4, 8(3)
  04d6530  addic 5, 4, 12
  04d6534  stw 5, 8(3)
  04d6538  stw 7, 12(4)
  04d653c  lwz 4, 8(3)
  04d6540  stw 6, 4(4)
  04d6544  lwz 4, 8(3)
  04d6548  addic 4, 4, 8
  04d654c  stw 4, 8(3)
  04d6550  b 0x4d65bc
  04d6554  lis 4, -32762
  04d6558  stw 9, 0(5)
  04d655c  lwz 5, 8(3)
  04d6560  lis 9, 770
  04d6564  ori 4, 4, 32774
  04d6568  stw 4, 4(5)
  04d656c  lwz 4, 8(3)
  04d6570  addic 5, 4, 8
  04d6574  stw 5, 8(3)
  04d6578  stw 8, 8(4)
  04d657c  lwz 8, 8(3)
  04d6580  ori 5, 9, 770
  04d6584  lis 4, 771
  04d6588  ori 4, 4, 771
  04d658c  stw 5, 4(8)
  04d6590  lwz 5, 8(3)
  04d6594  stw 4, 8(5)
  04d6598  lwz 4, 8(3)
  04d659c  addic 5, 4, 12
  04d65a0  stw 5, 8(3)
  04d65a4  stw 7, 12(4)
  04d65a8  lwz 4, 8(3)
  04d65ac  stw 6, 4(4)
  04d65b0  lwz 4, 8(3)
  04d65b4  addic 4, 4, 8
  04d65b8  stw 4, 8(3)
  04d65bc  ld 31, 56(1)
  04d65c0  addi 1, 1, 64
  04d65c4  blr

FUN_004d65c8:   # 0x4d65c8, 0x6c bytes
  04d65c8  clrlwi 5, 4, 31
  04d65cc  cmpdi 5, 0
  04d65d0  bt 2, 0x4d65f8
  04d65d4  lis 5, 4
  04d65d8  lwz 7, 8(3)
  04d65dc  li 6, 0
  04d65e0  ori 5, 5, 2672
  04d65e4  stw 5, 0(7)
  04d65e8  lwz 5, 8(3)
  04d65ec  stw 6, 4(5)
  04d65f0  lwz 5, 8(3)
  04d65f4  b 0x4d6618
  04d65f8  lis 5, 4
  04d65fc  lwz 7, 8(3)
  04d6600  li 6, 1
  04d6604  ori 5, 5, 2672
  04d6608  stw 5, 0(7)
  04d660c  lwz 5, 8(3)
  04d6610  stw 6, 4(5)
  04d6614  lwz 5, 8(3)
  04d6618  lis 6, 271
  04d661c  std 4, 208(3)
  04d6620  addic 5, 5, 8
  04d6624  addic 6, 6, -7456
  04d6628  stw 5, 8(3)
  04d662c  std 4, 40(6)
  04d6630  blr

FUN_004d6634:   # 0x4d6634, 0xd0 bytes
  04d6634  rldicl 6, 4, 63, 61
  04d6638  lis 5, 4
  04d663c  cmpwi 6, 0
  04d6640  rldicl 7, 4, 60, 56
  04d6644  ori 5, 5, 772
  04d6648  bf 2, 0x4d666c
  04d664c  lwz 7, 8(3)
  04d6650  li 6, 0
  04d6654  stw 5, 0(7)
  04d6658  lwz 5, 8(3)
  04d665c  stw 6, 4(5)
  04d6660  lwz 5, 8(3)
  04d6664  addic 5, 5, 8
  04d6668  b 0x4d66ec
  04d666c  clrlwi 8, 4, 31
  04d6670  cmpdi 8, 0
  04d6674  bt 2, 0x4d66d0
  04d6678  lwz 9, 8(3)
  04d667c  li 8, 1
  04d6680  lis 10, 102
  04d6684  slwi 6, 6, 2
  04d6688  stw 5, 0(9)
  04d668c  lwz 5, 8(3)
  04d6690  addic 9, 10, -28900
  04d6694  stw 8, 4(5)
  04d6698  lwz 5, 8(3)
  04d669c  addic 8, 5, 8
  04d66a0  stw 8, 8(3)
  04d66a4  lis 8, 8
  04d66a8  lwzx 6, 9, 6
  04d66ac  ori 8, 8, 776
  04d66b0  stw 8, 8(5)
  04d66b4  lwz 5, 8(3)
  04d66b8  stw 6, 4(5)
  04d66bc  lwz 5, 8(3)
  04d66c0  stw 7, 8(5)
  04d66c4  lwz 5, 8(3)
  04d66c8  addic 5, 5, 12
  04d66cc  b 0x4d66ec
  04d66d0  lwz 7, 8(3)
  04d66d4  li 6, 0
  04d66d8  stw 5, 0(7)
  04d66dc  lwz 5, 8(3)
  04d66e0  stw 6, 4(5)
  04d66e4  lwz 5, 8(3)
  04d66e8  addic 5, 5, 8
  04d66ec  lis 6, 271
  04d66f0  std 4, 184(3)
  04d66f4  addic 6, 6, -7456
  04d66f8  stw 5, 8(3)
  04d66fc  std 4, 16(6)
  04d6700  blr

FUN_004d6704:   # 0x4d6704, 0x68 bytes
  04d6704  rldicl 6, 3, 62, 62
  04d6708  clrlwi 3, 3, 30
  04d670c  li 7, 1
  04d6710  clrlwi 6, 6, 24
  04d6714  subc 3, 7, 3
  04d6718  li 7, 1
  04d671c  cntlzw 3, 3
  04d6720  subc 6, 7, 6
  04d6724  sldi 3, 3, 58
  04d6728  li 7, 3
  04d672c  li 8, 1
  04d6730  sradi 3, 3, 63
  04d6734  subc 7, 7, 8
  04d6738  cntlzw 6, 6
  04d673c  and 3, 3, 7
  04d6740  sldi 6, 6, 58
  04d6744  li 7, 3
  04d6748  li 9, 1
  04d674c  addc 3, 8, 3
  04d6750  sradi 6, 6, 63
  04d6754  subc 7, 7, 9
  04d6758  and 6, 6, 7
  04d675c  stw 3, 0(4)
  04d6760  addc 3, 9, 6
  04d6764  stw 3, 0(5)
  04d6768  blr

FUN_004d676c:   # 0x4d676c, 0x11c bytes
  04d676c  cmpwi 4, 0
  04d6770  bf 2, 0x4d6784
  04d6774  lis 8, 271
  04d6778  addic 8, 8, -7456
  04d677c  stw 5, 24(8)
  04d6780  stw 5, 192(3)
  04d6784  cmplwi 4, 4
  04d6788  bf 0, 0x4d67e8
  04d678c  sldi 8, 4, 5
  04d6790  sldi 9, 4, 2
  04d6794  addc 8, 8, 9
  04d6798  lwz 9, 0(5)
  04d679c  addc 8, 3, 8
  04d67a0  lwz 10, 4(5)
  04d67a4  lwz 11, 8(5)
  04d67a8  clrldi 8, 8, 32
  04d67ac  lwz 12, 12(5)
  04d67b0  stw 9, 20(8)
  04d67b4  stw 10, 24(8)
  04d67b8  stw 11, 28(8)
  04d67bc  stw 12, 32(8)
  04d67c0  lwz 9, 16(5)
  04d67c4  lwz 10, 20(5)
  04d67c8  lwz 11, 24(5)
  04d67cc  lwz 12, 28(5)
  04d67d0  stw 9, 36(8)
  04d67d4  stw 10, 40(8)
  04d67d8  stw 11, 44(8)
  04d67dc  stw 12, 48(8)
  04d67e0  lwz 9, 32(5)
  04d67e4  stw 9, 52(8)
  04d67e8  slwi 8, 4, 5
  04d67ec  lwz 9, 8(3)
  04d67f0  slwi 7, 7, 8
  04d67f4  addic 8, 8, 6656
  04d67f8  oris 7, 7, 1
  04d67fc  oris 8, 8, 28
  04d6800  or 6, 7, 6
  04d6804  slwi 4, 4, 2
  04d6808  stw 8, 0(9)
  04d680c  lwz 8, 8(3)
  04d6810  lwz 9, 0(5)
  04d6814  addic 4, 4, 6208
  04d6818  stw 9, 4(8)
  04d681c  lwz 7, 8(3)
  04d6820  lwz 8, 4(5)
  04d6824  oris 4, 4, 4
  04d6828  stw 8, 8(7)
  04d682c  lwz 7, 8(3)
  04d6830  stw 6, 12(7)
  04d6834  lwz 6, 8(3)
  04d6838  lwz 7, 12(5)
  04d683c  stw 7, 16(6)
  04d6840  lwz 6, 8(3)
  04d6844  lwz 7, 16(5)
  04d6848  stw 7, 20(6)
  04d684c  lwz 6, 8(3)
  04d6850  lwz 7, 20(5)
  04d6854  stw 7, 24(6)
  04d6858  lwz 6, 8(3)
  04d685c  lwz 7, 24(5)
  04d6860  stw 7, 28(6)
  04d6864  lwz 6, 8(3)
  04d6868  stw 4, 32(6)
  04d686c  lwz 4, 8(3)
  04d6870  lwz 5, 28(5)
  04d6874  stw 5, 36(4)
  04d6878  lwz 4, 8(3)
  04d687c  addic 4, 4, 40
  04d6880  stw 4, 8(3)
  04d6884  blr

FUN_004d6888:   # 0x4d6888, 0xc0 bytes
  04d6888  stdu 1, -112(1)
  04d688c  mflr 0
  04d6890  std 0, 128(1)
  04d6894  ori 7, 6, 0
  04d6898  ori 6, 3, 0
  04d689c  ori 8, 4, 0
  04d68a0  ori 3, 5, 0
  04d68a4  ori 5, 4, 0
  04d68a8  ori 4, 3, 0
  04d68ac  cmpwi 8, 0
  04d68b0  ori 3, 7, 0
  04d68b4  bf 2, 0x4d68c4
  04d68b8  lis 7, 271
  04d68bc  std 3, 168(6)
  04d68c0  std 3, -7456(7)
  04d68c4  ori 7, 4, 0
  04d68c8  rldicl 4, 3, 62, 62
  04d68cc  clrlwi 3, 3, 30
  04d68d0  li 8, 1
  04d68d4  clrlwi 4, 4, 24
  04d68d8  subc 3, 8, 3
  04d68dc  li 8, 1
  04d68e0  cntlzw 3, 3
  04d68e4  li 9, 3
  04d68e8  sldi 3, 3, 58
  04d68ec  li 10, 1
  04d68f0  subc 4, 8, 4
  04d68f4  sradi 3, 3, 63
  04d68f8  subc 9, 9, 10
  04d68fc  cntlzw 4, 4
  04d6900  and 3, 3, 9
  04d6904  li 8, 3
  04d6908  li 11, 1
  04d690c  sldi 4, 4, 58
  04d6910  addc 9, 10, 3
  04d6914  subc 8, 8, 11
  04d6918  sradi 10, 4, 63
  04d691c  ori 3, 6, 0
  04d6920  ori 4, 5, 0
  04d6924  and 6, 10, 8
  04d6928  ori 5, 7, 0
  04d692c  addc 7, 11, 6
  04d6930  ori 6, 9, 0
  04d6934  bl 0x4d676c
  04d6938  ld 0, 128(1)
  04d693c  mtlr 0
  04d6940  addi 1, 1, 112
  04d6944  blr

idol_draw::ResetPassState:   # 0x4d6948, 0x268 bytes
  04d6948  stdu 1, -128(1)
  04d694c  mflr 0
  04d6950  std 0, 144(1)
  04d6954  std 30, 112(1)
  04d6958  std 31, 120(1)
  04d695c  lis 30, 271
  04d6960  ori 31, 3, 0
  04d6964  addic 30, 30, -7456
  04d6968  ld 3, 56(30)
  04d696c  cmpdi 3, -1
  04d6970  bt 2, 0x4d698c
  04d6974  ld 4, 224(31)
  04d6978  cmpd 3, 4
  04d697c  bt 2, 0x4d698c
  04d6980  ori 4, 3, 0
  04d6984  ori 3, 31, 0
  04d6988  bl 0x4d5fe4
  04d698c  lwz 3, 240(31)
  04d6990  cmpwi 3, 0
  04d6994  bf 2, 0x4d6a10
  04d6998  ld 4, 40(30)
  04d699c  cmpdi 4, -1
  04d69a0  bt 2, 0x4d6a10
  04d69a4  ld 3, 208(31)
  04d69a8  cmpd 4, 3
  04d69ac  bt 2, 0x4d6a10
  04d69b0  clrlwi 3, 4, 31
  04d69b4  cmpdi 3, 0
  04d69b8  bt 2, 0x4d69e0
  04d69bc  lis 3, 4
  04d69c0  lwz 6, 8(31)
  04d69c4  li 5, 0
  04d69c8  ori 3, 3, 2672
  04d69cc  stw 3, 0(6)
  04d69d0  lwz 3, 8(31)
  04d69d4  stw 5, 4(3)
  04d69d8  lwz 3, 8(31)
  04d69dc  b 0x4d6a00
  04d69e0  lis 3, 4
  04d69e4  lwz 6, 8(31)
  04d69e8  li 5, 1
  04d69ec  ori 3, 3, 2672
  04d69f0  stw 3, 0(6)
  04d69f4  lwz 3, 8(31)
  04d69f8  stw 5, 4(3)
  04d69fc  lwz 3, 8(31)
  04d6a00  addic 3, 3, 8
  04d6a04  std 4, 208(31)
  04d6a08  stw 3, 8(31)
  04d6a0c  std 4, 40(30)
  04d6a10  lwz 3, 24(30)
  04d6a14  cmpwi 3, 0
  04d6a18  bt 2, 0x4d6aa4
  04d6a1c  lwz 4, 192(31)
  04d6a20  cmpw 3, 4
  04d6a24  bt 2, 0x4d6aa4
  04d6a28  lis 7, 271
  04d6a2c  ori 5, 3, 0
  04d6a30  li 3, 1
  04d6a34  li 6, 1
  04d6a38  li 11, 1
  04d6a3c  ld 8, -7456(7)
  04d6a40  li 4, 3
  04d6a44  rldicl 9, 8, 62, 62
  04d6a48  std 8, 168(31)
  04d6a4c  clrlwi 10, 8, 30
  04d6a50  std 8, -7456(7)
  04d6a54  clrlwi 9, 9, 24
  04d6a58  subc 3, 3, 10
  04d6a5c  subc 6, 6, 9
  04d6a60  cntlzw 3, 3
  04d6a64  cntlzw 6, 6
  04d6a68  sldi 3, 3, 58
  04d6a6c  li 10, 3
  04d6a70  li 9, 1
  04d6a74  sldi 6, 6, 58
  04d6a78  sradi 3, 3, 63
  04d6a7c  subc 10, 10, 11
  04d6a80  subc 4, 4, 9
  04d6a84  sradi 12, 6, 63
  04d6a88  and 6, 3, 10
  04d6a8c  and 10, 12, 4
  04d6a90  ori 3, 31, 0
  04d6a94  addc 6, 11, 6
  04d6a98  li 4, 0
  04d6a9c  addc 7, 9, 10
  04d6aa0  bl 0x4d676c
  04d6aa4  lwz 3, 28(30)
  04d6aa8  cmpwi 3, 0
  04d6aac  bt 2, 0x4d6b2c
  04d6ab0  lwz 4, 196(31)
  04d6ab4  cmpw 3, 4
  04d6ab8  bt 2, 0x4d6b2c
  04d6abc  ld 7, 8(30)
  04d6ac0  li 4, 1
  04d6ac4  rldicl 9, 7, 62, 62
  04d6ac8  clrlwi 7, 7, 30
  04d6acc  li 8, 1
  04d6ad0  subc 4, 4, 7
  04d6ad4  clrlwi 9, 9, 24
  04d6ad8  cntlzw 4, 4
  04d6adc  ori 5, 3, 0
  04d6ae0  subc 8, 8, 9
  04d6ae4  li 3, 3
  04d6ae8  li 10, 1
  04d6aec  sldi 4, 4, 58
  04d6af0  li 6, 3
  04d6af4  li 7, 1
  04d6af8  cntlzw 8, 8
  04d6afc  subc 3, 3, 10
  04d6b00  sradi 4, 4, 63
  04d6b04  sldi 8, 8, 58
  04d6b08  subc 9, 6, 7
  04d6b0c  and 6, 4, 3
  04d6b10  sradi 4, 8, 63
  04d6b14  addc 6, 10, 6
  04d6b18  and 8, 4, 9
  04d6b1c  ori 3, 31, 0
  04d6b20  li 4, 1
  04d6b24  addc 7, 7, 8
  04d6b28  bl 0x4d676c
  04d6b2c  ld 3, 48(30)
  04d6b30  cmpdi 3, -1
  04d6b34  bt 2, 0x4d6b48
  04d6b38  ld 4, 216(31)
  04d6b3c  cmpd 3, 4
  04d6b40  bt 2, 0x4d6b48
  04d6b44  std 3, 216(31)
  04d6b48  lis 3, 271
  04d6b4c  lbz 3, -7384(3)
  04d6b50  cmpwi 3, 0
  04d6b54  bt 2, 0x4d6b7c
  04d6b58  ld 3, 16(30)
  04d6b5c  cmpdi 3, -1
  04d6b60  bt 2, 0x4d6b7c
  04d6b64  ld 4, 184(31)
  04d6b68  cmpd 3, 4
  04d6b6c  bt 2, 0x4d6b7c
  04d6b70  ori 4, 3, 0
  04d6b74  ori 3, 31, 0
  04d6b78  bl 0x4d6634
  04d6b7c  ld 30, 32(30)
  04d6b80  cmpdi 30, -1
  04d6b84  bt 2, 0x4d6b98
  04d6b88  ld 3, 200(31)
  04d6b8c  cmpd 30, 3
  04d6b90  bt 2, 0x4d6b98
  04d6b94  std 30, 200(31)
  04d6b98  ld 0, 144(1)
  04d6b9c  mtlr 0
  04d6ba0  ld 30, 112(1)
  04d6ba4  ld 31, 120(1)
  04d6ba8  addi 1, 1, 128
  04d6bac  blr

FUN_004d6bb0:   # 0x4d6bb0, 0x150 bytes
  04d6bb0  cmpwi 4, 0
  04d6bb4  bf 2, 0x4d6bc8
  04d6bb8  lis 6, 271
  04d6bbc  addic 6, 6, -7456
  04d6bc0  stw 5, 24(6)
  04d6bc4  stw 5, 192(3)
  04d6bc8  cmplwi 4, 4
  04d6bcc  bf 0, 0x4d6c04
  04d6bd0  sldi 6, 4, 5
  04d6bd4  sldi 7, 4, 2
  04d6bd8  addc 6, 6, 7
  04d6bdc  lwz 7, 0(5)
  04d6be0  addc 6, 3, 6
  04d6be4  clrldi 6, 6, 32
  04d6be8  lwz 8, 20(6)
  04d6bec  cmpw 8, 7
  04d6bf0  bf 2, 0x4d6c04
  04d6bf4  lwz 6, 28(6)
  04d6bf8  lwz 7, 8(5)
  04d6bfc  cmpw 6, 7
  04d6c00  bt 2, 0x4d6cfc
  04d6c04  cmplwi 4, 4
  04d6c08  bf 0, 0x4d6c68
  04d6c0c  sldi 6, 4, 5
  04d6c10  sldi 7, 4, 2
  04d6c14  addc 6, 6, 7
  04d6c18  lwz 7, 0(5)
  04d6c1c  addc 6, 3, 6
  04d6c20  lwz 8, 4(5)
  04d6c24  clrldi 6, 6, 32
  04d6c28  lwz 9, 8(5)
  04d6c2c  lwz 10, 12(5)
  04d6c30  stw 7, 20(6)
  04d6c34  stw 8, 24(6)
  04d6c38  stw 9, 28(6)
  04d6c3c  stw 10, 32(6)
  04d6c40  lwz 7, 16(5)
  04d6c44  lwz 8, 20(5)
  04d6c48  lwz 9, 24(5)
  04d6c4c  lwz 10, 28(5)
  04d6c50  stw 7, 36(6)
  04d6c54  stw 8, 40(6)
  04d6c58  stw 9, 44(6)
  04d6c5c  stw 10, 48(6)
  04d6c60  lwz 7, 32(5)
  04d6c64  stw 7, 52(6)
  04d6c68  slwi 6, 4, 5
  04d6c6c  lwz 7, 8(3)
  04d6c70  addic 6, 6, 6656
  04d6c74  oris 6, 6, 28
  04d6c78  slwi 4, 4, 2
  04d6c7c  stw 6, 0(7)
  04d6c80  lwz 6, 8(3)
  04d6c84  lwz 7, 0(5)
  04d6c88  addic 4, 4, 6208
  04d6c8c  stw 7, 4(6)
  04d6c90  lwz 6, 8(3)
  04d6c94  lwz 7, 4(5)
  04d6c98  oris 4, 4, 4
  04d6c9c  stw 7, 8(6)
  04d6ca0  lwz 6, 8(3)
  04d6ca4  lwz 7, 8(5)
  04d6ca8  stw 7, 12(6)
  04d6cac  lwz 6, 8(3)
  04d6cb0  lwz 7, 12(5)
  04d6cb4  stw 7, 16(6)
  04d6cb8  lwz 6, 8(3)
  04d6cbc  lwz 7, 16(5)
  04d6cc0  stw 7, 20(6)
  04d6cc4  lwz 6, 8(3)
  04d6cc8  lwz 7, 20(5)
  04d6ccc  stw 7, 24(6)
  04d6cd0  lwz 6, 8(3)
  04d6cd4  lwz 7, 24(5)
  04d6cd8  stw 7, 28(6)
  04d6cdc  lwz 6, 8(3)
  04d6ce0  stw 4, 32(6)
  04d6ce4  lwz 4, 8(3)
  04d6ce8  lwz 5, 28(5)
  04d6cec  stw 5, 36(4)
  04d6cf0  lwz 4, 8(3)
  04d6cf4  addic 4, 4, 40
  04d6cf8  stw 4, 8(3)
  04d6cfc  blr

idol_draw::SetTextureUnitRegs:   # 0x4d6d00, 0x160 bytes
  04d6d00  cmpwi 4, 0
  04d6d04  bf 2, 0x4d6d18
  04d6d08  lis 6, 271
  04d6d0c  addic 6, 6, -7456
  04d6d10  stw 5, 24(6)
  04d6d14  stw 5, 192(3)
  04d6d18  cmplwi 4, 4
  04d6d1c  bf 0, 0x4d6d54
  04d6d20  sldi 6, 4, 5
  04d6d24  sldi 7, 4, 2
  04d6d28  addc 6, 6, 7
  04d6d2c  lwz 7, 0(5)
  04d6d30  addc 6, 3, 6
  04d6d34  clrldi 6, 6, 32
  04d6d38  lwz 8, 20(6)
  04d6d3c  cmpw 8, 7
  04d6d40  bf 2, 0x4d6d54
  04d6d44  lwz 6, 28(6)
  04d6d48  lwz 7, 8(5)
  04d6d4c  cmpw 6, 7
  04d6d50  bt 2, 0x4d6e5c
  04d6d54  cmplwi 4, 4
  04d6d58  bf 0, 0x4d6db8
  04d6d5c  sldi 6, 4, 5
  04d6d60  sldi 7, 4, 2
  04d6d64  addc 6, 6, 7
  04d6d68  lwz 7, 0(5)
  04d6d6c  addc 6, 3, 6
  04d6d70  lwz 8, 4(5)
  04d6d74  clrldi 6, 6, 32
  04d6d78  lwz 9, 8(5)
  04d6d7c  lwz 10, 12(5)
  04d6d80  stw 7, 20(6)
  04d6d84  stw 8, 24(6)
  04d6d88  stw 9, 28(6)
  04d6d8c  stw 10, 32(6)
  04d6d90  lwz 7, 16(5)
  04d6d94  lwz 8, 20(5)
  04d6d98  lwz 9, 24(5)
  04d6d9c  lwz 10, 28(5)
  04d6da0  stw 7, 36(6)
  04d6da4  stw 8, 40(6)
  04d6da8  stw 9, 44(6)
  04d6dac  stw 10, 48(6)
  04d6db0  lwz 7, 32(5)
  04d6db4  stw 7, 52(6)
  04d6db8  slwi 6, 4, 5
  04d6dbc  lwz 7, 8(3)
  04d6dc0  lis 8, 1
  04d6dc4  addic 6, 6, 6656
  04d6dc8  ori 8, 8, 16384
  04d6dcc  oris 6, 6, 28
  04d6dd0  slwi 4, 4, 2
  04d6dd4  stw 6, 0(7)
  04d6dd8  lwz 6, 8(3)
  04d6ddc  lwz 7, 0(5)
  04d6de0  addic 4, 4, 6208
  04d6de4  stw 7, 4(6)
  04d6de8  lwz 6, 4(5)
  04d6dec  lwz 7, 8(3)
  04d6df0  clrlwi 6, 6, 16
  04d6df4  or 6, 6, 8
  04d6df8  oris 4, 4, 4
  04d6dfc  stw 6, 8(7)
  04d6e00  lwz 6, 8(3)
  04d6e04  lwz 7, 8(5)
  04d6e08  stw 7, 12(6)
  04d6e0c  lwz 6, 8(3)
  04d6e10  lwz 7, 12(5)
  04d6e14  stw 7, 16(6)
  04d6e18  lwz 6, 8(3)
  04d6e1c  lwz 7, 16(5)
  04d6e20  stw 7, 20(6)
  04d6e24  lwz 6, 8(3)
  04d6e28  lwz 7, 20(5)
  04d6e2c  stw 7, 24(6)
  04d6e30  lwz 6, 8(3)
  04d6e34  lwz 7, 24(5)
  04d6e38  stw 7, 28(6)
  04d6e3c  lwz 6, 8(3)
  04d6e40  stw 4, 32(6)
  04d6e44  lwz 4, 8(3)
  04d6e48  lwz 5, 28(5)
  04d6e4c  stw 5, 36(4)
  04d6e50  lwz 4, 8(3)
  04d6e54  addic 4, 4, 40
  04d6e58  stw 4, 8(3)
  04d6e5c  blr

idol_draw::BindTexture:   # 0x4d6e60, 0xd0 bytes
  04d6e60  stdu 1, -160(1)
  04d6e64  mflr 0
  04d6e68  std 0, 176(1)
  04d6e6c  rldicl 7, 6, 62, 62
  04d6e70  clrlwi 6, 6, 30
  04d6e74  li 8, 1
  04d6e78  clrlwi 7, 7, 24
  04d6e7c  subc 6, 8, 6
  04d6e80  li 8, 1
  04d6e84  cntlzw 6, 6
  04d6e88  subc 7, 8, 7
  04d6e8c  sldi 6, 6, 58
  04d6e90  li 8, 3
  04d6e94  li 9, 1
  04d6e98  cntlzw 7, 7
  04d6e9c  sradi 6, 6, 63
  04d6ea0  subc 8, 8, 9
  04d6ea4  sldi 7, 7, 58
  04d6ea8  li 10, 3
  04d6eac  li 11, 1
  04d6eb0  and 6, 6, 8
  04d6eb4  sradi 7, 7, 63
  04d6eb8  subc 8, 10, 11
  04d6ebc  addc 6, 9, 6
  04d6ec0  and 7, 7, 8
  04d6ec4  lwz 8, 0(5)
  04d6ec8  addc 7, 11, 7
  04d6ecc  lwz 9, 4(5)
  04d6ed0  lwz 10, 12(5)
  04d6ed4  slwi 7, 7, 8
  04d6ed8  stw 8, 112(1)
  04d6edc  oris 7, 7, 1
  04d6ee0  stw 9, 116(1)
  04d6ee4  stw 10, 124(1)
  04d6ee8  lwz 8, 16(5)
  04d6eec  or 6, 7, 6
  04d6ef0  lwz 7, 20(5)
  04d6ef4  lwz 9, 24(5)
  04d6ef8  lwz 10, 28(5)
  04d6efc  stw 8, 128(1)
  04d6f00  stw 7, 132(1)
  04d6f04  stw 9, 136(1)
  04d6f08  stw 10, 140(1)
  04d6f0c  lwz 7, 32(5)
  04d6f10  stw 6, 120(1)
  04d6f14  addic 5, 1, 112
  04d6f18  stw 7, 144(1)
  04d6f1c  bl 0x4d6d00
  04d6f20  ld 0, 176(1)
  04d6f24  mtlr 0
  04d6f28  addi 1, 1, 160
  04d6f2c  blr

FUN_004d6f50:   # 0x4d6f50, 0x138 bytes
  04d6f50  stdu 1, -64(1)
  04d6f54  lis 5, 1
  04d6f58  stw 4, 48(1)
  04d6f5c  stw 4, 52(1)
  04d6f60  li 0, 48
  04d6f64  ori 5, 5, 34212
  04d6f68  stw 4, 56(1)
  04d6f6c  stw 4, 60(1)
  04d6f70  cmpwi 6, 4, 0
  04d6f74  lbzx 5, 3, 5
  04d6f78  lvx 2, 1, 0
  04d6f7c  cmpwi 5, 0
  04d6f80  bt 2, 0x4d7080
  04d6f84  lis 5, 77
  04d6f88  vspltisw 6, -1
  04d6f8c  li 7, 4
  04d6f90  vcfsx 2, 2, 0
  04d6f94  addi 5, 5, 28464
  04d6f98  vspltisw 9, -1
  04d6f9c  li 8, 8
  04d6fa0  lis 6, 1
  04d6fa4  vslw 6, 6, 6
  04d6fa8  li 9, 12
  04d6fac  ori 6, 6, 34216
  04d6fb0  lvlx 3, 7, 5
  04d6fb4  lvlx 4, 8, 5
  04d6fb8  vspltw 3, 3, 0
  04d6fbc  vspltw 4, 4, 0
  04d6fc0  lvlx 5, 6, 3
  04d6fc4  lvlx 7, 0, 5
  04d6fc8  li 6, 16
  04d6fcc  lvlx 10, 9, 5
  04d6fd0  vnmsubfp 8, 5, 3, 4
  04d6fd4  vmaddfp 3, 5, 3, 6
  04d6fd8  vspltw 6, 10, 0
  04d6fdc  vspltw 5, 7, 0
  04d6fe0  vslw 7, 9, 9
  04d6fe4  lvlx 9, 6, 5
  04d6fe8  li 7, 20
  04d6fec  li 6, 6776
  04d6ff0  stw 4, 6784(3)
  04d6ff4  vmaddfp 2, 2, 5, 7
  04d6ff8  vspltw 7, 9, 0
  04d6ffc  vspltisw 9, -1
  04d7000  li 8, 24
  04d7004  lwz 10, 1184(3)
  04d7008  vmaddfp 3, 3, 6, 8
  04d700c  vslw 6, 9, 9
  04d7010  vspltisw 8, -1
  04d7014  li 9, 6788
  04d7018  cmpwi 7, 10, 1
  04d701c  cmpwi 4, 0
  04d7020  crnand 2, 2, 30
  04d7024  cmpwi 1, 10, 0
  04d7028  vaddfp 3, 3, 7
  04d702c  vslw 7, 8, 8
  04d7030  vmaddfp 2, 2, 3, 6
  04d7034  vspltw 3, 2, 0
  04d7038  vsubfp 2, 2, 5
  04d703c  stvewx 3, 6, 3
  04d7040  lvlx 3, 7, 5
  04d7044  lvlx 5, 8, 5
  04d7048  vspltw 3, 3, 0
  04d704c  vmaddfp 2, 2, 3, 7
  04d7050  vspltw 3, 5, 0
  04d7054  vmaddfp 2, 2, 3, 4
  04d7058  vspltw 2, 2, 0
  04d705c  stvewx 2, 9, 3
  04d7060  bt 2, 0x4d7070
  04d7064  li 4, 0
  04d7068  stw 4, 1188(3)
  04d706c  b 0x4d7080
  04d7070  bf 25, 0x4d7080
  04d7074  bf 6, 0x4d7080
  04d7078  li 4, 1
  04d707c  stw 4, 1188(3)
  04d7080  addi 1, 1, 64
  04d7084  blr

FUN_004d7088:   # 0x4d7088, 0x118 bytes
  04d7088  stdu 1, -128(1)
  04d708c  mflr 0
  04d7090  std 0, 144(1)
  04d7094  std 31, 120(1)
  04d7098  ori 31, 3, 0
  04d709c  lis 3, 102
  04d70a0  li 4, 1
  04d70a4  std 30, 112(1)
  04d70a8  addic 5, 3, 5904
  04d70ac  li 30, 0
  04d70b0  addic 3, 31, 1056
  04d70b4  stw 4, 12(31)
  04d70b8  stw 5, 0(31)
  04d70bc  li 4, 255
  04d70c0  stw 30, 28(31)
  04d70c4  li 5, 128
  04d70c8  stw 3, 1052(31)
  04d70cc  bl 0x5d0140
  04d70d0  nop
  04d70d4  lis 3, 144
  04d70d8  lis 4, 102
  04d70dc  lis 5, 102
  04d70e0  addic 6, 4, 6208
  04d70e4  li 7, 3
  04d70e8  stw 31, 11932(3)
  04d70ec  ori 4, 31, 0
  04d70f0  addic 3, 5, 5948
  04d70f4  stw 6, 0(31)
  04d70f8  mtctr 7
  04d70fc  stw 30, 6656(4)
  04d7100  stw 30, 6660(4)
  04d7104  stw 30, 6664(4)
  04d7108  stw 30, 6668(4)
  04d710c  stb 30, 6672(4)
  04d7110  stb 30, 6673(4)
  04d7114  stw 30, 6676(4)
  04d7118  stw 3, 6680(4)
  04d711c  stw 30, 6684(4)
  04d7120  stw 30, 6688(4)
  04d7124  addic 4, 4, 36
  04d7128  bdnz 0x4d70fc
  04d712c  lis 4, 17056
  04d7130  lis 3, 16179
  04d7134  lis 5, 17274
  04d7138  lis 6, 15820
  04d713c  stw 4, 8924(31)
  04d7140  ori 3, 3, 13107
  04d7144  ori 4, 6, 52429
  04d7148  stw 5, 8936(31)
  04d714c  lis 7, 144
  04d7150  lis 5, 15044
  04d7154  stw 3, 8928(31)
  04d7158  stw 4, 8932(31)
  04d715c  lis 6, 16128
  04d7160  ori 4, 5, 39846
  04d7164  stw 30, 1188(31)
  04d7168  stw 30, 1184(31)
  04d716c  lis 3, 16256
  04d7170  stw 31, -23196(7)
  04d7174  stw 4, 6776(31)
  04d7178  stw 6, 6780(31)
  04d717c  stw 30, 6792(31)
  04d7180  stw 30, 6784(31)
  04d7184  stw 3, 6788(31)
  04d7188  ld 0, 144(1)
  04d718c  mtlr 0
  04d7190  ld 30, 112(1)
  04d7194  ld 31, 120(1)
  04d7198  addi 1, 1, 128
  04d719c  blr

FUN_004d71a0:   # 0x4d71a0, 0x20 bytes
  04d71a0  stdu 1, -112(1)
  04d71a4  mflr 0
  04d71a8  std 0, 128(1)
  04d71ac  bl 0x4d7088
  04d71b0  ld 0, 128(1)
  04d71b4  mtlr 0
  04d71b8  addi 1, 1, 112
  04d71bc  blr

FUN_004d71c0:   # 0x4d71c0, 0x114 bytes
  04d71c0  stdu 1, -304(1)
  04d71c4  mflr 0
  04d71c8  std 0, 320(1)
  04d71cc  std 31, 296(1)
  04d71d0  lis 4, 144
  04d71d4  ori 31, 3, 0
  04d71d8  std 30, 288(1)
  04d71dc  std 29, 280(1)
  04d71e0  std 28, 272(1)
  04d71e4  lwz 3, 11980(4)
  04d71e8  bl 0x50436c
  04d71ec  nop
  04d71f0  ori 30, 3, 0
  04d71f4  li 4, 96
  04d71f8  li 5, 64
  04d71fc  bl 0x4fe098
  04d7200  nop
  04d7204  ori 29, 3, 0
  04d7208  ori 3, 30, 0
  04d720c  li 4, 48
  04d7210  li 5, 64
  04d7214  bl 0x4fe098
  04d7218  nop
  04d721c  ori 30, 3, 0
  04d7220  lis 4, 1
  04d7224  lwz 3, 1192(31)
  04d7228  lis 5, 1
  04d722c  ori 7, 4, 34204
  04d7230  subc 6, 29, 3
  04d7234  ori 5, 5, 34208
  04d7238  subc 8, 30, 3
  04d723c  addic 4, 1, 112
  04d7240  stwx 6, 31, 7
  04d7244  ori 3, 29, 0
  04d7248  stwx 8, 31, 5
  04d724c  bl 0x64f2a4
  04d7250  ld 2, 40(1)
  04d7254  lis 4, 144
  04d7258  addic 31, 1, 116
  04d725c  addic 4, 4, -23188
  04d7260  ori 3, 31, 0
  04d7264  li 5, 96
  04d7268  bl 0x5c5ad0
  04d726c  nop
  04d7270  addic 28, 1, 212
  04d7274  lis 4, 144
  04d7278  ori 3, 28, 0
  04d727c  li 5, 48
  04d7280  addic 4, 4, -23092
  04d7284  bl 0x5c5ad0
  04d7288  nop
  04d728c  ori 3, 29, 0
  04d7290  ori 4, 31, 0
  04d7294  li 5, 96
  04d7298  bl 0x5c5ad0
  04d729c  nop
  04d72a0  ori 3, 30, 0
  04d72a4  ori 4, 28, 0
  04d72a8  li 5, 48
  04d72ac  bl 0x5c5ad0
  04d72b0  nop
  04d72b4  ld 0, 320(1)
  04d72b8  mtlr 0
  04d72bc  ld 28, 272(1)
  04d72c0  ld 29, 280(1)
  04d72c4  ld 30, 288(1)
  04d72c8  ld 31, 296(1)
  04d72cc  addi 1, 1, 304
  04d72d0  blr

FUN_004d72d4:   # 0x4d72d4, 0x4 bytes
  04d72d4  blr

FUN_004d72d8:   # 0x4d72d8, 0x18c bytes
  04d72d8  stdu 1, -128(1)
  04d72dc  mflr 0
  04d72e0  std 0, 144(1)
  04d72e4  std 31, 120(1)
  04d72e8  lis 4, 1
  04d72ec  ori 31, 3, 0
  04d72f0  ori 4, 4, 34212
  04d72f4  lbzx 3, 3, 4
  04d72f8  std 30, 112(1)
  04d72fc  cmpwi 3, 0
  04d7300  bt 2, 0x4d7418
  04d7304  lis 3, 1
  04d7308  li 5, 0
  04d730c  ori 3, 3, 34220
  04d7310  li 4, 0
  04d7314  li 30, 0
  04d7318  lwzx 3, 31, 3
  04d731c  addic 6, 3, -1
  04d7320  subc 3, 5, 3
  04d7324  rlwinm 5, 6, 0, 0, 25
  04d7328  cntlzw 3, 3
  04d732c  addic 5, 5, 64
  04d7330  sldi 3, 3, 58
  04d7334  subc 4, 4, 5
  04d7338  sradi 3, 3, 63
  04d733c  and 3, 3, 4
  04d7340  addc 3, 5, 3
  04d7344  slwi 3, 3, 2
  04d7348  bl 0x64f244
  04d734c  ld 2, 40(1)
  04d7350  lis 4, 1
  04d7354  cmpwi 3, 0
  04d7358  ori 4, 4, 34244
  04d735c  stwx 3, 31, 4
  04d7360  bf 2, 0x4d7374
  04d7364  lis 3, 1
  04d7368  ori 3, 3, 34212
  04d736c  stbx 30, 31, 3
  04d7370  b 0x4d744c
  04d7374  lis 4, 1
  04d7378  li 5, 0
  04d737c  ori 4, 4, 34224
  04d7380  li 6, 0
  04d7384  lis 8, 1
  04d7388  lwzx 4, 31, 4
  04d738c  addic 7, 4, -1
  04d7390  subc 4, 5, 4
  04d7394  rlwinm 5, 7, 0, 0, 26
  04d7398  cntlzw 4, 4
  04d739c  addic 5, 5, 32
  04d73a0  sldi 4, 4, 58
  04d73a4  subc 6, 6, 5
  04d73a8  sradi 4, 4, 63
  04d73ac  and 4, 4, 6
  04d73b0  lis 6, 1
  04d73b4  addc 4, 5, 4
  04d73b8  mullw 4, 3, 4
  04d73bc  li 5, 0
  04d73c0  addic 7, 4, -1
  04d73c4  subc 4, 5, 4
  04d73c8  rlwinm 5, 7, 0, 0, 15
  04d73cc  cntlzw 4, 4
  04d73d0  addc 5, 5, 6
  04d73d4  li 6, 0
  04d73d8  sldi 4, 4, 58
  04d73dc  subc 6, 6, 5
  04d73e0  sradi 4, 4, 63
  04d73e4  lis 7, 1
  04d73e8  and 4, 4, 6
  04d73ec  mulli 3, 3, 744
  04d73f0  ori 7, 7, 34248
  04d73f4  addc 4, 5, 4
  04d73f8  lis 6, 1
  04d73fc  li 5, 6
  04d7400  ori 6, 6, 34252
  04d7404  stwx 4, 31, 7
  04d7408  ori 4, 8, 34256
  04d740c  stwx 5, 31, 6
  04d7410  stwx 3, 31, 4
  04d7414  b 0x4d744c
  04d7418  lis 5, 1
  04d741c  lis 3, 1
  04d7420  lis 4, 1
  04d7424  ori 5, 5, 34256
  04d7428  li 6, 0
  04d742c  ori 3, 3, 34244
  04d7430  lis 7, 1
  04d7434  ori 4, 4, 34248
  04d7438  ori 7, 7, 34252
  04d743c  stwx 6, 31, 5
  04d7440  stwx 6, 31, 3
  04d7444  stwx 6, 31, 4
  04d7448  stwx 6, 31, 7
  04d744c  ld 0, 144(1)
  04d7450  mtlr 0
  04d7454  ld 30, 112(1)
  04d7458  ld 31, 120(1)
  04d745c  addi 1, 1, 128
  04d7460  blr

FUN_004d7464:   # 0x4d7464, 0xce4 bytes
  04d7464  stdu 1, -720(1)
  04d7468  mflr 0
  04d746c  std 0, 736(1)
  04d7470  std 30, 704(1)
  04d7474  std 31, 712(1)
  04d7478  ori 30, 4, 0
  04d747c  ori 31, 3, 0
  04d7480  ori 3, 30, 0
  04d7484  lis 4, 16
  04d7488  std 29, 696(1)
  04d748c  std 28, 688(1)
  04d7490  std 27, 680(1)
  04d7494  std 26, 672(1)
  04d7498  std 25, 664(1)
  04d749c  std 24, 656(1)
  04d74a0  std 23, 648(1)
  04d74a4  lis 5, 16
  04d74a8  bl 0x4fe098
  04d74ac  nop
  04d74b0  ori 29, 3, 0
  04d74b4  ori 3, 30, 0
  04d74b8  bl 0x4fe048
  04d74bc  nop
  04d74c0  clrldi 28, 3, 32
  04d74c4  ori 3, 30, 0
  04d74c8  bl 0x4fe5ec
  04d74cc  nop
  04d74d0  ori 5, 3, 0
  04d74d4  lis 3, 1
  04d74d8  ori 4, 28, 0
  04d74dc  bl 0x50f034
  04d74e0  nop
  04d74e4  ori 3, 30, 0
  04d74e8  bl 0x4fe5ec
  04d74ec  nop
  04d74f0  addic 4, 1, 128
  04d74f4  bl 0x64f2a4
  04d74f8  ld 2, 40(1)
  04d74fc  ori 3, 30, 0
  04d7500  bl 0x4fe5ec
  04d7504  nop
  04d7508  stw 3, 1192(31)
  04d750c  ori 3, 30, 0
  04d7510  bl 0x4fe5ec
  04d7514  nop
  04d7518  ori 3, 30, 0
  04d751c  lis 4, 1
  04d7520  bl 0x4fe6ec
  04d7524  nop
  04d7528  ori 3, 29, 0
  04d752c  lis 4, 3824
  04d7530  lis 5, 16
  04d7534  bl 0x64f324
  04d7538  ld 2, 40(1)
  04d753c  li 29, 0
  04d7540  ori 27, 31, 0
  04d7544  ori 25, 29, 0
  04d7548  li 24, 1
  04d754c  li 28, 2
  04d7550  ori 3, 30, 0
  04d7554  lis 4, 24
  04d7558  bl 0x4fe52c
  04d755c  nop
  04d7560  lis 4, 24
  04d7564  stw 3, 1200(27)
  04d7568  stw 3, 1208(27)
  04d756c  addc 5, 3, 4
  04d7570  stw 25, 1212(27)
  04d7574  addic 3, 27, 1220
  04d7578  stw 4, 1216(27)
  04d757c  li 4, 0
  04d7580  stw 5, 1204(27)
  04d7584  li 5, 144
  04d7588  bl 0x5d0140
  04d758c  nop
  04d7590  ori 3, 30, 0
  04d7594  stw 25, 1440(27)
  04d7598  lis 4, 8
  04d759c  bl 0x4fe52c
  04d75a0  nop
  04d75a4  lis 5, 8
  04d75a8  stw 3, 1448(27)
  04d75ac  li 4, 0
  04d75b0  addc 6, 3, 5
  04d75b4  stw 3, 1456(27)
  04d75b8  stw 25, 1460(27)
  04d75bc  addic 3, 27, 1468
  04d75c0  stw 5, 1464(27)
  04d75c4  li 5, 144
  04d75c8  stw 6, 1452(27)
  04d75cc  bl 0x5d0140
  04d75d0  nop
  04d75d4  ori 3, 30, 0
  04d75d8  lis 4, 48
  04d75dc  stw 24, 1688(27)
  04d75e0  bl 0x4fe52c
  04d75e4  nop
  04d75e8  lis 4, 48
  04d75ec  stw 3, 1696(27)
  04d75f0  stw 3, 1704(27)
  04d75f4  addc 5, 3, 4
  04d75f8  stw 25, 1708(27)
  04d75fc  addic 3, 27, 1716
  04d7600  stw 4, 1712(27)
  04d7604  li 4, 0
  04d7608  stw 5, 1700(27)
  04d760c  li 5, 144
  04d7610  bl 0x5d0140
  04d7614  nop
  04d7618  ori 3, 30, 0
  04d761c  stw 28, 1936(27)
  04d7620  lis 4, 16
  04d7624  bl 0x4fe52c
  04d7628  nop
  04d762c  lis 26, 16
  04d7630  stw 3, 1944(27)
  04d7634  li 5, 144
  04d7638  addc 6, 3, 26
  04d763c  stw 3, 1952(27)
  04d7640  stw 25, 1956(27)
  04d7644  addic 3, 27, 1964
  04d7648  stw 26, 1960(27)
  04d764c  li 4, 0
  04d7650  stw 6, 1948(27)
  04d7654  bl 0x5d0140
  04d7658  nop
  04d765c  li 5, 3
  04d7660  ori 3, 30, 0
  04d7664  lis 4, 16
  04d7668  stw 5, 2184(27)
  04d766c  bl 0x4fe52c
  04d7670  nop
  04d7674  addc 6, 3, 26
  04d7678  stw 3, 2192(27)
  04d767c  li 5, 144
  04d7680  stw 3, 2200(27)
  04d7684  li 4, 0
  04d7688  stw 25, 2204(27)
  04d768c  addic 3, 27, 2212
  04d7690  stw 6, 2196(27)
  04d7694  stw 26, 2208(27)
  04d7698  bl 0x5d0140
  04d769c  nop
  04d76a0  li 5, 4
  04d76a4  ori 3, 30, 0
  04d76a8  lis 4, 16
  04d76ac  stw 5, 2432(27)
  04d76b0  bl 0x4fe52c
  04d76b4  nop
  04d76b8  stw 3, 3184(27)
  04d76bc  addc 6, 3, 26
  04d76c0  stw 3, 3192(27)
  04d76c4  li 5, 144
  04d76c8  stw 25, 3196(27)
  04d76cc  li 4, 0
  04d76d0  stw 26, 3200(27)
  04d76d4  addic 3, 27, 3204
  04d76d8  stw 6, 3188(27)
  04d76dc  bl 0x5d0140
  04d76e0  nop
  04d76e4  li 5, 8
  04d76e8  ori 3, 30, 0
  04d76ec  lis 4, 64
  04d76f0  stw 5, 3424(27)
  04d76f4  bl 0x4fe52c
  04d76f8  nop
  04d76fc  lis 5, 64
  04d7700  stw 3, 3432(27)
  04d7704  li 4, 0
  04d7708  addc 6, 3, 5
  04d770c  stw 3, 3440(27)
  04d7710  stw 25, 3444(27)
  04d7714  addic 3, 27, 3452
  04d7718  stw 5, 3448(27)
  04d771c  li 5, 144
  04d7720  stw 6, 3436(27)
  04d7724  bl 0x5d0140
  04d7728  nop
  04d772c  li 5, 9
  04d7730  ori 3, 30, 0
  04d7734  lis 4, 16
  04d7738  stw 5, 3672(27)
  04d773c  bl 0x4fe52c
  04d7740  nop
  04d7744  addc 6, 3, 26
  04d7748  stw 3, 2688(27)
  04d774c  li 5, 144
  04d7750  stw 3, 2696(27)
  04d7754  li 4, 0
  04d7758  stw 25, 2700(27)
  04d775c  addic 3, 27, 2708
  04d7760  stw 6, 2692(27)
  04d7764  stw 26, 2704(27)
  04d7768  bl 0x5d0140
  04d776c  nop
  04d7770  li 5, 6
  04d7774  ori 3, 30, 0
  04d7778  lis 4, 16
  04d777c  stw 5, 2928(27)
  04d7780  bl 0x4fe52c
  04d7784  nop
  04d7788  stw 3, 2936(27)
  04d778c  addc 6, 3, 26
  04d7790  stw 3, 2944(27)
  04d7794  li 5, 144
  04d7798  stw 25, 2948(27)
  04d779c  li 4, 0
  04d77a0  stw 26, 2952(27)
  04d77a4  addic 3, 27, 2956
  04d77a8  stw 6, 2940(27)
  04d77ac  bl 0x5d0140
  04d77b0  nop
  04d77b4  li 5, 7
  04d77b8  ori 3, 30, 0
  04d77bc  lis 4, 32
  04d77c0  stw 5, 3176(27)
  04d77c4  bl 0x4fe52c
  04d77c8  nop
  04d77cc  lis 5, 32
  04d77d0  stw 3, 2440(27)
  04d77d4  li 4, 0
  04d77d8  addc 6, 3, 5
  04d77dc  stw 3, 2448(27)
  04d77e0  stw 25, 2452(27)
  04d77e4  addic 3, 27, 2460
  04d77e8  stw 5, 2456(27)
  04d77ec  li 5, 144
  04d77f0  stw 6, 2444(27)
  04d77f4  bl 0x5d0140
  04d77f8  nop
  04d77fc  li 5, 5
  04d7800  ori 3, 30, 0
  04d7804  lis 4, 16
  04d7808  stw 5, 2680(27)
  04d780c  bl 0x4fe52c
  04d7810  nop
  04d7814  addc 6, 3, 26
  04d7818  stw 3, 3680(27)
  04d781c  li 4, 0
  04d7820  stw 3, 3688(27)
  04d7824  li 5, 144
  04d7828  stw 25, 3692(27)
  04d782c  addic 3, 27, 3700
  04d7830  stw 6, 3684(27)
  04d7834  stw 26, 3696(27)
  04d7838  bl 0x5d0140
  04d783c  nop
  04d7840  li 3, 10
  04d7844  addic 29, 29, 1
  04d7848  cmplwi 29, 2
  04d784c  stw 3, 3920(27)
  04d7850  addic 27, 27, 2728
  04d7854  bt 0, 0x4d7550
  04d7858  lis 26, 102
  04d785c  ori 29, 25, 0
  04d7860  ori 27, 31, 0
  04d7864  addic 26, 26, -28844
  04d7868  ori 3, 30, 0
  04d786c  addic 23, 27, 6656
  04d7870  lis 4, 160
  04d7874  li 5, 128
  04d7878  bl 0x4fe098
  04d787c  nop
  04d7880  ori 4, 3, 0
  04d7884  ori 3, 23, 0
  04d7888  lis 5, 160
  04d788c  ori 6, 26, 0
  04d7890  li 7, 0
  04d7894  ori 8, 30, 0
  04d7898  bl 0x4fe39c
  04d789c  nop
  04d78a0  addic 29, 29, 1
  04d78a4  addic 27, 27, 36
  04d78a8  cmplwi 29, 3
  04d78ac  bt 0, 0x4d7868
  04d78b0  lis 29, 271
  04d78b4  addic 27, 29, -2808
  04d78b8  ori 3, 27, 0
  04d78bc  bl 0x64f444
  04d78c0  ld 2, 40(1)
  04d78c4  bl 0x64f364
  04d78c8  ld 2, 40(1)
  04d78cc  lis 26, 271
  04d78d0  lis 23, 144
  04d78d4  lwz 4, -2808(29)
  04d78d8  lwz 5, 8(27)
  04d78dc  stw 3, -2784(26)
  04d78e0  lwz 3, 11980(23)
  04d78e4  bl 0x504374
  04d78e8  nop
  04d78ec  lwz 3, 11980(23)
  04d78f0  li 4, 1280
  04d78f4  lwz 5, -2808(29)
  04d78f8  li 6, 720
  04d78fc  addic 29, 3, 124
  04d7900  stw 5, 1196(31)
  04d7904  li 3, 0
  04d7908  stw 4, 4(31)
  04d790c  addic 5, 1, 596
  04d7910  stw 6, 8(31)
  04d7914  li 4, 0
  04d7918  bl 0x64f624
  04d791c  ld 2, 40(1)
  04d7920  lis 3, 102
  04d7924  lbz 4, 604(1)
  04d7928  addic 3, 3, -28828
  04d792c  bl 0x5cd098
  04d7930  nop
  04d7934  lis 3, 102
  04d7938  lbz 4, 607(1)
  04d793c  addic 3, 3, -28780
  04d7940  bl 0x5cd098
  04d7944  nop
  04d7948  lis 3, 102
  04d794c  lbz 4, 605(1)
  04d7950  addic 3, 3, -28732
  04d7954  bl 0x5cd098
  04d7958  nop
  04d795c  lbz 3, 604(1)
  04d7960  cmpwi 3, 1
  04d7964  bt 2, 0x4d7978
  04d7968  cmpwi 3, 10
  04d796c  bt 0, 0x4d79dc
  04d7970  cmpwi 3, 13
  04d7974  bt 1, 0x4d79dc
  04d7978  lis 3, 102
  04d797c  addic 3, 3, -28684
  04d7980  bl 0x5cd098
  04d7984  nop
  04d7988  li 3, 0
  04d798c  li 4, 2
  04d7990  li 5, 0
  04d7994  li 6, 0
  04d7998  bl 0x64f664
  04d799c  ld 2, 40(1)
  04d79a0  cmpwi 3, 0
  04d79a4  bt 2, 0x4d79c0
  04d79a8  lis 3, 102
  04d79ac  addic 3, 3, -28612
  04d79b0  bl 0x5cd098
  04d79b4  nop
  04d79b8  stb 28, 17(31)
  04d79bc  b 0x4d79e4
  04d79c0  lis 3, 102
  04d79c4  addic 3, 3, -28580
  04d79c8  bl 0x5cd098
  04d79cc  nop
  04d79d0  stb 24, 17(31)
  04d79d4  ori 28, 24, 0
  04d79d8  b 0x4d79e4
  04d79dc  ori 28, 3, 0
  04d79e0  stb 28, 17(31)
  04d79e4  ori 4, 28, 0
  04d79e8  li 3, 0
  04d79ec  lbz 28, 607(1)
  04d79f0  li 6, 0
  04d79f4  ori 5, 28, 0
  04d79f8  bl 0x64f664
  04d79fc  ld 2, 40(1)
  04d7a00  cmpwi 3, 0
  04d7a04  bt 2, 0x4d7a50
  04d7a08  lis 3, 102
  04d7a0c  addic 3, 3, -28540
  04d7a10  bl 0x5cd098
  04d7a14  nop
  04d7a18  lhz 3, 610(1)
  04d7a1c  li 4, 0
  04d7a20  li 5, 60
  04d7a24  rlwinm 3, 3, 0, 30, 30
  04d7a28  subc 3, 4, 3
  04d7a2c  li 4, 50
  04d7a30  cntlzw 3, 3
  04d7a34  subc 5, 5, 4
  04d7a38  sldi 3, 3, 58
  04d7a3c  sradi 3, 3, 63
  04d7a40  and 3, 3, 5
  04d7a44  addc 3, 4, 3
  04d7a48  stw 3, 24(31)
  04d7a4c  b 0x4d7bdc
  04d7a50  lis 3, 102
  04d7a54  addic 3, 3, -28484
  04d7a58  bl 0x5cd098
  04d7a5c  nop
  04d7a60  li 3, 0
  04d7a64  addic 5, 1, 132
  04d7a68  li 4, 0
  04d7a6c  bl 0x64f524
  04d7a70  ld 2, 40(1)
  04d7a74  lis 3, 102
  04d7a78  lbz 4, 136(1)
  04d7a7c  addic 3, 3, -28396
  04d7a80  bl 0x5cd098
  04d7a84  nop
  04d7a88  lbz 3, 136(1)
  04d7a8c  ori 27, 25, 0
  04d7a90  cmpwi 3, 0
  04d7a94  bt 2, 0x4d7ae0
  04d7a98  lis 23, 102
  04d7a9c  addic 23, 23, -28364
  04d7aa0  slwi 4, 27, 3
  04d7aa4  ori 3, 23, 0
  04d7aa8  addc 5, 4, 1
  04d7aac  ori 4, 27, 0
  04d7ab0  clrldi 5, 5, 32
  04d7ab4  lbz 6, 167(5)
  04d7ab8  lbz 8, 165(5)
  04d7abc  lbz 5, 164(5)
  04d7ac0  ori 7, 8, 0
  04d7ac4  bl 0x5cd098
  04d7ac8  nop
  04d7acc  addic 27, 27, 1
  04d7ad0  lbz 3, 136(1)
  04d7ad4  clrldi 27, 27, 32
  04d7ad8  cmplw 27, 3
  04d7adc  bt 0, 0x4d7aa0
  04d7ae0  lis 4, 144
  04d7ae4  addic 3, 1, 612
  04d7ae8  addic 4, 4, -23044
  04d7aec  li 5, 33
  04d7af0  bl 0x5c5ad0
  04d7af4  nop
  04d7af8  lis 23, 102
  04d7afc  ori 3, 25, 0
  04d7b00  addic 23, 23, -28316
  04d7b04  lbz 5, 136(1)
  04d7b08  ori 4, 25, 0
  04d7b0c  cmpwi 5, 0
  04d7b10  bt 2, 0x4d7bd0
  04d7b14  addc 6, 3, 3
  04d7b18  addc 6, 3, 6
  04d7b1c  addc 9, 6, 1
  04d7b20  clrldi 9, 9, 32
  04d7b24  slwi 6, 4, 3
  04d7b28  lbz 7, 612(9)
  04d7b2c  addc 27, 1, 6
  04d7b30  clrldi 27, 27, 32
  04d7b34  lbz 6, 164(27)
  04d7b38  cmpw 6, 7
  04d7b3c  bf 2, 0x4d7bc0
  04d7b40  lbz 7, 167(27)
  04d7b44  lbz 8, 614(9)
  04d7b48  cmpw 7, 8
  04d7b4c  bf 2, 0x4d7bc0
  04d7b50  lbz 8, 165(27)
  04d7b54  lbz 10, 613(9)
  04d7b58  cmpw 8, 10
  04d7b5c  bf 2, 0x4d7bc0
  04d7b60  ori 5, 6, 0
  04d7b64  ori 3, 23, 0
  04d7b68  ori 6, 7, 0
  04d7b6c  ori 7, 8, 0
  04d7b70  bl 0x5cd098
  04d7b74  nop
  04d7b78  lhz 3, 170(27)
  04d7b7c  li 4, 0
  04d7b80  li 6, 50
  04d7b84  lbz 5, 164(27)
  04d7b88  rlwinm 3, 3, 0, 30, 30
  04d7b8c  lbz 28, 167(27)
  04d7b90  stb 5, 17(31)
  04d7b94  subc 3, 4, 3
  04d7b98  li 4, 60
  04d7b9c  cntlzw 3, 3
  04d7ba0  subc 4, 4, 6
  04d7ba4  sldi 3, 3, 58
  04d7ba8  sradi 3, 3, 63
  04d7bac  and 4, 3, 4
  04d7bb0  li 3, 11
  04d7bb4  addc 4, 6, 4
  04d7bb8  stw 4, 24(31)
  04d7bbc  b 0x4d7bd0
  04d7bc0  addic 4, 4, 1
  04d7bc4  clrldi 4, 4, 32
  04d7bc8  cmplw 4, 5
  04d7bcc  bt 0, 0x4d7b24
  04d7bd0  addic 3, 3, 1
  04d7bd4  cmplwi 3, 11
  04d7bd8  bt 0, 0x4d7b04
  04d7bdc  addic 3, 28, -1
  04d7be0  lbz 5, 17(31)
  04d7be4  addic 4, 1, 588
  04d7be8  cntlzw 3, 3
  04d7bec  rlwinm 3, 3, 27, 31, 31
  04d7bf0  xori 6, 3, 1
  04d7bf4  ori 3, 5, 0
  04d7bf8  stw 6, 12(31)
  04d7bfc  bl 0x64f6a4
  04d7c00  ld 2, 40(1)
  04d7c04  lhz 3, 588(1)
  04d7c08  slwi 3, 3, 2
  04d7c0c  bl 0x64f244
  04d7c10  ld 2, 40(1)
  04d7c14  stw 25, 8940(31)
  04d7c18  lbz 7, 17(31)
  04d7c1c  li 5, 0
  04d7c20  stw 25, 8944(31)
  04d7c24  addic 4, 31, 8940
  04d7c28  stw 25, 8948(31)
  04d7c2c  li 6, 0
  04d7c30  stb 7, 8940(31)
  04d7c34  stw 3, 8952(31)
  04d7c38  stb 25, 8941(31)
  04d7c3c  li 3, 0
  04d7c40  stb 28, 8942(31)
  04d7c44  bl 0x64f4c4
  04d7c48  ld 2, 40(1)
  04d7c4c  ori 28, 3, 0
  04d7c50  cmpwi 28, 0
  04d7c54  bt 2, 0x4d7c6c
  04d7c58  lis 3, 102
  04d7c5c  ori 4, 28, 0
  04d7c60  addic 3, 3, -28260
  04d7c64  bl 0x5cd098
  04d7c68  nop
  04d7c6c  li 3, 0
  04d7c70  li 4, 129
  04d7c74  li 5, 0
  04d7c78  li 6, 0
  04d7c7c  bl 0x64f664
  04d7c80  ld 2, 40(1)
  04d7c84  cntlzw 4, 3
  04d7c88  lis 5, 1
  04d7c8c  rlwinm 4, 4, 27, 31, 31
  04d7c90  ori 5, 5, 34212
  04d7c94  cmpwi 3, 0
  04d7c98  xori 3, 4, 1
  04d7c9c  stbx 3, 31, 5
  04d7ca0  bt 2, 0x4d7d58
  04d7ca4  li 3, 49
  04d7ca8  bl 0x64f4a4
  04d7cac  ld 2, 40(1)
  04d7cb0  lis 3, 1
  04d7cb4  ori 4, 3, 34216
  04d7cb8  li 3, 0
  04d7cbc  addc 4, 31, 4
  04d7cc0  clrldi 4, 4, 32
  04d7cc4  bl 0x64ee24
  04d7cc8  ld 2, 40(1)
  04d7ccc  li 3, 49
  04d7cd0  bl 0x64f484
  04d7cd4  ld 2, 40(1)
  04d7cd8  addic 4, 1, 592
  04d7cdc  li 3, 129
  04d7ce0  bl 0x64f6a4
  04d7ce4  ld 2, 40(1)
  04d7ce8  lis 5, 1
  04d7cec  lhz 3, 594(1)
  04d7cf0  li 4, 1470
  04d7cf4  lhz 7, 592(1)
  04d7cf8  ori 5, 5, 34220
  04d7cfc  subc 4, 4, 3
  04d7d00  lis 8, 1
  04d7d04  cntlzw 4, 4
  04d7d08  lis 6, 1
  04d7d0c  ori 8, 8, 34224
  04d7d10  li 9, 720
  04d7d14  stwx 7, 31, 5
  04d7d18  sldi 4, 4, 58
  04d7d1c  ori 5, 6, 34228
  04d7d20  subc 6, 9, 3
  04d7d24  sradi 4, 4, 63
  04d7d28  lis 10, 1
  04d7d2c  stwx 3, 31, 8
  04d7d30  and 4, 4, 6
  04d7d34  ori 8, 10, 34232
  04d7d38  addc 4, 3, 4
  04d7d3c  stwx 7, 31, 5
  04d7d40  ori 3, 31, 0
  04d7d44  stwx 4, 31, 8
  04d7d48  bl 0x4d72d8
  04d7d4c  li 3, 129
  04d7d50  stb 3, 17(31)
  04d7d54  b 0x4d7d78
  04d7d58  lis 3, 1
  04d7d5c  lis 4, 1
  04d7d60  lhz 5, 588(1)
  04d7d64  ori 3, 3, 34220
  04d7d68  lhz 6, 590(1)
  04d7d6c  ori 4, 4, 34224
  04d7d70  stwx 5, 31, 3
  04d7d74  stwx 6, 31, 4
  04d7d78  li 3, 2
  04d7d7c  bl 0x64f304
  04d7d80  ld 2, 40(1)
  04d7d84  lis 3, 1
  04d7d88  lis 4, 1
  04d7d8c  ori 28, 3, 34220
  04d7d90  ori 27, 4, 34224
  04d7d94  lhz 4, 588(1)
  04d7d98  addic 3, 31, 7480
  04d7d9c  lhz 5, 590(1)
  04d7da0  li 8, 8
  04d7da4  lwzx 6, 31, 28
  04d7da8  lwzx 9, 31, 27
  04d7dac  ori 7, 9, 0
  04d7db0  bl 0x4e54e8
  04d7db4  nop
  04d7db8  lhz 4, 588(1)
  04d7dbc  lhz 5, 590(1)
  04d7dc0  addic 3, 31, 7820
  04d7dc4  lwzx 6, 31, 28
  04d7dc8  li 8, 8
  04d7dcc  lwzx 7, 31, 27
  04d7dd0  bl 0x4e54e8
  04d7dd4  nop
  04d7dd8  lwz 4, 4(31)
  04d7ddc  lwz 5, 8(31)
  04d7de0  addic 3, 31, 7140
  04d7de4  std 25, 112(1)
  04d7de8  li 6, 0
  04d7dec  li 10, 3
  04d7df0  li 7, 8
  04d7df4  li 8, 0
  04d7df8  li 9, 2
  04d7dfc  bl 0x4e40d8
  04d7e00  nop
  04d7e04  lwz 4, 4(31)
  04d7e08  addic 3, 31, 8500
  04d7e0c  lwz 5, 8(31)
  04d7e10  li 6, 0
  04d7e14  li 7, 8
  04d7e18  std 25, 112(1)
  04d7e1c  li 10, 0
  04d7e20  li 8, 0
  04d7e24  li 9, 2
  04d7e28  bl 0x4e40d8
  04d7e2c  nop
  04d7e30  li 4, 512
  04d7e34  addic 3, 31, 6800
  04d7e38  li 5, 512
  04d7e3c  bl 0x4e580c
  04d7e40  nop
  04d7e44  lwz 4, 4(31)
  04d7e48  addic 3, 31, 8160
  04d7e4c  lwz 5, 8(31)
  04d7e50  li 6, 0
  04d7e54  li 7, 8
  04d7e58  std 25, 112(1)
  04d7e5c  li 10, 0
  04d7e60  li 8, 0
  04d7e64  li 9, 0
  04d7e68  bl 0x4e40d8
  04d7e6c  nop
  04d7e70  li 4, 64
  04d7e74  ori 3, 29, 0
  04d7e78  li 5, 128
  04d7e7c  bl 0x4fe098
  04d7e80  nop
  04d7e84  lis 4, 1
  04d7e88  lis 5, 1
  04d7e8c  ori 28, 4, 34196
  04d7e90  ori 5, 5, 34200
  04d7e94  addc 4, 31, 5
  04d7e98  stwx 3, 31, 28
  04d7e9c  clrldi 4, 4, 32
  04d7ea0  bl 0x64f2a4
  04d7ea4  ld 2, 40(1)
  04d7ea8  lis 6, -16512
  04d7eac  lis 8, 16256
  04d7eb0  ori 3, 29, 0
  04d7eb4  lwzx 7, 31, 28
  04d7eb8  lis 4, 32
  04d7ebc  li 5, 128
  04d7ec0  stw 6, 0(7)
  04d7ec4  stw 8, 4(7)
  04d7ec8  stw 25, 8(7)
  04d7ecc  stw 25, 12(7)
  04d7ed0  stw 6, 16(7)
  04d7ed4  stw 6, 20(7)
  04d7ed8  stw 25, 24(7)
  04d7edc  stw 8, 28(7)
  04d7ee0  stw 8, 32(7)
  04d7ee4  stw 6, 36(7)
  04d7ee8  stw 8, 40(7)
  04d7eec  stw 8, 44(7)
  04d7ef0  stw 8, 48(7)
  04d7ef4  stw 8, 52(7)
  04d7ef8  stw 8, 56(7)
  04d7efc  stw 25, 60(7)
  04d7f00  bl 0x4fe098
  04d7f04  nop
  04d7f08  lwz 4, 1200(31)
  04d7f0c  lwz 5, 1192(31)
  04d7f10  stw 3, 8840(31)
  04d7f14  stw 25, 6764(31)
  04d7f18  subc 29, 4, 5
  04d7f1c  stw 24, 6768(31)
  04d7f20  stw 25, 20(31)
  04d7f24  bl 0x50e794
  04d7f28  nop
  04d7f2c  clrlwi 4, 29, 1
  04d7f30  lis 29, 144
  04d7f34  oris 4, 4, 8192
  04d7f38  addic 27, 29, -23532
  04d7f3c  lis 10, -21846
  04d7f40  stw 4, 0(3)
  04d7f44  lwz 3, 6764(31)
  04d7f48  ori 10, 10, 43691
  04d7f4c  mulli 4, 3, 2728
  04d7f50  mulli 6, 3, 2728
  04d7f54  mulli 7, 3, 2728
  04d7f58  mulli 8, 3, 2728
  04d7f5c  addc 4, 31, 4
  04d7f60  lwz 9, 20(31)
  04d7f64  addc 6, 31, 6
  04d7f68  addic 12, 4, 1200
  04d7f6c  addic 6, 6, 1448
  04d7f70  mulli 11, 3, 2728
  04d7f74  mulli 28, 3, 2728
  04d7f78  stw 12, -23532(29)
  04d7f7c  addc 7, 31, 7
  04d7f80  stw 6, 4(27)
  04d7f84  addc 6, 31, 8
  04d7f88  addic 7, 7, 1696
  04d7f8c  addic 6, 6, 1944
  04d7f90  mulli 12, 3, 2728
  04d7f94  stw 7, 8(27)
  04d7f98  clrldi 4, 4, 32
  04d7f9c  mulli 8, 3, 2728
  04d7fa0  addc 7, 31, 11
  04d7fa4  mulhwu 10, 10, 9
  04d7fa8  stw 6, 12(27)
  04d7fac  addic 7, 7, 2192
  04d7fb0  addc 6, 31, 28
  04d7fb4  mulli 11, 3, 2728
  04d7fb8  addic 6, 6, 2440
  04d7fbc  mulli 28, 3, 2728
  04d7fc0  stw 7, 16(27)
  04d7fc4  mulli 3, 3, 2728
  04d7fc8  addc 7, 31, 12
  04d7fcc  stw 6, 20(27)
  04d7fd0  addc 3, 31, 3
  04d7fd4  addic 7, 7, 2688
  04d7fd8  addc 6, 31, 8
  04d7fdc  srwi 8, 10, 1
  04d7fe0  addic 6, 6, 2936
  04d7fe4  stw 7, 24(27)
  04d7fe8  addc 10, 8, 8
  04d7fec  addc 7, 31, 11
  04d7ff0  addic 3, 3, 3680
  04d7ff4  stw 6, 28(27)
  04d7ff8  addic 7, 7, 3184
  04d7ffc  addc 6, 31, 28
  04d8000  addc 8, 8, 10
  04d8004  addic 6, 6, 3432
  04d8008  stw 7, 32(27)
  04d800c  subc 7, 9, 8
  04d8010  stw 3, 40(27)
  04d8014  lis 5, 4
  04d8018  stw 6, 36(27)
  04d801c  sldi 3, 7, 5
  04d8020  sldi 6, 7, 2
  04d8024  lis 7, 144
  04d8028  addc 3, 3, 6
  04d802c  lwz 6, 6768(31)
  04d8030  ori 5, 5, 80
  04d8034  addc 3, 31, 3
  04d8038  addic 3, 3, 6656
  04d803c  stw 3, -23488(7)
  04d8040  lwz 3, 1208(4)
  04d8044  stw 5, 0(3)
  04d8048  lwz 3, 1208(4)
  04d804c  stw 6, 4(3)
  04d8050  lwz 3, 1208(4)
  04d8054  addic 3, 3, 8
  04d8058  stw 3, 1208(4)
  04d805c  lwz 3, 6768(31)
  04d8060  addic 4, 3, 1
  04d8064  stw 3, 6772(31)
  04d8068  stw 4, 6768(31)
  04d806c  sync
  04d8070  lwz 3, -23532(29)
  04d8074  lis 4, 1
  04d8078  lwz 5, 1192(31)
  04d807c  li 6, 8192
  04d8080  lwz 7, -2784(26)
  04d8084  ori 29, 4, 34288
  04d8088  lwz 4, 8(3)
  04d808c  ori 3, 30, 0
  04d8090  subc 8, 4, 5
  04d8094  lis 4, 2
  04d8098  li 5, 16
  04d809c  stw 8, 0(7)
  04d80a0  stwx 6, 31, 29
  04d80a4  bl 0x4fe098
  04d80a8  nop
  04d80ac  lis 4, 1
  04d80b0  ori 6, 4, 34296
  04d80b4  lwzx 5, 31, 29
  04d80b8  slwi 5, 5, 4
  04d80bc  stwx 3, 31, 6
  04d80c0  extsw 4, 5
  04d80c4  li 5, 16
  04d80c8  ori 3, 30, 0
  04d80cc  bl 0x4fe098
  04d80d0  nop
  04d80d4  lis 4, 1
  04d80d8  ori 4, 4, 34300
  04d80dc  stwx 3, 31, 4
  04d80e0  lwz 3, -2784(26)
  04d80e4  lwz 4, 0(3)
  04d80e8  lwz 3, 4(3)
  04d80ec  cmpw 4, 3
  04d80f0  bt 2, 0x4d8114
  04d80f4  li 11, 141
  04d80f8  li 3, 30
  04d80fc  sc
  04d8100  lwz 3, -2784(26)
  04d8104  lwz 4, 0(3)
  04d8108  lwz 3, 4(3)
  04d810c  cmpw 4, 3
  04d8110  bf 2, 0x4d80f4
  04d8114  ld 0, 736(1)
  04d8118  mtlr 0
  04d811c  ld 23, 648(1)
  04d8120  ld 24, 656(1)
  04d8124  ld 25, 664(1)
  04d8128  ld 26, 672(1)
  04d812c  ld 27, 680(1)
  04d8130  ld 28, 688(1)
  04d8134  ld 29, 696(1)
  04d8138  ld 30, 704(1)
  04d813c  ld 31, 712(1)
  04d8140  addi 1, 1, 720
  04d8144  blr

FUN_004d8148:   # 0x4d8148, 0x170 bytes
  04d8148  stdu 1, -320(1)
  04d814c  mflr 0
  04d8150  std 0, 336(1)
  04d8154  std 31, 312(1)
  04d8158  lis 5, 1
  04d815c  ori 31, 3, 0
  04d8160  lis 3, 1
  04d8164  std 30, 304(1)
  04d8168  ori 5, 5, 34192
  04d816c  li 30, 0
  04d8170  ori 6, 3, 34193
  04d8174  ori 3, 31, 0
  04d8178  stbx 30, 31, 5
  04d817c  std 29, 296(1)
  04d8180  std 28, 288(1)
  04d8184  std 27, 280(1)
  04d8188  std 26, 272(1)
  04d818c  stbx 30, 31, 6
  04d8190  bl 0x4d7464
  04d8194  lwz 4, 0(31)
  04d8198  ori 3, 31, 0
  04d819c  std 2, 40(1)
  04d81a0  lwz 4, 12(4)
  04d81a4  lwz 5, 0(4)
  04d81a8  lwz 2, 4(4)
  04d81ac  mtctr 5
  04d81b0  bcctrl 20, 30
  04d81b4  lis 3, 144
  04d81b8  ld 2, 40(1)
  04d81bc  lwz 3, 11980(3)
  04d81c0  bl 0x50436c
  04d81c4  nop
  04d81c8  ori 29, 3, 0
  04d81cc  li 4, 96
  04d81d0  li 5, 64
  04d81d4  bl 0x4fe098
  04d81d8  nop
  04d81dc  ori 28, 3, 0
  04d81e0  ori 3, 29, 0
  04d81e4  li 4, 48
  04d81e8  li 5, 64
  04d81ec  bl 0x4fe098
  04d81f0  nop
  04d81f4  ori 29, 3, 0
  04d81f8  lis 4, 1
  04d81fc  lwz 3, 1192(31)
  04d8200  lis 5, 1
  04d8204  ori 7, 4, 34204
  04d8208  subc 6, 28, 3
  04d820c  ori 5, 5, 34208
  04d8210  subc 8, 29, 3
  04d8214  addic 4, 1, 112
  04d8218  stwx 6, 31, 7
  04d821c  ori 3, 28, 0
  04d8220  stwx 8, 31, 5
  04d8224  bl 0x64f2a4
  04d8228  ld 2, 40(1)
  04d822c  lis 4, 144
  04d8230  addic 27, 1, 116
  04d8234  addic 4, 4, -23188
  04d8238  ori 3, 27, 0
  04d823c  li 5, 96
  04d8240  bl 0x5c5ad0
  04d8244  nop
  04d8248  addic 26, 1, 212
  04d824c  lis 4, 144
  04d8250  ori 3, 26, 0
  04d8254  li 5, 48
  04d8258  addic 4, 4, -23092
  04d825c  bl 0x5c5ad0
  04d8260  nop
  04d8264  ori 3, 28, 0
  04d8268  ori 4, 27, 0
  04d826c  li 5, 96
  04d8270  bl 0x5c5ad0
  04d8274  nop
  04d8278  ori 3, 29, 0
  04d827c  ori 4, 26, 0
  04d8280  li 5, 48
  04d8284  bl 0x5c5ad0
  04d8288  nop
  04d828c  stw 30, 8920(31)
  04d8290  ld 0, 336(1)
  04d8294  mtlr 0
  04d8298  ld 26, 272(1)
  04d829c  ld 27, 280(1)
  04d82a0  ld 28, 288(1)
  04d82a4  ld 29, 296(1)
  04d82a8  ld 30, 304(1)
  04d82ac  ld 31, 312(1)
  04d82b0  addi 1, 1, 320
  04d82b4  blr

idol_draw::BindFragmentProgram:   # 0x4d82b8, 0x134 bytes
  04d82b8  sldi 3, 5, 3
  04d82bc  lis 5, 271
  04d82c0  addc 6, 3, 3
  04d82c4  addic 5, 5, -6544
  04d82c8  addc 3, 3, 6
  04d82cc  lis 6, 4
  04d82d0  addc 9, 5, 3
  04d82d4  lwz 3, 8(4)
  04d82d8  clrldi 9, 9, 32
  04d82dc  ori 5, 6, 2276
  04d82e0  lwz 6, 0(9)
  04d82e4  stw 5, 0(3)
  04d82e8  clrlwi 5, 6, 3
  04d82ec  lwz 3, 8(4)
  04d82f0  lis 6, 4
  04d82f4  ori 5, 5, 1
  04d82f8  stw 5, 4(3)
  04d82fc  lwz 3, 8(4)
  04d8300  lwz 7, 4(9)
  04d8304  addic 5, 3, 8
  04d8308  stw 5, 8(4)
  04d830c  ori 5, 6, 8180
  04d8310  stw 5, 8(3)
  04d8314  lwz 3, 8(4)
  04d8318  stw 7, 4(3)
  04d831c  lwz 5, 8(4)
  04d8320  lhz 8, 8(9)
  04d8324  addic 5, 5, 8
  04d8328  lhz 7, 10(9)
  04d832c  cmpwi 8, 0
  04d8330  lhz 6, 12(9)
  04d8334  ori 3, 5, 0
  04d8338  stw 5, 8(4)
  04d833c  bt 2, 0x4d8398
  04d8340  li 10, 0
  04d8344  clrlwi 3, 8, 31
  04d8348  cmpwi 3, 0
  04d834c  bt 2, 0x4d837c
  04d8350  addic 3, 10, 2880
  04d8354  clrldi 5, 5, 32
  04d8358  oris 3, 3, 4
  04d835c  clrlwi 11, 7, 31
  04d8360  rlwimi 11, 6, 4, 27, 27
  04d8364  stw 3, 0(5)
  04d8368  lwz 3, 8(4)
  04d836c  stw 11, 4(3)
  04d8370  lwz 5, 8(4)
  04d8374  addic 5, 5, 8
  04d8378  stw 5, 8(4)
  04d837c  srwi 8, 8, 1
  04d8380  ori 3, 5, 0
  04d8384  cmpwi 8, 0
  04d8388  srwi 7, 7, 1
  04d838c  srwi 6, 6, 1
  04d8390  addic 10, 10, 4
  04d8394  bf 2, 0x4d8344
  04d8398  lis 5, 4
  04d839c  lbz 8, 20(9)
  04d83a0  li 6, 2
  04d83a4  lwz 9, 16(9)
  04d83a8  clrldi 3, 3, 32
  04d83ac  ori 5, 5, 7520
  04d83b0  li 7, 2
  04d83b4  subc 6, 8, 6
  04d83b8  subc 7, 7, 8
  04d83bc  sradi 6, 6, 63
  04d83c0  stw 5, 0(3)
  04d83c4  and 3, 6, 7
  04d83c8  lwz 5, 8(4)
  04d83cc  addc 3, 8, 3
  04d83d0  slwi 3, 3, 24
  04d83d4  or 3, 9, 3
  04d83d8  stw 3, 4(5)
  04d83dc  lwz 3, 8(4)
  04d83e0  addic 3, 3, 8
  04d83e4  stw 3, 8(4)
  04d83e8  blr

idol_draw::BindVertexProgram:   # 0x4d83ec, 0x2b4 bytes
  04d83ec  stdu 1, -192(1)
  04d83f0  mflr 0
  04d83f4  std 0, 208(1)
  04d83f8  sldi 3, 5, 4
  04d83fc  lis 5, 271
  04d8400  addc 6, 3, 3
  04d8404  addic 5, 5, -7376
  04d8408  std 31, 184(1)
  04d840c  addc 3, 3, 6
  04d8410  std 29, 168(1)
  04d8414  ori 31, 4, 0
  04d8418  addc 29, 5, 3
  04d841c  clrldi 29, 29, 32
  04d8420  std 30, 176(1)
  04d8424  std 28, 160(1)
  04d8428  std 27, 152(1)
  04d842c  std 26, 144(1)
  04d8430  std 25, 136(1)
  04d8434  std 24, 128(1)
  04d8438  ori 3, 29, 0
  04d843c  bl 0x50f3b8
  04d8440  nop
  04d8444  ori 27, 3, 0
  04d8448  ori 3, 29, 0
  04d844c  addic 4, 1, 118
  04d8450  bl 0x50f2b0
  04d8454  nop
  04d8458  lis 3, 8
  04d845c  lhz 26, 120(1)
  04d8460  li 25, 0
  04d8464  lwz 5, 8(31)
  04d8468  ori 3, 3, 7836
  04d846c  lhz 6, 118(1)
  04d8470  srwi 24, 26, 3
  04d8474  addic 4, 5, 12
  04d8478  cmpwi 24, 0
  04d847c  rlwinm 28, 26, 2, 27, 29
  04d8480  stw 3, 0(5)
  04d8484  stw 6, 4(5)
  04d8488  ori 3, 4, 0
  04d848c  stw 6, 8(5)
  04d8490  ori 30, 25, 0
  04d8494  stw 4, 8(31)
  04d8498  bt 2, 0x4d84fc
  04d849c  ori 3, 4, 0
  04d84a0  lwz 7, 8(31)
  04d84a4  lis 4, 128
  04d84a8  li 5, 64
  04d84ac  ori 6, 4, 2944
  04d84b0  ori 4, 27, 0
  04d84b4  stw 6, 0(3)
  04d84b8  addic 3, 7, 4
  04d84bc  bl 0x5e6424
  04d84c0  nop
  04d84c4  lwz 3, 8(31)
  04d84c8  addic 4, 27, 64
  04d84cc  li 5, 64
  04d84d0  addic 3, 3, 68
  04d84d4  bl 0x5e6424
  04d84d8  nop
  04d84dc  lwz 4, 8(31)
  04d84e0  addic 25, 25, 1
  04d84e4  addic 27, 27, 128
  04d84e8  addic 4, 4, 132
  04d84ec  cmplw 25, 24
  04d84f0  ori 3, 4, 0
  04d84f4  stw 4, 8(31)
  04d84f8  bt 0, 0x4d849c
  04d84fc  cmpwi 28, 0
  04d8500  ori 4, 3, 0
  04d8504  bt 2, 0x4d8560
  04d8508  rlwinm 4, 26, 20, 9, 11
  04d850c  cmpwi 28, 0
  04d8510  ori 4, 4, 2944
  04d8514  stw 4, 0(3)
  04d8518  bt 2, 0x4d854c
  04d851c  ori 3, 27, 0
  04d8520  ori 4, 30, 0
  04d8524  ori 27, 28, 0
  04d8528  addic 4, 4, 4
  04d852c  lwz 6, 8(31)
  04d8530  addic 27, 27, -1
  04d8534  clrldi 5, 4, 32
  04d8538  lwz 7, 0(3)
  04d853c  cmpwi 27, 0
  04d8540  addic 3, 3, 4
  04d8544  stwx 7, 6, 5
  04d8548  bt 1, 0x4d8528
  04d854c  addic 3, 28, 1
  04d8550  slwi 4, 3, 2
  04d8554  lwz 3, 8(31)
  04d8558  addc 4, 3, 4
  04d855c  stw 4, 8(31)
  04d8560  lis 3, 4
  04d8564  clrldi 4, 4, 32
  04d8568  lwz 5, 8(31)
  04d856c  ori 3, 3, 8176
  04d8570  lhz 6, 122(1)
  04d8574  stw 3, 0(4)
  04d8578  lwz 4, 8(31)
  04d857c  stw 6, 4(5)
  04d8580  addic 3, 4, 8
  04d8584  lbz 5, 124(1)
  04d8588  cmpwi 5, 32
  04d858c  stw 3, 8(31)
  04d8590  bt 1, 0x4d85b4
  04d8594  lis 3, 4
  04d8598  lwz 28, 8(31)
  04d859c  lis 5, 32
  04d85a0  ori 3, 3, 7928
  04d85a4  ori 5, 5, 65535
  04d85a8  stw 3, 8(4)
  04d85ac  stw 5, 4(28)
  04d85b0  b 0x4d85d0
  04d85b4  lis 3, 4
  04d85b8  lwz 28, 8(31)
  04d85bc  lis 5, 48
  04d85c0  ori 3, 3, 7928
  04d85c4  ori 5, 5, 65535
  04d85c8  stw 3, 8(4)
  04d85cc  stw 5, 4(28)
  04d85d0  addic 4, 28, 8
  04d85d4  ori 3, 29, 0
  04d85d8  stw 4, 8(31)
  04d85dc  bl 0x50f3c0
  04d85e0  nop
  04d85e4  ori 28, 3, 0
  04d85e8  stw 30, 112(1)
  04d85ec  sth 30, 116(1)
  04d85f0  cmpwi 28, 0
  04d85f4  bt 2, 0x4d8670
  04d85f8  ori 3, 29, 0
  04d85fc  addic 5, 1, 116
  04d8600  addic 6, 1, 112
  04d8604  ori 4, 30, 0
  04d8608  bl 0x50f3c8
  04d860c  nop
  04d8610  lwz 3, 8(31)
  04d8614  lwz 5, 112(1)
  04d8618  lis 7, 20
  04d861c  addic 4, 3, 8
  04d8620  lhz 6, 116(1)
  04d8624  addic 30, 30, 1
  04d8628  clrldi 30, 30, 32
  04d862c  stw 4, 8(31)
  04d8630  ori 4, 7, 7932
  04d8634  stw 6, 4(3)
  04d8638  cmplw 28, 30
  04d863c  stw 4, 0(3)
  04d8640  lwz 4, 0(5)
  04d8644  lwz 6, 4(5)
  04d8648  lwz 7, 8(5)
  04d864c  lwz 5, 12(5)
  04d8650  stw 4, 8(3)
  04d8654  stw 6, 12(3)
  04d8658  stw 7, 16(3)
  04d865c  stw 5, 20(3)
  04d8660  lwz 3, 8(31)
  04d8664  addic 3, 3, 16
  04d8668  stw 3, 8(31)
  04d866c  bt 1, 0x4d85f8
  04d8670  ld 0, 208(1)
  04d8674  mtlr 0
  04d8678  ld 24, 128(1)
  04d867c  ld 25, 136(1)
  04d8680  ld 26, 144(1)
  04d8684  ld 27, 152(1)
  04d8688  ld 28, 160(1)
  04d868c  ld 29, 168(1)
  04d8690  ld 30, 176(1)
  04d8694  ld 31, 184(1)
  04d8698  addi 1, 1, 192
  04d869c  blr

FUN_004d86b0:   # 0x4d86b0, 0xc4 bytes
  04d86b0  stdu 1, -128(1)
  04d86b4  lis 4, 78
  04d86b8  lwz 3, 12(3)
  04d86bc  lis 5, 17280
  04d86c0  addi 4, 4, -31072
  04d86c4  lis 6, 17232
  04d86c8  cmpwi 3, 1
  04d86cc  lfs 1, 0(4)
  04d86d0  stw 5, 112(1)
  04d86d4  stw 6, 116(1)
  04d86d8  lfs 2, 4(4)
  04d86dc  bf 2, 0x4d86ec
  04d86e0  lis 3, 78
  04d86e4  addi 3, 3, -31072
  04d86e8  lfs 2, 8(3)
  04d86ec  lis 3, 144
  04d86f0  fmuls 1, 2, 1
  04d86f4  lis 4, 20
  04d86f8  addic 5, 3, -23532
  04d86fc  lis 7, -15536
  04d8700  ori 3, 4, 7932
  04d8704  li 6, 18
  04d8708  li 8, 2
  04d870c  lwz 5, 40(5)
  04d8710  addic 4, 1, 112
  04d8714  mtctr 8
  04d8718  lwz 9, 8(5)
  04d871c  stw 7, 124(1)
  04d8720  stfs 1, 120(1)
  04d8724  stw 3, 0(9)
  04d8728  lwz 3, 8(5)
  04d872c  stw 6, 4(3)
  04d8730  lwz 3, 8(5)
  04d8734  addic 3, 3, 8
  04d8738  stw 3, 8(5)
  04d873c  lwz 6, 0(4)
  04d8740  stw 6, 0(3)
  04d8744  lwz 3, 8(5)
  04d8748  addic 6, 3, 4
  04d874c  stw 6, 8(5)
  04d8750  lwz 6, 4(4)
  04d8754  addic 4, 4, 8
  04d8758  stw 6, 4(3)
  04d875c  lwz 3, 8(5)
  04d8760  addic 3, 3, 4
  04d8764  stw 3, 8(5)
  04d8768  bdnz 0x4d873c
  04d876c  addi 1, 1, 128
  04d8770  blr

FUN_004d8774:   # 0x4d8774, 0x3dc bytes
  04d8774  stdu 1, -128(1)
  04d8778  mflr 0
  04d877c  std 0, 144(1)
  04d8780  lis 4, 144
  04d8784  std 31, 120(1)
  04d8788  li 5, 1
  04d878c  addic 31, 4, -23532
  04d8790  lis 4, 4
  04d8794  lis 7, 4
  04d8798  ori 4, 4, 772
  04d879c  lwz 6, 20(31)
  04d87a0  ori 7, 7, 2668
  04d87a4  std 30, 112(1)
  04d87a8  lis 9, 4
  04d87ac  ori 30, 3, 0
  04d87b0  lwz 8, 8(6)
  04d87b4  stw 4, 0(8)
  04d87b8  lwz 4, 8(6)
  04d87bc  li 8, 515
  04d87c0  stw 5, 4(4)
  04d87c4  lwz 4, 8(6)
  04d87c8  addic 4, 4, 8
  04d87cc  stw 4, 8(6)
  04d87d0  lwz 4, 20(31)
  04d87d4  lwz 6, 8(4)
  04d87d8  stw 7, 0(6)
  04d87dc  lwz 6, 8(4)
  04d87e0  ori 7, 9, 872
  04d87e4  stw 8, 4(6)
  04d87e8  lwz 6, 8(4)
  04d87ec  addic 6, 6, 8
  04d87f0  lis 8, 4
  04d87f4  stw 6, 8(4)
  04d87f8  lwz 4, 20(31)
  04d87fc  li 6, 7425
  04d8800  lwz 3, 8(4)
  04d8804  stw 7, 0(3)
  04d8808  lwz 3, 8(4)
  04d880c  ori 7, 8, 2676
  04d8810  stw 6, 4(3)
  04d8814  lwz 3, 8(4)
  04d8818  addic 3, 3, 8
  04d881c  stw 3, 8(4)
  04d8820  lwz 4, 20(31)
  04d8824  ori 3, 30, 0
  04d8828  lwz 6, 8(4)
  04d882c  stw 7, 0(6)
  04d8830  lwz 6, 8(4)
  04d8834  stw 5, 4(6)
  04d8838  lwz 5, 8(4)
  04d883c  addic 6, 5, 8
  04d8840  lwz 5, 4(30)
  04d8844  lwz 7, 8(30)
  04d8848  stw 6, 8(4)
  04d884c  lwz 8, 0(30)
  04d8850  ori 6, 7, 0
  04d8854  lwz 4, 20(31)
  04d8858  std 2, 40(1)
  04d885c  lwz 7, 16(8)
  04d8860  lwz 8, 0(7)
  04d8864  lwz 2, 4(7)
  04d8868  mtctr 8
  04d886c  bcctrl 20, 30
  04d8870  lwz 3, 20(31)
  04d8874  lis 4, 4
  04d8878  ld 2, 40(1)
  04d887c  lis 5, 275
  04d8880  ori 4, 4, 404
  04d8884  lis 7, 4
  04d8888  lwz 6, 8(3)
  04d888c  ori 7, 7, 396
  04d8890  stw 4, 0(6)
  04d8894  lbz 4, 8504(30)
  04d8898  lwz 6, 8(3)
  04d889c  subc 4, 4, 5
  04d88a0  stw 4, 4(6)
  04d88a4  lwz 4, 8(3)
  04d88a8  addic 6, 4, 8
  04d88ac  stw 6, 8(3)
  04d88b0  stw 7, 8(4)
  04d88b4  lbz 4, 8505(30)
  04d88b8  lis 6, 8
  04d88bc  lwz 8, 8(3)
  04d88c0  lis 7, 4
  04d88c4  subc 4, 4, 5
  04d88c8  ori 6, 6, 436
  04d88cc  stw 4, 4(8)
  04d88d0  lwz 4, 8(3)
  04d88d4  addic 8, 4, 8
  04d88d8  stw 8, 8(3)
  04d88dc  stw 6, 8(4)
  04d88e0  lbz 4, 8506(30)
  04d88e4  lwz 9, 8(3)
  04d88e8  ori 6, 7, 408
  04d88ec  subc 4, 4, 5
  04d88f0  lis 7, 24
  04d88f4  li 8, 31
  04d88f8  ori 7, 7, 520
  04d88fc  stw 4, 4(9)
  04d8900  lbz 4, 8507(30)
  04d8904  lwz 9, 8(3)
  04d8908  subc 4, 4, 5
  04d890c  stw 4, 8(9)
  04d8910  lwz 4, 8(3)
  04d8914  addic 9, 4, 12
  04d8918  stw 9, 8(3)
  04d891c  stw 6, 12(4)
  04d8920  lbz 4, 8541(30)
  04d8924  subc 4, 4, 5
  04d8928  lwz 5, 8(3)
  04d892c  stw 4, 4(5)
  04d8930  lwz 4, 8(3)
  04d8934  lhz 6, 8552(30)
  04d8938  addic 5, 4, 8
  04d893c  lhz 9, 8554(30)
  04d8940  cntlzw 9, 9
  04d8944  stw 5, 8(3)
  04d8948  cntlzw 5, 6
  04d894c  stw 7, 8(4)
  04d8950  lbz 6, 8540(30)
  04d8954  lbz 7, 8502(30)
  04d8958  subc 4, 8, 9
  04d895c  slwi 6, 6, 5
  04d8960  subc 5, 8, 5
  04d8964  lbz 8, 8500(30)
  04d8968  or 6, 7, 6
  04d896c  lbz 7, 8501(30)
  04d8970  slwi 5, 5, 16
  04d8974  slwi 8, 8, 8
  04d8978  slwi 7, 7, 12
  04d897c  slwi 4, 4, 24
  04d8980  or 7, 8, 7
  04d8984  or 6, 6, 7
  04d8988  or 5, 6, 5
  04d898c  or 4, 5, 4
  04d8990  lwz 5, 8(3)
  04d8994  lis 6, 4
  04d8998  ori 6, 6, 556
  04d899c  stw 4, 4(5)
  04d89a0  lwz 4, 8(3)
  04d89a4  lwz 5, 8524(30)
  04d89a8  stw 5, 8(4)
  04d89ac  lwz 4, 8(3)
  04d89b0  lwz 5, 8508(30)
  04d89b4  stw 5, 12(4)
  04d89b8  lwz 4, 8(3)
  04d89bc  lwz 5, 8544(30)
  04d89c0  stw 5, 16(4)
  04d89c4  lwz 4, 8(3)
  04d89c8  lwz 5, 8512(30)
  04d89cc  stw 5, 20(4)
  04d89d0  lwz 4, 8(3)
  04d89d4  lwz 5, 8528(30)
  04d89d8  stw 5, 24(4)
  04d89dc  lwz 4, 8(3)
  04d89e0  addic 5, 4, 28
  04d89e4  stw 5, 8(3)
  04d89e8  stw 6, 28(4)
  04d89ec  lwz 4, 8548(30)
  04d89f0  lis 5, 16
  04d89f4  lwz 7, 8(3)
  04d89f8  ori 5, 5, 640
  04d89fc  lis 6, 4
  04d8a00  stw 4, 4(7)
  04d8a04  lwz 4, 8(3)
  04d8a08  addic 7, 4, 8
  04d8a0c  stw 7, 8(3)
  04d8a10  stw 5, 8(4)
  04d8a14  lwz 4, 8532(30)
  04d8a18  ori 5, 6, 544
  04d8a1c  lwz 7, 8(3)
  04d8a20  lis 6, 4
  04d8a24  ori 6, 6, 696
  04d8a28  stw 4, 4(7)
  04d8a2c  lwz 4, 8(3)
  04d8a30  lwz 7, 8536(30)
  04d8a34  stw 7, 8(4)
  04d8a38  lwz 4, 8(3)
  04d8a3c  lwz 7, 8516(30)
  04d8a40  stw 7, 12(4)
  04d8a44  lwz 4, 8(3)
  04d8a48  lwz 7, 8520(30)
  04d8a4c  stw 7, 16(4)
  04d8a50  lwz 4, 8(3)
  04d8a54  addic 7, 4, 20
  04d8a58  stw 7, 8(3)
  04d8a5c  stw 5, 20(4)
  04d8a60  lbz 4, 8503(30)
  04d8a64  lwz 7, 8(3)
  04d8a68  lis 5, 8
  04d8a6c  ori 5, 5, 512
  04d8a70  stw 4, 4(7)
  04d8a74  lwz 4, 8(3)
  04d8a78  addic 7, 4, 8
  04d8a7c  stw 7, 8(3)
  04d8a80  stw 6, 8(4)
  04d8a84  lhz 4, 8556(30)
  04d8a88  lhz 6, 8558(30)
  04d8a8c  lwz 7, 8(3)
  04d8a90  rlwimi 4, 6, 16, 0, 15
  04d8a94  lis 6, 4
  04d8a98  ori 6, 6, 7560
  04d8a9c  stw 4, 4(7)
  04d8aa0  lwz 4, 8(3)
  04d8aa4  addic 7, 4, 8
  04d8aa8  stw 7, 8(3)
  04d8aac  stw 5, 8(4)
  04d8ab0  lhz 4, 8556(30)
  04d8ab4  lhz 5, 8552(30)
  04d8ab8  lwz 7, 8(3)
  04d8abc  rlwimi 4, 5, 16, 0, 15
  04d8ac0  lis 5, 4
  04d8ac4  stw 4, 4(7)
  04d8ac8  lhz 4, 8558(30)
  04d8acc  lhz 7, 8554(30)
  04d8ad0  lwz 8, 8(3)
  04d8ad4  rlwimi 4, 7, 16, 0, 15
  04d8ad8  ori 5, 5, 804
  04d8adc  stw 4, 8(8)
  04d8ae0  lwz 4, 8(3)
  04d8ae4  addic 7, 4, 12
  04d8ae8  stw 7, 8(3)
  04d8aec  stw 6, 12(4)
  04d8af0  lhz 4, 8554(30)
  04d8af4  lwz 7, 8(3)
  04d8af8  rlwinm 6, 4, 20, 31, 31
  04d8afc  subc 4, 4, 6
  04d8b00  lis 6, 1
  04d8b04  ori 4, 4, 4096
  04d8b08  stw 4, 4(7)
  04d8b0c  lwz 4, 8(3)
  04d8b10  addic 4, 4, 8
  04d8b14  stw 4, 8(3)
  04d8b18  lwz 3, 20(31)
  04d8b1c  lwz 4, 8(3)
  04d8b20  stw 5, 0(4)
  04d8b24  lwz 4, 8(3)
  04d8b28  stw 6, 4(4)
  04d8b2c  lwz 4, 8(3)
  04d8b30  addic 4, 4, 8
  04d8b34  stw 4, 8(3)
  04d8b38  ld 0, 144(1)
  04d8b3c  mtlr 0
  04d8b40  ld 30, 112(1)
  04d8b44  ld 31, 120(1)
  04d8b48  addi 1, 1, 128
  04d8b4c  blr

FUN_004d8b50:   # 0x4d8b50, 0x268 bytes
  04d8b50  stdu 1, -128(1)
  04d8b54  mflr 0
  04d8b58  std 0, 144(1)
  04d8b5c  std 30, 112(1)
  04d8b60  lis 6, 144
  04d8b64  std 31, 120(1)
  04d8b68  ori 30, 3, 0
  04d8b6c  ori 31, 4, 0
  04d8b70  li 4, 48
  04d8b74  li 5, 16
  04d8b78  lwz 3, -23488(6)
  04d8b7c  bl 0x4fe098
  04d8b80  nop
  04d8b84  lis 6, -16512
  04d8b88  lis 9, 16448
  04d8b8c  lis 4, 144
  04d8b90  sldi 8, 31, 2
  04d8b94  li 10, 0
  04d8b98  stw 6, 0(3)
  04d8b9c  addic 4, 4, -23532
  04d8ba0  extsw 8, 8
  04d8ba4  stw 9, 4(3)
  04d8ba8  stw 6, 12(3)
  04d8bac  lis 5, 16384
  04d8bb0  stw 10, 8(3)
  04d8bb4  lis 7, 16256
  04d8bb8  stw 9, 16(3)
  04d8bbc  lis 11, 4
  04d8bc0  lwzx 9, 4, 8
  04d8bc4  ori 11, 11, 5952
  04d8bc8  stw 6, 20(3)
  04d8bcc  stw 5, 24(3)
  04d8bd0  stw 7, 28(3)
  04d8bd4  li 5, 4130
  04d8bd8  stw 6, 32(3)
  04d8bdc  stw 6, 36(3)
  04d8be0  stw 10, 40(3)
  04d8be4  stw 7, 44(3)
  04d8be8  lwz 6, 8(9)
  04d8bec  lis 7, 4
  04d8bf0  lis 31, -32768
  04d8bf4  ori 7, 7, 5956
  04d8bf8  stw 11, 0(6)
  04d8bfc  lwz 6, 8(9)
  04d8c00  stw 5, 4(6)
  04d8c04  lwz 6, 8(9)
  04d8c08  addic 6, 6, 8
  04d8c0c  stw 6, 8(9)
  04d8c10  lwzx 6, 4, 8
  04d8c14  lis 9, 4
  04d8c18  ori 9, 9, 5760
  04d8c1c  lwz 12, 8(6)
  04d8c20  stw 7, 0(12)
  04d8c24  lwz 12, 8(6)
  04d8c28  stw 5, 4(12)
  04d8c2c  lwz 5, 8(6)
  04d8c30  lwz 12, 1192(30)
  04d8c34  addic 5, 5, 8
  04d8c38  subc 3, 3, 12
  04d8c3c  lis 12, 4
  04d8c40  stw 5, 8(6)
  04d8c44  lwzx 5, 4, 8
  04d8c48  or 6, 3, 31
  04d8c4c  ori 12, 12, 5764
  04d8c50  addic 3, 3, 8
  04d8c54  lwz 30, 8(5)
  04d8c58  or 3, 3, 31
  04d8c5c  stw 9, 0(30)
  04d8c60  lwz 9, 8(5)
  04d8c64  stw 6, 4(9)
  04d8c68  lwz 6, 8(5)
  04d8c6c  addic 6, 6, 8
  04d8c70  stw 6, 8(5)
  04d8c74  lwzx 5, 4, 8
  04d8c78  lis 6, 16396
  04d8c7c  ori 6, 6, 5908
  04d8c80  lwz 9, 8(5)
  04d8c84  stw 12, 0(9)
  04d8c88  lwz 9, 8(5)
  04d8c8c  li 12, 3
  04d8c90  stw 3, 4(9)
  04d8c94  lwz 3, 8(5)
  04d8c98  addic 3, 3, 8
  04d8c9c  stw 3, 8(5)
  04d8ca0  lwzx 3, 4, 8
  04d8ca4  lis 5, 4
  04d8ca8  ori 5, 5, 6152
  04d8cac  lwz 9, 8(3)
  04d8cb0  stw 6, 0(9)
  04d8cb4  lwz 6, 8(3)
  04d8cb8  li 9, 6
  04d8cbc  stw 10, 4(6)
  04d8cc0  lwz 6, 8(3)
  04d8cc4  stw 10, 8(6)
  04d8cc8  lwz 6, 8(3)
  04d8ccc  stw 10, 12(6)
  04d8cd0  lwz 6, 8(3)
  04d8cd4  stw 5, 16(6)
  04d8cd8  lwz 6, 8(3)
  04d8cdc  stw 9, 20(6)
  04d8ce0  lwz 6, 8(3)
  04d8ce4  cntlzw 9, 10
  04d8ce8  addic 6, 6, 24
  04d8cec  rlwinm 9, 9, 27, 31, 31
  04d8cf0  xori 9, 9, 1
  04d8cf4  stw 6, 8(3)
  04d8cf8  cntlzw 6, 12
  04d8cfc  lwzx 3, 4, 8
  04d8d00  rlwinm 6, 6, 27, 31, 31
  04d8d04  xori 6, 6, 1
  04d8d08  lwz 12, 8(3)
  04d8d0c  addc 6, 9, 6
  04d8d10  addic 31, 12, 4
  04d8d14  slwi 6, 6, 18
  04d8d18  lis 9, 512
  04d8d1c  ori 6, 6, 6164
  04d8d20  stw 31, 8(3)
  04d8d24  oris 6, 6, 16384
  04d8d28  stw 6, 0(12)
  04d8d2c  lwz 12, 8(3)
  04d8d30  addic 31, 12, 4
  04d8d34  li 6, 2
  04d8d38  stw 31, 8(3)
  04d8d3c  lwzx 3, 4, 8
  04d8d40  stw 9, 0(12)
  04d8d44  lwz 9, 8(3)
  04d8d48  stw 5, 0(9)
  04d8d4c  lwz 5, 8(3)
  04d8d50  stw 10, 4(5)
  04d8d54  lwz 5, 8(3)
  04d8d58  addic 5, 5, 8
  04d8d5c  stw 5, 8(3)
  04d8d60  lwzx 3, 4, 8
  04d8d64  lwz 5, 8(3)
  04d8d68  stw 11, 0(5)
  04d8d6c  lwz 5, 8(3)
  04d8d70  stw 6, 4(5)
  04d8d74  lwz 5, 8(3)
  04d8d78  addic 5, 5, 8
  04d8d7c  stw 5, 8(3)
  04d8d80  lwzx 3, 4, 8
  04d8d84  lwz 4, 8(3)
  04d8d88  stw 7, 0(4)
  04d8d8c  lwz 4, 8(3)
  04d8d90  stw 6, 4(4)
  04d8d94  lwz 4, 8(3)
  04d8d98  addic 4, 4, 8
  04d8d9c  stw 4, 8(3)
  04d8da0  ld 0, 144(1)
  04d8da4  mtlr 0
  04d8da8  ld 30, 112(1)
  04d8dac  ld 31, 120(1)
  04d8db0  addi 1, 1, 128
  04d8db4  blr

FUN_004d8db8:   # 0x4d8db8, 0x5f4 bytes
  04d8db8  stdu 1, -128(1)
  04d8dbc  mflr 0
  04d8dc0  std 0, 144(1)
  04d8dc4  std 31, 120(1)
  04d8dc8  lis 4, 144
  04d8dcc  ori 31, 3, 0
  04d8dd0  addic 4, 4, -23532
  04d8dd4  lis 3, 4
  04d8dd8  lis 6, 4
  04d8ddc  ori 3, 3, 404
  04d8de0  std 30, 112(1)
  04d8de4  ori 6, 6, 396
  04d8de8  lwz 30, 20(4)
  04d8dec  lis 4, 275
  04d8df0  lwz 5, 8(30)
  04d8df4  stw 3, 0(5)
  04d8df8  lbz 3, 8504(31)
  04d8dfc  lwz 5, 8(30)
  04d8e00  subc 3, 3, 4
  04d8e04  stw 3, 4(5)
  04d8e08  lwz 3, 8(30)
  04d8e0c  addic 5, 3, 8
  04d8e10  stw 5, 8(30)
  04d8e14  stw 6, 8(3)
  04d8e18  lbz 3, 8505(31)
  04d8e1c  lis 5, 8
  04d8e20  lwz 7, 8(30)
  04d8e24  lis 6, 4
  04d8e28  subc 3, 3, 4
  04d8e2c  ori 5, 5, 436
  04d8e30  stw 3, 4(7)
  04d8e34  lwz 3, 8(30)
  04d8e38  addic 7, 3, 8
  04d8e3c  stw 7, 8(30)
  04d8e40  stw 5, 8(3)
  04d8e44  lbz 3, 8506(31)
  04d8e48  lwz 8, 8(30)
  04d8e4c  ori 5, 6, 408
  04d8e50  subc 3, 3, 4
  04d8e54  lis 6, 24
  04d8e58  li 7, 31
  04d8e5c  ori 6, 6, 520
  04d8e60  stw 3, 4(8)
  04d8e64  lbz 3, 8507(31)
  04d8e68  lwz 8, 8(30)
  04d8e6c  subc 3, 3, 4
  04d8e70  stw 3, 8(8)
  04d8e74  lwz 3, 8(30)
  04d8e78  addic 8, 3, 12
  04d8e7c  stw 8, 8(30)
  04d8e80  stw 5, 12(3)
  04d8e84  lbz 3, 8541(31)
  04d8e88  subc 3, 3, 4
  04d8e8c  lwz 4, 8(30)
  04d8e90  stw 3, 4(4)
  04d8e94  lwz 3, 8(30)
  04d8e98  lhz 5, 8552(31)
  04d8e9c  addic 4, 3, 8
  04d8ea0  lhz 8, 8554(31)
  04d8ea4  cntlzw 8, 8
  04d8ea8  stw 4, 8(30)
  04d8eac  cntlzw 4, 5
  04d8eb0  stw 6, 8(3)
  04d8eb4  lbz 5, 8540(31)
  04d8eb8  lbz 6, 8502(31)
  04d8ebc  subc 3, 7, 8
  04d8ec0  slwi 5, 5, 5
  04d8ec4  subc 4, 7, 4
  04d8ec8  lbz 7, 8500(31)
  04d8ecc  or 5, 6, 5
  04d8ed0  lbz 6, 8501(31)
  04d8ed4  slwi 4, 4, 16
  04d8ed8  slwi 7, 7, 8
  04d8edc  slwi 6, 6, 12
  04d8ee0  slwi 3, 3, 24
  04d8ee4  or 6, 7, 6
  04d8ee8  or 5, 5, 6
  04d8eec  or 4, 5, 4
  04d8ef0  or 3, 4, 3
  04d8ef4  lwz 4, 8(30)
  04d8ef8  lis 5, 4
  04d8efc  ori 5, 5, 556
  04d8f00  stw 3, 4(4)
  04d8f04  lwz 3, 8(30)
  04d8f08  lwz 4, 8524(31)
  04d8f0c  stw 4, 8(3)
  04d8f10  lwz 3, 8(30)
  04d8f14  lwz 4, 8508(31)
  04d8f18  stw 4, 12(3)
  04d8f1c  lwz 3, 8(30)
  04d8f20  lwz 4, 8544(31)
  04d8f24  stw 4, 16(3)
  04d8f28  lwz 3, 8(30)
  04d8f2c  lwz 4, 8512(31)
  04d8f30  stw 4, 20(3)
  04d8f34  lwz 3, 8(30)
  04d8f38  lwz 4, 8528(31)
  04d8f3c  stw 4, 24(3)
  04d8f40  lwz 3, 8(30)
  04d8f44  addic 4, 3, 28
  04d8f48  stw 4, 8(30)
  04d8f4c  stw 5, 28(3)
  04d8f50  lwz 3, 8548(31)
  04d8f54  lis 4, 16
  04d8f58  lwz 6, 8(30)
  04d8f5c  ori 4, 4, 640
  04d8f60  lis 5, 4
  04d8f64  stw 3, 4(6)
  04d8f68  lwz 3, 8(30)
  04d8f6c  addic 6, 3, 8
  04d8f70  stw 6, 8(30)
  04d8f74  stw 4, 8(3)
  04d8f78  lwz 3, 8532(31)
  04d8f7c  ori 4, 5, 544
  04d8f80  lwz 6, 8(30)
  04d8f84  lis 5, 4
  04d8f88  ori 5, 5, 696
  04d8f8c  stw 3, 4(6)
  04d8f90  lwz 3, 8(30)
  04d8f94  lwz 6, 8536(31)
  04d8f98  stw 6, 8(3)
  04d8f9c  lwz 3, 8(30)
  04d8fa0  lwz 6, 8516(31)
  04d8fa4  stw 6, 12(3)
  04d8fa8  lwz 3, 8(30)
  04d8fac  lwz 6, 8520(31)
  04d8fb0  stw 6, 16(3)
  04d8fb4  lwz 3, 8(30)
  04d8fb8  addic 6, 3, 20
  04d8fbc  stw 6, 8(30)
  04d8fc0  stw 4, 20(3)
  04d8fc4  lbz 3, 8503(31)
  04d8fc8  lwz 6, 8(30)
  04d8fcc  lis 4, 8
  04d8fd0  ori 4, 4, 512
  04d8fd4  stw 3, 4(6)
  04d8fd8  lwz 3, 8(30)
  04d8fdc  addic 6, 3, 8
  04d8fe0  stw 6, 8(30)
  04d8fe4  stw 5, 8(3)
  04d8fe8  lhz 3, 8556(31)
  04d8fec  lhz 5, 8558(31)
  04d8ff0  lwz 6, 8(30)
  04d8ff4  rlwimi 3, 5, 16, 0, 15
  04d8ff8  lis 5, 4
  04d8ffc  ori 5, 5, 7560
  04d9000  stw 3, 4(6)
  04d9004  lwz 3, 8(30)
  04d9008  addic 6, 3, 8
  04d900c  stw 6, 8(30)
  04d9010  stw 4, 8(3)
  04d9014  lhz 3, 8556(31)
  04d9018  lhz 4, 8552(31)
  04d901c  rlwimi 3, 4, 16, 0, 15
  04d9020  lwz 4, 8(30)
  04d9024  stw 3, 4(4)
  04d9028  lhz 3, 8558(31)
  04d902c  lhz 4, 8554(31)
  04d9030  lwz 6, 8(30)
  04d9034  rlwimi 3, 4, 16, 0, 15
  04d9038  stw 3, 8(6)
  04d903c  lwz 3, 8(30)
  04d9040  addic 4, 3, 12
  04d9044  stw 4, 8(30)
  04d9048  stw 5, 12(3)
  04d904c  lhz 3, 8554(31)
  04d9050  lwz 5, 8(30)
  04d9054  rlwinm 4, 3, 20, 31, 31
  04d9058  subc 3, 3, 4
  04d905c  lis 4, 8
  04d9060  ori 3, 3, 4096
  04d9064  ori 4, 4, 6656
  04d9068  stw 3, 4(5)
  04d906c  lwz 3, 8(30)
  04d9070  addic 3, 3, 8
  04d9074  stw 3, 8(30)
  04d9078  lbz 3, 7356(31)
  04d907c  lbz 5, 7370(31)
  04d9080  ori 3, 3, 64
  04d9084  lwz 7, 7376(31)
  04d9088  addic 5, 5, 1
  04d908c  rlwinm 6, 3, 8, 16, 23
  04d9090  stb 3, 7356(31)
  04d9094  ori 3, 5, 8
  04d9098  lbz 5, 7357(31)
  04d909c  lbz 8, 7359(31)
  04d90a0  lbz 9, 7358(31)
  04d90a4  rlwimi 3, 5, 16, 8, 15
  04d90a8  lhz 5, 7366(31)
  04d90ac  slwi 8, 8, 2
  04d90b0  slwi 9, 9, 4
  04d90b4  lhz 10, 7364(31)
  04d90b8  or 3, 3, 6
  04d90bc  lwz 6, 7360(31)
  04d90c0  or 8, 8, 9
  04d90c4  lwz 11, 7372(31)
  04d90c8  lhz 9, 7368(31)
  04d90cc  or 3, 3, 8
  04d90d0  lwz 8, 8(30)
  04d90d4  rlwimi 5, 10, 16, 0, 15
  04d90d8  stw 4, 0(8)
  04d90dc  lwz 4, 8(30)
  04d90e0  stw 7, 4(4)
  04d90e4  lwz 4, 8(30)
  04d90e8  lis 7, 4
  04d90ec  stw 3, 8(4)
  04d90f0  lwz 3, 8(30)
  04d90f4  addic 4, 3, 12
  04d90f8  stw 4, 8(30)
  04d90fc  ori 4, 7, 6680
  04d9100  lis 7, 4
  04d9104  stw 4, 12(3)
  04d9108  lwz 8, 8(30)
  04d910c  lis 4, 4
  04d9110  slwi 3, 9, 20
  04d9114  ori 4, 4, 6208
  04d9118  or 3, 11, 3
  04d911c  stw 5, 4(8)
  04d9120  lwz 5, 8(30)
  04d9124  addic 8, 5, 8
  04d9128  stw 8, 8(30)
  04d912c  stw 4, 8(5)
  04d9130  lwz 8, 8(30)
  04d9134  ori 4, 7, 6672
  04d9138  lis 5, 4
  04d913c  lis 7, -32762
  04d9140  ori 5, 5, 6668
  04d9144  stw 3, 4(8)
  04d9148  lwz 3, 8(30)
  04d914c  addic 8, 3, 8
  04d9150  stw 8, 8(30)
  04d9154  stw 4, 8(3)
  04d9158  lwz 8, 8(30)
  04d915c  lis 3, 4
  04d9160  lis 4, 4099
  04d9164  ori 3, 3, 6664
  04d9168  ori 4, 4, 771
  04d916c  stw 6, 4(8)
  04d9170  lwz 6, 8(30)
  04d9174  addic 8, 6, 8
  04d9178  stw 8, 8(30)
  04d917c  stw 5, 8(6)
  04d9180  lwz 8, 8(30)
  04d9184  lis 5, 4
  04d9188  lis 6, 257
  04d918c  ori 5, 5, 6676
  04d9190  ori 6, 6, 8192
  04d9194  stw 7, 4(8)
  04d9198  lwz 7, 8(30)
  04d919c  addic 8, 7, 8
  04d91a0  stw 8, 8(30)
  04d91a4  stw 3, 8(7)
  04d91a8  lwz 9, 8(30)
  04d91ac  lis 3, 4
  04d91b0  li 7, 1
  04d91b4  ori 3, 3, 8152
  04d91b8  lis 8, 4
  04d91bc  stw 4, 4(9)
  04d91c0  lwz 4, 8(30)
  04d91c4  addic 9, 4, 8
  04d91c8  stw 9, 8(30)
  04d91cc  stw 5, 8(4)
  04d91d0  lwz 9, 8(30)
  04d91d4  ori 4, 8, 804
  04d91d8  lis 5, 256
  04d91dc  lis 8, 4
  04d91e0  stw 6, 4(9)
  04d91e4  lwz 6, 8(30)
  04d91e8  addic 9, 6, 8
  04d91ec  stw 9, 8(30)
  04d91f0  stw 3, 8(6)
  04d91f4  lwz 9, 8(30)
  04d91f8  ori 3, 8, 784
  04d91fc  lis 8, 4
  04d9200  li 6, 0
  04d9204  stw 7, 4(9)
  04d9208  lwz 9, 8(30)
  04d920c  addic 10, 9, 8
  04d9210  stw 10, 8(30)
  04d9214  stw 4, 8(9)
  04d9218  lwz 9, 8(30)
  04d921c  ori 4, 8, 772
  04d9220  lis 8, 4
  04d9224  stw 5, 4(9)
  04d9228  lwz 5, 8(30)
  04d922c  addic 9, 5, 8
  04d9230  stw 9, 8(30)
  04d9234  stw 3, 8(5)
  04d9238  ori 3, 8, 2676
  04d923c  lwz 8, 8(30)
  04d9240  lis 5, 4
  04d9244  stw 6, 4(8)
  04d9248  lwz 8, 8(30)
  04d924c  addic 9, 8, 8
  04d9250  stw 9, 8(30)
  04d9254  stw 4, 8(8)
  04d9258  lwz 9, 8(30)
  04d925c  ori 4, 5, 2668
  04d9260  li 5, 519
  04d9264  lis 8, 4
  04d9268  stw 6, 4(9)
  04d926c  lwz 9, 8(30)
  04d9270  addic 10, 9, 8
  04d9274  stw 10, 8(30)
  04d9278  stw 3, 8(9)
  04d927c  lwz 9, 8(30)
  04d9280  ori 3, 8, 2672
  04d9284  lis 8, 4
  04d9288  stw 7, 4(9)
  04d928c  lwz 9, 8(30)
  04d9290  ori 8, 8, 808
  04d9294  addic 10, 9, 8
  04d9298  stw 10, 8(30)
  04d929c  stw 4, 8(9)
  04d92a0  lwz 9, 8(30)
  04d92a4  lis 4, 12
  04d92a8  ori 4, 4, 816
  04d92ac  stw 5, 4(9)
  04d92b0  lwz 9, 8(30)
  04d92b4  addic 10, 9, 8
  04d92b8  stw 10, 8(30)
  04d92bc  stw 3, 8(9)
  04d92c0  lwz 10, 8(30)
  04d92c4  li 9, 255
  04d92c8  lis 3, 4
  04d92cc  stw 7, 4(10)
  04d92d0  lwz 10, 8(30)
  04d92d4  addic 11, 10, 8
  04d92d8  stw 11, 8(30)
  04d92dc  stw 8, 8(10)
  04d92e0  lwz 10, 8(30)
  04d92e4  ori 8, 3, 812
  04d92e8  lis 3, 12
  04d92ec  stw 7, 4(10)
  04d92f0  lwz 7, 8(30)
  04d92f4  addic 10, 7, 8
  04d92f8  stw 10, 8(30)
  04d92fc  stw 4, 8(7)
  04d9300  lwz 4, 8(30)
  04d9304  ori 7, 3, 828
  04d9308  ori 3, 31, 0
  04d930c  stw 5, 4(4)
  04d9310  lwz 4, 8(30)
  04d9314  stw 9, 8(4)
  04d9318  lwz 4, 8(30)
  04d931c  stw 9, 12(4)
  04d9320  lwz 4, 8(30)
  04d9324  addic 5, 4, 16
  04d9328  stw 5, 8(30)
  04d932c  stw 8, 16(4)
  04d9330  lwz 8, 8(30)
  04d9334  ori 4, 30, 0
  04d9338  li 5, 13
  04d933c  stw 9, 4(8)
  04d9340  lwz 8, 8(30)
  04d9344  addic 9, 8, 8
  04d9348  stw 9, 8(30)
  04d934c  stw 7, 8(8)
  04d9350  lwz 7, 8(30)
  04d9354  stw 6, 4(7)
  04d9358  lwz 7, 8(30)
  04d935c  stw 6, 8(7)
  04d9360  lwz 7, 8(30)
  04d9364  stw 6, 12(7)
  04d9368  lwz 6, 8(30)
  04d936c  addic 6, 6, 16
  04d9370  stw 6, 8(30)
  04d9374  bl 0x4d83ec
  04d9378  ori 3, 31, 0
  04d937c  ori 4, 30, 0
  04d9380  li 5, 17
  04d9384  bl 0x4d82b8
  04d9388  ori 3, 31, 0
  04d938c  li 4, 5
  04d9390  bl 0x4d8b50
  04d9394  ld 0, 144(1)
  04d9398  mtlr 0
  04d939c  ld 30, 112(1)
  04d93a0  ld 31, 120(1)
  04d93a4  addi 1, 1, 128
  04d93a8  blr

idol_draw::Render_SetupPasses:   # 0x4d93ac, 0x1c3c bytes
  04d93ac  stdu 1, -208(1)
  04d93b0  mflr 0
  04d93b4  std 0, 224(1)
  04d93b8  std 31, 200(1)
  04d93bc  lis 31, 144
  04d93c0  std 29, 184(1)
  04d93c4  lis 4, 102
  04d93c8  ori 29, 3, 0
  04d93cc  addic 4, 4, -28212
  04d93d0  std 30, 192(1)
  04d93d4  std 28, 176(1)
  04d93d8  std 27, 168(1)
  04d93dc  std 26, 160(1)
  04d93e0  std 25, 152(1)
  04d93e4  std 24, 144(1)
  04d93e8  std 23, 136(1)
  04d93ec  std 22, 128(1)
  04d93f0  std 21, 120(1)
  04d93f4  lwz 3, -23532(31)
  04d93f8  bl 0x50eaf8
  04d93fc  nop
  04d9400  lis 4, 102
  04d9404  lwz 3, -23532(31)
  04d9408  addic 4, 4, -28204
  04d940c  bl 0x50eaf8
  04d9410  nop
  04d9414  addic 28, 31, -23532
  04d9418  lis 4, 102
  04d941c  addic 4, 4, -28188
  04d9420  lwz 3, 4(28)
  04d9424  bl 0x50eaf8
  04d9428  nop
  04d942c  lis 4, 102
  04d9430  lwz 3, 8(28)
  04d9434  addic 4, 4, -28164
  04d9438  bl 0x50eaf8
  04d943c  nop
  04d9440  lis 4, 102
  04d9444  lwz 3, 12(28)
  04d9448  addic 4, 4, -28148
  04d944c  bl 0x50eaf8
  04d9450  nop
  04d9454  lis 4, 102
  04d9458  lwz 3, 16(28)
  04d945c  addic 4, 4, -28140
  04d9460  bl 0x50eaf8
  04d9464  nop
  04d9468  lis 4, 102
  04d946c  lwz 3, 20(28)
  04d9470  addic 4, 4, -28132
  04d9474  bl 0x50eaf8
  04d9478  nop
  04d947c  lis 4, 102
  04d9480  lwz 3, 24(28)
  04d9484  addic 4, 4, -28116
  04d9488  bl 0x50eaf8
  04d948c  nop
  04d9490  lis 4, 102
  04d9494  lwz 3, 28(28)
  04d9498  addic 4, 4, -28100
  04d949c  bl 0x50eaf8
  04d94a0  nop
  04d94a4  lis 4, 102
  04d94a8  lwz 3, 32(28)
  04d94ac  addic 4, 4, -28092
  04d94b0  bl 0x50eaf8
  04d94b4  nop
  04d94b8  lis 4, 102
  04d94bc  lwz 3, 36(28)
  04d94c0  addic 4, 4, -28076
  04d94c4  bl 0x50eaf8
  04d94c8  nop
  04d94cc  lis 4, 102
  04d94d0  lwz 3, 40(28)
  04d94d4  addic 4, 4, -28068
  04d94d8  bl 0x50eaf8
  04d94dc  nop
  04d94e0  ori 3, 29, 0
  04d94e4  bl 0x4d8db8
  04d94e8  ori 3, 29, 0
  04d94ec  bl 0x4d8774
  04d94f0  lwz 4, -23532(31)
  04d94f4  lis 3, 4
  04d94f8  li 30, 0
  04d94fc  ori 3, 3, 5904
  04d9500  lis 6, 4
  04d9504  lwz 5, 8(4)
  04d9508  ori 6, 6, 5908
  04d950c  stw 3, 0(5)
  04d9510  lwz 3, 8(4)
  04d9514  stw 30, 4(3)
  04d9518  lwz 3, 8(4)
  04d951c  addic 5, 3, 8
  04d9520  stw 5, 8(4)
  04d9524  stw 6, 8(3)
  04d9528  std 2, 40(1)
  04d952c  lwz 5, 8(4)
  04d9530  ori 3, 29, 0
  04d9534  stw 30, 4(5)
  04d9538  lwz 5, 8(4)
  04d953c  addic 7, 5, 8
  04d9540  stw 7, 8(4)
  04d9544  stw 6, 8(5)
  04d9548  lwz 5, 8(4)
  04d954c  stw 30, 4(5)
  04d9550  lwz 5, 8(4)
  04d9554  addic 7, 5, 8
  04d9558  stw 7, 8(4)
  04d955c  stw 6, 8(5)
  04d9560  lwz 5, 8(4)
  04d9564  stw 30, 4(5)
  04d9568  lwz 5, 8(4)
  04d956c  addic 6, 5, 8
  04d9570  lwz 5, 4(29)
  04d9574  stw 6, 8(4)
  04d9578  lwz 4, 0(29)
  04d957c  lwz 8, 16(4)
  04d9580  lwz 4, -23532(31)
  04d9584  lwz 6, 8(29)
  04d9588  lwz 7, 0(8)
  04d958c  lwz 2, 4(8)
  04d9590  mtctr 7
  04d9594  bcctrl 20, 30
  04d9598  lwz 4, 0(29)
  04d959c  ori 3, 29, 0
  04d95a0  ld 2, 40(1)
  04d95a4  lwz 8, 16(4)
  04d95a8  lwz 4, 8(28)
  04d95ac  lwz 5, 4(29)
  04d95b0  lwz 6, 8(29)
  04d95b4  std 2, 40(1)
  04d95b8  lwz 7, 0(8)
  04d95bc  lwz 2, 4(8)
  04d95c0  mtctr 7
  04d95c4  bcctrl 20, 30
  04d95c8  lwz 3, -23532(31)
  04d95cc  lis 4, 4
  04d95d0  ld 2, 40(1)
  04d95d4  lis 5, -1
  04d95d8  ori 4, 4, 7548
  04d95dc  ori 5, 5, 1
  04d95e0  lis 7, 4
  04d95e4  lwz 6, 8(3)
  04d95e8  li 27, 1
  04d95ec  stw 4, 0(6)
  04d95f0  lwz 4, 8(3)
  04d95f4  ori 6, 7, 880
  04d95f8  stw 5, 4(4)
  04d95fc  lwz 4, 8(3)
  04d9600  addic 4, 4, 8
  04d9604  lis 5, 4
  04d9608  stw 4, 8(3)
  04d960c  lwz 3, -23532(31)
  04d9610  ori 5, 5, 2676
  04d9614  lwz 4, 8(3)
  04d9618  stw 6, 0(4)
  04d961c  lwz 4, 8(3)
  04d9620  stw 30, 4(4)
  04d9624  lwz 4, 8(3)
  04d9628  addic 4, 4, 8
  04d962c  stw 4, 8(3)
  04d9630  lwz 3, -23532(31)
  04d9634  lwz 4, 8(3)
  04d9638  stw 5, 0(4)
  04d963c  lwz 4, 8(3)
  04d9640  stw 27, 4(4)
  04d9644  lwz 4, 8(3)
  04d9648  addic 4, 4, 8
  04d964c  stw 4, 8(3)
  04d9650  lwz 3, 16(28)
  04d9654  lwz 4, 8(3)
  04d9658  stw 5, 0(4)
  04d965c  lwz 4, 8(3)
  04d9660  stw 27, 4(4)
  04d9664  lwz 4, 8(3)
  04d9668  addic 4, 4, 8
  04d966c  stw 4, 8(3)
  04d9670  lwz 3, 24(28)
  04d9674  lwz 4, 8(3)
  04d9678  stw 5, 0(4)
  04d967c  lwz 4, 8(3)
  04d9680  stw 27, 4(4)
  04d9684  lwz 4, 8(3)
  04d9688  addic 4, 4, 8
  04d968c  stw 4, 8(3)
  04d9690  lwz 3, 32(28)
  04d9694  lis 4, 4
  04d9698  ori 4, 4, 2672
  04d969c  lwz 6, 8(3)
  04d96a0  stw 5, 0(6)
  04d96a4  lwz 5, 8(3)
  04d96a8  stw 27, 4(5)
  04d96ac  lwz 5, 8(3)
  04d96b0  addic 5, 5, 8
  04d96b4  stw 5, 8(3)
  04d96b8  lwz 3, -23532(31)
  04d96bc  lwz 5, 8(3)
  04d96c0  stw 4, 0(5)
  04d96c4  lwz 5, 8(3)
  04d96c8  stw 27, 4(5)
  04d96cc  lwz 5, 8(3)
  04d96d0  addic 5, 5, 8
  04d96d4  stw 5, 8(3)
  04d96d8  lwz 3, 12(28)
  04d96dc  lwz 5, 8(3)
  04d96e0  stw 4, 0(5)
  04d96e4  lwz 5, 8(3)
  04d96e8  stw 27, 4(5)
  04d96ec  lwz 5, 8(3)
  04d96f0  addic 5, 5, 8
  04d96f4  stw 5, 8(3)
  04d96f8  lwz 3, 24(28)
  04d96fc  lwz 5, 8(3)
  04d9700  stw 4, 0(5)
  04d9704  lwz 5, 8(3)
  04d9708  stw 27, 4(5)
  04d970c  lwz 5, 8(3)
  04d9710  addic 5, 5, 8
  04d9714  stw 5, 8(3)
  04d9718  lwz 3, 32(28)
  04d971c  lwz 5, 8(3)
  04d9720  stw 4, 0(5)
  04d9724  lwz 5, 8(3)
  04d9728  stw 27, 4(5)
  04d972c  lwz 5, 8(3)
  04d9730  addic 5, 5, 8
  04d9734  stw 5, 8(3)
  04d9738  lwz 3, 4(28)
  04d973c  lwz 5, 8(3)
  04d9740  stw 4, 0(5)
  04d9744  lwz 5, 8(3)
  04d9748  stw 30, 4(5)
  04d974c  lwz 5, 8(3)
  04d9750  addic 5, 5, 8
  04d9754  stw 5, 8(3)
  04d9758  lwz 3, 8(28)
  04d975c  lwz 5, 8(3)
  04d9760  stw 4, 0(5)
  04d9764  lwz 5, 8(3)
  04d9768  stw 30, 4(5)
  04d976c  lwz 5, 8(3)
  04d9770  addic 5, 5, 8
  04d9774  stw 5, 8(3)
  04d9778  lwz 3, 16(28)
  04d977c  lwz 5, 8(3)
  04d9780  stw 4, 0(5)
  04d9784  lwz 5, 8(3)
  04d9788  stw 30, 4(5)
  04d978c  lwz 5, 8(3)
  04d9790  addic 5, 5, 8
  04d9794  stw 5, 8(3)
  04d9798  lwz 3, 28(28)
  04d979c  lwz 5, 8(3)
  04d97a0  stw 4, 0(5)
  04d97a4  lwz 5, 8(3)
  04d97a8  stw 30, 4(5)
  04d97ac  lwz 5, 8(3)
  04d97b0  addic 5, 5, 8
  04d97b4  stw 5, 8(3)
  04d97b8  lwz 3, 36(28)
  04d97bc  lis 5, 4
  04d97c0  ori 5, 5, 804
  04d97c4  lwz 6, 8(3)
  04d97c8  stw 4, 0(6)
  04d97cc  lwz 4, 8(3)
  04d97d0  stw 30, 4(4)
  04d97d4  lwz 4, 8(3)
  04d97d8  addic 4, 4, 8
  04d97dc  stw 4, 8(3)
  04d97e0  lwz 3, -23532(31)
  04d97e4  lwz 4, 8(3)
  04d97e8  stw 5, 0(4)
  04d97ec  lwz 4, 8(3)
  04d97f0  stw 30, 4(4)
  04d97f4  lwz 4, 8(3)
  04d97f8  addic 4, 4, 8
  04d97fc  stw 4, 8(3)
  04d9800  lwz 3, 12(28)
  04d9804  lwz 4, 8(3)
  04d9808  stw 5, 0(4)
  04d980c  lwz 4, 8(3)
  04d9810  stw 30, 4(4)
  04d9814  lwz 4, 8(3)
  04d9818  addic 4, 4, 8
  04d981c  stw 4, 8(3)
  04d9820  lwz 3, 24(28)
  04d9824  lwz 4, 8(3)
  04d9828  stw 5, 0(4)
  04d982c  lwz 4, 8(3)
  04d9830  stw 30, 4(4)
  04d9834  lwz 4, 8(3)
  04d9838  addic 4, 4, 8
  04d983c  stw 4, 8(3)
  04d9840  lwz 3, 32(28)
  04d9844  lis 4, 1
  04d9848  ori 4, 4, 257
  04d984c  lwz 6, 8(3)
  04d9850  stw 5, 0(6)
  04d9854  lwz 6, 8(3)
  04d9858  stw 30, 4(6)
  04d985c  lwz 6, 8(3)
  04d9860  addic 6, 6, 8
  04d9864  stw 6, 8(3)
  04d9868  lwz 3, 4(28)
  04d986c  lwz 6, 8(3)
  04d9870  stw 5, 0(6)
  04d9874  lwz 6, 8(3)
  04d9878  stw 4, 4(6)
  04d987c  lwz 6, 8(3)
  04d9880  addic 6, 6, 8
  04d9884  stw 6, 8(3)
  04d9888  lwz 3, 8(28)
  04d988c  lwz 6, 8(3)
  04d9890  stw 5, 0(6)
  04d9894  lwz 6, 8(3)
  04d9898  stw 4, 4(6)
  04d989c  lwz 6, 8(3)
  04d98a0  addic 6, 6, 8
  04d98a4  stw 6, 8(3)
  04d98a8  lwz 3, 16(28)
  04d98ac  lwz 6, 8(3)
  04d98b0  stw 5, 0(6)
  04d98b4  lwz 6, 8(3)
  04d98b8  stw 4, 4(6)
  04d98bc  lwz 6, 8(3)
  04d98c0  addic 6, 6, 8
  04d98c4  stw 6, 8(3)
  04d98c8  lwz 3, 28(28)
  04d98cc  lwz 6, 8(3)
  04d98d0  stw 5, 0(6)
  04d98d4  lwz 6, 8(3)
  04d98d8  stw 4, 4(6)
  04d98dc  lwz 6, 8(3)
  04d98e0  addic 6, 6, 8
  04d98e4  stw 6, 8(3)
  04d98e8  lwz 3, 36(28)
  04d98ec  lis 6, 4
  04d98f0  ori 6, 6, 2668
  04d98f4  lwz 7, 8(3)
  04d98f8  stw 5, 0(7)
  04d98fc  lwz 5, 8(3)
  04d9900  lis 7, 4
  04d9904  stw 4, 4(5)
  04d9908  lwz 4, 8(3)
  04d990c  li 5, 515
  04d9910  addic 4, 4, 8
  04d9914  stw 4, 8(3)
  04d9918  lwz 3, -23532(31)
  04d991c  lwz 4, 8(3)
  04d9920  stw 6, 0(4)
  04d9924  lwz 4, 8(3)
  04d9928  stw 5, 4(4)
  04d992c  lwz 4, 8(3)
  04d9930  addic 4, 4, 8
  04d9934  stw 4, 8(3)
  04d9938  lwz 3, 32(28)
  04d993c  lwz 4, 8(3)
  04d9940  stw 6, 0(4)
  04d9944  lwz 4, 8(3)
  04d9948  ori 6, 7, 812
  04d994c  stw 5, 4(4)
  04d9950  lwz 4, 8(3)
  04d9954  lis 5, 4
  04d9958  addic 4, 4, 8
  04d995c  ori 5, 5, 784
  04d9960  stw 4, 8(3)
  04d9964  lwz 3, 24(28)
  04d9968  lwz 4, 8(3)
  04d996c  stw 6, 0(4)
  04d9970  lwz 4, 8(3)
  04d9974  stw 30, 4(4)
  04d9978  lwz 4, 8(3)
  04d997c  addic 4, 4, 8
  04d9980  stw 4, 8(3)
  04d9984  lwz 3, 24(28)
  04d9988  li 4, 1
  04d998c  lwz 6, 8(3)
  04d9990  stw 5, 0(6)
  04d9994  lwz 5, 8(3)
  04d9998  stw 27, 4(5)
  04d999c  lwz 5, 8(3)
  04d99a0  addic 5, 5, 8
  04d99a4  stw 5, 8(3)
  04d99a8  lwz 3, 24(28)
  04d99ac  bl 0x5e85f0
  04d99b0  nop
  04d99b4  lwz 3, 24(28)
  04d99b8  lis 4, 8
  04d99bc  li 5, 518
  04d99c0  ori 4, 4, 776
  04d99c4  li 7, 190
  04d99c8  lwz 6, 8(3)
  04d99cc  lis 9, 4
  04d99d0  stw 4, 0(6)
  04d99d4  lwz 6, 8(3)
  04d99d8  ori 9, 9, 408
  04d99dc  stw 5, 4(6)
  04d99e0  lwz 6, 8(3)
  04d99e4  stw 7, 8(6)
  04d99e8  lwz 6, 8(3)
  04d99ec  addic 6, 6, 12
  04d99f0  stw 6, 8(3)
  04d99f4  lwz 3, 28(28)
  04d99f8  lis 6, 4
  04d99fc  ori 6, 6, 404
  04d9a00  lwz 7, 8(3)
  04d9a04  stw 4, 0(7)
  04d9a08  lwz 4, 8(3)
  04d9a0c  lis 7, 4
  04d9a10  ori 7, 7, 396
  04d9a14  stw 5, 4(4)
  04d9a18  lwz 4, 8(3)
  04d9a1c  lis 5, 275
  04d9a20  stw 27, 8(4)
  04d9a24  lwz 4, 8(3)
  04d9a28  addic 4, 4, 12
  04d9a2c  li 27, 31
  04d9a30  stw 4, 8(3)
  04d9a34  lwz 3, -23532(31)
  04d9a38  lwz 4, 8(3)
  04d9a3c  stw 6, 0(4)
  04d9a40  lbz 4, 7144(29)
  04d9a44  lwz 8, 8(3)
  04d9a48  subc 4, 4, 5
  04d9a4c  stw 4, 4(8)
  04d9a50  lwz 4, 8(3)
  04d9a54  addic 8, 4, 8
  04d9a58  stw 8, 8(3)
  04d9a5c  stw 7, 8(4)
  04d9a60  lbz 4, 7145(29)
  04d9a64  lis 8, 8
  04d9a68  lwz 10, 8(3)
  04d9a6c  subc 4, 4, 5
  04d9a70  ori 8, 8, 436
  04d9a74  stw 4, 4(10)
  04d9a78  lwz 4, 8(3)
  04d9a7c  addic 10, 4, 8
  04d9a80  stw 10, 8(3)
  04d9a84  stw 8, 8(4)
  04d9a88  lbz 4, 7146(29)
  04d9a8c  lis 10, 24
  04d9a90  lwz 11, 8(3)
  04d9a94  subc 4, 4, 5
  04d9a98  ori 10, 10, 520
  04d9a9c  stw 4, 4(11)
  04d9aa0  lbz 4, 7147(29)
  04d9aa4  lwz 11, 8(3)
  04d9aa8  subc 4, 4, 5
  04d9aac  stw 4, 8(11)
  04d9ab0  lwz 4, 8(3)
  04d9ab4  addic 11, 4, 12
  04d9ab8  stw 11, 8(3)
  04d9abc  stw 9, 12(4)
  04d9ac0  lbz 4, 7181(29)
  04d9ac4  lwz 11, 8(3)
  04d9ac8  subc 4, 4, 5
  04d9acc  stw 4, 4(11)
  04d9ad0  lwz 4, 8(3)
  04d9ad4  lhz 12, 7192(29)
  04d9ad8  addic 11, 4, 8
  04d9adc  lhz 31, 7194(29)
  04d9ae0  cntlzw 31, 31
  04d9ae4  stw 11, 8(3)
  04d9ae8  cntlzw 11, 12
  04d9aec  stw 10, 8(4)
  04d9af0  lbz 12, 7180(29)
  04d9af4  subc 4, 27, 31
  04d9af8  lbz 31, 7142(29)
  04d9afc  subc 11, 27, 11
  04d9b00  slwi 12, 12, 5
  04d9b04  lbz 30, 7140(29)
  04d9b08  slwi 11, 11, 16
  04d9b0c  or 12, 31, 12
  04d9b10  lbz 31, 7141(29)
  04d9b14  slwi 30, 30, 8
  04d9b18  slwi 4, 4, 24
  04d9b1c  slwi 31, 31, 12
  04d9b20  or 31, 30, 31
  04d9b24  or 12, 12, 31
  04d9b28  or 11, 12, 11
  04d9b2c  or 4, 11, 4
  04d9b30  lwz 11, 8(3)
  04d9b34  lis 12, 4
  04d9b38  ori 12, 12, 556
  04d9b3c  stw 4, 4(11)
  04d9b40  lwz 4, 8(3)
  04d9b44  lwz 11, 7164(29)
  04d9b48  lis 31, 4
  04d9b4c  stw 11, 8(4)
  04d9b50  lwz 4, 8(3)
  04d9b54  lwz 11, 7148(29)
  04d9b58  ori 31, 31, 544
  04d9b5c  stw 11, 12(4)
  04d9b60  lwz 4, 8(3)
  04d9b64  lwz 11, 7184(29)
  04d9b68  stw 11, 16(4)
  04d9b6c  lwz 4, 8(3)
  04d9b70  lwz 11, 7152(29)
  04d9b74  stw 11, 20(4)
  04d9b78  lwz 4, 8(3)
  04d9b7c  lwz 11, 7168(29)
  04d9b80  stw 11, 24(4)
  04d9b84  lwz 4, 8(3)
  04d9b88  addic 11, 4, 28
  04d9b8c  stw 11, 8(3)
  04d9b90  stw 12, 28(4)
  04d9b94  lis 11, 16
  04d9b98  lwz 4, 7188(29)
  04d9b9c  lwz 30, 8(3)
  04d9ba0  ori 11, 11, 640
  04d9ba4  stw 4, 4(30)
  04d9ba8  lwz 4, 8(3)
  04d9bac  addic 30, 4, 8
  04d9bb0  stw 30, 8(3)
  04d9bb4  stw 11, 8(4)
  04d9bb8  lwz 4, 7172(29)
  04d9bbc  lwz 26, 8(3)
  04d9bc0  lis 30, 4
  04d9bc4  ori 30, 30, 696
  04d9bc8  stw 4, 4(26)
  04d9bcc  lwz 4, 8(3)
  04d9bd0  lwz 26, 7176(29)
  04d9bd4  stw 26, 8(4)
  04d9bd8  lwz 4, 8(3)
  04d9bdc  lwz 26, 7156(29)
  04d9be0  stw 26, 12(4)
  04d9be4  lwz 4, 8(3)
  04d9be8  lwz 26, 7160(29)
  04d9bec  stw 26, 16(4)
  04d9bf0  lwz 4, 8(3)
  04d9bf4  addic 26, 4, 20
  04d9bf8  stw 26, 8(3)
  04d9bfc  stw 31, 20(4)
  04d9c00  lbz 4, 7143(29)
  04d9c04  lis 26, 8
  04d9c08  lwz 25, 8(3)
  04d9c0c  ori 26, 26, 512
  04d9c10  stw 4, 4(25)
  04d9c14  lwz 4, 8(3)
  04d9c18  addic 25, 4, 8
  04d9c1c  stw 25, 8(3)
  04d9c20  stw 30, 8(4)
  04d9c24  lhz 4, 7196(29)
  04d9c28  lhz 25, 7198(29)
  04d9c2c  lwz 24, 8(3)
  04d9c30  rlwimi 4, 25, 16, 0, 15
  04d9c34  lis 25, 4
  04d9c38  ori 25, 25, 7560
  04d9c3c  stw 4, 4(24)
  04d9c40  lwz 4, 8(3)
  04d9c44  addic 24, 4, 8
  04d9c48  stw 24, 8(3)
  04d9c4c  stw 26, 8(4)
  04d9c50  lhz 4, 7196(29)
  04d9c54  lhz 24, 7192(29)
  04d9c58  rlwimi 4, 24, 16, 0, 15
  04d9c5c  lwz 24, 8(3)
  04d9c60  stw 4, 4(24)
  04d9c64  lhz 4, 7198(29)
  04d9c68  lhz 24, 7194(29)
  04d9c6c  lwz 23, 8(3)
  04d9c70  rlwimi 4, 24, 16, 0, 15
  04d9c74  stw 4, 8(23)
  04d9c78  lwz 4, 8(3)
  04d9c7c  addic 24, 4, 12
  04d9c80  stw 24, 8(3)
  04d9c84  stw 25, 12(4)
  04d9c88  lhz 4, 7194(29)
  04d9c8c  rlwinm 24, 4, 20, 31, 31
  04d9c90  subc 4, 4, 24
  04d9c94  lwz 24, 8(3)
  04d9c98  ori 4, 4, 4096
  04d9c9c  stw 4, 4(24)
  04d9ca0  lwz 4, 8(3)
  04d9ca4  addic 4, 4, 8
  04d9ca8  stw 4, 8(3)
  04d9cac  lwz 3, 4(28)
  04d9cb0  lwz 4, 8(3)
  04d9cb4  stw 6, 0(4)
  04d9cb8  lbz 4, 7144(29)
  04d9cbc  lwz 24, 8(3)
  04d9cc0  subc 4, 4, 5
  04d9cc4  stw 4, 4(24)
  04d9cc8  lwz 4, 8(3)
  04d9ccc  addic 24, 4, 8
  04d9cd0  stw 24, 8(3)
  04d9cd4  stw 7, 8(4)
  04d9cd8  lbz 4, 7145(29)
  04d9cdc  lwz 24, 8(3)
  04d9ce0  subc 4, 4, 5
  04d9ce4  stw 4, 4(24)
  04d9ce8  lwz 4, 8(3)
  04d9cec  addic 24, 4, 8
  04d9cf0  stw 24, 8(3)
  04d9cf4  stw 8, 8(4)
  04d9cf8  lbz 4, 7146(29)
  04d9cfc  lwz 24, 8(3)
  04d9d00  subc 4, 4, 5
  04d9d04  stw 4, 4(24)
  04d9d08  lbz 4, 7147(29)
  04d9d0c  lwz 24, 8(3)
  04d9d10  subc 4, 4, 5
  04d9d14  stw 4, 8(24)
  04d9d18  lwz 4, 8(3)
  04d9d1c  addic 24, 4, 12
  04d9d20  stw 24, 8(3)
  04d9d24  stw 9, 12(4)
  04d9d28  lbz 4, 7181(29)
  04d9d2c  lwz 24, 8(3)
  04d9d30  subc 4, 4, 5
  04d9d34  stw 4, 4(24)
  04d9d38  lwz 4, 8(3)
  04d9d3c  lhz 23, 7192(29)
  04d9d40  addic 24, 4, 8
  04d9d44  lhz 22, 7194(29)
  04d9d48  cntlzw 22, 22
  04d9d4c  stw 24, 8(3)
  04d9d50  cntlzw 24, 23
  04d9d54  stw 10, 8(4)
  04d9d58  lbz 23, 7180(29)
  04d9d5c  subc 4, 27, 22
  04d9d60  lbz 22, 7142(29)
  04d9d64  subc 24, 27, 24
  04d9d68  slwi 23, 23, 5
  04d9d6c  lbz 21, 7140(29)
  04d9d70  slwi 24, 24, 16
  04d9d74  or 23, 22, 23
  04d9d78  slwi 22, 21, 8
  04d9d7c  lbz 21, 7141(29)
  04d9d80  slwi 4, 4, 24
  04d9d84  slwi 21, 21, 12
  04d9d88  or 22, 22, 21
  04d9d8c  or 23, 23, 22
  04d9d90  or 24, 23, 24
  04d9d94  or 4, 24, 4
  04d9d98  lwz 24, 8(3)
  04d9d9c  stw 4, 4(24)
  04d9da0  lwz 4, 8(3)
  04d9da4  lwz 24, 7164(29)
  04d9da8  stw 24, 8(4)
  04d9dac  lwz 4, 8(3)
  04d9db0  lwz 24, 7148(29)
  04d9db4  stw 24, 12(4)
  04d9db8  lwz 4, 8(3)
  04d9dbc  lwz 24, 7184(29)
  04d9dc0  stw 24, 16(4)
  04d9dc4  lwz 4, 8(3)
  04d9dc8  lwz 24, 7152(29)
  04d9dcc  stw 24, 20(4)
  04d9dd0  lwz 4, 8(3)
  04d9dd4  lwz 24, 7168(29)
  04d9dd8  stw 24, 24(4)
  04d9ddc  lwz 4, 8(3)
  04d9de0  addic 24, 4, 28
  04d9de4  stw 24, 8(3)
  04d9de8  stw 12, 28(4)
  04d9dec  lwz 4, 7188(29)
  04d9df0  lwz 24, 8(3)
  04d9df4  stw 4, 4(24)
  04d9df8  lwz 4, 8(3)
  04d9dfc  addic 24, 4, 8
  04d9e00  stw 24, 8(3)
  04d9e04  stw 11, 8(4)
  04d9e08  lwz 4, 7172(29)
  04d9e0c  lwz 24, 8(3)
  04d9e10  stw 4, 4(24)
  04d9e14  lwz 4, 8(3)
  04d9e18  lwz 24, 7176(29)
  04d9e1c  stw 24, 8(4)
  04d9e20  lwz 4, 8(3)
  04d9e24  lwz 24, 7156(29)
  04d9e28  stw 24, 12(4)
  04d9e2c  lwz 4, 8(3)
  04d9e30  lwz 24, 7160(29)
  04d9e34  stw 24, 16(4)
  04d9e38  lwz 4, 8(3)
  04d9e3c  addic 24, 4, 20
  04d9e40  stw 24, 8(3)
  04d9e44  stw 31, 20(4)
  04d9e48  lbz 4, 7143(29)
  04d9e4c  lwz 24, 8(3)
  04d9e50  stw 4, 4(24)
  04d9e54  lwz 4, 8(3)
  04d9e58  addic 24, 4, 8
  04d9e5c  stw 24, 8(3)
  04d9e60  stw 30, 8(4)
  04d9e64  lhz 4, 7196(29)
  04d9e68  lhz 24, 7198(29)
  04d9e6c  rlwimi 4, 24, 16, 0, 15
  04d9e70  lwz 24, 8(3)
  04d9e74  stw 4, 4(24)
  04d9e78  lwz 4, 8(3)
  04d9e7c  addic 24, 4, 8
  04d9e80  stw 24, 8(3)
  04d9e84  stw 26, 8(4)
  04d9e88  lhz 4, 7196(29)
  04d9e8c  lhz 24, 7192(29)
  04d9e90  rlwimi 4, 24, 16, 0, 15
  04d9e94  lwz 24, 8(3)
  04d9e98  stw 4, 4(24)
  04d9e9c  lhz 4, 7198(29)
  04d9ea0  lhz 24, 7194(29)
  04d9ea4  lwz 23, 8(3)
  04d9ea8  rlwimi 4, 24, 16, 0, 15
  04d9eac  stw 4, 8(23)
  04d9eb0  lwz 4, 8(3)
  04d9eb4  addic 24, 4, 12
  04d9eb8  stw 24, 8(3)
  04d9ebc  stw 25, 12(4)
  04d9ec0  lhz 4, 7194(29)
  04d9ec4  rlwinm 24, 4, 20, 31, 31
  04d9ec8  subc 4, 4, 24
  04d9ecc  lwz 24, 8(3)
  04d9ed0  ori 4, 4, 4096
  04d9ed4  stw 4, 4(24)
  04d9ed8  lwz 4, 8(3)
  04d9edc  addic 4, 4, 8
  04d9ee0  stw 4, 8(3)
  04d9ee4  lwz 3, 8(28)
  04d9ee8  lwz 4, 8(3)
  04d9eec  stw 6, 0(4)
  04d9ef0  lbz 4, 7144(29)
  04d9ef4  lwz 24, 8(3)
  04d9ef8  subc 4, 4, 5
  04d9efc  stw 4, 4(24)
  04d9f00  lwz 4, 8(3)
  04d9f04  addic 24, 4, 8
  04d9f08  stw 24, 8(3)
  04d9f0c  stw 7, 8(4)
  04d9f10  lbz 4, 7145(29)
  04d9f14  lwz 24, 8(3)
  04d9f18  subc 4, 4, 5
  04d9f1c  stw 4, 4(24)
  04d9f20  lwz 4, 8(3)
  04d9f24  addic 24, 4, 8
  04d9f28  stw 24, 8(3)
  04d9f2c  stw 8, 8(4)
  04d9f30  lbz 4, 7146(29)
  04d9f34  lwz 24, 8(3)
  04d9f38  subc 4, 4, 5
  04d9f3c  stw 4, 4(24)
  04d9f40  lbz 4, 7147(29)
  04d9f44  lwz 24, 8(3)
  04d9f48  subc 4, 4, 5
  04d9f4c  stw 4, 8(24)
  04d9f50  lwz 4, 8(3)
  04d9f54  addic 24, 4, 12
  04d9f58  stw 24, 8(3)
  04d9f5c  stw 9, 12(4)
  04d9f60  lbz 4, 7181(29)
  04d9f64  lwz 24, 8(3)
  04d9f68  subc 4, 4, 5
  04d9f6c  stw 4, 4(24)
  04d9f70  lwz 4, 8(3)
  04d9f74  lhz 23, 7192(29)
  04d9f78  addic 24, 4, 8
  04d9f7c  lhz 22, 7194(29)
  04d9f80  cntlzw 22, 22
  04d9f84  stw 24, 8(3)
  04d9f88  cntlzw 24, 23
  04d9f8c  stw 10, 8(4)
  04d9f90  lbz 23, 7180(29)
  04d9f94  subc 4, 27, 22
  04d9f98  lbz 22, 7142(29)
  04d9f9c  subc 24, 27, 24
  04d9fa0  slwi 23, 23, 5
  04d9fa4  lbz 21, 7140(29)
  04d9fa8  slwi 24, 24, 16
  04d9fac  or 23, 22, 23
  04d9fb0  slwi 22, 21, 8
  04d9fb4  lbz 21, 7141(29)
  04d9fb8  slwi 4, 4, 24
  04d9fbc  slwi 21, 21, 12
  04d9fc0  or 22, 22, 21
  04d9fc4  or 23, 23, 22
  04d9fc8  or 24, 23, 24
  04d9fcc  or 4, 24, 4
  04d9fd0  lwz 24, 8(3)
  04d9fd4  stw 4, 4(24)
  04d9fd8  lwz 4, 8(3)
  04d9fdc  lwz 24, 7164(29)
  04d9fe0  stw 24, 8(4)
  04d9fe4  lwz 4, 8(3)
  04d9fe8  lwz 24, 7148(29)
  04d9fec  stw 24, 12(4)
  04d9ff0  lwz 4, 8(3)
  04d9ff4  lwz 24, 7184(29)
  04d9ff8  stw 24, 16(4)
  04d9ffc  lwz 4, 8(3)
  04da000  lwz 24, 7152(29)
  04da004  stw 24, 20(4)
  04da008  lwz 4, 8(3)
  04da00c  lwz 24, 7168(29)
  04da010  stw 24, 24(4)
  04da014  lwz 4, 8(3)
  04da018  addic 24, 4, 28
  04da01c  stw 24, 8(3)
  04da020  stw 12, 28(4)
  04da024  lwz 4, 7188(29)
  04da028  lwz 24, 8(3)
  04da02c  stw 4, 4(24)
  04da030  lwz 4, 8(3)
  04da034  addic 24, 4, 8
  04da038  stw 24, 8(3)
  04da03c  stw 11, 8(4)
  04da040  lwz 4, 7172(29)
  04da044  lwz 24, 8(3)
  04da048  stw 4, 4(24)
  04da04c  lwz 4, 8(3)
  04da050  lwz 24, 7176(29)
  04da054  stw 24, 8(4)
  04da058  lwz 4, 8(3)
  04da05c  lwz 24, 7156(29)
  04da060  stw 24, 12(4)
  04da064  lwz 4, 8(3)
  04da068  lwz 24, 7160(29)
  04da06c  stw 24, 16(4)
  04da070  lwz 4, 8(3)
  04da074  addic 24, 4, 20
  04da078  stw 24, 8(3)
  04da07c  stw 31, 20(4)
  04da080  lbz 4, 7143(29)
  04da084  lwz 24, 8(3)
  04da088  stw 4, 4(24)
  04da08c  lwz 4, 8(3)
  04da090  addic 24, 4, 8
  04da094  stw 24, 8(3)
  04da098  stw 30, 8(4)
  04da09c  lhz 4, 7196(29)
  04da0a0  lhz 24, 7198(29)
  04da0a4  rlwimi 4, 24, 16, 0, 15
  04da0a8  lwz 24, 8(3)
  04da0ac  stw 4, 4(24)
  04da0b0  lwz 4, 8(3)
  04da0b4  addic 24, 4, 8
  04da0b8  stw 24, 8(3)
  04da0bc  stw 26, 8(4)
  04da0c0  lhz 4, 7196(29)
  04da0c4  lhz 24, 7192(29)
  04da0c8  rlwimi 4, 24, 16, 0, 15
  04da0cc  lwz 24, 8(3)
  04da0d0  stw 4, 4(24)
  04da0d4  lhz 4, 7198(29)
  04da0d8  lhz 24, 7194(29)
  04da0dc  lwz 23, 8(3)
  04da0e0  rlwimi 4, 24, 16, 0, 15
  04da0e4  stw 4, 8(23)
  04da0e8  lwz 4, 8(3)
  04da0ec  addic 24, 4, 12
  04da0f0  stw 24, 8(3)
  04da0f4  stw 25, 12(4)
  04da0f8  lhz 4, 7194(29)
  04da0fc  rlwinm 24, 4, 20, 31, 31
  04da100  subc 4, 4, 24
  04da104  lwz 24, 8(3)
  04da108  ori 4, 4, 4096
  04da10c  stw 4, 4(24)
  04da110  lwz 4, 8(3)
  04da114  addic 4, 4, 8
  04da118  stw 4, 8(3)
  04da11c  lwz 3, 12(28)
  04da120  lwz 4, 8(3)
  04da124  stw 6, 0(4)
  04da128  lbz 4, 7144(29)
  04da12c  lwz 24, 8(3)
  04da130  subc 4, 4, 5
  04da134  stw 4, 4(24)
  04da138  lwz 4, 8(3)
  04da13c  addic 24, 4, 8
  04da140  stw 24, 8(3)
  04da144  stw 7, 8(4)
  04da148  lbz 4, 7145(29)
  04da14c  lwz 7, 8(3)
  04da150  subc 4, 4, 5
  04da154  stw 4, 4(7)
  04da158  lwz 4, 8(3)
  04da15c  addic 7, 4, 8
  04da160  stw 7, 8(3)
  04da164  stw 8, 8(4)
  04da168  lbz 4, 7146(29)
  04da16c  lwz 7, 8(3)
  04da170  subc 4, 4, 5
  04da174  stw 4, 4(7)
  04da178  lbz 4, 7147(29)
  04da17c  lwz 7, 8(3)
  04da180  subc 4, 4, 5
  04da184  stw 4, 8(7)
  04da188  lwz 4, 8(3)
  04da18c  addic 7, 4, 12
  04da190  stw 7, 8(3)
  04da194  stw 9, 12(4)
  04da198  lbz 4, 7181(29)
  04da19c  subc 4, 4, 5
  04da1a0  lwz 5, 8(3)
  04da1a4  stw 4, 4(5)
  04da1a8  lwz 4, 8(3)
  04da1ac  lhz 7, 7192(29)
  04da1b0  addic 5, 4, 8
  04da1b4  lhz 8, 7194(29)
  04da1b8  cntlzw 8, 8
  04da1bc  stw 5, 8(3)
  04da1c0  cntlzw 5, 7
  04da1c4  stw 10, 8(4)
  04da1c8  lbz 7, 7180(29)
  04da1cc  subc 4, 27, 8
  04da1d0  lbz 8, 7142(29)
  04da1d4  subc 5, 27, 5
  04da1d8  slwi 7, 7, 5
  04da1dc  lbz 9, 7140(29)
  04da1e0  slwi 5, 5, 16
  04da1e4  or 7, 8, 7
  04da1e8  lbz 8, 7141(29)
  04da1ec  slwi 9, 9, 8
  04da1f0  slwi 4, 4, 24
  04da1f4  slwi 8, 8, 12
  04da1f8  or 8, 9, 8
  04da1fc  or 7, 7, 8
  04da200  or 5, 7, 5
  04da204  or 4, 5, 4
  04da208  lwz 5, 8(3)
  04da20c  stw 4, 4(5)
  04da210  lwz 4, 8(3)
  04da214  lwz 5, 7164(29)
  04da218  stw 5, 8(4)
  04da21c  lwz 4, 8(3)
  04da220  lwz 5, 7148(29)
  04da224  stw 5, 12(4)
  04da228  lwz 4, 8(3)
  04da22c  lwz 5, 7184(29)
  04da230  stw 5, 16(4)
  04da234  lwz 4, 8(3)
  04da238  lwz 5, 7152(29)
  04da23c  stw 5, 20(4)
  04da240  lwz 4, 8(3)
  04da244  lwz 5, 7168(29)
  04da248  stw 5, 24(4)
  04da24c  lwz 4, 8(3)
  04da250  addic 5, 4, 28
  04da254  stw 5, 8(3)
  04da258  stw 12, 28(4)
  04da25c  lwz 4, 7188(29)
  04da260  lwz 5, 8(3)
  04da264  stw 4, 4(5)
  04da268  lwz 4, 8(3)
  04da26c  addic 5, 4, 8
  04da270  stw 5, 8(3)
  04da274  stw 11, 8(4)
  04da278  lwz 4, 7172(29)
  04da27c  lwz 5, 8(3)
  04da280  stw 4, 4(5)
  04da284  lwz 4, 8(3)
  04da288  lwz 5, 7176(29)
  04da28c  stw 5, 8(4)
  04da290  lwz 4, 8(3)
  04da294  lwz 5, 7156(29)
  04da298  stw 5, 12(4)
  04da29c  lwz 4, 8(3)
  04da2a0  lwz 5, 7160(29)
  04da2a4  stw 5, 16(4)
  04da2a8  lwz 4, 8(3)
  04da2ac  addic 5, 4, 20
  04da2b0  stw 5, 8(3)
  04da2b4  stw 31, 20(4)
  04da2b8  lbz 4, 7143(29)
  04da2bc  lwz 5, 8(3)
  04da2c0  stw 4, 4(5)
  04da2c4  lwz 4, 8(3)
  04da2c8  addic 5, 4, 8
  04da2cc  stw 5, 8(3)
  04da2d0  stw 30, 8(4)
  04da2d4  lhz 4, 7196(29)
  04da2d8  lhz 5, 7198(29)
  04da2dc  rlwimi 4, 5, 16, 0, 15
  04da2e0  lwz 5, 8(3)
  04da2e4  stw 4, 4(5)
  04da2e8  lwz 4, 8(3)
  04da2ec  addic 5, 4, 8
  04da2f0  stw 5, 8(3)
  04da2f4  stw 26, 8(4)
  04da2f8  lhz 4, 7196(29)
  04da2fc  lhz 5, 7192(29)
  04da300  rlwimi 4, 5, 16, 0, 15
  04da304  lwz 5, 8(3)
  04da308  stw 4, 4(5)
  04da30c  lhz 4, 7198(29)
  04da310  lhz 5, 7194(29)
  04da314  lwz 7, 8(3)
  04da318  rlwimi 4, 5, 16, 0, 15
  04da31c  stw 4, 8(7)
  04da320  lwz 4, 8(3)
  04da324  addic 5, 4, 12
  04da328  stw 5, 8(3)
  04da32c  stw 25, 12(4)
  04da330  lhz 4, 7194(29)
  04da334  rlwinm 5, 4, 20, 31, 31
  04da338  subc 4, 4, 5
  04da33c  lwz 5, 8(3)
  04da340  ori 4, 4, 4096
  04da344  stw 4, 4(5)
  04da348  lwz 4, 8(3)
  04da34c  addic 4, 4, 8
  04da350  stw 4, 8(3)
  04da354  lwz 26, 16(28)
  04da358  lwz 3, 8(26)
  04da35c  stw 6, 0(3)
  04da360  lbz 3, 7144(29)
  04da364  lis 4, 275
  04da368  lwz 5, 8(26)
  04da36c  lis 6, 4
  04da370  subc 3, 3, 4
  04da374  ori 6, 6, 396
  04da378  lis 7, 4
  04da37c  stw 3, 4(5)
  04da380  lwz 3, 8(26)
  04da384  ori 7, 7, 408
  04da388  addic 5, 3, 8
  04da38c  stw 5, 8(26)
  04da390  stw 6, 8(3)
  04da394  lis 5, 8
  04da398  lbz 3, 7145(29)
  04da39c  lwz 8, 8(26)
  04da3a0  subc 3, 3, 4
  04da3a4  ori 5, 5, 436
  04da3a8  stw 3, 4(8)
  04da3ac  lwz 3, 8(26)
  04da3b0  addic 8, 3, 8
  04da3b4  stw 8, 8(26)
  04da3b8  stw 5, 8(3)
  04da3bc  lbz 3, 7146(29)
  04da3c0  lwz 9, 8(26)
  04da3c4  lis 8, 24
  04da3c8  subc 3, 3, 4
  04da3cc  ori 8, 8, 520
  04da3d0  stw 3, 4(9)
  04da3d4  lbz 3, 7147(29)
  04da3d8  lwz 9, 8(26)
  04da3dc  subc 3, 3, 4
  04da3e0  stw 3, 8(9)
  04da3e4  lwz 3, 8(26)
  04da3e8  addic 9, 3, 12
  04da3ec  stw 9, 8(26)
  04da3f0  stw 7, 12(3)
  04da3f4  lbz 3, 7181(29)
  04da3f8  lwz 9, 8(26)
  04da3fc  subc 3, 3, 4
  04da400  stw 3, 4(9)
  04da404  lwz 3, 8(26)
  04da408  lhz 10, 7192(29)
  04da40c  addic 9, 3, 8
  04da410  lhz 11, 7194(29)
  04da414  cntlzw 11, 11
  04da418  stw 9, 8(26)
  04da41c  cntlzw 9, 10
  04da420  stw 8, 8(3)
  04da424  lbz 10, 7180(29)
  04da428  subc 3, 27, 11
  04da42c  lbz 11, 7142(29)
  04da430  slwi 10, 10, 5
  04da434  lbz 12, 7140(29)
  04da438  subc 9, 27, 9
  04da43c  or 10, 11, 10
  04da440  lbz 11, 7141(29)
  04da444  slwi 12, 12, 8
  04da448  slwi 9, 9, 16
  04da44c  slwi 11, 11, 12
  04da450  slwi 3, 3, 24
  04da454  or 11, 12, 11
  04da458  or 10, 10, 11
  04da45c  or 9, 10, 9
  04da460  or 3, 9, 3
  04da464  lwz 9, 8(26)
  04da468  lis 10, 4
  04da46c  ori 10, 10, 556
  04da470  stw 3, 4(9)
  04da474  lwz 3, 8(26)
  04da478  lwz 9, 7164(29)
  04da47c  lis 11, 4
  04da480  stw 9, 8(3)
  04da484  lwz 3, 8(26)
  04da488  lwz 9, 7148(29)
  04da48c  ori 11, 11, 544
  04da490  stw 9, 12(3)
  04da494  lwz 3, 8(26)
  04da498  lwz 9, 7184(29)
  04da49c  stw 9, 16(3)
  04da4a0  lwz 3, 8(26)
  04da4a4  lwz 9, 7152(29)
  04da4a8  stw 9, 20(3)
  04da4ac  lwz 3, 8(26)
  04da4b0  lwz 9, 7168(29)
  04da4b4  stw 9, 24(3)
  04da4b8  lwz 3, 8(26)
  04da4bc  addic 9, 3, 28
  04da4c0  stw 9, 8(26)
  04da4c4  stw 10, 28(3)
  04da4c8  lwz 3, 7188(29)
  04da4cc  lis 9, 16
  04da4d0  lwz 12, 8(26)
  04da4d4  ori 9, 9, 640
  04da4d8  stw 3, 4(12)
  04da4dc  lwz 3, 8(26)
  04da4e0  addic 12, 3, 8
  04da4e4  stw 12, 8(26)
  04da4e8  stw 9, 8(3)
  04da4ec  lwz 3, 7172(29)
  04da4f0  lwz 31, 8(26)
  04da4f4  lis 12, 4
  04da4f8  ori 12, 12, 696
  04da4fc  stw 3, 4(31)
  04da500  lwz 3, 8(26)
  04da504  lwz 31, 7176(29)
  04da508  stw 31, 8(3)
  04da50c  lwz 3, 8(26)
  04da510  lwz 31, 7156(29)
  04da514  stw 31, 12(3)
  04da518  lwz 3, 8(26)
  04da51c  lwz 31, 7160(29)
  04da520  stw 31, 16(3)
  04da524  lwz 3, 8(26)
  04da528  addic 31, 3, 20
  04da52c  stw 31, 8(26)
  04da530  stw 11, 20(3)
  04da534  lis 31, 8
  04da538  lbz 3, 7143(29)
  04da53c  lwz 30, 8(26)
  04da540  ori 31, 31, 512
  04da544  stw 3, 4(30)
  04da548  lwz 3, 8(26)
  04da54c  addic 30, 3, 8
  04da550  stw 30, 8(26)
  04da554  stw 12, 8(3)
  04da558  lhz 3, 7196(29)
  04da55c  lhz 30, 7198(29)
  04da560  lwz 25, 8(26)
  04da564  rlwimi 3, 30, 16, 0, 15
  04da568  lis 30, 4
  04da56c  ori 30, 30, 7560
  04da570  stw 3, 4(25)
  04da574  lwz 3, 8(26)
  04da578  addic 25, 3, 8
  04da57c  stw 25, 8(26)
  04da580  stw 31, 8(3)
  04da584  lhz 3, 7196(29)
  04da588  lhz 25, 7192(29)
  04da58c  lwz 24, 8(26)
  04da590  rlwimi 3, 25, 16, 0, 15
  04da594  lis 25, 4
  04da598  stw 3, 4(24)
  04da59c  lhz 3, 7198(29)
  04da5a0  lhz 24, 7194(29)
  04da5a4  lwz 23, 8(26)
  04da5a8  rlwimi 3, 24, 16, 0, 15
  04da5ac  ori 25, 25, 404
  04da5b0  stw 3, 8(23)
  04da5b4  lwz 3, 8(26)
  04da5b8  addic 24, 3, 12
  04da5bc  stw 24, 8(26)
  04da5c0  stw 30, 12(3)
  04da5c4  lhz 3, 7194(29)
  04da5c8  rlwinm 24, 3, 20, 31, 31
  04da5cc  subc 3, 3, 24
  04da5d0  lwz 24, 8(26)
  04da5d4  ori 3, 3, 4096
  04da5d8  stw 3, 4(24)
  04da5dc  lwz 3, 8(26)
  04da5e0  addic 3, 3, 8
  04da5e4  stw 3, 8(26)
  04da5e8  lwz 3, 32(28)
  04da5ec  lwz 26, 8(3)
  04da5f0  stw 25, 0(26)
  04da5f4  lbz 26, 7144(29)
  04da5f8  lwz 24, 8(3)
  04da5fc  subc 26, 26, 4
  04da600  stw 26, 4(24)
  04da604  lwz 26, 8(3)
  04da608  addic 24, 26, 8
  04da60c  stw 24, 8(3)
  04da610  stw 6, 8(26)
  04da614  lbz 26, 7145(29)
  04da618  lwz 24, 8(3)
  04da61c  subc 26, 26, 4
  04da620  stw 26, 4(24)
  04da624  lwz 26, 8(3)
  04da628  addic 24, 26, 8
  04da62c  stw 24, 8(3)
  04da630  stw 5, 8(26)
  04da634  lbz 26, 7146(29)
  04da638  lwz 24, 8(3)
  04da63c  subc 26, 26, 4
  04da640  stw 26, 4(24)
  04da644  lbz 26, 7147(29)
  04da648  lwz 24, 8(3)
  04da64c  subc 26, 26, 4
  04da650  stw 26, 8(24)
  04da654  lwz 26, 8(3)
  04da658  addic 24, 26, 12
  04da65c  stw 24, 8(3)
  04da660  stw 7, 12(26)
  04da664  lbz 26, 7181(29)
  04da668  lwz 24, 8(3)
  04da66c  subc 26, 26, 4
  04da670  stw 26, 4(24)
  04da674  lwz 26, 8(3)
  04da678  lhz 23, 7192(29)
  04da67c  addic 24, 26, 8
  04da680  lhz 22, 7194(29)
  04da684  cntlzw 22, 22
  04da688  stw 24, 8(3)
  04da68c  cntlzw 24, 23
  04da690  stw 8, 8(26)
  04da694  lbz 23, 7180(29)
  04da698  subc 26, 27, 22
  04da69c  lbz 22, 7142(29)
  04da6a0  slwi 23, 23, 5
  04da6a4  lbz 21, 7140(29)
  04da6a8  subc 24, 27, 24
  04da6ac  or 23, 22, 23
  04da6b0  lbz 22, 7141(29)
  04da6b4  slwi 21, 21, 8
  04da6b8  slwi 24, 24, 16
  04da6bc  slwi 22, 22, 12
  04da6c0  slwi 26, 26, 24
  04da6c4  or 22, 21, 22
  04da6c8  or 23, 23, 22
  04da6cc  or 24, 23, 24
  04da6d0  or 26, 24, 26
  04da6d4  lwz 24, 8(3)
  04da6d8  stw 26, 4(24)
  04da6dc  lwz 26, 8(3)
  04da6e0  lwz 24, 7164(29)
  04da6e4  stw 24, 8(26)
  04da6e8  lwz 26, 8(3)
  04da6ec  lwz 24, 7148(29)
  04da6f0  stw 24, 12(26)
  04da6f4  lwz 26, 8(3)
  04da6f8  lwz 24, 7184(29)
  04da6fc  stw 24, 16(26)
  04da700  lwz 26, 8(3)
  04da704  lwz 24, 7152(29)
  04da708  stw 24, 20(26)
  04da70c  lwz 26, 8(3)
  04da710  lwz 24, 7168(29)
  04da714  stw 24, 24(26)
  04da718  lwz 26, 8(3)
  04da71c  addic 24, 26, 28
  04da720  stw 24, 8(3)
  04da724  stw 10, 28(26)
  04da728  lwz 26, 7188(29)
  04da72c  lwz 24, 8(3)
  04da730  stw 26, 4(24)
  04da734  lwz 26, 8(3)
  04da738  addic 24, 26, 8
  04da73c  stw 24, 8(3)
  04da740  stw 9, 8(26)
  04da744  lwz 26, 7172(29)
  04da748  lwz 24, 8(3)
  04da74c  stw 26, 4(24)
  04da750  lwz 26, 8(3)
  04da754  lwz 24, 7176(29)
  04da758  stw 24, 8(26)
  04da75c  lwz 26, 8(3)
  04da760  lwz 24, 7156(29)
  04da764  stw 24, 12(26)
  04da768  lwz 26, 8(3)
  04da76c  lwz 24, 7160(29)
  04da770  stw 24, 16(26)
  04da774  lwz 26, 8(3)
  04da778  addic 24, 26, 20
  04da77c  stw 24, 8(3)
  04da780  stw 11, 20(26)
  04da784  lbz 26, 7143(29)
  04da788  lwz 24, 8(3)
  04da78c  stw 26, 4(24)
  04da790  lwz 26, 8(3)
  04da794  addic 24, 26, 8
  04da798  stw 24, 8(3)
  04da79c  stw 12, 8(26)
  04da7a0  lhz 26, 7196(29)
  04da7a4  lhz 24, 7198(29)
  04da7a8  rlwimi 26, 24, 16, 0, 15
  04da7ac  lwz 24, 8(3)
  04da7b0  stw 26, 4(24)
  04da7b4  lwz 26, 8(3)
  04da7b8  addic 24, 26, 8
  04da7bc  stw 24, 8(3)
  04da7c0  stw 31, 8(26)
  04da7c4  lhz 26, 7196(29)
  04da7c8  lhz 24, 7192(29)
  04da7cc  rlwimi 26, 24, 16, 0, 15
  04da7d0  lwz 24, 8(3)
  04da7d4  stw 26, 4(24)
  04da7d8  lhz 26, 7198(29)
  04da7dc  lhz 24, 7194(29)
  04da7e0  lwz 23, 8(3)
  04da7e4  rlwimi 26, 24, 16, 0, 15
  04da7e8  stw 26, 8(23)
  04da7ec  lwz 26, 8(3)
  04da7f0  addic 24, 26, 12
  04da7f4  stw 24, 8(3)
  04da7f8  stw 30, 12(26)
  04da7fc  lhz 26, 7194(29)
  04da800  rlwinm 24, 26, 20, 31, 31
  04da804  subc 26, 26, 24
  04da808  lwz 24, 8(3)
  04da80c  ori 26, 26, 4096
  04da810  stw 26, 4(24)
  04da814  lwz 26, 8(3)
  04da818  addic 26, 26, 8
  04da81c  stw 26, 8(3)
  04da820  lwz 26, 36(28)
  04da824  lwz 3, 8(26)
  04da828  stw 25, 0(3)
  04da82c  lbz 3, 7144(29)
  04da830  lwz 25, 8(26)
  04da834  subc 3, 3, 4
  04da838  stw 3, 4(25)
  04da83c  lwz 3, 8(26)
  04da840  addic 25, 3, 8
  04da844  stw 25, 8(26)
  04da848  stw 6, 8(3)
  04da84c  lbz 3, 7145(29)
  04da850  lwz 6, 8(26)
  04da854  subc 3, 3, 4
  04da858  stw 3, 4(6)
  04da85c  lwz 3, 8(26)
  04da860  addic 6, 3, 8
  04da864  stw 6, 8(26)
  04da868  stw 5, 8(3)
  04da86c  lbz 3, 7146(29)
  04da870  lwz 5, 8(26)
  04da874  subc 3, 3, 4
  04da878  stw 3, 4(5)
  04da87c  lbz 3, 7147(29)
  04da880  lwz 5, 8(26)
  04da884  subc 3, 3, 4
  04da888  stw 3, 8(5)
  04da88c  lwz 3, 8(26)
  04da890  addic 5, 3, 12
  04da894  stw 5, 8(26)
  04da898  stw 7, 12(3)
  04da89c  lbz 3, 7181(29)
  04da8a0  subc 3, 3, 4
  04da8a4  lwz 4, 8(26)
  04da8a8  stw 3, 4(4)
  04da8ac  lwz 3, 8(26)
  04da8b0  lhz 5, 7192(29)
  04da8b4  addic 4, 3, 8
  04da8b8  lhz 6, 7194(29)
  04da8bc  cntlzw 6, 6
  04da8c0  stw 4, 8(26)
  04da8c4  cntlzw 4, 5
  04da8c8  stw 8, 8(3)
  04da8cc  lbz 5, 7180(29)
  04da8d0  subc 3, 27, 6
  04da8d4  lbz 6, 7142(29)
  04da8d8  slwi 5, 5, 5
  04da8dc  lbz 7, 7140(29)
  04da8e0  subc 4, 27, 4
  04da8e4  or 5, 6, 5
  04da8e8  lbz 6, 7141(29)
  04da8ec  slwi 7, 7, 8
  04da8f0  slwi 4, 4, 16
  04da8f4  slwi 6, 6, 12
  04da8f8  slwi 3, 3, 24
  04da8fc  or 6, 7, 6
  04da900  or 5, 5, 6
  04da904  or 4, 5, 4
  04da908  or 3, 4, 3
  04da90c  lwz 4, 8(26)
  04da910  stw 3, 4(4)
  04da914  lwz 3, 8(26)
  04da918  lwz 4, 7164(29)
  04da91c  stw 4, 8(3)
  04da920  lwz 3, 8(26)
  04da924  lwz 4, 7148(29)
  04da928  stw 4, 12(3)
  04da92c  lwz 3, 8(26)
  04da930  lwz 4, 7184(29)
  04da934  stw 4, 16(3)
  04da938  lwz 3, 8(26)
  04da93c  lwz 4, 7152(29)
  04da940  stw 4, 20(3)
  04da944  lwz 3, 8(26)
  04da948  lwz 4, 7168(29)
  04da94c  stw 4, 24(3)
  04da950  lwz 3, 8(26)
  04da954  addic 4, 3, 28
  04da958  stw 4, 8(26)
  04da95c  stw 10, 28(3)
  04da960  lwz 3, 7188(29)
  04da964  lwz 4, 8(26)
  04da968  lis 27, 144
  04da96c  stw 3, 4(4)
  04da970  lwz 3, 8(26)
  04da974  addic 4, 3, 8
  04da978  stw 4, 8(26)
  04da97c  stw 9, 8(3)
  04da980  lwz 3, 7172(29)
  04da984  lwz 4, 8(26)
  04da988  li 5, 9
  04da98c  stw 3, 4(4)
  04da990  lwz 3, 8(26)
  04da994  lwz 4, 7176(29)
  04da998  stw 4, 8(3)
  04da99c  lwz 3, 8(26)
  04da9a0  lwz 4, 7156(29)
  04da9a4  stw 4, 12(3)
  04da9a8  lwz 3, 8(26)
  04da9ac  lwz 4, 7160(29)
  04da9b0  stw 4, 16(3)
  04da9b4  lwz 3, 8(26)
  04da9b8  addic 4, 3, 20
  04da9bc  stw 4, 8(26)
  04da9c0  stw 11, 20(3)
  04da9c4  lbz 3, 7143(29)
  04da9c8  lwz 4, 8(26)
  04da9cc  stw 3, 4(4)
  04da9d0  lwz 3, 8(26)
  04da9d4  addic 4, 3, 8
  04da9d8  stw 4, 8(26)
  04da9dc  stw 12, 8(3)
  04da9e0  lhz 3, 7196(29)
  04da9e4  lhz 4, 7198(29)
  04da9e8  rlwimi 3, 4, 16, 0, 15
  04da9ec  lwz 4, 8(26)
  04da9f0  stw 3, 4(4)
  04da9f4  lwz 3, 8(26)
  04da9f8  addic 4, 3, 8
  04da9fc  stw 4, 8(26)
  04daa00  stw 31, 8(3)
  04daa04  lhz 6, 7196(29)
  04daa08  lhz 4, 7192(29)
  04daa0c  ori 3, 29, 0
  04daa10  rlwimi 6, 4, 16, 0, 15
  04daa14  lwz 4, 8(26)
  04daa18  stw 6, 4(4)
  04daa1c  lhz 4, 7198(29)
  04daa20  lhz 6, 7194(29)
  04daa24  lwz 7, 8(26)
  04daa28  rlwimi 4, 6, 16, 0, 15
  04daa2c  stw 4, 8(7)
  04daa30  lwz 4, 8(26)
  04daa34  addic 6, 4, 12
  04daa38  stw 6, 8(26)
  04daa3c  stw 30, 12(4)
  04daa40  lhz 4, 7194(29)
  04daa44  rlwinm 6, 4, 20, 31, 31
  04daa48  subc 4, 4, 6
  04daa4c  lwz 6, 8(26)
  04daa50  ori 4, 4, 4096
  04daa54  stw 4, 4(6)
  04daa58  lwz 4, 8(26)
  04daa5c  addic 4, 4, 8
  04daa60  stw 4, 8(26)
  04daa64  lwz 4, -23532(27)
  04daa68  bl 0x4d83ec
  04daa6c  lwz 4, -23532(27)
  04daa70  ori 3, 29, 0
  04daa74  li 5, 15
  04daa78  bl 0x4d82b8
  04daa7c  lwz 4, 12(28)
  04daa80  ori 3, 29, 0
  04daa84  li 5, 9
  04daa88  bl 0x4d83ec
  04daa8c  lwz 4, 12(28)
  04daa90  ori 3, 29, 0
  04daa94  li 5, 15
  04daa98  bl 0x4d82b8
  04daa9c  lwz 4, 24(28)
  04daaa0  ori 3, 29, 0
  04daaa4  li 5, 9
  04daaa8  bl 0x4d83ec
  04daaac  lwz 4, 24(28)
  04daab0  ori 3, 29, 0
  04daab4  li 5, 15
  04daab8  bl 0x4d82b8
  04daabc  lwz 4, 32(28)
  04daac0  ori 3, 29, 0
  04daac4  li 5, 9
  04daac8  bl 0x4d83ec
  04daacc  lwz 4, 32(28)
  04daad0  ori 3, 29, 0
  04daad4  li 5, 15
  04daad8  bl 0x4d82b8
  04daadc  lwz 3, -23532(27)
  04daae0  lis 4, 4
  04daae4  lwz 5, 1048(29)
  04daae8  lis 7, 4
  04daaec  ori 4, 4, 7568
  04daaf0  lwz 6, 8(3)
  04daaf4  li 30, 0
  04daaf8  stw 4, 0(6)
  04daafc  lwz 4, 8(3)
  04dab00  ori 6, 7, 7564
  04dab04  lis 7, 4
  04dab08  stw 5, 4(4)
  04dab0c  lwz 4, 8(3)
  04dab10  li 5, -256
  04dab14  addic 4, 4, 8
  04dab18  ori 31, 7, 784
  04dab1c  stw 4, 8(3)
  04dab20  lwz 3, -23532(27)
  04dab24  lis 7, 4
  04dab28  li 26, 1
  04dab2c  lwz 4, 8(3)
  04dab30  stw 6, 0(4)
  04dab34  lwz 4, 8(3)
  04dab38  li 6, 515
  04dab3c  stw 5, 4(4)
  04dab40  lwz 4, 8(3)
  04dab44  addic 4, 4, 8
  04dab48  stw 4, 8(3)
  04dab4c  lwz 3, -23532(27)
  04dab50  lis 4, 4
  04dab54  ori 4, 4, 2668
  04dab58  lwz 5, 8(3)
  04dab5c  stw 31, 0(5)
  04dab60  lwz 5, 8(3)
  04dab64  stw 30, 4(5)
  04dab68  lwz 5, 8(3)
  04dab6c  addic 5, 5, 8
  04dab70  stw 5, 8(3)
  04dab74  lwz 3, -23532(27)
  04dab78  lwz 5, 8(3)
  04dab7c  lis 8, 4
  04dab80  stw 4, 0(5)
  04dab84  lwz 4, 8(3)
  04dab88  ori 5, 7, 872
  04dab8c  stw 6, 4(4)
  04dab90  lwz 4, 8(3)
  04dab94  lis 6, 8
  04dab98  addic 4, 4, 8
  04dab9c  ori 6, 6, 776
  04daba0  stw 4, 8(3)
  04daba4  lwz 3, -23532(27)
  04daba8  li 4, 7425
  04dabac  lwz 7, 8(3)
  04dabb0  ori 25, 8, 772
  04dabb4  stw 5, 0(7)
  04dabb8  lwz 5, 8(3)
  04dabbc  li 7, 255
  04dabc0  stw 4, 4(5)
  04dabc4  lwz 4, 8(3)
  04dabc8  li 5, 518
  04dabcc  addic 4, 4, 8
  04dabd0  stw 4, 8(3)
  04dabd4  lwz 3, 32(28)
  04dabd8  lwz 4, 8(3)
  04dabdc  lis 8, 4
  04dabe0  stw 6, 0(4)
  04dabe4  lwz 4, 8(3)
  04dabe8  stw 5, 4(4)
  04dabec  lwz 4, 8(3)
  04dabf0  stw 26, 8(4)
  04dabf4  lwz 4, 8(3)
  04dabf8  addic 4, 4, 12
  04dabfc  stw 4, 8(3)
  04dac00  lwz 3, 12(28)
  04dac04  ori 8, 8, 804
  04dac08  lwz 4, 8(3)
  04dac0c  stw 6, 0(4)
  04dac10  lwz 4, 8(3)
  04dac14  stw 5, 4(4)
  04dac18  lwz 4, 8(3)
  04dac1c  stw 26, 8(4)
  04dac20  lwz 4, 8(3)
  04dac24  addic 4, 4, 12
  04dac28  stw 4, 8(3)
  04dac2c  lwz 3, -23532(27)
  04dac30  lwz 4, 8(3)
  04dac34  stw 6, 0(4)
  04dac38  lwz 4, 8(3)
  04dac3c  stw 5, 4(4)
  04dac40  lwz 4, 8(3)
  04dac44  stw 7, 8(4)
  04dac48  lwz 4, 8(3)
  04dac4c  lis 7, 4
  04dac50  addic 4, 4, 12
  04dac54  ori 7, 7, 7556
  04dac58  stw 4, 8(3)
  04dac5c  lwz 3, -23532(27)
  04dac60  lwz 4, 8(3)
  04dac64  stw 25, 0(4)
  04dac68  lwz 4, 8(3)
  04dac6c  stw 26, 4(4)
  04dac70  lwz 4, 8(3)
  04dac74  addic 4, 4, 8
  04dac78  stw 4, 8(3)
  04dac7c  lwz 3, -23532(27)
  04dac80  li 4, 3
  04dac84  lwz 9, 8(3)
  04dac88  stw 7, 0(9)
  04dac8c  lwz 7, 8(3)
  04dac90  stw 4, 4(7)
  04dac94  lwz 4, 8(3)
  04dac98  lis 7, 257
  04dac9c  addic 4, 4, 8
  04daca0  stw 4, 8(3)
  04daca4  lwz 3, 4(28)
  04daca8  ori 4, 7, 257
  04dacac  lwz 7, 8(3)
  04dacb0  stw 8, 0(7)
  04dacb4  lwz 7, 8(3)
  04dacb8  stw 4, 4(7)
  04dacbc  lwz 7, 8(3)
  04dacc0  addic 7, 7, 8
  04dacc4  stw 7, 8(3)
  04dacc8  lwz 3, 4(28)
  04daccc  lis 7, 4
  04dacd0  ori 27, 7, 800
  04dacd4  lwz 9, 8(3)
  04dacd8  stw 31, 0(9)
  04dacdc  lwz 7, 8(3)
  04dace0  lis 9, -32762
  04dace4  ori 24, 9, 32774
  04dace8  stw 26, 4(7)
  04dacec  lwz 7, 8(3)
  04dacf0  addic 7, 7, 8
  04dacf4  stw 7, 8(3)
  04dacf8  lwz 3, 4(28)
  04dacfc  lis 7, 8
  04dad00  ori 23, 7, 788
  04dad04  lwz 9, 8(3)
  04dad08  stw 27, 0(9)
  04dad0c  lwz 7, 8(3)
  04dad10  lis 9, 770
  04dad14  ori 22, 9, 770
  04dad18  stw 24, 4(7)
  04dad1c  lwz 7, 8(3)
  04dad20  addic 7, 7, 8
  04dad24  stw 7, 8(3)
  04dad28  lwz 3, 4(28)
  04dad2c  lis 7, 771
  04dad30  ori 21, 7, 771
  04dad34  lwz 9, 8(3)
  04dad38  stw 23, 0(9)
  04dad3c  lwz 7, 8(3)
  04dad40  stw 22, 4(7)
  04dad44  lwz 7, 8(3)
  04dad48  stw 21, 8(7)
  04dad4c  lwz 7, 8(3)
  04dad50  addic 7, 7, 12
  04dad54  stw 7, 8(3)
  04dad58  lwz 3, 4(28)
  04dad5c  lwz 7, 8(3)
  04dad60  stw 6, 0(7)
  04dad64  lwz 7, 8(3)
  04dad68  stw 5, 4(7)
  04dad6c  lwz 7, 8(3)
  04dad70  stw 26, 8(7)
  04dad74  lwz 7, 8(3)
  04dad78  addic 7, 7, 12
  04dad7c  stw 7, 8(3)
  04dad80  lwz 3, 4(28)
  04dad84  lwz 7, 8(3)
  04dad88  stw 25, 0(7)
  04dad8c  lwz 7, 8(3)
  04dad90  stw 26, 4(7)
  04dad94  lwz 7, 8(3)
  04dad98  addic 7, 7, 8
  04dad9c  stw 7, 8(3)
  04dada0  lwz 3, 8(28)
  04dada4  lwz 7, 8(3)
  04dada8  stw 8, 0(7)
  04dadac  lwz 7, 8(3)
  04dadb0  stw 4, 4(7)
  04dadb4  lwz 4, 8(3)
  04dadb8  addic 4, 4, 8
  04dadbc  stw 4, 8(3)
  04dadc0  lwz 3, 8(28)
  04dadc4  lwz 4, 8(3)
  04dadc8  stw 31, 0(4)
  04dadcc  lwz 4, 8(3)
  04dadd0  stw 26, 4(4)
  04dadd4  lwz 4, 8(3)
  04dadd8  addic 4, 4, 8
  04daddc  stw 4, 8(3)
  04dade0  lwz 3, 8(28)
  04dade4  lwz 4, 8(3)
  04dade8  stw 27, 0(4)
  04dadec  lwz 4, 8(3)
  04dadf0  stw 24, 4(4)
  04dadf4  lwz 4, 8(3)
  04dadf8  addic 4, 4, 8
  04dadfc  stw 4, 8(3)
  04dae00  lwz 3, 8(28)
  04dae04  lwz 4, 8(3)
  04dae08  stw 23, 0(4)
  04dae0c  lwz 4, 8(3)
  04dae10  stw 22, 4(4)
  04dae14  lwz 4, 8(3)
  04dae18  stw 21, 8(4)
  04dae1c  lwz 4, 8(3)
  04dae20  addic 4, 4, 12
  04dae24  stw 4, 8(3)
  04dae28  lwz 3, 8(28)
  04dae2c  lwz 4, 8(3)
  04dae30  stw 6, 0(4)
  04dae34  lwz 4, 8(3)
  04dae38  stw 5, 4(4)
  04dae3c  lwz 4, 8(3)
  04dae40  stw 26, 8(4)
  04dae44  lwz 4, 8(3)
  04dae48  addic 4, 4, 12
  04dae4c  stw 4, 8(3)
  04dae50  lwz 4, 8(28)
  04dae54  lwz 3, 8(4)
  04dae58  stw 25, 0(3)
  04dae5c  lwz 3, 8(4)
  04dae60  stw 26, 4(3)
  04dae64  lwz 3, 8(4)
  04dae68  lwz 6, 4(29)
  04dae6c  addic 5, 3, 8
  04dae70  lwz 7, 8(29)
  04dae74  ori 3, 29, 0
  04dae78  stw 5, 8(4)
  04dae7c  lwz 4, 0(29)
  04dae80  lwz 8, 40(28)
  04dae84  ori 5, 6, 0
  04dae88  std 2, 40(1)
  04dae8c  ori 6, 7, 0
  04dae90  lwz 7, 16(4)
  04dae94  ori 4, 8, 0
  04dae98  lwz 8, 0(7)
  04dae9c  lwz 2, 4(7)
  04daea0  mtctr 8
  04daea4  bcctrl 20, 30
  04daea8  ld 2, 40(1)
  04daeac  ori 3, 29, 0
  04daeb0  bl 0x4d86b0
  04daeb4  lwz 4, 40(28)
  04daeb8  ori 3, 29, 0
  04daebc  li 5, 12
  04daec0  bl 0x4d83ec
  04daec4  lwz 4, 40(28)
  04daec8  ori 3, 29, 0
  04daecc  li 5, 12
  04daed0  bl 0x4d82b8
  04daed4  lwz 3, 40(28)
  04daed8  lis 4, 4
  04daedc  ori 4, 4, 2672
  04daee0  lwz 5, 8(3)
  04daee4  stw 4, 0(5)
  04daee8  lwz 4, 8(3)
  04daeec  lis 5, 4
  04daef0  ori 5, 5, 2676
  04daef4  stw 30, 4(4)
  04daef8  lwz 4, 8(3)
  04daefc  addic 4, 4, 8
  04daf00  stw 4, 8(3)
  04daf04  lwz 3, 40(28)
  04daf08  lwz 4, 8(3)
  04daf0c  stw 5, 0(4)
  04daf10  lwz 4, 8(3)
  04daf14  stw 30, 4(4)
  04daf18  lwz 4, 8(3)
  04daf1c  addic 4, 4, 8
  04daf20  stw 4, 8(3)
  04daf24  lwz 3, 40(28)
  04daf28  lwz 4, 8(3)
  04daf2c  stw 31, 0(4)
  04daf30  lwz 4, 8(3)
  04daf34  stw 26, 4(4)
  04daf38  lwz 4, 8(3)
  04daf3c  addic 4, 4, 8
  04daf40  stw 4, 8(3)
  04daf44  lwz 3, 40(28)
  04daf48  lwz 4, 8(3)
  04daf4c  stw 27, 0(4)
  04daf50  lwz 4, 8(3)
  04daf54  stw 24, 4(4)
  04daf58  lwz 4, 8(3)
  04daf5c  addic 4, 4, 8
  04daf60  stw 4, 8(3)
  04daf64  lwz 3, 40(28)
  04daf68  lwz 4, 8(3)
  04daf6c  stw 23, 0(4)
  04daf70  lwz 4, 8(3)
  04daf74  stw 22, 4(4)
  04daf78  lwz 4, 8(3)
  04daf7c  stw 21, 8(4)
  04daf80  lwz 4, 8(3)
  04daf84  addic 4, 4, 12
  04daf88  stw 4, 8(3)
  04daf8c  lwz 3, 40(28)
  04daf90  lwz 4, 8(3)
  04daf94  stw 25, 0(4)
  04daf98  lwz 4, 8(3)
  04daf9c  stw 30, 4(4)
  04dafa0  lwz 4, 8(3)
  04dafa4  addic 4, 4, 8
  04dafa8  stw 4, 8(3)
  04dafac  ld 0, 224(1)
  04dafb0  mtlr 0
  04dafb4  ld 21, 120(1)
  04dafb8  ld 22, 128(1)
  04dafbc  ld 23, 136(1)
  04dafc0  ld 24, 144(1)
  04dafc4  ld 25, 152(1)
  04dafc8  ld 26, 160(1)
  04dafcc  ld 27, 168(1)
  04dafd0  ld 28, 176(1)
  04dafd4  ld 29, 184(1)
  04dafd8  ld 30, 192(1)
  04dafdc  ld 31, 200(1)
  04dafe0  addi 1, 1, 208
  04dafe4  blr

idol_draw::Gfx_DrawSurface:   # 0x4dafe8, 0x948 bytes
  04dafe8  stdu 1, -160(1)
  04dafec  mflr 0
  04daff0  std 0, 176(1)
  04daff4  std 30, 144(1)
  04daff8  clrlwi 5, 5, 24
  04daffc  ori 30, 3, 0
  04db000  std 31, 152(1)
  04db004  cmpwi 5, 0
  04db008  std 29, 136(1)
  04db00c  std 28, 128(1)
  04db010  std 27, 120(1)
  04db014  ori 31, 4, 0
  04db018  bt 2, 0x4db0b4
  04db01c  lis 3, 144
  04db020  lis 4, 102
  04db024  addic 29, 3, -23532
  04db028  addic 4, 4, -28064
  04db02c  lwz 3, 40(29)
  04db030  bl 0x50eaf8
  04db034  nop
  04db038  lwz 3, 40(29)
  04db03c  bl 0x50ec5c
  04db040  nop
  04db044  lwz 3, 40(29)
  04db048  lis 4, 4
  04db04c  li 5, 16
  04db050  ori 4, 4, 100
  04db054  lis 7, 4
  04db058  lwz 6, 8(3)
  04db05c  stw 4, 0(6)
  04db060  lwz 4, 8(3)
  04db064  ori 6, 7, 104
  04db068  stw 5, 4(4)
  04db06c  lwz 4, 8(3)
  04db070  addic 5, 4, 8
  04db074  stw 5, 8(3)
  04db078  stw 6, 8(4)
  04db07c  lwz 6, 8(3)
  04db080  li 5, 0
  04db084  lis 4, 102
  04db088  addic 4, 4, -28048
  04db08c  stw 5, 4(6)
  04db090  lwz 5, 8(3)
  04db094  addic 5, 5, 8
  04db098  stw 5, 8(3)
  04db09c  lwz 3, 40(29)
  04db0a0  bl 0x50eaf8
  04db0a4  nop
  04db0a8  lwz 3, 40(29)
  04db0ac  bl 0x50ec5c
  04db0b0  nop
  04db0b4  lis 3, 144
  04db0b8  lis 4, 4
  04db0bc  addic 29, 3, -23532
  04db0c0  ori 3, 4, 404
  04db0c4  lis 4, 275
  04db0c8  lis 7, 4
  04db0cc  lwz 5, 40(29)
  04db0d0  ori 7, 7, 396
  04db0d4  lwz 6, 8(5)
  04db0d8  stw 3, 0(6)
  04db0dc  lbz 3, 4(31)
  04db0e0  lwz 6, 8(5)
  04db0e4  subc 3, 3, 4
  04db0e8  stw 3, 4(6)
  04db0ec  lwz 3, 8(5)
  04db0f0  addic 6, 3, 8
  04db0f4  stw 6, 8(5)
  04db0f8  stw 7, 8(3)
  04db0fc  lbz 3, 5(31)
  04db100  lis 6, 8
  04db104  lwz 8, 8(5)
  04db108  lis 7, 4
  04db10c  subc 3, 3, 4
  04db110  ori 6, 6, 436
  04db114  stw 3, 4(8)
  04db118  lwz 3, 8(5)
  04db11c  addic 8, 3, 8
  04db120  stw 8, 8(5)
  04db124  stw 6, 8(3)
  04db128  lbz 3, 6(31)
  04db12c  lwz 9, 8(5)
  04db130  ori 6, 7, 408
  04db134  subc 3, 3, 4
  04db138  lis 7, 24
  04db13c  li 8, 31
  04db140  ori 7, 7, 520
  04db144  stw 3, 4(9)
  04db148  lbz 3, 7(31)
  04db14c  lwz 9, 8(5)
  04db150  subc 3, 3, 4
  04db154  stw 3, 8(9)
  04db158  lwz 3, 8(5)
  04db15c  addic 9, 3, 12
  04db160  stw 9, 8(5)
  04db164  stw 6, 12(3)
  04db168  lbz 3, 41(31)
  04db16c  subc 3, 3, 4
  04db170  lwz 4, 8(5)
  04db174  stw 3, 4(4)
  04db178  lwz 3, 8(5)
  04db17c  addic 4, 3, 8
  04db180  stw 4, 8(5)
  04db184  lhz 4, 52(31)
  04db188  lhz 6, 54(31)
  04db18c  stw 7, 8(3)
  04db190  cntlzw 3, 4
  04db194  lbz 4, 40(31)
  04db198  cntlzw 6, 6
  04db19c  lbz 7, 2(31)
  04db1a0  subc 3, 8, 3
  04db1a4  lbz 9, 0(31)
  04db1a8  subc 6, 8, 6
  04db1ac  slwi 4, 4, 5
  04db1b0  lbz 8, 1(31)
  04db1b4  slwi 9, 9, 8
  04db1b8  or 4, 7, 4
  04db1bc  slwi 7, 8, 12
  04db1c0  slwi 3, 3, 16
  04db1c4  or 7, 9, 7
  04db1c8  slwi 6, 6, 24
  04db1cc  or 4, 4, 7
  04db1d0  or 3, 4, 3
  04db1d4  lwz 4, 8(5)
  04db1d8  or 3, 3, 6
  04db1dc  lis 6, 4
  04db1e0  stw 3, 4(4)
  04db1e4  lwz 3, 8(5)
  04db1e8  lwz 4, 24(31)
  04db1ec  ori 6, 6, 556
  04db1f0  stw 4, 8(3)
  04db1f4  lwz 3, 8(5)
  04db1f8  lwz 4, 8(31)
  04db1fc  stw 4, 12(3)
  04db200  lwz 3, 8(5)
  04db204  lwz 4, 44(31)
  04db208  stw 4, 16(3)
  04db20c  lwz 3, 8(5)
  04db210  lwz 4, 12(31)
  04db214  stw 4, 20(3)
  04db218  lwz 3, 8(5)
  04db21c  lwz 4, 28(31)
  04db220  stw 4, 24(3)
  04db224  lwz 3, 8(5)
  04db228  addic 4, 3, 28
  04db22c  stw 4, 8(5)
  04db230  stw 6, 28(3)
  04db234  lwz 3, 48(31)
  04db238  lis 4, 16
  04db23c  lwz 7, 8(5)
  04db240  ori 4, 4, 640
  04db244  lis 6, 4
  04db248  stw 3, 4(7)
  04db24c  lwz 3, 8(5)
  04db250  addic 7, 3, 8
  04db254  stw 7, 8(5)
  04db258  stw 4, 8(3)
  04db25c  lwz 3, 32(31)
  04db260  ori 4, 6, 544
  04db264  lwz 7, 8(5)
  04db268  lis 6, 4
  04db26c  ori 6, 6, 696
  04db270  stw 3, 4(7)
  04db274  lwz 3, 8(5)
  04db278  lwz 7, 36(31)
  04db27c  stw 7, 8(3)
  04db280  lwz 3, 8(5)
  04db284  lwz 7, 16(31)
  04db288  li 28, 0
  04db28c  stw 7, 12(3)
  04db290  lwz 3, 8(5)
  04db294  lwz 7, 20(31)
  04db298  stw 7, 16(3)
  04db29c  lwz 3, 8(5)
  04db2a0  addic 7, 3, 20
  04db2a4  stw 7, 8(5)
  04db2a8  stw 4, 20(3)
  04db2ac  lbz 3, 3(31)
  04db2b0  lis 4, 8
  04db2b4  lwz 7, 8(5)
  04db2b8  ori 4, 4, 512
  04db2bc  stw 3, 4(7)
  04db2c0  lwz 3, 8(5)
  04db2c4  addic 7, 3, 8
  04db2c8  stw 7, 8(5)
  04db2cc  stw 6, 8(3)
  04db2d0  lhz 3, 56(31)
  04db2d4  lhz 6, 58(31)
  04db2d8  lwz 7, 8(5)
  04db2dc  rlwimi 3, 6, 16, 0, 15
  04db2e0  lis 6, 4
  04db2e4  ori 6, 6, 7560
  04db2e8  stw 3, 4(7)
  04db2ec  lwz 3, 8(5)
  04db2f0  addic 7, 3, 8
  04db2f4  stw 7, 8(5)
  04db2f8  stw 4, 8(3)
  04db2fc  lhz 3, 56(31)
  04db300  lhz 4, 52(31)
  04db304  lwz 7, 8(5)
  04db308  rlwimi 3, 4, 16, 0, 15
  04db30c  lis 4, 4
  04db310  stw 3, 4(7)
  04db314  lhz 3, 58(31)
  04db318  lhz 7, 54(31)
  04db31c  lwz 8, 8(5)
  04db320  rlwimi 3, 7, 16, 0, 15
  04db324  ori 4, 4, 2676
  04db328  stw 3, 8(8)
  04db32c  lwz 3, 8(5)
  04db330  addic 7, 3, 12
  04db334  stw 7, 8(5)
  04db338  stw 6, 12(3)
  04db33c  lhz 3, 54(31)
  04db340  lwz 7, 8(5)
  04db344  rlwinm 6, 3, 20, 31, 31
  04db348  subc 3, 3, 6
  04db34c  ori 3, 3, 4096
  04db350  lis 6, 4
  04db354  stw 3, 4(7)
  04db358  lwz 3, 8(5)
  04db35c  addic 3, 3, 8
  04db360  ori 6, 6, 2672
  04db364  stw 3, 8(5)
  04db368  lwz 3, 40(29)
  04db36c  lwz 5, 8(3)
  04db370  stw 4, 0(5)
  04db374  lwz 4, 8(3)
  04db378  lis 5, 4
  04db37c  ori 5, 5, 812
  04db380  stw 28, 4(4)
  04db384  lwz 4, 8(3)
  04db388  addic 4, 4, 8
  04db38c  stw 4, 8(3)
  04db390  lwz 3, 40(29)
  04db394  lwz 4, 8(3)
  04db398  stw 6, 0(4)
  04db39c  lwz 4, 8(3)
  04db3a0  lis 6, 4
  04db3a4  stw 28, 4(4)
  04db3a8  lwz 4, 8(3)
  04db3ac  addic 4, 4, 8
  04db3b0  stw 4, 8(3)
  04db3b4  lwz 3, 40(29)
  04db3b8  lwz 4, 8(3)
  04db3bc  stw 5, 0(4)
  04db3c0  lwz 4, 8(3)
  04db3c4  ori 5, 6, 784
  04db3c8  lis 6, 4
  04db3cc  stw 28, 4(4)
  04db3d0  lwz 4, 8(3)
  04db3d4  addic 4, 4, 8
  04db3d8  stw 4, 8(3)
  04db3dc  lwz 3, 40(29)
  04db3e0  lwz 4, 8(3)
  04db3e4  stw 5, 0(4)
  04db3e8  lwz 4, 8(3)
  04db3ec  ori 5, 6, 772
  04db3f0  stw 28, 4(4)
  04db3f4  lwz 4, 8(3)
  04db3f8  addic 4, 4, 8
  04db3fc  stw 4, 8(3)
  04db400  lwz 3, 40(29)
  04db404  lwz 4, 8(3)
  04db408  stw 5, 0(4)
  04db40c  lwz 4, 8(3)
  04db410  lis 5, 8
  04db414  ori 5, 5, 6656
  04db418  stw 28, 4(4)
  04db41c  lwz 4, 8(3)
  04db420  addic 4, 4, 8
  04db424  stw 4, 8(3)
  04db428  lwz 3, 40(29)
  04db42c  lbz 4, 7274(30)
  04db430  lwz 6, 7280(30)
  04db434  addic 4, 4, 1
  04db438  lbz 7, 7261(30)
  04db43c  lbz 8, 7260(30)
  04db440  ori 4, 4, 8
  04db444  lbz 9, 7263(30)
  04db448  slwi 8, 8, 8
  04db44c  rlwimi 4, 7, 16, 8, 15
  04db450  lbz 7, 7262(30)
  04db454  lhz 10, 7270(30)
  04db458  slwi 9, 9, 2
  04db45c  lhz 11, 7268(30)
  04db460  or 4, 4, 8
  04db464  slwi 7, 7, 4
  04db468  lwz 8, 7264(30)
  04db46c  lwz 12, 7276(30)
  04db470  or 7, 9, 7
  04db474  lwz 9, 8(3)
  04db478  rlwimi 10, 11, 16, 0, 15
  04db47c  lhz 27, 7272(30)
  04db480  or 4, 4, 7
  04db484  stw 5, 0(9)
  04db488  lwz 5, 8(3)
  04db48c  stw 6, 4(5)
  04db490  lwz 5, 8(3)
  04db494  lis 6, 4
  04db498  stw 4, 8(5)
  04db49c  lwz 4, 8(3)
  04db4a0  addic 5, 4, 12
  04db4a4  stw 5, 8(3)
  04db4a8  ori 5, 6, 6680
  04db4ac  lis 6, 4
  04db4b0  stw 5, 12(4)
  04db4b4  lwz 7, 8(3)
  04db4b8  lis 5, 4
  04db4bc  slwi 4, 27, 20
  04db4c0  ori 5, 5, 6208
  04db4c4  or 4, 12, 4
  04db4c8  stw 10, 4(7)
  04db4cc  lwz 7, 8(3)
  04db4d0  addic 9, 7, 8
  04db4d4  lis 10, 514
  04db4d8  stw 9, 8(3)
  04db4dc  stw 5, 8(7)
  04db4e0  lwz 9, 8(3)
  04db4e4  ori 5, 6, 6672
  04db4e8  lis 6, 4
  04db4ec  lis 7, -32768
  04db4f0  ori 6, 6, 6668
  04db4f4  stw 4, 4(9)
  04db4f8  lwz 4, 8(3)
  04db4fc  addic 9, 4, 8
  04db500  stw 9, 8(3)
  04db504  stw 5, 8(4)
  04db508  lwz 11, 8(3)
  04db50c  lis 4, 4
  04db510  lis 5, 16387
  04db514  ori 4, 4, 6664
  04db518  stw 8, 4(11)
  04db51c  lwz 8, 8(3)
  04db520  ori 5, 5, 771
  04db524  addic 8, 8, 8
  04db528  lis 9, 4
  04db52c  stw 8, 8(3)
  04db530  lwz 3, 40(29)
  04db534  lwz 8, 8(3)
  04db538  stw 6, 0(8)
  04db53c  lwz 6, 8(3)
  04db540  stw 7, 4(6)
  04db544  lwz 6, 8(3)
  04db548  ori 7, 9, 6676
  04db54c  addic 6, 6, 8
  04db550  stw 6, 8(3)
  04db554  lwz 3, 40(29)
  04db558  lwz 6, 8(3)
  04db55c  stw 4, 0(6)
  04db560  lwz 4, 8(3)
  04db564  stw 5, 4(4)
  04db568  lwz 4, 8(3)
  04db56c  ori 5, 10, 8192
  04db570  addic 4, 4, 8
  04db574  stw 4, 8(3)
  04db578  lwz 4, 40(29)
  04db57c  lwz 3, 8(4)
  04db580  stw 7, 0(3)
  04db584  lwz 6, 8(4)
  04db588  ori 3, 30, 0
  04db58c  stw 5, 4(6)
  04db590  lwz 5, 8(4)
  04db594  std 2, 40(1)
  04db598  addic 5, 5, 8
  04db59c  stw 5, 8(4)
  04db5a0  lwz 5, 0(30)
  04db5a4  lwz 4, 40(29)
  04db5a8  lwz 8, 16(5)
  04db5ac  lhz 5, 52(31)
  04db5b0  lhz 6, 54(31)
  04db5b4  lwz 7, 0(8)
  04db5b8  lwz 2, 4(8)
  04db5bc  mtctr 7
  04db5c0  bcctrl 20, 30
  04db5c4  lwz 4, 40(29)
  04db5c8  ori 3, 30, 0
  04db5cc  ld 2, 40(1)
  04db5d0  li 5, 0
  04db5d4  bl 0x4d83ec
  04db5d8  lwz 4, 40(29)
  04db5dc  ori 3, 30, 0
  04db5e0  li 5, 0
  04db5e4  bl 0x4d82b8
  04db5e8  lwz 3, 40(29)
  04db5ec  lis 4, 4
  04db5f0  li 5, 2
  04db5f4  ori 4, 4, 5952
  04db5f8  lis 7, 4
  04db5fc  lwz 6, 8(3)
  04db600  ori 7, 7, 5760
  04db604  stw 4, 0(6)
  04db608  lwz 4, 8(3)
  04db60c  stw 5, 4(4)
  04db610  lwz 4, 8(3)
  04db614  addic 6, 4, 8
  04db618  stw 6, 8(3)
  04db61c  stw 7, 8(4)
  04db620  lwz 7, 8(3)
  04db624  lis 4, 4
  04db628  lis 6, 4
  04db62c  ori 4, 4, 5956
  04db630  ori 6, 6, 5764
  04db634  stw 28, 4(7)
  04db638  lwz 7, 8(3)
  04db63c  addic 7, 7, 8
  04db640  stw 7, 8(3)
  04db644  lwz 3, 40(29)
  04db648  lwz 7, 8(3)
  04db64c  stw 4, 0(7)
  04db650  lwz 4, 8(3)
  04db654  stw 5, 4(4)
  04db658  lwz 4, 8(3)
  04db65c  addic 7, 4, 8
  04db660  stw 7, 8(3)
  04db664  stw 6, 8(4)
  04db668  lwz 7, 8(3)
  04db66c  lis 4, 4
  04db670  lis 6, 4
  04db674  ori 4, 4, 5960
  04db678  ori 6, 6, 5768
  04db67c  stw 28, 4(7)
  04db680  lwz 7, 8(3)
  04db684  addic 7, 7, 8
  04db688  stw 7, 8(3)
  04db68c  lwz 3, 40(29)
  04db690  lwz 7, 8(3)
  04db694  stw 4, 0(7)
  04db698  lwz 4, 8(3)
  04db69c  stw 5, 4(4)
  04db6a0  lwz 4, 8(3)
  04db6a4  addic 7, 4, 8
  04db6a8  stw 7, 8(3)
  04db6ac  stw 6, 8(4)
  04db6b0  lwz 7, 8(3)
  04db6b4  lis 4, 4
  04db6b8  lis 6, 4
  04db6bc  ori 4, 4, 5964
  04db6c0  ori 6, 6, 5772
  04db6c4  stw 28, 4(7)
  04db6c8  lwz 7, 8(3)
  04db6cc  addic 7, 7, 8
  04db6d0  stw 7, 8(3)
  04db6d4  lwz 3, 40(29)
  04db6d8  lis 9, -16512
  04db6dc  lwz 7, 8(3)
  04db6e0  stw 4, 0(7)
  04db6e4  lwz 4, 8(3)
  04db6e8  lis 7, 12
  04db6ec  ori 7, 7, 5392
  04db6f0  stw 5, 4(4)
  04db6f4  lwz 4, 8(3)
  04db6f8  addic 5, 4, 8
  04db6fc  stw 5, 8(3)
  04db700  stw 6, 8(4)
  04db704  lwz 8, 8(3)
  04db708  lis 4, 16396
  04db70c  lis 5, 4
  04db710  ori 4, 4, 5908
  04db714  ori 5, 5, 6152
  04db718  stw 28, 4(8)
  04db71c  lwz 8, 8(3)
  04db720  li 6, 8
  04db724  addic 8, 8, 8
  04db728  stw 8, 8(3)
  04db72c  lwz 3, 40(29)
  04db730  lwz 8, 8(3)
  04db734  stw 4, 0(8)
  04db738  lwz 4, 8(3)
  04db73c  lis 8, 8
  04db740  stw 28, 4(4)
  04db744  lwz 4, 8(3)
  04db748  ori 8, 8, 6272
  04db74c  stw 28, 8(4)
  04db750  lwz 4, 8(3)
  04db754  stw 28, 12(4)
  04db758  lwz 4, 8(3)
  04db75c  stw 5, 16(4)
  04db760  lwz 4, 8(3)
  04db764  stw 6, 20(4)
  04db768  lwz 4, 8(3)
  04db76c  lis 6, 144
  04db770  addic 4, 4, 24
  04db774  stw 4, 8(3)
  04db778  lwz 3, 40(29)
  04db77c  lwz 4, 8(3)
  04db780  stw 7, 0(4)
  04db784  lwz 4, 8(3)
  04db788  stw 28, 4(4)
  04db78c  lwz 4, 8(3)
  04db790  stw 28, 8(4)
  04db794  lwz 4, 8(3)
  04db798  lfs 1, -23216(6)
  04db79c  stfs 1, 12(4)
  04db7a0  lwz 4, 8(3)
  04db7a4  addic 4, 4, 16
  04db7a8  stw 4, 8(3)
  04db7ac  lwz 3, 40(29)
  04db7b0  lis 4, 16256
  04db7b4  lwz 10, 8(3)
  04db7b8  stw 8, 0(10)
  04db7bc  lwz 10, 8(3)
  04db7c0  stw 9, 4(10)
  04db7c4  lwz 10, 8(3)
  04db7c8  stw 4, 8(10)
  04db7cc  lwz 10, 8(3)
  04db7d0  addic 10, 10, 12
  04db7d4  stw 10, 8(3)
  04db7d8  lwz 3, 40(29)
  04db7dc  lwz 10, 8(3)
  04db7e0  stw 7, 0(10)
  04db7e4  lwz 10, 8(3)
  04db7e8  stw 28, 4(10)
  04db7ec  lwz 10, 8(3)
  04db7f0  stw 4, 8(10)
  04db7f4  lwz 10, 8(3)
  04db7f8  lfs 1, -23216(6)
  04db7fc  stfs 1, 12(10)
  04db800  lwz 10, 8(3)
  04db804  addic 10, 10, 16
  04db808  stw 10, 8(3)
  04db80c  lwz 3, 40(29)
  04db810  lwz 10, 8(3)
  04db814  stw 8, 0(10)
  04db818  lwz 10, 8(3)
  04db81c  stw 9, 4(10)
  04db820  lwz 10, 8(3)
  04db824  stw 9, 8(10)
  04db828  lwz 10, 8(3)
  04db82c  addic 10, 10, 12
  04db830  stw 10, 8(3)
  04db834  lwz 3, 40(29)
  04db838  lwz 10, 8(3)
  04db83c  stw 7, 0(10)
  04db840  lwz 10, 8(3)
  04db844  stw 4, 4(10)
  04db848  lwz 10, 8(3)
  04db84c  stw 4, 8(10)
  04db850  lwz 10, 8(3)
  04db854  lfs 1, -23216(6)
  04db858  stfs 1, 12(10)
  04db85c  lwz 10, 8(3)
  04db860  addic 10, 10, 16
  04db864  stw 10, 8(3)
  04db868  lwz 3, 40(29)
  04db86c  lwz 10, 8(3)
  04db870  stw 8, 0(10)
  04db874  lwz 10, 8(3)
  04db878  stw 4, 4(10)
  04db87c  lwz 10, 8(3)
  04db880  stw 9, 8(10)
  04db884  lwz 9, 8(3)
  04db888  addic 9, 9, 12
  04db88c  stw 9, 8(3)
  04db890  lwz 3, 40(29)
  04db894  lwz 9, 8(3)
  04db898  stw 7, 0(9)
  04db89c  lwz 7, 8(3)
  04db8a0  stw 4, 4(7)
  04db8a4  lwz 7, 8(3)
  04db8a8  stw 28, 8(7)
  04db8ac  lwz 7, 8(3)
  04db8b0  lfs 1, -23216(6)
  04db8b4  stfs 1, 12(7)
  04db8b8  lwz 6, 8(3)
  04db8bc  addic 6, 6, 16
  04db8c0  stw 6, 8(3)
  04db8c4  lwz 3, 40(29)
  04db8c8  lwz 6, 8(3)
  04db8cc  stw 8, 0(6)
  04db8d0  lwz 6, 8(3)
  04db8d4  stw 4, 4(6)
  04db8d8  lwz 6, 8(3)
  04db8dc  stw 4, 8(6)
  04db8e0  lwz 4, 8(3)
  04db8e4  addic 4, 4, 12
  04db8e8  stw 4, 8(3)
  04db8ec  lwz 3, 40(29)
  04db8f0  lwz 4, 8(3)
  04db8f4  stw 5, 0(4)
  04db8f8  lwz 4, 8(3)
  04db8fc  stw 28, 4(4)
  04db900  lwz 4, 8(3)
  04db904  addic 4, 4, 8
  04db908  stw 4, 8(3)
  04db90c  ld 0, 176(1)
  04db910  mtlr 0
  04db914  ld 27, 120(1)
  04db918  ld 28, 128(1)
  04db91c  ld 29, 136(1)
  04db920  ld 30, 144(1)
  04db924  ld 31, 152(1)
  04db928  addi 1, 1, 160
  04db92c  blr

idol_draw::Gfx_DrawStereoSurface:   # 0x4db930, 0xf98 bytes
  04db930  stdu 1, -240(1)
  04db934  mflr 0
  04db938  std 0, 256(1)
  04db93c  std 29, 216(1)
  04db940  clrlwi 5, 5, 24
  04db944  std 30, 224(1)
  04db948  ori 29, 3, 0
  04db94c  cmpwi 5, 0
  04db950  std 31, 232(1)
  04db954  std 28, 208(1)
  04db958  std 27, 200(1)
  04db95c  std 26, 192(1)
  04db960  std 25, 184(1)
  04db964  std 24, 176(1)
  04db968  std 23, 168(1)
  04db96c  std 22, 160(1)
  04db970  std 21, 152(1)
  04db974  std 20, 144(1)
  04db978  std 19, 136(1)
  04db97c  std 18, 128(1)
  04db980  std 17, 120(1)
  04db984  ori 30, 4, 0
  04db988  bt 2, 0x4dba24
  04db98c  lis 3, 144
  04db990  lis 4, 102
  04db994  addic 31, 3, -23532
  04db998  addic 4, 4, -28064
  04db99c  lwz 3, 40(31)
  04db9a0  bl 0x50eaf8
  04db9a4  nop
  04db9a8  lwz 3, 40(31)
  04db9ac  bl 0x50ec5c
  04db9b0  nop
  04db9b4  lwz 3, 40(31)
  04db9b8  lis 4, 4
  04db9bc  li 5, 16
  04db9c0  ori 4, 4, 100
  04db9c4  lis 7, 4
  04db9c8  lwz 6, 8(3)
  04db9cc  stw 4, 0(6)
  04db9d0  lwz 4, 8(3)
  04db9d4  ori 6, 7, 104
  04db9d8  stw 5, 4(4)
  04db9dc  lwz 4, 8(3)
  04db9e0  addic 5, 4, 8
  04db9e4  stw 5, 8(3)
  04db9e8  stw 6, 8(4)
  04db9ec  lwz 6, 8(3)
  04db9f0  li 5, 0
  04db9f4  lis 4, 102
  04db9f8  addic 4, 4, -28048
  04db9fc  stw 5, 4(6)
  04dba00  lwz 5, 8(3)
  04dba04  addic 5, 5, 8
  04dba08  stw 5, 8(3)
  04dba0c  lwz 3, 40(31)
  04dba10  bl 0x50eaf8
  04dba14  nop
  04dba18  lwz 3, 40(31)
  04dba1c  bl 0x50ec5c
  04dba20  nop
  04dba24  lis 28, 144
  04dba28  lis 3, 4
  04dba2c  addic 28, 28, -23532
  04dba30  ori 3, 3, 2676
  04dba34  li 31, 0
  04dba38  lis 6, 4
  04dba3c  lwz 4, 40(28)
  04dba40  lwz 5, 8(4)
  04dba44  stw 3, 0(5)
  04dba48  lwz 3, 8(4)
  04dba4c  ori 5, 6, 2672
  04dba50  lis 6, 4
  04dba54  stw 31, 4(3)
  04dba58  lwz 3, 8(4)
  04dba5c  addic 3, 3, 8
  04dba60  stw 3, 8(4)
  04dba64  lwz 3, 40(28)
  04dba68  lwz 4, 8(3)
  04dba6c  stw 5, 0(4)
  04dba70  lwz 4, 8(3)
  04dba74  ori 5, 6, 812
  04dba78  lis 6, 4
  04dba7c  stw 31, 4(4)
  04dba80  lwz 4, 8(3)
  04dba84  addic 4, 4, 8
  04dba88  stw 4, 8(3)
  04dba8c  lwz 3, 40(28)
  04dba90  lwz 4, 8(3)
  04dba94  stw 5, 0(4)
  04dba98  lwz 4, 8(3)
  04dba9c  ori 5, 6, 784
  04dbaa0  lis 6, 4
  04dbaa4  stw 31, 4(4)
  04dbaa8  lwz 4, 8(3)
  04dbaac  addic 4, 4, 8
  04dbab0  ori 6, 6, 772
  04dbab4  stw 4, 8(3)
  04dbab8  lwz 3, 40(28)
  04dbabc  lwz 4, 8(3)
  04dbac0  stw 5, 0(4)
  04dbac4  lwz 4, 8(3)
  04dbac8  li 5, 0
  04dbacc  stw 31, 4(4)
  04dbad0  lwz 4, 8(3)
  04dbad4  addic 4, 4, 8
  04dbad8  stw 4, 8(3)
  04dbadc  lwz 4, 40(28)
  04dbae0  ori 3, 29, 0
  04dbae4  lwz 7, 8(4)
  04dbae8  stw 6, 0(7)
  04dbaec  lwz 6, 8(4)
  04dbaf0  stw 31, 4(6)
  04dbaf4  lwz 6, 8(4)
  04dbaf8  addic 6, 6, 8
  04dbafc  stw 6, 8(4)
  04dbb00  lwz 4, 40(28)
  04dbb04  bl 0x4d83ec
  04dbb08  lwz 4, 40(28)
  04dbb0c  ori 3, 29, 0
  04dbb10  li 5, 0
  04dbb14  bl 0x4d82b8
  04dbb18  lwz 3, 40(28)
  04dbb1c  lis 4, 4
  04dbb20  li 6, 2
  04dbb24  ori 4, 4, 5952
  04dbb28  lis 7, 4
  04dbb2c  lwz 5, 8(3)
  04dbb30  stw 4, 0(5)
  04dbb34  lwz 4, 8(3)
  04dbb38  stw 6, 4(4)
  04dbb3c  lwz 4, 8(3)
  04dbb40  addic 5, 4, 8
  04dbb44  stw 5, 8(3)
  04dbb48  ori 5, 7, 5760
  04dbb4c  stw 5, 8(4)
  04dbb50  lwz 7, 8(3)
  04dbb54  lis 4, 4
  04dbb58  lis 5, 4
  04dbb5c  ori 4, 4, 5956
  04dbb60  ori 5, 5, 5764
  04dbb64  stw 31, 4(7)
  04dbb68  lwz 7, 8(3)
  04dbb6c  addic 7, 7, 8
  04dbb70  stw 7, 8(3)
  04dbb74  lwz 3, 40(28)
  04dbb78  lwz 7, 8(3)
  04dbb7c  stw 4, 0(7)
  04dbb80  lwz 4, 8(3)
  04dbb84  stw 6, 4(4)
  04dbb88  lwz 4, 8(3)
  04dbb8c  addic 7, 4, 8
  04dbb90  stw 7, 8(3)
  04dbb94  stw 5, 8(4)
  04dbb98  lwz 8, 8(3)
  04dbb9c  lis 4, 4
  04dbba0  lis 5, 4
  04dbba4  ori 4, 4, 5960
  04dbba8  ori 5, 5, 5768
  04dbbac  stw 31, 4(8)
  04dbbb0  lwz 8, 8(3)
  04dbbb4  addic 8, 8, 8
  04dbbb8  lis 7, 4
  04dbbbc  stw 8, 8(3)
  04dbbc0  lwz 3, 40(28)
  04dbbc4  lwz 8, 8(3)
  04dbbc8  stw 4, 0(8)
  04dbbcc  lwz 4, 8(3)
  04dbbd0  li 27, 31
  04dbbd4  stw 6, 4(4)
  04dbbd8  lwz 4, 8(3)
  04dbbdc  addic 8, 4, 8
  04dbbe0  stw 8, 8(3)
  04dbbe4  stw 5, 8(4)
  04dbbe8  lwz 8, 8(3)
  04dbbec  ori 4, 7, 5964
  04dbbf0  lis 5, 4
  04dbbf4  lis 7, 4
  04dbbf8  ori 5, 5, 5772
  04dbbfc  stw 31, 4(8)
  04dbc00  lwz 8, 8(3)
  04dbc04  addic 8, 8, 8
  04dbc08  stw 8, 8(3)
  04dbc0c  lwz 3, 40(28)
  04dbc10  lwz 8, 8(3)
  04dbc14  stw 4, 0(8)
  04dbc18  lwz 4, 8(3)
  04dbc1c  stw 6, 4(4)
  04dbc20  lwz 4, 8(3)
  04dbc24  addic 6, 4, 8
  04dbc28  stw 6, 8(3)
  04dbc2c  stw 5, 8(4)
  04dbc30  ori 4, 7, 404
  04dbc34  lwz 7, 8(3)
  04dbc38  lis 5, 275
  04dbc3c  lis 6, 4
  04dbc40  ori 6, 6, 396
  04dbc44  stw 31, 4(7)
  04dbc48  lwz 7, 8(3)
  04dbc4c  addic 7, 7, 8
  04dbc50  stw 7, 8(3)
  04dbc54  lwz 3, 40(28)
  04dbc58  lwz 7, 8(3)
  04dbc5c  stw 4, 0(7)
  04dbc60  lbz 4, 8504(29)
  04dbc64  lwz 7, 8(3)
  04dbc68  subc 4, 4, 5
  04dbc6c  stw 4, 4(7)
  04dbc70  lwz 4, 8(3)
  04dbc74  addic 7, 4, 8
  04dbc78  stw 7, 8(3)
  04dbc7c  stw 6, 8(4)
  04dbc80  lbz 4, 8505(29)
  04dbc84  lwz 8, 8(3)
  04dbc88  lis 6, 8
  04dbc8c  subc 4, 4, 5
  04dbc90  ori 6, 6, 436
  04dbc94  lis 7, 4
  04dbc98  stw 4, 4(8)
  04dbc9c  lwz 4, 8(3)
  04dbca0  addic 8, 4, 8
  04dbca4  stw 8, 8(3)
  04dbca8  stw 6, 8(4)
  04dbcac  lbz 4, 8506(29)
  04dbcb0  ori 6, 7, 408
  04dbcb4  lwz 8, 8(3)
  04dbcb8  subc 4, 4, 5
  04dbcbc  lis 7, 24
  04dbcc0  ori 7, 7, 520
  04dbcc4  stw 4, 4(8)
  04dbcc8  lbz 4, 8507(29)
  04dbccc  lwz 8, 8(3)
  04dbcd0  subc 4, 4, 5
  04dbcd4  stw 4, 8(8)
  04dbcd8  lwz 4, 8(3)
  04dbcdc  addic 8, 4, 12
  04dbce0  stw 8, 8(3)
  04dbce4  stw 6, 12(4)
  04dbce8  lbz 4, 8541(29)
  04dbcec  subc 4, 4, 5
  04dbcf0  lwz 5, 8(3)
  04dbcf4  stw 4, 4(5)
  04dbcf8  lwz 4, 8(3)
  04dbcfc  addic 5, 4, 8
  04dbd00  stw 5, 8(3)
  04dbd04  lhz 5, 8552(29)
  04dbd08  lhz 6, 8554(29)
  04dbd0c  stw 7, 8(4)
  04dbd10  cntlzw 4, 5
  04dbd14  lbz 5, 8540(29)
  04dbd18  cntlzw 6, 6
  04dbd1c  lbz 7, 8502(29)
  04dbd20  subc 4, 27, 4
  04dbd24  lbz 8, 8500(29)
  04dbd28  slwi 5, 5, 5
  04dbd2c  lbz 9, 8501(29)
  04dbd30  subc 6, 27, 6
  04dbd34  or 5, 7, 5
  04dbd38  slwi 8, 8, 8
  04dbd3c  slwi 7, 9, 12
  04dbd40  slwi 4, 4, 16
  04dbd44  or 7, 8, 7
  04dbd48  slwi 6, 6, 24
  04dbd4c  or 5, 5, 7
  04dbd50  or 4, 5, 4
  04dbd54  lwz 5, 8(3)
  04dbd58  or 4, 4, 6
  04dbd5c  lis 6, 4
  04dbd60  stw 4, 4(5)
  04dbd64  lwz 4, 8(3)
  04dbd68  lwz 5, 8524(29)
  04dbd6c  ori 6, 6, 556
  04dbd70  stw 5, 8(4)
  04dbd74  lwz 4, 8(3)
  04dbd78  lwz 5, 8508(29)
  04dbd7c  stw 5, 12(4)
  04dbd80  lwz 4, 8(3)
  04dbd84  lwz 5, 8544(29)
  04dbd88  stw 5, 16(4)
  04dbd8c  lwz 4, 8(3)
  04dbd90  lwz 5, 8512(29)
  04dbd94  stw 5, 20(4)
  04dbd98  lwz 4, 8(3)
  04dbd9c  lwz 5, 8528(29)
  04dbda0  stw 5, 24(4)
  04dbda4  lwz 4, 8(3)
  04dbda8  addic 5, 4, 28
  04dbdac  stw 5, 8(3)
  04dbdb0  stw 6, 28(4)
  04dbdb4  lwz 4, 8548(29)
  04dbdb8  lis 5, 16
  04dbdbc  lwz 7, 8(3)
  04dbdc0  ori 5, 5, 640
  04dbdc4  lis 6, 4
  04dbdc8  stw 4, 4(7)
  04dbdcc  lwz 4, 8(3)
  04dbdd0  addic 7, 4, 8
  04dbdd4  stw 7, 8(3)
  04dbdd8  stw 5, 8(4)
  04dbddc  lwz 4, 8532(29)
  04dbde0  ori 5, 6, 544
  04dbde4  lwz 7, 8(3)
  04dbde8  lis 6, 4
  04dbdec  ori 6, 6, 696
  04dbdf0  stw 4, 4(7)
  04dbdf4  lwz 4, 8(3)
  04dbdf8  lwz 7, 8536(29)
  04dbdfc  stw 7, 8(4)
  04dbe00  lwz 4, 8(3)
  04dbe04  lwz 7, 8516(29)
  04dbe08  lis 17, 8
  04dbe0c  stw 7, 12(4)
  04dbe10  lwz 4, 8(3)
  04dbe14  lwz 7, 8520(29)
  04dbe18  ori 17, 17, 6656
  04dbe1c  stw 7, 16(4)
  04dbe20  lwz 4, 8(3)
  04dbe24  addic 7, 4, 20
  04dbe28  stw 7, 8(3)
  04dbe2c  stw 5, 20(4)
  04dbe30  lbz 4, 8503(29)
  04dbe34  lwz 7, 8(3)
  04dbe38  lis 5, 8
  04dbe3c  ori 5, 5, 512
  04dbe40  stw 4, 4(7)
  04dbe44  lwz 4, 8(3)
  04dbe48  addic 7, 4, 8
  04dbe4c  stw 7, 8(3)
  04dbe50  stw 6, 8(4)
  04dbe54  lhz 4, 8556(29)
  04dbe58  lhz 6, 8558(29)
  04dbe5c  lwz 7, 8(3)
  04dbe60  rlwimi 4, 6, 16, 0, 15
  04dbe64  lis 6, 4
  04dbe68  ori 6, 6, 7560
  04dbe6c  stw 4, 4(7)
  04dbe70  lwz 4, 8(3)
  04dbe74  addic 7, 4, 8
  04dbe78  lis 18, 4
  04dbe7c  stw 7, 8(3)
  04dbe80  stw 5, 8(4)
  04dbe84  lhz 4, 8556(29)
  04dbe88  lhz 5, 8552(29)
  04dbe8c  rlwimi 4, 5, 16, 0, 15
  04dbe90  lwz 5, 8(3)
  04dbe94  ori 18, 18, 6680
  04dbe98  lis 19, 4
  04dbe9c  stw 4, 4(5)
  04dbea0  lhz 4, 8558(29)
  04dbea4  lhz 5, 8554(29)
  04dbea8  lwz 7, 8(3)
  04dbeac  rlwimi 4, 5, 16, 0, 15
  04dbeb0  ori 19, 19, 6208
  04dbeb4  stw 4, 8(7)
  04dbeb8  lwz 4, 8(3)
  04dbebc  addic 5, 4, 12
  04dbec0  lis 20, 4
  04dbec4  stw 5, 8(3)
  04dbec8  stw 6, 12(4)
  04dbecc  lhz 4, 8554(29)
  04dbed0  rlwinm 5, 4, 20, 31, 31
  04dbed4  subc 4, 4, 5
  04dbed8  lwz 5, 8(3)
  04dbedc  ori 4, 4, 4096
  04dbee0  ori 20, 20, 6672
  04dbee4  stw 4, 4(5)
  04dbee8  lwz 4, 8(3)
  04dbeec  addic 4, 4, 8
  04dbef0  lis 21, 4
  04dbef4  stw 4, 8(3)
  04dbef8  lwz 3, 40(28)
  04dbefc  lbz 4, 7274(29)
  04dbf00  lwz 5, 7280(29)
  04dbf04  lbz 6, 7261(29)
  04dbf08  addic 4, 4, 1
  04dbf0c  lbz 7, 7260(29)
  04dbf10  lbz 8, 7263(29)
  04dbf14  ori 4, 4, 8
  04dbf18  lbz 9, 7262(29)
  04dbf1c  slwi 7, 7, 8
  04dbf20  lhz 10, 7270(29)
  04dbf24  rlwimi 4, 6, 16, 8, 15
  04dbf28  slwi 8, 8, 2
  04dbf2c  lhz 6, 7268(29)
  04dbf30  slwi 9, 9, 4
  04dbf34  lwz 11, 7264(29)
  04dbf38  or 4, 4, 7
  04dbf3c  lwz 7, 7276(29)
  04dbf40  or 8, 8, 9
  04dbf44  lwz 9, 8(3)
  04dbf48  rlwimi 10, 6, 16, 0, 15
  04dbf4c  lhz 12, 7272(29)
  04dbf50  or 4, 4, 8
  04dbf54  ori 21, 21, 6668
  04dbf58  stw 17, 0(9)
  04dbf5c  lwz 8, 8(3)
  04dbf60  lis 22, -32768
  04dbf64  lis 23, 4
  04dbf68  stw 5, 4(8)
  04dbf6c  lwz 5, 8(3)
  04dbf70  ori 23, 23, 6664
  04dbf74  lis 24, 16387
  04dbf78  stw 4, 8(5)
  04dbf7c  lwz 4, 8(3)
  04dbf80  addic 5, 4, 12
  04dbf84  ori 24, 24, 771
  04dbf88  stw 5, 8(3)
  04dbf8c  stw 18, 12(4)
  04dbf90  lwz 5, 8(3)
  04dbf94  slwi 4, 12, 20
  04dbf98  or 4, 7, 4
  04dbf9c  stw 10, 4(5)
  04dbfa0  lwz 5, 8(3)
  04dbfa4  addic 6, 5, 8
  04dbfa8  lis 25, 4
  04dbfac  stw 6, 8(3)
  04dbfb0  stw 19, 8(5)
  04dbfb4  lwz 5, 8(3)
  04dbfb8  ori 25, 25, 6676
  04dbfbc  lis 26, 514
  04dbfc0  stw 4, 4(5)
  04dbfc4  lwz 4, 8(3)
  04dbfc8  addic 5, 4, 8
  04dbfcc  ori 26, 26, 8192
  04dbfd0  stw 5, 8(3)
  04dbfd4  stw 20, 8(4)
  04dbfd8  lwz 4, 8(3)
  04dbfdc  stw 11, 4(4)
  04dbfe0  lwz 4, 8(3)
  04dbfe4  addic 4, 4, 8
  04dbfe8  stw 4, 8(3)
  04dbfec  lwz 3, 40(28)
  04dbff0  lwz 4, 8(3)
  04dbff4  stw 21, 0(4)
  04dbff8  lwz 4, 8(3)
  04dbffc  stw 22, 4(4)
  04dc000  lwz 4, 8(3)
  04dc004  addic 4, 4, 8
  04dc008  stw 4, 8(3)
  04dc00c  lwz 3, 40(28)
  04dc010  lwz 4, 8(3)
  04dc014  stw 23, 0(4)
  04dc018  lwz 4, 8(3)
  04dc01c  stw 24, 4(4)
  04dc020  lwz 4, 8(3)
  04dc024  addic 4, 4, 8
  04dc028  stw 4, 8(3)
  04dc02c  lwz 3, 40(28)
  04dc030  lwz 4, 8(3)
  04dc034  stw 25, 0(4)
  04dc038  lwz 4, 8(3)
  04dc03c  stw 26, 4(4)
  04dc040  lwz 4, 8(3)
  04dc044  std 2, 40(1)
  04dc048  addic 4, 4, 8
  04dc04c  stw 4, 8(3)
  04dc050  lwz 4, 0(29)
  04dc054  ori 3, 29, 0
  04dc058  lwz 8, 16(4)
  04dc05c  lwz 4, 40(28)
  04dc060  lwz 5, 4(29)
  04dc064  lwz 6, 8(29)
  04dc068  lwz 7, 0(8)
  04dc06c  lwz 2, 4(8)
  04dc070  mtctr 7
  04dc074  bcctrl 20, 30
  04dc078  lwz 3, 40(28)
  04dc07c  lis 4, 16396
  04dc080  ld 2, 40(1)
  04dc084  lis 6, 4
  04dc088  ori 4, 4, 5908
  04dc08c  lwz 5, 8(3)
  04dc090  lis 7, 12
  04dc094  lis 8, 8
  04dc098  stw 4, 0(5)
  04dc09c  lwz 4, 8(3)
  04dc0a0  ori 5, 6, 6152
  04dc0a4  li 6, 8
  04dc0a8  ori 8, 8, 6272
  04dc0ac  stw 31, 4(4)
  04dc0b0  lwz 4, 8(3)
  04dc0b4  lis 9, 16256
  04dc0b8  stw 31, 8(4)
  04dc0bc  lwz 4, 8(3)
  04dc0c0  stw 31, 12(4)
  04dc0c4  lwz 4, 8(3)
  04dc0c8  stw 5, 16(4)
  04dc0cc  lwz 4, 8(3)
  04dc0d0  stw 6, 20(4)
  04dc0d4  lwz 4, 8(3)
  04dc0d8  ori 6, 7, 5392
  04dc0dc  addic 4, 4, 24
  04dc0e0  stw 4, 8(3)
  04dc0e4  lwz 3, 40(28)
  04dc0e8  lis 4, 144
  04dc0ec  lwz 7, 8(3)
  04dc0f0  stw 6, 0(7)
  04dc0f4  lwz 7, 8(3)
  04dc0f8  stw 31, 4(7)
  04dc0fc  lwz 7, 8(3)
  04dc100  stw 31, 8(7)
  04dc104  lwz 7, 8(3)
  04dc108  lfs 1, -23216(4)
  04dc10c  stfs 1, 12(7)
  04dc110  lwz 7, 8(3)
  04dc114  addic 7, 7, 16
  04dc118  stw 7, 8(3)
  04dc11c  lwz 3, 40(28)
  04dc120  lis 7, -16512
  04dc124  lwz 10, 8(3)
  04dc128  stw 8, 0(10)
  04dc12c  lwz 10, 8(3)
  04dc130  stw 7, 4(10)
  04dc134  lwz 10, 8(3)
  04dc138  stw 9, 8(10)
  04dc13c  lwz 10, 8(3)
  04dc140  addic 10, 10, 12
  04dc144  stw 10, 8(3)
  04dc148  lwz 3, 40(28)
  04dc14c  lwz 10, 8(3)
  04dc150  stw 6, 0(10)
  04dc154  lwz 10, 8(3)
  04dc158  stw 31, 4(10)
  04dc15c  lwz 10, 8(3)
  04dc160  stw 9, 8(10)
  04dc164  lfs 1, -23216(4)
  04dc168  lwz 10, 8(3)
  04dc16c  stfs 1, 12(10)
  04dc170  lwz 10, 8(3)
  04dc174  addic 10, 10, 16
  04dc178  stw 10, 8(3)
  04dc17c  lwz 3, 40(28)
  04dc180  lwz 10, 8(3)
  04dc184  stw 8, 0(10)
  04dc188  lwz 10, 8(3)
  04dc18c  stw 7, 4(10)
  04dc190  lwz 10, 8(3)
  04dc194  stw 7, 8(10)
  04dc198  lwz 10, 8(3)
  04dc19c  addic 10, 10, 12
  04dc1a0  stw 10, 8(3)
  04dc1a4  lwz 3, 40(28)
  04dc1a8  lwz 10, 8(3)
  04dc1ac  stw 6, 0(10)
  04dc1b0  lwz 10, 8(3)
  04dc1b4  stw 9, 4(10)
  04dc1b8  lwz 10, 8(3)
  04dc1bc  stw 9, 8(10)
  04dc1c0  lfs 1, -23216(4)
  04dc1c4  lwz 10, 8(3)
  04dc1c8  stfs 1, 12(10)
  04dc1cc  lwz 10, 8(3)
  04dc1d0  addic 10, 10, 16
  04dc1d4  stw 10, 8(3)
  04dc1d8  lwz 3, 40(28)
  04dc1dc  lwz 10, 8(3)
  04dc1e0  stw 8, 0(10)
  04dc1e4  lwz 10, 8(3)
  04dc1e8  stw 9, 4(10)
  04dc1ec  lwz 10, 8(3)
  04dc1f0  stw 7, 8(10)
  04dc1f4  lwz 7, 8(3)
  04dc1f8  addic 7, 7, 12
  04dc1fc  stw 7, 8(3)
  04dc200  lwz 3, 40(28)
  04dc204  lwz 7, 8(3)
  04dc208  stw 6, 0(7)
  04dc20c  lwz 6, 8(3)
  04dc210  stw 9, 4(6)
  04dc214  lwz 6, 8(3)
  04dc218  stw 31, 8(6)
  04dc21c  lwz 6, 8(3)
  04dc220  lfs 1, -23216(4)
  04dc224  stfs 1, 12(6)
  04dc228  lwz 4, 8(3)
  04dc22c  addic 4, 4, 16
  04dc230  addic 6, 29, 8500
  04dc234  stw 4, 8(3)
  04dc238  lwz 3, 40(28)
  04dc23c  cmpw 30, 6
  04dc240  lwz 4, 8(3)
  04dc244  stw 8, 0(4)
  04dc248  lwz 4, 8(3)
  04dc24c  stw 9, 4(4)
  04dc250  lwz 4, 8(3)
  04dc254  stw 9, 8(4)
  04dc258  lwz 4, 8(3)
  04dc25c  addic 4, 4, 12
  04dc260  stw 4, 8(3)
  04dc264  lwz 3, 40(28)
  04dc268  lwz 4, 8(3)
  04dc26c  stw 5, 0(4)
  04dc270  lwz 4, 8(3)
  04dc274  stw 31, 4(4)
  04dc278  lwz 4, 8(3)
  04dc27c  addic 4, 4, 8
  04dc280  stw 4, 8(3)
  04dc284  bt 2, 0x4dc87c
  04dc288  lwz 5, 40(28)
  04dc28c  lis 3, 4
  04dc290  lis 4, 275
  04dc294  ori 3, 3, 404
  04dc298  lis 7, 4
  04dc29c  lwz 6, 8(5)
  04dc2a0  stw 3, 0(6)
  04dc2a4  lbz 3, 4(30)
  04dc2a8  lwz 6, 8(5)
  04dc2ac  subc 3, 3, 4
  04dc2b0  stw 3, 4(6)
  04dc2b4  lwz 3, 8(5)
  04dc2b8  addic 6, 3, 8
  04dc2bc  stw 6, 8(5)
  04dc2c0  ori 6, 7, 396
  04dc2c4  stw 6, 8(3)
  04dc2c8  lbz 3, 5(30)
  04dc2cc  lwz 7, 8(5)
  04dc2d0  lis 6, 8
  04dc2d4  subc 3, 3, 4
  04dc2d8  ori 6, 6, 436
  04dc2dc  stw 3, 4(7)
  04dc2e0  lwz 3, 8(5)
  04dc2e4  addic 7, 3, 8
  04dc2e8  stw 7, 8(5)
  04dc2ec  stw 6, 8(3)
  04dc2f0  lbz 3, 6(30)
  04dc2f4  lwz 8, 8(5)
  04dc2f8  lis 6, 4
  04dc2fc  subc 3, 3, 4
  04dc300  ori 6, 6, 408
  04dc304  lis 7, 24
  04dc308  stw 3, 4(8)
  04dc30c  lbz 3, 7(30)
  04dc310  lwz 8, 8(5)
  04dc314  subc 3, 3, 4
  04dc318  stw 3, 8(8)
  04dc31c  lwz 3, 8(5)
  04dc320  addic 8, 3, 12
  04dc324  stw 8, 8(5)
  04dc328  stw 6, 12(3)
  04dc32c  lbz 3, 41(30)
  04dc330  lwz 6, 8(5)
  04dc334  subc 3, 3, 4
  04dc338  ori 4, 7, 520
  04dc33c  stw 3, 4(6)
  04dc340  lwz 3, 8(5)
  04dc344  addic 6, 3, 8
  04dc348  stw 6, 8(5)
  04dc34c  lhz 6, 52(30)
  04dc350  lhz 7, 54(30)
  04dc354  stw 4, 8(3)
  04dc358  cntlzw 3, 6
  04dc35c  lbz 4, 40(30)
  04dc360  cntlzw 6, 7
  04dc364  lbz 7, 2(30)
  04dc368  subc 3, 27, 3
  04dc36c  lbz 8, 0(30)
  04dc370  slwi 4, 4, 5
  04dc374  lbz 9, 1(30)
  04dc378  subc 6, 27, 6
  04dc37c  or 4, 7, 4
  04dc380  slwi 8, 8, 8
  04dc384  slwi 7, 9, 12
  04dc388  slwi 3, 3, 16
  04dc38c  or 7, 8, 7
  04dc390  slwi 6, 6, 24
  04dc394  or 4, 4, 7
  04dc398  or 3, 4, 3
  04dc39c  lwz 4, 8(5)
  04dc3a0  or 3, 3, 6
  04dc3a4  lis 6, 4
  04dc3a8  stw 3, 4(4)
  04dc3ac  lwz 3, 8(5)
  04dc3b0  lwz 4, 24(30)
  04dc3b4  ori 6, 6, 556
  04dc3b8  stw 4, 8(3)
  04dc3bc  lwz 3, 8(5)
  04dc3c0  lwz 4, 8(30)
  04dc3c4  stw 4, 12(3)
  04dc3c8  lwz 3, 8(5)
  04dc3cc  lwz 4, 44(30)
  04dc3d0  stw 4, 16(3)
  04dc3d4  lwz 3, 8(5)
  04dc3d8  lwz 4, 12(30)
  04dc3dc  stw 4, 20(3)
  04dc3e0  lwz 3, 8(5)
  04dc3e4  lwz 4, 28(30)
  04dc3e8  stw 4, 24(3)
  04dc3ec  lwz 3, 8(5)
  04dc3f0  addic 4, 3, 28
  04dc3f4  stw 4, 8(5)
  04dc3f8  stw 6, 28(3)
  04dc3fc  lwz 3, 48(30)
  04dc400  lis 4, 16
  04dc404  lwz 7, 8(5)
  04dc408  ori 4, 4, 640
  04dc40c  lis 6, 4
  04dc410  stw 3, 4(7)
  04dc414  lwz 3, 8(5)
  04dc418  addic 7, 3, 8
  04dc41c  stw 7, 8(5)
  04dc420  stw 4, 8(3)
  04dc424  lwz 3, 32(30)
  04dc428  ori 4, 6, 544
  04dc42c  lwz 7, 8(5)
  04dc430  lis 6, 4
  04dc434  ori 6, 6, 696
  04dc438  stw 3, 4(7)
  04dc43c  lwz 3, 8(5)
  04dc440  lwz 7, 36(30)
  04dc444  stw 7, 8(3)
  04dc448  lwz 3, 8(5)
  04dc44c  lwz 7, 16(30)
  04dc450  stw 7, 12(3)
  04dc454  lwz 3, 8(5)
  04dc458  lwz 7, 20(30)
  04dc45c  stw 7, 16(3)
  04dc460  lwz 3, 8(5)
  04dc464  addic 7, 3, 20
  04dc468  stw 7, 8(5)
  04dc46c  stw 4, 20(3)
  04dc470  lbz 3, 3(30)
  04dc474  lwz 7, 8(5)
  04dc478  lis 4, 8
  04dc47c  ori 4, 4, 512
  04dc480  stw 3, 4(7)
  04dc484  lwz 3, 8(5)
  04dc488  addic 7, 3, 8
  04dc48c  stw 7, 8(5)
  04dc490  stw 6, 8(3)
  04dc494  lhz 3, 56(30)
  04dc498  lhz 6, 58(30)
  04dc49c  lwz 7, 8(5)
  04dc4a0  rlwimi 3, 6, 16, 0, 15
  04dc4a4  lis 6, 4
  04dc4a8  ori 6, 6, 7560
  04dc4ac  stw 3, 4(7)
  04dc4b0  lwz 3, 8(5)
  04dc4b4  addic 7, 3, 8
  04dc4b8  stw 7, 8(5)
  04dc4bc  stw 4, 8(3)
  04dc4c0  lhz 3, 56(30)
  04dc4c4  lhz 4, 52(30)
  04dc4c8  rlwimi 3, 4, 16, 0, 15
  04dc4cc  lwz 4, 8(5)
  04dc4d0  stw 3, 4(4)
  04dc4d4  lhz 3, 58(30)
  04dc4d8  lhz 4, 54(30)
  04dc4dc  lwz 7, 8(5)
  04dc4e0  rlwimi 3, 4, 16, 0, 15
  04dc4e4  stw 3, 8(7)
  04dc4e8  lwz 3, 8(5)
  04dc4ec  addic 4, 3, 12
  04dc4f0  stw 4, 8(5)
  04dc4f4  stw 6, 12(3)
  04dc4f8  lhz 3, 54(30)
  04dc4fc  rlwinm 4, 3, 20, 31, 31
  04dc500  subc 3, 3, 4
  04dc504  lwz 4, 8(5)
  04dc508  ori 3, 3, 4096
  04dc50c  stw 3, 4(4)
  04dc510  lwz 3, 8(5)
  04dc514  addic 3, 3, 8
  04dc518  stw 3, 8(5)
  04dc51c  lwz 4, 40(28)
  04dc520  lbz 3, 8634(29)
  04dc524  lwz 5, 8640(29)
  04dc528  addic 3, 3, 1
  04dc52c  lbz 6, 8621(29)
  04dc530  ori 3, 3, 8
  04dc534  lbz 7, 8620(29)
  04dc538  rlwimi 3, 6, 16, 8, 15
  04dc53c  lbz 6, 8623(29)
  04dc540  slwi 7, 7, 8
  04dc544  lbz 8, 8622(29)
  04dc548  lhz 9, 8630(29)
  04dc54c  or 3, 3, 7
  04dc550  lhz 7, 8628(29)
  04dc554  lwz 10, 8(4)
  04dc558  slwi 6, 6, 2
  04dc55c  slwi 8, 8, 4
  04dc560  lwz 11, 8624(29)
  04dc564  lwz 12, 8636(29)
  04dc568  rlwimi 9, 7, 16, 0, 15
  04dc56c  or 6, 6, 8
  04dc570  lhz 8, 8632(29)
  04dc574  or 3, 3, 6
  04dc578  stw 17, 0(10)
  04dc57c  lwz 6, 8(4)
  04dc580  stw 5, 4(6)
  04dc584  lwz 5, 8(4)
  04dc588  stw 3, 8(5)
  04dc58c  lwz 3, 8(4)
  04dc590  addic 5, 3, 12
  04dc594  stw 5, 8(4)
  04dc598  stw 18, 12(3)
  04dc59c  lwz 5, 8(4)
  04dc5a0  slwi 3, 8, 20
  04dc5a4  or 3, 12, 3
  04dc5a8  stw 9, 4(5)
  04dc5ac  lwz 5, 8(4)
  04dc5b0  addic 6, 5, 8
  04dc5b4  stw 6, 8(4)
  04dc5b8  stw 19, 8(5)
  04dc5bc  lwz 5, 8(4)
  04dc5c0  stw 3, 4(5)
  04dc5c4  lwz 3, 8(4)
  04dc5c8  addic 5, 3, 8
  04dc5cc  stw 5, 8(4)
  04dc5d0  stw 20, 8(3)
  04dc5d4  std 2, 40(1)
  04dc5d8  lwz 5, 8(4)
  04dc5dc  ori 3, 29, 0
  04dc5e0  stw 11, 4(5)
  04dc5e4  lwz 5, 8(4)
  04dc5e8  addic 5, 5, 8
  04dc5ec  stw 5, 8(4)
  04dc5f0  lwz 4, 40(28)
  04dc5f4  lwz 5, 8(4)
  04dc5f8  stw 21, 0(5)
  04dc5fc  lwz 5, 8(4)
  04dc600  stw 22, 4(5)
  04dc604  lwz 5, 8(4)
  04dc608  addic 5, 5, 8
  04dc60c  stw 5, 8(4)
  04dc610  lwz 4, 40(28)
  04dc614  lwz 5, 8(4)
  04dc618  stw 23, 0(5)
  04dc61c  lwz 5, 8(4)
  04dc620  stw 24, 4(5)
  04dc624  lwz 5, 8(4)
  04dc628  addic 5, 5, 8
  04dc62c  stw 5, 8(4)
  04dc630  lwz 4, 40(28)
  04dc634  lwz 5, 8(4)
  04dc638  stw 25, 0(5)
  04dc63c  lwz 5, 8(4)
  04dc640  stw 26, 4(5)
  04dc644  lwz 5, 8(4)
  04dc648  addic 5, 5, 8
  04dc64c  stw 5, 8(4)
  04dc650  lwz 5, 0(29)
  04dc654  lwz 4, 40(28)
  04dc658  lwz 8, 16(5)
  04dc65c  lhz 5, 52(30)
  04dc660  lhz 6, 54(30)
  04dc664  lwz 7, 0(8)
  04dc668  lwz 2, 4(8)
  04dc66c  mtctr 7
  04dc670  bcctrl 20, 30
  04dc674  lwz 3, 40(28)
  04dc678  lis 4, 16396
  04dc67c  ld 2, 40(1)
  04dc680  li 6, 0
  04dc684  ori 4, 4, 5908
  04dc688  li 7, 8
  04dc68c  lwz 5, 8(3)
  04dc690  lis 8, 12
  04dc694  lis 9, 8
  04dc698  lis 10, -16512
  04dc69c  stw 4, 0(5)
  04dc6a0  lwz 4, 8(3)
  04dc6a4  lis 5, 4
  04dc6a8  ori 5, 5, 6152
  04dc6ac  stw 6, 4(4)
  04dc6b0  lwz 4, 8(3)
  04dc6b4  ori 9, 9, 6272
  04dc6b8  stw 6, 8(4)
  04dc6bc  lwz 4, 8(3)
  04dc6c0  stw 6, 12(4)
  04dc6c4  lwz 4, 8(3)
  04dc6c8  stw 5, 16(4)
  04dc6cc  lwz 4, 8(3)
  04dc6d0  stw 7, 20(4)
  04dc6d4  lwz 4, 8(3)
  04dc6d8  ori 7, 8, 5392
  04dc6dc  addic 4, 4, 24
  04dc6e0  stw 4, 8(3)
  04dc6e4  lwz 3, 40(28)
  04dc6e8  lis 4, 144
  04dc6ec  lwz 8, 8(3)
  04dc6f0  stw 7, 0(8)
  04dc6f4  lwz 8, 8(3)
  04dc6f8  stw 6, 4(8)
  04dc6fc  lwz 8, 8(3)
  04dc700  stw 6, 8(8)
  04dc704  lwz 8, 8(3)
  04dc708  lfs 1, -23216(4)
  04dc70c  stfs 1, 12(8)
  04dc710  lwz 8, 8(3)
  04dc714  addic 8, 8, 16
  04dc718  stw 8, 8(3)
  04dc71c  lwz 3, 40(28)
  04dc720  lis 8, 16256
  04dc724  lwz 11, 8(3)
  04dc728  stw 9, 0(11)
  04dc72c  lwz 11, 8(3)
  04dc730  stw 10, 4(11)
  04dc734  lwz 11, 8(3)
  04dc738  stw 8, 8(11)
  04dc73c  lwz 11, 8(3)
  04dc740  addic 11, 11, 12
  04dc744  stw 11, 8(3)
  04dc748  lwz 3, 40(28)
  04dc74c  lwz 11, 8(3)
  04dc750  stw 7, 0(11)
  04dc754  lwz 11, 8(3)
  04dc758  stw 6, 4(11)
  04dc75c  lwz 11, 8(3)
  04dc760  stw 8, 8(11)
  04dc764  lwz 11, 8(3)
  04dc768  lfs 1, -23216(4)
  04dc76c  stfs 1, 12(11)
  04dc770  lwz 11, 8(3)
  04dc774  addic 11, 11, 16
  04dc778  stw 11, 8(3)
  04dc77c  lwz 3, 40(28)
  04dc780  lwz 11, 8(3)
  04dc784  stw 9, 0(11)
  04dc788  lwz 11, 8(3)
  04dc78c  stw 10, 4(11)
  04dc790  lwz 11, 8(3)
  04dc794  stw 10, 8(11)
  04dc798  lwz 11, 8(3)
  04dc79c  addic 11, 11, 12
  04dc7a0  stw 11, 8(3)
  04dc7a4  lwz 3, 40(28)
  04dc7a8  lwz 11, 8(3)
  04dc7ac  stw 7, 0(11)
  04dc7b0  lwz 11, 8(3)
  04dc7b4  stw 8, 4(11)
  04dc7b8  lwz 11, 8(3)
  04dc7bc  stw 8, 8(11)
  04dc7c0  lwz 11, 8(3)
  04dc7c4  lfs 1, -23216(4)
  04dc7c8  stfs 1, 12(11)
  04dc7cc  lwz 11, 8(3)
  04dc7d0  addic 11, 11, 16
  04dc7d4  stw 11, 8(3)
  04dc7d8  lwz 3, 40(28)
  04dc7dc  lwz 11, 8(3)
  04dc7e0  stw 9, 0(11)
  04dc7e4  lwz 11, 8(3)
  04dc7e8  stw 8, 4(11)
  04dc7ec  lwz 11, 8(3)
  04dc7f0  stw 10, 8(11)
  04dc7f4  lwz 10, 8(3)
  04dc7f8  addic 10, 10, 12
  04dc7fc  stw 10, 8(3)
  04dc800  lwz 3, 40(28)
  04dc804  lwz 10, 8(3)
  04dc808  stw 7, 0(10)
  04dc80c  lwz 7, 8(3)
  04dc810  stw 8, 4(7)
  04dc814  lwz 7, 8(3)
  04dc818  stw 6, 8(7)
  04dc81c  lwz 7, 8(3)
  04dc820  lfs 1, -23216(4)
  04dc824  stfs 1, 12(7)
  04dc828  lwz 4, 8(3)
  04dc82c  addic 4, 4, 16
  04dc830  stw 4, 8(3)
  04dc834  lwz 3, 40(28)
  04dc838  lwz 4, 8(3)
  04dc83c  stw 9, 0(4)
  04dc840  lwz 4, 8(3)
  04dc844  stw 8, 4(4)
  04dc848  lwz 4, 8(3)
  04dc84c  stw 8, 8(4)
  04dc850  lwz 4, 8(3)
  04dc854  addic 4, 4, 12
  04dc858  stw 4, 8(3)
  04dc85c  lwz 3, 40(28)
  04dc860  lwz 4, 8(3)
  04dc864  stw 5, 0(4)
  04dc868  lwz 4, 8(3)
  04dc86c  stw 6, 4(4)
  04dc870  lwz 4, 8(3)
  04dc874  addic 4, 4, 8
  04dc878  stw 4, 8(3)
  04dc87c  ld 0, 256(1)
  04dc880  mtlr 0
  04dc884  ld 17, 120(1)
  04dc888  ld 18, 128(1)
  04dc88c  ld 19, 136(1)
  04dc890  ld 20, 144(1)
  04dc894  ld 21, 152(1)
  04dc898  ld 22, 160(1)
  04dc89c  ld 23, 168(1)
  04dc8a0  ld 24, 176(1)
  04dc8a4  ld 25, 184(1)
  04dc8a8  ld 26, 192(1)
  04dc8ac  ld 27, 200(1)
  04dc8b0  ld 28, 208(1)
  04dc8b4  ld 29, 216(1)
  04dc8b8  ld 30, 224(1)
  04dc8bc  ld 31, 232(1)
  04dc8c0  addi 1, 1, 240
  04dc8c4  blr

idol_draw::Gfx_Present:   # 0x4dc8c8, 0xd4 bytes
  04dc8c8  stdu 1, -128(1)
  04dc8cc  mflr 0
  04dc8d0  std 0, 144(1)
  04dc8d4  std 30, 112(1)
  04dc8d8  ori 30, 3, 0
  04dc8dc  std 31, 120(1)
  04dc8e0  lbz 3, 16(3)
  04dc8e4  ori 31, 4, 0
  04dc8e8  cmpwi 3, 0
  04dc8ec  bt 2, 0x4dc924
  04dc8f0  lwz 3, 6764(30)
  04dc8f4  clrlwi 3, 3, 31
  04dc8f8  cmpwi 3, 0
  04dc8fc  bt 2, 0x4dc924
  04dc900  lwz 4, 0(30)
  04dc904  ori 3, 30, 0
  04dc908  std 2, 40(1)
  04dc90c  lwz 4, 24(4)
  04dc910  lwz 5, 0(4)
  04dc914  lwz 2, 4(4)
  04dc918  mtctr 5
  04dc91c  bcctrl 20, 30
  04dc920  ld 2, 40(1)
  04dc924  cmpwi 31, 0
  04dc928  bt 2, 0x4dc960
  04dc92c  lwz 3, 7452(30)
  04dc930  lhz 4, 52(31)
  04dc934  cmpw 3, 4
  04dc938  bf 2, 0x4dc950
  04dc93c  ori 3, 30, 0
  04dc940  ori 4, 31, 0
  04dc944  li 5, 0
  04dc948  bl 0x4dafe8
  04dc94c  b 0x4dc960
  04dc950  ori 3, 30, 0
  04dc954  ori 4, 31, 0
  04dc958  li 5, 0
  04dc95c  bl 0x4db930
  04dc960  lwz 4, 0(30)
  04dc964  ori 3, 30, 0
  04dc968  std 2, 40(1)
  04dc96c  lwz 4, 24(4)
  04dc970  lwz 5, 0(4)
  04dc974  lwz 2, 4(4)
  04dc978  mtctr 5
  04dc97c  bcctrl 20, 30
  04dc980  ld 2, 40(1)
  04dc984  ld 0, 144(1)
  04dc988  mtlr 0
  04dc98c  ld 30, 112(1)
  04dc990  ld 31, 120(1)
  04dc994  addi 1, 1, 128
  04dc998  blr

idol_draw::Gfx_ReconfigureVideoOut:   # 0x4dc99c, 0x1e4 bytes
  04dc99c  stdu 1, -144(1)
  04dc9a0  mflr 0
  04dc9a4  std 0, 160(1)
  04dc9a8  std 31, 136(1)
  04dc9ac  lis 4, 271
  04dc9b0  std 29, 120(1)
  04dc9b4  ori 31, 3, 0
  04dc9b8  lis 29, 0
  04dc9bc  ori 29, 29, 40000
  04dc9c0  std 28, 112(1)
  04dc9c4  lwz 4, -2784(4)
  04dc9c8  lwz 28, 6772(3)
  04dc9cc  lwz 3, 8(4)
  04dc9d0  std 30, 128(1)
  04dc9d4  cmpw 3, 28
  04dc9d8  bt 2, 0x4dca1c
  04dc9dc  lis 30, 102
  04dc9e0  addic 30, 30, -28864
  04dc9e4  li 11, 141
  04dc9e8  li 3, 50
  04dc9ec  sc
  04dc9f0  addic 29, 29, -1
  04dc9f4  cmpwi 29, 0
  04dc9f8  bf 2, 0x4dca08
  04dc9fc  ori 3, 30, 0
  04dca00  bl 0x5cd098
  04dca04  nop
  04dca08  lis 3, 271
  04dca0c  lwz 3, -2784(3)
  04dca10  lwz 3, 8(3)
  04dca14  cmpw 3, 28
  04dca18  bf 2, 0x4dc9e4
  04dca1c  bl 0x650684
  04dca20  ld 2, 40(1)
  04dca24  lis 4, 144
  04dca28  lis 5, 271
  04dca2c  li 6, 50
  04dca30  li 7, 22000
  04dca34  li 30, 0
  04dca38  lwz 8, -23196(4)
  04dca3c  ori 4, 3, 0
  04dca40  ld 3, -2816(5)
  04dca44  li 5, 18000
  04dca48  subc 3, 4, 3
  04dca4c  lwz 8, 24(8)
  04dca50  subc 7, 7, 5
  04dca54  subc 6, 6, 8
  04dca58  cntlzw 6, 6
  04dca5c  sldi 6, 6, 58
  04dca60  sradi 6, 6, 63
  04dca64  and 6, 6, 7
  04dca68  addc 5, 5, 6
  04dca6c  cmpd 3, 5
  04dca70  bf 1, 0x4dcaa4
  04dca74  lis 3, 271
  04dca78  li 5, 20
  04dca7c  li 6, 20
  04dca80  lwz 3, -2820(3)
  04dca84  addic 3, 3, 5
  04dca88  extsw 7, 3
  04dca8c  subc 6, 6, 3
  04dca90  subc 5, 5, 7
  04dca94  sradi 5, 5, 63
  04dca98  and 5, 5, 6
  04dca9c  addc 3, 3, 5
  04dcaa0  b 0x4dcad0
  04dcaa4  lis 3, 271
  04dcaa8  li 5, 0
  04dcaac  li 6, 0
  04dcab0  lwz 3, -2820(3)
  04dcab4  addic 3, 3, -1
  04dcab8  extsw 7, 3
  04dcabc  subc 6, 6, 3
  04dcac0  subc 5, 7, 5
  04dcac4  sradi 5, 5, 63
  04dcac8  and 5, 5, 6
  04dcacc  addc 3, 3, 5
  04dcad0  ori 7, 4, 0
  04dcad4  lis 5, 271
  04dcad8  cntlzw 4, 3
  04dcadc  lis 6, 144
  04dcae0  rlwinm 8, 4, 27, 31, 31
  04dcae4  lis 9, 271
  04dcae8  stw 3, -2820(5)
  04dcaec  li 3, 0
  04dcaf0  stb 8, -23220(6)
  04dcaf4  addic 4, 31, 8940
  04dcaf8  li 5, 0
  04dcafc  li 6, 0
  04dcb00  std 7, -2816(9)
  04dcb04  bl 0x64f4c4
  04dcb08  ld 2, 40(1)
  04dcb0c  cmpwi 3, 0
  04dcb10  bt 2, 0x4dcb28
  04dcb14  lis 5, 102
  04dcb18  ori 4, 3, 0
  04dcb1c  addic 3, 5, -28036
  04dcb20  bl 0x5cd098
  04dcb24  nop
  04dcb28  lbz 5, 8940(31)
  04dcb2c  addic 3, 31, 7480
  04dcb30  li 4, 1
  04dcb34  stb 5, 17(31)
  04dcb38  bl 0x4e535c
  04dcb3c  nop
  04dcb40  addic 3, 31, 7820
  04dcb44  li 4, 1
  04dcb48  bl 0x4e535c
  04dcb4c  nop
  04dcb50  li 3, 0
  04dcb54  stb 30, 16(31)
  04dcb58  bl 0x64f384
  04dcb5c  ld 2, 40(1)
  04dcb60  ld 0, 160(1)
  04dcb64  mtlr 0
  04dcb68  ld 28, 112(1)
  04dcb6c  ld 29, 120(1)
  04dcb70  ld 30, 128(1)
  04dcb74  ld 31, 136(1)
  04dcb78  addi 1, 1, 144
  04dcb7c  blr

idol_draw::Gfx_EnableSpecialVideoOutMode:   # 0x4dcb80, 0x250 bytes
  04dcb80  stdu 1, -160(1)
  04dcb84  mflr 0
  04dcb88  std 0, 176(1)
  04dcb8c  std 31, 152(1)
  04dcb90  lis 4, 1
  04dcb94  ori 31, 3, 0
  04dcb98  ori 4, 4, 34212
  04dcb9c  lbzx 3, 3, 4
  04dcba0  std 30, 144(1)
  04dcba4  std 29, 136(1)
  04dcba8  std 28, 128(1)
  04dcbac  cmpwi 3, 0
  04dcbb0  bt 2, 0x4dcdb0
  04dcbb4  lis 3, 271
  04dcbb8  lis 29, 0
  04dcbbc  ori 29, 29, 40000
  04dcbc0  lwz 3, -2784(3)
  04dcbc4  lwz 28, 6772(31)
  04dcbc8  lwz 3, 8(3)
  04dcbcc  cmpw 3, 28
  04dcbd0  bt 2, 0x4dcc14
  04dcbd4  lis 30, 102
  04dcbd8  addic 30, 30, -28864
  04dcbdc  li 11, 141
  04dcbe0  li 3, 50
  04dcbe4  sc
  04dcbe8  addic 29, 29, -1
  04dcbec  cmpwi 29, 0
  04dcbf0  bf 2, 0x4dcc00
  04dcbf4  ori 3, 30, 0
  04dcbf8  bl 0x5cd098
  04dcbfc  nop
  04dcc00  lis 3, 271
  04dcc04  lwz 3, -2784(3)
  04dcc08  lwz 3, 8(3)
  04dcc0c  cmpw 3, 28
  04dcc10  bf 2, 0x4dcbdc
  04dcc14  bl 0x650684
  04dcc18  ld 2, 40(1)
  04dcc1c  lis 4, 144
  04dcc20  lis 5, 271
  04dcc24  li 6, 22000
  04dcc28  li 8, 18000
  04dcc2c  li 7, 50
  04dcc30  lwz 9, -23196(4)
  04dcc34  li 30, 0
  04dcc38  ori 4, 3, 0
  04dcc3c  ld 3, -2816(5)
  04dcc40  subc 5, 6, 8
  04dcc44  subc 3, 4, 3
  04dcc48  lwz 6, 24(9)
  04dcc4c  subc 6, 7, 6
  04dcc50  cntlzw 6, 6
  04dcc54  sldi 6, 6, 58
  04dcc58  sradi 6, 6, 63
  04dcc5c  and 5, 6, 5
  04dcc60  addc 5, 8, 5
  04dcc64  cmpd 3, 5
  04dcc68  bf 1, 0x4dcc9c
  04dcc6c  lis 3, 271
  04dcc70  li 5, 20
  04dcc74  li 6, 20
  04dcc78  lwz 3, -2820(3)
  04dcc7c  addic 3, 3, 5
  04dcc80  extsw 7, 3
  04dcc84  subc 6, 6, 3
  04dcc88  subc 5, 5, 7
  04dcc8c  sradi 5, 5, 63
  04dcc90  and 5, 5, 6
  04dcc94  addc 3, 3, 5
  04dcc98  b 0x4dccc8
  04dcc9c  lis 3, 271
  04dcca0  li 5, 0
  04dcca4  li 6, 0
  04dcca8  lwz 3, -2820(3)
  04dccac  addic 3, 3, -1
  04dccb0  extsw 7, 3
  04dccb4  subc 6, 6, 3
  04dccb8  subc 5, 7, 5
  04dccbc  sradi 5, 5, 63
  04dccc0  and 5, 5, 6
  04dccc4  addc 3, 3, 5
  04dccc8  lis 5, 271
  04dcccc  vspltisw 2, 0
  04dccd0  cntlzw 7, 3
  04dccd4  lis 9, 144
  04dccd8  rlwinm 7, 7, 27, 31, 31
  04dccdc  lis 6, 271
  04dcce0  li 8, 112
  04dcce4  stw 3, -2820(5)
  04dcce8  lis 3, 1
  04dccec  stb 7, -23220(9)
  04dccf0  li 7, 129
  04dccf4  ori 10, 3, 34244
  04dccf8  std 4, -2816(6)
  04dccfc  li 3, 0
  04dcd00  stvx 2, 8, 1
  04dcd04  addic 4, 1, 112
  04dcd08  stb 7, 112(1)
  04dcd0c  li 5, 0
  04dcd10  stb 30, 113(1)
  04dcd14  li 6, 0
  04dcd18  lwzx 7, 31, 10
  04dcd1c  stw 7, 124(1)
  04dcd20  bl 0x64f4c4
  04dcd24  ld 2, 40(1)
  04dcd28  cmpwi 3, 0
  04dcd2c  bt 2, 0x4dcd48
  04dcd30  lis 5, 102
  04dcd34  ori 4, 3, 0
  04dcd38  addic 3, 5, -28036
  04dcd3c  bl 0x5cd098
  04dcd40  nop
  04dcd44  b 0x4dcdb0
  04dcd48  lis 4, 1
  04dcd4c  lis 5, 1
  04dcd50  ori 29, 4, 34256
  04dcd54  li 4, 129
  04dcd58  ori 28, 5, 34252
  04dcd5c  addic 3, 31, 7480
  04dcd60  stb 4, 17(31)
  04dcd64  lwzx 4, 31, 29
  04dcd68  lwzx 5, 31, 28
  04dcd6c  bl 0x4e5db0
  04dcd70  nop
  04dcd74  lwzx 4, 31, 29
  04dcd78  addic 3, 31, 7820
  04dcd7c  lwzx 5, 31, 28
  04dcd80  bl 0x4e5db0
  04dcd84  nop
  04dcd88  lis 3, 1
  04dcd8c  li 4, 1
  04dcd90  stw 30, 20(31)
  04dcd94  ori 5, 3, 34193
  04dcd98  lis 3, 113
  04dcd9c  stb 4, 16(31)
  04dcda0  addic 3, 3, -672
  04dcda4  stbx 30, 31, 5
  04dcda8  bl 0x64f384
  04dcdac  ld 2, 40(1)
  04dcdb0  ld 0, 176(1)
  04dcdb4  mtlr 0
  04dcdb8  ld 28, 128(1)
  04dcdbc  ld 29, 136(1)
  04dcdc0  ld 30, 144(1)
  04dcdc4  ld 31, 152(1)
  04dcdc8  addi 1, 1, 160
  04dcdcc  blr

idol_draw::Gfx_DrawLoadingBar:   # 0x4dcdd0, 0x3cc bytes
  04dcdd0  stdu 1, -128(1)
  04dcdd4  mflr 0
  04dcdd8  std 0, 144(1)
  04dcddc  std 31, 120(1)
  04dcde0  lis 4, 1
  04dcde4  ori 31, 3, 0
  04dcde8  ori 4, 4, 34292
  04dcdec  lwzx 3, 3, 4
  04dcdf0  std 30, 112(1)
  04dcdf4  cmpwi 3, 0
  04dcdf8  bt 2, 0x4dd184
  04dcdfc  lis 30, 144
  04dce00  ori 3, 31, 0
  04dce04  addic 30, 30, -23532
  04dce08  li 5, 11
  04dce0c  lwz 4, 36(30)
  04dce10  bl 0x4d83ec
  04dce14  lwz 4, 36(30)
  04dce18  ori 3, 31, 0
  04dce1c  li 5, 18
  04dce20  bl 0x4d82b8
  04dce24  lwz 4, 36(30)
  04dce28  lis 5, 4
  04dce2c  li 6, 0
  04dce30  ori 5, 5, 2676
  04dce34  lis 8, 4
  04dce38  lwz 7, 8(4)
  04dce3c  li 3, 4164
  04dce40  stw 5, 0(7)
  04dce44  lwz 5, 8(4)
  04dce48  ori 7, 8, 2672
  04dce4c  lis 8, 4
  04dce50  stw 6, 4(5)
  04dce54  lwz 5, 8(4)
  04dce58  addic 5, 5, 8
  04dce5c  stw 5, 8(4)
  04dce60  lwz 4, 36(30)
  04dce64  lwz 5, 8(4)
  04dce68  stw 7, 0(5)
  04dce6c  lwz 5, 8(4)
  04dce70  ori 7, 8, 5952
  04dce74  lis 8, 4
  04dce78  stw 6, 4(5)
  04dce7c  lwz 5, 8(4)
  04dce80  addic 5, 5, 8
  04dce84  ori 8, 8, 5964
  04dce88  stw 5, 8(4)
  04dce8c  lwz 4, 36(30)
  04dce90  li 5, 4146
  04dce94  lwz 9, 8(4)
  04dce98  stw 7, 0(9)
  04dce9c  lwz 7, 8(4)
  04dcea0  stw 5, 4(7)
  04dcea4  lwz 5, 8(4)
  04dcea8  addic 5, 5, 8
  04dceac  stw 5, 8(4)
  04dceb0  lwz 4, 36(30)
  04dceb4  lis 5, 1
  04dceb8  ori 5, 5, 34296
  04dcebc  lwz 7, 8(4)
  04dcec0  stw 8, 0(7)
  04dcec4  lwz 7, 8(4)
  04dcec8  stw 3, 4(7)
  04dcecc  lwz 3, 8(4)
  04dced0  lis 7, 4
  04dced4  addic 3, 3, 8
  04dced8  ori 7, 7, 5760
  04dcedc  stw 3, 8(4)
  04dcee0  lwz 3, 6764(31)
  04dcee4  lwz 4, 36(30)
  04dcee8  slwi 3, 3, 2
  04dceec  lwz 8, 1192(31)
  04dcef0  addc 3, 31, 3
  04dcef4  clrldi 3, 3, 32
  04dcef8  lwz 9, 8(4)
  04dcefc  addc 3, 3, 5
  04dcf00  lis 5, -32768
  04dcf04  lwz 3, 0(3)
  04dcf08  stw 7, 0(9)
  04dcf0c  subc 3, 3, 8
  04dcf10  lwz 7, 8(4)
  04dcf14  lis 9, 4
  04dcf18  or 8, 3, 5
  04dcf1c  addic 3, 3, 12
  04dcf20  or 3, 3, 5
  04dcf24  stw 8, 4(7)
  04dcf28  lwz 7, 8(4)
  04dcf2c  ori 8, 9, 5772
  04dcf30  addic 7, 7, 8
  04dcf34  lis 5, 16396
  04dcf38  stw 7, 8(4)
  04dcf3c  lwz 4, 36(30)
  04dcf40  ori 5, 5, 5908
  04dcf44  lwz 7, 8(4)
  04dcf48  stw 8, 0(7)
  04dcf4c  lwz 7, 8(4)
  04dcf50  lis 8, 1
  04dcf54  ori 8, 8, 34292
  04dcf58  stw 3, 4(7)
  04dcf5c  lwz 3, 8(4)
  04dcf60  addic 3, 3, 8
  04dcf64  stw 3, 8(4)
  04dcf68  lwz 3, 36(30)
  04dcf6c  lis 4, 4
  04dcf70  ori 4, 4, 6152
  04dcf74  lwz 7, 8(3)
  04dcf78  stw 5, 0(7)
  04dcf7c  lwz 5, 8(3)
  04dcf80  li 7, 8
  04dcf84  stw 6, 4(5)
  04dcf88  lwz 5, 8(3)
  04dcf8c  stw 6, 8(5)
  04dcf90  lwz 5, 8(3)
  04dcf94  stw 6, 12(5)
  04dcf98  lwz 5, 8(3)
  04dcf9c  stw 4, 16(5)
  04dcfa0  lwz 4, 8(3)
  04dcfa4  stw 7, 20(4)
  04dcfa8  lwz 4, 8(3)
  04dcfac  addic 4, 4, 24
  04dcfb0  stw 4, 8(3)
  04dcfb4  lwzx 3, 31, 8
  04dcfb8  addic 4, 3, -256
  04dcfbc  srawi 5, 4, 31
  04dcfc0  and 7, 4, 5
  04dcfc4  addic 7, 7, 256
  04dcfc8  subc 4, 3, 7
  04dcfcc  lwz 3, 36(30)
  04dcfd0  srawi 5, 4, 31
  04dcfd4  cmpwi 7, 0
  04dcfd8  not 5, 5
  04dcfdc  and 5, 4, 5
  04dcfe0  cntlzw 4, 7
  04dcfe4  lwz 10, 8(3)
  04dcfe8  rlwinm 8, 5, 0, 0, 23
  04dcfec  rlwinm 9, 4, 27, 31, 31
  04dcff0  subc 4, 5, 8
  04dcff4  srwi 5, 5, 8
  04dcff8  cntlzw 8, 4
  04dcffc  xori 9, 9, 1
  04dd000  rlwinm 8, 8, 27, 31, 31
  04dd004  xori 8, 8, 1
  04dd008  addc 8, 5, 8
  04dd00c  addc 8, 8, 9
  04dd010  addic 9, 10, 4
  04dd014  slwi 8, 8, 18
  04dd018  ori 8, 8, 6164
  04dd01c  stw 9, 8(3)
  04dd020  oris 8, 8, 16384
  04dd024  stw 8, 0(10)
  04dd028  bt 2, 0x4dd04c
  04dd02c  slwi 6, 7, 24
  04dd030  lis 8, 256
  04dd034  lwz 9, 8(3)
  04dd038  subc 8, 6, 8
  04dd03c  ori 6, 7, 0
  04dd040  addic 7, 9, 4
  04dd044  stw 7, 8(3)
  04dd048  stw 8, 0(9)
  04dd04c  cmpwi 5, 0
  04dd050  bt 2, 0x4dd07c
  04dd054  lis 7, -256
  04dd058  lwz 9, 8(3)
  04dd05c  or 8, 6, 7
  04dd060  addic 5, 5, -1
  04dd064  addic 10, 9, 4
  04dd068  cmpwi 5, 0
  04dd06c  addic 6, 6, 256
  04dd070  stw 10, 8(3)
  04dd074  stw 8, 0(9)
  04dd078  bt 1, 0x4dd058
  04dd07c  cmpwi 4, 0
  04dd080  bt 2, 0x4dd0a4
  04dd084  slwi 4, 4, 24
  04dd088  lis 5, 256
  04dd08c  subc 4, 4, 5
  04dd090  lwz 5, 8(3)
  04dd094  or 4, 6, 4
  04dd098  addic 6, 5, 4
  04dd09c  stw 6, 8(3)
  04dd0a0  stw 4, 0(5)
  04dd0a4  lwz 5, 36(30)
  04dd0a8  lis 3, 4
  04dd0ac  li 4, 0
  04dd0b0  ori 3, 3, 6152
  04dd0b4  lis 6, 4
  04dd0b8  lwz 7, 8(5)
  04dd0bc  lis 8, 4
  04dd0c0  ori 6, 6, 5952
  04dd0c4  stw 3, 0(7)
  04dd0c8  lwz 3, 8(5)
  04dd0cc  li 7, 2
  04dd0d0  stw 4, 4(3)
  04dd0d4  lwz 3, 8(5)
  04dd0d8  addic 3, 3, 8
  04dd0dc  stw 3, 8(5)
  04dd0e0  lwz 3, 36(30)
  04dd0e4  lwz 5, 8(3)
  04dd0e8  stw 6, 0(5)
  04dd0ec  lwz 5, 8(3)
  04dd0f0  ori 6, 8, 5964
  04dd0f4  lis 8, 4
  04dd0f8  stw 7, 4(5)
  04dd0fc  lwz 5, 8(3)
  04dd100  addic 5, 5, 8
  04dd104  stw 5, 8(3)
  04dd108  lwz 3, 36(30)
  04dd10c  lwz 5, 8(3)
  04dd110  stw 6, 0(5)
  04dd114  lwz 5, 8(3)
  04dd118  ori 6, 8, 2676
  04dd11c  stw 7, 4(5)
  04dd120  lwz 5, 8(3)
  04dd124  addic 5, 5, 8
  04dd128  stw 5, 8(3)
  04dd12c  lwz 3, 36(30)
  04dd130  li 5, 1
  04dd134  lwz 7, 8(3)
  04dd138  stw 6, 0(7)
  04dd13c  lwz 6, 8(3)
  04dd140  lis 7, 4
  04dd144  ori 7, 7, 2672
  04dd148  stw 5, 4(6)
  04dd14c  lwz 6, 8(3)
  04dd150  addic 6, 6, 8
  04dd154  stw 6, 8(3)
  04dd158  lwz 3, 36(30)
  04dd15c  lis 6, 1
  04dd160  ori 6, 6, 34292
  04dd164  lwz 8, 8(3)
  04dd168  stw 7, 0(8)
  04dd16c  lwz 7, 8(3)
  04dd170  stw 5, 4(7)
  04dd174  lwz 5, 8(3)
  04dd178  addic 5, 5, 8
  04dd17c  stw 5, 8(3)
  04dd180  stwx 4, 31, 6
  04dd184  ld 0, 144(1)
  04dd188  mtlr 0
  04dd18c  ld 30, 112(1)
  04dd190  ld 31, 120(1)
  04dd194  addi 1, 1, 128
  04dd198  blr

idol_draw::Gfx_SetupUIRenderTarget:   # 0x4dd19c, 0x554 bytes
  04dd19c  stdu 1, -160(1)
  04dd1a0  mflr 0
  04dd1a4  std 0, 176(1)
  04dd1a8  std 31, 152(1)
  04dd1ac  lis 4, 144
  04dd1b0  ori 31, 3, 0
  04dd1b4  addic 3, 4, -23532
  04dd1b8  lis 4, 8
  04dd1bc  std 30, 144(1)
  04dd1c0  ori 4, 4, 6656
  04dd1c4  lwz 30, 20(3)
  04dd1c8  lbz 3, 8634(31)
  04dd1cc  lwz 5, 8640(31)
  04dd1d0  lbz 6, 8621(31)
  04dd1d4  addic 3, 3, 1
  04dd1d8  lbz 7, 8620(31)
  04dd1dc  lbz 8, 8623(31)
  04dd1e0  ori 3, 3, 8
  04dd1e4  lbz 9, 8622(31)
  04dd1e8  slwi 7, 7, 8
  04dd1ec  lhz 10, 8630(31)
  04dd1f0  rlwimi 3, 6, 16, 8, 15
  04dd1f4  lhz 6, 8628(31)
  04dd1f8  slwi 8, 8, 2
  04dd1fc  lwz 11, 8624(31)
  04dd200  or 3, 3, 7
  04dd204  lwz 7, 8636(31)
  04dd208  slwi 9, 9, 4
  04dd20c  lwz 12, 8(30)
  04dd210  rlwimi 10, 6, 16, 0, 15
  04dd214  or 8, 8, 9
  04dd218  lhz 9, 8632(31)
  04dd21c  or 3, 3, 8
  04dd220  stw 4, 0(12)
  04dd224  lwz 4, 8(30)
  04dd228  stw 5, 4(4)
  04dd22c  lwz 4, 8(30)
  04dd230  lis 5, 4
  04dd234  stw 3, 8(4)
  04dd238  lwz 3, 8(30)
  04dd23c  addic 4, 3, 12
  04dd240  stw 4, 8(30)
  04dd244  ori 4, 5, 6680
  04dd248  slwi 5, 9, 20
  04dd24c  stw 4, 12(3)
  04dd250  lwz 6, 8(30)
  04dd254  or 3, 7, 5
  04dd258  lis 4, 4
  04dd25c  lis 5, 4
  04dd260  ori 4, 4, 6208
  04dd264  stw 10, 4(6)
  04dd268  lwz 6, 8(30)
  04dd26c  addic 7, 6, 8
  04dd270  stw 7, 8(30)
  04dd274  stw 4, 8(6)
  04dd278  lis 7, 4
  04dd27c  lwz 8, 8(30)
  04dd280  ori 4, 5, 6672
  04dd284  lis 5, 4
  04dd288  lis 6, 275
  04dd28c  ori 5, 5, 404
  04dd290  stw 3, 4(8)
  04dd294  lwz 3, 8(30)
  04dd298  addic 8, 3, 8
  04dd29c  stw 8, 8(30)
  04dd2a0  stw 4, 8(3)
  04dd2a4  ori 3, 7, 396
  04dd2a8  lwz 7, 8(30)
  04dd2ac  lis 4, 8
  04dd2b0  ori 4, 4, 436
  04dd2b4  stw 11, 4(7)
  04dd2b8  lwz 7, 8(30)
  04dd2bc  addic 8, 7, 8
  04dd2c0  stw 8, 8(30)
  04dd2c4  stw 5, 8(7)
  04dd2c8  lbz 5, 7144(31)
  04dd2cc  lwz 7, 8(30)
  04dd2d0  subc 5, 5, 6
  04dd2d4  stw 5, 4(7)
  04dd2d8  lwz 5, 8(30)
  04dd2dc  addic 7, 5, 8
  04dd2e0  stw 7, 8(30)
  04dd2e4  stw 3, 8(5)
  04dd2e8  lbz 3, 7145(31)
  04dd2ec  lwz 7, 8(30)
  04dd2f0  lis 5, 4
  04dd2f4  subc 3, 3, 6
  04dd2f8  ori 5, 5, 408
  04dd2fc  stw 3, 4(7)
  04dd300  lwz 3, 8(30)
  04dd304  addic 7, 3, 8
  04dd308  stw 7, 8(30)
  04dd30c  stw 4, 8(3)
  04dd310  lbz 3, 7146(31)
  04dd314  lwz 8, 8(30)
  04dd318  subc 3, 3, 6
  04dd31c  lis 4, 24
  04dd320  li 7, 31
  04dd324  ori 4, 4, 520
  04dd328  stw 3, 4(8)
  04dd32c  lbz 3, 7147(31)
  04dd330  lwz 8, 8(30)
  04dd334  subc 3, 3, 6
  04dd338  stw 3, 8(8)
  04dd33c  lwz 3, 8(30)
  04dd340  addic 8, 3, 12
  04dd344  stw 8, 8(30)
  04dd348  stw 5, 12(3)
  04dd34c  lbz 3, 7181(31)
  04dd350  lwz 5, 8(30)
  04dd354  subc 3, 3, 6
  04dd358  stw 3, 4(5)
  04dd35c  lwz 3, 8(30)
  04dd360  lhz 6, 7192(31)
  04dd364  addic 5, 3, 8
  04dd368  cntlzw 6, 6
  04dd36c  stw 5, 8(30)
  04dd370  lhz 5, 7194(31)
  04dd374  stw 4, 8(3)
  04dd378  cntlzw 5, 5
  04dd37c  subc 3, 7, 6
  04dd380  lbz 4, 7180(31)
  04dd384  lbz 6, 7142(31)
  04dd388  subc 5, 7, 5
  04dd38c  lbz 7, 7140(31)
  04dd390  slwi 4, 4, 5
  04dd394  lbz 8, 7141(31)
  04dd398  slwi 3, 3, 16
  04dd39c  or 4, 6, 4
  04dd3a0  slwi 7, 7, 8
  04dd3a4  slwi 6, 8, 12
  04dd3a8  slwi 5, 5, 24
  04dd3ac  or 6, 7, 6
  04dd3b0  or 4, 4, 6
  04dd3b4  or 3, 4, 3
  04dd3b8  lwz 4, 8(30)
  04dd3bc  or 3, 3, 5
  04dd3c0  lis 5, 4
  04dd3c4  stw 3, 4(4)
  04dd3c8  lwz 3, 8(30)
  04dd3cc  lwz 4, 7164(31)
  04dd3d0  stw 4, 8(3)
  04dd3d4  lwz 3, 8(30)
  04dd3d8  lwz 4, 7148(31)
  04dd3dc  stw 4, 12(3)
  04dd3e0  lwz 3, 8(30)
  04dd3e4  lwz 4, 7184(31)
  04dd3e8  stw 4, 16(3)
  04dd3ec  lwz 3, 8(30)
  04dd3f0  lwz 4, 7152(31)
  04dd3f4  stw 4, 20(3)
  04dd3f8  lwz 3, 8(30)
  04dd3fc  lwz 4, 7168(31)
  04dd400  stw 4, 24(3)
  04dd404  lwz 3, 8(30)
  04dd408  addic 4, 3, 28
  04dd40c  stw 4, 8(30)
  04dd410  ori 4, 5, 556
  04dd414  stw 4, 28(3)
  04dd418  lwz 3, 7188(31)
  04dd41c  lwz 5, 8(30)
  04dd420  lis 4, 16
  04dd424  ori 4, 4, 640
  04dd428  stw 3, 4(5)
  04dd42c  lwz 3, 8(30)
  04dd430  addic 5, 3, 8
  04dd434  stw 5, 8(30)
  04dd438  stw 4, 8(3)
  04dd43c  lwz 3, 7172(31)
  04dd440  lis 4, 4
  04dd444  lwz 6, 8(30)
  04dd448  lis 5, 4
  04dd44c  ori 4, 4, 544
  04dd450  stw 3, 4(6)
  04dd454  lwz 3, 8(30)
  04dd458  lwz 6, 7176(31)
  04dd45c  stw 6, 8(3)
  04dd460  lwz 3, 8(30)
  04dd464  lwz 6, 7156(31)
  04dd468  stw 6, 12(3)
  04dd46c  lwz 3, 8(30)
  04dd470  lwz 6, 7160(31)
  04dd474  stw 6, 16(3)
  04dd478  lwz 3, 8(30)
  04dd47c  addic 6, 3, 20
  04dd480  stw 6, 8(30)
  04dd484  stw 4, 20(3)
  04dd488  lbz 3, 7143(31)
  04dd48c  lwz 6, 8(30)
  04dd490  ori 4, 5, 696
  04dd494  lis 5, 8
  04dd498  ori 5, 5, 512
  04dd49c  stw 3, 4(6)
  04dd4a0  lwz 3, 8(30)
  04dd4a4  addic 6, 3, 8
  04dd4a8  stw 6, 8(30)
  04dd4ac  stw 4, 8(3)
  04dd4b0  lhz 3, 7196(31)
  04dd4b4  lhz 4, 7198(31)
  04dd4b8  lwz 6, 8(30)
  04dd4bc  rlwimi 3, 4, 16, 0, 15
  04dd4c0  lis 4, 4
  04dd4c4  ori 4, 4, 7560
  04dd4c8  stw 3, 4(6)
  04dd4cc  lwz 3, 8(30)
  04dd4d0  addic 6, 3, 8
  04dd4d4  stw 6, 8(30)
  04dd4d8  stw 5, 8(3)
  04dd4dc  lhz 3, 7196(31)
  04dd4e0  lhz 5, 7192(31)
  04dd4e4  lwz 6, 8(30)
  04dd4e8  rlwimi 3, 5, 16, 0, 15
  04dd4ec  lis 5, 4
  04dd4f0  stw 3, 4(6)
  04dd4f4  lhz 3, 7198(31)
  04dd4f8  lhz 6, 7194(31)
  04dd4fc  lwz 7, 8(30)
  04dd500  rlwimi 3, 6, 16, 0, 15
  04dd504  stw 3, 8(7)
  04dd508  lwz 3, 8(30)
  04dd50c  addic 6, 3, 12
  04dd510  stw 6, 8(30)
  04dd514  stw 4, 12(3)
  04dd518  li 6, 0
  04dd51c  lhz 3, 7194(31)
  04dd520  lwz 7, 8(30)
  04dd524  rlwinm 4, 3, 20, 31, 31
  04dd528  subc 3, 3, 4
  04dd52c  ori 4, 5, 2676
  04dd530  ori 3, 3, 4096
  04dd534  lis 5, 4
  04dd538  stw 3, 4(7)
  04dd53c  lwz 3, 8(30)
  04dd540  std 28, 128(1)
  04dd544  addic 7, 3, 8
  04dd548  li 28, 1
  04dd54c  stw 7, 8(30)
  04dd550  stw 4, 8(3)
  04dd554  lis 7, -32762
  04dd558  lwz 8, 8(30)
  04dd55c  ori 3, 5, 804
  04dd560  lis 4, 1
  04dd564  lis 5, 4
  04dd568  ori 4, 4, 257
  04dd56c  ori 5, 5, 800
  04dd570  stw 6, 4(8)
  04dd574  lwz 8, 8(30)
  04dd578  addic 9, 8, 8
  04dd57c  stw 9, 8(30)
  04dd580  stw 3, 8(8)
  04dd584  lwz 8, 8(30)
  04dd588  ori 3, 7, 32774
  04dd58c  std 29, 136(1)
  04dd590  lis 7, 8
  04dd594  ori 29, 7, 788
  04dd598  stw 4, 4(8)
  04dd59c  lwz 4, 8(30)
  04dd5a0  li 7, 770
  04dd5a4  addic 8, 4, 8
  04dd5a8  stw 8, 8(30)
  04dd5ac  stw 5, 8(4)
  04dd5b0  lwz 8, 8(30)
  04dd5b4  lis 4, 8
  04dd5b8  li 5, 518
  04dd5bc  ori 4, 4, 776
  04dd5c0  stw 3, 4(8)
  04dd5c4  lwz 3, 8(30)
  04dd5c8  addic 8, 3, 8
  04dd5cc  stw 8, 8(30)
  04dd5d0  stw 29, 8(3)
  04dd5d4  std 27, 120(1)
  04dd5d8  lis 3, 4
  04dd5dc  ori 27, 3, 772
  04dd5e0  lwz 3, 8(30)
  04dd5e4  stw 6, 4(3)
  04dd5e8  lwz 3, 8(30)
  04dd5ec  stw 7, 8(3)
  04dd5f0  lwz 3, 8(30)
  04dd5f4  addic 7, 3, 12
  04dd5f8  stw 7, 8(30)
  04dd5fc  stw 4, 12(3)
  04dd600  lwz 8, 8(30)
  04dd604  lis 3, 4
  04dd608  ori 7, 3, 784
  04dd60c  ori 3, 31, 0
  04dd610  stw 5, 4(8)
  04dd614  lwz 5, 8(30)
  04dd618  ori 4, 30, 0
  04dd61c  stw 28, 8(5)
  04dd620  lwz 5, 8(30)
  04dd624  addic 8, 5, 12
  04dd628  stw 8, 8(30)
  04dd62c  stw 27, 12(5)
  04dd630  lwz 8, 8(30)
  04dd634  li 5, 13
  04dd638  stw 6, 4(8)
  04dd63c  lwz 6, 8(30)
  04dd640  addic 8, 6, 8
  04dd644  stw 8, 8(30)
  04dd648  stw 7, 8(6)
  04dd64c  lwz 6, 8(30)
  04dd650  stw 28, 4(6)
  04dd654  lwz 6, 8(30)
  04dd658  addic 6, 6, 8
  04dd65c  stw 6, 8(30)
  04dd660  bl 0x4d83ec
  04dd664  ori 3, 31, 0
  04dd668  ori 4, 30, 0
  04dd66c  li 5, 3
  04dd670  bl 0x4d82b8
  04dd674  ori 3, 31, 0
  04dd678  li 4, 5
  04dd67c  bl 0x4d8b50
  04dd680  lwz 3, 8(30)
  04dd684  lis 4, 770
  04dd688  lis 5, 771
  04dd68c  ori 4, 4, 770
  04dd690  ori 5, 5, 771
  04dd694  stw 29, 0(3)
  04dd698  lwz 3, 8(30)
  04dd69c  stw 4, 4(3)
  04dd6a0  lwz 3, 8(30)
  04dd6a4  stw 5, 8(3)
  04dd6a8  lwz 3, 8(30)
  04dd6ac  addic 4, 3, 12
  04dd6b0  stw 4, 8(30)
  04dd6b4  stw 27, 12(3)
  04dd6b8  lwz 3, 8(30)
  04dd6bc  stw 28, 4(3)
  04dd6c0  lwz 3, 8(30)
  04dd6c4  addic 3, 3, 8
  04dd6c8  stw 3, 8(30)
  04dd6cc  ld 0, 176(1)
  04dd6d0  mtlr 0
  04dd6d4  ld 27, 120(1)
  04dd6d8  ld 28, 128(1)
  04dd6dc  ld 29, 136(1)
  04dd6e0  ld 30, 144(1)
  04dd6e4  ld 31, 152(1)
  04dd6e8  addi 1, 1, 160
  04dd6ec  blr

idol_draw::Gfx_SubmitHudDrawCommands:   # 0x4dd6f0, 0x1ec bytes
  04dd6f0  stdu 1, -272(1)
  04dd6f4  mflr 0
  04dd6f8  std 0, 288(1)
  04dd6fc  std 29, 248(1)
  04dd700  ori 29, 4, 0
  04dd704  cmpwi 6, -1
  04dd708  std 30, 256(1)
  04dd70c  ori 4, 5, 0
  04dd710  ori 3, 6, 0
  04dd714  std 31, 264(1)
  04dd718  ori 30, 7, 0
  04dd71c  std 28, 240(1)
  04dd720  std 27, 232(1)
  04dd724  std 26, 224(1)
  04dd728  std 25, 216(1)
  04dd72c  std 24, 208(1)
  04dd730  std 23, 200(1)
  04dd734  std 22, 192(1)
  04dd738  ori 31, 8, 0
  04dd73c  bt 2, 0x4dd8a4
  04dd740  ori 7, 3, 0
  04dd744  sldi 3, 4, 3
  04dd748  sldi 4, 4, 4
  04dd74c  addc 8, 3, 3
  04dd750  lis 5, 271
  04dd754  addc 3, 3, 8
  04dd758  li 8, 32
  04dd75c  addc 6, 4, 4
  04dd760  addic 5, 5, -6544
  04dd764  addc 4, 4, 6
  04dd768  stw 8, 112(1)
  04dd76c  lis 6, 271
  04dd770  addc 28, 5, 3
  04dd774  addic 3, 6, -5368
  04dd778  clrldi 28, 28, 32
  04dd77c  addc 3, 3, 4
  04dd780  ori 4, 7, 0
  04dd784  addic 5, 1, 116
  04dd788  addic 6, 1, 112
  04dd78c  clrldi 3, 3, 32
  04dd790  bl 0x50f500
  04dd794  nop
  04dd798  lwz 4, 112(1)
  04dd79c  li 3, 0
  04dd7a0  cmpwi 4, 0
  04dd7a4  bt 2, 0x4dd8a4
  04dd7a8  lis 10, 4
  04dd7ac  lis 7, 4096
  04dd7b0  lis 9, 8
  04dd7b4  lis 6, 12
  04dd7b8  lis 5, 0
  04dd7bc  ori 11, 1, 0
  04dd7c0  li 8, 11
  04dd7c4  ori 10, 10, 25356
  04dd7c8  ori 9, 9, 25344
  04dd7cc  ori 7, 7, 4096
  04dd7d0  ori 6, 6, 41732
  04dd7d4  ori 5, 5, 41984
  04dd7d8  lwz 12, 8(29)
  04dd7dc  ori 23, 5, 0
  04dd7e0  addic 4, 12, 8
  04dd7e4  stw 4, 8(29)
  04dd7e8  lwz 27, 0(28)
  04dd7ec  ori 4, 31, 0
  04dd7f0  lhz 25, 116(11)
  04dd7f4  stw 10, 0(12)
  04dd7f8  addc 27, 27, 25
  04dd7fc  stw 9, 8(12)
  04dd800  addic 26, 4, 1
  04dd804  rlwinm 25, 27, 0, 0, 25
  04dd808  rlwinm 24, 26, 0, 0, 30
  04dd80c  rlwinm 27, 27, 30, 28, 31
  04dd810  rlwimi 23, 26, 18, 0, 12
  04dd814  stw 25, 4(12)
  04dd818  lwz 12, 8(29)
  04dd81c  oris 26, 4, 1
  04dd820  cmpwi 4, 0
  04dd824  addic 25, 12, 12
  04dd828  stw 25, 8(29)
  04dd82c  stw 8, 4(12)
  04dd830  stw 7, 8(12)
  04dd834  sldi 25, 24, 2
  04dd838  stw 6, 12(12)
  04dd83c  lwz 24, 8(29)
  04dd840  ori 12, 30, 0
  04dd844  addic 22, 24, 16
  04dd848  stw 22, 8(29)
  04dd84c  stw 27, 4(24)
  04dd850  stw 26, 8(24)
  04dd854  stw 26, 12(24)
  04dd858  stw 23, 16(24)
  04dd85c  lwz 27, 8(29)
  04dd860  addic 27, 27, 4
  04dd864  addc 26, 27, 25
  04dd868  stw 26, 8(29)
  04dd86c  bt 2, 0x4dd890
  04dd870  lwz 26, 0(12)
  04dd874  addic 4, 4, -1
  04dd878  rotlwi 26, 26, 16
  04dd87c  cmpwi 4, 0
  04dd880  addic 12, 12, 4
  04dd884  stw 26, 0(27)
  04dd888  addic 27, 27, 4
  04dd88c  bt 1, 0x4dd870
  04dd890  addic 3, 3, 1
  04dd894  lwz 4, 112(1)
  04dd898  addic 11, 11, 2
  04dd89c  cmplw 3, 4
  04dd8a0  bt 0, 0x4dd7d8
  04dd8a4  ld 0, 288(1)
  04dd8a8  mtlr 0
  04dd8ac  ld 22, 192(1)
  04dd8b0  ld 23, 200(1)
  04dd8b4  ld 24, 208(1)
  04dd8b8  ld 25, 216(1)
  04dd8bc  ld 26, 224(1)
  04dd8c0  ld 27, 232(1)
  04dd8c4  ld 28, 240(1)
  04dd8c8  ld 29, 248(1)
  04dd8cc  ld 30, 256(1)
  04dd8d0  ld 31, 264(1)
  04dd8d4  addi 1, 1, 272
  04dd8d8  blr

FUN_004dd8e0:   # 0x4dd8e0, 0x2c8 bytes
  04dd8e0  stdu 1, -224(1)
  04dd8e4  mflr 0
  04dd8e8  std 0, 240(1)
  04dd8ec  std 29, 200(1)
  04dd8f0  std 30, 208(1)
  04dd8f4  li 29, 0
  04dd8f8  std 25, 168(1)
  04dd8fc  lwz 30, 6764(3)
  04dd900  std 24, 160(1)
  04dd904  std 22, 144(1)
  04dd908  ori 25, 3, 0
  04dd90c  ori 22, 29, 0
  04dd910  std 26, 176(1)
  04dd914  std 23, 152(1)
  04dd918  ori 24, 3, 0
  04dd91c  ori 26, 22, 0
  04dd920  std 31, 216(1)
  04dd924  ori 23, 3, 0
  04dd928  std 19, 120(1)
  04dd92c  ori 31, 3, 0
  04dd930  std 28, 192(1)
  04dd934  std 27, 184(1)
  04dd938  std 21, 136(1)
  04dd93c  std 20, 128(1)
  04dd940  ori 19, 26, 0
  04dd944  xori 30, 30, 1
  04dd948  mulli 3, 30, 2728
  04dd94c  addic 4, 31, 1200
  04dd950  lis 20, 144
  04dd954  addc 3, 3, 4
  04dd958  cmpwi 29, 0
  04dd95c  addc 3, 3, 26
  04dd960  lwz 4, 8956(23)
  04dd964  addic 20, 20, -23532
  04dd968  clrldi 3, 3, 32
  04dd96c  bf 2, 0x4dd998
  04dd970  addic 5, 4, -48
  04dd974  lwzx 4, 20, 19
  04dd978  lwz 3, 0(3)
  04dd97c  clrldi 5, 5, 32
  04dd980  lwz 6, 0(4)
  04dd984  addic 4, 3, 48
  04dd988  addic 3, 6, 48
  04dd98c  bl 0x5c5ad0
  04dd990  nop
  04dd994  b 0x4dd9b0
  04dd998  lwzx 6, 20, 19
  04dd99c  ori 5, 4, 0
  04dd9a0  lwz 4, 0(3)
  04dd9a4  lwz 3, 0(6)
  04dd9a8  bl 0x5c5ad0
  04dd9ac  nop
  04dd9b0  lis 3, 1
  04dd9b4  addic 28, 25, 9440
  04dd9b8  ori 3, 3, 34016
  04dd9bc  ori 27, 22, 0
  04dd9c0  addc 3, 23, 3
  04dd9c4  lwz 3, 0(3)
  04dd9c8  cmpwi 3, 0
  04dd9cc  bt 2, 0x4dda2c
  04dd9d0  lis 3, 1
  04dd9d4  ori 3, 3, 34016
  04dd9d8  addc 3, 31, 3
  04dd9dc  addc 21, 19, 3
  04dd9e0  clrldi 21, 21, 32
  04dd9e4  lwzx 4, 20, 19
  04dd9e8  ori 3, 31, 0
  04dd9ec  lwz 5, 20(28)
  04dd9f0  ori 7, 28, 0
  04dd9f4  lwz 6, 0(4)
  04dd9f8  addc 5, 6, 5
  04dd9fc  stw 5, 8(4)
  04dda00  lwzx 4, 20, 19
  04dda04  lwz 5, 24(28)
  04dda08  lwz 6, 16(28)
  04dda0c  lbz 8, 28(28)
  04dda10  extsw 5, 5
  04dda14  bl 0x4dd6f0
  04dda18  addic 27, 27, 1
  04dda1c  lwz 3, 0(21)
  04dda20  addic 28, 28, 32
  04dda24  cmplw 27, 3
  04dda28  bt 0, 0x4dd9e4
  04dda2c  lwz 5, 9044(23)
  04dda30  addic 3, 24, 9088
  04dda34  cmpwi 5, 0
  04dda38  ori 4, 22, 0
  04dda3c  bt 2, 0x4ddaac
  04dda40  addic 5, 31, 9044
  04dda44  addc 7, 19, 5
  04dda48  clrldi 7, 7, 32
  04dda4c  li 5, 2
  04dda50  ori 6, 22, 0
  04dda54  mtctr 5
  04dda58  lwzx 5, 20, 19
  04dda5c  lwz 8, 0(3)
  04dda60  lwz 9, 0(5)
  04dda64  addc 8, 9, 8
  04dda68  stw 8, 8(5)
  04dda6c  lwzx 5, 20, 19
  04dda70  lwz 8, 8(5)
  04dda74  stwx 22, 8, 6
  04dda78  lwz 8, 8(5)
  04dda7c  addc 8, 8, 6
  04dda80  addic 6, 6, 8
  04dda84  stw 22, 4(8)
  04dda88  bdnz 0x4dda70
  04dda8c  lwz 6, 8(5)
  04dda90  addic 4, 4, 1
  04dda94  addic 6, 6, 16
  04dda98  addic 3, 3, 4
  04dda9c  stw 6, 8(5)
  04ddaa0  lwz 5, 0(7)
  04ddaa4  cmplw 4, 5
  04ddaa8  bt 0, 0x4dda4c
  04ddaac  lwzx 3, 20, 19
  04ddab0  lwz 4, 8956(23)
  04ddab4  addic 29, 29, 1
  04ddab8  addic 26, 26, 248
  04ddabc  cmpwi 29, 11
  04ddac0  addic 25, 25, 8192
  04ddac4  lwz 5, 0(3)
  04ddac8  addic 19, 19, 4
  04ddacc  addc 4, 5, 4
  04ddad0  addic 24, 24, 32
  04ddad4  addic 23, 23, 4
  04ddad8  stw 4, 8(3)
  04ddadc  bt 0, 0x4dd948
  04ddae0  lis 4, 1
  04ddae4  ori 4, 4, 34188
  04ddae8  lwzx 3, 31, 4
  04ddaec  cmpwi 3, 0
  04ddaf0  bt 2, 0x4ddb60
  04ddaf4  ori 5, 3, 0
  04ddaf8  ori 3, 22, 0
  04ddafc  cmpwi 5, 0
  04ddb00  bt 2, 0x4ddb60
  04ddb04  lis 5, 78
  04ddb08  lis 6, 144
  04ddb0c  lwz 20, 40(20)
  04ddb10  addi 7, 5, -10020
  04ddb14  ori 5, 31, 0
  04ddb18  lwz 6, -23196(6)
  04ddb1c  lfs 1, 0(7)
  04ddb20  lis 7, 1
  04ddb24  lwz 8, 0(20)
  04ddb28  lfs 2, 6788(6)
  04ddb2c  ori 7, 7, 34060
  04ddb30  addic 3, 3, 1
  04ddb34  addc 7, 5, 7
  04ddb38  addic 5, 5, 4
  04ddb3c  lwz 7, 0(7)
  04ddb40  addc 7, 8, 7
  04ddb44  clrldi 7, 7, 32
  04ddb48  lfs 3, 0(7)
  04ddb4c  fmadds 2, 2, 1, 3
  04ddb50  stfs 2, 0(7)
  04ddb54  lwzx 7, 31, 4
  04ddb58  cmplw 3, 7
  04ddb5c  bt 0, 0x4ddb20
  04ddb60  stwx 22, 31, 4
  04ddb64  ld 0, 240(1)
  04ddb68  mtlr 0
  04ddb6c  ld 19, 120(1)
  04ddb70  ld 20, 128(1)
  04ddb74  ld 21, 136(1)
  04ddb78  ld 22, 144(1)
  04ddb7c  ld 23, 152(1)
  04ddb80  ld 24, 160(1)
  04ddb84  ld 25, 168(1)
  04ddb88  ld 26, 176(1)
  04ddb8c  ld 27, 184(1)
  04ddb90  ld 28, 192(1)
  04ddb94  ld 29, 200(1)
  04ddb98  ld 30, 208(1)
  04ddb9c  ld 31, 216(1)
  04ddba0  addi 1, 1, 224
  04ddba4  blr

idol_draw::BuildAndFlipFrame:   # 0x4ddba8, 0xd98 bytes
  04ddba8  stdu 1, -208(1)
  04ddbac  mflr 0
  04ddbb0  std 0, 224(1)
  04ddbb4  std 31, 200(1)
  04ddbb8  std 28, 176(1)
  04ddbbc  ori 31, 3, 0
  04ddbc0  li 28, 1
  04ddbc4  lwz 3, 6764(31)
  04ddbc8  sldi 4, 3, 6
  04ddbcc  std 27, 168(1)
  04ddbd0  sldi 5, 3, 2
  04ddbd4  ori 27, 3, 0
  04ddbd8  addc 4, 4, 5
  04ddbdc  lwz 5, 1184(31)
  04ddbe0  sldi 6, 4, 2
  04ddbe4  cmpwi 5, 1
  04ddbe8  addc 4, 4, 6
  04ddbec  std 30, 192(1)
  04ddbf0  addc 4, 31, 4
  04ddbf4  addic 30, 4, 7480
  04ddbf8  std 29, 184(1)
  04ddbfc  std 26, 160(1)
  04ddc00  std 25, 152(1)
  04ddc04  std 24, 144(1)
  04ddc08  std 23, 136(1)
  04ddc0c  std 22, 128(1)
  04ddc10  clrldi 30, 30, 32
  04ddc14  bf 2, 0x4ddd5c
  04ddc18  lwz 27, 20(31)
  04ddc1c  lwz 4, 6796(31)
  04ddc20  rlwinm 27, 27, 31, 31, 31
  04ddc24  cmpwi 4, 0
  04ddc28  bf 1, 0x4ddc50
  04ddc2c  lis 4, 144
  04ddc30  lwz 30, -23212(4)
  04ddc34  cmpwi 30, -1
  04ddc38  bf 2, 0x4ddc4c
  04ddc3c  lis 3, 144
  04ddc40  ori 30, 27, 0
  04ddc44  stw 27, -23212(3)
  04ddc48  lwz 3, 6764(31)
  04ddc4c  b 0x4ddc54
  04ddc50  ori 30, 27, 0
  04ddc54  sldi 4, 30, 6
  04ddc58  sldi 5, 30, 2
  04ddc5c  lis 6, 1
  04ddc60  addc 4, 4, 5
  04ddc64  ori 5, 6, 34193
  04ddc68  sldi 6, 4, 2
  04ddc6c  addc 4, 4, 6
  04ddc70  addc 4, 31, 4
  04ddc74  lbzx 5, 31, 5
  04ddc78  addic 30, 4, 7480
  04ddc7c  cmpwi 5, 0
  04ddc80  clrldi 30, 30, 32
  04ddc84  bt 2, 0x4ddd08
  04ddc88  clrlwi 3, 3, 31
  04ddc8c  cmpwi 3, 0
  04ddc90  bt 2, 0x4ddd08
  04ddc94  lis 3, 273
  04ddc98  addic 3, 3, 5888
  04ddc9c  bl 0x4edcfc
  04ddca0  nop
  04ddca4  ori 3, 31, 0
  04ddca8  bl 0x4dd8e0
  04ddcac  lwz 3, 6796(31)
  04ddcb0  cmpwi 3, 0
  04ddcb4  bf 1, 0x4ddce4
  04ddcb8  lis 3, 144
  04ddcbc  lwz 3, -23212(3)
  04ddcc0  sldi 4, 3, 6
  04ddcc4  sldi 3, 3, 2
  04ddcc8  addc 3, 4, 3
  04ddccc  sldi 4, 3, 2
  04ddcd0  addc 3, 3, 4
  04ddcd4  addc 3, 31, 3
  04ddcd8  addic 30, 3, 7540
  04ddcdc  clrldi 30, 30, 32
  04ddce0  b 0x4ddd5c
  04ddce4  sldi 3, 27, 6
  04ddce8  sldi 4, 27, 2
  04ddcec  addc 3, 3, 4
  04ddcf0  sldi 4, 3, 2
  04ddcf4  addc 3, 3, 4
  04ddcf8  addc 3, 31, 3
  04ddcfc  addic 30, 3, 7540
  04ddd00  clrldi 30, 30, 32
  04ddd04  b 0x4ddd5c
  04ddd08  lis 4, 144
  04ddd0c  li 5, 11
  04ddd10  ori 3, 31, 0
  04ddd14  addic 4, 4, -23532
  04ddd18  mtctr 5
  04ddd1c  lwz 5, 0(4)
  04ddd20  addic 4, 4, 4
  04ddd24  lwz 6, 8(5)
  04ddd28  lwz 7, 0(5)
  04ddd2c  subc 6, 6, 7
  04ddd30  stw 6, 8956(3)
  04ddd34  lwz 6, 4(5)
  04ddd38  lwz 5, 0(5)
  04ddd3c  subc 5, 6, 5
  04ddd40  stw 5, 9000(3)
  04ddd44  addic 3, 3, 4
  04ddd48  bdnz 0x4ddd1c
  04ddd4c  lis 3, 1
  04ddd50  ori 3, 3, 34193
  04ddd54  stbx 28, 31, 3
  04ddd58  li 28, 0
  04ddd5c  lwz 3, 6764(31)
  04ddd60  clrlwi 3, 3, 31
  04ddd64  cmpwi 3, 0
  04ddd68  bt 2, 0x4ddd98
  04ddd6c  li 5, 11
  04ddd70  li 3, 0
  04ddd74  ori 4, 31, 0
  04ddd78  mtctr 5
  04ddd7c  lis 5, 1
  04ddd80  stw 3, 9044(4)
  04ddd84  ori 5, 5, 34016
  04ddd88  addc 5, 4, 5
  04ddd8c  addic 4, 4, 4
  04ddd90  stw 3, 0(5)
  04ddd94  bdnz 0x4ddd7c
  04ddd98  ori 3, 31, 0
  04ddd9c  bl 0x4dd19c
  04ddda0  lwz 3, 7452(31)
  04ddda4  lwz 4, 7792(31)
  04ddda8  cmpw 3, 4
  04dddac  bf 2, 0x4dddc4
  04dddb0  ori 3, 31, 0
  04dddb4  ori 4, 30, 0
  04dddb8  li 5, 0
  04dddbc  bl 0x4dafe8
  04dddc0  b 0x4dddd4
  04dddc4  ori 3, 31, 0
  04dddc8  ori 4, 30, 0
  04dddcc  li 5, 0
  04dddd0  bl 0x4db930
  04dddd4  lis 30, 144
  04dddd8  lis 3, 4
  04ddddc  addic 23, 30, -23532
  04ddde0  ori 3, 3, 404
  04ddde4  lis 4, 275
  04ddde8  lis 7, 4
  04dddec  lwz 5, 40(23)
  04dddf0  lwz 6, 8(5)
  04dddf4  stw 3, 0(6)
  04dddf8  lbz 3, 7144(31)
  04dddfc  lwz 6, 8(5)
  04dde00  subc 3, 3, 4
  04dde04  stw 3, 4(6)
  04dde08  lwz 3, 8(5)
  04dde0c  addic 6, 3, 8
  04dde10  stw 6, 8(5)
  04dde14  ori 6, 7, 396
  04dde18  stw 6, 8(3)
  04dde1c  lbz 3, 7145(31)
  04dde20  lwz 7, 8(5)
  04dde24  lis 6, 8
  04dde28  subc 3, 3, 4
  04dde2c  ori 6, 6, 436
  04dde30  stw 3, 4(7)
  04dde34  lwz 3, 8(5)
  04dde38  addic 7, 3, 8
  04dde3c  stw 7, 8(5)
  04dde40  stw 6, 8(3)
  04dde44  lis 7, 24
  04dde48  lbz 3, 7146(31)
  04dde4c  lis 6, 4
  04dde50  lwz 8, 8(5)
  04dde54  subc 3, 3, 4
  04dde58  ori 6, 6, 408
  04dde5c  stw 3, 4(8)
  04dde60  lbz 3, 7147(31)
  04dde64  lwz 8, 8(5)
  04dde68  subc 3, 3, 4
  04dde6c  stw 3, 8(8)
  04dde70  lwz 3, 8(5)
  04dde74  addic 8, 3, 12
  04dde78  stw 8, 8(5)
  04dde7c  stw 6, 12(3)
  04dde80  lbz 3, 7181(31)
  04dde84  li 6, 31
  04dde88  subc 3, 3, 4
  04dde8c  ori 4, 7, 520
  04dde90  lwz 7, 8(5)
  04dde94  stw 3, 4(7)
  04dde98  lwz 3, 8(5)
  04dde9c  addic 7, 3, 8
  04ddea0  stw 7, 8(5)
  04ddea4  lhz 7, 7192(31)
  04ddea8  lhz 8, 7194(31)
  04ddeac  stw 4, 8(3)
  04ddeb0  cntlzw 8, 8
  04ddeb4  lbz 4, 7180(31)
  04ddeb8  cntlzw 3, 7
  04ddebc  subc 7, 6, 8
  04ddec0  lbz 8, 7142(31)
  04ddec4  subc 3, 6, 3
  04ddec8  lbz 6, 7140(31)
  04ddecc  slwi 4, 4, 5
  04dded0  lbz 9, 7141(31)
  04dded4  slwi 3, 3, 16
  04dded8  or 4, 8, 4
  04ddedc  slwi 6, 6, 8
  04ddee0  slwi 8, 9, 12
  04ddee4  slwi 7, 7, 24
  04ddee8  or 6, 6, 8
  04ddeec  or 4, 4, 6
  04ddef0  or 3, 4, 3
  04ddef4  lwz 4, 8(5)
  04ddef8  or 3, 3, 7
  04ddefc  lis 6, 4
  04ddf00  stw 3, 4(4)
  04ddf04  lwz 3, 8(5)
  04ddf08  lwz 4, 7164(31)
  04ddf0c  stw 4, 8(3)
  04ddf10  lwz 3, 8(5)
  04ddf14  lwz 4, 7148(31)
  04ddf18  stw 4, 12(3)
  04ddf1c  lwz 3, 8(5)
  04ddf20  lwz 4, 7184(31)
  04ddf24  stw 4, 16(3)
  04ddf28  lwz 3, 8(5)
  04ddf2c  lwz 4, 7152(31)
  04ddf30  stw 4, 20(3)
  04ddf34  lwz 3, 8(5)
  04ddf38  lwz 4, 7168(31)
  04ddf3c  stw 4, 24(3)
  04ddf40  lwz 3, 8(5)
  04ddf44  addic 4, 3, 28
  04ddf48  stw 4, 8(5)
  04ddf4c  ori 4, 6, 556
  04ddf50  stw 4, 28(3)
  04ddf54  lwz 3, 7188(31)
  04ddf58  lwz 6, 8(5)
  04ddf5c  lis 4, 16
  04ddf60  ori 4, 4, 640
  04ddf64  stw 3, 4(6)
  04ddf68  lwz 3, 8(5)
  04ddf6c  addic 6, 3, 8
  04ddf70  stw 6, 8(5)
  04ddf74  stw 4, 8(3)
  04ddf78  lwz 3, 7172(31)
  04ddf7c  lis 4, 4
  04ddf80  lwz 7, 8(5)
  04ddf84  lis 6, 4
  04ddf88  ori 4, 4, 544
  04ddf8c  stw 3, 4(7)
  04ddf90  lwz 3, 8(5)
  04ddf94  lwz 7, 7176(31)
  04ddf98  stw 7, 8(3)
  04ddf9c  lwz 3, 8(5)
  04ddfa0  lwz 7, 7156(31)
  04ddfa4  stw 7, 12(3)
  04ddfa8  lwz 3, 8(5)
  04ddfac  lwz 7, 7160(31)
  04ddfb0  stw 7, 16(3)
  04ddfb4  lwz 3, 8(5)
  04ddfb8  addic 7, 3, 20
  04ddfbc  stw 7, 8(5)
  04ddfc0  stw 4, 20(3)
  04ddfc4  lbz 3, 7143(31)
  04ddfc8  lwz 7, 8(5)
  04ddfcc  ori 4, 6, 696
  04ddfd0  lis 6, 8
  04ddfd4  ori 6, 6, 512
  04ddfd8  stw 3, 4(7)
  04ddfdc  lwz 3, 8(5)
  04ddfe0  addic 7, 3, 8
  04ddfe4  stw 7, 8(5)
  04ddfe8  stw 4, 8(3)
  04ddfec  lhz 3, 7196(31)
  04ddff0  lhz 4, 7198(31)
  04ddff4  lwz 7, 8(5)
  04ddff8  rlwimi 3, 4, 16, 0, 15
  04ddffc  lis 4, 4
  04de000  ori 4, 4, 7560
  04de004  stw 3, 4(7)
  04de008  lwz 3, 8(5)
  04de00c  addic 7, 3, 8
  04de010  stw 7, 8(5)
  04de014  stw 6, 8(3)
  04de018  lhz 3, 7196(31)
  04de01c  lhz 6, 7192(31)
  04de020  rlwimi 3, 6, 16, 0, 15
  04de024  lwz 6, 8(5)
  04de028  stw 3, 4(6)
  04de02c  lhz 3, 7198(31)
  04de030  lhz 6, 7194(31)
  04de034  lwz 7, 8(5)
  04de038  rlwimi 3, 6, 16, 0, 15
  04de03c  stw 3, 8(7)
  04de040  lwz 3, 8(5)
  04de044  addic 6, 3, 12
  04de048  stw 6, 8(5)
  04de04c  stw 4, 12(3)
  04de050  lhz 3, 7194(31)
  04de054  rlwinm 4, 3, 20, 31, 31
  04de058  subc 3, 3, 4
  04de05c  lwz 4, 8(5)
  04de060  ori 3, 3, 4096
  04de064  stw 3, 4(4)
  04de068  lwz 3, 8(5)
  04de06c  addic 3, 3, 8
  04de070  stw 3, 8(5)
  04de074  lwz 3, -23532(30)
  04de078  bl 0x50ec5c
  04de07c  nop
  04de080  lwz 3, 4(23)
  04de084  bl 0x50ec5c
  04de088  nop
  04de08c  lwz 3, 8(23)
  04de090  bl 0x50ec5c
  04de094  nop
  04de098  lwz 3, 12(23)
  04de09c  bl 0x50ec5c
  04de0a0  nop
  04de0a4  lwz 3, 16(23)
  04de0a8  bl 0x50ec5c
  04de0ac  nop
  04de0b0  lwz 3, 20(23)
  04de0b4  bl 0x50ec5c
  04de0b8  nop
  04de0bc  lwz 3, 24(23)
  04de0c0  bl 0x50ec5c
  04de0c4  nop
  04de0c8  lwz 3, 28(23)
  04de0cc  bl 0x50ec5c
  04de0d0  nop
  04de0d4  lwz 3, 32(23)
  04de0d8  bl 0x50ec5c
  04de0dc  nop
  04de0e0  lwz 3, 36(23)
  04de0e4  bl 0x50ec5c
  04de0e8  nop
  04de0ec  lwz 3, 40(23)
  04de0f0  bl 0x50ec5c
  04de0f4  nop
  04de0f8  lwz 3, -23532(30)
  04de0fc  bl 0x50ec5c
  04de100  nop
  04de104  ori 3, 31, 0
  04de108  bl 0x4dcdd0
  04de10c  li 30, 0
  04de110  li 5, 10
  04de114  ori 3, 30, 0
  04de118  ori 4, 23, 0
  04de11c  mtctr 5
  04de120  addic 3, 3, 4
  04de124  lwz 6, 0(4)
  04de128  clrldi 5, 3, 32
  04de12c  lwz 7, 1192(31)
  04de130  addic 4, 4, 4
  04de134  lwzx 5, 23, 5
  04de138  lwz 8, 8(6)
  04de13c  lwz 5, 0(5)
  04de140  subc 5, 5, 7
  04de144  oris 5, 5, 8192
  04de148  stw 5, 0(8)
  04de14c  lwz 5, 8(6)
  04de150  addic 5, 5, 4
  04de154  stw 5, 8(6)
  04de158  bdnz 0x4de120
  04de15c  lwz 4, 6764(31)
  04de160  li 3, 11
  04de164  lwz 26, 40(23)
  04de168  xori 4, 4, 1
  04de16c  mulli 24, 4, 2728
  04de170  mtctr 3
  04de174  addc 24, 31, 24
  04de178  addic 29, 24, 1200
  04de17c  clrldi 29, 29, 32
  04de180  ori 3, 29, 0
  04de184  lwz 4, 0(3)
  04de188  lwz 5, 16(3)
  04de18c  stw 4, 8(3)
  04de190  addc 4, 4, 5
  04de194  stw 4, 4(3)
  04de198  addic 3, 3, 248
  04de19c  bdnz 0x4de184
  04de1a0  cmpwi 28, 0
  04de1a4  bt 2, 0x4de248
  04de1a8  lwz 3, 6796(31)
  04de1ac  cmpwi 3, 0
  04de1b0  bf 1, 0x4de1c0
  04de1b4  addic 3, 3, -1
  04de1b8  stw 3, 6796(31)
  04de1bc  b 0x4de25c
  04de1c0  sldi 3, 27, 6
  04de1c4  sldi 4, 27, 2
  04de1c8  addc 3, 3, 4
  04de1cc  sldi 4, 3, 2
  04de1d0  addc 3, 3, 4
  04de1d4  addc 3, 31, 3
  04de1d8  clrldi 4, 3, 32
  04de1dc  ori 3, 26, 0
  04de1e0  lwz 4, 7760(4)
  04de1e4  clrlwi 4, 4, 24
  04de1e8  bl 0x50e8dc
  04de1ec  nop
  04de1f0  lis 3, 4
  04de1f4  lwz 4, 8(26)
  04de1f8  li 5, 16
  04de1fc  ori 3, 3, 100
  04de200  stw 3, 0(4)
  04de204  lwz 3, 8(26)
  04de208  lis 4, 4
  04de20c  ori 4, 4, 104
  04de210  stw 5, 4(3)
  04de214  lwz 3, 8(26)
  04de218  addic 5, 3, 8
  04de21c  stw 5, 8(26)
  04de220  stw 4, 8(3)
  04de224  lwz 5, 8(26)
  04de228  lis 3, 144
  04de22c  li 4, -1
  04de230  stw 30, 4(5)
  04de234  lwz 5, 8(26)
  04de238  addic 5, 5, 8
  04de23c  stw 5, 8(26)
  04de240  stw 4, -23212(3)
  04de244  b 0x4de25c
  04de248  lis 3, 273
  04de24c  ori 4, 26, 0
  04de250  addic 3, 3, 5888
  04de254  bl 0x4edc68
  04de258  nop
  04de25c  ori 3, 26, 0
  04de260  bl 0x50ec5c
  04de264  nop
  04de268  lis 25, 271
  04de26c  lwz 28, 6772(31)
  04de270  lis 27, 0
  04de274  ori 27, 27, 40000
  04de278  lwz 3, -2784(25)
  04de27c  lwz 3, 8(3)
  04de280  cmpw 3, 28
  04de284  bt 2, 0x4de2c4
  04de288  lis 22, 102
  04de28c  addic 22, 22, -28864
  04de290  li 11, 141
  04de294  li 3, 50
  04de298  sc
  04de29c  addic 27, 27, -1
  04de2a0  cmpwi 27, 0
  04de2a4  bf 2, 0x4de2b4
  04de2a8  ori 3, 22, 0
  04de2ac  bl 0x5cd098
  04de2b0  nop
  04de2b4  lwz 3, -2784(25)
  04de2b8  lwz 3, 8(3)
  04de2bc  cmpw 3, 28
  04de2c0  bf 2, 0x4de290
  04de2c4  bl 0x650684
  04de2c8  ld 2, 40(1)
  04de2cc  lis 4, 144
  04de2d0  lis 5, 271
  04de2d4  li 6, 50
  04de2d8  li 7, 22000
  04de2dc  li 8, 18000
  04de2e0  lwz 4, -23196(4)
  04de2e4  ld 5, -2816(5)
  04de2e8  subc 5, 3, 5
  04de2ec  lwz 4, 24(4)
  04de2f0  subc 4, 6, 4
  04de2f4  subc 6, 7, 8
  04de2f8  cntlzw 4, 4
  04de2fc  sldi 4, 4, 58
  04de300  sradi 4, 4, 63
  04de304  and 4, 4, 6
  04de308  addc 4, 8, 4
  04de30c  cmpd 5, 4
  04de310  bf 1, 0x4de344
  04de314  lis 4, 271
  04de318  li 5, 20
  04de31c  li 6, 20
  04de320  lwz 4, -2820(4)
  04de324  addic 4, 4, 5
  04de328  extsw 7, 4
  04de32c  subc 6, 6, 4
  04de330  subc 5, 5, 7
  04de334  sradi 5, 5, 63
  04de338  and 5, 5, 6
  04de33c  addc 4, 4, 5
  04de340  b 0x4de370
  04de344  lis 4, 271
  04de348  li 5, 0
  04de34c  li 6, 0
  04de350  lwz 4, -2820(4)
  04de354  addic 4, 4, -1
  04de358  extsw 7, 4
  04de35c  subc 6, 6, 4
  04de360  subc 5, 7, 5
  04de364  sradi 5, 5, 63
  04de368  and 5, 5, 6
  04de36c  addc 4, 4, 5
  04de370  lis 5, 271
  04de374  cntlzw 6, 4
  04de378  lis 7, 144
  04de37c  rlwinm 6, 6, 27, 31, 31
  04de380  lis 8, 271
  04de384  stw 4, -2820(5)
  04de388  lwz 4, 1188(31)
  04de38c  lwz 5, 1184(31)
  04de390  stb 6, -23220(7)
  04de394  cmpw 4, 5
  04de398  std 3, -2816(8)
  04de39c  cmpwi 1, 4, 1
  04de3a0  bt 2, 0x4de3f0
  04de3a4  lwz 3, 6764(31)
  04de3a8  clrlwi 3, 3, 31
  04de3ac  cmpwi 3, 0
  04de3b0  bf 2, 0x4de3f0
  04de3b4  bf 6, 0x4de3e0
  04de3b8  lis 3, 1
  04de3bc  ori 3, 3, 34212
  04de3c0  lbzx 3, 31, 3
  04de3c4  cmpwi 3, 0
  04de3c8  bt 2, 0x4de3d8
  04de3cc  ori 3, 31, 0
  04de3d0  bl 0x4dcb80
  04de3d4  b 0x4de3e8
  04de3d8  stw 30, 1188(31)
  04de3dc  b 0x4de3e8
  04de3e0  ori 3, 31, 0
  04de3e4  bl 0x4dc99c
  04de3e8  lwz 3, 1188(31)
  04de3ec  stw 3, 1184(31)
  04de3f0  lis 3, 273
  04de3f4  addic 3, 3, 5888
  04de3f8  bl 0x4edcfc
  04de3fc  nop
  04de400  clrldi 24, 24, 32
  04de404  lis 3, 4
  04de408  lwz 4, 6768(31)
  04de40c  ori 3, 3, 80
  04de410  lwz 5, 1208(24)
  04de414  stw 3, 0(5)
  04de418  lwz 3, 1208(24)
  04de41c  stw 4, 4(3)
  04de420  lwz 3, 1208(24)
  04de424  addic 3, 3, 8
  04de428  stw 3, 1208(24)
  04de42c  lwz 3, 6764(31)
  04de430  lwz 4, 20(31)
  04de434  xori 3, 3, 1
  04de438  lwz 5, 1184(31)
  04de43c  addic 4, 4, 1
  04de440  stw 30, 112(1)
  04de444  cmpwi 5, 0
  04de448  stw 3, 6764(31)
  04de44c  stw 4, 20(31)
  04de450  stw 30, 116(1)
  04de454  stw 30, 120(1)
  04de458  stw 30, 124(1)
  04de45c  bf 2, 0x4de4d4
  04de460  li 4, 2
  04de464  ori 3, 30, 0
  04de468  mtctr 4
  04de46c  lwz 4, 1208(24)
  04de470  stwx 30, 4, 3
  04de474  lwz 4, 1208(24)
  04de478  addc 4, 4, 3
  04de47c  addic 3, 3, 8
  04de480  stw 30, 4(4)
  04de484  bdnz 0x4de46c
  04de488  lwz 29, 1208(24)
  04de48c  addic 29, 29, 16
  04de490  stw 29, 1208(24)
  04de494  lwz 3, 6792(31)
  04de498  cmpwi 3, 1
  04de49c  cmpwi 1, 3, 2
  04de4a0  bf 2, 0x4de4b8
  04de4a4  lfs 1, 6776(31)
  04de4a8  lfs 2, 6780(31)
  04de4ac  stfs 1, 112(1)
  04de4b0  stfs 2, 116(1)
  04de4b4  b 0x4de518
  04de4b8  bf 6, 0x4de518
  04de4bc  lfs 1, 6776(31)
  04de4c0  lfs 2, 6780(31)
  04de4c4  fneg 1, 1
  04de4c8  stfs 2, 116(1)
  04de4cc  stfs 1, 112(1)
  04de4d0  b 0x4de518
  04de4d4  ori 3, 29, 0
  04de4d8  li 4, 68
  04de4dc  li 5, 1
  04de4e0  bl 0x50f074
  04de4e4  nop
  04de4e8  lwz 3, 6764(31)
  04de4ec  lfs 2, 6780(31)
  04de4f0  clrlwi 3, 3, 31
  04de4f4  lwz 29, 1208(24)
  04de4f8  cmpwi 3, 0
  04de4fc  bt 2, 0x4de508
  04de500  lfs 1, 6776(31)
  04de504  b 0x4de510
  04de508  lfs 1, 6776(31)
  04de50c  fneg 1, 1
  04de510  stfs 1, 112(1)
  04de514  stfs 2, 116(1)
  04de518  lis 3, 20
  04de51c  li 4, 17
  04de520  ori 3, 3, 7932
  04de524  li 6, 2
  04de528  mtctr 6
  04de52c  stw 3, 0(29)
  04de530  lwz 5, 1208(24)
  04de534  addic 3, 1, 112
  04de538  stw 4, 4(5)
  04de53c  lwz 29, 1208(24)
  04de540  addic 29, 29, 8
  04de544  stw 29, 1208(24)
  04de548  lwz 4, 0(3)
  04de54c  stw 4, 0(29)
  04de550  lwz 4, 1208(24)
  04de554  addic 5, 4, 4
  04de558  stw 5, 1208(24)
  04de55c  lwz 5, 4(3)
  04de560  addic 3, 3, 8
  04de564  stw 5, 4(4)
  04de568  lwz 29, 1208(24)
  04de56c  addic 29, 29, 4
  04de570  stw 29, 1208(24)
  04de574  bdnz 0x4de548
  04de578  lwz 3, 1200(24)
  04de57c  lwz 4, 1192(31)
  04de580  lwz 5, 8(26)
  04de584  subc 3, 3, 4
  04de588  oris 3, 3, 8192
  04de58c  stw 3, 0(5)
  04de590  lwz 3, 8(26)
  04de594  addic 3, 3, 4
  04de598  stw 3, 8(26)
  04de59c  sync
  04de5a0  lwz 3, 1208(24)
  04de5a4  lis 11, 144
  04de5a8  lwz 4, 1192(31)
  04de5ac  lwz 5, -2784(25)
  04de5b0  subc 3, 3, 4
  04de5b4  stw 3, 0(5)
  04de5b8  lwz 3, 6764(31)
  04de5bc  mulli 4, 3, 2728
  04de5c0  mulli 5, 3, 2728
  04de5c4  lwz 6, 6768(31)
  04de5c8  mulli 8, 3, 2728
  04de5cc  addic 9, 6, 1
  04de5d0  mulli 7, 3, 2728
  04de5d4  lwz 10, 20(31)
  04de5d8  addc 29, 31, 4
  04de5dc  stw 6, 6772(31)
  04de5e0  stw 9, 6768(31)
  04de5e4  addc 5, 31, 5
  04de5e8  addic 9, 29, 1200
  04de5ec  addic 5, 5, 1448
  04de5f0  mulli 6, 3, 2728
  04de5f4  mulli 28, 3, 2728
  04de5f8  stw 9, -23532(11)
  04de5fc  lis 4, -21846
  04de600  addc 8, 31, 8
  04de604  stw 5, 4(23)
  04de608  addc 5, 31, 7
  04de60c  ori 4, 4, 43691
  04de610  addic 8, 8, 1696
  04de614  mulhwu 4, 4, 10
  04de618  mulli 11, 3, 2728
  04de61c  addic 5, 5, 1944
  04de620  mulli 12, 3, 2728
  04de624  stw 8, 8(23)
  04de628  addc 6, 31, 6
  04de62c  stw 5, 12(23)
  04de630  addc 5, 31, 28
  04de634  addic 6, 6, 2192
  04de638  mulli 8, 3, 2728
  04de63c  addic 5, 5, 2440
  04de640  mulli 7, 3, 2728
  04de644  addc 11, 31, 11
  04de648  mulli 3, 3, 2728
  04de64c  stw 6, 16(23)
  04de650  addic 6, 11, 2688
  04de654  stw 5, 20(23)
  04de658  addc 5, 31, 12
  04de65c  srwi 4, 4, 1
  04de660  addic 5, 5, 2936
  04de664  stw 6, 24(23)
  04de668  addc 8, 31, 8
  04de66c  addc 6, 4, 4
  04de670  addc 7, 31, 7
  04de674  stw 5, 28(23)
  04de678  addc 3, 31, 3
  04de67c  addic 8, 8, 3184
  04de680  addc 4, 4, 6
  04de684  addic 5, 7, 3432
  04de688  addic 3, 3, 3680
  04de68c  subc 4, 10, 4
  04de690  stw 8, 32(23)
  04de694  lis 28, 144
  04de698  sldi 6, 4, 5
  04de69c  stw 5, 36(23)
  04de6a0  sldi 4, 4, 2
  04de6a4  stw 3, 40(23)
  04de6a8  li 5, 144
  04de6ac  addc 3, 6, 4
  04de6b0  li 4, 0
  04de6b4  addc 3, 31, 3
  04de6b8  clrldi 31, 9, 32
  04de6bc  addic 6, 3, 6656
  04de6c0  addic 3, 31, 20
  04de6c4  stw 6, -23488(28)
  04de6c8  bl 0x5d0140
  04de6cc  nop
  04de6d0  addic 3, 31, 168
  04de6d4  li 4, 255
  04de6d8  li 5, 72
  04de6dc  bl 0x5d0140
  04de6e0  nop
  04de6e4  clrldi 3, 29, 32
  04de6e8  li 4, 0
  04de6ec  li 5, 144
  04de6f0  stw 30, 1396(3)
  04de6f4  stw 30, 1392(3)
  04de6f8  lwz 31, 4(23)
  04de6fc  addic 3, 31, 20
  04de700  bl 0x5d0140
  04de704  nop
  04de708  addic 3, 31, 168
  04de70c  li 4, 255
  04de710  li 5, 72
  04de714  bl 0x5d0140
  04de718  nop
  04de71c  stw 30, 196(31)
  04de720  stw 30, 192(31)
  04de724  li 4, 0
  04de728  lwz 31, 8(23)
  04de72c  li 5, 144
  04de730  addic 3, 31, 20
  04de734  bl 0x5d0140
  04de738  nop
  04de73c  addic 3, 31, 168
  04de740  li 4, 255
  04de744  li 5, 72
  04de748  bl 0x5d0140
  04de74c  nop
  04de750  stw 30, 196(31)
  04de754  li 4, 0
  04de758  stw 30, 192(31)
  04de75c  li 5, 144
  04de760  lwz 31, 12(23)
  04de764  addic 3, 31, 20
  04de768  bl 0x5d0140
  04de76c  nop
  04de770  addic 3, 31, 168
  04de774  li 4, 255
  04de778  li 5, 72
  04de77c  bl 0x5d0140
  04de780  nop
  04de784  stw 30, 196(31)
  04de788  stw 30, 192(31)
  04de78c  li 4, 0
  04de790  lwz 31, 16(23)
  04de794  li 5, 144
  04de798  addic 3, 31, 20
  04de79c  bl 0x5d0140
  04de7a0  nop
  04de7a4  addic 3, 31, 168
  04de7a8  li 4, 255
  04de7ac  li 5, 72
  04de7b0  bl 0x5d0140
  04de7b4  nop
  04de7b8  stw 30, 196(31)
  04de7bc  li 4, 0
  04de7c0  stw 30, 192(31)
  04de7c4  li 5, 144
  04de7c8  lwz 31, 20(23)
  04de7cc  addic 3, 31, 20
  04de7d0  bl 0x5d0140
  04de7d4  nop
  04de7d8  addic 3, 31, 168
  04de7dc  li 4, 255
  04de7e0  li 5, 72
  04de7e4  bl 0x5d0140
  04de7e8  nop
  04de7ec  stw 30, 196(31)
  04de7f0  stw 30, 192(31)
  04de7f4  li 4, 0
  04de7f8  lwz 31, 24(23)
  04de7fc  li 5, 144
  04de800  addic 3, 31, 20
  04de804  bl 0x5d0140
  04de808  nop
  04de80c  addic 3, 31, 168
  04de810  li 4, 255
  04de814  li 5, 72
  04de818  bl 0x5d0140
  04de81c  nop
  04de820  stw 30, 196(31)
  04de824  li 4, 0
  04de828  stw 30, 192(31)
  04de82c  li 5, 144
  04de830  lwz 31, 28(23)
  04de834  addic 3, 31, 20
  04de838  bl 0x5d0140
  04de83c  nop
  04de840  addic 3, 31, 168
  04de844  li 4, 255
  04de848  li 5, 72
  04de84c  bl 0x5d0140
  04de850  nop
  04de854  stw 30, 196(31)
  04de858  stw 30, 192(31)
  04de85c  li 4, 0
  04de860  lwz 31, 32(23)
  04de864  li 5, 144
  04de868  addic 3, 31, 20
  04de86c  bl 0x5d0140
  04de870  nop
  04de874  addic 3, 31, 168
  04de878  li 4, 255
  04de87c  li 5, 72
  04de880  bl 0x5d0140
  04de884  nop
  04de888  stw 30, 196(31)
  04de88c  li 4, 0
  04de890  stw 30, 192(31)
  04de894  li 5, 144
  04de898  lwz 31, 36(23)
  04de89c  addic 3, 31, 20
  04de8a0  bl 0x5d0140
  04de8a4  nop
  04de8a8  addic 3, 31, 168
  04de8ac  li 4, 255
  04de8b0  li 5, 72
  04de8b4  bl 0x5d0140
  04de8b8  nop
  04de8bc  stw 30, 196(31)
  04de8c0  stw 30, 192(31)
  04de8c4  li 4, 0
  04de8c8  lwz 31, 40(23)
  04de8cc  li 5, 144
  04de8d0  addic 3, 31, 20
  04de8d4  bl 0x5d0140
  04de8d8  nop
  04de8dc  addic 3, 31, 168
  04de8e0  li 4, 255
  04de8e4  li 5, 72
  04de8e8  bl 0x5d0140
  04de8ec  nop
  04de8f0  stw 30, 196(31)
  04de8f4  stw 30, 192(31)
  04de8f8  lwz 3, -23488(28)
  04de8fc  lwz 4, 0(3)
  04de900  bl 0x4fe61c
  04de904  nop
  04de908  ld 0, 224(1)
  04de90c  mtlr 0
  04de910  ld 22, 128(1)
  04de914  ld 23, 136(1)
  04de918  ld 24, 144(1)
  04de91c  ld 25, 152(1)
  04de920  ld 26, 160(1)
  04de924  ld 27, 168(1)
  04de928  ld 28, 176(1)
  04de92c  ld 29, 184(1)
  04de930  ld 30, 192(1)
  04de934  ld 31, 200(1)
  04de938  addi 1, 1, 208
  04de93c  blr

FUN_004de940:   # 0x4de940, 0x84 bytes
  04de940  stdu 1, -112(1)
  04de944  mflr 0
  04de948  std 0, 128(1)
  04de94c  lis 3, 102
  04de950  addic 3, 3, -27992
  04de954  bl 0x4ffc9c
  04de958  nop
  04de95c  lis 3, 273
  04de960  addic 3, 3, 5504
  04de964  bl 0x64fa64
  04de968  ld 2, 40(1)
  04de96c  cmpwi 3, 0
  04de970  bt 2, 0x4de988
  04de974  lis 5, 102
  04de978  ori 4, 3, 0
  04de97c  addic 3, 5, -27952
  04de980  bl 0x4ffc9c
  04de984  nop
  04de988  lis 3, 144
  04de98c  lwz 3, -23004(3)
  04de990  bl 0x64fca4
  04de994  ld 2, 40(1)
  04de998  cmpwi 3, 0
  04de99c  bt 2, 0x4de9b4
  04de9a0  lis 5, 102
  04de9a4  ori 4, 3, 0
  04de9a8  addic 3, 5, -27888
  04de9ac  bl 0x4ffc9c
  04de9b0  nop
  04de9b4  ld 0, 128(1)
  04de9b8  mtlr 0
  04de9bc  addi 1, 1, 112
  04de9c0  blr

FUN_004de9c4:   # 0x4de9c4, 0xec bytes
  04de9c4  stdu 1, -304(1)
  04de9c8  mflr 0
  04de9cc  std 0, 320(1)
  04de9d0  sldi 3, 4, 4
  04de9d4  lis 4, 271
  04de9d8  addc 6, 3, 3
  04de9dc  addic 4, 4, -5368
  04de9e0  std 31, 296(1)
  04de9e4  addc 3, 3, 6
  04de9e8  std 27, 264(1)
  04de9ec  ori 31, 5, 0
  04de9f0  addc 27, 4, 3
  04de9f4  clrldi 27, 27, 32
  04de9f8  std 30, 288(1)
  04de9fc  std 29, 280(1)
  04dea00  std 28, 272(1)
  04dea04  std 26, 256(1)
  04dea08  ori 3, 27, 0
  04dea0c  bl 0x50f434
  04dea10  nop
  04dea14  lis 4, -1
  04dea18  ori 28, 3, 0
  04dea1c  ori 4, 4, 65535
  04dea20  cmpwi 28, 0
  04dea24  li 30, 0
  04dea28  clrldi 29, 4, 32
  04dea2c  bt 2, 0x4dea84
  04dea30  li 5, 127
  04dea34  addic 26, 1, 120
  04dea38  ori 3, 27, 0
  04dea3c  addic 6, 1, 112
  04dea40  stw 5, 112(1)
  04dea44  ori 4, 30, 0
  04dea48  ori 5, 26, 0
  04dea4c  bl 0x50f6e4
  04dea50  nop
  04dea54  ori 3, 31, 0
  04dea58  ori 4, 26, 0
  04dea5c  bl 0x5cc784
  04dea60  nop
  04dea64  cmpwi 3, 0
  04dea68  bf 2, 0x4dea74
  04dea6c  ori 29, 30, 0
  04dea70  b 0x4dea84
  04dea74  addic 30, 30, 1
  04dea78  extsw 30, 30
  04dea7c  cmplw 30, 28
  04dea80  bt 0, 0x4dea30
  04dea84  ori 3, 29, 0
  04dea88  ld 0, 320(1)
  04dea8c  mtlr 0
  04dea90  ld 26, 256(1)
  04dea94  ld 27, 264(1)
  04dea98  ld 28, 272(1)
  04dea9c  ld 29, 280(1)
  04deaa0  ld 30, 288(1)
  04deaa4  ld 31, 296(1)
  04deaa8  addi 1, 1, 304
  04deaac  blr

FUN_004deab8:   # 0x4deab8, 0x124 bytes
  04deab8  stdu 1, -160(1)
  04deabc  lis 3, 78
  04deac0  stw 5, 128(1)
  04deac4  li 6, 112
  04deac8  stw 5, 132(1)
  04deacc  li 7, 116
  04dead0  stw 5, 136(1)
  04dead4  li 0, 128
  04dead8  stw 5, 140(1)
  04deadc  addi 3, 3, -5456
  04deae0  vspltisw 2, -1
  04deae4  li 8, 120
  04deae8  vspltisw 3, -1
  04deaec  li 9, 4
  04deaf0  lis 5, 20
  04deaf4  lvx 4, 1, 0
  04deaf8  stw 4, 128(1)
  04deafc  stw 4, 132(1)
  04deb00  vcfux 4, 4, 0
  04deb04  stw 4, 136(1)
  04deb08  ori 11, 5, 7932
  04deb0c  stw 4, 140(1)
  04deb10  lvlx 5, 0, 3
  04deb14  lis 4, 144
  04deb18  vslw 2, 2, 2
  04deb1c  li 0, 128
  04deb20  vspltw 5, 5, 0
  04deb24  vslw 3, 3, 3
  04deb28  addic 4, 4, -23532
  04deb2c  vspltisw 6, -1
  04deb30  std 31, 152(1)
  04deb34  li 10, 124
  04deb38  li 31, 18
  04deb3c  lvx 7, 1, 0
  04deb40  lwz 5, 40(4)
  04deb44  vcfux 7, 7, 0
  04deb48  vmaddfp 3, 4, 5, 3
  04deb4c  std 30, 144(1)
  04deb50  vslw 6, 6, 6
  04deb54  li 30, 2
  04deb58  lwz 12, 8(5)
  04deb5c  addic 4, 1, 112
  04deb60  mtctr 30
  04deb64  vmaddfp 2, 7, 5, 2
  04deb68  stvewx 2, 6, 1
  04deb6c  stvewx 3, 7, 1
  04deb70  stvewx 2, 8, 1
  04deb74  lvlx 2, 9, 3
  04deb78  vspltw 2, 2, 0
  04deb7c  vmaddfp 2, 4, 2, 6
  04deb80  stvewx 2, 10, 1
  04deb84  stw 11, 0(12)
  04deb88  lwz 3, 8(5)
  04deb8c  stw 31, 4(3)
  04deb90  lwz 3, 8(5)
  04deb94  addic 3, 3, 8
  04deb98  stw 3, 8(5)
  04deb9c  lwz 6, 0(4)
  04deba0  stw 6, 0(3)
  04deba4  lwz 3, 8(5)
  04deba8  addic 6, 3, 4
  04debac  stw 6, 8(5)
  04debb0  lwz 6, 4(4)
  04debb4  addic 4, 4, 8
  04debb8  stw 6, 4(3)
  04debbc  lwz 3, 8(5)
  04debc0  addic 3, 3, 4
  04debc4  stw 3, 8(5)
  04debc8  bdnz 0x4deb9c
  04debcc  ld 30, 144(1)
  04debd0  ld 31, 152(1)
  04debd4  addi 1, 1, 160
  04debd8  blr

FUN_004debdc:   # 0x4debdc, 0x14c bytes
  04debdc  stdu 1, -128(1)
  04debe0  std 31, 120(1)
  04debe4  ori 31, 4, 0
  04debe8  ori 3, 6, 0
  04debec  ori 6, 5, 0
  04debf0  ori 4, 7, 0
  04debf4  ori 5, 3, 0
  04debf8  cmplwi 4, 1
  04debfc  std 30, 112(1)
  04dec00  std 29, 104(1)
  04dec04  std 28, 96(1)
  04dec08  std 27, 88(1)
  04dec0c  std 26, 80(1)
  04dec10  std 25, 72(1)
  04dec14  std 24, 64(1)
  04dec18  std 23, 56(1)
  04dec1c  std 22, 48(1)
  04dec20  slwi 3, 5, 2
  04dec24  bf 1, 0x4decf8
  04dec28  mullw 7, 4, 5
  04dec2c  addc 11, 31, 3
  04dec30  srwi 7, 7, 1
  04dec34  addic 12, 31, 4
  04dec38  addic 10, 11, 4
  04dec3c  cmpwi 7, 0
  04dec40  ori 9, 6, 0
  04dec44  clrldi 12, 12, 32
  04dec48  li 8, 0
  04dec4c  clrldi 11, 11, 32
  04dec50  clrldi 10, 10, 32
  04dec54  bt 2, 0x4dece4
  04dec58  clrldi 30, 31, 32
  04dec5c  ori 24, 30, 0
  04dec60  li 23, 4
  04dec64  ori 28, 10, 0
  04dec68  ori 27, 11, 0
  04dec6c  ori 26, 12, 0
  04dec70  ori 29, 24, 0
  04dec74  clrldi 25, 9, 32
  04dec78  mtctr 23
  04dec7c  lbz 31, 0(31)
  04dec80  lbz 23, 0(12)
  04dec84  addic 25, 25, 1
  04dec88  lbz 22, 0(11)
  04dec8c  addic 24, 24, 1
  04dec90  addc 31, 31, 23
  04dec94  lbz 23, 0(10)
  04dec98  addc 31, 31, 22
  04dec9c  addic 12, 12, 1
  04deca0  addc 31, 31, 23
  04deca4  addic 11, 11, 1
  04deca8  srawi 31, 31, 2
  04decac  addze 23, 31
  04decb0  ori 31, 24, 0
  04decb4  addic 10, 10, 1
  04decb8  stb 23, 0(9)
  04decbc  ori 9, 25, 0
  04decc0  bdnz 0x4dec7c
  04decc4  addic 8, 8, 1
  04decc8  addic 30, 30, 8
  04deccc  cmplw 8, 7
  04decd0  addic 31, 29, 8
  04decd4  addic 12, 26, 8
  04decd8  addic 11, 27, 8
  04decdc  addic 10, 28, 8
  04dece0  bt 0, 0x4dec5c
  04dece4  srwi 4, 4, 1
  04dece8  ori 31, 6, 0
  04decec  cmplwi 4, 1
  04decf0  ori 6, 9, 0
  04decf4  bt 1, 0x4dec28
  04decf8  ld 22, 48(1)
  04decfc  ld 23, 56(1)
  04ded00  ld 24, 64(1)
  04ded04  ld 25, 72(1)
  04ded08  ld 26, 80(1)
  04ded0c  ld 27, 88(1)
  04ded10  ld 28, 96(1)
  04ded14  ld 29, 104(1)
  04ded18  ld 30, 112(1)
  04ded1c  ld 31, 120(1)
  04ded20  addi 1, 1, 128
  04ded24  blr

FUN_004ded28:   # 0x4ded28, 0x288 bytes
  04ded28  stdu 1, -240(1)
  04ded2c  mflr 0
  04ded30  std 0, 256(1)
  04ded34  std 29, 216(1)
  04ded38  std 26, 192(1)
  04ded3c  ori 29, 4, 0
  04ded40  ori 26, 5, 0
  04ded44  std 28, 208(1)
  04ded48  li 5, 0
  04ded4c  ori 28, 3, 0
  04ded50  lis 4, 102
  04ded54  ori 3, 26, 0
  04ded58  std 31, 232(1)
  04ded5c  addic 4, 4, -27848
  04ded60  ori 31, 7, 0
  04ded64  std 30, 224(1)
  04ded68  stw 5, 20(29)
  04ded6c  std 27, 200(1)
  04ded70  std 25, 184(1)
  04ded74  std 24, 176(1)
  04ded78  std 23, 168(1)
  04ded7c  std 22, 160(1)
  04ded80  std 21, 152(1)
  04ded84  std 20, 144(1)
  04ded88  ori 30, 6, 0
  04ded8c  bl 0x5c52f0
  04ded90  nop
  04ded94  ori 27, 3, 0
  04ded98  cmpwi 27, 0
  04ded9c  bf 2, 0x4dedb8
  04deda0  lis 3, 102
  04deda4  ori 4, 26, 0
  04deda8  addic 3, 3, -27840
  04dedac  bl 0x4ffc9c
  04dedb0  nop
  04dedb4  b 0x4def70
  04dedb8  ori 20, 27, 0
  04dedbc  li 4, 1
  04dedc0  addic 3, 1, 120
  04dedc4  li 5, 18
  04dedc8  ori 6, 20, 0
  04dedcc  bl 0x5c5364
  04dedd0  nop
  04dedd4  lbz 4, 133(1)
  04dedd8  ori 3, 30, 0
  04deddc  lbz 21, 132(1)
  04dede0  lbz 5, 135(1)
  04dede4  lbz 22, 134(1)
  04dede8  rlwimi 21, 4, 8, 16, 23
  04dedec  rlwimi 22, 5, 8, 16, 23
  04dedf0  bl 0x4fe5ec
  04dedf4  nop
  04dedf8  mullw 25, 22, 21
  04dedfc  ori 23, 3, 0
  04dee00  slwi 26, 25, 3
  04dee04  ori 3, 30, 0
  04dee08  extsw 27, 26
  04dee0c  li 5, 64
  04dee10  ori 4, 27, 0
  04dee14  bl 0x4fe098
  04dee18  nop
  04dee1c  slwi 25, 25, 2
  04dee20  ori 24, 3, 0
  04dee24  li 4, 1
  04dee28  ori 5, 25, 0
  04dee2c  ori 6, 20, 0
  04dee30  bl 0x5c5364
  04dee34  nop
  04dee38  ori 3, 20, 0
  04dee3c  bl 0x5c4f10
  04dee40  nop
  04dee44  cmpwi 22, 0
  04dee48  ori 3, 24, 0
  04dee4c  bt 2, 0x4dee94
  04dee50  li 6, 0
  04dee54  cmpwi 21, 0
  04dee58  bt 2, 0x4dee88
  04dee5c  clrldi 5, 3, 32
  04dee60  ori 4, 21, 0
  04dee64  lbz 7, 0(3)
  04dee68  addic 4, 4, -1
  04dee6c  lbz 8, 2(3)
  04dee70  addic 5, 5, 4
  04dee74  stb 7, 2(3)
  04dee78  cmpwi 4, 0
  04dee7c  stb 8, 0(3)
  04dee80  ori 3, 5, 0
  04dee84  bt 1, 0x4dee64
  04dee88  addic 6, 6, 1
  04dee8c  cmplw 6, 22
  04dee90  bt 0, 0x4dee54
  04dee94  addc 5, 24, 25
  04dee98  ori 3, 28, 0
  04dee9c  clrldi 5, 5, 32
  04deea0  ori 4, 24, 0
  04deea4  ori 6, 21, 0
  04deea8  ori 7, 22, 0
  04deeac  bl 0x4debdc
  04deeb0  cmpwi 31, 0
  04deeb4  bt 2, 0x4deef4
  04deeb8  ori 3, 31, 0
  04deebc  ori 4, 27, 0
  04deec0  li 5, 64
  04deec4  bl 0x4fe098
  04deec8  nop
  04deecc  ori 28, 3, 0
  04deed0  ori 4, 24, 0
  04deed4  ori 5, 26, 0
  04deed8  bl 0x5c5ad0
  04deedc  nop
  04deee0  ori 3, 30, 0
  04deee4  ori 4, 23, 0
  04deee8  bl 0x4fe61c
  04deeec  nop
  04deef0  ori 24, 28, 0
  04deef4  lis 3, 0
  04deef8  addic 4, 1, 112
  04deefc  ori 3, 3, 32856
  04def00  li 7, 1
  04def04  addic 5, 1, 116
  04def08  li 6, 0
  04def0c  bl 0x53a154
  04def10  nop
  04def14  li 3, 10
  04def18  lwz 4, 112(1)
  04def1c  li 5, 2
  04def20  li 6, 0
  04def24  stb 4, 0(29)
  04def28  stb 3, 1(29)
  04def2c  li 7, 1
  04def30  stb 5, 2(29)
  04def34  cntlzw 4, 31
  04def38  lwz 9, 116(1)
  04def3c  slwi 8, 21, 2
  04def40  stb 6, 3(29)
  04def44  rlwinm 5, 4, 27, 31, 31
  04def48  stw 9, 4(29)
  04def4c  addic 4, 29, 20
  04def50  sth 21, 8(29)
  04def54  ori 3, 24, 0
  04def58  sth 22, 10(29)
  04def5c  sth 7, 12(29)
  04def60  stw 8, 16(29)
  04def64  stb 5, 14(29)
  04def68  bl 0x64f2a4
  04def6c  ld 2, 40(1)
  04def70  ld 0, 256(1)
  04def74  mtlr 0
  04def78  ld 20, 144(1)
  04def7c  ld 21, 152(1)
  04def80  ld 22, 160(1)
  04def84  ld 23, 168(1)
  04def88  ld 24, 176(1)
  04def8c  ld 25, 184(1)
  04def90  ld 26, 192(1)
  04def94  ld 27, 200(1)
  04def98  ld 28, 208(1)
  04def9c  ld 29, 216(1)
  04defa0  ld 30, 224(1)
  04defa4  ld 31, 232(1)
  04defa8  addi 1, 1, 240
  04defac  blr

FUN_004defb0:   # 0x4defb0, 0x190 bytes
  04defb0  stdu 1, -192(1)
  04defb4  mflr 0
  04defb8  std 0, 208(1)
  04defbc  std 28, 160(1)
  04defc0  std 30, 176(1)
  04defc4  ori 28, 4, 0
  04defc8  ori 30, 6, 0
  04defcc  li 4, 0
  04defd0  std 31, 184(1)
  04defd4  ori 3, 30, 0
  04defd8  std 29, 168(1)
  04defdc  ori 31, 7, 0
  04defe0  ori 29, 5, 0
  04defe4  std 27, 152(1)
  04defe8  std 26, 144(1)
  04defec  std 25, 136(1)
  04deff0  std 24, 128(1)
  04deff4  std 23, 120(1)
  04deff8  stw 4, 20(28)
  04deffc  bl 0x4fe5ec
  04df000  nop
  04df004  ori 23, 3, 0
  04df008  ori 3, 30, 0
  04df00c  li 4, 64
  04df010  li 5, 64
  04df014  bl 0x4fe098
  04df018  nop
  04df01c  li 27, 2
  04df020  ori 24, 3, 0
  04df024  li 25, 16
  04df028  li 26, 4
  04df02c  mtctr 27
  04df030  stw 29, 0(3)
  04df034  stw 29, 4(3)
  04df038  stw 29, 8(3)
  04df03c  stw 29, 12(3)
  04df040  stw 29, 16(3)
  04df044  stw 29, 20(3)
  04df048  stw 29, 24(3)
  04df04c  stw 29, 28(3)
  04df050  addic 3, 3, 32
  04df054  bdnz 0x4df030
  04df058  cmpwi 31, 0
  04df05c  bt 2, 0x4df09c
  04df060  ori 3, 31, 0
  04df064  li 4, 64
  04df068  li 5, 64
  04df06c  bl 0x4fe098
  04df070  nop
  04df074  ori 29, 3, 0
  04df078  ori 4, 24, 0
  04df07c  li 5, 64
  04df080  bl 0x5c5ad0
  04df084  nop
  04df088  ori 3, 30, 0
  04df08c  ori 4, 23, 0
  04df090  bl 0x4fe61c
  04df094  nop
  04df098  ori 24, 29, 0
  04df09c  lis 3, 0
  04df0a0  addic 5, 1, 116
  04df0a4  ori 3, 3, 32856
  04df0a8  addic 4, 1, 112
  04df0ac  li 6, 0
  04df0b0  li 7, 1
  04df0b4  bl 0x53a154
  04df0b8  nop
  04df0bc  lwz 3, 112(1)
  04df0c0  li 5, 1
  04df0c4  stb 27, 2(28)
  04df0c8  li 6, 0
  04df0cc  stb 3, 0(28)
  04df0d0  addic 4, 28, 20
  04df0d4  lwz 7, 116(1)
  04df0d8  cntlzw 3, 31
  04df0dc  stb 5, 1(28)
  04df0e0  stb 6, 3(28)
  04df0e4  stw 7, 4(28)
  04df0e8  rlwinm 8, 3, 27, 31, 31
  04df0ec  sth 26, 8(28)
  04df0f0  ori 3, 24, 0
  04df0f4  sth 26, 10(28)
  04df0f8  sth 5, 12(28)
  04df0fc  stw 25, 16(28)
  04df100  stb 8, 14(28)
  04df104  bl 0x64f2a4
  04df108  ld 2, 40(1)
  04df10c  ld 0, 208(1)
  04df110  mtlr 0
  04df114  ld 23, 120(1)
  04df118  ld 24, 128(1)
  04df11c  ld 25, 136(1)
  04df120  ld 26, 144(1)
  04df124  ld 27, 152(1)
  04df128  ld 28, 160(1)
  04df12c  ld 29, 168(1)
  04df130  ld 30, 176(1)
  04df134  ld 31, 184(1)
  04df138  addi 1, 1, 192
  04df13c  blr

FUN_004df1c0:   # 0x4df1c0, 0x2d0 bytes
  04df1c0  stdu 1, -192(1)
  04df1c4  mflr 0
  04df1c8  std 0, 208(1)
  04df1cc  stfd 31, 184(1)
  04df1d0  addi 0, 1, 128
  04df1d4  stvx 30, 0, 0
  04df1d8  addic 0, 0, 16
  04df1dc  stvx 31, 0, 0
  04df1e0  fmr 4, 3
  04df1e4  lis 4, 78
  04df1e8  stfs 2, 1040(3)
  04df1ec  std 31, 176(1)
  04df1f0  lwz 5, 12(3)
  04df1f4  ori 31, 3, 0
  04df1f8  addi 4, 4, -3776
  04df1fc  fmr 3, 1
  04df200  cmpwi 5, 1
  04df204  fmr 1, 4
  04df208  stfs 4, 1044(3)
  04df20c  std 30, 168(1)
  04df210  lfs 31, 0(4)
  04df214  bf 2, 0x4df224
  04df218  lis 3, 78
  04df21c  addi 3, 3, -3776
  04df220  lfs 31, 4(3)
  04df224  lis 3, 78
  04df228  stfs 2, 112(1)
  04df22c  li 0, 112
  04df230  stfs 2, 116(1)
  04df234  addi 30, 3, -3776
  04df238  stfs 2, 120(1)
  04df23c  stfs 2, 124(1)
  04df240  lfs 2, 8(30)
  04df244  lvx 31, 1, 0
  04df248  fmuls 2, 3, 2
  04df24c  stfs 1, 112(1)
  04df250  li 0, 112
  04df254  stfs 1, 116(1)
  04df258  stfs 1, 120(1)
  04df25c  stfs 1, 124(1)
  04df260  lfs 1, 12(30)
  04df264  lfs 3, 16(30)
  04df268  lvx 2, 1, 0
  04df26c  vsldoi 30, 2, 2, 0
  04df270  fnmsubs 1, 2, 1, 3
  04df274  bl 0x5dd1f4
  04df278  nop
  04df27c  vsubfp 2, 31, 30
  04df280  li 3, 20
  04df284  fdivs 2, 1, 31
  04df288  vspltisw 3, -1
  04df28c  vspltisw 7, -1
  04df290  li 4, 64
  04df294  vspltisw 11, -1
  04df298  vslw 3, 3, 3
  04df29c  vslw 7, 7, 7
  04df2a0  li 5, 48
  04df2a4  vspltisw 10, -1
  04df2a8  li 6, 80
  04df2ac  li 7, 96
  04df2b0  vspltisw 12, 0
  04df2b4  vrefp 4, 2
  04df2b8  lvlx 5, 3, 30
  04df2bc  vspltw 5, 5, 0
  04df2c0  vaddfp 8, 30, 31
  04df2c4  li 3, 32
  04df2c8  vnmsubfp 6, 4, 2, 5
  04df2cc  vmaddfp 3, 4, 6, 3
  04df2d0  vspltisw 6, -1
  04df2d4  vspltisw 4, -1
  04df2d8  vslw 6, 6, 6
  04df2dc  vslw 4, 4, 4
  04df2e0  vmaddfp 4, 30, 31, 4
  04df2e4  vnmsubfp 9, 3, 2, 5
  04df2e8  vmaddfp 3, 3, 9, 7
  04df2ec  vslw 9, 11, 11
  04df2f0  vslw 7, 10, 10
  04df2f4  vspltisw 10, -1
  04df2f8  vnmsubfp 2, 3, 2, 5
  04df2fc  stfs 2, 112(1)
  04df300  stfs 2, 116(1)
  04df304  stfs 2, 120(1)
  04df308  stfs 2, 124(1)
  04df30c  lvx 11, 3, 30
  04df310  li 3, 112
  04df314  li 0, 112
  04df318  vmaddfp 2, 3, 2, 6
  04df31c  lvx 6, 1, 0
  04df320  stfs 1, 112(1)
  04df324  stfs 1, 116(1)
  04df328  stfs 1, 120(1)
  04df32c  stfs 1, 124(1)
  04df330  vslw 3, 10, 10
  04df334  vperm 6, 6, 12, 11
  04df338  vmaddfp 7, 8, 2, 7
  04df33c  vmaddfp 2, 4, 2, 9
  04df340  lvlx 4, 4, 30
  04df344  lvx 8, 5, 30
  04df348  vspltw 4, 4, 0
  04df34c  lvx 9, 6, 30
  04df350  addic 5, 31, 160
  04df354  lvx 10, 7, 30
  04df358  lvx 11, 3, 30
  04df35c  li 3, 96
  04df360  li 0, 112
  04df364  li 4, 112
  04df368  vperm 4, 7, 4, 9
  04df36c  vmaddfp 2, 2, 5, 3
  04df370  li 6, 128
  04df374  vperm 3, 4, 12, 10
  04df378  lvx 4, 1, 0
  04df37c  stvx 6, 3, 31
  04df380  vperm 4, 4, 12, 8
  04df384  li 3, 144
  04df388  vperm 2, 2, 12, 11
  04df38c  stvx 4, 4, 31
  04df390  addic 4, 31, 176
  04df394  stvx 3, 6, 31
  04df398  li 6, 272
  04df39c  stvx 2, 3, 31
  04df3a0  lvx 5, 0, 5
  04df3a4  addic 3, 31, 192
  04df3a8  lvx 7, 0, 4
  04df3ac  addic 4, 31, 208
  04df3b0  vspltw 8, 5, 0
  04df3b4  vspltw 9, 5, 1
  04df3b8  vspltw 11, 7, 1
  04df3bc  vspltw 10, 7, 0
  04df3c0  lvx 0, 0, 3
  04df3c4  vmaddfp 8, 6, 8, 12
  04df3c8  vspltw 13, 5, 2
  04df3cc  vmaddfp 9, 4, 9, 12
  04df3d0  vspltw 1, 0, 0
  04df3d4  lvx 15, 0, 4
  04df3d8  vmaddfp 11, 4, 11, 12
  04df3dc  vspltw 14, 0, 1
  04df3e0  vmaddfp 10, 6, 10, 12
  04df3e4  vspltw 17, 15, 0
  04df3e8  vmaddfp 1, 6, 1, 12
  04df3ec  vspltw 18, 15, 1
  04df3f0  li 3, 224
  04df3f4  vspltw 5, 5, 3
  04df3f8  vmaddfp 14, 4, 14, 12
  04df3fc  vmaddfp 6, 6, 17, 12
  04df400  vspltw 16, 7, 2
  04df404  vmaddfp 4, 4, 18, 12
  04df408  vspltw 7, 7, 3
  04df40c  vspltw 12, 15, 3
  04df410  li 4, 240
  04df414  vmaddfp 8, 3, 13, 8
  04df418  li 5, 256
  04df41c  vmaddfp 5, 2, 5, 9
  04df420  vspltw 13, 0, 3
  04df424  vspltw 9, 0, 2
  04df428  vmaddfp 7, 2, 7, 11
  04df42c  vspltw 11, 15, 2
  04df430  vmaddfp 10, 3, 16, 10
  04df434  vmaddfp 9, 3, 9, 1
  04df438  vmaddfp 13, 2, 13, 14
  04df43c  vmaddfp 3, 3, 11, 6
  04df440  vmaddfp 2, 2, 12, 4
  04df444  vaddfp 5, 8, 5
  04df448  vaddfp 6, 10, 7
  04df44c  vaddfp 4, 9, 13
  04df450  vaddfp 2, 3, 2
  04df454  stvx 5, 3, 31
  04df458  stvx 6, 4, 31
  04df45c  stvx 4, 5, 31
  04df460  stvx 2, 6, 31
  04df464  li 0, 128
  04df468  lvx 30, 1, 0
  04df46c  addic 0, 0, 16
  04df470  lvx 31, 1, 0
  04df474  ld 0, 208(1)
  04df478  mtlr 0
  04df47c  lfd 31, 184(1)
  04df480  ld 30, 168(1)
  04df484  ld 31, 176(1)
  04df488  addi 1, 1, 192
  04df48c  blr

FUN_004df600:   # 0x4df600, 0x62c bytes
  04df600  stdu 1, -352(1)
  04df604  mflr 0
  04df608  std 0, 368(1)
  04df60c  std 31, 344(1)
  04df610  addi 0, 1, 112
  04df614  stvx 20, 0, 0
  04df618  addic 0, 0, 16
  04df61c  stvx 21, 0, 0
  04df620  addic 0, 0, 16
  04df624  stvx 22, 0, 0
  04df628  addic 0, 0, 16
  04df62c  stvx 23, 0, 0
  04df630  addic 0, 0, 16
  04df634  stvx 24, 0, 0
  04df638  addic 0, 0, 16
  04df63c  stvx 25, 0, 0
  04df640  addic 0, 0, 16
  04df644  stvx 26, 0, 0
  04df648  addic 0, 0, 16
  04df64c  stvx 27, 0, 0
  04df650  addic 0, 0, 16
  04df654  stvx 28, 0, 0
  04df658  addic 0, 0, 16
  04df65c  stvx 29, 0, 0
  04df660  addic 0, 0, 16
  04df664  stvx 30, 0, 0
  04df668  addic 0, 0, 16
  04df66c  stvx 31, 0, 0
  04df670  std 30, 336(1)
  04df674  li 31, 16
  04df678  li 30, 32
  04df67c  std 29, 328(1)
  04df680  lvx 3, 0, 4
  04df684  li 29, 48
  04df688  vspltisw 21, 0
  04df68c  lis 5, 78
  04df690  li 6, 48
  04df694  addi 5, 5, -2928
  04df698  lvx 4, 31, 4
  04df69c  lvx 5, 30, 4
  04df6a0  li 8, 80
  04df6a4  lvx 6, 29, 4
  04df6a8  li 9, 16
  04df6ac  li 4, 64
  04df6b0  vmrglw 9, 3, 4
  04df6b4  li 10, 32
  04df6b8  vmrglw 10, 5, 6
  04df6bc  lvx 11, 0, 5
  04df6c0  li 11, 144
  04df6c4  lvx 12, 6, 5
  04df6c8  li 6, 96
  04df6cc  lvx 1, 4, 5
  04df6d0  lvx 14, 8, 5
  04df6d4  lvx 16, 9, 5
  04df6d8  li 4, 112
  04df6dc  lvx 18, 10, 5
  04df6e0  vmrghw 7, 3, 4
  04df6e4  vmrghw 8, 5, 6
  04df6e8  lvx 19, 6, 5
  04df6ec  vperm 15, 9, 10, 1
  04df6f0  li 6, 128
  04df6f4  lvx 29, 11, 5
  04df6f8  vperm 17, 10, 9, 14
  04df6fc  vperm 30, 5, 3, 19
  04df700  vperm 23, 6, 4, 29
  04df704  vperm 13, 5, 3, 11
  04df708  vperm 0, 6, 4, 12
  04df70c  vperm 27, 7, 8, 1
  04df710  vperm 26, 8, 7, 14
  04df714  vsldoi 28, 15, 15, 8
  04df718  vsldoi 25, 17, 17, 8
  04df71c  vmaddfp 15, 15, 17, 21
  04df720  vperm 31, 5, 3, 18
  04df724  vmaddfp 17, 30, 23, 21
  04df728  vperm 24, 6, 4, 16
  04df72c  vmaddfp 13, 13, 0, 21
  04df730  vperm 1, 8, 7, 1
  04df734  vmaddfp 30, 27, 26, 21
  04df738  vperm 14, 7, 8, 14
  04df73c  lvx 22, 4, 5
  04df740  li 8, 224
  04df744  lvx 20, 6, 5
  04df748  li 4, 192
  04df74c  vperm 27, 6, 4, 22
  04df750  li 6, 208
  04df754  vperm 0, 5, 3, 20
  04df758  vperm 16, 5, 3, 16
  04df75c  vperm 18, 4, 6, 18
  04df760  vperm 11, 4, 6, 11
  04df764  vnmsubfp 15, 28, 25, 15
  04df768  vnmsubfp 0, 27, 0, 17
  04df76c  vnmsubfp 13, 24, 31, 13
  04df770  vnmsubfp 1, 1, 14, 30
  04df774  lvx 14, 4, 5
  04df778  lvx 17, 6, 5
  04df77c  lvx 31, 8, 5
  04df780  li 4, 176
  04df784  li 6, 160
  04df788  vmaddfp 16, 16, 18, 21
  04df78c  vperm 30, 5, 3, 22
  04df790  vperm 12, 5, 3, 12
  04df794  vperm 3, 5, 3, 29
  04df798  lvx 18, 4, 5
  04df79c  lvx 27, 6, 5
  04df7a0  vperm 26, 7, 8, 18
  04df7a4  vmrghw 28, 13, 15
  04df7a8  vperm 14, 0, 1, 14
  04df7ac  vperm 17, 0, 1, 17
  04df7b0  vperm 31, 13, 15, 31
  04df7b4  vperm 25, 7, 8, 27
  04df7b8  vmaddfp 14, 14, 28, 21
  04df7bc  vperm 28, 4, 6, 20
  04df7c0  vnmsubfp 11, 11, 12, 16
  04df7c4  vperm 4, 4, 6, 19
  04df7c8  vperm 5, 9, 10, 18
  04df7cc  vsldoi 29, 26, 26, 4
  04df7d0  vmaddfp 19, 25, 13, 21
  04df7d4  std 28, 320(1)
  04df7d8  vmaddfp 30, 30, 28, 21
  04df7dc  ori 28, 3, 0
  04df7e0  li 3, 240
  04df7e4  vmaddfp 29, 29, 15, 21
  04df7e8  li 4, 176
  04df7ec  vmaddfp 6, 17, 31, 14
  04df7f0  vperm 14, 9, 10, 27
  04df7f4  vsldoi 31, 25, 25, 4
  04df7f8  vperm 25, 8, 7, 27
  04df7fc  vsldoi 17, 5, 5, 4
  04df800  vperm 7, 8, 7, 18
  04df804  vnmsubfp 3, 4, 3, 30
  04df808  vsldoi 28, 14, 14, 4
  04df80c  vmaddfp 14, 14, 0, 21
  04df810  vmaddfp 17, 17, 1, 21
  04df814  vperm 4, 10, 9, 27
  04df818  vperm 9, 10, 9, 18
  04df81c  vnmsubfp 10, 26, 13, 29
  04df820  vspltw 8, 6, 0
  04df824  vspltw 12, 6, 1
  04df828  vspltw 6, 6, 2
  04df82c  li 6, 192
  04df830  vsubfp 8, 8, 12
  04df834  vnmsubfp 12, 31, 15, 19
  04df838  vnmsubfp 13, 28, 1, 14
  04df83c  vnmsubfp 5, 5, 0, 17
  04df840  lvlx 0, 3, 5
  04df844  li 8, 208
  04df848  vmaddfp 7, 7, 11, 10
  04df84c  li 3, 160
  04df850  li 9, 292
  04df854  li 10, 244
  04df858  li 11, 296
  04df85c  vsubfp 6, 8, 6
  04df860  vnmsubfp 8, 25, 11, 12
  04df864  vnmsubfp 4, 4, 3, 13
  04df868  vmaddfp 3, 9, 3, 5
  04df86c  vspltw 12, 0, 0
  04df870  li 12, 300
  04df874  vspltisw 15, 2
  04df878  std 27, 312(1)
  04df87c  vsldoi 31, 2, 2, 0
  04df880  ori 27, 7, 0
  04df884  vrefp 5, 6
  04df888  li 7, 272
  04df88c  vnmsubfp 6, 6, 5, 12
  04df890  vmaddfp 5, 6, 5, 5
  04df894  vmaddfp 6, 8, 5, 21
  04df898  vmaddfp 7, 7, 5, 21
  04df89c  vmaddfp 4, 4, 5, 21
  04df8a0  vmaddfp 3, 3, 5, 21
  04df8a4  stvx 6, 3, 28
  04df8a8  stvx 7, 4, 28
  04df8ac  stvx 4, 6, 28
  04df8b0  stvx 3, 8, 28
  04df8b4  lvlx 3, 9, 5
  04df8b8  lvlx 4, 10, 5
  04df8bc  vspltw 3, 3, 0
  04df8c0  li 9, 304
  04df8c4  lvlx 5, 11, 5
  04df8c8  vspltw 4, 4, 0
  04df8cc  vspltw 5, 5, 0
  04df8d0  vctsxs 3, 3, 0
  04df8d4  lvlx 6, 12, 5
  04df8d8  li 11, 308
  04df8dc  li 12, 312
  04df8e0  lvlx 8, 9, 5
  04df8e4  vspltw 6, 6, 0
  04df8e8  li 10, 316
  04df8ec  vspltw 8, 8, 0
  04df8f0  li 9, 320
  04df8f4  vcfsx 7, 3, 0
  04df8f8  vnmsubfp 4, 7, 5, 4
  04df8fc  lvlx 5, 11, 5
  04df900  lvlx 9, 12, 5
  04df904  lvlx 10, 10, 5
  04df908  vspltw 5, 5, 0
  04df90c  vspltw 9, 9, 0
  04df910  li 10, 324
  04df914  vspltw 10, 10, 0
  04df918  li 11, 288
  04df91c  addic 12, 28, 192
  04df920  vnmsubfp 4, 7, 6, 4
  04df924  lvlx 7, 9, 5
  04df928  lvlx 11, 10, 5
  04df92c  vspltw 2, 7, 0
  04df930  li 9, 256
  04df934  vspltw 11, 11, 0
  04df938  vspltisw 6, 3
  04df93c  lvlx 7, 11, 5
  04df940  addic 10, 28, 176
  04df944  li 11, 352
  04df948  vspltw 7, 7, 0
  04df94c  vand 3, 3, 6
  04df950  vspltisw 6, 1
  04df954  vmaddfp 13, 4, 4, 21
  04df958  lvx 1, 9, 5
  04df95c  vadduwm 0, 6, 3
  04df960  li 9, 336
  04df964  lvx 14, 7, 5
  04df968  addic 7, 28, 160
  04df96c  vmaddfp 5, 8, 13, 5
  04df970  vmaddfp 8, 9, 13, 10
  04df974  vmaddfp 9, 13, 4, 21
  04df978  vand 10, 0, 6
  04df97c  vand 6, 3, 6
  04df980  vand 3, 3, 15
  04df984  vcmpequw 10, 10, 21
  04df988  vcmpequw 6, 6, 21
  04df98c  vcmpequw 3, 3, 21
  04df990  vmaddfp 2, 5, 13, 2
  04df994  vmaddfp 5, 8, 13, 11
  04df998  vand 8, 0, 15
  04df99c  vcmpequw 8, 8, 21
  04df9a0  vmaddfp 2, 2, 13, 12
  04df9a4  vmaddfp 4, 5, 9, 4
  04df9a8  lvx 5, 0, 7
  04df9ac  lvx 12, 9, 5
  04df9b0  vspltw 9, 5, 0
  04df9b4  vspltw 11, 5, 1
  04df9b8  addic 9, 28, 208
  04df9bc  lvx 13, 0, 10
  04df9c0  vsel 10, 2, 4, 10
  04df9c4  vsel 2, 2, 4, 6
  04df9c8  vxor 4, 7, 10
  04df9cc  vxor 6, 7, 2
  04df9d0  vsel 4, 4, 10, 8
  04df9d4  vsel 2, 6, 2, 3
  04df9d8  vmaddfp 3, 12, 9, 21
  04df9dc  vspltw 10, 5, 2
  04df9e0  vand 6, 4, 1
  04df9e4  vxor 7, 2, 7
  04df9e8  vspltw 5, 5, 3
  04df9ec  vspltw 8, 13, 1
  04df9f0  vsel 2, 6, 2, 14
  04df9f4  vand 6, 7, 1
  04df9f8  vspltw 7, 13, 0
  04df9fc  vmaddfp 9, 2, 11, 21
  04dfa00  vsel 4, 6, 4, 14
  04dfa04  lvx 6, 11, 5
  04dfa08  lvx 11, 0, 12
  04dfa0c  lvx 14, 0, 9
  04dfa10  vmaddfp 7, 12, 7, 21
  04dfa14  vspltw 0, 11, 0
  04dfa18  vmaddfp 8, 2, 8, 21
  04dfa1c  vspltw 1, 11, 1
  04dfa20  vmaddfp 3, 4, 10, 3
  04dfa24  vspltw 15, 14, 0
  04dfa28  li 5, 96
  04dfa2c  vspltw 10, 13, 2
  04dfa30  vmaddfp 0, 12, 0, 21
  04dfa34  vmaddfp 1, 2, 1, 21
  04dfa38  vspltw 13, 13, 3
  04dfa3c  vmaddfp 5, 6, 5, 9
  04dfa40  vspltw 16, 11, 2
  04dfa44  vspltw 9, 14, 1
  04dfa48  vmaddfp 12, 12, 15, 21
  04dfa4c  vspltw 11, 11, 3
  04dfa50  li 11, 112
  04dfa54  vmaddfp 2, 2, 9, 21
  04dfa58  vmaddfp 7, 4, 10, 7
  04dfa5c  vmaddfp 8, 6, 13, 8
  04dfa60  vspltw 9, 14, 2
  04dfa64  vspltw 10, 14, 3
  04dfa68  vmaddfp 13, 4, 16, 0
  04dfa6c  vmaddfp 11, 6, 11, 1
  04dfa70  vaddfp 3, 3, 5
  04dfa74  vmaddfp 4, 4, 9, 12
  04dfa78  vmaddfp 2, 6, 10, 2
  04dfa7c  vaddfp 5, 7, 8
  04dfa80  vaddfp 6, 13, 11
  04dfa84  stvx 3, 3, 28
  04dfa88  li 3, 128
  04dfa8c  vaddfp 2, 4, 2
  04dfa90  stvx 5, 4, 28
  04dfa94  lvx 3, 5, 28
  04dfa98  li 4, 144
  04dfa9c  lvx 4, 11, 28
  04dfaa0  li 5, 224
  04dfaa4  stvx 6, 6, 28
  04dfaa8  li 6, 240
  04dfaac  stvx 2, 8, 28
  04dfab0  lvx 2, 0, 7
  04dfab4  lvx 7, 0, 10
  04dfab8  vspltw 5, 2, 0
  04dfabc  vspltw 6, 2, 1
  04dfac0  vspltw 8, 2, 2
  04dfac4  vspltw 9, 7, 0
  04dfac8  vmaddfp 5, 3, 5, 21
  04dfacc  vspltw 10, 7, 1
  04dfad0  vmaddfp 6, 4, 6, 21
  04dfad4  lvx 11, 0, 12
  04dfad8  lvx 1, 3, 28
  04dfadc  lvx 14, 0, 9
  04dfae0  vmaddfp 9, 3, 9, 21
  04dfae4  vspltw 13, 11, 0
  04dfae8  vmaddfp 10, 4, 10, 21
  04dfaec  vspltw 0, 11, 1
  04dfaf0  vspltw 16, 14, 0
  04dfaf4  vspltw 2, 2, 3
  04dfaf8  vmaddfp 13, 3, 13, 21
  04dfafc  vmaddfp 0, 4, 0, 21
  04dfb00  vspltw 12, 7, 2
  04dfb04  vmaddfp 5, 1, 8, 5
  04dfb08  vspltw 7, 7, 3
  04dfb0c  vspltw 8, 14, 1
  04dfb10  vmaddfp 3, 3, 16, 21
  04dfb14  lvx 15, 4, 28
  04dfb18  li 7, 256
  04dfb1c  li 8, 272
  04dfb20  vmaddfp 2, 15, 2, 6
  04dfb24  vmaddfp 4, 4, 8, 21
  04dfb28  vspltw 6, 11, 2
  04dfb2c  vspltw 11, 11, 3
  04dfb30  vmaddfp 9, 1, 12, 9
  04dfb34  vmaddfp 7, 15, 7, 10
  04dfb38  vspltw 12, 14, 2
  04dfb3c  vspltw 10, 14, 3
  04dfb40  addic 3, 28, 800
  04dfb44  addic 4, 28, 224
  04dfb48  vmaddfp 6, 1, 6, 13
  04dfb4c  vmaddfp 8, 15, 11, 0
  04dfb50  vmaddfp 3, 1, 12, 3
  04dfb54  vaddfp 2, 5, 2
  04dfb58  vmaddfp 4, 15, 10, 4
  04dfb5c  vaddfp 5, 9, 7
  04dfb60  vaddfp 6, 6, 8
  04dfb64  vaddfp 3, 3, 4
  04dfb68  stvx 2, 5, 28
  04dfb6c  vsldoi 2, 31, 31, 0
  04dfb70  stvx 5, 6, 28
  04dfb74  stvx 6, 7, 28
  04dfb78  stvx 3, 8, 28
  04dfb7c  bl 0x4feb98
  04dfb80  nop
  04dfb84  stvx 31, 30, 28
  04dfb88  li 3, 64
  04dfb8c  lvx 2, 0, 27
  04dfb90  li 4, 80
  04dfb94  stvx 2, 29, 28
  04dfb98  lvx 2, 31, 27
  04dfb9c  stvx 2, 3, 28
  04dfba0  lvx 2, 30, 27
  04dfba4  stvx 2, 4, 28
  04dfba8  li 0, 112
  04dfbac  lvx 20, 1, 0
  04dfbb0  addic 0, 0, 16
  04dfbb4  lvx 21, 1, 0
  04dfbb8  addic 0, 0, 16
  04dfbbc  lvx 22, 1, 0
  04dfbc0  addic 0, 0, 16
  04dfbc4  lvx 23, 1, 0
  04dfbc8  addic 0, 0, 16
  04dfbcc  lvx 24, 1, 0
  04dfbd0  addic 0, 0, 16
  04dfbd4  lvx 25, 1, 0
  04dfbd8  addic 0, 0, 16
  04dfbdc  lvx 26, 1, 0
  04dfbe0  addic 0, 0, 16
  04dfbe4  lvx 27, 1, 0
  04dfbe8  addic 0, 0, 16
  04dfbec  lvx 28, 1, 0
  04dfbf0  addic 0, 0, 16
  04dfbf4  lvx 29, 1, 0
  04dfbf8  addic 0, 0, 16
  04dfbfc  lvx 30, 1, 0
  04dfc00  addic 0, 0, 16
  04dfc04  lvx 31, 1, 0
  04dfc08  ld 0, 368(1)
  04dfc0c  mtlr 0
  04dfc10  ld 27, 312(1)
  04dfc14  ld 28, 320(1)
  04dfc18  ld 29, 328(1)
  04dfc1c  ld 30, 336(1)
  04dfc20  ld 31, 344(1)
  04dfc24  addi 1, 1, 352
  04dfc28  blr

FUN_004dfc2c:   # 0x4dfc2c, 0x4 bytes
  04dfc2c  blr

FUN_004dfe70:   # 0x4dfe70, 0xe04 bytes
  04dfe70  stdu 1, -1008(1)
  04dfe74  mflr 0
  04dfe78  std 0, 1024(1)
  04dfe7c  stfd 31, 1000(1)
  04dfe80  addi 0, 1, 752
  04dfe84  stvx 20, 0, 0
  04dfe88  addic 0, 0, 16
  04dfe8c  stvx 21, 0, 0
  04dfe90  addic 0, 0, 16
  04dfe94  stvx 22, 0, 0
  04dfe98  addic 0, 0, 16
  04dfe9c  stvx 23, 0, 0
  04dfea0  addic 0, 0, 16
  04dfea4  stvx 24, 0, 0
  04dfea8  addic 0, 0, 16
  04dfeac  stvx 25, 0, 0
  04dfeb0  addic 0, 0, 16
  04dfeb4  stvx 26, 0, 0
  04dfeb8  addic 0, 0, 16
  04dfebc  stvx 27, 0, 0
  04dfec0  addic 0, 0, 16
  04dfec4  stvx 28, 0, 0
  04dfec8  addic 0, 0, 16
  04dfecc  stvx 29, 0, 0
  04dfed0  addic 0, 0, 16
  04dfed4  stvx 30, 0, 0
  04dfed8  addic 0, 0, 16
  04dfedc  stvx 31, 0, 0
  04dfee0  std 31, 992(1)
  04dfee4  ori 31, 3, 0
  04dfee8  std 28, 968(1)
  04dfeec  lis 3, 144
  04dfef0  fmr 31, 1
  04dfef4  std 30, 984(1)
  04dfef8  ori 28, 4, 0
  04dfefc  addic 30, 3, -23532
  04dff00  std 27, 960(1)
  04dff04  lis 4, 78
  04dff08  lwz 3, 0(31)
  04dff0c  std 29, 976(1)
  04dff10  addi 27, 4, -976
  04dff14  ori 29, 5, 0
  04dff18  lwz 4, 20(30)
  04dff1c  vsldoi 31, 2, 2, 0
  04dff20  li 5, 512
  04dff24  lwz 7, 16(3)
  04dff28  std 2, 40(1)
  04dff2c  ori 3, 31, 0
  04dff30  li 6, 512
  04dff34  lwz 8, 0(7)
  04dff38  lwz 2, 4(7)
  04dff3c  std 26, 952(1)
  04dff40  std 25, 944(1)
  04dff44  mtctr 8
  04dff48  bcctrl 20, 30
  04dff4c  lwz 3, 20(30)
  04dff50  lis 4, 4
  04dff54  ld 2, 40(1)
  04dff58  lis 5, 275
  04dff5c  ori 4, 4, 404
  04dff60  lis 7, 4
  04dff64  lwz 6, 8(3)
  04dff68  stw 4, 0(6)
  04dff6c  lbz 4, 6804(31)
  04dff70  lwz 6, 8(3)
  04dff74  subc 4, 4, 5
  04dff78  stw 4, 4(6)
  04dff7c  lwz 4, 8(3)
  04dff80  addic 6, 4, 8
  04dff84  stw 6, 8(3)
  04dff88  ori 6, 7, 396
  04dff8c  stw 6, 8(4)
  04dff90  lbz 4, 6805(31)
  04dff94  lis 6, 8
  04dff98  lwz 7, 8(3)
  04dff9c  subc 4, 4, 5
  04dffa0  ori 6, 6, 436
  04dffa4  stw 4, 4(7)
  04dffa8  lwz 4, 8(3)
  04dffac  addic 7, 4, 8
  04dffb0  stw 7, 8(3)
  04dffb4  stw 6, 8(4)
  04dffb8  lbz 4, 6806(31)
  04dffbc  lis 6, 4
  04dffc0  lwz 8, 8(3)
  04dffc4  lis 7, 24
  04dffc8  subc 4, 4, 5
  04dffcc  ori 6, 6, 408
  04dffd0  stw 4, 4(8)
  04dffd4  lbz 4, 6807(31)
  04dffd8  lwz 8, 8(3)
  04dffdc  subc 4, 4, 5
  04dffe0  stw 4, 8(8)
  04dffe4  lwz 4, 8(3)
  04dffe8  addic 8, 4, 12
  04dffec  stw 8, 8(3)
  04dfff0  stw 6, 12(4)
  04dfff4  lbz 4, 6841(31)
  04dfff8  li 6, 31
  04dfffc  subc 4, 4, 5
  04e0000  ori 5, 7, 520
  04e0004  lwz 7, 8(3)
  04e0008  stw 4, 4(7)
  04e000c  lwz 4, 8(3)
  04e0010  lhz 8, 6852(31)
  04e0014  addic 7, 4, 8
  04e0018  cntlzw 8, 8
  04e001c  stw 7, 8(3)
  04e0020  lhz 7, 6854(31)
  04e0024  stw 5, 8(4)
  04e0028  cntlzw 7, 7
  04e002c  lbz 5, 6840(31)
  04e0030  subc 4, 6, 8
  04e0034  lbz 8, 6802(31)
  04e0038  subc 6, 6, 7
  04e003c  lbz 7, 6800(31)
  04e0040  slwi 5, 5, 5
  04e0044  lbz 9, 6801(31)
  04e0048  slwi 7, 7, 8
  04e004c  or 5, 8, 5
  04e0050  slwi 8, 9, 12
  04e0054  slwi 4, 4, 16
  04e0058  or 7, 7, 8
  04e005c  slwi 6, 6, 24
  04e0060  or 5, 5, 7
  04e0064  or 4, 5, 4
  04e0068  lwz 5, 8(3)
  04e006c  or 4, 4, 6
  04e0070  lis 6, 4
  04e0074  stw 4, 4(5)
  04e0078  lwz 4, 8(3)
  04e007c  lwz 5, 6824(31)
  04e0080  stw 5, 8(4)
  04e0084  lwz 4, 8(3)
  04e0088  lwz 5, 6808(31)
  04e008c  stw 5, 12(4)
  04e0090  lwz 4, 8(3)
  04e0094  lwz 5, 6844(31)
  04e0098  stw 5, 16(4)
  04e009c  lwz 4, 8(3)
  04e00a0  lwz 5, 6812(31)
  04e00a4  stw 5, 20(4)
  04e00a8  lwz 4, 8(3)
  04e00ac  lwz 5, 6828(31)
  04e00b0  stw 5, 24(4)
  04e00b4  lwz 4, 8(3)
  04e00b8  addic 5, 4, 28
  04e00bc  stw 5, 8(3)
  04e00c0  ori 5, 6, 556
  04e00c4  stw 5, 28(4)
  04e00c8  lwz 4, 6848(31)
  04e00cc  lis 5, 16
  04e00d0  lwz 6, 8(3)
  04e00d4  ori 5, 5, 640
  04e00d8  stw 4, 4(6)
  04e00dc  lwz 4, 8(3)
  04e00e0  addic 6, 4, 8
  04e00e4  stw 6, 8(3)
  04e00e8  stw 5, 8(4)
  04e00ec  lwz 4, 6832(31)
  04e00f0  lwz 7, 8(3)
  04e00f4  lis 5, 4
  04e00f8  lis 6, 4
  04e00fc  ori 5, 5, 544
  04e0100  stw 4, 4(7)
  04e0104  lwz 4, 8(3)
  04e0108  lwz 7, 6836(31)
  04e010c  stw 7, 8(4)
  04e0110  lwz 4, 8(3)
  04e0114  lwz 7, 6816(31)
  04e0118  stw 7, 12(4)
  04e011c  lwz 4, 8(3)
  04e0120  lwz 7, 6820(31)
  04e0124  stw 7, 16(4)
  04e0128  lwz 4, 8(3)
  04e012c  addic 7, 4, 20
  04e0130  stw 7, 8(3)
  04e0134  stw 5, 20(4)
  04e0138  lbz 4, 6803(31)
  04e013c  ori 5, 6, 696
  04e0140  lwz 7, 8(3)
  04e0144  lis 6, 8
  04e0148  ori 6, 6, 512
  04e014c  stw 4, 4(7)
  04e0150  lwz 4, 8(3)
  04e0154  addic 7, 4, 8
  04e0158  stw 7, 8(3)
  04e015c  stw 5, 8(4)
  04e0160  lhz 4, 6856(31)
  04e0164  lhz 5, 6858(31)
  04e0168  lwz 7, 8(3)
  04e016c  rlwimi 4, 5, 16, 0, 15
  04e0170  lis 5, 4
  04e0174  ori 5, 5, 7560
  04e0178  stw 4, 4(7)
  04e017c  lwz 4, 8(3)
  04e0180  addic 7, 4, 8
  04e0184  stw 7, 8(3)
  04e0188  stw 6, 8(4)
  04e018c  lhz 4, 6856(31)
  04e0190  lhz 6, 6852(31)
  04e0194  lwz 8, 8(3)
  04e0198  rlwimi 4, 6, 16, 0, 15
  04e019c  lis 6, 4
  04e01a0  li 7, -256
  04e01a4  stw 4, 4(8)
  04e01a8  lhz 4, 6858(31)
  04e01ac  lhz 8, 6854(31)
  04e01b0  lwz 9, 8(3)
  04e01b4  rlwimi 4, 8, 16, 0, 15
  04e01b8  ori 6, 6, 7564
  04e01bc  stw 4, 8(9)
  04e01c0  lwz 4, 8(3)
  04e01c4  addic 8, 4, 12
  04e01c8  li 26, 0
  04e01cc  stw 8, 8(3)
  04e01d0  stw 5, 12(4)
  04e01d4  lhz 4, 6854(31)
  04e01d8  lwz 9, 8(3)
  04e01dc  rlwinm 5, 4, 20, 31, 31
  04e01e0  subc 4, 4, 5
  04e01e4  ori 4, 4, 4096
  04e01e8  lis 5, 4
  04e01ec  li 8, 1
  04e01f0  stw 4, 4(9)
  04e01f4  lwz 4, 8(3)
  04e01f8  addic 4, 4, 8
  04e01fc  ori 5, 5, 7572
  04e0200  stw 4, 8(3)
  04e0204  lwz 3, 20(30)
  04e0208  lwz 4, 8(3)
  04e020c  stw 6, 0(4)
  04e0210  lwz 4, 8(3)
  04e0214  lis 6, 4
  04e0218  ori 6, 6, 256
  04e021c  stw 7, 4(4)
  04e0220  lwz 4, 8(3)
  04e0224  addic 4, 4, 8
  04e0228  stw 4, 8(3)
  04e022c  lwz 3, 20(30)
  04e0230  lwz 4, 8(3)
  04e0234  stw 5, 0(4)
  04e0238  lwz 4, 8(3)
  04e023c  stw 8, 4(4)
  04e0240  lwz 4, 8(3)
  04e0244  addic 5, 4, 8
  04e0248  stw 5, 8(3)
  04e024c  stw 6, 8(4)
  04e0250  lwz 7, 8(3)
  04e0254  lis 4, 4
  04e0258  lis 5, 4
  04e025c  ori 4, 4, 784
  04e0260  ori 5, 5, 2672
  04e0264  stw 26, 4(7)
  04e0268  lwz 7, 8(3)
  04e026c  lis 6, 4
  04e0270  addic 7, 7, 8
  04e0274  ori 6, 6, 804
  04e0278  stw 7, 8(3)
  04e027c  lwz 3, 20(30)
  04e0280  lwz 7, 8(3)
  04e0284  stw 4, 0(7)
  04e0288  lwz 4, 8(3)
  04e028c  stw 26, 4(4)
  04e0290  lwz 4, 8(3)
  04e0294  addic 4, 4, 8
  04e0298  stw 4, 8(3)
  04e029c  lwz 3, 20(30)
  04e02a0  lwz 4, 8(3)
  04e02a4  stw 5, 0(4)
  04e02a8  lwz 4, 8(3)
  04e02ac  stw 8, 4(4)
  04e02b0  lwz 4, 8(3)
  04e02b4  addic 4, 4, 8
  04e02b8  stw 4, 8(3)
  04e02bc  lwz 3, 20(30)
  04e02c0  lis 4, 4
  04e02c4  ori 4, 4, 772
  04e02c8  lwz 5, 8(3)
  04e02cc  stw 6, 0(5)
  04e02d0  lwz 5, 8(3)
  04e02d4  stw 26, 4(5)
  04e02d8  lwz 5, 8(3)
  04e02dc  addic 5, 5, 8
  04e02e0  stw 5, 8(3)
  04e02e4  lwz 3, 20(30)
  04e02e8  lis 5, 4
  04e02ec  ori 5, 5, 7556
  04e02f0  lwz 6, 8(3)
  04e02f4  stw 4, 0(6)
  04e02f8  lwz 4, 8(3)
  04e02fc  li 6, 3
  04e0300  stw 26, 4(4)
  04e0304  lwz 4, 8(3)
  04e0308  addic 4, 4, 8
  04e030c  stw 4, 8(3)
  04e0310  lwz 4, 20(30)
  04e0314  ori 3, 31, 0
  04e0318  lwz 7, 8(4)
  04e031c  stw 5, 0(7)
  04e0320  lwz 7, 8(4)
  04e0324  li 5, 9
  04e0328  stw 6, 4(7)
  04e032c  lwz 6, 8(4)
  04e0330  addic 6, 6, 8
  04e0334  stw 6, 8(4)
  04e0338  lwz 4, 20(30)
  04e033c  bl 0x4d83ec
  04e0340  lwz 4, 20(30)
  04e0344  ori 3, 31, 0
  04e0348  li 5, 15
  04e034c  bl 0x4d82b8
  04e0350  li 25, 8
  04e0354  lvlx 2, 0, 29
  04e0358  li 3, 4
  04e035c  vspltisw 29, 0
  04e0360  li 4, 32
  04e0364  li 5, 112
  04e0368  li 6, 16
  04e036c  lvlx 3, 25, 29
  04e0370  lvlx 4, 3, 29
  04e0374  lvlx 6, 4, 27
  04e0378  lvx 7, 5, 1
  04e037c  li 3, 80
  04e0380  vspltw 30, 6, 0
  04e0384  lvx 6, 0, 27
  04e0388  vspltw 5, 3, 0
  04e038c  li 0, 672
  04e0390  vperm 9, 4, 3, 6
  04e0394  vperm 10, 2, 7, 6
  04e0398  lvx 8, 6, 27
  04e039c  vxor 5, 5, 30
  04e03a0  stvx 30, 1, 0
  04e03a4  lvx 11, 3, 27
  04e03a8  vperm 9, 9, 10, 8
  04e03ac  li 3, 96
  04e03b0  vperm 12, 4, 2, 11
  04e03b4  vperm 10, 5, 5, 11
  04e03b8  vperm 13, 3, 2, 6
  04e03bc  vperm 5, 5, 4, 11
  04e03c0  vperm 11, 2, 2, 11
  04e03c4  vperm 10, 12, 10, 8
  04e03c8  vperm 12, 4, 7, 6
  04e03cc  li 4, 128
  04e03d0  vmaddfp 10, 9, 10, 29
  04e03d4  vperm 12, 13, 12, 8
  04e03d8  lvx 13, 3, 27
  04e03dc  li 3, 112
  04e03e0  vperm 5, 5, 11, 13
  04e03e4  vperm 2, 2, 4, 6
  04e03e8  vperm 3, 3, 7, 6
  04e03ec  vnmsubfp 5, 12, 5, 10
  04e03f0  lvx 10, 3, 27
  04e03f4  lvx 11, 4, 27
  04e03f8  li 3, 144
  04e03fc  li 4, 148
  04e0400  vperm 2, 2, 3, 8
  04e0404  lvlx 14, 3, 27
  04e0408  vmaddfp 13, 5, 5, 29
  04e040c  vperm 0, 5, 5, 10
  04e0410  vperm 1, 5, 5, 11
  04e0414  vspltw 14, 14, 0
  04e0418  li 3, 48
  04e041c  li 7, 128
  04e0420  vmaddfp 13, 0, 0, 13
  04e0424  lvlx 0, 4, 27
  04e0428  vspltw 30, 0, 0
  04e042c  li 4, 64
  04e0430  lvx 0, 3, 27
  04e0434  li 8, 152
  04e0438  lvx 15, 4, 27
  04e043c  vmaddfp 13, 1, 1, 13
  04e0440  li 3, 144
  04e0444  stfs 31, 496(1)
  04e0448  li 0, 688
  04e044c  li 9, 160
  04e0450  vspltw 13, 13, 0
  04e0454  vrsqrtefp 1, 13
  04e0458  stvx 31, 3, 1
  04e045c  stfs 31, 500(1)
  04e0460  stfs 31, 504(1)
  04e0464  stfs 31, 508(1)
  04e0468  stvx 30, 1, 0
  04e046c  li 0, 496
  04e0470  vmaddfp 13, 1, 13, 29
  04e0474  vmaddfp 16, 1, 14, 29
  04e0478  addic 3, 1, 368
  04e047c  addic 4, 1, 160
  04e0480  addic 5, 1, 144
  04e0484  vnmsubfp 13, 1, 13, 30
  04e0488  addic 6, 1, 128
  04e048c  vmaddfp 13, 13, 16, 1
  04e0490  vcmpeqfp 16, 13, 13
  04e0494  vsel 13, 1, 13, 16
  04e0498  vmaddfp 5, 5, 13, 29
  04e049c  vperm 13, 5, 5, 0
  04e04a0  vperm 5, 5, 5, 15
  04e04a4  vmaddfp 12, 13, 12, 29
  04e04a8  vnmsubfp 5, 5, 9, 12
  04e04ac  vmaddfp 4, 5, 5, 29
  04e04b0  vperm 6, 5, 5, 10
  04e04b4  vperm 7, 5, 5, 11
  04e04b8  vmaddfp 3, 6, 6, 4
  04e04bc  vmaddfp 3, 7, 7, 3
  04e04c0  vspltw 3, 3, 0
  04e04c4  vrsqrtefp 4, 3
  04e04c8  vmaddfp 3, 4, 3, 29
  04e04cc  vmaddfp 6, 4, 14, 29
  04e04d0  vnmsubfp 3, 4, 3, 30
  04e04d4  vmaddfp 3, 3, 6, 4
  04e04d8  vcmpeqfp 6, 3, 3
  04e04dc  vsel 3, 4, 3, 6
  04e04e0  vmaddfp 3, 5, 3, 29
  04e04e4  stvx 3, 7, 1
  04e04e8  lvx 28, 1, 0
  04e04ec  lvlx 3, 8, 27
  04e04f0  vmaddfp 2, 2, 28, 29
  04e04f4  vspltw 3, 3, 0
  04e04f8  vmaddfp 2, 2, 3, 29
  04e04fc  vsubfp 2, 31, 2
  04e0500  stvx 2, 9, 1
  04e0504  bl 0x5e9008
  04e0508  nop
  04e050c  li 3, 368
  04e0510  li 4, 384
  04e0514  li 5, 400
  04e0518  li 6, 416
  04e051c  li 7, 256
  04e0520  lvx 2, 3, 1
  04e0524  li 8, 304
  04e0528  li 3, 160
  04e052c  lvx 3, 4, 1
  04e0530  li 4, 208
  04e0534  lvx 4, 5, 1
  04e0538  lvx 5, 6, 1
  04e053c  li 5, 224
  04e0540  li 6, 240
  04e0544  vmrghw 6, 2, 3
  04e0548  vmrghw 7, 4, 5
  04e054c  lvx 10, 3, 27
  04e0550  li 3, 176
  04e0554  lvx 11, 4, 27
  04e0558  li 4, 192
  04e055c  lvx 0, 5, 27
  04e0560  lvx 1, 6, 27
  04e0564  vmrglw 8, 2, 3
  04e0568  vmrglw 9, 4, 5
  04e056c  lvx 15, 3, 27
  04e0570  lvx 17, 4, 27
  04e0574  li 3, 272
  04e0578  lvx 18, 7, 27
  04e057c  li 4, 288
  04e0580  lvx 27, 8, 27
  04e0584  vperm 14, 8, 9, 0
  04e0588  vperm 25, 6, 7, 0
  04e058c  vperm 24, 7, 6, 1
  04e0590  vperm 12, 4, 2, 10
  04e0594  vperm 13, 5, 3, 11
  04e0598  vperm 16, 9, 8, 1
  04e059c  vperm 31, 4, 2, 18
  04e05a0  vperm 23, 5, 3, 27
  04e05a4  vmaddfp 25, 25, 24, 29
  04e05a8  vsldoi 26, 14, 14, 8
  04e05ac  vmaddfp 12, 12, 13, 29
  04e05b0  vmaddfp 14, 14, 16, 29
  04e05b4  vsldoi 13, 16, 16, 8
  04e05b8  lvx 22, 3, 27
  04e05bc  vmaddfp 31, 31, 23, 29
  04e05c0  lvx 24, 4, 27
  04e05c4  li 3, 352
  04e05c8  vperm 0, 7, 6, 0
  04e05cc  li 4, 384
  04e05d0  vperm 1, 6, 7, 1
  04e05d4  vperm 19, 4, 2, 17
  04e05d8  vperm 16, 5, 3, 15
  04e05dc  vperm 23, 4, 2, 24
  04e05e0  vperm 21, 5, 3, 22
  04e05e4  vnmsubfp 0, 0, 1, 25
  04e05e8  vnmsubfp 12, 16, 19, 12
  04e05ec  vnmsubfp 13, 26, 13, 14
  04e05f0  vperm 14, 4, 2, 15
  04e05f4  vnmsubfp 1, 21, 23, 31
  04e05f8  lvx 15, 3, 27
  04e05fc  li 5, 320
  04e0600  vperm 16, 3, 5, 17
  04e0604  li 3, 368
  04e0608  vperm 11, 4, 2, 11
  04e060c  vperm 10, 3, 5, 10
  04e0610  vperm 25, 3, 5, 24
  04e0614  vmaddfp 14, 14, 16, 29
  04e0618  lvx 19, 3, 27
  04e061c  lvx 31, 4, 27
  04e0620  li 3, 336
  04e0624  vperm 3, 3, 5, 18
  04e0628  vmrghw 17, 12, 13
  04e062c  li 4, 272
  04e0630  vperm 31, 12, 13, 31
  04e0634  vperm 15, 1, 0, 15
  04e0638  vperm 19, 1, 0, 19
  04e063c  vperm 16, 4, 2, 22
  04e0640  vperm 2, 4, 2, 27
  04e0644  vmaddfp 15, 15, 17, 29
  04e0648  lvx 17, 5, 27
  04e064c  li 5, 288
  04e0650  vperm 26, 6, 7, 17
  04e0654  li 0, 672
  04e0658  vnmsubfp 5, 10, 11, 14
  04e065c  vperm 21, 7, 6, 17
  04e0660  li 6, 304
  04e0664  vmaddfp 16, 16, 25, 29
  04e0668  li 7, 320
  04e066c  li 8, 416
  04e0670  lvx 30, 1, 0
  04e0674  li 9, 400
  04e0678  vsldoi 23, 26, 26, 4
  04e067c  li 10, 336
  04e0680  vxor 24, 30, 28
  04e0684  vmaddfp 15, 19, 31, 15
  04e0688  vmaddfp 31, 26, 12, 29
  04e068c  lvx 19, 3, 27
  04e0690  lvx 4, 4, 1
  04e0694  li 3, 352
  04e0698  lvx 27, 5, 1
  04e069c  li 0, 688
  04e06a0  vperm 26, 6, 7, 19
  04e06a4  vnmsubfp 2, 3, 2, 16
  04e06a8  lvx 25, 6, 1
  04e06ac  lvx 22, 7, 1
  04e06b0  lvlx 10, 8, 27
  04e06b4  vperm 6, 7, 6, 19
  04e06b8  vspltw 10, 10, 0
  04e06bc  vspltw 11, 15, 0
  04e06c0  vspltw 14, 15, 1
  04e06c4  vnmsubfp 18, 23, 13, 31
  04e06c8  vspltw 15, 15, 2
  04e06cc  lvx 31, 9, 27
  04e06d0  vsubfp 11, 11, 14
  04e06d4  vperm 4, 24, 4, 31
  04e06d8  vsldoi 14, 26, 26, 4
  04e06dc  vperm 10, 10, 27, 31
  04e06e0  vperm 25, 28, 25, 31
  04e06e4  vperm 22, 29, 22, 31
  04e06e8  vmaddfp 13, 14, 13, 29
  04e06ec  vperm 23, 8, 9, 19
  04e06f0  lvx 27, 10, 1
  04e06f4  vmrghw 4, 4, 10
  04e06f8  lvx 10, 3, 1
  04e06fc  vperm 27, 24, 27, 31
  04e0700  vperm 10, 28, 10, 31
  04e0704  vnmsubfp 18, 21, 5, 18
  04e0708  vperm 14, 8, 9, 17
  04e070c  vsubfp 11, 11, 15
  04e0710  vmrghw 15, 25, 22
  04e0714  vmrghw 4, 4, 27
  04e0718  vsldoi 25, 23, 23, 4
  04e071c  li 3, 432
  04e0720  vsldoi 22, 14, 14, 4
  04e0724  vmrghw 3, 15, 10
  04e0728  vnmsubfp 7, 26, 12, 13
  04e072c  vmaddfp 14, 14, 1, 29
  04e0730  vmaddfp 25, 25, 0, 29
  04e0734  vperm 13, 9, 8, 17
  04e0738  vsubfp 12, 3, 4
  04e073c  vperm 8, 9, 8, 19
  04e0740  vaddfp 3, 3, 4
  04e0744  li 4, 448
  04e0748  vrefp 10, 11
  04e074c  li 6, 192
  04e0750  li 8, 208
  04e0754  li 5, 496
  04e0758  li 7, 500
  04e075c  li 9, 240
  04e0760  vmaddfp 5, 6, 5, 7
  04e0764  lvx 6, 1, 0
  04e0768  vnmsubfp 9, 22, 0, 14
  04e076c  vnmsubfp 0, 23, 1, 25
  04e0770  vnmsubfp 7, 11, 10, 6
  04e0774  vrefp 11, 12
  04e0778  vnmsubfp 9, 13, 2, 9
  04e077c  vmaddfp 2, 8, 2, 0
  04e0780  lvx 8, 3, 27
  04e0784  li 3, 464
  04e0788  lvx 26, 4, 27
  04e078c  li 4, 176
  04e0790  vmaddfp 4, 7, 10, 10
  04e0794  lvx 27, 3, 27
  04e0798  vnmsubfp 7, 12, 11, 6
  04e079c  li 3, 480
  04e07a0  mtctr 25
  04e07a4  vmaddfp 10, 18, 4, 29
  04e07a8  vmaddfp 5, 5, 4, 29
  04e07ac  vmaddfp 21, 9, 4, 29
  04e07b0  vmaddfp 7, 7, 11, 11
  04e07b4  vmaddfp 25, 2, 4, 29
  04e07b8  vspltw 17, 10, 2
  04e07bc  vspltw 18, 5, 1
  04e07c0  vxor 4, 7, 30
  04e07c4  vaddfp 2, 7, 7
  04e07c8  vspltw 22, 25, 0
  04e07cc  vspltw 20, 21, 2
  04e07d0  vsel 4, 4, 7, 8
  04e07d4  lvx 7, 3, 27
  04e07d8  li 3, 224
  04e07dc  vspltw 19, 21, 0
  04e07e0  vmaddfp 3, 3, 4, 29
  04e07e4  vspltw 23, 25, 1
  04e07e8  lvx 4, 4, 1
  04e07ec  lvx 12, 6, 1
  04e07f0  lvx 13, 8, 1
  04e07f4  li 4, 256
  04e07f8  lvx 0, 3, 1
  04e07fc  li 0, 704
  04e0800  lvlx 1, 5, 27
  04e0804  lvlx 14, 7, 27
  04e0808  vspltw 1, 1, 0
  04e080c  vspltw 14, 14, 0
  04e0810  vperm 13, 28, 13, 31
  04e0814  vperm 4, 24, 4, 31
  04e0818  vperm 12, 1, 12, 31
  04e081c  vperm 0, 14, 0, 31
  04e0820  lvx 15, 9, 1
  04e0824  lvx 16, 4, 1
  04e0828  vmrghw 4, 4, 12
  04e082c  vmrghw 13, 13, 0
  04e0830  vperm 14, 24, 15, 31
  04e0834  vperm 0, 28, 16, 31
  04e0838  vand 9, 2, 26
  04e083c  vand 11, 2, 27
  04e0840  vmrghw 4, 4, 14
  04e0844  vmrghw 13, 13, 0
  04e0848  vspltw 1, 10, 0
  04e084c  vmaddfp 24, 9, 19, 29
  04e0850  vspltw 12, 10, 1
  04e0854  vmaddfp 28, 11, 18, 29
  04e0858  stvx 22, 1, 0
  04e085c  vsubfp 14, 13, 4
  04e0860  li 0, 736
  04e0864  vmaddfp 15, 9, 1, 29
  04e0868  vmaddfp 16, 11, 12, 29
  04e086c  vspltw 0, 5, 0
  04e0870  vspltw 18, 21, 1
  04e0874  vaddfp 4, 13, 4
  04e0878  vand 2, 2, 8
  04e087c  vsel 3, 3, 6, 7
  04e0880  stvx 20, 1, 0
  04e0884  vmaddfp 31, 9, 0, 29
  04e0888  li 0, 720
  04e088c  vspltw 10, 10, 3
  04e0890  vmaddfp 9, 9, 22, 29
  04e0894  vspltw 21, 21, 3
  04e0898  vmaddfp 22, 11, 18, 29
  04e089c  vmaddfp 11, 11, 23, 29
  04e08a0  vmaddfp 20, 2, 20, 24
  04e08a4  stvx 23, 1, 0
  04e08a8  vrefp 23, 14
  04e08ac  vmaddfp 15, 2, 17, 15
  04e08b0  vmaddfp 16, 3, 10, 16
  04e08b4  vspltw 24, 25, 2
  04e08b8  vspltw 25, 25, 3
  04e08bc  slwi 3, 28, 6
  04e08c0  li 6, 656
  04e08c4  addc 3, 31, 3
  04e08c8  li 7, 640
  04e08cc  clrldi 5, 3, 32
  04e08d0  li 8, 304
  04e08d4  addic 4, 5, 288
  04e08d8  li 10, 624
  04e08dc  li 11, 320
  04e08e0  addic 3, 3, 288
  04e08e4  vaddfp 13, 15, 16
  04e08e8  vspltw 15, 5, 2
  04e08ec  vnmsubfp 14, 14, 23, 6
  04e08f0  li 9, 336
  04e08f4  clrldi 3, 3, 32
  04e08f8  vmaddfp 16, 2, 15, 31
  04e08fc  vspltw 31, 5, 3
  04e0900  vmaddfp 2, 2, 24, 9
  04e0904  vspltw 5, 5, 1
  04e0908  vmaddfp 9, 3, 21, 22
  04e090c  vmaddfp 28, 3, 31, 28
  04e0910  vmaddfp 3, 3, 25, 11
  04e0914  vmaddfp 11, 14, 23, 23
  04e0918  stvx 13, 0, 4
  04e091c  stvx 1, 6, 1
  04e0920  li 6, 608
  04e0924  stvx 12, 7, 1
  04e0928  li 7, 592
  04e092c  vaddfp 9, 20, 9
  04e0930  vaddfp 16, 16, 28
  04e0934  vaddfp 3, 2, 3
  04e0938  vxor 2, 11, 30
  04e093c  vaddfp 28, 11, 11
  04e0940  vsel 2, 2, 11, 8
  04e0944  vmaddfp 2, 4, 2, 29
  04e0948  stvx 16, 8, 5
  04e094c  stvx 17, 10, 1
  04e0950  addic 8, 3, 32
  04e0954  stvx 9, 11, 5
  04e0958  li 10, 576
  04e095c  stvx 10, 6, 1
  04e0960  addic 11, 3, 16
  04e0964  stvx 3, 9, 5
  04e0968  addic 3, 3, 48
  04e096c  lvx 3, 0, 4
  04e0970  stvx 0, 7, 1
  04e0974  li 6, 560
  04e0978  lvx 4, 0, 8
  04e097c  li 9, 544
  04e0980  stvx 5, 10, 1
  04e0984  li 4, 528
  04e0988  vsel 2, 2, 6, 7
  04e098c  li 7, 512
  04e0990  lvx 5, 0, 11
  04e0994  li 8, 448
  04e0998  vand 26, 28, 26
  04e099c  vand 27, 28, 27
  04e09a0  lvx 7, 0, 3
  04e09a4  vand 28, 28, 8
  04e09a8  vmrghw 6, 3, 4
  04e09ac  vmrghw 8, 5, 7
  04e09b0  vmrglw 3, 3, 4
  04e09b4  vmrglw 4, 5, 7
  04e09b8  stvx 15, 6, 1
  04e09bc  vmrghw 5, 6, 8
  04e09c0  stvx 31, 9, 1
  04e09c4  li 6, 432
  04e09c8  vmrglw 6, 6, 8
  04e09cc  li 9, 480
  04e09d0  stvx 19, 4, 1
  04e09d4  vmrghw 7, 3, 4
  04e09d8  li 4, 464
  04e09dc  vmrglw 3, 3, 4
  04e09e0  stvx 18, 7, 1
  04e09e4  lwz 3, 20(30)
  04e09e8  stvx 5, 6, 1
  04e09ec  lis 7, 68
  04e09f0  stvx 6, 8, 1
  04e09f4  li 0, 704
  04e09f8  stvx 7, 4, 1
  04e09fc  ori 6, 7, 7932
  04e0a00  stvx 3, 9, 1
  04e0a04  lwz 7, 8(3)
  04e0a08  addic 4, 1, 432
  04e0a0c  stw 6, 0(7)
  04e0a10  lwz 6, 8(3)
  04e0a14  stw 26, 4(6)
  04e0a18  lwz 6, 8(3)
  04e0a1c  addic 6, 6, 8
  04e0a20  stw 6, 8(3)
  04e0a24  lvx 22, 1, 0
  04e0a28  li 0, 720
  04e0a2c  lvx 23, 1, 0
  04e0a30  li 0, 736
  04e0a34  lvx 20, 1, 0
  04e0a38  lwz 7, 0(4)
  04e0a3c  stw 7, 0(6)
  04e0a40  lwz 6, 8(3)
  04e0a44  addic 7, 6, 4
  04e0a48  stw 7, 8(3)
  04e0a4c  lwz 7, 4(4)
  04e0a50  addic 4, 4, 8
  04e0a54  stw 7, 4(6)
  04e0a58  lwz 6, 8(3)
  04e0a5c  addic 6, 6, 4
  04e0a60  stw 6, 8(3)
  04e0a64  bdnz 0x4e0a38
  04e0a68  li 3, 640
  04e0a6c  vspltisw 3, 0
  04e0a70  li 4, 656
  04e0a74  li 7, 592
  04e0a78  li 6, 576
  04e0a7c  li 8, 512
  04e0a80  lvx 4, 3, 1
  04e0a84  li 9, 560
  04e0a88  lvx 5, 4, 1
  04e0a8c  li 3, 608
  04e0a90  vmaddfp 4, 27, 4, 3
  04e0a94  li 4, 624
  04e0a98  vmaddfp 5, 26, 5, 3
  04e0a9c  lis 10, 78
  04e0aa0  lvx 6, 7, 1
  04e0aa4  li 7, 528
  04e0aa8  lvx 7, 6, 1
  04e0aac  lvx 8, 4, 1
  04e0ab0  lvx 9, 3, 1
  04e0ab4  li 6, 544
  04e0ab8  vmaddfp 6, 26, 6, 3
  04e0abc  addi 3, 10, -976
  04e0ac0  lvx 10, 7, 1
  04e0ac4  li 4, 512
  04e0ac8  lvx 11, 8, 1
  04e0acc  vmaddfp 10, 26, 10, 3
  04e0ad0  vmaddfp 11, 27, 11, 3
  04e0ad4  vmaddfp 4, 2, 9, 4
  04e0ad8  vmaddfp 5, 28, 8, 5
  04e0adc  li 7, 528
  04e0ae0  vmaddfp 7, 27, 7, 3
  04e0ae4  vmaddfp 12, 26, 22, 3
  04e0ae8  vmaddfp 13, 27, 23, 3
  04e0aec  lvx 8, 9, 1
  04e0af0  lvx 9, 6, 1
  04e0af4  vmaddfp 6, 28, 8, 6
  04e0af8  lvx 8, 4, 3
  04e0afc  li 6, 560
  04e0b00  li 4, 544
  04e0b04  vmaddfp 10, 28, 20, 10
  04e0b08  vmaddfp 11, 2, 21, 11
  04e0b0c  vaddfp 4, 5, 4
  04e0b10  vmaddfp 7, 2, 9, 7
  04e0b14  vmaddfp 12, 28, 24, 12
  04e0b18  vmaddfp 2, 2, 25, 13
  04e0b1c  lvx 9, 7, 3
  04e0b20  lvx 5, 4, 3
  04e0b24  li 7, 576
  04e0b28  li 4, 560
  04e0b2c  vaddfp 10, 10, 11
  04e0b30  vspltw 11, 4, 0
  04e0b34  vaddfp 6, 6, 7
  04e0b38  vspltw 13, 4, 1
  04e0b3c  vaddfp 2, 12, 2
  04e0b40  vmaddfp 11, 8, 11, 3
  04e0b44  vspltw 12, 4, 2
  04e0b48  vspltw 4, 4, 3
  04e0b4c  vmaddfp 13, 9, 13, 3
  04e0b50  lvx 7, 6, 3
  04e0b54  addic 3, 5, 544
  04e0b58  vspltw 15, 10, 0
  04e0b5c  vspltw 16, 10, 1
  04e0b60  vspltw 17, 10, 2
  04e0b64  vspltw 0, 6, 0
  04e0b68  vspltw 1, 6, 1
  04e0b6c  vmaddfp 15, 8, 15, 3
  04e0b70  vspltw 18, 2, 0
  04e0b74  vmaddfp 16, 9, 16, 3
  04e0b78  vmaddfp 11, 5, 12, 11
  04e0b7c  vspltw 14, 6, 2
  04e0b80  vspltw 12, 2, 1
  04e0b84  vmaddfp 0, 8, 0, 3
  04e0b88  vmaddfp 1, 9, 1, 3
  04e0b8c  vspltw 6, 6, 3
  04e0b90  vmaddfp 8, 8, 18, 3
  04e0b94  vspltw 10, 10, 3
  04e0b98  vmaddfp 4, 7, 4, 13
  04e0b9c  vmaddfp 3, 9, 12, 3
  04e0ba0  vspltw 13, 2, 2
  04e0ba4  li 6, 592
  04e0ba8  vspltw 2, 2, 3
  04e0bac  vmaddfp 12, 5, 17, 15
  04e0bb0  vmaddfp 10, 7, 10, 16
  04e0bb4  vmaddfp 9, 5, 14, 0
  04e0bb8  vmaddfp 6, 7, 6, 1
  04e0bbc  vmaddfp 5, 5, 13, 8
  04e0bc0  vaddfp 4, 11, 4
  04e0bc4  vmaddfp 2, 7, 2, 3
  04e0bc8  vaddfp 3, 9, 6
  04e0bcc  vaddfp 6, 12, 10
  04e0bd0  vaddfp 2, 5, 2
  04e0bd4  stvx 4, 0, 3
  04e0bd8  stvx 3, 4, 5
  04e0bdc  stvx 6, 7, 5
  04e0be0  stvx 2, 6, 5
  04e0be4  li 0, 752
  04e0be8  lvx 20, 1, 0
  04e0bec  addic 0, 0, 16
  04e0bf0  lvx 21, 1, 0
  04e0bf4  addic 0, 0, 16
  04e0bf8  lvx 22, 1, 0
  04e0bfc  addic 0, 0, 16
  04e0c00  lvx 23, 1, 0
  04e0c04  addic 0, 0, 16
  04e0c08  lvx 24, 1, 0
  04e0c0c  addic 0, 0, 16
  04e0c10  lvx 25, 1, 0
  04e0c14  addic 0, 0, 16
  04e0c18  lvx 26, 1, 0
  04e0c1c  addic 0, 0, 16
  04e0c20  lvx 27, 1, 0
  04e0c24  addic 0, 0, 16
  04e0c28  lvx 28, 1, 0
  04e0c2c  addic 0, 0, 16
  04e0c30  lvx 29, 1, 0
  04e0c34  addic 0, 0, 16
  04e0c38  lvx 30, 1, 0
  04e0c3c  addic 0, 0, 16
  04e0c40  lvx 31, 1, 0
  04e0c44  ld 0, 1024(1)
  04e0c48  mtlr 0
  04e0c4c  lfd 31, 1000(1)
  04e0c50  ld 25, 944(1)
  04e0c54  ld 26, 952(1)
  04e0c58  ld 27, 960(1)
  04e0c5c  ld 28, 968(1)
  04e0c60  ld 29, 976(1)
  04e0c64  ld 30, 984(1)
  04e0c68  ld 31, 992(1)
  04e0c6c  addi 1, 1, 1008
  04e0c70  blr

FUN_004e0d50:   # 0x4e0d50, 0xc20 bytes
  04e0d50  stdu 1, -496(1)
  04e0d54  mflr 0
  04e0d58  std 0, 512(1)
  04e0d5c  std 19, 392(1)
  04e0d60  addi 0, 1, 304
  04e0d64  stvx 28, 0, 0
  04e0d68  addic 0, 0, 16
  04e0d6c  stvx 29, 0, 0
  04e0d70  addic 0, 0, 16
  04e0d74  stvx 30, 0, 0
  04e0d78  addic 0, 0, 16
  04e0d7c  stvx 31, 0, 0
  04e0d80  ori 19, 3, 0
  04e0d84  stfs 2, 288(1)
  04e0d88  lis 5, 144
  04e0d8c  stfs 2, 292(1)
  04e0d90  li 6, 128
  04e0d94  std 31, 488(1)
  04e0d98  stfs 2, 296(1)
  04e0d9c  li 31, 496
  04e0da0  stfs 2, 300(1)
  04e0da4  li 0, 288
  04e0da8  vspltisw 4, 0
  04e0dac  addic 3, 31, 64
  04e0db0  addic 31, 31, 96
  04e0db4  std 18, 384(1)
  04e0db8  sldi 4, 4, 2
  04e0dbc  addic 18, 5, -23532
  04e0dc0  lvx 30, 1, 0
  04e0dc4  extsw 4, 4
  04e0dc8  stfs 1, 288(1)
  04e0dcc  li 10, 208
  04e0dd0  stvx 2, 3, 1
  04e0dd4  li 0, 288
  04e0dd8  stvx 3, 31, 1
  04e0ddc  addic 7, 19, 224
  04e0de0  stfs 1, 292(1)
  04e0de4  addic 9, 19, 256
  04e0de8  stfs 1, 296(1)
  04e0dec  addic 5, 19, 240
  04e0df0  stfs 1, 300(1)
  04e0df4  addic 8, 19, 272
  04e0df8  lwzx 18, 18, 4
  04e0dfc  lvx 31, 1, 0
  04e0e00  vmaddfp 3, 3, 31, 4
  04e0e04  std 29, 472(1)
  04e0e08  li 11, 160
  04e0e0c  li 12, 176
  04e0e10  std 30, 480(1)
  04e0e14  lwz 29, 8(18)
  04e0e18  std 27, 456(1)
  04e0e1c  li 30, 192
  04e0e20  lis 4, 68
  04e0e24  std 28, 464(1)
  04e0e28  li 27, 0
  04e0e2c  std 17, 376(1)
  04e0e30  ori 28, 4, 7932
  04e0e34  li 17, 8
  04e0e38  addic 4, 1, 160
  04e0e3c  mtctr 17
  04e0e40  vsubfp 2, 2, 3
  04e0e44  stvx 2, 6, 1
  04e0e48  lvx 2, 0, 7
  04e0e4c  lvx 3, 0, 9
  04e0e50  lvx 4, 0, 5
  04e0e54  vmrghw 5, 2, 3
  04e0e58  lvx 6, 0, 8
  04e0e5c  vmrglw 2, 2, 3
  04e0e60  vmrghw 3, 4, 6
  04e0e64  vmrglw 4, 4, 6
  04e0e68  vmrghw 6, 5, 3
  04e0e6c  vmrglw 3, 5, 3
  04e0e70  vmrghw 5, 2, 4
  04e0e74  vmrglw 2, 2, 4
  04e0e78  stvx 6, 11, 1
  04e0e7c  stvx 3, 12, 1
  04e0e80  stvx 5, 30, 1
  04e0e84  stvx 2, 10, 1
  04e0e88  stw 28, 0(29)
  04e0e8c  lwz 5, 8(18)
  04e0e90  stw 27, 4(5)
  04e0e94  lwz 5, 8(18)
  04e0e98  std 26, 448(1)
  04e0e9c  std 25, 440(1)
  04e0ea0  std 24, 432(1)
  04e0ea4  std 23, 424(1)
  04e0ea8  std 22, 416(1)
  04e0eac  std 21, 408(1)
  04e0eb0  std 20, 400(1)
  04e0eb4  std 16, 368(1)
  04e0eb8  addic 5, 5, 8
  04e0ebc  stw 5, 8(18)
  04e0ec0  lwz 6, 0(4)
  04e0ec4  stw 6, 0(5)
  04e0ec8  lwz 5, 8(18)
  04e0ecc  addic 6, 5, 4
  04e0ed0  stw 6, 8(18)
  04e0ed4  lwz 6, 4(4)
  04e0ed8  addic 4, 4, 8
  04e0edc  stw 6, 4(5)
  04e0ee0  lwz 5, 8(18)
  04e0ee4  addic 5, 5, 4
  04e0ee8  stw 5, 8(18)
  04e0eec  bdnz 0x4e0ec0
  04e0ef0  lis 4, 78
  04e0ef4  ori 30, 31, 0
  04e0ef8  vspltisw 29, 0
  04e0efc  addi 29, 4, 3200
  04e0f00  li 5, 16
  04e0f04  li 4, 48
  04e0f08  lvx 2, 30, 1
  04e0f0c  lvlx 4, 0, 29
  04e0f10  vspltw 3, 2, 2
  04e0f14  vspltw 4, 4, 0
  04e0f18  lvx 5, 5, 29
  04e0f1c  lvx 6, 4, 29
  04e0f20  li 5, 32
  04e0f24  li 4, 64
  04e0f28  vxor 3, 3, 4
  04e0f2c  vperm 4, 2, 2, 5
  04e0f30  lvx 7, 5, 29
  04e0f34  vperm 6, 2, 3, 6
  04e0f38  lvx 8, 4, 29
  04e0f3c  vperm 9, 2, 2, 7
  04e0f40  li 4, 80
  04e0f44  vperm 2, 3, 2, 8
  04e0f48  vmaddfp 6, 4, 6, 29
  04e0f4c  li 5, 96
  04e0f50  lvx 3, 4, 29
  04e0f54  li 4, 112
  04e0f58  vnmsubfp 2, 9, 2, 6
  04e0f5c  lvx 6, 5, 29
  04e0f60  li 5, 116
  04e0f64  lvlx 12, 4, 29
  04e0f68  li 7, 144
  04e0f6c  vmaddfp 8, 2, 2, 29
  04e0f70  vperm 10, 2, 2, 3
  04e0f74  vperm 11, 2, 2, 6
  04e0f78  addic 31, 1, 224
  04e0f7c  addic 6, 1, 144
  04e0f80  addic 4, 1, 128
  04e0f84  vmaddfp 8, 10, 10, 8
  04e0f88  vspltw 10, 12, 0
  04e0f8c  lvlx 12, 5, 29
  04e0f90  vspltw 28, 12, 0
  04e0f94  vmaddfp 8, 11, 11, 8
  04e0f98  addc 5, 1, 3
  04e0f9c  ori 3, 31, 0
  04e0fa0  clrldi 5, 5, 32
  04e0fa4  vspltw 8, 8, 0
  04e0fa8  vrsqrtefp 11, 8
  04e0fac  vmaddfp 8, 11, 8, 29
  04e0fb0  vmaddfp 12, 11, 10, 29
  04e0fb4  vnmsubfp 8, 11, 8, 28
  04e0fb8  vmaddfp 8, 8, 12, 11
  04e0fbc  vcmpeqfp 12, 8, 8
  04e0fc0  vsel 8, 11, 8, 12
  04e0fc4  vmaddfp 2, 2, 8, 29
  04e0fc8  vperm 5, 2, 2, 5
  04e0fcc  vperm 2, 2, 2, 7
  04e0fd0  vmaddfp 5, 5, 9, 29
  04e0fd4  vnmsubfp 2, 2, 4, 5
  04e0fd8  vmaddfp 4, 2, 2, 29
  04e0fdc  vperm 3, 2, 2, 3
  04e0fe0  vperm 5, 2, 2, 6
  04e0fe4  vmaddfp 3, 3, 3, 4
  04e0fe8  vmaddfp 3, 5, 5, 3
  04e0fec  vspltw 3, 3, 0
  04e0ff0  vrsqrtefp 4, 3
  04e0ff4  vmaddfp 3, 4, 3, 29
  04e0ff8  vmaddfp 5, 4, 10, 29
  04e0ffc  vnmsubfp 3, 4, 3, 28
  04e1000  vmaddfp 3, 3, 5, 4
  04e1004  vcmpeqfp 5, 3, 3
  04e1008  vsel 3, 4, 3, 5
  04e100c  vmaddfp 2, 2, 3, 29
  04e1010  stvx 2, 7, 1
  04e1014  bl 0x5e9008
  04e1018  nop
  04e101c  lvx 2, 30, 1
  04e1020  li 3, 128
  04e1024  vspltisw 3, -1
  04e1028  li 4, 120
  04e102c  vspltw 2, 2, 2
  04e1030  li 5, 112
  04e1034  li 6, 192
  04e1038  lvx 4, 3, 1
  04e103c  vaddfp 2, 2, 28
  04e1040  vslw 3, 3, 3
  04e1044  vspltw 4, 4, 2
  04e1048  li 3, 128
  04e104c  lvlx 5, 4, 29
  04e1050  li 4, 144
  04e1054  vspltw 5, 5, 0
  04e1058  vsubfp 4, 4, 30
  04e105c  lis 8, 4
  04e1060  li 9, 2305
  04e1064  ori 8, 8, 6196
  04e1068  vmaddfp 2, 31, 2, 3
  04e106c  lvx 3, 3, 29
  04e1070  li 3, 160
  04e1074  lvx 6, 4, 29
  04e1078  li 4, 176
  04e107c  lvx 7, 5, 1
  04e1080  li 5, 256
  04e1084  lvx 8, 3, 29
  04e1088  li 3, 224
  04e108c  lvx 9, 4, 29
  04e1090  li 4, 240
  04e1094  vmaddfp 2, 2, 5, 4
  04e1098  lvx 4, 6, 29
  04e109c  lvx 5, 3, 1
  04e10a0  li 6, 272
  04e10a4  lvx 10, 4, 1
  04e10a8  vmaddfp 0, 5, 29, 29
  04e10ac  lvx 1, 5, 1
  04e10b0  lvx 14, 6, 1
  04e10b4  lwz 7, 8(18)
  04e10b8  vperm 2, 31, 2, 3
  04e10bc  vperm 2, 2, 7, 6
  04e10c0  vand 3, 2, 8
  04e10c4  vand 6, 2, 9
  04e10c8  vand 2, 2, 4
  04e10cc  vspltw 4, 3, 0
  04e10d0  vspltw 7, 3, 1
  04e10d4  vspltw 8, 6, 0
  04e10d8  vspltw 9, 6, 1
  04e10dc  vspltw 12, 2, 0
  04e10e0  vmaddfp 4, 5, 4, 29
  04e10e4  vspltw 13, 2, 1
  04e10e8  vmaddfp 7, 10, 7, 29
  04e10ec  vmaddfp 8, 5, 8, 29
  04e10f0  vspltw 11, 3, 2
  04e10f4  vmaddfp 9, 10, 9, 29
  04e10f8  vspltw 3, 3, 3
  04e10fc  vmaddfp 5, 5, 12, 29
  04e1100  vspltw 15, 2, 2
  04e1104  vmaddfp 13, 10, 13, 29
  04e1108  vspltw 12, 6, 2
  04e110c  vmaddfp 10, 10, 29, 29
  04e1110  vspltw 6, 6, 3
  04e1114  vspltw 2, 2, 3
  04e1118  vmaddfp 4, 1, 11, 4
  04e111c  vmaddfp 3, 14, 3, 7
  04e1120  vmaddfp 7, 1, 12, 8
  04e1124  vmaddfp 6, 14, 6, 9
  04e1128  vmaddfp 5, 1, 15, 5
  04e112c  vmaddfp 2, 14, 2, 13
  04e1130  vmaddfp 8, 1, 29, 0
  04e1134  vmaddfp 9, 14, 28, 10
  04e1138  mtctr 17
  04e113c  vaddfp 3, 4, 3
  04e1140  vaddfp 4, 7, 6
  04e1144  vaddfp 2, 5, 2
  04e1148  vaddfp 5, 8, 9
  04e114c  vmrghw 6, 3, 2
  04e1150  vmrglw 2, 3, 2
  04e1154  vmrghw 7, 4, 5
  04e1158  vmrglw 3, 4, 5
  04e115c  vmrghw 4, 6, 7
  04e1160  vmrglw 5, 6, 7
  04e1164  vmrghw 6, 2, 3
  04e1168  vmrglw 2, 2, 3
  04e116c  stvx 4, 3, 1
  04e1170  stvx 5, 4, 1
  04e1174  stvx 6, 5, 1
  04e1178  lis 4, 4
  04e117c  stvx 2, 6, 1
  04e1180  stw 8, 0(7)
  04e1184  lwz 3, 8(18)
  04e1188  ori 4, 4, 6192
  04e118c  lis 6, 4
  04e1190  li 7, 0
  04e1194  ori 6, 6, 804
  04e1198  stw 9, 4(3)
  04e119c  lwz 3, 8(18)
  04e11a0  addic 5, 3, 8
  04e11a4  stw 5, 8(18)
  04e11a8  stw 4, 8(3)
  04e11ac  lwz 8, 8(18)
  04e11b0  li 5, 1028
  04e11b4  lis 3, 4
  04e11b8  li 4, 1
  04e11bc  ori 3, 3, 6204
  04e11c0  stw 5, 4(8)
  04e11c4  lwz 5, 8(18)
  04e11c8  addic 8, 5, 8
  04e11cc  stw 8, 8(18)
  04e11d0  stw 3, 8(5)
  04e11d4  lwz 8, 8(18)
  04e11d8  lis 3, 4
  04e11dc  lis 5, 12
  04e11e0  ori 3, 3, 808
  04e11e4  ori 5, 5, 816
  04e11e8  stw 4, 4(8)
  04e11ec  lwz 8, 8(18)
  04e11f0  addic 9, 8, 8
  04e11f4  stw 9, 8(18)
  04e11f8  stw 6, 8(8)
  04e11fc  lwz 9, 8(18)
  04e1200  li 6, 519
  04e1204  li 8, 255
  04e1208  stw 7, 4(9)
  04e120c  lwz 9, 8(18)
  04e1210  addic 10, 9, 8
  04e1214  stw 10, 8(18)
  04e1218  stw 3, 8(9)
  04e121c  lwz 10, 8(18)
  04e1220  lis 3, 4
  04e1224  lis 9, 12
  04e1228  ori 3, 3, 812
  04e122c  stw 4, 4(10)
  04e1230  lwz 4, 8(18)
  04e1234  addic 10, 4, 8
  04e1238  stw 10, 8(18)
  04e123c  stw 5, 8(4)
  04e1240  lwz 10, 8(18)
  04e1244  ori 4, 9, 828
  04e1248  li 5, 7680
  04e124c  li 9, 7681
  04e1250  stw 6, 4(10)
  04e1254  lwz 6, 8(18)
  04e1258  stw 8, 8(6)
  04e125c  lwz 6, 8(18)
  04e1260  stw 8, 12(6)
  04e1264  lwz 6, 8(18)
  04e1268  addic 10, 6, 16
  04e126c  stw 10, 8(18)
  04e1270  stw 3, 16(6)
  04e1274  lwz 10, 8(18)
  04e1278  lis 3, 68
  04e127c  li 6, 4
  04e1280  ori 3, 3, 7932
  04e1284  stw 8, 4(10)
  04e1288  lwz 8, 8(18)
  04e128c  addic 10, 8, 8
  04e1290  stw 10, 8(18)
  04e1294  stw 4, 8(8)
  04e1298  lwz 4, 8(18)
  04e129c  stw 5, 4(4)
  04e12a0  lwz 4, 8(18)
  04e12a4  stw 9, 8(4)
  04e12a8  lwz 4, 8(18)
  04e12ac  stw 7, 12(4)
  04e12b0  lwz 4, 8(18)
  04e12b4  addic 5, 4, 16
  04e12b8  stw 5, 8(18)
  04e12bc  stw 3, 16(4)
  04e12c0  lwz 3, 8(18)
  04e12c4  stw 6, 4(3)
  04e12c8  lwz 4, 8(18)
  04e12cc  addic 4, 4, 8
  04e12d0  stw 4, 8(18)
  04e12d4  lwz 3, 0(31)
  04e12d8  stw 3, 0(4)
  04e12dc  lwz 3, 8(18)
  04e12e0  addic 4, 3, 4
  04e12e4  stw 4, 8(18)
  04e12e8  lwz 4, 4(31)
  04e12ec  addic 31, 31, 8
  04e12f0  stw 4, 4(3)
  04e12f4  lwz 3, 8(18)
  04e12f8  addic 4, 3, 4
  04e12fc  stw 4, 8(18)
  04e1300  bdnz 0x4e12d4
  04e1304  lis 4, 4
  04e1308  li 5, 3122
  04e130c  ori 4, 4, 5952
  04e1310  lis 7, -32768
  04e1314  lis 8, 8
  04e1318  stw 4, 4(3)
  04e131c  lwz 3, 8(18)
  04e1320  lis 4, 1
  04e1324  ori 8, 8, 6172
  04e1328  ori 4, 4, 34204
  04e132c  li 9, 17
  04e1330  stw 5, 4(3)
  04e1334  lwz 3, 8(18)
  04e1338  li 11, 0
  04e133c  addic 5, 3, 8
  04e1340  lis 12, 4
  04e1344  stw 5, 8(18)
  04e1348  lis 5, 4
  04e134c  lwzx 6, 19, 4
  04e1350  ori 5, 5, 5760
  04e1354  or 6, 6, 7
  04e1358  stw 5, 8(3)
  04e135c  lwz 10, 8(18)
  04e1360  lis 3, 1
  04e1364  ori 3, 3, 34208
  04e1368  ori 12, 12, 6152
  04e136c  stw 6, 4(10)
  04e1370  lwz 6, 8(18)
  04e1374  addic 10, 6, 8
  04e1378  stw 10, 8(18)
  04e137c  lwzx 10, 19, 3
  04e1380  stw 8, 8(6)
  04e1384  lwz 31, 8(18)
  04e1388  lis 6, 16396
  04e138c  ori 6, 6, 5908
  04e1390  stw 10, 4(31)
  04e1394  lwz 10, 8(18)
  04e1398  li 29, 514
  04e139c  lis 26, 256
  04e13a0  stw 9, 8(10)
  04e13a4  lwz 10, 8(18)
  04e13a8  addic 31, 10, 12
  04e13ac  stw 31, 8(18)
  04e13b0  stw 6, 12(10)
  04e13b4  li 10, 24
  04e13b8  cntlzw 31, 11
  04e13bc  cntlzw 10, 10
  04e13c0  rlwinm 31, 31, 27, 31, 31
  04e13c4  rlwinm 10, 10, 27, 31, 31
  04e13c8  xori 31, 31, 1
  04e13cc  xori 10, 10, 1
  04e13d0  addc 10, 31, 10
  04e13d4  lwz 31, 8(18)
  04e13d8  slwi 10, 10, 18
  04e13dc  ori 10, 10, 6180
  04e13e0  stw 11, 4(31)
  04e13e4  lwz 31, 8(18)
  04e13e8  oris 10, 10, 16384
  04e13ec  stw 11, 8(31)
  04e13f0  lwz 31, 8(18)
  04e13f4  stw 11, 12(31)
  04e13f8  lwz 31, 8(18)
  04e13fc  stw 12, 16(31)
  04e1400  lwz 31, 8(18)
  04e1404  stw 17, 20(31)
  04e1408  lwz 31, 8(18)
  04e140c  addic 30, 31, 28
  04e1410  stw 30, 8(18)
  04e1414  stw 10, 24(31)
  04e1418  lis 30, 12
  04e141c  lwz 28, 8(18)
  04e1420  lis 31, 5888
  04e1424  ori 30, 30, 816
  04e1428  addic 27, 28, 4
  04e142c  stw 27, 8(18)
  04e1430  stw 31, 0(28)
  04e1434  lwz 25, 8(18)
  04e1438  li 28, 255
  04e143c  lis 27, 4
  04e1440  ori 27, 27, 804
  04e1444  stw 12, 0(25)
  04e1448  lwz 25, 8(18)
  04e144c  stw 11, 4(25)
  04e1450  lwz 25, 8(18)
  04e1454  addic 24, 25, 8
  04e1458  stw 24, 8(18)
  04e145c  stw 30, 8(25)
  04e1460  lwz 24, 8(18)
  04e1464  lis 30, 4
  04e1468  lis 25, 4
  04e146c  ori 30, 30, 6668
  04e1470  stw 29, 4(24)
  04e1474  lwz 29, 8(18)
  04e1478  stw 28, 8(29)
  04e147c  lwz 29, 8(18)
  04e1480  stw 28, 12(29)
  04e1484  lwz 29, 8(18)
  04e1488  addic 28, 29, 16
  04e148c  stw 28, 8(18)
  04e1490  stw 27, 16(29)
  04e1494  lwz 24, 8(18)
  04e1498  ori 29, 25, 6664
  04e149c  lis 28, 16387
  04e14a0  lis 25, 4
  04e14a4  ori 28, 28, 1028
  04e14a8  stw 26, 4(24)
  04e14ac  lwz 26, 8(18)
  04e14b0  addic 24, 26, 8
  04e14b4  stw 24, 8(18)
  04e14b8  stw 30, 8(26)
  04e14bc  lwz 24, 8(18)
  04e14c0  ori 30, 25, 6676
  04e14c4  lis 26, 257
  04e14c8  lis 25, 4
  04e14cc  ori 26, 26, 8192
  04e14d0  stw 7, 4(24)
  04e14d4  lwz 24, 8(18)
  04e14d8  addic 23, 24, 8
  04e14dc  stw 23, 8(18)
  04e14e0  stw 29, 8(24)
  04e14e4  lwz 23, 8(18)
  04e14e8  ori 29, 25, 6684
  04e14ec  li 25, -1
  04e14f0  lis 24, 4
  04e14f4  stw 28, 4(23)
  04e14f8  lwz 28, 8(18)
  04e14fc  addic 23, 28, 8
  04e1500  stw 23, 8(18)
  04e1504  stw 30, 8(28)
  04e1508  lwz 23, 8(18)
  04e150c  ori 30, 24, 6700
  04e1510  lis 28, 4
  04e1514  lis 24, 16387
  04e1518  stw 26, 4(23)
  04e151c  lwz 23, 8(18)
  04e1520  ori 28, 28, 6696
  04e1524  addic 22, 23, 8
  04e1528  stw 22, 8(18)
  04e152c  stw 29, 8(23)
  04e1530  lwz 23, 8(18)
  04e1534  ori 29, 24, 1285
  04e1538  lis 24, 4
  04e153c  stw 25, 4(23)
  04e1540  lwz 25, 8(18)
  04e1544  ori 24, 24, 6708
  04e1548  addic 23, 25, 8
  04e154c  stw 23, 8(18)
  04e1550  stw 30, 8(25)
  04e1554  lwz 30, 8(18)
  04e1558  stw 7, 4(30)
  04e155c  lwz 30, 8(18)
  04e1560  addic 25, 30, 8
  04e1564  stw 25, 8(18)
  04e1568  stw 28, 8(30)
  04e156c  lwz 28, 8(18)
  04e1570  lis 30, 8
  04e1574  ori 30, 30, 6656
  04e1578  stw 29, 4(28)
  04e157c  lwz 29, 8(18)
  04e1580  addic 28, 29, 8
  04e1584  stw 28, 8(18)
  04e1588  stw 24, 8(29)
  04e158c  lwz 28, 8(18)
  04e1590  lis 29, 4
  04e1594  ori 29, 29, 6680
  04e1598  stw 26, 4(28)
  04e159c  lwz 28, 8(18)
  04e15a0  addic 28, 28, 8
  04e15a4  stw 28, 8(18)
  04e15a8  lbz 28, 6920(19)
  04e15ac  lbz 26, 8716(19)
  04e15b0  rlwimi 28, 11, 0, 25, 25
  04e15b4  rlwimi 26, 11, 0, 25, 25
  04e15b8  lbz 25, 6934(19)
  04e15bc  lwz 24, 6940(19)
  04e15c0  stb 28, 6920(19)
  04e15c4  stb 26, 8716(19)
  04e15c8  rlwinm 28, 28, 8, 16, 23
  04e15cc  addic 26, 25, 1
  04e15d0  lbz 25, 6921(19)
  04e15d4  lbz 23, 6923(19)
  04e15d8  ori 26, 26, 8
  04e15dc  lbz 22, 6922(19)
  04e15e0  rlwimi 26, 25, 16, 8, 15
  04e15e4  slwi 22, 22, 4
  04e15e8  lhz 25, 6930(19)
  04e15ec  slwi 23, 23, 2
  04e15f0  lhz 21, 6928(19)
  04e15f4  or 28, 26, 28
  04e15f8  lwz 26, 6924(19)
  04e15fc  or 23, 23, 22
  04e1600  lwz 20, 6936(19)
  04e1604  lhz 22, 6932(19)
  04e1608  rlwimi 25, 21, 16, 0, 15
  04e160c  or 28, 28, 23
  04e1610  lwz 23, 8(18)
  04e1614  stw 30, 0(23)
  04e1618  lwz 30, 8(18)
  04e161c  stw 24, 4(30)
  04e1620  lwz 30, 8(18)
  04e1624  stw 28, 8(30)
  04e1628  lwz 30, 8(18)
  04e162c  addic 28, 30, 12
  04e1630  stw 28, 8(18)
  04e1634  stw 29, 12(30)
  04e1638  lis 28, 4
  04e163c  lwz 24, 8(18)
  04e1640  lis 29, 4
  04e1644  slwi 30, 22, 20
  04e1648  ori 29, 29, 6208
  04e164c  or 30, 20, 30
  04e1650  ori 28, 28, 6672
  04e1654  stw 25, 4(24)
  04e1658  lwz 25, 8(18)
  04e165c  addic 24, 25, 8
  04e1660  stw 24, 8(18)
  04e1664  stw 29, 8(25)
  04e1668  lwz 25, 8(18)
  04e166c  lis 29, 8
  04e1670  ori 29, 29, 6688
  04e1674  stw 30, 4(25)
  04e1678  lwz 30, 8(18)
  04e167c  addic 25, 30, 8
  04e1680  stw 25, 8(18)
  04e1684  stw 28, 8(30)
  04e1688  lwz 28, 8(18)
  04e168c  lis 30, 4
  04e1690  ori 30, 30, 6712
  04e1694  stw 26, 4(28)
  04e1698  lwz 28, 8(18)
  04e169c  lwz 25, 8736(19)
  04e16a0  addic 26, 28, 8
  04e16a4  stw 26, 8(18)
  04e16a8  lbz 26, 8730(19)
  04e16ac  lbz 24, 8717(19)
  04e16b0  addic 26, 26, 1
  04e16b4  lbz 23, 8716(19)
  04e16b8  lbz 22, 8719(19)
  04e16bc  ori 26, 26, 8
  04e16c0  lbz 21, 8718(19)
  04e16c4  slwi 23, 23, 8
  04e16c8  rlwimi 26, 24, 16, 8, 15
  04e16cc  slwi 22, 22, 2
  04e16d0  lhz 24, 8726(19)
  04e16d4  slwi 21, 21, 4
  04e16d8  lhz 20, 8724(19)
  04e16dc  or 26, 26, 23
  04e16e0  lwz 23, 8720(19)
  04e16e4  or 22, 22, 21
  04e16e8  lwz 21, 8732(19)
  04e16ec  lhz 16, 8728(19)
  04e16f0  or 26, 26, 22
  04e16f4  stw 29, 8(28)
  04e16f8  rlwimi 24, 20, 16, 0, 15
  04e16fc  lwz 29, 8(18)
  04e1700  stw 25, 4(29)
  04e1704  lwz 29, 8(18)
  04e1708  stw 26, 8(29)
  04e170c  lwz 29, 8(18)
  04e1710  addic 28, 29, 12
  04e1714  stw 28, 8(18)
  04e1718  stw 30, 12(29)
  04e171c  lwz 26, 8(18)
  04e1720  lis 29, 4
  04e1724  slwi 30, 16, 20
  04e1728  ori 29, 29, 6212
  04e172c  or 30, 21, 30
  04e1730  lis 28, 4
  04e1734  stw 24, 4(26)
  04e1738  lwz 26, 8(18)
  04e173c  ori 28, 28, 6704
  04e1740  addic 25, 26, 8
  04e1744  stw 25, 8(18)
  04e1748  stw 29, 8(26)
  04e174c  lwz 25, 8(18)
  04e1750  lis 29, 4
  04e1754  lis 26, -32762
  04e1758  ori 29, 29, 800
  04e175c  ori 26, 26, 32774
  04e1760  stw 30, 4(25)
  04e1764  lwz 30, 8(18)
  04e1768  addic 25, 30, 8
  04e176c  stw 25, 8(18)
  04e1770  stw 28, 8(30)
  04e1774  lwz 25, 8(18)
  04e1778  lis 30, 8
  04e177c  lis 28, 1
  04e1780  ori 30, 30, 788
  04e1784  ori 28, 28, 1
  04e1788  stw 23, 4(25)
  04e178c  lwz 25, 8(18)
  04e1790  addic 24, 25, 8
  04e1794  stw 24, 8(18)
  04e1798  stw 29, 8(25)
  04e179c  lwz 24, 8(18)
  04e17a0  lis 29, 4
  04e17a4  li 25, 1029
  04e17a8  ori 29, 29, 6192
  04e17ac  stw 26, 4(24)
  04e17b0  lwz 26, 8(18)
  04e17b4  addic 24, 26, 8
  04e17b8  stw 24, 8(18)
  04e17bc  stw 30, 8(26)
  04e17c0  lwz 30, 8(18)
  04e17c4  stw 28, 4(30)
  04e17c8  lwz 30, 8(18)
  04e17cc  stw 28, 8(30)
  04e17d0  lwz 30, 8(18)
  04e17d4  addic 28, 30, 12
  04e17d8  stw 28, 8(18)
  04e17dc  stw 29, 12(30)
  04e17e0  lwz 30, 8(18)
  04e17e4  stw 25, 4(30)
  04e17e8  lwz 30, 8(18)
  04e17ec  lwzx 4, 19, 4
  04e17f0  addic 29, 30, 8
  04e17f4  or 4, 4, 7
  04e17f8  stw 29, 8(18)
  04e17fc  stw 5, 8(30)
  04e1800  lwz 5, 8(18)
  04e1804  stw 4, 4(5)
  04e1808  lwz 4, 8(18)
  04e180c  addic 5, 4, 8
  04e1810  stw 5, 8(18)
  04e1814  lwzx 3, 19, 3
  04e1818  stw 8, 8(4)
  04e181c  lwz 4, 8(18)
  04e1820  stw 3, 4(4)
  04e1824  lwz 3, 8(18)
  04e1828  stw 9, 8(3)
  04e182c  lwz 3, 8(18)
  04e1830  addic 4, 3, 12
  04e1834  stw 4, 8(18)
  04e1838  stw 6, 12(3)
  04e183c  lwz 3, 8(18)
  04e1840  stw 11, 4(3)
  04e1844  lwz 3, 8(18)
  04e1848  stw 11, 8(3)
  04e184c  lwz 3, 8(18)
  04e1850  stw 11, 12(3)
  04e1854  lwz 3, 8(18)
  04e1858  stw 12, 16(3)
  04e185c  lwz 3, 8(18)
  04e1860  stw 17, 20(3)
  04e1864  lwz 3, 8(18)
  04e1868  addic 4, 3, 28
  04e186c  stw 4, 8(18)
  04e1870  stw 10, 24(3)
  04e1874  lwz 4, 8(18)
  04e1878  lis 3, 4
  04e187c  addic 5, 4, 4
  04e1880  ori 3, 3, 808
  04e1884  stw 5, 8(18)
  04e1888  stw 31, 0(4)
  04e188c  lwz 5, 8(18)
  04e1890  lis 4, 4
  04e1894  ori 4, 4, 6204
  04e1898  stw 12, 0(5)
  04e189c  lwz 5, 8(18)
  04e18a0  stw 11, 4(5)
  04e18a4  lwz 5, 8(18)
  04e18a8  addic 6, 5, 8
  04e18ac  stw 6, 8(18)
  04e18b0  stw 3, 8(5)
  04e18b4  lwz 5, 8(18)
  04e18b8  lis 3, 257
  04e18bc  ori 3, 3, 257
  04e18c0  stw 11, 4(5)
  04e18c4  lwz 5, 8(18)
  04e18c8  addic 6, 5, 8
  04e18cc  stw 6, 8(18)
  04e18d0  stw 4, 8(5)
  04e18d4  lwz 4, 8(18)
  04e18d8  stw 11, 4(4)
  04e18dc  lwz 4, 8(18)
  04e18e0  addic 5, 4, 8
  04e18e4  stw 5, 8(18)
  04e18e8  stw 27, 8(4)
  04e18ec  lwz 4, 8(18)
  04e18f0  stw 3, 4(4)
  04e18f4  lwz 3, 8(18)
  04e18f8  addic 3, 3, 8
  04e18fc  stw 3, 8(18)
  04e1900  li 0, 304
  04e1904  lvx 28, 1, 0
  04e1908  addic 0, 0, 16
  04e190c  lvx 29, 1, 0
  04e1910  addic 0, 0, 16
  04e1914  lvx 30, 1, 0
  04e1918  addic 0, 0, 16
  04e191c  lvx 31, 1, 0
  04e1920  ld 0, 512(1)
  04e1924  mtlr 0
  04e1928  ld 16, 368(1)
  04e192c  ld 17, 376(1)
  04e1930  ld 18, 384(1)
  04e1934  ld 19, 392(1)
  04e1938  ld 20, 400(1)
  04e193c  ld 21, 408(1)
  04e1940  ld 22, 416(1)
  04e1944  ld 23, 424(1)
  04e1948  ld 24, 432(1)
  04e194c  ld 25, 440(1)
  04e1950  ld 26, 448(1)
  04e1954  ld 27, 456(1)
  04e1958  ld 28, 464(1)
  04e195c  ld 29, 472(1)
  04e1960  ld 30, 480(1)
  04e1964  ld 31, 488(1)
  04e1968  addi 1, 1, 496
  04e196c  blr

FUN_004e1970:   # 0x4e1970, 0xf0 bytes
  04e1970  stdu 1, -144(1)
  04e1974  mflr 0
  04e1978  std 0, 160(1)
  04e197c  ori 9, 8, 0
  04e1980  ori 10, 7, 0
  04e1984  ori 8, 3, 0
  04e1988  ori 7, 4, 0
  04e198c  lwz 3, 6764(3)
  04e1990  ori 4, 10, 0
  04e1994  clrlwi 10, 3, 31
  04e1998  ori 11, 6, 0
  04e199c  ori 6, 5, 0
  04e19a0  cmpwi 10, 0
  04e19a4  ori 5, 11, 0
  04e19a8  std 31, 136(1)
  04e19ac  std 30, 128(1)
  04e19b0  std 29, 120(1)
  04e19b4  ori 3, 9, 0
  04e19b8  bf 2, 0x4e1a44
  04e19bc  sldi 31, 7, 2
  04e19c0  ori 9, 3, 0
  04e19c4  ori 10, 5, 0
  04e19c8  lis 3, 1
  04e19cc  addc 5, 8, 31
  04e19d0  ori 3, 3, 34016
  04e19d4  clrldi 5, 5, 32
  04e19d8  sldi 7, 7, 13
  04e19dc  addc 30, 5, 3
  04e19e0  addc 3, 8, 7
  04e19e4  sldi 5, 9, 2
  04e19e8  clrldi 5, 5, 32
  04e19ec  lwz 7, 0(30)
  04e19f0  slwi 7, 7, 5
  04e19f4  addc 3, 3, 7
  04e19f8  clrldi 29, 3, 32
  04e19fc  addic 7, 3, 9440
  04e1a00  clrldi 3, 7, 32
  04e1a04  stw 6, 9464(29)
  04e1a08  stw 10, 9456(29)
  04e1a0c  stb 9, 9468(29)
  04e1a10  bl 0x5c5ad0
  04e1a14  nop
  04e1a18  lis 3, 144
  04e1a1c  extsw 4, 31
  04e1a20  addic 3, 3, -23532
  04e1a24  lwzx 3, 3, 4
  04e1a28  lwz 4, 8(3)
  04e1a2c  lwz 3, 0(3)
  04e1a30  subc 3, 4, 3
  04e1a34  stw 3, 9460(29)
  04e1a38  lwz 3, 0(30)
  04e1a3c  addic 3, 3, 1
  04e1a40  stw 3, 0(30)
  04e1a44  ld 0, 160(1)
  04e1a48  mtlr 0
  04e1a4c  ld 29, 120(1)
  04e1a50  ld 30, 128(1)
  04e1a54  ld 31, 136(1)
  04e1a58  addi 1, 1, 144
  04e1a5c  blr

FUN_004e1b80:   # 0x4e1b80, 0xca8 bytes
  04e1b80  stdu 1, -1216(1)
  04e1b84  mflr 0
  04e1b88  std 0, 1232(1)
  04e1b8c  stfd 30, 1200(1)
  04e1b90  stfd 31, 1208(1)
  04e1b94  addi 0, 1, 944
  04e1b98  stvx 21, 0, 0
  04e1b9c  addic 0, 0, 16
  04e1ba0  stvx 22, 0, 0
  04e1ba4  addic 0, 0, 16
  04e1ba8  stvx 23, 0, 0
  04e1bac  addic 0, 0, 16
  04e1bb0  stvx 24, 0, 0
  04e1bb4  addic 0, 0, 16
  04e1bb8  stvx 25, 0, 0
  04e1bbc  addic 0, 0, 16
  04e1bc0  stvx 26, 0, 0
  04e1bc4  addic 0, 0, 16
  04e1bc8  stvx 27, 0, 0
  04e1bcc  addic 0, 0, 16
  04e1bd0  stvx 28, 0, 0
  04e1bd4  addic 0, 0, 16
  04e1bd8  stvx 29, 0, 0
  04e1bdc  addic 0, 0, 16
  04e1be0  stvx 30, 0, 0
  04e1be4  addic 0, 0, 16
  04e1be8  stvx 31, 0, 0
  04e1bec  std 31, 1192(1)
  04e1bf0  std 25, 1144(1)
  04e1bf4  ori 31, 3, 0
  04e1bf8  lis 25, 144
  04e1bfc  std 29, 1176(1)
  04e1c00  fmr 30, 2
  04e1c04  ori 29, 4, 0
  04e1c08  fmr 31, 1
  04e1c0c  addic 25, 25, -23532
  04e1c10  lis 4, 78
  04e1c14  std 30, 1184(1)
  04e1c18  lwz 3, 0(31)
  04e1c1c  ori 30, 5, 0
  04e1c20  std 28, 1168(1)
  04e1c24  lwz 6, 4(31)
  04e1c28  addi 28, 4, 6752
  04e1c2c  li 5, 928
  04e1c30  lwz 4, 20(25)
  04e1c34  lwz 8, 8(31)
  04e1c38  lwz 9, 16(3)
  04e1c3c  std 2, 40(1)
  04e1c40  ori 3, 31, 0
  04e1c44  stvx 2, 5, 1
  04e1c48  ori 5, 6, 0
  04e1c4c  ori 6, 8, 0
  04e1c50  lwz 7, 0(9)
  04e1c54  lwz 2, 4(9)
  04e1c58  std 27, 1160(1)
  04e1c5c  std 26, 1152(1)
  04e1c60  std 24, 1136(1)
  04e1c64  std 23, 1128(1)
  04e1c68  std 22, 1120(1)
  04e1c6c  mtctr 7
  04e1c70  bcctrl 20, 30
  04e1c74  lwz 3, 20(25)
  04e1c78  lis 4, 4
  04e1c7c  ld 2, 40(1)
  04e1c80  lis 5, 275
  04e1c84  ori 4, 4, 404
  04e1c88  lis 7, 4
  04e1c8c  lwz 6, 8(3)
  04e1c90  stw 4, 0(6)
  04e1c94  lbz 4, 8504(31)
  04e1c98  lwz 6, 8(3)
  04e1c9c  subc 4, 4, 5
  04e1ca0  stw 4, 4(6)
  04e1ca4  lwz 4, 8(3)
  04e1ca8  addic 6, 4, 8
  04e1cac  stw 6, 8(3)
  04e1cb0  ori 6, 7, 396
  04e1cb4  stw 6, 8(4)
  04e1cb8  lbz 4, 8505(31)
  04e1cbc  lis 6, 8
  04e1cc0  lwz 7, 8(3)
  04e1cc4  subc 4, 4, 5
  04e1cc8  ori 6, 6, 436
  04e1ccc  stw 4, 4(7)
  04e1cd0  lwz 4, 8(3)
  04e1cd4  addic 7, 4, 8
  04e1cd8  stw 7, 8(3)
  04e1cdc  stw 6, 8(4)
  04e1ce0  lbz 4, 8506(31)
  04e1ce4  lis 6, 4
  04e1ce8  lwz 8, 8(3)
  04e1cec  lis 7, 24
  04e1cf0  subc 4, 4, 5
  04e1cf4  ori 6, 6, 408
  04e1cf8  stw 4, 4(8)
  04e1cfc  lbz 4, 8507(31)
  04e1d00  lwz 8, 8(3)
  04e1d04  subc 4, 4, 5
  04e1d08  stw 4, 8(8)
  04e1d0c  lwz 4, 8(3)
  04e1d10  addic 8, 4, 12
  04e1d14  stw 8, 8(3)
  04e1d18  stw 6, 12(4)
  04e1d1c  lbz 4, 8541(31)
  04e1d20  li 6, 31
  04e1d24  subc 4, 4, 5
  04e1d28  ori 5, 7, 520
  04e1d2c  lwz 7, 8(3)
  04e1d30  stw 4, 4(7)
  04e1d34  lwz 4, 8(3)
  04e1d38  lhz 8, 8552(31)
  04e1d3c  addic 7, 4, 8
  04e1d40  cntlzw 8, 8
  04e1d44  stw 7, 8(3)
  04e1d48  lhz 7, 8554(31)
  04e1d4c  stw 5, 8(4)
  04e1d50  cntlzw 7, 7
  04e1d54  lbz 5, 8540(31)
  04e1d58  subc 4, 6, 8
  04e1d5c  lbz 8, 8502(31)
  04e1d60  subc 6, 6, 7
  04e1d64  lbz 7, 8500(31)
  04e1d68  slwi 5, 5, 5
  04e1d6c  lbz 9, 8501(31)
  04e1d70  slwi 7, 7, 8
  04e1d74  or 5, 8, 5
  04e1d78  slwi 8, 9, 12
  04e1d7c  slwi 4, 4, 16
  04e1d80  or 7, 7, 8
  04e1d84  slwi 6, 6, 24
  04e1d88  or 5, 5, 7
  04e1d8c  or 4, 5, 4
  04e1d90  lwz 5, 8(3)
  04e1d94  or 4, 4, 6
  04e1d98  lis 6, 4
  04e1d9c  stw 4, 4(5)
  04e1da0  lwz 4, 8(3)
  04e1da4  lwz 5, 8524(31)
  04e1da8  stw 5, 8(4)
  04e1dac  lwz 4, 8(3)
  04e1db0  lwz 5, 8508(31)
  04e1db4  stw 5, 12(4)
  04e1db8  lwz 4, 8(3)
  04e1dbc  lwz 5, 8544(31)
  04e1dc0  stw 5, 16(4)
  04e1dc4  lwz 4, 8(3)
  04e1dc8  lwz 5, 8512(31)
  04e1dcc  stw 5, 20(4)
  04e1dd0  lwz 4, 8(3)
  04e1dd4  lwz 5, 8528(31)
  04e1dd8  stw 5, 24(4)
  04e1ddc  lwz 4, 8(3)
  04e1de0  addic 5, 4, 28
  04e1de4  stw 5, 8(3)
  04e1de8  ori 5, 6, 556
  04e1dec  stw 5, 28(4)
  04e1df0  lwz 4, 8548(31)
  04e1df4  lis 5, 16
  04e1df8  lwz 6, 8(3)
  04e1dfc  ori 5, 5, 640
  04e1e00  stw 4, 4(6)
  04e1e04  lwz 4, 8(3)
  04e1e08  addic 6, 4, 8
  04e1e0c  stw 6, 8(3)
  04e1e10  stw 5, 8(4)
  04e1e14  lwz 4, 8532(31)
  04e1e18  lwz 7, 8(3)
  04e1e1c  lis 5, 4
  04e1e20  lis 6, 4
  04e1e24  ori 5, 5, 544
  04e1e28  stw 4, 4(7)
  04e1e2c  lwz 4, 8(3)
  04e1e30  lwz 7, 8536(31)
  04e1e34  stw 7, 8(4)
  04e1e38  lwz 4, 8(3)
  04e1e3c  lwz 7, 8516(31)
  04e1e40  stw 7, 12(4)
  04e1e44  lwz 4, 8(3)
  04e1e48  lwz 7, 8520(31)
  04e1e4c  stw 7, 16(4)
  04e1e50  lwz 4, 8(3)
  04e1e54  addic 7, 4, 20
  04e1e58  stw 7, 8(3)
  04e1e5c  stw 5, 20(4)
  04e1e60  lbz 4, 8503(31)
  04e1e64  ori 5, 6, 696
  04e1e68  lwz 7, 8(3)
  04e1e6c  lis 6, 8
  04e1e70  ori 6, 6, 512
  04e1e74  stw 4, 4(7)
  04e1e78  lwz 4, 8(3)
  04e1e7c  addic 7, 4, 8
  04e1e80  stw 7, 8(3)
  04e1e84  stw 5, 8(4)
  04e1e88  lhz 4, 8556(31)
  04e1e8c  lhz 5, 8558(31)
  04e1e90  lwz 7, 8(3)
  04e1e94  rlwimi 4, 5, 16, 0, 15
  04e1e98  lis 5, 4
  04e1e9c  ori 5, 5, 7560
  04e1ea0  stw 4, 4(7)
  04e1ea4  lwz 4, 8(3)
  04e1ea8  addic 7, 4, 8
  04e1eac  stw 7, 8(3)
  04e1eb0  stw 6, 8(4)
  04e1eb4  lhz 4, 8556(31)
  04e1eb8  lhz 6, 8552(31)
  04e1ebc  lwz 8, 8(3)
  04e1ec0  rlwimi 4, 6, 16, 0, 15
  04e1ec4  lis 6, 4
  04e1ec8  li 7, 1
  04e1ecc  stw 4, 4(8)
  04e1ed0  lhz 4, 8558(31)
  04e1ed4  lhz 8, 8554(31)
  04e1ed8  lwz 9, 8(3)
  04e1edc  rlwimi 4, 8, 16, 0, 15
  04e1ee0  ori 6, 6, 784
  04e1ee4  stw 4, 8(9)
  04e1ee8  lwz 4, 8(3)
  04e1eec  addic 8, 4, 12
  04e1ef0  li 10, 208
  04e1ef4  stw 8, 8(3)
  04e1ef8  stw 5, 12(4)
  04e1efc  lhz 4, 8554(31)
  04e1f00  lwz 9, 8(3)
  04e1f04  rlwinm 5, 4, 20, 31, 31
  04e1f08  subc 4, 4, 5
  04e1f0c  ori 4, 4, 4096
  04e1f10  lis 5, 4
  04e1f14  li 8, 0
  04e1f18  stw 4, 4(9)
  04e1f1c  lwz 4, 8(3)
  04e1f20  addic 4, 4, 8
  04e1f24  ori 5, 5, 2672
  04e1f28  stw 4, 8(3)
  04e1f2c  lwz 3, 20(25)
  04e1f30  li 9, 192
  04e1f34  vspltisw 22, 0
  04e1f38  li 11, 48
  04e1f3c  lwz 4, 8(3)
  04e1f40  stw 6, 0(4)
  04e1f44  lwz 4, 8(3)
  04e1f48  lis 6, 4
  04e1f4c  stw 7, 4(4)
  04e1f50  lwz 4, 8(3)
  04e1f54  li 7, 176
  04e1f58  addic 4, 4, 8
  04e1f5c  stw 4, 8(3)
  04e1f60  lwz 3, 20(25)
  04e1f64  lwz 4, 8(3)
  04e1f68  stw 5, 0(4)
  04e1f6c  lwz 4, 8(3)
  04e1f70  ori 5, 6, 804
  04e1f74  lis 6, 1
  04e1f78  stw 8, 4(4)
  04e1f7c  lwz 4, 8(3)
  04e1f80  addic 4, 4, 8
  04e1f84  stw 4, 8(3)
  04e1f88  lwz 3, 20(25)
  04e1f8c  ori 4, 6, 257
  04e1f90  li 6, 160
  04e1f94  lwz 8, 8(3)
  04e1f98  stw 5, 0(8)
  04e1f9c  lwz 5, 8(3)
  04e1fa0  li 8, 144
  04e1fa4  stw 4, 4(5)
  04e1fa8  lwz 4, 8(3)
  04e1fac  li 5, 16
  04e1fb0  lvx 2, 6, 31
  04e1fb4  addic 4, 4, 8
  04e1fb8  lvx 3, 7, 31
  04e1fbc  li 6, 32
  04e1fc0  lvx 4, 9, 31
  04e1fc4  li 7, 96
  04e1fc8  lvx 5, 10, 31
  04e1fcc  stw 4, 8(3)
  04e1fd0  li 3, 64
  04e1fd4  lvx 10, 0, 28
  04e1fd8  li 4, 80
  04e1fdc  lvx 11, 11, 28
  04e1fe0  vmrglw 8, 2, 3
  04e1fe4  vmrglw 9, 4, 5
  04e1fe8  vmrghw 6, 2, 3
  04e1fec  lvx 0, 3, 28
  04e1ff0  lvx 1, 4, 28
  04e1ff4  li 3, 112
  04e1ff8  lvx 15, 5, 28
  04e1ffc  li 4, 128
  04e2000  lvx 17, 6, 28
  04e2004  vmrghw 7, 4, 5
  04e2008  lvx 18, 7, 28
  04e200c  vperm 12, 4, 2, 10
  04e2010  vperm 13, 5, 3, 11
  04e2014  lvx 30, 8, 28
  04e2018  vperm 14, 8, 9, 0
  04e201c  vperm 16, 9, 8, 1
  04e2020  vperm 31, 4, 2, 18
  04e2024  vmaddfp 12, 12, 13, 22
  04e2028  vperm 24, 5, 3, 30
  04e202c  vperm 28, 6, 7, 0
  04e2030  vperm 27, 7, 6, 1
  04e2034  vmaddfp 13, 14, 16, 22
  04e2038  vsldoi 26, 16, 16, 8
  04e203c  vmaddfp 16, 31, 24, 22
  04e2040  lvx 23, 3, 28
  04e2044  li 5, 224
  04e2048  vmaddfp 31, 28, 27, 22
  04e204c  vsldoi 29, 14, 14, 8
  04e2050  lvx 21, 4, 28
  04e2054  li 3, 192
  04e2058  vperm 19, 4, 2, 17
  04e205c  li 4, 208
  04e2060  vperm 25, 5, 3, 15
  04e2064  vperm 0, 7, 6, 0
  04e2068  vperm 1, 6, 7, 1
  04e206c  vperm 14, 4, 2, 21
  04e2070  vperm 28, 5, 3, 23
  04e2074  vnmsubfp 12, 25, 19, 12
  04e2078  vnmsubfp 13, 29, 26, 13
  04e207c  vperm 15, 4, 2, 15
  04e2080  vperm 17, 3, 5, 17
  04e2084  vperm 10, 3, 5, 10
  04e2088  vnmsubfp 14, 28, 14, 16
  04e208c  vnmsubfp 0, 0, 1, 31
  04e2090  lvx 1, 3, 28
  04e2094  lvx 16, 4, 28
  04e2098  lvx 19, 5, 28
  04e209c  li 3, 176
  04e20a0  vmaddfp 15, 15, 17, 22
  04e20a4  li 4, 160
  04e20a8  vperm 31, 4, 2, 23
  04e20ac  vperm 11, 4, 2, 11
  04e20b0  vperm 2, 4, 2, 30
  04e20b4  vmrghw 29, 12, 13
  04e20b8  vperm 19, 12, 13, 19
  04e20bc  lvx 28, 3, 28
  04e20c0  lvx 27, 4, 28
  04e20c4  vperm 1, 14, 0, 1
  04e20c8  vperm 16, 14, 0, 16
  04e20cc  vperm 26, 6, 7, 28
  04e20d0  vperm 4, 8, 9, 28
  04e20d4  vmaddfp 1, 1, 29, 22
  04e20d8  vperm 29, 3, 5, 21
  04e20dc  vnmsubfp 10, 10, 11, 15
  04e20e0  vperm 3, 3, 5, 18
  04e20e4  vsldoi 30, 26, 26, 4
  04e20e8  vperm 17, 6, 7, 27
  04e20ec  vmaddfp 31, 31, 29, 22
  04e20f0  vperm 29, 7, 6, 27
  04e20f4  vperm 6, 7, 6, 28
  04e20f8  vmaddfp 18, 17, 12, 22
  04e20fc  li 3, 240
  04e2100  vsldoi 17, 17, 17, 4
  04e2104  slwi 5, 29, 6
  04e2108  vmaddfp 5, 16, 19, 1
  04e210c  vperm 1, 8, 9, 27
  04e2110  vsldoi 16, 4, 4, 4
  04e2114  vmaddfp 19, 30, 13, 22
  04e2118  vsldoi 30, 1, 1, 4
  04e211c  vnmsubfp 2, 3, 2, 31
  04e2120  vmaddfp 1, 1, 14, 22
  04e2124  vperm 3, 9, 8, 27
  04e2128  vmaddfp 16, 16, 0, 22
  04e212c  vperm 8, 9, 8, 28
  04e2130  addc 5, 31, 5
  04e2134  li 6, 576
  04e2138  vspltw 7, 5, 0
  04e213c  vspltw 11, 5, 1
  04e2140  vspltw 5, 5, 2
  04e2144  vnmsubfp 9, 26, 12, 19
  04e2148  vsubfp 7, 7, 11
  04e214c  vnmsubfp 12, 30, 0, 1
  04e2150  vnmsubfp 4, 4, 14, 16
  04e2154  vnmsubfp 11, 17, 13, 18
  04e2158  lvlx 13, 3, 28
  04e215c  clrldi 3, 5, 32
  04e2160  li 5, 560
  04e2164  addic 4, 3, 544
  04e2168  vmaddfp 6, 6, 10, 9
  04e216c  vsubfp 5, 7, 5
  04e2170  vnmsubfp 3, 3, 2, 12
  04e2174  vmaddfp 2, 8, 2, 4
  04e2178  vnmsubfp 7, 29, 10, 11
  04e217c  vspltw 11, 13, 0
  04e2180  lvx 8, 0, 4
  04e2184  lvx 9, 5, 3
  04e2188  li 4, 592
  04e218c  lvx 10, 6, 3
  04e2190  li 5, 784
  04e2194  vrefp 4, 5
  04e2198  li 6, 800
  04e219c  li 7, 816
  04e21a0  vnmsubfp 5, 5, 4, 11
  04e21a4  vmaddfp 4, 5, 4, 4
  04e21a8  lvx 5, 4, 3
  04e21ac  li 4, 768
  04e21b0  lis 3, 271
  04e21b4  addic 26, 3, -5368
  04e21b8  addic 26, 26, 1056
  04e21bc  ori 3, 26, 0
  04e21c0  vmaddfp 7, 7, 4, 22
  04e21c4  vmaddfp 6, 6, 4, 22
  04e21c8  vmaddfp 3, 3, 4, 22
  04e21cc  vmaddfp 2, 2, 4, 22
  04e21d0  vspltw 11, 7, 1
  04e21d4  vspltw 13, 6, 1
  04e21d8  vspltw 4, 7, 0
  04e21dc  vspltw 1, 3, 0
  04e21e0  vmaddfp 11, 9, 11, 22
  04e21e4  vspltw 14, 3, 1
  04e21e8  vspltw 12, 6, 0
  04e21ec  vmaddfp 13, 9, 13, 22
  04e21f0  vspltw 15, 2, 0
  04e21f4  vmaddfp 4, 8, 4, 22
  04e21f8  vspltw 16, 2, 1
  04e21fc  vmaddfp 1, 8, 1, 22
  04e2200  vmaddfp 14, 9, 14, 22
  04e2204  vspltw 0, 7, 2
  04e2208  vmaddfp 12, 8, 12, 22
  04e220c  vspltw 7, 7, 3
  04e2210  vmaddfp 8, 8, 15, 22
  04e2214  vspltw 17, 6, 2
  04e2218  vmaddfp 9, 9, 16, 22
  04e221c  vspltw 6, 6, 3
  04e2220  vspltw 15, 3, 2
  04e2224  vspltw 3, 3, 3
  04e2228  vmaddfp 7, 5, 7, 11
  04e222c  vspltw 11, 2, 2
  04e2230  vspltw 2, 2, 3
  04e2234  vmaddfp 6, 5, 6, 13
  04e2238  vmaddfp 4, 10, 0, 4
  04e223c  vmaddfp 13, 10, 15, 1
  04e2240  vmaddfp 3, 5, 3, 14
  04e2244  vmaddfp 12, 10, 17, 12
  04e2248  vmaddfp 8, 10, 11, 8
  04e224c  vmaddfp 2, 5, 2, 9
  04e2250  vaddfp 4, 4, 7
  04e2254  vaddfp 3, 13, 3
  04e2258  vaddfp 5, 12, 6
  04e225c  vaddfp 2, 8, 2
  04e2260  vmrghw 6, 4, 3
  04e2264  vmrglw 3, 4, 3
  04e2268  vmrghw 4, 5, 2
  04e226c  vmrglw 2, 5, 2
  04e2270  vmrghw 5, 6, 4
  04e2274  vmrglw 4, 6, 4
  04e2278  vmrghw 6, 3, 2
  04e227c  vmrglw 2, 3, 2
  04e2280  stvx 5, 4, 1
  04e2284  stvx 4, 5, 1
  04e2288  stvx 6, 6, 1
  04e228c  stvx 2, 7, 1
  04e2290  bl 0x50f434
  04e2294  nop
  04e2298  ori 29, 3, 0
  04e229c  li 28, -1
  04e22a0  cmpwi 29, 0
  04e22a4  ori 24, 28, 0
  04e22a8  bt 2, 0x4e230c
  04e22ac  lis 23, 102
  04e22b0  li 27, 0
  04e22b4  addic 23, 23, -27816
  04e22b8  li 4, 127
  04e22bc  addic 22, 1, 640
  04e22c0  ori 3, 26, 0
  04e22c4  addic 6, 1, 864
  04e22c8  stw 4, 864(1)
  04e22cc  ori 5, 22, 0
  04e22d0  ori 4, 27, 0
  04e22d4  bl 0x50f6e4
  04e22d8  nop
  04e22dc  ori 3, 23, 0
  04e22e0  ori 4, 22, 0
  04e22e4  bl 0x5cc784
  04e22e8  nop
  04e22ec  cmpwi 3, 0
  04e22f0  bf 2, 0x4e22fc
  04e22f4  ori 28, 27, 0
  04e22f8  b 0x4e230c
  04e22fc  addic 27, 27, 1
  04e2300  extsw 27, 27
  04e2304  cmplw 27, 29
  04e2308  bt 0, 0x4e22b8
  04e230c  ori 3, 31, 0
  04e2310  clrldi 6, 28, 32
  04e2314  lwz 4, 20(25)
  04e2318  addic 7, 1, 768
  04e231c  li 5, 22
  04e2320  li 8, 4
  04e2324  bl 0x4dd6f0
  04e2328  ori 3, 26, 0
  04e232c  bl 0x50f434
  04e2330  nop
  04e2334  ori 28, 3, 0
  04e2338  ori 29, 24, 0
  04e233c  cmpwi 28, 0
  04e2340  bt 2, 0x4e23a4
  04e2344  lis 23, 102
  04e2348  li 27, 0
  04e234c  addic 23, 23, -27800
  04e2350  li 5, 127
  04e2354  addic 22, 1, 512
  04e2358  ori 3, 26, 0
  04e235c  addic 6, 1, 860
  04e2360  stw 5, 860(1)
  04e2364  ori 4, 27, 0
  04e2368  ori 5, 22, 0
  04e236c  bl 0x50f6e4
  04e2370  nop
  04e2374  ori 3, 23, 0
  04e2378  ori 4, 22, 0
  04e237c  bl 0x5cc784
  04e2380  nop
  04e2384  cmpwi 3, 0
  04e2388  bf 2, 0x4e2394
  04e238c  ori 29, 27, 0
  04e2390  b 0x4e23a4
  04e2394  addic 27, 27, 1
  04e2398  extsw 27, 27
  04e239c  cmplw 27, 28
  04e23a0  bt 0, 0x4e2350
  04e23a4  ori 3, 31, 0
  04e23a8  lwz 4, 20(25)
  04e23ac  clrldi 6, 29, 32
  04e23b0  li 8, 4
  04e23b4  addic 7, 1, 784
  04e23b8  li 5, 22
  04e23bc  bl 0x4dd6f0
  04e23c0  ori 3, 26, 0
  04e23c4  bl 0x50f434
  04e23c8  nop
  04e23cc  ori 29, 3, 0
  04e23d0  ori 28, 24, 0
  04e23d4  cmpwi 29, 0
  04e23d8  bt 2, 0x4e243c
  04e23dc  lis 23, 102
  04e23e0  li 27, 0
  04e23e4  addic 23, 23, -27784
  04e23e8  li 4, 127
  04e23ec  addic 22, 1, 384
  04e23f0  ori 3, 26, 0
  04e23f4  addic 6, 1, 856
  04e23f8  stw 4, 856(1)
  04e23fc  ori 5, 22, 0
  04e2400  ori 4, 27, 0
  04e2404  bl 0x50f6e4
  04e2408  nop
  04e240c  ori 3, 23, 0
  04e2410  ori 4, 22, 0
  04e2414  bl 0x5cc784
  04e2418  nop
  04e241c  cmpwi 3, 0
  04e2420  bf 2, 0x4e242c
  04e2424  ori 28, 27, 0
  04e2428  b 0x4e243c
  04e242c  addic 27, 27, 1
  04e2430  extsw 27, 27
  04e2434  cmplw 27, 29
  04e2438  bt 0, 0x4e23e8
  04e243c  ori 3, 31, 0
  04e2440  clrldi 6, 28, 32
  04e2444  lwz 4, 20(25)
  04e2448  addic 7, 1, 800
  04e244c  li 5, 22
  04e2450  li 8, 4
  04e2454  bl 0x4dd6f0
  04e2458  ori 3, 26, 0
  04e245c  bl 0x50f434
  04e2460  nop
  04e2464  ori 28, 3, 0
  04e2468  ori 29, 24, 0
  04e246c  cmpwi 28, 0
  04e2470  bt 2, 0x4e24d4
  04e2474  lis 23, 102
  04e2478  li 27, 0
  04e247c  addic 23, 23, -27768
  04e2480  li 5, 127
  04e2484  addic 22, 1, 256
  04e2488  ori 3, 26, 0
  04e248c  addic 6, 1, 852
  04e2490  stw 5, 852(1)
  04e2494  ori 4, 27, 0
  04e2498  ori 5, 22, 0
  04e249c  bl 0x50f6e4
  04e24a0  nop
  04e24a4  ori 3, 23, 0
  04e24a8  ori 4, 22, 0
  04e24ac  bl 0x5cc784
  04e24b0  nop
  04e24b4  cmpwi 3, 0
  04e24b8  bf 2, 0x4e24c4
  04e24bc  ori 29, 27, 0
  04e24c0  b 0x4e24d4
  04e24c4  addic 27, 27, 1
  04e24c8  extsw 27, 27
  04e24cc  cmplw 27, 28
  04e24d0  bt 0, 0x4e2480
  04e24d4  ori 3, 31, 0
  04e24d8  lwz 4, 20(25)
  04e24dc  clrldi 6, 29, 32
  04e24e0  li 8, 4
  04e24e4  addic 7, 1, 816
  04e24e8  li 5, 22
  04e24ec  bl 0x4dd6f0
  04e24f0  ori 3, 26, 0
  04e24f4  bl 0x50f434
  04e24f8  nop
  04e24fc  ori 29, 3, 0
  04e2500  cmpwi 29, 0
  04e2504  bt 2, 0x4e2568
  04e2508  lis 27, 102
  04e250c  li 28, 0
  04e2510  addic 27, 27, -27752
  04e2514  li 5, 127
  04e2518  addic 23, 1, 128
  04e251c  ori 3, 26, 0
  04e2520  addic 6, 1, 848
  04e2524  stw 5, 848(1)
  04e2528  ori 4, 28, 0
  04e252c  ori 5, 23, 0
  04e2530  bl 0x50f6e4
  04e2534  nop
  04e2538  ori 3, 27, 0
  04e253c  ori 4, 23, 0
  04e2540  bl 0x5cc784
  04e2544  nop
  04e2548  cmpwi 3, 0
  04e254c  bf 2, 0x4e2558
  04e2550  ori 24, 28, 0
  04e2554  b 0x4e2568
  04e2558  addic 28, 28, 1
  04e255c  extsw 28, 28
  04e2560  cmplw 28, 29
  04e2564  bt 0, 0x4e2514
  04e2568  lfs 1, 6776(31)
  04e256c  li 3, 0
  04e2570  lfs 2, 6780(31)
  04e2574  fneg 3, 1
  04e2578  fmuls 2, 1, 2
  04e257c  stw 3, 876(1)
  04e2580  stw 3, 880(1)
  04e2584  stw 3, 892(1)
  04e2588  lbz 4, 16(31)
  04e258c  stw 3, 896(1)
  04e2590  stfs 1, 884(1)
  04e2594  cmpwi 4, 0
  04e2598  fneg 1, 2
  04e259c  stfs 2, 872(1)
  04e25a0  stfs 3, 868(1)
  04e25a4  stfs 1, 888(1)
  04e25a8  bf 2, 0x4e2638
  04e25ac  li 4, 0
  04e25b0  clrldi 24, 24, 32
  04e25b4  ori 3, 31, 0
  04e25b8  ori 6, 24, 0
  04e25bc  stw 4, 900(1)
  04e25c0  stw 4, 904(1)
  04e25c4  addic 7, 1, 900
  04e25c8  lwz 9, 20(25)
  04e25cc  li 5, 22
  04e25d0  stw 4, 908(1)
  04e25d4  li 8, 4
  04e25d8  stw 4, 912(1)
  04e25dc  ori 4, 9, 0
  04e25e0  bl 0x4dd6f0
  04e25e4  lwz 3, 6792(31)
  04e25e8  cmpwi 3, 1
  04e25ec  bf 2, 0x4e2610
  04e25f0  addic 7, 1, 868
  04e25f4  ori 3, 31, 0
  04e25f8  lwz 4, 20(25)
  04e25fc  li 5, 22
  04e2600  ori 6, 24, 0
  04e2604  li 8, 4
  04e2608  bl 0x4dd6f0
  04e260c  b 0x4e270c
  04e2610  cmpwi 3, 2
  04e2614  bf 2, 0x4e270c
  04e2618  addic 7, 1, 884
  04e261c  lwz 4, 20(25)
  04e2620  ori 3, 31, 0
  04e2624  li 5, 22
  04e2628  ori 6, 24, 0
  04e262c  li 8, 4
  04e2630  bl 0x4dd6f0
  04e2634  b 0x4e270c
  04e2638  lwz 3, 6764(31)
  04e263c  clrlwi 3, 3, 31
  04e2640  cmpwi 3, 0
  04e2644  bf 2, 0x4e26f0
  04e2648  lis 3, 1
  04e264c  lis 4, 0
  04e2650  ori 3, 3, 34036
  04e2654  ori 4, 4, 50424
  04e2658  li 5, 22
  04e265c  lis 9, 0
  04e2660  lis 6, 0
  04e2664  lwzx 7, 31, 3
  04e2668  ori 9, 9, 50416
  04e266c  ori 6, 6, 50428
  04e2670  slwi 7, 7, 5
  04e2674  li 8, 4
  04e2678  addc 7, 31, 7
  04e267c  lis 10, 0
  04e2680  clrldi 7, 7, 32
  04e2684  ori 10, 10, 50408
  04e2688  li 11, 0
  04e268c  stwx 5, 7, 4
  04e2690  lis 4, 0
  04e2694  stwx 24, 7, 9
  04e2698  lis 5, 0
  04e269c  ori 4, 4, 50400
  04e26a0  stbx 8, 7, 6
  04e26a4  lwz 6, 868(1)
  04e26a8  ori 5, 5, 50404
  04e26ac  lis 8, 0
  04e26b0  lwz 9, 872(1)
  04e26b4  stwx 6, 7, 4
  04e26b8  ori 4, 8, 50412
  04e26bc  stwx 9, 7, 5
  04e26c0  stwx 11, 7, 10
  04e26c4  lis 5, 0
  04e26c8  stwx 11, 7, 4
  04e26cc  lwz 4, 20(25)
  04e26d0  ori 5, 5, 50420
  04e26d4  lwz 6, 8(4)
  04e26d8  lwz 4, 0(4)
  04e26dc  subc 4, 6, 4
  04e26e0  stwx 4, 7, 5
  04e26e4  lwzx 4, 31, 3
  04e26e8  addic 4, 4, 1
  04e26ec  stwx 4, 31, 3
  04e26f0  clrldi 6, 24, 32
  04e26f4  addic 7, 1, 884
  04e26f8  lwz 4, 20(25)
  04e26fc  ori 3, 31, 0
  04e2700  li 5, 22
  04e2704  li 8, 4
  04e2708  bl 0x4dd6f0
  04e270c  li 4, 928
  04e2710  ori 3, 31, 0
  04e2714  li 5, 15
  04e2718  lvx 31, 4, 1
  04e271c  lwz 6, 20(25)
  04e2720  ori 4, 6, 0
  04e2724  bl 0x4d83ec
  04e2728  ori 3, 31, 0
  04e272c  lwz 4, 20(25)
  04e2730  li 5, 22
  04e2734  bl 0x4d82b8
  04e2738  li 3, 4
  04e273c  lvlx 2, 0, 30
  04e2740  li 4, 8
  04e2744  fmr 1, 31
  04e2748  lis 5, 78
  04e274c  fmr 2, 30
  04e2750  li 6, 832
  04e2754  addi 5, 5, 6752
  04e2758  li 7, 256
  04e275c  lvlx 3, 3, 30
  04e2760  lvlx 4, 4, 30
  04e2764  li 8, 272
  04e2768  ori 3, 31, 0
  04e276c  lvx 5, 6, 1
  04e2770  li 4, 5
  04e2774  lvx 6, 7, 5
  04e2778  lvx 7, 8, 5
  04e277c  vperm 3, 2, 3, 6
  04e2780  vperm 4, 4, 5, 6
  04e2784  vsldoi 2, 31, 31, 0
  04e2788  vperm 3, 3, 4, 7
  04e278c  bl 0x4e0d50
  04e2790  li 0, 944
  04e2794  lvx 21, 1, 0
  04e2798  addic 0, 0, 16
  04e279c  lvx 22, 1, 0
  04e27a0  addic 0, 0, 16
  04e27a4  lvx 23, 1, 0
  04e27a8  addic 0, 0, 16
  04e27ac  lvx 24, 1, 0
  04e27b0  addic 0, 0, 16
  04e27b4  lvx 25, 1, 0
  04e27b8  addic 0, 0, 16
  04e27bc  lvx 26, 1, 0
  04e27c0  addic 0, 0, 16
  04e27c4  lvx 27, 1, 0
  04e27c8  addic 0, 0, 16
  04e27cc  lvx 28, 1, 0
  04e27d0  addic 0, 0, 16
  04e27d4  lvx 29, 1, 0
  04e27d8  addic 0, 0, 16
  04e27dc  lvx 30, 1, 0
  04e27e0  addic 0, 0, 16
  04e27e4  lvx 31, 1, 0
  04e27e8  ld 0, 1232(1)
  04e27ec  mtlr 0
  04e27f0  lfd 30, 1200(1)
  04e27f4  lfd 31, 1208(1)
  04e27f8  ld 22, 1120(1)
  04e27fc  ld 23, 1128(1)
  04e2800  ld 24, 1136(1)
  04e2804  ld 25, 1144(1)
  04e2808  ld 26, 1152(1)
  04e280c  ld 27, 1160(1)
  04e2810  ld 28, 1168(1)
  04e2814  ld 29, 1176(1)
  04e2818  ld 30, 1184(1)
  04e281c  ld 31, 1192(1)
  04e2820  addi 1, 1, 1216
  04e2824  blr

FUN_004e2860:   # 0x4e2860, 0x18c bytes
  04e2860  stdu 1, -160(1)
  04e2864  lis 4, 1
  04e2868  stfs 1, 112(1)
  04e286c  lis 5, 1
  04e2870  stfs 1, 116(1)
  04e2874  ori 4, 4, 34292
  04e2878  stfs 1, 120(1)
  04e287c  ori 6, 5, 34288
  04e2880  stfs 1, 124(1)
  04e2884  li 0, 112
  04e2888  lwzx 5, 3, 4
  04e288c  lwzx 4, 3, 6
  04e2890  lvx 3, 1, 0
  04e2894  addic 4, 4, -4
  04e2898  std 31, 152(1)
  04e289c  std 30, 144(1)
  04e28a0  std 29, 136(1)
  04e28a4  cmplw 5, 4
  04e28a8  bf 0, 0x4e29d8
  04e28ac  lis 4, 78
  04e28b0  vspltisw 5, -1
  04e28b4  li 7, 160
  04e28b8  addi 4, 4, 10288
  04e28bc  li 6, 208
  04e28c0  li 10, 176
  04e28c4  li 11, 192
  04e28c8  vslw 5, 5, 5
  04e28cc  li 9, 16
  04e28d0  lvlx 4, 0, 4
  04e28d4  lvx 6, 7, 3
  04e28d8  vspltw 4, 4, 0
  04e28dc  lvx 7, 6, 3
  04e28e0  lvx 8, 10, 3
  04e28e4  li 6, 32
  04e28e8  lvx 9, 11, 3
  04e28ec  vmaddfp 3, 3, 4, 5
  04e28f0  lvx 10, 9, 4
  04e28f4  li 7, 48
  04e28f8  vperm 4, 6, 9, 10
  04e28fc  vperm 5, 8, 7, 10
  04e2900  vspltisw 10, 0
  04e2904  lvx 11, 6, 4
  04e2908  lwz 4, 6764(3)
  04e290c  lis 6, 1
  04e2910  vmrghw 4, 4, 5
  04e2914  vperm 5, 6, 9, 11
  04e2918  vperm 6, 8, 7, 11
  04e291c  slwi 4, 4, 2
  04e2920  ori 6, 6, 34296
  04e2924  vmaddfp 4, 4, 3, 10
  04e2928  addc 4, 3, 4
  04e292c  vmrghw 5, 5, 6
  04e2930  clrldi 4, 4, 32
  04e2934  addic 31, 5, 4
  04e2938  addc 4, 4, 6
  04e293c  vmaddfp 3, 5, 3, 10
  04e2940  lis 6, 1
  04e2944  li 10, 64
  04e2948  ori 30, 6, 34292
  04e294c  li 11, 80
  04e2950  slwi 12, 5, 4
  04e2954  lwz 4, 0(4)
  04e2958  vsubfp 5, 2, 4
  04e295c  li 9, 96
  04e2960  vaddfp 2, 2, 4
  04e2964  addc 6, 4, 12
  04e2968  stwx 31, 3, 30
  04e296c  li 29, 4
  04e2970  clrldi 6, 6, 32
  04e2974  addic 5, 1, 48
  04e2978  addic 4, 6, 4
  04e297c  addic 3, 6, 8
  04e2980  mtctr 29
  04e2984  vsubfp 4, 5, 3
  04e2988  vsubfp 6, 2, 3
  04e298c  vaddfp 2, 2, 3
  04e2990  vaddfp 3, 5, 3
  04e2994  stvx 4, 7, 1
  04e2998  stvx 6, 10, 1
  04e299c  stvx 2, 11, 1
  04e29a0  stvx 3, 9, 1
  04e29a4  lvx 2, 0, 5
  04e29a8  addic 5, 5, 16
  04e29ac  vspltw 3, 2, 0
  04e29b0  vspltw 4, 2, 1
  04e29b4  vspltw 2, 2, 2
  04e29b8  stvewx 3, 0, 6
  04e29bc  stvewx 4, 0, 4
  04e29c0  stvewx 2, 0, 3
  04e29c4  addic 4, 4, 16
  04e29c8  stw 8, 12(6)
  04e29cc  addic 3, 3, 16
  04e29d0  addic 6, 6, 16
  04e29d4  bdnz 0x4e29a4
  04e29d8  ld 29, 136(1)
  04e29dc  ld 30, 144(1)
  04e29e0  ld 31, 152(1)
  04e29e4  addi 1, 1, 160
  04e29e8  blr

FUN_004e2a60:   # 0x4e2a60, 0x2e0 bytes
  04e2a60  stdu 1, -192(1)
  04e2a64  addi 0, 1, 128
  04e2a68  stvx 29, 0, 0
  04e2a6c  addic 0, 0, 16
  04e2a70  stvx 30, 0, 0
  04e2a74  addic 0, 0, 16
  04e2a78  stvx 31, 0, 0
  04e2a7c  lis 4, 1
  04e2a80  stfs 1, 112(1)
  04e2a84  lis 5, 1
  04e2a88  stfs 1, 116(1)
  04e2a8c  ori 4, 4, 34292
  04e2a90  stfs 1, 120(1)
  04e2a94  ori 6, 5, 34288
  04e2a98  stfs 1, 124(1)
  04e2a9c  li 0, 112
  04e2aa0  lwzx 5, 3, 4
  04e2aa4  lwzx 4, 3, 6
  04e2aa8  lvx 4, 1, 0
  04e2aac  addic 4, 4, -4
  04e2ab0  std 31, 184(1)
  04e2ab4  std 30, 176(1)
  04e2ab8  cmplw 5, 4
  04e2abc  bf 0, 0x4e2d18
  04e2ac0  vsubfp 5, 3, 2
  04e2ac4  vsubfp 7, 2, 3
  04e2ac8  vspltisw 6, 0
  04e2acc  lis 4, 78
  04e2ad0  li 6, 16
  04e2ad4  addi 4, 4, 10736
  04e2ad8  li 7, 32
  04e2adc  li 8, 192
  04e2ae0  lvx 8, 6, 4
  04e2ae4  lvx 12, 7, 4
  04e2ae8  li 6, 48
  04e2aec  vmaddfp 9, 5, 5, 6
  04e2af0  vperm 10, 5, 5, 8
  04e2af4  vmaddfp 11, 7, 7, 6
  04e2af8  vperm 13, 7, 7, 8
  04e2afc  vperm 0, 5, 5, 12
  04e2b00  vperm 1, 7, 7, 12
  04e2b04  li 7, 52
  04e2b08  li 9, 208
  04e2b0c  vmaddfp 9, 10, 10, 9
  04e2b10  vmaddfp 10, 13, 13, 11
  04e2b14  lvlx 11, 6, 4
  04e2b18  lvlx 13, 7, 4
  04e2b1c  vspltw 11, 11, 0
  04e2b20  li 6, 160
  04e2b24  vspltw 13, 13, 0
  04e2b28  li 7, 176
  04e2b2c  lvx 14, 0, 4
  04e2b30  lvx 15, 6, 3
  04e2b34  lvx 16, 7, 3
  04e2b38  li 6, 64
  04e2b3c  vmaddfp 9, 0, 0, 9
  04e2b40  vmaddfp 10, 1, 1, 10
  04e2b44  lvx 19, 8, 3
  04e2b48  li 7, 96
  04e2b4c  lvx 31, 9, 3
  04e2b50  li 8, 80
  04e2b54  vperm 29, 19, 15, 14
  04e2b58  vperm 30, 16, 31, 14
  04e2b5c  vspltw 9, 9, 0
  04e2b60  vspltw 10, 10, 0
  04e2b64  vrsqrtefp 0, 9
  04e2b68  vrsqrtefp 1, 10
  04e2b6c  li 9, 64
  04e2b70  slwi 12, 5, 4
  04e2b74  li 11, 80
  04e2b78  addic 31, 5, 4
  04e2b7c  li 30, 4
  04e2b80  vmaddfp 9, 0, 9, 6
  04e2b84  vmaddfp 10, 1, 10, 6
  04e2b88  vmaddfp 17, 0, 11, 6
  04e2b8c  vmaddfp 18, 1, 11, 6
  04e2b90  addic 5, 1, 48
  04e2b94  mtctr 30
  04e2b98  vnmsubfp 9, 0, 9, 13
  04e2b9c  vnmsubfp 10, 1, 10, 13
  04e2ba0  vmaddfp 9, 9, 17, 0
  04e2ba4  vmaddfp 10, 10, 18, 1
  04e2ba8  lvx 17, 6, 4
  04e2bac  lvx 18, 7, 4
  04e2bb0  vperm 30, 29, 30, 18
  04e2bb4  lis 6, 1
  04e2bb8  vcmpeqfp 29, 9, 9
  04e2bbc  vsel 9, 0, 9, 29
  04e2bc0  vcmpeqfp 0, 10, 10
  04e2bc4  vsel 10, 1, 10, 0
  04e2bc8  vmaddfp 5, 5, 9, 6
  04e2bcc  vperm 9, 16, 19, 14
  04e2bd0  vperm 0, 15, 31, 14
  04e2bd4  vmaddfp 7, 7, 10, 6
  04e2bd8  lvx 10, 8, 4
  04e2bdc  vperm 9, 9, 0, 18
  04e2be0  ori 6, 6, 34296
  04e2be4  lwz 4, 6764(3)
  04e2be8  vperm 0, 5, 5, 17
  04e2bec  vperm 5, 5, 5, 10
  04e2bf0  vperm 1, 7, 7, 17
  04e2bf4  vmaddfp 0, 0, 30, 6
  04e2bf8  vperm 7, 7, 7, 10
  04e2bfc  vmaddfp 10, 1, 30, 6
  04e2c00  slwi 4, 4, 2
  04e2c04  li 7, 48
  04e2c08  addc 4, 3, 4
  04e2c0c  li 8, 96
  04e2c10  clrldi 4, 4, 32
  04e2c14  vnmsubfp 5, 5, 9, 0
  04e2c18  vnmsubfp 7, 7, 9, 10
  04e2c1c  addc 4, 4, 6
  04e2c20  lis 6, 1
  04e2c24  vmaddfp 9, 5, 5, 6
  04e2c28  vperm 10, 5, 5, 8
  04e2c2c  vperm 1, 5, 5, 12
  04e2c30  vmaddfp 0, 7, 7, 6
  04e2c34  vperm 8, 7, 7, 8
  04e2c38  vperm 12, 7, 7, 12
  04e2c3c  lwz 4, 0(4)
  04e2c40  vmaddfp 9, 10, 10, 9
  04e2c44  vmaddfp 8, 8, 8, 0
  04e2c48  vspltisw 0, -1
  04e2c4c  addc 4, 4, 12
  04e2c50  ori 12, 6, 34292
  04e2c54  vslw 0, 0, 0
  04e2c58  clrldi 6, 4, 32
  04e2c5c  vmaddfp 9, 1, 1, 9
  04e2c60  vmaddfp 8, 12, 12, 8
  04e2c64  vmaddfp 4, 4, 11, 0
  04e2c68  addic 4, 6, 4
  04e2c6c  vspltw 9, 9, 0
  04e2c70  vspltw 8, 8, 0
  04e2c74  vrsqrtefp 10, 9
  04e2c78  vrsqrtefp 12, 8
  04e2c7c  vmaddfp 9, 10, 9, 6
  04e2c80  vmaddfp 1, 10, 11, 6
  04e2c84  vmaddfp 8, 12, 8, 6
  04e2c88  vmaddfp 14, 12, 11, 6
  04e2c8c  vnmsubfp 9, 10, 9, 13
  04e2c90  vnmsubfp 8, 12, 8, 13
  04e2c94  vmaddfp 9, 9, 1, 10
  04e2c98  vmaddfp 8, 8, 14, 12
  04e2c9c  vcmpeqfp 11, 9, 9
  04e2ca0  vsel 9, 10, 9, 11
  04e2ca4  vcmpeqfp 10, 8, 8
  04e2ca8  vsel 8, 12, 8, 10
  04e2cac  vmaddfp 5, 5, 9, 6
  04e2cb0  vmaddfp 7, 7, 8, 6
  04e2cb4  vmaddfp 5, 5, 4, 6
  04e2cb8  vmaddfp 4, 7, 4, 6
  04e2cbc  vaddfp 6, 2, 5
  04e2cc0  vsubfp 2, 2, 5
  04e2cc4  vsubfp 5, 3, 4
  04e2cc8  vaddfp 3, 3, 4
  04e2ccc  stvx 6, 7, 1
  04e2cd0  stvx 2, 9, 1
  04e2cd4  stvx 5, 11, 1
  04e2cd8  stvx 3, 8, 1
  04e2cdc  stwx 31, 3, 12
  04e2ce0  addic 3, 6, 8
  04e2ce4  lvx 2, 0, 5
  04e2ce8  addic 5, 5, 16
  04e2cec  vspltw 3, 2, 0
  04e2cf0  vspltw 4, 2, 1
  04e2cf4  vspltw 2, 2, 2
  04e2cf8  stvewx 3, 0, 6
  04e2cfc  stvewx 4, 0, 4
  04e2d00  stvewx 2, 0, 3
  04e2d04  stw 10, 12(6)
  04e2d08  addic 4, 4, 16
  04e2d0c  addic 3, 3, 16
  04e2d10  addic 6, 6, 16
  04e2d14  bdnz 0x4e2ce4
  04e2d18  li 0, 128
  04e2d1c  lvx 29, 1, 0
  04e2d20  addic 0, 0, 16
  04e2d24  lvx 30, 1, 0
  04e2d28  addic 0, 0, 16
  04e2d2c  lvx 31, 1, 0
  04e2d30  ld 30, 176(1)
  04e2d34  ld 31, 184(1)
  04e2d38  addi 1, 1, 192
  04e2d3c  blr

FUN_004e2de0:   # 0x4e2de0, 0x334 bytes
  04e2de0  stdu 1, -496(1)
  04e2de4  mflr 0
  04e2de8  std 0, 512(1)
  04e2dec  stfd 24, 432(1)
  04e2df0  stfd 25, 440(1)
  04e2df4  stfd 26, 448(1)
  04e2df8  stfd 27, 456(1)
  04e2dfc  stfd 28, 464(1)
  04e2e00  stfd 29, 472(1)
  04e2e04  stfd 30, 480(1)
  04e2e08  stfd 31, 488(1)
  04e2e0c  addi 0, 1, 224
  04e2e10  stvx 20, 0, 0
  04e2e14  addic 0, 0, 16
  04e2e18  stvx 21, 0, 0
  04e2e1c  addic 0, 0, 16
  04e2e20  stvx 22, 0, 0
  04e2e24  addic 0, 0, 16
  04e2e28  stvx 23, 0, 0
  04e2e2c  addic 0, 0, 16
  04e2e30  stvx 24, 0, 0
  04e2e34  addic 0, 0, 16
  04e2e38  stvx 25, 0, 0
  04e2e3c  addic 0, 0, 16
  04e2e40  stvx 26, 0, 0
  04e2e44  addic 0, 0, 16
  04e2e48  stvx 27, 0, 0
  04e2e4c  addic 0, 0, 16
  04e2e50  stvx 28, 0, 0
  04e2e54  addic 0, 0, 16
  04e2e58  stvx 29, 0, 0
  04e2e5c  addic 0, 0, 16
  04e2e60  stvx 30, 0, 0
  04e2e64  addic 0, 0, 16
  04e2e68  stvx 31, 0, 0
  04e2e6c  lis 5, 1
  04e2e70  lis 6, 1
  04e2e74  fmr 31, 1
  04e2e78  fmr 29, 2
  04e2e7c  ori 5, 5, 34292
  04e2e80  fmr 30, 3
  04e2e84  ori 6, 6, 34288
  04e2e88  std 31, 424(1)
  04e2e8c  li 4, 496
  04e2e90  std 30, 416(1)
  04e2e94  ori 31, 3, 0
  04e2e98  addc 30, 1, 4
  04e2e9c  lwzx 4, 3, 5
  04e2ea0  vsldoi 27, 2, 2, 0
  04e2ea4  li 5, 144
  04e2ea8  lwzx 6, 3, 6
  04e2eac  ori 3, 9, 0
  04e2eb0  addic 6, 6, -4
  04e2eb4  lwz 30, 116(30)
  04e2eb8  cmplw 4, 6
  04e2ebc  stvx 2, 5, 1
  04e2ec0  bf 0, 0x4e307c
  04e2ec4  li 4, 144
  04e2ec8  fmr 1, 29
  04e2ecc  ori 8, 3, 0
  04e2ed0  ori 3, 31, 0
  04e2ed4  lvx 20, 4, 1
  04e2ed8  vsldoi 2, 20, 20, 0
  04e2edc  bl 0x4e2860
  04e2ee0  lis 3, 78
  04e2ee4  li 4, 16
  04e2ee8  addi 3, 3, 11584
  04e2eec  li 6, 48
  04e2ef0  li 5, 64
  04e2ef4  li 7, 96
  04e2ef8  li 8, 112
  04e2efc  lvx 30, 0, 3
  04e2f00  lfs 29, 4(3)
  04e2f04  li 9, 128
  04e2f08  vaddfp 30, 20, 30
  04e2f0c  lvx 2, 4, 3
  04e2f10  li 4, 80
  04e2f14  lfs 28, 32(3)
  04e2f18  lfs 26, 36(3)
  04e2f1c  vaddfp 29, 20, 2
  04e2f20  lvx 21, 6, 3
  04e2f24  li 6, 144
  04e2f28  lvx 22, 5, 3
  04e2f2c  lvx 31, 4, 3
  04e2f30  lvx 23, 7, 3
  04e2f34  lvx 24, 8, 3
  04e2f38  lvx 25, 9, 3
  04e2f3c  fmr 27, 29
  04e2f40  vsldoi 28, 30, 30, 0
  04e2f44  lvx 26, 6, 3
  04e2f48  li 0, 176
  04e2f4c  fmr 1, 29
  04e2f50  stvx 29, 1, 0
  04e2f54  li 0, 160
  04e2f58  li 4, 1
  04e2f5c  stvx 20, 1, 0
  04e2f60  bl 0x5dd914
  04e2f64  nop
  04e2f68  fmuls 25, 1, 31
  04e2f6c  li 4, 0
  04e2f70  fmr 1, 29
  04e2f74  bl 0x5dd914
  04e2f78  nop
  04e2f7c  fmuls 24, 1, 31
  04e2f80  li 3, 112
  04e2f84  li 0, 128
  04e2f88  vsldoi 3, 30, 30, 0
  04e2f8c  fmr 1, 30
  04e2f90  ori 10, 30, 0
  04e2f94  stfs 24, 128(1)
  04e2f98  stfs 24, 132(1)
  04e2f9c  stfs 24, 136(1)
  04e2fa0  stfs 24, 140(1)
  04e2fa4  lvx 2, 3, 1
  04e2fa8  lvx 29, 1, 0
  04e2fac  li 0, 128
  04e2fb0  stfs 25, 128(1)
  04e2fb4  stfs 25, 132(1)
  04e2fb8  stfs 25, 136(1)
  04e2fbc  stfs 25, 140(1)
  04e2fc0  lvx 5, 1, 0
  04e2fc4  li 0, 192
  04e2fc8  vsldoi 20, 5, 5, 0
  04e2fcc  ori 3, 31, 0
  04e2fd0  vperm 4, 29, 20, 21
  04e2fd4  stvx 21, 1, 0
  04e2fd8  vspltisw 21, 0
  04e2fdc  li 0, 208
  04e2fe0  vperm 4, 4, 21, 22
  04e2fe4  stvx 22, 1, 0
  04e2fe8  vperm 22, 4, 2, 31
  04e2fec  vaddfp 30, 22, 27
  04e2ff0  vsldoi 2, 30, 30, 0
  04e2ff4  bl 0x4e2a60
  04e2ff8  vperm 2, 29, 20, 23
  04e2ffc  vsldoi 3, 28, 28, 0
  04e3000  fmr 1, 30
  04e3004  ori 3, 31, 0
  04e3008  ori 10, 30, 0
  04e300c  vperm 2, 2, 21, 24
  04e3010  vperm 22, 2, 22, 31
  04e3014  vaddfp 28, 22, 27
  04e3018  vsldoi 2, 28, 28, 0
  04e301c  bl 0x4e2a60
  04e3020  li 0, 176
  04e3024  vperm 2, 29, 20, 25
  04e3028  stfs 27, 112(1)
  04e302c  ori 3, 31, 0
  04e3030  ori 10, 30, 0
  04e3034  fmr 1, 30
  04e3038  vperm 2, 2, 21, 26
  04e303c  lvx 3, 1, 0
  04e3040  li 0, 160
  04e3044  stfs 25, 116(1)
  04e3048  stfs 24, 120(1)
  04e304c  vperm 2, 2, 22, 31
  04e3050  lvx 20, 1, 0
  04e3054  vaddfp 29, 2, 20
  04e3058  vsldoi 2, 29, 29, 0
  04e305c  bl 0x4e2a60
  04e3060  fadds 29, 29, 26
  04e3064  li 0, 192
  04e3068  lvx 21, 1, 0
  04e306c  li 0, 208
  04e3070  fcmpu 0, 29, 28
  04e3074  lvx 22, 1, 0
  04e3078  bt 0, 0x4e2f48
  04e307c  li 0, 224
  04e3080  lvx 20, 1, 0
  04e3084  addic 0, 0, 16
  04e3088  lvx 21, 1, 0
  04e308c  addic 0, 0, 16
  04e3090  lvx 22, 1, 0
  04e3094  addic 0, 0, 16
  04e3098  lvx 23, 1, 0
  04e309c  addic 0, 0, 16
  04e30a0  lvx 24, 1, 0
  04e30a4  addic 0, 0, 16
  04e30a8  lvx 25, 1, 0
  04e30ac  addic 0, 0, 16
  04e30b0  lvx 26, 1, 0
  04e30b4  addic 0, 0, 16
  04e30b8  lvx 27, 1, 0
  04e30bc  addic 0, 0, 16
  04e30c0  lvx 28, 1, 0
  04e30c4  addic 0, 0, 16
  04e30c8  lvx 29, 1, 0
  04e30cc  addic 0, 0, 16
  04e30d0  lvx 30, 1, 0
  04e30d4  addic 0, 0, 16
  04e30d8  lvx 31, 1, 0
  04e30dc  ld 0, 512(1)
  04e30e0  mtlr 0
  04e30e4  lfd 24, 432(1)
  04e30e8  lfd 25, 440(1)
  04e30ec  lfd 26, 448(1)
  04e30f0  lfd 27, 456(1)
  04e30f4  lfd 28, 464(1)
  04e30f8  lfd 29, 472(1)
  04e30fc  lfd 30, 480(1)
  04e3100  lfd 31, 488(1)
  04e3104  ld 30, 416(1)
  04e3108  ld 31, 424(1)
  04e310c  addi 1, 1, 496
  04e3110  blr

FUN_004e3114:   # 0x4e3114, 0x64 bytes
  04e3114  lwz 5, 6764(3)
  04e3118  clrlwi 5, 5, 31
  04e311c  cmpwi 5, 0
  04e3120  bf 2, 0x4e3174
  04e3124  sldi 5, 4, 2
  04e3128  lis 7, 144
  04e312c  extsw 6, 5
  04e3130  addc 5, 3, 5
  04e3134  addic 7, 7, -23532
  04e3138  clrldi 5, 5, 32
  04e313c  sldi 4, 4, 5
  04e3140  addc 3, 3, 4
  04e3144  lwz 4, 9044(5)
  04e3148  lwzx 6, 7, 6
  04e314c  slwi 4, 4, 2
  04e3150  addc 3, 3, 4
  04e3154  lwz 4, 8(6)
  04e3158  clrldi 3, 3, 32
  04e315c  lwz 6, 0(6)
  04e3160  subc 4, 4, 6
  04e3164  stw 4, 9088(3)
  04e3168  lwz 3, 9044(5)
  04e316c  addic 3, 3, 1
  04e3170  stw 3, 9044(5)
  04e3174  blr

FUN_004e3178:   # 0x4e3178, 0x50 bytes
  04e3178  lis 4, 144
  04e317c  lis 5, 1
  04e3180  addic 4, 4, -23532
  04e3184  ori 5, 5, 34188
  04e3188  lis 6, 1
  04e318c  ori 6, 6, 34060
  04e3190  lwz 4, 40(4)
  04e3194  lwzx 7, 3, 5
  04e3198  slwi 8, 7, 2
  04e319c  addic 7, 7, 1
  04e31a0  lwz 9, 8(4)
  04e31a4  addc 8, 3, 8
  04e31a8  lwz 4, 0(4)
  04e31ac  clrldi 8, 8, 32
  04e31b0  subc 4, 9, 4
  04e31b4  stwx 7, 3, 5
  04e31b8  addc 6, 8, 6
  04e31bc  addic 4, 4, 4
  04e31c0  stw 4, 0(6)
  04e31c4  blr

FUN_004e31c8:   # 0x4e31c8, 0x174 bytes
  04e31c8  stdu 1, -192(1)
  04e31cc  mflr 0
  04e31d0  std 0, 208(1)
  04e31d4  std 27, 152(1)
  04e31d8  std 29, 168(1)
  04e31dc  std 28, 160(1)
  04e31e0  li 27, 0
  04e31e4  lis 28, 144
  04e31e8  std 30, 176(1)
  04e31ec  lis 29, 271
  04e31f0  lis 30, 271
  04e31f4  addic 28, 28, -23480
  04e31f8  std 31, 184(1)
  04e31fc  addic 29, 29, -6608
  04e3200  std 26, 144(1)
  04e3204  std 25, 136(1)
  04e3208  std 24, 128(1)
  04e320c  ori 31, 27, 0
  04e3210  addic 30, 30, -7376
  04e3214  lwz 3, 0(28)
  04e3218  ori 5, 30, 0
  04e321c  lwz 4, 0(29)
  04e3220  bl 0x50f130
  04e3224  nop
  04e3228  addic 27, 27, 1
  04e322c  addic 28, 28, 4
  04e3230  cmpwi 27, 16
  04e3234  addic 29, 29, 4
  04e3238  addic 30, 30, 48
  04e323c  bt 0, 0x4e3214
  04e3240  ori 27, 31, 0
  04e3244  lis 28, 144
  04e3248  lis 29, 271
  04e324c  lis 30, 271
  04e3250  lis 31, 271
  04e3254  addic 28, 28, -23416
  04e3258  addic 29, 29, -3016
  04e325c  addic 30, 30, -5368
  04e3260  addic 31, 31, -6544
  04e3264  lwz 3, 0(28)
  04e3268  ori 5, 30, 0
  04e326c  lwz 4, 0(29)
  04e3270  bl 0x50f130
  04e3274  nop
  04e3278  ori 3, 30, 0
  04e327c  bl 0x50f3b8
  04e3280  nop
  04e3284  ori 26, 3, 0
  04e3288  ori 3, 30, 0
  04e328c  bl 0x50f3ac
  04e3290  nop
  04e3294  lis 6, 144
  04e3298  ori 25, 3, 0
  04e329c  li 5, 64
  04e32a0  extsw 4, 25
  04e32a4  lwz 3, 11980(6)
  04e32a8  addic 3, 3, 124
  04e32ac  bl 0x4fe098
  04e32b0  nop
  04e32b4  ori 24, 3, 0
  04e32b8  ori 4, 26, 0
  04e32bc  ori 5, 25, 0
  04e32c0  bl 0x5c5ad0
  04e32c4  nop
  04e32c8  ori 3, 24, 0
  04e32cc  addic 4, 1, 112
  04e32d0  bl 0x64f2a4
  04e32d4  ld 2, 40(1)
  04e32d8  ori 3, 30, 0
  04e32dc  ori 4, 31, 0
  04e32e0  bl 0x50f300
  04e32e4  nop
  04e32e8  addic 27, 27, 1
  04e32ec  lwz 3, 112(1)
  04e32f0  addic 28, 28, 4
  04e32f4  stw 3, 0(31)
  04e32f8  cmpwi 27, 49
  04e32fc  addic 29, 29, 4
  04e3300  addic 30, 30, 48
  04e3304  addic 31, 31, 24
  04e3308  bt 0, 0x4e3264
  04e330c  ld 0, 208(1)
  04e3310  mtlr 0
  04e3314  ld 24, 128(1)
  04e3318  ld 25, 136(1)
  04e331c  ld 26, 144(1)
  04e3320  ld 27, 152(1)
  04e3324  ld 28, 160(1)
  04e3328  ld 29, 168(1)
  04e332c  ld 30, 176(1)
  04e3330  ld 31, 184(1)
  04e3334  addi 1, 1, 192
  04e3338  blr

FUN_004e3348:   # 0x4e3348, 0x1f0 bytes
  04e3348  stdu 1, -80(1)
  04e334c  lis 3, 78
  04e3350  stw 6, 48(1)
  04e3354  li 7, 4
  04e3358  stw 6, 52(1)
  04e335c  lis 8, 8
  04e3360  stw 6, 56(1)
  04e3364  li 9, 8
  04e3368  stw 6, 60(1)
  04e336c  li 0, 48
  04e3370  lwz 10, 8(4)
  04e3374  addi 3, 3, 13116
  04e3378  slwi 11, 5, 16
  04e337c  ori 8, 8, 2560
  04e3380  vspltisw 7, -1
  04e3384  slwi 6, 6, 16
  04e3388  lvx 2, 1, 0
  04e338c  stw 5, 48(1)
  04e3390  stw 5, 52(1)
  04e3394  stw 5, 56(1)
  04e3398  stw 5, 60(1)
  04e339c  lvlx 3, 0, 3
  04e33a0  li 5, 0
  04e33a4  lvlx 4, 7, 3
  04e33a8  lvlx 5, 9, 3
  04e33ac  lis 3, 8
  04e33b0  vspltw 3, 3, 0
  04e33b4  li 0, 48
  04e33b8  vspltw 4, 4, 0
  04e33bc  ori 3, 3, 916
  04e33c0  vslw 7, 7, 7
  04e33c4  vand 2, 2, 3
  04e33c8  lis 9, 16128
  04e33cc  lvx 6, 1, 0
  04e33d0  stw 8, 0(10)
  04e33d4  lwz 7, 8(4)
  04e33d8  vand 3, 6, 3
  04e33dc  vspltisw 6, -1
  04e33e0  vcfux 2, 2, 0
  04e33e4  vspltw 5, 5, 0
  04e33e8  li 10, 20
  04e33ec  stw 11, 4(7)
  04e33f0  vcfux 3, 3, 0
  04e33f4  lwz 7, 8(4)
  04e33f8  vslw 6, 6, 6
  04e33fc  li 12, 24
  04e3400  stw 6, 8(7)
  04e3404  lwz 7, 8(4)
  04e3408  addic 8, 7, 12
  04e340c  vmaddfp 3, 3, 4, 6
  04e3410  stw 8, 8(4)
  04e3414  stw 3, 12(7)
  04e3418  vmaddfp 4, 2, 4, 7
  04e341c  lwz 8, 8(4)
  04e3420  lis 3, 16256
  04e3424  lis 7, 32
  04e3428  vspltisw 6, -1
  04e342c  ori 7, 7, 2592
  04e3430  stw 5, 4(8)
  04e3434  lwz 8, 8(4)
  04e3438  vslw 6, 6, 6
  04e343c  stw 3, 8(8)
  04e3440  vmaddfp 2, 2, 5, 6
  04e3444  lwz 3, 8(4)
  04e3448  addic 8, 3, 12
  04e344c  stw 8, 8(4)
  04e3450  stw 7, 12(3)
  04e3454  std 31, 72(1)
  04e3458  li 8, 4
  04e345c  lwz 31, 8(4)
  04e3460  li 3, 8
  04e3464  stvewx 3, 8, 31
  04e3468  lwz 31, 8(4)
  04e346c  stvewx 4, 3, 31
  04e3470  lwz 31, 8(4)
  04e3474  stw 9, 12(31)
  04e3478  lwz 31, 8(4)
  04e347c  stw 5, 16(31)
  04e3480  lwz 31, 8(4)
  04e3484  stvewx 3, 10, 31
  04e3488  lwz 31, 8(4)
  04e348c  stvewx 2, 12, 31
  04e3490  lwz 31, 8(4)
  04e3494  stw 9, 28(31)
  04e3498  lwz 31, 8(4)
  04e349c  stw 5, 32(31)
  04e34a0  std 30, 64(1)
  04e34a4  lwz 31, 8(4)
  04e34a8  addic 30, 31, 36
  04e34ac  stw 30, 8(4)
  04e34b0  stw 7, 36(31)
  04e34b4  lwz 31, 8(4)
  04e34b8  lis 7, 8
  04e34bc  ori 7, 7, 2240
  04e34c0  stvewx 3, 8, 31
  04e34c4  lwz 8, 8(4)
  04e34c8  stvewx 4, 3, 8
  04e34cc  lwz 3, 8(4)
  04e34d0  stw 9, 12(3)
  04e34d4  lwz 3, 8(4)
  04e34d8  stw 5, 16(3)
  04e34dc  lwz 3, 8(4)
  04e34e0  stvewx 3, 10, 3
  04e34e4  lwz 3, 8(4)
  04e34e8  stvewx 2, 12, 3
  04e34ec  lwz 3, 8(4)
  04e34f0  stw 9, 28(3)
  04e34f4  lwz 3, 8(4)
  04e34f8  stw 5, 32(3)
  04e34fc  lwz 3, 8(4)
  04e3500  addic 5, 3, 36
  04e3504  stw 5, 8(4)
  04e3508  stw 7, 36(3)
  04e350c  lwz 3, 8(4)
  04e3510  stw 11, 4(3)
  04e3514  lwz 3, 8(4)
  04e3518  stw 6, 8(3)
  04e351c  lwz 3, 8(4)
  04e3520  addic 3, 3, 12
  04e3524  stw 3, 8(4)
  04e3528  ld 30, 64(1)
  04e352c  ld 31, 72(1)
  04e3530  addi 1, 1, 80
  04e3534  blr

FUN_004e3538:   # 0x4e3538, 0x160 bytes
  04e3538  stdu 1, -160(1)
  04e353c  mflr 0
  04e3540  std 0, 176(1)
  04e3544  std 30, 144(1)
  04e3548  std 27, 120(1)
  04e354c  ori 30, 5, 0
  04e3550  li 5, 0
  04e3554  std 29, 136(1)
  04e3558  ori 27, 4, 0
  04e355c  ori 29, 3, 0
  04e3560  lis 4, 102
  04e3564  ori 3, 27, 0
  04e3568  std 31, 152(1)
  04e356c  stw 5, 0(30)
  04e3570  ori 31, 6, 0
  04e3574  std 28, 128(1)
  04e3578  std 26, 112(1)
  04e357c  addic 4, 4, -27848
  04e3580  bl 0x5c52f0
  04e3584  nop
  04e3588  ori 28, 3, 0
  04e358c  cmpwi 28, 0
  04e3590  bf 2, 0x4e35b0
  04e3594  lis 3, 102
  04e3598  ori 4, 27, 0
  04e359c  addic 3, 3, -27840
  04e35a0  bl 0x4ffc9c
  04e35a4  nop
  04e35a8  li 3, 0
  04e35ac  b 0x4e3670
  04e35b0  ori 3, 28, 0
  04e35b4  ori 27, 31, 0
  04e35b8  li 4, 0
  04e35bc  li 5, 2
  04e35c0  bl 0x5c5568
  04e35c4  nop
  04e35c8  ori 3, 28, 0
  04e35cc  bl 0x5c55dc
  04e35d0  nop
  04e35d4  clrldi 26, 3, 32
  04e35d8  ori 3, 28, 0
  04e35dc  li 4, 0
  04e35e0  li 5, 0
  04e35e4  bl 0x5c5568
  04e35e8  nop
  04e35ec  slwi 31, 26, 1
  04e35f0  ori 3, 27, 0
  04e35f4  extsw 4, 31
  04e35f8  lis 5, 16
  04e35fc  bl 0x4fe098
  04e3600  nop
  04e3604  ori 27, 3, 0
  04e3608  cmpwi 27, 0
  04e360c  bf 2, 0x4e3628
  04e3610  lis 3, 102
  04e3614  addic 3, 3, -27736
  04e3618  bl 0x4ffc9c
  04e361c  nop
  04e3620  li 3, 0
  04e3624  b 0x4e3670
  04e3628  ori 3, 27, 0
  04e362c  stw 31, 0(30)
  04e3630  ori 5, 26, 0
  04e3634  li 4, 1
  04e3638  ori 6, 28, 0
  04e363c  bl 0x5c5364
  04e3640  nop
  04e3644  ori 3, 28, 0
  04e3648  bl 0x5c4f10
  04e364c  nop
  04e3650  addc 5, 27, 26
  04e3654  ori 3, 29, 0
  04e3658  clrldi 5, 5, 32
  04e365c  ori 4, 27, 0
  04e3660  li 6, 512
  04e3664  li 7, 512
  04e3668  bl 0x4debdc
  04e366c  ori 3, 27, 0
  04e3670  ld 0, 176(1)
  04e3674  mtlr 0
  04e3678  ld 26, 112(1)
  04e367c  ld 27, 120(1)
  04e3680  ld 28, 128(1)
  04e3684  ld 29, 136(1)
  04e3688  ld 30, 144(1)
  04e368c  ld 31, 152(1)
  04e3690  addi 1, 1, 160
  04e3694  blr

FUN_004e3698:   # 0x4e3698, 0x4 bytes
  04e3698  blr

FUN_004e369c:   # 0x4e369c, 0x4c bytes
  04e369c  stdu 1, -112(1)
  04e36a0  mflr 0
  04e36a4  std 0, 128(1)
  04e36a8  lis 3, 144
  04e36ac  lwz 3, -23192(3)
  04e36b0  cmpwi 3, 1
  04e36b4  addic 3, 3, 1
  04e36b8  bf 2, 0x4e36d0
  04e36bc  lis 3, 273
  04e36c0  addic 3, 3, 5888
  04e36c4  bl 0x4edccc
  04e36c8  nop
  04e36cc  li 3, 0
  04e36d0  lis 4, 144
  04e36d4  stw 3, -23192(4)
  04e36d8  ld 0, 128(1)
  04e36dc  mtlr 0
  04e36e0  addi 1, 1, 112
  04e36e4  blr

FUN_004e36e8:   # 0x4e36e8, 0x62c bytes
  04e36e8  lis 3, 144
  04e36ec  lis 5, 144
  04e36f0  lis 4, 144
  04e36f4  lis 7, 144
  04e36f8  lis 6, 144
  04e36fc  lis 8, 144
  04e3700  lwz 3, 7096(3)
  04e3704  lis 10, 144
  04e3708  lwz 5, 6936(5)
  04e370c  lis 9, 271
  04e3710  lwz 4, 7553(4)
  04e3714  lis 12, 144
  04e3718  lwz 7, 7096(7)
  04e371c  subc 3, 3, 5
  04e3720  lwz 5, 8064(6)
  04e3724  addic 11, 9, -6608
  04e3728  lwz 8, 7553(8)
  04e372c  subc 4, 4, 7
  04e3730  lis 6, 144
  04e3734  lwz 7, 9264(10)
  04e3738  lis 10, 144
  04e373c  stw 3, -6608(9)
  04e3740  subc 5, 5, 8
  04e3744  lis 3, 144
  04e3748  stw 4, 4(11)
  04e374c  lis 9, 144
  04e3750  lis 4, 144
  04e3754  lwz 6, 8985(6)
  04e3758  lwz 10, 9761(10)
  04e375c  lis 8, 144
  04e3760  stw 5, 8(11)
  04e3764  subc 5, 7, 6
  04e3768  lwz 3, 9264(3)
  04e376c  lis 6, 144
  04e3770  lwz 4, 10303(4)
  04e3774  lis 7, 144
  04e3778  lwz 9, 9761(9)
  04e377c  subc 3, 10, 3
  04e3780  stw 5, 12(11)
  04e3784  lis 10, 144
  04e3788  lwz 8, 11078(8)
  04e378c  subc 4, 4, 9
  04e3790  lis 5, 144
  04e3794  lwz 9, 10303(12)
  04e3798  stw 3, 16(11)
  04e379c  lis 12, 144
  04e37a0  lwz 6, 6376(6)
  04e37a4  subc 8, 8, 9
  04e37a8  lis 3, 144
  04e37ac  stw 4, 20(11)
  04e37b0  lis 4, 144
  04e37b4  lwz 7, 5914(7)
  04e37b8  lwz 5, 8985(5)
  04e37bc  lis 9, 144
  04e37c0  stw 8, 24(11)
  04e37c4  subc 6, 6, 7
  04e37c8  lwz 7, 8427(10)
  04e37cc  lis 8, 144
  04e37d0  lwz 3, 6936(3)
  04e37d4  lis 10, 144
  04e37d8  lwz 4, 6561(4)
  04e37dc  subc 5, 5, 7
  04e37e0  stw 6, 28(11)
  04e37e4  lwz 7, 11521(9)
  04e37e8  subc 3, 3, 4
  04e37ec  lis 6, 144
  04e37f0  lwz 4, 11078(12)
  04e37f4  lis 9, 144
  04e37f8  stw 5, 32(11)
  04e37fc  lis 12, 144
  04e3800  lwz 8, 6561(8)
  04e3804  subc 4, 7, 4
  04e3808  stw 3, 36(11)
  04e380c  lis 5, 144
  04e3810  lwz 7, 6376(10)
  04e3814  lis 3, 144
  04e3818  lwz 6, 8427(6)
  04e381c  lis 10, 144
  04e3820  stw 4, 40(11)
  04e3824  subc 4, 8, 7
  04e3828  lwz 7, 8211(9)
  04e382c  lis 8, 144
  04e3830  lwz 5, 8211(5)
  04e3834  lis 9, 144
  04e3838  lwz 3, 8064(3)
  04e383c  subc 6, 6, 7
  04e3840  stw 4, 44(11)
  04e3844  lwz 7, 5914(10)
  04e3848  subc 3, 5, 3
  04e384c  lis 4, 144
  04e3850  lwz 5, 5725(12)
  04e3854  lis 10, 144
  04e3858  stw 6, 48(11)
  04e385c  lis 12, 144
  04e3860  lwz 8, 11919(8)
  04e3864  lis 6, 144
  04e3868  subc 5, 7, 5
  04e386c  stw 3, 52(11)
  04e3870  lis 3, 144
  04e3874  lwz 7, 11521(9)
  04e3878  lwz 4, -9590(4)
  04e387c  lis 9, 271
  04e3880  lwz 10, -9710(10)
  04e3884  subc 7, 8, 7
  04e3888  stw 5, 56(11)
  04e388c  lis 8, 144
  04e3890  lwz 6, -9710(6)
  04e3894  lis 5, 144
  04e3898  subc 4, 4, 10
  04e389c  lwz 3, -9935(3)
  04e38a0  stw 7, 60(11)
  04e38a4  addic 7, 9, -3016
  04e38a8  lwz 10, 5455(12)
  04e38ac  subc 3, 6, 3
  04e38b0  stw 4, -3016(9)
  04e38b4  lis 6, 144
  04e38b8  lis 4, 144
  04e38bc  lwz 5, 5366(5)
  04e38c0  lwz 8, -1862(8)
  04e38c4  lis 9, 144
  04e38c8  stw 3, 4(7)
  04e38cc  lis 11, 144
  04e38d0  subc 3, 10, 5
  04e38d4  lis 5, 144
  04e38d8  lwz 4, -1983(4)
  04e38dc  lis 12, 144
  04e38e0  lwz 6, -1011(6)
  04e38e4  lis 10, 144
  04e38e8  stw 3, 8(7)
  04e38ec  subc 3, 8, 4
  04e38f0  lwz 4, -1370(9)
  04e38f4  lis 8, 144
  04e38f8  lwz 5, -10142(5)
  04e38fc  lis 9, 144
  04e3900  lwz 11, -10376(11)
  04e3904  subc 4, 6, 4
  04e3908  stw 3, 12(7)
  04e390c  lwz 6, 395(12)
  04e3910  subc 5, 5, 11
  04e3914  lwz 10, 193(10)
  04e3918  lis 3, 144
  04e391c  stw 4, 16(7)
  04e3920  lwz 8, 634(8)
  04e3924  subc 6, 6, 10
  04e3928  lis 11, 144
  04e392c  stw 5, 20(7)
  04e3930  lis 4, 144
  04e3934  lwz 9, 395(9)
  04e3938  lis 5, 144
  04e393c  lwz 3, -556(3)
  04e3940  stw 6, 24(7)
  04e3944  lis 10, 144
  04e3948  subc 6, 8, 9
  04e394c  lis 12, 144
  04e3950  lwz 8, -742(11)
  04e3954  lis 9, 144
  04e3958  lwz 4, 772(4)
  04e395c  lis 11, 144
  04e3960  lwz 5, 634(5)
  04e3964  subc 3, 3, 8
  04e3968  stw 6, 28(7)
  04e396c  lwz 8, 842(10)
  04e3970  subc 4, 4, 5
  04e3974  lis 6, 144
  04e3978  lwz 5, 772(12)
  04e397c  lis 10, 144
  04e3980  stw 3, 32(7)
  04e3984  lis 12, 144
  04e3988  lwz 9, 5725(9)
  04e398c  subc 5, 8, 5
  04e3990  stw 4, 36(7)
  04e3994  lis 3, 144
  04e3998  lwz 8, 5455(11)
  04e399c  lis 4, 144
  04e39a0  lwz 6, -1370(6)
  04e39a4  lis 11, 144
  04e39a8  stw 5, 40(7)
  04e39ac  subc 5, 9, 8
  04e39b0  lwz 8, -1508(10)
  04e39b4  lis 9, 144
  04e39b8  lwz 3, -1508(3)
  04e39bc  lis 10, 144
  04e39c0  lwz 4, -1862(4)
  04e39c4  subc 6, 6, 8
  04e39c8  stw 5, 44(7)
  04e39cc  lwz 8, -742(11)
  04e39d0  subc 3, 3, 4
  04e39d4  lis 5, 144
  04e39d8  lwz 4, -1011(12)
  04e39dc  lis 11, 144
  04e39e0  stw 6, 48(7)
  04e39e4  lis 12, 144
  04e39e8  lwz 9, -9935(9)
  04e39ec  subc 4, 8, 4
  04e39f0  stw 3, 52(7)
  04e39f4  lis 6, 144
  04e39f8  lwz 8, -10072(10)
  04e39fc  lis 3, 144
  04e3a00  lwz 5, -9268(5)
  04e3a04  lis 10, 144
  04e3a08  stw 4, 56(7)
  04e3a0c  subc 4, 9, 8
  04e3a10  lwz 8, -9590(11)
  04e3a14  lis 9, 144
  04e3a18  lwz 6, -8946(6)
  04e3a1c  lis 11, 144
  04e3a20  lwz 3, -9268(3)
  04e3a24  subc 5, 5, 8
  04e3a28  stw 4, 60(7)
  04e3a2c  lwz 8, -10072(10)
  04e3a30  subc 3, 6, 3
  04e3a34  lis 4, 144
  04e3a38  lwz 6, -10142(12)
  04e3a3c  lis 10, 144
  04e3a40  stw 5, 64(7)
  04e3a44  lis 12, 144
  04e3a48  lwz 9, -10711(9)
  04e3a4c  subc 6, 8, 6
  04e3a50  stw 3, 68(7)
  04e3a54  lis 5, 144
  04e3a58  lwz 8, -11104(11)
  04e3a5c  lis 3, 144
  04e3a60  lwz 4, -10376(4)
  04e3a64  lis 11, 144
  04e3a68  stw 6, 72(7)
  04e3a6c  subc 6, 9, 8
  04e3a70  lwz 8, -10711(10)
  04e3a74  lis 9, 144
  04e3a78  lwz 5, 5366(5)
  04e3a7c  lis 10, 144
  04e3a80  lwz 3, 842(3)
  04e3a84  subc 4, 4, 8
  04e3a88  stw 6, 76(7)
  04e3a8c  lwz 8, 193(11)
  04e3a90  subc 3, 5, 3
  04e3a94  lis 6, 144
  04e3a98  lwz 5, -556(12)
  04e3a9c  lis 11, 144
  04e3aa0  stw 4, 80(7)
  04e3aa4  lis 12, 144
  04e3aa8  lwz 9, -8661(9)
  04e3aac  subc 5, 8, 5
  04e3ab0  stw 3, 84(7)
  04e3ab4  lis 4, 144
  04e3ab8  lwz 8, -8946(10)
  04e3abc  lis 3, 144
  04e3ac0  lwz 6, -8376(6)
  04e3ac4  lis 10, 144
  04e3ac8  stw 5, 88(7)
  04e3acc  subc 5, 9, 8
  04e3ad0  lwz 8, -8661(11)
  04e3ad4  lis 9, 144
  04e3ad8  lwz 4, -8091(4)
  04e3adc  lis 11, 144
  04e3ae0  lwz 3, -8376(3)
  04e3ae4  subc 6, 6, 8
  04e3ae8  stw 5, 92(7)
  04e3aec  lwz 8, -7774(10)
  04e3af0  subc 3, 4, 3
  04e3af4  lis 5, 144
  04e3af8  lwz 4, -8091(12)
  04e3afc  lis 10, 144
  04e3b00  stw 6, 96(7)
  04e3b04  lis 12, 144
  04e3b08  lwz 9, -7489(9)
  04e3b0c  subc 4, 8, 4
  04e3b10  stw 3, 100(7)
  04e3b14  lis 6, 144
  04e3b18  lwz 8, -7774(11)
  04e3b1c  lis 3, 144
  04e3b20  lwz 5, -6602(5)
  04e3b24  lis 11, 144
  04e3b28  stw 4, 104(7)
  04e3b2c  subc 4, 9, 8
  04e3b30  lwz 8, -6887(10)
  04e3b34  lis 9, 144
  04e3b38  lwz 6, -6317(6)
  04e3b3c  lis 10, 144
  04e3b40  lwz 3, -6602(3)
  04e3b44  subc 5, 5, 8
  04e3b48  stw 4, 108(7)
  04e3b4c  lwz 8, -6048(11)
  04e3b50  subc 3, 6, 3
  04e3b54  lis 4, 144
  04e3b58  lwz 6, -6317(12)
  04e3b5c  lis 11, 144
  04e3b60  stw 5, 112(7)
  04e3b64  lis 12, 144
  04e3b68  lwz 9, -7204(9)
  04e3b6c  subc 6, 8, 6
  04e3b70  stw 3, 116(7)
  04e3b74  lis 5, 144
  04e3b78  lwz 8, -7489(10)
  04e3b7c  lis 3, 144
  04e3b80  lwz 4, -6887(4)
  04e3b84  lis 10, 144
  04e3b88  stw 6, 120(7)
  04e3b8c  subc 6, 9, 8
  04e3b90  lwz 8, -7204(11)
  04e3b94  lis 9, 144
  04e3b98  lwz 5, -3278(5)
  04e3b9c  lis 11, 144
  04e3ba0  lwz 3, -3563(3)
  04e3ba4  subc 4, 4, 8
  04e3ba8  stw 6, 124(7)
  04e3bac  lwz 8, -2977(10)
  04e3bb0  subc 3, 5, 3
  04e3bb4  lis 6, 144
  04e3bb8  lwz 5, -3278(12)
  04e3bbc  lis 10, 144
  04e3bc0  stw 4, 128(7)
  04e3bc4  lis 12, 144
  04e3bc8  lwz 9, -5779(9)
  04e3bcc  subc 5, 8, 5
  04e3bd0  stw 3, 132(7)
  04e3bd4  lis 4, 144
  04e3bd8  lwz 8, -6048(11)
  04e3bdc  lis 3, 144
  04e3be0  lwz 6, -5526(6)
  04e3be4  lis 11, 144
  04e3be8  stw 5, 136(7)
  04e3bec  subc 5, 9, 8
  04e3bf0  lwz 8, -5779(10)
  04e3bf4  lis 9, 144
  04e3bf8  lwz 4, -5241(4)
  04e3bfc  lis 10, 144
  04e3c00  lwz 3, -5526(3)
  04e3c04  subc 6, 6, 8
  04e3c08  stw 5, 140(7)
  04e3c0c  lwz 8, -4956(11)
  04e3c10  subc 3, 4, 3
  04e3c14  lis 5, 144
  04e3c18  lwz 4, -5241(12)
  04e3c1c  lis 11, 144
  04e3c20  stw 6, 144(7)
  04e3c24  lis 12, 144
  04e3c28  lwz 9, -4671(9)
  04e3c2c  subc 4, 8, 4
  04e3c30  stw 3, 148(7)
  04e3c34  lis 6, 144
  04e3c38  lwz 8, -4956(10)
  04e3c3c  lis 3, 144
  04e3c40  lwz 5, -4418(5)
  04e3c44  lis 10, 144
  04e3c48  stw 4, 152(7)
  04e3c4c  subc 4, 9, 8
  04e3c50  lwz 8, -4671(11)
  04e3c54  lis 9, 144
  04e3c58  lwz 6, -4133(6)
  04e3c5c  lis 11, 144
  04e3c60  lwz 3, -4418(3)
  04e3c64  subc 5, 5, 8
  04e3c68  stw 4, 156(7)
  04e3c6c  lwz 8, -3848(10)
  04e3c70  subc 3, 6, 3
  04e3c74  lis 4, 144
  04e3c78  lwz 6, -4133(12)
  04e3c7c  lis 10, 144
  04e3c80  stw 5, 160(7)
  04e3c84  lis 12, 144
  04e3c88  lwz 9, -3563(9)
  04e3c8c  subc 6, 8, 6
  04e3c90  stw 3, 164(7)
  04e3c94  lis 5, 144
  04e3c98  lwz 8, -3848(11)
  04e3c9c  lis 3, 144
  04e3ca0  lwz 4, -2791(4)
  04e3ca4  lis 11, 144
  04e3ca8  stw 6, 168(7)
  04e3cac  subc 6, 9, 8
  04e3cb0  lwz 8, -2977(10)
  04e3cb4  lis 9, 144
  04e3cb8  lwz 5, -2589(5)
  04e3cbc  lis 10, 144
  04e3cc0  lwz 3, -2791(3)
  04e3cc4  subc 4, 4, 8
  04e3cc8  stw 6, 172(7)
  04e3ccc  lwz 8, -2387(11)
  04e3cd0  subc 3, 5, 3
  04e3cd4  lwz 5, -2589(12)
  04e3cd8  lis 6, 144
  04e3cdc  stw 4, 176(7)
  04e3ce0  subc 4, 8, 5
  04e3ce4  lis 11, 144
  04e3ce8  lwz 5, -2185(9)
  04e3cec  stw 3, 180(7)
  04e3cf0  lwz 3, -2387(10)
  04e3cf4  lwz 6, -1983(6)
  04e3cf8  stw 4, 184(7)
  04e3cfc  subc 3, 5, 3
  04e3d00  lwz 4, -2185(11)
  04e3d04  subc 4, 6, 4
  04e3d08  stw 3, 188(7)
  04e3d0c  stw 4, 192(7)
  04e3d10  blr

FUN_004e3d20:   # 0x4e3d20, 0x54 bytes
  04e3d20  cmpwi 3, 3
  04e3d24  cmpwi 1, 3, 5
  04e3d28  cmpwi 6, 3, 2
  04e3d2c  bt 1, 0x4e3d38
  04e3d30  bf 25, 0x4e3d64
  04e3d34  b 0x4e3d40
  04e3d38  bf 5, 0x4e3d54
  04e3d3c  b 0x4e3d64
  04e3d40  li 3, 2
  04e3d44  li 6, 1
  04e3d48  stw 3, 0(4)
  04e3d4c  stw 6, 0(5)
  04e3d50  b 0x4e3d70
  04e3d54  li 3, 2
  04e3d58  stw 3, 0(4)
  04e3d5c  stw 3, 0(5)
  04e3d60  b 0x4e3d70
  04e3d64  li 3, 1
  04e3d68  stw 3, 0(4)
  04e3d6c  stw 3, 0(5)
  04e3d70  blr

FUN_004e3d74:   # 0x4e3d74, 0x78 bytes
  04e3d74  stdu 1, -128(1)
  04e3d78  mflr 0
  04e3d7c  std 0, 144(1)
  04e3d80  std 31, 120(1)
  04e3d84  lis 3, 144
  04e3d88  ori 31, 4, 0
  04e3d8c  lwz 3, 11980(3)
  04e3d90  bl 0x50436c
  04e3d94  nop
  04e3d98  clrlwi 4, 31, 12
  04e3d9c  li 5, 0
  04e3da0  subc 6, 31, 4
  04e3da4  subc 4, 5, 4
  04e3da8  lis 7, 16
  04e3dac  cntlzw 4, 4
  04e3db0  addc 6, 6, 7
  04e3db4  sldi 4, 4, 58
  04e3db8  subc 7, 31, 6
  04e3dbc  sradi 4, 4, 63
  04e3dc0  lis 5, 1
  04e3dc4  and 4, 4, 7
  04e3dc8  addc 4, 6, 4
  04e3dcc  extsw 4, 4
  04e3dd0  bl 0x4fe098
  04e3dd4  nop
  04e3dd8  ld 0, 144(1)
  04e3ddc  mtlr 0
  04e3de0  ld 31, 120(1)
  04e3de4  addi 1, 1, 128
  04e3de8  blr

FUN_004e3dec:   # 0x4e3dec, 0x38 bytes
  04e3dec  cmpwi 3, 1
  04e3df0  cmpwi 1, 3, 2
  04e3df4  cmpwi 6, 3, 0
  04e3df8  bt 1, 0x4e3e04
  04e3dfc  bf 25, 0x4e3e1c
  04e3e00  b 0x4e3e0c
  04e3e04  bf 5, 0x4e3e14
  04e3e08  b 0x4e3e1c
  04e3e0c  li 3, 2
  04e3e10  b 0x4e3e20
  04e3e14  li 3, 4
  04e3e18  b 0x4e3e20
  04e3e1c  li 3, 1
  04e3e20  blr

FUN_004e3e24:   # 0x4e3e24, 0xc4 bytes
  04e3e24  stdu 1, -176(1)
  04e3e28  mflr 0
  04e3e2c  std 0, 192(1)
  04e3e30  std 31, 168(1)
  04e3e34  std 29, 152(1)
  04e3e38  lis 3, 144
  04e3e3c  ori 31, 8, 0
  04e3e40  std 30, 160(1)
  04e3e44  ori 29, 4, 0
  04e3e48  std 26, 128(1)
  04e3e4c  rldicl 30, 5, 32, 32
  04e3e50  rldicl 26, 29, 32, 32
  04e3e54  std 28, 144(1)
  04e3e58  lwz 3, 11980(3)
  04e3e5c  ori 28, 6, 0
  04e3e60  extsw 4, 26
  04e3e64  addic 3, 3, 124
  04e3e68  std 27, 136(1)
  04e3e6c  lis 5, 1
  04e3e70  std 25, 120(1)
  04e3e74  clrlwi 27, 7, 24
  04e3e78  bl 0x4fe098
  04e3e7c  nop
  04e3e80  ori 25, 3, 0
  04e3e84  ori 4, 31, 0
  04e3e88  bl 0x64f2a4
  04e3e8c  ld 2, 40(1)
  04e3e90  lwz 5, 0(31)
  04e3e94  clrlwi 3, 28, 24
  04e3e98  clrldi 7, 29, 32
  04e3e9c  clrlwi 8, 30, 24
  04e3ea0  ori 10, 27, 0
  04e3ea4  srwi 9, 5, 16
  04e3ea8  li 4, 0
  04e3eac  ori 6, 26, 0
  04e3eb0  bl 0x64f3c4
  04e3eb4  ld 2, 40(1)
  04e3eb8  ori 3, 25, 0
  04e3ebc  ld 0, 192(1)
  04e3ec0  mtlr 0
  04e3ec4  ld 25, 120(1)
  04e3ec8  ld 26, 128(1)
  04e3ecc  ld 27, 136(1)
  04e3ed0  ld 28, 144(1)
  04e3ed4  ld 29, 152(1)
  04e3ed8  ld 30, 160(1)
  04e3edc  ld 31, 168(1)
  04e3ee0  addi 1, 1, 176
  04e3ee4  blr

FUN_004e3ee8:   # 0x4e3ee8, 0x144 bytes
  04e3ee8  stdu 1, -160(1)
  04e3eec  mflr 0
  04e3ef0  std 0, 176(1)
  04e3ef4  std 31, 152(1)
  04e3ef8  cmpwi 8, 3
  04e3efc  ori 31, 3, 0
  04e3f00  std 30, 144(1)
  04e3f04  ori 4, 7, 0
  04e3f08  li 30, 2
  04e3f0c  cmpwi 1, 8, 5
  04e3f10  cmpwi 6, 8, 4
  04e3f14  cmpwi 7, 8, 2
  04e3f18  std 29, 136(1)
  04e3f1c  std 28, 128(1)
  04e3f20  std 27, 120(1)
  04e3f24  ori 3, 9, 0
  04e3f28  bt 1, 0x4e3f34
  04e3f2c  bf 29, 0x4e3f68
  04e3f30  b 0x4e3f40
  04e3f34  bf 25, 0x4e3f50
  04e3f38  bf 5, 0x4e3f5c
  04e3f3c  b 0x4e3f68
  04e3f40  ori 8, 30, 0
  04e3f44  li 30, 1
  04e3f48  li 7, 7
  04e3f4c  b 0x4e3f74
  04e3f50  li 7, 8
  04e3f54  ori 8, 30, 0
  04e3f58  b 0x4e3f74
  04e3f5c  li 7, 8
  04e3f60  ori 8, 30, 0
  04e3f64  b 0x4e3f74
  04e3f68  li 8, 1
  04e3f6c  li 7, 0
  04e3f70  ori 30, 8, 0
  04e3f74  addic 5, 5, 63
  04e3f78  ori 29, 4, 0
  04e3f7c  rlwinm 5, 5, 0, 0, 25
  04e3f80  mullw 3, 3, 5
  04e3f84  mullw 3, 3, 8
  04e3f88  li 5, 8
  04e3f8c  li 8, 0
  04e3f90  subc 5, 5, 4
  04e3f94  addic 4, 6, 63
  04e3f98  cntlzw 5, 5
  04e3f9c  subc 7, 7, 8
  04e3fa0  sldi 5, 5, 58
  04e3fa4  rlwinm 28, 4, 0, 0, 25
  04e3fa8  sradi 5, 5, 63
  04e3fac  clrldi 3, 3, 32
  04e3fb0  and 4, 5, 7
  04e3fb4  addc 27, 8, 4
  04e3fb8  bl 0x64f244
  04e3fbc  ld 2, 40(1)
  04e3fc0  mullw 4, 3, 28
  04e3fc4  mullw 4, 4, 30
  04e3fc8  li 5, 2
  04e3fcc  lis 6, 0
  04e3fd0  stw 3, 4(31)
  04e3fd4  subc 5, 5, 29
  04e3fd8  ori 6, 6, 65535
  04e3fdc  cntlzw 5, 5
  04e3fe0  li 7, 0
  04e3fe4  sldi 5, 5, 58
  04e3fe8  addc 4, 4, 6
  04e3fec  subc 6, 7, 27
  04e3ff0  sradi 3, 5, 63
  04e3ff4  rlwinm 4, 4, 0, 0, 15
  04e3ff8  and 3, 3, 6
  04e3ffc  addc 3, 27, 3
  04e4000  stw 4, 0(31)
  04e4004  stw 3, 8(31)
  04e4008  ld 0, 176(1)
  04e400c  mtlr 0
  04e4010  ld 27, 120(1)
  04e4014  ld 28, 128(1)
  04e4018  ld 29, 136(1)
  04e401c  ld 30, 144(1)
  04e4020  ld 31, 152(1)
  04e4024  addi 1, 1, 160
  04e4028  blr

FUN_004e402c:   # 0x4e402c, 0xac bytes
  04e402c  cmpwi 3, 9
  04e4030  cmpwi 1, 3, 5
  04e4034  cmpwi 6, 3, 0
  04e4038  cmpwi 7, 3, 3
  04e403c  bt 1, 0x4e4064
  04e4040  bt 5, 0x4e4050
  04e4044  bf 25, 0x4e40d0
  04e4048  bf 29, 0x4e40a8
  04e404c  b 0x4e40b0
  04e4050  cmpwi 3, 7
  04e4054  bf 1, 0x4e40d0
  04e4058  cmpwi 3, 8
  04e405c  bf 1, 0x4e40b8
  04e4060  b 0x4e40a0
  04e4064  cmpwi 3, 12
  04e4068  bt 1, 0x4e4080
  04e406c  cmpwi 3, 10
  04e4070  bf 1, 0x4e40a8
  04e4074  cmpwi 3, 11
  04e4078  bf 1, 0x4e40c0
  04e407c  b 0x4e40c8
  04e4080  cmpwi 3, 15
  04e4084  bt 1, 0x4e4094
  04e4088  cmpwi 3, 13
  04e408c  bf 1, 0x4e40b8
  04e4090  b 0x4e40b0
  04e4094  cmpwi 3, 16
  04e4098  bf 1, 0x4e40b8
  04e409c  b 0x4e40d0
  04e40a0  li 3, 1
  04e40a4  b 0x4e40d4
  04e40a8  li 3, 2
  04e40ac  b 0x4e40d4
  04e40b0  li 3, 3
  04e40b4  b 0x4e40d4
  04e40b8  li 3, 4
  04e40bc  b 0x4e40d4
  04e40c0  li 3, 8
  04e40c4  b 0x4e40d4
  04e40c8  li 3, 16
  04e40cc  b 0x4e40d4
  04e40d0  li 3, 0
  04e40d4  blr

FUN_004e40d8:   # 0x4e40d8, 0x6f4 bytes
  04e40d8  stdu 1, -288(1)
  04e40dc  mflr 0
  04e40e0  std 0, 304(1)
  04e40e4  std 22, 208(1)
  04e40e8  lis 11, 0
  04e40ec  addic 22, 4, 63
  04e40f0  stw 4, 296(3)
  04e40f4  std 21, 200(1)
  04e40f8  stw 5, 304(3)
  04e40fc  addic 21, 5, 63
  04e4100  rlwinm 22, 22, 0, 0, 25
  04e4104  std 23, 216(1)
  04e4108  rlwinm 21, 21, 0, 0, 25
  04e410c  cmpwi 7, 0
  04e4110  std 31, 280(1)
  04e4114  lwz 23, 404(1)
  04e4118  ori 31, 3, 0
  04e411c  std 30, 272(1)
  04e4120  stw 22, 312(3)
  04e4124  std 29, 264(1)
  04e4128  ori 30, 4, 0
  04e412c  ori 29, 5, 0
  04e4130  std 28, 256(1)
  04e4134  stw 21, 320(3)
  04e4138  std 27, 248(1)
  04e413c  ori 28, 6, 0
  04e4140  std 26, 240(1)
  04e4144  ori 27, 7, 0
  04e4148  std 25, 232(1)
  04e414c  ori 26, 8, 0
  04e4150  std 24, 224(1)
  04e4154  ori 25, 9, 0
  04e4158  std 20, 192(1)
  04e415c  std 19, 184(1)
  04e4160  std 18, 176(1)
  04e4164  ori 24, 10, 0
  04e4168  bt 2, 0x4e42e0
  04e416c  cmpwi 28, 0
  04e4170  bf 2, 0x4e421c
  04e4174  ori 3, 27, 0
  04e4178  bl 0x4e402c
  04e417c  ori 9, 3, 0
  04e4180  ori 6, 21, 0
  04e4184  ori 8, 24, 0
  04e4188  addic 3, 1, 144
  04e418c  ori 4, 31, 0
  04e4190  ori 5, 22, 0
  04e4194  ori 7, 27, 0
  04e4198  bl 0x4e3ee8
  04e419c  lis 6, 271
  04e41a0  lwz 21, 148(1)
  04e41a4  lwz 20, 144(1)
  04e41a8  lis 3, 144
  04e41ac  stw 21, 328(31)
  04e41b0  lis 5, 1
  04e41b4  stw 20, 284(31)
  04e41b8  extsw 4, 20
  04e41bc  lwz 19, -2776(6)
  04e41c0  lwz 3, 11980(3)
  04e41c4  addic 7, 19, 1
  04e41c8  lwz 18, 152(1)
  04e41cc  addic 3, 3, 124
  04e41d0  stw 7, -2776(6)
  04e41d4  stw 19, 268(31)
  04e41d8  bl 0x4fe098
  04e41dc  nop
  04e41e0  ori 22, 3, 0
  04e41e4  addic 4, 31, 248
  04e41e8  bl 0x64f2a4
  04e41ec  ld 2, 40(1)
  04e41f0  lwz 5, 248(31)
  04e41f4  clrlwi 3, 19, 24
  04e41f8  clrlwi 8, 18, 24
  04e41fc  li 4, 0
  04e4200  ori 7, 21, 0
  04e4204  srwi 9, 5, 16
  04e4208  ori 6, 20, 0
  04e420c  li 10, 0
  04e4210  bl 0x64f3c4
  04e4214  ld 2, 40(1)
  04e4218  b 0x4e429c
  04e421c  ori 3, 27, 0
  04e4220  bl 0x4e402c
  04e4224  lwz 4, 312(31)
  04e4228  mullw 3, 4, 3
  04e422c  lwz 4, 320(31)
  04e4230  mullw 22, 3, 4
  04e4234  lis 4, 144
  04e4238  stw 3, 328(31)
  04e423c  li 3, -1
  04e4240  stw 22, 284(31)
  04e4244  lwz 4, 11980(4)
  04e4248  stw 3, 268(31)
  04e424c  ori 3, 4, 0
  04e4250  bl 0x50436c
  04e4254  nop
  04e4258  clrlwi 4, 22, 12
  04e425c  li 5, 0
  04e4260  subc 6, 22, 4
  04e4264  subc 4, 5, 4
  04e4268  lis 7, 16
  04e426c  cntlzw 4, 4
  04e4270  addc 6, 6, 7
  04e4274  sldi 4, 4, 58
  04e4278  subc 7, 22, 6
  04e427c  sradi 4, 4, 63
  04e4280  lis 5, 1
  04e4284  and 4, 4, 7
  04e4288  addc 4, 6, 4
  04e428c  extsw 4, 4
  04e4290  bl 0x4fe098
  04e4294  nop
  04e4298  ori 22, 3, 0
  04e429c  clrlwi 3, 23, 24
  04e42a0  stw 22, 240(31)
  04e42a4  cmpwi 3, 0
  04e42a8  bt 2, 0x4e42f4
  04e42ac  lis 4, 271
  04e42b0  lwz 5, -2768(4)
  04e42b4  addic 6, 5, 1
  04e42b8  clrlwi 3, 5, 24
  04e42bc  stw 6, -2768(4)
  04e42c0  lwz 4, 248(31)
  04e42c4  stw 5, 280(31)
  04e42c8  lwz 5, 328(31)
  04e42cc  lwz 6, 296(31)
  04e42d0  lwz 7, 304(31)
  04e42d4  bl 0x64f344
  04e42d8  ld 2, 40(1)
  04e42dc  b 0x4e42f4
  04e42e0  li 3, 64
  04e42e4  li 4, 0
  04e42e8  stw 3, 328(31)
  04e42ec  stw 4, 284(31)
  04e42f0  stw 4, 240(31)
  04e42f4  cmpwi 25, 0
  04e42f8  bt 2, 0x4e4570
  04e42fc  cmpwi 26, 0
  04e4300  bf 2, 0x4e44c0
  04e4304  cmpwi 25, 1
  04e4308  lwz 4, 312(31)
  04e430c  cmpwi 1, 25, 0
  04e4310  cmpwi 6, 25, 2
  04e4314  lwz 5, 320(31)
  04e4318  bt 1, 0x4e4324
  04e431c  bf 5, 0x4e433c
  04e4320  b 0x4e432c
  04e4324  bf 25, 0x4e4334
  04e4328  b 0x4e433c
  04e432c  li 3, 2
  04e4330  b 0x4e4340
  04e4334  li 3, 4
  04e4338  b 0x4e4340
  04e433c  li 3, 1
  04e4340  ori 6, 5, 0
  04e4344  ori 5, 4, 0
  04e4348  ori 9, 3, 0
  04e434c  ori 4, 31, 0
  04e4350  addic 3, 1, 156
  04e4354  ori 7, 25, 0
  04e4358  ori 8, 24, 0
  04e435c  bl 0x4e3ee8
  04e4360  lis 4, 271
  04e4364  lwz 3, 160(1)
  04e4368  lwz 5, 156(1)
  04e436c  stw 3, 336(31)
  04e4370  stw 5, 292(31)
  04e4374  lwz 5, -2772(4)
  04e4378  ori 3, 24, 0
  04e437c  addic 6, 5, 1
  04e4380  cmpwi 3, 5
  04e4384  stw 6, -2772(4)
  04e4388  stw 5, 276(31)
  04e438c  bt 2, 0x4e43c0
  04e4390  cmpwi 3, 4
  04e4394  bt 2, 0x4e43c0
  04e4398  cmpwi 3, 3
  04e439c  bt 2, 0x4e43b4
  04e43a0  cmpwi 3, 0
  04e43a4  bf 2, 0x4e43c8
  04e43a8  li 3, 9
  04e43ac  stw 3, 164(1)
  04e43b0  b 0x4e43c8
  04e43b4  li 3, 11
  04e43b8  stw 3, 164(1)
  04e43bc  b 0x4e43c8
  04e43c0  li 3, 12
  04e43c4  stw 3, 164(1)
  04e43c8  cmpwi 25, 0
  04e43cc  bf 2, 0x4e43d8
  04e43d0  li 3, 0
  04e43d4  stw 3, 164(1)
  04e43d8  lis 3, 271
  04e43dc  lis 4, 144
  04e43e0  lis 5, 1
  04e43e4  lwz 23, -2776(3)
  04e43e8  lwz 22, 156(1)
  04e43ec  addic 6, 23, 1
  04e43f0  lwz 21, 160(1)
  04e43f4  lwz 7, 11980(4)
  04e43f8  extsw 4, 22
  04e43fc  stw 6, -2776(3)
  04e4400  addic 3, 7, 124
  04e4404  stw 23, 272(31)
  04e4408  lwz 20, 164(1)
  04e440c  bl 0x4fe098
  04e4410  nop
  04e4414  ori 19, 3, 0
  04e4418  addic 4, 31, 264
  04e441c  bl 0x64f2a4
  04e4420  ld 2, 40(1)
  04e4424  lwz 5, 264(31)
  04e4428  clrlwi 3, 23, 24
  04e442c  clrlwi 8, 20, 24
  04e4430  li 4, 0
  04e4434  ori 7, 21, 0
  04e4438  srwi 9, 5, 16
  04e443c  ori 6, 22, 0
  04e4440  li 10, 2
  04e4444  bl 0x64f3c4
  04e4448  ld 2, 40(1)
  04e444c  lwz 3, 276(31)
  04e4450  lis 23, 144
  04e4454  stw 19, 244(31)
  04e4458  li 7, 1
  04e445c  lwz 4, 264(31)
  04e4460  li 8, 7
  04e4464  lwz 5, 312(31)
  04e4468  li 9, 0
  04e446c  lwz 6, 320(31)
  04e4470  li 12, 255
  04e4474  lwz 11, -23008(23)
  04e4478  clrlwi 3, 3, 24
  04e447c  std 7, 112(1)
  04e4480  li 10, 0
  04e4484  std 8, 120(1)
  04e4488  ori 7, 11, 0
  04e448c  std 9, 128(1)
  04e4490  li 8, 2
  04e4494  std 12, 136(1)
  04e4498  ori 9, 24, 0
  04e449c  bl 0x64f3e4
  04e44a0  ld 2, 40(1)
  04e44a4  lwz 3, 312(31)
  04e44a8  lwz 4, 320(31)
  04e44ac  mullw 3, 3, 4
  04e44b0  lwz 4, -23008(23)
  04e44b4  addc 3, 4, 3
  04e44b8  stw 3, -23008(23)
  04e44bc  b 0x4e4584
  04e44c0  cmpwi 25, 1
  04e44c4  cmpwi 1, 25, 0
  04e44c8  cmpwi 6, 25, 2
  04e44cc  bt 1, 0x4e44d8
  04e44d0  bf 5, 0x4e44f0
  04e44d4  b 0x4e44e0
  04e44d8  bf 25, 0x4e44e8
  04e44dc  b 0x4e44f0
  04e44e0  li 3, 2
  04e44e4  b 0x4e44f4
  04e44e8  li 3, 4
  04e44ec  b 0x4e44f4
  04e44f0  li 3, 1
  04e44f4  lwz 5, 312(31)
  04e44f8  lis 4, 144
  04e44fc  mullw 3, 5, 3
  04e4500  lwz 5, 320(31)
  04e4504  mullw 23, 3, 5
  04e4508  li 5, -1
  04e450c  stw 3, 336(31)
  04e4510  lwz 3, 11980(4)
  04e4514  stw 23, 292(31)
  04e4518  stw 5, 276(31)
  04e451c  stw 5, 272(31)
  04e4520  bl 0x50436c
  04e4524  nop
  04e4528  clrlwi 4, 23, 12
  04e452c  li 5, 0
  04e4530  subc 6, 23, 4
  04e4534  subc 4, 5, 4
  04e4538  lis 7, 16
  04e453c  cntlzw 4, 4
  04e4540  addc 6, 6, 7
  04e4544  sldi 4, 4, 58
  04e4548  subc 7, 23, 6
  04e454c  sradi 4, 4, 63
  04e4550  lis 5, 1
  04e4554  and 4, 4, 7
  04e4558  addc 4, 6, 4
  04e455c  extsw 4, 4
  04e4560  bl 0x4fe098
  04e4564  nop
  04e4568  stw 3, 244(31)
  04e456c  b 0x4e4584
  04e4570  li 3, 64
  04e4574  li 4, 0
  04e4578  stw 3, 336(31)
  04e457c  stw 4, 292(31)
  04e4580  stw 4, 244(31)
  04e4584  li 3, 0
  04e4588  li 4, 0
  04e458c  li 5, 8
  04e4590  subc 4, 4, 27
  04e4594  stw 3, 4(31)
  04e4598  subc 5, 5, 27
  04e459c  stw 3, 0(31)
  04e45a0  cntlzw 4, 4
  04e45a4  stw 3, 12(31)
  04e45a8  cntlzw 6, 27
  04e45ac  stw 3, 16(31)
  04e45b0  sldi 4, 4, 58
  04e45b4  stw 3, 20(31)
  04e45b8  li 8, 3
  04e45bc  stw 3, 28(31)
  04e45c0  sradi 4, 4, 63
  04e45c4  stw 3, 32(31)
  04e45c8  mtctr 8
  04e45cc  stw 3, 36(31)
  04e45d0  and 4, 4, 5
  04e45d4  stw 3, 40(31)
  04e45d8  rlwinm 5, 6, 27, 31, 31
  04e45dc  stw 3, 44(31)
  04e45e0  addc 4, 27, 4
  04e45e4  stw 3, 48(31)
  04e45e8  xori 5, 5, 1
  04e45ec  lwz 6, 248(31)
  04e45f0  stw 3, 52(31)
  04e45f4  lwz 7, 328(31)
  04e45f8  stw 3, 56(31)
  04e45fc  stb 4, 2(31)
  04e4600  stb 28, 4(31)
  04e4604  stb 5, 3(31)
  04e4608  addic 4, 31, 1
  04e460c  stw 6, 8(31)
  04e4610  li 28, 1
  04e4614  addic 5, 31, 4
  04e4618  stw 7, 24(31)
  04e461c  li 6, 64
  04e4620  stb 3, 4(4)
  04e4624  stw 3, 8(5)
  04e4628  addic 4, 4, 1
  04e462c  stw 6, 24(5)
  04e4630  addic 5, 5, 4
  04e4634  bdnz 0x4e4620
  04e4638  cmpwi 25, 0
  04e463c  lwz 4, 328(31)
  04e4640  lwz 5, 248(31)
  04e4644  bt 2, 0x4e4660
  04e4648  lwz 6, 264(31)
  04e464c  stb 25, 40(31)
  04e4650  lwz 7, 336(31)
  04e4654  stb 26, 41(31)
  04e4658  stw 6, 44(31)
  04e465c  b 0x4e4670
  04e4660  stb 3, 41(31)
  04e4664  ori 7, 6, 0
  04e4668  stb 28, 40(31)
  04e466c  lwz 6, 264(31)
  04e4670  stw 7, 48(31)
  04e4674  stb 28, 0(31)
  04e4678  cmpwi 24, 3
  04e467c  stb 24, 1(31)
  04e4680  cmpwi 1, 24, 2
  04e4684  sth 30, 52(31)
  04e4688  cmpwi 6, 24, 5
  04e468c  sth 29, 54(31)
  04e4690  sth 3, 56(31)
  04e4694  sth 3, 58(31)
  04e4698  bt 1, 0x4e46a4
  04e469c  bf 5, 0x4e46c4
  04e46a0  b 0x4e46ac
  04e46a4  bf 25, 0x4e46b8
  04e46a8  b 0x4e46c4
  04e46ac  li 7, 2
  04e46b0  ori 8, 28, 0
  04e46b4  b 0x4e46cc
  04e46b8  li 7, 2
  04e46bc  ori 8, 7, 0
  04e46c0  b 0x4e46cc
  04e46c4  ori 7, 28, 0
  04e46c8  ori 8, 7, 0
  04e46cc  ori 9, 4, 0
  04e46d0  stb 28, 121(31)
  04e46d4  li 4, 9
  04e46d8  mullw 30, 30, 7
  04e46dc  subc 10, 4, 27
  04e46e0  mullw 4, 29, 8
  04e46e4  cntlzw 8, 10
  04e46e8  ori 10, 5, 0
  04e46ec  sldi 5, 8, 58
  04e46f0  li 7, 161
  04e46f4  li 11, 165
  04e46f8  sradi 8, 5, 63
  04e46fc  li 12, 2
  04e4700  subc 7, 7, 11
  04e4704  lis 29, 0
  04e4708  and 7, 8, 7
  04e470c  ori 8, 29, 43748
  04e4710  stb 12, 122(31)
  04e4714  addc 7, 11, 7
  04e4718  stb 3, 123(31)
  04e471c  sth 30, 128(31)
  04e4720  cmpwi 25, 0
  04e4724  li 5, 165
  04e4728  stw 8, 124(31)
  04e472c  stb 7, 120(31)
  04e4730  sth 4, 130(31)
  04e4734  sth 28, 132(31)
  04e4738  stb 3, 134(31)
  04e473c  stw 9, 136(31)
  04e4740  stw 10, 140(31)
  04e4744  bt 2, 0x4e4784
  04e4748  lis 7, 0
  04e474c  li 8, 2
  04e4750  stb 5, 216(31)
  04e4754  ori 7, 7, 43411
  04e4758  stw 7, 220(31)
  04e475c  stb 28, 217(31)
  04e4760  stb 8, 218(31)
  04e4764  stb 3, 219(31)
  04e4768  sth 30, 224(31)
  04e476c  sth 4, 226(31)
  04e4770  lwz 4, 336(31)
  04e4774  sth 28, 228(31)
  04e4778  stb 3, 230(31)
  04e477c  stw 4, 232(31)
  04e4780  stw 6, 236(31)
  04e4784  ld 0, 304(1)
  04e4788  mtlr 0
  04e478c  ld 18, 176(1)
  04e4790  ld 19, 184(1)
  04e4794  ld 20, 192(1)
  04e4798  ld 21, 200(1)
  04e479c  ld 22, 208(1)
  04e47a0  ld 23, 216(1)
  04e47a4  ld 24, 224(1)
  04e47a8  ld 25, 232(1)
  04e47ac  ld 26, 240(1)
  04e47b0  ld 27, 248(1)
  04e47b4  ld 28, 256(1)
  04e47b8  ld 29, 264(1)
  04e47bc  ld 30, 272(1)
  04e47c0  ld 31, 280(1)
  04e47c4  addi 1, 1, 288
  04e47c8  blr

FUN_004e47cc:   # 0x4e47cc, 0x3ec bytes
  04e47cc  stdu 1, -224(1)
  04e47d0  mflr 0
  04e47d4  std 0, 240(1)
  04e47d8  std 24, 160(1)
  04e47dc  std 23, 152(1)
  04e47e0  addic 24, 4, 63
  04e47e4  addic 23, 5, 63
  04e47e8  stw 4, 296(3)
  04e47ec  rlwinm 24, 24, 0, 0, 25
  04e47f0  stw 5, 304(3)
  04e47f4  rlwinm 23, 23, 0, 0, 25
  04e47f8  std 26, 176(1)
  04e47fc  cmpwi 7, 0
  04e4800  ori 26, 9, 0
  04e4804  std 31, 216(1)
  04e4808  stw 24, 312(3)
  04e480c  ori 31, 3, 0
  04e4810  std 30, 208(1)
  04e4814  stw 23, 320(3)
  04e4818  std 29, 200(1)
  04e481c  ori 30, 4, 0
  04e4820  std 28, 192(1)
  04e4824  ori 29, 5, 0
  04e4828  std 27, 184(1)
  04e482c  ori 28, 7, 0
  04e4830  std 25, 168(1)
  04e4834  ori 27, 8, 0
  04e4838  std 22, 144(1)
  04e483c  std 21, 136(1)
  04e4840  std 20, 128(1)
  04e4844  ori 25, 10, 0
  04e4848  bt 2, 0x4e4934
  04e484c  ori 3, 28, 0
  04e4850  bl 0x4e402c
  04e4854  ori 9, 3, 0
  04e4858  ori 6, 23, 0
  04e485c  ori 8, 26, 0
  04e4860  addic 3, 1, 112
  04e4864  ori 4, 31, 0
  04e4868  ori 5, 24, 0
  04e486c  ori 7, 28, 0
  04e4870  bl 0x4e3ee8
  04e4874  lis 6, 271
  04e4878  lwz 24, 116(1)
  04e487c  lwz 23, 112(1)
  04e4880  lis 3, 144
  04e4884  stw 24, 328(31)
  04e4888  lis 5, 1
  04e488c  stw 23, 284(31)
  04e4890  extsw 4, 23
  04e4894  lwz 22, -2776(6)
  04e4898  lwz 3, 11980(3)
  04e489c  addic 7, 22, 1
  04e48a0  lwz 21, 120(1)
  04e48a4  addic 3, 3, 124
  04e48a8  stw 7, -2776(6)
  04e48ac  stw 22, 268(31)
  04e48b0  bl 0x4fe098
  04e48b4  nop
  04e48b8  ori 20, 3, 0
  04e48bc  addic 4, 31, 248
  04e48c0  bl 0x64f2a4
  04e48c4  ld 2, 40(1)
  04e48c8  lwz 5, 248(31)
  04e48cc  clrlwi 3, 22, 24
  04e48d0  clrlwi 8, 21, 24
  04e48d4  li 4, 0
  04e48d8  ori 7, 24, 0
  04e48dc  srwi 9, 5, 16
  04e48e0  ori 6, 23, 0
  04e48e4  li 10, 0
  04e48e8  bl 0x64f3c4
  04e48ec  ld 2, 40(1)
  04e48f0  clrlwi 3, 25, 24
  04e48f4  stw 20, 240(31)
  04e48f8  cmpwi 3, 0
  04e48fc  bt 2, 0x4e4948
  04e4900  lis 4, 271
  04e4904  lwz 5, -2768(4)
  04e4908  addic 6, 5, 1
  04e490c  clrlwi 3, 5, 24
  04e4910  stw 6, -2768(4)
  04e4914  lwz 4, 248(31)
  04e4918  stw 5, 280(31)
  04e491c  lwz 5, 328(31)
  04e4920  lwz 6, 312(31)
  04e4924  lwz 7, 320(31)
  04e4928  bl 0x64f344
  04e492c  ld 2, 40(1)
  04e4930  b 0x4e4948
  04e4934  li 3, 64
  04e4938  li 4, 0
  04e493c  stw 3, 328(31)
  04e4940  stw 4, 284(31)
  04e4944  stw 4, 240(31)
  04e4948  cmpwi 27, 0
  04e494c  bt 2, 0x4e4984
  04e4950  lwz 3, 336(27)
  04e4954  stw 3, 336(31)
  04e4958  lwz 3, 292(27)
  04e495c  stw 3, 292(31)
  04e4960  lwz 3, 276(27)
  04e4964  lwz 4, 244(27)
  04e4968  stw 3, 276(31)
  04e496c  lwz 3, 272(27)
  04e4970  stw 4, 244(31)
  04e4974  stw 3, 272(31)
  04e4978  lwz 3, 264(27)
  04e497c  stw 3, 264(31)
  04e4980  b 0x4e4998
  04e4984  li 3, 64
  04e4988  li 4, 0
  04e498c  stw 3, 336(31)
  04e4990  stw 4, 292(31)
  04e4994  stw 4, 244(31)
  04e4998  li 6, 0
  04e499c  li 3, 0
  04e49a0  li 4, 8
  04e49a4  subc 3, 3, 28
  04e49a8  stw 6, 0(31)
  04e49ac  stw 6, 4(31)
  04e49b0  cntlzw 3, 3
  04e49b4  stw 6, 12(31)
  04e49b8  subc 4, 4, 28
  04e49bc  stw 6, 16(31)
  04e49c0  sldi 3, 3, 58
  04e49c4  stw 6, 20(31)
  04e49c8  cntlzw 5, 28
  04e49cc  stw 6, 28(31)
  04e49d0  sradi 3, 3, 63
  04e49d4  stw 6, 32(31)
  04e49d8  rlwinm 5, 5, 27, 31, 31
  04e49dc  stw 6, 36(31)
  04e49e0  and 3, 3, 4
  04e49e4  stw 6, 40(31)
  04e49e8  xori 5, 5, 1
  04e49ec  stw 6, 44(31)
  04e49f0  addc 4, 28, 3
  04e49f4  stw 6, 48(31)
  04e49f8  li 9, 3
  04e49fc  lwz 7, 248(31)
  04e4a00  li 3, 1
  04e4a04  stw 6, 52(31)
  04e4a08  mtctr 9
  04e4a0c  lwz 8, 328(31)
  04e4a10  stw 6, 56(31)
  04e4a14  stb 4, 2(31)
  04e4a18  stb 5, 3(31)
  04e4a1c  stb 6, 4(31)
  04e4a20  addic 4, 31, 1
  04e4a24  stw 7, 8(31)
  04e4a28  addic 5, 31, 4
  04e4a2c  li 7, 64
  04e4a30  stw 8, 24(31)
  04e4a34  stb 6, 4(4)
  04e4a38  stw 6, 8(5)
  04e4a3c  stw 7, 24(5)
  04e4a40  addic 4, 4, 1
  04e4a44  addic 5, 5, 4
  04e4a48  bdnz 0x4e4a34
  04e4a4c  cmpwi 27, 0
  04e4a50  lwz 4, 328(31)
  04e4a54  lwz 5, 248(31)
  04e4a58  bt 2, 0x4e4aa8
  04e4a5c  lbz 7, 40(27)
  04e4a60  lwz 8, 264(31)
  04e4a64  stb 7, 40(31)
  04e4a68  lwz 7, 336(31)
  04e4a6c  stw 8, 44(31)
  04e4a70  stw 7, 48(31)
  04e4a74  lwz 7, 216(27)
  04e4a78  lwz 8, 220(27)
  04e4a7c  lwz 9, 224(27)
  04e4a80  lwz 10, 228(27)
  04e4a84  stw 7, 216(31)
  04e4a88  stw 8, 220(31)
  04e4a8c  stw 9, 224(31)
  04e4a90  stw 10, 228(31)
  04e4a94  lwz 7, 232(27)
  04e4a98  lwz 8, 236(27)
  04e4a9c  stw 7, 232(31)
  04e4aa0  stw 8, 236(31)
  04e4aa4  b 0x4e4ab0
  04e4aa8  stb 3, 40(31)
  04e4aac  stw 7, 48(31)
  04e4ab0  stb 6, 41(31)
  04e4ab4  stb 26, 1(31)
  04e4ab8  ori 7, 26, 0
  04e4abc  stb 3, 0(31)
  04e4ac0  li 26, 2
  04e4ac4  sth 30, 52(31)
  04e4ac8  cmpwi 7, 3
  04e4acc  sth 29, 54(31)
  04e4ad0  cmpwi 1, 7, 5
  04e4ad4  sth 6, 56(31)
  04e4ad8  cmpwi 6, 7, 2
  04e4adc  sth 6, 58(31)
  04e4ae0  bt 1, 0x4e4aec
  04e4ae4  bf 25, 0x4e4b0c
  04e4ae8  b 0x4e4af4
  04e4aec  bf 5, 0x4e4b00
  04e4af0  b 0x4e4b0c
  04e4af4  ori 8, 3, 0
  04e4af8  ori 7, 26, 0
  04e4afc  b 0x4e4b14
  04e4b00  ori 8, 26, 0
  04e4b04  ori 7, 8, 0
  04e4b08  b 0x4e4b14
  04e4b0c  ori 7, 3, 0
  04e4b10  ori 8, 7, 0
  04e4b14  mullw 7, 30, 7
  04e4b18  li 9, 9
  04e4b1c  mullw 8, 29, 8
  04e4b20  subc 9, 9, 28
  04e4b24  li 10, 161
  04e4b28  stb 3, 121(31)
  04e4b2c  cntlzw 9, 9
  04e4b30  stb 26, 122(31)
  04e4b34  li 11, 165
  04e4b38  stb 6, 123(31)
  04e4b3c  sldi 9, 9, 58
  04e4b40  sth 7, 128(31)
  04e4b44  subc 10, 10, 11
  04e4b48  sradi 9, 9, 63
  04e4b4c  lis 12, 0
  04e4b50  and 9, 9, 10
  04e4b54  ori 10, 12, 43748
  04e4b58  addc 9, 11, 9
  04e4b5c  stw 10, 124(31)
  04e4b60  stb 9, 120(31)
  04e4b64  sth 8, 130(31)
  04e4b68  sth 3, 132(31)
  04e4b6c  stb 6, 134(31)
  04e4b70  stw 4, 136(31)
  04e4b74  stw 5, 140(31)
  04e4b78  ld 0, 240(1)
  04e4b7c  mtlr 0
  04e4b80  ld 20, 128(1)
  04e4b84  ld 21, 136(1)
  04e4b88  ld 22, 144(1)
  04e4b8c  ld 23, 152(1)
  04e4b90  ld 24, 160(1)
  04e4b94  ld 25, 168(1)
  04e4b98  ld 26, 176(1)
  04e4b9c  ld 27, 184(1)
  04e4ba0  ld 28, 192(1)
  04e4ba4  ld 29, 200(1)
  04e4ba8  ld 30, 208(1)
  04e4bac  ld 31, 216(1)
  04e4bb0  addi 1, 1, 224
  04e4bb4  blr

FUN_004e4bb8:   # 0x4e4bb8, 0x184 bytes
  04e4bb8  stdu 1, -144(1)
  04e4bbc  mflr 0
  04e4bc0  std 0, 160(1)
  04e4bc4  ori 6, 4, 0
  04e4bc8  std 29, 120(1)
  04e4bcc  li 3, 0
  04e4bd0  li 29, 144
  04e4bd4  clrldi 5, 6, 32
  04e4bd8  addc 29, 1, 29
  04e4bdc  std 30, 128(1)
  04e4be0  stw 3, 0(9)
  04e4be4  cmplwi 10, 1
  04e4be8  std 31, 136(1)
  04e4bec  ori 30, 9, 0
  04e4bf0  mullw 4, 5, 7
  04e4bf4  std 6, 56(29)
  04e4bf8  ori 31, 10, 0
  04e4bfc  bf 1, 0x4e4c54
  04e4c00  slwi 7, 5, 3
  04e4c04  addic 8, 30, 4
  04e4c08  addic 6, 7, -1
  04e4c0c  addic 5, 31, -1
  04e4c10  addc 3, 3, 4
  04e4c14  li 10, 0
  04e4c18  and 9, 3, 6
  04e4c1c  addic 5, 5, -1
  04e4c20  subc 11, 7, 9
  04e4c24  subc 9, 10, 9
  04e4c28  addc 10, 3, 11
  04e4c2c  cntlzw 9, 9
  04e4c30  subc 3, 3, 10
  04e4c34  sldi 9, 9, 58
  04e4c38  cmpwi 5, 0
  04e4c3c  sradi 9, 9, 63
  04e4c40  and 3, 9, 3
  04e4c44  addc 3, 10, 3
  04e4c48  stw 3, 0(8)
  04e4c4c  addic 8, 8, 4
  04e4c50  bt 1, 0x4e4c10
  04e4c54  addc 3, 4, 3
  04e4c58  lwz 4, 60(29)
  04e4c5c  li 6, 0
  04e4c60  slwi 4, 4, 5
  04e4c64  addic 5, 4, -1
  04e4c68  and 5, 3, 5
  04e4c6c  subc 4, 4, 5
  04e4c70  subc 5, 6, 5
  04e4c74  addc 4, 3, 4
  04e4c78  cntlzw 5, 5
  04e4c7c  subc 3, 3, 4
  04e4c80  sldi 5, 5, 58
  04e4c84  li 6, 0
  04e4c88  sradi 5, 5, 63
  04e4c8c  and 3, 5, 3
  04e4c90  addc 3, 4, 3
  04e4c94  lis 4, 1
  04e4c98  clrlwi 5, 3, 16
  04e4c9c  subc 7, 3, 5
  04e4ca0  subc 5, 6, 5
  04e4ca4  addc 4, 7, 4
  04e4ca8  cntlzw 5, 5
  04e4cac  lis 6, 144
  04e4cb0  sldi 5, 5, 58
  04e4cb4  subc 3, 3, 4
  04e4cb8  sradi 5, 5, 63
  04e4cbc  and 3, 5, 3
  04e4cc0  lwz 6, 11980(6)
  04e4cc4  lis 5, 1
  04e4cc8  addc 4, 4, 3
  04e4ccc  addic 3, 6, 124
  04e4cd0  extsw 4, 4
  04e4cd4  bl 0x4fe098
  04e4cd8  nop
  04e4cdc  ori 29, 3, 0
  04e4ce0  ori 4, 30, 0
  04e4ce4  bl 0x64f2a4
  04e4ce8  ld 2, 40(1)
  04e4cec  cmplwi 31, 1
  04e4cf0  bf 1, 0x4e4d1c
  04e4cf4  addic 3, 30, 4
  04e4cf8  addic 31, 31, -1
  04e4cfc  lwz 4, 0(3)
  04e4d00  lwz 5, 0(30)
  04e4d04  addic 31, 31, -1
  04e4d08  addc 4, 4, 5
  04e4d0c  cmpwi 31, 0
  04e4d10  stw 4, 0(3)
  04e4d14  addic 3, 3, 4
  04e4d18  bt 1, 0x4e4cfc
  04e4d1c  ori 3, 29, 0
  04e4d20  ld 0, 160(1)
  04e4d24  mtlr 0
  04e4d28  ld 29, 120(1)
  04e4d2c  ld 30, 128(1)
  04e4d30  ld 31, 136(1)
  04e4d34  addi 1, 1, 144
  04e4d38  blr

FUN_004e4d3c:   # 0x4e4d3c, 0x620 bytes
  04e4d3c  stdu 1, -288(1)
  04e4d40  mflr 0
  04e4d44  std 0, 304(1)
  04e4d48  std 22, 208(1)
  04e4d4c  lis 11, 0
  04e4d50  addic 22, 4, 63
  04e4d54  stw 4, 296(3)
  04e4d58  std 21, 200(1)
  04e4d5c  stw 5, 304(3)
  04e4d60  addic 21, 5, 63
  04e4d64  rlwinm 22, 22, 0, 0, 25
  04e4d68  std 23, 216(1)
  04e4d6c  rlwinm 21, 21, 0, 0, 25
  04e4d70  cmpwi 7, 0
  04e4d74  std 31, 280(1)
  04e4d78  lwz 23, 404(1)
  04e4d7c  ori 31, 3, 0
  04e4d80  std 30, 272(1)
  04e4d84  stw 22, 312(3)
  04e4d88  std 29, 264(1)
  04e4d8c  ori 30, 4, 0
  04e4d90  ori 29, 5, 0
  04e4d94  std 28, 256(1)
  04e4d98  stw 21, 320(3)
  04e4d9c  std 27, 248(1)
  04e4da0  ori 28, 6, 0
  04e4da4  std 26, 240(1)
  04e4da8  ori 27, 7, 0
  04e4dac  std 25, 232(1)
  04e4db0  ori 26, 8, 0
  04e4db4  std 24, 224(1)
  04e4db8  ori 25, 9, 0
  04e4dbc  std 20, 192(1)
  04e4dc0  std 19, 184(1)
  04e4dc4  std 18, 176(1)
  04e4dc8  std 17, 168(1)
  04e4dcc  ori 24, 10, 0
  04e4dd0  bt 2, 0x4e4e64
  04e4dd4  cmpwi 28, 0
  04e4dd8  bf 2, 0x4e4e64
  04e4ddc  ori 3, 27, 0
  04e4de0  bl 0x4e402c
  04e4de4  ori 9, 3, 0
  04e4de8  addic 3, 1, 144
  04e4dec  ori 8, 24, 0
  04e4df0  ori 4, 31, 0
  04e4df4  ori 5, 22, 0
  04e4df8  ori 6, 21, 0
  04e4dfc  ori 7, 27, 0
  04e4e00  bl 0x4e3ee8
  04e4e04  lwz 3, 144(1)
  04e4e08  lis 5, 271
  04e4e0c  lwz 4, 152(1)
  04e4e10  addic 9, 31, 248
  04e4e14  stw 3, 56(1)
  04e4e18  li 8, 0
  04e4e1c  stw 4, 64(1)
  04e4e20  ori 10, 23, 0
  04e4e24  lwz 4, 148(1)
  04e4e28  stw 3, 284(31)
  04e4e2c  stw 4, 328(31)
  04e4e30  ori 3, 31, 0
  04e4e34  lwz 7, -2776(5)
  04e4e38  stw 4, 60(1)
  04e4e3c  addic 4, 7, 1
  04e4e40  stw 4, -2776(5)
  04e4e44  lwz 6, 320(31)
  04e4e48  stw 7, 268(31)
  04e4e4c  ld 4, 56(1)
  04e4e50  ld 5, 64(1)
  04e4e54  bl 0x4e4bb8
  04e4e58  stw 3, 240(31)
  04e4e5c  lwz 22, 312(31)
  04e4e60  lwz 21, 320(31)
  04e4e64  cmpwi 25, 0
  04e4e68  bt 2, 0x4e50a0
  04e4e6c  cmpwi 26, 0
  04e4e70  bf 2, 0x4e4ff8
  04e4e74  cmpwi 25, 1
  04e4e78  cmpwi 1, 25, 0
  04e4e7c  cmpwi 6, 25, 2
  04e4e80  bt 1, 0x4e4e8c
  04e4e84  bf 5, 0x4e4ea4
  04e4e88  b 0x4e4e94
  04e4e8c  bf 25, 0x4e4e9c
  04e4e90  b 0x4e4ea4
  04e4e94  li 3, 2
  04e4e98  b 0x4e4ea8
  04e4e9c  li 3, 4
  04e4ea0  b 0x4e4ea8
  04e4ea4  li 3, 1
  04e4ea8  ori 9, 3, 0
  04e4eac  addic 3, 1, 156
  04e4eb0  ori 4, 31, 0
  04e4eb4  ori 5, 22, 0
  04e4eb8  ori 6, 21, 0
  04e4ebc  ori 7, 25, 0
  04e4ec0  ori 8, 24, 0
  04e4ec4  bl 0x4e3ee8
  04e4ec8  li 3, 0
  04e4ecc  li 4, 0
  04e4ed0  lwz 22, 160(1)
  04e4ed4  subc 3, 3, 27
  04e4ed8  lwz 21, 156(1)
  04e4edc  li 5, 9
  04e4ee0  stw 22, 336(31)
  04e4ee4  cntlzw 3, 3
  04e4ee8  stw 21, 292(31)
  04e4eec  subc 4, 4, 5
  04e4ef0  sldi 3, 3, 58
  04e4ef4  lis 6, 271
  04e4ef8  sradi 3, 3, 63
  04e4efc  lis 7, 271
  04e4f00  and 3, 3, 4
  04e4f04  li 20, 0
  04e4f08  addc 3, 5, 3
  04e4f0c  lwz 4, -2772(6)
  04e4f10  lis 5, 144
  04e4f14  stw 3, 164(1)
  04e4f18  addic 3, 4, 1
  04e4f1c  stw 3, -2772(6)
  04e4f20  stw 4, 276(31)
  04e4f24  lwz 19, -2776(7)
  04e4f28  extsw 4, 21
  04e4f2c  lwz 3, 11980(5)
  04e4f30  addic 6, 19, 1
  04e4f34  addic 3, 3, 124
  04e4f38  lis 5, 1
  04e4f3c  stw 6, -2776(7)
  04e4f40  stw 19, 272(31)
  04e4f44  lwz 18, 164(1)
  04e4f48  bl 0x4fe098
  04e4f4c  nop
  04e4f50  ori 17, 3, 0
  04e4f54  addic 4, 31, 264
  04e4f58  bl 0x64f2a4
  04e4f5c  ld 2, 40(1)
  04e4f60  lwz 5, 264(31)
  04e4f64  clrlwi 3, 19, 24
  04e4f68  ori 7, 22, 0
  04e4f6c  clrlwi 8, 18, 24
  04e4f70  srwi 9, 5, 16
  04e4f74  li 4, 0
  04e4f78  ori 6, 21, 0
  04e4f7c  li 10, 2
  04e4f80  bl 0x64f3c4
  04e4f84  ld 2, 40(1)
  04e4f88  lis 22, 144
  04e4f8c  lwz 3, 276(31)
  04e4f90  li 7, 1
  04e4f94  stw 17, 244(31)
  04e4f98  li 8, 7
  04e4f9c  lwz 4, 264(31)
  04e4fa0  li 10, 255
  04e4fa4  lwz 5, 312(31)
  04e4fa8  clrlwi 3, 3, 24
  04e4fac  lwz 6, 320(31)
  04e4fb0  lwz 9, -23008(22)
  04e4fb4  std 7, 112(1)
  04e4fb8  std 8, 120(1)
  04e4fbc  std 20, 128(1)
  04e4fc0  ori 7, 9, 0
  04e4fc4  std 10, 136(1)
  04e4fc8  li 8, 2
  04e4fcc  ori 9, 24, 0
  04e4fd0  li 10, 0
  04e4fd4  bl 0x64f3e4
  04e4fd8  ld 2, 40(1)
  04e4fdc  lwz 3, 312(31)
  04e4fe0  lwz 4, 320(31)
  04e4fe4  mullw 3, 3, 4
  04e4fe8  lwz 4, -23008(22)
  04e4fec  addc 3, 4, 3
  04e4ff0  stw 3, -23008(22)
  04e4ff4  b 0x4e50b4
  04e4ff8  cmpwi 25, 1
  04e4ffc  cmpwi 1, 25, 0
  04e5000  cmpwi 6, 25, 2
  04e5004  bt 1, 0x4e5010
  04e5008  bf 5, 0x4e5028
  04e500c  b 0x4e5018
  04e5010  bf 25, 0x4e5020
  04e5014  b 0x4e5028
  04e5018  li 3, 2
  04e501c  b 0x4e502c
  04e5020  li 3, 4
  04e5024  b 0x4e502c
  04e5028  li 3, 1
  04e502c  mullw 3, 22, 3
  04e5030  mullw 22, 3, 21
  04e5034  stw 3, 336(31)
  04e5038  li 4, -1
  04e503c  lis 3, 144
  04e5040  stw 22, 292(31)
  04e5044  stw 4, 276(31)
  04e5048  lwz 3, 11980(3)
  04e504c  stw 4, 272(31)
  04e5050  bl 0x50436c
  04e5054  nop
  04e5058  clrlwi 4, 22, 12
  04e505c  li 5, 0
  04e5060  subc 6, 22, 4
  04e5064  subc 4, 5, 4
  04e5068  lis 7, 16
  04e506c  cntlzw 4, 4
  04e5070  addc 6, 6, 7
  04e5074  sldi 4, 4, 58
  04e5078  subc 7, 22, 6
  04e507c  sradi 4, 4, 63
  04e5080  lis 5, 1
  04e5084  and 4, 4, 7
  04e5088  addc 4, 6, 4
  04e508c  extsw 4, 4
  04e5090  bl 0x4fe098
  04e5094  nop
  04e5098  stw 3, 244(31)
  04e509c  b 0x4e50b4
  04e50a0  li 3, 64
  04e50a4  li 4, 0
  04e50a8  stw 3, 336(31)
  04e50ac  stw 4, 292(31)
  04e50b0  stw 4, 244(31)
  04e50b4  li 3, 0
  04e50b8  li 4, 0
  04e50bc  li 5, 8
  04e50c0  subc 4, 4, 27
  04e50c4  stw 3, 0(31)
  04e50c8  subc 5, 5, 27
  04e50cc  stw 3, 4(31)
  04e50d0  cntlzw 4, 4
  04e50d4  stw 3, 8(31)
  04e50d8  cmpwi 23, 2
  04e50dc  stw 3, 12(31)
  04e50e0  sldi 4, 4, 58
  04e50e4  stw 3, 16(31)
  04e50e8  stw 3, 20(31)
  04e50ec  stw 3, 24(31)
  04e50f0  sradi 4, 4, 63
  04e50f4  stw 3, 28(31)
  04e50f8  stw 3, 32(31)
  04e50fc  and 4, 4, 5
  04e5100  stw 3, 36(31)
  04e5104  stw 3, 40(31)
  04e5108  addc 4, 27, 4
  04e510c  stw 3, 44(31)
  04e5110  stw 3, 48(31)
  04e5114  stw 3, 52(31)
  04e5118  stw 3, 56(31)
  04e511c  stb 4, 2(31)
  04e5120  bf 2, 0x4e5130
  04e5124  li 4, 19
  04e5128  stb 4, 3(31)
  04e512c  b 0x4e5154
  04e5130  cmpwi 23, 3
  04e5134  bf 2, 0x4e5144
  04e5138  li 4, 23
  04e513c  stb 4, 3(31)
  04e5140  b 0x4e5154
  04e5144  cmpwi 23, 4
  04e5148  bf 2, 0x4e5154
  04e514c  li 4, 31
  04e5150  stb 4, 3(31)
  04e5154  cmpwi 23, 0
  04e5158  bf 1, 0x4e5190
  04e515c  ori 4, 31, 0
  04e5160  ori 5, 31, 0
  04e5164  ori 6, 23, 0
  04e5168  lwz 7, 248(5)
  04e516c  stb 28, 4(4)
  04e5170  addic 6, 6, -1
  04e5174  lwz 8, 328(31)
  04e5178  addic 4, 4, 1
  04e517c  stw 7, 8(5)
  04e5180  cmpwi 6, 0
  04e5184  stw 8, 24(5)
  04e5188  addic 5, 5, 4
  04e518c  bt 1, 0x4e5168
  04e5190  cmpwi 23, 4
  04e5194  bf 0, 0x4e51d8
  04e5198  slwi 4, 23, 2
  04e519c  addc 5, 23, 31
  04e51a0  li 7, 4
  04e51a4  addc 6, 31, 4
  04e51a8  subc 7, 7, 23
  04e51ac  li 4, 64
  04e51b0  clrldi 5, 5, 32
  04e51b4  clrldi 6, 6, 32
  04e51b8  addic 7, 7, -1
  04e51bc  stb 3, 4(5)
  04e51c0  stw 3, 8(6)
  04e51c4  cmpwi 7, 0
  04e51c8  stw 4, 24(6)
  04e51cc  addic 5, 5, 1
  04e51d0  addic 6, 6, 4
  04e51d4  bt 1, 0x4e51b8
  04e51d8  cmpwi 25, 0
  04e51dc  bt 2, 0x4e51fc
  04e51e0  lwz 4, 264(31)
  04e51e4  stb 25, 40(31)
  04e51e8  lwz 5, 336(31)
  04e51ec  stw 4, 44(31)
  04e51f0  ori 4, 5, 0
  04e51f4  stb 26, 41(31)
  04e51f8  b 0x4e520c
  04e51fc  li 5, 1
  04e5200  stb 3, 41(31)
  04e5204  li 4, 64
  04e5208  stb 5, 40(31)
  04e520c  stw 4, 48(31)
  04e5210  li 5, 2
  04e5214  li 4, 1
  04e5218  stb 24, 1(31)
  04e521c  sth 30, 52(31)
  04e5220  li 24, 165
  04e5224  sth 29, 54(31)
  04e5228  lis 6, 0
  04e522c  cmpwi 23, 1
  04e5230  stb 4, 0(31)
  04e5234  sth 3, 56(31)
  04e5238  ori 6, 6, 43748
  04e523c  sth 3, 58(31)
  04e5240  stb 24, 120(31)
  04e5244  stb 4, 121(31)
  04e5248  stb 5, 122(31)
  04e524c  stb 3, 123(31)
  04e5250  stw 6, 124(31)
  04e5254  sth 30, 128(31)
  04e5258  sth 29, 130(31)
  04e525c  lwz 7, 328(31)
  04e5260  sth 4, 132(31)
  04e5264  stb 3, 134(31)
  04e5268  lwz 8, 248(31)
  04e526c  stw 7, 136(31)
  04e5270  stw 8, 140(31)
  04e5274  bf 1, 0x4e52cc
  04e5278  addic 7, 31, 24
  04e527c  addic 8, 31, 4
  04e5280  addic 23, 23, -1
  04e5284  stb 24, 120(7)
  04e5288  addic 23, 23, -1
  04e528c  stb 4, 121(7)
  04e5290  stb 5, 122(7)
  04e5294  stb 3, 123(7)
  04e5298  cmpwi 23, 0
  04e529c  stw 6, 124(7)
  04e52a0  sth 30, 128(7)
  04e52a4  sth 29, 130(7)
  04e52a8  sth 4, 132(7)
  04e52ac  stb 3, 134(7)
  04e52b0  lwz 9, 328(31)
  04e52b4  stw 9, 136(7)
  04e52b8  lwz 9, 248(8)
  04e52bc  addic 8, 8, 4
  04e52c0  stw 9, 140(7)
  04e52c4  addic 7, 7, 24
  04e52c8  bt 1, 0x4e5284
  04e52cc  cmpwi 25, 0
  04e52d0  bt 2, 0x4e5310
  04e52d4  lis 6, 0
  04e52d8  stb 24, 216(31)
  04e52dc  stb 4, 217(31)
  04e52e0  ori 6, 6, 43411
  04e52e4  stb 5, 218(31)
  04e52e8  stb 3, 219(31)
  04e52ec  stw 6, 220(31)
  04e52f0  sth 30, 224(31)
  04e52f4  sth 29, 226(31)
  04e52f8  lwz 5, 336(31)
  04e52fc  sth 4, 228(31)
  04e5300  stb 3, 230(31)
  04e5304  lwz 3, 264(31)
  04e5308  stw 5, 232(31)
  04e530c  stw 3, 236(31)
  04e5310  ld 0, 304(1)
  04e5314  mtlr 0
  04e5318  ld 17, 168(1)
  04e531c  ld 18, 176(1)
  04e5320  ld 19, 184(1)
  04e5324  ld 20, 192(1)
  04e5328  ld 21, 200(1)
  04e532c  ld 22, 208(1)
  04e5330  ld 23, 216(1)
  04e5334  ld 24, 224(1)
  04e5338  ld 25, 232(1)
  04e533c  ld 26, 240(1)
  04e5340  ld 27, 248(1)
  04e5344  ld 28, 256(1)
  04e5348  ld 29, 264(1)
  04e534c  ld 30, 272(1)
  04e5350  ld 31, 280(1)
  04e5354  addi 1, 1, 288
  04e5358  blr

FUN_004e535c:   # 0x4e535c, 0xfc bytes
  04e535c  stdu 1, -128(1)
  04e5360  mflr 0
  04e5364  std 0, 144(1)
  04e5368  std 31, 120(1)
  04e536c  clrlwi 4, 4, 24
  04e5370  ori 31, 3, 0
  04e5374  cmpwi 4, 0
  04e5378  bt 2, 0x4e538c
  04e537c  lwz 3, 268(31)
  04e5380  clrlwi 3, 3, 24
  04e5384  bl 0x64f424
  04e5388  ld 2, 40(1)
  04e538c  lwz 3, 268(31)
  04e5390  lwz 5, 248(31)
  04e5394  li 4, 0
  04e5398  clrlwi 3, 3, 24
  04e539c  lwz 6, 284(31)
  04e53a0  li 8, 0
  04e53a4  lwz 7, 328(31)
  04e53a8  li 9, 0
  04e53ac  li 10, 0
  04e53b0  bl 0x64f3a4
  04e53b4  ld 2, 40(1)
  04e53b8  cmpwi 3, 0
  04e53bc  bt 2, 0x4e53d4
  04e53c0  lis 3, 102
  04e53c4  addic 3, 3, -27700
  04e53c8  bl 0x5cd098
  04e53cc  nop
  04e53d0  b 0x4e5444
  04e53d4  lwz 3, 268(31)
  04e53d8  clrlwi 3, 3, 24
  04e53dc  bl 0x64f2e4
  04e53e0  ld 2, 40(1)
  04e53e4  cmpwi 3, 0
  04e53e8  bt 2, 0x4e5400
  04e53ec  lis 3, 102
  04e53f0  addic 3, 3, -27668
  04e53f4  bl 0x5cd098
  04e53f8  nop
  04e53fc  b 0x4e5444
  04e5400  lwz 3, 280(31)
  04e5404  lwz 4, 248(31)
  04e5408  lwz 5, 328(31)
  04e540c  clrlwi 3, 3, 24
  04e5410  lwz 6, 296(31)
  04e5414  lwz 7, 304(31)
  04e5418  bl 0x64f344
  04e541c  ld 2, 40(1)
  04e5420  cmpwi 3, 0
  04e5424  bt 2, 0x4e543c
  04e5428  lis 3, 102
  04e542c  addic 3, 3, -27636
  04e5430  bl 0x5cd098
  04e5434  nop
  04e5438  b 0x4e5444
  04e543c  lwz 3, 328(31)
  04e5440  stw 3, 24(31)
  04e5444  ld 0, 144(1)
  04e5448  mtlr 0
  04e544c  ld 31, 120(1)
  04e5450  addi 1, 1, 128
  04e5454  blr

FUN_004e5458:   # 0x4e5458, 0x90 bytes
  04e5458  stdu 1, -128(1)
  04e545c  mflr 0
  04e5460  std 0, 144(1)
  04e5464  clrlwi 3, 4, 12
  04e5468  li 6, 0
  04e546c  lis 8, 144
  04e5470  subc 7, 4, 3
  04e5474  subc 3, 6, 3
  04e5478  lis 9, 16
  04e547c  std 31, 120(1)
  04e5480  cntlzw 3, 3
  04e5484  ori 31, 5, 0
  04e5488  addc 6, 7, 9
  04e548c  lwz 5, 11980(8)
  04e5490  sldi 7, 3, 58
  04e5494  subc 4, 4, 6
  04e5498  addic 3, 5, 124
  04e549c  sradi 5, 7, 63
  04e54a0  and 4, 5, 4
  04e54a4  lis 5, 1
  04e54a8  addc 4, 6, 4
  04e54ac  std 30, 112(1)
  04e54b0  extsw 4, 4
  04e54b4  bl 0x4fe098
  04e54b8  nop
  04e54bc  ori 30, 3, 0
  04e54c0  ori 4, 31, 0
  04e54c4  bl 0x64f2a4
  04e54c8  ld 2, 40(1)
  04e54cc  ori 3, 30, 0
  04e54d0  ld 0, 144(1)
  04e54d4  mtlr 0
  04e54d8  ld 30, 112(1)
  04e54dc  ld 31, 120(1)
  04e54e0  addi 1, 1, 128
  04e54e4  blr

FUN_004e54e8:   # 0x4e54e8, 0x324 bytes
  04e54e8  stdu 1, -192(1)
  04e54ec  mflr 0
  04e54f0  std 0, 208(1)
  04e54f4  std 30, 176(1)
  04e54f8  std 31, 184(1)
  04e54fc  ori 30, 4, 0
  04e5500  std 29, 168(1)
  04e5504  ori 31, 5, 0
  04e5508  ori 29, 3, 0
  04e550c  addic 3, 30, 63
  04e5510  addic 4, 31, 63
  04e5514  rlwinm 3, 3, 0, 0, 25
  04e5518  rlwinm 4, 4, 0, 0, 25
  04e551c  stw 30, 296(29)
  04e5520  std 28, 160(1)
  04e5524  addic 5, 6, 63
  04e5528  ori 28, 8, 0
  04e552c  stw 3, 312(29)
  04e5530  stw 4, 320(29)
  04e5534  addic 3, 7, 63
  04e5538  rlwinm 4, 5, 0, 0, 25
  04e553c  stw 31, 304(29)
  04e5540  rlwinm 3, 3, 0, 0, 25
  04e5544  stw 6, 300(29)
  04e5548  lis 5, 271
  04e554c  stw 7, 308(29)
  04e5550  stw 4, 316(29)
  04e5554  stw 3, 324(29)
  04e5558  ori 3, 28, 0
  04e555c  lwz 4, -2768(5)
  04e5560  addic 6, 4, 1
  04e5564  stw 6, -2768(5)
  04e5568  std 27, 152(1)
  04e556c  stw 4, 280(29)
  04e5570  std 26, 144(1)
  04e5574  lwz 27, 312(29)
  04e5578  lwz 26, 320(29)
  04e557c  bl 0x4e402c
  04e5580  ori 9, 3, 0
  04e5584  ori 4, 29, 0
  04e5588  li 8, 0
  04e558c  addic 3, 1, 112
  04e5590  ori 5, 27, 0
  04e5594  ori 6, 26, 0
  04e5598  ori 7, 28, 0
  04e559c  bl 0x4e3ee8
  04e55a0  lis 4, 271
  04e55a4  lwz 3, 116(1)
  04e55a8  lwz 5, 112(1)
  04e55ac  stw 3, 328(29)
  04e55b0  stw 5, 284(29)
  04e55b4  ori 3, 28, 0
  04e55b8  lwz 5, -2776(4)
  04e55bc  addic 6, 5, 1
  04e55c0  stw 6, -2776(4)
  04e55c4  stw 5, 268(29)
  04e55c8  lwz 27, 316(29)
  04e55cc  lwz 26, 324(29)
  04e55d0  bl 0x4e402c
  04e55d4  ori 9, 3, 0
  04e55d8  addic 3, 1, 124
  04e55dc  li 8, 0
  04e55e0  ori 4, 29, 0
  04e55e4  ori 5, 27, 0
  04e55e8  ori 6, 26, 0
  04e55ec  ori 7, 28, 0
  04e55f0  bl 0x4e3ee8
  04e55f4  lwz 3, 124(1)
  04e55f8  lwz 4, 284(29)
  04e55fc  lis 5, 144
  04e5600  lis 7, 16
  04e5604  subc 6, 3, 4
  04e5608  subc 4, 4, 3
  04e560c  sradi 6, 6, 63
  04e5610  and 4, 6, 4
  04e5614  lwz 6, 128(1)
  04e5618  addc 4, 3, 4
  04e561c  stw 3, 288(29)
  04e5620  stw 6, 332(29)
  04e5624  clrlwi 3, 4, 12
  04e5628  li 6, 0
  04e562c  lwz 5, 11980(5)
  04e5630  subc 8, 4, 3
  04e5634  subc 3, 6, 3
  04e5638  addc 6, 8, 7
  04e563c  cntlzw 7, 3
  04e5640  addic 3, 5, 124
  04e5644  sldi 5, 7, 58
  04e5648  subc 4, 4, 6
  04e564c  sradi 5, 5, 63
  04e5650  and 4, 5, 4
  04e5654  lis 5, 1
  04e5658  addc 4, 6, 4
  04e565c  extsw 4, 4
  04e5660  bl 0x4fe098
  04e5664  nop
  04e5668  ori 28, 3, 0
  04e566c  addic 4, 29, 248
  04e5670  bl 0x64f2a4
  04e5674  ld 2, 40(1)
  04e5678  li 3, 0
  04e567c  stw 28, 240(29)
  04e5680  lwz 9, 248(29)
  04e5684  li 7, 8
  04e5688  li 8, 1
  04e568c  li 10, 3
  04e5690  stw 3, 0(29)
  04e5694  addic 6, 29, 1
  04e5698  stw 3, 4(29)
  04e569c  addic 5, 29, 4
  04e56a0  stw 3, 12(29)
  04e56a4  li 4, 64
  04e56a8  stw 3, 16(29)
  04e56ac  mtctr 10
  04e56b0  stw 3, 20(29)
  04e56b4  stw 3, 24(29)
  04e56b8  stw 3, 28(29)
  04e56bc  stw 3, 32(29)
  04e56c0  stw 3, 36(29)
  04e56c4  stw 3, 40(29)
  04e56c8  stw 3, 44(29)
  04e56cc  stw 3, 48(29)
  04e56d0  stw 3, 52(29)
  04e56d4  stw 3, 56(29)
  04e56d8  stb 7, 2(29)
  04e56dc  stb 8, 3(29)
  04e56e0  stb 3, 4(29)
  04e56e4  stw 9, 8(29)
  04e56e8  stb 3, 4(6)
  04e56ec  stw 3, 8(5)
  04e56f0  stw 4, 24(5)
  04e56f4  addic 6, 6, 1
  04e56f8  addic 5, 5, 4
  04e56fc  bdnz 0x4e56e8
  04e5700  li 7, 1
  04e5704  lwz 5, 248(29)
  04e5708  ori 6, 4, 0
  04e570c  stb 3, 41(29)
  04e5710  li 9, 0
  04e5714  li 4, 0
  04e5718  stb 7, 40(29)
  04e571c  li 8, 0
  04e5720  stw 6, 48(29)
  04e5724  li 10, 0
  04e5728  stb 7, 0(29)
  04e572c  stb 3, 1(29)
  04e5730  sth 30, 52(29)
  04e5734  sth 31, 54(29)
  04e5738  lwz 6, 268(29)
  04e573c  sth 3, 56(29)
  04e5740  sth 3, 58(29)
  04e5744  clrlwi 3, 6, 24
  04e5748  lwz 6, 284(29)
  04e574c  lwz 7, 328(29)
  04e5750  bl 0x64f3a4
  04e5754  ld 2, 40(1)
  04e5758  cmpwi 3, 0
  04e575c  bt 2, 0x4e5774
  04e5760  lis 3, 102
  04e5764  addic 3, 3, -27700
  04e5768  bl 0x5cd098
  04e576c  nop
  04e5770  b 0x4e57e4
  04e5774  lwz 3, 268(29)
  04e5778  clrlwi 3, 3, 24
  04e577c  bl 0x64f2e4
  04e5780  ld 2, 40(1)
  04e5784  cmpwi 3, 0
  04e5788  bt 2, 0x4e57a0
  04e578c  lis 3, 102
  04e5790  addic 3, 3, -27668
  04e5794  bl 0x5cd098
  04e5798  nop
  04e579c  b 0x4e57e4
  04e57a0  lwz 3, 280(29)
  04e57a4  lwz 4, 248(29)
  04e57a8  lwz 5, 328(29)
  04e57ac  clrlwi 3, 3, 24
  04e57b0  lwz 6, 296(29)
  04e57b4  lwz 7, 304(29)
  04e57b8  bl 0x64f344
  04e57bc  ld 2, 40(1)
  04e57c0  cmpwi 3, 0
  04e57c4  bt 2, 0x4e57dc
  04e57c8  lis 3, 102
  04e57cc  addic 3, 3, -27636
  04e57d0  bl 0x5cd098
  04e57d4  nop
  04e57d8  b 0x4e57e4
  04e57dc  lwz 3, 328(29)
  04e57e0  stw 3, 24(29)
  04e57e4  ld 0, 208(1)
  04e57e8  mtlr 0
  04e57ec  ld 26, 144(1)
  04e57f0  ld 27, 152(1)
  04e57f4  ld 28, 160(1)
  04e57f8  ld 29, 168(1)
  04e57fc  ld 30, 176(1)
  04e5800  ld 31, 184(1)
  04e5804  addi 1, 1, 192
  04e5808  blr

FUN_004e580c:   # 0x4e580c, 0x228 bytes
  04e580c  stdu 1, -144(1)
  04e5810  mflr 0
  04e5814  std 0, 160(1)
  04e5818  std 31, 136(1)
  04e581c  std 30, 128(1)
  04e5820  ori 31, 3, 0
  04e5824  ori 30, 4, 0
  04e5828  slwi 3, 30, 2
  04e582c  stw 30, 296(31)
  04e5830  stw 30, 312(31)
  04e5834  stw 30, 304(31)
  04e5838  std 29, 120(1)
  04e583c  stw 30, 320(31)
  04e5840  bl 0x64f244
  04e5844  ld 2, 40(1)
  04e5848  addic 4, 30, 31
  04e584c  stw 3, 336(31)
  04e5850  lis 5, 0
  04e5854  rlwinm 4, 4, 0, 0, 26
  04e5858  mullw 4, 3, 4
  04e585c  ori 5, 5, 65535
  04e5860  lis 6, 144
  04e5864  addc 4, 4, 5
  04e5868  lis 5, 271
  04e586c  rlwinm 4, 4, 0, 0, 15
  04e5870  li 7, 0
  04e5874  stw 4, 292(31)
  04e5878  lwz 3, -2776(5)
  04e587c  addic 4, 3, 1
  04e5880  stw 4, -2776(5)
  04e5884  stw 3, 272(31)
  04e5888  lwz 3, 11980(6)
  04e588c  lis 4, 16
  04e5890  lwz 6, 292(31)
  04e5894  lis 5, 1
  04e5898  addic 3, 3, 124
  04e589c  clrlwi 8, 6, 12
  04e58a0  subc 7, 7, 8
  04e58a4  subc 9, 6, 8
  04e58a8  cntlzw 7, 7
  04e58ac  addc 4, 9, 4
  04e58b0  sldi 7, 7, 58
  04e58b4  subc 6, 6, 4
  04e58b8  sradi 7, 7, 63
  04e58bc  and 6, 7, 6
  04e58c0  addc 4, 4, 6
  04e58c4  extsw 4, 4
  04e58c8  bl 0x4fe098
  04e58cc  nop
  04e58d0  ori 29, 3, 0
  04e58d4  addic 4, 31, 264
  04e58d8  bl 0x64f2a4
  04e58dc  ld 2, 40(1)
  04e58e0  lwz 3, 272(31)
  04e58e4  li 4, 0
  04e58e8  stw 29, 244(31)
  04e58ec  li 8, 10
  04e58f0  lwz 5, 264(31)
  04e58f4  clrlwi 3, 3, 24
  04e58f8  lwz 6, 292(31)
  04e58fc  li 9, 0
  04e5900  lwz 7, 336(31)
  04e5904  li 10, 2
  04e5908  bl 0x64f3c4
  04e590c  ld 2, 40(1)
  04e5910  li 3, 0
  04e5914  li 5, 8
  04e5918  li 4, 64
  04e591c  li 7, 2
  04e5920  stw 3, 0(31)
  04e5924  li 6, 1
  04e5928  stw 3, 4(31)
  04e592c  lis 8, 0
  04e5930  stw 3, 40(31)
  04e5934  stw 3, 52(31)
  04e5938  stw 3, 56(31)
  04e593c  ori 8, 8, 43748
  04e5940  stb 5, 2(31)
  04e5944  stb 3, 3(31)
  04e5948  stb 3, 4(31)
  04e594c  li 5, 176
  04e5950  stw 3, 8(31)
  04e5954  li 10, 165
  04e5958  stw 4, 24(31)
  04e595c  stb 3, 5(31)
  04e5960  stw 3, 12(31)
  04e5964  lis 11, 0
  04e5968  stw 4, 28(31)
  04e596c  stb 3, 6(31)
  04e5970  stw 3, 16(31)
  04e5974  ori 11, 11, 43411
  04e5978  stw 4, 32(31)
  04e597c  stb 3, 7(31)
  04e5980  stw 3, 20(31)
  04e5984  stw 4, 36(31)
  04e5988  lwz 4, 264(31)
  04e598c  stb 7, 40(31)
  04e5990  stb 3, 41(31)
  04e5994  lwz 9, 336(31)
  04e5998  stw 4, 44(31)
  04e599c  stw 9, 48(31)
  04e59a0  stb 6, 0(31)
  04e59a4  stb 3, 1(31)
  04e59a8  sth 30, 52(31)
  04e59ac  sth 30, 54(31)
  04e59b0  sth 3, 56(31)
  04e59b4  sth 3, 58(31)
  04e59b8  stb 5, 120(31)
  04e59bc  stb 6, 121(31)
  04e59c0  stb 7, 122(31)
  04e59c4  stb 3, 123(31)
  04e59c8  stw 8, 124(31)
  04e59cc  sth 30, 128(31)
  04e59d0  sth 30, 130(31)
  04e59d4  sth 6, 132(31)
  04e59d8  stb 3, 134(31)
  04e59dc  stw 9, 136(31)
  04e59e0  stw 4, 140(31)
  04e59e4  stb 10, 216(31)
  04e59e8  stb 6, 217(31)
  04e59ec  stb 7, 218(31)
  04e59f0  stb 3, 219(31)
  04e59f4  lwz 5, 296(31)
  04e59f8  stw 11, 220(31)
  04e59fc  lwz 7, 304(31)
  04e5a00  sth 5, 224(31)
  04e5a04  sth 7, 226(31)
  04e5a08  sth 6, 228(31)
  04e5a0c  stb 3, 230(31)
  04e5a10  stw 9, 232(31)
  04e5a14  stw 4, 236(31)
  04e5a18  ld 0, 160(1)
  04e5a1c  mtlr 0
  04e5a20  ld 29, 120(1)
  04e5a24  ld 30, 128(1)
  04e5a28  ld 31, 136(1)
  04e5a2c  addi 1, 1, 144
  04e5a30  blr

FUN_004e5a34:   # 0x4e5a34, 0x228 bytes
  04e5a34  stdu 1, -176(1)
  04e5a38  mflr 0
  04e5a3c  std 0, 192(1)
  04e5a40  std 31, 168(1)
  04e5a44  std 30, 160(1)
  04e5a48  ori 31, 4, 0
  04e5a4c  ori 30, 3, 0
  04e5a50  lwz 3, 296(31)
  04e5a54  srwi 4, 3, 1
  04e5a58  li 3, 8
  04e5a5c  addic 5, 4, 63
  04e5a60  stw 4, 296(30)
  04e5a64  std 29, 152(1)
  04e5a68  lwz 4, 304(31)
  04e5a6c  rlwinm 29, 5, 0, 0, 25
  04e5a70  srwi 4, 4, 1
  04e5a74  addic 5, 4, 63
  04e5a78  std 28, 144(1)
  04e5a7c  stw 29, 312(30)
  04e5a80  rlwinm 28, 5, 0, 0, 25
  04e5a84  stw 4, 304(30)
  04e5a88  stw 28, 320(30)
  04e5a8c  bl 0x4e402c
  04e5a90  ori 9, 3, 0
  04e5a94  ori 6, 28, 0
  04e5a98  addic 3, 1, 112
  04e5a9c  ori 4, 30, 0
  04e5aa0  ori 5, 29, 0
  04e5aa4  li 7, 8
  04e5aa8  li 8, 4
  04e5aac  bl 0x4e3ee8
  04e5ab0  lwz 6, 116(1)
  04e5ab4  lwz 3, 112(1)
  04e5ab8  li 5, 0
  04e5abc  lwz 4, 240(31)
  04e5ac0  stw 3, 284(30)
  04e5ac4  ori 29, 5, 0
  04e5ac8  stw 6, 328(30)
  04e5acc  lwz 3, 248(31)
  04e5ad0  stw 4, 240(30)
  04e5ad4  stw 3, 248(30)
  04e5ad8  lwz 4, 292(31)
  04e5adc  cmpwi 4, 0
  04e5ae0  ori 4, 29, 0
  04e5ae4  bt 2, 0x4e5b18
  04e5ae8  lwz 5, 312(30)
  04e5aec  ori 4, 30, 0
  04e5af0  lwz 6, 320(30)
  04e5af4  addic 3, 1, 124
  04e5af8  li 7, 2
  04e5afc  li 8, 4
  04e5b00  li 9, 4
  04e5b04  bl 0x4e3ee8
  04e5b08  lwz 4, 128(1)
  04e5b0c  lwz 5, 124(1)
  04e5b10  lwz 6, 116(1)
  04e5b14  lwz 3, 248(30)
  04e5b18  stw 4, 336(30)
  04e5b1c  li 7, 8
  04e5b20  stw 5, 292(30)
  04e5b24  li 8, 1
  04e5b28  lwz 4, 276(31)
  04e5b2c  lwz 5, 244(31)
  04e5b30  stw 4, 276(30)
  04e5b34  lwz 4, 264(31)
  04e5b38  stw 5, 244(30)
  04e5b3c  stw 29, 0(30)
  04e5b40  stw 4, 264(30)
  04e5b44  li 5, 3
  04e5b48  stw 29, 4(30)
  04e5b4c  addic 4, 30, 1
  04e5b50  stw 29, 12(30)
  04e5b54  mtctr 5
  04e5b58  stw 29, 16(30)
  04e5b5c  stw 29, 20(30)
  04e5b60  stw 29, 28(30)
  04e5b64  stw 29, 32(30)
  04e5b68  stw 29, 36(30)
  04e5b6c  stw 29, 40(30)
  04e5b70  stw 29, 44(30)
  04e5b74  stw 29, 48(30)
  04e5b78  stw 29, 52(30)
  04e5b7c  stw 29, 56(30)
  04e5b80  stb 7, 2(30)
  04e5b84  stb 8, 3(30)
  04e5b88  stw 3, 8(30)
  04e5b8c  stb 29, 4(30)
  04e5b90  stw 6, 24(30)
  04e5b94  addic 3, 30, 4
  04e5b98  li 6, 64
  04e5b9c  stb 29, 4(4)
  04e5ba0  stw 29, 8(3)
  04e5ba4  addic 4, 4, 1
  04e5ba8  stw 6, 24(3)
  04e5bac  addic 3, 3, 4
  04e5bb0  bdnz 0x4e5b9c
  04e5bb4  lbz 6, 40(31)
  04e5bb8  lwz 7, 336(30)
  04e5bbc  li 3, 1
  04e5bc0  stb 6, 40(30)
  04e5bc4  li 4, 4
  04e5bc8  lwz 6, 44(31)
  04e5bcc  lis 9, 0
  04e5bd0  stw 7, 48(30)
  04e5bd4  li 5, 165
  04e5bd8  stw 6, 44(30)
  04e5bdc  li 8, 2
  04e5be0  lbz 6, 41(31)
  04e5be4  stb 3, 0(30)
  04e5be8  stb 6, 41(30)
  04e5bec  ori 6, 9, 43411
  04e5bf0  lwz 9, 296(30)
  04e5bf4  stb 4, 1(30)
  04e5bf8  lwz 4, 304(30)
  04e5bfc  sth 9, 52(30)
  04e5c00  sth 4, 54(30)
  04e5c04  sth 29, 56(30)
  04e5c08  sth 29, 58(30)
  04e5c0c  stb 5, 216(30)
  04e5c10  stb 3, 217(30)
  04e5c14  stb 8, 218(30)
  04e5c18  stb 29, 219(30)
  04e5c1c  stw 6, 220(30)
  04e5c20  sth 9, 224(30)
  04e5c24  sth 4, 226(30)
  04e5c28  sth 3, 228(30)
  04e5c2c  lwz 3, 264(30)
  04e5c30  stb 29, 230(30)
  04e5c34  stw 7, 232(30)
  04e5c38  stw 3, 236(30)
  04e5c3c  ld 0, 192(1)
  04e5c40  mtlr 0
  04e5c44  ld 28, 144(1)
  04e5c48  ld 29, 152(1)
  04e5c4c  ld 30, 160(1)
  04e5c50  ld 31, 168(1)
  04e5c54  addi 1, 1, 176
  04e5c58  blr

FUN_004e5c5c:   # 0x4e5c5c, 0x78 bytes
  04e5c5c  lwz 5, 336(4)
  04e5c60  stw 5, 336(3)
  04e5c64  lwz 6, 292(4)
  04e5c68  lwz 7, 244(4)
  04e5c6c  stw 6, 292(3)
  04e5c70  lwz 6, 276(4)
  04e5c74  stw 7, 244(3)
  04e5c78  stw 6, 276(3)
  04e5c7c  lwz 6, 264(4)
  04e5c80  stw 6, 264(3)
  04e5c84  lbz 6, 40(4)
  04e5c88  stb 6, 40(3)
  04e5c8c  lwz 6, 44(4)
  04e5c90  stw 5, 48(3)
  04e5c94  stw 6, 44(3)
  04e5c98  lbz 5, 41(4)
  04e5c9c  stb 5, 41(3)
  04e5ca0  lwz 5, 216(4)
  04e5ca4  lwz 6, 220(4)
  04e5ca8  lwz 7, 224(4)
  04e5cac  lwz 8, 228(4)
  04e5cb0  stw 5, 216(3)
  04e5cb4  stw 6, 220(3)
  04e5cb8  stw 7, 224(3)
  04e5cbc  stw 8, 228(3)
  04e5cc0  lwz 5, 232(4)
  04e5cc4  lwz 4, 236(4)
  04e5cc8  stw 5, 232(3)
  04e5ccc  stw 4, 236(3)
  04e5cd0  blr

FUN_004e5cd4:   # 0x4e5cd4, 0x64 bytes
  04e5cd4  stdu 1, -128(1)
  04e5cd8  mflr 0
  04e5cdc  std 0, 144(1)
  04e5ce0  lis 3, 144
  04e5ce4  std 31, 120(1)
  04e5ce8  rldicl 4, 4, 32, 32
  04e5cec  ori 31, 8, 0
  04e5cf0  lis 5, 1
  04e5cf4  extsw 4, 4
  04e5cf8  lwz 3, 11980(3)
  04e5cfc  std 30, 112(1)
  04e5d00  addic 3, 3, 124
  04e5d04  bl 0x4fe098
  04e5d08  nop
  04e5d0c  ori 30, 3, 0
  04e5d10  ori 4, 31, 0
  04e5d14  bl 0x64f2a4
  04e5d18  ld 2, 40(1)
  04e5d1c  ori 3, 30, 0
  04e5d20  ld 0, 144(1)
  04e5d24  mtlr 0
  04e5d28  ld 30, 112(1)
  04e5d2c  ld 31, 120(1)
  04e5d30  addi 1, 1, 128
  04e5d34  blr

FUN_004e5d38:   # 0x4e5d38, 0x38 bytes
  04e5d38  cmpwi 3, 2
  04e5d3c  cmpwi 1, 3, 5
  04e5d40  cmpwi 6, 3, 0
  04e5d44  bt 1, 0x4e5d50
  04e5d48  bt 26, 0x4e5d58
  04e5d4c  b 0x4e5d68
  04e5d50  bf 5, 0x4e5d60
  04e5d54  b 0x4e5d68
  04e5d58  li 3, 1
  04e5d5c  b 0x4e5d6c
  04e5d60  li 3, 2
  04e5d64  b 0x4e5d6c
  04e5d68  li 3, 1
  04e5d6c  blr

FUN_004e5d70:   # 0x4e5d70, 0x40 bytes
  04e5d70  cmpwi 3, 2
  04e5d74  cmpwi 1, 3, 5
  04e5d78  cmpwi 6, 3, 3
  04e5d7c  cmpwi 7, 3, 0
  04e5d80  bt 1, 0x4e5d8c
  04e5d84  bt 30, 0x4e5d98
  04e5d88  b 0x4e5da8
  04e5d8c  bf 25, 0x4e5d98
  04e5d90  bf 5, 0x4e5da0
  04e5d94  b 0x4e5da8
  04e5d98  li 3, 1
  04e5d9c  b 0x4e5dac
  04e5da0  li 3, 2
  04e5da4  b 0x4e5dac
  04e5da8  li 3, 1
  04e5dac  blr

FUN_004e5db0:   # 0x4e5db0, 0x190 bytes
  04e5db0  stdu 1, -144(1)
  04e5db4  mflr 0
  04e5db8  std 0, 160(1)
  04e5dbc  std 29, 120(1)
  04e5dc0  std 31, 136(1)
  04e5dc4  ori 29, 3, 0
  04e5dc8  std 30, 128(1)
  04e5dcc  ori 31, 5, 0
  04e5dd0  ori 30, 4, 0
  04e5dd4  lwz 3, 268(29)
  04e5dd8  clrlwi 3, 3, 24
  04e5ddc  bl 0x64f424
  04e5de0  ld 2, 40(1)
  04e5de4  lwz 3, 268(29)
  04e5de8  li 4, 0
  04e5dec  lwz 5, 248(29)
  04e5df0  li 8, 0
  04e5df4  clrlwi 3, 3, 24
  04e5df8  lwz 6, 288(29)
  04e5dfc  lwz 7, 332(29)
  04e5e00  srwi 9, 5, 16
  04e5e04  li 10, 0
  04e5e08  bl 0x64f3a4
  04e5e0c  ld 2, 40(1)
  04e5e10  cmpwi 3, 0
  04e5e14  bt 2, 0x4e5e2c
  04e5e18  lis 3, 102
  04e5e1c  addic 3, 3, -27700
  04e5e20  bl 0x5cd098
  04e5e24  nop
  04e5e28  b 0x4e5f24
  04e5e2c  lwz 3, 268(29)
  04e5e30  clrlwi 3, 3, 24
  04e5e34  bl 0x64f2e4
  04e5e38  ld 2, 40(1)
  04e5e3c  cmpwi 3, 0
  04e5e40  bt 2, 0x4e5e58
  04e5e44  lis 3, 102
  04e5e48  addic 3, 3, -27668
  04e5e4c  bl 0x5cd098
  04e5e50  nop
  04e5e54  b 0x4e5f24
  04e5e58  lwz 3, 280(29)
  04e5e5c  lwz 4, 248(29)
  04e5e60  lwz 5, 332(29)
  04e5e64  clrlwi 3, 3, 24
  04e5e68  lwz 6, 300(29)
  04e5e6c  lwz 7, 308(29)
  04e5e70  bl 0x64f344
  04e5e74  ld 2, 40(1)
  04e5e78  cmpwi 3, 0
  04e5e7c  bt 2, 0x4e5e94
  04e5e80  lis 3, 102
  04e5e84  addic 3, 3, -27636
  04e5e88  bl 0x5cd098
  04e5e8c  nop
  04e5e90  b 0x4e5f24
  04e5e94  lwz 3, 332(29)
  04e5e98  stw 3, 24(29)
  04e5e9c  lwz 3, 0(29)
  04e5ea0  lwz 4, 8(29)
  04e5ea4  lwz 5, 4(29)
  04e5ea8  lwz 6, 12(29)
  04e5eac  stw 3, 60(29)
  04e5eb0  stw 4, 68(29)
  04e5eb4  stw 5, 64(29)
  04e5eb8  lwz 3, 16(29)
  04e5ebc  lwz 4, 20(29)
  04e5ec0  stw 6, 72(29)
  04e5ec4  lwz 5, 28(29)
  04e5ec8  stw 3, 76(29)
  04e5ecc  stw 4, 80(29)
  04e5ed0  lwz 3, 32(29)
  04e5ed4  lwz 4, 36(29)
  04e5ed8  stw 5, 88(29)
  04e5edc  lwz 5, 40(29)
  04e5ee0  lwz 6, 44(29)
  04e5ee4  stw 3, 92(29)
  04e5ee8  lwz 3, 24(29)
  04e5eec  stw 4, 96(29)
  04e5ef0  stw 3, 84(29)
  04e5ef4  lwz 3, 48(29)
  04e5ef8  lwz 4, 248(29)
  04e5efc  lwz 7, 56(29)
  04e5f00  stw 5, 100(29)
  04e5f04  addc 4, 4, 30
  04e5f08  lwz 5, 52(29)
  04e5f0c  stw 6, 104(29)
  04e5f10  stw 3, 108(29)
  04e5f14  stw 7, 116(29)
  04e5f18  stw 5, 112(29)
  04e5f1c  stw 4, 68(29)
  04e5f20  sth 31, 118(29)
  04e5f24  ld 0, 160(1)
  04e5f28  mtlr 0
  04e5f2c  ld 29, 120(1)
  04e5f30  ld 30, 128(1)
  04e5f34  ld 31, 136(1)
  04e5f38  addi 1, 1, 144
  04e5f3c  blr

FUN_004e5f40:   # 0x4e5f40, 0xd4 bytes
  04e5f40  stdu 1, -144(1)
  04e5f44  mflr 0
  04e5f48  std 0, 160(1)
  04e5f4c  std 31, 136(1)
  04e5f50  lis 4, 144
  04e5f54  std 30, 128(1)
  04e5f58  ori 31, 3, 0
  04e5f5c  lis 30, 144
  04e5f60  addic 5, 1, 112
  04e5f64  lwz 3, 11932(4)
  04e5f68  addic 4, 1, 116
  04e5f6c  stw 3, 196(31)
  04e5f70  lwz 3, 11984(30)
  04e5f74  std 2, 40(1)
  04e5f78  lwz 6, 0(3)
  04e5f7c  lwz 6, 20(6)
  04e5f80  lwz 7, 0(6)
  04e5f84  lwz 2, 4(6)
  04e5f88  mtctr 7
  04e5f8c  bcctrl 20, 30
  04e5f90  lwz 4, 116(1)
  04e5f94  addic 31, 31, 88
  04e5f98  ld 2, 40(1)
  04e5f9c  lis 6, 102
  04e5fa0  lwz 5, 112(1)
  04e5fa4  ori 3, 31, 0
  04e5fa8  addic 6, 6, -27600
  04e5fac  li 7, 1
  04e5fb0  extsw 5, 5
  04e5fb4  li 8, 0
  04e5fb8  bl 0x4fe39c
  04e5fbc  nop
  04e5fc0  lis 4, 102
  04e5fc4  ori 3, 31, 0
  04e5fc8  addic 4, 4, -27592
  04e5fcc  bl 0x4fe778
  04e5fd0  nop
  04e5fd4  lwz 3, 11984(30)
  04e5fd8  std 2, 40(1)
  04e5fdc  ori 4, 31, 0
  04e5fe0  lwz 5, 0(3)
  04e5fe4  lwz 5, 24(5)
  04e5fe8  lwz 6, 0(5)
  04e5fec  lwz 2, 4(5)
  04e5ff0  mtctr 6
  04e5ff4  bcctrl 20, 30
  04e5ff8  ld 2, 40(1)
  04e5ffc  ld 0, 160(1)
  04e6000  mtlr 0
  04e6004  ld 30, 128(1)
  04e6008  ld 31, 136(1)
  04e600c  addi 1, 1, 144
  04e6010  blr

FUN_004e6014:   # 0x4e6014, 0x24 bytes
  04e6014  stdu 1, -112(1)
  04e6018  mflr 0
  04e601c  std 0, 128(1)
  04e6020  bl 0x650684
  04e6024  ld 2, 40(1)
  04e6028  ld 0, 128(1)
  04e602c  mtlr 0
  04e6030  addi 1, 1, 112
  04e6034  blr

FUN_004e6038:   # 0x4e6038, 0x1bc bytes
  04e6038  stdu 1, -128(1)
  04e603c  mflr 0
  04e6040  std 0, 144(1)
  04e6044  std 31, 120(1)
  04e6048  ori 31, 3, 0
  04e604c  lwz 3, 204(31)
  04e6050  cmpwi 3, -1
  04e6054  bf 2, 0x4e61dc
  04e6058  li 5, -1
  04e605c  li 3, 273
  04e6060  addic 4, 1, 112
  04e6064  stw 5, 112(1)
  04e6068  bl 0x64f584
  04e606c  ld 2, 40(1)
  04e6070  cmpwi 3, 0
  04e6074  bf 0, 0x4e608c
  04e6078  lis 5, 102
  04e607c  ori 4, 3, 0
  04e6080  addic 3, 5, -27572
  04e6084  bl 0x4ff6d0
  04e6088  nop
  04e608c  lwz 3, 112(1)
  04e6090  cmpwi 3, 8
  04e6094  cmpwi 1, 3, 7
  04e6098  cmpwi 6, 3, 6
  04e609c  cmpwi 7, 3, 5
  04e60a0  bt 1, 0x4e60dc
  04e60a4  bt 6, 0x4e6174
  04e60a8  bt 26, 0x4e6168
  04e60ac  bt 30, 0x4e615c
  04e60b0  cmpwi 3, 4
  04e60b4  bt 2, 0x4e6150
  04e60b8  cmpwi 3, 3
  04e60bc  bt 2, 0x4e6144
  04e60c0  cmpwi 3, 2
  04e60c4  bt 2, 0x4e6138
  04e60c8  cmpwi 3, 1
  04e60cc  bt 2, 0x4e612c
  04e60d0  cmpwi 3, 0
  04e60d4  bt 2, 0x4e6120
  04e60d8  b 0x4e61d4
  04e60dc  cmpwi 3, 17
  04e60e0  bt 2, 0x4e6174
  04e60e4  cmpwi 3, 15
  04e60e8  bt 2, 0x4e61c8
  04e60ec  cmpwi 3, 14
  04e60f0  bt 2, 0x4e61bc
  04e60f4  cmpwi 3, 13
  04e60f8  bt 2, 0x4e61b0
  04e60fc  cmpwi 3, 12
  04e6100  bt 2, 0x4e61a4
  04e6104  cmpwi 3, 11
  04e6108  bt 2, 0x4e6198
  04e610c  cmpwi 3, 10
  04e6110  bt 2, 0x4e618c
  04e6114  cmpwi 3, 9
  04e6118  bt 2, 0x4e6180
  04e611c  b 0x4e61d4
  04e6120  li 3, 0
  04e6124  stw 3, 204(31)
  04e6128  b 0x4e61dc
  04e612c  li 3, 1
  04e6130  stw 3, 204(31)
  04e6134  b 0x4e61dc
  04e6138  li 3, 2
  04e613c  stw 3, 204(31)
  04e6140  b 0x4e61dc
  04e6144  li 3, 3
  04e6148  stw 3, 204(31)
  04e614c  b 0x4e61dc
  04e6150  li 3, 4
  04e6154  stw 3, 204(31)
  04e6158  b 0x4e61dc
  04e615c  li 3, 5
  04e6160  stw 3, 204(31)
  04e6164  b 0x4e61dc
  04e6168  li 3, 1
  04e616c  stw 3, 204(31)
  04e6170  b 0x4e61dc
  04e6174  li 3, 1
  04e6178  stw 3, 204(31)
  04e617c  b 0x4e61dc
  04e6180  li 3, 1
  04e6184  stw 3, 204(31)
  04e6188  b 0x4e61dc
  04e618c  li 3, 1
  04e6190  stw 3, 204(31)
  04e6194  b 0x4e61dc
  04e6198  li 3, 1
  04e619c  stw 3, 204(31)
  04e61a0  b 0x4e61dc
  04e61a4  li 3, 1
  04e61a8  stw 3, 204(31)
  04e61ac  b 0x4e61dc
  04e61b0  li 3, 1
  04e61b4  stw 3, 204(31)
  04e61b8  b 0x4e61dc
  04e61bc  li 3, 1
  04e61c0  stw 3, 204(31)
  04e61c4  b 0x4e61dc
  04e61c8  li 3, 1
  04e61cc  stw 3, 204(31)
  04e61d0  b 0x4e61dc
  04e61d4  li 3, 1
  04e61d8  stw 3, 204(31)
  04e61dc  extsw 3, 3
  04e61e0  ld 0, 144(1)
  04e61e4  mtlr 0
  04e61e8  ld 31, 120(1)
  04e61ec  addi 1, 1, 128
  04e61f0  blr

FUN_004e61f4:   # 0x4e61f4, 0x1d4 bytes
  04e61f4  stdu 1, -144(1)
  04e61f8  mflr 0
  04e61fc  std 0, 160(1)
  04e6200  std 30, 128(1)
  04e6204  std 29, 120(1)
  04e6208  rldicl 30, 3, 8, 56
  04e620c  rldicl 29, 3, 16, 56
  04e6210  std 31, 136(1)
  04e6214  cmpwi 30, 13
  04e6218  rldicl 31, 3, 32, 56
  04e621c  cmpwi 1, 30, 12
  04e6220  cmpwi 6, 30, 11
  04e6224  cmpwi 7, 30, 10
  04e6228  bt 2, 0x4e62a8
  04e622c  bt 6, 0x4e6294
  04e6230  bt 26, 0x4e6280
  04e6234  bt 30, 0x4e626c
  04e6238  cmpwi 30, 5
  04e623c  bt 2, 0x4e62e4
  04e6240  cmpwi 30, 4
  04e6244  bt 2, 0x4e62d0
  04e6248  cmpwi 30, 2
  04e624c  bt 2, 0x4e62bc
  04e6250  cmpwi 30, 1
  04e6254  bf 2, 0x4e62f4
  04e6258  lis 3, 102
  04e625c  addic 3, 3, -27512
  04e6260  bl 0x4ffc9c
  04e6264  nop
  04e6268  b 0x4e62f4
  04e626c  lis 3, 102
  04e6270  addic 3, 3, -27504
  04e6274  bl 0x4ffc9c
  04e6278  nop
  04e627c  b 0x4e62f4
  04e6280  lis 3, 102
  04e6284  addic 3, 3, -27488
  04e6288  bl 0x4ffc9c
  04e628c  nop
  04e6290  b 0x4e62f4
  04e6294  lis 3, 102
  04e6298  addic 3, 3, -27472
  04e629c  bl 0x4ffc9c
  04e62a0  nop
  04e62a4  b 0x4e62f4
  04e62a8  lis 3, 102
  04e62ac  addic 3, 3, -27456
  04e62b0  bl 0x4ffc9c
  04e62b4  nop
  04e62b8  b 0x4e62f4
  04e62bc  lis 3, 102
  04e62c0  addic 3, 3, -27440
  04e62c4  bl 0x4ffc9c
  04e62c8  nop
  04e62cc  b 0x4e62f4
  04e62d0  lis 3, 102
  04e62d4  addic 3, 3, -27432
  04e62d8  bl 0x4ffc9c
  04e62dc  nop
  04e62e0  b 0x4e62f4
  04e62e4  lis 3, 102
  04e62e8  addic 3, 3, -27424
  04e62ec  bl 0x4ffc9c
  04e62f0  nop
  04e62f4  clrlwi 3, 29, 24
  04e62f8  cmpwi 3, 0
  04e62fc  cmpwi 1, 3, -1
  04e6300  cmpwi 6, 3, 1
  04e6304  bt 1, 0x4e6310
  04e6308  bf 5, 0x4e633c
  04e630c  b 0x4e6318
  04e6310  bf 25, 0x4e632c
  04e6314  b 0x4e633c
  04e6318  lis 3, 102
  04e631c  addic 3, 3, -27416
  04e6320  bl 0x4ffc9c
  04e6324  nop
  04e6328  b 0x4e633c
  04e632c  lis 3, 102
  04e6330  addic 3, 3, -27408
  04e6334  bl 0x4ffc9c
  04e6338  nop
  04e633c  ori 3, 30, 0
  04e6340  addic 4, 1, 112
  04e6344  bl 0x64f6a4
  04e6348  ld 2, 40(1)
  04e634c  lis 3, 102
  04e6350  lhz 4, 112(1)
  04e6354  addic 3, 3, -27400
  04e6358  lhz 5, 114(1)
  04e635c  bl 0x4ffc9c
  04e6360  nop
  04e6364  clrlwi 30, 31, 24
  04e6368  cmpwi 30, 1
  04e636c  bt 1, 0x4e637c
  04e6370  cmpwi 30, 0
  04e6374  bf 1, 0x4e63ac
  04e6378  b 0x4e6388
  04e637c  cmpwi 30, 2
  04e6380  bf 1, 0x4e639c
  04e6384  b 0x4e63ac
  04e6388  lis 3, 102
  04e638c  addic 3, 3, -27384
  04e6390  bl 0x4ffc9c
  04e6394  nop
  04e6398  b 0x4e63ac
  04e639c  lis 3, 102
  04e63a0  addic 3, 3, -27376
  04e63a4  bl 0x4ffc9c
  04e63a8  nop
  04e63ac  ld 0, 160(1)
  04e63b0  mtlr 0
  04e63b4  ld 29, 120(1)
  04e63b8  ld 30, 128(1)
  04e63bc  ld 31, 136(1)
  04e63c0  addi 1, 1, 144
  04e63c4  blr

FUN_004e63c8:   # 0x4e63c8, 0x8 bytes
  04e63c8  lis 3, 2752
  04e63cc  blr

FUN_004e63d0:   # 0x4e63d0, 0x8 bytes
  04e63d0  lis 3, 8
  04e63d4  blr

FUN_004e63d8:   # 0x4e63d8, 0x54 bytes
  04e63d8  stdu 1, -128(1)
  04e63dc  mflr 0
  04e63e0  std 0, 144(1)
  04e63e4  addic 3, 1, 112
  04e63e8  li 11, 352
  04e63ec  std 31, 120(1)
  04e63f0  clrldi 3, 3, 32
  04e63f4  ori 31, 4, 0
  04e63f8  sc
  04e63fc  lis 3, 102
  04e6400  lwz 4, 112(1)
  04e6404  lwz 5, 116(1)
  04e6408  ori 6, 31, 0
  04e640c  addic 3, 3, -27368
  04e6410  bl 0x5cd098
  04e6414  nop
  04e6418  ld 0, 144(1)
  04e641c  mtlr 0
  04e6420  ld 31, 120(1)
  04e6424  addi 1, 1, 128
  04e6428  blr

FUN_004e642c:   # 0x4e642c, 0x10 bytes
  04e642c  lis 3, 346
  04e6430  lwz 3, -19576(3)
  04e6434  extsw 3, 3
  04e6438  blr

FUN_004e643c:   # 0x4e643c, 0x78 bytes
  04e643c  stdu 1, -144(1)
  04e6440  mflr 0
  04e6444  std 0, 160(1)
  04e6448  std 31, 136(1)
  04e644c  std 30, 128(1)
  04e6450  ori 31, 3, 0
  04e6454  std 29, 120(1)
  04e6458  ori 30, 5, 0
  04e645c  ori 29, 4, 0
  04e6460  lis 4, 102
  04e6464  lwz 5, 0(31)
  04e6468  std 2, 40(1)
  04e646c  addic 4, 4, -27284
  04e6470  lwz 5, 36(5)
  04e6474  lwz 6, 0(5)
  04e6478  lwz 2, 4(5)
  04e647c  mtctr 6
  04e6480  bcctrl 20, 30
  04e6484  lwz 3, 8(31)
  04e6488  ld 2, 40(1)
  04e648c  lwz 4, 4(31)
  04e6490  stw 3, 0(29)
  04e6494  stw 4, 0(30)
  04e6498  ld 0, 160(1)
  04e649c  mtlr 0
  04e64a0  ld 29, 120(1)
  04e64a4  ld 30, 128(1)
  04e64a8  ld 31, 136(1)
  04e64ac  addi 1, 1, 144
  04e64b0  blr

FUN_004e64b4:   # 0x4e64b4, 0x1d8 bytes
  04e64b4  stdu 1, -672(1)
  04e64b8  mflr 0
  04e64bc  std 0, 688(1)
  04e64c0  li 3, 6
  04e64c4  li 11, 169
  04e64c8  std 31, 664(1)
  04e64cc  std 30, 656(1)
  04e64d0  std 29, 648(1)
  04e64d4  li 4, 0
  04e64d8  sc
  04e64dc  cmpwi 3, 0
  04e64e0  bt 2, 0x4e64fc
  04e64e4  lis 4, 102
  04e64e8  li 3, 4
  04e64ec  addic 4, 4, -27244
  04e64f0  bl 0x4ffd4c
  04e64f4  nop
  04e64f8  b 0x4e6670
  04e64fc  li 3, 10
  04e6500  bl 0x64f4a4
  04e6504  ld 2, 40(1)
  04e6508  addic 3, 1, 112
  04e650c  bl 0x6505c4
  04e6510  ld 2, 40(1)
  04e6514  addic 4, 1, 632
  04e6518  ld 3, 112(1)
  04e651c  li 11, 48
  04e6520  clrldi 4, 4, 32
  04e6524  sc
  04e6528  lwz 3, 632(1)
  04e652c  lis 5, 144
  04e6530  addic 30, 3, -2
  04e6534  addic 31, 1, 120
  04e6538  extsw 30, 30
  04e653c  ori 3, 31, 0
  04e6540  lwz 6, -23000(5)
  04e6544  li 4, 2
  04e6548  lis 5, 51
  04e654c  li 7, 127
  04e6550  ori 8, 30, 0
  04e6554  li 9, 0
  04e6558  bl 0x64fbc4
  04e655c  ld 2, 40(1)
  04e6560  lis 3, 102
  04e6564  addic 29, 3, -27276
  04e6568  ori 3, 29, 0
  04e656c  bl 0x5c8510
  04e6570  nop
  04e6574  ori 5, 3, 0
  04e6578  ori 4, 29, 0
  04e657c  ori 3, 31, 0
  04e6580  bl 0x64f9e4
  04e6584  ld 2, 40(1)
  04e6588  lis 29, 144
  04e658c  ori 4, 31, 0
  04e6590  lwz 3, -23004(29)
  04e6594  bl 0x64fc44
  04e6598  ld 2, 40(1)
  04e659c  lis 31, 273
  04e65a0  lwz 3, -23004(29)
  04e65a4  li 4, 0
  04e65a8  addic 31, 31, 5504
  04e65ac  li 6, 0
  04e65b0  ori 5, 31, 0
  04e65b4  li 7, 1
  04e65b8  bl 0x64fb24
  04e65bc  ld 2, 40(1)
  04e65c0  cmpwi 3, 0
  04e65c4  bt 2, 0x4e65dc
  04e65c8  lis 5, 102
  04e65cc  ori 4, 3, 0
  04e65d0  addic 3, 5, -27212
  04e65d4  bl 0x4ff6d0
  04e65d8  nop
  04e65dc  ori 3, 31, 0
  04e65e0  bl 0x64fba4
  04e65e4  ld 2, 40(1)
  04e65e8  ori 31, 3, 0
  04e65ec  cmpwi 31, 0
  04e65f0  bt 2, 0x4e6608
  04e65f4  lis 3, 102
  04e65f8  ori 4, 31, 0
  04e65fc  addic 3, 3, -27156
  04e6600  bl 0x4ff6d0
  04e6604  nop
  04e6608  addic 31, 1, 120
  04e660c  addic 8, 30, 1
  04e6610  ori 3, 31, 0
  04e6614  lis 5, 51
  04e6618  extsw 8, 8
  04e661c  li 9, 0
  04e6620  li 4, 2
  04e6624  li 6, 1
  04e6628  li 7, 128
  04e662c  bl 0x64fbc4
  04e6630  ld 2, 40(1)
  04e6634  lis 3, 102
  04e6638  addic 30, 3, -27260
  04e663c  ori 3, 30, 0
  04e6640  bl 0x5c8510
  04e6644  nop
  04e6648  ori 5, 3, 0
  04e664c  ori 3, 31, 0
  04e6650  ori 4, 30, 0
  04e6654  bl 0x64f9e4
  04e6658  ld 2, 40(1)
  04e665c  lis 3, 144
  04e6660  ori 4, 31, 0
  04e6664  lwz 3, -22996(3)
  04e6668  bl 0x64fc44
  04e666c  ld 2, 40(1)
  04e6670  ld 0, 688(1)
  04e6674  mtlr 0
  04e6678  ld 29, 648(1)
  04e667c  ld 30, 656(1)
  04e6680  ld 31, 664(1)
  04e6684  addi 1, 1, 672
  04e6688  blr

FUN_004e668c:   # 0x4e668c, 0xa8 bytes
  04e668c  stdu 1, -144(1)
  04e6690  mflr 0
  04e6694  std 0, 160(1)
  04e6698  std 30, 128(1)
  04e669c  std 31, 136(1)
  04e66a0  clrlwi 30, 4, 24
  04e66a4  ori 31, 3, 0
  04e66a8  bl 0x64fda4
  04e66ac  ld 2, 40(1)
  04e66b0  li 4, 0
  04e66b4  addic 3, 1, 112
  04e66b8  stw 4, 112(1)
  04e66bc  bl 0x64fd84
  04e66c0  ld 2, 40(1)
  04e66c4  lwz 3, 112(1)
  04e66c8  cmpwi 3, 3
  04e66cc  bf 2, 0x4e671c
  04e66d0  lis 3, 144
  04e66d4  ori 4, 30, 0
  04e66d8  lwz 3, 11980(3)
  04e66dc  addic 3, 3, 4
  04e66e0  bl 0x5c18d0
  04e66e4  nop
  04e66e8  cmpwi 3, 0
  04e66ec  bt 2, 0x4e6704
  04e66f0  lis 3, 102
  04e66f4  addic 3, 3, -27096
  04e66f8  bl 0x4ff6d0
  04e66fc  nop
  04e6700  b 0x4e671c
  04e6704  li 4, 1
  04e6708  lis 3, 102
  04e670c  addic 3, 3, -27048
  04e6710  stb 4, 17(31)
  04e6714  bl 0x4ffc9c
  04e6718  nop
  04e671c  ld 0, 160(1)
  04e6720  mtlr 0
  04e6724  ld 30, 128(1)
  04e6728  ld 31, 136(1)
  04e672c  addi 1, 1, 144
  04e6730  blr

FUN_004e6734:   # 0x4e6734, 0x3c bytes
  04e6734  stdu 1, -112(1)
  04e6738  mflr 0
  04e673c  std 0, 128(1)
  04e6740  lis 3, 102
  04e6744  addic 3, 3, -27012
  04e6748  bl 0x4ffc9c
  04e674c  nop
  04e6750  lis 3, 144
  04e6754  lwz 3, -23004(3)
  04e6758  bl 0x64fca4
  04e675c  ld 2, 40(1)
  04e6760  ld 0, 128(1)
  04e6764  mtlr 0
  04e6768  addi 1, 1, 112
  04e676c  blr

FUN_004e6770:   # 0x4e6770, 0x14c bytes
  04e6770  stdu 1, -160(1)
  04e6774  mflr 0
  04e6778  std 0, 176(1)
  04e677c  std 31, 152(1)
  04e6780  ori 31, 3, 0
  04e6784  lbz 3, 196(3)
  04e6788  std 30, 144(1)
  04e678c  std 29, 136(1)
  04e6790  std 28, 128(1)
  04e6794  std 27, 120(1)
  04e6798  std 26, 112(1)
  04e679c  cmpwi 3, 1
  04e67a0  bt 2, 0x4e6894
  04e67a4  lwz 3, 260(31)
  04e67a8  li 30, 0
  04e67ac  cmpwi 3, 0
  04e67b0  ori 26, 30, 0
  04e67b4  bt 2, 0x4e6810
  04e67b8  lis 28, 144
  04e67bc  lis 29, 102
  04e67c0  ori 27, 31, 0
  04e67c4  addic 28, 28, 22328
  04e67c8  addic 29, 29, -26988
  04e67cc  lwz 3, 264(31)
  04e67d0  addic 5, 27, 208
  04e67d4  li 4, 1024
  04e67d8  bl 0x650764
  04e67dc  ld 2, 40(1)
  04e67e0  cmpwi 3, 0
  04e67e4  bt 2, 0x4e67fc
  04e67e8  ori 5, 3, 0
  04e67ec  ori 3, 28, 0
  04e67f0  ori 4, 29, 0
  04e67f4  bl 0x5ccf90
  04e67f8  nop
  04e67fc  addic 26, 26, 1
  04e6800  lwz 3, 260(31)
  04e6804  addic 27, 27, 4
  04e6808  cmplw 26, 3
  04e680c  bt 0, 0x4e67cc
  04e6810  cmpwi 3, 0
  04e6814  bt 2, 0x4e688c
  04e6818  lis 28, 144
  04e681c  lis 29, 102
  04e6820  ori 27, 31, 0
  04e6824  addic 28, 28, 22328
  04e6828  addic 29, 29, -26940
  04e682c  lwz 3, 264(31)
  04e6830  mullw 3, 3, 30
  04e6834  lwz 4, 200(31)
  04e6838  lwz 6, 256(31)
  04e683c  lis 5, 4
  04e6840  lwz 7, 208(27)
  04e6844  addc 6, 4, 6
  04e6848  ori 4, 7, 0
  04e684c  addc 3, 6, 3
  04e6850  clrldi 3, 3, 32
  04e6854  bl 0x6507c4
  04e6858  ld 2, 40(1)
  04e685c  cmpwi 3, 0
  04e6860  bt 2, 0x4e6878
  04e6864  ori 5, 3, 0
  04e6868  ori 3, 28, 0
  04e686c  ori 4, 29, 0
  04e6870  bl 0x5ccf90
  04e6874  nop
  04e6878  addic 30, 30, 1
  04e687c  lwz 3, 260(31)
  04e6880  addic 27, 27, 4
  04e6884  cmplw 30, 3
  04e6888  bt 0, 0x4e682c
  04e688c  li 3, 1
  04e6890  stb 3, 196(31)
  04e6894  ld 0, 176(1)
  04e6898  mtlr 0
  04e689c  ld 26, 112(1)
  04e68a0  ld 27, 120(1)
  04e68a4  ld 28, 128(1)
  04e68a8  ld 29, 136(1)
  04e68ac  ld 30, 144(1)
  04e68b0  ld 31, 152(1)
  04e68b4  addi 1, 1, 160
  04e68b8  blr

FUN_004e68bc:   # 0x4e68bc, 0x22c bytes
  04e68bc  stdu 1, -144(1)
  04e68c0  mflr 0
  04e68c4  std 0, 160(1)
  04e68c8  std 30, 128(1)
  04e68cc  std 31, 136(1)
  04e68d0  ori 30, 3, 0
  04e68d4  ori 31, 4, 0
  04e68d8  slwi 4, 5, 20
  04e68dc  std 29, 120(1)
  04e68e0  lis 3, 102
  04e68e4  ori 29, 6, 0
  04e68e8  addic 3, 3, -26900
  04e68ec  stw 31, 260(30)
  04e68f0  stw 4, 264(30)
  04e68f4  bl 0x5cd098
  04e68f8  nop
  04e68fc  addic 6, 30, 200
  04e6900  lis 3, 4096
  04e6904  li 11, 330
  04e6908  clrldi 6, 6, 32
  04e690c  li 4, 1024
  04e6910  li 5, 0
  04e6914  sc
  04e6918  extsw 3, 3
  04e691c  cmpwi 3, 0
  04e6920  bt 2, 0x4e6940
  04e6924  ori 5, 3, 0
  04e6928  lis 3, 144
  04e692c  lis 4, 102
  04e6930  addic 3, 3, 22328
  04e6934  addic 4, 4, -26860
  04e6938  bl 0x5ccf90
  04e693c  nop
  04e6940  lis 3, 102
  04e6944  addic 3, 3, -26812
  04e6948  bl 0x5cd098
  04e694c  nop
  04e6950  addic 3, 1, 112
  04e6954  li 11, 352
  04e6958  clrldi 3, 3, 32
  04e695c  sc
  04e6960  lwz 3, 116(1)
  04e6964  lis 4, 4096
  04e6968  lwz 5, 264(30)
  04e696c  slwi 7, 29, 20
  04e6970  mullw 6, 31, 5
  04e6974  rlwinm 3, 3, 0, 0, 11
  04e6978  subc 5, 4, 3
  04e697c  subc 4, 4, 3
  04e6980  sradi 5, 5, 63
  04e6984  and 4, 5, 4
  04e6988  addic 5, 30, 204
  04e698c  addc 3, 3, 4
  04e6990  li 4, 1024
  04e6994  subc 3, 3, 7
  04e6998  subc 29, 3, 6
  04e699c  clrldi 29, 29, 32
  04e69a0  ori 3, 29, 0
  04e69a4  stw 29, 256(30)
  04e69a8  bl 0x650764
  04e69ac  ld 2, 40(1)
  04e69b0  cmpwi 3, 0
  04e69b4  bt 2, 0x4e69d4
  04e69b8  lis 4, 144
  04e69bc  ori 5, 3, 0
  04e69c0  lis 6, 102
  04e69c4  addic 3, 4, 22328
  04e69c8  addic 4, 6, -26988
  04e69cc  bl 0x5ccf90
  04e69d0  nop
  04e69d4  lis 3, 102
  04e69d8  addic 3, 3, -26772
  04e69dc  bl 0x5cd098
  04e69e0  nop
  04e69e4  lwz 3, 200(30)
  04e69e8  lwz 4, 204(30)
  04e69ec  lis 5, 4
  04e69f0  bl 0x6507c4
  04e69f4  ld 2, 40(1)
  04e69f8  cmpwi 3, 0
  04e69fc  bt 2, 0x4e6a1c
  04e6a00  lis 4, 144
  04e6a04  ori 5, 3, 0
  04e6a08  lis 6, 102
  04e6a0c  addic 3, 4, 22328
  04e6a10  addic 4, 6, -26940
  04e6a14  bl 0x5ccf90
  04e6a18  nop
  04e6a1c  li 6, 3
  04e6a20  li 3, 0
  04e6a24  ori 5, 30, 0
  04e6a28  ori 4, 30, 0
  04e6a2c  mtctr 6
  04e6a30  stw 3, 284(4)
  04e6a34  stb 3, 272(5)
  04e6a38  stw 3, 288(4)
  04e6a3c  stb 3, 273(5)
  04e6a40  stw 3, 292(4)
  04e6a44  stb 3, 274(5)
  04e6a48  stw 3, 296(4)
  04e6a4c  stb 3, 275(5)
  04e6a50  addic 4, 4, 16
  04e6a54  addic 5, 5, 4
  04e6a58  bdnz 0x4e6a30
  04e6a5c  ori 4, 3, 0
  04e6a60  ori 3, 30, 0
  04e6a64  stb 4, 196(30)
  04e6a68  bl 0x4e6770
  04e6a6c  lwz 3, 264(30)
  04e6a70  mullw 3, 3, 31
  04e6a74  lwz 5, 200(30)
  04e6a78  addc 4, 29, 3
  04e6a7c  li 3, 62
  04e6a80  stw 5, 8(30)
  04e6a84  stw 4, 4(30)
  04e6a88  bl 0x64f4a4
  04e6a8c  ld 2, 40(1)
  04e6a90  li 3, 51
  04e6a94  bl 0x64f4a4
  04e6a98  ld 2, 40(1)
  04e6a9c  li 3, 69
  04e6aa0  bl 0x64f4a4
  04e6aa4  ld 2, 40(1)
  04e6aa8  li 3, 58
  04e6aac  bl 0x64f4a4
  04e6ab0  ld 2, 40(1)
  04e6ab4  li 3, 9
  04e6ab8  bl 0x64f4a4
  04e6abc  ld 2, 40(1)
  04e6ac0  li 3, 30
  04e6ac4  bl 0x64f4a4
  04e6ac8  ld 2, 40(1)
  04e6acc  ld 0, 160(1)
  04e6ad0  mtlr 0
  04e6ad4  ld 29, 120(1)
  04e6ad8  ld 30, 128(1)
  04e6adc  ld 31, 136(1)
  04e6ae0  addi 1, 1, 144
  04e6ae4  blr

FUN_004e6ae8:   # 0x4e6ae8, 0x158 bytes
  04e6ae8  stdu 1, -176(1)
  04e6aec  mflr 0
  04e6af0  std 0, 192(1)
  04e6af4  std 31, 168(1)
  04e6af8  ori 31, 3, 0
  04e6afc  lbz 3, 196(3)
  04e6b00  std 30, 160(1)
  04e6b04  std 29, 152(1)
  04e6b08  std 28, 144(1)
  04e6b0c  std 27, 136(1)
  04e6b10  std 26, 128(1)
  04e6b14  cmpwi 3, 0
  04e6b18  bt 2, 0x4e6c18
  04e6b1c  lis 3, 102
  04e6b20  addic 3, 3, -26712
  04e6b24  bl 0x5cd098
  04e6b28  nop
  04e6b2c  lwz 3, 260(31)
  04e6b30  li 27, 0
  04e6b34  cmpwi 3, 0
  04e6b38  ori 30, 27, 0
  04e6b3c  bt 2, 0x4e6ba4
  04e6b40  lis 28, 144
  04e6b44  lis 29, 102
  04e6b48  addic 28, 28, 22328
  04e6b4c  addic 29, 29, -26648
  04e6b50  lwz 3, 264(31)
  04e6b54  addic 4, 1, 112
  04e6b58  mullw 3, 3, 27
  04e6b5c  lwz 5, 200(31)
  04e6b60  lwz 6, 256(31)
  04e6b64  addc 5, 5, 6
  04e6b68  addc 3, 5, 3
  04e6b6c  clrldi 3, 3, 32
  04e6b70  bl 0x650624
  04e6b74  ld 2, 40(1)
  04e6b78  cmpwi 3, 0
  04e6b7c  bt 2, 0x4e6b94
  04e6b80  ori 5, 3, 0
  04e6b84  ori 3, 28, 0
  04e6b88  ori 4, 29, 0
  04e6b8c  bl 0x5ccf90
  04e6b90  nop
  04e6b94  addic 27, 27, 1
  04e6b98  lwz 3, 260(31)
  04e6b9c  cmplw 27, 3
  04e6ba0  bt 0, 0x4e6b50
  04e6ba4  lis 3, 102
  04e6ba8  addic 3, 3, -26608
  04e6bac  bl 0x5cd098
  04e6bb0  nop
  04e6bb4  lwz 3, 260(31)
  04e6bb8  ori 26, 30, 0
  04e6bbc  cmpwi 3, 0
  04e6bc0  bt 2, 0x4e6c14
  04e6bc4  lis 28, 144
  04e6bc8  lis 29, 102
  04e6bcc  ori 27, 31, 0
  04e6bd0  addic 28, 28, 22328
  04e6bd4  addic 29, 29, -26560
  04e6bd8  lwz 3, 208(27)
  04e6bdc  bl 0x6505e4
  04e6be0  ld 2, 40(1)
  04e6be4  cmpwi 3, 0
  04e6be8  bt 2, 0x4e6c00
  04e6bec  ori 5, 3, 0
  04e6bf0  ori 3, 28, 0
  04e6bf4  ori 4, 29, 0
  04e6bf8  bl 0x5ccf90
  04e6bfc  nop
  04e6c00  addic 26, 26, 1
  04e6c04  lwz 3, 260(31)
  04e6c08  addic 27, 27, 4
  04e6c0c  cmplw 26, 3
  04e6c10  bt 0, 0x4e6bd8
  04e6c14  stb 30, 196(31)
  04e6c18  ld 0, 192(1)
  04e6c1c  mtlr 0
  04e6c20  ld 26, 128(1)
  04e6c24  ld 27, 136(1)
  04e6c28  ld 28, 144(1)
  04e6c2c  ld 29, 152(1)
  04e6c30  ld 30, 160(1)
  04e6c34  ld 31, 168(1)
  04e6c38  addi 1, 1, 176
  04e6c3c  blr

FUN_004e6c40:   # 0x4e6c40, 0x1b0 bytes
  04e6c40  stdu 1, -160(1)
  04e6c44  mflr 0
  04e6c48  std 0, 176(1)
  04e6c4c  std 31, 152(1)
  04e6c50  std 30, 144(1)
  04e6c54  ori 31, 3, 0
  04e6c58  std 28, 128(1)
  04e6c5c  li 30, 0
  04e6c60  std 27, 120(1)
  04e6c64  ori 28, 30, 0
  04e6c68  lwz 27, 264(31)
  04e6c6c  lwz 3, 260(31)
  04e6c70  addc 4, 4, 27
  04e6c74  cmpwi 3, 0
  04e6c78  addic 4, 4, -1
  04e6c7c  std 29, 136(1)
  04e6c80  std 26, 112(1)
  04e6c84  divwu 27, 4, 27
  04e6c88  bt 2, 0x4e6d0c
  04e6c8c  ori 4, 31, 0
  04e6c90  ori 5, 27, 0
  04e6c94  lbz 6, 272(4)
  04e6c98  cmpwi 6, 0
  04e6c9c  bf 2, 0x4e6ce8
  04e6ca0  cmplw 5, 3
  04e6ca4  bt 1, 0x4e6d0c
  04e6ca8  ori 7, 30, 0
  04e6cac  cmplw 7, 5
  04e6cb0  bf 0, 0x4e6cd4
  04e6cb4  ori 6, 4, 0
  04e6cb8  lbz 8, 272(6)
  04e6cbc  cmpwi 8, 0
  04e6cc0  bf 2, 0x4e6cd4
  04e6cc4  addic 7, 7, 1
  04e6cc8  addic 6, 6, 1
  04e6ccc  cmplw 7, 5
  04e6cd0  bt 0, 0x4e6cb8
  04e6cd4  cmpw 7, 5
  04e6cd8  bf 2, 0x4e6ce8
  04e6cdc  cmpwi 30, 0
  04e6ce0  bt 0, 0x4e6d0c
  04e6ce4  b 0x4e6d00
  04e6ce8  addic 30, 30, 1
  04e6cec  addic 4, 4, 1
  04e6cf0  cmplw 30, 3
  04e6cf4  addic 5, 5, 1
  04e6cf8  bt 0, 0x4e6c94
  04e6cfc  b 0x4e6d0c
  04e6d00  addc 29, 30, 27
  04e6d04  cmplw 29, 3
  04e6d08  bf 1, 0x4e6d14
  04e6d0c  ori 3, 28, 0
  04e6d10  b 0x4e6dc8
  04e6d14  lis 3, 102
  04e6d18  addic 3, 3, -26520
  04e6d1c  bl 0x5cd098
  04e6d20  nop
  04e6d24  lwz 3, 264(31)
  04e6d28  slwi 26, 30, 2
  04e6d2c  mullw 4, 27, 3
  04e6d30  addc 27, 31, 26
  04e6d34  li 11, 324
  04e6d38  addic 3, 27, 284
  04e6d3c  clrldi 4, 4, 32
  04e6d40  clrldi 3, 3, 32
  04e6d44  sc
  04e6d48  extsw 3, 3
  04e6d4c  cmpwi 3, 0
  04e6d50  bt 2, 0x4e6d78
  04e6d54  lis 4, 144
  04e6d58  ori 5, 3, 0
  04e6d5c  lis 6, 102
  04e6d60  addic 3, 4, 22328
  04e6d64  addic 4, 6, -26488
  04e6d68  bl 0x5ccf90
  04e6d6c  nop
  04e6d70  ori 3, 28, 0
  04e6d74  b 0x4e6dc8
  04e6d78  cmplw 30, 29
  04e6d7c  bf 0, 0x4e6dc0
  04e6d80  addic 4, 31, 284
  04e6d84  clrldi 3, 27, 32
  04e6d88  addc 26, 26, 4
  04e6d8c  addc 4, 30, 31
  04e6d90  li 5, 1
  04e6d94  clrldi 26, 26, 32
  04e6d98  clrldi 4, 4, 32
  04e6d9c  subc 31, 29, 30
  04e6da0  stb 5, 272(4)
  04e6da4  addic 31, 31, -1
  04e6da8  lwz 6, 0(26)
  04e6dac  addic 4, 4, 1
  04e6db0  cmpwi 31, 0
  04e6db4  stw 6, 284(3)
  04e6db8  addic 3, 3, 4
  04e6dbc  bt 1, 0x4e6da0
  04e6dc0  clrldi 3, 27, 32
  04e6dc4  lwz 3, 284(3)
  04e6dc8  ld 0, 176(1)
  04e6dcc  mtlr 0
  04e6dd0  ld 26, 112(1)
  04e6dd4  ld 27, 120(1)
  04e6dd8  ld 28, 128(1)
  04e6ddc  ld 29, 136(1)
  04e6de0  ld 30, 144(1)
  04e6de4  ld 31, 152(1)
  04e6de8  addi 1, 1, 160
  04e6dec  blr

FUN_004e6df0:   # 0x4e6df0, 0xbc bytes
  04e6df0  stdu 1, -128(1)
  04e6df4  mflr 0
  04e6df8  std 0, 144(1)
  04e6dfc  std 31, 120(1)
  04e6e00  ori 31, 4, 0
  04e6e04  lwz 4, 260(3)
  04e6e08  li 6, 0
  04e6e0c  cmpwi 4, 0
  04e6e10  ori 5, 6, 0
  04e6e14  bt 2, 0x4e6e54
  04e6e18  ori 8, 3, 0
  04e6e1c  ori 7, 3, 0
  04e6e20  lbz 9, 272(8)
  04e6e24  cmpwi 9, 0
  04e6e28  bt 2, 0x4e6e40
  04e6e2c  lwz 9, 284(7)
  04e6e30  cmpw 9, 31
  04e6e34  bf 2, 0x4e6e40
  04e6e38  stb 5, 272(8)
  04e6e3c  lwz 4, 260(3)
  04e6e40  addic 6, 6, 1
  04e6e44  addic 7, 7, 4
  04e6e48  cmplw 6, 4
  04e6e4c  addic 8, 8, 1
  04e6e50  bt 0, 0x4e6e20
  04e6e54  lis 3, 102
  04e6e58  addic 3, 3, -26444
  04e6e5c  bl 0x5cd098
  04e6e60  nop
  04e6e64  ori 3, 31, 0
  04e6e68  li 11, 325
  04e6e6c  sc
  04e6e70  extsw 31, 3
  04e6e74  cmpwi 31, 0
  04e6e78  bt 2, 0x4e6e98
  04e6e7c  lis 3, 144
  04e6e80  lis 4, 102
  04e6e84  ori 5, 31, 0
  04e6e88  addic 3, 3, 22328
  04e6e8c  addic 4, 4, -26412
  04e6e90  bl 0x5ccf90
  04e6e94  nop
  04e6e98  ld 0, 144(1)
  04e6e9c  mtlr 0
  04e6ea0  ld 31, 120(1)
  04e6ea4  addi 1, 1, 128
  04e6ea8  blr

FUN_004e6eac:   # 0x4e6eac, 0x12c bytes
  04e6eac  stdu 1, -112(1)
  04e6eb0  mflr 0
  04e6eb4  std 0, 128(1)
  04e6eb8  lis 6, -32766
  04e6ebc  ori 5, 4, 0
  04e6ec0  ori 4, 3, 0
  04e6ec4  ori 6, 6, 46082
  04e6ec8  ori 3, 5, 0
  04e6ecc  cmpw 4, 6
  04e6ed0  bt 1, 0x4e6ef8
  04e6ed4  lis 5, -32766
  04e6ed8  ori 5, 5, 46080
  04e6edc  cmpw 4, 5
  04e6ee0  bf 1, 0x4e6fc8
  04e6ee4  lis 5, -32766
  04e6ee8  ori 5, 5, 46081
  04e6eec  cmpw 4, 5
  04e6ef0  bf 1, 0x4e6f74
  04e6ef4  b 0x4e6fb4
  04e6ef8  lis 5, -32766
  04e6efc  ori 5, 5, 46086
  04e6f00  cmpw 4, 5
  04e6f04  bt 1, 0x4e6f40
  04e6f08  lis 5, -32766
  04e6f0c  ori 5, 5, 46084
  04e6f10  cmpw 4, 5
  04e6f14  bt 1, 0x4e6f2c
  04e6f18  lis 5, -32766
  04e6f1c  ori 5, 5, 46083
  04e6f20  cmpw 4, 5
  04e6f24  bf 1, 0x4e6fc0
  04e6f28  b 0x4e6f74
  04e6f2c  lis 5, -32766
  04e6f30  ori 5, 5, 46085
  04e6f34  cmpw 4, 5
  04e6f38  bf 1, 0x4e6fc8
  04e6f3c  b 0x4e6f74
  04e6f40  lis 5, -32766
  04e6f44  ori 5, 5, 46088
  04e6f48  cmpw 4, 5
  04e6f4c  bt 1, 0x4e6f64
  04e6f50  lis 5, -32766
  04e6f54  ori 5, 5, 46087
  04e6f58  cmpw 4, 5
  04e6f5c  bf 1, 0x4e6f94
  04e6f60  b 0x4e6fc8
  04e6f64  lis 5, -32766
  04e6f68  ori 5, 5, 46092
  04e6f6c  cmpw 4, 5
  04e6f70  bt 1, 0x4e6fc8
  04e6f74  ori 4, 3, 0
  04e6f78  li 5, 12
  04e6f7c  lis 3, 102
  04e6f80  addic 3, 3, -26152
  04e6f84  stw 5, 1128(4)
  04e6f88  bl 0x5cd098
  04e6f8c  nop
  04e6f90  b 0x4e6fc8
  04e6f94  ori 4, 3, 0
  04e6f98  li 5, 12
  04e6f9c  lis 3, 102
  04e6fa0  addic 3, 3, -26048
  04e6fa4  stw 5, 1128(4)
  04e6fa8  bl 0x5cd098
  04e6fac  nop
  04e6fb0  b 0x4e6fc8
  04e6fb4  li 4, 12
  04e6fb8  stw 4, 1128(3)
  04e6fbc  b 0x4e6fc8
  04e6fc0  li 4, 12
  04e6fc4  stw 4, 1128(3)
  04e6fc8  ld 0, 128(1)
  04e6fcc  mtlr 0
  04e6fd0  addi 1, 1, 112
  04e6fd4  blr

FUN_004e6fd8:   # 0x4e6fd8, 0xcc bytes
  04e6fd8  stdu 1, -128(1)
  04e6fdc  mflr 0
  04e6fe0  std 0, 144(1)
  04e6fe4  std 31, 120(1)
  04e6fe8  ori 31, 4, 0
  04e6fec  lwz 4, 0(4)
  04e6ff0  cmpwi 4, 0
  04e6ff4  cmpwi 1, 4, 1
  04e6ff8  bf 2, 0x4e7008
  04e6ffc  lis 3, 144
  04e7000  stw 5, -22972(3)
  04e7004  b 0x4e7090
  04e7008  bf 6, 0x4e701c
  04e700c  lis 3, 144
  04e7010  li 4, 6
  04e7014  stw 4, -22972(3)
  04e7018  b 0x4e7090
  04e701c  lwz 3, 1128(3)
  04e7020  cmpwi 3, 11
  04e7024  cmpwi 1, 3, 12
  04e7028  cmpwi 6, 3, 10
  04e702c  bt 1, 0x4e7038
  04e7030  bf 25, 0x4e7090
  04e7034  b 0x4e7068
  04e7038  bt 5, 0x4e7090
  04e703c  lis 3, 102
  04e7040  addic 3, 3, -25948
  04e7044  bl 0x5cd098
  04e7048  nop
  04e704c  lis 3, -32766
  04e7050  lis 4, 144
  04e7054  ori 3, 3, 46086
  04e7058  li 5, 12
  04e705c  stw 3, 0(31)
  04e7060  stw 5, -22972(4)
  04e7064  b 0x4e7090
  04e7068  lis 3, 102
  04e706c  addic 3, 3, -25908
  04e7070  bl 0x5cd098
  04e7074  nop
  04e7078  lis 3, -32766
  04e707c  lis 4, 144
  04e7080  ori 3, 3, 46085
  04e7084  li 5, 11
  04e7088  stw 3, 0(31)
  04e708c  stw 5, -22972(4)
  04e7090  ld 0, 144(1)
  04e7094  mtlr 0
  04e7098  ld 31, 120(1)
  04e709c  addi 1, 1, 128
  04e70a0  blr

FUN_004e70a4:   # 0x4e70a4, 0xcc bytes
  04e70a4  stdu 1, -144(1)
  04e70a8  mflr 0
  04e70ac  std 0, 160(1)
  04e70b0  std 31, 136(1)
  04e70b4  ori 31, 3, 0
  04e70b8  lis 3, 102
  04e70bc  std 30, 128(1)
  04e70c0  std 29, 120(1)
  04e70c4  addic 3, 3, -25872
  04e70c8  bl 0x4ffc9c
  04e70cc  nop
  04e70d0  lis 3, 102
  04e70d4  lwz 4, 0(31)
  04e70d8  addic 3, 3, -25760
  04e70dc  bl 0x4ffc9c
  04e70e0  nop
  04e70e4  lis 3, 102
  04e70e8  lwz 4, 4(31)
  04e70ec  addic 3, 3, -25736
  04e70f0  bl 0x4ffc9c
  04e70f4  nop
  04e70f8  lwz 3, 4(31)
  04e70fc  li 29, 0
  04e7100  cmpwi 3, 0
  04e7104  bt 2, 0x4e7154
  04e7108  lis 30, 102
  04e710c  addic 30, 30, -25712
  04e7110  sldi 5, 29, 4
  04e7114  ori 4, 29, 0
  04e7118  addc 6, 5, 5
  04e711c  ori 3, 30, 0
  04e7120  addc 5, 5, 6
  04e7124  lwz 6, 8(31)
  04e7128  addc 5, 6, 5
  04e712c  addic 6, 5, 32
  04e7130  clrldi 5, 5, 32
  04e7134  clrldi 6, 6, 32
  04e7138  bl 0x4ffc9c
  04e713c  nop
  04e7140  addic 29, 29, 1
  04e7144  lwz 3, 4(31)
  04e7148  clrldi 29, 29, 32
  04e714c  cmplw 29, 3
  04e7150  bt 0, 0x4e7110
  04e7154  ld 0, 160(1)
  04e7158  mtlr 0
  04e715c  ld 29, 120(1)
  04e7160  ld 30, 128(1)
  04e7164  ld 31, 136(1)
  04e7168  addi 1, 1, 144
  04e716c  blr

FUN_004e7170:   # 0x4e7170, 0x218 bytes
  04e7170  stdu 1, -144(1)
  04e7174  mflr 0
  04e7178  std 0, 160(1)
  04e717c  std 31, 136(1)
  04e7180  ori 31, 3, 0
  04e7184  lis 3, 102
  04e7188  std 30, 128(1)
  04e718c  std 29, 120(1)
  04e7190  addic 3, 3, -25680
  04e7194  bl 0x4ffc9c
  04e7198  nop
  04e719c  lis 3, 102
  04e71a0  addic 30, 31, 32
  04e71a4  addic 3, 3, -25600
  04e71a8  ori 4, 30, 0
  04e71ac  bl 0x4ffc9c
  04e71b0  nop
  04e71b4  lis 3, 102
  04e71b8  lwz 4, 4(31)
  04e71bc  addic 3, 3, -25576
  04e71c0  bl 0x4ffc9c
  04e71c4  nop
  04e71c8  lis 3, 102
  04e71cc  lwz 4, 0(31)
  04e71d0  addic 3, 3, -25552
  04e71d4  extsw 4, 4
  04e71d8  bl 0x4ffc9c
  04e71dc  nop
  04e71e0  lis 3, 102
  04e71e4  lwz 4, 1620(31)
  04e71e8  addic 3, 3, -25520
  04e71ec  extsw 4, 4
  04e71f0  bl 0x4ffc9c
  04e71f4  nop
  04e71f8  lis 3, 102
  04e71fc  lwz 4, 1624(31)
  04e7200  addic 3, 3, -25496
  04e7204  extsw 4, 4
  04e7208  bl 0x4ffc9c
  04e720c  nop
  04e7210  lis 3, 102
  04e7214  lwz 4, 1616(31)
  04e7218  addic 3, 3, -25472
  04e721c  bl 0x4ffc9c
  04e7220  nop
  04e7224  lis 3, 102
  04e7228  ld 5, 8(31)
  04e722c  ld 6, 16(31)
  04e7230  ori 4, 30, 0
  04e7234  addic 3, 3, -25448
  04e7238  ld 7, 24(31)
  04e723c  bl 0x4ffc9c
  04e7240  nop
  04e7244  lis 3, 102
  04e7248  lwz 4, 1632(31)
  04e724c  addic 3, 3, -25376
  04e7250  bl 0x4ffc9c
  04e7254  nop
  04e7258  lwz 3, 1632(31)
  04e725c  li 29, 0
  04e7260  cmpwi 3, 0
  04e7264  bt 2, 0x4e72d4
  04e7268  lis 30, 102
  04e726c  addic 30, 30, -25352
  04e7270  sldi 3, 29, 6
  04e7274  sldi 4, 29, 3
  04e7278  subc 3, 3, 4
  04e727c  lwz 4, 1636(31)
  04e7280  clrldi 5, 3, 32
  04e7284  addc 6, 4, 3
  04e7288  ori 3, 30, 0
  04e728c  clrldi 8, 6, 32
  04e7290  addic 6, 6, 40
  04e7294  lwzx 7, 4, 5
  04e7298  clrldi 5, 6, 32
  04e729c  ori 6, 7, 0
  04e72a0  ld 7, 8(8)
  04e72a4  ld 11, 24(8)
  04e72a8  ori 4, 29, 0
  04e72ac  ld 10, 32(8)
  04e72b0  ld 8, 16(8)
  04e72b4  ori 9, 11, 0
  04e72b8  bl 0x4ffc9c
  04e72bc  nop
  04e72c0  addic 29, 29, 1
  04e72c4  lwz 3, 1632(31)
  04e72c8  clrldi 29, 29, 32
  04e72cc  cmplw 29, 3
  04e72d0  bt 0, 0x4e7270
  04e72d4  lis 3, 102
  04e72d8  lwz 4, 1628(31)
  04e72dc  addic 3, 3, -25264
  04e72e0  bl 0x4ffc9c
  04e72e4  nop
  04e72e8  lis 3, 102
  04e72ec  addic 30, 3, -25240
  04e72f0  ori 3, 30, 0
  04e72f4  bl 0x4ffc9c
  04e72f8  nop
  04e72fc  lis 3, 102
  04e7300  addic 4, 31, 64
  04e7304  addic 3, 3, -25232
  04e7308  bl 0x4ffc9c
  04e730c  nop
  04e7310  lis 3, 102
  04e7314  addic 4, 31, 192
  04e7318  addic 3, 3, -25208
  04e731c  bl 0x4ffc9c
  04e7320  nop
  04e7324  lis 3, 102
  04e7328  addic 4, 31, 320
  04e732c  addic 3, 3, -25176
  04e7330  bl 0x4ffc9c
  04e7334  nop
  04e7338  lis 3, 102
  04e733c  lwz 4, 1344(31)
  04e7340  addic 3, 3, -25152
  04e7344  bl 0x4ffc9c
  04e7348  nop
  04e734c  lis 3, 102
  04e7350  addic 4, 31, 1352
  04e7354  addic 3, 3, -25120
  04e7358  bl 0x4ffc9c
  04e735c  nop
  04e7360  ori 3, 30, 0
  04e7364  bl 0x4ffc9c
  04e7368  nop
  04e736c  ld 0, 160(1)
  04e7370  mtlr 0
  04e7374  ld 29, 120(1)
  04e7378  ld 30, 128(1)
  04e737c  ld 31, 136(1)
  04e7380  addi 1, 1, 144
  04e7384  blr

FUN_004e7388:   # 0x4e7388, 0x7c bytes
  04e7388  lis 4, 102
  04e738c  li 5, 0
  04e7390  addic 4, 4, 6352
  04e7394  li 6, 1
  04e7398  li 7, 4
  04e739c  stw 5, 4(3)
  04e73a0  stw 4, 0(3)
  04e73a4  stw 5, 8(3)
  04e73a8  stw 5, 12(3)
  04e73ac  stw 5, 16(3)
  04e73b0  stw 5, 20(3)
  04e73b4  stw 5, 24(3)
  04e73b8  stw 5, 1104(3)
  04e73bc  stw 5, 1112(3)
  04e73c0  stb 5, 1116(3)
  04e73c4  stb 5, 1117(3)
  04e73c8  stw 6, 1120(3)
  04e73cc  stw 7, 1108(3)
  04e73d0  stw 5, 1072(3)
  04e73d4  stw 5, 1076(3)
  04e73d8  stw 5, 1080(3)
  04e73dc  stw 5, 1084(3)
  04e73e0  stw 5, 1088(3)
  04e73e4  stw 5, 1092(3)
  04e73e8  stw 5, 1096(3)
  04e73ec  stw 5, 1100(3)
  04e73f0  stw 5, 32(3)
  04e73f4  stw 5, 36(3)
  04e73f8  stw 5, 40(3)
  04e73fc  stw 5, 44(3)
  04e7400  blr

idol::GetSaveData:   # 0x4e7404, 0x130 bytes
  04e7404  stdu 1, -128(1)
  04e7408  mflr 0
  04e740c  std 0, 144(1)
  04e7410  lis 3, 144
  04e7414  lwz 3, -22976(3)
  04e7418  std 31, 120(1)
  04e741c  std 30, 112(1)
  04e7420  cmpwi 3, 0
  04e7424  bf 2, 0x4e751c
  04e7428  li 3, 1144
  04e742c  li 31, 0
  04e7430  bl 0x5e38b0
  04e7434  nop
  04e7438  ori 30, 3, 0
  04e743c  cmpwi 30, 0
  04e7440  bt 2, 0x4e7510
  04e7444  lis 3, 102
  04e7448  stw 31, 4(30)
  04e744c  li 6, 1
  04e7450  addic 4, 3, 6352
  04e7454  li 7, 4
  04e7458  addic 3, 30, 1072
  04e745c  li 5, 32
  04e7460  stw 4, 0(30)
  04e7464  stw 31, 8(30)
  04e7468  li 4, 0
  04e746c  stw 31, 12(30)
  04e7470  stw 31, 16(30)
  04e7474  stw 31, 20(30)
  04e7478  stw 31, 24(30)
  04e747c  stw 31, 1104(30)
  04e7480  stw 31, 1112(30)
  04e7484  stb 31, 1116(30)
  04e7488  stb 31, 1117(30)
  04e748c  stw 6, 1120(30)
  04e7490  stw 7, 1108(30)
  04e7494  bl 0x5d0140
  04e7498  nop
  04e749c  li 3, 33
  04e74a0  stb 31, 32(30)
  04e74a4  li 4, 34
  04e74a8  li 6, 35
  04e74ac  li 5, 37
  04e74b0  li 7, 41
  04e74b4  stbx 31, 30, 3
  04e74b8  li 8, 43
  04e74bc  li 3, 38
  04e74c0  stbx 31, 30, 4
  04e74c4  li 4, 39
  04e74c8  stbx 31, 30, 6
  04e74cc  stb 31, 36(30)
  04e74d0  li 6, 42
  04e74d4  stbx 31, 30, 5
  04e74d8  li 5, 45
  04e74dc  stbx 31, 30, 3
  04e74e0  stbx 31, 30, 4
  04e74e4  stb 31, 40(30)
  04e74e8  li 3, 46
  04e74ec  stbx 31, 30, 7
  04e74f0  li 4, 47
  04e74f4  stbx 31, 30, 6
  04e74f8  stbx 31, 30, 8
  04e74fc  stb 31, 44(30)
  04e7500  stbx 31, 30, 5
  04e7504  stbx 31, 30, 3
  04e7508  stbx 31, 30, 4
  04e750c  ori 31, 30, 0
  04e7510  lis 4, 144
  04e7514  ori 3, 31, 0
  04e7518  stw 31, -22976(4)
  04e751c  ld 0, 144(1)
  04e7520  mtlr 0
  04e7524  ld 30, 112(1)
  04e7528  ld 31, 120(1)
  04e752c  addi 1, 1, 128
  04e7530  blr

FUN_004e7534:   # 0x4e7534, 0x160 bytes
  04e7534  stdu 1, -128(1)
  04e7538  mflr 0
  04e753c  std 0, 144(1)
  04e7540  extsw 3, 3
  04e7544  li 4, 719
  04e7548  std 31, 120(1)
  04e754c  std 30, 112(1)
  04e7550  li 5, 0
  04e7554  bl 0x64f724
  04e7558  ld 2, 40(1)
  04e755c  lis 3, 144
  04e7560  lwz 3, -22976(3)
  04e7564  cmpwi 3, 0
  04e7568  bf 2, 0x4e765c
  04e756c  li 3, 1144
  04e7570  li 30, 0
  04e7574  bl 0x5e38b0
  04e7578  nop
  04e757c  ori 31, 3, 0
  04e7580  cmpwi 31, 0
  04e7584  bt 2, 0x4e7654
  04e7588  lis 3, 102
  04e758c  stw 30, 4(31)
  04e7590  li 6, 1
  04e7594  addic 3, 3, 6352
  04e7598  li 7, 4
  04e759c  li 4, 0
  04e75a0  li 5, 32
  04e75a4  stw 3, 0(31)
  04e75a8  stw 30, 8(31)
  04e75ac  stw 30, 12(31)
  04e75b0  addic 3, 31, 1072
  04e75b4  stw 30, 16(31)
  04e75b8  stw 30, 20(31)
  04e75bc  stw 30, 24(31)
  04e75c0  stw 30, 1104(31)
  04e75c4  stw 30, 1112(31)
  04e75c8  stb 30, 1116(31)
  04e75cc  stb 30, 1117(31)
  04e75d0  stw 6, 1120(31)
  04e75d4  stw 7, 1108(31)
  04e75d8  bl 0x5d0140
  04e75dc  nop
  04e75e0  li 3, 33
  04e75e4  li 4, 34
  04e75e8  stb 30, 32(31)
  04e75ec  li 5, 35
  04e75f0  li 7, 37
  04e75f4  li 6, 39
  04e75f8  stbx 30, 31, 3
  04e75fc  li 3, 38
  04e7600  stbx 30, 31, 4
  04e7604  stbx 30, 31, 5
  04e7608  li 4, 41
  04e760c  stb 30, 36(31)
  04e7610  li 5, 42
  04e7614  stbx 30, 31, 7
  04e7618  li 8, 47
  04e761c  li 7, 43
  04e7620  stbx 30, 31, 3
  04e7624  stbx 30, 31, 6
  04e7628  li 3, 45
  04e762c  stb 30, 40(31)
  04e7630  li 6, 46
  04e7634  stbx 30, 31, 4
  04e7638  stbx 30, 31, 5
  04e763c  stbx 30, 31, 7
  04e7640  stb 30, 44(31)
  04e7644  stbx 30, 31, 3
  04e7648  stbx 30, 31, 6
  04e764c  stbx 30, 31, 8
  04e7650  ori 30, 31, 0
  04e7654  lis 3, 144
  04e7658  stw 30, -22976(3)
  04e765c  lis 4, 273
  04e7660  li 5, 0
  04e7664  lis 6, 273
  04e7668  li 3, 0
  04e766c  stw 5, 5644(4)
  04e7670  stb 5, 5636(6)
  04e7674  bl 0x650744
  04e7678  ld 2, 40(1)
  04e767c  ld 0, 144(1)
  04e7680  mtlr 0
  04e7684  ld 30, 112(1)
  04e7688  ld 31, 120(1)
  04e768c  addi 1, 1, 128
  04e7690  blr

FUN_004e7694:   # 0x4e7694, 0x7c bytes
  04e7694  lis 4, 102
  04e7698  li 5, 0
  04e769c  addic 4, 4, 6352
  04e76a0  li 6, 1
  04e76a4  li 7, 4
  04e76a8  stw 5, 4(3)
  04e76ac  stw 4, 0(3)
  04e76b0  stw 5, 8(3)
  04e76b4  stw 5, 12(3)
  04e76b8  stw 5, 16(3)
  04e76bc  stw 5, 20(3)
  04e76c0  stw 5, 24(3)
  04e76c4  stw 5, 1104(3)
  04e76c8  stw 5, 1112(3)
  04e76cc  stb 5, 1116(3)
  04e76d0  stb 5, 1117(3)
  04e76d4  stw 6, 1120(3)
  04e76d8  stw 7, 1108(3)
  04e76dc  stw 5, 1072(3)
  04e76e0  stw 5, 1076(3)
  04e76e4  stw 5, 1080(3)
  04e76e8  stw 5, 1084(3)
  04e76ec  stw 5, 1088(3)
  04e76f0  stw 5, 1092(3)
  04e76f4  stw 5, 1096(3)
  04e76f8  stw 5, 1100(3)
  04e76fc  stw 5, 32(3)
  04e7700  stw 5, 36(3)
  04e7704  stw 5, 40(3)
  04e7708  stw 5, 44(3)
  04e770c  blr

FUN_004e7710:   # 0x4e7710, 0x28 bytes
  04e7710  stdu 1, -112(1)
  04e7714  mflr 0
  04e7718  std 0, 128(1)
  04e771c  li 3, 51
  04e7720  bl 0x64f484
  04e7724  ld 2, 40(1)
  04e7728  ld 0, 128(1)
  04e772c  mtlr 0
  04e7730  addi 1, 1, 112
  04e7734  blr

FUN_004e7738:   # 0x4e7738, 0x34 bytes
  04e7738  stdu 1, -112(1)
  04e773c  mflr 0
  04e7740  std 0, 128(1)
  04e7744  lis 4, 102
  04e7748  addic 4, 4, 6352
  04e774c  stw 4, 0(3)
  04e7750  li 3, 51
  04e7754  bl 0x64f484
  04e7758  ld 2, 40(1)
  04e775c  ld 0, 128(1)
  04e7760  mtlr 0
  04e7764  addi 1, 1, 112
  04e7768  blr

FUN_004e776c:   # 0x4e776c, 0x54 bytes
  04e776c  stdu 1, -128(1)
  04e7770  mflr 0
  04e7774  std 0, 144(1)
  04e7778  std 31, 120(1)
  04e777c  cmpwi 3, 0
  04e7780  ori 31, 3, 0
  04e7784  bt 2, 0x4e77ac
  04e7788  lis 4, 102
  04e778c  li 3, 51
  04e7790  addic 4, 4, 6352
  04e7794  stw 4, 0(31)
  04e7798  bl 0x64f484
  04e779c  ld 2, 40(1)
  04e77a0  ori 3, 31, 0
  04e77a4  bl 0x5e387c
  04e77a8  nop
  04e77ac  ld 0, 144(1)
  04e77b0  mtlr 0
  04e77b4  ld 31, 120(1)
  04e77b8  addi 1, 1, 128
  04e77bc  blr

FUN_004e77c0:   # 0x4e77c0, 0x34 bytes
  04e77c0  stdu 1, -112(1)
  04e77c4  mflr 0
  04e77c8  std 0, 128(1)
  04e77cc  lis 4, 102
  04e77d0  addic 4, 4, 6352
  04e77d4  stw 4, 0(3)
  04e77d8  li 3, 51
  04e77dc  bl 0x64f484
  04e77e0  ld 2, 40(1)
  04e77e4  ld 0, 128(1)
  04e77e8  mtlr 0
  04e77ec  addi 1, 1, 112
  04e77f0  blr

FUN_004e77f4:   # 0x4e77f4, 0x68 bytes
  04e77f4  stdu 1, -128(1)
  04e77f8  mflr 0
  04e77fc  std 0, 144(1)
  04e7800  std 30, 112(1)
  04e7804  clrlwi 3, 6, 24
  04e7808  ori 30, 4, 0
  04e780c  std 31, 120(1)
  04e7810  cmpwi 3, 0
  04e7814  ori 31, 5, 0
  04e7818  bt 2, 0x4e7828
  04e781c  li 3, 51
  04e7820  bl 0x64f484
  04e7824  ld 2, 40(1)
  04e7828  lis 3, 102
  04e782c  ori 4, 30, 0
  04e7830  addic 3, 3, -25092
  04e7834  ori 5, 31, 0
  04e7838  bl 0x4ffc9c
  04e783c  nop
  04e7840  ori 3, 31, 0
  04e7844  ld 0, 144(1)
  04e7848  mtlr 0
  04e784c  ld 30, 112(1)
  04e7850  ld 31, 120(1)
  04e7854  addi 1, 1, 128
  04e7858  blr

FUN_004e785c:   # 0x4e785c, 0x94 bytes
  04e785c  stdu 1, -128(1)
  04e7860  mflr 0
  04e7864  std 0, 144(1)
  04e7868  lis 3, 102
  04e786c  addic 3, 3, -25064
  04e7870  bl 0x4ffc9c
  04e7874  nop
  04e7878  lis 3, 273
  04e787c  li 4, 1
  04e7880  lis 8, 273
  04e7884  li 10, 3
  04e7888  lis 9, 113
  04e788c  stb 4, 5636(3)
  04e7890  lis 11, 102
  04e7894  addic 3, 1, 112
  04e7898  stw 10, 5644(8)
  04e789c  addic 4, 9, 56
  04e78a0  li 5, 0
  04e78a4  li 6, 1001
  04e78a8  li 7, 16384
  04e78ac  addic 9, 11, -25016
  04e78b0  li 8, 0
  04e78b4  bl 0x650524
  04e78b8  ld 2, 40(1)
  04e78bc  cmpwi 3, 0
  04e78c0  bt 2, 0x4e78e0
  04e78c4  lis 3, 102
  04e78c8  lis 4, 102
  04e78cc  li 5, -1
  04e78d0  addic 3, 3, -25092
  04e78d4  addic 4, 4, -24976
  04e78d8  bl 0x4ffc9c
  04e78dc  nop
  04e78e0  ld 0, 144(1)
  04e78e4  mtlr 0
  04e78e8  addi 1, 1, 128
  04e78ec  blr

FUN_004e78f0:   # 0x4e78f0, 0x30 bytes
  04e78f0  lis 6, 273
  04e78f4  lwz 6, 5644(6)
  04e78f8  cmpwi 6, 0
  04e78fc  bt 2, 0x4e7908
  04e7900  li 3, 0
  04e7904  b 0x4e791c
  04e7908  cmpwi 5, 0
  04e790c  bt 2, 0x4e7914
  04e7910  stw 5, 1104(3)
  04e7914  stw 4, 1112(3)
  04e7918  li 3, 1
  04e791c  blr

FUN_004e7920:   # 0x4e7920, 0x84 bytes
  04e7920  stdu 1, -128(1)
  04e7924  mflr 0
  04e7928  std 0, 144(1)
  04e792c  lis 4, 273
  04e7930  li 5, 1
  04e7934  lis 9, 273
  04e7938  lis 7, 113
  04e793c  addic 3, 1, 112
  04e7940  stb 5, 5636(4)
  04e7944  lis 10, 102
  04e7948  li 5, 2
  04e794c  addic 4, 7, 72
  04e7950  li 6, 1001
  04e7954  li 8, 0
  04e7958  stw 5, 5644(9)
  04e795c  li 7, 16384
  04e7960  addic 9, 10, -24936
  04e7964  li 5, 0
  04e7968  bl 0x650524
  04e796c  ld 2, 40(1)
  04e7970  cmpwi 3, 0
  04e7974  bt 2, 0x4e7994
  04e7978  lis 3, 102
  04e797c  lis 4, 102
  04e7980  li 5, -1
  04e7984  addic 3, 3, -25092
  04e7988  addic 4, 4, -24896
  04e798c  bl 0x4ffc9c
  04e7990  nop
  04e7994  ld 0, 144(1)
  04e7998  mtlr 0
  04e799c  addi 1, 1, 128
  04e79a0  blr

FUN_004e79a4:   # 0x4e79a4, 0x90 bytes
  04e79a4  stdu 1, -128(1)
  04e79a8  mflr 0
  04e79ac  std 0, 144(1)
  04e79b0  lis 3, 102
  04e79b4  addic 3, 3, -24860
  04e79b8  bl 0x4ffc9c
  04e79bc  nop
  04e79c0  lis 4, 273
  04e79c4  li 9, 1
  04e79c8  lis 10, 273
  04e79cc  lis 7, 113
  04e79d0  addic 3, 1, 112
  04e79d4  stb 9, 5636(4)
  04e79d8  lis 11, 102
  04e79dc  addic 4, 7, 48
  04e79e0  stw 9, 5644(10)
  04e79e4  li 5, 0
  04e79e8  li 6, 1001
  04e79ec  li 8, 0
  04e79f0  addic 9, 11, -24820
  04e79f4  li 7, 16384
  04e79f8  bl 0x650524
  04e79fc  ld 2, 40(1)
  04e7a00  cmpwi 3, 0
  04e7a04  bt 2, 0x4e7a24
  04e7a08  lis 3, 102
  04e7a0c  lis 4, 102
  04e7a10  addic 3, 3, -25092
  04e7a14  addic 4, 4, -24780
  04e7a18  li 5, -1
  04e7a1c  bl 0x4ffc9c
  04e7a20  nop
  04e7a24  ld 0, 144(1)
  04e7a28  mtlr 0
  04e7a2c  addi 1, 1, 128
  04e7a30  blr

idol::SaveSystem_PS::RunSaveSystem:   # 0x4e7a34, 0x268 bytes
  04e7a34  stdu 1, -160(1)
  04e7a38  mflr 0
  04e7a3c  std 0, 176(1)
  04e7a40  std 30, 144(1)
  04e7a44  std 29, 136(1)
  04e7a48  lis 11, 273
  04e7a4c  ori 29, 3, 0
  04e7a50  std 31, 152(1)
  04e7a54  ori 30, 5, 0
  04e7a58  ori 31, 6, 0
  04e7a5c  lwz 3, 5644(11)
  04e7a60  cmpwi 3, 0
  04e7a64  bf 2, 0x4e7c80
  04e7a68  lis 3, 273
  04e7a6c  lbz 3, 5636(3)
  04e7a70  cmpwi 3, 0
  04e7a74  bf 2, 0x4e7c80
  04e7a78  stw 7, 12(29)
  04e7a7c  cmpwi 4, 1
  04e7a80  stw 8, 20(29)
  04e7a84  cmpwi 1, 4, 3
  04e7a88  stw 9, 16(29)
  04e7a8c  cmpwi 6, 4, 0
  04e7a90  cmpwi 7, 4, -1
  04e7a94  stw 10, 24(29)
  04e7a98  bt 1, 0x4e7aa8
  04e7a9c  bf 29, 0x4e7c80
  04e7aa0  bf 25, 0x4e7ab0
  04e7aa4  b 0x4e7b48
  04e7aa8  bt 6, 0x4e7be8
  04e7aac  b 0x4e7c80
  04e7ab0  lis 3, 273
  04e7ab4  lwz 3, 5644(3)
  04e7ab8  cmpwi 3, 0
  04e7abc  bf 2, 0x4e7ad0
  04e7ac0  cmpwi 30, 0
  04e7ac4  bt 2, 0x4e7acc
  04e7ac8  stw 30, 1104(29)
  04e7acc  stw 31, 1112(29)
  04e7ad0  lis 3, 102
  04e7ad4  addic 3, 3, -24860
  04e7ad8  bl 0x4ffc9c
  04e7adc  nop
  04e7ae0  lis 4, 273
  04e7ae4  li 7, 1
  04e7ae8  lis 9, 273
  04e7aec  lis 6, 113
  04e7af0  addic 3, 1, 128
  04e7af4  stb 7, 5636(4)
  04e7af8  lis 10, 102
  04e7afc  addic 4, 6, 48
  04e7b00  stw 7, 5644(9)
  04e7b04  li 5, 0
  04e7b08  li 8, 0
  04e7b0c  addic 9, 10, -24820
  04e7b10  li 6, 1001
  04e7b14  li 7, 16384
  04e7b18  bl 0x650524
  04e7b1c  ld 2, 40(1)
  04e7b20  cmpwi 3, 0
  04e7b24  bt 2, 0x4e7c80
  04e7b28  lis 3, 102
  04e7b2c  lis 4, 102
  04e7b30  li 5, -1
  04e7b34  addic 3, 3, -25092
  04e7b38  addic 4, 4, -24780
  04e7b3c  bl 0x4ffc9c
  04e7b40  nop
  04e7b44  b 0x4e7c80
  04e7b48  ori 3, 30, 0
  04e7b4c  li 4, 15
  04e7b50  ori 5, 31, 0
  04e7b54  bl 0x5d0140
  04e7b58  nop
  04e7b5c  lis 3, 273
  04e7b60  lwz 3, 5644(3)
  04e7b64  cmpwi 3, 0
  04e7b68  bf 2, 0x4e7b7c
  04e7b6c  cmpwi 30, 0
  04e7b70  bt 2, 0x4e7b78
  04e7b74  stw 30, 1104(29)
  04e7b78  stw 31, 1112(29)
  04e7b7c  lis 4, 273
  04e7b80  li 5, 1
  04e7b84  lis 9, 273
  04e7b88  lis 7, 113
  04e7b8c  addic 3, 1, 120
  04e7b90  stb 5, 5636(4)
  04e7b94  lis 10, 102
  04e7b98  li 5, 2
  04e7b9c  addic 4, 7, 72
  04e7ba0  li 6, 1001
  04e7ba4  li 8, 0
  04e7ba8  stw 5, 5644(9)
  04e7bac  li 7, 16384
  04e7bb0  addic 9, 10, -24936
  04e7bb4  li 5, 0
  04e7bb8  bl 0x650524
  04e7bbc  ld 2, 40(1)
  04e7bc0  cmpwi 3, 0
  04e7bc4  bt 2, 0x4e7c80
  04e7bc8  lis 3, 102
  04e7bcc  lis 4, 102
  04e7bd0  li 5, -1
  04e7bd4  addic 3, 3, -25092
  04e7bd8  addic 4, 4, -24896
  04e7bdc  bl 0x4ffc9c
  04e7be0  nop
  04e7be4  b 0x4e7c80
  04e7be8  lis 3, 273
  04e7bec  lwz 3, 5644(3)
  04e7bf0  cmpwi 3, 0
  04e7bf4  bf 2, 0x4e7c08
  04e7bf8  cmpwi 30, 0
  04e7bfc  bt 2, 0x4e7c04
  04e7c00  stw 30, 1104(29)
  04e7c04  stw 31, 1112(29)
  04e7c08  lis 3, 102
  04e7c0c  addic 3, 3, -25064
  04e7c10  bl 0x4ffc9c
  04e7c14  nop
  04e7c18  lis 3, 273
  04e7c1c  li 4, 1
  04e7c20  lis 7, 273
  04e7c24  li 9, 3
  04e7c28  lis 8, 113
  04e7c2c  stb 4, 5636(3)
  04e7c30  addic 3, 1, 112
  04e7c34  lis 10, 102
  04e7c38  stw 9, 5644(7)
  04e7c3c  addic 4, 8, 56
  04e7c40  li 5, 0
  04e7c44  li 6, 1001
  04e7c48  addic 9, 10, -25016
  04e7c4c  li 7, 16384
  04e7c50  li 8, 0
  04e7c54  bl 0x650524
  04e7c58  ld 2, 40(1)
  04e7c5c  cmpwi 3, 0
  04e7c60  bt 2, 0x4e7c80
  04e7c64  lis 3, 102
  04e7c68  lis 4, 102
  04e7c6c  addic 3, 3, -25092
  04e7c70  addic 4, 4, -24976
  04e7c74  li 5, -1
  04e7c78  bl 0x4ffc9c
  04e7c7c  nop
  04e7c80  ld 0, 176(1)
  04e7c84  mtlr 0
  04e7c88  ld 29, 136(1)
  04e7c8c  ld 30, 144(1)
  04e7c90  ld 31, 152(1)
  04e7c94  addi 1, 1, 160
  04e7c98  blr

idol::registerSavesystemCallback:   # 0x4e7c9c, 0x78 bytes
  04e7c9c  stdu 1, -128(1)
  04e7ca0  mflr 0
  04e7ca4  std 0, 144(1)
  04e7ca8  lis 4, 273
  04e7cac  li 5, 1
  04e7cb0  lis 9, 273
  04e7cb4  lis 7, 113
  04e7cb8  addic 3, 1, 112
  04e7cbc  stb 5, 5636(4)
  04e7cc0  lis 10, 102
  04e7cc4  li 5, 2
  04e7cc8  addic 4, 7, 80
  04e7ccc  li 6, 1001
  04e7cd0  li 8, 0
  04e7cd4  stw 5, 5644(9)
  04e7cd8  li 7, 16384
  04e7cdc  addic 9, 10, -24744
  04e7ce0  li 5, 0
  04e7ce4  bl 0x650524
  04e7ce8  ld 2, 40(1)
  04e7cec  cmpwi 3, 0
  04e7cf0  bt 2, 0x4e7d04
  04e7cf4  lis 3, 102
  04e7cf8  addic 3, 3, -24712
  04e7cfc  bl 0x5cd098
  04e7d00  nop
  04e7d04  ld 0, 144(1)
  04e7d08  mtlr 0
  04e7d0c  addi 1, 1, 128
  04e7d10  blr

FUN_004e7d14:   # 0x4e7d14, 0x4 bytes
  04e7d14  blr

FUN_004e7d18:   # 0x4e7d18, 0x7c bytes
  04e7d18  stdu 1, -128(1)
  04e7d1c  mflr 0
  04e7d20  std 0, 144(1)
  04e7d24  lis 3, 273
  04e7d28  li 5, 1
  04e7d2c  lis 8, 273
  04e7d30  lis 6, 113
  04e7d34  lis 9, 102
  04e7d38  stb 5, 5636(3)
  04e7d3c  addic 10, 6, -184
  04e7d40  li 5, 4
  04e7d44  addic 3, 1, 112
  04e7d48  li 6, 1001
  04e7d4c  li 7, 16384
  04e7d50  stw 5, 5644(8)
  04e7d54  addic 9, 9, -24652
  04e7d58  ori 5, 4, 0
  04e7d5c  ori 4, 10, 0
  04e7d60  li 8, 0
  04e7d64  bl 0x650524
  04e7d68  ld 2, 40(1)
  04e7d6c  cmpwi 3, 0
  04e7d70  bt 2, 0x4e7d84
  04e7d74  lis 3, 102
  04e7d78  addic 3, 3, -24712
  04e7d7c  bl 0x5cd098
  04e7d80  nop
  04e7d84  ld 0, 144(1)
  04e7d88  mtlr 0
  04e7d8c  addi 1, 1, 128
  04e7d90  blr

FUN_004e7d94:   # 0x4e7d94, 0x70 bytes
  04e7d94  stdu 1, -128(1)
  04e7d98  mflr 0
  04e7d9c  std 0, 144(1)
  04e7da0  std 31, 120(1)
  04e7da4  ori 31, 3, 0
  04e7da8  lis 3, 102
  04e7dac  addic 3, 3, -24608
  04e7db0  bl 0x4ffc9c
  04e7db4  nop
  04e7db8  lwz 3, 12(31)
  04e7dbc  cmpwi 3, 0
  04e7dc0  bt 2, 0x4e7dec
  04e7dc4  ori 4, 3, 0
  04e7dc8  lwz 3, 8(31)
  04e7dcc  lwz 5, 0(4)
  04e7dd0  std 2, 40(1)
  04e7dd4  mtctr 5
  04e7dd8  lwz 2, 4(4)
  04e7ddc  bcctrl 20, 30
  04e7de0  ld 2, 40(1)
  04e7de4  extsw 3, 3
  04e7de8  b 0x4e7df0
  04e7dec  li 3, 0
  04e7df0  ld 0, 144(1)
  04e7df4  mtlr 0
  04e7df8  ld 31, 120(1)
  04e7dfc  addi 1, 1, 128
  04e7e00  blr

FUN_004e7e04:   # 0x4e7e04, 0x68 bytes
  04e7e04  stdu 1, -128(1)
  04e7e08  mflr 0
  04e7e0c  std 0, 144(1)
  04e7e10  std 31, 120(1)
  04e7e14  ori 31, 3, 0
  04e7e18  lis 3, 102
  04e7e1c  addic 3, 3, -24560
  04e7e20  bl 0x4ffc9c
  04e7e24  nop
  04e7e28  lwz 3, 20(31)
  04e7e2c  cmpwi 3, 0
  04e7e30  bt 2, 0x4e7e54
  04e7e34  lwz 4, 0(3)
  04e7e38  std 2, 40(1)
  04e7e3c  mtctr 4
  04e7e40  lwz 2, 4(3)
  04e7e44  bcctrl 20, 30
  04e7e48  ld 2, 40(1)
  04e7e4c  extsw 3, 3
  04e7e50  b 0x4e7e58
  04e7e54  li 3, 0
  04e7e58  ld 0, 144(1)
  04e7e5c  mtlr 0
  04e7e60  ld 31, 120(1)
  04e7e64  addi 1, 1, 128
  04e7e68  blr

FUN_004e7e6c:   # 0x4e7e6c, 0x78 bytes
  04e7e6c  stdu 1, -128(1)
  04e7e70  mflr 0
  04e7e74  std 0, 144(1)
  04e7e78  std 31, 120(1)
  04e7e7c  ori 31, 3, 0
  04e7e80  lis 3, 102
  04e7e84  addic 3, 3, -24508
  04e7e88  bl 0x4ffc9c
  04e7e8c  nop
  04e7e90  lwz 4, 1104(31)
  04e7e94  lwz 3, 16(31)
  04e7e98  stw 4, 4(31)
  04e7e9c  cmpwi 3, 0
  04e7ea0  bt 2, 0x4e7ecc
  04e7ea4  ori 5, 3, 0
  04e7ea8  lwz 3, 8(31)
  04e7eac  lwz 6, 0(5)
  04e7eb0  std 2, 40(1)
  04e7eb4  mtctr 6
  04e7eb8  lwz 2, 4(5)
  04e7ebc  bcctrl 20, 30
  04e7ec0  extsw 3, 3
  04e7ec4  ld 2, 40(1)
  04e7ec8  b 0x4e7ed0
  04e7ecc  li 3, 0
  04e7ed0  ld 0, 144(1)
  04e7ed4  mtlr 0
  04e7ed8  ld 31, 120(1)
  04e7edc  addi 1, 1, 128
  04e7ee0  blr

FUN_004e7ee4:   # 0x4e7ee4, 0x70 bytes
  04e7ee4  stdu 1, -128(1)
  04e7ee8  mflr 0
  04e7eec  std 0, 144(1)
  04e7ef0  std 31, 120(1)
  04e7ef4  ori 31, 3, 0
  04e7ef8  lis 3, 102
  04e7efc  addic 3, 3, -24460
  04e7f00  bl 0x4ffc9c
  04e7f04  nop
  04e7f08  lwz 3, 24(31)
  04e7f0c  cmpwi 3, 0
  04e7f10  bt 2, 0x4e7f3c
  04e7f14  ori 4, 3, 0
  04e7f18  lwz 3, 8(31)
  04e7f1c  lwz 5, 0(4)
  04e7f20  std 2, 40(1)
  04e7f24  mtctr 5
  04e7f28  lwz 2, 4(4)
  04e7f2c  bcctrl 20, 30
  04e7f30  ld 2, 40(1)
  04e7f34  extsw 3, 3
  04e7f38  b 0x4e7f40
  04e7f3c  li 3, 0
  04e7f40  ld 0, 144(1)
  04e7f44  mtlr 0
  04e7f48  ld 31, 120(1)
  04e7f4c  addi 1, 1, 128
  04e7f50  blr

FUN_004e7f54:   # 0x4e7f54, 0x48 bytes
  04e7f54  stdu 1, -128(1)
  04e7f58  mflr 0
  04e7f5c  std 0, 144(1)
  04e7f60  std 31, 120(1)
  04e7f64  ori 31, 3, 0
  04e7f68  li 5, 32
  04e7f6c  addic 3, 31, 1072
  04e7f70  bl 0x5cccec
  04e7f74  nop
  04e7f78  li 3, 0
  04e7f7c  li 4, 1
  04e7f80  stb 3, 1103(31)
  04e7f84  stb 4, 1116(31)
  04e7f88  ld 0, 144(1)
  04e7f8c  mtlr 0
  04e7f90  ld 31, 120(1)
  04e7f94  addi 1, 1, 128
  04e7f98  blr

FUN_004e7f9c:   # 0x4e7f9c, 0x13c bytes
  04e7f9c  stdu 1, -144(1)
  04e7fa0  mflr 0
  04e7fa4  std 0, 160(1)
  04e7fa8  std 30, 128(1)
  04e7fac  lis 5, 144
  04e7fb0  std 31, 136(1)
  04e7fb4  ori 30, 3, 0
  04e7fb8  ori 31, 4, 0
  04e7fbc  std 29, 120(1)
  04e7fc0  lwz 3, 11984(5)
  04e7fc4  bl 0x504c58
  04e7fc8  nop
  04e7fcc  cmpwi 31, 0
  04e7fd0  stw 31, 1108(30)
  04e7fd4  ori 29, 3, 0
  04e7fd8  bf 2, 0x4e8010
  04e7fdc  lis 5, 144
  04e7fe0  lis 6, 144
  04e7fe4  lis 4, 102
  04e7fe8  addic 3, 30, 1124
  04e7fec  addic 4, 4, -24408
  04e7ff0  lwz 5, -22964(5)
  04e7ff4  stw 5, -22968(6)
  04e7ff8  bl 0x5cd2a8
  04e7ffc  nop
  04e8000  lwz 3, 1108(30)
  04e8004  cmpwi 3, 4
  04e8008  bf 2, 0x4e802c
  04e800c  b 0x4e80bc
  04e8010  lis 3, 102
  04e8014  addic 3, 3, -24400
  04e8018  bl 0x4ffc9c
  04e801c  nop
  04e8020  li 3, 4
  04e8024  stw 3, 1108(30)
  04e8028  b 0x4e80bc
  04e802c  lis 3, 102
  04e8030  sldi 4, 31, 4
  04e8034  addic 6, 3, -26368
  04e8038  addic 3, 30, 32
  04e803c  addc 4, 6, 4
  04e8040  li 5, 16
  04e8044  clrldi 4, 4, 32
  04e8048  bl 0x5c5ad0
  04e804c  nop
  04e8050  lis 3, 144
  04e8054  lis 5, 144
  04e8058  lis 4, 102
  04e805c  sldi 6, 31, 2
  04e8060  li 7, 1
  04e8064  addic 5, 5, -22948
  04e8068  lis 8, 144
  04e806c  lwz 9, -22968(3)
  04e8070  addic 10, 4, -26168
  04e8074  extsw 6, 6
  04e8078  stb 7, 1117(30)
  04e807c  addic 31, 8, -22840
  04e8080  lis 4, 102
  04e8084  stw 9, 72(5)
  04e8088  ori 3, 31, 0
  04e808c  stw 9, 1132(30)
  04e8090  addic 4, 4, -24336
  04e8094  ori 5, 29, 0
  04e8098  lwzx 6, 10, 6
  04e809c  bl 0x5cd2a8
  04e80a0  nop
  04e80a4  lis 3, 144
  04e80a8  ori 4, 31, 0
  04e80ac  addic 3, 3, -22776
  04e80b0  li 5, 32
  04e80b4  bl 0x5cccec
  04e80b8  nop
  04e80bc  ld 0, 160(1)
  04e80c0  mtlr 0
  04e80c4  ld 29, 120(1)
  04e80c8  ld 30, 128(1)
  04e80cc  ld 31, 136(1)
  04e80d0  addi 1, 1, 144
  04e80d4  blr

FUN_004e80d8:   # 0x4e80d8, 0x70 bytes
  04e80d8  stdu 1, -144(1)
  04e80dc  mflr 0
  04e80e0  std 0, 160(1)
  04e80e4  std 31, 136(1)
  04e80e8  std 30, 128(1)
  04e80ec  ori 31, 3, 0
  04e80f0  std 29, 120(1)
  04e80f4  ori 30, 4, 0
  04e80f8  addic 29, 31, 48
  04e80fc  li 4, 0
  04e8100  ori 3, 29, 0
  04e8104  li 5, 1024
  04e8108  bl 0x5d0140
  04e810c  nop
  04e8110  ori 3, 29, 0
  04e8114  ori 4, 30, 0
  04e8118  li 5, 1024
  04e811c  bl 0x5cccec
  04e8120  nop
  04e8124  li 3, 0
  04e8128  stb 3, 1071(31)
  04e812c  ld 0, 160(1)
  04e8130  mtlr 0
  04e8134  ld 29, 120(1)
  04e8138  ld 30, 128(1)
  04e813c  ld 31, 136(1)
  04e8140  addi 1, 1, 144
  04e8144  blr

FUN_004e8148:   # 0x4e8148, 0x6c bytes
  04e8148  stdu 1, -128(1)
  04e814c  mflr 0
  04e8150  std 0, 144(1)
  04e8154  std 31, 120(1)
  04e8158  lis 6, 144
  04e815c  ori 31, 5, 0
  04e8160  lis 7, 144
  04e8164  std 30, 112(1)
  04e8168  li 5, 1024
  04e816c  addic 30, 7, -22744
  04e8170  stw 4, -22980(6)
  04e8174  stw 31, 1140(3)
  04e8178  ori 3, 30, 0
  04e817c  li 4, 0
  04e8180  bl 0x5d0140
  04e8184  nop
  04e8188  ori 3, 30, 0
  04e818c  ori 4, 31, 0
  04e8190  li 5, 1024
  04e8194  bl 0x5cccec
  04e8198  nop
  04e819c  ld 0, 144(1)
  04e81a0  mtlr 0
  04e81a4  ld 30, 112(1)
  04e81a8  ld 31, 120(1)
  04e81ac  addi 1, 1, 128
  04e81b0  blr

FUN_004e81b4:   # 0x4e81b4, 0x20 bytes
  04e81b4  stw 3, 0(4)
  04e81b8  li 8, 0
  04e81bc  stw 5, 44(4)
  04e81c0  stw 6, 40(4)
  04e81c4  stw 6, 36(4)
  04e81c8  stw 7, 8(4)
  04e81cc  stw 8, 4(4)
  04e81d0  blr

FUN_004e81d4:   # 0x4e81d4, 0x18 bytes
  04e81d4  li 5, 0
  04e81d8  stw 5, 0(3)
  04e81dc  stw 5, 4(3)
  04e81e0  stw 4, 8(3)
  04e81e4  stw 5, 12(3)
  04e81e8  blr

idol::fileAllocLoad:   # 0x4e81ec, 0x1f4 bytes
  04e81ec  stdu 1, -224(1)
  04e81f0  mflr 0
  04e81f4  std 0, 240(1)
  04e81f8  std 31, 216(1)
  04e81fc  std 28, 192(1)
  04e8200  ori 31, 5, 0
  04e8204  std 30, 208(1)
  04e8208  li 28, 0
  04e820c  ori 30, 4, 0
  04e8210  std 29, 200(1)
  04e8214  addic 5, 1, 172
  04e8218  std 27, 184(1)
  04e821c  ori 29, 3, 0
  04e8220  lwz 27, 0(31)
  04e8224  li 4, 0
  04e8228  stw 28, 0(31)
  04e822c  li 6, 0
  04e8230  li 7, 0
  04e8234  bl 0x64f204
  04e8238  ld 2, 40(1)
  04e823c  cmpwi 3, 0
  04e8240  bt 2, 0x4e8264
  04e8244  ori 5, 3, 0
  04e8248  lis 3, 102
  04e824c  ori 4, 29, 0
  04e8250  addic 3, 3, -24328
  04e8254  bl 0x4ffc9c
  04e8258  nop
  04e825c  li 3, -1
  04e8260  b 0x4e83bc
  04e8264  lwz 3, 172(1)
  04e8268  addic 4, 1, 120
  04e826c  extsw 3, 3
  04e8270  bl 0x64f224
  04e8274  ld 2, 40(1)
  04e8278  cmpwi 3, 0
  04e827c  bt 2, 0x4e82b0
  04e8280  ori 5, 3, 0
  04e8284  lis 3, 102
  04e8288  ori 4, 29, 0
  04e828c  addic 3, 3, -24296
  04e8290  bl 0x4ffc9c
  04e8294  nop
  04e8298  lwz 3, 172(1)
  04e829c  extsw 3, 3
  04e82a0  bl 0x64f1c4
  04e82a4  ld 2, 40(1)
  04e82a8  li 3, -1
  04e82ac  b 0x4e83bc
  04e82b0  addic 3, 1, 156
  04e82b4  lwz 7, 172(1)
  04e82b8  addic 6, 1, 112
  04e82bc  ori 4, 30, 0
  04e82c0  ld 5, 0(3)
  04e82c4  extsw 3, 7
  04e82c8  bl 0x64f1e4
  04e82cc  ld 2, 40(1)
  04e82d0  addic 5, 1, 156
  04e82d4  ld 4, 112(1)
  04e82d8  ori 6, 3, 0
  04e82dc  cmpwi 6, 0
  04e82e0  ld 3, 0(5)
  04e82e4  ori 5, 3, 0
  04e82e8  lwz 3, 172(1)
  04e82ec  bf 2, 0x4e82f8
  04e82f0  cmpd 5, 4
  04e82f4  bt 2, 0x4e8328
  04e82f8  lis 3, 102
  04e82fc  ori 4, 29, 0
  04e8300  addic 3, 3, -24264
  04e8304  ori 5, 6, 0
  04e8308  bl 0x4ffc9c
  04e830c  nop
  04e8310  lwz 3, 172(1)
  04e8314  extsw 3, 3
  04e8318  bl 0x64f1c4
  04e831c  ld 2, 40(1)
  04e8320  li 3, -1
  04e8324  b 0x4e83bc
  04e8328  extsw 3, 3
  04e832c  bl 0x64f1c4
  04e8330  ld 2, 40(1)
  04e8334  cmpwi 3, 0
  04e8338  bt 2, 0x4e835c
  04e833c  ori 5, 3, 0
  04e8340  lis 3, 102
  04e8344  ori 4, 29, 0
  04e8348  addic 3, 3, -24232
  04e834c  bl 0x4ffc9c
  04e8350  nop
  04e8354  li 3, -1
  04e8358  b 0x4e83bc
  04e835c  lis 3, 2
  04e8360  cmpw 27, 3
  04e8364  bf 2, 0x4e8398
  04e8368  addic 3, 1, 156
  04e836c  lis 5, 2
  04e8370  li 4, 0
  04e8374  ld 6, 0(3)
  04e8378  addc 3, 30, 6
  04e837c  subc 5, 5, 6
  04e8380  clrldi 3, 3, 32
  04e8384  clrldi 5, 5, 32
  04e8388  bl 0x5d0140
  04e838c  nop
  04e8390  lis 30, 2
  04e8394  b 0x4e83a0
  04e8398  addic 3, 1, 156
  04e839c  ld 30, 0(3)
  04e83a0  lis 3, 102
  04e83a4  stw 30, 0(31)
  04e83a8  ori 4, 29, 0
  04e83ac  addic 3, 3, -24200
  04e83b0  bl 0x5cd098
  04e83b4  nop
  04e83b8  ori 3, 28, 0
  04e83bc  ld 0, 240(1)
  04e83c0  mtlr 0
  04e83c4  ld 27, 184(1)
  04e83c8  ld 28, 192(1)
  04e83cc  ld 29, 200(1)
  04e83d0  ld 30, 208(1)
  04e83d4  ld 31, 216(1)
  04e83d8  addi 1, 1, 224
  04e83dc  blr

FUN_004e83e0:   # 0x4e83e0, 0x90 bytes
  04e83e0  stdu 1, -128(1)
  04e83e4  mflr 0
  04e83e8  std 0, 144(1)
  04e83ec  std 31, 120(1)
  04e83f0  ori 31, 3, 0
  04e83f4  li 3, 5
  04e83f8  li 4, 3
  04e83fc  li 5, 0
  04e8400  li 6, 240
  04e8404  stw 3, 0(31)
  04e8408  stw 4, 4(31)
  04e840c  stw 5, 28(31)
  04e8410  li 3, 240
  04e8414  stw 6, 32(31)
  04e8418  stw 5, 24(31)
  04e841c  stw 5, 20(31)
  04e8420  stw 5, 16(31)
  04e8424  stw 5, 12(31)
  04e8428  stw 5, 8(31)
  04e842c  bl 0x5d5838
  04e8430  nop
  04e8434  cmpwi 3, 0
  04e8438  stw 3, 36(31)
  04e843c  bf 2, 0x4e8458
  04e8440  lis 3, 102
  04e8444  addic 3, 3, -24152
  04e8448  bl 0x4ffc9c
  04e844c  nop
  04e8450  li 3, 0
  04e8454  b 0x4e845c
  04e8458  li 3, 1
  04e845c  ld 0, 144(1)
  04e8460  mtlr 0
  04e8464  ld 31, 120(1)
  04e8468  addi 1, 1, 128
  04e846c  blr

idol::NewSaveData:   # 0x4e8470, 0x130 bytes
  04e8470  stdu 1, -160(1)
  04e8474  mflr 0
  04e8478  std 0, 176(1)
  04e847c  std 31, 152(1)
  04e8480  std 30, 144(1)
  04e8484  ori 31, 4, 0
  04e8488  li 30, 0
  04e848c  std 29, 136(1)
  04e8490  std 27, 120(1)
  04e8494  li 4, 0
  04e8498  ori 29, 5, 0
  04e849c  std 28, 128(1)
  04e84a0  ori 27, 3, 0
  04e84a4  lwz 28, 0(31)
  04e84a8  li 5, 128
  04e84ac  ori 3, 28, 0
  04e84b0  stw 30, 1280(28)
  04e84b4  bl 0x5d0140
  04e84b8  nop
  04e84bc  lis 4, 144
  04e84c0  ori 3, 28, 0
  04e84c4  li 5, 128
  04e84c8  lwz 4, -22980(4)
  04e84cc  bl 0x5cccec
  04e84d0  nop
  04e84d4  lwz 6, 0(31)
  04e84d8  li 4, 0
  04e84dc  li 5, 128
  04e84e0  addic 28, 6, 128
  04e84e4  ori 3, 28, 0
  04e84e8  stb 30, 127(6)
  04e84ec  bl 0x5d0140
  04e84f0  nop
  04e84f4  lwz 4, 1140(27)
  04e84f8  ori 3, 28, 0
  04e84fc  li 5, 128
  04e8500  bl 0x5cccec
  04e8504  nop
  04e8508  lwz 6, 0(31)
  04e850c  li 4, 0
  04e8510  addic 28, 6, 256
  04e8514  li 5, 1024
  04e8518  ori 3, 28, 0
  04e851c  stb 30, 255(6)
  04e8520  bl 0x5d0140
  04e8524  nop
  04e8528  addic 4, 29, 160
  04e852c  ori 3, 28, 0
  04e8530  li 5, 1024
  04e8534  bl 0x5cccec
  04e8538  nop
  04e853c  lwz 6, 0(31)
  04e8540  addic 4, 29, 1184
  04e8544  li 5, 8
  04e8548  addic 3, 6, 1288
  04e854c  stb 30, 1279(6)
  04e8550  bl 0x5cccec
  04e8554  nop
  04e8558  lwz 4, 0(31)
  04e855c  li 3, 1285
  04e8560  li 5, 1286
  04e8564  li 6, 1287
  04e8568  stb 30, 1295(4)
  04e856c  stb 30, 1284(4)
  04e8570  stbx 30, 4, 3
  04e8574  stbx 30, 4, 5
  04e8578  stbx 30, 4, 6
  04e857c  ld 0, 176(1)
  04e8580  mtlr 0
  04e8584  ld 27, 120(1)
  04e8588  ld 28, 128(1)
  04e858c  ld 29, 136(1)
  04e8590  ld 30, 144(1)
  04e8594  ld 31, 152(1)
  04e8598  addi 1, 1, 160
  04e859c  blr

FUN_004e85a0:   # 0x4e85a0, 0x174 bytes
  04e85a0  stdu 1, -144(1)
  04e85a4  mflr 0
  04e85a8  std 0, 160(1)
  04e85ac  std 31, 136(1)
  04e85b0  lis 4, 144
  04e85b4  ori 31, 3, 0
  04e85b8  lwz 3, -22976(4)
  04e85bc  std 30, 128(1)
  04e85c0  std 29, 120(1)
  04e85c4  cmpwi 3, 0
  04e85c8  bf 2, 0x4e86bc
  04e85cc  li 3, 1144
  04e85d0  li 29, 0
  04e85d4  bl 0x5e38b0
  04e85d8  nop
  04e85dc  ori 30, 3, 0
  04e85e0  cmpwi 30, 0
  04e85e4  bt 2, 0x4e86b4
  04e85e8  lis 3, 102
  04e85ec  stw 29, 4(30)
  04e85f0  li 6, 1
  04e85f4  addic 3, 3, 6352
  04e85f8  li 7, 4
  04e85fc  li 4, 0
  04e8600  li 5, 32
  04e8604  stw 3, 0(30)
  04e8608  stw 29, 8(30)
  04e860c  stw 29, 12(30)
  04e8610  addic 3, 30, 1072
  04e8614  stw 29, 16(30)
  04e8618  stw 29, 20(30)
  04e861c  stw 29, 24(30)
  04e8620  stw 29, 1104(30)
  04e8624  stw 29, 1112(30)
  04e8628  stb 29, 1116(30)
  04e862c  stb 29, 1117(30)
  04e8630  stw 6, 1120(30)
  04e8634  stw 7, 1108(30)
  04e8638  bl 0x5d0140
  04e863c  nop
  04e8640  li 3, 33
  04e8644  li 4, 34
  04e8648  stb 29, 32(30)
  04e864c  li 5, 35
  04e8650  li 7, 37
  04e8654  li 6, 39
  04e8658  stbx 29, 30, 3
  04e865c  li 3, 38
  04e8660  stbx 29, 30, 4
  04e8664  stbx 29, 30, 5
  04e8668  li 4, 41
  04e866c  stb 29, 36(30)
  04e8670  li 5, 42
  04e8674  stbx 29, 30, 7
  04e8678  li 8, 47
  04e867c  li 7, 43
  04e8680  stbx 29, 30, 3
  04e8684  stbx 29, 30, 6
  04e8688  li 3, 45
  04e868c  stb 29, 40(30)
  04e8690  li 6, 46
  04e8694  stbx 29, 30, 4
  04e8698  stbx 29, 30, 5
  04e869c  stbx 29, 30, 7
  04e86a0  stb 29, 44(30)
  04e86a4  stbx 29, 30, 3
  04e86a8  stbx 29, 30, 6
  04e86ac  stbx 29, 30, 8
  04e86b0  ori 29, 30, 0
  04e86b4  lis 3, 144
  04e86b8  stw 29, -22976(3)
  04e86bc  lwz 31, 36(31)
  04e86c0  cmpwi 31, 0
  04e86c4  bt 2, 0x4e86d4
  04e86c8  ori 3, 31, 0
  04e86cc  bl 0x5d580c
  04e86d0  nop
  04e86d4  lis 3, 102
  04e86d8  addic 3, 3, -24108
  04e86dc  bl 0x4ffc9c
  04e86e0  nop
  04e86e4  lis 3, 273
  04e86e8  li 4, 0
  04e86ec  lis 5, 273
  04e86f0  stw 4, 5644(3)
  04e86f4  stb 4, 5636(5)
  04e86f8  ld 0, 160(1)
  04e86fc  mtlr 0
  04e8700  ld 29, 120(1)
  04e8704  ld 30, 128(1)
  04e8708  ld 31, 136(1)
  04e870c  addi 1, 1, 144
  04e8710  blr

idol::SaveSystem_PS::SaveGameData:   # 0x4e8714, 0x35c bytes
  04e8714  stdu 1, -480(1)
  04e8718  mflr 0
  04e871c  std 0, 496(1)
  04e8720  std 31, 472(1)
  04e8724  lis 3, 144
  04e8728  lwz 31, -22976(3)
  04e872c  std 30, 464(1)
  04e8730  std 29, 456(1)
  04e8734  cmpwi 31, 0
  04e8738  bf 2, 0x4e882c
  04e873c  li 3, 1144
  04e8740  li 31, 0
  04e8744  bl 0x5e38b0
  04e8748  nop
  04e874c  ori 30, 3, 0
  04e8750  cmpwi 30, 0
  04e8754  bt 2, 0x4e8824
  04e8758  lis 3, 102
  04e875c  stw 31, 4(30)
  04e8760  li 6, 1
  04e8764  addic 4, 3, 6352
  04e8768  li 7, 4
  04e876c  addic 3, 30, 1072
  04e8770  li 5, 32
  04e8774  stw 4, 0(30)
  04e8778  stw 31, 8(30)
  04e877c  li 4, 0
  04e8780  stw 31, 12(30)
  04e8784  stw 31, 16(30)
  04e8788  stw 31, 20(30)
  04e878c  stw 31, 24(30)
  04e8790  stw 31, 1104(30)
  04e8794  stw 31, 1112(30)
  04e8798  stb 31, 1116(30)
  04e879c  stb 31, 1117(30)
  04e87a0  stw 6, 1120(30)
  04e87a4  stw 7, 1108(30)
  04e87a8  bl 0x5d0140
  04e87ac  nop
  04e87b0  li 3, 33
  04e87b4  stb 31, 32(30)
  04e87b8  li 4, 34
  04e87bc  li 6, 35
  04e87c0  li 5, 37
  04e87c4  li 7, 41
  04e87c8  stbx 31, 30, 3
  04e87cc  li 8, 43
  04e87d0  li 3, 38
  04e87d4  stbx 31, 30, 4
  04e87d8  li 4, 39
  04e87dc  stbx 31, 30, 6
  04e87e0  stb 31, 36(30)
  04e87e4  li 6, 42
  04e87e8  stbx 31, 30, 5
  04e87ec  li 5, 45
  04e87f0  stbx 31, 30, 3
  04e87f4  stbx 31, 30, 4
  04e87f8  stb 31, 40(30)
  04e87fc  li 3, 46
  04e8800  stbx 31, 30, 7
  04e8804  li 4, 47
  04e8808  stbx 31, 30, 6
  04e880c  stbx 31, 30, 8
  04e8810  stb 31, 44(30)
  04e8814  stbx 31, 30, 5
  04e8818  stbx 31, 30, 3
  04e881c  stbx 31, 30, 4
  04e8820  ori 31, 30, 0
  04e8824  lis 3, 144
  04e8828  stw 31, -22976(3)
  04e882c  li 3, -1
  04e8830  vspltisw 2, 0
  04e8834  li 4, 128
  04e8838  li 5, 144
  04e883c  li 7, 160
  04e8840  stw 3, 384(1)
  04e8844  li 6, 192
  04e8848  li 3, 176
  04e884c  li 8, 208
  04e8850  stvx 2, 4, 1
  04e8854  addic 29, 1, 128
  04e8858  li 4, 224
  04e885c  stvx 2, 5, 1
  04e8860  li 5, 240
  04e8864  stvx 2, 7, 1
  04e8868  li 7, 256
  04e886c  stvx 2, 3, 1
  04e8870  li 3, 272
  04e8874  stvx 2, 6, 1
  04e8878  li 6, 288
  04e887c  stvx 2, 8, 1
  04e8880  stvx 2, 4, 1
  04e8884  li 30, 0
  04e8888  li 4, 304
  04e888c  stvx 2, 5, 1
  04e8890  li 5, 320
  04e8894  stvx 2, 7, 1
  04e8898  li 7, 336
  04e889c  stvx 2, 3, 1
  04e88a0  li 3, 352
  04e88a4  stvx 2, 6, 1
  04e88a8  li 6, 368
  04e88ac  stvx 2, 4, 1
  04e88b0  stvx 2, 5, 1
  04e88b4  stvx 2, 7, 1
  04e88b8  stvx 2, 3, 1
  04e88bc  stvx 2, 6, 1
  04e88c0  lwz 3, 1120(31)
  04e88c4  rlwinm 4, 3, 0, 30, 30
  04e88c8  cmpwi 4, 0
  04e88cc  bt 2, 0x4e8900
  04e88d0  lbz 4, 1116(31)
  04e88d4  addic 3, 31, 1072
  04e88d8  cmpwi 4, 0
  04e88dc  cmpwi 1, 3, 0
  04e88e0  bt 2, 0x4e8924
  04e88e4  bt 6, 0x4e8924
  04e88e8  ori 4, 3, 0
  04e88ec  ori 3, 29, 0
  04e88f0  li 5, 32
  04e88f4  bl 0x5cccec
  04e88f8  nop
  04e88fc  b 0x4e8924
  04e8900  clrlwi 3, 3, 31
  04e8904  cmpwi 3, 0
  04e8908  bt 2, 0x4e8924
  04e890c  lis 4, 144
  04e8910  ori 3, 29, 0
  04e8914  addic 4, 4, -22840
  04e8918  li 5, 32
  04e891c  bl 0x5cccec
  04e8920  nop
  04e8924  lis 3, 273
  04e8928  stw 29, 396(1)
  04e892c  li 4, 2
  04e8930  addic 29, 3, 5648
  04e8934  stb 30, 159(1)
  04e8938  li 6, 4
  04e893c  stw 30, 388(1)
  04e8940  stw 30, 392(1)
  04e8944  li 7, 5
  04e8948  stw 30, 400(1)
  04e894c  li 5, 3
  04e8950  stw 4, 5648(3)
  04e8954  stw 6, 4(29)
  04e8958  stw 30, 8(29)
  04e895c  li 4, 240
  04e8960  stw 7, 404(1)
  04e8964  li 3, 240
  04e8968  stw 5, 408(1)
  04e896c  stw 30, 412(1)
  04e8970  stw 30, 416(1)
  04e8974  stw 30, 420(1)
  04e8978  stw 30, 424(1)
  04e897c  stw 30, 428(1)
  04e8980  stw 30, 432(1)
  04e8984  stw 4, 436(1)
  04e8988  bl 0x5d5838
  04e898c  nop
  04e8990  cmpwi 3, 0
  04e8994  stw 3, 440(1)
  04e8998  bf 2, 0x4e89b0
  04e899c  lis 3, 102
  04e89a0  addic 3, 3, -24152
  04e89a4  bl 0x4ffc9c
  04e89a8  nop
  04e89ac  b 0x4e8a14
  04e89b0  lis 3, 144
  04e89b4  li 4, 5
  04e89b8  lis 8, -1
  04e89bc  lis 7, 113
  04e89c0  lis 9, 113
  04e89c4  stw 4, -22972(3)
  04e89c8  li 3, 0
  04e89cc  std 29, 112(1)
  04e89d0  lis 4, 113
  04e89d4  ori 10, 8, 65535
  04e89d8  addic 5, 1, 388
  04e89dc  addic 8, 4, 96
  04e89e0  addic 6, 1, 404
  04e89e4  addic 7, 7, 88
  04e89e8  li 4, 0
  04e89ec  addic 9, 9, 104
  04e89f0  clrldi 10, 10, 32
  04e89f4  bl 0x64f4e4
  04e89f8  ld 2, 40(1)
  04e89fc  lis 5, 102
  04e8a00  stw 3, 384(1)
  04e8a04  clrldi 4, 3, 32
  04e8a08  addic 3, 5, -24060
  04e8a0c  bl 0x4ffc9c
  04e8a10  nop
  04e8a14  lwz 3, 384(1)
  04e8a18  ori 4, 31, 0
  04e8a1c  stw 3, 8(31)
  04e8a20  lwz 3, 384(1)
  04e8a24  bl 0x4e6eac
  04e8a28  addic 4, 1, 384
  04e8a2c  ori 3, 31, 0
  04e8a30  li 5, 0
  04e8a34  bl 0x4e6fd8
  04e8a38  lwz 4, 384(1)
  04e8a3c  addic 3, 1, 404
  04e8a40  stw 4, 8(31)
  04e8a44  bl 0x4e85a0
  04e8a48  li 3, 0
  04e8a4c  bl 0x650744
  04e8a50  ld 2, 40(1)
  04e8a54  ld 0, 496(1)
  04e8a58  mtlr 0
  04e8a5c  ld 29, 456(1)
  04e8a60  ld 30, 464(1)
  04e8a64  ld 31, 472(1)
  04e8a68  addi 1, 1, 480
  04e8a6c  blr

idol::SaveSystem_PS::AutoSaveGameData:   # 0x4e8a70, 0x2a8 bytes
  04e8a70  stdu 1, -224(1)
  04e8a74  mflr 0
  04e8a78  std 0, 240(1)
  04e8a7c  std 31, 216(1)
  04e8a80  lis 3, 144
  04e8a84  lwz 31, -22976(3)
  04e8a88  std 30, 208(1)
  04e8a8c  std 29, 200(1)
  04e8a90  cmpwi 31, 0
  04e8a94  bf 2, 0x4e8b88
  04e8a98  li 3, 1144
  04e8a9c  li 31, 0
  04e8aa0  bl 0x5e38b0
  04e8aa4  nop
  04e8aa8  ori 30, 3, 0
  04e8aac  cmpwi 30, 0
  04e8ab0  bt 2, 0x4e8b80
  04e8ab4  lis 3, 102
  04e8ab8  stw 31, 4(30)
  04e8abc  li 6, 1
  04e8ac0  addic 4, 3, 6352
  04e8ac4  li 7, 4
  04e8ac8  addic 3, 30, 1072
  04e8acc  li 5, 32
  04e8ad0  stw 4, 0(30)
  04e8ad4  stw 31, 8(30)
  04e8ad8  li 4, 0
  04e8adc  stw 31, 12(30)
  04e8ae0  stw 31, 16(30)
  04e8ae4  stw 31, 20(30)
  04e8ae8  stw 31, 24(30)
  04e8aec  stw 31, 1104(30)
  04e8af0  stw 31, 1112(30)
  04e8af4  stb 31, 1116(30)
  04e8af8  stb 31, 1117(30)
  04e8afc  stw 6, 1120(30)
  04e8b00  stw 7, 1108(30)
  04e8b04  bl 0x5d0140
  04e8b08  nop
  04e8b0c  li 3, 33
  04e8b10  stb 31, 32(30)
  04e8b14  li 4, 34
  04e8b18  li 6, 35
  04e8b1c  li 5, 37
  04e8b20  li 7, 41
  04e8b24  stbx 31, 30, 3
  04e8b28  li 8, 43
  04e8b2c  li 3, 38
  04e8b30  stbx 31, 30, 4
  04e8b34  li 4, 39
  04e8b38  stbx 31, 30, 6
  04e8b3c  stb 31, 36(30)
  04e8b40  li 6, 42
  04e8b44  stbx 31, 30, 5
  04e8b48  li 5, 45
  04e8b4c  stbx 31, 30, 3
  04e8b50  stbx 31, 30, 4
  04e8b54  stb 31, 40(30)
  04e8b58  li 3, 46
  04e8b5c  stbx 31, 30, 7
  04e8b60  li 4, 47
  04e8b64  stbx 31, 30, 6
  04e8b68  stbx 31, 30, 8
  04e8b6c  stb 31, 44(30)
  04e8b70  stbx 31, 30, 5
  04e8b74  stbx 31, 30, 3
  04e8b78  stbx 31, 30, 4
  04e8b7c  ori 31, 30, 0
  04e8b80  lis 3, 144
  04e8b84  stw 31, -22976(3)
  04e8b88  lis 3, 273
  04e8b8c  li 4, 4
  04e8b90  addic 29, 3, 5648
  04e8b94  li 5, 0
  04e8b98  stw 4, 5648(3)
  04e8b9c  stw 4, 4(29)
  04e8ba0  stw 5, 8(29)
  04e8ba4  lbz 3, 1116(31)
  04e8ba8  cmpwi 3, 0
  04e8bac  bt 2, 0x4e8c24
  04e8bb0  addic 3, 31, 1072
  04e8bb4  cmpwi 3, 0
  04e8bb8  bt 2, 0x4e8c24
  04e8bbc  addic 30, 1, 168
  04e8bc0  ori 4, 3, 0
  04e8bc4  ori 3, 30, 0
  04e8bc8  li 5, 32
  04e8bcc  bl 0x5cccec
  04e8bd0  nop
  04e8bd4  li 3, 5
  04e8bd8  li 4, 240
  04e8bdc  li 5, 3
  04e8be0  li 6, 0
  04e8be4  stw 3, 128(1)
  04e8be8  stw 4, 160(1)
  04e8bec  stw 5, 132(1)
  04e8bf0  li 3, 240
  04e8bf4  stw 6, 136(1)
  04e8bf8  stw 6, 140(1)
  04e8bfc  stw 6, 144(1)
  04e8c00  stw 6, 148(1)
  04e8c04  stw 6, 152(1)
  04e8c08  stw 6, 156(1)
  04e8c0c  bl 0x5d5838
  04e8c10  nop
  04e8c14  cmpwi 3, 0
  04e8c18  stw 3, 164(1)
  04e8c1c  bt 2, 0x4e8c34
  04e8c20  b 0x4e8c54
  04e8c24  lis 3, 144
  04e8c28  li 4, 5
  04e8c2c  stw 4, -22972(3)
  04e8c30  b 0x4e8ce8
  04e8c34  lis 3, 102
  04e8c38  addic 3, 3, -24152
  04e8c3c  bl 0x4ffc9c
  04e8c40  nop
  04e8c44  lis 3, 144
  04e8c48  li 4, 5
  04e8c4c  stw 4, -22972(3)
  04e8c50  b 0x4e8ce8
  04e8c54  lis 3, 144
  04e8c58  li 5, 5
  04e8c5c  lis 4, -1
  04e8c60  lis 8, 113
  04e8c64  lis 9, 113
  04e8c68  stw 5, -22972(3)
  04e8c6c  ori 5, 4, 65535
  04e8c70  std 29, 112(1)
  04e8c74  li 3, 0
  04e8c78  clrldi 10, 5, 32
  04e8c7c  addic 7, 1, 128
  04e8c80  addic 8, 8, 96
  04e8c84  addic 9, 9, 104
  04e8c88  li 4, 0
  04e8c8c  ori 5, 30, 0
  04e8c90  li 6, 1
  04e8c94  bl 0x64f5c4
  04e8c98  ld 2, 40(1)
  04e8c9c  ori 29, 3, 0
  04e8ca0  cmpwi 29, 0
  04e8ca4  stw 29, 8(31)
  04e8ca8  bf 2, 0x4e8cbc
  04e8cac  lis 3, 144
  04e8cb0  li 4, 3
  04e8cb4  stw 4, -22972(3)
  04e8cb8  b 0x4e8ce8
  04e8cbc  cmpwi 29, 1
  04e8cc0  bf 2, 0x4e8cd4
  04e8cc4  lis 3, 144
  04e8cc8  li 4, 6
  04e8ccc  stw 4, -22972(3)
  04e8cd0  b 0x4e8ce8
  04e8cd4  lis 3, 102
  04e8cd8  ori 4, 29, 0
  04e8cdc  addic 3, 3, -23996
  04e8ce0  bl 0x5cd098
  04e8ce4  nop
  04e8ce8  addic 3, 1, 128
  04e8cec  bl 0x4e85a0
  04e8cf0  li 3, 0
  04e8cf4  bl 0x650744
  04e8cf8  ld 2, 40(1)
  04e8cfc  ld 0, 240(1)
  04e8d00  mtlr 0
  04e8d04  ld 29, 200(1)
  04e8d08  ld 30, 208(1)
  04e8d0c  ld 31, 216(1)
  04e8d10  addi 1, 1, 224
  04e8d14  blr

FUN_004e8d18:   # 0x4e8d18, 0x64 bytes
  04e8d18  cmpwi 3, 4
  04e8d1c  cmpwi 1, 3, 11
  04e8d20  cmpwi 6, 3, 10
  04e8d24  cmpwi 7, 3, 5
  04e8d28  bt 2, 0x4e8d4c
  04e8d2c  cmpwi 3, 6
  04e8d30  bt 2, 0x4e8d4c
  04e8d34  bt 30, 0x4e8d4c
  04e8d38  bt 26, 0x4e8d4c
  04e8d3c  bt 6, 0x4e8d4c
  04e8d40  li 3, 0
  04e8d44  stw 3, 0(4)
  04e8d48  b 0x4e8d78
  04e8d4c  lis 3, 144
  04e8d50  li 5, 16
  04e8d54  addic 6, 3, -21576
  04e8d58  li 7, 1
  04e8d5c  li 8, 0
  04e8d60  stw 5, -21576(3)
  04e8d64  stw 6, 0(4)
  04e8d68  stw 7, 4(6)
  04e8d6c  stw 8, 16(6)
  04e8d70  stw 8, 12(6)
  04e8d74  stw 8, 20(6)
  04e8d78  blr

idol::SaveSystem_PS::LoadGameData:   # 0x4e8d7c, 0x2c0 bytes
  04e8d7c  stdu 1, -480(1)
  04e8d80  mflr 0
  04e8d84  std 0, 496(1)
  04e8d88  std 31, 472(1)
  04e8d8c  lis 3, 144
  04e8d90  lwz 31, -22976(3)
  04e8d94  std 30, 464(1)
  04e8d98  std 29, 456(1)
  04e8d9c  std 28, 448(1)
  04e8da0  cmpwi 31, 0
  04e8da4  bf 2, 0x4e8e98
  04e8da8  li 3, 1144
  04e8dac  li 31, 0
  04e8db0  bl 0x5e38b0
  04e8db4  nop
  04e8db8  ori 30, 3, 0
  04e8dbc  cmpwi 30, 0
  04e8dc0  bt 2, 0x4e8e90
  04e8dc4  lis 3, 102
  04e8dc8  stw 31, 4(30)
  04e8dcc  li 6, 1
  04e8dd0  addic 4, 3, 6352
  04e8dd4  li 7, 4
  04e8dd8  addic 3, 30, 1072
  04e8ddc  li 5, 32
  04e8de0  stw 4, 0(30)
  04e8de4  stw 31, 8(30)
  04e8de8  li 4, 0
  04e8dec  stw 31, 12(30)
  04e8df0  stw 31, 16(30)
  04e8df4  stw 31, 20(30)
  04e8df8  stw 31, 24(30)
  04e8dfc  stw 31, 1104(30)
  04e8e00  stw 31, 1112(30)
  04e8e04  stb 31, 1116(30)
  04e8e08  stb 31, 1117(30)
  04e8e0c  stw 6, 1120(30)
  04e8e10  stw 7, 1108(30)
  04e8e14  bl 0x5d0140
  04e8e18  nop
  04e8e1c  li 3, 33
  04e8e20  stb 31, 32(30)
  04e8e24  li 4, 34
  04e8e28  li 6, 35
  04e8e2c  li 5, 37
  04e8e30  li 7, 41
  04e8e34  stbx 31, 30, 3
  04e8e38  li 8, 43
  04e8e3c  li 3, 38
  04e8e40  stbx 31, 30, 4
  04e8e44  li 4, 39
  04e8e48  stbx 31, 30, 6
  04e8e4c  stb 31, 36(30)
  04e8e50  li 6, 42
  04e8e54  stbx 31, 30, 5
  04e8e58  li 5, 45
  04e8e5c  stbx 31, 30, 3
  04e8e60  stbx 31, 30, 4
  04e8e64  stb 31, 40(30)
  04e8e68  li 3, 46
  04e8e6c  stbx 31, 30, 7
  04e8e70  li 4, 47
  04e8e74  stbx 31, 30, 6
  04e8e78  stbx 31, 30, 8
  04e8e7c  stb 31, 44(30)
  04e8e80  stbx 31, 30, 5
  04e8e84  stbx 31, 30, 3
  04e8e88  stbx 31, 30, 4
  04e8e8c  ori 31, 30, 0
  04e8e90  lis 3, 144
  04e8e94  stw 31, -22976(3)
  04e8e98  li 29, 0
  04e8e9c  lis 30, 273
  04e8ea0  lis 3, 102
  04e8ea4  addic 30, 30, 5648
  04e8ea8  addic 3, 3, -23072
  04e8eac  stw 29, 128(1)
  04e8eb0  bl 0x4ffc9c
  04e8eb4  nop
  04e8eb8  addic 28, 1, 192
  04e8ebc  lis 4, 144
  04e8ec0  ori 3, 28, 0
  04e8ec4  addic 4, 4, -22840
  04e8ec8  li 5, 256
  04e8ecc  bl 0x5cccec
  04e8ed0  nop
  04e8ed4  stb 29, 447(1)
  04e8ed8  li 4, 5
  04e8edc  stw 29, 132(1)
  04e8ee0  li 5, 3
  04e8ee4  stw 29, 136(1)
  04e8ee8  li 6, 240
  04e8eec  stw 28, 140(1)
  04e8ef0  li 3, 240
  04e8ef4  stw 29, 144(1)
  04e8ef8  stw 4, 148(1)
  04e8efc  stw 5, 152(1)
  04e8f00  stw 29, 156(1)
  04e8f04  stw 29, 160(1)
  04e8f08  stw 29, 164(1)
  04e8f0c  stw 29, 168(1)
  04e8f10  stw 29, 172(1)
  04e8f14  stw 29, 176(1)
  04e8f18  stw 6, 180(1)
  04e8f1c  bl 0x5d5838
  04e8f20  nop
  04e8f24  cmpwi 3, 0
  04e8f28  stw 3, 184(1)
  04e8f2c  bf 2, 0x4e8f54
  04e8f30  lis 3, 102
  04e8f34  addic 3, 3, -24152
  04e8f38  bl 0x4ffc9c
  04e8f3c  nop
  04e8f40  lis 3, 102
  04e8f44  addic 3, 3, -23008
  04e8f48  bl 0x5cd098
  04e8f4c  nop
  04e8f50  b 0x4e9008
  04e8f54  lis 3, 144
  04e8f58  li 5, 5
  04e8f5c  li 4, 4
  04e8f60  li 6, 0
  04e8f64  lis 7, 273
  04e8f68  li 8, 3
  04e8f6c  stw 5, -22972(3)
  04e8f70  lis 9, 113
  04e8f74  stw 4, 4(30)
  04e8f78  lis 3, 113
  04e8f7c  stw 6, 8(30)
  04e8f80  lis 4, -1
  04e8f84  stw 8, 5648(7)
  04e8f88  addic 5, 1, 132
  04e8f8c  addic 7, 3, 112
  04e8f90  std 30, 112(1)
  04e8f94  li 3, 0
  04e8f98  lis 8, 113
  04e8f9c  ori 10, 4, 65535
  04e8fa0  addic 6, 1, 148
  04e8fa4  addic 8, 8, 120
  04e8fa8  addic 9, 9, 128
  04e8fac  li 4, 0
  04e8fb0  clrldi 10, 10, 32
  04e8fb4  bl 0x64f564
  04e8fb8  ld 2, 40(1)
  04e8fbc  stw 3, 128(1)
  04e8fc0  ori 4, 31, 0
  04e8fc4  lwz 5, 1104(31)
  04e8fc8  stw 3, 8(31)
  04e8fcc  stw 5, 4(31)
  04e8fd0  lwz 3, 128(1)
  04e8fd4  bl 0x4e6eac
  04e8fd8  ori 3, 31, 0
  04e8fdc  addic 4, 1, 128
  04e8fe0  li 5, 1
  04e8fe4  bl 0x4e6fd8
  04e8fe8  lwz 3, 128(1)
  04e8fec  lis 4, 102
  04e8ff0  stw 3, 8(31)
  04e8ff4  lwz 5, 128(1)
  04e8ff8  addic 3, 4, -22944
  04e8ffc  ori 4, 5, 0
  04e9000  bl 0x4ffc9c
  04e9004  nop
  04e9008  addic 3, 1, 148
  04e900c  bl 0x4e85a0
  04e9010  li 3, 0
  04e9014  bl 0x650744
  04e9018  ld 2, 40(1)
  04e901c  ld 0, 496(1)
  04e9020  mtlr 0
  04e9024  ld 28, 448(1)
  04e9028  ld 29, 456(1)
  04e902c  ld 30, 464(1)
  04e9030  ld 31, 472(1)
  04e9034  addi 1, 1, 480
  04e9038  blr

idol::thr_SaveSystem_CheckExisting:   # 0x4e903c, 0x2a0 bytes
  04e903c  stdu 1, -480(1)
  04e9040  mflr 0
  04e9044  std 0, 496(1)
  04e9048  std 31, 472(1)
  04e904c  lis 3, 144
  04e9050  lwz 31, -22976(3)
  04e9054  std 30, 464(1)
  04e9058  std 29, 456(1)
  04e905c  std 28, 448(1)
  04e9060  cmpwi 31, 0
  04e9064  bf 2, 0x4e9158
  04e9068  li 3, 1144
  04e906c  li 31, 0
  04e9070  bl 0x5e38b0
  04e9074  nop
  04e9078  ori 30, 3, 0
  04e907c  cmpwi 30, 0
  04e9080  bt 2, 0x4e9150
  04e9084  lis 3, 102
  04e9088  stw 31, 4(30)
  04e908c  li 6, 1
  04e9090  addic 4, 3, 6352
  04e9094  li 7, 4
  04e9098  addic 3, 30, 1072
  04e909c  li 5, 32
  04e90a0  stw 4, 0(30)
  04e90a4  stw 31, 8(30)
  04e90a8  li 4, 0
  04e90ac  stw 31, 12(30)
  04e90b0  stw 31, 16(30)
  04e90b4  stw 31, 20(30)
  04e90b8  stw 31, 24(30)
  04e90bc  stw 31, 1104(30)
  04e90c0  stw 31, 1112(30)
  04e90c4  stb 31, 1116(30)
  04e90c8  stb 31, 1117(30)
  04e90cc  stw 6, 1120(30)
  04e90d0  stw 7, 1108(30)
  04e90d4  bl 0x5d0140
  04e90d8  nop
  04e90dc  li 3, 33
  04e90e0  stb 31, 32(30)
  04e90e4  li 4, 34
  04e90e8  li 6, 35
  04e90ec  li 5, 37
  04e90f0  li 7, 41
  04e90f4  stbx 31, 30, 3
  04e90f8  li 8, 43
  04e90fc  li 3, 38
  04e9100  stbx 31, 30, 4
  04e9104  li 4, 39
  04e9108  stbx 31, 30, 6
  04e910c  stb 31, 36(30)
  04e9110  li 6, 42
  04e9114  stbx 31, 30, 5
  04e9118  li 5, 45
  04e911c  stbx 31, 30, 3
  04e9120  stbx 31, 30, 4
  04e9124  stb 31, 40(30)
  04e9128  li 3, 46
  04e912c  stbx 31, 30, 7
  04e9130  li 4, 47
  04e9134  stbx 31, 30, 6
  04e9138  stbx 31, 30, 8
  04e913c  stb 31, 44(30)
  04e9140  stbx 31, 30, 5
  04e9144  stbx 31, 30, 3
  04e9148  stbx 31, 30, 4
  04e914c  ori 31, 30, 0
  04e9150  lis 3, 144
  04e9154  stw 31, -22976(3)
  04e9158  li 29, 0
  04e915c  lis 30, 273
  04e9160  lis 3, 102
  04e9164  addic 30, 30, 5648
  04e9168  addic 3, 3, -22224
  04e916c  stw 29, 128(1)
  04e9170  bl 0x4ffc9c
  04e9174  nop
  04e9178  addic 28, 1, 192
  04e917c  lis 4, 144
  04e9180  ori 3, 28, 0
  04e9184  addic 4, 4, -22840
  04e9188  li 5, 256
  04e918c  bl 0x5cccec
  04e9190  nop
  04e9194  stb 29, 447(1)
  04e9198  li 4, 5
  04e919c  stw 29, 132(1)
  04e91a0  li 5, 3
  04e91a4  stw 29, 136(1)
  04e91a8  li 6, 240
  04e91ac  stw 28, 140(1)
  04e91b0  li 3, 240
  04e91b4  stw 29, 144(1)
  04e91b8  stw 4, 148(1)
  04e91bc  stw 5, 152(1)
  04e91c0  stw 29, 156(1)
  04e91c4  stw 29, 160(1)
  04e91c8  stw 29, 164(1)
  04e91cc  stw 29, 168(1)
  04e91d0  stw 29, 172(1)
  04e91d4  stw 29, 176(1)
  04e91d8  stw 6, 180(1)
  04e91dc  bl 0x5d5838
  04e91e0  nop
  04e91e4  cmpwi 3, 0
  04e91e8  stw 3, 184(1)
  04e91ec  bf 2, 0x4e9214
  04e91f0  lis 3, 102
  04e91f4  addic 3, 3, -24152
  04e91f8  bl 0x4ffc9c
  04e91fc  nop
  04e9200  lis 3, 102
  04e9204  addic 3, 3, -22152
  04e9208  bl 0x5cd098
  04e920c  nop
  04e9210  b 0x4e92a8
  04e9214  lis 3, 144
  04e9218  li 5, 5
  04e921c  li 4, 4
  04e9220  li 6, 0
  04e9224  lis 7, 273
  04e9228  li 8, 7
  04e922c  stw 5, -22972(3)
  04e9230  lis 9, 113
  04e9234  stw 4, 4(30)
  04e9238  lis 3, 113
  04e923c  stw 6, 8(30)
  04e9240  lis 4, -1
  04e9244  stw 8, 5648(7)
  04e9248  addic 5, 1, 132
  04e924c  addic 7, 3, 136
  04e9250  std 30, 112(1)
  04e9254  li 3, 0
  04e9258  lis 8, 113
  04e925c  ori 10, 4, 65535
  04e9260  addic 6, 1, 148
  04e9264  addic 8, 8, 144
  04e9268  addic 9, 9, 128
  04e926c  li 4, 0
  04e9270  clrldi 10, 10, 32
  04e9274  bl 0x64f544
  04e9278  ld 2, 40(1)
  04e927c  stw 3, 128(1)
  04e9280  clrldi 5, 3, 32
  04e9284  ori 4, 31, 0
  04e9288  ori 3, 5, 0
  04e928c  bl 0x4e6eac
  04e9290  ori 3, 31, 0
  04e9294  addic 4, 1, 128
  04e9298  li 5, 5
  04e929c  bl 0x4e6fd8
  04e92a0  lwz 3, 128(1)
  04e92a4  stw 3, 8(31)
  04e92a8  addic 3, 1, 148
  04e92ac  bl 0x4e85a0
  04e92b0  li 3, 0
  04e92b4  bl 0x650744
  04e92b8  ld 2, 40(1)
  04e92bc  ld 0, 496(1)
  04e92c0  mtlr 0
  04e92c4  ld 28, 448(1)
  04e92c8  ld 29, 456(1)
  04e92cc  ld 30, 464(1)
  04e92d0  ld 31, 472(1)
  04e92d4  addi 1, 1, 480
  04e92d8  blr

idol::SaveDataListCallback:   # 0x4e92dc, 0x56c bytes
  04e92dc  stdu 1, -512(1)
  04e92e0  mflr 0
  04e92e4  std 0, 528(1)
  04e92e8  std 23, 440(1)
  04e92ec  lis 6, 144
  04e92f0  std 31, 504(1)
  04e92f4  li 23, 0
  04e92f8  std 30, 496(1)
  04e92fc  ori 31, 3, 0
  04e9300  std 29, 488(1)
  04e9304  ori 30, 4, 0
  04e9308  std 17, 392(1)
  04e930c  ori 29, 5, 0
  04e9310  lwz 17, -22976(6)
  04e9314  stw 23, 240(1)
  04e9318  std 28, 480(1)
  04e931c  std 27, 472(1)
  04e9320  std 26, 464(1)
  04e9324  std 25, 456(1)
  04e9328  std 24, 448(1)
  04e932c  std 22, 432(1)
  04e9330  std 21, 424(1)
  04e9334  std 20, 416(1)
  04e9338  std 19, 408(1)
  04e933c  std 18, 400(1)
  04e9340  std 16, 384(1)
  04e9344  std 15, 376(1)
  04e9348  cmpwi 17, 0
  04e934c  bf 2, 0x4e9444
  04e9350  li 3, 1144
  04e9354  bl 0x5e38b0
  04e9358  nop
  04e935c  ori 28, 3, 0
  04e9360  ori 3, 23, 0
  04e9364  cmpwi 28, 0
  04e9368  bt 2, 0x4e9438
  04e936c  lis 3, 102
  04e9370  stw 23, 4(28)
  04e9374  li 6, 1
  04e9378  addic 3, 3, 6352
  04e937c  li 7, 4
  04e9380  li 4, 0
  04e9384  li 5, 32
  04e9388  stw 3, 0(28)
  04e938c  stw 23, 8(28)
  04e9390  stw 23, 12(28)
  04e9394  addic 3, 28, 1072
  04e9398  stw 23, 16(28)
  04e939c  stw 23, 20(28)
  04e93a0  stw 23, 24(28)
  04e93a4  stw 23, 1104(28)
  04e93a8  stw 23, 1112(28)
  04e93ac  stb 23, 1116(28)
  04e93b0  stb 23, 1117(28)
  04e93b4  stw 6, 1120(28)
  04e93b8  stw 7, 1108(28)
  04e93bc  bl 0x5d0140
  04e93c0  nop
  04e93c4  li 3, 33
  04e93c8  li 4, 34
  04e93cc  stb 23, 32(28)
  04e93d0  li 5, 35
  04e93d4  li 7, 37
  04e93d8  li 6, 39
  04e93dc  stbx 23, 28, 3
  04e93e0  li 3, 38
  04e93e4  stbx 23, 28, 4
  04e93e8  stbx 23, 28, 5
  04e93ec  li 4, 41
  04e93f0  stb 23, 36(28)
  04e93f4  li 5, 42
  04e93f8  stbx 23, 28, 7
  04e93fc  li 8, 45
  04e9400  li 7, 43
  04e9404  stbx 23, 28, 3
  04e9408  stbx 23, 28, 6
  04e940c  li 9, 47
  04e9410  stb 23, 40(28)
  04e9414  li 6, 46
  04e9418  stbx 23, 28, 4
  04e941c  ori 3, 28, 0
  04e9420  stbx 23, 28, 5
  04e9424  stbx 23, 28, 7
  04e9428  stb 23, 44(28)
  04e942c  stbx 23, 28, 8
  04e9430  stbx 23, 28, 6
  04e9434  stbx 23, 28, 9
  04e9438  lis 4, 144
  04e943c  ori 17, 3, 0
  04e9440  stw 3, -22976(4)
  04e9444  lis 22, 144
  04e9448  lis 3, 273
  04e944c  lis 4, 273
  04e9450  addic 27, 3, 5664
  04e9454  addic 26, 4, 5680
  04e9458  lwz 22, -21580(22)
  04e945c  lis 5, 102
  04e9460  lwz 28, 1120(17)
  04e9464  stw 23, 5664(3)
  04e9468  stw 23, 4(27)
  04e946c  addic 3, 5, -23944
  04e9470  stw 23, 8(27)
  04e9474  clrlwi 28, 28, 31
  04e9478  stw 23, 12(27)
  04e947c  stw 23, 5680(4)
  04e9480  stw 23, 4(26)
  04e9484  stw 23, 8(26)
  04e9488  stw 23, 12(26)
  04e948c  bl 0x4ffc9c
  04e9490  nop
  04e9494  lwz 3, 4(30)
  04e9498  lwz 4, 0(30)
  04e949c  cmplw 4, 3
  04e94a0  bf 1, 0x4e94b8
  04e94a4  lis 3, 102
  04e94a8  addic 3, 3, -23904
  04e94ac  bl 0x4ffc9c
  04e94b0  nop
  04e94b4  lwz 3, 4(30)
  04e94b8  li 4, 2048
  04e94bc  lwz 6, 8(30)
  04e94c0  li 5, 2048
  04e94c4  subc 4, 4, 3
  04e94c8  subc 5, 5, 3
  04e94cc  stw 6, 12(29)
  04e94d0  sradi 4, 4, 63
  04e94d4  li 7, 1
  04e94d8  and 4, 4, 5
  04e94dc  lis 5, 102
  04e94e0  addc 4, 3, 4
  04e94e4  stw 7, 0(29)
  04e94e8  stw 23, 4(29)
  04e94ec  addic 3, 5, -25872
  04e94f0  stw 4, 8(29)
  04e94f4  stw 23, 20(29)
  04e94f8  bl 0x4ffc9c
  04e94fc  nop
  04e9500  lis 3, 102
  04e9504  lwz 4, 0(30)
  04e9508  addic 3, 3, -25760
  04e950c  bl 0x4ffc9c
  04e9510  nop
  04e9514  lis 3, 102
  04e9518  lwz 4, 4(30)
  04e951c  addic 3, 3, -25736
  04e9520  bl 0x4ffc9c
  04e9524  nop
  04e9528  lwz 3, 4(30)
  04e952c  cmpwi 3, 0
  04e9530  bt 2, 0x4e9584
  04e9534  lis 24, 102
  04e9538  ori 25, 23, 0
  04e953c  addic 24, 24, -25712
  04e9540  sldi 5, 25, 4
  04e9544  ori 4, 25, 0
  04e9548  addc 6, 5, 5
  04e954c  ori 3, 24, 0
  04e9550  addc 5, 5, 6
  04e9554  lwz 6, 8(30)
  04e9558  addc 5, 6, 5
  04e955c  addic 6, 5, 32
  04e9560  clrldi 5, 5, 32
  04e9564  clrldi 6, 6, 32
  04e9568  bl 0x4ffc9c
  04e956c  nop
  04e9570  addic 25, 25, 1
  04e9574  lwz 3, 4(30)
  04e9578  clrldi 25, 25, 32
  04e957c  cmplw 25, 3
  04e9580  bt 0, 0x4e9540
  04e9584  cmplwi 3, 5
  04e9588  bf 0, 0x4e97dc
  04e958c  lis 16, 102
  04e9590  lis 19, 102
  04e9594  lis 18, 144
  04e9598  addic 16, 16, -26260
  04e959c  ori 25, 23, 0
  04e95a0  addic 20, 1, 248
  04e95a4  addic 19, 19, -23864
  04e95a8  addic 18, 18, -22840
  04e95ac  ori 15, 16, 0
  04e95b0  ori 3, 20, 0
  04e95b4  lwz 6, 0(16)
  04e95b8  ori 4, 19, 0
  04e95bc  ori 5, 18, 0
  04e95c0  bl 0x5cd2a8
  04e95c4  nop
  04e95c8  lwz 3, 4(30)
  04e95cc  ori 24, 23, 0
  04e95d0  cmpwi 3, 0
  04e95d4  bt 2, 0x4e9614
  04e95d8  ori 21, 23, 0
  04e95dc  ori 24, 21, 0
  04e95e0  lwz 4, 8(30)
  04e95e4  ori 3, 20, 0
  04e95e8  addc 4, 4, 21
  04e95ec  clrldi 4, 4, 32
  04e95f0  bl 0x5cc784
  04e95f4  nop
  04e95f8  cmpwi 3, 0
  04e95fc  bt 2, 0x4e9614
  04e9600  addic 24, 24, 1
  04e9604  lwz 3, 4(30)
  04e9608  addic 21, 21, 48
  04e960c  cmplw 24, 3
  04e9610  bt 0, 0x4e95e0
  04e9614  lwz 3, 4(30)
  04e9618  cmpw 24, 3
  04e961c  bt 2, 0x4e9630
  04e9620  addic 25, 25, 1
  04e9624  addic 16, 16, 4
  04e9628  cmplwi 25, 5
  04e962c  bt 0, 0x4e95b0
  04e9630  cmplwi 25, 5
  04e9634  bf 0, 0x4e97d4
  04e9638  cmpwi 28, 0
  04e963c  bt 2, 0x4e97d4
  04e9640  lis 3, 144
  04e9644  stw 27, 16(29)
  04e9648  li 4, 0
  04e964c  addic 30, 3, -22808
  04e9650  li 5, 32
  04e9654  ori 3, 30, 0
  04e9658  bl 0x5d0140
  04e965c  nop
  04e9660  slwi 6, 25, 2
  04e9664  ori 3, 30, 0
  04e9668  ori 4, 19, 0
  04e966c  ori 5, 18, 0
  04e9670  lwzx 6, 15, 6
  04e9674  bl 0x5cd2a8
  04e9678  nop
  04e967c  addic 29, 1, 280
  04e9680  stw 30, 4(27)
  04e9684  li 4, 0
  04e9688  ori 3, 29, 0
  04e968c  li 5, 96
  04e9690  bl 0x5d0140
  04e9694  nop
  04e9698  vspltisw 2, 0
  04e969c  li 3, 112
  04e96a0  li 4, 128
  04e96a4  li 5, 144
  04e96a8  li 7, 160
  04e96ac  li 9, 176
  04e96b0  li 6, 192
  04e96b4  stvx 2, 3, 1
  04e96b8  li 8, 208
  04e96bc  stvx 2, 4, 1
  04e96c0  stvx 2, 5, 1
  04e96c4  li 4, 224
  04e96c8  stvx 2, 7, 1
  04e96cc  addic 30, 1, 112
  04e96d0  stvx 2, 9, 1
  04e96d4  addic 3, 17, 1124
  04e96d8  stvx 2, 6, 1
  04e96dc  stvx 2, 8, 1
  04e96e0  stvx 2, 4, 1
  04e96e4  lwz 4, 28(17)
  04e96e8  lwz 5, 1108(17)
  04e96ec  extsw 4, 4
  04e96f0  cmpwi 5, 0
  04e96f4  bt 1, 0x4e9704
  04e96f8  cmpwi 5, -1
  04e96fc  bf 1, 0x4e973c
  04e9700  b 0x4e9718
  04e9704  cmpwi 5, 1
  04e9708  bf 1, 0x4e972c
  04e970c  cmpwi 5, 3
  04e9710  bf 1, 0x4e975c
  04e9714  b 0x4e973c
  04e9718  cmpwi 4, 0
  04e971c  bt 0, 0x4e975c
  04e9720  cmpwi 4, 18
  04e9724  bt 1, 0x4e975c
  04e9728  b 0x4e973c
  04e972c  cmpwi 4, 0
  04e9730  bt 0, 0x4e975c
  04e9734  cmpwi 4, 26
  04e9738  bt 1, 0x4e975c
  04e973c  ori 6, 4, 0
  04e9740  lis 4, 102
  04e9744  ori 5, 3, 0
  04e9748  ori 3, 29, 0
  04e974c  addic 4, 4, -23856
  04e9750  bl 0x5cd2a8
  04e9754  nop
  04e9758  b 0x4e9774
  04e975c  lis 4, 102
  04e9760  ori 5, 3, 0
  04e9764  ori 3, 29, 0
  04e9768  addic 4, 4, -23816
  04e976c  bl 0x5cd2a8
  04e9770  nop
  04e9774  bl 0x4ef34c
  04e9778  nop
  04e977c  ori 4, 29, 0
  04e9780  ori 5, 30, 0
  04e9784  bl 0x4ef4d0
  04e9788  nop
  04e978c  lis 3, 273
  04e9790  lis 4, 144
  04e9794  stw 23, 12(27)
  04e9798  lis 6, 144
  04e979c  stw 26, 8(27)
  04e97a0  lis 7, 273
  04e97a4  addic 5, 1, 240
  04e97a8  stw 23, 5664(3)
  04e97ac  lwz 4, -21580(4)
  04e97b0  lwz 6, -22980(6)
  04e97b4  ori 3, 30, 0
  04e97b8  stw 6, 5680(7)
  04e97bc  bl 0x4e81ec
  04e97c0  lwz 3, 240(1)
  04e97c4  stw 22, 8(26)
  04e97c8  stw 3, 4(26)
  04e97cc  stw 23, 12(26)
  04e97d0  b 0x4e97e0
  04e97d4  stw 23, 16(29)
  04e97d8  b 0x4e97e0
  04e97dc  stw 23, 16(29)
  04e97e0  lis 3, 102
  04e97e4  addic 3, 3, -23784
  04e97e8  bl 0x4ffc9c
  04e97ec  nop
  04e97f0  stw 23, 0(31)
  04e97f4  ld 0, 528(1)
  04e97f8  mtlr 0
  04e97fc  ld 15, 376(1)
  04e9800  ld 16, 384(1)
  04e9804  ld 17, 392(1)
  04e9808  ld 18, 400(1)
  04e980c  ld 19, 408(1)
  04e9810  ld 20, 416(1)
  04e9814  ld 21, 424(1)
  04e9818  ld 22, 432(1)
  04e981c  ld 23, 440(1)
  04e9820  ld 24, 448(1)
  04e9824  ld 25, 456(1)
  04e9828  ld 26, 464(1)
  04e982c  ld 27, 472(1)
  04e9830  ld 28, 480(1)
  04e9834  ld 29, 488(1)
  04e9838  ld 30, 496(1)
  04e983c  ld 31, 504(1)
  04e9840  addi 1, 1, 512
  04e9844  blr

idol::SaveDataStatusListCallback:   # 0x4e9848, 0x558 bytes
  04e9848  stdu 1, -256(1)
  04e984c  mflr 0
  04e9850  std 0, 272(1)
  04e9854  std 29, 232(1)
  04e9858  ori 29, 5, 0
  04e985c  std 31, 248(1)
  04e9860  lis 5, 102
  04e9864  ori 31, 3, 0
  04e9868  std 30, 240(1)
  04e986c  addic 3, 5, -23748
  04e9870  std 28, 224(1)
  04e9874  std 27, 216(1)
  04e9878  std 26, 208(1)
  04e987c  std 25, 200(1)
  04e9880  std 24, 192(1)
  04e9884  std 23, 184(1)
  04e9888  std 22, 176(1)
  04e988c  std 21, 168(1)
  04e9890  std 20, 160(1)
  04e9894  std 19, 152(1)
  04e9898  std 18, 144(1)
  04e989c  std 17, 136(1)
  04e98a0  std 16, 128(1)
  04e98a4  std 15, 120(1)
  04e98a8  std 14, 112(1)
  04e98ac  ori 30, 4, 0
  04e98b0  bl 0x4ffc9c
  04e98b4  nop
  04e98b8  lis 3, 144
  04e98bc  lwz 16, -22976(3)
  04e98c0  cmpwi 16, 0
  04e98c4  bf 2, 0x4e99b8
  04e98c8  li 3, 1144
  04e98cc  li 16, 0
  04e98d0  bl 0x5e38b0
  04e98d4  nop
  04e98d8  ori 28, 3, 0
  04e98dc  cmpwi 28, 0
  04e98e0  bt 2, 0x4e99b0
  04e98e4  lis 3, 102
  04e98e8  stw 16, 4(28)
  04e98ec  li 6, 1
  04e98f0  addic 3, 3, 6352
  04e98f4  li 7, 4
  04e98f8  li 4, 0
  04e98fc  li 5, 32
  04e9900  stw 3, 0(28)
  04e9904  stw 16, 8(28)
  04e9908  stw 16, 12(28)
  04e990c  addic 3, 28, 1072
  04e9910  stw 16, 16(28)
  04e9914  stw 16, 20(28)
  04e9918  stw 16, 24(28)
  04e991c  stw 16, 1104(28)
  04e9920  stw 16, 1112(28)
  04e9924  stb 16, 1116(28)
  04e9928  stb 16, 1117(28)
  04e992c  stw 6, 1120(28)
  04e9930  stw 7, 1108(28)
  04e9934  bl 0x5d0140
  04e9938  nop
  04e993c  li 3, 33
  04e9940  li 4, 34
  04e9944  stb 16, 32(28)
  04e9948  li 5, 35
  04e994c  li 7, 37
  04e9950  li 6, 39
  04e9954  stbx 16, 28, 3
  04e9958  li 3, 38
  04e995c  stbx 16, 28, 4
  04e9960  stbx 16, 28, 5
  04e9964  li 4, 41
  04e9968  stb 16, 36(28)
  04e996c  li 5, 42
  04e9970  stbx 16, 28, 7
  04e9974  li 8, 47
  04e9978  li 7, 43
  04e997c  stbx 16, 28, 3
  04e9980  stbx 16, 28, 6
  04e9984  li 3, 45
  04e9988  stb 16, 40(28)
  04e998c  li 6, 46
  04e9990  stbx 16, 28, 4
  04e9994  stbx 16, 28, 5
  04e9998  stbx 16, 28, 7
  04e999c  stb 16, 44(28)
  04e99a0  stbx 16, 28, 3
  04e99a4  stbx 16, 28, 6
  04e99a8  stbx 16, 28, 8
  04e99ac  ori 16, 28, 0
  04e99b0  lis 3, 144
  04e99b4  stw 16, -22976(3)
  04e99b8  lwz 28, 16(31)
  04e99bc  li 20, 0
  04e99c0  lwz 3, 1120(16)
  04e99c4  clrlwi 3, 3, 31
  04e99c8  lwz 22, 0(28)
  04e99cc  cmpwi 7, 3, 0
  04e99d0  cmpwi 22, 6
  04e99d4  cmpwi 1, 22, 4
  04e99d8  cmpwi 6, 22, 2
  04e99dc  bt 2, 0x4e99e8
  04e99e0  bt 6, 0x4e99e8
  04e99e4  bf 26, 0x4e9a10
  04e99e8  li 21, 1
  04e99ec  addic 3, 30, 64
  04e99f0  lis 27, 144
  04e99f4  stw 21, 4(29)
  04e99f8  lwz 4, 4(30)
  04e99fc  addic 27, 27, -22776
  04e9a00  stw 3, 0(29)
  04e9a04  cmpwi 4, 0
  04e9a08  bt 2, 0x4e9a1c
  04e9a0c  b 0x4e9be4
  04e9a10  li 3, -2
  04e9a14  stw 3, 0(31)
  04e9a18  b 0x4e9d48
  04e9a1c  bt 30, 0x4e9a28
  04e9a20  li 3, 3
  04e9a24  stw 3, 4(29)
  04e9a28  lis 3, 102
  04e9a2c  addic 4, 30, 32
  04e9a30  addic 3, 3, -23700
  04e9a34  bl 0x4ffc9c
  04e9a38  nop
  04e9a3c  lis 3, 273
  04e9a40  lis 17, 102
  04e9a44  ori 23, 20, 0
  04e9a48  lis 19, 102
  04e9a4c  lis 18, 102
  04e9a50  stw 20, 5640(3)
  04e9a54  lwz 26, 0(30)
  04e9a58  addic 17, 17, -23588
  04e9a5c  addic 19, 19, -23668
  04e9a60  addic 18, 18, -23636
  04e9a64  ori 15, 23, 0
  04e9a68  ori 24, 26, 0
  04e9a6c  lwz 4, 1192(27)
  04e9a70  ori 3, 19, 0
  04e9a74  addc 4, 4, 15
  04e9a78  addic 4, 4, 4
  04e9a7c  clrldi 4, 4, 32
  04e9a80  bl 0x4ffc9c
  04e9a84  nop
  04e9a88  lwz 3, 1632(30)
  04e9a8c  ori 25, 20, 0
  04e9a90  cmpwi 3, 0
  04e9a94  bt 2, 0x4e9ae0
  04e9a98  ori 14, 20, 0
  04e9a9c  lwz 3, 1192(27)
  04e9aa0  lwz 4, 1636(30)
  04e9aa4  addc 3, 3, 15
  04e9aa8  addc 4, 4, 14
  04e9aac  addic 3, 3, 4
  04e9ab0  addic 4, 4, 40
  04e9ab4  clrldi 3, 3, 32
  04e9ab8  clrldi 4, 4, 32
  04e9abc  bl 0x5cc784
  04e9ac0  nop
  04e9ac4  cmpwi 3, 0
  04e9ac8  bt 2, 0x4e9ae0
  04e9acc  addic 25, 25, 1
  04e9ad0  lwz 3, 1632(30)
  04e9ad4  addic 14, 14, 56
  04e9ad8  cmplw 25, 3
  04e9adc  bt 0, 0x4e9a9c
  04e9ae0  lwz 3, 1632(30)
  04e9ae4  cmplw 25, 3
  04e9ae8  bf 0, 0x4e9b48
  04e9aec  sldi 3, 25, 6
  04e9af0  sldi 4, 25, 3
  04e9af4  subc 3, 3, 4
  04e9af8  lwz 4, 1636(30)
  04e9afc  lwz 5, 1192(27)
  04e9b00  addc 3, 4, 3
  04e9b04  addc 4, 5, 15
  04e9b08  clrldi 3, 3, 32
  04e9b0c  addic 4, 4, 4
  04e9b10  lwzx 5, 5, 15
  04e9b14  clrldi 4, 4, 32
  04e9b18  addic 5, 5, 1023
  04e9b1c  ld 3, 8(3)
  04e9b20  srwi 5, 5, 10
  04e9b24  addic 3, 3, 1023
  04e9b28  rldicl 3, 3, 54, 10
  04e9b2c  subc 25, 5, 3
  04e9b30  ori 3, 18, 0
  04e9b34  extsw 25, 25
  04e9b38  ori 5, 25, 0
  04e9b3c  bl 0x4ffc9c
  04e9b40  nop
  04e9b44  b 0x4e9b7c
  04e9b48  lwz 4, 1192(27)
  04e9b4c  ori 3, 17, 0
  04e9b50  addc 5, 4, 15
  04e9b54  addic 5, 5, 4
  04e9b58  lwzx 4, 4, 15
  04e9b5c  addic 25, 4, 1023
  04e9b60  clrldi 4, 5, 32
  04e9b64  srwi 25, 25, 10
  04e9b68  ori 5, 25, 0
  04e9b6c  bl 0x4ffc9c
  04e9b70  nop
  04e9b74  lis 3, 273
  04e9b78  stw 21, 5640(3)
  04e9b7c  subc 26, 26, 25
  04e9b80  extsw 3, 24
  04e9b84  extsw 4, 26
  04e9b88  addic 23, 23, 1
  04e9b8c  subc 5, 4, 3
  04e9b90  subc 3, 26, 24
  04e9b94  sradi 4, 5, 63
  04e9b98  cmplwi 23, 3
  04e9b9c  and 3, 4, 3
  04e9ba0  addic 15, 15, 36
  04e9ba4  addc 24, 24, 3
  04e9ba8  bt 0, 0x4e9a6c
  04e9bac  cmpwi 24, 0
  04e9bb0  bf 0, 0x4e9c7c
  04e9bb4  li 4, 11
  04e9bb8  stw 24, 8(31)
  04e9bbc  li 5, -1
  04e9bc0  lis 3, 102
  04e9bc4  neg 6, 24
  04e9bc8  stw 4, 1128(16)
  04e9bcc  addic 3, 3, -23540
  04e9bd0  stw 5, 0(31)
  04e9bd4  extsw 4, 6
  04e9bd8  bl 0x4ffc9c
  04e9bdc  nop
  04e9be0  b 0x4e9d48
  04e9be4  lis 3, 102
  04e9be8  addic 3, 3, -23484
  04e9bec  bl 0x4ffc9c
  04e9bf0  nop
  04e9bf4  ori 3, 16, 0
  04e9bf8  ori 4, 29, 0
  04e9bfc  ori 5, 27, 0
  04e9c00  bl 0x4e8470
  04e9c04  lwz 6, 1192(27)
  04e9c08  li 7, 3
  04e9c0c  lwz 4, 1624(30)
  04e9c10  ori 3, 20, 0
  04e9c14  lwz 5, 0(30)
  04e9c18  mtctr 7
  04e9c1c  lwz 7, 0(6)
  04e9c20  addic 6, 6, 36
  04e9c24  addic 7, 7, 1023
  04e9c28  srwi 7, 7, 10
  04e9c2c  addc 3, 3, 7
  04e9c30  bdnz 0x4e9c1c
  04e9c34  addc 3, 3, 4
  04e9c38  subc 3, 5, 3
  04e9c3c  cmpwi 3, 0
  04e9c40  bf 0, 0x4e9c74
  04e9c44  li 5, -1
  04e9c48  stw 3, 8(31)
  04e9c4c  li 6, 11
  04e9c50  neg 4, 3
  04e9c54  lis 7, 102
  04e9c58  stw 5, 0(31)
  04e9c5c  extsw 4, 4
  04e9c60  stw 6, 1128(16)
  04e9c64  addic 3, 7, -23444
  04e9c68  bl 0x4ffc9c
  04e9c6c  nop
  04e9c70  b 0x4e9d48
  04e9c74  lis 3, 273
  04e9c78  stw 20, 5640(3)
  04e9c7c  cmpwi 22, 4
  04e9c80  bt 2, 0x4e9cac
  04e9c84  cmpwi 22, 6
  04e9c88  bt 2, 0x4e9cac
  04e9c8c  cmpwi 22, 5
  04e9c90  bt 2, 0x4e9cac
  04e9c94  cmpwi 22, 10
  04e9c98  bt 2, 0x4e9cac
  04e9c9c  cmpwi 22, 11
  04e9ca0  bt 2, 0x4e9cac
  04e9ca4  ori 3, 20, 0
  04e9ca8  b 0x4e9ccc
  04e9cac  lis 4, 144
  04e9cb0  li 5, 16
  04e9cb4  addic 3, 4, -21576
  04e9cb8  stw 5, -21576(4)
  04e9cbc  stw 21, 4(3)
  04e9cc0  stw 20, 16(3)
  04e9cc4  stw 20, 12(3)
  04e9cc8  stw 20, 20(3)
  04e9ccc  lwz 6, 0(29)
  04e9cd0  stw 3, 8(29)
  04e9cd4  li 4, 0
  04e9cd8  addic 26, 6, 256
  04e9cdc  li 5, 1024
  04e9ce0  ori 3, 26, 0
  04e9ce4  bl 0x5d0140
  04e9ce8  nop
  04e9cec  ori 3, 26, 0
  04e9cf0  addic 4, 16, 48
  04e9cf4  li 5, 1024
  04e9cf8  bl 0x5cccec
  04e9cfc  nop
  04e9d00  lwz 3, 0(29)
  04e9d04  stb 20, 1279(3)
  04e9d08  lwz 3, 0(28)
  04e9d0c  cmpwi 3, 10
  04e9d10  bt 2, 0x4e9d30
  04e9d14  addic 3, 16, 1072
  04e9d18  addic 4, 30, 32
  04e9d1c  li 5, 32
  04e9d20  bl 0x5cccec
  04e9d24  nop
  04e9d28  stb 20, 1103(16)
  04e9d2c  stb 21, 1116(16)
  04e9d30  lis 3, 102
  04e9d34  stw 27, 16(31)
  04e9d38  addic 3, 3, -23388
  04e9d3c  bl 0x4ffc9c
  04e9d40  nop
  04e9d44  stw 20, 0(31)
  04e9d48  ld 0, 272(1)
  04e9d4c  mtlr 0
  04e9d50  ld 14, 112(1)
  04e9d54  ld 15, 120(1)
  04e9d58  ld 16, 128(1)
  04e9d5c  ld 17, 136(1)
  04e9d60  ld 18, 144(1)
  04e9d64  ld 19, 152(1)
  04e9d68  ld 20, 160(1)
  04e9d6c  ld 21, 168(1)
  04e9d70  ld 22, 176(1)
  04e9d74  ld 23, 184(1)
  04e9d78  ld 24, 192(1)
  04e9d7c  ld 25, 200(1)
  04e9d80  ld 26, 208(1)
  04e9d84  ld 27, 216(1)
  04e9d88  ld 28, 224(1)
  04e9d8c  ld 29, 232(1)
  04e9d90  ld 30, 240(1)
  04e9d94  ld 31, 248(1)
  04e9d98  addi 1, 1, 256
  04e9d9c  blr

FUN_004e9da0:   # 0x4e9da0, 0x440 bytes
  04e9da0  stdu 1, -2224(1)
  04e9da4  mflr 0
  04e9da8  std 0, 2240(1)
  04e9dac  std 30, 2208(1)
  04e9db0  lis 4, 102
  04e9db4  ori 30, 3, 0
  04e9db8  std 31, 2216(1)
  04e9dbc  addic 3, 4, -23348
  04e9dc0  std 29, 2200(1)
  04e9dc4  std 28, 2192(1)
  04e9dc8  std 27, 2184(1)
  04e9dcc  ori 31, 5, 0
  04e9dd0  bl 0x4ffc9c
  04e9dd4  nop
  04e9dd8  lis 3, 144
  04e9ddc  lwz 29, -22976(3)
  04e9de0  cmpwi 29, 0
  04e9de4  bf 2, 0x4e9ed8
  04e9de8  li 3, 1144
  04e9dec  li 29, 0
  04e9df0  bl 0x5e38b0
  04e9df4  nop
  04e9df8  ori 28, 3, 0
  04e9dfc  cmpwi 28, 0
  04e9e00  bt 2, 0x4e9ed0
  04e9e04  lis 3, 102
  04e9e08  stw 29, 4(28)
  04e9e0c  li 6, 1
  04e9e10  addic 4, 3, 6352
  04e9e14  li 7, 4
  04e9e18  addic 3, 28, 1072
  04e9e1c  li 5, 32
  04e9e20  stw 4, 0(28)
  04e9e24  stw 29, 8(28)
  04e9e28  li 4, 0
  04e9e2c  stw 29, 12(28)
  04e9e30  stw 29, 16(28)
  04e9e34  stw 29, 20(28)
  04e9e38  stw 29, 24(28)
  04e9e3c  stw 29, 1104(28)
  04e9e40  stw 29, 1112(28)
  04e9e44  stb 29, 1116(28)
  04e9e48  stb 29, 1117(28)
  04e9e4c  stw 6, 1120(28)
  04e9e50  stw 7, 1108(28)
  04e9e54  bl 0x5d0140
  04e9e58  nop
  04e9e5c  li 3, 33
  04e9e60  stb 29, 32(28)
  04e9e64  li 4, 34
  04e9e68  li 6, 35
  04e9e6c  li 5, 37
  04e9e70  li 7, 41
  04e9e74  stbx 29, 28, 3
  04e9e78  li 8, 43
  04e9e7c  li 3, 38
  04e9e80  stbx 29, 28, 4
  04e9e84  li 4, 39
  04e9e88  stbx 29, 28, 6
  04e9e8c  stb 29, 36(28)
  04e9e90  li 6, 42
  04e9e94  stbx 29, 28, 5
  04e9e98  li 5, 45
  04e9e9c  stbx 29, 28, 3
  04e9ea0  stbx 29, 28, 4
  04e9ea4  stb 29, 40(28)
  04e9ea8  li 3, 46
  04e9eac  stbx 29, 28, 7
  04e9eb0  li 4, 47
  04e9eb4  stbx 29, 28, 6
  04e9eb8  stbx 29, 28, 8
  04e9ebc  stb 29, 44(28)
  04e9ec0  stbx 29, 28, 5
  04e9ec4  stbx 29, 28, 3
  04e9ec8  stbx 29, 28, 4
  04e9ecc  ori 29, 28, 0
  04e9ed0  lis 3, 144
  04e9ed4  stw 29, -22976(3)
  04e9ed8  li 3, 0
  04e9edc  lis 4, 273
  04e9ee0  stw 3, 0(30)
  04e9ee4  lwz 4, 5640(4)
  04e9ee8  stw 3, 112(1)
  04e9eec  cmpwi 4, 0
  04e9ef0  lwz 28, 16(30)
  04e9ef4  cmpwi 1, 4, 2
  04e9ef8  cmpwi 6, 4, 1
  04e9efc  cmpwi 7, 4, -1
  04e9f00  bt 1, 0x4e9f0c
  04e9f04  bf 29, 0x4ea180
  04e9f08  b 0x4ea038
  04e9f0c  bf 25, 0x4e9f18
  04e9f10  bf 5, 0x4ea114
  04e9f14  b 0x4ea180
  04e9f18  lis 3, 102
  04e9f1c  addic 3, 3, -24560
  04e9f20  bl 0x4ffc9c
  04e9f24  nop
  04e9f28  lwz 3, 20(29)
  04e9f2c  cmpwi 3, 0
  04e9f30  bt 2, 0x4e9f4c
  04e9f34  lwz 4, 0(3)
  04e9f38  std 2, 40(1)
  04e9f3c  mtctr 4
  04e9f40  lwz 2, 4(3)
  04e9f44  bcctrl 20, 30
  04e9f48  ld 2, 40(1)
  04e9f4c  lis 3, 102
  04e9f50  addic 3, 3, -23308
  04e9f54  bl 0x4ffc9c
  04e9f58  nop
  04e9f5c  addic 3, 1, 120
  04e9f60  lwz 6, 28(29)
  04e9f64  lis 4, 102
  04e9f68  addic 5, 29, 1124
  04e9f6c  extsw 6, 6
  04e9f70  std 3, 2168(1)
  04e9f74  addic 4, 4, -23856
  04e9f78  bl 0x5cd2a8
  04e9f7c  nop
  04e9f80  bl 0x4ef34c
  04e9f84  nop
  04e9f88  addic 29, 1, 1144
  04e9f8c  ld 4, 2168(1)
  04e9f90  ori 5, 29, 0
  04e9f94  bl 0x4ef4d0
  04e9f98  nop
  04e9f9c  lis 4, 144
  04e9fa0  lis 6, 2
  04e9fa4  ori 3, 29, 0
  04e9fa8  addic 5, 1, 112
  04e9fac  lwz 4, -21580(4)
  04e9fb0  stw 6, 112(1)
  04e9fb4  bl 0x4e81ec
  04e9fb8  ori 4, 3, 0
  04e9fbc  ld 3, 2168(1)
  04e9fc0  cmpwi 4, 0
  04e9fc4  bt 2, 0x4ea004
  04e9fc8  lis 5, 102
  04e9fcc  ori 4, 3, 0
  04e9fd0  addic 3, 5, -23276
  04e9fd4  bl 0x4ffc9c
  04e9fd8  nop
  04e9fdc  li 3, 1
  04e9fe0  li 4, 0
  04e9fe4  li 5, 2
  04e9fe8  stw 3, 0(31)
  04e9fec  stw 4, 44(31)
  04e9ff0  stw 4, 40(31)
  04e9ff4  stw 4, 36(31)
  04e9ff8  stw 5, 8(31)
  04e9ffc  stw 4, 4(31)
  04ea000  b 0x4ea1a4
  04ea004  lis 3, 144
  04ea008  li 4, 1
  04ea00c  lwz 7, 112(1)
  04ea010  li 5, 2
  04ea014  li 6, 0
  04ea018  lwz 3, -21580(3)
  04ea01c  stw 4, 0(31)
  04ea020  stw 3, 44(31)
  04ea024  stw 7, 40(31)
  04ea028  stw 7, 36(31)
  04ea02c  stw 5, 8(31)
  04ea030  stw 6, 4(31)
  04ea034  b 0x4ea1a4
  04ea038  lis 3, 102
  04ea03c  addic 3, 3, -23204
  04ea040  bl 0x4ffc9c
  04ea044  nop
  04ea048  addic 5, 29, 1124
  04ea04c  lwz 6, 1192(28)
  04ea050  addic 29, 1, 120
  04ea054  lis 4, 102
  04ea058  addic 6, 6, 40
  04ea05c  ori 3, 29, 0
  04ea060  addic 4, 4, -23172
  04ea064  bl 0x5cd2a8
  04ea068  nop
  04ea06c  bl 0x4ef34c
  04ea070  nop
  04ea074  addic 28, 1, 1144
  04ea078  ori 4, 29, 0
  04ea07c  ori 5, 28, 0
  04ea080  bl 0x4ef4d0
  04ea084  nop
  04ea088  lis 4, 144
  04ea08c  ori 3, 28, 0
  04ea090  addic 5, 1, 112
  04ea094  lwz 4, -21580(4)
  04ea098  bl 0x4e81ec
  04ea09c  cmpwi 3, 0
  04ea0a0  bt 2, 0x4ea0e0
  04ea0a4  lis 3, 102
  04ea0a8  ori 4, 29, 0
  04ea0ac  addic 3, 3, -23276
  04ea0b0  bl 0x4ffc9c
  04ea0b4  nop
  04ea0b8  li 3, 1
  04ea0bc  li 4, 0
  04ea0c0  li 5, 4
  04ea0c4  stw 3, 0(31)
  04ea0c8  stw 4, 44(31)
  04ea0cc  stw 4, 40(31)
  04ea0d0  stw 4, 36(31)
  04ea0d4  stw 5, 8(31)
  04ea0d8  stw 4, 4(31)
  04ea0dc  b 0x4ea1a4
  04ea0e0  lis 3, 144
  04ea0e4  li 4, 1
  04ea0e8  lwz 7, 112(1)
  04ea0ec  li 5, 4
  04ea0f0  li 6, 0
  04ea0f4  lwz 3, -21580(3)
  04ea0f8  stw 4, 0(31)
  04ea0fc  stw 3, 44(31)
  04ea100  stw 7, 40(31)
  04ea104  stw 7, 36(31)
  04ea108  stw 5, 8(31)
  04ea10c  stw 6, 4(31)
  04ea110  b 0x4ea1a4
  04ea114  lis 3, 102
  04ea118  addic 3, 3, -23148
  04ea11c  bl 0x4ffc9c
  04ea120  nop
  04ea124  li 3, 1
  04ea128  li 27, 0
  04ea12c  addic 4, 29, 32
  04ea130  li 5, 16
  04ea134  stw 3, 0(31)
  04ea138  lwz 3, 1104(29)
  04ea13c  stw 3, 44(31)
  04ea140  lwz 3, 1192(28)
  04ea144  lwz 3, 72(3)
  04ea148  stw 3, 40(31)
  04ea14c  lwz 6, 1192(28)
  04ea150  addic 3, 31, 12
  04ea154  lwz 6, 72(6)
  04ea158  stw 6, 36(31)
  04ea15c  lwz 6, 1192(28)
  04ea160  stw 27, 32(31)
  04ea164  addic 6, 6, 76
  04ea168  stw 27, 8(31)
  04ea16c  stw 6, 28(31)
  04ea170  bl 0x5c5ad0
  04ea174  nop
  04ea178  stw 27, 4(31)
  04ea17c  b 0x4ea1a4
  04ea180  li 4, 33
  04ea184  li 5, 1
  04ea188  lis 3, 102
  04ea18c  stw 4, 4(30)
  04ea190  addic 3, 3, -23108
  04ea194  stw 5, 0(30)
  04ea198  bl 0x4ffc9c
  04ea19c  nop
  04ea1a0  b 0x4ea1bc
  04ea1a4  li 3, 33
  04ea1a8  lis 4, 273
  04ea1ac  stw 3, 4(30)
  04ea1b0  lwz 3, 5640(4)
  04ea1b4  addic 3, 3, 1
  04ea1b8  stw 3, 5640(4)
  04ea1bc  ld 0, 2240(1)
  04ea1c0  mtlr 0
  04ea1c4  ld 27, 2184(1)
  04ea1c8  ld 28, 2192(1)
  04ea1cc  ld 29, 2200(1)
  04ea1d0  ld 30, 2208(1)
  04ea1d4  ld 31, 2216(1)
  04ea1d8  addi 1, 1, 2224
  04ea1dc  blr

FUN_004ea1e0:   # 0x4ea1e0, 0x140 bytes
  04ea1e0  stdu 1, -160(1)
  04ea1e4  mflr 0
  04ea1e8  std 0, 176(1)
  04ea1ec  std 30, 144(1)
  04ea1f0  ori 30, 4, 0
  04ea1f4  std 29, 136(1)
  04ea1f8  lis 4, 102
  04ea1fc  ori 29, 3, 0
  04ea200  std 31, 152(1)
  04ea204  addic 3, 4, -22912
  04ea208  std 28, 128(1)
  04ea20c  std 27, 120(1)
  04ea210  std 26, 112(1)
  04ea214  ori 31, 5, 0
  04ea218  bl 0x4ffc9c
  04ea21c  nop
  04ea220  lis 3, 102
  04ea224  addic 3, 3, -25872
  04ea228  bl 0x4ffc9c
  04ea22c  nop
  04ea230  lis 3, 102
  04ea234  lwz 4, 0(30)
  04ea238  addic 3, 3, -25760
  04ea23c  bl 0x4ffc9c
  04ea240  nop
  04ea244  lis 3, 102
  04ea248  lwz 4, 4(30)
  04ea24c  addic 3, 3, -25736
  04ea250  bl 0x4ffc9c
  04ea254  nop
  04ea258  lwz 3, 4(30)
  04ea25c  li 26, 0
  04ea260  cmpwi 3, 0
  04ea264  ori 27, 26, 0
  04ea268  bt 2, 0x4ea2b8
  04ea26c  lis 28, 102
  04ea270  addic 28, 28, -25712
  04ea274  sldi 4, 26, 4
  04ea278  ori 3, 28, 0
  04ea27c  addc 5, 4, 4
  04ea280  addc 4, 4, 5
  04ea284  lwz 5, 8(30)
  04ea288  addc 5, 5, 4
  04ea28c  ori 4, 26, 0
  04ea290  addic 6, 5, 32
  04ea294  clrldi 5, 5, 32
  04ea298  clrldi 6, 6, 32
  04ea29c  bl 0x4ffc9c
  04ea2a0  nop
  04ea2a4  addic 26, 26, 1
  04ea2a8  lwz 3, 4(30)
  04ea2ac  clrldi 26, 26, 32
  04ea2b0  cmplw 26, 3
  04ea2b4  bt 0, 0x4ea274
  04ea2b8  li 4, 2048
  04ea2bc  lwz 6, 8(30)
  04ea2c0  li 5, 2048
  04ea2c4  subc 4, 4, 3
  04ea2c8  subc 5, 5, 3
  04ea2cc  stw 6, 12(31)
  04ea2d0  sradi 4, 4, 63
  04ea2d4  li 7, 1
  04ea2d8  and 4, 4, 5
  04ea2dc  addc 3, 3, 4
  04ea2e0  stw 7, 0(31)
  04ea2e4  stw 27, 4(31)
  04ea2e8  stw 27, 20(31)
  04ea2ec  stw 3, 8(31)
  04ea2f0  stw 27, 16(31)
  04ea2f4  stw 27, 0(29)
  04ea2f8  ld 0, 176(1)
  04ea2fc  mtlr 0
  04ea300  ld 26, 112(1)
  04ea304  ld 27, 120(1)
  04ea308  ld 28, 128(1)
  04ea30c  ld 29, 136(1)
  04ea310  ld 30, 144(1)
  04ea314  ld 31, 152(1)
  04ea318  addi 1, 1, 160
  04ea31c  blr

idol::cb_data_status_load:   # 0x4ea320, 0x5bc bytes
  04ea320  stdu 1, -256(1)
  04ea324  mflr 0
  04ea328  std 0, 272(1)
  04ea32c  std 28, 224(1)
  04ea330  lis 6, 144
  04ea334  std 31, 248(1)
  04ea338  li 28, 0
  04ea33c  std 22, 176(1)
  04ea340  ori 31, 3, 0
  04ea344  std 30, 240(1)
  04ea348  std 25, 200(1)
  04ea34c  ori 22, 28, 0
  04ea350  ori 30, 4, 0
  04ea354  std 29, 232(1)
  04ea358  lwz 25, -22976(6)
  04ea35c  ori 29, 5, 0
  04ea360  std 27, 216(1)
  04ea364  std 26, 208(1)
  04ea368  std 24, 192(1)
  04ea36c  std 23, 184(1)
  04ea370  std 21, 168(1)
  04ea374  std 20, 160(1)
  04ea378  std 19, 152(1)
  04ea37c  cmpwi 25, 0
  04ea380  bf 2, 0x4ea474
  04ea384  li 3, 1144
  04ea388  ori 25, 28, 0
  04ea38c  bl 0x5e38b0
  04ea390  nop
  04ea394  ori 27, 3, 0
  04ea398  cmpwi 27, 0
  04ea39c  bt 2, 0x4ea46c
  04ea3a0  lis 3, 102
  04ea3a4  stw 28, 4(27)
  04ea3a8  li 6, 1
  04ea3ac  addic 3, 3, 6352
  04ea3b0  li 7, 4
  04ea3b4  li 4, 0
  04ea3b8  li 5, 32
  04ea3bc  stw 3, 0(27)
  04ea3c0  stw 28, 8(27)
  04ea3c4  stw 28, 12(27)
  04ea3c8  addic 3, 27, 1072
  04ea3cc  stw 28, 16(27)
  04ea3d0  stw 28, 20(27)
  04ea3d4  stw 28, 24(27)
  04ea3d8  stw 28, 1104(27)
  04ea3dc  stw 28, 1112(27)
  04ea3e0  stb 28, 1116(27)
  04ea3e4  stb 28, 1117(27)
  04ea3e8  stw 6, 1120(27)
  04ea3ec  stw 7, 1108(27)
  04ea3f0  bl 0x5d0140
  04ea3f4  nop
  04ea3f8  li 3, 33
  04ea3fc  li 4, 34
  04ea400  stb 28, 32(27)
  04ea404  li 5, 35
  04ea408  li 7, 37
  04ea40c  li 6, 39
  04ea410  stbx 28, 27, 3
  04ea414  li 3, 38
  04ea418  stbx 28, 27, 4
  04ea41c  stbx 28, 27, 5
  04ea420  li 4, 41
  04ea424  stb 28, 36(27)
  04ea428  li 5, 42
  04ea42c  stbx 28, 27, 7
  04ea430  li 8, 47
  04ea434  li 7, 43
  04ea438  stbx 28, 27, 3
  04ea43c  stbx 28, 27, 6
  04ea440  li 3, 45
  04ea444  stb 28, 40(27)
  04ea448  li 6, 46
  04ea44c  stbx 28, 27, 4
  04ea450  ori 25, 27, 0
  04ea454  stbx 28, 27, 5
  04ea458  stbx 28, 27, 7
  04ea45c  stb 28, 44(27)
  04ea460  stbx 28, 27, 3
  04ea464  stbx 28, 27, 6
  04ea468  stbx 28, 27, 8
  04ea46c  lis 3, 144
  04ea470  stw 25, -22976(3)
  04ea474  lis 27, 144
  04ea478  lis 3, 102
  04ea47c  addic 3, 3, -22856
  04ea480  lwz 27, -21540(27)
  04ea484  bl 0x4ffc9c
  04ea488  nop
  04ea48c  lwz 3, 1616(30)
  04ea490  rlwinm 4, 3, 0, 27, 27
  04ea494  cmpwi 4, 0
  04ea498  bf 2, 0x4ea4a8
  04ea49c  rlwinm 4, 3, 0, 22, 22
  04ea4a0  cmpwi 4, 0
  04ea4a4  bt 2, 0x4ea4c8
  04ea4a8  lis 3, 102
  04ea4ac  addic 3, 3, -22824
  04ea4b0  bl 0x5cd098
  04ea4b4  nop
  04ea4b8  li 3, 2
  04ea4bc  stb 28, 396(27)
  04ea4c0  stw 3, 1120(25)
  04ea4c4  b 0x4ea528
  04ea4c8  rlwinm 4, 3, 0, 23, 23
  04ea4cc  cmpwi 4, 0
  04ea4d0  bt 2, 0x4ea4f4
  04ea4d4  lis 3, 102
  04ea4d8  addic 3, 3, -22712
  04ea4dc  bl 0x5cd098
  04ea4e0  nop
  04ea4e4  li 3, 2
  04ea4e8  stb 28, 396(27)
  04ea4ec  stw 3, 1120(25)
  04ea4f0  b 0x4ea528
  04ea4f4  rlwinm 3, 3, 0, 21, 21
  04ea4f8  cmpwi 3, 0
  04ea4fc  bt 2, 0x4ea51c
  04ea500  lis 3, 102
  04ea504  addic 3, 3, -22632
  04ea508  bl 0x5cd098
  04ea50c  nop
  04ea510  li 3, 1
  04ea514  stw 3, 1120(25)
  04ea518  b 0x4ea528
  04ea51c  li 3, 1
  04ea520  stb 3, 396(27)
  04ea524  stw 3, 1120(25)
  04ea528  ori 3, 30, 0
  04ea52c  bl 0x4e7170
  04ea530  lwz 26, 16(31)
  04ea534  lwz 3, 0(26)
  04ea538  cmpwi 3, 3
  04ea53c  bf 2, 0x4ea5c0
  04ea540  lis 24, 102
  04ea544  lis 23, 144
  04ea548  lis 20, 102
  04ea54c  addic 21, 30, 32
  04ea550  ori 27, 28, 0
  04ea554  addic 24, 24, -23864
  04ea558  addic 23, 23, -22840
  04ea55c  addic 20, 20, -26260
  04ea560  addic 19, 1, 112
  04ea564  lwz 6, 0(20)
  04ea568  ori 4, 24, 0
  04ea56c  ori 3, 19, 0
  04ea570  ori 5, 23, 0
  04ea574  bl 0x5cd2a8
  04ea578  nop
  04ea57c  ori 3, 19, 0
  04ea580  ori 4, 21, 0
  04ea584  bl 0x5cc784
  04ea588  nop
  04ea58c  cmpwi 3, 0
  04ea590  bt 2, 0x4ea5a4
  04ea594  addic 27, 27, 1
  04ea598  addic 20, 20, 4
  04ea59c  cmpwi 27, 5
  04ea5a0  bt 0, 0x4ea560
  04ea5a4  cmpwi 27, 5
  04ea5a8  bt 0, 0x4ea5e0
  04ea5ac  lis 3, 102
  04ea5b0  addic 3, 3, -22568
  04ea5b4  bl 0x5cd098
  04ea5b8  nop
  04ea5bc  b 0x4ea5e0
  04ea5c0  lis 5, 102
  04ea5c4  extsw 4, 3
  04ea5c8  addic 3, 5, -22512
  04ea5cc  bl 0x4ffc9c
  04ea5d0  nop
  04ea5d4  li 3, -2
  04ea5d8  stw 3, 0(31)
  04ea5dc  b 0x4ea898
  04ea5e0  lwz 3, 4(30)
  04ea5e4  lis 27, 144
  04ea5e8  cmpwi 3, 0
  04ea5ec  addic 27, 27, -22776
  04ea5f0  bt 2, 0x4ea614
  04ea5f4  lis 3, 102
  04ea5f8  ori 4, 21, 0
  04ea5fc  addic 3, 3, -22480
  04ea600  bl 0x4ffc9c
  04ea604  nop
  04ea608  li 3, -4
  04ea60c  stw 3, 0(31)
  04ea610  b 0x4ea898
  04ea614  lwz 5, 1108(25)
  04ea618  lis 3, 144
  04ea61c  slwi 5, 5, 2
  04ea620  addic 4, 3, -22964
  04ea624  extsw 5, 5
  04ea628  lwz 3, 1632(30)
  04ea62c  lwz 6, 1628(30)
  04ea630  cmplw 3, 6
  04ea634  lwzx 25, 4, 5
  04ea638  extsw 25, 25
  04ea63c  bf 0, 0x4ea64c
  04ea640  li 3, -3
  04ea644  stw 3, 0(31)
  04ea648  b 0x4ea898
  04ea64c  cmpwi 3, 0
  04ea650  ori 24, 28, 0
  04ea654  bt 2, 0x4ea724
  04ea658  lis 20, 102
  04ea65c  ori 23, 28, 0
  04ea660  addic 20, 20, -22456
  04ea664  cmpwi 28, 0
  04ea668  bf 2, 0x4ea708
  04ea66c  lwz 3, 1636(30)
  04ea670  lwz 4, 1192(27)
  04ea674  addc 3, 3, 23
  04ea678  addic 4, 4, 76
  04ea67c  addic 3, 3, 40
  04ea680  clrldi 3, 3, 32
  04ea684  bl 0x5cc784
  04ea688  nop
  04ea68c  cmpwi 3, 0
  04ea690  bf 2, 0x4ea708
  04ea694  lwz 4, 1636(30)
  04ea698  ori 3, 20, 0
  04ea69c  addc 4, 4, 23
  04ea6a0  addic 4, 4, 40
  04ea6a4  clrldi 4, 4, 32
  04ea6a8  bl 0x4ffc9c
  04ea6ac  nop
  04ea6b0  lwz 3, 1636(30)
  04ea6b4  li 28, 1
  04ea6b8  addc 4, 3, 23
  04ea6bc  clrldi 4, 4, 32
  04ea6c0  ld 4, 8(4)
  04ea6c4  cmpd 4, 25
  04ea6c8  bt 2, 0x4ea708
  04ea6cc  sldi 4, 24, 6
  04ea6d0  sldi 5, 24, 3
  04ea6d4  lis 6, 102
  04ea6d8  subc 4, 4, 5
  04ea6dc  addic 5, 6, -22440
  04ea6e0  addc 3, 3, 4
  04ea6e4  ori 4, 25, 0
  04ea6e8  clrldi 6, 3, 32
  04ea6ec  ori 3, 5, 0
  04ea6f0  ld 5, 8(6)
  04ea6f4  bl 0x4ffc9c
  04ea6f8  nop
  04ea6fc  li 3, -3
  04ea700  stw 3, 0(31)
  04ea704  b 0x4ea898
  04ea708  addic 24, 24, 1
  04ea70c  lwz 3, 1632(30)
  04ea710  addic 23, 23, 56
  04ea714  cmplw 24, 3
  04ea718  bt 0, 0x4ea664
  04ea71c  cmpwi 28, 0
  04ea720  bf 2, 0x4ea748
  04ea724  lis 3, 102
  04ea728  lwz 4, 1192(27)
  04ea72c  addic 3, 3, -22384
  04ea730  addic 4, 4, 76
  04ea734  bl 0x4ffc9c
  04ea738  nop
  04ea73c  li 3, -3
  04ea740  stw 3, 0(31)
  04ea744  b 0x4ea898
  04ea748  lis 3, 144
  04ea74c  lwz 25, -22976(3)
  04ea750  cmpwi 25, 0
  04ea754  bf 2, 0x4ea848
  04ea758  li 3, 1144
  04ea75c  ori 25, 22, 0
  04ea760  bl 0x5e38b0
  04ea764  nop
  04ea768  ori 28, 3, 0
  04ea76c  cmpwi 28, 0
  04ea770  bt 2, 0x4ea840
  04ea774  lis 3, 102
  04ea778  stw 22, 4(28)
  04ea77c  li 6, 1
  04ea780  addic 4, 3, 6352
  04ea784  li 7, 4
  04ea788  addic 3, 28, 1072
  04ea78c  li 5, 32
  04ea790  stw 4, 0(28)
  04ea794  stw 22, 8(28)
  04ea798  li 4, 0
  04ea79c  stw 22, 12(28)
  04ea7a0  stw 22, 16(28)
  04ea7a4  stw 22, 20(28)
  04ea7a8  stw 22, 24(28)
  04ea7ac  stw 22, 1104(28)
  04ea7b0  stw 22, 1112(28)
  04ea7b4  stb 22, 1116(28)
  04ea7b8  stb 22, 1117(28)
  04ea7bc  stw 6, 1120(28)
  04ea7c0  stw 7, 1108(28)
  04ea7c4  bl 0x5d0140
  04ea7c8  nop
  04ea7cc  li 3, 33
  04ea7d0  stb 22, 32(28)
  04ea7d4  li 4, 34
  04ea7d8  li 6, 35
  04ea7dc  li 5, 37
  04ea7e0  li 7, 41
  04ea7e4  stbx 22, 28, 3
  04ea7e8  li 8, 43
  04ea7ec  li 3, 38
  04ea7f0  stbx 22, 28, 4
  04ea7f4  li 4, 39
  04ea7f8  stbx 22, 28, 6
  04ea7fc  stb 22, 36(28)
  04ea800  li 6, 42
  04ea804  stbx 22, 28, 5
  04ea808  ori 25, 28, 0
  04ea80c  li 5, 45
  04ea810  stbx 22, 28, 3
  04ea814  stbx 22, 28, 4
  04ea818  li 3, 46
  04ea81c  stb 22, 40(28)
  04ea820  li 4, 47
  04ea824  stbx 22, 28, 7
  04ea828  stbx 22, 28, 6
  04ea82c  stbx 22, 28, 8
  04ea830  stb 22, 44(28)
  04ea834  stbx 22, 28, 5
  04ea838  stbx 22, 28, 3
  04ea83c  stbx 22, 28, 4
  04ea840  lis 3, 144
  04ea844  stw 25, -22976(3)
  04ea848  addic 3, 25, 1072
  04ea84c  ori 4, 21, 0
  04ea850  li 5, 32
  04ea854  bl 0x5cccec
  04ea858  nop
  04ea85c  li 3, 1
  04ea860  stb 22, 1103(25)
  04ea864  li 4, 4
  04ea868  addic 6, 30, 64
  04ea86c  lis 5, 273
  04ea870  stb 3, 1116(25)
  04ea874  stw 27, 8(26)
  04ea878  li 7, 2
  04ea87c  stw 22, 0(26)
  04ea880  stw 4, 4(26)
  04ea884  stw 3, 4(29)
  04ea888  stw 6, 0(29)
  04ea88c  stw 22, 0(31)
  04ea890  stw 26, 16(31)
  04ea894  stw 7, 5640(5)
  04ea898  ld 0, 272(1)
  04ea89c  mtlr 0
  04ea8a0  ld 19, 152(1)
  04ea8a4  ld 20, 160(1)
  04ea8a8  ld 21, 168(1)
  04ea8ac  ld 22, 176(1)
  04ea8b0  ld 23, 184(1)
  04ea8b4  ld 24, 192(1)
  04ea8b8  ld 25, 200(1)
  04ea8bc  ld 26, 208(1)
  04ea8c0  ld 27, 216(1)
  04ea8c4  ld 28, 224(1)
  04ea8c8  ld 29, 232(1)
  04ea8cc  ld 30, 240(1)
  04ea8d0  ld 31, 248(1)
  04ea8d4  addi 1, 1, 256
  04ea8d8  blr

idol::cb_file_operation_load:   # 0x4ea8dc, 0x274 bytes
  04ea8dc  stdu 1, -176(1)
  04ea8e0  mflr 0
  04ea8e4  std 0, 192(1)
  04ea8e8  std 30, 160(1)
  04ea8ec  lis 4, 144
  04ea8f0  std 31, 168(1)
  04ea8f4  ori 30, 3, 0
  04ea8f8  std 29, 152(1)
  04ea8fc  ori 31, 5, 0
  04ea900  lwz 29, -22976(4)
  04ea904  std 28, 144(1)
  04ea908  std 27, 136(1)
  04ea90c  std 26, 128(1)
  04ea910  std 25, 120(1)
  04ea914  cmpwi 29, 0
  04ea918  bf 2, 0x4eaa0c
  04ea91c  li 3, 1144
  04ea920  li 29, 0
  04ea924  bl 0x5e38b0
  04ea928  nop
  04ea92c  ori 28, 3, 0
  04ea930  cmpwi 28, 0
  04ea934  bt 2, 0x4eaa04
  04ea938  lis 3, 102
  04ea93c  stw 29, 4(28)
  04ea940  li 6, 1
  04ea944  addic 4, 3, 6352
  04ea948  li 7, 4
  04ea94c  addic 3, 28, 1072
  04ea950  li 5, 32
  04ea954  stw 4, 0(28)
  04ea958  stw 29, 8(28)
  04ea95c  li 4, 0
  04ea960  stw 29, 12(28)
  04ea964  stw 29, 16(28)
  04ea968  stw 29, 20(28)
  04ea96c  stw 29, 24(28)
  04ea970  stw 29, 1104(28)
  04ea974  stw 29, 1112(28)
  04ea978  stb 29, 1116(28)
  04ea97c  stb 29, 1117(28)
  04ea980  stw 6, 1120(28)
  04ea984  stw 7, 1108(28)
  04ea988  bl 0x5d0140
  04ea98c  nop
  04ea990  li 3, 33
  04ea994  stb 29, 32(28)
  04ea998  li 4, 34
  04ea99c  li 6, 35
  04ea9a0  li 5, 37
  04ea9a4  li 7, 41
  04ea9a8  stbx 29, 28, 3
  04ea9ac  li 8, 43
  04ea9b0  li 3, 38
  04ea9b4  stbx 29, 28, 4
  04ea9b8  li 4, 39
  04ea9bc  stbx 29, 28, 6
  04ea9c0  stb 29, 36(28)
  04ea9c4  li 6, 42
  04ea9c8  stbx 29, 28, 5
  04ea9cc  li 5, 45
  04ea9d0  stbx 29, 28, 3
  04ea9d4  stbx 29, 28, 4
  04ea9d8  stb 29, 40(28)
  04ea9dc  li 3, 46
  04ea9e0  stbx 29, 28, 7
  04ea9e4  li 4, 47
  04ea9e8  stbx 29, 28, 6
  04ea9ec  stbx 29, 28, 8
  04ea9f0  stb 29, 44(28)
  04ea9f4  stbx 29, 28, 5
  04ea9f8  stbx 29, 28, 3
  04ea9fc  stbx 29, 28, 4
  04eaa00  ori 29, 28, 0
  04eaa04  lis 3, 144
  04eaa08  stw 29, -22976(3)
  04eaa0c  lis 4, 273
  04eaa10  lis 3, 102
  04eaa14  addic 3, 3, -22364
  04eaa18  lwz 28, 5640(4)
  04eaa1c  bl 0x4ffc9c
  04eaa20  nop
  04eaa24  li 26, 0
  04eaa28  lwz 3, 16(30)
  04eaa2c  cmpwi 28, 2
  04eaa30  ori 28, 26, 0
  04eaa34  lwz 27, 8(3)
  04eaa38  stw 28, 0(30)
  04eaa3c  bf 2, 0x4eaad4
  04eaa40  lwz 4, 0(3)
  04eaa44  cmpwi 4, 0
  04eaa48  bf 2, 0x4eaab0
  04eaa4c  lwz 3, 4(3)
  04eaa50  cmpwi 3, 4
  04eaa54  bf 2, 0x4eaab0
  04eaa58  lwz 6, 1192(27)
  04eaa5c  addic 3, 31, 12
  04eaa60  addic 4, 29, 32
  04eaa64  li 5, 16
  04eaa68  lwz 25, 72(6)
  04eaa6c  stw 26, 12(31)
  04eaa70  stw 26, 16(31)
  04eaa74  stw 26, 20(31)
  04eaa78  stw 26, 24(31)
  04eaa7c  bl 0x5c5ad0
  04eaa80  nop
  04eaa84  stw 26, 0(31)
  04eaa88  lwz 3, 1104(29)
  04eaa8c  stw 25, 40(31)
  04eaa90  stw 3, 44(31)
  04eaa94  lwz 3, 1192(27)
  04eaa98  stw 25, 36(31)
  04eaa9c  addic 3, 3, 76
  04eaaa0  stw 26, 8(31)
  04eaaa4  stw 26, 4(31)
  04eaaa8  stw 3, 28(31)
  04eaaac  b 0x4eaaec
  04eaab0  li 4, -2
  04eaab4  lis 5, 273
  04eaab8  lis 3, 102
  04eaabc  stw 4, 0(30)
  04eaac0  addic 3, 3, -22332
  04eaac4  stb 26, 5636(5)
  04eaac8  bl 0x5cd098
  04eaacc  nop
  04eaad0  b 0x4eab24
  04eaad4  lis 3, 102
  04eaad8  addic 3, 3, -22300
  04eaadc  bl 0x4ffc9c
  04eaae0  nop
  04eaae4  li 26, 1
  04eaae8  stw 26, 0(30)
  04eaaec  li 3, 33
  04eaaf0  lis 4, 273
  04eaaf4  lis 5, 102
  04eaaf8  stw 3, 4(30)
  04eaafc  addic 3, 5, -22268
  04eab00  lwz 6, 5640(4)
  04eab04  addic 5, 6, 1
  04eab08  stw 5, 5640(4)
  04eab0c  bl 0x4ffc9c
  04eab10  nop
  04eab14  cmpwi 26, 0
  04eab18  bt 2, 0x4eab24
  04eab1c  lis 3, 273
  04eab20  stb 28, 5636(3)
  04eab24  ld 0, 192(1)
  04eab28  mtlr 0
  04eab2c  ld 25, 120(1)
  04eab30  ld 26, 128(1)
  04eab34  ld 27, 136(1)
  04eab38  ld 28, 144(1)
  04eab3c  ld 29, 152(1)
  04eab40  ld 30, 160(1)
  04eab44  ld 31, 168(1)
  04eab48  addi 1, 1, 176
  04eab4c  blr

FUN_004eab50:   # 0x4eab50, 0x168 bytes
  04eab50  stdu 1, -144(1)
  04eab54  mflr 0
  04eab58  std 0, 160(1)
  04eab5c  std 31, 136(1)
  04eab60  ori 31, 4, 0
  04eab64  std 30, 128(1)
  04eab68  lis 4, 102
  04eab6c  ori 30, 3, 0
  04eab70  addic 3, 4, -22080
  04eab74  std 29, 120(1)
  04eab78  std 28, 112(1)
  04eab7c  lwz 4, 0(31)
  04eab80  bl 0x4ffc9c
  04eab84  nop
  04eab88  lis 3, 144
  04eab8c  lwz 29, -22976(3)
  04eab90  cmpwi 29, 0
  04eab94  bf 2, 0x4eac88
  04eab98  li 3, 1144
  04eab9c  li 29, 0
  04eaba0  bl 0x5e38b0
  04eaba4  nop
  04eaba8  ori 28, 3, 0
  04eabac  cmpwi 28, 0
  04eabb0  bt 2, 0x4eac80
  04eabb4  lis 3, 102
  04eabb8  stw 29, 4(28)
  04eabbc  li 6, 1
  04eabc0  addic 3, 3, 6352
  04eabc4  li 7, 4
  04eabc8  li 4, 0
  04eabcc  li 5, 32
  04eabd0  stw 3, 0(28)
  04eabd4  stw 29, 8(28)
  04eabd8  stw 29, 12(28)
  04eabdc  addic 3, 28, 1072
  04eabe0  stw 29, 16(28)
  04eabe4  stw 29, 20(28)
  04eabe8  stw 29, 24(28)
  04eabec  stw 29, 1104(28)
  04eabf0  stw 29, 1112(28)
  04eabf4  stb 29, 1116(28)
  04eabf8  stb 29, 1117(28)
  04eabfc  stw 6, 1120(28)
  04eac00  stw 7, 1108(28)
  04eac04  bl 0x5d0140
  04eac08  nop
  04eac0c  li 3, 33
  04eac10  li 4, 34
  04eac14  stb 29, 32(28)
  04eac18  li 5, 35
  04eac1c  li 7, 37
  04eac20  li 6, 39
  04eac24  stbx 29, 28, 3
  04eac28  li 3, 38
  04eac2c  stbx 29, 28, 4
  04eac30  stbx 29, 28, 5
  04eac34  li 4, 41
  04eac38  stb 29, 36(28)
  04eac3c  li 5, 42
  04eac40  stbx 29, 28, 7
  04eac44  li 8, 47
  04eac48  li 7, 43
  04eac4c  stbx 29, 28, 3
  04eac50  stbx 29, 28, 6
  04eac54  li 3, 45
  04eac58  stb 29, 40(28)
  04eac5c  li 6, 46
  04eac60  stbx 29, 28, 4
  04eac64  stbx 29, 28, 5
  04eac68  stbx 29, 28, 7
  04eac6c  stb 29, 44(28)
  04eac70  stbx 29, 28, 3
  04eac74  stbx 29, 28, 6
  04eac78  stbx 29, 28, 8
  04eac7c  ori 29, 28, 0
  04eac80  lis 3, 144
  04eac84  stw 29, -22976(3)
  04eac88  li 3, 1
  04eac8c  lwz 4, 0(31)
  04eac90  stw 4, 1136(29)
  04eac94  stw 3, 0(30)
  04eac98  ld 0, 160(1)
  04eac9c  mtlr 0
  04eaca0  ld 28, 112(1)
  04eaca4  ld 29, 120(1)
  04eaca8  ld 30, 128(1)
  04eacac  ld 31, 136(1)
  04eacb0  addi 1, 1, 144
  04eacb4  blr

FUN_004eacb8:   # 0x4eacb8, 0x4 bytes
  04eacb8  blr

FUN_004eacbc:   # 0x4eacbc, 0x18 bytes
  04eacbc  lis 3, 144
  04eacc0  lis 4, 144
  04eacc4  addic 4, 4, -22948
  04eacc8  lwz 3, -22968(3)
  04eaccc  stw 3, 72(4)
  04eacd0  blr

FUN_004eacd4:   # 0x4eacd4, 0x108 bytes
  04eacd4  stdu 1, -128(1)
  04eacd8  mflr 0
  04eacdc  std 0, 144(1)
  04eace0  std 31, 120(1)
  04eace4  ori 31, 3, 0
  04eace8  lbz 3, 4(3)
  04eacec  cmpwi 3, 0
  04eacf0  bt 2, 0x4eadc4
  04eacf4  lfs 2, 24(31)
  04eacf8  lwz 3, 28(31)
  04eacfc  fadds 1, 2, 1
  04ead00  lfs 2, 28(31)
  04ead04  cmpwi 3, 0
  04ead08  fcmpu 1, 1, 2
  04ead0c  stfs 1, 24(31)
  04ead10  crorc 2, 4, 1
  04ead14  bt 2, 0x4ead6c
  04ead18  lwz 4, 0(31)
  04ead1c  ori 3, 31, 0
  04ead20  std 2, 40(1)
  04ead24  lwz 4, 20(4)
  04ead28  lwz 5, 0(4)
  04ead2c  lwz 2, 4(4)
  04ead30  mtctr 5
  04ead34  bcctrl 20, 30
  04ead38  lwz 31, 16(31)
  04ead3c  ld 2, 40(1)
  04ead40  cmpwi 31, 0
  04ead44  bt 2, 0x4ead64
  04ead48  lwz 4, 0(31)
  04ead4c  li 3, 2
  04ead50  std 2, 40(1)
  04ead54  mtctr 4
  04ead58  lwz 2, 4(31)
  04ead5c  bcctrl 20, 30
  04ead60  ld 2, 40(1)
  04ead64  li 3, 0
  04ead68  b 0x4eadc8
  04ead6c  lwz 3, 20(31)
  04ead70  cmpwi 3, 0
  04ead74  bt 2, 0x4eadc4
  04ead78  lwz 4, 0(3)
  04ead7c  std 2, 40(1)
  04ead80  mtctr 4
  04ead84  lwz 2, 4(3)
  04ead88  bcctrl 20, 30
  04ead8c  cmpwi 3, 0
  04ead90  ld 2, 40(1)
  04ead94  bt 2, 0x4eadc4
  04ead98  lwz 4, 0(31)
  04ead9c  std 2, 40(1)
  04eada0  ori 3, 31, 0
  04eada4  lwz 4, 20(4)
  04eada8  lwz 5, 0(4)
  04eadac  lwz 2, 4(4)
  04eadb0  mtctr 5
  04eadb4  bcctrl 20, 30
  04eadb8  li 3, 0
  04eadbc  ld 2, 40(1)
  04eadc0  b 0x4eadc8
  04eadc4  li 3, 0
  04eadc8  ld 0, 144(1)
  04eadcc  mtlr 0
  04eadd0  ld 31, 120(1)
  04eadd4  addi 1, 1, 128
  04eadd8  blr

FUN_004eaddc:   # 0x4eaddc, 0x88 bytes
  04eaddc  stdu 1, -128(1)
  04eade0  mflr 0
  04eade4  std 0, 144(1)
  04eade8  lis 4, 273
  04eadec  lwz 4, 5696(4)
  04eadf0  std 31, 120(1)
  04eadf4  cmpwi 4, 0
  04eadf8  bt 2, 0x4eae04
  04eadfc  ori 3, 4, 0
  04eae00  b 0x4eae50
  04eae04  lis 6, 273
  04eae08  ori 5, 3, 0
  04eae0c  li 3, 32
  04eae10  li 31, 0
  04eae14  ori 4, 5, 0
  04eae18  stw 5, 5700(6)
  04eae1c  bl 0x4fe218
  04eae20  nop
  04eae24  cmpwi 3, 0
  04eae28  bt 2, 0x4eae44
  04eae2c  lis 4, 102
  04eae30  stb 31, 4(3)
  04eae34  stw 31, 8(3)
  04eae38  addic 4, 4, 6416
  04eae3c  ori 31, 3, 0
  04eae40  stw 4, 0(3)
  04eae44  lis 4, 273
  04eae48  ori 3, 31, 0
  04eae4c  stw 31, 5696(4)
  04eae50  ld 0, 144(1)
  04eae54  mtlr 0
  04eae58  ld 31, 120(1)
  04eae5c  addi 1, 1, 128
  04eae60  blr

FUN_004eae64:   # 0x4eae64, 0x134 bytes
  04eae64  stdu 1, -128(1)
  04eae68  mflr 0
  04eae6c  std 0, 144(1)
  04eae70  std 31, 120(1)
  04eae74  lis 4, 102
  04eae78  ori 31, 3, 0
  04eae7c  addic 3, 4, -22052
  04eae80  bl 0x4ffc9c
  04eae84  nop
  04eae88  lis 3, 273
  04eae8c  li 5, 0
  04eae90  ori 4, 31, 0
  04eae94  cmpwi 4, 1
  04eae98  lwz 6, 5696(3)
  04eae9c  stb 5, 4(6)
  04eaea0  lwz 3, 5696(3)
  04eaea4  bt 1, 0x4eaeb4
  04eaea8  cmpwi 4, 0
  04eaeac  bf 1, 0x4eaf58
  04eaeb0  b 0x4eaec8
  04eaeb4  cmpwi 4, 2
  04eaeb8  bf 1, 0x4eaef8
  04eaebc  cmpwi 4, 3
  04eaec0  bf 1, 0x4eaf28
  04eaec4  b 0x4eaf58
  04eaec8  lwz 3, 16(3)
  04eaecc  cmpwi 3, 0
  04eaed0  bt 2, 0x4eaf84
  04eaed4  ori 4, 3, 0
  04eaed8  li 3, 0
  04eaedc  lwz 5, 0(4)
  04eaee0  std 2, 40(1)
  04eaee4  mtctr 5
  04eaee8  lwz 2, 4(4)
  04eaeec  bcctrl 20, 30
  04eaef0  ld 2, 40(1)
  04eaef4  b 0x4eaf84
  04eaef8  lwz 3, 16(3)
  04eaefc  cmpwi 3, 0
  04eaf00  bt 2, 0x4eaf84
  04eaf04  ori 4, 3, 0
  04eaf08  li 3, 1
  04eaf0c  lwz 5, 0(4)
  04eaf10  std 2, 40(1)
  04eaf14  mtctr 5
  04eaf18  lwz 2, 4(4)
  04eaf1c  bcctrl 20, 30
  04eaf20  ld 2, 40(1)
  04eaf24  b 0x4eaf84
  04eaf28  lwz 3, 16(3)
  04eaf2c  cmpwi 3, 0
  04eaf30  bt 2, 0x4eaf84
  04eaf34  ori 4, 3, 0
  04eaf38  li 3, 4
  04eaf3c  lwz 5, 0(4)
  04eaf40  std 2, 40(1)
  04eaf44  mtctr 5
  04eaf48  lwz 2, 4(4)
  04eaf4c  bcctrl 20, 30
  04eaf50  ld 2, 40(1)
  04eaf54  b 0x4eaf84
  04eaf58  lwz 3, 16(3)
  04eaf5c  cmpwi 3, 0
  04eaf60  bt 2, 0x4eaf84
  04eaf64  ori 4, 3, 0
  04eaf68  li 3, 3
  04eaf6c  lwz 5, 0(4)
  04eaf70  std 2, 40(1)
  04eaf74  mtctr 5
  04eaf78  lwz 2, 4(4)
  04eaf7c  bcctrl 20, 30
  04eaf80  ld 2, 40(1)
  04eaf84  ld 0, 144(1)
  04eaf88  mtlr 0
  04eaf8c  ld 31, 120(1)
  04eaf90  addi 1, 1, 128
  04eaf94  blr

FUN_004eaf98:   # 0x4eaf98, 0xf0 bytes
  04eaf98  stdu 1, -176(1)
  04eaf9c  mflr 0
  04eafa0  std 0, 192(1)
  04eafa4  stfd 31, 168(1)
  04eafa8  std 31, 160(1)
  04eafac  std 27, 128(1)
  04eafb0  ori 31, 3, 0
  04eafb4  std 28, 136(1)
  04eafb8  ori 27, 5, 0
  04eafbc  fmr 31, 1
  04eafc0  std 29, 144(1)
  04eafc4  ori 28, 6, 0
  04eafc8  ori 29, 9, 0
  04eafcc  std 25, 112(1)
  04eafd0  lis 9, 346
  04eafd4  lwz 7, 0(31)
  04eafd8  std 30, 152(1)
  04eafdc  addic 25, 9, -19572
  04eafe0  std 26, 120(1)
  04eafe4  ori 30, 10, 0
  04eafe8  clrlwi 26, 8, 24
  04eafec  lwz 5, 32(7)
  04eaff0  std 2, 40(1)
  04eaff4  lwz 6, 0(5)
  04eaff8  lwz 2, 4(5)
  04eaffc  mtctr 6
  04eb000  bcctrl 20, 30
  04eb004  ori 4, 3, 0
  04eb008  ld 2, 40(1)
  04eb00c  ori 3, 25, 0
  04eb010  bl 0x5051d8
  04eb014  nop
  04eb018  lwz 6, 0(31)
  04eb01c  ori 4, 3, 0
  04eb020  std 2, 40(1)
  04eb024  fmr 1, 31
  04eb028  ori 3, 31, 0
  04eb02c  ori 5, 27, 0
  04eb030  ori 8, 26, 0
  04eb034  lwz 7, 16(6)
  04eb038  ori 6, 28, 0
  04eb03c  ori 9, 29, 0
  04eb040  ori 10, 30, 0
  04eb044  lwz 11, 0(7)
  04eb048  lwz 2, 4(7)
  04eb04c  mtctr 11
  04eb050  bcctrl 20, 30
  04eb054  ld 2, 40(1)
  04eb058  ld 0, 192(1)
  04eb05c  mtlr 0
  04eb060  lfd 31, 168(1)
  04eb064  ld 25, 112(1)
  04eb068  ld 26, 120(1)
  04eb06c  ld 27, 128(1)
  04eb070  ld 28, 136(1)
  04eb074  ld 29, 144(1)
  04eb078  ld 30, 152(1)
  04eb07c  ld 31, 160(1)
  04eb080  addi 1, 1, 176
  04eb084  blr

FUN_004eb088:   # 0x4eb088, 0x124 bytes
  04eb088  stdu 1, -160(1)
  04eb08c  mflr 0
  04eb090  std 0, 176(1)
  04eb094  stfd 31, 152(1)
  04eb098  std 29, 128(1)
  04eb09c  ori 29, 3, 0
  04eb0a0  std 30, 136(1)
  04eb0a4  ori 3, 4, 0
  04eb0a8  fmr 31, 1
  04eb0ac  std 31, 144(1)
  04eb0b0  ori 30, 9, 0
  04eb0b4  ori 31, 10, 0
  04eb0b8  lbz 4, 4(29)
  04eb0bc  std 28, 120(1)
  04eb0c0  cmpwi 4, 0
  04eb0c4  bt 2, 0x4eb0d0
  04eb0c8  li 3, -1
  04eb0cc  b 0x4eb188
  04eb0d0  li 4, 0
  04eb0d4  cmpwi 5, 0
  04eb0d8  ori 28, 4, 0
  04eb0dc  cmpwi 1, 5, 1
  04eb0e0  bf 1, 0x4eb0ec
  04eb0e4  bt 5, 0x4eb0ec
  04eb0e8  li 4, 3
  04eb0ec  cmpwi 6, 1
  04eb0f0  ori 5, 4, 0
  04eb0f4  cmpwi 1, 6, 2
  04eb0f8  cmpwi 6, 6, 0
  04eb0fc  cmpwi 7, 6, -1
  04eb100  bt 1, 0x4eb110
  04eb104  bf 29, 0x4eb13c
  04eb108  bf 25, 0x4eb118
  04eb10c  b 0x4eb120
  04eb110  bf 5, 0x4eb138
  04eb114  b 0x4eb13c
  04eb118  ori 4, 4, 160
  04eb11c  b 0x4eb13c
  04eb120  clrlwi 6, 8, 24
  04eb124  ori 4, 4, 144
  04eb128  cmpwi 6, 0
  04eb12c  bf 2, 0x4eb13c
  04eb130  ori 4, 5, 400
  04eb134  b 0x4eb13c
  04eb138  ori 4, 4, 128
  04eb13c  ori 6, 4, 0
  04eb140  ori 4, 3, 0
  04eb144  lis 5, 113
  04eb148  ori 3, 6, 0
  04eb14c  li 7, 0
  04eb150  addic 5, 5, 176
  04eb154  li 6, 0
  04eb158  bl 0x64f604
  04eb15c  ld 2, 40(1)
  04eb160  cmpwi 3, 0
  04eb164  bf 0, 0x4eb16c
  04eb168  b 0x4eb188
  04eb16c  li 4, 1
  04eb170  stfs 31, 28(29)
  04eb174  ori 3, 28, 0
  04eb178  stw 28, 24(29)
  04eb17c  stw 30, 16(29)
  04eb180  stw 31, 20(29)
  04eb184  stb 4, 4(29)
  04eb188  ld 0, 176(1)
  04eb18c  mtlr 0
  04eb190  lfd 31, 152(1)
  04eb194  ld 28, 120(1)
  04eb198  ld 29, 128(1)
  04eb19c  ld 30, 136(1)
  04eb1a0  ld 31, 144(1)
  04eb1a4  addi 1, 1, 160
  04eb1a8  blr

FUN_004eb1ac:   # 0x4eb1ac, 0x38 bytes
  04eb1ac  stdu 1, -128(1)
  04eb1b0  mflr 0
  04eb1b4  std 0, 144(1)
  04eb1b8  std 31, 120(1)
  04eb1bc  ori 31, 3, 0
  04eb1c0  bl 0x64f5e4
  04eb1c4  ld 2, 40(1)
  04eb1c8  li 3, 0
  04eb1cc  stb 3, 4(31)
  04eb1d0  ld 0, 144(1)
  04eb1d4  mtlr 0
  04eb1d8  ld 31, 120(1)
  04eb1dc  addi 1, 1, 128
  04eb1e0  blr

FUN_004eb1e4:   # 0x4eb1e4, 0x40 bytes
  04eb1e4  stdu 1, -112(1)
  04eb1e8  mflr 0
  04eb1ec  std 0, 128(1)
  04eb1f0  lwz 5, 0(3)
  04eb1f4  std 2, 40(1)
  04eb1f8  lwz 5, 28(5)
  04eb1fc  lwz 6, 0(5)
  04eb200  lwz 2, 4(5)
  04eb204  mtctr 6
  04eb208  bcctrl 20, 30
  04eb20c  ld 2, 40(1)
  04eb210  li 3, 0
  04eb214  ld 0, 128(1)
  04eb218  mtlr 0
  04eb21c  addi 1, 1, 112
  04eb220  blr

FUN_004eb224:   # 0x4eb224, 0x104 bytes
  04eb224  stdu 1, -128(1)
  04eb228  mflr 0
  04eb22c  std 0, 144(1)
  04eb230  std 31, 120(1)
  04eb234  ori 31, 4, 0
  04eb238  lis 4, 144
  04eb23c  addic 5, 31, 16
  04eb240  lhz 6, 12(31)
  04eb244  stw 5, 8(3)
  04eb248  lwz 4, 11980(4)
  04eb24c  stw 6, 12(3)
  04eb250  std 2, 40(1)
  04eb254  ori 3, 4, 0
  04eb258  lwz 4, 0(4)
  04eb25c  lwz 4, 12(4)
  04eb260  lwz 5, 0(4)
  04eb264  lwz 2, 4(4)
  04eb268  mtctr 5
  04eb26c  bcctrl 20, 30
  04eb270  lis 4, 144
  04eb274  ld 2, 40(1)
  04eb278  lwz 4, 11984(4)
  04eb27c  lwz 4, 192(4)
  04eb280  cmpwi 4, 0
  04eb284  bf 2, 0x4eb2a8
  04eb288  cmpwi 3, 0
  04eb28c  cmpwi 6, 3, 4
  04eb290  bt 2, 0x4eb2a0
  04eb294  cmpwi 1, 3, 5
  04eb298  bt 26, 0x4eb2a0
  04eb29c  bf 6, 0x4eb2a8
  04eb2a0  li 3, 1
  04eb2a4  b 0x4eb2bc
  04eb2a8  cmpwi 1, 3, 0
  04eb2ac  cmpwi 4, 1
  04eb2b0  crnand 2, 2, 6
  04eb2b4  bt 2, 0x4eb2bc
  04eb2b8  li 3, 1
  04eb2bc  lhz 5, 12(31)
  04eb2c0  li 8, 0
  04eb2c4  cmpwi 5, 0
  04eb2c8  bf 1, 0x4eb314
  04eb2cc  sldi 4, 3, 2
  04eb2d0  ori 6, 31, 0
  04eb2d4  extsw 4, 4
  04eb2d8  addc 4, 6, 4
  04eb2dc  lwz 7, 16(6)
  04eb2e0  cmpwi 1, 3, 0
  04eb2e4  cmpwi 7, 0
  04eb2e8  bt 2, 0x4eb300
  04eb2ec  bt 6, 0x4eb2f4
  04eb2f0  lwz 7, 16(4)
  04eb2f4  addc 5, 7, 31
  04eb2f8  stw 5, 16(6)
  04eb2fc  lhz 5, 12(31)
  04eb300  addic 8, 8, 1
  04eb304  addic 4, 4, 128
  04eb308  cmpw 8, 5
  04eb30c  addic 6, 6, 128
  04eb310  bt 0, 0x4eb2dc
  04eb314  ld 0, 144(1)
  04eb318  mtlr 0
  04eb31c  ld 31, 120(1)
  04eb320  addi 1, 1, 128
  04eb324  blr

FUN_004eb328:   # 0x4eb328, 0x30 bytes
  04eb328  cmpwi 4, 0
  04eb32c  bt 0, 0x4eb33c
  04eb330  lwz 5, 12(3)
  04eb334  cmpw 4, 5
  04eb338  bf 1, 0x4eb344
  04eb33c  li 3, 0
  04eb340  b 0x4eb354
  04eb344  sldi 4, 4, 7
  04eb348  lwz 3, 8(3)
  04eb34c  extsw 4, 4
  04eb350  lwzx 3, 3, 4
  04eb354  blr

FUN_004eb358:   # 0x4eb358, 0x5c bytes
  04eb358  stdu 1, -128(1)
  04eb35c  mflr 0
  04eb360  std 0, 144(1)
  04eb364  std 31, 120(1)
  04eb368  lis 5, 346
  04eb36c  addic 31, 5, -19572
  04eb370  lwz 5, 0(3)
  04eb374  std 2, 40(1)
  04eb378  lwz 5, 32(5)
  04eb37c  lwz 6, 0(5)
  04eb380  lwz 2, 4(5)
  04eb384  mtctr 6
  04eb388  bcctrl 20, 30
  04eb38c  ori 4, 3, 0
  04eb390  ld 2, 40(1)
  04eb394  ori 3, 31, 0
  04eb398  bl 0x5051d8
  04eb39c  nop
  04eb3a0  ld 0, 144(1)
  04eb3a4  mtlr 0
  04eb3a8  ld 31, 120(1)
  04eb3ac  addi 1, 1, 128
  04eb3b0  blr

FUN_004eb3b8:   # 0x4eb3b8, 0x22c bytes
  04eb3b8  lis 11, 0
  04eb3bc  addic 11, 11, 52
  04eb3c0  stwx 3, 1, 11
  04eb3c4  lis 3, 0
  04eb3c8  addic 3, 3, 56
  04eb3cc  addc 3, 1, 3
  04eb3d0  std 4, 0(3)
  04eb3d4  lis 3, 0
  04eb3d8  addic 3, 3, 64
  04eb3dc  addc 3, 1, 3
  04eb3e0  std 5, 0(3)
  04eb3e4  lis 3, 0
  04eb3e8  addic 3, 3, 72
  04eb3ec  addc 3, 1, 3
  04eb3f0  std 6, 0(3)
  04eb3f4  lis 3, 0
  04eb3f8  addic 3, 3, 80
  04eb3fc  addc 3, 1, 3
  04eb400  std 7, 0(3)
  04eb404  lis 3, 0
  04eb408  addic 3, 3, 88
  04eb40c  addc 3, 1, 3
  04eb410  std 8, 0(3)
  04eb414  lis 3, 0
  04eb418  addic 3, 3, 96
  04eb41c  addc 3, 1, 3
  04eb420  std 9, 0(3)
  04eb424  lis 3, 0
  04eb428  addic 3, 3, 104
  04eb42c  addc 3, 1, 3
  04eb430  std 10, 0(3)
  04eb434  lis 3, 0
  04eb438  addic 3, 3, 52
  04eb43c  lwzx 3, 1, 3
  04eb440  lfs 1, 8(3)
  04eb444  lis 3, 102
  04eb448  lfs 2, -22012(3)
  04eb44c  fmr 2, 2
  04eb450  fcmpu 0, 1, 2
  04eb454  bf 2, 0x4eb47c
  04eb458  lis 3, 0
  04eb45c  addic 3, 3, 52
  04eb460  lwzx 3, 1, 3
  04eb464  lfs 1, 12(3)
  04eb468  lis 3, 102
  04eb46c  lfs 2, -22008(3)
  04eb470  fmr 2, 2
  04eb474  fcmpu 0, 1, 2
  04eb478  bt 2, 0x4eb494
  04eb47c  li 3, 1
  04eb480  lis 4, 0
  04eb484  addic 4, 4, 52
  04eb488  lwzx 4, 1, 4
  04eb48c  stw 3, 216(4)
  04eb490  b 0x4eb4a8
  04eb494  li 3, 0
  04eb498  lis 4, 0
  04eb49c  addic 4, 4, 52
  04eb4a0  lwzx 4, 1, 4
  04eb4a4  stw 3, 216(4)
  04eb4a8  lis 3, 0
  04eb4ac  addic 3, 3, 52
  04eb4b0  lwzx 3, 1, 3
  04eb4b4  lfs 1, 8(3)
  04eb4b8  lis 3, 102
  04eb4bc  lfs 2, -22004(3)
  04eb4c0  fmr 2, 2
  04eb4c4  fcmpu 0, 1, 2
  04eb4c8  cror 2, 1, 2
  04eb4cc  bt 2, 0x4eb4fc
  04eb4d0  lis 3, 0
  04eb4d4  addic 3, 3, 52
  04eb4d8  lwzx 3, 1, 3
  04eb4dc  lwz 3, 160(3)
  04eb4e0  lis 4, 0
  04eb4e4  ori 4, 4, 32768
  04eb4e8  or 3, 3, 4
  04eb4ec  lis 4, 0
  04eb4f0  addic 4, 4, 52
  04eb4f4  lwzx 4, 1, 4
  04eb4f8  stw 3, 160(4)
  04eb4fc  lis 3, 0
  04eb500  addic 3, 3, 52
  04eb504  lwzx 3, 1, 3
  04eb508  lfs 1, 8(3)
  04eb50c  lis 3, 102
  04eb510  lfs 2, -22000(3)
  04eb514  fmr 2, 2
  04eb518  fcmpu 0, 1, 2
  04eb51c  cror 2, 0, 2
  04eb520  bt 2, 0x4eb548
  04eb524  lis 3, 0
  04eb528  addic 3, 3, 52
  04eb52c  lwzx 3, 1, 3
  04eb530  lwz 3, 160(3)
  04eb534  ori 3, 3, 8192
  04eb538  lis 4, 0
  04eb53c  addic 4, 4, 52
  04eb540  lwzx 4, 1, 4
  04eb544  stw 3, 160(4)
  04eb548  lis 3, 0
  04eb54c  addic 3, 3, 52
  04eb550  lwzx 3, 1, 3
  04eb554  lfs 1, 12(3)
  04eb558  lis 3, 102
  04eb55c  lfs 2, -21996(3)
  04eb560  fmr 2, 2
  04eb564  fcmpu 0, 1, 2
  04eb568  cror 2, 1, 2
  04eb56c  bt 2, 0x4eb594
  04eb570  lis 3, 0
  04eb574  addic 3, 3, 52
  04eb578  lwzx 3, 1, 3
  04eb57c  lwz 3, 160(3)
  04eb580  ori 3, 3, 4096
  04eb584  lis 4, 0
  04eb588  addic 4, 4, 52
  04eb58c  lwzx 4, 1, 4
  04eb590  stw 3, 160(4)
  04eb594  lis 3, 0
  04eb598  addic 3, 3, 52
  04eb59c  lwzx 3, 1, 3
  04eb5a0  lfs 1, 12(3)
  04eb5a4  lis 3, 102
  04eb5a8  lfs 2, -21992(3)
  04eb5ac  fmr 2, 2
  04eb5b0  fcmpu 0, 1, 2
  04eb5b4  cror 2, 0, 2
  04eb5b8  bt 2, 0x4eb5e0
  04eb5bc  lis 3, 0
  04eb5c0  addic 3, 3, 52
  04eb5c4  lwzx 3, 1, 3
  04eb5c8  lwz 3, 160(3)
  04eb5cc  ori 3, 3, 16384
  04eb5d0  lis 4, 0
  04eb5d4  addic 4, 4, 52
  04eb5d8  lwzx 4, 1, 4
  04eb5dc  stw 3, 160(4)
  04eb5e0  blr

FUN_004eb5e4:   # 0x4eb5e4, 0x94 bytes
  04eb5e4  stdu 1, -128(1)
  04eb5e8  mflr 0
  04eb5ec  std 0, 144(1)
  04eb5f0  std 31, 120(1)
  04eb5f4  std 30, 112(1)
  04eb5f8  li 3, 4
  04eb5fc  bl 0x64f944
  04eb600  ld 2, 40(1)
  04eb604  cmpwi 3, 0
  04eb608  bt 2, 0x4eb620
  04eb60c  lis 5, 102
  04eb610  ori 4, 3, 0
  04eb614  addic 3, 5, -21988
  04eb618  bl 0x4ff6d0
  04eb61c  nop
  04eb620  lis 3, 150
  04eb624  li 30, 0
  04eb628  addic 31, 3, 24528
  04eb62c  addic 31, 31, 1244
  04eb630  ori 3, 31, 0
  04eb634  li 4, 0
  04eb638  li 5, 132
  04eb63c  bl 0x5d0140
  04eb640  nop
  04eb644  li 3, 0
  04eb648  ori 4, 31, 0
  04eb64c  bl 0x64f9a4
  04eb650  ld 2, 40(1)
  04eb654  addic 30, 30, 1
  04eb658  cmpwi 30, 4
  04eb65c  bt 0, 0x4eb630
  04eb660  ld 0, 144(1)
  04eb664  mtlr 0
  04eb668  ld 30, 112(1)
  04eb66c  ld 31, 120(1)
  04eb670  addi 1, 1, 128
  04eb674  blr

FUN_004eb678:   # 0x4eb678, 0x40 bytes
  04eb678  stdu 1, -112(1)
  04eb67c  mflr 0
  04eb680  std 0, 128(1)
  04eb684  bl 0x64f964
  04eb688  ld 2, 40(1)
  04eb68c  cmpwi 3, 0
  04eb690  bt 2, 0x4eb6a8
  04eb694  lis 5, 102
  04eb698  ori 4, 3, 0
  04eb69c  addic 3, 5, -21936
  04eb6a0  bl 0x4ff6d0
  04eb6a4  nop
  04eb6a8  ld 0, 128(1)
  04eb6ac  mtlr 0
  04eb6b0  addi 1, 1, 112
  04eb6b4  blr

FUN_004eb6e8:   # 0x4eb6e8, 0xa6c bytes
  04eb6e8  stdu 1, -320(1)
  04eb6ec  mflr 0
  04eb6f0  std 0, 336(1)
  04eb6f4  stfd 29, 296(1)
  04eb6f8  stfd 30, 304(1)
  04eb6fc  stfd 31, 312(1)
  04eb700  std 31, 288(1)
  04eb704  ori 31, 4, 0
  04eb708  lis 3, 79
  04eb70c  li 4, 320
  04eb710  addi 11, 3, -18760
  04eb714  addc 12, 1, 4
  04eb718  std 30, 280(1)
  04eb71c  lwz 3, 584(31)
  04eb720  std 29, 272(1)
  04eb724  lwz 30, 176(31)
  04eb728  rldicl 29, 6, 16, 48
  04eb72c  std 28, 264(1)
  04eb730  stw 3, 172(31)
  04eb734  rldicl 28, 6, 32, 48
  04eb738  stw 30, 188(31)
  04eb73c  std 27, 256(1)
  04eb740  slwi 29, 29, 8
  04eb744  li 27, 2
  04eb748  std 5, 64(12)
  04eb74c  std 6, 72(12)
  04eb750  or 29, 28, 29
  04eb754  std 7, 80(12)
  04eb758  addic 3, 4, 64
  04eb75c  std 8, 88(12)
  04eb760  li 30, 0
  04eb764  std 9, 96(12)
  04eb768  ori 5, 31, 0
  04eb76c  std 10, 104(12)
  04eb770  li 28, 4
  04eb774  stw 29, 160(31)
  04eb778  mtctr 27
  04eb77c  stw 29, 176(31)
  04eb780  lfs 31, 0(11)
  04eb784  std 26, 248(1)
  04eb788  li 29, 16
  04eb78c  lwz 6, 192(12)
  04eb790  stw 30, 0(5)
  04eb794  stw 30, 4(5)
  04eb798  stw 30, 8(5)
  04eb79c  stw 30, 12(5)
  04eb7a0  stw 30, 16(5)
  04eb7a4  stw 30, 20(5)
  04eb7a8  stw 30, 24(5)
  04eb7ac  stw 30, 28(5)
  04eb7b0  addic 5, 5, 32
  04eb7b4  bdnz 0x4eb790
  04eb7b8  lis 5, 79
  04eb7bc  vspltisw 5, -16
  04eb7c0  li 8, 8
  04eb7c4  vspltisw 7, 0
  04eb7c8  addi 11, 5, -18760
  04eb7cc  li 9, 4
  04eb7d0  li 10, 12
  04eb7d4  li 12, 16
  04eb7d8  li 26, 20
  04eb7dc  addic 7, 4, 76
  04eb7e0  lvlx 2, 8, 11
  04eb7e4  ori 5, 30, 0
  04eb7e8  lvlx 4, 9, 11
  04eb7ec  addc 7, 1, 7
  04eb7f0  lvlx 6, 10, 11
  04eb7f4  ori 8, 31, 0
  04eb7f8  lvlx 8, 12, 11
  04eb7fc  clrldi 7, 7, 32
  04eb800  lvlx 9, 26, 11
  04eb804  ori 9, 7, 0
  04eb808  vspltw 2, 2, 0
  04eb80c  vspltw 4, 4, 0
  04eb810  vspltw 6, 6, 0
  04eb814  vspltw 8, 8, 0
  04eb818  vspltw 9, 9, 0
  04eb81c  lvlx 3, 0, 7
  04eb820  lhz 11, 0(7)
  04eb824  li 10, 0
  04eb828  vsrw 3, 3, 5
  04eb82c  addic 12, 11, -127
  04eb830  cmpwi 1, 11, 127
  04eb834  neg 26, 12
  04eb838  subc 10, 12, 10
  04eb83c  vsubuwm 3, 3, 6
  04eb840  subc 26, 26, 12
  04eb844  sradi 10, 10, 63
  04eb848  and 10, 10, 26
  04eb84c  vsubuwm 10, 7, 3
  04eb850  vcmpgtsw 11, 7, 3
  04eb854  addc 10, 12, 10
  04eb858  cmpwi 10, 48
  04eb85c  vsel 3, 3, 10, 11
  04eb860  bt 0, 0x4eb898
  04eb864  vsubuwm 3, 3, 8
  04eb868  vspltisw 10, -1
  04eb86c  vcfsx 3, 3, 0
  04eb870  vslw 10, 10, 10
  04eb874  vmaddfp 3, 3, 4, 10
  04eb878  vcmpgtfp 10, 2, 3
  04eb87c  vsel 3, 2, 3, 10
  04eb880  vspltw 10, 3, 0
  04eb884  stvewx 10, 0, 8
  04eb888  bf 4, 0x4eb898
  04eb88c  vxor 3, 9, 3
  04eb890  vspltw 3, 3, 0
  04eb894  stvewx 3, 0, 8
  04eb898  addic 5, 5, 1
  04eb89c  addic 7, 7, 2
  04eb8a0  cmpwi 5, 16
  04eb8a4  addic 8, 8, 4
  04eb8a8  bt 0, 0x4eb81c
  04eb8ac  lis 5, 79
  04eb8b0  li 7, 24
  04eb8b4  addi 8, 5, -18760
  04eb8b8  li 10, 6
  04eb8bc  addic 9, 9, 8
  04eb8c0  addic 5, 31, 16
  04eb8c4  mtctr 10
  04eb8c8  lvlx 2, 7, 8
  04eb8cc  vspltw 2, 2, 0
  04eb8d0  li 7, 16
  04eb8d4  lvlx 4, 0, 9
  04eb8d8  addic 8, 9, 2
  04eb8dc  vspltisw 3, -1
  04eb8e0  li 10, 16
  04eb8e4  lvrx 6, 7, 9
  04eb8e8  lvlx 7, 0, 8
  04eb8ec  vor 4, 4, 6
  04eb8f0  lvrx 6, 10, 8
  04eb8f4  addic 7, 5, 4
  04eb8f8  vslw 3, 3, 3
  04eb8fc  vor 6, 7, 6
  04eb900  vsrw 4, 4, 5
  04eb904  addic 9, 9, 4
  04eb908  vspltisw 7, -1
  04eb90c  vsrw 6, 6, 5
  04eb910  vcfux 4, 4, 0
  04eb914  vslw 7, 7, 7
  04eb918  vcfux 6, 6, 0
  04eb91c  vmaddfp 3, 4, 2, 3
  04eb920  vmaddfp 4, 6, 2, 7
  04eb924  vspltw 3, 3, 0
  04eb928  vspltw 4, 4, 0
  04eb92c  stvewx 3, 0, 5
  04eb930  addic 5, 5, 8
  04eb934  stvewx 4, 0, 7
  04eb938  bdnz 0x4eb8d0
  04eb93c  lis 5, 144
  04eb940  lwz 5, -21552(5)
  04eb944  lbz 5, 0(5)
  04eb948  cmpwi 5, 0
  04eb94c  bt 2, 0x4eb9b0
  04eb950  lfs 1, 8(31)
  04eb954  lfs 2, 0(31)
  04eb958  fneg 1, 1
  04eb95c  fneg 2, 2
  04eb960  lwz 5, 160(31)
  04eb964  rlwinm 7, 5, 0, 16, 16
  04eb968  cmpwi 7, 0
  04eb96c  stfs 1, 8(31)
  04eb970  stfs 2, 0(31)
  04eb974  bt 2, 0x4eb988
  04eb978  rlwimi 5, 30, 0, 16, 16
  04eb97c  ori 7, 5, 8192
  04eb980  stw 7, 160(31)
  04eb984  b 0x4eb9ac
  04eb988  rlwinm 8, 5, 0, 18, 18
  04eb98c  ori 7, 5, 0
  04eb990  cmpwi 8, 0
  04eb994  bt 2, 0x4eb9ac
  04eb998  lis 7, 0
  04eb99c  rlwimi 5, 30, 0, 18, 18
  04eb9a0  ori 7, 7, 32768
  04eb9a4  or 7, 5, 7
  04eb9a8  stw 7, 160(31)
  04eb9ac  stw 7, 176(31)
  04eb9b0  ori 7, 31, 0
  04eb9b4  li 5, 8
  04eb9b8  mtctr 28
  04eb9bc  lfs 1, 0(7)
  04eb9c0  lfs 2, 4(7)
  04eb9c4  stfs 1, 64(7)
  04eb9c8  lfs 1, 8(7)
  04eb9cc  stfs 2, 68(7)
  04eb9d0  lfs 2, 12(7)
  04eb9d4  stfs 1, 72(7)
  04eb9d8  stfs 2, 76(7)
  04eb9dc  addic 7, 7, 16
  04eb9e0  bdnz 0x4eb9bc
  04eb9e4  mtctr 5
  04eb9e8  ori 5, 3, 0
  04eb9ec  ori 3, 1, 0
  04eb9f0  addic 7, 4, 68
  04eb9f4  addc 4, 3, 5
  04eb9f8  addc 5, 3, 7
  04eb9fc  lwz 7, 0(4)
  04eba00  lwz 8, 0(5)
  04eba04  lwz 9, 8(4)
  04eba08  stw 7, 56(3)
  04eba0c  addic 4, 4, 16
  04eba10  lwz 7, 8(5)
  04eba14  stw 8, 60(3)
  04eba18  stw 9, 64(3)
  04eba1c  addic 5, 5, 16
  04eba20  stw 7, 68(3)
  04eba24  addic 3, 3, 16
  04eba28  bdnz 0x4eb9fc
  04eba2c  ld 4, 56(1)
  04eba30  ld 5, 64(1)
  04eba34  ori 3, 31, 0
  04eba38  stw 6, 184(1)
  04eba3c  ld 6, 72(1)
  04eba40  ld 7, 80(1)
  04eba44  ld 8, 88(1)
  04eba48  ld 9, 96(1)
  04eba4c  ld 10, 104(1)
  04eba50  bl 0x4eb3b8
  04eba54  lwz 4, 160(31)
  04eba58  lis 11, 144
  04eba5c  lwz 3, 172(31)
  04eba60  cntlzw 7, 4
  04eba64  andc 6, 4, 3
  04eba68  lwz 5, 176(31)
  04eba6c  andc 3, 3, 4
  04eba70  lwz 9, 188(31)
  04eba74  rlwinm 8, 4, 0, 16, 19
  04eba78  rlwinm 7, 7, 27, 31, 31
  04eba7c  stw 6, 164(31)
  04eba80  cntlzw 8, 8
  04eba84  andc 10, 5, 9
  04eba88  stw 3, 168(31)
  04eba8c  rlwinm 8, 8, 27, 31, 31
  04eba90  stw 7, 208(31)
  04eba94  andc 7, 9, 5
  04eba98  stw 10, 180(31)
  04eba9c  stw 4, 192(31)
  04ebaa0  stw 8, 212(31)
  04ebaa4  stw 7, 184(31)
  04ebaa8  lwz 7, -21552(11)
  04ebaac  stw 6, 196(31)
  04ebab0  stw 3, 200(31)
  04ebab4  stw 4, 584(31)
  04ebab8  lbz 7, 0(7)
  04ebabc  cmpwi 7, 0
  04ebac0  bt 2, 0x4ebba8
  04ebac4  lfs 1, 72(31)
  04ebac8  rlwinm 7, 4, 0, 16, 16
  04ebacc  lfs 2, 64(31)
  04ebad0  fneg 1, 1
  04ebad4  fneg 2, 2
  04ebad8  cmpwi 7, 0
  04ebadc  stfs 1, 72(31)
  04ebae0  stfs 2, 64(31)
  04ebae4  bt 2, 0x4ebafc
  04ebae8  ori 7, 4, 0
  04ebaec  rlwimi 7, 30, 0, 16, 16
  04ebaf0  ori 7, 7, 8192
  04ebaf4  stw 7, 192(31)
  04ebaf8  b 0x4ebb20
  04ebafc  rlwinm 7, 4, 0, 18, 18
  04ebb00  cmpwi 7, 0
  04ebb04  bt 2, 0x4ebb20
  04ebb08  lis 7, 0
  04ebb0c  ori 8, 4, 0
  04ebb10  ori 7, 7, 32768
  04ebb14  rlwimi 8, 30, 0, 18, 18
  04ebb18  or 7, 8, 7
  04ebb1c  stw 7, 192(31)
  04ebb20  rlwinm 7, 6, 0, 16, 16
  04ebb24  cmpwi 7, 0
  04ebb28  bt 2, 0x4ebb40
  04ebb2c  ori 7, 6, 0
  04ebb30  rlwimi 7, 30, 0, 16, 16
  04ebb34  ori 7, 7, 8192
  04ebb38  stw 7, 196(31)
  04ebb3c  b 0x4ebb64
  04ebb40  rlwinm 7, 6, 0, 18, 18
  04ebb44  cmpwi 7, 0
  04ebb48  bt 2, 0x4ebb64
  04ebb4c  lis 7, 0
  04ebb50  ori 8, 6, 0
  04ebb54  ori 7, 7, 32768
  04ebb58  rlwimi 8, 30, 0, 18, 18
  04ebb5c  or 7, 8, 7
  04ebb60  stw 7, 196(31)
  04ebb64  rlwinm 7, 3, 0, 16, 16
  04ebb68  cmpwi 7, 0
  04ebb6c  bt 2, 0x4ebb84
  04ebb70  ori 7, 3, 0
  04ebb74  rlwimi 7, 30, 0, 16, 16
  04ebb78  ori 7, 7, 8192
  04ebb7c  stw 7, 200(31)
  04ebb80  b 0x4ebba8
  04ebb84  rlwinm 7, 3, 0, 18, 18
  04ebb88  cmpwi 7, 0
  04ebb8c  bt 2, 0x4ebba8
  04ebb90  lis 7, 0
  04ebb94  ori 8, 3, 0
  04ebb98  ori 7, 7, 32768
  04ebb9c  rlwimi 8, 30, 0, 18, 18
  04ebba0  or 7, 8, 7
  04ebba4  stw 7, 200(31)
  04ebba8  lwz 7, 204(31)
  04ebbac  cmpwi 7, 1
  04ebbb0  cmpwi 1, 7, 2
  04ebbb4  bf 2, 0x4ebbe4
  04ebbb8  li 5, -20529
  04ebbbc  stw 30, 0(31)
  04ebbc0  and 4, 4, 5
  04ebbc4  and 6, 6, 5
  04ebbc8  and 3, 3, 5
  04ebbcc  stw 4, 160(31)
  04ebbd0  stw 6, 164(31)
  04ebbd4  stw 3, 168(31)
  04ebbd8  stw 30, 4(31)
  04ebbdc  stw 30, 204(31)
  04ebbe0  b 0x4ebc2c
  04ebbe4  bf 6, 0x4ebc2c
  04ebbe8  li 7, 2304
  04ebbec  li 9, 2304
  04ebbf0  and 4, 4, 7
  04ebbf4  li 8, 2304
  04ebbf8  and 5, 5, 9
  04ebbfc  li 7, 2304
  04ebc00  and 6, 6, 8
  04ebc04  stw 4, 160(31)
  04ebc08  and 3, 3, 7
  04ebc0c  stw 5, 176(31)
  04ebc10  li 4, 1
  04ebc14  stw 30, 8(31)
  04ebc18  stw 6, 164(31)
  04ebc1c  stw 3, 168(31)
  04ebc20  stw 30, 12(31)
  04ebc24  stw 4, 212(31)
  04ebc28  stw 30, 204(31)
  04ebc2c  lwz 3, 8(31)
  04ebc30  lwz 4, 12(31)
  04ebc34  lfs 1, 8(31)
  04ebc38  lfs 2, 12(31)
  04ebc3c  fabs 4, 1
  04ebc40  fabs 3, 2
  04ebc44  fmuls 2, 2, 2
  04ebc48  rlwinm 4, 4, 3, 29, 29
  04ebc4c  lis 5, 115
  04ebc50  addic 5, 5, 22784
  04ebc54  fsubs 5, 4, 3
  04ebc58  fmadds 1, 1, 1, 2
  04ebc5c  stfs 5, 192(1)
  04ebc60  fsqrts 1, 1
  04ebc64  lwz 6, 192(1)
  04ebc68  lfs 2, 192(1)
  04ebc6c  rlwimi 4, 6, 2, 30, 30
  04ebc70  fsub 5, 2, 31
  04ebc74  fsub 6, 2, 31
  04ebc78  rlwimi 4, 3, 4, 28, 28
  04ebc7c  ori 3, 5, 0
  04ebc80  rlwimi 3, 4, 2, 26, 28
  04ebc84  slwi 4, 4, 2
  04ebc88  clrldi 3, 3, 32
  04ebc8c  fsel 5, 5, 4, 3
  04ebc90  lfsx 2, 5, 4
  04ebc94  fsel 4, 6, 3, 4
  04ebc98  lfs 3, 4(3)
  04ebc9c  fcmpu 0, 5, 31
  04ebca0  bt 1, 0x4ebca8
  04ebca4  b 0x4ebdc0
  04ebca8  fsubs 6, 4, 5
  04ebcac  fadds 4, 4, 5
  04ebcb0  addic 3, 1, 16
  04ebcb4  mtctr 27
  04ebcb8  addic 4, 3, 180
  04ebcbc  addic 5, 3, 196
  04ebcc0  fdivs 4, 6, 4
  04ebcc4  fmuls 5, 4, 4
  04ebcc8  stfs 4, 208(1)
  04ebccc  stfs 4, 200(1)
  04ebcd0  stfs 4, 204(1)
  04ebcd4  stfs 4, 196(1)
  04ebcd8  lfs 7, 208(1)
  04ebcdc  lfs 8, 200(1)
  04ebce0  lfs 9, 204(1)
  04ebce4  fmuls 6, 5, 5
  04ebce8  fmuls 8, 8, 5
  04ebcec  fmuls 7, 7, 6
  04ebcf0  fmuls 4, 6, 6
  04ebcf4  fmuls 6, 9, 6
  04ebcf8  stfs 8, 200(1)
  04ebcfc  fmuls 5, 7, 5
  04ebd00  stfs 6, 204(1)
  04ebd04  stfs 5, 208(1)
  04ebd08  lfs 5, 180(3)
  04ebd0c  fmuls 5, 5, 4
  04ebd10  stfs 5, 196(3)
  04ebd14  lfs 5, 4(4)
  04ebd18  addic 3, 3, 8
  04ebd1c  addic 4, 4, 8
  04ebd20  fmuls 5, 5, 4
  04ebd24  stfs 5, 4(5)
  04ebd28  addic 5, 5, 8
  04ebd2c  bdnz 0x4ebd08
  04ebd30  ori 3, 1, 0
  04ebd34  mtctr 28
  04ebd38  lis 4, 115
  04ebd3c  addic 28, 3, 196
  04ebd40  addic 4, 4, 22752
  04ebd44  ori 5, 28, 0
  04ebd48  lfs 4, 196(3)
  04ebd4c  lfs 5, 0(4)
  04ebd50  fmuls 4, 4, 5
  04ebd54  lfs 5, 4(4)
  04ebd58  addic 4, 4, 8
  04ebd5c  stfs 4, 196(3)
  04ebd60  lfs 4, 4(28)
  04ebd64  addic 3, 3, 8
  04ebd68  fmuls 4, 4, 5
  04ebd6c  stfs 4, 4(28)
  04ebd70  addic 28, 28, 8
  04ebd74  bdnz 0x4ebd48
  04ebd78  ori 3, 1, 0
  04ebd7c  mtctr 27
  04ebd80  lfs 4, 196(3)
  04ebd84  lfs 5, 4(5)
  04ebd88  fadds 4, 31, 4
  04ebd8c  lfs 6, 8(5)
  04ebd90  addic 3, 3, 16
  04ebd94  lfs 31, 12(5)
  04ebd98  addic 5, 5, 16
  04ebd9c  fadds 4, 4, 5
  04ebda0  fadds 4, 4, 6
  04ebda4  fadds 31, 4, 31
  04ebda8  bdnz 0x4ebd80
  04ebdac  lis 3, 79
  04ebdb0  addi 3, 3, -18760
  04ebdb4  lfs 4, 28(3)
  04ebdb8  fadds 31, 31, 4
  04ebdbc  fmadds 31, 31, 2, 3
  04ebdc0  lhz 4, 142(31)
  04ebdc4  lis 3, 79
  04ebdc8  extsh 5, 4
  04ebdcc  extsh 4, 4
  04ebdd0  sldi 5, 5, 2
  04ebdd4  sldi 4, 4, 2
  04ebdd8  addc 5, 31, 5
  04ebddc  addc 4, 31, 4
  04ebde0  clrldi 5, 5, 32
  04ebde4  clrldi 4, 4, 32
  04ebde8  addi 3, 3, -18760
  04ebdec  lis 9, 16230
  04ebdf0  stfs 1, 464(5)
  04ebdf4  stfs 31, 344(4)
  04ebdf8  ori 9, 9, 26214
  04ebdfc  lfs 2, 32(3)
  04ebe00  fcmpu 0, 1, 2
  04ebe04  cror 6, 0, 2
  04ebe08  bt 6, 0x4ebf84
  04ebe0c  lis 3, 79
  04ebe10  lis 4, 114
  04ebe14  addi 3, 3, -18760
  04ebe18  lis 8, 16000
  04ebe1c  lfs 1, 36(3)
  04ebe20  lfs 2, -3056(4)
  04ebe24  lhz 3, 142(31)
  04ebe28  li 4, 1
  04ebe2c  fmuls 1, 2, 1
  04ebe30  lwz 5, 164(31)
  04ebe34  ori 28, 4, 0
  04ebe38  extsh 7, 3
  04ebe3c  fctiwz 1, 1
  04ebe40  stfd 1, 232(1)
  04ebe44  lwz 6, 236(1)
  04ebe48  cmpwi 6, 1
  04ebe4c  bf 1, 0x4ebecc
  04ebe50  subc 10, 7, 4
  04ebe54  lis 11, -30584
  04ebe58  addic 10, 10, 30
  04ebe5c  ori 11, 11, 34953
  04ebe60  mulhw 11, 11, 10
  04ebe64  addc 11, 11, 10
  04ebe68  srawi 11, 11, 4
  04ebe6c  srwi 12, 11, 31
  04ebe70  addc 11, 11, 12
  04ebe74  sldi 12, 11, 5
  04ebe78  subc 12, 12, 11
  04ebe7c  subc 11, 12, 11
  04ebe80  subc 10, 10, 11
  04ebe84  sldi 10, 10, 2
  04ebe88  addc 10, 31, 10
  04ebe8c  clrldi 10, 10, 32
  04ebe90  lwz 10, 464(10)
  04ebe94  srawi 11, 10, 31
  04ebe98  srwi 12, 11, 1
  04ebe9c  xor 10, 12, 10
  04ebea0  subc 10, 10, 11
  04ebea4  cmpw 10, 9
  04ebea8  cmpw 1, 10, 8
  04ebeac  bt 1, 0x4ebecc
  04ebeb0  bf 4, 0x4ebec0
  04ebeb4  oris 5, 5, 1
  04ebeb8  stw 5, 164(31)
  04ebebc  b 0x4ebecc
  04ebec0  addic 4, 4, 1
  04ebec4  cmpw 4, 6
  04ebec8  bt 0, 0x4ebe50
  04ebecc  rlwinm 4, 5, 0, 15, 15
  04ebed0  cmpwi 4, 0
  04ebed4  bf 2, 0x4ebf84
  04ebed8  lis 4, 79
  04ebedc  addi 4, 4, -18760
  04ebee0  lfs 30, 40(4)
  04ebee4  lfs 29, 44(4)
  04ebee8  lis 4, 114
  04ebeec  lfs 1, -3056(4)
  04ebef0  fmuls 1, 1, 30
  04ebef4  fctiwz 1, 1
  04ebef8  stfd 1, 232(1)
  04ebefc  lwz 4, 236(1)
  04ebf00  cmpw 28, 4
  04ebf04  bf 0, 0x4ebf84
  04ebf08  extsh 3, 3
  04ebf0c  lis 4, -30584
  04ebf10  subc 3, 3, 28
  04ebf14  ori 4, 4, 34953
  04ebf18  addic 3, 3, 30
  04ebf1c  mulhw 4, 4, 3
  04ebf20  fmr 2, 31
  04ebf24  addc 4, 4, 3
  04ebf28  srawi 4, 4, 4
  04ebf2c  srwi 5, 4, 31
  04ebf30  addc 4, 4, 5
  04ebf34  sldi 5, 4, 5
  04ebf38  subc 5, 5, 4
  04ebf3c  subc 4, 5, 4
  04ebf40  subc 3, 3, 4
  04ebf44  sldi 3, 3, 2
  04ebf48  addc 3, 31, 3
  04ebf4c  clrldi 3, 3, 32
  04ebf50  lfs 1, 344(3)
  04ebf54  bl 0x5026a0
  04ebf58  nop
  04ebf5c  fcmpu 0, 1, 29
  04ebf60  cror 6, 0, 2
  04ebf64  bt 6, 0x4ebf78
  04ebf68  lwz 3, 164(31)
  04ebf6c  oris 3, 3, 1
  04ebf70  stw 3, 164(31)
  04ebf74  b 0x4ebf84
  04ebf78  addic 28, 28, 1
  04ebf7c  lhz 3, 142(31)
  04ebf80  b 0x4ebee8
  04ebf84  lwz 4, 588(31)
  04ebf88  addic 3, 31, 652
  04ebf8c  lwz 5, 1128(31)
  04ebf90  mtctr 29
  04ebf94  slwi 4, 4, 2
  04ebf98  lwz 6, 160(31)
  04ebf9c  slwi 5, 5, 2
  04ebfa0  lwz 7, 176(31)
  04ebfa4  addc 4, 31, 4
  04ebfa8  addc 5, 31, 5
  04ebfac  clrldi 8, 4, 32
  04ebfb0  clrldi 5, 5, 32
  04ebfb4  ori 4, 31, 0
  04ebfb8  stw 7, 624(5)
  04ebfbc  stw 6, 596(8)
  04ebfc0  lwz 5, 1128(31)
  04ebfc4  lfs 1, 0(4)
  04ebfc8  slwi 5, 5, 6
  04ebfcc  addic 4, 4, 4
  04ebfd0  addc 5, 5, 3
  04ebfd4  addc 5, 5, 30
  04ebfd8  addic 30, 30, 4
  04ebfdc  clrldi 5, 5, 32
  04ebfe0  stfs 1, 0(5)
  04ebfe4  bdnz 0x4ebfc0
  04ebfe8  lis 3, -28087
  04ebfec  lwz 5, 588(31)
  04ebff0  lis 4, -30584
  04ebff4  ori 3, 3, 9363
  04ebff8  lhz 6, 142(31)
  04ebffc  addic 5, 5, 1
  04ec000  lwz 8, 592(31)
  04ec004  mulhw 3, 3, 5
  04ec008  extsh 7, 6
  04ec00c  addc 3, 3, 5
  04ec010  lwz 10, 1128(31)
  04ec014  ori 4, 4, 34953
  04ec018  addic 7, 7, 1
  04ec01c  mulhw 4, 4, 7
  04ec020  srawi 3, 3, 2
  04ec024  addic 8, 8, 1
  04ec028  srwi 9, 3, 31
  04ec02c  extsw 12, 10
  04ec030  addc 3, 3, 9
  04ec034  subc 9, 8, 10
  04ec038  sldi 11, 3, 3
  04ec03c  extsw 8, 8
  04ec040  subc 3, 11, 3
  04ec044  subc 8, 8, 12
  04ec048  subc 3, 5, 3
  04ec04c  sradi 5, 8, 63
  04ec050  extsh 6, 6
  04ec054  addc 4, 4, 7
  04ec058  lwz 8, 164(31)
  04ec05c  and 5, 5, 9
  04ec060  lwz 11, 144(31)
  04ec064  sldi 6, 6, 2
  04ec068  srawi 4, 4, 4
  04ec06c  addc 5, 10, 5
  04ec070  addc 6, 31, 6
  04ec074  srwi 10, 4, 31
  04ec078  clrldi 6, 6, 32
  04ec07c  addc 4, 4, 10
  04ec080  stw 5, 592(31)
  04ec084  stw 3, 588(31)
  04ec088  addic 9, 11, 1
  04ec08c  sldi 3, 4, 5
  04ec090  extsw 5, 9
  04ec094  stw 8, 224(6)
  04ec098  subc 3, 3, 4
  04ec09c  li 6, 30
  04ec0a0  subc 3, 3, 4
  04ec0a4  subc 5, 5, 6
  04ec0a8  subc 6, 7, 3
  04ec0ac  li 7, 30
  04ec0b0  lbz 3, 1102(31)
  04ec0b4  sradi 5, 5, 63
  04ec0b8  lwz 4, 160(31)
  04ec0bc  subc 9, 9, 7
  04ec0c0  lwz 8, 172(31)
  04ec0c4  sth 6, 142(31)
  04ec0c8  cmpwi 3, 0
  04ec0cc  and 9, 5, 9
  04ec0d0  lbz 5, 1103(31)
  04ec0d4  addc 7, 7, 9
  04ec0d8  lbz 6, 1101(31)
  04ec0dc  cmpwi 1, 4, 0
  04ec0e0  cmpw 6, 4, 8
  04ec0e4  stw 7, 144(31)
  04ec0e8  bt 2, 0x4ec120
  04ec0ec  bt 6, 0x4ec11c
  04ec0f0  bf 26, 0x4ec11c
  04ec0f4  addic 5, 5, -1
  04ec0f8  clrlwi 6, 5, 24
  04ec0fc  cmpwi 6, 0
  04ec100  stb 5, 1103(31)
  04ec104  cmpwi 1, 6, 255
  04ec108  bt 2, 0x4ec110
  04ec10c  bf 6, 0x4ec120
  04ec110  stb 3, 1103(31)
  04ec114  stw 4, 164(31)
  04ec118  b 0x4ec120
  04ec11c  stb 6, 1103(31)
  04ec120  ld 0, 336(1)
  04ec124  mtlr 0
  04ec128  lfd 29, 296(1)
  04ec12c  lfd 30, 304(1)
  04ec130  lfd 31, 312(1)
  04ec134  ld 26, 248(1)
  04ec138  ld 27, 256(1)
  04ec13c  ld 28, 264(1)
  04ec140  ld 29, 272(1)
  04ec144  ld 30, 280(1)
  04ec148  ld 31, 288(1)
  04ec14c  addi 1, 1, 320
  04ec150  blr

idol::Pad_PS_Update:   # 0x4ec160, 0x3e4 bytes
  04ec160  stdu 1, -496(1)
  04ec164  mflr 0
  04ec168  std 0, 512(1)
  04ec16c  std 30, 480(1)
  04ec170  ori 30, 3, 0
  04ec174  std 31, 488(1)
  04ec178  std 28, 464(1)
  04ec17c  addic 3, 1, 208
  04ec180  ori 31, 5, 0
  04ec184  std 29, 472(1)
  04ec188  ori 28, 4, 0
  04ec18c  bl 0x64f9c4
  04ec190  ld 2, 40(1)
  04ec194  cmpwi 3, 0
  04ec198  bt 2, 0x4ec1b4
  04ec19c  lis 5, 102
  04ec1a0  ori 4, 3, 0
  04ec1a4  addic 3, 5, -21888
  04ec1a8  bl 0x4ff6d0
  04ec1ac  nop
  04ec1b0  b 0x4ec524
  04ec1b4  li 3, 0
  04ec1b8  ori 29, 3, 0
  04ec1bc  stw 3, 4(30)
  04ec1c0  slwi 4, 29, 2
  04ec1c4  addc 4, 4, 1
  04ec1c8  clrldi 4, 4, 32
  04ec1cc  lwz 5, 220(4)
  04ec1d0  clrlwi 5, 5, 31
  04ec1d4  cmpwi 5, 0
  04ec1d8  bt 2, 0x4ec1e4
  04ec1dc  addic 3, 3, 1
  04ec1e0  stw 3, 4(30)
  04ec1e4  lwz 4, 276(4)
  04ec1e8  rlwinm 4, 4, 0, 29, 29
  04ec1ec  cmpwi 4, 0
  04ec1f0  bt 2, 0x4ec208
  04ec1f4  ori 3, 29, 0
  04ec1f8  li 4, 6
  04ec1fc  bl 0x64f984
  04ec200  ld 2, 40(1)
  04ec204  lwz 3, 4(30)
  04ec208  addic 29, 29, 1
  04ec20c  extsw 29, 29
  04ec210  cmpwi 29, 4
  04ec214  bt 0, 0x4ec1c0
  04ec218  lis 3, 273
  04ec21c  lis 4, 79
  04ec220  addi 4, 4, -16044
  04ec224  lwz 3, 5696(3)
  04ec228  std 2, 40(1)
  04ec22c  lfs 1, 0(4)
  04ec230  lwz 4, 0(3)
  04ec234  lwz 4, 8(4)
  04ec238  lwz 5, 0(4)
  04ec23c  lwz 2, 4(4)
  04ec240  mtctr 5
  04ec244  bcctrl 20, 30
  04ec248  lwz 3, 4(30)
  04ec24c  ld 2, 40(1)
  04ec250  cmpwi 3, 0
  04ec254  bf 2, 0x4ec2c4
  04ec258  lis 3, 346
  04ec25c  lis 5, 102
  04ec260  addic 3, 3, -19572
  04ec264  addic 5, 5, -21840
  04ec268  li 4, 1
  04ec26c  bl 0x50544c
  04ec270  nop
  04ec274  lis 3, 273
  04ec278  lis 4, 79
  04ec27c  lis 10, 113
  04ec280  addi 4, 4, -16044
  04ec284  li 9, 0
  04ec288  lwz 3, 5696(3)
  04ec28c  addic 10, 10, 312
  04ec290  li 5, 0
  04ec294  li 8, 1
  04ec298  lwz 6, 0(3)
  04ec29c  lfs 1, 4(4)
  04ec2a0  std 2, 40(1)
  04ec2a4  li 4, 7
  04ec2a8  lwz 7, 12(6)
  04ec2ac  li 6, 2
  04ec2b0  lwz 11, 0(7)
  04ec2b4  lwz 2, 4(7)
  04ec2b8  mtctr 11
  04ec2bc  bcctrl 20, 30
  04ec2c0  ld 2, 40(1)
  04ec2c4  sldi 3, 28, 2
  04ec2c8  addc 29, 1, 3
  04ec2cc  clrldi 29, 29, 32
  04ec2d0  lwz 3, 220(29)
  04ec2d4  cmpwi 3, 0
  04ec2d8  bf 2, 0x4ec2fc
  04ec2dc  li 5, 0
  04ec2e0  ori 3, 30, 0
  04ec2e4  ori 4, 31, 0
  04ec2e8  stw 5, 156(31)
  04ec2ec  stb 5, 1112(31)
  04ec2f0  bl 0x5055e8
  04ec2f4  nop
  04ec2f8  b 0x4ec4d8
  04ec2fc  clrlwi 4, 3, 31
  04ec300  cmpwi 4, 0
  04ec304  bt 2, 0x4ec4b4
  04ec308  li 5, 1
  04ec30c  clrldi 3, 28, 32
  04ec310  addic 4, 1, 332
  04ec314  stw 5, 156(31)
  04ec318  stb 5, 1112(31)
  04ec31c  bl 0x64f9a4
  04ec320  ld 2, 40(1)
  04ec324  ori 28, 3, 0
  04ec328  cmpwi 28, 0
  04ec32c  bt 2, 0x4ec34c
  04ec330  lis 3, 102
  04ec334  ori 4, 28, 0
  04ec338  addic 3, 3, -21832
  04ec33c  bl 0x4ff6d0
  04ec340  nop
  04ec344  li 3, 3
  04ec348  stw 3, 156(31)
  04ec34c  lwz 3, 332(1)
  04ec350  cmpwi 3, 0
  04ec354  bf 2, 0x4ec3d4
  04ec358  li 5, 16
  04ec35c  addic 4, 31, 1244
  04ec360  li 3, 0
  04ec364  mtctr 5
  04ec368  addc 5, 3, 4
  04ec36c  addc 6, 3, 31
  04ec370  addc 7, 3, 1
  04ec374  clrldi 5, 5, 32
  04ec378  clrldi 7, 7, 32
  04ec37c  addic 3, 3, 8
  04ec380  lwz 6, 1244(6)
  04ec384  extsw 3, 3
  04ec388  lwz 5, 4(5)
  04ec38c  stw 6, 64(7)
  04ec390  stw 5, 68(7)
  04ec394  bdnz 0x4ec368
  04ec398  addc 4, 31, 3
  04ec39c  addc 3, 1, 3
  04ec3a0  clrldi 5, 3, 32
  04ec3a4  ori 3, 30, 0
  04ec3a8  lwz 6, 1244(4)
  04ec3ac  ori 4, 31, 0
  04ec3b0  stw 6, 64(5)
  04ec3b4  ld 5, 64(1)
  04ec3b8  ld 6, 72(1)
  04ec3bc  ld 7, 80(1)
  04ec3c0  ld 8, 88(1)
  04ec3c4  ld 9, 96(1)
  04ec3c8  ld 10, 104(1)
  04ec3cc  bl 0x4eb6e8
  04ec3d0  b 0x4ec4d8
  04ec3d4  ori 5, 1, 0
  04ec3d8  li 6, 8
  04ec3dc  addic 4, 5, 332
  04ec3e0  addic 3, 5, 336
  04ec3e4  mtctr 6
  04ec3e8  lwz 6, 332(5)
  04ec3ec  lwz 7, 336(5)
  04ec3f0  lwz 8, 8(4)
  04ec3f4  stw 6, 64(5)
  04ec3f8  lwz 6, 8(3)
  04ec3fc  addic 4, 4, 16
  04ec400  stw 7, 68(5)
  04ec404  addic 3, 3, 16
  04ec408  stw 8, 72(5)
  04ec40c  stw 6, 76(5)
  04ec410  addic 5, 5, 16
  04ec414  bdnz 0x4ec3e8
  04ec418  lwz 6, 460(1)
  04ec41c  ori 3, 30, 0
  04ec420  ld 5, 64(1)
  04ec424  ori 4, 31, 0
  04ec428  ld 7, 72(1)
  04ec42c  stw 6, 192(1)
  04ec430  ori 6, 7, 0
  04ec434  ld 7, 80(1)
  04ec438  ld 8, 88(1)
  04ec43c  ld 9, 96(1)
  04ec440  ld 10, 104(1)
  04ec444  bl 0x4eb6e8
  04ec448  li 5, 16
  04ec44c  addic 4, 31, 1244
  04ec450  li 3, 0
  04ec454  mtctr 5
  04ec458  addc 5, 3, 1
  04ec45c  addc 7, 3, 4
  04ec460  clrldi 5, 5, 32
  04ec464  addc 6, 3, 31
  04ec468  clrldi 7, 7, 32
  04ec46c  addic 3, 3, 8
  04ec470  lwz 8, 332(5)
  04ec474  lwz 5, 336(5)
  04ec478  extsw 3, 3
  04ec47c  stw 8, 1244(6)
  04ec480  stw 5, 4(7)
  04ec484  bdnz 0x4ec458
  04ec488  addc 4, 1, 3
  04ec48c  addc 6, 31, 3
  04ec490  clrldi 7, 4, 32
  04ec494  addic 3, 31, 1140
  04ec498  addic 4, 1, 336
  04ec49c  li 5, 40
  04ec4a0  lwz 7, 332(7)
  04ec4a4  stw 7, 1244(6)
  04ec4a8  bl 0x5c5ad0
  04ec4ac  nop
  04ec4b0  b 0x4ec4d8
  04ec4b4  rlwinm 3, 3, 0, 30, 30
  04ec4b8  cmpwi 3, 0
  04ec4bc  bt 2, 0x4ec4d8
  04ec4c0  li 5, 0
  04ec4c4  ori 3, 30, 0
  04ec4c8  ori 4, 31, 0
  04ec4cc  stw 5, 156(31)
  04ec4d0  bl 0x5055e8
  04ec4d4  nop
  04ec4d8  lwz 3, 216(1)
  04ec4dc  clrlwi 3, 3, 31
  04ec4e0  cmpwi 3, 0
  04ec4e4  bt 2, 0x4ec514
  04ec4e8  lwz 3, 220(29)
  04ec4ec  clrlwi 3, 3, 31
  04ec4f0  cmpwi 3, 0
  04ec4f4  bt 2, 0x4ec508
  04ec4f8  ori 3, 30, 0
  04ec4fc  ori 4, 31, 0
  04ec500  bl 0x5055e8
  04ec504  nop
  04ec508  li 3, 1
  04ec50c  stb 3, 1376(31)
  04ec510  b 0x4ec524
  04ec514  li 3, 0
  04ec518  stb 3, 1376(31)
  04ec51c  stb 3, 136(31)
  04ec520  stb 3, 137(31)
  04ec524  ld 0, 512(1)
  04ec528  mtlr 0
  04ec52c  ld 28, 464(1)
  04ec530  ld 29, 472(1)
  04ec534  ld 30, 480(1)
  04ec538  ld 31, 488(1)
  04ec53c  addi 1, 1, 496
  04ec540  blr

FUN_004ec544:   # 0x4ec544, 0x20 bytes
  04ec544  lis 3, 144
  04ec548  li 4, 0
  04ec54c  lwz 3, 11996(3)
  04ec550  lwz 3, 4(3)
  04ec554  extsw 3, 3
  04ec558  subc 3, 4, 3
  04ec55c  rldicl 3, 3, 1, 63
  04ec560  blr

FUN_004ec568:   # 0x4ec568, 0x184 bytes
  04ec568  stdu 1, -160(1)
  04ec56c  mflr 0
  04ec570  std 0, 176(1)
  04ec574  std 31, 152(1)
  04ec578  ori 31, 3, 0
  04ec57c  std 29, 136(1)
  04ec580  lis 3, 72
  04ec584  li 29, 0
  04ec588  ori 3, 3, 2080
  04ec58c  std 30, 144(1)
  04ec590  lis 6, 102
  04ec594  std 28, 128(1)
  04ec598  addc 30, 31, 3
  04ec59c  ori 28, 4, 0
  04ec5a0  clrldi 30, 30, 32
  04ec5a4  stw 29, 0(31)
  04ec5a8  addic 4, 31, 128
  04ec5ac  addic 6, 6, -21800
  04ec5b0  lis 5, 8
  04ec5b4  ori 3, 30, 0
  04ec5b8  bl 0x4f4d1c
  04ec5bc  nop
  04ec5c0  stb 29, 118(1)
  04ec5c4  lis 4, 345
  04ec5c8  stb 29, 119(1)
  04ec5cc  addic 3, 1, 112
  04ec5d0  stb 28, 112(1)
  04ec5d4  stb 28, 113(1)
  04ec5d8  stb 28, 114(1)
  04ec5dc  lbz 4, 9092(4)
  04ec5e0  stb 28, 115(1)
  04ec5e4  cmpwi 4, 0
  04ec5e8  stb 28, 116(1)
  04ec5ec  stb 28, 117(1)
  04ec5f0  bt 2, 0x4ec61c
  04ec5f4  lis 4, 144
  04ec5f8  ori 5, 3, 0
  04ec5fc  ori 3, 30, 0
  04ec600  li 6, 1
  04ec604  li 7, 16
  04ec608  lwz 4, -23004(4)
  04ec60c  li 8, 0
  04ec610  bl 0x4f1c18
  04ec614  nop
  04ec618  b 0x4ec644
  04ec61c  lis 4, 144
  04ec620  lis 6, 144
  04ec624  ori 5, 3, 0
  04ec628  li 8, 0
  04ec62c  ori 3, 30, 0
  04ec630  lwz 4, -23004(4)
  04ec634  li 7, 16
  04ec638  lwz 6, -23000(6)
  04ec63c  bl 0x4f1c18
  04ec640  nop
  04ec644  lis 3, 72
  04ec648  lis 4, 72
  04ec64c  ori 3, 3, 3164
  04ec650  lis 5, 72
  04ec654  li 29, 0
  04ec658  ori 4, 4, 3160
  04ec65c  ori 5, 5, 3168
  04ec660  li 30, 64
  04ec664  stwx 29, 31, 3
  04ec668  stwx 29, 31, 4
  04ec66c  stwx 29, 31, 5
  04ec670  clrlwi 3, 30, 24
  04ec674  bl 0x64f464
  04ec678  ld 2, 40(1)
  04ec67c  lis 4, 72
  04ec680  li 28, 1
  04ec684  ori 4, 4, 168
  04ec688  addic 5, 30, 5
  04ec68c  addc 4, 31, 4
  04ec690  stw 3, 0(4)
  04ec694  stw 28, 0(3)
  04ec698  clrlwi 3, 5, 24
  04ec69c  bl 0x64f464
  04ec6a0  ld 2, 40(1)
  04ec6a4  lis 4, 72
  04ec6a8  addic 29, 29, 1
  04ec6ac  ori 4, 4, 188
  04ec6b0  cmpwi 29, 5
  04ec6b4  addc 4, 31, 4
  04ec6b8  addic 30, 30, 1
  04ec6bc  addic 31, 31, 4
  04ec6c0  stw 3, 0(4)
  04ec6c4  stw 28, 0(3)
  04ec6c8  bt 0, 0x4ec670
  04ec6cc  ld 0, 176(1)
  04ec6d0  mtlr 0
  04ec6d4  ld 28, 128(1)
  04ec6d8  ld 29, 136(1)
  04ec6dc  ld 30, 144(1)
  04ec6e0  ld 31, 152(1)
  04ec6e4  addi 1, 1, 160
  04ec6e8  blr

idol_draw::InitFrameRenderState:   # 0x4ec6ec, 0x158 bytes
  04ec6ec  stdu 1, -160(1)
  04ec6f0  mflr 0
  04ec6f4  std 0, 176(1)
  04ec6f8  lis 10, 72
  04ec6fc  lis 11, 72
  04ec700  ori 10, 10, 2064
  04ec704  std 27, 120(1)
  04ec708  ori 11, 11, 2068
  04ec70c  ori 27, 3, 0
  04ec710  std 30, 144(1)
  04ec714  cmpwi 5, 0
  04ec718  ori 30, 8, 0
  04ec71c  std 28, 128(1)
  04ec720  stwx 5, 3, 10
  04ec724  ori 28, 6, 0
  04ec728  std 29, 136(1)
  04ec72c  stwx 7, 3, 11
  04ec730  ori 29, 7, 0
  04ec734  std 31, 152(1)
  04ec738  ori 3, 5, 0
  04ec73c  ori 31, 9, 0
  04ec740  bt 2, 0x4ec760
  04ec744  lis 5, 72
  04ec748  ori 6, 5, 208
  04ec74c  slwi 5, 3, 6
  04ec750  addc 3, 27, 6
  04ec754  clrldi 3, 3, 32
  04ec758  bl 0x5c5ad0
  04ec75c  nop
  04ec760  cmpwi 29, 0
  04ec764  bt 2, 0x4ec788
  04ec768  lis 3, 72
  04ec76c  slwi 5, 29, 5
  04ec770  ori 3, 3, 1232
  04ec774  ori 4, 28, 0
  04ec778  addc 3, 27, 3
  04ec77c  clrldi 3, 3, 32
  04ec780  bl 0x5c5ad0
  04ec784  nop
  04ec788  lis 3, 72
  04ec78c  vspltisw 2, 0
  04ec790  lis 5, 72
  04ec794  ori 3, 3, 1712
  04ec798  ori 5, 5, 1728
  04ec79c  lis 4, 144
  04ec7a0  li 6, 32
  04ec7a4  li 7, 48
  04ec7a8  stvx 2, 3, 27
  04ec7ac  li 9, 64
  04ec7b0  stvx 2, 5, 27
  04ec7b4  lis 3, 72
  04ec7b8  lwz 4, 11932(4)
  04ec7bc  lis 5, 72
  04ec7c0  ori 3, 3, 1792
  04ec7c4  ori 5, 5, 1744
  04ec7c8  li 8, 80
  04ec7cc  lis 10, 72
  04ec7d0  lvx 2, 6, 4
  04ec7d4  lis 6, 72
  04ec7d8  stvx 2, 3, 27
  04ec7dc  ori 3, 6, 1760
  04ec7e0  lvx 2, 7, 4
  04ec7e4  ori 6, 10, 1776
  04ec7e8  sldi 7, 31, 4
  04ec7ec  stvx 2, 5, 27
  04ec7f0  lvx 2, 9, 4
  04ec7f4  lis 5, 72
  04ec7f8  stvx 2, 3, 27
  04ec7fc  ori 3, 5, 1808
  04ec800  lvx 2, 8, 4
  04ec804  clrldi 5, 7, 32
  04ec808  addc 3, 27, 3
  04ec80c  stvx 2, 6, 27
  04ec810  clrldi 3, 3, 32
  04ec814  ori 4, 30, 0
  04ec818  bl 0x5c5ad0
  04ec81c  nop
  04ec820  ld 0, 176(1)
  04ec824  mtlr 0
  04ec828  ld 27, 120(1)
  04ec82c  ld 28, 128(1)
  04ec830  ld 29, 136(1)
  04ec834  ld 30, 144(1)
  04ec838  ld 31, 152(1)
  04ec83c  addi 1, 1, 160
  04ec840  blr

FUN_004ec844:   # 0x4ec844, 0x60 bytes
  04ec844  lis 5, 144
  04ec848  lwz 5, -23196(5)
  04ec84c  lbz 6, 16(5)
  04ec850  cmpwi 6, 0
  04ec854  bt 2, 0x4ec868
  04ec858  lwz 5, 6764(5)
  04ec85c  clrlwi 5, 5, 31
  04ec860  cmpwi 5, 0
  04ec864  bf 2, 0x4ec8a0
  04ec868  lwz 7, 0(3)
  04ec86c  sldi 4, 4, 2
  04ec870  sldi 8, 7, 4
  04ec874  sldi 7, 7, 2
  04ec878  lis 5, 72
  04ec87c  addc 7, 8, 7
  04ec880  ori 5, 5, 168
  04ec884  addc 3, 3, 7
  04ec888  li 6, 0
  04ec88c  addc 3, 3, 4
  04ec890  clrldi 3, 3, 32
  04ec894  addc 3, 3, 5
  04ec898  lwz 3, 0(3)
  04ec89c  stw 6, 0(3)
  04ec8a0  blr

FUN_004ec8a4:   # 0x4ec8a4, 0x3e0 bytes
  04ec8a4  stdu 1, -272(1)
  04ec8a8  mflr 0
  04ec8ac  std 0, 288(1)
  04ec8b0  std 29, 248(1)
  04ec8b4  lis 6, 144
  04ec8b8  std 30, 256(1)
  04ec8bc  ori 29, 3, 0
  04ec8c0  ori 30, 4, 0
  04ec8c4  std 31, 264(1)
  04ec8c8  cmpwi 6, 5, 0
  04ec8cc  ori 31, 5, 0
  04ec8d0  lwz 3, -23196(6)
  04ec8d4  lbz 4, 16(3)
  04ec8d8  std 28, 240(1)
  04ec8dc  std 27, 232(1)
  04ec8e0  std 26, 224(1)
  04ec8e4  std 25, 216(1)
  04ec8e8  std 24, 208(1)
  04ec8ec  std 23, 200(1)
  04ec8f0  std 22, 192(1)
  04ec8f4  std 21, 184(1)
  04ec8f8  cmpwi 1, 4, 0
  04ec8fc  bt 6, 0x4ec910
  04ec900  lwz 4, 6764(3)
  04ec904  clrlwi 4, 4, 31
  04ec908  cmpwi 4, 0
  04ec90c  bf 2, 0x4ecc48
  04ec910  bf 26, 0x4ec95c
  04ec914  bt 6, 0x4ec928
  04ec918  lwz 3, 6764(3)
  04ec91c  clrlwi 3, 3, 31
  04ec920  cmpwi 3, 0
  04ec924  bf 2, 0x4ecc48
  04ec928  lwz 5, 0(29)
  04ec92c  lis 3, 72
  04ec930  li 4, 0
  04ec934  sldi 6, 5, 4
  04ec938  sldi 5, 5, 2
  04ec93c  ori 3, 3, 168
  04ec940  addc 5, 6, 5
  04ec944  addc 5, 29, 5
  04ec948  clrldi 5, 5, 32
  04ec94c  addc 3, 5, 3
  04ec950  lwz 3, 0(3)
  04ec954  stw 4, 0(3)
  04ec958  b 0x4ecc48
  04ec95c  lwz 4, 0(29)
  04ec960  lis 3, 72
  04ec964  slwi 5, 4, 2
  04ec968  ori 28, 3, 3160
  04ec96c  addc 5, 29, 5
  04ec970  slwi 4, 4, 21
  04ec974  clrldi 5, 5, 32
  04ec978  lis 3, 8
  04ec97c  addc 5, 5, 28
  04ec980  addc 4, 29, 4
  04ec984  ori 6, 3, 128
  04ec988  addic 27, 1, 152
  04ec98c  lwz 7, 0(5)
  04ec990  ori 3, 27, 0
  04ec994  slwi 7, 7, 16
  04ec998  lis 5, 1
  04ec99c  addc 4, 4, 7
  04ec9a0  addc 4, 4, 6
  04ec9a4  clrldi 4, 4, 32
  04ec9a8  bl 0x4f0e44
  04ec9ac  nop
  04ec9b0  lis 3, 273
  04ec9b4  addic 26, 3, 5760
  04ec9b8  ori 3, 26, 0
  04ec9bc  bl 0x4f5308
  04ec9c0  nop
  04ec9c4  slwi 4, 31, 4
  04ec9c8  rlwinm 7, 31, 4, 22, 27
  04ec9cc  lwz 5, 0(29)
  04ec9d0  ori 25, 3, 0
  04ec9d4  subc 3, 4, 7
  04ec9d8  clrlwi 6, 31, 26
  04ec9dc  li 7, 0
  04ec9e0  addic 3, 3, 1024
  04ec9e4  subc 6, 7, 6
  04ec9e8  clrldi 3, 3, 32
  04ec9ec  cntlzw 6, 6
  04ec9f0  subc 4, 4, 3
  04ec9f4  sldi 6, 6, 58
  04ec9f8  addic 8, 25, 16
  04ec9fc  sradi 6, 6, 63
  04eca00  sldi 7, 5, 4
  04eca04  and 4, 6, 4
  04eca08  sldi 5, 5, 2
  04eca0c  clrldi 24, 8, 32
  04eca10  addc 23, 3, 4
  04eca14  addc 3, 7, 5
  04eca18  addic 4, 24, 2
  04eca1c  lis 8, 72
  04eca20  addc 3, 29, 3
  04eca24  li 6, 0
  04eca28  clrldi 21, 4, 32
  04eca2c  ori 5, 8, 168
  04eca30  lis 4, 72
  04eca34  clrldi 7, 3, 32
  04eca38  ori 4, 4, 128
  04eca3c  stw 6, 112(1)
  04eca40  addc 5, 7, 5
  04eca44  stw 31, 116(1)
  04eca48  addc 6, 3, 4
  04eca4c  addc 4, 7, 4
  04eca50  srwi 22, 23, 10
  04eca54  li 7, 1
  04eca58  lwz 5, 0(5)
  04eca5c  addc 8, 21, 22
  04eca60  stw 6, 124(1)
  04eca64  ori 3, 27, 0
  04eca68  stw 5, 120(1)
  04eca6c  clrldi 31, 8, 32
  04eca70  stw 7, 0(4)
  04eca74  bl 0x4f0e94
  04eca78  nop
  04eca7c  ori 3, 27, 0
  04eca80  li 4, 0
  04eca84  li 5, 1
  04eca88  li 6, 16
  04eca8c  ori 7, 25, 0
  04eca90  bl 0x4f0f10
  04eca94  nop
  04eca98  ori 3, 27, 0
  04eca9c  li 4, 1
  04ecaa0  li 5, 1
  04ecaa4  ori 6, 24, 0
  04ecaa8  li 7, 2
  04ecaac  bl 0x4f0f10
  04ecab0  nop
  04ecab4  ori 3, 27, 0
  04ecab8  li 4, 2
  04ecabc  li 5, 1
  04ecac0  ori 6, 21, 0
  04ecac4  ori 7, 22, 0
  04ecac8  bl 0x4f0f10
  04ecacc  nop
  04ecad0  ori 3, 27, 0
  04ecad4  li 4, 3
  04ecad8  li 5, 1
  04ecadc  ori 6, 31, 0
  04ecae0  li 7, 80
  04ecae4  bl 0x4f0f10
  04ecae8  nop
  04ecaec  ori 3, 27, 0
  04ecaf0  li 4, 0
  04ecaf4  li 5, 0
  04ecaf8  ori 6, 26, 0
  04ecafc  li 7, 0
  04ecb00  bl 0x4f12bc
  04ecb04  nop
  04ecb08  lis 3, 72
  04ecb0c  li 4, 1
  04ecb10  ori 5, 3, 208
  04ecb14  ori 3, 27, 0
  04ecb18  addc 6, 29, 5
  04ecb1c  li 5, 0
  04ecb20  clrldi 6, 6, 32
  04ecb24  li 7, 1872
  04ecb28  li 8, 0
  04ecb2c  bl 0x4f1018
  04ecb30  nop
  04ecb34  ori 3, 27, 0
  04ecb38  li 4, 2
  04ecb3c  li 5, 0
  04ecb40  ori 6, 30, 0
  04ecb44  ori 7, 23, 0
  04ecb48  li 8, 0
  04ecb4c  bl 0x4f1018
  04ecb50  nop
  04ecb54  ori 3, 27, 0
  04ecb58  li 4, 3
  04ecb5c  li 5, 0
  04ecb60  li 6, 0
  04ecb64  li 7, 0
  04ecb68  li 8, 0
  04ecb6c  bl 0x4f1074
  04ecb70  nop
  04ecb74  ori 3, 27, 0
  04ecb78  li 4, 15
  04ecb7c  bl 0x4f10c8
  04ecb80  nop
  04ecb84  ori 3, 27, 0
  04ecb88  li 4, 0
  04ecb8c  li 5, 0
  04ecb90  bl 0x4f1198
  04ecb94  nop
  04ecb98  ori 3, 27, 0
  04ecb9c  addic 4, 1, 112
  04ecba0  li 5, 32
  04ecba4  bl 0x4f121c
  04ecba8  nop
  04ecbac  addic 3, 1, 144
  04ecbb0  ori 4, 27, 0
  04ecbb4  bl 0x4f1144
  04ecbb8  nop
  04ecbbc  lwz 3, 0(29)
  04ecbc0  ld 6, 144(1)
  04ecbc4  lis 5, 72
  04ecbc8  slwi 4, 3, 2
  04ecbcc  slwi 3, 3, 9
  04ecbd0  addc 4, 29, 4
  04ecbd4  addc 3, 29, 3
  04ecbd8  clrldi 4, 4, 32
  04ecbdc  ori 5, 5, 2136
  04ecbe0  addc 4, 4, 28
  04ecbe4  lwz 4, 0(4)
  04ecbe8  slwi 4, 4, 4
  04ecbec  addc 3, 3, 4
  04ecbf0  lis 4, 345
  04ecbf4  clrldi 3, 3, 32
  04ecbf8  addc 3, 3, 5
  04ecbfc  lis 5, 72
  04ecc00  ori 5, 5, 2144
  04ecc04  std 6, 0(3)
  04ecc08  lwz 3, 0(29)
  04ecc0c  lbz 4, 9089(4)
  04ecc10  slwi 6, 3, 2
  04ecc14  slwi 3, 3, 9
  04ecc18  addc 6, 29, 6
  04ecc1c  addc 3, 29, 3
  04ecc20  clrldi 6, 6, 32
  04ecc24  addc 6, 6, 28
  04ecc28  lwz 7, 0(6)
  04ecc2c  slwi 8, 7, 4
  04ecc30  addic 7, 7, 1
  04ecc34  addc 3, 3, 8
  04ecc38  clrldi 3, 3, 32
  04ecc3c  stw 7, 0(6)
  04ecc40  addc 3, 3, 5
  04ecc44  stb 4, 0(3)
  04ecc48  ld 0, 288(1)
  04ecc4c  mtlr 0
  04ecc50  ld 21, 184(1)
  04ecc54  ld 22, 192(1)
  04ecc58  ld 23, 200(1)
  04ecc5c  ld 24, 208(1)
  04ecc60  ld 25, 216(1)
  04ecc64  ld 26, 224(1)
  04ecc68  ld 27, 232(1)
  04ecc6c  ld 28, 240(1)
  04ecc70  ld 29, 248(1)
  04ecc74  ld 30, 256(1)
  04ecc78  ld 31, 264(1)
  04ecc7c  addi 1, 1, 272
  04ecc80  blr

FUN_004ecc84:   # 0x4ecc84, 0x4c0 bytes
  04ecc84  stdu 1, -352(1)
  04ecc88  mflr 0
  04ecc8c  std 0, 368(1)
  04ecc90  std 28, 320(1)
  04ecc94  lis 6, 144
  04ecc98  std 22, 272(1)
  04ecc9c  ori 28, 3, 0
  04ecca0  ori 22, 4, 0
  04ecca4  std 24, 288(1)
  04ecca8  cmpwi 6, 5, 0
  04eccac  ori 24, 5, 0
  04eccb0  lwz 3, -23196(6)
  04eccb4  lbz 4, 16(3)
  04eccb8  std 31, 344(1)
  04eccbc  std 30, 336(1)
  04eccc0  std 29, 328(1)
  04eccc4  std 27, 312(1)
  04eccc8  std 26, 304(1)
  04ecccc  std 25, 296(1)
  04eccd0  std 23, 280(1)
  04eccd4  std 21, 264(1)
  04eccd8  std 20, 256(1)
  04eccdc  std 19, 248(1)
  04ecce0  std 18, 240(1)
  04ecce4  std 17, 232(1)
  04ecce8  std 16, 224(1)
  04eccec  std 15, 216(1)
  04eccf0  std 14, 208(1)
  04eccf4  cmpwi 1, 4, 0
  04eccf8  bt 6, 0x4ecd0c
  04eccfc  lwz 4, 6764(3)
  04ecd00  clrlwi 4, 4, 31
  04ecd04  cmpwi 4, 0
  04ecd08  bf 2, 0x4ed0ec
  04ecd0c  bf 26, 0x4ecd58
  04ecd10  bt 6, 0x4ecd24
  04ecd14  lwz 3, 6764(3)
  04ecd18  clrlwi 3, 3, 31
  04ecd1c  cmpwi 3, 0
  04ecd20  bf 2, 0x4ed0ec
  04ecd24  lwz 5, 0(28)
  04ecd28  lis 3, 72
  04ecd2c  li 4, 0
  04ecd30  sldi 6, 5, 4
  04ecd34  sldi 5, 5, 2
  04ecd38  ori 3, 3, 172
  04ecd3c  addc 5, 6, 5
  04ecd40  addc 5, 28, 5
  04ecd44  clrldi 5, 5, 32
  04ecd48  addc 3, 5, 3
  04ecd4c  lwz 3, 0(3)
  04ecd50  stw 4, 0(3)
  04ecd54  b 0x4ed0ec
  04ecd58  lis 21, 273
  04ecd5c  addic 21, 21, 5768
  04ecd60  ori 3, 21, 0
  04ecd64  bl 0x4f5308
  04ecd68  nop
  04ecd6c  lwz 4, 0(28)
  04ecd70  ori 27, 3, 0
  04ecd74  lis 6, 72
  04ecd78  sldi 5, 4, 4
  04ecd7c  sldi 4, 4, 2
  04ecd80  addic 7, 24, 1023
  04ecd84  addc 3, 5, 4
  04ecd88  ori 4, 6, 132
  04ecd8c  addc 3, 28, 3
  04ecd90  srawi 25, 7, 10
  04ecd94  clrldi 3, 3, 32
  04ecd98  addze 25, 25
  04ecd9c  addc 3, 3, 4
  04ecda0  addic 26, 27, 16
  04ecda4  cmpwi 25, 0
  04ecda8  li 23, 0
  04ecdac  divwu 19, 24, 25
  04ecdb0  clrldi 26, 26, 32
  04ecdb4  stw 25, 0(3)
  04ecdb8  bt 2, 0x4ed0ec
  04ecdbc  lis 3, 72
  04ecdc0  lis 5, 72
  04ecdc4  ori 20, 3, 3160
  04ecdc8  lis 3, 72
  04ecdcc  lis 4, 72
  04ecdd0  ori 16, 3, 172
  04ecdd4  ori 3, 5, 208
  04ecdd8  addic 19, 19, 1
  04ecddc  addic 17, 26, 2
  04ecde0  ori 15, 4, 132
  04ecde4  addc 14, 28, 3
  04ecde8  addc 20, 28, 20
  04ecdec  clrldi 18, 19, 32
  04ecdf0  clrldi 17, 17, 32
  04ecdf4  addc 16, 28, 16
  04ecdf8  addc 15, 28, 15
  04ecdfc  clrldi 14, 14, 32
  04ece00  lwz 4, 0(28)
  04ece04  lis 3, 8
  04ece08  slwi 5, 4, 2
  04ece0c  ori 7, 3, 128
  04ece10  addc 5, 5, 20
  04ece14  slwi 4, 4, 21
  04ece18  clrldi 6, 5, 32
  04ece1c  addc 4, 4, 28
  04ece20  addic 31, 1, 152
  04ece24  lis 5, 1
  04ece28  lwz 3, 0(6)
  04ece2c  slwi 3, 3, 16
  04ece30  addc 4, 4, 3
  04ece34  ori 3, 31, 0
  04ece38  addc 4, 4, 7
  04ece3c  clrldi 4, 4, 32
  04ece40  bl 0x4f0e44
  04ece44  nop
  04ece48  clrldi 3, 24, 32
  04ece4c  subc 4, 24, 19
  04ece50  std 18, 176(1)
  04ece54  subc 3, 3, 18
  04ece58  li 6, 0
  04ece5c  sradi 3, 3, 63
  04ece60  and 3, 3, 4
  04ece64  lwz 4, 0(28)
  04ece68  addc 30, 19, 3
  04ece6c  std 16, 192(1)
  04ece70  sldi 3, 30, 6
  04ece74  sldi 5, 30, 4
  04ece78  std 15, 184(1)
  04ece7c  stw 30, 116(1)
  04ece80  addc 3, 3, 5
  04ece84  clrldi 5, 3, 32
  04ece88  clrlwi 3, 3, 22
  04ece8c  subc 7, 5, 3
  04ece90  subc 3, 6, 3
  04ece94  addic 6, 7, 1024
  04ece98  cntlzw 3, 3
  04ece9c  clrldi 6, 6, 32
  04ecea0  sldi 3, 3, 58
  04ecea4  subc 5, 5, 6
  04ecea8  sradi 3, 3, 63
  04eceac  sldi 7, 4, 4
  04eceb0  and 3, 3, 5
  04eceb4  sldi 4, 4, 2
  04eceb8  addc 29, 6, 3
  04ecebc  addc 3, 7, 4
  04ecec0  srwi 18, 29, 10
  04ecec4  addc 5, 3, 16
  04ecec8  addc 6, 18, 17
  04ececc  addc 3, 3, 15
  04eced0  li 4, 248
  04eced4  clrldi 15, 6, 32
  04eced8  clrldi 5, 5, 32
  04ecedc  subc 4, 4, 15
  04ecee0  stw 3, 124(1)
  04ecee4  li 6, 1
  04ecee8  clrldi 16, 4, 32
  04eceec  ori 3, 31, 0
  04ecef0  lwz 4, 0(5)
  04ecef4  stw 6, 112(1)
  04ecef8  stw 4, 120(1)
  04ecefc  bl 0x4f0e94
  04ecf00  nop
  04ecf04  ori 3, 31, 0
  04ecf08  li 4, 0
  04ecf0c  li 5, 1
  04ecf10  li 6, 16
  04ecf14  ori 7, 27, 0
  04ecf18  bl 0x4f0f10
  04ecf1c  nop
  04ecf20  ori 3, 31, 0
  04ecf24  li 4, 1
  04ecf28  li 5, 1
  04ecf2c  ori 6, 26, 0
  04ecf30  li 7, 2
  04ecf34  bl 0x4f0f10
  04ecf38  nop
  04ecf3c  ori 3, 31, 0
  04ecf40  li 4, 2
  04ecf44  li 5, 1
  04ecf48  ori 6, 17, 0
  04ecf4c  ori 7, 18, 0
  04ecf50  bl 0x4f0f10
  04ecf54  nop
  04ecf58  ori 3, 31, 0
  04ecf5c  li 4, 3
  04ecf60  li 5, 1
  04ecf64  ori 6, 15, 0
  04ecf68  ori 7, 16, 0
  04ecf6c  bl 0x4f0f10
  04ecf70  nop
  04ecf74  ori 3, 31, 0
  04ecf78  li 4, 0
  04ecf7c  li 5, 0
  04ecf80  ori 6, 21, 0
  04ecf84  li 7, 0
  04ecf88  bl 0x4f12bc
  04ecf8c  nop
  04ecf90  ori 3, 31, 0
  04ecf94  li 4, 1
  04ecf98  li 5, 0
  04ecf9c  ori 6, 14, 0
  04ecfa0  li 7, 1872
  04ecfa4  li 8, 0
  04ecfa8  bl 0x4f1018
  04ecfac  nop
  04ecfb0  ori 3, 31, 0
  04ecfb4  li 4, 2
  04ecfb8  li 5, 0
  04ecfbc  ori 6, 22, 0
  04ecfc0  ori 7, 29, 0
  04ecfc4  li 8, 0
  04ecfc8  bl 0x4f1018
  04ecfcc  nop
  04ecfd0  ori 3, 31, 0
  04ecfd4  li 4, 3
  04ecfd8  li 5, 0
  04ecfdc  li 6, 0
  04ecfe0  li 7, 0
  04ecfe4  li 8, 0
  04ecfe8  bl 0x4f1074
  04ecfec  nop
  04ecff0  ori 3, 31, 0
  04ecff4  li 4, 15
  04ecff8  bl 0x4f10c8
  04ecffc  nop
  04ed000  ori 3, 31, 0
  04ed004  li 4, 0
  04ed008  li 5, 0
  04ed00c  bl 0x4f1198
  04ed010  nop
  04ed014  ori 3, 31, 0
  04ed018  addic 4, 1, 112
  04ed01c  li 5, 32
  04ed020  bl 0x4f121c
  04ed024  nop
  04ed028  addic 3, 1, 144
  04ed02c  ori 4, 31, 0
  04ed030  bl 0x4f1144
  04ed034  nop
  04ed038  lwz 3, 0(28)
  04ed03c  ld 6, 144(1)
  04ed040  lis 5, 72
  04ed044  slwi 4, 3, 2
  04ed048  slwi 3, 3, 9
  04ed04c  addc 4, 4, 20
  04ed050  addc 3, 3, 28
  04ed054  clrldi 4, 4, 32
  04ed058  ori 5, 5, 2136
  04ed05c  sldi 7, 30, 6
  04ed060  sldi 8, 30, 4
  04ed064  lwz 4, 0(4)
  04ed068  addic 23, 23, 1
  04ed06c  slwi 4, 4, 4
  04ed070  addc 3, 3, 4
  04ed074  lis 4, 345
  04ed078  clrldi 3, 3, 32
  04ed07c  addc 3, 3, 5
  04ed080  cmplw 23, 25
  04ed084  subc 24, 24, 30
  04ed088  std 6, 0(3)
  04ed08c  lwz 3, 0(28)
  04ed090  lis 6, 72
  04ed094  lbz 4, 9088(4)
  04ed098  slwi 5, 3, 2
  04ed09c  slwi 3, 3, 9
  04ed0a0  addc 5, 5, 20
  04ed0a4  addc 3, 3, 28
  04ed0a8  clrldi 5, 5, 32
  04ed0ac  ori 6, 6, 2144
  04ed0b0  lwz 9, 0(5)
  04ed0b4  slwi 10, 9, 4
  04ed0b8  addic 9, 9, 1
  04ed0bc  addc 3, 3, 10
  04ed0c0  clrldi 3, 3, 32
  04ed0c4  stw 9, 0(5)
  04ed0c8  addc 3, 3, 6
  04ed0cc  addc 5, 7, 8
  04ed0d0  addc 22, 22, 5
  04ed0d4  stb 4, 0(3)
  04ed0d8  clrldi 22, 22, 32
  04ed0dc  ld 18, 176(1)
  04ed0e0  ld 15, 184(1)
  04ed0e4  ld 16, 192(1)
  04ed0e8  bt 0, 0x4ece00
  04ed0ec  ld 0, 368(1)
  04ed0f0  mtlr 0
  04ed0f4  ld 14, 208(1)
  04ed0f8  ld 15, 216(1)
  04ed0fc  ld 16, 224(1)
  04ed100  ld 17, 232(1)
  04ed104  ld 18, 240(1)
  04ed108  ld 19, 248(1)
  04ed10c  ld 20, 256(1)
  04ed110  ld 21, 264(1)
  04ed114  ld 22, 272(1)
  04ed118  ld 23, 280(1)
  04ed11c  ld 24, 288(1)
  04ed120  ld 25, 296(1)
  04ed124  ld 26, 304(1)
  04ed128  ld 27, 312(1)
  04ed12c  ld 28, 320(1)
  04ed130  ld 29, 328(1)
  04ed134  ld 30, 336(1)
  04ed138  ld 31, 344(1)
  04ed13c  addi 1, 1, 352
  04ed140  blr

FUN_004ed144:   # 0x4ed144, 0x3e8 bytes
  04ed144  stdu 1, -272(1)
  04ed148  mflr 0
  04ed14c  std 0, 288(1)
  04ed150  std 29, 248(1)
  04ed154  lis 6, 144
  04ed158  std 30, 256(1)
  04ed15c  ori 29, 3, 0
  04ed160  ori 30, 4, 0
  04ed164  std 31, 264(1)
  04ed168  cmpwi 6, 5, 0
  04ed16c  ori 31, 5, 0
  04ed170  lwz 3, -23196(6)
  04ed174  lbz 4, 16(3)
  04ed178  std 28, 240(1)
  04ed17c  std 27, 232(1)
  04ed180  std 26, 224(1)
  04ed184  std 25, 216(1)
  04ed188  std 24, 208(1)
  04ed18c  std 23, 200(1)
  04ed190  std 22, 192(1)
  04ed194  std 21, 184(1)
  04ed198  cmpwi 1, 4, 0
  04ed19c  bt 6, 0x4ed1b0
  04ed1a0  lwz 4, 6764(3)
  04ed1a4  clrlwi 4, 4, 31
  04ed1a8  cmpwi 4, 0
  04ed1ac  bf 2, 0x4ed4f0
  04ed1b0  bf 26, 0x4ed1fc
  04ed1b4  bt 6, 0x4ed1c8
  04ed1b8  lwz 3, 6764(3)
  04ed1bc  clrlwi 3, 3, 31
  04ed1c0  cmpwi 3, 0
  04ed1c4  bf 2, 0x4ed4f0
  04ed1c8  lwz 5, 0(29)
  04ed1cc  lis 3, 72
  04ed1d0  li 4, 0
  04ed1d4  sldi 6, 5, 4
  04ed1d8  sldi 5, 5, 2
  04ed1dc  ori 3, 3, 176
  04ed1e0  addc 5, 6, 5
  04ed1e4  addc 5, 29, 5
  04ed1e8  clrldi 5, 5, 32
  04ed1ec  addc 3, 5, 3
  04ed1f0  lwz 3, 0(3)
  04ed1f4  stw 4, 0(3)
  04ed1f8  b 0x4ed4f0
  04ed1fc  lwz 4, 0(29)
  04ed200  lis 3, 72
  04ed204  slwi 5, 4, 2
  04ed208  ori 28, 3, 3160
  04ed20c  addc 5, 29, 5
  04ed210  slwi 4, 4, 21
  04ed214  clrldi 5, 5, 32
  04ed218  lis 3, 8
  04ed21c  addc 5, 5, 28
  04ed220  addc 4, 29, 4
  04ed224  ori 6, 3, 128
  04ed228  addic 27, 1, 152
  04ed22c  lwz 7, 0(5)
  04ed230  ori 3, 27, 0
  04ed234  slwi 7, 7, 16
  04ed238  lis 5, 1
  04ed23c  addc 4, 4, 7
  04ed240  addc 4, 4, 6
  04ed244  clrldi 4, 4, 32
  04ed248  bl 0x4f0e44
  04ed24c  nop
  04ed250  lis 3, 273
  04ed254  addic 26, 3, 5784
  04ed258  ori 3, 26, 0
  04ed25c  bl 0x4f5308
  04ed260  nop
  04ed264  sldi 4, 31, 6
  04ed268  sldi 6, 31, 4
  04ed26c  lwz 5, 0(29)
  04ed270  ori 25, 3, 0
  04ed274  addc 3, 4, 6
  04ed278  li 7, 0
  04ed27c  clrldi 6, 3, 32
  04ed280  clrlwi 3, 3, 22
  04ed284  addic 4, 25, 16
  04ed288  subc 8, 6, 3
  04ed28c  subc 3, 7, 3
  04ed290  addic 7, 8, 1024
  04ed294  cntlzw 3, 3
  04ed298  clrldi 24, 4, 32
  04ed29c  clrldi 4, 7, 32
  04ed2a0  sldi 3, 3, 58
  04ed2a4  subc 6, 6, 4
  04ed2a8  sradi 3, 3, 63
  04ed2ac  sldi 7, 5, 4
  04ed2b0  and 3, 3, 6
  04ed2b4  sldi 5, 5, 2
  04ed2b8  addc 23, 4, 3
  04ed2bc  addc 3, 7, 5
  04ed2c0  addic 4, 24, 2
  04ed2c4  lis 8, 72
  04ed2c8  addc 3, 29, 3
  04ed2cc  li 6, 2
  04ed2d0  clrldi 21, 4, 32
  04ed2d4  ori 5, 8, 176
  04ed2d8  lis 4, 72
  04ed2dc  clrldi 7, 3, 32
  04ed2e0  ori 4, 4, 136
  04ed2e4  stw 6, 112(1)
  04ed2e8  addc 5, 7, 5
  04ed2ec  stw 31, 116(1)
  04ed2f0  addc 6, 3, 4
  04ed2f4  addc 4, 7, 4
  04ed2f8  srwi 22, 23, 10
  04ed2fc  li 7, 1
  04ed300  lwz 5, 0(5)
  04ed304  addc 8, 21, 22
  04ed308  stw 6, 124(1)
  04ed30c  ori 3, 27, 0
  04ed310  stw 5, 120(1)
  04ed314  clrldi 31, 8, 32
  04ed318  stw 7, 0(4)
  04ed31c  bl 0x4f0e94
  04ed320  nop
  04ed324  ori 3, 27, 0
  04ed328  li 4, 0
  04ed32c  li 5, 1
  04ed330  li 6, 16
  04ed334  ori 7, 25, 0
  04ed338  bl 0x4f0f10
  04ed33c  nop
  04ed340  ori 3, 27, 0
  04ed344  li 4, 1
  04ed348  li 5, 1
  04ed34c  ori 6, 24, 0
  04ed350  li 7, 2
  04ed354  bl 0x4f0f10
  04ed358  nop
  04ed35c  ori 3, 27, 0
  04ed360  li 4, 2
  04ed364  li 5, 1
  04ed368  ori 6, 21, 0
  04ed36c  ori 7, 22, 0
  04ed370  bl 0x4f0f10
  04ed374  nop
  04ed378  ori 3, 27, 0
  04ed37c  li 4, 3
  04ed380  li 5, 1
  04ed384  ori 6, 31, 0
  04ed388  li 7, 80
  04ed38c  bl 0x4f0f10
  04ed390  nop
  04ed394  ori 3, 27, 0
  04ed398  li 4, 0
  04ed39c  li 5, 0
  04ed3a0  ori 6, 26, 0
  04ed3a4  li 7, 0
  04ed3a8  bl 0x4f12bc
  04ed3ac  nop
  04ed3b0  lis 3, 72
  04ed3b4  li 4, 1
  04ed3b8  ori 5, 3, 208
  04ed3bc  ori 3, 27, 0
  04ed3c0  addc 6, 29, 5
  04ed3c4  li 5, 0
  04ed3c8  clrldi 6, 6, 32
  04ed3cc  li 7, 1872
  04ed3d0  li 8, 0
  04ed3d4  bl 0x4f1018
  04ed3d8  nop
  04ed3dc  ori 3, 27, 0
  04ed3e0  li 4, 2
  04ed3e4  li 5, 0
  04ed3e8  ori 6, 30, 0
  04ed3ec  ori 7, 23, 0
  04ed3f0  li 8, 0
  04ed3f4  bl 0x4f1018
  04ed3f8  nop
  04ed3fc  ori 3, 27, 0
  04ed400  li 4, 3
  04ed404  li 5, 0
  04ed408  li 6, 0
  04ed40c  li 7, 0
  04ed410  li 8, 0
  04ed414  bl 0x4f1074
  04ed418  nop
  04ed41c  ori 3, 27, 0
  04ed420  li 4, 15
  04ed424  bl 0x4f10c8
  04ed428  nop
  04ed42c  ori 3, 27, 0
  04ed430  li 4, 0
  04ed434  li 5, 0
  04ed438  bl 0x4f1198
  04ed43c  nop
  04ed440  ori 3, 27, 0
  04ed444  addic 4, 1, 112
  04ed448  li 5, 32
  04ed44c  bl 0x4f121c
  04ed450  nop
  04ed454  addic 3, 1, 144
  04ed458  ori 4, 27, 0
  04ed45c  bl 0x4f1144
  04ed460  nop
  04ed464  lwz 3, 0(29)
  04ed468  ld 6, 144(1)
  04ed46c  lis 5, 72
  04ed470  slwi 4, 3, 2
  04ed474  slwi 3, 3, 9
  04ed478  addc 4, 29, 4
  04ed47c  addc 3, 29, 3
  04ed480  clrldi 4, 4, 32
  04ed484  ori 5, 5, 2136
  04ed488  addc 4, 4, 28
  04ed48c  lwz 4, 0(4)
  04ed490  slwi 4, 4, 4
  04ed494  addc 3, 3, 4
  04ed498  lis 4, 345
  04ed49c  clrldi 3, 3, 32
  04ed4a0  addc 3, 3, 5
  04ed4a4  lis 5, 72
  04ed4a8  ori 5, 5, 2144
  04ed4ac  std 6, 0(3)
  04ed4b0  lwz 3, 0(29)
  04ed4b4  lbz 4, 9091(4)
  04ed4b8  slwi 6, 3, 2
  04ed4bc  slwi 3, 3, 9
  04ed4c0  addc 6, 29, 6
  04ed4c4  addc 3, 29, 3
  04ed4c8  clrldi 6, 6, 32
  04ed4cc  addc 6, 6, 28
  04ed4d0  lwz 7, 0(6)
  04ed4d4  slwi 8, 7, 4
  04ed4d8  addic 7, 7, 1
  04ed4dc  addc 3, 3, 8
  04ed4e0  clrldi 3, 3, 32
  04ed4e4  stw 7, 0(6)
  04ed4e8  addc 3, 3, 5
  04ed4ec  stb 4, 0(3)
  04ed4f0  ld 0, 288(1)
  04ed4f4  mtlr 0
  04ed4f8  ld 21, 184(1)
  04ed4fc  ld 22, 192(1)
  04ed500  ld 23, 200(1)
  04ed504  ld 24, 208(1)
  04ed508  ld 25, 216(1)
  04ed50c  ld 26, 224(1)
  04ed510  ld 27, 232(1)
  04ed514  ld 28, 240(1)
  04ed518  ld 29, 248(1)
  04ed51c  ld 30, 256(1)
  04ed520  ld 31, 264(1)
  04ed524  addi 1, 1, 272
  04ed528  blr

FUN_004ed52c:   # 0x4ed52c, 0x53c bytes
  04ed52c  stdu 1, -384(1)
  04ed530  mflr 0
  04ed534  std 0, 400(1)
  04ed538  std 18, 272(1)
  04ed53c  lis 6, 144
  04ed540  ori 18, 3, 0
  04ed544  std 31, 376(1)
  04ed548  cmpwi 6, 5, 0
  04ed54c  ori 31, 5, 0
  04ed550  lwz 3, -23196(6)
  04ed554  std 4, 176(1)
  04ed558  lbz 4, 16(3)
  04ed55c  std 30, 368(1)
  04ed560  std 29, 360(1)
  04ed564  std 28, 352(1)
  04ed568  std 27, 344(1)
  04ed56c  std 26, 336(1)
  04ed570  std 25, 328(1)
  04ed574  std 24, 320(1)
  04ed578  std 23, 312(1)
  04ed57c  std 22, 304(1)
  04ed580  std 21, 296(1)
  04ed584  std 20, 288(1)
  04ed588  std 19, 280(1)
  04ed58c  std 17, 264(1)
  04ed590  std 16, 256(1)
  04ed594  std 15, 248(1)
  04ed598  std 14, 240(1)
  04ed59c  cmpwi 1, 4, 0
  04ed5a0  bt 6, 0x4ed5b4
  04ed5a4  lwz 4, 6764(3)
  04ed5a8  clrlwi 4, 4, 31
  04ed5ac  cmpwi 4, 0
  04ed5b0  bf 2, 0x4eda10
  04ed5b4  bf 26, 0x4ed600
  04ed5b8  bt 6, 0x4ed5cc
  04ed5bc  lwz 3, 6764(3)
  04ed5c0  clrlwi 3, 3, 31
  04ed5c4  cmpwi 3, 0
  04ed5c8  bf 2, 0x4eda10
  04ed5cc  lwz 5, 0(18)
  04ed5d0  lis 3, 72
  04ed5d4  li 4, 0
  04ed5d8  sldi 6, 5, 4
  04ed5dc  sldi 5, 5, 2
  04ed5e0  ori 3, 3, 180
  04ed5e4  addc 5, 6, 5
  04ed5e8  addc 5, 18, 5
  04ed5ec  clrldi 5, 5, 32
  04ed5f0  addc 3, 5, 3
  04ed5f4  lwz 3, 0(3)
  04ed5f8  stw 4, 0(3)
  04ed5fc  b 0x4eda10
  04ed600  lis 3, 273
  04ed604  std 31, 224(1)
  04ed608  addic 30, 3, 5776
  04ed60c  ori 3, 30, 0
  04ed610  bl 0x4f5308
  04ed614  nop
  04ed618  li 4, 4
  04ed61c  li 5, 5
  04ed620  lwz 7, 0(18)
  04ed624  subc 4, 4, 31
  04ed628  std 3, 216(1)
  04ed62c  li 6, 1
  04ed630  sradi 4, 4, 63
  04ed634  subc 5, 5, 6
  04ed638  lis 8, 72
  04ed63c  and 4, 4, 5
  04ed640  sldi 5, 7, 4
  04ed644  addc 6, 6, 4
  04ed648  sldi 7, 7, 2
  04ed64c  divwu 9, 31, 6
  04ed650  addic 4, 3, 16
  04ed654  addc 3, 5, 7
  04ed658  std 6, 184(1)
  04ed65c  ori 5, 8, 140
  04ed660  std 30, 200(1)
  04ed664  addc 7, 18, 3
  04ed668  ori 3, 9, 0
  04ed66c  clrldi 7, 7, 32
  04ed670  cmpwi 6, 0
  04ed674  addc 5, 7, 5
  04ed678  clrldi 4, 4, 32
  04ed67c  ori 22, 31, 0
  04ed680  mullw 21, 3, 6
  04ed684  li 19, 0
  04ed688  stw 6, 0(5)
  04ed68c  bt 2, 0x4eda10
  04ed690  stw 4, 208(1)
  04ed694  addic 14, 3, 1
  04ed698  stw 3, 192(1)
  04ed69c  addic 20, 4, 2
  04ed6a0  lis 3, 72
  04ed6a4  lis 4, 72
  04ed6a8  ori 16, 3, 140
  04ed6ac  lis 5, 72
  04ed6b0  lis 6, 72
  04ed6b4  ori 3, 4, 208
  04ed6b8  ori 23, 5, 3160
  04ed6bc  ori 15, 6, 180
  04ed6c0  addc 17, 18, 3
  04ed6c4  addc 23, 18, 23
  04ed6c8  clrldi 20, 20, 32
  04ed6cc  addc 15, 18, 15
  04ed6d0  addc 16, 18, 16
  04ed6d4  clrldi 17, 17, 32
  04ed6d8  lwz 4, 0(18)
  04ed6dc  lis 3, 8
  04ed6e0  slwi 5, 4, 2
  04ed6e4  ori 7, 3, 128
  04ed6e8  addc 5, 5, 23
  04ed6ec  slwi 4, 4, 21
  04ed6f0  clrldi 6, 5, 32
  04ed6f4  addc 4, 4, 18
  04ed6f8  addic 31, 1, 152
  04ed6fc  lis 5, 1
  04ed700  lwz 3, 0(6)
  04ed704  slwi 3, 3, 16
  04ed708  addc 4, 4, 3
  04ed70c  ori 3, 31, 0
  04ed710  addc 4, 4, 7
  04ed714  clrldi 4, 4, 32
  04ed718  bl 0x4f0e44
  04ed71c  nop
  04ed720  ld 3, 224(1)
  04ed724  clrldi 30, 21, 32
  04ed728  lwz 4, 192(1)
  04ed72c  clrldi 29, 3, 32
  04ed730  subc 3, 14, 4
  04ed734  subc 5, 30, 29
  04ed738  clrldi 6, 22, 32
  04ed73c  sradi 5, 5, 63
  04ed740  and 3, 5, 3
  04ed744  addc 3, 4, 3
  04ed748  clrldi 4, 3, 32
  04ed74c  subc 5, 22, 3
  04ed750  subc 4, 6, 4
  04ed754  lwz 6, 0(18)
  04ed758  sradi 4, 4, 63
  04ed75c  and 4, 4, 5
  04ed760  std 16, 232(1)
  04ed764  li 5, 0
  04ed768  addc 28, 3, 4
  04ed76c  addc 3, 28, 28
  04ed770  sldi 4, 28, 7
  04ed774  addc 3, 28, 3
  04ed778  stw 28, 116(1)
  04ed77c  sldi 3, 3, 4
  04ed780  addc 3, 4, 3
  04ed784  clrldi 4, 3, 32
  04ed788  clrlwi 3, 3, 22
  04ed78c  addic 27, 21, 1
  04ed790  subc 7, 4, 3
  04ed794  subc 3, 5, 3
  04ed798  addic 5, 7, 1024
  04ed79c  cntlzw 3, 3
  04ed7a0  clrldi 5, 5, 32
  04ed7a4  sldi 3, 3, 58
  04ed7a8  subc 4, 4, 5
  04ed7ac  sradi 3, 3, 63
  04ed7b0  li 7, 248
  04ed7b4  and 3, 3, 4
  04ed7b8  sldi 4, 6, 4
  04ed7bc  addc 26, 5, 3
  04ed7c0  sldi 3, 6, 2
  04ed7c4  srwi 25, 26, 10
  04ed7c8  addc 3, 4, 3
  04ed7cc  addc 4, 25, 20
  04ed7d0  addc 5, 3, 15
  04ed7d4  clrldi 24, 4, 32
  04ed7d8  li 4, 3
  04ed7dc  subc 6, 7, 24
  04ed7e0  addc 7, 3, 16
  04ed7e4  clrldi 5, 5, 32
  04ed7e8  stw 4, 112(1)
  04ed7ec  clrldi 16, 6, 32
  04ed7f0  stw 7, 124(1)
  04ed7f4  ori 3, 31, 0
  04ed7f8  lwz 4, 0(5)
  04ed7fc  stw 4, 120(1)
  04ed800  bl 0x4f0e94
  04ed804  nop
  04ed808  ld 7, 216(1)
  04ed80c  ori 3, 31, 0
  04ed810  li 4, 0
  04ed814  li 5, 1
  04ed818  li 6, 16
  04ed81c  bl 0x4f0f10
  04ed820  nop
  04ed824  lwz 6, 208(1)
  04ed828  ori 3, 31, 0
  04ed82c  li 4, 1
  04ed830  li 5, 1
  04ed834  li 7, 2
  04ed838  bl 0x4f0f10
  04ed83c  nop
  04ed840  ori 3, 31, 0
  04ed844  li 4, 2
  04ed848  li 5, 1
  04ed84c  ori 6, 20, 0
  04ed850  ori 7, 25, 0
  04ed854  bl 0x4f0f10
  04ed858  nop
  04ed85c  ori 3, 31, 0
  04ed860  li 4, 3
  04ed864  li 5, 1
  04ed868  ori 6, 24, 0
  04ed86c  ori 7, 16, 0
  04ed870  bl 0x4f0f10
  04ed874  nop
  04ed878  ld 6, 200(1)
  04ed87c  ori 3, 31, 0
  04ed880  li 4, 0
  04ed884  li 5, 0
  04ed888  li 7, 0
  04ed88c  bl 0x4f12bc
  04ed890  nop
  04ed894  ori 3, 31, 0
  04ed898  li 4, 1
  04ed89c  li 5, 0
  04ed8a0  ori 6, 17, 0
  04ed8a4  li 7, 1872
  04ed8a8  li 8, 0
  04ed8ac  bl 0x4f1018
  04ed8b0  nop
  04ed8b4  ld 25, 176(1)
  04ed8b8  ori 3, 31, 0
  04ed8bc  li 4, 2
  04ed8c0  li 5, 0
  04ed8c4  ori 6, 25, 0
  04ed8c8  ori 7, 26, 0
  04ed8cc  li 8, 0
  04ed8d0  bl 0x4f1018
  04ed8d4  nop
  04ed8d8  ori 3, 31, 0
  04ed8dc  li 4, 3
  04ed8e0  li 5, 0
  04ed8e4  li 6, 0
  04ed8e8  li 7, 0
  04ed8ec  li 8, 0
  04ed8f0  bl 0x4f1074
  04ed8f4  nop
  04ed8f8  ori 3, 31, 0
  04ed8fc  li 4, 15
  04ed900  bl 0x4f10c8
  04ed904  nop
  04ed908  ori 3, 31, 0
  04ed90c  li 4, 0
  04ed910  li 5, 0
  04ed914  bl 0x4f1198
  04ed918  nop
  04ed91c  ori 3, 31, 0
  04ed920  addic 4, 1, 112
  04ed924  li 5, 32
  04ed928  bl 0x4f121c
  04ed92c  nop
  04ed930  addic 3, 1, 144
  04ed934  ori 4, 31, 0
  04ed938  bl 0x4f1144
  04ed93c  nop
  04ed940  lwz 3, 0(18)
  04ed944  ld 6, 144(1)
  04ed948  lis 5, 72
  04ed94c  slwi 4, 3, 2
  04ed950  slwi 3, 3, 9
  04ed954  addc 4, 4, 23
  04ed958  addc 3, 3, 18
  04ed95c  clrldi 4, 4, 32
  04ed960  ori 5, 5, 2136
  04ed964  lis 7, 72
  04ed968  sldi 8, 28, 7
  04ed96c  lwz 4, 0(4)
  04ed970  ori 7, 7, 2144
  04ed974  slwi 4, 4, 4
  04ed978  addc 3, 3, 4
  04ed97c  lis 4, 345
  04ed980  clrldi 3, 3, 32
  04ed984  addc 3, 3, 5
  04ed988  addc 5, 28, 28
  04ed98c  addic 19, 19, 1
  04ed990  addc 5, 28, 5
  04ed994  std 6, 0(3)
  04ed998  sldi 5, 5, 4
  04ed99c  lwz 3, 0(18)
  04ed9a0  subc 22, 22, 28
  04ed9a4  lbz 4, 9090(4)
  04ed9a8  addc 5, 8, 5
  04ed9ac  slwi 6, 3, 2
  04ed9b0  slwi 3, 3, 9
  04ed9b4  addc 6, 6, 23
  04ed9b8  addc 3, 3, 18
  04ed9bc  clrldi 6, 6, 32
  04ed9c0  addc 5, 25, 5
  04ed9c4  lwz 9, 0(6)
  04ed9c8  slwi 10, 9, 4
  04ed9cc  addic 9, 9, 1
  04ed9d0  addc 3, 3, 10
  04ed9d4  clrldi 3, 3, 32
  04ed9d8  stw 9, 0(6)
  04ed9dc  addc 3, 3, 7
  04ed9e0  subc 6, 30, 29
  04ed9e4  stb 4, 0(3)
  04ed9e8  clrldi 3, 5, 32
  04ed9ec  subc 4, 27, 21
  04ed9f0  sradi 5, 6, 63
  04ed9f4  ld 6, 184(1)
  04ed9f8  and 4, 5, 4
  04ed9fc  cmplw 19, 6
  04eda00  std 3, 176(1)
  04eda04  addc 21, 21, 4
  04eda08  ld 16, 232(1)
  04eda0c  bt 0, 0x4ed6d8
  04eda10  ld 0, 400(1)
  04eda14  mtlr 0
  04eda18  ld 14, 240(1)
  04eda1c  ld 15, 248(1)
  04eda20  ld 16, 256(1)
  04eda24  ld 17, 264(1)
  04eda28  ld 18, 272(1)
  04eda2c  ld 19, 280(1)
  04eda30  ld 20, 288(1)
  04eda34  ld 21, 296(1)
  04eda38  ld 22, 304(1)
  04eda3c  ld 23, 312(1)
  04eda40  ld 24, 320(1)
  04eda44  ld 25, 328(1)
  04eda48  ld 26, 336(1)
  04eda4c  ld 27, 344(1)
  04eda50  ld 28, 352(1)
  04eda54  ld 29, 360(1)
  04eda58  ld 30, 368(1)
  04eda5c  ld 31, 376(1)
  04eda60  addi 1, 1, 384
  04eda64  blr

idol_draw::Insert_WaitCmd_Marker:   # 0x4eda68, 0x200 bytes
  04eda68  stdu 1, -144(1)
  04eda6c  mflr 0
  04eda70  std 0, 160(1)
  04eda74  std 30, 128(1)
  04eda78  std 29, 120(1)
  04eda7c  lis 6, 144
  04eda80  ori 29, 3, 0
  04eda84  std 31, 136(1)
  04eda88  ori 30, 4, 0
  04eda8c  ori 31, 5, 0
  04eda90  lwz 3, -23196(6)
  04eda94  lbz 4, 16(3)
  04eda98  std 28, 112(1)
  04eda9c  cmpwi 4, 0
  04edaa0  bt 2, 0x4edab4
  04edaa4  lwz 3, 6764(3)
  04edaa8  clrlwi 3, 3, 31
  04edaac  cmpwi 3, 0
  04edab0  bf 2, 0x4edc48
  04edab4  lwz 3, 0(29)
  04edab8  sldi 4, 3, 2
  04edabc  addc 3, 3, 4
  04edac0  addc 28, 31, 3
  04edac4  addic 28, 28, 64
  04edac8  clrlwi 3, 28, 24
  04edacc  cmpwi 3, 72
  04edad0  cmpwi 1, 3, 71
  04edad4  cmpwi 6, 3, 70
  04edad8  cmpwi 7, 3, 69
  04edadc  bt 2, 0x4edb54
  04edae0  bt 6, 0x4edb3c
  04edae4  bt 26, 0x4edb24
  04edae8  bt 30, 0x4edb0c
  04edaec  cmpwi 3, 67
  04edaf0  bt 2, 0x4edb54
  04edaf4  cmpwi 3, 66
  04edaf8  bt 2, 0x4edb3c
  04edafc  cmpwi 3, 65
  04edb00  bt 2, 0x4edb24
  04edb04  cmpwi 3, 64
  04edb08  bf 2, 0x4edb6c
  04edb0c  lis 4, 102
  04edb10  ori 3, 30, 0
  04edb14  addic 4, 4, -21784
  04edb18  bl 0x50eaf8
  04edb1c  nop
  04edb20  b 0x4edba0
  04edb24  lis 4, 102
  04edb28  ori 3, 30, 0
  04edb2c  addic 4, 4, -21768
  04edb30  bl 0x50eaf8
  04edb34  nop
  04edb38  b 0x4edba0
  04edb3c  lis 4, 102
  04edb40  ori 3, 30, 0
  04edb44  addic 4, 4, -21760
  04edb48  bl 0x50eaf8
  04edb4c  nop
  04edb50  b 0x4edba0
  04edb54  lis 4, 102
  04edb58  ori 3, 30, 0
  04edb5c  addic 4, 4, -21744
  04edb60  bl 0x50eaf8
  04edb64  nop
  04edb68  b 0x4edba0
  04edb6c  li 3, 0
  04edb70  cmpwi 3, 0
  04edb74  bf 2, 0x4edba0
  04edb78  lis 3, 102
  04edb7c  lis 4, 102
  04edb80  lis 6, 102
  04edb84  li 5, 530
  04edb88  addic 3, 3, -21728
  04edb8c  addic 4, 4, -21696
  04edb90  addic 6, 6, -21632
  04edb94  bl 0x4ff6d0
  04edb98  nop
  04edb9c  trap
  04edba0  lis 3, 144
  04edba4  lwz 3, -23196(3)
  04edba8  lwz 4, 240(30)
  04edbac  extsw 4, 4
  04edbb0  bl 0x4e3114
  04edbb4  nop
  04edbb8  lis 3, 4
  04edbbc  lwz 4, 8(30)
  04edbc0  rlwinm 5, 28, 4, 20, 27
  04edbc4  ori 3, 3, 100
  04edbc8  li 6, 1
  04edbcc  stw 3, 0(4)
  04edbd0  lwz 3, 8(30)
  04edbd4  lis 4, 4
  04edbd8  ori 4, 4, 104
  04edbdc  stw 5, 4(3)
  04edbe0  lwz 3, 8(30)
  04edbe4  addic 5, 3, 8
  04edbe8  stw 5, 8(30)
  04edbec  stw 4, 8(3)
  04edbf0  lwz 8, 8(30)
  04edbf4  li 5, 0
  04edbf8  sldi 4, 31, 2
  04edbfc  lis 3, 72
  04edc00  ori 7, 3, 168
  04edc04  stw 5, 4(8)
  04edc08  lwz 5, 0(29)
  04edc0c  ori 3, 30, 0
  04edc10  lwz 9, 8(30)
  04edc14  sldi 8, 5, 4
  04edc18  sldi 5, 5, 2
  04edc1c  addc 5, 8, 5
  04edc20  addic 8, 9, 8
  04edc24  addc 5, 29, 5
  04edc28  addc 4, 5, 4
  04edc2c  stw 8, 8(30)
  04edc30  clrldi 4, 4, 32
  04edc34  addc 4, 4, 7
  04edc38  lwz 4, 0(4)
  04edc3c  stw 6, 0(4)
  04edc40  bl 0x50ec5c
  04edc44  nop
  04edc48  ld 0, 160(1)
  04edc4c  mtlr 0
  04edc50  ld 28, 112(1)
  04edc54  ld 29, 120(1)
  04edc58  ld 30, 128(1)
  04edc5c  ld 31, 136(1)
  04edc60  addi 1, 1, 144
  04edc64  blr

FUN_004edc68:   # 0x4edc68, 0x64 bytes
  04edc68  lis 5, 4
  04edc6c  lwz 7, 8(4)
  04edc70  li 6, 1088
  04edc74  ori 5, 5, 100
  04edc78  lis 8, 72
  04edc7c  stw 5, 0(7)
  04edc80  lwz 5, 8(4)
  04edc84  lis 7, 4
  04edc88  stw 6, 4(5)
  04edc8c  lwz 5, 8(4)
  04edc90  addic 6, 5, 8
  04edc94  stw 6, 8(4)
  04edc98  ori 6, 7, 104
  04edc9c  li 7, 0
  04edca0  stw 6, 8(5)
  04edca4  ori 5, 8, 184
  04edca8  lwz 8, 8(4)
  04edcac  li 6, 1
  04edcb0  stw 7, 4(8)
  04edcb4  lwz 7, 8(4)
  04edcb8  addic 7, 7, 8
  04edcbc  stw 7, 8(4)
  04edcc0  lwzx 3, 3, 5
  04edcc4  stw 6, 0(3)
  04edcc8  blr

FUN_004edccc:   # 0x4edccc, 0x18 bytes
  04edccc  lis 4, 72
  04edcd0  li 5, 0
  04edcd4  ori 4, 4, 184
  04edcd8  lwzx 3, 3, 4
  04edcdc  stw 5, 0(3)
  04edce0  blr

FUN_004edce4:   # 0x4edce4, 0x18 bytes
  04edce4  lis 5, 72
  04edce8  ori 5, 5, 3168
  04edcec  lwzx 6, 3, 5
  04edcf0  addc 4, 6, 4
  04edcf4  stwx 4, 3, 5
  04edcf8  blr

FUN_004edcfc:   # 0x4edcfc, 0x34 bytes
  04edcfc  stdu 1, -112(1)
  04edd00  mflr 0
  04edd04  std 0, 128(1)
  04edd08  lis 4, 72
  04edd0c  ori 4, 4, 2080
  04edd10  addc 3, 3, 4
  04edd14  clrldi 3, 3, 32
  04edd18  bl 0x4f4ac8
  04edd1c  nop
  04edd20  ld 0, 128(1)
  04edd24  mtlr 0
  04edd28  addi 1, 1, 112
  04edd2c  blr

FUN_004edd30:   # 0x4edd30, 0x94 bytes
  04edd30  stdu 1, -128(1)
  04edd34  mflr 0
  04edd38  std 0, 144(1)
  04edd3c  std 31, 120(1)
  04edd40  lis 4, 72
  04edd44  ori 31, 3, 0
  04edd48  ori 3, 4, 2080
  04edd4c  addc 3, 31, 3
  04edd50  clrldi 3, 3, 32
  04edd54  bl 0x4f4ac8
  04edd58  nop
  04edd5c  li 5, 5
  04edd60  li 3, 0
  04edd64  ori 4, 31, 0
  04edd68  mtctr 5
  04edd6c  lis 5, 72
  04edd70  lis 6, 72
  04edd74  ori 5, 5, 168
  04edd78  ori 6, 6, 188
  04edd7c  addc 5, 4, 5
  04edd80  addc 6, 4, 6
  04edd84  addic 4, 4, 4
  04edd88  lwz 5, 0(5)
  04edd8c  lwz 6, 0(6)
  04edd90  stw 3, 0(5)
  04edd94  stw 3, 0(6)
  04edd98  bdnz 0x4edd6c
  04edd9c  lis 3, 72
  04edda0  ori 3, 3, 3168
  04edda4  lwzx 4, 31, 3
  04edda8  addic 4, 4, -1
  04eddac  stwx 4, 31, 3
  04eddb0  ld 0, 144(1)
  04eddb4  mtlr 0
  04eddb8  ld 31, 120(1)
  04eddbc  addi 1, 1, 128
  04eddc0  blr

idol_draw::Spurs_FlushAndSwapQueue:   # 0x4eddc4, 0x270 bytes
  04eddc4  stdu 1, -176(1)
  04eddc8  mflr 0
  04eddcc  std 0, 192(1)
  04eddd0  std 31, 168(1)
  04eddd4  lis 4, 144
  04eddd8  ori 31, 3, 0
  04edddc  lwz 3, -23196(4)
  04edde0  lbz 4, 16(3)
  04edde4  std 30, 160(1)
  04edde8  std 29, 152(1)
  04eddec  std 28, 144(1)
  04eddf0  std 27, 136(1)
  04eddf4  std 26, 128(1)
  04eddf8  cmpwi 4, 0
  04eddfc  bt 2, 0x4ede10
  04ede00  lwz 3, 6764(3)
  04ede04  clrlwi 3, 3, 31
  04ede08  cmpwi 3, 0
  04ede0c  bf 2, 0x4ee00c
  04ede10  lis 3, 72
  04ede14  ori 3, 3, 3168
  04ede18  lwzx 3, 31, 3
  04ede1c  cmpwi 3, 0
  04ede20  bt 2, 0x4ede90
  04ede24  lis 3, 72
  04ede28  ori 3, 3, 2080
  04ede2c  addc 3, 31, 3
  04ede30  clrldi 3, 3, 32
  04ede34  bl 0x4f4ac8
  04ede38  nop
  04ede3c  li 5, 5
  04ede40  li 3, 0
  04ede44  ori 4, 31, 0
  04ede48  mtctr 5
  04ede4c  lis 5, 72
  04ede50  lis 6, 72
  04ede54  ori 5, 5, 168
  04ede58  ori 6, 6, 188
  04ede5c  addc 5, 4, 5
  04ede60  addc 6, 4, 6
  04ede64  addic 4, 4, 4
  04ede68  lwz 5, 0(5)
  04ede6c  stw 3, 0(5)
  04ede70  lwz 5, 0(6)
  04ede74  stw 3, 0(5)
  04ede78  bdnz 0x4ede4c
  04ede7c  lis 3, 72
  04ede80  ori 3, 3, 3168
  04ede84  lwzx 4, 31, 3
  04ede88  addic 4, 4, -1
  04ede8c  stwx 4, 31, 3
  04ede90  lis 3, 72
  04ede94  ori 3, 3, 2080
  04ede98  addc 29, 31, 3
  04ede9c  clrldi 29, 29, 32
  04edea0  ori 3, 29, 0
  04edea4  bl 0x4f4ac8
  04edea8  nop
  04edeac  ori 3, 29, 0
  04edeb0  bl 0x4f3bbc
  04edeb4  nop
  04edeb8  lis 3, 72
  04edebc  ori 26, 3, 3160
  04edec0  addc 26, 31, 26
  04edec4  cmpwi 26, 0
  04edec8  bt 2, 0x4edfdc
  04edecc  lis 3, 72
  04eded0  li 28, 0
  04eded4  ori 4, 3, 3160
  04eded8  lwz 3, 0(31)
  04ededc  ori 27, 28, 0
  04edee0  slwi 5, 3, 2
  04edee4  addc 5, 31, 5
  04edee8  clrldi 5, 5, 32
  04edeec  addc 4, 5, 4
  04edef0  lwz 4, 0(4)
  04edef4  cmpwi 4, 0
  04edef8  bt 2, 0x4edfc8
  04edefc  ori 30, 28, 0
  04edf00  slwi 3, 3, 9
  04edf04  lis 4, 72
  04edf08  addc 3, 3, 31
  04edf0c  ori 4, 4, 2144
  04edf10  addc 3, 3, 30
  04edf14  lis 5, 72
  04edf18  clrldi 3, 3, 32
  04edf1c  ori 5, 5, 2136
  04edf20  addc 4, 3, 4
  04edf24  addc 3, 3, 5
  04edf28  lbz 4, 0(4)
  04edf2c  cmpwi 4, 0
  04edf30  bt 2, 0x4edf5c
  04edf34  ori 5, 3, 0
  04edf38  addic 3, 1, 112
  04edf3c  ori 4, 29, 0
  04edf40  ld 5, 0(5)
  04edf44  std 5, 64(1)
  04edf48  ld 5, 64(1)
  04edf4c  bl 0x4f3f2c
  04edf50  nop
  04edf54  li 27, 1
  04edf58  b 0x4edf7c
  04edf5c  ori 5, 3, 0
  04edf60  addic 3, 1, 120
  04edf64  ori 4, 29, 0
  04edf68  ld 5, 0(5)
  04edf6c  std 5, 64(1)
  04edf70  ld 5, 64(1)
  04edf74  bl 0x4f3f80
  04edf78  nop
  04edf7c  lwz 3, 0(31)
  04edf80  addic 28, 28, 1
  04edf84  addic 30, 30, 16
  04edf88  slwi 4, 3, 2
  04edf8c  addc 4, 4, 26
  04edf90  clrldi 4, 4, 32
  04edf94  lwz 4, 0(4)
  04edf98  cmplw 28, 4
  04edf9c  bt 0, 0x4edf00
  04edfa0  cmpwi 27, 0
  04edfa4  bt 2, 0x4edfc8
  04edfa8  ori 3, 29, 0
  04edfac  li 4, 1
  04edfb0  bl 0x4f1bb8
  04edfb4  nop
  04edfb8  ori 3, 29, 0
  04edfbc  bl 0x4f4ac8
  04edfc0  nop
  04edfc4  b 0x4edfdc
  04edfc8  lis 4, 144
  04edfcc  ori 3, 29, 0
  04edfd0  lwz 4, -23000(4)
  04edfd4  bl 0x4f1bb8
  04edfd8  nop
  04edfdc  li 3, 1
  04edfe0  lwz 6, 0(31)
  04edfe4  lis 4, 72
  04edfe8  subc 3, 3, 6
  04edfec  ori 4, 4, 3160
  04edff0  slwi 6, 3, 2
  04edff4  li 5, 0
  04edff8  addc 6, 31, 6
  04edffc  stw 3, 0(31)
  04ee000  clrldi 3, 6, 32
  04ee004  addc 3, 3, 4
  04ee008  stw 5, 0(3)
  04ee00c  ld 0, 192(1)
  04ee010  mtlr 0
  04ee014  ld 26, 128(1)
  04ee018  ld 27, 136(1)
  04ee01c  ld 28, 144(1)
  04ee020  ld 29, 152(1)
  04ee024  ld 30, 160(1)
  04ee028  ld 31, 168(1)
  04ee02c  addi 1, 1, 176
  04ee030  blr

FUN_004ee034:   # 0x4ee034, 0x6c bytes
  04ee034  stdu 1, -112(1)
  04ee038  mflr 0
  04ee03c  std 0, 128(1)
  04ee040  lis 3, 273
  04ee044  li 4, 2
  04ee048  addic 3, 3, 5784
  04ee04c  bl 0x4f539c
  04ee050  nop
  04ee054  lis 3, 273
  04ee058  li 4, 2
  04ee05c  addic 3, 3, 5776
  04ee060  bl 0x4f539c
  04ee064  nop
  04ee068  lis 3, 273
  04ee06c  li 4, 2
  04ee070  addic 3, 3, 5768
  04ee074  bl 0x4f539c
  04ee078  nop
  04ee07c  lis 3, 273
  04ee080  li 4, 2
  04ee084  addic 3, 3, 5760
  04ee088  bl 0x4f539c
  04ee08c  nop
  04ee090  ld 0, 128(1)
  04ee094  mtlr 0
  04ee098  addi 1, 1, 112
  04ee09c  blr

FUN_004ee0a8:   # 0x4ee0a8, 0x138 bytes
  04ee0a8  stdu 1, -128(1)
  04ee0ac  mflr 0
  04ee0b0  std 0, 144(1)
  04ee0b4  lis 3, 79
  04ee0b8  std 31, 120(1)
  04ee0bc  lis 4, 273
  04ee0c0  addi 31, 3, -8032
  04ee0c4  lis 5, 145
  04ee0c8  addic 3, 4, 5760
  04ee0cc  lis 6, 0
  04ee0d0  addic 4, 5, -24192
  04ee0d4  lis 7, 102
  04ee0d8  addic 5, 6, 5776
  04ee0dc  addic 6, 7, -21628
  04ee0e0  bl 0x4f5898
  04ee0e4  nop
  04ee0e8  lis 3, 273
  04ee0ec  lis 4, 145
  04ee0f0  lis 5, 0
  04ee0f4  lis 6, 102
  04ee0f8  addic 3, 3, 5768
  04ee0fc  addic 4, 4, -18304
  04ee100  addic 5, 5, 7696
  04ee104  addic 6, 6, -21612
  04ee108  bl 0x4f5898
  04ee10c  nop
  04ee110  lis 3, 273
  04ee114  lis 4, 144
  04ee118  lis 5, 0
  04ee11c  lis 6, 102
  04ee120  addic 3, 3, 5776
  04ee124  addic 4, 4, 28800
  04ee128  addic 5, 5, 12432
  04ee12c  addic 6, 6, -21596
  04ee130  bl 0x4f5898
  04ee134  nop
  04ee138  lis 3, 273
  04ee13c  lis 4, 144
  04ee140  lis 5, 0
  04ee144  lis 6, 102
  04ee148  addic 3, 3, 5784
  04ee14c  addic 4, 4, 22784
  04ee150  addic 5, 5, 5904
  04ee154  addic 6, 6, -21572
  04ee158  bl 0x4f5898
  04ee15c  nop
  04ee160  vspltisw 2, 0
  04ee164  lis 3, 273
  04ee168  li 4, 5792
  04ee16c  lis 5, 273
  04ee170  li 6, 5808
  04ee174  li 7, 4
  04ee178  lis 8, 345
  04ee17c  stvx 2, 4, 3
  04ee180  li 10, 0
  04ee184  lvlx 2, 0, 31
  04ee188  lis 9, 345
  04ee18c  lis 11, 345
  04ee190  vspltw 2, 2, 0
  04ee194  lis 3, 273
  04ee198  li 4, 5824
  04ee19c  stvx 2, 6, 5
  04ee1a0  lis 5, 345
  04ee1a4  lvlx 2, 7, 31
  04ee1a8  li 6, -1
  04ee1ac  lis 7, 345
  04ee1b0  stw 10, 7968(8)
  04ee1b4  vspltw 2, 2, 0
  04ee1b8  stw 10, 7972(5)
  04ee1bc  stw 6, 7976(9)
  04ee1c0  stw 6, 7980(11)
  04ee1c4  stvx 2, 4, 3
  04ee1c8  stw 10, 8000(7)
  04ee1cc  ld 0, 144(1)
  04ee1d0  mtlr 0
  04ee1d4  ld 31, 120(1)
  04ee1d8  addi 1, 1, 128
  04ee1dc  blr

FUN_004ee1e0:   # 0x4ee1e0, 0x18c bytes
  04ee1e0  stdu 1, -128(1)
  04ee1e4  mflr 0
  04ee1e8  std 0, 144(1)
  04ee1ec  std 31, 120(1)
  04ee1f0  std 30, 112(1)
  04ee1f4  ori 31, 3, 0
  04ee1f8  li 30, 0
  04ee1fc  li 7, 1
  04ee200  lis 6, 144
  04ee204  addic 3, 31, 41
  04ee208  stw 30, 0(31)
  04ee20c  li 4, 0
  04ee210  stw 30, 4(31)
  04ee214  li 5, 128
  04ee218  stw 7, 8(31)
  04ee21c  stw 30, 12(31)
  04ee220  stw 30, 20(31)
  04ee224  stw 30, 16(31)
  04ee228  stb 30, 24(31)
  04ee22c  stb 30, 25(31)
  04ee230  stw 30, 36(31)
  04ee234  stw 30, 1216(31)
  04ee238  stw 31, -21548(6)
  04ee23c  bl 0x5d0140
  04ee240  nop
  04ee244  addic 3, 31, 169
  04ee248  li 4, 0
  04ee24c  li 5, 128
  04ee250  bl 0x5d0140
  04ee254  nop
  04ee258  addic 3, 31, 297
  04ee25c  li 4, 0
  04ee260  li 5, 128
  04ee264  bl 0x5d0140
  04ee268  nop
  04ee26c  addic 3, 31, 425
  04ee270  li 4, 0
  04ee274  li 5, 128
  04ee278  bl 0x5d0140
  04ee27c  nop
  04ee280  addic 3, 31, 553
  04ee284  li 4, 0
  04ee288  li 5, 128
  04ee28c  bl 0x5d0140
  04ee290  nop
  04ee294  addic 3, 31, 681
  04ee298  li 4, 0
  04ee29c  li 5, 128
  04ee2a0  bl 0x5d0140
  04ee2a4  nop
  04ee2a8  addic 3, 31, 809
  04ee2ac  li 4, 0
  04ee2b0  li 5, 128
  04ee2b4  bl 0x5d0140
  04ee2b8  nop
  04ee2bc  addic 3, 31, 937
  04ee2c0  li 4, 0
  04ee2c4  li 5, 128
  04ee2c8  bl 0x5d0140
  04ee2cc  nop
  04ee2d0  li 3, 1065
  04ee2d4  li 5, 1066
  04ee2d8  li 7, 1067
  04ee2dc  li 4, 1069
  04ee2e0  li 6, 1070
  04ee2e4  stbx 30, 31, 3
  04ee2e8  li 8, 1071
  04ee2ec  stbx 30, 31, 5
  04ee2f0  stbx 30, 31, 7
  04ee2f4  li 9, 1073
  04ee2f8  stb 30, 1068(31)
  04ee2fc  li 10, 1074
  04ee300  stbx 30, 31, 4
  04ee304  addic 3, 31, 1075
  04ee308  stbx 30, 31, 6
  04ee30c  li 4, 0
  04ee310  stbx 30, 31, 8
  04ee314  li 5, 128
  04ee318  stb 30, 1072(31)
  04ee31c  stbx 30, 31, 9
  04ee320  stbx 30, 31, 10
  04ee324  bl 0x5d0140
  04ee328  nop
  04ee32c  li 3, 1203
  04ee330  li 4, 1205
  04ee334  li 5, 1206
  04ee338  li 6, 1207
  04ee33c  stbx 30, 31, 3
  04ee340  stb 30, 1204(31)
  04ee344  stbx 30, 31, 4
  04ee348  stbx 30, 31, 5
  04ee34c  stbx 30, 31, 6
  04ee350  stb 30, 1208(31)
  04ee354  ld 0, 144(1)
  04ee358  mtlr 0
  04ee35c  ld 30, 112(1)
  04ee360  ld 31, 120(1)
  04ee364  addi 1, 1, 128
  04ee368  blr

FUN_004ee36c:   # 0x4ee36c, 0x20 bytes
  04ee36c  stdu 1, -112(1)
  04ee370  mflr 0
  04ee374  std 0, 128(1)
  04ee378  bl 0x4ee1e0
  04ee37c  ld 0, 128(1)
  04ee380  mtlr 0
  04ee384  addi 1, 1, 112
  04ee388  blr

FUN_004ee38c:   # 0x4ee38c, 0x70 bytes
  04ee38c  stdu 1, -128(1)
  04ee390  mflr 0
  04ee394  std 0, 144(1)
  04ee398  clrldi 5, 3, 32
  04ee39c  lis 8, 113
  04ee3a0  addic 3, 1, 112
  04ee3a4  lis 9, 102
  04ee3a8  addic 4, 8, 664
  04ee3ac  li 6, 1001
  04ee3b0  li 7, 16384
  04ee3b4  li 8, 0
  04ee3b8  addic 9, 9, -21556
  04ee3bc  bl 0x650524
  04ee3c0  ld 2, 40(1)
  04ee3c4  cmpwi 3, 0
  04ee3c8  bt 2, 0x4ee3e8
  04ee3cc  lis 5, 102
  04ee3d0  ori 4, 3, 0
  04ee3d4  addic 3, 5, -21540
  04ee3d8  bl 0x4ff6d0
  04ee3dc  nop
  04ee3e0  li 3, -1
  04ee3e4  b 0x4ee3ec
  04ee3e8  li 3, 0
  04ee3ec  ld 0, 144(1)
  04ee3f0  mtlr 0
  04ee3f4  addi 1, 1, 128
  04ee3f8  blr

FUN_004ee3fc:   # 0x4ee3fc, 0x198 bytes
  04ee3fc  stdu 1, -128(1)
  04ee400  mflr 0
  04ee404  std 0, 144(1)
  04ee408  std 31, 120(1)
  04ee40c  ori 31, 3, 0
  04ee410  lwz 3, 0(3)
  04ee414  cmpwi 3, 0
  04ee418  cmpwi 1, 3, -1
  04ee41c  cmpwi 6, 3, 1
  04ee420  cmpwi 7, 3, 2
  04ee424  bt 1, 0x4ee430
  04ee428  bf 5, 0x4ee4c4
  04ee42c  b 0x4ee43c
  04ee430  bf 25, 0x4ee448
  04ee434  bf 29, 0x4ee4a8
  04ee438  b 0x4ee4c4
  04ee43c  bl 0x64f504
  04ee440  ld 2, 40(1)
  04ee444  b 0x4ee4c4
  04ee448  lis 4, 113
  04ee44c  addic 3, 1, 112
  04ee450  lis 9, 102
  04ee454  li 6, 1001
  04ee458  li 7, 16384
  04ee45c  li 8, 0
  04ee460  addic 4, 4, 664
  04ee464  clrldi 5, 31, 32
  04ee468  addic 9, 9, -21556
  04ee46c  bl 0x650524
  04ee470  ld 2, 40(1)
  04ee474  cmpwi 3, 0
  04ee478  bt 2, 0x4ee494
  04ee47c  lis 5, 102
  04ee480  ori 4, 3, 0
  04ee484  addic 3, 5, -21540
  04ee488  bl 0x4ff6d0
  04ee48c  nop
  04ee490  b 0x4ee49c
  04ee494  li 3, 1
  04ee498  stw 3, 8(31)
  04ee49c  li 3, 2
  04ee4a0  stw 3, 0(31)
  04ee4a4  b 0x4ee4c4
  04ee4a8  bl 0x64f504
  04ee4ac  ld 2, 40(1)
  04ee4b0  lwz 3, 8(31)
  04ee4b4  cmpwi 3, 0
  04ee4b8  bf 2, 0x4ee4c4
  04ee4bc  li 3, 0
  04ee4c0  stw 3, 0(31)
  04ee4c4  lwz 3, 0(31)
  04ee4c8  cmpwi 3, 0
  04ee4cc  bf 2, 0x4ee574
  04ee4d0  lwz 3, 4(31)
  04ee4d4  cmpwi 3, 5
  04ee4d8  cmpwi 1, 3, 4
  04ee4dc  cmpwi 6, 3, 3
  04ee4e0  cmpwi 7, 3, 2
  04ee4e4  bt 2, 0x4ee550
  04ee4e8  bt 6, 0x4ee53c
  04ee4ec  bt 26, 0x4ee564
  04ee4f0  bt 30, 0x4ee528
  04ee4f4  cmpwi 3, 1
  04ee4f8  bt 2, 0x4ee514
  04ee4fc  cmpwi 3, 0
  04ee500  bf 2, 0x4ee574
  04ee504  li 3, 1
  04ee508  stw 3, 4(31)
  04ee50c  stw 3, 0(31)
  04ee510  b 0x4ee574
  04ee514  li 3, 4
  04ee518  li 4, 1
  04ee51c  stw 3, 4(31)
  04ee520  stw 4, 0(31)
  04ee524  b 0x4ee574
  04ee528  li 3, 4
  04ee52c  li 4, 1
  04ee530  stw 3, 4(31)
  04ee534  stw 4, 0(31)
  04ee538  b 0x4ee574
  04ee53c  li 3, 6
  04ee540  li 4, 1
  04ee544  stw 3, 4(31)
  04ee548  stw 4, 0(31)
  04ee54c  b 0x4ee574
  04ee550  li 3, 6
  04ee554  li 4, 1
  04ee558  stw 3, 4(31)
  04ee55c  stw 4, 0(31)
  04ee560  b 0x4ee574
  04ee564  li 3, 6
  04ee568  li 4, 0
  04ee56c  stw 3, 4(31)
  04ee570  stw 4, 0(31)
  04ee574  li 11, 141
  04ee578  li 3, 1600
  04ee57c  sc
  04ee580  ld 0, 144(1)
  04ee584  mtlr 0
  04ee588  ld 31, 120(1)
  04ee58c  addi 1, 1, 128
  04ee590  blr

FUN_004ee594:   # 0x4ee594, 0x54 bytes
  04ee594  stdu 1, -128(1)
  04ee598  mflr 0
  04ee59c  std 0, 144(1)
  04ee5a0  lwz 7, 4(3)
  04ee5a4  std 31, 120(1)
  04ee5a8  stw 4, 16(3)
  04ee5ac  ori 31, 3, 0
  04ee5b0  stw 5, 20(3)
  04ee5b4  cmpwi 7, 6
  04ee5b8  stb 6, 40(3)
  04ee5bc  bt 2, 0x4ee5d4
  04ee5c0  ori 3, 31, 0
  04ee5c4  bl 0x4ee3fc
  04ee5c8  lwz 3, 4(31)
  04ee5cc  cmpwi 3, 6
  04ee5d0  bf 2, 0x4ee5c0
  04ee5d4  ld 0, 144(1)
  04ee5d8  mtlr 0
  04ee5dc  ld 31, 120(1)
  04ee5e0  addi 1, 1, 128
  04ee5e4  blr

FUN_004ee5e8:   # 0x4ee5e8, 0x58 bytes
  04ee5e8  stdu 1, -128(1)
  04ee5ec  mflr 0
  04ee5f0  std 0, 144(1)
  04ee5f4  li 7, 3
  04ee5f8  li 8, 1
  04ee5fc  std 31, 120(1)
  04ee600  stw 4, 1220(3)
  04ee604  ori 31, 3, 0
  04ee608  stw 7, 4(3)
  04ee60c  stw 8, 0(3)
  04ee610  stw 5, 28(3)
  04ee614  stw 6, 32(3)
  04ee618  ori 3, 31, 0
  04ee61c  bl 0x4ee3fc
  04ee620  lwz 3, 4(31)
  04ee624  cmpwi 3, 6
  04ee628  bf 2, 0x4ee618
  04ee62c  ld 0, 144(1)
  04ee630  mtlr 0
  04ee634  ld 31, 120(1)
  04ee638  addi 1, 1, 128
  04ee63c  blr

FUN_004ee640:   # 0x4ee640, 0x1c bytes
  04ee640  lbz 4, 24(3)
  04ee644  cmpwi 4, 0
  04ee648  bt 2, 0x4ee654
  04ee64c  addic 3, 3, 681
  04ee650  b 0x4ee658
  04ee654  addic 3, 3, 169
  04ee658  blr

FUN_004ee65c:   # 0x4ee65c, 0x1bc bytes
  04ee65c  stdu 1, -208(1)
  04ee660  mflr 0
  04ee664  std 0, 224(1)
  04ee668  std 30, 192(1)
  04ee66c  clrlwi 5, 5, 24
  04ee670  ori 30, 3, 0
  04ee674  std 31, 200(1)
  04ee678  cmpwi 5, 0
  04ee67c  std 29, 184(1)
  04ee680  std 28, 176(1)
  04ee684  ori 31, 4, 0
  04ee688  bt 2, 0x4ee758
  04ee68c  addic 3, 1, 112
  04ee690  addic 29, 1, 136
  04ee694  addic 4, 1, 116
  04ee698  addic 5, 1, 120
  04ee69c  ori 6, 29, 0
  04ee6a0  bl 0x64f7a4
  04ee6a4  ld 2, 40(1)
  04ee6a8  cmpwi 3, 0
  04ee6ac  bf 0, 0x4ee6cc
  04ee6b0  lis 5, 102
  04ee6b4  ori 4, 3, 0
  04ee6b8  addic 3, 5, -21500
  04ee6bc  bl 0x4ff6d0
  04ee6c0  nop
  04ee6c4  li 3, 2
  04ee6c8  b 0x4ee7f8
  04ee6cc  lis 3, 102
  04ee6d0  lwz 4, 112(1)
  04ee6d4  ori 6, 29, 0
  04ee6d8  lwz 5, 116(1)
  04ee6dc  addic 3, 3, -21460
  04ee6e0  bl 0x4ffc9c
  04ee6e4  nop
  04ee6e8  lwz 4, 120(1)
  04ee6ec  lis 3, 102
  04ee6f0  lwz 5, 124(1)
  04ee6f4  lwz 6, 128(1)
  04ee6f8  addic 3, 3, -21396
  04ee6fc  extsw 5, 5
  04ee700  extsw 4, 4
  04ee704  extsw 6, 6
  04ee708  bl 0x4ffc9c
  04ee70c  nop
  04ee710  lwz 5, 120(1)
  04ee714  addic 3, 30, 41
  04ee718  addic 4, 30, 169
  04ee71c  stw 5, 1216(30)
  04ee720  bl 0x64f704
  04ee724  ld 2, 40(1)
  04ee728  ori 29, 3, 0
  04ee72c  cmpwi 29, 0
  04ee730  bf 0, 0x4ee750
  04ee734  lis 3, 102
  04ee738  ori 4, 29, 0
  04ee73c  addic 3, 3, -21340
  04ee740  bl 0x4ff6d0
  04ee744  nop
  04ee748  li 3, 2
  04ee74c  b 0x4ee7f8
  04ee750  lwz 3, 120(1)
  04ee754  stw 3, 1216(30)
  04ee758  lwz 29, 1216(30)
  04ee75c  extsw 29, 29
  04ee760  cmpld 29, 31
  04ee764  bf 0, 0x4ee7f4
  04ee768  lis 3, 102
  04ee76c  ori 4, 31, 0
  04ee770  addic 28, 3, -21300
  04ee774  ori 5, 29, 0
  04ee778  ori 3, 28, 0
  04ee77c  bl 0x4ff6d0
  04ee780  nop
  04ee784  subc 3, 31, 29
  04ee788  li 4, 0
  04ee78c  clrlwi 5, 3, 22
  04ee790  subc 4, 4, 5
  04ee794  subc 6, 3, 5
  04ee798  cntlzw 4, 4
  04ee79c  addic 6, 6, 1024
  04ee7a0  sldi 4, 4, 58
  04ee7a4  subc 5, 3, 6
  04ee7a8  sradi 4, 4, 63
  04ee7ac  ori 3, 28, 0
  04ee7b0  and 7, 4, 5
  04ee7b4  ori 4, 31, 0
  04ee7b8  addc 6, 6, 7
  04ee7bc  ori 5, 29, 0
  04ee7c0  extsw 31, 6
  04ee7c4  bl 0x4ff6d0
  04ee7c8  nop
  04ee7cc  ori 4, 31, 0
  04ee7d0  li 3, 102
  04ee7d4  li 5, 0
  04ee7d8  bl 0x64f724
  04ee7dc  ld 2, 40(1)
  04ee7e0  lwz 4, 36(30)
  04ee7e4  li 3, 1
  04ee7e8  ori 4, 4, 1
  04ee7ec  stw 4, 36(30)
  04ee7f0  b 0x4ee7f8
  04ee7f4  li 3, 0
  04ee7f8  ld 0, 224(1)
  04ee7fc  mtlr 0
  04ee800  ld 28, 176(1)
  04ee804  ld 29, 184(1)
  04ee808  ld 30, 192(1)
  04ee80c  ld 31, 200(1)
  04ee810  addi 1, 1, 208
  04ee814  blr

FUN_004ee818:   # 0x4ee818, 0x13c bytes
  04ee818  stdu 1, -128(1)
  04ee81c  mflr 0
  04ee820  std 0, 144(1)
  04ee824  std 31, 120(1)
  04ee828  lis 4, 144
  04ee82c  ori 31, 3, 0
  04ee830  std 30, 112(1)
  04ee834  lwz 3, 11984(4)
  04ee838  bl 0x504d48
  04ee83c  nop
  04ee840  ori 30, 3, 0
  04ee844  cmpwi 30, 0
  04ee848  bt 2, 0x4ee93c
  04ee84c  li 3, 2
  04ee850  lwz 30, 4(30)
  04ee854  li 5, 0
  04ee858  ori 4, 30, 0
  04ee85c  bl 0x64f764
  04ee860  ld 2, 40(1)
  04ee864  cmpwi 3, 0
  04ee868  bf 0, 0x4ee8c4
  04ee86c  lis 5, 102
  04ee870  ori 4, 3, 0
  04ee874  addic 3, 5, -21220
  04ee878  bl 0x4ff6d0
  04ee87c  nop
  04ee880  lis 3, 102
  04ee884  addic 3, 3, -21180
  04ee888  bl 0x4ff6d0
  04ee88c  nop
  04ee890  li 3, 3
  04ee894  ori 4, 30, 0
  04ee898  li 5, 0
  04ee89c  bl 0x64f764
  04ee8a0  ld 2, 40(1)
  04ee8a4  cmpwi 3, 0
  04ee8a8  bf 0, 0x4ee8c4
  04ee8ac  lis 5, 102
  04ee8b0  ori 4, 3, 0
  04ee8b4  addic 3, 5, -21156
  04ee8b8  bl 0x4ff6d0
  04ee8bc  nop
  04ee8c0  b 0x4ee93c
  04ee8c4  cmpwi 3, 2
  04ee8c8  bf 2, 0x4ee8dc
  04ee8cc  lis 3, 102
  04ee8d0  addic 3, 3, -21108
  04ee8d4  bl 0x4ff6d0
  04ee8d8  nop
  04ee8dc  addic 30, 31, 809
  04ee8e0  addic 31, 31, 937
  04ee8e4  ori 3, 30, 0
  04ee8e8  ori 4, 31, 0
  04ee8ec  bl 0x64f704
  04ee8f0  ld 2, 40(1)
  04ee8f4  cmpwi 3, 0
  04ee8f8  bf 0, 0x4ee914
  04ee8fc  lis 5, 102
  04ee900  ori 4, 3, 0
  04ee904  addic 3, 5, -21060
  04ee908  bl 0x4ff6d0
  04ee90c  nop
  04ee910  b 0x4ee93c
  04ee914  lis 3, 102
  04ee918  ori 4, 30, 0
  04ee91c  addic 3, 3, -21012
  04ee920  bl 0x4ffc9c
  04ee924  nop
  04ee928  lis 3, 102
  04ee92c  ori 4, 31, 0
  04ee930  addic 3, 3, -20988
  04ee934  bl 0x4ffc9c
  04ee938  nop
  04ee93c  ld 0, 144(1)
  04ee940  mtlr 0
  04ee944  ld 30, 112(1)
  04ee948  ld 31, 120(1)
  04ee94c  addi 1, 1, 128
  04ee950  blr

FUN_004ee954:   # 0x4ee954, 0x4 bytes
  04ee954  blr

FUN_004ee958:   # 0x4ee958, 0x2a4 bytes
  04ee958  stdu 1, -496(1)
  04ee95c  mflr 0
  04ee960  std 0, 512(1)
  04ee964  std 29, 472(1)
  04ee968  std 31, 488(1)
  04ee96c  lis 29, 144
  04ee970  std 30, 480(1)
  04ee974  ori 31, 3, 0
  04ee978  addic 30, 1, 128
  04ee97c  lwz 3, 11984(29)
  04ee980  bl 0x504c58
  04ee984  nop
  04ee988  ori 4, 3, 0
  04ee98c  ori 3, 30, 0
  04ee990  bl 0x5cc8d8
  04ee994  nop
  04ee998  lwz 3, 11984(29)
  04ee99c  bl 0x504d90
  04ee9a0  nop
  04ee9a4  cmpwi 3, 0
  04ee9a8  bf 2, 0x4ee9c0
  04ee9ac  lis 4, 102
  04ee9b0  ori 3, 30, 0
  04ee9b4  addic 4, 4, -20960
  04ee9b8  bl 0x5cc44c
  04ee9bc  nop
  04ee9c0  li 6, 0
  04ee9c4  li 3, 3
  04ee9c8  ori 4, 30, 0
  04ee9cc  addic 5, 1, 112
  04ee9d0  stw 6, 112(1)
  04ee9d4  stw 6, 116(1)
  04ee9d8  stw 6, 120(1)
  04ee9dc  bl 0x64f764
  04ee9e0  ld 2, 40(1)
  04ee9e4  ori 30, 3, 0
  04ee9e8  cmpwi 30, 0
  04ee9ec  bf 0, 0x4eea08
  04ee9f0  lis 3, 102
  04ee9f4  ori 4, 30, 0
  04ee9f8  addic 3, 3, -20952
  04ee9fc  bl 0x4ff6d0
  04eea00  nop
  04eea04  b 0x4eebe0
  04eea08  cmpwi 30, 2
  04eea0c  bt 2, 0x4eea2c
  04eea10  lis 3, 102
  04eea14  addic 3, 3, -20920
  04eea18  bl 0x4ffc9c
  04eea1c  nop
  04eea20  li 3, 1
  04eea24  stb 3, 25(31)
  04eea28  b 0x4eeb70
  04eea2c  lis 3, 102
  04eea30  addic 3, 3, -20896
  04eea34  bl 0x4ffc9c
  04eea38  nop
  04eea3c  lwz 3, 120(1)
  04eea40  lwz 4, 28(31)
  04eea44  lwz 5, 32(31)
  04eea48  addc 3, 3, 4
  04eea4c  lwz 4, 112(1)
  04eea50  addc 3, 3, 5
  04eea54  subc 3, 3, 4
  04eea58  cmpwi 3, 0
  04eea5c  bf 1, 0x4eeacc
  04eea60  clrlwi 5, 3, 22
  04eea64  li 6, 0
  04eea68  subc 7, 3, 5
  04eea6c  subc 5, 6, 5
  04eea70  addic 6, 7, 1024
  04eea74  cntlzw 5, 5
  04eea78  subc 3, 3, 6
  04eea7c  sldi 5, 5, 58
  04eea80  sradi 7, 5, 63
  04eea84  extsw 5, 4
  04eea88  and 3, 7, 3
  04eea8c  lis 4, 102
  04eea90  addc 6, 6, 3
  04eea94  addic 3, 4, -21300
  04eea98  extsw 30, 6
  04eea9c  ori 4, 30, 0
  04eeaa0  bl 0x4ff6d0
  04eeaa4  nop
  04eeaa8  li 3, 102
  04eeaac  ori 4, 30, 0
  04eeab0  li 5, 0
  04eeab4  bl 0x64f724
  04eeab8  ld 2, 40(1)
  04eeabc  lwz 3, 36(31)
  04eeac0  ori 3, 3, 1
  04eeac4  stw 3, 36(31)
  04eeac8  b 0x4eebe0
  04eeacc  addic 30, 1, 256
  04eead0  li 4, 0
  04eead4  ori 3, 30, 0
  04eead8  li 5, 212
  04eeadc  bl 0x5d0140
  04eeae0  nop
  04eeae4  addic 4, 31, 1075
  04eeae8  ori 3, 30, 0
  04eeaec  li 5, 127
  04eeaf0  bl 0x5cccec
  04eeaf4  nop
  04eeaf8  addic 4, 31, 1065
  04eeafc  addic 3, 1, 384
  04eeb00  li 5, 9
  04eeb04  bl 0x5cccec
  04eeb08  nop
  04eeb0c  lis 4, 102
  04eeb10  addic 3, 1, 396
  04eeb14  addic 4, 4, -20872
  04eeb18  li 5, 5
  04eeb1c  bl 0x5cccec
  04eeb20  nop
  04eeb24  ori 3, 30, 0
  04eeb28  addic 4, 31, 553
  04eeb2c  addic 5, 31, 681
  04eeb30  bl 0x64f6e4
  04eeb34  ld 2, 40(1)
  04eeb38  cmpwi 3, 0
  04eeb3c  bf 0, 0x4eeb58
  04eeb40  lis 5, 102
  04eeb44  ori 4, 3, 0
  04eeb48  addic 3, 5, -20864
  04eeb4c  bl 0x4ff6d0
  04eeb50  nop
  04eeb54  b 0x4eeb70
  04eeb58  lis 3, 102
  04eeb5c  addic 3, 3, -20824
  04eeb60  bl 0x4ffc9c
  04eeb64  nop
  04eeb68  li 3, 1
  04eeb6c  stb 3, 25(31)
  04eeb70  addic 30, 31, 553
  04eeb74  addic 31, 31, 681
  04eeb78  ori 3, 30, 0
  04eeb7c  ori 4, 31, 0
  04eeb80  bl 0x64f704
  04eeb84  ld 2, 40(1)
  04eeb88  cmpwi 3, 0
  04eeb8c  bf 0, 0x4eeba8
  04eeb90  lis 5, 102
  04eeb94  ori 4, 3, 0
  04eeb98  addic 3, 5, -21340
  04eeb9c  bl 0x4ff6d0
  04eeba0  nop
  04eeba4  b 0x4eebe0
  04eeba8  lis 3, 102
  04eebac  addic 3, 3, -20792
  04eebb0  bl 0x4ffc9c
  04eebb4  nop
  04eebb8  lis 3, 102
  04eebbc  ori 4, 30, 0
  04eebc0  addic 3, 3, -20760
  04eebc4  bl 0x4ffc9c
  04eebc8  nop
  04eebcc  lis 3, 102
  04eebd0  ori 4, 31, 0
  04eebd4  addic 3, 3, -20736
  04eebd8  bl 0x4ffc9c
  04eebdc  nop
  04eebe0  ld 0, 512(1)
  04eebe4  mtlr 0
  04eebe8  ld 29, 472(1)
  04eebec  ld 30, 480(1)
  04eebf0  ld 31, 488(1)
  04eebf4  addi 1, 1, 496
  04eebf8  blr

FUN_004eebfc:   # 0x4eebfc, 0x1cc bytes
  04eebfc  stdu 1, -288(1)
  04eec00  mflr 0
  04eec04  std 0, 304(1)
  04eec08  std 29, 264(1)
  04eec0c  std 31, 280(1)
  04eec10  lis 29, 144
  04eec14  std 30, 272(1)
  04eec18  ori 31, 3, 0
  04eec1c  addic 30, 1, 128
  04eec20  lwz 3, 11984(29)
  04eec24  bl 0x504c58
  04eec28  nop
  04eec2c  ori 4, 3, 0
  04eec30  ori 3, 30, 0
  04eec34  bl 0x5cc8d8
  04eec38  nop
  04eec3c  lwz 3, 11984(29)
  04eec40  bl 0x504d90
  04eec44  nop
  04eec48  cmpwi 3, 0
  04eec4c  bf 2, 0x4eec64
  04eec50  lis 4, 102
  04eec54  ori 3, 30, 0
  04eec58  addic 4, 4, -20960
  04eec5c  bl 0x5cc44c
  04eec60  nop
  04eec64  li 6, 0
  04eec68  li 3, 3
  04eec6c  ori 4, 30, 0
  04eec70  addic 5, 1, 116
  04eec74  stw 6, 116(1)
  04eec78  stw 6, 120(1)
  04eec7c  stw 6, 124(1)
  04eec80  bl 0x64f764
  04eec84  ld 2, 40(1)
  04eec88  ori 30, 3, 0
  04eec8c  cmpwi 30, 0
  04eec90  bf 0, 0x4eecac
  04eec94  lis 3, 102
  04eec98  ori 4, 30, 0
  04eec9c  addic 3, 3, -20952
  04eeca0  bl 0x4ff6d0
  04eeca4  nop
  04eeca8  b 0x4eedac
  04eecac  cmpwi 30, 0
  04eecb0  bf 2, 0x4eed3c
  04eecb4  lis 3, 102
  04eecb8  addic 3, 3, -20920
  04eecbc  bl 0x4ffc9c
  04eecc0  nop
  04eecc4  li 4, 1
  04eecc8  lwz 3, 120(1)
  04eeccc  cmpwi 3, -1
  04eecd0  stb 4, 25(31)
  04eecd4  bf 2, 0x4eed18
  04eecd8  li 4, 0
  04eecdc  addic 3, 1, 112
  04eece0  stw 4, 112(1)
  04eece4  bl 0x64f784
  04eece8  ld 2, 40(1)
  04eecec  cmpwi 3, 0
  04eecf0  bf 0, 0x4eed10
  04eecf4  lis 5, 102
  04eecf8  ori 4, 3, 0
  04eecfc  addic 3, 5, -20708
  04eed00  bl 0x4ff6d0
  04eed04  nop
  04eed08  lwz 3, 120(1)
  04eed0c  b 0x4eed18
  04eed10  lwz 3, 112(1)
  04eed14  stw 3, 120(1)
  04eed18  lis 4, 102
  04eed1c  extsw 5, 3
  04eed20  addic 3, 4, -21396
  04eed24  lwz 4, 116(1)
  04eed28  lwz 6, 124(1)
  04eed2c  extsw 4, 4
  04eed30  extsw 6, 6
  04eed34  bl 0x4ffc9c
  04eed38  nop
  04eed3c  addic 30, 31, 553
  04eed40  addic 31, 31, 681
  04eed44  ori 3, 30, 0
  04eed48  ori 4, 31, 0
  04eed4c  bl 0x64f704
  04eed50  ld 2, 40(1)
  04eed54  cmpwi 3, 0
  04eed58  bf 0, 0x4eed74
  04eed5c  lis 5, 102
  04eed60  ori 4, 3, 0
  04eed64  addic 3, 5, -21340
  04eed68  bl 0x4ff6d0
  04eed6c  nop
  04eed70  b 0x4eedac
  04eed74  lis 3, 102
  04eed78  addic 3, 3, -20792
  04eed7c  bl 0x4ffc9c
  04eed80  nop
  04eed84  lis 3, 102
  04eed88  ori 4, 30, 0
  04eed8c  addic 3, 3, -20760
  04eed90  bl 0x4ffc9c
  04eed94  nop
  04eed98  lis 3, 102
  04eed9c  ori 4, 31, 0
  04eeda0  addic 3, 3, -20736
  04eeda4  bl 0x4ffc9c
  04eeda8  nop
  04eedac  ld 0, 304(1)
  04eedb0  mtlr 0
  04eedb4  ld 29, 264(1)
  04eedb8  ld 30, 272(1)
  04eedbc  ld 31, 280(1)
  04eedc0  addi 1, 1, 288
  04eedc4  blr

FUN_004eedc8:   # 0x4eedc8, 0x138 bytes
  04eedc8  stdu 1, -128(1)
  04eedcc  mflr 0
  04eedd0  std 0, 144(1)
  04eedd4  std 31, 120(1)
  04eedd8  ori 31, 3, 0
  04eeddc  li 3, 1
  04eede0  addic 4, 31, 1075
  04eede4  std 30, 112(1)
  04eede8  li 5, 128
  04eedec  bl 0x64f6c4
  04eedf0  ld 2, 40(1)
  04eedf4  cmpwi 3, 0
  04eedf8  bf 0, 0x4eee10
  04eedfc  lis 5, 102
  04eee00  ori 4, 3, 0
  04eee04  addic 3, 5, -20672
  04eee08  bl 0x4ff6d0
  04eee0c  nop
  04eee10  addic 30, 31, 1065
  04eee14  li 3, 100
  04eee18  ori 4, 30, 0
  04eee1c  li 5, 10
  04eee20  bl 0x64f6c4
  04eee24  ld 2, 40(1)
  04eee28  cmpwi 3, 0
  04eee2c  bf 0, 0x4eee44
  04eee30  lis 5, 102
  04eee34  ori 4, 3, 0
  04eee38  addic 3, 5, -20640
  04eee3c  bl 0x4ff6d0
  04eee40  nop
  04eee44  li 3, 101
  04eee48  addic 4, 31, 1203
  04eee4c  li 5, 6
  04eee50  bl 0x64f6c4
  04eee54  ld 2, 40(1)
  04eee58  cmpwi 3, 0
  04eee5c  bf 0, 0x4eee74
  04eee60  lis 5, 102
  04eee64  ori 4, 3, 0
  04eee68  addic 3, 5, -20608
  04eee6c  bl 0x4ff6d0
  04eee70  nop
  04eee74  li 3, 102
  04eee78  addic 4, 31, 1212
  04eee7c  bl 0x64f744
  04eee80  ld 2, 40(1)
  04eee84  cmpwi 3, 0
  04eee88  bf 0, 0x4eeea0
  04eee8c  lis 5, 102
  04eee90  ori 4, 3, 0
  04eee94  addic 3, 5, -20576
  04eee98  bl 0x4ff6d0
  04eee9c  nop
  04eeea0  lwz 3, 20(31)
  04eeea4  cmpwi 3, 0
  04eeea8  bt 2, 0x4eeee8
  04eeeac  lbz 4, 0(3)
  04eeeb0  cmpwi 4, 0
  04eeeb4  bt 2, 0x4eeee8
  04eeeb8  lbz 4, 1065(31)
  04eeebc  cmpwi 4, 0
  04eeec0  bf 2, 0x4eeee8
  04eeec4  ori 4, 3, 0
  04eeec8  ori 3, 30, 0
  04eeecc  bl 0x5cc8d8
  04eeed0  nop
  04eeed4  lis 3, 102
  04eeed8  ori 4, 30, 0
  04eeedc  addic 3, 3, -20536
  04eeee0  bl 0x4ffc9c
  04eeee4  nop
  04eeee8  ld 0, 144(1)
  04eeeec  mtlr 0
  04eeef0  ld 30, 112(1)
  04eeef4  ld 31, 120(1)
  04eeef8  addi 1, 1, 128
  04eeefc  blr

FUN_004eef00:   # 0x4eef00, 0x278 bytes
  04eef00  stdu 1, -1248(1)
  04eef04  mflr 0
  04eef08  std 0, 1264(1)
  04eef0c  std 31, 1240(1)
  04eef10  li 7, 0
  04eef14  std 28, 1216(1)
  04eef18  ori 31, 3, 0
  04eef1c  addic 28, 1, 136
  04eef20  addic 3, 1, 112
  04eef24  stw 7, 120(1)
  04eef28  stw 7, 124(1)
  04eef2c  addic 5, 1, 120
  04eef30  addic 4, 1, 116
  04eef34  stw 7, 128(1)
  04eef38  std 30, 1232(1)
  04eef3c  std 29, 1224(1)
  04eef40  std 27, 1208(1)
  04eef44  std 26, 1200(1)
  04eef48  ori 6, 28, 0
  04eef4c  bl 0x64f7a4
  04eef50  ld 2, 40(1)
  04eef54  ori 30, 3, 0
  04eef58  cmpwi 30, 0
  04eef5c  bf 0, 0x4eef7c
  04eef60  lis 3, 102
  04eef64  ori 4, 30, 0
  04eef68  addic 3, 3, -21500
  04eef6c  bl 0x4ff6d0
  04eef70  nop
  04eef74  ori 3, 30, 0
  04eef78  b 0x4ef150
  04eef7c  lis 3, 102
  04eef80  lwz 4, 112(1)
  04eef84  lwz 5, 116(1)
  04eef88  ori 6, 28, 0
  04eef8c  addic 3, 3, -21460
  04eef90  bl 0x4ffc9c
  04eef94  nop
  04eef98  lwz 4, 120(1)
  04eef9c  lwz 5, 124(1)
  04eefa0  lis 3, 102
  04eefa4  lwz 6, 128(1)
  04eefa8  extsw 4, 4
  04eefac  addic 3, 3, -21396
  04eefb0  extsw 5, 5
  04eefb4  extsw 6, 6
  04eefb8  bl 0x4ffc9c
  04eefbc  nop
  04eefc0  lwz 4, 120(1)
  04eefc4  ori 3, 31, 0
  04eefc8  stw 4, 1216(31)
  04eefcc  bl 0x4eedc8
  04eefd0  addic 29, 31, 41
  04eefd4  addic 30, 31, 169
  04eefd8  ori 3, 29, 0
  04eefdc  ori 4, 30, 0
  04eefe0  bl 0x64f704
  04eefe4  ld 2, 40(1)
  04eefe8  ori 28, 3, 0
  04eefec  cmpwi 28, 0
  04eeff0  bf 0, 0x4ef010
  04eeff4  lis 3, 102
  04eeff8  ori 4, 28, 0
  04eeffc  addic 3, 3, -21340
  04ef000  bl 0x4ff6d0
  04ef004  nop
  04ef008  ori 3, 28, 0
  04ef00c  b 0x4ef150
  04ef010  lis 3, 102
  04ef014  ori 4, 29, 0
  04ef018  addic 3, 3, -20500
  04ef01c  bl 0x4ffc9c
  04ef020  nop
  04ef024  lis 3, 102
  04ef028  ori 4, 30, 0
  04ef02c  addic 3, 3, -20476
  04ef030  bl 0x4ffc9c
  04ef034  nop
  04ef038  bl 0x4ef34c
  04ef03c  nop
  04ef040  lis 4, 102
  04ef044  ori 26, 3, 0
  04ef048  addic 27, 4, -20452
  04ef04c  ori 3, 27, 0
  04ef050  bl 0x5c8510
  04ef054  nop
  04ef058  ori 5, 3, 0
  04ef05c  ori 3, 30, 0
  04ef060  ori 4, 27, 0
  04ef064  bl 0x5ccb28
  04ef068  nop
  04ef06c  cmpwi 3, 0
  04ef070  addic 27, 1, 168
  04ef074  bf 2, 0x4ef08c
  04ef078  lwz 3, 16(31)
  04ef07c  cmpwi 3, 0
  04ef080  cmpwi 1, 3, 2
  04ef084  cmpwi 6, 3, 1
  04ef088  bf 2, 0x4ef0a0
  04ef08c  ori 3, 27, 0
  04ef090  ori 4, 30, 0
  04ef094  bl 0x5cc8d8
  04ef098  nop
  04ef09c  b 0x4ef128
  04ef0a0  bf 26, 0x4ef0e8
  04ef0a4  lis 4, 102
  04ef0a8  lwz 5, 20(31)
  04ef0ac  ori 3, 30, 0
  04ef0b0  addic 4, 4, -20436
  04ef0b4  bl 0x5cd2a8
  04ef0b8  nop
  04ef0bc  lis 4, 102
  04ef0c0  lwz 5, 20(31)
  04ef0c4  ori 3, 29, 0
  04ef0c8  addic 4, 4, -20404
  04ef0cc  bl 0x5cd2a8
  04ef0d0  nop
  04ef0d4  ori 3, 27, 0
  04ef0d8  ori 4, 30, 0
  04ef0dc  bl 0x5cc8d8
  04ef0e0  nop
  04ef0e4  b 0x4ef128
  04ef0e8  bf 6, 0x4ef128
  04ef0ec  lis 4, 102
  04ef0f0  ori 3, 27, 0
  04ef0f4  addic 31, 4, -20380
  04ef0f8  ori 4, 31, 0
  04ef0fc  bl 0x5cc8d8
  04ef100  nop
  04ef104  ori 4, 31, 0
  04ef108  ori 3, 30, 0
  04ef10c  bl 0x5cc8d8
  04ef110  nop
  04ef114  lis 4, 102
  04ef118  ori 3, 29, 0
  04ef11c  addic 4, 4, -20348
  04ef120  bl 0x5cc8d8
  04ef124  nop
  04ef128  lis 4, 102
  04ef12c  ori 3, 27, 0
  04ef130  addic 4, 4, -20324
  04ef134  bl 0x5cc44c
  04ef138  nop
  04ef13c  ori 3, 26, 0
  04ef140  ori 4, 27, 0
  04ef144  bl 0x4ef3bc
  04ef148  nop
  04ef14c  ori 3, 28, 0
  04ef150  ld 0, 1264(1)
  04ef154  mtlr 0
  04ef158  ld 26, 1200(1)
  04ef15c  ld 27, 1208(1)
  04ef160  ld 28, 1216(1)
  04ef164  ld 29, 1224(1)
  04ef168  ld 30, 1232(1)
  04ef16c  ld 31, 1240(1)
  04ef170  addi 1, 1, 1248
  04ef174  blr

FUN_004ef178:   # 0x4ef178, 0xa0 bytes
  04ef178  stdu 1, -128(1)
  04ef17c  mflr 0
  04ef180  std 0, 144(1)
  04ef184  std 31, 120(1)
  04ef188  ori 31, 3, 0
  04ef18c  lwz 3, 4(31)
  04ef190  cmpwi 3, 2
  04ef194  cmpwi 1, 3, 4
  04ef198  cmpwi 6, 3, 3
  04ef19c  cmpwi 7, 3, 1
  04ef1a0  bt 1, 0x4ef1b4
  04ef1a4  cmpwi 3, 0
  04ef1a8  bf 1, 0x4ef1ec
  04ef1ac  bf 29, 0x4ef1c0
  04ef1b0  b 0x4ef1cc
  04ef1b4  bf 25, 0x4ef1d8
  04ef1b8  bf 5, 0x4ef1e4
  04ef1bc  b 0x4ef1ec
  04ef1c0  ori 3, 31, 0
  04ef1c4  bl 0x4eef00
  04ef1c8  b 0x4ef1ec
  04ef1cc  ori 3, 31, 0
  04ef1d0  bl 0x4eebfc
  04ef1d4  b 0x4ef1ec
  04ef1d8  ori 3, 31, 0
  04ef1dc  bl 0x4ee958
  04ef1e0  b 0x4ef1ec
  04ef1e4  ori 3, 31, 0
  04ef1e8  bl 0x4ee818
  04ef1ec  li 4, 0
  04ef1f0  li 3, 0
  04ef1f4  stw 4, 8(31)
  04ef1f8  stw 4, 0(31)
  04ef1fc  bl 0x650744
  04ef200  ld 2, 40(1)
  04ef204  ld 0, 144(1)
  04ef208  mtlr 0
  04ef20c  ld 31, 120(1)
  04ef210  addi 1, 1, 128
  04ef214  blr

FUN_004ef218:   # 0x4ef218, 0x30 bytes
  04ef218  stdu 1, -112(1)
  04ef21c  mflr 0
  04ef220  std 0, 128(1)
  04ef224  clrldi 3, 3, 32
  04ef228  bl 0x4ef178
  04ef22c  li 3, 0
  04ef230  bl 0x650744
  04ef234  ld 2, 40(1)
  04ef238  ld 0, 128(1)
  04ef23c  mtlr 0
  04ef240  addi 1, 1, 112
  04ef244  blr

FUN_004ef248:   # 0x4ef248, 0xac bytes
  04ef248  stdu 1, -128(1)
  04ef24c  mflr 0
  04ef250  std 0, 144(1)
  04ef254  std 30, 112(1)
  04ef258  ori 30, 3, 0
  04ef25c  lis 3, 102
  04ef260  ori 4, 30, 0
  04ef264  addic 3, 3, -20312
  04ef268  std 31, 120(1)
  04ef26c  li 5, 3
  04ef270  bl 0x5d0218
  04ef274  nop
  04ef278  cmpwi 3, 0
  04ef27c  addic 31, 30, 3
  04ef280  bf 2, 0x4ef2a0
  04ef284  lis 4, 102
  04ef288  ori 3, 31, 0
  04ef28c  addic 4, 4, -20304
  04ef290  bl 0x5c8700
  04ef294  nop
  04ef298  addic 30, 3, 1
  04ef29c  b 0x4ef2d8
  04ef2a0  lis 3, 102
  04ef2a4  ori 4, 30, 0
  04ef2a8  addic 3, 3, -20296
  04ef2ac  li 5, 3
  04ef2b0  bl 0x5d0218
  04ef2b4  nop
  04ef2b8  cmpwi 3, 0
  04ef2bc  bf 2, 0x4ef2d8
  04ef2c0  lis 4, 102
  04ef2c4  ori 3, 31, 0
  04ef2c8  addic 4, 4, -20288
  04ef2cc  bl 0x5c8700
  04ef2d0  nop
  04ef2d4  addic 30, 3, 1
  04ef2d8  ori 3, 30, 0
  04ef2dc  ld 0, 144(1)
  04ef2e0  mtlr 0
  04ef2e4  ld 30, 112(1)
  04ef2e8  ld 31, 120(1)
  04ef2ec  addi 1, 1, 128
  04ef2f0  blr

FUN_004ef2f4:   # 0x4ef2f4, 0x2c bytes
  04ef2f4  stdu 1, -112(1)
  04ef2f8  mflr 0
  04ef2fc  std 0, 128(1)
  04ef300  li 4, 0
  04ef304  li 5, 768
  04ef308  bl 0x5d0140
  04ef30c  nop
  04ef310  ld 0, 128(1)
  04ef314  mtlr 0
  04ef318  addi 1, 1, 112
  04ef31c  blr

FUN_004ef320:   # 0x4ef320, 0x2c bytes
  04ef320  stdu 1, -112(1)
  04ef324  mflr 0
  04ef328  std 0, 128(1)
  04ef32c  li 4, 0
  04ef330  li 5, 768
  04ef334  bl 0x5d0140
  04ef338  nop
  04ef33c  ld 0, 128(1)
  04ef340  mtlr 0
  04ef344  addi 1, 1, 112
  04ef348  blr

FUN_004ef34c:   # 0x4ef34c, 0x70 bytes
  04ef34c  stdu 1, -112(1)
  04ef350  mflr 0
  04ef354  std 0, 128(1)
  04ef358  lis 3, 345
  04ef35c  lbz 3, 9216(3)
  04ef360  cmpwi 3, 0
  04ef364  bf 2, 0x4ef38c
  04ef368  lis 3, 345
  04ef36c  li 4, 0
  04ef370  addic 3, 3, 9224
  04ef374  li 5, 768
  04ef378  bl 0x5d0140
  04ef37c  nop
  04ef380  lis 3, 345
  04ef384  li 4, 1
  04ef388  stb 4, 9216(3)
  04ef38c  lis 3, 144
  04ef390  lwz 3, -21544(3)
  04ef394  cmpwi 3, 0
  04ef398  bf 2, 0x4ef3ac
  04ef39c  lis 3, 345
  04ef3a0  lis 4, 144
  04ef3a4  addic 3, 3, 9224
  04ef3a8  stw 3, -21544(4)
  04ef3ac  ld 0, 128(1)
  04ef3b0  mtlr 0
  04ef3b4  addi 1, 1, 112
  04ef3b8  blr

FUN_004ef3bc:   # 0x4ef3bc, 0x114 bytes
  04ef3bc  stdu 1, -144(1)
  04ef3c0  mflr 0
  04ef3c4  std 0, 160(1)
  04ef3c8  std 31, 136(1)
  04ef3cc  lis 5, 102
  04ef3d0  std 30, 128(1)
  04ef3d4  ori 31, 4, 0
  04ef3d8  ori 30, 3, 0
  04ef3dc  std 29, 120(1)
  04ef3e0  std 28, 112(1)
  04ef3e4  addic 3, 5, -20284
  04ef3e8  bl 0x4ffc9c
  04ef3ec  nop
  04ef3f0  ori 3, 31, 0
  04ef3f4  bl 0x5c8510
  04ef3f8  nop
  04ef3fc  lis 28, 102
  04ef400  ori 29, 3, 0
  04ef404  addic 28, 28, -20268
  04ef408  ori 3, 28, 0
  04ef40c  bl 0x5c8510
  04ef410  nop
  04ef414  ori 5, 3, 0
  04ef418  ori 3, 31, 0
  04ef41c  ori 4, 28, 0
  04ef420  bl 0x5ccb28
  04ef424  nop
  04ef428  cmpwi 3, 0
  04ef42c  bf 2, 0x4ef444
  04ef430  ori 3, 30, 0
  04ef434  ori 4, 28, 0
  04ef438  bl 0x5cc8d8
  04ef43c  nop
  04ef440  b 0x4ef4b0
  04ef444  lis 3, 102
  04ef448  addic 28, 3, -20252
  04ef44c  ori 3, 28, 0
  04ef450  bl 0x5c8510
  04ef454  nop
  04ef458  ori 5, 3, 0
  04ef45c  ori 3, 31, 0
  04ef460  ori 4, 28, 0
  04ef464  bl 0x5ccb28
  04ef468  nop
  04ef46c  addc 29, 30, 29
  04ef470  cmpwi 3, 0
  04ef474  clrldi 29, 29, 32
  04ef478  bf 2, 0x4ef498
  04ef47c  ori 3, 30, 0
  04ef480  ori 4, 31, 0
  04ef484  bl 0x5cc8d8
  04ef488  nop
  04ef48c  li 3, 0
  04ef490  stb 3, -10(29)
  04ef494  b 0x4ef4b0
  04ef498  ori 3, 30, 0
  04ef49c  ori 4, 31, 0
  04ef4a0  bl 0x5cc8d8
  04ef4a4  nop
  04ef4a8  li 3, 0
  04ef4ac  stb 3, -10(29)
  04ef4b0  ld 0, 160(1)
  04ef4b4  mtlr 0
  04ef4b8  ld 28, 112(1)
  04ef4bc  ld 29, 120(1)
  04ef4c0  ld 30, 128(1)
  04ef4c4  ld 31, 136(1)
  04ef4c8  addi 1, 1, 144
  04ef4cc  blr

FUN_004ef4d0:   # 0x4ef4d0, 0x214 bytes
  04ef4d0  stdu 1, -144(1)
  04ef4d4  mflr 0
  04ef4d8  std 0, 160(1)
  04ef4dc  std 30, 128(1)
  04ef4e0  std 29, 120(1)
  04ef4e4  cmpwi 4, 0
  04ef4e8  ori 29, 3, 0
  04ef4ec  std 31, 136(1)
  04ef4f0  ori 30, 4, 0
  04ef4f4  std 28, 112(1)
  04ef4f8  ori 31, 5, 0
  04ef4fc  bt 2, 0x4ef6c4
  04ef500  lis 4, 102
  04ef504  ori 3, 30, 0
  04ef508  addic 4, 4, -20240
  04ef50c  li 5, 9
  04ef510  bl 0x5d0218
  04ef514  nop
  04ef518  cmpwi 3, 0
  04ef51c  bf 2, 0x4ef534
  04ef520  ori 3, 31, 0
  04ef524  ori 4, 30, 0
  04ef528  bl 0x5cc8d8
  04ef52c  nop
  04ef530  b 0x4ef6c4
  04ef534  lis 4, 102
  04ef538  ori 3, 30, 0
  04ef53c  addic 4, 4, -20224
  04ef540  li 5, 9
  04ef544  bl 0x5d0218
  04ef548  nop
  04ef54c  cmpwi 3, 0
  04ef550  bf 2, 0x4ef568
  04ef554  ori 3, 31, 0
  04ef558  ori 4, 30, 0
  04ef55c  bl 0x5cc8d8
  04ef560  nop
  04ef564  b 0x4ef6c4
  04ef568  lis 4, 102
  04ef56c  ori 3, 30, 0
  04ef570  addic 4, 4, -20268
  04ef574  li 5, 9
  04ef578  bl 0x5d0218
  04ef57c  nop
  04ef580  cmpwi 3, 0
  04ef584  bf 2, 0x4ef59c
  04ef588  ori 3, 31, 0
  04ef58c  ori 4, 30, 0
  04ef590  bl 0x5cc8d8
  04ef594  nop
  04ef598  b 0x4ef6c4
  04ef59c  lis 4, 102
  04ef5a0  ori 3, 30, 0
  04ef5a4  addic 4, 4, -20252
  04ef5a8  li 5, 9
  04ef5ac  bl 0x5d0218
  04ef5b0  nop
  04ef5b4  cmpwi 3, 0
  04ef5b8  bf 2, 0x4ef5d0
  04ef5bc  ori 3, 31, 0
  04ef5c0  ori 4, 30, 0
  04ef5c4  bl 0x5cc8d8
  04ef5c8  nop
  04ef5cc  b 0x4ef6c4
  04ef5d0  lbz 3, 0(30)
  04ef5d4  cmpwi 3, 47
  04ef5d8  bf 2, 0x4ef614
  04ef5dc  ori 4, 29, 0
  04ef5e0  ori 3, 31, 0
  04ef5e4  bl 0x5cc8d8
  04ef5e8  nop
  04ef5ec  lis 4, 102
  04ef5f0  ori 3, 31, 0
  04ef5f4  addic 4, 4, -20288
  04ef5f8  bl 0x5cc44c
  04ef5fc  nop
  04ef600  addic 4, 30, 1
  04ef604  ori 3, 31, 0
  04ef608  bl 0x5cc44c
  04ef60c  nop
  04ef610  b 0x4ef6c4
  04ef614  lis 3, 102
  04ef618  ori 28, 30, 0
  04ef61c  addic 3, 3, -20312
  04ef620  ori 4, 28, 0
  04ef624  li 5, 3
  04ef628  bl 0x5d0218
  04ef62c  nop
  04ef630  cmpwi 3, 0
  04ef634  addic 30, 28, 3
  04ef638  bf 2, 0x4ef658
  04ef63c  lis 4, 102
  04ef640  ori 3, 30, 0
  04ef644  addic 4, 4, -20304
  04ef648  bl 0x5c8700
  04ef64c  nop
  04ef650  addic 28, 3, 1
  04ef654  b 0x4ef690
  04ef658  lis 3, 102
  04ef65c  ori 4, 28, 0
  04ef660  addic 3, 3, -20296
  04ef664  li 5, 3
  04ef668  bl 0x5d0218
  04ef66c  nop
  04ef670  cmpwi 3, 0
  04ef674  bf 2, 0x4ef690
  04ef678  lis 4, 102
  04ef67c  ori 3, 30, 0
  04ef680  addic 4, 4, -20288
  04ef684  bl 0x5c8700
  04ef688  nop
  04ef68c  addic 28, 3, 1
  04ef690  ori 4, 29, 0
  04ef694  ori 3, 31, 0
  04ef698  bl 0x5cc8d8
  04ef69c  nop
  04ef6a0  lis 4, 102
  04ef6a4  ori 3, 31, 0
  04ef6a8  addic 4, 4, -20288
  04ef6ac  bl 0x5cc44c
  04ef6b0  nop
  04ef6b4  ori 3, 31, 0
  04ef6b8  ori 4, 28, 0
  04ef6bc  bl 0x5cc44c
  04ef6c0  nop
  04ef6c4  ld 0, 160(1)
  04ef6c8  mtlr 0
  04ef6cc  ld 28, 112(1)
  04ef6d0  ld 29, 120(1)
  04ef6d4  ld 30, 128(1)
  04ef6d8  ld 31, 136(1)
  04ef6dc  addi 1, 1, 144
  04ef6e0  blr

FUN_004ef6e4:   # 0x4ef6e4, 0x4c bytes
  04ef6e4  stdu 1, -192(1)
  04ef6e8  mflr 0
  04ef6ec  std 0, 208(1)
  04ef6f0  std 31, 184(1)
  04ef6f4  std 30, 176(1)
  04ef6f8  ori 31, 4, 0
  04ef6fc  addic 30, 1, 112
  04ef700  ori 5, 30, 0
  04ef704  bl 0x4ef4d0
  04ef708  ori 3, 31, 0
  04ef70c  ori 4, 30, 0
  04ef710  bl 0x5cc8d8
  04ef714  nop
  04ef718  ld 0, 208(1)
  04ef71c  mtlr 0
  04ef720  ld 30, 176(1)
  04ef724  ld 31, 184(1)
  04ef728  addi 1, 1, 192
  04ef72c  blr

FUN_004ef730:   # 0x4ef730, 0x448 bytes
  04ef730  stdu 1, -64(1)
  04ef734  cmpwi 4, 1
  04ef738  cmpwi 1, 4, 3
  04ef73c  cmpwi 6, 4, 2
  04ef740  std 31, 56(1)
  04ef744  std 30, 48(1)
  04ef748  cmpwi 7, 4, 0
  04ef74c  bt 1, 0x4ef760
  04ef750  cmpwi 4, -1
  04ef754  bf 1, 0x4efb68
  04ef758  bf 29, 0x4ef76c
  04ef75c  b 0x4ef86c
  04ef760  bf 25, 0x4ef96c
  04ef764  bf 5, 0x4efa6c
  04ef768  b 0x4efb68
  04ef76c  lis 4, 102
  04ef770  lis 12, 102
  04ef774  addic 5, 4, -20212
  04ef778  lbz 4, -20212(4)
  04ef77c  lbz 6, 1(5)
  04ef780  lbz 7, 2(5)
  04ef784  lbz 8, 3(5)
  04ef788  stb 4, 4(3)
  04ef78c  stb 6, 5(3)
  04ef790  stb 7, 6(3)
  04ef794  stb 8, 7(3)
  04ef798  li 7, 0
  04ef79c  lbz 4, 4(5)
  04ef7a0  addic 8, 3, 16
  04ef7a4  lbz 6, 5(5)
  04ef7a8  lbz 9, 6(5)
  04ef7ac  lbz 10, 7(5)
  04ef7b0  stb 4, 8(3)
  04ef7b4  stb 6, 9(3)
  04ef7b8  ori 4, 7, 0
  04ef7bc  stb 9, 10(3)
  04ef7c0  lis 6, 102
  04ef7c4  stb 10, 11(3)
  04ef7c8  li 9, 80
  04ef7cc  lbz 10, 8(5)
  04ef7d0  addic 6, 6, -19652
  04ef7d4  lbz 11, 9(5)
  04ef7d8  mtctr 9
  04ef7dc  lbz 31, 10(5)
  04ef7e0  lbz 30, 11(5)
  04ef7e4  stb 10, 12(3)
  04ef7e8  addic 5, 12, -19651
  04ef7ec  stb 11, 13(3)
  04ef7f0  stb 31, 14(3)
  04ef7f4  stb 30, 15(3)
  04ef7f8  addc 10, 7, 8
  04ef7fc  addc 9, 7, 3
  04ef800  lbzx 12, 6, 7
  04ef804  clrldi 10, 10, 32
  04ef808  addic 11, 7, 2
  04ef80c  lbzx 7, 5, 7
  04ef810  stb 12, 16(9)
  04ef814  stb 7, 1(10)
  04ef818  extsw 7, 11
  04ef81c  bdnz 0x4ef7f8
  04ef820  ori 7, 4, 0
  04ef824  lis 5, 102
  04ef828  lis 4, 102
  04ef82c  li 6, 64
  04ef830  addic 5, 5, -20164
  04ef834  addic 4, 4, -20163
  04ef838  addc 9, 3, 7
  04ef83c  addc 8, 3, 7
  04ef840  lbzx 11, 5, 7
  04ef844  clrldi 9, 9, 32
  04ef848  addic 10, 7, 2
  04ef84c  addic 6, 6, -1
  04ef850  lbzx 7, 4, 7
  04ef854  stb 11, 176(8)
  04ef858  cmpwi 6, 0
  04ef85c  stb 7, 177(9)
  04ef860  extsw 7, 10
  04ef864  bf 2, 0x4ef838
  04ef868  b 0x4efb68
  04ef86c  lis 4, 102
  04ef870  lis 12, 102
  04ef874  addic 5, 4, -20200
  04ef878  lbz 4, -20200(4)
  04ef87c  lbz 6, 1(5)
  04ef880  lbz 7, 2(5)
  04ef884  lbz 8, 3(5)
  04ef888  stb 4, 4(3)
  04ef88c  stb 6, 5(3)
  04ef890  stb 7, 6(3)
  04ef894  stb 8, 7(3)
  04ef898  li 7, 0
  04ef89c  lbz 4, 4(5)
  04ef8a0  addic 8, 3, 16
  04ef8a4  lbz 6, 5(5)
  04ef8a8  lbz 9, 6(5)
  04ef8ac  lbz 10, 7(5)
  04ef8b0  stb 4, 8(3)
  04ef8b4  stb 6, 9(3)
  04ef8b8  ori 4, 7, 0
  04ef8bc  stb 9, 10(3)
  04ef8c0  lis 6, 102
  04ef8c4  stb 10, 11(3)
  04ef8c8  li 9, 80
  04ef8cc  lbz 10, 8(5)
  04ef8d0  addic 6, 6, -19492
  04ef8d4  lbz 11, 9(5)
  04ef8d8  mtctr 9
  04ef8dc  lbz 31, 10(5)
  04ef8e0  lbz 30, 11(5)
  04ef8e4  stb 10, 12(3)
  04ef8e8  addic 5, 12, -19491
  04ef8ec  stb 11, 13(3)
  04ef8f0  stb 31, 14(3)
  04ef8f4  stb 30, 15(3)
  04ef8f8  addc 10, 7, 8
  04ef8fc  addc 9, 7, 3
  04ef900  lbzx 12, 6, 7
  04ef904  clrldi 10, 10, 32
  04ef908  addic 11, 7, 2
  04ef90c  lbzx 7, 5, 7
  04ef910  stb 12, 16(9)
  04ef914  stb 7, 1(10)
  04ef918  extsw 7, 11
  04ef91c  bdnz 0x4ef8f8
  04ef920  ori 7, 4, 0
  04ef924  lis 5, 102
  04ef928  lis 4, 102
  04ef92c  li 6, 64
  04ef930  addic 5, 5, -20036
  04ef934  addic 4, 4, -20035
  04ef938  addc 9, 3, 7
  04ef93c  addc 8, 3, 7
  04ef940  lbzx 11, 5, 7
  04ef944  clrldi 9, 9, 32
  04ef948  addic 10, 7, 2
  04ef94c  addic 6, 6, -1
  04ef950  lbzx 7, 4, 7
  04ef954  stb 11, 176(8)
  04ef958  cmpwi 6, 0
  04ef95c  stb 7, 177(9)
  04ef960  extsw 7, 10
  04ef964  bf 2, 0x4ef938
  04ef968  b 0x4efb68
  04ef96c  lis 4, 102
  04ef970  lis 12, 102
  04ef974  addic 5, 4, -20188
  04ef978  lbz 4, -20188(4)
  04ef97c  lbz 6, 1(5)
  04ef980  lbz 7, 2(5)
  04ef984  lbz 8, 3(5)
  04ef988  stb 4, 4(3)
  04ef98c  stb 6, 5(3)
  04ef990  stb 7, 6(3)
  04ef994  stb 8, 7(3)
  04ef998  li 7, 0
  04ef99c  lbz 4, 4(5)
  04ef9a0  addic 8, 3, 16
  04ef9a4  lbz 6, 5(5)
  04ef9a8  lbz 9, 6(5)
  04ef9ac  lbz 10, 7(5)
  04ef9b0  stb 4, 8(3)
  04ef9b4  stb 6, 9(3)
  04ef9b8  ori 4, 7, 0
  04ef9bc  stb 9, 10(3)
  04ef9c0  lis 6, 102
  04ef9c4  stb 10, 11(3)
  04ef9c8  li 9, 80
  04ef9cc  lbz 10, 8(5)
  04ef9d0  addic 6, 6, -19332
  04ef9d4  lbz 11, 9(5)
  04ef9d8  mtctr 9
  04ef9dc  lbz 31, 10(5)
  04ef9e0  lbz 30, 11(5)
  04ef9e4  stb 10, 12(3)
  04ef9e8  addic 5, 12, -19331
  04ef9ec  stb 11, 13(3)
  04ef9f0  stb 31, 14(3)
  04ef9f4  stb 30, 15(3)
  04ef9f8  addc 10, 7, 8
  04ef9fc  addc 9, 7, 3
  04efa00  lbzx 12, 6, 7
  04efa04  clrldi 10, 10, 32
  04efa08  addic 11, 7, 2
  04efa0c  lbzx 7, 5, 7
  04efa10  stb 12, 16(9)
  04efa14  stb 7, 1(10)
  04efa18  extsw 7, 11
  04efa1c  bdnz 0x4ef9f8
  04efa20  ori 7, 4, 0
  04efa24  lis 5, 102
  04efa28  lis 4, 102
  04efa2c  li 6, 64
  04efa30  addic 5, 5, -19908
  04efa34  addic 4, 4, -19907
  04efa38  addc 9, 3, 7
  04efa3c  addc 8, 3, 7
  04efa40  lbzx 11, 5, 7
  04efa44  clrldi 9, 9, 32
  04efa48  addic 10, 7, 2
  04efa4c  addic 6, 6, -1
  04efa50  lbzx 7, 4, 7
  04efa54  stb 11, 176(8)
  04efa58  cmpwi 6, 0
  04efa5c  stb 7, 177(9)
  04efa60  extsw 7, 10
  04efa64  bf 2, 0x4efa38
  04efa68  b 0x4efb68
  04efa6c  lis 4, 102
  04efa70  lis 12, 102
  04efa74  addic 5, 4, -20176
  04efa78  lbz 4, -20176(4)
  04efa7c  lbz 6, 1(5)
  04efa80  lbz 7, 2(5)
  04efa84  lbz 8, 3(5)
  04efa88  stb 4, 4(3)
  04efa8c  stb 6, 5(3)
  04efa90  stb 7, 6(3)
  04efa94  stb 8, 7(3)
  04efa98  li 7, 0
  04efa9c  lbz 4, 4(5)
  04efaa0  addic 8, 3, 16
  04efaa4  lbz 6, 5(5)
  04efaa8  lbz 9, 6(5)
  04efaac  lbz 10, 7(5)
  04efab0  stb 4, 8(3)
  04efab4  stb 6, 9(3)
  04efab8  ori 4, 7, 0
  04efabc  stb 9, 10(3)
  04efac0  lis 6, 102
  04efac4  stb 10, 11(3)
  04efac8  li 9, 80
  04efacc  lbz 10, 8(5)
  04efad0  addic 6, 6, -19172
  04efad4  lbz 11, 9(5)
  04efad8  mtctr 9
  04efadc  lbz 31, 10(5)
  04efae0  lbz 30, 11(5)
  04efae4  stb 10, 12(3)
  04efae8  addic 5, 12, -19171
  04efaec  stb 11, 13(3)
  04efaf0  stb 31, 14(3)
  04efaf4  stb 30, 15(3)
  04efaf8  addc 10, 7, 8
  04efafc  addc 9, 7, 3
  04efb00  lbzx 12, 6, 7
  04efb04  clrldi 10, 10, 32
  04efb08  addic 11, 7, 2
  04efb0c  lbzx 7, 5, 7
  04efb10  stb 12, 16(9)
  04efb14  stb 7, 1(10)
  04efb18  extsw 7, 11
  04efb1c  bdnz 0x4efaf8
  04efb20  li 5, 64
  04efb24  ori 6, 4, 0
  04efb28  mtctr 5
  04efb2c  lis 5, 102
  04efb30  lis 4, 102
  04efb34  addic 7, 3, 176
  04efb38  addic 5, 5, -19780
  04efb3c  addic 4, 4, -19779
  04efb40  addc 9, 6, 7
  04efb44  addc 8, 6, 3
  04efb48  lbzx 11, 5, 6
  04efb4c  clrldi 9, 9, 32
  04efb50  addic 10, 6, 2
  04efb54  lbzx 6, 4, 6
  04efb58  stb 11, 176(8)
  04efb5c  stb 6, 1(9)
  04efb60  extsw 6, 10
  04efb64  bdnz 0x4efb40
  04efb68  ld 30, 48(1)
  04efb6c  ld 31, 56(1)
  04efb70  addi 1, 1, 64
  04efb74  blr

FUN_004efb80:   # 0x4efb80, 0x244 bytes
  04efb80  stdu 1, -160(1)
  04efb84  mflr 0
  04efb88  std 0, 176(1)
  04efb8c  std 30, 144(1)
  04efb90  std 31, 152(1)
  04efb94  ori 30, 4, 0
  04efb98  ori 31, 6, 0
  04efb9c  std 29, 136(1)
  04efba0  std 28, 128(1)
  04efba4  ori 4, 5, 0
  04efba8  bl 0x4ef730
  04efbac  li 3, 4
  04efbb0  bl 0x64f4a4
  04efbb4  ld 2, 40(1)
  04efbb8  li 3, 22
  04efbbc  bl 0x64f4a4
  04efbc0  ld 2, 40(1)
  04efbc4  lis 3, 144
  04efbc8  std 2, 40(1)
  04efbcc  li 4, 1
  04efbd0  lwz 3, 11984(3)
  04efbd4  lwz 5, 0(3)
  04efbd8  lwz 5, 28(5)
  04efbdc  lwz 6, 0(5)
  04efbe0  lwz 2, 4(5)
  04efbe4  mtctr 6
  04efbe8  bcctrl 20, 30
  04efbec  ori 3, 30, 0
  04efbf0  ld 2, 40(1)
  04efbf4  lis 4, 4
  04efbf8  bl 0x4fe52c
  04efbfc  nop
  04efc00  lis 4, 4
  04efc04  bl 0x64ee04
  04efc08  ld 2, 40(1)
  04efc0c  cmpwi 3, 0
  04efc10  bf 0, 0x4efc30
  04efc14  lis 4, 102
  04efc18  li 3, 6
  04efc1c  addic 4, 4, -19012
  04efc20  bl 0x4ffd4c
  04efc24  nop
  04efc28  li 3, 1
  04efc2c  stb 3, 0(31)
  04efc30  ori 3, 30, 0
  04efc34  lis 4, 1
  04efc38  bl 0x4fe52c
  04efc3c  nop
  04efc40  lis 4, 1
  04efc44  bl 0x64eda4
  04efc48  ld 2, 40(1)
  04efc4c  cmpwi 3, 0
  04efc50  bt 2, 0x4efc74
  04efc54  ori 5, 3, 0
  04efc58  lis 4, 102
  04efc5c  li 3, 6
  04efc60  addic 4, 4, -18948
  04efc64  bl 0x4ffd4c
  04efc68  nop
  04efc6c  li 3, 1
  04efc70  stb 3, 0(31)
  04efc74  lis 3, 79
  04efc78  addic 6, 1, 112
  04efc7c  addi 3, 3, -1160
  04efc80  li 4, 0
  04efc84  li 5, 0
  04efc88  ld 29, 0(3)
  04efc8c  ori 3, 29, 0
  04efc90  bl 0x64ede4
  04efc94  ld 2, 40(1)
  04efc98  cmpwi 3, 0
  04efc9c  bt 2, 0x4efcc0
  04efca0  ori 5, 3, 0
  04efca4  lis 4, 102
  04efca8  li 3, 6
  04efcac  addic 4, 4, -18868
  04efcb0  bl 0x4ffd4c
  04efcb4  nop
  04efcb8  li 3, 1
  04efcbc  stb 3, 0(31)
  04efcc0  ori 3, 30, 0
  04efcc4  lwz 4, 112(1)
  04efcc8  ori 28, 29, 0
  04efccc  extsw 4, 4
  04efcd0  bl 0x4fe52c
  04efcd4  nop
  04efcd8  ori 29, 3, 0
  04efcdc  ori 3, 28, 0
  04efce0  lwz 5, 112(1)
  04efce4  ori 4, 29, 0
  04efce8  li 6, 0
  04efcec  bl 0x64ede4
  04efcf0  ld 2, 40(1)
  04efcf4  cmpwi 3, 0
  04efcf8  bt 2, 0x4efd1c
  04efcfc  ori 5, 3, 0
  04efd00  lis 4, 102
  04efd04  li 3, 6
  04efd08  addic 4, 4, -18788
  04efd0c  bl 0x4ffd4c
  04efd10  nop
  04efd14  li 3, 1
  04efd18  stb 3, 0(31)
  04efd1c  li 3, 1
  04efd20  lwz 5, 112(1)
  04efd24  stw 29, 116(1)
  04efd28  addic 4, 1, 116
  04efd2c  stw 5, 120(1)
  04efd30  bl 0x64edc4
  04efd34  ld 2, 40(1)
  04efd38  ori 29, 3, 0
  04efd3c  cmpwi 29, 0
  04efd40  bt 2, 0x4efd64
  04efd44  lis 4, 102
  04efd48  li 3, 6
  04efd4c  addic 4, 4, -18700
  04efd50  ori 5, 29, 0
  04efd54  bl 0x4ffd4c
  04efd58  nop
  04efd5c  li 3, 1
  04efd60  stb 3, 0(31)
  04efd64  ori 3, 30, 0
  04efd68  bl 0x4f75d8
  04efd6c  nop
  04efd70  ori 29, 3, 0
  04efd74  ori 3, 30, 0
  04efd78  bl 0x4f5b40
  04efd7c  nop
  04efd80  ori 30, 3, 0
  04efd84  ori 3, 29, 0
  04efd88  li 4, 1
  04efd8c  bl 0x4f7d7c
  04efd90  nop
  04efd94  ori 3, 30, 0
  04efd98  bl 0x4f5be4
  04efd9c  nop
  04efda0  lbz 3, 0(31)
  04efda4  ld 0, 176(1)
  04efda8  mtlr 0
  04efdac  ld 28, 128(1)
  04efdb0  ld 29, 136(1)
  04efdb4  ld 30, 144(1)
  04efdb8  ld 31, 152(1)
  04efdbc  addi 1, 1, 160
  04efdc0  blr

FUN_004efdc8:   # 0x4efdc8, 0x2c bytes
  04efdc8  stdu 1, -112(1)
  04efdcc  mflr 0
  04efdd0  std 0, 128(1)
  04efdd4  cmpwi 3, 0
  04efdd8  bf 2, 0x4efde4
  04efddc  bl 0x13a20
  04efde0  nop
  04efde4  ld 0, 128(1)
  04efde8  mtlr 0
  04efdec  addi 1, 1, 112
  04efdf0  blr
