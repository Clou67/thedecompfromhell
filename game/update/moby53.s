# game/update/moby53.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_53:   # 0x3aba98, 0x1e8 bytes
  03aba98  stdu 1, -144(1)
  03aba9c  mflr 0
  03abaa0  std 0, 160(1)
  03abaa4  std 31, 136(1)
  03abaa8  ori 31, 3, 0
  03abaac  lbz 4, 32(31)
  03abab0  lwz 3, 120(31)
  03abab4  cmpwi 4, 0
  03abab8  cmpwi 1, 4, 1
  03ababc  cmpwi 6, 4, -1
  03abac0  bt 1, 0x3abacc
  03abac4  bf 25, 0x3abb24
  03abac8  b 0x3abad4
  03abacc  bf 5, 0x3abb04
  03abad0  b 0x3abb24
  03abad4  lis 5, 59
  03abad8  li 4, 1
  03abadc  addi 5, 5, -17792
  03abae0  stb 4, 32(31)
  03abae4  lfs 1, 0(3)
  03abae8  lis 4, 114
  03abaec  lfs 2, 0(5)
  03abaf0  fmuls 1, 1, 2
  03abaf4  lfs 3, -3052(4)
  03abaf8  fmuls 1, 1, 3
  03abafc  stfs 1, 4(3)
  03abb00  b 0x3abb24
  03abb04  lis 4, 132
  03abb08  lfs 1, 64(31)
  03abb0c  lfs 2, 4(3)
  03abb10  lfs 3, 14232(4)
  03abb14  fmuls 2, 2, 3
  03abb18  bl 0x502578
  03abb1c  nop
  03abb20  stfs 1, 64(31)
  03abb24  lis 3, 151
  03abb28  addic 3, 3, -25376
  03abb2c  lwz 4, 572(3)
  03abb30  cmpw 4, 31
  03abb34  bt 2, 0x3abb44
  03abb38  lwz 4, 576(3)
  03abb3c  cmpw 4, 31
  03abb40  bf 2, 0x3abc6c
  03abb44  lfs 1, 132(3)
  03abb48  lfs 2, 20(31)
  03abb4c  lfs 4, 128(3)
  03abb50  fsubs 1, 1, 2
  03abb54  lfs 2, 16(31)
  03abb58  lis 4, 59
  03abb5c  lfs 3, 196(31)
  03abb60  fsubs 5, 4, 2
  03abb64  lfs 2, 136(3)
  03abb68  addi 4, 4, -17792
  03abb6c  lfs 6, 24(31)
  03abb70  lfs 4, 192(31)
  03abb74  fsubs 6, 2, 6
  03abb78  lfs 2, 200(31)
  03abb7c  fmuls 7, 1, 3
  03abb80  lfs 1, 4(4)
  03abb84  fmadds 5, 5, 4, 7
  03abb88  fmadds 5, 6, 2, 5
  03abb8c  fcmpu 0, 5, 1
  03abb90  cror 6, 0, 2
  03abb94  bt 6, 0x3abbe8
  03abb98  fmuls 5, 3, 3
  03abb9c  fmadds 5, 4, 4, 5
  03abba0  fmadds 5, 2, 2, 5
  03abba4  fsqrts 5, 5
  03abba8  fcmpu 0, 5, 1
  03abbac  bf 2, 0x3abbc0
  03abbb0  fmr 3, 1
  03abbb4  lfs 4, 204(31)
  03abbb8  fmr 2, 3
  03abbbc  b 0x3abbe4
  03abbc0  lis 4, 59
  03abbc4  addi 4, 4, -17792
  03abbc8  fmr 6, 2
  03abbcc  lfs 1, 8(4)
  03abbd0  fdivs 5, 1, 5
  03abbd4  fmuls 1, 4, 5
  03abbd8  fmuls 2, 3, 5
  03abbdc  lfs 4, 204(31)
  03abbe0  fmuls 3, 6, 5
  03abbe4  b 0x3abc34
  03abbe8  fmuls 5, 3, 3
  03abbec  fmadds 5, 4, 4, 5
  03abbf0  fmadds 5, 2, 2, 5
  03abbf4  fsqrts 5, 5
  03abbf8  fcmpu 0, 5, 1
  03abbfc  bf 2, 0x3abc10
  03abc00  fmr 3, 1
  03abc04  lfs 4, 204(31)
  03abc08  fmr 2, 3
  03abc0c  b 0x3abc34
  03abc10  lis 4, 59
  03abc14  addi 4, 4, -17792
  03abc18  fmr 6, 2
  03abc1c  lfs 1, 12(4)
  03abc20  fdivs 5, 1, 5
  03abc24  fmuls 1, 4, 5
  03abc28  fmuls 2, 3, 5
  03abc2c  lfs 4, 204(31)
  03abc30  fmuls 3, 6, 5
  03abc34  lis 5, 59
  03abc38  stfs 1, 112(1)
  03abc3c  stfs 2, 116(1)
  03abc40  ori 4, 31, 0
  03abc44  addi 6, 5, -17792
  03abc48  stfs 3, 120(1)
  03abc4c  stfs 4, 124(1)
  03abc50  li 5, 1
  03abc54  lwz 3, 8320(3)
  03abc58  addic 7, 31, 16
  03abc5c  addic 8, 1, 112
  03abc60  lfs 1, 16(6)
  03abc64  bl 0x105c08
  03abc68  nop
  03abc6c  ld 0, 160(1)
  03abc70  mtlr 0
  03abc74  ld 31, 136(1)
  03abc78  addi 1, 1, 144
  03abc7c  blr
