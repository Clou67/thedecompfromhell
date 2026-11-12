# game/update/moby556.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M556_003b3364:   # 0x3b3364, 0x14 bytes
  03b3364  lis 3, 132
  03b3368  lis 4, 1
  03b336c  addic 3, 3, 22692
  03b3370  stw 4, 72(3)
  03b3374  blr

M556_003b3378:   # 0x3b3378, 0x38 bytes
  03b3378  lwz 3, 120(3)
  03b337c  sldi 4, 4, 4
  03b3380  lwz 3, 704(3)
  03b3384  addc 3, 3, 4
  03b3388  clrldi 3, 3, 32
  03b338c  lfs 1, 16(3)
  03b3390  stfs 1, 0(5)
  03b3394  lfs 1, 20(3)
  03b3398  stfs 1, 4(5)
  03b339c  lfs 1, 24(3)
  03b33a0  stfs 1, 8(5)
  03b33a4  lfs 1, 28(3)
  03b33a8  stfs 1, 12(5)
  03b33ac  blr

M556_003b33c8:   # 0x3b33c8, 0x5c4 bytes
  03b33c8  stdu 1, -272(1)
  03b33cc  mflr 0
  03b33d0  std 0, 288(1)
  03b33d4  stfd 29, 248(1)
  03b33d8  stfd 30, 256(1)
  03b33dc  stfd 31, 264(1)
  03b33e0  std 29, 224(1)
  03b33e4  std 31, 240(1)
  03b33e8  ori 31, 3, 0
  03b33ec  std 30, 232(1)
  03b33f0  lis 29, 115
  03b33f4  lwz 30, 120(31)
  03b33f8  lfs 1, 16(31)
  03b33fc  addic 29, 29, 22784
  03b3400  lhz 3, 756(30)
  03b3404  lwz 4, 704(30)
  03b3408  extsh 5, 3
  03b340c  lfs 2, 20(31)
  03b3410  sldi 5, 5, 4
  03b3414  addc 4, 4, 5
  03b3418  std 27, 208(1)
  03b341c  clrldi 4, 4, 32
  03b3420  ori 27, 1, 0
  03b3424  lfs 3, 16(4)
  03b3428  lfs 4, 20(4)
  03b342c  fsubs 1, 3, 1
  03b3430  lis 4, 59
  03b3434  fsubs 2, 4, 2
  03b3438  addi 5, 4, 13232
  03b343c  fabs 3, 1
  03b3440  fabs 4, 2
  03b3444  stfs 1, 124(1)
  03b3448  stfs 2, 128(1)
  03b344c  fsubs 1, 3, 4
  03b3450  stfs 1, 132(1)
  03b3454  lwz 6, 124(1)
  03b3458  lfs 29, 0(5)
  03b345c  lfs 1, 124(1)
  03b3460  lwz 4, 128(1)
  03b3464  lfs 2, 128(1)
  03b3468  fabs 1, 1
  03b346c  lwz 8, 132(1)
  03b3470  rlwinm 7, 4, 3, 29, 29
  03b3474  fabs 5, 2
  03b3478  lfs 2, 132(1)
  03b347c  rlwimi 7, 8, 2, 30, 30
  03b3480  fsub 6, 2, 29
  03b3484  rlwimi 7, 6, 4, 28, 28
  03b3488  fsub 7, 2, 29
  03b348c  ori 6, 29, 0
  03b3490  ori 4, 30, 0
  03b3494  rlwimi 6, 7, 2, 26, 28
  03b3498  slwi 7, 7, 2
  03b349c  clrldi 6, 6, 32
  03b34a0  fsel 4, 6, 1, 4
  03b34a4  lfsx 1, 29, 7
  03b34a8  fsel 3, 7, 5, 3
  03b34ac  lfs 2, 4(6)
  03b34b0  lfs 31, 4(5)
  03b34b4  std 28, 216(1)
  03b34b8  fcmpu 0, 4, 29
  03b34bc  bt 1, 0x3b34c8
  03b34c0  fmr 1, 29
  03b34c4  b 0x3b35e0
  03b34c8  fsubs 5, 3, 4
  03b34cc  fadds 3, 3, 4
  03b34d0  addic 5, 1, 16
  03b34d4  li 8, 2
  03b34d8  addic 6, 5, 152
  03b34dc  addic 7, 5, 168
  03b34e0  mtctr 8
  03b34e4  fdivs 3, 5, 3
  03b34e8  fmuls 4, 3, 3
  03b34ec  stfs 3, 168(27)
  03b34f0  stfs 3, 172(27)
  03b34f4  stfs 3, 176(27)
  03b34f8  stfs 3, 180(27)
  03b34fc  lfs 3, 180(1)
  03b3500  lfs 5, 172(1)
  03b3504  lfs 7, 176(1)
  03b3508  fmuls 6, 4, 4
  03b350c  fmuls 5, 5, 4
  03b3510  fmuls 8, 3, 6
  03b3514  fmuls 7, 7, 6
  03b3518  fmuls 3, 6, 6
  03b351c  stfs 5, 172(1)
  03b3520  fmuls 4, 8, 4
  03b3524  stfs 7, 176(1)
  03b3528  stfs 4, 180(1)
  03b352c  lfs 4, 152(5)
  03b3530  fmuls 4, 4, 3
  03b3534  stfs 4, 168(5)
  03b3538  lfs 4, 4(6)
  03b353c  addic 5, 5, 8
  03b3540  addic 6, 6, 8
  03b3544  fmuls 4, 4, 3
  03b3548  stfs 4, 4(7)
  03b354c  addic 7, 7, 8
  03b3550  bdnz 0x3b352c
  03b3554  li 7, 4
  03b3558  ori 5, 1, 0
  03b355c  mtctr 7
  03b3560  lis 6, 115
  03b3564  addic 7, 5, 168
  03b3568  addic 6, 6, 22752
  03b356c  ori 9, 7, 0
  03b3570  lfs 3, 168(5)
  03b3574  lfs 4, 0(6)
  03b3578  fmuls 3, 3, 4
  03b357c  lfs 4, 4(6)
  03b3580  addic 6, 6, 8
  03b3584  stfs 3, 168(5)
  03b3588  lfs 3, 4(7)
  03b358c  addic 5, 5, 8
  03b3590  fmuls 3, 3, 4
  03b3594  stfs 3, 4(7)
  03b3598  addic 7, 7, 8
  03b359c  bdnz 0x3b3570
  03b35a0  fmr 3, 29
  03b35a4  ori 5, 1, 0
  03b35a8  mtctr 8
  03b35ac  lfs 4, 168(5)
  03b35b0  fadds 3, 3, 4
  03b35b4  addic 5, 5, 16
  03b35b8  lfs 4, 4(9)
  03b35bc  lfs 5, 8(9)
  03b35c0  lfs 6, 12(9)
  03b35c4  addic 9, 9, 16
  03b35c8  fadds 3, 3, 4
  03b35cc  fadds 3, 3, 5
  03b35d0  fadds 3, 3, 6
  03b35d4  bdnz 0x3b35ac
  03b35d8  fadds 3, 3, 31
  03b35dc  fmadds 1, 3, 1, 2
  03b35e0  extsh 3, 3
  03b35e4  lwz 4, 704(4)
  03b35e8  sldi 3, 3, 4
  03b35ec  lfs 2, 612(30)
  03b35f0  addc 3, 4, 3
  03b35f4  lfs 3, 608(30)
  03b35f8  clrldi 3, 3, 32
  03b35fc  lfs 4, 20(3)
  03b3600  lfs 5, 16(3)
  03b3604  fsubs 4, 4, 2
  03b3608  fsubs 3, 5, 3
  03b360c  lfs 2, 72(31)
  03b3610  fmuls 4, 4, 4
  03b3614  fmadds 30, 3, 3, 4
  03b3618  fsqrts 30, 30
  03b361c  bl 0x5026a0
  03b3620  nop
  03b3624  lis 3, 59
  03b3628  addi 3, 3, 13232
  03b362c  lfs 2, 8(3)
  03b3630  fcmpu 0, 1, 2
  03b3634  bt 0, 0x3b3650
  03b3638  lis 3, 59
  03b363c  addi 3, 3, 13232
  03b3640  lfs 1, 12(3)
  03b3644  fcmpu 0, 30, 1
  03b3648  cror 6, 0, 2
  03b364c  bt 6, 0x3b3664
  03b3650  lis 3, 59
  03b3654  addi 3, 3, 13232
  03b3658  lfs 1, 16(3)
  03b365c  fcmpu 0, 30, 1
  03b3660  bt 1, 0x3b395c
  03b3664  lhz 3, 756(30)
  03b3668  lwz 4, 704(30)
  03b366c  extsh 3, 3
  03b3670  addic 3, 3, 1
  03b3674  lwz 5, 0(4)
  03b3678  lis 28, 165
  03b367c  divw 6, 3, 5
  03b3680  mullw 5, 6, 5
  03b3684  lwz 6, 656(30)
  03b3688  addic 28, 28, 7136
  03b368c  subc 3, 3, 5
  03b3690  slwi 6, 6, 2
  03b3694  extsw 5, 6
  03b3698  sth 3, 756(30)
  03b369c  lwzx 5, 28, 5
  03b36a0  cmpw 4, 5
  03b36a4  bt 2, 0x3b36fc
  03b36a8  lwz 4, 0(4)
  03b36ac  extsh 6, 3
  03b36b0  addic 4, 4, -1
  03b36b4  cmpw 6, 4
  03b36b8  bf 2, 0x3b3794
  03b36bc  stw 5, 704(30)
  03b36c0  addic 3, 30, 608
  03b36c4  fmr 1, 29
  03b36c8  ori 4, 5, 0
  03b36cc  bl 0x1367d0
  03b36d0  nop
  03b36d4  extsh 4, 3
  03b36d8  li 5, 5
  03b36dc  lwz 6, 704(30)
  03b36e0  sth 3, 756(30)
  03b36e4  ori 3, 6, 0
  03b36e8  li 6, 1
  03b36ec  bl 0x10cd94
  03b36f0  nop
  03b36f4  sth 3, 756(30)
  03b36f8  b 0x3b3794
  03b36fc  extsh 5, 3
  03b3700  sldi 5, 5, 4
  03b3704  addc 4, 4, 5
  03b3708  lis 5, 16672
  03b370c  clrldi 4, 4, 32
  03b3710  lwz 4, 28(4)
  03b3714  srawi 6, 4, 31
  03b3718  srwi 7, 6, 1
  03b371c  xor 4, 7, 4
  03b3720  subc 4, 4, 6
  03b3724  cmpw 4, 5
  03b3728  bf 1, 0x3b3794
  03b372c  li 3, 100
  03b3730  bl 0xfc620
  03b3734  nop
  03b3738  ori 4, 3, 0
  03b373c  lhz 3, 756(30)
  03b3740  cmpwi 4, 30
  03b3744  bf 1, 0x3b3794
  03b3748  extsh 3, 3
  03b374c  lwz 4, 704(30)
  03b3750  sldi 3, 3, 4
  03b3754  addc 3, 4, 3
  03b3758  clrldi 3, 3, 32
  03b375c  lfs 1, 28(3)
  03b3760  bl 0x502758
  03b3764  nop
  03b3768  addic 3, 3, -11
  03b376c  sldi 3, 3, 2
  03b3770  addc 3, 30, 3
  03b3774  clrldi 4, 3, 32
  03b3778  li 3, 0
  03b377c  lwz 4, 660(4)
  03b3780  sth 3, 756(30)
  03b3784  slwi 4, 4, 2
  03b3788  extsw 4, 4
  03b378c  lwzx 4, 28, 4
  03b3790  stw 4, 704(30)
  03b3794  extsh 4, 3
  03b3798  sldi 6, 4, 4
  03b379c  lwz 4, 120(31)
  03b37a0  lfs 1, 16(31)
  03b37a4  lfs 2, 20(31)
  03b37a8  lwz 5, 704(4)
  03b37ac  addc 5, 5, 6
  03b37b0  clrldi 5, 5, 32
  03b37b4  lfs 3, 16(5)
  03b37b8  lfs 4, 20(5)
  03b37bc  fsubs 1, 3, 1
  03b37c0  fsubs 2, 4, 2
  03b37c4  fabs 3, 1
  03b37c8  fabs 4, 2
  03b37cc  stfs 1, 112(1)
  03b37d0  stfs 2, 116(1)
  03b37d4  fsubs 1, 3, 4
  03b37d8  stfs 1, 120(1)
  03b37dc  lwz 5, 112(1)
  03b37e0  lfs 1, 112(1)
  03b37e4  lwz 6, 116(1)
  03b37e8  lfs 2, 116(1)
  03b37ec  lwz 7, 120(1)
  03b37f0  rlwinm 6, 6, 3, 29, 29
  03b37f4  fabs 5, 2
  03b37f8  lfs 2, 120(1)
  03b37fc  fabs 1, 1
  03b3800  rlwimi 6, 7, 2, 30, 30
  03b3804  fsub 6, 2, 29
  03b3808  fsub 7, 2, 29
  03b380c  rlwimi 6, 5, 4, 28, 28
  03b3810  ori 5, 29, 0
  03b3814  rlwimi 5, 6, 2, 26, 28
  03b3818  slwi 6, 6, 2
  03b381c  clrldi 5, 5, 32
  03b3820  fsel 4, 6, 1, 4
  03b3824  lfsx 1, 29, 6
  03b3828  fsel 3, 7, 5, 3
  03b382c  lfs 2, 4(5)
  03b3830  fcmpu 0, 4, 29
  03b3834  bt 1, 0x3b3840
  03b3838  fmr 1, 29
  03b383c  b 0x3b3958
  03b3840  fsubs 5, 3, 4
  03b3844  fadds 3, 3, 4
  03b3848  addic 5, 1, 16
  03b384c  li 8, 2
  03b3850  addic 7, 5, 136
  03b3854  addic 6, 5, 120
  03b3858  mtctr 8
  03b385c  fdivs 3, 5, 3
  03b3860  fmuls 4, 3, 3
  03b3864  stfs 3, 136(27)
  03b3868  stfs 3, 140(27)
  03b386c  stfs 3, 144(27)
  03b3870  stfs 3, 148(27)
  03b3874  lfs 3, 148(1)
  03b3878  lfs 5, 140(1)
  03b387c  lfs 7, 144(1)
  03b3880  fmuls 6, 4, 4
  03b3884  fmuls 5, 5, 4
  03b3888  fmuls 8, 3, 6
  03b388c  fmuls 7, 7, 6
  03b3890  fmuls 3, 6, 6
  03b3894  stfs 5, 140(1)
  03b3898  fmuls 4, 8, 4
  03b389c  stfs 7, 144(1)
  03b38a0  stfs 4, 148(1)
  03b38a4  lfs 4, 120(5)
  03b38a8  fmuls 4, 4, 3
  03b38ac  stfs 4, 136(5)
  03b38b0  lfs 4, 4(6)
  03b38b4  addic 6, 6, 8
  03b38b8  fmuls 4, 4, 3
  03b38bc  addic 5, 5, 8
  03b38c0  stfs 4, 4(7)
  03b38c4  addic 7, 7, 8
  03b38c8  bdnz 0x3b38a4
  03b38cc  li 7, 4
  03b38d0  ori 5, 1, 0
  03b38d4  mtctr 7
  03b38d8  lis 6, 115
  03b38dc  addic 7, 5, 136
  03b38e0  addic 6, 6, 22752
  03b38e4  ori 9, 7, 0
  03b38e8  lfs 3, 136(5)
  03b38ec  lfs 4, 0(6)
  03b38f0  fmuls 3, 3, 4
  03b38f4  lfs 4, 4(6)
  03b38f8  addic 6, 6, 8
  03b38fc  stfs 3, 136(5)
  03b3900  lfs 3, 4(7)
  03b3904  addic 5, 5, 8
  03b3908  fmuls 3, 3, 4
  03b390c  stfs 3, 4(7)
  03b3910  addic 7, 7, 8
  03b3914  bdnz 0x3b38e8
  03b3918  ori 5, 1, 0
  03b391c  fmr 3, 29
  03b3920  mtctr 8
  03b3924  lfs 4, 136(5)
  03b3928  fadds 3, 3, 4
  03b392c  lfs 4, 4(9)
  03b3930  addic 5, 5, 16
  03b3934  lfs 5, 8(9)
  03b3938  lfs 6, 12(9)
  03b393c  addic 9, 9, 16
  03b3940  fadds 3, 3, 4
  03b3944  fadds 3, 3, 5
  03b3948  fadds 3, 3, 6
  03b394c  bdnz 0x3b3924
  03b3950  fadds 3, 3, 31
  03b3954  fmadds 1, 3, 1, 2
  03b3958  b 0x3b35e0
  03b395c  ld 0, 288(1)
  03b3960  mtlr 0
  03b3964  lfd 29, 248(1)
  03b3968  lfd 30, 256(1)
  03b396c  lfd 31, 264(1)
  03b3970  ld 27, 208(1)
  03b3974  ld 28, 216(1)
  03b3978  ld 29, 224(1)
  03b397c  ld 30, 232(1)
  03b3980  ld 31, 240(1)
  03b3984  addi 1, 1, 272
  03b3988  blr

M556_003b39b0:   # 0x3b39b0, 0x4c0 bytes
  03b39b0  stdu 1, -400(1)
  03b39b4  mflr 0
  03b39b8  std 0, 416(1)
  03b39bc  stfd 24, 336(1)
  03b39c0  stfd 25, 344(1)
  03b39c4  stfd 26, 352(1)
  03b39c8  stfd 27, 360(1)
  03b39cc  stfd 28, 368(1)
  03b39d0  stfd 29, 376(1)
  03b39d4  stfd 30, 384(1)
  03b39d8  stfd 31, 392(1)
  03b39dc  addi 0, 1, 272
  03b39e0  stvx 30, 0, 0
  03b39e4  addic 0, 0, 16
  03b39e8  stvx 31, 0, 0
  03b39ec  lis 4, 59
  03b39f0  lis 5, 114
  03b39f4  std 30, 320(1)
  03b39f8  addi 4, 4, 14732
  03b39fc  lis 30, 151
  03b3a00  addic 30, 30, -25376
  03b3a04  lfs 1, 0(4)
  03b3a08  std 31, 328(1)
  03b3a0c  lfs 2, -3056(5)
  03b3a10  lwz 31, 120(3)
  03b3a14  fmuls 1, 2, 1
  03b3a18  lwz 3, 2196(30)
  03b3a1c  fctiwz 1, 1
  03b3a20  stfd 1, 248(1)
  03b3a24  lwz 4, 252(1)
  03b3a28  std 29, 312(1)
  03b3a2c  cmpw 3, 4
  03b3a30  bt 0, 0x3b3e24
  03b3a34  addic 3, 31, 732
  03b3a38  bl 0x4fff60
  03b3a3c  nop
  03b3a40  cmpwi 3, 0
  03b3a44  bt 2, 0x3b3e24
  03b3a48  lwz 30, 2156(30)
  03b3a4c  cmpwi 30, 0
  03b3a50  bt 2, 0x3b3e24
  03b3a54  lwz 30, 120(30)
  03b3a58  lwz 3, 68(30)
  03b3a5c  cmpwi 3, -1
  03b3a60  bt 2, 0x3b3c40
  03b3a64  extsw 4, 3
  03b3a68  addic 3, 1, 240
  03b3a6c  li 5, 0
  03b3a70  li 6, 0
  03b3a74  bl 0x104800
  03b3a78  nop
  03b3a7c  lwz 3, 240(1)
  03b3a80  cmpwi 3, 0
  03b3a84  bt 2, 0x3b3c40
  03b3a88  lis 4, 59
  03b3a8c  li 5, 20
  03b3a90  addi 4, 4, 14732
  03b3a94  li 6, 24
  03b3a98  lfs 25, 4(4)
  03b3a9c  lfs 26, 8(4)
  03b3aa0  lfs 27, 12(4)
  03b3aa4  lfs 28, 16(4)
  03b3aa8  lvlx 30, 5, 4
  03b3aac  lvlx 31, 6, 4
  03b3ab0  vspltw 30, 30, 0
  03b3ab4  vspltw 31, 31, 0
  03b3ab8  lhz 4, 166(3)
  03b3abc  cmpwi 4, 1139
  03b3ac0  bf 2, 0x3b3c1c
  03b3ac4  lfs 30, 612(31)
  03b3ac8  lfs 1, 20(3)
  03b3acc  lfs 29, 608(31)
  03b3ad0  fsubs 30, 1, 30
  03b3ad4  lfs 1, 616(31)
  03b3ad8  lfs 2, 16(3)
  03b3adc  fadds 31, 1, 25
  03b3ae0  fsubs 29, 2, 29
  03b3ae4  lfs 1, 24(3)
  03b3ae8  fmuls 2, 30, 30
  03b3aec  fsubs 31, 1, 31
  03b3af0  lfs 24, 28(3)
  03b3af4  fmadds 1, 29, 29, 2
  03b3af8  fmadds 1, 31, 31, 1
  03b3afc  fsqrts 1, 1
  03b3b00  fcmpu 0, 1, 26
  03b3b04  bt 1, 0x3b3c1c
  03b3b08  addic 29, 1, 112
  03b3b0c  ori 3, 29, 0
  03b3b10  bl 0x500af8
  03b3b14  nop
  03b3b18  lwz 4, 240(1)
  03b3b1c  ori 3, 29, 0
  03b3b20  addic 4, 4, 192
  03b3b24  bl 0x5010c0
  03b3b28  nop
  03b3b2c  lfs 1, 128(1)
  03b3b30  lfs 2, 112(1)
  03b3b34  fmuls 1, 1, 30
  03b3b38  lfs 3, 144(1)
  03b3b3c  lfs 4, 160(1)
  03b3b40  lfs 5, 132(1)
  03b3b44  lfs 6, 136(1)
  03b3b48  fmuls 5, 5, 30
  03b3b4c  fmuls 6, 6, 30
  03b3b50  fmadds 1, 2, 29, 1
  03b3b54  lfs 2, 116(1)
  03b3b58  lfs 7, 120(1)
  03b3b5c  lfs 8, 148(1)
  03b3b60  fmadds 5, 2, 29, 5
  03b3b64  fmadds 6, 7, 29, 6
  03b3b68  lfs 2, 164(1)
  03b3b6c  lfs 7, 152(1)
  03b3b70  lfs 29, 168(1)
  03b3b74  fmadds 1, 3, 31, 1
  03b3b78  fmadds 3, 8, 31, 5
  03b3b7c  fmadds 4, 4, 24, 1
  03b3b80  fmadds 1, 7, 31, 6
  03b3b84  fabs 4, 4
  03b3b88  fcmpu 0, 4, 27
  03b3b8c  cror 6, 1, 2
  03b3b90  bt 6, 0x3b3c1c
  03b3b94  fmadds 2, 2, 24, 3
  03b3b98  fabs 2, 2
  03b3b9c  fcmpu 0, 2, 28
  03b3ba0  cror 6, 1, 2
  03b3ba4  bt 6, 0x3b3c1c
  03b3ba8  fmadds 1, 29, 24, 1
  03b3bac  fabs 1, 1
  03b3bb0  fcmpu 0, 1, 28
  03b3bb4  cror 6, 1, 2
  03b3bb8  bt 6, 0x3b3c1c
  03b3bbc  vspltisw 2, -1
  03b3bc0  lis 3, 114
  03b3bc4  li 4, -3056
  03b3bc8  vspltisw 3, -1
  03b3bcc  li 5, 758
  03b3bd0  vspltisw 6, -16
  03b3bd4  vslw 2, 2, 2
  03b3bd8  addi 6, 5, 16
  03b3bdc  vslw 3, 3, 3
  03b3be0  lvlx 4, 4, 3
  03b3be4  lvlx 5, 5, 31
  03b3be8  vmaddfp 2, 4, 30, 2
  03b3bec  vmaddfp 3, 4, 31, 3
  03b3bf0  li 3, 732
  03b3bf4  lvrx 4, 6, 31
  03b3bf8  vor 4, 5, 4
  03b3bfc  vsrw 4, 4, 6
  03b3c00  vctsxs 2, 2, 0
  03b3c04  vctsxs 3, 3, 0
  03b3c08  vadduwm 2, 4, 2
  03b3c0c  vspltw 3, 3, 0
  03b3c10  vsplth 2, 2, 1
  03b3c14  stvehx 2, 5, 31
  03b3c18  stvewx 3, 3, 31
  03b3c1c  addic 3, 1, 240
  03b3c20  lwz 4, 240(1)
  03b3c24  li 5, 0
  03b3c28  li 6, 0
  03b3c2c  bl 0x10466c
  03b3c30  nop
  03b3c34  lwz 3, 240(1)
  03b3c38  cmpwi 3, 0
  03b3c3c  bf 2, 0x3b3ab8
  03b3c40  lwz 30, 72(30)
  03b3c44  cmpwi 30, -1
  03b3c48  bt 2, 0x3b3e24
  03b3c4c  extsw 4, 30
  03b3c50  addic 3, 1, 244
  03b3c54  li 5, 0
  03b3c58  li 6, 0
  03b3c5c  bl 0x104800
  03b3c60  nop
  03b3c64  lwz 30, 244(1)
  03b3c68  cmpwi 30, 0
  03b3c6c  bt 2, 0x3b3e24
  03b3c70  lis 3, 59
  03b3c74  li 4, 20
  03b3c78  addi 3, 3, 14732
  03b3c7c  li 5, 24
  03b3c80  lfs 25, 8(3)
  03b3c84  lfs 26, 28(3)
  03b3c88  lfs 27, 32(3)
  03b3c8c  lfs 28, 12(3)
  03b3c90  lvlx 30, 4, 3
  03b3c94  lvlx 31, 5, 3
  03b3c98  vspltw 30, 30, 0
  03b3c9c  vspltw 31, 31, 0
  03b3ca0  lhz 3, 166(30)
  03b3ca4  cmpwi 3, 1140
  03b3ca8  bf 2, 0x3b3e00
  03b3cac  lfs 30, 20(30)
  03b3cb0  lfs 1, 612(31)
  03b3cb4  lfs 29, 16(30)
  03b3cb8  fsubs 30, 30, 1
  03b3cbc  lfs 1, 608(31)
  03b3cc0  lfs 31, 24(30)
  03b3cc4  fsubs 29, 29, 1
  03b3cc8  lfs 1, 616(31)
  03b3ccc  fsubs 31, 31, 1
  03b3cd0  fmuls 1, 30, 30
  03b3cd4  lfs 24, 28(30)
  03b3cd8  fmadds 1, 29, 29, 1
  03b3cdc  fmadds 1, 31, 31, 1
  03b3ce0  fsqrts 1, 1
  03b3ce4  fcmpu 0, 1, 25
  03b3ce8  bt 1, 0x3b3e00
  03b3cec  addic 30, 1, 176
  03b3cf0  ori 3, 30, 0
  03b3cf4  bl 0x500af8
  03b3cf8  nop
  03b3cfc  lwz 4, 244(1)
  03b3d00  ori 3, 30, 0
  03b3d04  addic 4, 4, 192
  03b3d08  bl 0x5010c0
  03b3d0c  nop
  03b3d10  lfs 1, 192(1)
  03b3d14  lfs 2, 176(1)
  03b3d18  fmuls 1, 1, 30
  03b3d1c  lfs 3, 208(1)
  03b3d20  lfs 4, 224(1)
  03b3d24  lfs 5, 196(1)
  03b3d28  lfs 6, 200(1)
  03b3d2c  fmuls 5, 5, 30
  03b3d30  lfs 7, 180(1)
  03b3d34  fmuls 6, 6, 30
  03b3d38  lfs 8, 184(1)
  03b3d3c  lfs 9, 212(1)
  03b3d40  fmadds 1, 2, 29, 1
  03b3d44  lfs 2, 228(1)
  03b3d48  fmadds 1, 3, 31, 1
  03b3d4c  fmadds 3, 7, 29, 5
  03b3d50  fmadds 5, 8, 29, 6
  03b3d54  lfs 6, 216(1)
  03b3d58  lfs 29, 232(1)
  03b3d5c  fmadds 4, 4, 24, 1
  03b3d60  fmadds 3, 9, 31, 3
  03b3d64  fmadds 1, 6, 31, 5
  03b3d68  fabs 4, 4
  03b3d6c  fcmpu 0, 4, 26
  03b3d70  cror 6, 1, 2
  03b3d74  bt 6, 0x3b3e00
  03b3d78  fmadds 2, 2, 24, 3
  03b3d7c  fabs 2, 2
  03b3d80  fcmpu 0, 2, 27
  03b3d84  cror 6, 1, 2
  03b3d88  bt 6, 0x3b3e00
  03b3d8c  fmadds 1, 29, 24, 1
  03b3d90  fabs 1, 1
  03b3d94  fcmpu 0, 1, 28
  03b3d98  cror 6, 1, 2
  03b3d9c  bt 6, 0x3b3e00
  03b3da0  vspltisw 2, -1
  03b3da4  lis 3, 114
  03b3da8  vspltisw 3, -1
  03b3dac  li 4, -3056
  03b3db0  li 5, 758
  03b3db4  vslw 2, 2, 2
  03b3db8  vslw 3, 3, 3
  03b3dbc  lvlx 4, 4, 3
  03b3dc0  addi 3, 5, 16
  03b3dc4  vmaddfp 2, 4, 30, 2
  03b3dc8  vmaddfp 3, 4, 31, 3
  03b3dcc  lvlx 5, 5, 31
  03b3dd0  vspltisw 4, -16
  03b3dd4  lvrx 6, 3, 31
  03b3dd8  li 3, 732
  03b3ddc  vor 5, 5, 6
  03b3de0  vsrw 4, 5, 4
  03b3de4  vctsxs 2, 2, 0
  03b3de8  vctsxs 3, 3, 0
  03b3dec  vadduwm 2, 4, 2
  03b3df0  vspltw 3, 3, 0
  03b3df4  vsplth 2, 2, 1
  03b3df8  stvehx 2, 5, 31
  03b3dfc  stvewx 3, 3, 31
  03b3e00  lwz 4, 244(1)
  03b3e04  addic 3, 1, 244
  03b3e08  li 5, 0
  03b3e0c  li 6, 0
  03b3e10  bl 0x10466c
  03b3e14  nop
  03b3e18  lwz 30, 244(1)
  03b3e1c  cmpwi 30, 0
  03b3e20  bf 2, 0x3b3ca0
  03b3e24  li 0, 272
  03b3e28  lvx 30, 1, 0
  03b3e2c  addic 0, 0, 16
  03b3e30  lvx 31, 1, 0
  03b3e34  ld 0, 416(1)
  03b3e38  mtlr 0
  03b3e3c  lfd 24, 336(1)
  03b3e40  lfd 25, 344(1)
  03b3e44  lfd 26, 352(1)
  03b3e48  lfd 27, 360(1)
  03b3e4c  lfd 28, 368(1)
  03b3e50  lfd 29, 376(1)
  03b3e54  lfd 30, 384(1)
  03b3e58  lfd 31, 392(1)
  03b3e5c  ld 29, 312(1)
  03b3e60  ld 30, 320(1)
  03b3e64  ld 31, 328(1)
  03b3e68  addi 1, 1, 400
  03b3e6c  blr

M556_003b3e70:   # 0x3b3e70, 0xf4 bytes
  03b3e70  stdu 1, -128(1)
  03b3e74  mflr 0
  03b3e78  std 0, 144(1)
  03b3e7c  std 31, 120(1)
  03b3e80  lwz 31, 120(3)
  03b3e84  lwz 3, 712(31)
  03b3e88  cmpwi 3, 0
  03b3e8c  bt 1, 0x3b3f50
  03b3e90  lhz 4, 756(31)
  03b3e94  lwz 5, 704(31)
  03b3e98  lis 6, 16256
  03b3e9c  extsh 4, 4
  03b3ea0  sldi 3, 4, 4
  03b3ea4  addc 3, 5, 3
  03b3ea8  clrldi 3, 3, 32
  03b3eac  lwz 3, 28(3)
  03b3eb0  cmpw 3, 6
  03b3eb4  bf 2, 0x3b3f50
  03b3eb8  ori 6, 3, 0
  03b3ebc  lis 7, 16384
  03b3ec0  ori 3, 5, 0
  03b3ec4  cmpw 6, 7
  03b3ec8  ori 6, 4, 0
  03b3ecc  bt 2, 0x3b3f14
  03b3ed0  ori 6, 4, 0
  03b3ed4  ori 3, 5, 0
  03b3ed8  ori 4, 6, 0
  03b3edc  li 6, 1
  03b3ee0  li 5, 1
  03b3ee4  bl 0x10cd94
  03b3ee8  nop
  03b3eec  ori 6, 3, 0
  03b3ef0  lwz 3, 704(31)
  03b3ef4  sldi 4, 6, 4
  03b3ef8  ori 5, 3, 0
  03b3efc  lis 7, 16384
  03b3f00  addc 4, 5, 4
  03b3f04  clrldi 4, 4, 32
  03b3f08  lwz 4, 28(4)
  03b3f0c  cmpw 4, 7
  03b3f10  bf 2, 0x3b3ed4
  03b3f14  extsh 4, 6
  03b3f18  sth 6, 752(31)
  03b3f1c  sldi 4, 4, 4
  03b3f20  addc 3, 3, 4
  03b3f24  li 4, 1
  03b3f28  clrldi 3, 3, 32
  03b3f2c  lfs 1, 16(3)
  03b3f30  stfs 1, 624(31)
  03b3f34  lfs 1, 20(3)
  03b3f38  stfs 1, 628(31)
  03b3f3c  lfs 1, 24(3)
  03b3f40  stfs 1, 632(31)
  03b3f44  lfs 1, 28(3)
  03b3f48  stw 4, 740(31)
  03b3f4c  stfs 1, 636(31)
  03b3f50  ld 0, 144(1)
  03b3f54  mtlr 0
  03b3f58  ld 31, 120(1)
  03b3f5c  addi 1, 1, 128
  03b3f60  blr

M556_003b3f64:   # 0x3b3f64, 0x24 bytes
  03b3f64  stdu 1, -112(1)
  03b3f68  mflr 0
  03b3f6c  std 0, 128(1)
  03b3f70  bl 0xfddc0
  03b3f74  nop
  03b3f78  ld 0, 128(1)
  03b3f7c  mtlr 0
  03b3f80  addi 1, 1, 112
  03b3f84  blr

M556_003b3fd0:   # 0x3b3fd0, 0x698 bytes
  03b3fd0  stdu 1, -256(1)
  03b3fd4  mflr 0
  03b3fd8  std 0, 272(1)
  03b3fdc  stfd 27, 216(1)
  03b3fe0  stfd 28, 224(1)
  03b3fe4  stfd 29, 232(1)
  03b3fe8  stfd 30, 240(1)
  03b3fec  stfd 31, 248(1)
  03b3ff0  std 30, 200(1)
  03b3ff4  lis 4, 59
  03b3ff8  std 31, 208(1)
  03b3ffc  lwz 30, 120(3)
  03b4000  ori 31, 3, 0
  03b4004  addi 4, 4, 16264
  03b4008  lfs 31, 0(4)
  03b400c  lwz 3, 740(30)
  03b4010  fmr 28, 31
  03b4014  std 29, 192(1)
  03b4018  cmpwi 3, 0
  03b401c  bf 2, 0x3b4230
  03b4020  lwz 3, 704(30)
  03b4024  li 5, 1
  03b4028  lhz 4, 756(30)
  03b402c  li 6, 1
  03b4030  extsh 4, 4
  03b4034  bl 0x10cd94
  03b4038  nop
  03b403c  lhz 4, 756(30)
  03b4040  sldi 3, 3, 4
  03b4044  lwz 5, 704(30)
  03b4048  extsh 4, 4
  03b404c  addc 3, 5, 3
  03b4050  sldi 4, 4, 4
  03b4054  clrldi 3, 3, 32
  03b4058  addc 4, 5, 4
  03b405c  clrldi 4, 4, 32
  03b4060  lfs 1, 20(3)
  03b4064  lfs 2, 16(3)
  03b4068  lfs 3, 20(4)
  03b406c  lfs 4, 16(4)
  03b4070  fsubs 1, 3, 1
  03b4074  fsubs 2, 4, 2
  03b4078  fmuls 1, 1, 1
  03b407c  fmadds 1, 2, 2, 1
  03b4080  lfs 2, 24(3)
  03b4084  lfs 3, 24(4)
  03b4088  fsubs 2, 2, 3
  03b408c  lis 3, 115
  03b4090  fsqrts 1, 1
  03b4094  addic 3, 3, 22784
  03b4098  stfs 2, 124(1)
  03b409c  fabs 4, 2
  03b40a0  fabs 3, 1
  03b40a4  stfs 1, 120(1)
  03b40a8  lwz 4, 124(1)
  03b40ac  rlwinm 4, 4, 3, 29, 29
  03b40b0  fsubs 1, 3, 4
  03b40b4  stfs 1, 128(1)
  03b40b8  lwz 5, 120(1)
  03b40bc  lfs 1, 120(1)
  03b40c0  lfs 2, 124(1)
  03b40c4  lwz 6, 128(1)
  03b40c8  lfs 5, 128(1)
  03b40cc  fabs 1, 1
  03b40d0  rlwimi 4, 6, 2, 30, 30
  03b40d4  fabs 2, 2
  03b40d8  fsub 6, 5, 31
  03b40dc  fsub 5, 5, 31
  03b40e0  rlwimi 4, 5, 4, 28, 28
  03b40e4  ori 5, 3, 0
  03b40e8  rlwimi 5, 4, 2, 26, 28
  03b40ec  slwi 4, 4, 2
  03b40f0  clrldi 5, 5, 32
  03b40f4  fsel 4, 6, 1, 4
  03b40f8  lfsx 1, 3, 4
  03b40fc  fsel 3, 5, 2, 3
  03b4100  lfs 2, 4(5)
  03b4104  fcmpu 0, 4, 31
  03b4108  bt 1, 0x3b4110
  03b410c  b 0x3b4230
  03b4110  fsubs 5, 3, 4
  03b4114  fadds 3, 3, 4
  03b4118  addic 3, 1, 16
  03b411c  li 6, 2
  03b4120  addic 4, 3, 116
  03b4124  addic 5, 3, 132
  03b4128  mtctr 6
  03b412c  fdivs 3, 5, 3
  03b4130  fmuls 4, 3, 3
  03b4134  stfs 3, 144(1)
  03b4138  stfs 3, 136(1)
  03b413c  stfs 3, 140(1)
  03b4140  stfs 3, 132(1)
  03b4144  lfs 6, 144(1)
  03b4148  lfs 7, 136(1)
  03b414c  lfs 8, 140(1)
  03b4150  fmuls 5, 4, 4
  03b4154  fmuls 7, 7, 4
  03b4158  fmuls 6, 6, 5
  03b415c  fmuls 3, 5, 5
  03b4160  fmuls 5, 8, 5
  03b4164  stfs 7, 136(1)
  03b4168  fmuls 4, 6, 4
  03b416c  stfs 5, 140(1)
  03b4170  stfs 4, 144(1)
  03b4174  lfs 4, 116(3)
  03b4178  fmuls 4, 4, 3
  03b417c  stfs 4, 132(3)
  03b4180  lfs 4, 4(4)
  03b4184  addic 3, 3, 8
  03b4188  addic 4, 4, 8
  03b418c  fmuls 4, 4, 3
  03b4190  stfs 4, 4(5)
  03b4194  addic 5, 5, 8
  03b4198  bdnz 0x3b4174
  03b419c  ori 3, 1, 0
  03b41a0  lis 4, 115
  03b41a4  li 8, 4
  03b41a8  addic 5, 3, 132
  03b41ac  addic 4, 4, 22752
  03b41b0  ori 7, 5, 0
  03b41b4  mtctr 8
  03b41b8  lfs 3, 132(3)
  03b41bc  lfs 4, 0(4)
  03b41c0  fmuls 3, 3, 4
  03b41c4  lfs 4, 4(4)
  03b41c8  addic 4, 4, 8
  03b41cc  stfs 3, 132(3)
  03b41d0  lfs 3, 4(5)
  03b41d4  addic 3, 3, 8
  03b41d8  fmuls 3, 3, 4
  03b41dc  stfs 3, 4(5)
  03b41e0  addic 5, 5, 8
  03b41e4  bdnz 0x3b41b8
  03b41e8  ori 3, 1, 0
  03b41ec  mtctr 6
  03b41f0  lfs 3, 132(3)
  03b41f4  lfs 4, 4(7)
  03b41f8  fadds 3, 31, 3
  03b41fc  lfs 5, 8(7)
  03b4200  lfs 31, 12(7)
  03b4204  addic 3, 3, 16
  03b4208  addic 7, 7, 16
  03b420c  fadds 3, 3, 4
  03b4210  fadds 3, 3, 5
  03b4214  fadds 31, 3, 31
  03b4218  bdnz 0x3b41f0
  03b421c  lis 3, 59
  03b4220  addi 3, 3, 16264
  03b4224  lfs 3, 4(3)
  03b4228  fadds 31, 31, 3
  03b422c  fmadds 31, 31, 1, 2
  03b4230  lis 3, 59
  03b4234  lis 6, 114
  03b4238  fmr 1, 31
  03b423c  addi 4, 3, 16264
  03b4240  lis 7, 114
  03b4244  addic 3, 31, 68
  03b4248  addic 5, 30, 760
  03b424c  li 9, 0
  03b4250  lfs 2, 8(4)
  03b4254  lfs 30, 12(4)
  03b4258  lfs 4, 16(4)
  03b425c  lfs 3, -3060(6)
  03b4260  lfs 5, -3052(7)
  03b4264  fmuls 2, 3, 2
  03b4268  fmuls 3, 3, 30
  03b426c  fmuls 4, 5, 4
  03b4270  bl 0x10a050
  03b4274  nop
  03b4278  lwz 3, 740(30)
  03b427c  cmpwi 3, 0
  03b4280  bt 2, 0x3b45d8
  03b4284  lbz 4, 83(31)
  03b4288  cmpwi 4, 5
  03b428c  bt 2, 0x3b42f8
  03b4290  lis 4, 59
  03b4294  lis 5, 114
  03b4298  addi 4, 4, 16264
  03b429c  lfs 2, 20(4)
  03b42a0  lfs 1, -3056(5)
  03b42a4  fmuls 2, 1, 2
  03b42a8  fctiwz 2, 2
  03b42ac  stfd 2, 168(1)
  03b42b0  lwz 4, 172(1)
  03b42b4  cmpw 3, 4
  03b42b8  bf 0, 0x3b42f8
  03b42bc  lis 3, 59
  03b42c0  addi 3, 3, 16264
  03b42c4  li 4, 5
  03b42c8  li 5, 4
  03b42cc  lfs 2, 24(3)
  03b42d0  ori 3, 31, 0
  03b42d4  fmuls 1, 1, 2
  03b42d8  fctiwz 1, 1
  03b42dc  stfd 1, 168(1)
  03b42e0  lwz 6, 172(1)
  03b42e4  extsw 6, 6
  03b42e8  bl 0xfddc0
  03b42ec  nop
  03b42f0  li 3, -1
  03b42f4  sth 3, 766(30)
  03b42f8  lis 3, 59
  03b42fc  addic 6, 1, 112
  03b4300  addi 29, 3, 16264
  03b4304  lis 3, 114
  03b4308  addic 7, 1, 116
  03b430c  lfs 1, 28(29)
  03b4310  lfs 2, -3048(3)
  03b4314  lfs 4, 32(29)
  03b4318  fmuls 1, 2, 1
  03b431c  lfs 5, 712(30)
  03b4320  lfs 3, 616(30)
  03b4324  lfs 6, 632(30)
  03b4328  fsubs 3, 3, 6
  03b432c  fmuls 1, 1, 4
  03b4330  fsubs 2, 5, 1
  03b4334  bl 0xfcb40
  03b4338  nop
  03b433c  lfs 31, 36(29)
  03b4340  cmpwi 3, 1
  03b4344  fmr 27, 31
  03b4348  bt 0, 0x3b4388
  03b434c  lwz 3, 112(1)
  03b4350  lfs 1, 112(1)
  03b4354  srawi 4, 3, 31
  03b4358  srwi 5, 4, 1
  03b435c  xor 3, 5, 3
  03b4360  subc 3, 3, 4
  03b4364  cmpwi 3, 0
  03b4368  bf 1, 0x3b4388
  03b436c  bl 0x502758
  03b4370  nop
  03b4374  extsw 3, 3
  03b4378  std 3, 168(1)
  03b437c  lfd 1, 168(1)
  03b4380  fcfid 31, 1
  03b4384  frsp 31, 31
  03b4388  lis 3, 59
  03b438c  lis 4, 114
  03b4390  addi 3, 3, 16264
  03b4394  lfs 29, 40(3)
  03b4398  lfs 1, -3056(4)
  03b439c  lwz 3, 740(30)
  03b43a0  fmuls 2, 1, 29
  03b43a4  fctiwz 2, 2
  03b43a8  stfd 2, 168(1)
  03b43ac  lwz 4, 172(1)
  03b43b0  cmpw 3, 4
  03b43b4  bf 1, 0x3b4458
  03b43b8  lis 4, 59
  03b43bc  addi 4, 4, 16264
  03b43c0  lfs 2, 44(4)
  03b43c4  fmuls 2, 1, 2
  03b43c8  fctiwz 2, 2
  03b43cc  stfd 2, 168(1)
  03b43d0  lwz 4, 172(1)
  03b43d4  cmpw 3, 4
  03b43d8  bf 0, 0x3b4458
  03b43dc  lbz 3, 83(31)
  03b43e0  cmpwi 3, 5
  03b43e4  bf 2, 0x3b4458
  03b43e8  lis 3, 59
  03b43ec  addi 3, 3, 16264
  03b43f0  lfs 2, 48(3)
  03b43f4  fmuls 1, 1, 2
  03b43f8  fctidz 1, 1
  03b43fc  fcfid 1, 1
  03b4400  frsp 1, 1
  03b4404  fcmpu 0, 31, 1
  03b4408  cror 6, 0, 2
  03b440c  bt 6, 0x3b4458
  03b4410  li 4, 3
  03b4414  li 3, 0
  03b4418  bl 0xfe484
  03b441c  nop
  03b4420  lis 4, 114
  03b4424  addic 3, 3, 1
  03b4428  li 5, 3
  03b442c  lfs 1, -3056(4)
  03b4430  sth 3, 766(30)
  03b4434  fmuls 1, 1, 29
  03b4438  extsh 4, 3
  03b443c  ori 3, 31, 0
  03b4440  fctiwz 1, 1
  03b4444  stfd 1, 168(1)
  03b4448  lwz 6, 172(1)
  03b444c  extsw 6, 6
  03b4450  bl 0xfddc0
  03b4454  nop
  03b4458  lhz 3, 766(30)
  03b445c  extsh 3, 3
  03b4460  cmpwi 3, -1
  03b4464  bt 2, 0x3b44dc
  03b4468  lbz 3, 82(31)
  03b446c  lbz 4, 83(31)
  03b4470  cmpw 3, 4
  03b4474  bf 2, 0x3b44dc
  03b4478  ori 3, 31, 0
  03b447c  bl 0xefe40
  03b4480  nop
  03b4484  lis 3, 59
  03b4488  addi 3, 3, 16264
  03b448c  lfs 2, 52(3)
  03b4490  fcmpu 0, 1, 2
  03b4494  cror 6, 0, 2
  03b4498  bt 6, 0x3b44dc
  03b449c  lis 3, 59
  03b44a0  fcmpu 1, 31, 28
  03b44a4  addi 3, 3, 16264
  03b44a8  lfs 2, 56(3)
  03b44ac  fcmpu 0, 1, 2
  03b44b0  crorc 2, 6, 0
  03b44b4  bt 2, 0x3b44dc
  03b44b8  fdivs 1, 27, 31
  03b44bc  lis 3, 59
  03b44c0  addi 3, 3, 16264
  03b44c4  lfs 2, 60(3)
  03b44c8  fsub 3, 2, 1
  03b44cc  fsel 1, 3, 1, 2
  03b44d0  fsub 2, 1, 30
  03b44d4  fsel 1, 2, 1, 30
  03b44d8  stfs 1, 88(31)
  03b44dc  lhz 3, 766(30)
  03b44e0  extsh 3, 3
  03b44e4  cmpwi 3, -1
  03b44e8  bt 2, 0x3b4590
  03b44ec  lis 3, 59
  03b44f0  lis 4, 114
  03b44f4  addi 3, 3, 16264
  03b44f8  lfs 1, 24(3)
  03b44fc  lfs 2, -3056(4)
  03b4500  fmuls 1, 2, 1
  03b4504  fmr 3, 1
  03b4508  fctidz 3, 3
  03b450c  fcfid 3, 3
  03b4510  frsp 3, 3
  03b4514  fcmpu 0, 31, 3
  03b4518  cror 6, 1, 2
  03b451c  bt 6, 0x3b4550
  03b4520  fctiwz 1, 1
  03b4524  ori 3, 31, 0
  03b4528  li 4, 5
  03b452c  li 5, 51
  03b4530  stfd 1, 168(1)
  03b4534  lwz 6, 172(1)
  03b4538  extsw 6, 6
  03b453c  bl 0xfddc0
  03b4540  nop
  03b4544  li 3, -1
  03b4548  sth 3, 766(30)
  03b454c  b 0x3b4590
  03b4550  lbz 3, 112(31)
  03b4554  rlwinm 3, 3, 0, 30, 30
  03b4558  cmpwi 3, 0
  03b455c  bt 2, 0x3b4590
  03b4560  fmuls 1, 2, 29
  03b4564  ori 3, 31, 0
  03b4568  li 4, 5
  03b456c  li 5, 28
  03b4570  fctiwz 1, 1
  03b4574  stfd 1, 168(1)
  03b4578  lwz 6, 172(1)
  03b457c  extsw 6, 6
  03b4580  bl 0xfddc0
  03b4584  nop
  03b4588  li 3, -1
  03b458c  sth 3, 766(30)
  03b4590  lbz 4, 82(31)
  03b4594  lbz 3, 83(31)
  03b4598  cmpw 4, 3
  03b459c  bf 2, 0x3b4638
  03b45a0  fcmpu 1, 31, 28
  03b45a4  cmpwi 3, 5
  03b45a8  crorc 2, 6, 2
  03b45ac  bt 2, 0x3b4638
  03b45b0  ori 3, 31, 0
  03b45b4  bl 0xefe40
  03b45b8  nop
  03b45bc  lis 3, 59
  03b45c0  addi 3, 3, 16264
  03b45c4  lfs 2, 64(3)
  03b45c8  fsubs 1, 2, 1
  03b45cc  fdivs 1, 1, 31
  03b45d0  stfs 1, 88(31)
  03b45d4  b 0x3b4638
  03b45d8  lis 3, 16256
  03b45dc  lbz 4, 112(31)
  03b45e0  stw 3, 88(31)
  03b45e4  rlwinm 3, 4, 0, 30, 30
  03b45e8  cmpwi 3, 0
  03b45ec  bt 2, 0x3b4638
  03b45f0  lbz 3, 83(31)
  03b45f4  cmpwi 3, 0
  03b45f8  bt 2, 0x3b4638
  03b45fc  lis 3, 59
  03b4600  lis 4, 114
  03b4604  addi 3, 3, 16264
  03b4608  li 5, 0
  03b460c  lfs 1, 68(3)
  03b4610  lfs 2, -3056(4)
  03b4614  ori 3, 31, 0
  03b4618  fmuls 1, 2, 1
  03b461c  li 4, 0
  03b4620  fctiwz 1, 1
  03b4624  stfd 1, 168(1)
  03b4628  lwz 6, 172(1)
  03b462c  extsw 6, 6
  03b4630  bl 0xfddc0
  03b4634  nop
  03b4638  ld 0, 272(1)
  03b463c  mtlr 0
  03b4640  lfd 27, 216(1)
  03b4644  lfd 28, 224(1)
  03b4648  lfd 29, 232(1)
  03b464c  lfd 30, 240(1)
  03b4650  lfd 31, 248(1)
  03b4654  ld 29, 192(1)
  03b4658  ld 30, 200(1)
  03b465c  ld 31, 208(1)
  03b4660  addi 1, 1, 256
  03b4664  blr

UpdateMoby_556:   # 0x3b4740, 0x15a0 bytes
  03b4740  stdu 1, -608(1)
  03b4744  mflr 0
  03b4748  std 0, 624(1)
  03b474c  stfd 20, 512(1)
  03b4750  stfd 21, 520(1)
  03b4754  stfd 22, 528(1)
  03b4758  stfd 23, 536(1)
  03b475c  stfd 24, 544(1)
  03b4760  stfd 25, 552(1)
  03b4764  stfd 26, 560(1)
  03b4768  stfd 27, 568(1)
  03b476c  stfd 28, 576(1)
  03b4770  stfd 29, 584(1)
  03b4774  stfd 30, 592(1)
  03b4778  stfd 31, 600(1)
  03b477c  std 31, 504(1)
  03b4780  ori 31, 3, 0
  03b4784  lis 4, 59
  03b4788  std 28, 480(1)
  03b478c  addi 3, 4, 18024
  03b4790  std 27, 472(1)
  03b4794  lwz 28, 120(31)
  03b4798  addic 27, 28, 480
  03b479c  lfs 31, 0(3)
  03b47a0  ori 3, 27, 0
  03b47a4  std 30, 496(1)
  03b47a8  std 29, 488(1)
  03b47ac  std 26, 464(1)
  03b47b0  std 25, 456(1)
  03b47b4  std 24, 448(1)
  03b47b8  fmr 1, 31
  03b47bc  bl 0x119ac0
  03b47c0  nop
  03b47c4  lbz 3, 32(31)
  03b47c8  cmpwi 3, 1
  03b47cc  bt 1, 0x3b47e4
  03b47d0  cmpwi 3, -1
  03b47d4  bf 1, 0x3b5c80
  03b47d8  cmpwi 3, 0
  03b47dc  bf 1, 0x3b47f8
  03b47e0  b 0x3b4b90
  03b47e4  cmpwi 3, 2
  03b47e8  bf 1, 0x3b4ee4
  03b47ec  cmpwi 3, 3
  03b47f0  bf 1, 0x3b4c64
  03b47f4  b 0x3b5c80
  03b47f8  li 3, 24
  03b47fc  lis 4, 165
  03b4800  addic 4, 4, 7136
  03b4804  stb 3, 48(31)
  03b4808  lwz 3, 688(28)
  03b480c  lhz 5, 52(31)
  03b4810  slwi 3, 3, 2
  03b4814  ori 5, 5, 65
  03b4818  extsw 3, 3
  03b481c  lwzx 3, 4, 3
  03b4820  sth 5, 52(31)
  03b4824  stw 3, 704(28)
  03b4828  lwz 4, 120(31)
  03b482c  li 5, 0
  03b4830  lwz 4, 704(4)
  03b4834  lfs 1, 20(4)
  03b4838  lfs 2, 16(4)
  03b483c  lfs 3, 24(4)
  03b4840  lfs 4, 28(4)
  03b4844  stfs 1, 20(31)
  03b4848  stfs 3, 24(31)
  03b484c  lis 4, 59
  03b4850  stfs 4, 28(31)
  03b4854  stfs 2, 16(31)
  03b4858  stfs 2, 608(28)
  03b485c  addi 4, 4, 18024
  03b4860  lfs 1, 20(31)
  03b4864  stfs 1, 612(28)
  03b4868  lfs 1, 24(31)
  03b486c  stfs 1, 616(28)
  03b4870  lfs 1, 28(31)
  03b4874  stfs 1, 620(28)
  03b4878  lfs 4, 4(4)
  03b487c  stw 5, 64(31)
  03b4880  stw 5, 68(31)
  03b4884  lfs 1, 32(3)
  03b4888  lfs 2, 16(3)
  03b488c  lfs 3, 36(3)
  03b4890  lfs 5, 20(3)
  03b4894  fsubs 1, 1, 2
  03b4898  fsubs 2, 3, 5
  03b489c  lis 3, 115
  03b48a0  addic 3, 3, 22784
  03b48a4  fabs 3, 1
  03b48a8  fabs 5, 2
  03b48ac  stfs 1, 312(1)
  03b48b0  stfs 2, 316(1)
  03b48b4  fsubs 1, 3, 5
  03b48b8  stfs 1, 320(1)
  03b48bc  lwz 4, 312(1)
  03b48c0  lfs 1, 312(1)
  03b48c4  lwz 5, 316(1)
  03b48c8  lfs 2, 316(1)
  03b48cc  fabs 1, 1
  03b48d0  lwz 6, 320(1)
  03b48d4  rlwinm 5, 5, 3, 29, 29
  03b48d8  fabs 6, 2
  03b48dc  lfs 2, 320(1)
  03b48e0  rlwimi 5, 6, 2, 30, 30
  03b48e4  fsub 7, 2, 4
  03b48e8  fsub 8, 2, 4
  03b48ec  rlwimi 5, 4, 4, 28, 28
  03b48f0  ori 4, 3, 0
  03b48f4  rlwimi 4, 5, 2, 26, 28
  03b48f8  slwi 5, 5, 2
  03b48fc  clrldi 4, 4, 32
  03b4900  fsel 5, 7, 1, 5
  03b4904  lfsx 1, 3, 5
  03b4908  lfs 2, 4(4)
  03b490c  fsel 3, 8, 6, 3
  03b4910  fcmpu 0, 5, 4
  03b4914  bt 1, 0x3b491c
  03b4918  b 0x3b4a3c
  03b491c  fsubs 6, 3, 5
  03b4920  fadds 3, 3, 5
  03b4924  addic 3, 1, 16
  03b4928  li 6, 2
  03b492c  addic 5, 3, 388
  03b4930  addic 4, 3, 372
  03b4934  mtctr 6
  03b4938  fdivs 3, 6, 3
  03b493c  fmuls 5, 3, 3
  03b4940  stfs 3, 400(1)
  03b4944  stfs 3, 392(1)
  03b4948  stfs 3, 396(1)
  03b494c  stfs 3, 388(1)
  03b4950  lfs 7, 400(1)
  03b4954  lfs 8, 392(1)
  03b4958  lfs 9, 396(1)
  03b495c  fmuls 6, 5, 5
  03b4960  fmuls 8, 8, 5
  03b4964  fmuls 7, 7, 6
  03b4968  fmuls 3, 6, 6
  03b496c  fmuls 6, 9, 6
  03b4970  stfs 8, 392(1)
  03b4974  fmuls 5, 7, 5
  03b4978  stfs 6, 396(1)
  03b497c  stfs 5, 400(1)
  03b4980  lfs 5, 372(3)
  03b4984  fmuls 5, 5, 3
  03b4988  stfs 5, 388(3)
  03b498c  lfs 5, 4(4)
  03b4990  addic 4, 4, 8
  03b4994  fmuls 5, 5, 3
  03b4998  addic 3, 3, 8
  03b499c  stfs 5, 4(5)
  03b49a0  addic 5, 5, 8
  03b49a4  bdnz 0x3b4980
  03b49a8  li 5, 4
  03b49ac  ori 3, 1, 0
  03b49b0  mtctr 5
  03b49b4  lis 4, 115
  03b49b8  addic 5, 3, 388
  03b49bc  addic 4, 4, 22752
  03b49c0  ori 7, 5, 0
  03b49c4  lfs 3, 388(3)
  03b49c8  lfs 5, 0(4)
  03b49cc  fmuls 3, 3, 5
  03b49d0  lfs 5, 4(4)
  03b49d4  addic 4, 4, 8
  03b49d8  stfs 3, 388(3)
  03b49dc  lfs 3, 4(5)
  03b49e0  addic 3, 3, 8
  03b49e4  fmuls 3, 3, 5
  03b49e8  stfs 3, 4(5)
  03b49ec  addic 5, 5, 8
  03b49f0  bdnz 0x3b49c4
  03b49f4  ori 3, 1, 0
  03b49f8  mtctr 6
  03b49fc  lfs 3, 388(3)
  03b4a00  fadds 3, 4, 3
  03b4a04  addic 3, 3, 16
  03b4a08  lfs 4, 4(7)
  03b4a0c  lfs 5, 8(7)
  03b4a10  lfs 6, 12(7)
  03b4a14  addic 7, 7, 16
  03b4a18  fadds 3, 3, 4
  03b4a1c  fadds 4, 3, 5
  03b4a20  fadds 4, 4, 6
  03b4a24  bdnz 0x3b49fc
  03b4a28  lis 3, 59
  03b4a2c  addi 3, 3, 18024
  03b4a30  lfs 3, 8(3)
  03b4a34  fadds 4, 4, 3
  03b4a38  fmadds 4, 4, 1, 2
  03b4a3c  li 3, 1
  03b4a40  li 5, 716
  03b4a44  stfs 4, 72(31)
  03b4a48  lis 4, 59
  03b4a4c  vspltisw 3, -1
  03b4a50  addi 6, 5, 16
  03b4a54  stb 3, 43(28)
  03b4a58  lis 7, 114
  03b4a5c  li 3, -3052
  03b4a60  addi 4, 4, 18024
  03b4a64  lvlx 2, 5, 28
  03b4a68  li 8, 16
  03b4a6c  lvrx 4, 6, 28
  03b4a70  vslw 3, 3, 3
  03b4a74  vor 2, 2, 4
  03b4a78  lvlx 5, 3, 7
  03b4a7c  vspltisw 4, -1
  03b4a80  lvlx 6, 8, 4
  03b4a84  li 3, 12
  03b4a88  vcfsx 2, 2, 0
  03b4a8c  vspltw 6, 6, 0
  03b4a90  vslw 4, 4, 4
  03b4a94  li 5, 20
  03b4a98  vmaddfp 3, 5, 6, 3
  03b4a9c  lvlx 6, 3, 4
  03b4aa0  li 3, 692
  03b4aa4  vspltw 6, 6, 0
  03b4aa8  lis 7, 151
  03b4aac  li 6, 696
  03b4ab0  addic 7, 7, -16064
  03b4ab4  vmaddfp 3, 3, 2, 4
  03b4ab8  vmaddfp 2, 5, 6, 3
  03b4abc  vspltw 4, 2, 0
  03b4ac0  stvewx 4, 3, 28
  03b4ac4  lvlx 4, 5, 4
  03b4ac8  vspltw 4, 4, 0
  03b4acc  vmaddfp 3, 5, 4, 3
  03b4ad0  vspltw 4, 3, 0
  03b4ad4  stvewx 4, 6, 28
  03b4ad8  lbz 3, 31(7)
  03b4adc  cmpwi 3, 0
  03b4ae0  bf 2, 0x3b4b70
  03b4ae4  lis 3, 161
  03b4ae8  li 4, 1356
  03b4aec  vspltisw 4, 5
  03b4af0  lis 5, 59
  03b4af4  vspltisw 9, -1
  03b4af8  li 6, 24
  03b4afc  lvlx 5, 4, 3
  03b4b00  addi 3, 5, 18024
  03b4b04  vsubuwm 4, 5, 4
  03b4b08  li 4, 28
  03b4b0c  vspltisw 5, 0
  03b4b10  li 5, 32
  03b4b14  vcfsx 4, 4, 0
  03b4b18  lvlx 6, 6, 3
  03b4b1c  lvlx 7, 4, 3
  03b4b20  vspltw 6, 6, 0
  03b4b24  vspltw 7, 7, 0
  03b4b28  lvlx 8, 5, 3
  03b4b2c  li 4, 696
  03b4b30  li 3, 692
  03b4b34  vspltw 8, 8, 0
  03b4b38  vcmpgtfp 5, 5, 4
  03b4b3c  vandc 4, 4, 5
  03b4b40  vslw 5, 9, 9
  03b4b44  vnmsubfp 4, 4, 6, 7
  03b4b48  vspltisw 6, -1
  03b4b4c  vslw 6, 6, 6
  03b4b50  vcmpgtfp 7, 8, 4
  03b4b54  vsel 4, 4, 8, 7
  03b4b58  vmaddfp 2, 2, 4, 5
  03b4b5c  vmaddfp 3, 3, 4, 6
  03b4b60  vspltw 2, 2, 0
  03b4b64  vspltw 3, 3, 0
  03b4b68  stvewx 2, 3, 28
  03b4b6c  stvewx 3, 4, 28
  03b4b70  bl 0xfcc68
  03b4b74  nop
  03b4b78  li 3, 0
  03b4b7c  stfs 1, 744(28)
  03b4b80  li 4, 1
  03b4b84  stb 3, 41(28)
  03b4b88  stb 4, 32(31)
  03b4b8c  b 0x3b5c80
  03b4b90  lis 3, 151
  03b4b94  addic 3, 3, -25376
  03b4b98  lwz 3, 8332(3)
  03b4b9c  cmpwi 3, 22
  03b4ba0  bf 2, 0x3b5c80
  03b4ba4  li 3, 255
  03b4ba8  lwz 8, 36(31)
  03b4bac  li 4, -66
  03b4bb0  lhz 9, 52(31)
  03b4bb4  lis 6, 59
  03b4bb8  li 5, 36
  03b4bbc  vspltisw 3, -1
  03b4bc0  stb 3, 48(31)
  03b4bc4  li 7, 0
  03b4bc8  and 3, 9, 4
  03b4bcc  addi 6, 6, 18024
  03b4bd0  lwz 4, 16(8)
  03b4bd4  vslw 3, 3, 3
  03b4bd8  stw 4, 148(31)
  03b4bdc  sth 3, 52(31)
  03b4be0  lis 4, 114
  03b4be4  sth 7, 756(28)
  03b4be8  li 3, -3056
  03b4bec  lvlx 2, 5, 6
  03b4bf0  vspltw 2, 2, 0
  03b4bf4  lvlx 4, 3, 4
  03b4bf8  lwz 4, 716(28)
  03b4bfc  li 3, 758
  03b4c00  vmaddfp 2, 4, 2, 3
  03b4c04  srawi 5, 4, 1
  03b4c08  addze 5, 5
  03b4c0c  sldi 5, 5, 1
  03b4c10  subc 4, 4, 5
  03b4c14  cmpwi 4, 1
  03b4c18  vctsxs 2, 2, 0
  03b4c1c  vsplth 2, 2, 1
  03b4c20  stvehx 2, 3, 28
  03b4c24  stw 7, 712(28)
  03b4c28  stw 7, 708(28)
  03b4c2c  stw 7, 740(28)
  03b4c30  stw 7, 732(28)
  03b4c34  stw 7, 700(28)
  03b4c38  bf 2, 0x3b4c50
  03b4c3c  lis 3, 0
  03b4c40  lhz 4, 52(31)
  03b4c44  ori 3, 3, 32768
  03b4c48  or 3, 4, 3
  03b4c4c  sth 3, 52(31)
  03b4c50  li 3, 255
  03b4c54  li 4, 2
  03b4c58  stb 3, 164(31)
  03b4c5c  stb 4, 32(31)
  03b4c60  b 0x3b5c80
  03b4c64  lis 3, 151
  03b4c68  addic 3, 3, -25376
  03b4c6c  lwz 3, 8332(3)
  03b4c70  cmpwi 3, 22
  03b4c74  bt 2, 0x3b4c84
  03b4c78  li 3, 0
  03b4c7c  stb 3, 32(31)
  03b4c80  b 0x3b5c80
  03b4c84  lis 3, 59
  03b4c88  lhz 4, 754(28)
  03b4c8c  lis 5, 114
  03b4c90  addi 3, 3, 18024
  03b4c94  addic 4, 4, 1
  03b4c98  sth 4, 754(28)
  03b4c9c  lfs 1, 40(3)
  03b4ca0  lfs 2, -3056(5)
  03b4ca4  extsh 3, 4
  03b4ca8  fmuls 1, 2, 1
  03b4cac  fctiwz 1, 1
  03b4cb0  stfd 1, 424(1)
  03b4cb4  lwz 4, 428(1)
  03b4cb8  cmpw 3, 4
  03b4cbc  bf 1, 0x3b5c80
  03b4cc0  lis 3, 149
  03b4cc4  lfs 1, 16(31)
  03b4cc8  lfs 2, 20(31)
  03b4ccc  addic 3, 3, 5056
  03b4cd0  lis 4, 59
  03b4cd4  addi 4, 4, 18024
  03b4cd8  lfs 3, 320(3)
  03b4cdc  lfs 4, 324(3)
  03b4ce0  fsubs 1, 1, 3
  03b4ce4  fsubs 2, 2, 4
  03b4ce8  lis 5, 115
  03b4cec  addic 5, 5, 22784
  03b4cf0  fabs 3, 1
  03b4cf4  fabs 5, 2
  03b4cf8  stfs 1, 300(1)
  03b4cfc  stfs 2, 304(1)
  03b4d00  fsubs 1, 3, 5
  03b4d04  stfs 1, 308(1)
  03b4d08  lwz 6, 300(1)
  03b4d0c  lfs 4, 4(4)
  03b4d10  lfs 1, 300(1)
  03b4d14  lwz 4, 304(1)
  03b4d18  lfs 2, 304(1)
  03b4d1c  fabs 1, 1
  03b4d20  lwz 7, 308(1)
  03b4d24  rlwinm 4, 4, 3, 29, 29
  03b4d28  fabs 6, 2
  03b4d2c  lfs 2, 308(1)
  03b4d30  rlwimi 4, 7, 2, 30, 30
  03b4d34  fsub 7, 2, 4
  03b4d38  rlwimi 4, 6, 4, 28, 28
  03b4d3c  fsub 8, 2, 4
  03b4d40  ori 6, 5, 0
  03b4d44  rlwimi 6, 4, 2, 26, 28
  03b4d48  slwi 4, 4, 2
  03b4d4c  clrldi 6, 6, 32
  03b4d50  fsel 5, 7, 1, 5
  03b4d54  lfsx 1, 5, 4
  03b4d58  lfs 2, 4(6)
  03b4d5c  fsel 3, 8, 6, 3
  03b4d60  fcmpu 0, 5, 4
  03b4d64  bt 1, 0x3b4d6c
  03b4d68  b 0x3b4e8c
  03b4d6c  fsubs 6, 3, 5
  03b4d70  fadds 3, 3, 5
  03b4d74  addic 4, 1, 16
  03b4d78  li 7, 2
  03b4d7c  addic 6, 4, 356
  03b4d80  addic 5, 4, 340
  03b4d84  mtctr 7
  03b4d88  fdivs 3, 6, 3
  03b4d8c  fmuls 5, 3, 3
  03b4d90  stfs 3, 368(1)
  03b4d94  stfs 3, 360(1)
  03b4d98  stfs 3, 364(1)
  03b4d9c  stfs 3, 356(1)
  03b4da0  lfs 7, 368(1)
  03b4da4  lfs 8, 360(1)
  03b4da8  lfs 9, 364(1)
  03b4dac  fmuls 6, 5, 5
  03b4db0  fmuls 8, 8, 5
  03b4db4  fmuls 7, 7, 6
  03b4db8  fmuls 3, 6, 6
  03b4dbc  fmuls 6, 9, 6
  03b4dc0  stfs 8, 360(1)
  03b4dc4  fmuls 5, 7, 5
  03b4dc8  stfs 6, 364(1)
  03b4dcc  stfs 5, 368(1)
  03b4dd0  lfs 5, 340(4)
  03b4dd4  fmuls 5, 5, 3
  03b4dd8  stfs 5, 356(4)
  03b4ddc  lfs 5, 4(5)
  03b4de0  addic 5, 5, 8
  03b4de4  fmuls 5, 5, 3
  03b4de8  addic 4, 4, 8
  03b4dec  stfs 5, 4(6)
  03b4df0  addic 6, 6, 8
  03b4df4  bdnz 0x3b4dd0
  03b4df8  li 6, 4
  03b4dfc  ori 4, 1, 0
  03b4e00  mtctr 6
  03b4e04  lis 5, 115
  03b4e08  addic 6, 4, 356
  03b4e0c  addic 5, 5, 22752
  03b4e10  ori 8, 6, 0
  03b4e14  lfs 3, 356(4)
  03b4e18  lfs 5, 0(5)
  03b4e1c  fmuls 3, 3, 5
  03b4e20  lfs 5, 4(5)
  03b4e24  addic 5, 5, 8
  03b4e28  stfs 3, 356(4)
  03b4e2c  lfs 3, 4(6)
  03b4e30  addic 4, 4, 8
  03b4e34  fmuls 3, 3, 5
  03b4e38  stfs 3, 4(6)
  03b4e3c  addic 6, 6, 8
  03b4e40  bdnz 0x3b4e14
  03b4e44  ori 4, 1, 0
  03b4e48  mtctr 7
  03b4e4c  lfs 3, 356(4)
  03b4e50  fadds 3, 4, 3
  03b4e54  addic 4, 4, 16
  03b4e58  lfs 4, 4(8)
  03b4e5c  lfs 5, 8(8)
  03b4e60  lfs 6, 12(8)
  03b4e64  addic 8, 8, 16
  03b4e68  fadds 3, 3, 4
  03b4e6c  fadds 4, 3, 5
  03b4e70  fadds 4, 4, 6
  03b4e74  bdnz 0x3b4e4c
  03b4e78  lis 4, 59
  03b4e7c  addi 4, 4, 18024
  03b4e80  lfs 3, 8(4)
  03b4e84  fadds 4, 4, 3
  03b4e88  fmadds 4, 4, 1, 2
  03b4e8c  fmr 1, 4
  03b4e90  lfs 2, 344(3)
  03b4e94  bl 0x5026a0
  03b4e98  nop
  03b4e9c  lis 3, 59
  03b4ea0  addi 3, 3, 18024
  03b4ea4  lfs 2, 44(3)
  03b4ea8  fcmpu 0, 1, 2
  03b4eac  cror 6, 0, 2
  03b4eb0  bt 6, 0x3b5c80
  03b4eb4  lwz 6, 36(31)
  03b4eb8  li 3, -66
  03b4ebc  lhz 7, 52(31)
  03b4ec0  li 4, 255
  03b4ec4  and 3, 7, 3
  03b4ec8  li 5, 2
  03b4ecc  lwz 6, 16(6)
  03b4ed0  stb 4, 164(31)
  03b4ed4  stw 6, 148(31)
  03b4ed8  sth 3, 52(31)
  03b4edc  stb 5, 32(31)
  03b4ee0  b 0x3b5c80
  03b4ee4  lis 26, 151
  03b4ee8  addic 26, 26, -25376
  03b4eec  lwz 3, 8332(26)
  03b4ef0  cmpwi 3, 22
  03b4ef4  bt 2, 0x3b4f04
  03b4ef8  li 3, 0
  03b4efc  stb 3, 32(31)
  03b4f00  b 0x3b5c80
  03b4f04  ori 3, 31, 0
  03b4f08  lis 4, 3
  03b4f0c  li 5, 0
  03b4f10  bl 0x10675c
  03b4f14  nop
  03b4f18  cmpwi 3, 0
  03b4f1c  bt 2, 0x3b5024
  03b4f20  lis 3, 59
  03b4f24  lfs 1, 16(31)
  03b4f28  lfs 2, 20(31)
  03b4f2c  li 30, 0
  03b4f30  addi 6, 3, 18024
  03b4f34  stfs 1, 208(1)
  03b4f38  lfs 1, 28(31)
  03b4f3c  li 11, -1
  03b4f40  stfs 2, 212(1)
  03b4f44  li 7, 9
  03b4f48  stfs 1, 220(1)
  03b4f4c  lis 4, 161
  03b4f50  addic 5, 1, 208
  03b4f54  fmr 3, 31
  03b4f58  lfs 1, 48(6)
  03b4f5c  addic 4, 4, 23856
  03b4f60  lfs 2, 24(31)
  03b4f64  ori 3, 31, 0
  03b4f68  std 30, 160(1)
  03b4f6c  li 8, 5
  03b4f70  fadds 1, 2, 1
  03b4f74  std 11, 144(1)
  03b4f78  std 7, 168(1)
  03b4f7c  li 9, 15
  03b4f80  std 11, 176(1)
  03b4f84  li 10, 25
  03b4f88  stfs 1, 216(1)
  03b4f8c  lfs 1, 4(6)
  03b4f90  lfs 4, 52(6)
  03b4f94  lfs 5, 56(6)
  03b4f98  lfs 6, 28(6)
  03b4f9c  fmr 2, 1
  03b4fa0  lfs 7, 60(6)
  03b4fa4  std 30, 184(1)
  03b4fa8  bl 0x10e030
  03b4fac  nop
  03b4fb0  ori 3, 31, 0
  03b4fb4  li 9, 0
  03b4fb8  li 4, 1621
  03b4fbc  li 5, 1
  03b4fc0  li 6, 1622
  03b4fc4  li 7, 2
  03b4fc8  li 8, 2
  03b4fcc  bl 0x11aa78
  03b4fd0  nop
  03b4fd4  ori 3, 31, 0
  03b4fd8  li 4, 1786
  03b4fdc  li 5, 1
  03b4fe0  li 6, 1787
  03b4fe4  li 7, 1
  03b4fe8  li 8, 1
  03b4fec  li 9, 0
  03b4ff0  bl 0x11aa78
  03b4ff4  nop
  03b4ff8  sth 30, 754(28)
  03b4ffc  li 3, 3
  03b5000  lwz 4, 2216(26)
  03b5004  lhz 5, 52(31)
  03b5008  addic 4, 4, 250
  03b500c  stw 30, 148(31)
  03b5010  ori 5, 5, 65
  03b5014  stw 4, 2216(26)
  03b5018  sth 5, 52(31)
  03b501c  stb 3, 32(31)
  03b5020  b 0x3b5c80
  03b5024  li 4, 255
  03b5028  ori 3, 31, 0
  03b502c  stb 4, 164(31)
  03b5030  bl 0x3b33c8
  03b5034  ori 3, 31, 0
  03b5038  bl 0x3b39b0
  03b503c  lwz 30, 120(31)
  03b5040  lis 3, 59
  03b5044  addi 3, 3, 18024
  03b5048  lwz 4, 712(30)
  03b504c  cmpwi 4, 0
  03b5050  lfs 28, 4(3)
  03b5054  bt 1, 0x3b5118
  03b5058  lhz 5, 756(30)
  03b505c  lis 6, 16256
  03b5060  lwz 4, 704(30)
  03b5064  extsh 5, 5
  03b5068  sldi 3, 5, 4
  03b506c  addc 3, 4, 3
  03b5070  clrldi 3, 3, 32
  03b5074  lwz 3, 28(3)
  03b5078  cmpw 3, 6
  03b507c  bf 2, 0x3b5118
  03b5080  ori 7, 3, 0
  03b5084  lis 8, 16384
  03b5088  ori 6, 4, 0
  03b508c  cmpw 7, 8
  03b5090  ori 3, 5, 0
  03b5094  bt 2, 0x3b50dc
  03b5098  ori 3, 5, 0
  03b509c  ori 5, 3, 0
  03b50a0  ori 3, 4, 0
  03b50a4  ori 4, 5, 0
  03b50a8  li 6, 1
  03b50ac  li 5, 1
  03b50b0  bl 0x10cd94
  03b50b4  nop
  03b50b8  lwz 6, 704(30)
  03b50bc  sldi 5, 3, 4
  03b50c0  lis 7, 16384
  03b50c4  ori 4, 6, 0
  03b50c8  addc 5, 4, 5
  03b50cc  clrldi 5, 5, 32
  03b50d0  lwz 5, 28(5)
  03b50d4  cmpw 5, 7
  03b50d8  bf 2, 0x3b509c
  03b50dc  extsh 4, 3
  03b50e0  sth 3, 752(30)
  03b50e4  sldi 4, 4, 4
  03b50e8  addc 4, 6, 4
  03b50ec  clrldi 3, 4, 32
  03b50f0  li 4, 1
  03b50f4  lfs 1, 16(3)
  03b50f8  stfs 1, 624(30)
  03b50fc  lfs 1, 20(3)
  03b5100  stfs 1, 628(30)
  03b5104  lfs 1, 24(3)
  03b5108  stfs 1, 632(30)
  03b510c  lfs 1, 28(3)
  03b5110  stw 4, 740(30)
  03b5114  stfs 1, 636(30)
  03b5118  lwz 3, 740(28)
  03b511c  cmpwi 3, 0
  03b5120  bt 2, 0x3b5284
  03b5124  lis 4, 59
  03b5128  addic 3, 3, 1
  03b512c  addi 4, 4, 18024
  03b5130  lis 5, 114
  03b5134  stw 3, 740(28)
  03b5138  lfs 1, 64(4)
  03b513c  lfs 2, -3056(5)
  03b5140  fmuls 1, 2, 1
  03b5144  fctiwz 1, 1
  03b5148  stfd 1, 424(1)
  03b514c  lwz 4, 428(1)
  03b5150  cmpw 3, 4
  03b5154  bf 0, 0x3b5284
  03b5158  lhz 4, 756(28)
  03b515c  lhz 3, 752(28)
  03b5160  extsh 30, 4
  03b5164  fmr 31, 28
  03b5168  extsh 5, 3
  03b516c  cmpw 30, 5
  03b5170  bf 0, 0x3b51ec
  03b5174  fmr 31, 28
  03b5178  ori 4, 30, 0
  03b517c  lwz 3, 704(28)
  03b5180  li 5, 1
  03b5184  li 6, 1
  03b5188  bl 0x10cd94
  03b518c  nop
  03b5190  sldi 4, 30, 4
  03b5194  lwz 5, 704(28)
  03b5198  sldi 6, 3, 4
  03b519c  addc 4, 5, 4
  03b51a0  addc 5, 5, 6
  03b51a4  clrldi 4, 4, 32
  03b51a8  clrldi 5, 5, 32
  03b51ac  lfs 1, 20(4)
  03b51b0  lfs 2, 20(5)
  03b51b4  lfs 3, 16(4)
  03b51b8  fsubs 1, 1, 2
  03b51bc  lfs 2, 16(5)
  03b51c0  fsubs 2, 3, 2
  03b51c4  ori 30, 3, 0
  03b51c8  lhz 3, 752(28)
  03b51cc  extsh 4, 3
  03b51d0  fmuls 1, 1, 1
  03b51d4  cmpw 30, 4
  03b51d8  fmadds 1, 2, 2, 1
  03b51dc  fsqrts 1, 1
  03b51e0  fadds 31, 31, 1
  03b51e4  bt 0, 0x3b5178
  03b51e8  lhz 4, 756(28)
  03b51ec  lfs 1, 700(28)
  03b51f0  fdivs 2, 31, 1
  03b51f4  extsh 4, 4
  03b51f8  extsh 3, 3
  03b51fc  sldi 4, 4, 4
  03b5200  sldi 3, 3, 4
  03b5204  lis 5, 59
  03b5208  lwz 6, 704(28)
  03b520c  addc 4, 6, 4
  03b5210  addc 3, 6, 3
  03b5214  clrldi 4, 4, 32
  03b5218  clrldi 3, 3, 32
  03b521c  lfs 1, 24(4)
  03b5220  lfs 3, 24(3)
  03b5224  lis 4, 114
  03b5228  fsubs 3, 3, 1
  03b522c  addi 3, 5, 18024
  03b5230  lfs 4, 68(3)
  03b5234  lfs 1, -3048(4)
  03b5238  lfs 31, 48(3)
  03b523c  fmuls 4, 1, 4
  03b5240  lwz 3, 712(28)
  03b5244  cmpwi 3, 0
  03b5248  fdivs 3, 3, 2
  03b524c  fmuls 2, 4, 2
  03b5250  fmadds 31, 2, 31, 3
  03b5254  bf 0, 0x3b5260
  03b5258  li 3, 0
  03b525c  stw 3, 712(28)
  03b5260  fmr 2, 1
  03b5264  lis 3, 59
  03b5268  fmr 1, 31
  03b526c  addi 4, 3, 18024
  03b5270  addic 3, 28, 712
  03b5274  lfs 3, 72(4)
  03b5278  fmuls 2, 2, 3
  03b527c  bl 0x109af0
  03b5280  nop
  03b5284  ori 3, 31, 0
  03b5288  bl 0x3b3fd0
  03b528c  lhz 3, 756(28)
  03b5290  lwz 4, 120(31)
  03b5294  extsh 3, 3
  03b5298  sldi 3, 3, 4
  03b529c  lwz 4, 704(4)
  03b52a0  lfs 1, 16(31)
  03b52a4  addc 3, 4, 3
  03b52a8  lfs 2, 20(31)
  03b52ac  clrldi 3, 3, 32
  03b52b0  lfs 3, 16(3)
  03b52b4  lfs 4, 20(3)
  03b52b8  fsubs 1, 3, 1
  03b52bc  fsubs 2, 4, 2
  03b52c0  lfs 31, 24(3)
  03b52c4  lis 3, 115
  03b52c8  addic 3, 3, 22784
  03b52cc  fabs 4, 1
  03b52d0  fabs 3, 2
  03b52d4  stfs 1, 288(1)
  03b52d8  stfs 2, 292(1)
  03b52dc  fsubs 1, 4, 3
  03b52e0  stfs 1, 296(1)
  03b52e4  lwz 4, 288(1)
  03b52e8  lfs 1, 288(1)
  03b52ec  lwz 5, 292(1)
  03b52f0  lfs 2, 292(1)
  03b52f4  lwz 6, 296(1)
  03b52f8  rlwinm 5, 5, 3, 29, 29
  03b52fc  lfs 5, 296(1)
  03b5300  fabs 1, 1
  03b5304  rlwimi 5, 6, 2, 30, 30
  03b5308  fabs 2, 2
  03b530c  fsub 6, 5, 28
  03b5310  fsub 5, 5, 28
  03b5314  rlwimi 5, 4, 4, 28, 28
  03b5318  ori 4, 3, 0
  03b531c  rlwimi 4, 5, 2, 26, 28
  03b5320  slwi 5, 5, 2
  03b5324  clrldi 4, 4, 32
  03b5328  fsel 3, 6, 1, 3
  03b532c  lfsx 30, 3, 5
  03b5330  fsel 2, 5, 2, 4
  03b5334  lfs 1, 4(4)
  03b5338  fcmpu 0, 3, 28
  03b533c  bt 1, 0x3b5348
  03b5340  fmr 30, 28
  03b5344  b 0x3b546c
  03b5348  fsubs 4, 2, 3
  03b534c  fadds 2, 2, 3
  03b5350  addic 3, 1, 16
  03b5354  li 7, 2
  03b5358  addic 5, 3, 324
  03b535c  addic 4, 3, 308
  03b5360  mtctr 7
  03b5364  fdivs 2, 4, 2
  03b5368  fmuls 3, 2, 2
  03b536c  stfs 2, 336(1)
  03b5370  stfs 2, 328(1)
  03b5374  stfs 2, 332(1)
  03b5378  stfs 2, 324(1)
  03b537c  lfs 5, 336(1)
  03b5380  lfs 6, 328(1)
  03b5384  lfs 7, 332(1)
  03b5388  fmuls 4, 3, 3
  03b538c  fmuls 6, 6, 3
  03b5390  fmuls 5, 5, 4
  03b5394  fmuls 2, 4, 4
  03b5398  fmuls 4, 7, 4
  03b539c  stfs 6, 328(1)
  03b53a0  fmuls 3, 5, 3
  03b53a4  stfs 4, 332(1)
  03b53a8  stfs 3, 336(1)
  03b53ac  lfs 3, 308(3)
  03b53b0  fmuls 3, 3, 2
  03b53b4  stfs 3, 324(3)
  03b53b8  lfs 3, 4(4)
  03b53bc  addic 4, 4, 8
  03b53c0  fmuls 3, 3, 2
  03b53c4  addic 3, 3, 8
  03b53c8  stfs 3, 4(5)
  03b53cc  addic 5, 5, 8
  03b53d0  bdnz 0x3b53ac
  03b53d4  li 5, 4
  03b53d8  ori 3, 1, 0
  03b53dc  mtctr 5
  03b53e0  lis 4, 115
  03b53e4  addic 5, 3, 324
  03b53e8  addic 4, 4, 22752
  03b53ec  ori 6, 5, 0
  03b53f0  lfs 2, 324(3)
  03b53f4  lfs 3, 0(4)
  03b53f8  fmuls 2, 2, 3
  03b53fc  lfs 3, 4(4)
  03b5400  addic 4, 4, 8
  03b5404  stfs 2, 324(3)
  03b5408  lfs 2, 4(5)
  03b540c  addic 3, 3, 8
  03b5410  fmuls 2, 2, 3
  03b5414  stfs 2, 4(5)
  03b5418  addic 5, 5, 8
  03b541c  bdnz 0x3b53f0
  03b5420  ori 3, 1, 0
  03b5424  fmr 2, 28
  03b5428  mtctr 7
  03b542c  lfs 3, 324(3)
  03b5430  fadds 2, 2, 3
  03b5434  lfs 3, 4(6)
  03b5438  addic 3, 3, 16
  03b543c  lfs 4, 8(6)
  03b5440  lfs 5, 12(6)
  03b5444  addic 6, 6, 16
  03b5448  fadds 2, 2, 3
  03b544c  fadds 2, 2, 4
  03b5450  fadds 2, 2, 5
  03b5454  bdnz 0x3b542c
  03b5458  lis 3, 59
  03b545c  addi 3, 3, 18024
  03b5460  lfs 3, 8(3)
  03b5464  fadds 2, 2, 3
  03b5468  fmadds 30, 2, 30, 1
  03b546c  lis 3, 59
  03b5470  fmr 1, 30
  03b5474  lis 4, 114
  03b5478  addi 30, 3, 18024
  03b547c  lis 6, 114
  03b5480  addic 3, 31, 72
  03b5484  addic 5, 28, 708
  03b5488  li 9, 0
  03b548c  lfs 2, 76(30)
  03b5490  lfs 27, 80(30)
  03b5494  lfs 4, 84(30)
  03b5498  lfs 3, -3060(4)
  03b549c  lfs 5, -3052(6)
  03b54a0  fmuls 2, 3, 2
  03b54a4  fmuls 3, 3, 27
  03b54a8  fmuls 4, 5, 4
  03b54ac  bl 0x10a050
  03b54b0  nop
  03b54b4  lfs 3, 88(30)
  03b54b8  lfs 2, 616(28)
  03b54bc  fsubs 3, 31, 3
  03b54c0  lfs 30, 700(28)
  03b54c4  lfs 20, 608(28)
  03b54c8  lfs 1, 612(28)
  03b54cc  fcmpu 0, 2, 3
  03b54d0  cror 6, 1, 2
  03b54d4  bt 6, 0x3b54e0
  03b54d8  fmr 2, 31
  03b54dc  stfs 31, 616(28)
  03b54e0  lis 3, 59
  03b54e4  lfs 3, 72(31)
  03b54e8  addi 4, 3, 18024
  03b54ec  lfs 4, 92(4)
  03b54f0  lfs 26, 96(4)
  03b54f4  fadds 4, 3, 4
  03b54f8  lfs 25, 100(4)
  03b54fc  lfs 24, 104(4)
  03b5500  lfs 23, 108(4)
  03b5504  lfs 22, 112(4)
  03b5508  lfs 21, 116(4)
  03b550c  fsubs 5, 26, 4
  03b5510  fsubs 6, 25, 4
  03b5514  fsub 7, 4, 5
  03b5518  fsel 4, 7, 5, 4
  03b551c  fsubs 5, 26, 3
  03b5520  fsub 7, 6, 4
  03b5524  fsub 8, 3, 5
  03b5528  fsel 4, 7, 6, 4
  03b552c  fsel 5, 8, 5, 3
  03b5530  fsubs 3, 25, 3
  03b5534  fmuls 6, 4, 4
  03b5538  fsub 7, 3, 5
  03b553c  fmuls 8, 6, 4
  03b5540  fsel 3, 7, 3, 5
  03b5544  fmuls 5, 6, 8
  03b5548  fmadds 4, 8, 24, 4
  03b554c  fmuls 7, 6, 5
  03b5550  fmadds 4, 5, 23, 4
  03b5554  fmuls 5, 6, 7
  03b5558  fmadds 4, 7, 22, 4
  03b555c  fmadds 31, 5, 21, 4
  03b5560  fmuls 31, 31, 30
  03b5564  fmuls 4, 3, 3
  03b5568  stfs 2, 616(28)
  03b556c  fadds 6, 20, 31
  03b5570  li 3, 0
  03b5574  li 5, 0
  03b5578  ori 6, 31, 0
  03b557c  li 7, 0
  03b5580  fmuls 5, 4, 3
  03b5584  stfs 6, 608(28)
  03b5588  fmuls 7, 4, 5
  03b558c  fmadds 3, 5, 24, 3
  03b5590  fmuls 2, 4, 7
  03b5594  fmadds 3, 7, 23, 3
  03b5598  fmuls 4, 4, 2
  03b559c  fmadds 2, 2, 22, 3
  03b55a0  fmadds 2, 4, 21, 2
  03b55a4  fmuls 30, 2, 30
  03b55a8  fadds 1, 1, 30
  03b55ac  stfs 1, 612(28)
  03b55b0  lfs 20, 120(4)
  03b55b4  stw 3, 232(1)
  03b55b8  fmuls 1, 31, 20
  03b55bc  stfs 29, 236(1)
  03b55c0  fmuls 2, 30, 20
  03b55c4  addic 3, 1, 224
  03b55c8  stfs 1, 224(1)
  03b55cc  stfs 2, 228(1)
  03b55d0  lfs 3, 608(28)
  03b55d4  fadds 1, 1, 3
  03b55d8  stfs 1, 224(1)
  03b55dc  lfs 1, 612(28)
  03b55e0  fadds 1, 2, 1
  03b55e4  stfs 1, 228(1)
  03b55e8  lfs 1, 124(4)
  03b55ec  lfs 2, 616(28)
  03b55f0  fadds 2, 2, 1
  03b55f4  stfs 2, 232(1)
  03b55f8  bl 0x5e598
  03b55fc  nop
  03b5600  ori 30, 3, 0
  03b5604  cmpwi 30, 0
  03b5608  bt 2, 0x3b569c
  03b560c  lis 3, 59
  03b5610  cmpwi 30, 0
  03b5614  addi 3, 3, 18024
  03b5618  lfs 1, 60(3)
  03b561c  li 3, 0
  03b5620  fmuls 2, 31, 1
  03b5624  stfs 29, 252(1)
  03b5628  fmuls 1, 30, 1
  03b562c  stw 3, 248(1)
  03b5630  stfs 2, 240(1)
  03b5634  stfs 1, 244(1)
  03b5638  bf 1, 0x3b569c
  03b563c  lis 3, 59
  03b5640  lis 24, 161
  03b5644  addi 3, 3, 18024
  03b5648  addic 24, 24, 18944
  03b564c  addic 25, 28, 608
  03b5650  li 29, 0
  03b5654  lfs 31, 28(3)
  03b5658  lwz 3, 0(24)
  03b565c  bl 0x10af88
  03b5660  nop
  03b5664  cmpwi 3, 0
  03b5668  bt 2, 0x3b568c
  03b566c  addic 8, 1, 240
  03b5670  fmr 1, 31
  03b5674  ori 4, 31, 0
  03b5678  lis 5, 3
  03b567c  lwz 3, 0(24)
  03b5680  ori 7, 25, 0
  03b5684  bl 0x105c08
  03b5688  nop
  03b568c  addic 29, 29, 1
  03b5690  addic 24, 24, 4
  03b5694  cmpw 29, 30
  03b5698  bt 0, 0x3b5658
  03b569c  lis 3, 59
  03b56a0  li 4, 0
  03b56a4  addi 5, 3, 18024
  03b56a8  addic 3, 28, 608
  03b56ac  lfs 30, 48(5)
  03b56b0  fmr 1, 30
  03b56b4  bl 0xffb70
  03b56b8  nop
  03b56bc  fmr 31, 1
  03b56c0  lfs 1, 616(28)
  03b56c4  fsubs 29, 1, 31
  03b56c8  fcmpu 0, 29, 28
  03b56cc  bt 1, 0x3b56e0
  03b56d0  lwz 3, 712(28)
  03b56d4  lfs 2, 712(28)
  03b56d8  cmpwi 3, 0
  03b56dc  bf 1, 0x3b5704
  03b56e0  lis 3, 59
  03b56e4  lfs 2, 712(28)
  03b56e8  lis 4, 114
  03b56ec  addi 3, 3, 18024
  03b56f0  lfs 3, 68(3)
  03b56f4  lfs 4, -3048(4)
  03b56f8  fnmsubs 2, 4, 3, 2
  03b56fc  stfs 2, 712(28)
  03b5700  b 0x3b5728
  03b5704  fabs 3, 29
  03b5708  fcmpu 0, 3, 30
  03b570c  cror 6, 1, 2
  03b5710  bt 6, 0x3b5728
  03b5714  li 3, 0
  03b5718  fmr 1, 31
  03b571c  fmr 2, 28
  03b5720  stw 3, 712(28)
  03b5724  stw 3, 740(28)
  03b5728  fadds 1, 1, 2
  03b572c  addic 3, 28, 758
  03b5730  stfs 1, 616(28)
  03b5734  bl 0x4fffb4
  03b5738  nop
  03b573c  ori 4, 3, 0
  03b5740  lwz 3, 2196(26)
  03b5744  cmpwi 4, 0
  03b5748  lwz 4, 2240(26)
  03b574c  bt 2, 0x3b5830
  03b5750  lis 5, 59
  03b5754  lis 6, 114
  03b5758  addi 5, 5, 18024
  03b575c  lis 7, 114
  03b5760  lfs 1, 132(5)
  03b5764  lfs 3, -3056(6)
  03b5768  lfs 5, 128(5)
  03b576c  fmuls 1, 3, 1
  03b5770  lfs 4, 616(28)
  03b5774  lfs 2, -3052(7)
  03b5778  fsub 4, 31, 4
  03b577c  lfs 6, 692(28)
  03b5780  fmuls 3, 2, 5
  03b5784  fctiwz 5, 1
  03b5788  fsel 1, 4, 6, 3
  03b578c  stfd 5, 424(1)
  03b5790  lwz 5, 428(1)
  03b5794  cmpw 3, 5
  03b5798  bf 0, 0x3b57a0
  03b579c  fmadds 1, 2, 20, 1
  03b57a0  lwz 3, 716(28)
  03b57a4  fadds 3, 2, 1
  03b57a8  slwi 3, 3, 1
  03b57ac  extsw 3, 3
  03b57b0  addc 3, 26, 3
  03b57b4  lhz 3, 1984(3)
  03b57b8  extsh 3, 3
  03b57bc  cmpw 4, 3
  03b57c0  bf 1, 0x3b57c8
  03b57c4  fsubs 3, 1, 2
  03b57c8  lfs 1, 700(28)
  03b57cc  fcmpu 0, 1, 3
  03b57d0  cror 6, 0, 2
  03b57d4  bt 6, 0x3b5804
  03b57d8  lis 3, 59
  03b57dc  fmr 1, 3
  03b57e0  lis 5, 114
  03b57e4  addi 4, 3, 18024
  03b57e8  addic 3, 28, 700
  03b57ec  lfs 4, 60(4)
  03b57f0  lfs 2, -3048(5)
  03b57f4  fmuls 2, 2, 4
  03b57f8  bl 0x109af0
  03b57fc  nop
  03b5800  b 0x3b5858
  03b5804  lis 3, 59
  03b5808  lis 5, 114
  03b580c  fmr 1, 3
  03b5810  addi 4, 3, 18024
  03b5814  addic 3, 28, 700
  03b5818  lfs 2, 136(4)
  03b581c  lfs 3, -3048(5)
  03b5820  fmuls 2, 3, 2
  03b5824  bl 0x109af0
  03b5828  nop
  03b582c  b 0x3b5858
  03b5830  lis 3, 59
  03b5834  lfs 1, 696(28)
  03b5838  lis 5, 114
  03b583c  addi 4, 3, 18024
  03b5840  addic 3, 28, 700
  03b5844  lfs 2, 140(4)
  03b5848  lfs 3, -3048(5)
  03b584c  fmuls 2, 3, 2
  03b5850  bl 0x109af0
  03b5854  nop
  03b5858  lis 3, 59
  03b585c  addi 3, 3, 18024
  03b5860  lfs 1, 144(3)
  03b5864  fcmpu 0, 29, 1
  03b5868  cror 6, 1, 2
  03b586c  bt 6, 0x3b5888
  03b5870  lwz 3, 712(28)
  03b5874  cmpwi 3, 0
  03b5878  bf 0, 0x3b5888
  03b587c  li 3, 0
  03b5880  stfs 31, 616(28)
  03b5884  stw 3, 740(28)
  03b5888  lis 3, 59
  03b588c  lfs 1, 708(28)
  03b5890  lis 4, 114
  03b5894  addi 3, 3, 18024
  03b5898  lfs 3, 148(3)
  03b589c  lfs 2, -3052(4)
  03b58a0  fmuls 3, 2, 3
  03b58a4  fcmpu 0, 1, 3
  03b58a8  cror 6, 0, 2
  03b58ac  bt 6, 0x3b58b8
  03b58b0  fmr 1, 3
  03b58b4  b 0x3b58d8
  03b58b8  lis 3, 59
  03b58bc  addi 3, 3, 18024
  03b58c0  lfs 3, 152(3)
  03b58c4  fmuls 2, 2, 3
  03b58c8  fcmpu 0, 1, 2
  03b58cc  cror 6, 1, 2
  03b58d0  bt 6, 0x3b58d8
  03b58d4  fmr 1, 2
  03b58d8  lhz 3, 52(31)
  03b58dc  rlwinm 3, 3, 0, 16, 16
  03b58e0  cmpwi 3, 0
  03b58e4  bt 2, 0x3b58ec
  03b58e8  fneg 1, 1
  03b58ec  lis 3, 59
  03b58f0  addi 30, 3, 18024
  03b58f4  lis 29, 114
  03b58f8  ori 3, 31, 0
  03b58fc  lfs 2, 156(30)
  03b5900  fmuls 2, 1, 2
  03b5904  ori 4, 27, 0
  03b5908  li 5, 3
  03b590c  stfs 2, 584(28)
  03b5910  lfs 2, 140(30)
  03b5914  fmuls 2, 1, 2
  03b5918  stfs 2, 200(28)
  03b591c  lfs 2, 160(30)
  03b5920  fmuls 2, 1, 2
  03b5924  stfs 2, 456(28)
  03b5928  lfs 2, 164(30)
  03b592c  fmuls 1, 1, 2
  03b5930  stfs 1, 324(28)
  03b5934  lfs 31, 168(30)
  03b5938  lfs 3, -3060(29)
  03b593c  fmuls 2, 3, 27
  03b5940  fmuls 1, 3, 31
  03b5944  bl 0x1167c8
  03b5948  nop
  03b594c  lfs 2, -3060(29)
  03b5950  addic 4, 28, 96
  03b5954  fmuls 1, 2, 31
  03b5958  fmuls 2, 2, 27
  03b595c  ori 3, 31, 0
  03b5960  li 5, 0
  03b5964  bl 0x1167c8
  03b5968  nop
  03b596c  lfs 2, -3060(29)
  03b5970  addic 4, 28, 352
  03b5974  fmuls 1, 2, 31
  03b5978  ori 3, 31, 0
  03b597c  fmuls 2, 2, 27
  03b5980  li 5, 1
  03b5984  bl 0x1167c8
  03b5988  nop
  03b598c  lfs 1, 172(30)
  03b5990  lfs 3, -3060(29)
  03b5994  addic 4, 28, 224
  03b5998  ori 3, 31, 0
  03b599c  fmuls 1, 3, 1
  03b59a0  fmuls 2, 3, 27
  03b59a4  li 5, 2
  03b59a8  bl 0x1167c8
  03b59ac  nop
  03b59b0  lfs 1, 608(28)
  03b59b4  lis 3, 114
  03b59b8  stfs 1, 16(31)
  03b59bc  lfs 1, 612(28)
  03b59c0  stfs 1, 20(31)
  03b59c4  lfs 1, 616(28)
  03b59c8  stfs 1, 24(31)
  03b59cc  lfs 2, 620(28)
  03b59d0  stfs 2, 28(31)
  03b59d4  lfs 2, 176(30)
  03b59d8  fadds 1, 1, 2
  03b59dc  stfs 1, 24(31)
  03b59e0  lfs 3, 180(30)
  03b59e4  lfs 1, 744(28)
  03b59e8  lfs 4, -3052(3)
  03b59ec  fmuls 2, 4, 3
  03b59f0  bl 0x502578
  03b59f4  nop
  03b59f8  fsubs 2, 26, 1
  03b59fc  stfs 1, 744(28)
  03b5a00  fsubs 3, 25, 1
  03b5a04  lis 4, 161
  03b5a08  ori 3, 31, 0
  03b5a0c  addic 5, 1, 192
  03b5a10  fsub 4, 1, 2
  03b5a14  fsel 2, 4, 2, 1
  03b5a18  lfs 4, 24(31)
  03b5a1c  fsub 1, 3, 2
  03b5a20  fsel 1, 1, 3, 2
  03b5a24  lfs 2, 184(30)
  03b5a28  lfs 27, 16(31)
  03b5a2c  lfs 31, 20(31)
  03b5a30  lfs 29, 28(31)
  03b5a34  lwz 4, 1808(4)
  03b5a38  clrlwi 4, 4, 31
  03b5a3c  fmuls 3, 1, 1
  03b5a40  addic 4, 4, 4
  03b5a44  fmuls 5, 3, 1
  03b5a48  fmuls 6, 3, 5
  03b5a4c  fmadds 1, 5, 24, 1
  03b5a50  fmuls 5, 3, 6
  03b5a54  fmadds 1, 6, 23, 1
  03b5a58  fmuls 3, 3, 5
  03b5a5c  fmadds 1, 5, 22, 1
  03b5a60  fmadds 1, 3, 21, 1
  03b5a64  fmadds 30, 1, 2, 4
  03b5a68  stfs 30, 24(31)
  03b5a6c  lfs 1, 640(28)
  03b5a70  lfs 2, 644(28)
  03b5a74  stfs 27, 640(28)
  03b5a78  fsubs 27, 27, 1
  03b5a7c  lfs 1, 648(28)
  03b5a80  lfs 3, 20(31)
  03b5a84  fsubs 31, 31, 2
  03b5a88  fsubs 30, 30, 1
  03b5a8c  stfs 3, 644(28)
  03b5a90  lfs 1, 24(31)
  03b5a94  stfs 1, 648(28)
  03b5a98  lfs 1, 28(31)
  03b5a9c  stfs 1, 652(28)
  03b5aa0  bl 0xf1114
  03b5aa4  nop
  03b5aa8  bl 0xfcc68
  03b5aac  nop
  03b5ab0  lis 3, 18410
  03b5ab4  stfs 27, 256(1)
  03b5ab8  stfs 31, 260(1)
  03b5abc  ori 3, 3, 24576
  03b5ac0  stfs 30, 264(1)
  03b5ac4  stw 3, 268(1)
  03b5ac8  lhz 3, 758(28)
  03b5acc  cmpwi 3, 0
  03b5ad0  bf 2, 0x3b5b60
  03b5ad4  lis 3, 59
  03b5ad8  lis 4, 114
  03b5adc  addi 3, 3, 18024
  03b5ae0  lis 5, 132
  03b5ae4  lfs 1, 188(3)
  03b5ae8  lfs 2, -3056(4)
  03b5aec  lis 4, 132
  03b5af0  fmuls 1, 2, 1
  03b5af4  lwz 4, 22800(4)
  03b5af8  lwz 5, 22804(5)
  03b5afc  extsw 31, 4
  03b5b00  extsw 30, 5
  03b5b04  fctiwz 1, 1
  03b5b08  stfd 1, 424(1)
  03b5b0c  lfs 1, 192(3)
  03b5b10  lwz 3, 428(1)
  03b5b14  fmuls 1, 2, 1
  03b5b18  extsw 3, 3
  03b5b1c  fctiwz 1, 1
  03b5b20  stfd 1, 424(1)
  03b5b24  lwz 4, 428(1)
  03b5b28  extsw 4, 4
  03b5b2c  bl 0xfe484
  03b5b30  nop
  03b5b34  ori 7, 3, 0
  03b5b38  addic 4, 1, 256
  03b5b3c  li 9, 15
  03b5b40  addic 3, 1, 192
  03b5b44  ori 5, 31, 0
  03b5b48  ori 6, 30, 0
  03b5b4c  li 8, 15
  03b5b50  li 10, 1
  03b5b54  bl 0x121740
  03b5b58  nop
  03b5b5c  b 0x3b5c80
  03b5b60  lis 3, 59
  03b5b64  lis 30, 114
  03b5b68  addi 31, 3, 18024
  03b5b6c  lis 29, 132
  03b5b70  lfs 1, 196(31)
  03b5b74  stfs 29, 284(1)
  03b5b78  fmuls 2, 27, 1
  03b5b7c  lfs 4, -3056(30)
  03b5b80  fmuls 3, 31, 1
  03b5b84  fmuls 1, 30, 1
  03b5b88  stfs 2, 272(1)
  03b5b8c  stfs 3, 276(1)
  03b5b90  stfs 1, 280(1)
  03b5b94  lfs 1, 200(31)
  03b5b98  lwz 3, 22804(29)
  03b5b9c  fmuls 1, 4, 1
  03b5ba0  extsw 28, 3
  03b5ba4  fctiwz 1, 1
  03b5ba8  stfd 1, 424(1)
  03b5bac  lfs 1, 204(31)
  03b5bb0  lwz 3, 428(1)
  03b5bb4  fmuls 1, 4, 1
  03b5bb8  extsw 3, 3
  03b5bbc  fctiwz 1, 1
  03b5bc0  stfd 1, 424(1)
  03b5bc4  lwz 4, 428(1)
  03b5bc8  extsw 4, 4
  03b5bcc  bl 0xfe484
  03b5bd0  nop
  03b5bd4  addic 27, 1, 192
  03b5bd8  lis 5, 20530
  03b5bdc  ori 7, 3, 0
  03b5be0  ori 6, 28, 0
  03b5be4  li 8, 30
  03b5be8  ori 3, 27, 0
  03b5bec  li 9, 20
  03b5bf0  addic 4, 1, 272
  03b5bf4  ori 5, 5, 61650
  03b5bf8  li 10, 1
  03b5bfc  bl 0x121740
  03b5c00  nop
  03b5c04  lfs 1, 212(31)
  03b5c08  lfs 2, -3056(30)
  03b5c0c  lis 3, 132
  03b5c10  lfs 3, 208(31)
  03b5c14  fmuls 1, 2, 1
  03b5c18  lwz 4, 22804(29)
  03b5c1c  fmr 31, 3
  03b5c20  lwz 3, 22800(3)
  03b5c24  extsw 30, 4
  03b5c28  extsw 29, 3
  03b5c2c  fctiwz 1, 1
  03b5c30  stfd 1, 424(1)
  03b5c34  lfs 1, 64(31)
  03b5c38  lwz 3, 428(1)
  03b5c3c  fmuls 1, 2, 1
  03b5c40  extsw 3, 3
  03b5c44  fctiwz 1, 1
  03b5c48  stfd 1, 424(1)
  03b5c4c  lwz 4, 428(1)
  03b5c50  extsw 4, 4
  03b5c54  bl 0xfe484
  03b5c58  nop
  03b5c5c  ori 8, 3, 0
  03b5c60  addic 4, 1, 256
  03b5c64  fmr 1, 31
  03b5c68  li 9, 1
  03b5c6c  ori 3, 27, 0
  03b5c70  ori 5, 29, 0
  03b5c74  ori 6, 30, 0
  03b5c78  bl 0x1268f8
  03b5c7c  nop
  03b5c80  ld 0, 624(1)
  03b5c84  mtlr 0
  03b5c88  lfd 20, 512(1)
  03b5c8c  lfd 21, 520(1)
  03b5c90  lfd 22, 528(1)
  03b5c94  lfd 23, 536(1)
  03b5c98  lfd 24, 544(1)
  03b5c9c  lfd 25, 552(1)
  03b5ca0  lfd 26, 560(1)
  03b5ca4  lfd 27, 568(1)
  03b5ca8  lfd 28, 576(1)
  03b5cac  lfd 29, 584(1)
  03b5cb0  lfd 30, 592(1)
  03b5cb4  lfd 31, 600(1)
  03b5cb8  ld 24, 448(1)
  03b5cbc  ld 25, 456(1)
  03b5cc0  ld 26, 464(1)
  03b5cc4  ld 27, 472(1)
  03b5cc8  ld 28, 480(1)
  03b5ccc  ld 29, 488(1)
  03b5cd0  ld 30, 496(1)
  03b5cd4  ld 31, 504(1)
  03b5cd8  addi 1, 1, 608
  03b5cdc  blr
