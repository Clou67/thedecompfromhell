# game/update/moby792.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M792_0045f698:   # 0x45f698, 0x438 bytes
  045f698  stdu 1, -2576(1)
  045f69c  mflr 0
  045f6a0  std 0, 2592(1)
  045f6a4  stfd 29, 2552(1)
  045f6a8  stfd 30, 2560(1)
  045f6ac  stfd 31, 2568(1)
  045f6b0  std 31, 2544(1)
  045f6b4  lis 4, 269
  045f6b8  std 27, 2512(1)
  045f6bc  ori 31, 3, 0
  045f6c0  lis 27, 70
  045f6c4  addi 27, 27, -2436
  045f6c8  lwz 3, -12592(4)
  045f6cc  std 30, 2536(1)
  045f6d0  std 29, 2528(1)
  045f6d4  std 28, 2520(1)
  045f6d8  std 26, 2504(1)
  045f6dc  std 25, 2496(1)
  045f6e0  std 24, 2488(1)
  045f6e4  std 23, 2480(1)
  045f6e8  std 22, 2472(1)
  045f6ec  std 21, 2464(1)
  045f6f0  cmpwi 3, 0
  045f6f4  bf 2, 0x45fa88
  045f6f8  lis 3, 151
  045f6fc  lfs 1, 0(27)
  045f700  addic 3, 3, -16268
  045f704  lbz 3, 2(3)
  045f708  cmpwi 3, 0
  045f70c  bt 2, 0x45f714
  045f710  lfs 1, 4(27)
  045f714  lis 28, 135
  045f718  li 30, 0
  045f71c  ori 21, 1, 0
  045f720  ori 26, 30, 0
  045f724  stfs 1, 15440(28)
  045f728  li 3, 19
  045f72c  bl 0x685c4
  045f730  nop
  045f734  std 3, 280(21)
  045f738  li 3, 0
  045f73c  lis 9, 0
  045f740  li 4, 0
  045f744  li 5, 1
  045f748  li 6, 1
  045f74c  li 7, 1
  045f750  li 8, 0
  045f754  ori 9, 9, 65424
  045f758  bl 0x502fd4
  045f75c  nop
  045f760  std 3, 288(21)
  045f764  li 4, 0
  045f768  li 3, 0
  045f76c  li 5, 0
  045f770  li 6, 0
  045f774  li 7, 0
  045f778  li 8, 0
  045f77c  bl 0x502f08
  045f780  nop
  045f784  std 3, 272(21)
  045f788  lis 3, 269
  045f78c  lis 4, 269
  045f790  lis 5, 135
  045f794  lis 6, 135
  045f798  li 7, 128
  045f79c  lwz 8, -12580(3)
  045f7a0  lwz 3, -12584(4)
  045f7a4  lwz 4, 15456(5)
  045f7a8  lwz 6, 15460(6)
  045f7ac  ori 5, 8, 0
  045f7b0  bl 0x502ea8
  045f7b4  nop
  045f7b8  lis 4, 161
  045f7bc  std 3, 296(21)
  045f7c0  lwz 3, 1808(4)
  045f7c4  addic 3, 3, 3
  045f7c8  clrlwi 3, 3, 30
  045f7cc  bl 0x502730
  045f7d0  nop
  045f7d4  lfs 2, 8(27)
  045f7d8  lfs 3, 15440(28)
  045f7dc  lis 25, 135
  045f7e0  lis 24, 135
  045f7e4  lfs 30, 12(27)
  045f7e8  fmuls 31, 3, 2
  045f7ec  ori 23, 21, 0
  045f7f0  lfs 29, 16(27)
  045f7f4  ori 29, 26, 0
  045f7f8  addic 25, 25, 15472
  045f7fc  addic 24, 24, 15476
  045f800  ori 22, 23, 0
  045f804  fdivs 31, 1, 31
  045f808  srawi 3, 29, 1
  045f80c  lfs 1, 0(25)
  045f810  lfs 2, 0(24)
  045f814  subc 3, 30, 3
  045f818  stfs 1, 240(23)
  045f81c  addic 3, 3, 1
  045f820  stfs 2, 244(23)
  045f824  extsw 3, 3
  045f828  bl 0x502730
  045f82c  nop
  045f830  lfs 2, 15440(28)
  045f834  fadds 2, 2, 31
  045f838  lis 3, 135
  045f83c  lis 4, 135
  045f840  lwz 3, 15464(3)
  045f844  lwz 4, 15468(4)
  045f848  fdivs 1, 1, 2
  045f84c  fcmpu 0, 1, 30
  045f850  cror 6, 0, 2
  045f854  bt 6, 0x45f860
  045f858  fmr 1, 30
  045f85c  b 0x45f870
  045f860  fcmpu 0, 1, 29
  045f864  cror 6, 1, 2
  045f868  bt 6, 0x45f870
  045f86c  fmr 1, 29
  045f870  extsw 3, 3
  045f874  extsw 4, 4
  045f878  bl 0x5027bc
  045f87c  nop
  045f880  addic 29, 29, 1
  045f884  stw 3, 224(22)
  045f888  addic 25, 25, 8
  045f88c  cmpwi 29, 4
  045f890  addic 23, 23, 8
  045f894  addic 24, 24, 8
  045f898  addic 22, 22, 4
  045f89c  bt 0, 0x45f808
  045f8a0  addic 30, 30, 1
  045f8a4  addic 21, 21, 144
  045f8a8  cmpwi 30, 16
  045f8ac  bt 0, 0x45f728
  045f8b0  lis 3, 15897
  045f8b4  stw 26, 128(1)
  045f8b8  stw 26, 132(1)
  045f8bc  lis 4, -16871
  045f8c0  ori 3, 3, 39322
  045f8c4  ori 4, 4, 39322
  045f8c8  lis 5, 165
  045f8cc  lis 30, 161
  045f8d0  stw 3, 136(1)
  045f8d4  addic 5, 5, -28284
  045f8d8  stw 26, 140(1)
  045f8dc  addic 30, 30, 24396
  045f8e0  lbz 3, 33(31)
  045f8e4  stw 26, 144(1)
  045f8e8  slwi 3, 3, 2
  045f8ec  stw 26, 148(1)
  045f8f0  stw 4, 152(1)
  045f8f4  stw 26, 156(1)
  045f8f8  lfs 31, 20(27)
  045f8fc  lwzx 31, 5, 3
  045f900  lis 3, 164
  045f904  lhz 4, 0(31)
  045f908  rlwinm 4, 4, 8, 9, 23
  045f90c  lwz 3, -28512(3)
  045f910  addc 3, 3, 4
  045f914  clrldi 3, 3, 32
  045f918  lhz 4, 166(3)
  045f91c  cmpwi 4, 79
  045f920  bf 2, 0x45fa74
  045f924  lbz 4, 32(3)
  045f928  cmpwi 4, 1
  045f92c  bf 2, 0x45fa74
  045f930  ori 4, 3, 0
  045f934  fmr 1, 31
  045f938  lis 5, 16800
  045f93c  addic 3, 1, 112
  045f940  lfs 2, 16(4)
  045f944  lwz 29, 120(4)
  045f948  stfs 2, 112(1)
  045f94c  lfs 2, 20(4)
  045f950  stfs 2, 116(1)
  045f954  lfs 2, 24(4)
  045f958  stw 5, 124(1)
  045f95c  stfs 2, 120(1)
  045f960  bl 0x502910
  045f964  nop
  045f968  cmpwi 3, -1
  045f96c  bt 2, 0x45fa74
  045f970  lhz 3, 800(29)
  045f974  ori 28, 26, 0
  045f978  extsh 3, 3
  045f97c  cmpwi 3, 0
  045f980  bf 1, 0x45fa74
  045f984  ori 24, 1, 0
  045f988  addic 22, 24, 160
  045f98c  lhz 3, 802(29)
  045f990  ori 25, 26, 0
  045f994  subc 3, 3, 28
  045f998  ori 23, 29, 0
  045f99c  addic 27, 3, 15
  045f9a0  clrlwi 27, 27, 28
  045f9a4  lis 3, 269
  045f9a8  lwz 3, -12588(3)
  045f9ac  cmpwi 3, 0
  045f9b0  bf 2, 0x45fa48
  045f9b4  li 5, 4
  045f9b8  ori 3, 26, 0
  045f9bc  addic 4, 24, 160
  045f9c0  mtctr 5
  045f9c4  srawi 5, 3, 1
  045f9c8  rlwinm 6, 3, 4, 27, 27
  045f9cc  addc 5, 5, 27
  045f9d0  addic 7, 1, 128
  045f9d4  rlwinm 5, 5, 4, 24, 27
  045f9d8  addc 6, 6, 7
  045f9dc  addc 5, 5, 23
  045f9e0  clrldi 6, 6, 32
  045f9e4  clrldi 5, 5, 32
  045f9e8  addic 3, 3, 1
  045f9ec  lfs 1, 0(6)
  045f9f0  lfs 2, 32(5)
  045f9f4  fadds 1, 2, 1
  045f9f8  stfs 1, 0(4)
  045f9fc  lfs 1, 36(5)
  045fa00  lfs 2, 4(6)
  045fa04  fadds 1, 1, 2
  045fa08  stfs 1, 4(4)
  045fa0c  lfs 1, 40(5)
  045fa10  lfs 2, 8(6)
  045fa14  fadds 1, 1, 2
  045fa18  stfs 1, 8(4)
  045fa1c  lfs 1, 44(5)
  045fa20  stfs 1, 12(4)
  045fa24  addic 4, 4, 16
  045fa28  bdnz 0x45f9c4
  045fa2c  ori 3, 22, 0
  045fa30  li 4, 0
  045fa34  lwz 6, 28(30)
  045fa38  li 5, 0
  045fa3c  li 7, 9
  045fa40  bl 0x72280
  045fa44  nop
  045fa48  addic 25, 25, 1
  045fa4c  addic 23, 23, 256
  045fa50  cmpwi 25, 3
  045fa54  bt 0, 0x45f9a4
  045fa58  lhz 3, 800(29)
  045fa5c  addic 28, 28, 1
  045fa60  addic 22, 22, 144
  045fa64  extsh 3, 3
  045fa68  addic 24, 24, 144
  045fa6c  cmpw 28, 3
  045fa70  bt 0, 0x45f98c
  045fa74  lhz 3, 0(31)
  045fa78  addic 31, 31, 2
  045fa7c  extsh 3, 3
  045fa80  cmpwi 3, 0
  045fa84  bf 0, 0x45f900
  045fa88  ld 0, 2592(1)
  045fa8c  mtlr 0
  045fa90  lfd 29, 2552(1)
  045fa94  lfd 30, 2560(1)
  045fa98  lfd 31, 2568(1)
  045fa9c  ld 21, 2464(1)
  045faa0  ld 22, 2472(1)
  045faa4  ld 23, 2480(1)
  045faa8  ld 24, 2488(1)
  045faac  ld 25, 2496(1)
  045fab0  ld 26, 2504(1)
  045fab4  ld 27, 2512(1)
  045fab8  ld 28, 2520(1)
  045fabc  ld 29, 2528(1)
  045fac0  ld 30, 2536(1)
  045fac4  ld 31, 2544(1)
  045fac8  addi 1, 1, 2576
  045facc  blr

M792_0045fad0:   # 0x45fad0, 0x14 bytes
  045fad0  lis 3, 135
  045fad4  lis 4, 1
  045fad8  addic 3, 3, 15508
  045fadc  stw 4, 72(3)
  045fae0  blr

UpdateMoby_792:   # 0x45fb08, 0x8a4 bytes
  045fb08  stdu 1, -336(1)
  045fb0c  mflr 0
  045fb10  std 0, 352(1)
  045fb14  std 31, 328(1)
  045fb18  ori 31, 3, 0
  045fb1c  lis 3, 164
  045fb20  std 30, 320(1)
  045fb24  addic 5, 1, 144
  045fb28  lwz 30, 120(31)
  045fb2c  lfs 1, 16(31)
  045fb30  lfs 2, 20(31)
  045fb34  fneg 1, 1
  045fb38  lfs 3, 24(31)
  045fb3c  fneg 2, 2
  045fb40  lwz 3, -28512(3)
  045fb44  fneg 3, 3
  045fb48  lwz 4, 160(30)
  045fb4c  lfs 4, 28(31)
  045fb50  lfs 5, 64(31)
  045fb54  slwi 4, 4, 8
  045fb58  stfs 4, 124(1)
  045fb5c  std 29, 312(1)
  045fb60  lfs 4, 68(31)
  045fb64  addc 29, 3, 4
  045fb68  li 4, 0
  045fb6c  clrldi 29, 29, 32
  045fb70  stfs 1, 112(1)
  045fb74  stfs 5, 128(1)
  045fb78  ori 3, 29, 0
  045fb7c  lfs 1, 72(31)
  045fb80  stfs 2, 116(1)
  045fb84  stfs 4, 132(1)
  045fb88  stfs 3, 120(1)
  045fb8c  lfs 2, 76(31)
  045fb90  stfs 1, 136(1)
  045fb94  std 28, 304(1)
  045fb98  stfs 2, 140(1)
  045fb9c  bl 0xf1114
  045fba0  nop
  045fba4  lfs 1, 144(1)
  045fba8  lfs 2, 148(1)
  045fbac  stfs 1, 16(31)
  045fbb0  lfs 3, 152(1)
  045fbb4  stfs 2, 20(31)
  045fbb8  lfs 4, 156(1)
  045fbbc  lbz 3, 32(31)
  045fbc0  stfs 3, 24(31)
  045fbc4  cmpwi 3, 6
  045fbc8  stfs 4, 28(31)
  045fbcc  bt 2, 0x460344
  045fbd0  cmpwi 3, 5
  045fbd4  bt 2, 0x45fe14
  045fbd8  cmpwi 3, 4
  045fbdc  bt 2, 0x45ff48
  045fbe0  cmpwi 3, 3
  045fbe4  bt 2, 0x45fe14
  045fbe8  cmpwi 3, 2
  045fbec  bt 2, 0x45ff48
  045fbf0  cmpwi 3, 1
  045fbf4  bt 2, 0x45fdd8
  045fbf8  cmpwi 3, 0
  045fbfc  bf 2, 0x460344
  045fc00  ori 3, 29, 0
  045fc04  addic 5, 1, 160
  045fc08  li 4, 0
  045fc0c  bl 0xf1038
  045fc10  nop
  045fc14  lwz 3, 160(1)
  045fc18  lwz 4, 164(1)
  045fc1c  lis 5, 70
  045fc20  lfs 1, 160(1)
  045fc24  lis 6, 115
  045fc28  lfs 2, 164(1)
  045fc2c  addi 5, 5, -1304
  045fc30  fabs 3, 1
  045fc34  fabs 2, 2
  045fc38  rlwinm 4, 4, 3, 29, 29
  045fc3c  fsubs 1, 3, 2
  045fc40  stfs 1, 228(1)
  045fc44  lfs 4, 0(5)
  045fc48  addic 5, 6, 22784
  045fc4c  lwz 6, 228(1)
  045fc50  lfs 1, 228(1)
  045fc54  rlwimi 4, 6, 2, 30, 30
  045fc58  fsub 5, 1, 4
  045fc5c  fsub 6, 1, 4
  045fc60  rlwimi 4, 3, 4, 28, 28
  045fc64  ori 3, 5, 0
  045fc68  rlwimi 3, 4, 2, 26, 28
  045fc6c  slwi 4, 4, 2
  045fc70  clrldi 3, 3, 32
  045fc74  fsel 5, 5, 3, 2
  045fc78  lfsx 1, 5, 4
  045fc7c  fsel 3, 6, 2, 3
  045fc80  lfs 2, 4(3)
  045fc84  fcmpu 0, 5, 4
  045fc88  bt 1, 0x45fc90
  045fc8c  b 0x45fdb0
  045fc90  fsubs 6, 3, 5
  045fc94  fadds 3, 3, 5
  045fc98  addic 3, 1, 16
  045fc9c  li 7, 2
  045fca0  addic 4, 3, 248
  045fca4  addic 5, 3, 264
  045fca8  mtctr 7
  045fcac  fdivs 3, 6, 3
  045fcb0  fmuls 5, 3, 3
  045fcb4  stfs 3, 276(1)
  045fcb8  stfs 3, 268(1)
  045fcbc  stfs 3, 272(1)
  045fcc0  stfs 3, 264(1)
  045fcc4  lfs 7, 276(1)
  045fcc8  lfs 8, 268(1)
  045fccc  lfs 9, 272(1)
  045fcd0  fmuls 6, 5, 5
  045fcd4  fmuls 8, 8, 5
  045fcd8  fmuls 7, 7, 6
  045fcdc  fmuls 3, 6, 6
  045fce0  fmuls 6, 9, 6
  045fce4  stfs 8, 268(1)
  045fce8  fmuls 5, 7, 5
  045fcec  stfs 6, 272(1)
  045fcf0  stfs 5, 276(1)
  045fcf4  lfs 5, 248(3)
  045fcf8  fmuls 5, 5, 3
  045fcfc  stfs 5, 264(3)
  045fd00  lfs 5, 4(4)
  045fd04  addic 3, 3, 8
  045fd08  addic 4, 4, 8
  045fd0c  fmuls 5, 5, 3
  045fd10  stfs 5, 4(5)
  045fd14  addic 5, 5, 8
  045fd18  bdnz 0x45fcf4
  045fd1c  li 5, 4
  045fd20  ori 3, 1, 0
  045fd24  mtctr 5
  045fd28  lis 4, 115
  045fd2c  addic 5, 3, 264
  045fd30  addic 4, 4, 22752
  045fd34  ori 6, 5, 0
  045fd38  lfs 3, 264(3)
  045fd3c  lfs 5, 0(4)
  045fd40  fmuls 3, 3, 5
  045fd44  lfs 5, 4(4)
  045fd48  addic 4, 4, 8
  045fd4c  stfs 3, 264(3)
  045fd50  lfs 3, 4(5)
  045fd54  addic 3, 3, 8
  045fd58  fmuls 3, 3, 5
  045fd5c  stfs 3, 4(5)
  045fd60  addic 5, 5, 8
  045fd64  bdnz 0x45fd38
  045fd68  ori 3, 1, 0
  045fd6c  mtctr 7
  045fd70  lfs 3, 264(3)
  045fd74  fadds 3, 4, 3
  045fd78  lfs 4, 4(6)
  045fd7c  addic 3, 3, 16
  045fd80  lfs 5, 8(6)
  045fd84  lfs 6, 12(6)
  045fd88  addic 6, 6, 16
  045fd8c  fadds 3, 3, 4
  045fd90  fadds 4, 3, 5
  045fd94  fadds 4, 4, 6
  045fd98  bdnz 0x45fd70
  045fd9c  lis 3, 70
  045fda0  addi 3, 3, -1304
  045fda4  lfs 3, 4(3)
  045fda8  fadds 4, 4, 3
  045fdac  fmadds 4, 4, 1, 2
  045fdb0  li 7, 1
  045fdb4  stfs 4, 72(31)
  045fdb8  ori 3, 29, 0
  045fdbc  li 4, 3
  045fdc0  li 5, 0
  045fdc4  li 6, 0
  045fdc8  stb 7, 32(31)
  045fdcc  bl 0xfddc0
  045fdd0  nop
  045fdd4  b 0x460344
  045fdd8  lis 3, 151
  045fddc  lbz 5, 176(31)
  045fde0  lis 4, 161
  045fde4  addic 4, 4, -13692
  045fde8  lwz 3, -25488(3)
  045fdec  addc 4, 5, 4
  045fdf0  slwi 3, 3, 4
  045fdf4  clrldi 4, 4, 32
  045fdf8  extsw 3, 3
  045fdfc  lbzx 3, 4, 3
  045fe00  cmpwi 3, 255
  045fe04  bf 2, 0x460344
  045fe08  li 3, 5
  045fe0c  stb 3, 32(31)
  045fe10  b 0x460344
  045fe14  lis 5, 151
  045fe18  addic 5, 5, -25376
  045fe1c  lwz 4, 764(5)
  045fe20  cmpw 4, 31
  045fe24  bf 2, 0x45fe40
  045fe28  lhz 6, 782(5)
  045fe2c  cmpwi 6, 0
  045fe30  bf 2, 0x45fe40
  045fe34  lbz 6, 188(31)
  045fe38  cmpwi 6, 0
  045fe3c  bt 2, 0x45feb4
  045fe40  lfs 4, 132(5)
  045fe44  lfs 5, 128(5)
  045fe48  fsubs 2, 2, 4
  045fe4c  fsubs 1, 1, 5
  045fe50  lis 6, 70
  045fe54  addi 6, 6, -1304
  045fe58  fmuls 2, 2, 2
  045fe5c  fmadds 1, 1, 1, 2
  045fe60  lfs 2, 8(6)
  045fe64  fsqrts 1, 1
  045fe68  fcmpu 0, 1, 2
  045fe6c  cror 6, 1, 2
  045fe70  bt 6, 0x45ff34
  045fe74  lis 6, 70
  045fe78  cmpwi 3, 5
  045fe7c  addi 6, 6, -1304
  045fe80  lfs 1, 12(6)
  045fe84  bf 2, 0x45fe98
  045fe88  fsubs 2, 3, 1
  045fe8c  lfs 4, 136(5)
  045fe90  fcmpu 0, 4, 2
  045fe94  bt 0, 0x45feb4
  045fe98  cmpwi 3, 3
  045fe9c  bf 2, 0x45ff34
  045fea0  fadds 1, 3, 1
  045fea4  lfs 2, 136(5)
  045fea8  fcmpu 0, 2, 1
  045feac  cror 6, 0, 2
  045feb0  bt 6, 0x45ff34
  045feb4  cmpwi 3, 5
  045feb8  bt 2, 0x45fec4
  045febc  cmpwi 3, 1
  045fec0  bf 2, 0x45fefc
  045fec4  li 6, 2
  045fec8  ori 3, 29, 0
  045fecc  li 4, 0
  045fed0  li 5, 0
  045fed4  stb 6, 32(31)
  045fed8  bl 0xfdcf0
  045fedc  nop
  045fee0  li 3, 2
  045fee4  li 4, 4
  045fee8  ori 5, 29, 0
  045feec  bl 0x15d12c
  045fef0  nop
  045fef4  stw 3, 164(30)
  045fef8  b 0x460344
  045fefc  li 6, 4
  045ff00  ori 3, 29, 0
  045ff04  li 4, 2
  045ff08  li 5, 0
  045ff0c  stb 6, 32(31)
  045ff10  bl 0xfdcf0
  045ff14  nop
  045ff18  li 3, 0
  045ff1c  li 4, 4
  045ff20  ori 5, 29, 0
  045ff24  bl 0x15d12c
  045ff28  nop
  045ff2c  stw 3, 164(30)
  045ff30  b 0x460344
  045ff34  cmpw 4, 31
  045ff38  bt 2, 0x460344
  045ff3c  li 3, 0
  045ff40  stb 3, 188(31)
  045ff44  b 0x460344
  045ff48  ori 3, 29, 0
  045ff4c  addic 5, 1, 160
  045ff50  li 4, 0
  045ff54  bl 0xf1038
  045ff58  nop
  045ff5c  lwz 3, 160(1)
  045ff60  lwz 4, 164(1)
  045ff64  lis 5, 70
  045ff68  lfs 1, 160(1)
  045ff6c  lis 6, 115
  045ff70  lfs 2, 164(1)
  045ff74  addi 5, 5, -1304
  045ff78  fabs 3, 1
  045ff7c  fabs 9, 2
  045ff80  rlwinm 4, 4, 3, 29, 29
  045ff84  fsubs 1, 3, 9
  045ff88  stfs 1, 224(1)
  045ff8c  lfs 4, 0(5)
  045ff90  lfs 5, 16(31)
  045ff94  addic 5, 6, 22784
  045ff98  lfs 6, 20(31)
  045ff9c  lfs 7, 24(31)
  045ffa0  lwz 6, 224(1)
  045ffa4  lfs 1, 224(1)
  045ffa8  rlwimi 4, 6, 2, 30, 30
  045ffac  fsub 8, 1, 4
  045ffb0  rlwimi 4, 3, 4, 28, 28
  045ffb4  fsub 10, 1, 4
  045ffb8  ori 3, 5, 0
  045ffbc  rlwimi 3, 4, 2, 26, 28
  045ffc0  slwi 4, 4, 2
  045ffc4  clrldi 3, 3, 32
  045ffc8  fsel 8, 8, 3, 9
  045ffcc  lfsx 1, 5, 4
  045ffd0  lfs 2, 4(3)
  045ffd4  fsel 3, 10, 9, 3
  045ffd8  fcmpu 0, 8, 4
  045ffdc  bt 1, 0x45ffe4
  045ffe0  b 0x460104
  045ffe4  fsubs 9, 3, 8
  045ffe8  fadds 3, 3, 8
  045ffec  addic 3, 1, 16
  045fff0  li 7, 2
  045fff4  addic 5, 3, 232
  045fff8  addic 4, 3, 216
  045fffc  mtctr 7
  0460000  fdivs 3, 9, 3
  0460004  fmuls 8, 3, 3
  0460008  stfs 3, 244(1)
  046000c  stfs 3, 236(1)
  0460010  stfs 3, 240(1)
  0460014  stfs 3, 232(1)
  0460018  lfs 10, 244(1)
  046001c  lfs 11, 236(1)
  0460020  lfs 12, 240(1)
  0460024  fmuls 9, 8, 8
  0460028  fmuls 11, 11, 8
  046002c  fmuls 10, 10, 9
  0460030  fmuls 3, 9, 9
  0460034  fmuls 9, 12, 9
  0460038  stfs 11, 236(1)
  046003c  fmuls 8, 10, 8
  0460040  stfs 9, 240(1)
  0460044  stfs 8, 244(1)
  0460048  lfs 8, 216(3)
  046004c  fmuls 8, 8, 3
  0460050  stfs 8, 232(3)
  0460054  lfs 8, 4(4)
  0460058  addic 4, 4, 8
  046005c  fmuls 8, 8, 3
  0460060  addic 3, 3, 8
  0460064  stfs 8, 4(5)
  0460068  addic 5, 5, 8
  046006c  bdnz 0x460048
  0460070  li 5, 4
  0460074  ori 3, 1, 0
  0460078  mtctr 5
  046007c  lis 4, 115
  0460080  addic 5, 3, 232
  0460084  addic 4, 4, 22752
  0460088  ori 6, 5, 0
  046008c  lfs 3, 232(3)
  0460090  lfs 8, 0(4)
  0460094  fmuls 3, 3, 8
  0460098  lfs 8, 4(4)
  046009c  addic 4, 4, 8
  04600a0  stfs 3, 232(3)
  04600a4  lfs 3, 4(5)
  04600a8  addic 3, 3, 8
  04600ac  fmuls 3, 3, 8
  04600b0  stfs 3, 4(5)
  04600b4  addic 5, 5, 8
  04600b8  bdnz 0x46008c
  04600bc  ori 3, 1, 0
  04600c0  mtctr 7
  04600c4  lfs 3, 232(3)
  04600c8  fadds 3, 4, 3
  04600cc  addic 3, 3, 16
  04600d0  lfs 4, 4(6)
  04600d4  lfs 8, 8(6)
  04600d8  lfs 9, 12(6)
  04600dc  addic 6, 6, 16
  04600e0  fadds 3, 3, 4
  04600e4  fadds 4, 3, 8
  04600e8  fadds 4, 4, 9
  04600ec  bdnz 0x4600c4
  04600f0  lis 3, 70
  04600f4  addi 3, 3, -1304
  04600f8  lfs 3, 4(3)
  04600fc  fadds 4, 4, 3
  0460100  fmadds 4, 4, 1, 2
  0460104  lis 28, 151
  0460108  stfs 4, 72(31)
  046010c  addic 28, 28, -25376
  0460110  lis 3, 70
  0460114  lfs 2, 132(28)
  0460118  lfs 1, 128(28)
  046011c  fsubs 3, 6, 2
  0460120  fsubs 4, 5, 1
  0460124  addi 3, 3, -1304
  0460128  fmuls 3, 3, 3
  046012c  fmadds 3, 4, 4, 3
  0460130  lfs 4, 16(3)
  0460134  fsqrts 3, 3
  0460138  fcmpu 0, 3, 4
  046013c  cror 6, 1, 2
  0460140  bt 6, 0x4601c8
  0460144  fsubs 3, 7, 4
  0460148  lfs 4, 136(28)
  046014c  fcmpu 0, 4, 3
  0460150  cror 6, 1, 2
  0460154  bt 6, 0x4601c8
  0460158  li 4, 0
  046015c  lwz 3, 164(30)
  0460160  cmpwi 3, -1
  0460164  stw 4, 88(29)
  0460168  bt 2, 0x4601ac
  046016c  sldi 4, 3, 7
  0460170  sldi 6, 3, 4
  0460174  lis 5, 150
  0460178  subc 4, 4, 6
  046017c  addic 5, 5, 14176
  0460180  extsw 4, 4
  0460184  addc 4, 5, 4
  0460188  lwz 5, 136(4)
  046018c  cmpw 5, 29
  0460190  bf 2, 0x4601ac
  0460194  lbz 4, 116(4)
  0460198  cmpwi 4, 0
  046019c  bt 2, 0x4601ac
  04601a0  extsw 3, 3
  04601a4  bl 0x15cdb0
  04601a8  nop
  04601ac  li 3, -1
  04601b0  stw 3, 164(30)
  04601b4  lfs 1, 128(28)
  04601b8  lfs 2, 132(28)
  04601bc  lfs 5, 16(31)
  04601c0  lfs 6, 20(31)
  04601c4  lfs 7, 24(31)
  04601c8  lwz 3, 88(29)
  04601cc  cmpwi 3, 0
  04601d0  bf 2, 0x460260
  04601d4  fsubs 2, 6, 2
  04601d8  fsubs 1, 5, 1
  04601dc  lis 3, 70
  04601e0  addi 3, 3, -1304
  04601e4  fmuls 2, 2, 2
  04601e8  fmadds 1, 1, 1, 2
  04601ec  lfs 2, 20(3)
  04601f0  fsqrts 1, 1
  04601f4  fcmpu 0, 1, 2
  04601f8  bt 1, 0x46021c
  04601fc  lis 3, 70
  0460200  addi 3, 3, -1304
  0460204  lfs 1, 24(3)
  0460208  lfs 2, 136(28)
  046020c  fsubs 1, 7, 1
  0460210  fcmpu 0, 2, 1
  0460214  cror 6, 0, 2
  0460218  bt 6, 0x460260
  046021c  lis 3, 16256
  0460220  stw 3, 88(29)
  0460224  lbz 3, 32(31)
  0460228  cmpwi 3, 2
  046022c  bf 2, 0x460248
  0460230  li 3, 2
  0460234  li 4, 4
  0460238  ori 5, 29, 0
  046023c  bl 0x15d12c
  0460240  nop
  0460244  b 0x46025c
  0460248  li 3, 0
  046024c  li 4, 4
  0460250  ori 5, 29, 0
  0460254  bl 0x15d12c
  0460258  nop
  046025c  stw 3, 164(30)
  0460260  lbz 3, 112(29)
  0460264  rlwinm 3, 3, 0, 30, 30
  0460268  cmpwi 3, 0
  046026c  bt 2, 0x460344
  0460270  lwz 3, 164(30)
  0460274  cmpwi 3, -1
  0460278  bt 2, 0x4602bc
  046027c  sldi 4, 3, 7
  0460280  sldi 6, 3, 4
  0460284  lis 5, 150
  0460288  subc 4, 4, 6
  046028c  addic 5, 5, 14176
  0460290  extsw 4, 4
  0460294  addc 4, 5, 4
  0460298  lwz 5, 136(4)
  046029c  cmpw 5, 29
  04602a0  bf 2, 0x4602bc
  04602a4  lbz 4, 116(4)
  04602a8  cmpwi 4, 0
  04602ac  bt 2, 0x4602bc
  04602b0  extsw 3, 3
  04602b4  bl 0x15cdb0
  04602b8  nop
  04602bc  li 3, -1
  04602c0  stw 3, 164(30)
  04602c4  lbz 3, 32(31)
  04602c8  cmpwi 3, 2
  04602cc  bf 2, 0x460308
  04602d0  li 6, 3
  04602d4  ori 3, 29, 0
  04602d8  li 4, 1
  04602dc  li 5, 0
  04602e0  stb 6, 32(31)
  04602e4  li 6, 0
  04602e8  bl 0xfddc0
  04602ec  nop
  04602f0  li 3, 3
  04602f4  li 4, 0
  04602f8  ori 5, 29, 0
  04602fc  bl 0x15d12c
  0460300  nop
  0460304  b 0x46033c
  0460308  li 6, 5
  046030c  ori 3, 29, 0
  0460310  li 4, 3
  0460314  li 5, 0
  0460318  stb 6, 32(31)
  046031c  li 6, 0
  0460320  bl 0xfddc0
  0460324  nop
  0460328  li 3, 1
  046032c  li 4, 0
  0460330  ori 5, 29, 0
  0460334  bl 0x15d12c
  0460338  nop
  046033c  li 3, 1
  0460340  stb 3, 188(31)
  0460344  lfs 1, 112(1)
  0460348  lfs 2, 16(31)
  046034c  addic 3, 30, 96
  0460350  lfs 3, 116(1)
  0460354  addic 4, 1, 112
  0460358  fadds 1, 1, 2
  046035c  addic 5, 1, 128
  0460360  lfs 2, 20(31)
  0460364  addic 6, 31, 64
  0460368  lfs 4, 120(1)
  046036c  fadds 2, 3, 2
  0460370  lfs 3, 24(31)
  0460374  fadds 3, 4, 3
  0460378  stfs 1, 112(1)
  046037c  stfs 2, 116(1)
  0460380  stfs 3, 120(1)
  0460384  bl 0x112900
  0460388  nop
  046038c  ld 0, 352(1)
  0460390  mtlr 0
  0460394  ld 28, 304(1)
  0460398  ld 29, 312(1)
  046039c  ld 30, 320(1)
  04603a0  ld 31, 328(1)
  04603a4  addi 1, 1, 336
  04603a8  blr
