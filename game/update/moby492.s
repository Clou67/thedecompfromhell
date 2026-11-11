# game/update/moby492.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1782_003a372c:   # 0x3a372c, 0x14 bytes
  03a372c  lis 3, 132
  03a3730  lis 4, 1
  03a3734  addic 3, 3, 13152
  03a3738  stw 4, 72(3)
  03a373c  blr

UpdateMoby_492:   # 0x3a3750, 0x164 bytes
  03a3750  stdu 1, -144(1)
  03a3754  mflr 0
  03a3758  std 0, 160(1)
  03a375c  std 31, 136(1)
  03a3760  ori 31, 3, 0
  03a3764  lis 3, 151
  03a3768  addic 3, 3, -25376
  03a376c  lfs 1, 20(31)
  03a3770  lfs 2, 16(31)
  03a3774  lfs 3, 132(3)
  03a3778  lfs 4, 128(3)
  03a377c  fsubs 1, 3, 1
  03a3780  fsubs 2, 4, 2
  03a3784  lfs 3, 136(3)
  03a3788  lfs 4, 24(31)
  03a378c  fsubs 3, 3, 4
  03a3790  lis 4, 58
  03a3794  fmuls 1, 1, 1
  03a3798  addi 4, 4, 14144
  03a379c  fmadds 1, 2, 2, 1
  03a37a0  lfs 2, 0(4)
  03a37a4  fmadds 1, 3, 3, 1
  03a37a8  fsqrts 1, 1
  03a37ac  fcmpu 0, 1, 2
  03a37b0  cror 6, 1, 2
  03a37b4  bt 6, 0x3a3840
  03a37b8  lfs 1, 260(3)
  03a37bc  lfs 2, 256(3)
  03a37c0  fmuls 1, 1, 1
  03a37c4  lfs 3, 264(3)
  03a37c8  lis 4, 114
  03a37cc  lis 3, 58
  03a37d0  addi 3, 3, 14144
  03a37d4  fmadds 1, 2, 2, 1
  03a37d8  lfs 2, 4(3)
  03a37dc  fmadds 1, 3, 3, 1
  03a37e0  lfs 3, -3052(4)
  03a37e4  fmuls 2, 3, 2
  03a37e8  fsqrts 1, 1
  03a37ec  fcmpu 0, 1, 2
  03a37f0  cror 6, 0, 2
  03a37f4  bt 6, 0x3a3840
  03a37f8  lbz 3, 83(31)
  03a37fc  cmpwi 3, 1
  03a3800  bt 2, 0x3a3840
  03a3804  lis 3, 58
  03a3808  lis 4, 114
  03a380c  addi 3, 3, 14144
  03a3810  li 5, 0
  03a3814  lfs 1, 8(3)
  03a3818  lfs 2, -3056(4)
  03a381c  ori 3, 31, 0
  03a3820  fmuls 1, 2, 1
  03a3824  li 4, 1
  03a3828  fctiwz 1, 1
  03a382c  stfd 1, 112(1)
  03a3830  lwz 6, 116(1)
  03a3834  extsw 6, 6
  03a3838  bl 0xfddc0
  03a383c  nop
  03a3840  lbz 3, 112(31)
  03a3844  rlwinm 3, 3, 0, 30, 30
  03a3848  cmpwi 3, 0
  03a384c  bt 2, 0x3a38a0
  03a3850  lbz 3, 83(31)
  03a3854  cmpwi 1, 3, 0
  03a3858  cmpwi 3, 1
  03a385c  crorc 2, 6, 2
  03a3860  bt 2, 0x3a38a0
  03a3864  lis 3, 58
  03a3868  lis 4, 114
  03a386c  addi 3, 3, 14144
  03a3870  li 5, 0
  03a3874  lfs 1, 8(3)
  03a3878  lfs 2, -3056(4)
  03a387c  ori 3, 31, 0
  03a3880  fmuls 1, 2, 1
  03a3884  li 4, 0
  03a3888  fctiwz 1, 1
  03a388c  stfd 1, 112(1)
  03a3890  lwz 6, 116(1)
  03a3894  extsw 6, 6
  03a3898  bl 0xfddc0
  03a389c  nop
  03a38a0  ld 0, 160(1)
  03a38a4  mtlr 0
  03a38a8  ld 31, 136(1)
  03a38ac  addi 1, 1, 144
  03a38b0  blr

M1782_003a38b4:   # 0x3a38b4, 0x14 bytes
  03a38b4  lis 3, 132
  03a38b8  lis 4, 1
  03a38bc  addic 3, 3, 13264
  03a38c0  stw 4, 72(3)
  03a38c4  blr
