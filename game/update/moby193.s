# game/update/moby193.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_193:   # 0x2dc568, 0x2208 bytes
  02dc568  stdu 1, -464(1)
  02dc56c  mflr 0
  02dc570  std 0, 480(1)
  02dc574  stfd 25, 408(1)
  02dc578  stfd 26, 416(1)
  02dc57c  stfd 27, 424(1)
  02dc580  stfd 28, 432(1)
  02dc584  stfd 29, 440(1)
  02dc588  stfd 30, 448(1)
  02dc58c  stfd 31, 456(1)
  02dc590  std 29, 384(1)
  02dc594  lbz 4, 32(3)
  02dc598  std 30, 392(1)
  02dc59c  li 29, 2
  02dc5a0  lwz 30, 120(3)
  02dc5a4  cmpwi 1, 4, 7
  02dc5a8  cmpwi 4, 99
  02dc5ac  std 31, 400(1)
  02dc5b0  std 27, 368(1)
  02dc5b4  cror 2, 2, 6
  02dc5b8  ori 31, 3, 0
  02dc5bc  std 28, 376(1)
  02dc5c0  ori 27, 29, 0
  02dc5c4  bt 2, 0x2dcaf4
  02dc5c8  lis 3, 46
  02dc5cc  li 6, 0
  02dc5d0  addi 28, 3, -15140
  02dc5d4  ori 3, 31, 0
  02dc5d8  lis 4, 51
  02dc5dc  li 5, 0
  02dc5e0  lfs 31, 0(28)
  02dc5e4  stw 6, 340(1)
  02dc5e8  bl 0x10675c
  02dc5ec  nop
  02dc5f0  ori 29, 3, 0
  02dc5f4  ori 3, 31, 0
  02dc5f8  ori 4, 29, 0
  02dc5fc  addic 5, 30, 32
  02dc600  li 6, 0
  02dc604  addic 7, 1, 336
  02dc608  li 9, 0
  02dc60c  addic 8, 1, 340
  02dc610  li 10, 4
  02dc614  bl 0x106840
  02dc618  nop
  02dc61c  addic 3, 30, 38
  02dc620  bl 0x4fffb4
  02dc624  nop
  02dc628  lis 4, 114
  02dc62c  lfs 1, 4(28)
  02dc630  lhz 3, 38(30)
  02dc634  lfs 2, -3056(4)
  02dc638  extsh 4, 3
  02dc63c  fmuls 1, 2, 1
  02dc640  fctiwz 1, 1
  02dc644  stfd 1, 344(1)
  02dc648  lwz 5, 348(1)
  02dc64c  cmpw 4, 5
  02dc650  bf 0, 0x2dc90c
  02dc654  cmpwi 29, 0
  02dc658  bt 2, 0x2dc90c
  02dc65c  lwz 4, 32(29)
  02dc660  lhz 4, 166(4)
  02dc664  cmpwi 4, 176
  02dc668  cmpwi 1, 4, 177
  02dc66c  bt 2, 0x2dc674
  02dc670  bf 6, 0x2dc690
  02dc674  lis 4, 46
  02dc678  cmpwi 3, 0
  02dc67c  addi 4, 4, -15140
  02dc680  lfs 1, 8(4)
  02dc684  bt 2, 0x2dc68c
  02dc688  fmr 1, 31
  02dc68c  stfs 1, 44(29)
  02dc690  lbz 3, 33(31)
  02dc694  cmpwi 3, 255
  02dc698  bt 2, 0x2dc6a8
  02dc69c  li 4, 1
  02dc6a0  bl 0x104298
  02dc6a4  nop
  02dc6a8  lwz 3, 44(29)
  02dc6ac  lfs 1, 44(29)
  02dc6b0  cmpwi 3, 0
  02dc6b4  bt 2, 0x2dc90c
  02dc6b8  lfs 2, 32(30)
  02dc6bc  lis 3, 15363
  02dc6c0  lis 5, 14851
  02dc6c4  fsubs 2, 2, 1
  02dc6c8  ori 3, 3, 4719
  02dc6cc  ori 5, 5, 4719
  02dc6d0  lis 4, 127
  02dc6d4  lis 6, 114
  02dc6d8  stw 3, 304(30)
  02dc6dc  li 7, 9
  02dc6e0  stw 5, 308(30)
  02dc6e4  lis 3, 127
  02dc6e8  li 5, 0
  02dc6ec  fcmpu 0, 2, 31
  02dc6f0  stfs 2, 32(30)
  02dc6f4  lfs 1, 16036(4)
  02dc6f8  lfs 3, -3052(6)
  02dc6fc  stw 7, 324(30)
  02dc700  fmuls 1, 1, 3
  02dc704  stfs 1, 312(30)
  02dc708  lfs 2, 16032(3)
  02dc70c  stb 5, 349(30)
  02dc710  fmuls 2, 2, 3
  02dc714  stfs 2, 316(30)
  02dc718  bt 1, 0x2dc838
  02dc71c  li 3, 0
  02dc720  lis 4, 46
  02dc724  lhz 5, 52(31)
  02dc728  lis 6, 114
  02dc72c  addi 4, 4, -15140
  02dc730  rlwimi 5, 3, 0, 19, 19
  02dc734  sth 5, 52(31)
  02dc738  lfs 1, 12(4)
  02dc73c  lfs 2, -3052(6)
  02dc740  fmuls 1, 2, 1
  02dc744  stfs 1, 312(30)
  02dc748  lfs 3, 16(4)
  02dc74c  fmuls 2, 2, 3
  02dc750  stfs 2, 316(30)
  02dc754  lhz 3, 42(29)
  02dc758  cmpwi 3, 180
  02dc75c  bf 2, 0x2dc77c
  02dc760  lis 3, 46
  02dc764  addi 3, 3, -15140
  02dc768  lfs 3, 20(3)
  02dc76c  fmuls 1, 1, 3
  02dc770  fmuls 2, 2, 3
  02dc774  stfs 1, 312(30)
  02dc778  stfs 2, 316(30)
  02dc77c  lfs 1, 16(31)
  02dc780  lfs 2, 256(1)
  02dc784  addic 29, 30, 288
  02dc788  lfs 3, 20(31)
  02dc78c  lfs 4, 260(1)
  02dc790  fsubs 1, 1, 2
  02dc794  fsubs 2, 3, 4
  02dc798  bl 0x5e8338
  02dc79c  nop
  02dc7a0  ori 4, 29, 0
  02dc7a4  ori 3, 31, 0
  02dc7a8  li 6, 5
  02dc7ac  li 7, 1
  02dc7b0  li 8, 0
  02dc7b4  bl 0x10ad80
  02dc7b8  nop
  02dc7bc  lis 4, 151
  02dc7c0  lis 3, 16688
  02dc7c4  lis 5, 16784
  02dc7c8  addic 4, 4, -25376
  02dc7cc  stw 3, 368(30)
  02dc7d0  stw 5, 372(30)
  02dc7d4  lbz 3, 8356(4)
  02dc7d8  cmpwi 3, 2
  02dc7dc  bf 2, 0x2dc7f8
  02dc7e0  ori 3, 31, 0
  02dc7e4  li 4, 512
  02dc7e8  li 5, -1
  02dc7ec  bl 0xfd8d0
  02dc7f0  nop
  02dc7f4  b 0x2dc80c
  02dc7f8  ori 3, 31, 0
  02dc7fc  li 4, 0
  02dc800  li 5, -1
  02dc804  bl 0xfd8d0
  02dc808  nop
  02dc80c  li 5, 0
  02dc810  li 6, 99
  02dc814  li 7, 120
  02dc818  addic 4, 30, 272
  02dc81c  stw 5, 148(31)
  02dc820  stb 6, 32(31)
  02dc824  ori 3, 31, 0
  02dc828  stb 7, 279(30)
  02dc82c  bl 0x10c808
  02dc830  nop
  02dc834  b 0x2dc90c
  02dc838  lhz 3, 42(29)
  02dc83c  cmpwi 3, 180
  02dc840  bf 2, 0x2dc860
  02dc844  lis 3, 46
  02dc848  addi 3, 3, -15140
  02dc84c  lfs 3, 20(3)
  02dc850  fmuls 1, 1, 3
  02dc854  fmuls 2, 2, 3
  02dc858  stfs 1, 312(30)
  02dc85c  stfs 2, 316(30)
  02dc860  lfs 1, 16(31)
  02dc864  addic 29, 30, 288
  02dc868  lfs 2, 256(1)
  02dc86c  lfs 3, 20(31)
  02dc870  lfs 4, 260(1)
  02dc874  fsubs 1, 1, 2
  02dc878  fsubs 2, 3, 4
  02dc87c  bl 0x5e8338
  02dc880  nop
  02dc884  ori 3, 31, 0
  02dc888  ori 4, 29, 0
  02dc88c  li 6, 6
  02dc890  li 7, 1
  02dc894  li 8, 0
  02dc898  bl 0x10ad80
  02dc89c  nop
  02dc8a0  lis 3, 16544
  02dc8a4  vspltisw 2, -1
  02dc8a8  lis 4, 16672
  02dc8ac  li 6, 6
  02dc8b0  lis 7, 46
  02dc8b4  stw 3, 368(30)
  02dc8b8  li 3, 250
  02dc8bc  stw 4, 372(30)
  02dc8c0  li 5, 24
  02dc8c4  stb 6, 32(31)
  02dc8c8  addi 4, 7, -15140
  02dc8cc  vslw 2, 2, 2
  02dc8d0  li 6, -3056
  02dc8d4  stb 3, 279(30)
  02dc8d8  lis 3, 114
  02dc8dc  <unknown>
  02dc8e0  li 5, 38
  02dc8e4  vspltw 3, 3, 0
  02dc8e8  <unknown>
  02dc8ec  addic 4, 30, 272
  02dc8f0  ori 3, 31, 0
  02dc8f4  vmaddfp 2, 4, 3, 2
  02dc8f8  vctsxs 2, 2, 0
  02dc8fc  vsplth 2, 2, 1
  02dc900  stvehx 2, 5, 30
  02dc904  bl 0x10c808
  02dc908  nop
  02dc90c  lis 4, 46
  02dc910  li 5, 255
  02dc914  addi 6, 4, -15140
  02dc918  ori 3, 31, 0
  02dc91c  li 4, 0
  02dc920  stb 5, 164(31)
  02dc924  addic 5, 30, 560
  02dc928  lfs 1, 28(6)
  02dc92c  bl 0x119a18
  02dc930  nop
  02dc934  lbz 3, 49(31)
  02dc938  cmpwi 3, 0
  02dc93c  bt 2, 0x2dc9a8
  02dc940  lis 3, 149
  02dc944  lfs 1, 20(31)
  02dc948  lfs 2, 16(31)
  02dc94c  addic 3, 3, 5056
  02dc950  lfs 3, 324(3)
  02dc954  lfs 4, 320(3)
  02dc958  fsubs 1, 1, 3
  02dc95c  fsubs 2, 2, 4
  02dc960  lfs 3, 24(31)
  02dc964  lfs 4, 328(3)
  02dc968  fsubs 3, 3, 4
  02dc96c  lis 3, 46
  02dc970  fmuls 1, 1, 1
  02dc974  addi 3, 3, -15140
  02dc978  fmadds 1, 2, 2, 1
  02dc97c  lfs 2, 32(3)
  02dc980  fmadds 1, 3, 3, 1
  02dc984  fsqrts 1, 1
  02dc988  fcmpu 0, 1, 2
  02dc98c  cror 6, 1, 2
  02dc990  bt 6, 0x2dc9a8
  02dc994  ori 3, 31, 0
  02dc998  bl 0x106360
  02dc99c  nop
  02dc9a0  li 3, 30
  02dc9a4  stb 3, 127(31)
  02dc9a8  lis 3, 151
  02dc9ac  lfs 1, 20(31)
  02dc9b0  lfs 2, 16(31)
  02dc9b4  addic 3, 3, -25376
  02dc9b8  lis 4, 46
  02dc9bc  lfs 3, 132(3)
  02dc9c0  lfs 4, 128(3)
  02dc9c4  fsubs 1, 1, 3
  02dc9c8  fsubs 2, 2, 4
  02dc9cc  addi 4, 4, -15140
  02dc9d0  fmuls 1, 1, 1
  02dc9d4  fmadds 1, 2, 2, 1
  02dc9d8  lfs 2, 36(4)
  02dc9dc  fsqrts 1, 1
  02dc9e0  fcmpu 0, 1, 2
  02dc9e4  bt 1, 0x2de730
  02dc9e8  lwz 4, 552(30)
  02dc9ec  cmpwi 4, 0
  02dc9f0  bt 2, 0x2dca50
  02dc9f4  lbz 3, 8356(3)
  02dc9f8  cmpwi 1, 3, 2
  02dc9fc  bt 6, 0x2dca24
  02dca00  lhz 5, 52(31)
  02dca04  li 3, 0
  02dca08  li 4, 255
  02dca0c  ori 5, 5, 65
  02dca10  rlwimi 5, 3, 0, 19, 19
  02dca14  stw 3, 148(31)
  02dca18  stb 4, 48(31)
  02dca1c  sth 5, 52(31)
  02dca20  b 0x2de730
  02dca24  bf 6, 0x2dca50
  02dca28  lhz 5, 52(31)
  02dca2c  li 3, -66
  02dca30  lwz 6, 36(31)
  02dca34  li 4, 64
  02dca38  and 3, 5, 3
  02dca3c  ori 3, 3, 4096
  02dca40  lwz 5, 16(6)
  02dca44  stb 4, 48(31)
  02dca48  stw 5, 148(31)
  02dca4c  sth 3, 52(31)
  02dca50  lwz 3, 56(30)
  02dca54  cmpwi 3, 0
  02dca58  bt 2, 0x2dca98
  02dca5c  lis 3, 46
  02dca60  vspltisw 2, -1
  02dca64  li 5, 40
  02dca68  addi 3, 3, -15140
  02dca6c  li 4, -3056
  02dca70  lis 6, 114
  02dca74  vslw 2, 2, 2
  02dca78  <unknown>
  02dca7c  li 3, 532
  02dca80  vspltw 3, 3, 0
  02dca84  <unknown>
  02dca88  vmaddfp 2, 4, 3, 2
  02dca8c  vctsxs 2, 2, 0
  02dca90  vsplth 2, 2, 1
  02dca94  stvehx 2, 3, 30
  02dca98  li 4, 0
  02dca9c  addic 3, 30, 520
  02dcaa0  stw 4, 56(30)
  02dcaa4  bl 0x4fff60
  02dcaa8  nop
  02dcaac  addic 3, 30, 532
  02dcab0  bl 0x4fffb4
  02dcab4  nop
  02dcab8  lis 4, 46
  02dcabc  cmpwi 3, 0
  02dcac0  addi 4, 4, -15140
  02dcac4  lfs 1, 44(4)
  02dcac8  bt 2, 0x2dcad8
  02dcacc  lis 3, 46
  02dcad0  addi 3, 3, -15140
  02dcad4  lfs 1, 48(3)
  02dcad8  fmr 2, 1
  02dcadc  ori 3, 31, 0
  02dcae0  addic 5, 1, 256
  02dcae4  stfs 2, 508(30)
  02dcae8  bl 0x1118d8
  02dcaec  nop
  02dcaf0  ori 29, 3, 0
  02dcaf4  lfs 29, 16(31)
  02dcaf8  addic 3, 30, 548
  02dcafc  lfs 28, 20(31)
  02dcb00  bl 0x4fff60
  02dcb04  nop
  02dcb08  lis 4, 46
  02dcb0c  lfs 3, 16(31)
  02dcb10  ori 28, 3, 0
  02dcb14  addi 4, 4, -15140
  02dcb18  lfs 1, 256(1)
  02dcb1c  lbz 3, 32(31)
  02dcb20  cmpwi 3, 6
  02dcb24  lfs 30, 52(4)
  02dcb28  lfs 4, 20(31)
  02dcb2c  lfs 2, 260(1)
  02dcb30  fmr 31, 30
  02dcb34  bt 1, 0x2dcb78
  02dcb38  cmpwi 3, 6
  02dcb3c  bt 2, 0x2ddc7c
  02dcb40  cmpwi 3, 5
  02dcb44  bt 2, 0x2dd8b4
  02dcb48  cmpwi 3, 4
  02dcb4c  bt 2, 0x2dd610
  02dcb50  cmpwi 3, 3
  02dcb54  bt 2, 0x2dd258
  02dcb58  cmpwi 3, 2
  02dcb5c  bt 2, 0x2dcf0c
  02dcb60  cmpwi 3, 1
  02dcb64  cmpwi 1, 29, 2
  02dcb68  bt 2, 0x2dcd0c
  02dcb6c  cmpwi 3, 0
  02dcb70  bt 2, 0x2dcbc0
  02dcb74  b 0x2de680
  02dcb78  cmpwi 3, 11
  02dcb7c  bt 1, 0x2dcba0
  02dcb80  cmpwi 3, 8
  02dcb84  bt 1, 0x2dcb94
  02dcb88  cmpwi 3, 7
  02dcb8c  bf 1, 0x2ddd30
  02dcb90  b 0x2dcf0c
  02dcb94  cmpwi 3, 9
  02dcb98  bf 1, 0x2ddd80
  02dcb9c  b 0x2dcf0c
  02dcba0  cmpwi 3, 13
  02dcba4  bt 1, 0x2dcbb4
  02dcba8  cmpwi 3, 12
  02dcbac  bf 1, 0x2dde8c
  02dcbb0  b 0x2de2f4
  02dcbb4  cmpwi 3, 99
  02dcbb8  bt 2, 0x2dde20
  02dcbbc  b 0x2de680
  02dcbc0  stfs 3, 464(30)
  02dcbc4  lfs 1, 20(31)
  02dcbc8  li 4, 1
  02dcbcc  lis 5, 16256
  02dcbd0  stfs 1, 468(30)
  02dcbd4  lfs 1, 24(31)
  02dcbd8  li 6, 0
  02dcbdc  li 7, 8
  02dcbe0  stfs 1, 472(30)
  02dcbe4  lfs 1, 28(31)
  02dcbe8  addic 3, 30, 384
  02dcbec  stfs 1, 476(30)
  02dcbf0  stb 4, 32(31)
  02dcbf4  stw 5, 32(30)
  02dcbf8  sth 4, 36(30)
  02dcbfc  stb 6, 41(30)
  02dcc00  stb 27, 90(30)
  02dcc04  stb 7, 88(30)
  02dcc08  sth 6, 532(30)
  02dcc0c  stw 6, 520(30)
  02dcc10  bl 0x100f8c
  02dcc14  nop
  02dcc18  lis 3, 16384
  02dcc1c  lis 4, 114
  02dcc20  lfs 1, 516(30)
  02dcc24  stw 3, 396(30)
  02dcc28  stw 3, 392(30)
  02dcc2c  lfs 2, -3052(4)
  02dcc30  li 3, 909
  02dcc34  fmuls 1, 1, 2
  02dcc38  stw 3, 384(30)
  02dcc3c  stfs 1, 420(30)
  02dcc40  bl 0x5c8318
  02dcc44  nop
  02dcc48  clrlwi 3, 3, 31
  02dcc4c  cmpwi 3, 0
  02dcc50  bt 2, 0x2dcc68
  02dcc54  lis 3, 0
  02dcc58  lhz 4, 52(31)
  02dcc5c  ori 3, 3, 32768
  02dcc60  or 3, 4, 3
  02dcc64  sth 3, 52(31)
  02dcc68  lis 3, 127
  02dcc6c  addic 3, 3, 16048
  02dcc70  stw 3, 208(30)
  02dcc74  lbz 3, 83(31)
  02dcc78  cmpwi 3, 2
  02dcc7c  bt 2, 0x2dcce4
  02dcc80  li 3, 10
  02dcc84  li 4, 13
  02dcc88  bl 0xfe484
  02dcc8c  nop
  02dcc90  extsw 3, 3
  02dcc94  lis 4, 114
  02dcc98  std 3, 344(1)
  02dcc9c  lis 3, 46
  02dcca0  addi 3, 3, -15140
  02dcca4  li 5, 0
  02dcca8  lfs 1, 56(3)
  02dccac  lfs 2, -3056(4)
  02dccb0  lfd 3, 344(1)
  02dccb4  fcfid 3, 3
  02dccb8  ori 3, 31, 0
  02dccbc  li 4, 2
  02dccc0  frsp 3, 3
  02dccc4  fadds 1, 3, 1
  02dccc8  fmuls 1, 2, 1
  02dcccc  fctiwz 1, 1
  02dccd0  stfd 1, 344(1)
  02dccd4  lwz 6, 348(1)
  02dccd8  extsw 6, 6
  02dccdc  bl 0xfddc0
  02dcce0  nop
  02dcce4  lis 3, 46
  02dcce8  li 4, 0
  02dccec  addi 5, 3, -15140
  02dccf0  addic 3, 31, 16
  02dccf4  lfs 1, 56(5)
  02dccf8  bl 0xffb70
  02dccfc  nop
  02dcd00  fmr 30, 1
  02dcd04  stfs 30, 24(31)
  02dcd08  b 0x2de680
  02dcd0c  fsubs 1, 1, 3
  02dcd10  fsubs 2, 2, 4
  02dcd14  lfs 3, 264(1)
  02dcd18  lfs 4, 24(31)
  02dcd1c  fsubs 5, 3, 4
  02dcd20  bt 4, 0x2dcd54
  02dcd24  fmuls 2, 2, 2
  02dcd28  lis 3, 46
  02dcd2c  addi 3, 3, -15140
  02dcd30  fmadds 1, 1, 1, 2
  02dcd34  lfs 2, 60(3)
  02dcd38  fmadds 1, 5, 5, 1
  02dcd3c  lfs 5, 508(30)
  02dcd40  fadds 2, 5, 2
  02dcd44  fsqrts 1, 1
  02dcd48  fcmpu 0, 1, 2
  02dcd4c  cror 6, 1, 2
  02dcd50  bt 6, 0x2dce00
  02dcd54  fsubs 1, 4, 3
  02dcd58  lis 3, 46
  02dcd5c  addi 3, 3, -15140
  02dcd60  lfs 2, 12(3)
  02dcd64  fabs 1, 1
  02dcd68  fcmpu 0, 1, 2
  02dcd6c  cror 6, 1, 2
  02dcd70  bt 6, 0x2dce00
  02dcd74  li 3, 19
  02dcd78  bl 0xfc620
  02dcd7c  nop
  02dcd80  cmpwi 3, 0
  02dcd84  bf 2, 0x2dce00
  02dcd88  lbz 3, 83(31)
  02dcd8c  stb 27, 32(31)
  02dcd90  cmpwi 3, 4
  02dcd94  bt 2, 0x2de680
  02dcd98  li 3, 10
  02dcd9c  li 4, 13
  02dcda0  bl 0xfe484
  02dcda4  nop
  02dcda8  extsw 3, 3
  02dcdac  lis 4, 114
  02dcdb0  std 3, 344(1)
  02dcdb4  lis 3, 46
  02dcdb8  addi 3, 3, -15140
  02dcdbc  li 5, 0
  02dcdc0  lfs 1, 56(3)
  02dcdc4  lfs 2, -3056(4)
  02dcdc8  lfd 3, 344(1)
  02dcdcc  fcfid 3, 3
  02dcdd0  ori 3, 31, 0
  02dcdd4  li 4, 4
  02dcdd8  frsp 3, 3
  02dcddc  fadds 1, 3, 1
  02dcde0  fmuls 1, 2, 1
  02dcde4  fctiwz 1, 1
  02dcde8  stfd 1, 344(1)
  02dcdec  lwz 6, 348(1)
  02dcdf0  extsw 6, 6
  02dcdf4  bl 0xfddc0
  02dcdf8  nop
  02dcdfc  b 0x2de680
  02dce00  lbz 3, 188(31)
  02dce04  cmpwi 3, 1
  02dce08  bf 2, 0x2de680
  02dce0c  li 3, 19
  02dce10  bl 0xfc620
  02dce14  nop
  02dce18  cmpwi 3, 0
  02dce1c  bf 2, 0x2de680
  02dce20  li 3, 256
  02dce24  bl 0xfc620
  02dce28  nop
  02dce2c  clrlwi 3, 3, 31
  02dce30  lfs 29, 504(30)
  02dce34  cmpwi 3, 0
  02dce38  bt 2, 0x2dce44
  02dce3c  fneg 29, 29
  02dce40  stfs 29, 504(30)
  02dce44  lis 3, 46
  02dce48  addi 29, 3, -15140
  02dce4c  lfs 1, 64(29)
  02dce50  fmuls 1, 29, 1
  02dce54  stfs 1, 500(30)
  02dce58  lfs 1, 68(29)
  02dce5c  lfs 2, 72(29)
  02dce60  bl 0xfcbe8
  02dce64  nop
  02dce68  fctidz 1, 1
  02dce6c  lfs 29, 56(29)
  02dce70  lis 3, 114
  02dce74  li 4, 3
  02dce78  lfs 2, -3056(3)
  02dce7c  li 3, 528
  02dce80  fcfid 1, 1
  02dce84  frsp 1, 1
  02dce88  fadds 1, 1, 29
  02dce8c  fmuls 1, 2, 1
  02dce90  fctiwz 1, 1
  02dce94  stfiwx 1, 3, 30
  02dce98  lbz 3, 83(31)
  02dce9c  stb 4, 32(31)
  02dcea0  cmpwi 3, 0
  02dcea4  bt 2, 0x2dcf00
  02dcea8  li 3, 10
  02dceac  li 4, 13
  02dceb0  bl 0xfe484
  02dceb4  nop
  02dceb8  extsw 3, 3
  02dcebc  lis 5, 114
  02dcec0  li 4, 0
  02dcec4  std 3, 344(1)
  02dcec8  lfs 1, -3056(5)
  02dcecc  lfd 2, 344(1)
  02dced0  ori 3, 31, 0
  02dced4  fcfid 2, 2
  02dced8  li 5, 0
  02dcedc  frsp 2, 2
  02dcee0  fadds 2, 2, 29
  02dcee4  fmuls 1, 1, 2
  02dcee8  fctiwz 1, 1
  02dceec  stfd 1, 344(1)
  02dcef0  lwz 6, 348(1)
  02dcef4  extsw 6, 6
  02dcef8  bl 0xfddc0
  02dcefc  nop
  02dcf00  li 3, 0
  02dcf04  stb 3, 188(31)
  02dcf08  b 0x2de680
  02dcf0c  fsubs 1, 1, 3
  02dcf10  fsubs 2, 2, 4
  02dcf14  bl 0x5e8338
  02dcf18  nop
  02dcf1c  lis 3, 46
  02dcf20  addic 5, 30, 496
  02dcf24  addi 4, 3, -15140
  02dcf28  ori 3, 31, 0
  02dcf2c  lfs 2, 76(4)
  02dcf30  lfs 3, 80(4)
  02dcf34  lfs 4, 84(4)
  02dcf38  bl 0xff2e8
  02dcf3c  nop
  02dcf40  lfs 2, 256(1)
  02dcf44  lfs 1, 16(31)
  02dcf48  cmpwi 29, 2
  02dcf4c  lfs 3, 260(1)
  02dcf50  lfs 6, 20(31)
  02dcf54  lfs 4, 264(1)
  02dcf58  fsubs 2, 2, 1
  02dcf5c  lfs 5, 24(31)
  02dcf60  fsubs 3, 3, 6
  02dcf64  fsubs 1, 4, 5
  02dcf68  bt 0, 0x2dcf8c
  02dcf6c  fmuls 3, 3, 3
  02dcf70  fmadds 2, 2, 2, 3
  02dcf74  fmadds 1, 1, 1, 2
  02dcf78  lfs 2, 508(30)
  02dcf7c  fsqrts 1, 1
  02dcf80  fcmpu 0, 1, 2
  02dcf84  cror 6, 1, 2
  02dcf88  bt 6, 0x2dd0c4
  02dcf8c  fsubs 1, 5, 4
  02dcf90  lis 3, 46
  02dcf94  addi 3, 3, -15140
  02dcf98  lfs 2, 12(3)
  02dcf9c  fabs 1, 1
  02dcfa0  fcmpu 0, 1, 2
  02dcfa4  cror 6, 1, 2
  02dcfa8  bt 6, 0x2dd0c4
  02dcfac  li 3, 19
  02dcfb0  bl 0xfc620
  02dcfb4  nop
  02dcfb8  cmpwi 3, 0
  02dcfbc  bf 2, 0x2dd0c4
  02dcfc0  lbz 3, 33(31)
  02dcfc4  cmpwi 3, 255
  02dcfc8  bt 2, 0x2dcfd8
  02dcfcc  li 4, 1
  02dcfd0  bl 0x104298
  02dcfd4  nop
  02dcfd8  li 3, 256
  02dcfdc  bl 0xfc620
  02dcfe0  nop
  02dcfe4  clrlwi 3, 3, 31
  02dcfe8  lfs 29, 504(30)
  02dcfec  cmpwi 3, 0
  02dcff0  bt 2, 0x2dcffc
  02dcff4  fneg 29, 29
  02dcff8  stfs 29, 504(30)
  02dcffc  lis 3, 46
  02dd000  addi 29, 3, -15140
  02dd004  lfs 1, 64(29)
  02dd008  fmuls 1, 29, 1
  02dd00c  stfs 1, 500(30)
  02dd010  lfs 1, 68(29)
  02dd014  lfs 2, 72(29)
  02dd018  bl 0xfcbe8
  02dd01c  nop
  02dd020  fctidz 1, 1
  02dd024  lfs 29, 56(29)
  02dd028  lis 3, 114
  02dd02c  li 4, 3
  02dd030  lfs 2, -3056(3)
  02dd034  li 3, 528
  02dd038  fcfid 1, 1
  02dd03c  frsp 1, 1
  02dd040  fadds 1, 1, 29
  02dd044  fmuls 1, 2, 1
  02dd048  fctiwz 1, 1
  02dd04c  stfiwx 1, 3, 30
  02dd050  lbz 3, 83(31)
  02dd054  stb 4, 32(31)
  02dd058  cmpwi 3, 0
  02dd05c  bt 2, 0x2dd0b8
  02dd060  li 3, 10
  02dd064  li 4, 13
  02dd068  bl 0xfe484
  02dd06c  nop
  02dd070  extsw 3, 3
  02dd074  lis 5, 114
  02dd078  li 4, 0
  02dd07c  std 3, 344(1)
  02dd080  lfs 1, -3056(5)
  02dd084  lfd 2, 344(1)
  02dd088  ori 3, 31, 0
  02dd08c  fcfid 2, 2
  02dd090  li 5, 0
  02dd094  frsp 2, 2
  02dd098  fadds 2, 2, 29
  02dd09c  fmuls 1, 1, 2
  02dd0a0  fctiwz 1, 1
  02dd0a4  stfd 1, 344(1)
  02dd0a8  lwz 6, 348(1)
  02dd0ac  extsw 6, 6
  02dd0b0  bl 0xfddc0
  02dd0b4  nop
  02dd0b8  li 3, 0
  02dd0bc  stb 3, 188(31)
  02dd0c0  b 0x2dd1cc
  02dd0c4  lbz 3, 188(31)
  02dd0c8  cmpwi 3, 1
  02dd0cc  bf 2, 0x2dd1cc
  02dd0d0  li 3, 19
  02dd0d4  bl 0xfc620
  02dd0d8  nop
  02dd0dc  cmpwi 3, 0
  02dd0e0  bf 2, 0x2dd1cc
  02dd0e4  li 3, 256
  02dd0e8  bl 0xfc620
  02dd0ec  nop
  02dd0f0  clrlwi 3, 3, 31
  02dd0f4  lfs 29, 504(30)
  02dd0f8  cmpwi 3, 0
  02dd0fc  bt 2, 0x2dd108
  02dd100  fneg 29, 29
  02dd104  stfs 29, 504(30)
  02dd108  lis 3, 46
  02dd10c  addi 29, 3, -15140
  02dd110  lfs 1, 64(29)
  02dd114  fmuls 1, 29, 1
  02dd118  stfs 1, 500(30)
  02dd11c  lfs 1, 68(29)
  02dd120  lfs 2, 72(29)
  02dd124  bl 0xfcbe8
  02dd128  nop
  02dd12c  fctidz 1, 1
  02dd130  lfs 29, 56(29)
  02dd134  lis 3, 114
  02dd138  li 4, 3
  02dd13c  lfs 2, -3056(3)
  02dd140  li 3, 528
  02dd144  fcfid 1, 1
  02dd148  frsp 1, 1
  02dd14c  fadds 1, 1, 29
  02dd150  fmuls 1, 2, 1
  02dd154  fctiwz 1, 1
  02dd158  stfiwx 1, 3, 30
  02dd15c  lbz 3, 83(31)
  02dd160  stb 4, 32(31)
  02dd164  cmpwi 3, 0
  02dd168  bt 2, 0x2dd1c4
  02dd16c  li 3, 10
  02dd170  li 4, 13
  02dd174  bl 0xfe484
  02dd178  nop
  02dd17c  extsw 3, 3
  02dd180  li 4, 0
  02dd184  std 3, 344(1)
  02dd188  lis 3, 114
  02dd18c  li 5, 0
  02dd190  lfs 1, -3056(3)
  02dd194  lfd 2, 344(1)
  02dd198  ori 3, 31, 0
  02dd19c  fcfid 2, 2
  02dd1a0  frsp 2, 2
  02dd1a4  fadds 2, 2, 29
  02dd1a8  fmuls 1, 1, 2
  02dd1ac  fctiwz 1, 1
  02dd1b0  stfd 1, 344(1)
  02dd1b4  lwz 6, 348(1)
  02dd1b8  extsw 6, 6
  02dd1bc  bl 0xfddc0
  02dd1c0  nop
  02dd1c4  li 3, 0
  02dd1c8  stb 3, 188(31)
  02dd1cc  lbz 3, 83(31)
  02dd1d0  cmpwi 3, 4
  02dd1d4  cmpwi 1, 3, 2
  02dd1d8  bf 2, 0x2de680
  02dd1dc  lbz 3, 112(31)
  02dd1e0  rlwinm 3, 3, 0, 30, 30
  02dd1e4  cmpwi 3, 0
  02dd1e8  bt 2, 0x2de680
  02dd1ec  bt 6, 0x2de680
  02dd1f0  li 3, 10
  02dd1f4  li 4, 13
  02dd1f8  bl 0xfe484
  02dd1fc  nop
  02dd200  extsw 3, 3
  02dd204  lis 4, 114
  02dd208  std 3, 344(1)
  02dd20c  lis 3, 46
  02dd210  addi 3, 3, -15140
  02dd214  li 5, 0
  02dd218  lfs 1, 56(3)
  02dd21c  lfs 2, -3056(4)
  02dd220  lfd 3, 344(1)
  02dd224  fcfid 3, 3
  02dd228  ori 3, 31, 0
  02dd22c  li 4, 2
  02dd230  frsp 3, 3
  02dd234  fadds 1, 3, 1
  02dd238  fmuls 1, 2, 1
  02dd23c  fctiwz 1, 1
  02dd240  stfd 1, 344(1)
  02dd244  lwz 6, 348(1)
  02dd248  extsw 6, 6
  02dd24c  bl 0xfddc0
  02dd250  nop
  02dd254  b 0x2de680
  02dd258  fsubs 5, 4, 2
  02dd25c  fsubs 6, 3, 1
  02dd260  lfs 7, 24(31)
  02dd264  fmuls 5, 5, 5
  02dd268  fmadds 6, 6, 6, 5
  02dd26c  lfs 5, 264(1)
  02dd270  lwz 3, 540(30)
  02dd274  fsubs 7, 7, 5
  02dd278  cmpwi 3, -1
  02dd27c  fsqrts 29, 6
  02dd280  fabs 6, 7
  02dd284  fdivs 29, 6, 29
  02dd288  bt 2, 0x2dd2c8
  02dd28c  lis 4, 165
  02dd290  slwi 3, 3, 2
  02dd294  addic 4, 4, 7136
  02dd298  extsw 7, 3
  02dd29c  addic 5, 1, 256
  02dd2a0  addic 6, 1, 128
  02dd2a4  ori 3, 31, 0
  02dd2a8  lwzx 4, 4, 7
  02dd2ac  bl 0x1385d0
  02dd2b0  nop
  02dd2b4  lfs 1, 128(1)
  02dd2b8  lfs 3, 16(31)
  02dd2bc  lfs 2, 132(1)
  02dd2c0  lfs 4, 20(31)
  02dd2c4  b 0x2dd2dc
  02dd2c8  stfs 1, 128(1)
  02dd2cc  stfs 2, 132(1)
  02dd2d0  lfs 6, 268(1)
  02dd2d4  stfs 5, 136(1)
  02dd2d8  stfs 6, 140(1)
  02dd2dc  fsubs 1, 1, 3
  02dd2e0  fsubs 2, 2, 4
  02dd2e4  bl 0x5e8338
  02dd2e8  nop
  02dd2ec  lis 3, 46
  02dd2f0  lfs 2, 500(30)
  02dd2f4  addic 5, 30, 496
  02dd2f8  addi 29, 3, -15140
  02dd2fc  fadds 1, 1, 2
  02dd300  ori 3, 31, 0
  02dd304  lfs 2, 88(29)
  02dd308  lfs 3, 80(29)
  02dd30c  lfs 4, 92(29)
  02dd310  bl 0xff2e8
  02dd314  nop
  02dd318  lfs 1, 72(31)
  02dd31c  bl 0x5e8078
  02dd320  nop
  02dd324  lfs 28, 96(29)
  02dd328  lfs 2, 72(31)
  02dd32c  fmuls 3, 1, 28
  02dd330  fmr 1, 2
  02dd334  stfs 3, 112(1)
  02dd338  bl 0x5e8128
  02dd33c  nop
  02dd340  fmuls 1, 1, 28
  02dd344  lfs 2, 16(31)
  02dd348  li 3, 0
  02dd34c  lfs 3, 112(1)
  02dd350  addic 4, 30, 384
  02dd354  lfs 4, 20(31)
  02dd358  addic 5, 1, 128
  02dd35c  fadds 2, 2, 3
  02dd360  addic 6, 1, 112
  02dd364  lfs 3, 24(31)
  02dd368  stw 3, 120(1)
  02dd36c  lfs 5, 28(31)
  02dd370  ori 3, 31, 0
  02dd374  stfs 3, 136(1)
  02dd378  stfs 5, 140(1)
  02dd37c  fadds 3, 4, 1
  02dd380  stfs 1, 116(1)
  02dd384  stfs 2, 128(1)
  02dd388  stfs 3, 132(1)
  02dd38c  lfs 28, 8(29)
  02dd390  fmr 1, 28
  02dd394  bl 0x101058
  02dd398  nop
  02dd39c  ori 29, 3, 0
  02dd3a0  addic 3, 30, 528
  02dd3a4  bl 0x4fff60
  02dd3a8  nop
  02dd3ac  cmpwi 3, 0
  02dd3b0  bt 2, 0x2dd404
  02dd3b4  lis 3, 46
  02dd3b8  addi 28, 3, -15140
  02dd3bc  lfs 1, 68(28)
  02dd3c0  lfs 2, 72(28)
  02dd3c4  bl 0xfcbe8
  02dd3c8  nop
  02dd3cc  fctidz 1, 1
  02dd3d0  lfs 2, 56(28)
  02dd3d4  lis 3, 114
  02dd3d8  lfs 3, -3056(3)
  02dd3dc  lfs 4, 500(30)
  02dd3e0  li 3, 528
  02dd3e4  fcfid 1, 1
  02dd3e8  fneg 4, 4
  02dd3ec  frsp 1, 1
  02dd3f0  stfs 4, 500(30)
  02dd3f4  fadds 1, 1, 2
  02dd3f8  fmuls 1, 3, 1
  02dd3fc  fctiwz 1, 1
  02dd400  stfiwx 1, 3, 30
  02dd404  lfs 1, 256(1)
  02dd408  rlwinm 3, 29, 0, 29, 29
  02dd40c  lfs 2, 464(30)
  02dd410  lfs 3, 260(1)
  02dd414  lfs 4, 468(30)
  02dd418  cmpwi 3, 0
  02dd41c  lfs 5, 264(1)
  02dd420  fsubs 2, 1, 2
  02dd424  lfs 6, 472(30)
  02dd428  fsubs 4, 3, 4
  02dd42c  fsubs 6, 5, 6
  02dd430  bf 2, 0x2dd474
  02dd434  lfs 7, 20(31)
  02dd438  lfs 8, 16(31)
  02dd43c  fsubs 3, 7, 3
  02dd440  fsubs 1, 8, 1
  02dd444  lis 3, 46
  02dd448  addi 3, 3, -15140
  02dd44c  fmuls 3, 3, 3
  02dd450  fmadds 1, 1, 1, 3
  02dd454  lfs 3, 100(3)
  02dd458  fsqrts 1, 1
  02dd45c  fcmpu 0, 1, 3
  02dd460  cror 6, 1, 2
  02dd464  bt 6, 0x2dd4f0
  02dd468  rlwinm 3, 29, 0, 30, 30
  02dd46c  cmpwi 3, 0
  02dd470  bf 2, 0x2dd4f0
  02dd474  li 3, 4
  02dd478  lbz 4, 83(31)
  02dd47c  cmpwi 4, 1
  02dd480  stb 3, 32(31)
  02dd484  bt 2, 0x2dd604
  02dd488  li 3, 10
  02dd48c  li 4, 13
  02dd490  bl 0xfe484
  02dd494  nop
  02dd498  extsw 3, 3
  02dd49c  lis 4, 114
  02dd4a0  std 3, 344(1)
  02dd4a4  lis 3, 46
  02dd4a8  addi 3, 3, -15140
  02dd4ac  li 5, 0
  02dd4b0  lfs 1, 56(3)
  02dd4b4  lfs 2, -3056(4)
  02dd4b8  lfd 3, 344(1)
  02dd4bc  fcfid 3, 3
  02dd4c0  ori 3, 31, 0
  02dd4c4  li 4, 1
  02dd4c8  frsp 3, 3
  02dd4cc  fadds 1, 3, 1
  02dd4d0  fmuls 1, 2, 1
  02dd4d4  fctiwz 1, 1
  02dd4d8  stfd 1, 344(1)
  02dd4dc  lwz 6, 348(1)
  02dd4e0  extsw 6, 6
  02dd4e4  bl 0xfddc0
  02dd4e8  nop
  02dd4ec  b 0x2dd604
  02dd4f0  lis 3, 114
  02dd4f4  lwz 4, 400(30)
  02dd4f8  srawi 5, 4, 31
  02dd4fc  lwz 3, -3052(3)
  02dd500  srwi 7, 5, 1
  02dd504  srawi 6, 3, 31
  02dd508  xor 4, 7, 4
  02dd50c  srwi 8, 6, 1
  02dd510  subc 4, 4, 5
  02dd514  xor 3, 8, 3
  02dd518  subc 3, 3, 6
  02dd51c  cmpw 4, 3
  02dd520  bt 0, 0x2dd538
  02dd524  fcmpu 0, 29, 28
  02dd528  bt 1, 0x2dd538
  02dd52c  rlwinm 3, 29, 0, 30, 30
  02dd530  cmpwi 3, 0
  02dd534  bt 2, 0x2dd580
  02dd538  lis 3, 46
  02dd53c  li 4, 104
  02dd540  vspltisw 2, -1
  02dd544  addi 3, 3, -15140
  02dd548  lis 5, 114
  02dd54c  li 6, -3056
  02dd550  vslw 2, 2, 2
  02dd554  <unknown>
  02dd558  li 3, 548
  02dd55c  vspltw 3, 3, 0
  02dd560  li 4, 5
  02dd564  <unknown>
  02dd568  vmaddfp 2, 4, 3, 2
  02dd56c  vctsxs 2, 2, 0
  02dd570  vspltw 2, 2, 0
  02dd574  stvewx 2, 3, 30
  02dd578  stb 4, 32(31)
  02dd57c  b 0x2dd604
  02dd580  fmuls 1, 4, 4
  02dd584  lis 3, 46
  02dd588  addi 3, 3, -15140
  02dd58c  fmadds 1, 2, 2, 1
  02dd590  lfs 2, 60(3)
  02dd594  lfs 3, 508(30)
  02dd598  fadds 2, 3, 2
  02dd59c  fmadds 1, 6, 6, 1
  02dd5a0  fsqrts 1, 1
  02dd5a4  fcmpu 0, 1, 2
  02dd5a8  cror 6, 1, 2
  02dd5ac  bt 6, 0x2dd5f0
  02dd5b0  lfs 1, 24(31)
  02dd5b4  lis 3, 46
  02dd5b8  fsubs 1, 1, 5
  02dd5bc  addi 3, 3, -15140
  02dd5c0  lfs 2, 12(3)
  02dd5c4  fabs 1, 1
  02dd5c8  fcmpu 0, 1, 2
  02dd5cc  cror 6, 1, 2
  02dd5d0  bt 6, 0x2dd5f0
  02dd5d4  lbz 3, 33(31)
  02dd5d8  cmpwi 3, 255
  02dd5dc  bt 2, 0x2dd604
  02dd5e0  li 4, 1
  02dd5e4  bl 0x104298
  02dd5e8  nop
  02dd5ec  b 0x2dd604
  02dd5f0  lbz 3, 188(31)
  02dd5f4  cmpwi 3, 1
  02dd5f8  bt 2, 0x2dd604
  02dd5fc  li 3, 5
  02dd600  stb 3, 32(31)
  02dd604  li 3, 0
  02dd608  stb 3, 188(31)
  02dd60c  b 0x2de680
  02dd610  fsubs 1, 1, 3
  02dd614  fsubs 2, 2, 4
  02dd618  bl 0x5e8338
  02dd61c  nop
  02dd620  lis 3, 46
  02dd624  addic 5, 30, 496
  02dd628  addi 4, 3, -15140
  02dd62c  ori 3, 31, 0
  02dd630  lfs 30, 92(4)
  02dd634  lfs 2, 88(4)
  02dd638  lfs 3, 80(4)
  02dd63c  fmr 4, 30
  02dd640  bl 0xff2e8
  02dd644  nop
  02dd648  lbz 3, 82(31)
  02dd64c  lbz 4, 83(31)
  02dd650  cmpw 3, 4
  02dd654  bf 2, 0x2dd790
  02dd658  ori 3, 31, 0
  02dd65c  bl 0xefe40
  02dd660  nop
  02dd664  lis 3, 46
  02dd668  addi 3, 3, -15140
  02dd66c  lfs 2, 108(3)
  02dd670  fcmpu 0, 1, 2
  02dd674  bf 2, 0x2dd790
  02dd678  lfs 1, 24(31)
  02dd67c  lfs 2, 264(1)
  02dd680  lis 3, 46
  02dd684  fsubs 1, 1, 2
  02dd688  addi 3, 3, -15140
  02dd68c  lfs 2, 56(3)
  02dd690  fabs 1, 1
  02dd694  fcmpu 0, 1, 2
  02dd698  cror 6, 1, 2
  02dd69c  bt 6, 0x2dd790
  02dd6a0  lfs 3, 20(31)
  02dd6a4  lfs 4, 260(1)
  02dd6a8  lfs 1, 16(31)
  02dd6ac  fsubs 5, 3, 4
  02dd6b0  lfs 2, 256(1)
  02dd6b4  fsubs 6, 1, 2
  02dd6b8  lis 3, 46
  02dd6bc  addi 3, 3, -15140
  02dd6c0  fmuls 5, 5, 5
  02dd6c4  fmadds 5, 6, 6, 5
  02dd6c8  lfs 6, 96(3)
  02dd6cc  fsqrts 5, 5
  02dd6d0  fcmpu 0, 5, 6
  02dd6d4  cror 6, 1, 2
  02dd6d8  bt 6, 0x2dd790
  02dd6dc  fsubs 1, 2, 1
  02dd6e0  fsubs 2, 4, 3
  02dd6e4  bl 0x5e8338
  02dd6e8  nop
  02dd6ec  lfs 2, 72(31)
  02dd6f0  bl 0x5026a0
  02dd6f4  nop
  02dd6f8  lis 3, 46
  02dd6fc  addi 3, 3, -15140
  02dd700  lfs 2, 112(3)
  02dd704  fcmpu 0, 1, 2
  02dd708  cror 6, 1, 2
  02dd70c  bt 6, 0x2dd790
  02dd710  lfs 1, 72(31)
  02dd714  bl 0x5e8078
  02dd718  nop
  02dd71c  fmuls 2, 1, 30
  02dd720  lfs 1, 72(31)
  02dd724  stfs 2, 144(1)
  02dd728  bl 0x5e8128
  02dd72c  nop
  02dd730  fmuls 1, 1, 30
  02dd734  li 3, 0
  02dd738  lfs 2, 256(1)
  02dd73c  lis 4, 46
  02dd740  addic 7, 1, 160
  02dd744  addi 6, 4, -15140
  02dd748  stw 3, 152(1)
  02dd74c  lfs 3, 260(1)
  02dd750  addic 8, 1, 144
  02dd754  stfs 2, 160(1)
  02dd758  ori 4, 31, 0
  02dd75c  lfs 2, 268(1)
  02dd760  li 5, 1
  02dd764  stfs 3, 164(1)
  02dd768  stfs 2, 172(1)
  02dd76c  stfs 1, 148(1)
  02dd770  lfs 1, 116(6)
  02dd774  lfs 2, 264(1)
  02dd778  lwz 3, 320(1)
  02dd77c  fadds 1, 2, 1
  02dd780  stfs 1, 168(1)
  02dd784  lfs 1, 8(6)
  02dd788  bl 0x105c08
  02dd78c  nop
  02dd790  lbz 3, 112(31)
  02dd794  rlwinm 3, 3, 0, 30, 30
  02dd798  cmpwi 3, 0
  02dd79c  bt 2, 0x2dd854
  02dd7a0  lfs 1, 20(31)
  02dd7a4  lfs 2, 260(1)
  02dd7a8  lfs 3, 16(31)
  02dd7ac  fsubs 1, 1, 2
  02dd7b0  lfs 2, 256(1)
  02dd7b4  fsubs 2, 3, 2
  02dd7b8  lis 3, 46
  02dd7bc  addi 3, 3, -15140
  02dd7c0  fmuls 1, 1, 1
  02dd7c4  fmadds 1, 2, 2, 1
  02dd7c8  lfs 2, 100(3)
  02dd7cc  fsqrts 1, 1
  02dd7d0  fcmpu 0, 1, 2
  02dd7d4  cror 6, 0, 2
  02dd7d8  bt 6, 0x2dd854
  02dd7dc  li 3, 3
  02dd7e0  lbz 4, 83(31)
  02dd7e4  cmpwi 4, 0
  02dd7e8  stb 3, 32(31)
  02dd7ec  bt 2, 0x2dd854
  02dd7f0  li 3, 10
  02dd7f4  li 4, 13
  02dd7f8  bl 0xfe484
  02dd7fc  nop
  02dd800  extsw 3, 3
  02dd804  lis 4, 114
  02dd808  std 3, 344(1)
  02dd80c  lis 3, 46
  02dd810  addi 3, 3, -15140
  02dd814  li 5, 0
  02dd818  lfs 1, 56(3)
  02dd81c  lfs 2, -3056(4)
  02dd820  lfd 3, 344(1)
  02dd824  fcfid 3, 3
  02dd828  ori 3, 31, 0
  02dd82c  li 4, 0
  02dd830  frsp 3, 3
  02dd834  fadds 1, 3, 1
  02dd838  fmuls 1, 2, 1
  02dd83c  fctiwz 1, 1
  02dd840  stfd 1, 344(1)
  02dd844  lwz 6, 348(1)
  02dd848  extsw 6, 6
  02dd84c  bl 0xfddc0
  02dd850  nop
  02dd854  lis 3, 46
  02dd858  li 4, 0
  02dd85c  addi 29, 3, -15140
  02dd860  addic 3, 31, 16
  02dd864  lfs 1, 56(29)
  02dd868  bl 0xffb70
  02dd86c  nop
  02dd870  lis 3, 114
  02dd874  lfs 2, 120(29)
  02dd878  fmr 30, 1
  02dd87c  lfs 3, 408(30)
  02dd880  lfs 4, -3048(3)
  02dd884  fnmsubs 1, 4, 2, 3
  02dd888  stfs 1, 408(30)
  02dd88c  lfs 2, 24(31)
  02dd890  fadds 1, 2, 1
  02dd894  fcmpu 0, 1, 30
  02dd898  stfs 1, 24(31)
  02dd89c  cror 6, 1, 2
  02dd8a0  bt 6, 0x2de680
  02dd8a4  li 3, 0
  02dd8a8  stw 3, 408(30)
  02dd8ac  stfs 30, 24(31)
  02dd8b0  b 0x2de680
  02dd8b4  lwz 3, 540(30)
  02dd8b8  cmpwi 3, -1
  02dd8bc  bt 2, 0x2dd8fc
  02dd8c0  lis 4, 165
  02dd8c4  slwi 3, 3, 2
  02dd8c8  addic 4, 4, 7136
  02dd8cc  extsw 7, 3
  02dd8d0  addic 5, 30, 464
  02dd8d4  addic 6, 1, 192
  02dd8d8  ori 3, 31, 0
  02dd8dc  lwzx 4, 4, 7
  02dd8e0  bl 0x1385d0
  02dd8e4  nop
  02dd8e8  lfs 1, 192(1)
  02dd8ec  lfs 2, 196(1)
  02dd8f0  lfs 3, 16(31)
  02dd8f4  lfs 4, 20(31)
  02dd8f8  b 0x2dd91c
  02dd8fc  lfs 1, 464(30)
  02dd900  stfs 1, 192(1)
  02dd904  lfs 2, 468(30)
  02dd908  stfs 2, 196(1)
  02dd90c  lfs 5, 472(30)
  02dd910  stfs 5, 200(1)
  02dd914  lfs 5, 476(30)
  02dd918  stfs 5, 204(1)
  02dd91c  fsubs 1, 1, 3
  02dd920  fsubs 2, 2, 4
  02dd924  bl 0x5e8338
  02dd928  nop
  02dd92c  lis 3, 46
  02dd930  addic 5, 30, 496
  02dd934  addi 29, 3, -15140
  02dd938  ori 3, 31, 0
  02dd93c  lfs 2, 76(29)
  02dd940  lfs 3, 80(29)
  02dd944  lfs 4, 84(29)
  02dd948  bl 0xff2e8
  02dd94c  nop
  02dd950  lfs 1, 72(31)
  02dd954  bl 0x5e8078
  02dd958  nop
  02dd95c  lfs 27, 96(29)
  02dd960  lfs 2, 72(31)
  02dd964  fmuls 3, 1, 27
  02dd968  fmr 1, 2
  02dd96c  stfs 3, 176(1)
  02dd970  bl 0x5e8128
  02dd974  nop
  02dd978  fmuls 1, 1, 27
  02dd97c  lfs 2, 16(31)
  02dd980  li 3, 0
  02dd984  lfs 3, 176(1)
  02dd988  addic 4, 30, 384
  02dd98c  lfs 4, 20(31)
  02dd990  addic 5, 1, 192
  02dd994  fadds 2, 2, 3
  02dd998  addic 6, 1, 176
  02dd99c  lfs 3, 24(31)
  02dd9a0  stw 3, 184(1)
  02dd9a4  lfs 5, 28(31)
  02dd9a8  ori 3, 31, 0
  02dd9ac  stfs 3, 200(1)
  02dd9b0  stfs 5, 204(1)
  02dd9b4  fadds 3, 4, 1
  02dd9b8  stfs 1, 180(1)
  02dd9bc  stfs 2, 192(1)
  02dd9c0  stfs 3, 196(1)
  02dd9c4  lfs 1, 8(29)
  02dd9c8  bl 0x101058
  02dd9cc  nop
  02dd9d0  lfs 1, 20(31)
  02dd9d4  lfs 2, 468(30)
  02dd9d8  lfs 3, 16(31)
  02dd9dc  fsubs 1, 1, 2
  02dd9e0  lfs 2, 464(30)
  02dd9e4  fsubs 2, 3, 2
  02dd9e8  ori 29, 3, 0
  02dd9ec  fmuls 1, 1, 1
  02dd9f0  fmadds 1, 2, 2, 1
  02dd9f4  fsqrts 1, 1
  02dd9f8  fcmpu 0, 1, 27
  02dd9fc  cror 6, 1, 2
  02dda00  bt 6, 0x2dda7c
  02dda04  li 3, 1
  02dda08  lbz 4, 83(31)
  02dda0c  cmpwi 4, 2
  02dda10  stb 3, 32(31)
  02dda14  bt 2, 0x2dda7c
  02dda18  li 3, 10
  02dda1c  li 4, 13
  02dda20  bl 0xfe484
  02dda24  nop
  02dda28  extsw 3, 3
  02dda2c  lis 4, 114
  02dda30  std 3, 344(1)
  02dda34  lis 3, 46
  02dda38  addi 3, 3, -15140
  02dda3c  li 5, 0
  02dda40  lfs 1, 56(3)
  02dda44  lfs 2, -3056(4)
  02dda48  lfd 3, 344(1)
  02dda4c  fcfid 3, 3
  02dda50  ori 3, 31, 0
  02dda54  li 4, 2
  02dda58  frsp 3, 3
  02dda5c  fadds 1, 3, 1
  02dda60  fmuls 1, 2, 1
  02dda64  fctiwz 1, 1
  02dda68  stfd 1, 344(1)
  02dda6c  lwz 6, 348(1)
  02dda70  extsw 6, 6
  02dda74  bl 0xfddc0
  02dda78  nop
  02dda7c  lfs 1, 256(1)
  02dda80  cmpwi 28, 0
  02dda84  lfs 2, 464(30)
  02dda88  lfs 3, 260(1)
  02dda8c  lfs 4, 468(30)
  02dda90  fsubs 1, 1, 2
  02dda94  lfs 5, 264(1)
  02dda98  lfs 6, 472(30)
  02dda9c  fsubs 2, 3, 4
  02ddaa0  fsubs 3, 5, 6
  02ddaa4  bt 2, 0x2ddbe4
  02ddaa8  fmuls 2, 2, 2
  02ddaac  fmadds 1, 1, 1, 2
  02ddab0  lfs 2, 508(30)
  02ddab4  fmadds 1, 3, 3, 1
  02ddab8  fsqrts 1, 1
  02ddabc  fcmpu 0, 1, 2
  02ddac0  cror 6, 1, 2
  02ddac4  bt 6, 0x2ddb5c
  02ddac8  lbz 3, 33(31)
  02ddacc  cmpwi 3, 255
  02ddad0  bt 2, 0x2ddae0
  02ddad4  li 4, 1
  02ddad8  bl 0x104298
  02ddadc  nop
  02ddae0  li 3, 3
  02ddae4  lbz 4, 83(31)
  02ddae8  cmpwi 4, 0
  02ddaec  stb 3, 32(31)
  02ddaf0  bt 2, 0x2ddc70
  02ddaf4  li 3, 10
  02ddaf8  li 4, 13
  02ddafc  bl 0xfe484
  02ddb00  nop
  02ddb04  extsw 3, 3
  02ddb08  lis 4, 46
  02ddb0c  std 3, 344(1)
  02ddb10  addi 3, 4, -15140
  02ddb14  lis 4, 114
  02ddb18  li 5, 0
  02ddb1c  lfs 1, 56(3)
  02ddb20  lfs 2, -3056(4)
  02ddb24  lfd 3, 344(1)
  02ddb28  ori 3, 31, 0
  02ddb2c  fcfid 3, 3
  02ddb30  li 4, 0
  02ddb34  frsp 3, 3
  02ddb38  fadds 1, 3, 1
  02ddb3c  fmuls 1, 2, 1
  02ddb40  fctiwz 1, 1
  02ddb44  stfd 1, 344(1)
  02ddb48  lwz 6, 348(1)
  02ddb4c  extsw 6, 6
  02ddb50  bl 0xfddc0
  02ddb54  nop
  02ddb58  b 0x2ddc70
  02ddb5c  lbz 3, 188(31)
  02ddb60  cmpwi 3, 1
  02ddb64  bf 2, 0x2ddbe4
  02ddb68  li 3, 3
  02ddb6c  lbz 4, 83(31)
  02ddb70  cmpwi 4, 0
  02ddb74  stb 3, 32(31)
  02ddb78  bt 2, 0x2ddc70
  02ddb7c  li 3, 10
  02ddb80  li 4, 13
  02ddb84  bl 0xfe484
  02ddb88  nop
  02ddb8c  extsw 3, 3
  02ddb90  lis 4, 46
  02ddb94  std 3, 344(1)
  02ddb98  addi 3, 4, -15140
  02ddb9c  lis 4, 114
  02ddba0  li 5, 0
  02ddba4  lfs 1, 56(3)
  02ddba8  lfs 2, -3056(4)
  02ddbac  lfd 3, 344(1)
  02ddbb0  ori 3, 31, 0
  02ddbb4  fcfid 3, 3
  02ddbb8  li 4, 0
  02ddbbc  frsp 3, 3
  02ddbc0  fadds 1, 3, 1
  02ddbc4  fmuls 1, 2, 1
  02ddbc8  fctiwz 1, 1
  02ddbcc  stfd 1, 344(1)
  02ddbd0  lwz 6, 348(1)
  02ddbd4  extsw 6, 6
  02ddbd8  bl 0xfddc0
  02ddbdc  nop
  02ddbe0  b 0x2ddc70
  02ddbe4  rlwinm 3, 29, 0, 30, 30
  02ddbe8  cmpwi 3, 0
  02ddbec  bt 2, 0x2ddc70
  02ddbf0  li 3, 12
  02ddbf4  lbz 4, 83(31)
  02ddbf8  stfs 29, 16(31)
  02ddbfc  stfs 28, 20(31)
  02ddc00  cmpwi 4, 4
  02ddc04  stb 3, 32(31)
  02ddc08  bt 2, 0x2ddc70
  02ddc0c  li 3, 10
  02ddc10  li 4, 13
  02ddc14  bl 0xfe484
  02ddc18  nop
  02ddc1c  extsw 3, 3
  02ddc20  lis 4, 46
  02ddc24  std 3, 344(1)
  02ddc28  addi 3, 4, -15140
  02ddc2c  lis 4, 114
  02ddc30  li 5, 0
  02ddc34  lfs 1, 56(3)
  02ddc38  lfs 2, -3056(4)
  02ddc3c  lfd 3, 344(1)
  02ddc40  ori 3, 31, 0
  02ddc44  fcfid 3, 3
  02ddc48  li 4, 4
  02ddc4c  frsp 3, 3
  02ddc50  fadds 1, 3, 1
  02ddc54  fmuls 1, 2, 1
  02ddc58  fctiwz 1, 1
  02ddc5c  stfd 1, 344(1)
  02ddc60  lwz 6, 348(1)
  02ddc64  extsw 6, 6
  02ddc68  bl 0xfddc0
  02ddc6c  nop
  02ddc70  li 3, 0
  02ddc74  stb 3, 188(31)
  02ddc78  b 0x2de680
  02ddc7c  ori 3, 31, 0
  02ddc80  addic 4, 30, 288
  02ddc84  bl 0x10b030
  02ddc88  nop
  02ddc8c  clrlwi 3, 3, 31
  02ddc90  cmpwi 3, 0
  02ddc94  bt 2, 0x2ddd14
  02ddc98  li 3, 9
  02ddc9c  lbz 4, 83(31)
  02ddca0  cmpwi 4, 3
  02ddca4  stb 3, 32(31)
  02ddca8  bt 2, 0x2de730
  02ddcac  li 3, 10
  02ddcb0  li 4, 13
  02ddcb4  bl 0xfe484
  02ddcb8  nop
  02ddcbc  extsw 3, 3
  02ddcc0  lis 4, 46
  02ddcc4  std 3, 344(1)
  02ddcc8  addi 3, 4, -15140
  02ddccc  lis 4, 114
  02ddcd0  li 5, 0
  02ddcd4  lfs 1, 56(3)
  02ddcd8  lfs 2, -3056(4)
  02ddcdc  lfd 3, 344(1)
  02ddce0  ori 3, 31, 0
  02ddce4  fcfid 3, 3
  02ddce8  li 4, 3
  02ddcec  frsp 3, 3
  02ddcf0  fadds 1, 3, 1
  02ddcf4  fmuls 1, 2, 1
  02ddcf8  fctiwz 1, 1
  02ddcfc  stfd 1, 344(1)
  02ddd00  lwz 6, 348(1)
  02ddd04  extsw 6, 6
  02ddd08  bl 0xfddc0
  02ddd0c  nop
  02ddd10  b 0x2de730
  02ddd14  lwz 3, 24(31)
  02ddd18  cmpwi 3, 0
  02ddd1c  bf 0, 0x2de680
  02ddd20  ori 3, 31, 0
  02ddd24  bl 0xefb38
  02ddd28  nop
  02ddd2c  b 0x2de730
  02ddd30  ori 3, 31, 0
  02ddd34  addic 4, 30, 288
  02ddd38  bl 0x48c188
  02ddd3c  nop
  02ddd40  cmpwi 3, 0
  02ddd44  bt 2, 0x2de680
  02ddd48  li 3, 1
  02ddd4c  lbz 4, 83(31)
  02ddd50  cmpwi 4, 2
  02ddd54  stb 3, 32(31)
  02ddd58  bt 2, 0x2ddd74
  02ddd5c  ori 3, 31, 0
  02ddd60  li 4, 2
  02ddd64  li 5, 0
  02ddd68  li 6, 0
  02ddd6c  bl 0xfddc0
  02ddd70  nop
  02ddd74  li 3, 0
  02ddd78  sth 3, 200(30)
  02ddd7c  b 0x2de680
  02ddd80  ori 3, 31, 0
  02ddd84  bl 0xefe40
  02ddd88  nop
  02ddd8c  lis 3, 46
  02ddd90  addi 3, 3, -15140
  02ddd94  lfs 2, 124(3)
  02ddd98  fcmpu 0, 1, 2
  02ddd9c  cror 6, 0, 2
  02ddda0  bt 6, 0x2de680
  02ddda4  li 3, 3
  02ddda8  lbz 4, 83(31)
  02dddac  cmpwi 4, 0
  02dddb0  stb 3, 32(31)
  02dddb4  bt 2, 0x2de730
  02dddb8  li 3, 10
  02dddbc  li 4, 13
  02dddc0  bl 0xfe484
  02dddc4  nop
  02dddc8  extsw 3, 3
  02dddcc  lis 4, 46
  02dddd0  std 3, 344(1)
  02dddd4  addi 3, 4, -15140
  02dddd8  lis 4, 114
  02ddddc  li 5, 0
  02ddde0  lfs 1, 56(3)
  02ddde4  lfs 2, -3056(4)
  02ddde8  lfd 3, 344(1)
  02dddec  ori 3, 31, 0
  02dddf0  fcfid 3, 3
  02dddf4  li 4, 0
  02dddf8  frsp 3, 3
  02dddfc  fadds 1, 3, 1
  02dde00  fmuls 1, 2, 1
  02dde04  fctiwz 1, 1
  02dde08  stfd 1, 344(1)
  02dde0c  lwz 6, 348(1)
  02dde10  extsw 6, 6
  02dde14  bl 0xfddc0
  02dde18  nop
  02dde1c  b 0x2de730
  02dde20  ori 3, 31, 0
  02dde24  addic 4, 30, 288
  02dde28  bl 0x10b030
  02dde2c  nop
  02dde30  rlwinm 3, 3, 0, 25, 25
  02dde34  cmpwi 3, 0
  02dde38  bt 2, 0x2dde70
  02dde3c  lis 3, 46
  02dde40  addic 4, 31, 16
  02dde44  addi 5, 3, -15140
  02dde48  ori 3, 31, 0
  02dde4c  li 6, 6
  02dde50  lfs 1, 56(5)
  02dde54  lfs 2, 108(5)
  02dde58  bl 0x10fb28
  02dde5c  nop
  02dde60  ori 3, 31, 0
  02dde64  bl 0xefb38
  02dde68  nop
  02dde6c  b 0x2de730
  02dde70  lwz 3, 24(31)
  02dde74  cmpwi 3, 0
  02dde78  bf 0, 0x2de680
  02dde7c  ori 3, 31, 0
  02dde80  bl 0xefb38
  02dde84  nop
  02dde88  b 0x2de730
  02dde8c  fsubs 2, 4, 2
  02dde90  fsubs 1, 3, 1
  02dde94  lfs 5, 24(31)
  02dde98  fmuls 2, 2, 2
  02dde9c  fmadds 1, 1, 1, 2
  02ddea0  lfs 2, 264(1)
  02ddea4  lwz 3, 540(30)
  02ddea8  fsubs 2, 5, 2
  02ddeac  cmpwi 3, -1
  02ddeb0  fsqrts 29, 1
  02ddeb4  fabs 1, 2
  02ddeb8  fdivs 29, 1, 29
  02ddebc  bt 2, 0x2ddefc
  02ddec0  lis 4, 165
  02ddec4  slwi 3, 3, 2
  02ddec8  addic 4, 4, 7136
  02ddecc  extsw 7, 3
  02dded0  addic 5, 30, 464
  02dded4  addic 6, 1, 224
  02dded8  ori 3, 31, 0
  02ddedc  lwzx 4, 4, 7
  02ddee0  bl 0x1385d0
  02ddee4  nop
  02ddee8  lfs 28, 224(1)
  02ddeec  lfs 3, 16(31)
  02ddef0  lfs 1, 228(1)
  02ddef4  lfs 4, 20(31)
  02ddef8  b 0x2ddf1c
  02ddefc  lfs 28, 464(30)
  02ddf00  stfs 28, 224(1)
  02ddf04  lfs 1, 468(30)
  02ddf08  stfs 1, 228(1)
  02ddf0c  lfs 2, 472(30)
  02ddf10  stfs 2, 232(1)
  02ddf14  lfs 2, 476(30)
  02ddf18  stfs 2, 236(1)
  02ddf1c  fsubs 3, 28, 3
  02ddf20  fsubs 2, 1, 4
  02ddf24  fmr 1, 3
  02ddf28  bl 0x5e8338
  02ddf2c  nop
  02ddf30  lis 3, 46
  02ddf34  addic 5, 30, 496
  02ddf38  addi 29, 3, -15140
  02ddf3c  ori 3, 31, 0
  02ddf40  lfs 2, 88(29)
  02ddf44  lfs 3, 80(29)
  02ddf48  lfs 4, 92(29)
  02ddf4c  bl 0xff2e8
  02ddf50  nop
  02ddf54  lfs 1, 72(31)
  02ddf58  bl 0x5e8078
  02ddf5c  nop
  02ddf60  lfs 28, 96(29)
  02ddf64  lfs 2, 72(31)
  02ddf68  fmuls 3, 1, 28
  02ddf6c  fmr 1, 2
  02ddf70  stfs 3, 208(1)
  02ddf74  bl 0x5e8128
  02ddf78  nop
  02ddf7c  fmuls 1, 1, 28
  02ddf80  lfs 2, 16(31)
  02ddf84  li 3, 0
  02ddf88  lfs 3, 208(1)
  02ddf8c  addic 4, 30, 384
  02ddf90  lfs 4, 20(31)
  02ddf94  addic 5, 1, 224
  02ddf98  fadds 2, 2, 3
  02ddf9c  addic 6, 1, 208
  02ddfa0  lfs 3, 24(31)
  02ddfa4  stw 3, 216(1)
  02ddfa8  lfs 5, 28(31)
  02ddfac  ori 3, 31, 0
  02ddfb0  stfs 3, 232(1)
  02ddfb4  fadds 3, 4, 1
  02ddfb8  stfs 1, 212(1)
  02ddfbc  stfs 5, 236(1)
  02ddfc0  stfs 2, 224(1)
  02ddfc4  stfs 3, 228(1)
  02ddfc8  lfs 28, 8(29)
  02ddfcc  fmr 1, 28
  02ddfd0  bl 0x101058
  02ddfd4  nop
  02ddfd8  rlwinm 4, 3, 0, 29, 29
  02ddfdc  lfs 3, 256(1)
  02ddfe0  lfs 1, 260(1)
  02ddfe4  cmpwi 4, 0
  02ddfe8  lbz 4, 83(31)
  02ddfec  lbz 5, 112(31)
  02ddff0  bt 2, 0x2de06c
  02ddff4  li 3, 4
  02ddff8  cmpwi 4, 1
  02ddffc  stb 3, 32(31)
  02de000  bt 2, 0x2de2e8
  02de004  li 3, 10
  02de008  li 4, 13
  02de00c  bl 0xfe484
  02de010  nop
  02de014  extsw 3, 3
  02de018  lis 4, 114
  02de01c  std 3, 344(1)
  02de020  lis 3, 46
  02de024  addi 3, 3, -15140
  02de028  li 5, 0
  02de02c  lfs 1, 56(3)
  02de030  lfs 2, -3056(4)
  02de034  lfd 3, 344(1)
  02de038  fcfid 3, 3
  02de03c  ori 3, 31, 0
  02de040  li 4, 1
  02de044  frsp 3, 3
  02de048  fadds 1, 3, 1
  02de04c  fmuls 1, 2, 1
  02de050  fctiwz 1, 1
  02de054  stfd 1, 344(1)
  02de058  lwz 6, 348(1)
  02de05c  extsw 6, 6
  02de060  bl 0xfddc0
  02de064  nop
  02de068  b 0x2de2e8
  02de06c  lfs 2, 20(31)
  02de070  lfs 4, 16(31)
  02de074  fsubs 1, 2, 1
  02de078  fsubs 2, 4, 3
  02de07c  lis 6, 46
  02de080  addi 6, 6, -15140
  02de084  fmuls 1, 1, 1
  02de088  fmadds 1, 2, 2, 1
  02de08c  lfs 2, 100(6)
  02de090  fsqrts 1, 1
  02de094  fcmpu 0, 1, 2
  02de098  cror 6, 1, 2
  02de09c  bt 6, 0x2de120
  02de0a0  fcmpu 0, 29, 28
  02de0a4  bt 1, 0x2de120
  02de0a8  li 3, 4
  02de0ac  cmpwi 4, 1
  02de0b0  stb 3, 32(31)
  02de0b4  bt 2, 0x2de2e8
  02de0b8  li 3, 10
  02de0bc  li 4, 13
  02de0c0  bl 0xfe484
  02de0c4  nop
  02de0c8  extsw 3, 3
  02de0cc  lis 4, 46
  02de0d0  std 3, 344(1)
  02de0d4  addi 3, 4, -15140
  02de0d8  lis 4, 114
  02de0dc  li 5, 0
  02de0e0  lfs 1, 56(3)
  02de0e4  lfs 2, -3056(4)
  02de0e8  lfd 3, 344(1)
  02de0ec  ori 3, 31, 0
  02de0f0  fcfid 3, 3
  02de0f4  li 4, 1
  02de0f8  frsp 3, 3
  02de0fc  fadds 1, 3, 1
  02de100  fmuls 1, 2, 1
  02de104  fctiwz 1, 1
  02de108  stfd 1, 344(1)
  02de10c  lwz 6, 348(1)
  02de110  extsw 6, 6
  02de114  bl 0xfddc0
  02de118  nop
  02de11c  b 0x2de2e8
  02de120  fcmpu 0, 29, 28
  02de124  bt 1, 0x2de1ac
  02de128  rlwinm 6, 3, 0, 30, 30
  02de12c  cmpwi 6, 0
  02de130  bf 2, 0x2de1ac
  02de134  li 3, 5
  02de138  cmpwi 4, 0
  02de13c  stb 3, 32(31)
  02de140  bt 2, 0x2de2e8
  02de144  li 3, 10
  02de148  li 4, 13
  02de14c  bl 0xfe484
  02de150  nop
  02de154  extsw 3, 3
  02de158  lis 4, 114
  02de15c  std 3, 344(1)
  02de160  lis 3, 46
  02de164  addi 3, 3, -15140
  02de168  li 5, 0
  02de16c  lfs 1, 56(3)
  02de170  lfs 2, -3056(4)
  02de174  lfd 3, 344(1)
  02de178  fcfid 3, 3
  02de17c  ori 3, 31, 0
  02de180  li 4, 0
  02de184  frsp 3, 3
  02de188  fadds 1, 3, 1
  02de18c  fmuls 1, 2, 1
  02de190  fctiwz 1, 1
  02de194  stfd 1, 344(1)
  02de198  lwz 6, 348(1)
  02de19c  extsw 6, 6
  02de1a0  bl 0xfddc0
  02de1a4  nop
  02de1a8  b 0x2de2e8
  02de1ac  rlwinm 3, 3, 0, 30, 30
  02de1b0  cmpwi 3, 0
  02de1b4  bt 2, 0x2de238
  02de1b8  cmpwi 28, 0
  02de1bc  bt 2, 0x2de238
  02de1c0  li 3, 1
  02de1c4  cmpwi 4, 2
  02de1c8  stb 3, 32(31)
  02de1cc  bt 2, 0x2de2e8
  02de1d0  li 3, 10
  02de1d4  li 4, 13
  02de1d8  bl 0xfe484
  02de1dc  nop
  02de1e0  extsw 3, 3
  02de1e4  lis 4, 46
  02de1e8  std 3, 344(1)
  02de1ec  addi 3, 4, -15140
  02de1f0  lis 4, 114
  02de1f4  li 5, 0
  02de1f8  lfs 1, 56(3)
  02de1fc  lfs 2, -3056(4)
  02de200  lfd 3, 344(1)
  02de204  ori 3, 31, 0
  02de208  fcfid 3, 3
  02de20c  li 4, 2
  02de210  frsp 3, 3
  02de214  fadds 1, 3, 1
  02de218  fmuls 1, 2, 1
  02de21c  fctiwz 1, 1
  02de220  stfd 1, 344(1)
  02de224  lwz 6, 348(1)
  02de228  extsw 6, 6
  02de22c  bl 0xfddc0
  02de230  nop
  02de234  b 0x2de2e8
  02de238  rlwinm 3, 5, 0, 30, 30
  02de23c  cmpwi 3, 0
  02de240  bt 2, 0x2de2e8
  02de244  li 3, 4
  02de248  bl 0xfc620
  02de24c  nop
  02de250  li 3, 4
  02de254  bl 0xfc620
  02de258  nop
  02de25c  li 4, 0
  02de260  li 6, 4
  02de264  subc 4, 4, 3
  02de268  li 7, 2
  02de26c  cntlzw 5, 4
  02de270  subc 6, 6, 7
  02de274  sldi 5, 5, 58
  02de278  li 3, 10
  02de27c  sradi 5, 5, 63
  02de280  li 4, 13
  02de284  and 5, 5, 6
  02de288  addc 29, 7, 5
  02de28c  bl 0xfe484
  02de290  nop
  02de294  extsw 3, 3
  02de298  lis 4, 114
  02de29c  std 3, 344(1)
  02de2a0  lis 3, 46
  02de2a4  addi 3, 3, -15140
  02de2a8  li 5, 0
  02de2ac  lfs 1, 56(3)
  02de2b0  lfs 2, -3056(4)
  02de2b4  lfd 3, 344(1)
  02de2b8  fcfid 3, 3
  02de2bc  ori 3, 31, 0
  02de2c0  ori 4, 29, 0
  02de2c4  frsp 3, 3
  02de2c8  fadds 1, 3, 1
  02de2cc  fmuls 1, 2, 1
  02de2d0  fctiwz 1, 1
  02de2d4  stfd 1, 344(1)
  02de2d8  lwz 6, 348(1)
  02de2dc  extsw 6, 6
  02de2e0  bl 0xfddc0
  02de2e4  nop
  02de2e8  li 3, 0
  02de2ec  stb 3, 188(31)
  02de2f0  b 0x2de680
  02de2f4  lbz 3, 82(31)
  02de2f8  cmpwi 3, 0
  02de2fc  bt 2, 0x2de370
  02de300  lbz 3, 83(31)
  02de304  cmpwi 3, 0
  02de308  bt 2, 0x2de370
  02de30c  li 3, 10
  02de310  li 4, 13
  02de314  bl 0xfe484
  02de318  nop
  02de31c  extsw 3, 3
  02de320  lis 4, 114
  02de324  std 3, 344(1)
  02de328  lis 3, 46
  02de32c  addi 3, 3, -15140
  02de330  li 5, 0
  02de334  lfs 1, 56(3)
  02de338  lfs 2, -3056(4)
  02de33c  lfd 3, 344(1)
  02de340  fcfid 3, 3
  02de344  ori 3, 31, 0
  02de348  li 4, 0
  02de34c  frsp 3, 3
  02de350  fadds 1, 3, 1
  02de354  fmuls 1, 2, 1
  02de358  fctiwz 1, 1
  02de35c  stfd 1, 344(1)
  02de360  lwz 6, 348(1)
  02de364  extsw 6, 6
  02de368  bl 0xfddc0
  02de36c  nop
  02de370  lfs 1, 72(31)
  02de374  bl 0x5e8078
  02de378  nop
  02de37c  lis 29, 114
  02de380  lfs 2, 516(30)
  02de384  fmr 30, 1
  02de388  lfs 1, 72(31)
  02de38c  lfs 3, -3052(29)
  02de390  fmuls 29, 2, 3
  02de394  bl 0x5e8128
  02de398  nop
  02de39c  lfs 2, 516(30)
  02de3a0  lfs 3, -3052(29)
  02de3a4  lis 3, 164
  02de3a8  lfs 6, 16(31)
  02de3ac  fmuls 5, 2, 3
  02de3b0  lfs 7, 20(31)
  02de3b4  fmadds 4, 29, 30, 6
  02de3b8  lfs 26, 24(31)
  02de3bc  lfs 2, 28(31)
  02de3c0  fmr 3, 26
  02de3c4  stfs 2, 252(1)
  02de3c8  lwz 29, -28500(3)
  02de3cc  stfs 26, 248(1)
  02de3d0  cmpwi 29, 0
  02de3d4  fmadds 5, 5, 1, 7
  02de3d8  fmr 1, 4
  02de3dc  stfs 4, 240(1)
  02de3e0  fmr 2, 5
  02de3e4  stfs 5, 244(1)
  02de3e8  bt 2, 0x2de54c
  02de3ec  lis 3, 46
  02de3f0  addi 3, 3, -15140
  02de3f4  lfs 30, 96(3)
  02de3f8  lfs 29, 0(3)
  02de3fc  lfs 28, 128(3)
  02de400  lfs 27, 132(3)
  02de404  cmpw 29, 31
  02de408  bt 2, 0x2de538
  02de40c  lbz 3, 32(29)
  02de410  cmpwi 3, 128
  02de414  bf 0, 0x2de538
  02de418  lhz 3, 166(29)
  02de41c  cmpwi 3, 0
  02de420  cmpwi 1, 3, 193
  02de424  bt 2, 0x2de42c
  02de428  bf 6, 0x2de538
  02de42c  lfs 2, 20(29)
  02de430  lfs 1, 16(29)
  02de434  fsubs 8, 5, 2
  02de438  fsubs 9, 4, 1
  02de43c  fmuls 8, 8, 8
  02de440  fmadds 8, 9, 9, 8
  02de444  fsqrts 8, 8
  02de448  fcmpu 0, 8, 30
  02de44c  cror 6, 1, 2
  02de450  bt 6, 0x2de538
  02de454  fsubs 1, 1, 6
  02de458  fsubs 2, 2, 7
  02de45c  lfs 25, 72(31)
  02de460  bl 0x5e8338
  02de464  nop
  02de468  fmr 2, 1
  02de46c  fmr 1, 25
  02de470  bl 0x5025e0
  02de474  nop
  02de478  fcmpu 0, 1, 29
  02de47c  lfs 6, 72(31)
  02de480  cror 6, 0, 2
  02de484  bt 6, 0x2de498
  02de488  lis 3, 114
  02de48c  fmr 1, 28
  02de490  lfs 4, -3052(3)
  02de494  b 0x2de4a4
  02de498  lis 3, 114
  02de49c  fmr 1, 27
  02de4a0  lfs 4, -3052(3)
  02de4a4  fmuls 2, 4, 1
  02de4a8  fmr 1, 6
  02de4ac  bl 0x502578
  02de4b0  nop
  02de4b4  stfs 1, 72(31)
  02de4b8  lfs 1, 16(31)
  02de4bc  lfs 2, 16(29)
  02de4c0  lfs 3, 20(31)
  02de4c4  fsubs 2, 1, 2
  02de4c8  lfs 4, 24(31)
  02de4cc  addic 3, 1, 240
  02de4d0  lfs 5, 28(31)
  02de4d4  fmr 1, 30
  02de4d8  ori 4, 3, 0
  02de4dc  stfs 2, 240(1)
  02de4e0  lfs 2, 20(29)
  02de4e4  fsubs 2, 3, 2
  02de4e8  stfs 2, 244(1)
  02de4ec  lfs 2, 24(29)
  02de4f0  stfs 5, 252(1)
  02de4f4  fsubs 2, 4, 2
  02de4f8  stfs 2, 248(1)
  02de4fc  bl 0x5e7f98
  02de500  nop
  02de504  lfs 4, 240(1)
  02de508  lfs 1, 16(29)
  02de50c  fmr 3, 26
  02de510  lfs 5, 244(1)
  02de514  fadds 4, 4, 1
  02de518  lfs 6, 16(31)
  02de51c  lfs 7, 20(31)
  02de520  stfs 4, 240(1)
  02de524  lfs 1, 20(29)
  02de528  stfs 26, 248(1)
  02de52c  fadds 5, 5, 1
  02de530  lfs 26, 24(31)
  02de534  stfs 5, 244(1)
  02de538  lwz 29, 40(29)
  02de53c  fmr 2, 5
  02de540  cmpwi 29, 0
  02de544  fmr 1, 4
  02de548  bf 2, 0x2de404
  02de54c  lis 3, 46
  02de550  stfs 1, 16(31)
  02de554  li 4, 0
  02de558  addi 29, 3, -15140
  02de55c  lfs 1, 252(1)
  02de560  stfs 2, 20(31)
  02de564  addic 3, 31, 16
  02de568  stfs 3, 24(31)
  02de56c  stfs 1, 28(31)
  02de570  lfs 29, 56(29)
  02de574  fmr 1, 29
  02de578  bl 0xffb70
  02de57c  nop
  02de580  lis 3, 114
  02de584  lfs 2, 120(29)
  02de588  lfs 3, 408(30)
  02de58c  fmr 30, 1
  02de590  lfs 1, -3048(3)
  02de594  fnmsubs 1, 1, 2, 3
  02de598  stfs 1, 408(30)
  02de59c  lfs 2, 24(31)
  02de5a0  fadds 1, 2, 1
  02de5a4  fcmpu 0, 1, 30
  02de5a8  stfs 1, 24(31)
  02de5ac  cror 6, 1, 2
  02de5b0  bt 6, 0x2de5c0
  02de5b4  li 3, 0
  02de5b8  stw 3, 408(30)
  02de5bc  stfs 30, 24(31)
  02de5c0  lwz 3, 536(30)
  02de5c4  cmpwi 3, 0
  02de5c8  bt 2, 0x2de60c
  02de5cc  lfs 1, 20(31)
  02de5d0  lfs 2, 20(3)
  02de5d4  lfs 3, 16(31)
  02de5d8  fsubs 1, 1, 2
  02de5dc  lfs 2, 16(3)
  02de5e0  fsubs 2, 3, 2
  02de5e4  lhz 3, 534(30)
  02de5e8  extsh 3, 3
  02de5ec  fmuls 1, 1, 1
  02de5f0  fmadds 1, 2, 2, 1
  02de5f4  fsqrts 28, 1
  02de5f8  bl 0x502730
  02de5fc  nop
  02de600  fcmpu 0, 28, 1
  02de604  cror 6, 0, 2
  02de608  bt 6, 0x2de678
  02de60c  li 3, 5
  02de610  lbz 4, 83(31)
  02de614  cmpwi 4, 0
  02de618  stb 3, 32(31)
  02de61c  bt 2, 0x2de678
  02de620  li 3, 10
  02de624  li 4, 13
  02de628  bl 0xfe484
  02de62c  nop
  02de630  extsw 3, 3
  02de634  li 4, 0
  02de638  std 3, 344(1)
  02de63c  lis 3, 114
  02de640  li 5, 0
  02de644  lfs 1, -3056(3)
  02de648  lfd 2, 344(1)
  02de64c  ori 3, 31, 0
  02de650  fcfid 2, 2
  02de654  frsp 2, 2
  02de658  fadds 2, 2, 29
  02de65c  fmuls 1, 1, 2
  02de660  fctiwz 1, 1
  02de664  stfd 1, 344(1)
  02de668  lwz 6, 348(1)
  02de66c  extsw 6, 6
  02de670  bl 0xfddc0
  02de674  nop
  02de678  li 3, 0
  02de67c  stb 3, 188(31)
  02de680  fcmpu 0, 30, 31
  02de684  bf 2, 0x2de6a8
  02de688  lis 3, 46
  02de68c  li 4, 0
  02de690  addi 5, 3, -15140
  02de694  addic 3, 31, 16
  02de698  lfs 1, 56(5)
  02de69c  bl 0xffb70
  02de6a0  nop
  02de6a4  fmr 30, 1
  02de6a8  lis 3, 46
  02de6ac  addi 3, 3, -15140
  02de6b0  lfs 1, 0(3)
  02de6b4  fcmpu 0, 30, 1
  02de6b8  bt 2, 0x2de720
  02de6bc  lfs 1, 24(31)
  02de6c0  lis 3, 46
  02de6c4  fsubs 1, 1, 30
  02de6c8  addi 3, 3, -15140
  02de6cc  lfs 2, 84(3)
  02de6d0  fcmpu 0, 1, 2
  02de6d4  cror 6, 1, 2
  02de6d8  bt 6, 0x2de720
  02de6dc  bl 0x60780
  02de6e0  nop
  02de6e4  cmpwi 3, 1
  02de6e8  bf 2, 0x2de720
  02de6ec  lis 3, 46
  02de6f0  addic 4, 31, 16
  02de6f4  addi 5, 3, -15140
  02de6f8  ori 3, 31, 0
  02de6fc  li 6, 6
  02de700  lfs 1, 56(5)
  02de704  lfs 2, 108(5)
  02de708  bl 0x10fb28
  02de70c  nop
  02de710  ori 3, 31, 0
  02de714  bl 0xefb38
  02de718  nop
  02de71c  b 0x2de730
  02de720  addic 4, 30, 272
  02de724  ori 3, 31, 0
  02de728  bl 0x10c9a0
  02de72c  nop
  02de730  ld 0, 480(1)
  02de734  mtlr 0
  02de738  lfd 25, 408(1)
  02de73c  lfd 26, 416(1)
  02de740  lfd 27, 424(1)
  02de744  lfd 28, 432(1)
  02de748  lfd 29, 440(1)
  02de74c  lfd 30, 448(1)
  02de750  lfd 31, 456(1)
  02de754  ld 27, 368(1)
  02de758  ld 28, 376(1)
  02de75c  ld 29, 384(1)
  02de760  ld 30, 392(1)
  02de764  ld 31, 400(1)
  02de768  addi 1, 1, 464
  02de76c  blr
