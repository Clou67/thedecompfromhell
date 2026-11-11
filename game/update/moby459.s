# game/update/moby459.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M459_0038e938:   # 0x38e938, 0x14 bytes
  038e938  lis 3, 132
  038e93c  lis 4, 1
  038e940  addic 3, 3, 8616
  038e944  stw 4, 72(3)
  038e948  blr

M459_0038e978:   # 0x38e978, 0x374 bytes
  038e978  stdu 1, -368(1)
  038e97c  mflr 0
  038e980  std 0, 384(1)
  038e984  stfd 19, 264(1)
  038e988  stfd 20, 272(1)
  038e98c  stfd 21, 280(1)
  038e990  stfd 22, 288(1)
  038e994  stfd 23, 296(1)
  038e998  stfd 24, 304(1)
  038e99c  stfd 25, 312(1)
  038e9a0  stfd 26, 320(1)
  038e9a4  stfd 27, 328(1)
  038e9a8  stfd 28, 336(1)
  038e9ac  stfd 29, 344(1)
  038e9b0  stfd 30, 352(1)
  038e9b4  stfd 31, 360(1)
  038e9b8  lis 4, 57
  038e9bc  addi 4, 4, -5808
  038e9c0  std 29, 240(1)
  038e9c4  li 7, 368
  038e9c8  li 29, 0
  038e9cc  std 30, 248(1)
  038e9d0  addc 7, 1, 7
  038e9d4  ori 30, 29, 0
  038e9d8  std 31, 256(1)
  038e9dc  lfs 20, 0(4)
  038e9e0  ori 31, 3, 0
  038e9e4  lfs 21, 4(4)
  038e9e8  lfs 22, 8(4)
  038e9ec  lfs 23, 12(4)
  038e9f0  lfs 24, 16(4)
  038e9f4  lfs 25, 20(4)
  038e9f8  lfs 26, 24(4)
  038e9fc  lfs 27, 28(4)
  038ea00  lfs 28, 32(4)
  038ea04  std 5, 64(7)
  038ea08  std 6, 72(7)
  038ea0c  lfs 30, 68(7)
  038ea10  std 28, 232(1)
  038ea14  std 27, 224(1)
  038ea18  std 26, 216(1)
  038ea1c  lfs 29, 64(7)
  038ea20  lfs 31, 72(7)
  038ea24  stw 30, 112(1)
  038ea28  stw 30, 116(1)
  038ea2c  fmr 1, 20
  038ea30  stw 30, 120(1)
  038ea34  fmr 2, 21
  038ea38  stw 30, 124(1)
  038ea3c  bl 0xfcbe8
  038ea40  nop
  038ea44  lis 28, 114
  038ea48  lfs 2, -3052(28)
  038ea4c  fmuls 3, 2, 22
  038ea50  fmr 2, 21
  038ea54  fmuls 3, 3, 1
  038ea58  fmr 1, 20
  038ea5c  stfs 3, 112(1)
  038ea60  bl 0xfcbe8
  038ea64  nop
  038ea68  lfs 2, -3052(28)
  038ea6c  fmuls 3, 2, 22
  038ea70  fmr 2, 24
  038ea74  fmuls 3, 3, 1
  038ea78  fmr 1, 23
  038ea7c  stfs 3, 116(1)
  038ea80  bl 0xfcbe8
  038ea84  nop
  038ea88  lfs 2, -3052(28)
  038ea8c  lis 3, 20224
  038ea90  lis 5, 20224
  038ea94  fmuls 2, 2, 25
  038ea98  ori 3, 3, 36863
  038ea9c  lis 4, 12287
  038eaa0  lis 6, 20224
  038eaa4  ori 5, 5, 32767
  038eaa8  ori 4, 4, 65535
  038eaac  stw 3, 144(1)
  038eab0  ori 6, 6, 28671
  038eab4  stw 3, 148(1)
  038eab8  lis 3, 12032
  038eabc  stw 5, 152(1)
  038eac0  stw 4, 160(1)
  038eac4  lis 5, 12032
  038eac8  fmuls 1, 2, 1
  038eacc  stw 6, 156(1)
  038ead0  ori 3, 3, 24447
  038ead4  stw 4, 164(1)
  038ead8  ori 4, 5, 20351
  038eadc  lis 6, 12032
  038eae0  lis 5, 12032
  038eae4  stw 3, 168(1)
  038eae8  ori 3, 6, 16255
  038eaec  stw 4, 172(1)
  038eaf0  ori 4, 5, 79
  038eaf4  lis 7, 12032
  038eaf8  lis 5, 16128
  038eafc  addic 28, 1, 128
  038eb00  stfs 1, 120(1)
  038eb04  stw 3, 176(1)
  038eb08  stw 4, 180(1)
  038eb0c  ori 3, 31, 0
  038eb10  stw 7, 184(1)
  038eb14  li 4, 1
  038eb18  stw 5, 188(1)
  038eb1c  ori 5, 28, 0
  038eb20  bl 0xf1114
  038eb24  nop
  038eb28  lfs 1, 116(1)
  038eb2c  lfs 2, 112(1)
  038eb30  lfs 3, 220(31)
  038eb34  lfs 4, 204(31)
  038eb38  fmuls 3, 3, 1
  038eb3c  lfs 5, 120(1)
  038eb40  lfs 6, 208(31)
  038eb44  lfs 7, 212(31)
  038eb48  lfs 8, 216(31)
  038eb4c  fmuls 6, 6, 1
  038eb50  fmuls 7, 7, 1
  038eb54  lfs 9, 236(31)
  038eb58  fmuls 1, 8, 1
  038eb5c  lfs 10, 192(31)
  038eb60  lfs 8, 196(31)
  038eb64  lfs 11, 200(31)
  038eb68  li 3, 6
  038eb6c  fmadds 3, 4, 2, 3
  038eb70  lfs 4, 124(1)
  038eb74  lfs 12, 224(31)
  038eb78  fmadds 6, 10, 2, 6
  038eb7c  fmadds 7, 8, 2, 7
  038eb80  fmadds 1, 11, 2, 1
  038eb84  lfs 8, 228(31)
  038eb88  lfs 2, 232(31)
  038eb8c  fmadds 3, 9, 5, 3
  038eb90  fmadds 6, 12, 5, 6
  038eb94  fmadds 7, 8, 5, 7
  038eb98  fmadds 1, 2, 5, 1
  038eb9c  fadds 2, 3, 4
  038eba0  stfs 2, 124(1)
  038eba4  lfs 2, 16(31)
  038eba8  lfs 3, 20(31)
  038ebac  fsubs 2, 2, 29
  038ebb0  lfs 4, 24(31)
  038ebb4  fsubs 3, 3, 30
  038ebb8  fsubs 4, 4, 31
  038ebbc  fadds 2, 6, 2
  038ebc0  fadds 3, 7, 3
  038ebc4  fadds 1, 1, 4
  038ebc8  stfs 2, 112(1)
  038ebcc  stfs 3, 116(1)
  038ebd0  stfs 1, 120(1)
  038ebd4  bl 0xfc620
  038ebd8  nop
  038ebdc  sldi 3, 3, 2
  038ebe0  addc 3, 3, 1
  038ebe4  clrldi 4, 3, 32
  038ebe8  li 3, 6
  038ebec  lwz 4, 144(4)
  038ebf0  extsw 27, 4
  038ebf4  bl 0xfc620
  038ebf8  nop
  038ebfc  sldi 3, 3, 2
  038ec00  fmr 1, 26
  038ec04  addc 3, 3, 1
  038ec08  fmr 2, 27
  038ec0c  clrldi 3, 3, 32
  038ec10  lwz 3, 168(3)
  038ec14  extsw 26, 3
  038ec18  bl 0xfcbe8
  038ec1c  nop
  038ec20  li 3, 5
  038ec24  fmr 19, 1
  038ec28  li 4, 15
  038ec2c  bl 0xfe484
  038ec30  nop
  038ec34  extsw 3, 3
  038ec38  addic 4, 1, 112
  038ec3c  fmr 1, 19
  038ec40  std 3, 192(1)
  038ec44  lis 3, 114
  038ec48  ori 5, 27, 0
  038ec4c  ori 6, 26, 0
  038ec50  lfs 2, -3056(3)
  038ec54  lfd 3, 192(1)
  038ec58  fcfid 3, 3
  038ec5c  ori 3, 28, 0
  038ec60  frsp 3, 3
  038ec64  fadds 3, 3, 28
  038ec68  fmuls 2, 2, 3
  038ec6c  fctiwz 2, 2
  038ec70  stfd 2, 192(1)
  038ec74  lwz 8, 196(1)
  038ec78  extsw 8, 8
  038ec7c  bl 0x126dd8
  038ec80  nop
  038ec84  addic 29, 29, 1
  038ec88  cmpwi 29, 3
  038ec8c  bt 0, 0x38ea24
  038ec90  ld 0, 384(1)
  038ec94  mtlr 0
  038ec98  lfd 19, 264(1)
  038ec9c  lfd 20, 272(1)
  038eca0  lfd 21, 280(1)
  038eca4  lfd 22, 288(1)
  038eca8  lfd 23, 296(1)
  038ecac  lfd 24, 304(1)
  038ecb0  lfd 25, 312(1)
  038ecb4  lfd 26, 320(1)
  038ecb8  lfd 27, 328(1)
  038ecbc  lfd 28, 336(1)
  038ecc0  lfd 29, 344(1)
  038ecc4  lfd 30, 352(1)
  038ecc8  lfd 31, 360(1)
  038eccc  ld 26, 216(1)
  038ecd0  ld 27, 224(1)
  038ecd4  ld 28, 232(1)
  038ecd8  ld 29, 240(1)
  038ecdc  ld 30, 248(1)
  038ece0  ld 31, 256(1)
  038ece4  addi 1, 1, 368
  038ece8  blr

M459_0038ed08:   # 0x38ed08, 0x7b4 bytes
  038ed08  stdu 1, -416(1)
  038ed0c  mflr 0
  038ed10  std 0, 432(1)
  038ed14  stfd 26, 368(1)
  038ed18  stfd 27, 376(1)
  038ed1c  stfd 28, 384(1)
  038ed20  stfd 29, 392(1)
  038ed24  stfd 30, 400(1)
  038ed28  stfd 31, 408(1)
  038ed2c  std 29, 344(1)
  038ed30  std 31, 360(1)
  038ed34  std 23, 296(1)
  038ed38  lwz 29, 120(3)
  038ed3c  ori 31, 3, 0
  038ed40  std 28, 336(1)
  038ed44  lis 23, 57
  038ed48  li 28, 0
  038ed4c  std 22, 288(1)
  038ed50  addi 23, 23, -4884
  038ed54  lwz 3, 56(29)
  038ed58  std 30, 352(1)
  038ed5c  ori 22, 28, 0
  038ed60  ori 30, 4, 0
  038ed64  std 27, 328(1)
  038ed68  std 26, 320(1)
  038ed6c  std 25, 312(1)
  038ed70  std 24, 304(1)
  038ed74  cmpwi 3, 0
  038ed78  bf 2, 0x38ed88
  038ed7c  lhz 3, 482(29)
  038ed80  cmpwi 3, 0
  038ed84  bt 2, 0x38ed9c
  038ed88  lfs 1, 0(23)
  038ed8c  li 28, 1
  038ed90  lfs 2, 416(29)
  038ed94  fmuls 1, 2, 1
  038ed98  b 0x38eda0
  038ed9c  lfs 1, 416(29)
  038eda0  addic 5, 1, 112
  038eda4  ori 3, 31, 0
  038eda8  bl 0x1118d8
  038edac  nop
  038edb0  lfs 5, 4(23)
  038edb4  ori 26, 22, 0
  038edb8  lhz 3, 428(29)
  038edbc  ori 6, 26, 0
  038edc0  cmpwi 3, 0
  038edc4  fmr 1, 5
  038edc8  bt 2, 0x38ee5c
  038edcc  lwz 8, 0(30)
  038edd0  lwz 4, 352(29)
  038edd4  lis 9, 16256
  038edd8  ori 5, 8, 0
  038eddc  ori 3, 4, 0
  038ede0  ori 6, 3, 0
  038ede4  ori 7, 8, 0
  038ede8  lwz 3, 0(6)
  038edec  addic 10, 3, -1
  038edf0  cmpw 5, 10
  038edf4  bf 0, 0x38ee24
  038edf8  lbz 6, 340(29)
  038edfc  addc 5, 5, 3
  038ee00  extsb 6, 6
  038ee04  addc 5, 5, 6
  038ee08  divw 6, 5, 3
  038ee0c  mullw 3, 6, 3
  038ee10  ori 6, 4, 0
  038ee14  subc 5, 5, 3
  038ee18  ori 8, 5, 0
  038ee1c  ori 7, 8, 0
  038ee20  stw 5, 0(30)
  038ee24  ori 3, 6, 0
  038ee28  lwz 10, 0(3)
  038ee2c  addic 10, 10, -1
  038ee30  cmpw 5, 10
  038ee34  bt 2, 0x38ee54
  038ee38  ori 5, 7, 0
  038ee3c  slwi 7, 5, 4
  038ee40  addc 6, 6, 7
  038ee44  clrldi 6, 6, 32
  038ee48  lwz 6, 28(6)
  038ee4c  cmpw 6, 9
  038ee50  bf 2, 0x38ede0
  038ee54  li 3, 1
  038ee58  b 0x38f46c
  038ee5c  lwz 3, 352(29)
  038ee60  ori 7, 22, 0
  038ee64  ori 10, 3, 0
  038ee68  ori 8, 7, 0
  038ee6c  ori 5, 10, 0
  038ee70  ori 27, 8, 0
  038ee74  lwz 4, 0(5)
  038ee78  cmpwi 4, 0
  038ee7c  bf 1, 0x38ef20
  038ee80  lhz 5, 430(29)
  038ee84  lfs 3, 16(31)
  038ee88  ori 9, 22, 0
  038ee8c  lis 11, 16256
  038ee90  lfs 4, 20(31)
  038ee94  cmpwi 1, 5, 0
  038ee98  ori 5, 10, 0
  038ee9c  bt 6, 0x38eeb8
  038eea0  addc 12, 10, 9
  038eea4  clrldi 12, 12, 32
  038eea8  lwz 12, 28(12)
  038eeac  cmpw 12, 11
  038eeb0  bf 2, 0x38ef08
  038eeb4  ori 5, 3, 0
  038eeb8  addc 10, 10, 9
  038eebc  clrldi 10, 10, 32
  038eec0  cmpw 6, 6, 7
  038eec4  lfs 2, 20(10)
  038eec8  lfs 6, 16(10)
  038eecc  fsubs 2, 2, 4
  038eed0  fsubs 6, 6, 3
  038eed4  fmuls 2, 2, 2
  038eed8  fmadds 2, 6, 6, 2
  038eedc  fsqrts 2, 2
  038eee0  fcmpu 0, 5, 2
  038eee4  cror 2, 0, 2
  038eee8  bt 2, 0x38eefc
  038eeec  fmr 5, 2
  038eef0  ori 27, 7, 0
  038eef4  ori 6, 8, 0
  038eef8  b 0x38ef04
  038eefc  bf 26, 0x38ef04
  038ef00  ori 26, 8, 0
  038ef04  ori 7, 8, 0
  038ef08  addic 8, 8, 1
  038ef0c  lwz 12, 0(5)
  038ef10  ori 10, 5, 0
  038ef14  addic 9, 9, 16
  038ef18  cmpw 8, 12
  038ef1c  bt 0, 0x38ee98
  038ef20  lwz 5, 0(5)
  038ef24  ori 24, 6, 0
  038ef28  addic 5, 5, -1
  038ef2c  cmpwi 1, 6, 0
  038ef30  cmpw 24, 5
  038ef34  bf 2, 0x38ef40
  038ef38  ori 26, 22, 0
  038ef3c  b 0x38ef48
  038ef40  bf 6, 0x38ef48
  038ef44  addic 27, 4, -1
  038ef48  lfs 31, 8(23)
  038ef4c  cmpwi 28, 0
  038ef50  ori 25, 22, 0
  038ef54  fmr 26, 31
  038ef58  bt 2, 0x38ef60
  038ef5c  fmr 31, 1
  038ef60  fmr 30, 26
  038ef64  ori 4, 22, 0
  038ef68  stw 22, 0(30)
  038ef6c  cmpw 1, 4, 24
  038ef70  cmpw 4, 27
  038ef74  cror 2, 2, 6
  038ef78  bt 2, 0x38ef88
  038ef7c  ori 5, 4, 0
  038ef80  cmpw 5, 26
  038ef84  bf 2, 0x38f428
  038ef88  cmpwi 28, 0
  038ef8c  bt 2, 0x38f008
  038ef90  ori 5, 4, 0
  038ef94  lfs 1, 116(1)
  038ef98  slwi 6, 5, 4
  038ef9c  lfs 2, 112(1)
  038efa0  addc 3, 3, 6
  038efa4  clrldi 3, 3, 32
  038efa8  lfs 3, 20(3)
  038efac  lfs 4, 16(3)
  038efb0  fsubs 1, 1, 3
  038efb4  fsubs 2, 2, 4
  038efb8  lfs 3, 24(3)
  038efbc  lfs 4, 120(1)
  038efc0  lwz 3, 28(3)
  038efc4  fsubs 3, 4, 3
  038efc8  lhz 6, 430(29)
  038efcc  cmpwi 6, 0
  038efd0  fmuls 1, 1, 1
  038efd4  fmadds 1, 2, 2, 1
  038efd8  fmadds 1, 3, 3, 1
  038efdc  fsqrts 1, 1
  038efe0  bt 2, 0x38eff0
  038efe4  lis 6, 16256
  038efe8  cmpw 3, 6
  038efec  bf 2, 0x38f428
  038eff0  fcmpu 0, 31, 1
  038eff4  cror 6, 0, 2
  038eff8  bt 6, 0x38f428
  038effc  fmr 31, 1
  038f000  ori 25, 4, 0
  038f004  b 0x38f428
  038f008  slwi 4, 4, 4
  038f00c  lfs 5, 16(31)
  038f010  addc 3, 3, 4
  038f014  lfs 6, 20(31)
  038f018  clrldi 22, 3, 32
  038f01c  lis 3, 115
  038f020  lfs 29, 16(22)
  038f024  lfs 28, 20(22)
  038f028  fsubs 1, 29, 5
  038f02c  fsubs 2, 28, 6
  038f030  lfs 27, 24(22)
  038f034  lwz 22, 28(22)
  038f038  addic 3, 3, 22784
  038f03c  fabs 3, 1
  038f040  fabs 7, 2
  038f044  stfs 1, 204(1)
  038f048  stfs 2, 208(1)
  038f04c  fsubs 1, 3, 7
  038f050  stfs 1, 212(1)
  038f054  lwz 4, 204(1)
  038f058  lfs 1, 204(1)
  038f05c  lwz 5, 208(1)
  038f060  lfs 2, 208(1)
  038f064  lfs 4, 12(23)
  038f068  fabs 1, 1
  038f06c  fabs 8, 2
  038f070  rlwinm 5, 5, 3, 29, 29
  038f074  lwz 6, 212(1)
  038f078  lfs 2, 212(1)
  038f07c  rlwimi 5, 6, 2, 30, 30
  038f080  fsub 9, 2, 26
  038f084  fsub 10, 2, 26
  038f088  rlwimi 5, 4, 4, 28, 28
  038f08c  ori 4, 3, 0
  038f090  rlwimi 4, 5, 2, 26, 28
  038f094  slwi 5, 5, 2
  038f098  clrldi 4, 4, 32
  038f09c  fsel 7, 9, 1, 7
  038f0a0  lfsx 1, 3, 5
  038f0a4  lfs 2, 4(4)
  038f0a8  fsel 3, 10, 8, 3
  038f0ac  fcmpu 0, 7, 26
  038f0b0  bt 1, 0x38f0bc
  038f0b4  fmr 1, 26
  038f0b8  b 0x38f1d4
  038f0bc  fsubs 8, 3, 7
  038f0c0  fadds 3, 3, 7
  038f0c4  addic 4, 1, 16
  038f0c8  li 8, 2
  038f0cc  addic 5, 4, 232
  038f0d0  addic 6, 4, 248
  038f0d4  mtctr 8
  038f0d8  fdivs 3, 8, 3
  038f0dc  fmuls 7, 3, 3
  038f0e0  stfs 3, 260(1)
  038f0e4  stfs 3, 252(1)
  038f0e8  stfs 3, 256(1)
  038f0ec  stfs 3, 248(1)
  038f0f0  lfs 9, 260(1)
  038f0f4  lfs 10, 252(1)
  038f0f8  lfs 11, 256(1)
  038f0fc  fmuls 8, 7, 7
  038f100  fmuls 10, 10, 7
  038f104  fmuls 9, 9, 8
  038f108  fmuls 3, 8, 8
  038f10c  fmuls 8, 11, 8
  038f110  stfs 10, 252(1)
  038f114  fmuls 7, 9, 7
  038f118  stfs 8, 256(1)
  038f11c  stfs 7, 260(1)
  038f120  lfs 7, 232(4)
  038f124  fmuls 7, 7, 3
  038f128  stfs 7, 248(4)
  038f12c  lfs 7, 4(5)
  038f130  addic 4, 4, 8
  038f134  addic 5, 5, 8
  038f138  fmuls 7, 7, 3
  038f13c  stfs 7, 4(6)
  038f140  addic 6, 6, 8
  038f144  bdnz 0x38f120
  038f148  li 6, 4
  038f14c  ori 4, 1, 0
  038f150  mtctr 6
  038f154  lis 5, 115
  038f158  addic 6, 4, 248
  038f15c  addic 5, 5, 22752
  038f160  ori 7, 6, 0
  038f164  lfs 3, 248(4)
  038f168  lfs 7, 0(5)
  038f16c  fmuls 3, 3, 7
  038f170  lfs 7, 4(5)
  038f174  addic 5, 5, 8
  038f178  stfs 3, 248(4)
  038f17c  lfs 3, 4(6)
  038f180  addic 4, 4, 8
  038f184  fmuls 3, 3, 7
  038f188  stfs 3, 4(6)
  038f18c  addic 6, 6, 8
  038f190  bdnz 0x38f164
  038f194  fmr 3, 26
  038f198  ori 4, 1, 0
  038f19c  mtctr 8
  038f1a0  lfs 7, 248(4)
  038f1a4  fadds 3, 3, 7
  038f1a8  addic 4, 4, 16
  038f1ac  lfs 7, 4(7)
  038f1b0  lfs 8, 8(7)
  038f1b4  lfs 9, 12(7)
  038f1b8  addic 7, 7, 16
  038f1bc  fadds 3, 3, 7
  038f1c0  fadds 3, 3, 8
  038f1c4  fadds 3, 3, 9
  038f1c8  bdnz 0x38f1a0
  038f1cc  fadds 3, 3, 4
  038f1d0  fmadds 1, 3, 1, 2
  038f1d4  lfs 2, 112(1)
  038f1d8  lfs 3, 116(1)
  038f1dc  fsubs 2, 2, 5
  038f1e0  fsubs 3, 3, 6
  038f1e4  fabs 7, 2
  038f1e8  fabs 6, 3
  038f1ec  stfs 2, 192(1)
  038f1f0  stfs 3, 196(1)
  038f1f4  fsubs 2, 7, 6
  038f1f8  stfs 2, 200(1)
  038f1fc  lwz 4, 192(1)
  038f200  lfs 2, 192(1)
  038f204  lwz 5, 196(1)
  038f208  lfs 3, 196(1)
  038f20c  lwz 6, 200(1)
  038f210  rlwinm 5, 5, 3, 29, 29
  038f214  lfs 5, 200(1)
  038f218  fabs 2, 2
  038f21c  rlwimi 5, 6, 2, 30, 30
  038f220  fabs 3, 3
  038f224  fsub 8, 5, 26
  038f228  fsub 9, 5, 26
  038f22c  rlwimi 5, 4, 4, 28, 28
  038f230  ori 4, 3, 0
  038f234  rlwimi 4, 5, 2, 26, 28
  038f238  slwi 5, 5, 2
  038f23c  clrldi 4, 4, 32
  038f240  fsel 6, 8, 2, 6
  038f244  lfsx 5, 3, 5
  038f248  fsel 3, 9, 3, 7
  038f24c  lfs 2, 4(4)
  038f250  fcmpu 0, 6, 26
  038f254  bt 1, 0x38f260
  038f258  fmr 4, 26
  038f25c  b 0x38f378
  038f260  fsubs 7, 3, 6
  038f264  fadds 3, 3, 6
  038f268  addic 3, 1, 16
  038f26c  li 7, 2
  038f270  addic 5, 3, 216
  038f274  addic 4, 3, 200
  038f278  mtctr 7
  038f27c  fdivs 3, 7, 3
  038f280  fmuls 6, 3, 3
  038f284  stfs 3, 228(1)
  038f288  stfs 3, 220(1)
  038f28c  stfs 3, 224(1)
  038f290  stfs 3, 216(1)
  038f294  lfs 8, 228(1)
  038f298  lfs 9, 220(1)
  038f29c  lfs 10, 224(1)
  038f2a0  fmuls 7, 6, 6
  038f2a4  fmuls 9, 9, 6
  038f2a8  fmuls 8, 8, 7
  038f2ac  fmuls 3, 7, 7
  038f2b0  fmuls 7, 10, 7
  038f2b4  stfs 9, 220(1)
  038f2b8  fmuls 6, 8, 6
  038f2bc  stfs 7, 224(1)
  038f2c0  stfs 6, 228(1)
  038f2c4  lfs 6, 200(3)
  038f2c8  fmuls 6, 6, 3
  038f2cc  stfs 6, 216(3)
  038f2d0  lfs 6, 4(4)
  038f2d4  addic 4, 4, 8
  038f2d8  fmuls 6, 6, 3
  038f2dc  addic 3, 3, 8
  038f2e0  stfs 6, 4(5)
  038f2e4  addic 5, 5, 8
  038f2e8  bdnz 0x38f2c4
  038f2ec  li 5, 4
  038f2f0  ori 3, 1, 0
  038f2f4  mtctr 5
  038f2f8  lis 4, 115
  038f2fc  addic 5, 3, 216
  038f300  addic 4, 4, 22752
  038f304  ori 6, 5, 0
  038f308  lfs 3, 216(3)
  038f30c  lfs 6, 0(4)
  038f310  fmuls 3, 3, 6
  038f314  lfs 6, 4(4)
  038f318  addic 4, 4, 8
  038f31c  stfs 3, 216(3)
  038f320  lfs 3, 4(5)
  038f324  addic 3, 3, 8
  038f328  fmuls 3, 3, 6
  038f32c  stfs 3, 4(5)
  038f330  addic 5, 5, 8
  038f334  bdnz 0x38f308
  038f338  ori 3, 1, 0
  038f33c  fmr 3, 26
  038f340  mtctr 7
  038f344  lfs 6, 216(3)
  038f348  fadds 3, 3, 6
  038f34c  lfs 6, 4(6)
  038f350  addic 3, 3, 16
  038f354  lfs 7, 8(6)
  038f358  lfs 8, 12(6)
  038f35c  addic 6, 6, 16
  038f360  fadds 3, 3, 6
  038f364  fadds 3, 3, 7
  038f368  fadds 3, 3, 8
  038f36c  bdnz 0x38f344
  038f370  fadds 4, 3, 4
  038f374  fmadds 4, 4, 5, 2
  038f378  fmr 2, 4
  038f37c  bl 0x5026a0
  038f380  nop
  038f384  lfs 2, 20(31)
  038f388  lfs 3, 16(31)
  038f38c  fsubs 4, 2, 28
  038f390  lfs 2, 24(31)
  038f394  fsubs 3, 3, 29
  038f398  fsubs 5, 2, 27
  038f39c  fmr 2, 1
  038f3a0  lhz 3, 430(29)
  038f3a4  lwz 5, 0(30)
  038f3a8  cmpwi 3, 0
  038f3ac  fmuls 1, 4, 4
  038f3b0  fmadds 1, 3, 3, 1
  038f3b4  fmadds 1, 5, 5, 1
  038f3b8  fsqrts 1, 1
  038f3bc  bt 2, 0x38f3cc
  038f3c0  lis 3, 16256
  038f3c4  cmpw 22, 3
  038f3c8  bf 2, 0x38f428
  038f3cc  lfs 3, 16(23)
  038f3d0  fcmpu 1, 30, 2
  038f3d4  fcmpu 0, 2, 3
  038f3d8  cror 2, 1, 2
  038f3dc  bt 2, 0x38f3f4
  038f3e0  bf 4, 0x38f428
  038f3e4  fmr 31, 1
  038f3e8  ori 25, 5, 0
  038f3ec  fmr 30, 2
  038f3f0  b 0x38f428
  038f3f4  lfs 3, 20(23)
  038f3f8  fcmpu 6, 31, 1
  038f3fc  fcmpu 7, 1, 3
  038f400  bt 28, 0x38f410
  038f404  fcmpu 1, 31, 3
  038f408  bt 25, 0x38f41c
  038f40c  bt 4, 0x38f41c
  038f410  fcmpu 1, 31, 1
  038f414  bf 28, 0x38f428
  038f418  bf 4, 0x38f428
  038f41c  fmr 31, 1
  038f420  ori 25, 5, 0
  038f424  fmr 30, 2
  038f428  lwz 3, 352(29)
  038f42c  lbz 4, 340(29)
  038f430  extsb 4, 4
  038f434  lwz 6, 0(3)
  038f438  addc 5, 5, 6
  038f43c  addc 4, 5, 4
  038f440  divw 5, 4, 6
  038f444  mullw 5, 5, 6
  038f448  subc 4, 4, 5
  038f44c  cmpwi 4, 0
  038f450  stw 4, 0(30)
  038f454  bf 2, 0x38ef6c
  038f458  subc 3, 25, 24
  038f45c  stw 25, 0(30)
  038f460  cntlzw 3, 3
  038f464  rlwinm 3, 3, 27, 31, 31
  038f468  xori 3, 3, 1
  038f46c  ld 0, 432(1)
  038f470  mtlr 0
  038f474  lfd 26, 368(1)
  038f478  lfd 27, 376(1)
  038f47c  lfd 28, 384(1)
  038f480  lfd 29, 392(1)
  038f484  lfd 30, 400(1)
  038f488  lfd 31, 408(1)
  038f48c  ld 22, 288(1)
  038f490  ld 23, 296(1)
  038f494  ld 24, 304(1)
  038f498  ld 25, 312(1)
  038f49c  ld 26, 320(1)
  038f4a0  ld 27, 328(1)
  038f4a4  ld 28, 336(1)
  038f4a8  ld 29, 344(1)
  038f4ac  ld 30, 352(1)
  038f4b0  ld 31, 360(1)
  038f4b4  addi 1, 1, 416
  038f4b8  blr

UpdateMoby_459:   # 0x38f550, 0x26c4 bytes
  038f550  stdu 1, -624(1)
  038f554  mflr 0
  038f558  std 0, 640(1)
  038f55c  stfd 26, 576(1)
  038f560  stfd 27, 584(1)
  038f564  stfd 28, 592(1)
  038f568  stfd 29, 600(1)
  038f56c  stfd 30, 608(1)
  038f570  stfd 31, 616(1)
  038f574  std 31, 568(1)
  038f578  std 29, 552(1)
  038f57c  std 24, 512(1)
  038f580  ori 31, 3, 0
  038f584  li 29, 0
  038f588  std 30, 560(1)
  038f58c  ori 24, 29, 0
  038f590  lwz 30, 120(31)
  038f594  lwz 4, 336(30)
  038f598  std 28, 544(1)
  038f59c  std 27, 536(1)
  038f5a0  std 26, 528(1)
  038f5a4  std 25, 520(1)
  038f5a8  stw 4, 500(1)
  038f5ac  bl 0xefe40
  038f5b0  nop
  038f5b4  lwz 3, 56(30)
  038f5b8  ori 28, 24, 0
  038f5bc  fmr 31, 1
  038f5c0  cmpwi 3, 0
  038f5c4  bf 2, 0x38f5d4
  038f5c8  lhz 3, 482(30)
  038f5cc  cmpwi 3, 0
  038f5d0  bt 2, 0x38f5d8
  038f5d4  li 28, 1
  038f5d8  lis 4, 57
  038f5dc  ori 3, 31, 0
  038f5e0  addi 6, 4, -2884
  038f5e4  li 4, 2
  038f5e8  addic 5, 30, 512
  038f5ec  lfs 1, 0(6)
  038f5f0  bl 0x119a18
  038f5f4  nop
  038f5f8  addic 25, 31, 16
  038f5fc  addic 3, 1, 192
  038f600  ori 4, 25, 0
  038f604  bl 0x5e7e98
  038f608  nop
  038f60c  lwz 3, 456(30)
  038f610  cmpwi 3, 0
  038f614  bf 1, 0x38f620
  038f618  addic 3, 3, -1
  038f61c  stw 3, 456(30)
  038f620  lbz 3, 32(31)
  038f624  cmpwi 3, 0
  038f628  bt 2, 0x38f63c
  038f62c  ori 3, 31, 0
  038f630  addic 4, 1, 500
  038f634  bl 0x38ed08
  038f638  ori 29, 3, 0
  038f63c  cmpwi 28, 0
  038f640  bt 2, 0x38f65c
  038f644  lis 3, 57
  038f648  lfs 1, 416(30)
  038f64c  addi 3, 3, -2884
  038f650  lfs 2, 4(3)
  038f654  fmuls 1, 1, 2
  038f658  b 0x38f660
  038f65c  lfs 1, 416(30)
  038f660  ori 3, 31, 0
  038f664  addic 5, 1, 416
  038f668  bl 0x1118d8
  038f66c  nop
  038f670  ori 3, 31, 0
  038f674  lis 4, 33
  038f678  li 5, 0
  038f67c  bl 0x10675c
  038f680  nop
  038f684  ori 27, 3, 0
  038f688  ori 3, 31, 0
  038f68c  addic 5, 30, 32
  038f690  li 6, 0
  038f694  addic 7, 1, 496
  038f698  li 9, 0
  038f69c  addic 8, 1, 504
  038f6a0  ori 4, 27, 0
  038f6a4  li 10, 4
  038f6a8  bl 0x106840
  038f6ac  nop
  038f6b0  ori 26, 3, 0
  038f6b4  addic 3, 30, 38
  038f6b8  bl 0x4fffb4
  038f6bc  nop
  038f6c0  cmpwi 27, 0
  038f6c4  bt 2, 0x38fb00
  038f6c8  lhz 3, 38(30)
  038f6cc  cmpwi 3, 0
  038f6d0  bf 2, 0x38fb00
  038f6d4  lwz 3, 32(27)
  038f6d8  cmpwi 3, 0
  038f6dc  bt 2, 0x38f73c
  038f6e0  lis 4, 151
  038f6e4  addic 4, 4, -25376
  038f6e8  lwz 5, 4240(4)
  038f6ec  cmpw 3, 5
  038f6f0  bt 2, 0x38f718
  038f6f4  lfs 1, 16(31)
  038f6f8  lfs 2, 16(3)
  038f6fc  lfs 3, 20(31)
  038f700  lfs 4, 20(3)
  038f704  fsubs 1, 1, 2
  038f708  fsubs 2, 3, 4
  038f70c  bl 0x5e8338
  038f710  nop
  038f714  b 0x38f738
  038f718  lfs 1, 16(31)
  038f71c  lfs 2, 128(4)
  038f720  lfs 3, 20(31)
  038f724  lfs 4, 132(4)
  038f728  fsubs 1, 1, 2
  038f72c  fsubs 2, 3, 4
  038f730  bl 0x5e8338
  038f734  nop
  038f738  b 0x38f764
  038f73c  lis 3, 151
  038f740  lfs 1, 16(31)
  038f744  lfs 2, 20(31)
  038f748  addic 3, 3, -25376
  038f74c  lfs 3, 128(3)
  038f750  lfs 4, 132(3)
  038f754  fsubs 1, 1, 3
  038f758  fsubs 2, 2, 4
  038f75c  bl 0x5e8338
  038f760  nop
  038f764  li 3, 600
  038f768  stfs 1, 508(1)
  038f76c  bl 0x5e7e18
  038f770  nop
  038f774  sth 3, 482(30)
  038f778  lfs 1, 32(30)
  038f77c  lfs 2, 504(1)
  038f780  lis 3, 57
  038f784  fsubs 1, 1, 2
  038f788  addi 3, 3, -2884
  038f78c  stfs 1, 32(30)
  038f790  lfs 2, 8(3)
  038f794  fcmpu 0, 1, 2
  038f798  cror 6, 0, 2
  038f79c  bt 6, 0x38f7d0
  038f7a0  cmpwi 26, 3
  038f7a4  bt 1, 0x38f7bc
  038f7a8  cmpwi 26, 0
  038f7ac  bf 1, 0x38fb00
  038f7b0  cmpwi 26, 2
  038f7b4  bf 1, 0x38f7d0
  038f7b8  b 0x38f8fc
  038f7bc  cmpwi 26, 6
  038f7c0  bt 1, 0x38fb00
  038f7c4  cmpwi 26, 5
  038f7c8  bf 1, 0x38fa1c
  038f7cc  b 0x38f8fc
  038f7d0  lis 3, 16025
  038f7d4  lis 4, 57
  038f7d8  ori 3, 3, 39322
  038f7dc  addi 4, 4, -2884
  038f7e0  lis 5, 114
  038f7e4  stw 3, 152(30)
  038f7e8  lfs 1, 12(4)
  038f7ec  lfs 2, -3048(5)
  038f7f0  fmuls 1, 2, 1
  038f7f4  lis 3, 114
  038f7f8  li 8, 1
  038f7fc  lis 9, 16544
  038f800  lis 10, 16672
  038f804  addic 5, 1, 508
  038f808  addic 6, 30, 136
  038f80c  addic 7, 30, 140
  038f810  stfs 1, 128(30)
  038f814  lfs 1, 16(4)
  038f818  fmuls 2, 2, 1
  038f81c  stfs 2, 132(30)
  038f820  lfs 3, 4(4)
  038f824  fmuls 2, 2, 3
  038f828  fmuls 1, 2, 1
  038f82c  fsqrts 1, 1
  038f830  stfs 1, 136(30)
  038f834  lfs 1, 20(4)
  038f838  lfs 2, -3052(3)
  038f83c  stb 24, 173(30)
  038f840  fmuls 1, 2, 1
  038f844  stw 8, 148(30)
  038f848  stw 9, 192(30)
  038f84c  stw 10, 196(30)
  038f850  stfs 1, 140(30)
  038f854  lfs 1, 16(27)
  038f858  lfs 2, 24(27)
  038f85c  stfs 1, 48(1)
  038f860  stfs 2, 56(1)
  038f864  lfs 1, 20(27)
  038f868  lfs 2, 28(27)
  038f86c  stfs 1, 52(1)
  038f870  stfs 2, 60(1)
  038f874  ld 3, 48(1)
  038f878  ld 4, 56(1)
  038f87c  bl 0x107de8
  038f880  nop
  038f884  li 3, 2
  038f888  lfs 30, 508(1)
  038f88c  addic 27, 30, 112
  038f890  bl 0x5e7e18
  038f894  nop
  038f898  ori 7, 3, 0
  038f89c  ori 3, 31, 0
  038f8a0  fmr 1, 30
  038f8a4  ori 4, 27, 0
  038f8a8  li 6, 9
  038f8ac  li 8, 0
  038f8b0  bl 0x10ad80
  038f8b4  nop
  038f8b8  li 3, 180
  038f8bc  li 5, 14
  038f8c0  addic 4, 30, 96
  038f8c4  stb 3, 103(30)
  038f8c8  lhz 3, 52(31)
  038f8cc  stb 5, 32(31)
  038f8d0  ori 5, 3, 0
  038f8d4  ori 3, 31, 0
  038f8d8  rlwimi 5, 24, 0, 19, 19
  038f8dc  sth 5, 52(31)
  038f8e0  bl 0x10c808
  038f8e4  nop
  038f8e8  li 3, 60
  038f8ec  bl 0x5e7e18
  038f8f0  nop
  038f8f4  sth 3, 38(30)
  038f8f8  b 0x38fb00
  038f8fc  li 3, 512
  038f900  lis 4, 57
  038f904  lis 5, 16128
  038f908  lis 6, 15363
  038f90c  li 7, 120
  038f910  stw 3, 144(30)
  038f914  addi 4, 4, -2884
  038f918  ori 3, 6, 4719
  038f91c  stw 5, 152(30)
  038f920  stb 7, 103(30)
  038f924  stw 3, 128(30)
  038f928  lfs 1, 4(4)
  038f92c  lfs 2, 132(30)
  038f930  lfs 3, 24(4)
  038f934  fmuls 1, 2, 1
  038f938  lis 3, 114
  038f93c  li 8, 1
  038f940  lis 9, 16544
  038f944  lis 10, 16672
  038f948  addic 5, 1, 508
  038f94c  addic 6, 30, 136
  038f950  addic 7, 30, 140
  038f954  fmuls 1, 1, 3
  038f958  fsqrts 1, 1
  038f95c  stfs 1, 136(30)
  038f960  lfs 1, 28(4)
  038f964  lfs 2, -3052(3)
  038f968  stb 24, 173(30)
  038f96c  fmuls 1, 2, 1
  038f970  stw 8, 148(30)
  038f974  stw 9, 192(30)
  038f978  stw 10, 196(30)
  038f97c  stfs 1, 140(30)
  038f980  lfs 1, 16(27)
  038f984  lfs 2, 24(27)
  038f988  stfs 1, 48(1)
  038f98c  stfs 2, 56(1)
  038f990  lfs 1, 20(27)
  038f994  lfs 2, 28(27)
  038f998  stfs 1, 52(1)
  038f99c  stfs 2, 60(1)
  038f9a0  ld 3, 48(1)
  038f9a4  ld 4, 56(1)
  038f9a8  bl 0x107de8
  038f9ac  nop
  038f9b0  lfs 1, 508(1)
  038f9b4  ori 3, 31, 0
  038f9b8  addic 4, 30, 112
  038f9bc  li 6, 12
  038f9c0  li 7, 6
  038f9c4  li 8, 0
  038f9c8  bl 0x10ad80
  038f9cc  nop
  038f9d0  lbz 3, 83(31)
  038f9d4  cmpwi 3, 11
  038f9d8  bt 2, 0x38fa00
  038f9dc  li 3, 6
  038f9e0  bl 0x5e7e18
  038f9e4  nop
  038f9e8  ori 6, 3, 0
  038f9ec  ori 3, 31, 0
  038f9f0  li 4, 11
  038f9f4  li 5, 0
  038f9f8  bl 0xfddc0
  038f9fc  nop
  038fa00  li 5, 12
  038fa04  addic 4, 30, 96
  038fa08  ori 3, 31, 0
  038fa0c  stb 5, 32(31)
  038fa10  bl 0x10c808
  038fa14  nop
  038fa18  b 0x38fb00
  038fa1c  li 3, 512
  038fa20  lis 4, 15363
  038fa24  li 5, 250
  038fa28  lis 6, 57
  038fa2c  ori 4, 4, 4719
  038fa30  stw 3, 144(30)
  038fa34  addi 3, 6, -2884
  038fa38  stb 5, 103(30)
  038fa3c  stw 4, 128(30)
  038fa40  lfs 1, 132(30)
  038fa44  lfs 2, 4(3)
  038fa48  lfs 3, 24(3)
  038fa4c  fmuls 1, 1, 2
  038fa50  lis 4, 114
  038fa54  li 8, 1
  038fa58  lis 9, 16608
  038fa5c  lis 10, 16728
  038fa60  addic 5, 1, 508
  038fa64  addic 6, 30, 136
  038fa68  addic 7, 30, 140
  038fa6c  fmuls 1, 1, 3
  038fa70  fsqrts 1, 1
  038fa74  stfs 1, 136(30)
  038fa78  lfs 1, 32(3)
  038fa7c  lfs 2, -3052(4)
  038fa80  stb 24, 173(30)
  038fa84  fmuls 1, 2, 1
  038fa88  stw 8, 148(30)
  038fa8c  stw 9, 192(30)
  038fa90  stw 10, 196(30)
  038fa94  stfs 1, 140(30)
  038fa98  lfs 1, 16(27)
  038fa9c  lfs 2, 24(27)
  038faa0  stfs 1, 48(1)
  038faa4  stfs 2, 56(1)
  038faa8  lfs 1, 20(27)
  038faac  lfs 2, 28(27)
  038fab0  stfs 1, 52(1)
  038fab4  stfs 2, 60(1)
  038fab8  ld 3, 48(1)
  038fabc  ld 4, 56(1)
  038fac0  bl 0x107de8
  038fac4  nop
  038fac8  lfs 1, 508(1)
  038facc  addic 4, 30, 112
  038fad0  ori 3, 31, 0
  038fad4  li 6, 14
  038fad8  li 7, 6
  038fadc  li 8, 0
  038fae0  bl 0x10ad80
  038fae4  nop
  038fae8  li 5, 12
  038faec  addic 4, 30, 96
  038faf0  ori 3, 31, 0
  038faf4  stb 5, 32(31)
  038faf8  bl 0x10c808
  038fafc  nop
  038fb00  li 3, 255
  038fb04  stb 3, 164(31)
  038fb08  lwz 3, 56(30)
  038fb0c  cmpwi 3, 0
  038fb10  bt 2, 0x38fb24
  038fb14  li 3, 600
  038fb18  bl 0x5e7e18
  038fb1c  nop
  038fb20  sth 3, 482(30)
  038fb24  addic 3, 30, 482
  038fb28  stw 24, 56(30)
  038fb2c  bl 0x4fffb4
  038fb30  nop
  038fb34  lbz 3, 32(31)
  038fb38  lfs 3, 416(1)
  038fb3c  lfs 1, 16(31)
  038fb40  cmpwi 3, 7
  038fb44  lfs 4, 420(1)
  038fb48  lfs 2, 20(31)
  038fb4c  bt 1, 0x38fb84
  038fb50  cmpwi 3, 7
  038fb54  bt 2, 0x390a50
  038fb58  cmpwi 3, 6
  038fb5c  bt 2, 0x390700
  038fb60  cmpwi 3, 3
  038fb64  bt 2, 0x39025c
  038fb68  cmpwi 3, 2
  038fb6c  bt 2, 0x390148
  038fb70  cmpwi 3, 1
  038fb74  bt 2, 0x38fe18
  038fb78  cmpwi 3, 0
  038fb7c  bt 2, 0x38fbb0
  038fb80  b 0x391968
  038fb84  cmpwi 3, 14
  038fb88  bt 2, 0x3915f4
  038fb8c  cmpwi 3, 12
  038fb90  bt 2, 0x3913f0
  038fb94  cmpwi 3, 11
  038fb98  bt 2, 0x391158
  038fb9c  cmpwi 3, 10
  038fba0  bt 2, 0x390e34
  038fba4  cmpwi 3, 9
  038fba8  bt 2, 0x390de8
  038fbac  b 0x391968
  038fbb0  lwz 3, 356(30)
  038fbb4  cmpwi 3, -1
  038fbb8  bt 2, 0x38fbe8
  038fbbc  lis 4, 165
  038fbc0  lwz 5, 308(30)
  038fbc4  slwi 3, 3, 2
  038fbc8  stw 24, 336(30)
  038fbcc  addic 4, 4, 7136
  038fbd0  extsw 3, 3
  038fbd4  cmpwi 5, 0
  038fbd8  lwzx 3, 4, 3
  038fbdc  stw 3, 352(30)
  038fbe0  bf 0, 0x38fc18
  038fbe4  b 0x38fc40
  038fbe8  lis 3, 101
  038fbec  lhz 4, 166(31)
  038fbf0  lhz 5, 178(31)
  038fbf4  addic 3, 3, 26820
  038fbf8  extsh 4, 4
  038fbfc  extsh 5, 5
  038fc00  bl 0x5cd098
  038fc04  nop
  038fc08  ori 3, 31, 0
  038fc0c  bl 0xefb38
  038fc10  nop
  038fc14  b 0x391bcc
  038fc18  slwi 5, 5, 2
  038fc1c  stw 24, 288(30)
  038fc20  ori 3, 25, 0
  038fc24  extsw 5, 5
  038fc28  lwzx 5, 4, 5
  038fc2c  addic 4, 5, 16
  038fc30  stw 5, 304(30)
  038fc34  bl 0x5e7e98
  038fc38  nop
  038fc3c  b 0x38fc78
  038fc40  addic 4, 3, 16
  038fc44  ori 3, 25, 0
  038fc48  bl 0x5e7e98
  038fc4c  nop
  038fc50  lwz 3, 436(30)
  038fc54  cmpwi 3, 0
  038fc58  bf 2, 0x38fc78
  038fc5c  lis 3, 57
  038fc60  stw 24, 304(30)
  038fc64  addi 3, 3, -2884
  038fc68  lfs 1, 36(3)
  038fc6c  lfs 2, 24(31)
  038fc70  fadds 1, 2, 1
  038fc74  stfs 1, 24(31)
  038fc78  lwz 4, 352(30)
  038fc7c  ori 3, 24, 0
  038fc80  sth 24, 430(30)
  038fc84  lwz 6, 0(4)
  038fc88  cmpwi 6, 0
  038fc8c  bf 1, 0x38fcc0
  038fc90  lis 8, 16256
  038fc94  li 5, 1
  038fc98  ori 7, 4, 0
  038fc9c  lwz 9, 28(7)
  038fca0  cmpw 9, 8
  038fca4  bf 2, 0x38fcb0
  038fca8  sth 5, 430(30)
  038fcac  lwz 6, 0(4)
  038fcb0  addic 3, 3, 1
  038fcb4  addic 7, 7, 16
  038fcb8  cmpw 3, 6
  038fcbc  bt 0, 0x38fc9c
  038fcc0  lis 3, 151
  038fcc4  li 4, 8
  038fcc8  addic 5, 3, -25376
  038fccc  lhz 3, 52(31)
  038fcd0  ori 6, 3, 4096
  038fcd4  addic 3, 30, 208
  038fcd8  sth 6, 52(31)
  038fcdc  stb 24, 41(30)
  038fce0  lwz 5, 8320(5)
  038fce4  ld 5, 56(5)
  038fce8  std 5, 56(31)
  038fcec  stb 4, 88(30)
  038fcf0  stb 4, 90(30)
  038fcf4  bl 0x100f8c
  038fcf8  nop
  038fcfc  lis 3, 15605
  038fd00  lis 4, 16025
  038fd04  ori 3, 3, 49807
  038fd08  lis 6, 57
  038fd0c  ori 4, 4, 39322
  038fd10  lis 5, 16000
  038fd14  stw 3, 268(30)
  038fd18  addi 3, 6, -2884
  038fd1c  lis 7, 114
  038fd20  stw 4, 272(30)
  038fd24  stw 5, 276(30)
  038fd28  lis 4, 132
  038fd2c  lfs 1, 32(3)
  038fd30  lfs 2, -3048(7)
  038fd34  lis 5, 114
  038fd38  lis 6, 16384
  038fd3c  fmuls 1, 2, 1
  038fd40  stfs 1, 236(30)
  038fd44  lfs 1, 8728(4)
  038fd48  lfs 2, -3052(5)
  038fd4c  fmuls 1, 1, 2
  038fd50  stfs 1, 244(30)
  038fd54  lfs 1, 4(3)
  038fd58  stw 6, 220(30)
  038fd5c  stw 6, 216(30)
  038fd60  stw 6, 32(30)
  038fd64  bl 0x502758
  038fd68  nop
  038fd6c  li 4, 1
  038fd70  sth 3, 36(30)
  038fd74  addic 3, 30, 64
  038fd78  stb 24, 41(30)
  038fd7c  stb 4, 40(30)
  038fd80  bl 0x5e7e70
  038fd84  nop
  038fd88  li 3, -1
  038fd8c  stw 3, 456(30)
  038fd90  lbz 3, 83(31)
  038fd94  cmpwi 3, 0
  038fd98  bt 2, 0x38fdc0
  038fd9c  li 3, 5
  038fda0  bl 0x5e7e18
  038fda4  nop
  038fda8  ori 6, 3, 0
  038fdac  ori 3, 31, 0
  038fdb0  li 4, 0
  038fdb4  li 5, 0
  038fdb8  bl 0xfddc0
  038fdbc  nop
  038fdc0  lis 3, 57
  038fdc4  lhz 4, 50(31)
  038fdc8  addi 3, 3, -2884
  038fdcc  sth 4, 480(30)
  038fdd0  li 4, 0
  038fdd4  lfs 30, 40(3)
  038fdd8  ori 3, 25, 0
  038fddc  fmr 1, 30
  038fde0  bl 0xffb70
  038fde4  nop
  038fde8  lfs 2, 24(31)
  038fdec  fsubs 1, 2, 1
  038fdf0  fcmpu 0, 1, 30
  038fdf4  cror 6, 0, 2
  038fdf8  bt 6, 0x38fe0c
  038fdfc  lhz 3, 52(31)
  038fe00  stw 24, 148(31)
  038fe04  ori 3, 3, 65
  038fe08  sth 3, 52(31)
  038fe0c  li 3, 2
  038fe10  stb 3, 32(31)
  038fe14  b 0x391968
  038fe18  fsubs 1, 3, 1
  038fe1c  fsubs 2, 4, 2
  038fe20  bl 0x5e8338
  038fe24  nop
  038fe28  lis 3, 57
  038fe2c  addic 5, 30, 404
  038fe30  addi 4, 3, -2884
  038fe34  ori 3, 31, 0
  038fe38  lfs 2, 44(4)
  038fe3c  lfs 3, 48(4)
  038fe40  lfs 4, 52(4)
  038fe44  bl 0xff2e8
  038fe48  nop
  038fe4c  addic 3, 30, 400
  038fe50  bl 0x4fff60
  038fe54  nop
  038fe58  addic 4, 1, 416
  038fe5c  ori 3, 25, 0
  038fe60  bl 0x5e8588
  038fe64  nop
  038fe68  fmr 3, 1
  038fe6c  cmpwi 28, 0
  038fe70  lfs 1, 24(31)
  038fe74  lfs 2, 424(1)
  038fe78  lbz 3, 49(31)
  038fe7c  lfs 30, 72(31)
  038fe80  lfs 4, 416(1)
  038fe84  lfs 5, 16(31)
  038fe88  lfs 6, 420(1)
  038fe8c  lfs 7, 20(31)
  038fe90  bt 2, 0x38feac
  038fe94  lis 4, 57
  038fe98  lfs 8, 416(30)
  038fe9c  addi 4, 4, -2884
  038fea0  lfs 9, 4(4)
  038fea4  fmuls 8, 8, 9
  038fea8  b 0x38feb0
  038feac  lfs 8, 416(30)
  038feb0  fcmpu 0, 3, 8
  038feb4  cror 6, 1, 2
  038feb8  bt 6, 0x38fff4
  038febc  fsubs 1, 1, 2
  038fec0  lis 4, 57
  038fec4  addi 4, 4, -2884
  038fec8  lfs 2, 4(4)
  038fecc  fabs 1, 1
  038fed0  fcmpu 0, 1, 2
  038fed4  cror 6, 1, 2
  038fed8  bt 6, 0x38fff4
  038fedc  cmpwi 3, 0
  038fee0  cmpwi 6, 28, 0
  038fee4  bt 2, 0x38fff4
  038fee8  cmpwi 1, 29, 0
  038feec  bt 26, 0x38fef4
  038fef0  bf 6, 0x38fff4
  038fef4  lwz 3, 400(30)
  038fef8  cmpwi 3, 0
  038fefc  bf 2, 0x38fff4
  038ff00  fsubs 1, 4, 5
  038ff04  fsubs 2, 6, 7
  038ff08  bl 0x5e8338
  038ff0c  nop
  038ff10  fmr 2, 1
  038ff14  fmr 1, 30
  038ff18  bl 0x5026a0
  038ff1c  nop
  038ff20  lis 3, 57
  038ff24  addi 3, 3, -2884
  038ff28  lfs 2, 56(3)
  038ff2c  fcmpu 0, 1, 2
  038ff30  cror 6, 1, 2
  038ff34  bt 6, 0x38fff4
  038ff38  addic 29, 1, 208
  038ff3c  ori 3, 31, 0
  038ff40  li 4, 0
  038ff44  ori 5, 29, 0
  038ff48  bl 0xf1114
  038ff4c  nop
  038ff50  lfs 1, 16(31)
  038ff54  addic 3, 1, 224
  038ff58  ori 4, 29, 0
  038ff5c  stfs 1, 224(1)
  038ff60  lfs 1, 20(31)
  038ff64  li 5, 0
  038ff68  lfs 2, 216(1)
  038ff6c  ori 6, 31, 0
  038ff70  stfs 1, 228(1)
  038ff74  li 7, 0
  038ff78  lfs 1, 28(31)
  038ff7c  stfs 2, 232(1)
  038ff80  stfs 1, 236(1)
  038ff84  bl 0x57820
  038ff88  nop
  038ff8c  cmpwi 3, 0
  038ff90  bf 2, 0x38ffe0
  038ff94  lis 3, 16512
  038ff98  li 4, 6
  038ff9c  stw 3, 408(30)
  038ffa0  sth 24, 420(30)
  038ffa4  lbz 3, 83(31)
  038ffa8  stb 4, 32(31)
  038ffac  cmpwi 3, 4
  038ffb0  bt 2, 0x38ffd8
  038ffb4  li 3, 6
  038ffb8  bl 0x5e7e18
  038ffbc  nop
  038ffc0  ori 6, 3, 0
  038ffc4  ori 3, 31, 0
  038ffc8  li 4, 4
  038ffcc  li 5, 0
  038ffd0  bl 0xfddc0
  038ffd4  nop
  038ffd8  stw 24, 400(30)
  038ffdc  b 0x390100
  038ffe0  li 3, 60
  038ffe4  bl 0x5e7e18
  038ffe8  nop
  038ffec  stw 3, 400(30)
  038fff0  b 0x390100
  038fff4  cmpwi 28, 0
  038fff8  bf 2, 0x39004c
  038fffc  ori 3, 25, 0
  0390000  addic 4, 1, 416
  0390004  bl 0x5e8588
  0390008  nop
  039000c  lis 3, 57
  0390010  addi 3, 3, -2884
  0390014  lfs 2, 60(3)
  0390018  fcmpu 0, 1, 2
  039001c  cror 6, 1, 2
  0390020  bt 6, 0x390100
  0390024  lfs 1, 24(31)
  0390028  lfs 2, 424(1)
  039002c  lis 3, 57
  0390030  fsubs 1, 1, 2
  0390034  addi 3, 3, -2884
  0390038  lfs 2, 64(3)
  039003c  fabs 1, 1
  0390040  fcmpu 0, 1, 2
  0390044  cror 6, 1, 2
  0390048  bt 6, 0x390100
  039004c  cmpwi 29, 0
  0390050  bt 2, 0x390100
  0390054  lwz 4, 500(1)
  0390058  lwz 5, 352(30)
  039005c  ori 3, 25, 0
  0390060  slwi 4, 4, 4
  0390064  addc 4, 5, 4
  0390068  addic 4, 4, 16
  039006c  clrldi 4, 4, 32
  0390070  bl 0x5e8548
  0390074  nop
  0390078  lis 3, 57
  039007c  addi 4, 3, -2884
  0390080  lbz 3, 83(31)
  0390084  lfs 2, 68(4)
  0390088  fcmpu 0, 1, 2
  039008c  cror 6, 0, 2
  0390090  bt 6, 0x390100
  0390094  lhz 4, 428(30)
  0390098  cmpwi 4, 0
  039009c  bt 2, 0x3900b8
  03900a0  lwz 4, 352(30)
  03900a4  lwz 5, 336(30)
  03900a8  lwz 4, 0(4)
  03900ac  addic 4, 4, -1
  03900b0  cmpw 5, 4
  03900b4  bf 0, 0x390100
  03900b8  cmpwi 3, 8
  03900bc  bt 2, 0x3900e4
  03900c0  li 3, 10
  03900c4  bl 0x5e7e18
  03900c8  nop
  03900cc  ori 6, 3, 0
  03900d0  ori 3, 31, 0
  03900d4  li 4, 8
  03900d8  li 5, 0
  03900dc  bl 0xfddc0
  03900e0  nop
  03900e4  lis 3, 132
  03900e8  li 4, 9
  03900ec  lwz 5, 500(1)
  03900f0  stw 5, 336(30)
  03900f4  lfs 1, 8736(3)
  03900f8  stb 4, 32(31)
  03900fc  stfs 1, 88(31)
  0390100  lwz 3, 456(30)
  0390104  cmpwi 3, 0
  0390108  bf 2, 0x391968
  039010c  lwz 3, 452(30)
  0390110  cmpwi 3, -1
  0390114  bt 2, 0x391968
  0390118  li 3, 0
  039011c  bl 0x481d0
  0390120  nop
  0390124  li 3, 0
  0390128  li 4, 1
  039012c  bl 0xb72b0
  0390130  nop
  0390134  lis 3, 150
  0390138  li 4, -1
  039013c  stw 24, -12480(3)
  0390140  stw 4, 452(30)
  0390144  b 0x391968
  0390148  addic 4, 1, 416
  039014c  ori 3, 25, 0
  0390150  bl 0x5e8588
  0390154  nop
  0390158  lfs 2, 424(30)
  039015c  fcmpu 0, 1, 2
  0390160  bt 0, 0x390194
  0390164  lis 3, 151
  0390168  lwz 4, 448(30)
  039016c  addic 3, 3, -25376
  0390170  extsw 4, 4
  0390174  addic 3, 3, 128
  0390178  bl 0x110b70
  039017c  nop
  0390180  cmpwi 3, 0
  0390184  bf 2, 0x390194
  0390188  lwz 3, 488(30)
  039018c  cmpwi 3, 0
  0390190  bt 2, 0x391968
  0390194  lwz 3, 452(30)
  0390198  cmpwi 3, -1
  039019c  bt 2, 0x390204
  03901a0  li 3, 31
  03901a4  li 4, 0
  03901a8  bl 0xb72b0
  03901ac  nop
  03901b0  lis 3, 165
  03901b4  lwz 4, 452(30)
  03901b8  li 5, 0
  03901bc  slwi 4, 4, 7
  03901c0  li 6, 0
  03901c4  li 7, 0
  03901c8  lwz 3, 7128(3)
  03901cc  addc 3, 3, 4
  03901d0  addic 4, 3, 48
  03901d4  addic 8, 3, 112
  03901d8  clrldi 3, 4, 32
  03901dc  clrldi 4, 8, 32
  03901e0  bl 0x47f74
  03901e4  nop
  03901e8  lis 4, 150
  03901ec  li 5, 1
  03901f0  li 3, 360
  03901f4  stw 5, -12480(4)
  03901f8  bl 0x5e7e18
  03901fc  nop
  0390200  stw 3, 456(30)
  0390204  lwz 4, 36(31)
  0390208  li 3, -66
  039020c  lhz 5, 52(31)
  0390210  lbz 6, 83(31)
  0390214  and 3, 5, 3
  0390218  cmpwi 6, 8
  039021c  lwz 4, 16(4)
  0390220  stw 4, 148(31)
  0390224  sth 3, 52(31)
  0390228  bt 2, 0x390250
  039022c  li 3, 10
  0390230  bl 0x5e7e18
  0390234  nop
  0390238  ori 6, 3, 0
  039023c  ori 3, 31, 0
  0390240  li 4, 8
  0390244  li 5, 0
  0390248  bl 0xfddc0
  039024c  nop
  0390250  li 3, 3
  0390254  stb 3, 32(31)
  0390258  b 0x391968
  039025c  lwz 3, 304(30)
  0390260  cmpwi 3, 0
  0390264  bt 2, 0x3903c4
  0390268  lwz 4, 288(30)
  039026c  lbz 5, 292(30)
  0390270  lwz 6, 0(3)
  0390274  extsb 5, 5
  0390278  addc 4, 4, 6
  039027c  addc 29, 4, 5
  0390280  divw 4, 29, 6
  0390284  mullw 4, 4, 6
  0390288  subc 29, 29, 4
  039028c  sldi 28, 29, 4
  0390290  addc 3, 3, 28
  0390294  clrldi 3, 3, 32
  0390298  lfs 3, 16(3)
  039029c  lfs 4, 20(3)
  03902a0  fsubs 1, 3, 1
  03902a4  fsubs 2, 4, 2
  03902a8  bl 0x5e8338
  03902ac  nop
  03902b0  lis 3, 57
  03902b4  addic 5, 30, 404
  03902b8  addi 4, 3, -2884
  03902bc  ori 3, 31, 0
  03902c0  lfs 2, 72(4)
  03902c4  lfs 3, 48(4)
  03902c8  lfs 4, 52(4)
  03902cc  bl 0xff2e8
  03902d0  nop
  03902d4  lwz 4, 304(30)
  03902d8  addic 3, 1, 256
  03902dc  addc 4, 4, 28
  03902e0  addic 4, 4, 16
  03902e4  clrldi 4, 4, 32
  03902e8  bl 0x5e7e98
  03902ec  nop
  03902f0  lwz 3, 304(30)
  03902f4  lwz 4, 288(30)
  03902f8  lwz 3, 0(3)
  03902fc  addic 3, 3, -1
  0390300  cmpw 4, 3
  0390304  bt 2, 0x390388
  0390308  addic 28, 1, 240
  039030c  addic 27, 1, 256
  0390310  ori 3, 28, 0
  0390314  ori 5, 25, 0
  0390318  ori 4, 27, 0
  039031c  bl 0x5e81f0
  0390320  nop
  0390324  lis 3, 57
  0390328  lis 5, 114
  039032c  addi 26, 3, -2884
  0390330  ori 3, 28, 0
  0390334  ori 4, 28, 0
  0390338  lfs 1, 32(26)
  039033c  lfs 2, -3052(5)
  0390340  fmuls 1, 2, 1
  0390344  bl 0x5e7f98
  0390348  nop
  039034c  ori 3, 25, 0
  0390350  ori 4, 25, 0
  0390354  ori 5, 28, 0
  0390358  bl 0x5e7f54
  039035c  nop
  0390360  ori 3, 27, 0
  0390364  ori 4, 25, 0
  0390368  bl 0x5e8548
  039036c  nop
  0390370  lfs 2, 40(26)
  0390374  fcmpu 0, 1, 2
  0390378  cror 6, 1, 2
  039037c  bt 6, 0x3906cc
  0390380  stw 29, 288(30)
  0390384  b 0x3906cc
  0390388  lbz 3, 83(31)
  039038c  cmpwi 3, 0
  0390390  bt 2, 0x3903b8
  0390394  li 3, 5
  0390398  bl 0x5e7e18
  039039c  nop
  03903a0  ori 6, 3, 0
  03903a4  ori 3, 31, 0
  03903a8  li 4, 0
  03903ac  li 5, 0
  03903b0  bl 0xfddc0
  03903b4  nop
  03903b8  li 3, 1
  03903bc  stb 3, 32(31)
  03903c0  b 0x3906cc
  03903c4  lwz 29, 484(30)
  03903c8  cmpwi 29, -1
  03903cc  bt 2, 0x390608
  03903d0  lis 28, 165
  03903d4  slwi 3, 29, 7
  03903d8  lwz 4, 7128(28)
  03903dc  addc 3, 4, 3
  03903e0  clrldi 3, 3, 32
  03903e4  lfs 3, 48(3)
  03903e8  lfs 4, 52(3)
  03903ec  fsubs 1, 3, 1
  03903f0  fsubs 2, 4, 2
  03903f4  bl 0x5e8338
  03903f8  nop
  03903fc  lis 3, 57
  0390400  addic 5, 30, 404
  0390404  addi 27, 3, -2884
  0390408  ori 3, 31, 0
  039040c  lfs 2, 72(27)
  0390410  lfs 3, 48(27)
  0390414  lfs 4, 52(27)
  0390418  bl 0xff2e8
  039041c  nop
  0390420  addic 29, 30, 464
  0390424  ori 3, 29, 0
  0390428  bl 0x5e8030
  039042c  nop
  0390430  lfs 2, 76(27)
  0390434  fmr 30, 1
  0390438  lfs 29, 472(30)
  039043c  ori 3, 29, 0
  0390440  fmr 1, 2
  0390444  ori 4, 29, 0
  0390448  fmuls 1, 30, 1
  039044c  bl 0x5e7f98
  0390450  nop
  0390454  lwz 3, 484(30)
  0390458  lwz 4, 7128(28)
  039045c  ori 5, 25, 0
  0390460  slwi 3, 3, 7
  0390464  addic 28, 1, 272
  0390468  addc 4, 4, 3
  039046c  ori 3, 28, 0
  0390470  addic 4, 4, 48
  0390474  clrldi 4, 4, 32
  0390478  bl 0x5e81f0
  039047c  nop
  0390480  lfs 1, 80(27)
  0390484  ori 3, 28, 0
  0390488  ori 4, 28, 0
  039048c  fmuls 1, 30, 1
  0390490  bl 0x5e7f98
  0390494  nop
  0390498  ori 3, 29, 0
  039049c  ori 4, 29, 0
  03904a0  ori 5, 28, 0
  03904a4  bl 0x5e7f54
  03904a8  nop
  03904ac  lis 3, 114
  03904b0  lfs 28, 16(27)
  03904b4  lfs 1, -3052(3)
  03904b8  fmuls 2, 1, 28
  03904bc  fcmpu 0, 30, 2
  03904c0  cror 6, 0, 2
  03904c4  bt 6, 0x39050c
  03904c8  lis 3, 57
  03904cc  lis 5, 114
  03904d0  addi 3, 3, -2884
  03904d4  addic 28, 1, 272
  03904d8  ori 4, 29, 0
  03904dc  lfs 1, 84(3)
  03904e0  lfs 2, -3048(5)
  03904e4  ori 3, 28, 0
  03904e8  fmuls 1, 2, 1
  03904ec  bl 0x5e7f98
  03904f0  nop
  03904f4  ori 3, 29, 0
  03904f8  ori 4, 29, 0
  03904fc  ori 5, 28, 0
  0390500  bl 0x5e7f54
  0390504  nop
  0390508  b 0x390560
  039050c  fmr 2, 1
  0390510  lis 3, 57
  0390514  addi 3, 3, -2884
  0390518  lfs 1, 32(3)
  039051c  fmuls 2, 2, 1
  0390520  fcmpu 0, 30, 2
  0390524  cror 6, 1, 2
  0390528  bt 6, 0x390560
  039052c  lis 5, 114
  0390530  addic 28, 1, 272
  0390534  ori 4, 29, 0
  0390538  ori 3, 28, 0
  039053c  lfs 2, -3048(5)
  0390540  fmuls 1, 2, 1
  0390544  bl 0x5e7f98
  0390548  nop
  039054c  ori 3, 29, 0
  0390550  ori 4, 29, 0
  0390554  ori 5, 28, 0
  0390558  bl 0x5e7f54
  039055c  nop
  0390560  addic 3, 30, 492
  0390564  bl 0x4fffb4
  0390568  nop
  039056c  cmpwi 3, 0
  0390570  bf 2, 0x390578
  0390574  stfs 29, 472(30)
  0390578  ori 4, 25, 0
  039057c  ori 3, 25, 0
  0390580  ori 5, 29, 0
  0390584  bl 0x5e7f54
  0390588  nop
  039058c  lis 4, 165
  0390590  lwz 5, 484(30)
  0390594  ori 3, 25, 0
  0390598  slwi 5, 5, 7
  039059c  lwz 4, 7128(4)
  03905a0  addc 4, 4, 5
  03905a4  addic 4, 4, 48
  03905a8  clrldi 4, 4, 32
  03905ac  bl 0x5e8548
  03905b0  nop
  03905b4  lis 3, 114
  03905b8  lfs 2, -3052(3)
  03905bc  fmuls 2, 2, 28
  03905c0  fcmpu 0, 1, 2
  03905c4  cror 6, 1, 2
  03905c8  bt 6, 0x3906cc
  03905cc  lbz 3, 83(31)
  03905d0  cmpwi 3, 0
  03905d4  bt 2, 0x3905fc
  03905d8  li 3, 5
  03905dc  bl 0x5e7e18
  03905e0  nop
  03905e4  ori 6, 3, 0
  03905e8  ori 3, 31, 0
  03905ec  li 4, 0
  03905f0  li 5, 0
  03905f4  bl 0xfddc0
  03905f8  nop
  03905fc  li 3, 1
  0390600  stb 3, 32(31)
  0390604  b 0x3906cc
  0390608  addic 3, 1, 240
  039060c  bl 0x5e7e70
  0390610  nop
  0390614  lis 3, 57
  0390618  li 4, 0
  039061c  addi 29, 3, -2884
  0390620  ori 3, 25, 0
  0390624  lfs 1, 40(29)
  0390628  bl 0xffb70
  039062c  nop
  0390630  lfs 2, 24(31)
  0390634  lis 3, 114
  0390638  fsubs 2, 1, 2
  039063c  lfs 1, -3052(3)
  0390640  stfs 2, 248(1)
  0390644  lfs 3, 84(29)
  0390648  fmuls 1, 1, 3
  039064c  fcmpu 0, 2, 1
  0390650  cror 6, 1, 2
  0390654  bt 6, 0x39065c
  0390658  stfs 1, 248(1)
  039065c  addic 29, 1, 240
  0390660  ori 3, 25, 0
  0390664  ori 4, 25, 0
  0390668  ori 5, 29, 0
  039066c  bl 0x5e7f54
  0390670  nop
  0390674  ori 3, 29, 0
  0390678  bl 0x5e8030
  039067c  nop
  0390680  lis 3, 114
  0390684  lfs 2, -3052(3)
  0390688  fcmpu 0, 1, 2
  039068c  cror 6, 1, 2
  0390690  bt 6, 0x3906cc
  0390694  lbz 3, 83(31)
  0390698  cmpwi 3, 0
  039069c  bt 2, 0x3906c4
  03906a0  li 3, 5
  03906a4  bl 0x5e7e18
  03906a8  nop
  03906ac  ori 6, 3, 0
  03906b0  ori 3, 31, 0
  03906b4  li 4, 0
  03906b8  li 5, 0
  03906bc  bl 0xfddc0
  03906c0  nop
  03906c4  li 3, 1
  03906c8  stb 3, 32(31)
  03906cc  lfs 1, 192(1)
  03906d0  lfs 2, 200(1)
  03906d4  ori 3, 31, 0
  03906d8  stfs 1, 64(1)
  03906dc  stfs 2, 72(1)
  03906e0  lfs 1, 196(1)
  03906e4  lfs 2, 204(1)
  03906e8  stfs 1, 68(1)
  03906ec  stfs 2, 76(1)
  03906f0  ld 5, 64(1)
  03906f4  ld 6, 72(1)
  03906f8  bl 0x38e978
  03906fc  b 0x391968
  0390700  lis 3, 57
  0390704  lwz 5, 460(30)
  0390708  lis 4, 16736
  039070c  addi 3, 3, -2884
  0390710  lfs 1, 88(3)
  0390714  srawi 3, 5, 31
  0390718  fcmpu 1, 31, 1
  039071c  srwi 6, 3, 1
  0390720  xor 5, 6, 5
  0390724  subc 3, 5, 3
  0390728  cmpw 3, 4
  039072c  crorc 2, 4, 0
  0390730  bt 2, 0x39098c
  0390734  addic 27, 1, 288
  0390738  lfs 30, 72(31)
  039073c  ori 3, 31, 0
  0390740  li 4, 0
  0390744  ori 5, 27, 0
  0390748  bl 0xf1114
  039074c  nop
  0390750  addic 29, 30, 384
  0390754  ori 4, 27, 0
  0390758  ori 3, 29, 0
  039075c  bl 0x5e7e98
  0390760  nop
  0390764  lfs 1, 416(1)
  0390768  lfs 2, 288(1)
  039076c  lfs 3, 420(1)
  0390770  lfs 4, 292(1)
  0390774  fsubs 1, 1, 2
  0390778  fsubs 2, 3, 4
  039077c  bl 0x5e8338
  0390780  nop
  0390784  fmr 2, 30
  0390788  bl 0x5026a0
  039078c  nop
  0390790  lis 3, 57
  0390794  addi 3, 3, -2884
  0390798  lfs 2, 56(3)
  039079c  fcmpu 0, 1, 2
  03907a0  cror 6, 1, 2
  03907a4  bt 6, 0x3907cc
  03907a8  lfs 1, 416(1)
  03907ac  lfs 2, 288(1)
  03907b0  lfs 3, 420(1)
  03907b4  fsubs 1, 1, 2
  03907b8  lfs 4, 292(1)
  03907bc  fsubs 2, 3, 4
  03907c0  bl 0x5e8338
  03907c4  nop
  03907c8  fmr 30, 1
  03907cc  fmr 1, 30
  03907d0  lfs 29, 384(30)
  03907d4  bl 0x5e8078
  03907d8  nop
  03907dc  lfs 2, 408(30)
  03907e0  fmadds 2, 1, 2, 29
  03907e4  fmr 1, 30
  03907e8  lfs 29, 388(30)
  03907ec  stfs 2, 384(30)
  03907f0  bl 0x5e8128
  03907f4  nop
  03907f8  lfs 2, 408(30)
  03907fc  addic 26, 1, 288
  0390800  fmadds 1, 1, 2, 29
  0390804  addic 27, 1, 304
  0390808  ori 5, 26, 0
  039080c  ori 3, 27, 0
  0390810  ori 4, 29, 0
  0390814  stfs 1, 388(30)
  0390818  bl 0x5e81f0
  039081c  nop
  0390820  lis 5, 132
  0390824  lis 6, 114
  0390828  ori 3, 27, 0
  039082c  ori 4, 27, 0
  0390830  lfs 1, 8724(5)
  0390834  lfs 2, -3052(6)
  0390838  fmuls 1, 1, 2
  039083c  bl 0x5e7f98
  0390840  nop
  0390844  lfs 1, 16(31)
  0390848  addic 3, 1, 320
  039084c  ori 4, 26, 0
  0390850  stfs 1, 320(1)
  0390854  lfs 1, 20(31)
  0390858  li 5, 0
  039085c  lfs 2, 296(1)
  0390860  ori 6, 31, 0
  0390864  stfs 1, 324(1)
  0390868  li 7, 0
  039086c  lfs 1, 28(31)
  0390870  stfs 2, 328(1)
  0390874  stfs 1, 332(1)
  0390878  bl 0x57820
  039087c  nop
  0390880  cmpwi 3, 0
  0390884  bt 2, 0x3908c4
  0390888  lbz 3, 83(31)
  039088c  cmpwi 3, 0
  0390890  bt 2, 0x3908b8
  0390894  li 3, 5
  0390898  bl 0x5e7e18
  039089c  nop
  03908a0  ori 6, 3, 0
  03908a4  ori 3, 31, 0
  03908a8  li 4, 0
  03908ac  li 5, 0
  03908b0  bl 0xfddc0
  03908b4  nop
  03908b8  li 3, 1
  03908bc  stb 3, 32(31)
  03908c0  b 0x391968
  03908c4  lfs 1, 304(1)
  03908c8  lfs 2, 308(1)
  03908cc  bl 0x5e8338
  03908d0  nop
  03908d4  addic 3, 1, 304
  03908d8  fmr 30, 1
  03908dc  bl 0x5e7ebc
  03908e0  nop
  03908e4  lfs 2, 312(1)
  03908e8  bl 0x5e8338
  03908ec  nop
  03908f0  lis 3, 57
  03908f4  lis 4, 114
  03908f8  fmr 29, 1
  03908fc  addi 3, 3, -2884
  0390900  lfs 1, 16(3)
  0390904  lfs 2, -3056(4)
  0390908  fmuls 1, 2, 1
  039090c  bl 0x502758
  0390910  nop
  0390914  lfs 1, 288(1)
  0390918  ori 4, 3, 0
  039091c  lfs 2, 296(1)
  0390920  ori 3, 31, 0
  0390924  stfs 1, 64(1)
  0390928  stfs 2, 72(1)
  039092c  lfs 1, 304(1)
  0390930  lfs 2, 312(1)
  0390934  stfs 1, 80(1)
  0390938  stfs 2, 88(1)
  039093c  lfs 1, 292(1)
  0390940  lfs 2, 300(1)
  0390944  stfs 1, 68(1)
  0390948  stfs 2, 76(1)
  039094c  lfs 1, 308(1)
  0390950  lfs 2, 316(1)
  0390954  stfs 1, 84(1)
  0390958  stfs 2, 92(1)
  039095c  std 4, 112(1)
  0390960  fmr 1, 30
  0390964  ld 5, 64(1)
  0390968  ld 6, 72(1)
  039096c  ld 7, 80(1)
  0390970  ld 8, 88(1)
  0390974  fmr 2, 29
  0390978  bl 0x434898
  039097c  nop
  0390980  lhz 3, 420(30)
  0390984  addic 3, 3, 1
  0390988  sth 3, 420(30)
  039098c  lis 3, 57
  0390990  addi 3, 3, -2884
  0390994  lfs 30, 4(3)
  0390998  fcmpu 0, 31, 30
  039099c  cror 6, 1, 2
  03909a0  bt 6, 0x391968
  03909a4  lhz 3, 420(30)
  03909a8  extsh 3, 3
  03909ac  cmpwi 3, 4
  03909b0  bf 0, 0x390a0c
  03909b4  addic 4, 1, 416
  03909b8  ori 3, 25, 0
  03909bc  bl 0x5e8588
  03909c0  nop
  03909c4  cmpwi 28, 0
  03909c8  lfs 2, 24(31)
  03909cc  lfs 3, 424(1)
  03909d0  bt 2, 0x3909e0
  03909d4  lfs 4, 416(30)
  03909d8  fmuls 30, 4, 30
  03909dc  b 0x3909e4
  03909e0  lfs 30, 416(30)
  03909e4  fcmpu 0, 1, 30
  03909e8  bt 1, 0x390a0c
  03909ec  fsubs 1, 2, 3
  03909f0  lis 3, 57
  03909f4  addi 3, 3, -2884
  03909f8  lfs 2, 64(3)
  03909fc  fabs 1, 1
  0390a00  fcmpu 0, 1, 2
  0390a04  cror 6, 0, 2
  0390a08  bt 6, 0x391968
  0390a0c  lbz 3, 83(31)
  0390a10  cmpwi 3, 5
  0390a14  bt 2, 0x390a3c
  0390a18  li 3, 10
  0390a1c  bl 0x5e7e18
  0390a20  nop
  0390a24  ori 6, 3, 0
  0390a28  ori 3, 31, 0
  0390a2c  li 4, 5
  0390a30  li 5, 5
  0390a34  bl 0xfddc0
  0390a38  nop
  0390a3c  lis 3, 16128
  0390a40  li 4, 7
  0390a44  stw 3, 88(31)
  0390a48  stb 4, 32(31)
  0390a4c  b 0x391968
  0390a50  fsubs 1, 3, 1
  0390a54  fsubs 2, 4, 2
  0390a58  bl 0x5e8338
  0390a5c  nop
  0390a60  lis 3, 57
  0390a64  addic 5, 30, 404
  0390a68  addi 4, 3, -2884
  0390a6c  ori 3, 31, 0
  0390a70  lfs 2, 44(4)
  0390a74  lfs 3, 48(4)
  0390a78  lfs 4, 52(4)
  0390a7c  bl 0xff2e8
  0390a80  nop
  0390a84  lbz 3, 83(31)
  0390a88  cmpwi 3, 0
  0390a8c  bf 2, 0x390ad8
  0390a90  addic 3, 30, 400
  0390a94  bl 0x4fff60
  0390a98  nop
  0390a9c  cmpwi 3, 0
  0390aa0  bt 2, 0x391968
  0390aa4  lbz 3, 83(31)
  0390aa8  cmpwi 3, 5
  0390aac  bt 2, 0x391968
  0390ab0  li 3, 15
  0390ab4  bl 0x5e7e18
  0390ab8  nop
  0390abc  ori 6, 3, 0
  0390ac0  ori 3, 31, 0
  0390ac4  li 4, 5
  0390ac8  li 5, 0
  0390acc  bl 0xfddc0
  0390ad0  nop
  0390ad4  b 0x391968
  0390ad8  lbz 3, 112(31)
  0390adc  cmpwi 1, 28, 0
  0390ae0  rlwinm 3, 3, 0, 30, 30
  0390ae4  cmpwi 3, 0
  0390ae8  bt 2, 0x391968
  0390aec  lis 3, 16256
  0390af0  stw 3, 88(31)
  0390af4  bf 6, 0x390b48
  0390af8  ori 3, 25, 0
  0390afc  addic 4, 1, 416
  0390b00  bl 0x5e8588
  0390b04  nop
  0390b08  lis 3, 57
  0390b0c  addi 3, 3, -2884
  0390b10  lfs 2, 92(3)
  0390b14  fcmpu 0, 1, 2
  0390b18  cror 6, 1, 2
  0390b1c  bt 6, 0x390bdc
  0390b20  lfs 1, 24(31)
  0390b24  lfs 2, 424(1)
  0390b28  lis 3, 57
  0390b2c  fsubs 1, 1, 2
  0390b30  addi 3, 3, -2884
  0390b34  lfs 2, 64(3)
  0390b38  fabs 1, 1
  0390b3c  fcmpu 0, 1, 2
  0390b40  cror 6, 1, 2
  0390b44  bt 6, 0x390bdc
  0390b48  cmpwi 29, 0
  0390b4c  bt 2, 0x390bdc
  0390b50  lwz 4, 500(1)
  0390b54  lwz 5, 352(30)
  0390b58  ori 3, 25, 0
  0390b5c  slwi 4, 4, 4
  0390b60  addc 4, 5, 4
  0390b64  addic 4, 4, 16
  0390b68  clrldi 4, 4, 32
  0390b6c  bl 0x5e8548
  0390b70  nop
  0390b74  lis 3, 57
  0390b78  addi 3, 3, -2884
  0390b7c  lfs 2, 68(3)
  0390b80  fcmpu 0, 1, 2
  0390b84  cror 6, 0, 2
  0390b88  bt 6, 0x390bdc
  0390b8c  lwz 3, 500(1)
  0390b90  stw 3, 336(30)
  0390b94  lbz 3, 83(31)
  0390b98  cmpwi 3, 8
  0390b9c  bt 2, 0x390bc4
  0390ba0  li 3, 10
  0390ba4  bl 0x5e7e18
  0390ba8  nop
  0390bac  ori 6, 3, 0
  0390bb0  ori 3, 31, 0
  0390bb4  li 4, 8
  0390bb8  li 5, 0
  0390bbc  bl 0xfddc0
  0390bc0  nop
  0390bc4  lis 3, 132
  0390bc8  li 4, 9
  0390bcc  lfs 1, 8736(3)
  0390bd0  stb 4, 32(31)
  0390bd4  stfs 1, 88(31)
  0390bd8  b 0x391968
  0390bdc  addic 4, 1, 416
  0390be0  ori 3, 25, 0
  0390be4  bl 0x5e8588
  0390be8  nop
  0390bec  lfs 3, 24(31)
  0390bf0  cmpwi 28, 0
  0390bf4  lfs 4, 424(1)
  0390bf8  lbz 3, 49(31)
  0390bfc  lfs 30, 72(31)
  0390c00  lfs 5, 416(1)
  0390c04  lfs 6, 16(31)
  0390c08  lfs 7, 420(1)
  0390c0c  lfs 8, 20(31)
  0390c10  bt 2, 0x390c2c
  0390c14  lis 4, 57
  0390c18  lfs 2, 416(30)
  0390c1c  addi 4, 4, -2884
  0390c20  lfs 9, 4(4)
  0390c24  fmuls 2, 2, 9
  0390c28  b 0x390c30
  0390c2c  lfs 2, 416(30)
  0390c30  fcmpu 0, 1, 2
  0390c34  cror 6, 1, 2
  0390c38  bt 6, 0x390dac
  0390c3c  fsubs 1, 3, 4
  0390c40  lis 4, 57
  0390c44  addi 4, 4, -2884
  0390c48  lfs 2, 4(4)
  0390c4c  fabs 1, 1
  0390c50  fcmpu 0, 1, 2
  0390c54  cror 6, 1, 2
  0390c58  bt 6, 0x390dac
  0390c5c  cmpwi 3, 0
  0390c60  cmpwi 6, 28, 0
  0390c64  bt 2, 0x390dac
  0390c68  cmpwi 1, 29, 0
  0390c6c  bt 26, 0x390c74
  0390c70  bf 6, 0x390dac
  0390c74  lwz 3, 400(30)
  0390c78  cmpwi 3, 0
  0390c7c  bf 2, 0x390dac
  0390c80  fsubs 1, 5, 6
  0390c84  fsubs 2, 7, 8
  0390c88  bl 0x5e8338
  0390c8c  nop
  0390c90  fmr 2, 1
  0390c94  fmr 1, 30
  0390c98  bl 0x5026a0
  0390c9c  nop
  0390ca0  lis 3, 57
  0390ca4  addi 3, 3, -2884
  0390ca8  lfs 2, 56(3)
  0390cac  fcmpu 0, 1, 2
  0390cb0  cror 6, 1, 2
  0390cb4  bt 6, 0x390dac
  0390cb8  addic 29, 1, 336
  0390cbc  ori 3, 31, 0
  0390cc0  li 4, 0
  0390cc4  ori 5, 29, 0
  0390cc8  bl 0xf1114
  0390ccc  nop
  0390cd0  lfs 1, 16(31)
  0390cd4  addic 3, 1, 352
  0390cd8  stfs 1, 352(1)
  0390cdc  lfs 1, 20(31)
  0390ce0  li 5, 0
  0390ce4  lfs 2, 344(1)
  0390ce8  ori 4, 29, 0
  0390cec  stfs 1, 356(1)
  0390cf0  ori 6, 31, 0
  0390cf4  lfs 1, 28(31)
  0390cf8  li 7, 0
  0390cfc  stfs 2, 360(1)
  0390d00  stfs 1, 364(1)
  0390d04  bl 0x57820
  0390d08  nop
  0390d0c  cmpwi 3, 0
  0390d10  bf 2, 0x390d60
  0390d14  lis 3, 16512
  0390d18  li 4, 6
  0390d1c  stw 3, 408(30)
  0390d20  sth 24, 420(30)
  0390d24  lbz 3, 83(31)
  0390d28  stb 4, 32(31)
  0390d2c  cmpwi 3, 4
  0390d30  bt 2, 0x390d58
  0390d34  li 3, 6
  0390d38  bl 0x5e7e18
  0390d3c  nop
  0390d40  ori 6, 3, 0
  0390d44  ori 3, 31, 0
  0390d48  li 4, 4
  0390d4c  li 5, 0
  0390d50  bl 0xfddc0
  0390d54  nop
  0390d58  stw 24, 400(30)
  0390d5c  b 0x391968
  0390d60  li 3, 60
  0390d64  bl 0x5e7e18
  0390d68  nop
  0390d6c  stw 3, 400(30)
  0390d70  lbz 3, 83(31)
  0390d74  cmpwi 3, 0
  0390d78  bt 2, 0x390da0
  0390d7c  li 3, 5
  0390d80  bl 0x5e7e18
  0390d84  nop
  0390d88  ori 6, 3, 0
  0390d8c  ori 3, 31, 0
  0390d90  li 4, 0
  0390d94  li 5, 0
  0390d98  bl 0xfddc0
  0390d9c  nop
  0390da0  li 3, 1
  0390da4  stb 3, 32(31)
  0390da8  b 0x391968
  0390dac  lbz 3, 83(31)
  0390db0  cmpwi 3, 0
  0390db4  bt 2, 0x390ddc
  0390db8  li 3, 5
  0390dbc  bl 0x5e7e18
  0390dc0  nop
  0390dc4  ori 6, 3, 0
  0390dc8  ori 3, 31, 0
  0390dcc  li 4, 0
  0390dd0  li 5, 0
  0390dd4  bl 0xfddc0
  0390dd8  nop
  0390ddc  li 3, 1
  0390de0  stb 3, 32(31)
  0390de4  b 0x391968
  0390de8  lis 3, 16256
  0390dec  li 4, 10
  0390df0  stw 3, 88(31)
  0390df4  stw 24, 440(30)
  0390df8  ori 3, 31, 0
  0390dfc  stw 24, 444(30)
  0390e00  lfs 1, 192(1)
  0390e04  lfs 2, 200(1)
  0390e08  stfs 1, 64(1)
  0390e0c  stfs 2, 72(1)
  0390e10  lfs 1, 196(1)
  0390e14  lfs 2, 204(1)
  0390e18  stfs 1, 68(1)
  0390e1c  stb 4, 32(31)
  0390e20  stfs 2, 76(1)
  0390e24  ld 5, 64(1)
  0390e28  ld 6, 72(1)
  0390e2c  bl 0x38e978
  0390e30  b 0x391968
  0390e34  lhz 3, 430(30)
  0390e38  cmpwi 3, 0
  0390e3c  bt 2, 0x390efc
  0390e40  lis 3, 57
  0390e44  lwz 4, 352(30)
  0390e48  ori 28, 24, 0
  0390e4c  addi 3, 3, -2884
  0390e50  ori 29, 28, 0
  0390e54  lfs 30, 96(3)
  0390e58  ori 3, 4, 0
  0390e5c  lwz 5, 0(3)
  0390e60  cmpwi 5, 0
  0390e64  bf 1, 0x390eb8
  0390e68  ori 27, 24, 0
  0390e6c  addc 3, 3, 27
  0390e70  ori 4, 25, 0
  0390e74  addic 3, 3, 16
  0390e78  clrldi 3, 3, 32
  0390e7c  bl 0x5e8548
  0390e80  nop
  0390e84  fcmpu 0, 1, 30
  0390e88  lwz 4, 352(30)
  0390e8c  lwz 3, 0(4)
  0390e90  cror 6, 1, 2
  0390e94  bt 6, 0x390ea0
  0390e98  fmr 30, 1
  0390e9c  ori 29, 28, 0
  0390ea0  ori 5, 3, 0
  0390ea4  addic 28, 28, 1
  0390ea8  ori 3, 4, 0
  0390eac  cmpw 28, 5
  0390eb0  addic 27, 27, 16
  0390eb4  bt 0, 0x390e6c
  0390eb8  lwz 7, 336(30)
  0390ebc  extsw 3, 29
  0390ec0  addic 5, 29, 1
  0390ec4  extsw 8, 7
  0390ec8  subc 5, 5, 7
  0390ecc  subc 9, 3, 8
  0390ed0  subc 3, 8, 3
  0390ed4  sradi 8, 9, 63
  0390ed8  addic 6, 29, -1
  0390edc  and 5, 8, 5
  0390ee0  sradi 3, 3, 63
  0390ee4  addc 29, 7, 5
  0390ee8  subc 5, 6, 29
  0390eec  and 3, 3, 5
  0390ef0  addc 29, 29, 3
  0390ef4  sth 29, 422(30)
  0390ef8  b 0x390f08
  0390efc  lwz 29, 336(30)
  0390f00  lwz 4, 352(30)
  0390f04  sth 29, 422(30)
  0390f08  extsh 5, 29
  0390f0c  addic 3, 1, 368
  0390f10  sldi 5, 5, 4
  0390f14  addc 4, 4, 5
  0390f18  addic 4, 4, 16
  0390f1c  clrldi 4, 4, 32
  0390f20  bl 0x5e7e98
  0390f24  nop
  0390f28  lis 3, 57
  0390f2c  lfs 3, 376(1)
  0390f30  addi 29, 3, -2884
  0390f34  lfs 30, 100(29)
  0390f38  lfs 1, 368(1)
  0390f3c  fadds 3, 3, 30
  0390f40  lfs 2, 16(31)
  0390f44  lfs 4, 372(1)
  0390f48  lfs 5, 20(31)
  0390f4c  fsubs 1, 1, 2
  0390f50  fsubs 2, 4, 5
  0390f54  stfs 3, 376(1)
  0390f58  bl 0x5e8338
  0390f5c  nop
  0390f60  lis 4, 114
  0390f64  lfs 29, 104(29)
  0390f68  lis 6, 114
  0390f6c  lfs 28, 108(29)
  0390f70  addic 5, 30, 404
  0390f74  ori 3, 31, 0
  0390f78  lfs 3, -3048(4)
  0390f7c  lfs 4, -3052(6)
  0390f80  fmuls 2, 3, 29
  0390f84  fmuls 3, 3, 28
  0390f88  fmuls 4, 4, 29
  0390f8c  bl 0xff2e8
  0390f90  nop
  0390f94  lfs 1, 368(1)
  0390f98  lfs 27, 72(31)
  0390f9c  lfs 2, 16(31)
  0390fa0  lfs 3, 372(1)
  0390fa4  fsubs 1, 1, 2
  0390fa8  lfs 4, 20(31)
  0390fac  fsubs 2, 3, 4
  0390fb0  bl 0x5e8338
  0390fb4  nop
  0390fb8  fmr 2, 1
  0390fbc  fmr 1, 27
  0390fc0  bl 0x5026a0
  0390fc4  nop
  0390fc8  lfs 2, 112(29)
  0390fcc  fcmpu 0, 1, 2
  0390fd0  cror 6, 1, 2
  0390fd4  bt 6, 0x3910bc
  0390fd8  lis 3, 132
  0390fdc  lfs 27, 440(30)
  0390fe0  lis 4, 114
  0390fe4  lfs 1, 8728(3)
  0390fe8  lfs 2, -3052(4)
  0390fec  fmuls 2, 1, 2
  0390ff0  fcmpu 0, 27, 2
  0390ff4  cror 6, 1, 2
  0390ff8  bt 6, 0x39100c
  0390ffc  lis 3, 114
  0391000  lfs 2, -3048(3)
  0391004  fmadds 27, 1, 2, 27
  0391008  stfs 27, 440(30)
  039100c  lfs 26, 72(31)
  0391010  addic 29, 1, 384
  0391014  addic 4, 1, 368
  0391018  ori 3, 25, 0
  039101c  bl 0x5e8588
  0391020  nop
  0391024  lfs 2, 376(1)
  0391028  lfs 3, 24(31)
  039102c  fsubs 2, 2, 3
  0391030  bl 0x5e8338
  0391034  nop
  0391038  ori 3, 29, 0
  039103c  fmr 3, 1
  0391040  fmr 1, 27
  0391044  fmr 2, 26
  0391048  bl 0xfe610
  039104c  nop
  0391050  ori 3, 25, 0
  0391054  ori 4, 25, 0
  0391058  ori 5, 29, 0
  039105c  bl 0x5e7f54
  0391060  nop
  0391064  lis 3, 132
  0391068  lis 4, 114
  039106c  lfs 1, 440(30)
  0391070  addic 5, 30, 444
  0391074  lfs 2, 8728(3)
  0391078  lfs 5, -3052(4)
  039107c  fmuls 2, 2, 5
  0391080  lis 3, 57
  0391084  lis 4, 114
  0391088  addi 3, 3, -2884
  039108c  fdivs 2, 1, 2
  0391090  lfs 1, 68(31)
  0391094  lfs 7, 116(3)
  0391098  lfs 8, 120(3)
  039109c  lfs 6, -3048(4)
  03910a0  fmuls 3, 6, 29
  03910a4  fmuls 4, 6, 28
  03910a8  fmuls 5, 5, 8
  03910ac  fmuls 2, 2, 7
  03910b0  bl 0xff190
  03910b4  nop
  03910b8  stfs 1, 68(31)
  03910bc  lwz 4, 336(30)
  03910c0  lwz 5, 352(30)
  03910c4  addic 29, 1, 368
  03910c8  slwi 4, 4, 4
  03910cc  ori 3, 29, 0
  03910d0  addc 4, 5, 4
  03910d4  addic 4, 4, 16
  03910d8  clrldi 4, 4, 32
  03910dc  bl 0x5e7e98
  03910e0  nop
  03910e4  lfs 1, 376(1)
  03910e8  ori 3, 25, 0
  03910ec  fadds 1, 1, 30
  03910f0  ori 4, 29, 0
  03910f4  stfs 1, 376(1)
  03910f8  bl 0x5e8548
  03910fc  nop
  0391100  fmr 4, 1
  0391104  lis 3, 57
  0391108  lfs 30, 192(1)
  039110c  addi 3, 3, -2884
  0391110  lfs 1, 196(1)
  0391114  lfs 5, 68(3)
  0391118  lfs 2, 200(1)
  039111c  lfs 3, 204(1)
  0391120  fcmpu 0, 4, 5
  0391124  cror 6, 1, 2
  0391128  bt 6, 0x391134
  039112c  li 3, 11
  0391130  stb 3, 32(31)
  0391134  stfs 30, 64(1)
  0391138  stfs 2, 72(1)
  039113c  ori 3, 31, 0
  0391140  stfs 1, 68(1)
  0391144  stfs 3, 76(1)
  0391148  ld 5, 64(1)
  039114c  ld 6, 72(1)
  0391150  bl 0x38e978
  0391154  b 0x391968
  0391158  lis 3, 57
  039115c  lwz 4, 440(30)
  0391160  addi 3, 3, -2884
  0391164  lfs 5, 440(30)
  0391168  cmpwi 4, 0
  039116c  lfs 30, 8(3)
  0391170  bf 1, 0x391240
  0391174  lhz 3, 494(30)
  0391178  cmpwi 3, 0
  039117c  bf 2, 0x391240
  0391180  lis 3, 57
  0391184  lis 28, 132
  0391188  addi 29, 3, -2884
  039118c  lis 27, 114
  0391190  lfs 1, 124(29)
  0391194  lfs 2, 8728(28)
  0391198  lfs 3, -3048(27)
  039119c  fmuls 1, 2, 1
  03911a0  fnmsubs 1, 1, 3, 5
  03911a4  stfs 1, 440(30)
  03911a8  lfs 1, 72(31)
  03911ac  bl 0x5e8078
  03911b0  nop
  03911b4  lfs 2, 440(30)
  03911b8  fmuls 2, 1, 2
  03911bc  lfs 1, 72(31)
  03911c0  stfs 2, 400(1)
  03911c4  bl 0x5e8128
  03911c8  nop
  03911cc  lfs 2, 440(30)
  03911d0  ori 3, 25, 0
  03911d4  stw 24, 408(1)
  03911d8  addic 5, 1, 400
  03911dc  fmuls 1, 1, 2
  03911e0  ori 4, 25, 0
  03911e4  stfs 1, 404(1)
  03911e8  bl 0x5e7f54
  03911ec  nop
  03911f0  lis 3, 114
  03911f4  lfs 1, 8728(28)
  03911f8  lfs 2, 440(30)
  03911fc  lfs 5, -3052(3)
  0391200  fmuls 1, 1, 5
  0391204  lfs 8, 116(29)
  0391208  addic 5, 30, 444
  039120c  lfs 9, 104(29)
  0391210  fmuls 5, 5, 9
  0391214  fdivs 2, 2, 1
  0391218  lfs 1, 68(31)
  039121c  lfs 6, 108(29)
  0391220  lfs 7, -3048(27)
  0391224  fmuls 3, 7, 9
  0391228  fmuls 4, 7, 6
  039122c  fmuls 2, 2, 8
  0391230  bl 0xff190
  0391234  nop
  0391238  fmr 5, 1
  039123c  b 0x3912c8
  0391240  fsubs 1, 3, 1
  0391244  fsubs 2, 4, 2
  0391248  bl 0x5e8338
  039124c  nop
  0391250  lis 3, 57
  0391254  addic 5, 30, 404
  0391258  addi 29, 3, -2884
  039125c  ori 3, 31, 0
  0391260  lfs 2, 44(29)
  0391264  lfs 3, 48(29)
  0391268  lfs 4, 52(29)
  039126c  bl 0xff2e8
  0391270  nop
  0391274  lis 3, 132
  0391278  stw 24, 440(30)
  039127c  lis 4, 114
  0391280  addic 5, 30, 444
  0391284  lfs 1, 8728(3)
  0391288  lfs 5, -3052(4)
  039128c  fmuls 1, 1, 5
  0391290  lis 3, 114
  0391294  lfs 8, 116(29)
  0391298  lfs 9, 104(29)
  039129c  fmuls 5, 5, 9
  03912a0  fdivs 2, 30, 1
  03912a4  lfs 1, 68(31)
  03912a8  lfs 6, 108(29)
  03912ac  lfs 7, -3048(3)
  03912b0  fmuls 3, 7, 9
  03912b4  fmuls 4, 7, 6
  03912b8  fmuls 2, 2, 8
  03912bc  bl 0xff190
  03912c0  nop
  03912c4  fmr 5, 1
  03912c8  lbz 3, 83(31)
  03912cc  stfs 5, 68(31)
  03912d0  cmpwi 3, 10
  03912d4  bt 2, 0x39136c
  03912d8  lwz 4, 440(30)
  03912dc  cmpwi 4, 0
  03912e0  bt 1, 0x39136c
  03912e4  lfs 1, 416(1)
  03912e8  lfs 30, 72(31)
  03912ec  lfs 2, 16(31)
  03912f0  lfs 3, 420(1)
  03912f4  fsubs 1, 1, 2
  03912f8  lfs 4, 20(31)
  03912fc  fsubs 2, 3, 4
  0391300  bl 0x5e8338
  0391304  nop
  0391308  fmr 2, 1
  039130c  fmr 1, 30
  0391310  bl 0x5026a0
  0391314  nop
  0391318  lis 3, 57
  039131c  addi 4, 3, -2884
  0391320  lbz 3, 83(31)
  0391324  lfs 2, 128(4)
  0391328  fcmpu 0, 1, 2
  039132c  cror 6, 1, 2
  0391330  bt 6, 0x39136c
  0391334  stw 24, 440(30)
  0391338  lbz 3, 83(31)
  039133c  cmpwi 3, 10
  0391340  bt 2, 0x3913bc
  0391344  li 3, 3
  0391348  bl 0x5e7e18
  039134c  nop
  0391350  ori 6, 3, 0
  0391354  ori 3, 31, 0
  0391358  li 4, 10
  039135c  li 5, 0
  0391360  bl 0xfddc0
  0391364  nop
  0391368  b 0x3913bc
  039136c  lbz 4, 82(31)
  0391370  cmpwi 4, 10
  0391374  bf 2, 0x3913bc
  0391378  cmpwi 1, 3, 0
  039137c  lbz 3, 112(31)
  0391380  rlwinm 3, 3, 0, 30, 30
  0391384  cmpwi 3, 0
  0391388  bt 2, 0x3913bc
  039138c  bt 6, 0x3913b4
  0391390  li 3, 6
  0391394  bl 0x5e7e18
  0391398  nop
  039139c  ori 6, 3, 0
  03913a0  ori 3, 31, 0
  03913a4  li 4, 0
  03913a8  li 5, 0
  03913ac  bl 0xfddc0
  03913b0  nop
  03913b4  li 3, 1
  03913b8  stb 3, 32(31)
  03913bc  lfs 1, 192(1)
  03913c0  ori 3, 31, 0
  03913c4  lfs 2, 200(1)
  03913c8  stfs 1, 64(1)
  03913cc  stfs 2, 72(1)
  03913d0  lfs 1, 196(1)
  03913d4  lfs 2, 204(1)
  03913d8  stfs 1, 68(1)
  03913dc  stfs 2, 76(1)
  03913e0  ld 5, 64(1)
  03913e4  ld 6, 72(1)
  03913e8  bl 0x38e978
  03913ec  b 0x391968
  03913f0  ori 3, 31, 0
  03913f4  addic 4, 30, 112
  03913f8  bl 0x10b030
  03913fc  nop
  0391400  rlwinm 3, 3, 0, 25, 25
  0391404  cmpwi 3, 0
  0391408  bt 2, 0x3914d0
  039140c  lwz 4, 500(1)
  0391410  lwz 5, 352(30)
  0391414  ori 3, 25, 0
  0391418  slwi 4, 4, 4
  039141c  addc 4, 5, 4
  0391420  addic 4, 4, 16
  0391424  clrldi 4, 4, 32
  0391428  bl 0x5e8548
  039142c  nop
  0391430  lis 3, 57
  0391434  addi 3, 3, -2884
  0391438  lfs 2, 68(3)
  039143c  fcmpu 0, 1, 2
  0391440  cror 6, 0, 2
  0391444  bt 6, 0x391498
  0391448  lbz 3, 83(31)
  039144c  cmpwi 3, 8
  0391450  bt 2, 0x391478
  0391454  li 3, 10
  0391458  bl 0x5e7e18
  039145c  nop
  0391460  ori 6, 3, 0
  0391464  ori 3, 31, 0
  0391468  li 4, 8
  039146c  li 5, 0
  0391470  bl 0xfddc0
  0391474  nop
  0391478  lis 3, 132
  039147c  lwz 5, 500(1)
  0391480  li 4, 9
  0391484  lfs 1, 8736(3)
  0391488  stw 5, 336(30)
  039148c  stfs 1, 88(31)
  0391490  stb 4, 32(31)
  0391494  b 0x391bcc
  0391498  lbz 3, 83(31)
  039149c  cmpwi 3, 0
  03914a0  bt 2, 0x3914c8
  03914a4  li 3, 6
  03914a8  bl 0x5e7e18
  03914ac  nop
  03914b0  ori 6, 3, 0
  03914b4  ori 3, 31, 0
  03914b8  li 4, 0
  03914bc  li 5, 0
  03914c0  bl 0xfddc0
  03914c4  nop
  03914c8  li 3, 1
  03914cc  stb 3, 32(31)
  03914d0  lis 3, 57
  03914d4  lwz 5, 16(31)
  03914d8  lis 4, 16384
  03914dc  addi 3, 3, -2884
  03914e0  srawi 6, 5, 31
  03914e4  lfs 1, 4(3)
  03914e8  srwi 3, 6, 1
  03914ec  xor 3, 3, 5
  03914f0  subc 3, 3, 6
  03914f4  cmpw 3, 4
  03914f8  bt 0, 0x39156c
  03914fc  lis 4, 17535
  0391500  ori 4, 4, 16384
  0391504  cmpw 3, 4
  0391508  bt 1, 0x39156c
  039150c  lwz 5, 20(31)
  0391510  lis 3, 17535
  0391514  lis 4, 16384
  0391518  srawi 6, 5, 31
  039151c  ori 3, 3, 16384
  0391520  srwi 7, 6, 1
  0391524  xor 5, 7, 5
  0391528  subc 5, 5, 6
  039152c  cmpw 1, 5, 3
  0391530  cmpw 5, 4
  0391534  cror 2, 0, 5
  0391538  bt 2, 0x39156c
  039153c  lwz 5, 24(31)
  0391540  lis 3, 17535
  0391544  lis 4, 16384
  0391548  srawi 6, 5, 31
  039154c  ori 3, 3, 16384
  0391550  srwi 7, 6, 1
  0391554  xor 5, 7, 5
  0391558  subc 5, 5, 6
  039155c  cmpw 5, 4
  0391560  cmpw 1, 5, 3
  0391564  bt 0, 0x39156c
  0391568  bf 5, 0x391968
  039156c  lis 3, 57
  0391570  fmr 3, 1
  0391574  li 6, 4
  0391578  addi 3, 3, -2884
  039157c  li 7, 1
  0391580  li 11, -1
  0391584  addic 4, 30, 64
  0391588  ori 5, 25, 0
  039158c  lfs 1, 8(3)
  0391590  li 8, 5
  0391594  lfs 4, 136(3)
  0391598  li 9, 2
  039159c  lfs 5, 132(3)
  03915a0  li 10, 4
  03915a4  lfs 7, 20(3)
  03915a8  fmr 2, 1
  03915ac  std 6, 144(1)
  03915b0  ori 3, 31, 0
  03915b4  std 7, 160(1)
  03915b8  fmr 6, 4
  03915bc  std 7, 168(1)
  03915c0  std 11, 176(1)
  03915c4  std 24, 184(1)
  03915c8  bl 0x10e030
  03915cc  nop
  03915d0  ori 3, 31, 0
  03915d4  li 4, 0
  03915d8  li 5, -1
  03915dc  bl 0xfd8d0
  03915e0  nop
  03915e4  ori 3, 31, 0
  03915e8  bl 0xefb38
  03915ec  nop
  03915f0  b 0x391bcc
  03915f4  lhz 5, 52(31)
  03915f8  ori 3, 31, 0
  03915fc  rlwimi 5, 24, 0, 19, 19
  0391600  addic 4, 30, 112
  0391604  sth 5, 52(31)
  0391608  bl 0x10b030
  039160c  nop
  0391610  rlwinm 3, 3, 0, 29, 30
  0391614  cmpwi 3, 0
  0391618  bt 2, 0x391774
  039161c  lis 3, 57
  0391620  li 6, 4
  0391624  addi 5, 3, -2884
  0391628  li 7, 1
  039162c  li 11, -1
  0391630  addic 4, 30, 64
  0391634  ori 3, 31, 0
  0391638  lfs 31, 8(5)
  039163c  li 8, 5
  0391640  lfs 4, 136(5)
  0391644  li 9, 2
  0391648  lfs 3, 4(5)
  039164c  li 10, 4
  0391650  lfs 5, 132(5)
  0391654  fmr 1, 31
  0391658  lfs 7, 20(5)
  039165c  fmr 2, 31
  0391660  std 6, 144(1)
  0391664  ori 5, 25, 0
  0391668  std 7, 160(1)
  039166c  fmr 6, 4
  0391670  std 7, 168(1)
  0391674  std 11, 176(1)
  0391678  std 24, 184(1)
  039167c  bl 0x10e030
  0391680  nop
  0391684  lis 4, 161
  0391688  addic 29, 31, 64
  039168c  fmr 1, 31
  0391690  addic 30, 4, 23856
  0391694  ori 3, 31, 0
  0391698  li 4, 1736
  039169c  ori 10, 30, 0
  03916a0  std 30, 112(1)
  03916a4  ori 5, 25, 0
  03916a8  std 30, 120(1)
  03916ac  ori 6, 29, 0
  03916b0  li 7, 0
  03916b4  li 8, 0
  03916b8  bl 0x11a560
  03916bc  nop
  03916c0  std 30, 112(1)
  03916c4  ori 3, 31, 0
  03916c8  std 30, 120(1)
  03916cc  li 4, 1737
  03916d0  ori 10, 30, 0
  03916d4  fmr 1, 31
  03916d8  ori 5, 25, 0
  03916dc  ori 6, 29, 0
  03916e0  li 7, 0
  03916e4  li 8, 0
  03916e8  bl 0x11a560
  03916ec  nop
  03916f0  std 30, 112(1)
  03916f4  ori 3, 31, 0
  03916f8  std 30, 120(1)
  03916fc  li 4, 1738
  0391700  ori 10, 30, 0
  0391704  fmr 1, 31
  0391708  ori 5, 25, 0
  039170c  ori 6, 29, 0
  0391710  li 7, 0
  0391714  li 8, 0
  0391718  bl 0x11a560
  039171c  nop
  0391720  ori 3, 31, 0
  0391724  std 30, 112(1)
  0391728  li 4, 1770
  039172c  fmr 1, 31
  0391730  ori 10, 30, 0
  0391734  std 30, 120(1)
  0391738  ori 5, 25, 0
  039173c  ori 6, 29, 0
  0391740  li 7, 0
  0391744  li 8, 0
  0391748  bl 0x11a560
  039174c  nop
  0391750  ori 3, 31, 0
  0391754  li 4, 0
  0391758  li 5, -1
  039175c  bl 0xfd8d0
  0391760  nop
  0391764  ori 3, 31, 0
  0391768  bl 0xefb38
  039176c  nop
  0391770  b 0x391bcc
  0391774  lis 3, 57
  0391778  lwz 5, 16(31)
  039177c  lis 4, 16384
  0391780  addi 3, 3, -2884
  0391784  srawi 6, 5, 31
  0391788  lfs 1, 4(3)
  039178c  srwi 3, 6, 1
  0391790  xor 3, 3, 5
  0391794  subc 3, 3, 6
  0391798  cmpw 3, 4
  039179c  bt 0, 0x391810
  03917a0  lis 4, 17535
  03917a4  ori 4, 4, 16384
  03917a8  cmpw 3, 4
  03917ac  bt 1, 0x391810
  03917b0  lwz 5, 20(31)
  03917b4  lis 3, 17535
  03917b8  srawi 6, 5, 31
  03917bc  lis 4, 16384
  03917c0  srwi 7, 6, 1
  03917c4  ori 3, 3, 16384
  03917c8  xor 5, 7, 5
  03917cc  subc 5, 5, 6
  03917d0  cmpw 1, 5, 3
  03917d4  cmpw 5, 4
  03917d8  cror 2, 0, 5
  03917dc  bt 2, 0x391810
  03917e0  lwz 5, 24(31)
  03917e4  lis 3, 17535
  03917e8  srawi 6, 5, 31
  03917ec  lis 4, 16384
  03917f0  srwi 7, 6, 1
  03917f4  ori 3, 3, 16384
  03917f8  xor 5, 7, 5
  03917fc  subc 5, 5, 6
  0391800  cmpw 5, 4
  0391804  cmpw 1, 5, 3
  0391808  bt 0, 0x391810
  039180c  bf 5, 0x391968
  0391810  lis 3, 57
  0391814  li 7, 4
  0391818  fmr 3, 1
  039181c  addi 3, 3, -2884
  0391820  li 6, 1
  0391824  li 11, -1
  0391828  addic 4, 30, 64
  039182c  li 10, 4
  0391830  lfs 31, 8(3)
  0391834  lfs 4, 136(3)
  0391838  ori 5, 25, 0
  039183c  lfs 5, 132(3)
  0391840  li 8, 5
  0391844  lfs 7, 20(3)
  0391848  li 9, 2
  039184c  std 7, 144(1)
  0391850  ori 3, 31, 0
  0391854  std 6, 160(1)
  0391858  fmr 1, 31
  039185c  std 6, 168(1)
  0391860  fmr 2, 31
  0391864  std 11, 176(1)
  0391868  fmr 6, 4
  039186c  std 24, 184(1)
  0391870  bl 0x10e030
  0391874  nop
  0391878  lis 4, 161
  039187c  addic 30, 31, 64
  0391880  fmr 1, 31
  0391884  addic 29, 4, 23856
  0391888  ori 3, 31, 0
  039188c  ori 10, 29, 0
  0391890  li 4, 1736
  0391894  std 29, 112(1)
  0391898  ori 5, 25, 0
  039189c  std 29, 120(1)
  03918a0  ori 6, 30, 0
  03918a4  li 7, 0
  03918a8  li 8, 0
  03918ac  bl 0x11a560
  03918b0  nop
  03918b4  std 29, 112(1)
  03918b8  ori 3, 31, 0
  03918bc  std 29, 120(1)
  03918c0  ori 10, 29, 0
  03918c4  li 4, 1737
  03918c8  fmr 1, 31
  03918cc  ori 5, 25, 0
  03918d0  ori 6, 30, 0
  03918d4  li 7, 0
  03918d8  li 8, 0
  03918dc  bl 0x11a560
  03918e0  nop
  03918e4  std 29, 112(1)
  03918e8  ori 3, 31, 0
  03918ec  std 29, 120(1)
  03918f0  ori 10, 29, 0
  03918f4  li 4, 1738
  03918f8  fmr 1, 31
  03918fc  ori 5, 25, 0
  0391900  ori 6, 30, 0
  0391904  li 7, 0
  0391908  li 8, 0
  039190c  bl 0x11a560
  0391910  nop
  0391914  ori 3, 31, 0
  0391918  std 29, 112(1)
  039191c  ori 10, 29, 0
  0391920  fmr 1, 31
  0391924  li 4, 1770
  0391928  std 29, 120(1)
  039192c  ori 5, 25, 0
  0391930  ori 6, 30, 0
  0391934  li 7, 0
  0391938  li 8, 0
  039193c  bl 0x11a560
  0391940  nop
  0391944  ori 3, 31, 0
  0391948  li 4, 0
  039194c  li 5, -1
  0391950  bl 0xfd8d0
  0391954  nop
  0391958  ori 3, 31, 0
  039195c  bl 0xefb38
  0391960  nop
  0391964  b 0x391bcc
  0391968  addic 4, 30, 96
  039196c  ori 3, 31, 0
  0391970  bl 0x10c9a0
  0391974  nop
  0391978  stfs 31, 460(30)
  039197c  lbz 3, 32(31)
  0391980  cmpwi 3, 1
  0391984  bt 2, 0x3919a8
  0391988  cmpwi 3, 5
  039198c  bt 2, 0x3919a8
  0391990  cmpwi 3, 6
  0391994  bt 2, 0x3919a8
  0391998  cmpwi 3, 7
  039199c  bt 2, 0x3919a8
  03919a0  cmpwi 3, 11
  03919a4  bf 2, 0x391a18
  03919a8  lis 3, 57
  03919ac  lfs 1, 232(30)
  03919b0  addi 5, 3, -2884
  03919b4  lis 3, 114
  03919b8  li 4, 0
  03919bc  lfs 2, 140(5)
  03919c0  lfs 3, -3048(3)
  03919c4  fmadds 1, 3, 2, 1
  03919c8  ori 3, 25, 0
  03919cc  stfs 1, 232(30)
  03919d0  lfs 30, 4(5)
  03919d4  lfs 2, 24(31)
  03919d8  fsubs 1, 1, 30
  03919dc  fsubs 1, 2, 1
  03919e0  stfs 1, 24(31)
  03919e4  lfs 1, 40(5)
  03919e8  bl 0xffb70
  03919ec  nop
  03919f0  lfs 2, 24(31)
  03919f4  fmr 31, 1
  03919f8  fsubs 1, 2, 30
  03919fc  fcmpu 0, 1, 31
  0391a00  stfs 1, 24(31)
  0391a04  cror 6, 1, 2
  0391a08  bt 6, 0x391a38
  0391a0c  stfs 31, 24(31)
  0391a10  stw 24, 232(30)
  0391a14  b 0x391a38
  0391a18  lis 3, 57
  0391a1c  li 4, 0
  0391a20  addi 5, 3, -2884
  0391a24  ori 3, 25, 0
  0391a28  lfs 1, 40(5)
  0391a2c  bl 0xffb70
  0391a30  nop
  0391a34  fmr 31, 1
  0391a38  ori 3, 31, 0
  0391a3c  fmr 1, 31
  0391a40  bl 0x106330
  0391a44  nop
  0391a48  bl 0x60780
  0391a4c  nop
  0391a50  cmpwi 3, 0
  0391a54  bf 2, 0x391bcc
  0391a58  lis 3, 57
  0391a5c  addi 3, 3, -2884
  0391a60  lfs 1, 136(3)
  0391a64  lfs 2, 24(31)
  0391a68  fadds 3, 31, 1
  0391a6c  fcmpu 0, 2, 3
  0391a70  cror 6, 1, 2
  0391a74  bt 6, 0x391bcc
  0391a78  lis 3, 57
  0391a7c  fmr 4, 1
  0391a80  li 6, 4
  0391a84  fmr 6, 1
  0391a88  addi 3, 3, -2884
  0391a8c  li 7, 1
  0391a90  li 11, -1
  0391a94  addic 4, 30, 64
  0391a98  ori 5, 25, 0
  0391a9c  lfs 31, 8(3)
  0391aa0  lfs 3, 4(3)
  0391aa4  li 8, 5
  0391aa8  lfs 5, 132(3)
  0391aac  li 9, 2
  0391ab0  lfs 7, 20(3)
  0391ab4  li 10, 4
  0391ab8  std 6, 144(1)
  0391abc  ori 3, 31, 0
  0391ac0  std 7, 160(1)
  0391ac4  fmr 1, 31
  0391ac8  std 7, 168(1)
  0391acc  fmr 2, 31
  0391ad0  std 11, 176(1)
  0391ad4  std 24, 184(1)
  0391ad8  bl 0x10e030
  0391adc  nop
  0391ae0  lis 4, 161
  0391ae4  fmr 1, 31
  0391ae8  addic 29, 31, 64
  0391aec  addic 30, 4, 23856
  0391af0  ori 3, 31, 0
  0391af4  li 4, 1736
  0391af8  ori 10, 30, 0
  0391afc  std 30, 112(1)
  0391b00  std 30, 120(1)
  0391b04  ori 5, 25, 0
  0391b08  ori 6, 29, 0
  0391b0c  li 7, 0
  0391b10  li 8, 0
  0391b14  bl 0x11a560
  0391b18  nop
  0391b1c  std 30, 112(1)
  0391b20  std 30, 120(1)
  0391b24  ori 3, 31, 0
  0391b28  li 4, 1737
  0391b2c  fmr 1, 31
  0391b30  ori 10, 30, 0
  0391b34  ori 5, 25, 0
  0391b38  ori 6, 29, 0
  0391b3c  li 7, 0
  0391b40  li 8, 0
  0391b44  bl 0x11a560
  0391b48  nop
  0391b4c  std 30, 112(1)
  0391b50  ori 3, 31, 0
  0391b54  std 30, 120(1)
  0391b58  li 4, 1738
  0391b5c  fmr 1, 31
  0391b60  ori 10, 30, 0
  0391b64  ori 5, 25, 0
  0391b68  ori 6, 29, 0
  0391b6c  li 7, 0
  0391b70  li 8, 0
  0391b74  bl 0x11a560
  0391b78  nop
  0391b7c  ori 3, 31, 0
  0391b80  std 30, 112(1)
  0391b84  li 4, 1770
  0391b88  ori 10, 30, 0
  0391b8c  fmr 1, 31
  0391b90  ori 5, 25, 0
  0391b94  std 30, 120(1)
  0391b98  ori 6, 29, 0
  0391b9c  li 7, 0
  0391ba0  li 8, 0
  0391ba4  bl 0x11a560
  0391ba8  nop
  0391bac  ori 3, 31, 0
  0391bb0  li 4, 0
  0391bb4  li 5, -1
  0391bb8  bl 0xfd8d0
  0391bbc  nop
  0391bc0  ori 3, 31, 0
  0391bc4  bl 0xefb38
  0391bc8  nop
  0391bcc  ld 0, 640(1)
  0391bd0  mtlr 0
  0391bd4  lfd 26, 576(1)
  0391bd8  lfd 27, 584(1)
  0391bdc  lfd 28, 592(1)
  0391be0  lfd 29, 600(1)
  0391be4  lfd 30, 608(1)
  0391be8  lfd 31, 616(1)
  0391bec  ld 24, 512(1)
  0391bf0  ld 25, 520(1)
  0391bf4  ld 26, 528(1)
  0391bf8  ld 27, 536(1)
  0391bfc  ld 28, 544(1)
  0391c00  ld 29, 552(1)
  0391c04  ld 30, 560(1)
  0391c08  ld 31, 568(1)
  0391c0c  addi 1, 1, 624
  0391c10  blr

M459_00391c14:   # 0x391c14, 0x14 bytes
  0391c14  lis 3, 132
  0391c18  lis 4, 1
  0391c1c  addic 3, 3, 8744
  0391c20  stw 4, 72(3)
  0391c24  blr
