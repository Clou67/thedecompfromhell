# game/update/moby1105.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1105:   # 0x1be558, 0x1330 bytes
  01be558  stdu 1, -464(1)
  01be55c  mflr 0
  01be560  std 0, 480(1)
  01be564  stfd 26, 416(1)
  01be568  stfd 27, 424(1)
  01be56c  stfd 28, 432(1)
  01be570  stfd 29, 440(1)
  01be574  stfd 30, 448(1)
  01be578  stfd 31, 456(1)
  01be57c  std 31, 408(1)
  01be580  lis 4, 161
  01be584  ori 31, 3, 0
  01be588  std 30, 400(1)
  01be58c  lwz 4, 1800(4)
  01be590  lwz 30, 120(3)
  01be594  std 29, 392(1)
  01be598  std 28, 384(1)
  01be59c  std 27, 376(1)
  01be5a0  std 26, 368(1)
  01be5a4  cmpwi 4, 2
  01be5a8  bf 2, 0x1be648
  01be5ac  lis 3, 151
  01be5b0  lbz 3, -16268(3)
  01be5b4  cmpwi 3, 0
  01be5b8  bt 2, 0x1be648
  01be5bc  lis 28, 150
  01be5c0  li 29, 0
  01be5c4  addic 28, 28, -12976
  01be5c8  lhz 4, 68(28)
  01be5cc  extsh 3, 4
  01be5d0  cmpwi 3, 0
  01be5d4  bf 1, 0x1be648
  01be5d8  lis 27, 162
  01be5dc  ori 26, 28, 0
  01be5e0  addic 27, 27, -16512
  01be5e4  lwz 3, 376(26)
  01be5e8  lhz 5, 166(31)
  01be5ec  extsh 5, 5
  01be5f0  lhz 6, 166(3)
  01be5f4  extsh 6, 6
  01be5f8  cmpw 6, 5
  01be5fc  bf 2, 0x1be634
  01be600  lbz 5, 1(27)
  01be604  cmpwi 5, 0
  01be608  bf 2, 0x1be634
  01be60c  li 4, 1
  01be610  ori 5, 27, 0
  01be614  bl 0xf0ea8
  01be618  nop
  01be61c  lis 3, 118
  01be620  lhz 4, 68(28)
  01be624  lfs 1, 16000(3)
  01be628  stfs 1, 32(27)
  01be62c  stfs 1, 36(27)
  01be630  stfs 1, 40(27)
  01be634  extsh 3, 4
  01be638  addic 29, 29, 1
  01be63c  addic 26, 26, 4
  01be640  cmpw 29, 3
  01be644  bt 0, 0x1be5e4
  01be648  lbz 3, 49(31)
  01be64c  cmpwi 3, 0
  01be650  bt 2, 0x1be6bc
  01be654  lis 3, 149
  01be658  lfs 1, 20(31)
  01be65c  addic 3, 3, 5056
  01be660  lfs 2, 16(31)
  01be664  lfs 3, 324(3)
  01be668  lfs 4, 320(3)
  01be66c  fsubs 1, 1, 3
  01be670  fsubs 2, 2, 4
  01be674  lfs 3, 24(31)
  01be678  lfs 4, 328(3)
  01be67c  fsubs 3, 3, 4
  01be680  lis 3, 28
  01be684  fmuls 1, 1, 1
  01be688  addi 3, 3, -6976
  01be68c  fmadds 1, 2, 2, 1
  01be690  lfs 2, 0(3)
  01be694  fmadds 1, 3, 3, 1
  01be698  fsqrts 1, 1
  01be69c  fcmpu 0, 1, 2
  01be6a0  cror 6, 1, 2
  01be6a4  bt 6, 0x1be6bc
  01be6a8  ori 3, 31, 0
  01be6ac  bl 0x106360
  01be6b0  nop
  01be6b4  li 3, 19
  01be6b8  stb 3, 127(31)
  01be6bc  lbz 3, 32(31)
  01be6c0  cmpwi 3, 5
  01be6c4  cmpwi 1, 3, 4
  01be6c8  cmpwi 6, 3, 3
  01be6cc  cmpwi 7, 3, 2
  01be6d0  bt 2, 0x1bef80
  01be6d4  bt 6, 0x1bef3c
  01be6d8  bt 26, 0x1bec30
  01be6dc  bt 30, 0x1bea78
  01be6e0  cmpwi 3, 1
  01be6e4  bt 2, 0x1be8d0
  01be6e8  cmpwi 3, 0
  01be6ec  bf 2, 0x1befc4
  01be6f0  lis 3, 151
  01be6f4  addic 3, 3, -16027
  01be6f8  lbz 3, 29(3)
  01be6fc  cmpwi 3, 0
  01be700  bt 2, 0x1be714
  01be704  ori 3, 31, 0
  01be708  bl 0xefb38
  01be70c  nop
  01be710  b 0x1bf848
  01be714  lis 3, 151
  01be718  addic 3, 3, -15796
  01be71c  lwz 3, 764(3)
  01be720  cmpwi 3, 0
  01be724  bf 2, 0x1be79c
  01be728  lbz 3, 83(31)
  01be72c  cmpwi 3, 1
  01be730  bt 2, 0x1be770
  01be734  lis 3, 28
  01be738  lis 4, 114
  01be73c  addi 3, 3, -6976
  01be740  li 5, 0
  01be744  lfs 1, 4(3)
  01be748  lfs 2, -3056(4)
  01be74c  ori 3, 31, 0
  01be750  li 4, 1
  01be754  fmuls 1, 2, 1
  01be758  fctiwz 1, 1
  01be75c  stfd 1, 344(1)
  01be760  lwz 6, 348(1)
  01be764  extsw 6, 6
  01be768  bl 0xfddc0
  01be76c  nop
  01be770  lis 3, 164
  01be774  lwz 5, 356(30)
  01be778  li 4, 1
  01be77c  lwz 3, -28512(3)
  01be780  sth 4, 374(30)
  01be784  slwi 4, 5, 8
  01be788  addc 3, 3, 4
  01be78c  clrldi 3, 3, 32
  01be790  bl 0x189040
  01be794  nop
  01be798  b 0x1be84c
  01be79c  lfs 1, 196(31)
  01be7a0  lfs 2, 192(31)
  01be7a4  fmuls 3, 1, 1
  01be7a8  lfs 4, 200(31)
  01be7ac  lis 3, 28
  01be7b0  addi 5, 3, -6976
  01be7b4  fmadds 3, 2, 2, 3
  01be7b8  lfs 5, 12(5)
  01be7bc  lfs 6, 8(5)
  01be7c0  lfs 7, 16(31)
  01be7c4  addic 3, 31, 16
  01be7c8  fmadds 3, 4, 4, 3
  01be7cc  lfs 8, 20(31)
  01be7d0  lfs 9, 24(31)
  01be7d4  li 4, 0
  01be7d8  fsqrts 3, 3
  01be7dc  fdivs 5, 5, 3
  01be7e0  fsub 10, 6, 3
  01be7e4  fsub 11, 6, 3
  01be7e8  fsub 12, 6, 3
  01be7ec  fsub 13, 3, 6
  01be7f0  fsub 0, 3, 6
  01be7f4  fsub 3, 3, 6
  01be7f8  fmuls 4, 4, 5
  01be7fc  fmuls 1, 1, 5
  01be800  fmuls 2, 2, 5
  01be804  fsel 5, 10, 6, 4
  01be808  fsel 10, 11, 6, 1
  01be80c  fsel 6, 12, 6, 2
  01be810  fsel 4, 13, 5, 4
  01be814  fsel 1, 0, 10, 1
  01be818  fsel 2, 3, 6, 2
  01be81c  fadds 3, 9, 4
  01be820  fadds 1, 8, 1
  01be824  fadds 2, 7, 2
  01be828  stfs 3, 24(31)
  01be82c  stfs 1, 20(31)
  01be830  stfs 2, 16(31)
  01be834  lfs 1, 16(5)
  01be838  bl 0xffb70
  01be83c  nop
  01be840  li 3, 0
  01be844  stfs 1, 24(31)
  01be848  sth 3, 374(30)
  01be84c  lis 3, 28
  01be850  li 4, 20
  01be854  vspltisw 2, -1
  01be858  addi 3, 3, -6976
  01be85c  lis 5, 114
  01be860  li 6, -3056
  01be864  vslw 2, 2, 2
  01be868  lvlx 3, 4, 3
  01be86c  li 3, 372
  01be870  vspltw 3, 3, 0
  01be874  lis 4, 164
  01be878  lvlx 4, 6, 5
  01be87c  lwz 5, 352(30)
  01be880  vmaddfp 2, 4, 3, 2
  01be884  slwi 5, 5, 8
  01be888  vctsxs 2, 2, 0
  01be88c  vsplth 2, 2, 1
  01be890  stvehx 2, 3, 30
  01be894  lwz 3, -28512(4)
  01be898  addc 3, 3, 5
  01be89c  clrldi 3, 3, 32
  01be8a0  bl 0x189040
  01be8a4  nop
  01be8a8  lis 4, 101
  01be8ac  li 6, 1
  01be8b0  addic 5, 4, 18012
  01be8b4  ori 3, 31, 0
  01be8b8  ori 4, 30, 0
  01be8bc  stw 5, 32(30)
  01be8c0  stb 6, 32(31)
  01be8c4  bl 0x4d3720
  01be8c8  nop
  01be8cc  b 0x1befc4
  01be8d0  lbz 3, 8(30)
  01be8d4  cmpwi 3, 1
  01be8d8  bf 2, 0x1be910
  01be8dc  lis 3, 151
  01be8e0  lwz 4, 360(30)
  01be8e4  addic 3, 3, -25376
  01be8e8  extsw 4, 4
  01be8ec  addic 3, 3, 128
  01be8f0  bl 0x110b70
  01be8f4  nop
  01be8f8  cmpwi 3, 0
  01be8fc  bt 2, 0x1be910
  01be900  lis 3, 28
  01be904  addi 3, 3, -6976
  01be908  lfs 1, 24(3)
  01be90c  b 0x1be91c
  01be910  lis 3, 28
  01be914  addi 3, 3, -6976
  01be918  lfs 1, 28(3)
  01be91c  lwz 3, 368(30)
  01be920  stfs 1, 12(30)
  01be924  extsw 3, 3
  01be928  bl 0x47cc38
  01be92c  nop
  01be930  cmpwi 3, 0
  01be934  bt 2, 0x1bea40
  01be938  addic 3, 30, 372
  01be93c  bl 0x4fffb4
  01be940  nop
  01be944  cmpwi 3, 0
  01be948  bt 2, 0x1bea40
  01be94c  ori 3, 31, 0
  01be950  ori 4, 30, 0
  01be954  bl 0x4d3870
  01be958  nop
  01be95c  lfs 1, 16(31)
  01be960  cmpwi 3, 0
  01be964  lfs 2, 20(31)
  01be968  lfs 3, 24(31)
  01be96c  bt 2, 0x1bea40
  01be970  li 3, 2
  01be974  stb 3, 32(31)
  01be978  lhz 3, 374(30)
  01be97c  cmpwi 3, 0
  01be980  bt 2, 0x1bea28
  01be984  lfs 4, 196(31)
  01be988  lfs 5, 192(31)
  01be98c  fmuls 6, 4, 4
  01be990  lfs 7, 200(31)
  01be994  lis 3, 28
  01be998  addi 5, 3, -6976
  01be99c  fmadds 6, 5, 5, 6
  01be9a0  lfs 8, 12(5)
  01be9a4  lfs 9, 8(5)
  01be9a8  addic 3, 31, 16
  01be9ac  fmadds 6, 7, 7, 6
  01be9b0  li 4, 0
  01be9b4  fsqrts 6, 6
  01be9b8  fdivs 8, 8, 6
  01be9bc  fsub 10, 9, 6
  01be9c0  fsub 11, 9, 6
  01be9c4  fsub 12, 9, 6
  01be9c8  fsub 13, 6, 9
  01be9cc  fsub 0, 6, 9
  01be9d0  fsub 6, 6, 9
  01be9d4  fmuls 7, 7, 8
  01be9d8  fmuls 4, 4, 8
  01be9dc  fmuls 5, 5, 8
  01be9e0  fsel 8, 10, 9, 7
  01be9e4  fsel 10, 11, 9, 4
  01be9e8  fsel 9, 12, 9, 5
  01be9ec  fsel 7, 13, 8, 7
  01be9f0  fsel 4, 0, 10, 4
  01be9f4  fsel 5, 6, 9, 5
  01be9f8  fadds 3, 3, 7
  01be9fc  fadds 2, 2, 4
  01bea00  fadds 1, 1, 5
  01bea04  stfs 3, 24(31)
  01bea08  stfs 2, 20(31)
  01bea0c  stfs 1, 16(31)
  01bea10  lfs 1, 16(5)
  01bea14  bl 0xffb70
  01bea18  nop
  01bea1c  li 3, 0
  01bea20  stfs 1, 24(31)
  01bea24  sth 3, 374(30)
  01bea28  lis 3, 28
  01bea2c  addi 4, 3, -6976
  01bea30  ori 3, 31, 0
  01bea34  lfs 1, 32(4)
  01bea38  bl 0x119488
  01bea3c  nop
  01bea40  lis 3, 151
  01bea44  addic 3, 3, -25376
  01bea48  lwz 3, 8332(3)
  01bea4c  cmpwi 3, 15
  01bea50  bf 2, 0x1befc4
  01bea54  lis 3, 164
  01bea58  lwz 4, 352(30)
  01bea5c  slwi 4, 4, 8
  01bea60  lwz 3, -28512(3)
  01bea64  addc 3, 3, 4
  01bea68  clrldi 3, 3, 32
  01bea6c  bl 0x188fb4
  01bea70  nop
  01bea74  b 0x1befc4
  01bea78  lis 3, 161
  01bea7c  lwz 3, 1800(3)
  01bea80  cmpwi 3, 2
  01bea84  bt 2, 0x1befc4
  01bea88  lbz 3, 83(31)
  01bea8c  cmpwi 3, 0
  01bea90  bt 2, 0x1bead0
  01bea94  lis 3, 28
  01bea98  lis 4, 114
  01bea9c  addi 3, 3, -6976
  01beaa0  li 5, 0
  01beaa4  lfs 1, 4(3)
  01beaa8  lfs 2, -3056(4)
  01beaac  ori 3, 31, 0
  01beab0  li 4, 0
  01beab4  fmuls 1, 2, 1
  01beab8  fctiwz 1, 1
  01beabc  stfd 1, 344(1)
  01beac0  lwz 6, 348(1)
  01beac4  extsw 6, 6
  01beac8  bl 0xfddc0
  01beacc  nop
  01bead0  lhz 3, 4(30)
  01bead4  extsh 4, 3
  01bead8  cmpwi 4, 2
  01beadc  bf 0, 0x1beb18
  01beae0  lbz 3, 176(31)
  01beae4  bl 0xf1e50
  01beae8  nop
  01beaec  lis 3, 164
  01beaf0  lwz 4, 356(30)
  01beaf4  slwi 4, 4, 8
  01beaf8  lwz 3, -28512(3)
  01beafc  addc 3, 3, 4
  01beb00  clrldi 3, 3, 32
  01beb04  bl 0x188fb4
  01beb08  nop
  01beb0c  li 3, 1
  01beb10  stb 3, 32(31)
  01beb14  lhz 3, 4(30)
  01beb18  cmpwi 3, 2
  01beb1c  bf 2, 0x1befc4
  01beb20  li 3, 29
  01beb24  li 4, 1
  01beb28  bl 0x112e18
  01beb2c  nop
  01beb30  li 3, 0
  01beb34  li 4, -1
  01beb38  bl 0xe8aa4
  01beb3c  nop
  01beb40  li 3, 6005
  01beb44  li 4, 44
  01beb48  bl 0x7b310
  01beb4c  nop
  01beb50  lis 3, 150
  01beb54  lis 5, 16256
  01beb58  lis 4, 17311
  01beb5c  lis 6, 17170
  01beb60  li 29, 0
  01beb64  ori 4, 4, 57672
  01beb68  stw 5, -12528(3)
  01beb6c  ori 5, 6, 20316
  01beb70  stw 29, 376(30)
  01beb74  lis 3, 17202
  01beb78  lis 6, 15759
  01beb7c  stw 4, 116(1)
  01beb80  ori 3, 3, 30802
  01beb84  stw 5, 120(1)
  01beb88  lis 4, 15928
  01beb8c  stw 29, 124(1)
  01beb90  ori 5, 6, 23593
  01beb94  lis 6, -16414
  01beb98  ori 7, 4, 20972
  01beb9c  stw 3, 112(1)
  01beba0  ori 6, 6, 36700
  01beba4  stw 5, 128(1)
  01beba8  addic 3, 1, 112
  01bebac  stw 7, 132(1)
  01bebb0  stw 6, 136(1)
  01bebb4  addic 4, 1, 128
  01bebb8  li 5, 1
  01bebbc  stw 29, 140(1)
  01bebc0  li 6, 0
  01bebc4  li 7, 0
  01bebc8  bl 0x47f74
  01bebcc  nop
  01bebd0  lis 3, 151
  01bebd4  li 5, 114
  01bebd8  addic 4, 3, -25376
  01bebdc  li 6, 1
  01bebe0  addic 3, 4, 128
  01bebe4  addic 4, 4, 144
  01bebe8  bl 0xa0c38
  01bebec  nop
  01bebf0  lis 3, 164
  01bebf4  lwz 4, 356(30)
  01bebf8  slwi 4, 4, 8
  01bebfc  lwz 3, -28512(3)
  01bec00  addc 3, 3, 4
  01bec04  clrldi 3, 3, 32
  01bec08  bl 0x189040
  01bec0c  nop
  01bec10  lhz 3, 52(31)
  01bec14  li 4, 3
  01bec18  stb 29, 49(31)
  01bec1c  ori 3, 3, 1
  01bec20  stw 29, 148(31)
  01bec24  stb 4, 32(31)
  01bec28  sth 3, 52(31)
  01bec2c  b 0x1befc4
  01bec30  lis 3, 17202
  01bec34  lis 5, 17311
  01bec38  ori 3, 3, 30802
  01bec3c  lis 4, 28
  01bec40  lis 6, 17170
  01bec44  ori 5, 5, 57672
  01bec48  stw 3, 144(1)
  01bec4c  addi 4, 4, -6976
  01bec50  ori 3, 6, 20316
  01bec54  li 7, 0
  01bec58  stw 5, 148(1)
  01bec5c  lis 6, -16414
  01bec60  lis 5, 15759
  01bec64  stw 3, 152(1)
  01bec68  lfs 28, 8(4)
  01bec6c  lis 3, 15928
  01bec70  stw 7, 156(1)
  01bec74  ori 5, 5, 23593
  01bec78  lfs 31, 36(4)
  01bec7c  ori 3, 3, 20972
  01bec80  lfs 30, 40(4)
  01bec84  ori 6, 6, 36700
  01bec88  lfs 29, 44(4)
  01bec8c  lfs 27, 48(4)
  01bec90  stw 5, 160(1)
  01bec94  stw 3, 164(1)
  01bec98  lis 5, 114
  01bec9c  stw 6, 168(1)
  01beca0  stw 7, 172(1)
  01beca4  lis 6, 15820
  01beca8  lfs 4, 56(4)
  01becac  addic 3, 30, 376
  01becb0  lfs 26, 52(4)
  01becb4  ori 29, 6, 52429
  01becb8  lis 4, 114
  01becbc  lfs 2, -3048(5)
  01becc0  addic 5, 30, 380
  01becc4  fmuls 2, 2, 4
  01becc8  lfs 1, -3052(4)
  01beccc  fmuls 4, 1, 4
  01becd0  fmr 1, 26
  01becd4  fmr 3, 2
  01becd8  bl 0x109c30
  01becdc  nop
  01bece0  lwz 3, 376(30)
  01bece4  lfs 1, 376(30)
  01bece8  srawi 4, 3, 31
  01becec  srwi 5, 4, 1
  01becf0  xor 3, 5, 3
  01becf4  subc 3, 3, 4
  01becf8  cmpw 3, 29
  01becfc  bf 1, 0x1bed24
  01bed00  lis 3, 164
  01bed04  lwz 4, 352(30)
  01bed08  slwi 4, 4, 8
  01bed0c  lwz 3, -28512(3)
  01bed10  addc 3, 3, 4
  01bed14  clrldi 3, 3, 32
  01bed18  bl 0x188fb4
  01bed1c  nop
  01bed20  lfs 1, 376(30)
  01bed24  lfs 2, 144(1)
  01bed28  lfs 3, 148(1)
  01bed2c  li 4, 0
  01bed30  fsubs 4, 31, 2
  01bed34  lfs 5, 152(1)
  01bed38  fsubs 6, 30, 3
  01bed3c  lis 3, 28
  01bed40  fsubs 7, 29, 5
  01bed44  lfs 8, 168(1)
  01bed48  addi 29, 3, -6976
  01bed4c  stw 4, 188(1)
  01bed50  fmadds 4, 1, 4, 2
  01bed54  fmadds 3, 1, 6, 3
  01bed58  fmadds 1, 1, 7, 5
  01bed5c  fmr 2, 8
  01bed60  stfs 4, 176(1)
  01bed64  stfs 3, 180(1)
  01bed68  stfs 1, 184(1)
  01bed6c  lfs 1, 60(29)
  01bed70  bl 0x5025e0
  01bed74  nop
  01bed78  lfs 2, 376(30)
  01bed7c  lfs 3, 168(1)
  01bed80  fmuls 1, 1, 2
  01bed84  fmr 2, 3
  01bed88  bl 0x502578
  01bed8c  nop
  01bed90  stfs 1, 200(1)
  01bed94  lfs 1, 64(29)
  01bed98  lfs 2, 164(1)
  01bed9c  bl 0x5025e0
  01beda0  nop
  01beda4  lfs 2, 376(30)
  01beda8  lfs 3, 164(1)
  01bedac  fmuls 1, 1, 2
  01bedb0  fmr 2, 3
  01bedb4  bl 0x502578
  01bedb8  nop
  01bedbc  lfs 2, 160(1)
  01bedc0  stfs 1, 196(1)
  01bedc4  fmr 1, 27
  01bedc8  bl 0x5025e0
  01bedcc  nop
  01bedd0  lfs 2, 376(30)
  01bedd4  lfs 3, 160(1)
  01bedd8  fmuls 1, 1, 2
  01beddc  fmr 2, 3
  01bede0  bl 0x502578
  01bede4  nop
  01bede8  lis 3, 149
  01bedec  stfs 1, 192(1)
  01bedf0  addic 3, 3, 5056
  01bedf4  lwz 3, 384(3)
  01bedf8  cmpwi 3, 0
  01bedfc  bt 2, 0x1bee28
  01bee00  lhz 3, 134(3)
  01bee04  cmpwi 3, 5
  01bee08  bt 2, 0x1bee28
  01bee0c  addic 3, 1, 144
  01bee10  addic 4, 1, 160
  01bee14  li 5, 1
  01bee18  li 6, 0
  01bee1c  li 7, 0
  01bee20  bl 0x47f74
  01bee24  nop
  01bee28  addic 3, 1, 176
  01bee2c  bl 0x47b98
  01bee30  nop
  01bee34  addic 3, 1, 192
  01bee38  bl 0x47c08
  01bee3c  nop
  01bee40  lwz 3, 376(30)
  01bee44  lis 4, 114
  01bee48  srawi 5, 3, 31
  01bee4c  srwi 6, 5, 1
  01bee50  lfs 1, -3052(4)
  01bee54  xor 3, 6, 3
  01bee58  lis 4, 16256
  01bee5c  subc 3, 3, 5
  01bee60  cmpw 3, 4
  01bee64  bf 0, 0x1bee9c
  01bee68  lis 4, 114
  01bee6c  lwz 4, 2180(4)
  01bee70  cmpwi 4, 0
  01bee74  bf 2, 0x1beec8
  01bee78  lis 4, 114
  01bee7c  addic 4, 4, 2180
  01bee80  lwz 4, 36(4)
  01bee84  cmpwi 4, -1
  01bee88  bf 2, 0x1beec8
  01bee8c  lis 4, 15948
  01bee90  ori 4, 4, 52429
  01bee94  cmpw 3, 4
  01bee98  bf 1, 0x1beec8
  01bee9c  fmr 2, 1
  01beea0  lis 3, 28
  01beea4  fmr 1, 26
  01beea8  addi 4, 3, -6976
  01beeac  lis 3, 150
  01beeb0  addic 3, 3, -12528
  01beeb4  lfs 3, 68(4)
  01beeb8  fmuls 2, 2, 3
  01beebc  bl 0x109af0
  01beec0  nop
  01beec4  b 0x1beef0
  01beec8  fmr 2, 1
  01beecc  lis 3, 28
  01beed0  fmr 1, 28
  01beed4  addi 4, 3, -6976
  01beed8  lis 3, 150
  01beedc  addic 3, 3, -12528
  01beee0  lfs 3, 68(4)
  01beee4  fmuls 2, 2, 3
  01beee8  bl 0x109af0
  01beeec  nop
  01beef0  lis 3, 150
  01beef4  lis 4, 16256
  01beef8  lwz 3, -12528(3)
  01beefc  cmpw 3, 4
  01bef00  bf 2, 0x1befc4
  01bef04  lis 3, 151
  01bef08  li 5, 0
  01bef0c  addic 4, 3, -25376
  01bef10  li 6, 0
  01bef14  addic 3, 4, 128
  01bef18  addic 4, 4, 144
  01bef1c  bl 0xa0c38
  01bef20  nop
  01bef24  li 3, 0
  01bef28  bl 0x481d0
  01bef2c  nop
  01bef30  li 3, 4
  01bef34  stb 3, 32(31)
  01bef38  b 0x1befc4
  01bef3c  lis 3, 28
  01bef40  lis 5, 114
  01bef44  addi 4, 3, -6976
  01bef48  lis 29, 150
  01bef4c  addic 3, 29, -12528
  01bef50  lfs 3, 68(4)
  01bef54  lfs 1, 8(4)
  01bef58  lfs 4, -3052(5)
  01bef5c  fmuls 2, 4, 3
  01bef60  bl 0x109af0
  01bef64  nop
  01bef68  lwz 3, -12528(29)
  01bef6c  cmpwi 3, 0
  01bef70  bf 2, 0x1befc4
  01bef74  li 3, 5
  01bef78  stb 3, 32(31)
  01bef7c  b 0x1befc4
  01bef80  lis 3, 151
  01bef84  addic 3, 3, -25376
  01bef88  lwz 3, 8332(3)
  01bef8c  cmpwi 3, 15
  01bef90  bf 2, 0x1befc4
  01bef94  lis 3, 164
  01bef98  lwz 4, 356(30)
  01bef9c  slwi 4, 4, 8
  01befa0  lwz 3, -28512(3)
  01befa4  addc 3, 3, 4
  01befa8  clrldi 3, 3, 32
  01befac  bl 0x188fb4
  01befb0  nop
  01befb4  ori 3, 31, 0
  01befb8  bl 0xefb38
  01befbc  nop
  01befc0  b 0x1bf848
  01befc4  lis 3, 28
  01befc8  lbz 4, 83(31)
  01befcc  addi 3, 3, -6976
  01befd0  cmpwi 4, 0
  01befd4  lfs 31, 72(3)
  01befd8  bf 2, 0x1bf7e0
  01befdc  lis 29, 151
  01befe0  lfs 2, 20(31)
  01befe4  addic 29, 29, -25376
  01befe8  lfs 1, 16(31)
  01befec  lis 3, 28
  01beff0  lfs 3, 132(29)
  01beff4  lfs 4, 128(29)
  01beff8  fsubs 3, 2, 3
  01beffc  fsubs 4, 1, 4
  01bf000  addi 3, 3, -6976
  01bf004  fmuls 3, 3, 3
  01bf008  fmadds 3, 4, 4, 3
  01bf00c  lfs 4, 76(3)
  01bf010  fsqrts 3, 3
  01bf014  fcmpu 0, 3, 4
  01bf018  cror 6, 1, 2
  01bf01c  bt 6, 0x1bf28c
  01bf020  lfs 3, 208(29)
  01bf024  lis 3, 28
  01bf028  lfs 4, 212(29)
  01bf02c  fsubs 1, 3, 1
  01bf030  fsubs 2, 4, 2
  01bf034  addi 3, 3, -6976
  01bf038  lis 4, 115
  01bf03c  addic 4, 4, 22784
  01bf040  fabs 5, 1
  01bf044  fabs 6, 2
  01bf048  stfs 1, 232(1)
  01bf04c  stfs 2, 236(1)
  01bf050  lfs 3, 72(31)
  01bf054  fsubs 1, 5, 6
  01bf058  stfs 1, 240(1)
  01bf05c  lwz 5, 232(1)
  01bf060  lfs 4, 8(3)
  01bf064  lfs 1, 232(1)
  01bf068  lwz 3, 236(1)
  01bf06c  lfs 2, 236(1)
  01bf070  lwz 6, 240(1)
  01bf074  rlwinm 3, 3, 3, 29, 29
  01bf078  fabs 7, 2
  01bf07c  lfs 2, 240(1)
  01bf080  fabs 1, 1
  01bf084  rlwimi 3, 6, 2, 30, 30
  01bf088  fsub 8, 2, 4
  01bf08c  rlwimi 3, 5, 4, 28, 28
  01bf090  fsub 9, 2, 4
  01bf094  ori 5, 4, 0
  01bf098  rlwimi 5, 3, 2, 26, 28
  01bf09c  slwi 3, 3, 2
  01bf0a0  clrldi 5, 5, 32
  01bf0a4  fsel 6, 8, 1, 6
  01bf0a8  lfsx 1, 4, 3
  01bf0ac  lfs 2, 4(5)
  01bf0b0  fsel 5, 9, 7, 5
  01bf0b4  fcmpu 0, 6, 4
  01bf0b8  bt 1, 0x1bf0c0
  01bf0bc  b 0x1bf1e0
  01bf0c0  fsubs 7, 5, 6
  01bf0c4  fadds 5, 5, 6
  01bf0c8  addic 3, 1, 16
  01bf0cc  li 6, 2
  01bf0d0  addic 4, 3, 292
  01bf0d4  addic 5, 3, 308
  01bf0d8  mtctr 6
  01bf0dc  fdivs 5, 7, 5
  01bf0e0  fmuls 6, 5, 5
  01bf0e4  stfs 5, 320(1)
  01bf0e8  stfs 5, 312(1)
  01bf0ec  stfs 5, 316(1)
  01bf0f0  stfs 5, 308(1)
  01bf0f4  lfs 8, 320(1)
  01bf0f8  lfs 9, 312(1)
  01bf0fc  lfs 10, 316(1)
  01bf100  fmuls 7, 6, 6
  01bf104  fmuls 9, 9, 6
  01bf108  fmuls 8, 8, 7
  01bf10c  fmuls 5, 7, 7
  01bf110  fmuls 7, 10, 7
  01bf114  stfs 9, 312(1)
  01bf118  fmuls 6, 8, 6
  01bf11c  stfs 7, 316(1)
  01bf120  stfs 6, 320(1)
  01bf124  lfs 6, 292(3)
  01bf128  fmuls 6, 6, 5
  01bf12c  stfs 6, 308(3)
  01bf130  lfs 6, 4(4)
  01bf134  addic 3, 3, 8
  01bf138  addic 4, 4, 8
  01bf13c  fmuls 6, 6, 5
  01bf140  stfs 6, 4(5)
  01bf144  addic 5, 5, 8
  01bf148  bdnz 0x1bf124
  01bf14c  li 5, 4
  01bf150  ori 3, 1, 0
  01bf154  mtctr 5
  01bf158  lis 4, 115
  01bf15c  addic 5, 3, 308
  01bf160  addic 4, 4, 22752
  01bf164  ori 7, 5, 0
  01bf168  lfs 5, 308(3)
  01bf16c  lfs 6, 0(4)
  01bf170  fmuls 5, 5, 6
  01bf174  lfs 6, 4(4)
  01bf178  addic 4, 4, 8
  01bf17c  stfs 5, 308(3)
  01bf180  lfs 5, 4(5)
  01bf184  addic 3, 3, 8
  01bf188  fmuls 5, 5, 6
  01bf18c  stfs 5, 4(5)
  01bf190  addic 5, 5, 8
  01bf194  bdnz 0x1bf168
  01bf198  ori 3, 1, 0
  01bf19c  mtctr 6
  01bf1a0  lfs 5, 308(3)
  01bf1a4  fadds 4, 4, 5
  01bf1a8  lfs 5, 4(7)
  01bf1ac  addic 3, 3, 16
  01bf1b0  lfs 6, 8(7)
  01bf1b4  lfs 7, 12(7)
  01bf1b8  addic 7, 7, 16
  01bf1bc  fadds 4, 4, 5
  01bf1c0  fadds 4, 4, 6
  01bf1c4  fadds 4, 4, 7
  01bf1c8  bdnz 0x1bf1a0
  01bf1cc  lis 3, 28
  01bf1d0  addi 3, 3, -6976
  01bf1d4  lfs 5, 80(3)
  01bf1d8  fadds 4, 4, 5
  01bf1dc  fmadds 4, 4, 1, 2
  01bf1e0  fmr 1, 3
  01bf1e4  fmr 2, 4
  01bf1e8  bl 0x5026a0
  01bf1ec  nop
  01bf1f0  lis 3, 28
  01bf1f4  addi 3, 3, -6976
  01bf1f8  lfs 2, 84(3)
  01bf1fc  fcmpu 0, 1, 2
  01bf200  cror 6, 1, 2
  01bf204  bt 6, 0x1bf28c
  01bf208  lfs 1, 260(29)
  01bf20c  lfs 2, 256(29)
  01bf210  fmuls 1, 1, 1
  01bf214  lfs 3, 264(29)
  01bf218  lis 3, 28
  01bf21c  addi 3, 3, -6976
  01bf220  fmadds 1, 2, 2, 1
  01bf224  lfs 2, 88(3)
  01bf228  fmadds 1, 3, 3, 1
  01bf22c  fsqrts 1, 1
  01bf230  fcmpu 0, 1, 2
  01bf234  cror 6, 0, 2
  01bf238  bt 6, 0x1bf27c
  01bf23c  lis 3, 28
  01bf240  li 4, 92
  01bf244  vspltisw 2, -1
  01bf248  addi 3, 3, -6976
  01bf24c  lis 5, 114
  01bf250  li 6, -3056
  01bf254  vslw 2, 2, 2
  01bf258  lvlx 3, 4, 3
  01bf25c  li 3, 344
  01bf260  vspltw 3, 3, 0
  01bf264  lvlx 4, 6, 5
  01bf268  vmaddfp 2, 4, 3, 2
  01bf26c  vctsxs 2, 2, 0
  01bf270  vspltw 2, 2, 0
  01bf274  stvewx 2, 3, 30
  01bf278  b 0x1bf2c0
  01bf27c  addic 3, 30, 344
  01bf280  bl 0x4fff60
  01bf284  nop
  01bf288  b 0x1bf2c0
  01bf28c  lwz 3, 344(30)
  01bf290  cmpwi 3, 0
  01bf294  bt 2, 0x1bf2c0
  01bf298  li 3, 0
  01bf29c  stw 3, 344(30)
  01bf2a0  lfs 1, 208(29)
  01bf2a4  stfs 1, 320(30)
  01bf2a8  lfs 1, 212(29)
  01bf2ac  stfs 1, 324(30)
  01bf2b0  lfs 1, 216(29)
  01bf2b4  stfs 1, 328(30)
  01bf2b8  lfs 1, 220(29)
  01bf2bc  stfs 1, 332(30)
  01bf2c0  addic 3, 30, 348
  01bf2c4  bl 0x4fff60
  01bf2c8  nop
  01bf2cc  cmpwi 3, 0
  01bf2d0  bt 2, 0x1bf388
  01bf2d4  lis 3, 28
  01bf2d8  addi 28, 3, -6976
  01bf2dc  lfs 1, 96(28)
  01bf2e0  lfs 2, 100(28)
  01bf2e4  bl 0xfcbe8
  01bf2e8  nop
  01bf2ec  lis 3, 114
  01bf2f0  lfs 2, -3056(3)
  01bf2f4  fmuls 1, 1, 2
  01bf2f8  bl 0x502758
  01bf2fc  nop
  01bf300  stw 3, 348(30)
  01bf304  lfs 1, 104(28)
  01bf308  lfs 30, 72(31)
  01bf30c  lfs 2, 108(28)
  01bf310  bl 0xfcbe8
  01bf314  nop
  01bf318  lfs 29, 112(28)
  01bf31c  fmuls 2, 1, 29
  01bf320  fmr 1, 30
  01bf324  bl 0x502578
  01bf328  nop
  01bf32c  fmr 30, 1
  01bf330  lfs 1, 8(28)
  01bf334  lfs 2, 116(28)
  01bf338  bl 0xfcbe8
  01bf33c  nop
  01bf340  fmuls 3, 1, 29
  01bf344  addic 3, 30, 320
  01bf348  lfs 1, 120(28)
  01bf34c  fmr 2, 30
  01bf350  bl 0xfe610
  01bf354  nop
  01bf358  lfs 1, 320(30)
  01bf35c  lfs 2, 16(31)
  01bf360  fadds 1, 1, 2
  01bf364  lfs 2, 324(30)
  01bf368  lfs 3, 328(30)
  01bf36c  stfs 1, 320(30)
  01bf370  lfs 1, 20(31)
  01bf374  fadds 1, 2, 1
  01bf378  stfs 1, 324(30)
  01bf37c  lfs 1, 24(31)
  01bf380  fadds 1, 3, 1
  01bf384  stfs 1, 328(30)
  01bf388  lwz 3, 344(30)
  01bf38c  cmpwi 3, 0
  01bf390  bt 2, 0x1bf3b0
  01bf394  lis 3, 28
  01bf398  lfs 30, 208(29)
  01bf39c  addi 3, 3, -6976
  01bf3a0  lfs 29, 212(29)
  01bf3a4  lfs 28, 216(29)
  01bf3a8  lfs 31, 124(3)
  01bf3ac  b 0x1bf3bc
  01bf3b0  lfs 30, 320(30)
  01bf3b4  lfs 29, 324(30)
  01bf3b8  lfs 28, 328(30)
  01bf3bc  lfs 1, 16(31)
  01bf3c0  lfs 2, 20(31)
  01bf3c4  lis 3, 28
  01bf3c8  fsubs 30, 30, 1
  01bf3cc  fsubs 29, 29, 2
  01bf3d0  addi 3, 3, -6976
  01bf3d4  lis 29, 115
  01bf3d8  addic 29, 29, 22784
  01bf3dc  lfs 1, 52(3)
  01bf3e0  fabs 3, 30
  01bf3e4  fabs 4, 29
  01bf3e8  stfs 30, 220(1)
  01bf3ec  stfs 29, 224(1)
  01bf3f0  lfs 5, 24(31)
  01bf3f4  fadds 1, 5, 1
  01bf3f8  fsubs 2, 3, 4
  01bf3fc  fsubs 28, 28, 1
  01bf400  stfs 2, 228(1)
  01bf404  lwz 4, 220(1)
  01bf408  lfs 27, 8(3)
  01bf40c  lfs 2, 220(1)
  01bf410  lwz 3, 224(1)
  01bf414  lfs 5, 224(1)
  01bf418  lwz 5, 228(1)
  01bf41c  rlwinm 3, 3, 3, 29, 29
  01bf420  lfs 1, 228(1)
  01bf424  fabs 2, 2
  01bf428  rlwimi 3, 5, 2, 30, 30
  01bf42c  fabs 5, 5
  01bf430  fsub 6, 1, 27
  01bf434  fsub 7, 1, 27
  01bf438  rlwimi 3, 4, 4, 28, 28
  01bf43c  ori 4, 29, 0
  01bf440  rlwimi 4, 3, 2, 26, 28
  01bf444  slwi 3, 3, 2
  01bf448  clrldi 4, 4, 32
  01bf44c  fsel 4, 6, 2, 4
  01bf450  lfsx 1, 29, 3
  01bf454  fsel 3, 7, 5, 3
  01bf458  lfs 2, 4(4)
  01bf45c  fcmpu 0, 4, 27
  01bf460  bt 1, 0x1bf46c
  01bf464  fmr 1, 27
  01bf468  b 0x1bf590
  01bf46c  fsubs 5, 3, 4
  01bf470  fadds 3, 3, 4
  01bf474  addic 3, 1, 16
  01bf478  li 7, 2
  01bf47c  addic 5, 3, 276
  01bf480  addic 4, 3, 260
  01bf484  mtctr 7
  01bf488  fdivs 3, 5, 3
  01bf48c  fmuls 4, 3, 3
  01bf490  stfs 3, 288(1)
  01bf494  stfs 3, 280(1)
  01bf498  stfs 3, 284(1)
  01bf49c  stfs 3, 276(1)
  01bf4a0  lfs 6, 288(1)
  01bf4a4  lfs 7, 280(1)
  01bf4a8  lfs 8, 284(1)
  01bf4ac  fmuls 5, 4, 4
  01bf4b0  fmuls 7, 7, 4
  01bf4b4  fmuls 6, 6, 5
  01bf4b8  fmuls 3, 5, 5
  01bf4bc  fmuls 5, 8, 5
  01bf4c0  stfs 7, 280(1)
  01bf4c4  fmuls 4, 6, 4
  01bf4c8  stfs 5, 284(1)
  01bf4cc  stfs 4, 288(1)
  01bf4d0  lfs 4, 260(3)
  01bf4d4  fmuls 4, 4, 3
  01bf4d8  stfs 4, 276(3)
  01bf4dc  lfs 4, 4(4)
  01bf4e0  addic 4, 4, 8
  01bf4e4  fmuls 4, 4, 3
  01bf4e8  addic 3, 3, 8
  01bf4ec  stfs 4, 4(5)
  01bf4f0  addic 5, 5, 8
  01bf4f4  bdnz 0x1bf4d0
  01bf4f8  li 5, 4
  01bf4fc  ori 3, 1, 0
  01bf500  mtctr 5
  01bf504  lis 4, 115
  01bf508  addic 5, 3, 276
  01bf50c  addic 4, 4, 22752
  01bf510  ori 6, 5, 0
  01bf514  lfs 3, 276(3)
  01bf518  lfs 4, 0(4)
  01bf51c  fmuls 3, 3, 4
  01bf520  lfs 4, 4(4)
  01bf524  addic 4, 4, 8
  01bf528  stfs 3, 276(3)
  01bf52c  lfs 3, 4(5)
  01bf530  addic 3, 3, 8
  01bf534  fmuls 3, 3, 4
  01bf538  stfs 3, 4(5)
  01bf53c  addic 5, 5, 8
  01bf540  bdnz 0x1bf514
  01bf544  ori 3, 1, 0
  01bf548  fmr 3, 27
  01bf54c  mtctr 7
  01bf550  lfs 4, 276(3)
  01bf554  fadds 3, 3, 4
  01bf558  lfs 4, 4(6)
  01bf55c  addic 3, 3, 16
  01bf560  lfs 5, 8(6)
  01bf564  lfs 6, 12(6)
  01bf568  addic 6, 6, 16
  01bf56c  fadds 3, 3, 4
  01bf570  fadds 3, 3, 5
  01bf574  fadds 3, 3, 6
  01bf578  bdnz 0x1bf550
  01bf57c  lis 3, 28
  01bf580  addi 3, 3, -6976
  01bf584  lfs 4, 80(3)
  01bf588  fadds 3, 3, 4
  01bf58c  fmadds 1, 3, 1, 2
  01bf590  lfs 2, 72(31)
  01bf594  bl 0x5025e0
  01bf598  nop
  01bf59c  fmuls 2, 29, 29
  01bf5a0  stfs 28, 212(1)
  01bf5a4  fabs 4, 28
  01bf5a8  fmadds 2, 30, 30, 2
  01bf5ac  fsqrts 2, 2
  01bf5b0  lwz 3, 212(1)
  01bf5b4  lfs 3, 212(1)
  01bf5b8  rlwinm 3, 3, 3, 29, 29
  01bf5bc  fabs 3, 3
  01bf5c0  fabs 5, 2
  01bf5c4  stfs 2, 208(1)
  01bf5c8  fsubs 2, 5, 4
  01bf5cc  stfs 2, 216(1)
  01bf5d0  lwz 4, 208(1)
  01bf5d4  lfs 2, 208(1)
  01bf5d8  lwz 5, 216(1)
  01bf5dc  lfs 6, 216(1)
  01bf5e0  fabs 2, 2
  01bf5e4  rlwimi 3, 5, 2, 30, 30
  01bf5e8  fsub 7, 6, 27
  01bf5ec  fsub 6, 6, 27
  01bf5f0  rlwimi 3, 4, 4, 28, 28
  01bf5f4  ori 4, 29, 0
  01bf5f8  rlwimi 4, 3, 2, 26, 28
  01bf5fc  slwi 3, 3, 2
  01bf600  clrldi 4, 4, 32
  01bf604  fsel 4, 7, 2, 4
  01bf608  lfsx 30, 29, 3
  01bf60c  fsel 3, 6, 3, 5
  01bf610  lfs 2, 4(4)
  01bf614  fcmpu 0, 4, 27
  01bf618  bt 1, 0x1bf620
  01bf61c  b 0x1bf740
  01bf620  fsubs 5, 3, 4
  01bf624  fadds 3, 3, 4
  01bf628  addic 3, 1, 16
  01bf62c  li 6, 2
  01bf630  addic 4, 3, 228
  01bf634  addic 5, 3, 244
  01bf638  mtctr 6
  01bf63c  fdivs 3, 5, 3
  01bf640  fmuls 4, 3, 3
  01bf644  stfs 3, 256(1)
  01bf648  stfs 3, 248(1)
  01bf64c  stfs 3, 252(1)
  01bf650  stfs 3, 244(1)
  01bf654  lfs 6, 256(1)
  01bf658  lfs 7, 248(1)
  01bf65c  lfs 8, 252(1)
  01bf660  fmuls 5, 4, 4
  01bf664  fmuls 7, 7, 4
  01bf668  fmuls 6, 6, 5
  01bf66c  fmuls 3, 5, 5
  01bf670  fmuls 5, 8, 5
  01bf674  stfs 7, 248(1)
  01bf678  fmuls 4, 6, 4
  01bf67c  stfs 5, 252(1)
  01bf680  stfs 4, 256(1)
  01bf684  lfs 4, 228(3)
  01bf688  fmuls 4, 4, 3
  01bf68c  stfs 4, 244(3)
  01bf690  lfs 4, 4(4)
  01bf694  addic 3, 3, 8
  01bf698  addic 4, 4, 8
  01bf69c  fmuls 4, 4, 3
  01bf6a0  stfs 4, 4(5)
  01bf6a4  addic 5, 5, 8
  01bf6a8  bdnz 0x1bf684
  01bf6ac  li 5, 4
  01bf6b0  ori 3, 1, 0
  01bf6b4  mtctr 5
  01bf6b8  lis 4, 115
  01bf6bc  addic 5, 3, 244
  01bf6c0  addic 4, 4, 22752
  01bf6c4  ori 7, 5, 0
  01bf6c8  lfs 3, 244(3)
  01bf6cc  lfs 4, 0(4)
  01bf6d0  fmuls 3, 3, 4
  01bf6d4  lfs 4, 4(4)
  01bf6d8  addic 4, 4, 8
  01bf6dc  stfs 3, 244(3)
  01bf6e0  lfs 3, 4(5)
  01bf6e4  addic 3, 3, 8
  01bf6e8  fmuls 3, 3, 4
  01bf6ec  stfs 3, 4(5)
  01bf6f0  addic 5, 5, 8
  01bf6f4  bdnz 0x1bf6c8
  01bf6f8  ori 3, 1, 0
  01bf6fc  mtctr 6
  01bf700  lfs 3, 244(3)
  01bf704  lfs 4, 4(7)
  01bf708  fadds 3, 27, 3
  01bf70c  lfs 5, 8(7)
  01bf710  lfs 27, 12(7)
  01bf714  addic 3, 3, 16
  01bf718  addic 7, 7, 16
  01bf71c  fadds 3, 3, 4
  01bf720  fadds 3, 3, 5
  01bf724  fadds 27, 3, 27
  01bf728  bdnz 0x1bf700
  01bf72c  lis 3, 28
  01bf730  addi 3, 3, -6976
  01bf734  lfs 3, 80(3)
  01bf738  fadds 27, 27, 3
  01bf73c  fmadds 27, 27, 30, 2
  01bf740  lis 3, 28
  01bf744  fneg 27, 27
  01bf748  addi 3, 3, -6976
  01bf74c  lfs 2, 84(3)
  01bf750  fcmpu 0, 1, 2
  01bf754  cror 6, 0, 2
  01bf758  bt 6, 0x1bf764
  01bf75c  fmr 1, 2
  01bf760  b 0x1bf780
  01bf764  lis 3, 28
  01bf768  addi 3, 3, -6976
  01bf76c  lfs 2, 128(3)
  01bf770  fcmpu 0, 1, 2
  01bf774  cror 6, 1, 2
  01bf778  bt 6, 0x1bf780
  01bf77c  fmr 1, 2
  01bf780  lis 3, 28
  01bf784  addi 3, 3, -6976
  01bf788  lfs 2, 132(3)
  01bf78c  fcmpu 0, 27, 2
  01bf790  cror 6, 0, 2
  01bf794  bt 6, 0x1bf7a0
  01bf798  fmr 27, 2
  01bf79c  b 0x1bf7bc
  01bf7a0  lis 3, 28
  01bf7a4  addi 3, 3, -6976
  01bf7a8  lfs 2, 136(3)
  01bf7ac  fcmpu 0, 27, 2
  01bf7b0  cror 6, 1, 2
  01bf7b4  bt 6, 0x1bf7bc
  01bf7b8  fmr 27, 2
  01bf7bc  lis 3, 28
  01bf7c0  addi 3, 3, -6976
  01bf7c4  lfs 2, 140(3)
  01bf7c8  fmuls 2, 1, 2
  01bf7cc  stfs 2, 168(30)
  01bf7d0  lfs 2, 144(3)
  01bf7d4  stfs 27, 164(30)
  01bf7d8  fmuls 1, 1, 2
  01bf7dc  stfs 1, 296(30)
  01bf7e0  lis 3, 151
  01bf7e4  lbz 3, -16268(3)
  01bf7e8  cmpwi 3, 0
  01bf7ec  bt 2, 0x1bf7f8
  01bf7f0  lis 3, 16432
  01bf7f4  stw 3, 176(30)
  01bf7f8  lis 3, 28
  01bf7fc  lis 29, 114
  01bf800  addi 3, 3, -6976
  01bf804  addic 4, 30, 64
  01bf808  li 5, 0
  01bf80c  lfs 30, 148(3)
  01bf810  lfs 2, -3060(29)
  01bf814  ori 3, 31, 0
  01bf818  fmuls 1, 2, 31
  01bf81c  fmuls 2, 2, 30
  01bf820  bl 0x1167c8
  01bf824  nop
  01bf828  lfs 2, -3060(29)
  01bf82c  addic 4, 30, 192
  01bf830  ori 3, 31, 0
  01bf834  fmuls 1, 2, 31
  01bf838  li 5, 2
  01bf83c  fmuls 2, 2, 30
  01bf840  bl 0x1167c8
  01bf844  nop
  01bf848  ld 0, 480(1)
  01bf84c  mtlr 0
  01bf850  lfd 26, 416(1)
  01bf854  lfd 27, 424(1)
  01bf858  lfd 28, 432(1)
  01bf85c  lfd 29, 440(1)
  01bf860  lfd 30, 448(1)
  01bf864  lfd 31, 456(1)
  01bf868  ld 26, 368(1)
  01bf86c  ld 27, 376(1)
  01bf870  ld 28, 384(1)
  01bf874  ld 29, 392(1)
  01bf878  ld 30, 400(1)
  01bf87c  ld 31, 408(1)
  01bf880  addi 1, 1, 464
  01bf884  blr
