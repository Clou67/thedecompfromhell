# game/update/moby622.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M622_003e2a60:   # 0x3e2a60, 0xfc bytes
  03e2a60  stdu 1, -144(1)
  03e2a64  mflr 0
  03e2a68  std 0, 160(1)
  03e2a6c  std 29, 120(1)
  03e2a70  ori 29, 3, 0
  03e2a74  std 31, 136(1)
  03e2a78  li 3, 621
  03e2a7c  std 30, 128(1)
  03e2a80  ori 31, 5, 0
  03e2a84  std 28, 112(1)
  03e2a88  ori 30, 4, 0
  03e2a8c  bl 0xefa28
  03e2a90  nop
  03e2a94  ori 28, 3, 0
  03e2a98  cmpwi 28, 0
  03e2a9c  bt 2, 0x3e2b38
  03e2aa0  li 3, 255
  03e2aa4  li 4, 126
  03e2aa8  li 5, 1
  03e2aac  li 6, 2
  03e2ab0  stb 3, 48(28)
  03e2ab4  sldi 7, 31, 2
  03e2ab8  sth 4, 50(28)
  03e2abc  stb 5, 49(28)
  03e2ac0  ld 3, 56(30)
  03e2ac4  extsw 7, 7
  03e2ac8  stb 6, 32(28)
  03e2acc  std 3, 56(28)
  03e2ad0  lfs 1, 0(29)
  03e2ad4  lis 3, 62
  03e2ad8  li 6, 0
  03e2adc  stfs 1, 16(28)
  03e2ae0  lfs 1, 4(29)
  03e2ae4  addi 3, 3, 10844
  03e2ae8  stfs 1, 20(28)
  03e2aec  lfs 1, 8(29)
  03e2af0  stfs 1, 24(28)
  03e2af4  lfs 2, 12(29)
  03e2af8  stfs 2, 28(28)
  03e2afc  lfs 2, 0(3)
  03e2b00  lwz 4, 120(28)
  03e2b04  lis 3, 165
  03e2b08  fadds 1, 1, 2
  03e2b0c  addic 8, 3, 7136
  03e2b10  ori 3, 28, 0
  03e2b14  stfs 1, 24(28)
  03e2b18  stw 30, 48(4)
  03e2b1c  stw 31, 20(4)
  03e2b20  stw 6, 0(4)
  03e2b24  lwzx 6, 8, 7
  03e2b28  stb 5, 4(4)
  03e2b2c  stw 6, 16(4)
  03e2b30  bl 0xf31a8
  03e2b34  nop
  03e2b38  ori 3, 28, 0
  03e2b3c  ld 0, 160(1)
  03e2b40  mtlr 0
  03e2b44  ld 28, 112(1)
  03e2b48  ld 29, 120(1)
  03e2b4c  ld 30, 128(1)
  03e2b50  ld 31, 136(1)
  03e2b54  addi 1, 1, 144
  03e2b58  blr

M622_003e2b5c:   # 0x3e2b5c, 0x14 bytes
  03e2b5c  lis 3, 133
  03e2b60  lis 4, 1
  03e2b64  addic 3, 3, 15672
  03e2b68  stw 4, 72(3)
  03e2b6c  blr

M622_003e2b88:   # 0x3e2b88, 0x204 bytes
  03e2b88  stdu 1, -160(1)
  03e2b8c  mflr 0
  03e2b90  std 0, 176(1)
  03e2b94  std 31, 152(1)
  03e2b98  ori 31, 3, 0
  03e2b9c  std 30, 144(1)
  03e2ba0  lwz 3, 36(31)
  03e2ba4  lwz 30, 120(31)
  03e2ba8  lwz 3, 76(3)
  03e2bac  lis 4, 62
  03e2bb0  lwz 3, 20(3)
  03e2bb4  stw 3, 128(30)
  03e2bb8  std 29, 136(1)
  03e2bbc  lwz 3, 36(31)
  03e2bc0  addi 29, 4, 11120
  03e2bc4  std 28, 128(1)
  03e2bc8  lwz 3, 76(3)
  03e2bcc  addic 28, 30, 16
  03e2bd0  lwz 3, 20(3)
  03e2bd4  stw 3, 132(30)
  03e2bd8  lwz 3, 36(31)
  03e2bdc  lwz 3, 76(3)
  03e2be0  lwz 3, 20(3)
  03e2be4  stw 3, 136(30)
  03e2be8  lwz 3, 36(31)
  03e2bec  lwz 3, 76(3)
  03e2bf0  lwz 3, 20(3)
  03e2bf4  stw 3, 140(30)
  03e2bf8  lwz 3, 36(31)
  03e2bfc  lwz 3, 76(3)
  03e2c00  lwz 3, 20(3)
  03e2c04  stw 3, 144(30)
  03e2c08  lwz 3, 36(31)
  03e2c0c  lwz 3, 76(3)
  03e2c10  lwz 3, 20(3)
  03e2c14  stw 3, 148(30)
  03e2c18  lwz 3, 36(31)
  03e2c1c  lwz 3, 76(3)
  03e2c20  lwz 3, 20(3)
  03e2c24  stw 3, 152(30)
  03e2c28  lwz 3, 36(31)
  03e2c2c  lwz 3, 80(3)
  03e2c30  lwz 3, 20(3)
  03e2c34  stw 3, 156(30)
  03e2c38  lwz 3, 36(31)
  03e2c3c  lwz 3, 76(3)
  03e2c40  lwz 3, 20(3)
  03e2c44  stw 3, 160(30)
  03e2c48  lwz 3, 36(31)
  03e2c4c  lwz 3, 76(3)
  03e2c50  lwz 3, 20(3)
  03e2c54  stw 3, 164(30)
  03e2c58  lwz 3, 36(31)
  03e2c5c  lwz 3, 76(3)
  03e2c60  lwz 3, 20(3)
  03e2c64  stw 3, 168(30)
  03e2c68  lwz 4, 36(31)
  03e2c6c  ori 3, 31, 0
  03e2c70  lwz 5, 76(4)
  03e2c74  ori 4, 28, 0
  03e2c78  lwz 5, 20(5)
  03e2c7c  stw 5, 172(30)
  03e2c80  lwz 5, 36(31)
  03e2c84  lwz 5, 76(5)
  03e2c88  lwz 5, 20(5)
  03e2c8c  std 27, 120(1)
  03e2c90  std 26, 112(1)
  03e2c94  stw 5, 176(30)
  03e2c98  bl 0x175644
  03e2c9c  nop
  03e2ca0  lis 3, 114
  03e2ca4  lfs 1, 0(29)
  03e2ca8  li 5, 0
  03e2cac  li 6, 255
  03e2cb0  lfs 2, -3048(3)
  03e2cb4  fmuls 1, 2, 1
  03e2cb8  lis 3, 114
  03e2cbc  li 7, 3
  03e2cc0  li 9, 1
  03e2cc4  li 11, 5
  03e2cc8  li 12, 7
  03e2ccc  li 8, 4
  03e2cd0  li 10, 2
  03e2cd4  li 27, 6
  03e2cd8  li 26, 8
  03e2cdc  stfs 1, 236(30)
  03e2ce0  lfs 1, 4(29)
  03e2ce4  fmuls 1, 2, 1
  03e2ce8  ori 4, 28, 0
  03e2cec  stfs 1, 220(30)
  03e2cf0  lfs 1, 8(29)
  03e2cf4  fmuls 1, 2, 1
  03e2cf8  stfs 1, 224(30)
  03e2cfc  lfs 1, 12(29)
  03e2d00  lfs 3, -3052(3)
  03e2d04  ori 3, 31, 0
  03e2d08  fmuls 1, 3, 1
  03e2d0c  lis 31, 16128
  03e2d10  stfs 1, 228(30)
  03e2d14  lfs 1, 16(29)
  03e2d18  stb 5, 192(30)
  03e2d1c  stb 5, 193(30)
  03e2d20  stb 6, 194(30)
  03e2d24  fmuls 1, 2, 1
  03e2d28  stb 6, 195(30)
  03e2d2c  stb 5, 196(30)
  03e2d30  stb 5, 197(30)
  03e2d34  stb 7, 256(30)
  03e2d38  stb 9, 257(30)
  03e2d3c  stb 11, 259(30)
  03e2d40  stb 12, 258(30)
  03e2d44  stb 8, 432(30)
  03e2d48  stb 10, 433(30)
  03e2d4c  stb 27, 435(30)
  03e2d50  stb 26, 434(30)
  03e2d54  stw 31, 240(30)
  03e2d58  stfs 1, 212(30)
  03e2d5c  bl 0x175688
  03e2d60  nop
  03e2d64  ld 0, 176(1)
  03e2d68  mtlr 0
  03e2d6c  ld 26, 112(1)
  03e2d70  ld 27, 120(1)
  03e2d74  ld 28, 128(1)
  03e2d78  ld 29, 136(1)
  03e2d7c  ld 30, 144(1)
  03e2d80  ld 31, 152(1)
  03e2d84  addi 1, 1, 160
  03e2d88  blr

UpdateMoby_622:   # 0x3e2da8, 0x2f8 bytes
  03e2da8  stdu 1, -144(1)
  03e2dac  mflr 0
  03e2db0  std 0, 160(1)
  03e2db4  std 31, 136(1)
  03e2db8  lbz 4, 32(3)
  03e2dbc  std 30, 128(1)
  03e2dc0  ori 31, 3, 0
  03e2dc4  lwz 30, 120(3)
  03e2dc8  cmpwi 4, 0
  03e2dcc  cmpwi 1, 4, 1
  03e2dd0  std 29, 120(1)
  03e2dd4  cmpwi 6, 4, -1
  03e2dd8  bt 1, 0x3e2de4
  03e2ddc  bf 25, 0x3e3084
  03e2de0  b 0x3e2dec
  03e2de4  bf 5, 0x3e2f38
  03e2de8  b 0x3e3084
  03e2dec  lwz 3, 628(30)
  03e2df0  cmpwi 3, 0
  03e2df4  bt 0, 0x3e2f04
  03e2df8  lis 5, 165
  03e2dfc  slwi 3, 3, 2
  03e2e00  li 4, 0
  03e2e04  addic 5, 5, 7136
  03e2e08  extsw 7, 3
  03e2e0c  li 6, 1
  03e2e10  stb 4, 613(30)
  03e2e14  stw 4, 616(30)
  03e2e18  ori 3, 31, 0
  03e2e1c  lwzx 4, 5, 7
  03e2e20  stw 4, 624(30)
  03e2e24  stb 6, 32(31)
  03e2e28  bl 0x3e2b88
  03e2e2c  lis 3, 62
  03e2e30  vspltisw 2, -1
  03e2e34  lis 4, 114
  03e2e38  addi 3, 3, 11660
  03e2e3c  li 5, -3056
  03e2e40  vslw 2, 2, 2
  03e2e44  lvlx 3, 0, 3
  03e2e48  lvlx 4, 5, 4
  03e2e4c  li 3, 4
  03e2e50  vspltw 3, 3, 0
  03e2e54  lwz 4, 608(30)
  03e2e58  lwz 5, 624(30)
  03e2e5c  slwi 4, 4, 4
  03e2e60  vmaddfp 2, 4, 3, 2
  03e2e64  addc 4, 5, 4
  03e2e68  clrldi 4, 4, 32
  03e2e6c  vctsxs 2, 2, 0
  03e2e70  vspltw 2, 2, 0
  03e2e74  stvewx 2, 3, 30
  03e2e78  lwz 3, 28(4)
  03e2e7c  lfs 1, 28(4)
  03e2e80  cmpwi 3, 0
  03e2e84  bt 1, 0x3e2ef0
  03e2e88  lis 3, 62
  03e2e8c  addi 31, 3, 11660
  03e2e90  lfs 1, 4(31)
  03e2e94  lfs 2, 8(31)
  03e2e98  bl 0xfcbe8
  03e2e9c  nop
  03e2ea0  lfs 2, 12(31)
  03e2ea4  lwz 3, 156(30)
  03e2ea8  lfs 3, 16(3)
  03e2eac  lfs 4, 4(3)
  03e2eb0  fmuls 2, 3, 2
  03e2eb4  lis 3, 114
  03e2eb8  lfs 3, -3064(3)
  03e2ebc  fdivs 2, 4, 2
  03e2ec0  lis 3, 101
  03e2ec4  addic 3, 3, 28132
  03e2ec8  fmuls 2, 2, 3
  03e2ecc  fmuls 1, 2, 1
  03e2ed0  stfs 1, 0(30)
  03e2ed4  lfs 2, 16(31)
  03e2ed8  fmuls 1, 1, 2
  03e2edc  stfd 1, 56(1)
  03e2ee0  ld 4, 56(1)
  03e2ee4  bl 0x5cd098
  03e2ee8  nop
  03e2eec  b 0x3e3084
  03e2ef0  lis 3, 114
  03e2ef4  lfs 2, -3052(3)
  03e2ef8  fmuls 1, 1, 2
  03e2efc  stfs 1, 0(30)
  03e2f00  b 0x3e3084
  03e2f04  lis 4, 164
  03e2f08  lis 3, 101
  03e2f0c  addic 3, 3, 28148
  03e2f10  lwz 4, -28512(4)
  03e2f14  subc 4, 31, 4
  03e2f18  srawi 4, 4, 8
  03e2f1c  addze 4, 4
  03e2f20  extsw 4, 4
  03e2f24  bl 0x5cd098
  03e2f28  nop
  03e2f2c  li 3, 2
  03e2f30  stb 3, 32(31)
  03e2f34  b 0x3e3084
  03e2f38  ori 29, 31, 0
  03e2f3c  lfs 1, 0(30)
  03e2f40  lwz 31, 608(30)
  03e2f44  addic 4, 30, 608
  03e2f48  ori 3, 29, 0
  03e2f4c  addic 5, 30, 16
  03e2f50  bl 0x136890
  03e2f54  nop
  03e2f58  lbz 3, 82(29)
  03e2f5c  cmpwi 3, 0
  03e2f60  bf 2, 0x3e2f78
  03e2f64  addic 3, 30, 4
  03e2f68  bl 0x4fff60
  03e2f6c  nop
  03e2f70  cmpwi 3, 0
  03e2f74  bf 2, 0x3e2f84
  03e2f78  lwz 3, 608(30)
  03e2f7c  cmpw 3, 31
  03e2f80  bt 2, 0x3e3084
  03e2f84  lis 3, 62
  03e2f88  vspltisw 2, -1
  03e2f8c  lis 4, 114
  03e2f90  addi 3, 3, 11660
  03e2f94  li 5, -3056
  03e2f98  vslw 2, 2, 2
  03e2f9c  lvlx 3, 0, 3
  03e2fa0  lvlx 4, 5, 4
  03e2fa4  vspltw 3, 3, 0
  03e2fa8  li 4, 4
  03e2fac  li 3, 4
  03e2fb0  vmaddfp 2, 4, 3, 2
  03e2fb4  vctsxs 2, 2, 0
  03e2fb8  vspltw 2, 2, 0
  03e2fbc  stvewx 2, 4, 30
  03e2fc0  bl 0xfc620
  03e2fc4  nop
  03e2fc8  cmpwi 3, 0
  03e2fcc  bf 2, 0x3e2fe0
  03e2fd0  lis 3, 62
  03e2fd4  addi 3, 3, 11660
  03e2fd8  lfs 2, 20(3)
  03e2fdc  b 0x3e3050
  03e2fe0  lwz 3, 608(30)
  03e2fe4  lwz 4, 624(30)
  03e2fe8  slwi 3, 3, 4
  03e2fec  addc 3, 4, 3
  03e2ff0  clrldi 3, 3, 32
  03e2ff4  lwz 4, 28(3)
  03e2ff8  lfs 2, 28(3)
  03e2ffc  cmpwi 4, 0
  03e3000  bt 1, 0x3e3044
  03e3004  lis 3, 62
  03e3008  addi 31, 3, 11660
  03e300c  lfs 1, 4(31)
  03e3010  lfs 2, 8(31)
  03e3014  bl 0xfcbe8
  03e3018  nop
  03e301c  lfs 2, 12(31)
  03e3020  lwz 3, 156(30)
  03e3024  lfs 3, 16(3)
  03e3028  lfs 4, 4(3)
  03e302c  fmuls 2, 3, 2
  03e3030  lis 3, 114
  03e3034  lfs 3, -3064(3)
  03e3038  fdivs 2, 4, 2
  03e303c  fmuls 2, 2, 3
  03e3040  b 0x3e304c
  03e3044  lis 3, 114
  03e3048  lfs 1, -3052(3)
  03e304c  fmuls 2, 2, 1
  03e3050  lis 3, 62
  03e3054  stfs 2, 0(30)
  03e3058  addi 3, 3, 11660
  03e305c  lfs 1, 16(3)
  03e3060  lwz 4, 608(30)
  03e3064  lis 3, 101
  03e3068  fmuls 1, 2, 1
  03e306c  addic 3, 3, 28188
  03e3070  extsw 4, 4
  03e3074  stfd 1, 64(1)
  03e3078  ld 5, 64(1)
  03e307c  bl 0x5cd098
  03e3080  nop
  03e3084  ld 0, 160(1)
  03e3088  mtlr 0
  03e308c  ld 29, 120(1)
  03e3090  ld 30, 128(1)
  03e3094  ld 31, 136(1)
  03e3098  addi 1, 1, 144
  03e309c  blr
