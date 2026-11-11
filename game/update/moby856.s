# game/update/moby856.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M856_0048f5fc:   # 0x48f5fc, 0x14 bytes
  048f5fc  lis 3, 140
  048f600  lis 4, 1
  048f604  addic 3, 3, 31628
  048f608  stw 4, 72(3)
  048f60c  blr

UpdateMoby_856:   # 0x48f650, 0xb24 bytes
  048f650  stdu 1, -432(1)
  048f654  mflr 0
  048f658  std 0, 448(1)
  048f65c  stfd 30, 416(1)
  048f660  stfd 31, 424(1)
  048f664  addi 0, 1, 304
  048f668  stvx 30, 0, 0
  048f66c  addic 0, 0, 16
  048f670  stvx 31, 0, 0
  048f674  std 30, 400(1)
  048f678  li 4, 0
  048f67c  lwz 30, 120(3)
  048f680  std 31, 408(1)
  048f684  lis 5, 270
  048f688  std 29, 392(1)
  048f68c  ori 31, 3, 0
  048f690  li 29, 1
  048f694  stw 4, 216(1)
  048f698  stw 4, 220(1)
  048f69c  std 27, 376(1)
  048f6a0  stw 4, 224(1)
  048f6a4  ori 27, 29, 0
  048f6a8  stw 4, 228(1)
  048f6ac  stw 4, 232(1)
  048f6b0  lwz 3, 0(30)
  048f6b4  lwz 4, 976(5)
  048f6b8  stw 3, 216(1)
  048f6bc  std 28, 384(1)
  048f6c0  std 26, 368(1)
  048f6c4  std 25, 360(1)
  048f6c8  std 24, 352(1)
  048f6cc  std 23, 344(1)
  048f6d0  cmpwi 4, 0
  048f6d4  bt 2, 0x48f7f4
  048f6d8  lis 3, 73
  048f6dc  lis 4, -32768
  048f6e0  vspltisw 30, 0
  048f6e4  addi 3, 3, -2544
  048f6e8  lis 28, 165
  048f6ec  lis 26, 151
  048f6f0  ori 4, 4, 255
  048f6f4  li 29, 0
  048f6f8  <unknown>
  048f6fc  addic 28, 28, 7136
  048f700  lfs 31, 4(3)
  048f704  addic 26, 26, -25376
  048f708  vspltw 31, 31, 0
  048f70c  clrldi 25, 4, 32
  048f710  lwz 5, 8(30)
  048f714  vcfsx 2, 30, 0
  048f718  vspltisw 3, -1
  048f71c  slwi 5, 5, 2
  048f720  li 3, 32
  048f724  extsw 5, 5
  048f728  vslw 3, 3, 3
  048f72c  li 4, 16
  048f730  li 6, 36
  048f734  lwzx 7, 28, 5
  048f738  li 11, 24
  048f73c  li 5, 112
  048f740  fmr 1, 31
  048f744  li 12, 116
  048f748  vmaddfp 2, 2, 31, 3
  048f74c  <unknown>
  048f750  <unknown>
  048f754  li 4, 20
  048f758  <unknown>
  048f75c  vsubfp 3, 3, 4
  048f760  lfs 2, 44(7)
  048f764  li 3, 40
  048f768  li 24, 120
  048f76c  <unknown>
  048f770  ori 6, 25, 0
  048f774  vsubfp 5, 5, 6
  048f778  <unknown>
  048f77c  <unknown>
  048f780  addic 3, 1, 112
  048f784  li 8, 127
  048f788  vmaddfp 3, 2, 3, 4
  048f78c  vsubfp 4, 6, 7
  048f790  li 9, 2
  048f794  li 10, 255
  048f798  vspltw 3, 3, 0
  048f79c  stvewx 3, 5, 1
  048f7a0  <unknown>
  048f7a4  lwz 4, 8320(26)
  048f7a8  vmaddfp 3, 2, 5, 3
  048f7ac  li 5, 2
  048f7b0  vspltw 3, 3, 0
  048f7b4  stvewx 3, 12, 1
  048f7b8  <unknown>
  048f7bc  vmaddfp 2, 2, 4, 3
  048f7c0  vspltw 2, 2, 0
  048f7c4  stvewx 2, 24, 1
  048f7c8  stfs 2, 124(1)
  048f7cc  bl 0x12d0e8
  048f7d0  nop
  048f7d4  vspltisw 2, 1
  048f7d8  addic 29, 29, 1
  048f7dc  cmpwi 29, 12
  048f7e0  vadduwm 30, 30, 2
  048f7e4  bt 0, 0x48f710
  048f7e8  lwz 3, 8(30)
  048f7ec  li 29, 2
  048f7f0  stw 3, 220(1)
  048f7f4  lis 3, 270
  048f7f8  lwz 3, 980(3)
  048f7fc  cmpwi 3, 0
  048f800  bt 2, 0x48f92c
  048f804  lis 3, 73
  048f808  vspltisw 30, 0
  048f80c  lis 4, -32768
  048f810  addi 3, 3, -2544
  048f814  lis 25, 151
  048f818  lis 26, 165
  048f81c  ori 4, 4, 255
  048f820  li 28, 0
  048f824  <unknown>
  048f828  addic 25, 25, -25376
  048f82c  addic 26, 26, 7136
  048f830  lfs 31, 4(3)
  048f834  clrldi 24, 4, 32
  048f838  vspltw 31, 31, 0
  048f83c  lwz 5, 12(30)
  048f840  li 3, 32
  048f844  vcfsx 2, 30, 0
  048f848  vspltisw 3, -1
  048f84c  slwi 5, 5, 2
  048f850  li 4, 16
  048f854  extsw 5, 5
  048f858  vslw 3, 3, 3
  048f85c  li 6, 40
  048f860  li 11, 24
  048f864  lwzx 7, 26, 5
  048f868  li 12, 132
  048f86c  li 5, 128
  048f870  fmr 1, 31
  048f874  vmaddfp 2, 2, 31, 3
  048f878  <unknown>
  048f87c  <unknown>
  048f880  li 3, 36
  048f884  li 4, 20
  048f888  vsubfp 3, 3, 4
  048f88c  li 23, 136
  048f890  <unknown>
  048f894  <unknown>
  048f898  lfs 2, 44(7)
  048f89c  vsubfp 5, 5, 6
  048f8a0  <unknown>
  048f8a4  addic 3, 1, 128
  048f8a8  ori 6, 24, 0
  048f8ac  vmaddfp 3, 2, 3, 4
  048f8b0  <unknown>
  048f8b4  vsubfp 4, 6, 4
  048f8b8  li 8, 127
  048f8bc  li 9, 2
  048f8c0  li 10, 255
  048f8c4  vspltw 3, 3, 0
  048f8c8  stvewx 3, 5, 1
  048f8cc  <unknown>
  048f8d0  li 5, 2
  048f8d4  lwz 4, 8320(25)
  048f8d8  vmaddfp 3, 2, 5, 3
  048f8dc  vspltw 3, 3, 0
  048f8e0  stvewx 3, 12, 1
  048f8e4  <unknown>
  048f8e8  vmaddfp 2, 2, 4, 3
  048f8ec  vspltw 2, 2, 0
  048f8f0  stvewx 2, 23, 1
  048f8f4  stfs 2, 140(1)
  048f8f8  bl 0x12d0e8
  048f8fc  nop
  048f900  vspltisw 2, 1
  048f904  addic 28, 28, 1
  048f908  cmpwi 28, 12
  048f90c  vadduwm 30, 30, 2
  048f910  bt 0, 0x48f83c
  048f914  ori 3, 1, 0
  048f918  lwz 4, 12(30)
  048f91c  rlwimi 3, 29, 2, 28, 29
  048f920  addic 29, 29, 1
  048f924  clrldi 3, 3, 32
  048f928  stw 4, 216(3)
  048f92c  lis 3, 270
  048f930  lwz 3, 984(3)
  048f934  cmpwi 3, 0
  048f938  bt 2, 0x48fa64
  048f93c  lis 3, 73
  048f940  vspltisw 30, 0
  048f944  lis 4, -32768
  048f948  addi 3, 3, -2544
  048f94c  lis 25, 151
  048f950  lis 26, 165
  048f954  ori 4, 4, 255
  048f958  li 28, 0
  048f95c  <unknown>
  048f960  addic 25, 25, -25376
  048f964  addic 26, 26, 7136
  048f968  lfs 31, 4(3)
  048f96c  clrldi 24, 4, 32
  048f970  vspltw 31, 31, 0
  048f974  lwz 5, 16(30)
  048f978  li 3, 32
  048f97c  vcfsx 2, 30, 0
  048f980  vspltisw 3, -1
  048f984  slwi 5, 5, 2
  048f988  li 4, 16
  048f98c  extsw 5, 5
  048f990  vslw 3, 3, 3
  048f994  li 6, 40
  048f998  li 11, 24
  048f99c  lwzx 7, 26, 5
  048f9a0  li 12, 148
  048f9a4  li 5, 144
  048f9a8  fmr 1, 31
  048f9ac  vmaddfp 2, 2, 31, 3
  048f9b0  <unknown>
  048f9b4  <unknown>
  048f9b8  li 3, 36
  048f9bc  li 4, 20
  048f9c0  vsubfp 3, 3, 4
  048f9c4  li 23, 152
  048f9c8  <unknown>
  048f9cc  <unknown>
  048f9d0  lfs 2, 44(7)
  048f9d4  vsubfp 5, 5, 6
  048f9d8  <unknown>
  048f9dc  addic 3, 1, 144
  048f9e0  ori 6, 24, 0
  048f9e4  vmaddfp 3, 2, 3, 4
  048f9e8  <unknown>
  048f9ec  vsubfp 4, 6, 4
  048f9f0  li 8, 127
  048f9f4  li 9, 2
  048f9f8  li 10, 255
  048f9fc  vspltw 3, 3, 0
  048fa00  stvewx 3, 5, 1
  048fa04  <unknown>
  048fa08  li 5, 2
  048fa0c  lwz 4, 8320(25)
  048fa10  vmaddfp 3, 2, 5, 3
  048fa14  vspltw 3, 3, 0
  048fa18  stvewx 3, 12, 1
  048fa1c  <unknown>
  048fa20  vmaddfp 2, 2, 4, 3
  048fa24  vspltw 2, 2, 0
  048fa28  stvewx 2, 23, 1
  048fa2c  stfs 2, 156(1)
  048fa30  bl 0x12d0e8
  048fa34  nop
  048fa38  vspltisw 2, 1
  048fa3c  addic 28, 28, 1
  048fa40  cmpwi 28, 12
  048fa44  vadduwm 30, 30, 2
  048fa48  bt 0, 0x48f974
  048fa4c  slwi 3, 29, 2
  048fa50  lwz 4, 16(30)
  048fa54  addic 29, 29, 1
  048fa58  addc 3, 1, 3
  048fa5c  clrldi 3, 3, 32
  048fa60  stw 4, 216(3)
  048fa64  lis 3, 270
  048fa68  lwz 3, 988(3)
  048fa6c  cmpwi 3, 0
  048fa70  bt 2, 0x48fb9c
  048fa74  lis 3, 73
  048fa78  vspltisw 30, 0
  048fa7c  lis 4, -32768
  048fa80  addi 3, 3, -2544
  048fa84  lis 25, 151
  048fa88  lis 26, 165
  048fa8c  ori 4, 4, 255
  048fa90  li 28, 0
  048fa94  <unknown>
  048fa98  addic 25, 25, -25376
  048fa9c  addic 26, 26, 7136
  048faa0  lfs 31, 4(3)
  048faa4  clrldi 24, 4, 32
  048faa8  vspltw 31, 31, 0
  048faac  lwz 5, 20(30)
  048fab0  li 3, 32
  048fab4  vcfsx 2, 30, 0
  048fab8  vspltisw 3, -1
  048fabc  slwi 5, 5, 2
  048fac0  li 4, 16
  048fac4  extsw 5, 5
  048fac8  vslw 3, 3, 3
  048facc  li 6, 40
  048fad0  li 11, 24
  048fad4  lwzx 7, 26, 5
  048fad8  li 12, 164
  048fadc  li 5, 160
  048fae0  fmr 1, 31
  048fae4  vmaddfp 2, 2, 31, 3
  048fae8  <unknown>
  048faec  <unknown>
  048faf0  li 3, 36
  048faf4  li 4, 20
  048faf8  vsubfp 3, 3, 4
  048fafc  li 23, 168
  048fb00  <unknown>
  048fb04  <unknown>
  048fb08  lfs 2, 44(7)
  048fb0c  vsubfp 5, 5, 6
  048fb10  <unknown>
  048fb14  addic 3, 1, 160
  048fb18  ori 6, 24, 0
  048fb1c  vmaddfp 3, 2, 3, 4
  048fb20  <unknown>
  048fb24  vsubfp 4, 6, 4
  048fb28  li 8, 127
  048fb2c  li 9, 2
  048fb30  li 10, 255
  048fb34  vspltw 3, 3, 0
  048fb38  stvewx 3, 5, 1
  048fb3c  <unknown>
  048fb40  li 5, 2
  048fb44  lwz 4, 8320(25)
  048fb48  vmaddfp 3, 2, 5, 3
  048fb4c  vspltw 3, 3, 0
  048fb50  stvewx 3, 12, 1
  048fb54  <unknown>
  048fb58  vmaddfp 2, 2, 4, 3
  048fb5c  vspltw 2, 2, 0
  048fb60  stvewx 2, 23, 1
  048fb64  stfs 2, 172(1)
  048fb68  bl 0x12d0e8
  048fb6c  nop
  048fb70  vspltisw 2, 1
  048fb74  addic 28, 28, 1
  048fb78  cmpwi 28, 12
  048fb7c  vadduwm 30, 30, 2
  048fb80  bt 0, 0x48faac
  048fb84  slwi 3, 29, 2
  048fb88  lwz 4, 20(30)
  048fb8c  addic 29, 29, 1
  048fb90  addc 3, 1, 3
  048fb94  clrldi 3, 3, 32
  048fb98  stw 4, 216(3)
  048fb9c  lis 3, 140
  048fba0  lwz 3, 31736(3)
  048fba4  cmpwi 3, 0
  048fba8  bt 2, 0x48fbc4
  048fbac  lwz 5, 4(30)
  048fbb0  addic 3, 1, 216
  048fbb4  ori 4, 29, 0
  048fbb8  extsw 5, 5
  048fbbc  bl 0x11440c
  048fbc0  nop
  048fbc4  lbz 3, 32(31)
  048fbc8  cmpwi 3, 0
  048fbcc  cmpwi 1, 3, 1
  048fbd0  cmpwi 6, 3, -1
  048fbd4  bt 1, 0x48fbe0
  048fbd8  bf 25, 0x490128
  048fbdc  b 0x48fbe8
  048fbe0  bf 5, 0x48fbf0
  048fbe4  b 0x490128
  048fbe8  stb 27, 32(31)
  048fbec  b 0x490128
  048fbf0  lis 3, 151
  048fbf4  addic 3, 3, -25376
  048fbf8  lwz 4, 8324(3)
  048fbfc  cmpwi 4, 4
  048fc00  bf 2, 0x490128
  048fc04  lfs 1, 20(31)
  048fc08  lfs 2, 132(3)
  048fc0c  lfs 3, 16(31)
  048fc10  fsubs 1, 1, 2
  048fc14  lfs 2, 128(3)
  048fc18  fsubs 2, 3, 2
  048fc1c  lfs 3, 24(31)
  048fc20  lfs 4, 136(3)
  048fc24  fsubs 3, 3, 4
  048fc28  fmuls 1, 1, 1
  048fc2c  lis 4, 73
  048fc30  addi 4, 4, -2544
  048fc34  fmadds 1, 2, 2, 1
  048fc38  lfs 2, 8(4)
  048fc3c  fmadds 1, 3, 3, 1
  048fc40  fsqrts 1, 1
  048fc44  fcmpu 0, 1, 2
  048fc48  cror 6, 0, 2
  048fc4c  bt 6, 0x490128
  048fc50  lis 4, 73
  048fc54  addic 6, 1, 216
  048fc58  lwz 5, 4(30)
  048fc5c  addi 4, 4, -2544
  048fc60  addic 8, 3, 128
  048fc64  ori 3, 6, 0
  048fc68  addic 7, 31, 16
  048fc6c  addic 9, 1, 176
  048fc70  lfs 1, 12(4)
  048fc74  extsw 5, 5
  048fc78  ori 4, 29, 0
  048fc7c  bl 0x114d58
  048fc80  nop
  048fc84  cmpwi 3, 0
  048fc88  bt 2, 0x490128
  048fc8c  lfs 1, 176(1)
  048fc90  lfs 2, 16(31)
  048fc94  lfs 3, 180(1)
  048fc98  lis 3, 73
  048fc9c  lfs 4, 20(31)
  048fca0  fsubs 1, 1, 2
  048fca4  addi 4, 3, -2544
  048fca8  fsubs 2, 3, 4
  048fcac  lis 29, 115
  048fcb0  addic 3, 31, 72
  048fcb4  addic 29, 29, 22784
  048fcb8  fabs 3, 1
  048fcbc  fabs 4, 2
  048fcc0  stfs 1, 204(1)
  048fcc4  stfs 2, 208(1)
  048fcc8  fsubs 1, 3, 4
  048fccc  stfs 1, 212(1)
  048fcd0  lwz 5, 204(1)
  048fcd4  lfs 30, 16(4)
  048fcd8  lfs 1, 204(1)
  048fcdc  lwz 6, 208(1)
  048fce0  lfs 2, 208(1)
  048fce4  lwz 7, 212(1)
  048fce8  rlwinm 6, 6, 3, 29, 29
  048fcec  fabs 5, 2
  048fcf0  lfs 2, 212(1)
  048fcf4  fabs 1, 1
  048fcf8  rlwimi 6, 7, 2, 30, 30
  048fcfc  fsub 6, 2, 30
  048fd00  rlwimi 6, 5, 4, 28, 28
  048fd04  fsub 7, 2, 30
  048fd08  ori 5, 29, 0
  048fd0c  rlwimi 5, 6, 2, 26, 28
  048fd10  slwi 6, 6, 2
  048fd14  clrldi 5, 5, 32
  048fd18  fsel 4, 6, 1, 4
  048fd1c  lfsx 1, 29, 6
  048fd20  lfs 2, 4(5)
  048fd24  fsel 3, 7, 5, 3
  048fd28  lfs 31, 20(4)
  048fd2c  fcmpu 0, 4, 30
  048fd30  bt 1, 0x48fd3c
  048fd34  fmr 1, 30
  048fd38  b 0x48fe54
  048fd3c  fsubs 5, 3, 4
  048fd40  fadds 3, 3, 4
  048fd44  addic 4, 1, 16
  048fd48  li 8, 2
  048fd4c  addic 5, 4, 252
  048fd50  addic 6, 4, 268
  048fd54  mtctr 8
  048fd58  fdivs 3, 5, 3
  048fd5c  fmuls 4, 3, 3
  048fd60  stfs 3, 280(1)
  048fd64  stfs 3, 272(1)
  048fd68  stfs 3, 276(1)
  048fd6c  stfs 3, 268(1)
  048fd70  lfs 6, 280(1)
  048fd74  lfs 7, 272(1)
  048fd78  lfs 8, 276(1)
  048fd7c  fmuls 5, 4, 4
  048fd80  fmuls 7, 7, 4
  048fd84  fmuls 6, 6, 5
  048fd88  fmuls 3, 5, 5
  048fd8c  fmuls 5, 8, 5
  048fd90  stfs 7, 272(1)
  048fd94  fmuls 4, 6, 4
  048fd98  stfs 5, 276(1)
  048fd9c  stfs 4, 280(1)
  048fda0  lfs 4, 252(4)
  048fda4  fmuls 4, 4, 3
  048fda8  stfs 4, 268(4)
  048fdac  lfs 4, 4(5)
  048fdb0  addic 4, 4, 8
  048fdb4  addic 5, 5, 8
  048fdb8  fmuls 4, 4, 3
  048fdbc  stfs 4, 4(6)
  048fdc0  addic 6, 6, 8
  048fdc4  bdnz 0x48fda0
  048fdc8  li 6, 4
  048fdcc  ori 4, 1, 0
  048fdd0  mtctr 6
  048fdd4  lis 5, 115
  048fdd8  addic 6, 4, 268
  048fddc  addic 5, 5, 22752
  048fde0  ori 7, 6, 0
  048fde4  lfs 3, 268(4)
  048fde8  lfs 4, 0(5)
  048fdec  fmuls 3, 3, 4
  048fdf0  lfs 4, 4(5)
  048fdf4  addic 5, 5, 8
  048fdf8  stfs 3, 268(4)
  048fdfc  lfs 3, 4(6)
  048fe00  addic 4, 4, 8
  048fe04  fmuls 3, 3, 4
  048fe08  stfs 3, 4(6)
  048fe0c  addic 6, 6, 8
  048fe10  bdnz 0x48fde4
  048fe14  fmr 3, 30
  048fe18  ori 4, 1, 0
  048fe1c  mtctr 8
  048fe20  lfs 4, 268(4)
  048fe24  fadds 3, 3, 4
  048fe28  addic 4, 4, 16
  048fe2c  lfs 4, 4(7)
  048fe30  lfs 5, 8(7)
  048fe34  lfs 6, 12(7)
  048fe38  addic 7, 7, 16
  048fe3c  fadds 3, 3, 4
  048fe40  fadds 3, 3, 5
  048fe44  fadds 3, 3, 6
  048fe48  bdnz 0x48fe20
  048fe4c  fadds 3, 3, 31
  048fe50  fmadds 1, 3, 1, 2
  048fe54  lis 4, 73
  048fe58  lis 5, 114
  048fe5c  addi 4, 4, -2544
  048fe60  lis 6, 114
  048fe64  lfs 4, 24(4)
  048fe68  lfs 3, -3048(5)
  048fe6c  lfs 5, -3052(6)
  048fe70  addic 5, 30, 24
  048fe74  fmuls 2, 3, 4
  048fe78  fmuls 4, 5, 4
  048fe7c  fmr 3, 2
  048fe80  bl 0x10a2e0
  048fe84  nop
  048fe88  lfs 1, 176(1)
  048fe8c  lfs 2, 16(31)
  048fe90  lfs 3, 180(1)
  048fe94  lfs 4, 20(31)
  048fe98  fsubs 1, 1, 2
  048fe9c  fsubs 2, 3, 4
  048fea0  fabs 4, 1
  048fea4  fabs 5, 2
  048fea8  stfs 1, 192(1)
  048feac  stfs 2, 196(1)
  048feb0  lfs 3, 72(31)
  048feb4  fsubs 1, 4, 5
  048feb8  stfs 1, 200(1)
  048febc  lwz 3, 192(1)
  048fec0  lfs 1, 192(1)
  048fec4  lwz 4, 196(1)
  048fec8  lfs 2, 196(1)
  048fecc  lwz 5, 200(1)
  048fed0  rlwinm 4, 4, 3, 29, 29
  048fed4  lfs 6, 200(1)
  048fed8  fabs 1, 1
  048fedc  rlwimi 4, 5, 2, 30, 30
  048fee0  fabs 2, 2
  048fee4  fsub 7, 6, 30
  048fee8  fsub 6, 6, 30
  048feec  rlwimi 4, 3, 4, 28, 28
  048fef0  ori 3, 29, 0
  048fef4  rlwimi 3, 4, 2, 26, 28
  048fef8  slwi 4, 4, 2
  048fefc  clrldi 3, 3, 32
  048ff00  fsel 5, 7, 1, 5
  048ff04  lfsx 1, 29, 4
  048ff08  fsel 4, 6, 2, 4
  048ff0c  lfs 2, 4(3)
  048ff10  fcmpu 0, 5, 30
  048ff14  bt 1, 0x48ff1c
  048ff18  b 0x490030
  048ff1c  fsubs 6, 4, 5
  048ff20  fadds 4, 4, 5
  048ff24  addic 3, 1, 16
  048ff28  li 7, 2
  048ff2c  addic 4, 3, 220
  048ff30  addic 5, 3, 236
  048ff34  mtctr 7
  048ff38  fdivs 4, 6, 4
  048ff3c  fmuls 5, 4, 4
  048ff40  stfs 4, 248(1)
  048ff44  stfs 4, 240(1)
  048ff48  stfs 4, 244(1)
  048ff4c  stfs 4, 236(1)
  048ff50  lfs 7, 248(1)
  048ff54  lfs 8, 240(1)
  048ff58  lfs 9, 244(1)
  048ff5c  fmuls 6, 5, 5
  048ff60  fmuls 8, 8, 5
  048ff64  fmuls 7, 7, 6
  048ff68  fmuls 4, 6, 6
  048ff6c  fmuls 6, 9, 6
  048ff70  stfs 8, 240(1)
  048ff74  fmuls 5, 7, 5
  048ff78  stfs 6, 244(1)
  048ff7c  stfs 5, 248(1)
  048ff80  lfs 5, 220(3)
  048ff84  fmuls 5, 5, 4
  048ff88  stfs 5, 236(3)
  048ff8c  lfs 5, 4(4)
  048ff90  addic 3, 3, 8
  048ff94  addic 4, 4, 8
  048ff98  fmuls 5, 5, 4
  048ff9c  stfs 5, 4(5)
  048ffa0  addic 5, 5, 8
  048ffa4  bdnz 0x48ff80
  048ffa8  li 5, 4
  048ffac  ori 3, 1, 0
  048ffb0  mtctr 5
  048ffb4  lis 4, 115
  048ffb8  addic 5, 3, 236
  048ffbc  addic 4, 4, 22752
  048ffc0  ori 6, 5, 0
  048ffc4  lfs 4, 236(3)
  048ffc8  lfs 5, 0(4)
  048ffcc  fmuls 4, 4, 5
  048ffd0  lfs 5, 4(4)
  048ffd4  addic 4, 4, 8
  048ffd8  stfs 4, 236(3)
  048ffdc  lfs 4, 4(5)
  048ffe0  addic 3, 3, 8
  048ffe4  fmuls 4, 4, 5
  048ffe8  stfs 4, 4(5)
  048ffec  addic 5, 5, 8
  048fff0  bdnz 0x48ffc4
  048fff4  ori 3, 1, 0
  048fff8  mtctr 7
  048fffc  lfs 4, 236(3)
  0490000  lfs 5, 4(6)
  0490004  fadds 4, 30, 4
  0490008  lfs 6, 8(6)
  049000c  lfs 30, 12(6)
  0490010  addic 3, 3, 16
  0490014  addic 6, 6, 16
  0490018  fadds 4, 4, 5
  049001c  fadds 4, 4, 6
  0490020  fadds 30, 4, 30
  0490024  bdnz 0x48fffc
  0490028  fadds 30, 30, 31
  049002c  fmadds 30, 30, 1, 2
  0490030  fmr 1, 3
  0490034  fmr 2, 30
  0490038  bl 0x5026a0
  049003c  nop
  0490040  fmr 3, 1
  0490044  lis 3, 73
  0490048  lfs 1, 16(31)
  049004c  lis 4, 114
  0490050  addi 3, 3, -2544
  0490054  lfs 4, 28(3)
  0490058  lfs 30, -3052(4)
  049005c  fcmpu 0, 3, 4
  0490060  lfs 2, 20(31)
  0490064  cror 6, 1, 2
  0490068  bt 6, 0x490128
  049006c  lis 3, 73
  0490070  lfs 3, 72(31)
  0490074  addi 3, 3, -2544
  0490078  lfs 4, 32(3)
  049007c  lfs 5, 36(3)
  0490080  fadds 4, 3, 4
  0490084  fsubs 7, 5, 3
  0490088  lfs 6, 40(3)
  049008c  fsubs 5, 5, 4
  0490090  fsub 9, 3, 7
  0490094  fsubs 8, 6, 4
  0490098  fsubs 6, 6, 3
  049009c  fsub 10, 4, 5
  04900a0  fsel 3, 9, 7, 3
  04900a4  lfs 7, 44(3)
  04900a8  fsel 4, 10, 5, 4
  04900ac  fsub 5, 6, 3
  04900b0  fsub 10, 8, 4
  04900b4  fsel 3, 5, 6, 3
  04900b8  lfs 5, 48(3)
  04900bc  lfs 6, 52(3)
  04900c0  lfs 11, 56(3)
  04900c4  fsel 4, 10, 8, 4
  04900c8  fmuls 8, 3, 3
  04900cc  fmuls 9, 4, 4
  04900d0  fmuls 10, 8, 3
  04900d4  fmuls 13, 9, 4
  04900d8  fmuls 0, 8, 10
  04900dc  fmadds 3, 10, 7, 3
  04900e0  lfs 10, 60(3)
  04900e4  fmuls 10, 30, 10
  04900e8  fmuls 12, 9, 13
  04900ec  fmadds 4, 13, 7, 4
  04900f0  fmuls 7, 8, 0
  04900f4  fmadds 3, 0, 5, 3
  04900f8  fmuls 13, 9, 12
  04900fc  fmadds 4, 12, 5, 4
  0490100  fmuls 5, 8, 7
  0490104  fmadds 3, 7, 6, 3
  0490108  fmuls 7, 9, 13
  049010c  fmadds 4, 13, 6, 4
  0490110  fmadds 3, 5, 11, 3
  0490114  fmadds 4, 7, 11, 4
  0490118  fmadds 2, 10, 3, 2
  049011c  fmadds 1, 10, 4, 1
  0490120  stfs 2, 20(31)
  0490124  stfs 1, 16(31)
  0490128  li 0, 304
  049012c  lvx 30, 1, 0
  0490130  addic 0, 0, 16
  0490134  lvx 31, 1, 0
  0490138  ld 0, 448(1)
  049013c  mtlr 0
  0490140  lfd 30, 416(1)
  0490144  lfd 31, 424(1)
  0490148  ld 23, 344(1)
  049014c  ld 24, 352(1)
  0490150  ld 25, 360(1)
  0490154  ld 26, 368(1)
  0490158  ld 27, 376(1)
  049015c  ld 28, 384(1)
  0490160  ld 29, 392(1)
  0490164  ld 30, 400(1)
  0490168  ld 31, 408(1)
  049016c  addi 1, 1, 432
  0490170  blr
