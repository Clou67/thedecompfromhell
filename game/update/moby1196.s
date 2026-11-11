# game/update/moby1196.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_001f29e8:   # 0x1f29e8, 0x2bc bytes
  01f29e8  stdu 1, -208(1)
  01f29ec  mflr 0
  01f29f0  std 0, 224(1)
  01f29f4  stfd 31, 200(1)
  01f29f8  std 27, 160(1)
  01f29fc  ori 27, 3, 0
  01f2a00  li 3, 1193
  01f2a04  std 30, 184(1)
  01f2a08  fmr 31, 1
  01f2a0c  std 29, 176(1)
  01f2a10  std 28, 168(1)
  01f2a14  ori 30, 7, 0
  01f2a18  ori 29, 5, 0
  01f2a1c  std 31, 192(1)
  01f2a20  ori 28, 4, 0
  01f2a24  bl 0xefa28
  01f2a28  nop
  01f2a2c  ori 31, 3, 0
  01f2a30  cmpwi 31, 0
  01f2a34  bt 2, 0x1f2c78
  01f2a38  li 3, 255
  01f2a3c  lwz 6, 120(31)
  01f2a40  li 4, 1
  01f2a44  li 5, 0
  01f2a48  stb 3, 48(31)
  01f2a4c  sth 3, 50(31)
  01f2a50  stb 4, 49(31)
  01f2a54  lis 3, 118
  01f2a58  stb 5, 32(31)
  01f2a5c  lis 4, 31
  01f2a60  stw 27, 36(6)
  01f2a64  lfs 1, 0(28)
  01f2a68  addi 4, 4, 10716
  01f2a6c  stfs 1, 16(31)
  01f2a70  lfs 1, 4(28)
  01f2a74  stfs 1, 20(31)
  01f2a78  lfs 1, 8(28)
  01f2a7c  stfs 1, 24(31)
  01f2a80  lfs 1, 12(28)
  01f2a84  stfs 1, 28(31)
  01f2a88  lfs 1, 0(29)
  01f2a8c  stfs 1, 16(6)
  01f2a90  lfs 1, 4(29)
  01f2a94  stfs 1, 20(6)
  01f2a98  lfs 1, 8(29)
  01f2a9c  stfs 31, 28(6)
  01f2aa0  stfs 1, 24(6)
  01f2aa4  stw 30, 32(6)
  01f2aa8  lwz 3, 24784(3)
  01f2aac  sth 5, 42(6)
  01f2ab0  sth 3, 40(6)
  01f2ab4  lfs 1, 0(4)
  01f2ab8  stw 5, 64(31)
  01f2abc  stw 5, 68(31)
  01f2ac0  lwz 3, 0(29)
  01f2ac4  lwz 4, 4(29)
  01f2ac8  lfs 2, 0(29)
  01f2acc  lfs 3, 4(29)
  01f2ad0  fabs 5, 2
  01f2ad4  fabs 6, 3
  01f2ad8  rlwinm 4, 4, 3, 29, 29
  01f2adc  lis 5, 115
  01f2ae0  addic 5, 5, 22784
  01f2ae4  fsubs 2, 5, 6
  01f2ae8  stfs 2, 112(1)
  01f2aec  lfs 31, 44(31)
  01f2af0  lwz 6, 112(1)
  01f2af4  lfs 2, 112(1)
  01f2af8  rlwimi 4, 6, 2, 30, 30
  01f2afc  fsub 4, 2, 1
  01f2b00  fsub 7, 2, 1
  01f2b04  rlwimi 4, 3, 4, 28, 28
  01f2b08  ori 3, 5, 0
  01f2b0c  rlwimi 3, 4, 2, 26, 28
  01f2b10  slwi 4, 4, 2
  01f2b14  clrldi 3, 3, 32
  01f2b18  fsel 4, 4, 5, 6
  01f2b1c  lfsx 3, 5, 4
  01f2b20  lfs 2, 4(3)
  01f2b24  fsel 5, 7, 6, 5
  01f2b28  fcmpu 0, 4, 1
  01f2b2c  bt 1, 0x1f2b34
  01f2b30  b 0x1f2c58
  01f2b34  fsubs 6, 5, 4
  01f2b38  fadds 4, 5, 4
  01f2b3c  addic 6, 1, 16
  01f2b40  li 3, 2
  01f2b44  addic 4, 6, 116
  01f2b48  addic 5, 6, 100
  01f2b4c  mtctr 3
  01f2b50  fdivs 4, 6, 4
  01f2b54  fmuls 6, 4, 4
  01f2b58  stfs 4, 128(1)
  01f2b5c  stfs 4, 120(1)
  01f2b60  stfs 4, 124(1)
  01f2b64  stfs 4, 116(1)
  01f2b68  lfs 7, 128(1)
  01f2b6c  lfs 8, 120(1)
  01f2b70  lfs 9, 124(1)
  01f2b74  fmuls 4, 6, 6
  01f2b78  fmuls 8, 8, 6
  01f2b7c  fmuls 7, 7, 4
  01f2b80  fmuls 5, 4, 4
  01f2b84  fmuls 4, 9, 4
  01f2b88  stfs 8, 120(1)
  01f2b8c  fmuls 6, 7, 6
  01f2b90  stfs 4, 124(1)
  01f2b94  stfs 6, 128(1)
  01f2b98  lfs 4, 100(6)
  01f2b9c  fmuls 4, 4, 5
  01f2ba0  stfs 4, 116(6)
  01f2ba4  lfs 4, 4(5)
  01f2ba8  addic 5, 5, 8
  01f2bac  fmuls 4, 4, 5
  01f2bb0  addic 6, 6, 8
  01f2bb4  stfs 4, 4(4)
  01f2bb8  addic 4, 4, 8
  01f2bbc  bdnz 0x1f2b98
  01f2bc0  ori 7, 1, 0
  01f2bc4  li 4, 4
  01f2bc8  lis 6, 115
  01f2bcc  addic 5, 7, 116
  01f2bd0  mtctr 4
  01f2bd4  addic 6, 6, 22752
  01f2bd8  ori 4, 5, 0
  01f2bdc  lfs 4, 116(7)
  01f2be0  lfs 5, 0(6)
  01f2be4  fmuls 4, 4, 5
  01f2be8  lfs 5, 4(6)
  01f2bec  addic 6, 6, 8
  01f2bf0  stfs 4, 116(7)
  01f2bf4  lfs 4, 4(5)
  01f2bf8  addic 7, 7, 8
  01f2bfc  fmuls 4, 4, 5
  01f2c00  stfs 4, 4(5)
  01f2c04  addic 5, 5, 8
  01f2c08  bdnz 0x1f2bdc
  01f2c0c  ori 5, 3, 0
  01f2c10  ori 3, 1, 0
  01f2c14  mtctr 5
  01f2c18  lfs 4, 116(3)
  01f2c1c  fadds 1, 1, 4
  01f2c20  lfs 4, 4(4)
  01f2c24  addic 3, 3, 16
  01f2c28  lfs 5, 8(4)
  01f2c2c  lfs 6, 12(4)
  01f2c30  addic 4, 4, 16
  01f2c34  fadds 1, 1, 4
  01f2c38  fadds 1, 1, 5
  01f2c3c  fadds 1, 1, 6
  01f2c40  bdnz 0x1f2c18
  01f2c44  lis 3, 31
  01f2c48  addi 3, 3, 10716
  01f2c4c  lfs 4, 4(3)
  01f2c50  fadds 1, 1, 4
  01f2c54  fmadds 1, 1, 3, 2
  01f2c58  lis 4, 118
  01f2c5c  stfs 1, 72(31)
  01f2c60  ori 3, 31, 0
  01f2c64  lfs 1, 24796(4)
  01f2c68  fmuls 1, 31, 1
  01f2c6c  stfs 1, 44(31)
  01f2c70  bl 0xf31a8
  01f2c74  nop
  01f2c78  ori 3, 31, 0
  01f2c7c  ld 0, 224(1)
  01f2c80  mtlr 0
  01f2c84  lfd 31, 200(1)
  01f2c88  ld 27, 160(1)
  01f2c8c  ld 28, 168(1)
  01f2c90  ld 29, 176(1)
  01f2c94  ld 30, 184(1)
  01f2c98  ld 31, 192(1)
  01f2c9c  addi 1, 1, 208
  01f2ca0  blr

M1196_001f2ca4:   # 0x1f2ca4, 0x14 bytes
  01f2ca4  lis 3, 118
  01f2ca8  lis 4, 1
  01f2cac  addic 3, 3, 24816
  01f2cb0  stw 4, 72(3)
  01f2cb4  blr

M1196_001f2cb8:   # 0x1f2cb8, 0x68 bytes
  01f2cb8  lbz 3, 33(3)
  01f2cbc  cmpwi 3, 255
  01f2cc0  bt 2, 0x1f2d1c
  01f2cc4  lis 4, 165
  01f2cc8  rlwinm 3, 3, 2, 22, 29
  01f2ccc  addic 4, 4, -28284
  01f2cd0  lwzx 3, 4, 3
  01f2cd4  cmpwi 3, 0
  01f2cd8  bt 2, 0x1f2d1c
  01f2cdc  lis 5, 164
  01f2ce0  li 4, 2
  01f2ce4  lhz 6, 0(3)
  01f2ce8  lwz 7, -28512(5)
  01f2cec  rlwinm 6, 6, 8, 9, 23
  01f2cf0  addc 6, 7, 6
  01f2cf4  clrldi 6, 6, 32
  01f2cf8  lbz 7, 32(6)
  01f2cfc  cmpwi 7, 1
  01f2d00  bf 2, 0x1f2d08
  01f2d04  stb 4, 32(6)
  01f2d08  lhz 6, 0(3)
  01f2d0c  addic 3, 3, 2
  01f2d10  extsh 6, 6
  01f2d14  cmpwi 6, 0
  01f2d18  bf 0, 0x1f2ce4
  01f2d1c  blr

M1196_001f2d58:   # 0x1f2d58, 0x8a4 bytes
  01f2d58  stdu 1, -256(1)
  01f2d5c  mflr 0
  01f2d60  std 0, 272(1)
  01f2d64  stfd 31, 248(1)
  01f2d68  std 30, 232(1)
  01f2d6c  std 31, 240(1)
  01f2d70  lwz 30, 120(3)
  01f2d74  ori 31, 3, 0
  01f2d78  lwz 3, 56(30)
  01f2d7c  std 29, 224(1)
  01f2d80  cmpwi 3, 0
  01f2d84  bt 2, 0x1f2dc0
  01f2d88  lis 3, 31
  01f2d8c  addi 3, 3, 11552
  01f2d90  lfs 1, 0(3)
  01f2d94  lfs 2, 4(3)
  01f2d98  bl 0xfcbe8
  01f2d9c  nop
  01f2da0  lis 3, 114
  01f2da4  lfs 2, -3056(3)
  01f2da8  fmuls 1, 1, 2
  01f2dac  bl 0x502758
  01f2db0  nop
  01f2db4  li 4, 0
  01f2db8  stw 3, 388(30)
  01f2dbc  stw 4, 56(30)
  01f2dc0  addic 3, 30, 388
  01f2dc4  bl 0x4fff60
  01f2dc8  nop
  01f2dcc  lbz 3, 32(31)
  01f2dd0  cmpwi 3, 11
  01f2dd4  bt 2, 0x1f3340
  01f2dd8  ori 3, 31, 0
  01f2ddc  lis 4, 51
  01f2de0  li 5, 0
  01f2de4  bl 0x10675c
  01f2de8  nop
  01f2dec  ori 29, 3, 0
  01f2df0  addic 5, 30, 32
  01f2df4  li 8, 0
  01f2df8  addic 7, 1, 112
  01f2dfc  li 10, 4
  01f2e00  ori 3, 31, 0
  01f2e04  ori 4, 29, 0
  01f2e08  li 6, 5
  01f2e0c  li 9, 0
  01f2e10  bl 0x106840
  01f2e14  nop
  01f2e18  cmpwi 29, 0
  01f2e1c  bt 2, 0x1f3340
  01f2e20  lwz 3, 32(30)
  01f2e24  lwz 4, 44(29)
  01f2e28  srawi 5, 3, 31
  01f2e2c  lfs 1, 32(30)
  01f2e30  srawi 6, 4, 31
  01f2e34  lfs 2, 44(29)
  01f2e38  srwi 7, 5, 1
  01f2e3c  srwi 8, 6, 1
  01f2e40  xor 3, 7, 3
  01f2e44  xor 4, 8, 4
  01f2e48  subc 3, 3, 5
  01f2e4c  subc 4, 4, 6
  01f2e50  cmpw 3, 4
  01f2e54  bt 1, 0x1f32dc
  01f2e58  lis 3, 250
  01f2e5c  lwz 3, 14400(3)
  01f2e60  cmpwi 3, 0
  01f2e64  bt 2, 0x1f2e74
  01f2e68  li 3, 16
  01f2e6c  bl 0x11b728
  01f2e70  nop
  01f2e74  lis 3, 31
  01f2e78  li 4, 0
  01f2e7c  lhz 5, 52(31)
  01f2e80  addi 3, 3, 11552
  01f2e84  rlwimi 5, 4, 0, 19, 19
  01f2e88  lfs 31, 8(3)
  01f2e8c  stw 4, 32(30)
  01f2e90  lbz 3, 83(31)
  01f2e94  sth 5, 52(31)
  01f2e98  cmpwi 3, 5
  01f2e9c  bt 2, 0x1f2edc
  01f2ea0  lis 3, 31
  01f2ea4  lis 4, 114
  01f2ea8  addi 3, 3, 11552
  01f2eac  li 5, 0
  01f2eb0  lfs 1, 12(3)
  01f2eb4  lfs 2, -3056(4)
  01f2eb8  ori 3, 31, 0
  01f2ebc  fmuls 1, 2, 1
  01f2ec0  li 4, 5
  01f2ec4  fctiwz 1, 1
  01f2ec8  stfd 1, 200(1)
  01f2ecc  lwz 6, 204(1)
  01f2ed0  extsw 6, 6
  01f2ed4  bl 0xfddc0
  01f2ed8  nop
  01f2edc  li 3, 11
  01f2ee0  lis 4, 31
  01f2ee4  li 5, 3
  01f2ee8  addi 4, 4, 11552
  01f2eec  stb 3, 32(31)
  01f2ef0  lis 3, 114
  01f2ef4  li 6, 9
  01f2ef8  lis 7, 114
  01f2efc  lfs 1, 16(4)
  01f2f00  lfs 2, -3048(3)
  01f2f04  lis 3, 14851
  01f2f08  fmuls 1, 2, 1
  01f2f0c  stb 5, 157(30)
  01f2f10  ori 3, 3, 4719
  01f2f14  stw 3, 116(30)
  01f2f18  stw 6, 132(30)
  01f2f1c  stfs 1, 112(30)
  01f2f20  lfs 1, 20(4)
  01f2f24  lfs 2, -3052(7)
  01f2f28  fmuls 1, 2, 1
  01f2f2c  stfs 1, 120(30)
  01f2f30  lfs 1, 24(4)
  01f2f34  fmuls 1, 2, 1
  01f2f38  stfs 1, 124(30)
  01f2f3c  lwz 3, 48(29)
  01f2f40  lfs 4, 28(4)
  01f2f44  clrlwi 3, 3, 31
  01f2f48  cmpwi 3, 0
  01f2f4c  bt 2, 0x1f30d8
  01f2f50  lwz 3, 16(29)
  01f2f54  lwz 4, 20(29)
  01f2f58  lfs 1, 16(29)
  01f2f5c  lfs 2, 20(29)
  01f2f60  fabs 3, 1
  01f2f64  fabs 6, 2
  01f2f68  rlwinm 4, 4, 3, 29, 29
  01f2f6c  lis 5, 115
  01f2f70  addic 5, 5, 22784
  01f2f74  fsubs 1, 3, 6
  01f2f78  stfs 1, 128(1)
  01f2f7c  lwz 6, 128(1)
  01f2f80  lfs 1, 128(1)
  01f2f84  rlwimi 4, 6, 2, 30, 30
  01f2f88  fsub 5, 1, 31
  01f2f8c  fsub 7, 1, 31
  01f2f90  rlwimi 4, 3, 4, 28, 28
  01f2f94  ori 3, 5, 0
  01f2f98  rlwimi 3, 4, 2, 26, 28
  01f2f9c  slwi 4, 4, 2
  01f2fa0  clrldi 3, 3, 32
  01f2fa4  fsel 5, 5, 3, 6
  01f2fa8  lfsx 1, 5, 4
  01f2fac  fsel 3, 7, 6, 3
  01f2fb0  lfs 2, 4(3)
  01f2fb4  fcmpu 0, 5, 31
  01f2fb8  bt 1, 0x1f2fc0
  01f2fbc  b 0x1f30d4
  01f2fc0  fsubs 6, 3, 5
  01f2fc4  fadds 3, 3, 5
  01f2fc8  addic 3, 1, 16
  01f2fcc  li 7, 2
  01f2fd0  addic 4, 3, 148
  01f2fd4  addic 5, 3, 164
  01f2fd8  mtctr 7
  01f2fdc  fdivs 3, 6, 3
  01f2fe0  fmuls 5, 3, 3
  01f2fe4  stfs 3, 176(1)
  01f2fe8  stfs 3, 168(1)
  01f2fec  stfs 3, 172(1)
  01f2ff0  stfs 3, 164(1)
  01f2ff4  lfs 7, 176(1)
  01f2ff8  lfs 8, 168(1)
  01f2ffc  lfs 9, 172(1)
  01f3000  fmuls 6, 5, 5
  01f3004  fmuls 8, 8, 5
  01f3008  fmuls 7, 7, 6
  01f300c  fmuls 3, 6, 6
  01f3010  fmuls 6, 9, 6
  01f3014  stfs 8, 168(1)
  01f3018  fmuls 5, 7, 5
  01f301c  stfs 6, 172(1)
  01f3020  stfs 5, 176(1)
  01f3024  lfs 5, 148(3)
  01f3028  fmuls 5, 5, 3
  01f302c  stfs 5, 164(3)
  01f3030  lfs 5, 4(4)
  01f3034  addic 3, 3, 8
  01f3038  addic 4, 4, 8
  01f303c  fmuls 5, 5, 3
  01f3040  stfs 5, 4(5)
  01f3044  addic 5, 5, 8
  01f3048  bdnz 0x1f3024
  01f304c  li 5, 4
  01f3050  ori 3, 1, 0
  01f3054  mtctr 5
  01f3058  lis 4, 115
  01f305c  addic 5, 3, 164
  01f3060  addic 4, 4, 22752
  01f3064  ori 6, 5, 0
  01f3068  lfs 3, 164(3)
  01f306c  lfs 5, 0(4)
  01f3070  fmuls 3, 3, 5
  01f3074  lfs 5, 4(4)
  01f3078  addic 4, 4, 8
  01f307c  stfs 3, 164(3)
  01f3080  lfs 3, 4(5)
  01f3084  addic 3, 3, 8
  01f3088  fmuls 3, 3, 5
  01f308c  stfs 3, 4(5)
  01f3090  addic 5, 5, 8
  01f3094  bdnz 0x1f3068
  01f3098  ori 3, 1, 0
  01f309c  mtctr 7
  01f30a0  lfs 3, 164(3)
  01f30a4  lfs 5, 4(6)
  01f30a8  fadds 3, 31, 3
  01f30ac  lfs 6, 8(6)
  01f30b0  lfs 31, 12(6)
  01f30b4  addic 3, 3, 16
  01f30b8  addic 6, 6, 16
  01f30bc  fadds 3, 3, 5
  01f30c0  fadds 3, 3, 6
  01f30c4  fadds 31, 3, 31
  01f30c8  bdnz 0x1f30a0
  01f30cc  fadds 31, 31, 4
  01f30d0  fmadds 31, 31, 1, 2
  01f30d4  b 0x1f3284
  01f30d8  lfs 1, 16(31)
  01f30dc  lfs 2, 0(29)
  01f30e0  lfs 3, 20(31)
  01f30e4  lfs 5, 4(29)
  01f30e8  fsubs 1, 1, 2
  01f30ec  fsubs 2, 3, 5
  01f30f0  lis 3, 115
  01f30f4  addic 3, 3, 22784
  01f30f8  fabs 3, 1
  01f30fc  fabs 5, 2
  01f3100  stfs 1, 116(1)
  01f3104  stfs 2, 120(1)
  01f3108  fsubs 1, 3, 5
  01f310c  stfs 1, 124(1)
  01f3110  lwz 4, 116(1)
  01f3114  lfs 1, 116(1)
  01f3118  lwz 5, 120(1)
  01f311c  lfs 2, 120(1)
  01f3120  lwz 6, 124(1)
  01f3124  rlwinm 5, 5, 3, 29, 29
  01f3128  fabs 6, 2
  01f312c  lfs 2, 124(1)
  01f3130  fabs 1, 1
  01f3134  rlwimi 5, 6, 2, 30, 30
  01f3138  fsub 7, 2, 31
  01f313c  fsub 8, 2, 31
  01f3140  rlwimi 5, 4, 4, 28, 28
  01f3144  ori 4, 3, 0
  01f3148  rlwimi 4, 5, 2, 26, 28
  01f314c  slwi 5, 5, 2
  01f3150  clrldi 4, 4, 32
  01f3154  fsel 5, 7, 1, 5
  01f3158  lfsx 1, 3, 5
  01f315c  fsel 3, 8, 6, 3
  01f3160  lfs 2, 4(4)
  01f3164  fcmpu 0, 5, 31
  01f3168  bt 1, 0x1f3170
  01f316c  b 0x1f3284
  01f3170  fsubs 6, 3, 5
  01f3174  fadds 3, 3, 5
  01f3178  addic 3, 1, 16
  01f317c  li 6, 2
  01f3180  addic 4, 3, 116
  01f3184  addic 5, 3, 132
  01f3188  mtctr 6
  01f318c  fdivs 3, 6, 3
  01f3190  fmuls 5, 3, 3
  01f3194  stfs 3, 144(1)
  01f3198  stfs 3, 136(1)
  01f319c  stfs 3, 140(1)
  01f31a0  stfs 3, 132(1)
  01f31a4  lfs 7, 144(1)
  01f31a8  lfs 8, 136(1)
  01f31ac  lfs 9, 140(1)
  01f31b0  fmuls 6, 5, 5
  01f31b4  fmuls 8, 8, 5
  01f31b8  fmuls 7, 7, 6
  01f31bc  fmuls 3, 6, 6
  01f31c0  fmuls 6, 9, 6
  01f31c4  stfs 8, 136(1)
  01f31c8  fmuls 5, 7, 5
  01f31cc  stfs 6, 140(1)
  01f31d0  stfs 5, 144(1)
  01f31d4  lfs 5, 116(3)
  01f31d8  fmuls 5, 5, 3
  01f31dc  stfs 5, 132(3)
  01f31e0  lfs 5, 4(4)
  01f31e4  addic 3, 3, 8
  01f31e8  addic 4, 4, 8
  01f31ec  fmuls 5, 5, 3
  01f31f0  stfs 5, 4(5)
  01f31f4  addic 5, 5, 8
  01f31f8  bdnz 0x1f31d4
  01f31fc  li 5, 4
  01f3200  ori 3, 1, 0
  01f3204  mtctr 5
  01f3208  lis 4, 115
  01f320c  addic 5, 3, 132
  01f3210  addic 4, 4, 22752
  01f3214  ori 7, 5, 0
  01f3218  lfs 3, 132(3)
  01f321c  lfs 5, 0(4)
  01f3220  fmuls 3, 3, 5
  01f3224  lfs 5, 4(4)
  01f3228  addic 4, 4, 8
  01f322c  stfs 3, 132(3)
  01f3230  lfs 3, 4(5)
  01f3234  addic 3, 3, 8
  01f3238  fmuls 3, 3, 5
  01f323c  stfs 3, 4(5)
  01f3240  addic 5, 5, 8
  01f3244  bdnz 0x1f3218
  01f3248  ori 3, 1, 0
  01f324c  mtctr 6
  01f3250  lfs 3, 132(3)
  01f3254  lfs 5, 4(7)
  01f3258  fadds 3, 31, 3
  01f325c  lfs 6, 8(7)
  01f3260  lfs 31, 12(7)
  01f3264  addic 3, 3, 16
  01f3268  addic 7, 7, 16
  01f326c  fadds 3, 3, 5
  01f3270  fadds 3, 3, 6
  01f3274  fadds 31, 3, 31
  01f3278  bdnz 0x1f3250
  01f327c  fadds 31, 31, 4
  01f3280  fmadds 31, 31, 1, 2
  01f3284  fmr 1, 31
  01f3288  addic 4, 30, 96
  01f328c  ori 3, 31, 0
  01f3290  li 6, 5
  01f3294  li 7, 1
  01f3298  li 8, 0
  01f329c  bl 0x10ad80
  01f32a0  nop
  01f32a4  li 5, 120
  01f32a8  addic 4, 30, 272
  01f32ac  ori 3, 31, 0
  01f32b0  stb 5, 279(30)
  01f32b4  bl 0x10c808
  01f32b8  nop
  01f32bc  ori 3, 31, 0
  01f32c0  li 4, 1
  01f32c4  li 5, 3
  01f32c8  li 6, 0
  01f32cc  li 7, -1
  01f32d0  bl 0xfcd60
  01f32d4  nop
  01f32d8  b 0x1f3338
  01f32dc  fsubs 1, 1, 2
  01f32e0  lis 3, 31
  01f32e4  li 4, 250
  01f32e8  vspltisw 2, -1
  01f32ec  addi 3, 3, 11552
  01f32f0  li 5, 32
  01f32f4  lis 6, 114
  01f32f8  stb 4, 279(30)
  01f32fc  li 4, -3056
  01f3300  vslw 2, 2, 2
  01f3304  stfs 1, 32(30)
  01f3308  <unknown>
  01f330c  <unknown>
  01f3310  li 5, 38
  01f3314  vspltw 3, 3, 0
  01f3318  addic 4, 30, 272
  01f331c  ori 3, 31, 0
  01f3320  vmaddfp 2, 4, 3, 2
  01f3324  vctsxs 2, 2, 0
  01f3328  vsplth 2, 2, 1
  01f332c  stvehx 2, 5, 30
  01f3330  bl 0x10c808
  01f3334  nop
  01f3338  li 3, 255
  01f333c  stb 3, 164(31)
  01f3340  ori 3, 31, 0
  01f3344  addic 4, 30, 272
  01f3348  bl 0x10c9a0
  01f334c  nop
  01f3350  lwz 3, 372(30)
  01f3354  cmpwi 3, 2
  01f3358  bf 2, 0x1f336c
  01f335c  lis 4, 31
  01f3360  addi 4, 4, 11552
  01f3364  lfs 1, 36(4)
  01f3368  b 0x1f33a8
  01f336c  lwz 4, 388(30)
  01f3370  cmpwi 4, 0
  01f3374  bt 2, 0x1f3390
  01f3378  lis 4, 31
  01f337c  lfs 1, 376(30)
  01f3380  addi 4, 4, 11552
  01f3384  lfs 2, 40(4)
  01f3388  fadds 1, 1, 2
  01f338c  b 0x1f33a8
  01f3390  lbz 4, 32(31)
  01f3394  cmpwi 4, 1
  01f3398  bf 2, 0x1f33a4
  01f339c  lfs 1, 392(30)
  01f33a0  b 0x1f33a8
  01f33a4  lfs 1, 376(30)
  01f33a8  cmpwi 3, 2
  01f33ac  stfs 1, 384(30)
  01f33b0  bf 2, 0x1f34c4
  01f33b4  ori 3, 31, 0
  01f33b8  addic 5, 30, 192
  01f33bc  bl 0x1118d8
  01f33c0  nop
  01f33c4  cmpwi 3, 2
  01f33c8  bt 2, 0x1f3574
  01f33cc  lis 4, 165
  01f33d0  lwz 6, 404(30)
  01f33d4  lis 5, 151
  01f33d8  slwi 6, 6, 7
  01f33dc  addic 5, 5, -25376
  01f33e0  lwz 4, 7128(4)
  01f33e4  addc 4, 4, 6
  01f33e8  lfs 1, 132(5)
  01f33ec  clrldi 4, 4, 32
  01f33f0  lfs 2, 128(5)
  01f33f4  lfs 3, 136(5)
  01f33f8  lis 5, 31
  01f33fc  lfs 4, 52(4)
  01f3400  addi 5, 5, 11552
  01f3404  lfs 5, 48(4)
  01f3408  fsubs 1, 1, 4
  01f340c  lfs 4, 80(4)
  01f3410  fsubs 2, 2, 5
  01f3414  lfs 5, 56(4)
  01f3418  lfs 6, 64(4)
  01f341c  fsubs 3, 3, 5
  01f3420  lfs 5, 84(4)
  01f3424  lfs 7, 88(4)
  01f3428  lfs 8, 96(4)
  01f342c  fmuls 4, 4, 1
  01f3430  fmuls 5, 5, 1
  01f3434  fmuls 1, 7, 1
  01f3438  lfs 7, 68(4)
  01f343c  lfs 9, 72(4)
  01f3440  lfs 10, 100(4)
  01f3444  fmadds 4, 6, 2, 4
  01f3448  fmadds 5, 7, 2, 5
  01f344c  fmadds 6, 9, 2, 1
  01f3450  lfs 7, 44(5)
  01f3454  lfs 9, 104(4)
  01f3458  fmadds 1, 8, 3, 4
  01f345c  fmadds 2, 10, 3, 5
  01f3460  fmadds 3, 9, 3, 6
  01f3464  fcmpu 0, 1, 7
  01f3468  fcmpu 1, 2, 7
  01f346c  fcmpu 6, 3, 7
  01f3470  cror 2, 0, 2
  01f3474  bt 2, 0x1f34b8
  01f3478  lis 4, 31
  01f347c  addi 4, 4, 11552
  01f3480  lfs 4, 8(4)
  01f3484  fcmpu 0, 1, 4
  01f3488  cror 2, 1, 2
  01f348c  bt 2, 0x1f34b8
  01f3490  bf 5, 0x1f34b8
  01f3494  lis 4, 31
  01f3498  addi 4, 4, 11552
  01f349c  lfs 1, 48(4)
  01f34a0  fcmpu 0, 2, 1
  01f34a4  fcmpu 1, 3, 1
  01f34a8  cror 2, 1, 2
  01f34ac  bt 2, 0x1f34b8
  01f34b0  bf 25, 0x1f34b8
  01f34b4  bt 4, 0x1f3574
  01f34b8  li 4, 2
  01f34bc  stw 4, 260(30)
  01f34c0  b 0x1f3574
  01f34c4  lbz 3, 32(31)
  01f34c8  cmpwi 1, 3, 1
  01f34cc  bf 6, 0x1f3518
  01f34d0  lwz 3, 396(30)
  01f34d4  cmpwi 3, -1
  01f34d8  bf 1, 0x1f3518
  01f34dc  lis 4, 165
  01f34e0  slwi 3, 3, 2
  01f34e4  addic 5, 4, 7136
  01f34e8  extsw 7, 3
  01f34ec  addic 4, 30, 192
  01f34f0  li 6, 0
  01f34f4  ori 3, 31, 0
  01f34f8  lwzx 5, 5, 7
  01f34fc  li 7, 0
  01f3500  addic 8, 5, 16
  01f3504  lwz 9, 0(5)
  01f3508  extsw 9, 9
  01f350c  bl 0x111ba0
  01f3510  nop
  01f3514  b 0x1f3574
  01f3518  bt 6, 0x1f3564
  01f351c  lwz 3, 380(30)
  01f3520  cmpwi 3, -1
  01f3524  bf 1, 0x1f3564
  01f3528  lis 4, 165
  01f352c  slwi 3, 3, 2
  01f3530  addic 5, 4, 7136
  01f3534  extsw 6, 3
  01f3538  addic 4, 30, 192
  01f353c  ori 3, 31, 0
  01f3540  li 7, 0
  01f3544  lwzx 5, 5, 6
  01f3548  li 6, 0
  01f354c  addic 8, 5, 16
  01f3550  lwz 9, 0(5)
  01f3554  extsw 9, 9
  01f3558  bl 0x111ba0
  01f355c  nop
  01f3560  b 0x1f3574
  01f3564  addic 5, 30, 192
  01f3568  ori 3, 31, 0
  01f356c  bl 0x1118d8
  01f3570  nop
  01f3574  cmpwi 3, 2
  01f3578  bt 2, 0x1f35c0
  01f357c  lfs 1, 308(30)
  01f3580  lfs 2, 196(30)
  01f3584  lfs 3, 304(30)
  01f3588  fsubs 1, 1, 2
  01f358c  lfs 2, 192(30)
  01f3590  fsubs 2, 3, 2
  01f3594  fmuls 1, 1, 1
  01f3598  fmadds 1, 2, 2, 1
  01f359c  lfs 2, 384(30)
  01f35a0  fsqrts 1, 1
  01f35a4  fcmpu 0, 1, 2
  01f35a8  bt 1, 0x1f35b8
  01f35ac  lbz 3, 49(31)
  01f35b0  cmpwi 3, 0
  01f35b4  bf 2, 0x1f35c0
  01f35b8  li 3, 2
  01f35bc  stw 3, 260(30)
  01f35c0  lwz 3, 256(30)
  01f35c4  cmpwi 3, 0
  01f35c8  bf 2, 0x1f35dc
  01f35cc  lis 3, 151
  01f35d0  addic 3, 3, -25376
  01f35d4  lwz 3, 8320(3)
  01f35d8  stw 3, 256(30)
  01f35dc  ld 0, 272(1)
  01f35e0  mtlr 0
  01f35e4  lfd 31, 248(1)
  01f35e8  ld 29, 224(1)
  01f35ec  ld 30, 232(1)
  01f35f0  ld 31, 240(1)
  01f35f4  addi 1, 1, 256
  01f35f8  blr

UpdateMoby_1196:   # 0x1f3688, 0x1624 bytes
  01f3688  stdu 1, -464(1)
  01f368c  mflr 0
  01f3690  std 0, 480(1)
  01f3694  stfd 25, 408(1)
  01f3698  stfd 26, 416(1)
  01f369c  stfd 27, 424(1)
  01f36a0  stfd 28, 432(1)
  01f36a4  stfd 29, 440(1)
  01f36a8  stfd 30, 448(1)
  01f36ac  stfd 31, 456(1)
  01f36b0  std 31, 400(1)
  01f36b4  ori 31, 3, 0
  01f36b8  std 29, 384(1)
  01f36bc  lis 3, 31
  01f36c0  addi 29, 3, 13820
  01f36c4  std 30, 392(1)
  01f36c8  ori 3, 31, 0
  01f36cc  std 28, 376(1)
  01f36d0  lwz 30, 120(31)
  01f36d4  bl 0x1f2d58
  01f36d8  lfs 1, 0(29)
  01f36dc  ori 3, 31, 0
  01f36e0  lwz 29, 256(30)
  01f36e4  addic 5, 30, 624
  01f36e8  li 4, 0
  01f36ec  bl 0x119a18
  01f36f0  nop
  01f36f4  lbz 3, 49(31)
  01f36f8  cmpwi 3, 0
  01f36fc  bt 2, 0x1f3768
  01f3700  lis 3, 149
  01f3704  lfs 1, 20(31)
  01f3708  lfs 2, 16(31)
  01f370c  addic 3, 3, 5056
  01f3710  lfs 3, 324(3)
  01f3714  lfs 4, 320(3)
  01f3718  fsubs 1, 1, 3
  01f371c  fsubs 2, 2, 4
  01f3720  lfs 3, 24(31)
  01f3724  lfs 4, 328(3)
  01f3728  fsubs 3, 3, 4
  01f372c  lis 3, 31
  01f3730  fmuls 1, 1, 1
  01f3734  addi 3, 3, 13820
  01f3738  fmadds 1, 2, 2, 1
  01f373c  lfs 2, 4(3)
  01f3740  fmadds 1, 3, 3, 1
  01f3744  fsqrts 1, 1
  01f3748  fcmpu 0, 1, 2
  01f374c  cror 6, 1, 2
  01f3750  bt 6, 0x1f3768
  01f3754  ori 3, 31, 0
  01f3758  bl 0x106360
  01f375c  nop
  01f3760  li 3, 23
  01f3764  stb 3, 127(31)
  01f3768  lis 3, 31
  01f376c  lis 4, 16256
  01f3770  addi 5, 3, 13820
  01f3774  lbz 3, 32(31)
  01f3778  cmpwi 1, 3, 5
  01f377c  cmpwi 6, 3, 4
  01f3780  lfs 26, 8(5)
  01f3784  cmpwi 7, 3, 2
  01f3788  stw 4, 88(31)
  01f378c  bt 5, 0x1f37b0
  01f3790  bt 6, 0x1f39b0
  01f3794  bt 26, 0x1f3948
  01f3798  bt 30, 0x1f38d0
  01f379c  cmpwi 3, 1
  01f37a0  bt 2, 0x1f3864
  01f37a4  cmpwi 3, 0
  01f37a8  bt 2, 0x1f37dc
  01f37ac  b 0x1f4c70
  01f37b0  cmpwi 3, 11
  01f37b4  bt 2, 0x1f4c0c
  01f37b8  cmpwi 3, 10
  01f37bc  bt 2, 0x1f4900
  01f37c0  cmpwi 3, 9
  01f37c4  bt 2, 0x1f47b4
  01f37c8  cmpwi 3, 8
  01f37cc  bt 2, 0x1f4414
  01f37d0  cmpwi 3, 6
  01f37d4  bt 2, 0x1f4010
  01f37d8  b 0x1f4c70
  01f37dc  lis 3, 16128
  01f37e0  lis 4, 16256
  01f37e4  li 6, 0
  01f37e8  li 5, 1
  01f37ec  stw 3, 48(30)
  01f37f0  stw 4, 32(30)
  01f37f4  stb 6, 40(30)
  01f37f8  stb 5, 41(30)
  01f37fc  sth 5, 36(30)
  01f3800  lfs 1, 16(31)
  01f3804  lhz 3, 52(31)
  01f3808  stfs 1, 304(30)
  01f380c  ori 3, 3, 4096
  01f3810  lfs 2, 20(31)
  01f3814  stfs 2, 308(30)
  01f3818  lfs 3, 24(31)
  01f381c  sth 3, 52(31)
  01f3820  stfs 3, 312(30)
  01f3824  lfs 4, 28(31)
  01f3828  lwz 3, 372(30)
  01f382c  stfs 4, 316(30)
  01f3830  stfs 1, 320(30)
  01f3834  cmpwi 3, 1
  01f3838  stfs 2, 324(30)
  01f383c  stfs 3, 328(30)
  01f3840  stfs 4, 332(30)
  01f3844  bt 2, 0x1f3858
  01f3848  ori 3, 31, 0
  01f384c  bl 0xefb38
  01f3850  nop
  01f3854  b 0x1f4c70
  01f3858  li 3, 1
  01f385c  stb 3, 32(31)
  01f3860  b 0x1f4c70
  01f3864  lwz 3, 260(30)
  01f3868  cmpwi 3, 2
  01f386c  bf 2, 0x1f387c
  01f3870  lwz 3, 372(30)
  01f3874  cmpwi 3, 0
  01f3878  bf 2, 0x1f4c70
  01f387c  li 3, 2
  01f3880  lbz 4, 83(31)
  01f3884  cmpwi 4, 1
  01f3888  stb 3, 32(31)
  01f388c  bt 2, 0x1f4c70
  01f3890  lis 3, 31
  01f3894  lis 4, 114
  01f3898  addi 3, 3, 13820
  01f389c  li 5, 0
  01f38a0  lfs 1, 12(3)
  01f38a4  lfs 2, -3056(4)
  01f38a8  ori 3, 31, 0
  01f38ac  li 4, 1
  01f38b0  fmuls 1, 2, 1
  01f38b4  fctiwz 1, 1
  01f38b8  stfd 1, 360(1)
  01f38bc  lwz 6, 364(1)
  01f38c0  extsw 6, 6
  01f38c4  bl 0xfddc0
  01f38c8  nop
  01f38cc  b 0x1f4c70
  01f38d0  lbz 3, 112(31)
  01f38d4  rlwinm 3, 3, 0, 30, 30
  01f38d8  cmpwi 3, 0
  01f38dc  bt 2, 0x1f4c70
  01f38e0  li 3, 4
  01f38e4  li 4, 0
  01f38e8  stb 3, 32(31)
  01f38ec  stw 4, 300(30)
  01f38f0  stw 4, 296(30)
  01f38f4  stw 4, 292(30)
  01f38f8  stw 4, 288(30)
  01f38fc  lbz 3, 83(31)
  01f3900  cmpwi 3, 4
  01f3904  bt 2, 0x1f4c70
  01f3908  lis 3, 31
  01f390c  lis 4, 114
  01f3910  addi 3, 3, 13820
  01f3914  li 5, 0
  01f3918  lfs 1, 12(3)
  01f391c  lfs 2, -3056(4)
  01f3920  ori 3, 31, 0
  01f3924  li 4, 4
  01f3928  fmuls 1, 2, 1
  01f392c  fctiwz 1, 1
  01f3930  stfd 1, 360(1)
  01f3934  lwz 6, 364(1)
  01f3938  extsw 6, 6
  01f393c  bl 0xfddc0
  01f3940  nop
  01f3944  b 0x1f4c70
  01f3948  lis 4, 31
  01f394c  lis 3, 16512
  01f3950  addi 29, 4, 13820
  01f3954  lis 4, 114
  01f3958  addic 5, 30, 296
  01f395c  stw 3, 88(31)
  01f3960  addic 3, 31, 24
  01f3964  lfs 1, 20(29)
  01f3968  lfs 3, 16(29)
  01f396c  lfs 2, -3048(4)
  01f3970  lfs 4, 24(29)
  01f3974  fmuls 2, 2, 1
  01f3978  lfs 5, 312(30)
  01f397c  lis 4, 114
  01f3980  fadds 1, 5, 3
  01f3984  lfs 6, -3052(4)
  01f3988  fmuls 4, 6, 4
  01f398c  fmr 3, 2
  01f3990  bl 0x109c30
  01f3994  nop
  01f3998  lfs 2, 28(29)
  01f399c  fcmpu 0, 1, 2
  01f39a0  bf 2, 0x1f4c70
  01f39a4  li 3, 5
  01f39a8  stb 3, 32(31)
  01f39ac  b 0x1f4c70
  01f39b0  lis 3, 16512
  01f39b4  lis 29, 165
  01f39b8  stw 3, 88(31)
  01f39bc  lfs 1, 292(30)
  01f39c0  lfs 2, 288(30)
  01f39c4  fmuls 1, 1, 1
  01f39c8  lfs 3, 296(30)
  01f39cc  lwz 3, 336(30)
  01f39d0  addic 29, 29, 7136
  01f39d4  lwz 4, 344(30)
  01f39d8  slwi 3, 3, 2
  01f39dc  slwi 4, 4, 4
  01f39e0  extsw 3, 3
  01f39e4  li 5, 0
  01f39e8  fmadds 1, 2, 2, 1
  01f39ec  lwzx 3, 29, 3
  01f39f0  addc 3, 3, 4
  01f39f4  clrldi 3, 3, 32
  01f39f8  lis 4, 31
  01f39fc  fmadds 1, 3, 3, 1
  01f3a00  lfs 31, 16(3)
  01f3a04  lfs 30, 20(3)
  01f3a08  addi 4, 4, 13820
  01f3a0c  lfs 2, 16(31)
  01f3a10  lfs 3, 20(31)
  01f3a14  fsubs 2, 31, 2
  01f3a18  lfs 29, 24(3)
  01f3a1c  fsubs 3, 30, 3
  01f3a20  lfs 28, 28(3)
  01f3a24  lfs 4, 24(31)
  01f3a28  lis 28, 115
  01f3a2c  fsqrts 1, 1
  01f3a30  addic 28, 28, 22784
  01f3a34  addic 3, 31, 72
  01f3a38  fabs 5, 2
  01f3a3c  fabs 6, 3
  01f3a40  fmuls 7, 3, 3
  01f3a44  fsubs 4, 29, 4
  01f3a48  fsubs 8, 5, 6
  01f3a4c  fmadds 7, 2, 2, 7
  01f3a50  fmadds 27, 4, 4, 7
  01f3a54  fsqrts 27, 27
  01f3a58  stfs 1, 128(1)
  01f3a5c  lfs 25, 28(4)
  01f3a60  stfs 2, 184(1)
  01f3a64  stfs 8, 192(1)
  01f3a68  stfs 3, 188(1)
  01f3a6c  stw 5, 132(1)
  01f3a70  lwz 4, 184(1)
  01f3a74  lwz 5, 192(1)
  01f3a78  lfs 1, 192(1)
  01f3a7c  lfs 2, 184(1)
  01f3a80  fsub 4, 1, 25
  01f3a84  fabs 2, 2
  01f3a88  lwz 6, 188(1)
  01f3a8c  lfs 3, 188(1)
  01f3a90  rlwinm 6, 6, 3, 29, 29
  01f3a94  fabs 3, 3
  01f3a98  rlwimi 6, 5, 2, 30, 30
  01f3a9c  rlwimi 6, 4, 4, 28, 28
  01f3aa0  ori 4, 28, 0
  01f3aa4  slwi 5, 6, 2
  01f3aa8  fsel 4, 4, 2, 6
  01f3aac  fsub 6, 1, 25
  01f3ab0  rlwimi 4, 6, 2, 26, 28
  01f3ab4  clrldi 4, 4, 32
  01f3ab8  lfsx 1, 28, 5
  01f3abc  lfs 2, 4(4)
  01f3ac0  fcmpu 0, 4, 25
  01f3ac4  fsel 3, 6, 3, 5
  01f3ac8  bt 1, 0x1f3ad4
  01f3acc  fmr 1, 25
  01f3ad0  b 0x1f3bf8
  01f3ad4  fsubs 5, 3, 4
  01f3ad8  fadds 3, 3, 4
  01f3adc  addic 4, 1, 16
  01f3ae0  li 7, 2
  01f3ae4  addic 5, 4, 308
  01f3ae8  addic 6, 4, 324
  01f3aec  mtctr 7
  01f3af0  fdivs 3, 5, 3
  01f3af4  fmuls 4, 3, 3
  01f3af8  stfs 3, 336(1)
  01f3afc  stfs 3, 328(1)
  01f3b00  stfs 3, 332(1)
  01f3b04  stfs 3, 324(1)
  01f3b08  lfs 6, 336(1)
  01f3b0c  lfs 7, 328(1)
  01f3b10  lfs 8, 332(1)
  01f3b14  fmuls 5, 4, 4
  01f3b18  fmuls 7, 7, 4
  01f3b1c  fmuls 6, 6, 5
  01f3b20  fmuls 3, 5, 5
  01f3b24  fmuls 5, 8, 5
  01f3b28  stfs 7, 328(1)
  01f3b2c  fmuls 4, 6, 4
  01f3b30  stfs 5, 332(1)
  01f3b34  stfs 4, 336(1)
  01f3b38  lfs 4, 308(4)
  01f3b3c  fmuls 4, 4, 3
  01f3b40  stfs 4, 324(4)
  01f3b44  lfs 4, 4(5)
  01f3b48  addic 4, 4, 8
  01f3b4c  addic 5, 5, 8
  01f3b50  fmuls 4, 4, 3
  01f3b54  stfs 4, 4(6)
  01f3b58  addic 6, 6, 8
  01f3b5c  bdnz 0x1f3b38
  01f3b60  li 6, 4
  01f3b64  ori 4, 1, 0
  01f3b68  mtctr 6
  01f3b6c  lis 5, 115
  01f3b70  addic 6, 4, 324
  01f3b74  addic 5, 5, 22752
  01f3b78  ori 8, 6, 0
  01f3b7c  lfs 3, 324(4)
  01f3b80  lfs 4, 0(5)
  01f3b84  fmuls 3, 3, 4
  01f3b88  lfs 4, 4(5)
  01f3b8c  addic 5, 5, 8
  01f3b90  stfs 3, 324(4)
  01f3b94  lfs 3, 4(6)
  01f3b98  addic 4, 4, 8
  01f3b9c  fmuls 3, 3, 4
  01f3ba0  stfs 3, 4(6)
  01f3ba4  addic 6, 6, 8
  01f3ba8  bdnz 0x1f3b7c
  01f3bac  fmr 3, 25
  01f3bb0  ori 4, 1, 0
  01f3bb4  mtctr 7
  01f3bb8  lfs 4, 324(4)
  01f3bbc  fadds 3, 3, 4
  01f3bc0  addic 4, 4, 16
  01f3bc4  lfs 4, 4(8)
  01f3bc8  lfs 5, 8(8)
  01f3bcc  lfs 6, 12(8)
  01f3bd0  addic 8, 8, 16
  01f3bd4  fadds 3, 3, 4
  01f3bd8  fadds 3, 3, 5
  01f3bdc  fadds 3, 3, 6
  01f3be0  bdnz 0x1f3bb8
  01f3be4  lis 4, 31
  01f3be8  addi 4, 4, 13820
  01f3bec  lfs 4, 32(4)
  01f3bf0  fadds 3, 3, 4
  01f3bf4  fmadds 1, 3, 1, 2
  01f3bf8  lis 4, 31
  01f3bfc  lis 5, 114
  01f3c00  addi 4, 4, 13820
  01f3c04  lis 6, 114
  01f3c08  lfs 2, 36(4)
  01f3c0c  lfs 3, -3048(5)
  01f3c10  lfs 4, 40(4)
  01f3c14  fmuls 2, 3, 2
  01f3c18  lfs 5, -3052(6)
  01f3c1c  addic 5, 30, 368
  01f3c20  fmuls 4, 5, 4
  01f3c24  fmr 3, 2
  01f3c28  bl 0x10a2e0
  01f3c2c  nop
  01f3c30  lfs 1, 16(31)
  01f3c34  lfs 2, 20(31)
  01f3c38  fsubs 1, 31, 1
  01f3c3c  fsubs 2, 30, 2
  01f3c40  fabs 4, 1
  01f3c44  fabs 5, 2
  01f3c48  stfs 1, 172(1)
  01f3c4c  stfs 2, 176(1)
  01f3c50  lfs 3, 72(31)
  01f3c54  fsubs 1, 4, 5
  01f3c58  stfs 1, 180(1)
  01f3c5c  lwz 3, 172(1)
  01f3c60  lfs 1, 172(1)
  01f3c64  lwz 4, 176(1)
  01f3c68  lfs 2, 176(1)
  01f3c6c  lwz 5, 180(1)
  01f3c70  rlwinm 4, 4, 3, 29, 29
  01f3c74  fabs 6, 2
  01f3c78  lfs 2, 180(1)
  01f3c7c  fabs 1, 1
  01f3c80  rlwimi 4, 5, 2, 30, 30
  01f3c84  fsub 7, 2, 25
  01f3c88  fsub 8, 2, 25
  01f3c8c  rlwimi 4, 3, 4, 28, 28
  01f3c90  ori 3, 28, 0
  01f3c94  rlwimi 3, 4, 2, 26, 28
  01f3c98  slwi 4, 4, 2
  01f3c9c  clrldi 3, 3, 32
  01f3ca0  fsel 5, 7, 1, 5
  01f3ca4  lfsx 1, 28, 4
  01f3ca8  fsel 4, 8, 6, 4
  01f3cac  lfs 2, 4(3)
  01f3cb0  fcmpu 0, 5, 25
  01f3cb4  bt 1, 0x1f3cc0
  01f3cb8  fmr 1, 25
  01f3cbc  b 0x1f3de4
  01f3cc0  fsubs 6, 4, 5
  01f3cc4  fadds 4, 4, 5
  01f3cc8  addic 3, 1, 16
  01f3ccc  li 7, 2
  01f3cd0  addic 5, 3, 292
  01f3cd4  addic 4, 3, 276
  01f3cd8  mtctr 7
  01f3cdc  fdivs 4, 6, 4
  01f3ce0  fmuls 5, 4, 4
  01f3ce4  stfs 4, 304(1)
  01f3ce8  stfs 4, 296(1)
  01f3cec  stfs 4, 300(1)
  01f3cf0  stfs 4, 292(1)
  01f3cf4  lfs 7, 304(1)
  01f3cf8  lfs 8, 296(1)
  01f3cfc  lfs 9, 300(1)
  01f3d00  fmuls 6, 5, 5
  01f3d04  fmuls 8, 8, 5
  01f3d08  fmuls 7, 7, 6
  01f3d0c  fmuls 4, 6, 6
  01f3d10  fmuls 6, 9, 6
  01f3d14  stfs 8, 296(1)
  01f3d18  fmuls 5, 7, 5
  01f3d1c  stfs 6, 300(1)
  01f3d20  stfs 5, 304(1)
  01f3d24  lfs 5, 276(3)
  01f3d28  fmuls 5, 5, 4
  01f3d2c  stfs 5, 292(3)
  01f3d30  lfs 5, 4(4)
  01f3d34  addic 4, 4, 8
  01f3d38  fmuls 5, 5, 4
  01f3d3c  addic 3, 3, 8
  01f3d40  stfs 5, 4(5)
  01f3d44  addic 5, 5, 8
  01f3d48  bdnz 0x1f3d24
  01f3d4c  li 5, 4
  01f3d50  ori 3, 1, 0
  01f3d54  mtctr 5
  01f3d58  lis 4, 115
  01f3d5c  addic 5, 3, 292
  01f3d60  addic 4, 4, 22752
  01f3d64  ori 6, 5, 0
  01f3d68  lfs 4, 292(3)
  01f3d6c  lfs 5, 0(4)
  01f3d70  fmuls 4, 4, 5
  01f3d74  lfs 5, 4(4)
  01f3d78  addic 4, 4, 8
  01f3d7c  stfs 4, 292(3)
  01f3d80  lfs 4, 4(5)
  01f3d84  addic 3, 3, 8
  01f3d88  fmuls 4, 4, 5
  01f3d8c  stfs 4, 4(5)
  01f3d90  addic 5, 5, 8
  01f3d94  bdnz 0x1f3d68
  01f3d98  ori 3, 1, 0
  01f3d9c  fmr 4, 25
  01f3da0  mtctr 7
  01f3da4  lfs 5, 292(3)
  01f3da8  fadds 4, 4, 5
  01f3dac  lfs 5, 4(6)
  01f3db0  addic 3, 3, 16
  01f3db4  lfs 6, 8(6)
  01f3db8  lfs 7, 12(6)
  01f3dbc  addic 6, 6, 16
  01f3dc0  fadds 4, 4, 5
  01f3dc4  fadds 4, 4, 6
  01f3dc8  fadds 4, 4, 7
  01f3dcc  bdnz 0x1f3da4
  01f3dd0  lis 3, 31
  01f3dd4  addi 3, 3, 13820
  01f3dd8  lfs 5, 32(3)
  01f3ddc  fadds 4, 4, 5
  01f3de0  fmadds 1, 4, 1, 2
  01f3de4  fmr 2, 3
  01f3de8  bl 0x5026a0
  01f3dec  nop
  01f3df0  lis 3, 31
  01f3df4  addi 3, 3, 13820
  01f3df8  lfs 2, 32(3)
  01f3dfc  fcmpu 0, 1, 2
  01f3e00  cror 6, 1, 2
  01f3e04  bt 6, 0x1f3e80
  01f3e08  lis 3, 31
  01f3e0c  lis 4, 114
  01f3e10  fmr 1, 27
  01f3e14  addi 3, 3, 13820
  01f3e18  lis 6, 114
  01f3e1c  addic 5, 1, 128
  01f3e20  lfs 4, 44(3)
  01f3e24  lfs 2, -3048(4)
  01f3e28  addic 3, 1, 132
  01f3e2c  lfs 3, -3052(6)
  01f3e30  fmuls 2, 2, 4
  01f3e34  fmuls 4, 3, 4
  01f3e38  fmr 3, 2
  01f3e3c  bl 0x109c30
  01f3e40  nop
  01f3e44  lfs 1, 16(31)
  01f3e48  addic 3, 30, 288
  01f3e4c  fsubs 1, 31, 1
  01f3e50  stfs 1, 288(30)
  01f3e54  lfs 1, 20(31)
  01f3e58  fsubs 1, 30, 1
  01f3e5c  stfs 1, 292(30)
  01f3e60  lfs 1, 24(31)
  01f3e64  stfs 28, 300(30)
  01f3e68  fsubs 1, 29, 1
  01f3e6c  stfs 1, 296(30)
  01f3e70  lfs 1, 128(1)
  01f3e74  bl 0x110488
  01f3e78  nop
  01f3e7c  b 0x1f3e94
  01f3e80  li 3, 0
  01f3e84  stw 3, 300(30)
  01f3e88  stw 3, 296(30)
  01f3e8c  stw 3, 292(30)
  01f3e90  stw 3, 288(30)
  01f3e94  lis 3, 31
  01f3e98  fmr 2, 25
  01f3e9c  addic 4, 30, 288
  01f3ea0  addi 3, 3, 13820
  01f3ea4  li 8, 0
  01f3ea8  li 6, 512
  01f3eac  lfs 31, 48(3)
  01f3eb0  ori 3, 31, 0
  01f3eb4  fmr 1, 31
  01f3eb8  bl 0x100ef8
  01f3ebc  nop
  01f3ec0  fcmpu 0, 27, 26
  01f3ec4  cror 6, 1, 2
  01f3ec8  bt 6, 0x1f4c70
  01f3ecc  lwz 3, 336(30)
  01f3ed0  lwz 4, 344(30)
  01f3ed4  slwi 5, 3, 2
  01f3ed8  addic 3, 4, 1
  01f3edc  extsw 4, 5
  01f3ee0  slwi 5, 3, 4
  01f3ee4  stw 3, 344(30)
  01f3ee8  lwzx 29, 29, 4
  01f3eec  addc 4, 29, 5
  01f3ef0  clrldi 4, 4, 32
  01f3ef4  lwz 4, 12(4)
  01f3ef8  cmpwi 4, 0
  01f3efc  bf 1, 0x1f3f54
  01f3f00  li 3, 6
  01f3f04  lbz 4, 83(31)
  01f3f08  cmpwi 4, 3
  01f3f0c  stb 3, 32(31)
  01f3f10  bt 2, 0x1f4c70
  01f3f14  lis 3, 31
  01f3f18  lis 4, 114
  01f3f1c  addi 3, 3, 13820
  01f3f20  li 5, 0
  01f3f24  lfs 1, 12(3)
  01f3f28  lfs 2, -3056(4)
  01f3f2c  ori 3, 31, 0
  01f3f30  fmuls 1, 2, 1
  01f3f34  li 4, 3
  01f3f38  fctiwz 1, 1
  01f3f3c  stfd 1, 360(1)
  01f3f40  lwz 6, 364(1)
  01f3f44  extsw 6, 6
  01f3f48  bl 0xfddc0
  01f3f4c  nop
  01f3f50  b 0x1f4c70
  01f3f54  lwz 4, 0(29)
  01f3f58  cmpw 3, 4
  01f3f5c  bf 2, 0x1f4c70
  01f3f60  li 3, 10
  01f3f64  lbz 4, 83(31)
  01f3f68  cmpwi 4, 4
  01f3f6c  stb 3, 32(31)
  01f3f70  bt 2, 0x1f3fb0
  01f3f74  lis 3, 31
  01f3f78  lis 4, 114
  01f3f7c  addi 3, 3, 13820
  01f3f80  li 5, 0
  01f3f84  lfs 1, 12(3)
  01f3f88  lfs 2, -3056(4)
  01f3f8c  ori 3, 31, 0
  01f3f90  fmuls 1, 2, 1
  01f3f94  li 4, 4
  01f3f98  fctiwz 1, 1
  01f3f9c  stfd 1, 360(1)
  01f3fa0  lwz 6, 364(1)
  01f3fa4  extsw 6, 6
  01f3fa8  bl 0xfddc0
  01f3fac  nop
  01f3fb0  addic 3, 31, 16
  01f3fb4  fmr 1, 31
  01f3fb8  li 4, 0
  01f3fbc  bl 0xffb70
  01f3fc0  nop
  01f3fc4  lis 3, 161
  01f3fc8  addic 3, 3, 2368
  01f3fcc  lfs 1, 32(3)
  01f3fd0  stfs 1, 304(30)
  01f3fd4  lfs 1, 36(3)
  01f3fd8  stfs 1, 308(30)
  01f3fdc  lfs 1, 40(3)
  01f3fe0  stfs 1, 312(30)
  01f3fe4  lfs 1, 44(3)
  01f3fe8  stfs 1, 316(30)
  01f3fec  lfs 1, 16(31)
  01f3ff0  stfs 1, 320(30)
  01f3ff4  lfs 1, 20(31)
  01f3ff8  stfs 1, 324(30)
  01f3ffc  lfs 1, 24(31)
  01f4000  stfs 1, 328(30)
  01f4004  lfs 1, 28(31)
  01f4008  stfs 1, 332(30)
  01f400c  b 0x1f4c70
  01f4010  lfs 1, 16(29)
  01f4014  lfs 2, 16(31)
  01f4018  lfs 3, 20(29)
  01f401c  lfs 4, 20(31)
  01f4020  fsubs 1, 1, 2
  01f4024  lis 3, 31
  01f4028  fsubs 2, 3, 4
  01f402c  addi 4, 3, 13820
  01f4030  lis 5, 115
  01f4034  addic 3, 31, 72
  01f4038  addic 5, 5, 22784
  01f403c  fabs 3, 1
  01f4040  fabs 5, 2
  01f4044  stfs 1, 160(1)
  01f4048  stfs 2, 164(1)
  01f404c  fsubs 1, 3, 5
  01f4050  stfs 1, 168(1)
  01f4054  lwz 6, 160(1)
  01f4058  lfs 4, 28(4)
  01f405c  lfs 1, 160(1)
  01f4060  lwz 4, 164(1)
  01f4064  lfs 2, 164(1)
  01f4068  fabs 1, 1
  01f406c  lwz 7, 168(1)
  01f4070  rlwinm 4, 4, 3, 29, 29
  01f4074  fabs 6, 2
  01f4078  lfs 2, 168(1)
  01f407c  rlwimi 4, 7, 2, 30, 30
  01f4080  fsub 7, 2, 4
  01f4084  rlwimi 4, 6, 4, 28, 28
  01f4088  fsub 8, 2, 4
  01f408c  ori 6, 5, 0
  01f4090  rlwimi 6, 4, 2, 26, 28
  01f4094  slwi 4, 4, 2
  01f4098  clrldi 6, 6, 32
  01f409c  fsel 5, 7, 1, 5
  01f40a0  lfsx 1, 5, 4
  01f40a4  lfs 2, 4(6)
  01f40a8  fsel 3, 8, 6, 3
  01f40ac  fcmpu 0, 5, 4
  01f40b0  bt 1, 0x1f40b8
  01f40b4  b 0x1f41d8
  01f40b8  fsubs 6, 3, 5
  01f40bc  fadds 3, 3, 5
  01f40c0  addic 4, 1, 16
  01f40c4  li 7, 2
  01f40c8  addic 6, 4, 260
  01f40cc  addic 5, 4, 244
  01f40d0  mtctr 7
  01f40d4  fdivs 3, 6, 3
  01f40d8  fmuls 5, 3, 3
  01f40dc  stfs 3, 272(1)
  01f40e0  stfs 3, 264(1)
  01f40e4  stfs 3, 268(1)
  01f40e8  stfs 3, 260(1)
  01f40ec  lfs 7, 272(1)
  01f40f0  lfs 8, 264(1)
  01f40f4  lfs 9, 268(1)
  01f40f8  fmuls 6, 5, 5
  01f40fc  fmuls 8, 8, 5
  01f4100  fmuls 7, 7, 6
  01f4104  fmuls 3, 6, 6
  01f4108  fmuls 6, 9, 6
  01f410c  stfs 8, 264(1)
  01f4110  fmuls 5, 7, 5
  01f4114  stfs 6, 268(1)
  01f4118  stfs 5, 272(1)
  01f411c  lfs 5, 244(4)
  01f4120  fmuls 5, 5, 3
  01f4124  stfs 5, 260(4)
  01f4128  lfs 5, 4(5)
  01f412c  addic 5, 5, 8
  01f4130  fmuls 5, 5, 3
  01f4134  addic 4, 4, 8
  01f4138  stfs 5, 4(6)
  01f413c  addic 6, 6, 8
  01f4140  bdnz 0x1f411c
  01f4144  li 6, 4
  01f4148  ori 4, 1, 0
  01f414c  mtctr 6
  01f4150  lis 5, 115
  01f4154  addic 6, 4, 260
  01f4158  addic 5, 5, 22752
  01f415c  ori 8, 6, 0
  01f4160  lfs 3, 260(4)
  01f4164  lfs 5, 0(5)
  01f4168  fmuls 3, 3, 5
  01f416c  lfs 5, 4(5)
  01f4170  addic 5, 5, 8
  01f4174  stfs 3, 260(4)
  01f4178  lfs 3, 4(6)
  01f417c  addic 4, 4, 8
  01f4180  fmuls 3, 3, 5
  01f4184  stfs 3, 4(6)
  01f4188  addic 6, 6, 8
  01f418c  bdnz 0x1f4160
  01f4190  ori 4, 1, 0
  01f4194  mtctr 7
  01f4198  lfs 3, 260(4)
  01f419c  fadds 3, 4, 3
  01f41a0  addic 4, 4, 16
  01f41a4  lfs 4, 4(8)
  01f41a8  lfs 5, 8(8)
  01f41ac  lfs 6, 12(8)
  01f41b0  addic 8, 8, 16
  01f41b4  fadds 3, 3, 4
  01f41b8  fadds 4, 3, 5
  01f41bc  fadds 4, 4, 6
  01f41c0  bdnz 0x1f4198
  01f41c4  lis 4, 31
  01f41c8  addi 4, 4, 13820
  01f41cc  lfs 3, 32(4)
  01f41d0  fadds 4, 4, 3
  01f41d4  fmadds 4, 4, 1, 2
  01f41d8  lis 4, 31
  01f41dc  lis 6, 114
  01f41e0  fmr 1, 4
  01f41e4  addi 4, 4, 13820
  01f41e8  lis 5, 114
  01f41ec  lfs 3, 36(4)
  01f41f0  lfs 5, 40(4)
  01f41f4  lfs 2, -3048(6)
  01f41f8  lfs 6, -3052(5)
  01f41fc  fmuls 2, 2, 3
  01f4200  addic 5, 30, 368
  01f4204  fmuls 4, 6, 5
  01f4208  fmr 3, 2
  01f420c  bl 0x10a2e0
  01f4210  nop
  01f4214  lbz 3, 112(31)
  01f4218  rlwinm 3, 3, 0, 30, 30
  01f421c  cmpwi 3, 0
  01f4220  bt 2, 0x1f4c70
  01f4224  lwz 3, 336(30)
  01f4228  lis 29, 165
  01f422c  lwz 4, 344(30)
  01f4230  slwi 3, 3, 2
  01f4234  addic 29, 29, 7136
  01f4238  extsw 3, 3
  01f423c  slwi 4, 4, 4
  01f4240  lwzx 3, 29, 3
  01f4244  addc 3, 3, 4
  01f4248  clrldi 3, 3, 32
  01f424c  lfs 1, 12(3)
  01f4250  bl 0x502758
  01f4254  nop
  01f4258  sldi 3, 3, 2
  01f425c  lis 4, 164
  01f4260  addc 3, 30, 3
  01f4264  clrldi 3, 3, 32
  01f4268  lwz 6, -28512(4)
  01f426c  lwz 3, 348(3)
  01f4270  slwi 3, 3, 8
  01f4274  addc 3, 6, 3
  01f4278  clrldi 3, 3, 32
  01f427c  cmpwi 3, 0
  01f4280  bt 2, 0x1f42e8
  01f4284  lbz 3, 33(3)
  01f4288  cmpwi 3, 255
  01f428c  bt 2, 0x1f42e8
  01f4290  lis 4, 165
  01f4294  slwi 3, 3, 2
  01f4298  addic 4, 4, -28284
  01f429c  lwzx 3, 4, 3
  01f42a0  cmpwi 3, 0
  01f42a4  bt 2, 0x1f42e8
  01f42a8  li 5, 2
  01f42ac  lhz 4, 0(3)
  01f42b0  rlwinm 4, 4, 8, 9, 23
  01f42b4  addc 4, 6, 4
  01f42b8  clrldi 4, 4, 32
  01f42bc  lbz 7, 32(4)
  01f42c0  cmpwi 7, 1
  01f42c4  bf 2, 0x1f42d4
  01f42c8  lis 6, 164
  01f42cc  stb 5, 32(4)
  01f42d0  lwz 6, -28512(6)
  01f42d4  lhz 4, 0(3)
  01f42d8  addic 3, 3, 2
  01f42dc  extsh 4, 4
  01f42e0  cmpwi 4, 0
  01f42e4  bf 0, 0x1f42ac
  01f42e8  lwz 3, 336(30)
  01f42ec  lwz 4, 344(30)
  01f42f0  slwi 3, 3, 2
  01f42f4  extsw 3, 3
  01f42f8  lwzx 3, 29, 3
  01f42fc  lwz 3, 0(3)
  01f4300  cmpw 4, 3
  01f4304  bf 2, 0x1f43c0
  01f4308  li 3, 10
  01f430c  lbz 4, 83(31)
  01f4310  cmpwi 4, 4
  01f4314  stb 3, 32(31)
  01f4318  bt 2, 0x1f4358
  01f431c  lis 3, 31
  01f4320  lis 4, 114
  01f4324  addi 3, 3, 13820
  01f4328  li 5, 0
  01f432c  lfs 1, 12(3)
  01f4330  lfs 2, -3056(4)
  01f4334  ori 3, 31, 0
  01f4338  fmuls 1, 2, 1
  01f433c  li 4, 4
  01f4340  fctiwz 1, 1
  01f4344  stfd 1, 360(1)
  01f4348  lwz 6, 364(1)
  01f434c  extsw 6, 6
  01f4350  bl 0xfddc0
  01f4354  nop
  01f4358  lis 4, 31
  01f435c  addic 3, 31, 16
  01f4360  addi 5, 4, 13820
  01f4364  li 4, 0
  01f4368  lfs 1, 48(5)
  01f436c  bl 0xffb70
  01f4370  nop
  01f4374  lis 3, 161
  01f4378  addic 3, 3, 2368
  01f437c  lfs 1, 32(3)
  01f4380  stfs 1, 304(30)
  01f4384  lfs 1, 36(3)
  01f4388  stfs 1, 308(30)
  01f438c  lfs 1, 40(3)
  01f4390  stfs 1, 312(30)
  01f4394  lfs 1, 44(3)
  01f4398  stfs 1, 316(30)
  01f439c  lfs 1, 16(31)
  01f43a0  stfs 1, 320(30)
  01f43a4  lfs 1, 20(31)
  01f43a8  stfs 1, 324(30)
  01f43ac  lfs 1, 24(31)
  01f43b0  stfs 1, 328(30)
  01f43b4  lfs 1, 28(31)
  01f43b8  stfs 1, 332(30)
  01f43bc  b 0x1f4c70
  01f43c0  li 3, 5
  01f43c4  lbz 4, 83(31)
  01f43c8  cmpwi 4, 4
  01f43cc  stb 3, 32(31)
  01f43d0  bt 2, 0x1f4c70
  01f43d4  lis 3, 31
  01f43d8  lis 4, 114
  01f43dc  addi 3, 3, 13820
  01f43e0  li 5, 0
  01f43e4  lfs 1, 12(3)
  01f43e8  lfs 2, -3056(4)
  01f43ec  ori 3, 31, 0
  01f43f0  fmuls 1, 2, 1
  01f43f4  li 4, 4
  01f43f8  fctiwz 1, 1
  01f43fc  stfd 1, 360(1)
  01f4400  lwz 6, 364(1)
  01f4404  extsw 6, 6
  01f4408  bl 0xfddc0
  01f440c  nop
  01f4410  b 0x1f4c70
  01f4414  lis 3, 31
  01f4418  lis 29, 114
  01f441c  addi 4, 3, 13820
  01f4420  addic 3, 31, 68
  01f4424  li 6, 0
  01f4428  lfs 31, 28(4)
  01f442c  lfs 3, 52(4)
  01f4430  lfs 2, -3052(29)
  01f4434  fmr 1, 31
  01f4438  fmuls 2, 2, 3
  01f443c  bl 0x109ec0
  01f4440  nop
  01f4444  lfs 1, 304(30)
  01f4448  lfs 2, 16(31)
  01f444c  lfs 3, 308(30)
  01f4450  lfs 4, 20(31)
  01f4454  fsubs 1, 1, 2
  01f4458  fsubs 2, 3, 4
  01f445c  lis 3, 115
  01f4460  addic 3, 3, 22784
  01f4464  fabs 3, 1
  01f4468  fabs 4, 2
  01f446c  stfs 1, 148(1)
  01f4470  stfs 2, 152(1)
  01f4474  fsubs 1, 3, 4
  01f4478  stfs 1, 156(1)
  01f447c  lwz 4, 148(1)
  01f4480  lfs 1, 148(1)
  01f4484  lwz 5, 152(1)
  01f4488  fabs 2, 1
  01f448c  lfs 1, 152(1)
  01f4490  rlwinm 5, 5, 3, 29, 29
  01f4494  fabs 5, 1
  01f4498  lfs 1, -3052(29)
  01f449c  lwz 6, 156(1)
  01f44a0  lfs 6, 156(1)
  01f44a4  rlwimi 5, 6, 2, 30, 30
  01f44a8  fsub 7, 6, 31
  01f44ac  fsub 6, 6, 31
  01f44b0  rlwimi 5, 4, 4, 28, 28
  01f44b4  ori 4, 3, 0
  01f44b8  rlwimi 4, 5, 2, 26, 28
  01f44bc  slwi 5, 5, 2
  01f44c0  clrldi 4, 4, 32
  01f44c4  fsel 4, 7, 2, 4
  01f44c8  lfsx 30, 3, 5
  01f44cc  fsel 3, 6, 5, 3
  01f44d0  lfs 2, 4(4)
  01f44d4  fcmpu 0, 4, 31
  01f44d8  bt 1, 0x1f44e4
  01f44dc  fmr 30, 31
  01f44e0  b 0x1f4608
  01f44e4  fsubs 5, 3, 4
  01f44e8  fadds 3, 3, 4
  01f44ec  addic 3, 1, 16
  01f44f0  li 7, 2
  01f44f4  addic 4, 3, 212
  01f44f8  addic 5, 3, 228
  01f44fc  mtctr 7
  01f4500  fdivs 3, 5, 3
  01f4504  fmuls 4, 3, 3
  01f4508  stfs 3, 240(1)
  01f450c  stfs 3, 232(1)
  01f4510  stfs 3, 236(1)
  01f4514  stfs 3, 228(1)
  01f4518  lfs 6, 240(1)
  01f451c  lfs 7, 232(1)
  01f4520  lfs 8, 236(1)
  01f4524  fmuls 5, 4, 4
  01f4528  fmuls 7, 7, 4
  01f452c  fmuls 6, 6, 5
  01f4530  fmuls 3, 5, 5
  01f4534  fmuls 5, 8, 5
  01f4538  stfs 7, 232(1)
  01f453c  fmuls 4, 6, 4
  01f4540  stfs 5, 236(1)
  01f4544  stfs 4, 240(1)
  01f4548  lfs 4, 212(3)
  01f454c  fmuls 4, 4, 3
  01f4550  stfs 4, 228(3)
  01f4554  lfs 4, 4(4)
  01f4558  addic 3, 3, 8
  01f455c  addic 4, 4, 8
  01f4560  fmuls 4, 4, 3
  01f4564  stfs 4, 4(5)
  01f4568  addic 5, 5, 8
  01f456c  bdnz 0x1f4548
  01f4570  li 5, 4
  01f4574  ori 3, 1, 0
  01f4578  mtctr 5
  01f457c  lis 4, 115
  01f4580  addic 5, 3, 228
  01f4584  addic 4, 4, 22752
  01f4588  ori 6, 5, 0
  01f458c  lfs 3, 228(3)
  01f4590  lfs 4, 0(4)
  01f4594  fmuls 3, 3, 4
  01f4598  lfs 4, 4(4)
  01f459c  addic 4, 4, 8
  01f45a0  stfs 3, 228(3)
  01f45a4  lfs 3, 4(5)
  01f45a8  addic 3, 3, 8
  01f45ac  fmuls 3, 3, 4
  01f45b0  stfs 3, 4(5)
  01f45b4  addic 5, 5, 8
  01f45b8  bdnz 0x1f458c
  01f45bc  fmr 3, 31
  01f45c0  ori 3, 1, 0
  01f45c4  mtctr 7
  01f45c8  lfs 4, 228(3)
  01f45cc  fadds 3, 3, 4
  01f45d0  addic 3, 3, 16
  01f45d4  lfs 4, 4(6)
  01f45d8  lfs 5, 8(6)
  01f45dc  lfs 6, 12(6)
  01f45e0  addic 6, 6, 16
  01f45e4  fadds 3, 3, 4
  01f45e8  fadds 3, 3, 5
  01f45ec  fadds 3, 3, 6
  01f45f0  bdnz 0x1f45c8
  01f45f4  lis 3, 31
  01f45f8  addi 3, 3, 13820
  01f45fc  lfs 4, 32(3)
  01f4600  fadds 3, 3, 4
  01f4604  fmadds 30, 3, 30, 2
  01f4608  lis 3, 31
  01f460c  fmr 4, 1
  01f4610  addic 5, 30, 368
  01f4614  addi 29, 3, 13820
  01f4618  fmr 1, 30
  01f461c  ori 3, 31, 0
  01f4620  lfs 5, 64(29)
  01f4624  lfs 2, 56(29)
  01f4628  lfs 6, 60(29)
  01f462c  fmr 3, 6
  01f4630  fmuls 4, 4, 5
  01f4634  bl 0xff2e8
  01f4638  nop
  01f463c  lfs 1, 68(29)
  01f4640  lfs 2, 72(31)
  01f4644  lfs 4, 72(29)
  01f4648  fadds 1, 2, 1
  01f464c  lfs 5, 76(29)
  01f4650  lis 3, 114
  01f4654  lfs 6, 80(29)
  01f4658  fsubs 2, 4, 1
  01f465c  fsubs 3, 5, 1
  01f4660  fsub 7, 1, 2
  01f4664  fsel 1, 7, 2, 1
  01f4668  lfs 7, 84(29)
  01f466c  lfs 8, 88(29)
  01f4670  fsub 2, 3, 1
  01f4674  fsel 1, 2, 3, 1
  01f4678  lfs 3, -3052(3)
  01f467c  lfs 11, 92(29)
  01f4680  lfs 2, 24(29)
  01f4684  fmuls 2, 3, 2
  01f4688  fmuls 10, 1, 1
  01f468c  li 3, 0
  01f4690  fmuls 9, 10, 1
  01f4694  fmuls 12, 10, 9
  01f4698  fmadds 1, 9, 6, 1
  01f469c  fmuls 9, 10, 12
  01f46a0  fmadds 1, 12, 7, 1
  01f46a4  fmuls 10, 10, 9
  01f46a8  fmadds 1, 9, 8, 1
  01f46ac  fmadds 1, 10, 11, 1
  01f46b0  fmuls 1, 2, 1
  01f46b4  stfs 1, 288(30)
  01f46b8  lfs 1, 72(31)
  01f46bc  fsubs 4, 4, 1
  01f46c0  fsubs 5, 5, 1
  01f46c4  fsub 9, 1, 4
  01f46c8  fsel 1, 9, 4, 1
  01f46cc  fsub 4, 5, 1
  01f46d0  fsel 1, 4, 5, 1
  01f46d4  lfs 4, 312(30)
  01f46d8  stw 3, 296(30)
  01f46dc  fmuls 5, 1, 1
  01f46e0  fmuls 9, 5, 1
  01f46e4  fmuls 10, 5, 9
  01f46e8  fmadds 1, 9, 6, 1
  01f46ec  fmuls 6, 5, 10
  01f46f0  fmadds 1, 10, 7, 1
  01f46f4  fmuls 5, 5, 6
  01f46f8  fmadds 1, 6, 8, 1
  01f46fc  fmadds 1, 5, 11, 1
  01f4700  fmuls 1, 2, 1
  01f4704  stfs 1, 292(30)
  01f4708  lfs 30, 16(29)
  01f470c  lfs 1, 24(31)
  01f4710  fadds 4, 4, 30
  01f4714  fsubs 1, 4, 1
  01f4718  fcmpu 0, 1, 2
  01f471c  cror 6, 0, 2
  01f4720  bt 6, 0x1f472c
  01f4724  fmr 1, 2
  01f4728  b 0x1f474c
  01f472c  lis 3, 31
  01f4730  addi 3, 3, 13820
  01f4734  lfs 2, 96(3)
  01f4738  fmuls 2, 3, 2
  01f473c  fcmpu 0, 1, 2
  01f4740  cror 6, 1, 2
  01f4744  bt 6, 0x1f474c
  01f4748  fmr 1, 2
  01f474c  lis 4, 31
  01f4750  stfs 1, 296(30)
  01f4754  ori 3, 31, 0
  01f4758  fmr 2, 31
  01f475c  addi 5, 4, 13820
  01f4760  li 6, 512
  01f4764  addic 4, 30, 288
  01f4768  li 8, 0
  01f476c  lfs 1, 48(5)
  01f4770  bl 0x100ef8
  01f4774  nop
  01f4778  lfs 1, 20(31)
  01f477c  lfs 2, 308(30)
  01f4780  lfs 3, 16(31)
  01f4784  fsubs 1, 1, 2
  01f4788  lfs 2, 304(30)
  01f478c  fsubs 2, 3, 2
  01f4790  fmuls 1, 1, 1
  01f4794  fmadds 1, 2, 2, 1
  01f4798  fsqrts 1, 1
  01f479c  fcmpu 0, 1, 30
  01f47a0  cror 6, 1, 2
  01f47a4  bt 6, 0x1f4c70
  01f47a8  li 3, 7
  01f47ac  stb 3, 32(31)
  01f47b0  b 0x1f4c70
  01f47b4  addic 3, 30, 412
  01f47b8  bl 0x4fff60
  01f47bc  nop
  01f47c0  cmpwi 3, 0
  01f47c4  bt 2, 0x1f4c70
  01f47c8  lis 3, 31
  01f47cc  li 4, 100
  01f47d0  vspltisw 2, -1
  01f47d4  addi 29, 3, 13820
  01f47d8  lis 3, 114
  01f47dc  li 5, -3056
  01f47e0  vslw 2, 2, 2
  01f47e4  <unknown>
  01f47e8  vspltw 3, 3, 0
  01f47ec  <unknown>
  01f47f0  li 3, 412
  01f47f4  vmaddfp 2, 4, 3, 2
  01f47f8  vctsxs 2, 2, 0
  01f47fc  vspltw 2, 2, 0
  01f4800  stvewx 2, 3, 30
  01f4804  lfs 1, 28(29)
  01f4808  lfs 2, 104(29)
  01f480c  bl 0xfcbe8
  01f4810  nop
  01f4814  fmr 31, 1
  01f4818  bl 0xfcc68
  01f481c  nop
  01f4820  lfs 2, 68(29)
  01f4824  lfs 3, 72(29)
  01f4828  fadds 2, 1, 2
  01f482c  fsubs 5, 3, 1
  01f4830  lfs 4, 76(29)
  01f4834  fsubs 6, 4, 1
  01f4838  fsubs 3, 3, 2
  01f483c  fsub 7, 1, 5
  01f4840  fsubs 4, 4, 2
  01f4844  fsub 8, 2, 3
  01f4848  fsel 1, 7, 5, 1
  01f484c  lfs 5, 80(29)
  01f4850  fsel 2, 8, 3, 2
  01f4854  fsub 3, 6, 1
  01f4858  fsub 8, 4, 2
  01f485c  fsel 1, 3, 6, 1
  01f4860  lfs 3, 84(29)
  01f4864  lfs 6, 88(29)
  01f4868  lfs 9, 92(29)
  01f486c  fsel 2, 8, 4, 2
  01f4870  fmuls 4, 1, 1
  01f4874  fmuls 7, 2, 2
  01f4878  fmuls 8, 4, 1
  01f487c  fmuls 10, 7, 2
  01f4880  fmuls 11, 4, 8
  01f4884  fmadds 1, 8, 5, 1
  01f4888  fmuls 8, 7, 10
  01f488c  fmadds 2, 10, 5, 2
  01f4890  fmuls 5, 4, 11
  01f4894  fmadds 1, 11, 3, 1
  01f4898  fmuls 10, 7, 8
  01f489c  fmadds 2, 8, 3, 2
  01f48a0  fmuls 3, 4, 5
  01f48a4  fmadds 1, 5, 6, 1
  01f48a8  lfs 4, 108(29)
  01f48ac  fmuls 5, 7, 10
  01f48b0  fmadds 6, 10, 6, 2
  01f48b4  lfs 2, 112(29)
  01f48b8  fmadds 30, 3, 9, 1
  01f48bc  fmr 1, 4
  01f48c0  fmadds 29, 5, 9, 6
  01f48c4  bl 0xfcbe8
  01f48c8  nop
  01f48cc  lfs 2, 304(30)
  01f48d0  lfs 3, 308(30)
  01f48d4  fmadds 2, 29, 31, 2
  01f48d8  lfs 4, 312(30)
  01f48dc  fmadds 3, 30, 31, 3
  01f48e0  fadds 1, 1, 4
  01f48e4  stfs 2, 320(30)
  01f48e8  stfs 3, 324(30)
  01f48ec  stfs 1, 328(30)
  01f48f0  li 3, 10
  01f48f4  stfs 1, 332(30)
  01f48f8  stb 3, 32(31)
  01f48fc  b 0x1f4c70
  01f4900  lfs 1, 320(30)
  01f4904  lfs 2, 16(31)
  01f4908  lfs 3, 324(30)
  01f490c  lis 3, 31
  01f4910  lfs 4, 20(31)
  01f4914  fsubs 1, 1, 2
  01f4918  addi 3, 3, 13820
  01f491c  fsubs 2, 3, 4
  01f4920  lis 4, 115
  01f4924  addic 4, 4, 22784
  01f4928  fabs 3, 1
  01f492c  fabs 4, 2
  01f4930  stfs 1, 136(1)
  01f4934  stfs 2, 140(1)
  01f4938  fsubs 1, 3, 4
  01f493c  stfs 1, 144(1)
  01f4940  lwz 5, 136(1)
  01f4944  lfs 31, 28(3)
  01f4948  lfs 1, 136(1)
  01f494c  lwz 3, 140(1)
  01f4950  lfs 2, 140(1)
  01f4954  fabs 1, 1
  01f4958  lwz 6, 144(1)
  01f495c  rlwinm 3, 3, 3, 29, 29
  01f4960  fabs 5, 2
  01f4964  lfs 2, 144(1)
  01f4968  rlwimi 3, 6, 2, 30, 30
  01f496c  fsub 6, 2, 31
  01f4970  rlwimi 3, 5, 4, 28, 28
  01f4974  fsub 7, 2, 31
  01f4978  ori 5, 4, 0
  01f497c  rlwimi 5, 3, 2, 26, 28
  01f4980  slwi 3, 3, 2
  01f4984  clrldi 5, 5, 32
  01f4988  fsel 4, 6, 1, 4
  01f498c  lfsx 1, 4, 3
  01f4990  lfs 2, 4(5)
  01f4994  fsel 3, 7, 5, 3
  01f4998  fcmpu 0, 4, 31
  01f499c  bt 1, 0x1f49a8
  01f49a0  fmr 1, 31
  01f49a4  b 0x1f4acc
  01f49a8  fsubs 5, 3, 4
  01f49ac  fadds 3, 3, 4
  01f49b0  addic 3, 1, 16
  01f49b4  li 7, 2
  01f49b8  addic 4, 3, 180
  01f49bc  addic 5, 3, 196
  01f49c0  mtctr 7
  01f49c4  fdivs 3, 5, 3
  01f49c8  fmuls 4, 3, 3
  01f49cc  stfs 3, 208(1)
  01f49d0  stfs 3, 200(1)
  01f49d4  stfs 3, 204(1)
  01f49d8  stfs 3, 196(1)
  01f49dc  lfs 6, 208(1)
  01f49e0  lfs 7, 200(1)
  01f49e4  lfs 8, 204(1)
  01f49e8  fmuls 5, 4, 4
  01f49ec  fmuls 7, 7, 4
  01f49f0  fmuls 6, 6, 5
  01f49f4  fmuls 3, 5, 5
  01f49f8  fmuls 5, 8, 5
  01f49fc  stfs 7, 200(1)
  01f4a00  fmuls 4, 6, 4
  01f4a04  stfs 5, 204(1)
  01f4a08  stfs 4, 208(1)
  01f4a0c  lfs 4, 180(3)
  01f4a10  fmuls 4, 4, 3
  01f4a14  stfs 4, 196(3)
  01f4a18  lfs 4, 4(4)
  01f4a1c  addic 3, 3, 8
  01f4a20  addic 4, 4, 8
  01f4a24  fmuls 4, 4, 3
  01f4a28  stfs 4, 4(5)
  01f4a2c  addic 5, 5, 8
  01f4a30  bdnz 0x1f4a0c
  01f4a34  li 5, 4
  01f4a38  ori 3, 1, 0
  01f4a3c  mtctr 5
  01f4a40  lis 4, 115
  01f4a44  addic 5, 3, 196
  01f4a48  addic 4, 4, 22752
  01f4a4c  ori 6, 5, 0
  01f4a50  lfs 3, 196(3)
  01f4a54  lfs 4, 0(4)
  01f4a58  fmuls 3, 3, 4
  01f4a5c  lfs 4, 4(4)
  01f4a60  addic 4, 4, 8
  01f4a64  stfs 3, 196(3)
  01f4a68  lfs 3, 4(5)
  01f4a6c  addic 3, 3, 8
  01f4a70  fmuls 3, 3, 4
  01f4a74  stfs 3, 4(5)
  01f4a78  addic 5, 5, 8
  01f4a7c  bdnz 0x1f4a50
  01f4a80  fmr 3, 31
  01f4a84  ori 3, 1, 0
  01f4a88  mtctr 7
  01f4a8c  lfs 4, 196(3)
  01f4a90  fadds 3, 3, 4
  01f4a94  addic 3, 3, 16
  01f4a98  lfs 4, 4(6)
  01f4a9c  lfs 5, 8(6)
  01f4aa0  lfs 6, 12(6)
  01f4aa4  addic 6, 6, 16
  01f4aa8  fadds 3, 3, 4
  01f4aac  fadds 3, 3, 5
  01f4ab0  fadds 3, 3, 6
  01f4ab4  bdnz 0x1f4a8c
  01f4ab8  lis 3, 31
  01f4abc  addi 3, 3, 13820
  01f4ac0  lfs 4, 32(3)
  01f4ac4  fadds 3, 3, 4
  01f4ac8  fmadds 1, 3, 1, 2
  01f4acc  lis 3, 31
  01f4ad0  addic 5, 30, 368
  01f4ad4  addi 29, 3, 13820
  01f4ad8  ori 3, 31, 0
  01f4adc  lfs 2, 116(29)
  01f4ae0  lfs 3, 60(29)
  01f4ae4  lfs 4, 120(29)
  01f4ae8  bl 0xff2e8
  01f4aec  nop
  01f4af0  lfs 1, 320(30)
  01f4af4  lfs 2, 16(31)
  01f4af8  fsubs 1, 1, 2
  01f4afc  lfs 2, 324(30)
  01f4b00  lfs 3, 328(30)
  01f4b04  lis 4, 114
  01f4b08  lfs 4, 332(30)
  01f4b0c  addic 3, 30, 64
  01f4b10  stfs 1, 64(30)
  01f4b14  lfs 1, 20(31)
  01f4b18  fsubs 1, 2, 1
  01f4b1c  stfs 1, 68(30)
  01f4b20  lfs 1, 24(31)
  01f4b24  stfs 4, 76(30)
  01f4b28  fsubs 1, 3, 1
  01f4b2c  stfs 1, 72(30)
  01f4b30  lfs 1, 124(29)
  01f4b34  lfs 2, -3052(4)
  01f4b38  fmuls 1, 2, 1
  01f4b3c  bl 0x110488
  01f4b40  nop
  01f4b44  lfs 1, 64(30)
  01f4b48  lfs 2, 16(31)
  01f4b4c  addic 3, 1, 112
  01f4b50  fadds 1, 1, 2
  01f4b54  lfs 2, 20(31)
  01f4b58  lfs 3, 24(31)
  01f4b5c  li 5, 0
  01f4b60  ori 6, 31, 0
  01f4b64  stfs 1, 112(1)
  01f4b68  lfs 1, 68(30)
  01f4b6c  fadds 1, 1, 2
  01f4b70  stfs 1, 116(1)
  01f4b74  lfs 1, 72(30)
  01f4b78  fadds 1, 1, 3
  01f4b7c  stfs 1, 120(1)
  01f4b80  lfs 1, 76(30)
  01f4b84  stfs 1, 124(1)
  01f4b88  lfs 1, 128(29)
  01f4b8c  bl 0x59e20
  01f4b90  nop
  01f4b94  cmpwi 3, 0
  01f4b98  bt 2, 0x1f4bbc
  01f4b9c  li 3, 0
  01f4ba0  li 4, 9
  01f4ba4  stw 3, 76(30)
  01f4ba8  stw 3, 72(30)
  01f4bac  stw 3, 68(30)
  01f4bb0  stw 3, 64(30)
  01f4bb4  stb 4, 32(31)
  01f4bb8  b 0x1f4bdc
  01f4bbc  lfs 1, 112(1)
  01f4bc0  lfs 2, 116(1)
  01f4bc4  stfs 1, 16(31)
  01f4bc8  lfs 1, 120(1)
  01f4bcc  stfs 2, 20(31)
  01f4bd0  lfs 2, 124(1)
  01f4bd4  stfs 1, 24(31)
  01f4bd8  stfs 2, 28(31)
  01f4bdc  lfs 1, 68(30)
  01f4be0  lfs 2, 64(30)
  01f4be4  fmuls 1, 1, 1
  01f4be8  lfs 3, 72(30)
  01f4bec  fmadds 1, 2, 2, 1
  01f4bf0  fmadds 1, 3, 3, 1
  01f4bf4  fsqrts 1, 1
  01f4bf8  fcmpu 0, 1, 31
  01f4bfc  bf 2, 0x1f4c70
  01f4c00  li 3, 9
  01f4c04  stb 3, 32(31)
  01f4c08  b 0x1f4c70
  01f4c0c  ori 3, 31, 0
  01f4c10  addic 4, 30, 96
  01f4c14  bl 0x10b030
  01f4c18  nop
  01f4c1c  clrlwi 3, 3, 31
  01f4c20  cmpwi 3, 0
  01f4c24  bt 2, 0x1f4c70
  01f4c28  ori 3, 31, 0
  01f4c2c  li 4, 512
  01f4c30  li 5, -1
  01f4c34  bl 0xfd8d0
  01f4c38  nop
  01f4c3c  lis 3, 31
  01f4c40  addic 4, 31, 16
  01f4c44  addi 5, 3, 13820
  01f4c48  ori 3, 31, 0
  01f4c4c  li 6, -1
  01f4c50  lfs 1, 48(5)
  01f4c54  lfs 2, 132(5)
  01f4c58  bl 0x110040
  01f4c5c  nop
  01f4c60  ori 3, 31, 0
  01f4c64  bl 0xefb38
  01f4c68  nop
  01f4c6c  b 0x1f4c70
  01f4c70  ld 0, 480(1)
  01f4c74  mtlr 0
  01f4c78  lfd 25, 408(1)
  01f4c7c  lfd 26, 416(1)
  01f4c80  lfd 27, 424(1)
  01f4c84  lfd 28, 432(1)
  01f4c88  lfd 29, 440(1)
  01f4c8c  lfd 30, 448(1)
  01f4c90  lfd 31, 456(1)
  01f4c94  ld 28, 376(1)
  01f4c98  ld 29, 384(1)
  01f4c9c  ld 30, 392(1)
  01f4ca0  ld 31, 400(1)
  01f4ca4  addi 1, 1, 464
  01f4ca8  blr
