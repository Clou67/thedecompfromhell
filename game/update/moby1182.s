# game/update/moby1182.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1189_001f0658:   # 0x1f0658, 0x14 bytes
  01f0658  lis 3, 118
  01f065c  lis 4, 1
  01f0660  addic 3, 3, 24352
  01f0664  stw 4, 72(3)
  01f0668  blr

M1189_001f0670:   # 0x1f0670, 0x1bc bytes
  01f0670  stdu 1, -160(1)
  01f0674  mflr 0
  01f0678  std 0, 176(1)
  01f067c  std 30, 144(1)
  01f0680  ori 30, 3, 0
  01f0684  std 31, 152(1)
  01f0688  ori 3, 5, 0
  01f068c  std 29, 136(1)
  01f0690  ori 31, 4, 0
  01f0694  bl 0xefa28
  01f0698  nop
  01f069c  ori 29, 3, 0
  01f06a0  cmpwi 29, 0
  01f06a4  bt 2, 0x1f080c
  01f06a8  li 3, 255
  01f06ac  li 4, 1
  01f06b0  stb 3, 48(29)
  01f06b4  sth 3, 50(29)
  01f06b8  stb 4, 49(29)
  01f06bc  stb 4, 32(29)
  01f06c0  ori 3, 29, 0
  01f06c4  lfs 1, 0(31)
  01f06c8  lwz 4, 120(29)
  01f06cc  stfs 1, 16(29)
  01f06d0  lfs 1, 4(31)
  01f06d4  stfs 1, 20(29)
  01f06d8  lfs 1, 8(31)
  01f06dc  stfs 1, 24(29)
  01f06e0  lfs 1, 12(31)
  01f06e4  stfs 1, 28(29)
  01f06e8  lfs 1, 0(31)
  01f06ec  stfs 1, 16(4)
  01f06f0  lfs 1, 4(31)
  01f06f4  stfs 1, 20(4)
  01f06f8  lfs 1, 8(31)
  01f06fc  stfs 1, 24(4)
  01f0700  lfs 1, 12(31)
  01f0704  stw 30, 44(4)
  01f0708  stfs 1, 28(4)
  01f070c  bl 0xf31a8
  01f0710  nop
  01f0714  addic 5, 1, 112
  01f0718  ori 3, 29, 0
  01f071c  li 4, 0
  01f0720  bl 0xf1114
  01f0724  nop
  01f0728  lfs 1, 0(31)
  01f072c  lfs 2, 112(1)
  01f0730  lfs 3, 4(31)
  01f0734  fsubs 2, 1, 2
  01f0738  lfs 4, 116(1)
  01f073c  lfs 5, 8(31)
  01f0740  fsubs 3, 3, 4
  01f0744  lfs 4, 120(1)
  01f0748  lfs 6, 192(30)
  01f074c  fsubs 4, 5, 4
  01f0750  lfs 5, 212(30)
  01f0754  lfs 7, 224(30)
  01f0758  lfs 8, 196(30)
  01f075c  fmadds 1, 6, 2, 1
  01f0760  lfs 6, 208(30)
  01f0764  fmuls 5, 5, 3
  01f0768  lfs 9, 216(30)
  01f076c  lfs 10, 228(30)
  01f0770  fmuls 9, 9, 3
  01f0774  lfs 11, 200(30)
  01f0778  lfs 12, 232(30)
  01f077c  addic 4, 30, 192
  01f0780  fmadds 1, 7, 4, 1
  01f0784  fmadds 5, 8, 2, 5
  01f0788  li 6, 208
  01f078c  fmadds 2, 11, 2, 9
  01f0790  li 7, 224
  01f0794  addic 5, 29, 192
  01f0798  ori 3, 29, 0
  01f079c  fmadds 1, 6, 3, 1
  01f07a0  fmadds 3, 10, 4, 5
  01f07a4  fmadds 2, 12, 4, 2
  01f07a8  stfs 1, 16(29)
  01f07ac  lfs 1, 4(31)
  01f07b0  fadds 1, 1, 3
  01f07b4  stfs 1, 20(29)
  01f07b8  lfs 1, 8(31)
  01f07bc  fadds 1, 1, 2
  01f07c0  stfs 1, 24(29)
  01f07c4  lfs 1, 12(31)
  01f07c8  stfs 1, 28(29)
  01f07cc  lfs 1, 64(30)
  01f07d0  stfs 1, 64(29)
  01f07d4  lfs 1, 68(30)
  01f07d8  stfs 1, 68(29)
  01f07dc  lfs 1, 72(30)
  01f07e0  stfs 1, 72(29)
  01f07e4  lfs 1, 76(30)
  01f07e8  stfs 1, 76(29)
  01f07ec  lvx 2, 0, 4
  01f07f0  lvx 3, 6, 30
  01f07f4  lvx 4, 7, 30
  01f07f8  stvx 2, 0, 5
  01f07fc  stvx 3, 6, 29
  01f0800  stvx 4, 7, 29
  01f0804  bl 0xf31a8
  01f0808  nop
  01f080c  ori 3, 29, 0
  01f0810  ld 0, 176(1)
  01f0814  mtlr 0
  01f0818  ld 29, 136(1)
  01f081c  ld 30, 144(1)
  01f0820  ld 31, 152(1)
  01f0824  addi 1, 1, 160
  01f0828  blr

M1189_001f0830:   # 0x1f0830, 0x98 bytes
  01f0830  lis 6, 31
  01f0834  lis 8, 164
  01f0838  addi 6, 6, 2092
  01f083c  li 7, 0
  01f0840  lfs 2, 0(6)
  01f0844  lwz 6, -28500(8)
  01f0848  cmpwi 6, 0
  01f084c  bt 2, 0x1f08b4
  01f0850  lhz 8, 166(6)
  01f0854  extsh 8, 8
  01f0858  cmpw 8, 4
  01f085c  bf 2, 0x1f08a8
  01f0860  lfs 1, 4(3)
  01f0864  lfs 3, 20(6)
  01f0868  lfs 4, 0(3)
  01f086c  fsubs 1, 1, 3
  01f0870  lfs 3, 16(6)
  01f0874  fsubs 3, 4, 3
  01f0878  lfs 4, 8(3)
  01f087c  lfs 5, 24(6)
  01f0880  fsubs 4, 4, 5
  01f0884  fmuls 1, 1, 1
  01f0888  fmadds 1, 3, 3, 1
  01f088c  fmadds 1, 4, 4, 1
  01f0890  fsqrts 1, 1
  01f0894  fcmpu 0, 2, 1
  01f0898  cror 6, 0, 2
  01f089c  bt 6, 0x1f08a8
  01f08a0  fmr 2, 1
  01f08a4  ori 7, 6, 0
  01f08a8  lwz 6, 40(6)
  01f08ac  cmpwi 6, 0
  01f08b0  bf 2, 0x1f0850
  01f08b4  cmpwi 5, 0
  01f08b8  bt 2, 0x1f08c0
  01f08bc  stfs 2, 0(5)
  01f08c0  ori 3, 7, 0
  01f08c4  blr

UpdateMoby_1182:   # 0x1f0948, 0x10e4 bytes
  01f0948  stdu 1, -544(1)
  01f094c  mflr 0
  01f0950  std 0, 560(1)
  01f0954  stfd 22, 464(1)
  01f0958  stfd 23, 472(1)
  01f095c  stfd 24, 480(1)
  01f0960  stfd 25, 488(1)
  01f0964  stfd 26, 496(1)
  01f0968  stfd 27, 504(1)
  01f096c  stfd 28, 512(1)
  01f0970  stfd 29, 520(1)
  01f0974  stfd 30, 528(1)
  01f0978  stfd 31, 536(1)
  01f097c  std 31, 456(1)
  01f0980  lis 4, 241
  01f0984  ori 31, 3, 0
  01f0988  std 30, 448(1)
  01f098c  lwz 3, -29152(4)
  01f0990  lwz 30, 120(31)
  01f0994  addic 3, 3, 1
  01f0998  stw 3, -29152(4)
  01f099c  lbz 3, 32(31)
  01f09a0  cmpwi 3, 2
  01f09a4  cmpwi 1, 3, -1
  01f09a8  cmpwi 6, 3, 0
  01f09ac  std 29, 440(1)
  01f09b0  std 28, 432(1)
  01f09b4  std 27, 424(1)
  01f09b8  std 26, 416(1)
  01f09bc  std 25, 408(1)
  01f09c0  std 24, 400(1)
  01f09c4  cmpwi 7, 3, 4
  01f09c8  bt 1, 0x1f09d8
  01f09cc  bf 5, 0x1f19d4
  01f09d0  bf 25, 0x1f09f4
  01f09d4  b 0x1f0bfc
  01f09d8  bt 29, 0x1f09e8
  01f09dc  cmpwi 3, 3
  01f09e0  bf 1, 0x1f0ef4
  01f09e4  b 0x1f12fc
  01f09e8  cmpwi 3, 5
  01f09ec  bf 1, 0x1f18b8
  01f09f0  b 0x1f19d4
  01f09f4  ori 3, 31, 0
  01f09f8  addic 5, 1, 128
  01f09fc  li 4, 0
  01f0a00  bl 0xf1114
  01f0a04  nop
  01f0a08  lwz 3, 104(30)
  01f0a0c  lfs 4, 16(31)
  01f0a10  lfs 5, 20(31)
  01f0a14  cmpwi 3, -1
  01f0a18  lfs 6, 24(31)
  01f0a1c  bt 2, 0x1f0a4c
  01f0a20  lis 4, 151
  01f0a24  extsw 3, 3
  01f0a28  addic 4, 4, -16400
  01f0a2c  addc 3, 4, 3
  01f0a30  lbz 3, 57(3)
  01f0a34  cmpwi 3, 0
  01f0a38  bt 2, 0x1f0a4c
  01f0a3c  ori 3, 31, 0
  01f0a40  bl 0xefb38
  01f0a44  nop
  01f0a48  b 0x1f19d4
  01f0a4c  li 3, 1023
  01f0a50  lhz 5, 166(31)
  01f0a54  cmpwi 5, 1184
  01f0a58  sth 3, 50(31)
  01f0a5c  bf 2, 0x1f0aac
  01f0a60  lhz 3, 40(30)
  01f0a64  cmpwi 3, 0
  01f0a68  bt 2, 0x1f0ba0
  01f0a6c  li 3, 255
  01f0a70  li 4, 0
  01f0a74  li 29, 1182
  01f0a78  sth 3, 50(31)
  01f0a7c  stw 4, 44(30)
  01f0a80  cmpwi 29, 1184
  01f0a84  bt 2, 0x1f0a98
  01f0a88  addic 4, 1, 128
  01f0a8c  ori 3, 31, 0
  01f0a90  ori 5, 29, 0
  01f0a94  bl 0x1f0670
  01f0a98  addic 29, 29, 1
  01f0a9c  extsw 29, 29
  01f0aa0  cmpwi 29, 1189
  01f0aa4  bf 1, 0x1f0a80
  01f0aa8  b 0x1f0ba0
  01f0aac  lis 3, 31
  01f0ab0  lis 6, 164
  01f0ab4  addi 4, 3, 2248
  01f0ab8  li 3, 0
  01f0abc  lfs 3, 0(4)
  01f0ac0  lwz 4, -28500(6)
  01f0ac4  fmr 1, 3
  01f0ac8  cmpwi 4, 0
  01f0acc  bt 2, 0x1f0b28
  01f0ad0  fmr 1, 3
  01f0ad4  lhz 6, 166(4)
  01f0ad8  cmpwi 6, 1184
  01f0adc  bf 2, 0x1f0b1c
  01f0ae0  lfs 2, 20(4)
  01f0ae4  lfs 7, 16(4)
  01f0ae8  fsubs 2, 5, 2
  01f0aec  lfs 8, 24(4)
  01f0af0  fsubs 7, 4, 7
  01f0af4  fsubs 8, 6, 8
  01f0af8  fmuls 2, 2, 2
  01f0afc  fmadds 2, 7, 7, 2
  01f0b00  fmadds 2, 8, 8, 2
  01f0b04  fsqrts 2, 2
  01f0b08  fcmpu 0, 1, 2
  01f0b0c  cror 6, 0, 2
  01f0b10  bt 6, 0x1f0b1c
  01f0b14  ori 3, 4, 0
  01f0b18  fmr 1, 2
  01f0b1c  lwz 4, 40(4)
  01f0b20  cmpwi 4, 0
  01f0b24  bf 2, 0x1f0ad4
  01f0b28  addic 4, 1, 368
  01f0b2c  cmpwi 4, 0
  01f0b30  bt 2, 0x1f0b38
  01f0b34  fmr 3, 1
  01f0b38  lis 4, 31
  01f0b3c  addi 4, 4, 2248
  01f0b40  lfs 1, 4(4)
  01f0b44  fcmpu 0, 3, 1
  01f0b48  cror 6, 1, 2
  01f0b4c  bt 6, 0x1f0b78
  01f0b50  clrldi 4, 3, 32
  01f0b54  lhz 5, 166(31)
  01f0b58  stw 3, 44(30)
  01f0b5c  extsh 3, 5
  01f0b60  sldi 3, 3, 2
  01f0b64  lwz 4, 120(4)
  01f0b68  addc 3, 4, 3
  01f0b6c  clrldi 3, 3, 32
  01f0b70  stw 31, -4620(3)
  01f0b74  b 0x1f0ba0
  01f0b78  fmr 1, 3
  01f0b7c  lis 3, 101
  01f0b80  lhz 4, 178(31)
  01f0b84  extsh 5, 5
  01f0b88  addic 3, 3, 19804
  01f0b8c  extsh 4, 4
  01f0b90  stfd 1, 72(1)
  01f0b94  ld 6, 72(1)
  01f0b98  bl 0x5cd098
  01f0b9c  nop
  01f0ba0  li 4, 0
  01f0ba4  addic 5, 1, 372
  01f0ba8  addic 6, 1, 240
  01f0bac  ori 3, 31, 0
  01f0bb0  stw 4, 372(1)
  01f0bb4  lfs 31, 44(31)
  01f0bb8  li 4, 1
  01f0bbc  bl 0xf9d18
  01f0bc0  nop
  01f0bc4  lfs 1, 288(1)
  01f0bc8  fmuls 1, 1, 31
  01f0bcc  li 3, 1
  01f0bd0  stfs 1, 48(30)
  01f0bd4  lfs 1, 292(1)
  01f0bd8  fmuls 1, 1, 31
  01f0bdc  stfs 1, 52(30)
  01f0be0  lfs 1, 296(1)
  01f0be4  fmuls 1, 1, 31
  01f0be8  stfs 1, 56(30)
  01f0bec  lfs 1, 300(1)
  01f0bf0  stfs 1, 60(30)
  01f0bf4  stb 3, 32(31)
  01f0bf8  b 0x1f19d4
  01f0bfc  lhz 4, 166(31)
  01f0c00  cmpwi 4, 1184
  01f0c04  bf 2, 0x1f0c7c
  01f0c08  lis 3, 31
  01f0c0c  lfs 2, 76(30)
  01f0c10  lis 29, 114
  01f0c14  addi 3, 3, 2248
  01f0c18  addic 4, 30, 64
  01f0c1c  addic 5, 30, 68
  01f0c20  lfs 31, 8(3)
  01f0c24  lfs 1, 72(30)
  01f0c28  fmuls 2, 2, 31
  01f0c2c  lfs 3, -3052(29)
  01f0c30  ori 3, 31, 0
  01f0c34  fmuls 2, 2, 3
  01f0c38  bl 0x116a68
  01f0c3c  nop
  01f0c40  lfs 1, 92(30)
  01f0c44  addic 4, 30, 80
  01f0c48  lfs 2, 96(30)
  01f0c4c  addic 5, 30, 84
  01f0c50  fmuls 3, 1, 31
  01f0c54  ori 3, 31, 0
  01f0c58  fmuls 4, 2, 31
  01f0c5c  lfs 1, 88(30)
  01f0c60  lfs 5, -3052(29)
  01f0c64  fmuls 1, 1, 31
  01f0c68  fmuls 2, 3, 5
  01f0c6c  fmuls 3, 4, 5
  01f0c70  bl 0x116b70
  01f0c74  nop
  01f0c78  lhz 4, 166(31)
  01f0c7c  cmpwi 4, 1184
  01f0c80  bt 2, 0x1f0d88
  01f0c84  lwz 3, 44(30)
  01f0c88  cmpwi 3, 0
  01f0c8c  bt 2, 0x1f0d88
  01f0c90  lbz 5, 32(3)
  01f0c94  cmpwi 5, 3
  01f0c98  bt 2, 0x1f0d88
  01f0c9c  ori 4, 3, 0
  01f0ca0  addic 3, 1, 304
  01f0ca4  lfs 1, 64(4)
  01f0ca8  stfs 1, 64(31)
  01f0cac  lfs 1, 68(4)
  01f0cb0  stfs 1, 68(31)
  01f0cb4  lfs 1, 72(4)
  01f0cb8  lwz 5, 44(30)
  01f0cbc  stfs 1, 72(31)
  01f0cc0  lfs 1, 76(4)
  01f0cc4  addic 4, 5, 64
  01f0cc8  stfs 1, 76(31)
  01f0ccc  bl 0x500ca4
  01f0cd0  nop
  01f0cd4  lfs 1, 320(1)
  01f0cd8  lfs 2, 52(30)
  01f0cdc  lfs 3, 324(1)
  01f0ce0  lfs 4, 304(1)
  01f0ce4  fmuls 1, 1, 2
  01f0ce8  lfs 5, 48(30)
  01f0cec  fmuls 3, 3, 2
  01f0cf0  lfs 6, 328(1)
  01f0cf4  addic 5, 1, 144
  01f0cf8  lfs 7, 308(1)
  01f0cfc  fmuls 2, 6, 2
  01f0d00  lfs 6, 312(1)
  01f0d04  li 4, 0
  01f0d08  lfs 8, 336(1)
  01f0d0c  lfs 9, 56(30)
  01f0d10  fmadds 1, 4, 5, 1
  01f0d14  fmadds 3, 7, 5, 3
  01f0d18  lfs 4, 340(1)
  01f0d1c  lfs 7, 352(1)
  01f0d20  fmadds 2, 6, 5, 2
  01f0d24  lfs 10, 344(1)
  01f0d28  lfs 5, 60(30)
  01f0d2c  lfs 6, 356(1)
  01f0d30  fmadds 1, 8, 9, 1
  01f0d34  fmadds 3, 4, 9, 3
  01f0d38  lfs 4, 360(1)
  01f0d3c  lwz 3, 44(30)
  01f0d40  fmadds 2, 10, 9, 2
  01f0d44  fmadds 31, 7, 5, 1
  01f0d48  fmadds 30, 6, 5, 3
  01f0d4c  fmadds 29, 4, 5, 2
  01f0d50  bl 0xf1114
  01f0d54  nop
  01f0d58  lfs 1, 144(1)
  01f0d5c  lfs 2, 148(1)
  01f0d60  fsubs 1, 1, 31
  01f0d64  lfs 3, 152(1)
  01f0d68  fsubs 2, 2, 30
  01f0d6c  lfs 4, 156(1)
  01f0d70  fsubs 3, 3, 29
  01f0d74  lhz 4, 166(31)
  01f0d78  stfs 4, 28(31)
  01f0d7c  stfs 1, 16(31)
  01f0d80  stfs 2, 20(31)
  01f0d84  stfs 3, 24(31)
  01f0d88  lwz 3, 44(30)
  01f0d8c  cmpwi 3, 0
  01f0d90  bt 2, 0x1f0dbc
  01f0d94  lhz 3, 52(31)
  01f0d98  lwz 5, 44(30)
  01f0d9c  rlwinm 3, 3, 0, 0, 30
  01f0da0  sth 3, 52(31)
  01f0da4  lhz 6, 52(5)
  01f0da8  clrlwi 6, 6, 31
  01f0dac  or 3, 3, 6
  01f0db0  sth 3, 52(31)
  01f0db4  lbz 3, 188(5)
  01f0db8  stb 3, 188(31)
  01f0dbc  lbz 3, 32(31)
  01f0dc0  cmpwi 1, 4, 1184
  01f0dc4  cmpwi 3, 2
  01f0dc8  bf 2, 0x1f0e24
  01f0dcc  bf 6, 0x1f0e04
  01f0dd0  lis 3, 31
  01f0dd4  lis 4, 118
  01f0dd8  addi 3, 3, 2248
  01f0ddc  lis 5, 114
  01f0de0  lfs 3, 8(3)
  01f0de4  lfs 2, 24544(4)
  01f0de8  lfs 1, 64(31)
  01f0dec  fmuls 2, 2, 3
  01f0df0  lfs 4, -3052(5)
  01f0df4  fmuls 2, 2, 4
  01f0df8  bl 0x502578
  01f0dfc  nop
  01f0e00  stfs 1, 64(31)
  01f0e04  addic 3, 30, 42
  01f0e08  bl 0x4fffb4
  01f0e0c  nop
  01f0e10  cmpwi 3, 0
  01f0e14  bt 2, 0x1f19d4
  01f0e18  li 3, 3
  01f0e1c  stb 3, 32(31)
  01f0e20  b 0x1f19d4
  01f0e24  lbz 3, 188(31)
  01f0e28  cmpwi 3, 1
  01f0e2c  bf 2, 0x1f19d4
  01f0e30  li 3, 255
  01f0e34  lis 4, 118
  01f0e38  stb 3, 48(31)
  01f0e3c  lwz 3, 24548(4)
  01f0e40  lis 4, 31
  01f0e44  extsw 3, 3
  01f0e48  std 3, 384(1)
  01f0e4c  addi 3, 4, 2248
  01f0e50  lis 4, 114
  01f0e54  lfs 1, 12(3)
  01f0e58  lfs 2, -3056(4)
  01f0e5c  lfd 3, 384(1)
  01f0e60  fcfid 3, 3
  01f0e64  lis 3, 118
  01f0e68  lwz 3, 24552(3)
  01f0e6c  extsw 3, 3
  01f0e70  frsp 3, 3
  01f0e74  fadds 3, 3, 1
  01f0e78  fmuls 3, 2, 3
  01f0e7c  fctiwz 3, 3
  01f0e80  stfd 3, 384(1)
  01f0e84  lwz 4, 388(1)
  01f0e88  std 3, 384(1)
  01f0e8c  extsw 3, 4
  01f0e90  lfd 3, 384(1)
  01f0e94  fcfid 3, 3
  01f0e98  frsp 3, 3
  01f0e9c  fadds 1, 3, 1
  01f0ea0  fmuls 1, 2, 1
  01f0ea4  fctiwz 1, 1
  01f0ea8  stfd 1, 384(1)
  01f0eac  lwz 4, 388(1)
  01f0eb0  extsw 4, 4
  01f0eb4  bl 0xfe484
  01f0eb8  nop
  01f0ebc  sth 3, 42(30)
  01f0ec0  li 3, 0
  01f0ec4  lwz 4, 108(30)
  01f0ec8  cmpwi 4, 0
  01f0ecc  bt 2, 0x1f0ed8
  01f0ed0  li 5, 255
  01f0ed4  stb 5, 48(4)
  01f0ed8  addic 3, 3, 1
  01f0edc  addic 30, 30, 4
  01f0ee0  cmpwi 3, 9
  01f0ee4  bt 0, 0x1f0ec4
  01f0ee8  li 3, 2
  01f0eec  stb 3, 32(31)
  01f0ef0  b 0x1f19d4
  01f0ef4  addic 3, 30, 42
  01f0ef8  bl 0x4fffb4
  01f0efc  nop
  01f0f00  lis 4, 151
  01f0f04  li 3, 1
  01f0f08  addic 4, 4, -16400
  01f0f0c  stb 3, 56(4)
  01f0f10  lwz 3, 104(30)
  01f0f14  cmpwi 3, -1
  01f0f18  bt 2, 0x1f0f2c
  01f0f1c  extsw 3, 3
  01f0f20  li 5, 1
  01f0f24  addc 3, 4, 3
  01f0f28  stb 5, 57(3)
  01f0f2c  li 4, 512
  01f0f30  ori 3, 31, 0
  01f0f34  li 5, -1
  01f0f38  bl 0xfd8d0
  01f0f3c  nop
  01f0f40  lis 4, 31
  01f0f44  ori 3, 31, 0
  01f0f48  addi 5, 4, 2248
  01f0f4c  li 6, -1
  01f0f50  addic 4, 31, 16
  01f0f54  lfs 1, 16(5)
  01f0f58  lfs 2, 20(5)
  01f0f5c  bl 0x10fb28
  01f0f60  nop
  01f0f64  lhz 3, 166(31)
  01f0f68  cmpwi 3, 1184
  01f0f6c  bf 2, 0x1f0f84
  01f0f70  li 3, 2
  01f0f74  li 4, 0
  01f0f78  ori 5, 31, 0
  01f0f7c  bl 0x15d12c
  01f0f80  nop
  01f0f84  addic 5, 1, 160
  01f0f88  ori 3, 31, 0
  01f0f8c  li 4, 0
  01f0f90  bl 0xf1114
  01f0f94  nop
  01f0f98  lfs 1, 16(31)
  01f0f9c  lfs 2, 160(1)
  01f0fa0  fsubs 1, 1, 2
  01f0fa4  lis 3, 31
  01f0fa8  lis 4, 118
  01f0fac  addi 6, 3, 2248
  01f0fb0  lis 3, 151
  01f0fb4  lis 5, 114
  01f0fb8  addic 7, 3, -25376
  01f0fbc  stfs 1, 0(30)
  01f0fc0  lfs 2, 20(31)
  01f0fc4  lfs 3, 164(1)
  01f0fc8  fsubs 2, 2, 3
  01f0fcc  stfs 2, 4(30)
  01f0fd0  lfs 3, 24(31)
  01f0fd4  lfs 4, 168(1)
  01f0fd8  lhz 3, 166(31)
  01f0fdc  fsubs 3, 3, 4
  01f0fe0  cmpwi 3, 1185
  01f0fe4  stfs 3, 8(30)
  01f0fe8  lfs 4, 28(31)
  01f0fec  stfs 4, 12(30)
  01f0ff0  lfs 4, 24524(4)
  01f0ff4  lfs 7, -3052(5)
  01f0ff8  lfs 5, 24(6)
  01f0ffc  fmuls 4, 4, 7
  01f1000  fmuls 4, 4, 5
  01f1004  fmuls 1, 1, 4
  01f1008  fmuls 2, 2, 4
  01f100c  fmuls 3, 3, 4
  01f1010  stfs 1, 0(30)
  01f1014  stfs 2, 4(30)
  01f1018  stfs 3, 8(30)
  01f101c  lfs 3, 160(1)
  01f1020  lfs 4, 128(7)
  01f1024  lfs 5, 164(1)
  01f1028  lfs 6, 132(7)
  01f102c  fsubs 3, 3, 4
  01f1030  lfs 8, 168(1)
  01f1034  lfs 9, 136(7)
  01f1038  fsubs 4, 5, 6
  01f103c  fsubs 6, 8, 9
  01f1040  bt 2, 0x1f104c
  01f1044  cmpwi 3, 1186
  01f1048  bf 2, 0x1f1098
  01f104c  fmuls 5, 4, 4
  01f1050  lis 3, 31
  01f1054  addi 3, 3, 2248
  01f1058  fmadds 5, 3, 3, 5
  01f105c  lfs 8, 28(3)
  01f1060  lis 3, 118
  01f1064  fmadds 6, 6, 6, 5
  01f1068  lfs 5, 24540(3)
  01f106c  fmuls 5, 5, 7
  01f1070  fsqrts 6, 6
  01f1074  fcmpu 0, 6, 8
  01f1078  bf 2, 0x1f1088
  01f107c  fmr 3, 8
  01f1080  fmr 4, 3
  01f1084  b 0x1f10e0
  01f1088  fdivs 5, 5, 6
  01f108c  fmuls 3, 3, 5
  01f1090  fmuls 4, 4, 5
  01f1094  b 0x1f10e0
  01f1098  fmuls 5, 4, 4
  01f109c  lis 3, 31
  01f10a0  lis 4, 118
  01f10a4  addi 3, 3, 2248
  01f10a8  fmadds 5, 3, 3, 5
  01f10ac  lfs 8, 28(3)
  01f10b0  fmadds 6, 6, 6, 5
  01f10b4  lfs 5, 24528(4)
  01f10b8  fmuls 5, 5, 7
  01f10bc  fsqrts 6, 6
  01f10c0  fcmpu 0, 6, 8
  01f10c4  bf 2, 0x1f10d4
  01f10c8  fmr 3, 8
  01f10cc  fmr 4, 3
  01f10d0  b 0x1f10e0
  01f10d4  fdivs 5, 5, 6
  01f10d8  fmuls 3, 3, 5
  01f10dc  fmuls 4, 4, 5
  01f10e0  fadds 1, 1, 3
  01f10e4  li 3, 0
  01f10e8  fadds 2, 2, 4
  01f10ec  lis 4, 31
  01f10f0  addi 29, 4, 2248
  01f10f4  lis 4, 118
  01f10f8  stw 3, 8(30)
  01f10fc  stfs 1, 0(30)
  01f1100  stfs 2, 4(30)
  01f1104  lfs 31, 8(29)
  01f1108  lfs 2, 24532(4)
  01f110c  fmuls 2, 2, 31
  01f1110  fmuls 2, 2, 7
  01f1114  fneg 1, 2
  01f1118  bl 0xfcbe8
  01f111c  nop
  01f1120  lis 3, 118
  01f1124  stfs 1, 32(30)
  01f1128  lis 4, 114
  01f112c  lfs 1, 24536(3)
  01f1130  fmuls 2, 1, 31
  01f1134  lfs 1, -3052(4)
  01f1138  fmuls 2, 2, 1
  01f113c  fneg 1, 2
  01f1140  bl 0xfcbe8
  01f1144  nop
  01f1148  lis 3, 114
  01f114c  stfs 1, 36(30)
  01f1150  lfs 1, 32(29)
  01f1154  lfs 2, 36(29)
  01f1158  lfs 3, -3056(3)
  01f115c  fmuls 1, 3, 1
  01f1160  fmuls 2, 3, 2
  01f1164  fctidz 1, 1
  01f1168  fctidz 2, 2
  01f116c  fcfid 1, 1
  01f1170  fcfid 2, 2
  01f1174  frsp 1, 1
  01f1178  frsp 2, 2
  01f117c  bl 0xfcbe8
  01f1180  nop
  01f1184  fctiwz 1, 1
  01f1188  lis 3, 118
  01f118c  lis 29, 114
  01f1190  lis 4, 118
  01f1194  stfd 1, 384(1)
  01f1198  lwz 5, 388(1)
  01f119c  sth 5, 42(30)
  01f11a0  lfs 1, 24508(3)
  01f11a4  lfs 2, -3048(29)
  01f11a8  lfs 3, 24512(4)
  01f11ac  fmuls 1, 1, 2
  01f11b0  fmuls 2, 3, 2
  01f11b4  bl 0xfcbe8
  01f11b8  nop
  01f11bc  lhz 3, 166(31)
  01f11c0  stfs 1, 100(30)
  01f11c4  cmpwi 3, 1185
  01f11c8  lfs 1, -3048(29)
  01f11cc  bt 2, 0x1f11d8
  01f11d0  cmpwi 3, 1186
  01f11d4  bf 2, 0x1f12e8
  01f11d8  li 3, 32
  01f11dc  li 4, 42
  01f11e0  addi 5, 3, 16
  01f11e4  addi 6, 4, 16
  01f11e8  lis 7, 31
  01f11ec  <unknown>
  01f11f0  <unknown>
  01f11f4  <unknown>
  01f11f8  <unknown>
  01f11fc  addi 4, 7, 2248
  01f1200  vor 2, 2, 4
  01f1204  li 5, 40
  01f1208  vor 3, 3, 5
  01f120c  vspltisw 4, -16
  01f1210  vspltisw 6, -1
  01f1214  vrefp 5, 2
  01f1218  vsraw 3, 3, 4
  01f121c  <unknown>
  01f1220  vslw 6, 6, 6
  01f1224  vspltw 4, 4, 0
  01f1228  vcfsx 3, 3, 0
  01f122c  vspltisw 7, -1
  01f1230  vspltisw 10, -1
  01f1234  vspltisw 11, -1
  01f1238  vslw 7, 7, 7
  01f123c  li 5, 44
  01f1240  vspltisw 12, -1
  01f1244  vnmsubfp 8, 5, 2, 4
  01f1248  vspltisw 13, -1
  01f124c  vrefp 9, 3
  01f1250  vmaddfp 5, 5, 8, 6
  01f1254  vslw 6, 10, 10
  01f1258  vslw 10, 11, 11
  01f125c  vnmsubfp 8, 9, 3, 4
  01f1260  vnmsubfp 11, 5, 2, 4
  01f1264  vmaddfp 7, 9, 8, 7
  01f1268  vslw 8, 12, 12
  01f126c  vmaddfp 5, 5, 11, 6
  01f1270  vspltisw 6, -1
  01f1274  <unknown>
  01f1278  vspltw 11, 11, 0
  01f127c  vnmsubfp 9, 7, 3, 4
  01f1280  vslw 6, 6, 6
  01f1284  lis 4, 118
  01f1288  lis 5, 118
  01f128c  vnmsubfp 12, 5, 2, 4
  01f1290  vmaddfp 7, 7, 9, 10
  01f1294  vslw 9, 13, 13
  01f1298  vspltisw 10, -1
  01f129c  vmaddfp 5, 5, 12, 8
  01f12a0  vslw 8, 10, 10
  01f12a4  vnmsubfp 3, 7, 3, 4
  01f12a8  vspltisw 4, -1
  01f12ac  vslw 4, 4, 4
  01f12b0  vmaddfp 2, 5, 2, 6
  01f12b4  vmaddfp 3, 7, 3, 9
  01f12b8  vmaddfp 3, 3, 11, 8
  01f12bc  vmaddfp 2, 2, 3, 4
  01f12c0  vspltw 2, 2, 0
  01f12c4  stvewx 2, 3, 30
  01f12c8  lfs 2, 24516(4)
  01f12cc  fmuls 3, 2, 1
  01f12d0  lfs 2, 24520(5)
  01f12d4  fmuls 2, 2, 1
  01f12d8  fmr 1, 3
  01f12dc  bl 0xfcbe8
  01f12e0  nop
  01f12e4  stfs 1, 100(30)
  01f12e8  li 3, 0
  01f12ec  li 4, 4
  01f12f0  stw 3, 148(31)
  01f12f4  stb 4, 32(31)
  01f12f8  b 0x1f19d4
  01f12fc  lfs 1, 8(30)
  01f1300  lfs 2, 100(30)
  01f1304  fsubs 1, 1, 2
  01f1308  lfs 2, 0(30)
  01f130c  stfs 1, 8(30)
  01f1310  lfs 1, 16(31)
  01f1314  lfs 3, 20(31)
  01f1318  fadds 2, 1, 2
  01f131c  lfs 4, 24(31)
  01f1320  lfs 1, 64(31)
  01f1324  stfs 2, 16(31)
  01f1328  lfs 2, 4(30)
  01f132c  fadds 2, 3, 2
  01f1330  stfs 2, 20(31)
  01f1334  lfs 2, 8(30)
  01f1338  fadds 2, 4, 2
  01f133c  stfs 2, 24(31)
  01f1340  lfs 2, 32(30)
  01f1344  bl 0x502578
  01f1348  nop
  01f134c  stfs 1, 64(31)
  01f1350  lfs 1, 68(31)
  01f1354  lfs 2, 36(30)
  01f1358  bl 0x502578
  01f135c  nop
  01f1360  lwz 3, 16(31)
  01f1364  lis 4, 16704
  01f1368  stfs 1, 68(31)
  01f136c  srawi 5, 3, 31
  01f1370  srwi 6, 5, 1
  01f1374  xor 3, 6, 3
  01f1378  subc 3, 3, 5
  01f137c  cmpw 3, 4
  01f1380  bt 0, 0x1f13f4
  01f1384  lis 4, 17532
  01f1388  ori 4, 4, 49152
  01f138c  cmpw 3, 4
  01f1390  bt 1, 0x1f13f4
  01f1394  lwz 5, 20(31)
  01f1398  lis 3, 17532
  01f139c  srawi 6, 5, 31
  01f13a0  lis 4, 16704
  01f13a4  srwi 7, 6, 1
  01f13a8  ori 3, 3, 49152
  01f13ac  xor 5, 7, 5
  01f13b0  subc 5, 5, 6
  01f13b4  cmpw 1, 5, 3
  01f13b8  cmpw 5, 4
  01f13bc  cror 2, 0, 5
  01f13c0  bt 2, 0x1f13f4
  01f13c4  lwz 5, 24(31)
  01f13c8  lis 3, 17532
  01f13cc  srawi 6, 5, 31
  01f13d0  lis 4, 16704
  01f13d4  srwi 7, 6, 1
  01f13d8  ori 3, 3, 49152
  01f13dc  xor 5, 7, 5
  01f13e0  subc 5, 5, 6
  01f13e4  cmpw 5, 4
  01f13e8  cmpw 1, 5, 3
  01f13ec  bt 0, 0x1f13f4
  01f13f0  bf 5, 0x1f1404
  01f13f4  ori 3, 31, 0
  01f13f8  bl 0xefb38
  01f13fc  nop
  01f1400  b 0x1f19d4
  01f1404  li 3, 3
  01f1408  bl 0xfc620
  01f140c  nop
  01f1410  cmpwi 3, 0
  01f1414  bf 2, 0x1f1540
  01f1418  li 29, 0
  01f141c  lis 4, 12032
  01f1420  lis 5, 16128
  01f1424  addic 28, 31, 16
  01f1428  stw 29, 188(1)
  01f142c  stw 29, 184(1)
  01f1430  li 3, 2
  01f1434  stw 29, 180(1)
  01f1438  stw 29, 176(1)
  01f143c  stw 4, 376(1)
  01f1440  stw 5, 380(1)
  01f1444  bl 0xfc620
  01f1448  nop
  01f144c  lis 4, 31
  01f1450  lis 26, 114
  01f1454  addi 27, 4, 2248
  01f1458  sldi 3, 3, 2
  01f145c  addc 3, 1, 3
  01f1460  lfs 1, 52(27)
  01f1464  lfs 2, -3056(26)
  01f1468  clrldi 3, 3, 32
  01f146c  lfs 3, 48(27)
  01f1470  fmuls 1, 2, 1
  01f1474  fmr 31, 3
  01f1478  lwz 3, 376(3)
  01f147c  extsw 25, 3
  01f1480  fctiwz 1, 1
  01f1484  stfd 1, 384(1)
  01f1488  lfs 1, 56(27)
  01f148c  lwz 3, 388(1)
  01f1490  fmuls 1, 2, 1
  01f1494  extsw 3, 3
  01f1498  fctiwz 1, 1
  01f149c  stfd 1, 384(1)
  01f14a0  lwz 4, 388(1)
  01f14a4  extsw 4, 4
  01f14a8  bl 0xfe484
  01f14ac  nop
  01f14b0  lfs 1, 60(27)
  01f14b4  lfs 2, -3056(26)
  01f14b8  fmuls 1, 2, 1
  01f14bc  ori 26, 3, 0
  01f14c0  fctiwz 1, 1
  01f14c4  stfd 1, 384(1)
  01f14c8  lfs 1, 64(27)
  01f14cc  lwz 3, 388(1)
  01f14d0  fmuls 1, 2, 1
  01f14d4  extsw 3, 3
  01f14d8  fctiwz 1, 1
  01f14dc  stfd 1, 384(1)
  01f14e0  lwz 4, 388(1)
  01f14e4  extsw 4, 4
  01f14e8  bl 0xfe484
  01f14ec  nop
  01f14f0  lfs 1, 68(27)
  01f14f4  ori 24, 3, 0
  01f14f8  lfs 2, 72(27)
  01f14fc  bl 0xfcbe8
  01f1500  nop
  01f1504  lis 3, 114
  01f1508  lis 5, 12095
  01f150c  ori 9, 24, 0
  01f1510  ori 6, 25, 0
  01f1514  ori 8, 26, 0
  01f1518  lfs 2, -3052(3)
  01f151c  std 29, 112(1)
  01f1520  ori 3, 28, 0
  01f1524  fmuls 2, 1, 2
  01f1528  addic 4, 1, 176
  01f152c  fmr 1, 31
  01f1530  ori 5, 5, 16255
  01f1534  std 29, 120(1)
  01f1538  bl 0x123390
  01f153c  nop
  01f1540  lwz 4, 24(31)
  01f1544  lis 3, 16840
  01f1548  srawi 5, 4, 31
  01f154c  srwi 6, 5, 1
  01f1550  xor 4, 6, 4
  01f1554  subc 4, 4, 5
  01f1558  cmpw 4, 3
  01f155c  bf 0, 0x1f19d4
  01f1560  lis 3, 118
  01f1564  li 29, 0
  01f1568  lwz 3, 24460(3)
  01f156c  cmpwi 3, 0
  01f1570  bf 1, 0x1f184c
  01f1574  lis 3, 31
  01f1578  addi 3, 3, 2248
  01f157c  lfs 31, 76(3)
  01f1580  lfs 30, 80(3)
  01f1584  lfs 29, 84(3)
  01f1588  lfs 28, 88(3)
  01f158c  lfs 27, 92(3)
  01f1590  lfs 26, 96(3)
  01f1594  lfs 25, 100(3)
  01f1598  lfs 24, 104(3)
  01f159c  lfs 23, 108(3)
  01f15a0  bl 0xfcc68
  01f15a4  nop
  01f15a8  fmr 22, 1
  01f15ac  lfs 2, 16(31)
  01f15b0  fmr 1, 31
  01f15b4  lfs 3, 20(31)
  01f15b8  stfs 2, 224(1)
  01f15bc  lfs 4, 24(31)
  01f15c0  fmr 2, 30
  01f15c4  stfs 3, 228(1)
  01f15c8  lfs 3, 28(31)
  01f15cc  stfs 4, 232(1)
  01f15d0  stfs 3, 236(1)
  01f15d4  bl 0xfcbe8
  01f15d8  nop
  01f15dc  lfs 2, 224(1)
  01f15e0  fadds 3, 2, 1
  01f15e4  fmr 2, 30
  01f15e8  fmr 1, 31
  01f15ec  stfs 3, 224(1)
  01f15f0  bl 0xfcbe8
  01f15f4  nop
  01f15f8  fadds 2, 22, 29
  01f15fc  fsubs 3, 28, 22
  01f1600  fsubs 4, 27, 22
  01f1604  lis 3, 118
  01f1608  lis 4, 118
  01f160c  lis 5, 114
  01f1610  lis 6, 118
  01f1614  fsubs 5, 28, 2
  01f1618  fsub 7, 22, 3
  01f161c  fsubs 6, 27, 2
  01f1620  lwz 3, 24488(3)
  01f1624  fsub 8, 2, 5
  01f1628  fsel 3, 7, 3, 22
  01f162c  fsel 2, 8, 5, 2
  01f1630  fsub 5, 4, 3
  01f1634  fsub 7, 6, 2
  01f1638  fsel 3, 5, 4, 3
  01f163c  lfs 5, 228(1)
  01f1640  fadds 1, 5, 1
  01f1644  lfs 5, 24472(4)
  01f1648  extsw 4, 3
  01f164c  lfs 8, -3052(5)
  01f1650  slwi 3, 3, 1
  01f1654  lis 5, 118
  01f1658  fsel 2, 7, 6, 2
  01f165c  fmuls 4, 3, 3
  01f1660  extsw 3, 3
  01f1664  fmuls 5, 5, 8
  01f1668  fmuls 6, 2, 2
  01f166c  fmuls 7, 4, 3
  01f1670  fmuls 9, 6, 2
  01f1674  fmuls 10, 4, 7
  01f1678  fmadds 3, 7, 26, 3
  01f167c  lfs 7, 192(1)
  01f1680  lfs 11, 24480(6)
  01f1684  std 4, 384(1)
  01f1688  lis 6, 118
  01f168c  lis 4, 118
  01f1690  fmuls 12, 6, 9
  01f1694  fmadds 2, 9, 26, 2
  01f1698  fmuls 9, 4, 10
  01f169c  fmadds 3, 10, 25, 3
  01f16a0  lfs 10, 196(1)
  01f16a4  lfs 13, 208(1)
  01f16a8  lfs 0, 212(1)
  01f16ac  stfs 1, 228(1)
  01f16b0  stfs 5, 200(1)
  01f16b4  lwz 5, 24464(5)
  01f16b8  fmuls 1, 6, 12
  01f16bc  fmadds 2, 12, 25, 2
  01f16c0  fmuls 4, 4, 9
  01f16c4  fmadds 3, 9, 24, 3
  01f16c8  lwz 4, 24468(4)
  01f16cc  extsw 28, 5
  01f16d0  extsw 27, 4
  01f16d4  fmuls 5, 6, 1
  01f16d8  fmadds 1, 1, 24, 2
  01f16dc  fmadds 2, 4, 23, 3
  01f16e0  lfd 3, 384(1)
  01f16e4  std 3, 384(1)
  01f16e8  lfs 4, 24476(6)
  01f16ec  lis 3, 118
  01f16f0  fcfid 3, 3
  01f16f4  fmuls 4, 4, 8
  01f16f8  lis 6, 118
  01f16fc  fmadds 1, 5, 23, 1
  01f1700  lfs 5, 24484(3)
  01f1704  fmadds 6, 2, 11, 10
  01f1708  lfs 8, 24500(6)
  01f170c  fmadds 2, 2, 5, 0
  01f1710  lis 3, 118
  01f1714  stfs 4, 216(1)
  01f1718  fmadds 7, 1, 11, 7
  01f171c  fmadds 1, 1, 5, 13
  01f1720  stfs 6, 196(1)
  01f1724  lfd 4, 384(1)
  01f1728  stfs 2, 212(1)
  01f172c  fcfid 4, 4
  01f1730  lfs 2, 24504(3)
  01f1734  stfs 8, 204(1)
  01f1738  stfs 7, 192(1)
  01f173c  stfs 1, 208(1)
  01f1740  frsp 1, 3
  01f1744  stfs 2, 220(1)
  01f1748  frsp 2, 4
  01f174c  bl 0xfcbe8
  01f1750  nop
  01f1754  lis 26, 114
  01f1758  lfs 2, -3056(26)
  01f175c  fmuls 1, 1, 2
  01f1760  bl 0x502758
  01f1764  nop
  01f1768  lis 4, 118
  01f176c  ori 25, 3, 0
  01f1770  lwz 4, 24492(4)
  01f1774  extsw 5, 4
  01f1778  slwi 4, 4, 1
  01f177c  extsw 4, 4
  01f1780  std 5, 384(1)
  01f1784  lfd 1, 384(1)
  01f1788  std 4, 384(1)
  01f178c  fcfid 1, 1
  01f1790  frsp 1, 1
  01f1794  lfd 2, 384(1)
  01f1798  fcfid 2, 2
  01f179c  frsp 2, 2
  01f17a0  bl 0xfcbe8
  01f17a4  nop
  01f17a8  lfs 2, -3056(26)
  01f17ac  fmuls 1, 1, 2
  01f17b0  bl 0x502758
  01f17b4  nop
  01f17b8  lis 4, 118
  01f17bc  ori 24, 3, 0
  01f17c0  lwz 4, 24496(4)
  01f17c4  extsw 5, 4
  01f17c8  slwi 4, 4, 1
  01f17cc  extsw 4, 4
  01f17d0  std 5, 384(1)
  01f17d4  lfd 1, 384(1)
  01f17d8  std 4, 384(1)
  01f17dc  fcfid 1, 1
  01f17e0  frsp 1, 1
  01f17e4  lfd 2, 384(1)
  01f17e8  fcfid 2, 2
  01f17ec  frsp 2, 2
  01f17f0  bl 0xfcbe8
  01f17f4  nop
  01f17f8  lfs 2, -3056(26)
  01f17fc  fmuls 1, 1, 2
  01f1800  bl 0x502758
  01f1804  nop
  01f1808  li 9, -1
  01f180c  ori 10, 3, 0
  01f1810  addic 3, 1, 224
  01f1814  ori 6, 28, 0
  01f1818  std 9, 112(1)
  01f181c  ori 7, 27, 0
  01f1820  addic 4, 1, 192
  01f1824  ori 8, 25, 0
  01f1828  addic 5, 1, 208
  01f182c  ori 9, 24, 0
  01f1830  bl 0x1206e8
  01f1834  nop
  01f1838  lis 3, 118
  01f183c  addic 29, 29, 1
  01f1840  lwz 3, 24460(3)
  01f1844  cmpw 29, 3
  01f1848  bt 0, 0x1f15a0
  01f184c  lis 3, 31
  01f1850  lfs 1, 0(30)
  01f1854  addi 6, 3, 2248
  01f1858  li 3, 0
  01f185c  li 4, 0
  01f1860  ori 5, 31, 0
  01f1864  lfs 2, 112(6)
  01f1868  lfs 3, 4(30)
  01f186c  lfs 4, 8(30)
  01f1870  fmuls 1, 1, 2
  01f1874  fmuls 3, 3, 2
  01f1878  lfs 5, 32(30)
  01f187c  fmuls 2, 4, 2
  01f1880  lfs 6, 36(30)
  01f1884  stfs 1, 0(30)
  01f1888  stfs 3, 4(30)
  01f188c  stfs 2, 8(30)
  01f1890  lfs 1, 116(6)
  01f1894  fmuls 2, 5, 1
  01f1898  fmuls 1, 6, 1
  01f189c  stfs 2, 32(30)
  01f18a0  stfs 1, 36(30)
  01f18a4  bl 0x15d12c
  01f18a8  nop
  01f18ac  li 3, 5
  01f18b0  stb 3, 32(31)
  01f18b4  b 0x1f19d4
  01f18b8  lis 3, 31
  01f18bc  lis 4, 114
  01f18c0  addi 3, 3, 2248
  01f18c4  lfs 1, 120(3)
  01f18c8  lfs 2, -3048(4)
  01f18cc  lfs 3, 124(3)
  01f18d0  fmuls 1, 2, 1
  01f18d4  lfs 4, 8(30)
  01f18d8  lfs 5, 0(30)
  01f18dc  fnmsubs 1, 1, 3, 4
  01f18e0  stfs 1, 8(30)
  01f18e4  lfs 1, 16(31)
  01f18e8  lfs 3, 20(31)
  01f18ec  fadds 2, 1, 5
  01f18f0  lfs 4, 24(31)
  01f18f4  lfs 1, 64(31)
  01f18f8  stfs 2, 16(31)
  01f18fc  lfs 2, 4(30)
  01f1900  fadds 2, 3, 2
  01f1904  stfs 2, 20(31)
  01f1908  lfs 2, 8(30)
  01f190c  fadds 2, 4, 2
  01f1910  stfs 2, 24(31)
  01f1914  lfs 2, 32(30)
  01f1918  bl 0x502578
  01f191c  nop
  01f1920  stfs 1, 64(31)
  01f1924  lfs 1, 68(31)
  01f1928  lfs 2, 36(30)
  01f192c  bl 0x502578
  01f1930  nop
  01f1934  lwz 3, 16(31)
  01f1938  lis 4, 16704
  01f193c  stfs 1, 68(31)
  01f1940  srawi 30, 3, 31
  01f1944  srwi 5, 30, 1
  01f1948  xor 3, 5, 3
  01f194c  subc 30, 3, 30
  01f1950  cmpw 30, 4
  01f1954  bt 0, 0x1f19c8
  01f1958  lis 3, 17532
  01f195c  ori 3, 3, 49152
  01f1960  cmpw 30, 3
  01f1964  bt 1, 0x1f19c8
  01f1968  lwz 5, 20(31)
  01f196c  lis 3, 17532
  01f1970  srawi 6, 5, 31
  01f1974  lis 4, 16704
  01f1978  srwi 7, 6, 1
  01f197c  ori 3, 3, 49152
  01f1980  xor 5, 7, 5
  01f1984  subc 5, 5, 6
  01f1988  cmpw 1, 5, 3
  01f198c  cmpw 5, 4
  01f1990  cror 2, 0, 5
  01f1994  bt 2, 0x1f19c8
  01f1998  lwz 5, 24(31)
  01f199c  lis 3, 17532
  01f19a0  srawi 6, 5, 31
  01f19a4  lis 4, 16704
  01f19a8  srwi 7, 6, 1
  01f19ac  ori 3, 3, 49152
  01f19b0  xor 5, 7, 5
  01f19b4  subc 5, 5, 6
  01f19b8  cmpw 5, 4
  01f19bc  cmpw 1, 5, 3
  01f19c0  bt 0, 0x1f19c8
  01f19c4  bf 5, 0x1f19d4
  01f19c8  ori 3, 31, 0
  01f19cc  bl 0xefb38
  01f19d0  nop
  01f19d4  ld 0, 560(1)
  01f19d8  mtlr 0
  01f19dc  lfd 22, 464(1)
  01f19e0  lfd 23, 472(1)
  01f19e4  lfd 24, 480(1)
  01f19e8  lfd 25, 488(1)
  01f19ec  lfd 26, 496(1)
  01f19f0  lfd 27, 504(1)
  01f19f4  lfd 28, 512(1)
  01f19f8  lfd 29, 520(1)
  01f19fc  lfd 30, 528(1)
  01f1a00  lfd 31, 536(1)
  01f1a04  ld 24, 400(1)
  01f1a08  ld 25, 408(1)
  01f1a0c  ld 26, 416(1)
  01f1a10  ld 27, 424(1)
  01f1a14  ld 28, 432(1)
  01f1a18  ld 29, 440(1)
  01f1a1c  ld 30, 448(1)
  01f1a20  ld 31, 456(1)
  01f1a24  addi 1, 1, 544
  01f1a28  blr
