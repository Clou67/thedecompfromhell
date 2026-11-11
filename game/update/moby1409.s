# game/update/moby1409.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1409_0026f9c0:   # 0x26f9c0, 0x454 bytes
  026f9c0  stdu 1, -304(1)
  026f9c4  mflr 0
  026f9c8  std 0, 320(1)
  026f9cc  stfd 24, 240(1)
  026f9d0  stfd 25, 248(1)
  026f9d4  stfd 26, 256(1)
  026f9d8  stfd 27, 264(1)
  026f9dc  stfd 28, 272(1)
  026f9e0  stfd 29, 280(1)
  026f9e4  stfd 30, 288(1)
  026f9e8  stfd 31, 296(1)
  026f9ec  std 30, 224(1)
  026f9f0  ori 30, 3, 0
  026f9f4  lis 3, 161
  026f9f8  std 29, 216(1)
  026f9fc  lis 4, 39
  026fa00  std 22, 160(1)
  026fa04  addi 29, 4, -1640
  026fa08  lwz 22, 120(30)
  026fa0c  lwz 3, 1808(3)
  026fa10  std 31, 232(1)
  026fa14  std 28, 208(1)
  026fa18  std 27, 200(1)
  026fa1c  std 26, 192(1)
  026fa20  std 25, 184(1)
  026fa24  std 24, 176(1)
  026fa28  std 23, 168(1)
  026fa2c  std 21, 152(1)
  026fa30  extsw 3, 3
  026fa34  bl 0x502730
  026fa38  nop
  026fa3c  lis 3, 122
  026fa40  lis 31, 114
  026fa44  lis 4, 122
  026fa48  lfs 2, 8244(3)
  026fa4c  lfs 3, -3052(31)
  026fa50  lwz 3, 8224(4)
  026fa54  fmuls 31, 2, 3
  026fa58  extsw 3, 3
  026fa5c  fmuls 31, 31, 1
  026fa60  bl 0x685c4
  026fa64  nop
  026fa68  ori 4, 3, 0
  026fa6c  li 3, 24
  026fa70  bl 0x174f80
  026fa74  nop
  026fa78  lis 7, 122
  026fa7c  li 3, 0
  026fa80  li 4, 1
  026fa84  li 5, 0
  026fa88  li 6, 1
  026fa8c  lwz 7, 8220(7)
  026fa90  bl 0x502ea8
  026fa94  nop
  026fa98  ori 4, 3, 0
  026fa9c  li 3, 3
  026faa0  bl 0x174f80
  026faa4  nop
  026faa8  li 3, 0
  026faac  li 4, 0
  026fab0  li 8, 0
  026fab4  li 5, 0
  026fab8  li 6, 0
  026fabc  li 7, 0
  026fac0  bl 0x502f08
  026fac4  nop
  026fac8  ori 4, 3, 0
  026facc  li 3, 6
  026fad0  bl 0x174f80
  026fad4  nop
  026fad8  lis 9, 0
  026fadc  li 3, 0
  026fae0  li 4, 0
  026fae4  ori 9, 9, 65424
  026fae8  li 5, 1
  026faec  li 6, 1
  026faf0  li 7, 1
  026faf4  li 8, 0
  026faf8  bl 0x502fd4
  026fafc  nop
  026fb00  ori 4, 3, 0
  026fb04  li 3, 26
  026fb08  bl 0x174f80
  026fb0c  nop
  026fb10  lis 3, 122
  026fb14  lfs 1, 4(22)
  026fb18  lis 4, 114
  026fb1c  stfs 1, 0(22)
  026fb20  lfs 2, 0(29)
  026fb24  lfs 3, 8236(3)
  026fb28  lfs 4, -3056(4)
  026fb2c  fmuls 3, 3, 4
  026fb30  lfs 4, 4(29)
  026fb34  fdivs 2, 2, 3
  026fb38  lfs 3, -3052(31)
  026fb3c  fmuls 2, 2, 4
  026fb40  fmuls 2, 2, 3
  026fb44  bl 0x502578
  026fb48  nop
  026fb4c  ori 3, 30, 0
  026fb50  stfs 1, 4(22)
  026fb54  addic 4, 1, 112
  026fb58  addic 5, 1, 116
  026fb5c  addic 6, 1, 120
  026fb60  bl 0xf1ef0
  026fb64  nop
  026fb68  lis 3, 122
  026fb6c  lwz 4, 120(1)
  026fb70  lis 25, 251
  026fb74  lwz 5, 116(1)
  026fb78  li 24, 0
  026fb7c  slwi 4, 4, 16
  026fb80  slwi 5, 5, 8
  026fb84  lwz 3, 8228(3)
  026fb88  addic 25, 25, -14844
  026fb8c  lwz 6, 112(1)
  026fb90  lis 28, 251
  026fb94  lfs 24, 8(29)
  026fb98  slwi 3, 3, 24
  026fb9c  lfs 25, 12(29)
  026fba0  or 23, 5, 6
  026fba4  lfs 26, 16(29)
  026fba8  lis 5, 122
  026fbac  lfs 27, 20(29)
  026fbb0  or 3, 3, 4
  026fbb4  lfs 28, 24(29)
  026fbb8  ori 31, 24, 0
  026fbbc  lfs 29, 28(29)
  026fbc0  or 23, 3, 23
  026fbc4  lfs 30, 32(29)
  026fbc8  addic 26, 25, 4
  026fbcc  addic 27, 25, 8
  026fbd0  addic 28, 28, -13484
  026fbd4  addic 29, 5, 6576
  026fbd8  lfs 1, 4(29)
  026fbdc  lfs 3, 0(29)
  026fbe0  fmuls 1, 1, 1
  026fbe4  lis 21, 122
  026fbe8  lfs 2, 8232(21)
  026fbec  fmadds 1, 3, 3, 1
  026fbf0  fsqrts 1, 1
  026fbf4  bl 0x502798
  026fbf8  nop
  026fbfc  lfs 2, 8232(21)
  026fc00  fmuls 1, 1, 24
  026fc04  fdivs 1, 1, 2
  026fc08  bl 0x502648
  026fc0c  nop
  026fc10  lfs 2, 4(22)
  026fc14  bl 0x502578
  026fc18  nop
  026fc1c  lfs 4, 0(29)
  026fc20  lis 3, 122
  026fc24  lfs 6, 16(30)
  026fc28  lfs 7, 4(29)
  026fc2c  addic 24, 24, 1
  026fc30  cmplwi 24, 68
  026fc34  fsubs 2, 25, 1
  026fc38  fsubs 3, 26, 1
  026fc3c  fsub 5, 1, 2
  026fc40  fsel 1, 5, 2, 1
  026fc44  fadds 2, 4, 6
  026fc48  lfs 4, 8(29)
  026fc4c  addic 29, 29, 12
  026fc50  fsub 5, 3, 1
  026fc54  stfs 2, 0(25)
  026fc58  lfs 2, 20(30)
  026fc5c  fadds 2, 7, 2
  026fc60  addic 25, 25, 12
  026fc64  fsel 1, 5, 3, 1
  026fc68  lfs 5, 8240(3)
  026fc6c  stfs 2, 0(26)
  026fc70  lfs 2, 24(30)
  026fc74  fmuls 3, 1, 1
  026fc78  fadds 2, 4, 2
  026fc7c  stw 23, 0(28)
  026fc80  addic 26, 26, 12
  026fc84  addic 28, 28, 4
  026fc88  fmuls 6, 3, 1
  026fc8c  fmuls 4, 3, 6
  026fc90  fmadds 1, 6, 27, 1
  026fc94  fmuls 6, 3, 4
  026fc98  fmadds 1, 4, 28, 1
  026fc9c  fmuls 3, 3, 6
  026fca0  fmadds 1, 6, 29, 1
  026fca4  fmadds 1, 3, 30, 1
  026fca8  fmadds 1, 5, 1, 2
  026fcac  stfs 1, 0(27)
  026fcb0  addic 27, 27, 12
  026fcb4  bt 0, 0x26fbd8
  026fcb8  lis 3, 39
  026fcbc  ori 24, 31, 0
  026fcc0  addi 3, 3, -1640
  026fcc4  ori 30, 1, 0
  026fcc8  lfs 30, 36(3)
  026fccc  lis 26, 122
  026fcd0  lis 27, 251
  026fcd4  lis 28, 122
  026fcd8  lis 29, 251
  026fcdc  ori 25, 31, 0
  026fce0  addic 26, 26, 7392
  026fce4  addic 27, 27, -14028
  026fce8  addic 28, 28, 7396
  026fcec  addic 29, 29, -14024
  026fcf0  lis 3, 16256
  026fcf4  lis 4, -16608
  026fcf8  fmr 2, 30
  026fcfc  lis 5, 16160
  026fd00  ori 4, 4, 55676
  026fd04  stw 3, 124(1)
  026fd08  ori 5, 5, 55676
  026fd0c  stw 3, 132(1)
  026fd10  stw 4, 128(1)
  026fd14  lfs 1, 124(30)
  026fd18  stw 5, 136(1)
  026fd1c  fmuls 1, 1, 31
  026fd20  bl 0x502798
  026fd24  nop
  026fd28  lfs 2, 0(26)
  026fd2c  fadds 3, 2, 1
  026fd30  lfs 1, 128(30)
  026fd34  fmr 2, 30
  026fd38  fmuls 1, 1, 31
  026fd3c  stfs 3, 0(27)
  026fd40  bl 0x502798
  026fd44  nop
  026fd48  lfs 2, 0(28)
  026fd4c  addic 25, 25, 1
  026fd50  fadds 1, 2, 1
  026fd54  cmplwi 25, 68
  026fd58  addic 26, 26, 8
  026fd5c  addic 27, 27, 8
  026fd60  addic 28, 28, 8
  026fd64  stfs 1, 0(29)
  026fd68  addic 29, 29, 8
  026fd6c  bt 0, 0x26fcf0
  026fd70  bl 0x71170
  026fd74  nop
  026fd78  lis 3, 122
  026fd7c  lis 4, 122
  026fd80  lis 5, 122
  026fd84  lis 6, 122
  026fd88  li 7, 9
  026fd8c  lwz 3, 6544(3)
  026fd90  lwz 4, 8208(4)
  026fd94  lwz 5, 8216(5)
  026fd98  extsw 3, 3
  026fd9c  lwz 6, 8212(6)
  026fda0  bl 0x74604
  026fda4  nop
  026fda8  addic 24, 24, 1
  026fdac  addic 30, 30, 8
  026fdb0  cmpwi 24, 2
  026fdb4  bt 0, 0x26fccc
  026fdb8  ld 0, 320(1)
  026fdbc  mtlr 0
  026fdc0  lfd 24, 240(1)
  026fdc4  lfd 25, 248(1)
  026fdc8  lfd 26, 256(1)
  026fdcc  lfd 27, 264(1)
  026fdd0  lfd 28, 272(1)
  026fdd4  lfd 29, 280(1)
  026fdd8  lfd 30, 288(1)
  026fddc  lfd 31, 296(1)
  026fde0  ld 21, 152(1)
  026fde4  ld 22, 160(1)
  026fde8  ld 23, 168(1)
  026fdec  ld 24, 176(1)
  026fdf0  ld 25, 184(1)
  026fdf4  ld 26, 192(1)
  026fdf8  ld 27, 200(1)
  026fdfc  ld 28, 208(1)
  026fe00  ld 29, 216(1)
  026fe04  ld 30, 224(1)
  026fe08  ld 31, 232(1)
  026fe0c  addi 1, 1, 304
  026fe10  blr

UpdateMoby_1409:   # 0x26fe14, 0x80 bytes
  026fe14  stdu 1, -128(1)
  026fe18  mflr 0
  026fe1c  std 0, 144(1)
  026fe20  std 31, 120(1)
  026fe24  ori 31, 3, 0
  026fe28  lbz 3, 32(3)
  026fe2c  cmpwi 3, 0
  026fe30  bf 2, 0x26fe58
  026fe34  ori 3, 31, 0
  026fe38  li 4, 64
  026fe3c  li 5, 64
  026fe40  li 6, 64
  026fe44  bl 0xf1ec8
  026fe48  nop
  026fe4c  li 3, 1
  026fe50  stb 3, 32(31)
  026fe54  b 0x26fe80
  026fe58  lis 3, 113
  026fe5c  ori 4, 31, 0
  026fe60  addic 3, 3, -23568
  026fe64  bl 0x6d7e0
  026fe68  nop
  026fe6c  lhz 4, 52(31)
  026fe70  li 3, 0
  026fe74  ori 4, 4, 1
  026fe78  sth 3, 50(31)
  026fe7c  sth 4, 52(31)
  026fe80  ld 0, 144(1)
  026fe84  mtlr 0
  026fe88  ld 31, 120(1)
  026fe8c  addi 1, 1, 128
  026fe90  blr
