# game/update/moby481.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_0039e8f4:   # 0x39e8f4, 0x54 bytes
  039e8f4  lbz 5, 32(3)
  039e8f8  cmpwi 5, 9
  039e8fc  bf 2, 0x39e944
  039e900  lfs 1, 0(4)
  039e904  li 5, 1
  039e908  stfs 1, 16(3)
  039e90c  lfs 1, 4(4)
  039e910  stfs 1, 20(3)
  039e914  lfs 1, 8(4)
  039e918  lhz 6, 52(3)
  039e91c  stfs 1, 24(3)
  039e920  lfs 1, 12(4)
  039e924  lwz 4, 36(3)
  039e928  rlwinm 6, 6, 0, 0, 30
  039e92c  stb 5, 32(3)
  039e930  stfs 1, 28(3)
  039e934  stb 5, 49(3)
  039e938  sth 6, 52(3)
  039e93c  lwz 4, 16(4)
  039e940  stw 4, 148(3)
  039e944  blr

M481_0039e948:   # 0x39e948, 0x14 bytes
  039e948  lis 3, 132
  039e94c  lis 4, 1
  039e950  addic 3, 3, 12360
  039e954  stw 4, 72(3)
  039e958  blr

UpdateMoby_481:   # 0x39e9a8, 0x328 bytes
  039e9a8  stdu 1, -256(1)
  039e9ac  mflr 0
  039e9b0  std 0, 272(1)
  039e9b4  stfd 23, 184(1)
  039e9b8  stfd 24, 192(1)
  039e9bc  stfd 25, 200(1)
  039e9c0  stfd 26, 208(1)
  039e9c4  stfd 27, 216(1)
  039e9c8  stfd 28, 224(1)
  039e9cc  stfd 29, 232(1)
  039e9d0  stfd 30, 240(1)
  039e9d4  stfd 31, 248(1)
  039e9d8  std 30, 168(1)
  039e9dc  lwz 30, 120(3)
  039e9e0  std 31, 176(1)
  039e9e4  lfs 26, 16(3)
  039e9e8  ori 31, 3, 0
  039e9ec  lfs 27, 20(3)
  039e9f0  cmpwi 30, 0
  039e9f4  std 29, 160(1)
  039e9f8  std 28, 152(1)
  039e9fc  std 27, 144(1)
  039ea00  std 26, 136(1)
  039ea04  std 25, 128(1)
  039ea08  lfs 28, 24(3)
  039ea0c  bf 2, 0x39ea20
  039ea10  ori 3, 31, 0
  039ea14  bl 0xefb38
  039ea18  nop
  039ea1c  b 0x39ec80
  039ea20  lbz 3, 32(31)
  039ea24  cmpwi 3, 0
  039ea28  cmpwi 1, 3, 1
  039ea2c  cmpwi 6, 3, -1
  039ea30  bt 1, 0x39ea3c
  039ea34  bf 25, 0x39ec3c
  039ea38  b 0x39ea44
  039ea3c  bf 5, 0x39eab0
  039ea40  b 0x39ec3c
  039ea44  lis 3, 58
  039ea48  addi 29, 3, -5792
  039ea4c  lfs 1, 0(29)
  039ea50  lfs 2, 4(29)
  039ea54  bl 0xfcbe8
  039ea58  nop
  039ea5c  li 3, 1
  039ea60  stfs 1, 88(31)
  039ea64  lfs 1, 24(31)
  039ea68  li 4, 13
  039ea6c  li 28, 0
  039ea70  stb 3, 32(31)
  039ea74  lfs 2, 8(29)
  039ea78  li 3, 255
  039ea7c  ori 29, 30, 0
  039ea80  fadds 1, 1, 2
  039ea84  stfs 1, 544(30)
  039ea88  stb 3, 48(31)
  039ea8c  sth 4, 62(30)
  039ea90  bl 0xfcc68
  039ea94  nop
  039ea98  addic 28, 28, 1
  039ea9c  stfs 1, 548(29)
  039eaa0  cmpwi 28, 3
  039eaa4  addic 29, 29, 4
  039eaa8  bt 0, 0x39ea90
  039eaac  b 0x39ec3c
  039eab0  ori 3, 31, 0
  039eab4  bl 0xefe40
  039eab8  nop
  039eabc  lis 3, 58
  039eac0  addi 25, 3, -5792
  039eac4  lfs 2, 12(25)
  039eac8  lfs 3, 16(25)
  039eacc  fmuls 1, 1, 2
  039ead0  fmuls 1, 1, 3
  039ead4  bl 0x502648
  039ead8  nop
  039eadc  lfs 2, 20(25)
  039eae0  lfs 3, 24(25)
  039eae4  fadds 1, 1, 2
  039eae8  lfs 4, 28(25)
  039eaec  li 26, 0
  039eaf0  addic 27, 30, 548
  039eaf4  addic 28, 30, 264
  039eaf8  addic 29, 30, 160
  039eafc  fsubs 2, 3, 1
  039eb00  fsubs 3, 4, 1
  039eb04  lfs 4, 32(25)
  039eb08  fsub 5, 1, 2
  039eb0c  fsel 1, 5, 2, 1
  039eb10  lfs 2, 36(25)
  039eb14  fsub 5, 3, 1
  039eb18  fsel 1, 5, 3, 1
  039eb1c  lfs 3, 40(25)
  039eb20  lfs 23, 44(25)
  039eb24  lfs 24, 48(25)
  039eb28  lfs 25, 52(25)
  039eb2c  lfs 29, 56(25)
  039eb30  lfs 30, 60(25)
  039eb34  lfs 31, 64(25)
  039eb38  fmuls 6, 1, 1
  039eb3c  fmuls 5, 6, 1
  039eb40  fmuls 7, 6, 5
  039eb44  fmadds 1, 5, 4, 1
  039eb48  fmuls 4, 6, 7
  039eb4c  fmadds 1, 7, 2, 1
  039eb50  fmuls 2, 6, 4
  039eb54  fmadds 1, 4, 3, 1
  039eb58  fmadds 23, 2, 23, 1
  039eb5c  lis 3, 132
  039eb60  slwi 4, 26, 2
  039eb64  lis 5, 114
  039eb68  addc 4, 4, 27
  039eb6c  lfs 1, 12480(3)
  039eb70  clrldi 25, 4, 32
  039eb74  fmuls 2, 1, 29
  039eb78  lfs 3, -3052(5)
  039eb7c  lfs 1, 0(25)
  039eb80  fmuls 2, 2, 3
  039eb84  bl 0x502578
  039eb88  nop
  039eb8c  slwi 3, 26, 7
  039eb90  stfs 1, 0(25)
  039eb94  lis 6, 114
  039eb98  addc 4, 3, 28
  039eb9c  ori 5, 26, 0
  039eba0  clrldi 7, 4, 32
  039eba4  addc 4, 3, 29
  039eba8  ori 3, 31, 0
  039ebac  clrldi 4, 4, 32
  039ebb0  stfs 1, 0(7)
  039ebb4  lfs 2, -3060(6)
  039ebb8  fmuls 1, 2, 30
  039ebbc  fmuls 2, 2, 31
  039ebc0  bl 0x1167c8
  039ebc4  nop
  039ebc8  addic 26, 26, 1
  039ebcc  extsw 26, 26
  039ebd0  cmpwi 26, 3
  039ebd4  bt 0, 0x39eb5c
  039ebd8  lwz 3, 560(30)
  039ebdc  cmpwi 3, -1
  039ebe0  bt 2, 0x39ec20
  039ebe4  lis 4, 164
  039ebe8  slwi 3, 3, 8
  039ebec  lwz 4, -28512(4)
  039ebf0  addc 3, 4, 3
  039ebf4  clrldi 3, 3, 32
  039ebf8  lhz 4, 166(3)
  039ebfc  cmpwi 4, 280
  039ec00  bf 2, 0x39ec2c
  039ec04  lis 4, 58
  039ec08  lwz 3, 120(3)
  039ec0c  addi 4, 4, -5792
  039ec10  lfs 25, 8(4)
  039ec14  lfs 1, 0(3)
  039ec18  fmuls 25, 1, 25
  039ec1c  b 0x39ec2c
  039ec20  lis 3, 58
  039ec24  addi 3, 3, -5792
  039ec28  lfs 25, 8(3)
  039ec2c  lfs 1, 544(30)
  039ec30  fmadds 1, 23, 24, 1
  039ec34  fsubs 1, 1, 25
  039ec38  stfs 1, 24(31)
  039ec3c  lfs 1, 16(31)
  039ec40  addic 5, 31, 64
  039ec44  lfs 2, 20(31)
  039ec48  addic 3, 30, 96
  039ec4c  fsubs 1, 1, 26
  039ec50  lfs 3, 24(31)
  039ec54  fsubs 2, 2, 27
  039ec58  lfs 4, 28(31)
  039ec5c  fsubs 3, 3, 28
  039ec60  addic 4, 1, 112
  039ec64  stfs 4, 124(1)
  039ec68  ori 6, 5, 0
  039ec6c  stfs 1, 112(1)
  039ec70  stfs 2, 116(1)
  039ec74  stfs 3, 120(1)
  039ec78  bl 0x112900
  039ec7c  nop
  039ec80  ld 0, 272(1)
  039ec84  mtlr 0
  039ec88  lfd 23, 184(1)
  039ec8c  lfd 24, 192(1)
  039ec90  lfd 25, 200(1)
  039ec94  lfd 26, 208(1)
  039ec98  lfd 27, 216(1)
  039ec9c  lfd 28, 224(1)
  039eca0  lfd 29, 232(1)
  039eca4  lfd 30, 240(1)
  039eca8  lfd 31, 248(1)
  039ecac  ld 25, 128(1)
  039ecb0  ld 26, 136(1)
  039ecb4  ld 27, 144(1)
  039ecb8  ld 28, 152(1)
  039ecbc  ld 29, 160(1)
  039ecc0  ld 30, 168(1)
  039ecc4  ld 31, 176(1)
  039ecc8  addi 1, 1, 256
  039eccc  blr
