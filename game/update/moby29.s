# game/update/moby29.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M289_0032e908:   # 0x32e908, 0x94 bytes
  032e908  stdu 1, -128(1)
  032e90c  mflr 0
  032e910  std 0, 144(1)
  032e914  lis 4, 51
  032e918  std 31, 120(1)
  032e91c  lbz 5, 32(3)
  032e920  ori 31, 3, 0
  032e924  std 30, 112(1)
  032e928  addi 4, 4, -5892
  032e92c  lwz 30, 120(3)
  032e930  cmpwi 5, 3
  032e934  lfs 1, 0(4)
  032e938  bf 2, 0x32e948
  032e93c  lis 3, 51
  032e940  addi 3, 3, -5892
  032e944  lfs 1, 4(3)
  032e948  ori 3, 31, 0
  032e94c  ori 5, 30, 0
  032e950  bl 0x1118d8
  032e954  nop
  032e958  lwz 3, 64(30)
  032e95c  cmpwi 3, 0
  032e960  bf 2, 0x32e974
  032e964  lis 3, 151
  032e968  addic 3, 3, -25376
  032e96c  lwz 3, 8320(3)
  032e970  stw 3, 64(30)
  032e974  lbz 3, 188(31)
  032e978  cmpwi 3, 3
  032e97c  bf 1, 0x32e984
  032e980  stb 3, 32(31)
  032e984  ld 0, 144(1)
  032e988  mtlr 0
  032e98c  ld 30, 112(1)
  032e990  ld 31, 120(1)
  032e994  addi 1, 1, 128
  032e998  blr

UpdateMoby_29:   # 0x32e9e0, 0xc08 bytes
  032e9e0  stdu 1, -400(1)
  032e9e4  mflr 0
  032e9e8  std 0, 416(1)
  032e9ec  stfd 30, 384(1)
  032e9f0  stfd 31, 392(1)
  032e9f4  lis 4, 51
  032e9f8  std 31, 376(1)
  032e9fc  lbz 5, 32(3)
  032ea00  ori 31, 3, 0
  032ea04  addi 4, 4, -5732
  032ea08  cmpwi 5, 3
  032ea0c  std 30, 368(1)
  032ea10  lfs 1, 0(4)
  032ea14  lwz 30, 120(3)
  032ea18  std 29, 360(1)
  032ea1c  std 28, 352(1)
  032ea20  fmr 30, 1
  032ea24  bf 2, 0x32ea34
  032ea28  lis 3, 51
  032ea2c  addi 3, 3, -5732
  032ea30  lfs 1, 4(3)
  032ea34  ori 3, 31, 0
  032ea38  ori 5, 30, 0
  032ea3c  bl 0x1118d8
  032ea40  nop
  032ea44  lwz 28, 64(30)
  032ea48  cmpwi 28, 0
  032ea4c  bf 2, 0x32ea60
  032ea50  lis 3, 151
  032ea54  addic 3, 3, -25376
  032ea58  lwz 28, 8320(3)
  032ea5c  stw 28, 64(30)
  032ea60  lbz 3, 188(31)
  032ea64  cmpwi 3, 3
  032ea68  bf 1, 0x32ea74
  032ea6c  stb 3, 32(31)
  032ea70  lwz 28, 64(30)
  032ea74  lwz 3, 92(30)
  032ea78  cmpwi 3, 0
  032ea7c  bt 2, 0x32eab4
  032ea80  lhz 4, 166(3)
  032ea84  cmpwi 4, 36
  032ea88  bf 2, 0x32eab4
  032ea8c  lbz 4, 32(3)
  032ea90  cmpwi 4, 128
  032ea94  bf 0, 0x32eab4
  032ea98  lis 4, 51
  032ea9c  addic 5, 30, 112
  032eaa0  addi 6, 4, -5732
  032eaa4  li 4, 1
  032eaa8  lfs 1, 8(6)
  032eaac  bl 0x119a18
  032eab0  nop
  032eab4  lbz 3, 32(31)
  032eab8  cmpwi 3, 5
  032eabc  cmpwi 1, 3, 4
  032eac0  cmpwi 6, 3, 3
  032eac4  cmpwi 7, 3, 1
  032eac8  bt 2, 0x32f4d8
  032eacc  bt 6, 0x32f434
  032ead0  bt 26, 0x32ee9c
  032ead4  bt 30, 0x32eb44
  032ead8  cmpwi 3, 0
  032eadc  bf 2, 0x32f53c
  032eae0  lis 3, 51
  032eae4  lwz 4, 36(31)
  032eae8  addi 3, 3, -5732
  032eaec  lfs 1, 12(3)
  032eaf0  lfs 2, 36(4)
  032eaf4  ori 3, 31, 0
  032eaf8  fmuls 1, 2, 1
  032eafc  stfs 1, 44(31)
  032eb00  bl 0x354638
  032eb04  nop
  032eb08  stw 3, 92(30)
  032eb0c  lfs 1, 72(31)
  032eb10  stfs 1, 84(30)
  032eb14  lbz 3, 83(31)
  032eb18  cmpwi 3, 0
  032eb1c  bt 2, 0x32eb38
  032eb20  ori 3, 31, 0
  032eb24  li 4, 0
  032eb28  li 5, 0
  032eb2c  li 6, 10
  032eb30  bl 0xfddc0
  032eb34  nop
  032eb38  li 3, 1
  032eb3c  stb 3, 32(31)
  032eb40  b 0x32f53c
  032eb44  lfs 1, 16(28)
  032eb48  lfs 2, 16(31)
  032eb4c  lfs 3, 20(28)
  032eb50  lfs 4, 20(31)
  032eb54  fsubs 1, 1, 2
  032eb58  lis 3, 51
  032eb5c  fsubs 2, 3, 4
  032eb60  addi 3, 3, -5732
  032eb64  lis 4, 115
  032eb68  addic 4, 4, 22784
  032eb6c  fabs 3, 1
  032eb70  fabs 5, 2
  032eb74  stfs 1, 232(1)
  032eb78  stfs 2, 236(1)
  032eb7c  fsubs 1, 3, 5
  032eb80  stfs 1, 240(1)
  032eb84  lwz 5, 232(1)
  032eb88  lfs 4, 16(3)
  032eb8c  lfs 1, 232(1)
  032eb90  lwz 3, 236(1)
  032eb94  lfs 2, 236(1)
  032eb98  lwz 6, 240(1)
  032eb9c  rlwinm 3, 3, 3, 29, 29
  032eba0  fabs 6, 2
  032eba4  lfs 2, 240(1)
  032eba8  fabs 1, 1
  032ebac  rlwimi 3, 6, 2, 30, 30
  032ebb0  fsub 7, 2, 4
  032ebb4  rlwimi 3, 5, 4, 28, 28
  032ebb8  fsub 8, 2, 4
  032ebbc  ori 5, 4, 0
  032ebc0  rlwimi 5, 3, 2, 26, 28
  032ebc4  slwi 3, 3, 2
  032ebc8  clrldi 5, 5, 32
  032ebcc  fsel 5, 7, 1, 5
  032ebd0  lfsx 1, 4, 3
  032ebd4  lfs 2, 4(5)
  032ebd8  fsel 3, 8, 6, 3
  032ebdc  fcmpu 0, 5, 4
  032ebe0  bt 1, 0x32ebe8
  032ebe4  b 0x32ed08
  032ebe8  fsubs 6, 3, 5
  032ebec  fadds 3, 3, 5
  032ebf0  addic 3, 1, 16
  032ebf4  li 6, 2
  032ebf8  addic 4, 3, 292
  032ebfc  addic 5, 3, 308
  032ec00  mtctr 6
  032ec04  fdivs 3, 6, 3
  032ec08  fmuls 5, 3, 3
  032ec0c  stfs 3, 320(1)
  032ec10  stfs 3, 312(1)
  032ec14  stfs 3, 316(1)
  032ec18  stfs 3, 308(1)
  032ec1c  lfs 7, 320(1)
  032ec20  lfs 8, 312(1)
  032ec24  lfs 9, 316(1)
  032ec28  fmuls 6, 5, 5
  032ec2c  fmuls 8, 8, 5
  032ec30  fmuls 7, 7, 6
  032ec34  fmuls 3, 6, 6
  032ec38  fmuls 6, 9, 6
  032ec3c  stfs 8, 312(1)
  032ec40  fmuls 5, 7, 5
  032ec44  stfs 6, 316(1)
  032ec48  stfs 5, 320(1)
  032ec4c  lfs 5, 292(3)
  032ec50  fmuls 5, 5, 3
  032ec54  stfs 5, 308(3)
  032ec58  lfs 5, 4(4)
  032ec5c  addic 3, 3, 8
  032ec60  addic 4, 4, 8
  032ec64  fmuls 5, 5, 3
  032ec68  stfs 5, 4(5)
  032ec6c  addic 5, 5, 8
  032ec70  bdnz 0x32ec4c
  032ec74  li 5, 4
  032ec78  ori 3, 1, 0
  032ec7c  mtctr 5
  032ec80  lis 4, 115
  032ec84  addic 5, 3, 308
  032ec88  addic 4, 4, 22752
  032ec8c  ori 7, 5, 0
  032ec90  lfs 3, 308(3)
  032ec94  lfs 5, 0(4)
  032ec98  fmuls 3, 3, 5
  032ec9c  lfs 5, 4(4)
  032eca0  addic 4, 4, 8
  032eca4  stfs 3, 308(3)
  032eca8  lfs 3, 4(5)
  032ecac  addic 3, 3, 8
  032ecb0  fmuls 3, 3, 5
  032ecb4  stfs 3, 4(5)
  032ecb8  addic 5, 5, 8
  032ecbc  bdnz 0x32ec90
  032ecc0  ori 3, 1, 0
  032ecc4  mtctr 6
  032ecc8  lfs 3, 308(3)
  032eccc  fadds 3, 4, 3
  032ecd0  lfs 4, 4(7)
  032ecd4  addic 3, 3, 16
  032ecd8  lfs 5, 8(7)
  032ecdc  lfs 6, 12(7)
  032ece0  addic 7, 7, 16
  032ece4  fadds 3, 3, 4
  032ece8  fadds 4, 3, 5
  032ecec  fadds 4, 4, 6
  032ecf0  bdnz 0x32ecc8
  032ecf4  lis 3, 51
  032ecf8  addi 3, 3, -5732
  032ecfc  lfs 3, 20(3)
  032ed00  fadds 4, 4, 3
  032ed04  fmadds 4, 4, 1, 2
  032ed08  fmr 1, 4
  032ed0c  lfs 2, 84(30)
  032ed10  bl 0x5026a0
  032ed14  nop
  032ed18  lis 3, 51
  032ed1c  addi 3, 3, -5732
  032ed20  lfs 2, 24(3)
  032ed24  fcmpu 0, 1, 2
  032ed28  cror 6, 1, 2
  032ed2c  bt 6, 0x32ede4
  032ed30  lfs 1, 20(31)
  032ed34  lfs 2, 20(28)
  032ed38  lfs 3, 16(31)
  032ed3c  fsubs 1, 1, 2
  032ed40  lfs 2, 16(28)
  032ed44  fsubs 2, 3, 2
  032ed48  fmuls 1, 1, 1
  032ed4c  fmadds 1, 2, 2, 1
  032ed50  fsqrts 1, 1
  032ed54  fcmpu 0, 1, 30
  032ed58  cror 6, 1, 2
  032ed5c  bt 6, 0x32ede4
  032ed60  lwz 3, 80(30)
  032ed64  cmpwi 3, -1
  032ed68  bt 2, 0x32ed8c
  032ed6c  lis 5, 151
  032ed70  extsw 4, 3
  032ed74  addic 3, 5, -25376
  032ed78  addic 3, 3, 208
  032ed7c  bl 0x110b70
  032ed80  nop
  032ed84  cmpwi 3, 0
  032ed88  bt 2, 0x32ede4
  032ed8c  lis 3, 16640
  032ed90  stw 3, 104(30)
  032ed94  lbz 3, 83(31)
  032ed98  cmpwi 3, 1
  032ed9c  bt 2, 0x32eddc
  032eda0  li 3, 0
  032eda4  li 4, 3
  032eda8  bl 0xfe484
  032edac  nop
  032edb0  ori 29, 3, 0
  032edb4  li 3, 7
  032edb8  li 4, 13
  032edbc  bl 0xfe484
  032edc0  nop
  032edc4  ori 6, 3, 0
  032edc8  ori 3, 31, 0
  032edcc  li 4, 1
  032edd0  ori 5, 29, 0
  032edd4  bl 0xfddc0
  032edd8  nop
  032eddc  li 3, 3
  032ede0  stb 3, 32(31)
  032ede4  lis 3, 51
  032ede8  lis 4, 114
  032edec  addi 3, 3, -5732
  032edf0  lis 6, 114
  032edf4  addic 5, 30, 96
  032edf8  lfs 4, 28(3)
  032edfc  lfs 2, -3048(4)
  032ee00  lfs 1, 84(30)
  032ee04  addic 3, 31, 72
  032ee08  fmuls 2, 2, 4
  032ee0c  lfs 3, -3052(6)
  032ee10  fmuls 4, 3, 4
  032ee14  fmr 3, 2
  032ee18  bl 0x10a2e0
  032ee1c  nop
  032ee20  lwz 3, 92(30)
  032ee24  lbz 4, 83(31)
  032ee28  cmpwi 3, 0
  032ee2c  bt 2, 0x32ee58
  032ee30  lhz 5, 166(3)
  032ee34  cmpwi 5, 36
  032ee38  bf 2, 0x32ee58
  032ee3c  lbz 3, 32(3)
  032ee40  cmpwi 1, 3, 253
  032ee44  cmpwi 3, 254
  032ee48  cror 2, 2, 6
  032ee4c  bt 2, 0x32ee58
  032ee50  cmpwi 3, 2
  032ee54  bf 2, 0x32f53c
  032ee58  cmpwi 4, 0
  032ee5c  bt 2, 0x32ee88
  032ee60  li 3, 7
  032ee64  li 4, 13
  032ee68  bl 0xfe484
  032ee6c  nop
  032ee70  ori 6, 3, 0
  032ee74  ori 3, 31, 0
  032ee78  li 4, 0
  032ee7c  li 5, 0
  032ee80  bl 0xfddc0
  032ee84  nop
  032ee88  lis 3, 16256
  032ee8c  li 4, 5
  032ee90  stw 3, 100(30)
  032ee94  stb 4, 32(31)
  032ee98  b 0x32f53c
  032ee9c  lfs 1, 16(28)
  032eea0  lfs 2, 16(31)
  032eea4  lfs 3, 20(28)
  032eea8  lfs 4, 20(31)
  032eeac  fsubs 1, 1, 2
  032eeb0  lis 3, 51
  032eeb4  fsubs 2, 3, 4
  032eeb8  addi 3, 3, -5732
  032eebc  lis 29, 115
  032eec0  addic 29, 29, 22784
  032eec4  fabs 3, 1
  032eec8  fabs 4, 2
  032eecc  stfs 1, 220(1)
  032eed0  stfs 2, 224(1)
  032eed4  fsubs 1, 3, 4
  032eed8  stfs 1, 228(1)
  032eedc  lwz 4, 220(1)
  032eee0  lfs 31, 16(3)
  032eee4  lfs 1, 220(1)
  032eee8  lwz 3, 224(1)
  032eeec  lfs 2, 224(1)
  032eef0  lwz 5, 228(1)
  032eef4  rlwinm 3, 3, 3, 29, 29
  032eef8  fabs 5, 2
  032eefc  lfs 2, 228(1)
  032ef00  fabs 1, 1
  032ef04  rlwimi 3, 5, 2, 30, 30
  032ef08  fsub 6, 2, 31
  032ef0c  rlwimi 3, 4, 4, 28, 28
  032ef10  fsub 7, 2, 31
  032ef14  ori 4, 29, 0
  032ef18  rlwimi 4, 3, 2, 26, 28
  032ef1c  slwi 3, 3, 2
  032ef20  clrldi 4, 4, 32
  032ef24  fsel 4, 6, 1, 4
  032ef28  lfsx 1, 29, 3
  032ef2c  lfs 2, 4(4)
  032ef30  fsel 3, 7, 5, 3
  032ef34  fcmpu 0, 4, 31
  032ef38  bt 1, 0x32ef44
  032ef3c  fmr 1, 31
  032ef40  b 0x32f068
  032ef44  fsubs 5, 3, 4
  032ef48  fadds 3, 3, 4
  032ef4c  addic 3, 1, 16
  032ef50  li 6, 2
  032ef54  addic 5, 3, 276
  032ef58  addic 4, 3, 260
  032ef5c  mtctr 6
  032ef60  fdivs 3, 5, 3
  032ef64  fmuls 4, 3, 3
  032ef68  stfs 3, 288(1)
  032ef6c  stfs 3, 280(1)
  032ef70  stfs 3, 284(1)
  032ef74  stfs 3, 276(1)
  032ef78  lfs 6, 288(1)
  032ef7c  lfs 7, 280(1)
  032ef80  lfs 8, 284(1)
  032ef84  fmuls 5, 4, 4
  032ef88  fmuls 7, 7, 4
  032ef8c  fmuls 6, 6, 5
  032ef90  fmuls 3, 5, 5
  032ef94  fmuls 5, 8, 5
  032ef98  stfs 7, 280(1)
  032ef9c  fmuls 4, 6, 4
  032efa0  stfs 5, 284(1)
  032efa4  stfs 4, 288(1)
  032efa8  lfs 4, 260(3)
  032efac  fmuls 4, 4, 3
  032efb0  stfs 4, 276(3)
  032efb4  lfs 4, 4(4)
  032efb8  addic 4, 4, 8
  032efbc  fmuls 4, 4, 3
  032efc0  addic 3, 3, 8
  032efc4  stfs 4, 4(5)
  032efc8  addic 5, 5, 8
  032efcc  bdnz 0x32efa8
  032efd0  li 5, 4
  032efd4  ori 3, 1, 0
  032efd8  mtctr 5
  032efdc  lis 4, 115
  032efe0  addic 5, 3, 276
  032efe4  addic 4, 4, 22752
  032efe8  ori 7, 5, 0
  032efec  lfs 3, 276(3)
  032eff0  lfs 4, 0(4)
  032eff4  fmuls 3, 3, 4
  032eff8  lfs 4, 4(4)
  032effc  addic 4, 4, 8
  032f000  stfs 3, 276(3)
  032f004  lfs 3, 4(5)
  032f008  addic 3, 3, 8
  032f00c  fmuls 3, 3, 4
  032f010  stfs 3, 4(5)
  032f014  addic 5, 5, 8
  032f018  bdnz 0x32efec
  032f01c  ori 3, 1, 0
  032f020  fmr 3, 31
  032f024  mtctr 6
  032f028  lfs 4, 276(3)
  032f02c  fadds 3, 3, 4
  032f030  lfs 4, 4(7)
  032f034  addic 3, 3, 16
  032f038  lfs 5, 8(7)
  032f03c  lfs 6, 12(7)
  032f040  addic 7, 7, 16
  032f044  fadds 3, 3, 4
  032f048  fadds 3, 3, 5
  032f04c  fadds 3, 3, 6
  032f050  bdnz 0x32f028
  032f054  lis 3, 51
  032f058  addi 3, 3, -5732
  032f05c  lfs 4, 20(3)
  032f060  fadds 3, 3, 4
  032f064  fmadds 1, 3, 1, 2
  032f068  lfs 2, 84(30)
  032f06c  bl 0x5026a0
  032f070  nop
  032f074  lis 3, 51
  032f078  addi 3, 3, -5732
  032f07c  lfs 2, 24(3)
  032f080  fcmpu 0, 1, 2
  032f084  cror 6, 1, 2
  032f088  bt 6, 0x32f0f0
  032f08c  lfs 1, 20(31)
  032f090  lfs 2, 20(28)
  032f094  lfs 3, 16(31)
  032f098  fsubs 1, 1, 2
  032f09c  lfs 2, 16(28)
  032f0a0  fsubs 2, 3, 2
  032f0a4  lis 3, 51
  032f0a8  addi 3, 3, -5732
  032f0ac  fmuls 1, 1, 1
  032f0b0  fmadds 1, 2, 2, 1
  032f0b4  lfs 2, 4(3)
  032f0b8  fsqrts 1, 1
  032f0bc  fcmpu 0, 1, 2
  032f0c0  bt 1, 0x32f0f0
  032f0c4  lwz 3, 80(30)
  032f0c8  cmpwi 3, -1
  032f0cc  bt 2, 0x32f130
  032f0d0  lis 5, 151
  032f0d4  extsw 4, 3
  032f0d8  addic 3, 5, -25376
  032f0dc  addic 3, 3, 208
  032f0e0  bl 0x110b70
  032f0e4  nop
  032f0e8  cmpwi 3, 0
  032f0ec  bf 2, 0x32f130
  032f0f0  lbz 3, 83(31)
  032f0f4  cmpwi 3, 0
  032f0f8  bt 2, 0x32f124
  032f0fc  li 3, 7
  032f100  li 4, 13
  032f104  bl 0xfe484
  032f108  nop
  032f10c  ori 6, 3, 0
  032f110  ori 3, 31, 0
  032f114  li 4, 0
  032f118  li 5, 0
  032f11c  bl 0xfddc0
  032f120  nop
  032f124  li 3, 1
  032f128  stb 3, 32(31)
  032f12c  b 0x32f53c
  032f130  lis 3, 51
  032f134  fmr 1, 30
  032f138  lis 5, 114
  032f13c  addi 4, 3, -5732
  032f140  addic 3, 30, 104
  032f144  lfs 3, 32(4)
  032f148  lfs 2, -3052(5)
  032f14c  fmuls 2, 2, 3
  032f150  bl 0x109af0
  032f154  nop
  032f158  lfs 1, 16(28)
  032f15c  lfs 2, 16(31)
  032f160  lfs 3, 20(28)
  032f164  lfs 4, 20(31)
  032f168  fsubs 1, 1, 2
  032f16c  fsubs 2, 3, 4
  032f170  fabs 3, 1
  032f174  fabs 4, 2
  032f178  stfs 1, 208(1)
  032f17c  stfs 2, 212(1)
  032f180  fsubs 1, 3, 4
  032f184  stfs 1, 216(1)
  032f188  lwz 3, 208(1)
  032f18c  lfs 1, 208(1)
  032f190  lwz 4, 212(1)
  032f194  lfs 2, 212(1)
  032f198  fabs 1, 1
  032f19c  rlwinm 4, 4, 3, 29, 29
  032f1a0  fabs 5, 2
  032f1a4  lfs 2, 84(30)
  032f1a8  lwz 5, 216(1)
  032f1ac  lfs 6, 216(1)
  032f1b0  rlwimi 4, 5, 2, 30, 30
  032f1b4  fsub 7, 6, 31
  032f1b8  fsub 6, 6, 31
  032f1bc  rlwimi 4, 3, 4, 28, 28
  032f1c0  ori 3, 29, 0
  032f1c4  rlwimi 3, 4, 2, 26, 28
  032f1c8  slwi 4, 4, 2
  032f1cc  clrldi 3, 3, 32
  032f1d0  fsel 4, 7, 1, 4
  032f1d4  lfsx 30, 29, 4
  032f1d8  lfs 1, 4(3)
  032f1dc  fsel 3, 6, 5, 3
  032f1e0  fcmpu 0, 4, 31
  032f1e4  bt 1, 0x32f1ec
  032f1e8  b 0x32f30c
  032f1ec  fsubs 5, 3, 4
  032f1f0  fadds 3, 3, 4
  032f1f4  addic 3, 1, 16
  032f1f8  li 7, 2
  032f1fc  addic 5, 3, 244
  032f200  addic 4, 3, 228
  032f204  mtctr 7
  032f208  fdivs 3, 5, 3
  032f20c  fmuls 4, 3, 3
  032f210  stfs 3, 256(1)
  032f214  stfs 3, 248(1)
  032f218  stfs 3, 252(1)
  032f21c  stfs 3, 244(1)
  032f220  lfs 6, 256(1)
  032f224  lfs 7, 248(1)
  032f228  lfs 8, 252(1)
  032f22c  fmuls 5, 4, 4
  032f230  fmuls 7, 7, 4
  032f234  fmuls 6, 6, 5
  032f238  fmuls 3, 5, 5
  032f23c  fmuls 5, 8, 5
  032f240  stfs 7, 248(1)
  032f244  fmuls 4, 6, 4
  032f248  stfs 5, 252(1)
  032f24c  stfs 4, 256(1)
  032f250  lfs 4, 228(3)
  032f254  fmuls 4, 4, 3
  032f258  stfs 4, 244(3)
  032f25c  lfs 4, 4(4)
  032f260  addic 4, 4, 8
  032f264  fmuls 4, 4, 3
  032f268  addic 3, 3, 8
  032f26c  stfs 4, 4(5)
  032f270  addic 5, 5, 8
  032f274  bdnz 0x32f250
  032f278  li 5, 4
  032f27c  ori 3, 1, 0
  032f280  mtctr 5
  032f284  lis 4, 115
  032f288  addic 5, 3, 244
  032f28c  addic 4, 4, 22752
  032f290  ori 6, 5, 0
  032f294  lfs 3, 244(3)
  032f298  lfs 4, 0(4)
  032f29c  fmuls 3, 3, 4
  032f2a0  lfs 4, 4(4)
  032f2a4  addic 4, 4, 8
  032f2a8  stfs 3, 244(3)
  032f2ac  lfs 3, 4(5)
  032f2b0  addic 3, 3, 8
  032f2b4  fmuls 3, 3, 4
  032f2b8  stfs 3, 4(5)
  032f2bc  addic 5, 5, 8
  032f2c0  bdnz 0x32f294
  032f2c4  ori 3, 1, 0
  032f2c8  mtctr 7
  032f2cc  lfs 3, 244(3)
  032f2d0  lfs 4, 4(6)
  032f2d4  fadds 3, 31, 3
  032f2d8  lfs 5, 8(6)
  032f2dc  addic 3, 3, 16
  032f2e0  lfs 31, 12(6)
  032f2e4  addic 6, 6, 16
  032f2e8  fadds 3, 3, 4
  032f2ec  fadds 3, 3, 5
  032f2f0  fadds 31, 3, 31
  032f2f4  bdnz 0x32f2cc
  032f2f8  lis 3, 51
  032f2fc  addi 3, 3, -5732
  032f300  lfs 3, 20(3)
  032f304  fadds 31, 31, 3
  032f308  fmadds 31, 31, 30, 1
  032f30c  fmr 1, 31
  032f310  bl 0x5025e0
  032f314  nop
  032f318  lis 3, 51
  032f31c  fmr 31, 1
  032f320  addi 3, 3, -5732
  032f324  lfs 2, 36(3)
  032f328  lfs 1, 108(30)
  032f32c  lfs 3, 84(30)
  032f330  fmuls 2, 1, 2
  032f334  fcmpu 0, 31, 2
  032f338  cror 6, 0, 2
  032f33c  bt 6, 0x32f348
  032f340  fmr 31, 2
  032f344  b 0x32f368
  032f348  lis 3, 51
  032f34c  addi 3, 3, -5732
  032f350  lfs 2, 40(3)
  032f354  fmuls 1, 1, 2
  032f358  fcmpu 0, 31, 1
  032f35c  cror 6, 1, 2
  032f360  bt 6, 0x32f368
  032f364  fmr 31, 1
  032f368  fmr 1, 31
  032f36c  fmr 2, 3
  032f370  bl 0x502578
  032f374  nop
  032f378  lis 3, 51
  032f37c  lis 4, 114
  032f380  addi 3, 3, -5732
  032f384  lis 6, 114
  032f388  addic 5, 30, 96
  032f38c  lfs 4, 28(3)
  032f390  lfs 3, -3048(4)
  032f394  addic 3, 31, 72
  032f398  lfs 5, -3052(6)
  032f39c  fmuls 2, 3, 4
  032f3a0  fmuls 4, 5, 4
  032f3a4  fmr 3, 2
  032f3a8  bl 0x10a2e0
  032f3ac  nop
  032f3b0  ori 3, 31, 0
  032f3b4  bl 0x32e710
  032f3b8  lwz 3, 92(30)
  032f3bc  lbz 4, 83(31)
  032f3c0  cmpwi 3, 0
  032f3c4  bt 2, 0x32f3f0
  032f3c8  lhz 5, 166(3)
  032f3cc  cmpwi 5, 36
  032f3d0  bf 2, 0x32f3f0
  032f3d4  lbz 3, 32(3)
  032f3d8  cmpwi 1, 3, 253
  032f3dc  cmpwi 3, 254
  032f3e0  cror 2, 2, 6
  032f3e4  bt 2, 0x32f3f0
  032f3e8  cmpwi 3, 2
  032f3ec  bf 2, 0x32f53c
  032f3f0  cmpwi 4, 0
  032f3f4  bt 2, 0x32f420
  032f3f8  li 3, 7
  032f3fc  li 4, 13
  032f400  bl 0xfe484
  032f404  nop
  032f408  ori 6, 3, 0
  032f40c  ori 3, 31, 0
  032f410  li 4, 0
  032f414  li 5, 0
  032f418  bl 0xfddc0
  032f41c  nop
  032f420  lis 3, 16256
  032f424  li 4, 5
  032f428  stw 3, 100(30)
  032f42c  stb 4, 32(31)
  032f430  b 0x32f53c
  032f434  lis 3, 51
  032f438  addic 29, 1, 192
  032f43c  addi 30, 3, -5732
  032f440  ori 3, 29, 0
  032f444  lfs 31, 48(30)
  032f448  lfs 1, 44(30)
  032f44c  fmr 2, 31
  032f450  bl 0xfea60
  032f454  nop
  032f458  ori 3, 31, 0
  032f45c  li 4, 0
  032f460  li 5, -1
  032f464  bl 0xfd8d0
  032f468  nop
  032f46c  lfs 1, 16(30)
  032f470  li 7, -1
  032f474  li 6, 1
  032f478  lfs 3, 52(30)
  032f47c  lfs 5, 56(30)
  032f480  li 11, 0
  032f484  lfs 7, 60(30)
  032f488  ori 3, 31, 0
  032f48c  std 7, 144(1)
  032f490  addic 5, 31, 16
  032f494  std 6, 160(1)
  032f498  ori 4, 29, 0
  032f49c  std 6, 168(1)
  032f4a0  fmr 4, 31
  032f4a4  std 7, 176(1)
  032f4a8  li 8, 5
  032f4ac  fmr 6, 31
  032f4b0  li 9, 2
  032f4b4  li 10, 4
  032f4b8  fmr 2, 1
  032f4bc  std 11, 184(1)
  032f4c0  bl 0x10e030
  032f4c4  nop
  032f4c8  ori 3, 31, 0
  032f4cc  bl 0xefb38
  032f4d0  nop
  032f4d4  b 0x32f5c0
  032f4d8  lis 3, 51
  032f4dc  lis 4, 114
  032f4e0  addi 29, 3, -5732
  032f4e4  lis 3, 114
  032f4e8  addic 5, 30, 96
  032f4ec  lfs 3, 28(29)
  032f4f0  lfs 2, -3048(3)
  032f4f4  lfs 5, 64(29)
  032f4f8  addic 3, 31, 72
  032f4fc  fmuls 2, 2, 3
  032f500  lfs 1, 84(30)
  032f504  lfs 6, -3052(4)
  032f508  fmuls 4, 6, 5
  032f50c  fmr 3, 2
  032f510  bl 0x10a2e0
  032f514  nop
  032f518  lfs 1, 48(29)
  032f51c  lfs 2, 100(30)
  032f520  fsubs 1, 2, 1
  032f524  stfs 1, 100(30)
  032f528  lfs 2, 16(29)
  032f52c  fcmpu 0, 1, 2
  032f530  bt 1, 0x32f53c
  032f534  li 3, 4
  032f538  stb 3, 32(31)
  032f53c  lwz 3, 92(30)
  032f540  cmpwi 3, 0
  032f544  bt 2, 0x32f5b8
  032f548  lhz 4, 166(3)
  032f54c  cmpwi 4, 36
  032f550  bf 2, 0x32f5b8
  032f554  lbz 4, 32(3)
  032f558  cmpwi 1, 4, 253
  032f55c  cmpwi 4, 254
  032f560  cror 2, 2, 6
  032f564  bt 2, 0x32f5b8
  032f568  lfs 1, 64(31)
  032f56c  addic 4, 31, 192
  032f570  stfs 1, 64(3)
  032f574  lfs 1, 68(31)
  032f578  li 5, 208
  032f57c  li 6, 224
  032f580  stfs 1, 68(3)
  032f584  lfs 1, 72(31)
  032f588  stfs 1, 72(3)
  032f58c  lfs 1, 76(31)
  032f590  stfs 1, 76(3)
  032f594  lwz 3, 92(30)
  032f598  lvx 2, 0, 4
  032f59c  addic 7, 3, 192
  032f5a0  lvx 3, 5, 31
  032f5a4  lvx 4, 6, 31
  032f5a8  stvx 2, 0, 7
  032f5ac  stvx 3, 5, 3
  032f5b0  stvx 4, 6, 3
  032f5b4  b 0x32f5c0
  032f5b8  li 3, 0
  032f5bc  stw 3, 92(30)
  032f5c0  ld 0, 416(1)
  032f5c4  mtlr 0
  032f5c8  lfd 30, 384(1)
  032f5cc  lfd 31, 392(1)
  032f5d0  ld 28, 352(1)
  032f5d4  ld 29, 360(1)
  032f5d8  ld 30, 368(1)
  032f5dc  ld 31, 376(1)
  032f5e0  addi 1, 1, 400
  032f5e4  blr
