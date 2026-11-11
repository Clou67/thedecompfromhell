# game/update/moby987.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M987_003f3260:   # 0x3f3260, 0xec bytes
  03f3260  stdu 1, -160(1)
  03f3264  mflr 0
  03f3268  std 0, 176(1)
  03f326c  stfd 31, 152(1)
  03f3270  std 28, 120(1)
  03f3274  ori 28, 3, 0
  03f3278  li 3, 632
  03f327c  std 31, 144(1)
  03f3280  fmr 31, 1
  03f3284  std 30, 136(1)
  03f3288  ori 31, 6, 0
  03f328c  std 29, 128(1)
  03f3290  ori 30, 5, 0
  03f3294  std 27, 112(1)
  03f3298  ori 29, 4, 0
  03f329c  bl 0xefa28
  03f32a0  nop
  03f32a4  ori 27, 3, 0
  03f32a8  cmpwi 27, 0
  03f32ac  bt 2, 0x3f3320
  03f32b0  li 3, 255
  03f32b4  li 4, 1
  03f32b8  stb 3, 48(27)
  03f32bc  stb 4, 49(27)
  03f32c0  stb 4, 32(27)
  03f32c4  li 3, 126
  03f32c8  lfs 1, 0(29)
  03f32cc  lwz 4, 120(27)
  03f32d0  stfs 1, 16(27)
  03f32d4  lfs 1, 4(29)
  03f32d8  stfs 1, 20(27)
  03f32dc  lfs 1, 8(29)
  03f32e0  sth 3, 50(27)
  03f32e4  stfs 1, 24(27)
  03f32e8  lfs 1, 12(29)
  03f32ec  ori 3, 27, 0
  03f32f0  stfs 1, 28(27)
  03f32f4  lfs 1, 0(28)
  03f32f8  stfs 1, 0(4)
  03f32fc  lfs 1, 4(28)
  03f3300  stw 31, 20(4)
  03f3304  stfs 1, 4(4)
  03f3308  lfs 1, 8(28)
  03f330c  stfs 31, 12(4)
  03f3310  stfs 1, 8(4)
  03f3314  stw 30, 16(4)
  03f3318  bl 0xf31a8
  03f331c  nop
  03f3320  ori 3, 27, 0
  03f3324  ld 0, 176(1)
  03f3328  mtlr 0
  03f332c  lfd 31, 152(1)
  03f3330  ld 27, 112(1)
  03f3334  ld 28, 120(1)
  03f3338  ld 29, 128(1)
  03f333c  ld 30, 136(1)
  03f3340  ld 31, 144(1)
  03f3344  addi 1, 1, 160
  03f3348  blr

M987_003f334c:   # 0x3f334c, 0x14 bytes
  03f334c  lis 3, 133
  03f3350  lis 4, 1
  03f3354  addic 3, 3, 17340
  03f3358  stw 4, 72(3)
  03f335c  blr

M987_003f3388:   # 0x3f3388, 0x8f4 bytes
  03f3388  stdu 1, -496(1)
  03f338c  mflr 0
  03f3390  std 0, 512(1)
  03f3394  stfd 14, 352(1)
  03f3398  stfd 15, 360(1)
  03f339c  stfd 16, 368(1)
  03f33a0  stfd 17, 376(1)
  03f33a4  stfd 18, 384(1)
  03f33a8  stfd 19, 392(1)
  03f33ac  stfd 20, 400(1)
  03f33b0  stfd 21, 408(1)
  03f33b4  stfd 22, 416(1)
  03f33b8  stfd 23, 424(1)
  03f33bc  stfd 24, 432(1)
  03f33c0  stfd 25, 440(1)
  03f33c4  stfd 26, 448(1)
  03f33c8  stfd 27, 456(1)
  03f33cc  stfd 28, 464(1)
  03f33d0  stfd 29, 472(1)
  03f33d4  stfd 30, 480(1)
  03f33d8  stfd 31, 488(1)
  03f33dc  std 31, 344(1)
  03f33e0  ori 31, 4, 0
  03f33e4  std 30, 336(1)
  03f33e8  lhz 4, 166(3)
  03f33ec  std 29, 328(1)
  03f33f0  ori 30, 5, 0
  03f33f4  lwz 29, 120(3)
  03f33f8  extsh 3, 4
  03f33fc  cmpwi 3, 988
  03f3400  cmpwi 1, 3, 989
  03f3404  std 28, 320(1)
  03f3408  cmpwi 6, 3, 987
  03f340c  bt 1, 0x3f3418
  03f3410  bf 25, 0x3f3478
  03f3414  b 0x3f3420
  03f3418  bf 5, 0x3f344c
  03f341c  b 0x3f3478
  03f3420  lis 3, 133
  03f3424  lis 4, 133
  03f3428  lis 5, 133
  03f342c  lis 6, 133
  03f3430  lfs 14, 17468(3)
  03f3434  lfs 15, 17548(4)
  03f3438  lfs 1, 17480(5)
  03f343c  lfs 2, 17492(6)
  03f3440  stfd 1, 240(1)
  03f3444  stfd 2, 248(1)
  03f3448  b 0x3f34a0
  03f344c  lis 3, 133
  03f3450  lis 4, 133
  03f3454  lis 5, 133
  03f3458  lis 6, 133
  03f345c  lfs 14, 17472(3)
  03f3460  lfs 15, 17552(4)
  03f3464  lfs 1, 17484(5)
  03f3468  lfs 2, 17496(6)
  03f346c  stfd 1, 240(1)
  03f3470  stfd 2, 248(1)
  03f3474  b 0x3f34a0
  03f3478  lis 3, 133
  03f347c  lis 4, 133
  03f3480  lis 5, 133
  03f3484  lis 6, 133
  03f3488  lfs 14, 17464(3)
  03f348c  lfs 15, 17544(4)
  03f3490  lfs 1, 17476(5)
  03f3494  lfs 2, 17488(6)
  03f3498  stfd 1, 240(1)
  03f349c  stfd 2, 248(1)
  03f34a0  lfd 1, 248(1)
  03f34a4  addic 3, 1, 176
  03f34a8  lfd 2, 240(1)
  03f34ac  fmuls 31, 14, 15
  03f34b0  fmuls 30, 1, 15
  03f34b4  addic 4, 29, 16
  03f34b8  fmuls 29, 2, 15
  03f34bc  stfs 29, 256(1)
  03f34c0  stfs 30, 260(1)
  03f34c4  bl 0x500ca4
  03f34c8  nop
  03f34cc  lis 3, 63
  03f34d0  lfs 1, 96(29)
  03f34d4  addi 3, 3, 13152
  03f34d8  lfs 2, 180(1)
  03f34dc  fmuls 10, 2, 2
  03f34e0  lfs 3, 0(3)
  03f34e4  lfs 4, 196(1)
  03f34e8  fsubs 11, 3, 1
  03f34ec  lfs 5, 28(3)
  03f34f0  lfs 6, 4(3)
  03f34f4  fmuls 26, 4, 4
  03f34f8  fadds 13, 1, 5
  03f34fc  lfs 7, 176(1)
  03f3500  fsubs 0, 6, 1
  03f3504  lfs 8, 192(1)
  03f3508  lfs 9, 184(1)
  03f350c  lfs 12, 200(1)
  03f3510  fmadds 10, 7, 7, 10
  03f3514  fsub 28, 1, 11
  03f3518  fmadds 26, 8, 8, 26
  03f351c  fsubs 27, 3, 13
  03f3520  fmadds 10, 9, 9, 10
  03f3524  fsel 1, 28, 11, 1
  03f3528  fsubs 11, 6, 13
  03f352c  fsub 28, 13, 27
  03f3530  fsqrts 10, 10
  03f3534  li 28, 0
  03f3538  fsub 20, 0, 1
  03f353c  fsel 13, 28, 27, 13
  03f3540  fmadds 27, 12, 12, 26
  03f3544  lfs 28, 8(3)
  03f3548  lfs 26, 12(3)
  03f354c  lfs 23, 16(3)
  03f3550  lfs 22, 20(3)
  03f3554  fsel 1, 20, 0, 1
  03f3558  fsub 0, 11, 13
  03f355c  fsqrts 27, 27
  03f3560  lfs 21, 24(3)
  03f3564  lfs 25, 212(1)
  03f3568  lfs 19, 32(3)
  03f356c  fmuls 18, 1, 1
  03f3570  fsel 11, 0, 11, 13
  03f3574  fmr 13, 23
  03f3578  fmr 0, 22
  03f357c  fsub 15, 21, 10
  03f3580  fsub 14, 21, 10
  03f3584  fmuls 23, 18, 1
  03f3588  fmuls 22, 11, 11
  03f358c  fsub 29, 10, 21
  03f3590  fmuls 31, 31, 19
  03f3594  stfs 13, 272(1)
  03f3598  fmuls 17, 18, 23
  03f359c  fmadds 1, 23, 28, 1
  03f35a0  fmuls 23, 22, 11
  03f35a4  fmuls 16, 18, 17
  03f35a8  fmadds 1, 17, 26, 1
  03f35ac  fmadds 11, 23, 28, 11
  03f35b0  fmuls 23, 22, 23
  03f35b4  fmuls 18, 18, 16
  03f35b8  fmadds 1, 16, 13, 1
  03f35bc  fmuls 17, 22, 23
  03f35c0  fmadds 11, 23, 26, 11
  03f35c4  fsub 16, 10, 21
  03f35c8  fsub 30, 21, 27
  03f35cc  fsub 24, 21, 27
  03f35d0  fnmadds 1, 18, 0, 1
  03f35d4  fmuls 23, 22, 17
  03f35d8  fmadds 11, 17, 13, 11
  03f35dc  fsub 17, 21, 10
  03f35e0  fsub 20, 27, 21
  03f35e4  fsub 13, 27, 21
  03f35e8  fdivs 22, 1, 10
  03f35ec  stfs 1, 264(1)
  03f35f0  stfs 10, 268(1)
  03f35f4  fmadds 18, 23, 0, 11
  03f35f8  fsub 1, 10, 21
  03f35fc  fsub 10, 21, 27
  03f3600  fsub 19, 27, 21
  03f3604  fdivs 18, 18, 27
  03f3608  fnmadds 11, 23, 0, 11
  03f360c  lis 5, 16256
  03f3610  fmuls 7, 7, 22
  03f3614  fmuls 2, 2, 22
  03f3618  fmuls 22, 9, 22
  03f361c  fsel 15, 15, 21, 7
  03f3620  fsel 17, 17, 21, 2
  03f3624  fsel 14, 14, 21, 22
  03f3628  fsel 7, 29, 15, 7
  03f362c  fsel 2, 16, 17, 2
  03f3630  fsel 1, 1, 14, 22
  03f3634  fadds 17, 31, 5
  03f3638  fmuls 29, 4, 18
  03f363c  fmuls 22, 8, 18
  03f3640  fmuls 18, 12, 18
  03f3644  fsubs 16, 3, 17
  03f3648  fsel 30, 30, 21, 29
  03f364c  fsel 10, 10, 21, 22
  03f3650  fsel 24, 24, 21, 18
  03f3654  fsel 30, 20, 30, 29
  03f3658  fsel 10, 13, 10, 22
  03f365c  fsel 13, 19, 24, 18
  03f3660  fsub 29, 17, 16
  03f3664  fadds 30, 2, 30
  03f3668  fsubs 2, 6, 17
  03f366c  fadds 22, 1, 13
  03f3670  fsel 1, 29, 16, 17
  03f3674  fadds 24, 7, 10
  03f3678  fsubs 7, 3, 31
  03f367c  fmuls 10, 25, 25
  03f3680  fsubs 29, 6, 31
  03f3684  fmuls 13, 30, 30
  03f3688  stfs 30, 300(1)
  03f368c  fsub 20, 2, 1
  03f3690  stfs 6, 292(1)
  03f3694  fsub 19, 31, 7
  03f3698  lfs 18, 208(1)
  03f369c  fmadds 10, 18, 18, 10
  03f36a0  fmadds 13, 24, 24, 13
  03f36a4  fsel 1, 20, 2, 1
  03f36a8  fsel 2, 19, 7, 31
  03f36ac  lfs 7, 216(1)
  03f36b0  fmadds 10, 7, 7, 10
  03f36b4  stfs 22, 296(1)
  03f36b8  fmadds 13, 22, 22, 13
  03f36bc  lfs 23, 272(1)
  03f36c0  fmuls 31, 1, 1
  03f36c4  fsub 20, 29, 2
  03f36c8  fsqrts 10, 10
  03f36cc  stfs 28, 288(1)
  03f36d0  stfs 26, 284(1)
  03f36d4  addic 3, 1, 112
  03f36d8  ori 4, 30, 0
  03f36dc  fsqrts 17, 13
  03f36e0  fmuls 13, 31, 1
  03f36e4  fsel 2, 20, 29, 2
  03f36e8  fmadds 1, 13, 28, 1
  03f36ec  fmuls 13, 31, 13
  03f36f0  fmuls 29, 2, 2
  03f36f4  fsub 19, 21, 10
  03f36f8  fmadds 1, 13, 26, 1
  03f36fc  fmuls 13, 31, 13
  03f3700  fmuls 20, 29, 2
  03f3704  fmuls 31, 31, 13
  03f3708  fmadds 1, 13, 23, 1
  03f370c  fmadds 2, 20, 28, 2
  03f3710  fmuls 13, 29, 20
  03f3714  fmadds 1, 31, 0, 1
  03f3718  fmadds 2, 13, 26, 2
  03f371c  fmuls 13, 29, 13
  03f3720  lfs 31, 268(1)
  03f3724  stfs 0, 276(1)
  03f3728  fdivs 11, 11, 31
  03f372c  fmuls 29, 29, 13
  03f3730  fmadds 2, 13, 23, 2
  03f3734  fdivs 1, 1, 17
  03f3738  lfs 13, 264(1)
  03f373c  lfs 14, 176(1)
  03f3740  stfs 17, 280(1)
  03f3744  lfs 28, 180(1)
  03f3748  stfs 24, 304(1)
  03f374c  fmadds 2, 29, 0, 2
  03f3750  fdivs 13, 13, 27
  03f3754  fdivs 2, 2, 10
  03f3758  fsub 16, 21, 17
  03f375c  fsub 29, 21, 17
  03f3760  fsub 23, 17, 21
  03f3764  fsub 20, 17, 21
  03f3768  fsub 15, 21, 17
  03f376c  fmuls 14, 14, 11
  03f3770  fsub 6, 21, 31
  03f3774  fmuls 9, 9, 11
  03f3778  fsub 0, 21, 10
  03f377c  fmuls 11, 28, 11
  03f3780  fsub 28, 21, 10
  03f3784  fsub 26, 10, 21
  03f3788  fsub 17, 17, 21
  03f378c  fsel 6, 6, 21, 14
  03f3790  fmuls 30, 30, 1
  03f3794  fmuls 22, 22, 1
  03f3798  fmuls 1, 24, 1
  03f379c  fsel 16, 16, 21, 30
  03f37a0  fsel 29, 29, 21, 22
  03f37a4  fsel 15, 15, 21, 1
  03f37a8  fmuls 8, 8, 13
  03f37ac  fmuls 12, 12, 13
  03f37b0  fsel 30, 23, 16, 30
  03f37b4  fsel 29, 20, 29, 22
  03f37b8  fsub 23, 10, 21
  03f37bc  fsub 10, 10, 21
  03f37c0  fmuls 4, 4, 13
  03f37c4  fsub 13, 21, 31
  03f37c8  fsub 22, 31, 21
  03f37cc  fsel 1, 17, 15, 1
  03f37d0  fmuls 7, 7, 2
  03f37d4  fmuls 25, 25, 2
  03f37d8  fmuls 2, 18, 2
  03f37dc  fsel 13, 13, 21, 9
  03f37e0  fsel 6, 22, 6, 14
  03f37e4  fsub 22, 21, 27
  03f37e8  fsel 0, 0, 21, 7
  03f37ec  fsel 28, 28, 21, 25
  03f37f0  fsel 20, 19, 21, 2
  03f37f4  fsel 7, 26, 0, 7
  03f37f8  fsel 0, 23, 28, 25
  03f37fc  fsel 2, 10, 20, 2
  03f3800  fsub 10, 31, 21
  03f3804  fsub 28, 21, 27
  03f3808  fsub 25, 21, 31
  03f380c  fsel 26, 22, 21, 8
  03f3810  fsub 31, 31, 21
  03f3814  fadds 7, 29, 7
  03f3818  fadds 0, 30, 0
  03f381c  fadds 1, 1, 2
  03f3820  fsel 2, 10, 13, 9
  03f3824  fsub 9, 27, 21
  03f3828  fsel 10, 28, 21, 12
  03f382c  fsub 30, 27, 21
  03f3830  fsel 13, 25, 21, 11
  03f3834  fsub 29, 21, 27
  03f3838  fsub 28, 27, 21
  03f383c  fsel 8, 9, 26, 8
  03f3840  fsel 10, 30, 10, 12
  03f3844  fsel 9, 31, 13, 11
  03f3848  lfs 12, 100(29)
  03f384c  fsel 11, 29, 21, 4
  03f3850  lfs 31, 292(1)
  03f3854  fadds 13, 12, 5
  03f3858  fsubs 25, 31, 12
  03f385c  fadds 6, 6, 8
  03f3860  fadds 2, 2, 10
  03f3864  fsel 4, 28, 11, 4
  03f3868  fsubs 8, 3, 13
  03f386c  fsubs 30, 31, 13
  03f3870  fmuls 10, 6, 7
  03f3874  fmuls 11, 2, 0
  03f3878  fadds 4, 9, 4
  03f387c  fsub 9, 13, 8
  03f3880  fmsubs 10, 2, 1, 10
  03f3884  fmsubs 11, 4, 7, 11
  03f3888  fmuls 29, 4, 1
  03f388c  fsel 8, 9, 8, 13
  03f3890  fsubs 9, 3, 12
  03f3894  fmuls 28, 4, 4
  03f3898  fmuls 13, 10, 10
  03f389c  stfs 10, 268(1)
  03f38a0  stw 28, 124(1)
  03f38a4  fmsubs 29, 6, 0, 29
  03f38a8  fsub 27, 30, 8
  03f38ac  fsub 26, 12, 9
  03f38b0  fmadds 28, 6, 6, 28
  03f38b4  fmadds 13, 11, 11, 13
  03f38b8  fsel 8, 27, 30, 8
  03f38bc  fsel 9, 26, 9, 12
  03f38c0  lfs 27, 288(1)
  03f38c4  fmadds 12, 29, 29, 13
  03f38c8  fmadds 13, 2, 2, 28
  03f38cc  fmuls 30, 8, 8
  03f38d0  fsub 28, 25, 9
  03f38d4  fsqrts 12, 12
  03f38d8  fsel 9, 28, 25, 9
  03f38dc  fmuls 28, 30, 8
  03f38e0  fsqrts 13, 13
  03f38e4  lfs 25, 284(1)
  03f38e8  lfs 22, 272(1)
  03f38ec  fmadds 8, 28, 27, 8
  03f38f0  fmuls 28, 30, 28
  03f38f4  fmuls 26, 9, 9
  03f38f8  fmadds 8, 28, 25, 8
  03f38fc  fmuls 28, 30, 28
  03f3900  fmuls 23, 26, 9
  03f3904  fsub 19, 12, 21
  03f3908  fsub 18, 12, 21
  03f390c  fsub 20, 12, 21
  03f3910  fmuls 30, 30, 28
  03f3914  fmadds 8, 28, 22, 8
  03f3918  fmadds 9, 23, 27, 9
  03f391c  fmuls 28, 26, 23
  03f3920  lfs 23, 276(1)
  03f3924  fmadds 8, 30, 23, 8
  03f3928  fmadds 9, 28, 25, 9
  03f392c  fmuls 30, 26, 28
  03f3930  fdivs 8, 8, 12
  03f3934  fmuls 28, 26, 30
  03f3938  fmadds 9, 30, 22, 9
  03f393c  fsub 26, 21, 12
  03f3940  fsub 30, 21, 12
  03f3944  fsub 17, 21, 13
  03f3948  fsub 16, 21, 13
  03f394c  fsub 15, 21, 13
  03f3950  fsub 14, 13, 21
  03f3954  fmadds 9, 28, 23, 9
  03f3958  fsub 28, 21, 12
  03f395c  fsub 24, 13, 21
  03f3960  fsub 23, 13, 21
  03f3964  fdivs 9, 9, 13
  03f3968  fmuls 22, 29, 8
  03f396c  fmuls 10, 10, 8
  03f3970  fmuls 8, 11, 8
  03f3974  fsel 30, 30, 21, 22
  03f3978  fsel 28, 28, 21, 10
  03f397c  fsel 26, 26, 21, 8
  03f3980  fsel 30, 20, 30, 22
  03f3984  fsel 10, 19, 28, 10
  03f3988  fsel 8, 18, 26, 8
  03f398c  fmuls 28, 9, 2
  03f3990  fmuls 26, 9, 4
  03f3994  fmuls 9, 9, 6
  03f3998  fsel 22, 17, 21, 28
  03f399c  fsel 20, 16, 21, 26
  03f39a0  fsel 19, 15, 21, 9
  03f39a4  fsel 28, 14, 22, 28
  03f39a8  fsel 26, 24, 20, 26
  03f39ac  fsel 9, 23, 19, 9
  03f39b0  fadds 30, 30, 28
  03f39b4  fadds 10, 10, 26
  03f39b8  fadds 8, 8, 9
  03f39bc  fsub 28, 13, 21
  03f39c0  stfs 30, 120(1)
  03f39c4  stfs 10, 116(1)
  03f39c8  stfs 8, 112(1)
  03f39cc  lfs 8, 100(29)
  03f39d0  fsubs 9, 3, 8
  03f39d4  fadds 5, 8, 5
  03f39d8  fsubs 10, 31, 8
  03f39dc  fsub 30, 8, 9
  03f39e0  fsubs 3, 3, 5
  03f39e4  fsubs 31, 31, 5
  03f39e8  fsel 8, 30, 9, 8
  03f39ec  fsub 9, 5, 3
  03f39f0  fsub 30, 10, 8
  03f39f4  fsel 3, 9, 3, 5
  03f39f8  fsel 5, 30, 10, 8
  03f39fc  fsub 8, 31, 3
  03f3a00  fmuls 9, 5, 5
  03f3a04  fsel 3, 8, 31, 3
  03f3a08  fmuls 8, 9, 5
  03f3a0c  fmuls 10, 3, 3
  03f3a10  fmuls 31, 9, 8
  03f3a14  fmadds 5, 8, 27, 5
  03f3a18  fmuls 8, 10, 3
  03f3a1c  fmuls 30, 9, 31
  03f3a20  fmadds 5, 31, 25, 5
  03f3a24  fmuls 31, 10, 8
  03f3a28  fmadds 3, 8, 27, 3
  03f3a2c  fsub 27, 13, 21
  03f3a30  fmuls 8, 9, 30
  03f3a34  lfs 9, 272(1)
  03f3a38  fmadds 5, 30, 9, 5
  03f3a3c  fmuls 30, 10, 31
  03f3a40  fmadds 3, 31, 25, 3
  03f3a44  lfs 31, 276(1)
  03f3a48  stw 28, 140(1)
  03f3a4c  stfs 1, 144(1)
  03f3a50  stfs 0, 148(1)
  03f3a54  fsub 1, 21, 12
  03f3a58  stfs 7, 152(1)
  03f3a5c  fnmadds 5, 8, 31, 5
  03f3a60  fmuls 8, 10, 30
  03f3a64  fmadds 3, 30, 9, 3
  03f3a68  stw 28, 156(1)
  03f3a6c  fsub 7, 21, 12
  03f3a70  stw 28, 168(1)
  03f3a74  fsub 9, 12, 21
  03f3a78  stw 28, 164(1)
  03f3a7c  fsub 10, 12, 21
  03f3a80  stw 28, 160(1)
  03f3a84  fsub 0, 21, 13
  03f3a88  stw 5, 172(1)
  03f3a8c  fsub 30, 21, 13
  03f3a90  fdivs 5, 5, 12
  03f3a94  lfs 26, 268(1)
  03f3a98  fmadds 3, 8, 31, 3
  03f3a9c  fsub 8, 21, 12
  03f3aa0  fsub 12, 12, 21
  03f3aa4  fsub 31, 21, 13
  03f3aa8  fdivs 3, 3, 13
  03f3aac  fsub 13, 13, 21
  03f3ab0  fmuls 29, 29, 5
  03f3ab4  fmuls 26, 26, 5
  03f3ab8  fmuls 5, 11, 5
  03f3abc  fsel 8, 8, 21, 29
  03f3ac0  fsel 1, 1, 21, 26
  03f3ac4  fsel 7, 7, 21, 5
  03f3ac8  fsel 8, 9, 8, 29
  03f3acc  fsel 1, 10, 1, 26
  03f3ad0  fsel 5, 12, 7, 5
  03f3ad4  fmuls 2, 3, 2
  03f3ad8  fmuls 4, 3, 4
  03f3adc  fmuls 3, 3, 6
  03f3ae0  fsel 6, 0, 21, 2
  03f3ae4  fsel 7, 31, 21, 4
  03f3ae8  fsel 9, 30, 21, 3
  03f3aec  fsel 2, 28, 6, 2
  03f3af0  fsel 4, 27, 7, 4
  03f3af4  fsel 3, 13, 9, 3
  03f3af8  fadds 2, 8, 2
  03f3afc  fadds 1, 1, 4
  03f3b00  fadds 3, 5, 3
  03f3b04  stfs 2, 136(1)
  03f3b08  stfs 1, 132(1)
  03f3b0c  stfs 3, 128(1)
  03f3b10  bl 0x10c1e8
  03f3b14  nop
  03f3b18  lfs 1, 212(1)
  03f3b1c  lfs 2, 208(1)
  03f3b20  fmuls 3, 1, 1
  03f3b24  lfs 4, 216(1)
  03f3b28  stw 28, 12(30)
  03f3b2c  lfs 5, 0(29)
  03f3b30  lfs 6, 260(1)
  03f3b34  lfs 7, 280(1)
  03f3b38  lfs 11, 256(1)
  03f3b3c  fdivs 6, 6, 7
  03f3b40  lfs 27, 296(1)
  03f3b44  lfs 26, 300(1)
  03f3b48  lfs 25, 304(1)
  03f3b4c  fmadds 3, 2, 2, 3
  03f3b50  fsub 10, 21, 7
  03f3b54  fsub 8, 21, 7
  03f3b58  fsub 9, 21, 7
  03f3b5c  fsub 29, 7, 21
  03f3b60  fmadds 3, 4, 4, 3
  03f3b64  fsub 28, 7, 21
  03f3b68  fsub 7, 7, 21
  03f3b6c  fsqrts 3, 3
  03f3b70  fmuls 27, 27, 6
  03f3b74  fmuls 26, 26, 6
  03f3b78  fmuls 6, 25, 6
  03f3b7c  fsel 8, 8, 21, 27
  03f3b80  fsel 10, 10, 21, 6
  03f3b84  fsel 9, 9, 21, 26
  03f3b88  fsel 8, 29, 8, 27
  03f3b8c  fsel 6, 7, 10, 6
  03f3b90  fsel 9, 28, 9, 26
  03f3b94  fdivs 11, 11, 3
  03f3b98  fsub 12, 21, 3
  03f3b9c  fsub 13, 3, 21
  03f3ba0  fsub 0, 21, 3
  03f3ba4  fsub 30, 21, 3
  03f3ba8  fsub 31, 3, 21
  03f3bac  fsub 3, 3, 21
  03f3bb0  fmuls 2, 2, 11
  03f3bb4  fmuls 1, 1, 11
  03f3bb8  fmuls 4, 4, 11
  03f3bbc  fsel 7, 12, 21, 2
  03f3bc0  fsel 10, 0, 21, 1
  03f3bc4  fsel 11, 30, 21, 4
  03f3bc8  fsel 2, 13, 7, 2
  03f3bcc  fsel 1, 31, 10, 1
  03f3bd0  fsel 3, 3, 11, 4
  03f3bd4  fadds 2, 5, 2
  03f3bd8  stfs 2, 0(31)
  03f3bdc  lfs 4, 4(29)
  03f3be0  fadds 2, 2, 6
  03f3be4  fadds 1, 4, 1
  03f3be8  stfs 1, 4(31)
  03f3bec  lfs 4, 8(29)
  03f3bf0  fadds 1, 1, 9
  03f3bf4  fadds 3, 4, 3
  03f3bf8  fadds 4, 3, 8
  03f3bfc  stfs 3, 8(31)
  03f3c00  lfs 3, 12(29)
  03f3c04  stfs 3, 12(31)
  03f3c08  stfs 2, 0(31)
  03f3c0c  stfs 1, 4(31)
  03f3c10  stfs 4, 8(31)
  03f3c14  ld 0, 512(1)
  03f3c18  mtlr 0
  03f3c1c  lfd 14, 352(1)
  03f3c20  lfd 15, 360(1)
  03f3c24  lfd 16, 368(1)
  03f3c28  lfd 17, 376(1)
  03f3c2c  lfd 18, 384(1)
  03f3c30  lfd 19, 392(1)
  03f3c34  lfd 20, 400(1)
  03f3c38  lfd 21, 408(1)
  03f3c3c  lfd 22, 416(1)
  03f3c40  lfd 23, 424(1)
  03f3c44  lfd 24, 432(1)
  03f3c48  lfd 25, 440(1)
  03f3c4c  lfd 26, 448(1)
  03f3c50  lfd 27, 456(1)
  03f3c54  lfd 28, 464(1)
  03f3c58  lfd 29, 472(1)
  03f3c5c  lfd 30, 480(1)
  03f3c60  lfd 31, 488(1)
  03f3c64  ld 28, 320(1)
  03f3c68  ld 29, 328(1)
  03f3c6c  ld 30, 336(1)
  03f3c70  ld 31, 344(1)
  03f3c74  addi 1, 1, 496
  03f3c78  blr

M987_003f3c7c:   # 0x3f3c7c, 0xdc bytes
  03f3c7c  stdu 1, -256(1)
  03f3c80  mflr 0
  03f3c84  std 0, 272(1)
  03f3c88  lfs 1, 4(4)
  03f3c8c  lfs 2, 8(4)
  03f3c90  fmuls 3, 1, 1
  03f3c94  fmuls 4, 1, 2
  03f3c98  lfs 5, 0(4)
  03f3c9c  li 5, 0
  03f3ca0  lwz 3, 120(3)
  03f3ca4  fmuls 6, 5, 1
  03f3ca8  std 31, 248(1)
  03f3cac  lis 6, 16256
  03f3cb0  addic 31, 3, 16
  03f3cb4  addic 3, 1, 112
  03f3cb8  stw 5, 124(1)
  03f3cbc  fneg 3, 3
  03f3cc0  fneg 4, 4
  03f3cc4  fmsubs 6, 2, 2, 6
  03f3cc8  fnmsubs 3, 2, 5, 3
  03f3ccc  fmsubs 4, 5, 5, 4
  03f3cd0  fmuls 7, 1, 6
  03f3cd4  stfs 6, 112(1)
  03f3cd8  fmuls 8, 5, 3
  03f3cdc  fmuls 9, 2, 4
  03f3ce0  stfs 4, 116(1)
  03f3ce4  fmsubs 7, 5, 4, 7
  03f3ce8  stfs 3, 120(1)
  03f3cec  stw 5, 140(1)
  03f3cf0  stfs 5, 144(1)
  03f3cf4  stfs 1, 148(1)
  03f3cf8  stfs 2, 152(1)
  03f3cfc  fmsubs 4, 2, 6, 8
  03f3d00  fmsubs 1, 1, 3, 9
  03f3d04  stfs 7, 136(1)
  03f3d08  stfs 4, 132(1)
  03f3d0c  stfs 1, 128(1)
  03f3d10  lfs 1, 12(4)
  03f3d14  stw 5, 168(1)
  03f3d18  stfs 1, 156(1)
  03f3d1c  ori 4, 31, 0
  03f3d20  stw 5, 164(1)
  03f3d24  stw 5, 160(1)
  03f3d28  stw 6, 172(1)
  03f3d2c  bl 0x10c1e8
  03f3d30  nop
  03f3d34  addic 3, 1, 176
  03f3d38  ori 4, 31, 0
  03f3d3c  bl 0x500ca4
  03f3d40  nop
  03f3d44  ld 0, 272(1)
  03f3d48  mtlr 0
  03f3d4c  ld 31, 248(1)
  03f3d50  addi 1, 1, 256
  03f3d54  blr
