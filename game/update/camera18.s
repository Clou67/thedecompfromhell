# game/update/camera18.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_CAMERA_UNK:   # 0x3e274, 0x14 bytes
  003e274  lis 3, 114
  003e278  lis 4, 1
  003e27c  addic 3, 3, -9656
  003e280  stw 4, 72(3)
  003e284  blr

Cam18_IsTriggered:   # 0x3e288, 0x1e4 bytes
  003e288  stdu 1, -112(1)
  003e28c  mflr 0
  003e290  std 0, 128(1)
  003e294  lis 4, 149
  003e298  lhz 3, 132(3)
  003e29c  lis 5, 149
  003e2a0  extsh 3, 3
  003e2a4  addic 5, 5, 5056
  003e2a8  lwz 4, 16468(4)
  003e2ac  sldi 3, 3, 5
  003e2b0  addc 3, 4, 3
  003e2b4  clrldi 3, 3, 32
  003e2b8  lwz 5, 604(5)
  003e2bc  cmpwi 5, 0
  003e2c0  lwz 3, 28(3)
  003e2c4  lwz 4, 72(3)
  003e2c8  cmpw 1, 5, 4
  003e2cc  crorc 2, 2, 6
  003e2d0  bt 2, 0x3e2dc
  003e2d4  li 3, 1
  003e2d8  b 0x3e45c
  003e2dc  lhz 5, 60(3)
  003e2e0  cmpwi 5, 6
  003e2e4  bf 2, 0x3e304
  003e2e8  lis 3, 151
  003e2ec  addic 3, 3, -25376
  003e2f0  lwz 3, 764(3)
  003e2f4  subc 3, 3, 4
  003e2f8  cntlzw 3, 3
  003e2fc  rlwinm 3, 3, 27, 31, 31
  003e300  b 0x3e45c
  003e304  lbz 5, 34(3)
  003e308  cmpwi 5, 1
  003e30c  bf 2, 0x3e36c
  003e310  lis 5, 151
  003e314  lfs 1, 20(4)
  003e318  addic 5, 5, -25376
  003e31c  lfs 2, 132(5)
  003e320  lfs 3, 128(5)
  003e324  fsubs 1, 2, 1
  003e328  lfs 2, 16(4)
  003e32c  fsubs 2, 3, 2
  003e330  lfs 3, 136(5)
  003e334  lfs 4, 24(4)
  003e338  fsubs 3, 3, 4
  003e33c  fmuls 1, 1, 1
  003e340  fmadds 1, 2, 2, 1
  003e344  lfs 2, 36(3)
  003e348  fmadds 1, 3, 3, 1
  003e34c  fsqrts 1, 1
  003e350  fcmpu 0, 1, 2
  003e354  cror 6, 1, 2
  003e358  bt 6, 0x3e364
  003e35c  li 3, 1
  003e360  b 0x3e45c
  003e364  li 3, 0
  003e368  b 0x3e45c
  003e36c  lwz 4, 12(3)
  003e370  cmpwi 4, 0
  003e374  bt 0, 0x3e3a0
  003e378  lis 3, 151
  003e37c  extsw 4, 4
  003e380  addic 3, 3, -25376
  003e384  addic 3, 3, 128
  003e388  bl 0x110b70
  003e38c  nop
  003e390  cmpwi 3, 0
  003e394  bt 2, 0x3e458
  003e398  li 3, 1
  003e39c  b 0x3e45c
  003e3a0  lwz 4, 16(3)
  003e3a4  cmpwi 4, 0
  003e3a8  bt 0, 0x3e3d4
  003e3ac  lis 3, 151
  003e3b0  extsw 4, 4
  003e3b4  addic 3, 3, -25376
  003e3b8  addic 3, 3, 128
  003e3bc  bl 0x110c60
  003e3c0  nop
  003e3c4  cmpwi 3, 0
  003e3c8  bt 2, 0x3e458
  003e3cc  li 3, 1
  003e3d0  b 0x3e45c
  003e3d4  lwz 4, 8(3)
  003e3d8  cmpwi 4, 0
  003e3dc  bt 0, 0x3e408
  003e3e0  lis 3, 151
  003e3e4  extsw 4, 4
  003e3e8  addic 3, 3, -25376
  003e3ec  addic 3, 3, 128
  003e3f0  bl 0x110d48
  003e3f4  nop
  003e3f8  cmpwi 3, 0
  003e3fc  bt 2, 0x3e458
  003e400  li 3, 1
  003e404  b 0x3e45c
  003e408  lwz 3, 20(3)
  003e40c  cmpwi 3, 0
  003e410  bt 0, 0x3e458
  003e414  lis 4, 165
  003e418  slwi 3, 3, 2
  003e41c  addic 4, 4, 7136
  003e420  extsw 3, 3
  003e424  lis 5, 151
  003e428  addic 5, 5, -25376
  003e42c  lwzx 6, 4, 3
  003e430  addic 3, 5, 128
  003e434  addic 4, 6, 16
  003e438  lwz 5, 0(6)
  003e43c  extsw 5, 5
  003e440  bl 0x104e44
  003e444  nop
  003e448  cmpwi 3, 0
  003e44c  bt 2, 0x3e458
  003e450  li 3, 1
  003e454  b 0x3e45c
  003e458  li 3, 0
  003e45c  ld 0, 128(1)
  003e460  mtlr 0
  003e464  addi 1, 1, 112
  003e468  blr

???_Cam18_ModifyFollowRot:   # 0x3e488, 0x590 bytes
  003e488  stdu 1, -288(1)
  003e48c  mflr 0
  003e490  std 0, 304(1)
  003e494  stfd 21, 200(1)
  003e498  stfd 22, 208(1)
  003e49c  stfd 23, 216(1)
  003e4a0  stfd 24, 224(1)
  003e4a4  stfd 25, 232(1)
  003e4a8  stfd 26, 240(1)
  003e4ac  stfd 27, 248(1)
  003e4b0  stfd 28, 256(1)
  003e4b4  stfd 29, 264(1)
  003e4b8  stfd 30, 272(1)
  003e4bc  stfd 31, 280(1)
  003e4c0  lis 4, 4
  003e4c4  lis 5, 149
  003e4c8  lhz 3, 132(3)
  003e4cc  addi 4, 4, -7060
  003e4d0  fmr 31, 1
  003e4d4  extsh 3, 3
  003e4d8  fmr 30, 2
  003e4dc  lis 6, 149
  003e4e0  sldi 3, 3, 5
  003e4e4  lfs 21, 0(4)
  003e4e8  lwz 4, 16468(5)
  003e4ec  addic 5, 6, 5056
  003e4f0  fcmpu 1, 2, 21
  003e4f4  addc 3, 4, 3
  003e4f8  fcmpu 0, 1, 21
  003e4fc  clrldi 3, 3, 32
  003e500  lwz 4, 384(5)
  003e504  lfs 25, 448(5)
  003e508  lfs 24, 452(5)
  003e50c  lwz 3, 28(3)
  003e510  crnand 2, 2, 6
  003e514  lwz 3, 72(3)
  003e518  lfs 23, 456(5)
  003e51c  bt 2, 0x3e528
  003e520  li 3, 1
  003e524  b 0x3e9dc
  003e528  lfs 1, 20(3)
  003e52c  lfs 2, 52(4)
  003e530  lfs 3, 16(3)
  003e534  fsubs 28, 1, 2
  003e538  lfs 1, 48(4)
  003e53c  fsubs 29, 3, 1
  003e540  lfs 1, 24(3)
  003e544  lfs 3, 4(4)
  003e548  lfs 2, 56(4)
  003e54c  fmuls 4, 3, 24
  003e550  fsubs 27, 1, 2
  003e554  lfs 5, 0(4)
  003e558  lfs 6, 8(4)
  003e55c  fmuls 1, 28, 24
  003e560  fmadds 2, 5, 25, 4
  003e564  fmadds 1, 29, 25, 1
  003e568  fmadds 2, 6, 23, 2
  003e56c  fmadds 1, 27, 23, 1
  003e570  fnmsubs 28, 24, 1, 28
  003e574  fnmsubs 24, 24, 2, 3
  003e578  fnmsubs 29, 25, 1, 29
  003e57c  fnmsubs 25, 25, 2, 5
  003e580  fnmsubs 27, 23, 1, 27
  003e584  fnmsubs 23, 23, 2, 6
  003e588  fmuls 3, 28, 28
  003e58c  fmuls 4, 24, 24
  003e590  fmadds 3, 29, 29, 3
  003e594  fmadds 4, 25, 25, 4
  003e598  fmadds 26, 27, 27, 3
  003e59c  fmadds 22, 23, 23, 4
  003e5a0  fsqrts 26, 26
  003e5a4  fsqrts 22, 22
  003e5a8  bt 6, 0x3e918
  003e5ac  fabs 5, 26
  003e5b0  fabs 6, 1
  003e5b4  stfs 26, 124(1)
  003e5b8  stfs 1, 128(1)
  003e5bc  lis 3, 115
  003e5c0  lis 4, 4
  003e5c4  addic 3, 3, 22784
  003e5c8  addi 4, 4, -7060
  003e5cc  fsubs 3, 5, 6
  003e5d0  stfs 3, 132(1)
  003e5d4  lwz 5, 124(1)
  003e5d8  lfs 1, 124(1)
  003e5dc  lwz 6, 128(1)
  003e5e0  lfs 3, 128(1)
  003e5e4  fabs 1, 1
  003e5e8  lwz 7, 132(1)
  003e5ec  rlwinm 6, 6, 3, 29, 29
  003e5f0  lfs 4, 132(1)
  003e5f4  fabs 3, 3
  003e5f8  rlwimi 6, 7, 2, 30, 30
  003e5fc  fsub 7, 4, 21
  003e600  fsub 4, 4, 21
  003e604  rlwimi 6, 5, 4, 28, 28
  003e608  ori 5, 3, 0
  003e60c  rlwimi 5, 6, 2, 26, 28
  003e610  slwi 6, 6, 2
  003e614  clrldi 5, 5, 32
  003e618  fsel 6, 7, 1, 6
  003e61c  lfsx 1, 3, 6
  003e620  fsel 5, 4, 3, 5
  003e624  lfs 3, 4(5)
  003e628  lfs 4, 4(4)
  003e62c  fcmpu 0, 6, 21
  003e630  bt 1, 0x3e63c
  003e634  fmr 1, 21
  003e638  b 0x3e754
  003e63c  fsubs 7, 5, 6
  003e640  fadds 5, 5, 6
  003e644  addic 4, 1, 16
  003e648  li 7, 2
  003e64c  addic 6, 4, 168
  003e650  addic 5, 4, 152
  003e654  mtctr 7
  003e658  fdivs 5, 7, 5
  003e65c  fmuls 6, 5, 5
  003e660  stfs 5, 180(1)
  003e664  stfs 5, 172(1)
  003e668  stfs 5, 176(1)
  003e66c  stfs 5, 168(1)
  003e670  lfs 8, 180(1)
  003e674  lfs 9, 172(1)
  003e678  lfs 10, 176(1)
  003e67c  fmuls 7, 6, 6
  003e680  fmuls 9, 9, 6
  003e684  fmuls 8, 8, 7
  003e688  fmuls 5, 7, 7
  003e68c  fmuls 7, 10, 7
  003e690  stfs 9, 172(1)
  003e694  fmuls 6, 8, 6
  003e698  stfs 7, 176(1)
  003e69c  stfs 6, 180(1)
  003e6a0  lfs 6, 152(4)
  003e6a4  fmuls 6, 6, 5
  003e6a8  stfs 6, 168(4)
  003e6ac  lfs 6, 4(5)
  003e6b0  addic 5, 5, 8
  003e6b4  fmuls 6, 6, 5
  003e6b8  addic 4, 4, 8
  003e6bc  stfs 6, 4(6)
  003e6c0  addic 6, 6, 8
  003e6c4  bdnz 0x3e6a0
  003e6c8  li 6, 4
  003e6cc  ori 4, 1, 0
  003e6d0  mtctr 6
  003e6d4  lis 5, 115
  003e6d8  addic 6, 4, 168
  003e6dc  addic 5, 5, 22752
  003e6e0  ori 8, 6, 0
  003e6e4  lfs 5, 168(4)
  003e6e8  lfs 6, 0(5)
  003e6ec  fmuls 5, 5, 6
  003e6f0  lfs 6, 4(5)
  003e6f4  addic 5, 5, 8
  003e6f8  stfs 5, 168(4)
  003e6fc  lfs 5, 4(6)
  003e700  addic 4, 4, 8
  003e704  fmuls 5, 5, 6
  003e708  stfs 5, 4(6)
  003e70c  addic 6, 6, 8
  003e710  bdnz 0x3e6e4
  003e714  ori 4, 1, 0
  003e718  fmr 5, 21
  003e71c  mtctr 7
  003e720  lfs 6, 168(4)
  003e724  fadds 5, 5, 6
  003e728  lfs 6, 4(8)
  003e72c  addic 4, 4, 16
  003e730  lfs 7, 8(8)
  003e734  lfs 8, 12(8)
  003e738  addic 8, 8, 16
  003e73c  fadds 5, 5, 6
  003e740  fadds 5, 5, 7
  003e744  fadds 5, 5, 8
  003e748  bdnz 0x3e720
  003e74c  fadds 5, 5, 4
  003e750  fmadds 1, 5, 1, 3
  003e754  fabs 5, 22
  003e758  fabs 6, 2
  003e75c  stfs 22, 112(1)
  003e760  stfs 2, 116(1)
  003e764  fsubs 3, 5, 6
  003e768  stfs 3, 120(1)
  003e76c  lwz 4, 112(1)
  003e770  lfs 2, 112(1)
  003e774  lwz 5, 116(1)
  003e778  lfs 3, 116(1)
  003e77c  fabs 2, 2
  003e780  lwz 6, 120(1)
  003e784  rlwinm 5, 5, 3, 29, 29
  003e788  lfs 7, 120(1)
  003e78c  fabs 3, 3
  003e790  rlwimi 5, 6, 2, 30, 30
  003e794  fsub 8, 7, 21
  003e798  fsub 7, 7, 21
  003e79c  rlwimi 5, 4, 4, 28, 28
  003e7a0  ori 4, 3, 0
  003e7a4  rlwimi 4, 5, 2, 26, 28
  003e7a8  slwi 5, 5, 2
  003e7ac  clrldi 4, 4, 32
  003e7b0  fsel 6, 8, 2, 6
  003e7b4  lfsx 2, 3, 5
  003e7b8  fsel 5, 7, 3, 5
  003e7bc  lfs 3, 4(4)
  003e7c0  fcmpu 0, 6, 21
  003e7c4  bt 1, 0x3e7d0
  003e7c8  fmr 4, 21
  003e7cc  b 0x3e8e8
  003e7d0  fsubs 7, 5, 6
  003e7d4  fadds 5, 5, 6
  003e7d8  addic 3, 1, 16
  003e7dc  li 6, 2
  003e7e0  addic 4, 3, 120
  003e7e4  addic 5, 3, 136
  003e7e8  mtctr 6
  003e7ec  fdivs 5, 7, 5
  003e7f0  fmuls 6, 5, 5
  003e7f4  stfs 5, 148(1)
  003e7f8  stfs 5, 140(1)
  003e7fc  stfs 5, 144(1)
  003e800  stfs 5, 136(1)
  003e804  lfs 8, 148(1)
  003e808  lfs 9, 140(1)
  003e80c  lfs 10, 144(1)
  003e810  fmuls 7, 6, 6
  003e814  fmuls 9, 9, 6
  003e818  fmuls 8, 8, 7
  003e81c  fmuls 5, 7, 7
  003e820  fmuls 7, 10, 7
  003e824  stfs 9, 140(1)
  003e828  fmuls 6, 8, 6
  003e82c  stfs 7, 144(1)
  003e830  stfs 6, 148(1)
  003e834  lfs 6, 120(3)
  003e838  fmuls 6, 6, 5
  003e83c  stfs 6, 136(3)
  003e840  lfs 6, 4(4)
  003e844  addic 3, 3, 8
  003e848  addic 4, 4, 8
  003e84c  fmuls 6, 6, 5
  003e850  stfs 6, 4(5)
  003e854  addic 5, 5, 8
  003e858  bdnz 0x3e834
  003e85c  li 5, 4
  003e860  ori 3, 1, 0
  003e864  mtctr 5
  003e868  lis 4, 115
  003e86c  addic 5, 3, 136
  003e870  addic 4, 4, 22752
  003e874  ori 7, 5, 0
  003e878  lfs 5, 136(3)
  003e87c  lfs 6, 0(4)
  003e880  fmuls 5, 5, 6
  003e884  lfs 6, 4(4)
  003e888  addic 4, 4, 8
  003e88c  stfs 5, 136(3)
  003e890  lfs 5, 4(5)
  003e894  addic 3, 3, 8
  003e898  fmuls 5, 5, 6
  003e89c  stfs 5, 4(5)
  003e8a0  addic 5, 5, 8
  003e8a4  bdnz 0x3e878
  003e8a8  fmr 5, 21
  003e8ac  ori 3, 1, 0
  003e8b0  mtctr 6
  003e8b4  lfs 6, 136(3)
  003e8b8  fadds 5, 5, 6
  003e8bc  addic 3, 3, 16
  003e8c0  lfs 6, 4(7)
  003e8c4  lfs 7, 8(7)
  003e8c8  lfs 8, 12(7)
  003e8cc  addic 7, 7, 16
  003e8d0  fadds 5, 5, 6
  003e8d4  fadds 5, 5, 7
  003e8d8  fadds 5, 5, 8
  003e8dc  bdnz 0x3e8b4
  003e8e0  fadds 4, 5, 4
  003e8e4  fmadds 4, 4, 2, 3
  003e8e8  fmr 2, 4
  003e8ec  bl 0x5026a0
  003e8f0  nop
  003e8f4  lis 3, 4
  003e8f8  addi 3, 3, -7060
  003e8fc  lfs 2, 8(3)
  003e900  fmuls 2, 30, 2
  003e904  fcmpu 0, 1, 2
  003e908  cror 6, 0, 2
  003e90c  bt 6, 0x3e918
  003e910  li 3, 0
  003e914  b 0x3e9dc
  003e918  fcmpu 0, 31, 21
  003e91c  bf 2, 0x3e928
  003e920  li 3, 1
  003e924  b 0x3e9dc
  003e928  fmuls 1, 26, 22
  003e92c  fmuls 2, 28, 24
  003e930  fcmpu 0, 1, 21
  003e934  fmadds 29, 29, 25, 2
  003e938  fmadds 29, 27, 23, 29
  003e93c  bf 2, 0x3e948
  003e940  li 3, 0
  003e944  b 0x3e9dc
  003e948  fdivs 1, 29, 1
  003e94c  lis 3, 4
  003e950  lis 4, 115
  003e954  addi 3, 3, -7060
  003e958  addic 5, 4, 22720
  003e95c  lfs 2, 12(3)
  003e960  lfs 3, 16(3)
  003e964  lfs 4, 22720(4)
  003e968  lfs 5, 4(5)
  003e96c  lfs 6, 8(5)
  003e970  lfs 7, 12(5)
  003e974  lfs 8, 20(3)
  003e978  lfs 9, 8(3)
  003e97c  fmuls 9, 31, 9
  003e980  fabs 10, 1
  003e984  fsub 11, 1, 21
  003e988  fsel 10, 11, 1, 10
  003e98c  fsub 1, 1, 21
  003e990  fsubs 11, 2, 10
  003e994  fmadds 4, 10, 5, 4
  003e998  fmuls 12, 10, 10
  003e99c  fsel 1, 1, 2, 3
  003e9a0  fsub 13, 11, 21
  003e9a4  fmuls 10, 12, 10
  003e9a8  fmadds 4, 12, 6, 4
  003e9ac  fsel 5, 13, 11, 21
  003e9b0  fmadds 4, 10, 7, 4
  003e9b4  fsqrts 5, 5
  003e9b8  fnmsubs 2, 4, 5, 8
  003e9bc  fnmsubs 1, 2, 1, 8
  003e9c0  fabs 1, 1
  003e9c4  fcmpu 0, 1, 9
  003e9c8  cror 6, 1, 2
  003e9cc  bt 6, 0x3e9d8
  003e9d0  li 3, 1
  003e9d4  b 0x3e9dc
  003e9d8  li 3, 0
  003e9dc  ld 0, 304(1)
  003e9e0  mtlr 0
  003e9e4  lfd 21, 200(1)
  003e9e8  lfd 22, 208(1)
  003e9ec  lfd 23, 216(1)
  003e9f0  lfd 24, 224(1)
  003e9f4  lfd 25, 232(1)
  003e9f8  lfd 26, 240(1)
  003e9fc  lfd 27, 248(1)
  003ea00  lfd 28, 256(1)
  003ea04  lfd 29, 264(1)
  003ea08  lfd 30, 272(1)
  003ea0c  lfd 31, 280(1)
  003ea10  addi 1, 1, 288
  003ea14  blr

Cam18_ModifyFollowCam:   # 0x3eaa8, 0x102c bytes
  003eaa8  stdu 1, -432(1)
  003eaac  mflr 0
  003eab0  std 0, 448(1)
  003eab4  stfd 29, 408(1)
  003eab8  stfd 30, 416(1)
  003eabc  stfd 31, 424(1)
  003eac0  addi 0, 1, 272
  003eac4  stvx 29, 0, 0
  003eac8  addic 0, 0, 16
  003eacc  stvx 30, 0, 0
  003ead0  addic 0, 0, 16
  003ead4  stvx 31, 0, 0
  003ead8  lis 4, 149
  003eadc  std 31, 400(1)
  003eae0  lhz 5, 132(3)
  003eae4  ori 31, 3, 0
  003eae8  extsh 5, 5
  003eaec  lwz 4, 16468(4)
  003eaf0  sldi 5, 5, 5
  003eaf4  std 30, 392(1)
  003eaf8  addc 4, 4, 5
  003eafc  clrldi 30, 4, 32
  003eb00  lwz 30, 28(30)
  003eb04  lwz 3, 80(30)
  003eb08  std 29, 384(1)
  003eb0c  std 28, 376(1)
  003eb10  std 27, 368(1)
  003eb14  std 26, 360(1)
  003eb18  std 25, 352(1)
  003eb1c  std 24, 344(1)
  003eb20  std 23, 336(1)
  003eb24  std 22, 328(1)
  003eb28  cmpwi 3, 0
  003eb2c  bt 2, 0x3eb48
  003eb30  li 4, 0
  003eb34  ori 3, 31, 0
  003eb38  sth 4, 32(30)
  003eb3c  bl 0x32bd4
  003eb40  nop
  003eb44  b 0x3fa78
  003eb48  lwz 3, 68(30)
  003eb4c  cmpwi 3, 0
  003eb50  bt 0, 0x3ebdc
  003eb54  lis 4, 165
  003eb58  slwi 3, 3, 2
  003eb5c  addic 4, 4, -28284
  003eb60  extsw 3, 3
  003eb64  lis 5, 164
  003eb68  lwzx 3, 4, 3
  003eb6c  lwz 4, -28512(5)
  003eb70  cmpwi 3, 0
  003eb74  bf 2, 0x3eb90
  003eb78  li 4, -1
  003eb7c  ori 3, 31, 0
  003eb80  sth 4, 32(30)
  003eb84  bl 0x32bd4
  003eb88  nop
  003eb8c  b 0x3fa78
  003eb90  lhz 5, 0(3)
  003eb94  rlwinm 5, 5, 8, 9, 23
  003eb98  addc 29, 4, 5
  003eb9c  clrldi 29, 29, 32
  003eba0  lbz 5, 32(29)
  003eba4  cmpwi 5, 128
  003eba8  bf 0, 0x3ebb0
  003ebac  b 0x3ec18
  003ebb0  lhz 5, 0(3)
  003ebb4  addic 3, 3, 2
  003ebb8  extsh 5, 5
  003ebbc  cmpwi 5, 0
  003ebc0  bf 0, 0x3eb90
  003ebc4  li 4, -1
  003ebc8  ori 3, 31, 0
  003ebcc  sth 4, 32(30)
  003ebd0  bl 0x32bd4
  003ebd4  nop
  003ebd8  b 0x3fa78
  003ebdc  lis 3, 164
  003ebe0  lwz 4, 40(30)
  003ebe4  slwi 4, 4, 8
  003ebe8  lwz 3, -28512(3)
  003ebec  addc 29, 3, 4
  003ebf0  clrldi 29, 29, 32
  003ebf4  lbz 3, 32(29)
  003ebf8  cmpwi 3, 128
  003ebfc  bt 0, 0x3ec18
  003ec00  li 4, -1
  003ec04  ori 3, 31, 0
  003ec08  sth 4, 32(30)
  003ec0c  bl 0x32bd4
  003ec10  nop
  003ec14  b 0x3fa78
  003ec18  lhz 3, 60(30)
  003ec1c  stw 29, 72(30)
  003ec20  cmpwi 3, 6
  003ec24  bf 2, 0x3ec54
  003ec28  lis 3, 151
  003ec2c  addic 3, 3, -25376
  003ec30  lwz 3, 764(3)
  003ec34  cmpw 3, 29
  003ec38  bt 2, 0x3ec54
  003ec3c  li 4, 0
  003ec40  ori 3, 31, 0
  003ec44  sth 4, 32(30)
  003ec48  bl 0x32bd4
  003ec4c  nop
  003ec50  b 0x3fa78
  003ec54  ori 3, 31, 0
  003ec58  bl 0x32c24
  003ec5c  nop
  003ec60  cmpwi 3, 0
  003ec64  bt 1, 0x3ec74
  003ec68  li 3, 0
  003ec6c  sth 3, 32(30)
  003ec70  b 0x3fa78
  003ec74  ori 3, 31, 0
  003ec78  bl 0x3e288
  003ec7c  lis 4, 149
  003ec80  lhz 5, 132(31)
  003ec84  cmpwi 3, 0
  003ec88  lwz 4, 16468(4)
  003ec8c  bf 2, 0x3eca8
  003ec90  li 4, 0
  003ec94  ori 3, 31, 0
  003ec98  sth 4, 32(30)
  003ec9c  bl 0x32bd4
  003eca0  nop
  003eca4  b 0x3fa78
  003eca8  lhz 3, 60(30)
  003ecac  cmpwi 3, 5
  003ecb0  bf 2, 0x3ef0c
  003ecb4  lis 3, 149
  003ecb8  addic 3, 3, 5056
  003ecbc  lis 8, 115
  003ecc0  lwz 3, 384(3)
  003ecc4  lwz 6, 0(3)
  003ecc8  lwz 7, 4(3)
  003eccc  lfs 1, 0(3)
  003ecd0  lfs 2, 4(3)
  003ecd4  fabs 3, 1
  003ecd8  lis 3, 4
  003ecdc  fabs 2, 2
  003ece0  addi 3, 3, -5608
  003ece4  rlwinm 7, 7, 3, 29, 29
  003ece8  fsubs 1, 3, 2
  003ecec  stfs 1, 144(1)
  003ecf0  lfs 4, 0(3)
  003ecf4  addic 3, 8, 22784
  003ecf8  lwz 8, 144(1)
  003ecfc  lfs 1, 144(1)
  003ed00  rlwimi 7, 8, 2, 30, 30
  003ed04  fsub 5, 1, 4
  003ed08  fsub 6, 1, 4
  003ed0c  rlwimi 7, 6, 4, 28, 28
  003ed10  ori 6, 3, 0
  003ed14  rlwimi 6, 7, 2, 26, 28
  003ed18  slwi 7, 7, 2
  003ed1c  clrldi 6, 6, 32
  003ed20  fsel 5, 5, 3, 2
  003ed24  lfsx 1, 3, 7
  003ed28  fsel 3, 6, 2, 3
  003ed2c  lfs 2, 4(6)
  003ed30  fcmpu 0, 5, 4
  003ed34  bt 1, 0x3ed3c
  003ed38  b 0x3ee5c
  003ed3c  fsubs 6, 3, 5
  003ed40  fadds 3, 3, 5
  003ed44  addic 3, 1, 16
  003ed48  li 8, 2
  003ed4c  addic 6, 3, 196
  003ed50  addic 7, 3, 212
  003ed54  mtctr 8
  003ed58  fdivs 3, 6, 3
  003ed5c  fmuls 5, 3, 3
  003ed60  stfs 3, 224(1)
  003ed64  stfs 3, 216(1)
  003ed68  stfs 3, 220(1)
  003ed6c  stfs 3, 212(1)
  003ed70  lfs 7, 224(1)
  003ed74  lfs 8, 216(1)
  003ed78  lfs 9, 220(1)
  003ed7c  fmuls 6, 5, 5
  003ed80  fmuls 8, 8, 5
  003ed84  fmuls 7, 7, 6
  003ed88  fmuls 3, 6, 6
  003ed8c  fmuls 6, 9, 6
  003ed90  stfs 8, 216(1)
  003ed94  fmuls 5, 7, 5
  003ed98  stfs 6, 220(1)
  003ed9c  stfs 5, 224(1)
  003eda0  lfs 5, 196(3)
  003eda4  fmuls 5, 5, 3
  003eda8  stfs 5, 212(3)
  003edac  lfs 5, 4(6)
  003edb0  addic 3, 3, 8
  003edb4  addic 6, 6, 8
  003edb8  fmuls 5, 5, 3
  003edbc  stfs 5, 4(7)
  003edc0  addic 7, 7, 8
  003edc4  bdnz 0x3eda0
  003edc8  li 7, 4
  003edcc  ori 3, 1, 0
  003edd0  mtctr 7
  003edd4  lis 6, 115
  003edd8  addic 7, 3, 212
  003eddc  addic 6, 6, 22752
  003ede0  ori 9, 7, 0
  003ede4  lfs 3, 212(3)
  003ede8  lfs 5, 0(6)
  003edec  fmuls 3, 3, 5
  003edf0  lfs 5, 4(6)
  003edf4  addic 6, 6, 8
  003edf8  stfs 3, 212(3)
  003edfc  lfs 3, 4(7)
  003ee00  addic 3, 3, 8
  003ee04  fmuls 3, 3, 5
  003ee08  stfs 3, 4(7)
  003ee0c  addic 7, 7, 8
  003ee10  bdnz 0x3ede4
  003ee14  ori 3, 1, 0
  003ee18  mtctr 8
  003ee1c  lfs 3, 212(3)
  003ee20  fadds 3, 4, 3
  003ee24  lfs 4, 4(9)
  003ee28  addic 3, 3, 16
  003ee2c  lfs 5, 8(9)
  003ee30  lfs 6, 12(9)
  003ee34  addic 9, 9, 16
  003ee38  fadds 3, 3, 4
  003ee3c  fadds 4, 3, 5
  003ee40  fadds 4, 4, 6
  003ee44  bdnz 0x3ee1c
  003ee48  lis 3, 4
  003ee4c  addi 3, 3, -5608
  003ee50  lfs 3, 4(3)
  003ee54  fadds 4, 4, 3
  003ee58  fmadds 4, 4, 1, 2
  003ee5c  lhz 3, 32(30)
  003ee60  extsh 3, 3
  003ee64  cmpwi 3, 2
  003ee68  bf 0, 0x3ee88
  003ee6c  extsh 3, 5
  003ee70  sldi 3, 3, 5
  003ee74  addc 3, 4, 3
  003ee78  clrldi 3, 3, 32
  003ee7c  lfs 1, 24(3)
  003ee80  stfs 1, 64(30)
  003ee84  b 0x3eec8
  003ee88  lis 3, 150
  003ee8c  lis 4, 16025
  003ee90  ori 4, 4, 39322
  003ee94  lwz 3, 19008(3)
  003ee98  clrlwi 3, 3, 1
  003ee9c  cmpw 3, 4
  003eea0  bf 0, 0x3eec4
  003eea4  lis 3, 150
  003eea8  lis 4, 16025
  003eeac  addic 3, 3, 19008
  003eeb0  ori 4, 4, 39322
  003eeb4  lwz 3, 4(3)
  003eeb8  clrlwi 3, 3, 1
  003eebc  cmpw 3, 4
  003eec0  bt 0, 0x3eec8
  003eec4  stfs 4, 64(30)
  003eec8  lfs 31, 64(30)
  003eecc  fmr 2, 4
  003eed0  fmr 1, 31
  003eed4  bl 0x5026a0
  003eed8  nop
  003eedc  lis 3, 4
  003eee0  addi 3, 3, -5608
  003eee4  lfs 2, 8(3)
  003eee8  fcmpu 0, 1, 2
  003eeec  cror 6, 0, 2
  003eef0  bt 6, 0x3ef0c
  003eef4  lis 3, 4
  003eef8  fmr 1, 31
  003eefc  addi 3, 3, -5608
  003ef00  lfs 2, 12(3)
  003ef04  bl 0x502578
  003ef08  nop
  003ef0c  lhz 3, 60(30)
  003ef10  cmpwi 3, 4
  003ef14  bf 2, 0x3f128
  003ef18  lis 3, 149
  003ef1c  lis 4, 149
  003ef20  lhz 5, 132(31)
  003ef24  addic 3, 3, 5056
  003ef28  extsh 5, 5
  003ef2c  sldi 5, 5, 5
  003ef30  lwz 3, 384(3)
  003ef34  lwz 4, 16468(4)
  003ef38  lwz 6, 0(3)
  003ef3c  lwz 7, 4(3)
  003ef40  lfs 1, 0(3)
  003ef44  lfs 2, 4(3)
  003ef48  fabs 3, 1
  003ef4c  fabs 2, 2
  003ef50  addc 3, 4, 5
  003ef54  lis 4, 4
  003ef58  clrldi 3, 3, 32
  003ef5c  lis 5, 115
  003ef60  lfs 31, 24(3)
  003ef64  addi 3, 4, -5608
  003ef68  fsubs 1, 3, 2
  003ef6c  rlwinm 4, 7, 3, 29, 29
  003ef70  stfs 1, 140(1)
  003ef74  lfs 4, 0(3)
  003ef78  addic 3, 5, 22784
  003ef7c  lwz 5, 140(1)
  003ef80  lfs 1, 140(1)
  003ef84  rlwimi 4, 5, 2, 30, 30
  003ef88  fsub 5, 1, 4
  003ef8c  fsub 6, 1, 4
  003ef90  rlwimi 4, 6, 4, 28, 28
  003ef94  ori 5, 3, 0
  003ef98  rlwimi 5, 4, 2, 26, 28
  003ef9c  slwi 4, 4, 2
  003efa0  clrldi 5, 5, 32
  003efa4  fsel 5, 5, 3, 2
  003efa8  lfsx 1, 3, 4
  003efac  fsel 3, 6, 2, 3
  003efb0  lfs 2, 4(5)
  003efb4  fcmpu 0, 5, 4
  003efb8  bt 1, 0x3efc0
  003efbc  b 0x3f0e0
  003efc0  fsubs 6, 3, 5
  003efc4  fadds 3, 3, 5
  003efc8  addic 3, 1, 16
  003efcc  li 6, 2
  003efd0  addic 5, 3, 180
  003efd4  addic 4, 3, 164
  003efd8  mtctr 6
  003efdc  fdivs 3, 6, 3
  003efe0  fmuls 5, 3, 3
  003efe4  stfs 3, 192(1)
  003efe8  stfs 3, 184(1)
  003efec  stfs 3, 188(1)
  003eff0  stfs 3, 180(1)
  003eff4  lfs 7, 192(1)
  003eff8  lfs 8, 184(1)
  003effc  lfs 9, 188(1)
  003f000  fmuls 6, 5, 5
  003f004  fmuls 8, 8, 5
  003f008  fmuls 7, 7, 6
  003f00c  fmuls 3, 6, 6
  003f010  fmuls 6, 9, 6
  003f014  stfs 8, 184(1)
  003f018  fmuls 5, 7, 5
  003f01c  stfs 6, 188(1)
  003f020  stfs 5, 192(1)
  003f024  lfs 5, 164(3)
  003f028  fmuls 5, 5, 3
  003f02c  stfs 5, 180(3)
  003f030  lfs 5, 4(4)
  003f034  addic 4, 4, 8
  003f038  fmuls 5, 5, 3
  003f03c  addic 3, 3, 8
  003f040  stfs 5, 4(5)
  003f044  addic 5, 5, 8
  003f048  bdnz 0x3f024
  003f04c  li 5, 4
  003f050  ori 3, 1, 0
  003f054  mtctr 5
  003f058  lis 4, 115
  003f05c  addic 5, 3, 180
  003f060  addic 4, 4, 22752
  003f064  ori 7, 5, 0
  003f068  lfs 3, 180(3)
  003f06c  lfs 5, 0(4)
  003f070  fmuls 3, 3, 5
  003f074  lfs 5, 4(4)
  003f078  addic 4, 4, 8
  003f07c  stfs 3, 180(3)
  003f080  lfs 3, 4(5)
  003f084  addic 3, 3, 8
  003f088  fmuls 3, 3, 5
  003f08c  stfs 3, 4(5)
  003f090  addic 5, 5, 8
  003f094  bdnz 0x3f068
  003f098  ori 3, 1, 0
  003f09c  mtctr 6
  003f0a0  lfs 3, 180(3)
  003f0a4  fadds 3, 4, 3
  003f0a8  addic 3, 3, 16
  003f0ac  lfs 4, 4(7)
  003f0b0  lfs 5, 8(7)
  003f0b4  lfs 6, 12(7)
  003f0b8  addic 7, 7, 16
  003f0bc  fadds 3, 3, 4
  003f0c0  fadds 4, 3, 5
  003f0c4  fadds 4, 4, 6
  003f0c8  bdnz 0x3f0a0
  003f0cc  lis 3, 4
  003f0d0  addi 3, 3, -5608
  003f0d4  lfs 3, 4(3)
  003f0d8  fadds 4, 4, 3
  003f0dc  fmadds 4, 4, 1, 2
  003f0e0  fmr 1, 31
  003f0e4  fmr 2, 4
  003f0e8  bl 0x5026a0
  003f0ec  nop
  003f0f0  lis 3, 4
  003f0f4  addi 3, 3, -5608
  003f0f8  lfs 2, 8(3)
  003f0fc  fcmpu 0, 1, 2
  003f100  cror 6, 0, 2
  003f104  bt 6, 0x3f124
  003f108  fmr 1, 31
  003f10c  lis 3, 4
  003f110  addi 3, 3, -5608
  003f114  lfs 2, 12(3)
  003f118  bl 0x502578
  003f11c  nop
  003f120  fmr 31, 1
  003f124  stfs 31, 64(30)
  003f128  lis 3, 4
  003f12c  li 28, 1
  003f130  addi 4, 3, -5608
  003f134  lhz 3, 32(30)
  003f138  ori 27, 28, 0
  003f13c  lhz 5, 60(30)
  003f140  addic 3, 3, 1
  003f144  cmpwi 6, 5, 1
  003f148  lfs 31, 16(4)
  003f14c  cmpwi 1, 5, 7
  003f150  sth 3, 32(30)
  003f154  lfs 1, 20(4)
  003f158  cmpwi 7, 5, 2
  003f15c  lfs 2, 24(4)
  003f160  lfs 3, 28(4)
  003f164  bf 26, 0x3f198
  003f168  lis 4, 114
  003f16c  lis 7, 4
  003f170  fmr 4, 2
  003f174  li 5, -3056
  003f178  li 6, 32
  003f17c  addi 7, 7, -5608
  003f180  lfs 5, -3056(4)
  003f184  <unknown>
  003f188  <unknown>
  003f18c  lfs 2, 32(7)
  003f190  vspltw 31, 31, 0
  003f194  b 0x3f1c0
  003f198  lis 4, 114
  003f19c  lis 7, 4
  003f1a0  li 5, -3056
  003f1a4  addi 7, 7, -5608
  003f1a8  li 6, 24
  003f1ac  lfs 5, -3056(4)
  003f1b0  <unknown>
  003f1b4  lfs 4, 36(7)
  003f1b8  <unknown>
  003f1bc  vspltw 31, 31, 0
  003f1c0  fmuls 3, 5, 3
  003f1c4  lis 4, 4
  003f1c8  vspltisw 3, -1
  003f1cc  li 5, 28
  003f1d0  fmuls 1, 5, 1
  003f1d4  addi 4, 4, -5608
  003f1d8  vspltisw 6, -1
  003f1dc  fmuls 2, 5, 2
  003f1e0  vspltw 4, 2, 0
  003f1e4  vslw 3, 3, 3
  003f1e8  fmuls 4, 5, 4
  003f1ec  li 6, 20
  003f1f0  vspltisw 7, -1
  003f1f4  <unknown>
  003f1f8  fctiwz 3, 3
  003f1fc  vspltw 5, 5, 0
  003f200  fctiwz 1, 1
  003f204  fctiwz 2, 2
  003f208  vmaddfp 2, 2, 5, 3
  003f20c  vslw 3, 6, 6
  003f210  fctiwz 4, 4
  003f214  vslw 5, 7, 7
  003f218  vmaddfp 29, 4, 31, 3
  003f21c  stfd 3, 248(1)
  003f220  <unknown>
  003f224  lwz 25, 252(1)
  003f228  vspltw 3, 3, 0
  003f22c  stfd 1, 248(1)
  003f230  extsw 25, 25
  003f234  vspltw 30, 2, 0
  003f238  lwz 23, 252(1)
  003f23c  vmaddfp 31, 4, 3, 5
  003f240  stfd 2, 248(1)
  003f244  lwz 24, 252(1)
  003f248  stfd 4, 248(1)
  003f24c  vctsxs 30, 30, 0
  003f250  vctsxs 29, 29, 0
  003f254  lwz 26, 252(1)
  003f258  vctsxs 31, 31, 0
  003f25c  bf 6, 0x3f32c
  003f260  lis 4, 150
  003f264  lwz 4, 19008(4)
  003f268  cmpwi 4, 0
  003f26c  bt 2, 0x3f280
  003f270  vsplth 2, 31, 1
  003f274  li 4, 32
  003f278  ori 3, 23, 0
  003f27c  stvehx 2, 4, 30
  003f280  extsh 4, 3
  003f284  cmpw 4, 23
  003f288  cmpw 1, 4, 24
  003f28c  bt 0, 0x3f2d8
  003f290  lis 5, 4
  003f294  lhz 6, 62(30)
  003f298  addi 5, 5, -5608
  003f29c  addic 6, 6, 1
  003f2a0  sth 6, 62(30)
  003f2a4  lfs 1, 40(5)
  003f2a8  fmuls 1, 5, 1
  003f2ac  fctiwz 1, 1
  003f2b0  stfd 1, 248(1)
  003f2b4  lwz 5, 252(1)
  003f2b8  addc 5, 23, 5
  003f2bc  cmpw 4, 5
  003f2c0  bt 1, 0x3f2cc
  003f2c4  li 28, 0
  003f2c8  b 0x3f2d8
  003f2cc  lis 4, 4
  003f2d0  addi 4, 4, -5608
  003f2d4  lfs 31, 44(4)
  003f2d8  ori 4, 3, 0
  003f2dc  bt 4, 0x3f2f8
  003f2e0  ori 28, 27, 0
  003f2e4  li 5, 0
  003f2e8  ori 3, 28, 0
  003f2ec  sth 28, 32(30)
  003f2f0  ori 4, 3, 0
  003f2f4  sth 5, 62(30)
  003f2f8  extsh 4, 4
  003f2fc  cmpw 4, 25
  003f300  bf 1, 0x3f478
  003f304  extsh 3, 3
  003f308  cmpw 3, 23
  003f30c  bf 0, 0x3f478
  003f310  vsplth 2, 30, 1
  003f314  li 3, 32
  003f318  vsplth 3, 31, 1
  003f31c  li 4, 62
  003f320  stvehx 2, 3, 30
  003f324  stvehx 3, 4, 30
  003f328  b 0x3f478
  003f32c  bt 26, 0x3f334
  003f330  bf 30, 0x3f460
  003f334  li 3, 176
  003f338  bl 0x32d5c
  003f33c  nop
  003f340  lis 3, 4
  003f344  fmr 1, 31
  003f348  addi 22, 3, -5608
  003f34c  lfs 2, 48(22)
  003f350  lfs 3, 52(22)
  003f354  bl 0x32d80
  003f358  nop
  003f35c  lis 3, 150
  003f360  lfs 1, 0(22)
  003f364  lwz 3, 19008(3)
  003f368  cmpwi 3, 0
  003f36c  bf 2, 0x3f388
  003f370  lis 3, 150
  003f374  lhz 4, 32(30)
  003f378  addic 3, 3, 19008
  003f37c  lwz 3, 4(3)
  003f380  cmpwi 3, 0
  003f384  bt 2, 0x3f398
  003f388  vsplth 2, 31, 1
  003f38c  li 3, 32
  003f390  ori 4, 23, 0
  003f394  stvehx 2, 3, 30
  003f398  extsh 5, 4
  003f39c  ori 3, 4, 0
  003f3a0  cmpw 5, 23
  003f3a4  bt 0, 0x3f408
  003f3a8  lhz 5, 62(30)
  003f3ac  ori 3, 4, 0
  003f3b0  addic 5, 5, 1
  003f3b4  extsh 6, 5
  003f3b8  cmpw 6, 26
  003f3bc  sth 5, 62(30)
  003f3c0  bt 0, 0x3f404
  003f3c4  lis 3, 4
  003f3c8  fmr 2, 1
  003f3cc  addi 4, 3, -5608
  003f3d0  ori 3, 31, 0
  003f3d4  lfs 1, 56(4)
  003f3d8  bl 0x3e488
  003f3dc  cmpwi 3, 0
  003f3e0  lhz 3, 32(30)
  003f3e4  ori 4, 3, 0
  003f3e8  bt 2, 0x3f404
  003f3ec  vsplth 2, 29, 1
  003f3f0  li 5, 32
  003f3f4  ori 4, 24, 0
  003f3f8  ori 3, 4, 0
  003f3fc  stvehx 2, 5, 30
  003f400  b 0x3f408
  003f404  li 28, 0
  003f408  extsh 5, 3
  003f40c  cmpw 5, 24
  003f410  bt 0, 0x3f42c
  003f414  ori 28, 27, 0
  003f418  li 5, 0
  003f41c  ori 4, 28, 0
  003f420  sth 28, 32(30)
  003f424  ori 3, 4, 0
  003f428  sth 5, 62(30)
  003f42c  extsh 3, 3
  003f430  cmpw 3, 25
  003f434  bf 1, 0x3f478
  003f438  extsh 3, 4
  003f43c  cmpw 3, 23
  003f440  bf 0, 0x3f478
  003f444  vsplth 2, 30, 1
  003f448  li 3, 32
  003f44c  vsplth 3, 31, 1
  003f450  li 4, 62
  003f454  stvehx 2, 3, 30
  003f458  stvehx 3, 4, 30
  003f45c  b 0x3f478
  003f460  extsh 3, 3
  003f464  cmpw 3, 25
  003f468  bf 1, 0x3f478
  003f46c  vsplth 2, 30, 1
  003f470  li 3, 32
  003f474  stvehx 2, 3, 30
  003f478  ori 3, 25, 0
  003f47c  ori 26, 28, 0
  003f480  bl 0x502730
  003f484  nop
  003f488  lhz 3, 32(30)
  003f48c  extsh 3, 3
  003f490  extsw 3, 3
  003f494  std 3, 248(1)
  003f498  lis 3, 4
  003f49c  lfs 2, 0(30)
  003f4a0  addi 3, 3, -5608
  003f4a4  fmuls 2, 2, 31
  003f4a8  li 28, 0
  003f4ac  lfs 3, 60(3)
  003f4b0  lfd 4, 248(1)
  003f4b4  fcfid 4, 4
  003f4b8  cmpwi 26, 0
  003f4bc  ori 26, 28, 0
  003f4c0  frsp 4, 4
  003f4c4  fdivs 31, 4, 1
  003f4c8  fmuls 1, 2, 3
  003f4cc  fmuls 31, 1, 31
  003f4d0  bt 2, 0x3f678
  003f4d4  ori 3, 31, 0
  003f4d8  lfs 1, 48(30)
  003f4dc  lfs 2, 44(30)
  003f4e0  bl 0x3e488
  003f4e4  cmpwi 3, 0
  003f4e8  bt 2, 0x3f678
  003f4ec  lhz 3, 60(30)
  003f4f0  ori 28, 27, 0
  003f4f4  cmpwi 3, 4
  003f4f8  cmpwi 1, 3, 5
  003f4fc  cmpwi 6, 3, 3
  003f500  bt 2, 0x3f508
  003f504  bf 6, 0x3f5d4
  003f508  lis 3, 4
  003f50c  lfs 1, 64(30)
  003f510  addi 4, 3, -5608
  003f514  lfs 2, 64(4)
  003f518  lfs 3, 68(4)
  003f51c  fadds 1, 1, 2
  003f520  lfs 4, 72(4)
  003f524  lfs 6, 76(4)
  003f528  addic 3, 1, 112
  003f52c  fsubs 2, 3, 1
  003f530  fsubs 5, 4, 1
  003f534  fsub 7, 1, 2
  003f538  fsel 1, 7, 2, 1
  003f53c  lfs 2, 80(4)
  003f540  fsub 7, 5, 1
  003f544  fsel 1, 7, 5, 1
  003f548  lfs 5, 84(4)
  003f54c  lfs 7, 88(4)
  003f550  fmuls 8, 1, 1
  003f554  fmuls 9, 8, 1
  003f558  fmuls 10, 8, 9
  003f55c  fmadds 1, 9, 6, 1
  003f560  fmuls 9, 8, 10
  003f564  fmadds 1, 10, 2, 1
  003f568  fmuls 8, 8, 9
  003f56c  fmadds 1, 9, 5, 1
  003f570  fmadds 1, 8, 7, 1
  003f574  stfs 1, 112(1)
  003f578  lfs 1, 64(30)
  003f57c  fsubs 3, 3, 1
  003f580  fsubs 4, 4, 1
  003f584  fsub 8, 1, 3
  003f588  fsel 1, 8, 3, 1
  003f58c  fsub 3, 4, 1
  003f590  fsel 3, 3, 4, 1
  003f594  fmr 1, 31
  003f598  fmuls 4, 3, 3
  003f59c  fmuls 8, 4, 3
  003f5a0  fmuls 9, 4, 8
  003f5a4  fmadds 3, 8, 6, 3
  003f5a8  fmuls 6, 4, 9
  003f5ac  fmadds 2, 9, 2, 3
  003f5b0  fmuls 3, 4, 6
  003f5b4  fmadds 2, 6, 5, 2
  003f5b8  fmadds 2, 3, 7, 2
  003f5bc  stfs 2, 116(1)
  003f5c0  lfs 2, 0(4)
  003f5c4  stw 26, 120(1)
  003f5c8  bl 0x2f470
  003f5cc  nop
  003f5d0  b 0x3f678
  003f5d4  bf 26, 0x3f65c
  003f5d8  lis 3, 4
  003f5dc  lis 4, 114
  003f5e0  addi 3, 3, -5608
  003f5e4  fmr 1, 31
  003f5e8  lfs 2, 92(3)
  003f5ec  lfs 3, -3056(4)
  003f5f0  lhz 3, 32(30)
  003f5f4  fmuls 2, 3, 2
  003f5f8  extsh 4, 3
  003f5fc  fctiwz 2, 2
  003f600  stfd 2, 248(1)
  003f604  lwz 3, 252(1)
  003f608  cmpw 4, 3
  003f60c  bf 0, 0x3f640
  003f610  extsw 3, 3
  003f614  bl 0x502730
  003f618  nop
  003f61c  lhz 3, 32(30)
  003f620  extsh 3, 3
  003f624  extsw 3, 3
  003f628  std 3, 248(1)
  003f62c  lfd 2, 248(1)
  003f630  fcfid 2, 2
  003f634  frsp 2, 2
  003f638  fdivs 1, 2, 1
  003f63c  fmuls 1, 31, 1
  003f640  lis 4, 4
  003f644  addic 3, 29, 16
  003f648  addi 4, 4, -5608
  003f64c  lfs 2, 0(4)
  003f650  bl 0x2f31c
  003f654  nop
  003f658  b 0x3f678
  003f65c  lis 4, 4
  003f660  fmr 1, 31
  003f664  addic 3, 29, 16
  003f668  addi 4, 4, -5608
  003f66c  lfs 2, 0(4)
  003f670  bl 0x2f31c
  003f674  nop
  003f678  lis 3, 4
  003f67c  lwz 4, 52(30)
  003f680  addi 3, 3, -5608
  003f684  lfs 1, 52(30)
  003f688  cmpwi 4, 0
  003f68c  lfs 31, 0(3)
  003f690  bt 2, 0x3f6b4
  003f694  lis 3, 4
  003f698  li 4, 0
  003f69c  addi 3, 3, -5608
  003f6a0  lfs 2, 96(3)
  003f6a4  bl 0x2f3d8
  003f6a8  nop
  003f6ac  bl 0x2f3b0
  003f6b0  nop
  003f6b4  lwz 3, 56(30)
  003f6b8  lfs 1, 56(30)
  003f6bc  cmpwi 3, 0
  003f6c0  bt 2, 0x3f6d8
  003f6c4  lis 3, 4
  003f6c8  addi 3, 3, -5608
  003f6cc  lfs 2, 96(3)
  003f6d0  bl 0x2e354
  003f6d4  nop
  003f6d8  lwz 3, 76(30)
  003f6dc  lfs 1, 76(30)
  003f6e0  cmpwi 3, 0
  003f6e4  bt 2, 0x3f700
  003f6e8  lis 3, 4
  003f6ec  li 4, 0
  003f6f0  addi 3, 3, -5608
  003f6f4  lfs 2, 100(3)
  003f6f8  bl 0x2f414
  003f6fc  nop
  003f700  lhz 3, 60(30)
  003f704  cmpwi 3, 3
  003f708  bf 2, 0x3f7c4
  003f70c  li 3, 0
  003f710  bl 0x2f064
  003f714  nop
  003f718  bl 0x2f3b0
  003f71c  nop
  003f720  bl 0x2f03c
  003f724  nop
  003f728  lis 3, 4
  003f72c  addi 31, 3, -5608
  003f730  lfs 30, 104(31)
  003f734  lfs 29, 108(31)
  003f738  fmr 1, 30
  003f73c  fmr 2, 29
  003f740  bl 0x32d18
  003f744  nop
  003f748  lis 3, 114
  003f74c  lfs 1, 112(31)
  003f750  lhz 4, 32(30)
  003f754  extsh 4, 4
  003f758  lfs 2, -3056(3)
  003f75c  fmuls 1, 2, 1
  003f760  fctiwz 1, 1
  003f764  stfd 1, 248(1)
  003f768  lwz 3, 252(1)
  003f76c  lfs 1, 116(31)
  003f770  cmpw 4, 3
  003f774  bf 0, 0x3f7b4
  003f778  extsw 3, 3
  003f77c  bl 0x502730
  003f780  nop
  003f784  lhz 3, 32(30)
  003f788  extsh 3, 3
  003f78c  extsw 3, 3
  003f790  std 3, 248(1)
  003f794  lis 3, 4
  003f798  addi 3, 3, -5608
  003f79c  lfs 2, 120(3)
  003f7a0  lfd 3, 248(1)
  003f7a4  fcfid 3, 3
  003f7a8  frsp 3, 3
  003f7ac  fdivs 1, 3, 1
  003f7b0  fmadds 1, 1, 2, 30
  003f7b4  fmr 2, 29
  003f7b8  bl 0x2eff8
  003f7bc  nop
  003f7c0  lhz 3, 60(30)
  003f7c4  cmpwi 3, 4
  003f7c8  cmpwi 1, 3, 5
  003f7cc  bt 2, 0x3f7d4
  003f7d0  bf 6, 0x3fa78
  003f7d4  li 3, 0
  003f7d8  bl 0x2f064
  003f7dc  nop
  003f7e0  bl 0x2f3b0
  003f7e4  nop
  003f7e8  bl 0x2f03c
  003f7ec  nop
  003f7f0  lis 3, 4
  003f7f4  addi 31, 3, -5608
  003f7f8  lfs 1, 120(31)
  003f7fc  lfs 2, 108(31)
  003f800  bl 0x32d18
  003f804  nop
  003f808  lfs 30, 96(31)
  003f80c  lfs 1, 124(31)
  003f810  li 4, 0
  003f814  fmr 2, 30
  003f818  bl 0x2f3d8
  003f81c  nop
  003f820  lhz 3, 60(30)
  003f824  cmpwi 3, 4
  003f828  bf 2, 0x3fa6c
  003f82c  lis 3, 151
  003f830  lfs 1, 16(29)
  003f834  lfs 2, 20(29)
  003f838  addic 3, 3, -25376
  003f83c  lfs 3, 128(3)
  003f840  lfs 4, 132(3)
  003f844  fsubs 1, 1, 3
  003f848  fsubs 2, 2, 4
  003f84c  lis 3, 115
  003f850  addic 3, 3, 22784
  003f854  fabs 3, 1
  003f858  fabs 4, 2
  003f85c  stfs 1, 128(1)
  003f860  stfs 2, 132(1)
  003f864  fsubs 1, 3, 4
  003f868  stfs 1, 136(1)
  003f86c  lwz 4, 128(1)
  003f870  lfs 1, 128(1)
  003f874  lwz 5, 132(1)
  003f878  lfs 2, 132(1)
  003f87c  lwz 6, 136(1)
  003f880  rlwinm 5, 5, 3, 29, 29
  003f884  fabs 5, 2
  003f888  lfs 2, 136(1)
  003f88c  fabs 1, 1
  003f890  rlwimi 5, 6, 2, 30, 30
  003f894  fsub 6, 2, 31
  003f898  fsub 7, 2, 31
  003f89c  rlwimi 5, 4, 4, 28, 28
  003f8a0  ori 4, 3, 0
  003f8a4  rlwimi 4, 5, 2, 26, 28
  003f8a8  slwi 5, 5, 2
  003f8ac  clrldi 4, 4, 32
  003f8b0  fsel 4, 6, 1, 4
  003f8b4  lfsx 1, 3, 5
  003f8b8  fsel 3, 7, 5, 3
  003f8bc  lfs 2, 4(4)
  003f8c0  fcmpu 0, 4, 31
  003f8c4  bt 1, 0x3f8cc
  003f8c8  b 0x3f9ec
  003f8cc  fsubs 5, 3, 4
  003f8d0  fadds 3, 3, 4
  003f8d4  addic 3, 1, 16
  003f8d8  li 6, 2
  003f8dc  addic 4, 3, 132
  003f8e0  addic 5, 3, 148
  003f8e4  mtctr 6
  003f8e8  fdivs 3, 5, 3
  003f8ec  fmuls 4, 3, 3
  003f8f0  stfs 3, 160(1)
  003f8f4  stfs 3, 152(1)
  003f8f8  stfs 3, 156(1)
  003f8fc  stfs 3, 148(1)
  003f900  lfs 6, 160(1)
  003f904  lfs 7, 152(1)
  003f908  lfs 8, 156(1)
  003f90c  fmuls 5, 4, 4
  003f910  fmuls 7, 7, 4
  003f914  fmuls 6, 6, 5
  003f918  fmuls 3, 5, 5
  003f91c  fmuls 5, 8, 5
  003f920  stfs 7, 152(1)
  003f924  fmuls 4, 6, 4
  003f928  stfs 5, 156(1)
  003f92c  stfs 4, 160(1)
  003f930  lfs 4, 132(3)
  003f934  fmuls 4, 4, 3
  003f938  stfs 4, 148(3)
  003f93c  lfs 4, 4(4)
  003f940  addic 3, 3, 8
  003f944  addic 4, 4, 8
  003f948  fmuls 4, 4, 3
  003f94c  stfs 4, 4(5)
  003f950  addic 5, 5, 8
  003f954  bdnz 0x3f930
  003f958  li 5, 4
  003f95c  ori 3, 1, 0
  003f960  mtctr 5
  003f964  lis 4, 115
  003f968  addic 5, 3, 148
  003f96c  addic 4, 4, 22752
  003f970  ori 7, 5, 0
  003f974  lfs 3, 148(3)
  003f978  lfs 4, 0(4)
  003f97c  fmuls 3, 3, 4
  003f980  lfs 4, 4(4)
  003f984  addic 4, 4, 8
  003f988  stfs 3, 148(3)
  003f98c  lfs 3, 4(5)
  003f990  addic 3, 3, 8
  003f994  fmuls 3, 3, 4
  003f998  stfs 3, 4(5)
  003f99c  addic 5, 5, 8
  003f9a0  bdnz 0x3f974
  003f9a4  ori 3, 1, 0
  003f9a8  mtctr 6
  003f9ac  lfs 3, 148(3)
  003f9b0  lfs 4, 4(7)
  003f9b4  fadds 3, 31, 3
  003f9b8  lfs 5, 8(7)
  003f9bc  lfs 31, 12(7)
  003f9c0  addic 3, 3, 16
  003f9c4  addic 7, 7, 16
  003f9c8  fadds 3, 3, 4
  003f9cc  fadds 3, 3, 5
  003f9d0  fadds 31, 3, 31
  003f9d4  bdnz 0x3f9ac
  003f9d8  lis 3, 4
  003f9dc  addi 3, 3, -5608
  003f9e0  lfs 3, 4(3)
  003f9e4  fadds 31, 31, 3
  003f9e8  fmadds 31, 31, 1, 2
  003f9ec  cmpwi 28, 0
  003f9f0  bt 2, 0x3fa6c
  003f9f4  fmr 1, 31
  003f9f8  lfs 2, 64(30)
  003f9fc  bl 0x5026a0
  003fa00  nop
  003fa04  lis 3, 4
  003fa08  addi 3, 3, -5608
  003fa0c  lfs 2, 128(3)
  003fa10  fcmpu 0, 1, 2
  003fa14  cror 6, 0, 2
  003fa18  bt 6, 0x3fa6c
  003fa1c  lwz 3, 52(30)
  003fa20  lfs 1, 52(30)
  003fa24  cmpwi 3, 0
  003fa28  bt 2, 0x3fa50
  003fa2c  lis 3, 4
  003fa30  fmr 2, 30
  003fa34  li 4, 0
  003fa38  addi 3, 3, -5608
  003fa3c  lfs 3, 132(3)
  003fa40  fadds 1, 1, 3
  003fa44  bl 0x2f3d8
  003fa48  nop
  003fa4c  b 0x3fa6c
  003fa50  lis 3, 4
  003fa54  fmr 2, 30
  003fa58  li 4, 0
  003fa5c  addi 3, 3, -5608
  003fa60  lfs 1, 136(3)
  003fa64  bl 0x2f3d8
  003fa68  nop
  003fa6c  li 3, 176
  003fa70  bl 0x32d5c
  003fa74  nop
  003fa78  li 0, 272
  003fa7c  lvx 29, 1, 0
  003fa80  addic 0, 0, 16
  003fa84  lvx 30, 1, 0
  003fa88  addic 0, 0, 16
  003fa8c  lvx 31, 1, 0
  003fa90  ld 0, 448(1)
  003fa94  mtlr 0
  003fa98  lfd 29, 408(1)
  003fa9c  lfd 30, 416(1)
  003faa0  lfd 31, 424(1)
  003faa4  ld 22, 328(1)
  003faa8  ld 23, 336(1)
  003faac  ld 24, 344(1)
  003fab0  ld 25, 352(1)
  003fab4  ld 26, 360(1)
  003fab8  ld 27, 368(1)
  003fabc  ld 28, 376(1)
  003fac0  ld 29, 384(1)
  003fac4  ld 30, 392(1)
  003fac8  ld 31, 400(1)
  003facc  addi 1, 1, 432
  003fad0  blr

Cam18_SetTriggered:   # 0x3fad4, 0x38 bytes
  003fad4  lhz 4, 134(3)
  003fad8  cmpwi 4, 18
  003fadc  bf 2, 0x3fb08
  003fae0  lis 4, 149
  003fae4  lhz 3, 132(3)
  003fae8  li 5, 1
  003faec  extsh 3, 3
  003faf0  lwz 4, 16468(4)
  003faf4  sldi 3, 3, 5
  003faf8  addc 3, 4, 3
  003fafc  clrldi 3, 3, 32
  003fb00  lwz 3, 28(3)
  003fb04  stw 5, 80(3)
  003fb08  blr

ActivateCamera_18:   # 0x3fb0c, 0x78 bytes
  003fb0c  stdu 1, -128(1)
  003fb10  mflr 0
  003fb14  std 0, 144(1)
  003fb18  lis 5, 149
  003fb1c  lis 4, 149
  003fb20  lhz 6, 132(3)
  003fb24  addic 5, 5, 5056
  003fb28  extsh 6, 6
  003fb2c  sldi 6, 6, 5
  003fb30  lwz 4, 16468(4)
  003fb34  lwz 5, 384(5)
  003fb38  std 31, 120(1)
  003fb3c  addc 4, 4, 6
  003fb40  clrldi 31, 4, 32
  003fb44  lhz 4, 134(5)
  003fb48  cmpwi 4, 0
  003fb4c  lwz 31, 28(31)
  003fb50  bf 2, 0x3fb68
  003fb54  lhz 4, 32(31)
  003fb58  extsh 4, 4
  003fb5c  cmpwi 4, 0
  003fb60  bt 0, 0x3fb68
  003fb64  bl 0x3eaa8
  003fb68  li 3, 0
  003fb6c  stw 3, 80(31)
  003fb70  ld 0, 144(1)
  003fb74  mtlr 0
  003fb78  ld 31, 120(1)
  003fb7c  addi 1, 1, 128
  003fb80  blr

STUB_0003fb84:   # 0x3fb84, 0x4 bytes
  003fb84  blr

STUB_0003fb88:   # 0x3fb88, 0x4 bytes
  003fb88  blr

STUB_0003fb8c:   # 0x3fb8c, 0x4 bytes
  003fb8c  blr
