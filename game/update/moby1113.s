# game/update/moby1113.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1113:   # 0x1d37b8, 0x3ec bytes
  01d37b8  stdu 1, -416(1)
  01d37bc  mflr 0
  01d37c0  std 0, 432(1)
  01d37c4  stfd 14, 272(1)
  01d37c8  stfd 15, 280(1)
  01d37cc  stfd 16, 288(1)
  01d37d0  stfd 17, 296(1)
  01d37d4  stfd 18, 304(1)
  01d37d8  stfd 19, 312(1)
  01d37dc  stfd 20, 320(1)
  01d37e0  stfd 21, 328(1)
  01d37e4  stfd 22, 336(1)
  01d37e8  stfd 23, 344(1)
  01d37ec  stfd 24, 352(1)
  01d37f0  stfd 25, 360(1)
  01d37f4  stfd 26, 368(1)
  01d37f8  stfd 27, 376(1)
  01d37fc  stfd 28, 384(1)
  01d3800  stfd 29, 392(1)
  01d3804  stfd 30, 400(1)
  01d3808  stfd 31, 408(1)
  01d380c  std 31, 264(1)
  01d3810  ori 31, 3, 0
  01d3814  lis 4, 3
  01d3818  std 30, 256(1)
  01d381c  li 5, 0
  01d3820  std 29, 248(1)
  01d3824  std 28, 240(1)
  01d3828  std 27, 232(1)
  01d382c  std 26, 224(1)
  01d3830  lwz 30, 120(31)
  01d3834  bl 0x10675c
  01d3838  nop
  01d383c  ori 29, 3, 0
  01d3840  cmpwi 29, 0
  01d3844  bt 2, 0x1d3b2c
  01d3848  lwz 3, 32(29)
  01d384c  cmpwi 3, 0
  01d3850  bt 2, 0x1d3b2c
  01d3854  lhz 4, 166(3)
  01d3858  cmpwi 4, 1045
  01d385c  cmpwi 1, 4, 1106
  01d3860  bf 2, 0x1d3884
  01d3864  lbz 4, 32(3)
  01d3868  cmpwi 4, 8
  01d386c  bf 2, 0x1d3884
  01d3870  lis 4, 16256
  01d3874  lwz 5, 44(29)
  01d3878  ori 4, 4, 1032
  01d387c  cmpw 5, 4
  01d3880  bt 2, 0x1d38a8
  01d3884  bf 6, 0x1d3b2c
  01d3888  lbz 3, 32(3)
  01d388c  cmpwi 3, 9
  01d3890  bf 2, 0x1d3b2c
  01d3894  lis 3, 16256
  01d3898  lwz 4, 44(29)
  01d389c  ori 3, 3, 1032
  01d38a0  cmpw 4, 3
  01d38a4  bf 2, 0x1d3b2c
  01d38a8  lfs 3, 8(30)
  01d38ac  lfs 1, 212(31)
  01d38b0  lfs 5, 4(30)
  01d38b4  fmuls 21, 1, 3
  01d38b8  lfs 1, 208(31)
  01d38bc  li 28, 0
  01d38c0  lfs 4, 196(31)
  01d38c4  fmuls 20, 1, 3
  01d38c8  lfs 22, 12(30)
  01d38cc  ori 27, 28, 0
  01d38d0  lfs 6, 192(31)
  01d38d4  lfs 2, 228(31)
  01d38d8  lfs 7, 216(31)
  01d38dc  lfs 1, 224(31)
  01d38e0  fmuls 3, 7, 3
  01d38e4  fmadds 21, 4, 5, 21
  01d38e8  lfs 7, 200(31)
  01d38ec  lfs 4, 232(31)
  01d38f0  fmadds 20, 6, 5, 20
  01d38f4  lwz 3, 0(30)
  01d38f8  cmpwi 3, 0
  01d38fc  fmadds 3, 7, 5, 3
  01d3900  fmadds 6, 2, 22, 21
  01d3904  fmadds 14, 1, 22, 20
  01d3908  stfs 6, 208(1)
  01d390c  bf 1, 0x1d3abc
  01d3910  lis 3, 29
  01d3914  fnmadds 20, 1, 22, 20
  01d3918  fnmadds 21, 2, 22, 21
  01d391c  addi 3, 3, 14216
  01d3920  fmadds 22, 4, 22, 3
  01d3924  lfs 31, 0(3)
  01d3928  lfs 15, 4(3)
  01d392c  lfs 16, 8(3)
  01d3930  lfs 17, 12(3)
  01d3934  lfs 23, 16(3)
  01d3938  lfs 18, 20(3)
  01d393c  lfs 24, 24(3)
  01d3940  lfs 19, 28(3)
  01d3944  fmr 1, 20
  01d3948  fmr 2, 14
  01d394c  bl 0xfcbe8
  01d3950  nop
  01d3954  fmr 25, 1
  01d3958  fmr 1, 21
  01d395c  lfs 2, 208(1)
  01d3960  bl 0xfcbe8
  01d3964  nop
  01d3968  fmr 26, 1
  01d396c  fmr 1, 15
  01d3970  fmr 2, 22
  01d3974  bl 0xfcbe8
  01d3978  nop
  01d397c  lis 4, 114
  01d3980  lfs 28, 16(31)
  01d3984  fmr 27, 1
  01d3988  lfs 29, 20(31)
  01d398c  addic 3, 1, 192
  01d3990  lfs 30, 24(31)
  01d3994  lfs 2, -3052(4)
  01d3998  fmuls 1, 2, 16
  01d399c  fmuls 2, 2, 17
  01d39a0  bl 0xfea60
  01d39a4  nop
  01d39a8  lwz 3, 200(1)
  01d39ac  lfs 2, 200(1)
  01d39b0  cmpwi 3, 0
  01d39b4  bf 0, 0x1d39c0
  01d39b8  fneg 2, 2
  01d39bc  stfs 2, 200(1)
  01d39c0  lis 3, 114
  01d39c4  lfs 1, -3052(3)
  01d39c8  fmuls 3, 1, 23
  01d39cc  fcmpu 0, 2, 3
  01d39d0  cror 6, 1, 2
  01d39d4  bt 6, 0x1d39e0
  01d39d8  fmadds 1, 1, 23, 2
  01d39dc  stfs 1, 200(1)
  01d39e0  lis 3, 21845
  01d39e4  fmr 1, 18
  01d39e8  stfs 22, 212(1)
  01d39ec  fmr 2, 31
  01d39f0  ori 3, 3, 21846
  01d39f4  mulhw 3, 3, 28
  01d39f8  srwi 4, 3, 31
  01d39fc  addc 3, 3, 4
  01d3a00  addc 4, 3, 3
  01d3a04  addc 3, 3, 4
  01d3a08  subc 3, 28, 3
  01d3a0c  addic 3, 3, 696
  01d3a10  extsw 26, 3
  01d3a14  bl 0xfcbe8
  01d3a18  nop
  01d3a1c  fmr 22, 1
  01d3a20  li 3, 50
  01d3a24  li 4, 80
  01d3a28  bl 0xfe484
  01d3a2c  nop
  01d3a30  fmadds 1, 25, 31, 28
  01d3a34  fmadds 2, 26, 31, 29
  01d3a38  fadds 3, 27, 30
  01d3a3c  stfs 1, 48(1)
  01d3a40  stfs 2, 52(1)
  01d3a44  stfs 3, 56(1)
  01d3a48  lfs 2, 192(1)
  01d3a4c  lfs 3, 200(1)
  01d3a50  ori 9, 3, 0
  01d3a54  stfs 2, 64(1)
  01d3a58  ori 7, 26, 0
  01d3a5c  stfs 3, 72(1)
  01d3a60  fmr 4, 19
  01d3a64  stfs 1, 60(1)
  01d3a68  fmr 3, 24
  01d3a6c  lfs 1, 196(1)
  01d3a70  ld 4, 48(1)
  01d3a74  ld 5, 56(1)
  01d3a78  stfs 1, 68(1)
  01d3a7c  lfs 2, 204(1)
  01d3a80  ori 3, 4, 0
  01d3a84  ori 4, 5, 0
  01d3a88  fmr 1, 22
  01d3a8c  stfs 2, 76(1)
  01d3a90  std 27, 128(1)
  01d3a94  ld 5, 64(1)
  01d3a98  ld 6, 72(1)
  01d3a9c  fmr 2, 24
  01d3aa0  bl 0x425540
  01d3aa4  nop
  01d3aa8  lwz 3, 0(30)
  01d3aac  addic 28, 28, 1
  01d3ab0  lfs 22, 212(1)
  01d3ab4  cmpw 28, 3
  01d3ab8  bt 0, 0x1d3944
  01d3abc  lis 3, 29
  01d3ac0  li 6, 1
  01d3ac4  addi 5, 3, 14216
  01d3ac8  li 7, -1
  01d3acc  ori 3, 31, 0
  01d3ad0  addic 4, 29, 16
  01d3ad4  li 8, 10
  01d3ad8  lfs 2, 24(5)
  01d3adc  lfs 1, 32(5)
  01d3ae0  li 9, 3
  01d3ae4  lfs 3, 36(5)
  01d3ae8  li 10, 16
  01d3aec  lfs 4, 16(5)
  01d3af0  fmr 6, 2
  01d3af4  lfs 5, 40(5)
  01d3af8  lfs 7, 44(5)
  01d3afc  std 27, 144(1)
  01d3b00  ori 5, 29, 0
  01d3b04  std 6, 160(1)
  01d3b08  std 6, 168(1)
  01d3b0c  std 7, 176(1)
  01d3b10  std 27, 184(1)
  01d3b14  bl 0x10e030
  01d3b18  nop
  01d3b1c  ori 3, 31, 0
  01d3b20  bl 0xefb38
  01d3b24  nop
  01d3b28  b 0x1d3b34
  01d3b2c  li 3, 255
  01d3b30  stb 3, 164(31)
  01d3b34  ld 0, 432(1)
  01d3b38  mtlr 0
  01d3b3c  lfd 14, 272(1)
  01d3b40  lfd 15, 280(1)
  01d3b44  lfd 16, 288(1)
  01d3b48  lfd 17, 296(1)
  01d3b4c  lfd 18, 304(1)
  01d3b50  lfd 19, 312(1)
  01d3b54  lfd 20, 320(1)
  01d3b58  lfd 21, 328(1)
  01d3b5c  lfd 22, 336(1)
  01d3b60  lfd 23, 344(1)
  01d3b64  lfd 24, 352(1)
  01d3b68  lfd 25, 360(1)
  01d3b6c  lfd 26, 368(1)
  01d3b70  lfd 27, 376(1)
  01d3b74  lfd 28, 384(1)
  01d3b78  lfd 29, 392(1)
  01d3b7c  lfd 30, 400(1)
  01d3b80  lfd 31, 408(1)
  01d3b84  ld 26, 224(1)
  01d3b88  ld 27, 232(1)
  01d3b8c  ld 28, 240(1)
  01d3b90  ld 29, 248(1)
  01d3b94  ld 30, 256(1)
  01d3b98  ld 31, 264(1)
  01d3b9c  addi 1, 1, 416
  01d3ba0  blr
