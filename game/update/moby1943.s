# game/update/moby1943.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1943_002e2e70:   # 0x2e2e70, 0x14 bytes
  02e2e70  lis 3, 127
  02e2e74  lis 4, 1
  02e2e78  addic 3, 3, 16176
  02e2e7c  stw 4, 72(3)
  02e2e80  blr

M1943_002e2e98:   # 0x2e2e98, 0x21c bytes
  02e2e98  stdu 1, -64(1)
  02e2e9c  stfd 31, 56(1)
  02e2ea0  cmpwi 3, 0
  02e2ea4  li 8, 0
  02e2ea8  bf 1, 0x2e30a8
  02e2eac  lis 6, 46
  02e2eb0  ori 9, 7, 0
  02e2eb4  addi 10, 6, 11912
  02e2eb8  lis 7, 149
  02e2ebc  ori 6, 5, 0
  02e2ec0  ori 5, 4, 0
  02e2ec4  addic 7, 7, 5056
  02e2ec8  lfs 4, 0(10)
  02e2ecc  ori 4, 9, 0
  02e2ed0  lfs 3, 4(10)
  02e2ed4  lfs 2, 8(10)
  02e2ed8  lfs 1, 12(10)
  02e2edc  lfs 9, 4(6)
  02e2ee0  lfs 5, 324(7)
  02e2ee4  lfs 10, 0(6)
  02e2ee8  fsubs 9, 9, 5
  02e2eec  lfs 5, 320(7)
  02e2ef0  lfs 8, 8(6)
  02e2ef4  fsubs 10, 10, 5
  02e2ef8  lfs 5, 328(7)
  02e2efc  fsubs 8, 8, 5
  02e2f00  fmr 7, 4
  02e2f04  fmuls 5, 9, 9
  02e2f08  fmr 6, 7
  02e2f0c  fmadds 11, 10, 10, 5
  02e2f10  fmr 5, 6
  02e2f14  fmadds 11, 8, 8, 11
  02e2f18  fsqrts 12, 11
  02e2f1c  fcmpu 0, 12, 5
  02e2f20  bt 2, 0x2e2f64
  02e2f24  frsqrte 5, 11
  02e2f28  fmuls 6, 11, 5
  02e2f2c  fmuls 7, 5, 3
  02e2f30  fnmsubs 6, 6, 5, 2
  02e2f34  fmadds 5, 6, 7, 5
  02e2f38  fmuls 6, 11, 5
  02e2f3c  fmuls 7, 5, 3
  02e2f40  fnmsubs 6, 6, 5, 2
  02e2f44  fmadds 5, 6, 7, 5
  02e2f48  fmuls 6, 11, 5
  02e2f4c  fmuls 7, 5, 3
  02e2f50  fnmsubs 6, 6, 5, 2
  02e2f54  fmadds 5, 6, 7, 5
  02e2f58  fmuls 7, 10, 5
  02e2f5c  fmuls 6, 9, 5
  02e2f60  fmuls 5, 8, 5
  02e2f64  lfs 13, 4(5)
  02e2f68  lfs 0, 0(5)
  02e2f6c  fmuls 8, 13, 13
  02e2f70  lfs 12, 8(5)
  02e2f74  fmr 10, 4
  02e2f78  fmadds 11, 0, 0, 8
  02e2f7c  fmr 9, 10
  02e2f80  fmadds 11, 12, 12, 11
  02e2f84  fmr 8, 9
  02e2f88  fsqrts 31, 11
  02e2f8c  fcmpu 0, 31, 8
  02e2f90  bt 2, 0x2e2fd4
  02e2f94  frsqrte 8, 11
  02e2f98  fmuls 9, 11, 8
  02e2f9c  fmuls 10, 8, 3
  02e2fa0  fnmsubs 9, 9, 8, 2
  02e2fa4  fmadds 8, 9, 10, 8
  02e2fa8  fmuls 9, 11, 8
  02e2fac  fmuls 10, 8, 3
  02e2fb0  fnmsubs 9, 9, 8, 2
  02e2fb4  fmadds 8, 9, 10, 8
  02e2fb8  fmuls 9, 11, 8
  02e2fbc  fmuls 10, 8, 3
  02e2fc0  fnmsubs 9, 9, 8, 2
  02e2fc4  fmadds 8, 9, 10, 8
  02e2fc8  fmuls 10, 8, 0
  02e2fcc  fmuls 9, 8, 13
  02e2fd0  fmuls 8, 8, 12
  02e2fd4  fmr 11, 5
  02e2fd8  fmuls 5, 6, 9
  02e2fdc  fmadds 5, 7, 10, 5
  02e2fe0  fmadds 5, 11, 8, 5
  02e2fe4  fmuls 12, 5, 1
  02e2fe8  fnmsubs 5, 12, 9, 6
  02e2fec  fnmsubs 6, 12, 10, 7
  02e2ff0  fnmsubs 7, 12, 8, 11
  02e2ff4  fmr 11, 4
  02e2ff8  fmuls 8, 5, 5
  02e2ffc  fmr 10, 11
  02e3000  fmadds 8, 6, 6, 8
  02e3004  fmr 9, 10
  02e3008  fmadds 8, 7, 7, 8
  02e300c  fsqrts 12, 8
  02e3010  fcmpu 0, 12, 9
  02e3014  bt 2, 0x2e3058
  02e3018  frsqrte 9, 8
  02e301c  fmuls 10, 8, 9
  02e3020  fmuls 11, 9, 3
  02e3024  fnmsubs 10, 10, 9, 2
  02e3028  fmadds 9, 10, 11, 9
  02e302c  fmuls 10, 8, 9
  02e3030  fmuls 11, 9, 3
  02e3034  fnmsubs 10, 10, 9, 2
  02e3038  fmadds 9, 10, 11, 9
  02e303c  fmuls 8, 8, 9
  02e3040  fmuls 10, 9, 3
  02e3044  fnmsubs 8, 8, 9, 2
  02e3048  fmadds 9, 8, 10, 9
  02e304c  fmuls 11, 9, 6
  02e3050  fmuls 10, 9, 5
  02e3054  fmuls 9, 9, 7
  02e3058  fmuls 5, 10, 10
  02e305c  fadds 6, 9, 2
  02e3060  addic 8, 8, 1
  02e3064  addic 6, 6, 12
  02e3068  fmadds 5, 11, 11, 5
  02e306c  cmpw 8, 3
  02e3070  addic 5, 5, 12
  02e3074  fmadds 5, 6, 6, 5
  02e3078  fsqrts 5, 5
  02e307c  fmuls 5, 5, 1
  02e3080  fdivs 6, 11, 5
  02e3084  fdivs 5, 10, 5
  02e3088  fadds 6, 6, 3
  02e308c  fmuls 6, 6, 1
  02e3090  fadds 5, 5, 3
  02e3094  stfs 6, 0(4)
  02e3098  fmuls 5, 5, 1
  02e309c  stfs 5, 4(4)
  02e30a0  addic 4, 4, 8
  02e30a4  bt 0, 0x2e2edc
  02e30a8  lfd 31, 56(1)
  02e30ac  addi 1, 1, 64
  02e30b0  blr

M1943_002e30b8:   # 0x2e30b8, 0x1dc bytes
  02e30b8  stdu 1, -192(1)
  02e30bc  mflr 0
  02e30c0  std 0, 208(1)
  02e30c4  stfd 31, 184(1)
  02e30c8  lis 4, 46
  02e30cc  std 31, 176(1)
  02e30d0  li 3, 41
  02e30d4  std 30, 168(1)
  02e30d8  std 29, 160(1)
  02e30dc  std 28, 152(1)
  02e30e0  std 27, 144(1)
  02e30e4  std 26, 136(1)
  02e30e8  std 25, 128(1)
  02e30ec  std 24, 120(1)
  02e30f0  addi 31, 4, 12468
  02e30f4  bl 0x685c4
  02e30f8  nop
  02e30fc  ori 4, 3, 0
  02e3100  li 3, 24
  02e3104  bl 0x174f80
  02e3108  nop
  02e310c  li 3, 0
  02e3110  li 4, 1
  02e3114  li 5, 2
  02e3118  li 6, 1
  02e311c  li 7, 64
  02e3120  bl 0x502ea8
  02e3124  nop
  02e3128  ori 4, 3, 0
  02e312c  li 3, 3
  02e3130  bl 0x174f80
  02e3134  nop
  02e3138  li 3, 0
  02e313c  li 4, 0
  02e3140  li 5, 0
  02e3144  li 6, 0
  02e3148  li 7, 0
  02e314c  li 8, 0
  02e3150  bl 0x502f08
  02e3154  nop
  02e3158  ori 4, 3, 0
  02e315c  li 3, 6
  02e3160  bl 0x174f80
  02e3164  nop
  02e3168  li 3, 0
  02e316c  lis 9, 0
  02e3170  li 4, 0
  02e3174  li 5, 1
  02e3178  li 6, 1
  02e317c  li 7, 1
  02e3180  li 8, 0
  02e3184  ori 9, 9, 65424
  02e3188  bl 0x502fd4
  02e318c  nop
  02e3190  ori 4, 3, 0
  02e3194  li 3, 26
  02e3198  bl 0x174f80
  02e319c  nop
  02e31a0  bl 0x71170
  02e31a4  nop
  02e31a8  lis 3, 268
  02e31ac  lis 28, 127
  02e31b0  lfs 31, 0(31)
  02e31b4  lis 30, 127
  02e31b8  lis 26, 127
  02e31bc  lis 29, 127
  02e31c0  lis 27, 127
  02e31c4  lis 25, 268
  02e31c8  li 24, 0
  02e31cc  addic 26, 26, 27936
  02e31d0  addic 28, 28, 16288
  02e31d4  addic 30, 30, 27948
  02e31d8  addic 27, 27, 27924
  02e31dc  addic 31, 3, -25584
  02e31e0  addic 29, 29, 27912
  02e31e4  addic 25, 25, -25536
  02e31e8  ori 3, 31, 0
  02e31ec  fmr 1, 31
  02e31f0  bl 0x502910
  02e31f4  nop
  02e31f8  cmpwi 3, -1
  02e31fc  bt 2, 0x2e323c
  02e3200  lwz 3, 0(28)
  02e3204  lwz 4, 0(26)
  02e3208  ori 7, 25, 0
  02e320c  lwz 5, 0(29)
  02e3210  extsw 3, 3
  02e3214  lwz 6, 0(27)
  02e3218  bl 0x2e2e98
  02e321c  lwz 3, 0(28)
  02e3220  lwz 4, 0(29)
  02e3224  ori 6, 25, 0
  02e3228  li 7, 9
  02e322c  lwz 5, 0(30)
  02e3230  extsw 3, 3
  02e3234  bl 0x74604
  02e3238  nop
  02e323c  addic 24, 24, 1
  02e3240  addic 31, 31, 16
  02e3244  cmpwi 24, 3
  02e3248  addic 26, 26, 4
  02e324c  addic 27, 27, 4
  02e3250  addic 28, 28, 4
  02e3254  addic 29, 29, 4
  02e3258  addic 30, 30, 4
  02e325c  bt 0, 0x2e31e8
  02e3260  ld 0, 208(1)
  02e3264  mtlr 0
  02e3268  lfd 31, 184(1)
  02e326c  ld 24, 120(1)
  02e3270  ld 25, 128(1)
  02e3274  ld 26, 136(1)
  02e3278  ld 27, 144(1)
  02e327c  ld 28, 152(1)
  02e3280  ld 29, 160(1)
  02e3284  ld 30, 168(1)
  02e3288  ld 31, 176(1)
  02e328c  addi 1, 1, 192
  02e3290  blr

UpdateMoby_1943:   # 0x2e32a0, 0x1e4 bytes
  02e32a0  stdu 1, -160(1)
  02e32a4  mflr 0
  02e32a8  std 0, 176(1)
  02e32ac  stfd 30, 144(1)
  02e32b0  stfd 31, 152(1)
  02e32b4  lbz 5, 32(3)
  02e32b8  lis 4, 46
  02e32bc  cmpwi 5, 0
  02e32c0  addi 4, 4, 12948
  02e32c4  cmpwi 1, 5, 1
  02e32c8  std 31, 136(1)
  02e32cc  std 30, 128(1)
  02e32d0  std 29, 120(1)
  02e32d4  cmpwi 6, 5, -1
  02e32d8  bt 1, 0x2e32e4
  02e32dc  bf 25, 0x2e3460
  02e32e0  b 0x2e32ec
  02e32e4  bf 5, 0x2e344c
  02e32e8  b 0x2e3460
  02e32ec  li 11, 0
  02e32f0  lfs 4, 0(4)
  02e32f4  lis 5, 268
  02e32f8  ori 9, 11, 0
  02e32fc  lis 6, 127
  02e3300  lis 7, 127
  02e3304  addic 6, 6, 16288
  02e3308  ori 8, 9, 0
  02e330c  addic 7, 7, 27912
  02e3310  addic 5, 5, -25584
  02e3314  lfs 6, 4(4)
  02e3318  lfs 1, 8(4)
  02e331c  fmr 5, 6
  02e3320  fmr 2, 1
  02e3324  lwz 10, 0(6)
  02e3328  cmpwi 1, 10, 0
  02e332c  fmr 7, 5
  02e3330  fmr 3, 2
  02e3334  bf 5, 0x2e3398
  02e3338  ori 31, 9, 0
  02e333c  ori 12, 10, 0
  02e3340  lwzx 30, 7, 8
  02e3344  addic 12, 12, -1
  02e3348  addc 29, 30, 31
  02e334c  cmpwi 12, 0
  02e3350  clrldi 29, 29, 32
  02e3354  lfsx 8, 30, 31
  02e3358  addic 31, 31, 12
  02e335c  fsub 9, 5, 8
  02e3360  fsub 10, 8, 3
  02e3364  lfs 11, 4(29)
  02e3368  lfs 12, 8(29)
  02e336c  fsub 13, 6, 11
  02e3370  fsub 0, 7, 12
  02e3374  fsub 31, 11, 2
  02e3378  fsub 30, 12, 1
  02e337c  fsel 5, 9, 5, 8
  02e3380  fsel 3, 10, 3, 8
  02e3384  fsel 6, 13, 6, 11
  02e3388  fsel 7, 0, 7, 12
  02e338c  fsel 2, 31, 2, 11
  02e3390  fsel 1, 30, 1, 12
  02e3394  bt 1, 0x2e3340
  02e3398  fadds 3, 5, 3
  02e339c  fadds 2, 6, 2
  02e33a0  stw 9, 12(5)
  02e33a4  fadds 1, 7, 1
  02e33a8  ori 31, 9, 0
  02e33ac  fmuls 3, 3, 4
  02e33b0  fmuls 2, 2, 4
  02e33b4  fmuls 1, 1, 4
  02e33b8  stfs 3, 0(5)
  02e33bc  stfs 2, 4(5)
  02e33c0  stfs 1, 8(5)
  02e33c4  bf 5, 0x2e3428
  02e33c8  ori 12, 9, 0
  02e33cc  lfs 5, 12(5)
  02e33d0  lwzx 30, 7, 8
  02e33d4  addc 29, 30, 12
  02e33d8  clrldi 29, 29, 32
  02e33dc  lfsx 6, 30, 12
  02e33e0  fsubs 6, 6, 3
  02e33e4  lfs 7, 4(29)
  02e33e8  lfs 8, 8(29)
  02e33ec  fsubs 7, 7, 2
  02e33f0  fsubs 8, 8, 1
  02e33f4  fmuls 7, 7, 7
  02e33f8  fmadds 6, 6, 6, 7
  02e33fc  fmadds 6, 8, 8, 6
  02e3400  fsqrts 6, 6
  02e3404  fcmpu 0, 6, 5
  02e3408  cror 6, 0, 2
  02e340c  bt 6, 0x2e3418
  02e3410  fmr 5, 6
  02e3414  stfs 6, 12(5)
  02e3418  addic 31, 31, 1
  02e341c  addic 12, 12, 12
  02e3420  cmpw 31, 10
  02e3424  bt 0, 0x2e33d0
  02e3428  addic 11, 11, 1
  02e342c  addic 6, 6, 4
  02e3430  cmpwi 11, 3
  02e3434  addic 8, 8, 4
  02e3438  addic 5, 5, 16
  02e343c  bt 0, 0x2e3314
  02e3440  li 4, 1
  02e3444  stb 4, 32(3)
  02e3448  b 0x2e3460
  02e344c  lis 5, 113
  02e3450  ori 4, 3, 0
  02e3454  addic 3, 5, -18944
  02e3458  bl 0x6d720
  02e345c  nop
  02e3460  ld 0, 176(1)
  02e3464  mtlr 0
  02e3468  lfd 30, 144(1)
  02e346c  lfd 31, 152(1)
  02e3470  ld 29, 120(1)
  02e3474  ld 30, 128(1)
  02e3478  ld 31, 136(1)
  02e347c  addi 1, 1, 160
  02e3480  blr
