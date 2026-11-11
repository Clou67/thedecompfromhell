# game/update/moby914.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M914_004af35c:   # 0x4af35c, 0x14 bytes
  04af35c  lis 3, 143
  04af360  lis 4, 1
  04af364  addic 3, 3, 16824
  04af368  stw 4, 72(3)
  04af36c  blr

M914_004af370:   # 0x4af370, 0xf4 bytes
  04af370  stdu 1, -160(1)
  04af374  mflr 0
  04af378  std 0, 176(1)
  04af37c  std 31, 152(1)
  04af380  lis 4, 161
  04af384  ori 31, 3, 0
  04af388  lwz 3, 1800(4)
  04af38c  std 30, 144(1)
  04af390  std 29, 136(1)
  04af394  std 28, 128(1)
  04af398  std 27, 120(1)
  04af39c  cmpwi 3, 2
  04af3a0  bf 2, 0x4af440
  04af3a4  lis 3, 151
  04af3a8  lbz 3, -16268(3)
  04af3ac  cmpwi 3, 0
  04af3b0  bt 2, 0x4af440
  04af3b4  lis 28, 150
  04af3b8  li 27, 0
  04af3bc  addic 28, 28, -12976
  04af3c0  lhz 3, 68(28)
  04af3c4  extsh 4, 3
  04af3c8  cmpwi 4, 0
  04af3cc  bf 1, 0x4af440
  04af3d0  lis 29, 162
  04af3d4  ori 30, 28, 0
  04af3d8  addic 29, 29, -16512
  04af3dc  lwz 4, 376(30)
  04af3e0  lhz 5, 166(31)
  04af3e4  extsh 5, 5
  04af3e8  lhz 6, 166(4)
  04af3ec  extsh 6, 6
  04af3f0  cmpw 6, 5
  04af3f4  bf 2, 0x4af42c
  04af3f8  lbz 5, 1(29)
  04af3fc  cmpwi 5, 0
  04af400  bf 2, 0x4af42c
  04af404  ori 3, 4, 0
  04af408  li 4, 2
  04af40c  ori 5, 29, 0
  04af410  bl 0xf0ea8
  04af414  nop
  04af418  lis 4, 16432
  04af41c  lhz 3, 68(28)
  04af420  stw 4, 32(29)
  04af424  stw 4, 36(29)
  04af428  stw 4, 40(29)
  04af42c  extsh 4, 3
  04af430  addic 27, 27, 1
  04af434  addic 30, 30, 4
  04af438  cmpw 27, 4
  04af43c  bt 0, 0x4af3dc
  04af440  ld 0, 176(1)
  04af444  mtlr 0
  04af448  ld 27, 120(1)
  04af44c  ld 28, 128(1)
  04af450  ld 29, 136(1)
  04af454  ld 30, 144(1)
  04af458  ld 31, 152(1)
  04af45c  addi 1, 1, 160
  04af460  blr

UpdateMoby_914:   # 0x4af4b0, 0x73c bytes
  04af4b0  stdu 1, -416(1)
  04af4b4  mflr 0
  04af4b8  std 0, 432(1)
  04af4bc  stfd 21, 328(1)
  04af4c0  stfd 22, 336(1)
  04af4c4  stfd 23, 344(1)
  04af4c8  stfd 24, 352(1)
  04af4cc  stfd 25, 360(1)
  04af4d0  stfd 26, 368(1)
  04af4d4  stfd 27, 376(1)
  04af4d8  stfd 28, 384(1)
  04af4dc  stfd 29, 392(1)
  04af4e0  stfd 30, 400(1)
  04af4e4  stfd 31, 408(1)
  04af4e8  std 30, 312(1)
  04af4ec  lbz 4, 49(3)
  04af4f0  std 31, 320(1)
  04af4f4  ori 30, 3, 0
  04af4f8  lwz 31, 120(3)
  04af4fc  std 29, 304(1)
  04af500  std 28, 296(1)
  04af504  cmpwi 4, 0
  04af508  bt 2, 0x4af574
  04af50c  lis 3, 149
  04af510  lfs 1, 20(30)
  04af514  lfs 2, 16(30)
  04af518  addic 3, 3, 5056
  04af51c  lfs 3, 324(3)
  04af520  lfs 4, 320(3)
  04af524  fsubs 1, 1, 3
  04af528  fsubs 2, 2, 4
  04af52c  lfs 3, 24(30)
  04af530  lfs 4, 328(3)
  04af534  fsubs 3, 3, 4
  04af538  lis 3, 75
  04af53c  fmuls 1, 1, 1
  04af540  addi 3, 3, -2972
  04af544  fmadds 1, 2, 2, 1
  04af548  lfs 2, 0(3)
  04af54c  fmadds 1, 3, 3, 1
  04af550  fsqrts 1, 1
  04af554  fcmpu 0, 1, 2
  04af558  cror 6, 1, 2
  04af55c  bt 6, 0x4af574
  04af560  ori 3, 30, 0
  04af564  bl 0x106360
  04af568  nop
  04af56c  li 3, 21
  04af570  stb 3, 127(30)
  04af574  lis 29, 165
  04af578  lhz 4, 178(30)
  04af57c  addic 29, 29, 17860
  04af580  extsh 3, 4
  04af584  lbzx 5, 29, 3
  04af588  cmpwi 5, 0
  04af58c  bf 2, 0x4af5d4
  04af590  lis 6, 151
  04af594  lis 5, 161
  04af598  srawi 3, 3, 5
  04af59c  addic 5, 5, -13028
  04af5a0  sldi 3, 3, 2
  04af5a4  lwz 6, -25488(6)
  04af5a8  clrlwi 4, 4, 27
  04af5ac  addc 3, 3, 5
  04af5b0  slwi 5, 6, 8
  04af5b4  clrldi 3, 3, 32
  04af5b8  extsw 5, 5
  04af5bc  li 6, 1
  04af5c0  slw 4, 6, 4
  04af5c4  lwzx 3, 3, 5
  04af5c8  and 3, 3, 4
  04af5cc  cmpwi 3, 0
  04af5d0  bt 2, 0x4af5fc
  04af5d4  lbz 3, 32(30)
  04af5d8  cmpwi 3, 3
  04af5dc  bt 2, 0x4af5fc
  04af5e0  li 6, 3
  04af5e4  ori 3, 30, 0
  04af5e8  li 4, 1
  04af5ec  li 5, 0
  04af5f0  stb 6, 32(30)
  04af5f4  bl 0xfdcf0
  04af5f8  nop
  04af5fc  ori 3, 30, 0
  04af600  li 4, -1
  04af604  li 5, 0
  04af608  bl 0x10675c
  04af60c  nop
  04af610  cmpwi 3, 0
  04af614  bt 2, 0x4af7ac
  04af618  lwz 4, 32(3)
  04af61c  cmpwi 4, 0
  04af620  bt 2, 0x4af7ac
  04af624  lbz 3, 40(3)
  04af628  cmpwi 3, 3
  04af62c  bf 2, 0x4af7ac
  04af630  lhz 4, 178(30)
  04af634  extsh 3, 4
  04af638  lbzx 5, 29, 3
  04af63c  cmpwi 5, 0
  04af640  bf 2, 0x4af7ac
  04af644  lis 5, 151
  04af648  lis 29, 161
  04af64c  srawi 3, 3, 5
  04af650  addic 29, 29, -13028
  04af654  sldi 3, 3, 2
  04af658  lwz 5, -25488(5)
  04af65c  addc 3, 3, 29
  04af660  slwi 5, 5, 8
  04af664  clrldi 3, 3, 32
  04af668  extsw 5, 5
  04af66c  li 6, 1
  04af670  clrlwi 4, 4, 27
  04af674  slw 4, 6, 4
  04af678  lwzx 3, 3, 5
  04af67c  and 3, 3, 4
  04af680  cmpwi 3, 0
  04af684  bf 2, 0x4af7ac
  04af688  li 3, 5
  04af68c  bl 0x11b728
  04af690  nop
  04af694  lis 3, 75
  04af698  li 6, 0
  04af69c  addi 7, 3, -2972
  04af6a0  li 28, 1
  04af6a4  li 11, -1
  04af6a8  addic 4, 1, 192
  04af6ac  lfs 1, 4(7)
  04af6b0  stw 6, 192(1)
  04af6b4  stw 6, 196(1)
  04af6b8  addic 5, 1, 208
  04af6bc  stw 6, 200(1)
  04af6c0  ori 3, 30, 0
  04af6c4  stw 6, 204(1)
  04af6c8  li 8, 10
  04af6cc  lfs 2, 16(30)
  04af6d0  li 9, 3
  04af6d4  li 10, 16
  04af6d8  stfs 2, 208(1)
  04af6dc  lfs 2, 20(30)
  04af6e0  stfs 2, 212(1)
  04af6e4  lfs 2, 28(30)
  04af6e8  lfs 3, 24(30)
  04af6ec  stfs 2, 220(1)
  04af6f0  lfs 6, 8(7)
  04af6f4  std 6, 144(1)
  04af6f8  fmr 2, 1
  04af6fc  fadds 3, 3, 6
  04af700  std 28, 160(1)
  04af704  std 28, 168(1)
  04af708  std 11, 176(1)
  04af70c  std 6, 184(1)
  04af710  stfs 3, 216(1)
  04af714  lfs 3, 12(7)
  04af718  lfs 4, 16(7)
  04af71c  lfs 5, 20(7)
  04af720  lfs 7, 24(7)
  04af724  bl 0x10e030
  04af728  nop
  04af72c  li 6, 3
  04af730  ori 3, 30, 0
  04af734  li 4, 1
  04af738  li 5, 0
  04af73c  stb 6, 32(30)
  04af740  bl 0xfdcf0
  04af744  nop
  04af748  lhz 3, 178(30)
  04af74c  lis 4, 151
  04af750  extsh 5, 3
  04af754  extsh 6, 3
  04af758  srawi 5, 5, 5
  04af75c  lis 7, 165
  04af760  lwz 4, -25488(4)
  04af764  sldi 5, 5, 2
  04af768  slwi 4, 4, 8
  04af76c  addc 5, 5, 29
  04af770  extsw 4, 4
  04af774  clrldi 5, 5, 32
  04af778  srawi 6, 6, 5
  04af77c  clrlwi 8, 3, 27
  04af780  addic 7, 7, 19920
  04af784  sldi 6, 6, 2
  04af788  slw 8, 28, 8
  04af78c  lwzx 9, 5, 4
  04af790  clrlwi 3, 3, 27
  04af794  or 8, 9, 8
  04af798  slw 3, 28, 3
  04af79c  lwzx 9, 7, 6
  04af7a0  or 3, 9, 3
  04af7a4  stwx 8, 5, 4
  04af7a8  stwx 3, 7, 6
  04af7ac  lis 3, 151
  04af7b0  li 4, 255
  04af7b4  addic 3, 3, -16064
  04af7b8  stb 4, 164(30)
  04af7bc  lbz 3, 12(3)
  04af7c0  cmpwi 3, 0
  04af7c4  bt 2, 0x4af7d4
  04af7c8  lbz 3, 32(30)
  04af7cc  cmpwi 3, 3
  04af7d0  bf 2, 0x4afba0
  04af7d4  lbz 3, 32(30)
  04af7d8  cmpwi 3, 1
  04af7dc  cmpwi 1, 3, 3
  04af7e0  cmpwi 6, 3, 2
  04af7e4  cmpwi 7, 3, 0
  04af7e8  bt 1, 0x4af7fc
  04af7ec  cmpwi 3, -1
  04af7f0  bf 1, 0x4afba0
  04af7f4  bf 29, 0x4af808
  04af7f8  b 0x4af85c
  04af7fc  bf 25, 0x4af8a8
  04af800  bf 5, 0x4af904
  04af804  b 0x4afba0
  04af808  lis 3, 151
  04af80c  li 6, 1
  04af810  addic 5, 3, -25376
  04af814  ori 3, 30, 0
  04af818  ori 4, 31, 0
  04af81c  lwz 5, 8320(5)
  04af820  ld 5, 56(5)
  04af824  stb 6, 32(30)
  04af828  std 5, 56(30)
  04af82c  bl 0x4d3720
  04af830  nop
  04af834  lis 3, 151
  04af838  addic 3, 3, -16400
  04af83c  lbz 3, 25(3)
  04af840  cmpwi 3, 0
  04af844  bt 2, 0x4afba0
  04af848  li 3, 2
  04af84c  li 4, 1
  04af850  sth 3, 54(31)
  04af854  sth 4, 4(31)
  04af858  b 0x4afba0
  04af85c  ori 3, 30, 0
  04af860  ori 4, 31, 0
  04af864  bl 0x4d3870
  04af868  nop
  04af86c  cmpwi 3, 0
  04af870  bt 2, 0x4afba0
  04af874  lis 3, 151
  04af878  li 4, 1
  04af87c  addic 5, 3, -16400
  04af880  lis 3, 75
  04af884  addi 6, 3, -2972
  04af888  ori 3, 30, 0
  04af88c  stb 4, 25(5)
  04af890  lfs 1, 28(6)
  04af894  bl 0x119488
  04af898  nop
  04af89c  li 3, 2
  04af8a0  stb 3, 32(30)
  04af8a4  b 0x4afba0
  04af8a8  lis 3, 161
  04af8ac  lwz 3, 1800(3)
  04af8b0  cmpwi 3, 2
  04af8b4  bt 2, 0x4afba0
  04af8b8  li 3, 1
  04af8bc  stb 3, 32(30)
  04af8c0  lhz 3, 4(31)
  04af8c4  cmpwi 3, 2
  04af8c8  bf 2, 0x4afba0
  04af8cc  lwz 31, 76(31)
  04af8d0  cmpwi 31, -1
  04af8d4  bt 2, 0x4afba0
  04af8d8  lis 3, 165
  04af8dc  slwi 4, 31, 7
  04af8e0  lwz 3, 7128(3)
  04af8e4  addc 3, 3, 4
  04af8e8  addic 4, 3, 48
  04af8ec  addic 5, 3, 112
  04af8f0  clrldi 3, 4, 32
  04af8f4  clrldi 4, 5, 32
  04af8f8  bl 0x151e70
  04af8fc  nop
  04af900  b 0x4afba0
  04af904  bl 0xfcc68
  04af908  nop
  04af90c  lis 3, 75
  04af910  addi 31, 3, -2972
  04af914  lfs 31, 32(31)
  04af918  lfs 30, 36(31)
  04af91c  fadds 1, 1, 31
  04af920  lfs 29, 40(31)
  04af924  lfs 28, 44(31)
  04af928  lfs 27, 48(31)
  04af92c  lfs 26, 52(31)
  04af930  lfs 25, 56(31)
  04af934  lfs 24, 4(31)
  04af938  lfs 23, 60(31)
  04af93c  fsubs 2, 30, 1
  04af940  fsubs 3, 29, 1
  04af944  fsub 5, 1, 2
  04af948  fsel 1, 5, 2, 1
  04af94c  fsub 2, 3, 1
  04af950  fsel 3, 2, 3, 1
  04af954  fmr 1, 24
  04af958  fmr 2, 23
  04af95c  fmuls 4, 3, 3
  04af960  fmuls 5, 4, 3
  04af964  fmuls 6, 4, 5
  04af968  fmadds 3, 5, 28, 3
  04af96c  fmuls 5, 4, 6
  04af970  fmadds 3, 6, 27, 3
  04af974  fmuls 4, 4, 5
  04af978  fmadds 3, 5, 26, 3
  04af97c  fmadds 22, 4, 25, 3
  04af980  bl 0xfcbe8
  04af984  nop
  04af988  lis 29, 114
  04af98c  lfs 2, -3052(29)
  04af990  fmuls 1, 1, 2
  04af994  fmuls 1, 1, 22
  04af998  stfs 1, 224(1)
  04af99c  bl 0xfcc68
  04af9a0  nop
  04af9a4  fsubs 2, 30, 1
  04af9a8  fsubs 3, 29, 1
  04af9ac  fsub 4, 1, 2
  04af9b0  fsel 1, 4, 2, 1
  04af9b4  fsub 2, 3, 1
  04af9b8  fsel 3, 2, 3, 1
  04af9bc  fmr 1, 24
  04af9c0  fmr 2, 23
  04af9c4  fmuls 4, 3, 3
  04af9c8  fmuls 5, 4, 3
  04af9cc  fmuls 6, 4, 5
  04af9d0  fmadds 3, 5, 28, 3
  04af9d4  fmuls 5, 4, 6
  04af9d8  fmadds 3, 6, 27, 3
  04af9dc  fmuls 4, 4, 5
  04af9e0  fmadds 3, 5, 26, 3
  04af9e4  fmadds 23, 4, 25, 3
  04af9e8  bl 0xfcbe8
  04af9ec  nop
  04af9f0  lfs 2, -3052(29)
  04af9f4  li 29, 0
  04af9f8  fmuls 2, 1, 2
  04af9fc  fmr 1, 24
  04afa00  stw 29, 232(1)
  04afa04  fmuls 2, 2, 23
  04afa08  stfs 2, 228(1)
  04afa0c  lfs 23, 8(31)
  04afa10  fmr 2, 23
  04afa14  bl 0xfcbe8
  04afa18  nop
  04afa1c  fmr 22, 1
  04afa20  bl 0xfcc68
  04afa24  nop
  04afa28  fadds 1, 1, 31
  04afa2c  lfs 31, 64(31)
  04afa30  fsubs 2, 30, 1
  04afa34  fsubs 3, 29, 1
  04afa38  fsub 4, 1, 2
  04afa3c  fsel 1, 4, 2, 1
  04afa40  fsub 2, 3, 1
  04afa44  fsel 3, 2, 3, 1
  04afa48  fmr 1, 24
  04afa4c  fmr 2, 31
  04afa50  fmuls 4, 3, 3
  04afa54  fmuls 5, 4, 3
  04afa58  fmuls 6, 4, 5
  04afa5c  fmadds 3, 5, 28, 3
  04afa60  fmuls 5, 4, 6
  04afa64  fmadds 3, 6, 27, 3
  04afa68  fmuls 4, 4, 5
  04afa6c  fmadds 3, 5, 26, 3
  04afa70  fmadds 21, 4, 25, 3
  04afa74  bl 0xfcbe8
  04afa78  nop
  04afa7c  fmuls 3, 21, 1
  04afa80  fmr 1, 24
  04afa84  fmr 2, 23
  04afa88  fmuls 3, 3, 22
  04afa8c  stfs 3, 240(1)
  04afa90  bl 0xfcbe8
  04afa94  nop
  04afa98  fmr 23, 1
  04afa9c  bl 0xfcc68
  04afaa0  nop
  04afaa4  fsubs 2, 30, 1
  04afaa8  fsubs 3, 29, 1
  04afaac  fsub 4, 1, 2
  04afab0  fsel 1, 4, 2, 1
  04afab4  fsub 2, 3, 1
  04afab8  fsel 3, 2, 3, 1
  04afabc  fmr 1, 24
  04afac0  fmr 2, 31
  04afac4  fmuls 4, 3, 3
  04afac8  fmuls 5, 4, 3
  04afacc  fmuls 6, 4, 5
  04afad0  fmadds 3, 5, 28, 3
  04afad4  fmuls 5, 4, 6
  04afad8  fmadds 3, 6, 27, 3
  04afadc  fmuls 4, 4, 5
  04afae0  fmadds 3, 5, 26, 3
  04afae4  fmadds 30, 4, 25, 3
  04afae8  bl 0xfcbe8
  04afaec  nop
  04afaf0  fmuls 1, 30, 1
  04afaf4  addic 3, 1, 256
  04afaf8  stw 29, 248(1)
  04afafc  addic 4, 1, 240
  04afb00  addic 5, 30, 16
  04afb04  fmuls 1, 1, 23
  04afb08  stfs 1, 244(1)
  04afb0c  bl 0x502b08
  04afb10  nop
  04afb14  li 3, 3
  04afb18  bl 0xfc620
  04afb1c  nop
  04afb20  cmpwi 3, 0
  04afb24  bf 2, 0x4afba0
  04afb28  lis 3, 75
  04afb2c  li 4, 120
  04afb30  addi 5, 3, -2972
  04afb34  li 3, 60
  04afb38  lfs 1, 68(5)
  04afb3c  fmr 30, 1
  04afb40  bl 0xfe484
  04afb44  nop
  04afb48  extsw 3, 3
  04afb4c  lis 5, 8224
  04afb50  std 3, 272(1)
  04afb54  lis 3, 114
  04afb58  lis 6, 127
  04afb5c  addic 4, 1, 224
  04afb60  ori 5, 5, 8224
  04afb64  lfs 2, -3056(3)
  04afb68  lfd 1, 272(1)
  04afb6c  fcfid 3, 1
  04afb70  addic 3, 1, 240
  04afb74  fmr 1, 30
  04afb78  ori 6, 6, 32639
  04afb7c  frsp 3, 3
  04afb80  fadds 3, 3, 31
  04afb84  fmuls 2, 2, 3
  04afb88  fctiwz 2, 2
  04afb8c  stfd 2, 272(1)
  04afb90  lwz 8, 276(1)
  04afb94  extsw 8, 8
  04afb98  bl 0x126dd8
  04afb9c  nop
  04afba0  ld 0, 432(1)
  04afba4  mtlr 0
  04afba8  lfd 21, 328(1)
  04afbac  lfd 22, 336(1)
  04afbb0  lfd 23, 344(1)
  04afbb4  lfd 24, 352(1)
  04afbb8  lfd 25, 360(1)
  04afbbc  lfd 26, 368(1)
  04afbc0  lfd 27, 376(1)
  04afbc4  lfd 28, 384(1)
  04afbc8  lfd 29, 392(1)
  04afbcc  lfd 30, 400(1)
  04afbd0  lfd 31, 408(1)
  04afbd4  ld 28, 296(1)
  04afbd8  ld 29, 304(1)
  04afbdc  ld 30, 312(1)
  04afbe0  ld 31, 320(1)
  04afbe4  addi 1, 1, 416
  04afbe8  blr
