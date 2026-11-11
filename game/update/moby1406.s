# game/update/moby1406.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1406_0026e9a0:   # 0x26e9a0, 0x488 bytes
  026e9a0  stdu 1, -304(1)
  026e9a4  mflr 0
  026e9a8  std 0, 320(1)
  026e9ac  stfd 24, 240(1)
  026e9b0  stfd 25, 248(1)
  026e9b4  stfd 26, 256(1)
  026e9b8  stfd 27, 264(1)
  026e9bc  stfd 28, 272(1)
  026e9c0  stfd 29, 280(1)
  026e9c4  stfd 30, 288(1)
  026e9c8  stfd 31, 296(1)
  026e9cc  std 31, 232(1)
  026e9d0  ori 31, 3, 0
  026e9d4  std 29, 216(1)
  026e9d8  lis 3, 161
  026e9dc  lis 4, 39
  026e9e0  std 30, 224(1)
  026e9e4  addi 29, 4, -5768
  026e9e8  lwz 30, 120(31)
  026e9ec  lwz 3, 1808(3)
  026e9f0  std 28, 208(1)
  026e9f4  std 27, 200(1)
  026e9f8  std 26, 192(1)
  026e9fc  std 25, 184(1)
  026ea00  std 24, 176(1)
  026ea04  std 23, 168(1)
  026ea08  std 22, 160(1)
  026ea0c  std 21, 152(1)
  026ea10  std 20, 144(1)
  026ea14  extsw 3, 3
  026ea18  bl 0x502730
  026ea1c  nop
  026ea20  lis 3, 122
  026ea24  lis 28, 114
  026ea28  lis 4, 122
  026ea2c  lfs 2, -2632(3)
  026ea30  lfs 3, -3052(28)
  026ea34  lwz 3, -2652(4)
  026ea38  fmuls 31, 2, 3
  026ea3c  extsw 3, 3
  026ea40  fmuls 31, 31, 1
  026ea44  bl 0x685c4
  026ea48  nop
  026ea4c  ori 4, 3, 0
  026ea50  li 3, 24
  026ea54  bl 0x174f80
  026ea58  nop
  026ea5c  lis 7, 122
  026ea60  li 3, 0
  026ea64  li 4, 1
  026ea68  li 5, 0
  026ea6c  li 6, 1
  026ea70  lwz 7, -2656(7)
  026ea74  bl 0x502ea8
  026ea78  nop
  026ea7c  ori 4, 3, 0
  026ea80  li 3, 3
  026ea84  bl 0x174f80
  026ea88  nop
  026ea8c  li 3, 0
  026ea90  li 4, 0
  026ea94  li 8, 0
  026ea98  li 5, 0
  026ea9c  li 6, 0
  026eaa0  li 7, 0
  026eaa4  bl 0x502f08
  026eaa8  nop
  026eaac  ori 4, 3, 0
  026eab0  li 3, 6
  026eab4  bl 0x174f80
  026eab8  nop
  026eabc  lis 9, 0
  026eac0  li 3, 0
  026eac4  li 4, 0
  026eac8  ori 9, 9, 65424
  026eacc  li 5, 1
  026ead0  li 6, 1
  026ead4  li 7, 1
  026ead8  li 8, 0
  026eadc  bl 0x502fd4
  026eae0  nop
  026eae4  ori 4, 3, 0
  026eae8  li 3, 26
  026eaec  bl 0x174f80
  026eaf0  nop
  026eaf4  lis 3, 122
  026eaf8  lfs 1, 4(30)
  026eafc  lis 4, 114
  026eb00  stfs 1, 0(30)
  026eb04  lfs 2, 0(29)
  026eb08  lfs 3, -2640(3)
  026eb0c  lfs 4, -3056(4)
  026eb10  fmuls 3, 3, 4
  026eb14  lfs 4, 4(29)
  026eb18  fdivs 2, 2, 3
  026eb1c  lfs 3, -3052(28)
  026eb20  fmuls 2, 2, 4
  026eb24  fmuls 2, 2, 3
  026eb28  bl 0x502578
  026eb2c  nop
  026eb30  ori 3, 31, 0
  026eb34  stfs 1, 4(30)
  026eb38  addic 4, 1, 112
  026eb3c  addic 5, 1, 116
  026eb40  addic 6, 1, 120
  026eb44  bl 0xf1ef0
  026eb48  nop
  026eb4c  lis 3, 122
  026eb50  lwz 4, 120(1)
  026eb54  lis 27, 122
  026eb58  lwz 5, 116(1)
  026eb5c  li 28, 0
  026eb60  slwi 4, 4, 16
  026eb64  slwi 5, 5, 8
  026eb68  lwz 3, -2648(3)
  026eb6c  ori 26, 28, 0
  026eb70  lwz 6, 112(1)
  026eb74  slwi 3, 3, 24
  026eb78  or 29, 5, 6
  026eb7c  lwz 7, -4480(27)
  026eb80  or 3, 3, 4
  026eb84  or 29, 3, 29
  026eb88  ori 3, 7, 0
  026eb8c  cmpwi 3, 0
  026eb90  bf 1, 0x26ecbc
  026eb94  lis 3, 39
  026eb98  lis 25, 251
  026eb9c  addi 3, 3, -5768
  026eba0  lis 21, 122
  026eba4  addic 25, 25, -25908
  026eba8  lis 22, 251
  026ebac  addic 21, 21, -4448
  026ebb0  lfs 30, 8(3)
  026ebb4  addic 24, 25, 4
  026ebb8  lfs 29, 12(3)
  026ebbc  addic 23, 25, 8
  026ebc0  lfs 28, 16(3)
  026ebc4  addic 22, 22, -24128
  026ebc8  lfs 27, 20(3)
  026ebcc  lfs 26, 24(3)
  026ebd0  lfs 25, 28(3)
  026ebd4  lfs 24, 32(3)
  026ebd8  lfs 1, 4(21)
  026ebdc  lfs 3, 0(21)
  026ebe0  fmuls 1, 1, 1
  026ebe4  lis 20, 122
  026ebe8  lfs 2, -2644(20)
  026ebec  fmadds 1, 3, 3, 1
  026ebf0  fsqrts 1, 1
  026ebf4  bl 0x502798
  026ebf8  nop
  026ebfc  lfs 2, -2644(20)
  026ec00  fmuls 1, 1, 30
  026ec04  fdivs 1, 1, 2
  026ec08  bl 0x502648
  026ec0c  nop
  026ec10  lfs 2, 4(30)
  026ec14  bl 0x502578
  026ec18  nop
  026ec1c  lfs 5, 0(21)
  026ec20  lfs 6, 16(31)
  026ec24  lis 3, 122
  026ec28  addic 28, 28, 1
  026ec2c  fsubs 2, 29, 1
  026ec30  fsubs 3, 28, 1
  026ec34  fsub 4, 1, 2
  026ec38  fsel 1, 4, 2, 1
  026ec3c  fadds 4, 5, 6
  026ec40  lfs 2, 4(21)
  026ec44  lfs 5, 8(21)
  026ec48  addic 21, 21, 12
  026ec4c  fsub 6, 3, 1
  026ec50  stfs 4, 0(25)
  026ec54  addic 25, 25, 12
  026ec58  fsel 1, 6, 3, 1
  026ec5c  lfs 3, 20(31)
  026ec60  fadds 2, 2, 3
  026ec64  lfs 3, -2636(3)
  026ec68  lwz 3, -4480(27)
  026ec6c  cmpw 28, 3
  026ec70  fmuls 4, 1, 1
  026ec74  stfs 2, 0(24)
  026ec78  lfs 2, 24(31)
  026ec7c  addic 24, 24, 12
  026ec80  fadds 2, 5, 2
  026ec84  fmuls 6, 4, 1
  026ec88  stw 29, 0(22)
  026ec8c  addic 22, 22, 4
  026ec90  fmuls 7, 4, 6
  026ec94  fmadds 1, 6, 27, 1
  026ec98  fmuls 5, 4, 7
  026ec9c  fmadds 1, 7, 26, 1
  026eca0  fmuls 4, 4, 5
  026eca4  fmadds 1, 5, 25, 1
  026eca8  fmadds 1, 4, 24, 1
  026ecac  fmadds 1, 3, 1, 2
  026ecb0  stfs 1, 0(23)
  026ecb4  addic 23, 23, 12
  026ecb8  bt 0, 0x26ebd8
  026ecbc  lis 4, 39
  026ecc0  ori 31, 26, 0
  026ecc4  addi 4, 4, -5768
  026ecc8  ori 23, 1, 0
  026eccc  lfs 30, 36(4)
  026ecd0  cmpwi 3, 0
  026ecd4  ori 30, 26, 0
  026ecd8  bf 1, 0x26ed80
  026ecdc  lis 29, 122
  026ece0  lis 28, 251
  026ece4  lis 25, 122
  026ece8  lis 24, 251
  026ecec  addic 29, 29, -3380
  026ecf0  addic 28, 28, -24840
  026ecf4  addic 25, 25, -3376
  026ecf8  addic 24, 24, -24836
  026ecfc  lis 3, 16256
  026ed00  lis 4, -16608
  026ed04  fmr 2, 30
  026ed08  lis 5, 16160
  026ed0c  ori 4, 4, 55676
  026ed10  stw 3, 124(1)
  026ed14  ori 5, 5, 55676
  026ed18  stw 3, 132(1)
  026ed1c  stw 4, 128(1)
  026ed20  lfs 1, 124(23)
  026ed24  stw 5, 136(1)
  026ed28  fmuls 1, 1, 31
  026ed2c  bl 0x502798
  026ed30  nop
  026ed34  lfs 2, 0(29)
  026ed38  fadds 3, 2, 1
  026ed3c  lfs 1, 128(23)
  026ed40  fmr 2, 30
  026ed44  fmuls 1, 1, 31
  026ed48  stfs 3, 0(28)
  026ed4c  bl 0x502798
  026ed50  nop
  026ed54  lfs 2, 0(25)
  026ed58  addic 30, 30, 1
  026ed5c  lwz 3, -4480(27)
  026ed60  fadds 1, 2, 1
  026ed64  addic 29, 29, 8
  026ed68  cmpw 30, 3
  026ed6c  addic 28, 28, 8
  026ed70  addic 25, 25, 8
  026ed74  stfs 1, 0(24)
  026ed78  addic 24, 24, 8
  026ed7c  bt 0, 0x26ecfc
  026ed80  bl 0x71170
  026ed84  nop
  026ed88  lis 4, 122
  026ed8c  lwz 3, -4480(27)
  026ed90  lis 5, 122
  026ed94  lis 6, 122
  026ed98  extsw 3, 3
  026ed9c  li 7, 9
  026eda0  lwz 4, -2668(4)
  026eda4  lwz 5, -2660(5)
  026eda8  lwz 6, -2664(6)
  026edac  bl 0x74604
  026edb0  nop
  026edb4  addic 31, 31, 1
  026edb8  lwz 3, -4480(27)
  026edbc  addic 23, 23, 8
  026edc0  cmpwi 31, 2
  026edc4  bt 0, 0x26ecd0
  026edc8  ld 0, 320(1)
  026edcc  mtlr 0
  026edd0  lfd 24, 240(1)
  026edd4  lfd 25, 248(1)
  026edd8  lfd 26, 256(1)
  026eddc  lfd 27, 264(1)
  026ede0  lfd 28, 272(1)
  026ede4  lfd 29, 280(1)
  026ede8  lfd 30, 288(1)
  026edec  lfd 31, 296(1)
  026edf0  ld 20, 144(1)
  026edf4  ld 21, 152(1)
  026edf8  ld 22, 160(1)
  026edfc  ld 23, 168(1)
  026ee00  ld 24, 176(1)
  026ee04  ld 25, 184(1)
  026ee08  ld 26, 192(1)
  026ee0c  ld 27, 200(1)
  026ee10  ld 28, 208(1)
  026ee14  ld 29, 216(1)
  026ee18  ld 30, 224(1)
  026ee1c  ld 31, 232(1)
  026ee20  addi 1, 1, 304
  026ee24  blr

UpdateMoby_1406:   # 0x26ee28, 0x80 bytes
  026ee28  stdu 1, -128(1)
  026ee2c  mflr 0
  026ee30  std 0, 144(1)
  026ee34  std 31, 120(1)
  026ee38  ori 31, 3, 0
  026ee3c  lbz 3, 32(3)
  026ee40  cmpwi 3, 0
  026ee44  bf 2, 0x26ee6c
  026ee48  ori 3, 31, 0
  026ee4c  li 4, 64
  026ee50  li 5, 64
  026ee54  li 6, 64
  026ee58  bl 0xf1ec8
  026ee5c  nop
  026ee60  li 3, 1
  026ee64  stb 3, 32(31)
  026ee68  b 0x26ee94
  026ee6c  lis 3, 113
  026ee70  ori 4, 31, 0
  026ee74  addic 3, 3, -23616
  026ee78  bl 0x6d7e0
  026ee7c  nop
  026ee80  lhz 4, 52(31)
  026ee84  li 3, 0
  026ee88  ori 4, 4, 1
  026ee8c  sth 3, 50(31)
  026ee90  sth 4, 52(31)
  026ee94  ld 0, 144(1)
  026ee98  mtlr 0
  026ee9c  ld 31, 120(1)
  026eea0  addi 1, 1, 128
  026eea4  blr
