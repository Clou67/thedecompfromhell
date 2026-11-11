# game/update/moby1443.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1890_0027f6fc:   # 0x27f6fc, 0x14 bytes
  027f6fc  lis 3, 123
  027f700  lis 4, 1
  027f704  addic 3, 3, -22204
  027f708  stw 4, 72(3)
  027f70c  blr

M1890_0027f710:   # 0x27f710, 0x70 bytes
  027f710  lis 4, 165
  027f714  sldi 3, 3, 2
  027f718  addic 4, 4, -28284
  027f71c  extsw 3, 3
  027f720  lwzx 3, 4, 3
  027f724  cmpwi 3, 0
  027f728  bf 2, 0x27f734
  027f72c  li 3, 0
  027f730  b 0x27f77c
  027f734  lis 5, 164
  027f738  ori 4, 3, 0
  027f73c  lwz 3, -28512(5)
  027f740  lhz 5, 0(4)
  027f744  rlwinm 5, 5, 8, 9, 23
  027f748  addc 5, 3, 5
  027f74c  clrldi 5, 5, 32
  027f750  lbz 5, 188(5)
  027f754  cmpwi 5, 0
  027f758  bf 2, 0x27f764
  027f75c  li 3, 0
  027f760  b 0x27f77c
  027f764  lhz 5, 0(4)
  027f768  addic 4, 4, 2
  027f76c  extsh 5, 5
  027f770  cmpwi 5, 0
  027f774  bf 0, 0x27f740
  027f778  li 3, 1
  027f77c  blr

M1890_0027f788:   # 0x27f788, 0xec bytes
  027f788  stdu 1, -112(1)
  027f78c  mflr 0
  027f790  std 0, 128(1)
  027f794  lis 5, 40
  027f798  lis 4, 165
  027f79c  sldi 3, 3, 2
  027f7a0  addi 5, 5, -2176
  027f7a4  addic 4, 4, -28284
  027f7a8  extsw 3, 3
  027f7ac  lfs 5, 0(5)
  027f7b0  lwzx 3, 4, 3
  027f7b4  cmpwi 3, 0
  027f7b8  bt 2, 0x27f864
  027f7bc  lis 4, 151
  027f7c0  lis 5, 164
  027f7c4  addic 7, 4, -25376
  027f7c8  li 6, 0
  027f7cc  lwz 4, -28512(5)
  027f7d0  lfs 3, 128(7)
  027f7d4  lfs 2, 132(7)
  027f7d8  lfs 1, 136(7)
  027f7dc  lhz 5, 0(3)
  027f7e0  rlwinm 5, 5, 8, 9, 23
  027f7e4  addc 5, 4, 5
  027f7e8  clrldi 5, 5, 32
  027f7ec  lhz 7, 166(5)
  027f7f0  cmpwi 7, 1443
  027f7f4  bt 2, 0x27f834
  027f7f8  lfs 4, 20(5)
  027f7fc  lfs 6, 16(5)
  027f800  fsubs 4, 2, 4
  027f804  lfs 7, 24(5)
  027f808  fsubs 6, 3, 6
  027f80c  fsubs 7, 1, 7
  027f810  fmuls 4, 4, 4
  027f814  fmadds 4, 6, 6, 4
  027f818  fmadds 4, 7, 7, 4
  027f81c  fsqrts 4, 4
  027f820  fcmpu 0, 5, 4
  027f824  cror 6, 0, 2
  027f828  bt 6, 0x27f834
  027f82c  ori 6, 5, 0
  027f830  fmr 5, 4
  027f834  lhz 5, 0(3)
  027f838  addic 3, 3, 2
  027f83c  extsh 5, 5
  027f840  cmpwi 5, 0
  027f844  bf 0, 0x27f7dc
  027f848  cmpwi 6, 0
  027f84c  bt 2, 0x27f864
  027f850  li 3, 0
  027f854  li 4, 0
  027f858  ori 5, 6, 0
  027f85c  bl 0x15d12c
  027f860  nop
  027f864  ld 0, 128(1)
  027f868  mtlr 0
  027f86c  addi 1, 1, 112
  027f870  blr

UpdateMoby_1443:   # 0x27f880, 0x2ac bytes
  027f880  stdu 1, -176(1)
  027f884  mflr 0
  027f888  std 0, 192(1)
  027f88c  stfd 31, 168(1)
  027f890  std 31, 160(1)
  027f894  lbz 4, 32(3)
  027f898  std 30, 152(1)
  027f89c  ori 31, 3, 0
  027f8a0  lwz 30, 120(3)
  027f8a4  cmpwi 4, 0
  027f8a8  cmpwi 1, 4, 2
  027f8ac  cmpwi 6, 4, 1
  027f8b0  std 29, 144(1)
  027f8b4  std 28, 136(1)
  027f8b8  std 27, 128(1)
  027f8bc  std 26, 120(1)
  027f8c0  std 25, 112(1)
  027f8c4  cmpwi 7, 4, -1
  027f8c8  bt 1, 0x27f8d4
  027f8cc  bf 29, 0x27fafc
  027f8d0  b 0x27f8e0
  027f8d4  bf 25, 0x27f8f4
  027f8d8  bf 5, 0x27fa88
  027f8dc  b 0x27fafc
  027f8e0  li 3, 1
  027f8e4  li 4, 255
  027f8e8  stb 3, 32(31)
  027f8ec  stb 4, 48(31)
  027f8f0  b 0x27fafc
  027f8f4  lis 3, 123
  027f8f8  lis 26, 114
  027f8fc  lfs 1, 12(30)
  027f900  lis 4, 40
  027f904  lfs 2, -22092(3)
  027f908  lfs 3, -3052(26)
  027f90c  addi 3, 4, -1932
  027f910  fmadds 1, 2, 3, 1
  027f914  stfs 1, 12(30)
  027f918  lfs 2, 0(3)
  027f91c  fcmpu 0, 1, 2
  027f920  cror 6, 0, 2
  027f924  bt 6, 0x27f93c
  027f928  lis 3, 40
  027f92c  addi 3, 3, -1932
  027f930  lfs 2, 4(3)
  027f934  fadds 1, 1, 2
  027f938  stfs 1, 12(30)
  027f93c  ori 3, 31, 0
  027f940  lwz 4, 36(30)
  027f944  extsw 4, 4
  027f948  bl 0x15cc7c
  027f94c  nop
  027f950  cmpwi 3, 0
  027f954  bf 2, 0x27f970
  027f958  li 3, 0
  027f95c  li 4, 4
  027f960  ori 5, 31, 0
  027f964  bl 0x15d12c
  027f968  nop
  027f96c  stw 3, 36(30)
  027f970  lis 3, 40
  027f974  lis 4, 123
  027f978  addi 3, 3, -1932
  027f97c  lfs 31, 8(3)
  027f980  lfs 2, -22096(4)
  027f984  lfs 1, 8(30)
  027f988  fmuls 2, 2, 31
  027f98c  lfs 3, -3052(26)
  027f990  fmuls 2, 2, 3
  027f994  bl 0x502578
  027f998  nop
  027f99c  li 25, 0
  027f9a0  lis 28, 123
  027f9a4  stfs 1, 8(30)
  027f9a8  ori 29, 25, 0
  027f9ac  ori 27, 30, 0
  027f9b0  addic 28, 28, -22088
  027f9b4  lfs 1, 0(28)
  027f9b8  fmuls 3, 1, 31
  027f9bc  lfs 1, 16(27)
  027f9c0  lfs 4, -3052(26)
  027f9c4  fmuls 2, 3, 4
  027f9c8  bl 0x502578
  027f9cc  nop
  027f9d0  addic 25, 25, 1
  027f9d4  stfs 1, 16(27)
  027f9d8  addic 28, 28, 4
  027f9dc  cmpwi 25, 4
  027f9e0  addic 27, 27, 4
  027f9e4  bt 0, 0x27f9b4
  027f9e8  lbz 3, 49(31)
  027f9ec  cmpwi 3, 0
  027f9f0  bt 2, 0x27fa08
  027f9f4  lis 3, 113
  027f9f8  ori 4, 31, 0
  027f9fc  addic 3, 3, -22848
  027fa00  bl 0x6d720
  027fa04  nop
  027fa08  lwz 3, 32(30)
  027fa0c  cmpwi 3, -1
  027fa10  bt 2, 0x27fafc
  027fa14  lis 4, 165
  027fa18  slwi 3, 3, 2
  027fa1c  addic 4, 4, -28284
  027fa20  extsw 3, 3
  027fa24  lwzx 3, 4, 3
  027fa28  cmpwi 3, 0
  027fa2c  bt 2, 0x27fafc
  027fa30  ori 4, 3, 0
  027fa34  lis 3, 164
  027fa38  lhz 5, 0(4)
  027fa3c  lwz 6, -28512(3)
  027fa40  rlwinm 5, 5, 8, 9, 23
  027fa44  addc 5, 6, 5
  027fa48  clrldi 5, 5, 32
  027fa4c  lbz 5, 188(5)
  027fa50  cmpwi 5, 0
  027fa54  bt 2, 0x27fafc
  027fa58  lhz 5, 0(4)
  027fa5c  addic 4, 4, 2
  027fa60  extsh 5, 5
  027fa64  cmpwi 5, 0
  027fa68  bf 0, 0x27fa38
  027fa6c  li 3, 2
  027fa70  stb 3, 32(31)
  027fa74  lwz 3, 32(30)
  027fa78  stw 29, 148(31)
  027fa7c  extsw 3, 3
  027fa80  bl 0x27f788
  027fa84  b 0x27fafc
  027fa88  lwz 4, 32(30)
  027fa8c  lis 3, 165
  027fa90  slwi 4, 4, 2
  027fa94  addic 3, 3, -28284
  027fa98  extsw 30, 4
  027fa9c  lwzx 30, 3, 30
  027faa0  cmpwi 30, 0
  027faa4  bt 2, 0x27fae8
  027faa8  lis 4, 164
  027faac  ori 3, 30, 0
  027fab0  lwz 30, -28512(4)
  027fab4  lhz 4, 0(3)
  027fab8  rlwinm 4, 4, 8, 9, 23
  027fabc  addc 4, 30, 4
  027fac0  clrldi 4, 4, 32
  027fac4  lbz 4, 188(4)
  027fac8  cmpwi 4, 0
  027facc  bt 2, 0x27fae8
  027fad0  lhz 4, 0(3)
  027fad4  addic 3, 3, 2
  027fad8  extsh 4, 4
  027fadc  cmpwi 4, 0
  027fae0  bf 0, 0x27fab4
  027fae4  b 0x27fafc
  027fae8  li 3, 1
  027faec  lwz 4, 36(31)
  027faf0  stb 3, 32(31)
  027faf4  lwz 3, 16(4)
  027faf8  stw 3, 148(31)
  027fafc  ld 0, 192(1)
  027fb00  mtlr 0
  027fb04  lfd 31, 168(1)
  027fb08  ld 25, 112(1)
  027fb0c  ld 26, 120(1)
  027fb10  ld 27, 128(1)
  027fb14  ld 28, 136(1)
  027fb18  ld 29, 144(1)
  027fb1c  ld 30, 152(1)
  027fb20  ld 31, 160(1)
  027fb24  addi 1, 1, 176
  027fb28  blr

M1890_0027fb48:   # 0x27fb48, 0x490 bytes
  027fb48  stdu 1, -480(1)
  027fb4c  mflr 0
  027fb50  std 0, 496(1)
  027fb54  stfd 24, 416(1)
  027fb58  stfd 25, 424(1)
  027fb5c  stfd 26, 432(1)
  027fb60  stfd 27, 440(1)
  027fb64  stfd 28, 448(1)
  027fb68  stfd 29, 456(1)
  027fb6c  stfd 30, 464(1)
  027fb70  stfd 31, 472(1)
  027fb74  lwz 5, 36(3)
  027fb78  lfs 31, 44(3)
  027fb7c  std 31, 408(1)
  027fb80  lis 4, 123
  027fb84  lwz 31, 120(3)
  027fb88  lfs 1, 64(3)
  027fb8c  lfs 2, 68(3)
  027fb90  lfs 3, 36(5)
  027fb94  stfs 1, 112(1)
  027fb98  lfs 1, 72(3)
  027fb9c  stfs 2, 116(1)
  027fba0  fdivs 31, 31, 3
  027fba4  lfs 2, 76(3)
  027fba8  stfs 1, 120(1)
  027fbac  lfs 1, 16(3)
  027fbb0  stfs 2, 124(1)
  027fbb4  lfs 2, 20(3)
  027fbb8  stfs 1, 176(1)
  027fbbc  lfs 1, 24(3)
  027fbc0  stfs 2, 180(1)
  027fbc4  lfs 2, 28(3)
  027fbc8  stfs 1, 184(1)
  027fbcc  stfs 2, 188(1)
  027fbd0  lwz 3, -21984(4)
  027fbd4  std 30, 400(1)
  027fbd8  std 29, 392(1)
  027fbdc  std 28, 384(1)
  027fbe0  std 27, 376(1)
  027fbe4  std 26, 368(1)
  027fbe8  std 25, 360(1)
  027fbec  std 24, 352(1)
  027fbf0  extsw 3, 3
  027fbf4  bl 0x685c4
  027fbf8  nop
  027fbfc  std 3, 312(1)
  027fc00  li 3, 0
  027fc04  lis 9, 0
  027fc08  li 4, 0
  027fc0c  li 5, 1
  027fc10  li 6, 1
  027fc14  li 7, 1
  027fc18  li 8, 0
  027fc1c  ori 9, 9, 65424
  027fc20  bl 0x502fd4
  027fc24  nop
  027fc28  std 3, 320(1)
  027fc2c  li 4, 0
  027fc30  li 3, 0
  027fc34  li 5, 0
  027fc38  li 6, 0
  027fc3c  li 7, 0
  027fc40  li 8, 0
  027fc44  bl 0x502f08
  027fc48  nop
  027fc4c  std 3, 304(1)
  027fc50  lis 3, 251
  027fc54  lis 4, 251
  027fc58  lis 5, 123
  027fc5c  lis 6, 123
  027fc60  li 7, 128
  027fc64  lwz 8, -12084(3)
  027fc68  lwz 3, -12088(4)
  027fc6c  lwz 4, -22056(5)
  027fc70  lwz 6, -22052(6)
  027fc74  ori 5, 8, 0
  027fc78  bl 0x502ea8
  027fc7c  nop
  027fc80  lis 5, 123
  027fc84  std 3, 328(1)
  027fc88  addic 26, 1, 192
  027fc8c  lis 6, 123
  027fc90  li 25, 4
  027fc94  lis 8, 123
  027fc98  li 30, 0
  027fc9c  ori 3, 1, 0
  027fca0  ori 4, 1, 0
  027fca4  addic 6, 6, -22044
  027fca8  addic 8, 8, -21968
  027fcac  addic 5, 5, -22048
  027fcb0  ori 7, 26, 0
  027fcb4  mtctr 25
  027fcb8  lis 9, 123
  027fcbc  lfs 1, 0(5)
  027fcc0  lfs 2, 0(6)
  027fcc4  addic 5, 5, 8
  027fcc8  stfs 1, 272(3)
  027fccc  addic 6, 6, 8
  027fcd0  lwz 9, -22068(9)
  027fcd4  stfs 2, 276(3)
  027fcd8  stw 9, 256(4)
  027fcdc  addic 3, 3, 8
  027fce0  lfs 1, 0(8)
  027fce4  addic 4, 4, 4
  027fce8  stfs 1, 0(7)
  027fcec  lfs 2, 4(8)
  027fcf0  fmuls 1, 1, 31
  027fcf4  stfs 2, 4(7)
  027fcf8  lfs 3, 8(8)
  027fcfc  fmuls 2, 2, 31
  027fd00  fmuls 4, 3, 31
  027fd04  stfs 3, 8(7)
  027fd08  lfs 3, 12(8)
  027fd0c  addic 8, 8, 16
  027fd10  stfs 3, 12(7)
  027fd14  stfs 1, 0(7)
  027fd18  stfs 2, 4(7)
  027fd1c  stfs 4, 8(7)
  027fd20  addic 7, 7, 16
  027fd24  bdnz 0x27fcb8
  027fd28  lis 28, 123
  027fd2c  lwz 3, -21840(28)
  027fd30  extsw 3, 3
  027fd34  bl 0x502730
  027fd38  nop
  027fd3c  lis 3, 40
  027fd40  addi 29, 3, -1236
  027fd44  lwz 3, -21840(28)
  027fd48  extsw 3, 3
  027fd4c  lfs 2, 0(29)
  027fd50  fmr 31, 2
  027fd54  fdivs 31, 31, 1
  027fd58  bl 0x502730
  027fd5c  nop
  027fd60  lfs 30, 4(29)
  027fd64  lwz 3, 12(31)
  027fd68  lfs 29, 12(31)
  027fd6c  fdivs 30, 30, 1
  027fd70  cmpwi 3, 0
  027fd74  lfs 1, 8(29)
  027fd78  bf 0, 0x27fd94
  027fd7c  lis 3, 40
  027fd80  addi 3, 3, -1236
  027fd84  lfs 2, 12(3)
  027fd88  fadds 29, 29, 2
  027fd8c  fcmpu 0, 29, 1
  027fd90  bt 0, 0x27fd88
  027fd94  lis 3, 40
  027fd98  addi 3, 3, -1236
  027fd9c  lfs 28, 12(3)
  027fda0  fcmpu 0, 29, 28
  027fda4  cror 6, 0, 2
  027fda8  bt 6, 0x27fdc4
  027fdac  lis 3, 40
  027fdb0  addi 3, 3, -1236
  027fdb4  lfs 1, 16(3)
  027fdb8  fadds 29, 29, 1
  027fdbc  fcmpu 0, 29, 28
  027fdc0  bt 1, 0x27fdb8
  027fdc4  lwz 3, -21840(28)
  027fdc8  ori 29, 30, 0
  027fdcc  cmpwi 3, 0
  027fdd0  bf 1, 0x27fea4
  027fdd4  lis 3, 40
  027fdd8  lis 27, 161
  027fddc  addi 3, 3, -1236
  027fde0  addic 27, 27, 24396
  027fde4  lfs 25, 16(3)
  027fde8  lfs 27, 20(3)
  027fdec  lfs 26, 24(3)
  027fdf0  fadds 25, 30, 25
  027fdf4  extsw 3, 29
  027fdf8  std 3, 336(1)
  027fdfc  lfs 1, 8(31)
  027fe00  lfd 2, 336(1)
  027fe04  fcfid 2, 2
  027fe08  frsp 2, 2
  027fe0c  fmuls 2, 2, 31
  027fe10  bl 0x502578
  027fe14  nop
  027fe18  addic 24, 1, 128
  027fe1c  stfs 1, 112(1)
  027fe20  addic 4, 1, 112
  027fe24  ori 3, 24, 0
  027fe28  bl 0x500b64
  027fe2c  nop
  027fe30  fsubs 1, 28, 29
  027fe34  lis 3, 123
  027fe38  fsub 2, 27, 29
  027fe3c  lis 4, 123
  027fe40  lwz 3, -22072(3)
  027fe44  lwz 4, -22068(4)
  027fe48  extsw 3, 3
  027fe4c  extsw 4, 4
  027fe50  fsel 1, 2, 29, 1
  027fe54  fmuls 1, 1, 26
  027fe58  bl 0x5027bc
  027fe5c  nop
  027fe60  fadds 24, 29, 30
  027fe64  ori 4, 24, 0
  027fe68  lwz 6, 28(27)
  027fe6c  li 5, 0
  027fe70  stw 3, 260(1)
  027fe74  fadds 29, 29, 25
  027fe78  stw 3, 256(1)
  027fe7c  li 7, 9
  027fe80  addic 3, 1, 192
  027fe84  bl 0x72280
  027fe88  nop
  027fe8c  fsub 1, 28, 24
  027fe90  lwz 3, -21840(28)
  027fe94  addic 29, 29, 1
  027fe98  cmpw 29, 3
  027fe9c  fsel 29, 1, 24, 29
  027fea0  bt 0, 0x27fdf4
  027fea4  lis 3, 123
  027fea8  lwz 3, -21980(3)
  027feac  extsw 3, 3
  027feb0  bl 0x685c4
  027feb4  nop
  027feb8  lis 5, 123
  027febc  std 3, 312(1)
  027fec0  lis 6, 123
  027fec4  lis 7, 123
  027fec8  ori 3, 1, 0
  027fecc  addic 5, 5, -22016
  027fed0  addic 6, 6, -22012
  027fed4  ori 4, 1, 0
  027fed8  mtctr 25
  027fedc  addic 7, 7, -21904
  027fee0  lis 8, 123
  027fee4  lfs 1, 0(5)
  027fee8  lfs 2, 0(6)
  027feec  addic 5, 5, 8
  027fef0  stfs 1, 272(3)
  027fef4  addic 6, 6, 8
  027fef8  lwz 8, -22064(8)
  027fefc  stfs 2, 276(3)
  027ff00  stw 8, 256(4)
  027ff04  addic 3, 3, 8
  027ff08  lfs 1, 0(7)
  027ff0c  addic 4, 4, 4
  027ff10  stfs 1, 0(26)
  027ff14  lfs 1, 4(7)
  027ff18  stfs 1, 4(26)
  027ff1c  lfs 1, 8(7)
  027ff20  stfs 1, 8(26)
  027ff24  lfs 1, 12(7)
  027ff28  addic 7, 7, 16
  027ff2c  stfs 1, 12(26)
  027ff30  addic 26, 26, 16
  027ff34  bdnz 0x27fee0
  027ff38  lis 29, 161
  027ff3c  addic 29, 29, 24396
  027ff40  addic 28, 1, 128
  027ff44  lfs 1, 16(31)
  027ff48  addic 4, 1, 112
  027ff4c  ori 3, 28, 0
  027ff50  stfs 1, 112(1)
  027ff54  bl 0x500b64
  027ff58  nop
  027ff5c  addic 3, 1, 192
  027ff60  lwz 6, 28(29)
  027ff64  ori 4, 28, 0
  027ff68  li 5, 0
  027ff6c  li 7, 9
  027ff70  bl 0x72280
  027ff74  nop
  027ff78  addic 30, 30, 1
  027ff7c  addic 31, 31, 4
  027ff80  cmpwi 30, 4
  027ff84  bt 0, 0x27ff40
  027ff88  ld 0, 496(1)
  027ff8c  mtlr 0
  027ff90  lfd 24, 416(1)
  027ff94  lfd 25, 424(1)
  027ff98  lfd 26, 432(1)
  027ff9c  lfd 27, 440(1)
  027ffa0  lfd 28, 448(1)
  027ffa4  lfd 29, 456(1)
  027ffa8  lfd 30, 464(1)
  027ffac  lfd 31, 472(1)
  027ffb0  ld 24, 352(1)
  027ffb4  ld 25, 360(1)
  027ffb8  ld 26, 368(1)
  027ffbc  ld 27, 376(1)
  027ffc0  ld 28, 384(1)
  027ffc4  ld 29, 392(1)
  027ffc8  ld 30, 400(1)
  027ffcc  ld 31, 408(1)
  027ffd0  addi 1, 1, 480
  027ffd4  blr

M1890_0027ffd8:   # 0x27ffd8, 0x14 bytes
  027ffd8  lis 3, 123
  027ffdc  lis 4, 1
  027ffe0  addic 3, 3, -21832
  027ffe4  stw 4, 72(3)
  027ffe8  blr
