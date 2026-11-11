# game/update/moby313.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M313_0033f594:   # 0x33f594, 0x14 bytes
  033f594  lis 3, 129
  033f598  lis 4, 1
  033f59c  addic 3, 3, 7972
  033f5a0  stw 4, 72(3)
  033f5a4  blr

FUN_0033f5c0:   # 0x33f5c0, 0x1c8 bytes
  033f5c0  stdu 1, -192(1)
  033f5c4  mflr 0
  033f5c8  std 0, 208(1)
  033f5cc  std 27, 152(1)
  033f5d0  ori 27, 3, 0
  033f5d4  std 31, 184(1)
  033f5d8  li 3, 313
  033f5dc  std 30, 176(1)
  033f5e0  ori 31, 8, 0
  033f5e4  std 29, 168(1)
  033f5e8  ori 30, 7, 0
  033f5ec  std 28, 160(1)
  033f5f0  ori 29, 6, 0
  033f5f4  std 26, 144(1)
  033f5f8  ori 28, 5, 0
  033f5fc  std 25, 136(1)
  033f600  std 24, 128(1)
  033f604  li 26, 192
  033f608  bl 0xefa28
  033f60c  nop
  033f610  ori 25, 3, 0
  033f614  cmpwi 25, 0
  033f618  bt 2, 0x33f754
  033f61c  lwz 24, 120(25)
  033f620  li 3, 127
  033f624  li 4, 1
  033f628  stw 27, 24(24)
  033f62c  stb 3, 48(25)
  033f630  sth 3, 50(25)
  033f634  ld 3, 56(27)
  033f638  stb 4, 49(25)
  033f63c  std 3, 56(25)
  033f640  bl 0xfcc68
  033f644  nop
  033f648  stfs 1, 64(25)
  033f64c  bl 0xfcc68
  033f650  nop
  033f654  stfs 1, 68(25)
  033f658  bl 0xfcc68
  033f65c  nop
  033f660  addc 3, 1, 26
  033f664  stfs 1, 72(25)
  033f668  lis 4, 52
  033f66c  std 28, 64(3)
  033f670  std 29, 72(3)
  033f674  std 30, 80(3)
  033f678  std 31, 88(3)
  033f67c  lfs 1, 68(3)
  033f680  addi 31, 4, -2648
  033f684  lis 30, 114
  033f688  stfs 1, 20(25)
  033f68c  lfs 1, 76(3)
  033f690  lfs 2, 84(3)
  033f694  stfs 1, 28(25)
  033f698  lfs 1, 92(3)
  033f69c  lfs 3, 64(3)
  033f6a0  lfs 4, 72(3)
  033f6a4  stfs 3, 16(25)
  033f6a8  stfs 4, 24(25)
  033f6ac  lfs 3, 80(3)
  033f6b0  lfs 4, 88(3)
  033f6b4  stfs 3, 0(24)
  033f6b8  stfs 2, 4(24)
  033f6bc  stfs 4, 8(24)
  033f6c0  stfs 1, 12(24)
  033f6c4  lfs 1, 0(31)
  033f6c8  lfs 2, 4(31)
  033f6cc  lfs 3, -3052(30)
  033f6d0  fmuls 1, 3, 1
  033f6d4  fmuls 2, 3, 2
  033f6d8  bl 0xfcbe8
  033f6dc  nop
  033f6e0  stfs 1, 16(24)
  033f6e4  lfs 1, 8(31)
  033f6e8  lfs 2, 12(31)
  033f6ec  lfs 3, -3052(30)
  033f6f0  fmuls 1, 3, 1
  033f6f4  fmuls 2, 3, 2
  033f6f8  bl 0xfcbe8
  033f6fc  nop
  033f700  li 3, 30
  033f704  stfs 1, 20(24)
  033f708  li 4, 45
  033f70c  bl 0xfe484
  033f710  nop
  033f714  extsw 3, 3
  033f718  li 4, 28
  033f71c  std 3, 112(1)
  033f720  lis 3, 114
  033f724  lfs 1, 16(31)
  033f728  lfs 2, -3056(3)
  033f72c  lfd 3, 112(1)
  033f730  ori 3, 25, 0
  033f734  fcfid 3, 3
  033f738  frsp 3, 3
  033f73c  fadds 1, 3, 1
  033f740  fmuls 1, 2, 1
  033f744  fctiwz 1, 1
  033f748  stfiwx 1, 4, 24
  033f74c  bl 0xf31a8
  033f750  nop
  033f754  ori 3, 25, 0
  033f758  ld 0, 208(1)
  033f75c  mtlr 0
  033f760  ld 24, 128(1)
  033f764  ld 25, 136(1)
  033f768  ld 26, 144(1)
  033f76c  ld 27, 152(1)
  033f770  ld 28, 160(1)
  033f774  ld 29, 168(1)
  033f778  ld 30, 176(1)
  033f77c  ld 31, 184(1)
  033f780  addi 1, 1, 192
  033f784  blr

UpdateMoby_313:   # 0x33f7c8, 0x4f8 bytes
  033f7c8  stdu 1, -272(1)
  033f7cc  mflr 0
  033f7d0  std 0, 288(1)
  033f7d4  stfd 22, 192(1)
  033f7d8  stfd 23, 200(1)
  033f7dc  stfd 24, 208(1)
  033f7e0  stfd 25, 216(1)
  033f7e4  stfd 26, 224(1)
  033f7e8  stfd 27, 232(1)
  033f7ec  stfd 28, 240(1)
  033f7f0  stfd 29, 248(1)
  033f7f4  stfd 30, 256(1)
  033f7f8  stfd 31, 264(1)
  033f7fc  std 29, 168(1)
  033f800  lwz 29, 120(3)
  033f804  lfs 2, 16(3)
  033f808  lfs 1, 20(3)
  033f80c  stfs 2, 112(1)
  033f810  lfs 3, 24(3)
  033f814  stfs 1, 116(1)
  033f818  lfs 4, 28(3)
  033f81c  stfs 3, 120(1)
  033f820  stfs 4, 124(1)
  033f824  lfs 4, 0(29)
  033f828  lis 4, 52
  033f82c  fadds 2, 2, 4
  033f830  std 31, 184(1)
  033f834  addi 4, 4, -2168
  033f838  ori 31, 3, 0
  033f83c  stfs 2, 16(3)
  033f840  lfs 4, 4(29)
  033f844  fadds 1, 1, 4
  033f848  stfs 1, 20(3)
  033f84c  lfs 4, 8(29)
  033f850  fadds 3, 3, 4
  033f854  stfs 3, 24(3)
  033f858  lfs 31, 0(4)
  033f85c  fcmpu 6, 1, 31
  033f860  fcmpu 0, 2, 31
  033f864  fcmpu 1, 3, 31
  033f868  std 30, 176(1)
  033f86c  std 28, 160(1)
  033f870  cror 2, 0, 24
  033f874  bt 2, 0x33f8b8
  033f878  bt 4, 0x33f8b8
  033f87c  lis 3, 149
  033f880  addic 3, 3, 5056
  033f884  lfs 3, 324(3)
  033f888  lfs 4, 320(3)
  033f88c  fsubs 1, 1, 3
  033f890  fsubs 2, 2, 4
  033f894  lis 3, 52
  033f898  addi 3, 3, -2168
  033f89c  fmuls 1, 1, 1
  033f8a0  fmadds 1, 2, 2, 1
  033f8a4  lfs 2, 4(3)
  033f8a8  fsqrts 1, 1
  033f8ac  fcmpu 0, 1, 2
  033f8b0  cror 6, 0, 2
  033f8b4  bt 6, 0x33f8c8
  033f8b8  ori 3, 31, 0
  033f8bc  bl 0xefb38
  033f8c0  nop
  033f8c4  b 0x33fc78
  033f8c8  lfs 1, 72(31)
  033f8cc  lfs 2, 16(29)
  033f8d0  bl 0x502578
  033f8d4  nop
  033f8d8  stfs 1, 72(31)
  033f8dc  lfs 1, 68(31)
  033f8e0  lfs 2, 20(29)
  033f8e4  bl 0x502578
  033f8e8  nop
  033f8ec  lis 3, 52
  033f8f0  stfs 1, 68(31)
  033f8f4  lis 4, 114
  033f8f8  lfs 1, 8(29)
  033f8fc  addi 3, 3, -2168
  033f900  lfs 2, 8(3)
  033f904  lfs 3, -3048(4)
  033f908  addic 3, 29, 28
  033f90c  fnmsubs 1, 3, 2, 1
  033f910  stfs 1, 8(29)
  033f914  bl 0x4fff60
  033f918  nop
  033f91c  cmpwi 3, 0
  033f920  bt 2, 0x33fb1c
  033f924  lis 3, 52
  033f928  li 28, 0
  033f92c  addi 3, 3, -2168
  033f930  ori 30, 28, 0
  033f934  addic 29, 31, 16
  033f938  lfs 23, 12(3)
  033f93c  lfs 24, 16(3)
  033f940  lfs 25, 20(3)
  033f944  lfs 26, 24(3)
  033f948  lfs 27, 28(3)
  033f94c  lfs 28, 32(3)
  033f950  lfs 29, 36(3)
  033f954  lfs 30, 40(3)
  033f958  fmr 1, 23
  033f95c  stw 30, 128(1)
  033f960  stw 30, 132(1)
  033f964  fmr 2, 24
  033f968  stw 30, 136(1)
  033f96c  stw 30, 140(1)
  033f970  bl 0xfcbe8
  033f974  nop
  033f978  stfs 1, 128(1)
  033f97c  fmr 2, 24
  033f980  fmr 1, 23
  033f984  bl 0xfcbe8
  033f988  nop
  033f98c  stfs 1, 132(1)
  033f990  fmr 2, 24
  033f994  fmr 1, 23
  033f998  bl 0xfcbe8
  033f99c  nop
  033f9a0  fmuls 2, 22, 22
  033f9a4  lfs 3, 132(1)
  033f9a8  lfs 4, 128(1)
  033f9ac  fmuls 5, 3, 3
  033f9b0  fmadds 2, 22, 22, 2
  033f9b4  fmadds 5, 4, 4, 5
  033f9b8  fmadds 2, 22, 22, 2
  033f9bc  fmadds 5, 1, 1, 5
  033f9c0  fsqrts 2, 2
  033f9c4  lis 3, 114
  033f9c8  lfs 6, -3052(3)
  033f9cc  stfs 22, 140(1)
  033f9d0  fsqrts 5, 5
  033f9d4  fmuls 7, 2, 25
  033f9d8  fmuls 2, 6, 27
  033f9dc  fdivs 7, 7, 5
  033f9e0  fsub 8, 31, 5
  033f9e4  fsub 9, 31, 5
  033f9e8  fsub 10, 31, 5
  033f9ec  fsub 11, 5, 31
  033f9f0  fsub 12, 5, 31
  033f9f4  fsub 5, 5, 31
  033f9f8  fmuls 13, 1, 7
  033f9fc  fmuls 3, 3, 7
  033fa00  fmuls 4, 4, 7
  033fa04  fmuls 1, 6, 26
  033fa08  fsel 6, 8, 31, 13
  033fa0c  fsel 7, 9, 31, 3
  033fa10  fsel 8, 10, 31, 4
  033fa14  fsel 6, 11, 6, 13
  033fa18  fsel 3, 12, 7, 3
  033fa1c  fsel 4, 5, 8, 4
  033fa20  fadds 5, 22, 6
  033fa24  fadds 3, 22, 3
  033fa28  fadds 4, 22, 4
  033fa2c  stfs 5, 136(1)
  033fa30  stfs 3, 132(1)
  033fa34  stfs 4, 128(1)
  033fa38  bl 0xfcbe8
  033fa3c  nop
  033fa40  lfs 2, 132(1)
  033fa44  lfs 3, 128(1)
  033fa48  fmuls 4, 2, 2
  033fa4c  lfs 5, 136(1)
  033fa50  lis 3, 114
  033fa54  fmadds 4, 3, 3, 4
  033fa58  lfs 6, -3056(3)
  033fa5c  fmuls 7, 6, 28
  033fa60  fmuls 6, 6, 29
  033fa64  fmadds 4, 5, 5, 4
  033fa68  fctiwz 7, 7
  033fa6c  fctiwz 6, 6
  033fa70  fsqrts 4, 4
  033fa74  stfd 7, 144(1)
  033fa78  lwz 3, 148(1)
  033fa7c  stfd 6, 144(1)
  033fa80  lwz 4, 148(1)
  033fa84  extsw 3, 3
  033fa88  extsw 4, 4
  033fa8c  fdivs 1, 1, 4
  033fa90  fsub 6, 31, 4
  033fa94  fsub 7, 31, 4
  033fa98  fsub 8, 31, 4
  033fa9c  fsub 9, 4, 31
  033faa0  fsub 10, 4, 31
  033faa4  fsub 4, 4, 31
  033faa8  fmuls 3, 3, 1
  033faac  fmuls 2, 2, 1
  033fab0  fmuls 1, 5, 1
  033fab4  fsel 5, 6, 31, 3
  033fab8  fsel 6, 7, 31, 2
  033fabc  fsel 7, 8, 31, 1
  033fac0  fsel 3, 9, 5, 3
  033fac4  fsel 2, 10, 6, 2
  033fac8  fsel 1, 4, 7, 1
  033facc  stfs 3, 128(1)
  033fad0  stfs 2, 132(1)
  033fad4  stfs 1, 136(1)
  033fad8  bl 0xfe484
  033fadc  nop
  033fae0  lis 5, 32559
  033fae4  fmr 1, 30
  033fae8  ori 6, 3, 0
  033faec  addic 4, 1, 128
  033faf0  ori 3, 29, 0
  033faf4  ori 5, 5, 20335
  033faf8  bl 0x128248
  033fafc  nop
  033fb00  addic 28, 28, 1
  033fb04  cmpwi 28, 2
  033fb08  bt 0, 0x33f958
  033fb0c  ori 3, 31, 0
  033fb10  bl 0xefb38
  033fb14  nop
  033fb18  b 0x33fc78
  033fb1c  addic 3, 1, 112
  033fb20  addic 4, 31, 16
  033fb24  li 5, 2
  033fb28  ori 6, 31, 0
  033fb2c  li 7, 0
  033fb30  bl 0x57820
  033fb34  nop
  033fb38  cmpwi 3, 0
  033fb3c  bt 2, 0x33fc78
  033fb40  lis 30, 161
  033fb44  ori 3, 29, 0
  033fb48  addic 30, 30, 2368
  033fb4c  ori 4, 29, 0
  033fb50  addic 5, 30, 64
  033fb54  bl 0x500608
  033fb58  nop
  033fb5c  lis 3, 52
  033fb60  addi 28, 3, -2168
  033fb64  lfs 1, 44(28)
  033fb68  lfs 2, 48(28)
  033fb6c  bl 0xfcbe8
  033fb70  nop
  033fb74  lfs 2, 4(29)
  033fb78  lfs 3, 0(29)
  033fb7c  fmuls 2, 2, 1
  033fb80  lfs 4, 8(29)
  033fb84  fmuls 3, 3, 1
  033fb88  fmuls 1, 4, 1
  033fb8c  lis 3, 114
  033fb90  fmuls 4, 2, 2
  033fb94  stfs 3, 0(29)
  033fb98  stfs 2, 4(29)
  033fb9c  stfs 1, 8(29)
  033fba0  lfs 2, 52(28)
  033fba4  fmadds 4, 3, 3, 4
  033fba8  fmadds 3, 1, 1, 4
  033fbac  fsqrts 1, 3
  033fbb0  lfs 3, -3048(3)
  033fbb4  fmuls 2, 3, 2
  033fbb8  fcmpu 0, 1, 2
  033fbbc  cror 6, 1, 2
  033fbc0  bt 6, 0x33fbd8
  033fbc4  li 3, 0
  033fbc8  stw 3, 12(29)
  033fbcc  stw 3, 8(29)
  033fbd0  stw 3, 4(29)
  033fbd4  stw 3, 0(29)
  033fbd8  lfs 1, 68(30)
  033fbdc  lfs 2, 64(30)
  033fbe0  fmuls 3, 1, 1
  033fbe4  lfs 4, 72(30)
  033fbe8  lis 3, 52
  033fbec  addi 3, 3, -2168
  033fbf0  fmadds 3, 2, 2, 3
  033fbf4  lfs 5, 56(3)
  033fbf8  lfs 6, 32(30)
  033fbfc  fmadds 3, 4, 4, 3
  033fc00  fsqrts 3, 3
  033fc04  fdivs 5, 5, 3
  033fc08  fsub 7, 31, 3
  033fc0c  fsub 9, 31, 3
  033fc10  fsub 10, 31, 3
  033fc14  fsub 8, 3, 31
  033fc18  fsub 11, 3, 31
  033fc1c  fsub 3, 3, 31
  033fc20  fmuls 2, 2, 5
  033fc24  fmuls 1, 1, 5
  033fc28  fmuls 4, 4, 5
  033fc2c  fsel 5, 7, 31, 2
  033fc30  fsel 7, 9, 31, 1
  033fc34  fsel 9, 10, 31, 4
  033fc38  fsel 2, 8, 5, 2
  033fc3c  fsel 1, 11, 7, 1
  033fc40  fsel 3, 3, 9, 4
  033fc44  fadds 4, 6, 2
  033fc48  stfs 2, 64(30)
  033fc4c  stfs 1, 68(30)
  033fc50  stfs 3, 72(30)
  033fc54  stfs 4, 16(31)
  033fc58  lfs 2, 36(30)
  033fc5c  fadds 1, 2, 1
  033fc60  stfs 1, 20(31)
  033fc64  lfs 1, 40(30)
  033fc68  fadds 1, 1, 3
  033fc6c  stfs 1, 24(31)
  033fc70  lfs 1, 44(30)
  033fc74  stfs 1, 28(31)
  033fc78  ld 0, 288(1)
  033fc7c  mtlr 0
  033fc80  lfd 22, 192(1)
  033fc84  lfd 23, 200(1)
  033fc88  lfd 24, 208(1)
  033fc8c  lfd 25, 216(1)
  033fc90  lfd 26, 224(1)
  033fc94  lfd 27, 232(1)
  033fc98  lfd 28, 240(1)
  033fc9c  lfd 29, 248(1)
  033fca0  lfd 30, 256(1)
  033fca4  lfd 31, 264(1)
  033fca8  ld 28, 160(1)
  033fcac  ld 29, 168(1)
  033fcb0  ld 30, 176(1)
  033fcb4  ld 31, 184(1)
  033fcb8  addi 1, 1, 272
  033fcbc  blr
