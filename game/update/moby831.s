# game/update/moby831.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_0047ebac:   # 0x47ebac, 0x15c bytes
  047ebac  stdu 1, -128(1)
  047ebb0  mflr 0
  047ebb4  std 0, 144(1)
  047ebb8  std 31, 120(1)
  047ebbc  lbz 4, 32(3)
  047ebc0  lwz 31, 120(3)
  047ebc4  cmpwi 4, 1
  047ebc8  bf 2, 0x47ecf4
  047ebcc  lis 4, 165
  047ebd0  lbz 6, 176(3)
  047ebd4  addic 7, 4, 14692
  047ebd8  lhz 4, 178(3)
  047ebdc  addic 5, 6, 2
  047ebe0  cmpwi 6, 255
  047ebe4  extsh 4, 4
  047ebe8  stbx 5, 7, 4
  047ebec  bt 2, 0x47ec30
  047ebf0  lis 7, 162
  047ebf4  addic 7, 7, 704
  047ebf8  lbzx 7, 6, 7
  047ebfc  cmpwi 7, 255
  047ec00  bt 2, 0x47ec3c
  047ec04  lis 7, 151
  047ec08  lis 8, 161
  047ec0c  addic 8, 8, -13692
  047ec10  lwz 7, -25488(7)
  047ec14  addc 6, 6, 8
  047ec18  slwi 7, 7, 4
  047ec1c  clrldi 6, 6, 32
  047ec20  extsw 7, 7
  047ec24  lbzx 6, 6, 7
  047ec28  cmpwi 6, 255
  047ec2c  bf 2, 0x47ec3c
  047ec30  lis 6, 165
  047ec34  addic 6, 6, 17860
  047ec38  stbx 5, 6, 4
  047ec3c  ori 6, 3, 0
  047ec40  li 4, 2
  047ec44  lis 3, -32736
  047ec48  li 5, 1
  047ec4c  ori 7, 3, 32800
  047ec50  stb 4, 32(6)
  047ec54  li 3, 0
  047ec58  li 4, 0
  047ec5c  stb 5, 188(6)
  047ec60  stw 7, 144(6)
  047ec64  ori 5, 6, 0
  047ec68  bl 0x15d12c
  047ec6c  nop
  047ec70  lwz 3, 0(31)
  047ec74  cmpwi 3, -1
  047ec78  bt 2, 0x47ecf4
  047ec7c  lis 7, 165
  047ec80  slwi 4, 3, 2
  047ec84  addic 7, 7, 7136
  047ec88  extsw 5, 4
  047ec8c  li 8, 0
  047ec90  ori 4, 8, 0
  047ec94  lwzx 5, 7, 5
  047ec98  lwz 5, 0(5)
  047ec9c  cmpwi 5, 0
  047eca0  bf 1, 0x47ecf4
  047eca4  ori 6, 8, 0
  047eca8  slwi 5, 3, 2
  047ecac  lwz 9, 4(31)
  047ecb0  extsw 5, 5
  047ecb4  lwzx 5, 7, 5
  047ecb8  addc 5, 5, 6
  047ecbc  clrldi 5, 5, 32
  047ecc0  lwz 10, 28(5)
  047ecc4  cmpw 10, 9
  047ecc8  bf 2, 0x47ecd4
  047eccc  stw 4, 28(5)
  047ecd0  lwz 3, 0(31)
  047ecd4  slwi 5, 3, 2
  047ecd8  addic 8, 8, 1
  047ecdc  extsw 5, 5
  047ece0  addic 6, 6, 16
  047ece4  lwzx 5, 7, 5
  047ece8  lwz 5, 0(5)
  047ecec  cmpw 8, 5
  047ecf0  bt 0, 0x47eca8
  047ecf4  ld 0, 144(1)
  047ecf8  mtlr 0
  047ecfc  ld 31, 120(1)
  047ed00  addi 1, 1, 128
  047ed04  blr

M831_0047ed08:   # 0x47ed08, 0x14 bytes
  047ed08  lis 3, 135
  047ed0c  lis 4, 1
  047ed10  addic 3, 3, 31828
  047ed14  stw 4, 72(3)
  047ed18  blr

M831_0047ed20:   # 0x47ed20, 0xbc bytes
  047ed20  lis 4, 165
  047ed24  lis 6, 164
  047ed28  addic 7, 4, -28284
  047ed2c  lbz 4, 33(3)
  047ed30  lis 5, 135
  047ed34  lwz 10, 120(3)
  047ed38  slwi 8, 4, 2
  047ed3c  lwz 4, -28512(6)
  047ed40  addic 5, 5, 32008
  047ed44  lwzx 9, 7, 8
  047ed48  lhz 8, 0(9)
  047ed4c  rlwinm 8, 8, 8, 9, 23
  047ed50  addc 7, 4, 8
  047ed54  clrldi 7, 7, 32
  047ed58  lhz 11, 166(7)
  047ed5c  cmpwi 11, 831
  047ed60  bf 2, 0x47edc4
  047ed64  lwz 11, 12(10)
  047ed68  lwz 4, 120(7)
  047ed6c  cmpwi 11, 0
  047ed70  bf 2, 0x47ed8c
  047ed74  lwz 11, 4(4)
  047ed78  lwz 12, 4(10)
  047ed7c  lfs 2, 4(4)
  047ed80  cmpw 11, 12
  047ed84  lfs 1, 4(10)
  047ed88  bf 2, 0x47ed94
  047ed8c  lfs 2, 24(3)
  047ed90  b 0x47eda0
  047ed94  lfs 3, 24(3)
  047ed98  fsubs 1, 3, 1
  047ed9c  fadds 2, 2, 1
  047eda0  stfs 2, 24(7)
  047eda4  lwz 11, 20(4)
  047eda8  mulli 7, 11, 4512
  047edac  lwz 4, -28512(6)
  047edb0  extsw 7, 7
  047edb4  addc 8, 4, 8
  047edb8  clrldi 8, 8, 32
  047edbc  lfs 1, 24(8)
  047edc0  stfsx 1, 5, 7
  047edc4  lhz 7, 0(9)
  047edc8  addic 9, 9, 2
  047edcc  extsh 7, 7
  047edd0  cmpwi 7, 0
  047edd4  bf 0, 0x47ed48
  047edd8  blr

M831_0047ede8:   # 0x47ede8, 0x144 bytes
  047ede8  mulli 7, 3, 4512
  047edec  lis 4, 72
  047edf0  lis 8, 135
  047edf4  addi 4, 4, -4644
  047edf8  addic 8, 8, 32000
  047edfc  extsw 7, 7
  047ee00  ori 6, 8, 0
  047ee04  li 9, 0
  047ee08  lfs 2, 0(4)
  047ee0c  addic 5, 6, 4
  047ee10  lfs 1, 4(4)
  047ee14  addc 4, 6, 7
  047ee18  cmpw 3, 9
  047ee1c  bt 2, 0x47ef14
  047ee20  lfsx 4, 8, 7
  047ee24  lfs 3, 0(6)
  047ee28  fsubs 4, 4, 3
  047ee2c  lfs 3, 4(4)
  047ee30  lfs 5, 0(5)
  047ee34  fsubs 3, 3, 5
  047ee38  fabs 5, 4
  047ee3c  fcmpu 0, 5, 2
  047ee40  cror 6, 1, 2
  047ee44  bt 6, 0x47ee7c
  047ee48  fsubs 4, 3, 1
  047ee4c  fabs 4, 4
  047ee50  fcmpu 0, 4, 2
  047ee54  cror 6, 1, 2
  047ee58  bt 6, 0x47ee60
  047ee5c  stb 9, 12(4)
  047ee60  fadds 3, 3, 1
  047ee64  fabs 3, 3
  047ee68  fcmpu 0, 3, 2
  047ee6c  cror 6, 1, 2
  047ee70  bt 6, 0x47ef14
  047ee74  stb 9, 14(4)
  047ee78  b 0x47ef14
  047ee7c  fabs 3, 3
  047ee80  fcmpu 0, 3, 2
  047ee84  cror 6, 1, 2
  047ee88  bt 6, 0x47eec0
  047ee8c  fsubs 3, 4, 1
  047ee90  fabs 3, 3
  047ee94  fcmpu 0, 3, 2
  047ee98  cror 6, 1, 2
  047ee9c  bt 6, 0x47eea4
  047eea0  stb 9, 13(4)
  047eea4  fadds 3, 4, 1
  047eea8  fabs 3, 3
  047eeac  fcmpu 0, 3, 2
  047eeb0  cror 6, 1, 2
  047eeb4  bt 6, 0x47ef14
  047eeb8  stb 9, 15(4)
  047eebc  b 0x47ef14
  047eec0  fsubs 3, 4, 1
  047eec4  fabs 3, 3
  047eec8  fcmpu 6, 3, 2
  047eecc  bf 24, 0x47eef4
  047eed0  bf 24, 0x47eed8
  047eed4  stb 9, 17(4)
  047eed8  fadds 3, 4, 1
  047eedc  fabs 3, 3
  047eee0  fcmpu 0, 3, 2
  047eee4  cror 6, 1, 2
  047eee8  bt 6, 0x47ef14
  047eeec  stb 9, 19(4)
  047eef0  b 0x47ef14
  047eef4  fadds 3, 4, 1
  047eef8  fabs 3, 3
  047eefc  fcmpu 1, 3, 2
  047ef00  bf 4, 0x47ef14
  047ef04  bf 24, 0x47ef0c
  047ef08  stb 9, 16(4)
  047ef0c  bf 4, 0x47ef14
  047ef10  stb 9, 18(4)
  047ef14  addic 9, 9, 1
  047ef18  addic 6, 6, 4512
  047ef1c  cmpwi 9, 48
  047ef20  addic 5, 5, 4512
  047ef24  bt 0, 0x47ee18
  047ef28  blr

UpdateMoby_831:   # 0x47efa0, 0x100c bytes
  047efa0  stdu 1, -240(1)
  047efa4  mflr 0
  047efa8  std 0, 256(1)
  047efac  stfd 30, 224(1)
  047efb0  stfd 31, 232(1)
  047efb4  std 31, 216(1)
  047efb8  lis 4, 161
  047efbc  ori 31, 3, 0
  047efc0  std 30, 208(1)
  047efc4  lwz 4, 1800(4)
  047efc8  lwz 30, 120(3)
  047efcc  std 29, 200(1)
  047efd0  std 28, 192(1)
  047efd4  std 27, 184(1)
  047efd8  std 26, 176(1)
  047efdc  std 25, 168(1)
  047efe0  cmpwi 4, 2
  047efe4  bt 2, 0x47ff78
  047efe8  lbz 3, 32(31)
  047efec  cmpwi 3, 8
  047eff0  cmpwi 1, 3, 7
  047eff4  cmpwi 6, 3, 3
  047eff8  cmpwi 7, 3, 2
  047effc  bt 2, 0x47fc14
  047f000  bt 6, 0x47fb74
  047f004  bt 26, 0x47f980
  047f008  bt 30, 0x47f66c
  047f00c  cmpwi 3, 1
  047f010  bt 2, 0x47f7e0
  047f014  cmpwi 3, 0
  047f018  bf 2, 0x47fe00
  047f01c  lwz 3, 20(30)
  047f020  cmpwi 3, 0
  047f024  bf 2, 0x47f418
  047f028  lis 3, 270
  047f02c  li 5, 0
  047f030  lis 4, 270
  047f034  lis 28, 135
  047f038  lis 6, 270
  047f03c  stw 5, -25336(3)
  047f040  addic 28, 28, 32000
  047f044  lfs 1, 24(31)
  047f048  ori 3, 28, 0
  047f04c  stfs 1, -25332(4)
  047f050  li 4, 48
  047f054  stw 5, -25328(6)
  047f058  bl 0x17b230
  047f05c  nop
  047f060  lis 3, 72
  047f064  addi 27, 3, -4308
  047f068  lfs 1, 0(27)
  047f06c  bl 0x17b780
  047f070  nop
  047f074  lis 3, 162
  047f078  lis 5, 116
  047f07c  addic 3, 3, -9472
  047f080  lis 4, 16768
  047f084  addic 29, 5, -22016
  047f088  lis 8, 16230
  047f08c  lis 9, 15820
  047f090  lwz 6, 16(3)
  047f094  lwz 7, 20(3)
  047f098  ori 8, 8, 26214
  047f09c  lfs 1, 16(3)
  047f0a0  lfs 2, 20(3)
  047f0a4  fabs 3, 1
  047f0a8  lis 3, -16128
  047f0ac  fabs 6, 2
  047f0b0  stw 4, -22016(5)
  047f0b4  lis 5, 16256
  047f0b8  stw 4, 4(29)
  047f0bc  ori 4, 9, 52429
  047f0c0  stw 3, 8(29)
  047f0c4  stw 3, 12(29)
  047f0c8  stw 5, 16(29)
  047f0cc  stw 5, 20(29)
  047f0d0  stw 8, 24(29)
  047f0d4  stw 4, 32(29)
  047f0d8  rlwinm 3, 7, 3, 29, 29
  047f0dc  fsubs 1, 3, 6
  047f0e0  lis 4, 115
  047f0e4  addic 4, 4, 22784
  047f0e8  stfs 1, 112(1)
  047f0ec  lfs 4, 4(27)
  047f0f0  lwz 5, 112(1)
  047f0f4  lfs 1, 112(1)
  047f0f8  rlwimi 3, 5, 2, 30, 30
  047f0fc  fsub 5, 1, 4
  047f100  ori 5, 4, 0
  047f104  fsub 7, 1, 4
  047f108  rlwimi 3, 6, 4, 28, 28
  047f10c  rlwimi 5, 3, 2, 26, 28
  047f110  slwi 3, 3, 2
  047f114  clrldi 5, 5, 32
  047f118  lfsx 1, 4, 3
  047f11c  fsel 5, 5, 3, 6
  047f120  lfs 2, 4(5)
  047f124  fsel 3, 7, 6, 3
  047f128  fcmpu 0, 5, 4
  047f12c  bt 1, 0x47f134
  047f130  b 0x47f254
  047f134  fsubs 6, 3, 5
  047f138  fadds 3, 3, 5
  047f13c  addic 3, 1, 16
  047f140  li 6, 2
  047f144  addic 4, 3, 100
  047f148  addic 5, 3, 116
  047f14c  mtctr 6
  047f150  fdivs 3, 6, 3
  047f154  fmuls 5, 3, 3
  047f158  stfs 3, 128(1)
  047f15c  stfs 3, 120(1)
  047f160  stfs 3, 124(1)
  047f164  stfs 3, 116(1)
  047f168  lfs 7, 128(1)
  047f16c  lfs 8, 120(1)
  047f170  lfs 9, 124(1)
  047f174  fmuls 6, 5, 5
  047f178  fmuls 8, 8, 5
  047f17c  fmuls 7, 7, 6
  047f180  fmuls 3, 6, 6
  047f184  fmuls 6, 9, 6
  047f188  stfs 8, 120(1)
  047f18c  fmuls 5, 7, 5
  047f190  stfs 6, 124(1)
  047f194  stfs 5, 128(1)
  047f198  lfs 5, 100(3)
  047f19c  fmuls 5, 5, 3
  047f1a0  stfs 5, 116(3)
  047f1a4  lfs 5, 4(4)
  047f1a8  addic 3, 3, 8
  047f1ac  addic 4, 4, 8
  047f1b0  fmuls 5, 5, 3
  047f1b4  stfs 5, 4(5)
  047f1b8  addic 5, 5, 8
  047f1bc  bdnz 0x47f198
  047f1c0  li 5, 4
  047f1c4  ori 3, 1, 0
  047f1c8  mtctr 5
  047f1cc  lis 4, 115
  047f1d0  addic 5, 3, 116
  047f1d4  addic 4, 4, 22752
  047f1d8  ori 7, 5, 0
  047f1dc  lfs 3, 116(3)
  047f1e0  lfs 5, 0(4)
  047f1e4  fmuls 3, 3, 5
  047f1e8  lfs 5, 4(4)
  047f1ec  addic 4, 4, 8
  047f1f0  stfs 3, 116(3)
  047f1f4  lfs 3, 4(5)
  047f1f8  addic 3, 3, 8
  047f1fc  fmuls 3, 3, 5
  047f200  stfs 3, 4(5)
  047f204  addic 5, 5, 8
  047f208  bdnz 0x47f1dc
  047f20c  ori 3, 1, 0
  047f210  mtctr 6
  047f214  lfs 3, 116(3)
  047f218  fadds 3, 4, 3
  047f21c  lfs 4, 4(7)
  047f220  addic 3, 3, 16
  047f224  lfs 5, 8(7)
  047f228  lfs 6, 12(7)
  047f22c  addic 7, 7, 16
  047f230  fadds 3, 3, 4
  047f234  fadds 4, 3, 5
  047f238  fadds 4, 4, 6
  047f23c  bdnz 0x47f214
  047f240  lis 3, 72
  047f244  addi 3, 3, -4308
  047f248  lfs 3, 8(3)
  047f24c  fadds 4, 4, 3
  047f250  fmadds 4, 4, 1, 2
  047f254  lis 3, 72
  047f258  addi 3, 3, -4308
  047f25c  lfs 1, 12(3)
  047f260  lfs 2, 16(3)
  047f264  fadds 1, 4, 1
  047f268  lfs 3, 20(3)
  047f26c  fsubs 5, 2, 4
  047f270  li 4, 41
  047f274  li 5, 42
  047f278  li 6, 28
  047f27c  li 7, 64
  047f280  lis 25, 270
  047f284  fsubs 2, 2, 1
  047f288  fsub 7, 4, 5
  047f28c  fsubs 6, 3, 1
  047f290  fsubs 3, 3, 4
  047f294  addic 25, 25, -26112
  047f298  lis 8, 116
  047f29c  fsub 8, 1, 2
  047f2a0  fsel 4, 7, 5, 4
  047f2a4  lis 27, 139
  047f2a8  ori 26, 28, 0
  047f2ac  addic 27, 27, -13568
  047f2b0  fsel 1, 8, 2, 1
  047f2b4  fsub 5, 3, 4
  047f2b8  lfs 2, 24(3)
  047f2bc  fsub 7, 6, 1
  047f2c0  fsel 3, 5, 3, 4
  047f2c4  lfs 4, 28(3)
  047f2c8  lfs 5, 32(3)
  047f2cc  lfs 8, 36(3)
  047f2d0  lfs 11, 40(3)
  047f2d4  lis 3, -16621
  047f2d8  fsel 1, 7, 6, 1
  047f2dc  fmuls 6, 3, 3
  047f2e0  ori 3, 3, 52534
  047f2e4  stw 3, 56(29)
  047f2e8  lis 3, 230
  047f2ec  stw 4, 40(29)
  047f2f0  fmuls 7, 1, 1
  047f2f4  fmuls 9, 6, 3
  047f2f8  stw 5, 44(29)
  047f2fc  stb 6, 60(29)
  047f300  lis 4, 230
  047f304  stb 7, 61(29)
  047f308  lis 5, 230
  047f30c  lis 6, 116
  047f310  lis 7, 116
  047f314  fmuls 10, 7, 1
  047f318  fmuls 12, 6, 9
  047f31c  fmadds 3, 9, 2, 3
  047f320  fmuls 9, 7, 10
  047f324  fmadds 1, 10, 2, 1
  047f328  fmuls 2, 6, 12
  047f32c  fmadds 3, 12, 4, 3
  047f330  fmr 10, 11
  047f334  fmuls 11, 7, 9
  047f338  fmadds 1, 9, 4, 1
  047f33c  fmuls 4, 6, 2
  047f340  fmadds 2, 2, 5, 3
  047f344  fmuls 3, 7, 11
  047f348  fmadds 1, 11, 5, 1
  047f34c  fmadds 2, 4, 8, 2
  047f350  fmadds 1, 3, 8, 1
  047f354  fmuls 2, 2, 10
  047f358  fmuls 1, 1, 10
  047f35c  stfs 2, 52(29)
  047f360  stw 28, -21888(3)
  047f364  li 3, 48
  047f368  stw 25, -21884(4)
  047f36c  lis 4, 116
  047f370  stfs 1, 48(29)
  047f374  stw 3, -21880(5)
  047f378  li 29, 0
  047f37c  li 3, 11
  047f380  lis 5, 18080
  047f384  stb 29, -22172(4)
  047f388  stb 3, -22171(6)
  047f38c  li 4, 62
  047f390  lis 3, 230
  047f394  lis 6, 116
  047f398  stb 4, -22170(7)
  047f39c  lis 4, 17279
  047f3a0  lis 7, 116
  047f3a4  stw 29, -21856(3)
  047f3a8  lis 3, 16848
  047f3ac  stw 5, -22168(6)
  047f3b0  stw 4, -22164(8)
  047f3b4  stw 3, -22160(7)
  047f3b8  ori 3, 26, 0
  047f3bc  ori 4, 25, 0
  047f3c0  bl 0x17b4b0
  047f3c4  nop
  047f3c8  lwz 3, 20(30)
  047f3cc  mulli 4, 3, 4512
  047f3d0  slwi 3, 3, 1
  047f3d4  extsw 4, 4
  047f3d8  extsw 3, 3
  047f3dc  addc 4, 4, 28
  047f3e0  addic 29, 29, 1
  047f3e4  addic 26, 26, 4512
  047f3e8  cmpwi 29, 48
  047f3ec  lhzx 3, 27, 3
  047f3f0  addic 25, 25, 16
  047f3f4  sth 3, 30(4)
  047f3f8  bt 0, 0x47f3b8
  047f3fc  li 29, 0
  047f400  ori 3, 29, 0
  047f404  bl 0x47ede8
  047f408  addic 29, 29, 1
  047f40c  extsw 29, 29
  047f410  cmpwi 29, 48
  047f414  bt 0, 0x47f400
  047f418  li 3, 0
  047f41c  lhz 4, 52(31)
  047f420  lwz 5, 12(30)
  047f424  cmpwi 5, 0
  047f428  sth 3, 50(31)
  047f42c  ori 3, 4, 1
  047f430  sth 3, 52(31)
  047f434  bt 2, 0x47f5e8
  047f438  lwz 3, 16(30)
  047f43c  cmpwi 3, -1
  047f440  bf 1, 0x47f50c
  047f444  li 3, 255
  047f448  lis 29, 270
  047f44c  stb 3, 48(31)
  047f450  lwz 29, -25340(29)
  047f454  cmpwi 29, 2
  047f458  bt 0, 0x47f50c
  047f45c  addic 3, 29, -1
  047f460  lis 4, 72
  047f464  extsw 3, 3
  047f468  lis 28, 139
  047f46c  lis 27, 139
  047f470  std 3, 152(1)
  047f474  addi 3, 4, -4308
  047f478  lis 26, 139
  047f47c  lis 25, 139
  047f480  li 29, 0
  047f484  lfs 1, 44(3)
  047f488  lfs 31, 0(3)
  047f48c  lfs 30, 48(3)
  047f490  lfd 2, 152(1)
  047f494  addic 28, 28, -13424
  047f498  fcfid 2, 2
  047f49c  addic 27, 27, -13472
  047f4a0  addic 26, 26, -13400
  047f4a4  addic 25, 25, -13448
  047f4a8  frsp 2, 2
  047f4ac  fmadds 1, 2, 1, 31
  047f4b0  fsub 2, 30, 1
  047f4b4  fsel 30, 2, 1, 30
  047f4b8  fdivs 31, 31, 30
  047f4bc  lwz 3, 0(28)
  047f4c0  extsw 3, 3
  047f4c4  std 3, 152(1)
  047f4c8  lfd 1, 152(1)
  047f4cc  fcfid 1, 1
  047f4d0  frsp 1, 1
  047f4d4  fmuls 1, 1, 30
  047f4d8  bl 0x502758
  047f4dc  nop
  047f4e0  lfs 1, 0(26)
  047f4e4  addic 29, 29, 1
  047f4e8  stw 3, 0(27)
  047f4ec  addic 28, 28, 4
  047f4f0  fmuls 1, 1, 31
  047f4f4  cmpwi 29, 6
  047f4f8  addic 27, 27, 4
  047f4fc  addic 26, 26, 4
  047f500  stfs 1, 0(25)
  047f504  addic 25, 25, 4
  047f508  bt 0, 0x47f4bc
  047f50c  lis 3, 151
  047f510  lis 4, 161
  047f514  lbz 5, 176(31)
  047f518  addic 4, 4, -13692
  047f51c  lwz 3, -25488(3)
  047f520  addc 4, 5, 4
  047f524  slwi 3, 3, 4
  047f528  clrldi 4, 4, 32
  047f52c  extsw 3, 3
  047f530  lbzx 3, 4, 3
  047f534  cmpwi 3, 255
  047f538  bf 2, 0x47f550
  047f53c  li 3, 7
  047f540  lis 4, 16944
  047f544  stb 3, 32(31)
  047f548  stw 4, 24(31)
  047f54c  b 0x47f654
  047f550  lis 3, 72
  047f554  vspltisw 2, -1
  047f558  li 4, 3
  047f55c  addi 3, 3, -4308
  047f560  li 6, 52
  047f564  lis 5, 114
  047f568  stb 4, 32(31)
  047f56c  li 4, -3056
  047f570  vslw 2, 2, 2
  047f574  lvlx 3, 6, 3
  047f578  li 3, 24
  047f57c  vspltw 3, 3, 0
  047f580  lvlx 4, 4, 5
  047f584  lwz 4, 4(30)
  047f588  vmaddfp 2, 4, 3, 2
  047f58c  srawi 5, 4, 31
  047f590  srwi 6, 5, 1
  047f594  xor 4, 6, 4
  047f598  subc 4, 4, 5
  047f59c  vctsxs 2, 2, 0
  047f5a0  vspltw 2, 2, 0
  047f5a4  stvewx 2, 3, 30
  047f5a8  lwz 3, 24(31)
  047f5ac  srawi 5, 3, 31
  047f5b0  srwi 6, 5, 1
  047f5b4  xor 3, 6, 3
  047f5b8  subc 3, 3, 5
  047f5bc  cmpw 3, 4
  047f5c0  bf 0, 0x47f654
  047f5c4  lwz 5, 20(30)
  047f5c8  mulli 5, 5, 4512
  047f5cc  lis 3, 135
  047f5d0  extsw 5, 5
  047f5d4  addic 3, 3, 32000
  047f5d8  li 4, 0
  047f5dc  addc 3, 3, 5
  047f5e0  sth 4, 30(3)
  047f5e4  b 0x47f654
  047f5e8  lwz 3, 16(30)
  047f5ec  cmpwi 3, 0
  047f5f0  bt 0, 0x47f608
  047f5f4  li 3, 2
  047f5f8  stb 3, 32(31)
  047f5fc  lfs 1, 4(30)
  047f600  stfs 1, 24(31)
  047f604  b 0x47f654
  047f608  lis 3, 72
  047f60c  lfs 1, 24(31)
  047f610  addi 3, 3, -4308
  047f614  stfs 1, 4(30)
  047f618  lfs 2, 56(3)
  047f61c  lwz 3, 8(30)
  047f620  fadds 1, 1, 2
  047f624  cmpwi 3, 0
  047f628  stfs 1, 0(30)
  047f62c  bt 2, 0x47f644
  047f630  li 3, 1
  047f634  stb 3, 32(31)
  047f638  lfs 1, 0(30)
  047f63c  stfs 1, 24(31)
  047f640  b 0x47f654
  047f644  li 3, 2
  047f648  stb 3, 32(31)
  047f64c  lfs 1, 4(30)
  047f650  stfs 1, 24(31)
  047f654  lwz 3, 20(30)
  047f658  cmpwi 3, 47
  047f65c  bf 2, 0x47fe00
  047f660  li 3, 0
  047f664  stw 3, 148(31)
  047f668  b 0x47fe00
  047f66c  lbz 3, 188(31)
  047f670  rlwinm 3, 3, 0, 29, 29
  047f674  cmpwi 3, 0
  047f678  bt 2, 0x47f698
  047f67c  li 3, 1
  047f680  li 4, 1
  047f684  stw 3, 36(30)
  047f688  lbz 3, 33(31)
  047f68c  bl 0x1042ec
  047f690  nop
  047f694  b 0x47f6e4
  047f698  lwz 3, 16(30)
  047f69c  cmpwi 3, -1
  047f6a0  bf 1, 0x47f6e4
  047f6a4  lis 3, 151
  047f6a8  lis 4, 161
  047f6ac  lbz 5, 176(31)
  047f6b0  addic 4, 4, -13692
  047f6b4  lwz 3, -25488(3)
  047f6b8  addc 4, 5, 4
  047f6bc  slwi 3, 3, 4
  047f6c0  clrldi 4, 4, 32
  047f6c4  extsw 3, 3
  047f6c8  lbzx 3, 4, 3
  047f6cc  cmpwi 3, 255
  047f6d0  bf 2, 0x47f6e4
  047f6d4  li 3, 1
  047f6d8  stb 3, 32(31)
  047f6dc  lfs 1, 0(30)
  047f6e0  stfs 1, 24(31)
  047f6e4  lwz 3, 36(30)
  047f6e8  cmpwi 3, 0
  047f6ec  bt 2, 0x47f738
  047f6f0  lis 3, 139
  047f6f4  lis 4, 114
  047f6f8  lis 6, 139
  047f6fc  lis 7, 114
  047f700  addic 5, 30, 32
  047f704  lfs 2, -13372(3)
  047f708  lfs 1, -3048(4)
  047f70c  addic 3, 31, 24
  047f710  fmuls 2, 2, 1
  047f714  lfs 1, 4(30)
  047f718  lfs 4, -13368(6)
  047f71c  lfs 3, -3052(7)
  047f720  fmuls 4, 4, 3
  047f724  fmr 3, 2
  047f728  bl 0x109c30
  047f72c  nop
  047f730  ori 3, 31, 0
  047f734  bl 0x47ed20
  047f738  li 4, 1
  047f73c  li 3, 200
  047f740  stb 4, 188(31)
  047f744  bl 0xfc620
  047f748  nop
  047f74c  cmpwi 3, 0
  047f750  bf 2, 0x47fe00
  047f754  lis 3, 72
  047f758  addi 29, 3, -4308
  047f75c  lfs 31, 60(29)
  047f760  lfs 30, 64(29)
  047f764  fmr 1, 31
  047f768  fmr 2, 30
  047f76c  bl 0xfcbe8
  047f770  nop
  047f774  lwz 3, 20(30)
  047f778  lis 4, 135
  047f77c  mulli 3, 3, 4512
  047f780  addic 28, 4, 32000
  047f784  extsw 3, 3
  047f788  fmr 2, 30
  047f78c  lfsx 3, 28, 3
  047f790  fadds 30, 3, 1
  047f794  fmr 1, 31
  047f798  bl 0xfcbe8
  047f79c  nop
  047f7a0  lwz 3, 20(30)
  047f7a4  mulli 3, 3, 4512
  047f7a8  lfs 3, 0(29)
  047f7ac  extsw 5, 3
  047f7b0  lfs 4, 68(29)
  047f7b4  addc 3, 28, 3
  047f7b8  addc 5, 28, 5
  047f7bc  li 4, 1
  047f7c0  li 9, 1
  047f7c4  clrldi 3, 3, 32
  047f7c8  lfs 2, 4(5)
  047f7cc  fadds 2, 2, 1
  047f7d0  fmr 1, 30
  047f7d4  bl 0x17bd90
  047f7d8  nop
  047f7dc  b 0x47fe00
  047f7e0  lbz 3, 188(31)
  047f7e4  rlwinm 3, 3, 0, 28, 28
  047f7e8  cmpwi 3, 0
  047f7ec  bt 2, 0x47f80c
  047f7f0  li 3, 1
  047f7f4  li 4, 2
  047f7f8  stw 3, 36(30)
  047f7fc  lbz 3, 33(31)
  047f800  bl 0x1042ec
  047f804  nop
  047f808  b 0x47f814
  047f80c  li 3, 2
  047f810  stb 3, 188(31)
  047f814  lwz 3, 36(30)
  047f818  cmpwi 3, 0
  047f81c  bt 2, 0x47f8e0
  047f820  lis 4, 139
  047f824  lis 6, 114
  047f828  lis 7, 139
  047f82c  lis 8, 114
  047f830  addic 3, 31, 24
  047f834  lfs 2, -13372(4)
  047f838  addic 5, 30, 32
  047f83c  lfs 1, -3048(6)
  047f840  fmuls 2, 2, 1
  047f844  lfs 1, 0(30)
  047f848  lfs 4, -13368(7)
  047f84c  lfs 5, -3052(8)
  047f850  fmuls 4, 4, 5
  047f854  fmr 3, 2
  047f858  bl 0x109c30
  047f85c  nop
  047f860  lwz 3, 24(31)
  047f864  lfs 1, 24(31)
  047f868  lis 4, 72
  047f86c  lfs 2, 0(30)
  047f870  addi 4, 4, -4308
  047f874  fsubs 2, 1, 2
  047f878  lfs 3, 72(4)
  047f87c  srawi 4, 3, 31
  047f880  srwi 5, 4, 1
  047f884  xor 3, 5, 3
  047f888  fabs 2, 2
  047f88c  subc 4, 3, 4
  047f890  fcmpu 0, 2, 3
  047f894  cror 6, 0, 2
  047f898  bt 6, 0x47f8d8
  047f89c  lis 3, 151
  047f8a0  addic 3, 3, -25376
  047f8a4  lwz 5, 8332(3)
  047f8a8  cmpwi 5, 17
  047f8ac  cmpwi 1, 5, 18
  047f8b0  bt 2, 0x47f8b8
  047f8b4  bf 6, 0x47f8d8
  047f8b8  lwz 5, 752(3)
  047f8bc  srawi 6, 5, 31
  047f8c0  srwi 7, 6, 1
  047f8c4  xor 5, 7, 5
  047f8c8  subc 5, 5, 6
  047f8cc  cmpw 4, 5
  047f8d0  bf 1, 0x47f8d8
  047f8d4  stfs 1, 752(3)
  047f8d8  ori 3, 31, 0
  047f8dc  bl 0x47ed20
  047f8e0  li 3, 200
  047f8e4  bl 0xfc620
  047f8e8  nop
  047f8ec  cmpwi 3, 0
  047f8f0  bf 2, 0x47fe00
  047f8f4  lis 3, 72
  047f8f8  addi 29, 3, -4308
  047f8fc  lfs 31, 60(29)
  047f900  lfs 30, 64(29)
  047f904  fmr 1, 31
  047f908  fmr 2, 30
  047f90c  bl 0xfcbe8
  047f910  nop
  047f914  lwz 3, 20(30)
  047f918  mulli 3, 3, 4512
  047f91c  lis 4, 135
  047f920  extsw 3, 3
  047f924  fmr 2, 30
  047f928  addic 28, 4, 32000
  047f92c  lfsx 3, 28, 3
  047f930  fadds 30, 3, 1
  047f934  fmr 1, 31
  047f938  bl 0xfcbe8
  047f93c  nop
  047f940  lwz 3, 20(30)
  047f944  li 9, 1
  047f948  mulli 3, 3, 4512
  047f94c  lfs 3, 0(29)
  047f950  extsw 4, 3
  047f954  lfs 4, 68(29)
  047f958  addc 3, 28, 3
  047f95c  addc 5, 28, 4
  047f960  li 4, 1
  047f964  clrldi 3, 3, 32
  047f968  lfs 2, 4(5)
  047f96c  fadds 2, 2, 1
  047f970  fmr 1, 30
  047f974  bl 0x17bd90
  047f978  nop
  047f97c  b 0x47fe00
  047f980  lis 4, 151
  047f984  lfs 1, 20(31)
  047f988  lfs 2, 16(31)
  047f98c  addic 4, 4, -25376
  047f990  lis 3, 72
  047f994  lfs 3, 132(4)
  047f998  lfs 4, 128(4)
  047f99c  fsubs 1, 1, 3
  047f9a0  fsubs 2, 2, 4
  047f9a4  addi 3, 3, -4308
  047f9a8  fmuls 1, 1, 1
  047f9ac  fmadds 1, 2, 2, 1
  047f9b0  lfs 2, 76(3)
  047f9b4  fsqrts 1, 1
  047f9b8  fcmpu 0, 1, 2
  047f9bc  cror 6, 1, 2
  047f9c0  bt 6, 0x47fa24
  047f9c4  lwz 3, 136(4)
  047f9c8  lwz 5, 24(31)
  047f9cc  srawi 7, 3, 31
  047f9d0  srawi 6, 5, 31
  047f9d4  lfs 2, 24(31)
  047f9d8  srwi 9, 7, 1
  047f9dc  srwi 8, 6, 1
  047f9e0  xor 5, 8, 5
  047f9e4  xor 8, 9, 3
  047f9e8  subc 3, 5, 6
  047f9ec  subc 5, 8, 7
  047f9f0  cmpw 5, 3
  047f9f4  bf 0, 0x47fa24
  047f9f8  lwz 5, 8332(4)
  047f9fc  cmpwi 5, 17
  047fa00  bf 2, 0x47fa24
  047fa04  lwz 5, 752(4)
  047fa08  srawi 6, 5, 31
  047fa0c  srwi 7, 6, 1
  047fa10  xor 5, 7, 5
  047fa14  subc 5, 5, 6
  047fa18  cmpw 5, 3
  047fa1c  bf 0, 0x47fa24
  047fa20  stfs 2, 752(4)
  047fa24  lwz 3, 16(30)
  047fa28  cmpwi 3, -1
  047fa2c  bf 1, 0x47fad4
  047fa30  lis 3, 72
  047fa34  addi 3, 3, -4308
  047fa38  lfs 2, 80(3)
  047fa3c  fcmpu 0, 1, 2
  047fa40  cror 6, 1, 2
  047fa44  bt 6, 0x47fad4
  047fa48  lwz 3, 764(4)
  047fa4c  cmpwi 3, 0
  047fa50  bt 2, 0x47fad4
  047fa54  lhz 4, 782(4)
  047fa58  cmpwi 4, 0
  047fa5c  bf 2, 0x47fad4
  047fa60  lhz 3, 166(3)
  047fa64  cmpwi 3, 830
  047fa68  bf 2, 0x47fad4
  047fa6c  li 3, 0
  047fa70  li 4, 8
  047fa74  vspltisw 4, -1
  047fa78  lis 5, 139
  047fa7c  li 6, -13472
  047fa80  stw 3, 28(30)
  047fa84  lis 8, 270
  047fa88  stb 4, 32(31)
  047fa8c  li 7, 84
  047fa90  lis 4, 72
  047fa94  vslw 4, 4, 4
  047fa98  lvlx 2, 6, 5
  047fa9c  addi 4, 4, -4308
  047faa0  stw 3, -25336(8)
  047faa4  vcfsx 2, 2, 0
  047faa8  lis 3, 114
  047faac  lvlx 3, 7, 4
  047fab0  li 4, -3056
  047fab4  vspltw 3, 3, 0
  047fab8  vaddfp 2, 2, 3
  047fabc  lvlx 3, 4, 3
  047fac0  li 3, 24
  047fac4  vmaddfp 2, 3, 2, 4
  047fac8  vctsxs 2, 2, 0
  047facc  vspltw 2, 2, 0
  047fad0  stvewx 2, 3, 30
  047fad4  li 3, 50
  047fad8  bl 0xfc620
  047fadc  nop
  047fae0  cmpwi 3, 0
  047fae4  bf 2, 0x47fe00
  047fae8  lis 3, 72
  047faec  addi 29, 3, -4308
  047faf0  lfs 31, 60(29)
  047faf4  lfs 30, 64(29)
  047faf8  fmr 1, 31
  047fafc  fmr 2, 30
  047fb00  bl 0xfcbe8
  047fb04  nop
  047fb08  lwz 3, 20(30)
  047fb0c  lis 4, 135
  047fb10  mulli 3, 3, 4512
  047fb14  addic 28, 4, 32000
  047fb18  extsw 3, 3
  047fb1c  fmr 2, 30
  047fb20  lfsx 3, 28, 3
  047fb24  fadds 30, 3, 1
  047fb28  fmr 1, 31
  047fb2c  bl 0xfcbe8
  047fb30  nop
  047fb34  lwz 3, 20(30)
  047fb38  mulli 3, 3, 4512
  047fb3c  lfs 3, 0(29)
  047fb40  extsw 5, 3
  047fb44  lfs 4, 88(29)
  047fb48  addc 3, 28, 3
  047fb4c  addc 5, 28, 5
  047fb50  li 4, 1
  047fb54  li 9, 1
  047fb58  clrldi 3, 3, 32
  047fb5c  lfs 2, 4(5)
  047fb60  fadds 2, 2, 1
  047fb64  fmr 1, 30
  047fb68  bl 0x17bd90
  047fb6c  nop
  047fb70  b 0x47fe00
  047fb74  lwz 3, 16(30)
  047fb78  cmpwi 3, -1
  047fb7c  bf 1, 0x47fbb4
  047fb80  lis 3, 151
  047fb84  addic 3, 3, -25376
  047fb88  lwz 4, 8324(3)
  047fb8c  cmpwi 4, 106
  047fb90  bf 2, 0x47fe00
  047fb94  lwz 3, 408(3)
  047fb98  cmpwi 3, 2
  047fb9c  bf 2, 0x47fe00
  047fba0  lis 3, 270
  047fba4  lwz 4, -25340(3)
  047fba8  addic 4, 4, 1
  047fbac  stw 4, -25340(3)
  047fbb0  b 0x47fe00
  047fbb4  lwz 3, 0(30)
  047fbb8  lwz 4, 24(31)
  047fbbc  srawi 6, 3, 31
  047fbc0  srawi 5, 4, 31
  047fbc4  srwi 8, 6, 1
  047fbc8  srwi 7, 5, 1
  047fbcc  xor 3, 8, 3
  047fbd0  xor 4, 7, 4
  047fbd4  subc 3, 3, 6
  047fbd8  subc 4, 4, 5
  047fbdc  cmpw 3, 4
  047fbe0  bf 0, 0x47fe00
  047fbe4  lwz 5, 20(30)
  047fbe8  mulli 5, 5, 4512
  047fbec  lis 3, 135
  047fbf0  extsw 5, 5
  047fbf4  addic 3, 3, 32000
  047fbf8  li 4, 0
  047fbfc  addc 5, 3, 5
  047fc00  ori 3, 31, 0
  047fc04  sth 4, 30(5)
  047fc08  bl 0xefb38
  047fc0c  nop
  047fc10  b 0x47ff78
  047fc14  addic 3, 30, 24
  047fc18  bl 0x4fff60
  047fc1c  nop
  047fc20  cmpwi 3, 0
  047fc24  bt 2, 0x47fca8
  047fc28  lis 3, 270
  047fc2c  lwz 3, -25336(3)
  047fc30  cmpwi 3, 5
  047fc34  bf 0, 0x47fca8
  047fc38  addic 3, 3, 1
  047fc3c  lis 4, 139
  047fc40  slwi 5, 3, 2
  047fc44  addic 4, 4, -13472
  047fc48  vspltisw 4, -1
  047fc4c  extsw 5, 5
  047fc50  lis 7, 72
  047fc54  addi 6, 5, 16
  047fc58  lis 8, 270
  047fc5c  vslw 4, 4, 4
  047fc60  lvlx 2, 5, 4
  047fc64  li 5, 84
  047fc68  lvrx 3, 6, 4
  047fc6c  addi 4, 7, -4308
  047fc70  stw 3, -25336(8)
  047fc74  vor 2, 2, 3
  047fc78  lis 3, 114
  047fc7c  vcfsx 2, 2, 0
  047fc80  lvlx 3, 5, 4
  047fc84  li 4, -3056
  047fc88  vspltw 3, 3, 0
  047fc8c  lvlx 5, 4, 3
  047fc90  li 3, 24
  047fc94  vaddfp 2, 2, 3
  047fc98  vmaddfp 2, 5, 2, 4
  047fc9c  vctsxs 2, 2, 0
  047fca0  vspltw 2, 2, 0
  047fca4  stvewx 2, 3, 30
  047fca8  lis 3, 270
  047fcac  lis 5, 114
  047fcb0  lis 4, 139
  047fcb4  addic 4, 4, -13448
  047fcb8  lwz 3, -25336(3)
  047fcbc  lfs 1, 24(31)
  047fcc0  slwi 3, 3, 2
  047fcc4  lfs 2, -3052(5)
  047fcc8  extsw 5, 3
  047fccc  ori 3, 31, 0
  047fcd0  lfsx 3, 4, 5
  047fcd4  fmadds 1, 3, 2, 1
  047fcd8  stfs 1, 24(31)
  047fcdc  bl 0x47ed20
  047fce0  lis 4, 72
  047fce4  lis 3, 270
  047fce8  lis 5, 151
  047fcec  addi 4, 4, -4308
  047fcf0  lfs 1, 24(31)
  047fcf4  addic 5, 5, -25376
  047fcf8  stfs 1, -25332(3)
  047fcfc  lfs 1, 96(4)
  047fd00  lfs 2, 92(4)
  047fd04  lfs 3, 132(5)
  047fd08  lfs 4, 100(4)
  047fd0c  fsubs 1, 1, 3
  047fd10  lfs 5, 128(5)
  047fd14  lfs 6, 136(5)
  047fd18  fsubs 2, 2, 5
  047fd1c  fsubs 3, 4, 6
  047fd20  fmuls 1, 1, 1
  047fd24  fmadds 1, 2, 2, 1
  047fd28  lfs 2, 104(4)
  047fd2c  lwz 3, 16(30)
  047fd30  lwz 4, 8324(5)
  047fd34  lwz 5, 408(5)
  047fd38  fmadds 1, 3, 3, 1
  047fd3c  fsqrts 1, 1
  047fd40  fcmpu 0, 1, 2
  047fd44  cror 6, 1, 2
  047fd48  bt 6, 0x47fda8
  047fd4c  lis 6, 270
  047fd50  lwz 6, -25328(6)
  047fd54  cmpwi 6, 0
  047fd58  bf 2, 0x47fda8
  047fd5c  lis 6, 270
  047fd60  li 7, 1
  047fd64  lis 8, 139
  047fd68  stw 7, -25328(6)
  047fd6c  lwz 6, 24(31)
  047fd70  lwz 7, -13376(8)
  047fd74  srawi 9, 6, 31
  047fd78  srawi 8, 7, 31
  047fd7c  srwi 11, 9, 1
  047fd80  srwi 10, 8, 1
  047fd84  xor 6, 11, 6
  047fd88  xor 7, 10, 7
  047fd8c  subc 6, 6, 9
  047fd90  subc 7, 7, 8
  047fd94  cmpw 6, 7
  047fd98  bf 1, 0x47fda8
  047fd9c  lis 6, 270
  047fda0  li 7, 5
  047fda4  stw 7, -25336(6)
  047fda8  cmpwi 3, -1
  047fdac  bf 1, 0x47fdd0
  047fdb0  cmpwi 4, 106
  047fdb4  bf 2, 0x47fdd0
  047fdb8  cmpwi 5, 2
  047fdbc  bf 2, 0x47fdd0
  047fdc0  lis 3, 270
  047fdc4  lwz 4, -25340(3)
  047fdc8  addic 4, 4, 1
  047fdcc  stw 4, -25340(3)
  047fdd0  lwz 4, 24(31)
  047fdd4  lis 3, 16944
  047fdd8  srawi 5, 4, 31
  047fddc  srwi 6, 5, 1
  047fde0  xor 4, 6, 4
  047fde4  subc 4, 4, 5
  047fde8  cmpw 4, 3
  047fdec  bt 0, 0x47fe00
  047fdf0  li 4, 7
  047fdf4  lbz 3, 33(31)
  047fdf8  bl 0x1042ec
  047fdfc  nop
  047fe00  lwz 3, 20(30)
  047fe04  cmpwi 3, -1
  047fe08  bf 1, 0x47ff78
  047fe0c  mulli 5, 3, 4512
  047fe10  lis 29, 135
  047fe14  lfs 1, 24(31)
  047fe18  lis 4, 72
  047fe1c  extsw 5, 5
  047fe20  addic 29, 29, 32000
  047fe24  addi 4, 4, -4308
  047fe28  addc 5, 29, 5
  047fe2c  ori 3, 31, 0
  047fe30  lfs 31, 4(4)
  047fe34  stfs 1, 8(5)
  047fe38  lfs 1, 108(4)
  047fe3c  fmr 30, 31
  047fe40  bl 0x1129d0
  047fe44  nop
  047fe48  cmpwi 3, -1
  047fe4c  bt 2, 0x47fecc
  047fe50  lbz 3, 32(31)
  047fe54  cmpwi 1, 3, 7
  047fe58  cmpwi 3, 3
  047fe5c  cror 2, 0, 5
  047fe60  bt 2, 0x47fec0
  047fe64  lwz 3, 24(31)
  047fe68  lwz 4, 4(30)
  047fe6c  srawi 6, 3, 31
  047fe70  srawi 5, 4, 31
  047fe74  srwi 8, 6, 1
  047fe78  srwi 7, 5, 1
  047fe7c  xor 3, 8, 3
  047fe80  xor 4, 7, 4
  047fe84  subc 3, 3, 6
  047fe88  subc 4, 4, 5
  047fe8c  cmpw 3, 4
  047fe90  bf 1, 0x47fecc
  047fe94  lwz 4, 0(30)
  047fe98  srawi 5, 4, 31
  047fe9c  srwi 6, 5, 1
  047fea0  xor 4, 6, 4
  047fea4  subc 4, 4, 5
  047fea8  cmpw 3, 4
  047feac  bf 0, 0x47fecc
  047feb0  lis 3, 72
  047feb4  addi 3, 3, -4308
  047feb8  lfs 31, 0(3)
  047febc  b 0x47fecc
  047fec0  lis 3, 72
  047fec4  addi 3, 3, -4308
  047fec8  lfs 31, 0(3)
  047fecc  fcmpu 0, 31, 30
  047fed0  li 3, 0
  047fed4  bt 2, 0x47fef0
  047fed8  lwz 4, 20(30)
  047fedc  lis 3, 139
  047fee0  slwi 4, 4, 1
  047fee4  addic 3, 3, -13568
  047fee8  extsw 4, 4
  047feec  lhzx 3, 3, 4
  047fef0  lwz 4, 20(30)
  047fef4  mulli 5, 4, 4512
  047fef8  extsw 5, 5
  047fefc  addc 5, 29, 5
  047ff00  sth 3, 30(5)
  047ff04  ori 3, 4, 0
  047ff08  cmpwi 3, 0
  047ff0c  bf 2, 0x47ff38
  047ff10  ori 3, 29, 0
  047ff14  li 4, 48
  047ff18  bl 0x17b8b8
  047ff1c  nop
  047ff20  lis 3, 113
  047ff24  ori 4, 31, 0
  047ff28  addic 3, 3, -4400
  047ff2c  bl 0x6d720
  047ff30  nop
  047ff34  lwz 3, 20(30)
  047ff38  lis 4, 135
  047ff3c  lwz 4, 31936(4)
  047ff40  cmpw 3, 4
  047ff44  bf 2, 0x47ff78
  047ff48  mulli 3, 3, 4512
  047ff4c  lwz 5, 20(30)
  047ff50  lis 4, 135
  047ff54  extsw 3, 3
  047ff58  lis 6, 139
  047ff5c  slwi 5, 5, 1
  047ff60  addc 3, 29, 3
  047ff64  addic 6, 6, -13568
  047ff68  extsw 5, 5
  047ff6c  lwz 4, 31940(4)
  047ff70  sth 4, 30(3)
  047ff74  sthx 4, 6, 5
  047ff78  ld 0, 256(1)
  047ff7c  mtlr 0
  047ff80  lfd 30, 224(1)
  047ff84  lfd 31, 232(1)
  047ff88  ld 25, 168(1)
  047ff8c  ld 26, 176(1)
  047ff90  ld 27, 184(1)
  047ff94  ld 28, 192(1)
  047ff98  ld 29, 200(1)
  047ff9c  ld 30, 208(1)
  047ffa0  ld 31, 216(1)
  047ffa4  addi 1, 1, 240
  047ffa8  blr
