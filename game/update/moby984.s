# game/update/moby984.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_004caa88:   # 0x4caa88, 0x98 bytes
  04caa88  stdu 1, -144(1)
  04caa8c  mflr 0
  04caa90  std 0, 160(1)
  04caa94  std 29, 120(1)
  04caa98  ori 29, 3, 0
  04caa9c  std 31, 136(1)
  04caaa0  li 3, 983
  04caaa4  std 30, 128(1)
  04caaa8  ori 31, 5, 0
  04caaac  ori 30, 4, 0
  04caab0  bl 0xefa28
  04caab4  nop
  04caab8  cmpwi 3, 0
  04caabc  bt 2, 0x4cab04
  04caac0  li 4, 255
  04caac4  li 6, 5
  04caac8  li 5, 0
  04caacc  stb 4, 48(3)
  04caad0  lfs 1, 0(30)
  04caad4  stfs 1, 16(3)
  04caad8  lfs 1, 4(30)
  04caadc  lwz 4, 120(3)
  04caae0  stfs 1, 20(3)
  04caae4  lfs 1, 8(30)
  04caae8  stfs 1, 24(3)
  04caaec  lfs 1, 12(30)
  04caaf0  stw 6, 40(4)
  04caaf4  stfs 1, 28(3)
  04caaf8  stw 5, 36(4)
  04caafc  stw 31, 52(4)
  04cab00  stw 29, 32(4)
  04cab04  ld 0, 160(1)
  04cab08  mtlr 0
  04cab0c  ld 29, 120(1)
  04cab10  ld 30, 128(1)
  04cab14  ld 31, 136(1)
  04cab18  addi 1, 1, 144
  04cab1c  blr

FUN_004cab28:   # 0x4cab28, 0xa8 bytes
  04cab28  lfs 2, 0(4)
  04cab2c  lis 6, 77
  04cab30  vspltisw 3, -1
  04cab34  lis 8, 114
  04cab38  stfs 2, 16(3)
  04cab3c  addi 6, 6, -21728
  04cab40  lfs 2, 4(4)
  04cab44  li 9, -3056
  04cab48  stfs 2, 20(3)
  04cab4c  lfs 2, 8(4)
  04cab50  vslw 3, 3, 3
  04cab54  stfs 2, 24(3)
  04cab58  lfs 2, 12(4)
  04cab5c  cmpwi 7, 0
  04cab60  stfs 2, 28(3)
  04cab64  lvlx 2, 0, 6
  04cab68  lvlx 4, 9, 8
  04cab6c  li 6, 40
  04cab70  vspltw 2, 2, 0
  04cab74  lwz 4, 120(3)
  04cab78  vmaddfp 2, 4, 2, 3
  04cab7c  vctsxs 2, 2, 0
  04cab80  vspltw 2, 2, 0
  04cab84  stvewx 2, 6, 4
  04cab88  stfs 1, 36(4)
  04cab8c  bt 2, 0x4cabcc
  04cab90  lbz 6, 32(3)
  04cab94  cmpwi 6, 0
  04cab98  bf 2, 0x4cabcc
  04cab9c  li 6, 1
  04caba0  li 7, 0
  04caba4  stb 6, 32(3)
  04caba8  stw 7, 40(4)
  04cabac  lfs 1, 0(5)
  04cabb0  stfs 1, 0(4)
  04cabb4  lfs 1, 4(5)
  04cabb8  stfs 1, 4(4)
  04cabbc  lfs 1, 8(5)
  04cabc0  stfs 1, 8(4)
  04cabc4  lfs 1, 12(5)
  04cabc8  stfs 1, 12(4)
  04cabcc  blr

M984_004cabd8:   # 0x4cabd8, 0x7f4 bytes
  04cabd8  stdu 1, -1168(1)
  04cabdc  mflr 0
  04cabe0  std 0, 1184(1)
  04cabe4  std 30, 1152(1)
  04cabe8  ori 30, 3, 0
  04cabec  lis 4, 149
  04cabf0  lis 3, 77
  04cabf4  addic 4, 4, 5056
  04cabf8  addi 5, 3, -21552
  04cabfc  lfs 6, 16(30)
  04cac00  lfs 7, 20(30)
  04cac04  std 18, 1056(1)
  04cac08  lfs 1, 320(4)
  04cac0c  li 18, 0
  04cac10  lfs 2, 324(4)
  04cac14  fsubs 1, 1, 6
  04cac18  fsubs 2, 2, 7
  04cac1c  lfs 5, 0(5)
  04cac20  lis 3, 115
  04cac24  addic 3, 3, 22784
  04cac28  fabs 3, 1
  04cac2c  fabs 9, 2
  04cac30  stfs 1, 972(1)
  04cac34  std 31, 1160(1)
  04cac38  stfs 2, 976(1)
  04cac3c  lwz 31, 120(30)
  04cac40  stw 18, 124(1)
  04cac44  fsubs 1, 3, 9
  04cac48  stfs 1, 980(1)
  04cac4c  lwz 6, 972(1)
  04cac50  lfs 1, 972(1)
  04cac54  stw 18, 120(1)
  04cac58  lwz 7, 976(1)
  04cac5c  stw 18, 116(1)
  04cac60  fabs 1, 1
  04cac64  stw 18, 112(1)
  04cac68  lfs 2, 976(1)
  04cac6c  lfs 8, 24(30)
  04cac70  rlwinm 7, 7, 3, 29, 29
  04cac74  lfs 10, 4(5)
  04cac78  fabs 4, 2
  04cac7c  lwz 5, 980(1)
  04cac80  lfs 2, 980(1)
  04cac84  rlwimi 7, 5, 2, 30, 30
  04cac88  fsub 11, 2, 5
  04cac8c  fsub 12, 2, 5
  04cac90  rlwimi 7, 6, 4, 28, 28
  04cac94  ori 5, 3, 0
  04cac98  slwi 6, 7, 2
  04cac9c  rlwimi 5, 7, 2, 26, 28
  04caca0  clrldi 5, 5, 32
  04caca4  fsel 9, 11, 1, 9
  04caca8  lfsx 1, 3, 6
  04cacac  fsel 3, 12, 4, 3
  04cacb0  lfs 2, 4(5)
  04cacb4  fmr 4, 10
  04cacb8  std 29, 1144(1)
  04cacbc  std 28, 1136(1)
  04cacc0  std 27, 1128(1)
  04cacc4  std 26, 1120(1)
  04cacc8  std 25, 1112(1)
  04caccc  std 24, 1104(1)
  04cacd0  std 23, 1096(1)
  04cacd4  std 22, 1088(1)
  04cacd8  std 21, 1080(1)
  04cacdc  std 20, 1072(1)
  04cace0  std 19, 1064(1)
  04cace4  std 17, 1048(1)
  04cace8  fcmpu 0, 9, 5
  04cacec  bt 1, 0x4cacf8
  04cacf0  fmr 1, 5
  04cacf4  b 0x4cae10
  04cacf8  fsubs 10, 3, 9
  04cacfc  fadds 3, 3, 9
  04cad00  addic 5, 1, 16
  04cad04  li 9, 2
  04cad08  addic 7, 5, 1016
  04cad0c  addic 6, 5, 1000
  04cad10  mtctr 9
  04cad14  fdivs 3, 10, 3
  04cad18  fmuls 9, 3, 3
  04cad1c  stfs 3, 1028(1)
  04cad20  stfs 3, 1020(1)
  04cad24  stfs 3, 1024(1)
  04cad28  stfs 3, 1016(1)
  04cad2c  lfs 11, 1028(1)
  04cad30  lfs 12, 1020(1)
  04cad34  lfs 13, 1024(1)
  04cad38  fmuls 10, 9, 9
  04cad3c  fmuls 12, 12, 9
  04cad40  fmuls 11, 11, 10
  04cad44  fmuls 3, 10, 10
  04cad48  fmuls 10, 13, 10
  04cad4c  stfs 12, 1020(1)
  04cad50  fmuls 9, 11, 9
  04cad54  stfs 10, 1024(1)
  04cad58  stfs 9, 1028(1)
  04cad5c  lfs 9, 1000(5)
  04cad60  fmuls 9, 9, 3
  04cad64  stfs 9, 1016(5)
  04cad68  lfs 9, 4(6)
  04cad6c  addic 6, 6, 8
  04cad70  fmuls 9, 9, 3
  04cad74  addic 5, 5, 8
  04cad78  stfs 9, 4(7)
  04cad7c  addic 7, 7, 8
  04cad80  bdnz 0x4cad5c
  04cad84  li 7, 4
  04cad88  ori 5, 1, 0
  04cad8c  mtctr 7
  04cad90  lis 6, 115
  04cad94  addic 7, 5, 1016
  04cad98  addic 6, 6, 22752
  04cad9c  ori 8, 7, 0
  04cada0  lfs 3, 1016(5)
  04cada4  lfs 9, 0(6)
  04cada8  fmuls 3, 3, 9
  04cadac  lfs 9, 4(6)
  04cadb0  addic 6, 6, 8
  04cadb4  stfs 3, 1016(5)
  04cadb8  lfs 3, 4(7)
  04cadbc  addic 5, 5, 8
  04cadc0  fmuls 3, 3, 9
  04cadc4  stfs 3, 4(7)
  04cadc8  addic 7, 7, 8
  04cadcc  bdnz 0x4cada0
  04cadd0  ori 5, 1, 0
  04cadd4  fmr 3, 5
  04cadd8  mtctr 9
  04caddc  lfs 9, 1016(5)
  04cade0  fadds 3, 3, 9
  04cade4  lfs 9, 4(8)
  04cade8  addic 5, 5, 16
  04cadec  lfs 10, 8(8)
  04cadf0  lfs 11, 12(8)
  04cadf4  addic 8, 8, 16
  04cadf8  fadds 3, 3, 9
  04cadfc  fadds 3, 3, 10
  04cae00  fadds 3, 3, 11
  04cae04  bdnz 0x4caddc
  04cae08  fadds 3, 3, 4
  04cae0c  fmadds 1, 3, 1, 2
  04cae10  lfs 2, 324(4)
  04cae14  lfs 3, 320(4)
  04cae18  fsubs 2, 7, 2
  04cae1c  fsubs 3, 6, 3
  04cae20  fmuls 2, 2, 2
  04cae24  fmadds 2, 3, 3, 2
  04cae28  lfs 3, 328(4)
  04cae2c  stfs 1, 120(1)
  04cae30  fsubs 1, 3, 8
  04cae34  fsqrts 2, 2
  04cae38  stfs 1, 964(1)
  04cae3c  fabs 6, 1
  04cae40  fabs 3, 2
  04cae44  stfs 2, 960(1)
  04cae48  lwz 4, 964(1)
  04cae4c  rlwinm 4, 4, 3, 29, 29
  04cae50  fsubs 1, 3, 6
  04cae54  stfs 1, 968(1)
  04cae58  lwz 5, 960(1)
  04cae5c  lfs 1, 960(1)
  04cae60  lfs 2, 964(1)
  04cae64  lwz 6, 968(1)
  04cae68  lfs 7, 968(1)
  04cae6c  fabs 1, 1
  04cae70  rlwimi 4, 6, 2, 30, 30
  04cae74  fsub 8, 7, 5
  04cae78  fabs 2, 2
  04cae7c  fsub 7, 7, 5
  04cae80  rlwimi 4, 5, 4, 28, 28
  04cae84  ori 5, 3, 0
  04cae88  rlwimi 5, 4, 2, 26, 28
  04cae8c  slwi 4, 4, 2
  04cae90  clrldi 5, 5, 32
  04cae94  fsel 6, 8, 1, 6
  04cae98  lfsx 1, 3, 4
  04cae9c  fsel 3, 7, 2, 3
  04caea0  lfs 2, 4(5)
  04caea4  fcmpu 0, 6, 5
  04caea8  bt 1, 0x4caeb0
  04caeac  b 0x4cafc4
  04caeb0  fsubs 7, 3, 6
  04caeb4  fadds 3, 3, 6
  04caeb8  addic 3, 1, 16
  04caebc  li 6, 2
  04caec0  addic 5, 3, 984
  04caec4  addic 4, 3, 968
  04caec8  mtctr 6
  04caecc  fdivs 3, 7, 3
  04caed0  fmuls 6, 3, 3
  04caed4  stfs 3, 996(1)
  04caed8  stfs 3, 988(1)
  04caedc  stfs 3, 992(1)
  04caee0  stfs 3, 984(1)
  04caee4  lfs 8, 996(1)
  04caee8  lfs 9, 988(1)
  04caeec  lfs 10, 992(1)
  04caef0  fmuls 7, 6, 6
  04caef4  fmuls 9, 9, 6
  04caef8  fmuls 8, 8, 7
  04caefc  fmuls 3, 7, 7
  04caf00  fmuls 7, 10, 7
  04caf04  stfs 9, 988(1)
  04caf08  fmuls 6, 8, 6
  04caf0c  stfs 7, 992(1)
  04caf10  stfs 6, 996(1)
  04caf14  lfs 6, 968(3)
  04caf18  fmuls 6, 6, 3
  04caf1c  stfs 6, 984(3)
  04caf20  lfs 6, 4(4)
  04caf24  addic 4, 4, 8
  04caf28  fmuls 6, 6, 3
  04caf2c  addic 3, 3, 8
  04caf30  stfs 6, 4(5)
  04caf34  addic 5, 5, 8
  04caf38  bdnz 0x4caf14
  04caf3c  li 5, 4
  04caf40  ori 3, 1, 0
  04caf44  mtctr 5
  04caf48  lis 4, 115
  04caf4c  addic 5, 3, 984
  04caf50  addic 4, 4, 22752
  04caf54  ori 7, 5, 0
  04caf58  lfs 3, 984(3)
  04caf5c  lfs 6, 0(4)
  04caf60  fmuls 3, 3, 6
  04caf64  lfs 6, 4(4)
  04caf68  addic 4, 4, 8
  04caf6c  stfs 3, 984(3)
  04caf70  lfs 3, 4(5)
  04caf74  addic 3, 3, 8
  04caf78  fmuls 3, 3, 6
  04caf7c  stfs 3, 4(5)
  04caf80  addic 5, 5, 8
  04caf84  bdnz 0x4caf58
  04caf88  ori 3, 1, 0
  04caf8c  mtctr 6
  04caf90  lfs 3, 984(3)
  04caf94  fadds 3, 5, 3
  04caf98  addic 3, 3, 16
  04caf9c  lfs 5, 4(7)
  04cafa0  lfs 6, 8(7)
  04cafa4  lfs 7, 12(7)
  04cafa8  addic 7, 7, 16
  04cafac  fadds 3, 3, 5
  04cafb0  fadds 5, 3, 6
  04cafb4  fadds 5, 5, 7
  04cafb8  bdnz 0x4caf90
  04cafbc  fadds 5, 5, 4
  04cafc0  fmadds 5, 5, 1, 2
  04cafc4  fneg 1, 5
  04cafc8  addic 29, 1, 112
  04cafcc  addic 3, 1, 128
  04cafd0  ori 4, 29, 0
  04cafd4  stfs 1, 116(1)
  04cafd8  bl 0x500ca4
  04cafdc  nop
  04cafe0  addic 3, 1, 192
  04cafe4  ori 4, 29, 0
  04cafe8  bl 0x500ca4
  04cafec  nop
  04caff0  lfs 1, 36(31)
  04caff4  lfs 2, 208(1)
  04caff8  lfs 3, 212(1)
  04caffc  fmuls 2, 2, 1
  04cb000  lfs 4, 216(1)
  04cb004  fmuls 3, 3, 1
  04cb008  fmuls 1, 4, 1
  04cb00c  lfs 4, 224(1)
  04cb010  addic 3, 1, 256
  04cb014  lfs 5, 228(1)
  04cb018  ori 4, 29, 0
  04cb01c  lfs 6, 232(1)
  04cb020  lfs 7, 16(30)
  04cb024  lfs 8, 20(30)
  04cb028  stfs 2, 208(1)
  04cb02c  stfs 3, 212(1)
  04cb030  stfs 1, 216(1)
  04cb034  lfs 1, 36(31)
  04cb038  stfs 7, 176(1)
  04cb03c  fmuls 2, 4, 1
  04cb040  fmuls 3, 5, 1
  04cb044  fmuls 1, 6, 1
  04cb048  lfs 4, 24(30)
  04cb04c  stfs 8, 180(1)
  04cb050  lfs 5, 28(30)
  04cb054  stfs 4, 184(1)
  04cb058  stfs 5, 188(1)
  04cb05c  stfs 7, 240(1)
  04cb060  stfs 8, 244(1)
  04cb064  stfs 2, 224(1)
  04cb068  stfs 3, 228(1)
  04cb06c  stfs 1, 232(1)
  04cb070  stfs 4, 248(1)
  04cb074  stfs 5, 252(1)
  04cb078  lfs 1, 44(31)
  04cb07c  stfs 1, 112(1)
  04cb080  bl 0x500ca4
  04cb084  nop
  04cb088  lfs 1, 36(31)
  04cb08c  lfs 2, 272(1)
  04cb090  lfs 3, 276(1)
  04cb094  fmuls 2, 2, 1
  04cb098  lfs 4, 280(1)
  04cb09c  fmuls 3, 3, 1
  04cb0a0  fmuls 1, 4, 1
  04cb0a4  lfs 4, 288(1)
  04cb0a8  addic 3, 1, 320
  04cb0ac  lfs 5, 292(1)
  04cb0b0  ori 4, 29, 0
  04cb0b4  lfs 6, 296(1)
  04cb0b8  lfs 7, 16(30)
  04cb0bc  lfs 8, 20(30)
  04cb0c0  stfs 2, 272(1)
  04cb0c4  stfs 3, 276(1)
  04cb0c8  stfs 1, 280(1)
  04cb0cc  lfs 1, 36(31)
  04cb0d0  stfs 7, 304(1)
  04cb0d4  fmuls 2, 4, 1
  04cb0d8  fmuls 3, 5, 1
  04cb0dc  fmuls 1, 6, 1
  04cb0e0  lfs 4, 24(30)
  04cb0e4  stfs 8, 308(1)
  04cb0e8  lfs 5, 28(30)
  04cb0ec  stfs 4, 312(1)
  04cb0f0  stfs 5, 316(1)
  04cb0f4  stfs 2, 288(1)
  04cb0f8  stfs 3, 292(1)
  04cb0fc  stfs 1, 296(1)
  04cb100  lfs 1, 48(31)
  04cb104  stfs 1, 112(1)
  04cb108  bl 0x500ca4
  04cb10c  nop
  04cb110  lfs 1, 36(31)
  04cb114  lfs 2, 336(1)
  04cb118  ori 27, 18, 0
  04cb11c  lfs 3, 340(1)
  04cb120  ori 19, 1, 0
  04cb124  fmuls 2, 2, 1
  04cb128  lfs 4, 344(1)
  04cb12c  fmuls 3, 3, 1
  04cb130  ori 26, 27, 0
  04cb134  fmuls 1, 4, 1
  04cb138  addic 17, 19, 384
  04cb13c  lfs 4, 352(1)
  04cb140  lfs 5, 356(1)
  04cb144  lfs 6, 360(1)
  04cb148  lfs 7, 16(30)
  04cb14c  lfs 8, 20(30)
  04cb150  stfs 2, 336(1)
  04cb154  stfs 3, 340(1)
  04cb158  stfs 1, 344(1)
  04cb15c  lfs 1, 36(31)
  04cb160  stfs 7, 368(1)
  04cb164  fmuls 2, 4, 1
  04cb168  fmuls 3, 5, 1
  04cb16c  fmuls 1, 6, 1
  04cb170  lfs 4, 24(30)
  04cb174  stfs 8, 372(1)
  04cb178  lfs 5, 28(30)
  04cb17c  stfs 4, 376(1)
  04cb180  ori 30, 26, 0
  04cb184  stfs 5, 380(1)
  04cb188  stfs 2, 352(1)
  04cb18c  stfs 3, 356(1)
  04cb190  stfs 1, 360(1)
  04cb194  lis 3, 143
  04cb198  addic 3, 3, 20284
  04cb19c  lwzx 3, 3, 27
  04cb1a0  extsw 3, 3
  04cb1a4  bl 0x685c4
  04cb1a8  nop
  04cb1ac  std 3, 504(19)
  04cb1b0  lis 9, 0
  04cb1b4  li 3, 0
  04cb1b8  li 4, 0
  04cb1bc  li 5, 1
  04cb1c0  li 6, 1
  04cb1c4  li 7, 1
  04cb1c8  li 8, 0
  04cb1cc  ori 9, 9, 65424
  04cb1d0  bl 0x502fd4
  04cb1d4  nop
  04cb1d8  std 3, 512(19)
  04cb1dc  li 3, 0
  04cb1e0  li 4, 0
  04cb1e4  li 5, 0
  04cb1e8  li 6, 0
  04cb1ec  li 7, 0
  04cb1f0  li 8, 0
  04cb1f4  bl 0x502f08
  04cb1f8  nop
  04cb1fc  std 3, 496(19)
  04cb200  lis 4, 270
  04cb204  lis 3, 270
  04cb208  lis 5, 143
  04cb20c  lis 6, 143
  04cb210  li 7, 128
  04cb214  lwz 8, 18404(3)
  04cb218  lwz 3, 18400(4)
  04cb21c  lwz 4, 20260(5)
  04cb220  lwz 6, 20264(6)
  04cb224  ori 5, 8, 0
  04cb228  bl 0x502ea8
  04cb22c  nop
  04cb230  std 3, 520(19)
  04cb234  lis 3, 143
  04cb238  lis 25, 143
  04cb23c  addic 3, 3, 20336
  04cb240  ori 23, 19, 0
  04cb244  lis 24, 143
  04cb248  lis 28, 143
  04cb24c  addc 20, 3, 26
  04cb250  ori 29, 18, 0
  04cb254  addic 25, 25, 20300
  04cb258  ori 22, 23, 0
  04cb25c  addic 24, 24, 20304
  04cb260  ori 21, 17, 0
  04cb264  addic 28, 28, 20268
  04cb268  clrldi 20, 20, 32
  04cb26c  lfs 1, 0(25)
  04cb270  cmpwi 30, 0
  04cb274  lfs 2, 0(24)
  04cb278  stfs 1, 464(23)
  04cb27c  stfs 2, 468(23)
  04cb280  bf 2, 0x4cb2a0
  04cb284  lwzx 4, 28, 27
  04cb288  lfs 1, 36(31)
  04cb28c  clrlwi 3, 4, 8
  04cb290  extsw 4, 4
  04cb294  bl 0x5027bc
  04cb298  nop
  04cb29c  b 0x4cb2a4
  04cb2a0  lwzx 3, 28, 27
  04cb2a4  stw 3, 448(22)
  04cb2a8  addic 29, 29, 1
  04cb2ac  lfs 1, 0(20)
  04cb2b0  addic 25, 25, 8
  04cb2b4  cmpwi 29, 4
  04cb2b8  stfs 1, 0(21)
  04cb2bc  lfs 1, 4(20)
  04cb2c0  addic 23, 23, 8
  04cb2c4  addic 24, 24, 8
  04cb2c8  stfs 1, 4(21)
  04cb2cc  lfs 1, 8(20)
  04cb2d0  addic 22, 22, 4
  04cb2d4  stfs 1, 8(21)
  04cb2d8  lfs 1, 12(20)
  04cb2dc  addic 20, 20, 16
  04cb2e0  stfs 1, 12(21)
  04cb2e4  addic 21, 21, 16
  04cb2e8  bt 0, 0x4cb26c
  04cb2ec  addic 30, 30, 1
  04cb2f0  addic 27, 27, 4
  04cb2f4  cmpwi 30, 4
  04cb2f8  addic 26, 26, 64
  04cb2fc  addic 17, 17, 144
  04cb300  addic 19, 19, 144
  04cb304  bt 0, 0x4cb194
  04cb308  lis 4, 161
  04cb30c  addic 3, 1, 384
  04cb310  addic 31, 4, 24396
  04cb314  addic 4, 1, 128
  04cb318  li 5, 0
  04cb31c  li 7, 9
  04cb320  lwz 6, 28(31)
  04cb324  bl 0x72280
  04cb328  nop
  04cb32c  addic 3, 1, 528
  04cb330  lwz 6, 28(31)
  04cb334  addic 4, 1, 192
  04cb338  li 5, 0
  04cb33c  li 7, 9
  04cb340  bl 0x72280
  04cb344  nop
  04cb348  addic 3, 1, 672
  04cb34c  lwz 6, 28(31)
  04cb350  addic 4, 1, 256
  04cb354  li 5, 0
  04cb358  li 7, 9
  04cb35c  bl 0x72280
  04cb360  nop
  04cb364  addic 3, 1, 816
  04cb368  lwz 6, 28(31)
  04cb36c  addic 4, 1, 320
  04cb370  li 5, 0
  04cb374  li 7, 9
  04cb378  bl 0x72280
  04cb37c  nop
  04cb380  ld 0, 1184(1)
  04cb384  mtlr 0
  04cb388  ld 17, 1048(1)
  04cb38c  ld 18, 1056(1)
  04cb390  ld 19, 1064(1)
  04cb394  ld 20, 1072(1)
  04cb398  ld 21, 1080(1)
  04cb39c  ld 22, 1088(1)
  04cb3a0  ld 23, 1096(1)
  04cb3a4  ld 24, 1104(1)
  04cb3a8  ld 25, 1112(1)
  04cb3ac  ld 26, 1120(1)
  04cb3b0  ld 27, 1128(1)
  04cb3b4  ld 28, 1136(1)
  04cb3b8  ld 29, 1144(1)
  04cb3bc  ld 30, 1152(1)
  04cb3c0  ld 31, 1160(1)
  04cb3c4  addi 1, 1, 1168
  04cb3c8  blr

M984_004cb3e8:   # 0x4cb3e8, 0x538 bytes
  04cb3e8  stdu 1, -416(1)
  04cb3ec  mflr 0
  04cb3f0  std 0, 432(1)
  04cb3f4  stfd 18, 304(1)
  04cb3f8  stfd 19, 312(1)
  04cb3fc  stfd 20, 320(1)
  04cb400  stfd 21, 328(1)
  04cb404  stfd 22, 336(1)
  04cb408  stfd 23, 344(1)
  04cb40c  stfd 24, 352(1)
  04cb410  stfd 25, 360(1)
  04cb414  stfd 26, 368(1)
  04cb418  stfd 27, 376(1)
  04cb41c  stfd 28, 384(1)
  04cb420  stfd 29, 392(1)
  04cb424  stfd 30, 400(1)
  04cb428  stfd 31, 408(1)
  04cb42c  std 31, 296(1)
  04cb430  ori 31, 3, 0
  04cb434  li 3, 11
  04cb438  std 30, 288(1)
  04cb43c  lis 4, 77
  04cb440  std 29, 280(1)
  04cb444  std 28, 272(1)
  04cb448  std 27, 264(1)
  04cb44c  std 26, 256(1)
  04cb450  addi 30, 4, -19508
  04cb454  bl 0x685c4
  04cb458  nop
  04cb45c  std 3, 232(1)
  04cb460  li 3, 0
  04cb464  li 4, 2
  04cb468  li 5, 0
  04cb46c  li 6, 1
  04cb470  li 7, 128
  04cb474  bl 0x502ea8
  04cb478  nop
  04cb47c  std 3, 248(1)
  04cb480  li 3, 0
  04cb484  lis 9, 0
  04cb488  li 4, 0
  04cb48c  li 5, 1
  04cb490  li 6, 1
  04cb494  li 7, 1
  04cb498  li 8, 0
  04cb49c  ori 9, 9, 65424
  04cb4a0  bl 0x502fd4
  04cb4a4  nop
  04cb4a8  std 3, 240(1)
  04cb4ac  li 4, 0
  04cb4b0  li 3, 0
  04cb4b4  li 5, 0
  04cb4b8  li 6, 0
  04cb4bc  li 7, 0
  04cb4c0  li 8, 0
  04cb4c4  bl 0x502f08
  04cb4c8  nop
  04cb4cc  lis 4, 149
  04cb4d0  lfs 30, 20(31)
  04cb4d4  addic 4, 4, 5056
  04cb4d8  lfs 31, 16(31)
  04cb4dc  lfs 2, 324(4)
  04cb4e0  lfs 1, 320(4)
  04cb4e4  fsubs 3, 2, 30
  04cb4e8  fsubs 4, 1, 31
  04cb4ec  lfs 6, 328(4)
  04cb4f0  lfs 29, 24(31)
  04cb4f4  fsubs 7, 6, 29
  04cb4f8  std 3, 224(1)
  04cb4fc  lfs 8, 4(30)
  04cb500  fmuls 5, 3, 3
  04cb504  lfs 24, 0(30)
  04cb508  lfs 25, 332(4)
  04cb50c  lfs 9, 8(30)
  04cb510  fmadds 5, 4, 4, 5
  04cb514  fmadds 5, 7, 7, 5
  04cb518  fmr 23, 24
  04cb51c  fsqrts 5, 5
  04cb520  fmr 22, 23
  04cb524  fmr 21, 22
  04cb528  fdivs 8, 8, 5
  04cb52c  fsub 10, 24, 5
  04cb530  fsub 11, 5, 24
  04cb534  fsub 12, 24, 5
  04cb538  fsub 13, 24, 5
  04cb53c  fsub 0, 5, 24
  04cb540  fsub 28, 5, 24
  04cb544  fmr 5, 9
  04cb548  fmuls 3, 3, 8
  04cb54c  fmuls 4, 4, 8
  04cb550  fmuls 7, 7, 8
  04cb554  fsel 8, 10, 24, 3
  04cb558  fsel 9, 12, 24, 4
  04cb55c  fsel 10, 13, 24, 7
  04cb560  fsel 3, 11, 8, 3
  04cb564  fsel 4, 0, 9, 4
  04cb568  fsel 7, 28, 10, 7
  04cb56c  fadds 30, 3, 30
  04cb570  fadds 31, 4, 31
  04cb574  fadds 29, 7, 29
  04cb578  fsubs 2, 2, 30
  04cb57c  fsubs 1, 1, 31
  04cb580  fsubs 3, 6, 29
  04cb584  fmuls 4, 2, 2
  04cb588  fmadds 4, 1, 1, 4
  04cb58c  fmadds 4, 3, 3, 4
  04cb590  fsqrts 6, 4
  04cb594  fcmpu 0, 6, 21
  04cb598  bt 2, 0x4cb5e8
  04cb59c  frsqrte 6, 4
  04cb5a0  lis 3, 77
  04cb5a4  addi 3, 3, -19508
  04cb5a8  lfs 7, 12(3)
  04cb5ac  fmuls 8, 4, 6
  04cb5b0  fmuls 9, 7, 6
  04cb5b4  fnmsubs 8, 8, 6, 5
  04cb5b8  fmadds 6, 8, 9, 6
  04cb5bc  fmuls 8, 4, 6
  04cb5c0  fmuls 9, 7, 6
  04cb5c4  fnmsubs 8, 8, 6, 5
  04cb5c8  fmadds 6, 8, 9, 6
  04cb5cc  fmuls 4, 4, 6
  04cb5d0  fmuls 7, 7, 6
  04cb5d4  fnmsubs 4, 4, 6, 5
  04cb5d8  fmadds 23, 4, 7, 6
  04cb5dc  fmuls 21, 1, 23
  04cb5e0  fmuls 22, 2, 23
  04cb5e4  fmuls 23, 3, 23
  04cb5e8  lis 3, 151
  04cb5ec  addic 3, 3, -25376
  04cb5f0  lfs 1, 656(3)
  04cb5f4  lfs 2, 664(3)
  04cb5f8  fmuls 3, 1, 23
  04cb5fc  lfs 4, 660(3)
  04cb600  fmuls 5, 2, 22
  04cb604  fmuls 6, 4, 21
  04cb608  lis 3, 77
  04cb60c  addi 3, 3, -19508
  04cb610  fmsubs 3, 2, 21, 3
  04cb614  fmsubs 4, 4, 23, 5
  04cb618  fmsubs 5, 1, 22, 6
  04cb61c  lfs 7, 16(3)
  04cb620  lis 4, 143
  04cb624  fmuls 1, 3, 3
  04cb628  lwz 4, 21104(4)
  04cb62c  stw 4, 188(1)
  04cb630  fmadds 1, 4, 4, 1
  04cb634  stw 4, 184(1)
  04cb638  stw 4, 180(1)
  04cb63c  stw 4, 176(1)
  04cb640  lfs 2, 20(3)
  04cb644  fmadds 1, 5, 5, 1
  04cb648  fsqrts 6, 1
  04cb64c  fmr 1, 24
  04cb650  fdivs 7, 7, 6
  04cb654  fsub 8, 24, 6
  04cb658  fsub 9, 24, 6
  04cb65c  fsub 10, 24, 6
  04cb660  fsub 20, 6, 24
  04cb664  fsub 19, 6, 24
  04cb668  fsub 18, 6, 24
  04cb66c  fmuls 4, 4, 7
  04cb670  fmuls 3, 3, 7
  04cb674  fmuls 5, 5, 7
  04cb678  fsel 6, 8, 24, 4
  04cb67c  fsel 7, 9, 24, 3
  04cb680  fsel 8, 10, 24, 5
  04cb684  fsel 20, 20, 6, 4
  04cb688  fsel 19, 19, 7, 3
  04cb68c  fsel 18, 18, 8, 5
  04cb690  fmuls 26, 22, 20
  04cb694  fmuls 28, 23, 19
  04cb698  fmuls 27, 21, 18
  04cb69c  fmsubs 26, 21, 19, 26
  04cb6a0  fmsubs 28, 22, 18, 28
  04cb6a4  fmsubs 27, 23, 20, 27
  04cb6a8  bl 0xfe4f0
  04cb6ac  nop
  04cb6b0  lis 3, 143
  04cb6b4  lis 4, 143
  04cb6b8  lis 30, 143
  04cb6bc  addic 4, 4, 21072
  04cb6c0  addic 31, 1, 112
  04cb6c4  lfs 2, 21112(3)
  04cb6c8  ori 28, 4, 0
  04cb6cc  fadds 1, 2, 1
  04cb6d0  addic 30, 30, 21008
  04cb6d4  li 29, 4
  04cb6d8  addic 5, 28, 4
  04cb6dc  ori 3, 1, 0
  04cb6e0  mtctr 29
  04cb6e4  ori 6, 31, 0
  04cb6e8  ori 27, 5, 0
  04cb6ec  ori 7, 30, 0
  04cb6f0  fmuls 2, 1, 20
  04cb6f4  fmuls 3, 1, 19
  04cb6f8  fmuls 4, 1, 18
  04cb6fc  fmuls 5, 1, 25
  04cb700  lfs 6, 0(7)
  04cb704  fmuls 7, 6, 1
  04cb708  stfs 7, 0(6)
  04cb70c  lfs 8, 4(7)
  04cb710  fmuls 9, 8, 1
  04cb714  fmuls 10, 8, 2
  04cb718  fmuls 11, 8, 3
  04cb71c  fmuls 8, 8, 4
  04cb720  stfs 9, 4(6)
  04cb724  fmadds 11, 7, 22, 11
  04cb728  fmadds 9, 7, 21, 10
  04cb72c  lfs 10, 8(7)
  04cb730  fmadds 7, 7, 23, 8
  04cb734  fmuls 10, 10, 1
  04cb738  fmadds 8, 10, 28, 9
  04cb73c  fmadds 9, 10, 27, 11
  04cb740  fmadds 7, 10, 26, 7
  04cb744  stfs 10, 8(6)
  04cb748  lfs 10, 12(7)
  04cb74c  addic 7, 7, 16
  04cb750  fmadds 6, 6, 5, 10
  04cb754  fmadds 8, 10, 31, 8
  04cb758  fmadds 9, 10, 30, 9
  04cb75c  fmadds 7, 10, 29, 7
  04cb760  stfs 6, 12(6)
  04cb764  stfs 8, 0(6)
  04cb768  stfs 9, 4(6)
  04cb76c  stfs 7, 8(6)
  04cb770  lfs 6, 0(4)
  04cb774  addic 6, 6, 16
  04cb778  lfs 7, 0(5)
  04cb77c  addic 4, 4, 8
  04cb780  stfs 6, 192(3)
  04cb784  addic 5, 5, 8
  04cb788  stfs 7, 196(3)
  04cb78c  addic 3, 3, 8
  04cb790  bdnz 0x4cb700
  04cb794  lis 4, 161
  04cb798  addic 3, 1, 112
  04cb79c  addic 26, 4, 24396
  04cb7a0  li 4, 0
  04cb7a4  li 5, 0
  04cb7a8  li 7, 9
  04cb7ac  lwz 6, 28(26)
  04cb7b0  bl 0x72280
  04cb7b4  nop
  04cb7b8  lis 3, 143
  04cb7bc  fmr 1, 24
  04cb7c0  lis 4, 77
  04cb7c4  addi 4, 4, -19508
  04cb7c8  lwz 3, 20932(3)
  04cb7cc  stw 3, 188(1)
  04cb7d0  stw 3, 184(1)
  04cb7d4  stw 3, 180(1)
  04cb7d8  stw 3, 176(1)
  04cb7dc  lfs 2, 24(4)
  04cb7e0  bl 0xfe4f0
  04cb7e4  nop
  04cb7e8  lis 4, 143
  04cb7ec  ori 3, 1, 0
  04cb7f0  mtctr 29
  04cb7f4  lfs 24, 21116(4)
  04cb7f8  lwz 4, 28(26)
  04cb7fc  fadds 24, 24, 1
  04cb800  fmuls 1, 24, 20
  04cb804  fmuls 2, 24, 19
  04cb808  fmuls 3, 24, 18
  04cb80c  fmuls 25, 24, 25
  04cb810  lfs 4, 0(30)
  04cb814  fmuls 5, 4, 24
  04cb818  stfs 5, 0(31)
  04cb81c  lfs 6, 4(30)
  04cb820  fmuls 7, 6, 24
  04cb824  fmuls 8, 6, 1
  04cb828  fmuls 9, 6, 2
  04cb82c  fmuls 6, 6, 3
  04cb830  stfs 7, 4(31)
  04cb834  fmadds 9, 5, 22, 9
  04cb838  fmadds 7, 5, 21, 8
  04cb83c  lfs 8, 8(30)
  04cb840  fmadds 5, 5, 23, 6
  04cb844  fmuls 8, 8, 24
  04cb848  fmadds 6, 8, 28, 7
  04cb84c  fmadds 7, 8, 27, 9
  04cb850  fmadds 5, 8, 26, 5
  04cb854  stfs 8, 8(31)
  04cb858  lfs 8, 12(30)
  04cb85c  addic 30, 30, 16
  04cb860  fmadds 4, 4, 25, 8
  04cb864  fmadds 6, 8, 31, 6
  04cb868  fmadds 7, 8, 30, 7
  04cb86c  fmadds 5, 8, 29, 5
  04cb870  stfs 4, 12(31)
  04cb874  stfs 6, 0(31)
  04cb878  stfs 7, 4(31)
  04cb87c  stfs 5, 8(31)
  04cb880  lfs 4, 0(28)
  04cb884  addic 31, 31, 16
  04cb888  lfs 5, 0(27)
  04cb88c  addic 28, 28, 8
  04cb890  stfs 4, 192(3)
  04cb894  addic 27, 27, 8
  04cb898  stfs 5, 196(3)
  04cb89c  addic 3, 3, 8
  04cb8a0  bdnz 0x4cb810
  04cb8a4  ori 6, 4, 0
  04cb8a8  addic 3, 1, 112
  04cb8ac  li 4, 0
  04cb8b0  li 5, 0
  04cb8b4  li 7, 9
  04cb8b8  bl 0x72280
  04cb8bc  nop
  04cb8c0  ld 0, 432(1)
  04cb8c4  mtlr 0
  04cb8c8  lfd 18, 304(1)
  04cb8cc  lfd 19, 312(1)
  04cb8d0  lfd 20, 320(1)
  04cb8d4  lfd 21, 328(1)
  04cb8d8  lfd 22, 336(1)
  04cb8dc  lfd 23, 344(1)
  04cb8e0  lfd 24, 352(1)
  04cb8e4  lfd 25, 360(1)
  04cb8e8  lfd 26, 368(1)
  04cb8ec  lfd 27, 376(1)
  04cb8f0  lfd 28, 384(1)
  04cb8f4  lfd 29, 392(1)
  04cb8f8  lfd 30, 400(1)
  04cb8fc  lfd 31, 408(1)
  04cb900  ld 26, 256(1)
  04cb904  ld 27, 264(1)
  04cb908  ld 28, 272(1)
  04cb90c  ld 29, 280(1)
  04cb910  ld 30, 288(1)
  04cb914  ld 31, 296(1)
  04cb918  addi 1, 1, 416
  04cb91c  blr

M984_004cb930:   # 0x4cb930, 0x7e4 bytes
  04cb930  stdu 1, -576(1)
  04cb934  mflr 0
  04cb938  std 0, 592(1)
  04cb93c  stfd 21, 488(1)
  04cb940  stfd 22, 496(1)
  04cb944  stfd 23, 504(1)
  04cb948  stfd 24, 512(1)
  04cb94c  stfd 25, 520(1)
  04cb950  stfd 26, 528(1)
  04cb954  stfd 27, 536(1)
  04cb958  stfd 28, 544(1)
  04cb95c  stfd 29, 552(1)
  04cb960  stfd 30, 560(1)
  04cb964  stfd 31, 568(1)
  04cb968  std 31, 480(1)
  04cb96c  lis 6, 143
  04cb970  ori 31, 3, 0
  04cb974  std 28, 456(1)
  04cb978  fmr 24, 3
  04cb97c  ori 28, 5, 0
  04cb980  fmr 21, 2
  04cb984  std 30, 472(1)
  04cb988  lis 5, 77
  04cb98c  ori 30, 9, 0
  04cb990  std 29, 464(1)
  04cb994  lwz 3, 21000(6)
  04cb998  std 27, 448(1)
  04cb99c  ori 29, 4, 0
  04cb9a0  addi 27, 5, -18144
  04cb9a4  std 26, 440(1)
  04cb9a8  std 25, 432(1)
  04cb9ac  std 24, 424(1)
  04cb9b0  std 23, 416(1)
  04cb9b4  std 22, 408(1)
  04cb9b8  extsw 3, 3
  04cb9bc  bl 0x685c4
  04cb9c0  nop
  04cb9c4  std 3, 232(1)
  04cb9c8  li 4, 2
  04cb9cc  li 3, 0
  04cb9d0  li 5, 0
  04cb9d4  li 6, 1
  04cb9d8  li 7, 128
  04cb9dc  bl 0x502ea8
  04cb9e0  nop
  04cb9e4  std 3, 248(1)
  04cb9e8  lis 9, 0
  04cb9ec  li 3, 0
  04cb9f0  li 4, 0
  04cb9f4  li 5, 1
  04cb9f8  li 6, 1
  04cb9fc  li 7, 1
  04cba00  li 8, 0
  04cba04  ori 9, 9, 65424
  04cba08  bl 0x502fd4
  04cba0c  nop
  04cba10  std 3, 240(1)
  04cba14  li 4, 0
  04cba18  li 3, 0
  04cba1c  li 5, 0
  04cba20  li 6, 0
  04cba24  li 7, 0
  04cba28  li 8, 0
  04cba2c  bl 0x502f08
  04cba30  nop
  04cba34  lis 4, 143
  04cba38  std 3, 224(1)
  04cba3c  lis 5, 143
  04cba40  slwi 29, 29, 24
  04cba44  lwz 3, 20928(4)
  04cba48  or 29, 3, 29
  04cba4c  lwz 3, 21004(5)
  04cba50  extsw 3, 3
  04cba54  stw 29, 188(1)
  04cba58  stw 29, 184(1)
  04cba5c  stw 29, 180(1)
  04cba60  stw 29, 176(1)
  04cba64  bl 0x685c4
  04cba68  nop
  04cba6c  lis 4, 143
  04cba70  std 3, 376(1)
  04cba74  ld 5, 248(1)
  04cba78  slwi 28, 28, 24
  04cba7c  li 3, 0
  04cba80  lis 25, 149
  04cba84  lwz 4, 20932(4)
  04cba88  addic 25, 25, 5056
  04cba8c  ld 6, 240(1)
  04cba90  or 28, 4, 28
  04cba94  std 5, 392(1)
  04cba98  ld 4, 224(1)
  04cba9c  std 6, 384(1)
  04cbaa0  lis 5, 16256
  04cbaa4  stw 28, 332(1)
  04cbaa8  stw 28, 328(1)
  04cbaac  stw 28, 324(1)
  04cbab0  stw 28, 320(1)
  04cbab4  std 4, 368(1)
  04cbab8  lfs 22, 0(27)
  04cbabc  lis 4, 270
  04cbac0  stw 3, 336(1)
  04cbac4  stw 3, 340(1)
  04cbac8  stw 3, 344(1)
  04cbacc  lfs 25, 4(27)
  04cbad0  lfs 1, 19556(4)
  04cbad4  stw 3, 356(1)
  04cbad8  stw 5, 348(1)
  04cbadc  stw 5, 352(1)
  04cbae0  fadds 2, 1, 25
  04cbae4  lfs 26, 320(25)
  04cbae8  fadds 3, 1, 25
  04cbaec  stw 5, 360(1)
  04cbaf0  stw 5, 364(1)
  04cbaf4  stfs 1, 192(1)
  04cbaf8  stw 3, 196(1)
  04cbafc  stfs 1, 200(1)
  04cbb00  stw 5, 204(1)
  04cbb04  stw 3, 212(1)
  04cbb08  fmr 1, 26
  04cbb0c  stw 5, 220(1)
  04cbb10  lfs 28, 328(25)
  04cbb14  lfs 27, 324(25)
  04cbb18  stfs 2, 208(1)
  04cbb1c  stfs 3, 216(1)
  04cbb20  lfs 5, 0(31)
  04cbb24  lfs 7, 8(31)
  04cbb28  fmr 3, 28
  04cbb2c  lfs 6, 4(31)
  04cbb30  lfs 2, 24(31)
  04cbb34  fsubs 11, 5, 1
  04cbb38  lfs 4, 16(31)
  04cbb3c  fsubs 9, 2, 7
  04cbb40  lfs 8, 20(31)
  04cbb44  fsubs 4, 4, 5
  04cbb48  fsubs 8, 8, 6
  04cbb4c  fmr 2, 27
  04cbb50  fsubs 10, 7, 3
  04cbb54  fmuls 12, 11, 9
  04cbb58  fsubs 13, 6, 2
  04cbb5c  fmuls 0, 10, 8
  04cbb60  fmsubs 10, 10, 4, 12
  04cbb64  fmuls 4, 13, 4
  04cbb68  fmsubs 9, 13, 9, 0
  04cbb6c  fmuls 12, 10, 10
  04cbb70  fmsubs 11, 11, 8, 4
  04cbb74  lfs 8, 12(31)
  04cbb78  fmadds 12, 9, 9, 12
  04cbb7c  fmadds 12, 11, 11, 12
  04cbb80  fsqrts 4, 12
  04cbb84  fcmpu 0, 4, 22
  04cbb88  bt 2, 0x4cbbcc
  04cbb8c  frsqrte 4, 12
  04cbb90  lis 3, 77
  04cbb94  addi 3, 3, -18144
  04cbb98  lfs 13, 8(3)
  04cbb9c  fmuls 0, 12, 4
  04cbba0  fmuls 31, 13, 4
  04cbba4  fnmsubs 0, 0, 4, 25
  04cbba8  fmadds 4, 0, 31, 4
  04cbbac  fmuls 0, 12, 4
  04cbbb0  fmuls 31, 13, 4
  04cbbb4  fnmsubs 0, 0, 4, 25
  04cbbb8  fmadds 4, 0, 31, 4
  04cbbbc  fmuls 12, 12, 4
  04cbbc0  fmuls 13, 13, 4
  04cbbc4  fnmsubs 12, 12, 4, 25
  04cbbc8  fmadds 4, 12, 13, 4
  04cbbcc  lis 3, 143
  04cbbd0  addic 27, 30, -1
  04cbbd4  li 22, 1
  04cbbd8  cmpwi 27, 1
  04cbbdc  lfs 12, 20936(3)
  04cbbe0  stfs 8, 124(1)
  04cbbe4  fmuls 4, 12, 4
  04cbbe8  stfs 8, 140(1)
  04cbbec  fmadds 8, 9, 4, 5
  04cbbf0  fmadds 12, 10, 4, 6
  04cbbf4  fmadds 13, 11, 4, 7
  04cbbf8  fnmsubs 5, 9, 4, 5
  04cbbfc  fnmsubs 6, 10, 4, 6
  04cbc00  fnmsubs 4, 11, 4, 7
  04cbc04  stfs 8, 112(1)
  04cbc08  stfs 12, 116(1)
  04cbc0c  stfs 13, 120(1)
  04cbc10  stfs 5, 128(1)
  04cbc14  stfs 6, 132(1)
  04cbc18  stfs 4, 136(1)
  04cbc1c  bf 1, 0x4cbde4
  04cbc20  lis 3, 77
  04cbc24  lis 23, 161
  04cbc28  addi 3, 3, -18144
  04cbc2c  addic 26, 31, 16
  04cbc30  addic 24, 30, -2
  04cbc34  addic 23, 23, 24396
  04cbc38  lfs 31, 8(3)
  04cbc3c  lfs 4, 0(26)
  04cbc40  lfs 6, 8(26)
  04cbc44  fsubs 7, 4, 1
  04cbc48  lfs 1, 24(26)
  04cbc4c  lfs 5, 4(26)
  04cbc50  fsubs 3, 6, 3
  04cbc54  fsubs 1, 1, 6
  04cbc58  lfs 8, 16(26)
  04cbc5c  lfs 9, 20(26)
  04cbc60  fsubs 10, 5, 2
  04cbc64  fsubs 2, 8, 4
  04cbc68  fsubs 8, 9, 5
  04cbc6c  cmpwi 1, 22, 1
  04cbc70  fmuls 9, 7, 1
  04cbc74  fmuls 12, 10, 2
  04cbc78  fmuls 11, 3, 8
  04cbc7c  fmsubs 2, 3, 2, 9
  04cbc80  fmsubs 3, 7, 8, 12
  04cbc84  fmsubs 1, 10, 1, 11
  04cbc88  fmuls 7, 2, 2
  04cbc8c  fmadds 9, 1, 1, 7
  04cbc90  lfs 7, 12(26)
  04cbc94  fmadds 9, 3, 3, 9
  04cbc98  fsqrts 8, 9
  04cbc9c  fcmpu 0, 8, 22
  04cbca0  bt 2, 0x4cbcd8
  04cbca4  frsqrte 8, 9
  04cbca8  fmuls 10, 9, 8
  04cbcac  fmuls 11, 8, 31
  04cbcb0  fnmsubs 10, 10, 8, 25
  04cbcb4  fmadds 8, 10, 11, 8
  04cbcb8  fmuls 10, 9, 8
  04cbcbc  fmuls 11, 8, 31
  04cbcc0  fnmsubs 10, 10, 8, 25
  04cbcc4  fmadds 8, 10, 11, 8
  04cbcc8  fmuls 9, 9, 8
  04cbccc  fmuls 10, 8, 31
  04cbcd0  fnmsubs 9, 9, 8, 25
  04cbcd4  fmadds 8, 9, 10, 8
  04cbcd8  lis 3, 143
  04cbcdc  cmpw 6, 22, 24
  04cbce0  lfs 9, 20936(3)
  04cbce4  stfs 7, 156(1)
  04cbce8  fmuls 8, 9, 8
  04cbcec  stfs 7, 172(1)
  04cbcf0  fmadds 7, 1, 8, 4
  04cbcf4  fmadds 9, 2, 8, 5
  04cbcf8  fmadds 10, 3, 8, 6
  04cbcfc  fnmsubs 1, 1, 8, 4
  04cbd00  fnmsubs 2, 2, 8, 5
  04cbd04  fnmsubs 3, 3, 8, 6
  04cbd08  stfs 7, 144(1)
  04cbd0c  stfs 9, 148(1)
  04cbd10  stfs 10, 152(1)
  04cbd14  stfs 1, 160(1)
  04cbd18  stfs 2, 164(1)
  04cbd1c  stfs 3, 168(1)
  04cbd20  bf 6, 0x4cbd38
  04cbd24  lis 3, 143
  04cbd28  lwz 3, 20928(3)
  04cbd2c  stw 3, 180(1)
  04cbd30  stw 3, 176(1)
  04cbd34  b 0x4cbd60
  04cbd38  cmpwi 1, 22, 2
  04cbd3c  bf 26, 0x4cbd54
  04cbd40  lis 3, 143
  04cbd44  lwz 3, 20928(3)
  04cbd48  stw 3, 188(1)
  04cbd4c  stw 3, 184(1)
  04cbd50  b 0x4cbd60
  04cbd54  bf 6, 0x4cbd60
  04cbd58  stw 29, 180(1)
  04cbd5c  stw 29, 176(1)
  04cbd60  lwz 6, 28(23)
  04cbd64  addic 3, 1, 112
  04cbd68  li 4, 0
  04cbd6c  li 5, 0
  04cbd70  li 7, 9
  04cbd74  bl 0x72280
  04cbd78  nop
  04cbd7c  lfs 1, 144(1)
  04cbd80  addic 22, 22, 1
  04cbd84  lfs 2, 148(1)
  04cbd88  addic 26, 26, 16
  04cbd8c  stfs 1, 112(1)
  04cbd90  cmpw 22, 27
  04cbd94  lfs 1, 152(1)
  04cbd98  stfs 2, 116(1)
  04cbd9c  lfs 2, 156(1)
  04cbda0  stfs 1, 120(1)
  04cbda4  lfs 1, 160(1)
  04cbda8  stfs 2, 124(1)
  04cbdac  lfs 2, 164(1)
  04cbdb0  stfs 1, 128(1)
  04cbdb4  lfs 1, 168(1)
  04cbdb8  stfs 2, 132(1)
  04cbdbc  lfs 2, 172(1)
  04cbdc0  stfs 1, 136(1)
  04cbdc4  lfs 1, 320(25)
  04cbdc8  stfs 2, 140(1)
  04cbdcc  lfs 2, 324(25)
  04cbdd0  fmr 26, 1
  04cbdd4  lfs 3, 328(25)
  04cbdd8  fmr 27, 2
  04cbddc  fmr 28, 3
  04cbde0  bt 0, 0x4cbc3c
  04cbde4  cmpwi 27, 0
  04cbde8  bf 1, 0x4cc078
  04cbdec  lis 3, 77
  04cbdf0  fmr 31, 28
  04cbdf4  lis 29, 161
  04cbdf8  fmr 30, 27
  04cbdfc  addi 3, 3, -18144
  04cbe00  fmr 29, 26
  04cbe04  ori 26, 31, 0
  04cbe08  addic 30, 30, -2
  04cbe0c  li 31, 0
  04cbe10  addic 29, 29, 24396
  04cbe14  lfs 23, 8(3)
  04cbe18  lfs 13, 4(26)
  04cbe1c  lfs 3, 20(26)
  04cbe20  fsubs 13, 13, 30
  04cbe24  fsubs 3, 3, 30
  04cbe28  lfs 0, 0(26)
  04cbe2c  lfs 11, 16(26)
  04cbe30  fsubs 0, 0, 29
  04cbe34  fsubs 11, 11, 29
  04cbe38  lfs 12, 8(26)
  04cbe3c  lfs 2, 24(26)
  04cbe40  fsubs 12, 12, 31
  04cbe44  fsubs 2, 2, 31
  04cbe48  fmuls 1, 13, 13
  04cbe4c  fmuls 4, 3, 3
  04cbe50  addic 26, 26, 16
  04cbe54  fmadds 1, 0, 0, 1
  04cbe58  fmadds 4, 11, 11, 4
  04cbe5c  fmadds 1, 12, 12, 1
  04cbe60  fmadds 4, 2, 2, 4
  04cbe64  fsqrts 1, 1
  04cbe68  fsqrts 4, 4
  04cbe6c  fcmpu 6, 1, 22
  04cbe70  fcmpu 0, 4, 1
  04cbe74  fcmpu 1, 4, 22
  04cbe78  cror 2, 1, 2
  04cbe7c  bt 2, 0x4cbea8
  04cbe80  bf 6, 0x4cbe94
  04cbe84  fmr 11, 0
  04cbe88  fmr 3, 13
  04cbe8c  fmr 2, 12
  04cbe90  b 0x4cbecc
  04cbe94  fdivs 1, 1, 4
  04cbe98  fmuls 11, 11, 1
  04cbe9c  fmuls 3, 3, 1
  04cbea0  fmuls 2, 2, 1
  04cbea4  b 0x4cbecc
  04cbea8  bf 26, 0x4cbebc
  04cbeac  fmr 0, 11
  04cbeb0  fmr 13, 3
  04cbeb4  fmr 12, 2
  04cbeb8  b 0x4cbecc
  04cbebc  fdivs 1, 4, 1
  04cbec0  fmuls 0, 0, 1
  04cbec4  fmuls 13, 13, 1
  04cbec8  fmuls 12, 12, 1
  04cbecc  fadds 31, 31, 12
  04cbed0  fadds 1, 28, 2
  04cbed4  fadds 29, 29, 0
  04cbed8  fadds 4, 26, 11
  04cbedc  fadds 30, 30, 13
  04cbee0  fadds 5, 27, 3
  04cbee4  fsubs 6, 1, 31
  04cbee8  fsubs 7, 4, 29
  04cbeec  fsubs 8, 5, 30
  04cbef0  lfs 13, 332(25)
  04cbef4  fnmsubs 31, 6, 24, 31
  04cbef8  fnmsubs 29, 7, 24, 29
  04cbefc  fnmsubs 30, 8, 24, 30
  04cbf00  cmpwi 1, 31, 0
  04cbf04  fsubs 12, 28, 31
  04cbf08  fsubs 11, 26, 29
  04cbf0c  fsubs 3, 27, 30
  04cbf10  fmadds 26, 7, 24, 4
  04cbf14  fmuls 2, 7, 12
  04cbf18  fmuls 10, 8, 11
  04cbf1c  fmuls 9, 6, 3
  04cbf20  fmadds 27, 8, 24, 5
  04cbf24  fmsubs 11, 6, 11, 2
  04cbf28  fmsubs 3, 7, 3, 10
  04cbf2c  fmsubs 12, 8, 12, 9
  04cbf30  fmadds 28, 6, 24, 1
  04cbf34  fmuls 2, 11, 11
  04cbf38  fmadds 2, 12, 12, 2
  04cbf3c  fmadds 2, 3, 3, 2
  04cbf40  fsqrts 0, 2
  04cbf44  fcmpu 0, 0, 22
  04cbf48  bt 2, 0x4cbf80
  04cbf4c  frsqrte 1, 2
  04cbf50  fmuls 4, 2, 1
  04cbf54  fmuls 5, 1, 23
  04cbf58  fnmsubs 4, 4, 1, 25
  04cbf5c  fmadds 1, 4, 5, 1
  04cbf60  fmuls 4, 2, 1
  04cbf64  fmuls 5, 1, 23
  04cbf68  fnmsubs 4, 4, 1, 25
  04cbf6c  fmadds 0, 4, 5, 1
  04cbf70  fmuls 1, 2, 0
  04cbf74  fmuls 2, 0, 23
  04cbf78  fnmsubs 1, 1, 0, 25
  04cbf7c  fmadds 0, 1, 2, 0
  04cbf80  fmuls 1, 0, 21
  04cbf84  stfs 13, 268(1)
  04cbf88  cmpw 6, 31, 30
  04cbf8c  stfs 13, 284(1)
  04cbf90  fmadds 2, 12, 1, 29
  04cbf94  fmadds 4, 11, 1, 30
  04cbf98  fmadds 5, 3, 1, 31
  04cbf9c  fnmsubs 6, 12, 1, 29
  04cbfa0  fnmsubs 7, 11, 1, 30
  04cbfa4  fnmsubs 8, 3, 1, 31
  04cbfa8  fmadds 9, 12, 1, 26
  04cbfac  fmadds 10, 11, 1, 27
  04cbfb0  fmadds 0, 3, 1, 28
  04cbfb4  fnmsubs 12, 12, 1, 26
  04cbfb8  fnmsubs 11, 11, 1, 27
  04cbfbc  fnmsubs 1, 3, 1, 28
  04cbfc0  stfs 2, 256(1)
  04cbfc4  stfs 4, 260(1)
  04cbfc8  stfs 5, 264(1)
  04cbfcc  stfs 6, 272(1)
  04cbfd0  stfs 7, 276(1)
  04cbfd4  stfs 8, 280(1)
  04cbfd8  stfs 9, 288(1)
  04cbfdc  stfs 10, 292(1)
  04cbfe0  stfs 0, 296(1)
  04cbfe4  stfs 13, 300(1)
  04cbfe8  stfs 12, 304(1)
  04cbfec  stfs 11, 308(1)
  04cbff0  stfs 1, 312(1)
  04cbff4  stfs 13, 316(1)
  04cbff8  bf 6, 0x4cc010
  04cbffc  lis 3, 143
  04cc000  lwz 3, 20932(3)
  04cc004  stw 3, 324(1)
  04cc008  stw 3, 320(1)
  04cc00c  b 0x4cc038
  04cc010  cmpwi 1, 31, 1
  04cc014  bf 26, 0x4cc02c
  04cc018  lis 3, 143
  04cc01c  lwz 3, 20932(3)
  04cc020  stw 3, 332(1)
  04cc024  stw 3, 328(1)
  04cc028  b 0x4cc038
  04cc02c  bf 6, 0x4cc038
  04cc030  stw 28, 324(1)
  04cc034  stw 28, 320(1)
  04cc038  lwz 6, 28(29)
  04cc03c  addic 3, 1, 256
  04cc040  li 4, 0
  04cc044  li 5, 0
  04cc048  li 7, 9
  04cc04c  bl 0x72280
  04cc050  nop
  04cc054  lfs 29, 320(25)
  04cc058  addic 31, 31, 1
  04cc05c  lfs 30, 324(25)
  04cc060  lfs 31, 328(25)
  04cc064  cmpw 31, 27
  04cc068  fmr 26, 29
  04cc06c  fmr 27, 30
  04cc070  fmr 28, 31
  04cc074  bt 0, 0x4cbe18
  04cc078  li 3, 1
  04cc07c  li 4, 5
  04cc080  li 10, 2
  04cc084  li 5, 96
  04cc088  li 6, 3
  04cc08c  li 7, 0
  04cc090  li 8, 0
  04cc094  li 9, 1
  04cc098  bl 0x502f7c
  04cc09c  nop
  04cc0a0  ori 4, 3, 0
  04cc0a4  li 3, 22
  04cc0a8  bl 0x174f80
  04cc0ac  nop
  04cc0b0  ld 0, 592(1)
  04cc0b4  mtlr 0
  04cc0b8  lfd 21, 488(1)
  04cc0bc  lfd 22, 496(1)
  04cc0c0  lfd 23, 504(1)
  04cc0c4  lfd 24, 512(1)
  04cc0c8  lfd 25, 520(1)
  04cc0cc  lfd 26, 528(1)
  04cc0d0  lfd 27, 536(1)
  04cc0d4  lfd 28, 544(1)
  04cc0d8  lfd 29, 552(1)
  04cc0dc  lfd 30, 560(1)
  04cc0e0  lfd 31, 568(1)
  04cc0e4  ld 22, 408(1)
  04cc0e8  ld 23, 416(1)
  04cc0ec  ld 24, 424(1)
  04cc0f0  ld 25, 432(1)
  04cc0f4  ld 26, 440(1)
  04cc0f8  ld 27, 448(1)
  04cc0fc  ld 28, 456(1)
  04cc100  ld 29, 464(1)
  04cc104  ld 30, 472(1)
  04cc108  ld 31, 480(1)
  04cc10c  addi 1, 1, 576
  04cc110  blr

M984_004cc120:   # 0x4cc120, 0x1d0 bytes
  04cc120  stdu 1, -160(1)
  04cc124  mflr 0
  04cc128  std 0, 176(1)
  04cc12c  stfd 31, 152(1)
  04cc130  lis 4, 114
  04cc134  lis 5, 143
  04cc138  lis 6, 270
  04cc13c  lis 7, 77
  04cc140  lfs 1, -3064(4)
  04cc144  lfs 2, 20924(5)
  04cc148  addi 4, 7, -16108
  04cc14c  std 31, 144(1)
  04cc150  lfs 3, 19556(6)
  04cc154  ori 31, 3, 0
  04cc158  fnmsubs 1, 1, 2, 3
  04cc15c  stfs 1, 19556(6)
  04cc160  lfs 2, 0(4)
  04cc164  std 30, 136(1)
  04cc168  std 29, 128(1)
  04cc16c  std 28, 120(1)
  04cc170  std 27, 112(1)
  04cc174  fcmpu 0, 1, 2
  04cc178  bt 1, 0x4cc194
  04cc17c  lis 3, 77
  04cc180  lis 4, 270
  04cc184  addi 3, 3, -16108
  04cc188  lfs 2, 4(3)
  04cc18c  fadds 1, 1, 2
  04cc190  stfs 1, 19556(4)
  04cc194  lis 3, 143
  04cc198  lis 4, 143
  04cc19c  lis 6, 143
  04cc1a0  lis 5, 270
  04cc1a4  lis 7, 143
  04cc1a8  lwz 8, 20904(3)
  04cc1ac  lis 10, 143
  04cc1b0  addic 3, 5, 18416
  04cc1b4  lwz 5, 20912(4)
  04cc1b8  lfs 1, 20936(6)
  04cc1bc  extsw 4, 8
  04cc1c0  lfs 2, 20940(7)
  04cc1c4  extsw 5, 5
  04cc1c8  li 9, 20
  04cc1cc  lfs 3, 20992(10)
  04cc1d0  bl 0x4cb930
  04cc1d4  lis 3, 143
  04cc1d8  lis 4, 143
  04cc1dc  lis 30, 143
  04cc1e0  lis 5, 270
  04cc1e4  lis 29, 143
  04cc1e8  lwz 6, 20944(3)
  04cc1ec  lis 7, 143
  04cc1f0  addic 3, 5, 18736
  04cc1f4  lwz 5, 20948(4)
  04cc1f8  li 9, 20
  04cc1fc  lfs 1, 20952(30)
  04cc200  extsw 4, 6
  04cc204  lfs 2, 20956(29)
  04cc208  extsw 5, 5
  04cc20c  lfs 3, 20996(7)
  04cc210  bl 0x4cb930
  04cc214  lis 3, 77
  04cc218  lis 28, 270
  04cc21c  lfs 1, 20952(30)
  04cc220  addi 3, 3, -16108
  04cc224  lfs 2, 20956(29)
  04cc228  lis 4, 270
  04cc22c  li 9, 5
  04cc230  addic 27, 4, 19568
  04cc234  lfs 31, 8(3)
  04cc238  lhz 4, 19896(28)
  04cc23c  ori 3, 27, 0
  04cc240  fmr 3, 31
  04cc244  extsh 4, 4
  04cc248  ori 5, 4, 0
  04cc24c  bl 0x4cb930
  04cc250  addic 28, 28, 19896
  04cc254  lfs 1, 20952(30)
  04cc258  addic 3, 27, 80
  04cc25c  lfs 2, 20956(29)
  04cc260  li 9, 5
  04cc264  fmr 3, 31
  04cc268  lhz 4, 2(28)
  04cc26c  extsh 4, 4
  04cc270  ori 5, 4, 0
  04cc274  bl 0x4cb930
  04cc278  lhz 4, 4(28)
  04cc27c  addic 3, 27, 160
  04cc280  lfs 1, 20952(30)
  04cc284  li 9, 5
  04cc288  extsh 4, 4
  04cc28c  lfs 2, 20956(29)
  04cc290  fmr 3, 31
  04cc294  ori 5, 4, 0
  04cc298  bl 0x4cb930
  04cc29c  lhz 4, 6(28)
  04cc2a0  addic 3, 27, 240
  04cc2a4  lfs 1, 20952(30)
  04cc2a8  li 9, 5
  04cc2ac  extsh 4, 4
  04cc2b0  lfs 2, 20956(29)
  04cc2b4  fmr 3, 31
  04cc2b8  ori 5, 4, 0
  04cc2bc  bl 0x4cb930
  04cc2c0  ori 3, 31, 0
  04cc2c4  bl 0x4cb3e8
  04cc2c8  ld 0, 176(1)
  04cc2cc  mtlr 0
  04cc2d0  lfd 31, 152(1)
  04cc2d4  ld 27, 112(1)
  04cc2d8  ld 28, 120(1)
  04cc2dc  ld 29, 128(1)
  04cc2e0  ld 30, 136(1)
  04cc2e4  ld 31, 144(1)
  04cc2e8  addi 1, 1, 160
  04cc2ec  blr

M984_004cc2f0:   # 0x4cc2f0, 0x14 bytes
  04cc2f0  lis 3, 143
  04cc2f4  lis 4, 1
  04cc2f8  addic 3, 3, 21124
  04cc2fc  stw 4, 72(3)
  04cc300  blr

UpdateMoby_984:   # 0x4cc328, 0x15c bytes
  04cc328  stdu 1, -144(1)
  04cc32c  mflr 0
  04cc330  std 0, 160(1)
  04cc334  lis 4, 143
  04cc338  std 31, 136(1)
  04cc33c  lwz 5, 36(3)
  04cc340  ori 31, 3, 0
  04cc344  std 30, 128(1)
  04cc348  lfs 1, 21232(4)
  04cc34c  lwz 30, 120(3)
  04cc350  lfs 2, 36(5)
  04cc354  lbz 4, 32(3)
  04cc358  fmuls 1, 2, 1
  04cc35c  cmpwi 4, 0
  04cc360  cmpwi 1, 4, 1
  04cc364  cmpwi 6, 4, -1
  04cc368  std 29, 120(1)
  04cc36c  stfs 1, 44(3)
  04cc370  bt 1, 0x4cc37c
  04cc374  bf 25, 0x4cc468
  04cc378  b 0x4cc384
  04cc37c  bf 5, 0x4cc3a4
  04cc380  b 0x4cc468
  04cc384  li 3, 1
  04cc388  stb 3, 32(31)
  04cc38c  bl 0xfcc68
  04cc390  nop
  04cc394  stfs 1, 0(30)
  04cc398  lfs 1, 24(31)
  04cc39c  stfs 1, 4(30)
  04cc3a0  b 0x4cc468
  04cc3a4  lis 3, 161
  04cc3a8  lwz 3, 1800(3)
  04cc3ac  cmpwi 3, 2
  04cc3b0  bf 2, 0x4cc3cc
  04cc3b4  li 3, 0
  04cc3b8  lhz 4, 52(31)
  04cc3bc  stb 3, 49(31)
  04cc3c0  ori 3, 4, 1
  04cc3c4  sth 3, 52(31)
  04cc3c8  b 0x4cc3e0
  04cc3cc  li 3, 1
  04cc3d0  lhz 4, 52(31)
  04cc3d4  stb 3, 49(31)
  04cc3d8  rlwinm 3, 4, 0, 0, 30
  04cc3dc  sth 3, 52(31)
  04cc3e0  lis 3, 77
  04cc3e4  lfs 1, 0(30)
  04cc3e8  addi 29, 3, -15608
  04cc3ec  lis 3, 114
  04cc3f0  lfs 2, 0(29)
  04cc3f4  lfs 3, -3052(3)
  04cc3f8  fmuls 2, 3, 2
  04cc3fc  bl 0x502578
  04cc400  nop
  04cc404  lfs 2, 4(29)
  04cc408  lfs 3, 8(29)
  04cc40c  fsubs 2, 2, 1
  04cc410  fsubs 3, 3, 1
  04cc414  lfs 5, 12(29)
  04cc418  fsub 4, 1, 2
  04cc41c  fsel 2, 4, 2, 1
  04cc420  lfs 4, 16(29)
  04cc424  fsub 6, 3, 2
  04cc428  fsel 2, 6, 3, 2
  04cc42c  lfs 3, 20(29)
  04cc430  lfs 6, 24(29)
  04cc434  lfs 8, 4(30)
  04cc438  stfs 1, 0(30)
  04cc43c  fmuls 7, 2, 2
  04cc440  fmuls 9, 7, 2
  04cc444  fmuls 1, 7, 9
  04cc448  fmadds 2, 9, 5, 2
  04cc44c  fmuls 5, 7, 1
  04cc450  fmadds 1, 1, 4, 2
  04cc454  fmuls 2, 7, 5
  04cc458  fmadds 1, 5, 3, 1
  04cc45c  fmadds 1, 2, 6, 1
  04cc460  fadds 1, 8, 1
  04cc464  stfs 1, 24(31)
  04cc468  ld 0, 160(1)
  04cc46c  mtlr 0
  04cc470  ld 29, 120(1)
  04cc474  ld 30, 128(1)
  04cc478  ld 31, 136(1)
  04cc47c  addi 1, 1, 144
  04cc480  blr

M984_004cc4a8:   # 0x4cc4a8, 0x83c bytes
  04cc4a8  stdu 1, -256(1)
  04cc4ac  mflr 0
  04cc4b0  std 0, 272(1)
  04cc4b4  stfd 31, 248(1)
  04cc4b8  std 31, 240(1)
  04cc4bc  ori 31, 3, 0
  04cc4c0  lis 3, 143
  04cc4c4  lis 6, 143
  04cc4c8  lis 7, 114
  04cc4cc  lwz 4, 36(31)
  04cc4d0  lfs 1, 21236(3)
  04cc4d4  lis 9, 16256
  04cc4d8  lis 3, 77
  04cc4dc  li 10, 0
  04cc4e0  addi 8, 3, -15224
  04cc4e4  std 30, 232(1)
  04cc4e8  lfs 2, 36(4)
  04cc4ec  lwz 30, 120(31)
  04cc4f0  ori 3, 31, 0
  04cc4f4  fmuls 1, 2, 1
  04cc4f8  lis 4, 51
  04cc4fc  li 5, 0
  04cc500  stfs 1, 44(31)
  04cc504  lfs 1, 21284(6)
  04cc508  lfs 2, -3052(7)
  04cc50c  fmuls 1, 1, 2
  04cc510  stfs 1, 244(30)
  04cc514  stw 9, 88(31)
  04cc518  lfs 31, 0(8)
  04cc51c  std 29, 224(1)
  04cc520  std 28, 216(1)
  04cc524  stw 10, 116(1)
  04cc528  bl 0x10675c
  04cc52c  nop
  04cc530  ori 29, 3, 0
  04cc534  ori 3, 31, 0
  04cc538  ori 4, 29, 0
  04cc53c  addic 5, 30, 32
  04cc540  li 6, 0
  04cc544  addic 7, 1, 112
  04cc548  li 9, 0
  04cc54c  addic 8, 1, 116
  04cc550  li 10, 4
  04cc554  bl 0x106840
  04cc558  nop
  04cc55c  ori 28, 3, 0
  04cc560  lwz 3, 112(1)
  04cc564  cmpwi 3, 1
  04cc568  bt 2, 0x4ccb6c
  04cc56c  lbz 3, 32(31)
  04cc570  cmpwi 3, 6
  04cc574  bt 2, 0x4ccb6c
  04cc578  lfs 1, 32(30)
  04cc57c  lfs 2, 116(1)
  04cc580  li 3, 71
  04cc584  lwz 4, 32(29)
  04cc588  li 5, 3
  04cc58c  fsubs 1, 1, 2
  04cc590  subc 5, 5, 28
  04cc594  fcmpu 0, 1, 31
  04cc598  stfs 1, 32(30)
  04cc59c  lhz 4, 166(4)
  04cc5a0  subc 3, 3, 4
  04cc5a4  cntlzw 3, 3
  04cc5a8  sldi 3, 3, 58
  04cc5ac  sradi 3, 3, 63
  04cc5b0  and 3, 3, 5
  04cc5b4  addc 28, 28, 3
  04cc5b8  bt 1, 0x4cc5c0
  04cc5bc  li 28, 1
  04cc5c0  lis 3, 77
  04cc5c4  addi 3, 3, -15224
  04cc5c8  lfs 1, 4(3)
  04cc5cc  bl 0x502758
  04cc5d0  nop
  04cc5d4  lis 4, 16128
  04cc5d8  lis 5, 143
  04cc5dc  lis 6, 114
  04cc5e0  cmpwi 28, 2
  04cc5e4  stw 4, 152(30)
  04cc5e8  lis 4, 14851
  04cc5ec  lfs 1, 21240(5)
  04cc5f0  lfs 2, -3048(6)
  04cc5f4  ori 4, 4, 4719
  04cc5f8  stw 3, 144(30)
  04cc5fc  fmuls 1, 1, 2
  04cc600  li 3, 0
  04cc604  li 5, 9
  04cc608  stw 4, 132(30)
  04cc60c  stb 3, 173(30)
  04cc610  stw 5, 148(30)
  04cc614  stfs 1, 128(30)
  04cc618  bt 1, 0x4cc630
  04cc61c  cmpwi 28, -1
  04cc620  cmpwi 1, 28, 0
  04cc624  bf 1, 0x4ccb5c
  04cc628  bf 5, 0x4ccb5c
  04cc62c  b 0x4cc8b4
  04cc630  cmpwi 28, 10
  04cc634  cmpwi 1, 28, 8
  04cc638  bt 1, 0x4ccb5c
  04cc63c  bf 5, 0x4cc64c
  04cc640  li 3, 250
  04cc644  stb 3, 103(30)
  04cc648  b 0x4ccb5c
  04cc64c  lis 3, 143
  04cc650  lis 4, 114
  04cc654  lis 5, 143
  04cc658  lfs 1, 21248(3)
  04cc65c  lfs 2, -3052(4)
  04cc660  lis 3, 16624
  04cc664  lis 4, 16688
  04cc668  fmuls 1, 1, 2
  04cc66c  stfs 1, 136(30)
  04cc670  lfs 1, 21244(5)
  04cc674  stw 3, 192(30)
  04cc678  fmuls 1, 1, 2
  04cc67c  stw 4, 196(30)
  04cc680  stfs 1, 140(30)
  04cc684  lwz 3, 32(29)
  04cc688  lfs 1, 16(31)
  04cc68c  lfs 2, 20(31)
  04cc690  lfs 3, 16(3)
  04cc694  lfs 4, 20(3)
  04cc698  fsubs 1, 1, 3
  04cc69c  fsubs 2, 2, 4
  04cc6a0  lis 3, 115
  04cc6a4  addic 3, 3, 22784
  04cc6a8  fabs 3, 1
  04cc6ac  fabs 4, 2
  04cc6b0  stfs 1, 140(1)
  04cc6b4  stfs 2, 144(1)
  04cc6b8  fsubs 1, 3, 4
  04cc6bc  stfs 1, 148(1)
  04cc6c0  lwz 4, 140(1)
  04cc6c4  lfs 1, 140(1)
  04cc6c8  lwz 5, 144(1)
  04cc6cc  lfs 2, 144(1)
  04cc6d0  fabs 1, 1
  04cc6d4  lwz 6, 148(1)
  04cc6d8  rlwinm 5, 5, 3, 29, 29
  04cc6dc  lfs 5, 148(1)
  04cc6e0  fabs 2, 2
  04cc6e4  rlwimi 5, 6, 2, 30, 30
  04cc6e8  fsub 6, 5, 31
  04cc6ec  fsub 5, 5, 31
  04cc6f0  rlwimi 5, 4, 4, 28, 28
  04cc6f4  ori 4, 3, 0
  04cc6f8  rlwimi 4, 5, 2, 26, 28
  04cc6fc  slwi 5, 5, 2
  04cc700  clrldi 4, 4, 32
  04cc704  fsel 4, 6, 1, 4
  04cc708  lfsx 1, 3, 5
  04cc70c  fsel 3, 5, 2, 3
  04cc710  lfs 2, 4(4)
  04cc714  fcmpu 0, 4, 31
  04cc718  bt 1, 0x4cc720
  04cc71c  b 0x4cc840
  04cc720  fsubs 5, 3, 4
  04cc724  fadds 3, 3, 4
  04cc728  addic 3, 1, 16
  04cc72c  li 7, 2
  04cc730  addic 5, 3, 184
  04cc734  addic 4, 3, 168
  04cc738  mtctr 7
  04cc73c  fdivs 3, 5, 3
  04cc740  fmuls 4, 3, 3
  04cc744  stfs 3, 196(1)
  04cc748  stfs 3, 188(1)
  04cc74c  stfs 3, 192(1)
  04cc750  stfs 3, 184(1)
  04cc754  lfs 6, 196(1)
  04cc758  lfs 7, 188(1)
  04cc75c  lfs 8, 192(1)
  04cc760  fmuls 5, 4, 4
  04cc764  fmuls 7, 7, 4
  04cc768  fmuls 6, 6, 5
  04cc76c  fmuls 3, 5, 5
  04cc770  fmuls 5, 8, 5
  04cc774  stfs 7, 188(1)
  04cc778  fmuls 4, 6, 4
  04cc77c  stfs 5, 192(1)
  04cc780  stfs 4, 196(1)
  04cc784  lfs 4, 168(3)
  04cc788  fmuls 4, 4, 3
  04cc78c  stfs 4, 184(3)
  04cc790  lfs 4, 4(4)
  04cc794  addic 4, 4, 8
  04cc798  fmuls 4, 4, 3
  04cc79c  addic 3, 3, 8
  04cc7a0  stfs 4, 4(5)
  04cc7a4  addic 5, 5, 8
  04cc7a8  bdnz 0x4cc784
  04cc7ac  li 5, 4
  04cc7b0  ori 3, 1, 0
  04cc7b4  mtctr 5
  04cc7b8  lis 4, 115
  04cc7bc  addic 5, 3, 184
  04cc7c0  addic 4, 4, 22752
  04cc7c4  ori 6, 5, 0
  04cc7c8  lfs 3, 184(3)
  04cc7cc  lfs 4, 0(4)
  04cc7d0  fmuls 3, 3, 4
  04cc7d4  lfs 4, 4(4)
  04cc7d8  addic 4, 4, 8
  04cc7dc  stfs 3, 184(3)
  04cc7e0  lfs 3, 4(5)
  04cc7e4  addic 3, 3, 8
  04cc7e8  fmuls 3, 3, 4
  04cc7ec  stfs 3, 4(5)
  04cc7f0  addic 5, 5, 8
  04cc7f4  bdnz 0x4cc7c8
  04cc7f8  ori 3, 1, 0
  04cc7fc  mtctr 7
  04cc800  lfs 3, 184(3)
  04cc804  lfs 4, 4(6)
  04cc808  fadds 3, 31, 3
  04cc80c  lfs 5, 8(6)
  04cc810  addic 3, 3, 16
  04cc814  lfs 31, 12(6)
  04cc818  addic 6, 6, 16
  04cc81c  fadds 3, 3, 4
  04cc820  fadds 3, 3, 5
  04cc824  fadds 31, 3, 31
  04cc828  bdnz 0x4cc800
  04cc82c  lis 3, 77
  04cc830  addi 3, 3, -15224
  04cc834  lfs 3, 8(3)
  04cc838  fadds 31, 31, 3
  04cc83c  fmadds 31, 31, 1, 2
  04cc840  stfs 31, 120(1)
  04cc844  lfs 1, 16(29)
  04cc848  addic 5, 1, 120
  04cc84c  lfs 2, 24(29)
  04cc850  addic 6, 30, 136
  04cc854  stfs 1, 48(1)
  04cc858  addic 7, 30, 140
  04cc85c  stfs 2, 56(1)
  04cc860  lfs 1, 20(29)
  04cc864  lfs 2, 28(29)
  04cc868  stfs 1, 52(1)
  04cc86c  stfs 2, 60(1)
  04cc870  ld 3, 48(1)
  04cc874  ld 4, 56(1)
  04cc878  bl 0x107de8
  04cc87c  nop
  04cc880  ori 3, 31, 0
  04cc884  addic 4, 30, 112
  04cc888  lfs 1, 120(1)
  04cc88c  li 6, 3
  04cc890  li 7, 1
  04cc894  li 8, 0
  04cc898  bl 0x10ad80
  04cc89c  nop
  04cc8a0  li 3, 5
  04cc8a4  li 4, 120
  04cc8a8  stb 3, 32(31)
  04cc8ac  stb 4, 103(30)
  04cc8b0  b 0x4ccb5c
  04cc8b4  lis 3, 143
  04cc8b8  lis 4, 114
  04cc8bc  lis 5, 143
  04cc8c0  lis 6, 114
  04cc8c4  lis 7, 143
  04cc8c8  lfs 1, 21240(3)
  04cc8cc  lfs 2, -3048(4)
  04cc8d0  li 3, 0
  04cc8d4  lhz 4, 52(31)
  04cc8d8  fmuls 1, 1, 2
  04cc8dc  rlwimi 4, 3, 0, 19, 19
  04cc8e0  lis 3, 16624
  04cc8e4  sth 4, 52(31)
  04cc8e8  lis 4, 16688
  04cc8ec  stfs 1, 128(30)
  04cc8f0  lfs 1, 21256(5)
  04cc8f4  lfs 2, -3052(6)
  04cc8f8  fmuls 1, 1, 2
  04cc8fc  stfs 1, 136(30)
  04cc900  lfs 1, 21252(7)
  04cc904  stw 3, 192(30)
  04cc908  fmuls 1, 1, 2
  04cc90c  stw 4, 196(30)
  04cc910  stfs 1, 140(30)
  04cc914  lwz 3, 32(29)
  04cc918  lfs 1, 16(31)
  04cc91c  lfs 2, 20(31)
  04cc920  lfs 3, 16(3)
  04cc924  lfs 4, 20(3)
  04cc928  fsubs 1, 1, 3
  04cc92c  fsubs 2, 2, 4
  04cc930  lis 3, 115
  04cc934  addic 3, 3, 22784
  04cc938  fabs 3, 1
  04cc93c  fabs 4, 2
  04cc940  stfs 1, 128(1)
  04cc944  stfs 2, 132(1)
  04cc948  fsubs 1, 3, 4
  04cc94c  stfs 1, 136(1)
  04cc950  lwz 4, 128(1)
  04cc954  lfs 1, 128(1)
  04cc958  lwz 5, 132(1)
  04cc95c  lfs 2, 132(1)
  04cc960  fabs 1, 1
  04cc964  lwz 6, 136(1)
  04cc968  rlwinm 5, 5, 3, 29, 29
  04cc96c  lfs 5, 136(1)
  04cc970  fabs 2, 2
  04cc974  rlwimi 5, 6, 2, 30, 30
  04cc978  fsub 6, 5, 31
  04cc97c  fsub 5, 5, 31
  04cc980  rlwimi 5, 4, 4, 28, 28
  04cc984  ori 4, 3, 0
  04cc988  rlwimi 4, 5, 2, 26, 28
  04cc98c  slwi 5, 5, 2
  04cc990  clrldi 4, 4, 32
  04cc994  fsel 4, 6, 1, 4
  04cc998  lfsx 1, 3, 5
  04cc99c  fsel 3, 5, 2, 3
  04cc9a0  lfs 2, 4(4)
  04cc9a4  fcmpu 0, 4, 31
  04cc9a8  bt 1, 0x4cc9b0
  04cc9ac  b 0x4ccad0
  04cc9b0  fsubs 5, 3, 4
  04cc9b4  fadds 3, 3, 4
  04cc9b8  addic 3, 1, 16
  04cc9bc  li 7, 2
  04cc9c0  addic 5, 3, 152
  04cc9c4  addic 4, 3, 136
  04cc9c8  mtctr 7
  04cc9cc  fdivs 3, 5, 3
  04cc9d0  fmuls 4, 3, 3
  04cc9d4  stfs 3, 164(1)
  04cc9d8  stfs 3, 156(1)
  04cc9dc  stfs 3, 160(1)
  04cc9e0  stfs 3, 152(1)
  04cc9e4  lfs 6, 164(1)
  04cc9e8  lfs 7, 156(1)
  04cc9ec  lfs 8, 160(1)
  04cc9f0  fmuls 5, 4, 4
  04cc9f4  fmuls 7, 7, 4
  04cc9f8  fmuls 6, 6, 5
  04cc9fc  fmuls 3, 5, 5
  04cca00  fmuls 5, 8, 5
  04cca04  stfs 7, 156(1)
  04cca08  fmuls 4, 6, 4
  04cca0c  stfs 5, 160(1)
  04cca10  stfs 4, 164(1)
  04cca14  lfs 4, 136(3)
  04cca18  fmuls 4, 4, 3
  04cca1c  stfs 4, 152(3)
  04cca20  lfs 4, 4(4)
  04cca24  addic 4, 4, 8
  04cca28  fmuls 4, 4, 3
  04cca2c  addic 3, 3, 8
  04cca30  stfs 4, 4(5)
  04cca34  addic 5, 5, 8
  04cca38  bdnz 0x4cca14
  04cca3c  li 5, 4
  04cca40  ori 3, 1, 0
  04cca44  mtctr 5
  04cca48  lis 4, 115
  04cca4c  addic 5, 3, 152
  04cca50  addic 4, 4, 22752
  04cca54  ori 6, 5, 0
  04cca58  lfs 3, 152(3)
  04cca5c  lfs 4, 0(4)
  04cca60  fmuls 3, 3, 4
  04cca64  lfs 4, 4(4)
  04cca68  addic 4, 4, 8
  04cca6c  stfs 3, 152(3)
  04cca70  lfs 3, 4(5)
  04cca74  addic 3, 3, 8
  04cca78  fmuls 3, 3, 4
  04cca7c  stfs 3, 4(5)
  04cca80  addic 5, 5, 8
  04cca84  bdnz 0x4cca58
  04cca88  ori 3, 1, 0
  04cca8c  mtctr 7
  04cca90  lfs 3, 152(3)
  04cca94  lfs 4, 4(6)
  04cca98  fadds 3, 31, 3
  04cca9c  lfs 5, 8(6)
  04ccaa0  addic 3, 3, 16
  04ccaa4  lfs 31, 12(6)
  04ccaa8  addic 6, 6, 16
  04ccaac  fadds 3, 3, 4
  04ccab0  fadds 3, 3, 5
  04ccab4  fadds 31, 3, 31
  04ccab8  bdnz 0x4cca90
  04ccabc  lis 3, 77
  04ccac0  addi 3, 3, -15224
  04ccac4  lfs 3, 8(3)
  04ccac8  fadds 31, 31, 3
  04ccacc  fmadds 31, 31, 1, 2
  04ccad0  stfs 31, 124(1)
  04ccad4  lfs 1, 16(29)
  04ccad8  addic 5, 1, 124
  04ccadc  lfs 2, 24(29)
  04ccae0  addic 6, 30, 136
  04ccae4  stfs 1, 48(1)
  04ccae8  addic 7, 30, 140
  04ccaec  stfs 2, 56(1)
  04ccaf0  lfs 1, 20(29)
  04ccaf4  lfs 2, 28(29)
  04ccaf8  stfs 1, 52(1)
  04ccafc  stfs 2, 60(1)
  04ccb00  ld 3, 48(1)
  04ccb04  ld 4, 56(1)
  04ccb08  bl 0x107de8
  04ccb0c  nop
  04ccb10  addic 4, 30, 112
  04ccb14  lfs 1, 124(1)
  04ccb18  ori 3, 31, 0
  04ccb1c  li 6, 3
  04ccb20  li 7, 1
  04ccb24  li 8, 0
  04ccb28  bl 0x10ad80
  04ccb2c  nop
  04ccb30  li 5, 6
  04ccb34  li 6, 240
  04ccb38  ori 3, 31, 0
  04ccb3c  li 4, 2
  04ccb40  stb 5, 32(31)
  04ccb44  stb 6, 103(30)
  04ccb48  li 5, 3
  04ccb4c  li 6, 0
  04ccb50  li 7, -1
  04ccb54  bl 0xfcd60
  04ccb58  nop
  04ccb5c  addic 4, 30, 96
  04ccb60  ori 3, 31, 0
  04ccb64  bl 0x10c808
  04ccb68  nop
  04ccb6c  li 5, 255
  04ccb70  ori 3, 31, 0
  04ccb74  addic 4, 30, 96
  04ccb78  stb 5, 164(31)
  04ccb7c  bl 0x10c9a0
  04ccb80  nop
  04ccb84  lwz 3, 56(30)
  04ccb88  cmpwi 3, 0
  04ccb8c  bt 2, 0x4ccbc8
  04ccb90  lis 3, 77
  04ccb94  addi 3, 3, -15224
  04ccb98  lfs 1, 12(3)
  04ccb9c  lfs 2, 16(3)
  04ccba0  bl 0xfcbe8
  04ccba4  nop
  04ccba8  lis 3, 114
  04ccbac  lfs 2, -3056(3)
  04ccbb0  fmuls 1, 1, 2
  04ccbb4  bl 0x502758
  04ccbb8  nop
  04ccbbc  stw 3, 392(30)
  04ccbc0  li 3, 0
  04ccbc4  stw 3, 56(30)
  04ccbc8  addic 3, 30, 392
  04ccbcc  bl 0x4fff60
  04ccbd0  nop
  04ccbd4  lwz 4, 392(30)
  04ccbd8  lwz 3, 384(30)
  04ccbdc  cmpwi 4, 0
  04ccbe0  bt 2, 0x4ccbfc
  04ccbe4  lis 4, 77
  04ccbe8  lfs 1, 404(30)
  04ccbec  addi 4, 4, -15224
  04ccbf0  lfs 2, 20(4)
  04ccbf4  fadds 1, 1, 2
  04ccbf8  b 0x4ccc00
  04ccbfc  lfs 1, 404(30)
  04ccc00  lis 4, 165
  04ccc04  slwi 3, 3, 2
  04ccc08  stfs 1, 396(30)
  04ccc0c  addic 5, 4, 7136
  04ccc10  extsw 7, 3
  04ccc14  ori 3, 31, 0
  04ccc18  addic 4, 30, 288
  04ccc1c  li 6, 0
  04ccc20  lwzx 5, 5, 7
  04ccc24  li 7, 0
  04ccc28  addic 8, 5, 16
  04ccc2c  lwz 9, 0(5)
  04ccc30  extsw 9, 9
  04ccc34  bl 0x111ba0
  04ccc38  nop
  04ccc3c  cmpwi 3, 2
  04ccc40  bt 2, 0x4ccca4
  04ccc44  lfs 1, 20(31)
  04ccc48  lfs 2, 292(30)
  04ccc4c  lfs 3, 16(31)
  04ccc50  fsubs 1, 1, 2
  04ccc54  lfs 2, 288(30)
  04ccc58  fsubs 2, 3, 2
  04ccc5c  fmuls 1, 1, 1
  04ccc60  fmadds 1, 2, 2, 1
  04ccc64  lfs 2, 396(30)
  04ccc68  fsqrts 1, 1
  04ccc6c  fcmpu 0, 1, 2
  04ccc70  bt 1, 0x4ccc9c
  04ccc74  lfs 1, 24(31)
  04ccc78  lis 3, 77
  04ccc7c  lfs 2, 296(30)
  04ccc80  addi 3, 3, -15224
  04ccc84  fsubs 1, 1, 2
  04ccc88  lfs 2, 24(3)
  04ccc8c  fabs 1, 1
  04ccc90  fcmpu 0, 1, 2
  04ccc94  cror 6, 0, 2
  04ccc98  bt 6, 0x4ccca4
  04ccc9c  li 3, 2
  04ccca0  stw 3, 356(30)
  04ccca4  lwz 3, 352(30)
  04ccca8  cmpwi 3, 0
  04cccac  bf 2, 0x4cccc0
  04cccb0  lis 3, 151
  04cccb4  addic 3, 3, -25376
  04cccb8  lwz 3, 8320(3)
  04cccbc  stw 3, 352(30)
  04cccc0  ld 0, 272(1)
  04cccc4  mtlr 0
  04cccc8  lfd 31, 248(1)
  04ccccc  ld 28, 216(1)
  04cccd0  ld 29, 224(1)
  04cccd4  ld 30, 232(1)
  04cccd8  ld 31, 240(1)
  04cccdc  addi 1, 1, 256
  04ccce0  blr

M984_004ccd48:   # 0x4ccd48, 0xdf8 bytes
  04ccd48  stdu 1, -384(1)
  04ccd4c  mflr 0
  04ccd50  std 0, 400(1)
  04ccd54  stfd 29, 360(1)
  04ccd58  stfd 30, 368(1)
  04ccd5c  stfd 31, 376(1)
  04ccd60  std 31, 352(1)
  04ccd64  lis 4, 77
  04ccd68  ori 31, 3, 0
  04ccd6c  addi 4, 4, -13084
  04ccd70  std 30, 344(1)
  04ccd74  lis 5, 16256
  04ccd78  lwz 30, 120(31)
  04ccd7c  lfs 31, 0(4)
  04ccd80  std 29, 336(1)
  04ccd84  stw 5, 88(31)
  04ccd88  bl 0x4cc4a8
  04ccd8c  lbz 3, 32(31)
  04ccd90  lwz 29, 352(30)
  04ccd94  cmpwi 3, 6
  04ccd98  bt 2, 0x4cdac4
  04ccd9c  cmpwi 3, 5
  04ccda0  bt 2, 0x4cda18
  04ccda4  cmpwi 3, 4
  04ccda8  bt 2, 0x4cd6a0
  04ccdac  cmpwi 3, 3
  04ccdb0  bt 2, 0x4cd474
  04ccdb4  cmpwi 3, 2
  04ccdb8  bt 2, 0x4cd118
  04ccdbc  cmpwi 3, 1
  04ccdc0  bt 2, 0x4cce80
  04ccdc4  cmpwi 3, 0
  04ccdc8  bf 2, 0x4cdb18
  04ccdcc  lis 4, 16384
  04ccdd0  li 5, 2
  04ccdd4  li 6, 1
  04ccdd8  addic 3, 30, 208
  04ccddc  stw 4, 32(30)
  04ccde0  sth 5, 36(30)
  04ccde4  stb 6, 40(30)
  04ccde8  bl 0x100f8c
  04ccdec  nop
  04ccdf0  lis 4, 77
  04ccdf4  lis 3, 16128
  04ccdf8  addi 4, 4, -13084
  04ccdfc  stw 3, 220(30)
  04cce00  stw 3, 216(30)
  04cce04  lfs 1, 4(4)
  04cce08  bl 0x502758
  04cce0c  nop
  04cce10  stw 3, 208(30)
  04cce14  bl 0x5c8318
  04cce18  nop
  04cce1c  clrlwi 3, 3, 31
  04cce20  cmpwi 3, 0
  04cce24  bt 2, 0x4cce3c
  04cce28  lis 3, 0
  04cce2c  lhz 4, 52(31)
  04cce30  ori 3, 3, 32768
  04cce34  or 3, 4, 3
  04cce38  sth 3, 52(31)
  04cce3c  lwz 4, 388(30)
  04cce40  lis 3, 165
  04cce44  li 5, 1
  04cce48  slwi 4, 4, 2
  04cce4c  addic 3, 3, 7136
  04cce50  extsw 4, 4
  04cce54  lwzx 3, 3, 4
  04cce58  lfs 1, 16(3)
  04cce5c  stfs 1, 16(31)
  04cce60  lfs 1, 20(3)
  04cce64  stfs 1, 20(31)
  04cce68  lfs 1, 24(3)
  04cce6c  stfs 1, 24(31)
  04cce70  lfs 1, 28(3)
  04cce74  stb 5, 32(31)
  04cce78  stfs 1, 28(31)
  04cce7c  b 0x4cdb18
  04cce80  lwz 4, 388(30)
  04cce84  lis 3, 165
  04cce88  lfs 1, 16(31)
  04cce8c  slwi 4, 4, 2
  04cce90  lfs 2, 20(31)
  04cce94  addic 3, 3, 7136
  04cce98  extsw 4, 4
  04cce9c  lwzx 3, 3, 4
  04ccea0  lis 4, 115
  04ccea4  lfs 3, 32(3)
  04ccea8  lfs 4, 36(3)
  04cceac  fsubs 1, 3, 1
  04cceb0  lis 3, 77
  04cceb4  fsubs 2, 4, 2
  04cceb8  addi 3, 3, -13084
  04ccebc  addic 4, 4, 22784
  04ccec0  fabs 3, 1
  04ccec4  fabs 5, 2
  04ccec8  stfs 1, 200(1)
  04ccecc  stfs 2, 204(1)
  04cced0  fsubs 1, 3, 5
  04cced4  stfs 1, 208(1)
  04cced8  lwz 5, 200(1)
  04ccedc  lfs 4, 8(3)
  04ccee0  lfs 1, 200(1)
  04ccee4  lwz 3, 204(1)
  04ccee8  lfs 2, 204(1)
  04cceec  lwz 6, 208(1)
  04ccef0  rlwinm 3, 3, 3, 29, 29
  04ccef4  fabs 6, 2
  04ccef8  lfs 2, 208(1)
  04ccefc  fabs 1, 1
  04ccf00  rlwimi 3, 6, 2, 30, 30
  04ccf04  fsub 7, 2, 4
  04ccf08  rlwimi 3, 5, 4, 28, 28
  04ccf0c  fsub 8, 2, 4
  04ccf10  ori 5, 4, 0
  04ccf14  rlwimi 5, 3, 2, 26, 28
  04ccf18  slwi 3, 3, 2
  04ccf1c  clrldi 5, 5, 32
  04ccf20  fsel 5, 7, 1, 5
  04ccf24  lfsx 1, 4, 3
  04ccf28  lfs 2, 4(5)
  04ccf2c  fsel 3, 8, 6, 3
  04ccf30  fcmpu 0, 5, 4
  04ccf34  bt 1, 0x4ccf3c
  04ccf38  b 0x4cd05c
  04ccf3c  fsubs 6, 3, 5
  04ccf40  fadds 3, 3, 5
  04ccf44  addic 3, 1, 16
  04ccf48  li 6, 2
  04ccf4c  addic 4, 3, 260
  04ccf50  addic 5, 3, 276
  04ccf54  mtctr 6
  04ccf58  fdivs 3, 6, 3
  04ccf5c  fmuls 5, 3, 3
  04ccf60  stfs 3, 288(1)
  04ccf64  stfs 3, 280(1)
  04ccf68  stfs 3, 284(1)
  04ccf6c  stfs 3, 276(1)
  04ccf70  lfs 7, 288(1)
  04ccf74  lfs 8, 280(1)
  04ccf78  lfs 9, 284(1)
  04ccf7c  fmuls 6, 5, 5
  04ccf80  fmuls 8, 8, 5
  04ccf84  fmuls 7, 7, 6
  04ccf88  fmuls 3, 6, 6
  04ccf8c  fmuls 6, 9, 6
  04ccf90  stfs 8, 280(1)
  04ccf94  fmuls 5, 7, 5
  04ccf98  stfs 6, 284(1)
  04ccf9c  stfs 5, 288(1)
  04ccfa0  lfs 5, 260(3)
  04ccfa4  fmuls 5, 5, 3
  04ccfa8  stfs 5, 276(3)
  04ccfac  lfs 5, 4(4)
  04ccfb0  addic 3, 3, 8
  04ccfb4  addic 4, 4, 8
  04ccfb8  fmuls 5, 5, 3
  04ccfbc  stfs 5, 4(5)
  04ccfc0  addic 5, 5, 8
  04ccfc4  bdnz 0x4ccfa0
  04ccfc8  li 5, 4
  04ccfcc  ori 3, 1, 0
  04ccfd0  mtctr 5
  04ccfd4  lis 4, 115
  04ccfd8  addic 5, 3, 276
  04ccfdc  addic 4, 4, 22752
  04ccfe0  ori 7, 5, 0
  04ccfe4  lfs 3, 276(3)
  04ccfe8  lfs 5, 0(4)
  04ccfec  fmuls 3, 3, 5
  04ccff0  lfs 5, 4(4)
  04ccff4  addic 4, 4, 8
  04ccff8  stfs 3, 276(3)
  04ccffc  lfs 3, 4(5)
  04cd000  addic 3, 3, 8
  04cd004  fmuls 3, 3, 5
  04cd008  stfs 3, 4(5)
  04cd00c  addic 5, 5, 8
  04cd010  bdnz 0x4ccfe4
  04cd014  ori 3, 1, 0
  04cd018  mtctr 6
  04cd01c  lfs 3, 276(3)
  04cd020  fadds 3, 4, 3
  04cd024  lfs 4, 4(7)
  04cd028  addic 3, 3, 16
  04cd02c  lfs 5, 8(7)
  04cd030  lfs 6, 12(7)
  04cd034  addic 7, 7, 16
  04cd038  fadds 3, 3, 4
  04cd03c  fadds 4, 3, 5
  04cd040  fadds 4, 4, 6
  04cd044  bdnz 0x4cd01c
  04cd048  lis 3, 77
  04cd04c  addi 3, 3, -13084
  04cd050  lfs 3, 12(3)
  04cd054  fadds 4, 4, 3
  04cd058  fmadds 4, 4, 1, 2
  04cd05c  lis 3, 77
  04cd060  fmr 1, 4
  04cd064  lis 5, 114
  04cd068  addi 3, 3, -13084
  04cd06c  lis 4, 114
  04cd070  lfs 3, 16(3)
  04cd074  lfs 6, 20(3)
  04cd078  lfs 5, -3048(5)
  04cd07c  lfs 7, -3052(4)
  04cd080  addic 3, 31, 72
  04cd084  fmuls 2, 5, 3
  04cd088  addic 5, 30, 400
  04cd08c  fmuls 4, 7, 6
  04cd090  fmr 3, 2
  04cd094  bl 0x10a2e0
  04cd098  nop
  04cd09c  cmpwi 29, 0
  04cd0a0  bt 2, 0x4cdb18
  04cd0a4  lwz 3, 356(30)
  04cd0a8  cmpwi 3, 2
  04cd0ac  bt 2, 0x4cdb18
  04cd0b0  addic 3, 30, 416
  04cd0b4  bl 0x4fff60
  04cd0b8  nop
  04cd0bc  cmpwi 3, 0
  04cd0c0  bt 2, 0x4cdb18
  04cd0c4  li 3, 2
  04cd0c8  lbz 4, 83(31)
  04cd0cc  cmpwi 4, 1
  04cd0d0  stb 3, 32(31)
  04cd0d4  bt 2, 0x4cdb18
  04cd0d8  lis 3, 77
  04cd0dc  lis 4, 114
  04cd0e0  addi 3, 3, -13084
  04cd0e4  li 5, 0
  04cd0e8  lfs 1, 24(3)
  04cd0ec  lfs 2, -3056(4)
  04cd0f0  ori 3, 31, 0
  04cd0f4  li 4, 1
  04cd0f8  fmuls 1, 2, 1
  04cd0fc  fctiwz 1, 1
  04cd100  stfd 1, 312(1)
  04cd104  lwz 6, 316(1)
  04cd108  extsw 6, 6
  04cd10c  bl 0xfddc0
  04cd110  nop
  04cd114  b 0x4cdb18
  04cd118  lfs 1, 16(29)
  04cd11c  lfs 2, 16(31)
  04cd120  lfs 3, 20(29)
  04cd124  lfs 4, 20(31)
  04cd128  fsubs 1, 1, 2
  04cd12c  lis 3, 77
  04cd130  fsubs 2, 3, 4
  04cd134  addi 4, 3, -13084
  04cd138  lis 5, 115
  04cd13c  addic 3, 31, 72
  04cd140  addic 5, 5, 22784
  04cd144  fabs 3, 1
  04cd148  fabs 4, 2
  04cd14c  stfs 1, 188(1)
  04cd150  stfs 2, 192(1)
  04cd154  fsubs 1, 3, 4
  04cd158  stfs 1, 196(1)
  04cd15c  lwz 6, 188(1)
  04cd160  lfs 31, 8(4)
  04cd164  lfs 1, 188(1)
  04cd168  lwz 4, 192(1)
  04cd16c  lfs 2, 192(1)
  04cd170  fabs 1, 1
  04cd174  lwz 7, 196(1)
  04cd178  rlwinm 4, 4, 3, 29, 29
  04cd17c  fabs 5, 2
  04cd180  lfs 2, 196(1)
  04cd184  rlwimi 4, 7, 2, 30, 30
  04cd188  fsub 6, 2, 31
  04cd18c  rlwimi 4, 6, 4, 28, 28
  04cd190  fsub 7, 2, 31
  04cd194  ori 6, 5, 0
  04cd198  rlwimi 6, 4, 2, 26, 28
  04cd19c  slwi 4, 4, 2
  04cd1a0  clrldi 6, 6, 32
  04cd1a4  fsel 4, 6, 1, 4
  04cd1a8  lfsx 1, 5, 4
  04cd1ac  lfs 2, 4(6)
  04cd1b0  fsel 3, 7, 5, 3
  04cd1b4  fcmpu 0, 4, 31
  04cd1b8  bt 1, 0x4cd1c4
  04cd1bc  fmr 1, 31
  04cd1c0  b 0x4cd2e8
  04cd1c4  fsubs 5, 3, 4
  04cd1c8  fadds 3, 3, 4
  04cd1cc  addic 4, 1, 16
  04cd1d0  li 7, 2
  04cd1d4  addic 5, 4, 228
  04cd1d8  addic 6, 4, 244
  04cd1dc  mtctr 7
  04cd1e0  fdivs 3, 5, 3
  04cd1e4  fmuls 4, 3, 3
  04cd1e8  stfs 3, 256(1)
  04cd1ec  stfs 3, 248(1)
  04cd1f0  stfs 3, 252(1)
  04cd1f4  stfs 3, 244(1)
  04cd1f8  lfs 6, 256(1)
  04cd1fc  lfs 7, 248(1)
  04cd200  lfs 8, 252(1)
  04cd204  fmuls 5, 4, 4
  04cd208  fmuls 7, 7, 4
  04cd20c  fmuls 6, 6, 5
  04cd210  fmuls 3, 5, 5
  04cd214  fmuls 5, 8, 5
  04cd218  stfs 7, 248(1)
  04cd21c  fmuls 4, 6, 4
  04cd220  stfs 5, 252(1)
  04cd224  stfs 4, 256(1)
  04cd228  lfs 4, 228(4)
  04cd22c  fmuls 4, 4, 3
  04cd230  stfs 4, 244(4)
  04cd234  lfs 4, 4(5)
  04cd238  addic 4, 4, 8
  04cd23c  addic 5, 5, 8
  04cd240  fmuls 4, 4, 3
  04cd244  stfs 4, 4(6)
  04cd248  addic 6, 6, 8
  04cd24c  bdnz 0x4cd228
  04cd250  li 6, 4
  04cd254  ori 4, 1, 0
  04cd258  mtctr 6
  04cd25c  lis 5, 115
  04cd260  addic 6, 4, 244
  04cd264  addic 5, 5, 22752
  04cd268  ori 8, 6, 0
  04cd26c  lfs 3, 244(4)
  04cd270  lfs 4, 0(5)
  04cd274  fmuls 3, 3, 4
  04cd278  lfs 4, 4(5)
  04cd27c  addic 5, 5, 8
  04cd280  stfs 3, 244(4)
  04cd284  lfs 3, 4(6)
  04cd288  addic 4, 4, 8
  04cd28c  fmuls 3, 3, 4
  04cd290  stfs 3, 4(6)
  04cd294  addic 6, 6, 8
  04cd298  bdnz 0x4cd26c
  04cd29c  fmr 3, 31
  04cd2a0  ori 4, 1, 0
  04cd2a4  mtctr 7
  04cd2a8  lfs 4, 244(4)
  04cd2ac  fadds 3, 3, 4
  04cd2b0  addic 4, 4, 16
  04cd2b4  lfs 4, 4(8)
  04cd2b8  lfs 5, 8(8)
  04cd2bc  lfs 6, 12(8)
  04cd2c0  addic 8, 8, 16
  04cd2c4  fadds 3, 3, 4
  04cd2c8  fadds 3, 3, 5
  04cd2cc  fadds 3, 3, 6
  04cd2d0  bdnz 0x4cd2a8
  04cd2d4  lis 4, 77
  04cd2d8  addi 4, 4, -13084
  04cd2dc  lfs 4, 12(4)
  04cd2e0  fadds 3, 3, 4
  04cd2e4  fmadds 1, 3, 1, 2
  04cd2e8  lis 4, 77
  04cd2ec  lis 6, 114
  04cd2f0  addi 29, 4, -13084
  04cd2f4  lis 4, 114
  04cd2f8  addic 5, 30, 400
  04cd2fc  lfs 2, 16(29)
  04cd300  lfs 3, -3048(4)
  04cd304  lfs 4, 20(29)
  04cd308  fmuls 2, 3, 2
  04cd30c  lfs 5, -3052(6)
  04cd310  fmuls 4, 5, 4
  04cd314  fmr 3, 2
  04cd318  bl 0x10a2e0
  04cd31c  nop
  04cd320  ori 3, 31, 0
  04cd324  bl 0xefe40
  04cd328  nop
  04cd32c  lfs 2, 28(29)
  04cd330  lbz 3, 112(31)
  04cd334  fcmpu 0, 1, 2
  04cd338  cror 6, 0, 2
  04cd33c  bt 6, 0x4cd40c
  04cd340  lis 4, 77
  04cd344  addi 4, 4, -13084
  04cd348  lfs 2, 32(4)
  04cd34c  fcmpu 0, 1, 2
  04cd350  cror 6, 1, 2
  04cd354  bt 6, 0x4cd40c
  04cd358  lwz 4, 84(31)
  04cd35c  cmpwi 4, 0
  04cd360  bf 2, 0x4cd40c
  04cd364  lwz 4, 388(30)
  04cd368  lis 3, 165
  04cd36c  lfs 1, 16(31)
  04cd370  slwi 4, 4, 2
  04cd374  addic 3, 3, 7136
  04cd378  lfs 2, 20(31)
  04cd37c  extsw 4, 4
  04cd380  addic 30, 1, 112
  04cd384  lwzx 4, 3, 4
  04cd388  lis 3, 77
  04cd38c  addi 5, 3, -13084
  04cd390  lis 3, 114
  04cd394  lfs 3, 32(4)
  04cd398  fsubs 1, 3, 1
  04cd39c  lfs 3, 24(31)
  04cd3a0  stfs 1, 112(1)
  04cd3a4  lfs 1, 36(4)
  04cd3a8  fsubs 1, 1, 2
  04cd3ac  lfs 2, -3052(3)
  04cd3b0  ori 3, 30, 0
  04cd3b4  stfs 1, 116(1)
  04cd3b8  lfs 1, 40(4)
  04cd3bc  fsubs 1, 1, 3
  04cd3c0  stfs 1, 120(1)
  04cd3c4  lfs 1, 44(4)
  04cd3c8  stfs 1, 124(1)
  04cd3cc  lfs 1, 36(5)
  04cd3d0  fmuls 1, 2, 1
  04cd3d4  bl 0x110488
  04cd3d8  nop
  04cd3dc  lis 4, 143
  04cd3e0  fmr 2, 31
  04cd3e4  lis 5, 143
  04cd3e8  li 8, 0
  04cd3ec  ori 3, 31, 0
  04cd3f0  lfs 1, 21288(4)
  04cd3f4  lwz 6, 21292(5)
  04cd3f8  ori 4, 30, 0
  04cd3fc  extsw 6, 6
  04cd400  bl 0x100ef8
  04cd404  nop
  04cd408  b 0x4cdb18
  04cd40c  rlwinm 3, 3, 0, 30, 30
  04cd410  cmpwi 3, 0
  04cd414  bt 2, 0x4cdb18
  04cd418  lis 3, 16256
  04cd41c  li 4, 3
  04cd420  stw 3, 408(30)
  04cd424  lbz 3, 83(31)
  04cd428  stb 4, 32(31)
  04cd42c  cmpwi 3, 0
  04cd430  bt 2, 0x4cdb18
  04cd434  lis 3, 77
  04cd438  lis 4, 114
  04cd43c  addi 3, 3, -13084
  04cd440  li 5, 0
  04cd444  lfs 1, 24(3)
  04cd448  lfs 2, -3056(4)
  04cd44c  ori 3, 31, 0
  04cd450  fmuls 1, 2, 1
  04cd454  li 4, 0
  04cd458  fctiwz 1, 1
  04cd45c  stfd 1, 312(1)
  04cd460  lwz 6, 316(1)
  04cd464  extsw 6, 6
  04cd468  bl 0xfddc0
  04cd46c  nop
  04cd470  b 0x4cdb18
  04cd474  addic 3, 30, 412
  04cd478  bl 0x4fff60
  04cd47c  nop
  04cd480  cmpwi 3, 0
  04cd484  bt 2, 0x4cdb18
  04cd488  lis 3, 143
  04cd48c  li 4, 21296
  04cd490  vspltisw 4, -1
  04cd494  lis 6, 77
  04cd498  li 5, 40
  04cd49c  addi 7, 6, -13084
  04cd4a0  vslw 4, 4, 4
  04cd4a4  lvlx 2, 4, 3
  04cd4a8  lis 3, 114
  04cd4ac  vcfsx 2, 2, 0
  04cd4b0  li 4, -3056
  04cd4b4  lvlx 3, 5, 7
  04cd4b8  vspltw 3, 3, 0
  04cd4bc  lis 5, 143
  04cd4c0  lvlx 5, 4, 3
  04cd4c4  li 4, 412
  04cd4c8  lfs 1, 408(30)
  04cd4cc  vaddfp 2, 2, 3
  04cd4d0  ori 6, 29, 0
  04cd4d4  vmaddfp 2, 5, 2, 4
  04cd4d8  vctsxs 2, 2, 0
  04cd4dc  vspltw 2, 2, 0
  04cd4e0  stvewx 2, 4, 30
  04cd4e4  lfs 2, 21300(5)
  04cd4e8  fadds 1, 1, 2
  04cd4ec  lis 4, 143
  04cd4f0  lis 5, 114
  04cd4f4  stfs 1, 408(30)
  04cd4f8  lfs 1, 44(7)
  04cd4fc  lfs 2, 72(31)
  04cd500  lfs 3, 48(7)
  04cd504  fadds 1, 2, 1
  04cd508  lfs 4, 52(7)
  04cd50c  fsubs 5, 3, 2
  04cd510  fsubs 3, 3, 1
  04cd514  fsub 7, 2, 5
  04cd518  fsubs 6, 4, 1
  04cd51c  fsubs 4, 4, 2
  04cd520  fsub 8, 1, 3
  04cd524  fsel 2, 7, 5, 2
  04cd528  lfs 5, 56(7)
  04cd52c  fsel 1, 8, 3, 1
  04cd530  fsub 3, 4, 2
  04cd534  fsub 8, 6, 1
  04cd538  fsel 2, 3, 4, 2
  04cd53c  lfs 3, 60(7)
  04cd540  lfs 4, 64(7)
  04cd544  lfs 7, 24(31)
  04cd548  lfs 10, 68(7)
  04cd54c  fadds 7, 7, 31
  04cd550  fsel 1, 8, 6, 1
  04cd554  fmuls 6, 2, 2
  04cd558  fmuls 8, 1, 1
  04cd55c  fmuls 9, 6, 2
  04cd560  fmuls 11, 8, 1
  04cd564  fmuls 12, 6, 9
  04cd568  fmadds 2, 9, 5, 2
  04cd56c  lfs 9, 16(31)
  04cd570  fmuls 13, 8, 11
  04cd574  fmadds 1, 11, 5, 1
  04cd578  fmuls 11, 6, 12
  04cd57c  fmadds 2, 12, 3, 2
  04cd580  lfs 5, 20(31)
  04cd584  lfs 0, 28(31)
  04cd588  lfs 12, 21304(4)
  04cd58c  lfs 30, -3052(5)
  04cd590  li 4, 0
  04cd594  stfs 7, 136(1)
  04cd598  stfs 0, 140(1)
  04cd59c  fmuls 29, 8, 13
  04cd5a0  fmadds 1, 13, 3, 1
  04cd5a4  fmuls 3, 6, 11
  04cd5a8  stfs 5, 132(1)
  04cd5ac  fmadds 2, 11, 4, 2
  04cd5b0  stfs 9, 128(1)
  04cd5b4  fmuls 6, 12, 30
  04cd5b8  stw 4, 152(1)
  04cd5bc  addic 4, 1, 128
  04cd5c0  fmuls 8, 8, 29
  04cd5c4  fmadds 1, 29, 4, 1
  04cd5c8  fmuls 4, 12, 30
  04cd5cc  fmadds 2, 3, 10, 2
  04cd5d0  fmuls 3, 12, 30
  04cd5d4  ori 5, 31, 0
  04cd5d8  fmadds 1, 8, 10, 1
  04cd5dc  fmuls 2, 4, 2
  04cd5e0  fmuls 1, 6, 1
  04cd5e4  stfs 2, 148(1)
  04cd5e8  stfs 1, 144(1)
  04cd5ec  lfs 1, 72(7)
  04cd5f0  lfs 2, 408(30)
  04cd5f4  fdivs 2, 1, 2
  04cd5f8  lfs 4, -3056(3)
  04cd5fc  addic 3, 1, 144
  04cd600  fmr 1, 31
  04cd604  fmuls 2, 3, 2
  04cd608  stfs 2, 152(1)
  04cd60c  lfs 2, 76(7)
  04cd610  fmuls 2, 4, 2
  04cd614  fctiwz 2, 2
  04cd618  stfd 2, 312(1)
  04cd61c  lwz 7, 316(1)
  04cd620  extsw 7, 7
  04cd624  bl 0x470690
  04cd628  nop
  04cd62c  lwz 3, 408(30)
  04cd630  lis 5, 16800
  04cd634  srawi 4, 3, 31
  04cd638  srwi 6, 4, 1
  04cd63c  xor 3, 6, 3
  04cd640  subc 3, 3, 4
  04cd644  cmpw 3, 5
  04cd648  bf 1, 0x4cdb18
  04cd64c  li 3, 4
  04cd650  lbz 4, 83(31)
  04cd654  cmpwi 4, 1
  04cd658  stb 3, 32(31)
  04cd65c  bt 2, 0x4cdb18
  04cd660  lis 3, 77
  04cd664  lis 4, 114
  04cd668  addi 3, 3, -13084
  04cd66c  li 5, 0
  04cd670  lfs 1, 24(3)
  04cd674  lfs 2, -3056(4)
  04cd678  ori 3, 31, 0
  04cd67c  li 4, 1
  04cd680  fmuls 1, 2, 1
  04cd684  fctiwz 1, 1
  04cd688  stfd 1, 312(1)
  04cd68c  lwz 6, 316(1)
  04cd690  extsw 6, 6
  04cd694  bl 0xfddc0
  04cd698  nop
  04cd69c  b 0x4cdb18
  04cd6a0  lfs 1, 16(29)
  04cd6a4  lfs 2, 16(31)
  04cd6a8  lfs 3, 20(29)
  04cd6ac  lfs 4, 20(31)
  04cd6b0  fsubs 1, 1, 2
  04cd6b4  lis 3, 77
  04cd6b8  fsubs 2, 3, 4
  04cd6bc  addi 4, 3, -13084
  04cd6c0  lis 5, 115
  04cd6c4  addic 3, 31, 72
  04cd6c8  addic 5, 5, 22784
  04cd6cc  fabs 3, 1
  04cd6d0  fabs 4, 2
  04cd6d4  stfs 1, 176(1)
  04cd6d8  stfs 2, 180(1)
  04cd6dc  fsubs 1, 3, 4
  04cd6e0  stfs 1, 184(1)
  04cd6e4  lwz 6, 176(1)
  04cd6e8  lfs 31, 8(4)
  04cd6ec  lfs 1, 176(1)
  04cd6f0  lwz 4, 180(1)
  04cd6f4  lfs 2, 180(1)
  04cd6f8  fabs 1, 1
  04cd6fc  lwz 7, 184(1)
  04cd700  rlwinm 4, 4, 3, 29, 29
  04cd704  fabs 5, 2
  04cd708  lfs 2, 184(1)
  04cd70c  rlwimi 4, 7, 2, 30, 30
  04cd710  fsub 6, 2, 31
  04cd714  rlwimi 4, 6, 4, 28, 28
  04cd718  fsub 7, 2, 31
  04cd71c  ori 6, 5, 0
  04cd720  rlwimi 6, 4, 2, 26, 28
  04cd724  slwi 4, 4, 2
  04cd728  clrldi 6, 6, 32
  04cd72c  fsel 4, 6, 1, 4
  04cd730  lfsx 1, 5, 4
  04cd734  lfs 2, 4(6)
  04cd738  fsel 3, 7, 5, 3
  04cd73c  fcmpu 0, 4, 31
  04cd740  bt 1, 0x4cd74c
  04cd744  fmr 1, 31
  04cd748  b 0x4cd870
  04cd74c  fsubs 5, 3, 4
  04cd750  fadds 3, 3, 4
  04cd754  addic 4, 1, 16
  04cd758  li 8, 2
  04cd75c  addic 5, 4, 196
  04cd760  addic 6, 4, 212
  04cd764  mtctr 8
  04cd768  fdivs 3, 5, 3
  04cd76c  fmuls 4, 3, 3
  04cd770  stfs 3, 224(1)
  04cd774  stfs 3, 216(1)
  04cd778  stfs 3, 220(1)
  04cd77c  stfs 3, 212(1)
  04cd780  lfs 6, 224(1)
  04cd784  lfs 7, 216(1)
  04cd788  lfs 8, 220(1)
  04cd78c  fmuls 5, 4, 4
  04cd790  fmuls 7, 7, 4
  04cd794  fmuls 6, 6, 5
  04cd798  fmuls 3, 5, 5
  04cd79c  fmuls 5, 8, 5
  04cd7a0  stfs 7, 216(1)
  04cd7a4  fmuls 4, 6, 4
  04cd7a8  stfs 5, 220(1)
  04cd7ac  stfs 4, 224(1)
  04cd7b0  lfs 4, 196(4)
  04cd7b4  fmuls 4, 4, 3
  04cd7b8  stfs 4, 212(4)
  04cd7bc  lfs 4, 4(5)
  04cd7c0  addic 4, 4, 8
  04cd7c4  addic 5, 5, 8
  04cd7c8  fmuls 4, 4, 3
  04cd7cc  stfs 4, 4(6)
  04cd7d0  addic 6, 6, 8
  04cd7d4  bdnz 0x4cd7b0
  04cd7d8  li 6, 4
  04cd7dc  ori 4, 1, 0
  04cd7e0  mtctr 6
  04cd7e4  lis 5, 115
  04cd7e8  addic 6, 4, 212
  04cd7ec  addic 5, 5, 22752
  04cd7f0  ori 7, 6, 0
  04cd7f4  lfs 3, 212(4)
  04cd7f8  lfs 4, 0(5)
  04cd7fc  fmuls 3, 3, 4
  04cd800  lfs 4, 4(5)
  04cd804  addic 5, 5, 8
  04cd808  stfs 3, 212(4)
  04cd80c  lfs 3, 4(6)
  04cd810  addic 4, 4, 8
  04cd814  fmuls 3, 3, 4
  04cd818  stfs 3, 4(6)
  04cd81c  addic 6, 6, 8
  04cd820  bdnz 0x4cd7f4
  04cd824  fmr 3, 31
  04cd828  ori 4, 1, 0
  04cd82c  mtctr 8
  04cd830  lfs 4, 212(4)
  04cd834  fadds 3, 3, 4
  04cd838  addic 4, 4, 16
  04cd83c  lfs 4, 4(7)
  04cd840  lfs 5, 8(7)
  04cd844  lfs 6, 12(7)
  04cd848  addic 7, 7, 16
  04cd84c  fadds 3, 3, 4
  04cd850  fadds 3, 3, 5
  04cd854  fadds 3, 3, 6
  04cd858  bdnz 0x4cd830
  04cd85c  lis 4, 77
  04cd860  addi 4, 4, -13084
  04cd864  lfs 4, 12(4)
  04cd868  fadds 3, 3, 4
  04cd86c  fmadds 1, 3, 1, 2
  04cd870  lis 4, 77
  04cd874  lis 6, 114
  04cd878  addi 29, 4, -13084
  04cd87c  lis 4, 114
  04cd880  addic 5, 30, 400
  04cd884  lfs 2, 16(29)
  04cd888  lfs 3, -3048(4)
  04cd88c  lfs 4, 20(29)
  04cd890  fmuls 2, 3, 2
  04cd894  lfs 5, -3052(6)
  04cd898  fmuls 4, 5, 4
  04cd89c  fmr 3, 2
  04cd8a0  bl 0x10a2e0
  04cd8a4  nop
  04cd8a8  ori 3, 31, 0
  04cd8ac  bl 0xefe40
  04cd8b0  nop
  04cd8b4  lfs 2, 28(29)
  04cd8b8  lbz 3, 112(31)
  04cd8bc  fcmpu 0, 1, 2
  04cd8c0  cror 6, 0, 2
  04cd8c4  bt 6, 0x4cd988
  04cd8c8  lis 4, 77
  04cd8cc  addi 4, 4, -13084
  04cd8d0  lfs 2, 32(4)
  04cd8d4  fcmpu 0, 1, 2
  04cd8d8  cror 6, 1, 2
  04cd8dc  bt 6, 0x4cd988
  04cd8e0  lwz 4, 388(30)
  04cd8e4  lis 3, 165
  04cd8e8  lfs 1, 16(31)
  04cd8ec  slwi 4, 4, 2
  04cd8f0  addic 3, 3, 7136
  04cd8f4  extsw 4, 4
  04cd8f8  addic 30, 1, 160
  04cd8fc  lwzx 4, 3, 4
  04cd900  lfs 2, 20(31)
  04cd904  lis 3, 77
  04cd908  addi 5, 3, -13084
  04cd90c  lfs 3, 16(4)
  04cd910  lis 3, 114
  04cd914  fsubs 1, 3, 1
  04cd918  lfs 3, 24(31)
  04cd91c  stfs 1, 160(1)
  04cd920  lfs 1, 20(4)
  04cd924  fsubs 1, 1, 2
  04cd928  lfs 2, -3052(3)
  04cd92c  ori 3, 30, 0
  04cd930  stfs 1, 164(1)
  04cd934  lfs 1, 24(4)
  04cd938  fsubs 1, 1, 3
  04cd93c  stfs 1, 168(1)
  04cd940  lfs 1, 28(4)
  04cd944  stfs 1, 172(1)
  04cd948  lfs 1, 80(5)
  04cd94c  fmuls 1, 2, 1
  04cd950  bl 0x110488
  04cd954  nop
  04cd958  lis 5, 143
  04cd95c  lis 6, 143
  04cd960  fmr 2, 31
  04cd964  ori 3, 31, 0
  04cd968  ori 4, 30, 0
  04cd96c  li 8, 0
  04cd970  lfs 1, 21288(5)
  04cd974  lwz 6, 21292(6)
  04cd978  extsw 6, 6
  04cd97c  bl 0x100ef8
  04cd980  nop
  04cd984  b 0x4cdb18
  04cd988  rlwinm 3, 3, 0, 30, 30
  04cd98c  cmpwi 3, 0
  04cd990  bt 2, 0x4cdb18
  04cd994  lis 3, 77
  04cd998  addi 3, 3, -13084
  04cd99c  lfs 1, 84(3)
  04cd9a0  lfs 2, 88(3)
  04cd9a4  bl 0xfcbe8
  04cd9a8  nop
  04cd9ac  lis 3, 114
  04cd9b0  lfs 2, -3056(3)
  04cd9b4  fmuls 1, 1, 2
  04cd9b8  bl 0x502758
  04cd9bc  nop
  04cd9c0  li 4, 1
  04cd9c4  stw 3, 416(30)
  04cd9c8  lbz 3, 83(31)
  04cd9cc  cmpwi 3, 0
  04cd9d0  stb 4, 32(31)
  04cd9d4  bt 2, 0x4cdb18
  04cd9d8  lis 3, 77
  04cd9dc  lis 4, 114
  04cd9e0  addi 3, 3, -13084
  04cd9e4  li 5, 0
  04cd9e8  lfs 1, 24(3)
  04cd9ec  lfs 2, -3056(4)
  04cd9f0  ori 3, 31, 0
  04cd9f4  li 4, 0
  04cd9f8  fmuls 1, 2, 1
  04cd9fc  fctiwz 1, 1
  04cda00  stfd 1, 312(1)
  04cda04  lwz 6, 316(1)
  04cda08  extsw 6, 6
  04cda0c  bl 0xfddc0
  04cda10  nop
  04cda14  b 0x4cdb18
  04cda18  ori 3, 31, 0
  04cda1c  addic 4, 30, 112
  04cda20  bl 0x10b030
  04cda24  nop
  04cda28  rlwinm 4, 3, 0, 25, 25
  04cda2c  cmpwi 4, 0
  04cda30  bt 2, 0x4cda88
  04cda34  li 3, 1
  04cda38  lbz 4, 83(31)
  04cda3c  cmpwi 4, 0
  04cda40  stb 3, 32(31)
  04cda44  bt 2, 0x4cdb18
  04cda48  lis 3, 77
  04cda4c  lis 4, 114
  04cda50  addi 3, 3, -13084
  04cda54  li 5, 0
  04cda58  lfs 1, 24(3)
  04cda5c  lfs 2, -3056(4)
  04cda60  ori 3, 31, 0
  04cda64  li 4, 0
  04cda68  fmuls 1, 2, 1
  04cda6c  fctiwz 1, 1
  04cda70  stfd 1, 312(1)
  04cda74  lwz 6, 316(1)
  04cda78  extsw 6, 6
  04cda7c  bl 0xfddc0
  04cda80  nop
  04cda84  b 0x4cdb18
  04cda88  li 4, 288
  04cda8c  and 3, 3, 4
  04cda90  cmpwi 3, 0
  04cda94  bt 2, 0x4cdaa8
  04cda98  ori 3, 31, 0
  04cda9c  bl 0xefb38
  04cdaa0  nop
  04cdaa4  b 0x4cdb18
  04cdaa8  lhz 3, 174(30)
  04cdaac  cmpwi 3, 2
  04cdab0  bf 2, 0x4cdb18
  04cdab4  lis 3, 143
  04cdab8  lfs 1, 21280(3)
  04cdabc  stfs 1, 88(31)
  04cdac0  b 0x4cdb18
  04cdac4  addic 4, 30, 112
  04cdac8  ori 3, 31, 0
  04cdacc  bl 0x10b030
  04cdad0  nop
  04cdad4  li 4, 353
  04cdad8  and 3, 3, 4
  04cdadc  cmpwi 3, 0
  04cdae0  bt 2, 0x4cdb18
  04cdae4  lis 3, 77
  04cdae8  addic 4, 31, 16
  04cdaec  addi 5, 3, -13084
  04cdaf0  ori 3, 31, 0
  04cdaf4  li 6, -1
  04cdaf8  lfs 1, 40(5)
  04cdafc  lfs 2, 92(5)
  04cdb00  bl 0x10fb28
  04cdb04  nop
  04cdb08  ori 3, 31, 0
  04cdb0c  bl 0xefb38
  04cdb10  nop
  04cdb14  b 0x4cdb18
  04cdb18  ld 0, 400(1)
  04cdb1c  mtlr 0
  04cdb20  lfd 29, 360(1)
  04cdb24  lfd 30, 368(1)
  04cdb28  lfd 31, 376(1)
  04cdb2c  ld 29, 336(1)
  04cdb30  ld 30, 344(1)
  04cdb34  ld 31, 352(1)
  04cdb38  addi 1, 1, 384
  04cdb3c  blr

M984_004cdb40:   # 0x4cdb40, 0x14 bytes
  04cdb40  lis 3, 143
  04cdb44  lis 4, 1
  04cdb48  addic 3, 3, 21312
  04cdb4c  stw 4, 72(3)
  04cdb50  blr

M984_004cdb60:   # 0x4cdb60, 0x110 bytes
  04cdb60  stdu 1, -144(1)
  04cdb64  mflr 0
  04cdb68  std 0, 160(1)
  04cdb6c  std 31, 136(1)
  04cdb70  std 29, 120(1)
  04cdb74  ori 31, 3, 0
  04cdb78  li 3, 99
  04cdb7c  std 30, 128(1)
  04cdb80  lwz 29, 120(31)
  04cdb84  bl 0xefa28
  04cdb88  nop
  04cdb8c  ori 30, 3, 0
  04cdb90  cmpwi 30, 0
  04cdb94  bt 2, 0x4cdc50
  04cdb98  lbz 3, 48(31)
  04cdb9c  stb 3, 48(30)
  04cdba0  lhz 3, 50(31)
  04cdba4  sth 3, 50(30)
  04cdba8  lbz 3, 49(31)
  04cdbac  stb 3, 49(30)
  04cdbb0  lfs 1, 64(31)
  04cdbb4  lis 3, 77
  04cdbb8  stfs 1, 64(30)
  04cdbbc  lfs 1, 68(31)
  04cdbc0  addi 3, 3, -9384
  04cdbc4  stfs 1, 68(30)
  04cdbc8  lfs 1, 72(31)
  04cdbcc  stfs 1, 72(30)
  04cdbd0  lfs 1, 76(31)
  04cdbd4  stfs 1, 76(30)
  04cdbd8  lfs 1, 16(31)
  04cdbdc  stfs 1, 16(30)
  04cdbe0  lfs 1, 20(31)
  04cdbe4  stfs 1, 20(30)
  04cdbe8  lfs 1, 24(31)
  04cdbec  lwz 4, 100(29)
  04cdbf0  stfs 1, 24(30)
  04cdbf4  lfs 1, 28(31)
  04cdbf8  cmpwi 4, 0
  04cdbfc  stfs 1, 28(30)
  04cdc00  lfs 1, 0(3)
  04cdc04  bt 2, 0x4cdc20
  04cdc08  fmr 2, 1
  04cdc0c  lfs 1, 68(31)
  04cdc10  bl 0x502578
  04cdc14  nop
  04cdc18  stfs 1, 68(30)
  04cdc1c  b 0x4cdc34
  04cdc20  fmr 2, 1
  04cdc24  lfs 1, 72(31)
  04cdc28  bl 0x502578
  04cdc2c  nop
  04cdc30  stfs 1, 72(30)
  04cdc34  li 4, 3
  04cdc38  ld 5, 56(31)
  04cdc3c  ori 3, 30, 0
  04cdc40  stb 4, 32(30)
  04cdc44  std 5, 56(30)
  04cdc48  bl 0xf31a8
  04cdc4c  nop
  04cdc50  ori 3, 30, 0
  04cdc54  ld 0, 160(1)
  04cdc58  mtlr 0
  04cdc5c  ld 29, 120(1)
  04cdc60  ld 30, 128(1)
  04cdc64  ld 31, 136(1)
  04cdc68  addi 1, 1, 144
  04cdc6c  blr
