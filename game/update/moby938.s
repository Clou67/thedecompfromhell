# game/update/moby938.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M938_004c2b00:   # 0x4c2b00, 0x14 bytes
  04c2b00  lis 3, 143
  04c2b04  lis 4, 1
  04c2b08  addic 3, 3, 19444
  04c2b0c  stw 4, 72(3)
  04c2b10  blr

FUN_004c2b28:   # 0x4c2b28, 0x17c bytes
  04c2b28  stdu 1, -176(1)
  04c2b2c  mflr 0
  04c2b30  std 0, 192(1)
  04c2b34  stfd 30, 160(1)
  04c2b38  stfd 31, 168(1)
  04c2b3c  std 29, 136(1)
  04c2b40  ori 29, 3, 0
  04c2b44  std 31, 152(1)
  04c2b48  li 3, 938
  04c2b4c  std 30, 144(1)
  04c2b50  ori 31, 5, 0
  04c2b54  std 28, 128(1)
  04c2b58  std 27, 120(1)
  04c2b5c  ori 30, 4, 0
  04c2b60  bl 0xefa28
  04c2b64  nop
  04c2b68  ori 28, 3, 0
  04c2b6c  cmpwi 28, 0
  04c2b70  bt 2, 0x4c2c74
  04c2b74  li 3, 255
  04c2b78  lwz 27, 120(28)
  04c2b7c  li 4, 127
  04c2b80  li 5, 1
  04c2b84  li 6, 0
  04c2b88  stb 3, 48(28)
  04c2b8c  sth 4, 50(28)
  04c2b90  lis 3, 143
  04c2b94  stb 5, 49(28)
  04c2b98  stb 6, 32(28)
  04c2b9c  sth 6, 22(27)
  04c2ba0  stw 29, 16(27)
  04c2ba4  lfs 1, 0(30)
  04c2ba8  lis 29, 114
  04c2bac  stfs 1, 16(28)
  04c2bb0  lfs 1, 4(30)
  04c2bb4  stfs 1, 20(28)
  04c2bb8  lfs 1, 8(30)
  04c2bbc  stfs 1, 24(28)
  04c2bc0  lfs 2, 12(30)
  04c2bc4  stfs 2, 28(28)
  04c2bc8  lfs 2, 19552(3)
  04c2bcc  lis 3, 76
  04c2bd0  fadds 1, 1, 2
  04c2bd4  addi 30, 3, 11032
  04c2bd8  stfs 1, 24(28)
  04c2bdc  lfs 1, 0(31)
  04c2be0  stfs 1, 0(27)
  04c2be4  lfs 1, 4(31)
  04c2be8  stfs 1, 4(27)
  04c2bec  lfs 1, 8(31)
  04c2bf0  stfs 1, 8(27)
  04c2bf4  lfs 1, 12(31)
  04c2bf8  stfs 1, 12(27)
  04c2bfc  lfs 31, 0(30)
  04c2c00  lfs 30, 4(30)
  04c2c04  lfs 3, -3052(29)
  04c2c08  fmuls 1, 3, 31
  04c2c0c  fmuls 2, 3, 30
  04c2c10  bl 0xfcbe8
  04c2c14  nop
  04c2c18  stfs 1, 24(27)
  04c2c1c  lfs 2, -3052(29)
  04c2c20  fmuls 1, 2, 31
  04c2c24  fmuls 2, 2, 30
  04c2c28  bl 0xfcbe8
  04c2c2c  nop
  04c2c30  li 4, 8
  04c2c34  vspltisw 2, -1
  04c2c38  lis 5, 114
  04c2c3c  stfs 1, 28(27)
  04c2c40  li 6, -3056
  04c2c44  ori 3, 28, 0
  04c2c48  <unknown>
  04c2c4c  vslw 2, 2, 2
  04c2c50  li 4, 20
  04c2c54  vspltw 3, 3, 0
  04c2c58  <unknown>
  04c2c5c  vmaddfp 2, 4, 3, 2
  04c2c60  vctsxs 2, 2, 0
  04c2c64  vsplth 2, 2, 1
  04c2c68  stvehx 2, 4, 27
  04c2c6c  bl 0xf31a8
  04c2c70  nop
  04c2c74  ori 3, 28, 0
  04c2c78  ld 0, 192(1)
  04c2c7c  mtlr 0
  04c2c80  lfd 30, 160(1)
  04c2c84  lfd 31, 168(1)
  04c2c88  ld 27, 120(1)
  04c2c8c  ld 28, 128(1)
  04c2c90  ld 29, 136(1)
  04c2c94  ld 30, 144(1)
  04c2c98  ld 31, 152(1)
  04c2c9c  addi 1, 1, 176
  04c2ca0  blr

M938_004c2ce8:   # 0x4c2ce8, 0xcf8 bytes
  04c2ce8  stdu 1, -368(1)
  04c2cec  mflr 0
  04c2cf0  std 0, 384(1)
  04c2cf4  stfd 28, 336(1)
  04c2cf8  stfd 29, 344(1)
  04c2cfc  stfd 30, 352(1)
  04c2d00  stfd 31, 360(1)
  04c2d04  std 31, 328(1)
  04c2d08  lis 7, 0
  04c2d0c  std 30, 320(1)
  04c2d10  ori 31, 3, 0
  04c2d14  ori 30, 4, 0
  04c2d18  ori 3, 5, 0
  04c2d1c  lhz 4, 20(4)
  04c2d20  li 5, 368
  04c2d24  std 28, 304(1)
  04c2d28  cmpwi 4, 0
  04c2d2c  addic 28, 5, 64
  04c2d30  std 29, 312(1)
  04c2d34  std 27, 296(1)
  04c2d38  std 26, 288(1)
  04c2d3c  ori 4, 6, 0
  04c2d40  bt 2, 0x4c2d4c
  04c2d44  li 3, 0
  04c2d48  b 0x4c39a8
  04c2d4c  addc 5, 1, 5
  04c2d50  ori 6, 3, 0
  04c2d54  addc 3, 1, 28
  04c2d58  addic 28, 31, 16
  04c2d5c  clrldi 3, 3, 32
  04c2d60  std 4, 72(5)
  04c2d64  std 6, 64(5)
  04c2d68  ori 4, 28, 0
  04c2d6c  li 5, 16
  04c2d70  ori 6, 31, 0
  04c2d74  li 7, 0
  04c2d78  bl 0x57820
  04c2d7c  nop
  04c2d80  cmpwi 3, 0
  04c2d84  bt 2, 0x4c39a4
  04c2d88  lis 29, 161
  04c2d8c  addic 29, 29, 2368
  04c2d90  lwz 3, 24(29)
  04c2d94  cmpwi 3, 0
  04c2d98  bt 2, 0x4c3318
  04c2d9c  lfs 1, 16(31)
  04c2da0  ori 28, 29, 0
  04c2da4  lfs 2, 16(3)
  04c2da8  fsubs 1, 1, 2
  04c2dac  addic 5, 28, 64
  04c2db0  ori 4, 30, 0
  04c2db4  stfs 1, 64(28)
  04c2db8  lfs 2, 20(31)
  04c2dbc  lfs 3, 20(3)
  04c2dc0  fsubs 2, 2, 3
  04c2dc4  lfs 3, 32(28)
  04c2dc8  fmuls 4, 2, 2
  04c2dcc  stfs 2, 68(28)
  04c2dd0  lfs 5, 24(31)
  04c2dd4  lfs 6, 24(3)
  04c2dd8  fsubs 5, 5, 6
  04c2ddc  lis 3, 76
  04c2de0  fmadds 4, 1, 1, 4
  04c2de4  addi 29, 3, 11428
  04c2de8  lis 3, 114
  04c2dec  stfs 5, 72(28)
  04c2df0  fmadds 4, 5, 5, 4
  04c2df4  lfs 6, 28(31)
  04c2df8  stfs 6, 76(28)
  04c2dfc  stfs 3, 16(31)
  04c2e00  lfs 6, 36(28)
  04c2e04  stfs 6, 20(31)
  04c2e08  lfs 7, 40(28)
  04c2e0c  fsqrts 4, 4
  04c2e10  stfs 7, 24(31)
  04c2e14  lfs 8, 44(28)
  04c2e18  stfs 8, 28(31)
  04c2e1c  lfs 8, 0(29)
  04c2e20  lfs 9, -3048(3)
  04c2e24  lfs 30, 4(29)
  04c2e28  ori 3, 30, 0
  04c2e2c  fmuls 8, 9, 8
  04c2e30  fdivs 8, 8, 4
  04c2e34  fsub 9, 30, 4
  04c2e38  fsub 10, 30, 4
  04c2e3c  fsub 11, 30, 4
  04c2e40  fsub 12, 4, 30
  04c2e44  fsub 13, 4, 30
  04c2e48  fsub 4, 4, 30
  04c2e4c  fmuls 5, 5, 8
  04c2e50  fmuls 2, 2, 8
  04c2e54  fmuls 1, 1, 8
  04c2e58  fsel 8, 9, 30, 5
  04c2e5c  fsel 9, 10, 30, 2
  04c2e60  fsel 10, 11, 30, 1
  04c2e64  fsel 5, 12, 8, 5
  04c2e68  fsel 2, 13, 9, 2
  04c2e6c  fsel 1, 4, 10, 1
  04c2e70  fadds 4, 7, 5
  04c2e74  fadds 2, 6, 2
  04c2e78  fadds 1, 3, 1
  04c2e7c  stfs 4, 24(31)
  04c2e80  stfs 2, 20(31)
  04c2e84  stfs 1, 16(31)
  04c2e88  bl 0x500608
  04c2e8c  nop
  04c2e90  lfs 1, 8(29)
  04c2e94  lfs 2, 0(30)
  04c2e98  lfs 3, 4(30)
  04c2e9c  lfs 4, 8(30)
  04c2ea0  fmuls 2, 2, 1
  04c2ea4  fmuls 3, 3, 1
  04c2ea8  fmuls 1, 4, 1
  04c2eac  stfs 2, 0(30)
  04c2eb0  stfs 3, 4(30)
  04c2eb4  stfs 1, 8(30)
  04c2eb8  lfs 1, 12(29)
  04c2ebc  lfs 2, 16(29)
  04c2ec0  lfs 3, 72(31)
  04c2ec4  lfs 4, 20(29)
  04c2ec8  fadds 1, 3, 1
  04c2ecc  fsubs 5, 2, 3
  04c2ed0  fsubs 6, 4, 3
  04c2ed4  fsubs 2, 2, 1
  04c2ed8  fsub 7, 3, 5
  04c2edc  fsubs 4, 4, 1
  04c2ee0  fsub 9, 1, 2
  04c2ee4  fsel 3, 7, 5, 3
  04c2ee8  lfs 5, 24(29)
  04c2eec  lfs 7, 28(29)
  04c2ef0  fsel 1, 9, 2, 1
  04c2ef4  fsub 2, 6, 3
  04c2ef8  lis 30, 115
  04c2efc  fsub 9, 4, 1
  04c2f00  fsel 2, 2, 6, 3
  04c2f04  lfs 3, 32(29)
  04c2f08  lfs 6, 68(28)
  04c2f0c  lfs 8, 36(29)
  04c2f10  fsel 1, 9, 4, 1
  04c2f14  fmuls 4, 2, 2
  04c2f18  lfs 9, 64(28)
  04c2f1c  lwz 29, 72(28)
  04c2f20  lfs 29, 72(28)
  04c2f24  fmuls 10, 1, 1
  04c2f28  fmuls 11, 4, 2
  04c2f2c  addic 30, 30, 22784
  04c2f30  fmuls 12, 10, 1
  04c2f34  fmuls 13, 4, 11
  04c2f38  fmadds 2, 11, 5, 2
  04c2f3c  fmadds 1, 12, 5, 1
  04c2f40  fmuls 11, 10, 12
  04c2f44  fmuls 5, 4, 13
  04c2f48  fmadds 2, 13, 7, 2
  04c2f4c  fmuls 12, 10, 11
  04c2f50  fmadds 1, 11, 7, 1
  04c2f54  fmuls 4, 4, 5
  04c2f58  fmadds 2, 5, 3, 2
  04c2f5c  fmuls 5, 10, 12
  04c2f60  fmadds 1, 12, 3, 1
  04c2f64  fmuls 3, 29, 29
  04c2f68  fmadds 2, 4, 8, 2
  04c2f6c  fmadds 1, 5, 8, 1
  04c2f70  fmuls 31, 6, 2
  04c2f74  fmuls 2, 9, 2
  04c2f78  fmadds 31, 9, 1, 31
  04c2f7c  fmsubs 1, 6, 1, 2
  04c2f80  lfs 2, 64(31)
  04c2f84  fmadds 3, 31, 31, 3
  04c2f88  fabs 5, 1
  04c2f8c  stfs 1, 148(1)
  04c2f90  fsqrts 3, 3
  04c2f94  lwz 3, 148(1)
  04c2f98  lfs 1, 148(1)
  04c2f9c  fabs 4, 1
  04c2fa0  rlwinm 3, 3, 3, 29, 29
  04c2fa4  fabs 6, 3
  04c2fa8  stfs 3, 144(1)
  04c2fac  fsubs 1, 6, 5
  04c2fb0  stfs 1, 152(1)
  04c2fb4  lwz 4, 144(1)
  04c2fb8  lfs 1, 144(1)
  04c2fbc  lwz 5, 152(1)
  04c2fc0  lfs 3, 152(1)
  04c2fc4  fabs 1, 1
  04c2fc8  rlwimi 3, 5, 2, 30, 30
  04c2fcc  fsub 7, 3, 30
  04c2fd0  fsub 8, 3, 30
  04c2fd4  rlwimi 3, 4, 4, 28, 28
  04c2fd8  ori 4, 30, 0
  04c2fdc  rlwimi 4, 3, 2, 26, 28
  04c2fe0  slwi 3, 3, 2
  04c2fe4  clrldi 4, 4, 32
  04c2fe8  fsel 5, 7, 1, 5
  04c2fec  lfsx 1, 30, 3
  04c2ff0  fsel 4, 8, 4, 6
  04c2ff4  lfs 3, 4(4)
  04c2ff8  fcmpu 0, 5, 30
  04c2ffc  bt 1, 0x4c3008
  04c3000  fmr 1, 30
  04c3004  b 0x4c312c
  04c3008  fsubs 6, 4, 5
  04c300c  fadds 4, 4, 5
  04c3010  addic 3, 1, 16
  04c3014  li 7, 2
  04c3018  addic 5, 3, 252
  04c301c  addic 4, 3, 236
  04c3020  mtctr 7
  04c3024  fdivs 4, 6, 4
  04c3028  fmuls 5, 4, 4
  04c302c  stfs 4, 264(1)
  04c3030  stfs 4, 256(1)
  04c3034  stfs 4, 260(1)
  04c3038  stfs 4, 252(1)
  04c303c  lfs 7, 264(1)
  04c3040  lfs 8, 256(1)
  04c3044  lfs 9, 260(1)
  04c3048  fmuls 6, 5, 5
  04c304c  fmuls 8, 8, 5
  04c3050  fmuls 7, 7, 6
  04c3054  fmuls 4, 6, 6
  04c3058  fmuls 6, 9, 6
  04c305c  stfs 8, 256(1)
  04c3060  fmuls 5, 7, 5
  04c3064  stfs 6, 260(1)
  04c3068  stfs 5, 264(1)
  04c306c  lfs 5, 236(3)
  04c3070  fmuls 5, 5, 4
  04c3074  stfs 5, 252(3)
  04c3078  lfs 5, 4(4)
  04c307c  addic 4, 4, 8
  04c3080  fmuls 5, 5, 4
  04c3084  addic 3, 3, 8
  04c3088  stfs 5, 4(5)
  04c308c  addic 5, 5, 8
  04c3090  bdnz 0x4c306c
  04c3094  li 5, 4
  04c3098  ori 3, 1, 0
  04c309c  mtctr 5
  04c30a0  lis 4, 115
  04c30a4  addic 5, 3, 252
  04c30a8  addic 4, 4, 22752
  04c30ac  ori 6, 5, 0
  04c30b0  lfs 4, 252(3)
  04c30b4  lfs 5, 0(4)
  04c30b8  fmuls 4, 4, 5
  04c30bc  lfs 5, 4(4)
  04c30c0  addic 4, 4, 8
  04c30c4  stfs 4, 252(3)
  04c30c8  lfs 4, 4(5)
  04c30cc  addic 3, 3, 8
  04c30d0  fmuls 4, 4, 5
  04c30d4  stfs 4, 4(5)
  04c30d8  addic 5, 5, 8
  04c30dc  bdnz 0x4c30b0
  04c30e0  ori 3, 1, 0
  04c30e4  fmr 4, 30
  04c30e8  mtctr 7
  04c30ec  lfs 5, 252(3)
  04c30f0  fadds 4, 4, 5
  04c30f4  lfs 5, 4(6)
  04c30f8  addic 3, 3, 16
  04c30fc  lfs 6, 8(6)
  04c3100  lfs 7, 12(6)
  04c3104  addic 6, 6, 16
  04c3108  fadds 4, 4, 5
  04c310c  fadds 4, 4, 6
  04c3110  fadds 4, 4, 7
  04c3114  bdnz 0x4c30ec
  04c3118  lis 3, 76
  04c311c  addi 3, 3, 11428
  04c3120  lfs 5, 40(3)
  04c3124  fadds 4, 4, 5
  04c3128  fmadds 1, 4, 1, 3
  04c312c  fneg 3, 1
  04c3130  lis 3, 76
  04c3134  fmr 28, 31
  04c3138  addi 3, 3, 11428
  04c313c  fmr 1, 2
  04c3140  lfs 31, 44(3)
  04c3144  fmr 2, 3
  04c3148  fmr 3, 31
  04c314c  bl 0x4d04e0
  04c3150  nop
  04c3154  fabs 4, 29
  04c3158  stfs 28, 136(1)
  04c315c  fabs 5, 28
  04c3160  stfs 1, 64(31)
  04c3164  lfs 3, 68(31)
  04c3168  fsubs 2, 4, 5
  04c316c  stfs 2, 140(1)
  04c3170  lwz 3, 136(1)
  04c3174  lfs 1, 136(1)
  04c3178  lwz 4, 140(1)
  04c317c  fabs 2, 1
  04c3180  rlwinm 3, 3, 3, 29, 29
  04c3184  lfs 1, 140(1)
  04c3188  rlwimi 3, 4, 2, 30, 30
  04c318c  fsub 6, 1, 30
  04c3190  ori 4, 30, 0
  04c3194  fsub 7, 1, 30
  04c3198  rlwimi 3, 29, 4, 28, 28
  04c319c  rlwimi 4, 3, 2, 26, 28
  04c31a0  slwi 3, 3, 2
  04c31a4  clrldi 4, 4, 32
  04c31a8  lfsx 1, 30, 3
  04c31ac  fsel 5, 6, 4, 5
  04c31b0  fsel 4, 7, 2, 4
  04c31b4  lfs 2, 4(4)
  04c31b8  fcmpu 0, 5, 30
  04c31bc  bt 1, 0x4c31c4
  04c31c0  b 0x4c32e4
  04c31c4  fsubs 6, 4, 5
  04c31c8  fadds 4, 4, 5
  04c31cc  addic 3, 1, 16
  04c31d0  li 6, 2
  04c31d4  addic 4, 3, 204
  04c31d8  addic 5, 3, 220
  04c31dc  mtctr 6
  04c31e0  fdivs 4, 6, 4
  04c31e4  fmuls 5, 4, 4
  04c31e8  stfs 4, 232(1)
  04c31ec  stfs 4, 224(1)
  04c31f0  stfs 4, 228(1)
  04c31f4  stfs 4, 220(1)
  04c31f8  lfs 7, 232(1)
  04c31fc  lfs 8, 224(1)
  04c3200  lfs 9, 228(1)
  04c3204  fmuls 6, 5, 5
  04c3208  fmuls 8, 8, 5
  04c320c  fmuls 7, 7, 6
  04c3210  fmuls 4, 6, 6
  04c3214  fmuls 6, 9, 6
  04c3218  stfs 8, 224(1)
  04c321c  fmuls 5, 7, 5
  04c3220  stfs 6, 228(1)
  04c3224  stfs 5, 232(1)
  04c3228  lfs 5, 204(3)
  04c322c  fmuls 5, 5, 4
  04c3230  stfs 5, 220(3)
  04c3234  lfs 5, 4(4)
  04c3238  addic 3, 3, 8
  04c323c  addic 4, 4, 8
  04c3240  fmuls 5, 5, 4
  04c3244  stfs 5, 4(5)
  04c3248  addic 5, 5, 8
  04c324c  bdnz 0x4c3228
  04c3250  li 5, 4
  04c3254  ori 3, 1, 0
  04c3258  mtctr 5
  04c325c  lis 4, 115
  04c3260  addic 5, 3, 220
  04c3264  addic 4, 4, 22752
  04c3268  ori 7, 5, 0
  04c326c  lfs 4, 220(3)
  04c3270  lfs 5, 0(4)
  04c3274  fmuls 4, 4, 5
  04c3278  lfs 5, 4(4)
  04c327c  addic 4, 4, 8
  04c3280  stfs 4, 220(3)
  04c3284  lfs 4, 4(5)
  04c3288  addic 3, 3, 8
  04c328c  fmuls 4, 4, 5
  04c3290  stfs 4, 4(5)
  04c3294  addic 5, 5, 8
  04c3298  bdnz 0x4c326c
  04c329c  ori 3, 1, 0
  04c32a0  mtctr 6
  04c32a4  lfs 4, 220(3)
  04c32a8  lfs 5, 4(7)
  04c32ac  fadds 4, 30, 4
  04c32b0  lfs 6, 8(7)
  04c32b4  lfs 30, 12(7)
  04c32b8  addic 3, 3, 16
  04c32bc  addic 7, 7, 16
  04c32c0  fadds 4, 4, 5
  04c32c4  fadds 4, 4, 6
  04c32c8  fadds 30, 4, 30
  04c32cc  bdnz 0x4c32a4
  04c32d0  lis 3, 76
  04c32d4  addi 3, 3, 11428
  04c32d8  lfs 4, 40(3)
  04c32dc  fadds 30, 30, 4
  04c32e0  fmadds 30, 30, 1, 2
  04c32e4  fmr 1, 3
  04c32e8  fmr 2, 30
  04c32ec  fmr 3, 31
  04c32f0  bl 0x4d04e0
  04c32f4  nop
  04c32f8  li 3, 1
  04c32fc  stfs 1, 68(31)
  04c3300  li 4, 0
  04c3304  ori 5, 31, 0
  04c3308  bl 0x15d12c
  04c330c  nop
  04c3310  li 3, 1
  04c3314  b 0x4c39a8
  04c3318  lwz 3, 28(29)
  04c331c  cmpwi 3, 0
  04c3320  bf 1, 0x4c39a4
  04c3324  lfs 1, 32(29)
  04c3328  stfs 1, 16(31)
  04c332c  lfs 2, 36(29)
  04c3330  stfs 2, 20(31)
  04c3334  lfs 3, 40(29)
  04c3338  stfs 3, 24(31)
  04c333c  lfs 4, 44(29)
  04c3340  stfs 4, 28(31)
  04c3344  lfs 4, 68(29)
  04c3348  lfs 5, 64(29)
  04c334c  fmuls 6, 4, 4
  04c3350  lfs 7, 72(29)
  04c3354  lis 3, 76
  04c3358  addi 26, 3, 11428
  04c335c  lis 3, 114
  04c3360  fmadds 6, 5, 5, 6
  04c3364  lfs 8, 0(26)
  04c3368  lfs 9, -3048(3)
  04c336c  fmuls 8, 9, 8
  04c3370  lfs 30, 4(26)
  04c3374  fmadds 6, 7, 7, 6
  04c3378  li 27, 0
  04c337c  addic 5, 29, 64
  04c3380  ori 3, 30, 0
  04c3384  fsqrts 6, 6
  04c3388  ori 4, 30, 0
  04c338c  fdivs 8, 8, 6
  04c3390  fsub 9, 30, 6
  04c3394  fsub 10, 30, 6
  04c3398  fsub 11, 30, 6
  04c339c  fsub 12, 6, 30
  04c33a0  fsub 13, 6, 30
  04c33a4  fsub 6, 6, 30
  04c33a8  fmuls 7, 7, 8
  04c33ac  fmuls 4, 4, 8
  04c33b0  fmuls 5, 5, 8
  04c33b4  fsel 8, 9, 30, 7
  04c33b8  fsel 9, 10, 30, 4
  04c33bc  fsel 10, 11, 30, 5
  04c33c0  fsel 7, 12, 8, 7
  04c33c4  fsel 4, 13, 9, 4
  04c33c8  fsel 5, 6, 10, 5
  04c33cc  fadds 3, 3, 7
  04c33d0  fadds 2, 2, 4
  04c33d4  fadds 1, 1, 5
  04c33d8  stfs 3, 24(31)
  04c33dc  stfs 2, 20(31)
  04c33e0  stfs 1, 16(31)
  04c33e4  bl 0x500608
  04c33e8  nop
  04c33ec  lfs 3, 48(26)
  04c33f0  lfs 1, 0(30)
  04c33f4  lfs 2, 4(30)
  04c33f8  lfs 4, 8(30)
  04c33fc  fmuls 1, 1, 3
  04c3400  fmuls 2, 2, 3
  04c3404  fmuls 4, 4, 3
  04c3408  stfs 1, 0(30)
  04c340c  stfs 2, 4(30)
  04c3410  stfs 4, 8(30)
  04c3414  lfs 4, 68(29)
  04c3418  lfs 2, 64(29)
  04c341c  fmuls 1, 4, 4
  04c3420  lfs 29, 72(29)
  04c3424  fmadds 5, 2, 2, 1
  04c3428  fmr 1, 30
  04c342c  fmadds 5, 29, 29, 5
  04c3430  fsqrts 6, 5
  04c3434  fcmpu 0, 6, 1
  04c3438  bt 2, 0x4c3480
  04c343c  frsqrte 1, 5
  04c3440  lis 3, 76
  04c3444  addi 3, 3, 11428
  04c3448  lfs 6, 52(3)
  04c344c  fmuls 7, 5, 1
  04c3450  fmuls 8, 3, 1
  04c3454  fnmsubs 7, 7, 1, 6
  04c3458  fmadds 1, 7, 8, 1
  04c345c  fmuls 7, 5, 1
  04c3460  fmuls 8, 3, 1
  04c3464  fnmsubs 7, 7, 1, 6
  04c3468  fmadds 1, 7, 8, 1
  04c346c  fmuls 5, 5, 1
  04c3470  fmuls 7, 3, 1
  04c3474  fnmsubs 5, 5, 1, 6
  04c3478  fmadds 1, 5, 7, 1
  04c347c  fmuls 1, 29, 1
  04c3480  fmr 5, 1
  04c3484  lis 3, 76
  04c3488  fmr 1, 2
  04c348c  addi 3, 3, 11428
  04c3490  fmr 2, 4
  04c3494  lfs 4, 56(3)
  04c3498  fcmpu 0, 5, 4
  04c349c  cror 6, 0, 2
  04c34a0  bt 6, 0x4c3548
  04c34a4  fmr 1, 3
  04c34a8  ori 3, 28, 0
  04c34ac  li 4, 0
  04c34b0  bl 0xffb70
  04c34b4  nop
  04c34b8  fmr 3, 1
  04c34bc  lfs 7, 24(31)
  04c34c0  lwz 28, 8(30)
  04c34c4  lfs 4, 8(30)
  04c34c8  lfs 1, 64(29)
  04c34cc  lfs 2, 68(29)
  04c34d0  lfs 29, 72(29)
  04c34d4  lfs 5, 0(30)
  04c34d8  lfs 6, 4(30)
  04c34dc  fcmpu 0, 7, 3
  04c34e0  cror 6, 1, 2
  04c34e4  bt 6, 0x4c34ec
  04c34e8  stfs 3, 24(31)
  04c34ec  cmpwi 28, 0
  04c34f0  fmr 3, 4
  04c34f4  bf 0, 0x4c350c
  04c34f8  lis 3, 76
  04c34fc  addi 3, 3, 11428
  04c3500  lfs 3, 60(3)
  04c3504  fmuls 3, 4, 3
  04c3508  stfs 3, 8(30)
  04c350c  fmuls 4, 6, 6
  04c3510  lis 3, 114
  04c3514  fmadds 4, 5, 5, 4
  04c3518  fmadds 3, 3, 3, 4
  04c351c  lfs 4, -3052(3)
  04c3520  fsqrts 3, 3
  04c3524  fcmpu 0, 3, 4
  04c3528  cror 6, 1, 2
  04c352c  bt 6, 0x4c3548
  04c3530  stw 27, 12(30)
  04c3534  li 3, 3
  04c3538  stw 27, 8(30)
  04c353c  stw 27, 4(30)
  04c3540  stw 27, 0(30)
  04c3544  b 0x4c39a8
  04c3548  lis 3, 76
  04c354c  lfs 3, 72(31)
  04c3550  addi 3, 3, 11428
  04c3554  lfs 4, 12(3)
  04c3558  lfs 5, 16(3)
  04c355c  fadds 4, 3, 4
  04c3560  lfs 6, 20(3)
  04c3564  fsubs 7, 5, 3
  04c3568  fsubs 8, 6, 3
  04c356c  fsubs 5, 5, 4
  04c3570  fsub 9, 3, 7
  04c3574  fsubs 6, 6, 4
  04c3578  fsub 11, 4, 5
  04c357c  fsel 3, 9, 7, 3
  04c3580  lfs 7, 24(3)
  04c3584  lfs 9, 28(3)
  04c3588  fsel 4, 11, 5, 4
  04c358c  fsub 5, 8, 3
  04c3590  lis 30, 115
  04c3594  fsub 10, 6, 4
  04c3598  fsel 3, 5, 8, 3
  04c359c  lfs 5, 32(3)
  04c35a0  lfs 8, 36(3)
  04c35a4  fsel 4, 10, 6, 4
  04c35a8  fmuls 6, 3, 3
  04c35ac  addic 30, 30, 22784
  04c35b0  fmuls 10, 4, 4
  04c35b4  fmuls 11, 6, 3
  04c35b8  fmuls 12, 10, 4
  04c35bc  fmuls 13, 6, 11
  04c35c0  fmadds 3, 11, 7, 3
  04c35c4  fmadds 4, 12, 7, 4
  04c35c8  fmuls 11, 10, 12
  04c35cc  fmuls 7, 6, 13
  04c35d0  fmadds 3, 13, 9, 3
  04c35d4  fmuls 12, 10, 11
  04c35d8  fmadds 4, 11, 9, 4
  04c35dc  fmuls 6, 6, 7
  04c35e0  fmadds 3, 7, 5, 3
  04c35e4  fmuls 7, 10, 12
  04c35e8  fmadds 4, 12, 5, 4
  04c35ec  fmuls 5, 29, 29
  04c35f0  fmadds 3, 6, 8, 3
  04c35f4  fmadds 4, 7, 8, 4
  04c35f8  fmuls 31, 2, 3
  04c35fc  fmadds 31, 1, 4, 31
  04c3600  fmuls 1, 1, 3
  04c3604  fmadds 3, 31, 31, 5
  04c3608  fmsubs 2, 2, 4, 1
  04c360c  fsqrts 3, 3
  04c3610  stfs 2, 128(1)
  04c3614  lfs 1, 64(31)
  04c3618  fabs 5, 2
  04c361c  lwz 3, 128(1)
  04c3620  lfs 2, 128(1)
  04c3624  fabs 4, 2
  04c3628  rlwinm 3, 3, 3, 29, 29
  04c362c  fabs 6, 3
  04c3630  stfs 3, 124(1)
  04c3634  fsubs 2, 6, 5
  04c3638  stfs 2, 132(1)
  04c363c  lwz 4, 124(1)
  04c3640  lfs 2, 124(1)
  04c3644  lwz 5, 132(1)
  04c3648  lfs 3, 132(1)
  04c364c  fabs 2, 2
  04c3650  rlwimi 3, 5, 2, 30, 30
  04c3654  fsub 7, 3, 30
  04c3658  fsub 3, 3, 30
  04c365c  rlwimi 3, 4, 4, 28, 28
  04c3660  ori 4, 30, 0
  04c3664  rlwimi 4, 3, 2, 26, 28
  04c3668  slwi 3, 3, 2
  04c366c  clrldi 4, 4, 32
  04c3670  fsel 5, 7, 2, 5
  04c3674  lfsx 2, 30, 3
  04c3678  fsel 4, 3, 4, 6
  04c367c  lfs 3, 4(4)
  04c3680  fcmpu 0, 5, 30
  04c3684  bt 1, 0x4c3690
  04c3688  fmr 2, 30
  04c368c  b 0x4c37b4
  04c3690  fsubs 6, 4, 5
  04c3694  fadds 4, 4, 5
  04c3698  addic 3, 1, 16
  04c369c  li 6, 2
  04c36a0  addic 5, 3, 188
  04c36a4  addic 4, 3, 172
  04c36a8  mtctr 6
  04c36ac  fdivs 4, 6, 4
  04c36b0  fmuls 5, 4, 4
  04c36b4  stfs 4, 200(1)
  04c36b8  stfs 4, 192(1)
  04c36bc  stfs 4, 196(1)
  04c36c0  stfs 4, 188(1)
  04c36c4  lfs 7, 200(1)
  04c36c8  lfs 8, 192(1)
  04c36cc  lfs 9, 196(1)
  04c36d0  fmuls 6, 5, 5
  04c36d4  fmuls 8, 8, 5
  04c36d8  fmuls 7, 7, 6
  04c36dc  fmuls 4, 6, 6
  04c36e0  fmuls 6, 9, 6
  04c36e4  stfs 8, 192(1)
  04c36e8  fmuls 5, 7, 5
  04c36ec  stfs 6, 196(1)
  04c36f0  stfs 5, 200(1)
  04c36f4  lfs 5, 172(3)
  04c36f8  fmuls 5, 5, 4
  04c36fc  stfs 5, 188(3)
  04c3700  lfs 5, 4(4)
  04c3704  addic 4, 4, 8
  04c3708  fmuls 5, 5, 4
  04c370c  addic 3, 3, 8
  04c3710  stfs 5, 4(5)
  04c3714  addic 5, 5, 8
  04c3718  bdnz 0x4c36f4
  04c371c  li 5, 4
  04c3720  ori 3, 1, 0
  04c3724  mtctr 5
  04c3728  lis 4, 115
  04c372c  addic 5, 3, 188
  04c3730  addic 4, 4, 22752
  04c3734  ori 7, 5, 0
  04c3738  lfs 4, 188(3)
  04c373c  lfs 5, 0(4)
  04c3740  fmuls 4, 4, 5
  04c3744  lfs 5, 4(4)
  04c3748  addic 4, 4, 8
  04c374c  stfs 4, 188(3)
  04c3750  lfs 4, 4(5)
  04c3754  addic 3, 3, 8
  04c3758  fmuls 4, 4, 5
  04c375c  stfs 4, 4(5)
  04c3760  addic 5, 5, 8
  04c3764  bdnz 0x4c3738
  04c3768  ori 3, 1, 0
  04c376c  fmr 4, 30
  04c3770  mtctr 6
  04c3774  lfs 5, 188(3)
  04c3778  fadds 4, 4, 5
  04c377c  lfs 5, 4(7)
  04c3780  addic 3, 3, 16
  04c3784  lfs 6, 8(7)
  04c3788  lfs 7, 12(7)
  04c378c  addic 7, 7, 16
  04c3790  fadds 4, 4, 5
  04c3794  fadds 4, 4, 6
  04c3798  fadds 4, 4, 7
  04c379c  bdnz 0x4c3774
  04c37a0  lis 3, 76
  04c37a4  addi 3, 3, 11428
  04c37a8  lfs 5, 40(3)
  04c37ac  fadds 4, 4, 5
  04c37b0  fmadds 2, 4, 2, 3
  04c37b4  fmr 28, 31
  04c37b8  lis 3, 76
  04c37bc  fneg 2, 2
  04c37c0  addi 3, 3, 11428
  04c37c4  lfs 31, 44(3)
  04c37c8  fmr 3, 31
  04c37cc  bl 0x4d04e0
  04c37d0  nop
  04c37d4  fabs 4, 29
  04c37d8  stfs 29, 112(1)
  04c37dc  fabs 5, 28
  04c37e0  stfs 28, 116(1)
  04c37e4  stfs 1, 64(31)
  04c37e8  lfs 1, 68(31)
  04c37ec  fsubs 2, 4, 5
  04c37f0  stfs 2, 120(1)
  04c37f4  lwz 3, 112(1)
  04c37f8  lfs 2, 112(1)
  04c37fc  lwz 4, 116(1)
  04c3800  lfs 3, 116(1)
  04c3804  lwz 5, 120(1)
  04c3808  rlwinm 4, 4, 3, 29, 29
  04c380c  fabs 6, 3
  04c3810  lfs 3, 120(1)
  04c3814  fabs 2, 2
  04c3818  rlwimi 4, 5, 2, 30, 30
  04c381c  fsub 7, 3, 30
  04c3820  fsub 8, 3, 30
  04c3824  rlwimi 4, 3, 4, 28, 28
  04c3828  ori 3, 30, 0
  04c382c  rlwimi 3, 4, 2, 26, 28
  04c3830  slwi 4, 4, 2
  04c3834  clrldi 3, 3, 32
  04c3838  fsel 5, 7, 2, 5
  04c383c  lfsx 2, 30, 4
  04c3840  fsel 4, 8, 6, 4
  04c3844  lfs 3, 4(3)
  04c3848  fcmpu 0, 5, 30
  04c384c  bt 1, 0x4c3854
  04c3850  b 0x4c3974
  04c3854  fsubs 6, 4, 5
  04c3858  fadds 4, 4, 5
  04c385c  addic 3, 1, 16
  04c3860  li 6, 2
  04c3864  addic 4, 3, 140
  04c3868  addic 5, 3, 156
  04c386c  mtctr 6
  04c3870  fdivs 4, 6, 4
  04c3874  fmuls 5, 4, 4
  04c3878  stfs 4, 168(1)
  04c387c  stfs 4, 160(1)
  04c3880  stfs 4, 164(1)
  04c3884  stfs 4, 156(1)
  04c3888  lfs 7, 168(1)
  04c388c  lfs 8, 160(1)
  04c3890  lfs 9, 164(1)
  04c3894  fmuls 6, 5, 5
  04c3898  fmuls 8, 8, 5
  04c389c  fmuls 7, 7, 6
  04c38a0  fmuls 4, 6, 6
  04c38a4  fmuls 6, 9, 6
  04c38a8  stfs 8, 160(1)
  04c38ac  fmuls 5, 7, 5
  04c38b0  stfs 6, 164(1)
  04c38b4  stfs 5, 168(1)
  04c38b8  lfs 5, 140(3)
  04c38bc  fmuls 5, 5, 4
  04c38c0  stfs 5, 156(3)
  04c38c4  lfs 5, 4(4)
  04c38c8  addic 3, 3, 8
  04c38cc  addic 4, 4, 8
  04c38d0  fmuls 5, 5, 4
  04c38d4  stfs 5, 4(5)
  04c38d8  addic 5, 5, 8
  04c38dc  bdnz 0x4c38b8
  04c38e0  li 5, 4
  04c38e4  ori 3, 1, 0
  04c38e8  mtctr 5
  04c38ec  lis 4, 115
  04c38f0  addic 5, 3, 156
  04c38f4  addic 4, 4, 22752
  04c38f8  ori 7, 5, 0
  04c38fc  lfs 4, 156(3)
  04c3900  lfs 5, 0(4)
  04c3904  fmuls 4, 4, 5
  04c3908  lfs 5, 4(4)
  04c390c  addic 4, 4, 8
  04c3910  stfs 4, 156(3)
  04c3914  lfs 4, 4(5)
  04c3918  addic 3, 3, 8
  04c391c  fmuls 4, 4, 5
  04c3920  stfs 4, 4(5)
  04c3924  addic 5, 5, 8
  04c3928  bdnz 0x4c38fc
  04c392c  ori 3, 1, 0
  04c3930  mtctr 6
  04c3934  lfs 4, 156(3)
  04c3938  lfs 5, 4(7)
  04c393c  fadds 4, 30, 4
  04c3940  lfs 6, 8(7)
  04c3944  lfs 30, 12(7)
  04c3948  addic 3, 3, 16
  04c394c  addic 7, 7, 16
  04c3950  fadds 4, 4, 5
  04c3954  fadds 4, 4, 6
  04c3958  fadds 30, 4, 30
  04c395c  bdnz 0x4c3934
  04c3960  lis 3, 76
  04c3964  addi 3, 3, 11428
  04c3968  lfs 4, 40(3)
  04c396c  fadds 30, 30, 4
  04c3970  fmadds 30, 30, 2, 3
  04c3974  fmr 2, 30
  04c3978  fmr 3, 31
  04c397c  bl 0x4d04e0
  04c3980  nop
  04c3984  li 3, 1
  04c3988  stfs 1, 68(31)
  04c398c  li 4, 0
  04c3990  ori 5, 31, 0
  04c3994  bl 0x15d12c
  04c3998  nop
  04c399c  li 3, 2
  04c39a0  b 0x4c39a8
  04c39a4  li 3, 0
  04c39a8  ld 0, 384(1)
  04c39ac  mtlr 0
  04c39b0  lfd 28, 336(1)
  04c39b4  lfd 29, 344(1)
  04c39b8  lfd 30, 352(1)
  04c39bc  lfd 31, 360(1)
  04c39c0  ld 26, 288(1)
  04c39c4  ld 27, 296(1)
  04c39c8  ld 28, 304(1)
  04c39cc  ld 29, 312(1)
  04c39d0  ld 30, 320(1)
  04c39d4  ld 31, 328(1)
  04c39d8  addi 1, 1, 368
  04c39dc  blr

UpdateMoby_938:   # 0x4c3a28, 0xc54 bytes
  04c3a28  stdu 1, -384(1)
  04c3a2c  mflr 0
  04c3a30  std 0, 400(1)
  04c3a34  stfd 26, 336(1)
  04c3a38  stfd 27, 344(1)
  04c3a3c  stfd 28, 352(1)
  04c3a40  stfd 29, 360(1)
  04c3a44  stfd 30, 368(1)
  04c3a48  stfd 31, 376(1)
  04c3a4c  std 31, 328(1)
  04c3a50  ori 31, 3, 0
  04c3a54  lis 3, 76
  04c3a58  lis 5, 16256
  04c3a5c  addi 3, 3, 14816
  04c3a60  std 30, 320(1)
  04c3a64  lwz 4, 16(31)
  04c3a68  lwz 30, 120(31)
  04c3a6c  srawi 6, 4, 31
  04c3a70  lfs 28, 0(3)
  04c3a74  srwi 3, 6, 1
  04c3a78  lfs 29, 16(31)
  04c3a7c  xor 3, 3, 4
  04c3a80  subc 3, 3, 6
  04c3a84  std 29, 312(1)
  04c3a88  cmpw 3, 5
  04c3a8c  bt 0, 0x4c3b14
  04c3a90  lis 4, 76
  04c3a94  lis 5, 17407
  04c3a98  addi 4, 4, 14816
  04c3a9c  ori 5, 5, 32768
  04c3aa0  cmpw 3, 5
  04c3aa4  lfs 27, 4(4)
  04c3aa8  bt 1, 0x4c3b14
  04c3aac  lwz 5, 20(31)
  04c3ab0  lis 3, 17407
  04c3ab4  lis 4, 16256
  04c3ab8  lfs 26, 20(31)
  04c3abc  srawi 6, 5, 31
  04c3ac0  ori 3, 3, 32768
  04c3ac4  srwi 7, 6, 1
  04c3ac8  xor 5, 7, 5
  04c3acc  subc 5, 5, 6
  04c3ad0  cmpw 1, 5, 3
  04c3ad4  cmpw 5, 4
  04c3ad8  cror 2, 0, 5
  04c3adc  bt 2, 0x4c3b14
  04c3ae0  lwz 5, 24(31)
  04c3ae4  lis 3, 17407
  04c3ae8  lfs 31, 24(31)
  04c3aec  srawi 6, 5, 31
  04c3af0  lis 4, 16256
  04c3af4  srwi 7, 6, 1
  04c3af8  ori 3, 3, 32768
  04c3afc  xor 5, 7, 5
  04c3b00  subc 5, 5, 6
  04c3b04  cmpw 5, 4
  04c3b08  cmpw 1, 5, 3
  04c3b0c  bt 0, 0x4c3b14
  04c3b10  bf 5, 0x4c3b24
  04c3b14  ori 3, 31, 0
  04c3b18  bl 0xefb38
  04c3b1c  nop
  04c3b20  b 0x4c4648
  04c3b24  lis 3, 143
  04c3b28  lfs 1, 19552(3)
  04c3b2c  lbz 3, 32(31)
  04c3b30  fsubs 31, 31, 1
  04c3b34  lfs 30, 28(31)
  04c3b38  cmpwi 3, 1
  04c3b3c  cmpwi 1, 3, -1
  04c3b40  cmpwi 6, 3, 0
  04c3b44  cmpwi 7, 3, 2
  04c3b48  stfs 31, 24(31)
  04c3b4c  bt 1, 0x4c3b5c
  04c3b50  bf 5, 0x4c45b4
  04c3b54  bf 25, 0x4c3b6c
  04c3b58  b 0x4c3fe8
  04c3b5c  bf 29, 0x4c4404
  04c3b60  cmpwi 3, 3
  04c3b64  bf 1, 0x4c44f8
  04c3b68  b 0x4c45b4
  04c3b6c  lfs 1, 0(30)
  04c3b70  fadds 1, 29, 1
  04c3b74  lis 3, 76
  04c3b78  lis 7, 114
  04c3b7c  addi 6, 3, 14816
  04c3b80  ori 3, 31, 0
  04c3b84  lis 4, 131
  04c3b88  li 5, 0
  04c3b8c  stfs 1, 16(31)
  04c3b90  lfs 1, 4(30)
  04c3b94  fadds 1, 26, 1
  04c3b98  stfs 1, 20(31)
  04c3b9c  lfs 1, 8(30)
  04c3ba0  fadds 1, 31, 1
  04c3ba4  stfs 1, 24(31)
  04c3ba8  lfs 1, 8(6)
  04c3bac  lfs 2, 8(30)
  04c3bb0  lfs 3, -3048(7)
  04c3bb4  fnmsubs 1, 3, 1, 2
  04c3bb8  stfs 1, 8(30)
  04c3bbc  bl 0x10675c
  04c3bc0  nop
  04c3bc4  cmpwi 3, 0
  04c3bc8  bt 2, 0x4c3f2c
  04c3bcc  lwz 4, 32(3)
  04c3bd0  cmpwi 4, 0
  04c3bd4  bt 2, 0x4c3f2c
  04c3bd8  lhz 4, 166(4)
  04c3bdc  lhz 5, 166(31)
  04c3be0  extsh 4, 4
  04c3be4  extsh 5, 5
  04c3be8  cmpw 4, 5
  04c3bec  bt 2, 0x4c3f2c
  04c3bf0  lbz 4, 40(3)
  04c3bf4  cmpwi 4, 0
  04c3bf8  bf 2, 0x4c3f24
  04c3bfc  lis 4, 151
  04c3c00  lfs 1, 16(31)
  04c3c04  addic 4, 4, -25376
  04c3c08  lfs 2, 20(31)
  04c3c0c  lis 5, 115
  04c3c10  lfs 3, 128(4)
  04c3c14  lfs 4, 132(4)
  04c3c18  fsubs 1, 1, 3
  04c3c1c  lis 4, 76
  04c3c20  fsubs 2, 2, 4
  04c3c24  addi 4, 4, 14816
  04c3c28  addic 5, 5, 22784
  04c3c2c  fabs 3, 1
  04c3c30  fabs 5, 2
  04c3c34  stfs 1, 208(1)
  04c3c38  stfs 2, 212(1)
  04c3c3c  fsubs 1, 3, 5
  04c3c40  stfs 1, 216(1)
  04c3c44  lwz 6, 208(1)
  04c3c48  lfs 4, 12(4)
  04c3c4c  lfs 1, 208(1)
  04c3c50  lwz 4, 212(1)
  04c3c54  lfs 2, 212(1)
  04c3c58  lwz 7, 216(1)
  04c3c5c  rlwinm 4, 4, 3, 29, 29
  04c3c60  fabs 6, 2
  04c3c64  lfs 2, 216(1)
  04c3c68  fabs 1, 1
  04c3c6c  rlwimi 4, 7, 2, 30, 30
  04c3c70  fsub 7, 2, 4
  04c3c74  rlwimi 4, 6, 4, 28, 28
  04c3c78  fsub 8, 2, 4
  04c3c7c  ori 6, 5, 0
  04c3c80  rlwimi 6, 4, 2, 26, 28
  04c3c84  slwi 4, 4, 2
  04c3c88  clrldi 6, 6, 32
  04c3c8c  fsel 5, 7, 1, 5
  04c3c90  lfsx 1, 5, 4
  04c3c94  lfs 2, 4(6)
  04c3c98  fsel 3, 8, 6, 3
  04c3c9c  fcmpu 0, 5, 4
  04c3ca0  bt 1, 0x4c3ca8
  04c3ca4  b 0x4c3dc8
  04c3ca8  fsubs 6, 3, 5
  04c3cac  fadds 3, 3, 5
  04c3cb0  addic 4, 1, 16
  04c3cb4  li 8, 2
  04c3cb8  addic 5, 4, 236
  04c3cbc  addic 6, 4, 252
  04c3cc0  mtctr 8
  04c3cc4  fdivs 3, 6, 3
  04c3cc8  fmuls 5, 3, 3
  04c3ccc  stfs 3, 264(1)
  04c3cd0  stfs 3, 256(1)
  04c3cd4  stfs 3, 260(1)
  04c3cd8  stfs 3, 252(1)
  04c3cdc  lfs 7, 264(1)
  04c3ce0  lfs 8, 256(1)
  04c3ce4  lfs 9, 260(1)
  04c3ce8  fmuls 6, 5, 5
  04c3cec  fmuls 8, 8, 5
  04c3cf0  fmuls 7, 7, 6
  04c3cf4  fmuls 3, 6, 6
  04c3cf8  fmuls 6, 9, 6
  04c3cfc  stfs 8, 256(1)
  04c3d00  fmuls 5, 7, 5
  04c3d04  stfs 6, 260(1)
  04c3d08  stfs 5, 264(1)
  04c3d0c  lfs 5, 236(4)
  04c3d10  fmuls 5, 5, 3
  04c3d14  stfs 5, 252(4)
  04c3d18  lfs 5, 4(5)
  04c3d1c  addic 4, 4, 8
  04c3d20  addic 5, 5, 8
  04c3d24  fmuls 5, 5, 3
  04c3d28  stfs 5, 4(6)
  04c3d2c  addic 6, 6, 8
  04c3d30  bdnz 0x4c3d0c
  04c3d34  li 6, 4
  04c3d38  ori 4, 1, 0
  04c3d3c  mtctr 6
  04c3d40  lis 5, 115
  04c3d44  addic 6, 4, 252
  04c3d48  addic 5, 5, 22752
  04c3d4c  ori 7, 6, 0
  04c3d50  lfs 3, 252(4)
  04c3d54  lfs 5, 0(5)
  04c3d58  fmuls 3, 3, 5
  04c3d5c  lfs 5, 4(5)
  04c3d60  addic 5, 5, 8
  04c3d64  stfs 3, 252(4)
  04c3d68  lfs 3, 4(6)
  04c3d6c  addic 4, 4, 8
  04c3d70  fmuls 3, 3, 5
  04c3d74  stfs 3, 4(6)
  04c3d78  addic 6, 6, 8
  04c3d7c  bdnz 0x4c3d50
  04c3d80  ori 4, 1, 0
  04c3d84  mtctr 8
  04c3d88  lfs 3, 252(4)
  04c3d8c  fadds 3, 4, 3
  04c3d90  lfs 4, 4(7)
  04c3d94  addic 4, 4, 16
  04c3d98  lfs 5, 8(7)
  04c3d9c  lfs 6, 12(7)
  04c3da0  addic 7, 7, 16
  04c3da4  fadds 3, 3, 4
  04c3da8  fadds 4, 3, 5
  04c3dac  fadds 4, 4, 6
  04c3db0  bdnz 0x4c3d88
  04c3db4  lis 4, 76
  04c3db8  addi 4, 4, 14816
  04c3dbc  lfs 3, 16(4)
  04c3dc0  fadds 4, 4, 3
  04c3dc4  fmadds 4, 4, 1, 2
  04c3dc8  lis 4, 76
  04c3dcc  stfs 4, 172(1)
  04c3dd0  addi 29, 4, 14816
  04c3dd4  lis 4, 114
  04c3dd8  addic 5, 1, 172
  04c3ddc  addic 6, 1, 176
  04c3de0  addic 7, 1, 180
  04c3de4  lfs 1, 20(29)
  04c3de8  lfs 2, -3052(4)
  04c3dec  fmuls 3, 2, 1
  04c3df0  fmuls 1, 2, 1
  04c3df4  stfs 3, 176(1)
  04c3df8  stfs 1, 180(1)
  04c3dfc  lfs 1, 16(3)
  04c3e00  lfs 2, 24(3)
  04c3e04  stfs 1, 48(1)
  04c3e08  stfs 2, 56(1)
  04c3e0c  lfs 1, 20(3)
  04c3e10  lfs 2, 28(3)
  04c3e14  stfs 1, 52(1)
  04c3e18  stfs 2, 60(1)
  04c3e1c  ld 3, 48(1)
  04c3e20  ld 4, 56(1)
  04c3e24  bl 0x107de8
  04c3e28  nop
  04c3e2c  lfs 1, 28(29)
  04c3e30  lfs 2, 172(1)
  04c3e34  lfs 3, 32(29)
  04c3e38  fsubs 5, 1, 2
  04c3e3c  lfs 4, 24(29)
  04c3e40  fsubs 6, 3, 2
  04c3e44  fadds 4, 2, 4
  04c3e48  li 3, 52
  04c3e4c  vspltisw 2, -1
  04c3e50  lis 4, 114
  04c3e54  li 5, -3056
  04c3e58  fsub 7, 2, 5
  04c3e5c  fsubs 1, 1, 4
  04c3e60  fsubs 3, 3, 4
  04c3e64  vslw 2, 2, 2
  04c3e68  li 6, 20
  04c3e6c  li 7, 2
  04c3e70  fsel 2, 7, 5, 2
  04c3e74  fsub 5, 4, 1
  04c3e78  lfs 7, 36(29)
  04c3e7c  fsub 9, 6, 2
  04c3e80  fsel 1, 5, 1, 4
  04c3e84  lfs 4, 40(29)
  04c3e88  lfs 5, 44(29)
  04c3e8c  fsel 2, 9, 6, 2
  04c3e90  fsub 6, 3, 1
  04c3e94  fmuls 9, 2, 2
  04c3e98  fsel 1, 6, 3, 1
  04c3e9c  lfs 3, 48(29)
  04c3ea0  lfs 6, 176(1)
  04c3ea4  lfs 11, 180(1)
  04c3ea8  stfs 11, 8(30)
  04c3eac  fmuls 8, 9, 2
  04c3eb0  fmuls 10, 1, 1
  04c3eb4  fmuls 12, 9, 8
  04c3eb8  fmadds 2, 8, 7, 2
  04c3ebc  fmuls 8, 10, 1
  04c3ec0  fmuls 13, 9, 12
  04c3ec4  fmadds 2, 12, 4, 2
  04c3ec8  fmadds 1, 8, 7, 1
  04c3ecc  fmuls 12, 10, 8
  04c3ed0  fmuls 7, 9, 13
  04c3ed4  fmadds 2, 13, 5, 2
  04c3ed8  fmuls 8, 10, 12
  04c3edc  fmadds 1, 12, 4, 1
  04c3ee0  fmadds 2, 7, 3, 2
  04c3ee4  fmuls 4, 10, 8
  04c3ee8  fmadds 1, 8, 5, 1
  04c3eec  fmuls 2, 2, 6
  04c3ef0  fmadds 1, 4, 3, 1
  04c3ef4  stfs 2, 4(30)
  04c3ef8  <unknown>
  04c3efc  <unknown>
  04c3f00  vspltw 3, 3, 0
  04c3f04  fmuls 1, 1, 6
  04c3f08  vmaddfp 2, 4, 3, 2
  04c3f0c  vctsxs 2, 2, 0
  04c3f10  vsplth 2, 2, 1
  04c3f14  stvehx 2, 6, 30
  04c3f18  stfs 1, 0(30)
  04c3f1c  stb 7, 32(31)
  04c3f20  b 0x4c3f2c
  04c3f24  li 3, 3
  04c3f28  stb 3, 32(31)
  04c3f2c  li 4, 255
  04c3f30  addic 3, 30, 20
  04c3f34  stb 4, 164(31)
  04c3f38  bl 0x4fffb4
  04c3f3c  nop
  04c3f40  cmpwi 3, 0
  04c3f44  bt 2, 0x4c3fbc
  04c3f48  stfs 29, 64(1)
  04c3f4c  ori 3, 31, 0
  04c3f50  stfs 31, 72(1)
  04c3f54  ori 4, 30, 0
  04c3f58  stfs 26, 68(1)
  04c3f5c  stfs 30, 76(1)
  04c3f60  ld 5, 64(1)
  04c3f64  ld 6, 72(1)
  04c3f68  bl 0x4c2ce8
  04c3f6c  cmpwi 3, 3
  04c3f70  bf 2, 0x4c3fbc
  04c3f74  lis 3, 76
  04c3f78  vspltisw 2, -1
  04c3f7c  li 5, 56
  04c3f80  addi 3, 3, 14816
  04c3f84  lis 4, 114
  04c3f88  li 6, -3056
  04c3f8c  vslw 2, 2, 2
  04c3f90  <unknown>
  04c3f94  li 3, 20
  04c3f98  vspltw 3, 3, 0
  04c3f9c  <unknown>
  04c3fa0  li 4, 1
  04c3fa4  vmaddfp 2, 4, 3, 2
  04c3fa8  vctsxs 2, 2, 0
  04c3fac  vsplth 2, 2, 1
  04c3fb0  stvehx 2, 3, 30
  04c3fb4  stb 4, 32(31)
  04c3fb8  b 0x4c45b4
  04c3fbc  lwz 4, 24(31)
  04c3fc0  lis 3, 16384
  04c3fc4  srawi 5, 4, 31
  04c3fc8  srwi 6, 5, 1
  04c3fcc  xor 4, 6, 4
  04c3fd0  subc 4, 4, 5
  04c3fd4  cmpw 4, 3
  04c3fd8  bf 0, 0x4c45b4
  04c3fdc  li 3, 3
  04c3fe0  stb 3, 32(31)
  04c3fe4  b 0x4c45b4
  04c3fe8  ori 3, 31, 0
  04c3fec  addic 4, 1, 160
  04c3ff0  addic 5, 1, 164
  04c3ff4  addic 6, 1, 168
  04c3ff8  bl 0xf1ef0
  04c3ffc  nop
  04c4000  lis 3, 76
  04c4004  lis 4, 114
  04c4008  addi 3, 3, 14816
  04c400c  lfs 1, 56(3)
  04c4010  lfs 2, -3056(4)
  04c4014  lhz 3, 20(30)
  04c4018  fmuls 1, 2, 1
  04c401c  lwz 5, 164(1)
  04c4020  extsh 4, 3
  04c4024  lwz 6, 168(1)
  04c4028  ori 3, 31, 0
  04c402c  extsw 5, 5
  04c4030  extsw 6, 6
  04c4034  fctiwz 1, 1
  04c4038  stfd 1, 288(1)
  04c403c  lwz 7, 292(1)
  04c4040  subc 4, 7, 4
  04c4044  sldi 8, 4, 7
  04c4048  subc 4, 8, 4
  04c404c  divw 4, 4, 7
  04c4050  extsw 4, 4
  04c4054  bl 0xf1ec8
  04c4058  nop
  04c405c  addic 3, 30, 20
  04c4060  bl 0x4fffb4
  04c4064  nop
  04c4068  cmpwi 3, 0
  04c406c  bt 2, 0x4c407c
  04c4070  li 3, 3
  04c4074  stb 3, 32(31)
  04c4078  b 0x4c45b4
  04c407c  ori 3, 31, 0
  04c4080  lis 4, 131
  04c4084  li 5, 0
  04c4088  bl 0x10675c
  04c408c  nop
  04c4090  cmpwi 3, 0
  04c4094  bt 2, 0x4c43f8
  04c4098  lwz 4, 32(3)
  04c409c  cmpwi 4, 0
  04c40a0  bt 2, 0x4c43f8
  04c40a4  lhz 4, 166(4)
  04c40a8  lhz 5, 166(31)
  04c40ac  extsh 4, 4
  04c40b0  extsh 5, 5
  04c40b4  cmpw 4, 5
  04c40b8  bt 2, 0x4c43f8
  04c40bc  lbz 4, 40(3)
  04c40c0  cmpwi 4, 0
  04c40c4  bf 2, 0x4c43f0
  04c40c8  lis 4, 151
  04c40cc  lfs 1, 16(31)
  04c40d0  addic 4, 4, -25376
  04c40d4  lfs 2, 20(31)
  04c40d8  lis 5, 115
  04c40dc  lfs 3, 128(4)
  04c40e0  lfs 4, 132(4)
  04c40e4  fsubs 1, 1, 3
  04c40e8  lis 4, 76
  04c40ec  fsubs 2, 2, 4
  04c40f0  addi 4, 4, 14816
  04c40f4  addic 5, 5, 22784
  04c40f8  fabs 3, 1
  04c40fc  fabs 5, 2
  04c4100  stfs 1, 196(1)
  04c4104  stfs 2, 200(1)
  04c4108  fsubs 1, 3, 5
  04c410c  stfs 1, 204(1)
  04c4110  lwz 6, 196(1)
  04c4114  lfs 4, 12(4)
  04c4118  lfs 1, 196(1)
  04c411c  lwz 4, 200(1)
  04c4120  lfs 2, 200(1)
  04c4124  lwz 7, 204(1)
  04c4128  rlwinm 4, 4, 3, 29, 29
  04c412c  fabs 6, 2
  04c4130  lfs 2, 204(1)
  04c4134  fabs 1, 1
  04c4138  rlwimi 4, 7, 2, 30, 30
  04c413c  fsub 7, 2, 4
  04c4140  rlwimi 4, 6, 4, 28, 28
  04c4144  fsub 8, 2, 4
  04c4148  ori 6, 5, 0
  04c414c  rlwimi 6, 4, 2, 26, 28
  04c4150  slwi 4, 4, 2
  04c4154  clrldi 6, 6, 32
  04c4158  fsel 5, 7, 1, 5
  04c415c  lfsx 1, 5, 4
  04c4160  lfs 2, 4(6)
  04c4164  fsel 3, 8, 6, 3
  04c4168  fcmpu 0, 5, 4
  04c416c  bt 1, 0x4c4174
  04c4170  b 0x4c4294
  04c4174  fsubs 6, 3, 5
  04c4178  fadds 3, 3, 5
  04c417c  addic 4, 1, 16
  04c4180  li 8, 2
  04c4184  addic 5, 4, 204
  04c4188  addic 6, 4, 220
  04c418c  mtctr 8
  04c4190  fdivs 3, 6, 3
  04c4194  fmuls 5, 3, 3
  04c4198  stfs 3, 232(1)
  04c419c  stfs 3, 224(1)
  04c41a0  stfs 3, 228(1)
  04c41a4  stfs 3, 220(1)
  04c41a8  lfs 7, 232(1)
  04c41ac  lfs 8, 224(1)
  04c41b0  lfs 9, 228(1)
  04c41b4  fmuls 6, 5, 5
  04c41b8  fmuls 8, 8, 5
  04c41bc  fmuls 7, 7, 6
  04c41c0  fmuls 3, 6, 6
  04c41c4  fmuls 6, 9, 6
  04c41c8  stfs 8, 224(1)
  04c41cc  fmuls 5, 7, 5
  04c41d0  stfs 6, 228(1)
  04c41d4  stfs 5, 232(1)
  04c41d8  lfs 5, 204(4)
  04c41dc  fmuls 5, 5, 3
  04c41e0  stfs 5, 220(4)
  04c41e4  lfs 5, 4(5)
  04c41e8  addic 4, 4, 8
  04c41ec  addic 5, 5, 8
  04c41f0  fmuls 5, 5, 3
  04c41f4  stfs 5, 4(6)
  04c41f8  addic 6, 6, 8
  04c41fc  bdnz 0x4c41d8
  04c4200  li 6, 4
  04c4204  ori 4, 1, 0
  04c4208  mtctr 6
  04c420c  lis 5, 115
  04c4210  addic 6, 4, 220
  04c4214  addic 5, 5, 22752
  04c4218  ori 7, 6, 0
  04c421c  lfs 3, 220(4)
  04c4220  lfs 5, 0(5)
  04c4224  fmuls 3, 3, 5
  04c4228  lfs 5, 4(5)
  04c422c  addic 5, 5, 8
  04c4230  stfs 3, 220(4)
  04c4234  lfs 3, 4(6)
  04c4238  addic 4, 4, 8
  04c423c  fmuls 3, 3, 5
  04c4240  stfs 3, 4(6)
  04c4244  addic 6, 6, 8
  04c4248  bdnz 0x4c421c
  04c424c  ori 4, 1, 0
  04c4250  mtctr 8
  04c4254  lfs 3, 220(4)
  04c4258  fadds 3, 4, 3
  04c425c  lfs 4, 4(7)
  04c4260  addic 4, 4, 16
  04c4264  lfs 5, 8(7)
  04c4268  lfs 6, 12(7)
  04c426c  addic 7, 7, 16
  04c4270  fadds 3, 3, 4
  04c4274  fadds 4, 3, 5
  04c4278  fadds 4, 4, 6
  04c427c  bdnz 0x4c4254
  04c4280  lis 4, 76
  04c4284  addi 4, 4, 14816
  04c4288  lfs 3, 16(4)
  04c428c  fadds 4, 4, 3
  04c4290  fmadds 4, 4, 1, 2
  04c4294  lis 4, 76
  04c4298  stfs 4, 184(1)
  04c429c  addi 29, 4, 14816
  04c42a0  lis 4, 114
  04c42a4  addic 5, 1, 184
  04c42a8  addic 6, 1, 188
  04c42ac  addic 7, 1, 192
  04c42b0  lfs 1, 20(29)
  04c42b4  lfs 2, -3052(4)
  04c42b8  fmuls 3, 2, 1
  04c42bc  fmuls 1, 2, 1
  04c42c0  stfs 3, 188(1)
  04c42c4  stfs 1, 192(1)
  04c42c8  lfs 1, 16(3)
  04c42cc  lfs 2, 24(3)
  04c42d0  stfs 1, 48(1)
  04c42d4  stfs 2, 56(1)
  04c42d8  lfs 1, 20(3)
  04c42dc  lfs 2, 28(3)
  04c42e0  stfs 1, 52(1)
  04c42e4  stfs 2, 60(1)
  04c42e8  ld 3, 48(1)
  04c42ec  ld 4, 56(1)
  04c42f0  bl 0x107de8
  04c42f4  nop
  04c42f8  lfs 1, 28(29)
  04c42fc  lfs 2, 184(1)
  04c4300  lfs 3, 24(29)
  04c4304  fsubs 5, 1, 2
  04c4308  lfs 4, 32(29)
  04c430c  fadds 3, 2, 3
  04c4310  fsubs 6, 4, 2
  04c4314  lfs 7, 36(29)
  04c4318  li 3, -3056
  04c431c  lis 4, 114
  04c4320  vspltisw 3, -1
  04c4324  li 5, 2
  04c4328  fsub 8, 2, 5
  04c432c  fsubs 1, 1, 3
  04c4330  fsubs 4, 4, 3
  04c4334  vslw 3, 3, 3
  04c4338  fsel 2, 8, 5, 2
  04c433c  fsub 5, 3, 1
  04c4340  lfs 8, 40(29)
  04c4344  fsub 10, 6, 2
  04c4348  fsel 1, 5, 1, 3
  04c434c  lfs 3, 44(29)
  04c4350  lfs 5, 48(29)
  04c4354  lfs 9, 188(1)
  04c4358  fsel 2, 10, 6, 2
  04c435c  fsub 6, 4, 1
  04c4360  fmuls 10, 2, 2
  04c4364  fsel 1, 6, 4, 1
  04c4368  lfs 4, 192(1)
  04c436c  <unknown>
  04c4370  stfs 4, 8(30)
  04c4374  li 3, 52
  04c4378  li 4, 20
  04c437c  fmuls 6, 10, 2
  04c4380  fmuls 11, 1, 1
  04c4384  fmuls 12, 10, 6
  04c4388  fmadds 2, 6, 7, 2
  04c438c  fmuls 6, 11, 1
  04c4390  fmuls 13, 10, 12
  04c4394  fmadds 2, 12, 8, 2
  04c4398  fmuls 12, 11, 6
  04c439c  fmadds 1, 6, 7, 1
  04c43a0  fmuls 4, 10, 13
  04c43a4  fmadds 2, 13, 3, 2
  04c43a8  fmuls 6, 11, 12
  04c43ac  fmadds 1, 12, 8, 1
  04c43b0  fmadds 2, 4, 5, 2
  04c43b4  fmuls 4, 11, 6
  04c43b8  fmadds 1, 6, 3, 1
  04c43bc  fmuls 2, 2, 9
  04c43c0  fmadds 1, 4, 5, 1
  04c43c4  stfs 2, 4(30)
  04c43c8  fmuls 1, 1, 9
  04c43cc  <unknown>
  04c43d0  vspltw 4, 4, 0
  04c43d4  vmaddfp 2, 2, 4, 3
  04c43d8  vctsxs 2, 2, 0
  04c43dc  vsplth 2, 2, 1
  04c43e0  stvehx 2, 4, 30
  04c43e4  stfs 1, 0(30)
  04c43e8  stb 5, 32(31)
  04c43ec  b 0x4c43f8
  04c43f0  li 3, 3
  04c43f4  stb 3, 32(31)
  04c43f8  li 3, 255
  04c43fc  stb 3, 164(31)
  04c4400  b 0x4c45b4
  04c4404  addic 5, 1, 164
  04c4408  addic 4, 1, 160
  04c440c  addic 6, 1, 168
  04c4410  ori 3, 31, 0
  04c4414  bl 0xf1ef0
  04c4418  nop
  04c441c  lwz 5, 164(1)
  04c4420  ori 3, 31, 0
  04c4424  lwz 6, 168(1)
  04c4428  li 4, 255
  04c442c  extsw 5, 5
  04c4430  extsw 6, 6
  04c4434  bl 0xf1ec8
  04c4438  nop
  04c443c  lfs 1, 0(30)
  04c4440  lfs 2, 16(31)
  04c4444  fadds 1, 2, 1
  04c4448  lis 3, 76
  04c444c  lfs 2, 20(31)
  04c4450  lis 5, 114
  04c4454  lfs 3, 24(31)
  04c4458  addi 4, 3, 14816
  04c445c  addic 3, 30, 20
  04c4460  stfs 1, 16(31)
  04c4464  lfs 1, 4(30)
  04c4468  fadds 1, 2, 1
  04c446c  stfs 1, 20(31)
  04c4470  lfs 1, 8(30)
  04c4474  fadds 1, 3, 1
  04c4478  stfs 1, 24(31)
  04c447c  lfs 1, 8(4)
  04c4480  lfs 2, 8(30)
  04c4484  lfs 3, -3048(5)
  04c4488  fnmsubs 1, 3, 1, 2
  04c448c  stfs 1, 8(30)
  04c4490  bl 0x4fffb4
  04c4494  nop
  04c4498  cmpwi 3, 0
  04c449c  bt 2, 0x4c44cc
  04c44a0  stfs 29, 64(1)
  04c44a4  stfs 31, 72(1)
  04c44a8  ori 3, 31, 0
  04c44ac  stfs 26, 68(1)
  04c44b0  ori 4, 30, 0
  04c44b4  stfs 30, 76(1)
  04c44b8  ld 5, 64(1)
  04c44bc  ld 6, 72(1)
  04c44c0  bl 0x4c2ce8
  04c44c4  cmpwi 3, 0
  04c44c8  bf 2, 0x4c44ec
  04c44cc  lwz 4, 24(31)
  04c44d0  lis 3, 16384
  04c44d4  srawi 5, 4, 31
  04c44d8  srwi 6, 5, 1
  04c44dc  xor 4, 6, 4
  04c44e0  subc 4, 4, 5
  04c44e4  cmpw 4, 3
  04c44e8  bf 0, 0x4c45b4
  04c44ec  li 3, 3
  04c44f0  stb 3, 32(31)
  04c44f4  b 0x4c45b4
  04c44f8  lis 3, 76
  04c44fc  addic 30, 31, 16
  04c4500  addi 29, 3, 14816
  04c4504  ori 3, 30, 0
  04c4508  li 5, 16
  04c450c  ori 6, 31, 0
  04c4510  li 7, 0
  04c4514  lfs 1, 60(29)
  04c4518  bl 0x5e598
  04c451c  nop
  04c4520  lfs 1, 16(31)
  04c4524  li 4, 2
  04c4528  lfs 2, 24(31)
  04c452c  li 5, 1
  04c4530  stfs 1, 64(1)
  04c4534  lis 7, 161
  04c4538  stfs 2, 72(1)
  04c453c  ori 8, 3, 0
  04c4540  lfs 1, 20(31)
  04c4544  lis 10, 129
  04c4548  ori 3, 31, 0
  04c454c  fmr 2, 28
  04c4550  stfs 1, 68(1)
  04c4554  addic 7, 7, 18944
  04c4558  lfs 1, 28(31)
  04c455c  li 9, 0
  04c4560  ori 10, 10, 1
  04c4564  fmr 3, 28
  04c4568  stfs 1, 76(1)
  04c456c  std 4, 120(1)
  04c4570  std 5, 128(1)
  04c4574  fmr 1, 28
  04c4578  ld 5, 64(1)
  04c457c  ld 6, 72(1)
  04c4580  bl 0x107860
  04c4584  nop
  04c4588  lfs 1, 64(29)
  04c458c  ori 3, 31, 0
  04c4590  lfs 2, 68(29)
  04c4594  ori 4, 30, 0
  04c4598  li 6, 0
  04c459c  bl 0x10fb28
  04c45a0  nop
  04c45a4  ori 3, 31, 0
  04c45a8  bl 0xefb38
  04c45ac  nop
  04c45b0  b 0x4c4648
  04c45b4  lis 3, 143
  04c45b8  lfs 1, 24(31)
  04c45bc  lis 5, 17407
  04c45c0  lis 4, 16256
  04c45c4  ori 5, 5, 32768
  04c45c8  lfs 2, 19552(3)
  04c45cc  lwz 3, 16(31)
  04c45d0  fadds 1, 1, 2
  04c45d4  srawi 6, 3, 31
  04c45d8  srwi 7, 6, 1
  04c45dc  xor 3, 7, 3
  04c45e0  subc 3, 3, 6
  04c45e4  cmpw 1, 3, 5
  04c45e8  cmpw 3, 4
  04c45ec  cror 2, 0, 5
  04c45f0  stfs 1, 24(31)
  04c45f4  bt 2, 0x4c463c
  04c45f8  lwz 5, 20(31)
  04c45fc  lis 3, 17407
  04c4600  srawi 6, 5, 31
  04c4604  lis 4, 16256
  04c4608  srwi 7, 6, 1
  04c460c  ori 3, 3, 32768
  04c4610  xor 5, 7, 5
  04c4614  subc 5, 5, 6
  04c4618  cmpw 1, 5, 3
  04c461c  cmpw 5, 4
  04c4620  cror 2, 0, 5
  04c4624  bt 2, 0x4c463c
  04c4628  fcmpu 0, 1, 28
  04c462c  bt 0, 0x4c463c
  04c4630  fcmpu 0, 1, 27
  04c4634  cror 6, 0, 2
  04c4638  bt 6, 0x4c4648
  04c463c  ori 3, 31, 0
  04c4640  bl 0xefb38
  04c4644  nop
  04c4648  ld 0, 400(1)
  04c464c  mtlr 0
  04c4650  lfd 26, 336(1)
  04c4654  lfd 27, 344(1)
  04c4658  lfd 28, 352(1)
  04c465c  lfd 29, 360(1)
  04c4660  lfd 30, 368(1)
  04c4664  lfd 31, 376(1)
  04c4668  ld 29, 312(1)
  04c466c  ld 30, 320(1)
  04c4670  ld 31, 328(1)
  04c4674  addi 1, 1, 384
  04c4678  blr
