# game/update/moby1047.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1047_0019eb88:   # 0x19eb88, 0x14 bytes
  019eb88  lis 3, 116
  019eb8c  lis 4, 1
  019eb90  addic 3, 3, 1364
  019eb94  stw 4, 72(3)
  019eb98  blr

UpdateMoby_1047:   # 0x19ebd8, 0x5e4 bytes
  019ebd8  stdu 1, -448(1)
  019ebdc  mflr 0
  019ebe0  std 0, 464(1)
  019ebe4  stfd 15, 312(1)
  019ebe8  stfd 16, 320(1)
  019ebec  stfd 17, 328(1)
  019ebf0  stfd 18, 336(1)
  019ebf4  stfd 19, 344(1)
  019ebf8  stfd 20, 352(1)
  019ebfc  stfd 21, 360(1)
  019ec00  stfd 22, 368(1)
  019ec04  stfd 23, 376(1)
  019ec08  stfd 24, 384(1)
  019ec0c  stfd 25, 392(1)
  019ec10  stfd 26, 400(1)
  019ec14  stfd 27, 408(1)
  019ec18  stfd 28, 416(1)
  019ec1c  stfd 29, 424(1)
  019ec20  stfd 30, 432(1)
  019ec24  stfd 31, 440(1)
  019ec28  std 31, 304(1)
  019ec2c  ori 31, 3, 0
  019ec30  lis 3, 165
  019ec34  addic 5, 3, 17860
  019ec38  lhz 4, 178(31)
  019ec3c  extsh 3, 4
  019ec40  lbzx 5, 5, 3
  019ec44  std 30, 296(1)
  019ec48  std 29, 288(1)
  019ec4c  std 28, 280(1)
  019ec50  std 27, 272(1)
  019ec54  std 26, 264(1)
  019ec58  std 25, 256(1)
  019ec5c  cmpwi 5, 0
  019ec60  bf 2, 0x19eca8
  019ec64  lis 5, 151
  019ec68  lis 30, 161
  019ec6c  srawi 3, 3, 5
  019ec70  addic 30, 30, -13028
  019ec74  sldi 3, 3, 2
  019ec78  lwz 5, -25488(5)
  019ec7c  clrlwi 4, 4, 27
  019ec80  addc 3, 3, 30
  019ec84  slwi 5, 5, 8
  019ec88  clrldi 3, 3, 32
  019ec8c  extsw 5, 5
  019ec90  li 6, 1
  019ec94  slw 4, 6, 4
  019ec98  lwzx 3, 3, 5
  019ec9c  and 3, 3, 4
  019eca0  cmpwi 3, 0
  019eca4  bt 2, 0x19ecd0
  019eca8  ori 3, 31, 0
  019ecac  bl 0x1d5858
  019ecb0  nop
  019ecb4  ori 3, 31, 0
  019ecb8  bl 0x2dbdc0
  019ecbc  nop
  019ecc0  ori 3, 31, 0
  019ecc4  bl 0xefb38
  019ecc8  nop
  019eccc  b 0x19f14c
  019ecd0  ori 3, 31, 0
  019ecd4  lis 4, 4
  019ecd8  li 5, 0
  019ecdc  bl 0x10675c
  019ece0  nop
  019ece4  cmpwi 3, 0
  019ece8  bt 2, 0x19f14c
  019ecec  lis 3, 26
  019ecf0  li 29, 0
  019ecf4  addi 26, 3, -5216
  019ecf8  li 6, -1
  019ecfc  li 7, 1
  019ed00  addic 28, 31, 16
  019ed04  addic 4, 1, 192
  019ed08  lfs 21, 0(26)
  019ed0c  stw 29, 192(1)
  019ed10  ori 3, 31, 0
  019ed14  stw 29, 196(1)
  019ed18  ori 5, 28, 0
  019ed1c  stw 29, 200(1)
  019ed20  fmr 1, 21
  019ed24  stw 29, 204(1)
  019ed28  fmr 2, 21
  019ed2c  lfs 22, 4(26)
  019ed30  li 8, 5
  019ed34  lfs 23, 8(26)
  019ed38  li 9, 3
  019ed3c  lfs 24, 12(26)
  019ed40  li 10, 4
  019ed44  lfs 25, 16(26)
  019ed48  fmr 3, 22
  019ed4c  lfs 26, 20(26)
  019ed50  fmr 4, 23
  019ed54  std 6, 144(1)
  019ed58  fmr 5, 24
  019ed5c  std 7, 160(1)
  019ed60  fmr 6, 25
  019ed64  std 7, 168(1)
  019ed68  fmr 7, 26
  019ed6c  std 6, 176(1)
  019ed70  std 29, 184(1)
  019ed74  bl 0x10e030
  019ed78  nop
  019ed7c  li 3, 0
  019ed80  li 4, 0
  019ed84  ori 5, 31, 0
  019ed88  li 6, 153
  019ed8c  bl 0x15d204
  019ed90  nop
  019ed94  lfs 27, 24(26)
  019ed98  ori 27, 29, 0
  019ed9c  lfs 28, 28(26)
  019eda0  lfs 29, 32(26)
  019eda4  lfs 30, 36(26)
  019eda8  lfs 31, 40(26)
  019edac  lis 3, -16512
  019edb0  fmr 1, 27
  019edb4  fmr 2, 25
  019edb8  stw 3, 224(1)
  019edbc  stw 29, 228(1)
  019edc0  stw 29, 232(1)
  019edc4  stw 29, 236(1)
  019edc8  bl 0xfcbe8
  019edcc  nop
  019edd0  stfs 1, 228(1)
  019edd4  fmr 2, 25
  019edd8  fmr 1, 27
  019eddc  bl 0xfcbe8
  019ede0  nop
  019ede4  lfs 2, 228(1)
  019ede8  lfs 3, 224(1)
  019edec  lfs 4, 208(31)
  019edf0  lfs 5, 220(31)
  019edf4  lfs 6, 212(31)
  019edf8  fmuls 4, 4, 2
  019edfc  fmuls 5, 5, 2
  019ee00  lfs 7, 192(31)
  019ee04  lfs 8, 216(31)
  019ee08  fmuls 6, 6, 2
  019ee0c  lfs 9, 204(31)
  019ee10  fmuls 2, 8, 2
  019ee14  lfs 8, 196(31)
  019ee18  lfs 10, 200(31)
  019ee1c  lfs 11, 224(31)
  019ee20  lfs 12, 236(31)
  019ee24  fmadds 4, 7, 3, 4
  019ee28  fmadds 5, 9, 3, 5
  019ee2c  fmadds 6, 8, 3, 6
  019ee30  lfs 7, 228(31)
  019ee34  lfs 8, 232(31)
  019ee38  fmadds 3, 10, 3, 2
  019ee3c  lfs 9, 236(1)
  019ee40  fmr 2, 29
  019ee44  fmadds 4, 11, 1, 4
  019ee48  fmadds 5, 12, 1, 5
  019ee4c  fmadds 6, 7, 1, 6
  019ee50  fmadds 3, 8, 1, 3
  019ee54  fmr 1, 28
  019ee58  fadds 5, 5, 9
  019ee5c  stfs 4, 224(1)
  019ee60  stfs 6, 228(1)
  019ee64  stfs 3, 232(1)
  019ee68  stfs 5, 236(1)
  019ee6c  bl 0xfcbe8
  019ee70  nop
  019ee74  lfs 2, 228(1)
  019ee78  lfs 3, 224(1)
  019ee7c  fmuls 4, 2, 2
  019ee80  lfs 5, 232(1)
  019ee84  lis 3, 114
  019ee88  addic 4, 1, 224
  019ee8c  lfs 6, -3052(3)
  019ee90  fmadds 4, 3, 3, 4
  019ee94  fmuls 1, 1, 6
  019ee98  addic 3, 1, 240
  019ee9c  lfs 20, 236(1)
  019eea0  ori 5, 28, 0
  019eea4  fmadds 4, 5, 5, 4
  019eea8  fsqrts 4, 4
  019eeac  fdivs 1, 1, 4
  019eeb0  fsub 6, 21, 4
  019eeb4  fsub 7, 21, 4
  019eeb8  fsub 8, 21, 4
  019eebc  fsub 9, 4, 21
  019eec0  fsub 10, 4, 21
  019eec4  fsub 4, 4, 21
  019eec8  fmuls 5, 5, 1
  019eecc  fmuls 2, 2, 1
  019eed0  fmuls 1, 3, 1
  019eed4  fsel 3, 6, 21, 5
  019eed8  fsel 6, 7, 21, 2
  019eedc  fsel 7, 8, 21, 1
  019eee0  fsel 19, 9, 3, 5
  019eee4  fsel 18, 10, 6, 2
  019eee8  fsel 17, 4, 7, 1
  019eeec  bl 0x502b08
  019eef0  nop
  019eef4  li 3, 1
  019eef8  bl 0xfc620
  019eefc  nop
  019ef00  li 4, 0
  019ef04  fmr 1, 30
  019ef08  li 5, 1807
  019ef0c  subc 3, 4, 3
  019ef10  fmr 2, 31
  019ef14  li 4, 1806
  019ef18  cntlzw 3, 3
  019ef1c  subc 4, 4, 5
  019ef20  sldi 3, 3, 58
  019ef24  sradi 3, 3, 63
  019ef28  and 3, 3, 4
  019ef2c  addc 26, 5, 3
  019ef30  bl 0xfcbe8
  019ef34  nop
  019ef38  fmr 16, 1
  019ef3c  li 3, 60
  019ef40  li 4, 120
  019ef44  bl 0xfe484
  019ef48  nop
  019ef4c  fmr 1, 23
  019ef50  ori 25, 3, 0
  019ef54  fmr 2, 25
  019ef58  bl 0xfcbe8
  019ef5c  nop
  019ef60  fmr 15, 1
  019ef64  li 3, 4
  019ef68  bl 0xfc620
  019ef6c  nop
  019ef70  lfs 1, 224(1)
  019ef74  lfs 2, 232(1)
  019ef78  cntlzw 3, 3
  019ef7c  stfs 1, 48(1)
  019ef80  ori 7, 26, 0
  019ef84  stfs 2, 56(1)
  019ef88  rlwinm 3, 3, 27, 31, 31
  019ef8c  stfs 17, 64(1)
  019ef90  ori 9, 25, 0
  019ef94  stfs 19, 72(1)
  019ef98  fmr 3, 31
  019ef9c  lfs 1, 228(1)
  019efa0  fmr 4, 25
  019efa4  lfs 2, 236(1)
  019efa8  stfs 1, 52(1)
  019efac  stfs 2, 60(1)
  019efb0  fmr 1, 16
  019efb4  stfs 18, 68(1)
  019efb8  fmr 2, 15
  019efbc  stfs 20, 76(1)
  019efc0  std 3, 128(1)
  019efc4  ld 3, 48(1)
  019efc8  ld 4, 56(1)
  019efcc  ld 5, 64(1)
  019efd0  ld 6, 72(1)
  019efd4  bl 0x425540
  019efd8  nop
  019efdc  addic 27, 27, 1
  019efe0  cmpwi 27, 30
  019efe4  bt 0, 0x19edac
  019efe8  lis 3, 26
  019efec  addi 3, 3, -5216
  019eff0  li 6, -1
  019eff4  li 28, 1
  019eff8  addic 5, 1, 208
  019effc  lfs 1, 48(3)
  019f000  lfs 2, 44(3)
  019f004  lfs 3, 208(31)
  019f008  lfs 4, 212(31)
  019f00c  lfs 5, 52(3)
  019f010  fmuls 3, 3, 1
  019f014  lfs 6, 216(31)
  019f018  fmuls 4, 4, 1
  019f01c  lfs 7, 192(31)
  019f020  lfs 8, 220(31)
  019f024  fmuls 6, 6, 1
  019f028  lfs 9, 196(31)
  019f02c  fmuls 1, 8, 1
  019f030  lfs 10, 200(31)
  019f034  lfs 11, 204(31)
  019f038  ori 3, 31, 0
  019f03c  lfs 8, 224(31)
  019f040  li 8, 5
  019f044  lfs 12, 228(31)
  019f048  addic 4, 1, 192
  019f04c  lfs 13, 232(31)
  019f050  li 9, 3
  019f054  fmadds 3, 7, 2, 3
  019f058  lfs 0, 236(31)
  019f05c  fmadds 4, 9, 2, 4
  019f060  std 6, 144(1)
  019f064  li 10, 4
  019f068  fmadds 6, 10, 2, 6
  019f06c  fmadds 1, 11, 2, 1
  019f070  fmr 2, 21
  019f074  fmadds 7, 8, 5, 3
  019f078  fmadds 8, 12, 5, 4
  019f07c  fmr 3, 22
  019f080  fmr 4, 23
  019f084  fmadds 6, 13, 5, 6
  019f088  fmadds 9, 0, 5, 1
  019f08c  fmr 1, 21
  019f090  fmr 5, 24
  019f094  stfs 7, 208(1)
  019f098  stfs 8, 212(1)
  019f09c  fmr 7, 26
  019f0a0  stfs 6, 216(1)
  019f0a4  stfs 9, 220(1)
  019f0a8  fmr 6, 25
  019f0ac  std 28, 160(1)
  019f0b0  std 28, 168(1)
  019f0b4  std 6, 176(1)
  019f0b8  std 29, 184(1)
  019f0bc  bl 0x10e030
  019f0c0  nop
  019f0c4  ori 3, 31, 0
  019f0c8  bl 0x1d5858
  019f0cc  nop
  019f0d0  ori 3, 31, 0
  019f0d4  bl 0x2dbdc0
  019f0d8  nop
  019f0dc  lhz 3, 178(31)
  019f0e0  lis 4, 151
  019f0e4  lis 7, 165
  019f0e8  extsh 5, 3
  019f0ec  extsh 6, 3
  019f0f0  srawi 5, 5, 5
  019f0f4  lwz 4, -25488(4)
  019f0f8  srawi 6, 6, 5
  019f0fc  sldi 5, 5, 2
  019f100  slwi 4, 4, 8
  019f104  addc 5, 5, 30
  019f108  extsw 4, 4
  019f10c  clrldi 5, 5, 32
  019f110  addic 7, 7, 19920
  019f114  sldi 6, 6, 2
  019f118  clrlwi 8, 3, 27
  019f11c  clrlwi 3, 3, 27
  019f120  slw 8, 28, 8
  019f124  lwzx 10, 5, 4
  019f128  slw 9, 28, 3
  019f12c  lwzx 11, 7, 6
  019f130  ori 3, 31, 0
  019f134  or 8, 10, 8
  019f138  or 9, 11, 9
  019f13c  stwx 8, 5, 4
  019f140  stwx 9, 7, 6
  019f144  bl 0xefb38
  019f148  nop
  019f14c  ld 0, 464(1)
  019f150  mtlr 0
  019f154  lfd 15, 312(1)
  019f158  lfd 16, 320(1)
  019f15c  lfd 17, 328(1)
  019f160  lfd 18, 336(1)
  019f164  lfd 19, 344(1)
  019f168  lfd 20, 352(1)
  019f16c  lfd 21, 360(1)
  019f170  lfd 22, 368(1)
  019f174  lfd 23, 376(1)
  019f178  lfd 24, 384(1)
  019f17c  lfd 25, 392(1)
  019f180  lfd 26, 400(1)
  019f184  lfd 27, 408(1)
  019f188  lfd 28, 416(1)
  019f18c  lfd 29, 424(1)
  019f190  lfd 30, 432(1)
  019f194  lfd 31, 440(1)
  019f198  ld 25, 256(1)
  019f19c  ld 26, 264(1)
  019f1a0  ld 27, 272(1)
  019f1a4  ld 28, 280(1)
  019f1a8  ld 29, 288(1)
  019f1ac  ld 30, 296(1)
  019f1b0  ld 31, 304(1)
  019f1b4  addi 1, 1, 448
  019f1b8  blr
