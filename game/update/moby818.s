# game/update/moby818.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_818:   # 0x46f7b0, 0xed0 bytes
  046f7b0  stdu 1, -352(1)
  046f7b4  mflr 0
  046f7b8  std 0, 368(1)
  046f7bc  stfd 31, 344(1)
  046f7c0  std 30, 328(1)
  046f7c4  std 31, 336(1)
  046f7c8  lwz 30, 120(3)
  046f7cc  ori 31, 3, 0
  046f7d0  lfs 2, 24(3)
  046f7d4  std 29, 320(1)
  046f7d8  std 28, 312(1)
  046f7dc  std 27, 304(1)
  046f7e0  cmpwi 30, 0
  046f7e4  bt 2, 0x470658
  046f7e8  lbz 3, 32(31)
  046f7ec  cmpwi 3, 5
  046f7f0  cmpwi 1, 3, 4
  046f7f4  cmpwi 6, 3, 3
  046f7f8  cmpwi 7, 3, 2
  046f7fc  bt 2, 0x4700b0
  046f800  bt 6, 0x46fe4c
  046f804  bt 26, 0x46fd40
  046f808  bt 30, 0x46f92c
  046f80c  cmpwi 3, 1
  046f810  bt 2, 0x46f864
  046f814  cmpwi 3, 0
  046f818  bf 2, 0x470658
  046f81c  lis 3, 71
  046f820  addi 3, 3, -2240
  046f824  lfs 1, 0(3)
  046f828  lfs 2, 4(3)
  046f82c  bl 0xfcbe8
  046f830  nop
  046f834  lis 3, 114
  046f838  lfs 2, -3056(3)
  046f83c  fmuls 1, 1, 2
  046f840  bl 0x502758
  046f844  nop
  046f848  stw 3, 48(30)
  046f84c  li 4, 255
  046f850  li 3, 1
  046f854  stb 3, 32(31)
  046f858  stb 4, 48(31)
  046f85c  sth 4, 50(31)
  046f860  b 0x470658
  046f864  addic 3, 30, 48
  046f868  bl 0x4fff60
  046f86c  nop
  046f870  cmpwi 3, 0
  046f874  bt 2, 0x470658
  046f878  li 3, 2
  046f87c  lis 4, 165
  046f880  stb 3, 32(31)
  046f884  lwz 3, 28(30)
  046f888  lwz 4, 7120(4)
  046f88c  lwz 5, 24(30)
  046f890  slwi 3, 3, 7
  046f894  slwi 5, 5, 7
  046f898  addc 3, 4, 3
  046f89c  addc 4, 4, 5
  046f8a0  clrldi 3, 3, 32
  046f8a4  clrldi 4, 4, 32
  046f8a8  lis 5, 71
  046f8ac  lfs 1, 48(3)
  046f8b0  lfs 2, 48(4)
  046f8b4  addi 5, 5, -2240
  046f8b8  fsubs 1, 2, 1
  046f8bc  stfs 1, 32(30)
  046f8c0  lfs 2, 52(4)
  046f8c4  lfs 3, 52(3)
  046f8c8  fsubs 2, 2, 3
  046f8cc  stfs 2, 36(30)
  046f8d0  lfs 3, 56(4)
  046f8d4  lfs 4, 56(3)
  046f8d8  fsubs 3, 3, 4
  046f8dc  stfs 3, 40(30)
  046f8e0  lfs 4, 60(4)
  046f8e4  stfs 4, 44(30)
  046f8e8  lfs 4, 8(5)
  046f8ec  fmuls 1, 1, 4
  046f8f0  fmuls 2, 2, 4
  046f8f4  fmuls 3, 3, 4
  046f8f8  stfs 1, 32(30)
  046f8fc  stfs 2, 36(30)
  046f900  stfs 3, 40(30)
  046f904  lfs 4, 48(3)
  046f908  fadds 1, 1, 4
  046f90c  stfs 1, 32(30)
  046f910  lfs 1, 52(3)
  046f914  fadds 1, 2, 1
  046f918  stfs 1, 36(30)
  046f91c  lfs 1, 56(3)
  046f920  fadds 1, 3, 1
  046f924  stfs 1, 40(30)
  046f928  b 0x470658
  046f92c  lwz 3, 16(31)
  046f930  lfs 5, 32(30)
  046f934  lfs 1, 16(31)
  046f938  lwz 4, 20(31)
  046f93c  lfs 6, 36(30)
  046f940  lfs 7, 20(31)
  046f944  fsubs 2, 5, 1
  046f948  lis 5, 71
  046f94c  fsubs 3, 6, 7
  046f950  addi 5, 5, -2240
  046f954  srawi 6, 3, 31
  046f958  srawi 8, 4, 31
  046f95c  srwi 7, 6, 1
  046f960  xor 3, 7, 3
  046f964  srwi 7, 8, 1
  046f968  fabs 4, 2
  046f96c  subc 6, 3, 6
  046f970  fabs 8, 3
  046f974  stfs 2, 156(1)
  046f978  stfs 3, 160(1)
  046f97c  lis 9, 115
  046f980  fsubs 2, 4, 8
  046f984  stfs 2, 164(1)
  046f988  lwz 10, 156(1)
  046f98c  lfs 31, 12(5)
  046f990  lfs 2, 156(1)
  046f994  xor 5, 7, 4
  046f998  lwz 3, 160(1)
  046f99c  lfs 3, 160(1)
  046f9a0  lwz 7, 164(1)
  046f9a4  rlwinm 3, 3, 3, 29, 29
  046f9a8  fabs 9, 3
  046f9ac  addic 4, 9, 22784
  046f9b0  lfs 3, 164(1)
  046f9b4  fabs 2, 2
  046f9b8  rlwimi 3, 7, 2, 30, 30
  046f9bc  fsub 10, 3, 31
  046f9c0  fsub 11, 3, 31
  046f9c4  rlwimi 3, 10, 4, 28, 28
  046f9c8  ori 7, 4, 0
  046f9cc  subc 5, 5, 8
  046f9d0  rlwimi 7, 3, 2, 26, 28
  046f9d4  slwi 3, 3, 2
  046f9d8  clrldi 7, 7, 32
  046f9dc  fsel 8, 10, 2, 8
  046f9e0  lfsx 2, 4, 3
  046f9e4  fsel 4, 11, 9, 4
  046f9e8  lfs 3, 4(7)
  046f9ec  fcmpu 0, 8, 31
  046f9f0  bt 1, 0x46f9fc
  046f9f4  fmr 2, 31
  046f9f8  b 0x46fb20
  046f9fc  fsubs 9, 4, 8
  046fa00  fadds 4, 4, 8
  046fa04  addic 3, 1, 16
  046fa08  li 9, 2
  046fa0c  addic 7, 3, 264
  046fa10  addic 4, 3, 248
  046fa14  mtctr 9
  046fa18  fdivs 4, 9, 4
  046fa1c  fmuls 8, 4, 4
  046fa20  stfs 4, 276(1)
  046fa24  stfs 4, 268(1)
  046fa28  stfs 4, 272(1)
  046fa2c  stfs 4, 264(1)
  046fa30  lfs 10, 276(1)
  046fa34  lfs 11, 268(1)
  046fa38  lfs 12, 272(1)
  046fa3c  fmuls 9, 8, 8
  046fa40  fmuls 11, 11, 8
  046fa44  fmuls 10, 10, 9
  046fa48  fmuls 4, 9, 9
  046fa4c  fmuls 9, 12, 9
  046fa50  stfs 11, 268(1)
  046fa54  fmuls 8, 10, 8
  046fa58  stfs 9, 272(1)
  046fa5c  stfs 8, 276(1)
  046fa60  lfs 8, 248(3)
  046fa64  fmuls 8, 8, 4
  046fa68  stfs 8, 264(3)
  046fa6c  lfs 8, 4(4)
  046fa70  addic 4, 4, 8
  046fa74  fmuls 8, 8, 4
  046fa78  addic 3, 3, 8
  046fa7c  stfs 8, 4(7)
  046fa80  addic 7, 7, 8
  046fa84  bdnz 0x46fa60
  046fa88  li 7, 4
  046fa8c  ori 3, 1, 0
  046fa90  mtctr 7
  046fa94  lis 4, 115
  046fa98  addic 7, 3, 264
  046fa9c  addic 4, 4, 22752
  046faa0  ori 8, 7, 0
  046faa4  lfs 4, 264(3)
  046faa8  lfs 8, 0(4)
  046faac  fmuls 4, 4, 8
  046fab0  lfs 8, 4(4)
  046fab4  addic 4, 4, 8
  046fab8  stfs 4, 264(3)
  046fabc  lfs 4, 4(7)
  046fac0  addic 3, 3, 8
  046fac4  fmuls 4, 4, 8
  046fac8  stfs 4, 4(7)
  046facc  addic 7, 7, 8
  046fad0  bdnz 0x46faa4
  046fad4  ori 3, 1, 0
  046fad8  fmr 4, 31
  046fadc  mtctr 9
  046fae0  lfs 8, 264(3)
  046fae4  fadds 4, 4, 8
  046fae8  lfs 8, 4(8)
  046faec  addic 3, 3, 16
  046faf0  lfs 9, 8(8)
  046faf4  lfs 10, 12(8)
  046faf8  addic 8, 8, 16
  046fafc  fadds 4, 4, 8
  046fb00  fadds 4, 4, 9
  046fb04  fadds 4, 4, 10
  046fb08  bdnz 0x46fae0
  046fb0c  lis 3, 71
  046fb10  addi 3, 3, -2240
  046fb14  lfs 8, 16(3)
  046fb18  fadds 4, 4, 8
  046fb1c  fmadds 2, 4, 2, 3
  046fb20  fsubs 3, 7, 6
  046fb24  fsubs 4, 1, 5
  046fb28  li 3, 0
  046fb2c  lis 4, 71
  046fb30  stw 3, 112(1)
  046fb34  addi 3, 4, -2240
  046fb38  fmuls 3, 3, 3
  046fb3c  fmadds 3, 4, 4, 3
  046fb40  lfs 4, 20(3)
  046fb44  fsqrts 3, 3
  046fb48  fcmpu 0, 3, 4
  046fb4c  bt 0, 0x46fb78
  046fb50  lis 3, 17402
  046fb54  cmpw 6, 3
  046fb58  cmpw 6, 5, 3
  046fb5c  bt 1, 0x46fb78
  046fb60  lis 3, 16672
  046fb64  cmpw 6, 3
  046fb68  cmpw 1, 5, 3
  046fb6c  bt 0, 0x46fb78
  046fb70  bt 25, 0x46fb78
  046fb74  bf 4, 0x46fbcc
  046fb78  lwz 4, 20(30)
  046fb7c  lis 3, 15820
  046fb80  srawi 5, 4, 31
  046fb84  ori 3, 3, 52429
  046fb88  srwi 6, 5, 1
  046fb8c  xor 4, 6, 4
  046fb90  subc 4, 4, 5
  046fb94  cmpw 4, 3
  046fb98  bf 0, 0x46fbd0
  046fb9c  li 3, 3
  046fba0  lis 4, 17402
  046fba4  stb 3, 32(31)
  046fba8  stfs 1, 32(30)
  046fbac  lfs 1, 20(31)
  046fbb0  stfs 1, 36(30)
  046fbb4  lfs 1, 24(31)
  046fbb8  stfs 1, 40(30)
  046fbbc  lfs 1, 28(31)
  046fbc0  stw 4, 40(30)
  046fbc4  stfs 1, 44(30)
  046fbc8  b 0x470658
  046fbcc  fmr 31, 3
  046fbd0  lis 3, 71
  046fbd4  lis 28, 114
  046fbd8  fmr 1, 2
  046fbdc  addi 29, 3, -2240
  046fbe0  lis 27, 114
  046fbe4  addic 3, 31, 72
  046fbe8  addic 5, 30, 16
  046fbec  lfs 4, 24(29)
  046fbf0  lfs 3, -3048(28)
  046fbf4  lfs 5, 28(29)
  046fbf8  fmuls 3, 3, 4
  046fbfc  lfs 6, -3052(27)
  046fc00  fmuls 4, 6, 5
  046fc04  fmr 2, 3
  046fc08  bl 0x10a2e0
  046fc0c  nop
  046fc10  lis 4, 135
  046fc14  lfs 1, 16(30)
  046fc18  addic 3, 1, 112
  046fc1c  addic 5, 30, 20
  046fc20  lfs 2, 30808(4)
  046fc24  fmuls 2, 1, 2
  046fc28  fmr 1, 31
  046fc2c  stfs 2, 64(31)
  046fc30  lfs 2, 32(29)
  046fc34  lfs 4, 36(29)
  046fc38  lfs 3, -3048(28)
  046fc3c  lfs 5, -3052(27)
  046fc40  fmuls 2, 3, 2
  046fc44  fmuls 3, 3, 4
  046fc48  fmuls 4, 5, 4
  046fc4c  bl 0x109c30
  046fc50  nop
  046fc54  lfs 1, 40(29)
  046fc58  lfs 2, 72(31)
  046fc5c  lfs 3, 44(29)
  046fc60  fadds 1, 2, 1
  046fc64  lfs 4, 48(29)
  046fc68  lfs 7, 52(29)
  046fc6c  fsubs 2, 3, 1
  046fc70  fsubs 5, 4, 1
  046fc74  li 3, 0
  046fc78  fsub 6, 1, 2
  046fc7c  fsel 1, 6, 2, 1
  046fc80  lfs 2, 56(29)
  046fc84  fsub 6, 5, 1
  046fc88  fsel 1, 6, 5, 1
  046fc8c  lfs 5, 60(29)
  046fc90  lfs 6, 64(29)
  046fc94  lfs 9, 20(30)
  046fc98  fmuls 8, 1, 1
  046fc9c  fmuls 10, 8, 1
  046fca0  fmuls 11, 8, 10
  046fca4  fmadds 1, 10, 7, 1
  046fca8  fmuls 10, 8, 11
  046fcac  fmadds 1, 11, 2, 1
  046fcb0  fmuls 8, 8, 10
  046fcb4  fmadds 1, 10, 5, 1
  046fcb8  fmadds 1, 8, 6, 1
  046fcbc  fmuls 1, 1, 9
  046fcc0  stfs 1, 0(30)
  046fcc4  lfs 8, 72(31)
  046fcc8  fsubs 3, 3, 8
  046fccc  fsubs 4, 4, 8
  046fcd0  stw 3, 8(30)
  046fcd4  fsub 10, 8, 3
  046fcd8  fsel 3, 10, 3, 8
  046fcdc  fsub 8, 4, 3
  046fce0  fsel 3, 8, 4, 3
  046fce4  fmuls 4, 3, 3
  046fce8  fmuls 8, 4, 3
  046fcec  fmuls 10, 4, 8
  046fcf0  fmadds 3, 8, 7, 3
  046fcf4  fmuls 7, 4, 10
  046fcf8  fmadds 2, 10, 2, 3
  046fcfc  fmuls 3, 4, 7
  046fd00  fmadds 2, 7, 5, 2
  046fd04  fmadds 2, 3, 6, 2
  046fd08  fmuls 2, 2, 9
  046fd0c  stfs 2, 4(30)
  046fd10  lfs 2, 16(31)
  046fd14  fadds 1, 2, 1
  046fd18  lfs 2, 20(31)
  046fd1c  lfs 3, 24(31)
  046fd20  stfs 1, 16(31)
  046fd24  lfs 1, 4(30)
  046fd28  fadds 1, 2, 1
  046fd2c  stfs 1, 20(31)
  046fd30  lfs 1, 8(30)
  046fd34  fadds 1, 3, 1
  046fd38  stfs 1, 24(31)
  046fd3c  b 0x470658
  046fd40  lis 3, 71
  046fd44  lis 4, 114
  046fd48  addi 29, 3, -2240
  046fd4c  addic 3, 31, 68
  046fd50  addic 5, 30, 16
  046fd54  lfs 1, 72(29)
  046fd58  lfs 31, 68(29)
  046fd5c  lfs 2, -3048(4)
  046fd60  lis 4, 114
  046fd64  fmuls 2, 2, 1
  046fd68  lfs 4, 28(29)
  046fd6c  fmr 1, 31
  046fd70  lfs 3, -3052(4)
  046fd74  fmuls 4, 3, 4
  046fd78  fmr 3, 2
  046fd7c  bl 0x10a2e0
  046fd80  nop
  046fd84  lfs 1, 68(31)
  046fd88  fmr 2, 31
  046fd8c  bl 0x5026a0
  046fd90  nop
  046fd94  lfs 2, 76(29)
  046fd98  fcmpu 0, 1, 2
  046fd9c  cror 6, 1, 2
  046fda0  bt 6, 0x46fde8
  046fda4  lis 3, 71
  046fda8  lis 4, 114
  046fdac  addi 6, 3, -2240
  046fdb0  lis 7, 114
  046fdb4  addic 3, 31, 24
  046fdb8  addic 5, 30, 20
  046fdbc  lfs 3, 36(6)
  046fdc0  lfs 4, 84(6)
  046fdc4  lfs 5, 88(6)
  046fdc8  lfs 1, 80(6)
  046fdcc  lfs 6, -3048(4)
  046fdd0  lfs 7, -3052(7)
  046fdd4  fmuls 2, 6, 3
  046fdd8  fmuls 3, 6, 4
  046fddc  fmuls 4, 7, 5
  046fde0  bl 0x109c30
  046fde4  nop
  046fde8  lwz 4, 24(31)
  046fdec  lis 3, 17402
  046fdf0  srawi 5, 4, 31
  046fdf4  srwi 6, 5, 1
  046fdf8  xor 4, 6, 4
  046fdfc  subc 4, 4, 5
  046fe00  cmpw 4, 3
  046fe04  bt 0, 0x470658
  046fe08  lis 4, 71
  046fe0c  li 3, 4
  046fe10  li 5, 0
  046fe14  addi 4, 4, -2240
  046fe18  stb 3, 32(31)
  046fe1c  sth 5, 50(31)
  046fe20  lfs 1, 92(4)
  046fe24  lfs 2, 0(4)
  046fe28  bl 0xfcbe8
  046fe2c  nop
  046fe30  lis 3, 114
  046fe34  lfs 2, -3056(3)
  046fe38  fmuls 1, 1, 2
  046fe3c  bl 0x502758
  046fe40  nop
  046fe44  stw 3, 48(30)
  046fe48  b 0x470658
  046fe4c  addic 3, 30, 48
  046fe50  bl 0x4fff60
  046fe54  nop
  046fe58  cmpwi 3, 0
  046fe5c  bt 2, 0x470658
  046fe60  li 3, 5
  046fe64  lis 4, 165
  046fe68  lis 5, 71
  046fe6c  li 6, 0
  046fe70  stb 3, 32(31)
  046fe74  lwz 3, 24(30)
  046fe78  addi 5, 5, -2240
  046fe7c  lwz 4, 7120(4)
  046fe80  slwi 3, 3, 7
  046fe84  addc 3, 4, 3
  046fe88  li 4, 255
  046fe8c  clrldi 3, 3, 32
  046fe90  lfs 1, 48(3)
  046fe94  stfs 1, 32(30)
  046fe98  lfs 1, 52(3)
  046fe9c  stfs 1, 36(30)
  046fea0  lfs 1, 56(3)
  046fea4  stfs 1, 40(30)
  046fea8  lfs 1, 60(3)
  046feac  sth 4, 50(31)
  046feb0  lis 3, 114
  046feb4  stfs 1, 44(30)
  046feb8  lfs 4, 12(5)
  046febc  stw 6, 76(31)
  046fec0  stw 6, 72(31)
  046fec4  stw 6, 68(31)
  046fec8  stw 6, 64(31)
  046fecc  stw 6, 12(30)
  046fed0  stw 6, 4(30)
  046fed4  stw 6, 0(30)
  046fed8  lfs 1, 96(5)
  046fedc  lfs 2, -3052(3)
  046fee0  lfs 3, 32(30)
  046fee4  fmuls 1, 2, 1
  046fee8  lfs 5, 36(30)
  046feec  lis 3, 115
  046fef0  addic 3, 3, 22784
  046fef4  stfs 1, 8(30)
  046fef8  lfs 1, 16(31)
  046fefc  lfs 2, 20(31)
  046ff00  fsubs 1, 3, 1
  046ff04  fsubs 2, 5, 2
  046ff08  fabs 3, 1
  046ff0c  fabs 5, 2
  046ff10  stfs 1, 144(1)
  046ff14  stfs 2, 148(1)
  046ff18  fsubs 1, 3, 5
  046ff1c  stfs 1, 152(1)
  046ff20  lwz 4, 144(1)
  046ff24  lfs 1, 144(1)
  046ff28  lwz 5, 148(1)
  046ff2c  lfs 2, 148(1)
  046ff30  fabs 1, 1
  046ff34  lwz 6, 152(1)
  046ff38  rlwinm 5, 5, 3, 29, 29
  046ff3c  lfs 6, 152(1)
  046ff40  fabs 2, 2
  046ff44  rlwimi 5, 6, 2, 30, 30
  046ff48  fsub 7, 6, 4
  046ff4c  fsub 6, 6, 4
  046ff50  rlwimi 5, 4, 4, 28, 28
  046ff54  ori 4, 3, 0
  046ff58  rlwimi 4, 5, 2, 26, 28
  046ff5c  slwi 5, 5, 2
  046ff60  clrldi 4, 4, 32
  046ff64  fsel 5, 7, 1, 5
  046ff68  lfsx 1, 3, 5
  046ff6c  fsel 3, 6, 2, 3
  046ff70  lfs 2, 4(4)
  046ff74  fcmpu 0, 5, 4
  046ff78  bt 1, 0x46ff80
  046ff7c  b 0x4700a0
  046ff80  fsubs 6, 3, 5
  046ff84  fadds 3, 3, 5
  046ff88  addic 3, 1, 16
  046ff8c  li 7, 2
  046ff90  addic 5, 3, 232
  046ff94  addic 4, 3, 216
  046ff98  mtctr 7
  046ff9c  fdivs 3, 6, 3
  046ffa0  fmuls 5, 3, 3
  046ffa4  stfs 3, 244(1)
  046ffa8  stfs 3, 236(1)
  046ffac  stfs 3, 240(1)
  046ffb0  stfs 3, 232(1)
  046ffb4  lfs 7, 244(1)
  046ffb8  lfs 8, 236(1)
  046ffbc  lfs 9, 240(1)
  046ffc0  fmuls 6, 5, 5
  046ffc4  fmuls 8, 8, 5
  046ffc8  fmuls 7, 7, 6
  046ffcc  fmuls 3, 6, 6
  046ffd0  fmuls 6, 9, 6
  046ffd4  stfs 8, 236(1)
  046ffd8  fmuls 5, 7, 5
  046ffdc  stfs 6, 240(1)
  046ffe0  stfs 5, 244(1)
  046ffe4  lfs 5, 216(3)
  046ffe8  fmuls 5, 5, 3
  046ffec  stfs 5, 232(3)
  046fff0  lfs 5, 4(4)
  046fff4  addic 4, 4, 8
  046fff8  fmuls 5, 5, 3
  046fffc  addic 3, 3, 8
  0470000  stfs 5, 4(5)
  0470004  addic 5, 5, 8
  0470008  bdnz 0x46ffe4
  047000c  li 5, 4
  0470010  ori 3, 1, 0
  0470014  mtctr 5
  0470018  lis 4, 115
  047001c  addic 5, 3, 232
  0470020  addic 4, 4, 22752
  0470024  ori 6, 5, 0
  0470028  lfs 3, 232(3)
  047002c  lfs 5, 0(4)
  0470030  fmuls 3, 3, 5
  0470034  lfs 5, 4(4)
  0470038  addic 4, 4, 8
  047003c  stfs 3, 232(3)
  0470040  lfs 3, 4(5)
  0470044  addic 3, 3, 8
  0470048  fmuls 3, 3, 5
  047004c  stfs 3, 4(5)
  0470050  addic 5, 5, 8
  0470054  bdnz 0x470028
  0470058  ori 3, 1, 0
  047005c  mtctr 7
  0470060  lfs 3, 232(3)
  0470064  fadds 3, 4, 3
  0470068  addic 3, 3, 16
  047006c  lfs 4, 4(6)
  0470070  lfs 5, 8(6)
  0470074  lfs 6, 12(6)
  0470078  addic 6, 6, 16
  047007c  fadds 3, 3, 4
  0470080  fadds 4, 3, 5
  0470084  fadds 4, 4, 6
  0470088  bdnz 0x470060
  047008c  lis 3, 71
  0470090  addi 3, 3, -2240
  0470094  lfs 3, 16(3)
  0470098  fadds 4, 4, 3
  047009c  fmadds 4, 4, 1, 2
  04700a0  li 3, 0
  04700a4  stfs 4, 72(31)
  04700a8  stw 3, 20(30)
  04700ac  b 0x470658
  04700b0  lfs 1, 32(30)
  04700b4  lfs 3, 16(31)
  04700b8  lfs 4, 36(30)
  04700bc  lfs 5, 20(31)
  04700c0  fsubs 1, 1, 3
  04700c4  lis 3, 71
  04700c8  fsubs 3, 4, 5
  04700cc  addi 3, 3, -2240
  04700d0  lis 29, 115
  04700d4  addic 29, 29, 22784
  04700d8  fabs 4, 1
  04700dc  fabs 5, 3
  04700e0  stfs 1, 132(1)
  04700e4  stfs 3, 136(1)
  04700e8  fsubs 1, 4, 5
  04700ec  stfs 1, 140(1)
  04700f0  lwz 4, 132(1)
  04700f4  lfs 31, 12(3)
  04700f8  lfs 1, 132(1)
  04700fc  lwz 3, 136(1)
  0470100  lfs 3, 136(1)
  0470104  lwz 5, 140(1)
  0470108  rlwinm 3, 3, 3, 29, 29
  047010c  fabs 6, 3
  0470110  lfs 3, 140(1)
  0470114  fabs 1, 1
  0470118  rlwimi 3, 5, 2, 30, 30
  047011c  fsub 7, 3, 31
  0470120  rlwimi 3, 4, 4, 28, 28
  0470124  fsub 8, 3, 31
  0470128  ori 4, 29, 0
  047012c  rlwimi 4, 3, 2, 26, 28
  0470130  slwi 3, 3, 2
  0470134  clrldi 4, 4, 32
  0470138  fsel 5, 7, 1, 5
  047013c  lfsx 1, 29, 3
  0470140  lfs 3, 4(4)
  0470144  fsel 4, 8, 6, 4
  0470148  fcmpu 0, 5, 31
  047014c  bt 1, 0x470158
  0470150  fmr 1, 31
  0470154  b 0x47027c
  0470158  fsubs 6, 4, 5
  047015c  fadds 4, 4, 5
  0470160  addic 3, 1, 16
  0470164  li 6, 2
  0470168  addic 5, 3, 200
  047016c  addic 4, 3, 184
  0470170  mtctr 6
  0470174  fdivs 4, 6, 4
  0470178  fmuls 5, 4, 4
  047017c  stfs 4, 212(1)
  0470180  stfs 4, 204(1)
  0470184  stfs 4, 208(1)
  0470188  stfs 4, 200(1)
  047018c  lfs 7, 212(1)
  0470190  lfs 8, 204(1)
  0470194  lfs 9, 208(1)
  0470198  fmuls 6, 5, 5
  047019c  fmuls 8, 8, 5
  04701a0  fmuls 7, 7, 6
  04701a4  fmuls 4, 6, 6
  04701a8  fmuls 6, 9, 6
  04701ac  stfs 8, 204(1)
  04701b0  fmuls 5, 7, 5
  04701b4  stfs 6, 208(1)
  04701b8  stfs 5, 212(1)
  04701bc  lfs 5, 184(3)
  04701c0  fmuls 5, 5, 4
  04701c4  stfs 5, 200(3)
  04701c8  lfs 5, 4(4)
  04701cc  addic 4, 4, 8
  04701d0  fmuls 5, 5, 4
  04701d4  addic 3, 3, 8
  04701d8  stfs 5, 4(5)
  04701dc  addic 5, 5, 8
  04701e0  bdnz 0x4701bc
  04701e4  li 5, 4
  04701e8  ori 3, 1, 0
  04701ec  mtctr 5
  04701f0  lis 4, 115
  04701f4  addic 5, 3, 200
  04701f8  addic 4, 4, 22752
  04701fc  ori 7, 5, 0
  0470200  lfs 4, 200(3)
  0470204  lfs 5, 0(4)
  0470208  fmuls 4, 4, 5
  047020c  lfs 5, 4(4)
  0470210  addic 4, 4, 8
  0470214  stfs 4, 200(3)
  0470218  lfs 4, 4(5)
  047021c  addic 3, 3, 8
  0470220  fmuls 4, 4, 5
  0470224  stfs 4, 4(5)
  0470228  addic 5, 5, 8
  047022c  bdnz 0x470200
  0470230  ori 3, 1, 0
  0470234  fmr 4, 31
  0470238  mtctr 6
  047023c  lfs 5, 200(3)
  0470240  fadds 4, 4, 5
  0470244  lfs 5, 4(7)
  0470248  addic 3, 3, 16
  047024c  lfs 6, 8(7)
  0470250  lfs 7, 12(7)
  0470254  addic 7, 7, 16
  0470258  fadds 4, 4, 5
  047025c  fadds 4, 4, 6
  0470260  fadds 4, 4, 7
  0470264  bdnz 0x47023c
  0470268  lis 3, 71
  047026c  addi 3, 3, -2240
  0470270  lfs 5, 16(3)
  0470274  fadds 4, 4, 5
  0470278  fmadds 1, 4, 1, 3
  047027c  lis 3, 71
  0470280  stfs 2, 116(1)
  0470284  lis 4, 114
  0470288  addi 3, 3, -2240
  047028c  lis 6, 114
  0470290  addic 5, 30, 16
  0470294  lfs 2, 72(3)
  0470298  lfs 3, -3048(4)
  047029c  lfs 4, 28(3)
  04702a0  fmuls 2, 3, 2
  04702a4  lfs 5, -3052(6)
  04702a8  addic 3, 31, 72
  04702ac  fmuls 4, 5, 4
  04702b0  fmr 3, 2
  04702b4  bl 0x10a2e0
  04702b8  nop
  04702bc  lis 3, 135
  04702c0  lfs 1, 16(30)
  04702c4  lfs 2, 30808(3)
  04702c8  fmuls 1, 1, 2
  04702cc  stfs 1, 64(31)
  04702d0  lfs 1, 4(30)
  04702d4  lfs 2, 0(30)
  04702d8  fmuls 1, 1, 1
  04702dc  lfs 3, 16(31)
  04702e0  lfs 4, 20(31)
  04702e4  lwz 3, 8(30)
  04702e8  rlwinm 3, 3, 3, 29, 29
  04702ec  fmadds 1, 2, 2, 1
  04702f0  lfs 2, 8(30)
  04702f4  fabs 5, 2
  04702f8  fsqrts 1, 1
  04702fc  fabs 2, 1
  0470300  stfs 1, 124(1)
  0470304  fsubs 1, 2, 5
  0470308  stfs 1, 128(1)
  047030c  lwz 4, 124(1)
  0470310  lfs 1, 124(1)
  0470314  lwz 5, 128(1)
  0470318  fabs 6, 1
  047031c  lfs 1, 128(1)
  0470320  rlwimi 3, 5, 2, 30, 30
  0470324  fsub 7, 1, 31
  0470328  rlwimi 3, 4, 4, 28, 28
  047032c  fsub 8, 1, 31
  0470330  ori 4, 29, 0
  0470334  rlwimi 4, 3, 2, 26, 28
  0470338  slwi 3, 3, 2
  047033c  clrldi 4, 4, 32
  0470340  lfsx 1, 29, 3
  0470344  fsel 6, 7, 6, 5
  0470348  fsel 5, 8, 5, 2
  047034c  lfs 2, 4(4)
  0470350  fcmpu 0, 6, 31
  0470354  bt 1, 0x47035c
  0470358  b 0x47047c
  047035c  fsubs 7, 5, 6
  0470360  fadds 5, 5, 6
  0470364  addic 3, 1, 16
  0470368  li 6, 2
  047036c  addic 4, 3, 152
  0470370  addic 5, 3, 168
  0470374  mtctr 6
  0470378  fdivs 5, 7, 5
  047037c  fmuls 6, 5, 5
  0470380  stfs 5, 180(1)
  0470384  stfs 5, 172(1)
  0470388  stfs 5, 176(1)
  047038c  stfs 5, 168(1)
  0470390  lfs 8, 180(1)
  0470394  lfs 9, 172(1)
  0470398  lfs 10, 176(1)
  047039c  fmuls 7, 6, 6
  04703a0  fmuls 9, 9, 6
  04703a4  fmuls 8, 8, 7
  04703a8  fmuls 5, 7, 7
  04703ac  fmuls 7, 10, 7
  04703b0  stfs 9, 172(1)
  04703b4  fmuls 6, 8, 6
  04703b8  stfs 7, 176(1)
  04703bc  stfs 6, 180(1)
  04703c0  lfs 6, 152(3)
  04703c4  fmuls 6, 6, 5
  04703c8  stfs 6, 168(3)
  04703cc  lfs 6, 4(4)
  04703d0  addic 3, 3, 8
  04703d4  addic 4, 4, 8
  04703d8  fmuls 6, 6, 5
  04703dc  stfs 6, 4(5)
  04703e0  addic 5, 5, 8
  04703e4  bdnz 0x4703c0
  04703e8  li 5, 4
  04703ec  ori 3, 1, 0
  04703f0  mtctr 5
  04703f4  lis 4, 115
  04703f8  addic 5, 3, 168
  04703fc  addic 4, 4, 22752
  0470400  ori 7, 5, 0
  0470404  lfs 5, 168(3)
  0470408  lfs 6, 0(4)
  047040c  fmuls 5, 5, 6
  0470410  lfs 6, 4(4)
  0470414  addic 4, 4, 8
  0470418  stfs 5, 168(3)
  047041c  lfs 5, 4(5)
  0470420  addic 3, 3, 8
  0470424  fmuls 5, 5, 6
  0470428  stfs 5, 4(5)
  047042c  addic 5, 5, 8
  0470430  bdnz 0x470404
  0470434  ori 3, 1, 0
  0470438  mtctr 6
  047043c  lfs 5, 168(3)
  0470440  lfs 6, 4(7)
  0470444  fadds 5, 31, 5
  0470448  lfs 7, 8(7)
  047044c  lfs 31, 12(7)
  0470450  addic 3, 3, 16
  0470454  addic 7, 7, 16
  0470458  fadds 5, 5, 6
  047045c  fadds 5, 5, 7
  0470460  fadds 31, 5, 31
  0470464  bdnz 0x47043c
  0470468  lis 3, 71
  047046c  addi 3, 3, -2240
  0470470  lfs 5, 16(3)
  0470474  fadds 31, 31, 5
  0470478  fmadds 31, 31, 1, 2
  047047c  fneg 1, 31
  0470480  li 3, 0
  0470484  lis 4, 71
  0470488  lis 28, 114
  047048c  addi 29, 4, -2240
  0470490  stw 3, 120(1)
  0470494  lis 27, 114
  0470498  addic 3, 1, 120
  047049c  addic 5, 30, 20
  04704a0  stfs 1, 68(31)
  04704a4  lfs 1, 36(30)
  04704a8  lfs 2, 32(30)
  04704ac  fsubs 1, 4, 1
  04704b0  lfs 31, 100(29)
  04704b4  fsubs 3, 3, 2
  04704b8  lfs 4, -3048(28)
  04704bc  lfs 6, 36(29)
  04704c0  fmuls 2, 4, 31
  04704c4  lfs 5, -3052(27)
  04704c8  fmuls 4, 5, 6
  04704cc  fmuls 1, 1, 1
  04704d0  fmadds 1, 3, 3, 1
  04704d4  fmr 3, 2
  04704d8  fsqrts 1, 1
  04704dc  bl 0x109c30
  04704e0  nop
  04704e4  lfs 3, 104(29)
  04704e8  addic 3, 1, 116
  04704ec  lfs 4, 108(29)
  04704f0  addic 5, 30, 8
  04704f4  lfs 1, 40(30)
  04704f8  lfs 5, -3048(28)
  04704fc  lfs 6, -3052(27)
  0470500  fmuls 2, 5, 31
  0470504  fmuls 3, 5, 3
  0470508  fmuls 4, 6, 4
  047050c  bl 0x109c30
  0470510  nop
  0470514  lfs 1, 40(29)
  0470518  lfs 2, 72(31)
  047051c  lfs 3, 44(29)
  0470520  fadds 1, 2, 1
  0470524  lfs 4, 48(29)
  0470528  lfs 6, 52(29)
  047052c  fsubs 2, 3, 1
  0470530  fsubs 5, 4, 1
  0470534  fsub 7, 1, 2
  0470538  fsel 1, 7, 2, 1
  047053c  lfs 2, 56(29)
  0470540  fsub 7, 5, 1
  0470544  fsel 1, 7, 5, 1
  0470548  lfs 5, 60(29)
  047054c  lfs 7, 64(29)
  0470550  lfs 8, 20(30)
  0470554  fmuls 9, 1, 1
  0470558  fmuls 10, 9, 1
  047055c  fmuls 11, 9, 10
  0470560  fmadds 1, 10, 6, 1
  0470564  fmuls 10, 9, 11
  0470568  fmadds 1, 11, 2, 1
  047056c  fmuls 9, 9, 10
  0470570  fmadds 1, 10, 5, 1
  0470574  fmadds 1, 9, 7, 1
  0470578  fmuls 1, 1, 8
  047057c  stfs 1, 0(30)
  0470580  lfs 9, 72(31)
  0470584  fsubs 3, 3, 9
  0470588  fsubs 4, 4, 9
  047058c  fsub 10, 9, 3
  0470590  fsel 3, 10, 3, 9
  0470594  fsub 9, 4, 3
  0470598  fsel 3, 9, 4, 3
  047059c  fmuls 4, 3, 3
  04705a0  fmuls 9, 4, 3
  04705a4  fmuls 10, 4, 9
  04705a8  fmadds 3, 9, 6, 3
  04705ac  fmuls 6, 4, 10
  04705b0  fmadds 2, 10, 2, 3
  04705b4  fmuls 3, 4, 6
  04705b8  fmadds 2, 6, 5, 2
  04705bc  fmadds 2, 3, 7, 2
  04705c0  fmuls 2, 2, 8
  04705c4  stfs 2, 4(30)
  04705c8  lfs 2, 16(31)
  04705cc  fadds 1, 2, 1
  04705d0  lfs 2, 20(31)
  04705d4  lfs 3, 24(31)
  04705d8  stfs 1, 16(31)
  04705dc  lfs 4, 4(30)
  04705e0  fadds 2, 2, 4
  04705e4  stfs 2, 20(31)
  04705e8  lfs 4, 8(30)
  04705ec  fadds 3, 3, 4
  04705f0  stfs 3, 24(31)
  04705f4  lfs 3, 36(30)
  04705f8  lfs 4, 32(30)
  04705fc  fsubs 2, 2, 3
  0470600  fsubs 1, 1, 4
  0470604  fmuls 2, 2, 2
  0470608  fmadds 1, 1, 1, 2
  047060c  lfs 2, 20(29)
  0470610  fsqrts 1, 1
  0470614  fcmpu 0, 1, 2
  0470618  cror 6, 1, 2
  047061c  bt 6, 0x470658
  0470620  lis 3, 71
  0470624  li 4, 1
  0470628  addi 3, 3, -2240
  047062c  stb 4, 32(31)
  0470630  lfs 1, 92(3)
  0470634  lfs 2, 0(3)
  0470638  bl 0xfcbe8
  047063c  nop
  0470640  lis 3, 114
  0470644  lfs 2, -3056(3)
  0470648  fmuls 1, 1, 2
  047064c  bl 0x502758
  0470650  nop
  0470654  stw 3, 48(30)
  0470658  ld 0, 368(1)
  047065c  mtlr 0
  0470660  lfd 31, 344(1)
  0470664  ld 27, 304(1)
  0470668  ld 28, 312(1)
  047066c  ld 29, 320(1)
  0470670  ld 30, 328(1)
  0470674  ld 31, 336(1)
  0470678  addi 1, 1, 352
  047067c  blr
