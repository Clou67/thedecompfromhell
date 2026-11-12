# game/update/sound1.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateSound_1:   # 0x17fa08, 0x4c4 bytes
  017fa08  stdu 1, -224(1)
  017fa0c  mflr 0
  017fa10  std 0, 240(1)
  017fa14  stfd 26, 176(1)
  017fa18  stfd 27, 184(1)
  017fa1c  stfd 28, 192(1)
  017fa20  stfd 29, 200(1)
  017fa24  stfd 30, 208(1)
  017fa28  stfd 31, 216(1)
  017fa2c  lis 4, 149
  017fa30  lfs 1, 68(3)
  017fa34  addic 4, 4, 5056
  017fa38  lfs 2, 12(3)
  017fa3c  lfs 3, 324(4)
  017fa40  lfs 4, 320(4)
  017fa44  fsubs 3, 3, 1
  017fa48  lfs 1, 64(3)
  017fa4c  fsubs 26, 4, 1
  017fa50  lfs 1, 100(3)
  017fa54  lfs 31, 328(4)
  017fa58  lfs 4, 72(3)
  017fa5c  lfs 5, 96(3)
  017fa60  fsubs 31, 31, 4
  017fa64  lfs 4, 84(3)
  017fa68  fmuls 6, 1, 3
  017fa6c  lfs 7, 80(3)
  017fa70  fmuls 1, 1, 2
  017fa74  lfs 9, 116(3)
  017fa78  fmuls 8, 5, 3
  017fa7c  lfs 10, 104(3)
  017fa80  fmuls 5, 5, 2
  017fa84  lfs 11, 112(3)
  017fa88  fmuls 12, 10, 3
  017fa8c  std 31, 168(1)
  017fa90  lfs 13, 88(3)
  017fa94  ori 31, 3, 0
  017fa98  fmadds 29, 4, 26, 6
  017fa9c  fmadds 1, 4, 2, 1
  017faa0  lfs 6, 120(3)
  017faa4  fmadds 30, 7, 26, 8
  017faa8  fmadds 4, 7, 2, 5
  017faac  fmuls 5, 10, 2
  017fab0  fmadds 28, 13, 26, 12
  017fab4  fmadds 29, 9, 31, 29
  017fab8  fmadds 1, 9, 2, 1
  017fabc  fmadds 30, 11, 31, 30
  017fac0  fmadds 4, 11, 2, 4
  017fac4  fmadds 5, 13, 2, 5
  017fac8  fmadds 28, 6, 31, 28
  017facc  fmuls 7, 29, 29
  017fad0  fmuls 1, 1, 1
  017fad4  fmadds 2, 6, 2, 5
  017fad8  fmadds 5, 30, 30, 7
  017fadc  fmadds 1, 4, 4, 1
  017fae0  fmadds 4, 28, 28, 5
  017fae4  fmadds 2, 2, 2, 1
  017fae8  fsqrts 1, 4
  017faec  lfs 4, 108(3)
  017faf0  lfs 5, 92(3)
  017faf4  lfs 27, 124(3)
  017faf8  fsqrts 2, 2
  017fafc  std 30, 160(1)
  017fb00  fmuls 3, 4, 3
  017fb04  lwz 30, 8(3)
  017fb08  fmadds 26, 5, 26, 3
  017fb0c  fcmpu 0, 1, 2
  017fb10  std 29, 152(1)
  017fb14  std 28, 144(1)
  017fb18  std 27, 136(1)
  017fb1c  cror 6, 1, 2
  017fb20  bt 6, 0x17fe3c
  017fb24  fabs 4, 30
  017fb28  lis 3, 24
  017fb2c  addi 3, 3, -1544
  017fb30  lfs 3, 0(3)
  017fb34  fcmpu 0, 4, 3
  017fb38  bt 1, 0x17fb78
  017fb3c  fabs 4, 29
  017fb40  fcmpu 0, 4, 3
  017fb44  bt 1, 0x17fb78
  017fb48  fabs 4, 28
  017fb4c  fcmpu 0, 4, 3
  017fb50  bt 1, 0x17fb78
  017fb54  lis 3, 161
  017fb58  lwz 28, 0(30)
  017fb5c  slwi 4, 28, 5
  017fb60  lwz 3, 1844(3)
  017fb64  addc 3, 3, 4
  017fb68  clrldi 3, 3, 32
  017fb6c  lwz 27, 12(3)
  017fb70  extsw 27, 27
  017fb74  b 0x17fc44
  017fb78  fcmpu 0, 30, 3
  017fb7c  cror 6, 0, 2
  017fb80  bt 6, 0x17fb8c
  017fb84  fmr 30, 3
  017fb88  b 0x17fba8
  017fb8c  lis 3, 24
  017fb90  addi 3, 3, -1544
  017fb94  lfs 4, 4(3)
  017fb98  fcmpu 0, 30, 4
  017fb9c  cror 6, 1, 2
  017fba0  bt 6, 0x17fba8
  017fba4  fmr 30, 4
  017fba8  fcmpu 0, 29, 3
  017fbac  cror 6, 0, 2
  017fbb0  bt 6, 0x17fbbc
  017fbb4  fmr 29, 3
  017fbb8  b 0x17fbd8
  017fbbc  lis 3, 24
  017fbc0  addi 3, 3, -1544
  017fbc4  lfs 4, 4(3)
  017fbc8  fcmpu 0, 29, 4
  017fbcc  cror 6, 1, 2
  017fbd0  bt 6, 0x17fbd8
  017fbd4  fmr 29, 4
  017fbd8  fcmpu 0, 28, 3
  017fbdc  cror 6, 0, 2
  017fbe0  bt 6, 0x17fbec
  017fbe4  fmr 28, 3
  017fbe8  b 0x17fc08
  017fbec  lis 3, 24
  017fbf0  addi 3, 3, -1544
  017fbf4  lfs 3, 4(3)
  017fbf8  fcmpu 0, 28, 3
  017fbfc  cror 6, 1, 2
  017fc00  bt 6, 0x17fc08
  017fc04  fmr 28, 3
  017fc08  fmuls 4, 29, 29
  017fc0c  fmr 3, 2
  017fc10  lis 3, 161
  017fc14  lwz 4, 0(30)
  017fc18  slwi 4, 4, 5
  017fc1c  lwz 3, 1844(3)
  017fc20  addc 3, 3, 4
  017fc24  fmadds 2, 30, 30, 4
  017fc28  clrldi 3, 3, 32
  017fc2c  fmadds 2, 28, 28, 2
  017fc30  fsqrts 2, 2
  017fc34  bl 0x15b7d8
  017fc38  nop
  017fc3c  ori 27, 3, 0
  017fc40  lwz 28, 0(30)
  017fc44  lis 3, 161
  017fc48  slwi 4, 28, 5
  017fc4c  li 7, 0
  017fc50  lis 28, 150
  017fc54  li 6, 16
  017fc58  lwz 3, 1844(3)
  017fc5c  li 29, 20
  017fc60  addc 3, 3, 4
  017fc64  addic 28, 28, 14176
  017fc68  clrldi 5, 3, 32
  017fc6c  lwz 3, 16(30)
  017fc70  subc 6, 6, 29
  017fc74  sldi 4, 3, 7
  017fc78  sldi 8, 3, 4
  017fc7c  lbz 5, 24(5)
  017fc80  subc 4, 4, 8
  017fc84  subc 5, 7, 5
  017fc88  extsw 4, 4
  017fc8c  cntlzw 5, 5
  017fc90  addc 4, 28, 4
  017fc94  sldi 5, 5, 58
  017fc98  sradi 5, 5, 63
  017fc9c  and 5, 5, 6
  017fca0  addc 29, 29, 5
  017fca4  lwz 5, 140(4)
  017fca8  cmpw 5, 31
  017fcac  bf 2, 0x17fcbc
  017fcb0  lbz 4, 116(4)
  017fcb4  cmpwi 4, 0
  017fcb8  bf 2, 0x17fd78
  017fcbc  addic 3, 30, 12
  017fcc0  bl 0x4fff60
  017fcc4  nop
  017fcc8  cmpwi 3, 0
  017fccc  bt 2, 0x17fd6c
  017fcd0  lwz 3, 0(30)
  017fcd4  ori 4, 29, 0
  017fcd8  ori 5, 31, 0
  017fcdc  ori 6, 27, 0
  017fce0  bl 0x15d434
  017fce4  nop
  017fce8  lwz 29, 8(30)
  017fcec  stw 3, 16(30)
  017fcf0  cmpwi 29, 0
  017fcf4  bf 1, 0x17fd78
  017fcf8  lwz 3, 4(30)
  017fcfc  subc 3, 29, 3
  017fd00  extsw 3, 3
  017fd04  bl 0xfc620
  017fd08  nop
  017fd0c  lwz 4, 4(30)
  017fd10  addc 3, 4, 3
  017fd14  lis 4, 24
  017fd18  extsw 3, 3
  017fd1c  std 3, 112(1)
  017fd20  addi 3, 4, -1544
  017fd24  lis 4, 114
  017fd28  lfs 1, 8(3)
  017fd2c  lfs 2, -3056(4)
  017fd30  lfs 3, 12(3)
  017fd34  lfd 4, 112(1)
  017fd38  fcfid 4, 4
  017fd3c  li 4, 12
  017fd40  lwz 3, 16(30)
  017fd44  frsp 4, 4
  017fd48  fadds 1, 4, 1
  017fd4c  fmuls 1, 2, 1
  017fd50  fctidz 1, 1
  017fd54  fcfid 1, 1
  017fd58  frsp 1, 1
  017fd5c  fmuls 1, 1, 3
  017fd60  fctiwz 1, 1
  017fd64  stfiwx 1, 4, 30
  017fd68  b 0x17fd78
  017fd6c  li 3, -1
  017fd70  stw 3, 16(30)
  017fd74  b 0x17fe90
  017fd78  cmpwi 3, -1
  017fd7c  bt 2, 0x17fe90
  017fd80  extsw 3, 3
  017fd84  ori 4, 27, 0
  017fd88  bl 0x15d710
  017fd8c  nop
  017fd90  lfs 1, 32(31)
  017fd94  lfs 2, 36(31)
  017fd98  lfs 3, 40(31)
  017fd9c  fmuls 1, 1, 29
  017fda0  lfs 4, 16(31)
  017fda4  fmuls 2, 2, 29
  017fda8  lfs 5, 44(31)
  017fdac  fmuls 3, 3, 29
  017fdb0  lfs 6, 20(31)
  017fdb4  fmuls 5, 5, 29
  017fdb8  lfs 7, 24(31)
  017fdbc  lfs 8, 28(31)
  017fdc0  lfs 9, 48(31)
  017fdc4  fmadds 1, 4, 30, 1
  017fdc8  fmadds 2, 6, 30, 2
  017fdcc  fmadds 3, 7, 30, 3
  017fdd0  lfs 4, 52(31)
  017fdd4  fmadds 5, 8, 30, 5
  017fdd8  lfs 6, 56(31)
  017fddc  lfs 8, 60(31)
  017fde0  fmadds 7, 27, 31, 26
  017fde4  lfs 10, 64(31)
  017fde8  lfs 11, 68(31)
  017fdec  fmadds 1, 9, 28, 1
  017fdf0  fmadds 2, 4, 28, 2
  017fdf4  fmadds 3, 6, 28, 3
  017fdf8  lfs 4, 72(31)
  017fdfc  fmadds 5, 8, 28, 5
  017fe00  lwz 3, 16(30)
  017fe04  sldi 4, 3, 7
  017fe08  sldi 3, 3, 4
  017fe0c  subc 3, 4, 3
  017fe10  fadds 1, 1, 10
  017fe14  fadds 2, 2, 11
  017fe18  addc 3, 28, 3
  017fe1c  fadds 3, 3, 4
  017fe20  fadds 4, 5, 7
  017fe24  clrldi 3, 3, 32
  017fe28  stfs 1, 144(3)
  017fe2c  stfs 2, 148(3)
  017fe30  stfs 3, 152(3)
  017fe34  stfs 4, 156(3)
  017fe38  b 0x17fe90
  017fe3c  lwz 4, 16(30)
  017fe40  cmpwi 4, -1
  017fe44  bt 2, 0x17fe88
  017fe48  sldi 3, 4, 7
  017fe4c  sldi 6, 4, 4
  017fe50  lis 5, 150
  017fe54  subc 3, 3, 6
  017fe58  addic 5, 5, 14176
  017fe5c  extsw 3, 3
  017fe60  addc 3, 5, 3
  017fe64  lwz 5, 140(3)
  017fe68  cmpw 5, 31
  017fe6c  bf 2, 0x17fe88
  017fe70  lbz 3, 116(3)
  017fe74  cmpwi 3, 0
  017fe78  bt 2, 0x17fe88
  017fe7c  extsw 3, 4
  017fe80  bl 0x15cdb0
  017fe84  nop
  017fe88  li 3, -1
  017fe8c  stw 3, 16(30)
  017fe90  ld 0, 240(1)
  017fe94  mtlr 0
  017fe98  lfd 26, 176(1)
  017fe9c  lfd 27, 184(1)
  017fea0  lfd 28, 192(1)
  017fea4  lfd 29, 200(1)
  017fea8  lfd 30, 208(1)
  017feac  lfd 31, 216(1)
  017feb0  ld 27, 136(1)
  017feb4  ld 28, 144(1)
  017feb8  ld 29, 152(1)
  017febc  ld 30, 160(1)
  017fec0  ld 31, 168(1)
  017fec4  addi 1, 1, 224
  017fec8  blr
