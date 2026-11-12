# game/update/moby1292.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1292_0023e6bc:   # 0x23e6bc, 0x14 bytes
  023e6bc  lis 3, 121
  023e6c0  lis 4, 1
  023e6c4  addic 3, 3, -8480
  023e6c8  stw 4, 72(3)
  023e6cc  blr

FUN_0023e6e0:   # 0x23e6e0, 0x494 bytes
  023e6e0  stdu 1, -272(1)
  023e6e4  mflr 0
  023e6e8  std 0, 288(1)
  023e6ec  addi 0, 1, 208
  023e6f0  stvx 31, 0, 0
  023e6f4  std 31, 264(1)
  023e6f8  ori 31, 3, 0
  023e6fc  li 3, 1292
  023e700  stw 7, 192(1)
  023e704  li 0, 192
  023e708  stw 7, 196(1)
  023e70c  std 27, 232(1)
  023e710  stw 7, 200(1)
  023e714  ori 27, 8, 0
  023e718  std 29, 248(1)
  023e71c  std 28, 240(1)
  023e720  stw 7, 204(1)
  023e724  ori 28, 6, 0
  023e728  std 30, 256(1)
  023e72c  ori 29, 5, 0
  023e730  ori 30, 4, 0
  023e734  std 26, 224(1)
  023e738  lvx 31, 1, 0
  023e73c  bl 0xefa28
  023e740  nop
  023e744  ori 26, 3, 0
  023e748  cmpwi 26, 0
  023e74c  bt 2, 0x23eb40
  023e750  li 3, 255
  023e754  vcfsx 2, 31, 0
  023e758  li 4, 126
  023e75c  li 5, 1
  023e760  stb 3, 48(26)
  023e764  sth 4, 50(26)
  023e768  stb 5, 49(26)
  023e76c  lis 4, 36
  023e770  stb 5, 32(26)
  023e774  lfs 1, 0(30)
  023e778  lwz 3, 120(26)
  023e77c  addi 4, 4, -6448
  023e780  stfs 1, 16(26)
  023e784  lfs 1, 4(30)
  023e788  stfs 1, 20(26)
  023e78c  lfs 1, 8(30)
  023e790  vspltisw 4, -1
  023e794  lis 7, 114
  023e798  stfs 1, 24(26)
  023e79c  li 8, -3056
  023e7a0  lfs 1, 12(30)
  023e7a4  stfs 1, 28(26)
  023e7a8  lwz 5, 0(31)
  023e7ac  lfs 1, 0(31)
  023e7b0  stfs 1, 0(3)
  023e7b4  lwz 6, 4(31)
  023e7b8  lfs 2, 4(31)
  023e7bc  fabs 5, 1
  023e7c0  stfs 2, 4(3)
  023e7c4  lfs 3, 8(31)
  023e7c8  stfs 3, 8(3)
  023e7cc  lfs 3, 12(31)
  023e7d0  stfs 3, 12(3)
  023e7d4  lvlx 3, 0, 4
  023e7d8  vspltw 3, 3, 0
  023e7dc  fabs 3, 2
  023e7e0  rlwinm 6, 6, 3, 29, 29
  023e7e4  vaddfp 2, 2, 3
  023e7e8  vslw 3, 4, 4
  023e7ec  lvlx 4, 8, 7
  023e7f0  li 7, 24
  023e7f4  li 8, 0
  023e7f8  fsubs 1, 5, 3
  023e7fc  lis 31, 115
  023e800  addic 31, 31, 22784
  023e804  vmaddfp 2, 4, 2, 3
  023e808  vctsxs 2, 2, 0
  023e80c  vspltw 2, 2, 0
  023e810  stvewx 2, 7, 3
  023e814  stw 29, 16(3)
  023e818  stw 28, 20(3)
  023e81c  lfs 4, 4(4)
  023e820  stw 8, 40(3)
  023e824  stw 27, 44(3)
  023e828  stfs 1, 120(1)
  023e82c  lfs 2, 8(4)
  023e830  lwz 4, 120(1)
  023e834  lfs 1, 120(1)
  023e838  rlwimi 6, 4, 2, 30, 30
  023e83c  fsub 6, 1, 4
  023e840  fsub 7, 1, 4
  023e844  rlwimi 6, 5, 4, 28, 28
  023e848  ori 4, 31, 0
  023e84c  slwi 5, 6, 2
  023e850  rlwimi 4, 6, 2, 26, 28
  023e854  clrldi 4, 4, 32
  023e858  lfsx 1, 31, 5
  023e85c  fsel 6, 6, 5, 3
  023e860  fsel 5, 7, 3, 5
  023e864  lfs 3, 4(4)
  023e868  fcmpu 0, 6, 4
  023e86c  bt 1, 0x23e878
  023e870  fmr 1, 4
  023e874  b 0x23e990
  023e878  fsubs 7, 5, 6
  023e87c  fadds 5, 5, 6
  023e880  addic 4, 1, 16
  023e884  li 8, 2
  023e888  addic 5, 4, 140
  023e88c  addic 6, 4, 156
  023e890  mtctr 8
  023e894  fdivs 5, 7, 5
  023e898  fmuls 6, 5, 5
  023e89c  stfs 5, 168(1)
  023e8a0  stfs 5, 160(1)
  023e8a4  stfs 5, 164(1)
  023e8a8  stfs 5, 156(1)
  023e8ac  lfs 8, 168(1)
  023e8b0  lfs 9, 160(1)
  023e8b4  lfs 10, 164(1)
  023e8b8  fmuls 7, 6, 6
  023e8bc  fmuls 9, 9, 6
  023e8c0  fmuls 8, 8, 7
  023e8c4  fmuls 5, 7, 7
  023e8c8  fmuls 7, 10, 7
  023e8cc  stfs 9, 160(1)
  023e8d0  fmuls 6, 8, 6
  023e8d4  stfs 7, 164(1)
  023e8d8  stfs 6, 168(1)
  023e8dc  lfs 6, 140(4)
  023e8e0  fmuls 6, 6, 5
  023e8e4  stfs 6, 156(4)
  023e8e8  lfs 6, 4(5)
  023e8ec  addic 4, 4, 8
  023e8f0  addic 5, 5, 8
  023e8f4  fmuls 6, 6, 5
  023e8f8  stfs 6, 4(6)
  023e8fc  addic 6, 6, 8
  023e900  bdnz 0x23e8dc
  023e904  ori 4, 1, 0
  023e908  lis 5, 115
  023e90c  li 9, 4
  023e910  addic 6, 4, 156
  023e914  addic 5, 5, 22752
  023e918  ori 7, 6, 0
  023e91c  mtctr 9
  023e920  lfs 5, 156(4)
  023e924  lfs 6, 0(5)
  023e928  fmuls 5, 5, 6
  023e92c  lfs 6, 4(5)
  023e930  addic 5, 5, 8
  023e934  stfs 5, 156(4)
  023e938  lfs 5, 4(6)
  023e93c  addic 4, 4, 8
  023e940  fmuls 5, 5, 6
  023e944  stfs 5, 4(6)
  023e948  addic 6, 6, 8
  023e94c  bdnz 0x23e920
  023e950  fmr 5, 4
  023e954  ori 4, 1, 0
  023e958  mtctr 8
  023e95c  lfs 6, 156(4)
  023e960  fadds 5, 5, 6
  023e964  addic 4, 4, 16
  023e968  lfs 6, 4(7)
  023e96c  lfs 7, 8(7)
  023e970  lfs 8, 12(7)
  023e974  addic 7, 7, 16
  023e978  fadds 5, 5, 6
  023e97c  fadds 5, 5, 7
  023e980  fadds 5, 5, 8
  023e984  bdnz 0x23e95c
  023e988  fadds 5, 5, 2
  023e98c  fmadds 1, 5, 1, 3
  023e990  stfs 1, 72(26)
  023e994  lfs 1, 4(3)
  023e998  lfs 3, 0(3)
  023e99c  fmuls 1, 1, 1
  023e9a0  lwz 4, 8(3)
  023e9a4  fmadds 1, 3, 3, 1
  023e9a8  lfs 3, 8(3)
  023e9ac  rlwinm 3, 4, 3, 29, 29
  023e9b0  fabs 5, 3
  023e9b4  fsqrts 1, 1
  023e9b8  fabs 7, 1
  023e9bc  stfs 1, 112(1)
  023e9c0  fsubs 1, 7, 5
  023e9c4  stfs 1, 116(1)
  023e9c8  lwz 4, 112(1)
  023e9cc  lfs 1, 112(1)
  023e9d0  lwz 5, 116(1)
  023e9d4  fabs 6, 1
  023e9d8  lfs 1, 116(1)
  023e9dc  rlwimi 3, 5, 2, 30, 30
  023e9e0  fsub 3, 1, 4
  023e9e4  rlwimi 3, 4, 4, 28, 28
  023e9e8  fsub 8, 1, 4
  023e9ec  ori 4, 31, 0
  023e9f0  rlwimi 4, 3, 2, 26, 28
  023e9f4  slwi 3, 3, 2
  023e9f8  clrldi 4, 4, 32
  023e9fc  lfsx 1, 31, 3
  023ea00  fsel 6, 3, 6, 5
  023ea04  lfs 3, 4(4)
  023ea08  fsel 5, 8, 5, 7
  023ea0c  fcmpu 0, 6, 4
  023ea10  bt 1, 0x23ea18
  023ea14  b 0x23eb2c
  023ea18  fsubs 7, 5, 6
  023ea1c  fadds 5, 5, 6
  023ea20  addic 3, 1, 16
  023ea24  li 6, 2
  023ea28  addic 4, 3, 108
  023ea2c  addic 5, 3, 124
  023ea30  mtctr 6
  023ea34  fdivs 5, 7, 5
  023ea38  fmuls 6, 5, 5
  023ea3c  stfs 5, 136(1)
  023ea40  stfs 5, 128(1)
  023ea44  stfs 5, 132(1)
  023ea48  stfs 5, 124(1)
  023ea4c  lfs 8, 136(1)
  023ea50  lfs 9, 128(1)
  023ea54  lfs 10, 132(1)
  023ea58  fmuls 7, 6, 6
  023ea5c  fmuls 9, 9, 6
  023ea60  fmuls 8, 8, 7
  023ea64  fmuls 5, 7, 7
  023ea68  fmuls 7, 10, 7
  023ea6c  stfs 9, 128(1)
  023ea70  fmuls 6, 8, 6
  023ea74  stfs 7, 132(1)
  023ea78  stfs 6, 136(1)
  023ea7c  lfs 6, 108(3)
  023ea80  fmuls 6, 6, 5
  023ea84  stfs 6, 124(3)
  023ea88  lfs 6, 4(4)
  023ea8c  addic 3, 3, 8
  023ea90  addic 4, 4, 8
  023ea94  fmuls 6, 6, 5
  023ea98  stfs 6, 4(5)
  023ea9c  addic 5, 5, 8
  023eaa0  bdnz 0x23ea7c
  023eaa4  ori 3, 1, 0
  023eaa8  lis 4, 115
  023eaac  li 8, 4
  023eab0  addic 5, 3, 124
  023eab4  addic 4, 4, 22752
  023eab8  ori 7, 5, 0
  023eabc  mtctr 8
  023eac0  lfs 5, 124(3)
  023eac4  lfs 6, 0(4)
  023eac8  fmuls 5, 5, 6
  023eacc  lfs 6, 4(4)
  023ead0  addic 4, 4, 8
  023ead4  stfs 5, 124(3)
  023ead8  lfs 5, 4(5)
  023eadc  addic 3, 3, 8
  023eae0  fmuls 5, 5, 6
  023eae4  stfs 5, 4(5)
  023eae8  addic 5, 5, 8
  023eaec  bdnz 0x23eac0
  023eaf0  ori 3, 1, 0
  023eaf4  mtctr 6
  023eaf8  lfs 5, 124(3)
  023eafc  fadds 4, 4, 5
  023eb00  lfs 5, 4(7)
  023eb04  addic 3, 3, 16
  023eb08  lfs 6, 8(7)
  023eb0c  lfs 7, 12(7)
  023eb10  addic 7, 7, 16
  023eb14  fadds 4, 4, 5
  023eb18  fadds 4, 4, 6
  023eb1c  fadds 4, 4, 7
  023eb20  bdnz 0x23eaf8
  023eb24  fadds 4, 4, 2
  023eb28  fmadds 4, 4, 1, 3
  023eb2c  fneg 1, 4
  023eb30  ori 3, 26, 0
  023eb34  stfs 1, 68(26)
  023eb38  bl 0xf31a8
  023eb3c  nop
  023eb40  ori 3, 26, 0
  023eb44  li 0, 208
  023eb48  lvx 31, 1, 0
  023eb4c  ld 0, 288(1)
  023eb50  mtlr 0
  023eb54  ld 26, 224(1)
  023eb58  ld 27, 232(1)
  023eb5c  ld 28, 240(1)
  023eb60  ld 29, 248(1)
  023eb64  ld 30, 256(1)
  023eb68  ld 31, 264(1)
  023eb6c  addi 1, 1, 272
  023eb70  blr

UpdateMoby_1292:   # 0x23eb98, 0x42c bytes
  023eb98  stdu 1, -240(1)
  023eb9c  mflr 0
  023eba0  std 0, 256(1)
  023eba4  stfd 31, 232(1)
  023eba8  std 31, 224(1)
  023ebac  lbz 4, 32(3)
  023ebb0  std 30, 216(1)
  023ebb4  ori 31, 3, 0
  023ebb8  lwz 30, 120(3)
  023ebbc  cmpwi 4, 1
  023ebc0  cmpwi 1, 4, 2
  023ebc4  std 29, 208(1)
  023ebc8  std 28, 200(1)
  023ebcc  std 27, 192(1)
  023ebd0  cmpwi 6, 4, 0
  023ebd4  bt 1, 0x23ebe0
  023ebd8  bf 25, 0x23ef9c
  023ebdc  b 0x23ebe8
  023ebe0  bf 5, 0x23eee8
  023ebe4  b 0x23ef9c
  023ebe8  lfs 3, 16(31)
  023ebec  lfs 2, 20(31)
  023ebf0  lfs 1, 24(31)
  023ebf4  lfs 4, 28(31)
  023ebf8  lwz 3, 20(30)
  023ebfc  stfs 4, 124(1)
  023ec00  stfs 3, 112(1)
  023ec04  cmpwi 3, 0
  023ec08  stfs 2, 116(1)
  023ec0c  stfs 1, 120(1)
  023ec10  bt 2, 0x23ec28
  023ec14  lbz 3, 32(3)
  023ec18  cmpwi 3, 254
  023ec1c  cmpwi 1, 3, 253
  023ec20  bt 2, 0x23ec28
  023ec24  bf 6, 0x23ec30
  023ec28  li 3, 2
  023ec2c  stb 3, 32(31)
  023ec30  lis 3, 161
  023ec34  lis 4, 16230
  023ec38  ori 4, 4, 26214
  023ec3c  lwz 3, 1816(3)
  023ec40  srawi 5, 3, 31
  023ec44  srwi 6, 5, 1
  023ec48  xor 3, 6, 3
  023ec4c  subc 3, 3, 5
  023ec50  cmpw 3, 4
  023ec54  bf 0, 0x23ee2c
  023ec58  lis 3, 161
  023ec5c  lis 4, 16230
  023ec60  ori 4, 4, 26214
  023ec64  lwz 3, 1812(3)
  023ec68  srawi 5, 3, 31
  023ec6c  srwi 6, 5, 1
  023ec70  xor 3, 6, 3
  023ec74  subc 3, 3, 5
  023ec78  cmpw 3, 4
  023ec7c  bf 0, 0x23ee2c
  023ec80  lis 3, 36
  023ec84  addi 29, 3, -5260
  023ec88  lfs 1, 0(29)
  023ec8c  lfs 2, 4(29)
  023ec90  bl 0xfcbe8
  023ec94  nop
  023ec98  lfs 2, 0(30)
  023ec9c  fmuls 2, 2, 1
  023eca0  stfs 2, 128(1)
  023eca4  lfs 2, 4(30)
  023eca8  fmuls 2, 2, 1
  023ecac  stfs 2, 132(1)
  023ecb0  lfs 2, 8(30)
  023ecb4  fmuls 1, 2, 1
  023ecb8  stfs 1, 136(1)
  023ecbc  lfs 1, 12(30)
  023ecc0  stfs 1, 140(1)
  023ecc4  lfs 2, 4(30)
  023ecc8  lfs 1, 0(30)
  023eccc  fmuls 2, 2, 2
  023ecd0  lfs 3, 8(30)
  023ecd4  fmadds 2, 1, 1, 2
  023ecd8  fmadds 2, 3, 3, 2
  023ecdc  lfs 3, 8(29)
  023ece0  fsqrts 2, 2
  023ece4  fcmpu 0, 2, 3
  023ece8  bf 2, 0x23ed18
  023ecec  stfs 1, 144(1)
  023ecf0  lfs 1, 4(30)
  023ecf4  li 3, 0
  023ecf8  stfs 1, 148(1)
  023ecfc  lfs 1, 8(30)
  023ed00  stfs 1, 152(1)
  023ed04  lfs 1, 12(30)
  023ed08  stw 3, 152(1)
  023ed0c  stw 3, 148(1)
  023ed10  stw 3, 144(1)
  023ed14  b 0x23ed4c
  023ed18  lis 3, 36
  023ed1c  addi 3, 3, -5260
  023ed20  lfs 3, 12(3)
  023ed24  fdivs 2, 3, 2
  023ed28  fmuls 1, 1, 2
  023ed2c  stfs 1, 144(1)
  023ed30  lfs 1, 4(30)
  023ed34  fmuls 1, 1, 2
  023ed38  stfs 1, 148(1)
  023ed3c  lfs 1, 8(30)
  023ed40  fmuls 1, 1, 2
  023ed44  stfs 1, 152(1)
  023ed48  lfs 1, 12(30)
  023ed4c  addic 29, 1, 144
  023ed50  addic 3, 1, 160
  023ed54  stfs 1, 156(1)
  023ed58  addic 5, 31, 16
  023ed5c  ori 4, 29, 0
  023ed60  bl 0x502b08
  023ed64  nop
  023ed68  li 3, 15
  023ed6c  li 4, 20
  023ed70  bl 0xfe484
  023ed74  nop
  023ed78  extsw 3, 3
  023ed7c  lis 28, 114
  023ed80  std 3, 176(1)
  023ed84  lis 3, 36
  023ed88  addi 3, 3, -5260
  023ed8c  li 4, 10
  023ed90  lfs 31, 16(3)
  023ed94  lfs 1, -3056(28)
  023ed98  lfd 2, 176(1)
  023ed9c  li 3, 7
  023eda0  fcfid 2, 2
  023eda4  frsp 2, 2
  023eda8  fadds 2, 2, 31
  023edac  fmuls 1, 1, 2
  023edb0  fctiwz 1, 1
  023edb4  stfd 1, 176(1)
  023edb8  lwz 5, 180(1)
  023edbc  extsw 27, 5
  023edc0  bl 0xfe484
  023edc4  nop
  023edc8  extsw 3, 3
  023edcc  lis 5, 28416
  023edd0  li 8, 40
  023edd4  std 3, 176(1)
  023edd8  lfs 1, -3056(28)
  023eddc  lfd 2, 176(1)
  023ede0  fcfid 2, 2
  023ede4  ori 3, 29, 0
  023ede8  addic 4, 1, 128
  023edec  ori 5, 5, 45055
  023edf0  li 6, 255
  023edf4  ori 7, 27, 0
  023edf8  li 10, 1
  023edfc  frsp 2, 2
  023ee00  fadds 2, 2, 31
  023ee04  fmuls 1, 1, 2
  023ee08  fctiwz 1, 1
  023ee0c  stfd 1, 176(1)
  023ee10  lwz 9, 180(1)
  023ee14  extsw 9, 9
  023ee18  bl 0x121740
  023ee1c  nop
  023ee20  lfs 3, 16(31)
  023ee24  lfs 2, 20(31)
  023ee28  lfs 1, 24(31)
  023ee2c  lfs 4, 0(30)
  023ee30  lwz 6, 16(30)
  023ee34  fadds 3, 3, 4
  023ee38  addic 3, 31, 16
  023ee3c  addic 4, 1, 112
  023ee40  li 5, 16
  023ee44  li 7, 0
  023ee48  stfs 3, 16(31)
  023ee4c  lfs 3, 4(30)
  023ee50  fadds 2, 2, 3
  023ee54  stfs 2, 20(31)
  023ee58  lfs 2, 8(30)
  023ee5c  fadds 1, 1, 2
  023ee60  stfs 1, 24(31)
  023ee64  bl 0x57820
  023ee68  nop
  023ee6c  cmpwi 3, 0
  023ee70  bt 2, 0x23eec8
  023ee74  lis 3, 161
  023ee78  lwz 5, 16(30)
  023ee7c  addic 3, 3, 2368
  023ee80  lwz 4, 24(3)
  023ee84  cmpw 4, 5
  023ee88  cmpwi 1, 4, 0
  023ee8c  bt 2, 0x23eec8
  023ee90  bt 6, 0x23eec0
  023ee94  lis 5, 36
  023ee98  addic 7, 3, 32
  023ee9c  addi 5, 5, -5260
  023eea0  lis 6, 1
  023eea4  ori 3, 4, 0
  023eea8  ori 8, 30, 0
  023eeac  ori 4, 31, 0
  023eeb0  lfs 1, 20(5)
  023eeb4  ori 5, 6, 1
  023eeb8  bl 0x105c08
  023eebc  nop
  023eec0  li 3, 2
  023eec4  stb 3, 32(31)
  023eec8  addic 3, 30, 24
  023eecc  bl 0x4fff60
  023eed0  nop
  023eed4  cmpwi 3, 0
  023eed8  bt 2, 0x23ef9c
  023eedc  li 3, 2
  023eee0  stb 3, 32(31)
  023eee4  b 0x23ef9c
  023eee8  lis 3, 161
  023eeec  lis 4, 16217
  023eef0  ori 4, 4, 39322
  023eef4  lwz 3, 1816(3)
  023eef8  srawi 5, 3, 31
  023eefc  srwi 6, 5, 1
  023ef00  xor 3, 6, 3
  023ef04  subc 3, 3, 5
  023ef08  cmpw 3, 4
  023ef0c  bf 0, 0x23ef38
  023ef10  lis 3, 161
  023ef14  lis 4, 16217
  023ef18  ori 4, 4, 39322
  023ef1c  lwz 3, 1812(3)
  023ef20  srawi 5, 3, 31
  023ef24  srwi 6, 5, 1
  023ef28  xor 3, 6, 3
  023ef2c  subc 3, 3, 5
  023ef30  cmpw 3, 4
  023ef34  bt 0, 0x23ef44
  023ef38  lwz 3, 44(30)
  023ef3c  cmpwi 3, 1
  023ef40  bf 2, 0x23ef6c
  023ef44  lis 3, 36
  023ef48  addic 4, 31, 16
  023ef4c  addi 5, 3, -5260
  023ef50  ori 3, 31, 0
  023ef54  li 6, -1
  023ef58  lfs 1, 24(5)
  023ef5c  lfs 2, 28(5)
  023ef60  bl 0x10fb28
  023ef64  nop
  023ef68  b 0x23ef90
  023ef6c  lis 3, 36
  023ef70  addic 4, 31, 16
  023ef74  addi 5, 3, -5260
  023ef78  ori 3, 31, 0
  023ef7c  li 6, -1
  023ef80  lfs 1, 24(5)
  023ef84  lfs 2, 8(5)
  023ef88  bl 0x10fb28
  023ef8c  nop
  023ef90  ori 3, 31, 0
  023ef94  bl 0xefb38
  023ef98  nop
  023ef9c  ld 0, 256(1)
  023efa0  mtlr 0
  023efa4  lfd 31, 232(1)
  023efa8  ld 27, 192(1)
  023efac  ld 28, 200(1)
  023efb0  ld 29, 208(1)
  023efb4  ld 30, 216(1)
  023efb8  ld 31, 224(1)
  023efbc  addi 1, 1, 240
  023efc0  blr
