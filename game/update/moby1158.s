# game/update/moby1158.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_001e348c:   # 0x1e348c, 0x14 bytes
  01e348c  lbz 3, 32(3)
  01e3490  addic 3, 3, -5
  01e3494  cntlzw 3, 3
  01e3498  rlwinm 3, 3, 27, 31, 31
  01e349c  blr

M1158_001e34a0:   # 0x1e34a0, 0x14 bytes
  01e34a0  lis 3, 118
  01e34a4  lis 4, 1
  01e34a8  addic 3, 3, 20168
  01e34ac  stw 4, 72(3)
  01e34b0  blr

M1158_001e34b8:   # 0x1e34b8, 0x78 bytes
  01e34b8  lis 4, 165
  01e34bc  lis 6, 164
  01e34c0  addic 7, 4, -28284
  01e34c4  lbz 4, 33(3)
  01e34c8  lis 5, 239
  01e34cc  slwi 8, 4, 2
  01e34d0  lwz 4, -28512(6)
  01e34d4  addic 5, 5, 10568
  01e34d8  lwzx 7, 7, 8
  01e34dc  lhz 8, 0(7)
  01e34e0  lfs 1, 24(3)
  01e34e4  rlwinm 8, 8, 8, 9, 23
  01e34e8  addc 4, 4, 8
  01e34ec  clrldi 4, 4, 32
  01e34f0  stfs 1, 24(4)
  01e34f4  lwz 4, -28512(6)
  01e34f8  lfs 1, 24(3)
  01e34fc  addc 8, 4, 8
  01e3500  clrldi 8, 8, 32
  01e3504  lwz 8, 120(8)
  01e3508  lwz 8, 4(8)
  01e350c  mulli 8, 8, 4512
  01e3510  extsw 8, 8
  01e3514  stfsx 1, 5, 8
  01e3518  lhz 8, 0(7)
  01e351c  addic 7, 7, 2
  01e3520  extsh 8, 8
  01e3524  cmpwi 8, 0
  01e3528  bf 0, 0x1e34dc
  01e352c  blr

M1158_001e3538:   # 0x1e3538, 0x1a0 bytes
  01e3538  mulli 8, 3, 4512
  01e353c  lis 4, 30
  01e3540  lis 7, 239
  01e3544  addi 5, 4, 13616
  01e3548  addic 7, 7, 10560
  01e354c  extsw 8, 8
  01e3550  li 10, 255
  01e3554  addc 4, 7, 8
  01e3558  lfs 2, 0(5)
  01e355c  ori 6, 7, 0
  01e3560  lfs 1, 4(5)
  01e3564  li 9, 0
  01e3568  addic 5, 6, 4
  01e356c  stb 10, 12(4)
  01e3570  stb 10, 14(4)
  01e3574  stb 10, 13(4)
  01e3578  stb 10, 15(4)
  01e357c  stb 10, 16(4)
  01e3580  stb 10, 17(4)
  01e3584  stb 10, 18(4)
  01e3588  stb 10, 19(4)
  01e358c  cmpw 3, 9
  01e3590  bt 2, 0x1e36c0
  01e3594  lfsx 4, 7, 8
  01e3598  lfs 3, 0(6)
  01e359c  fsubs 4, 4, 3
  01e35a0  lfs 3, 4(4)
  01e35a4  lfs 5, 0(5)
  01e35a8  fsubs 3, 3, 5
  01e35ac  fabs 5, 4
  01e35b0  fcmpu 0, 5, 2
  01e35b4  cror 6, 1, 2
  01e35b8  bt 6, 0x1e35f0
  01e35bc  fsubs 4, 3, 1
  01e35c0  fabs 4, 4
  01e35c4  fcmpu 0, 4, 2
  01e35c8  cror 6, 1, 2
  01e35cc  bt 6, 0x1e35d4
  01e35d0  stb 9, 12(4)
  01e35d4  fadds 3, 3, 1
  01e35d8  fabs 3, 3
  01e35dc  fcmpu 0, 3, 2
  01e35e0  cror 6, 1, 2
  01e35e4  bt 6, 0x1e36c0
  01e35e8  stb 9, 14(4)
  01e35ec  b 0x1e36c0
  01e35f0  fabs 5, 3
  01e35f4  fcmpu 0, 5, 2
  01e35f8  cror 6, 1, 2
  01e35fc  bt 6, 0x1e3634
  01e3600  fsubs 3, 4, 1
  01e3604  fabs 3, 3
  01e3608  fcmpu 0, 3, 2
  01e360c  cror 6, 1, 2
  01e3610  bt 6, 0x1e3618
  01e3614  stb 9, 13(4)
  01e3618  fadds 3, 4, 1
  01e361c  fabs 3, 3
  01e3620  fcmpu 0, 3, 2
  01e3624  cror 6, 1, 2
  01e3628  bt 6, 0x1e36c0
  01e362c  stb 9, 15(4)
  01e3630  b 0x1e36c0
  01e3634  fadds 5, 4, 1
  01e3638  fabs 5, 5
  01e363c  fcmpu 0, 5, 2
  01e3640  cror 6, 1, 2
  01e3644  bt 6, 0x1e367c
  01e3648  fsubs 4, 3, 1
  01e364c  fabs 4, 4
  01e3650  fcmpu 0, 4, 2
  01e3654  cror 6, 1, 2
  01e3658  bt 6, 0x1e3660
  01e365c  stb 9, 17(4)
  01e3660  fadds 3, 3, 1
  01e3664  fabs 3, 3
  01e3668  fcmpu 0, 3, 2
  01e366c  cror 6, 1, 2
  01e3670  bt 6, 0x1e36c0
  01e3674  stb 9, 19(4)
  01e3678  b 0x1e36c0
  01e367c  fsubs 4, 4, 1
  01e3680  fabs 4, 4
  01e3684  fcmpu 0, 4, 2
  01e3688  cror 6, 1, 2
  01e368c  bt 6, 0x1e36c0
  01e3690  fsubs 4, 3, 1
  01e3694  fabs 4, 4
  01e3698  fcmpu 0, 4, 2
  01e369c  cror 6, 1, 2
  01e36a0  bt 6, 0x1e36a8
  01e36a4  stb 9, 16(4)
  01e36a8  fadds 3, 3, 1
  01e36ac  fabs 3, 3
  01e36b0  fcmpu 0, 3, 2
  01e36b4  cror 6, 1, 2
  01e36b8  bt 6, 0x1e36c0
  01e36bc  stb 9, 18(4)
  01e36c0  addic 9, 9, 1
  01e36c4  addic 6, 6, 4512
  01e36c8  cmpwi 9, 20
  01e36cc  addic 5, 5, 4512
  01e36d0  bt 0, 0x1e358c
  01e36d4  blr

UpdateMoby_1158:   # 0x1e3720, 0x9b8 bytes
  01e3720  stdu 1, -224(1)
  01e3724  mflr 0
  01e3728  std 0, 240(1)
  01e372c  stfd 30, 208(1)
  01e3730  stfd 31, 216(1)
  01e3734  std 31, 200(1)
  01e3738  lis 4, 149
  01e373c  std 30, 192(1)
  01e3740  ori 31, 3, 0
  01e3744  lwz 30, 120(3)
  01e3748  addic 4, 4, 5056
  01e374c  lis 5, 17204
  01e3750  lwz 3, 328(4)
  01e3754  srawi 4, 3, 31
  01e3758  srwi 6, 4, 1
  01e375c  xor 3, 6, 3
  01e3760  subc 3, 3, 4
  01e3764  std 29, 184(1)
  01e3768  std 28, 176(1)
  01e376c  std 27, 168(1)
  01e3770  std 26, 160(1)
  01e3774  cmpw 3, 5
  01e3778  bt 1, 0x1e37c4
  01e377c  lis 3, 116
  01e3780  li 4, 0
  01e3784  lis 6, 116
  01e3788  lis 5, 116
  01e378c  li 7, 64
  01e3790  stb 4, -22176(3)
  01e3794  lis 8, 116
  01e3798  li 3, 40
  01e379c  lis 9, 116
  01e37a0  li 10, 48
  01e37a4  lis 11, 116
  01e37a8  stb 3, -22175(6)
  01e37ac  lis 6, 116
  01e37b0  stb 7, -22173(5)
  01e37b4  stb 10, -22174(8)
  01e37b8  stb 3, -22171(9)
  01e37bc  stb 4, -22172(11)
  01e37c0  stb 10, -22170(6)
  01e37c4  lbz 3, 32(31)
  01e37c8  cmpwi 3, 1
  01e37cc  cmpwi 1, 3, 3
  01e37d0  cmpwi 6, 3, 2
  01e37d4  cmpwi 7, 3, 0
  01e37d8  bt 1, 0x1e37ec
  01e37dc  cmpwi 3, -1
  01e37e0  bf 1, 0x1e4008
  01e37e4  bf 29, 0x1e37f8
  01e37e8  b 0x1e3cc0
  01e37ec  bf 25, 0x1e3e78
  01e37f0  bf 5, 0x1e3ce4
  01e37f4  b 0x1e4008
  01e37f8  li 3, 255
  01e37fc  lis 4, 241
  01e3800  stb 3, 48(31)
  01e3804  lwz 3, -30232(4)
  01e3808  stw 3, 4(30)
  01e380c  addic 3, 3, 1
  01e3810  cmpwi 3, 127
  01e3814  stw 3, -30232(4)
  01e3818  bf 1, 0x1e382c
  01e381c  lis 3, 101
  01e3820  addic 3, 3, 18528
  01e3824  bl 0x5cd098
  01e3828  nop
  01e382c  li 3, 255
  01e3830  lis 4, 30
  01e3834  lhz 5, 52(31)
  01e3838  addi 4, 4, 14040
  01e383c  stb 3, 48(31)
  01e3840  ori 3, 5, 1
  01e3844  lwz 5, 36(31)
  01e3848  sth 3, 52(31)
  01e384c  lfs 1, 0(4)
  01e3850  lfs 2, 36(5)
  01e3854  lwz 29, 4(30)
  01e3858  fmuls 1, 2, 1
  01e385c  cmpwi 29, 0
  01e3860  stfs 1, 44(31)
  01e3864  bf 2, 0x1e3bd0
  01e3868  lis 28, 239
  01e386c  li 4, 5
  01e3870  addic 28, 28, 10560
  01e3874  li 29, 0
  01e3878  addic 3, 28, 30
  01e387c  li 27, 20
  01e3880  mtctr 4
  01e3884  sth 29, 0(3)
  01e3888  sth 29, 4512(3)
  01e388c  sth 29, 9024(3)
  01e3890  sth 29, 13536(3)
  01e3894  addic 3, 3, 18048
  01e3898  bdnz 0x1e3884
  01e389c  ori 3, 28, 0
  01e38a0  li 4, 20
  01e38a4  bl 0x17b230
  01e38a8  nop
  01e38ac  lis 3, 30
  01e38b0  addi 26, 3, 14040
  01e38b4  lfs 1, 4(26)
  01e38b8  bl 0x17b780
  01e38bc  nop
  01e38c0  lis 3, 162
  01e38c4  lis 6, 116
  01e38c8  addic 3, 3, -9472
  01e38cc  lis 5, 16768
  01e38d0  addic 4, 6, -22016
  01e38d4  lis 9, 16230
  01e38d8  lis 10, 15820
  01e38dc  lwz 7, 16(3)
  01e38e0  lwz 8, 20(3)
  01e38e4  ori 9, 9, 26214
  01e38e8  lfs 1, 16(3)
  01e38ec  lfs 2, 20(3)
  01e38f0  fabs 3, 1
  01e38f4  lis 3, -16128
  01e38f8  fabs 6, 2
  01e38fc  stw 5, -22016(6)
  01e3900  lis 6, 16256
  01e3904  stw 5, 4(4)
  01e3908  ori 5, 10, 52429
  01e390c  stw 3, 8(4)
  01e3910  stw 3, 12(4)
  01e3914  stw 6, 16(4)
  01e3918  stw 6, 20(4)
  01e391c  stw 9, 24(4)
  01e3920  stw 5, 32(4)
  01e3924  rlwinm 3, 8, 3, 29, 29
  01e3928  fsubs 1, 3, 6
  01e392c  lis 5, 115
  01e3930  addic 5, 5, 22784
  01e3934  stfs 1, 112(1)
  01e3938  lfs 4, 8(26)
  01e393c  lwz 6, 112(1)
  01e3940  lfs 1, 112(1)
  01e3944  rlwimi 3, 6, 2, 30, 30
  01e3948  fsub 5, 1, 4
  01e394c  ori 6, 5, 0
  01e3950  fsub 7, 1, 4
  01e3954  rlwimi 3, 7, 4, 28, 28
  01e3958  rlwimi 6, 3, 2, 26, 28
  01e395c  slwi 3, 3, 2
  01e3960  clrldi 6, 6, 32
  01e3964  lfsx 1, 5, 3
  01e3968  fsel 5, 5, 3, 6
  01e396c  lfs 2, 4(6)
  01e3970  fsel 3, 7, 6, 3
  01e3974  fcmpu 0, 5, 4
  01e3978  bt 1, 0x1e3980
  01e397c  b 0x1e3aa0
  01e3980  fsubs 6, 3, 5
  01e3984  fadds 3, 3, 5
  01e3988  addic 3, 1, 16
  01e398c  li 7, 2
  01e3990  addic 5, 3, 100
  01e3994  addic 6, 3, 116
  01e3998  mtctr 7
  01e399c  fdivs 3, 6, 3
  01e39a0  fmuls 5, 3, 3
  01e39a4  stfs 3, 128(1)
  01e39a8  stfs 3, 120(1)
  01e39ac  stfs 3, 124(1)
  01e39b0  stfs 3, 116(1)
  01e39b4  lfs 7, 128(1)
  01e39b8  lfs 8, 120(1)
  01e39bc  lfs 9, 124(1)
  01e39c0  fmuls 6, 5, 5
  01e39c4  fmuls 8, 8, 5
  01e39c8  fmuls 7, 7, 6
  01e39cc  fmuls 3, 6, 6
  01e39d0  fmuls 6, 9, 6
  01e39d4  stfs 8, 120(1)
  01e39d8  fmuls 5, 7, 5
  01e39dc  stfs 6, 124(1)
  01e39e0  stfs 5, 128(1)
  01e39e4  lfs 5, 100(3)
  01e39e8  fmuls 5, 5, 3
  01e39ec  stfs 5, 116(3)
  01e39f0  lfs 5, 4(5)
  01e39f4  addic 3, 3, 8
  01e39f8  addic 5, 5, 8
  01e39fc  fmuls 5, 5, 3
  01e3a00  stfs 5, 4(6)
  01e3a04  addic 6, 6, 8
  01e3a08  bdnz 0x1e39e4
  01e3a0c  li 6, 4
  01e3a10  ori 3, 1, 0
  01e3a14  mtctr 6
  01e3a18  lis 5, 115
  01e3a1c  addic 6, 3, 116
  01e3a20  addic 5, 5, 22752
  01e3a24  ori 8, 6, 0
  01e3a28  lfs 3, 116(3)
  01e3a2c  lfs 5, 0(5)
  01e3a30  fmuls 3, 3, 5
  01e3a34  lfs 5, 4(5)
  01e3a38  addic 5, 5, 8
  01e3a3c  stfs 3, 116(3)
  01e3a40  lfs 3, 4(6)
  01e3a44  addic 3, 3, 8
  01e3a48  fmuls 3, 3, 5
  01e3a4c  stfs 3, 4(6)
  01e3a50  addic 6, 6, 8
  01e3a54  bdnz 0x1e3a28
  01e3a58  ori 3, 1, 0
  01e3a5c  mtctr 7
  01e3a60  lfs 3, 116(3)
  01e3a64  fadds 3, 4, 3
  01e3a68  lfs 4, 4(8)
  01e3a6c  addic 3, 3, 16
  01e3a70  lfs 5, 8(8)
  01e3a74  lfs 6, 12(8)
  01e3a78  addic 8, 8, 16
  01e3a7c  fadds 3, 3, 4
  01e3a80  fadds 4, 3, 5
  01e3a84  fadds 4, 4, 6
  01e3a88  bdnz 0x1e3a60
  01e3a8c  lis 3, 30
  01e3a90  addi 3, 3, 14040
  01e3a94  lfs 3, 12(3)
  01e3a98  fadds 4, 4, 3
  01e3a9c  fmadds 4, 4, 1, 2
  01e3aa0  lis 3, 30
  01e3aa4  addi 3, 3, 14040
  01e3aa8  li 5, 56
  01e3aac  lfs 1, 16(3)
  01e3ab0  lfs 2, 20(3)
  01e3ab4  fadds 1, 4, 1
  01e3ab8  fsubs 5, 2, 4
  01e3abc  lfs 3, 24(3)
  01e3ac0  li 7, 57
  01e3ac4  li 8, 28
  01e3ac8  lis 6, 230
  01e3acc  lis 9, 230
  01e3ad0  fsubs 2, 2, 1
  01e3ad4  fsub 7, 4, 5
  01e3ad8  fsubs 6, 3, 1
  01e3adc  fsubs 3, 3, 4
  01e3ae0  fsub 8, 1, 2
  01e3ae4  fsel 4, 7, 5, 4
  01e3ae8  fsel 1, 8, 2, 1
  01e3aec  fsub 5, 3, 4
  01e3af0  lfs 2, 28(3)
  01e3af4  fsub 7, 6, 1
  01e3af8  fsel 3, 5, 3, 4
  01e3afc  lfs 4, 32(3)
  01e3b00  lfs 5, 36(3)
  01e3b04  lfs 8, 40(3)
  01e3b08  fsel 1, 7, 6, 1
  01e3b0c  fmuls 6, 3, 3
  01e3b10  fmuls 7, 1, 1
  01e3b14  fmuls 9, 6, 3
  01e3b18  fmuls 10, 7, 1
  01e3b1c  fmuls 11, 6, 9
  01e3b20  fmadds 3, 9, 2, 3
  01e3b24  lfs 9, 44(3)
  01e3b28  lis 3, -16621
  01e3b2c  ori 3, 3, 52534
  01e3b30  fmuls 12, 7, 10
  01e3b34  fmadds 1, 10, 2, 1
  01e3b38  fmuls 2, 6, 11
  01e3b3c  fmadds 3, 11, 4, 3
  01e3b40  stw 3, 56(4)
  01e3b44  li 3, 64
  01e3b48  stw 5, 40(4)
  01e3b4c  lis 5, 239
  01e3b50  stw 7, 44(4)
  01e3b54  fmuls 10, 7, 12
  01e3b58  fmadds 1, 12, 4, 1
  01e3b5c  fmuls 4, 6, 2
  01e3b60  fmadds 2, 2, 5, 3
  01e3b64  stb 8, 60(4)
  01e3b68  addic 5, 5, 10240
  01e3b6c  stb 3, 61(4)
  01e3b70  lis 7, 230
  01e3b74  lis 3, 230
  01e3b78  lis 8, 116
  01e3b7c  fmuls 3, 7, 10
  01e3b80  fmadds 1, 10, 5, 1
  01e3b84  fmadds 2, 4, 8, 2
  01e3b88  fmadds 1, 3, 8, 1
  01e3b8c  fmuls 2, 2, 9
  01e3b90  fmuls 1, 1, 9
  01e3b94  stfs 2, 52(4)
  01e3b98  stw 28, -21888(6)
  01e3b9c  lis 6, 18176
  01e3ba0  stw 5, -21884(9)
  01e3ba4  lis 5, 116
  01e3ba8  stw 27, -21880(7)
  01e3bac  lis 7, 17279
  01e3bb0  stw 29, -21856(3)
  01e3bb4  lis 3, 116
  01e3bb8  stw 6, -22168(8)
  01e3bbc  lis 6, 16960
  01e3bc0  lwz 29, 4(30)
  01e3bc4  stw 7, -22164(5)
  01e3bc8  stfs 1, 48(4)
  01e3bcc  stw 6, -22160(3)
  01e3bd0  mulli 3, 29, 4512
  01e3bd4  lwz 5, 4(30)
  01e3bd8  mulli 6, 5, 4512
  01e3bdc  lis 4, 239
  01e3be0  mulli 7, 5, 4512
  01e3be4  extsw 3, 3
  01e3be8  addic 4, 4, 10560
  01e3bec  lfs 1, 16(31)
  01e3bf0  mulli 5, 5, 4512
  01e3bf4  stfsx 1, 4, 3
  01e3bf8  extsw 3, 6
  01e3bfc  lfs 1, 20(31)
  01e3c00  extsw 6, 7
  01e3c04  addc 3, 4, 3
  01e3c08  addc 6, 4, 6
  01e3c0c  li 7, 56
  01e3c10  extsw 5, 5
  01e3c14  stfs 1, 4(3)
  01e3c18  lfs 1, 24(31)
  01e3c1c  stw 7, 20(6)
  01e3c20  lwz 3, 4(30)
  01e3c24  li 6, 57
  01e3c28  mulli 3, 3, 4512
  01e3c2c  li 7, 28
  01e3c30  extsw 3, 3
  01e3c34  addc 3, 4, 3
  01e3c38  addc 5, 4, 5
  01e3c3c  lis 8, 239
  01e3c40  stw 6, 24(3)
  01e3c44  lwz 3, 4(30)
  01e3c48  mulli 3, 3, 4512
  01e3c4c  li 6, 68
  01e3c50  extsw 3, 3
  01e3c54  addc 3, 4, 3
  01e3c58  stb 7, 28(3)
  01e3c5c  lwz 3, 4(30)
  01e3c60  mulli 3, 3, 4512
  01e3c64  lis 7, 0
  01e3c68  extsw 3, 3
  01e3c6c  ori 7, 7, 65535
  01e3c70  addc 3, 4, 3
  01e3c74  stb 6, 29(3)
  01e3c78  stfs 1, 8(5)
  01e3c7c  lwz 3, 4(30)
  01e3c80  mulli 5, 3, 4512
  01e3c84  mulli 6, 3, 4512
  01e3c88  extsw 5, 5
  01e3c8c  addc 6, 4, 6
  01e3c90  addc 4, 4, 5
  01e3c94  addic 5, 8, 10240
  01e3c98  slwi 8, 3, 4
  01e3c9c  clrldi 3, 6, 32
  01e3ca0  addc 5, 5, 8
  01e3ca4  sth 7, 30(4)
  01e3ca8  clrldi 4, 5, 32
  01e3cac  bl 0x17b4b0
  01e3cb0  nop
  01e3cb4  li 3, 1
  01e3cb8  stb 3, 32(31)
  01e3cbc  b 0x1e4008
  01e3cc0  lis 3, 241
  01e3cc4  li 4, 0
  01e3cc8  stw 4, -30232(3)
  01e3ccc  lwz 3, 4(30)
  01e3cd0  extsw 3, 3
  01e3cd4  bl 0x1e3538
  01e3cd8  li 3, 2
  01e3cdc  stb 3, 32(31)
  01e3ce0  b 0x1e4008
  01e3ce4  lbz 3, 188(31)
  01e3ce8  rlwinm 3, 3, 0, 29, 29
  01e3cec  cmpwi 3, 0
  01e3cf0  bt 2, 0x1e3d0c
  01e3cf4  li 3, 1
  01e3cf8  li 4, 2
  01e3cfc  stw 3, 8(30)
  01e3d00  lbz 3, 33(31)
  01e3d04  bl 0x1042ec
  01e3d08  nop
  01e3d0c  li 3, 1
  01e3d10  stb 3, 188(31)
  01e3d14  lwz 3, 8(30)
  01e3d18  cmpwi 3, 0
  01e3d1c  bt 2, 0x1e3dd8
  01e3d20  lis 3, 30
  01e3d24  lis 4, 114
  01e3d28  addi 3, 3, 14040
  01e3d2c  lis 5, 114
  01e3d30  lfs 4, 52(3)
  01e3d34  lfs 2, -3048(4)
  01e3d38  lfs 1, 48(3)
  01e3d3c  fmuls 2, 2, 4
  01e3d40  lfs 3, -3052(5)
  01e3d44  addic 3, 31, 24
  01e3d48  fmuls 4, 3, 4
  01e3d4c  ori 5, 30, 0
  01e3d50  fmr 3, 2
  01e3d54  bl 0x109c30
  01e3d58  nop
  01e3d5c  lbz 3, 33(31)
  01e3d60  lis 4, 165
  01e3d64  lis 5, 164
  01e3d68  addic 6, 4, -28284
  01e3d6c  slwi 3, 3, 2
  01e3d70  lis 4, 239
  01e3d74  lwz 5, -28512(5)
  01e3d78  addic 4, 4, 10560
  01e3d7c  lwzx 3, 6, 3
  01e3d80  lhz 7, 0(3)
  01e3d84  lis 6, 164
  01e3d88  lfs 1, 24(31)
  01e3d8c  rlwinm 7, 7, 8, 9, 23
  01e3d90  addc 5, 5, 7
  01e3d94  clrldi 5, 5, 32
  01e3d98  stfs 1, 24(5)
  01e3d9c  lwz 5, -28512(6)
  01e3da0  lfs 1, 24(31)
  01e3da4  addc 6, 5, 7
  01e3da8  clrldi 6, 6, 32
  01e3dac  lwz 6, 120(6)
  01e3db0  lwz 6, 4(6)
  01e3db4  mulli 6, 6, 4512
  01e3db8  extsw 6, 6
  01e3dbc  addc 6, 4, 6
  01e3dc0  stfs 1, 8(6)
  01e3dc4  lhz 6, 0(3)
  01e3dc8  addic 3, 3, 2
  01e3dcc  extsh 6, 6
  01e3dd0  cmpwi 6, 0
  01e3dd4  bf 0, 0x1e3d80
  01e3dd8  li 3, 200
  01e3ddc  bl 0xfc620
  01e3de0  nop
  01e3de4  cmpwi 3, 0
  01e3de8  bf 2, 0x1e4008
  01e3dec  lis 3, 30
  01e3df0  addi 29, 3, 14040
  01e3df4  lfs 31, 56(29)
  01e3df8  lfs 30, 52(29)
  01e3dfc  fmr 1, 31
  01e3e00  fmr 2, 30
  01e3e04  bl 0xfcbe8
  01e3e08  nop
  01e3e0c  lwz 3, 4(30)
  01e3e10  lis 4, 239
  01e3e14  mulli 3, 3, 4512
  01e3e18  addic 28, 4, 10560
  01e3e1c  extsw 3, 3
  01e3e20  fmr 2, 30
  01e3e24  lfsx 3, 28, 3
  01e3e28  fadds 30, 3, 1
  01e3e2c  fmr 1, 31
  01e3e30  bl 0xfcbe8
  01e3e34  nop
  01e3e38  lwz 3, 4(30)
  01e3e3c  mulli 3, 3, 4512
  01e3e40  lfs 3, 4(29)
  01e3e44  extsw 5, 3
  01e3e48  lfs 4, 60(29)
  01e3e4c  addc 3, 28, 3
  01e3e50  addc 5, 28, 5
  01e3e54  li 4, 1
  01e3e58  li 9, 1
  01e3e5c  clrldi 3, 3, 32
  01e3e60  lfs 2, 4(5)
  01e3e64  fadds 2, 2, 1
  01e3e68  fmr 1, 30
  01e3e6c  bl 0x17bd90
  01e3e70  nop
  01e3e74  b 0x1e4008
  01e3e78  lbz 3, 188(31)
  01e3e7c  rlwinm 3, 3, 0, 28, 28
  01e3e80  cmpwi 3, 0
  01e3e84  bt 2, 0x1e3ea0
  01e3e88  li 3, 1
  01e3e8c  li 4, 3
  01e3e90  stw 3, 8(30)
  01e3e94  lbz 3, 33(31)
  01e3e98  bl 0x1042ec
  01e3e9c  nop
  01e3ea0  li 3, 2
  01e3ea4  stb 3, 188(31)
  01e3ea8  lwz 3, 8(30)
  01e3eac  cmpwi 3, 0
  01e3eb0  bt 2, 0x1e3f6c
  01e3eb4  lis 3, 30
  01e3eb8  lis 4, 114
  01e3ebc  addi 5, 3, 14040
  01e3ec0  lis 6, 114
  01e3ec4  addic 3, 31, 24
  01e3ec8  lfs 4, 52(5)
  01e3ecc  lfs 2, -3048(4)
  01e3ed0  lfs 1, 64(5)
  01e3ed4  fmuls 2, 2, 4
  01e3ed8  lfs 3, -3052(6)
  01e3edc  ori 5, 30, 0
  01e3ee0  fmuls 4, 3, 4
  01e3ee4  fmr 3, 2
  01e3ee8  bl 0x109c30
  01e3eec  nop
  01e3ef0  lis 3, 165
  01e3ef4  lbz 4, 33(31)
  01e3ef8  lis 5, 164
  01e3efc  addic 3, 3, -28284
  01e3f00  slwi 6, 4, 2
  01e3f04  lis 4, 239
  01e3f08  lwz 5, -28512(5)
  01e3f0c  addic 4, 4, 10560
  01e3f10  lwzx 3, 3, 6
  01e3f14  lhz 7, 0(3)
  01e3f18  lis 6, 164
  01e3f1c  lfs 1, 24(31)
  01e3f20  rlwinm 7, 7, 8, 9, 23
  01e3f24  addc 5, 5, 7
  01e3f28  clrldi 5, 5, 32
  01e3f2c  stfs 1, 24(5)
  01e3f30  lwz 5, -28512(6)
  01e3f34  lfs 1, 24(31)
  01e3f38  addc 6, 5, 7
  01e3f3c  clrldi 6, 6, 32
  01e3f40  lwz 6, 120(6)
  01e3f44  lwz 6, 4(6)
  01e3f48  mulli 6, 6, 4512
  01e3f4c  extsw 6, 6
  01e3f50  addc 6, 4, 6
  01e3f54  stfs 1, 8(6)
  01e3f58  lhz 6, 0(3)
  01e3f5c  addic 3, 3, 2
  01e3f60  extsh 6, 6
  01e3f64  cmpwi 6, 0
  01e3f68  bf 0, 0x1e3f14
  01e3f6c  li 3, 200
  01e3f70  bl 0xfc620
  01e3f74  nop
  01e3f78  cmpwi 3, 0
  01e3f7c  bf 2, 0x1e4008
  01e3f80  lis 3, 30
  01e3f84  addi 29, 3, 14040
  01e3f88  lfs 31, 56(29)
  01e3f8c  lfs 30, 52(29)
  01e3f90  fmr 1, 31
  01e3f94  fmr 2, 30
  01e3f98  bl 0xfcbe8
  01e3f9c  nop
  01e3fa0  lwz 3, 4(30)
  01e3fa4  mulli 3, 3, 4512
  01e3fa8  lis 4, 239
  01e3fac  extsw 3, 3
  01e3fb0  fmr 2, 30
  01e3fb4  addic 28, 4, 10560
  01e3fb8  lfsx 3, 28, 3
  01e3fbc  fadds 30, 3, 1
  01e3fc0  fmr 1, 31
  01e3fc4  bl 0xfcbe8
  01e3fc8  nop
  01e3fcc  lwz 3, 4(30)
  01e3fd0  li 9, 1
  01e3fd4  mulli 3, 3, 4512
  01e3fd8  lfs 3, 4(29)
  01e3fdc  extsw 4, 3
  01e3fe0  lfs 4, 60(29)
  01e3fe4  addc 3, 28, 3
  01e3fe8  addc 5, 28, 4
  01e3fec  li 4, 1
  01e3ff0  clrldi 3, 3, 32
  01e3ff4  lfs 2, 4(5)
  01e3ff8  fadds 2, 2, 1
  01e3ffc  fmr 1, 30
  01e4000  bl 0x17bd90
  01e4004  nop
  01e4008  lwz 3, 4(30)
  01e400c  cmpwi 3, -1
  01e4010  bf 1, 0x1e40a8
  01e4014  lis 3, 30
  01e4018  addi 4, 3, 14040
  01e401c  ori 3, 31, 0
  01e4020  lfs 31, 8(4)
  01e4024  lfs 1, 68(4)
  01e4028  fmr 30, 31
  01e402c  bl 0x1129d0
  01e4030  nop
  01e4034  cmpwi 3, -1
  01e4038  lwz 4, 4(30)
  01e403c  bt 2, 0x1e404c
  01e4040  lis 3, 30
  01e4044  addi 3, 3, 14040
  01e4048  lfs 31, 4(3)
  01e404c  fcmpu 0, 31, 30
  01e4050  lis 3, 0
  01e4054  ori 3, 3, 65535
  01e4058  bf 2, 0x1e4060
  01e405c  li 3, 0
  01e4060  mulli 4, 4, 4512
  01e4064  lis 5, 239
  01e4068  ori 6, 3, 0
  01e406c  extsw 4, 4
  01e4070  addic 3, 5, 10560
  01e4074  lwz 5, 4(30)
  01e4078  addc 4, 3, 4
  01e407c  cmpwi 5, 0
  01e4080  sth 6, 30(4)
  01e4084  bf 2, 0x1e40a8
  01e4088  li 4, 20
  01e408c  bl 0x17b8b8
  01e4090  nop
  01e4094  lis 3, 113
  01e4098  ori 4, 31, 0
  01e409c  addic 3, 3, -28592
  01e40a0  bl 0x6d720
  01e40a4  nop
  01e40a8  ld 0, 240(1)
  01e40ac  mtlr 0
  01e40b0  lfd 30, 208(1)
  01e40b4  lfd 31, 216(1)
  01e40b8  ld 26, 160(1)
  01e40bc  ld 27, 168(1)
  01e40c0  ld 28, 176(1)
  01e40c4  ld 29, 184(1)
  01e40c8  ld 30, 192(1)
  01e40cc  ld 31, 200(1)
  01e40d0  addi 1, 1, 224
  01e40d4  blr
