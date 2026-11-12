# game/update/moby1226.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1226_0020ea6c:   # 0x20ea6c, 0x14 bytes
  020ea6c  lis 3, 119
  020ea70  lis 4, 1
  020ea74  addic 3, 3, -31836
  020ea78  stw 4, 72(3)
  020ea7c  blr

M1226_0020ea80:   # 0x20ea80, 0x150 bytes
  020ea80  stdu 1, -128(1)
  020ea84  mflr 0
  020ea88  std 0, 144(1)
  020ea8c  std 30, 112(1)
  020ea90  std 31, 120(1)
  020ea94  lwz 30, 120(3)
  020ea98  ori 31, 3, 0
  020ea9c  lwz 30, 296(30)
  020eaa0  cmpwi 30, -1
  020eaa4  bf 2, 0x20eab0
  020eaa8  li 3, 0
  020eaac  b 0x20ebb8
  020eab0  lis 3, 164
  020eab4  slwi 4, 30, 8
  020eab8  lwz 3, -28512(3)
  020eabc  addc 30, 3, 4
  020eac0  clrldi 30, 30, 32
  020eac4  ori 3, 30, 0
  020eac8  bl 0x21416c
  020eacc  nop
  020ead0  cmpwi 3, 0
  020ead4  bt 2, 0x20eae0
  020ead8  li 3, 0
  020eadc  b 0x20ebb8
  020eae0  lbz 3, 33(31)
  020eae4  cmpwi 3, 255
  020eae8  bf 2, 0x20eaf4
  020eaec  li 3, 1
  020eaf0  b 0x20ebb8
  020eaf4  lfs 2, 20(31)
  020eaf8  lis 4, 165
  020eafc  lfs 1, 20(30)
  020eb00  rlwinm 3, 3, 2, 22, 29
  020eb04  lfs 3, 16(31)
  020eb08  addic 4, 4, -28284
  020eb0c  fsubs 4, 2, 1
  020eb10  lis 31, 164
  020eb14  lfs 2, 16(30)
  020eb18  fsubs 3, 3, 2
  020eb1c  lwzx 3, 4, 3
  020eb20  lwz 31, -28512(31)
  020eb24  cmpwi 3, 0
  020eb28  fmuls 4, 4, 4
  020eb2c  fmadds 3, 3, 3, 4
  020eb30  fsqrts 3, 3
  020eb34  bf 2, 0x20eb40
  020eb38  li 3, 1
  020eb3c  b 0x20ebb8
  020eb40  lhz 4, 0(3)
  020eb44  rlwinm 4, 4, 8, 9, 23
  020eb48  addc 4, 31, 4
  020eb4c  clrldi 4, 4, 32
  020eb50  lbz 5, 32(4)
  020eb54  cmpwi 5, 6
  020eb58  bf 2, 0x20eb64
  020eb5c  li 3, 0
  020eb60  b 0x20ebb8
  020eb64  lbz 5, 188(4)
  020eb68  cmpwi 5, 1
  020eb6c  bf 2, 0x20eba0
  020eb70  lfs 4, 20(4)
  020eb74  lfs 5, 16(4)
  020eb78  fsubs 4, 4, 1
  020eb7c  fsubs 5, 5, 2
  020eb80  fmuls 4, 4, 4
  020eb84  fmadds 4, 5, 5, 4
  020eb88  fsqrts 4, 4
  020eb8c  fcmpu 0, 4, 3
  020eb90  cror 6, 1, 2
  020eb94  bt 6, 0x20eba0
  020eb98  li 3, 0
  020eb9c  b 0x20ebb8
  020eba0  lhz 4, 0(3)
  020eba4  addic 3, 3, 2
  020eba8  extsh 4, 4
  020ebac  cmpwi 4, 0
  020ebb0  bf 0, 0x20eb40
  020ebb4  li 3, 1
  020ebb8  ld 0, 144(1)
  020ebbc  mtlr 0
  020ebc0  ld 30, 112(1)
  020ebc4  ld 31, 120(1)
  020ebc8  addi 1, 1, 128
  020ebcc  blr

M1226_0020ebd8:   # 0x20ebd8, 0x15c bytes
  020ebd8  stdu 1, -128(1)
  020ebdc  mflr 0
  020ebe0  std 0, 144(1)
  020ebe4  std 31, 120(1)
  020ebe8  std 30, 112(1)
  020ebec  ori 31, 3, 0
  020ebf0  lwz 30, 120(31)
  020ebf4  lwz 3, 296(30)
  020ebf8  cmpwi 3, -1
  020ebfc  bt 2, 0x20ec48
  020ec00  lis 4, 164
  020ec04  slwi 3, 3, 8
  020ec08  lwz 4, -28512(4)
  020ec0c  addc 3, 4, 3
  020ec10  clrldi 3, 3, 32
  020ec14  bl 0x21416c
  020ec18  nop
  020ec1c  cmpwi 3, 0
  020ec20  bt 2, 0x20ec48
  020ec24  lis 3, 164
  020ec28  lwz 5, 296(30)
  020ec2c  li 4, 600
  020ec30  slwi 5, 5, 8
  020ec34  lwz 3, -28512(3)
  020ec38  addc 3, 3, 5
  020ec3c  clrldi 3, 3, 32
  020ec40  bl 0x213dd8
  020ec44  nop
  020ec48  lbz 31, 33(31)
  020ec4c  cmpwi 31, 255
  020ec50  bf 2, 0x20ec90
  020ec54  lis 3, 33
  020ec58  vspltisw 2, -1
  020ec5c  lis 4, 114
  020ec60  addi 3, 3, -5168
  020ec64  li 5, -3056
  020ec68  vslw 2, 2, 2
  020ec6c  lvlx 3, 0, 3
  020ec70  lvlx 4, 5, 4
  020ec74  li 3, 344
  020ec78  vspltw 3, 3, 0
  020ec7c  vmaddfp 2, 4, 3, 2
  020ec80  vctsxs 2, 2, 0
  020ec84  vspltw 2, 2, 0
  020ec88  stvewx 2, 3, 30
  020ec8c  b 0x20ed1c
  020ec90  lis 3, 165
  020ec94  rlwinm 4, 31, 2, 22, 29
  020ec98  addic 3, 3, -28284
  020ec9c  lwzx 3, 3, 4
  020eca0  cmpwi 3, 0
  020eca4  bt 2, 0x20ed1c
  020eca8  lis 4, 33
  020ecac  lis 7, 164
  020ecb0  addi 8, 4, -5168
  020ecb4  lis 6, 114
  020ecb8  li 5, -3056
  020ecbc  li 4, 344
  020ecc0  lvlx 2, 0, 8
  020ecc4  vspltw 2, 2, 0
  020ecc8  lhz 8, 0(3)
  020eccc  lwz 9, -28512(7)
  020ecd0  rlwinm 8, 8, 8, 9, 23
  020ecd4  addc 8, 9, 8
  020ecd8  clrldi 8, 8, 32
  020ecdc  lbz 9, 32(8)
  020ece0  cmpwi 9, 128
  020ece4  bf 0, 0x20ed08
  020ece8  vspltisw 3, -1
  020ecec  lvlx 4, 5, 6
  020ecf0  lwz 8, 120(8)
  020ecf4  vslw 3, 3, 3
  020ecf8  vmaddfp 3, 4, 2, 3
  020ecfc  vctsxs 3, 3, 0
  020ed00  vspltw 3, 3, 0
  020ed04  stvewx 3, 4, 8
  020ed08  lhz 8, 0(3)
  020ed0c  addic 3, 3, 2
  020ed10  extsh 8, 8
  020ed14  cmpwi 8, 0
  020ed18  bf 0, 0x20ecc8
  020ed1c  ld 0, 144(1)
  020ed20  mtlr 0
  020ed24  ld 30, 112(1)
  020ed28  ld 31, 120(1)
  020ed2c  addi 1, 1, 128
  020ed30  blr

M1226_0020ed70:   # 0x20ed70, 0x59c bytes
  020ed70  stdu 1, -272(1)
  020ed74  mflr 0
  020ed78  std 0, 288(1)
  020ed7c  stfd 29, 248(1)
  020ed80  stfd 30, 256(1)
  020ed84  stfd 31, 264(1)
  020ed88  std 31, 240(1)
  020ed8c  ori 31, 3, 0
  020ed90  lfs 2, 0(5)
  020ed94  lis 3, 33
  020ed98  std 30, 232(1)
  020ed9c  fmr 31, 1
  020eda0  ori 30, 5, 0
  020eda4  addi 4, 3, -4812
  020eda8  lfs 3, 16(31)
  020edac  lfs 4, 4(5)
  020edb0  lfs 5, 20(31)
  020edb4  fsubs 2, 2, 3
  020edb8  std 28, 216(1)
  020edbc  fsubs 3, 4, 5
  020edc0  lis 28, 115
  020edc4  addic 3, 31, 72
  020edc8  addic 28, 28, 22784
  020edcc  fabs 5, 2
  020edd0  fabs 4, 3
  020edd4  stfs 2, 140(1)
  020edd8  std 29, 224(1)
  020eddc  stfs 3, 144(1)
  020ede0  lwz 29, 120(31)
  020ede4  fsubs 2, 5, 4
  020ede8  stfs 2, 148(1)
  020edec  lwz 6, 140(1)
  020edf0  lfs 29, 0(4)
  020edf4  lfs 1, 140(1)
  020edf8  lwz 7, 144(1)
  020edfc  lfs 2, 144(1)
  020ee00  fabs 1, 1
  020ee04  lwz 5, 148(1)
  020ee08  rlwinm 7, 7, 3, 29, 29
  020ee0c  fabs 3, 2
  020ee10  lfs 2, 148(1)
  020ee14  rlwimi 7, 5, 2, 30, 30
  020ee18  fsub 6, 2, 29
  020ee1c  fsub 7, 2, 29
  020ee20  rlwimi 7, 6, 4, 28, 28
  020ee24  ori 5, 28, 0
  020ee28  slwi 6, 7, 2
  020ee2c  rlwimi 5, 7, 2, 26, 28
  020ee30  clrldi 5, 5, 32
  020ee34  fsel 4, 6, 1, 4
  020ee38  lfsx 1, 28, 6
  020ee3c  lfs 2, 4(5)
  020ee40  fsel 3, 7, 3, 5
  020ee44  lfs 30, 4(4)
  020ee48  fcmpu 0, 4, 29
  020ee4c  bt 1, 0x20ee58
  020ee50  fmr 1, 29
  020ee54  b 0x20ef70
  020ee58  fsubs 5, 3, 4
  020ee5c  fadds 3, 3, 4
  020ee60  addic 4, 1, 16
  020ee64  li 7, 2
  020ee68  addic 6, 4, 184
  020ee6c  addic 5, 4, 168
  020ee70  mtctr 7
  020ee74  fdivs 3, 5, 3
  020ee78  fmuls 4, 3, 3
  020ee7c  stfs 3, 196(1)
  020ee80  stfs 3, 188(1)
  020ee84  stfs 3, 192(1)
  020ee88  stfs 3, 184(1)
  020ee8c  lfs 6, 196(1)
  020ee90  lfs 7, 188(1)
  020ee94  lfs 8, 192(1)
  020ee98  fmuls 5, 4, 4
  020ee9c  fmuls 7, 7, 4
  020eea0  fmuls 6, 6, 5
  020eea4  fmuls 3, 5, 5
  020eea8  fmuls 5, 8, 5
  020eeac  stfs 7, 188(1)
  020eeb0  fmuls 4, 6, 4
  020eeb4  stfs 5, 192(1)
  020eeb8  stfs 4, 196(1)
  020eebc  lfs 4, 168(4)
  020eec0  fmuls 4, 4, 3
  020eec4  stfs 4, 184(4)
  020eec8  lfs 4, 4(5)
  020eecc  addic 5, 5, 8
  020eed0  fmuls 4, 4, 3
  020eed4  addic 4, 4, 8
  020eed8  stfs 4, 4(6)
  020eedc  addic 6, 6, 8
  020eee0  bdnz 0x20eebc
  020eee4  li 6, 4
  020eee8  ori 4, 1, 0
  020eeec  mtctr 6
  020eef0  lis 5, 115
  020eef4  addic 6, 4, 184
  020eef8  addic 5, 5, 22752
  020eefc  ori 8, 6, 0
  020ef00  lfs 3, 184(4)
  020ef04  lfs 4, 0(5)
  020ef08  fmuls 3, 3, 4
  020ef0c  lfs 4, 4(5)
  020ef10  addic 5, 5, 8
  020ef14  stfs 3, 184(4)
  020ef18  lfs 3, 4(6)
  020ef1c  addic 4, 4, 8
  020ef20  fmuls 3, 3, 4
  020ef24  stfs 3, 4(6)
  020ef28  addic 6, 6, 8
  020ef2c  bdnz 0x20ef00
  020ef30  ori 4, 1, 0
  020ef34  fmr 3, 29
  020ef38  mtctr 7
  020ef3c  lfs 4, 184(4)
  020ef40  fadds 3, 3, 4
  020ef44  lfs 4, 4(8)
  020ef48  addic 4, 4, 16
  020ef4c  lfs 5, 8(8)
  020ef50  lfs 6, 12(8)
  020ef54  addic 8, 8, 16
  020ef58  fadds 3, 3, 4
  020ef5c  fadds 3, 3, 5
  020ef60  fadds 3, 3, 6
  020ef64  bdnz 0x20ef3c
  020ef68  fadds 3, 3, 30
  020ef6c  fmadds 1, 3, 1, 2
  020ef70  lis 4, 33
  020ef74  lis 5, 114
  020ef78  addi 4, 4, -4812
  020ef7c  lis 6, 114
  020ef80  lfs 2, 8(4)
  020ef84  lfs 3, -3048(5)
  020ef88  lfs 4, 12(4)
  020ef8c  fmuls 2, 3, 2
  020ef90  lfs 5, -3052(6)
  020ef94  addic 5, 29, 312
  020ef98  fmuls 4, 5, 4
  020ef9c  fmr 3, 2
  020efa0  bl 0x10a2e0
  020efa4  nop
  020efa8  lfs 1, 0(30)
  020efac  lfs 2, 16(31)
  020efb0  lfs 3, 4(30)
  020efb4  lfs 4, 20(31)
  020efb8  fsubs 1, 1, 2
  020efbc  fsubs 2, 3, 4
  020efc0  fabs 4, 1
  020efc4  fabs 5, 2
  020efc8  stfs 1, 128(1)
  020efcc  stfs 2, 132(1)
  020efd0  lfs 3, 72(31)
  020efd4  fsubs 1, 4, 5
  020efd8  stfs 1, 136(1)
  020efdc  lwz 3, 128(1)
  020efe0  lfs 1, 128(1)
  020efe4  lwz 4, 132(1)
  020efe8  lfs 2, 132(1)
  020efec  lwz 5, 136(1)
  020eff0  rlwinm 4, 4, 3, 29, 29
  020eff4  fabs 6, 2
  020eff8  lfs 2, 136(1)
  020effc  fabs 1, 1
  020f000  rlwimi 4, 5, 2, 30, 30
  020f004  fsub 7, 2, 29
  020f008  fsub 8, 2, 29
  020f00c  rlwimi 4, 3, 4, 28, 28
  020f010  ori 3, 28, 0
  020f014  rlwimi 3, 4, 2, 26, 28
  020f018  slwi 4, 4, 2
  020f01c  clrldi 3, 3, 32
  020f020  fsel 5, 7, 1, 5
  020f024  lfsx 1, 28, 4
  020f028  fsel 4, 8, 6, 4
  020f02c  lfs 2, 4(3)
  020f030  fcmpu 0, 5, 29
  020f034  bt 1, 0x20f040
  020f038  fmr 1, 29
  020f03c  b 0x20f158
  020f040  fsubs 6, 4, 5
  020f044  fadds 4, 4, 5
  020f048  addic 3, 1, 16
  020f04c  li 7, 2
  020f050  addic 5, 3, 152
  020f054  addic 4, 3, 136
  020f058  mtctr 7
  020f05c  fdivs 4, 6, 4
  020f060  fmuls 5, 4, 4
  020f064  stfs 4, 164(1)
  020f068  stfs 4, 156(1)
  020f06c  stfs 4, 160(1)
  020f070  stfs 4, 152(1)
  020f074  lfs 7, 164(1)
  020f078  lfs 8, 156(1)
  020f07c  lfs 9, 160(1)
  020f080  fmuls 6, 5, 5
  020f084  fmuls 8, 8, 5
  020f088  fmuls 7, 7, 6
  020f08c  fmuls 4, 6, 6
  020f090  fmuls 6, 9, 6
  020f094  stfs 8, 156(1)
  020f098  fmuls 5, 7, 5
  020f09c  stfs 6, 160(1)
  020f0a0  stfs 5, 164(1)
  020f0a4  lfs 5, 136(3)
  020f0a8  fmuls 5, 5, 4
  020f0ac  stfs 5, 152(3)
  020f0b0  lfs 5, 4(4)
  020f0b4  addic 4, 4, 8
  020f0b8  fmuls 5, 5, 4
  020f0bc  addic 3, 3, 8
  020f0c0  stfs 5, 4(5)
  020f0c4  addic 5, 5, 8
  020f0c8  bdnz 0x20f0a4
  020f0cc  li 5, 4
  020f0d0  ori 3, 1, 0
  020f0d4  mtctr 5
  020f0d8  lis 4, 115
  020f0dc  addic 5, 3, 152
  020f0e0  addic 4, 4, 22752
  020f0e4  ori 6, 5, 0
  020f0e8  lfs 4, 152(3)
  020f0ec  lfs 5, 0(4)
  020f0f0  fmuls 4, 4, 5
  020f0f4  lfs 5, 4(4)
  020f0f8  addic 4, 4, 8
  020f0fc  stfs 4, 152(3)
  020f100  lfs 4, 4(5)
  020f104  addic 3, 3, 8
  020f108  fmuls 4, 4, 5
  020f10c  stfs 4, 4(5)
  020f110  addic 5, 5, 8
  020f114  bdnz 0x20f0e8
  020f118  ori 3, 1, 0
  020f11c  fmr 4, 29
  020f120  mtctr 7
  020f124  lfs 5, 152(3)
  020f128  fadds 4, 4, 5
  020f12c  lfs 5, 4(6)
  020f130  addic 3, 3, 16
  020f134  lfs 6, 8(6)
  020f138  lfs 7, 12(6)
  020f13c  addic 6, 6, 16
  020f140  fadds 4, 4, 5
  020f144  fadds 4, 4, 6
  020f148  fadds 4, 4, 7
  020f14c  bdnz 0x20f124
  020f150  fadds 4, 4, 30
  020f154  fmadds 1, 4, 1, 2
  020f158  fmr 2, 1
  020f15c  fmr 1, 3
  020f160  bl 0x5026a0
  020f164  nop
  020f168  fcmpu 0, 1, 30
  020f16c  lis 4, 33
  020f170  addic 3, 29, 308
  020f174  addi 4, 4, -4812
  020f178  lfs 1, 16(4)
  020f17c  cror 6, 1, 2
  020f180  bt 6, 0x20f1a4
  020f184  fmr 2, 1
  020f188  lis 4, 114
  020f18c  fmr 1, 31
  020f190  lfs 3, -3048(4)
  020f194  fmuls 2, 3, 2
  020f198  bl 0x109af0
  020f19c  nop
  020f1a0  b 0x20f1c0
  020f1a4  fmr 2, 1
  020f1a8  lis 4, 114
  020f1ac  fmr 1, 29
  020f1b0  lfs 3, -3048(4)
  020f1b4  fmuls 2, 3, 2
  020f1b8  bl 0x109af0
  020f1bc  nop
  020f1c0  lis 3, 33
  020f1c4  lfs 1, 72(31)
  020f1c8  addi 28, 3, -4812
  020f1cc  lfs 2, 20(28)
  020f1d0  lfs 3, 24(28)
  020f1d4  fadds 2, 1, 2
  020f1d8  lfs 4, 28(28)
  020f1dc  fsubs 5, 3, 1
  020f1e0  addic 4, 1, 112
  020f1e4  li 8, 0
  020f1e8  ori 3, 31, 0
  020f1ec  fsubs 3, 3, 2
  020f1f0  fsub 7, 1, 5
  020f1f4  fsubs 6, 4, 2
  020f1f8  fsubs 4, 4, 1
  020f1fc  fsub 8, 2, 3
  020f200  fsel 1, 7, 5, 1
  020f204  fsel 2, 8, 3, 2
  020f208  fsub 7, 4, 1
  020f20c  lfs 3, 32(28)
  020f210  lfs 5, 36(28)
  020f214  fsub 8, 6, 2
  020f218  fsel 1, 7, 4, 1
  020f21c  lfs 4, 40(28)
  020f220  fsel 2, 8, 6, 2
  020f224  fmuls 6, 1, 1
  020f228  lfs 8, 44(28)
  020f22c  lfs 11, 308(29)
  020f230  fmuls 7, 2, 2
  020f234  fmuls 9, 6, 1
  020f238  fmuls 10, 7, 2
  020f23c  fmuls 12, 6, 9
  020f240  fmadds 1, 9, 3, 1
  020f244  fmuls 9, 7, 10
  020f248  fmadds 2, 10, 3, 2
  020f24c  fmuls 3, 6, 12
  020f250  fmadds 1, 12, 5, 1
  020f254  fmuls 10, 7, 9
  020f258  fmadds 2, 9, 5, 2
  020f25c  fmuls 5, 6, 3
  020f260  fmadds 1, 3, 4, 1
  020f264  fmuls 3, 7, 10
  020f268  fmadds 2, 10, 4, 2
  020f26c  fmadds 1, 5, 8, 1
  020f270  fmadds 2, 3, 8, 2
  020f274  fmr 3, 29
  020f278  fmuls 2, 2, 11
  020f27c  stfs 2, 112(1)
  020f280  lfs 2, 308(29)
  020f284  li 29, 0
  020f288  fmuls 1, 1, 2
  020f28c  stw 29, 120(1)
  020f290  stfs 1, 116(1)
  020f294  lfs 1, 48(28)
  020f298  fmr 2, 1
  020f29c  bl 0x1009b0
  020f2a0  nop
  020f2a4  lfs 1, 20(31)
  020f2a8  lfs 2, 4(30)
  020f2ac  lfs 3, 16(31)
  020f2b0  fsubs 1, 1, 2
  020f2b4  lfs 2, 0(30)
  020f2b8  fsubs 2, 3, 2
  020f2bc  fmuls 1, 1, 1
  020f2c0  fmadds 1, 2, 2, 1
  020f2c4  lfs 2, 52(28)
  020f2c8  fsqrts 1, 1
  020f2cc  fcmpu 0, 1, 2
  020f2d0  cror 6, 1, 2
  020f2d4  bt 6, 0x20f2dc
  020f2d8  li 29, 1
  020f2dc  ori 3, 29, 0
  020f2e0  ld 0, 288(1)
  020f2e4  mtlr 0
  020f2e8  lfd 29, 248(1)
  020f2ec  lfd 30, 256(1)
  020f2f0  lfd 31, 264(1)
  020f2f4  ld 28, 216(1)
  020f2f8  ld 29, 224(1)
  020f2fc  ld 30, 232(1)
  020f300  ld 31, 240(1)
  020f304  addi 1, 1, 272
  020f308  blr

M1226_0020f330:   # 0x20f330, 0xa38 bytes
  020f330  stdu 1, -336(1)
  020f334  mflr 0
  020f338  std 0, 352(1)
  020f33c  stfd 31, 328(1)
  020f340  std 31, 320(1)
  020f344  lbz 4, 32(3)
  020f348  std 30, 312(1)
  020f34c  ori 31, 3, 0
  020f350  lwz 30, 120(3)
  020f354  std 29, 304(1)
  020f358  std 28, 296(1)
  020f35c  cmpwi 4, 0
  020f360  bt 2, 0x20fd44
  020f364  lis 3, 119
  020f368  lwz 5, 36(31)
  020f36c  lis 4, 33
  020f370  li 7, 0
  020f374  addi 6, 4, -3316
  020f378  lis 4, 51
  020f37c  lfs 1, -31712(3)
  020f380  lfs 2, 36(5)
  020f384  ori 3, 31, 0
  020f388  fmuls 1, 2, 1
  020f38c  li 5, 0
  020f390  stfs 1, 44(31)
  020f394  lfs 31, 0(6)
  020f398  stw 7, 132(1)
  020f39c  bl 0x10675c
  020f3a0  nop
  020f3a4  ori 29, 3, 0
  020f3a8  addic 5, 30, 32
  020f3ac  ori 4, 29, 0
  020f3b0  li 6, 0
  020f3b4  addic 7, 1, 128
  020f3b8  li 9, 0
  020f3bc  addic 8, 1, 132
  020f3c0  ori 3, 31, 0
  020f3c4  li 10, 4
  020f3c8  bl 0x106840
  020f3cc  nop
  020f3d0  lwz 4, 128(1)
  020f3d4  ori 28, 3, 0
  020f3d8  cmpwi 4, 1
  020f3dc  bt 2, 0x20f9e0
  020f3e0  lbz 3, 32(31)
  020f3e4  cmpwi 3, 10
  020f3e8  bt 2, 0x20f9e0
  020f3ec  ori 3, 31, 0
  020f3f0  bl 0x20ebd8
  020f3f4  lfs 1, 32(30)
  020f3f8  lfs 2, 132(1)
  020f3fc  li 3, 71
  020f400  li 4, 3
  020f404  fsubs 1, 1, 2
  020f408  subc 4, 4, 28
  020f40c  fcmpu 0, 1, 31
  020f410  stfs 1, 32(30)
  020f414  lwz 5, 32(29)
  020f418  lhz 5, 166(5)
  020f41c  subc 3, 3, 5
  020f420  cntlzw 3, 3
  020f424  sldi 3, 3, 58
  020f428  sradi 3, 3, 63
  020f42c  and 3, 3, 4
  020f430  addc 28, 28, 3
  020f434  bt 1, 0x20f43c
  020f438  li 28, 1
  020f43c  lis 3, 33
  020f440  addi 3, 3, -3316
  020f444  lfs 1, 4(3)
  020f448  bl 0x502758
  020f44c  nop
  020f450  lis 4, 16128
  020f454  lis 5, 119
  020f458  lis 6, 114
  020f45c  cmpwi 28, 2
  020f460  stw 4, 152(30)
  020f464  li 4, 0
  020f468  lfs 1, -31708(5)
  020f46c  lfs 2, -3048(6)
  020f470  stw 3, 144(30)
  020f474  fmuls 1, 1, 2
  020f478  li 3, 9
  020f47c  stb 4, 173(30)
  020f480  stw 3, 148(30)
  020f484  stfs 1, 128(30)
  020f488  bt 1, 0x20f4a0
  020f48c  cmpwi 28, -1
  020f490  cmpwi 1, 28, 0
  020f494  bf 1, 0x20f9d0
  020f498  bf 5, 0x20f9d0
  020f49c  b 0x20f734
  020f4a0  cmpwi 28, 10
  020f4a4  cmpwi 1, 28, 8
  020f4a8  bt 1, 0x20f9d0
  020f4ac  bf 5, 0x20f4bc
  020f4b0  li 3, 250
  020f4b4  stb 3, 103(30)
  020f4b8  b 0x20f9d0
  020f4bc  lis 3, 119
  020f4c0  lis 4, 114
  020f4c4  lis 5, 119
  020f4c8  lfs 1, -31700(3)
  020f4cc  lfs 2, -3052(4)
  020f4d0  lis 3, 16544
  020f4d4  fmuls 1, 1, 2
  020f4d8  lis 4, 16672
  020f4dc  stfs 1, 136(30)
  020f4e0  lfs 1, -31704(5)
  020f4e4  stw 3, 192(30)
  020f4e8  fmuls 1, 1, 2
  020f4ec  stw 4, 196(30)
  020f4f0  stfs 1, 140(30)
  020f4f4  lwz 3, 32(29)
  020f4f8  lfs 1, 16(31)
  020f4fc  lfs 2, 20(31)
  020f500  lfs 3, 16(3)
  020f504  lfs 4, 20(3)
  020f508  fsubs 1, 1, 3
  020f50c  fsubs 2, 2, 4
  020f510  lis 3, 115
  020f514  addic 3, 3, 22784
  020f518  fabs 3, 1
  020f51c  fabs 4, 2
  020f520  stfs 1, 168(1)
  020f524  stfs 2, 172(1)
  020f528  fsubs 1, 3, 4
  020f52c  stfs 1, 176(1)
  020f530  lwz 4, 168(1)
  020f534  lfs 1, 168(1)
  020f538  lwz 5, 172(1)
  020f53c  lfs 2, 172(1)
  020f540  lwz 6, 176(1)
  020f544  rlwinm 5, 5, 3, 29, 29
  020f548  fabs 5, 2
  020f54c  lfs 2, 176(1)
  020f550  fabs 1, 1
  020f554  rlwimi 5, 6, 2, 30, 30
  020f558  fsub 6, 2, 31
  020f55c  fsub 7, 2, 31
  020f560  rlwimi 5, 4, 4, 28, 28
  020f564  ori 4, 3, 0
  020f568  rlwimi 4, 5, 2, 26, 28
  020f56c  slwi 5, 5, 2
  020f570  clrldi 4, 4, 32
  020f574  fsel 4, 6, 1, 4
  020f578  lfsx 1, 3, 5
  020f57c  fsel 3, 7, 5, 3
  020f580  lfs 2, 4(4)
  020f584  fcmpu 0, 4, 31
  020f588  bt 1, 0x20f594
  020f58c  fmr 1, 31
  020f590  b 0x20f6b8
  020f594  fsubs 5, 3, 4
  020f598  fadds 3, 3, 4
  020f59c  addic 3, 1, 16
  020f5a0  li 6, 2
  020f5a4  addic 5, 3, 244
  020f5a8  addic 4, 3, 228
  020f5ac  mtctr 6
  020f5b0  fdivs 3, 5, 3
  020f5b4  fmuls 4, 3, 3
  020f5b8  stfs 3, 256(1)
  020f5bc  stfs 3, 248(1)
  020f5c0  stfs 3, 252(1)
  020f5c4  stfs 3, 244(1)
  020f5c8  lfs 6, 256(1)
  020f5cc  lfs 7, 248(1)
  020f5d0  lfs 8, 252(1)
  020f5d4  fmuls 5, 4, 4
  020f5d8  fmuls 7, 7, 4
  020f5dc  fmuls 6, 6, 5
  020f5e0  fmuls 3, 5, 5
  020f5e4  fmuls 5, 8, 5
  020f5e8  stfs 7, 248(1)
  020f5ec  fmuls 4, 6, 4
  020f5f0  stfs 5, 252(1)
  020f5f4  stfs 4, 256(1)
  020f5f8  lfs 4, 228(3)
  020f5fc  fmuls 4, 4, 3
  020f600  stfs 4, 244(3)
  020f604  lfs 4, 4(4)
  020f608  addic 4, 4, 8
  020f60c  fmuls 4, 4, 3
  020f610  addic 3, 3, 8
  020f614  stfs 4, 4(5)
  020f618  addic 5, 5, 8
  020f61c  bdnz 0x20f5f8
  020f620  li 5, 4
  020f624  ori 3, 1, 0
  020f628  mtctr 5
  020f62c  lis 4, 115
  020f630  addic 5, 3, 244
  020f634  addic 4, 4, 22752
  020f638  ori 7, 5, 0
  020f63c  lfs 3, 244(3)
  020f640  lfs 4, 0(4)
  020f644  fmuls 3, 3, 4
  020f648  lfs 4, 4(4)
  020f64c  addic 4, 4, 8
  020f650  stfs 3, 244(3)
  020f654  lfs 3, 4(5)
  020f658  addic 3, 3, 8
  020f65c  fmuls 3, 3, 4
  020f660  stfs 3, 4(5)
  020f664  addic 5, 5, 8
  020f668  bdnz 0x20f63c
  020f66c  ori 3, 1, 0
  020f670  fmr 3, 31
  020f674  mtctr 6
  020f678  lfs 4, 244(3)
  020f67c  fadds 3, 3, 4
  020f680  lfs 4, 4(7)
  020f684  addic 3, 3, 16
  020f688  lfs 5, 8(7)
  020f68c  lfs 6, 12(7)
  020f690  addic 7, 7, 16
  020f694  fadds 3, 3, 4
  020f698  fadds 3, 3, 5
  020f69c  fadds 3, 3, 6
  020f6a0  bdnz 0x20f678
  020f6a4  lis 3, 33
  020f6a8  addi 3, 3, -3316
  020f6ac  lfs 4, 8(3)
  020f6b0  fadds 3, 3, 4
  020f6b4  fmadds 1, 3, 1, 2
  020f6b8  stfs 1, 136(1)
  020f6bc  addic 5, 1, 136
  020f6c0  lfs 1, 16(29)
  020f6c4  addic 6, 30, 136
  020f6c8  lfs 2, 24(29)
  020f6cc  addic 7, 30, 140
  020f6d0  stfs 1, 48(1)
  020f6d4  stfs 2, 56(1)
  020f6d8  lfs 1, 20(29)
  020f6dc  lfs 2, 28(29)
  020f6e0  stfs 1, 52(1)
  020f6e4  stfs 2, 60(1)
  020f6e8  ld 3, 48(1)
  020f6ec  ld 4, 56(1)
  020f6f0  bl 0x107de8
  020f6f4  nop
  020f6f8  ori 3, 31, 0
  020f6fc  lfs 1, 136(1)
  020f700  addic 4, 30, 112
  020f704  li 6, 6
  020f708  li 7, 1
  020f70c  li 8, 0
  020f710  bl 0x10ad80
  020f714  nop
  020f718  li 3, 8
  020f71c  li 4, 2
  020f720  li 5, 120
  020f724  stb 3, 32(31)
  020f728  stb 4, 188(31)
  020f72c  stb 5, 103(30)
  020f730  b 0x20f9d0
  020f734  lis 3, 119
  020f738  lis 4, 114
  020f73c  li 6, 0
  020f740  lis 5, 119
  020f744  lfs 1, -31708(3)
  020f748  lfs 2, -3048(4)
  020f74c  lis 3, 114
  020f750  lhz 4, 52(31)
  020f754  fmuls 1, 1, 2
  020f758  rlwimi 4, 6, 0, 19, 19
  020f75c  lis 6, 119
  020f760  sth 4, 52(31)
  020f764  lis 4, 16640
  020f768  stfs 1, 128(30)
  020f76c  lfs 1, -31692(5)
  020f770  lfs 2, -3052(3)
  020f774  lis 3, 16768
  020f778  fmuls 1, 1, 2
  020f77c  stfs 1, 136(30)
  020f780  lfs 1, -31696(6)
  020f784  stw 4, 192(30)
  020f788  fmuls 1, 1, 2
  020f78c  stw 3, 196(30)
  020f790  stfs 1, 140(30)
  020f794  lwz 3, 32(29)
  020f798  lfs 1, 16(31)
  020f79c  lfs 2, 20(31)
  020f7a0  lfs 3, 16(3)
  020f7a4  lfs 4, 20(3)
  020f7a8  fsubs 1, 1, 3
  020f7ac  fsubs 2, 2, 4
  020f7b0  lis 3, 115
  020f7b4  addic 3, 3, 22784
  020f7b8  fabs 3, 1
  020f7bc  fabs 4, 2
  020f7c0  stfs 1, 156(1)
  020f7c4  stfs 2, 160(1)
  020f7c8  fsubs 1, 3, 4
  020f7cc  stfs 1, 164(1)
  020f7d0  lwz 4, 156(1)
  020f7d4  lfs 1, 156(1)
  020f7d8  lwz 5, 160(1)
  020f7dc  lfs 2, 160(1)
  020f7e0  lwz 6, 164(1)
  020f7e4  rlwinm 5, 5, 3, 29, 29
  020f7e8  fabs 5, 2
  020f7ec  lfs 2, 164(1)
  020f7f0  fabs 1, 1
  020f7f4  rlwimi 5, 6, 2, 30, 30
  020f7f8  fsub 6, 2, 31
  020f7fc  fsub 7, 2, 31
  020f800  rlwimi 5, 4, 4, 28, 28
  020f804  ori 4, 3, 0
  020f808  rlwimi 4, 5, 2, 26, 28
  020f80c  slwi 5, 5, 2
  020f810  clrldi 4, 4, 32
  020f814  fsel 4, 6, 1, 4
  020f818  lfsx 1, 3, 5
  020f81c  fsel 3, 7, 5, 3
  020f820  lfs 2, 4(4)
  020f824  fcmpu 0, 4, 31
  020f828  bt 1, 0x20f834
  020f82c  fmr 1, 31
  020f830  b 0x20f958
  020f834  fsubs 5, 3, 4
  020f838  fadds 3, 3, 4
  020f83c  addic 3, 1, 16
  020f840  li 7, 2
  020f844  addic 5, 3, 212
  020f848  addic 4, 3, 196
  020f84c  mtctr 7
  020f850  fdivs 3, 5, 3
  020f854  fmuls 4, 3, 3
  020f858  stfs 3, 224(1)
  020f85c  stfs 3, 216(1)
  020f860  stfs 3, 220(1)
  020f864  stfs 3, 212(1)
  020f868  lfs 6, 224(1)
  020f86c  lfs 7, 216(1)
  020f870  lfs 8, 220(1)
  020f874  fmuls 5, 4, 4
  020f878  fmuls 7, 7, 4
  020f87c  fmuls 6, 6, 5
  020f880  fmuls 3, 5, 5
  020f884  fmuls 5, 8, 5
  020f888  stfs 7, 216(1)
  020f88c  fmuls 4, 6, 4
  020f890  stfs 5, 220(1)
  020f894  stfs 4, 224(1)
  020f898  lfs 4, 196(3)
  020f89c  fmuls 4, 4, 3
  020f8a0  stfs 4, 212(3)
  020f8a4  lfs 4, 4(4)
  020f8a8  addic 4, 4, 8
  020f8ac  fmuls 4, 4, 3
  020f8b0  addic 3, 3, 8
  020f8b4  stfs 4, 4(5)
  020f8b8  addic 5, 5, 8
  020f8bc  bdnz 0x20f898
  020f8c0  li 5, 4
  020f8c4  ori 3, 1, 0
  020f8c8  mtctr 5
  020f8cc  lis 4, 115
  020f8d0  addic 5, 3, 212
  020f8d4  addic 4, 4, 22752
  020f8d8  ori 6, 5, 0
  020f8dc  lfs 3, 212(3)
  020f8e0  lfs 4, 0(4)
  020f8e4  fmuls 3, 3, 4
  020f8e8  lfs 4, 4(4)
  020f8ec  addic 4, 4, 8
  020f8f0  stfs 3, 212(3)
  020f8f4  lfs 3, 4(5)
  020f8f8  addic 3, 3, 8
  020f8fc  fmuls 3, 3, 4
  020f900  stfs 3, 4(5)
  020f904  addic 5, 5, 8
  020f908  bdnz 0x20f8dc
  020f90c  ori 3, 1, 0
  020f910  fmr 3, 31
  020f914  mtctr 7
  020f918  lfs 4, 212(3)
  020f91c  fadds 3, 3, 4
  020f920  lfs 4, 4(6)
  020f924  addic 3, 3, 16
  020f928  lfs 5, 8(6)
  020f92c  lfs 6, 12(6)
  020f930  addic 6, 6, 16
  020f934  fadds 3, 3, 4
  020f938  fadds 3, 3, 5
  020f93c  fadds 3, 3, 6
  020f940  bdnz 0x20f918
  020f944  lis 3, 33
  020f948  addi 3, 3, -3316
  020f94c  lfs 4, 8(3)
  020f950  fadds 3, 3, 4
  020f954  fmadds 1, 3, 1, 2
  020f958  stfs 1, 140(1)
  020f95c  addic 5, 1, 140
  020f960  lfs 1, 16(29)
  020f964  addic 6, 30, 136
  020f968  lfs 2, 24(29)
  020f96c  addic 7, 30, 140
  020f970  stfs 1, 48(1)
  020f974  stfs 2, 56(1)
  020f978  lfs 1, 20(29)
  020f97c  lfs 2, 28(29)
  020f980  stfs 1, 52(1)
  020f984  stfs 2, 60(1)
  020f988  ld 3, 48(1)
  020f98c  ld 4, 56(1)
  020f990  bl 0x107de8
  020f994  nop
  020f998  ori 3, 31, 0
  020f99c  lfs 1, 140(1)
  020f9a0  addic 4, 30, 112
  020f9a4  li 6, 10
  020f9a8  li 7, 1
  020f9ac  li 8, 0
  020f9b0  bl 0x10ad80
  020f9b4  nop
  020f9b8  li 3, 10
  020f9bc  li 4, 2
  020f9c0  li 5, 240
  020f9c4  stb 3, 32(31)
  020f9c8  stb 4, 188(31)
  020f9cc  stb 5, 103(30)
  020f9d0  addic 4, 30, 96
  020f9d4  ori 3, 31, 0
  020f9d8  bl 0x10c808
  020f9dc  nop
  020f9e0  li 5, 255
  020f9e4  ori 3, 31, 0
  020f9e8  addic 4, 30, 96
  020f9ec  stb 5, 164(31)
  020f9f0  bl 0x10c9a0
  020f9f4  nop
  020f9f8  lwz 3, 56(30)
  020f9fc  cmpwi 3, 0
  020fa00  bt 2, 0x20fa50
  020fa04  lis 3, 33
  020fa08  addi 3, 3, -3316
  020fa0c  lfs 1, 12(3)
  020fa10  lfs 2, 16(3)
  020fa14  bl 0xfcbe8
  020fa18  nop
  020fa1c  lis 3, 114
  020fa20  lfs 2, -3056(3)
  020fa24  fmuls 1, 1, 2
  020fa28  bl 0x502758
  020fa2c  nop
  020fa30  extsw 3, 3
  020fa34  std 3, 280(1)
  020fa38  li 3, 0
  020fa3c  lfd 1, 280(1)
  020fa40  stw 3, 56(30)
  020fa44  fcfid 1, 1
  020fa48  frsp 1, 1
  020fa4c  stfs 1, 304(30)
  020fa50  addic 3, 30, 304
  020fa54  bl 0x500108
  020fa58  nop
  020fa5c  lwz 4, 288(30)
  020fa60  lis 5, 165
  020fa64  slwi 4, 4, 2
  020fa68  addic 5, 5, 7136
  020fa6c  extsw 7, 4
  020fa70  lis 6, 33
  020fa74  ori 3, 31, 0
  020fa78  addi 6, 6, -3316
  020fa7c  addic 4, 30, 208
  020fa80  lwzx 5, 5, 7
  020fa84  li 7, 0
  020fa88  addic 8, 5, 16
  020fa8c  lfs 1, 20(6)
  020fa90  li 6, 0
  020fa94  lwz 9, 0(5)
  020fa98  extsw 9, 9
  020fa9c  bl 0x111ba0
  020faa0  nop
  020faa4  cmpwi 3, 2
  020faa8  bt 2, 0x20fd28
  020faac  lfs 1, 208(30)
  020fab0  lfs 2, 16(31)
  020fab4  lfs 3, 212(30)
  020fab8  lfs 4, 20(31)
  020fabc  fsubs 1, 1, 2
  020fac0  fsubs 2, 3, 4
  020fac4  lis 3, 115
  020fac8  addic 3, 3, 22784
  020facc  fabs 4, 1
  020fad0  fabs 5, 2
  020fad4  stfs 1, 144(1)
  020fad8  stfs 2, 148(1)
  020fadc  lfs 1, 72(31)
  020fae0  fsubs 2, 4, 5
  020fae4  stfs 2, 152(1)
  020fae8  lwz 4, 144(1)
  020faec  lfs 2, 144(1)
  020faf0  lwz 5, 148(1)
  020faf4  lfs 3, 148(1)
  020faf8  lwz 6, 152(1)
  020fafc  rlwinm 5, 5, 3, 29, 29
  020fb00  fabs 6, 3
  020fb04  lfs 3, 152(1)
  020fb08  fabs 2, 2
  020fb0c  rlwimi 5, 6, 2, 30, 30
  020fb10  fsub 7, 3, 31
  020fb14  fsub 8, 3, 31
  020fb18  rlwimi 5, 4, 4, 28, 28
  020fb1c  ori 4, 3, 0
  020fb20  rlwimi 4, 5, 2, 26, 28
  020fb24  slwi 5, 5, 2
  020fb28  clrldi 4, 4, 32
  020fb2c  fsel 5, 7, 2, 5
  020fb30  lfsx 2, 3, 5
  020fb34  fsel 4, 8, 6, 4
  020fb38  lfs 3, 4(4)
  020fb3c  fcmpu 0, 5, 31
  020fb40  bt 1, 0x20fb48
  020fb44  b 0x20fc68
  020fb48  fsubs 6, 4, 5
  020fb4c  fadds 4, 4, 5
  020fb50  addic 3, 1, 16
  020fb54  li 7, 2
  020fb58  addic 4, 3, 164
  020fb5c  addic 5, 3, 180
  020fb60  mtctr 7
  020fb64  fdivs 4, 6, 4
  020fb68  fmuls 5, 4, 4
  020fb6c  stfs 4, 192(1)
  020fb70  stfs 4, 184(1)
  020fb74  stfs 4, 188(1)
  020fb78  stfs 4, 180(1)
  020fb7c  lfs 7, 192(1)
  020fb80  lfs 8, 184(1)
  020fb84  lfs 9, 188(1)
  020fb88  fmuls 6, 5, 5
  020fb8c  fmuls 8, 8, 5
  020fb90  fmuls 7, 7, 6
  020fb94  fmuls 4, 6, 6
  020fb98  fmuls 6, 9, 6
  020fb9c  stfs 8, 184(1)
  020fba0  fmuls 5, 7, 5
  020fba4  stfs 6, 188(1)
  020fba8  stfs 5, 192(1)
  020fbac  lfs 5, 164(3)
  020fbb0  fmuls 5, 5, 4
  020fbb4  stfs 5, 180(3)
  020fbb8  lfs 5, 4(4)
  020fbbc  addic 3, 3, 8
  020fbc0  addic 4, 4, 8
  020fbc4  fmuls 5, 5, 4
  020fbc8  stfs 5, 4(5)
  020fbcc  addic 5, 5, 8
  020fbd0  bdnz 0x20fbac
  020fbd4  li 5, 4
  020fbd8  ori 3, 1, 0
  020fbdc  mtctr 5
  020fbe0  lis 4, 115
  020fbe4  addic 5, 3, 180
  020fbe8  addic 4, 4, 22752
  020fbec  ori 6, 5, 0
  020fbf0  lfs 4, 180(3)
  020fbf4  lfs 5, 0(4)
  020fbf8  fmuls 4, 4, 5
  020fbfc  lfs 5, 4(4)
  020fc00  addic 4, 4, 8
  020fc04  stfs 4, 180(3)
  020fc08  lfs 4, 4(5)
  020fc0c  addic 3, 3, 8
  020fc10  fmuls 4, 4, 5
  020fc14  stfs 4, 4(5)
  020fc18  addic 5, 5, 8
  020fc1c  bdnz 0x20fbf0
  020fc20  ori 3, 1, 0
  020fc24  mtctr 7
  020fc28  lfs 4, 180(3)
  020fc2c  lfs 5, 4(6)
  020fc30  fadds 4, 31, 4
  020fc34  lfs 6, 8(6)
  020fc38  lfs 31, 12(6)
  020fc3c  addic 3, 3, 16
  020fc40  addic 6, 6, 16
  020fc44  fadds 4, 4, 5
  020fc48  fadds 4, 4, 6
  020fc4c  fadds 31, 4, 31
  020fc50  bdnz 0x20fc28
  020fc54  lis 3, 33
  020fc58  addi 3, 3, -3316
  020fc5c  lfs 4, 8(3)
  020fc60  fadds 31, 31, 4
  020fc64  fmadds 31, 31, 2, 3
  020fc68  fmr 2, 31
  020fc6c  bl 0x5026a0
  020fc70  nop
  020fc74  lis 3, 33
  020fc78  addi 3, 3, -3316
  020fc7c  lfs 2, 24(3)
  020fc80  fcmpu 0, 1, 2
  020fc84  cror 6, 1, 2
  020fc88  bt 6, 0x20fcf4
  020fc8c  lis 3, 33
  020fc90  lfs 1, 16(31)
  020fc94  lis 4, 151
  020fc98  addi 3, 3, -3316
  020fc9c  lfs 2, 20(31)
  020fca0  stfs 1, 112(1)
  020fca4  li 6, 0
  020fca8  lfs 1, 28(31)
  020fcac  addic 4, 4, -25168
  020fcb0  stfs 2, 116(1)
  020fcb4  li 5, 2
  020fcb8  stfs 1, 124(1)
  020fcbc  li 7, 0
  020fcc0  lfs 1, 28(3)
  020fcc4  lfs 2, 24(31)
  020fcc8  addic 3, 1, 112
  020fccc  fadds 1, 2, 1
  020fcd0  stfs 1, 120(1)
  020fcd4  bl 0x57820
  020fcd8  nop
  020fcdc  cmpwi 3, 0
  020fce0  bf 2, 0x20fcf4
  020fce4  lwz 3, 344(30)
  020fce8  cmpwi 3, 0
  020fcec  bt 2, 0x20fd08
  020fcf0  b 0x20fd28
  020fcf4  li 3, 0
  020fcf8  li 4, 2
  020fcfc  stw 3, 348(30)
  020fd00  stw 4, 276(30)
  020fd04  b 0x20fd28
  020fd08  lwz 3, 272(30)
  020fd0c  lhz 3, 166(3)
  020fd10  cmpwi 3, 634
  020fd14  bf 2, 0x20fd28
  020fd18  li 3, 2
  020fd1c  li 4, 1
  020fd20  stw 3, 276(30)
  020fd24  stw 4, 348(30)
  020fd28  lwz 3, 272(30)
  020fd2c  cmpwi 3, 0
  020fd30  bf 2, 0x20fd44
  020fd34  lis 3, 151
  020fd38  addic 3, 3, -25376
  020fd3c  lwz 3, 8320(3)
  020fd40  stw 3, 272(30)
  020fd44  ld 0, 352(1)
  020fd48  mtlr 0
  020fd4c  lfd 31, 328(1)
  020fd50  ld 28, 296(1)
  020fd54  ld 29, 304(1)
  020fd58  ld 30, 312(1)
  020fd5c  ld 31, 320(1)
  020fd60  addi 1, 1, 336
  020fd64  blr

UpdateMoby_1226:   # 0x20fda8, 0xe94 bytes
  020fda8  stdu 1, -288(1)
  020fdac  mflr 0
  020fdb0  std 0, 304(1)
  020fdb4  stfd 28, 256(1)
  020fdb8  stfd 29, 264(1)
  020fdbc  stfd 30, 272(1)
  020fdc0  stfd 31, 280(1)
  020fdc4  std 31, 248(1)
  020fdc8  std 30, 240(1)
  020fdcc  ori 31, 3, 0
  020fdd0  std 29, 232(1)
  020fdd4  lwz 30, 120(31)
  020fdd8  bl 0x20f330
  020fddc  lbz 4, 32(31)
  020fde0  lwz 3, 272(30)
  020fde4  cmpwi 4, 5
  020fde8  lbz 5, 83(31)
  020fdec  bt 1, 0x20fe20
  020fdf0  cmpwi 4, 2
  020fdf4  bt 1, 0x20fe0c
  020fdf8  cmpwi 4, -1
  020fdfc  bf 1, 0x210a58
  020fe00  cmpwi 4, 0
  020fe04  bf 1, 0x20fe48
  020fe08  b 0x20ff44
  020fe0c  cmpwi 4, 3
  020fe10  bf 1, 0x210128
  020fe14  cmpwi 4, 4
  020fe18  bf 1, 0x21024c
  020fe1c  b 0x210874
  020fe20  cmpwi 4, 8
  020fe24  bt 1, 0x20fe3c
  020fe28  cmpwi 4, 6
  020fe2c  bf 1, 0x210374
  020fe30  cmpwi 4, 7
  020fe34  bf 1, 0x210430
  020fe38  b 0x21096c
  020fe3c  cmpwi 4, 10
  020fe40  bt 2, 0x210a04
  020fe44  b 0x210a58
  020fe48  lwz 3, 288(30)
  020fe4c  cmpwi 3, -1
  020fe50  bt 2, 0x20fe74
  020fe54  lis 4, 165
  020fe58  slwi 5, 3, 2
  020fe5c  addic 3, 4, 7136
  020fe60  extsw 4, 5
  020fe64  lwzx 4, 3, 4
  020fe68  lwz 4, 0(4)
  020fe6c  cmpwi 4, 0
  020fe70  bf 2, 0x20fe84
  020fe74  ori 3, 31, 0
  020fe78  bl 0xefb38
  020fe7c  nop
  020fe80  b 0x210c10
  020fe84  lwz 4, 292(30)
  020fe88  cmpwi 4, -1
  020fe8c  bt 2, 0x20feb8
  020fe90  slwi 4, 4, 2
  020fe94  extsw 4, 4
  020fe98  lwzx 3, 3, 4
  020fe9c  lwz 3, 0(3)
  020fea0  cmpwi 3, 0
  020fea4  bf 2, 0x20feb8
  020fea8  ori 3, 31, 0
  020feac  bl 0xefb38
  020feb0  nop
  020feb4  b 0x210c10
  020feb8  lis 3, 16448
  020febc  li 4, 2
  020fec0  li 5, 3
  020fec4  li 6, 5
  020fec8  stw 3, 32(30)
  020fecc  stb 4, 40(30)
  020fed0  lfs 1, 16(31)
  020fed4  li 3, 5
  020fed8  sth 5, 36(30)
  020fedc  stfs 1, 352(30)
  020fee0  lfs 1, 20(31)
  020fee4  lwz 4, 328(30)
  020fee8  stfs 1, 356(30)
  020feec  extsw 5, 4
  020fef0  lfs 1, 24(31)
  020fef4  subc 6, 6, 4
  020fef8  subc 3, 5, 3
  020fefc  stfs 1, 360(30)
  020ff00  lfs 1, 28(31)
  020ff04  sradi 3, 3, 63
  020ff08  li 5, 1
  020ff0c  stfs 1, 364(30)
  020ff10  and 3, 3, 6
  020ff14  lfs 1, 72(31)
  020ff18  lhz 6, 52(31)
  020ff1c  addc 3, 4, 3
  020ff20  stfs 1, 364(30)
  020ff24  ori 6, 6, 4096
  020ff28  li 4, 0
  020ff2c  stw 5, 324(30)
  020ff30  stw 3, 328(30)
  020ff34  stb 5, 32(31)
  020ff38  sth 6, 52(31)
  020ff3c  stb 4, 188(31)
  020ff40  b 0x210a58
  020ff44  lwz 3, 276(30)
  020ff48  cmpwi 3, 2
  020ff4c  bf 2, 0x20ff5c
  020ff50  lwz 3, 344(30)
  020ff54  cmpwi 3, 0
  020ff58  bt 2, 0x20ffb4
  020ff5c  li 3, 7
  020ff60  li 4, 1
  020ff64  cmpwi 5, 4
  020ff68  stb 3, 32(31)
  020ff6c  stb 4, 188(31)
  020ff70  bt 2, 0x210a58
  020ff74  lis 3, 33
  020ff78  lis 4, 114
  020ff7c  addi 3, 3, -664
  020ff80  li 5, 0
  020ff84  lfs 1, 0(3)
  020ff88  lfs 2, -3056(4)
  020ff8c  ori 3, 31, 0
  020ff90  li 4, 4
  020ff94  fmuls 1, 2, 1
  020ff98  fctiwz 1, 1
  020ff9c  stfd 1, 208(1)
  020ffa0  lwz 6, 212(1)
  020ffa4  extsw 6, 6
  020ffa8  bl 0xfddc0
  020ffac  nop
  020ffb0  b 0x210a58
  020ffb4  cmpwi 4, 1
  020ffb8  bf 2, 0x2100b0
  020ffbc  lwz 3, 292(30)
  020ffc0  cmpwi 3, -1
  020ffc4  bt 2, 0x21005c
  020ffc8  lis 4, 165
  020ffcc  lwz 5, 316(30)
  020ffd0  slwi 3, 3, 2
  020ffd4  addic 4, 4, 7136
  020ffd8  extsw 3, 3
  020ffdc  addic 5, 5, 1
  020ffe0  vspltisw 4, -1
  020ffe4  lwzx 3, 4, 3
  020ffe8  li 4, 328
  020ffec  vslw 4, 4, 4
  020fff0  lwz 3, 0(3)
  020fff4  lvlx 2, 4, 30
  020fff8  divw 6, 5, 3
  020fffc  mullw 3, 6, 3
  0210000  addi 6, 4, 16
  0210004  lis 4, 33
  0210008  subc 3, 5, 3
  021000c  li 5, 4
  0210010  addi 4, 4, -664
  0210014  lvrx 3, 6, 30
  0210018  stw 3, 316(30)
  021001c  vor 2, 2, 3
  0210020  lis 3, 114
  0210024  lvlx 3, 5, 4
  0210028  li 4, -3056
  021002c  vcfsx 2, 2, 0
  0210030  vspltw 3, 3, 0
  0210034  lvlx 5, 4, 3
  0210038  li 3, 332
  021003c  li 4, 2
  0210040  vaddfp 2, 2, 3
  0210044  vmaddfp 2, 5, 2, 4
  0210048  vctsxs 2, 2, 0
  021004c  vspltw 2, 2, 0
  0210050  stvewx 2, 3, 30
  0210054  stb 4, 32(31)
  0210058  b 0x210a58
  021005c  lwz 3, 348(30)
  0210060  cmpwi 3, 0
  0210064  bt 2, 0x210a58
  0210068  lis 3, 151
  021006c  addic 3, 3, -25376
  0210070  lwz 3, 8324(3)
  0210074  cmpwi 3, 89
  0210078  bf 2, 0x210a58
  021007c  lwz 3, 336(30)
  0210080  cmpwi 3, -1
  0210084  bt 2, 0x210a58
  0210088  lis 4, 164
  021008c  slwi 3, 3, 8
  0210090  lwz 4, -28512(4)
  0210094  addc 3, 4, 3
  0210098  clrldi 3, 3, 32
  021009c  bl 0x459ff0
  02100a0  nop
  02100a4  li 3, -1
  02100a8  stw 3, 336(30)
  02100ac  b 0x210a58
  02100b0  cmpwi 4, 2
  02100b4  bf 2, 0x210a58
  02100b8  addic 3, 30, 332
  02100bc  bl 0x4fff60
  02100c0  nop
  02100c4  cmpwi 3, 0
  02100c8  bt 2, 0x210a58
  02100cc  li 3, 0
  02100d0  li 4, 3
  02100d4  stw 3, 324(30)
  02100d8  lbz 3, 83(31)
  02100dc  stb 4, 32(31)
  02100e0  cmpwi 3, 2
  02100e4  bt 2, 0x210a58
  02100e8  lis 3, 33
  02100ec  lis 4, 114
  02100f0  addi 3, 3, -664
  02100f4  li 5, 0
  02100f8  lfs 1, 0(3)
  02100fc  lfs 2, -3056(4)
  0210100  ori 3, 31, 0
  0210104  fmuls 1, 2, 1
  0210108  li 4, 2
  021010c  fctiwz 1, 1
  0210110  stfd 1, 208(1)
  0210114  lwz 6, 212(1)
  0210118  extsw 6, 6
  021011c  bl 0xfddc0
  0210120  nop
  0210124  b 0x210a58
  0210128  lis 3, 33
  021012c  lwz 6, 292(30)
  0210130  lis 4, 165
  0210134  addi 3, 3, -664
  0210138  lis 5, 114
  021013c  slwi 6, 6, 2
  0210140  lfs 1, 8(3)
  0210144  addic 3, 4, 7136
  0210148  extsw 4, 6
  021014c  lfs 2, -3052(5)
  0210150  lwz 5, 316(30)
  0210154  fmuls 1, 2, 1
  0210158  slwi 5, 5, 4
  021015c  lwzx 3, 3, 4
  0210160  addc 4, 3, 5
  0210164  ori 3, 31, 0
  0210168  addic 5, 4, 16
  021016c  clrldi 5, 5, 32
  0210170  bl 0x20ed70
  0210174  ori 4, 3, 0
  0210178  lbz 3, 83(31)
  021017c  cmpwi 4, 0
  0210180  bt 2, 0x2101dc
  0210184  li 3, 1
  0210188  stb 3, 32(31)
  021018c  stw 3, 324(30)
  0210190  lbz 3, 83(31)
  0210194  cmpwi 3, 0
  0210198  bt 2, 0x210a58
  021019c  lis 3, 33
  02101a0  lis 4, 114
  02101a4  addi 3, 3, -664
  02101a8  li 5, 0
  02101ac  lfs 1, 0(3)
  02101b0  lfs 2, -3056(4)
  02101b4  ori 3, 31, 0
  02101b8  fmuls 1, 2, 1
  02101bc  li 4, 0
  02101c0  fctiwz 1, 1
  02101c4  stfd 1, 208(1)
  02101c8  lwz 6, 212(1)
  02101cc  extsw 6, 6
  02101d0  bl 0xfddc0
  02101d4  nop
  02101d8  b 0x210a58
  02101dc  lwz 4, 276(30)
  02101e0  cmpwi 4, 2
  02101e4  bf 2, 0x2101f4
  02101e8  lwz 4, 344(30)
  02101ec  cmpwi 4, 0
  02101f0  bt 2, 0x210a58
  02101f4  li 4, 7
  02101f8  cmpwi 3, 4
  02101fc  li 3, 1
  0210200  stb 4, 32(31)
  0210204  stb 3, 188(31)
  0210208  bt 2, 0x210a58
  021020c  lis 3, 33
  0210210  lis 4, 114
  0210214  addi 3, 3, -664
  0210218  li 5, 0
  021021c  lfs 1, 0(3)
  0210220  lfs 2, -3056(4)
  0210224  ori 3, 31, 0
  0210228  fmuls 1, 2, 1
  021022c  li 4, 4
  0210230  fctiwz 1, 1
  0210234  stfd 1, 208(1)
  0210238  lwz 6, 212(1)
  021023c  extsw 6, 6
  0210240  bl 0xfddc0
  0210244  nop
  0210248  b 0x210a58
  021024c  lfs 1, 20(31)
  0210250  lfs 2, 356(30)
  0210254  lfs 3, 16(31)
  0210258  fsubs 1, 1, 2
  021025c  lfs 2, 352(30)
  0210260  fsubs 2, 3, 2
  0210264  lfs 3, 24(31)
  0210268  lfs 4, 360(30)
  021026c  fsubs 3, 3, 4
  0210270  fmuls 1, 1, 1
  0210274  lis 3, 33
  0210278  addi 3, 3, -664
  021027c  fmadds 1, 2, 2, 1
  0210280  lfs 2, 12(3)
  0210284  fmadds 1, 3, 3, 1
  0210288  fsqrts 1, 1
  021028c  fcmpu 0, 1, 2
  0210290  cror 6, 0, 2
  0210294  bt 6, 0x2102c0
  0210298  lis 3, 33
  021029c  lis 6, 114
  02102a0  addi 4, 3, -664
  02102a4  addic 5, 30, 352
  02102a8  ori 3, 31, 0
  02102ac  lfs 1, 8(4)
  02102b0  lfs 2, -3052(6)
  02102b4  fmuls 1, 2, 1
  02102b8  bl 0x20ed70
  02102bc  b 0x210a58
  02102c0  lis 3, 33
  02102c4  lis 4, 114
  02102c8  addi 29, 3, -664
  02102cc  lis 6, 114
  02102d0  addic 3, 31, 72
  02102d4  addic 5, 30, 312
  02102d8  lfs 3, 16(29)
  02102dc  lfs 2, -3048(4)
  02102e0  lfs 5, 20(29)
  02102e4  fmuls 2, 2, 3
  02102e8  lfs 1, 364(30)
  02102ec  lfs 6, -3052(6)
  02102f0  fmuls 4, 6, 5
  02102f4  fmr 3, 2
  02102f8  bl 0x10a2e0
  02102fc  nop
  0210300  lfs 1, 72(31)
  0210304  lfs 2, 364(30)
  0210308  bl 0x5026a0
  021030c  nop
  0210310  lfs 2, 24(29)
  0210314  fcmpu 0, 1, 2
  0210318  cror 6, 1, 2
  021031c  bt 6, 0x210a58
  0210320  li 3, 1
  0210324  lbz 4, 83(31)
  0210328  cmpwi 4, 0
  021032c  stb 3, 32(31)
  0210330  bt 2, 0x210a58
  0210334  lis 3, 33
  0210338  lis 4, 114
  021033c  addi 3, 3, -664
  0210340  li 5, 0
  0210344  lfs 1, 0(3)
  0210348  lfs 2, -3056(4)
  021034c  ori 3, 31, 0
  0210350  li 4, 0
  0210354  fmuls 1, 2, 1
  0210358  fctiwz 1, 1
  021035c  stfd 1, 208(1)
  0210360  lwz 6, 212(1)
  0210364  extsw 6, 6
  0210368  bl 0xfddc0
  021036c  nop
  0210370  b 0x210a58
  0210374  lis 3, 33
  0210378  lis 4, 114
  021037c  lwz 6, 296(30)
  0210380  addi 3, 3, -664
  0210384  lis 5, 164
  0210388  slwi 6, 6, 8
  021038c  lfs 1, 28(3)
  0210390  lfs 2, -3052(4)
  0210394  ori 3, 31, 0
  0210398  lwz 4, -28512(5)
  021039c  fmuls 1, 2, 1
  02103a0  addc 4, 4, 6
  02103a4  addic 5, 4, 16
  02103a8  clrldi 5, 5, 32
  02103ac  bl 0x20ed70
  02103b0  cmpwi 3, 0
  02103b4  bt 2, 0x210a58
  02103b8  lis 3, 164
  02103bc  lwz 5, 296(30)
  02103c0  li 4, 600
  02103c4  slwi 5, 5, 8
  02103c8  lwz 3, -28512(3)
  02103cc  addc 3, 3, 5
  02103d0  clrldi 3, 3, 32
  02103d4  bl 0x213dd8
  02103d8  nop
  02103dc  li 4, 7
  02103e0  lbz 3, 83(31)
  02103e4  cmpwi 3, 4
  02103e8  stb 4, 32(31)
  02103ec  bt 2, 0x210a58
  02103f0  lis 3, 33
  02103f4  lis 4, 114
  02103f8  addi 3, 3, -664
  02103fc  li 5, 0
  0210400  lfs 1, 0(3)
  0210404  lfs 2, -3056(4)
  0210408  ori 3, 31, 0
  021040c  li 4, 4
  0210410  fmuls 1, 2, 1
  0210414  fctiwz 1, 1
  0210418  stfd 1, 208(1)
  021041c  lwz 6, 212(1)
  0210420  extsw 6, 6
  0210424  bl 0xfddc0
  0210428  nop
  021042c  b 0x210a58
  0210430  lfs 1, 16(3)
  0210434  lfs 2, 16(31)
  0210438  lfs 3, 20(3)
  021043c  lfs 4, 20(31)
  0210440  fsubs 1, 1, 2
  0210444  lis 3, 33
  0210448  fsubs 2, 3, 4
  021044c  addi 4, 3, -664
  0210450  lis 5, 115
  0210454  addic 3, 31, 72
  0210458  addic 5, 5, 22784
  021045c  fabs 3, 1
  0210460  fabs 4, 2
  0210464  stfs 1, 160(1)
  0210468  stfs 2, 164(1)
  021046c  fsubs 1, 3, 4
  0210470  stfs 1, 168(1)
  0210474  lwz 6, 160(1)
  0210478  lfs 31, 32(4)
  021047c  lfs 1, 160(1)
  0210480  lwz 4, 164(1)
  0210484  lfs 2, 164(1)
  0210488  fabs 1, 1
  021048c  lwz 7, 168(1)
  0210490  rlwinm 4, 4, 3, 29, 29
  0210494  fabs 5, 2
  0210498  lfs 2, 168(1)
  021049c  rlwimi 4, 7, 2, 30, 30
  02104a0  fsub 6, 2, 31
  02104a4  rlwimi 4, 6, 4, 28, 28
  02104a8  fsub 7, 2, 31
  02104ac  ori 6, 5, 0
  02104b0  rlwimi 6, 4, 2, 26, 28
  02104b4  slwi 4, 4, 2
  02104b8  clrldi 6, 6, 32
  02104bc  fsel 4, 6, 1, 4
  02104c0  lfsx 1, 5, 4
  02104c4  lfs 2, 4(6)
  02104c8  fsel 3, 7, 5, 3
  02104cc  fcmpu 0, 4, 31
  02104d0  bt 1, 0x2104dc
  02104d4  fmr 1, 31
  02104d8  b 0x210600
  02104dc  fsubs 5, 3, 4
  02104e0  fadds 3, 3, 4
  02104e4  addic 4, 1, 16
  02104e8  li 7, 2
  02104ec  addic 5, 4, 156
  02104f0  addic 6, 4, 172
  02104f4  mtctr 7
  02104f8  fdivs 3, 5, 3
  02104fc  fmuls 4, 3, 3
  0210500  stfs 3, 184(1)
  0210504  stfs 3, 176(1)
  0210508  stfs 3, 180(1)
  021050c  stfs 3, 172(1)
  0210510  lfs 6, 184(1)
  0210514  lfs 7, 176(1)
  0210518  lfs 8, 180(1)
  021051c  fmuls 5, 4, 4
  0210520  fmuls 7, 7, 4
  0210524  fmuls 6, 6, 5
  0210528  fmuls 3, 5, 5
  021052c  fmuls 5, 8, 5
  0210530  stfs 7, 176(1)
  0210534  fmuls 4, 6, 4
  0210538  stfs 5, 180(1)
  021053c  stfs 4, 184(1)
  0210540  lfs 4, 156(4)
  0210544  fmuls 4, 4, 3
  0210548  stfs 4, 172(4)
  021054c  lfs 4, 4(5)
  0210550  addic 4, 4, 8
  0210554  addic 5, 5, 8
  0210558  fmuls 4, 4, 3
  021055c  stfs 4, 4(6)
  0210560  addic 6, 6, 8
  0210564  bdnz 0x210540
  0210568  li 6, 4
  021056c  ori 4, 1, 0
  0210570  mtctr 6
  0210574  lis 5, 115
  0210578  addic 6, 4, 172
  021057c  addic 5, 5, 22752
  0210580  ori 8, 6, 0
  0210584  lfs 3, 172(4)
  0210588  lfs 4, 0(5)
  021058c  fmuls 3, 3, 4
  0210590  lfs 4, 4(5)
  0210594  addic 5, 5, 8
  0210598  stfs 3, 172(4)
  021059c  lfs 3, 4(6)
  02105a0  addic 4, 4, 8
  02105a4  fmuls 3, 3, 4
  02105a8  stfs 3, 4(6)
  02105ac  addic 6, 6, 8
  02105b0  bdnz 0x210584
  02105b4  fmr 3, 31
  02105b8  ori 4, 1, 0
  02105bc  mtctr 7
  02105c0  lfs 4, 172(4)
  02105c4  fadds 3, 3, 4
  02105c8  addic 4, 4, 16
  02105cc  lfs 4, 4(8)
  02105d0  lfs 5, 8(8)
  02105d4  lfs 6, 12(8)
  02105d8  addic 8, 8, 16
  02105dc  fadds 3, 3, 4
  02105e0  fadds 3, 3, 5
  02105e4  fadds 3, 3, 6
  02105e8  bdnz 0x2105c0
  02105ec  lis 4, 33
  02105f0  addi 4, 4, -664
  02105f4  lfs 4, 36(4)
  02105f8  fadds 3, 3, 4
  02105fc  fmadds 1, 3, 1, 2
  0210600  lis 4, 33
  0210604  lis 5, 114
  0210608  addi 4, 4, -664
  021060c  lis 6, 114
  0210610  lfs 2, 16(4)
  0210614  lfs 3, -3048(5)
  0210618  lfs 4, 20(4)
  021061c  fmuls 2, 3, 2
  0210620  lfs 5, -3052(6)
  0210624  addic 5, 30, 312
  0210628  fmuls 4, 5, 4
  021062c  fmr 3, 2
  0210630  bl 0x10a2e0
  0210634  nop
  0210638  lwz 3, 276(30)
  021063c  cmpwi 3, 2
  0210640  bf 2, 0x210698
  0210644  li 3, 5
  0210648  lbz 4, 83(31)
  021064c  cmpwi 4, 0
  0210650  stb 3, 32(31)
  0210654  bt 2, 0x2106a0
  0210658  lis 3, 33
  021065c  lis 4, 114
  0210660  addi 3, 3, -664
  0210664  li 5, 0
  0210668  lfs 1, 0(3)
  021066c  lfs 2, -3056(4)
  0210670  ori 3, 31, 0
  0210674  li 4, 0
  0210678  fmuls 1, 2, 1
  021067c  fctiwz 1, 1
  0210680  stfd 1, 208(1)
  0210684  lwz 6, 212(1)
  0210688  extsw 6, 6
  021068c  bl 0xfddc0
  0210690  nop
  0210694  b 0x2106a0
  0210698  ori 3, 31, 0
  021069c  bl 0x20ebd8
  02106a0  lbz 3, 112(31)
  02106a4  rlwinm 3, 3, 0, 30, 30
  02106a8  cmpwi 3, 0
  02106ac  bt 2, 0x210a58
  02106b0  lwz 3, 296(30)
  02106b4  cmpwi 3, -1
  02106b8  bt 2, 0x210744
  02106bc  lis 4, 164
  02106c0  slwi 3, 3, 8
  02106c4  lwz 4, -28512(4)
  02106c8  addc 3, 4, 3
  02106cc  clrldi 3, 3, 32
  02106d0  bl 0x21416c
  02106d4  nop
  02106d8  cmpwi 3, 0
  02106dc  bf 2, 0x210744
  02106e0  ori 3, 31, 0
  02106e4  bl 0x20ea80
  02106e8  cmpwi 3, 0
  02106ec  bt 2, 0x210744
  02106f0  li 3, 6
  02106f4  lbz 4, 83(31)
  02106f8  cmpwi 4, 2
  02106fc  stb 3, 32(31)
  0210700  bt 2, 0x210a58
  0210704  lis 3, 33
  0210708  lis 4, 114
  021070c  addi 3, 3, -664
  0210710  li 5, 0
  0210714  lfs 1, 40(3)
  0210718  lfs 2, -3056(4)
  021071c  ori 3, 31, 0
  0210720  fmuls 1, 2, 1
  0210724  li 4, 2
  0210728  fctiwz 1, 1
  021072c  stfd 1, 208(1)
  0210730  lwz 6, 212(1)
  0210734  extsw 6, 6
  0210738  bl 0xfddc0
  021073c  nop
  0210740  b 0x210a58
  0210744  lfs 1, 196(31)
  0210748  lis 3, 119
  021074c  lfs 2, 192(31)
  0210750  fmuls 4, 1, 1
  0210754  lfs 3, 200(31)
  0210758  addic 4, 3, -31680
  021075c  lfs 5, 220(31)
  0210760  lfs 6, -31680(3)
  0210764  lis 3, 119
  0210768  lfs 7, 4(4)
  021076c  lfs 8, 204(31)
  0210770  fmuls 5, 5, 7
  0210774  fmadds 4, 2, 2, 4
  0210778  lfs 9, 8(4)
  021077c  lfs 10, 236(31)
  0210780  lis 5, 114
  0210784  lfs 11, 208(31)
  0210788  lfs 12, 224(31)
  021078c  lfs 13, 12(4)
  0210790  lfs 0, 212(31)
  0210794  lfs 30, 228(31)
  0210798  lfs 29, 216(31)
  021079c  fmadds 5, 8, 6, 5
  02107a0  fmadds 4, 3, 3, 4
  02107a4  lfs 28, 232(31)
  02107a8  stfs 8, 124(1)
  02107ac  fmuls 8, 11, 7
  02107b0  addic 4, 1, 112
  02107b4  fmadds 5, 10, 9, 5
  02107b8  fsqrts 4, 4
  02107bc  fadds 5, 5, 13
  02107c0  fmuls 10, 0, 7
  02107c4  fmuls 7, 29, 7
  02107c8  fmadds 8, 2, 6, 8
  02107cc  stfs 5, 140(1)
  02107d0  lfs 5, -31688(3)
  02107d4  lfs 11, -3052(5)
  02107d8  fmadds 10, 1, 6, 10
  02107dc  fmuls 5, 5, 11
  02107e0  fmadds 6, 3, 6, 7
  02107e4  fmadds 7, 12, 9, 8
  02107e8  lfs 11, 16(31)
  02107ec  lfs 13, 20(31)
  02107f0  lfs 0, 24(31)
  02107f4  addic 5, 1, 128
  02107f8  ori 3, 31, 0
  02107fc  fmadds 8, 30, 9, 10
  0210800  fmadds 6, 28, 9, 6
  0210804  fadds 7, 7, 11
  0210808  fadds 8, 8, 13
  021080c  fadds 6, 6, 0
  0210810  fdivs 5, 5, 4
  0210814  stfs 7, 128(1)
  0210818  stfs 8, 132(1)
  021081c  stfs 6, 136(1)
  0210820  fsub 10, 31, 4
  0210824  fsub 12, 31, 4
  0210828  fsub 30, 31, 4
  021082c  fsub 29, 4, 31
  0210830  fsub 9, 4, 31
  0210834  fsub 4, 4, 31
  0210838  fmuls 2, 2, 5
  021083c  fmuls 1, 1, 5
  0210840  fmuls 3, 3, 5
  0210844  fsel 5, 10, 31, 2
  0210848  fsel 6, 12, 31, 1
  021084c  fsel 7, 30, 31, 3
  0210850  fsel 2, 29, 5, 2
  0210854  fsel 1, 9, 6, 1
  0210858  fsel 3, 4, 7, 3
  021085c  stfs 2, 112(1)
  0210860  stfs 1, 116(1)
  0210864  stfs 3, 120(1)
  0210868  bl 0x3a01e0
  021086c  nop
  0210870  b 0x210a58
  0210874  addic 3, 30, 344
  0210878  bl 0x4fff60
  021087c  nop
  0210880  lwz 3, 276(30)
  0210884  cmpwi 3, 2
  0210888  bt 2, 0x2108e0
  021088c  li 3, 7
  0210890  lbz 4, 83(31)
  0210894  cmpwi 4, 4
  0210898  stb 3, 32(31)
  021089c  bt 2, 0x210a58
  02108a0  lis 3, 33
  02108a4  lis 4, 114
  02108a8  addi 3, 3, -664
  02108ac  li 5, 0
  02108b0  lfs 1, 0(3)
  02108b4  lfs 2, -3056(4)
  02108b8  ori 3, 31, 0
  02108bc  li 4, 4
  02108c0  fmuls 1, 2, 1
  02108c4  fctiwz 1, 1
  02108c8  stfd 1, 208(1)
  02108cc  lwz 6, 212(1)
  02108d0  extsw 6, 6
  02108d4  bl 0xfddc0
  02108d8  nop
  02108dc  b 0x210a58
  02108e0  lwz 3, 344(30)
  02108e4  cmpwi 3, 0
  02108e8  bf 2, 0x210a58
  02108ec  li 3, 4
  02108f0  lbz 4, 83(31)
  02108f4  cmpwi 4, 2
  02108f8  stb 3, 32(31)
  02108fc  bt 2, 0x21093c
  0210900  lis 3, 33
  0210904  lis 4, 114
  0210908  addi 3, 3, -664
  021090c  li 5, 0
  0210910  lfs 1, 0(3)
  0210914  lfs 2, -3056(4)
  0210918  ori 3, 31, 0
  021091c  li 4, 2
  0210920  fmuls 1, 2, 1
  0210924  fctiwz 1, 1
  0210928  stfd 1, 208(1)
  021092c  lwz 6, 212(1)
  0210930  extsw 6, 6
  0210934  bl 0xfddc0
  0210938  nop
  021093c  lwz 3, 296(30)
  0210940  cmpwi 3, -1
  0210944  bt 2, 0x210a58
  0210948  lis 5, 164
  021094c  slwi 3, 3, 8
  0210950  li 4, 60
  0210954  lwz 5, -28512(5)
  0210958  addc 3, 5, 3
  021095c  clrldi 3, 3, 32
  0210960  bl 0x213dd8
  0210964  nop
  0210968  b 0x210a58
  021096c  ori 3, 31, 0
  0210970  addic 4, 30, 112
  0210974  bl 0x10b030
  0210978  nop
  021097c  rlwinm 4, 3, 0, 25, 25
  0210980  cmpwi 4, 0
  0210984  bt 2, 0x2109e4
  0210988  li 3, 7
  021098c  li 4, 1
  0210990  lbz 5, 83(31)
  0210994  cmpwi 5, 2
  0210998  stb 3, 32(31)
  021099c  stb 4, 188(31)
  02109a0  bt 2, 0x210c10
  02109a4  lis 3, 33
  02109a8  lis 4, 114
  02109ac  addi 3, 3, -664
  02109b0  li 5, 0
  02109b4  lfs 1, 0(3)
  02109b8  lfs 2, -3056(4)
  02109bc  ori 3, 31, 0
  02109c0  fmuls 1, 2, 1
  02109c4  li 4, 2
  02109c8  fctiwz 1, 1
  02109cc  stfd 1, 208(1)
  02109d0  lwz 6, 212(1)
  02109d4  extsw 6, 6
  02109d8  bl 0xfddc0
  02109dc  nop
  02109e0  b 0x210c10
  02109e4  li 4, 288
  02109e8  and 3, 3, 4
  02109ec  cmpwi 3, 0
  02109f0  bt 2, 0x210a58
  02109f4  ori 3, 31, 0
  02109f8  bl 0xefb38
  02109fc  nop
  0210a00  b 0x210c10
  0210a04  addic 4, 30, 112
  0210a08  ori 3, 31, 0
  0210a0c  bl 0x10b030
  0210a10  nop
  0210a14  li 4, 352
  0210a18  and 3, 3, 4
  0210a1c  cmpwi 3, 0
  0210a20  bt 2, 0x210a58
  0210a24  lis 3, 33
  0210a28  addic 4, 31, 16
  0210a2c  addi 5, 3, -664
  0210a30  ori 3, 31, 0
  0210a34  li 6, -1
  0210a38  lfs 1, 4(5)
  0210a3c  lfs 2, 44(5)
  0210a40  bl 0x10fb28
  0210a44  nop
  0210a48  ori 3, 31, 0
  0210a4c  bl 0xefb38
  0210a50  nop
  0210a54  b 0x210c10
  0210a58  lis 3, 151
  0210a5c  addic 3, 3, -25376
  0210a60  lbz 4, 8356(3)
  0210a64  cmpwi 4, 0
  0210a68  bt 2, 0x210c10
  0210a6c  lwz 4, 344(30)
  0210a70  cmpwi 1, 4, 0
  0210a74  bt 6, 0x210a94
  0210a78  lwz 4, 276(30)
  0210a7c  cmpwi 4, 2
  0210a80  bt 2, 0x210a94
  0210a84  lis 4, 241
  0210a88  li 5, 2
  0210a8c  stw 5, -29088(4)
  0210a90  b 0x210ac0
  0210a94  lis 4, 241
  0210a98  lwz 4, -29088(4)
  0210a9c  cmpwi 4, 2
  0210aa0  bt 2, 0x210ac0
  0210aa4  lwz 4, 348(30)
  0210aa8  cmpwi 4, 0
  0210aac  bf 2, 0x210ab4
  0210ab0  bt 6, 0x210ac0
  0210ab4  lis 4, 241
  0210ab8  li 5, 1
  0210abc  stw 5, -29088(4)
  0210ac0  lis 4, 241
  0210ac4  lis 5, 161
  0210ac8  lwz 6, -29084(4)
  0210acc  lwz 4, 1808(5)
  0210ad0  cmpw 6, 4
  0210ad4  bt 2, 0x210c10
  0210ad8  lis 5, 241
  0210adc  lfs 1, 128(3)
  0210ae0  lis 6, 33
  0210ae4  addi 6, 6, -664
  0210ae8  stw 4, -29084(5)
  0210aec  lfs 2, 132(3)
  0210af0  stfs 1, 144(1)
  0210af4  lfs 1, 136(3)
  0210af8  stfs 2, 148(1)
  0210afc  lfs 2, 140(3)
  0210b00  stfs 1, 152(1)
  0210b04  stfs 2, 156(1)
  0210b08  lis 3, 241
  0210b0c  lfs 2, 48(6)
  0210b10  fadds 1, 1, 2
  0210b14  lwz 3, -29088(3)
  0210b18  cmpwi 3, 0
  0210b1c  cmpwi 1, 3, -1
  0210b20  cmpwi 6, 3, 1
  0210b24  cmpwi 7, 3, 2
  0210b28  stfs 1, 152(1)
  0210b2c  lfs 1, 52(6)
  0210b30  bt 1, 0x210b3c
  0210b34  bf 5, 0x210c04
  0210b38  b 0x210b48
  0210b3c  bf 25, 0x210b7c
  0210b40  bf 29, 0x210bb0
  0210b44  b 0x210c04
  0210b48  lis 4, -32768
  0210b4c  addic 3, 1, 144
  0210b50  ori 4, 4, 65280
  0210b54  li 9, 2
  0210b58  clrldi 6, 4, 32
  0210b5c  ori 4, 31, 0
  0210b60  li 10, 68
  0210b64  li 5, 0
  0210b68  li 8, 127
  0210b6c  bl 0x12d0e8
  0210b70  nop
  0210b74  ori 31, 3, 0
  0210b78  b 0x210be0
  0210b7c  lis 3, -32768
  0210b80  ori 4, 31, 0
  0210b84  ori 3, 3, 65535
  0210b88  li 8, 127
  0210b8c  clrldi 6, 3, 32
  0210b90  addic 3, 1, 144
  0210b94  li 9, 2
  0210b98  li 10, 68
  0210b9c  li 5, 0
  0210ba0  bl 0x12d0e8
  0210ba4  nop
  0210ba8  ori 31, 3, 0
  0210bac  b 0x210be0
  0210bb0  lis 4, -32768
  0210bb4  addic 3, 1, 144
  0210bb8  ori 4, 4, 255
  0210bbc  li 9, 2
  0210bc0  clrldi 6, 4, 32
  0210bc4  ori 4, 31, 0
  0210bc8  li 10, 68
  0210bcc  li 5, 0
  0210bd0  li 8, 127
  0210bd4  bl 0x12d0e8
  0210bd8  nop
  0210bdc  ori 31, 3, 0
  0210be0  cmpwi 31, 0
  0210be4  bt 2, 0x210c04
  0210be8  lis 3, 33
  0210bec  addi 3, 3, -664
  0210bf0  lfs 1, 56(3)
  0210bf4  bl 0x502758
  0210bf8  nop
  0210bfc  addic 3, 3, 64
  0210c00  stb 3, 9(31)
  0210c04  lis 3, 241
  0210c08  li 4, 0
  0210c0c  stw 4, -29088(3)
  0210c10  ld 0, 304(1)
  0210c14  mtlr 0
  0210c18  lfd 28, 256(1)
  0210c1c  lfd 29, 264(1)
  0210c20  lfd 30, 272(1)
  0210c24  lfd 31, 280(1)
  0210c28  ld 29, 232(1)
  0210c2c  ld 30, 240(1)
  0210c30  ld 31, 248(1)
  0210c34  addi 1, 1, 288
  0210c38  blr
