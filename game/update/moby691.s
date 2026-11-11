# game/update/moby691.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M691_0041f770:   # 0x41f770, 0x2a4 bytes
  041f770  stdu 1, -192(1)
  041f774  mflr 0
  041f778  std 0, 208(1)
  041f77c  stfd 31, 184(1)
  041f780  std 30, 168(1)
  041f784  std 25, 128(1)
  041f788  std 24, 120(1)
  041f78c  ori 30, 4, 0
  041f790  ori 25, 5, 0
  041f794  std 31, 176(1)
  041f798  ori 24, 6, 0
  041f79c  ori 31, 7, 0
  041f7a0  lwz 4, 372(30)
  041f7a4  std 29, 160(1)
  041f7a8  std 28, 152(1)
  041f7ac  std 27, 144(1)
  041f7b0  std 26, 136(1)
  041f7b4  cmpwi 4, -1
  041f7b8  bt 2, 0x41f9c8
  041f7bc  lis 5, 165
  041f7c0  slwi 6, 4, 2
  041f7c4  addic 28, 5, 7136
  041f7c8  extsw 5, 6
  041f7cc  li 26, -1
  041f7d0  ori 29, 26, 0
  041f7d4  lwzx 28, 28, 5
  041f7d8  cmpwi 28, 0
  041f7dc  bt 2, 0x41f9ac
  041f7e0  lis 4, 66
  041f7e4  addic 3, 3, 16
  041f7e8  addi 5, 4, -2200
  041f7ec  ori 4, 28, 0
  041f7f0  lfs 31, 0(5)
  041f7f4  fmr 1, 31
  041f7f8  bl 0x1367d0
  041f7fc  nop
  041f800  stw 3, 384(30)
  041f804  lwz 5, 0(28)
  041f808  addic 4, 3, 1
  041f80c  addc 6, 3, 5
  041f810  divw 7, 4, 5
  041f814  addic 6, 6, -1
  041f818  mullw 7, 7, 5
  041f81c  divw 8, 6, 5
  041f820  mullw 5, 8, 5
  041f824  subc 26, 4, 7
  041f828  lbz 4, 399(30)
  041f82c  subc 27, 6, 5
  041f830  cmpwi 4, 0
  041f834  extsw 27, 27
  041f838  extsw 26, 26
  041f83c  bf 2, 0x41f928
  041f840  sldi 4, 26, 4
  041f844  sldi 5, 27, 4
  041f848  lfs 1, 4(25)
  041f84c  addc 4, 28, 4
  041f850  lfs 2, 0(25)
  041f854  addc 5, 28, 5
  041f858  clrldi 4, 4, 32
  041f85c  clrldi 5, 5, 32
  041f860  lfs 3, 20(4)
  041f864  lfs 4, 20(5)
  041f868  fsubs 3, 1, 3
  041f86c  fsubs 1, 1, 4
  041f870  lfs 5, 16(4)
  041f874  lfs 4, 16(5)
  041f878  fsubs 5, 2, 5
  041f87c  fsubs 2, 2, 4
  041f880  clrlwi 4, 24, 24
  041f884  cmpwi 4, 0
  041f888  fmuls 3, 3, 3
  041f88c  fmuls 1, 1, 1
  041f890  fmadds 3, 5, 5, 3
  041f894  fmadds 1, 2, 2, 1
  041f898  fsqrts 2, 3
  041f89c  fsqrts 1, 1
  041f8a0  fcmpu 1, 1, 2
  041f8a4  bt 2, 0x41f8e8
  041f8a8  bt 5, 0x41f8b8
  041f8ac  lbz 4, 397(30)
  041f8b0  cmpwi 4, 1
  041f8b4  bf 2, 0x41f8c4
  041f8b8  li 3, 1
  041f8bc  stb 3, 397(30)
  041f8c0  b 0x41f96c
  041f8c4  bt 4, 0x41f8d4
  041f8c8  extsb 4, 4
  041f8cc  cmpwi 4, -1
  041f8d0  bf 2, 0x41f8e0
  041f8d4  ori 26, 27, 0
  041f8d8  stb 29, 397(30)
  041f8dc  b 0x41f96c
  041f8e0  ori 26, 3, 0
  041f8e4  b 0x41f96c
  041f8e8  bt 4, 0x41f8f8
  041f8ec  lbz 4, 397(30)
  041f8f0  cmpwi 4, 1
  041f8f4  bf 2, 0x41f904
  041f8f8  li 3, 1
  041f8fc  stb 3, 397(30)
  041f900  b 0x41f96c
  041f904  bt 5, 0x41f914
  041f908  extsb 4, 4
  041f90c  cmpwi 4, -1
  041f910  bf 2, 0x41f920
  041f914  ori 26, 27, 0
  041f918  stb 29, 397(30)
  041f91c  b 0x41f96c
  041f920  ori 26, 3, 0
  041f924  b 0x41f96c
  041f928  ori 3, 25, 0
  041f92c  fmr 1, 31
  041f930  ori 4, 28, 0
  041f934  bl 0x1367d0
  041f938  nop
  041f93c  lwz 25, 384(30)
  041f940  cmpw 3, 25
  041f944  bf 0, 0x41f954
  041f948  ori 26, 27, 0
  041f94c  stb 29, 397(30)
  041f950  b 0x41f96c
  041f954  cmpw 3, 25
  041f958  bf 1, 0x41f968
  041f95c  li 3, 1
  041f960  stb 3, 397(30)
  041f964  b 0x41f96c
  041f968  extsw 26, 25
  041f96c  cmpwi 26, -1
  041f970  bt 2, 0x41f9c0
  041f974  cmpwi 31, 0
  041f978  bt 2, 0x41f9c0
  041f97c  sldi 3, 26, 4
  041f980  addc 3, 28, 3
  041f984  clrldi 3, 3, 32
  041f988  lfs 1, 16(3)
  041f98c  stfs 1, 0(31)
  041f990  lfs 1, 20(3)
  041f994  stfs 1, 4(31)
  041f998  lfs 1, 24(3)
  041f99c  stfs 1, 8(31)
  041f9a0  lfs 1, 28(3)
  041f9a4  stfs 1, 12(31)
  041f9a8  b 0x41f9c0
  041f9ac  lis 3, 101
  041f9b0  extsw 4, 4
  041f9b4  addic 3, 3, 29244
  041f9b8  bl 0x5cd098
  041f9bc  nop
  041f9c0  ori 3, 26, 0
  041f9c4  b 0x41f9e0
  041f9c8  lis 3, 101
  041f9cc  extsw 4, 4
  041f9d0  addic 3, 3, 29244
  041f9d4  bl 0x5cd098
  041f9d8  nop
  041f9dc  li 3, -1
  041f9e0  ld 0, 208(1)
  041f9e4  mtlr 0
  041f9e8  lfd 31, 184(1)
  041f9ec  ld 24, 120(1)
  041f9f0  ld 25, 128(1)
  041f9f4  ld 26, 136(1)
  041f9f8  ld 27, 144(1)
  041f9fc  ld 28, 152(1)
  041fa00  ld 29, 160(1)
  041fa04  ld 30, 168(1)
  041fa08  ld 31, 176(1)
  041fa0c  addi 1, 1, 192
  041fa10  blr

M691_0041fa18:   # 0x41fa18, 0x130 bytes
  041fa18  stdu 1, -144(1)
  041fa1c  mflr 0
  041fa20  std 0, 160(1)
  041fa24  std 30, 128(1)
  041fa28  std 31, 136(1)
  041fa2c  ori 30, 4, 0
  041fa30  ori 31, 6, 0
  041fa34  lwz 4, 372(30)
  041fa38  std 29, 120(1)
  041fa3c  std 28, 112(1)
  041fa40  cmpwi 4, -1
  041fa44  bt 2, 0x41fb10
  041fa48  lis 5, 165
  041fa4c  slwi 6, 4, 2
  041fa50  addic 28, 5, 7136
  041fa54  extsw 5, 6
  041fa58  li 29, -1
  041fa5c  lwzx 28, 28, 5
  041fa60  cmpwi 28, 0
  041fa64  bt 2, 0x41faf4
  041fa68  lis 5, 66
  041fa6c  addic 3, 3, 16
  041fa70  addi 5, 5, -1516
  041fa74  ori 4, 28, 0
  041fa78  lfs 1, 0(5)
  041fa7c  bl 0x1367d0
  041fa80  nop
  041fa84  stw 3, 384(30)
  041fa88  addic 4, 3, 1
  041fa8c  lwz 5, 0(28)
  041fa90  divw 6, 4, 5
  041fa94  mullw 5, 6, 5
  041fa98  subc 4, 4, 5
  041fa9c  extsw 29, 4
  041faa0  subc 4, 29, 3
  041faa4  subc 3, 3, 29
  041faa8  sradi 4, 4, 63
  041faac  and 3, 4, 3
  041fab0  addc 29, 29, 3
  041fab4  cmpwi 29, -1
  041fab8  bt 2, 0x41fb08
  041fabc  cmpwi 31, 0
  041fac0  bt 2, 0x41fb08
  041fac4  sldi 3, 29, 4
  041fac8  addc 3, 28, 3
  041facc  clrldi 3, 3, 32
  041fad0  lfs 1, 16(3)
  041fad4  stfs 1, 0(31)
  041fad8  lfs 1, 20(3)
  041fadc  stfs 1, 4(31)
  041fae0  lfs 1, 24(3)
  041fae4  stfs 1, 8(31)
  041fae8  lfs 1, 28(3)
  041faec  stfs 1, 12(31)
  041faf0  b 0x41fb08
  041faf4  lis 3, 101
  041faf8  extsw 4, 4
  041fafc  addic 3, 3, 29244
  041fb00  bl 0x5cd098
  041fb04  nop
  041fb08  ori 3, 29, 0
  041fb0c  b 0x41fb28
  041fb10  lis 3, 101
  041fb14  extsw 4, 4
  041fb18  addic 3, 3, 29244
  041fb1c  bl 0x5cd098
  041fb20  nop
  041fb24  li 3, -1
  041fb28  ld 0, 160(1)
  041fb2c  mtlr 0
  041fb30  ld 28, 112(1)
  041fb34  ld 29, 120(1)
  041fb38  ld 30, 128(1)
  041fb3c  ld 31, 136(1)
  041fb40  addi 1, 1, 144
  041fb44  blr

UpdateMoby_691:   # 0x41fb90, 0x235c bytes
  041fb90  stdu 1, -688(1)
  041fb94  mflr 0
  041fb98  std 0, 704(1)
  041fb9c  stfd 26, 640(1)
  041fba0  stfd 27, 648(1)
  041fba4  stfd 28, 656(1)
  041fba8  stfd 29, 664(1)
  041fbac  stfd 30, 672(1)
  041fbb0  stfd 31, 680(1)
  041fbb4  std 31, 632(1)
  041fbb8  cmpwi 3, 0
  041fbbc  std 30, 624(1)
  041fbc0  std 29, 616(1)
  041fbc4  std 28, 608(1)
  041fbc8  std 27, 600(1)
  041fbcc  std 26, 592(1)
  041fbd0  std 25, 584(1)
  041fbd4  ori 31, 3, 0
  041fbd8  bt 2, 0x421ea8
  041fbdc  lwz 30, 120(31)
  041fbe0  cmpwi 30, 0
  041fbe4  bt 2, 0x421ea8
  041fbe8  lwz 3, 372(30)
  041fbec  li 29, 0
  041fbf0  cmpwi 3, -1
  041fbf4  ori 25, 29, 0
  041fbf8  bt 2, 0x41fc10
  041fbfc  lis 4, 165
  041fc00  slwi 3, 3, 2
  041fc04  addic 4, 4, 7136
  041fc08  extsw 3, 3
  041fc0c  lwzx 29, 4, 3
  041fc10  lfs 1, 320(30)
  041fc14  lfs 2, 328(30)
  041fc18  ori 3, 31, 0
  041fc1c  addic 5, 1, 480
  041fc20  fsub 3, 2, 1
  041fc24  fsel 1, 3, 2, 1
  041fc28  bl 0x1118d8
  041fc2c  nop
  041fc30  lwz 3, 56(30)
  041fc34  cmpwi 3, 0
  041fc38  bt 2, 0x41fc54
  041fc3c  lwz 3, 348(30)
  041fc40  extsw 3, 3
  041fc44  bl 0x5e7e18
  041fc48  nop
  041fc4c  stw 3, 376(30)
  041fc50  stw 25, 56(30)
  041fc54  addic 3, 30, 376
  041fc58  bl 0x4fff60
  041fc5c  nop
  041fc60  addic 26, 30, 380
  041fc64  ori 3, 26, 0
  041fc68  bl 0x4fff60
  041fc6c  nop
  041fc70  lbz 3, 32(31)
  041fc74  addic 28, 30, 32
  041fc78  cmpwi 3, 14
  041fc7c  bt 2, 0x420078
  041fc80  ori 3, 31, 0
  041fc84  ori 27, 28, 0
  041fc88  stw 25, 564(1)
  041fc8c  lis 4, 51
  041fc90  li 5, 0
  041fc94  bl 0x10675c
  041fc98  nop
  041fc9c  ori 28, 3, 0
  041fca0  ori 3, 31, 0
  041fca4  ori 5, 27, 0
  041fca8  li 6, 0
  041fcac  addic 7, 1, 560
  041fcb0  li 9, 0
  041fcb4  li 10, 4
  041fcb8  ori 4, 28, 0
  041fcbc  li 8, 0
  041fcc0  bl 0x106840
  041fcc4  nop
  041fcc8  ori 27, 3, 0
  041fccc  lwz 3, 560(1)
  041fcd0  cmpwi 3, 1
  041fcd4  bf 1, 0x41fd6c
  041fcd8  lfs 1, 16(31)
  041fcdc  lfs 2, 0(28)
  041fce0  lfs 3, 20(31)
  041fce4  lfs 4, 4(28)
  041fce8  fsubs 1, 1, 2
  041fcec  fsubs 2, 3, 4
  041fcf0  bl 0x5e8338
  041fcf4  nop
  041fcf8  lis 3, 15989
  041fcfc  lis 4, 66
  041fd00  stfs 1, 564(1)
  041fd04  ori 3, 3, 49807
  041fd08  addi 4, 4, -1208
  041fd0c  lis 5, 114
  041fd10  stw 3, 144(30)
  041fd14  lis 3, 14851
  041fd18  lfs 1, 0(4)
  041fd1c  lfs 2, -3048(5)
  041fd20  ori 3, 3, 4719
  041fd24  lis 5, 114
  041fd28  fmuls 1, 2, 1
  041fd2c  lis 6, 16128
  041fd30  stw 3, 116(30)
  041fd34  li 3, 512
  041fd38  stfs 1, 112(30)
  041fd3c  lfs 1, 4(4)
  041fd40  lfs 2, -3052(5)
  041fd44  li 5, 9
  041fd48  fmuls 1, 2, 1
  041fd4c  stfs 1, 120(30)
  041fd50  lfs 1, 8(4)
  041fd54  stb 25, 157(30)
  041fd58  fmuls 1, 2, 1
  041fd5c  stw 3, 128(30)
  041fd60  stw 6, 136(30)
  041fd64  stw 5, 132(30)
  041fd68  stfs 1, 124(30)
  041fd6c  cmpwi 27, 2
  041fd70  bt 1, 0x41fd88
  041fd74  cmpwi 27, 0
  041fd78  bf 1, 0x41fea4
  041fd7c  cmpwi 27, 1
  041fd80  bf 1, 0x41fda8
  041fd84  b 0x41fdb0
  041fd88  cmpwi 27, 8
  041fd8c  bt 1, 0x41fd9c
  041fd90  cmpwi 27, 7
  041fd94  bf 1, 0x41fdb8
  041fd98  b 0x41fe30
  041fd9c  cmpwi 27, 10
  041fda0  bf 1, 0x41fe6c
  041fda4  b 0x41fea4
  041fda8  stw 25, 32(30)
  041fdac  b 0x41fea4
  041fdb0  stw 25, 32(30)
  041fdb4  b 0x41fea4
  041fdb8  lfs 1, 16(28)
  041fdbc  lfs 2, 24(28)
  041fdc0  addic 5, 1, 564
  041fdc4  stfs 1, 48(1)
  041fdc8  addic 6, 30, 120
  041fdcc  stfs 2, 56(1)
  041fdd0  addic 7, 30, 124
  041fdd4  lfs 1, 20(28)
  041fdd8  lfs 2, 28(28)
  041fddc  stfs 1, 52(1)
  041fde0  stfs 2, 60(1)
  041fde4  ld 3, 48(1)
  041fde8  ld 4, 56(1)
  041fdec  bl 0x107de8
  041fdf0  nop
  041fdf4  ori 3, 31, 0
  041fdf8  lfs 1, 564(1)
  041fdfc  addic 4, 30, 96
  041fe00  li 6, 15
  041fe04  li 7, 1
  041fe08  li 8, 0
  041fe0c  bl 0x10ad80
  041fe10  nop
  041fe14  lis 3, 16528
  041fe18  lis 4, 16656
  041fe1c  li 5, 13
  041fe20  stw 3, 176(30)
  041fe24  stw 4, 180(30)
  041fe28  stb 5, 32(31)
  041fe2c  b 0x41fea4
  041fe30  lbz 3, 83(31)
  041fe34  cmpwi 3, 13
  041fe38  bt 2, 0x41fe60
  041fe3c  li 3, 10
  041fe40  bl 0x5e7e18
  041fe44  nop
  041fe48  ori 6, 3, 0
  041fe4c  ori 3, 31, 0
  041fe50  li 4, 13
  041fe54  li 5, 0
  041fe58  bl 0xfddc0
  041fe5c  nop
  041fe60  li 3, 12
  041fe64  stb 3, 32(31)
  041fe68  b 0x41fea4
  041fe6c  lbz 3, 83(31)
  041fe70  cmpwi 3, 14
  041fe74  bt 2, 0x41fe9c
  041fe78  li 3, 10
  041fe7c  bl 0x5e7e18
  041fe80  nop
  041fe84  ori 6, 3, 0
  041fe88  ori 3, 31, 0
  041fe8c  li 4, 14
  041fe90  li 5, 0
  041fe94  bl 0xfddc0
  041fe98  nop
  041fe9c  li 3, 11
  041fea0  stb 3, 32(31)
  041fea4  lwz 3, 560(1)
  041fea8  cmpwi 3, 1
  041feac  bf 1, 0x420070
  041feb0  stw 25, 376(30)
  041feb4  lwz 3, 32(30)
  041feb8  lwz 4, 44(28)
  041febc  srawi 5, 3, 31
  041fec0  lfs 1, 32(30)
  041fec4  srawi 6, 4, 31
  041fec8  lfs 2, 44(28)
  041fecc  srwi 7, 5, 1
  041fed0  srwi 8, 6, 1
  041fed4  xor 3, 7, 3
  041fed8  xor 4, 8, 4
  041fedc  subc 3, 3, 5
  041fee0  subc 4, 4, 6
  041fee4  cmpw 3, 4
  041fee8  bt 1, 0x420040
  041feec  stw 25, 32(30)
  041fef0  li 3, 14
  041fef4  lhz 4, 52(31)
  041fef8  rlwimi 4, 25, 0, 19, 19
  041fefc  stb 3, 32(31)
  041ff00  sth 4, 52(31)
  041ff04  lwz 3, 48(28)
  041ff08  clrlwi 3, 3, 31
  041ff0c  cmpwi 3, 0
  041ff10  bt 2, 0x41ff3c
  041ff14  addic 27, 30, 304
  041ff18  addic 4, 28, 16
  041ff1c  ori 3, 27, 0
  041ff20  bl 0x5e7e98
  041ff24  nop
  041ff28  lfs 1, 228(30)
  041ff2c  ori 3, 27, 0
  041ff30  ori 4, 27, 0
  041ff34  bl 0x5e8e80
  041ff38  nop
  041ff3c  lis 3, 66
  041ff40  lis 4, 114
  041ff44  addi 3, 3, -1208
  041ff48  addic 5, 1, 564
  041ff4c  addic 6, 30, 120
  041ff50  addic 7, 30, 124
  041ff54  lfs 1, 4(3)
  041ff58  lfs 2, -3052(4)
  041ff5c  fmuls 1, 2, 1
  041ff60  stfs 1, 120(30)
  041ff64  lfs 1, 12(3)
  041ff68  fmuls 1, 2, 1
  041ff6c  stfs 1, 124(30)
  041ff70  lfs 1, 16(28)
  041ff74  lfs 2, 24(28)
  041ff78  stfs 1, 48(1)
  041ff7c  stfs 2, 56(1)
  041ff80  lfs 1, 20(28)
  041ff84  lfs 2, 28(28)
  041ff88  stfs 1, 52(1)
  041ff8c  stfs 2, 60(1)
  041ff90  ld 3, 48(1)
  041ff94  ld 4, 56(1)
  041ff98  bl 0x107de8
  041ff9c  nop
  041ffa0  ori 3, 31, 0
  041ffa4  addic 4, 30, 96
  041ffa8  lfs 1, 564(1)
  041ffac  li 6, 16
  041ffb0  li 7, 1
  041ffb4  li 8, 0
  041ffb8  bl 0x10ad80
  041ffbc  nop
  041ffc0  lis 3, 16448
  041ffc4  lis 5, 16624
  041ffc8  li 6, 120
  041ffcc  addic 4, 30, 272
  041ffd0  stw 3, 176(30)
  041ffd4  stw 5, 180(30)
  041ffd8  ori 3, 31, 0
  041ffdc  stb 6, 279(30)
  041ffe0  bl 0x10c808
  041ffe4  nop
  041ffe8  lwz 28, 432(30)
  041ffec  cmpwi 28, -1
  041fff0  bf 1, 0x420070
  041fff4  lis 3, 165
  041fff8  slwi 4, 28, 2
  041fffc  addic 3, 3, -28284
  0420000  extsw 4, 4
  0420004  lwzx 28, 3, 4
  0420008  lis 3, 164
  042000c  lhz 4, 0(28)
  0420010  rlwinm 4, 4, 8, 9, 23
  0420014  lwz 3, -28512(3)
  0420018  addc 3, 3, 4
  042001c  clrldi 3, 3, 32
  0420020  bl 0x47cba4
  0420024  nop
  0420028  lhz 3, 0(28)
  042002c  addic 28, 28, 2
  0420030  extsh 3, 3
  0420034  cmpwi 3, 0
  0420038  bf 0, 0x420008
  042003c  b 0x420070
  0420040  fsubs 1, 1, 2
  0420044  li 4, 250
  0420048  li 3, 60
  042004c  stb 4, 279(30)
  0420050  stfs 1, 32(30)
  0420054  bl 0x5e7e18
  0420058  nop
  042005c  sth 3, 38(30)
  0420060  addic 4, 30, 272
  0420064  ori 3, 31, 0
  0420068  bl 0x10c808
  042006c  nop
  0420070  li 3, 255
  0420074  stb 3, 164(31)
  0420078  ori 3, 31, 0
  042007c  addic 4, 30, 272
  0420080  bl 0x10c9a0
  0420084  nop
  0420088  lbz 3, 32(31)
  042008c  cmpwi 3, 7
  0420090  bt 1, 0x4200d8
  0420094  cmpwi 3, 7
  0420098  bt 2, 0x421004
  042009c  cmpwi 3, 6
  04200a0  bt 2, 0x420e10
  04200a4  cmpwi 3, 5
  04200a8  bt 2, 0x420da8
  04200ac  cmpwi 3, 4
  04200b0  bt 2, 0x4209f0
  04200b4  cmpwi 3, 3
  04200b8  bt 2, 0x420668
  04200bc  cmpwi 3, 2
  04200c0  bt 2, 0x42035c
  04200c4  cmpwi 3, 1
  04200c8  bt 2, 0x4202b0
  04200cc  cmpwi 3, 0
  04200d0  bt 2, 0x42011c
  04200d4  b 0x421e90
  04200d8  cmpwi 3, 15
  04200dc  bt 2, 0x421c60
  04200e0  cmpwi 3, 14
  04200e4  bt 2, 0x421bd4
  04200e8  cmpwi 3, 13
  04200ec  bt 2, 0x421b64
  04200f0  cmpwi 3, 12
  04200f4  bt 2, 0x421b00
  04200f8  cmpwi 3, 11
  04200fc  bt 2, 0x421a9c
  0420100  cmpwi 3, 10
  0420104  bt 2, 0x4218b0
  0420108  cmpwi 3, 9
  042010c  bt 2, 0x42174c
  0420110  cmpwi 3, 8
  0420114  bt 2, 0x4210a4
  0420118  b 0x421e90
  042011c  lhz 7, 52(31)
  0420120  li 3, 305
  0420124  li 5, 306
  0420128  ori 7, 7, 4096
  042012c  li 8, 307
  0420130  li 4, 309
  0420134  li 6, 310
  0420138  sth 7, 52(31)
  042013c  stb 25, 304(30)
  0420140  li 9, 313
  0420144  stbx 25, 30, 3
  0420148  li 7, 319
  042014c  li 3, 311
  0420150  stbx 25, 30, 5
  0420154  stbx 25, 30, 8
  0420158  li 5, 314
  042015c  stb 25, 308(30)
  0420160  addic 28, 1, 208
  0420164  stbx 25, 30, 4
  0420168  li 4, 315
  042016c  stbx 25, 30, 6
  0420170  stbx 25, 30, 3
  0420174  li 6, 317
  0420178  stb 25, 312(30)
  042017c  li 3, 318
  0420180  stbx 25, 30, 9
  0420184  stbx 25, 30, 5
  0420188  stbx 25, 30, 4
  042018c  stb 25, 316(30)
  0420190  stbx 25, 30, 6
  0420194  stbx 25, 30, 3
  0420198  stbx 25, 30, 7
  042019c  addic 25, 31, 16
  04201a0  ori 3, 28, 0
  04201a4  ori 4, 25, 0
  04201a8  bl 0x5e7e98
  04201ac  nop
  04201b0  lis 3, 66
  04201b4  lfs 1, 216(1)
  04201b8  addic 26, 1, 192
  04201bc  addi 27, 3, -1208
  04201c0  ori 4, 25, 0
  04201c4  ori 3, 26, 0
  04201c8  lfs 2, 16(27)
  04201cc  fadds 1, 1, 2
  04201d0  stfs 1, 216(1)
  04201d4  bl 0x5e7e98
  04201d8  nop
  04201dc  lfs 1, 4(27)
  04201e0  ori 3, 28, 0
  04201e4  lfs 2, 200(1)
  04201e8  ori 4, 26, 0
  04201ec  li 5, 2
  04201f0  fsubs 1, 2, 1
  04201f4  ori 6, 31, 0
  04201f8  li 7, 0
  04201fc  stfs 1, 200(1)
  0420200  bl 0x57820
  0420204  nop
  0420208  cmpwi 3, 0
  042020c  bt 2, 0x42023c
  0420210  lis 4, 161
  0420214  ori 3, 25, 0
  0420218  addic 4, 4, 2400
  042021c  bl 0x5e7e98
  0420220  nop
  0420224  lis 3, 66
  0420228  lfs 1, 24(31)
  042022c  addi 3, 3, -1208
  0420230  lfs 2, 20(3)
  0420234  fadds 1, 1, 2
  0420238  stfs 1, 24(31)
  042023c  addic 3, 30, 288
  0420240  ori 4, 25, 0
  0420244  bl 0x5e7e98
  0420248  nop
  042024c  cmpwi 29, 0
  0420250  bt 2, 0x420274
  0420254  lis 3, 66
  0420258  ori 4, 29, 0
  042025c  addi 5, 3, -1208
  0420260  ori 3, 25, 0
  0420264  lfs 1, 24(5)
  0420268  bl 0x1367d0
  042026c  nop
  0420270  stw 3, 384(30)
  0420274  lbz 3, 83(31)
  0420278  cmpwi 3, 1
  042027c  bt 2, 0x4202a4
  0420280  li 3, 10
  0420284  bl 0x5e7e18
  0420288  nop
  042028c  ori 6, 3, 0
  0420290  ori 3, 31, 0
  0420294  li 4, 1
  0420298  li 5, 0
  042029c  bl 0xfddc0
  04202a0  nop
  04202a4  li 3, 1
  04202a8  stb 3, 32(31)
  04202ac  b 0x421e90
  04202b0  lfs 1, 480(1)
  04202b4  lfs 2, 16(31)
  04202b8  lfs 3, 484(1)
  04202bc  lfs 4, 20(31)
  04202c0  fsubs 1, 1, 2
  04202c4  fsubs 2, 3, 4
  04202c8  bl 0x5e8338
  04202cc  nop
  04202d0  lfs 2, 252(30)
  04202d4  lfs 3, 256(30)
  04202d8  ori 3, 31, 0
  04202dc  lfs 4, 260(30)
  04202e0  addic 5, 30, 212
  04202e4  bl 0xff2e8
  04202e8  nop
  04202ec  lwz 3, 544(1)
  04202f0  cmpwi 3, 0
  04202f4  bt 2, 0x420314
  04202f8  addic 3, 31, 16
  04202fc  addic 4, 1, 480
  0420300  bl 0x5e8588
  0420304  nop
  0420308  lfs 2, 320(30)
  042030c  fcmpu 0, 1, 2
  0420310  bt 0, 0x420320
  0420314  lwz 3, 376(30)
  0420318  cmpwi 3, 0
  042031c  bf 1, 0x421e90
  0420320  li 3, 2
  0420324  lbz 4, 83(31)
  0420328  cmpwi 4, 2
  042032c  stb 3, 32(31)
  0420330  bt 2, 0x421e90
  0420334  li 3, 10
  0420338  bl 0x5e7e18
  042033c  nop
  0420340  ori 6, 3, 0
  0420344  ori 3, 31, 0
  0420348  li 4, 2
  042034c  li 5, 0
  0420350  bl 0xfddc0
  0420354  nop
  0420358  b 0x421e90
  042035c  lfs 1, 480(1)
  0420360  lfs 2, 16(31)
  0420364  lfs 3, 484(1)
  0420368  lfs 4, 20(31)
  042036c  fsubs 1, 1, 2
  0420370  fsubs 2, 3, 4
  0420374  bl 0x5e8338
  0420378  nop
  042037c  lfs 2, 252(30)
  0420380  ori 3, 31, 0
  0420384  lfs 3, 256(30)
  0420388  addic 5, 30, 212
  042038c  lfs 4, 260(30)
  0420390  bl 0xff2e8
  0420394  nop
  0420398  lbz 3, 112(31)
  042039c  rlwinm 3, 3, 0, 30, 30
  04203a0  cmpwi 3, 0
  04203a4  bt 2, 0x421e90
  04203a8  addic 28, 31, 16
  04203ac  addic 4, 1, 480
  04203b0  ori 3, 28, 0
  04203b4  bl 0x5e8588
  04203b8  nop
  04203bc  lwz 3, 380(30)
  04203c0  fmr 31, 1
  04203c4  cmpwi 3, 0
  04203c8  bf 2, 0x42048c
  04203cc  lwz 3, 544(1)
  04203d0  cmpwi 3, 0
  04203d4  bt 2, 0x42048c
  04203d8  lfs 1, 404(30)
  04203dc  fcmpu 0, 31, 1
  04203e0  cror 6, 1, 2
  04203e4  bt 6, 0x42048c
  04203e8  lfs 1, 480(1)
  04203ec  lfs 30, 72(31)
  04203f0  lfs 2, 16(31)
  04203f4  lfs 3, 484(1)
  04203f8  fsubs 1, 1, 2
  04203fc  lfs 4, 20(31)
  0420400  fsubs 2, 3, 4
  0420404  bl 0x5e8338
  0420408  nop
  042040c  fmr 2, 1
  0420410  fmr 1, 30
  0420414  bl 0x5026a0
  0420418  nop
  042041c  lis 3, 66
  0420420  lfs 2, 368(30)
  0420424  addi 3, 3, -1208
  0420428  lfs 3, 28(3)
  042042c  fmuls 2, 2, 3
  0420430  fcmpu 0, 1, 2
  0420434  cror 6, 1, 2
  0420438  bt 6, 0x42048c
  042043c  lwz 3, 412(30)
  0420440  extsw 3, 3
  0420444  bl 0x5e7e18
  0420448  nop
  042044c  stw 3, 380(30)
  0420450  lbz 3, 83(31)
  0420454  cmpwi 3, 17
  0420458  bt 2, 0x420480
  042045c  li 3, 10
  0420460  bl 0x5e7e18
  0420464  nop
  0420468  ori 6, 3, 0
  042046c  ori 3, 31, 0
  0420470  li 4, 17
  0420474  li 5, 0
  0420478  bl 0xfddc0
  042047c  nop
  0420480  li 3, 15
  0420484  stb 3, 32(31)
  0420488  b 0x421e90
  042048c  lwz 3, 380(30)
  0420490  cmpwi 3, 0
  0420494  bf 2, 0x4205e4
  0420498  lwz 3, 544(1)
  042049c  cmpwi 3, 0
  04204a0  bt 2, 0x4205e4
  04204a4  lfs 1, 324(30)
  04204a8  fcmpu 0, 31, 1
  04204ac  cror 6, 1, 2
  04204b0  bt 6, 0x4205e4
  04204b4  lfs 1, 480(1)
  04204b8  lfs 30, 72(31)
  04204bc  lfs 2, 16(31)
  04204c0  lfs 3, 484(1)
  04204c4  fsubs 1, 1, 2
  04204c8  lfs 4, 20(31)
  04204cc  fsubs 2, 3, 4
  04204d0  bl 0x5e8338
  04204d4  nop
  04204d8  fmr 2, 1
  04204dc  fmr 1, 30
  04204e0  bl 0x5026a0
  04204e4  nop
  04204e8  lis 3, 66
  04204ec  lfs 2, 368(30)
  04204f0  addi 3, 3, -1208
  04204f4  lfs 3, 28(3)
  04204f8  fmuls 2, 2, 3
  04204fc  fcmpu 0, 1, 2
  0420500  cror 6, 1, 2
  0420504  bt 6, 0x4205e4
  0420508  lfs 1, 336(30)
  042050c  cmpwi 1, 29, 0
  0420510  fcmpu 0, 31, 1
  0420514  cror 2, 0, 2
  0420518  bt 2, 0x42056c
  042051c  lwz 3, 352(30)
  0420520  extsw 3, 3
  0420524  bl 0x5e7e18
  0420528  nop
  042052c  stw 3, 380(30)
  0420530  lbz 3, 83(31)
  0420534  cmpwi 3, 9
  0420538  bt 2, 0x420560
  042053c  li 3, 10
  0420540  bl 0x5e7e18
  0420544  nop
  0420548  ori 6, 3, 0
  042054c  ori 3, 31, 0
  0420550  li 4, 9
  0420554  li 5, 0
  0420558  bl 0xfddc0
  042055c  nop
  0420560  li 3, 8
  0420564  stb 3, 32(31)
  0420568  b 0x421e90
  042056c  bt 6, 0x421e90
  0420570  lbz 3, 399(30)
  0420574  cmpwi 3, 1
  0420578  bf 2, 0x4205a8
  042057c  lis 3, 66
  0420580  ori 4, 29, 0
  0420584  addi 5, 3, -1208
  0420588  ori 3, 28, 0
  042058c  lfs 1, 24(5)
  0420590  bl 0x1367d0
  0420594  nop
  0420598  lwz 4, 0(29)
  042059c  addic 4, 4, -1
  04205a0  cmpw 3, 4
  04205a4  bt 2, 0x421e90
  04205a8  lbz 3, 83(31)
  04205ac  cmpwi 3, 6
  04205b0  bt 2, 0x4205d8
  04205b4  li 3, 10
  04205b8  bl 0x5e7e18
  04205bc  nop
  04205c0  ori 6, 3, 0
  04205c4  ori 3, 31, 0
  04205c8  li 4, 6
  04205cc  li 5, 0
  04205d0  bl 0xfddc0
  04205d4  nop
  04205d8  li 3, 5
  04205dc  stb 3, 32(31)
  04205e0  b 0x421e90
  04205e4  lwz 3, 376(30)
  04205e8  cmpwi 3, 0
  04205ec  bf 1, 0x42062c
  04205f0  lbz 3, 83(31)
  04205f4  cmpwi 3, 5
  04205f8  bt 2, 0x420620
  04205fc  li 3, 10
  0420600  bl 0x5e7e18
  0420604  nop
  0420608  ori 6, 3, 0
  042060c  ori 3, 31, 0
  0420610  li 4, 5
  0420614  li 5, 0
  0420618  bl 0xfddc0
  042061c  nop
  0420620  li 3, 4
  0420624  stb 3, 32(31)
  0420628  b 0x421e90
  042062c  lbz 3, 83(31)
  0420630  cmpwi 3, 1
  0420634  bt 2, 0x42065c
  0420638  li 3, 10
  042063c  bl 0x5e7e18
  0420640  nop
  0420644  ori 6, 3, 0
  0420648  ori 3, 31, 0
  042064c  li 4, 1
  0420650  li 5, 0
  0420654  bl 0xfddc0
  0420658  nop
  042065c  li 3, 3
  0420660  stb 3, 32(31)
  0420664  b 0x421e90
  0420668  lfs 1, 480(1)
  042066c  lfs 2, 16(31)
  0420670  lfs 3, 484(1)
  0420674  lfs 4, 20(31)
  0420678  fsubs 1, 1, 2
  042067c  fsubs 2, 3, 4
  0420680  bl 0x5e8338
  0420684  nop
  0420688  lfs 2, 252(30)
  042068c  lfs 3, 256(30)
  0420690  ori 3, 31, 0
  0420694  lfs 4, 260(30)
  0420698  addic 5, 30, 212
  042069c  bl 0xff2e8
  04206a0  nop
  04206a4  lbz 3, 112(31)
  04206a8  rlwinm 3, 3, 0, 30, 30
  04206ac  cmpwi 3, 0
  04206b0  bt 2, 0x4207b4
  04206b4  bl 0x5c8318
  04206b8  nop
  04206bc  lis 4, 21845
  04206c0  ori 4, 4, 21846
  04206c4  mulhw 4, 4, 3
  04206c8  srwi 5, 4, 31
  04206cc  addc 4, 4, 5
  04206d0  addc 5, 4, 4
  04206d4  addc 4, 4, 5
  04206d8  subc 3, 3, 4
  04206dc  cmpwi 3, 0
  04206e0  bt 1, 0x4206f0
  04206e4  cmpwi 3, -1
  04206e8  bf 1, 0x4207b4
  04206ec  b 0x420704
  04206f0  cmpwi 3, 1
  04206f4  bf 1, 0x420738
  04206f8  cmpwi 3, 2
  04206fc  bf 1, 0x42076c
  0420700  b 0x4207b4
  0420704  lbz 3, 83(31)
  0420708  cmpwi 3, 1
  042070c  bt 2, 0x4207b4
  0420710  li 3, 10
  0420714  bl 0x5e7e18
  0420718  nop
  042071c  ori 6, 3, 0
  0420720  ori 3, 31, 0
  0420724  li 4, 1
  0420728  li 5, 0
  042072c  bl 0xfddc0
  0420730  nop
  0420734  b 0x4207b4
  0420738  lbz 3, 83(31)
  042073c  cmpwi 3, 3
  0420740  bt 2, 0x4207b4
  0420744  li 3, 10
  0420748  bl 0x5e7e18
  042074c  nop
  0420750  ori 6, 3, 0
  0420754  ori 3, 31, 0
  0420758  li 4, 3
  042075c  li 5, 0
  0420760  bl 0xfddc0
  0420764  nop
  0420768  b 0x4207b4
  042076c  lbz 3, 83(31)
  0420770  cmpwi 3, 4
  0420774  bt 2, 0x4207b4
  0420778  lis 3, 66
  042077c  lis 4, 114
  0420780  addi 3, 3, -1208
  0420784  li 5, 0
  0420788  lfs 1, 32(3)
  042078c  lfs 2, -3056(4)
  0420790  ori 3, 31, 0
  0420794  li 4, 4
  0420798  fmuls 1, 2, 1
  042079c  fctiwz 1, 1
  04207a0  stfd 1, 568(1)
  04207a4  lwz 6, 572(1)
  04207a8  extsw 6, 6
  04207ac  bl 0xfddc0
  04207b0  nop
  04207b4  lwz 3, 544(1)
  04207b8  cmpwi 3, 0
  04207bc  bt 2, 0x421e90
  04207c0  addic 28, 31, 16
  04207c4  addic 4, 1, 480
  04207c8  ori 3, 28, 0
  04207cc  bl 0x5e8588
  04207d0  nop
  04207d4  fmr 31, 1
  04207d8  lfs 1, 404(30)
  04207dc  fcmpu 0, 31, 1
  04207e0  cror 6, 1, 2
  04207e4  bt 6, 0x420890
  04207e8  li 3, 412
  04207ec  li 5, 36
  04207f0  vspltisw 4, -1
  04207f4  addi 4, 3, 16
  04207f8  <unknown>
  04207fc  lis 3, 66
  0420800  vslw 4, 4, 4
  0420804  <unknown>
  0420808  addi 3, 3, -1208
  042080c  vor 2, 2, 3
  0420810  lis 4, 114
  0420814  vcfsx 2, 2, 0
  0420818  <unknown>
  042081c  li 3, -3056
  0420820  vspltw 3, 3, 0
  0420824  <unknown>
  0420828  li 3, 380
  042082c  lfs 1, -3056(4)
  0420830  vaddfp 2, 2, 3
  0420834  vmaddfp 2, 5, 2, 4
  0420838  vctsxs 2, 2, 0
  042083c  vspltw 2, 2, 0
  0420840  stvewx 2, 3, 30
  0420844  lbz 3, 83(31)
  0420848  cmpwi 3, 17
  042084c  bt 2, 0x420884
  0420850  lis 3, 66
  0420854  addi 3, 3, -1208
  0420858  li 4, 17
  042085c  li 5, 0
  0420860  lfs 2, 32(3)
  0420864  ori 3, 31, 0
  0420868  fmuls 1, 1, 2
  042086c  fctiwz 1, 1
  0420870  stfd 1, 568(1)
  0420874  lwz 6, 572(1)
  0420878  extsw 6, 6
  042087c  bl 0xfddc0
  0420880  nop
  0420884  li 3, 15
  0420888  stb 3, 32(31)
  042088c  b 0x420990
  0420890  lfs 1, 336(30)
  0420894  cmpwi 1, 29, 0
  0420898  fcmpu 0, 31, 1
  042089c  crorc 2, 6, 0
  04208a0  bt 2, 0x420930
  04208a4  lbz 3, 399(30)
  04208a8  cmpwi 3, 1
  04208ac  bf 2, 0x4208dc
  04208b0  lis 3, 66
  04208b4  ori 4, 29, 0
  04208b8  addi 5, 3, -1208
  04208bc  ori 3, 28, 0
  04208c0  lfs 1, 24(5)
  04208c4  bl 0x1367d0
  04208c8  nop
  04208cc  lwz 4, 0(29)
  04208d0  addic 4, 4, -1
  04208d4  cmpw 3, 4
  04208d8  bt 2, 0x420930
  04208dc  lbz 3, 83(31)
  04208e0  cmpwi 3, 6
  04208e4  bt 2, 0x420924
  04208e8  lis 3, 66
  04208ec  lis 4, 114
  04208f0  addi 3, 3, -1208
  04208f4  li 5, 0
  04208f8  lfs 1, 32(3)
  04208fc  lfs 2, -3056(4)
  0420900  ori 3, 31, 0
  0420904  li 4, 6
  0420908  fmuls 1, 2, 1
  042090c  fctiwz 1, 1
  0420910  stfd 1, 568(1)
  0420914  lwz 6, 572(1)
  0420918  extsw 6, 6
  042091c  bl 0xfddc0
  0420920  nop
  0420924  li 3, 5
  0420928  stb 3, 32(31)
  042092c  b 0x420990
  0420930  lfs 1, 324(30)
  0420934  fcmpu 0, 31, 1
  0420938  cror 6, 1, 2
  042093c  bt 6, 0x420990
  0420940  lbz 3, 83(31)
  0420944  cmpwi 3, 9
  0420948  bt 2, 0x420988
  042094c  lis 3, 66
  0420950  lis 4, 114
  0420954  addi 3, 3, -1208
  0420958  li 5, 0
  042095c  lfs 1, 32(3)
  0420960  lfs 2, -3056(4)
  0420964  ori 3, 31, 0
  0420968  fmuls 1, 2, 1
  042096c  li 4, 9
  0420970  fctiwz 1, 1
  0420974  stfd 1, 568(1)
  0420978  lwz 6, 572(1)
  042097c  extsw 6, 6
  0420980  bl 0xfddc0
  0420984  nop
  0420988  li 3, 8
  042098c  stb 3, 32(31)
  0420990  lwz 3, 376(30)
  0420994  cmpwi 3, 0
  0420998  bf 1, 0x421e90
  042099c  lbz 3, 83(31)
  04209a0  cmpwi 3, 5
  04209a4  bt 2, 0x4209e4
  04209a8  lis 3, 66
  04209ac  lis 4, 114
  04209b0  addi 3, 3, -1208
  04209b4  li 5, 0
  04209b8  lfs 1, 32(3)
  04209bc  lfs 2, -3056(4)
  04209c0  ori 3, 31, 0
  04209c4  li 4, 5
  04209c8  fmuls 1, 2, 1
  04209cc  fctiwz 1, 1
  04209d0  stfd 1, 568(1)
  04209d4  lwz 6, 572(1)
  04209d8  extsw 6, 6
  04209dc  bl 0xfddc0
  04209e0  nop
  04209e4  li 3, 4
  04209e8  stb 3, 32(31)
  04209ec  b 0x421e90
  04209f0  addic 28, 1, 224
  04209f4  addic 27, 1, 480
  04209f8  ori 3, 31, 0
  04209fc  ori 4, 30, 0
  0420a00  ori 5, 27, 0
  0420a04  li 6, 1
  0420a08  ori 7, 28, 0
  0420a0c  bl 0x41f770
  0420a10  stw 25, 248(30)
  0420a14  addic 4, 30, 192
  0420a18  addic 6, 30, 304
  0420a1c  ori 3, 31, 0
  0420a20  ori 5, 28, 0
  0420a24  bl 0x101cc0
  0420a28  nop
  0420a2c  lfs 1, 20(31)
  0420a30  lfs 2, 484(1)
  0420a34  lis 3, 66
  0420a38  lfs 3, 16(31)
  0420a3c  fsubs 1, 1, 2
  0420a40  lfs 2, 480(1)
  0420a44  addi 4, 3, -1208
  0420a48  ori 3, 27, 0
  0420a4c  fsubs 2, 3, 2
  0420a50  lfs 3, 24(4)
  0420a54  ori 4, 29, 0
  0420a58  fmr 30, 3
  0420a5c  fmuls 1, 1, 1
  0420a60  fmadds 31, 2, 2, 1
  0420a64  fmr 1, 30
  0420a68  fsqrts 31, 31
  0420a6c  bl 0x1367d0
  0420a70  nop
  0420a74  ori 25, 3, 0
  0420a78  addic 3, 31, 16
  0420a7c  fmr 1, 30
  0420a80  ori 4, 29, 0
  0420a84  bl 0x1367d0
  0420a88  nop
  0420a8c  sldi 3, 3, 4
  0420a90  lfs 1, 20(31)
  0420a94  addc 3, 29, 3
  0420a98  lfs 2, 308(30)
  0420a9c  clrldi 3, 3, 32
  0420aa0  lfs 3, 16(31)
  0420aa4  fmuls 2, 2, 2
  0420aa8  lfs 4, 20(3)
  0420aac  lfs 5, 16(3)
  0420ab0  fsubs 1, 1, 4
  0420ab4  lfs 4, 304(30)
  0420ab8  fsubs 3, 3, 5
  0420abc  lfs 5, 312(30)
  0420ac0  fmadds 2, 4, 4, 2
  0420ac4  lwz 4, 544(1)
  0420ac8  lwz 3, 28(3)
  0420acc  cmpwi 4, 0
  0420ad0  lbz 29, 83(31)
  0420ad4  fmuls 1, 1, 1
  0420ad8  fmadds 2, 5, 5, 2
  0420adc  fmadds 1, 3, 3, 1
  0420ae0  fsqrts 2, 2
  0420ae4  fsqrts 1, 1
  0420ae8  bt 2, 0x420d40
  0420aec  lfs 3, 332(30)
  0420af0  fcmpu 0, 31, 3
  0420af4  bt 0, 0x420b18
  0420af8  lwz 3, 384(30)
  0420afc  cmpw 3, 25
  0420b00  bt 2, 0x420b18
  0420b04  lis 3, 66
  0420b08  addi 3, 3, -1208
  0420b0c  lfs 3, 40(3)
  0420b10  fcmpu 0, 2, 3
  0420b14  bt 1, 0x421e90
  0420b18  lfs 2, 236(30)
  0420b1c  fcmpu 0, 1, 2
  0420b20  cror 6, 1, 2
  0420b24  bt 6, 0x421e90
  0420b28  lfs 1, 404(30)
  0420b2c  fcmpu 0, 31, 1
  0420b30  cror 6, 1, 2
  0420b34  bt 6, 0x420be0
  0420b38  li 3, 412
  0420b3c  vspltisw 4, -1
  0420b40  lis 5, 66
  0420b44  addi 4, 3, 16
  0420b48  vslw 4, 4, 4
  0420b4c  <unknown>
  0420b50  addi 3, 5, -1208
  0420b54  <unknown>
  0420b58  li 4, 36
  0420b5c  vor 2, 2, 3
  0420b60  vcfsx 2, 2, 0
  0420b64  <unknown>
  0420b68  lis 3, 114
  0420b6c  vspltw 3, 3, 0
  0420b70  li 4, -3056
  0420b74  <unknown>
  0420b78  li 4, 380
  0420b7c  lfs 1, -3056(3)
  0420b80  vaddfp 2, 2, 3
  0420b84  vmaddfp 2, 5, 2, 4
  0420b88  vctsxs 2, 2, 0
  0420b8c  vspltw 2, 2, 0
  0420b90  stvewx 2, 4, 30
  0420b94  lbz 3, 83(31)
  0420b98  cmpwi 3, 17
  0420b9c  bt 2, 0x420bd4
  0420ba0  lis 3, 66
  0420ba4  addi 3, 3, -1208
  0420ba8  li 4, 17
  0420bac  li 5, 0
  0420bb0  lfs 2, 32(3)
  0420bb4  ori 3, 31, 0
  0420bb8  fmuls 1, 1, 2
  0420bbc  fctiwz 1, 1
  0420bc0  stfd 1, 568(1)
  0420bc4  lwz 6, 572(1)
  0420bc8  extsw 6, 6
  0420bcc  bl 0xfddc0
  0420bd0  nop
  0420bd4  li 3, 15
  0420bd8  stb 3, 32(31)
  0420bdc  b 0x421e90
  0420be0  lfs 1, 324(30)
  0420be4  fcmpu 0, 31, 1
  0420be8  cror 6, 1, 2
  0420bec  bt 6, 0x420c98
  0420bf0  li 3, 352
  0420bf4  vspltisw 4, -1
  0420bf8  lis 5, 66
  0420bfc  addi 4, 3, 16
  0420c00  vslw 4, 4, 4
  0420c04  <unknown>
  0420c08  addi 3, 5, -1208
  0420c0c  <unknown>
  0420c10  li 4, 36
  0420c14  vor 2, 2, 3
  0420c18  vcfsx 2, 2, 0
  0420c1c  <unknown>
  0420c20  lis 3, 114
  0420c24  vspltw 3, 3, 0
  0420c28  li 4, -3056
  0420c2c  <unknown>
  0420c30  li 4, 380
  0420c34  lfs 1, -3056(3)
  0420c38  vaddfp 2, 2, 3
  0420c3c  vmaddfp 2, 5, 2, 4
  0420c40  vctsxs 2, 2, 0
  0420c44  vspltw 2, 2, 0
  0420c48  stvewx 2, 4, 30
  0420c4c  lbz 3, 83(31)
  0420c50  cmpwi 3, 9
  0420c54  bt 2, 0x420c8c
  0420c58  lis 3, 66
  0420c5c  addi 3, 3, -1208
  0420c60  li 4, 9
  0420c64  li 5, 0
  0420c68  lfs 2, 32(3)
  0420c6c  ori 3, 31, 0
  0420c70  fmuls 1, 1, 2
  0420c74  fctiwz 1, 1
  0420c78  stfd 1, 568(1)
  0420c7c  lwz 6, 572(1)
  0420c80  extsw 6, 6
  0420c84  bl 0xfddc0
  0420c88  nop
  0420c8c  li 3, 8
  0420c90  stb 3, 32(31)
  0420c94  b 0x421e90
  0420c98  li 3, 352
  0420c9c  vspltisw 4, -1
  0420ca0  lis 5, 66
  0420ca4  addi 4, 3, 16
  0420ca8  vslw 4, 4, 4
  0420cac  <unknown>
  0420cb0  addi 3, 5, -1208
  0420cb4  <unknown>
  0420cb8  li 4, 36
  0420cbc  vor 2, 2, 3
  0420cc0  vcfsx 2, 2, 0
  0420cc4  <unknown>
  0420cc8  lis 3, 114
  0420ccc  vspltw 3, 3, 0
  0420cd0  li 4, -3056
  0420cd4  <unknown>
  0420cd8  li 4, 380
  0420cdc  lfs 1, -3056(3)
  0420ce0  vaddfp 2, 2, 3
  0420ce4  vmaddfp 2, 5, 2, 4
  0420ce8  vctsxs 2, 2, 0
  0420cec  vspltw 2, 2, 0
  0420cf0  stvewx 2, 4, 30
  0420cf4  lbz 3, 83(31)
  0420cf8  cmpwi 3, 1
  0420cfc  bt 2, 0x420d34
  0420d00  lis 3, 66
  0420d04  addi 3, 3, -1208
  0420d08  li 4, 1
  0420d0c  li 5, 0
  0420d10  lfs 2, 32(3)
  0420d14  ori 3, 31, 0
  0420d18  fmuls 1, 1, 2
  0420d1c  fctiwz 1, 1
  0420d20  stfd 1, 568(1)
  0420d24  lwz 6, 572(1)
  0420d28  extsw 6, 6
  0420d2c  bl 0xfddc0
  0420d30  nop
  0420d34  li 3, 3
  0420d38  stb 3, 32(31)
  0420d3c  b 0x421e90
  0420d40  lfs 2, 236(30)
  0420d44  fcmpu 0, 1, 2
  0420d48  cror 6, 1, 2
  0420d4c  bt 6, 0x421e90
  0420d50  cmpwi 3, 0
  0420d54  bf 1, 0x421e90
  0420d58  cmpwi 29, 1
  0420d5c  bt 2, 0x420d9c
  0420d60  lis 3, 66
  0420d64  lis 4, 114
  0420d68  addi 3, 3, -1208
  0420d6c  li 5, 0
  0420d70  lfs 1, 32(3)
  0420d74  lfs 2, -3056(4)
  0420d78  ori 3, 31, 0
  0420d7c  fmuls 1, 2, 1
  0420d80  li 4, 1
  0420d84  fctiwz 1, 1
  0420d88  stfd 1, 568(1)
  0420d8c  lwz 6, 572(1)
  0420d90  extsw 6, 6
  0420d94  bl 0xfddc0
  0420d98  nop
  0420d9c  li 3, 3
  0420da0  stb 3, 32(31)
  0420da4  b 0x421e90
  0420da8  lbz 3, 112(31)
  0420dac  rlwinm 3, 3, 0, 30, 30
  0420db0  cmpwi 3, 0
  0420db4  bt 2, 0x421e90
  0420db8  lbz 3, 83(31)
  0420dbc  cmpwi 3, 7
  0420dc0  bt 2, 0x420e00
  0420dc4  lis 3, 66
  0420dc8  lis 4, 114
  0420dcc  addi 3, 3, -1208
  0420dd0  li 5, 0
  0420dd4  lfs 1, 32(3)
  0420dd8  lfs 2, -3056(4)
  0420ddc  ori 3, 31, 0
  0420de0  li 4, 7
  0420de4  fmuls 1, 2, 1
  0420de8  fctiwz 1, 1
  0420dec  stfd 1, 568(1)
  0420df0  lwz 6, 572(1)
  0420df4  extsw 6, 6
  0420df8  bl 0xfddc0
  0420dfc  nop
  0420e00  li 3, 6
  0420e04  stb 3, 32(31)
  0420e08  stb 25, 397(30)
  0420e0c  b 0x421e90
  0420e10  lbz 3, 399(30)
  0420e14  cmpwi 3, 0
  0420e18  bf 2, 0x420e38
  0420e1c  addic 5, 1, 480
  0420e20  addic 7, 1, 240
  0420e24  ori 3, 31, 0
  0420e28  ori 4, 30, 0
  0420e2c  li 6, 0
  0420e30  bl 0x41f770
  0420e34  b 0x420e4c
  0420e38  addic 5, 1, 480
  0420e3c  addic 6, 1, 240
  0420e40  ori 3, 31, 0
  0420e44  ori 4, 30, 0
  0420e48  bl 0x41fa18
  0420e4c  li 7, 10
  0420e50  addic 4, 30, 192
  0420e54  addic 6, 30, 304
  0420e58  addic 5, 1, 240
  0420e5c  stw 7, 248(30)
  0420e60  ori 3, 31, 0
  0420e64  bl 0x101cc0
  0420e68  nop
  0420e6c  lfs 1, 20(31)
  0420e70  lfs 2, 484(1)
  0420e74  lis 4, 66
  0420e78  lfs 3, 16(31)
  0420e7c  addic 3, 31, 16
  0420e80  fsubs 1, 1, 2
  0420e84  addi 5, 4, -1208
  0420e88  lfs 2, 480(1)
  0420e8c  ori 4, 29, 0
  0420e90  fsubs 2, 3, 2
  0420e94  fmuls 3, 1, 1
  0420e98  lfs 1, 24(5)
  0420e9c  fmadds 31, 2, 2, 3
  0420ea0  fsqrts 31, 31
  0420ea4  bl 0x1367d0
  0420ea8  nop
  0420eac  sldi 4, 3, 4
  0420eb0  lfs 1, 20(31)
  0420eb4  addc 4, 29, 4
  0420eb8  lfs 2, 16(31)
  0420ebc  clrldi 5, 4, 32
  0420ec0  lfs 3, 20(5)
  0420ec4  lfs 4, 16(5)
  0420ec8  fsubs 1, 1, 3
  0420ecc  fsubs 2, 2, 4
  0420ed0  lwz 6, 544(1)
  0420ed4  lwz 5, 28(5)
  0420ed8  cmpwi 6, 0
  0420edc  lbz 4, 83(31)
  0420ee0  fmuls 1, 1, 1
  0420ee4  fmadds 1, 2, 2, 1
  0420ee8  fsqrts 1, 1
  0420eec  bt 2, 0x420f80
  0420ef0  lbz 5, 399(30)
  0420ef4  cmpwi 5, 1
  0420ef8  bf 2, 0x420f18
  0420efc  lwz 5, 0(29)
  0420f00  addic 5, 5, -1
  0420f04  cmpw 3, 5
  0420f08  bf 2, 0x420f18
  0420f0c  lfs 2, 236(30)
  0420f10  fcmpu 0, 1, 2
  0420f14  bt 0, 0x420f30
  0420f18  lfs 1, 340(30)
  0420f1c  fcmpu 0, 31, 1
  0420f20  bt 1, 0x420f30
  0420f24  lwz 3, 376(30)
  0420f28  cmpwi 3, 0
  0420f2c  bf 1, 0x421e90
  0420f30  cmpwi 4, 8
  0420f34  bt 2, 0x420f74
  0420f38  lis 3, 66
  0420f3c  lis 4, 114
  0420f40  addi 3, 3, -1208
  0420f44  li 5, 0
  0420f48  lfs 1, 32(3)
  0420f4c  lfs 2, -3056(4)
  0420f50  ori 3, 31, 0
  0420f54  fmuls 1, 2, 1
  0420f58  li 4, 8
  0420f5c  fctiwz 1, 1
  0420f60  stfd 1, 568(1)
  0420f64  lwz 6, 572(1)
  0420f68  extsw 6, 6
  0420f6c  bl 0xfddc0
  0420f70  nop
  0420f74  li 3, 7
  0420f78  stb 3, 32(31)
  0420f7c  b 0x421e90
  0420f80  lfs 2, 236(30)
  0420f84  fcmpu 0, 1, 2
  0420f88  cror 6, 1, 2
  0420f8c  bt 6, 0x421e90
  0420f90  cmpwi 5, 0
  0420f94  bt 1, 0x420fb4
  0420f98  lbz 5, 399(30)
  0420f9c  cmpwi 5, 1
  0420fa0  bf 2, 0x421e90
  0420fa4  lwz 5, 0(29)
  0420fa8  addic 5, 5, -1
  0420fac  cmpw 3, 5
  0420fb0  bf 2, 0x421e90
  0420fb4  cmpwi 4, 8
  0420fb8  bt 2, 0x420ff8
  0420fbc  lis 3, 66
  0420fc0  lis 4, 114
  0420fc4  addi 3, 3, -1208
  0420fc8  li 5, 0
  0420fcc  lfs 1, 32(3)
  0420fd0  lfs 2, -3056(4)
  0420fd4  ori 3, 31, 0
  0420fd8  li 4, 8
  0420fdc  fmuls 1, 2, 1
  0420fe0  fctiwz 1, 1
  0420fe4  stfd 1, 568(1)
  0420fe8  lwz 6, 572(1)
  0420fec  extsw 6, 6
  0420ff0  bl 0xfddc0
  0420ff4  nop
  0420ff8  li 3, 7
  0420ffc  stb 3, 32(31)
  0421000  b 0x421e90
  0421004  lbz 3, 112(31)
  0421008  rlwinm 3, 3, 0, 30, 30
  042100c  cmpwi 3, 0
  0421010  bt 2, 0x421e90
  0421014  lfs 1, 480(1)
  0421018  lfs 2, 16(31)
  042101c  lfs 3, 484(1)
  0421020  lfs 4, 20(31)
  0421024  fsubs 1, 1, 2
  0421028  fsubs 2, 3, 4
  042102c  bl 0x5e8338
  0421030  nop
  0421034  lfs 2, 252(30)
  0421038  lfs 3, 256(30)
  042103c  ori 3, 31, 0
  0421040  lfs 4, 260(30)
  0421044  addic 5, 30, 212
  0421048  bl 0xff2e8
  042104c  nop
  0421050  lbz 3, 83(31)
  0421054  cmpwi 3, 1
  0421058  bt 2, 0x421098
  042105c  lis 3, 66
  0421060  lis 4, 114
  0421064  addi 3, 3, -1208
  0421068  li 5, 0
  042106c  lfs 1, 32(3)
  0421070  lfs 2, -3056(4)
  0421074  ori 3, 31, 0
  0421078  li 4, 1
  042107c  fmuls 1, 2, 1
  0421080  fctiwz 1, 1
  0421084  stfd 1, 568(1)
  0421088  lwz 6, 572(1)
  042108c  extsw 6, 6
  0421090  bl 0xfddc0
  0421094  nop
  0421098  li 3, 3
  042109c  stb 3, 32(31)
  04210a0  b 0x421e90
  04210a4  lfs 1, 480(1)
  04210a8  lfs 2, 16(31)
  04210ac  lfs 3, 484(1)
  04210b0  lfs 4, 20(31)
  04210b4  fsubs 1, 1, 2
  04210b8  fsubs 2, 3, 4
  04210bc  bl 0x5e8338
  04210c0  nop
  04210c4  lis 3, 66
  04210c8  lfs 2, 252(30)
  04210cc  addic 5, 30, 212
  04210d0  addi 4, 3, -1208
  04210d4  lfs 3, 256(30)
  04210d8  lfs 4, 260(30)
  04210dc  ori 3, 31, 0
  04210e0  lfs 5, 44(4)
  04210e4  fmuls 2, 2, 5
  04210e8  bl 0xff2e8
  04210ec  nop
  04210f0  lbz 3, 112(31)
  04210f4  rlwinm 3, 3, 0, 30, 30
  04210f8  cmpwi 3, 0
  04210fc  bt 2, 0x421148
  0421100  lbz 3, 83(31)
  0421104  cmpwi 3, 10
  0421108  bt 2, 0x421148
  042110c  lis 3, 66
  0421110  lis 4, 114
  0421114  addi 3, 3, -1208
  0421118  li 5, 0
  042111c  lfs 1, 32(3)
  0421120  lfs 2, -3056(4)
  0421124  ori 3, 31, 0
  0421128  li 4, 10
  042112c  fmuls 1, 2, 1
  0421130  fctiwz 1, 1
  0421134  stfd 1, 568(1)
  0421138  lwz 6, 572(1)
  042113c  extsw 6, 6
  0421140  bl 0xfddc0
  0421144  nop
  0421148  li 3, 305
  042114c  stb 25, 304(30)
  0421150  li 5, 306
  0421154  li 7, 307
  0421158  li 4, 309
  042115c  li 6, 310
  0421160  stbx 25, 30, 3
  0421164  li 8, 315
  0421168  li 3, 311
  042116c  stbx 25, 30, 5
  0421170  stbx 25, 30, 7
  0421174  li 5, 313
  0421178  stb 25, 308(30)
  042117c  li 7, 314
  0421180  stbx 25, 30, 4
  0421184  stbx 25, 30, 6
  0421188  stbx 25, 30, 3
  042118c  li 4, 317
  0421190  stb 25, 312(30)
  0421194  li 6, 318
  0421198  stbx 25, 30, 5
  042119c  li 3, 319
  04211a0  stbx 25, 30, 7
  04211a4  stbx 25, 30, 8
  04211a8  stb 25, 316(30)
  04211ac  stbx 25, 30, 4
  04211b0  stbx 25, 30, 6
  04211b4  stbx 25, 30, 3
  04211b8  lfs 1, 20(31)
  04211bc  lfs 2, 484(1)
  04211c0  lfs 3, 16(31)
  04211c4  fsubs 1, 1, 2
  04211c8  lfs 2, 480(1)
  04211cc  fsubs 2, 3, 2
  04211d0  fmuls 1, 1, 1
  04211d4  fmadds 1, 2, 2, 1
  04211d8  lfs 2, 404(30)
  04211dc  fsqrts 1, 1
  04211e0  fcmpu 0, 1, 2
  04211e4  cror 6, 1, 2
  04211e8  bt 6, 0x421294
  04211ec  li 3, 412
  04211f0  li 5, 36
  04211f4  vspltisw 4, -1
  04211f8  addi 4, 3, 16
  04211fc  <unknown>
  0421200  lis 3, 66
  0421204  vslw 4, 4, 4
  0421208  <unknown>
  042120c  addi 3, 3, -1208
  0421210  vor 2, 2, 3
  0421214  lis 4, 114
  0421218  vcfsx 2, 2, 0
  042121c  <unknown>
  0421220  li 3, -3056
  0421224  vspltw 3, 3, 0
  0421228  <unknown>
  042122c  li 3, 380
  0421230  lfs 1, -3056(4)
  0421234  vaddfp 2, 2, 3
  0421238  vmaddfp 2, 5, 2, 4
  042123c  vctsxs 2, 2, 0
  0421240  vspltw 2, 2, 0
  0421244  stvewx 2, 3, 30
  0421248  lbz 3, 83(31)
  042124c  cmpwi 3, 17
  0421250  bt 2, 0x421288
  0421254  lis 3, 66
  0421258  addi 3, 3, -1208
  042125c  li 4, 17
  0421260  li 5, 0
  0421264  lfs 2, 48(3)
  0421268  ori 3, 31, 0
  042126c  fmuls 1, 1, 2
  0421270  fctiwz 1, 1
  0421274  stfd 1, 568(1)
  0421278  lwz 6, 572(1)
  042127c  extsw 6, 6
  0421280  bl 0xfddc0
  0421284  nop
  0421288  li 3, 15
  042128c  stb 3, 32(31)
  0421290  b 0x421e90
  0421294  ori 3, 26, 0
  0421298  bl 0x4fff60
  042129c  nop
  04212a0  cmpwi 3, 0
  04212a4  bt 2, 0x421e90
  04212a8  lbz 3, 82(31)
  04212ac  cmpwi 3, 10
  04212b0  bf 2, 0x421e90
  04212b4  lfs 1, 480(1)
  04212b8  lfs 31, 72(31)
  04212bc  lfs 2, 16(31)
  04212c0  lfs 3, 484(1)
  04212c4  fsubs 1, 1, 2
  04212c8  lfs 4, 20(31)
  04212cc  fsubs 2, 3, 4
  04212d0  bl 0x5e8338
  04212d4  nop
  04212d8  fmr 2, 1
  04212dc  fmr 1, 31
  04212e0  bl 0x5026a0
  04212e4  nop
  04212e8  lis 3, 66
  04212ec  lfs 2, 368(30)
  04212f0  addi 3, 3, -1208
  04212f4  lfs 30, 28(3)
  04212f8  fmuls 2, 2, 30
  04212fc  fcmpu 0, 1, 2
  0421300  cror 6, 1, 2
  0421304  bt 6, 0x421e90
  0421308  lfs 1, 20(31)
  042130c  lfs 2, 484(1)
  0421310  lfs 3, 16(31)
  0421314  fsubs 1, 1, 2
  0421318  lfs 2, 480(1)
  042131c  fsubs 2, 3, 2
  0421320  fmuls 1, 1, 1
  0421324  fmadds 1, 2, 2, 1
  0421328  lfs 2, 324(30)
  042132c  fsqrts 1, 1
  0421330  fcmpu 0, 1, 2
  0421334  cror 6, 1, 2
  0421338  bt 6, 0x4216f8
  042133c  li 3, 305
  0421340  li 4, 306
  0421344  stb 25, 304(30)
  0421348  li 6, 307
  042134c  li 5, 309
  0421350  li 8, 310
  0421354  stbx 25, 30, 3
  0421358  li 3, 311
  042135c  stbx 25, 30, 4
  0421360  stbx 25, 30, 6
  0421364  li 7, 313
  0421368  stb 25, 308(30)
  042136c  li 4, 314
  0421370  stbx 25, 30, 5
  0421374  li 6, 317
  0421378  li 5, 315
  042137c  stbx 25, 30, 8
  0421380  stbx 25, 30, 3
  0421384  li 8, 319
  0421388  stb 25, 312(30)
  042138c  li 3, 318
  0421390  stbx 25, 30, 7
  0421394  stbx 25, 30, 4
  0421398  stbx 25, 30, 5
  042139c  stb 25, 316(30)
  04213a0  stbx 25, 30, 6
  04213a4  stbx 25, 30, 3
  04213a8  stbx 25, 30, 8
  04213ac  lbz 3, 83(31)
  04213b0  cmpwi 3, 11
  04213b4  bt 2, 0x4213f4
  04213b8  lis 3, 66
  04213bc  lis 4, 114
  04213c0  addi 3, 3, -1208
  04213c4  li 5, 0
  04213c8  lfs 1, 32(3)
  04213cc  lfs 2, -3056(4)
  04213d0  ori 3, 31, 0
  04213d4  fmuls 1, 2, 1
  04213d8  li 4, 11
  04213dc  fctiwz 1, 1
  04213e0  stfd 1, 568(1)
  04213e4  lwz 6, 572(1)
  04213e8  extsw 6, 6
  04213ec  bl 0xfddc0
  04213f0  nop
  04213f4  lis 3, 16230
  04213f8  li 4, 9
  04213fc  ori 3, 3, 26214
  0421400  stb 4, 32(31)
  0421404  stw 3, 88(31)
  0421408  lbz 3, 396(30)
  042140c  stb 25, 398(30)
  0421410  bl 0x502730
  0421414  nop
  0421418  lfs 2, 388(30)
  042141c  fmr 31, 1
  0421420  addic 29, 1, 256
  0421424  fmuls 30, 2, 30
  0421428  ori 3, 31, 0
  042142c  li 4, 0
  0421430  ori 5, 29, 0
  0421434  fdivs 30, 30, 31
  0421438  bl 0xf1114
  042143c  nop
  0421440  lfs 1, 480(1)
  0421444  lis 3, 66
  0421448  lfs 2, 16(31)
  042144c  addic 27, 1, 304
  0421450  lfs 3, 484(1)
  0421454  addi 28, 3, -1208
  0421458  fsubs 1, 1, 2
  042145c  ori 3, 27, 0
  0421460  lfs 2, 20(31)
  0421464  ori 4, 27, 0
  0421468  fsubs 2, 3, 2
  042146c  lfs 3, 492(1)
  0421470  stfs 3, 316(1)
  0421474  stfs 1, 304(1)
  0421478  stfs 2, 308(1)
  042147c  lfs 28, 24(28)
  0421480  stw 25, 312(1)
  0421484  lfs 27, 16(28)
  0421488  fmr 1, 27
  042148c  bl 0x5e7f98
  0421490  nop
  0421494  lis 3, 16256
  0421498  addic 26, 1, 384
  042149c  ori 4, 31, 0
  04214a0  li 5, 1
  04214a4  stw 3, 312(1)
  04214a8  lfs 1, 360(30)
  04214ac  ori 3, 26, 0
  04214b0  ori 7, 27, 0
  04214b4  bl 0x10581c
  04214b8  nop
  04214bc  lfs 1, 364(30)
  04214c0  ori 3, 29, 0
  04214c4  li 5, 0
  04214c8  ori 6, 31, 0
  04214cc  ori 7, 26, 0
  04214d0  bl 0x5e598
  04214d4  nop
  04214d8  lfs 3, 52(28)
  04214dc  lfs 2, 388(30)
  04214e0  lfs 5, 36(28)
  04214e4  fmuls 2, 2, 3
  04214e8  lfs 4, 72(31)
  04214ec  fmr 1, 4
  04214f0  fmuls 2, 2, 5
  04214f4  bl 0x502578
  04214f8  nop
  04214fc  fcmpu 0, 28, 31
  0421500  fmr 29, 1
  0421504  cror 6, 1, 2
  0421508  bt 6, 0x421e90
  042150c  lis 3, 66
  0421510  addic 29, 30, 398
  0421514  addi 3, 3, -1208
  0421518  lfs 26, 56(3)
  042151c  fmr 1, 29
  0421520  fmr 2, 30
  0421524  bl 0x502578
  0421528  nop
  042152c  fmr 29, 1
  0421530  bl 0x5e8078
  0421534  nop
  0421538  stfs 1, 272(1)
  042153c  fmr 1, 29
  0421540  bl 0x5e8128
  0421544  nop
  0421548  lfs 2, 256(1)
  042154c  lis 5, 114
  0421550  stfs 1, 276(1)
  0421554  addic 3, 1, 272
  0421558  stw 25, 280(1)
  042155c  lfs 1, 260(1)
  0421560  stfs 2, 288(1)
  0421564  ori 4, 3, 0
  0421568  lfs 2, 264(1)
  042156c  stfs 1, 292(1)
  0421570  lfs 1, 268(1)
  0421574  stfs 2, 296(1)
  0421578  stfs 1, 300(1)
  042157c  lfs 1, 400(30)
  0421580  lfs 2, -3052(5)
  0421584  fmuls 1, 1, 2
  0421588  bl 0x5e7f98
  042158c  nop
  0421590  lwz 3, 424(30)
  0421594  cmpwi 3, 4
  0421598  bt 2, 0x4216c0
  042159c  cmpwi 3, 3
  04215a0  bt 2, 0x421694
  04215a4  cmpwi 3, 2
  04215a8  bt 2, 0x421664
  04215ac  cmpwi 3, 1
  04215b0  bt 2, 0x421638
  04215b4  cmpwi 3, 0
  04215b8  bf 2, 0x4216e8
  04215bc  lfs 1, 288(1)
  04215c0  lfs 2, 296(1)
  04215c4  ori 3, 31, 0
  04215c8  stfs 1, 64(1)
  04215cc  li 9, 181
  04215d0  stfs 2, 72(1)
  04215d4  lfs 1, 272(1)
  04215d8  lfs 2, 280(1)
  04215dc  stfs 1, 80(1)
  04215e0  stfs 2, 88(1)
  04215e4  lfs 1, 392(30)
  04215e8  lfs 2, 292(1)
  04215ec  lfs 3, 344(30)
  04215f0  lfs 4, 428(30)
  04215f4  stfs 2, 68(1)
  04215f8  lfs 2, 300(1)
  04215fc  lfs 5, 276(1)
  0421600  stfs 2, 76(1)
  0421604  stfs 5, 84(1)
  0421608  lfs 2, 284(1)
  042160c  stfs 2, 92(1)
  0421610  std 29, 112(1)
  0421614  fmr 2, 3
  0421618  ld 5, 64(1)
  042161c  ld 6, 72(1)
  0421620  ld 7, 80(1)
  0421624  fmr 3, 4
  0421628  ld 8, 88(1)
  042162c  bl 0x3487b8
  0421630  nop
  0421634  b 0x4216e8
  0421638  addic 5, 1, 272
  042163c  fmr 2, 27
  0421640  addic 4, 1, 288
  0421644  fmr 3, 26
  0421648  ori 3, 31, 0
  042164c  lfs 1, 344(30)
  0421650  li 6, 0
  0421654  ori 7, 29, 0
  0421658  bl 0x495778
  042165c  nop
  0421660  b 0x4216e8
  0421664  lfs 1, 344(30)
  0421668  lfs 3, 24(31)
  042166c  addic 5, 1, 272
  0421670  addic 4, 1, 288
  0421674  fmr 2, 27
  0421678  ori 3, 31, 0
  042167c  fadds 3, 3, 26
  0421680  li 6, 1
  0421684  ori 7, 29, 0
  0421688  bl 0x495778
  042168c  nop
  0421690  b 0x4216e8
  0421694  addic 5, 1, 272
  0421698  addic 4, 1, 288
  042169c  fmr 2, 27
  04216a0  ori 3, 31, 0
  04216a4  fmr 3, 26
  04216a8  li 6, 2
  04216ac  lfs 1, 344(30)
  04216b0  ori 7, 29, 0
  04216b4  bl 0x495778
  04216b8  nop
  04216bc  b 0x4216e8
  04216c0  addic 5, 1, 272
  04216c4  fmr 2, 27
  04216c8  addic 4, 1, 288
  04216cc  fmr 3, 26
  04216d0  ori 3, 31, 0
  04216d4  lfs 1, 344(30)
  04216d8  li 6, 3
  04216dc  ori 7, 29, 0
  04216e0  bl 0x495778
  04216e4  nop
  04216e8  fadds 28, 28, 27
  04216ec  fcmpu 0, 28, 31
  04216f0  bt 0, 0x42151c
  04216f4  b 0x421e90
  04216f8  lbz 3, 83(31)
  04216fc  cmpwi 3, 1
  0421700  bt 2, 0x421740
  0421704  lis 3, 66
  0421708  lis 4, 114
  042170c  addi 3, 3, -1208
  0421710  li 5, 0
  0421714  lfs 1, 32(3)
  0421718  lfs 2, -3056(4)
  042171c  ori 3, 31, 0
  0421720  li 4, 1
  0421724  fmuls 1, 2, 1
  0421728  fctiwz 1, 1
  042172c  stfd 1, 568(1)
  0421730  lwz 6, 572(1)
  0421734  extsw 6, 6
  0421738  bl 0xfddc0
  042173c  nop
  0421740  li 3, 3
  0421744  stb 3, 32(31)
  0421748  b 0x421e90
  042174c  lfs 1, 480(1)
  0421750  lfs 2, 16(31)
  0421754  lfs 3, 484(1)
  0421758  lfs 4, 20(31)
  042175c  fsubs 1, 1, 2
  0421760  fsubs 2, 3, 4
  0421764  bl 0x5e8338
  0421768  nop
  042176c  lis 3, 66
  0421770  lfs 2, 252(30)
  0421774  addic 5, 30, 212
  0421778  addi 4, 3, -1208
  042177c  lfs 3, 256(30)
  0421780  lfs 4, 260(30)
  0421784  ori 3, 31, 0
  0421788  lfs 5, 44(4)
  042178c  fmuls 2, 2, 5
  0421790  bl 0xff2e8
  0421794  nop
  0421798  lbz 3, 112(31)
  042179c  rlwinm 3, 3, 0, 30, 30
  04217a0  cmpwi 3, 0
  04217a4  bt 2, 0x421e90
  04217a8  li 3, 356
  04217ac  vspltisw 4, -1
  04217b0  lis 5, 66
  04217b4  addi 4, 3, 16
  04217b8  vslw 4, 4, 4
  04217bc  <unknown>
  04217c0  addi 3, 5, -1208
  04217c4  <unknown>
  04217c8  li 4, 36
  04217cc  vor 2, 2, 3
  04217d0  vcfsx 2, 2, 0
  04217d4  <unknown>
  04217d8  lis 3, 114
  04217dc  vspltw 3, 3, 0
  04217e0  li 4, -3056
  04217e4  <unknown>
  04217e8  li 4, 380
  04217ec  lfs 1, -3056(3)
  04217f0  vaddfp 2, 2, 3
  04217f4  vmaddfp 2, 5, 2, 4
  04217f8  vctsxs 2, 2, 0
  04217fc  vspltw 2, 2, 0
  0421800  stvewx 2, 4, 30
  0421804  lbz 3, 398(30)
  0421808  cmpwi 3, 0
  042180c  bt 2, 0x421860
  0421810  stb 25, 398(30)
  0421814  lbz 3, 83(31)
  0421818  cmpwi 3, 12
  042181c  bt 2, 0x421854
  0421820  lis 3, 66
  0421824  addi 3, 3, -1208
  0421828  li 4, 12
  042182c  li 5, 0
  0421830  lfs 2, 32(3)
  0421834  ori 3, 31, 0
  0421838  fmuls 1, 1, 2
  042183c  fctiwz 1, 1
  0421840  stfd 1, 568(1)
  0421844  lwz 6, 572(1)
  0421848  extsw 6, 6
  042184c  bl 0xfddc0
  0421850  nop
  0421854  li 3, 10
  0421858  stb 3, 32(31)
  042185c  b 0x421e90
  0421860  stb 25, 398(30)
  0421864  lbz 3, 83(31)
  0421868  cmpwi 3, 1
  042186c  bt 2, 0x4218a4
  0421870  lis 3, 66
  0421874  addi 3, 3, -1208
  0421878  li 4, 1
  042187c  li 5, 0
  0421880  lfs 2, 32(3)
  0421884  ori 3, 31, 0
  0421888  fmuls 1, 1, 2
  042188c  fctiwz 1, 1
  0421890  stfd 1, 568(1)
  0421894  lwz 6, 572(1)
  0421898  extsw 6, 6
  042189c  bl 0xfddc0
  04218a0  nop
  04218a4  li 3, 3
  04218a8  stb 3, 32(31)
  04218ac  b 0x421e90
  04218b0  lbz 3, 112(31)
  04218b4  rlwinm 3, 3, 0, 30, 30
  04218b8  cmpwi 3, 0
  04218bc  bt 2, 0x421e90
  04218c0  lfs 1, 20(31)
  04218c4  lfs 2, 484(1)
  04218c8  lfs 3, 16(31)
  04218cc  fsubs 1, 1, 2
  04218d0  lfs 2, 480(1)
  04218d4  lwz 3, 380(30)
  04218d8  fsubs 2, 3, 2
  04218dc  cmpwi 3, 0
  04218e0  fmuls 1, 1, 1
  04218e4  fmadds 1, 2, 2, 1
  04218e8  fsqrts 1, 1
  04218ec  bf 2, 0x4219b4
  04218f0  lwz 3, 544(1)
  04218f4  cmpwi 3, 0
  04218f8  bt 2, 0x4219b4
  04218fc  lfs 2, 404(30)
  0421900  fcmpu 0, 1, 2
  0421904  cror 6, 1, 2
  0421908  bt 6, 0x4219b4
  042190c  li 3, 412
  0421910  li 5, 36
  0421914  vspltisw 4, -1
  0421918  addi 4, 3, 16
  042191c  <unknown>
  0421920  lis 3, 66
  0421924  vslw 4, 4, 4
  0421928  <unknown>
  042192c  addi 3, 3, -1208
  0421930  vor 2, 2, 3
  0421934  lis 4, 114
  0421938  vcfsx 2, 2, 0
  042193c  <unknown>
  0421940  li 3, -3056
  0421944  vspltw 3, 3, 0
  0421948  <unknown>
  042194c  li 3, 380
  0421950  lfs 1, -3056(4)
  0421954  vaddfp 2, 2, 3
  0421958  vmaddfp 2, 5, 2, 4
  042195c  vctsxs 2, 2, 0
  0421960  vspltw 2, 2, 0
  0421964  stvewx 2, 3, 30
  0421968  lbz 3, 83(31)
  042196c  cmpwi 3, 17
  0421970  bt 2, 0x4219a8
  0421974  lis 3, 66
  0421978  addi 3, 3, -1208
  042197c  li 4, 17
  0421980  li 5, 0
  0421984  lfs 2, 32(3)
  0421988  ori 3, 31, 0
  042198c  fmuls 1, 1, 2
  0421990  fctiwz 1, 1
  0421994  stfd 1, 568(1)
  0421998  lwz 6, 572(1)
  042199c  extsw 6, 6
  04219a0  bl 0xfddc0
  04219a4  nop
  04219a8  li 3, 15
  04219ac  stb 3, 32(31)
  04219b0  b 0x421e90
  04219b4  cmpwi 29, 0
  04219b8  bt 2, 0x421a48
  04219bc  lbz 3, 399(30)
  04219c0  cmpwi 3, 1
  04219c4  bf 2, 0x4219f4
  04219c8  lis 3, 66
  04219cc  ori 4, 29, 0
  04219d0  addi 5, 3, -1208
  04219d4  addic 3, 31, 16
  04219d8  lfs 1, 24(5)
  04219dc  bl 0x1367d0
  04219e0  nop
  04219e4  lwz 4, 0(29)
  04219e8  addic 4, 4, -1
  04219ec  cmpw 3, 4
  04219f0  bt 2, 0x421a48
  04219f4  lbz 3, 83(31)
  04219f8  cmpwi 3, 6
  04219fc  bt 2, 0x421a3c
  0421a00  lis 3, 66
  0421a04  lis 4, 114
  0421a08  addi 3, 3, -1208
  0421a0c  li 5, 0
  0421a10  lfs 1, 32(3)
  0421a14  lfs 2, -3056(4)
  0421a18  ori 3, 31, 0
  0421a1c  fmuls 1, 2, 1
  0421a20  li 4, 6
  0421a24  fctiwz 1, 1
  0421a28  stfd 1, 568(1)
  0421a2c  lwz 6, 572(1)
  0421a30  extsw 6, 6
  0421a34  bl 0xfddc0
  0421a38  nop
  0421a3c  li 3, 5
  0421a40  stb 3, 32(31)
  0421a44  b 0x421e90
  0421a48  lbz 3, 83(31)
  0421a4c  cmpwi 3, 1
  0421a50  bt 2, 0x421a90
  0421a54  lis 3, 66
  0421a58  lis 4, 114
  0421a5c  addi 3, 3, -1208
  0421a60  li 5, 0
  0421a64  lfs 1, 32(3)
  0421a68  lfs 2, -3056(4)
  0421a6c  ori 3, 31, 0
  0421a70  li 4, 1
  0421a74  fmuls 1, 2, 1
  0421a78  fctiwz 1, 1
  0421a7c  stfd 1, 568(1)
  0421a80  lwz 6, 572(1)
  0421a84  extsw 6, 6
  0421a88  bl 0xfddc0
  0421a8c  nop
  0421a90  li 3, 3
  0421a94  stb 3, 32(31)
  0421a98  b 0x421e90
  0421a9c  lbz 3, 112(31)
  0421aa0  rlwinm 3, 3, 0, 30, 30
  0421aa4  cmpwi 3, 0
  0421aa8  bt 2, 0x421e90
  0421aac  lbz 3, 83(31)
  0421ab0  cmpwi 3, 1
  0421ab4  bt 2, 0x421af4
  0421ab8  lis 3, 66
  0421abc  lis 4, 114
  0421ac0  addi 3, 3, -1208
  0421ac4  li 5, 0
  0421ac8  lfs 1, 32(3)
  0421acc  lfs 2, -3056(4)
  0421ad0  ori 3, 31, 0
  0421ad4  fmuls 1, 2, 1
  0421ad8  li 4, 1
  0421adc  fctiwz 1, 1
  0421ae0  stfd 1, 568(1)
  0421ae4  lwz 6, 572(1)
  0421ae8  extsw 6, 6
  0421aec  bl 0xfddc0
  0421af0  nop
  0421af4  li 3, 3
  0421af8  stb 3, 32(31)
  0421afc  b 0x421e90
  0421b00  lbz 3, 112(31)
  0421b04  rlwinm 3, 3, 0, 30, 30
  0421b08  cmpwi 3, 0
  0421b0c  bt 2, 0x421e90
  0421b10  lbz 3, 83(31)
  0421b14  cmpwi 3, 1
  0421b18  bt 2, 0x421b58
  0421b1c  lis 3, 66
  0421b20  lis 4, 114
  0421b24  addi 3, 3, -1208
  0421b28  li 5, 0
  0421b2c  lfs 1, 32(3)
  0421b30  lfs 2, -3056(4)
  0421b34  ori 3, 31, 0
  0421b38  li 4, 1
  0421b3c  fmuls 1, 2, 1
  0421b40  fctiwz 1, 1
  0421b44  stfd 1, 568(1)
  0421b48  lwz 6, 572(1)
  0421b4c  extsw 6, 6
  0421b50  bl 0xfddc0
  0421b54  nop
  0421b58  li 3, 3
  0421b5c  stb 3, 32(31)
  0421b60  b 0x421e90
  0421b64  ori 3, 31, 0
  0421b68  addic 4, 30, 96
  0421b6c  bl 0x10b030
  0421b70  nop
  0421b74  clrlwi 3, 3, 31
  0421b78  cmpwi 3, 0
  0421b7c  bt 2, 0x421e90
  0421b80  lbz 3, 83(31)
  0421b84  cmpwi 3, 1
  0421b88  bt 2, 0x421bc8
  0421b8c  lis 3, 66
  0421b90  lis 4, 114
  0421b94  addi 3, 3, -1208
  0421b98  li 5, 0
  0421b9c  lfs 1, 32(3)
  0421ba0  lfs 2, -3056(4)
  0421ba4  ori 3, 31, 0
  0421ba8  li 4, 1
  0421bac  fmuls 1, 2, 1
  0421bb0  fctiwz 1, 1
  0421bb4  stfd 1, 568(1)
  0421bb8  lwz 6, 572(1)
  0421bbc  extsw 6, 6
  0421bc0  bl 0xfddc0
  0421bc4  nop
  0421bc8  li 3, 3
  0421bcc  stb 3, 32(31)
  0421bd0  b 0x421e90
  0421bd4  ori 3, 31, 0
  0421bd8  addic 4, 30, 96
  0421bdc  bl 0x10b030
  0421be0  nop
  0421be4  rlwinm 3, 3, 0, 25, 25
  0421be8  cmpwi 3, 0
  0421bec  bt 2, 0x421e90
  0421bf0  lis 3, 66
  0421bf4  li 7, -1
  0421bf8  addi 5, 3, -1208
  0421bfc  li 6, 1
  0421c00  ori 3, 31, 0
  0421c04  addic 4, 30, 304
  0421c08  li 8, 3
  0421c0c  lfs 1, 24(5)
  0421c10  lfs 4, 16(5)
  0421c14  li 9, 3
  0421c18  lfs 3, 44(5)
  0421c1c  li 10, 5
  0421c20  lfs 5, 60(5)
  0421c24  fmr 2, 1
  0421c28  lfs 7, 8(5)
  0421c2c  fmr 6, 4
  0421c30  std 7, 144(1)
  0421c34  li 5, 0
  0421c38  std 25, 160(1)
  0421c3c  std 6, 168(1)
  0421c40  std 7, 176(1)
  0421c44  std 25, 184(1)
  0421c48  bl 0x10e030
  0421c4c  nop
  0421c50  ori 3, 31, 0
  0421c54  bl 0xefb38
  0421c58  nop
  0421c5c  b 0x421ea8
  0421c60  lfs 1, 480(1)
  0421c64  lfs 2, 16(31)
  0421c68  lfs 3, 484(1)
  0421c6c  lfs 4, 20(31)
  0421c70  fsubs 1, 1, 2
  0421c74  fsubs 2, 3, 4
  0421c78  bl 0x5e8338
  0421c7c  nop
  0421c80  lis 3, 66
  0421c84  lfs 2, 252(30)
  0421c88  addic 5, 30, 212
  0421c8c  addi 4, 3, -1208
  0421c90  lfs 3, 256(30)
  0421c94  lfs 4, 260(30)
  0421c98  ori 3, 31, 0
  0421c9c  lfs 5, 44(4)
  0421ca0  fmuls 2, 2, 5
  0421ca4  bl 0xff2e8
  0421ca8  nop
  0421cac  lbz 3, 82(31)
  0421cb0  cmpwi 3, 17
  0421cb4  bf 2, 0x421e30
  0421cb8  ori 3, 31, 0
  0421cbc  bl 0xefe40
  0421cc0  nop
  0421cc4  lis 3, 66
  0421cc8  addi 3, 3, -1208
  0421ccc  lfs 2, 64(3)
  0421cd0  fcmpu 0, 1, 2
  0421cd4  cror 6, 0, 2
  0421cd8  bt 6, 0x421e30
  0421cdc  ori 3, 31, 0
  0421ce0  addic 5, 1, 352
  0421ce4  li 4, 0
  0421ce8  bl 0xf1114
  0421cec  nop
  0421cf0  ori 3, 31, 0
  0421cf4  addic 5, 1, 368
  0421cf8  li 4, 1
  0421cfc  bl 0xf1114
  0421d00  nop
  0421d04  lis 3, 66
  0421d08  lfs 1, 360(1)
  0421d0c  lfs 2, 364(30)
  0421d10  addi 5, 3, -1208
  0421d14  addic 29, 1, 336
  0421d18  lfs 3, 68(5)
  0421d1c  lfs 4, 376(1)
  0421d20  fnmsubs 1, 2, 3, 1
  0421d24  lfs 5, 368(1)
  0421d28  lfs 6, 352(1)
  0421d2c  lfs 7, 380(1)
  0421d30  lfs 2, 372(1)
  0421d34  lfs 8, 356(1)
  0421d38  fsubs 5, 5, 6
  0421d3c  lfs 9, 16(31)
  0421d40  lfs 10, 20(31)
  0421d44  fsubs 2, 2, 8
  0421d48  ori 3, 29, 0
  0421d4c  ori 4, 29, 0
  0421d50  stfs 1, 360(1)
  0421d54  lfs 11, 364(30)
  0421d58  stfs 7, 332(1)
  0421d5c  fnmsubs 3, 11, 3, 4
  0421d60  fsubs 4, 3, 1
  0421d64  stfs 3, 376(1)
  0421d68  lfs 3, 36(5)
  0421d6c  stfs 7, 348(1)
  0421d70  fmadds 5, 5, 3, 6
  0421d74  fmadds 2, 2, 3, 8
  0421d78  fmadds 1, 4, 3, 1
  0421d7c  fsubs 3, 5, 9
  0421d80  fsubs 4, 2, 10
  0421d84  stfs 5, 320(1)
  0421d88  stfs 2, 324(1)
  0421d8c  fsubs 6, 1, 1
  0421d90  stfs 1, 328(1)
  0421d94  stfs 3, 336(1)
  0421d98  stfs 4, 340(1)
  0421d9c  stfs 6, 344(1)
  0421da0  lfs 1, 16(5)
  0421da4  bl 0x5e7f98
  0421da8  nop
  0421dac  addic 28, 1, 432
  0421db0  lfs 1, 408(30)
  0421db4  ori 4, 31, 0
  0421db8  ori 3, 28, 0
  0421dbc  li 5, 1
  0421dc0  ori 7, 29, 0
  0421dc4  bl 0x10581c
  0421dc8  nop
  0421dcc  addic 3, 1, 320
  0421dd0  lfs 1, 364(30)
  0421dd4  li 5, 0
  0421dd8  ori 6, 31, 0
  0421ddc  ori 7, 28, 0
  0421de0  bl 0x5e598
  0421de4  nop
  0421de8  cmpwi 3, 0
  0421dec  bf 2, 0x421e30
  0421df0  addic 3, 1, 368
  0421df4  addic 7, 1, 432
  0421df8  lfs 1, 364(30)
  0421dfc  li 5, 0
  0421e00  ori 6, 31, 0
  0421e04  bl 0x5e598
  0421e08  nop
  0421e0c  cmpwi 3, 0
  0421e10  bf 2, 0x421e30
  0421e14  addic 3, 1, 352
  0421e18  lfs 1, 364(30)
  0421e1c  addic 7, 1, 432
  0421e20  li 5, 0
  0421e24  ori 6, 31, 0
  0421e28  bl 0x5e598
  0421e2c  nop
  0421e30  lbz 3, 112(31)
  0421e34  rlwinm 3, 3, 0, 30, 30
  0421e38  cmpwi 3, 0
  0421e3c  bt 2, 0x421e90
  0421e40  lbz 3, 83(31)
  0421e44  cmpwi 3, 1
  0421e48  bt 2, 0x421e88
  0421e4c  lis 3, 66
  0421e50  lis 4, 114
  0421e54  addi 3, 3, -1208
  0421e58  li 5, 0
  0421e5c  lfs 1, 32(3)
  0421e60  lfs 2, -3056(4)
  0421e64  ori 3, 31, 0
  0421e68  fmuls 1, 2, 1
  0421e6c  li 4, 1
  0421e70  fctiwz 1, 1
  0421e74  stfd 1, 568(1)
  0421e78  lwz 6, 572(1)
  0421e7c  extsw 6, 6
  0421e80  bl 0xfddc0
  0421e84  nop
  0421e88  li 3, 3
  0421e8c  stb 3, 32(31)
  0421e90  lis 3, 66
  0421e94  addi 4, 3, -1208
  0421e98  ori 3, 31, 0
  0421e9c  lfs 1, 36(4)
  0421ea0  bl 0x106150
  0421ea4  nop
  0421ea8  ld 0, 704(1)
  0421eac  mtlr 0
  0421eb0  lfd 26, 640(1)
  0421eb4  lfd 27, 648(1)
  0421eb8  lfd 28, 656(1)
  0421ebc  lfd 29, 664(1)
  0421ec0  lfd 30, 672(1)
  0421ec4  lfd 31, 680(1)
  0421ec8  ld 25, 584(1)
  0421ecc  ld 26, 592(1)
  0421ed0  ld 27, 600(1)
  0421ed4  ld 28, 608(1)
  0421ed8  ld 29, 616(1)
  0421edc  ld 30, 624(1)
  0421ee0  ld 31, 632(1)
  0421ee4  addi 1, 1, 688
  0421ee8  blr
