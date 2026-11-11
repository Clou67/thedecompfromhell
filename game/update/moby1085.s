# game/update/moby1085.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1089_001ba794:   # 0x1ba794, 0x22c bytes
  01ba794  stdu 1, -384(1)
  01ba798  mflr 0
  01ba79c  std 0, 400(1)
  01ba7a0  lis 3, 118
  01ba7a4  lwz 3, 14920(3)
  01ba7a8  std 31, 376(1)
  01ba7ac  std 30, 368(1)
  01ba7b0  std 29, 360(1)
  01ba7b4  std 28, 352(1)
  01ba7b8  std 27, 344(1)
  01ba7bc  std 26, 336(1)
  01ba7c0  std 25, 328(1)
  01ba7c4  extsw 3, 3
  01ba7c8  bl 0x685c4
  01ba7cc  nop
  01ba7d0  std 3, 296(1)
  01ba7d4  lis 9, 0
  01ba7d8  li 3, 0
  01ba7dc  li 4, 0
  01ba7e0  li 5, 1
  01ba7e4  li 6, 1
  01ba7e8  li 7, 1
  01ba7ec  li 8, 0
  01ba7f0  ori 9, 9, 65424
  01ba7f4  bl 0x502fd4
  01ba7f8  nop
  01ba7fc  std 3, 304(1)
  01ba800  li 4, 0
  01ba804  li 3, 0
  01ba808  li 5, 0
  01ba80c  li 6, 0
  01ba810  li 7, 0
  01ba814  li 8, 0
  01ba818  bl 0x502f08
  01ba81c  nop
  01ba820  lis 4, 239
  01ba824  std 3, 288(1)
  01ba828  lis 5, 118
  01ba82c  lis 6, 118
  01ba830  lis 7, 239
  01ba834  lis 8, 118
  01ba838  lwz 3, -1640(4)
  01ba83c  lwz 4, 14924(5)
  01ba840  lwz 5, 14912(6)
  01ba844  lwz 6, -1636(7)
  01ba848  ori 7, 4, 0
  01ba84c  lwz 8, 14916(8)
  01ba850  ori 4, 5, 0
  01ba854  ori 5, 6, 0
  01ba858  ori 6, 8, 0
  01ba85c  bl 0x502ea8
  01ba860  nop
  01ba864  std 3, 312(1)
  01ba868  addic 3, 1, 112
  01ba86c  bl 0x500af8
  01ba870  nop
  01ba874  lis 3, 118
  01ba878  lis 4, 118
  01ba87c  lis 30, 118
  01ba880  lis 28, 118
  01ba884  lis 31, 118
  01ba888  lfs 1, -32520(3)
  01ba88c  lis 26, 118
  01ba890  lis 27, 118
  01ba894  stfs 1, 168(1)
  01ba898  lwz 3, 14928(4)
  01ba89c  lis 29, 161
  01ba8a0  li 25, 0
  01ba8a4  stw 3, 252(1)
  01ba8a8  stw 3, 248(1)
  01ba8ac  addic 26, 26, -32512
  01ba8b0  stw 3, 244(1)
  01ba8b4  addic 27, 27, -29952
  01ba8b8  stw 3, 240(1)
  01ba8bc  addic 28, 28, -29948
  01ba8c0  addic 29, 29, 24396
  01ba8c4  addic 30, 30, -30976
  01ba8c8  addic 31, 31, -30974
  01ba8cc  li 7, 4
  01ba8d0  ori 6, 1, 0
  01ba8d4  addic 5, 1, 176
  01ba8d8  ori 4, 30, 0
  01ba8dc  ori 3, 31, 0
  01ba8e0  mtctr 7
  01ba8e4  lhz 8, 0(4)
  01ba8e8  lis 7, 118
  01ba8ec  extsh 8, 8
  01ba8f0  sldi 8, 8, 4
  01ba8f4  addc 8, 8, 26
  01ba8f8  lfs 1, 14936(7)
  01ba8fc  clrldi 8, 8, 32
  01ba900  addic 4, 4, 4
  01ba904  lfs 2, 0(8)
  01ba908  lhz 9, 0(3)
  01ba90c  fmuls 1, 2, 1
  01ba910  extsh 9, 9
  01ba914  addic 3, 3, 4
  01ba918  sldi 9, 9, 3
  01ba91c  stfs 1, 0(5)
  01ba920  lfs 1, 4(8)
  01ba924  lfs 2, 14936(7)
  01ba928  fmuls 1, 1, 2
  01ba92c  stfs 1, 4(5)
  01ba930  lfs 1, 8(8)
  01ba934  lfs 2, 14936(7)
  01ba938  fmuls 1, 1, 2
  01ba93c  stfs 1, 8(5)
  01ba940  lfs 1, 12(8)
  01ba944  stfs 1, 12(5)
  01ba948  lfsx 1, 27, 9
  01ba94c  addic 5, 5, 16
  01ba950  lfsx 2, 28, 9
  01ba954  stfs 1, 256(6)
  01ba958  stfs 2, 260(6)
  01ba95c  addic 6, 6, 8
  01ba960  bdnz 0x1ba8e4
  01ba964  addic 4, 1, 112
  01ba968  addic 3, 1, 176
  01ba96c  lwz 6, 28(29)
  01ba970  li 5, 0
  01ba974  li 7, 9
  01ba978  bl 0x72280
  01ba97c  nop
  01ba980  addic 25, 25, 1
  01ba984  addic 30, 30, 16
  01ba988  cmpwi 25, 64
  01ba98c  addic 31, 31, 16
  01ba990  bt 0, 0x1ba8cc
  01ba994  ld 0, 400(1)
  01ba998  mtlr 0
  01ba99c  ld 25, 328(1)
  01ba9a0  ld 26, 336(1)
  01ba9a4  ld 27, 344(1)
  01ba9a8  ld 28, 352(1)
  01ba9ac  ld 29, 360(1)
  01ba9b0  ld 30, 368(1)
  01ba9b4  ld 31, 376(1)
  01ba9b8  addi 1, 1, 384
  01ba9bc  blr

M1089_001ba9c0:   # 0x1ba9c0, 0x22c bytes
  01ba9c0  stdu 1, -384(1)
  01ba9c4  mflr 0
  01ba9c8  std 0, 400(1)
  01ba9cc  lis 3, 118
  01ba9d0  lwz 3, 14920(3)
  01ba9d4  std 31, 376(1)
  01ba9d8  std 30, 368(1)
  01ba9dc  std 29, 360(1)
  01ba9e0  std 28, 352(1)
  01ba9e4  std 27, 344(1)
  01ba9e8  std 26, 336(1)
  01ba9ec  std 25, 328(1)
  01ba9f0  extsw 3, 3
  01ba9f4  bl 0x685c4
  01ba9f8  nop
  01ba9fc  std 3, 296(1)
  01baa00  lis 9, 0
  01baa04  li 3, 0
  01baa08  li 4, 0
  01baa0c  li 5, 1
  01baa10  li 6, 1
  01baa14  li 7, 1
  01baa18  li 8, 0
  01baa1c  ori 9, 9, 65424
  01baa20  bl 0x502fd4
  01baa24  nop
  01baa28  std 3, 304(1)
  01baa2c  li 4, 0
  01baa30  li 3, 0
  01baa34  li 5, 0
  01baa38  li 6, 0
  01baa3c  li 7, 0
  01baa40  li 8, 0
  01baa44  bl 0x502f08
  01baa48  nop
  01baa4c  lis 4, 239
  01baa50  std 3, 288(1)
  01baa54  lis 5, 118
  01baa58  lis 6, 118
  01baa5c  lis 7, 239
  01baa60  lis 8, 118
  01baa64  lwz 3, -1640(4)
  01baa68  lwz 4, 14924(5)
  01baa6c  lwz 5, 14912(6)
  01baa70  lwz 6, -1636(7)
  01baa74  ori 7, 4, 0
  01baa78  lwz 8, 14916(8)
  01baa7c  ori 4, 5, 0
  01baa80  ori 5, 6, 0
  01baa84  ori 6, 8, 0
  01baa88  bl 0x502ea8
  01baa8c  nop
  01baa90  std 3, 312(1)
  01baa94  addic 3, 1, 112
  01baa98  bl 0x500af8
  01baa9c  nop
  01baaa0  lis 3, 118
  01baaa4  lis 4, 118
  01baaa8  lis 30, 118
  01baaac  lis 28, 118
  01baab0  lis 31, 118
  01baab4  lfs 1, -32520(3)
  01baab8  lis 26, 118
  01baabc  lis 27, 118
  01baac0  stfs 1, 168(1)
  01baac4  lwz 3, 14928(4)
  01baac8  lis 29, 161
  01baacc  li 25, 0
  01baad0  stw 3, 252(1)
  01baad4  stw 3, 248(1)
  01baad8  addic 26, 26, -23168
  01baadc  stw 3, 244(1)
  01baae0  addic 27, 27, -20608
  01baae4  stw 3, 240(1)
  01baae8  addic 28, 28, -20604
  01baaec  addic 29, 29, 24396
  01baaf0  addic 30, 30, -21632
  01baaf4  addic 31, 31, -21630
  01baaf8  li 7, 4
  01baafc  ori 6, 1, 0
  01bab00  addic 5, 1, 176
  01bab04  ori 4, 30, 0
  01bab08  ori 3, 31, 0
  01bab0c  mtctr 7
  01bab10  lhz 8, 0(4)
  01bab14  lis 7, 118
  01bab18  extsh 8, 8
  01bab1c  sldi 8, 8, 4
  01bab20  addc 8, 8, 26
  01bab24  lfs 1, 14936(7)
  01bab28  clrldi 8, 8, 32
  01bab2c  addic 4, 4, 4
  01bab30  lfs 2, 0(8)
  01bab34  lhz 9, 0(3)
  01bab38  fmuls 1, 2, 1
  01bab3c  extsh 9, 9
  01bab40  addic 3, 3, 4
  01bab44  sldi 9, 9, 3
  01bab48  stfs 1, 0(5)
  01bab4c  lfs 1, 4(8)
  01bab50  lfs 2, 14936(7)
  01bab54  fmuls 1, 1, 2
  01bab58  stfs 1, 4(5)
  01bab5c  lfs 1, 8(8)
  01bab60  lfs 2, 14936(7)
  01bab64  fmuls 1, 1, 2
  01bab68  stfs 1, 8(5)
  01bab6c  lfs 1, 12(8)
  01bab70  stfs 1, 12(5)
  01bab74  lfsx 1, 27, 9
  01bab78  addic 5, 5, 16
  01bab7c  lfsx 2, 28, 9
  01bab80  stfs 1, 256(6)
  01bab84  stfs 2, 260(6)
  01bab88  addic 6, 6, 8
  01bab8c  bdnz 0x1bab10
  01bab90  addic 4, 1, 112
  01bab94  addic 3, 1, 176
  01bab98  lwz 6, 28(29)
  01bab9c  li 5, 0
  01baba0  li 7, 9
  01baba4  bl 0x72280
  01baba8  nop
  01babac  addic 25, 25, 1
  01babb0  addic 30, 30, 16
  01babb4  cmpwi 25, 64
  01babb8  addic 31, 31, 16
  01babbc  bt 0, 0x1baaf8
  01babc0  ld 0, 400(1)
  01babc4  mtlr 0
  01babc8  ld 25, 328(1)
  01babcc  ld 26, 336(1)
  01babd0  ld 27, 344(1)
  01babd4  ld 28, 352(1)
  01babd8  ld 29, 360(1)
  01babdc  ld 30, 368(1)
  01babe0  ld 31, 376(1)
  01babe4  addi 1, 1, 384
  01babe8  blr

M1089_001babf8:   # 0x1babf8, 0x3b8 bytes
  01babf8  stdu 1, -384(1)
  01babfc  mflr 0
  01bac00  std 0, 400(1)
  01bac04  stfd 26, 336(1)
  01bac08  stfd 27, 344(1)
  01bac0c  stfd 28, 352(1)
  01bac10  stfd 29, 360(1)
  01bac14  stfd 30, 368(1)
  01bac18  stfd 31, 376(1)
  01bac1c  lis 3, 118
  01bac20  lwz 3, 14920(3)
  01bac24  std 31, 328(1)
  01bac28  std 30, 320(1)
  01bac2c  extsw 3, 3
  01bac30  bl 0x685c4
  01bac34  nop
  01bac38  std 3, 296(1)
  01bac3c  lis 9, 0
  01bac40  li 3, 0
  01bac44  li 4, 0
  01bac48  li 5, 1
  01bac4c  li 6, 1
  01bac50  li 7, 1
  01bac54  li 8, 0
  01bac58  ori 9, 9, 65424
  01bac5c  bl 0x502fd4
  01bac60  nop
  01bac64  std 3, 304(1)
  01bac68  li 4, 0
  01bac6c  li 3, 0
  01bac70  li 5, 0
  01bac74  li 6, 0
  01bac78  li 7, 0
  01bac7c  li 8, 0
  01bac80  bl 0x502f08
  01bac84  nop
  01bac88  lis 4, 239
  01bac8c  std 3, 288(1)
  01bac90  lis 5, 118
  01bac94  lis 6, 118
  01bac98  lis 7, 239
  01bac9c  lis 8, 118
  01baca0  lwz 3, -1640(4)
  01baca4  lwz 4, 14924(5)
  01baca8  lwz 5, 14912(6)
  01bacac  lwz 6, -1636(7)
  01bacb0  ori 7, 4, 0
  01bacb4  lwz 8, 14916(8)
  01bacb8  ori 4, 5, 0
  01bacbc  ori 5, 6, 0
  01bacc0  ori 6, 8, 0
  01bacc4  bl 0x502ea8
  01bacc8  nop
  01baccc  std 3, 312(1)
  01bacd0  addic 3, 1, 112
  01bacd4  bl 0x500af8
  01bacd8  nop
  01bacdc  lis 3, 118
  01bace0  lis 4, 118
  01bace4  li 30, 0
  01bace8  ori 31, 30, 0
  01bacec  lfs 1, -32520(3)
  01bacf0  lwz 3, 14928(4)
  01bacf4  stfs 1, 168(1)
  01bacf8  stw 3, 252(1)
  01bacfc  stw 3, 248(1)
  01bad00  stw 3, 244(1)
  01bad04  stw 3, 240(1)
  01bad08  lis 3, 118
  01bad0c  lis 10, 118
  01bad10  addic 3, 3, 576
  01bad14  addc 3, 3, 31
  01bad18  clrldi 3, 3, 32
  01bad1c  lfs 2, 14936(10)
  01bad20  lfs 3, 4(3)
  01bad24  lfs 4, 0(3)
  01bad28  fmuls 3, 3, 2
  01bad2c  lfs 0, 132(1)
  01bad30  lfs 5, 8(3)
  01bad34  fmuls 4, 4, 2
  01bad38  lfs 29, 128(1)
  01bad3c  fmuls 2, 5, 2
  01bad40  lfs 31, 116(1)
  01bad44  lfs 28, 112(1)
  01bad48  lfs 13, 148(1)
  01bad4c  lfs 7, 12(3)
  01bad50  lfs 11, 136(1)
  01bad54  lis 3, 149
  01bad58  lfs 30, 144(1)
  01bad5c  fmuls 5, 0, 3
  01bad60  fmuls 6, 29, 3
  01bad64  lfs 8, 164(1)
  01bad68  fmuls 3, 11, 3
  01bad6c  lfs 12, 120(1)
  01bad70  lfs 9, 160(1)
  01bad74  addic 3, 3, 5056
  01bad78  lfs 10, 152(1)
  01bad7c  fmadds 5, 31, 4, 5
  01bad80  fmadds 6, 28, 4, 6
  01bad84  fmadds 3, 12, 4, 3
  01bad88  fmadds 4, 13, 2, 5
  01bad8c  fmadds 5, 30, 2, 6
  01bad90  fmadds 2, 10, 2, 3
  01bad94  lfs 6, 324(3)
  01bad98  lfs 27, 320(3)
  01bad9c  lfs 3, 328(3)
  01bada0  lis 3, 28
  01bada4  addi 3, 3, -21524
  01bada8  fmadds 4, 8, 7, 4
  01badac  fmadds 5, 9, 7, 5
  01badb0  fmadds 2, 1, 7, 2
  01badb4  fsubs 4, 4, 6
  01badb8  fsubs 5, 5, 27
  01badbc  fsubs 3, 2, 3
  01badc0  fmuls 2, 4, 4
  01badc4  fmadds 6, 5, 5, 2
  01badc8  lfs 2, 0(3)
  01badcc  fmr 9, 2
  01badd0  fmadds 6, 3, 3, 6
  01badd4  fmr 8, 9
  01badd8  fsqrts 27, 6
  01baddc  fmr 7, 8
  01bade0  fcmpu 0, 27, 7
  01bade4  bt 2, 0x1bae38
  01bade8  frsqrte 7, 6
  01badec  lis 3, 28
  01badf0  addi 3, 3, -21524
  01badf4  lfs 8, 4(3)
  01badf8  lfs 9, 8(3)
  01badfc  fmuls 27, 6, 7
  01bae00  fmuls 26, 8, 7
  01bae04  fnmsubs 27, 27, 7, 9
  01bae08  fmadds 7, 27, 26, 7
  01bae0c  fmuls 27, 6, 7
  01bae10  fmuls 26, 8, 7
  01bae14  fnmsubs 27, 27, 7, 9
  01bae18  fmadds 7, 27, 26, 7
  01bae1c  fmuls 6, 6, 7
  01bae20  fmuls 8, 8, 7
  01bae24  fnmsubs 6, 6, 7, 9
  01bae28  fmadds 7, 6, 8, 7
  01bae2c  fmuls 9, 5, 7
  01bae30  fmuls 8, 4, 7
  01bae34  fmuls 7, 3, 7
  01bae38  lis 3, 118
  01bae3c  addic 3, 3, -2752
  01bae40  addc 3, 3, 31
  01bae44  clrldi 3, 3, 32
  01bae48  lfs 3, 4(3)
  01bae4c  lfs 4, 0(3)
  01bae50  fmuls 5, 0, 3
  01bae54  fmuls 6, 29, 3
  01bae58  fmuls 3, 11, 3
  01bae5c  lfs 0, 8(3)
  01bae60  fmadds 5, 31, 4, 5
  01bae64  fmadds 6, 28, 4, 6
  01bae68  fmadds 3, 12, 4, 3
  01bae6c  fmadds 4, 13, 0, 5
  01bae70  fmadds 5, 30, 0, 6
  01bae74  fmadds 3, 10, 0, 3
  01bae78  fmuls 4, 8, 4
  01bae7c  fmadds 4, 9, 5, 4
  01bae80  fmadds 3, 7, 3, 4
  01bae84  fcmpu 0, 3, 2
  01bae88  bt 1, 0x1baf70
  01bae8c  lis 3, 118
  01bae90  lis 4, 118
  01bae94  addic 3, 3, -12032
  01bae98  li 6, 4
  01bae9c  addic 7, 4, -12030
  01baea0  lis 8, 118
  01baea4  lis 11, 118
  01baea8  addc 4, 3, 31
  01baeac  lis 12, 118
  01baeb0  addc 3, 7, 31
  01baeb4  mtctr 6
  01baeb8  ori 9, 1, 0
  01baebc  addic 5, 1, 176
  01baec0  addic 8, 8, -13824
  01baec4  addic 7, 11, -10496
  01baec8  addic 6, 12, -10492
  01baecc  lhz 11, 0(4)
  01baed0  lfs 1, 14936(10)
  01baed4  extsh 11, 11
  01baed8  lhz 12, 0(3)
  01baedc  sldi 11, 11, 4
  01baee0  addc 11, 11, 8
  01baee4  clrldi 11, 11, 32
  01baee8  extsh 12, 12
  01baeec  addic 4, 4, 4
  01baef0  sldi 12, 12, 3
  01baef4  lfs 2, 0(11)
  01baef8  fmuls 1, 2, 1
  01baefc  addic 3, 3, 4
  01baf00  stfs 1, 0(5)
  01baf04  lfs 1, 4(11)
  01baf08  lfs 2, 14936(10)
  01baf0c  fmuls 1, 1, 2
  01baf10  stfs 1, 4(5)
  01baf14  lfs 1, 8(11)
  01baf18  lfs 2, 14936(10)
  01baf1c  fmuls 1, 1, 2
  01baf20  stfs 1, 8(5)
  01baf24  lfs 1, 12(11)
  01baf28  stfs 1, 12(5)
  01baf2c  lfsx 1, 7, 12
  01baf30  lfsx 2, 6, 12
  01baf34  addic 5, 5, 16
  01baf38  stfs 1, 256(9)
  01baf3c  stfs 2, 260(9)
  01baf40  addic 9, 9, 8
  01baf44  bdnz 0x1baecc
  01baf48  lis 3, 161
  01baf4c  li 5, 0
  01baf50  addic 6, 3, 24396
  01baf54  li 7, 9
  01baf58  addic 3, 1, 176
  01baf5c  addic 4, 1, 112
  01baf60  lwz 6, 28(6)
  01baf64  bl 0x72280
  01baf68  nop
  01baf6c  lfs 1, 168(1)
  01baf70  addic 30, 30, 1
  01baf74  addic 31, 31, 16
  01baf78  cmpwi 30, 96
  01baf7c  bt 0, 0x1bad08
  01baf80  ld 0, 400(1)
  01baf84  mtlr 0
  01baf88  lfd 26, 336(1)
  01baf8c  lfd 27, 344(1)
  01baf90  lfd 28, 352(1)
  01baf94  lfd 29, 360(1)
  01baf98  lfd 30, 368(1)
  01baf9c  lfd 31, 376(1)
  01bafa0  ld 30, 320(1)
  01bafa4  ld 31, 328(1)
  01bafa8  addi 1, 1, 384
  01bafac  blr

M1089_001bafc0:   # 0x1bafc0, 0x3b8 bytes
  01bafc0  stdu 1, -384(1)
  01bafc4  mflr 0
  01bafc8  std 0, 400(1)
  01bafcc  stfd 26, 336(1)
  01bafd0  stfd 27, 344(1)
  01bafd4  stfd 28, 352(1)
  01bafd8  stfd 29, 360(1)
  01bafdc  stfd 30, 368(1)
  01bafe0  stfd 31, 376(1)
  01bafe4  lis 3, 118
  01bafe8  lwz 3, 14920(3)
  01bafec  std 31, 328(1)
  01baff0  std 30, 320(1)
  01baff4  extsw 3, 3
  01baff8  bl 0x685c4
  01baffc  nop
  01bb000  std 3, 296(1)
  01bb004  lis 9, 0
  01bb008  li 3, 0
  01bb00c  li 4, 0
  01bb010  li 5, 1
  01bb014  li 6, 1
  01bb018  li 7, 1
  01bb01c  li 8, 0
  01bb020  ori 9, 9, 65424
  01bb024  bl 0x502fd4
  01bb028  nop
  01bb02c  std 3, 304(1)
  01bb030  li 4, 0
  01bb034  li 3, 0
  01bb038  li 5, 0
  01bb03c  li 6, 0
  01bb040  li 7, 0
  01bb044  li 8, 0
  01bb048  bl 0x502f08
  01bb04c  nop
  01bb050  lis 4, 239
  01bb054  std 3, 288(1)
  01bb058  lis 5, 118
  01bb05c  lis 6, 118
  01bb060  lis 7, 239
  01bb064  lis 8, 118
  01bb068  lwz 3, -1640(4)
  01bb06c  lwz 4, 14924(5)
  01bb070  lwz 5, 14912(6)
  01bb074  lwz 6, -1636(7)
  01bb078  ori 7, 4, 0
  01bb07c  lwz 8, 14916(8)
  01bb080  ori 4, 5, 0
  01bb084  ori 5, 6, 0
  01bb088  ori 6, 8, 0
  01bb08c  bl 0x502ea8
  01bb090  nop
  01bb094  std 3, 312(1)
  01bb098  addic 3, 1, 112
  01bb09c  bl 0x500af8
  01bb0a0  nop
  01bb0a4  lis 3, 118
  01bb0a8  lis 4, 118
  01bb0ac  li 30, 0
  01bb0b0  ori 31, 30, 0
  01bb0b4  lfs 1, -32520(3)
  01bb0b8  lwz 3, 14928(4)
  01bb0bc  stfs 1, 168(1)
  01bb0c0  stw 3, 252(1)
  01bb0c4  stw 3, 248(1)
  01bb0c8  stw 3, 244(1)
  01bb0cc  stw 3, 240(1)
  01bb0d0  lis 3, 118
  01bb0d4  lis 10, 118
  01bb0d8  addic 3, 3, 13376
  01bb0dc  addc 3, 3, 31
  01bb0e0  clrldi 3, 3, 32
  01bb0e4  lfs 2, 14936(10)
  01bb0e8  lfs 3, 4(3)
  01bb0ec  lfs 4, 0(3)
  01bb0f0  fmuls 3, 3, 2
  01bb0f4  lfs 0, 132(1)
  01bb0f8  lfs 5, 8(3)
  01bb0fc  fmuls 4, 4, 2
  01bb100  lfs 29, 128(1)
  01bb104  fmuls 2, 5, 2
  01bb108  lfs 31, 116(1)
  01bb10c  lfs 28, 112(1)
  01bb110  lfs 13, 148(1)
  01bb114  lfs 7, 12(3)
  01bb118  lfs 11, 136(1)
  01bb11c  lis 3, 149
  01bb120  lfs 30, 144(1)
  01bb124  fmuls 5, 0, 3
  01bb128  fmuls 6, 29, 3
  01bb12c  lfs 8, 164(1)
  01bb130  fmuls 3, 11, 3
  01bb134  lfs 12, 120(1)
  01bb138  lfs 9, 160(1)
  01bb13c  addic 3, 3, 5056
  01bb140  lfs 10, 152(1)
  01bb144  fmadds 5, 31, 4, 5
  01bb148  fmadds 6, 28, 4, 6
  01bb14c  fmadds 3, 12, 4, 3
  01bb150  fmadds 4, 13, 2, 5
  01bb154  fmadds 5, 30, 2, 6
  01bb158  fmadds 2, 10, 2, 3
  01bb15c  lfs 6, 324(3)
  01bb160  lfs 27, 320(3)
  01bb164  lfs 3, 328(3)
  01bb168  lis 3, 28
  01bb16c  addi 3, 3, -20560
  01bb170  fmadds 4, 8, 7, 4
  01bb174  fmadds 5, 9, 7, 5
  01bb178  fmadds 2, 1, 7, 2
  01bb17c  fsubs 4, 4, 6
  01bb180  fsubs 5, 5, 27
  01bb184  fsubs 3, 2, 3
  01bb188  fmuls 2, 4, 4
  01bb18c  fmadds 6, 5, 5, 2
  01bb190  lfs 2, 0(3)
  01bb194  fmr 9, 2
  01bb198  fmadds 6, 3, 3, 6
  01bb19c  fmr 8, 9
  01bb1a0  fsqrts 27, 6
  01bb1a4  fmr 7, 8
  01bb1a8  fcmpu 0, 27, 7
  01bb1ac  bt 2, 0x1bb200
  01bb1b0  frsqrte 7, 6
  01bb1b4  lis 3, 28
  01bb1b8  addi 3, 3, -20560
  01bb1bc  lfs 8, 4(3)
  01bb1c0  lfs 9, 8(3)
  01bb1c4  fmuls 27, 6, 7
  01bb1c8  fmuls 26, 8, 7
  01bb1cc  fnmsubs 27, 27, 7, 9
  01bb1d0  fmadds 7, 27, 26, 7
  01bb1d4  fmuls 27, 6, 7
  01bb1d8  fmuls 26, 8, 7
  01bb1dc  fnmsubs 27, 27, 7, 9
  01bb1e0  fmadds 7, 27, 26, 7
  01bb1e4  fmuls 6, 6, 7
  01bb1e8  fmuls 8, 8, 7
  01bb1ec  fnmsubs 6, 6, 7, 9
  01bb1f0  fmadds 7, 6, 8, 7
  01bb1f4  fmuls 9, 5, 7
  01bb1f8  fmuls 8, 4, 7
  01bb1fc  fmuls 7, 3, 7
  01bb200  lis 3, 118
  01bb204  addic 3, 3, 10048
  01bb208  addc 3, 3, 31
  01bb20c  clrldi 3, 3, 32
  01bb210  lfs 3, 4(3)
  01bb214  lfs 4, 0(3)
  01bb218  fmuls 5, 0, 3
  01bb21c  fmuls 6, 29, 3
  01bb220  fmuls 3, 11, 3
  01bb224  lfs 0, 8(3)
  01bb228  fmadds 5, 31, 4, 5
  01bb22c  fmadds 6, 28, 4, 6
  01bb230  fmadds 3, 12, 4, 3
  01bb234  fmadds 4, 13, 0, 5
  01bb238  fmadds 5, 30, 0, 6
  01bb23c  fmadds 3, 10, 0, 3
  01bb240  fmuls 4, 8, 4
  01bb244  fmadds 4, 9, 5, 4
  01bb248  fmadds 3, 7, 3, 4
  01bb24c  fcmpu 0, 3, 2
  01bb250  bt 1, 0x1bb338
  01bb254  lis 3, 118
  01bb258  lis 4, 118
  01bb25c  addic 3, 3, 3904
  01bb260  li 6, 4
  01bb264  addic 7, 4, 3906
  01bb268  lis 8, 118
  01bb26c  lis 11, 118
  01bb270  addc 4, 3, 31
  01bb274  lis 12, 118
  01bb278  addc 3, 7, 31
  01bb27c  mtctr 6
  01bb280  ori 9, 1, 0
  01bb284  addic 5, 1, 176
  01bb288  addic 8, 8, 2112
  01bb28c  addic 7, 11, 5440
  01bb290  addic 6, 12, 5444
  01bb294  lhz 11, 0(4)
  01bb298  lfs 1, 14936(10)
  01bb29c  extsh 11, 11
  01bb2a0  lhz 12, 0(3)
  01bb2a4  sldi 11, 11, 4
  01bb2a8  addc 11, 11, 8
  01bb2ac  clrldi 11, 11, 32
  01bb2b0  extsh 12, 12
  01bb2b4  addic 4, 4, 4
  01bb2b8  sldi 12, 12, 3
  01bb2bc  lfs 2, 0(11)
  01bb2c0  fmuls 1, 2, 1
  01bb2c4  addic 3, 3, 4
  01bb2c8  stfs 1, 0(5)
  01bb2cc  lfs 1, 4(11)
  01bb2d0  lfs 2, 14936(10)
  01bb2d4  fmuls 1, 1, 2
  01bb2d8  stfs 1, 4(5)
  01bb2dc  lfs 1, 8(11)
  01bb2e0  lfs 2, 14936(10)
  01bb2e4  fmuls 1, 1, 2
  01bb2e8  stfs 1, 8(5)
  01bb2ec  lfs 1, 12(11)
  01bb2f0  stfs 1, 12(5)
  01bb2f4  lfsx 1, 7, 12
  01bb2f8  lfsx 2, 6, 12
  01bb2fc  addic 5, 5, 16
  01bb300  stfs 1, 256(9)
  01bb304  stfs 2, 260(9)
  01bb308  addic 9, 9, 8
  01bb30c  bdnz 0x1bb294
  01bb310  lis 3, 161
  01bb314  li 5, 0
  01bb318  addic 6, 3, 24396
  01bb31c  li 7, 9
  01bb320  addic 3, 1, 176
  01bb324  addic 4, 1, 112
  01bb328  lwz 6, 28(6)
  01bb32c  bl 0x72280
  01bb330  nop
  01bb334  lfs 1, 168(1)
  01bb338  addic 30, 30, 1
  01bb33c  addic 31, 31, 16
  01bb340  cmpwi 30, 96
  01bb344  bt 0, 0x1bb0d0
  01bb348  ld 0, 400(1)
  01bb34c  mtlr 0
  01bb350  lfd 26, 336(1)
  01bb354  lfd 27, 344(1)
  01bb358  lfd 28, 352(1)
  01bb35c  lfd 29, 360(1)
  01bb360  lfd 30, 368(1)
  01bb364  lfd 31, 376(1)
  01bb368  ld 30, 320(1)
  01bb36c  ld 31, 328(1)
  01bb370  addi 1, 1, 384
  01bb374  blr

M1089_001bb378:   # 0x1bb378, 0x14 bytes
  01bb378  lis 3, 118
  01bb37c  lis 4, 1
  01bb380  addic 3, 3, 14952
  01bb384  stw 4, 72(3)
  01bb388  blr

UpdateMoby_1085:   # 0x1bb398, 0x128 bytes
  01bb398  stdu 1, -128(1)
  01bb39c  mflr 0
  01bb3a0  std 0, 144(1)
  01bb3a4  std 31, 120(1)
  01bb3a8  ori 31, 3, 0
  01bb3ac  lis 3, 118
  01bb3b0  lis 4, 28
  01bb3b4  addi 4, 4, -19568
  01bb3b8  lwz 5, 36(31)
  01bb3bc  std 30, 112(1)
  01bb3c0  lfs 1, 15072(3)
  01bb3c4  lwz 30, 120(31)
  01bb3c8  lis 3, 114
  01bb3cc  lfs 2, 36(5)
  01bb3d0  fmuls 1, 2, 1
  01bb3d4  stfs 1, 44(31)
  01bb3d8  lfs 1, 0(4)
  01bb3dc  lfs 2, 8(30)
  01bb3e0  lfs 3, -3048(3)
  01bb3e4  lfs 4, 0(30)
  01bb3e8  fnmsubs 1, 3, 1, 2
  01bb3ec  stfs 1, 8(30)
  01bb3f0  lfs 1, 16(31)
  01bb3f4  lfs 2, 20(31)
  01bb3f8  fadds 1, 1, 4
  01bb3fc  lfs 3, 24(31)
  01bb400  lfs 4, 64(31)
  01bb404  lfs 5, 68(31)
  01bb408  stfs 1, 16(31)
  01bb40c  lfs 1, 4(30)
  01bb410  fadds 1, 2, 1
  01bb414  lfs 2, 72(31)
  01bb418  stfs 1, 20(31)
  01bb41c  lfs 1, 8(30)
  01bb420  fadds 1, 3, 1
  01bb424  stfs 1, 24(31)
  01bb428  lfs 1, 16(30)
  01bb42c  fadds 1, 4, 1
  01bb430  stfs 1, 64(31)
  01bb434  lfs 3, 20(30)
  01bb438  fadds 3, 5, 3
  01bb43c  stfs 3, 68(31)
  01bb440  lfs 3, 24(30)
  01bb444  fadds 2, 2, 3
  01bb448  stfs 2, 72(31)
  01bb44c  lfs 2, 16(30)
  01bb450  bl 0x502578
  01bb454  nop
  01bb458  stfs 1, 64(31)
  01bb45c  lfs 1, 68(31)
  01bb460  lfs 2, 20(30)
  01bb464  bl 0x502578
  01bb468  nop
  01bb46c  stfs 1, 68(31)
  01bb470  lfs 1, 72(31)
  01bb474  lfs 2, 24(30)
  01bb478  bl 0x502578
  01bb47c  nop
  01bb480  lbz 3, 188(31)
  01bb484  stfs 1, 72(31)
  01bb488  addic 3, 3, -1
  01bb48c  clrlwi 4, 3, 24
  01bb490  cmpwi 4, 0
  01bb494  stb 3, 188(31)
  01bb498  bf 2, 0x1bb4a8
  01bb49c  ori 3, 31, 0
  01bb4a0  bl 0xefb38
  01bb4a4  nop
  01bb4a8  ld 0, 144(1)
  01bb4ac  mtlr 0
  01bb4b0  ld 30, 112(1)
  01bb4b4  ld 31, 120(1)
  01bb4b8  addi 1, 1, 128
  01bb4bc  blr

M1089_001bb4e0:   # 0x1bb4e0, 0x1e4 bytes
  01bb4e0  stdu 1, -192(1)
  01bb4e4  mflr 0
  01bb4e8  std 0, 208(1)
  01bb4ec  stfd 29, 168(1)
  01bb4f0  stfd 30, 176(1)
  01bb4f4  stfd 31, 184(1)
  01bb4f8  lis 3, 28
  01bb4fc  std 31, 160(1)
  01bb500  std 27, 128(1)
  01bb504  addi 3, 3, -19264
  01bb508  ori 31, 8, 0
  01bb50c  std 30, 152(1)
  01bb510  li 27, 192
  01bb514  std 29, 144(1)
  01bb518  ori 30, 7, 0
  01bb51c  ori 29, 6, 0
  01bb520  std 28, 136(1)
  01bb524  lfs 1, 0(3)
  01bb528  ori 28, 5, 0
  01bb52c  std 26, 120(1)
  01bb530  lfs 2, 4(3)
  01bb534  bl 0xfcbe8
  01bb538  nop
  01bb53c  bl 0x502758
  01bb540  nop
  01bb544  bl 0xefa28
  01bb548  nop
  01bb54c  ori 26, 3, 0
  01bb550  cmpwi 26, 0
  01bb554  bt 2, 0x1bb68c
  01bb558  addc 3, 1, 27
  01bb55c  lwz 5, 36(26)
  01bb560  lis 4, 118
  01bb564  li 6, 1
  01bb568  std 28, 64(3)
  01bb56c  lfs 1, 15072(4)
  01bb570  std 29, 72(3)
  01bb574  li 4, 255
  01bb578  lfs 2, 36(5)
  01bb57c  std 30, 80(3)
  01bb580  fmuls 1, 2, 1
  01bb584  li 5, 126
  01bb588  lwz 30, 120(26)
  01bb58c  std 31, 88(3)
  01bb590  stb 4, 48(26)
  01bb594  lfs 2, 68(3)
  01bb598  sth 5, 50(26)
  01bb59c  lis 4, 28
  01bb5a0  stb 6, 49(26)
  01bb5a4  stfs 2, 20(26)
  01bb5a8  lfs 2, 76(3)
  01bb5ac  addi 31, 4, -19264
  01bb5b0  lfs 3, 84(3)
  01bb5b4  stfs 2, 28(26)
  01bb5b8  stfs 1, 44(26)
  01bb5bc  lfs 1, 92(3)
  01bb5c0  lfs 2, 64(3)
  01bb5c4  stfs 2, 16(26)
  01bb5c8  lfs 2, 72(3)
  01bb5cc  stfs 2, 24(26)
  01bb5d0  lfs 2, 80(3)
  01bb5d4  stfs 3, 4(30)
  01bb5d8  stfs 2, 0(30)
  01bb5dc  lfs 2, 88(3)
  01bb5e0  stfs 1, 12(30)
  01bb5e4  stfs 2, 8(30)
  01bb5e8  lfs 31, 8(31)
  01bb5ec  lfs 30, 12(31)
  01bb5f0  fmr 1, 31
  01bb5f4  fmr 2, 30
  01bb5f8  bl 0xfcbe8
  01bb5fc  nop
  01bb600  lfs 29, 16(31)
  01bb604  lis 29, 114
  01bb608  fmr 2, 30
  01bb60c  fmuls 4, 1, 29
  01bb610  fmr 1, 31
  01bb614  lfs 3, -3052(29)
  01bb618  fmuls 3, 4, 3
  01bb61c  stfs 3, 16(30)
  01bb620  bl 0xfcbe8
  01bb624  nop
  01bb628  fmuls 3, 1, 29
  01bb62c  lfs 4, -3052(29)
  01bb630  fmr 1, 31
  01bb634  fmr 2, 30
  01bb638  fmuls 3, 3, 4
  01bb63c  stfs 3, 20(30)
  01bb640  bl 0xfcbe8
  01bb644  nop
  01bb648  fmuls 1, 1, 29
  01bb64c  lfs 2, -3052(29)
  01bb650  fmuls 1, 1, 2
  01bb654  stfs 1, 24(30)
  01bb658  lfs 1, 20(31)
  01bb65c  lfs 2, 24(31)
  01bb660  bl 0xfcbe8
  01bb664  nop
  01bb668  lis 3, 114
  01bb66c  lfs 2, -3056(3)
  01bb670  fmuls 1, 1, 2
  01bb674  bl 0x502758
  01bb678  nop
  01bb67c  stb 3, 188(26)
  01bb680  ori 3, 26, 0
  01bb684  bl 0xf31a8
  01bb688  nop
  01bb68c  ori 3, 26, 0
  01bb690  ld 0, 208(1)
  01bb694  mtlr 0
  01bb698  lfd 29, 168(1)
  01bb69c  lfd 30, 176(1)
  01bb6a0  lfd 31, 184(1)
  01bb6a4  ld 26, 120(1)
  01bb6a8  ld 27, 128(1)
  01bb6ac  ld 28, 136(1)
  01bb6b0  ld 29, 144(1)
  01bb6b4  ld 30, 152(1)
  01bb6b8  ld 31, 160(1)
  01bb6bc  addi 1, 1, 192
  01bb6c0  blr

M109_001bb6f0:   # 0x1bb6f0, 0xc8 bytes
  01bb6f0  stdu 1, -128(1)
  01bb6f4  mflr 0
  01bb6f8  std 0, 144(1)
  01bb6fc  stfd 30, 112(1)
  01bb700  stfd 31, 120(1)
  01bb704  fdivs 3, 3, 4
  01bb708  lis 3, 28
  01bb70c  addi 3, 3, -18744
  01bb710  lfs 4, 0(3)
  01bb714  lfs 5, 4(3)
  01bb718  lfs 6, 8(3)
  01bb71c  lfs 7, 12(3)
  01bb720  lfs 8, 16(3)
  01bb724  lfs 9, 20(3)
  01bb728  lfs 10, 24(3)
  01bb72c  lfs 11, 28(3)
  01bb730  lfs 12, 32(3)
  01bb734  fmr 31, 1
  01bb738  fmr 1, 2
  01bb73c  fmr 2, 31
  01bb740  fmadds 3, 3, 4, 5
  01bb744  fsubs 4, 4, 3
  01bb748  fsubs 5, 6, 3
  01bb74c  fsub 6, 3, 4
  01bb750  fsel 3, 6, 4, 3
  01bb754  fsub 4, 5, 3
  01bb758  fsel 3, 4, 5, 3
  01bb75c  fmuls 4, 3, 3
  01bb760  fmuls 5, 4, 3
  01bb764  fmuls 6, 4, 5
  01bb768  fmadds 3, 5, 7, 3
  01bb76c  fmuls 5, 4, 6
  01bb770  fmadds 3, 6, 8, 3
  01bb774  fmuls 4, 4, 5
  01bb778  fmadds 3, 5, 9, 3
  01bb77c  fmadds 3, 4, 10, 3
  01bb780  fadds 3, 3, 11
  01bb784  fmuls 30, 3, 12
  01bb788  bl 0x5025e0
  01bb78c  nop
  01bb790  fmuls 1, 1, 30
  01bb794  fmr 2, 31
  01bb798  bl 0x502578
  01bb79c  nop
  01bb7a0  ld 0, 144(1)
  01bb7a4  mtlr 0
  01bb7a8  lfd 30, 112(1)
  01bb7ac  lfd 31, 120(1)
  01bb7b0  addi 1, 1, 128
  01bb7b4  blr

M109_001bb7e0:   # 0x1bb7e0, 0xe0 bytes
  01bb7e0  stdu 1, -64(1)
  01bb7e4  stfd 30, 48(1)
  01bb7e8  stfd 31, 56(1)
  01bb7ec  fdivs 1, 1, 2
  01bb7f0  lis 6, 28
  01bb7f4  addi 6, 6, -18504
  01bb7f8  lfs 2, 0(6)
  01bb7fc  lfs 3, 4(6)
  01bb800  lfs 4, 8(6)
  01bb804  lfs 5, 12(6)
  01bb808  lfs 6, 16(6)
  01bb80c  lfs 7, 20(6)
  01bb810  lfs 8, 24(6)
  01bb814  lfs 9, 0(5)
  01bb818  lfs 10, 28(6)
  01bb81c  lfs 11, 0(4)
  01bb820  lfs 12, 32(6)
  01bb824  fsubs 9, 9, 11
  01bb828  lfs 13, 4(5)
  01bb82c  lfs 0, 4(4)
  01bb830  lfs 31, 8(5)
  01bb834  fsubs 13, 13, 0
  01bb838  lfs 30, 8(4)
  01bb83c  fsubs 0, 31, 30
  01bb840  fmadds 1, 1, 2, 3
  01bb844  fsubs 2, 2, 1
  01bb848  fsubs 3, 4, 1
  01bb84c  fsub 4, 1, 2
  01bb850  fsel 1, 4, 2, 1
  01bb854  fsub 2, 3, 1
  01bb858  fsel 1, 2, 3, 1
  01bb85c  fmuls 2, 1, 1
  01bb860  fmuls 3, 2, 1
  01bb864  fmuls 4, 2, 3
  01bb868  fmadds 1, 3, 5, 1
  01bb86c  fmuls 3, 2, 4
  01bb870  fmadds 1, 4, 6, 1
  01bb874  fmuls 2, 2, 3
  01bb878  fmadds 1, 3, 7, 1
  01bb87c  fmadds 1, 2, 8, 1
  01bb880  fadds 1, 1, 10
  01bb884  fmuls 1, 1, 12
  01bb888  fmadds 2, 9, 1, 11
  01bb88c  stfs 2, 16(3)
  01bb890  lfs 2, 4(4)
  01bb894  fmadds 2, 13, 1, 2
  01bb898  stfs 2, 20(3)
  01bb89c  lfs 2, 8(4)
  01bb8a0  fmadds 1, 0, 1, 2
  01bb8a4  stfs 1, 24(3)
  01bb8a8  lfs 1, 12(4)
  01bb8ac  stfs 1, 28(3)
  01bb8b0  lfd 30, 48(1)
  01bb8b4  lfd 31, 56(1)
  01bb8b8  addi 1, 1, 64
  01bb8bc  blr
