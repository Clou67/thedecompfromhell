# game/update/moby291.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M291_0032f5e8:   # 0x32f5e8, 0x14 bytes
  032f5e8  lis 3, 128
  032f5ec  lis 4, 1
  032f5f0  addic 3, 3, 2172
  032f5f4  stw 4, 72(3)
  032f5f8  blr

M291_0032f620:   # 0x32f620, 0x2a8 bytes
  032f620  stdu 1, -560(1)
  032f624  mflr 0
  032f628  std 0, 576(1)
  032f62c  stfd 15, 424(1)
  032f630  stfd 16, 432(1)
  032f634  stfd 17, 440(1)
  032f638  stfd 18, 448(1)
  032f63c  stfd 19, 456(1)
  032f640  stfd 20, 464(1)
  032f644  stfd 21, 472(1)
  032f648  stfd 22, 480(1)
  032f64c  stfd 23, 488(1)
  032f650  stfd 24, 496(1)
  032f654  stfd 25, 504(1)
  032f658  stfd 26, 512(1)
  032f65c  stfd 27, 520(1)
  032f660  stfd 28, 528(1)
  032f664  stfd 29, 536(1)
  032f668  stfd 30, 544(1)
  032f66c  stfd 31, 552(1)
  032f670  std 24, 360(1)
  032f674  lis 5, 51
  032f678  li 24, 0
  032f67c  std 27, 384(1)
  032f680  addi 5, 5, -2560
  032f684  std 29, 400(1)
  032f688  std 28, 392(1)
  032f68c  ori 27, 24, 0
  032f690  addic 28, 4, 184
  032f694  std 30, 408(1)
  032f698  addic 29, 3, 192
  032f69c  ori 30, 3, 0
  032f6a0  std 31, 416(1)
  032f6a4  lfs 23, 0(5)
  032f6a8  ori 31, 4, 0
  032f6ac  lfs 24, 4(5)
  032f6b0  lfs 25, 8(5)
  032f6b4  lfs 26, 12(5)
  032f6b8  lfs 27, 16(5)
  032f6bc  lfs 29, 20(5)
  032f6c0  std 26, 376(1)
  032f6c4  std 25, 368(1)
  032f6c8  std 23, 352(1)
  032f6cc  std 22, 344(1)
  032f6d0  lfs 30, 24(5)
  032f6d4  lfs 31, 28(5)
  032f6d8  slwi 3, 24, 2
  032f6dc  addc 3, 3, 28
  032f6e0  clrldi 26, 3, 32
  032f6e4  lwz 26, 0(26)
  032f6e8  cmpwi 26, 0
  032f6ec  bt 2, 0x32f83c
  032f6f0  stw 27, 124(1)
  032f6f4  lwz 25, 120(26)
  032f6f8  ori 3, 24, 0
  032f6fc  bl 0x502730
  032f700  nop
  032f704  lfs 2, 16(31)
  032f708  fmadds 1, 1, 24, 25
  032f70c  lfs 4, 20(31)
  032f710  fsub 2, 23, 2
  032f714  lfs 3, 12(25)
  032f718  lis 3, 114
  032f71c  lfs 28, 124(1)
  032f720  fsel 5, 2, 31, 30
  032f724  lfs 2, -3064(3)
  032f728  fmadds 1, 1, 4, 5
  032f72c  fcmpu 0, 3, 1
  032f730  cror 6, 0, 2
  032f734  bt 6, 0x32f744
  032f738  fnmsubs 1, 2, 26, 3
  032f73c  stfs 1, 12(25)
  032f740  b 0x32f758
  032f744  fcmpu 0, 3, 1
  032f748  cror 6, 1, 2
  032f74c  bt 6, 0x32f758
  032f750  fmadds 1, 2, 26, 3
  032f754  stfs 1, 12(25)
  032f758  fmuls 1, 2, 27
  032f75c  addic 25, 1, 208
  032f760  addic 4, 26, 64
  032f764  ori 3, 25, 0
  032f768  stfs 1, 72(26)
  032f76c  bl 0x500ca4
  032f770  nop
  032f774  addic 23, 1, 272
  032f778  ori 4, 29, 0
  032f77c  ori 3, 23, 0
  032f780  bl 0x500f6c
  032f784  nop
  032f788  addic 22, 1, 144
  032f78c  ori 4, 23, 0
  032f790  ori 3, 22, 0
  032f794  ori 5, 25, 0
  032f798  bl 0x50162c
  032f79c  nop
  032f7a0  addic 3, 26, 192
  032f7a4  ori 4, 22, 0
  032f7a8  bl 0x500fa8
  032f7ac  nop
  032f7b0  lfs 1, 160(1)
  032f7b4  lfs 21, 192(1)
  032f7b8  addic 4, 24, 2
  032f7bc  fmuls 22, 1, 29
  032f7c0  addic 5, 1, 128
  032f7c4  lfs 1, 164(1)
  032f7c8  extsw 4, 4
  032f7cc  lfs 2, 168(1)
  032f7d0  ori 3, 30, 0
  032f7d4  fmuls 20, 1, 29
  032f7d8  lfs 19, 196(1)
  032f7dc  lfs 1, 172(1)
  032f7e0  fmuls 18, 2, 29
  032f7e4  lfs 17, 200(1)
  032f7e8  fmuls 16, 1, 29
  032f7ec  lfs 15, 204(1)
  032f7f0  bl 0xf1114
  032f7f4  nop
  032f7f8  fmadds 1, 21, 28, 22
  032f7fc  lfs 2, 128(1)
  032f800  fmadds 3, 19, 28, 20
  032f804  fmadds 4, 17, 28, 18
  032f808  ori 3, 26, 0
  032f80c  fmadds 5, 15, 28, 16
  032f810  fadds 1, 1, 2
  032f814  stfs 1, 16(26)
  032f818  lfs 1, 132(1)
  032f81c  fadds 1, 3, 1
  032f820  stfs 1, 20(26)
  032f824  lfs 1, 136(1)
  032f828  stfs 5, 28(26)
  032f82c  fadds 1, 4, 1
  032f830  stfs 1, 24(26)
  032f834  bl 0xf30a0
  032f838  nop
  032f83c  addic 24, 24, 1
  032f840  extsw 24, 24
  032f844  cmpwi 24, 2
  032f848  bt 0, 0x32f6d8
  032f84c  ld 0, 576(1)
  032f850  mtlr 0
  032f854  lfd 15, 424(1)
  032f858  lfd 16, 432(1)
  032f85c  lfd 17, 440(1)
  032f860  lfd 18, 448(1)
  032f864  lfd 19, 456(1)
  032f868  lfd 20, 464(1)
  032f86c  lfd 21, 472(1)
  032f870  lfd 22, 480(1)
  032f874  lfd 23, 488(1)
  032f878  lfd 24, 496(1)
  032f87c  lfd 25, 504(1)
  032f880  lfd 26, 512(1)
  032f884  lfd 27, 520(1)
  032f888  lfd 28, 528(1)
  032f88c  lfd 29, 536(1)
  032f890  lfd 30, 544(1)
  032f894  lfd 31, 552(1)
  032f898  ld 22, 344(1)
  032f89c  ld 23, 352(1)
  032f8a0  ld 24, 360(1)
  032f8a4  ld 25, 368(1)
  032f8a8  ld 26, 376(1)
  032f8ac  ld 27, 384(1)
  032f8b0  ld 28, 392(1)
  032f8b4  ld 29, 400(1)
  032f8b8  ld 30, 408(1)
  032f8bc  ld 31, 416(1)
  032f8c0  addi 1, 1, 560
  032f8c4  blr

UpdateMoby_291:   # 0x32f988, 0x1ac8 bytes
  032f988  stdu 1, -672(1)
  032f98c  mflr 0
  032f990  std 0, 688(1)
  032f994  stfd 16, 544(1)
  032f998  stfd 17, 552(1)
  032f99c  stfd 18, 560(1)
  032f9a0  stfd 19, 568(1)
  032f9a4  stfd 20, 576(1)
  032f9a8  stfd 21, 584(1)
  032f9ac  stfd 22, 592(1)
  032f9b0  stfd 23, 600(1)
  032f9b4  stfd 24, 608(1)
  032f9b8  stfd 25, 616(1)
  032f9bc  stfd 26, 624(1)
  032f9c0  stfd 27, 632(1)
  032f9c4  stfd 28, 640(1)
  032f9c8  stfd 29, 648(1)
  032f9cc  stfd 30, 656(1)
  032f9d0  stfd 31, 664(1)
  032f9d4  addi 0, 1, 448
  032f9d8  stvx 31, 0, 0
  032f9dc  std 31, 536(1)
  032f9e0  cmpwi 3, 0
  032f9e4  std 30, 528(1)
  032f9e8  std 29, 520(1)
  032f9ec  std 28, 512(1)
  032f9f0  std 27, 504(1)
  032f9f4  std 26, 496(1)
  032f9f8  std 25, 488(1)
  032f9fc  std 24, 480(1)
  032fa00  std 23, 472(1)
  032fa04  ori 31, 3, 0
  032fa08  bt 2, 0x3313d4
  032fa0c  lwz 30, 120(31)
  032fa10  cmpwi 30, 0
  032fa14  bt 2, 0x3313d4
  032fa18  lis 27, 151
  032fa1c  addic 27, 27, -25376
  032fa20  lwz 3, 5616(27)
  032fa24  cmpw 3, 31
  032fa28  bf 2, 0x32fa78
  032fa2c  lis 3, 51
  032fa30  vspltisw 2, -1
  032fa34  li 4, 5628
  032fa38  vspltisw 6, -1
  032fa3c  addi 3, 3, -1848
  032fa40  li 5, 4
  032fa44  vslw 2, 2, 2
  032fa48  <unknown>
  032fa4c  <unknown>
  032fa50  <unknown>
  032fa54  vspltw 4, 4, 0
  032fa58  li 3, 5640
  032fa5c  vmaddfp 2, 3, 4, 2
  032fa60  vspltw 3, 5, 0
  032fa64  vslw 4, 6, 6
  032fa68  vmaddfp 2, 2, 3, 4
  032fa6c  vctsxs 2, 2, 0
  032fa70  vspltw 2, 2, 0
  032fa74  stvewx 2, 3, 27
  032fa78  addic 28, 31, 16
  032fa7c  ori 3, 28, 0
  032fa80  bl 0x342d38
  032fa84  nop
  032fa88  lfs 31, 160(30)
  032fa8c  lbz 3, 32(31)
  032fa90  fadds 31, 1, 31
  032fa94  cmpwi 3, 7
  032fa98  bt 2, 0x32fc98
  032fa9c  cmpwi 3, 1
  032faa0  bt 2, 0x32fc98
  032faa4  cmpwi 3, 2
  032faa8  bt 2, 0x32fc98
  032faac  ori 3, 31, 0
  032fab0  lis 4, 3
  032fab4  li 5, 0
  032fab8  bl 0x10675c
  032fabc  nop
  032fac0  ori 29, 3, 0
  032fac4  cmpwi 29, 0
  032fac8  bt 2, 0x32fc98
  032facc  lbz 3, 32(31)
  032fad0  cmpwi 3, 4
  032fad4  bf 2, 0x32fc98
  032fad8  li 5, 90
  032fadc  ori 3, 31, 0
  032fae0  addic 4, 30, 192
  032fae4  stb 5, 199(30)
  032fae8  bl 0x10c808
  032faec  nop
  032faf0  lwz 3, 5628(27)
  032faf4  lwz 4, 44(29)
  032faf8  srawi 6, 3, 31
  032fafc  srawi 5, 4, 31
  032fb00  lfs 1, 5628(27)
  032fb04  srwi 8, 6, 1
  032fb08  lfs 2, 44(29)
  032fb0c  srwi 7, 5, 1
  032fb10  xor 3, 8, 3
  032fb14  xor 4, 7, 4
  032fb18  subc 3, 3, 6
  032fb1c  subc 4, 4, 5
  032fb20  cmpw 3, 4
  032fb24  bf 1, 0x32fbe4
  032fb28  fsubs 1, 1, 2
  032fb2c  lis 3, 51
  032fb30  addi 3, 3, -1848
  032fb34  stfs 1, 5628(27)
  032fb38  lfs 1, 8(3)
  032fb3c  lfs 2, 44(29)
  032fb40  lwz 3, 48(29)
  032fb44  fmuls 1, 2, 1
  032fb48  clrlwi 3, 3, 31
  032fb4c  cmpwi 3, 0
  032fb50  bt 2, 0x32fc90
  032fb54  addic 3, 1, 208
  032fb58  addic 4, 29, 16
  032fb5c  bl 0x5e7f98
  032fb60  nop
  032fb64  lwz 3, 216(1)
  032fb68  lis 5, 15897
  032fb6c  srawi 4, 3, 31
  032fb70  ori 5, 5, 39322
  032fb74  srwi 6, 4, 1
  032fb78  xor 3, 6, 3
  032fb7c  subc 3, 3, 4
  032fb80  cmpw 3, 5
  032fb84  bf 1, 0x32fb94
  032fb88  lis 3, 15897
  032fb8c  ori 3, 3, 39322
  032fb90  stw 3, 216(1)
  032fb94  lis 3, 51
  032fb98  addi 5, 3, -1848
  032fb9c  addic 3, 1, 208
  032fba0  ori 4, 3, 0
  032fba4  lfs 1, 12(5)
  032fba8  bl 0x5e8e80
  032fbac  nop
  032fbb0  lfs 1, 0(30)
  032fbb4  lfs 2, 208(1)
  032fbb8  fadds 1, 1, 2
  032fbbc  lfs 2, 4(30)
  032fbc0  lfs 3, 8(30)
  032fbc4  stfs 1, 0(30)
  032fbc8  lfs 1, 212(1)
  032fbcc  fadds 1, 2, 1
  032fbd0  stfs 1, 4(30)
  032fbd4  lfs 1, 216(1)
  032fbd8  fadds 1, 3, 1
  032fbdc  stfs 1, 8(30)
  032fbe0  b 0x32fc90
  032fbe4  lis 3, 51
  032fbe8  li 26, 0
  032fbec  addi 29, 3, -1848
  032fbf0  li 3, 7
  032fbf4  li 4, 180
  032fbf8  lfs 30, 16(29)
  032fbfc  stw 26, 5628(27)
  032fc00  stb 3, 32(31)
  032fc04  stw 4, 32(30)
  032fc08  li 3, 0
  032fc0c  lfs 2, 20(29)
  032fc10  li 4, 1
  032fc14  lfs 3, 136(27)
  032fc18  lwz 5, 8320(27)
  032fc1c  fadds 1, 3, 2
  032fc20  stfs 1, 136(27)
  032fc24  stw 26, 152(5)
  032fc28  bl 0xb72b0
  032fc2c  nop
  032fc30  li 6, -1
  032fc34  stw 26, 5616(27)
  032fc38  li 7, 1
  032fc3c  ori 3, 31, 0
  032fc40  fmr 1, 30
  032fc44  li 8, 10
  032fc48  fmr 2, 30
  032fc4c  sth 6, 5620(27)
  032fc50  ori 4, 30, 0
  032fc54  lfs 3, 24(29)
  032fc58  li 5, 0
  032fc5c  lfs 4, 28(29)
  032fc60  li 9, 3
  032fc64  lfs 5, 32(29)
  032fc68  li 10, 16
  032fc6c  lfs 6, 36(29)
  032fc70  lfs 7, 40(29)
  032fc74  std 6, 144(1)
  032fc78  std 7, 160(1)
  032fc7c  std 7, 168(1)
  032fc80  std 6, 176(1)
  032fc84  std 26, 184(1)
  032fc88  bl 0x10e030
  032fc8c  nop
  032fc90  li 3, 255
  032fc94  stb 3, 164(31)
  032fc98  ori 3, 31, 0
  032fc9c  addic 4, 30, 192
  032fca0  bl 0x10c9a0
  032fca4  nop
  032fca8  lbz 3, 32(31)
  032fcac  cmpwi 3, 7
  032fcb0  bt 2, 0x33053c
  032fcb4  cmpwi 3, 6
  032fcb8  bt 2, 0x330530
  032fcbc  cmpwi 3, 5
  032fcc0  bt 2, 0x3304e4
  032fcc4  cmpwi 3, 4
  032fcc8  bt 2, 0x33018c
  032fccc  cmpwi 3, 3
  032fcd0  bt 2, 0x3300d8
  032fcd4  cmpwi 3, 2
  032fcd8  bt 2, 0x32ffe8
  032fcdc  cmpwi 3, 1
  032fce0  bt 2, 0x32fee0
  032fce4  cmpwi 3, 0
  032fce8  bf 2, 0x3305c8
  032fcec  li 3, 1
  032fcf0  li 4, 0
  032fcf4  stb 3, 32(31)
  032fcf8  lwz 3, 44(30)
  032fcfc  stw 4, 16(30)
  032fd00  cmpwi 3, 0
  032fd04  lfs 1, 80(30)
  032fd08  lfs 2, 76(30)
  032fd0c  bf 2, 0x32fecc
  032fd10  lis 3, 51
  032fd14  lis 4, 114
  032fd18  addi 3, 3, -1848
  032fd1c  lis 5, 17076
  032fd20  lfs 1, 28(3)
  032fd24  lfs 3, -3064(4)
  032fd28  lis 4, 15235
  032fd2c  fmuls 1, 3, 1
  032fd30  ori 4, 4, 4719
  032fd34  stw 4, 52(30)
  032fd38  lis 4, 15872
  032fd3c  stfs 1, 48(30)
  032fd40  lfs 1, 44(3)
  032fd44  stw 4, 64(30)
  032fd48  fmuls 1, 3, 1
  032fd4c  lis 4, 16800
  032fd50  vspltisw 2, -1
  032fd54  lis 6, 114
  032fd58  li 7, -3056
  032fd5c  li 8, 144
  032fd60  vslw 2, 2, 2
  032fd64  stfs 1, 56(30)
  032fd68  lfs 1, 48(3)
  032fd6c  fmuls 1, 3, 1
  032fd70  li 9, 3
  032fd74  li 10, 100
  032fd78  vspltisw 3, -1
  032fd7c  lis 11, 16880
  032fd80  lis 12, 15820
  032fd84  stfs 1, 72(30)
  032fd88  lfs 2, 52(3)
  032fd8c  fmuls 2, 3, 2
  032fd90  vslw 3, 3, 3
  032fd94  stfs 2, 76(30)
  032fd98  lfs 1, 56(3)
  032fd9c  fmuls 1, 3, 1
  032fda0  stfs 1, 80(30)
  032fda4  lfs 4, 60(3)
  032fda8  stw 4, 88(30)
  032fdac  fmuls 4, 3, 4
  032fdb0  stw 5, 92(30)
  032fdb4  lis 4, 15477
  032fdb8  lis 5, 16000
  032fdbc  ori 4, 4, 49807
  032fdc0  stfs 4, 84(30)
  032fdc4  lfs 4, 64(3)
  032fdc8  fmuls 4, 3, 4
  032fdcc  stfs 4, 96(30)
  032fdd0  lfs 4, 68(3)
  032fdd4  fmuls 4, 3, 4
  032fdd8  stfs 4, 100(30)
  032fddc  lfs 4, 72(3)
  032fde0  lfs 5, 36(3)
  032fde4  fmadds 4, 3, 4, 5
  032fde8  stfs 4, 104(30)
  032fdec  stfs 4, 108(30)
  032fdf0  lfs 4, 76(3)
  032fdf4  fmadds 4, 3, 4, 5
  032fdf8  stfs 4, 112(30)
  032fdfc  lfs 4, 80(3)
  032fe00  fmuls 4, 3, 4
  032fe04  stfs 4, 116(30)
  032fe08  lfs 4, 0(3)
  032fe0c  fmuls 4, 3, 4
  032fe10  stfs 4, 120(30)
  032fe14  lfs 4, 84(3)
  032fe18  stw 4, 128(30)
  032fe1c  fmuls 4, 3, 4
  032fe20  stw 5, 132(30)
  032fe24  li 4, 96
  032fe28  lis 5, 114
  032fe2c  stfs 4, 124(30)
  032fe30  lfs 4, 88(3)
  032fe34  fmadds 4, 3, 4, 5
  032fe38  stfs 4, 136(30)
  032fe3c  lfs 4, 92(3)
  032fe40  lfs 5, -3048(6)
  032fe44  fmuls 4, 5, 4
  032fe48  li 6, 50
  032fe4c  stfs 4, 140(30)
  032fe50  <unknown>
  032fe54  <unknown>
  032fe58  vspltw 4, 4, 0
  032fe5c  li 4, 148
  032fe60  vmaddfp 2, 5, 4, 2
  032fe64  lis 5, 16672
  032fe68  lis 7, 15959
  032fe6c  ori 7, 7, 2621
  032fe70  vctsxs 2, 2, 0
  032fe74  vspltb 2, 2, 3
  032fe78  stvebx 2, 8, 30
  032fe7c  stb 6, 145(30)
  032fe80  stb 9, 146(30)
  032fe84  <unknown>
  032fe88  ori 6, 12, 52429
  032fe8c  vspltw 2, 2, 0
  032fe90  lis 8, 16128
  032fe94  lis 9, 17036
  032fe98  vmaddfp 2, 5, 2, 3
  032fe9c  vctsxs 2, 2, 0
  032fea0  vsplth 2, 2, 1
  032fea4  stvehx 2, 4, 30
  032fea8  stw 5, 152(30)
  032feac  stw 11, 156(30)
  032feb0  stw 7, 160(30)
  032feb4  stw 6, 164(30)
  032feb8  lfs 4, 104(3)
  032febc  stw 8, 176(30)
  032fec0  fmuls 3, 3, 4
  032fec4  stw 9, 180(30)
  032fec8  stfs 3, 168(30)
  032fecc  fsubs 1, 1, 2
  032fed0  li 3, 0
  032fed4  stw 3, 172(30)
  032fed8  stfs 1, 68(30)
  032fedc  b 0x3305c8
  032fee0  ori 3, 31, 0
  032fee4  lwz 4, 8320(27)
  032fee8  bl 0xf20f0
  032feec  nop
  032fef0  lis 3, 51
  032fef4  addi 3, 3, -1848
  032fef8  lfs 2, 84(3)
  032fefc  fcmpu 0, 1, 2
  032ff00  cror 6, 1, 2
  032ff04  bt 6, 0x32ffdc
  032ff08  ori 3, 31, 0
  032ff0c  li 4, 5
  032ff10  li 5, 0
  032ff14  li 6, 0
  032ff18  bl 0x10dc70
  032ff1c  nop
  032ff20  cmpwi 3, 0
  032ff24  bt 2, 0x32ffdc
  032ff28  lis 3, 161
  032ff2c  lwz 4, 8320(27)
  032ff30  addic 3, 3, 2368
  032ff34  lwz 3, 24(3)
  032ff38  cmpw 3, 4
  032ff3c  bf 2, 0x32ffdc
  032ff40  li 3, 2
  032ff44  li 4, 0
  032ff48  li 5, 100
  032ff4c  li 6, 50
  032ff50  stb 3, 32(31)
  032ff54  lhz 3, 166(31)
  032ff58  lis 8, 16672
  032ff5c  stw 31, 5616(27)
  032ff60  lis 7, 16448
  032ff64  sth 3, 5620(27)
  032ff68  li 9, 3
  032ff6c  stb 4, 5646(27)
  032ff70  lbz 3, 145(30)
  032ff74  stb 5, 5623(27)
  032ff78  stb 3, 5622(27)
  032ff7c  stb 6, 5624(27)
  032ff80  lis 5, 112
  032ff84  lfs 1, 152(30)
  032ff88  lis 6, 112
  032ff8c  stw 8, 5632(27)
  032ff90  addic 5, 5, 22176
  032ff94  stfs 1, 5628(27)
  032ff98  addic 6, 6, 22216
  032ff9c  stw 7, 5636(27)
  032ffa0  addic 8, 27, 5640
  032ffa4  lbz 3, 146(30)
  032ffa8  lis 7, 112
  032ffac  stb 9, 5626(27)
  032ffb0  stb 3, 5625(27)
  032ffb4  li 3, 16
  032ffb8  stb 9, 5627(27)
  032ffbc  stb 4, 5647(27)
  032ffc0  addic 7, 7, 22592
  032ffc4  lis 4, 0
  032ffc8  li 9, 200
  032ffcc  ori 4, 4, 65535
  032ffd0  bl 0xc8444
  032ffd4  nop
  032ffd8  sth 3, 5644(27)
  032ffdc  li 3, 0
  032ffe0  stw 3, 16(30)
  032ffe4  b 0x3305c8
  032ffe8  li 4, 1
  032ffec  li 3, 50
  032fff0  bl 0xb72b0
  032fff4  nop
  032fff8  lwz 4, 8320(27)
  032fffc  li 3, -1
  0330000  li 5, 0
  0330004  stw 3, 152(4)
  0330008  lwz 3, 184(30)
  033000c  stw 5, 16(30)
  0330010  cmpwi 3, 0
  0330014  bf 2, 0x330028
  0330018  ori 3, 31, 0
  033001c  bl 0x2b9870
  0330020  nop
  0330024  stw 3, 184(30)
  0330028  lwz 4, 188(30)
  033002c  cmpwi 4, 0
  0330030  bf 2, 0x33004c
  0330034  ori 3, 31, 0
  0330038  bl 0x2b9870
  033003c  nop
  0330040  ori 4, 3, 0
  0330044  lwz 3, 184(30)
  0330048  stw 4, 188(30)
  033004c  cmpwi 1, 4, 0
  0330050  cmpwi 3, 0
  0330054  cror 2, 2, 6
  0330058  bt 2, 0x330064
  033005c  li 3, 3
  0330060  stb 3, 32(31)
  0330064  lfs 1, 16(31)
  0330068  lis 3, 51
  033006c  lfs 3, 128(27)
  0330070  lfs 2, 20(31)
  0330074  lfs 4, 132(27)
  0330078  fsubs 1, 1, 3
  033007c  lfs 5, 24(31)
  0330080  addi 3, 3, -1848
  0330084  lfs 6, 136(27)
  0330088  fsubs 7, 2, 4
  033008c  fsubs 5, 5, 6
  0330090  lfs 30, 0(3)
  0330094  lfs 2, 152(27)
  0330098  fmadds 1, 1, 30, 3
  033009c  fmadds 3, 7, 30, 4
  03300a0  fmadds 4, 5, 30, 6
  03300a4  stfs 1, 128(27)
  03300a8  stfs 3, 132(27)
  03300ac  stfs 4, 136(27)
  03300b0  lfs 1, 72(31)
  03300b4  bl 0x5025e0
  03300b8  nop
  03300bc  lfs 3, 152(27)
  03300c0  fmuls 2, 1, 30
  03300c4  fmr 1, 3
  03300c8  bl 0x502578
  03300cc  nop
  03300d0  stfs 1, 152(27)
  03300d4  b 0x3305c8
  03300d8  lfs 29, 20(31)
  03300dc  lfs 1, 132(27)
  03300e0  lfs 30, 16(31)
  03300e4  fsubs 29, 29, 1
  03300e8  lfs 1, 128(27)
  03300ec  lfs 28, 24(31)
  03300f0  fsubs 30, 30, 1
  03300f4  lfs 1, 136(27)
  03300f8  fsubs 28, 28, 1
  03300fc  lfs 1, 72(31)
  0330100  lfs 3, 152(27)
  0330104  fmr 2, 3
  0330108  bl 0x5025e0
  033010c  nop
  0330110  fmuls 2, 29, 29
  0330114  lis 3, 51
  0330118  lfs 3, 128(27)
  033011c  addi 3, 3, -1848
  0330120  fmadds 2, 30, 30, 2
  0330124  fmadds 2, 28, 28, 2
  0330128  fsqrts 7, 2
  033012c  lfs 2, 0(3)
  0330130  lfs 4, 132(27)
  0330134  lfs 5, 136(27)
  0330138  lfs 6, 152(27)
  033013c  fcmpu 0, 7, 2
  0330140  cror 6, 1, 2
  0330144  bt 6, 0x33015c
  0330148  fcmpu 0, 1, 2
  033014c  cror 6, 1, 2
  0330150  bt 6, 0x33015c
  0330154  li 3, 4
  0330158  stb 3, 32(31)
  033015c  fmadds 3, 30, 2, 3
  0330160  fmadds 4, 29, 2, 4
  0330164  fmadds 5, 28, 2, 5
  0330168  fmuls 2, 1, 2
  033016c  fmr 1, 6
  0330170  stfs 3, 128(27)
  0330174  stfs 4, 132(27)
  0330178  stfs 5, 136(27)
  033017c  bl 0x502578
  0330180  nop
  0330184  stfs 1, 152(27)
  0330188  b 0x3305c8
  033018c  lwz 3, 8324(27)
  0330190  cmpwi 3, 0
  0330194  cmpwi 1, 3, 6
  0330198  bt 2, 0x3301a0
  033019c  bf 6, 0x3301b0
  03301a0  li 3, 50
  03301a4  li 4, 1
  03301a8  bl 0xb72b0
  03301ac  nop
  03301b0  lis 29, 150
  03301b4  addic 29, 29, 19008
  03301b8  lwz 3, 160(29)
  03301bc  rlwinm 3, 3, 0, 25, 25
  03301c0  cmpwi 3, 0
  03301c4  bt 2, 0x3301ec
  03301c8  lfs 1, 60(30)
  03301cc  lfs 2, 64(30)
  03301d0  lfs 3, 72(30)
  03301d4  fsubs 2, 2, 1
  03301d8  lfs 4, 68(30)
  03301dc  fmadds 1, 2, 3, 1
  03301e0  fsub 2, 1, 4
  03301e4  fsel 1, 2, 4, 1
  03301e8  b 0x330228
  03301ec  lfs 1, 136(30)
  03301f0  lis 3, 51
  03301f4  lfs 2, 0(30)
  03301f8  li 4, 0
  03301fc  lfs 3, 4(30)
  0330200  addi 3, 3, -1848
  0330204  fmuls 2, 2, 1
  0330208  lfs 4, 8(30)
  033020c  fmuls 3, 3, 1
  0330210  fmuls 4, 4, 1
  0330214  lfs 1, 16(3)
  0330218  stw 4, 16(30)
  033021c  stfs 2, 0(30)
  0330220  stfs 3, 4(30)
  0330224  stfs 4, 8(30)
  0330228  lfs 2, 76(30)
  033022c  stfs 1, 60(30)
  0330230  fadds 1, 2, 1
  0330234  lfs 2, 8(29)
  0330238  li 3, 168
  033023c  lfs 3, 20(30)
  0330240  lfs 4, 84(30)
  0330244  fmuls 1, 2, 1
  0330248  fneg 1, 1
  033024c  fsubs 1, 1, 3
  0330250  fmadds 1, 1, 4, 3
  0330254  stfs 1, 20(30)
  0330258  lwz 4, 160(29)
  033025c  and 3, 4, 3
  0330260  cmpwi 3, 0
  0330264  bt 2, 0x3305c8
  0330268  addic 3, 30, 147
  033026c  bl 0x5000b4
  0330270  nop
  0330274  cmpwi 3, 0
  0330278  lfs 1, 72(31)
  033027c  bt 2, 0x3305c8
  0330280  ori 3, 29, 0
  0330284  li 4, 144
  0330288  vspltisw 2, -8
  033028c  li 29, 0
  0330290  ori 26, 29, 0
  0330294  lwz 3, 160(3)
  0330298  <unknown>
  033029c  rlwinm 3, 3, 0, 26, 26
  03302a0  vsrw 2, 3, 2
  03302a4  cmpwi 3, 0
  03302a8  bt 2, 0x3302cc
  03302ac  lbz 3, 5622(27)
  03302b0  cmpwi 3, 0
  03302b4  bf 1, 0x3305c8
  03302b8  addic 3, 3, -1
  03302bc  vspltisw 3, 2
  03302c0  li 29, 2
  03302c4  stb 3, 5622(27)
  03302c8  vslw 2, 2, 3
  03302cc  lis 4, 114
  03302d0  fmr 2, 1
  03302d4  lis 5, 51
  03302d8  lfs 1, 156(30)
  03302dc  addic 3, 1, 224
  03302e0  vspltw 31, 2, 0
  03302e4  addi 25, 5, -1848
  03302e8  lfs 3, -3052(4)
  03302ec  fmuls 1, 1, 3
  03302f0  lfs 3, 16(25)
  03302f4  bl 0xfe610
  03302f8  nop
  03302fc  lfs 1, 224(1)
  0330300  lfs 2, 0(30)
  0330304  fadds 1, 1, 2
  0330308  lfs 2, 228(1)
  033030c  lfs 3, 232(1)
  0330310  addic 24, 1, 240
  0330314  ori 3, 31, 0
  0330318  li 4, 0
  033031c  ori 5, 24, 0
  0330320  stfs 1, 224(1)
  0330324  lfs 1, 4(30)
  0330328  fadds 1, 2, 1
  033032c  stfs 1, 228(1)
  0330330  lfs 1, 8(30)
  0330334  fadds 1, 3, 1
  0330338  stfs 1, 232(1)
  033033c  bl 0xf1114
  0330340  nop
  0330344  lfs 1, 240(1)
  0330348  lfs 2, 224(1)
  033034c  lfs 3, 244(1)
  0330350  lfs 4, 228(1)
  0330354  lfs 5, 248(1)
  0330358  fadds 1, 1, 2
  033035c  lfs 6, 232(1)
  0330360  fadds 3, 3, 4
  0330364  lfs 7, 252(1)
  0330368  fadds 5, 5, 6
  033036c  ori 3, 31, 0
  0330370  ori 9, 29, 0
  0330374  stfs 1, 240(1)
  0330378  stfs 3, 244(1)
  033037c  stfs 5, 248(1)
  0330380  lfs 8, 108(25)
  0330384  lfs 9, 112(25)
  0330388  lfs 10, 0(25)
  033038c  lfs 11, 20(25)
  0330390  fmr 30, 8
  0330394  stfs 1, 64(1)
  0330398  fmr 29, 9
  033039c  stfs 5, 72(1)
  03303a0  fmr 28, 10
  03303a4  stfs 2, 80(1)
  03303a8  fmr 27, 11
  03303ac  stfs 6, 88(1)
  03303b0  stfs 3, 68(1)
  03303b4  stfs 7, 76(1)
  03303b8  lfs 1, 236(1)
  03303bc  stfs 4, 84(1)
  03303c0  stfs 1, 92(1)
  03303c4  std 26, 112(1)
  03303c8  fmr 1, 30
  03303cc  ld 5, 64(1)
  03303d0  ld 6, 72(1)
  03303d4  ld 7, 80(1)
  03303d8  ld 8, 88(1)
  03303dc  fmr 2, 29
  03303e0  fmr 3, 28
  03303e4  fmr 4, 27
  03303e8  bl 0x3487b8
  03303ec  nop
  03303f0  ori 3, 31, 0
  03303f4  li 4, 1
  03303f8  ori 5, 24, 0
  03303fc  bl 0xf1114
  0330400  nop
  0330404  lfs 1, 240(1)
  0330408  ori 3, 31, 0
  033040c  lfs 2, 224(1)
  0330410  ori 9, 29, 0
  0330414  lfs 3, 248(1)
  0330418  lfs 4, 232(1)
  033041c  fadds 1, 1, 2
  0330420  lfs 5, 244(1)
  0330424  fadds 3, 3, 4
  0330428  lfs 6, 228(1)
  033042c  stfs 2, 80(1)
  0330430  fadds 2, 5, 6
  0330434  stfs 4, 88(1)
  0330438  lfs 4, 252(1)
  033043c  lfs 5, 236(1)
  0330440  stfs 4, 76(1)
  0330444  fmr 4, 27
  0330448  stfs 1, 64(1)
  033044c  stfs 3, 72(1)
  0330450  stfs 1, 240(1)
  0330454  stfs 3, 248(1)
  0330458  fmr 1, 30
  033045c  stfs 2, 244(1)
  0330460  fmr 3, 28
  0330464  stfs 2, 68(1)
  0330468  stfs 6, 84(1)
  033046c  stfs 5, 92(1)
  0330470  fmr 2, 29
  0330474  std 26, 112(1)
  0330478  ld 7, 80(1)
  033047c  ld 8, 88(1)
  0330480  ld 5, 64(1)
  0330484  ld 6, 72(1)
  0330488  bl 0x3487b8
  033048c  nop
  0330490  li 3, 0
  0330494  li 4, 0
  0330498  ori 5, 31, 0
  033049c  bl 0x15d12c
  03304a0  nop
  03304a4  vcfsx 2, 31, 0
  03304a8  li 3, 116
  03304ac  vspltisw 3, -1
  03304b0  lis 4, 114
  03304b4  li 5, -3056
  03304b8  <unknown>
  03304bc  vslw 3, 3, 3
  03304c0  vspltw 4, 4, 0
  03304c4  <unknown>
  03304c8  li 3, 147
  03304cc  vaddfp 2, 2, 4
  03304d0  vmaddfp 2, 5, 2, 3
  03304d4  vctsxs 2, 2, 0
  03304d8  vspltb 2, 2, 3
  03304dc  stvebx 2, 3, 30
  03304e0  b 0x3305c8
  03304e4  addic 3, 30, 32
  03304e8  bl 0x4fff60
  03304ec  nop
  03304f0  cmpwi 3, 0
  03304f4  bt 2, 0x330524
  03304f8  li 3, 1
  03304fc  li 4, 0
  0330500  stb 3, 32(31)
  0330504  lhz 3, 5644(27)
  0330508  extsh 3, 3
  033050c  bl 0xc8b28
  0330510  nop
  0330514  li 3, 0
  0330518  li 4, -1
  033051c  stw 3, 5616(27)
  0330520  sth 4, 5620(27)
  0330524  li 3, 0
  0330528  stw 3, 16(30)
  033052c  b 0x3305c8
  0330530  li 3, 0
  0330534  stw 3, 16(30)
  0330538  b 0x3305c8
  033053c  addic 3, 30, 32
  0330540  bl 0x4fff60
  0330544  nop
  0330548  cmpwi 3, 0
  033054c  bt 2, 0x330594
  0330550  li 3, 0
  0330554  li 4, 1
  0330558  bl 0xb72b0
  033055c  nop
  0330560  lhz 3, 5644(27)
  0330564  li 4, 0
  0330568  extsh 3, 3
  033056c  bl 0xc8b28
  0330570  nop
  0330574  li 4, 0
  0330578  li 5, -1
  033057c  ori 3, 31, 0
  0330580  stw 4, 5616(27)
  0330584  sth 5, 5620(27)
  0330588  bl 0xefb38
  033058c  nop
  0330590  b 0x3313d4
  0330594  li 3, 0
  0330598  lwz 4, 32(30)
  033059c  stw 3, 16(30)
  03305a0  extsw 3, 4
  03305a4  lfs 30, 160(30)
  03305a8  bl 0x502730
  03305ac  nop
  03305b0  lis 3, 51
  03305b4  addi 3, 3, -1848
  03305b8  lfs 2, 36(3)
  03305bc  fdivs 1, 2, 1
  03305c0  fsubs 1, 30, 1
  03305c4  stfs 1, 160(30)
  03305c8  lfs 1, 20(30)
  03305cc  lfs 2, 88(30)
  03305d0  lfs 30, 24(31)
  03305d4  fmuls 1, 1, 2
  03305d8  lfs 2, 28(30)
  03305dc  lfs 3, 96(30)
  03305e0  lfs 4, 8(30)
  03305e4  fadds 30, 30, 4
  03305e8  fneg 1, 1
  03305ec  stfs 1, 24(30)
  03305f0  lfs 5, 64(31)
  03305f4  fsubs 1, 1, 5
  03305f8  fmadds 1, 1, 3, 2
  03305fc  stfs 1, 28(30)
  0330600  lfs 2, 64(31)
  0330604  fadds 1, 2, 1
  0330608  stfs 1, 64(31)
  033060c  lfs 2, 104(30)
  0330610  fmuls 1, 1, 2
  0330614  stfs 1, 64(31)
  0330618  lfs 1, 16(30)
  033061c  lfs 2, 92(30)
  0330620  fmuls 1, 1, 2
  0330624  lfs 2, 40(30)
  0330628  lfs 3, 100(30)
  033062c  fneg 1, 1
  0330630  stfs 1, 36(30)
  0330634  lfs 4, 68(31)
  0330638  fsubs 1, 1, 4
  033063c  fmadds 1, 1, 3, 2
  0330640  stfs 1, 40(30)
  0330644  lfs 2, 68(31)
  0330648  fadds 2, 2, 1
  033064c  lfs 1, 72(31)
  0330650  stfs 2, 68(31)
  0330654  lfs 3, 108(30)
  0330658  fmuls 2, 2, 3
  033065c  stfs 2, 68(31)
  0330660  lfs 2, 20(30)
  0330664  bl 0x502578
  0330668  nop
  033066c  stfs 1, 72(31)
  0330670  bl 0x5e8078
  0330674  nop
  0330678  lfs 2, 72(31)
  033067c  stfs 1, 192(1)
  0330680  fmr 1, 2
  0330684  bl 0x5e8128
  0330688  nop
  033068c  lis 3, 51
  0330690  li 4, 0
  0330694  stfs 1, 196(1)
  0330698  addi 3, 3, -1848
  033069c  lfs 26, 16(3)
  03306a0  stw 4, 200(1)
  03306a4  lhz 3, 150(30)
  03306a8  extsh 4, 3
  03306ac  cmpwi 4, 0
  03306b0  bf 1, 0x330704
  03306b4  addic 3, 3, -1
  03306b8  sth 3, 150(30)
  03306bc  lfs 1, 72(31)
  03306c0  lfs 30, 0(30)
  03306c4  bl 0x5e8078
  03306c8  nop
  03306cc  lfs 2, 164(30)
  03306d0  fmadds 1, 2, 1, 30
  03306d4  lfs 30, 4(30)
  03306d8  stfs 1, 0(30)
  03306dc  lfs 1, 72(31)
  03306e0  bl 0x5e8128
  03306e4  nop
  03306e8  lfs 2, 164(30)
  03306ec  fmadds 1, 2, 1, 30
  03306f0  lfs 30, 8(30)
  03306f4  stfs 1, 4(30)
  03306f8  lfs 1, 24(31)
  03306fc  fadds 30, 1, 30
  0330700  b 0x330754
  0330704  fcmpu 0, 30, 31
  0330708  cror 6, 1, 2
  033070c  bt 6, 0x330754
  0330710  lfs 1, 72(31)
  0330714  lfs 30, 0(30)
  0330718  bl 0x5e8078
  033071c  nop
  0330720  lfs 2, 16(30)
  0330724  fmadds 1, 2, 1, 30
  0330728  lfs 30, 4(30)
  033072c  stfs 1, 0(30)
  0330730  lfs 1, 72(31)
  0330734  bl 0x5e8128
  0330738  nop
  033073c  lfs 2, 16(30)
  0330740  fmadds 1, 2, 1, 30
  0330744  lfs 30, 8(30)
  0330748  stfs 1, 4(30)
  033074c  lfs 1, 24(31)
  0330750  fadds 30, 1, 30
  0330754  lfs 1, 20(30)
  0330758  lfs 2, 112(30)
  033075c  lhz 3, 150(30)
  0330760  fmuls 1, 1, 2
  0330764  cmpwi 3, 0
  0330768  stfs 1, 20(30)
  033076c  bt 2, 0x330788
  0330770  ori 3, 30, 0
  0330774  lfs 1, 168(30)
  0330778  ori 4, 30, 0
  033077c  bl 0x5e7ed8
  0330780  nop
  0330784  b 0x33079c
  0330788  ori 3, 30, 0
  033078c  lfs 1, 116(30)
  0330790  ori 4, 30, 0
  0330794  bl 0x5e7ed8
  0330798  nop
  033079c  ori 3, 31, 0
  03307a0  li 4, 4
  03307a4  li 5, 0
  03307a8  li 6, 0
  03307ac  bl 0x10dc70
  03307b0  nop
  03307b4  fcmpu 0, 30, 31
  03307b8  ori 29, 3, 0
  03307bc  cror 6, 1, 2
  03307c0  bt 6, 0x330d60
  03307c4  lfs 3, 4(30)
  03307c8  lfs 4, 0(30)
  03307cc  fsubs 25, 31, 30
  03307d0  fmuls 1, 3, 3
  03307d4  lfs 2, 48(30)
  03307d8  lis 3, 51
  03307dc  addi 3, 3, -1848
  03307e0  fmadds 30, 4, 4, 1
  03307e4  lfs 1, 116(30)
  03307e8  lfs 5, 120(30)
  03307ec  lfs 6, 8(30)
  03307f0  fmuls 5, 25, 5
  03307f4  lfs 24, 36(3)
  03307f8  lfs 7, 180(30)
  03307fc  fsqrts 30, 30
  0330800  fmuls 7, 5, 7
  0330804  fmuls 2, 2, 30
  0330808  fdivs 8, 2, 1
  033080c  fsub 2, 24, 7
  0330810  fsel 2, 2, 7, 24
  0330814  fadds 7, 8, 24
  0330818  fmadds 29, 5, 7, 6
  033081c  stfs 29, 8(30)
  0330820  lfs 5, 196(1)
  0330824  lfs 6, 192(1)
  0330828  fmuls 3, 3, 5
  033082c  lfs 5, 200(1)
  0330830  fmadds 3, 4, 6, 3
  0330834  fmadds 29, 29, 5, 3
  0330838  fcmpu 0, 29, 26
  033083c  bt 1, 0x33084c
  0330840  fmr 29, 26
  0330844  fmr 28, 29
  0330848  b 0x330880
  033084c  fdivs 3, 29, 30
  0330850  lfs 4, 52(30)
  0330854  lfs 28, 176(30)
  0330858  fdivs 5, 24, 4
  033085c  fsubs 4, 24, 4
  0330860  fsubs 3, 3, 4
  0330864  fmuls 3, 3, 5
  0330868  fsub 4, 3, 28
  033086c  fsel 28, 4, 3, 28
  0330870  fcmpu 0, 28, 24
  0330874  cror 6, 0, 2
  0330878  bt 6, 0x330880
  033087c  fmr 28, 24
  0330880  fsubs 3, 24, 28
  0330884  ori 3, 30, 0
  0330888  fsubs 23, 24, 2
  033088c  ori 4, 30, 0
  0330890  fmadds 2, 3, 23, 28
  0330894  fmuls 1, 1, 2
  0330898  bl 0x5e7ed8
  033089c  nop
  03308a0  lfs 1, 72(31)
  03308a4  bl 0x5e8078
  03308a8  nop
  03308ac  lfs 2, 72(31)
  03308b0  fmr 28, 1
  03308b4  fmr 1, 2
  03308b8  bl 0x5e8128
  03308bc  nop
  03308c0  lis 3, 51
  03308c4  fmr 27, 1
  03308c8  lfs 1, 72(31)
  03308cc  addi 26, 3, -1848
  03308d0  lfs 22, 120(26)
  03308d4  fmr 2, 22
  03308d8  bl 0x502578
  03308dc  nop
  03308e0  bl 0x5e8078
  03308e4  nop
  03308e8  lfs 3, 72(31)
  03308ec  fmr 2, 22
  03308f0  stfs 1, 288(1)
  03308f4  fmr 1, 3
  03308f8  bl 0x502578
  03308fc  nop
  0330900  bl 0x5e8128
  0330904  nop
  0330908  li 3, 0
  033090c  stfs 1, 292(1)
  0330910  stw 3, 296(1)
  0330914  lfs 1, 104(26)
  0330918  lfs 2, 0(30)
  033091c  fmuls 2, 2, 1
  0330920  stfs 2, 272(1)
  0330924  lfs 2, 4(30)
  0330928  fmuls 2, 2, 1
  033092c  stfs 2, 276(1)
  0330930  lfs 2, 8(30)
  0330934  fmuls 1, 2, 1
  0330938  stfs 1, 280(1)
  033093c  lfs 1, 12(30)
  0330940  stfs 1, 284(1)
  0330944  lfs 1, 124(26)
  0330948  lfs 2, 20(26)
  033094c  bl 0xfcbe8
  0330950  nop
  0330954  lfs 2, 288(1)
  0330958  lfs 3, 292(1)
  033095c  lfs 4, 296(1)
  0330960  lfs 5, 16(31)
  0330964  lfs 6, 20(31)
  0330968  fmadds 5, 2, 1, 5
  033096c  lfs 2, 24(31)
  0330970  fmadds 3, 3, 1, 6
  0330974  fmadds 4, 4, 1, 2
  0330978  fmr 1, 26
  033097c  lfs 6, 28(31)
  0330980  fmr 2, 24
  0330984  stfs 6, 268(1)
  0330988  stfs 5, 256(1)
  033098c  stfs 3, 260(1)
  0330990  stfs 4, 264(1)
  0330994  bl 0xfcbe8
  0330998  nop
  033099c  lfs 2, 256(1)
  03309a0  lfs 3, 260(1)
  03309a4  addic 25, 1, 256
  03309a8  fmadds 2, 28, 1, 2
  03309ac  addic 24, 1, 272
  03309b0  fmadds 1, 27, 1, 3
  03309b4  ori 3, 25, 0
  03309b8  ori 4, 24, 0
  03309bc  stfs 2, 256(1)
  03309c0  stfs 1, 260(1)
  03309c4  lfs 21, 84(26)
  03309c8  lfs 22, 128(26)
  03309cc  fmr 1, 21
  03309d0  fmr 2, 22
  03309d4  bl 0x12bd28
  03309d8  nop
  03309dc  lfs 1, 116(26)
  03309e0  lfs 3, 0(30)
  03309e4  fmr 2, 26
  03309e8  fmuls 3, 3, 1
  03309ec  stfs 3, 272(1)
  03309f0  lfs 3, 4(30)
  03309f4  fmuls 3, 3, 1
  03309f8  stfs 3, 276(1)
  03309fc  lfs 3, 8(30)
  0330a00  fmuls 1, 3, 1
  0330a04  stfs 1, 280(1)
  0330a08  lfs 1, 12(30)
  0330a0c  stfs 1, 284(1)
  0330a10  lfs 1, 132(26)
  0330a14  bl 0xfcbe8
  0330a18  nop
  0330a1c  lfs 2, 272(1)
  0330a20  lfs 3, 276(1)
  0330a24  fmadds 2, 28, 1, 2
  0330a28  fmadds 1, 27, 1, 3
  0330a2c  stfs 2, 272(1)
  0330a30  stfs 1, 276(1)
  0330a34  lfs 1, 136(26)
  0330a38  lfs 2, 140(26)
  0330a3c  bl 0xfcbe8
  0330a40  nop
  0330a44  lfs 2, 288(1)
  0330a48  lfs 3, 292(1)
  0330a4c  ori 3, 25, 0
  0330a50  lfs 4, 296(1)
  0330a54  ori 4, 24, 0
  0330a58  lfs 5, 16(31)
  0330a5c  lfs 6, 20(31)
  0330a60  fmadds 5, 2, 1, 5
  0330a64  lfs 2, 24(31)
  0330a68  fmadds 3, 3, 1, 6
  0330a6c  fmadds 4, 4, 1, 2
  0330a70  lfs 2, 28(31)
  0330a74  fmr 1, 21
  0330a78  stfs 2, 268(1)
  0330a7c  fmr 2, 22
  0330a80  stfs 5, 256(1)
  0330a84  stfs 3, 260(1)
  0330a88  stfs 4, 264(1)
  0330a8c  bl 0x12bd28
  0330a90  nop
  0330a94  fcmpu 0, 25, 26
  0330a98  cror 6, 0, 2
  0330a9c  bt 6, 0x330cf4
  0330aa0  lis 3, 51
  0330aa4  addi 26, 3, -1848
  0330aa8  lfs 3, 144(26)
  0330aac  lfs 1, 148(26)
  0330ab0  fmadds 30, 25, 3, 30
  0330ab4  lfs 2, 152(26)
  0330ab8  bl 0xfcbe8
  0330abc  nop
  0330ac0  addic 3, 1, 288
  0330ac4  fadds 1, 30, 1
  0330ac8  ori 4, 3, 0
  0330acc  bl 0x5e7f98
  0330ad0  nop
  0330ad4  lfs 30, 288(1)
  0330ad8  lfs 25, 292(1)
  0330adc  lfs 21, 296(1)
  0330ae0  lfs 1, 16(31)
  0330ae4  lfs 2, 20(31)
  0330ae8  lfs 3, 24(31)
  0330aec  fadds 4, 1, 30
  0330af0  fadds 2, 2, 25
  0330af4  lfs 20, 48(26)
  0330af8  fadds 3, 3, 21
  0330afc  lfs 5, 28(31)
  0330b00  fmr 1, 26
  0330b04  stfs 5, 268(1)
  0330b08  stfs 4, 256(1)
  0330b0c  stfs 2, 260(1)
  0330b10  stfs 3, 264(1)
  0330b14  lfs 19, 156(26)
  0330b18  fmr 2, 19
  0330b1c  bl 0xfcbe8
  0330b20  nop
  0330b24  lfs 2, 256(1)
  0330b28  lfs 3, 260(1)
  0330b2c  fmadds 2, 28, 1, 2
  0330b30  fmadds 1, 27, 1, 3
  0330b34  stfs 31, 264(1)
  0330b38  addic 25, 1, 304
  0330b3c  ori 3, 25, 0
  0330b40  stfs 2, 256(1)
  0330b44  stfs 1, 260(1)
  0330b48  lfs 18, 160(26)
  0330b4c  lfs 2, 0(30)
  0330b50  fmuls 1, 2, 18
  0330b54  stfs 1, 272(1)
  0330b58  lfs 2, 4(30)
  0330b5c  fmadds 1, 30, 20, 1
  0330b60  fmuls 2, 2, 18
  0330b64  stfs 2, 276(1)
  0330b68  lfs 3, 8(30)
  0330b6c  fmadds 2, 25, 20, 2
  0330b70  fmuls 3, 3, 18
  0330b74  fmadds 4, 21, 20, 3
  0330b78  stfs 3, 280(1)
  0330b7c  lfs 3, 12(30)
  0330b80  stfs 1, 272(1)
  0330b84  stfs 3, 284(1)
  0330b88  stfs 2, 276(1)
  0330b8c  stfs 4, 280(1)
  0330b90  lfs 17, 44(26)
  0330b94  fmr 1, 17
  0330b98  bl 0xfe8c8
  0330b9c  nop
  0330ba0  lfs 1, 272(1)
  0330ba4  addic 24, 1, 256
  0330ba8  lfs 2, 304(1)
  0330bac  addic 23, 1, 272
  0330bb0  lfs 3, 276(1)
  0330bb4  ori 3, 24, 0
  0330bb8  fadds 1, 1, 2
  0330bbc  ori 4, 23, 0
  0330bc0  lfs 2, 308(1)
  0330bc4  lfs 4, 280(1)
  0330bc8  fadds 2, 3, 2
  0330bcc  lfs 3, 312(1)
  0330bd0  fadds 3, 4, 3
  0330bd4  stfs 1, 272(1)
  0330bd8  stfs 2, 276(1)
  0330bdc  fmr 2, 22
  0330be0  stfs 3, 280(1)
  0330be4  lfs 16, 108(26)
  0330be8  fmr 1, 16
  0330bec  bl 0x12bd28
  0330bf0  nop
  0330bf4  lfs 1, 16(31)
  0330bf8  lfs 2, 20(31)
  0330bfc  lfs 3, 24(31)
  0330c00  lfs 4, 288(1)
  0330c04  lfs 5, 292(1)
  0330c08  fsubs 4, 1, 4
  0330c0c  lfs 1, 296(1)
  0330c10  fsubs 5, 2, 5
  0330c14  fsubs 3, 3, 1
  0330c18  fmr 1, 26
  0330c1c  lfs 2, 28(31)
  0330c20  stfs 2, 268(1)
  0330c24  fmr 2, 19
  0330c28  stfs 4, 256(1)
  0330c2c  stfs 5, 260(1)
  0330c30  stfs 3, 264(1)
  0330c34  bl 0xfcbe8
  0330c38  nop
  0330c3c  lfs 2, 256(1)
  0330c40  lfs 3, 260(1)
  0330c44  fmadds 2, 28, 1, 2
  0330c48  fmadds 1, 27, 1, 3
  0330c4c  stfs 31, 264(1)
  0330c50  ori 3, 25, 0
  0330c54  stfs 2, 256(1)
  0330c58  stfs 1, 260(1)
  0330c5c  lfs 1, 0(30)
  0330c60  fmuls 2, 1, 18
  0330c64  fmr 1, 17
  0330c68  stfs 2, 272(1)
  0330c6c  lfs 3, 4(30)
  0330c70  fnmsubs 2, 30, 20, 2
  0330c74  fmuls 3, 3, 18
  0330c78  stfs 3, 276(1)
  0330c7c  lfs 4, 8(30)
  0330c80  fnmsubs 3, 25, 20, 3
  0330c84  fmuls 4, 4, 18
  0330c88  fnmsubs 5, 21, 20, 4
  0330c8c  stfs 4, 280(1)
  0330c90  lfs 4, 12(30)
  0330c94  stfs 2, 272(1)
  0330c98  stfs 4, 284(1)
  0330c9c  stfs 3, 276(1)
  0330ca0  stfs 5, 280(1)
  0330ca4  bl 0xfe8c8
  0330ca8  nop
  0330cac  lfs 1, 272(1)
  0330cb0  lfs 2, 304(1)
  0330cb4  ori 3, 24, 0
  0330cb8  lfs 3, 276(1)
  0330cbc  ori 4, 23, 0
  0330cc0  fadds 4, 1, 2
  0330cc4  lfs 1, 308(1)
  0330cc8  lfs 2, 280(1)
  0330ccc  fadds 3, 3, 1
  0330cd0  lfs 1, 312(1)
  0330cd4  fadds 5, 2, 1
  0330cd8  fmr 1, 16
  0330cdc  fmr 2, 22
  0330ce0  stfs 4, 272(1)
  0330ce4  stfs 3, 276(1)
  0330ce8  stfs 5, 280(1)
  0330cec  bl 0x12bd28
  0330cf0  nop
  0330cf4  lfs 2, 124(30)
  0330cf8  li 5, 0
  0330cfc  lfs 31, 8(30)
  0330d00  fsubs 3, 24, 2
  0330d04  addic 3, 1, 192
  0330d08  fmr 1, 29
  0330d0c  ori 4, 3, 0
  0330d10  stw 5, 8(30)
  0330d14  fmadds 30, 3, 23, 2
  0330d18  bl 0x5e7f98
  0330d1c  nop
  0330d20  lfs 1, 0(30)
  0330d24  lfs 2, 192(1)
  0330d28  lfs 3, 4(30)
  0330d2c  fsubs 1, 1, 2
  0330d30  lfs 4, 196(1)
  0330d34  fsubs 3, 3, 4
  0330d38  fmadds 1, 30, 1, 2
  0330d3c  stfs 1, 0(30)
  0330d40  lfs 1, 196(1)
  0330d44  fmadds 1, 30, 3, 1
  0330d48  stfs 1, 4(30)
  0330d4c  lfs 1, 200(1)
  0330d50  stfs 1, 8(30)
  0330d54  lfs 1, 204(1)
  0330d58  stfs 31, 8(30)
  0330d5c  stfs 1, 12(30)
  0330d60  cmpwi 29, 0
  0330d64  bt 2, 0x3310ec
  0330d68  lis 29, 161
  0330d6c  addic 29, 29, 2368
  0330d70  lwz 3, 24(29)
  0330d74  cmpwi 3, 0
  0330d78  bt 2, 0x330d88
  0330d7c  lhz 4, 166(3)
  0330d80  cmpwi 4, 204
  0330d84  bt 2, 0x330e10
  0330d88  lfs 1, 48(29)
  0330d8c  addic 3, 1, 320
  0330d90  lfs 2, 16(31)
  0330d94  lfs 3, 52(29)
  0330d98  fsubs 1, 1, 2
  0330d9c  ori 4, 3, 0
  0330da0  lfs 2, 20(31)
  0330da4  lfs 4, 56(29)
  0330da8  fsubs 2, 3, 2
  0330dac  lfs 3, 24(31)
  0330db0  fsubs 3, 4, 3
  0330db4  lfs 4, 60(29)
  0330db8  stfs 4, 332(1)
  0330dbc  stfs 1, 320(1)
  0330dc0  stfs 2, 324(1)
  0330dc4  stfs 3, 328(1)
  0330dc8  lfs 1, 128(30)
  0330dcc  bl 0x5e7f98
  0330dd0  nop
  0330dd4  lfs 1, 48(29)
  0330dd8  lfs 2, 320(1)
  0330ddc  fadds 1, 1, 2
  0330de0  lfs 2, 324(1)
  0330de4  lfs 3, 328(1)
  0330de8  lwz 3, 24(29)
  0330dec  stfs 1, 16(31)
  0330df0  lfs 1, 52(29)
  0330df4  fadds 1, 1, 2
  0330df8  stfs 1, 20(31)
  0330dfc  lfs 1, 56(29)
  0330e00  fadds 1, 1, 3
  0330e04  stfs 1, 24(31)
  0330e08  lfs 1, 60(29)
  0330e0c  stfs 1, 28(31)
  0330e10  cmpwi 3, 0
  0330e14  bt 2, 0x330e24
  0330e18  lhz 3, 166(3)
  0330e1c  cmpwi 3, 424
  0330e20  bf 2, 0x3310a8
  0330e24  lfs 1, 32(29)
  0330e28  lfs 2, 16(31)
  0330e2c  lfs 3, 36(29)
  0330e30  lfs 4, 20(31)
  0330e34  fsubs 1, 1, 2
  0330e38  fsubs 2, 3, 4
  0330e3c  bl 0x5e8338
  0330e40  nop
  0330e44  lfs 2, 72(31)
  0330e48  bl 0x5025e0
  0330e4c  nop
  0330e50  lis 3, 51
  0330e54  addi 3, 3, -1848
  0330e58  lfs 2, 164(3)
  0330e5c  lfs 3, 36(3)
  0330e60  fmuls 1, 1, 2
  0330e64  lfs 4, 112(3)
  0330e68  lwz 3, 20(30)
  0330e6c  lfs 2, 20(30)
  0330e70  cmpwi 3, 0
  0330e74  fsub 5, 26, 1
  0330e78  fsel 4, 5, 4, 3
  0330e7c  fsubs 1, 4, 1
  0330e80  bf 0, 0x330e8c
  0330e84  fcmpu 0, 1, 26
  0330e88  bt 1, 0x330e9c
  0330e8c  cmpwi 3, 0
  0330e90  fcmpu 1, 1, 26
  0330e94  bf 1, 0x330eac
  0330e98  bf 4, 0x330eac
  0330e9c  lis 3, 51
  0330ea0  addi 3, 3, -1848
  0330ea4  lfs 4, 0(3)
  0330ea8  fmuls 1, 1, 4
  0330eac  lis 3, 51
  0330eb0  addi 3, 3, -1848
  0330eb4  lfs 4, 48(3)
  0330eb8  fnmsubs 1, 1, 4, 2
  0330ebc  stfs 1, 20(30)
  0330ec0  lwz 3, 24(29)
  0330ec4  addic 29, 29, 64
  0330ec8  cmpwi 3, 0
  0330ecc  bt 2, 0x330edc
  0330ed0  lhz 3, 166(3)
  0330ed4  cmpwi 3, 424
  0330ed8  bt 2, 0x330f1c
  0330edc  ori 3, 30, 0
  0330ee0  ori 4, 30, 0
  0330ee4  ori 5, 29, 0
  0330ee8  bl 0x500608
  0330eec  nop
  0330ef0  lfs 1, 132(30)
  0330ef4  lfs 2, 0(30)
  0330ef8  lfs 3, 4(30)
  0330efc  fmuls 2, 2, 1
  0330f00  lfs 4, 8(30)
  0330f04  fmuls 3, 3, 1
  0330f08  fmuls 1, 4, 1
  0330f0c  stfs 2, 0(30)
  0330f10  stfs 3, 4(30)
  0330f14  stfs 1, 8(30)
  0330f18  b 0x3310ec
  0330f1c  addic 26, 1, 384
  0330f20  fmr 1, 3
  0330f24  ori 4, 29, 0
  0330f28  ori 3, 26, 0
  0330f2c  bl 0x5e7f98
  0330f30  nop
  0330f34  lfs 1, 16(31)
  0330f38  lfs 2, 384(1)
  0330f3c  addic 29, 1, 368
  0330f40  lfs 3, 20(31)
  0330f44  ori 3, 28, 0
  0330f48  fadds 1, 1, 2
  0330f4c  ori 4, 29, 0
  0330f50  lfs 2, 388(1)
  0330f54  lfs 4, 24(31)
  0330f58  fadds 2, 3, 2
  0330f5c  lfs 3, 392(1)
  0330f60  fadds 3, 4, 3
  0330f64  lfs 4, 28(31)
  0330f68  stfs 4, 380(1)
  0330f6c  stfs 1, 368(1)
  0330f70  stfs 2, 372(1)
  0330f74  stfs 3, 376(1)
  0330f78  bl 0x65468
  0330f7c  nop
  0330f80  lfs 1, 16(31)
  0330f84  lfs 2, 0(30)
  0330f88  fadds 1, 1, 2
  0330f8c  lfs 2, 20(31)
  0330f90  lfs 3, 24(31)
  0330f94  lfs 4, 28(31)
  0330f98  ori 3, 28, 0
  0330f9c  ori 4, 29, 0
  0330fa0  stfs 1, 368(1)
  0330fa4  lfs 1, 4(30)
  0330fa8  fadds 1, 2, 1
  0330fac  stfs 1, 372(1)
  0330fb0  lfs 1, 8(30)
  0330fb4  stfs 4, 380(1)
  0330fb8  fadds 1, 3, 1
  0330fbc  stfs 1, 376(1)
  0330fc0  bl 0x65468
  0330fc4  nop
  0330fc8  addic 25, 1, 336
  0330fcc  ori 4, 30, 0
  0330fd0  ori 3, 25, 0
  0330fd4  ori 5, 26, 0
  0330fd8  bl 0x5e8f4c
  0330fdc  nop
  0330fe0  lfs 1, 16(31)
  0330fe4  ori 3, 28, 0
  0330fe8  lfs 2, 336(1)
  0330fec  ori 4, 29, 0
  0330ff0  lfs 3, 20(31)
  0330ff4  fadds 1, 1, 2
  0330ff8  lfs 2, 340(1)
  0330ffc  lfs 4, 24(31)
  0331000  fadds 2, 3, 2
  0331004  lfs 3, 344(1)
  0331008  fadds 3, 4, 3
  033100c  lfs 4, 28(31)
  0331010  stfs 4, 380(1)
  0331014  stfs 1, 368(1)
  0331018  stfs 2, 372(1)
  033101c  stfs 3, 376(1)
  0331020  bl 0x65468
  0331024  nop
  0331028  addic 3, 1, 352
  033102c  ori 4, 26, 0
  0331030  ori 5, 25, 0
  0331034  bl 0x5e8f4c
  0331038  nop
  033103c  lfs 1, 352(1)
  0331040  stfs 1, 0(30)
  0331044  lfs 1, 356(1)
  0331048  ori 3, 28, 0
  033104c  stfs 1, 4(30)
  0331050  lfs 1, 360(1)
  0331054  ori 4, 29, 0
  0331058  stfs 1, 8(30)
  033105c  lfs 1, 364(1)
  0331060  stfs 1, 12(30)
  0331064  lfs 1, 16(31)
  0331068  lfs 2, 352(1)
  033106c  lfs 3, 20(31)
  0331070  fadds 1, 1, 2
  0331074  lfs 2, 356(1)
  0331078  lfs 4, 24(31)
  033107c  fadds 2, 3, 2
  0331080  lfs 3, 360(1)
  0331084  fadds 3, 4, 3
  0331088  lfs 4, 28(31)
  033108c  stfs 4, 380(1)
  0331090  stfs 1, 368(1)
  0331094  stfs 2, 372(1)
  0331098  stfs 3, 376(1)
  033109c  bl 0x65468
  03310a0  nop
  03310a4  b 0x3310ec
  03310a8  extsh 3, 3
  03310ac  cmpwi 3, 204
  03310b0  cmpwi 1, 3, 329
  03310b4  bf 1, 0x3310ec
  03310b8  bf 6, 0x3310ec
  03310bc  lis 3, 51
  03310c0  lfs 1, 0(30)
  03310c4  addi 3, 3, -1848
  03310c8  lfs 2, 160(3)
  03310cc  lfs 3, 4(30)
  03310d0  lfs 4, 8(30)
  03310d4  fmuls 1, 1, 2
  03310d8  fmuls 3, 3, 2
  03310dc  fmuls 2, 4, 2
  03310e0  stfs 1, 0(30)
  03310e4  stfs 3, 4(30)
  03310e8  stfs 2, 8(30)
  03310ec  lfs 1, 8(30)
  03310f0  lfs 2, 140(30)
  03310f4  lfs 3, 0(30)
  03310f8  fsubs 1, 1, 2
  03310fc  stfs 1, 8(30)
  0331100  lfs 1, 16(31)
  0331104  fadds 3, 1, 3
  0331108  lfs 1, 20(31)
  033110c  lfs 2, 24(31)
  0331110  lbz 3, 32(31)
  0331114  cmpwi 3, 4
  0331118  stfs 3, 16(31)
  033111c  lfs 4, 4(30)
  0331120  fadds 1, 1, 4
  0331124  stfs 1, 20(31)
  0331128  lfs 1, 8(30)
  033112c  fadds 1, 2, 1
  0331130  stfs 1, 24(31)
  0331134  bf 2, 0x3311c4
  0331138  lfs 1, 4(30)
  033113c  lfs 2, 0(30)
  0331140  fmuls 1, 1, 1
  0331144  lis 3, 51
  0331148  addi 5, 3, -1848
  033114c  addic 29, 1, 400
  0331150  lis 4, 101
  0331154  ori 3, 29, 0
  0331158  addic 4, 4, 24964
  033115c  fmadds 1, 2, 2, 1
  0331160  fsqrts 1, 1
  0331164  stfs 1, 356(27)
  0331168  lfs 2, 168(5)
  033116c  fmuls 1, 1, 2
  0331170  stfd 1, 64(1)
  0331174  ld 5, 64(1)
  0331178  bl 0x5cd2a8
  033117c  nop
  0331180  lis 5, -32768
  0331184  li 3, 281
  0331188  li 4, 21
  033118c  ori 6, 29, 0
  0331190  bl 0x60ac0
  0331194  nop
  0331198  lis 5, -32528
  033119c  li 3, 280
  03311a0  li 4, 20
  03311a4  ori 5, 5, 61680
  03311a8  ori 6, 29, 0
  03311ac  bl 0x60ac0
  03311b0  nop
  03311b4  ori 3, 31, 0
  03311b8  ori 4, 30, 0
  03311bc  bl 0x32f620
  03311c0  lfs 3, 16(31)
  03311c4  lis 3, 132
  03311c8  fmr 2, 3
  03311cc  lwz 3, -16892(3)
  03311d0  cmpwi 3, 0
  03311d4  bt 2, 0x3312c0
  03311d8  lis 3, 150
  03311dc  fmr 2, 3
  03311e0  lwz 3, -6680(3)
  03311e4  cmpwi 3, 32
  03311e8  bf 0, 0x3312c0
  03311ec  lis 4, 150
  03311f0  slwi 3, 3, 5
  03311f4  addic 30, 4, -6672
  03311f8  addc 3, 30, 3
  03311fc  clrldi 4, 3, 32
  0331200  ori 3, 28, 0
  0331204  stfs 3, 0(4)
  0331208  lfs 1, 20(31)
  033120c  stfs 1, 4(4)
  0331210  lfs 1, 24(31)
  0331214  stfs 1, 8(4)
  0331218  lfs 1, 28(31)
  033121c  stfs 1, 12(4)
  0331220  bl 0x342d38
  0331224  nop
  0331228  lis 29, 150
  033122c  fmr 31, 1
  0331230  ori 3, 28, 0
  0331234  lwz 4, -6680(29)
  0331238  slwi 4, 4, 5
  033123c  addc 4, 30, 4
  0331240  addic 4, 4, 16
  0331244  clrldi 4, 4, 32
  0331248  bl 0x342d40
  033124c  nop
  0331250  lis 3, 51
  0331254  lwz 4, -6680(29)
  0331258  li 6, 0
  033125c  addi 3, 3, -1848
  0331260  slwi 5, 4, 5
  0331264  extsw 5, 5
  0331268  lfs 1, 172(3)
  033126c  addc 5, 30, 5
  0331270  fadds 1, 31, 1
  0331274  stw 6, 28(5)
  0331278  stfs 1, 8(5)
  033127c  lfs 2, 24(31)
  0331280  fsubs 1, 2, 1
  0331284  lfs 2, 176(3)
  0331288  lfs 3, 8(3)
  033128c  lfs 4, 108(3)
  0331290  lfs 5, 180(3)
  0331294  addic 3, 4, 1
  0331298  fabs 1, 1
  033129c  stw 3, -6680(29)
  03312a0  fsubs 1, 2, 1
  03312a4  fmuls 1, 1, 3
  03312a8  fsub 2, 1, 4
  03312ac  fsel 1, 2, 1, 4
  03312b0  fmuls 1, 1, 5
  03312b4  stfs 1, 12(5)
  03312b8  lfs 3, 16(31)
  03312bc  fmr 2, 3
  03312c0  lis 3, 51
  03312c4  addi 4, 3, -1848
  03312c8  lis 3, 16544
  03312cc  lfs 1, 184(4)
  03312d0  fcmpu 0, 2, 1
  03312d4  cror 6, 1, 2
  03312d8  bt 6, 0x3312e8
  03312dc  fmr 3, 1
  03312e0  stw 3, 16(31)
  03312e4  fmr 2, 3
  03312e8  fmr 4, 2
  03312ec  lis 4, 51
  03312f0  addi 4, 4, -1848
  03312f4  lfs 2, 188(4)
  03312f8  fcmpu 0, 4, 2
  03312fc  cror 6, 0, 2
  0331300  bt 6, 0x331310
  0331304  lis 4, 17402
  0331308  fmr 3, 2
  033130c  stw 4, 16(31)
  0331310  lwz 4, 20(31)
  0331314  lfs 4, 20(31)
  0331318  srawi 5, 4, 31
  033131c  srwi 6, 5, 1
  0331320  xor 4, 6, 4
  0331324  subc 4, 4, 5
  0331328  cmpw 4, 3
  033132c  bf 0, 0x331338
  0331330  fmr 4, 1
  0331334  stw 3, 20(31)
  0331338  fcmpu 0, 4, 2
  033133c  cror 6, 0, 2
  0331340  bt 6, 0x331350
  0331344  lis 4, 17402
  0331348  fmr 4, 2
  033134c  stw 4, 20(31)
  0331350  lwz 4, 24(31)
  0331354  lfs 5, 24(31)
  0331358  srawi 5, 4, 31
  033135c  srwi 6, 5, 1
  0331360  xor 4, 6, 4
  0331364  subc 4, 4, 5
  0331368  cmpw 4, 3
  033136c  bf 0, 0x331378
  0331370  fmr 5, 1
  0331374  stw 3, 24(31)
  0331378  fmr 1, 5
  033137c  fcmpu 0, 1, 2
  0331380  cror 6, 0, 2
  0331384  bt 6, 0x331394
  0331388  lis 3, 17402
  033138c  fmr 1, 2
  0331390  stw 3, 24(31)
  0331394  lbz 3, 32(31)
  0331398  cmpwi 3, 4
  033139c  bf 2, 0x3313d4
  03313a0  stfs 3, 128(27)
  03313a4  stfs 4, 132(27)
  03313a8  stfs 1, 136(27)
  03313ac  lfs 1, 28(31)
  03313b0  stfs 1, 140(27)
  03313b4  lfs 1, 64(31)
  03313b8  stfs 1, 144(27)
  03313bc  lfs 1, 68(31)
  03313c0  stfs 1, 148(27)
  03313c4  lfs 1, 72(31)
  03313c8  stfs 1, 152(27)
  03313cc  lfs 1, 76(31)
  03313d0  stfs 1, 156(27)
  03313d4  li 0, 448
  03313d8  lvx 31, 1, 0
  03313dc  ld 0, 688(1)
  03313e0  mtlr 0
  03313e4  lfd 16, 544(1)
  03313e8  lfd 17, 552(1)
  03313ec  lfd 18, 560(1)
  03313f0  lfd 19, 568(1)
  03313f4  lfd 20, 576(1)
  03313f8  lfd 21, 584(1)
  03313fc  lfd 22, 592(1)
  0331400  lfd 23, 600(1)
  0331404  lfd 24, 608(1)
  0331408  lfd 25, 616(1)
  033140c  lfd 26, 624(1)
  0331410  lfd 27, 632(1)
  0331414  lfd 28, 640(1)
  0331418  lfd 29, 648(1)
  033141c  lfd 30, 656(1)
  0331420  lfd 31, 664(1)
  0331424  ld 23, 472(1)
  0331428  ld 24, 480(1)
  033142c  ld 25, 488(1)
  0331430  ld 26, 496(1)
  0331434  ld 27, 504(1)
  0331438  ld 28, 512(1)
  033143c  ld 29, 520(1)
  0331440  ld 30, 528(1)
  0331444  ld 31, 536(1)
  0331448  addi 1, 1, 672
  033144c  blr
