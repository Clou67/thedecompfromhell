# game/update/moby1766.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1766_002b3468:   # 0x2b3468, 0x264 bytes
  02b3468  stdu 1, -416(1)
  02b346c  mflr 0
  02b3470  std 0, 432(1)
  02b3474  stfd 31, 408(1)
  02b3478  lis 3, 123
  02b347c  std 31, 400(1)
  02b3480  lis 4, 43
  02b3484  addi 31, 4, 13404
  02b3488  lwz 3, 30240(3)
  02b348c  std 30, 392(1)
  02b3490  std 29, 384(1)
  02b3494  std 28, 376(1)
  02b3498  std 27, 368(1)
  02b349c  std 26, 360(1)
  02b34a0  std 25, 352(1)
  02b34a4  std 24, 344(1)
  02b34a8  std 23, 336(1)
  02b34ac  std 22, 328(1)
  02b34b0  extsw 3, 3
  02b34b4  bl 0x685c4
  02b34b8  nop
  02b34bc  std 3, 296(1)
  02b34c0  lis 9, 0
  02b34c4  li 3, 0
  02b34c8  li 4, 0
  02b34cc  li 5, 1
  02b34d0  li 6, 1
  02b34d4  li 7, 1
  02b34d8  li 8, 0
  02b34dc  ori 9, 9, 65424
  02b34e0  bl 0x502fd4
  02b34e4  nop
  02b34e8  std 3, 304(1)
  02b34ec  li 3, 0
  02b34f0  li 4, 0
  02b34f4  li 5, 0
  02b34f8  li 6, 0
  02b34fc  li 7, 0
  02b3500  li 8, 0
  02b3504  bl 0x502f08
  02b3508  nop
  02b350c  std 3, 288(1)
  02b3510  lis 4, 266
  02b3514  lis 3, 266
  02b3518  lis 5, 123
  02b351c  lis 6, 123
  02b3520  li 7, 128
  02b3524  lwz 8, 564(3)
  02b3528  lwz 3, 560(4)
  02b352c  lwz 4, 30244(5)
  02b3530  lwz 6, 30248(6)
  02b3534  ori 5, 8, 0
  02b3538  bl 0x502ea8
  02b353c  nop
  02b3540  std 3, 312(1)
  02b3544  lfs 1, 0(31)
  02b3548  lfs 2, 4(31)
  02b354c  bl 0xfcbe8
  02b3550  nop
  02b3554  lis 26, 123
  02b3558  fmr 31, 1
  02b355c  lis 27, 123
  02b3560  addic 31, 1, 176
  02b3564  lis 28, 123
  02b3568  lis 25, 151
  02b356c  lis 30, 123
  02b3570  li 22, 0
  02b3574  ori 23, 1, 0
  02b3578  addic 26, 26, 30400
  02b357c  ori 24, 1, 0
  02b3580  addic 27, 27, 30404
  02b3584  addic 28, 28, 30384
  02b3588  ori 29, 31, 0
  02b358c  addic 30, 30, 30256
  02b3590  addic 25, 25, -25432
  02b3594  lfs 1, 0(26)
  02b3598  lfs 2, 0(27)
  02b359c  fadds 1, 1, 31
  02b35a0  lwz 4, 0(28)
  02b35a4  stfs 2, 260(23)
  02b35a8  lbz 5, 16(25)
  02b35ac  stw 4, 240(24)
  02b35b0  extsw 3, 4
  02b35b4  ori 4, 5, 0
  02b35b8  stfs 1, 256(23)
  02b35bc  bl 0x10a668
  02b35c0  nop
  02b35c4  lfs 1, 0(30)
  02b35c8  addic 22, 22, 1
  02b35cc  addic 26, 26, 8
  02b35d0  stfs 1, 0(29)
  02b35d4  lfs 1, 4(30)
  02b35d8  cmpwi 22, 4
  02b35dc  addic 27, 27, 8
  02b35e0  stfs 1, 4(29)
  02b35e4  lfs 1, 8(30)
  02b35e8  addic 28, 28, 4
  02b35ec  addic 23, 23, 8
  02b35f0  stfs 1, 8(29)
  02b35f4  lfs 1, 12(30)
  02b35f8  addic 24, 24, 4
  02b35fc  addic 30, 30, 16
  02b3600  stfs 1, 12(29)
  02b3604  addic 29, 29, 16
  02b3608  bt 0, 0x2b3594
  02b360c  lis 3, 161
  02b3610  li 5, 0
  02b3614  addic 30, 3, 24396
  02b3618  addic 3, 1, 176
  02b361c  li 7, 9
  02b3620  addic 4, 1, 112
  02b3624  lwz 6, 28(30)
  02b3628  bl 0x72280
  02b362c  nop
  02b3630  lis 3, 123
  02b3634  li 5, 4
  02b3638  ori 4, 31, 0
  02b363c  addic 3, 3, 30320
  02b3640  lwz 31, 28(30)
  02b3644  mtctr 5
  02b3648  lfs 1, 0(3)
  02b364c  stfs 1, 0(4)
  02b3650  lfs 1, 4(3)
  02b3654  stfs 1, 4(4)
  02b3658  lfs 1, 8(3)
  02b365c  stfs 1, 8(4)
  02b3660  lfs 1, 12(3)
  02b3664  addic 3, 3, 16
  02b3668  stfs 1, 12(4)
  02b366c  addic 4, 4, 16
  02b3670  bdnz 0x2b3648
  02b3674  addic 3, 1, 176
  02b3678  li 4, 0
  02b367c  li 5, 0
  02b3680  ori 6, 31, 0
  02b3684  li 7, 9
  02b3688  bl 0x72280
  02b368c  nop
  02b3690  ld 0, 432(1)
  02b3694  mtlr 0
  02b3698  lfd 31, 408(1)
  02b369c  ld 22, 328(1)
  02b36a0  ld 23, 336(1)
  02b36a4  ld 24, 344(1)
  02b36a8  ld 25, 352(1)
  02b36ac  ld 26, 360(1)
  02b36b0  ld 27, 368(1)
  02b36b4  ld 28, 376(1)
  02b36b8  ld 29, 384(1)
  02b36bc  ld 30, 392(1)
  02b36c0  ld 31, 400(1)
  02b36c4  addi 1, 1, 416
  02b36c8  blr

M1766_002b36cc:   # 0x2b36cc, 0x14 bytes
  02b36cc  lis 3, 123
  02b36d0  lis 4, 1
  02b36d4  addic 3, 3, 30436
  02b36d8  stw 4, 72(3)
  02b36dc  blr

M1766_002b36e0:   # 0x2b36e0, 0x68 bytes
  02b36e0  stdu 1, -144(1)
  02b36e4  mflr 0
  02b36e8  std 0, 160(1)
  02b36ec  stfd 30, 128(1)
  02b36f0  stfd 31, 136(1)
  02b36f4  fmr 30, 1
  02b36f8  std 31, 120(1)
  02b36fc  fmr 31, 3
  02b3700  ori 31, 3, 0
  02b3704  fmr 1, 2
  02b3708  fmr 2, 30
  02b370c  bl 0x5025e0
  02b3710  nop
  02b3714  fmuls 1, 1, 31
  02b3718  fmr 2, 30
  02b371c  stfs 1, 0(31)
  02b3720  bl 0x502578
  02b3724  nop
  02b3728  stfs 1, 0(31)
  02b372c  ld 0, 160(1)
  02b3730  mtlr 0
  02b3734  lfd 30, 128(1)
  02b3738  lfd 31, 136(1)
  02b373c  ld 31, 120(1)
  02b3740  addi 1, 1, 144
  02b3744  blr

M1766_002b3778:   # 0x2b3778, 0x720 bytes
  02b3778  stdu 1, -288(1)
  02b377c  mflr 0
  02b3780  std 0, 304(1)
  02b3784  stfd 25, 232(1)
  02b3788  stfd 26, 240(1)
  02b378c  stfd 27, 248(1)
  02b3790  stfd 28, 256(1)
  02b3794  stfd 29, 264(1)
  02b3798  stfd 30, 272(1)
  02b379c  stfd 31, 280(1)
  02b37a0  std 27, 192(1)
  02b37a4  lis 4, 43
  02b37a8  lwz 27, 120(3)
  02b37ac  lis 5, 165
  02b37b0  std 28, 200(1)
  02b37b4  addi 4, 4, 14152
  02b37b8  addic 28, 5, 7136
  02b37bc  lfs 1, 0(4)
  02b37c0  lwz 5, 172(27)
  02b37c4  lfs 2, 204(27)
  02b37c8  slwi 5, 5, 2
  02b37cc  lhz 6, 186(27)
  02b37d0  extsw 5, 5
  02b37d4  fmadds 1, 2, 1, 2
  02b37d8  extsh 7, 6
  02b37dc  lwzx 28, 28, 5
  02b37e0  sldi 5, 7, 4
  02b37e4  lfs 2, 168(27)
  02b37e8  lis 7, 123
  02b37ec  addc 5, 28, 5
  02b37f0  clrldi 5, 5, 32
  02b37f4  stfs 1, 204(27)
  02b37f8  lfs 28, 20(5)
  02b37fc  lfs 1, 20(3)
  02b3800  lfs 27, 16(5)
  02b3804  fsubs 3, 28, 1
  02b3808  lfs 29, 24(5)
  02b380c  lfs 4, 30556(7)
  02b3810  lfs 5, 16(3)
  02b3814  fmadds 29, 2, 4, 29
  02b3818  lfs 6, 24(3)
  02b381c  fsubs 4, 27, 5
  02b3820  lfs 30, 4(4)
  02b3824  fmuls 7, 3, 3
  02b3828  fsubs 8, 29, 6
  02b382c  fmadds 7, 4, 4, 7
  02b3830  extsh 4, 6
  02b3834  lfs 31, 72(3)
  02b3838  sldi 4, 4, 4
  02b383c  fmadds 7, 8, 8, 7
  02b3840  addc 4, 28, 4
  02b3844  clrldi 4, 4, 32
  02b3848  std 31, 224(1)
  02b384c  fsqrts 7, 7
  02b3850  ori 31, 3, 0
  02b3854  std 29, 208(1)
  02b3858  lis 5, 115
  02b385c  li 29, 0
  02b3860  std 30, 216(1)
  02b3864  addic 5, 5, 22784
  02b3868  ori 30, 29, 0
  02b386c  fdivs 2, 2, 7
  02b3870  fsub 9, 30, 7
  02b3874  fsub 10, 30, 7
  02b3878  fsub 11, 30, 7
  02b387c  fsub 12, 7, 30
  02b3880  fsub 13, 7, 30
  02b3884  fsub 7, 7, 30
  02b3888  fmuls 8, 8, 2
  02b388c  fmuls 3, 3, 2
  02b3890  fmuls 2, 4, 2
  02b3894  fsel 4, 9, 30, 8
  02b3898  fsel 9, 10, 30, 3
  02b389c  fsel 10, 11, 30, 2
  02b38a0  fsel 4, 12, 4, 8
  02b38a4  fsel 3, 13, 9, 3
  02b38a8  fsel 2, 7, 10, 2
  02b38ac  fadds 4, 6, 4
  02b38b0  fadds 1, 1, 3
  02b38b4  fadds 2, 5, 2
  02b38b8  stfs 4, 24(3)
  02b38bc  stfs 1, 20(3)
  02b38c0  stfs 2, 16(3)
  02b38c4  lfs 3, 16(4)
  02b38c8  lfs 4, 20(4)
  02b38cc  fsubs 2, 3, 2
  02b38d0  fsubs 1, 4, 1
  02b38d4  fabs 5, 2
  02b38d8  fabs 4, 1
  02b38dc  stfs 2, 136(1)
  02b38e0  stfs 1, 140(1)
  02b38e4  fsubs 1, 5, 4
  02b38e8  stfs 1, 144(1)
  02b38ec  lwz 3, 136(1)
  02b38f0  lfs 1, 136(1)
  02b38f4  lwz 4, 140(1)
  02b38f8  fabs 2, 1
  02b38fc  lfs 1, 140(1)
  02b3900  rlwinm 4, 4, 3, 29, 29
  02b3904  fabs 6, 1
  02b3908  lfs 1, 188(27)
  02b390c  lwz 6, 144(1)
  02b3910  lfs 3, 144(1)
  02b3914  rlwimi 4, 6, 2, 30, 30
  02b3918  fsub 7, 3, 30
  02b391c  fsub 8, 3, 30
  02b3920  rlwimi 4, 3, 4, 28, 28
  02b3924  ori 3, 5, 0
  02b3928  rlwimi 3, 4, 2, 26, 28
  02b392c  slwi 4, 4, 2
  02b3930  clrldi 3, 3, 32
  02b3934  fsel 4, 7, 2, 4
  02b3938  lfsx 3, 5, 4
  02b393c  fsel 5, 8, 6, 5
  02b3940  lfs 2, 4(3)
  02b3944  fcmpu 0, 4, 30
  02b3948  bt 1, 0x2b3954
  02b394c  fmr 3, 30
  02b3950  b 0x2b3a7c
  02b3954  fsubs 6, 5, 4
  02b3958  fadds 4, 5, 4
  02b395c  addic 6, 1, 16
  02b3960  li 3, 2
  02b3964  addic 4, 6, 148
  02b3968  addic 5, 6, 132
  02b396c  mtctr 3
  02b3970  fdivs 4, 6, 4
  02b3974  fmuls 6, 4, 4
  02b3978  stfs 4, 160(1)
  02b397c  stfs 4, 152(1)
  02b3980  stfs 4, 156(1)
  02b3984  stfs 4, 148(1)
  02b3988  lfs 7, 160(1)
  02b398c  lfs 8, 152(1)
  02b3990  lfs 9, 156(1)
  02b3994  fmuls 4, 6, 6
  02b3998  fmuls 8, 8, 6
  02b399c  fmuls 7, 7, 4
  02b39a0  fmuls 5, 4, 4
  02b39a4  fmuls 4, 9, 4
  02b39a8  stfs 8, 152(1)
  02b39ac  fmuls 6, 7, 6
  02b39b0  stfs 4, 156(1)
  02b39b4  stfs 6, 160(1)
  02b39b8  lfs 4, 132(6)
  02b39bc  fmuls 4, 4, 5
  02b39c0  stfs 4, 148(6)
  02b39c4  lfs 4, 4(5)
  02b39c8  addic 5, 5, 8
  02b39cc  fmuls 4, 4, 5
  02b39d0  addic 6, 6, 8
  02b39d4  stfs 4, 4(4)
  02b39d8  addic 4, 4, 8
  02b39dc  bdnz 0x2b39b8
  02b39e0  ori 7, 1, 0
  02b39e4  li 4, 4
  02b39e8  lis 6, 115
  02b39ec  addic 5, 7, 148
  02b39f0  mtctr 4
  02b39f4  addic 6, 6, 22752
  02b39f8  ori 4, 5, 0
  02b39fc  lfs 4, 148(7)
  02b3a00  lfs 5, 0(6)
  02b3a04  fmuls 4, 4, 5
  02b3a08  lfs 5, 4(6)
  02b3a0c  addic 6, 6, 8
  02b3a10  stfs 4, 148(7)
  02b3a14  lfs 4, 4(5)
  02b3a18  addic 7, 7, 8
  02b3a1c  fmuls 4, 4, 5
  02b3a20  stfs 4, 4(5)
  02b3a24  addic 5, 5, 8
  02b3a28  bdnz 0x2b39fc
  02b3a2c  ori 5, 3, 0
  02b3a30  fmr 4, 30
  02b3a34  ori 3, 1, 0
  02b3a38  mtctr 5
  02b3a3c  lfs 5, 148(3)
  02b3a40  fadds 4, 4, 5
  02b3a44  addic 3, 3, 16
  02b3a48  lfs 5, 4(4)
  02b3a4c  lfs 6, 8(4)
  02b3a50  lfs 7, 12(4)
  02b3a54  addic 4, 4, 16
  02b3a58  fadds 4, 4, 5
  02b3a5c  fadds 4, 4, 6
  02b3a60  fadds 4, 4, 7
  02b3a64  bdnz 0x2b3a3c
  02b3a68  lis 3, 43
  02b3a6c  addi 3, 3, 14152
  02b3a70  lfs 5, 8(3)
  02b3a74  fadds 4, 4, 5
  02b3a78  fmadds 3, 4, 3, 2
  02b3a7c  fmr 2, 1
  02b3a80  fmr 1, 3
  02b3a84  bl 0x502578
  02b3a88  nop
  02b3a8c  lis 3, 43
  02b3a90  lfs 3, 204(27)
  02b3a94  fmr 2, 31
  02b3a98  addi 3, 3, 14152
  02b3a9c  lfs 4, 12(3)
  02b3aa0  lfs 26, 16(3)
  02b3aa4  fsubs 3, 4, 3
  02b3aa8  fmuls 25, 3, 26
  02b3aac  bl 0x5025e0
  02b3ab0  nop
  02b3ab4  fmuls 1, 1, 25
  02b3ab8  fmr 2, 31
  02b3abc  stfs 1, 72(31)
  02b3ac0  bl 0x502578
  02b3ac4  nop
  02b3ac8  stfs 1, 72(31)
  02b3acc  fmr 1, 30
  02b3ad0  lfs 31, 64(31)
  02b3ad4  fmr 2, 31
  02b3ad8  bl 0x5025e0
  02b3adc  nop
  02b3ae0  fmuls 1, 1, 26
  02b3ae4  fmr 2, 31
  02b3ae8  stfs 1, 64(31)
  02b3aec  bl 0x502578
  02b3af0  nop
  02b3af4  stfs 1, 64(31)
  02b3af8  fmr 1, 30
  02b3afc  lfs 31, 68(31)
  02b3b00  fmr 2, 31
  02b3b04  bl 0x5025e0
  02b3b08  nop
  02b3b0c  fmuls 1, 1, 26
  02b3b10  fmr 2, 31
  02b3b14  stfs 1, 68(31)
  02b3b18  bl 0x502578
  02b3b1c  nop
  02b3b20  lhz 3, 184(27)
  02b3b24  stfs 1, 68(31)
  02b3b28  extsh 3, 3
  02b3b2c  cmpwi 3, 0
  02b3b30  bf 1, 0x2b3c24
  02b3b34  lfs 1, 20(31)
  02b3b38  lfs 2, 16(31)
  02b3b3c  fsubs 1, 28, 1
  02b3b40  fsubs 2, 27, 2
  02b3b44  lfs 3, 24(31)
  02b3b48  fsubs 3, 29, 3
  02b3b4c  lis 3, 43
  02b3b50  addi 3, 3, 14152
  02b3b54  fmuls 1, 1, 1
  02b3b58  fmadds 1, 2, 2, 1
  02b3b5c  lfs 2, 20(3)
  02b3b60  fmadds 1, 3, 3, 1
  02b3b64  lfs 3, 168(27)
  02b3b68  lwz 3, 0(28)
  02b3b6c  fmuls 2, 3, 2
  02b3b70  fsqrts 1, 1
  02b3b74  fcmpu 0, 1, 2
  02b3b78  cror 6, 1, 2
  02b3b7c  bt 6, 0x2b3ba0
  02b3b80  lhz 3, 186(27)
  02b3b84  addic 5, 3, 1
  02b3b88  lwz 3, 0(28)
  02b3b8c  extsh 4, 5
  02b3b90  cmpw 4, 3
  02b3b94  sth 5, 186(27)
  02b3b98  bf 2, 0x2b3ba0
  02b3b9c  li 29, 1
  02b3ba0  slwi 3, 3, 4
  02b3ba4  lfs 1, 20(31)
  02b3ba8  lfs 2, 16(31)
  02b3bac  lis 4, 43
  02b3bb0  addc 3, 28, 3
  02b3bb4  clrldi 3, 3, 32
  02b3bb8  addic 5, 27, 168
  02b3bbc  lfs 3, 4(3)
  02b3bc0  lfs 4, 0(3)
  02b3bc4  fsubs 1, 1, 3
  02b3bc8  fsubs 2, 2, 4
  02b3bcc  lfs 3, 8(3)
  02b3bd0  lfs 4, 24(31)
  02b3bd4  addi 3, 4, 14152
  02b3bd8  lis 4, 114
  02b3bdc  stw 30, 128(1)
  02b3be0  fsubs 3, 4, 3
  02b3be4  lfs 4, 24(3)
  02b3be8  lfs 5, -3048(4)
  02b3bec  lis 4, 114
  02b3bf0  fmuls 1, 1, 1
  02b3bf4  lfs 6, 28(3)
  02b3bf8  addic 3, 1, 128
  02b3bfc  fmadds 1, 2, 2, 1
  02b3c00  fmuls 2, 5, 4
  02b3c04  lfs 4, -3052(4)
  02b3c08  fmuls 4, 4, 6
  02b3c0c  fmadds 1, 3, 3, 1
  02b3c10  fmr 3, 2
  02b3c14  fsqrts 1, 1
  02b3c18  bl 0x109c30
  02b3c1c  nop
  02b3c20  b 0x2b3cfc
  02b3c24  lfs 1, 20(31)
  02b3c28  lfs 2, 16(31)
  02b3c2c  fsubs 1, 28, 1
  02b3c30  fsubs 2, 27, 2
  02b3c34  lfs 3, 24(31)
  02b3c38  fsubs 3, 29, 3
  02b3c3c  lis 3, 43
  02b3c40  addi 3, 3, 14152
  02b3c44  fmuls 1, 1, 1
  02b3c48  fmadds 1, 2, 2, 1
  02b3c4c  lfs 2, 20(3)
  02b3c50  fmadds 1, 3, 3, 1
  02b3c54  lfs 3, 168(27)
  02b3c58  fmuls 2, 3, 2
  02b3c5c  fsqrts 1, 1
  02b3c60  fcmpu 0, 1, 2
  02b3c64  cror 6, 1, 2
  02b3c68  bt 6, 0x2b3c88
  02b3c6c  lhz 3, 186(27)
  02b3c70  addic 3, 3, -1
  02b3c74  extsh 4, 3
  02b3c78  cmpwi 4, -1
  02b3c7c  sth 3, 186(27)
  02b3c80  bf 2, 0x2b3c88
  02b3c84  li 29, 1
  02b3c88  lfs 1, 20(31)
  02b3c8c  lis 3, 43
  02b3c90  lfs 2, 20(28)
  02b3c94  lis 4, 114
  02b3c98  lfs 3, 16(31)
  02b3c9c  addi 3, 3, 14152
  02b3ca0  fsubs 1, 1, 2
  02b3ca4  lfs 2, 16(28)
  02b3ca8  fsubs 2, 3, 2
  02b3cac  addic 5, 27, 168
  02b3cb0  lfs 3, 24(28)
  02b3cb4  lfs 4, 24(31)
  02b3cb8  stw 30, 132(1)
  02b3cbc  fsubs 3, 4, 3
  02b3cc0  lfs 4, 24(3)
  02b3cc4  lfs 5, -3048(4)
  02b3cc8  fmuls 1, 1, 1
  02b3ccc  lis 4, 114
  02b3cd0  lfs 6, 28(3)
  02b3cd4  addic 3, 1, 132
  02b3cd8  fmadds 1, 2, 2, 1
  02b3cdc  fmuls 2, 5, 4
  02b3ce0  lfs 4, -3052(4)
  02b3ce4  fmuls 4, 4, 6
  02b3ce8  fmadds 1, 3, 3, 1
  02b3cec  fmr 3, 2
  02b3cf0  fsqrts 1, 1
  02b3cf4  bl 0x109c30
  02b3cf8  nop
  02b3cfc  lhz 4, 186(27)
  02b3d00  lis 3, 16936
  02b3d04  extsh 4, 4
  02b3d08  sldi 4, 4, 4
  02b3d0c  addc 4, 28, 4
  02b3d10  clrldi 4, 4, 32
  02b3d14  lwz 4, 28(4)
  02b3d18  cmpw 4, 3
  02b3d1c  bf 2, 0x2b3d24
  02b3d20  stw 30, 188(27)
  02b3d24  lfs 1, 192(27)
  02b3d28  lfs 2, 168(27)
  02b3d2c  bl 0x502578
  02b3d30  nop
  02b3d34  addic 3, 27, 112
  02b3d38  stfs 1, 192(27)
  02b3d3c  li 4, 0
  02b3d40  bl 0x501980
  02b3d44  nop
  02b3d48  lwz 3, 0(28)
  02b3d4c  lfs 2, 20(31)
  02b3d50  slwi 3, 3, 4
  02b3d54  lfs 3, 16(31)
  02b3d58  addc 3, 28, 3
  02b3d5c  clrldi 3, 3, 32
  02b3d60  lfs 1, 4(3)
  02b3d64  lfs 4, 0(3)
  02b3d68  fsubs 1, 2, 1
  02b3d6c  fsubs 4, 3, 4
  02b3d70  lis 3, 43
  02b3d74  addi 3, 3, 14152
  02b3d78  fmuls 1, 1, 1
  02b3d7c  fmadds 1, 4, 4, 1
  02b3d80  fsqrts 4, 1
  02b3d84  lfs 1, 32(3)
  02b3d88  fcmpu 0, 4, 1
  02b3d8c  cror 6, 0, 2
  02b3d90  bt 6, 0x2b3e54
  02b3d94  lfs 4, 20(28)
  02b3d98  lfs 5, 16(28)
  02b3d9c  fsubs 2, 2, 4
  02b3da0  fsubs 3, 3, 5
  02b3da4  fmuls 2, 2, 2
  02b3da8  fmadds 2, 3, 3, 2
  02b3dac  fsqrts 2, 2
  02b3db0  fcmpu 0, 2, 1
  02b3db4  cror 6, 0, 2
  02b3db8  bt 6, 0x2b3e54
  02b3dbc  li 3, 7
  02b3dc0  bl 0xfc620
  02b3dc4  nop
  02b3dc8  cmpwi 3, 0
  02b3dcc  bf 2, 0x2b3e54
  02b3dd0  lfs 1, 16(31)
  02b3dd4  lis 3, 43
  02b3dd8  lfs 2, 20(31)
  02b3ddc  addic 30, 1, 112
  02b3de0  stfs 1, 112(1)
  02b3de4  addi 28, 3, 14152
  02b3de8  lfs 1, 24(31)
  02b3dec  ori 3, 30, 0
  02b3df0  stfs 2, 116(1)
  02b3df4  lfs 2, 28(31)
  02b3df8  stfs 1, 120(1)
  02b3dfc  stfs 2, 124(1)
  02b3e00  lfs 1, 36(28)
  02b3e04  bl 0x110950
  02b3e08  nop
  02b3e0c  lis 3, 16840
  02b3e10  lis 4, 114
  02b3e14  ori 3, 3, 5243
  02b3e18  lis 6, 16400
  02b3e1c  li 5, 0
  02b3e20  ori 6, 6, 12416
  02b3e24  stw 3, 120(1)
  02b3e28  lfs 1, 24(28)
  02b3e2c  ori 3, 30, 0
  02b3e30  lfs 4, 28(28)
  02b3e34  lfs 3, 168(27)
  02b3e38  lfs 5, -3052(4)
  02b3e3c  fmuls 1, 3, 1
  02b3e40  fmuls 3, 5, 4
  02b3e44  lfs 2, 40(28)
  02b3e48  fdivs 1, 1, 3
  02b3e4c  bl 0x12aee8
  02b3e50  nop
  02b3e54  ori 3, 29, 0
  02b3e58  ld 0, 304(1)
  02b3e5c  mtlr 0
  02b3e60  lfd 25, 232(1)
  02b3e64  lfd 26, 240(1)
  02b3e68  lfd 27, 248(1)
  02b3e6c  lfd 28, 256(1)
  02b3e70  lfd 29, 264(1)
  02b3e74  lfd 30, 272(1)
  02b3e78  lfd 31, 280(1)
  02b3e7c  ld 27, 192(1)
  02b3e80  ld 28, 200(1)
  02b3e84  ld 29, 208(1)
  02b3e88  ld 30, 216(1)
  02b3e8c  ld 31, 224(1)
  02b3e90  addi 1, 1, 288
  02b3e94  blr

UpdateMoby_1766:   # 0x2b3ec8, 0x8b8 bytes
  02b3ec8  stdu 1, -240(1)
  02b3ecc  mflr 0
  02b3ed0  std 0, 256(1)
  02b3ed4  stfd 30, 224(1)
  02b3ed8  stfd 31, 232(1)
  02b3edc  std 30, 208(1)
  02b3ee0  lwz 30, 120(3)
  02b3ee4  std 29, 200(1)
  02b3ee8  lfs 1, 16(3)
  02b3eec  lis 29, 165
  02b3ef0  lfs 2, 20(3)
  02b3ef4  cmpwi 30, 0
  02b3ef8  fneg 1, 1
  02b3efc  lfs 3, 24(3)
  02b3f00  fneg 2, 2
  02b3f04  addic 29, 29, 7136
  02b3f08  std 31, 216(1)
  02b3f0c  lwz 4, 172(30)
  02b3f10  ori 31, 3, 0
  02b3f14  fneg 3, 3
  02b3f18  lfs 4, 28(3)
  02b3f1c  slwi 4, 4, 2
  02b3f20  lfs 5, 64(3)
  02b3f24  std 28, 192(1)
  02b3f28  stfs 4, 124(1)
  02b3f2c  extsw 28, 4
  02b3f30  lfs 4, 68(3)
  02b3f34  lwzx 28, 29, 28
  02b3f38  stfs 1, 112(1)
  02b3f3c  stfs 2, 116(1)
  02b3f40  stfs 5, 128(1)
  02b3f44  stfs 3, 120(1)
  02b3f48  lfs 1, 72(3)
  02b3f4c  stfs 4, 132(1)
  02b3f50  lfs 2, 76(3)
  02b3f54  stfs 1, 136(1)
  02b3f58  stfs 2, 140(1)
  02b3f5c  bt 2, 0x2b4758
  02b3f60  lbz 3, 32(31)
  02b3f64  cmpwi 3, 1
  02b3f68  cmpwi 1, 3, 3
  02b3f6c  cmpwi 6, 3, 2
  02b3f70  cmpwi 7, 3, 0
  02b3f74  bt 1, 0x2b3f88
  02b3f78  cmpwi 3, -1
  02b3f7c  bf 1, 0x2b4710
  02b3f80  bf 29, 0x2b3f94
  02b3f84  b 0x2b431c
  02b3f88  bf 25, 0x2b427c
  02b3f8c  bf 5, 0x2b4468
  02b3f90  b 0x2b4710
  02b3f94  li 3, 255
  02b3f98  li 4, -1
  02b3f9c  lis 5, 43
  02b3fa0  li 6, 0
  02b3fa4  stb 3, 48(31)
  02b3fa8  addi 3, 5, 16024
  02b3fac  stw 4, 196(30)
  02b3fb0  lis 7, 16457
  02b3fb4  stw 6, 200(30)
  02b3fb8  ori 4, 7, 4059
  02b3fbc  lwz 5, 160(30)
  02b3fc0  lfs 31, 0(3)
  02b3fc4  cmpwi 5, 0
  02b3fc8  stw 6, 204(30)
  02b3fcc  lfs 30, 4(3)
  02b3fd0  stw 4, 188(30)
  02b3fd4  lfs 1, 72(31)
  02b3fd8  bt 2, 0x2b4268
  02b3fdc  ori 3, 31, 0
  02b3fe0  addic 5, 30, 96
  02b3fe4  li 4, 0
  02b3fe8  bl 0xf0ea8
  02b3fec  nop
  02b3ff0  lwz 3, 172(30)
  02b3ff4  li 4, 1
  02b3ff8  lis 5, 151
  02b3ffc  lbz 7, 176(31)
  02b4000  slwi 3, 3, 2
  02b4004  lis 6, 161
  02b4008  extsw 3, 3
  02b400c  addic 6, 6, -13692
  02b4010  lwzx 29, 29, 3
  02b4014  stb 4, 32(31)
  02b4018  lwz 3, -25488(5)
  02b401c  addc 4, 7, 6
  02b4020  slwi 3, 3, 4
  02b4024  clrldi 4, 4, 32
  02b4028  extsw 3, 3
  02b402c  lbzx 3, 4, 3
  02b4030  cmpwi 3, 255
  02b4034  bf 2, 0x2b4070
  02b4038  li 3, -1
  02b403c  sth 3, 184(30)
  02b4040  lwz 3, 0(29)
  02b4044  addic 3, 3, -2
  02b4048  sth 3, 186(30)
  02b404c  lwz 3, 0(29)
  02b4050  slwi 3, 3, 4
  02b4054  addc 3, 29, 3
  02b4058  clrldi 3, 3, 32
  02b405c  lfs 4, 0(3)
  02b4060  lfs 3, 4(3)
  02b4064  lfs 2, 8(3)
  02b4068  lfs 1, 12(3)
  02b406c  b 0x2b408c
  02b4070  li 3, 1
  02b4074  sth 3, 184(30)
  02b4078  sth 3, 186(30)
  02b407c  lfs 4, 16(29)
  02b4080  lfs 3, 20(29)
  02b4084  lfs 2, 24(29)
  02b4088  lfs 1, 28(29)
  02b408c  lhz 3, 186(30)
  02b4090  stfs 4, 16(31)
  02b4094  extsh 3, 3
  02b4098  stfs 3, 20(31)
  02b409c  sldi 3, 3, 4
  02b40a0  stfs 2, 24(31)
  02b40a4  addc 3, 29, 3
  02b40a8  stfs 1, 28(31)
  02b40ac  clrldi 3, 3, 32
  02b40b0  lfs 1, 16(3)
  02b40b4  lfs 2, 20(3)
  02b40b8  fsubs 1, 1, 4
  02b40bc  fsubs 2, 2, 3
  02b40c0  lis 3, 115
  02b40c4  addic 3, 3, 22784
  02b40c8  fabs 3, 1
  02b40cc  fabs 4, 2
  02b40d0  stfs 1, 144(1)
  02b40d4  stfs 2, 148(1)
  02b40d8  fsubs 1, 3, 4
  02b40dc  stfs 1, 152(1)
  02b40e0  lwz 4, 144(1)
  02b40e4  lfs 1, 144(1)
  02b40e8  lwz 5, 148(1)
  02b40ec  lfs 2, 148(1)
  02b40f0  lwz 6, 152(1)
  02b40f4  rlwinm 5, 5, 3, 29, 29
  02b40f8  fabs 5, 2
  02b40fc  lfs 2, 152(1)
  02b4100  fabs 1, 1
  02b4104  rlwimi 5, 6, 2, 30, 30
  02b4108  fsub 6, 2, 31
  02b410c  fsub 7, 2, 31
  02b4110  rlwimi 5, 4, 4, 28, 28
  02b4114  ori 4, 3, 0
  02b4118  rlwimi 4, 5, 2, 26, 28
  02b411c  slwi 5, 5, 2
  02b4120  clrldi 4, 4, 32
  02b4124  fsel 4, 6, 1, 4
  02b4128  lfsx 1, 3, 5
  02b412c  fsel 3, 7, 5, 3
  02b4130  lfs 2, 4(4)
  02b4134  fcmpu 0, 4, 31
  02b4138  bt 1, 0x2b4140
  02b413c  b 0x2b4260
  02b4140  fsubs 5, 3, 4
  02b4144  fadds 3, 3, 4
  02b4148  addic 3, 1, 16
  02b414c  li 7, 2
  02b4150  addic 4, 3, 140
  02b4154  addic 5, 3, 156
  02b4158  mtctr 7
  02b415c  fdivs 3, 5, 3
  02b4160  fmuls 4, 3, 3
  02b4164  stfs 3, 168(1)
  02b4168  stfs 3, 160(1)
  02b416c  stfs 3, 164(1)
  02b4170  stfs 3, 156(1)
  02b4174  lfs 6, 168(1)
  02b4178  lfs 7, 160(1)
  02b417c  lfs 8, 164(1)
  02b4180  fmuls 5, 4, 4
  02b4184  fmuls 7, 7, 4
  02b4188  fmuls 6, 6, 5
  02b418c  fmuls 3, 5, 5
  02b4190  fmuls 5, 8, 5
  02b4194  stfs 7, 160(1)
  02b4198  fmuls 4, 6, 4
  02b419c  stfs 5, 164(1)
  02b41a0  stfs 4, 168(1)
  02b41a4  lfs 4, 140(3)
  02b41a8  fmuls 4, 4, 3
  02b41ac  stfs 4, 156(3)
  02b41b0  lfs 4, 4(4)
  02b41b4  addic 3, 3, 8
  02b41b8  addic 4, 4, 8
  02b41bc  fmuls 4, 4, 3
  02b41c0  stfs 4, 4(5)
  02b41c4  addic 5, 5, 8
  02b41c8  bdnz 0x2b41a4
  02b41cc  li 5, 4
  02b41d0  ori 3, 1, 0
  02b41d4  mtctr 5
  02b41d8  lis 4, 115
  02b41dc  addic 5, 3, 156
  02b41e0  addic 4, 4, 22752
  02b41e4  ori 6, 5, 0
  02b41e8  lfs 3, 156(3)
  02b41ec  lfs 4, 0(4)
  02b41f0  fmuls 3, 3, 4
  02b41f4  lfs 4, 4(4)
  02b41f8  addic 4, 4, 8
  02b41fc  stfs 3, 156(3)
  02b4200  lfs 3, 4(5)
  02b4204  addic 3, 3, 8
  02b4208  fmuls 3, 3, 4
  02b420c  stfs 3, 4(5)
  02b4210  addic 5, 5, 8
  02b4214  bdnz 0x2b41e8
  02b4218  ori 3, 1, 0
  02b421c  mtctr 7
  02b4220  lfs 3, 156(3)
  02b4224  lfs 4, 4(6)
  02b4228  fadds 3, 31, 3
  02b422c  lfs 5, 8(6)
  02b4230  lfs 31, 12(6)
  02b4234  addic 3, 3, 16
  02b4238  addic 6, 6, 16
  02b423c  fadds 3, 3, 4
  02b4240  fadds 3, 3, 5
  02b4244  fadds 31, 3, 31
  02b4248  bdnz 0x2b4220
  02b424c  lis 3, 43
  02b4250  addi 3, 3, 16024
  02b4254  lfs 3, 8(3)
  02b4258  fadds 31, 31, 3
  02b425c  fmadds 31, 31, 1, 2
  02b4260  fmr 1, 31
  02b4264  stfs 31, 72(31)
  02b4268  fmr 2, 30
  02b426c  bl 0x502578
  02b4270  nop
  02b4274  stfs 1, 72(31)
  02b4278  b 0x2b4710
  02b427c  lis 3, 43
  02b4280  lfs 1, 204(30)
  02b4284  lis 28, 114
  02b4288  addi 29, 3, 16024
  02b428c  addic 4, 30, 216
  02b4290  addic 5, 30, 220
  02b4294  ori 3, 31, 0
  02b4298  lfs 2, 12(29)
  02b429c  lfs 3, 16(29)
  02b42a0  fsubs 2, 2, 1
  02b42a4  fmadds 1, 2, 3, 1
  02b42a8  stfs 1, 204(30)
  02b42ac  lfs 2, 20(29)
  02b42b0  lfs 3, 24(29)
  02b42b4  lfs 4, -3052(28)
  02b42b8  fmuls 1, 1, 2
  02b42bc  fmuls 2, 4, 3
  02b42c0  bl 0x116a68
  02b42c4  nop
  02b42c8  lfs 1, 28(29)
  02b42cc  ori 3, 31, 0
  02b42d0  lfs 2, 32(29)
  02b42d4  addic 4, 30, 208
  02b42d8  lfs 3, 36(29)
  02b42dc  addic 5, 30, 212
  02b42e0  lfs 4, 204(30)
  02b42e4  lfs 5, -3052(28)
  02b42e8  fmuls 1, 4, 1
  02b42ec  fmuls 2, 5, 2
  02b42f0  fmuls 3, 5, 3
  02b42f4  bl 0x116b70
  02b42f8  nop
  02b42fc  lis 3, 151
  02b4300  addic 3, 3, -25376
  02b4304  lwz 3, 764(3)
  02b4308  cmpw 3, 31
  02b430c  bt 2, 0x2b4710
  02b4310  li 3, 1
  02b4314  stb 3, 32(31)
  02b4318  b 0x2b4710
  02b431c  lis 3, 43
  02b4320  lfs 1, 204(30)
  02b4324  lis 28, 114
  02b4328  addi 29, 3, 16024
  02b432c  addic 4, 30, 216
  02b4330  addic 5, 30, 220
  02b4334  ori 3, 31, 0
  02b4338  lfs 2, 12(29)
  02b433c  lfs 3, 16(29)
  02b4340  fsubs 2, 2, 1
  02b4344  fmadds 1, 2, 3, 1
  02b4348  stfs 1, 204(30)
  02b434c  lfs 2, 20(29)
  02b4350  lfs 3, 24(29)
  02b4354  lfs 4, -3052(28)
  02b4358  fmuls 1, 1, 2
  02b435c  fmuls 2, 4, 3
  02b4360  bl 0x116a68
  02b4364  nop
  02b4368  lfs 1, 28(29)
  02b436c  ori 3, 31, 0
  02b4370  lfs 2, 32(29)
  02b4374  addic 4, 30, 208
  02b4378  lfs 3, 36(29)
  02b437c  addic 5, 30, 212
  02b4380  lfs 4, 204(30)
  02b4384  lfs 5, -3052(28)
  02b4388  fmuls 1, 4, 1
  02b438c  fmuls 2, 5, 2
  02b4390  fmuls 3, 5, 3
  02b4394  bl 0x116b70
  02b4398  nop
  02b439c  lwz 3, 200(30)
  02b43a0  cmpwi 3, 0
  02b43a4  bt 2, 0x2b4434
  02b43a8  lhz 3, 184(30)
  02b43ac  extsh 3, 3
  02b43b0  cmpwi 3, 0
  02b43b4  bf 1, 0x2b43f0
  02b43b8  lwz 3, 180(30)
  02b43bc  cmpwi 3, -1
  02b43c0  bt 2, 0x2b43f0
  02b43c4  lis 5, 151
  02b43c8  extsw 4, 3
  02b43cc  addic 3, 5, -25376
  02b43d0  addic 3, 3, 128
  02b43d4  bl 0x110b70
  02b43d8  nop
  02b43dc  cmpwi 3, 0
  02b43e0  bt 2, 0x2b43f0
  02b43e4  li 3, 3
  02b43e8  stb 3, 32(31)
  02b43ec  b 0x2b4434
  02b43f0  lhz 3, 184(30)
  02b43f4  extsh 3, 3
  02b43f8  cmpwi 3, 0
  02b43fc  bf 0, 0x2b4434
  02b4400  lwz 3, 176(30)
  02b4404  cmpwi 3, -1
  02b4408  bt 2, 0x2b4434
  02b440c  lis 5, 151
  02b4410  extsw 4, 3
  02b4414  addic 3, 5, -25376
  02b4418  addic 3, 3, 128
  02b441c  bl 0x110b70
  02b4420  nop
  02b4424  cmpwi 3, 0
  02b4428  bt 2, 0x2b4434
  02b442c  li 3, 3
  02b4430  stb 3, 32(31)
  02b4434  lis 3, 151
  02b4438  addic 3, 3, -25376
  02b443c  lwz 4, 764(3)
  02b4440  cmpw 4, 31
  02b4444  bf 2, 0x2b4710
  02b4448  lhz 3, 782(3)
  02b444c  cmpwi 3, 0
  02b4450  bf 2, 0x2b4710
  02b4454  li 3, 1
  02b4458  li 4, 3
  02b445c  stw 3, 200(30)
  02b4460  stb 4, 32(31)
  02b4464  b 0x2b4710
  02b4468  lis 3, 161
  02b446c  srawi 4, 31, 8
  02b4470  lwz 3, 1808(3)
  02b4474  xor 3, 3, 4
  02b4478  clrlwi 3, 3, 29
  02b447c  cmpwi 3, 0
  02b4480  bf 2, 0x2b44cc
  02b4484  lwz 3, 196(30)
  02b4488  cmpwi 3, -1
  02b448c  bt 2, 0x2b44ac
  02b4490  extsw 4, 3
  02b4494  ori 3, 31, 0
  02b4498  bl 0x15cc7c
  02b449c  nop
  02b44a0  cmpwi 3, 0
  02b44a4  bf 2, 0x2b44cc
  02b44a8  lwz 3, 196(30)
  02b44ac  cmpwi 3, -1
  02b44b0  bf 2, 0x2b44cc
  02b44b4  li 3, 0
  02b44b8  li 4, 4
  02b44bc  ori 5, 31, 0
  02b44c0  bl 0x15d12c
  02b44c4  nop
  02b44c8  stw 3, 196(30)
  02b44cc  lwz 3, 188(30)
  02b44d0  cmpwi 3, 0
  02b44d4  bf 2, 0x2b4664
  02b44d8  lhz 3, 184(30)
  02b44dc  extsh 3, 3
  02b44e0  cmpwi 3, 0
  02b44e4  bf 0, 0x2b45a0
  02b44e8  lwz 3, 180(30)
  02b44ec  cmpwi 3, -1
  02b44f0  bt 2, 0x2b45a0
  02b44f4  lis 5, 151
  02b44f8  extsw 4, 3
  02b44fc  addic 3, 5, -25376
  02b4500  addic 3, 3, 128
  02b4504  bl 0x110b70
  02b4508  nop
  02b450c  cmpwi 3, 0
  02b4510  bt 2, 0x2b45a0
  02b4514  lwz 3, 0(28)
  02b4518  lfs 2, 20(31)
  02b451c  slwi 3, 3, 4
  02b4520  lfs 1, 16(31)
  02b4524  addc 3, 28, 3
  02b4528  clrldi 3, 3, 32
  02b452c  lfs 3, 4(3)
  02b4530  lfs 4, 0(3)
  02b4534  fsubs 3, 2, 3
  02b4538  fsubs 4, 1, 4
  02b453c  lis 3, 43
  02b4540  addi 3, 3, 16024
  02b4544  fmuls 3, 3, 3
  02b4548  fmadds 3, 4, 4, 3
  02b454c  fsqrts 4, 3
  02b4550  lfs 3, 40(3)
  02b4554  fcmpu 0, 4, 3
  02b4558  cror 6, 0, 2
  02b455c  bt 6, 0x2b4664
  02b4560  lfs 4, 20(28)
  02b4564  lfs 5, 16(28)
  02b4568  fsubs 2, 2, 4
  02b456c  fsubs 1, 1, 5
  02b4570  fmuls 2, 2, 2
  02b4574  fmadds 1, 1, 1, 2
  02b4578  fsqrts 1, 1
  02b457c  fcmpu 0, 1, 3
  02b4580  cror 6, 0, 2
  02b4584  bt 6, 0x2b4664
  02b4588  lis 3, 16457
  02b458c  li 4, 1
  02b4590  ori 3, 3, 4059
  02b4594  sth 4, 184(30)
  02b4598  stw 3, 188(30)
  02b459c  b 0x2b4664
  02b45a0  lhz 3, 184(30)
  02b45a4  extsh 3, 3
  02b45a8  cmpwi 3, 0
  02b45ac  bf 1, 0x2b4664
  02b45b0  lwz 3, 176(30)
  02b45b4  cmpwi 3, -1
  02b45b8  bt 2, 0x2b4664
  02b45bc  lis 5, 151
  02b45c0  extsw 4, 3
  02b45c4  addic 3, 5, -25376
  02b45c8  addic 3, 3, 128
  02b45cc  bl 0x110b70
  02b45d0  nop
  02b45d4  cmpwi 3, 0
  02b45d8  bt 2, 0x2b4664
  02b45dc  lwz 3, 0(28)
  02b45e0  lfs 2, 20(31)
  02b45e4  slwi 3, 3, 4
  02b45e8  lfs 1, 16(31)
  02b45ec  addc 3, 28, 3
  02b45f0  clrldi 3, 3, 32
  02b45f4  lfs 3, 4(3)
  02b45f8  lfs 4, 0(3)
  02b45fc  fsubs 3, 2, 3
  02b4600  fsubs 4, 1, 4
  02b4604  lis 3, 43
  02b4608  addi 3, 3, 16024
  02b460c  fmuls 3, 3, 3
  02b4610  fmadds 3, 4, 4, 3
  02b4614  fsqrts 4, 3
  02b4618  lfs 3, 40(3)
  02b461c  fcmpu 0, 4, 3
  02b4620  cror 6, 0, 2
  02b4624  bt 6, 0x2b4664
  02b4628  lfs 4, 20(28)
  02b462c  lfs 5, 16(28)
  02b4630  fsubs 2, 2, 4
  02b4634  fsubs 1, 1, 5
  02b4638  fmuls 2, 2, 2
  02b463c  fmadds 1, 1, 1, 2
  02b4640  fsqrts 1, 1
  02b4644  fcmpu 0, 1, 3
  02b4648  cror 6, 0, 2
  02b464c  bt 6, 0x2b4664
  02b4650  lis 3, 16457
  02b4654  li 4, -1
  02b4658  ori 3, 3, 4059
  02b465c  sth 4, 184(30)
  02b4660  stw 3, 188(30)
  02b4664  ori 3, 31, 0
  02b4668  bl 0x2b3778
  02b466c  cmpwi 3, 0
  02b4670  bt 2, 0x2b4710
  02b4674  lwz 3, 196(30)
  02b4678  cmpwi 3, -1
  02b467c  bt 2, 0x2b46c4
  02b4680  sldi 4, 3, 7
  02b4684  sldi 6, 3, 4
  02b4688  lis 5, 150
  02b468c  subc 4, 4, 6
  02b4690  addic 5, 5, 14312
  02b4694  extsw 4, 4
  02b4698  lwzx 5, 5, 4
  02b469c  cmpw 5, 31
  02b46a0  bf 2, 0x2b46c4
  02b46a4  lis 5, 150
  02b46a8  addic 5, 5, 14292
  02b46ac  lbzx 4, 5, 4
  02b46b0  cmpwi 4, 0
  02b46b4  bt 2, 0x2b46c4
  02b46b8  extsw 3, 3
  02b46bc  bl 0x15cdb0
  02b46c0  nop
  02b46c4  li 4, -1
  02b46c8  li 3, 0
  02b46cc  li 5, 2
  02b46d0  lis 6, 16457
  02b46d4  stw 4, 196(30)
  02b46d8  ori 4, 6, 4059
  02b46dc  stw 3, 204(30)
  02b46e0  stw 3, 220(30)
  02b46e4  stb 5, 32(31)
  02b46e8  lhz 5, 184(30)
  02b46ec  stw 4, 188(30)
  02b46f0  neg 4, 5
  02b46f4  extsh 5, 4
  02b46f8  cmpwi 5, 0
  02b46fc  sth 4, 184(30)
  02b4700  bt 1, 0x2b470c
  02b4704  lwz 3, 0(28)
  02b4708  addic 3, 3, -1
  02b470c  sth 3, 186(30)
  02b4710  lfs 1, 112(1)
  02b4714  lfs 2, 16(31)
  02b4718  addic 3, 30, 32
  02b471c  lfs 3, 116(1)
  02b4720  addic 4, 1, 112
  02b4724  fadds 1, 1, 2
  02b4728  addic 5, 1, 128
  02b472c  lfs 2, 20(31)
  02b4730  addic 6, 31, 64
  02b4734  lfs 4, 120(1)
  02b4738  fadds 2, 3, 2
  02b473c  lfs 3, 24(31)
  02b4740  fadds 3, 4, 3
  02b4744  stfs 1, 112(1)
  02b4748  stfs 2, 116(1)
  02b474c  stfs 3, 120(1)
  02b4750  bl 0x112900
  02b4754  nop
  02b4758  ld 0, 256(1)
  02b475c  mtlr 0
  02b4760  lfd 30, 224(1)
  02b4764  lfd 31, 232(1)
  02b4768  ld 28, 192(1)
  02b476c  ld 29, 200(1)
  02b4770  ld 30, 208(1)
  02b4774  ld 31, 216(1)
  02b4778  addi 1, 1, 240
  02b477c  blr

M1766_002b4780:   # 0x2b4780, 0x14 bytes
  02b4780  lis 3, 123
  02b4784  lis 4, 1
  02b4788  addic 3, 3, 30564
  02b478c  stw 4, 72(3)
  02b4790  blr
