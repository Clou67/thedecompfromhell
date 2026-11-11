# game/update/moby447.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M920_004b2c60:   # 0x4b2c60, 0x14 bytes
  04b2c60  lis 3, 143
  04b2c64  lis 4, 1
  04b2c68  addic 3, 3, 17484
  04b2c6c  stw 4, 72(3)
  04b2c70  blr

M920_004b2c78:   # 0x4b2c78, 0xe8 bytes
  04b2c78  stdu 1, -144(1)
  04b2c7c  mflr 0
  04b2c80  std 0, 160(1)
  04b2c84  lis 3, 161
  04b2c88  lwz 3, 1800(3)
  04b2c8c  std 31, 136(1)
  04b2c90  std 30, 128(1)
  04b2c94  std 29, 120(1)
  04b2c98  std 28, 112(1)
  04b2c9c  cmpwi 3, 2
  04b2ca0  bf 2, 0x4b2d40
  04b2ca4  lis 3, 151
  04b2ca8  lbz 3, -16268(3)
  04b2cac  cmpwi 3, 0
  04b2cb0  bt 2, 0x4b2d40
  04b2cb4  lis 29, 150
  04b2cb8  li 28, 0
  04b2cbc  addic 29, 29, -12976
  04b2cc0  lhz 3, 68(29)
  04b2cc4  extsh 4, 3
  04b2cc8  cmpwi 4, 0
  04b2ccc  bf 1, 0x4b2d40
  04b2cd0  lis 30, 162
  04b2cd4  ori 31, 29, 0
  04b2cd8  addic 30, 30, -16512
  04b2cdc  lwz 4, 376(31)
  04b2ce0  lhz 5, 166(4)
  04b2ce4  cmpwi 5, 920
  04b2ce8  cmpwi 1, 5, 447
  04b2cec  bt 2, 0x4b2cf4
  04b2cf0  bf 6, 0x4b2d2c
  04b2cf4  lbz 5, 1(30)
  04b2cf8  cmpwi 5, 0
  04b2cfc  bf 2, 0x4b2d2c
  04b2d00  ori 3, 4, 0
  04b2d04  li 4, 0
  04b2d08  ori 5, 30, 0
  04b2d0c  bl 0xf0ea8
  04b2d10  nop
  04b2d14  lis 4, 16390
  04b2d18  lhz 3, 68(29)
  04b2d1c  ori 4, 4, 26214
  04b2d20  stw 4, 32(30)
  04b2d24  stw 4, 36(30)
  04b2d28  stw 4, 40(30)
  04b2d2c  extsh 4, 3
  04b2d30  addic 28, 28, 1
  04b2d34  addic 31, 31, 4
  04b2d38  cmpw 28, 4
  04b2d3c  bt 0, 0x4b2cdc
  04b2d40  ld 0, 160(1)
  04b2d44  mtlr 0
  04b2d48  ld 28, 112(1)
  04b2d4c  ld 29, 120(1)
  04b2d50  ld 30, 128(1)
  04b2d54  ld 31, 136(1)
  04b2d58  addi 1, 1, 144
  04b2d5c  blr

UpdateMoby_447:   # 0x4b2db8, 0xb54 bytes
  04b2db8  stdu 1, -336(1)
  04b2dbc  mflr 0
  04b2dc0  std 0, 352(1)
  04b2dc4  stfd 27, 296(1)
  04b2dc8  stfd 28, 304(1)
  04b2dcc  stfd 29, 312(1)
  04b2dd0  stfd 30, 320(1)
  04b2dd4  stfd 31, 328(1)
  04b2dd8  std 31, 288(1)
  04b2ddc  lis 4, 161
  04b2de0  ori 31, 3, 0
  04b2de4  std 30, 280(1)
  04b2de8  lwz 4, 1800(4)
  04b2dec  lwz 30, 120(3)
  04b2df0  std 29, 272(1)
  04b2df4  std 28, 264(1)
  04b2df8  std 27, 256(1)
  04b2dfc  std 26, 248(1)
  04b2e00  cmpwi 4, 2
  04b2e04  bf 2, 0x4b2ea0
  04b2e08  lis 3, 151
  04b2e0c  lbz 3, -16268(3)
  04b2e10  cmpwi 3, 0
  04b2e14  bt 2, 0x4b2ea0
  04b2e18  lis 28, 150
  04b2e1c  li 29, 0
  04b2e20  addic 28, 28, -12976
  04b2e24  lhz 4, 68(28)
  04b2e28  extsh 3, 4
  04b2e2c  cmpwi 3, 0
  04b2e30  bf 1, 0x4b2ea0
  04b2e34  lis 27, 162
  04b2e38  ori 26, 28, 0
  04b2e3c  addic 27, 27, -16512
  04b2e40  lwz 3, 376(26)
  04b2e44  lhz 5, 166(3)
  04b2e48  cmpwi 5, 920
  04b2e4c  cmpwi 1, 5, 447
  04b2e50  bt 2, 0x4b2e58
  04b2e54  bf 6, 0x4b2e8c
  04b2e58  lbz 5, 1(27)
  04b2e5c  cmpwi 5, 0
  04b2e60  bf 2, 0x4b2e8c
  04b2e64  li 4, 0
  04b2e68  ori 5, 27, 0
  04b2e6c  bl 0xf0ea8
  04b2e70  nop
  04b2e74  lis 3, 16390
  04b2e78  lhz 4, 68(28)
  04b2e7c  ori 3, 3, 26214
  04b2e80  stw 3, 32(27)
  04b2e84  stw 3, 36(27)
  04b2e88  stw 3, 40(27)
  04b2e8c  extsh 3, 4
  04b2e90  addic 29, 29, 1
  04b2e94  addic 26, 26, 4
  04b2e98  cmpw 29, 3
  04b2e9c  bt 0, 0x4b2e40
  04b2ea0  lbz 3, 49(31)
  04b2ea4  cmpwi 3, 0
  04b2ea8  bt 2, 0x4b2f14
  04b2eac  lis 3, 149
  04b2eb0  lfs 1, 20(31)
  04b2eb4  lfs 2, 16(31)
  04b2eb8  addic 3, 3, 5056
  04b2ebc  lfs 3, 324(3)
  04b2ec0  lfs 4, 320(3)
  04b2ec4  fsubs 1, 1, 3
  04b2ec8  fsubs 2, 2, 4
  04b2ecc  lfs 3, 24(31)
  04b2ed0  lfs 4, 328(3)
  04b2ed4  fsubs 3, 3, 4
  04b2ed8  lis 3, 75
  04b2edc  fmuls 1, 1, 1
  04b2ee0  addi 3, 3, 11616
  04b2ee4  fmadds 1, 2, 2, 1
  04b2ee8  lfs 2, 0(3)
  04b2eec  fmadds 1, 3, 3, 1
  04b2ef0  fsqrts 1, 1
  04b2ef4  fcmpu 0, 1, 2
  04b2ef8  cror 6, 1, 2
  04b2efc  bt 6, 0x4b2f14
  04b2f00  ori 3, 31, 0
  04b2f04  bl 0x106360
  04b2f08  nop
  04b2f0c  li 3, 24
  04b2f10  stb 3, 127(31)
  04b2f14  lbz 3, 32(31)
  04b2f18  cmpwi 3, 1
  04b2f1c  cmpwi 1, 3, 2
  04b2f20  cmpwi 6, 3, 0
  04b2f24  cmpwi 7, 3, -1
  04b2f28  bt 1, 0x4b2f38
  04b2f2c  bf 29, 0x4b304c
  04b2f30  bf 25, 0x4b2f40
  04b2f34  b 0x4b2ffc
  04b2f38  bf 5, 0x4b3044
  04b2f3c  b 0x4b304c
  04b2f40  li 3, 255
  04b2f44  stb 3, 48(31)
  04b2f48  lwz 3, 288(30)
  04b2f4c  cmpwi 3, -1
  04b2f50  bf 2, 0x4b2f64
  04b2f54  lis 3, 102
  04b2f58  addic 3, 3, -30196
  04b2f5c  bl 0x5cd098
  04b2f60  nop
  04b2f64  lwz 3, 296(30)
  04b2f68  cmpwi 3, -1
  04b2f6c  bf 2, 0x4b2f80
  04b2f70  lis 3, 102
  04b2f74  addic 3, 3, -30140
  04b2f78  bl 0x5cd098
  04b2f7c  nop
  04b2f80  lwz 3, 292(30)
  04b2f84  cmpwi 3, -1
  04b2f88  bf 2, 0x4b2fa0
  04b2f8c  lis 3, 102
  04b2f90  addic 3, 3, -30092
  04b2f94  bl 0x5cd098
  04b2f98  nop
  04b2f9c  b 0x4b2ff0
  04b2fa0  lis 4, 164
  04b2fa4  slwi 5, 3, 8
  04b2fa8  lwz 3, -28512(4)
  04b2fac  addc 4, 3, 5
  04b2fb0  clrldi 4, 4, 32
  04b2fb4  lbz 4, 32(4)
  04b2fb8  cmpwi 4, 0
  04b2fbc  bt 2, 0x4b2ff0
  04b2fc0  lwz 30, 296(30)
  04b2fc4  cmpwi 30, -1
  04b2fc8  bt 2, 0x4b2fe0
  04b2fcc  slwi 4, 30, 8
  04b2fd0  li 5, 3
  04b2fd4  addc 3, 3, 4
  04b2fd8  clrldi 3, 3, 32
  04b2fdc  stb 5, 32(3)
  04b2fe0  ori 3, 31, 0
  04b2fe4  bl 0xefb38
  04b2fe8  nop
  04b2fec  b 0x4b38d0
  04b2ff0  li 3, 1
  04b2ff4  stb 3, 32(31)
  04b2ff8  b 0x4b304c
  04b2ffc  lwz 3, 288(30)
  04b3000  cmpwi 3, -1
  04b3004  bt 2, 0x4b304c
  04b3008  lis 5, 151
  04b300c  extsw 4, 3
  04b3010  addic 3, 5, -25376
  04b3014  addic 3, 3, 128
  04b3018  bl 0x110b70
  04b301c  nop
  04b3020  cmpwi 3, 0
  04b3024  bt 2, 0x4b304c
  04b3028  ori 3, 31, 0
  04b302c  li 4, 1
  04b3030  bl 0x4d407c
  04b3034  nop
  04b3038  li 3, 2
  04b303c  stb 3, 32(31)
  04b3040  b 0x4b304c
  04b3044  li 3, 3
  04b3048  stb 3, 32(31)
  04b304c  lis 3, 75
  04b3050  lbz 4, 83(31)
  04b3054  addi 3, 3, 11616
  04b3058  cmpwi 4, 0
  04b305c  lfs 31, 4(3)
  04b3060  bf 2, 0x4b3868
  04b3064  lis 29, 151
  04b3068  lfs 2, 20(31)
  04b306c  addic 29, 29, -25376
  04b3070  lfs 1, 16(31)
  04b3074  lis 3, 75
  04b3078  lfs 3, 132(29)
  04b307c  lfs 4, 128(29)
  04b3080  fsubs 3, 2, 3
  04b3084  fsubs 4, 1, 4
  04b3088  addi 3, 3, 11616
  04b308c  fmuls 3, 3, 3
  04b3090  fmadds 3, 4, 4, 3
  04b3094  lfs 4, 8(3)
  04b3098  fsqrts 3, 3
  04b309c  fcmpu 0, 3, 4
  04b30a0  cror 6, 1, 2
  04b30a4  bt 6, 0x4b3314
  04b30a8  lfs 3, 208(29)
  04b30ac  lis 3, 75
  04b30b0  lfs 4, 212(29)
  04b30b4  fsubs 1, 3, 1
  04b30b8  fsubs 2, 4, 2
  04b30bc  addi 3, 3, 11616
  04b30c0  lis 4, 115
  04b30c4  addic 4, 4, 22784
  04b30c8  fabs 5, 1
  04b30cc  fabs 6, 2
  04b30d0  stfs 1, 136(1)
  04b30d4  stfs 2, 140(1)
  04b30d8  lfs 3, 72(31)
  04b30dc  fsubs 1, 5, 6
  04b30e0  stfs 1, 144(1)
  04b30e4  lwz 5, 136(1)
  04b30e8  lfs 4, 12(3)
  04b30ec  lfs 1, 136(1)
  04b30f0  lwz 3, 140(1)
  04b30f4  lfs 2, 140(1)
  04b30f8  lwz 6, 144(1)
  04b30fc  rlwinm 3, 3, 3, 29, 29
  04b3100  fabs 7, 2
  04b3104  lfs 2, 144(1)
  04b3108  fabs 1, 1
  04b310c  rlwimi 3, 6, 2, 30, 30
  04b3110  fsub 8, 2, 4
  04b3114  rlwimi 3, 5, 4, 28, 28
  04b3118  fsub 9, 2, 4
  04b311c  ori 5, 4, 0
  04b3120  rlwimi 5, 3, 2, 26, 28
  04b3124  slwi 3, 3, 2
  04b3128  clrldi 5, 5, 32
  04b312c  fsel 6, 8, 1, 6
  04b3130  lfsx 1, 4, 3
  04b3134  lfs 2, 4(5)
  04b3138  fsel 5, 9, 7, 5
  04b313c  fcmpu 0, 6, 4
  04b3140  bt 1, 0x4b3148
  04b3144  b 0x4b3268
  04b3148  fsubs 7, 5, 6
  04b314c  fadds 5, 5, 6
  04b3150  addic 3, 1, 16
  04b3154  li 6, 2
  04b3158  addic 4, 3, 196
  04b315c  addic 5, 3, 212
  04b3160  mtctr 6
  04b3164  fdivs 5, 7, 5
  04b3168  fmuls 6, 5, 5
  04b316c  stfs 5, 224(1)
  04b3170  stfs 5, 216(1)
  04b3174  stfs 5, 220(1)
  04b3178  stfs 5, 212(1)
  04b317c  lfs 8, 224(1)
  04b3180  lfs 9, 216(1)
  04b3184  lfs 10, 220(1)
  04b3188  fmuls 7, 6, 6
  04b318c  fmuls 9, 9, 6
  04b3190  fmuls 8, 8, 7
  04b3194  fmuls 5, 7, 7
  04b3198  fmuls 7, 10, 7
  04b319c  stfs 9, 216(1)
  04b31a0  fmuls 6, 8, 6
  04b31a4  stfs 7, 220(1)
  04b31a8  stfs 6, 224(1)
  04b31ac  lfs 6, 196(3)
  04b31b0  fmuls 6, 6, 5
  04b31b4  stfs 6, 212(3)
  04b31b8  lfs 6, 4(4)
  04b31bc  addic 3, 3, 8
  04b31c0  addic 4, 4, 8
  04b31c4  fmuls 6, 6, 5
  04b31c8  stfs 6, 4(5)
  04b31cc  addic 5, 5, 8
  04b31d0  bdnz 0x4b31ac
  04b31d4  li 5, 4
  04b31d8  ori 3, 1, 0
  04b31dc  mtctr 5
  04b31e0  lis 4, 115
  04b31e4  addic 5, 3, 212
  04b31e8  addic 4, 4, 22752
  04b31ec  ori 7, 5, 0
  04b31f0  lfs 5, 212(3)
  04b31f4  lfs 6, 0(4)
  04b31f8  fmuls 5, 5, 6
  04b31fc  lfs 6, 4(4)
  04b3200  addic 4, 4, 8
  04b3204  stfs 5, 212(3)
  04b3208  lfs 5, 4(5)
  04b320c  addic 3, 3, 8
  04b3210  fmuls 5, 5, 6
  04b3214  stfs 5, 4(5)
  04b3218  addic 5, 5, 8
  04b321c  bdnz 0x4b31f0
  04b3220  ori 3, 1, 0
  04b3224  mtctr 6
  04b3228  lfs 5, 212(3)
  04b322c  fadds 4, 4, 5
  04b3230  lfs 5, 4(7)
  04b3234  addic 3, 3, 16
  04b3238  lfs 6, 8(7)
  04b323c  lfs 7, 12(7)
  04b3240  addic 7, 7, 16
  04b3244  fadds 4, 4, 5
  04b3248  fadds 4, 4, 6
  04b324c  fadds 4, 4, 7
  04b3250  bdnz 0x4b3228
  04b3254  lis 3, 75
  04b3258  addi 3, 3, 11616
  04b325c  lfs 5, 16(3)
  04b3260  fadds 4, 4, 5
  04b3264  fmadds 4, 4, 1, 2
  04b3268  fmr 1, 3
  04b326c  fmr 2, 4
  04b3270  bl 0x5026a0
  04b3274  nop
  04b3278  lis 3, 75
  04b327c  addi 3, 3, 11616
  04b3280  lfs 2, 20(3)
  04b3284  fcmpu 0, 1, 2
  04b3288  cror 6, 1, 2
  04b328c  bt 6, 0x4b3314
  04b3290  lfs 1, 260(29)
  04b3294  lfs 2, 256(29)
  04b3298  fmuls 1, 1, 1
  04b329c  lfs 3, 264(29)
  04b32a0  lis 3, 75
  04b32a4  addi 3, 3, 11616
  04b32a8  fmadds 1, 2, 2, 1
  04b32ac  lfs 2, 24(3)
  04b32b0  fmadds 1, 3, 3, 1
  04b32b4  fsqrts 1, 1
  04b32b8  fcmpu 0, 1, 2
  04b32bc  cror 6, 0, 2
  04b32c0  bt 6, 0x4b3304
  04b32c4  lis 3, 75
  04b32c8  li 4, 28
  04b32cc  vspltisw 2, -1
  04b32d0  addi 3, 3, 11616
  04b32d4  lis 5, 114
  04b32d8  li 6, -3056
  04b32dc  vslw 2, 2, 2
  04b32e0  <unknown>
  04b32e4  li 3, 280
  04b32e8  vspltw 3, 3, 0
  04b32ec  <unknown>
  04b32f0  vmaddfp 2, 4, 3, 2
  04b32f4  vctsxs 2, 2, 0
  04b32f8  vspltw 2, 2, 0
  04b32fc  stvewx 2, 3, 30
  04b3300  b 0x4b3348
  04b3304  addic 3, 30, 280
  04b3308  bl 0x4fff60
  04b330c  nop
  04b3310  b 0x4b3348
  04b3314  lwz 3, 280(30)
  04b3318  cmpwi 3, 0
  04b331c  bt 2, 0x4b3348
  04b3320  li 3, 0
  04b3324  stw 3, 280(30)
  04b3328  lfs 1, 208(29)
  04b332c  stfs 1, 256(30)
  04b3330  lfs 1, 212(29)
  04b3334  stfs 1, 260(30)
  04b3338  lfs 1, 216(29)
  04b333c  stfs 1, 264(30)
  04b3340  lfs 1, 220(29)
  04b3344  stfs 1, 268(30)
  04b3348  addic 3, 30, 284
  04b334c  bl 0x4fff60
  04b3350  nop
  04b3354  cmpwi 3, 0
  04b3358  bt 2, 0x4b3410
  04b335c  lis 3, 75
  04b3360  addi 28, 3, 11616
  04b3364  lfs 1, 32(28)
  04b3368  lfs 2, 36(28)
  04b336c  bl 0xfcbe8
  04b3370  nop
  04b3374  lis 3, 114
  04b3378  lfs 2, -3056(3)
  04b337c  fmuls 1, 1, 2
  04b3380  bl 0x502758
  04b3384  nop
  04b3388  stw 3, 284(30)
  04b338c  lfs 1, 40(28)
  04b3390  lfs 30, 72(31)
  04b3394  lfs 2, 44(28)
  04b3398  bl 0xfcbe8
  04b339c  nop
  04b33a0  lfs 29, 48(28)
  04b33a4  fmuls 2, 1, 29
  04b33a8  fmr 1, 30
  04b33ac  bl 0x502578
  04b33b0  nop
  04b33b4  fmr 30, 1
  04b33b8  lfs 1, 12(28)
  04b33bc  lfs 2, 0(28)
  04b33c0  bl 0xfcbe8
  04b33c4  nop
  04b33c8  fmuls 3, 1, 29
  04b33cc  addic 3, 30, 256
  04b33d0  lfs 1, 52(28)
  04b33d4  fmr 2, 30
  04b33d8  bl 0xfe610
  04b33dc  nop
  04b33e0  lfs 1, 256(30)
  04b33e4  lfs 2, 16(31)
  04b33e8  fadds 1, 1, 2
  04b33ec  lfs 2, 260(30)
  04b33f0  lfs 3, 264(30)
  04b33f4  stfs 1, 256(30)
  04b33f8  lfs 1, 20(31)
  04b33fc  fadds 1, 2, 1
  04b3400  stfs 1, 260(30)
  04b3404  lfs 1, 24(31)
  04b3408  fadds 1, 3, 1
  04b340c  stfs 1, 264(30)
  04b3410  lwz 3, 280(30)
  04b3414  cmpwi 3, 0
  04b3418  bt 2, 0x4b3438
  04b341c  lis 3, 75
  04b3420  lfs 30, 208(29)
  04b3424  addi 3, 3, 11616
  04b3428  lfs 29, 212(29)
  04b342c  lfs 28, 216(29)
  04b3430  lfs 31, 56(3)
  04b3434  b 0x4b3444
  04b3438  lfs 30, 256(30)
  04b343c  lfs 29, 260(30)
  04b3440  lfs 28, 264(30)
  04b3444  lfs 1, 16(31)
  04b3448  lfs 2, 20(31)
  04b344c  lis 3, 75
  04b3450  fsubs 30, 30, 1
  04b3454  fsubs 29, 29, 2
  04b3458  addi 3, 3, 11616
  04b345c  lis 29, 115
  04b3460  addic 29, 29, 22784
  04b3464  lfs 1, 60(3)
  04b3468  fabs 3, 30
  04b346c  fabs 4, 29
  04b3470  stfs 30, 124(1)
  04b3474  stfs 29, 128(1)
  04b3478  lfs 5, 24(31)
  04b347c  fadds 1, 5, 1
  04b3480  fsubs 2, 3, 4
  04b3484  fsubs 28, 28, 1
  04b3488  stfs 2, 132(1)
  04b348c  lwz 4, 124(1)
  04b3490  lfs 27, 12(3)
  04b3494  lfs 2, 124(1)
  04b3498  lwz 3, 128(1)
  04b349c  lfs 5, 128(1)
  04b34a0  lwz 5, 132(1)
  04b34a4  rlwinm 3, 3, 3, 29, 29
  04b34a8  lfs 1, 132(1)
  04b34ac  fabs 2, 2
  04b34b0  rlwimi 3, 5, 2, 30, 30
  04b34b4  fabs 5, 5
  04b34b8  fsub 6, 1, 27
  04b34bc  fsub 7, 1, 27
  04b34c0  rlwimi 3, 4, 4, 28, 28
  04b34c4  ori 4, 29, 0
  04b34c8  rlwimi 4, 3, 2, 26, 28
  04b34cc  slwi 3, 3, 2
  04b34d0  clrldi 4, 4, 32
  04b34d4  fsel 4, 6, 2, 4
  04b34d8  lfsx 1, 29, 3
  04b34dc  fsel 3, 7, 5, 3
  04b34e0  lfs 2, 4(4)
  04b34e4  fcmpu 0, 4, 27
  04b34e8  bt 1, 0x4b34f4
  04b34ec  fmr 1, 27
  04b34f0  b 0x4b3618
  04b34f4  fsubs 5, 3, 4
  04b34f8  fadds 3, 3, 4
  04b34fc  addic 3, 1, 16
  04b3500  li 6, 2
  04b3504  addic 5, 3, 180
  04b3508  addic 4, 3, 164
  04b350c  mtctr 6
  04b3510  fdivs 3, 5, 3
  04b3514  fmuls 4, 3, 3
  04b3518  stfs 3, 192(1)
  04b351c  stfs 3, 184(1)
  04b3520  stfs 3, 188(1)
  04b3524  stfs 3, 180(1)
  04b3528  lfs 6, 192(1)
  04b352c  lfs 7, 184(1)
  04b3530  lfs 8, 188(1)
  04b3534  fmuls 5, 4, 4
  04b3538  fmuls 7, 7, 4
  04b353c  fmuls 6, 6, 5
  04b3540  fmuls 3, 5, 5
  04b3544  fmuls 5, 8, 5
  04b3548  stfs 7, 184(1)
  04b354c  fmuls 4, 6, 4
  04b3550  stfs 5, 188(1)
  04b3554  stfs 4, 192(1)
  04b3558  lfs 4, 164(3)
  04b355c  fmuls 4, 4, 3
  04b3560  stfs 4, 180(3)
  04b3564  lfs 4, 4(4)
  04b3568  addic 4, 4, 8
  04b356c  fmuls 4, 4, 3
  04b3570  addic 3, 3, 8
  04b3574  stfs 4, 4(5)
  04b3578  addic 5, 5, 8
  04b357c  bdnz 0x4b3558
  04b3580  li 5, 4
  04b3584  ori 3, 1, 0
  04b3588  mtctr 5
  04b358c  lis 4, 115
  04b3590  addic 5, 3, 180
  04b3594  addic 4, 4, 22752
  04b3598  ori 7, 5, 0
  04b359c  lfs 3, 180(3)
  04b35a0  lfs 4, 0(4)
  04b35a4  fmuls 3, 3, 4
  04b35a8  lfs 4, 4(4)
  04b35ac  addic 4, 4, 8
  04b35b0  stfs 3, 180(3)
  04b35b4  lfs 3, 4(5)
  04b35b8  addic 3, 3, 8
  04b35bc  fmuls 3, 3, 4
  04b35c0  stfs 3, 4(5)
  04b35c4  addic 5, 5, 8
  04b35c8  bdnz 0x4b359c
  04b35cc  ori 3, 1, 0
  04b35d0  fmr 3, 27
  04b35d4  mtctr 6
  04b35d8  lfs 4, 180(3)
  04b35dc  fadds 3, 3, 4
  04b35e0  lfs 4, 4(7)
  04b35e4  addic 3, 3, 16
  04b35e8  lfs 5, 8(7)
  04b35ec  lfs 6, 12(7)
  04b35f0  addic 7, 7, 16
  04b35f4  fadds 3, 3, 4
  04b35f8  fadds 3, 3, 5
  04b35fc  fadds 3, 3, 6
  04b3600  bdnz 0x4b35d8
  04b3604  lis 3, 75
  04b3608  addi 3, 3, 11616
  04b360c  lfs 4, 16(3)
  04b3610  fadds 3, 3, 4
  04b3614  fmadds 1, 3, 1, 2
  04b3618  lfs 2, 72(31)
  04b361c  bl 0x5025e0
  04b3620  nop
  04b3624  fmuls 2, 29, 29
  04b3628  stfs 28, 116(1)
  04b362c  fabs 4, 28
  04b3630  fmadds 2, 30, 30, 2
  04b3634  fsqrts 2, 2
  04b3638  lwz 3, 116(1)
  04b363c  lfs 3, 116(1)
  04b3640  rlwinm 3, 3, 3, 29, 29
  04b3644  fabs 3, 3
  04b3648  fabs 5, 2
  04b364c  stfs 2, 112(1)
  04b3650  fsubs 2, 5, 4
  04b3654  stfs 2, 120(1)
  04b3658  lwz 4, 112(1)
  04b365c  lfs 2, 112(1)
  04b3660  lwz 5, 120(1)
  04b3664  lfs 6, 120(1)
  04b3668  fabs 2, 2
  04b366c  rlwimi 3, 5, 2, 30, 30
  04b3670  fsub 7, 6, 27
  04b3674  fsub 6, 6, 27
  04b3678  rlwimi 3, 4, 4, 28, 28
  04b367c  ori 4, 29, 0
  04b3680  rlwimi 4, 3, 2, 26, 28
  04b3684  slwi 3, 3, 2
  04b3688  clrldi 4, 4, 32
  04b368c  fsel 4, 7, 2, 4
  04b3690  lfsx 30, 29, 3
  04b3694  fsel 3, 6, 3, 5
  04b3698  lfs 2, 4(4)
  04b369c  fcmpu 0, 4, 27
  04b36a0  bt 1, 0x4b36a8
  04b36a4  b 0x4b37c8
  04b36a8  fsubs 5, 3, 4
  04b36ac  fadds 3, 3, 4
  04b36b0  addic 3, 1, 16
  04b36b4  li 6, 2
  04b36b8  addic 4, 3, 132
  04b36bc  addic 5, 3, 148
  04b36c0  mtctr 6
  04b36c4  fdivs 3, 5, 3
  04b36c8  fmuls 4, 3, 3
  04b36cc  stfs 3, 160(1)
  04b36d0  stfs 3, 152(1)
  04b36d4  stfs 3, 156(1)
  04b36d8  stfs 3, 148(1)
  04b36dc  lfs 6, 160(1)
  04b36e0  lfs 7, 152(1)
  04b36e4  lfs 8, 156(1)
  04b36e8  fmuls 5, 4, 4
  04b36ec  fmuls 7, 7, 4
  04b36f0  fmuls 6, 6, 5
  04b36f4  fmuls 3, 5, 5
  04b36f8  fmuls 5, 8, 5
  04b36fc  stfs 7, 152(1)
  04b3700  fmuls 4, 6, 4
  04b3704  stfs 5, 156(1)
  04b3708  stfs 4, 160(1)
  04b370c  lfs 4, 132(3)
  04b3710  fmuls 4, 4, 3
  04b3714  stfs 4, 148(3)
  04b3718  lfs 4, 4(4)
  04b371c  addic 3, 3, 8
  04b3720  addic 4, 4, 8
  04b3724  fmuls 4, 4, 3
  04b3728  stfs 4, 4(5)
  04b372c  addic 5, 5, 8
  04b3730  bdnz 0x4b370c
  04b3734  li 5, 4
  04b3738  ori 3, 1, 0
  04b373c  mtctr 5
  04b3740  lis 4, 115
  04b3744  addic 5, 3, 148
  04b3748  addic 4, 4, 22752
  04b374c  ori 7, 5, 0
  04b3750  lfs 3, 148(3)
  04b3754  lfs 4, 0(4)
  04b3758  fmuls 3, 3, 4
  04b375c  lfs 4, 4(4)
  04b3760  addic 4, 4, 8
  04b3764  stfs 3, 148(3)
  04b3768  lfs 3, 4(5)
  04b376c  addic 3, 3, 8
  04b3770  fmuls 3, 3, 4
  04b3774  stfs 3, 4(5)
  04b3778  addic 5, 5, 8
  04b377c  bdnz 0x4b3750
  04b3780  ori 3, 1, 0
  04b3784  mtctr 6
  04b3788  lfs 3, 148(3)
  04b378c  lfs 4, 4(7)
  04b3790  fadds 3, 27, 3
  04b3794  lfs 5, 8(7)
  04b3798  lfs 27, 12(7)
  04b379c  addic 3, 3, 16
  04b37a0  addic 7, 7, 16
  04b37a4  fadds 3, 3, 4
  04b37a8  fadds 3, 3, 5
  04b37ac  fadds 27, 3, 27
  04b37b0  bdnz 0x4b3788
  04b37b4  lis 3, 75
  04b37b8  addi 3, 3, 11616
  04b37bc  lfs 3, 16(3)
  04b37c0  fadds 27, 27, 3
  04b37c4  fmadds 27, 27, 30, 2
  04b37c8  lis 3, 75
  04b37cc  fneg 27, 27
  04b37d0  addi 3, 3, 11616
  04b37d4  lfs 2, 20(3)
  04b37d8  fcmpu 0, 1, 2
  04b37dc  cror 6, 0, 2
  04b37e0  bt 6, 0x4b37ec
  04b37e4  fmr 1, 2
  04b37e8  b 0x4b3808
  04b37ec  lis 3, 75
  04b37f0  addi 3, 3, 11616
  04b37f4  lfs 2, 64(3)
  04b37f8  fcmpu 0, 1, 2
  04b37fc  cror 6, 1, 2
  04b3800  bt 6, 0x4b3808
  04b3804  fmr 1, 2
  04b3808  lis 3, 75
  04b380c  addi 3, 3, 11616
  04b3810  lfs 2, 68(3)
  04b3814  fcmpu 0, 27, 2
  04b3818  cror 6, 0, 2
  04b381c  bt 6, 0x4b3828
  04b3820  fmr 27, 2
  04b3824  b 0x4b3844
  04b3828  lis 3, 75
  04b382c  addi 3, 3, 11616
  04b3830  lfs 2, 72(3)
  04b3834  fcmpu 0, 27, 2
  04b3838  cror 6, 1, 2
  04b383c  bt 6, 0x4b3844
  04b3840  fmr 27, 2
  04b3844  lis 3, 75
  04b3848  addi 3, 3, 11616
  04b384c  lfs 2, 76(3)
  04b3850  fmuls 2, 1, 2
  04b3854  stfs 2, 104(30)
  04b3858  lfs 2, 80(3)
  04b385c  stfs 27, 100(30)
  04b3860  fmuls 1, 1, 2
  04b3864  stfs 1, 232(30)
  04b3868  lis 3, 151
  04b386c  lbz 3, -16268(3)
  04b3870  cmpwi 3, 0
  04b3874  bt 2, 0x4b3880
  04b3878  lis 3, 16432
  04b387c  stw 3, 112(30)
  04b3880  lis 3, 75
  04b3884  lis 29, 114
  04b3888  addi 4, 3, 11616
  04b388c  ori 3, 31, 0
  04b3890  li 5, 0
  04b3894  lfs 30, 84(4)
  04b3898  lfs 2, -3060(29)
  04b389c  ori 4, 30, 0
  04b38a0  fmuls 1, 2, 31
  04b38a4  fmuls 2, 2, 30
  04b38a8  bl 0x1167c8
  04b38ac  nop
  04b38b0  lfs 2, -3060(29)
  04b38b4  addic 4, 30, 128
  04b38b8  ori 3, 31, 0
  04b38bc  fmuls 1, 2, 31
  04b38c0  li 5, 1
  04b38c4  fmuls 2, 2, 30
  04b38c8  bl 0x1167c8
  04b38cc  nop
  04b38d0  ld 0, 352(1)
  04b38d4  mtlr 0
  04b38d8  lfd 27, 296(1)
  04b38dc  lfd 28, 304(1)
  04b38e0  lfd 29, 312(1)
  04b38e4  lfd 30, 320(1)
  04b38e8  lfd 31, 328(1)
  04b38ec  ld 26, 248(1)
  04b38f0  ld 27, 256(1)
  04b38f4  ld 28, 264(1)
  04b38f8  ld 29, 272(1)
  04b38fc  ld 30, 280(1)
  04b3900  ld 31, 288(1)
  04b3904  addi 1, 1, 336
  04b3908  blr
