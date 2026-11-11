# game/update/moby1947.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1947_002e3498:   # 0x2e3498, 0x21c bytes
  02e3498  stdu 1, -64(1)
  02e349c  stfd 31, 56(1)
  02e34a0  cmpwi 3, 0
  02e34a4  li 8, 0
  02e34a8  bf 1, 0x2e36a8
  02e34ac  lis 6, 46
  02e34b0  ori 9, 7, 0
  02e34b4  addi 10, 6, 13448
  02e34b8  lis 7, 149
  02e34bc  ori 6, 5, 0
  02e34c0  ori 5, 4, 0
  02e34c4  addic 7, 7, 5056
  02e34c8  lfs 4, 0(10)
  02e34cc  ori 4, 9, 0
  02e34d0  lfs 3, 4(10)
  02e34d4  lfs 2, 8(10)
  02e34d8  lfs 1, 12(10)
  02e34dc  lfs 9, 4(6)
  02e34e0  lfs 5, 324(7)
  02e34e4  lfs 10, 0(6)
  02e34e8  fsubs 9, 9, 5
  02e34ec  lfs 5, 320(7)
  02e34f0  lfs 8, 8(6)
  02e34f4  fsubs 10, 10, 5
  02e34f8  lfs 5, 328(7)
  02e34fc  fsubs 8, 8, 5
  02e3500  fmr 7, 4
  02e3504  fmuls 5, 9, 9
  02e3508  fmr 6, 7
  02e350c  fmadds 11, 10, 10, 5
  02e3510  fmr 5, 6
  02e3514  fmadds 11, 8, 8, 11
  02e3518  fsqrts 12, 11
  02e351c  fcmpu 0, 12, 5
  02e3520  bt 2, 0x2e3564
  02e3524  frsqrte 5, 11
  02e3528  fmuls 6, 11, 5
  02e352c  fmuls 7, 5, 3
  02e3530  fnmsubs 6, 6, 5, 2
  02e3534  fmadds 5, 6, 7, 5
  02e3538  fmuls 6, 11, 5
  02e353c  fmuls 7, 5, 3
  02e3540  fnmsubs 6, 6, 5, 2
  02e3544  fmadds 5, 6, 7, 5
  02e3548  fmuls 6, 11, 5
  02e354c  fmuls 7, 5, 3
  02e3550  fnmsubs 6, 6, 5, 2
  02e3554  fmadds 5, 6, 7, 5
  02e3558  fmuls 7, 10, 5
  02e355c  fmuls 6, 9, 5
  02e3560  fmuls 5, 8, 5
  02e3564  lfs 13, 4(5)
  02e3568  lfs 0, 0(5)
  02e356c  fmuls 8, 13, 13
  02e3570  lfs 12, 8(5)
  02e3574  fmr 10, 4
  02e3578  fmadds 11, 0, 0, 8
  02e357c  fmr 9, 10
  02e3580  fmadds 11, 12, 12, 11
  02e3584  fmr 8, 9
  02e3588  fsqrts 31, 11
  02e358c  fcmpu 0, 31, 8
  02e3590  bt 2, 0x2e35d4
  02e3594  frsqrte 8, 11
  02e3598  fmuls 9, 11, 8
  02e359c  fmuls 10, 8, 3
  02e35a0  fnmsubs 9, 9, 8, 2
  02e35a4  fmadds 8, 9, 10, 8
  02e35a8  fmuls 9, 11, 8
  02e35ac  fmuls 10, 8, 3
  02e35b0  fnmsubs 9, 9, 8, 2
  02e35b4  fmadds 8, 9, 10, 8
  02e35b8  fmuls 9, 11, 8
  02e35bc  fmuls 10, 8, 3
  02e35c0  fnmsubs 9, 9, 8, 2
  02e35c4  fmadds 8, 9, 10, 8
  02e35c8  fmuls 10, 8, 0
  02e35cc  fmuls 9, 8, 13
  02e35d0  fmuls 8, 8, 12
  02e35d4  fmr 11, 5
  02e35d8  fmuls 5, 6, 9
  02e35dc  fmadds 5, 7, 10, 5
  02e35e0  fmadds 5, 11, 8, 5
  02e35e4  fmuls 12, 5, 1
  02e35e8  fnmsubs 5, 12, 9, 6
  02e35ec  fnmsubs 6, 12, 10, 7
  02e35f0  fnmsubs 7, 12, 8, 11
  02e35f4  fmr 11, 4
  02e35f8  fmuls 8, 5, 5
  02e35fc  fmr 10, 11
  02e3600  fmadds 8, 6, 6, 8
  02e3604  fmr 9, 10
  02e3608  fmadds 8, 7, 7, 8
  02e360c  fsqrts 12, 8
  02e3610  fcmpu 0, 12, 9
  02e3614  bt 2, 0x2e3658
  02e3618  frsqrte 9, 8
  02e361c  fmuls 10, 8, 9
  02e3620  fmuls 11, 9, 3
  02e3624  fnmsubs 10, 10, 9, 2
  02e3628  fmadds 9, 10, 11, 9
  02e362c  fmuls 10, 8, 9
  02e3630  fmuls 11, 9, 3
  02e3634  fnmsubs 10, 10, 9, 2
  02e3638  fmadds 9, 10, 11, 9
  02e363c  fmuls 8, 8, 9
  02e3640  fmuls 10, 9, 3
  02e3644  fnmsubs 8, 8, 9, 2
  02e3648  fmadds 9, 8, 10, 9
  02e364c  fmuls 11, 9, 6
  02e3650  fmuls 10, 9, 5
  02e3654  fmuls 9, 9, 7
  02e3658  fmuls 5, 10, 10
  02e365c  fadds 6, 9, 2
  02e3660  addic 8, 8, 1
  02e3664  addic 6, 6, 12
  02e3668  fmadds 5, 11, 11, 5
  02e366c  cmpw 8, 3
  02e3670  addic 5, 5, 12
  02e3674  fmadds 5, 6, 6, 5
  02e3678  fsqrts 5, 5
  02e367c  fmuls 5, 5, 1
  02e3680  fdivs 6, 11, 5
  02e3684  fdivs 5, 10, 5
  02e3688  fadds 6, 6, 3
  02e368c  fmuls 6, 6, 1
  02e3690  fadds 5, 5, 3
  02e3694  stfs 6, 0(4)
  02e3698  fmuls 5, 5, 1
  02e369c  stfs 5, 4(4)
  02e36a0  addic 4, 4, 8
  02e36a4  bt 0, 0x2e34dc
  02e36a8  lfd 31, 56(1)
  02e36ac  addi 1, 1, 64
  02e36b0  blr

M1947_002e36b8:   # 0x2e36b8, 0x1dc bytes
  02e36b8  stdu 1, -192(1)
  02e36bc  mflr 0
  02e36c0  std 0, 208(1)
  02e36c4  stfd 31, 184(1)
  02e36c8  lis 4, 46
  02e36cc  std 31, 176(1)
  02e36d0  li 3, 41
  02e36d4  std 30, 168(1)
  02e36d8  std 29, 160(1)
  02e36dc  std 28, 152(1)
  02e36e0  std 27, 144(1)
  02e36e4  std 26, 136(1)
  02e36e8  std 25, 128(1)
  02e36ec  std 24, 120(1)
  02e36f0  addi 31, 4, 14004
  02e36f4  bl 0x685c4
  02e36f8  nop
  02e36fc  ori 4, 3, 0
  02e3700  li 3, 24
  02e3704  bl 0x174f80
  02e3708  nop
  02e370c  li 3, 0
  02e3710  li 4, 1
  02e3714  li 5, 2
  02e3718  li 6, 1
  02e371c  li 7, 64
  02e3720  bl 0x502ea8
  02e3724  nop
  02e3728  ori 4, 3, 0
  02e372c  li 3, 3
  02e3730  bl 0x174f80
  02e3734  nop
  02e3738  li 3, 0
  02e373c  li 4, 0
  02e3740  li 5, 0
  02e3744  li 6, 0
  02e3748  li 7, 0
  02e374c  li 8, 0
  02e3750  bl 0x502f08
  02e3754  nop
  02e3758  ori 4, 3, 0
  02e375c  li 3, 6
  02e3760  bl 0x174f80
  02e3764  nop
  02e3768  li 3, 0
  02e376c  lis 9, 0
  02e3770  li 4, 0
  02e3774  li 5, 1
  02e3778  li 6, 1
  02e377c  li 7, 1
  02e3780  li 8, 0
  02e3784  ori 9, 9, 65424
  02e3788  bl 0x502fd4
  02e378c  nop
  02e3790  ori 4, 3, 0
  02e3794  li 3, 26
  02e3798  bl 0x174f80
  02e379c  nop
  02e37a0  bl 0x71170
  02e37a4  nop
  02e37a8  lis 3, 268
  02e37ac  lis 28, 127
  02e37b0  lfs 31, 0(31)
  02e37b4  lis 30, 127
  02e37b8  lis 26, 127
  02e37bc  lis 29, 127
  02e37c0  lis 27, 127
  02e37c4  lis 25, 268
  02e37c8  li 24, 0
  02e37cc  addic 26, 26, 32512
  02e37d0  addic 28, 28, 27968
  02e37d4  addic 30, 30, 32516
  02e37d8  addic 27, 27, 32508
  02e37dc  addic 31, 3, -24336
  02e37e0  addic 29, 29, 32504
  02e37e4  addic 25, 25, -24320
  02e37e8  ori 3, 31, 0
  02e37ec  fmr 1, 31
  02e37f0  bl 0x502910
  02e37f4  nop
  02e37f8  cmpwi 3, -1
  02e37fc  bt 2, 0x2e383c
  02e3800  lwz 3, 0(28)
  02e3804  lwz 4, 0(26)
  02e3808  ori 7, 25, 0
  02e380c  lwz 5, 0(29)
  02e3810  extsw 3, 3
  02e3814  lwz 6, 0(27)
  02e3818  bl 0x2e3498
  02e381c  lwz 3, 0(28)
  02e3820  lwz 4, 0(29)
  02e3824  ori 6, 25, 0
  02e3828  li 7, 9
  02e382c  lwz 5, 0(30)
  02e3830  extsw 3, 3
  02e3834  bl 0x74604
  02e3838  nop
  02e383c  addic 24, 24, 1
  02e3840  addic 31, 31, 16
  02e3844  cmpwi 24, 1
  02e3848  addic 26, 26, 4
  02e384c  addic 27, 27, 4
  02e3850  addic 28, 28, 4
  02e3854  addic 29, 29, 4
  02e3858  addic 30, 30, 4
  02e385c  bt 0, 0x2e37e8
  02e3860  ld 0, 208(1)
  02e3864  mtlr 0
  02e3868  lfd 31, 184(1)
  02e386c  ld 24, 120(1)
  02e3870  ld 25, 128(1)
  02e3874  ld 26, 136(1)
  02e3878  ld 27, 144(1)
  02e387c  ld 28, 152(1)
  02e3880  ld 29, 160(1)
  02e3884  ld 30, 168(1)
  02e3888  ld 31, 176(1)
  02e388c  addi 1, 1, 192
  02e3890  blr

UpdateMoby_1947:   # 0x2e38a0, 0x1f0 bytes
  02e38a0  stdu 1, -160(1)
  02e38a4  mflr 0
  02e38a8  std 0, 176(1)
  02e38ac  stfd 30, 144(1)
  02e38b0  stfd 31, 152(1)
  02e38b4  lbz 5, 32(3)
  02e38b8  lis 4, 46
  02e38bc  cmpwi 5, 0
  02e38c0  addi 4, 4, 14484
  02e38c4  cmpwi 1, 5, 1
  02e38c8  std 31, 136(1)
  02e38cc  std 30, 128(1)
  02e38d0  std 29, 120(1)
  02e38d4  cmpwi 6, 5, -1
  02e38d8  bt 1, 0x2e38e4
  02e38dc  bf 25, 0x2e3a6c
  02e38e0  b 0x2e38ec
  02e38e4  bf 5, 0x2e3a58
  02e38e8  b 0x2e3a6c
  02e38ec  li 11, 0
  02e38f0  lfs 4, 0(4)
  02e38f4  lis 5, 268
  02e38f8  ori 9, 11, 0
  02e38fc  lis 6, 127
  02e3900  lis 7, 127
  02e3904  addic 6, 6, 27968
  02e3908  ori 8, 9, 0
  02e390c  addic 7, 7, 32504
  02e3910  addic 5, 5, -24336
  02e3914  lfs 6, 4(4)
  02e3918  lfs 1, 8(4)
  02e391c  fmr 5, 6
  02e3920  fmr 2, 1
  02e3924  lwz 10, 0(6)
  02e3928  cmpwi 1, 10, 0
  02e392c  fmr 7, 5
  02e3930  fmr 3, 2
  02e3934  bf 5, 0x2e3998
  02e3938  ori 31, 9, 0
  02e393c  ori 12, 10, 0
  02e3940  lwzx 30, 7, 8
  02e3944  addic 12, 12, -1
  02e3948  addc 29, 30, 31
  02e394c  cmpwi 12, 0
  02e3950  clrldi 29, 29, 32
  02e3954  lfsx 8, 30, 31
  02e3958  addic 31, 31, 12
  02e395c  fsub 9, 5, 8
  02e3960  fsub 10, 8, 3
  02e3964  lfs 11, 4(29)
  02e3968  lfs 12, 8(29)
  02e396c  fsub 13, 6, 11
  02e3970  fsub 0, 7, 12
  02e3974  fsub 31, 11, 2
  02e3978  fsub 30, 12, 1
  02e397c  fsel 5, 9, 5, 8
  02e3980  fsel 3, 10, 3, 8
  02e3984  fsel 6, 13, 6, 11
  02e3988  fsel 7, 0, 7, 12
  02e398c  fsel 2, 31, 2, 11
  02e3990  fsel 1, 30, 1, 12
  02e3994  bt 1, 0x2e3940
  02e3998  fadds 3, 5, 3
  02e399c  fadds 2, 6, 2
  02e39a0  stw 9, 12(5)
  02e39a4  fadds 1, 7, 1
  02e39a8  ori 31, 9, 0
  02e39ac  fmuls 3, 3, 4
  02e39b0  fmuls 2, 2, 4
  02e39b4  fmuls 1, 1, 4
  02e39b8  stfs 3, 0(5)
  02e39bc  stfs 2, 4(5)
  02e39c0  stfs 1, 8(5)
  02e39c4  bf 5, 0x2e3a28
  02e39c8  ori 12, 9, 0
  02e39cc  lfs 5, 12(5)
  02e39d0  lwzx 30, 7, 8
  02e39d4  addc 29, 30, 12
  02e39d8  clrldi 29, 29, 32
  02e39dc  lfsx 6, 30, 12
  02e39e0  fsubs 6, 6, 3
  02e39e4  lfs 7, 4(29)
  02e39e8  lfs 8, 8(29)
  02e39ec  fsubs 7, 7, 2
  02e39f0  fsubs 8, 8, 1
  02e39f4  fmuls 7, 7, 7
  02e39f8  fmadds 6, 6, 6, 7
  02e39fc  fmadds 6, 8, 8, 6
  02e3a00  fsqrts 6, 6
  02e3a04  fcmpu 0, 6, 5
  02e3a08  cror 6, 0, 2
  02e3a0c  bt 6, 0x2e3a18
  02e3a10  fmr 5, 6
  02e3a14  stfs 6, 12(5)
  02e3a18  addic 31, 31, 1
  02e3a1c  addic 12, 12, 12
  02e3a20  cmpw 31, 10
  02e3a24  bt 0, 0x2e39d0
  02e3a28  addic 11, 11, 1
  02e3a2c  addic 6, 6, 4
  02e3a30  cmpwi 11, 1
  02e3a34  addic 8, 8, 4
  02e3a38  addic 5, 5, 16
  02e3a3c  bt 0, 0x2e3914
  02e3a40  li 4, 1
  02e3a44  li 5, 255
  02e3a48  stb 4, 32(3)
  02e3a4c  sth 5, 50(3)
  02e3a50  stb 5, 48(3)
  02e3a54  b 0x2e3a6c
  02e3a58  lis 5, 113
  02e3a5c  ori 4, 3, 0
  02e3a60  addic 3, 5, -18920
  02e3a64  bl 0x6d720
  02e3a68  nop
  02e3a6c  ld 0, 176(1)
  02e3a70  mtlr 0
  02e3a74  lfd 30, 144(1)
  02e3a78  lfd 31, 152(1)
  02e3a7c  ld 29, 120(1)
  02e3a80  ld 30, 128(1)
  02e3a84  ld 31, 136(1)
  02e3a88  addi 1, 1, 160
  02e3a8c  blr
