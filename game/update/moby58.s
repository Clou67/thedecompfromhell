# game/update/moby58.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_002ea758:   # 0x2ea758, 0x19c bytes
  02ea758  stdu 1, -192(1)
  02ea75c  mflr 0
  02ea760  std 0, 208(1)
  02ea764  addi 0, 1, 128
  02ea768  stvx 31, 0, 0
  02ea76c  sldi 7, 4, 4
  02ea770  lis 8, 114
  02ea774  stw 6, 112(1)
  02ea778  subc 9, 4, 7
  02ea77c  std 29, 168(1)
  02ea780  stw 6, 116(1)
  02ea784  ori 29, 3, 0
  02ea788  stw 6, 120(1)
  02ea78c  sldi 9, 9, 2
  02ea790  stw 6, 124(1)
  02ea794  addic 8, 8, 4154
  02ea798  std 27, 152(1)
  02ea79c  subc 7, 7, 9
  02ea7a0  li 27, 0
  02ea7a4  extsw 3, 7
  02ea7a8  std 30, 176(1)
  02ea7ac  std 28, 160(1)
  02ea7b0  li 0, 112
  02ea7b4  ori 28, 27, 0
  02ea7b8  std 31, 184(1)
  02ea7bc  ori 30, 4, 0
  02ea7c0  ori 31, 5, 0
  02ea7c4  lhzx 3, 8, 3
  02ea7c8  lvx 31, 1, 0
  02ea7cc  extsh 3, 3
  02ea7d0  cmpwi 3, 0
  02ea7d4  bf 1, 0x2ea8c4
  02ea7d8  bl 0xefa28
  02ea7dc  nop
  02ea7e0  ori 27, 3, 0
  02ea7e4  cmpwi 27, 0
  02ea7e8  bt 2, 0x2ea8c4
  02ea7ec  li 4, 255
  02ea7f0  li 3, 1
  02ea7f4  cmpwi 31, -1
  02ea7f8  stb 4, 48(27)
  02ea7fc  stb 3, 49(27)
  02ea800  stb 3, 32(27)
  02ea804  stb 28, 188(27)
  02ea808  lfs 1, 0(29)
  02ea80c  lwz 3, 120(27)
  02ea810  stfs 1, 16(27)
  02ea814  lfs 1, 4(29)
  02ea818  sth 4, 50(27)
  02ea81c  stfs 1, 20(27)
  02ea820  lfs 1, 8(29)
  02ea824  stfs 1, 24(27)
  02ea828  lfs 1, 12(29)
  02ea82c  ori 29, 31, 0
  02ea830  stfs 1, 28(27)
  02ea834  bf 2, 0x2ea854
  02ea838  sldi 4, 30, 3
  02ea83c  lis 5, 115
  02ea840  addc 6, 4, 4
  02ea844  addic 5, 5, 32060
  02ea848  addc 4, 4, 6
  02ea84c  extsw 4, 4
  02ea850  lhzx 29, 5, 4
  02ea854  vcfsx 2, 31, 0
  02ea858  ori 4, 3, 0
  02ea85c  lis 5, 47
  02ea860  vspltisw 3, -1
  02ea864  li 3, 12
  02ea868  addi 5, 5, -22704
  02ea86c  lis 6, 114
  02ea870  stw 29, 0(4)
  02ea874  stw 30, 8(4)
  02ea878  li 7, -3056
  02ea87c  vslw 3, 3, 3
  02ea880  stvewx 2, 3, 4
  02ea884  <unknown>
  02ea888  <unknown>
  02ea88c  vspltw 2, 2, 0
  02ea890  li 5, 32
  02ea894  lfs 1, 24(27)
  02ea898  ori 3, 27, 0
  02ea89c  vmaddfp 2, 4, 2, 3
  02ea8a0  vctsxs 2, 2, 0
  02ea8a4  vspltw 2, 2, 0
  02ea8a8  stvewx 2, 5, 4
  02ea8ac  stfs 1, 40(4)
  02ea8b0  bl 0xf31a8
  02ea8b4  nop
  02ea8b8  ori 3, 27, 0
  02ea8bc  bl 0x10c000
  02ea8c0  nop
  02ea8c4  ori 3, 27, 0
  02ea8c8  li 0, 128
  02ea8cc  lvx 31, 1, 0
  02ea8d0  ld 0, 208(1)
  02ea8d4  mtlr 0
  02ea8d8  ld 27, 152(1)
  02ea8dc  ld 28, 160(1)
  02ea8e0  ld 29, 168(1)
  02ea8e4  ld 30, 176(1)
  02ea8e8  ld 31, 184(1)
  02ea8ec  addi 1, 1, 192
  02ea8f0  blr

UpdateMoby_58:   # 0x2ea970, 0xa80 bytes
  02ea970  stdu 1, -224(1)
  02ea974  mflr 0
  02ea978  std 0, 240(1)
  02ea97c  stfd 30, 208(1)
  02ea980  stfd 31, 216(1)
  02ea984  std 31, 200(1)
  02ea988  std 30, 192(1)
  02ea98c  ori 31, 3, 0
  02ea990  lwz 30, 120(31)
  02ea994  std 29, 184(1)
  02ea998  std 28, 176(1)
  02ea99c  addic 3, 30, 32
  02ea9a0  bl 0x4fff60
  02ea9a4  nop
  02ea9a8  lbz 3, 32(31)
  02ea9ac  lfs 3, 16(31)
  02ea9b0  lfs 2, 20(31)
  02ea9b4  cmpwi 3, 1
  02ea9b8  lfs 1, 24(31)
  02ea9bc  lfs 31, 28(31)
  02ea9c0  bt 2, 0x2ea9d4
  02ea9c4  cmpwi 3, 4
  02ea9c8  bt 2, 0x2ea9d4
  02ea9cc  cmpwi 3, 3
  02ea9d0  bf 2, 0x2eab84
  02ea9d4  lfs 4, 20(30)
  02ea9d8  lfs 5, 16(30)
  02ea9dc  fmuls 4, 4, 4
  02ea9e0  lfs 6, 24(30)
  02ea9e4  lis 3, 47
  02ea9e8  addi 3, 3, -22284
  02ea9ec  fmadds 4, 5, 5, 4
  02ea9f0  lfs 5, 0(3)
  02ea9f4  fmadds 4, 6, 6, 4
  02ea9f8  fsqrts 4, 4
  02ea9fc  fcmpu 0, 4, 5
  02eaa00  bt 2, 0x2eaa70
  02eaa04  lis 3, 47
  02eaa08  stfs 3, 112(1)
  02eaa0c  li 5, 2
  02eaa10  addi 4, 3, -22284
  02eaa14  stfs 2, 116(1)
  02eaa18  stfs 31, 124(1)
  02eaa1c  addic 3, 1, 112
  02eaa20  li 6, 0
  02eaa24  lfs 31, 4(4)
  02eaa28  fadds 1, 1, 31
  02eaa2c  stfs 1, 120(1)
  02eaa30  lfs 1, 8(4)
  02eaa34  bl 0x59e20
  02eaa38  nop
  02eaa3c  cmpwi 3, 0
  02eaa40  bt 2, 0x2eaa70
  02eaa44  lis 3, 161
  02eaa48  addic 3, 3, 2368
  02eaa4c  lfs 1, 48(3)
  02eaa50  stfs 1, 16(31)
  02eaa54  lfs 1, 52(3)
  02eaa58  stfs 1, 20(31)
  02eaa5c  lfs 1, 56(3)
  02eaa60  lfs 2, 60(3)
  02eaa64  fsubs 1, 1, 31
  02eaa68  stfs 2, 28(31)
  02eaa6c  stfs 1, 24(31)
  02eaa70  lis 3, 47
  02eaa74  lfs 1, 24(30)
  02eaa78  addi 8, 3, -22284
  02eaa7c  lis 3, 114
  02eaa80  lfs 2, 12(8)
  02eaa84  lfs 3, -3048(3)
  02eaa88  lfs 4, 16(30)
  02eaa8c  fnmsubs 1, 3, 2, 1
  02eaa90  addic 4, 1, 128
  02eaa94  li 5, 2
  02eaa98  li 6, 0
  02eaa9c  li 7, 0
  02eaaa0  stfs 1, 24(30)
  02eaaa4  lfs 1, 16(31)
  02eaaa8  lfs 3, 20(31)
  02eaaac  fadds 1, 1, 4
  02eaab0  lfs 4, 24(31)
  02eaab4  lfs 5, 28(31)
  02eaab8  lfs 6, -3048(3)
  02eaabc  addic 3, 1, 112
  02eaac0  stfs 1, 128(1)
  02eaac4  lfs 1, 20(30)
  02eaac8  fadds 1, 3, 1
  02eaacc  stfs 1, 132(1)
  02eaad0  lfs 1, 24(30)
  02eaad4  stfs 5, 140(1)
  02eaad8  fadds 1, 4, 1
  02eaadc  stfs 1, 136(1)
  02eaae0  lfs 1, 24(30)
  02eaae4  fnmsubs 1, 6, 2, 1
  02eaae8  stfs 1, 24(30)
  02eaaec  lfs 1, 16(31)
  02eaaf0  lfs 2, 20(31)
  02eaaf4  stfs 1, 112(1)
  02eaaf8  lfs 1, 28(31)
  02eaafc  stfs 2, 116(1)
  02eab00  stfs 1, 124(1)
  02eab04  lfs 1, 16(8)
  02eab08  lfs 2, 24(31)
  02eab0c  fadds 1, 2, 1
  02eab10  stfs 1, 120(1)
  02eab14  bl 0x57820
  02eab18  nop
  02eab1c  cmpwi 3, 0
  02eab20  bt 2, 0x2eab64
  02eab24  li 3, 0
  02eab28  lis 4, 161
  02eab2c  addic 4, 4, 2368
  02eab30  stw 3, 28(30)
  02eab34  stw 3, 24(30)
  02eab38  stw 3, 20(30)
  02eab3c  stw 3, 16(30)
  02eab40  lfs 1, 32(4)
  02eab44  stfs 1, 16(31)
  02eab48  lfs 1, 36(4)
  02eab4c  stfs 1, 20(31)
  02eab50  lfs 1, 40(4)
  02eab54  stfs 1, 24(31)
  02eab58  lfs 1, 44(4)
  02eab5c  stfs 1, 28(31)
  02eab60  b 0x2eab84
  02eab64  lfs 1, 128(1)
  02eab68  lfs 2, 132(1)
  02eab6c  stfs 1, 16(31)
  02eab70  lfs 1, 136(1)
  02eab74  stfs 2, 20(31)
  02eab78  lfs 2, 140(1)
  02eab7c  stfs 1, 24(31)
  02eab80  stfs 2, 28(31)
  02eab84  lbz 3, 32(31)
  02eab88  cmpwi 3, 4
  02eab8c  cmpwi 1, 3, 3
  02eab90  cmpwi 6, 3, 2
  02eab94  cmpwi 7, 3, 1
  02eab98  bt 2, 0x2eb36c
  02eab9c  bt 6, 0x2eb1a0
  02eaba0  bt 26, 0x2eaf74
  02eaba4  bt 30, 0x2eabbc
  02eaba8  cmpwi 3, 0
  02eabac  bf 2, 0x2eb3c8
  02eabb0  li 3, 1
  02eabb4  stb 3, 32(31)
  02eabb8  b 0x2eb3c8
  02eabbc  li 3, 35
  02eabc0  vspltisw 2, -8
  02eabc4  li 4, 144
  02eabc8  <unknown>
  02eabcc  lis 3, 47
  02eabd0  vsrw 2, 3, 2
  02eabd4  addi 5, 3, -22284
  02eabd8  lis 3, 114
  02eabdc  vcfux 2, 2, 0
  02eabe0  lfs 1, -3056(3)
  02eabe4  addic 3, 1, 144
  02eabe8  vspltw 2, 2, 0
  02eabec  stvewx 2, 4, 1
  02eabf0  lfs 2, 24(5)
  02eabf4  li 4, 128
  02eabf8  fmuls 1, 1, 2
  02eabfc  fctiwz 2, 1
  02eac00  lfs 1, 20(5)
  02eac04  stfd 2, 152(1)
  02eac08  lwz 5, 156(1)
  02eac0c  divw 4, 4, 5
  02eac10  extsw 4, 4
  02eac14  std 4, 152(1)
  02eac18  lfd 2, 152(1)
  02eac1c  fcfid 2, 2
  02eac20  frsp 2, 2
  02eac24  bl 0x109af0
  02eac28  nop
  02eac2c  lfs 1, 144(1)
  02eac30  bl 0x502758
  02eac34  nop
  02eac38  ori 6, 3, 0
  02eac3c  stb 6, 35(31)
  02eac40  lwz 3, 32(30)
  02eac44  cmpwi 3, 0
  02eac48  bt 1, 0x2eb3c8
  02eac4c  lfs 1, 20(30)
  02eac50  lfs 2, 16(30)
  02eac54  fmuls 1, 1, 1
  02eac58  lfs 3, 24(30)
  02eac5c  lis 3, 47
  02eac60  addi 3, 3, -22284
  02eac64  fmadds 1, 2, 2, 1
  02eac68  lfs 2, 0(3)
  02eac6c  fmadds 1, 3, 3, 1
  02eac70  fsqrts 1, 1
  02eac74  fcmpu 0, 1, 2
  02eac78  bf 2, 0x2eb3c8
  02eac7c  lis 5, 151
  02eac80  lfs 1, 24(31)
  02eac84  addic 5, 5, -25376
  02eac88  li 7, 1
  02eac8c  ori 4, 7, 0
  02eac90  lfs 2, 136(5)
  02eac94  lfs 3, 8844(5)
  02eac98  fsubs 2, 1, 2
  02eac9c  fabs 2, 2
  02eaca0  fcmpu 0, 2, 3
  02eaca4  bt 1, 0x2eacdc
  02eaca8  lfs 2, 20(31)
  02eacac  lfs 3, 132(5)
  02eacb0  lfs 4, 16(31)
  02eacb4  fsubs 2, 2, 3
  02eacb8  lfs 3, 128(5)
  02eacbc  fsubs 3, 4, 3
  02eacc0  fmuls 2, 2, 2
  02eacc4  fmadds 2, 3, 3, 2
  02eacc8  lfs 3, 8840(5)
  02eaccc  fsqrts 2, 2
  02eacd0  fcmpu 0, 2, 3
  02eacd4  cror 6, 0, 2
  02eacd8  bt 6, 0x2eace0
  02eacdc  li 7, 0
  02eace0  lis 3, 47
  02eace4  lis 28, 151
  02eace8  addi 9, 3, -22284
  02eacec  lwz 3, 8(30)
  02eacf0  lis 8, 115
  02eacf4  slwi 10, 3, 2
  02eacf8  addic 28, 28, -16212
  02eacfc  lfs 2, 28(9)
  02ead00  lfs 3, 40(30)
  02ead04  sldi 9, 3, 3
  02ead08  extsw 29, 10
  02ead0c  fsubs 2, 3, 2
  02ead10  addc 11, 9, 9
  02ead14  addic 8, 8, 32062
  02ead18  addc 9, 9, 11
  02ead1c  lwzx 29, 28, 29
  02ead20  extsw 9, 9
  02ead24  extsw 11, 29
  02ead28  li 10, 0
  02ead2c  subc 7, 7, 10
  02ead30  fcmpu 0, 1, 2
  02ead34  lhzx 8, 8, 9
  02ead38  subc 8, 11, 8
  02ead3c  sradi 8, 8, 63
  02ead40  and 7, 8, 7
  02ead44  addc 7, 10, 7
  02ead48  cror 6, 1, 2
  02ead4c  bt 6, 0x2ead54
  02ead50  ori 7, 4, 0
  02ead54  lwz 4, 8872(5)
  02ead58  cmpwi 1, 7, 0
  02ead5c  cmpwi 4, 0
  02ead60  bt 2, 0x2eaef4
  02ead64  bt 6, 0x2eaef4
  02ead68  lwz 4, 0(30)
  02ead6c  extsw 3, 3
  02ead70  extsw 4, 4
  02ead74  bl 0xaa2e8
  02ead78  nop
  02ead7c  lwz 3, 8(30)
  02ead80  slwi 4, 3, 2
  02ead84  extsw 4, 4
  02ead88  lwzx 4, 28, 4
  02ead8c  cmpw 29, 4
  02ead90  bf 0, 0x2eadf4
  02ead94  ori 5, 3, 0
  02ead98  subc 3, 4, 29
  02ead9c  sldi 4, 5, 4
  02eada0  extsw 3, 3
  02eada4  subc 5, 5, 4
  02eada8  cmpwi 3, 1
  02eadac  sldi 5, 5, 2
  02eadb0  subc 4, 4, 5
  02eadb4  extsw 4, 4
  02eadb8  bf 2, 0x2eadcc
  02eadbc  lis 5, 114
  02eadc0  addic 5, 5, 4150
  02eadc4  lhzx 4, 5, 4
  02eadc8  b 0x2eadd8
  02eadcc  lis 5, 114
  02eadd0  addic 5, 5, 4148
  02eadd4  lhzx 4, 5, 4
  02eadd8  ori 5, 3, 0
  02eaddc  extsh 3, 4
  02eade0  ori 4, 5, 0
  02eade4  li 5, -1
  02eade8  bl 0x11a458
  02eadec  nop
  02eadf0  lwz 3, 8(30)
  02eadf4  slwi 3, 3, 2
  02eadf8  lis 4, 161
  02eadfc  extsw 3, 3
  02eae00  addic 4, 4, -2640
  02eae04  lis 6, 47
  02eae08  li 5, 2
  02eae0c  addi 6, 6, -22284
  02eae10  lwzx 7, 28, 3
  02eae14  lwzx 8, 4, 3
  02eae18  subc 7, 7, 29
  02eae1c  addc 7, 8, 7
  02eae20  lis 8, 114
  02eae24  stwx 7, 4, 3
  02eae28  stb 5, 32(31)
  02eae2c  li 3, 0
  02eae30  lfs 1, 32(6)
  02eae34  lis 4, 114
  02eae38  lfs 2, 36(6)
  02eae3c  lfs 3, -3064(8)
  02eae40  lfs 4, 44(31)
  02eae44  fmadds 1, 3, 1, 2
  02eae48  lis 5, 114
  02eae4c  lis 7, 161
  02eae50  lis 8, 268
  02eae54  fmuls 1, 4, 1
  02eae58  stfs 1, 44(31)
  02eae5c  stw 3, 28(30)
  02eae60  stw 3, 24(30)
  02eae64  stw 3, 20(30)
  02eae68  stw 3, 16(30)
  02eae6c  lfs 1, 40(6)
  02eae70  lfs 2, -3052(4)
  02eae74  li 3, 0
  02eae78  fmuls 1, 2, 1
  02eae7c  stfs 1, 36(30)
  02eae80  lfs 1, 44(6)
  02eae84  lfs 2, -3056(5)
  02eae88  lwz 4, 1808(7)
  02eae8c  fmuls 1, 2, 1
  02eae90  lwz 5, -19440(8)
  02eae94  subc 4, 4, 5
  02eae98  extsw 4, 4
  02eae9c  neg 5, 4
  02eaea0  subc 3, 4, 3
  02eaea4  subc 5, 5, 4
  02eaea8  fctiwz 1, 1
  02eaeac  sradi 3, 3, 63
  02eaeb0  and 3, 3, 5
  02eaeb4  addc 3, 4, 3
  02eaeb8  stfd 1, 152(1)
  02eaebc  lwz 4, 156(1)
  02eaec0  cmpw 3, 4
  02eaec4  bf 1, 0x2eb3c8
  02eaec8  li 3, 0
  02eaecc  li 4, 0
  02eaed0  ori 5, 31, 0
  02eaed4  li 6, 213
  02eaed8  bl 0x15d204
  02eaedc  nop
  02eaee0  lis 3, 161
  02eaee4  lis 4, 268
  02eaee8  lwz 3, 1808(3)
  02eaeec  stw 3, -19440(4)
  02eaef0  b 0x2eb3c8
  02eaef4  clrlwi 3, 6, 24
  02eaef8  cmpwi 3, 255
  02eaefc  bf 0, 0x2eaf08
  02eaf00  addic 3, 6, 1
  02eaf04  stb 3, 35(31)
  02eaf08  ori 3, 31, 0
  02eaf0c  lwz 4, 8320(5)
  02eaf10  bl 0xf20f0
  02eaf14  nop
  02eaf18  lis 3, 47
  02eaf1c  addi 3, 3, -22284
  02eaf20  lfs 2, 48(3)
  02eaf24  fcmpu 0, 1, 2
  02eaf28  bt 1, 0x2eb3c8
  02eaf2c  lis 3, 47
  02eaf30  li 4, 3
  02eaf34  vspltisw 2, -1
  02eaf38  addi 3, 3, -22284
  02eaf3c  li 5, 52
  02eaf40  li 6, -3056
  02eaf44  stb 4, 32(31)
  02eaf48  lis 4, 114
  02eaf4c  vslw 2, 2, 2
  02eaf50  <unknown>
  02eaf54  li 3, 6
  02eaf58  vspltw 3, 3, 0
  02eaf5c  <unknown>
  02eaf60  vmaddfp 2, 4, 3, 2
  02eaf64  vctsxs 2, 2, 0
  02eaf68  vsplth 2, 2, 1
  02eaf6c  stvehx 2, 3, 30
  02eaf70  b 0x2eb3c8
  02eaf74  lis 3, 47
  02eaf78  lis 28, 114
  02eaf7c  addi 29, 3, -22284
  02eaf80  addic 3, 30, 36
  02eaf84  lfs 31, 0(29)
  02eaf88  lfs 30, 56(29)
  02eaf8c  lfs 2, -3048(28)
  02eaf90  fmr 1, 31
  02eaf94  fmuls 2, 2, 30
  02eaf98  bl 0x109af0
  02eaf9c  nop
  02eafa0  lfs 1, 24(31)
  02eafa4  lfs 2, 36(30)
  02eafa8  fadds 1, 1, 2
  02eafac  lis 4, 114
  02eafb0  addic 3, 1, 148
  02eafb4  stfs 1, 24(31)
  02eafb8  lfs 1, 20(30)
  02eafbc  lfs 2, 16(30)
  02eafc0  fmuls 1, 1, 1
  02eafc4  lfs 3, 24(30)
  02eafc8  fmadds 1, 2, 2, 1
  02eafcc  lfs 2, -3048(28)
  02eafd0  fmuls 2, 2, 30
  02eafd4  fmadds 1, 3, 3, 1
  02eafd8  lfs 3, -3052(4)
  02eafdc  fsqrts 1, 1
  02eafe0  stfs 1, 148(1)
  02eafe4  lfs 1, 60(29)
  02eafe8  fmuls 1, 3, 1
  02eafec  bl 0x109af0
  02eaff0  nop
  02eaff4  lis 3, 151
  02eaff8  lfs 5, 16(31)
  02eaffc  addic 3, 3, -25376
  02eb000  lfs 1, 208(3)
  02eb004  fsubs 5, 1, 5
  02eb008  stfs 5, 16(30)
  02eb00c  lfs 4, 212(3)
  02eb010  lfs 1, 20(31)
  02eb014  fsubs 4, 4, 1
  02eb018  stfs 4, 20(30)
  02eb01c  lfs 3, 216(3)
  02eb020  lfs 1, 24(31)
  02eb024  fsubs 3, 3, 1
  02eb028  stfs 3, 24(30)
  02eb02c  lfs 1, 220(3)
  02eb030  stfs 1, 28(30)
  02eb034  lwz 4, 44(31)
  02eb038  cmpwi 4, 0
  02eb03c  bt 2, 0x2eb060
  02eb040  fmuls 1, 4, 4
  02eb044  fmadds 1, 5, 5, 1
  02eb048  fmadds 2, 3, 3, 1
  02eb04c  lfs 1, 148(1)
  02eb050  fsqrts 2, 2
  02eb054  fcmpu 0, 2, 1
  02eb058  cror 6, 1, 2
  02eb05c  bt 6, 0x2eb070
  02eb060  ori 3, 31, 0
  02eb064  bl 0xefb38
  02eb068  nop
  02eb06c  b 0x2eb3c8
  02eb070  fdivs 6, 1, 2
  02eb074  lis 4, 47
  02eb078  lis 5, 114
  02eb07c  addi 4, 4, -22284
  02eb080  fsub 7, 31, 2
  02eb084  fsub 8, 31, 2
  02eb088  fsub 9, 31, 2
  02eb08c  fsub 10, 2, 31
  02eb090  fsub 11, 2, 31
  02eb094  fsub 2, 2, 31
  02eb098  lwz 6, 36(31)
  02eb09c  fmuls 4, 4, 6
  02eb0a0  fmuls 5, 5, 6
  02eb0a4  fmuls 3, 3, 6
  02eb0a8  fsel 6, 7, 31, 4
  02eb0ac  fsel 7, 8, 31, 5
  02eb0b0  fsel 8, 9, 31, 3
  02eb0b4  fsel 4, 10, 6, 4
  02eb0b8  fsel 5, 11, 7, 5
  02eb0bc  fsel 2, 2, 8, 3
  02eb0c0  stfs 4, 20(30)
  02eb0c4  stfs 5, 16(30)
  02eb0c8  stfs 2, 24(30)
  02eb0cc  lfs 2, 16(31)
  02eb0d0  lfs 3, 20(31)
  02eb0d4  fadds 2, 2, 5
  02eb0d8  lfs 4, 24(31)
  02eb0dc  stfs 2, 16(31)
  02eb0e0  lfs 5, 20(30)
  02eb0e4  fadds 3, 3, 5
  02eb0e8  stfs 3, 20(31)
  02eb0ec  lfs 5, 24(30)
  02eb0f0  fadds 4, 4, 5
  02eb0f4  stfs 4, 24(31)
  02eb0f8  lfs 5, 212(3)
  02eb0fc  lfs 6, 208(3)
  02eb100  fsubs 3, 3, 5
  02eb104  fsubs 2, 2, 6
  02eb108  lfs 5, 216(3)
  02eb10c  fsubs 4, 4, 5
  02eb110  lfs 5, 24(4)
  02eb114  lfs 6, -3056(5)
  02eb118  fmuls 3, 3, 3
  02eb11c  fmadds 2, 2, 2, 3
  02eb120  fmuls 3, 6, 5
  02eb124  fmadds 2, 4, 4, 2
  02eb128  fctidz 3, 3
  02eb12c  lfs 4, 64(4)
  02eb130  fsqrts 5, 2
  02eb134  lfs 2, 36(4)
  02eb138  lfs 31, 36(6)
  02eb13c  fcfid 3, 3
  02eb140  frsp 3, 3
  02eb144  fmadds 1, 3, 1, 4
  02eb148  fdivs 1, 5, 1
  02eb14c  fcmpu 0, 1, 2
  02eb150  cror 6, 0, 2
  02eb154  bt 6, 0x2eb160
  02eb158  fmr 1, 2
  02eb15c  b 0x2eb17c
  02eb160  lis 3, 47
  02eb164  addi 3, 3, -22284
  02eb168  lfs 2, 68(3)
  02eb16c  fcmpu 0, 1, 2
  02eb170  cror 6, 1, 2
  02eb174  bt 6, 0x2eb17c
  02eb178  fmr 1, 2
  02eb17c  lis 3, 47
  02eb180  fmuls 1, 31, 1
  02eb184  addi 4, 3, -22284
  02eb188  addic 3, 31, 44
  02eb18c  lfs 2, 16(4)
  02eb190  fmuls 2, 31, 2
  02eb194  bl 0x109af0
  02eb198  nop
  02eb19c  b 0x2eb3c8
  02eb1a0  lis 3, 161
  02eb1a4  lis 4, -30584
  02eb1a8  ori 4, 4, 34953
  02eb1ac  lwz 3, 1808(3)
  02eb1b0  mulhw 4, 4, 3
  02eb1b4  addc 4, 4, 3
  02eb1b8  srawi 4, 4, 5
  02eb1bc  srwi 5, 4, 31
  02eb1c0  addc 4, 4, 5
  02eb1c4  sldi 5, 4, 6
  02eb1c8  sldi 4, 4, 2
  02eb1cc  subc 4, 5, 4
  02eb1d0  subc 3, 3, 4
  02eb1d4  lis 4, 47
  02eb1d8  extsw 3, 3
  02eb1dc  addi 29, 4, -22284
  02eb1e0  std 3, 152(1)
  02eb1e4  lfs 1, 72(29)
  02eb1e8  lfs 2, 76(29)
  02eb1ec  lfs 3, 80(29)
  02eb1f0  lfs 4, 84(29)
  02eb1f4  lfd 5, 152(1)
  02eb1f8  fcfid 5, 5
  02eb1fc  lfs 6, 88(29)
  02eb200  li 3, 35
  02eb204  vspltisw 3, -8
  02eb208  frsp 5, 5
  02eb20c  fmuls 1, 5, 1
  02eb210  lfs 5, 92(29)
  02eb214  fmsubs 1, 1, 2, 3
  02eb218  fadds 1, 1, 4
  02eb21c  fsubs 2, 6, 1
  02eb220  fsubs 3, 5, 1
  02eb224  lfs 5, 96(29)
  02eb228  fsub 4, 1, 2
  02eb22c  fsel 1, 4, 2, 1
  02eb230  lfs 2, 100(29)
  02eb234  <unknown>
  02eb238  li 3, 144
  02eb23c  vsrw 2, 2, 3
  02eb240  fsub 4, 3, 1
  02eb244  vcfux 2, 2, 0
  02eb248  fsel 1, 4, 3, 1
  02eb24c  lfs 3, 104(29)
  02eb250  lfs 6, 108(29)
  02eb254  vspltw 2, 2, 0
  02eb258  lfs 8, 112(29)
  02eb25c  fmuls 4, 1, 1
  02eb260  stvewx 2, 3, 1
  02eb264  fmuls 7, 4, 1
  02eb268  fmuls 9, 4, 7
  02eb26c  fmadds 1, 7, 5, 1
  02eb270  fmuls 5, 4, 9
  02eb274  fmadds 1, 9, 2, 1
  02eb278  fmuls 2, 4, 5
  02eb27c  fmadds 1, 5, 3, 1
  02eb280  fmadds 1, 2, 6, 1
  02eb284  fmadds 1, 1, 8, 8
  02eb288  bl 0x502758
  02eb28c  nop
  02eb290  addic 3, 3, 10
  02eb294  lis 4, 114
  02eb298  extsw 3, 3
  02eb29c  std 3, 152(1)
  02eb2a0  lfs 1, 24(29)
  02eb2a4  lfs 2, -3056(4)
  02eb2a8  li 4, 128
  02eb2ac  fmuls 1, 2, 1
  02eb2b0  lfd 2, 152(1)
  02eb2b4  addic 3, 1, 144
  02eb2b8  fcfid 2, 2
  02eb2bc  fctiwz 1, 1
  02eb2c0  stfd 1, 152(1)
  02eb2c4  lwz 5, 156(1)
  02eb2c8  divw 4, 4, 5
  02eb2cc  extsw 4, 4
  02eb2d0  frsp 1, 2
  02eb2d4  std 4, 152(1)
  02eb2d8  lfd 2, 152(1)
  02eb2dc  fcfid 2, 2
  02eb2e0  frsp 2, 2
  02eb2e4  bl 0x109af0
  02eb2e8  nop
  02eb2ec  lfs 1, 144(1)
  02eb2f0  bl 0x502758
  02eb2f4  nop
  02eb2f8  lis 4, 151
  02eb2fc  stb 3, 35(31)
  02eb300  addic 4, 4, -25376
  02eb304  ori 3, 31, 0
  02eb308  lwz 4, 8320(4)
  02eb30c  bl 0xf20f0
  02eb310  nop
  02eb314  lfs 2, 0(29)
  02eb318  fcmpu 0, 1, 2
  02eb31c  cror 6, 1, 2
  02eb320  bt 6, 0x2eb360
  02eb324  lwz 5, 8(30)
  02eb328  lis 3, 151
  02eb32c  lis 4, 115
  02eb330  sldi 6, 5, 3
  02eb334  slwi 5, 5, 2
  02eb338  addc 7, 6, 6
  02eb33c  addic 3, 3, -16212
  02eb340  addc 6, 6, 7
  02eb344  extsw 5, 5
  02eb348  addic 4, 4, 32062
  02eb34c  extsw 6, 6
  02eb350  lwzx 3, 3, 5
  02eb354  lhzx 4, 4, 6
  02eb358  cmpw 3, 4
  02eb35c  bf 0, 0x2eb3c8
  02eb360  li 3, 1
  02eb364  stb 3, 32(31)
  02eb368  b 0x2eb3c8
  02eb36c  lis 3, 47
  02eb370  lfs 2, 44(31)
  02eb374  lis 5, 114
  02eb378  addi 4, 3, -22284
  02eb37c  lfs 3, 116(4)
  02eb380  lwz 3, 36(31)
  02eb384  lfs 4, -3064(5)
  02eb388  fmuls 3, 4, 3
  02eb38c  lfs 1, 36(3)
  02eb390  fsubs 5, 1, 2
  02eb394  fmadds 2, 3, 5, 2
  02eb398  fsubs 3, 1, 2
  02eb39c  stfs 2, 44(31)
  02eb3a0  lfs 2, 64(4)
  02eb3a4  fdivs 3, 3, 1
  02eb3a8  fcmpu 0, 3, 2
  02eb3ac  cror 6, 1, 2
  02eb3b0  bt 6, 0x2eb3c8
  02eb3b4  li 4, 1
  02eb3b8  stfs 1, 44(31)
  02eb3bc  stb 4, 32(31)
  02eb3c0  lwz 3, 16(3)
  02eb3c4  stw 3, 148(31)
  02eb3c8  ld 0, 240(1)
  02eb3cc  mtlr 0
  02eb3d0  lfd 30, 208(1)
  02eb3d4  lfd 31, 216(1)
  02eb3d8  ld 28, 176(1)
  02eb3dc  ld 29, 184(1)
  02eb3e0  ld 30, 192(1)
  02eb3e4  ld 31, 200(1)
  02eb3e8  addi 1, 1, 224
  02eb3ec  blr

M1449_002eb3f0:   # 0x2eb3f0, 0x50 bytes
  02eb3f0  lwz 3, 120(3)
  02eb3f4  lis 4, 151
  02eb3f8  lis 5, 115
  02eb3fc  addic 4, 4, -16212
  02eb400  addic 5, 5, 32062
  02eb404  lwz 3, 8(3)
  02eb408  sldi 6, 3, 3
  02eb40c  slwi 3, 3, 2
  02eb410  addc 7, 6, 6
  02eb414  extsw 3, 3
  02eb418  addc 6, 6, 7
  02eb41c  extsw 6, 6
  02eb420  lwzx 3, 4, 3
  02eb424  lhzx 4, 5, 6
  02eb428  cmpw 3, 4
  02eb42c  bf 0, 0x2eb438
  02eb430  li 3, 1
  02eb434  b 0x2eb43c
  02eb438  li 3, 0
  02eb43c  blr

M1449_CollectAmmo:   # 0x2eb450, 0x238 bytes
  02eb450  stdu 1, -176(1)
  02eb454  mflr 0
  02eb458  std 0, 192(1)
  02eb45c  stfd 31, 168(1)
  02eb460  std 31, 160(1)
  02eb464  lbz 4, 32(3)
  02eb468  std 28, 136(1)
  02eb46c  ori 31, 3, 0
  02eb470  lwz 28, 120(3)
  02eb474  std 30, 152(1)
  02eb478  std 29, 144(1)
  02eb47c  cmpwi 4, 2
  02eb480  bf 2, 0x2eb48c
  02eb484  li 3, 0
  02eb488  b 0x2eb664
  02eb48c  lwz 3, 8(28)
  02eb490  lis 29, 151
  02eb494  lwz 4, 0(28)
  02eb498  slwi 5, 3, 2
  02eb49c  addic 29, 29, -16212
  02eb4a0  extsw 30, 5
  02eb4a4  extsw 3, 3
  02eb4a8  extsw 4, 4
  02eb4ac  lwzx 30, 29, 30
  02eb4b0  bl 0xaa2e8
  02eb4b4  nop
  02eb4b8  extsw 4, 3
  02eb4bc  lwz 3, 8(28)
  02eb4c0  std 4, 112(1)
  02eb4c4  slwi 4, 3, 2
  02eb4c8  extsw 4, 4
  02eb4cc  lwzx 4, 29, 4
  02eb4d0  lfd 1, 112(1)
  02eb4d4  cmpw 30, 4
  02eb4d8  fcfid 31, 1
  02eb4dc  frsp 31, 31
  02eb4e0  bf 0, 0x2eb558
  02eb4e4  sldi 5, 3, 4
  02eb4e8  subc 4, 4, 30
  02eb4ec  subc 3, 3, 5
  02eb4f0  extsw 4, 4
  02eb4f4  sldi 3, 3, 2
  02eb4f8  cmpwi 4, 1
  02eb4fc  subc 3, 5, 3
  02eb500  extsw 3, 3
  02eb504  bf 2, 0x2eb518
  02eb508  lis 5, 114
  02eb50c  addic 5, 5, 4150
  02eb510  lhzx 3, 5, 3
  02eb514  b 0x2eb524
  02eb518  lis 5, 114
  02eb51c  addic 5, 5, 4148
  02eb520  lhzx 3, 5, 3
  02eb524  extsh 3, 3
  02eb528  li 5, -1
  02eb52c  bl 0x11a458
  02eb530  nop
  02eb534  lwz 3, 0(28)
  02eb538  extsw 3, 3
  02eb53c  std 3, 112(1)
  02eb540  lfd 1, 112(1)
  02eb544  fcfid 1, 1
  02eb548  frsp 1, 1
  02eb54c  fcmpu 0, 31, 1
  02eb550  bt 0, 0x2eb560
  02eb554  b 0x2eb660
  02eb558  li 3, 0
  02eb55c  b 0x2eb664
  02eb560  lwz 5, 8(28)
  02eb564  lis 3, 161
  02eb568  slwi 5, 5, 2
  02eb56c  addic 3, 3, -2640
  02eb570  extsw 5, 5
  02eb574  lis 4, 47
  02eb578  li 6, 2
  02eb57c  addi 4, 4, -19392
  02eb580  lwzx 7, 29, 5
  02eb584  lwzx 8, 3, 5
  02eb588  subc 7, 7, 30
  02eb58c  addc 7, 8, 7
  02eb590  lis 8, 114
  02eb594  stwx 7, 3, 5
  02eb598  stb 6, 32(31)
  02eb59c  lfs 1, 0(4)
  02eb5a0  li 3, 0
  02eb5a4  lfs 2, 4(4)
  02eb5a8  lis 5, 114
  02eb5ac  lfs 3, -3064(8)
  02eb5b0  lfs 4, 44(31)
  02eb5b4  fmadds 1, 3, 1, 2
  02eb5b8  lis 8, 268
  02eb5bc  lis 6, 114
  02eb5c0  lis 7, 161
  02eb5c4  li 9, 0
  02eb5c8  fmuls 1, 4, 1
  02eb5cc  stfs 1, 44(31)
  02eb5d0  stw 3, 28(28)
  02eb5d4  stw 3, 24(28)
  02eb5d8  stw 3, 20(28)
  02eb5dc  stw 3, 16(28)
  02eb5e0  lfs 1, 8(4)
  02eb5e4  lfs 2, -3052(5)
  02eb5e8  lwz 3, -19440(8)
  02eb5ec  fmuls 1, 2, 1
  02eb5f0  stfs 1, 36(28)
  02eb5f4  lfs 1, 12(4)
  02eb5f8  lfs 2, -3056(6)
  02eb5fc  lwz 4, 1808(7)
  02eb600  fmuls 1, 2, 1
  02eb604  subc 3, 4, 3
  02eb608  extsw 3, 3
  02eb60c  neg 4, 3
  02eb610  subc 5, 3, 9
  02eb614  subc 4, 4, 3
  02eb618  sradi 5, 5, 63
  02eb61c  fctiwz 1, 1
  02eb620  and 4, 5, 4
  02eb624  addc 3, 3, 4
  02eb628  stfd 1, 112(1)
  02eb62c  lwz 4, 116(1)
  02eb630  cmpw 3, 4
  02eb634  bf 1, 0x2eb660
  02eb638  li 3, 0
  02eb63c  li 4, 0
  02eb640  ori 5, 31, 0
  02eb644  li 6, 213
  02eb648  bl 0x15d204
  02eb64c  nop
  02eb650  lis 3, 161
  02eb654  lis 4, 268
  02eb658  lwz 3, 1808(3)
  02eb65c  stw 3, -19440(4)
  02eb660  li 3, 1
  02eb664  ld 0, 192(1)
  02eb668  mtlr 0
  02eb66c  lfd 31, 168(1)
  02eb670  ld 28, 136(1)
  02eb674  ld 29, 144(1)
  02eb678  ld 30, 152(1)
  02eb67c  ld 31, 160(1)
  02eb680  addi 1, 1, 176
  02eb684  blr

M1449_002eb688:   # 0x2eb688, 0x14 bytes
  02eb688  lis 3, 128
  02eb68c  lis 4, 1
  02eb690  addic 3, 3, -5452
  02eb694  stw 4, 72(3)
  02eb698  blr

M1449_002eb6d8:   # 0x2eb6d8, 0x678 bytes
  02eb6d8  stdu 1, -560(1)
  02eb6dc  mflr 0
  02eb6e0  std 0, 576(1)
  02eb6e4  stfd 14, 416(1)
  02eb6e8  stfd 15, 424(1)
  02eb6ec  stfd 16, 432(1)
  02eb6f0  stfd 17, 440(1)
  02eb6f4  stfd 18, 448(1)
  02eb6f8  stfd 19, 456(1)
  02eb6fc  stfd 20, 464(1)
  02eb700  stfd 21, 472(1)
  02eb704  stfd 22, 480(1)
  02eb708  stfd 23, 488(1)
  02eb70c  stfd 24, 496(1)
  02eb710  stfd 25, 504(1)
  02eb714  stfd 26, 512(1)
  02eb718  stfd 27, 520(1)
  02eb71c  stfd 28, 528(1)
  02eb720  stfd 29, 536(1)
  02eb724  stfd 30, 544(1)
  02eb728  stfd 31, 552(1)
  02eb72c  std 30, 400(1)
  02eb730  cmpwi 3, 0
  02eb734  std 31, 408(1)
  02eb738  std 29, 392(1)
  02eb73c  std 28, 384(1)
  02eb740  std 27, 376(1)
  02eb744  ori 30, 3, 0
  02eb748  bt 2, 0x2ebce4
  02eb74c  lwz 31, 120(30)
  02eb750  cmpwi 31, 0
  02eb754  bt 2, 0x2ebce4
  02eb758  li 3, 15
  02eb75c  bl 0x685c4
  02eb760  nop
  02eb764  ori 29, 3, 0
  02eb768  lis 9, 0
  02eb76c  li 3, 0
  02eb770  ori 9, 9, 65424
  02eb774  li 4, 0
  02eb778  li 5, 1
  02eb77c  li 6, 1
  02eb780  li 7, 1
  02eb784  li 8, 0
  02eb788  bl 0x502fd4
  02eb78c  nop
  02eb790  ori 28, 3, 0
  02eb794  li 3, 1
  02eb798  li 4, 1
  02eb79c  li 5, 0
  02eb7a0  li 6, 0
  02eb7a4  li 7, 0
  02eb7a8  li 8, 0
  02eb7ac  bl 0x502f08
  02eb7b0  nop
  02eb7b4  ori 27, 3, 0
  02eb7b8  li 4, 1
  02eb7bc  li 3, 0
  02eb7c0  li 5, 0
  02eb7c4  li 6, 1
  02eb7c8  li 7, 255
  02eb7cc  bl 0x502ea8
  02eb7d0  nop
  02eb7d4  lis 4, -32640
  02eb7d8  std 29, 248(1)
  02eb7dc  lis 5, 47
  02eb7e0  std 28, 256(1)
  02eb7e4  ori 4, 4, 32896
  02eb7e8  std 27, 240(1)
  02eb7ec  addi 29, 5, -18784
  02eb7f0  std 3, 264(1)
  02eb7f4  li 6, 0
  02eb7f8  lis 7, 16256
  02eb7fc  stw 4, 204(1)
  02eb800  ori 3, 30, 0
  02eb804  stw 4, 200(1)
  02eb808  addic 5, 1, 112
  02eb80c  stw 4, 196(1)
  02eb810  stw 4, 192(1)
  02eb814  lfs 29, 0(29)
  02eb818  li 4, 0
  02eb81c  stw 6, 208(1)
  02eb820  stw 6, 212(1)
  02eb824  lfs 31, 4(29)
  02eb828  stw 7, 216(1)
  02eb82c  stw 6, 220(1)
  02eb830  stw 6, 224(1)
  02eb834  stw 7, 228(1)
  02eb838  stw 7, 232(1)
  02eb83c  stw 7, 236(1)
  02eb840  bl 0xf1114
  02eb844  nop
  02eb848  lwz 3, 20(31)
  02eb84c  lfs 27, 116(1)
  02eb850  lfs 23, 20(3)
  02eb854  lfs 22, 16(3)
  02eb858  fsubs 27, 27, 23
  02eb85c  lfs 24, 24(3)
  02eb860  lfs 26, 112(1)
  02eb864  lfs 25, 120(1)
  02eb868  fsubs 26, 26, 22
  02eb86c  fsubs 25, 25, 24
  02eb870  lfs 19, 28(3)
  02eb874  fmuls 1, 27, 27
  02eb878  fmuls 4, 27, 26
  02eb87c  fmuls 3, 25, 26
  02eb880  fmadds 28, 26, 26, 1
  02eb884  lfs 1, 8(29)
  02eb888  stfs 22, 128(1)
  02eb88c  fsubs 1, 25, 1
  02eb890  stfs 23, 132(1)
  02eb894  stfs 19, 140(1)
  02eb898  stfs 22, 160(1)
  02eb89c  stfs 23, 164(1)
  02eb8a0  stfs 19, 172(1)
  02eb8a4  fmadds 28, 25, 25, 28
  02eb8a8  lfs 2, 12(29)
  02eb8ac  fadds 5, 24, 2
  02eb8b0  fmuls 30, 27, 1
  02eb8b4  fmsubs 1, 26, 1, 3
  02eb8b8  fmsubs 3, 27, 26, 4
  02eb8bc  fsubs 4, 24, 2
  02eb8c0  stfd 2, 328(1)
  02eb8c4  fsqrts 21, 28
  02eb8c8  stfd 1, 344(1)
  02eb8cc  stfd 3, 352(1)
  02eb8d0  stfs 4, 136(1)
  02eb8d4  stfs 5, 168(1)
  02eb8d8  lfs 1, 24(31)
  02eb8dc  fmsubs 30, 25, 27, 30
  02eb8e0  stfs 21, 280(1)
  02eb8e4  bl 0x502648
  02eb8e8  nop
  02eb8ec  lfs 2, 16(29)
  02eb8f0  lfs 3, 20(29)
  02eb8f4  fadds 1, 1, 2
  02eb8f8  lfs 14, 24(29)
  02eb8fc  lfs 15, 28(29)
  02eb900  lfs 16, 32(29)
  02eb904  lfs 17, 36(29)
  02eb908  lfs 18, 40(29)
  02eb90c  stfd 3, 272(1)
  02eb910  fcmpu 0, 29, 21
  02eb914  fsubs 2, 3, 1
  02eb918  fsubs 4, 14, 1
  02eb91c  cror 6, 1, 2
  02eb920  fsub 5, 1, 2
  02eb924  fsel 1, 5, 2, 1
  02eb928  fsub 2, 4, 1
  02eb92c  fsel 1, 2, 4, 1
  02eb930  fmuls 2, 1, 1
  02eb934  fmuls 3, 2, 1
  02eb938  fmuls 4, 2, 3
  02eb93c  fmadds 1, 3, 15, 1
  02eb940  fmuls 3, 2, 4
  02eb944  fmadds 1, 4, 16, 1
  02eb948  fmuls 2, 2, 3
  02eb94c  fmadds 1, 3, 17, 1
  02eb950  fmadds 1, 2, 18, 1
  02eb954  stfs 1, 336(1)
  02eb958  bt 6, 0x2ebce4
  02eb95c  lfd 2, 344(1)
  02eb960  lis 3, 47
  02eb964  frsqrte 1, 28
  02eb968  fmuls 3, 2, 2
  02eb96c  addi 3, 3, -18784
  02eb970  lfd 4, 352(1)
  02eb974  lfs 5, 44(3)
  02eb978  fmadds 3, 30, 30, 3
  02eb97c  fmuls 6, 28, 1
  02eb980  fmuls 7, 5, 1
  02eb984  lis 30, 149
  02eb988  fmadds 3, 4, 4, 3
  02eb98c  fnmsubs 6, 6, 1, 31
  02eb990  lis 29, 161
  02eb994  addic 30, 30, 5056
  02eb998  addic 29, 29, 24396
  02eb99c  frsqrte 8, 3
  02eb9a0  fsqrts 21, 3
  02eb9a4  fmadds 1, 6, 7, 1
  02eb9a8  fmuls 9, 3, 8
  02eb9ac  fmuls 10, 5, 8
  02eb9b0  lfs 6, 48(3)
  02eb9b4  stfd 6, 288(1)
  02eb9b8  fmuls 7, 28, 1
  02eb9bc  fmuls 11, 5, 1
  02eb9c0  fnmsubs 9, 9, 8, 31
  02eb9c4  lfs 20, 52(3)
  02eb9c8  fnmsubs 7, 7, 1, 31
  02eb9cc  fmadds 1, 7, 11, 1
  02eb9d0  fmadds 7, 9, 10, 8
  02eb9d4  fmuls 8, 28, 1
  02eb9d8  fmuls 9, 3, 7
  02eb9dc  fmuls 10, 5, 7
  02eb9e0  fmuls 11, 5, 1
  02eb9e4  fmr 28, 29
  02eb9e8  fnmsubs 8, 8, 1, 31
  02eb9ec  fnmsubs 9, 9, 7, 31
  02eb9f0  fmadds 1, 8, 11, 1
  02eb9f4  fmadds 7, 9, 10, 7
  02eb9f8  fmuls 1, 6, 1
  02eb9fc  fmuls 3, 3, 7
  02eba00  fmuls 5, 5, 7
  02eba04  fnmsubs 3, 3, 7, 31
  02eba08  stfd 1, 320(1)
  02eba0c  fmadds 1, 3, 5, 7
  02eba10  fmuls 3, 1, 4
  02eba14  fmuls 2, 1, 2
  02eba18  fmuls 1, 1, 30
  02eba1c  stfd 3, 312(1)
  02eba20  stfd 2, 304(1)
  02eba24  stfd 1, 296(1)
  02eba28  lfs 31, 280(1)
  02eba2c  fsubs 1, 31, 28
  02eba30  lfd 2, 320(1)
  02eba34  lfd 30, 272(1)
  02eba38  stfs 20, 360(1)
  02eba3c  fsub 3, 1, 20
  02eba40  fsel 31, 3, 20, 1
  02eba44  fadds 28, 31, 28
  02eba48  fmuls 1, 28, 2
  02eba4c  fsubs 2, 30, 1
  02eba50  fsubs 3, 14, 1
  02eba54  fsub 4, 1, 2
  02eba58  fsel 1, 4, 2, 1
  02eba5c  lfd 2, 288(1)
  02eba60  fmuls 2, 28, 2
  02eba64  fsub 4, 3, 1
  02eba68  fsel 3, 4, 3, 1
  02eba6c  lfs 1, 28(31)
  02eba70  fdivs 1, 2, 1
  02eba74  fmuls 4, 3, 3
  02eba78  fmuls 2, 4, 3
  02eba7c  fmuls 5, 4, 2
  02eba80  fmadds 2, 2, 15, 3
  02eba84  fmuls 3, 4, 5
  02eba88  fmadds 2, 5, 16, 2
  02eba8c  fmuls 4, 4, 3
  02eba90  fmadds 2, 3, 17, 2
  02eba94  fmadds 20, 4, 18, 2
  02eba98  bl 0x502648
  02eba9c  nop
  02ebaa0  fmuls 2, 27, 27
  02ebaa4  fsubs 9, 30, 1
  02ebaa8  lfs 3, 328(30)
  02ebaac  fsubs 10, 14, 1
  02ebab0  lfs 4, 320(30)
  02ebab4  lfs 5, 324(30)
  02ebab8  lfd 6, 328(1)
  02ebabc  fmadds 2, 26, 26, 2
  02ebac0  fsub 11, 1, 9
  02ebac4  lfs 7, 32(31)
  02ebac8  lfs 8, 336(1)
  02ebacc  stfs 14, 364(1)
  02ebad0  fmadds 2, 25, 25, 2
  02ebad4  fsel 1, 11, 9, 1
  02ebad8  fsqrts 2, 2
  02ebadc  addic 3, 1, 128
  02ebae0  li 4, 0
  02ebae4  li 5, 1
  02ebae8  li 7, 9
  02ebaec  fsub 9, 10, 1
  02ebaf0  fsel 1, 9, 10, 1
  02ebaf4  fdivs 12, 31, 2
  02ebaf8  fsub 13, 29, 2
  02ebafc  fsub 31, 29, 2
  02ebb00  fsub 30, 29, 2
  02ebb04  fsub 0, 2, 29
  02ebb08  fsub 14, 2, 29
  02ebb0c  fsub 2, 2, 29
  02ebb10  fmuls 25, 25, 12
  02ebb14  fmuls 27, 27, 12
  02ebb18  fmuls 26, 26, 12
  02ebb1c  fsel 9, 13, 29, 25
  02ebb20  fsel 10, 31, 29, 27
  02ebb24  fsel 11, 30, 29, 26
  02ebb28  fsel 25, 0, 9, 25
  02ebb2c  fsel 27, 14, 10, 27
  02ebb30  fsel 26, 2, 11, 26
  02ebb34  fadds 24, 25, 24
  02ebb38  fadds 23, 27, 23
  02ebb3c  fadds 22, 26, 22
  02ebb40  fsubs 2, 3, 24
  02ebb44  fsubs 3, 5, 23
  02ebb48  fsubs 4, 4, 22
  02ebb4c  stfs 26, 368(1)
  02ebb50  fsub 31, 29, 21
  02ebb54  fmuls 5, 26, 2
  02ebb58  fmuls 9, 25, 3
  02ebb5c  fmuls 10, 27, 4
  02ebb60  lfd 12, 312(1)
  02ebb64  lfd 13, 304(1)
  02ebb68  fsub 30, 29, 21
  02ebb6c  fmsubs 4, 25, 4, 5
  02ebb70  fmsubs 2, 27, 2, 9
  02ebb74  fmsubs 3, 26, 3, 10
  02ebb78  fmuls 9, 1, 1
  02ebb7c  fmuls 5, 4, 4
  02ebb80  lfd 0, 296(1)
  02ebb84  fmuls 10, 9, 1
  02ebb88  fmadds 5, 2, 2, 5
  02ebb8c  fmuls 11, 9, 10
  02ebb90  fmadds 1, 10, 15, 1
  02ebb94  fmadds 5, 3, 3, 5
  02ebb98  fmuls 10, 9, 11
  02ebb9c  fmadds 1, 11, 16, 1
  02ebba0  fsqrts 5, 5
  02ebba4  stfs 19, 188(1)
  02ebba8  stfs 19, 156(1)
  02ebbac  fmuls 9, 9, 10
  02ebbb0  fmadds 1, 10, 17, 1
  02ebbb4  fsub 14, 21, 29
  02ebbb8  fsub 26, 21, 29
  02ebbbc  lwz 6, 28(29)
  02ebbc0  fmadds 1, 9, 18, 1
  02ebbc4  fmuls 1, 20, 1
  02ebbc8  fsub 20, 29, 21
  02ebbcc  fmuls 1, 1, 8
  02ebbd0  fdivs 6, 6, 5
  02ebbd4  fsub 9, 29, 5
  02ebbd8  fmuls 1, 1, 7
  02ebbdc  fsub 10, 29, 5
  02ebbe0  fsub 8, 29, 5
  02ebbe4  fsub 11, 5, 29
  02ebbe8  fsub 7, 5, 29
  02ebbec  fsub 5, 5, 29
  02ebbf0  fmuls 12, 1, 12
  02ebbf4  fmuls 13, 1, 13
  02ebbf8  fmuls 1, 1, 0
  02ebbfc  fsub 0, 21, 29
  02ebc00  fsel 31, 31, 29, 12
  02ebc04  fsel 30, 30, 29, 13
  02ebc08  fsel 20, 20, 29, 1
  02ebc0c  fsel 1, 26, 20, 1
  02ebc10  fmuls 3, 3, 6
  02ebc14  fmuls 4, 4, 6
  02ebc18  fmuls 2, 2, 6
  02ebc1c  fsel 6, 14, 31, 12
  02ebc20  fsel 12, 0, 30, 13
  02ebc24  fsel 9, 9, 29, 3
  02ebc28  fsel 10, 10, 29, 4
  02ebc2c  fsel 8, 8, 29, 2
  02ebc30  fsel 3, 11, 9, 3
  02ebc34  fsel 4, 7, 10, 4
  02ebc38  fsel 2, 5, 8, 2
  02ebc3c  fadds 5, 24, 3
  02ebc40  fadds 7, 23, 4
  02ebc44  fadds 8, 22, 2
  02ebc48  fsubs 2, 22, 2
  02ebc4c  fsubs 4, 23, 4
  02ebc50  fsubs 3, 24, 3
  02ebc54  fadds 5, 5, 6
  02ebc58  fadds 7, 7, 12
  02ebc5c  fadds 8, 8, 1
  02ebc60  fadds 1, 2, 1
  02ebc64  fadds 2, 4, 12
  02ebc68  fadds 3, 3, 6
  02ebc6c  stfs 5, 152(1)
  02ebc70  stfs 7, 148(1)
  02ebc74  stfs 8, 144(1)
  02ebc78  stfs 1, 176(1)
  02ebc7c  stfs 2, 180(1)
  02ebc80  stfs 3, 184(1)
  02ebc84  bl 0x72280
  02ebc88  nop
  02ebc8c  lfs 1, 280(1)
  02ebc90  fcmpu 0, 28, 1
  02ebc94  lfs 1, 144(1)
  02ebc98  lfs 2, 148(1)
  02ebc9c  stfs 1, 128(1)
  02ebca0  lfs 1, 152(1)
  02ebca4  stfs 2, 132(1)
  02ebca8  lfs 2, 156(1)
  02ebcac  stfs 1, 136(1)
  02ebcb0  lfs 1, 176(1)
  02ebcb4  stfs 2, 140(1)
  02ebcb8  lfs 2, 180(1)
  02ebcbc  stfs 1, 160(1)
  02ebcc0  lfs 1, 184(1)
  02ebcc4  stfs 2, 164(1)
  02ebcc8  lfs 2, 188(1)
  02ebccc  stfs 1, 168(1)
  02ebcd0  stfs 2, 172(1)
  02ebcd4  lfs 20, 360(1)
  02ebcd8  lfs 14, 364(1)
  02ebcdc  lfs 26, 368(1)
  02ebce0  bt 0, 0x2eba28
  02ebce4  ld 0, 576(1)
  02ebce8  mtlr 0
  02ebcec  lfd 14, 416(1)
  02ebcf0  lfd 15, 424(1)
  02ebcf4  lfd 16, 432(1)
  02ebcf8  lfd 17, 440(1)
  02ebcfc  lfd 18, 448(1)
  02ebd00  lfd 19, 456(1)
  02ebd04  lfd 20, 464(1)
  02ebd08  lfd 21, 472(1)
  02ebd0c  lfd 22, 480(1)
  02ebd10  lfd 23, 488(1)
  02ebd14  lfd 24, 496(1)
  02ebd18  lfd 25, 504(1)
  02ebd1c  lfd 26, 512(1)
  02ebd20  lfd 27, 520(1)
  02ebd24  lfd 28, 528(1)
  02ebd28  lfd 29, 536(1)
  02ebd2c  lfd 30, 544(1)
  02ebd30  lfd 31, 552(1)
  02ebd34  ld 27, 376(1)
  02ebd38  ld 28, 384(1)
  02ebd3c  ld 29, 392(1)
  02ebd40  ld 30, 400(1)
  02ebd44  ld 31, 408(1)
  02ebd48  addi 1, 1, 560
  02ebd4c  blr
