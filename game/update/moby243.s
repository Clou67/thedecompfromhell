# game/update/moby243.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M243_0030f5a0:   # 0x30f5a0, 0x14 bytes
  030f5a0  lis 3, 128
  030f5a4  lis 4, 1
  030f5a8  addic 3, 3, -2172
  030f5ac  stw 4, 72(3)
  030f5b0  blr

FUN_0030f5c8:   # 0x30f5c8, 0x1c8 bytes
  030f5c8  stdu 1, -192(1)
  030f5cc  mflr 0
  030f5d0  std 0, 208(1)
  030f5d4  stfd 28, 160(1)
  030f5d8  stfd 29, 168(1)
  030f5dc  stfd 30, 176(1)
  030f5e0  stfd 31, 184(1)
  030f5e4  std 29, 136(1)
  030f5e8  ori 29, 3, 0
  030f5ec  std 31, 152(1)
  030f5f0  li 3, 243
  030f5f4  std 30, 144(1)
  030f5f8  ori 31, 5, 0
  030f5fc  std 28, 128(1)
  030f600  std 27, 120(1)
  030f604  std 26, 112(1)
  030f608  ori 30, 4, 0
  030f60c  bl 0xefa28
  030f610  nop
  030f614  ori 28, 3, 0
  030f618  cmpwi 28, 0
  030f61c  bt 2, 0x30f754
  030f620  lis 3, 49
  030f624  lwz 26, 120(28)
  030f628  addi 27, 3, -2632
  030f62c  lfs 31, 0(27)
  030f630  lfs 30, 4(27)
  030f634  fmr 1, 31
  030f638  fmr 2, 30
  030f63c  bl 0xfcbe8
  030f640  nop
  030f644  fmr 29, 1
  030f648  fmr 1, 31
  030f64c  fmr 2, 30
  030f650  bl 0xfcbe8
  030f654  nop
  030f658  fmr 28, 1
  030f65c  fmr 1, 31
  030f660  fmr 2, 30
  030f664  bl 0xfcbe8
  030f668  nop
  030f66c  li 3, 255
  030f670  li 4, 1
  030f674  vspltisw 3, -1
  030f678  li 6, 8
  030f67c  lis 5, 114
  030f680  stb 3, 48(28)
  030f684  li 7, -3056
  030f688  sth 3, 50(28)
  030f68c  stb 4, 49(28)
  030f690  stb 4, 32(28)
  030f694  stw 29, 16(26)
  030f698  lvlx 2, 6, 27
  030f69c  li 3, 20
  030f6a0  vslw 3, 3, 3
  030f6a4  vspltw 2, 2, 0
  030f6a8  lvlx 4, 7, 5
  030f6ac  li 4, 0
  030f6b0  lis 29, 114
  030f6b4  vmaddfp 2, 4, 2, 3
  030f6b8  vctsxs 2, 2, 0
  030f6bc  vspltw 2, 2, 0
  030f6c0  stvewx 2, 3, 26
  030f6c4  lfs 2, 0(30)
  030f6c8  stfs 2, 16(28)
  030f6cc  lfs 2, 4(30)
  030f6d0  stfs 2, 20(28)
  030f6d4  lfs 2, 8(30)
  030f6d8  stfs 2, 24(28)
  030f6dc  lfs 2, 12(30)
  030f6e0  stfs 2, 28(28)
  030f6e4  lfs 2, 0(31)
  030f6e8  stfs 2, 0(26)
  030f6ec  lfs 2, 4(31)
  030f6f0  stfs 2, 4(26)
  030f6f4  lfs 2, 8(31)
  030f6f8  stfs 2, 8(26)
  030f6fc  lfs 2, 12(31)
  030f700  stfs 2, 12(26)
  030f704  stfs 29, 64(28)
  030f708  stfs 28, 68(28)
  030f70c  stfs 1, 72(28)
  030f710  stw 4, 76(28)
  030f714  lfs 31, 12(27)
  030f718  lfs 3, -3052(29)
  030f71c  fmuls 1, 3, 31
  030f720  fmuls 2, 3, 30
  030f724  bl 0xfcbe8
  030f728  nop
  030f72c  stfs 1, 24(26)
  030f730  lfs 2, -3052(29)
  030f734  fmuls 1, 2, 31
  030f738  fmuls 2, 2, 30
  030f73c  bl 0xfcbe8
  030f740  nop
  030f744  stfs 1, 28(26)
  030f748  ori 3, 28, 0
  030f74c  bl 0xf31a8
  030f750  nop
  030f754  ori 3, 28, 0
  030f758  ld 0, 208(1)
  030f75c  mtlr 0
  030f760  lfd 28, 160(1)
  030f764  lfd 29, 168(1)
  030f768  lfd 30, 176(1)
  030f76c  lfd 31, 184(1)
  030f770  ld 26, 112(1)
  030f774  ld 27, 120(1)
  030f778  ld 28, 128(1)
  030f77c  ld 29, 136(1)
  030f780  ld 30, 144(1)
  030f784  ld 31, 152(1)
  030f788  addi 1, 1, 192
  030f78c  blr

UpdateMoby_243:   # 0x30f810, 0x10bc bytes
  030f810  stdu 1, -608(1)
  030f814  mflr 0
  030f818  std 0, 624(1)
  030f81c  stfd 14, 464(1)
  030f820  stfd 15, 472(1)
  030f824  stfd 16, 480(1)
  030f828  stfd 17, 488(1)
  030f82c  stfd 18, 496(1)
  030f830  stfd 19, 504(1)
  030f834  stfd 20, 512(1)
  030f838  stfd 21, 520(1)
  030f83c  stfd 22, 528(1)
  030f840  stfd 23, 536(1)
  030f844  stfd 24, 544(1)
  030f848  stfd 25, 552(1)
  030f84c  stfd 26, 560(1)
  030f850  stfd 27, 568(1)
  030f854  stfd 28, 576(1)
  030f858  stfd 29, 584(1)
  030f85c  stfd 30, 592(1)
  030f860  stfd 31, 600(1)
  030f864  std 23, 392(1)
  030f868  lis 4, 49
  030f86c  std 27, 424(1)
  030f870  li 23, 0
  030f874  addi 4, 4, -2160
  030f878  std 31, 456(1)
  030f87c  lis 27, 114
  030f880  ori 31, 3, 0
  030f884  lfs 28, 0(4)
  030f888  stw 23, 144(1)
  030f88c  stw 23, 148(1)
  030f890  stw 23, 152(1)
  030f894  stw 23, 156(1)
  030f898  lfs 27, 4(4)
  030f89c  std 30, 448(1)
  030f8a0  lfs 1, -3052(27)
  030f8a4  lwz 30, 120(31)
  030f8a8  fmuls 1, 1, 27
  030f8ac  lbz 5, 32(31)
  030f8b0  cmpwi 1, 5, 0
  030f8b4  lwz 3, 16(30)
  030f8b8  cmpwi 3, 0
  030f8bc  stfs 1, 152(1)
  030f8c0  lfs 29, 8(4)
  030f8c4  std 29, 440(1)
  030f8c8  std 28, 432(1)
  030f8cc  std 26, 416(1)
  030f8d0  std 25, 408(1)
  030f8d4  std 24, 400(1)
  030f8d8  std 22, 384(1)
  030f8dc  std 21, 376(1)
  030f8e0  std 20, 368(1)
  030f8e4  fmr 25, 29
  030f8e8  bt 2, 0x30f900
  030f8ec  lbz 3, 32(3)
  030f8f0  cmpwi 3, 254
  030f8f4  cmpwi 6, 3, 253
  030f8f8  bt 2, 0x30f900
  030f8fc  bf 26, 0x30f914
  030f900  bf 6, 0x30f914
  030f904  ori 3, 31, 0
  030f908  bl 0xefb38
  030f90c  nop
  030f910  b 0x310844
  030f914  bt 6, 0x310844
  030f918  lfs 1, 16(31)
  030f91c  lfs 2, 20(31)
  030f920  stfs 1, 128(1)
  030f924  lfs 3, 24(31)
  030f928  stfs 2, 132(1)
  030f92c  lfs 4, 28(31)
  030f930  stfs 3, 136(1)
  030f934  stfs 4, 140(1)
  030f938  lfs 4, 0(30)
  030f93c  fadds 1, 1, 4
  030f940  lis 3, 49
  030f944  lis 4, 114
  030f948  addi 3, 3, -2160
  030f94c  lis 5, 129
  030f950  lis 26, 114
  030f954  stfs 1, 16(31)
  030f958  lfs 1, 4(30)
  030f95c  fadds 1, 2, 1
  030f960  stfs 1, 20(31)
  030f964  lfs 1, 8(30)
  030f968  fadds 1, 3, 1
  030f96c  stfs 1, 24(31)
  030f970  lfs 1, 12(3)
  030f974  lfs 2, 8(30)
  030f978  lfs 3, -3048(4)
  030f97c  stw 31, 224(1)
  030f980  fnmsubs 1, 3, 1, 2
  030f984  stw 5, 228(1)
  030f988  lwz 4, 20(30)
  030f98c  stfs 1, 8(30)
  030f990  lfs 31, 16(3)
  030f994  lfs 1, -3056(26)
  030f998  fmuls 1, 1, 31
  030f99c  fctiwz 1, 1
  030f9a0  stfd 1, 352(1)
  030f9a4  lwz 3, 356(1)
  030f9a8  cmpw 4, 3
  030f9ac  bf 0, 0x30f9bc
  030f9b0  lis 3, 129
  030f9b4  ori 3, 3, 1
  030f9b8  stw 3, 228(1)
  030f9bc  lis 3, 16256
  030f9c0  li 4, 1
  030f9c4  addic 25, 31, 16
  030f9c8  addic 7, 1, 208
  030f9cc  stw 3, 236(1)
  030f9d0  li 5, 0
  030f9d4  lfs 1, 0(30)
  030f9d8  addic 3, 1, 128
  030f9dc  stw 4, 240(1)
  030f9e0  stfs 1, 208(1)
  030f9e4  lfs 1, 4(30)
  030f9e8  ori 4, 25, 0
  030f9ec  stfs 1, 212(1)
  030f9f0  lfs 1, 8(30)
  030f9f4  lwz 6, 16(30)
  030f9f8  stfs 1, 216(1)
  030f9fc  lfs 1, 12(30)
  030fa00  stfs 1, 220(1)
  030fa04  bl 0x57820
  030fa08  nop
  030fa0c  cmpwi 3, 0
  030fa10  lfs 1, -3056(26)
  030fa14  bt 2, 0x30fce4
  030fa18  lis 29, 161
  030fa1c  addic 29, 29, 2368
  030fa20  lwz 3, 24(29)
  030fa24  cmpwi 3, 0
  030fa28  bt 2, 0x30fba0
  030fa2c  lis 4, 151
  030fa30  addic 4, 4, -25376
  030fa34  lwz 4, 8320(4)
  030fa38  cmpw 3, 4
  030fa3c  bt 2, 0x30fa4c
  030fa40  lwz 4, 16(30)
  030fa44  cmpw 3, 4
  030fa48  bf 2, 0x30fa70
  030fa4c  fmuls 1, 1, 31
  030fa50  fmr 30, 28
  030fa54  lwz 3, 20(30)
  030fa58  fctiwz 1, 1
  030fa5c  fmr 31, 30
  030fa60  stfd 1, 352(1)
  030fa64  lwz 4, 356(1)
  030fa68  cmpw 3, 4
  030fa6c  bf 0, 0x30fd40
  030fa70  li 4, 1
  030fa74  addic 3, 1, 144
  030fa78  addic 5, 29, 64
  030fa7c  stb 4, 188(31)
  030fa80  lfs 1, 32(29)
  030fa84  ori 4, 30, 0
  030fa88  stfs 1, 16(31)
  030fa8c  lfs 1, 36(29)
  030fa90  stfs 1, 20(31)
  030fa94  lfs 1, 40(29)
  030fa98  stfs 1, 24(31)
  030fa9c  lfs 1, 44(29)
  030faa0  stfs 1, 28(31)
  030faa4  bl 0x500608
  030faa8  nop
  030faac  lfs 3, 148(1)
  030fab0  lfs 4, 144(1)
  030fab4  fmuls 1, 3, 3
  030fab8  lfs 5, 152(1)
  030fabc  lfs 2, -3052(27)
  030fac0  lfs 30, 68(29)
  030fac4  fmuls 6, 2, 27
  030fac8  lfs 31, 64(29)
  030facc  fmuls 2, 30, 30
  030fad0  fmadds 1, 4, 4, 1
  030fad4  fmadds 2, 31, 31, 2
  030fad8  fmadds 1, 5, 5, 1
  030fadc  fsqrts 7, 1
  030fae0  lfs 1, 72(29)
  030fae4  fmadds 2, 1, 1, 2
  030fae8  fsqrts 8, 2
  030faec  fdivs 6, 6, 7
  030faf0  fsub 9, 28, 7
  030faf4  fsub 10, 28, 7
  030faf8  fsub 11, 28, 7
  030fafc  fsub 12, 7, 28
  030fb00  fsub 13, 7, 28
  030fb04  fsub 7, 7, 28
  030fb08  fcmpu 0, 8, 28
  030fb0c  fmuls 4, 4, 6
  030fb10  fmuls 3, 3, 6
  030fb14  fmuls 5, 5, 6
  030fb18  fsel 6, 9, 28, 4
  030fb1c  fsel 8, 10, 28, 3
  030fb20  fsel 9, 11, 28, 5
  030fb24  fsel 4, 12, 6, 4
  030fb28  fsel 3, 13, 8, 3
  030fb2c  fsel 5, 7, 9, 5
  030fb30  stfs 4, 144(1)
  030fb34  stfs 3, 148(1)
  030fb38  stfs 5, 152(1)
  030fb3c  bf 2, 0x30fb50
  030fb40  fmr 31, 28
  030fb44  fmr 30, 31
  030fb48  fmr 29, 30
  030fb4c  b 0x30fd40
  030fb50  frsqrte 3, 2
  030fb54  lis 3, 49
  030fb58  addi 3, 3, -2160
  030fb5c  lfs 4, 20(3)
  030fb60  fmuls 5, 2, 3
  030fb64  fmuls 6, 4, 3
  030fb68  fnmsubs 5, 5, 3, 29
  030fb6c  fmadds 3, 5, 6, 3
  030fb70  fmuls 5, 2, 3
  030fb74  fmuls 6, 4, 3
  030fb78  fnmsubs 5, 5, 3, 29
  030fb7c  fmadds 3, 5, 6, 3
  030fb80  fmuls 2, 2, 3
  030fb84  fmuls 4, 4, 3
  030fb88  fnmsubs 2, 2, 3, 29
  030fb8c  fmadds 29, 2, 4, 3
  030fb90  fmuls 31, 31, 29
  030fb94  fmuls 30, 30, 29
  030fb98  fmuls 29, 1, 29
  030fb9c  b 0x30fd40
  030fba0  fmr 30, 28
  030fba4  lwz 3, 28(29)
  030fba8  cmpwi 3, 0
  030fbac  fmr 31, 30
  030fbb0  bf 1, 0x30fd40
  030fbb4  li 4, 1
  030fbb8  addic 3, 1, 144
  030fbbc  addic 5, 29, 64
  030fbc0  stb 4, 188(31)
  030fbc4  lfs 1, 32(29)
  030fbc8  ori 4, 30, 0
  030fbcc  stfs 1, 16(31)
  030fbd0  lfs 1, 36(29)
  030fbd4  stfs 1, 20(31)
  030fbd8  lfs 1, 40(29)
  030fbdc  stfs 1, 24(31)
  030fbe0  lfs 1, 44(29)
  030fbe4  stfs 1, 28(31)
  030fbe8  bl 0x500608
  030fbec  nop
  030fbf0  lfs 3, 148(1)
  030fbf4  lfs 4, 144(1)
  030fbf8  fmuls 1, 3, 3
  030fbfc  lfs 5, 152(1)
  030fc00  lfs 6, -3052(27)
  030fc04  lfs 30, 68(29)
  030fc08  fmuls 6, 6, 27
  030fc0c  fmuls 8, 30, 30
  030fc10  fmadds 1, 4, 4, 1
  030fc14  fmadds 1, 5, 5, 1
  030fc18  fsqrts 7, 1
  030fc1c  lfs 1, 64(29)
  030fc20  lfs 2, 72(29)
  030fc24  fmadds 31, 1, 1, 8
  030fc28  fmadds 31, 2, 2, 31
  030fc2c  fsqrts 8, 31
  030fc30  fdivs 6, 6, 7
  030fc34  fsub 9, 28, 7
  030fc38  fsub 10, 28, 7
  030fc3c  fsub 11, 28, 7
  030fc40  fsub 12, 7, 28
  030fc44  fsub 13, 7, 28
  030fc48  fsub 7, 7, 28
  030fc4c  fcmpu 0, 8, 28
  030fc50  fmuls 4, 4, 6
  030fc54  fmuls 3, 3, 6
  030fc58  fmuls 5, 5, 6
  030fc5c  fsel 6, 9, 28, 4
  030fc60  fsel 8, 10, 28, 3
  030fc64  fsel 9, 11, 28, 5
  030fc68  fsel 4, 12, 6, 4
  030fc6c  fsel 3, 13, 8, 3
  030fc70  fsel 5, 7, 9, 5
  030fc74  stfs 4, 144(1)
  030fc78  stfs 3, 148(1)
  030fc7c  stfs 5, 152(1)
  030fc80  bf 2, 0x30fc94
  030fc84  fmr 31, 28
  030fc88  fmr 30, 31
  030fc8c  fmr 29, 30
  030fc90  b 0x30fd40
  030fc94  frsqrte 3, 31
  030fc98  lis 3, 49
  030fc9c  addi 3, 3, -2160
  030fca0  lfs 4, 20(3)
  030fca4  fmuls 5, 31, 3
  030fca8  fmuls 6, 4, 3
  030fcac  fnmsubs 5, 5, 3, 29
  030fcb0  fmadds 3, 5, 6, 3
  030fcb4  fmuls 5, 31, 3
  030fcb8  fmuls 6, 4, 3
  030fcbc  fnmsubs 5, 5, 3, 29
  030fcc0  fmadds 3, 5, 6, 3
  030fcc4  fmuls 5, 31, 3
  030fcc8  fmuls 4, 4, 3
  030fccc  fnmsubs 5, 5, 3, 29
  030fcd0  fmadds 29, 5, 4, 3
  030fcd4  fmuls 31, 1, 29
  030fcd8  fmuls 30, 30, 29
  030fcdc  fmuls 29, 2, 29
  030fce0  b 0x30fd40
  030fce4  addic 3, 30, 20
  030fce8  bl 0x4fff60
  030fcec  nop
  030fcf0  fmr 30, 28
  030fcf4  cmpwi 3, 0
  030fcf8  fmr 31, 30
  030fcfc  bt 2, 0x30fd40
  030fd00  li 3, 1
  030fd04  fmr 30, 28
  030fd08  stb 3, 188(31)
  030fd0c  lfs 1, 144(1)
  030fd10  lfs 2, 0(30)
  030fd14  fadds 1, 1, 2
  030fd18  lfs 2, 148(1)
  030fd1c  lfs 3, 152(1)
  030fd20  fmr 31, 30
  030fd24  stfs 1, 144(1)
  030fd28  lfs 1, 4(30)
  030fd2c  fadds 1, 2, 1
  030fd30  stfs 1, 148(1)
  030fd34  lfs 1, 8(30)
  030fd38  fadds 1, 3, 1
  030fd3c  stfs 1, 152(1)
  030fd40  lbz 3, 188(31)
  030fd44  cmpwi 3, 0
  030fd48  bt 2, 0x310844
  030fd4c  lis 3, 129
  030fd50  stw 31, 272(1)
  030fd54  lis 4, 49
  030fd58  ori 3, 3, 1
  030fd5c  addi 28, 4, -2160
  030fd60  addic 7, 1, 256
  030fd64  li 5, 16
  030fd68  stw 3, 276(1)
  030fd6c  stfs 25, 284(1)
  030fd70  ori 3, 25, 0
  030fd74  stw 23, 268(1)
  030fd78  ori 6, 31, 0
  030fd7c  stw 23, 264(1)
  030fd80  stw 23, 260(1)
  030fd84  stw 23, 256(1)
  030fd88  stw 23, 288(1)
  030fd8c  lfs 26, 24(28)
  030fd90  fmr 1, 26
  030fd94  bl 0x5e598
  030fd98  nop
  030fd9c  fmuls 1, 30, 30
  030fda0  lfs 14, 20(28)
  030fda4  lfs 24, 28(28)
  030fda8  ori 29, 23, 0
  030fdac  lfs 22, 32(28)
  030fdb0  lfs 21, 36(28)
  030fdb4  lfs 20, 40(28)
  030fdb8  lfs 19, 44(28)
  030fdbc  fmadds 1, 31, 31, 1
  030fdc0  fmadds 1, 29, 29, 1
  030fdc4  frsqrte 2, 1
  030fdc8  fsqrts 23, 1
  030fdcc  fmuls 3, 1, 2
  030fdd0  fmuls 4, 14, 2
  030fdd4  fnmsubs 3, 3, 2, 25
  030fdd8  fmadds 2, 3, 4, 2
  030fddc  fmuls 3, 1, 2
  030fde0  fmuls 4, 14, 2
  030fde4  fnmsubs 3, 3, 2, 25
  030fde8  fmadds 2, 3, 4, 2
  030fdec  fmuls 1, 1, 2
  030fdf0  fmuls 3, 14, 2
  030fdf4  fnmsubs 1, 1, 2, 25
  030fdf8  fmadds 15, 1, 3, 2
  030fdfc  fmuls 17, 15, 29
  030fe00  fmuls 16, 15, 30
  030fe04  fmuls 15, 15, 31
  030fe08  fmr 1, 24
  030fe0c  stw 23, 176(1)
  030fe10  fmr 2, 25
  030fe14  stw 23, 180(1)
  030fe18  stw 23, 184(1)
  030fe1c  stw 23, 188(1)
  030fe20  bl 0xfcbe8
  030fe24  nop
  030fe28  stfs 1, 176(1)
  030fe2c  fmr 1, 24
  030fe30  fmr 2, 25
  030fe34  bl 0xfcbe8
  030fe38  nop
  030fe3c  fmuls 2, 1, 30
  030fe40  fsub 5, 28, 23
  030fe44  lfs 3, 176(1)
  030fe48  fsub 6, 28, 23
  030fe4c  lfs 4, 184(1)
  030fe50  fsub 7, 28, 23
  030fe54  fsub 8, 23, 28
  030fe58  fsub 9, 23, 28
  030fe5c  fsub 10, 23, 28
  030fe60  fmadds 2, 3, 31, 2
  030fe64  fmadds 11, 4, 29, 2
  030fe68  fmr 2, 25
  030fe6c  fmuls 12, 11, 17
  030fe70  fmuls 13, 11, 16
  030fe74  fmuls 11, 11, 15
  030fe78  fsel 5, 5, 28, 12
  030fe7c  fsel 6, 6, 28, 13
  030fe80  fsel 7, 7, 28, 11
  030fe84  fsel 5, 8, 5, 12
  030fe88  fsel 6, 9, 6, 13
  030fe8c  fsel 7, 10, 7, 11
  030fe90  fsubs 4, 4, 5
  030fe94  fsubs 5, 1, 6
  030fe98  fsubs 3, 3, 7
  030fe9c  fmr 1, 28
  030fea0  stfs 4, 184(1)
  030fea4  stfs 5, 180(1)
  030fea8  stfs 3, 176(1)
  030feac  bl 0xfcbe8
  030feb0  nop
  030feb4  fmuls 3, 1, 17
  030feb8  fmuls 4, 1, 16
  030febc  fmuls 5, 1, 15
  030fec0  fsub 1, 28, 23
  030fec4  fsub 2, 28, 23
  030fec8  lfs 10, 176(1)
  030fecc  fsub 6, 28, 23
  030fed0  lfs 11, 180(1)
  030fed4  fsub 7, 23, 28
  030fed8  lfs 12, 184(1)
  030fedc  fsub 8, 23, 28
  030fee0  fsub 9, 23, 28
  030fee4  fsel 13, 1, 28, 3
  030fee8  fsel 0, 2, 28, 4
  030feec  fsel 6, 6, 28, 5
  030fef0  fmr 2, 21
  030fef4  fmr 1, 22
  030fef8  fsel 3, 7, 13, 3
  030fefc  fsel 4, 8, 0, 4
  030ff00  fsel 5, 9, 6, 5
  030ff04  fadds 3, 12, 3
  030ff08  fadds 4, 11, 4
  030ff0c  fadds 5, 10, 5
  030ff10  stfs 3, 184(1)
  030ff14  stfs 4, 180(1)
  030ff18  stfs 5, 176(1)
  030ff1c  bl 0xfcbe8
  030ff20  nop
  030ff24  lfs 2, 180(1)
  030ff28  lfs 3, 176(1)
  030ff2c  fmuls 4, 2, 2
  030ff30  lfs 5, 184(1)
  030ff34  lfs 6, -3052(27)
  030ff38  fmuls 1, 1, 6
  030ff3c  lfs 6, 144(1)
  030ff40  lfs 7, 148(1)
  030ff44  fmadds 4, 3, 3, 4
  030ff48  lfs 8, 152(1)
  030ff4c  lfs 9, -3056(26)
  030ff50  fmuls 10, 9, 20
  030ff54  fmuls 9, 9, 19
  030ff58  fmadds 4, 5, 5, 4
  030ff5c  fctiwz 10, 10
  030ff60  fctiwz 9, 9
  030ff64  fsqrts 4, 4
  030ff68  stfd 10, 352(1)
  030ff6c  lwz 3, 356(1)
  030ff70  stfd 9, 352(1)
  030ff74  lwz 4, 356(1)
  030ff78  extsw 3, 3
  030ff7c  extsw 4, 4
  030ff80  fdivs 1, 1, 4
  030ff84  fsub 10, 28, 4
  030ff88  fsub 11, 28, 4
  030ff8c  fsub 12, 28, 4
  030ff90  fsub 13, 4, 28
  030ff94  fsub 0, 4, 28
  030ff98  fsub 4, 4, 28
  030ff9c  fmuls 5, 5, 1
  030ffa0  fmuls 2, 2, 1
  030ffa4  fmuls 1, 3, 1
  030ffa8  fsel 3, 10, 28, 5
  030ffac  fsel 9, 11, 28, 2
  030ffb0  fsel 10, 12, 28, 1
  030ffb4  fsel 3, 13, 3, 5
  030ffb8  fsel 2, 0, 9, 2
  030ffbc  fsel 1, 4, 10, 1
  030ffc0  fadds 3, 3, 8
  030ffc4  fadds 2, 2, 7
  030ffc8  fadds 1, 1, 6
  030ffcc  stfs 3, 184(1)
  030ffd0  stfs 2, 180(1)
  030ffd4  stfs 1, 176(1)
  030ffd8  bl 0xfe484
  030ffdc  nop
  030ffe0  ori 5, 3, 0
  030ffe4  addic 4, 1, 176
  030ffe8  ori 3, 25, 0
  030ffec  li 6, 0
  030fff0  li 7, 0
  030fff4  bl 0x20bb70
  030fff8  nop
  030fffc  addic 29, 29, 1
  0310000  cmpwi 29, 10
  0310004  bt 0, 0x30fe08
  0310008  lis 3, 49
  031000c  ori 29, 23, 0
  0310010  addi 3, 3, -2160
  0310014  lfs 19, 48(3)
  0310018  lfs 18, 52(3)
  031001c  fmr 1, 24
  0310020  stw 23, 192(1)
  0310024  stw 23, 196(1)
  0310028  fmr 2, 25
  031002c  stw 23, 200(1)
  0310030  stw 23, 204(1)
  0310034  bl 0xfcbe8
  0310038  nop
  031003c  stfs 1, 192(1)
  0310040  fmr 2, 25
  0310044  fmr 1, 24
  0310048  bl 0xfcbe8
  031004c  nop
  0310050  fmuls 2, 1, 30
  0310054  fsub 5, 28, 23
  0310058  fsub 6, 28, 23
  031005c  lfs 3, 192(1)
  0310060  fsub 7, 28, 23
  0310064  lfs 4, 200(1)
  0310068  fsub 8, 23, 28
  031006c  fsub 9, 23, 28
  0310070  fsub 10, 23, 28
  0310074  fmadds 2, 3, 31, 2
  0310078  fmadds 11, 4, 29, 2
  031007c  fmr 2, 25
  0310080  fmuls 12, 11, 17
  0310084  fmuls 13, 11, 16
  0310088  fmuls 11, 11, 15
  031008c  fsel 5, 5, 28, 12
  0310090  fsel 6, 6, 28, 13
  0310094  fsel 7, 7, 28, 11
  0310098  fsel 5, 8, 5, 12
  031009c  fsel 6, 9, 6, 13
  03100a0  fsel 7, 10, 7, 11
  03100a4  fsubs 4, 4, 5
  03100a8  fsubs 5, 1, 6
  03100ac  fsubs 3, 3, 7
  03100b0  fmr 1, 28
  03100b4  stfs 4, 200(1)
  03100b8  stfs 5, 196(1)
  03100bc  stfs 3, 192(1)
  03100c0  bl 0xfcbe8
  03100c4  nop
  03100c8  fmuls 3, 1, 17
  03100cc  fmuls 4, 1, 16
  03100d0  fmuls 5, 1, 15
  03100d4  fsub 1, 28, 23
  03100d8  fsub 2, 28, 23
  03100dc  fsub 6, 28, 23
  03100e0  lfs 10, 192(1)
  03100e4  fsub 7, 23, 28
  03100e8  lfs 11, 196(1)
  03100ec  fsub 8, 23, 28
  03100f0  lfs 0, 200(1)
  03100f4  fsub 9, 23, 28
  03100f8  fsel 12, 1, 28, 3
  03100fc  fsel 13, 2, 28, 4
  0310100  fsel 6, 6, 28, 5
  0310104  fmr 2, 19
  0310108  fmr 1, 21
  031010c  fsel 3, 7, 12, 3
  0310110  fsel 4, 8, 13, 4
  0310114  fsel 5, 9, 6, 5
  0310118  fadds 3, 0, 3
  031011c  fadds 4, 11, 4
  0310120  fadds 5, 10, 5
  0310124  stfs 3, 200(1)
  0310128  stfs 4, 196(1)
  031012c  stfs 5, 192(1)
  0310130  bl 0xfcbe8
  0310134  nop
  0310138  lfs 2, 196(1)
  031013c  lfs 3, 192(1)
  0310140  fmuls 4, 2, 2
  0310144  lfs 5, 200(1)
  0310148  lfs 6, -3052(27)
  031014c  fmuls 1, 1, 6
  0310150  lfs 7, 144(1)
  0310154  lfs 8, 148(1)
  0310158  fmadds 4, 3, 3, 4
  031015c  lfs 9, 152(1)
  0310160  lfs 10, -3056(26)
  0310164  fmuls 6, 10, 20
  0310168  fmuls 10, 10, 18
  031016c  fmadds 4, 5, 5, 4
  0310170  fctiwz 6, 6
  0310174  fctiwz 10, 10
  0310178  fsqrts 4, 4
  031017c  stfd 6, 352(1)
  0310180  lwz 3, 356(1)
  0310184  stfd 10, 352(1)
  0310188  lwz 4, 356(1)
  031018c  extsw 3, 3
  0310190  extsw 4, 4
  0310194  fdivs 1, 1, 4
  0310198  fsub 6, 28, 4
  031019c  fsub 11, 28, 4
  03101a0  fsub 12, 28, 4
  03101a4  fsub 13, 4, 28
  03101a8  fsub 0, 4, 28
  03101ac  fsub 4, 4, 28
  03101b0  fmuls 5, 5, 1
  03101b4  fmuls 2, 2, 1
  03101b8  fmuls 1, 3, 1
  03101bc  fsel 3, 6, 28, 5
  03101c0  fsel 6, 11, 28, 2
  03101c4  fsel 10, 12, 28, 1
  03101c8  fsel 3, 13, 3, 5
  03101cc  fsel 2, 0, 6, 2
  03101d0  fsel 1, 4, 10, 1
  03101d4  fadds 3, 3, 9
  03101d8  fadds 2, 2, 8
  03101dc  fadds 1, 1, 7
  03101e0  stfs 3, 200(1)
  03101e4  stfs 2, 196(1)
  03101e8  stfs 1, 192(1)
  03101ec  bl 0xfe484
  03101f0  nop
  03101f4  ori 5, 3, 0
  03101f8  addic 4, 1, 192
  03101fc  ori 3, 25, 0
  0310200  li 6, 1
  0310204  li 7, 0
  0310208  bl 0x20bb70
  031020c  nop
  0310210  addic 29, 29, 1
  0310214  cmpwi 29, 4
  0310218  bt 0, 0x31001c
  031021c  fmr 1, 24
  0310220  stw 23, 160(1)
  0310224  stw 23, 164(1)
  0310228  fmr 2, 25
  031022c  stw 23, 168(1)
  0310230  stw 23, 172(1)
  0310234  bl 0xfcbe8
  0310238  nop
  031023c  stfs 1, 160(1)
  0310240  fmr 2, 25
  0310244  fmr 1, 24
  0310248  bl 0xfcbe8
  031024c  nop
  0310250  stfs 1, 164(1)
  0310254  fmr 1, 24
  0310258  fmr 2, 25
  031025c  bl 0xfcbe8
  0310260  nop
  0310264  lis 24, 149
  0310268  lfs 2, 20(31)
  031026c  lfs 3, 16(31)
  0310270  addic 24, 24, 5056
  0310274  lfs 4, 24(31)
  0310278  lfs 5, 324(24)
  031027c  lfs 6, 320(24)
  0310280  fsubs 2, 5, 2
  0310284  lfs 5, 328(24)
  0310288  fsubs 3, 6, 3
  031028c  fsubs 4, 5, 4
  0310290  lfs 6, 164(1)
  0310294  lfs 7, 160(1)
  0310298  fmuls 10, 6, 6
  031029c  fmuls 5, 2, 2
  03102a0  lis 3, 49
  03102a4  stfs 1, 168(1)
  03102a8  addi 3, 3, -2160
  03102ac  fmadds 10, 7, 7, 10
  03102b0  lfs 8, -3052(27)
  03102b4  fmadds 5, 3, 3, 5
  03102b8  lfs 9, 56(3)
  03102bc  fmadds 10, 1, 1, 10
  03102c0  fmadds 25, 4, 4, 5
  03102c4  fsqrts 10, 10
  03102c8  fsqrts 25, 25
  03102cc  fsub 12, 28, 10
  03102d0  fsub 13, 28, 10
  03102d4  fsub 30, 28, 10
  03102d8  fsub 0, 10, 28
  03102dc  fsub 31, 10, 28
  03102e0  fmadds 4, 25, 14, 4
  03102e4  fmuls 9, 25, 9
  03102e8  fmuls 11, 25, 27
  03102ec  fmadds 5, 4, 4, 5
  03102f0  fmuls 9, 9, 8
  03102f4  fmuls 11, 11, 8
  03102f8  fsqrts 5, 5
  03102fc  fdivs 9, 9, 10
  0310300  fsub 10, 10, 28
  0310304  fdivs 11, 11, 5
  0310308  fsub 29, 28, 5
  031030c  fsub 27, 5, 28
  0310310  fsub 24, 28, 5
  0310314  fsub 23, 28, 5
  0310318  fsub 21, 5, 28
  031031c  fsub 5, 5, 28
  0310320  fmuls 6, 6, 9
  0310324  fmuls 7, 7, 9
  0310328  fmuls 1, 1, 9
  031032c  fsel 9, 12, 28, 6
  0310330  fsel 12, 13, 28, 7
  0310334  fsel 13, 30, 28, 1
  0310338  fsel 6, 0, 9, 6
  031033c  fsel 9, 10, 13, 1
  0310340  fsel 7, 31, 12, 7
  0310344  stfs 7, 160(1)
  0310348  stfs 6, 164(1)
  031034c  fmuls 1, 2, 11
  0310350  fmuls 2, 3, 11
  0310354  fmuls 3, 4, 11
  0310358  stfs 9, 168(1)
  031035c  fsel 4, 29, 28, 1
  0310360  fsel 10, 24, 28, 2
  0310364  fsel 11, 23, 28, 3
  0310368  fsel 1, 27, 4, 1
  031036c  fsel 27, 21, 10, 2
  0310370  fsel 2, 5, 11, 3
  0310374  fadds 1, 6, 1
  0310378  fadds 27, 7, 27
  031037c  fadds 2, 9, 2
  0310380  fmuls 3, 1, 1
  0310384  stfs 27, 160(1)
  0310388  stfs 1, 164(1)
  031038c  stfs 2, 168(1)
  0310390  fmadds 3, 27, 27, 3
  0310394  fmadds 4, 2, 2, 3
  0310398  fmuls 3, 8, 19
  031039c  fsqrts 4, 4
  03103a0  fcmpu 0, 3, 4
  03103a4  cror 6, 1, 2
  03103a8  bt 6, 0x3103c8
  03103ac  fdivs 3, 3, 4
  03103b0  fmuls 4, 27, 3
  03103b4  fmuls 1, 1, 3
  03103b8  fmuls 2, 2, 3
  03103bc  stfs 4, 160(1)
  03103c0  stfs 1, 164(1)
  03103c4  stfs 2, 168(1)
  03103c8  lfs 1, -3056(26)
  03103cc  fmuls 2, 1, 20
  03103d0  fmuls 1, 1, 18
  03103d4  fctiwz 2, 2
  03103d8  fctiwz 1, 1
  03103dc  stfd 2, 352(1)
  03103e0  lwz 3, 356(1)
  03103e4  stfd 1, 352(1)
  03103e8  lwz 4, 356(1)
  03103ec  extsw 3, 3
  03103f0  extsw 4, 4
  03103f4  bl 0xfe484
  03103f8  nop
  03103fc  ori 5, 3, 0
  0310400  ori 3, 25, 0
  0310404  addic 4, 1, 160
  0310408  li 6, 1
  031040c  li 7, 0
  0310410  bl 0x20bb70
  0310414  nop
  0310418  lis 3, 49
  031041c  li 29, 10
  0310420  addi 3, 3, -2160
  0310424  lfs 20, 60(3)
  0310428  fcmpu 0, 25, 20
  031042c  cror 6, 1, 2
  0310430  bt 6, 0x310444
  0310434  fmr 1, 25
  0310438  bl 0x502758
  031043c  nop
  0310440  addic 29, 3, 2
  0310444  lis 3, 49
  0310448  cmpwi 29, 0
  031044c  addi 3, 3, -2160
  0310450  lfs 1, 64(3)
  0310454  fsubs 2, 1, 25
  0310458  fsub 1, 25, 1
  031045c  fsel 28, 1, 28, 2
  0310460  bf 1, 0x310600
  0310464  lis 3, 49
  0310468  ori 28, 23, 0
  031046c  addi 3, 3, -2160
  0310470  lfs 31, 68(3)
  0310474  lfs 30, 72(3)
  0310478  lfs 29, 76(3)
  031047c  lfs 27, 80(3)
  0310480  lfs 24, 84(3)
  0310484  fmr 1, 20
  0310488  fmr 2, 19
  031048c  bl 0xfcbe8
  0310490  nop
  0310494  lis 3, 20224
  0310498  lfs 2, -3052(27)
  031049c  lis 4, 20224
  03104a0  ori 3, 3, 36863
  03104a4  lis 6, 20224
  03104a8  fmuls 3, 2, 28
  03104ac  ori 4, 4, 32767
  03104b0  ori 6, 6, 28671
  03104b4  stw 3, 304(1)
  03104b8  lis 5, 12032
  03104bc  stw 3, 308(1)
  03104c0  lis 7, 12032
  03104c4  lis 3, 12287
  03104c8  stw 4, 312(1)
  03104cc  lis 8, 12032
  03104d0  stw 6, 316(1)
  03104d4  ori 3, 3, 65535
  03104d8  ori 4, 5, 24447
  03104dc  ori 5, 7, 20351
  03104e0  lis 6, 12032
  03104e4  stw 3, 320(1)
  03104e8  ori 8, 8, 16255
  03104ec  stw 3, 324(1)
  03104f0  ori 6, 6, 79
  03104f4  lis 7, 12032
  03104f8  stw 4, 328(1)
  03104fc  lis 4, 16128
  0310500  stw 5, 332(1)
  0310504  stw 8, 336(1)
  0310508  li 3, 6
  031050c  stw 6, 340(1)
  0310510  fmsubs 23, 1, 2, 3
  0310514  stw 7, 344(1)
  0310518  stw 4, 348(1)
  031051c  bl 0xfc620
  0310520  nop
  0310524  sldi 4, 3, 2
  0310528  li 3, 6
  031052c  addc 4, 4, 1
  0310530  clrldi 4, 4, 32
  0310534  lwz 4, 304(4)
  0310538  extsw 22, 4
  031053c  bl 0xfc620
  0310540  nop
  0310544  lfs 1, -3056(26)
  0310548  sldi 3, 3, 2
  031054c  fmuls 2, 1, 30
  0310550  addc 3, 3, 1
  0310554  fmuls 1, 1, 29
  0310558  clrldi 3, 3, 32
  031055c  lwz 3, 328(3)
  0310560  extsw 21, 3
  0310564  fctiwz 2, 2
  0310568  fctiwz 1, 1
  031056c  stfd 2, 352(1)
  0310570  lwz 3, 356(1)
  0310574  stfd 1, 352(1)
  0310578  lwz 4, 356(1)
  031057c  extsw 3, 3
  0310580  extsw 4, 4
  0310584  bl 0xfe484
  0310588  nop
  031058c  lfs 1, -3056(26)
  0310590  ori 20, 3, 0
  0310594  fmuls 2, 1, 27
  0310598  fmuls 1, 1, 24
  031059c  fctiwz 2, 2
  03105a0  fctiwz 1, 1
  03105a4  stfd 2, 352(1)
  03105a8  lwz 3, 356(1)
  03105ac  stfd 1, 352(1)
  03105b0  extsw 3, 3
  03105b4  lwz 4, 356(1)
  03105b8  extsw 4, 4
  03105bc  bl 0xfe484
  03105c0  nop
  03105c4  ori 9, 3, 0
  03105c8  std 23, 112(1)
  03105cc  ori 8, 20, 0
  03105d0  fmr 1, 31
  03105d4  addic 4, 1, 144
  03105d8  fmr 2, 23
  03105dc  ori 3, 25, 0
  03105e0  std 23, 120(1)
  03105e4  ori 5, 22, 0
  03105e8  ori 6, 21, 0
  03105ec  bl 0x123390
  03105f0  nop
  03105f4  addic 28, 28, 1
  03105f8  cmpw 28, 29
  03105fc  bt 0, 0x310484
  0310600  lis 3, 161
  0310604  lis 4, 49
  0310608  lis 5, 16243
  031060c  addi 4, 4, -2160
  0310610  lwz 3, 1812(3)
  0310614  srawi 6, 3, 31
  0310618  lfs 31, 88(4)
  031061c  srwi 7, 6, 1
  0310620  ori 4, 5, 13107
  0310624  xor 3, 7, 3
  0310628  subc 3, 3, 6
  031062c  cmpw 3, 4
  0310630  bf 0, 0x3106e4
  0310634  lis 3, 49
  0310638  addi 3, 3, -2160
  031063c  lfs 1, 92(3)
  0310640  fcmpu 0, 25, 1
  0310644  cror 6, 0, 2
  0310648  bt 6, 0x3106e4
  031064c  lis 3, 49
  0310650  lfs 2, -3056(26)
  0310654  li 27, 32
  0310658  addi 29, 3, -2160
  031065c  addic 28, 1, 144
  0310660  fmr 1, 31
  0310664  li 8, 127
  0310668  ori 3, 31, 0
  031066c  ori 4, 25, 0
  0310670  lfs 3, 72(29)
  0310674  std 27, 112(1)
  0310678  ori 5, 28, 0
  031067c  fmuls 2, 2, 3
  0310680  li 9, 127
  0310684  li 10, 127
  0310688  fctiwz 2, 2
  031068c  stfd 2, 352(1)
  0310690  lwz 7, 356(1)
  0310694  extsw 7, 7
  0310698  bl 0x1d4d88
  031069c  nop
  03106a0  lfs 2, 96(29)
  03106a4  lfs 3, -3056(26)
  03106a8  ori 3, 31, 0
  03106ac  std 27, 112(1)
  03106b0  fmr 1, 31
  03106b4  fmuls 2, 3, 2
  03106b8  ori 4, 25, 0
  03106bc  ori 5, 28, 0
  03106c0  li 8, 127
  03106c4  li 9, 32
  03106c8  li 10, 0
  03106cc  fctiwz 2, 2
  03106d0  stfd 2, 352(1)
  03106d4  lwz 7, 356(1)
  03106d8  extsw 7, 7
  03106dc  bl 0x1d4d88
  03106e0  nop
  03106e4  lis 3, 49
  03106e8  lfs 2, -3056(26)
  03106ec  li 6, 48
  03106f0  addi 29, 3, -2160
  03106f4  addic 28, 1, 144
  03106f8  fmr 1, 31
  03106fc  li 8, 127
  0310700  ori 3, 31, 0
  0310704  ori 4, 25, 0
  0310708  lfs 3, 76(29)
  031070c  std 6, 112(1)
  0310710  ori 5, 28, 0
  0310714  fmuls 2, 2, 3
  0310718  li 9, 64
  031071c  li 10, 0
  0310720  fctiwz 2, 2
  0310724  stfd 2, 352(1)
  0310728  lwz 7, 356(1)
  031072c  extsw 7, 7
  0310730  bl 0x1d4d88
  0310734  nop
  0310738  lfs 2, 100(29)
  031073c  lfs 3, -3056(26)
  0310740  li 6, 64
  0310744  fmr 1, 22
  0310748  ori 3, 31, 0
  031074c  fmuls 2, 3, 2
  0310750  ori 4, 25, 0
  0310754  ori 5, 28, 0
  0310758  std 6, 112(1)
  031075c  li 8, 96
  0310760  li 9, 16
  0310764  li 10, 0
  0310768  fctiwz 2, 2
  031076c  stfd 2, 352(1)
  0310770  lwz 7, 356(1)
  0310774  extsw 7, 7
  0310778  bl 0x1d4d88
  031077c  nop
  0310780  lfs 2, 104(29)
  0310784  lfs 3, -3056(26)
  0310788  li 6, 32
  031078c  li 8, 32
  0310790  fmr 1, 26
  0310794  fmuls 2, 3, 2
  0310798  ori 3, 31, 0
  031079c  ori 4, 25, 0
  03107a0  std 6, 112(1)
  03107a4  ori 5, 28, 0
  03107a8  li 9, 0
  03107ac  li 10, 0
  03107b0  fctiwz 2, 2
  03107b4  stfd 2, 352(1)
  03107b8  lwz 7, 356(1)
  03107bc  extsw 7, 7
  03107c0  bl 0x1d4d88
  03107c4  nop
  03107c8  stw 23, 0(30)
  03107cc  stb 23, 188(31)
  03107d0  li 3, 0
  03107d4  li 4, 0
  03107d8  ori 5, 31, 0
  03107dc  bl 0x15d12c
  03107e0  nop
  03107e4  lfs 1, 108(29)
  03107e8  li 3, -3056
  03107ec  lfs 2, 112(29)
  03107f0  li 4, 80
  03107f4  fsub 1, 25, 1
  03107f8  lfs 3, 116(29)
  03107fc  fmuls 2, 25, 2
  0310800  lfs 4, 120(29)
  0310804  vspltisw 3, -1
  0310808  lvlx 2, 3, 26
  031080c  li 5, 360
  0310810  vslw 3, 3, 3
  0310814  ori 3, 31, 0
  0310818  fsel 1, 1, 3, 2
  031081c  fsubs 1, 4, 1
  0310820  stfs 1, 352(24)
  0310824  lvlx 4, 4, 29
  0310828  vspltw 4, 4, 0
  031082c  vmaddfp 2, 2, 4, 3
  0310830  vctsxs 2, 2, 0
  0310834  vspltw 2, 2, 0
  0310838  stvewx 2, 5, 24
  031083c  bl 0xefb38
  0310840  nop
  0310844  ld 0, 624(1)
  0310848  mtlr 0
  031084c  lfd 14, 464(1)
  0310850  lfd 15, 472(1)
  0310854  lfd 16, 480(1)
  0310858  lfd 17, 488(1)
  031085c  lfd 18, 496(1)
  0310860  lfd 19, 504(1)
  0310864  lfd 20, 512(1)
  0310868  lfd 21, 520(1)
  031086c  lfd 22, 528(1)
  0310870  lfd 23, 536(1)
  0310874  lfd 24, 544(1)
  0310878  lfd 25, 552(1)
  031087c  lfd 26, 560(1)
  0310880  lfd 27, 568(1)
  0310884  lfd 28, 576(1)
  0310888  lfd 29, 584(1)
  031088c  lfd 30, 592(1)
  0310890  lfd 31, 600(1)
  0310894  ld 20, 368(1)
  0310898  ld 21, 376(1)
  031089c  ld 22, 384(1)
  03108a0  ld 23, 392(1)
  03108a4  ld 24, 400(1)
  03108a8  ld 25, 408(1)
  03108ac  ld 26, 416(1)
  03108b0  ld 27, 424(1)
  03108b4  ld 28, 432(1)
  03108b8  ld 29, 440(1)
  03108bc  ld 30, 448(1)
  03108c0  ld 31, 456(1)
  03108c4  addi 1, 1, 608
  03108c8  blr
