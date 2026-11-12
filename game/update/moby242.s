# game/update/moby242.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M242_0030e964:   # 0x30e964, 0x14 bytes
  030e964  lis 3, 128
  030e968  lis 4, 1
  030e96c  addic 3, 3, -2288
  030e970  stw 4, 72(3)
  030e974  blr

M242_0030e980:   # 0x30e980, 0x458 bytes
  030e980  mr 11, 1
  030e984  stdu 1, -448(1)
  030e988  mflr 0
  030e98c  std 0, 16(11)
  030e990  stfd 24, -64(11)
  030e994  stfd 25, -56(11)
  030e998  stfd 26, -48(11)
  030e99c  stfd 27, -40(11)
  030e9a0  stfd 28, -32(11)
  030e9a4  stfd 29, -24(11)
  030e9a8  stfd 30, -16(11)
  030e9ac  stfd 31, -8(11)
  030e9b0  std 30, -80(11)
  030e9b4  std 31, -72(11)
  030e9b8  mr 31, 1
  030e9bc  std 21, -152(11)
  030e9c0  ori 30, 3, 0
  030e9c4  lwz 3, 8(4)
  030e9c8  std 29, -88(11)
  030e9cc  lis 21, 49
  030e9d0  ori 29, 4, 0
  030e9d4  rlwinm 3, 3, 0, 23, 23
  030e9d8  addi 21, 21, -5768
  030e9dc  std 28, -96(11)
  030e9e0  std 27, -104(11)
  030e9e4  std 26, -112(11)
  030e9e8  std 25, -120(11)
  030e9ec  std 24, -128(11)
  030e9f0  std 23, -136(11)
  030e9f4  std 22, -144(11)
  030e9f8  std 20, -160(11)
  030e9fc  std 19, -168(11)
  030ea00  std 18, -176(11)
  030ea04  cmpwi 3, 0
  030ea08  bf 2, 0x30ed6c
  030ea0c  addic 3, 31, 160
  030ea10  addic 4, 30, 64
  030ea14  bl 0x500b64
  030ea18  nop
  030ea1c  li 3, 4
  030ea20  lvlx 2, 0, 29
  030ea24  li 4, 192
  030ea28  lvlx 3, 0, 21
  030ea2c  li 5, 196
  030ea30  li 6, 200
  030ea34  vspltisw 11, 0
  030ea38  vspltw 3, 3, 0
  030ea3c  li 7, 16
  030ea40  lvlx 4, 3, 29
  030ea44  li 8, 20
  030ea48  li 3, 204
  030ea4c  lfs 1, 0(29)
  030ea50  vcmpgtfp 5, 2, 4
  030ea54  lfs 2, 4(29)
  030ea58  li 9, 24
  030ea5c  vsel 2, 4, 2, 5
  030ea60  vspltisw 4, -1
  030ea64  fsub 3, 2, 1
  030ea68  lvlx 5, 4, 31
  030ea6c  li 10, 136
  030ea70  lvlx 6, 5, 31
  030ea74  li 4, 128
  030ea78  lvlx 7, 3, 31
  030ea7c  vslw 4, 4, 4
  030ea80  lvlx 8, 6, 31
  030ea84  addic 3, 31, 128
  030ea88  lvlx 9, 7, 30
  030ea8c  li 5, 16
  030ea90  vmaddfp 2, 2, 3, 4
  030ea94  ori 6, 30, 0
  030ea98  vspltisw 3, -1
  030ea9c  li 7, 0
  030eaa0  lvlx 4, 8, 30
  030eaa4  lvlx 10, 9, 30
  030eaa8  fsel 1, 3, 2, 1
  030eaac  li 8, 140
  030eab0  vslw 3, 3, 3
  030eab4  li 9, 132
  030eab8  lfs 30, 0(21)
  030eabc  stvx 11, 4, 31
  030eac0  vmaddfp 3, 7, 2, 3
  030eac4  vmaddfp 5, 5, 2, 9
  030eac8  vmaddfp 4, 6, 2, 4
  030eacc  vmaddfp 2, 8, 2, 10
  030ead0  fmuls 1, 1, 30
  030ead4  vspltw 3, 3, 0
  030ead8  vspltw 5, 5, 0
  030eadc  vspltw 4, 4, 0
  030eae0  vspltw 2, 2, 0
  030eae4  stvewx 3, 8, 31
  030eae8  stvewx 5, 4, 31
  030eaec  stvewx 4, 9, 31
  030eaf0  stvewx 2, 10, 31
  030eaf4  bl 0x5e598
  030eaf8  nop
  030eafc  ori 28, 3, 0
  030eb00  cmpwi 28, 0
  030eb04  bt 2, 0x30ed6c
  030eb08  sldi 3, 28, 2
  030eb0c  ld 6, 0(1)
  030eb10  lis 26, 161
  030eb14  extsw 3, 3
  030eb18  ori 27, 1, 0
  030eb1c  addic 3, 3, 127
  030eb20  addic 26, 26, 18944
  030eb24  rldicr 3, 3, 0, 59
  030eb28  slwi 5, 28, 2
  030eb2c  neg 3, 3
  030eb30  ori 4, 26, 0
  030eb34  addc 7, 1, 3
  030eb38  addc 3, 1, 3
  030eb3c  clrldi 1, 3, 32
  030eb40  std 6, 0(7)
  030eb44  addic 3, 1, 112
  030eb48  bl 0x5c5ad0
  030eb4c  nop
  030eb50  li 25, 0
  030eb54  cmpwi 28, 0
  030eb58  ori 20, 25, 0
  030eb5c  bf 1, 0x30ed68
  030eb60  ori 19, 1, 0
  030eb64  lwz 24, 112(19)
  030eb68  cmpwi 24, 0
  030eb6c  bt 2, 0x30ed58
  030eb70  lbz 3, 32(24)
  030eb74  cmpwi 1, 3, 253
  030eb78  cmpwi 3, 254
  030eb7c  cror 2, 2, 6
  030eb80  bt 2, 0x30ed58
  030eb84  lfs 1, 20(24)
  030eb88  lfs 2, 20(30)
  030eb8c  addic 3, 31, 208
  030eb90  lfs 3, 16(24)
  030eb94  addic 4, 31, 160
  030eb98  fsubs 29, 1, 2
  030eb9c  lfs 1, 16(30)
  030eba0  lfs 2, 24(24)
  030eba4  fsubs 28, 3, 1
  030eba8  lfs 1, 24(30)
  030ebac  lfs 31, 28(24)
  030ebb0  fsubs 27, 2, 1
  030ebb4  bl 0x5010c0
  030ebb8  nop
  030ebbc  lfs 1, 224(31)
  030ebc0  lfs 2, 208(31)
  030ebc4  fmuls 1, 1, 29
  030ebc8  lfs 3, 240(31)
  030ebcc  lfs 6, 256(31)
  030ebd0  lfs 4, 232(31)
  030ebd4  lfs 7, 216(31)
  030ebd8  fmuls 8, 4, 29
  030ebdc  fmadds 1, 2, 28, 1
  030ebe0  lfs 2, 236(31)
  030ebe4  lfs 4, 0(29)
  030ebe8  fmuls 2, 2, 29
  030ebec  lfs 5, 40(29)
  030ebf0  fmadds 7, 7, 28, 8
  030ebf4  lfs 8, 248(31)
  030ebf8  fnmadds 26, 4, 30, 5
  030ebfc  fmadds 1, 3, 27, 1
  030ec00  lfs 3, 220(31)
  030ec04  lfs 9, 264(31)
  030ec08  fmadds 3, 3, 28, 2
  030ec0c  lfs 10, 252(31)
  030ec10  lfs 2, 268(31)
  030ec14  fmadds 11, 8, 27, 7
  030ec18  fmadds 25, 6, 31, 1
  030ec1c  lfs 6, 4(29)
  030ec20  lfs 7, 44(29)
  030ec24  fmadds 1, 10, 27, 3
  030ec28  lfs 8, 160(31)
  030ec2c  fmadds 3, 9, 31, 11
  030ec30  lfs 9, 192(31)
  030ec34  lfs 10, 164(31)
  030ec38  lfs 11, 196(31)
  030ec3c  lfs 12, 168(31)
  030ec40  fcmpu 0, 25, 26
  030ec44  lfs 13, 200(31)
  030ec48  lfs 0, 172(31)
  030ec4c  lfs 29, 204(31)
  030ec50  lfs 28, 16(30)
  030ec54  lfs 27, 20(30)
  030ec58  lfs 26, 24(30)
  030ec5c  cror 6, 1, 2
  030ec60  bt 6, 0x30ec70
  030ec64  lfs 25, 4(21)
  030ec68  fmuls 25, 4, 25
  030ec6c  b 0x30ec84
  030ec70  fmadds 24, 4, 30, 5
  030ec74  fcmpu 0, 25, 24
  030ec78  cror 6, 0, 2
  030ec7c  bt 6, 0x30ec84
  030ec80  fmuls 25, 4, 30
  030ec84  fnmadds 4, 6, 30, 7
  030ec88  fcmpu 0, 3, 4
  030ec8c  cror 6, 1, 2
  030ec90  bt 6, 0x30eca0
  030ec94  lfs 3, 4(21)
  030ec98  fmuls 3, 6, 3
  030ec9c  b 0x30ecb4
  030eca0  fmadds 4, 6, 30, 7
  030eca4  fcmpu 0, 3, 4
  030eca8  cror 6, 0, 2
  030ecac  bt 6, 0x30ecb4
  030ecb0  fmuls 3, 6, 30
  030ecb4  fmuls 4, 0, 25
  030ecb8  fmadds 6, 9, 3, 28
  030ecbc  addic 3, 31, 144
  030ecc0  fmadds 7, 11, 3, 27
  030ecc4  li 5, 16
  030ecc8  fmadds 9, 13, 3, 26
  030eccc  ori 6, 30, 0
  030ecd0  fmadds 2, 2, 31, 1
  030ecd4  li 7, 0
  030ecd8  fmr 1, 5
  030ecdc  fmadds 3, 29, 3, 4
  030ece0  fmadds 4, 8, 25, 6
  030ece4  fmadds 5, 10, 25, 7
  030ece8  fmadds 6, 12, 25, 9
  030ecec  fadds 2, 3, 2
  030ecf0  stfs 4, 144(31)
  030ecf4  stfs 5, 148(31)
  030ecf8  stfs 6, 152(31)
  030ecfc  stfs 2, 156(31)
  030ed00  bl 0x5e598
  030ed04  nop
  030ed08  ori 23, 3, 0
  030ed0c  ori 22, 20, 0
  030ed10  cmpwi 23, 0
  030ed14  bf 1, 0x30ed58
  030ed18  ori 18, 26, 0
  030ed1c  lwz 3, 0(18)
  030ed20  cmpw 3, 24
  030ed24  bf 2, 0x30ed48
  030ed28  lis 5, 1
  030ed2c  lfs 1, 48(29)
  030ed30  addic 7, 31, 144
  030ed34  ori 3, 24, 0
  030ed38  ori 4, 30, 0
  030ed3c  ori 5, 5, 1
  030ed40  bl 0x105d2c
  030ed44  nop
  030ed48  addic 22, 22, 1
  030ed4c  addic 18, 18, 4
  030ed50  cmpw 22, 23
  030ed54  bt 0, 0x30ed1c
  030ed58  addic 25, 25, 1
  030ed5c  addic 19, 19, 4
  030ed60  cmpw 25, 28
  030ed64  bt 0, 0x30eb64
  030ed68  ori 1, 27, 0
  030ed6c  addi 11, 31, 448
  030ed70  ld 0, 16(11)
  030ed74  mtlr 0
  030ed78  lfd 24, -64(11)
  030ed7c  lfd 25, -56(11)
  030ed80  lfd 26, -48(11)
  030ed84  lfd 27, -40(11)
  030ed88  lfd 28, -32(11)
  030ed8c  lfd 29, -24(11)
  030ed90  lfd 30, -16(11)
  030ed94  lfd 31, -8(11)
  030ed98  ld 18, -176(11)
  030ed9c  ld 19, -168(11)
  030eda0  ld 20, -160(11)
  030eda4  ld 21, -152(11)
  030eda8  ld 22, -144(11)
  030edac  ld 23, -136(11)
  030edb0  ld 24, -128(11)
  030edb4  ld 25, -120(11)
  030edb8  ld 26, -112(11)
  030edbc  ld 27, -104(11)
  030edc0  ld 28, -96(11)
  030edc4  ld 29, -88(11)
  030edc8  ld 30, -80(11)
  030edcc  ld 31, -72(11)
  030edd0  mr 1, 11
  030edd4  blr

M242_0030edd8:   # 0x30edd8, 0xa8 bytes
  030edd8  lis 8, 165
  030eddc  li 10, 0
  030ede0  sldi 3, 3, 2
  030ede4  addic 9, 8, -28284
  030ede8  lis 8, 164
  030edec  extsw 11, 3
  030edf0  stw 10, 0(4)
  030edf4  ori 3, 10, 0
  030edf8  stw 10, 0(5)
  030edfc  cmpwi 1, 7, -1
  030ee00  cmpwi 7, 6, -1
  030ee04  lwz 8, -28512(8)
  030ee08  lwzx 9, 9, 11
  030ee0c  lhz 11, 0(9)
  030ee10  rlwinm 11, 11, 8, 9, 23
  030ee14  addc 11, 8, 11
  030ee18  clrldi 11, 11, 32
  030ee1c  lbz 12, 32(11)
  030ee20  cmpwi 12, 128
  030ee24  cmpw 6, 12, 6
  030ee28  bf 0, 0x30ee64
  030ee2c  addic 10, 10, 1
  030ee30  extsw 10, 10
  030ee34  bt 30, 0x30ee3c
  030ee38  bf 26, 0x30ee4c
  030ee3c  lwz 3, 0(4)
  030ee40  addic 3, 3, 1
  030ee44  stw 3, 0(4)
  030ee48  lwz 3, 0(5)
  030ee4c  bt 6, 0x30ee5c
  030ee50  lbz 11, 32(11)
  030ee54  cmpw 11, 7
  030ee58  bf 2, 0x30ee64
  030ee5c  addic 3, 3, 1
  030ee60  stw 3, 0(5)
  030ee64  lhz 11, 0(9)
  030ee68  addic 9, 9, 2
  030ee6c  extsh 11, 11
  030ee70  cmpwi 11, 0
  030ee74  bf 0, 0x30ee0c
  030ee78  ori 3, 10, 0
  030ee7c  blr

M242_0030ee80:   # 0x30ee80, 0x74 bytes
  030ee80  stdu 1, -128(1)
  030ee84  mflr 0
  030ee88  std 0, 144(1)
  030ee8c  std 31, 120(1)
  030ee90  ori 31, 3, 0
  030ee94  lwz 4, 8(4)
  030ee98  li 7, 0
  030ee9c  ori 3, 5, 0
  030eea0  rlwinm 5, 4, 0, 22, 22
  030eea4  cmpwi 5, 0
  030eea8  stw 7, 148(31)
  030eeac  bt 2, 0x30eed8
  030eeb0  cmpwi 3, 0
  030eeb4  bt 2, 0x30eecc
  030eeb8  clrlwi 4, 4, 31
  030eebc  cmpwi 4, 0
  030eec0  bf 2, 0x30eecc
  030eec4  bl 0xefb38
  030eec8  nop
  030eecc  li 3, 5
  030eed0  stb 3, 32(31)
  030eed4  b 0x30eee0
  030eed8  li 3, 3
  030eedc  stb 3, 32(31)
  030eee0  ld 0, 144(1)
  030eee4  mtlr 0
  030eee8  ld 31, 120(1)
  030eeec  addi 1, 1, 128
  030eef0  blr

UpdateMoby_242:   # 0x30eef4, 0x6ac bytes
  030eef4  stdu 1, -176(1)
  030eef8  mflr 0
  030eefc  std 0, 192(1)
  030ef00  stfd 31, 168(1)
  030ef04  std 31, 160(1)
  030ef08  std 29, 144(1)
  030ef0c  std 26, 120(1)
  030ef10  ori 31, 3, 0
  030ef14  li 29, 0
  030ef18  std 30, 152(1)
  030ef1c  ori 26, 29, 0
  030ef20  lwz 30, 120(31)
  030ef24  lbz 3, 176(31)
  030ef28  lbz 5, 32(31)
  030ef2c  cmpwi 1, 3, 255
  030ef30  cmpwi 6, 5, 0
  030ef34  lwz 4, 16(30)
  030ef38  std 28, 136(1)
  030ef3c  std 27, 128(1)
  030ef40  cmpwi 4, -1
  030ef44  bt 2, 0x30ef5c
  030ef48  lis 5, 164
  030ef4c  slwi 4, 4, 8
  030ef50  lwz 5, -28512(5)
  030ef54  addc 29, 5, 4
  030ef58  clrldi 29, 29, 32
  030ef5c  ori 28, 26, 0
  030ef60  ori 27, 28, 0
  030ef64  bt 6, 0x30ef94
  030ef68  lis 4, 151
  030ef6c  lis 5, 161
  030ef70  addic 5, 5, -13692
  030ef74  lwz 4, -25488(4)
  030ef78  addc 3, 3, 5
  030ef7c  slwi 4, 4, 4
  030ef80  clrldi 3, 3, 32
  030ef84  extsw 4, 4
  030ef88  lbzx 3, 3, 4
  030ef8c  cmpwi 3, 255
  030ef90  bt 2, 0x30f064
  030ef94  bt 26, 0x30f068
  030ef98  lwz 3, 28(30)
  030ef9c  addic 5, 1, 116
  030efa0  lbz 6, 26(30)
  030efa4  addic 4, 1, 112
  030efa8  lbz 7, 27(30)
  030efac  extsw 3, 3
  030efb0  extsb 6, 6
  030efb4  extsb 7, 7
  030efb8  bl 0x30edd8
  030efbc  lbz 5, 32(31)
  030efc0  cmpwi 3, 0
  030efc4  lhz 6, 166(31)
  030efc8  lwz 4, 112(1)
  030efcc  bt 2, 0x30efd8
  030efd0  cmpw 3, 4
  030efd4  bf 2, 0x30f018
  030efd8  cmpwi 5, 1
  030efdc  bf 2, 0x30f010
  030efe0  lis 8, 161
  030efe4  lis 5, 101
  030efe8  lhz 9, 178(31)
  030efec  ori 7, 3, 0
  030eff0  addic 3, 5, 24012
  030eff4  extsh 5, 6
  030eff8  lwz 8, 1808(8)
  030effc  extsw 6, 4
  030f000  extsw 8, 8
  030f004  extsh 4, 9
  030f008  bl 0x5cd098
  030f00c  nop
  030f010  li 28, 1
  030f014  b 0x30f068
  030f018  lwz 4, 116(1)
  030f01c  cmpw 4, 3
  030f020  bf 2, 0x30f068
  030f024  cmpwi 5, 3
  030f028  bf 2, 0x30f05c
  030f02c  lis 8, 161
  030f030  lhz 9, 178(31)
  030f034  extsh 5, 6
  030f038  lis 6, 101
  030f03c  ori 7, 3, 0
  030f040  addic 3, 6, 24076
  030f044  lwz 8, 1808(8)
  030f048  extsw 6, 4
  030f04c  extsh 4, 9
  030f050  extsw 8, 8
  030f054  bl 0x5cd098
  030f058  nop
  030f05c  li 27, 1
  030f060  b 0x30f068
  030f064  li 28, 1
  030f068  lbz 3, 32(31)
  030f06c  cmpwi 3, 5
  030f070  cmpwi 1, 3, 4
  030f074  cmpwi 6, 3, 3
  030f078  cmpwi 7, 3, 2
  030f07c  bt 2, 0x30f564
  030f080  bt 6, 0x30f438
  030f084  bt 26, 0x30f3c8
  030f088  cmpwi 1, 29, 0
  030f08c  bt 30, 0x30f230
  030f090  cmpwi 3, 1
  030f094  cmpwi 6, 28, 0
  030f098  bt 2, 0x30f1c4
  030f09c  cmpwi 3, 0
  030f0a0  cmpwi 1, 29, 0
  030f0a4  bf 2, 0x30f574
  030f0a8  bt 6, 0x30f188
  030f0ac  lhz 3, 166(29)
  030f0b0  sth 3, 20(30)
  030f0b4  lbz 3, 35(29)
  030f0b8  bl 0x502730
  030f0bc  nop
  030f0c0  lwz 3, 8(30)
  030f0c4  stfs 1, 36(30)
  030f0c8  rlwinm 4, 3, 0, 27, 27
  030f0cc  cmpwi 4, 0
  030f0d0  bt 2, 0x30f0f8
  030f0d4  lfs 1, 16(29)
  030f0d8  stfs 1, 16(31)
  030f0dc  lfs 1, 20(29)
  030f0e0  stfs 1, 20(31)
  030f0e4  lfs 1, 24(29)
  030f0e8  stfs 1, 24(31)
  030f0ec  lfs 1, 28(29)
  030f0f0  stfs 1, 28(31)
  030f0f4  b 0x30f124
  030f0f8  rlwinm 3, 3, 0, 25, 25
  030f0fc  cmpwi 3, 0
  030f100  bt 2, 0x30f124
  030f104  lfs 1, 16(31)
  030f108  stfs 1, 16(29)
  030f10c  lfs 1, 20(31)
  030f110  stfs 1, 20(29)
  030f114  lfs 1, 24(31)
  030f118  stfs 1, 24(29)
  030f11c  lfs 1, 28(31)
  030f120  stfs 1, 28(29)
  030f124  lwz 3, 8(30)
  030f128  rlwinm 4, 3, 0, 26, 26
  030f12c  cmpwi 4, 0
  030f130  bt 2, 0x30f158
  030f134  lfs 1, 64(29)
  030f138  stfs 1, 64(31)
  030f13c  lfs 1, 68(29)
  030f140  stfs 1, 68(31)
  030f144  lfs 1, 72(29)
  030f148  stfs 1, 72(31)
  030f14c  lfs 1, 76(29)
  030f150  stfs 1, 76(31)
  030f154  b 0x30f198
  030f158  rlwinm 3, 3, 0, 24, 24
  030f15c  cmpwi 3, 0
  030f160  bt 2, 0x30f198
  030f164  lfs 1, 64(31)
  030f168  stfs 1, 64(29)
  030f16c  lfs 1, 68(31)
  030f170  stfs 1, 68(29)
  030f174  lfs 1, 72(31)
  030f178  stfs 1, 72(29)
  030f17c  lfs 1, 76(31)
  030f180  stfs 1, 76(29)
  030f184  b 0x30f198
  030f188  lis 3, 101
  030f18c  addic 3, 3, 24140
  030f190  bl 0x5cd098
  030f194  nop
  030f198  lfs 1, 4(30)
  030f19c  lfs 2, 0(30)
  030f1a0  li 3, 1
  030f1a4  lwz 4, 36(31)
  030f1a8  fsub 3, 2, 1
  030f1ac  lfs 4, 36(4)
  030f1b0  stb 3, 32(31)
  030f1b4  fsel 1, 3, 2, 1
  030f1b8  fmuls 1, 4, 1
  030f1bc  stfs 1, 44(31)
  030f1c0  b 0x30f574
  030f1c4  cmpwi 1, 29, 0
  030f1c8  bt 26, 0x30f220
  030f1cc  bt 6, 0x30f1e4
  030f1d0  lbz 3, 22(30)
  030f1d4  extsb 4, 3
  030f1d8  cmpwi 4, -1
  030f1dc  bt 2, 0x30f1e4
  030f1e0  stb 3, 32(29)
  030f1e4  lis 5, 161
  030f1e8  lwz 4, 12(30)
  030f1ec  lis 3, 101
  030f1f0  stw 4, 32(30)
  030f1f4  lhz 4, 178(31)
  030f1f8  addic 3, 3, 24188
  030f1fc  lhz 6, 166(31)
  030f200  lwz 7, 1808(5)
  030f204  extsh 5, 6
  030f208  extsh 4, 4
  030f20c  extsw 6, 7
  030f210  bl 0x5cd098
  030f214  nop
  030f218  li 3, 2
  030f21c  stb 3, 32(31)
  030f220  ori 3, 31, 0
  030f224  ori 4, 30, 0
  030f228  bl 0x30e980
  030f22c  b 0x30f574
  030f230  bt 6, 0x30f280
  030f234  lwz 3, 8(30)
  030f238  rlwinm 3, 3, 0, 30, 30
  030f23c  cmpwi 3, 0
  030f240  bf 2, 0x30f280
  030f244  lwz 3, 12(30)
  030f248  extsw 3, 3
  030f24c  bl 0x502730
  030f250  nop
  030f254  lwz 3, 32(30)
  030f258  fmr 31, 1
  030f25c  extsw 3, 3
  030f260  bl 0x502730
  030f264  nop
  030f268  lfs 2, 36(30)
  030f26c  fmuls 1, 2, 1
  030f270  fdivs 1, 1, 31
  030f274  bl 0x502758
  030f278  nop
  030f27c  stb 3, 35(29)
  030f280  lwz 3, 8(30)
  030f284  cmpwi 1, 29, 0
  030f288  rlwinm 3, 3, 0, 29, 29
  030f28c  cmpwi 3, 0
  030f290  crorc 2, 6, 2
  030f294  bt 2, 0x30f320
  030f298  lbz 3, 23(30)
  030f29c  extsb 3, 3
  030f2a0  cmpwi 3, -1
  030f2a4  bt 2, 0x30f320
  030f2a8  lbz 4, 32(29)
  030f2ac  cmpw 4, 3
  030f2b0  bf 2, 0x30f320
  030f2b4  lis 4, 161
  030f2b8  lhz 5, 178(31)
  030f2bc  lis 3, 101
  030f2c0  lhz 6, 166(31)
  030f2c4  addic 3, 3, 24220
  030f2c8  lwz 7, 1808(4)
  030f2cc  extsh 4, 5
  030f2d0  extsh 5, 6
  030f2d4  extsw 6, 7
  030f2d8  bl 0x5cd098
  030f2dc  nop
  030f2e0  lwz 3, 8(30)
  030f2e4  stw 26, 148(31)
  030f2e8  rlwinm 4, 3, 0, 22, 22
  030f2ec  cmpwi 4, 0
  030f2f0  bt 2, 0x30f318
  030f2f4  clrlwi 3, 3, 31
  030f2f8  cmpwi 3, 0
  030f2fc  bf 2, 0x30f30c
  030f300  ori 3, 29, 0
  030f304  bl 0xefb38
  030f308  nop
  030f30c  li 3, 5
  030f310  stb 3, 32(31)
  030f314  b 0x30f320
  030f318  li 3, 3
  030f31c  stb 3, 32(31)
  030f320  lwz 3, 8(30)
  030f324  rlwinm 3, 3, 0, 28, 28
  030f328  cmpwi 3, 0
  030f32c  bf 2, 0x30f3b8
  030f330  addic 3, 30, 32
  030f334  bl 0x4fff60
  030f338  nop
  030f33c  cmpwi 3, 0
  030f340  bt 2, 0x30f3b8
  030f344  lis 4, 161
  030f348  lhz 5, 178(31)
  030f34c  lis 3, 101
  030f350  lhz 6, 166(31)
  030f354  addic 3, 3, 24252
  030f358  lwz 7, 1808(4)
  030f35c  extsh 4, 5
  030f360  extsh 5, 6
  030f364  extsw 6, 7
  030f368  bl 0x5cd098
  030f36c  nop
  030f370  stw 26, 148(31)
  030f374  lwz 26, 8(30)
  030f378  rlwinm 3, 26, 0, 22, 22
  030f37c  cmpwi 3, 0
  030f380  bt 2, 0x30f3b0
  030f384  cmpwi 29, 0
  030f388  bt 2, 0x30f3a4
  030f38c  clrlwi 3, 26, 31
  030f390  cmpwi 3, 0
  030f394  bf 2, 0x30f3a4
  030f398  ori 3, 29, 0
  030f39c  bl 0xefb38
  030f3a0  nop
  030f3a4  li 3, 5
  030f3a8  stb 3, 32(31)
  030f3ac  b 0x30f3b8
  030f3b0  li 3, 3
  030f3b4  stb 3, 32(31)
  030f3b8  ori 3, 31, 0
  030f3bc  ori 4, 30, 0
  030f3c0  bl 0x30e980
  030f3c4  b 0x30f574
  030f3c8  cmpwi 27, 0
  030f3cc  cmpwi 1, 29, 0
  030f3d0  bt 2, 0x30f574
  030f3d4  bt 6, 0x30f3ec
  030f3d8  lbz 3, 24(30)
  030f3dc  extsb 4, 3
  030f3e0  cmpwi 4, -1
  030f3e4  bt 2, 0x30f3ec
  030f3e8  stb 3, 32(29)
  030f3ec  lwz 5, 12(30)
  030f3f0  lis 4, 161
  030f3f4  lis 3, 101
  030f3f8  stw 5, 32(30)
  030f3fc  lwz 5, 36(31)
  030f400  addic 3, 3, 24284
  030f404  lhz 6, 178(31)
  030f408  lhz 7, 166(31)
  030f40c  lwz 8, 1808(4)
  030f410  extsh 4, 6
  030f414  lwz 6, 16(5)
  030f418  extsh 5, 7
  030f41c  stw 6, 148(31)
  030f420  extsw 6, 8
  030f424  bl 0x5cd098
  030f428  nop
  030f42c  li 3, 4
  030f430  stb 3, 32(31)
  030f434  b 0x30f574
  030f438  cmpwi 29, 0
  030f43c  bt 2, 0x30f494
  030f440  lwz 3, 8(30)
  030f444  rlwinm 3, 3, 0, 30, 30
  030f448  cmpwi 3, 0
  030f44c  bf 2, 0x30f494
  030f450  lwz 3, 12(30)
  030f454  extsw 3, 3
  030f458  bl 0x502730
  030f45c  nop
  030f460  lwz 3, 12(30)
  030f464  lwz 4, 32(30)
  030f468  fmr 31, 1
  030f46c  subc 3, 3, 4
  030f470  extsw 3, 3
  030f474  bl 0x502730
  030f478  nop
  030f47c  lfs 2, 36(30)
  030f480  fmuls 1, 2, 1
  030f484  fdivs 1, 1, 31
  030f488  bl 0x502758
  030f48c  nop
  030f490  stb 3, 35(29)
  030f494  lwz 4, 8(30)
  030f498  cmpwi 1, 29, 0
  030f49c  rlwinm 3, 4, 0, 29, 29
  030f4a0  cmpwi 3, 0
  030f4a4  crorc 2, 6, 2
  030f4a8  bt 2, 0x30f500
  030f4ac  lbz 3, 25(30)
  030f4b0  extsb 3, 3
  030f4b4  cmpwi 3, -1
  030f4b8  bt 2, 0x30f500
  030f4bc  lbz 5, 32(29)
  030f4c0  cmpw 5, 3
  030f4c4  bf 2, 0x30f500
  030f4c8  lis 4, 161
  030f4cc  lhz 5, 178(31)
  030f4d0  lis 3, 101
  030f4d4  lhz 6, 166(31)
  030f4d8  addic 3, 3, 24316
  030f4dc  lwz 7, 1808(4)
  030f4e0  extsh 4, 5
  030f4e4  extsh 5, 6
  030f4e8  extsw 6, 7
  030f4ec  bl 0x5cd098
  030f4f0  nop
  030f4f4  li 3, 1
  030f4f8  stb 3, 32(31)
  030f4fc  lwz 4, 8(30)
  030f500  rlwinm 3, 4, 0, 28, 28
  030f504  cmpwi 3, 0
  030f508  bf 2, 0x30f554
  030f50c  addic 3, 30, 32
  030f510  bl 0x4fff60
  030f514  nop
  030f518  cmpwi 3, 0
  030f51c  bt 2, 0x30f554
  030f520  lis 4, 161
  030f524  lhz 5, 178(31)
  030f528  lis 3, 101
  030f52c  lhz 6, 166(31)
  030f530  addic 3, 3, 24356
  030f534  lwz 7, 1808(4)
  030f538  extsh 4, 5
  030f53c  extsh 5, 6
  030f540  extsw 6, 7
  030f544  bl 0x5cd098
  030f548  nop
  030f54c  li 3, 1
  030f550  stb 3, 32(31)
  030f554  ori 3, 31, 0
  030f558  ori 4, 30, 0
  030f55c  bl 0x30e980
  030f560  b 0x30f574
  030f564  ori 3, 31, 0
  030f568  bl 0xefb38
  030f56c  nop
  030f570  b 0x30f574
  030f574  ld 0, 192(1)
  030f578  mtlr 0
  030f57c  lfd 31, 168(1)
  030f580  ld 26, 120(1)
  030f584  ld 27, 128(1)
  030f588  ld 28, 136(1)
  030f58c  ld 29, 144(1)
  030f590  ld 30, 152(1)
  030f594  ld 31, 160(1)
  030f598  addi 1, 1, 176
  030f59c  blr
