# game/update/moby107.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1069_001b32c0:   # 0x1b32c0, 0xd0 bytes
  01b32c0  stdu 1, -144(1)
  01b32c4  mflr 0
  01b32c8  std 0, 160(1)
  01b32cc  stfd 31, 136(1)
  01b32d0  std 31, 128(1)
  01b32d4  lis 4, 27
  01b32d8  ori 31, 3, 0
  01b32dc  addi 5, 4, 12984
  01b32e0  li 6, 0
  01b32e4  std 30, 120(1)
  01b32e8  lis 4, 51
  01b32ec  lwz 30, 120(31)
  01b32f0  lfs 31, 0(5)
  01b32f4  li 5, 0
  01b32f8  stw 6, 116(1)
  01b32fc  bl 0x10675c
  01b3300  nop
  01b3304  ori 4, 3, 0
  01b3308  ori 3, 31, 0
  01b330c  li 6, 0
  01b3310  addic 5, 30, 32
  01b3314  li 9, 0
  01b3318  addic 7, 1, 112
  01b331c  li 10, 4
  01b3320  addic 8, 1, 116
  01b3324  bl 0x106840
  01b3328  nop
  01b332c  lwz 3, 112(1)
  01b3330  cmpwi 3, 1
  01b3334  bt 2, 0x1b336c
  01b3338  lbz 3, 32(31)
  01b333c  cmpwi 1, 3, 9
  01b3340  cmpwi 3, 8
  01b3344  cror 2, 2, 6
  01b3348  bt 2, 0x1b336c
  01b334c  lfs 1, 32(30)
  01b3350  lfs 2, 116(1)
  01b3354  fsubs 1, 1, 2
  01b3358  fcmpu 0, 1, 31
  01b335c  stfs 1, 32(30)
  01b3360  bt 1, 0x1b336c
  01b3364  li 3, 8
  01b3368  stb 3, 32(31)
  01b336c  li 3, 255
  01b3370  stb 3, 164(31)
  01b3374  ld 0, 160(1)
  01b3378  mtlr 0
  01b337c  lfd 31, 136(1)
  01b3380  ld 30, 120(1)
  01b3384  ld 31, 128(1)
  01b3388  addi 1, 1, 144
  01b338c  blr

UpdateMoby_107:   # 0x1b33e0, 0xa14 bytes
  01b33e0  stdu 1, -368(1)
  01b33e4  mflr 0
  01b33e8  std 0, 384(1)
  01b33ec  stfd 30, 352(1)
  01b33f0  stfd 31, 360(1)
  01b33f4  std 31, 344(1)
  01b33f8  lis 4, 27
  01b33fc  ori 31, 3, 0
  01b3400  addi 5, 4, 13200
  01b3404  li 6, 0
  01b3408  std 30, 336(1)
  01b340c  lis 4, 51
  01b3410  lwz 30, 120(31)
  01b3414  lfs 31, 0(5)
  01b3418  li 5, 0
  01b341c  std 29, 328(1)
  01b3420  std 28, 320(1)
  01b3424  std 27, 312(1)
  01b3428  stw 6, 256(1)
  01b342c  bl 0x10675c
  01b3430  nop
  01b3434  ori 4, 3, 0
  01b3438  ori 3, 31, 0
  01b343c  li 6, 0
  01b3440  addic 5, 30, 32
  01b3444  li 9, 0
  01b3448  addic 7, 1, 252
  01b344c  li 10, 4
  01b3450  addic 8, 1, 256
  01b3454  bl 0x106840
  01b3458  nop
  01b345c  lwz 3, 252(1)
  01b3460  cmpwi 3, 1
  01b3464  bt 2, 0x1b349c
  01b3468  lbz 3, 32(31)
  01b346c  cmpwi 1, 3, 9
  01b3470  cmpwi 3, 8
  01b3474  cror 2, 2, 6
  01b3478  bt 2, 0x1b349c
  01b347c  lfs 1, 32(30)
  01b3480  lfs 2, 256(1)
  01b3484  fsubs 1, 1, 2
  01b3488  fcmpu 0, 1, 31
  01b348c  stfs 1, 32(30)
  01b3490  bt 1, 0x1b349c
  01b3494  li 3, 8
  01b3498  stb 3, 32(31)
  01b349c  li 3, 255
  01b34a0  lis 4, 165
  01b34a4  addic 5, 4, 7136
  01b34a8  stb 3, 164(31)
  01b34ac  lwz 3, 112(30)
  01b34b0  lbz 4, 32(31)
  01b34b4  slwi 3, 3, 2
  01b34b8  cmpwi 4, 4
  01b34bc  extsw 3, 3
  01b34c0  cmpwi 1, 4, 1
  01b34c4  cmpwi 6, 4, -1
  01b34c8  cmpwi 7, 4, 0
  01b34cc  lwzx 3, 5, 3
  01b34d0  bt 1, 0x1b34f8
  01b34d4  bt 5, 0x1b34e4
  01b34d8  bf 25, 0x1b3dc8
  01b34dc  bf 29, 0x1b3524
  01b34e0  b 0x1b3558
  01b34e4  cmpwi 4, 2
  01b34e8  bf 1, 0x1b35dc
  01b34ec  cmpwi 4, 3
  01b34f0  bf 1, 0x1b3638
  01b34f4  b 0x1b36e8
  01b34f8  cmpwi 4, 10
  01b34fc  bt 2, 0x1b3d90
  01b3500  cmpwi 4, 9
  01b3504  bt 2, 0x1b3d08
  01b3508  cmpwi 4, 8
  01b350c  bt 2, 0x1b3c54
  01b3510  cmpwi 4, 7
  01b3514  bt 2, 0x1b3bf8
  01b3518  cmpwi 4, 6
  01b351c  bt 2, 0x1b37f0
  01b3520  b 0x1b3dc8
  01b3524  li 3, 1
  01b3528  lfs 1, 16(31)
  01b352c  stb 3, 32(31)
  01b3530  stfs 1, 144(30)
  01b3534  lfs 1, 20(31)
  01b3538  stfs 1, 148(30)
  01b353c  lfs 1, 24(31)
  01b3540  stfs 1, 152(30)
  01b3544  lfs 1, 28(31)
  01b3548  stfs 1, 156(30)
  01b354c  lfs 1, 72(31)
  01b3550  stfs 1, 156(30)
  01b3554  b 0x1b3dc8
  01b3558  lis 3, 151
  01b355c  lwz 4, 136(30)
  01b3560  addic 3, 3, -25168
  01b3564  extsw 4, 4
  01b3568  bl 0x110b70
  01b356c  nop
  01b3570  cmpwi 3, 0
  01b3574  bt 2, 0x1b3dc8
  01b3578  li 3, 120
  01b357c  li 4, 2
  01b3580  vspltisw 4, -1
  01b3584  addi 5, 3, 16
  01b3588  stb 4, 32(31)
  01b358c  <unknown>
  01b3590  lis 4, 27
  01b3594  <unknown>
  01b3598  addi 3, 4, 13200
  01b359c  vor 2, 2, 3
  01b35a0  li 4, 4
  01b35a4  lis 5, 114
  01b35a8  vslw 4, 4, 4
  01b35ac  vcfsx 2, 2, 0
  01b35b0  <unknown>
  01b35b4  li 3, -3056
  01b35b8  vspltw 3, 3, 0
  01b35bc  <unknown>
  01b35c0  li 3, 164
  01b35c4  vaddfp 2, 2, 3
  01b35c8  vmaddfp 2, 5, 2, 4
  01b35cc  vctsxs 2, 2, 0
  01b35d0  vspltw 2, 2, 0
  01b35d4  stvewx 2, 3, 30
  01b35d8  b 0x1b3dc8
  01b35dc  addic 3, 30, 164
  01b35e0  bl 0x4fff60
  01b35e4  nop
  01b35e8  cmpwi 3, 0
  01b35ec  bt 2, 0x1b3dc8
  01b35f0  lis 3, 27
  01b35f4  li 4, 3
  01b35f8  vspltisw 2, -1
  01b35fc  addi 3, 3, 13200
  01b3600  li 5, 8
  01b3604  lis 6, 114
  01b3608  stb 4, 32(31)
  01b360c  li 4, -3056
  01b3610  vslw 2, 2, 2
  01b3614  <unknown>
  01b3618  li 3, 164
  01b361c  vspltw 3, 3, 0
  01b3620  <unknown>
  01b3624  vmaddfp 2, 4, 3, 2
  01b3628  vctsxs 2, 2, 0
  01b362c  vspltw 2, 2, 0
  01b3630  stvewx 2, 3, 30
  01b3634  b 0x1b3dc8
  01b3638  lwz 5, 164(30)
  01b363c  lis 4, 27
  01b3640  addic 5, 5, -1
  01b3644  addi 4, 4, 13200
  01b3648  extsw 6, 5
  01b364c  stw 5, 164(30)
  01b3650  lis 5, 114
  01b3654  std 6, 296(1)
  01b3658  lfs 1, 8(4)
  01b365c  addic 4, 30, 144
  01b3660  lfs 2, -3056(5)
  01b3664  addic 5, 3, 16
  01b3668  fmuls 1, 2, 1
  01b366c  lfd 2, 296(1)
  01b3670  ori 3, 31, 0
  01b3674  fcfid 2, 2
  01b3678  fctidz 3, 1
  01b367c  frsp 1, 2
  01b3680  fcfid 2, 3
  01b3684  frsp 2, 2
  01b3688  bl 0x1b31d8
  01b368c  lwz 3, 164(30)
  01b3690  cmpwi 3, 0
  01b3694  bf 2, 0x1b3dc8
  01b3698  lis 5, 27
  01b369c  lfs 1, 72(31)
  01b36a0  li 3, 6
  01b36a4  vspltisw 2, -1
  01b36a8  li 4, 8
  01b36ac  stfs 1, 168(30)
  01b36b0  addi 5, 5, 13200
  01b36b4  li 6, -3056
  01b36b8  lis 7, 114
  01b36bc  stb 3, 32(31)
  01b36c0  vslw 2, 2, 2
  01b36c4  li 3, 164
  01b36c8  <unknown>
  01b36cc  vspltw 3, 3, 0
  01b36d0  <unknown>
  01b36d4  vmaddfp 2, 4, 3, 2
  01b36d8  vctsxs 2, 2, 0
  01b36dc  vspltw 2, 2, 0
  01b36e0  stvewx 2, 3, 30
  01b36e4  b 0x1b3dc8
  01b36e8  lwz 4, 164(30)
  01b36ec  lis 6, 27
  01b36f0  addic 4, 4, -1
  01b36f4  addi 6, 6, 13200
  01b36f8  extsw 5, 4
  01b36fc  std 5, 296(1)
  01b3700  stw 4, 164(30)
  01b3704  lwz 5, 160(30)
  01b3708  lfs 1, 12(6)
  01b370c  addic 4, 3, 32
  01b3710  lfd 2, 296(1)
  01b3714  cmpwi 5, 0
  01b3718  fcfid 2, 2
  01b371c  frsp 2, 2
  01b3720  bt 2, 0x1b3754
  01b3724  lis 5, 114
  01b3728  lfs 3, -3056(5)
  01b372c  fmuls 3, 3, 1
  01b3730  fmr 1, 2
  01b3734  addic 5, 3, 16
  01b3738  ori 3, 31, 0
  01b373c  fmr 2, 3
  01b3740  fctidz 2, 2
  01b3744  fcfid 2, 2
  01b3748  frsp 2, 2
  01b374c  bl 0x1b31d8
  01b3750  b 0x1b3784
  01b3754  ori 5, 4, 0
  01b3758  lis 4, 114
  01b375c  lfs 3, -3056(4)
  01b3760  fmuls 3, 3, 1
  01b3764  fmr 1, 2
  01b3768  addic 4, 3, 16
  01b376c  ori 3, 31, 0
  01b3770  fmr 2, 3
  01b3774  fctidz 2, 2
  01b3778  fcfid 2, 2
  01b377c  frsp 2, 2
  01b3780  bl 0x1b31d8
  01b3784  lwz 3, 164(30)
  01b3788  cmpwi 3, 0
  01b378c  bf 2, 0x1b3dc8
  01b3790  lwz 6, 160(30)
  01b3794  lis 3, 27
  01b3798  li 4, 6
  01b379c  vspltisw 2, -1
  01b37a0  addic 6, 6, 1
  01b37a4  addi 3, 3, 13200
  01b37a8  clrlwi 6, 6, 31
  01b37ac  li 7, 8
  01b37b0  lis 5, 114
  01b37b4  vslw 2, 2, 2
  01b37b8  li 8, -3056
  01b37bc  stw 6, 160(30)
  01b37c0  stb 4, 32(31)
  01b37c4  <unknown>
  01b37c8  li 3, 164
  01b37cc  vspltw 3, 3, 0
  01b37d0  <unknown>
  01b37d4  vmaddfp 2, 4, 3, 2
  01b37d8  vctsxs 2, 2, 0
  01b37dc  vspltw 2, 2, 0
  01b37e0  stvewx 2, 3, 30
  01b37e4  lfs 1, 72(31)
  01b37e8  stfs 1, 168(30)
  01b37ec  b 0x1b3dc8
  01b37f0  lwz 3, 160(30)
  01b37f4  lis 4, 165
  01b37f8  lwz 5, 164(30)
  01b37fc  slwi 6, 3, 2
  01b3800  addic 3, 5, -1
  01b3804  addc 5, 30, 6
  01b3808  clrldi 5, 5, 32
  01b380c  stw 3, 164(30)
  01b3810  lwz 4, 7128(4)
  01b3814  lwz 5, 128(5)
  01b3818  lfs 1, 16(31)
  01b381c  slwi 5, 5, 7
  01b3820  lfs 2, 20(31)
  01b3824  addc 4, 4, 5
  01b3828  clrldi 4, 4, 32
  01b382c  lfs 3, 48(4)
  01b3830  lfs 4, 52(4)
  01b3834  fsubs 1, 3, 1
  01b3838  fsubs 2, 4, 2
  01b383c  lis 4, 115
  01b3840  addic 4, 4, 22784
  01b3844  fabs 4, 1
  01b3848  fabs 3, 2
  01b384c  stfs 1, 240(1)
  01b3850  stfs 2, 244(1)
  01b3854  fsubs 1, 4, 3
  01b3858  stfs 1, 248(1)
  01b385c  lwz 5, 240(1)
  01b3860  lfs 1, 240(1)
  01b3864  lwz 6, 244(1)
  01b3868  lfs 2, 244(1)
  01b386c  fabs 1, 1
  01b3870  lwz 7, 248(1)
  01b3874  rlwinm 6, 6, 3, 29, 29
  01b3878  fabs 5, 2
  01b387c  lfs 2, 248(1)
  01b3880  rlwimi 6, 7, 2, 30, 30
  01b3884  fsub 6, 2, 31
  01b3888  fsub 7, 2, 31
  01b388c  rlwimi 6, 5, 4, 28, 28
  01b3890  ori 5, 4, 0
  01b3894  rlwimi 5, 6, 2, 26, 28
  01b3898  slwi 6, 6, 2
  01b389c  clrldi 5, 5, 32
  01b38a0  fsel 3, 6, 1, 3
  01b38a4  lfsx 2, 4, 6
  01b38a8  fsel 4, 7, 5, 4
  01b38ac  lfs 1, 4(5)
  01b38b0  fcmpu 0, 3, 31
  01b38b4  bt 1, 0x1b38bc
  01b38b8  b 0x1b39e0
  01b38bc  fsubs 5, 4, 3
  01b38c0  fadds 3, 4, 3
  01b38c4  addic 7, 1, 16
  01b38c8  li 4, 2
  01b38cc  addic 5, 7, 260
  01b38d0  addic 6, 7, 244
  01b38d4  mtctr 4
  01b38d8  fdivs 3, 5, 3
  01b38dc  fmuls 5, 3, 3
  01b38e0  stfs 3, 272(1)
  01b38e4  stfs 3, 264(1)
  01b38e8  stfs 3, 268(1)
  01b38ec  stfs 3, 260(1)
  01b38f0  lfs 6, 272(1)
  01b38f4  lfs 7, 264(1)
  01b38f8  lfs 8, 268(1)
  01b38fc  fmuls 3, 5, 5
  01b3900  fmuls 7, 7, 5
  01b3904  fmuls 6, 6, 3
  01b3908  fmuls 4, 3, 3
  01b390c  fmuls 3, 8, 3
  01b3910  stfs 7, 264(1)
  01b3914  fmuls 5, 6, 5
  01b3918  stfs 3, 268(1)
  01b391c  stfs 5, 272(1)
  01b3920  lfs 3, 244(7)
  01b3924  fmuls 3, 3, 4
  01b3928  stfs 3, 260(7)
  01b392c  lfs 3, 4(6)
  01b3930  addic 6, 6, 8
  01b3934  fmuls 3, 3, 4
  01b3938  addic 7, 7, 8
  01b393c  stfs 3, 4(5)
  01b3940  addic 5, 5, 8
  01b3944  bdnz 0x1b3920
  01b3948  ori 8, 1, 0
  01b394c  li 5, 4
  01b3950  lis 7, 115
  01b3954  addic 6, 8, 260
  01b3958  mtctr 5
  01b395c  addic 7, 7, 22752
  01b3960  ori 5, 6, 0
  01b3964  lfs 3, 260(8)
  01b3968  lfs 4, 0(7)
  01b396c  fmuls 3, 3, 4
  01b3970  lfs 4, 4(7)
  01b3974  addic 7, 7, 8
  01b3978  stfs 3, 260(8)
  01b397c  lfs 3, 4(6)
  01b3980  addic 8, 8, 8
  01b3984  fmuls 3, 3, 4
  01b3988  stfs 3, 4(6)
  01b398c  addic 6, 6, 8
  01b3990  bdnz 0x1b3964
  01b3994  ori 6, 4, 0
  01b3998  ori 4, 1, 0
  01b399c  mtctr 6
  01b39a0  lfs 3, 260(4)
  01b39a4  lfs 4, 4(5)
  01b39a8  fadds 3, 31, 3
  01b39ac  lfs 5, 8(5)
  01b39b0  lfs 31, 12(5)
  01b39b4  addic 4, 4, 16
  01b39b8  addic 5, 5, 16
  01b39bc  fadds 3, 3, 4
  01b39c0  fadds 3, 3, 5
  01b39c4  fadds 31, 3, 31
  01b39c8  bdnz 0x1b39a0
  01b39cc  lis 4, 27
  01b39d0  addi 4, 4, 13200
  01b39d4  lfs 3, 16(4)
  01b39d8  fadds 31, 31, 3
  01b39dc  fmadds 31, 31, 2, 1
  01b39e0  extsw 3, 3
  01b39e4  lis 4, 27
  01b39e8  addi 4, 4, 13200
  01b39ec  std 3, 296(1)
  01b39f0  lis 3, 114
  01b39f4  fmr 2, 31
  01b39f8  lfs 1, 8(4)
  01b39fc  lfs 3, -3056(3)
  01b3a00  ori 3, 31, 0
  01b3a04  fmuls 3, 3, 1
  01b3a08  lfs 1, 168(30)
  01b3a0c  lfd 4, 296(1)
  01b3a10  fcfid 4, 4
  01b3a14  fctidz 5, 3
  01b3a18  frsp 3, 4
  01b3a1c  fcfid 4, 5
  01b3a20  frsp 4, 4
  01b3a24  bl 0x1b30e8
  01b3a28  lis 3, 165
  01b3a2c  stfs 1, 72(31)
  01b3a30  lwz 4, 164(30)
  01b3a34  cmpwi 4, 0
  01b3a38  lwz 3, 7128(3)
  01b3a3c  bf 2, 0x1b3dc8
  01b3a40  ori 4, 3, 0
  01b3a44  lis 3, 27
  01b3a48  addi 29, 3, 13200
  01b3a4c  lis 3, 114
  01b3a50  lfs 1, 32(29)
  01b3a54  lfs 2, 36(29)
  01b3a58  fadds 1, 31, 1
  01b3a5c  fsubs 4, 2, 31
  01b3a60  lfs 3, 40(29)
  01b3a64  fsubs 5, 3, 31
  01b3a68  addic 28, 1, 192
  01b3a6c  li 7, 0
  01b3a70  fsubs 2, 2, 1
  01b3a74  fsub 6, 31, 4
  01b3a78  fsubs 3, 3, 1
  01b3a7c  fsub 7, 1, 2
  01b3a80  fsel 4, 6, 4, 31
  01b3a84  lfs 6, 44(29)
  01b3a88  fsel 1, 7, 2, 1
  01b3a8c  fsub 2, 5, 4
  01b3a90  fsub 7, 3, 1
  01b3a94  fsel 2, 2, 5, 4
  01b3a98  lfs 4, 20(29)
  01b3a9c  lfs 5, 48(29)
  01b3aa0  fsel 3, 7, 3, 1
  01b3aa4  lfs 1, -3052(3)
  01b3aa8  fmuls 7, 2, 2
  01b3aac  lis 3, 114
  01b3ab0  lfs 8, 24(29)
  01b3ab4  fmuls 1, 1, 4
  01b3ab8  lfs 9, 52(29)
  01b3abc  lfs 11, 28(29)
  01b3ac0  lfs 12, -3048(3)
  01b3ac4  lfs 13, 24(31)
  01b3ac8  fmuls 30, 12, 8
  01b3acc  fmuls 4, 3, 3
  01b3ad0  fmuls 10, 7, 2
  01b3ad4  fadds 8, 13, 11
  01b3ad8  li 3, 0
  01b3adc  fmuls 0, 4, 3
  01b3ae0  fmuls 31, 7, 10
  01b3ae4  fmadds 2, 10, 6, 2
  01b3ae8  lfs 10, 56(29)
  01b3aec  lfs 12, 16(31)
  01b3af0  lfs 13, 20(31)
  01b3af4  fmuls 11, 4, 0
  01b3af8  fmadds 3, 0, 6, 3
  01b3afc  fmuls 6, 7, 31
  01b3b00  lfs 0, 28(31)
  01b3b04  fmadds 2, 31, 5, 2
  01b3b08  lwz 5, 160(30)
  01b3b0c  stw 3, 216(1)
  01b3b10  slwi 5, 5, 2
  01b3b14  stfs 8, 200(1)
  01b3b18  addc 3, 30, 5
  01b3b1c  fmuls 31, 4, 11
  01b3b20  clrldi 3, 3, 32
  01b3b24  fmadds 3, 11, 5, 3
  01b3b28  stfs 0, 204(1)
  01b3b2c  fmuls 5, 7, 6
  01b3b30  fmadds 2, 6, 9, 2
  01b3b34  lwz 5, 128(3)
  01b3b38  stfs 13, 196(1)
  01b3b3c  slwi 5, 5, 7
  01b3b40  stfs 12, 192(1)
  01b3b44  ori 3, 28, 0
  01b3b48  addc 4, 4, 5
  01b3b4c  fmuls 4, 4, 31
  01b3b50  fmadds 3, 31, 9, 3
  01b3b54  addic 4, 4, 48
  01b3b58  fmadds 2, 5, 10, 2
  01b3b5c  clrldi 4, 4, 32
  01b3b60  fmadds 3, 4, 10, 3
  01b3b64  fmuls 2, 2, 1
  01b3b68  fmuls 3, 3, 1
  01b3b6c  stfs 2, 212(1)
  01b3b70  fneg 2, 30
  01b3b74  stfs 3, 208(1)
  01b3b78  bl 0x108180
  01b3b7c  nop
  01b3b80  lis 27, 114
  01b3b84  stfs 1, 216(1)
  01b3b88  addic 5, 1, 208
  01b3b8c  lfs 2, 60(29)
  01b3b90  ori 3, 31, 0
  01b3b94  fmr 1, 30
  01b3b98  ori 4, 28, 0
  01b3b9c  lfs 3, -3056(27)
  01b3ba0  fmuls 2, 3, 2
  01b3ba4  fctiwz 2, 2
  01b3ba8  stfd 2, 296(1)
  01b3bac  lwz 7, 300(1)
  01b3bb0  extsw 7, 7
  01b3bb4  bl 0x32ca80
  01b3bb8  nop
  01b3bbc  li 3, 7
  01b3bc0  vspltisw 2, -1
  01b3bc4  li 5, 12
  01b3bc8  li 4, -3056
  01b3bcc  stb 3, 32(31)
  01b3bd0  vslw 2, 2, 2
  01b3bd4  <unknown>
  01b3bd8  li 3, 164
  01b3bdc  <unknown>
  01b3be0  vspltw 3, 3, 0
  01b3be4  vmaddfp 2, 4, 3, 2
  01b3be8  vctsxs 2, 2, 0
  01b3bec  vspltw 2, 2, 0
  01b3bf0  stvewx 2, 3, 30
  01b3bf4  b 0x1b3dc8
  01b3bf8  lwz 3, 164(30)
  01b3bfc  addic 3, 3, -1
  01b3c00  cmpwi 3, 0
  01b3c04  stw 3, 164(30)
  01b3c08  bf 2, 0x1b3dc8
  01b3c0c  lis 3, 27
  01b3c10  vspltisw 2, -1
  01b3c14  li 4, 4
  01b3c18  addi 3, 3, 13200
  01b3c1c  li 6, 12
  01b3c20  lis 5, 114
  01b3c24  stb 4, 32(31)
  01b3c28  li 4, -3056
  01b3c2c  vslw 2, 2, 2
  01b3c30  <unknown>
  01b3c34  li 3, 164
  01b3c38  vspltw 3, 3, 0
  01b3c3c  <unknown>
  01b3c40  vmaddfp 2, 4, 3, 2
  01b3c44  vctsxs 2, 2, 0
  01b3c48  vspltw 2, 2, 0
  01b3c4c  stvewx 2, 3, 30
  01b3c50  b 0x1b3dc8
  01b3c54  lis 3, 27
  01b3c58  lfs 1, 16(31)
  01b3c5c  lfs 2, 20(31)
  01b3c60  li 11, -1
  01b3c64  addi 6, 3, 13200
  01b3c68  stfs 1, 224(1)
  01b3c6c  lfs 1, 28(31)
  01b3c70  li 30, 0
  01b3c74  stfs 2, 228(1)
  01b3c78  li 7, 7
  01b3c7c  stfs 1, 236(1)
  01b3c80  lis 4, 161
  01b3c84  ori 3, 31, 0
  01b3c88  lfs 1, 64(6)
  01b3c8c  lfs 2, 24(31)
  01b3c90  addic 5, 1, 224
  01b3c94  std 11, 144(1)
  01b3c98  addic 4, 4, 23856
  01b3c9c  fadds 3, 2, 1
  01b3ca0  std 30, 160(1)
  01b3ca4  std 7, 168(1)
  01b3ca8  li 8, 7
  01b3cac  std 11, 176(1)
  01b3cb0  fmr 1, 31
  01b3cb4  std 30, 184(1)
  01b3cb8  li 9, 10
  01b3cbc  fmr 2, 31
  01b3cc0  li 10, 20
  01b3cc4  stfs 3, 232(1)
  01b3cc8  lfs 3, 28(6)
  01b3ccc  lfs 4, 4(6)
  01b3cd0  lfs 7, 68(6)
  01b3cd4  fmr 5, 3
  01b3cd8  fmr 6, 4
  01b3cdc  bl 0x10e030
  01b3ce0  nop
  01b3ce4  lhz 3, 52(31)
  01b3ce8  li 4, 9
  01b3cec  stb 30, 49(31)
  01b3cf0  rlwimi 3, 30, 0, 19, 19
  01b3cf4  stw 30, 148(31)
  01b3cf8  ori 3, 3, 1
  01b3cfc  stb 4, 32(31)
  01b3d00  sth 3, 52(31)
  01b3d04  b 0x1b3dc8
  01b3d08  lwz 3, 116(30)
  01b3d0c  cmpwi 3, 0
  01b3d10  bt 2, 0x1b3dc8
  01b3d14  addic 3, 3, -1
  01b3d18  lfs 1, 144(30)
  01b3d1c  lis 4, 27
  01b3d20  li 6, 1
  01b3d24  li 7, 10
  01b3d28  stw 3, 116(30)
  01b3d2c  stfs 1, 16(31)
  01b3d30  addi 3, 4, 13200
  01b3d34  lfs 1, 148(30)
  01b3d38  li 4, 0
  01b3d3c  stfs 1, 20(31)
  01b3d40  lfs 1, 152(30)
  01b3d44  stfs 1, 24(31)
  01b3d48  lfs 2, 156(30)
  01b3d4c  stfs 2, 28(31)
  01b3d50  lfs 2, 156(30)
  01b3d54  stfs 2, 72(31)
  01b3d58  lfs 2, 72(3)
  01b3d5c  lhz 3, 52(31)
  01b3d60  fsubs 1, 1, 2
  01b3d64  ori 3, 3, 4096
  01b3d68  lwz 5, 36(31)
  01b3d6c  rlwinm 3, 3, 0, 16, 30
  01b3d70  sth 3, 52(31)
  01b3d74  stfs 1, 24(31)
  01b3d78  stw 4, 160(30)
  01b3d7c  stb 6, 49(31)
  01b3d80  lwz 3, 16(5)
  01b3d84  stb 7, 32(31)
  01b3d88  stw 3, 148(31)
  01b3d8c  b 0x1b3dc8
  01b3d90  lis 3, 27
  01b3d94  lis 5, 114
  01b3d98  lfs 1, 152(30)
  01b3d9c  addi 4, 3, 13200
  01b3da0  addic 3, 31, 24
  01b3da4  lfs 2, 76(4)
  01b3da8  lfs 3, -3052(5)
  01b3dac  fmuls 2, 3, 2
  01b3db0  bl 0x109af0
  01b3db4  nop
  01b3db8  fcmpu 0, 1, 31
  01b3dbc  bf 2, 0x1b3dc8
  01b3dc0  li 3, 1
  01b3dc4  stb 3, 32(31)
  01b3dc8  ld 0, 384(1)
  01b3dcc  mtlr 0
  01b3dd0  lfd 30, 352(1)
  01b3dd4  lfd 31, 360(1)
  01b3dd8  ld 27, 312(1)
  01b3ddc  ld 28, 320(1)
  01b3de0  ld 29, 328(1)
  01b3de4  ld 30, 336(1)
  01b3de8  ld 31, 344(1)
  01b3dec  addi 1, 1, 368
  01b3df0  blr
