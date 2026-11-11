# game/update/moby623.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M623_003e30b0:   # 0x3e30b0, 0x29c bytes
  03e30b0  stdu 1, -96(1)
  03e30b4  stfd 26, 48(1)
  03e30b8  stfd 27, 56(1)
  03e30bc  stfd 28, 64(1)
  03e30c0  stfd 29, 72(1)
  03e30c4  stfd 30, 80(1)
  03e30c8  stfd 31, 88(1)
  03e30cc  ori 8, 5, 0
  03e30d0  lis 4, 165
  03e30d4  sldi 3, 3, 2
  03e30d8  addic 4, 4, 7136
  03e30dc  extsw 3, 3
  03e30e0  lis 5, 62
  03e30e4  lfs 12, 0(8)
  03e30e8  addi 9, 5, 12448
  03e30ec  lfs 11, 4(8)
  03e30f0  li 5, 0
  03e30f4  lwzx 4, 4, 3
  03e30f8  ori 7, 5, 0
  03e30fc  ori 3, 4, 0
  03e3100  lfs 13, 0(9)
  03e3104  lfs 10, 8(8)
  03e3108  lfs 9, 12(8)
  03e310c  lwz 8, 0(3)
  03e3110  addic 8, 8, -1
  03e3114  cmpwi 8, 0
  03e3118  bf 1, 0x3e3328
  03e311c  lis 9, 62
  03e3120  li 8, 1
  03e3124  addi 9, 9, 12448
  03e3128  ori 10, 5, 0
  03e312c  lfs 4, 4(9)
  03e3130  lfs 3, 8(9)
  03e3134  lfs 2, 12(9)
  03e3138  addc 9, 3, 10
  03e313c  clrldi 9, 9, 32
  03e3140  lwz 11, 28(9)
  03e3144  cmpwi 11, 0
  03e3148  bf 2, 0x3e315c
  03e314c  lwz 11, 44(9)
  03e3150  cmpwi 11, 0
  03e3154  bt 2, 0x3e32f8
  03e3158  ori 3, 4, 0
  03e315c  lfs 6, 20(9)
  03e3160  lfs 28, 36(9)
  03e3164  lfs 8, 16(9)
  03e3168  fsubs 28, 28, 6
  03e316c  lfs 27, 32(9)
  03e3170  fsubs 27, 27, 8
  03e3174  fmr 31, 4
  03e3178  fsubs 7, 12, 8
  03e317c  fsubs 5, 11, 6
  03e3180  fmuls 29, 28, 28
  03e3184  fmr 0, 31
  03e3188  fmadds 29, 27, 27, 29
  03e318c  fsqrts 30, 29
  03e3190  fcmpu 0, 30, 0
  03e3194  bt 2, 0x3e31d4
  03e3198  frsqrte 0, 29
  03e319c  fmuls 31, 29, 0
  03e31a0  fmuls 26, 0, 3
  03e31a4  fnmsubs 31, 31, 0, 2
  03e31a8  fmadds 0, 31, 26, 0
  03e31ac  fmuls 31, 29, 0
  03e31b0  fmuls 26, 0, 3
  03e31b4  fnmsubs 31, 31, 0, 2
  03e31b8  fmadds 0, 31, 26, 0
  03e31bc  fmuls 31, 29, 0
  03e31c0  fmuls 29, 0, 3
  03e31c4  fnmsubs 31, 31, 0, 2
  03e31c8  fmadds 0, 31, 29, 0
  03e31cc  fmuls 31, 0, 27
  03e31d0  fmuls 0, 0, 28
  03e31d4  fmuls 29, 7, 0
  03e31d8  fmsubs 29, 5, 31, 29
  03e31dc  fabs 29, 29
  03e31e0  fsub 28, 29, 13
  03e31e4  fcmpu 0, 29, 1
  03e31e8  fsel 29, 28, 13, 29
  03e31ec  fmr 13, 29
  03e31f0  bt 1, 0x3e32f8
  03e31f4  fmuls 13, 5, 0
  03e31f8  fmadds 13, 7, 31, 13
  03e31fc  fcmpu 0, 13, 30
  03e3200  fcmpu 1, 13, 4
  03e3204  bt 1, 0x3e320c
  03e3208  bf 4, 0x3e3268
  03e320c  fmuls 13, 5, 5
  03e3210  fmadds 0, 7, 7, 13
  03e3214  fmr 13, 29
  03e3218  fsqrts 0, 0
  03e321c  fcmpu 0, 0, 1
  03e3220  cror 6, 1, 2
  03e3224  bt 6, 0x3e32f8
  03e3228  fdivs 11, 1, 0
  03e322c  ori 7, 8, 0
  03e3230  fsub 12, 4, 0
  03e3234  fsub 31, 4, 0
  03e3238  fsub 30, 0, 4
  03e323c  fsub 0, 0, 4
  03e3240  fmr 13, 29
  03e3244  fmuls 5, 5, 11
  03e3248  fmuls 7, 7, 11
  03e324c  fsel 11, 12, 4, 5
  03e3250  fsel 12, 31, 4, 7
  03e3254  fsel 11, 30, 11, 5
  03e3258  fsel 12, 0, 12, 7
  03e325c  fadds 11, 11, 6
  03e3260  fadds 12, 12, 8
  03e3264  b 0x3e32f8
  03e3268  fmuls 11, 0, 0
  03e326c  fmadds 11, 31, 31, 11
  03e3270  fsqrts 11, 11
  03e3274  ori 7, 8, 0
  03e3278  fdivs 12, 13, 11
  03e327c  fsub 30, 4, 11
  03e3280  fsub 28, 11, 4
  03e3284  fsub 27, 4, 11
  03e3288  fsub 11, 11, 4
  03e328c  fmr 13, 29
  03e3290  fmuls 0, 12, 0
  03e3294  fmuls 12, 12, 31
  03e3298  fsel 31, 30, 4, 0
  03e329c  fsel 30, 27, 4, 12
  03e32a0  fsel 0, 28, 31, 0
  03e32a4  fsel 11, 11, 30, 12
  03e32a8  fsubs 5, 5, 0
  03e32ac  fsubs 7, 7, 11
  03e32b0  fmuls 12, 5, 5
  03e32b4  fmadds 12, 7, 7, 12
  03e32b8  fsqrts 12, 12
  03e32bc  fdivs 31, 1, 12
  03e32c0  fsub 30, 4, 12
  03e32c4  fsub 29, 4, 12
  03e32c8  fsub 28, 12, 4
  03e32cc  fsub 12, 12, 4
  03e32d0  fmuls 5, 31, 5
  03e32d4  fmuls 7, 31, 7
  03e32d8  fsel 31, 30, 4, 5
  03e32dc  fsel 30, 29, 4, 7
  03e32e0  fsel 5, 28, 31, 5
  03e32e4  fsel 7, 12, 30, 7
  03e32e8  fadds 5, 0, 5
  03e32ec  fadds 12, 11, 7
  03e32f0  fadds 11, 5, 6
  03e32f4  fadds 12, 12, 8
  03e32f8  lwz 9, 0(3)
  03e32fc  addic 5, 5, 1
  03e3300  addic 9, 9, -1
  03e3304  addic 10, 10, 16
  03e3308  cmpw 5, 9
  03e330c  bt 0, 0x3e3138
  03e3310  cmpwi 7, 0
  03e3314  bt 2, 0x3e3328
  03e3318  stfs 12, 0(6)
  03e331c  stfs 11, 4(6)
  03e3320  stfs 10, 8(6)
  03e3324  stfs 9, 12(6)
  03e3328  fmr 1, 13
  03e332c  lfd 26, 48(1)
  03e3330  lfd 27, 56(1)
  03e3334  lfd 28, 64(1)
  03e3338  lfd 29, 72(1)
  03e333c  lfd 30, 80(1)
  03e3340  lfd 31, 88(1)
  03e3344  addi 1, 1, 96
  03e3348  blr

M623_003e3378:   # 0x3e3378, 0x3ec bytes
  03e3378  stdu 1, -272(1)
  03e337c  mflr 0
  03e3380  std 0, 288(1)
  03e3384  stfd 26, 224(1)
  03e3388  stfd 27, 232(1)
  03e338c  stfd 28, 240(1)
  03e3390  stfd 29, 248(1)
  03e3394  stfd 30, 256(1)
  03e3398  stfd 31, 264(1)
  03e339c  lfs 2, 0(4)
  03e33a0  lfs 3, 16(3)
  03e33a4  lfs 4, 4(4)
  03e33a8  lfs 5, 20(3)
  03e33ac  fsubs 2, 2, 3
  03e33b0  lis 5, 62
  03e33b4  fsubs 3, 4, 5
  03e33b8  addi 5, 5, 13132
  03e33bc  std 30, 208(1)
  03e33c0  fmr 31, 1
  03e33c4  ori 30, 3, 0
  03e33c8  std 31, 216(1)
  03e33cc  lis 6, 115
  03e33d0  ori 31, 4, 0
  03e33d4  addic 6, 6, 22784
  03e33d8  fabs 5, 2
  03e33dc  fabs 4, 3
  03e33e0  stfs 2, 144(1)
  03e33e4  std 29, 200(1)
  03e33e8  stfs 3, 148(1)
  03e33ec  lwz 29, 120(3)
  03e33f0  fsubs 2, 5, 4
  03e33f4  stfs 2, 152(1)
  03e33f8  lwz 7, 144(1)
  03e33fc  lfs 30, 0(5)
  03e3400  lfs 1, 144(1)
  03e3404  lwz 5, 148(1)
  03e3408  fabs 2, 1
  03e340c  lfs 1, 148(1)
  03e3410  rlwinm 5, 5, 3, 29, 29
  03e3414  fabs 6, 1
  03e3418  lfs 1, 660(29)
  03e341c  lwz 3, 152(1)
  03e3420  lfs 3, 152(1)
  03e3424  rlwimi 5, 3, 2, 30, 30
  03e3428  fsub 7, 3, 30
  03e342c  fsub 8, 3, 30
  03e3430  rlwimi 5, 7, 4, 28, 28
  03e3434  ori 3, 6, 0
  03e3438  rlwimi 3, 5, 2, 26, 28
  03e343c  slwi 5, 5, 2
  03e3440  clrldi 3, 3, 32
  03e3444  fsel 4, 7, 2, 4
  03e3448  lfsx 3, 6, 5
  03e344c  lfs 2, 4(3)
  03e3450  fsel 5, 8, 6, 5
  03e3454  std 28, 192(1)
  03e3458  fcmpu 0, 4, 30
  03e345c  bt 1, 0x3e3468
  03e3460  fmr 3, 30
  03e3464  b 0x3e3590
  03e3468  fsubs 6, 5, 4
  03e346c  fadds 4, 5, 4
  03e3470  addic 6, 1, 16
  03e3474  li 3, 2
  03e3478  addic 5, 6, 140
  03e347c  addic 4, 6, 156
  03e3480  mtctr 3
  03e3484  fdivs 4, 6, 4
  03e3488  fmuls 6, 4, 4
  03e348c  stfs 4, 168(1)
  03e3490  stfs 4, 160(1)
  03e3494  stfs 4, 164(1)
  03e3498  stfs 4, 156(1)
  03e349c  lfs 7, 168(1)
  03e34a0  lfs 8, 160(1)
  03e34a4  lfs 9, 164(1)
  03e34a8  fmuls 4, 6, 6
  03e34ac  fmuls 8, 8, 6
  03e34b0  fmuls 7, 7, 4
  03e34b4  fmuls 5, 4, 4
  03e34b8  fmuls 4, 9, 4
  03e34bc  stfs 8, 160(1)
  03e34c0  fmuls 6, 7, 6
  03e34c4  stfs 4, 164(1)
  03e34c8  stfs 6, 168(1)
  03e34cc  lfs 4, 140(6)
  03e34d0  fmuls 4, 4, 5
  03e34d4  stfs 4, 156(6)
  03e34d8  lfs 4, 4(5)
  03e34dc  addic 6, 6, 8
  03e34e0  addic 5, 5, 8
  03e34e4  fmuls 4, 4, 5
  03e34e8  stfs 4, 4(4)
  03e34ec  addic 4, 4, 8
  03e34f0  bdnz 0x3e34cc
  03e34f4  ori 7, 1, 0
  03e34f8  lis 6, 115
  03e34fc  li 8, 4
  03e3500  addic 5, 7, 156
  03e3504  addic 6, 6, 22752
  03e3508  ori 4, 5, 0
  03e350c  mtctr 8
  03e3510  lfs 4, 156(7)
  03e3514  lfs 5, 0(6)
  03e3518  fmuls 4, 4, 5
  03e351c  lfs 5, 4(6)
  03e3520  addic 6, 6, 8
  03e3524  stfs 4, 156(7)
  03e3528  lfs 4, 4(5)
  03e352c  addic 7, 7, 8
  03e3530  fmuls 4, 4, 5
  03e3534  stfs 4, 4(5)
  03e3538  addic 5, 5, 8
  03e353c  bdnz 0x3e3510
  03e3540  ori 5, 3, 0
  03e3544  fmr 4, 30
  03e3548  ori 3, 1, 0
  03e354c  mtctr 5
  03e3550  lfs 5, 156(3)
  03e3554  fadds 4, 4, 5
  03e3558  lfs 5, 4(4)
  03e355c  addic 3, 3, 16
  03e3560  lfs 6, 8(4)
  03e3564  lfs 7, 12(4)
  03e3568  addic 4, 4, 16
  03e356c  fadds 4, 4, 5
  03e3570  fadds 4, 4, 6
  03e3574  fadds 4, 4, 7
  03e3578  bdnz 0x3e3550
  03e357c  lis 3, 62
  03e3580  addi 3, 3, 13132
  03e3584  lfs 5, 4(3)
  03e3588  fadds 4, 4, 5
  03e358c  fmadds 3, 4, 3, 2
  03e3590  fmr 2, 1
  03e3594  lis 3, 62
  03e3598  fmr 1, 3
  03e359c  addi 28, 3, 13132
  03e35a0  lfs 3, 8(28)
  03e35a4  fmuls 2, 2, 3
  03e35a8  bl 0x502578
  03e35ac  nop
  03e35b0  lfs 2, 12(28)
  03e35b4  lfs 3, 16(28)
  03e35b8  lfs 4, 4(31)
  03e35bc  fadds 2, 1, 2
  03e35c0  lfs 5, 20(30)
  03e35c4  fsubs 12, 3, 1
  03e35c8  lfs 6, 0(31)
  03e35cc  fsubs 9, 4, 5
  03e35d0  lfs 7, 16(30)
  03e35d4  lfs 8, 20(28)
  03e35d8  fsubs 13, 6, 7
  03e35dc  lfs 10, 8(31)
  03e35e0  lfs 11, 24(30)
  03e35e4  fsubs 0, 10, 11
  03e35e8  fsubs 3, 3, 2
  03e35ec  fsub 28, 1, 12
  03e35f0  fsubs 29, 8, 2
  03e35f4  fmuls 9, 9, 9
  03e35f8  fsubs 8, 8, 1
  03e35fc  fsel 1, 28, 12, 1
  03e3600  fmadds 9, 13, 13, 9
  03e3604  fsub 13, 2, 3
  03e3608  lfs 12, 24(28)
  03e360c  fmadds 9, 0, 0, 9
  03e3610  fsel 2, 13, 3, 2
  03e3614  fsub 3, 8, 1
  03e3618  fsqrts 9, 9
  03e361c  addic 4, 1, 112
  03e3620  addic 5, 1, 128
  03e3624  fsub 27, 29, 2
  03e3628  fsel 1, 3, 8, 1
  03e362c  lfs 3, 28(28)
  03e3630  lfs 8, 32(28)
  03e3634  lfs 0, 36(28)
  03e3638  fsel 2, 27, 29, 2
  03e363c  fmuls 13, 1, 1
  03e3640  fmuls 29, 2, 2
  03e3644  fmuls 28, 13, 1
  03e3648  fmuls 27, 29, 2
  03e364c  fmuls 26, 13, 28
  03e3650  fmadds 1, 28, 12, 1
  03e3654  fmuls 28, 29, 27
  03e3658  fmadds 2, 27, 12, 2
  03e365c  fmuls 12, 13, 26
  03e3660  fmadds 1, 26, 3, 1
  03e3664  fmuls 27, 29, 28
  03e3668  fmadds 2, 28, 3, 2
  03e366c  fmuls 3, 13, 12
  03e3670  fmadds 1, 12, 8, 1
  03e3674  fmuls 12, 29, 27
  03e3678  fmadds 2, 27, 8, 2
  03e367c  fmadds 1, 3, 0, 1
  03e3680  fsubs 3, 11, 10
  03e3684  fmadds 2, 12, 0, 2
  03e3688  fmadds 1, 1, 9, 5
  03e368c  fmadds 2, 2, 9, 7
  03e3690  fsubs 4, 1, 4
  03e3694  lfs 9, 124(1)
  03e3698  fsubs 6, 2, 6
  03e369c  fmuls 8, 4, 4
  03e36a0  stfs 2, 112(1)
  03e36a4  stfs 1, 116(1)
  03e36a8  stfs 11, 120(1)
  03e36ac  stfs 9, 140(1)
  03e36b0  fmadds 8, 6, 6, 8
  03e36b4  lwz 3, 704(29)
  03e36b8  extsw 3, 3
  03e36bc  fmadds 8, 3, 3, 8
  03e36c0  fsqrts 8, 8
  03e36c4  fdivs 1, 31, 8
  03e36c8  fsub 2, 30, 8
  03e36cc  fsub 9, 30, 8
  03e36d0  fsub 10, 30, 8
  03e36d4  fsub 12, 8, 30
  03e36d8  fsub 13, 8, 30
  03e36dc  fsub 8, 8, 30
  03e36e0  fmuls 3, 3, 1
  03e36e4  fmuls 4, 4, 1
  03e36e8  fmuls 1, 6, 1
  03e36ec  fsel 2, 2, 30, 3
  03e36f0  fsel 6, 9, 30, 4
  03e36f4  fsel 9, 10, 30, 1
  03e36f8  fsel 2, 12, 2, 3
  03e36fc  fsel 3, 13, 6, 4
  03e3700  fsel 1, 8, 9, 1
  03e3704  fadds 2, 2, 11
  03e3708  fadds 3, 3, 5
  03e370c  fadds 1, 1, 7
  03e3710  stfs 2, 136(1)
  03e3714  stfs 3, 132(1)
  03e3718  stfs 1, 128(1)
  03e371c  bl 0x113fa0
  03e3720  nop
  03e3724  cntlzw 3, 3
  03e3728  rlwinm 3, 3, 27, 31, 31
  03e372c  ld 0, 288(1)
  03e3730  mtlr 0
  03e3734  lfd 26, 224(1)
  03e3738  lfd 27, 232(1)
  03e373c  lfd 28, 240(1)
  03e3740  lfd 29, 248(1)
  03e3744  lfd 30, 256(1)
  03e3748  lfd 31, 264(1)
  03e374c  ld 28, 192(1)
  03e3750  ld 29, 200(1)
  03e3754  ld 30, 208(1)
  03e3758  ld 31, 216(1)
  03e375c  addi 1, 1, 272
  03e3760  blr

M623_003e37b0:   # 0x3e37b0, 0x8e0 bytes
  03e37b0  stdu 1, -352(1)
  03e37b4  mflr 0
  03e37b8  std 0, 368(1)
  03e37bc  stfd 28, 320(1)
  03e37c0  stfd 29, 328(1)
  03e37c4  stfd 30, 336(1)
  03e37c8  stfd 31, 344(1)
  03e37cc  std 31, 312(1)
  03e37d0  lis 5, 161
  03e37d4  ori 31, 3, 0
  03e37d8  fmr 31, 1
  03e37dc  ori 3, 4, 0
  03e37e0  srawi 6, 31, 8
  03e37e4  std 30, 304(1)
  03e37e8  lwz 4, 1808(5)
  03e37ec  lwz 30, 120(31)
  03e37f0  xor 4, 6, 4
  03e37f4  clrlwi 4, 4, 30
  03e37f8  cmpwi 4, 0
  03e37fc  bf 2, 0x3e384c
  03e3800  ori 8, 3, 0
  03e3804  lwz 5, 708(30)
  03e3808  lis 3, 62
  03e380c  lis 6, 133
  03e3810  addi 4, 3, 14180
  03e3814  addic 3, 30, 704
  03e3818  addic 7, 31, 16
  03e381c  extsw 5, 5
  03e3820  addic 9, 30, 640
  03e3824  lfs 1, 0(4)
  03e3828  lfs 2, 15804(6)
  03e382c  li 4, 1
  03e3830  fmuls 1, 2, 1
  03e3834  bl 0x114d58
  03e3838  nop
  03e383c  cmpwi 3, 0
  03e3840  bf 2, 0x3e384c
  03e3844  li 3, 2
  03e3848  stw 3, 356(30)
  03e384c  lfs 3, 640(30)
  03e3850  stfs 3, 144(1)
  03e3854  lfs 4, 644(30)
  03e3858  lfs 2, 20(31)
  03e385c  lfs 1, 16(31)
  03e3860  fsubs 6, 2, 4
  03e3864  fsubs 7, 1, 3
  03e3868  stfs 4, 148(1)
  03e386c  lis 3, 62
  03e3870  lfs 5, 648(30)
  03e3874  addi 3, 3, 14180
  03e3878  stfs 5, 152(1)
  03e387c  lfs 5, 652(30)
  03e3880  fmuls 6, 6, 6
  03e3884  stfs 5, 156(1)
  03e3888  lfs 5, 4(3)
  03e388c  lfs 29, 8(3)
  03e3890  fmadds 30, 7, 7, 6
  03e3894  fsqrts 30, 30
  03e3898  fcmpu 0, 30, 5
  03e389c  cror 6, 0, 2
  03e38a0  bt 6, 0x3e3ae0
  03e38a4  lis 3, 62
  03e38a8  addi 3, 3, 14180
  03e38ac  lfs 28, 12(3)
  03e38b0  fcmpu 0, 31, 28
  03e38b4  bt 2, 0x3e3ae0
  03e38b8  lis 3, 62
  03e38bc  lis 6, 133
  03e38c0  addi 5, 3, 14180
  03e38c4  ori 3, 31, 0
  03e38c8  addic 4, 1, 144
  03e38cc  lfs 1, 0(5)
  03e38d0  lfs 2, 15804(6)
  03e38d4  fmuls 1, 2, 1
  03e38d8  bl 0x3e3378
  03e38dc  lfs 1, 16(31)
  03e38e0  cmpwi 3, 0
  03e38e4  lfs 2, 20(31)
  03e38e8  lfs 3, 144(1)
  03e38ec  lfs 4, 148(1)
  03e38f0  bt 2, 0x3e3ae0
  03e38f4  fsubs 1, 3, 1
  03e38f8  fsubs 2, 4, 2
  03e38fc  lis 3, 115
  03e3900  addic 3, 3, 22784
  03e3904  fabs 3, 1
  03e3908  fabs 4, 2
  03e390c  stfs 1, 184(1)
  03e3910  stfs 2, 188(1)
  03e3914  fsubs 1, 3, 4
  03e3918  stfs 1, 192(1)
  03e391c  lwz 4, 184(1)
  03e3920  lfs 1, 184(1)
  03e3924  lwz 5, 188(1)
  03e3928  lfs 2, 188(1)
  03e392c  lwz 6, 192(1)
  03e3930  rlwinm 5, 5, 3, 29, 29
  03e3934  fabs 5, 2
  03e3938  lfs 2, 192(1)
  03e393c  fabs 1, 1
  03e3940  rlwimi 5, 6, 2, 30, 30
  03e3944  fsub 6, 2, 28
  03e3948  fsub 7, 2, 28
  03e394c  rlwimi 5, 4, 4, 28, 28
  03e3950  ori 4, 3, 0
  03e3954  rlwimi 4, 5, 2, 26, 28
  03e3958  slwi 5, 5, 2
  03e395c  clrldi 4, 4, 32
  03e3960  fsel 4, 6, 1, 4
  03e3964  lfsx 1, 3, 5
  03e3968  fsel 3, 7, 5, 3
  03e396c  lfs 2, 4(4)
  03e3970  fcmpu 0, 4, 28
  03e3974  bt 1, 0x3e397c
  03e3978  b 0x3e3a90
  03e397c  fsubs 5, 3, 4
  03e3980  fadds 3, 3, 4
  03e3984  addic 3, 1, 16
  03e3988  li 6, 2
  03e398c  addic 4, 3, 244
  03e3990  addic 5, 3, 260
  03e3994  mtctr 6
  03e3998  fdivs 3, 5, 3
  03e399c  fmuls 4, 3, 3
  03e39a0  stfs 3, 272(1)
  03e39a4  stfs 3, 264(1)
  03e39a8  stfs 3, 268(1)
  03e39ac  stfs 3, 260(1)
  03e39b0  lfs 6, 272(1)
  03e39b4  lfs 7, 264(1)
  03e39b8  lfs 8, 268(1)
  03e39bc  fmuls 5, 4, 4
  03e39c0  fmuls 7, 7, 4
  03e39c4  fmuls 6, 6, 5
  03e39c8  fmuls 3, 5, 5
  03e39cc  fmuls 5, 8, 5
  03e39d0  stfs 7, 264(1)
  03e39d4  fmuls 4, 6, 4
  03e39d8  stfs 5, 268(1)
  03e39dc  stfs 4, 272(1)
  03e39e0  lfs 4, 244(3)
  03e39e4  fmuls 4, 4, 3
  03e39e8  stfs 4, 260(3)
  03e39ec  lfs 4, 4(4)
  03e39f0  addic 3, 3, 8
  03e39f4  addic 4, 4, 8
  03e39f8  fmuls 4, 4, 3
  03e39fc  stfs 4, 4(5)
  03e3a00  addic 5, 5, 8
  03e3a04  bdnz 0x3e39e0
  03e3a08  li 5, 4
  03e3a0c  ori 3, 1, 0
  03e3a10  mtctr 5
  03e3a14  lis 4, 115
  03e3a18  addic 5, 3, 260
  03e3a1c  addic 4, 4, 22752
  03e3a20  ori 7, 5, 0
  03e3a24  lfs 3, 260(3)
  03e3a28  lfs 4, 0(4)
  03e3a2c  fmuls 3, 3, 4
  03e3a30  lfs 4, 4(4)
  03e3a34  addic 4, 4, 8
  03e3a38  stfs 3, 260(3)
  03e3a3c  lfs 3, 4(5)
  03e3a40  addic 3, 3, 8
  03e3a44  fmuls 3, 3, 4
  03e3a48  stfs 3, 4(5)
  03e3a4c  addic 5, 5, 8
  03e3a50  bdnz 0x3e3a24
  03e3a54  ori 3, 1, 0
  03e3a58  mtctr 6
  03e3a5c  lfs 3, 260(3)
  03e3a60  lfs 4, 4(7)
  03e3a64  fadds 3, 28, 3
  03e3a68  lfs 5, 8(7)
  03e3a6c  lfs 28, 12(7)
  03e3a70  addic 3, 3, 16
  03e3a74  addic 7, 7, 16
  03e3a78  fadds 3, 3, 4
  03e3a7c  fadds 3, 3, 5
  03e3a80  fadds 28, 3, 28
  03e3a84  bdnz 0x3e3a5c
  03e3a88  fadds 28, 28, 29
  03e3a8c  fmadds 28, 28, 1, 2
  03e3a90  fmr 1, 28
  03e3a94  fmr 2, 31
  03e3a98  bl 0x502578
  03e3a9c  nop
  03e3aa0  lis 3, 62
  03e3aa4  lis 4, 114
  03e3aa8  addi 3, 3, 14180
  03e3aac  lis 6, 114
  03e3ab0  addic 5, 30, 656
  03e3ab4  lfs 2, 16(3)
  03e3ab8  lfs 3, -3048(4)
  03e3abc  lfs 4, 20(3)
  03e3ac0  fmuls 2, 3, 2
  03e3ac4  lfs 5, -3052(6)
  03e3ac8  addic 3, 31, 72
  03e3acc  fmuls 4, 5, 4
  03e3ad0  fmr 3, 2
  03e3ad4  bl 0x10a2e0
  03e3ad8  nop
  03e3adc  b 0x3e3cc8
  03e3ae0  fsubs 1, 3, 1
  03e3ae4  fsubs 2, 4, 2
  03e3ae8  lis 3, 62
  03e3aec  addi 4, 3, 14180
  03e3af0  lis 5, 115
  03e3af4  addic 3, 31, 72
  03e3af8  addic 5, 5, 22784
  03e3afc  fabs 4, 1
  03e3b00  fabs 5, 2
  03e3b04  stfs 1, 172(1)
  03e3b08  stfs 2, 176(1)
  03e3b0c  fsubs 1, 4, 5
  03e3b10  stfs 1, 180(1)
  03e3b14  lwz 6, 172(1)
  03e3b18  lfs 3, 12(4)
  03e3b1c  lfs 1, 172(1)
  03e3b20  lwz 4, 176(1)
  03e3b24  lfs 2, 176(1)
  03e3b28  fabs 1, 1
  03e3b2c  lwz 7, 180(1)
  03e3b30  rlwinm 4, 4, 3, 29, 29
  03e3b34  fabs 6, 2
  03e3b38  lfs 2, 180(1)
  03e3b3c  rlwimi 4, 7, 2, 30, 30
  03e3b40  fsub 7, 2, 3
  03e3b44  rlwimi 4, 6, 4, 28, 28
  03e3b48  fsub 8, 2, 3
  03e3b4c  ori 6, 5, 0
  03e3b50  rlwimi 6, 4, 2, 26, 28
  03e3b54  slwi 4, 4, 2
  03e3b58  clrldi 6, 6, 32
  03e3b5c  fsel 5, 7, 1, 5
  03e3b60  lfsx 1, 5, 4
  03e3b64  lfs 2, 4(6)
  03e3b68  fsel 4, 8, 6, 4
  03e3b6c  fcmpu 0, 5, 3
  03e3b70  bt 1, 0x3e3b78
  03e3b74  b 0x3e3c8c
  03e3b78  fsubs 6, 4, 5
  03e3b7c  fadds 4, 4, 5
  03e3b80  addic 4, 1, 16
  03e3b84  li 8, 2
  03e3b88  addic 6, 4, 228
  03e3b8c  addic 5, 4, 212
  03e3b90  mtctr 8
  03e3b94  fdivs 4, 6, 4
  03e3b98  fmuls 5, 4, 4
  03e3b9c  stfs 4, 240(1)
  03e3ba0  stfs 4, 232(1)
  03e3ba4  stfs 4, 236(1)
  03e3ba8  stfs 4, 228(1)
  03e3bac  lfs 7, 240(1)
  03e3bb0  lfs 8, 232(1)
  03e3bb4  lfs 9, 236(1)
  03e3bb8  fmuls 6, 5, 5
  03e3bbc  fmuls 8, 8, 5
  03e3bc0  fmuls 7, 7, 6
  03e3bc4  fmuls 4, 6, 6
  03e3bc8  fmuls 6, 9, 6
  03e3bcc  stfs 8, 232(1)
  03e3bd0  fmuls 5, 7, 5
  03e3bd4  stfs 6, 236(1)
  03e3bd8  stfs 5, 240(1)
  03e3bdc  lfs 5, 212(4)
  03e3be0  fmuls 5, 5, 4
  03e3be4  stfs 5, 228(4)
  03e3be8  lfs 5, 4(5)
  03e3bec  addic 5, 5, 8
  03e3bf0  fmuls 5, 5, 4
  03e3bf4  addic 4, 4, 8
  03e3bf8  stfs 5, 4(6)
  03e3bfc  addic 6, 6, 8
  03e3c00  bdnz 0x3e3bdc
  03e3c04  li 6, 4
  03e3c08  ori 4, 1, 0
  03e3c0c  mtctr 6
  03e3c10  lis 5, 115
  03e3c14  addic 6, 4, 228
  03e3c18  addic 5, 5, 22752
  03e3c1c  ori 7, 6, 0
  03e3c20  lfs 4, 228(4)
  03e3c24  lfs 5, 0(5)
  03e3c28  fmuls 4, 4, 5
  03e3c2c  lfs 5, 4(5)
  03e3c30  addic 5, 5, 8
  03e3c34  stfs 4, 228(4)
  03e3c38  lfs 4, 4(6)
  03e3c3c  addic 4, 4, 8
  03e3c40  fmuls 4, 4, 5
  03e3c44  stfs 4, 4(6)
  03e3c48  addic 6, 6, 8
  03e3c4c  bdnz 0x3e3c20
  03e3c50  ori 4, 1, 0
  03e3c54  mtctr 8
  03e3c58  lfs 4, 228(4)
  03e3c5c  fadds 3, 3, 4
  03e3c60  addic 4, 4, 16
  03e3c64  lfs 4, 4(7)
  03e3c68  lfs 5, 8(7)
  03e3c6c  lfs 6, 12(7)
  03e3c70  addic 7, 7, 16
  03e3c74  fadds 3, 3, 4
  03e3c78  fadds 3, 3, 5
  03e3c7c  fadds 3, 3, 6
  03e3c80  bdnz 0x3e3c58
  03e3c84  fadds 3, 3, 29
  03e3c88  fmadds 3, 3, 1, 2
  03e3c8c  lis 4, 62
  03e3c90  fmr 1, 3
  03e3c94  lis 5, 114
  03e3c98  addi 4, 4, 14180
  03e3c9c  lis 6, 114
  03e3ca0  lfs 4, 16(4)
  03e3ca4  lfs 2, -3048(5)
  03e3ca8  lfs 6, 20(4)
  03e3cac  fmuls 2, 2, 4
  03e3cb0  lfs 5, -3052(6)
  03e3cb4  addic 5, 30, 656
  03e3cb8  fmuls 4, 5, 6
  03e3cbc  fmr 3, 2
  03e3cc0  bl 0x10a2e0
  03e3cc4  nop
  03e3cc8  lfs 1, 144(1)
  03e3ccc  lfs 2, 16(31)
  03e3cd0  lfs 3, 148(1)
  03e3cd4  lfs 4, 20(31)
  03e3cd8  fsubs 1, 1, 2
  03e3cdc  lis 3, 62
  03e3ce0  fsubs 2, 3, 4
  03e3ce4  addi 3, 3, 14180
  03e3ce8  lis 4, 115
  03e3cec  addic 4, 4, 22784
  03e3cf0  fabs 3, 1
  03e3cf4  fabs 6, 2
  03e3cf8  stfs 1, 160(1)
  03e3cfc  stfs 2, 164(1)
  03e3d00  lfs 4, 72(31)
  03e3d04  fsubs 1, 3, 6
  03e3d08  stfs 1, 168(1)
  03e3d0c  lwz 5, 160(1)
  03e3d10  lfs 5, 12(3)
  03e3d14  lfs 1, 160(1)
  03e3d18  lwz 3, 164(1)
  03e3d1c  lfs 2, 164(1)
  03e3d20  fabs 1, 1
  03e3d24  lwz 6, 168(1)
  03e3d28  rlwinm 3, 3, 3, 29, 29
  03e3d2c  fabs 7, 2
  03e3d30  lfs 2, 168(1)
  03e3d34  rlwimi 3, 6, 2, 30, 30
  03e3d38  fsub 8, 2, 5
  03e3d3c  rlwimi 3, 5, 4, 28, 28
  03e3d40  fsub 9, 2, 5
  03e3d44  ori 5, 4, 0
  03e3d48  rlwimi 5, 3, 2, 26, 28
  03e3d4c  slwi 3, 3, 2
  03e3d50  clrldi 5, 5, 32
  03e3d54  fsel 6, 8, 1, 6
  03e3d58  lfsx 1, 4, 3
  03e3d5c  lfs 2, 4(5)
  03e3d60  fsel 3, 9, 7, 3
  03e3d64  fcmpu 0, 6, 5
  03e3d68  bt 1, 0x3e3d70
  03e3d6c  b 0x3e3e84
  03e3d70  fsubs 7, 3, 6
  03e3d74  fadds 3, 3, 6
  03e3d78  addic 3, 1, 16
  03e3d7c  li 7, 2
  03e3d80  addic 5, 3, 196
  03e3d84  addic 4, 3, 180
  03e3d88  mtctr 7
  03e3d8c  fdivs 3, 7, 3
  03e3d90  fmuls 6, 3, 3
  03e3d94  stfs 3, 208(1)
  03e3d98  stfs 3, 200(1)
  03e3d9c  stfs 3, 204(1)
  03e3da0  stfs 3, 196(1)
  03e3da4  lfs 8, 208(1)
  03e3da8  lfs 9, 200(1)
  03e3dac  lfs 10, 204(1)
  03e3db0  fmuls 7, 6, 6
  03e3db4  fmuls 9, 9, 6
  03e3db8  fmuls 8, 8, 7
  03e3dbc  fmuls 3, 7, 7
  03e3dc0  fmuls 7, 10, 7
  03e3dc4  stfs 9, 200(1)
  03e3dc8  fmuls 6, 8, 6
  03e3dcc  stfs 7, 204(1)
  03e3dd0  stfs 6, 208(1)
  03e3dd4  lfs 6, 180(3)
  03e3dd8  fmuls 6, 6, 3
  03e3ddc  stfs 6, 196(3)
  03e3de0  lfs 6, 4(4)
  03e3de4  addic 4, 4, 8
  03e3de8  fmuls 6, 6, 3
  03e3dec  addic 3, 3, 8
  03e3df0  stfs 6, 4(5)
  03e3df4  addic 5, 5, 8
  03e3df8  bdnz 0x3e3dd4
  03e3dfc  li 5, 4
  03e3e00  ori 3, 1, 0
  03e3e04  mtctr 5
  03e3e08  lis 4, 115
  03e3e0c  addic 5, 3, 196
  03e3e10  addic 4, 4, 22752
  03e3e14  ori 6, 5, 0
  03e3e18  lfs 3, 196(3)
  03e3e1c  lfs 6, 0(4)
  03e3e20  fmuls 3, 3, 6
  03e3e24  lfs 6, 4(4)
  03e3e28  addic 4, 4, 8
  03e3e2c  stfs 3, 196(3)
  03e3e30  lfs 3, 4(5)
  03e3e34  addic 3, 3, 8
  03e3e38  fmuls 3, 3, 6
  03e3e3c  stfs 3, 4(5)
  03e3e40  addic 5, 5, 8
  03e3e44  bdnz 0x3e3e18
  03e3e48  ori 3, 1, 0
  03e3e4c  mtctr 7
  03e3e50  lfs 3, 196(3)
  03e3e54  fadds 3, 5, 3
  03e3e58  addic 3, 3, 16
  03e3e5c  lfs 5, 4(6)
  03e3e60  lfs 6, 8(6)
  03e3e64  lfs 7, 12(6)
  03e3e68  addic 6, 6, 16
  03e3e6c  fadds 3, 3, 5
  03e3e70  fadds 5, 3, 6
  03e3e74  fadds 5, 5, 7
  03e3e78  bdnz 0x3e3e50
  03e3e7c  fadds 5, 5, 29
  03e3e80  fmadds 5, 5, 1, 2
  03e3e84  fmr 1, 4
  03e3e88  fmr 2, 5
  03e3e8c  bl 0x5026a0
  03e3e90  nop
  03e3e94  lis 3, 62
  03e3e98  addi 3, 3, 14180
  03e3e9c  lfs 2, 24(3)
  03e3ea0  lfs 5, 28(3)
  03e3ea4  fcmpu 0, 1, 2
  03e3ea8  addic 3, 30, 244
  03e3eac  cror 6, 1, 2
  03e3eb0  bt 6, 0x3e3ef0
  03e3eb4  lis 4, 62
  03e3eb8  addi 4, 4, 14180
  03e3ebc  lfs 1, 32(4)
  03e3ec0  fcmpu 0, 30, 1
  03e3ec4  cror 6, 0, 2
  03e3ec8  bt 6, 0x3e3ef0
  03e3ecc  lis 4, 114
  03e3ed0  lis 5, 114
  03e3ed4  lfs 1, -3052(4)
  03e3ed8  lfs 2, -3048(5)
  03e3edc  fmuls 1, 1, 5
  03e3ee0  fmuls 2, 2, 5
  03e3ee4  bl 0x109af0
  03e3ee8  nop
  03e3eec  b 0x3e3f0c
  03e3ef0  lis 4, 114
  03e3ef4  lis 5, 114
  03e3ef8  lfs 1, -3052(4)
  03e3efc  lfs 2, -3048(5)
  03e3f00  fmuls 2, 2, 5
  03e3f04  bl 0x109af0
  03e3f08  nop
  03e3f0c  lis 3, 62
  03e3f10  lfs 1, 72(31)
  03e3f14  addi 7, 3, 14180
  03e3f18  lfs 2, 36(7)
  03e3f1c  lfs 3, 40(7)
  03e3f20  fadds 2, 1, 2
  03e3f24  fsubs 5, 3, 1
  03e3f28  lfs 4, 44(7)
  03e3f2c  fsubs 6, 4, 1
  03e3f30  li 5, 0
  03e3f34  ori 3, 31, 0
  03e3f38  addic 4, 30, 208
  03e3f3c  fsubs 3, 3, 2
  03e3f40  fsub 7, 1, 5
  03e3f44  fsubs 4, 4, 2
  03e3f48  addic 6, 1, 128
  03e3f4c  fsub 9, 2, 3
  03e3f50  fsel 1, 7, 5, 1
  03e3f54  lfs 5, 48(7)
  03e3f58  fsel 2, 9, 3, 2
  03e3f5c  fsub 3, 6, 1
  03e3f60  fsub 8, 4, 2
  03e3f64  fsel 1, 3, 6, 1
  03e3f68  lfs 3, 52(7)
  03e3f6c  lfs 6, 56(7)
  03e3f70  lfs 7, 60(7)
  03e3f74  lfs 31, 64(7)
  03e3f78  stw 5, 120(1)
  03e3f7c  addic 5, 1, 112
  03e3f80  fsel 2, 8, 4, 2
  03e3f84  fmuls 4, 1, 1
  03e3f88  fmuls 8, 2, 2
  03e3f8c  fmuls 9, 4, 1
  03e3f90  fmuls 10, 8, 2
  03e3f94  fmuls 11, 4, 9
  03e3f98  fmadds 1, 9, 5, 1
  03e3f9c  fmuls 9, 8, 10
  03e3fa0  fmadds 2, 10, 5, 2
  03e3fa4  fmuls 5, 4, 11
  03e3fa8  fmadds 1, 11, 3, 1
  03e3fac  fmuls 10, 8, 9
  03e3fb0  fmadds 2, 9, 3, 2
  03e3fb4  fmuls 3, 4, 5
  03e3fb8  fmadds 1, 5, 6, 1
  03e3fbc  fmuls 4, 8, 10
  03e3fc0  fmadds 2, 10, 6, 2
  03e3fc4  fmadds 1, 3, 7, 1
  03e3fc8  fmadds 2, 4, 7, 2
  03e3fcc  fmuls 1, 1, 31
  03e3fd0  fmuls 2, 2, 31
  03e3fd4  stfs 1, 116(1)
  03e3fd8  lfs 1, 68(7)
  03e3fdc  stfs 2, 112(1)
  03e3fe0  bl 0x101058
  03e3fe4  nop
  03e3fe8  lwz 3, 724(30)
  03e3fec  cmpwi 3, 0
  03e3ff0  bf 2, 0x3e4068
  03e3ff4  lis 3, 62
  03e3ff8  lwz 6, 704(30)
  03e3ffc  lis 4, 133
  03e4000  addi 3, 3, 14180
  03e4004  addic 5, 31, 16
  03e4008  lfs 1, 0(3)
  03e400c  lfs 2, 15804(4)
  03e4010  extsw 3, 6
  03e4014  ori 6, 5, 0
  03e4018  fmuls 1, 2, 1
  03e401c  bl 0x3e30b0
  03e4020  fcmpu 0, 1, 31
  03e4024  cror 6, 0, 2
  03e4028  bt 6, 0x3e4068
  03e402c  lis 3, 62
  03e4030  li 4, 72
  03e4034  vspltisw 2, -1
  03e4038  addi 3, 3, 14180
  03e403c  lis 5, 114
  03e4040  li 6, -3056
  03e4044  vslw 2, 2, 2
  03e4048  <unknown>
  03e404c  li 3, 724
  03e4050  vspltw 3, 3, 0
  03e4054  <unknown>
  03e4058  vmaddfp 2, 4, 3, 2
  03e405c  vctsxs 2, 2, 0
  03e4060  vspltw 2, 2, 0
  03e4064  stvewx 2, 3, 30
  03e4068  ld 0, 368(1)
  03e406c  mtlr 0
  03e4070  lfd 28, 320(1)
  03e4074  lfd 29, 328(1)
  03e4078  lfd 30, 336(1)
  03e407c  lfd 31, 344(1)
  03e4080  ld 30, 304(1)
  03e4084  ld 31, 312(1)
  03e4088  addi 1, 1, 352
  03e408c  blr

M623_003e4098:   # 0x3e4098, 0xcc bytes
  03e4098  lis 6, 62
  03e409c  lis 5, 165
  03e40a0  sldi 4, 4, 2
  03e40a4  addi 6, 6, 16528
  03e40a8  addic 5, 5, -28284
  03e40ac  extsw 4, 4
  03e40b0  lfs 2, 0(6)
  03e40b4  lwzx 4, 5, 4
  03e40b8  cmpwi 4, 0
  03e40bc  bf 2, 0x3e40c8
  03e40c0  li 3, 0
  03e40c4  b 0x3e4160
  03e40c8  lis 5, 164
  03e40cc  li 7, 0
  03e40d0  lwz 5, -28512(5)
  03e40d4  lhz 6, 0(4)
  03e40d8  rlwinm 6, 6, 8, 9, 23
  03e40dc  addc 6, 5, 6
  03e40e0  clrldi 6, 6, 32
  03e40e4  lhz 8, 52(6)
  03e40e8  rlwinm 8, 8, 0, 19, 19
  03e40ec  cmpwi 8, 0
  03e40f0  bt 2, 0x3e4148
  03e40f4  lbz 8, 32(6)
  03e40f8  cmpwi 8, 127
  03e40fc  bf 0, 0x3e4148
  03e4100  lfs 1, 20(6)
  03e4104  lfs 3, 20(3)
  03e4108  lfs 4, 16(6)
  03e410c  fsubs 1, 1, 3
  03e4110  lfs 3, 16(3)
  03e4114  fsubs 3, 4, 3
  03e4118  lfs 4, 24(6)
  03e411c  lfs 5, 24(3)
  03e4120  fsubs 4, 4, 5
  03e4124  fmuls 1, 1, 1
  03e4128  fmadds 1, 3, 3, 1
  03e412c  fmadds 1, 4, 4, 1
  03e4130  fsqrts 1, 1
  03e4134  fcmpu 0, 2, 1
  03e4138  cror 6, 0, 2
  03e413c  bt 6, 0x3e4148
  03e4140  ori 7, 6, 0
  03e4144  fmr 2, 1
  03e4148  lhz 6, 0(4)
  03e414c  addic 4, 4, 2
  03e4150  extsh 6, 6
  03e4154  cmpwi 6, 0
  03e4158  bf 0, 0x3e40d4
  03e415c  ori 3, 7, 0
  03e4160  blr

M623_003e41c8:   # 0x3e41c8, 0xfa8 bytes
  03e41c8  stdu 1, -416(1)
  03e41cc  mflr 0
  03e41d0  std 0, 432(1)
  03e41d4  stfd 28, 384(1)
  03e41d8  stfd 29, 392(1)
  03e41dc  stfd 30, 400(1)
  03e41e0  stfd 31, 408(1)
  03e41e4  std 31, 376(1)
  03e41e8  std 29, 360(1)
  03e41ec  ori 31, 3, 0
  03e41f0  lis 3, 62
  03e41f4  std 30, 368(1)
  03e41f8  addi 29, 3, 16740
  03e41fc  lwz 30, 120(31)
  03e4200  std 28, 352(1)
  03e4204  std 27, 344(1)
  03e4208  std 26, 336(1)
  03e420c  addic 3, 30, 724
  03e4210  bl 0x4fff60
  03e4214  nop
  03e4218  li 6, 0
  03e421c  lfs 28, 0(29)
  03e4220  ori 3, 31, 0
  03e4224  lis 4, 51
  03e4228  li 5, 0
  03e422c  stw 6, 148(1)
  03e4230  bl 0x10675c
  03e4234  nop
  03e4238  ori 29, 3, 0
  03e423c  cmpwi 29, 0
  03e4240  bt 2, 0x3e43a0
  03e4244  lis 3, 62
  03e4248  lfs 3, 16(31)
  03e424c  addi 3, 3, 16740
  03e4250  lfs 4, 20(31)
  03e4254  stfs 3, 112(1)
  03e4258  lfs 1, 28(31)
  03e425c  stfs 4, 116(1)
  03e4260  stfs 1, 124(1)
  03e4264  lfs 2, 4(3)
  03e4268  lfs 5, 24(31)
  03e426c  fadds 2, 5, 2
  03e4270  stfs 2, 120(1)
  03e4274  lwz 3, 32(29)
  03e4278  cmpwi 3, 0
  03e427c  bt 2, 0x3e4324
  03e4280  lhz 4, 166(3)
  03e4284  cmpwi 4, 71
  03e4288  cmpwi 1, 4, 186
  03e428c  bf 2, 0x3e42bc
  03e4290  lis 3, 151
  03e4294  addic 3, 3, -25376
  03e4298  lfs 1, 208(3)
  03e429c  lfs 5, 212(3)
  03e42a0  stfs 1, 128(1)
  03e42a4  lfs 6, 216(3)
  03e42a8  stfs 5, 132(1)
  03e42ac  lfs 8, 220(3)
  03e42b0  stfs 6, 136(1)
  03e42b4  stfs 8, 140(1)
  03e42b8  b 0x3e4344
  03e42bc  lwz 4, 36(3)
  03e42c0  cmpwi 4, 0
  03e42c4  bt 2, 0x3e42d8
  03e42c8  lhz 4, 70(4)
  03e42cc  extsh 4, 4
  03e42d0  cmpwi 4, 5
  03e42d4  bt 2, 0x3e42dc
  03e42d8  bf 6, 0x3e4300
  03e42dc  fmr 7, 1
  03e42e0  stfs 3, 128(1)
  03e42e4  fmr 1, 3
  03e42e8  stfs 4, 132(1)
  03e42ec  fmr 5, 4
  03e42f0  stfs 2, 136(1)
  03e42f4  fmr 6, 2
  03e42f8  stfs 7, 140(1)
  03e42fc  b 0x3e4344
  03e4300  lfs 1, 16(3)
  03e4304  stfs 1, 128(1)
  03e4308  lfs 5, 20(3)
  03e430c  stfs 5, 132(1)
  03e4310  lfs 6, 24(3)
  03e4314  stfs 6, 136(1)
  03e4318  lfs 7, 28(3)
  03e431c  stfs 7, 140(1)
  03e4320  b 0x3e4344
  03e4324  lfs 1, 0(29)
  03e4328  stfs 1, 128(1)
  03e432c  lfs 5, 4(29)
  03e4330  stfs 5, 132(1)
  03e4334  lfs 6, 8(29)
  03e4338  stfs 6, 136(1)
  03e433c  lfs 7, 12(29)
  03e4340  stfs 7, 140(1)
  03e4344  fsubs 4, 4, 5
  03e4348  fsubs 1, 3, 1
  03e434c  fsubs 2, 2, 6
  03e4350  lis 3, 62
  03e4354  addi 3, 3, 16740
  03e4358  fmuls 3, 4, 4
  03e435c  fmadds 1, 1, 1, 3
  03e4360  fmadds 1, 2, 2, 1
  03e4364  lfs 2, 8(3)
  03e4368  fsqrts 1, 1
  03e436c  fcmpu 0, 1, 2
  03e4370  cror 6, 1, 2
  03e4374  bt 6, 0x3e43a0
  03e4378  addic 3, 1, 112
  03e437c  addic 4, 1, 128
  03e4380  li 5, 2
  03e4384  ori 6, 31, 0
  03e4388  li 7, 0
  03e438c  bl 0x57820
  03e4390  nop
  03e4394  cmpwi 3, 0
  03e4398  bt 2, 0x3e43a0
  03e439c  li 29, 0
  03e43a0  ori 4, 29, 0
  03e43a4  addic 5, 30, 32
  03e43a8  li 6, 0
  03e43ac  addic 7, 1, 144
  03e43b0  li 9, 0
  03e43b4  addic 8, 1, 148
  03e43b8  ori 3, 31, 0
  03e43bc  li 10, 4
  03e43c0  bl 0x106840
  03e43c4  nop
  03e43c8  lwz 4, 144(1)
  03e43cc  ori 28, 3, 0
  03e43d0  cmpwi 4, 1
  03e43d4  bt 2, 0x3e49fc
  03e43d8  lbz 3, 32(31)
  03e43dc  cmpwi 3, 14
  03e43e0  bt 2, 0x3e49fc
  03e43e4  lfs 1, 32(30)
  03e43e8  lfs 2, 148(1)
  03e43ec  fsubs 1, 1, 2
  03e43f0  fcmpu 0, 1, 28
  03e43f4  stfs 1, 32(30)
  03e43f8  bt 1, 0x3e4400
  03e43fc  li 28, 1
  03e4400  lis 3, 62
  03e4404  lis 26, 133
  03e4408  addi 27, 3, 16740
  03e440c  lfs 1, 12(27)
  03e4410  lfs 2, 15804(26)
  03e4414  fmuls 1, 2, 1
  03e4418  bl 0x502758
  03e441c  nop
  03e4420  stw 3, 144(30)
  03e4424  li 6, 9
  03e4428  lfs 1, 16(27)
  03e442c  lis 3, 133
  03e4430  lfs 2, 15804(26)
  03e4434  lis 4, 114
  03e4438  li 5, 0
  03e443c  fmuls 1, 2, 1
  03e4440  stw 6, 148(30)
  03e4444  cmpwi 28, 2
  03e4448  stfs 1, 152(30)
  03e444c  lfs 1, 15856(3)
  03e4450  lfs 2, -3048(4)
  03e4454  stb 5, 173(30)
  03e4458  fmuls 1, 1, 2
  03e445c  stfs 1, 128(30)
  03e4460  bt 1, 0x3e4478
  03e4464  cmpwi 28, -1
  03e4468  cmpwi 1, 28, 0
  03e446c  bf 1, 0x3e49ec
  03e4470  bf 5, 0x3e49ec
  03e4474  b 0x3e4704
  03e4478  cmpwi 28, 10
  03e447c  cmpwi 1, 28, 8
  03e4480  bt 1, 0x3e49ec
  03e4484  bf 5, 0x3e4494
  03e4488  li 3, 250
  03e448c  stb 3, 103(30)
  03e4490  b 0x3e49ec
  03e4494  lis 3, 133
  03e4498  lis 4, 114
  03e449c  lis 5, 133
  03e44a0  lfs 1, 15788(3)
  03e44a4  lfs 2, -3052(4)
  03e44a8  lis 3, 16544
  03e44ac  fmuls 1, 1, 2
  03e44b0  lis 4, 16672
  03e44b4  stfs 1, 136(30)
  03e44b8  lfs 1, 15792(5)
  03e44bc  stw 3, 192(30)
  03e44c0  fmuls 1, 1, 2
  03e44c4  stw 4, 196(30)
  03e44c8  stfs 1, 140(30)
  03e44cc  lwz 3, 32(29)
  03e44d0  lfs 1, 16(31)
  03e44d4  lfs 2, 20(31)
  03e44d8  lfs 3, 16(3)
  03e44dc  lfs 4, 20(3)
  03e44e0  fsubs 1, 1, 3
  03e44e4  fsubs 2, 2, 4
  03e44e8  lis 3, 115
  03e44ec  addic 3, 3, 22784
  03e44f0  fabs 3, 1
  03e44f4  fabs 4, 2
  03e44f8  stfs 1, 196(1)
  03e44fc  stfs 2, 200(1)
  03e4500  fsubs 1, 3, 4
  03e4504  stfs 1, 204(1)
  03e4508  lwz 4, 196(1)
  03e450c  lfs 1, 196(1)
  03e4510  lwz 5, 200(1)
  03e4514  lfs 2, 200(1)
  03e4518  lwz 6, 204(1)
  03e451c  rlwinm 5, 5, 3, 29, 29
  03e4520  fabs 5, 2
  03e4524  lfs 2, 204(1)
  03e4528  fabs 1, 1
  03e452c  rlwimi 5, 6, 2, 30, 30
  03e4530  fsub 6, 2, 28
  03e4534  fsub 7, 2, 28
  03e4538  rlwimi 5, 4, 4, 28, 28
  03e453c  ori 4, 3, 0
  03e4540  rlwimi 4, 5, 2, 26, 28
  03e4544  slwi 5, 5, 2
  03e4548  clrldi 4, 4, 32
  03e454c  fsel 4, 6, 1, 4
  03e4550  lfsx 1, 3, 5
  03e4554  fsel 3, 7, 5, 3
  03e4558  lfs 2, 4(4)
  03e455c  fcmpu 0, 4, 28
  03e4560  bt 1, 0x3e456c
  03e4564  fmr 1, 28
  03e4568  b 0x3e4690
  03e456c  fsubs 5, 3, 4
  03e4570  fadds 3, 3, 4
  03e4574  addic 3, 1, 16
  03e4578  li 6, 2
  03e457c  addic 5, 3, 304
  03e4580  addic 4, 3, 288
  03e4584  mtctr 6
  03e4588  fdivs 3, 5, 3
  03e458c  fmuls 4, 3, 3
  03e4590  stfs 3, 316(1)
  03e4594  stfs 3, 308(1)
  03e4598  stfs 3, 312(1)
  03e459c  stfs 3, 304(1)
  03e45a0  lfs 6, 316(1)
  03e45a4  lfs 7, 308(1)
  03e45a8  lfs 8, 312(1)
  03e45ac  fmuls 5, 4, 4
  03e45b0  fmuls 7, 7, 4
  03e45b4  fmuls 6, 6, 5
  03e45b8  fmuls 3, 5, 5
  03e45bc  fmuls 5, 8, 5
  03e45c0  stfs 7, 308(1)
  03e45c4  fmuls 4, 6, 4
  03e45c8  stfs 5, 312(1)
  03e45cc  stfs 4, 316(1)
  03e45d0  lfs 4, 288(3)
  03e45d4  fmuls 4, 4, 3
  03e45d8  stfs 4, 304(3)
  03e45dc  lfs 4, 4(4)
  03e45e0  addic 4, 4, 8
  03e45e4  fmuls 4, 4, 3
  03e45e8  addic 3, 3, 8
  03e45ec  stfs 4, 4(5)
  03e45f0  addic 5, 5, 8
  03e45f4  bdnz 0x3e45d0
  03e45f8  li 5, 4
  03e45fc  ori 3, 1, 0
  03e4600  mtctr 5
  03e4604  lis 4, 115
  03e4608  addic 5, 3, 304
  03e460c  addic 4, 4, 22752
  03e4610  ori 7, 5, 0
  03e4614  lfs 3, 304(3)
  03e4618  lfs 4, 0(4)
  03e461c  fmuls 3, 3, 4
  03e4620  lfs 4, 4(4)
  03e4624  addic 4, 4, 8
  03e4628  stfs 3, 304(3)
  03e462c  lfs 3, 4(5)
  03e4630  addic 3, 3, 8
  03e4634  fmuls 3, 3, 4
  03e4638  stfs 3, 4(5)
  03e463c  addic 5, 5, 8
  03e4640  bdnz 0x3e4614
  03e4644  ori 3, 1, 0
  03e4648  fmr 3, 28
  03e464c  mtctr 6
  03e4650  lfs 4, 304(3)
  03e4654  fadds 3, 3, 4
  03e4658  lfs 4, 4(7)
  03e465c  addic 3, 3, 16
  03e4660  lfs 5, 8(7)
  03e4664  lfs 6, 12(7)
  03e4668  addic 7, 7, 16
  03e466c  fadds 3, 3, 4
  03e4670  fadds 3, 3, 5
  03e4674  fadds 3, 3, 6
  03e4678  bdnz 0x3e4650
  03e467c  lis 3, 62
  03e4680  addi 3, 3, 16740
  03e4684  lfs 4, 20(3)
  03e4688  fadds 3, 3, 4
  03e468c  fmadds 1, 3, 1, 2
  03e4690  stfs 1, 152(1)
  03e4694  addic 5, 1, 152
  03e4698  lfs 1, 16(29)
  03e469c  addic 6, 30, 136
  03e46a0  lfs 2, 24(29)
  03e46a4  addic 7, 30, 140
  03e46a8  stfs 1, 48(1)
  03e46ac  stfs 2, 56(1)
  03e46b0  lfs 1, 20(29)
  03e46b4  lfs 2, 28(29)
  03e46b8  stfs 1, 52(1)
  03e46bc  stfs 2, 60(1)
  03e46c0  ld 3, 48(1)
  03e46c4  ld 4, 56(1)
  03e46c8  bl 0x107de8
  03e46cc  nop
  03e46d0  ori 3, 31, 0
  03e46d4  lfs 1, 152(1)
  03e46d8  addic 4, 30, 112
  03e46dc  li 6, 5
  03e46e0  li 7, 1
  03e46e4  li 8, 0
  03e46e8  bl 0x10ad80
  03e46ec  nop
  03e46f0  li 3, 11
  03e46f4  li 4, 120
  03e46f8  stb 3, 32(31)
  03e46fc  stb 4, 103(30)
  03e4700  b 0x3e49ec
  03e4704  lis 3, 133
  03e4708  lis 4, 114
  03e470c  li 6, 0
  03e4710  lis 5, 133
  03e4714  lfs 1, 15860(3)
  03e4718  lfs 2, -3048(4)
  03e471c  lis 3, 114
  03e4720  lhz 4, 52(31)
  03e4724  fmuls 1, 1, 2
  03e4728  rlwimi 4, 6, 0, 19, 19
  03e472c  lis 6, 133
  03e4730  sth 4, 52(31)
  03e4734  lis 4, 16560
  03e4738  stfs 1, 128(30)
  03e473c  lfs 1, 15796(5)
  03e4740  lfs 2, -3052(3)
  03e4744  lis 3, 16688
  03e4748  fmuls 1, 1, 2
  03e474c  stfs 1, 136(30)
  03e4750  lfs 1, 15800(6)
  03e4754  stw 4, 192(30)
  03e4758  fmuls 1, 1, 2
  03e475c  stw 3, 196(30)
  03e4760  stfs 1, 140(30)
  03e4764  lwz 3, 32(29)
  03e4768  lfs 1, 16(31)
  03e476c  lfs 2, 20(31)
  03e4770  lfs 3, 16(3)
  03e4774  lfs 4, 20(3)
  03e4778  fsubs 1, 1, 3
  03e477c  fsubs 2, 2, 4
  03e4780  lis 3, 115
  03e4784  addic 3, 3, 22784
  03e4788  fabs 3, 1
  03e478c  fabs 4, 2
  03e4790  stfs 1, 184(1)
  03e4794  stfs 2, 188(1)
  03e4798  fsubs 1, 3, 4
  03e479c  stfs 1, 192(1)
  03e47a0  lwz 4, 184(1)
  03e47a4  lfs 1, 184(1)
  03e47a8  lwz 5, 188(1)
  03e47ac  lfs 2, 188(1)
  03e47b0  lwz 6, 192(1)
  03e47b4  rlwinm 5, 5, 3, 29, 29
  03e47b8  fabs 5, 2
  03e47bc  lfs 2, 192(1)
  03e47c0  fabs 1, 1
  03e47c4  rlwimi 5, 6, 2, 30, 30
  03e47c8  fsub 6, 2, 28
  03e47cc  fsub 7, 2, 28
  03e47d0  rlwimi 5, 4, 4, 28, 28
  03e47d4  ori 4, 3, 0
  03e47d8  rlwimi 4, 5, 2, 26, 28
  03e47dc  slwi 5, 5, 2
  03e47e0  clrldi 4, 4, 32
  03e47e4  fsel 4, 6, 1, 4
  03e47e8  lfsx 1, 3, 5
  03e47ec  fsel 3, 7, 5, 3
  03e47f0  lfs 2, 4(4)
  03e47f4  fcmpu 0, 4, 28
  03e47f8  bt 1, 0x3e4804
  03e47fc  fmr 1, 28
  03e4800  b 0x3e4928
  03e4804  fsubs 5, 3, 4
  03e4808  fadds 3, 3, 4
  03e480c  addic 3, 1, 16
  03e4810  li 6, 2
  03e4814  addic 5, 3, 272
  03e4818  addic 4, 3, 256
  03e481c  mtctr 6
  03e4820  fdivs 3, 5, 3
  03e4824  fmuls 4, 3, 3
  03e4828  stfs 3, 284(1)
  03e482c  stfs 3, 276(1)
  03e4830  stfs 3, 280(1)
  03e4834  stfs 3, 272(1)
  03e4838  lfs 6, 284(1)
  03e483c  lfs 7, 276(1)
  03e4840  lfs 8, 280(1)
  03e4844  fmuls 5, 4, 4
  03e4848  fmuls 7, 7, 4
  03e484c  fmuls 6, 6, 5
  03e4850  fmuls 3, 5, 5
  03e4854  fmuls 5, 8, 5
  03e4858  stfs 7, 276(1)
  03e485c  fmuls 4, 6, 4
  03e4860  stfs 5, 280(1)
  03e4864  stfs 4, 284(1)
  03e4868  lfs 4, 256(3)
  03e486c  fmuls 4, 4, 3
  03e4870  stfs 4, 272(3)
  03e4874  lfs 4, 4(4)
  03e4878  addic 4, 4, 8
  03e487c  fmuls 4, 4, 3
  03e4880  addic 3, 3, 8
  03e4884  stfs 4, 4(5)
  03e4888  addic 5, 5, 8
  03e488c  bdnz 0x3e4868
  03e4890  li 5, 4
  03e4894  ori 3, 1, 0
  03e4898  mtctr 5
  03e489c  lis 4, 115
  03e48a0  addic 5, 3, 272
  03e48a4  addic 4, 4, 22752
  03e48a8  ori 7, 5, 0
  03e48ac  lfs 3, 272(3)
  03e48b0  lfs 4, 0(4)
  03e48b4  fmuls 3, 3, 4
  03e48b8  lfs 4, 4(4)
  03e48bc  addic 4, 4, 8
  03e48c0  stfs 3, 272(3)
  03e48c4  lfs 3, 4(5)
  03e48c8  addic 3, 3, 8
  03e48cc  fmuls 3, 3, 4
  03e48d0  stfs 3, 4(5)
  03e48d4  addic 5, 5, 8
  03e48d8  bdnz 0x3e48ac
  03e48dc  ori 3, 1, 0
  03e48e0  fmr 3, 28
  03e48e4  mtctr 6
  03e48e8  lfs 4, 272(3)
  03e48ec  fadds 3, 3, 4
  03e48f0  lfs 4, 4(7)
  03e48f4  addic 3, 3, 16
  03e48f8  lfs 5, 8(7)
  03e48fc  lfs 6, 12(7)
  03e4900  addic 7, 7, 16
  03e4904  fadds 3, 3, 4
  03e4908  fadds 3, 3, 5
  03e490c  fadds 3, 3, 6
  03e4910  bdnz 0x3e48e8
  03e4914  lis 3, 62
  03e4918  addi 3, 3, 16740
  03e491c  lfs 4, 20(3)
  03e4920  fadds 3, 3, 4
  03e4924  fmadds 1, 3, 1, 2
  03e4928  stfs 1, 156(1)
  03e492c  addic 5, 1, 156
  03e4930  lfs 1, 16(29)
  03e4934  addic 6, 30, 136
  03e4938  lfs 2, 24(29)
  03e493c  addic 7, 30, 140
  03e4940  stfs 1, 48(1)
  03e4944  stfs 2, 56(1)
  03e4948  lfs 1, 20(29)
  03e494c  lfs 2, 28(29)
  03e4950  stfs 1, 52(1)
  03e4954  stfs 2, 60(1)
  03e4958  ld 3, 48(1)
  03e495c  ld 4, 56(1)
  03e4960  bl 0x107de8
  03e4964  nop
  03e4968  ori 3, 31, 0
  03e496c  lfs 1, 156(1)
  03e4970  addic 4, 30, 112
  03e4974  li 6, 6
  03e4978  li 7, 1
  03e497c  li 8, 0
  03e4980  bl 0x10ad80
  03e4984  nop
  03e4988  li 3, 14
  03e498c  li 4, 240
  03e4990  stb 3, 32(31)
  03e4994  stb 4, 103(30)
  03e4998  lwz 29, 32(29)
  03e499c  cmpwi 29, 0
  03e49a0  bt 2, 0x3e49d8
  03e49a4  lwz 29, 36(29)
  03e49a8  cmpwi 29, 0
  03e49ac  bt 2, 0x3e49d8
  03e49b0  lhz 3, 70(29)
  03e49b4  extsh 3, 3
  03e49b8  cmpwi 3, 5
  03e49bc  bf 2, 0x3e49d8
  03e49c0  ori 3, 31, 0
  03e49c4  li 4, 2048
  03e49c8  li 5, -1
  03e49cc  bl 0xfd8d0
  03e49d0  nop
  03e49d4  b 0x3e49ec
  03e49d8  ori 3, 31, 0
  03e49dc  li 4, 0
  03e49e0  li 5, -1
  03e49e4  bl 0xfd8d0
  03e49e8  nop
  03e49ec  addic 4, 30, 96
  03e49f0  ori 3, 31, 0
  03e49f4  bl 0x10c808
  03e49f8  nop
  03e49fc  li 5, 255
  03e4a00  ori 3, 31, 0
  03e4a04  addic 4, 30, 96
  03e4a08  stb 5, 164(31)
  03e4a0c  bl 0x10c9a0
  03e4a10  nop
  03e4a14  lwz 3, 56(30)
  03e4a18  cmpwi 3, 0
  03e4a1c  bt 2, 0x3e4a58
  03e4a20  lis 3, 62
  03e4a24  addi 3, 3, 16740
  03e4a28  lfs 1, 24(3)
  03e4a2c  lfs 2, 28(3)
  03e4a30  bl 0xfcbe8
  03e4a34  nop
  03e4a38  lis 3, 114
  03e4a3c  lfs 2, -3056(3)
  03e4a40  fmuls 1, 1, 2
  03e4a44  bl 0x502758
  03e4a48  nop
  03e4a4c  li 4, 0
  03e4a50  stw 3, 688(30)
  03e4a54  stw 4, 56(30)
  03e4a58  addic 3, 30, 688
  03e4a5c  bl 0x4fff60
  03e4a60  nop
  03e4a64  lwz 4, 688(30)
  03e4a68  lwz 3, 716(30)
  03e4a6c  cmpwi 4, 0
  03e4a70  bt 2, 0x3e4a8c
  03e4a74  lis 4, 62
  03e4a78  lfs 1, 668(30)
  03e4a7c  addi 4, 4, 16740
  03e4a80  lfs 2, 32(4)
  03e4a84  fadds 1, 1, 2
  03e4a88  b 0x3e4a90
  03e4a8c  lfs 1, 668(30)
  03e4a90  lis 4, 165
  03e4a94  stfs 1, 672(30)
  03e4a98  slwi 3, 3, 2
  03e4a9c  addic 5, 4, 7136
  03e4aa0  extsw 6, 3
  03e4aa4  ori 3, 31, 0
  03e4aa8  addic 4, 30, 288
  03e4aac  li 7, 0
  03e4ab0  lwzx 5, 5, 6
  03e4ab4  li 6, 0
  03e4ab8  addic 8, 5, 16
  03e4abc  lwz 9, 0(5)
  03e4ac0  extsw 9, 9
  03e4ac4  bl 0x111ba0
  03e4ac8  nop
  03e4acc  cmpwi 3, 2
  03e4ad0  bt 2, 0x3e4b34
  03e4ad4  lfs 1, 628(30)
  03e4ad8  lfs 2, 292(30)
  03e4adc  lfs 3, 624(30)
  03e4ae0  fsubs 1, 1, 2
  03e4ae4  lfs 2, 288(30)
  03e4ae8  fsubs 2, 3, 2
  03e4aec  fmuls 1, 1, 1
  03e4af0  fmadds 1, 2, 2, 1
  03e4af4  lfs 2, 672(30)
  03e4af8  fsqrts 1, 1
  03e4afc  fcmpu 0, 1, 2
  03e4b00  bt 1, 0x3e4b2c
  03e4b04  lfs 1, 24(31)
  03e4b08  lfs 2, 296(30)
  03e4b0c  lis 3, 62
  03e4b10  fsubs 1, 1, 2
  03e4b14  addi 3, 3, 16740
  03e4b18  lfs 2, 36(3)
  03e4b1c  fabs 1, 1
  03e4b20  fcmpu 0, 1, 2
  03e4b24  cror 6, 0, 2
  03e4b28  bt 6, 0x3e4b34
  03e4b2c  li 3, 2
  03e4b30  stw 3, 356(30)
  03e4b34  lwz 3, 712(30)
  03e4b38  cmpwi 3, -1
  03e4b3c  bf 1, 0x3e4bbc
  03e4b40  extsw 4, 3
  03e4b44  ori 3, 31, 0
  03e4b48  bl 0x3e4098
  03e4b4c  cmpwi 3, 0
  03e4b50  bt 2, 0x3e4bbc
  03e4b54  lwz 4, 356(30)
  03e4b58  cmpwi 4, 2
  03e4b5c  bt 2, 0x3e4bb0
  03e4b60  lwz 4, 352(30)
  03e4b64  lfs 1, 20(31)
  03e4b68  lfs 2, 20(3)
  03e4b6c  lfs 3, 16(31)
  03e4b70  fsubs 2, 1, 2
  03e4b74  lfs 4, 20(4)
  03e4b78  lfs 5, 16(3)
  03e4b7c  fsubs 1, 1, 4
  03e4b80  lfs 4, 16(4)
  03e4b84  fsubs 5, 3, 5
  03e4b88  fsubs 3, 3, 4
  03e4b8c  fmuls 2, 2, 2
  03e4b90  fmuls 1, 1, 1
  03e4b94  fmadds 2, 5, 5, 2
  03e4b98  fmadds 1, 3, 3, 1
  03e4b9c  fsqrts 2, 2
  03e4ba0  fsqrts 1, 1
  03e4ba4  fcmpu 0, 2, 1
  03e4ba8  cror 6, 1, 2
  03e4bac  bt 6, 0x3e4bbc
  03e4bb0  li 4, 1
  03e4bb4  stw 3, 352(30)
  03e4bb8  stw 4, 356(30)
  03e4bbc  lwz 3, 352(30)
  03e4bc0  cmpwi 3, 0
  03e4bc4  bf 2, 0x3e4bd8
  03e4bc8  lis 3, 151
  03e4bcc  addic 3, 3, -25376
  03e4bd0  lwz 3, 8320(3)
  03e4bd4  stw 3, 352(30)
  03e4bd8  lis 3, 62
  03e4bdc  lfs 1, 728(30)
  03e4be0  addi 29, 3, 16740
  03e4be4  lis 3, 114
  03e4be8  lfs 2, 40(29)
  03e4bec  lfs 3, -3052(3)
  03e4bf0  fmuls 2, 3, 2
  03e4bf4  bl 0x502578
  03e4bf8  nop
  03e4bfc  lfs 2, 44(29)
  03e4c00  lfs 3, 48(29)
  03e4c04  fsubs 2, 2, 1
  03e4c08  fsubs 3, 3, 1
  03e4c0c  lfs 5, 52(29)
  03e4c10  lis 3, 133
  03e4c14  lis 4, 133
  03e4c18  fsub 4, 1, 2
  03e4c1c  fsel 2, 4, 2, 1
  03e4c20  lfs 4, 56(29)
  03e4c24  fsub 6, 3, 2
  03e4c28  fsel 2, 6, 3, 2
  03e4c2c  lfs 3, 60(29)
  03e4c30  lfs 6, 64(29)
  03e4c34  lfs 8, 68(29)
  03e4c38  lwz 3, 15780(3)
  03e4c3c  lwz 4, 15784(4)
  03e4c40  extsw 3, 3
  03e4c44  extsw 4, 4
  03e4c48  fmuls 7, 2, 2
  03e4c4c  fmuls 9, 7, 2
  03e4c50  fmuls 10, 7, 9
  03e4c54  fmadds 2, 9, 5, 2
  03e4c58  fmuls 9, 7, 10
  03e4c5c  fmadds 2, 10, 4, 2
  03e4c60  lfs 4, 4(29)
  03e4c64  stfs 1, 728(30)
  03e4c68  fmuls 5, 7, 9
  03e4c6c  fmadds 2, 9, 3, 2
  03e4c70  fmadds 1, 5, 6, 2
  03e4c74  fadds 1, 1, 8
  03e4c78  fmuls 1, 1, 4
  03e4c7c  bl 0x5027bc
  03e4c80  nop
  03e4c84  stw 3, 144(31)
  03e4c88  lbz 3, 32(31)
  03e4c8c  lfs 2, 72(31)
  03e4c90  cmpwi 3, 3
  03e4c94  bf 1, 0x3e50e4
  03e4c98  cmpwi 3, 9
  03e4c9c  bt 1, 0x3e50e4
  03e4ca0  lis 3, 151
  03e4ca4  lwz 29, 352(30)
  03e4ca8  addic 3, 3, -25376
  03e4cac  lwz 3, 8320(3)
  03e4cb0  cmpw 29, 3
  03e4cb4  bf 2, 0x3e50e4
  03e4cb8  lfs 31, 16(29)
  03e4cbc  lfs 1, 16(31)
  03e4cc0  lfs 30, 20(29)
  03e4cc4  lfs 3, 20(31)
  03e4cc8  fsubs 31, 31, 1
  03e4ccc  lfs 29, 24(29)
  03e4cd0  fsubs 30, 30, 3
  03e4cd4  lis 29, 115
  03e4cd8  addic 29, 29, 22784
  03e4cdc  fabs 4, 31
  03e4ce0  fabs 5, 30
  03e4ce4  stfs 31, 172(1)
  03e4ce8  stfs 30, 176(1)
  03e4cec  lfs 3, 24(31)
  03e4cf0  fsubs 29, 29, 3
  03e4cf4  fsubs 1, 4, 5
  03e4cf8  stfs 1, 180(1)
  03e4cfc  lwz 3, 172(1)
  03e4d00  lfs 1, 172(1)
  03e4d04  lwz 4, 176(1)
  03e4d08  lfs 3, 176(1)
  03e4d0c  lwz 5, 180(1)
  03e4d10  rlwinm 4, 4, 3, 29, 29
  03e4d14  fabs 6, 3
  03e4d18  lfs 3, 180(1)
  03e4d1c  fabs 1, 1
  03e4d20  rlwimi 4, 5, 2, 30, 30
  03e4d24  fsub 7, 3, 28
  03e4d28  fsub 8, 3, 28
  03e4d2c  rlwimi 4, 3, 4, 28, 28
  03e4d30  ori 3, 29, 0
  03e4d34  rlwimi 3, 4, 2, 26, 28
  03e4d38  slwi 4, 4, 2
  03e4d3c  clrldi 3, 3, 32
  03e4d40  fsel 5, 7, 1, 5
  03e4d44  lfsx 1, 29, 4
  03e4d48  fsel 4, 8, 6, 4
  03e4d4c  lfs 3, 4(3)
  03e4d50  fcmpu 0, 5, 28
  03e4d54  bt 1, 0x3e4d60
  03e4d58  fmr 1, 28
  03e4d5c  b 0x3e4e84
  03e4d60  fsubs 6, 4, 5
  03e4d64  fadds 4, 4, 5
  03e4d68  addic 3, 1, 16
  03e4d6c  li 7, 2
  03e4d70  addic 5, 3, 240
  03e4d74  addic 4, 3, 224
  03e4d78  mtctr 7
  03e4d7c  fdivs 4, 6, 4
  03e4d80  fmuls 5, 4, 4
  03e4d84  stfs 4, 252(1)
  03e4d88  stfs 4, 244(1)
  03e4d8c  stfs 4, 248(1)
  03e4d90  stfs 4, 240(1)
  03e4d94  lfs 7, 252(1)
  03e4d98  lfs 8, 244(1)
  03e4d9c  lfs 9, 248(1)
  03e4da0  fmuls 6, 5, 5
  03e4da4  fmuls 8, 8, 5
  03e4da8  fmuls 7, 7, 6
  03e4dac  fmuls 4, 6, 6
  03e4db0  fmuls 6, 9, 6
  03e4db4  stfs 8, 244(1)
  03e4db8  fmuls 5, 7, 5
  03e4dbc  stfs 6, 248(1)
  03e4dc0  stfs 5, 252(1)
  03e4dc4  lfs 5, 224(3)
  03e4dc8  fmuls 5, 5, 4
  03e4dcc  stfs 5, 240(3)
  03e4dd0  lfs 5, 4(4)
  03e4dd4  addic 4, 4, 8
  03e4dd8  fmuls 5, 5, 4
  03e4ddc  addic 3, 3, 8
  03e4de0  stfs 5, 4(5)
  03e4de4  addic 5, 5, 8
  03e4de8  bdnz 0x3e4dc4
  03e4dec  li 5, 4
  03e4df0  ori 3, 1, 0
  03e4df4  mtctr 5
  03e4df8  lis 4, 115
  03e4dfc  addic 5, 3, 240
  03e4e00  addic 4, 4, 22752
  03e4e04  ori 6, 5, 0
  03e4e08  lfs 4, 240(3)
  03e4e0c  lfs 5, 0(4)
  03e4e10  fmuls 4, 4, 5
  03e4e14  lfs 5, 4(4)
  03e4e18  addic 4, 4, 8
  03e4e1c  stfs 4, 240(3)
  03e4e20  lfs 4, 4(5)
  03e4e24  addic 3, 3, 8
  03e4e28  fmuls 4, 4, 5
  03e4e2c  stfs 4, 4(5)
  03e4e30  addic 5, 5, 8
  03e4e34  bdnz 0x3e4e08
  03e4e38  ori 3, 1, 0
  03e4e3c  fmr 4, 28
  03e4e40  mtctr 7
  03e4e44  lfs 5, 240(3)
  03e4e48  fadds 4, 4, 5
  03e4e4c  lfs 5, 4(6)
  03e4e50  addic 3, 3, 16
  03e4e54  lfs 6, 8(6)
  03e4e58  lfs 7, 12(6)
  03e4e5c  addic 6, 6, 16
  03e4e60  fadds 4, 4, 5
  03e4e64  fadds 4, 4, 6
  03e4e68  fadds 4, 4, 7
  03e4e6c  bdnz 0x3e4e44
  03e4e70  lis 3, 62
  03e4e74  addi 3, 3, 16740
  03e4e78  lfs 5, 20(3)
  03e4e7c  fadds 4, 4, 5
  03e4e80  fmadds 1, 4, 1, 3
  03e4e84  bl 0x5025e0
  03e4e88  nop
  03e4e8c  fmuls 2, 30, 30
  03e4e90  stfs 29, 164(1)
  03e4e94  fabs 4, 29
  03e4e98  fmadds 2, 31, 31, 2
  03e4e9c  fsqrts 2, 2
  03e4ea0  lwz 3, 164(1)
  03e4ea4  lfs 3, 164(1)
  03e4ea8  rlwinm 3, 3, 3, 29, 29
  03e4eac  fabs 3, 3
  03e4eb0  fabs 5, 2
  03e4eb4  stfs 2, 160(1)
  03e4eb8  fsubs 2, 5, 4
  03e4ebc  stfs 2, 168(1)
  03e4ec0  lwz 4, 160(1)
  03e4ec4  lfs 2, 160(1)
  03e4ec8  lwz 5, 168(1)
  03e4ecc  lfs 6, 168(1)
  03e4ed0  fabs 2, 2
  03e4ed4  rlwimi 3, 5, 2, 30, 30
  03e4ed8  fsub 7, 6, 28
  03e4edc  fsub 6, 6, 28
  03e4ee0  rlwimi 3, 4, 4, 28, 28
  03e4ee4  ori 5, 29, 0
  03e4ee8  slwi 4, 3, 2
  03e4eec  rlwimi 5, 3, 2, 26, 28
  03e4ef0  clrldi 3, 5, 32
  03e4ef4  lfsx 31, 29, 4
  03e4ef8  lhz 29, 52(31)
  03e4efc  fsel 4, 7, 2, 4
  03e4f00  fsel 3, 6, 3, 5
  03e4f04  lfs 2, 4(3)
  03e4f08  fcmpu 0, 4, 28
  03e4f0c  bt 1, 0x3e4f14
  03e4f10  b 0x3e5034
  03e4f14  fsubs 5, 3, 4
  03e4f18  fadds 3, 3, 4
  03e4f1c  addic 3, 1, 16
  03e4f20  li 6, 2
  03e4f24  addic 4, 3, 192
  03e4f28  addic 5, 3, 208
  03e4f2c  mtctr 6
  03e4f30  fdivs 3, 5, 3
  03e4f34  fmuls 4, 3, 3
  03e4f38  stfs 3, 220(1)
  03e4f3c  stfs 3, 212(1)
  03e4f40  stfs 3, 216(1)
  03e4f44  stfs 3, 208(1)
  03e4f48  lfs 6, 220(1)
  03e4f4c  lfs 7, 212(1)
  03e4f50  lfs 8, 216(1)
  03e4f54  fmuls 5, 4, 4
  03e4f58  fmuls 7, 7, 4
  03e4f5c  fmuls 6, 6, 5
  03e4f60  fmuls 3, 5, 5
  03e4f64  fmuls 5, 8, 5
  03e4f68  stfs 7, 212(1)
  03e4f6c  fmuls 4, 6, 4
  03e4f70  stfs 5, 216(1)
  03e4f74  stfs 4, 220(1)
  03e4f78  lfs 4, 192(3)
  03e4f7c  fmuls 4, 4, 3
  03e4f80  stfs 4, 208(3)
  03e4f84  lfs 4, 4(4)
  03e4f88  addic 3, 3, 8
  03e4f8c  addic 4, 4, 8
  03e4f90  fmuls 4, 4, 3
  03e4f94  stfs 4, 4(5)
  03e4f98  addic 5, 5, 8
  03e4f9c  bdnz 0x3e4f78
  03e4fa0  li 5, 4
  03e4fa4  ori 3, 1, 0
  03e4fa8  mtctr 5
  03e4fac  lis 4, 115
  03e4fb0  addic 5, 3, 208
  03e4fb4  addic 4, 4, 22752
  03e4fb8  ori 7, 5, 0
  03e4fbc  lfs 3, 208(3)
  03e4fc0  lfs 4, 0(4)
  03e4fc4  fmuls 3, 3, 4
  03e4fc8  lfs 4, 4(4)
  03e4fcc  addic 4, 4, 8
  03e4fd0  stfs 3, 208(3)
  03e4fd4  lfs 3, 4(5)
  03e4fd8  addic 3, 3, 8
  03e4fdc  fmuls 3, 3, 4
  03e4fe0  stfs 3, 4(5)
  03e4fe4  addic 5, 5, 8
  03e4fe8  bdnz 0x3e4fbc
  03e4fec  ori 3, 1, 0
  03e4ff0  mtctr 6
  03e4ff4  lfs 3, 208(3)
  03e4ff8  lfs 4, 4(7)
  03e4ffc  fadds 3, 28, 3
  03e5000  lfs 5, 8(7)
  03e5004  lfs 28, 12(7)
  03e5008  addic 3, 3, 16
  03e500c  addic 7, 7, 16
  03e5010  fadds 3, 3, 4
  03e5014  fadds 3, 3, 5
  03e5018  fadds 28, 3, 28
  03e501c  bdnz 0x3e4ff4
  03e5020  lis 3, 62
  03e5024  addi 3, 3, 16740
  03e5028  lfs 3, 20(3)
  03e502c  fadds 28, 28, 3
  03e5030  fmadds 28, 28, 31, 2
  03e5034  rlwinm 3, 29, 0, 16, 16
  03e5038  fneg 28, 28
  03e503c  cmpwi 3, 0
  03e5040  bt 2, 0x3e5048
  03e5044  fneg 1, 1
  03e5048  lis 3, 62
  03e504c  addi 3, 3, 16740
  03e5050  lfs 2, 72(3)
  03e5054  fcmpu 0, 1, 2
  03e5058  cror 6, 0, 2
  03e505c  bt 6, 0x3e5068
  03e5060  fmr 1, 2
  03e5064  b 0x3e5084
  03e5068  lis 3, 62
  03e506c  addi 3, 3, 16740
  03e5070  lfs 2, 76(3)
  03e5074  fcmpu 0, 1, 2
  03e5078  cror 6, 1, 2
  03e507c  bt 6, 0x3e5084
  03e5080  fmr 1, 2
  03e5084  lis 3, 62
  03e5088  addi 3, 3, 16740
  03e508c  lfs 2, 80(3)
  03e5090  fcmpu 0, 28, 2
  03e5094  cror 6, 0, 2
  03e5098  bt 6, 0x3e50a4
  03e509c  fmr 28, 2
  03e50a0  b 0x3e50c0
  03e50a4  lis 3, 62
  03e50a8  addi 3, 3, 16740
  03e50ac  lfs 2, 84(3)
  03e50b0  fcmpu 0, 28, 2
  03e50b4  cror 6, 1, 2
  03e50b8  bt 6, 0x3e50c0
  03e50bc  fmr 28, 2
  03e50c0  lis 3, 62
  03e50c4  addi 3, 3, 16740
  03e50c8  lfs 2, 88(3)
  03e50cc  fmuls 2, 1, 2
  03e50d0  stfs 2, 472(30)
  03e50d4  lfs 2, 92(3)
  03e50d8  stfs 28, 468(30)
  03e50dc  fmuls 1, 1, 2
  03e50e0  stfs 1, 600(30)
  03e50e4  lis 3, 62
  03e50e8  lis 29, 114
  03e50ec  addi 3, 3, 16740
  03e50f0  addic 4, 30, 368
  03e50f4  li 5, 1
  03e50f8  lfs 31, 96(3)
  03e50fc  lfs 30, 92(3)
  03e5100  lfs 3, -3060(29)
  03e5104  ori 3, 31, 0
  03e5108  fmuls 2, 3, 30
  03e510c  fmuls 1, 3, 31
  03e5110  bl 0x1167c8
  03e5114  nop
  03e5118  lfs 2, -3060(29)
  03e511c  addic 4, 30, 496
  03e5120  fmuls 1, 2, 31
  03e5124  ori 3, 31, 0
  03e5128  fmuls 2, 2, 30
  03e512c  li 5, 2
  03e5130  bl 0x1167c8
  03e5134  nop
  03e5138  ld 0, 432(1)
  03e513c  mtlr 0
  03e5140  lfd 28, 384(1)
  03e5144  lfd 29, 392(1)
  03e5148  lfd 30, 400(1)
  03e514c  lfd 31, 408(1)
  03e5150  ld 26, 336(1)
  03e5154  ld 27, 344(1)
  03e5158  ld 28, 352(1)
  03e515c  ld 29, 360(1)
  03e5160  ld 30, 368(1)
  03e5164  ld 31, 376(1)
  03e5168  addi 1, 1, 416
  03e516c  blr

UpdateMoby_623:   # 0x3e5228, 0x1e88 bytes
  03e5228  stdu 1, -464(1)
  03e522c  mflr 0
  03e5230  std 0, 480(1)
  03e5234  stfd 28, 432(1)
  03e5238  stfd 29, 440(1)
  03e523c  stfd 30, 448(1)
  03e5240  stfd 31, 456(1)
  03e5244  std 31, 424(1)
  03e5248  lis 4, 62
  03e524c  ori 31, 3, 0
  03e5250  std 30, 416(1)
  03e5254  addi 3, 4, 20852
  03e5258  lwz 30, 120(31)
  03e525c  lfs 1, 0(3)
  03e5260  std 29, 408(1)
  03e5264  std 28, 400(1)
  03e5268  std 27, 392(1)
  03e526c  std 26, 384(1)
  03e5270  std 25, 376(1)
  03e5274  addic 3, 30, 368
  03e5278  bl 0x119ac0
  03e527c  nop
  03e5280  lis 3, 161
  03e5284  lwz 3, 1800(3)
  03e5288  cmpwi 3, 2
  03e528c  bf 2, 0x3e52b8
  03e5290  lhz 4, 52(31)
  03e5294  clrlwi 4, 4, 31
  03e5298  cmpwi 4, 0
  03e529c  bf 2, 0x3e52b8
  03e52a0  li 3, 1
  03e52a4  lhz 4, 52(31)
  03e52a8  stw 3, 732(30)
  03e52ac  ori 3, 4, 65
  03e52b0  sth 3, 52(31)
  03e52b4  b 0x3e52e4
  03e52b8  lwz 4, 732(30)
  03e52bc  cmpwi 4, 0
  03e52c0  bt 2, 0x3e52e4
  03e52c4  cmpwi 3, 0
  03e52c8  bf 2, 0x3e52e4
  03e52cc  li 3, 0
  03e52d0  lhz 5, 52(31)
  03e52d4  li 4, -66
  03e52d8  stw 3, 732(30)
  03e52dc  and 3, 5, 4
  03e52e0  sth 3, 52(31)
  03e52e4  lbz 3, 49(31)
  03e52e8  cmpwi 3, 0
  03e52ec  bt 2, 0x3e5358
  03e52f0  lis 3, 149
  03e52f4  lfs 1, 20(31)
  03e52f8  addic 3, 3, 5056
  03e52fc  lfs 2, 16(31)
  03e5300  lfs 3, 324(3)
  03e5304  lfs 4, 320(3)
  03e5308  fsubs 1, 1, 3
  03e530c  fsubs 2, 2, 4
  03e5310  lfs 3, 24(31)
  03e5314  lfs 4, 328(3)
  03e5318  fsubs 3, 3, 4
  03e531c  lis 3, 62
  03e5320  fmuls 1, 1, 1
  03e5324  addi 3, 3, 20852
  03e5328  fmadds 1, 2, 2, 1
  03e532c  lfs 2, 4(3)
  03e5330  fmadds 1, 3, 3, 1
  03e5334  fsqrts 1, 1
  03e5338  fcmpu 0, 1, 2
  03e533c  cror 6, 1, 2
  03e5340  bt 6, 0x3e5358
  03e5344  ori 3, 31, 0
  03e5348  bl 0x106360
  03e534c  nop
  03e5350  li 3, 22
  03e5354  stb 3, 127(31)
  03e5358  ori 3, 31, 0
  03e535c  bl 0x3e41c8
  03e5360  lwz 4, 36(31)
  03e5364  lis 5, 133
  03e5368  lwz 29, 352(30)
  03e536c  lbz 3, 32(31)
  03e5370  cmpwi 3, 7
  03e5374  lfs 1, 36(4)
  03e5378  lfs 2, 15804(5)
  03e537c  fmuls 1, 1, 2
  03e5380  stfs 1, 44(31)
  03e5384  bt 1, 0x3e53c4
  03e5388  cmpwi 3, 7
  03e538c  bt 2, 0x3e6314
  03e5390  cmpwi 3, 6
  03e5394  bt 2, 0x3e5b4c
  03e5398  cmpwi 3, 5
  03e539c  bt 2, 0x3e5ec4
  03e53a0  cmpwi 3, 4
  03e53a4  bt 2, 0x3e61c4
  03e53a8  cmpwi 3, 2
  03e53ac  bt 2, 0x3e58b0
  03e53b0  cmpwi 3, 1
  03e53b4  bt 2, 0x3e55e8
  03e53b8  cmpwi 3, 0
  03e53bc  bt 2, 0x3e5400
  03e53c0  b 0x3e7060
  03e53c4  cmpwi 3, 15
  03e53c8  bt 2, 0x3e6008
  03e53cc  cmpwi 3, 14
  03e53d0  bt 2, 0x3e6f50
  03e53d4  cmpwi 3, 13
  03e53d8  bt 2, 0x3e6eec
  03e53dc  cmpwi 3, 11
  03e53e0  bt 2, 0x3e6dcc
  03e53e4  cmpwi 3, 10
  03e53e8  bt 2, 0x3e6cb4
  03e53ec  cmpwi 3, 9
  03e53f0  bt 2, 0x3e6b2c
  03e53f4  cmpwi 3, 8
  03e53f8  bt 2, 0x3e68a4
  03e53fc  b 0x3e7060
  03e5400  lfs 1, 16(31)
  03e5404  lis 29, 16384
  03e5408  lhz 6, 52(31)
  03e540c  li 4, 2
  03e5410  stfs 1, 624(30)
  03e5414  li 5, 1
  03e5418  ori 6, 6, 4096
  03e541c  lfs 1, 20(31)
  03e5420  lis 7, 16256
  03e5424  stfs 1, 628(30)
  03e5428  lfs 1, 24(31)
  03e542c  lis 8, 62
  03e5430  sth 6, 52(31)
  03e5434  li 3, 0
  03e5438  stfs 1, 632(30)
  03e543c  addi 28, 8, 20852
  03e5440  lfs 1, 28(31)
  03e5444  stw 29, 32(30)
  03e5448  stfs 1, 636(30)
  03e544c  sth 4, 36(30)
  03e5450  stb 5, 40(30)
  03e5454  stw 7, 48(30)
  03e5458  stb 3, 41(30)
  03e545c  stw 3, 688(30)
  03e5460  lfs 1, 8(28)
  03e5464  bl 0x502758
  03e5468  nop
  03e546c  stb 3, 88(30)
  03e5470  lfs 1, 12(28)
  03e5474  bl 0x502758
  03e5478  nop
  03e547c  stb 3, 90(30)
  03e5480  addic 3, 30, 208
  03e5484  bl 0x100f8c
  03e5488  nop
  03e548c  lis 3, 133
  03e5490  stw 29, 220(30)
  03e5494  stw 29, 216(30)
  03e5498  lfs 1, 16(28)
  03e549c  lfs 2, 15804(3)
  03e54a0  fmuls 1, 2, 1
  03e54a4  bl 0x502758
  03e54a8  nop
  03e54ac  stw 3, 208(30)
  03e54b0  lis 3, 114
  03e54b4  lfs 1, 20(28)
  03e54b8  lfs 2, -3052(3)
  03e54bc  fmuls 1, 2, 1
  03e54c0  stfs 1, 244(30)
  03e54c4  bl 0xfcc68
  03e54c8  nop
  03e54cc  li 3, 2
  03e54d0  stfs 1, 728(30)
  03e54d4  bl 0xfc620
  03e54d8  nop
  03e54dc  lfs 1, 24(31)
  03e54e0  cmpwi 3, 0
  03e54e4  lbz 3, 83(31)
  03e54e8  bt 2, 0x3e5500
  03e54ec  lis 4, 0
  03e54f0  lhz 5, 52(31)
  03e54f4  ori 4, 4, 32768
  03e54f8  or 4, 5, 4
  03e54fc  b 0x3e550c
  03e5500  li 6, 0
  03e5504  lhz 4, 52(31)
  03e5508  rlwimi 4, 6, 0, 16, 16
  03e550c  lwz 5, 692(30)
  03e5510  sth 4, 52(31)
  03e5514  cmpwi 5, 0
  03e5518  bt 2, 0x3e5554
  03e551c  li 3, 0
  03e5520  li 5, 12
  03e5524  rlwimi 4, 3, 0, 19, 19
  03e5528  lis 6, 62
  03e552c  addi 6, 6, 20852
  03e5530  sth 4, 52(31)
  03e5534  stb 5, 32(31)
  03e5538  sth 3, 50(31)
  03e553c  stb 3, 49(31)
  03e5540  stw 3, 148(31)
  03e5544  lfs 2, 24(6)
  03e5548  fsubs 1, 1, 2
  03e554c  stfs 1, 24(31)
  03e5550  b 0x3e55cc
  03e5554  lwz 5, 696(30)
  03e5558  cmpwi 5, -1
  03e555c  bf 2, 0x3e556c
  03e5560  lwz 5, 700(30)
  03e5564  cmpwi 5, -1
  03e5568  bt 2, 0x3e55a4
  03e556c  li 5, 0
  03e5570  li 6, 15
  03e5574  rlwimi 4, 5, 0, 19, 19
  03e5578  cmpwi 3, 0
  03e557c  stb 6, 32(31)
  03e5580  sth 4, 52(31)
  03e5584  bt 2, 0x3e55cc
  03e5588  ori 3, 31, 0
  03e558c  li 4, 0
  03e5590  li 5, 0
  03e5594  li 6, 0
  03e5598  bl 0xfddc0
  03e559c  nop
  03e55a0  b 0x3e55cc
  03e55a4  li 4, 1
  03e55a8  cmpwi 3, 0
  03e55ac  stb 4, 32(31)
  03e55b0  bt 2, 0x3e55cc
  03e55b4  ori 3, 31, 0
  03e55b8  li 4, 0
  03e55bc  li 5, 0
  03e55c0  li 6, 0
  03e55c4  bl 0xfddc0
  03e55c8  nop
  03e55cc  lwz 5, 708(30)
  03e55d0  addic 3, 30, 704
  03e55d4  li 4, 1
  03e55d8  extsw 5, 5
  03e55dc  bl 0x11440c
  03e55e0  nop
  03e55e4  b 0x3e7060
  03e55e8  lwz 3, 356(30)
  03e55ec  cmpwi 3, 2
  03e55f0  bt 2, 0x3e571c
  03e55f4  li 3, 9
  03e55f8  bl 0xfc620
  03e55fc  nop
  03e5600  cmpwi 3, 0
  03e5604  bf 2, 0x3e571c
  03e5608  lis 3, 62
  03e560c  lwz 5, 708(30)
  03e5610  lis 6, 133
  03e5614  addi 4, 3, 20852
  03e5618  addic 3, 30, 704
  03e561c  addic 7, 31, 16
  03e5620  extsw 5, 5
  03e5624  addic 8, 29, 16
  03e5628  lfs 1, 28(4)
  03e562c  addic 9, 1, 128
  03e5630  lfs 2, 15804(6)
  03e5634  li 4, 1
  03e5638  fmuls 1, 2, 1
  03e563c  bl 0x114d58
  03e5640  nop
  03e5644  cmpwi 3, 0
  03e5648  bt 2, 0x3e5714
  03e564c  li 3, 256
  03e5650  bl 0xfc620
  03e5654  nop
  03e5658  clrlwi 3, 3, 31
  03e565c  lfs 1, 664(30)
  03e5660  cmpwi 3, 0
  03e5664  bt 2, 0x3e5670
  03e5668  fneg 1, 1
  03e566c  stfs 1, 664(30)
  03e5670  lis 3, 62
  03e5674  addi 29, 3, 20852
  03e5678  lfs 2, 32(29)
  03e567c  fmuls 1, 1, 2
  03e5680  stfs 1, 660(30)
  03e5684  lfs 1, 36(29)
  03e5688  lfs 2, 40(29)
  03e568c  bl 0xfcbe8
  03e5690  nop
  03e5694  fctidz 1, 1
  03e5698  lfs 2, 44(29)
  03e569c  lis 3, 114
  03e56a0  li 4, 4
  03e56a4  lfs 3, -3056(3)
  03e56a8  li 3, 684
  03e56ac  fcfid 1, 1
  03e56b0  frsp 1, 1
  03e56b4  fadds 1, 1, 2
  03e56b8  fmuls 1, 3, 1
  03e56bc  fctiwz 1, 1
  03e56c0  stfiwx 1, 3, 30
  03e56c4  lbz 3, 83(31)
  03e56c8  stb 4, 32(31)
  03e56cc  cmpwi 3, 1
  03e56d0  bt 2, 0x3e571c
  03e56d4  lis 3, 62
  03e56d8  lis 4, 114
  03e56dc  addi 3, 3, 20852
  03e56e0  li 5, 0
  03e56e4  lfs 1, 48(3)
  03e56e8  lfs 2, -3056(4)
  03e56ec  ori 3, 31, 0
  03e56f0  li 4, 1
  03e56f4  fmuls 1, 2, 1
  03e56f8  fctiwz 1, 1
  03e56fc  stfd 1, 352(1)
  03e5700  lwz 6, 356(1)
  03e5704  extsw 6, 6
  03e5708  bl 0xfddc0
  03e570c  nop
  03e5710  b 0x3e571c
  03e5714  li 3, 2
  03e5718  stw 3, 356(30)
  03e571c  lwz 3, 356(30)
  03e5720  cmpwi 3, 2
  03e5724  bf 2, 0x3e5788
  03e5728  lwz 3, 688(30)
  03e572c  cmpwi 3, 0
  03e5730  bt 2, 0x3e5788
  03e5734  li 3, 6
  03e5738  lbz 4, 83(31)
  03e573c  cmpwi 4, 1
  03e5740  stb 3, 32(31)
  03e5744  bt 2, 0x3e7060
  03e5748  lis 3, 62
  03e574c  lis 4, 114
  03e5750  addi 3, 3, 20852
  03e5754  li 5, 0
  03e5758  lfs 1, 48(3)
  03e575c  lfs 2, -3056(4)
  03e5760  ori 3, 31, 0
  03e5764  fmuls 1, 2, 1
  03e5768  li 4, 1
  03e576c  fctiwz 1, 1
  03e5770  stfd 1, 352(1)
  03e5774  lwz 6, 356(1)
  03e5778  extsw 6, 6
  03e577c  bl 0xfddc0
  03e5780  nop
  03e5784  b 0x3e7060
  03e5788  lbz 3, 112(31)
  03e578c  rlwinm 3, 3, 0, 30, 30
  03e5790  cmpwi 3, 0
  03e5794  bt 2, 0x3e7060
  03e5798  lbz 3, 49(31)
  03e579c  cmpwi 3, 0
  03e57a0  bt 2, 0x3e5864
  03e57a4  li 3, 255
  03e57a8  bl 0xfc620
  03e57ac  nop
  03e57b0  clrlwi 3, 3, 31
  03e57b4  cmpwi 3, 0
  03e57b8  bt 2, 0x3e5864
  03e57bc  lis 4, 62
  03e57c0  addic 3, 30, 640
  03e57c4  addi 4, 4, 20852
  03e57c8  lfs 1, 52(4)
  03e57cc  lfs 2, 56(4)
  03e57d0  bl 0xfea60
  03e57d4  nop
  03e57d8  lfs 1, 640(30)
  03e57dc  li 3, 0
  03e57e0  lfs 2, 624(30)
  03e57e4  li 4, 2
  03e57e8  lfs 3, 644(30)
  03e57ec  fadds 1, 1, 2
  03e57f0  lfs 2, 628(30)
  03e57f4  fadds 2, 3, 2
  03e57f8  lfs 3, 632(30)
  03e57fc  stfs 3, 648(30)
  03e5800  sth 3, 722(30)
  03e5804  stfs 1, 640(30)
  03e5808  stfs 2, 644(30)
  03e580c  lbz 3, 32(31)
  03e5810  lbz 5, 83(31)
  03e5814  stb 3, 188(31)
  03e5818  cmpwi 5, 1
  03e581c  stb 4, 32(31)
  03e5820  bt 2, 0x3e7060
  03e5824  lis 3, 62
  03e5828  lis 4, 114
  03e582c  addi 3, 3, 20852
  03e5830  li 5, 0
  03e5834  lfs 1, 48(3)
  03e5838  lfs 2, -3056(4)
  03e583c  ori 3, 31, 0
  03e5840  li 4, 1
  03e5844  fmuls 1, 2, 1
  03e5848  fctiwz 1, 1
  03e584c  stfd 1, 352(1)
  03e5850  lwz 6, 356(1)
  03e5854  extsw 6, 6
  03e5858  bl 0xfddc0
  03e585c  nop
  03e5860  b 0x3e7060
  03e5864  lbz 3, 83(31)
  03e5868  cmpwi 3, 0
  03e586c  bt 2, 0x3e7060
  03e5870  lis 3, 62
  03e5874  lis 4, 114
  03e5878  addi 3, 3, 20852
  03e587c  li 5, 0
  03e5880  lfs 1, 48(3)
  03e5884  lfs 2, -3056(4)
  03e5888  ori 3, 31, 0
  03e588c  fmuls 1, 2, 1
  03e5890  li 4, 0
  03e5894  fctiwz 1, 1
  03e5898  stfd 1, 352(1)
  03e589c  lwz 6, 356(1)
  03e58a0  extsw 6, 6
  03e58a4  bl 0xfddc0
  03e58a8  nop
  03e58ac  b 0x3e7060
  03e58b0  lfs 1, 640(30)
  03e58b4  addic 29, 31, 72
  03e58b8  lfs 2, 16(31)
  03e58bc  lfs 3, 644(30)
  03e58c0  lfs 4, 20(31)
  03e58c4  fsubs 1, 1, 2
  03e58c8  fsubs 2, 3, 4
  03e58cc  bl 0x5e8338
  03e58d0  nop
  03e58d4  lis 3, 62
  03e58d8  lis 4, 114
  03e58dc  addi 28, 3, 20852
  03e58e0  lis 3, 114
  03e58e4  addic 5, 30, 656
  03e58e8  lfs 4, 60(28)
  03e58ec  lfs 3, -3048(3)
  03e58f0  lfs 5, -3052(4)
  03e58f4  ori 3, 29, 0
  03e58f8  fmuls 2, 3, 4
  03e58fc  fmuls 4, 5, 4
  03e5900  fmr 3, 2
  03e5904  bl 0x10a2e0
  03e5908  nop
  03e590c  lfs 1, 640(30)
  03e5910  lfs 31, 72(31)
  03e5914  lfs 2, 16(31)
  03e5918  lfs 3, 644(30)
  03e591c  fsubs 1, 1, 2
  03e5920  lfs 4, 20(31)
  03e5924  fsubs 2, 3, 4
  03e5928  bl 0x5e8338
  03e592c  nop
  03e5930  fmr 2, 1
  03e5934  fmr 1, 31
  03e5938  bl 0x5026a0
  03e593c  nop
  03e5940  lfs 2, 64(28)
  03e5944  fcmpu 0, 1, 2
  03e5948  cror 6, 1, 2
  03e594c  bt 6, 0x3e5a54
  03e5950  lis 3, 62
  03e5954  lfs 1, 72(31)
  03e5958  addi 29, 3, 20852
  03e595c  lfs 2, 68(29)
  03e5960  lfs 3, 72(29)
  03e5964  fadds 2, 1, 2
  03e5968  fsubs 5, 3, 1
  03e596c  lfs 4, 76(29)
  03e5970  fsubs 6, 4, 1
  03e5974  li 5, 0
  03e5978  addic 4, 30, 208
  03e597c  ori 3, 31, 0
  03e5980  fsubs 3, 3, 2
  03e5984  fsub 7, 1, 5
  03e5988  fsubs 4, 4, 2
  03e598c  addic 6, 1, 160
  03e5990  fsub 9, 2, 3
  03e5994  fsel 1, 7, 5, 1
  03e5998  lfs 5, 80(29)
  03e599c  fsel 2, 9, 3, 2
  03e59a0  fsub 3, 6, 1
  03e59a4  fsub 8, 4, 2
  03e59a8  fsel 1, 3, 6, 1
  03e59ac  lfs 3, 84(29)
  03e59b0  lfs 6, 88(29)
  03e59b4  lfs 7, 92(29)
  03e59b8  fsel 2, 8, 4, 2
  03e59bc  fmuls 4, 1, 1
  03e59c0  fmuls 8, 2, 2
  03e59c4  fmuls 9, 4, 1
  03e59c8  fmuls 11, 8, 2
  03e59cc  fmuls 12, 4, 9
  03e59d0  fmadds 1, 9, 5, 1
  03e59d4  lfs 9, 96(29)
  03e59d8  stw 5, 152(1)
  03e59dc  addic 5, 1, 144
  03e59e0  fmuls 10, 8, 11
  03e59e4  fmadds 2, 11, 5, 2
  03e59e8  fmuls 5, 4, 12
  03e59ec  fmadds 1, 12, 3, 1
  03e59f0  fmuls 11, 8, 10
  03e59f4  fmadds 2, 10, 3, 2
  03e59f8  fmuls 3, 4, 5
  03e59fc  fmadds 1, 5, 6, 1
  03e5a00  fmuls 4, 8, 11
  03e5a04  fmadds 2, 11, 6, 2
  03e5a08  fmadds 1, 3, 7, 1
  03e5a0c  fmadds 2, 4, 7, 2
  03e5a10  fmuls 1, 1, 9
  03e5a14  fmuls 2, 2, 9
  03e5a18  stfs 1, 148(1)
  03e5a1c  lfs 1, 100(29)
  03e5a20  stfs 2, 144(1)
  03e5a24  bl 0x101058
  03e5a28  nop
  03e5a2c  lis 4, 133
  03e5a30  lfs 1, 28(29)
  03e5a34  addic 5, 31, 16
  03e5a38  lwz 3, 704(30)
  03e5a3c  ori 6, 5, 0
  03e5a40  extsw 3, 3
  03e5a44  lfs 2, 15804(4)
  03e5a48  fmuls 1, 2, 1
  03e5a4c  bl 0x1145d8
  03e5a50  nop
  03e5a54  lfs 1, 20(31)
  03e5a58  lfs 2, 644(30)
  03e5a5c  lfs 3, 16(31)
  03e5a60  fsubs 1, 1, 2
  03e5a64  lfs 2, 640(30)
  03e5a68  fsubs 2, 3, 2
  03e5a6c  lis 4, 62
  03e5a70  lhz 3, 722(30)
  03e5a74  addi 4, 4, 20852
  03e5a78  addic 3, 3, 1
  03e5a7c  fmuls 1, 1, 1
  03e5a80  sth 3, 722(30)
  03e5a84  extsh 30, 3
  03e5a88  fmadds 1, 2, 2, 1
  03e5a8c  lfs 2, 100(4)
  03e5a90  fsqrts 1, 1
  03e5a94  fcmpu 0, 1, 2
  03e5a98  cror 6, 1, 2
  03e5a9c  bt 6, 0x3e5acc
  03e5aa0  lis 3, 62
  03e5aa4  lis 4, 114
  03e5aa8  addi 3, 3, 20852
  03e5aac  lfs 1, 104(3)
  03e5ab0  lfs 2, -3056(4)
  03e5ab4  fmuls 1, 2, 1
  03e5ab8  fctiwz 1, 1
  03e5abc  stfd 1, 352(1)
  03e5ac0  lwz 3, 356(1)
  03e5ac4  cmpw 30, 3
  03e5ac8  bt 1, 0x3e5af8
  03e5acc  lis 3, 62
  03e5ad0  lis 4, 114
  03e5ad4  addi 3, 3, 20852
  03e5ad8  lfs 1, 108(3)
  03e5adc  lfs 2, -3056(4)
  03e5ae0  fmuls 1, 2, 1
  03e5ae4  fctiwz 1, 1
  03e5ae8  stfd 1, 352(1)
  03e5aec  lwz 3, 356(1)
  03e5af0  cmpw 30, 3
  03e5af4  bf 1, 0x3e7060
  03e5af8  lbz 3, 188(31)
  03e5afc  lbz 4, 83(31)
  03e5b00  stb 3, 32(31)
  03e5b04  cmpwi 4, 0
  03e5b08  bt 2, 0x3e7060
  03e5b0c  lis 3, 62
  03e5b10  lis 4, 114
  03e5b14  addi 3, 3, 20852
  03e5b18  li 5, 0
  03e5b1c  lfs 1, 112(3)
  03e5b20  lfs 2, -3056(4)
  03e5b24  ori 3, 31, 0
  03e5b28  li 4, 0
  03e5b2c  fmuls 1, 2, 1
  03e5b30  fctiwz 1, 1
  03e5b34  stfd 1, 352(1)
  03e5b38  lwz 6, 356(1)
  03e5b3c  extsw 6, 6
  03e5b40  bl 0xfddc0
  03e5b44  nop
  03e5b48  b 0x3e7060
  03e5b4c  lis 3, 62
  03e5b50  lis 26, 114
  03e5b54  addi 28, 3, 20852
  03e5b58  lis 27, 114
  03e5b5c  addic 3, 30, 244
  03e5b60  lfs 2, 20(28)
  03e5b64  lfs 1, -3052(26)
  03e5b68  lfs 3, -3048(27)
  03e5b6c  fmuls 1, 1, 2
  03e5b70  fmuls 2, 3, 2
  03e5b74  bl 0x109af0
  03e5b78  nop
  03e5b7c  lfs 1, 16(29)
  03e5b80  lfs 2, 16(31)
  03e5b84  addic 25, 31, 72
  03e5b88  lfs 3, 20(29)
  03e5b8c  lfs 4, 20(31)
  03e5b90  fsubs 1, 1, 2
  03e5b94  fsubs 2, 3, 4
  03e5b98  bl 0x5e8338
  03e5b9c  nop
  03e5ba0  lfs 4, 60(28)
  03e5ba4  addic 5, 30, 656
  03e5ba8  lfs 3, -3048(27)
  03e5bac  ori 3, 25, 0
  03e5bb0  lfs 5, -3052(26)
  03e5bb4  fmuls 2, 3, 4
  03e5bb8  fmuls 4, 5, 4
  03e5bbc  fmr 3, 2
  03e5bc0  bl 0x10a2e0
  03e5bc4  nop
  03e5bc8  lfs 1, 16(29)
  03e5bcc  lfs 31, 72(31)
  03e5bd0  lfs 2, 16(31)
  03e5bd4  lfs 3, 20(29)
  03e5bd8  fsubs 1, 1, 2
  03e5bdc  lfs 4, 20(31)
  03e5be0  fsubs 2, 3, 4
  03e5be4  bl 0x5e8338
  03e5be8  nop
  03e5bec  fmr 2, 1
  03e5bf0  fmr 1, 31
  03e5bf4  bl 0x5026a0
  03e5bf8  nop
  03e5bfc  lfs 2, 64(28)
  03e5c00  fcmpu 0, 1, 2
  03e5c04  cror 6, 1, 2
  03e5c08  bt 6, 0x3e5d10
  03e5c0c  lis 3, 62
  03e5c10  lfs 1, 72(31)
  03e5c14  addi 28, 3, 20852
  03e5c18  lfs 2, 68(28)
  03e5c1c  lfs 3, 72(28)
  03e5c20  fadds 2, 1, 2
  03e5c24  lfs 4, 76(28)
  03e5c28  fsubs 5, 3, 1
  03e5c2c  fsubs 6, 4, 1
  03e5c30  li 3, 0
  03e5c34  addic 4, 30, 208
  03e5c38  addic 5, 1, 176
  03e5c3c  fsubs 3, 3, 2
  03e5c40  fsub 7, 1, 5
  03e5c44  fsubs 4, 4, 2
  03e5c48  addic 6, 1, 192
  03e5c4c  fsub 8, 2, 3
  03e5c50  fsel 1, 7, 5, 1
  03e5c54  lfs 5, 80(28)
  03e5c58  fsel 2, 8, 3, 2
  03e5c5c  fsub 3, 6, 1
  03e5c60  fsub 7, 4, 2
  03e5c64  fsel 1, 3, 6, 1
  03e5c68  lfs 3, 84(28)
  03e5c6c  lfs 6, 88(28)
  03e5c70  fsel 2, 7, 4, 2
  03e5c74  fmuls 4, 1, 1
  03e5c78  fmuls 7, 2, 2
  03e5c7c  fmuls 8, 4, 1
  03e5c80  fmuls 10, 7, 2
  03e5c84  fmuls 11, 4, 8
  03e5c88  fmadds 1, 8, 5, 1
  03e5c8c  lfs 8, 92(28)
  03e5c90  lfs 9, 96(28)
  03e5c94  stw 3, 184(1)
  03e5c98  ori 3, 31, 0
  03e5c9c  fmuls 12, 7, 10
  03e5ca0  fmadds 2, 10, 5, 2
  03e5ca4  fmuls 5, 4, 11
  03e5ca8  fmadds 1, 11, 3, 1
  03e5cac  fmuls 10, 7, 12
  03e5cb0  fmadds 2, 12, 3, 2
  03e5cb4  fmuls 3, 4, 5
  03e5cb8  fmadds 1, 5, 6, 1
  03e5cbc  fmuls 4, 7, 10
  03e5cc0  fmadds 2, 10, 6, 2
  03e5cc4  fmadds 1, 3, 8, 1
  03e5cc8  fmadds 2, 4, 8, 2
  03e5ccc  fmuls 1, 1, 9
  03e5cd0  fmuls 2, 2, 9
  03e5cd4  stfs 1, 180(1)
  03e5cd8  lfs 1, 100(28)
  03e5cdc  stfs 2, 176(1)
  03e5ce0  bl 0x101058
  03e5ce4  nop
  03e5ce8  lis 4, 133
  03e5cec  lfs 1, 28(28)
  03e5cf0  lwz 3, 704(30)
  03e5cf4  addic 5, 31, 16
  03e5cf8  extsw 3, 3
  03e5cfc  ori 6, 5, 0
  03e5d00  lfs 2, 15804(4)
  03e5d04  fmuls 1, 2, 1
  03e5d08  bl 0x1145d8
  03e5d0c  nop
  03e5d10  lwz 3, 704(30)
  03e5d14  addic 4, 31, 16
  03e5d18  addic 5, 29, 16
  03e5d1c  extsw 3, 3
  03e5d20  addic 6, 1, 208
  03e5d24  bl 0xfc948
  03e5d28  nop
  03e5d2c  ori 4, 3, 0
  03e5d30  lbz 3, 83(31)
  03e5d34  cmpwi 4, 0
  03e5d38  lfs 2, 16(31)
  03e5d3c  lfs 1, 20(31)
  03e5d40  bt 2, 0x3e5dd8
  03e5d44  lfs 3, 212(1)
  03e5d48  lfs 4, 208(1)
  03e5d4c  fsubs 3, 1, 3
  03e5d50  fsubs 4, 2, 4
  03e5d54  lfs 5, 24(31)
  03e5d58  lfs 6, 216(1)
  03e5d5c  fsubs 5, 5, 6
  03e5d60  lis 4, 62
  03e5d64  fmuls 3, 3, 3
  03e5d68  addi 4, 4, 20852
  03e5d6c  fmadds 3, 4, 4, 3
  03e5d70  lfs 4, 116(4)
  03e5d74  fmadds 3, 5, 5, 3
  03e5d78  fsqrts 3, 3
  03e5d7c  fcmpu 0, 3, 4
  03e5d80  cror 6, 1, 2
  03e5d84  bt 6, 0x3e5dd8
  03e5d88  li 4, 5
  03e5d8c  cmpwi 3, 4
  03e5d90  stb 4, 32(31)
  03e5d94  bt 2, 0x3e7060
  03e5d98  lis 3, 62
  03e5d9c  lis 4, 114
  03e5da0  addi 3, 3, 20852
  03e5da4  li 5, 0
  03e5da8  lfs 1, 112(3)
  03e5dac  lfs 2, -3056(4)
  03e5db0  ori 3, 31, 0
  03e5db4  fmuls 1, 2, 1
  03e5db8  li 4, 4
  03e5dbc  fctiwz 1, 1
  03e5dc0  stfd 1, 352(1)
  03e5dc4  lwz 6, 356(1)
  03e5dc8  extsw 6, 6
  03e5dcc  bl 0xfddc0
  03e5dd0  nop
  03e5dd4  b 0x3e7060
  03e5dd8  lwz 3, 688(30)
  03e5ddc  cmpwi 3, 0
  03e5de0  bf 2, 0x3e5df0
  03e5de4  li 3, 10
  03e5de8  stb 3, 32(31)
  03e5dec  b 0x3e7060
  03e5df0  lfs 3, 20(29)
  03e5df4  lfs 4, 16(29)
  03e5df8  fsubs 1, 1, 3
  03e5dfc  fsubs 2, 2, 4
  03e5e00  lis 3, 62
  03e5e04  addi 3, 3, 20852
  03e5e08  fmuls 1, 1, 1
  03e5e0c  fmadds 1, 2, 2, 1
  03e5e10  lfs 2, 120(3)
  03e5e14  fsqrts 1, 1
  03e5e18  fcmpu 0, 1, 2
  03e5e1c  cror 6, 1, 2
  03e5e20  bt 6, 0x3e7060
  03e5e24  li 3, 7
  03e5e28  lis 4, 133
  03e5e2c  vspltisw 4, -1
  03e5e30  li 5, 15852
  03e5e34  lis 6, 62
  03e5e38  stb 3, 32(31)
  03e5e3c  li 7, 44
  03e5e40  addi 3, 6, 20852
  03e5e44  vslw 4, 4, 4
  03e5e48  <unknown>
  03e5e4c  li 4, -3056
  03e5e50  vcfsx 2, 2, 0
  03e5e54  <unknown>
  03e5e58  lis 3, 114
  03e5e5c  vspltw 3, 3, 0
  03e5e60  <unknown>
  03e5e64  lfs 1, -3056(3)
  03e5e68  li 3, 720
  03e5e6c  vaddfp 2, 2, 3
  03e5e70  vmaddfp 2, 5, 2, 4
  03e5e74  vctsxs 2, 2, 0
  03e5e78  vsplth 2, 2, 1
  03e5e7c  stvehx 2, 3, 30
  03e5e80  lbz 3, 83(31)
  03e5e84  cmpwi 3, 2
  03e5e88  bt 2, 0x3e7060
  03e5e8c  lis 3, 62
  03e5e90  addi 3, 3, 20852
  03e5e94  li 4, 2
  03e5e98  li 5, 0
  03e5e9c  lfs 2, 48(3)
  03e5ea0  ori 3, 31, 0
  03e5ea4  fmuls 1, 1, 2
  03e5ea8  fctiwz 1, 1
  03e5eac  stfd 1, 352(1)
  03e5eb0  lwz 6, 356(1)
  03e5eb4  extsw 6, 6
  03e5eb8  bl 0xfddc0
  03e5ebc  nop
  03e5ec0  b 0x3e7060
  03e5ec4  lwz 3, 688(30)
  03e5ec8  cmpwi 3, 0
  03e5ecc  bf 2, 0x3e5f2c
  03e5ed0  li 3, 0
  03e5ed4  li 4, 10
  03e5ed8  stw 3, 244(30)
  03e5edc  lbz 3, 83(31)
  03e5ee0  stb 4, 32(31)
  03e5ee4  cmpwi 3, 1
  03e5ee8  bt 2, 0x3e7060
  03e5eec  lis 3, 62
  03e5ef0  lis 4, 114
  03e5ef4  addi 3, 3, 20852
  03e5ef8  li 5, 0
  03e5efc  lfs 1, 112(3)
  03e5f00  lfs 2, -3056(4)
  03e5f04  ori 3, 31, 0
  03e5f08  li 4, 1
  03e5f0c  fmuls 1, 2, 1
  03e5f10  fctiwz 1, 1
  03e5f14  stfd 1, 352(1)
  03e5f18  lwz 6, 356(1)
  03e5f1c  extsw 6, 6
  03e5f20  bl 0xfddc0
  03e5f24  nop
  03e5f28  b 0x3e7060
  03e5f2c  lfs 1, 20(31)
  03e5f30  lfs 2, 20(29)
  03e5f34  lfs 3, 16(31)
  03e5f38  fsubs 1, 1, 2
  03e5f3c  lfs 2, 16(29)
  03e5f40  fsubs 2, 3, 2
  03e5f44  lis 3, 62
  03e5f48  addi 3, 3, 20852
  03e5f4c  fmuls 1, 1, 1
  03e5f50  fmadds 1, 2, 2, 1
  03e5f54  lfs 2, 120(3)
  03e5f58  fsqrts 1, 1
  03e5f5c  fcmpu 0, 1, 2
  03e5f60  cror 6, 1, 2
  03e5f64  bt 6, 0x3e7060
  03e5f68  li 3, 7
  03e5f6c  vspltisw 4, -1
  03e5f70  lis 4, 133
  03e5f74  li 5, 15852
  03e5f78  li 6, 44
  03e5f7c  stb 3, 32(31)
  03e5f80  lis 3, 62
  03e5f84  vslw 4, 4, 4
  03e5f88  <unknown>
  03e5f8c  addi 3, 3, 20852
  03e5f90  lis 4, 114
  03e5f94  vcfsx 2, 2, 0
  03e5f98  <unknown>
  03e5f9c  li 3, -3056
  03e5fa0  vspltw 3, 3, 0
  03e5fa4  <unknown>
  03e5fa8  li 3, 720
  03e5fac  lfs 1, -3056(4)
  03e5fb0  vaddfp 2, 2, 3
  03e5fb4  vmaddfp 2, 5, 2, 4
  03e5fb8  vctsxs 2, 2, 0
  03e5fbc  vsplth 2, 2, 1
  03e5fc0  stvehx 2, 3, 30
  03e5fc4  lbz 3, 83(31)
  03e5fc8  cmpwi 3, 2
  03e5fcc  bt 2, 0x3e7060
  03e5fd0  lis 3, 62
  03e5fd4  addi 3, 3, 20852
  03e5fd8  li 4, 2
  03e5fdc  li 5, 0
  03e5fe0  lfs 2, 48(3)
  03e5fe4  ori 3, 31, 0
  03e5fe8  fmuls 1, 1, 2
  03e5fec  fctiwz 1, 1
  03e5ff0  stfd 1, 352(1)
  03e5ff4  lwz 6, 356(1)
  03e5ff8  extsw 6, 6
  03e5ffc  bl 0xfddc0
  03e6000  nop
  03e6004  b 0x3e7060
  03e6008  lwz 3, 696(30)
  03e600c  cmpwi 3, -1
  03e6010  bt 2, 0x3e6034
  03e6014  lis 4, 164
  03e6018  slwi 3, 3, 8
  03e601c  lwz 4, -28512(4)
  03e6020  addc 3, 4, 3
  03e6024  clrldi 3, 3, 32
  03e6028  lbz 3, 188(3)
  03e602c  cmpwi 3, 0
  03e6030  bf 2, 0x3e605c
  03e6034  lwz 3, 700(30)
  03e6038  cmpwi 3, -1
  03e603c  bt 2, 0x3e607c
  03e6040  lis 5, 151
  03e6044  extsw 4, 3
  03e6048  addic 3, 5, -25248
  03e604c  bl 0x110b70
  03e6050  nop
  03e6054  cmpwi 3, 0
  03e6058  bt 2, 0x3e607c
  03e605c  li 3, 64
  03e6060  lhz 5, 52(31)
  03e6064  li 4, 1
  03e6068  sth 3, 50(31)
  03e606c  ori 3, 5, 4096
  03e6070  stb 4, 32(31)
  03e6074  sth 3, 52(31)
  03e6078  b 0x3e7060
  03e607c  lbz 3, 112(31)
  03e6080  rlwinm 3, 3, 0, 30, 30
  03e6084  cmpwi 3, 0
  03e6088  bt 2, 0x3e7060
  03e608c  li 3, 255
  03e6090  bl 0xfc620
  03e6094  nop
  03e6098  clrlwi 3, 3, 31
  03e609c  cmpwi 3, 0
  03e60a0  bt 2, 0x3e6178
  03e60a4  lis 4, 62
  03e60a8  addic 3, 30, 640
  03e60ac  addi 29, 4, 20852
  03e60b0  lfs 1, 52(29)
  03e60b4  lfs 2, 56(29)
  03e60b8  bl 0xfea60
  03e60bc  nop
  03e60c0  lfs 1, 640(30)
  03e60c4  li 3, 124
  03e60c8  lfs 2, 624(30)
  03e60cc  lis 4, 114
  03e60d0  lfs 3, 644(30)
  03e60d4  li 5, -3056
  03e60d8  fadds 1, 1, 2
  03e60dc  vspltisw 2, -1
  03e60e0  lfs 2, 628(30)
  03e60e4  fadds 2, 3, 2
  03e60e8  lfs 3, 632(30)
  03e60ec  vslw 2, 2, 2
  03e60f0  stfs 3, 648(30)
  03e60f4  stfs 1, 640(30)
  03e60f8  stfs 2, 644(30)
  03e60fc  <unknown>
  03e6100  <unknown>
  03e6104  li 3, 722
  03e6108  vspltw 3, 3, 0
  03e610c  li 4, 2
  03e6110  vmaddfp 2, 4, 3, 2
  03e6114  vctsxs 2, 2, 0
  03e6118  vsplth 2, 2, 1
  03e611c  stvehx 2, 3, 30
  03e6120  lbz 3, 32(31)
  03e6124  lbz 5, 83(31)
  03e6128  stb 3, 188(31)
  03e612c  cmpwi 5, 1
  03e6130  stb 4, 32(31)
  03e6134  bt 2, 0x3e7060
  03e6138  lis 3, 62
  03e613c  lis 4, 114
  03e6140  addi 3, 3, 20852
  03e6144  li 5, 0
  03e6148  lfs 1, 48(3)
  03e614c  lfs 2, -3056(4)
  03e6150  ori 3, 31, 0
  03e6154  fmuls 1, 2, 1
  03e6158  li 4, 1
  03e615c  fctiwz 1, 1
  03e6160  stfd 1, 352(1)
  03e6164  lwz 6, 356(1)
  03e6168  extsw 6, 6
  03e616c  bl 0xfddc0
  03e6170  nop
  03e6174  b 0x3e7060
  03e6178  lbz 3, 83(31)
  03e617c  cmpwi 3, 0
  03e6180  bt 2, 0x3e7060
  03e6184  lis 3, 62
  03e6188  lis 4, 114
  03e618c  addi 3, 3, 20852
  03e6190  li 5, 0
  03e6194  lfs 1, 48(3)
  03e6198  lfs 2, -3056(4)
  03e619c  ori 3, 31, 0
  03e61a0  li 4, 0
  03e61a4  fmuls 1, 2, 1
  03e61a8  fctiwz 1, 1
  03e61ac  stfd 1, 352(1)
  03e61b0  lwz 6, 356(1)
  03e61b4  extsw 6, 6
  03e61b8  bl 0xfddc0
  03e61bc  nop
  03e61c0  b 0x3e7060
  03e61c4  lfs 1, 20(31)
  03e61c8  lfs 2, 20(29)
  03e61cc  lfs 3, 16(31)
  03e61d0  fsubs 1, 1, 2
  03e61d4  lfs 2, 16(29)
  03e61d8  fsubs 2, 3, 2
  03e61dc  ori 3, 31, 0
  03e61e0  addic 4, 29, 16
  03e61e4  fmuls 1, 1, 1
  03e61e8  fmadds 1, 2, 2, 1
  03e61ec  lfs 2, 660(30)
  03e61f0  fsqrts 31, 1
  03e61f4  fmr 1, 2
  03e61f8  bl 0x3e37b0
  03e61fc  lis 3, 62
  03e6200  addi 3, 3, 20852
  03e6204  lfs 1, 120(3)
  03e6208  fcmpu 0, 31, 1
  03e620c  cror 6, 1, 2
  03e6210  bt 6, 0x3e62fc
  03e6214  lfs 1, 16(29)
  03e6218  lfs 31, 72(31)
  03e621c  lfs 2, 16(31)
  03e6220  lfs 3, 20(29)
  03e6224  fsubs 1, 1, 2
  03e6228  lfs 4, 20(31)
  03e622c  fsubs 2, 3, 4
  03e6230  bl 0x5e8338
  03e6234  nop
  03e6238  fmr 2, 1
  03e623c  fmr 1, 31
  03e6240  bl 0x5026a0
  03e6244  nop
  03e6248  lis 3, 62
  03e624c  addi 3, 3, 20852
  03e6250  lfs 2, 128(3)
  03e6254  fcmpu 0, 1, 2
  03e6258  cror 6, 1, 2
  03e625c  bt 6, 0x3e62fc
  03e6260  li 3, 7
  03e6264  lis 4, 133
  03e6268  vspltisw 4, -1
  03e626c  li 5, 15852
  03e6270  lis 6, 62
  03e6274  stb 3, 32(31)
  03e6278  li 7, 44
  03e627c  addi 3, 6, 20852
  03e6280  vslw 4, 4, 4
  03e6284  <unknown>
  03e6288  li 4, -3056
  03e628c  vcfsx 2, 2, 0
  03e6290  <unknown>
  03e6294  lis 3, 114
  03e6298  vspltw 3, 3, 0
  03e629c  <unknown>
  03e62a0  lfs 1, -3056(3)
  03e62a4  li 3, 720
  03e62a8  vaddfp 2, 2, 3
  03e62ac  vmaddfp 2, 5, 2, 4
  03e62b0  vctsxs 2, 2, 0
  03e62b4  vsplth 2, 2, 1
  03e62b8  stvehx 2, 3, 30
  03e62bc  lbz 3, 83(31)
  03e62c0  cmpwi 3, 2
  03e62c4  bt 2, 0x3e62fc
  03e62c8  lis 3, 62
  03e62cc  addi 3, 3, 20852
  03e62d0  li 4, 2
  03e62d4  li 5, 0
  03e62d8  lfs 2, 48(3)
  03e62dc  ori 3, 31, 0
  03e62e0  fmuls 1, 1, 2
  03e62e4  fctiwz 1, 1
  03e62e8  stfd 1, 352(1)
  03e62ec  lwz 6, 356(1)
  03e62f0  extsw 6, 6
  03e62f4  bl 0xfddc0
  03e62f8  nop
  03e62fc  lwz 3, 356(30)
  03e6300  cmpwi 3, 2
  03e6304  bf 2, 0x3e7060
  03e6308  li 3, 10
  03e630c  stb 3, 32(31)
  03e6310  b 0x3e7060
  03e6314  lfs 1, 16(29)
  03e6318  addic 28, 31, 72
  03e631c  lfs 2, 16(31)
  03e6320  lfs 3, 20(29)
  03e6324  lfs 4, 20(31)
  03e6328  fsubs 1, 1, 2
  03e632c  fsubs 2, 3, 4
  03e6330  bl 0x5e8338
  03e6334  nop
  03e6338  lis 3, 62
  03e633c  lis 4, 114
  03e6340  addi 3, 3, 20852
  03e6344  lis 29, 114
  03e6348  addic 5, 30, 656
  03e634c  lfs 2, 132(3)
  03e6350  lfs 3, -3048(4)
  03e6354  lfs 4, 136(3)
  03e6358  fmuls 2, 3, 2
  03e635c  lfs 5, -3052(29)
  03e6360  ori 3, 28, 0
  03e6364  fmuls 4, 5, 4
  03e6368  fmr 3, 2
  03e636c  bl 0x10a2e0
  03e6370  nop
  03e6374  lbz 3, 112(31)
  03e6378  rlwinm 3, 3, 0, 30, 30
  03e637c  cmpwi 3, 0
  03e6380  bt 2, 0x3e63d4
  03e6384  lbz 3, 83(31)
  03e6388  cmpwi 1, 3, 7
  03e638c  cmpwi 3, 2
  03e6390  crorc 2, 6, 2
  03e6394  bt 2, 0x3e63d4
  03e6398  lis 3, 62
  03e639c  lis 4, 114
  03e63a0  addi 3, 3, 20852
  03e63a4  li 5, 0
  03e63a8  lfs 1, 140(3)
  03e63ac  lfs 2, -3056(4)
  03e63b0  ori 3, 31, 0
  03e63b4  li 4, 7
  03e63b8  fmuls 1, 2, 1
  03e63bc  fctiwz 1, 1
  03e63c0  stfd 1, 352(1)
  03e63c4  lwz 6, 356(1)
  03e63c8  extsw 6, 6
  03e63cc  bl 0xfddc0
  03e63d0  nop
  03e63d4  addic 3, 30, 720
  03e63d8  bl 0x4fffb4
  03e63dc  nop
  03e63e0  cmpwi 3, 0
  03e63e4  bt 2, 0x3e7060
  03e63e8  li 3, 8
  03e63ec  li 4, 0
  03e63f0  stb 3, 32(31)
  03e63f4  sth 4, 720(30)
  03e63f8  lbz 3, 83(31)
  03e63fc  cmpwi 3, 3
  03e6400  bt 2, 0x3e6440
  03e6404  lis 3, 62
  03e6408  lis 4, 114
  03e640c  addi 3, 3, 20852
  03e6410  li 5, 0
  03e6414  lfs 1, 116(3)
  03e6418  lfs 2, -3056(4)
  03e641c  ori 3, 31, 0
  03e6420  fmuls 1, 2, 1
  03e6424  li 4, 3
  03e6428  fctiwz 1, 1
  03e642c  stfd 1, 352(1)
  03e6430  lwz 6, 356(1)
  03e6434  extsw 6, 6
  03e6438  bl 0xfddc0
  03e643c  nop
  03e6440  lis 3, 62
  03e6444  lfs 1, 72(31)
  03e6448  addi 30, 3, 20852
  03e644c  lfs 2, 52(30)
  03e6450  bl 0x502578
  03e6454  nop
  03e6458  lfs 2, 68(30)
  03e645c  lfs 3, 72(30)
  03e6460  fadds 2, 1, 2
  03e6464  fsubs 5, 3, 1
  03e6468  lfs 4, 76(30)
  03e646c  lis 3, 133
  03e6470  li 28, 0
  03e6474  lis 4, 133
  03e6478  addic 5, 1, 256
  03e647c  fsubs 3, 3, 2
  03e6480  fsub 7, 1, 5
  03e6484  fsubs 6, 4, 2
  03e6488  fsubs 4, 4, 1
  03e648c  fsub 8, 2, 3
  03e6490  fsel 1, 7, 5, 1
  03e6494  lfs 5, 80(30)
  03e6498  fsel 2, 8, 3, 2
  03e649c  fsub 3, 4, 1
  03e64a0  fsub 8, 6, 2
  03e64a4  fsel 1, 3, 4, 1
  03e64a8  lfs 3, 84(30)
  03e64ac  lfs 4, 88(30)
  03e64b0  lfs 7, -3052(29)
  03e64b4  fsel 2, 8, 6, 2
  03e64b8  fmuls 6, 1, 1
  03e64bc  fmuls 8, 2, 2
  03e64c0  fmuls 9, 6, 1
  03e64c4  fmuls 11, 8, 2
  03e64c8  fmuls 12, 6, 9
  03e64cc  fmadds 1, 9, 5, 1
  03e64d0  lfs 9, 92(30)
  03e64d4  fmuls 10, 8, 11
  03e64d8  fmadds 2, 11, 5, 2
  03e64dc  fmuls 5, 6, 12
  03e64e0  lfs 11, 15836(3)
  03e64e4  fmadds 1, 12, 3, 1
  03e64e8  lis 3, 133
  03e64ec  fmuls 12, 8, 10
  03e64f0  fmadds 2, 10, 3, 2
  03e64f4  fmuls 3, 6, 5
  03e64f8  fmadds 1, 5, 4, 1
  03e64fc  fmuls 6, 11, 7
  03e6500  fmuls 5, 11, 7
  03e6504  fmuls 7, 8, 12
  03e6508  fmadds 2, 12, 4, 2
  03e650c  fmadds 1, 3, 9, 1
  03e6510  lfs 3, 15844(3)
  03e6514  stw 28, 232(1)
  03e6518  ori 3, 31, 0
  03e651c  stfs 3, 236(1)
  03e6520  lfs 3, 15848(4)
  03e6524  stw 28, 248(1)
  03e6528  li 4, 0
  03e652c  stfs 3, 252(1)
  03e6530  fmadds 2, 7, 9, 2
  03e6534  fmuls 1, 5, 1
  03e6538  fmuls 2, 6, 2
  03e653c  stfs 1, 228(1)
  03e6540  stfs 2, 224(1)
  03e6544  bl 0xf1114
  03e6548  nop
  03e654c  lfs 28, 144(30)
  03e6550  ori 31, 28, 0
  03e6554  lfs 29, 148(30)
  03e6558  lfs 30, 96(30)
  03e655c  lfs 31, 152(30)
  03e6560  fmr 1, 28
  03e6564  lfs 3, 256(1)
  03e6568  fmr 2, 29
  03e656c  lfs 4, 260(1)
  03e6570  stfs 3, 272(1)
  03e6574  lfs 3, 264(1)
  03e6578  stfs 4, 276(1)
  03e657c  lfs 4, 268(1)
  03e6580  stfs 3, 280(1)
  03e6584  stfs 4, 284(1)
  03e6588  bl 0xfcbe8
  03e658c  nop
  03e6590  lfs 2, 272(1)
  03e6594  fadds 3, 2, 1
  03e6598  fmr 1, 28
  03e659c  fmr 2, 29
  03e65a0  stfs 3, 272(1)
  03e65a4  bl 0xfcbe8
  03e65a8  nop
  03e65ac  lfs 2, 276(1)
  03e65b0  fadds 3, 2, 1
  03e65b4  fmr 1, 28
  03e65b8  fmr 2, 29
  03e65bc  stfs 3, 276(1)
  03e65c0  bl 0xfcbe8
  03e65c4  nop
  03e65c8  lfs 2, 280(1)
  03e65cc  fadds 3, 2, 1
  03e65d0  lfs 2, -3052(29)
  03e65d4  fneg 1, 2
  03e65d8  stfs 3, 280(1)
  03e65dc  bl 0xfcbe8
  03e65e0  nop
  03e65e4  lfs 2, -3052(29)
  03e65e8  stfs 1, 240(1)
  03e65ec  fneg 1, 2
  03e65f0  bl 0xfcbe8
  03e65f4  nop
  03e65f8  lis 3, 133
  03e65fc  lfs 2, -3052(29)
  03e6600  stfs 1, 244(1)
  03e6604  lfs 1, 15840(3)
  03e6608  fmuls 2, 1, 2
  03e660c  fneg 1, 2
  03e6610  bl 0xfcbe8
  03e6614  nop
  03e6618  lis 3, 133
  03e661c  lis 4, 133
  03e6620  stfs 1, 248(1)
  03e6624  lis 5, 133
  03e6628  lwz 3, 15808(3)
  03e662c  lwz 4, 15812(4)
  03e6630  lfs 1, 15824(5)
  03e6634  extsw 30, 3
  03e6638  extsw 28, 4
  03e663c  fmuls 2, 1, 30
  03e6640  bl 0xfcbe8
  03e6644  nop
  03e6648  lis 27, 114
  03e664c  lfs 2, -3056(27)
  03e6650  fmuls 1, 1, 2
  03e6654  bl 0x502758
  03e6658  nop
  03e665c  lis 4, 133
  03e6660  ori 26, 3, 0
  03e6664  lfs 1, 15828(4)
  03e6668  fmuls 2, 1, 31
  03e666c  bl 0xfcbe8
  03e6670  nop
  03e6674  lfs 2, -3056(27)
  03e6678  fmuls 1, 1, 2
  03e667c  bl 0x502758
  03e6680  nop
  03e6684  lis 4, 133
  03e6688  ori 25, 3, 0
  03e668c  lfs 1, 15832(4)
  03e6690  fmuls 2, 1, 31
  03e6694  bl 0xfcbe8
  03e6698  nop
  03e669c  lfs 2, -3056(27)
  03e66a0  fmuls 1, 1, 2
  03e66a4  bl 0x502758
  03e66a8  nop
  03e66ac  li 9, -1
  03e66b0  ori 10, 3, 0
  03e66b4  ori 6, 30, 0
  03e66b8  addic 3, 1, 272
  03e66bc  std 9, 112(1)
  03e66c0  ori 7, 28, 0
  03e66c4  addic 4, 1, 224
  03e66c8  ori 8, 26, 0
  03e66cc  addic 5, 1, 240
  03e66d0  ori 9, 25, 0
  03e66d4  bl 0x1206e8
  03e66d8  nop
  03e66dc  addic 31, 31, 1
  03e66e0  cmpwi 31, 30
  03e66e4  bt 0, 0x3e6560
  03e66e8  lis 3, 62
  03e66ec  lis 5, 133
  03e66f0  addi 3, 3, 20852
  03e66f4  lis 4, 133
  03e66f8  li 31, 0
  03e66fc  lfs 1, 156(3)
  03e6700  lfs 2, 15844(5)
  03e6704  lfs 3, 15848(4)
  03e6708  fmuls 2, 2, 1
  03e670c  fmuls 1, 3, 1
  03e6710  stfs 2, 236(1)
  03e6714  stfs 1, 252(1)
  03e6718  fmr 1, 28
  03e671c  lfs 3, 256(1)
  03e6720  fmr 2, 29
  03e6724  lfs 4, 260(1)
  03e6728  stfs 3, 288(1)
  03e672c  lfs 3, 264(1)
  03e6730  stfs 4, 292(1)
  03e6734  lfs 4, 268(1)
  03e6738  stfs 3, 296(1)
  03e673c  stfs 4, 300(1)
  03e6740  bl 0xfcbe8
  03e6744  nop
  03e6748  lfs 2, 288(1)
  03e674c  fadds 3, 2, 1
  03e6750  fmr 1, 28
  03e6754  fmr 2, 29
  03e6758  stfs 3, 288(1)
  03e675c  bl 0xfcbe8
  03e6760  nop
  03e6764  lfs 2, 292(1)
  03e6768  fadds 3, 2, 1
  03e676c  fmr 1, 28
  03e6770  fmr 2, 29
  03e6774  stfs 3, 292(1)
  03e6778  bl 0xfcbe8
  03e677c  nop
  03e6780  lfs 2, 296(1)
  03e6784  fadds 3, 2, 1
  03e6788  lfs 2, -3052(29)
  03e678c  fneg 1, 2
  03e6790  stfs 3, 296(1)
  03e6794  bl 0xfcbe8
  03e6798  nop
  03e679c  lfs 2, -3052(29)
  03e67a0  stfs 1, 240(1)
  03e67a4  fneg 1, 2
  03e67a8  bl 0xfcbe8
  03e67ac  nop
  03e67b0  lis 3, 133
  03e67b4  lfs 2, -3052(29)
  03e67b8  stfs 1, 244(1)
  03e67bc  lfs 1, 15840(3)
  03e67c0  fmuls 2, 1, 2
  03e67c4  fneg 1, 2
  03e67c8  bl 0xfcbe8
  03e67cc  nop
  03e67d0  lis 3, 133
  03e67d4  lis 4, 133
  03e67d8  stfs 1, 248(1)
  03e67dc  lis 5, 133
  03e67e0  lwz 3, 15816(3)
  03e67e4  lwz 4, 15820(4)
  03e67e8  lfs 1, 15824(5)
  03e67ec  extsw 30, 3
  03e67f0  extsw 28, 4
  03e67f4  fmuls 2, 1, 30
  03e67f8  bl 0xfcbe8
  03e67fc  nop
  03e6800  lis 27, 114
  03e6804  lfs 2, -3056(27)
  03e6808  fmuls 1, 1, 2
  03e680c  bl 0x502758
  03e6810  nop
  03e6814  lis 4, 133
  03e6818  ori 26, 3, 0
  03e681c  lfs 1, 15828(4)
  03e6820  fmuls 2, 1, 31
  03e6824  bl 0xfcbe8
  03e6828  nop
  03e682c  lfs 2, -3056(27)
  03e6830  fmuls 1, 1, 2
  03e6834  bl 0x502758
  03e6838  nop
  03e683c  lis 4, 133
  03e6840  ori 25, 3, 0
  03e6844  lfs 1, 15832(4)
  03e6848  fmuls 2, 1, 31
  03e684c  bl 0xfcbe8
  03e6850  nop
  03e6854  lfs 2, -3056(27)
  03e6858  fmuls 1, 1, 2
  03e685c  bl 0x502758
  03e6860  nop
  03e6864  li 8, -1
  03e6868  ori 10, 3, 0
  03e686c  ori 6, 30, 0
  03e6870  addic 4, 1, 224
  03e6874  std 8, 112(1)
  03e6878  ori 7, 28, 0
  03e687c  addic 5, 1, 240
  03e6880  ori 9, 25, 0
  03e6884  addic 3, 1, 288
  03e6888  ori 8, 26, 0
  03e688c  bl 0x1206e8
  03e6890  nop
  03e6894  addic 31, 31, 1
  03e6898  cmpwi 31, 30
  03e689c  bt 0, 0x3e6718
  03e68a0  b 0x3e7060
  03e68a4  lis 3, 62
  03e68a8  lfs 1, 72(31)
  03e68ac  addi 30, 3, 20852
  03e68b0  lfs 2, 52(30)
  03e68b4  bl 0x502578
  03e68b8  nop
  03e68bc  fmr 31, 1
  03e68c0  ori 3, 31, 0
  03e68c4  bl 0xefe40
  03e68c8  nop
  03e68cc  lfs 2, 116(30)
  03e68d0  fcmpu 0, 1, 2
  03e68d4  cror 6, 1, 2
  03e68d8  bt 6, 0x3e6ac8
  03e68dc  lfs 1, 16(29)
  03e68e0  lfs 2, 16(31)
  03e68e4  lfs 3, 20(29)
  03e68e8  fsubs 1, 1, 2
  03e68ec  lfs 4, 20(31)
  03e68f0  fsubs 2, 3, 4
  03e68f4  bl 0x5e8338
  03e68f8  nop
  03e68fc  fmr 2, 1
  03e6900  fmr 1, 31
  03e6904  bl 0x5026a0
  03e6908  nop
  03e690c  lis 3, 62
  03e6910  addi 3, 3, 20852
  03e6914  lfs 2, 160(3)
  03e6918  fcmpu 0, 1, 2
  03e691c  cror 6, 1, 2
  03e6920  bt 6, 0x3e6ac8
  03e6924  lfs 1, 20(31)
  03e6928  lfs 2, 20(29)
  03e692c  lfs 3, 16(31)
  03e6930  fsubs 1, 1, 2
  03e6934  lfs 2, 16(29)
  03e6938  fsubs 2, 3, 2
  03e693c  lis 3, 62
  03e6940  addi 3, 3, 20852
  03e6944  fmuls 1, 1, 1
  03e6948  fmadds 1, 2, 2, 1
  03e694c  lfs 2, 120(3)
  03e6950  fsqrts 1, 1
  03e6954  fcmpu 0, 1, 2
  03e6958  cror 6, 1, 2
  03e695c  bt 6, 0x3e6ac8
  03e6960  lfs 1, 24(29)
  03e6964  lfs 2, 24(31)
  03e6968  lis 3, 62
  03e696c  fsubs 1, 1, 2
  03e6970  addi 3, 3, 20852
  03e6974  lfs 2, 96(3)
  03e6978  fabs 1, 1
  03e697c  fcmpu 0, 1, 2
  03e6980  cror 6, 1, 2
  03e6984  bt 6, 0x3e6ac8
  03e6988  lis 3, 62
  03e698c  lfs 1, 72(31)
  03e6990  addi 6, 3, 20852
  03e6994  lis 3, 17839
  03e6998  lfs 2, 68(6)
  03e699c  lfs 3, 72(6)
  03e69a0  fadds 2, 1, 2
  03e69a4  fsubs 5, 3, 1
  03e69a8  lfs 4, 76(6)
  03e69ac  li 4, 0
  03e69b0  ori 3, 3, 57190
  03e69b4  lis 7, 1
  03e69b8  lis 5, 1
  03e69bc  fsubs 3, 3, 2
  03e69c0  fsub 7, 1, 5
  03e69c4  fsubs 6, 4, 2
  03e69c8  fsubs 4, 4, 1
  03e69cc  addic 8, 1, 304
  03e69d0  fsub 8, 2, 3
  03e69d4  fsel 1, 7, 5, 1
  03e69d8  fsel 2, 8, 3, 2
  03e69dc  fsub 5, 4, 1
  03e69e0  lfs 3, 80(6)
  03e69e4  fsub 7, 6, 2
  03e69e8  fsel 1, 5, 4, 1
  03e69ec  lfs 4, 84(6)
  03e69f0  lfs 5, 88(6)
  03e69f4  lfs 9, 92(6)
  03e69f8  stw 4, 312(1)
  03e69fc  stw 3, 316(1)
  03e6a00  li 4, 6
  03e6a04  lis 3, 151
  03e6a08  fsel 2, 7, 6, 2
  03e6a0c  fmuls 6, 1, 1
  03e6a10  addic 3, 3, -25376
  03e6a14  fmuls 7, 2, 2
  03e6a18  fmuls 8, 6, 1
  03e6a1c  fmuls 10, 7, 2
  03e6a20  fmuls 11, 6, 8
  03e6a24  fmadds 1, 8, 3, 1
  03e6a28  fmuls 8, 7, 10
  03e6a2c  fmadds 2, 10, 3, 2
  03e6a30  fmuls 3, 6, 11
  03e6a34  fmadds 1, 11, 4, 1
  03e6a38  fmuls 10, 7, 8
  03e6a3c  fmadds 2, 8, 4, 2
  03e6a40  fmuls 4, 6, 3
  03e6a44  fmadds 1, 3, 5, 1
  03e6a48  fmuls 3, 7, 10
  03e6a4c  fmadds 2, 10, 5, 2
  03e6a50  fmadds 1, 4, 9, 1
  03e6a54  fmadds 2, 3, 9, 2
  03e6a58  stfs 1, 308(1)
  03e6a5c  stfs 2, 304(1)
  03e6a60  lfs 1, 16(29)
  03e6a64  stfs 1, 320(1)
  03e6a68  lfs 1, 20(29)
  03e6a6c  stfs 1, 324(1)
  03e6a70  lfs 1, 24(29)
  03e6a74  stfs 1, 328(1)
  03e6a78  lfs 2, 28(29)
  03e6a7c  stfs 2, 332(1)
  03e6a80  lfs 2, 164(6)
  03e6a84  lwz 3, 4440(3)
  03e6a88  fadds 1, 1, 2
  03e6a8c  subc 3, 4, 3
  03e6a90  ori 4, 7, 1
  03e6a94  cntlzw 3, 3
  03e6a98  subc 5, 5, 4
  03e6a9c  sldi 3, 3, 58
  03e6aa0  addic 7, 1, 320
  03e6aa4  sradi 3, 3, 63
  03e6aa8  and 5, 3, 5
  03e6aac  ori 3, 29, 0
  03e6ab0  addc 5, 4, 5
  03e6ab4  stfs 1, 328(1)
  03e6ab8  ori 4, 31, 0
  03e6abc  lfs 1, 100(6)
  03e6ac0  bl 0x105c08
  03e6ac4  nop
  03e6ac8  lbz 3, 112(31)
  03e6acc  rlwinm 3, 3, 0, 30, 30
  03e6ad0  cmpwi 3, 0
  03e6ad4  bt 2, 0x3e7060
  03e6ad8  li 3, 9
  03e6adc  lbz 4, 83(31)
  03e6ae0  cmpwi 4, 4
  03e6ae4  stb 3, 32(31)
  03e6ae8  bt 2, 0x3e7060
  03e6aec  lis 3, 62
  03e6af0  lis 4, 114
  03e6af4  addi 3, 3, 20852
  03e6af8  li 5, 0
  03e6afc  lfs 1, 48(3)
  03e6b00  lfs 2, -3056(4)
  03e6b04  ori 3, 31, 0
  03e6b08  fmuls 1, 2, 1
  03e6b0c  li 4, 4
  03e6b10  fctiwz 1, 1
  03e6b14  stfd 1, 352(1)
  03e6b18  lwz 6, 356(1)
  03e6b1c  extsw 6, 6
  03e6b20  bl 0xfddc0
  03e6b24  nop
  03e6b28  b 0x3e7060
  03e6b2c  lbz 3, 112(31)
  03e6b30  rlwinm 3, 3, 0, 30, 30
  03e6b34  cmpwi 3, 0
  03e6b38  bt 2, 0x3e7060
  03e6b3c  lfs 2, 20(31)
  03e6b40  lfs 1, 20(29)
  03e6b44  lfs 4, 16(31)
  03e6b48  fsubs 5, 2, 1
  03e6b4c  lfs 3, 16(29)
  03e6b50  fsubs 6, 4, 3
  03e6b54  lis 3, 62
  03e6b58  addi 3, 3, 20852
  03e6b5c  fmuls 5, 5, 5
  03e6b60  fmadds 5, 6, 6, 5
  03e6b64  lfs 6, 120(3)
  03e6b68  fsqrts 5, 5
  03e6b6c  fcmpu 0, 5, 6
  03e6b70  cror 6, 1, 2
  03e6b74  bt 6, 0x3e6c58
  03e6b78  fsubs 3, 3, 4
  03e6b7c  fsubs 2, 1, 2
  03e6b80  lfs 31, 72(31)
  03e6b84  fmr 1, 3
  03e6b88  bl 0x5e8338
  03e6b8c  nop
  03e6b90  fmr 2, 1
  03e6b94  fmr 1, 31
  03e6b98  bl 0x5026a0
  03e6b9c  nop
  03e6ba0  lis 3, 62
  03e6ba4  addi 3, 3, 20852
  03e6ba8  lfs 2, 160(3)
  03e6bac  fcmpu 0, 1, 2
  03e6bb0  cror 6, 1, 2
  03e6bb4  bt 6, 0x3e6c58
  03e6bb8  li 3, 7
  03e6bbc  lis 4, 133
  03e6bc0  vspltisw 4, -1
  03e6bc4  li 5, 15852
  03e6bc8  lis 6, 62
  03e6bcc  stb 3, 32(31)
  03e6bd0  li 7, 44
  03e6bd4  addi 3, 6, 20852
  03e6bd8  vslw 4, 4, 4
  03e6bdc  <unknown>
  03e6be0  li 4, -3056
  03e6be4  vcfsx 2, 2, 0
  03e6be8  <unknown>
  03e6bec  lis 3, 114
  03e6bf0  vspltw 3, 3, 0
  03e6bf4  <unknown>
  03e6bf8  lfs 1, -3056(3)
  03e6bfc  li 3, 720
  03e6c00  vaddfp 2, 2, 3
  03e6c04  vmaddfp 2, 5, 2, 4
  03e6c08  vctsxs 2, 2, 0
  03e6c0c  vsplth 2, 2, 1
  03e6c10  stvehx 2, 3, 30
  03e6c14  lbz 3, 83(31)
  03e6c18  cmpwi 3, 7
  03e6c1c  bt 2, 0x3e7060
  03e6c20  lis 3, 62
  03e6c24  addi 3, 3, 20852
  03e6c28  li 4, 7
  03e6c2c  li 5, 0
  03e6c30  lfs 2, 140(3)
  03e6c34  ori 3, 31, 0
  03e6c38  fmuls 1, 1, 2
  03e6c3c  fctiwz 1, 1
  03e6c40  stfd 1, 352(1)
  03e6c44  lwz 6, 356(1)
  03e6c48  extsw 6, 6
  03e6c4c  bl 0xfddc0
  03e6c50  nop
  03e6c54  b 0x3e7060
  03e6c58  li 3, 0
  03e6c5c  li 4, 4
  03e6c60  stw 3, 244(30)
  03e6c64  lbz 3, 83(31)
  03e6c68  stb 4, 32(31)
  03e6c6c  cmpwi 3, 1
  03e6c70  bt 2, 0x3e7060
  03e6c74  lis 3, 62
  03e6c78  lis 4, 114
  03e6c7c  addi 3, 3, 20852
  03e6c80  li 5, 0
  03e6c84  lfs 1, 48(3)
  03e6c88  lfs 2, -3056(4)
  03e6c8c  ori 3, 31, 0
  03e6c90  fmuls 1, 2, 1
  03e6c94  li 4, 1
  03e6c98  fctiwz 1, 1
  03e6c9c  stfd 1, 352(1)
  03e6ca0  lwz 6, 356(1)
  03e6ca4  extsw 6, 6
  03e6ca8  bl 0xfddc0
  03e6cac  nop
  03e6cb0  b 0x3e7060
  03e6cb4  lis 4, 62
  03e6cb8  ori 3, 31, 0
  03e6cbc  addi 29, 4, 20852
  03e6cc0  addic 4, 30, 624
  03e6cc4  lfs 1, 52(29)
  03e6cc8  bl 0x3e37b0
  03e6ccc  lfs 1, 20(31)
  03e6cd0  lfs 2, 628(30)
  03e6cd4  lfs 3, 16(31)
  03e6cd8  fsubs 1, 1, 2
  03e6cdc  lfs 2, 624(30)
  03e6ce0  fsubs 2, 3, 2
  03e6ce4  fmuls 1, 1, 1
  03e6ce8  fmadds 1, 2, 2, 1
  03e6cec  lfs 2, 100(29)
  03e6cf0  fsqrts 1, 1
  03e6cf4  fcmpu 0, 1, 2
  03e6cf8  cror 6, 1, 2
  03e6cfc  bt 6, 0x3e6d54
  03e6d00  li 3, 1
  03e6d04  lbz 4, 83(31)
  03e6d08  cmpwi 4, 0
  03e6d0c  stb 3, 32(31)
  03e6d10  bt 2, 0x3e7060
  03e6d14  lis 3, 62
  03e6d18  lis 4, 114
  03e6d1c  addi 3, 3, 20852
  03e6d20  li 5, 0
  03e6d24  lfs 1, 168(3)
  03e6d28  lfs 2, -3056(4)
  03e6d2c  ori 3, 31, 0
  03e6d30  li 4, 0
  03e6d34  fmuls 1, 2, 1
  03e6d38  fctiwz 1, 1
  03e6d3c  stfd 1, 352(1)
  03e6d40  lwz 6, 356(1)
  03e6d44  extsw 6, 6
  03e6d48  bl 0xfddc0
  03e6d4c  nop
  03e6d50  b 0x3e7060
  03e6d54  lwz 3, 356(30)
  03e6d58  cmpwi 3, 2
  03e6d5c  bt 2, 0x3e6db4
  03e6d60  li 3, 4
  03e6d64  lbz 4, 83(31)
  03e6d68  cmpwi 4, 1
  03e6d6c  stb 3, 32(31)
  03e6d70  bt 2, 0x3e7060
  03e6d74  lis 3, 62
  03e6d78  lis 4, 114
  03e6d7c  addi 3, 3, 20852
  03e6d80  li 5, 0
  03e6d84  lfs 1, 168(3)
  03e6d88  lfs 2, -3056(4)
  03e6d8c  ori 3, 31, 0
  03e6d90  li 4, 1
  03e6d94  fmuls 1, 2, 1
  03e6d98  fctiwz 1, 1
  03e6d9c  stfd 1, 352(1)
  03e6da0  lwz 6, 356(1)
  03e6da4  extsw 6, 6
  03e6da8  bl 0xfddc0
  03e6dac  nop
  03e6db0  b 0x3e7060
  03e6db4  lwz 3, 688(30)
  03e6db8  cmpwi 3, 0
  03e6dbc  bt 2, 0x3e7060
  03e6dc0  li 3, 6
  03e6dc4  stb 3, 32(31)
  03e6dc8  b 0x3e7060
  03e6dcc  ori 3, 31, 0
  03e6dd0  addic 4, 30, 112
  03e6dd4  bl 0x10b030
  03e6dd8  nop
  03e6ddc  rlwinm 3, 3, 0, 25, 26
  03e6de0  cmpwi 3, 0
  03e6de4  bt 2, 0x3e6ebc
  03e6de8  lis 3, 62
  03e6dec  ori 8, 30, 0
  03e6df0  addi 4, 3, 20852
  03e6df4  lis 5, 133
  03e6df8  addic 3, 8, 704
  03e6dfc  addic 30, 31, 16
  03e6e00  lwz 6, 708(8)
  03e6e04  addic 9, 1, 336
  03e6e08  lfs 1, 28(4)
  03e6e0c  addic 8, 8, 624
  03e6e10  lfs 2, 15804(5)
  03e6e14  li 4, 1
  03e6e18  extsw 5, 6
  03e6e1c  ori 7, 30, 0
  03e6e20  fmuls 1, 2, 1
  03e6e24  bl 0x114d58
  03e6e28  nop
  03e6e2c  cmpwi 3, 0
  03e6e30  bt 2, 0x3e6e88
  03e6e34  li 3, 4
  03e6e38  lbz 4, 83(31)
  03e6e3c  cmpwi 4, 1
  03e6e40  stb 3, 32(31)
  03e6e44  bt 2, 0x3e7060
  03e6e48  lis 3, 62
  03e6e4c  lis 4, 114
  03e6e50  addi 3, 3, 20852
  03e6e54  li 5, 0
  03e6e58  lfs 1, 48(3)
  03e6e5c  lfs 2, -3056(4)
  03e6e60  ori 3, 31, 0
  03e6e64  fmuls 1, 2, 1
  03e6e68  li 4, 1
  03e6e6c  fctiwz 1, 1
  03e6e70  stfd 1, 352(1)
  03e6e74  lwz 6, 356(1)
  03e6e78  extsw 6, 6
  03e6e7c  bl 0xfddc0
  03e6e80  nop
  03e6e84  b 0x3e7060
  03e6e88  lis 4, 62
  03e6e8c  ori 3, 31, 0
  03e6e90  addi 5, 4, 20852
  03e6e94  ori 4, 30, 0
  03e6e98  li 6, -1
  03e6e9c  lfs 1, 44(5)
  03e6ea0  lfs 2, 172(5)
  03e6ea4  bl 0x10fb28
  03e6ea8  nop
  03e6eac  ori 3, 31, 0
  03e6eb0  bl 0xefb38
  03e6eb4  nop
  03e6eb8  b 0x3e7074
  03e6ebc  lwz 4, 24(31)
  03e6ec0  lis 3, 16384
  03e6ec4  srawi 5, 4, 31
  03e6ec8  srwi 6, 5, 1
  03e6ecc  xor 4, 6, 4
  03e6ed0  subc 4, 4, 5
  03e6ed4  cmpw 4, 3
  03e6ed8  bf 0, 0x3e7060
  03e6edc  ori 3, 31, 0
  03e6ee0  bl 0xefb38
  03e6ee4  nop
  03e6ee8  b 0x3e7074
  03e6eec  lbz 3, 112(31)
  03e6ef0  rlwinm 3, 3, 0, 30, 30
  03e6ef4  cmpwi 3, 0
  03e6ef8  bt 2, 0x3e7060
  03e6efc  li 3, 1
  03e6f00  lbz 4, 83(31)
  03e6f04  cmpwi 4, 0
  03e6f08  stb 3, 32(31)
  03e6f0c  bt 2, 0x3e7060
  03e6f10  lis 3, 62
  03e6f14  lis 4, 114
  03e6f18  addi 3, 3, 20852
  03e6f1c  li 5, 0
  03e6f20  lfs 1, 48(3)
  03e6f24  lfs 2, -3056(4)
  03e6f28  ori 3, 31, 0
  03e6f2c  fmuls 1, 2, 1
  03e6f30  li 4, 0
  03e6f34  fctiwz 1, 1
  03e6f38  stfd 1, 352(1)
  03e6f3c  lwz 6, 356(1)
  03e6f40  extsw 6, 6
  03e6f44  bl 0xfddc0
  03e6f48  nop
  03e6f4c  b 0x3e7060
  03e6f50  ori 3, 31, 0
  03e6f54  addic 4, 30, 112
  03e6f58  bl 0x10b030
  03e6f5c  nop
  03e6f60  rlwinm 3, 3, 0, 25, 26
  03e6f64  cmpwi 3, 0
  03e6f68  bt 2, 0x3e7044
  03e6f6c  lis 3, 62
  03e6f70  addic 30, 31, 16
  03e6f74  addi 29, 3, 20852
  03e6f78  ori 4, 30, 0
  03e6f7c  ori 3, 31, 0
  03e6f80  li 6, -1
  03e6f84  lfs 1, 44(29)
  03e6f88  lfs 2, 172(29)
  03e6f8c  bl 0x10fb28
  03e6f90  nop
  03e6f94  lis 4, 161
  03e6f98  lfs 31, 52(29)
  03e6f9c  ori 3, 31, 0
  03e6fa0  addic 28, 4, 23856
  03e6fa4  addic 29, 31, 64
  03e6fa8  ori 10, 28, 0
  03e6fac  fmr 1, 31
  03e6fb0  li 4, 1754
  03e6fb4  std 28, 112(1)
  03e6fb8  std 28, 120(1)
  03e6fbc  ori 5, 30, 0
  03e6fc0  ori 6, 29, 0
  03e6fc4  li 7, 0
  03e6fc8  li 8, 0
  03e6fcc  bl 0x11a560
  03e6fd0  nop
  03e6fd4  std 28, 112(1)
  03e6fd8  ori 3, 31, 0
  03e6fdc  std 28, 120(1)
  03e6fe0  ori 10, 28, 0
  03e6fe4  fmr 1, 31
  03e6fe8  li 4, 1755
  03e6fec  ori 5, 30, 0
  03e6ff0  ori 6, 29, 0
  03e6ff4  li 7, 0
  03e6ff8  li 8, 0
  03e6ffc  bl 0x11a560
  03e7000  nop
  03e7004  ori 3, 31, 0
  03e7008  std 28, 112(1)
  03e700c  ori 10, 28, 0
  03e7010  li 4, 1756
  03e7014  fmr 1, 31
  03e7018  ori 5, 30, 0
  03e701c  std 28, 120(1)
  03e7020  ori 6, 29, 0
  03e7024  li 7, 0
  03e7028  li 8, 0
  03e702c  bl 0x11a560
  03e7030  nop
  03e7034  ori 3, 31, 0
  03e7038  bl 0xefb38
  03e703c  nop
  03e7040  b 0x3e7074
  03e7044  lwz 3, 24(31)
  03e7048  cmpwi 3, 0
  03e704c  bf 0, 0x3e7060
  03e7050  ori 3, 31, 0
  03e7054  bl 0xefb38
  03e7058  nop
  03e705c  b 0x3e7074
  03e7060  lis 3, 146
  03e7064  lis 4, 269
  03e7068  lwz 3, 29176(3)
  03e706c  lwz 3, 0(3)
  03e7070  stw 3, -17496(4)
  03e7074  ld 0, 480(1)
  03e7078  mtlr 0
  03e707c  lfd 28, 432(1)
  03e7080  lfd 29, 440(1)
  03e7084  lfd 30, 448(1)
  03e7088  lfd 31, 456(1)
  03e708c  ld 25, 376(1)
  03e7090  ld 26, 384(1)
  03e7094  ld 27, 392(1)
  03e7098  ld 28, 400(1)
  03e709c  ld 29, 408(1)
  03e70a0  ld 30, 416(1)
  03e70a4  ld 31, 424(1)
  03e70a8  addi 1, 1, 464
  03e70ac  blr
