# game/update/moby568.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M568_003bc494:   # 0x3bc494, 0x14 bytes
  03bc494  lis 3, 132
  03bc498  lis 4, 1
  03bc49c  addic 3, 3, 23752
  03bc4a0  stw 4, 72(3)
  03bc4a4  blr

M568_003bc4d0:   # 0x3bc4d0, 0x250 bytes
  03bc4d0  stdu 1, -224(1)
  03bc4d4  mflr 0
  03bc4d8  std 0, 240(1)
  03bc4dc  std 31, 216(1)
  03bc4e0  lbz 4, 32(3)
  03bc4e4  std 28, 192(1)
  03bc4e8  ori 31, 3, 0
  03bc4ec  lwz 28, 120(3)
  03bc4f0  cmpwi 6, 4, 0
  03bc4f4  cmpwi 4, 5
  03bc4f8  cror 2, 2, 26
  03bc4fc  std 30, 208(1)
  03bc500  std 29, 200(1)
  03bc504  cmpwi 1, 4, 4
  03bc508  bt 2, 0x3bc700
  03bc50c  bt 6, 0x3bc700
  03bc510  lis 30, 151
  03bc514  addic 30, 30, -25376
  03bc518  lwz 3, 8324(30)
  03bc51c  cmpwi 3, 114
  03bc520  bf 2, 0x3bc54c
  03bc524  bt 6, 0x3bc54c
  03bc528  lhz 5, 52(31)
  03bc52c  li 3, 0
  03bc530  li 4, 5
  03bc534  ori 5, 5, 65
  03bc538  rlwimi 5, 3, 0, 19, 19
  03bc53c  stw 3, 148(31)
  03bc540  stb 4, 32(31)
  03bc544  sth 5, 52(31)
  03bc548  b 0x3bc700
  03bc54c  lis 4, 51
  03bc550  ori 3, 31, 0
  03bc554  li 5, 0
  03bc558  bl 0x10675c
  03bc55c  nop
  03bc560  li 4, 255
  03bc564  ori 29, 3, 0
  03bc568  stb 4, 164(31)
  03bc56c  lwz 3, 572(30)
  03bc570  cmpw 3, 31
  03bc574  bt 2, 0x3bc590
  03bc578  lwz 3, 576(30)
  03bc57c  cmpw 3, 31
  03bc580  bt 2, 0x3bc590
  03bc584  lwz 3, 412(28)
  03bc588  cmpwi 3, 0
  03bc58c  bt 2, 0x3bc618
  03bc590  lis 3, 60
  03bc594  li 6, 1
  03bc598  addi 3, 3, -15184
  03bc59c  li 30, 0
  03bc5a0  li 7, -1
  03bc5a4  lis 4, 161
  03bc5a8  li 5, 0
  03bc5ac  lfs 1, 12(3)
  03bc5b0  addic 4, 4, 23856
  03bc5b4  lfs 2, 0(3)
  03bc5b8  li 8, 20
  03bc5bc  lfs 3, 4(3)
  03bc5c0  li 9, 6
  03bc5c4  lfs 5, 8(3)
  03bc5c8  li 10, 32
  03bc5cc  lfs 7, 16(3)
  03bc5d0  fmr 4, 1
  03bc5d4  std 6, 144(1)
  03bc5d8  ori 3, 31, 0
  03bc5dc  std 6, 160(1)
  03bc5e0  fmr 6, 1
  03bc5e4  std 30, 168(1)
  03bc5e8  std 7, 176(1)
  03bc5ec  std 30, 184(1)
  03bc5f0  bl 0x10e030
  03bc5f4  nop
  03bc5f8  lhz 3, 52(31)
  03bc5fc  li 4, 5
  03bc600  stw 30, 148(31)
  03bc604  ori 3, 3, 65
  03bc608  rlwimi 3, 30, 0, 19, 19
  03bc60c  stb 4, 32(31)
  03bc610  sth 3, 52(31)
  03bc614  b 0x3bc700
  03bc618  addic 3, 28, 404
  03bc61c  bl 0x4fff60
  03bc620  nop
  03bc624  cmpwi 3, 0
  03bc628  bf 2, 0x3bc67c
  03bc62c  cmpwi 29, 0
  03bc630  bf 2, 0x3bc67c
  03bc634  lbz 3, 32(31)
  03bc638  cmpwi 3, 1
  03bc63c  bf 2, 0x3bc700
  03bc640  lfs 1, 20(31)
  03bc644  lfs 2, 132(30)
  03bc648  lfs 3, 16(31)
  03bc64c  fsubs 1, 1, 2
  03bc650  lfs 2, 128(30)
  03bc654  fsubs 2, 3, 2
  03bc658  lis 3, 60
  03bc65c  addi 3, 3, -15184
  03bc660  fmuls 1, 1, 1
  03bc664  fmadds 1, 2, 2, 1
  03bc668  lfs 2, 20(3)
  03bc66c  fsqrts 1, 1
  03bc670  fcmpu 0, 1, 2
  03bc674  cror 6, 1, 2
  03bc678  bt 6, 0x3bc700
  03bc67c  lis 3, 60
  03bc680  li 6, 1
  03bc684  addi 3, 3, -15184
  03bc688  li 30, 0
  03bc68c  li 7, -1
  03bc690  lis 4, 161
  03bc694  li 5, 0
  03bc698  lfs 4, 24(3)
  03bc69c  lfs 1, 16(3)
  03bc6a0  addic 4, 4, 23856
  03bc6a4  lfs 3, 0(3)
  03bc6a8  li 8, 5
  03bc6ac  lfs 5, 8(3)
  03bc6b0  li 9, 2
  03bc6b4  std 6, 144(1)
  03bc6b8  ori 3, 31, 0
  03bc6bc  std 30, 160(1)
  03bc6c0  li 10, 8
  03bc6c4  std 30, 168(1)
  03bc6c8  fmr 6, 4
  03bc6cc  std 7, 176(1)
  03bc6d0  fmr 2, 1
  03bc6d4  std 30, 184(1)
  03bc6d8  fmr 7, 1
  03bc6dc  bl 0x10e030
  03bc6e0  nop
  03bc6e4  lhz 3, 52(31)
  03bc6e8  li 4, 5
  03bc6ec  stw 30, 148(31)
  03bc6f0  ori 3, 3, 65
  03bc6f4  rlwimi 3, 30, 0, 19, 19
  03bc6f8  stb 4, 32(31)
  03bc6fc  sth 3, 52(31)
  03bc700  ld 0, 240(1)
  03bc704  mtlr 0
  03bc708  ld 28, 192(1)
  03bc70c  ld 29, 200(1)
  03bc710  ld 30, 208(1)
  03bc714  ld 31, 216(1)
  03bc718  addi 1, 1, 224
  03bc71c  blr

UpdateMoby_568:   # 0x3bc760, 0x5cc bytes
  03bc760  stdu 1, -272(1)
  03bc764  mflr 0
  03bc768  std 0, 288(1)
  03bc76c  stfd 27, 232(1)
  03bc770  stfd 28, 240(1)
  03bc774  stfd 29, 248(1)
  03bc778  stfd 30, 256(1)
  03bc77c  stfd 31, 264(1)
  03bc780  std 31, 224(1)
  03bc784  std 30, 216(1)
  03bc788  ori 31, 3, 0
  03bc78c  std 29, 208(1)
  03bc790  lwz 30, 120(31)
  03bc794  bl 0x3bc4d0
  03bc798  lbz 3, 32(31)
  03bc79c  cmpwi 3, 4
  03bc7a0  bt 2, 0x3bccd4
  03bc7a4  cmpwi 3, 3
  03bc7a8  bt 2, 0x3bca1c
  03bc7ac  cmpwi 3, 2
  03bc7b0  bt 2, 0x3bc8c0
  03bc7b4  cmpwi 3, 1
  03bc7b8  bt 2, 0x3bc800
  03bc7bc  cmpwi 3, 0
  03bc7c0  bf 2, 0x3bccfc
  03bc7c4  lis 4, 132
  03bc7c8  lhz 7, 52(31)
  03bc7cc  li 3, 0
  03bc7d0  lis 5, 15692
  03bc7d4  addic 4, 4, 23860
  03bc7d8  ori 7, 7, 65
  03bc7dc  ori 5, 5, 52429
  03bc7e0  stw 3, 148(31)
  03bc7e4  rlwimi 7, 3, 0, 19, 19
  03bc7e8  li 6, 5
  03bc7ec  stw 4, 208(30)
  03bc7f0  stw 5, 48(30)
  03bc7f4  sth 7, 52(31)
  03bc7f8  stb 6, 32(31)
  03bc7fc  b 0x3bccfc
  03bc800  lfs 1, 16(31)
  03bc804  lfs 2, 384(30)
  03bc808  lis 3, 60
  03bc80c  fadds 1, 1, 2
  03bc810  addi 3, 3, -14560
  03bc814  lfs 2, 20(31)
  03bc818  lis 4, 114
  03bc81c  lfs 3, 24(31)
  03bc820  stfs 1, 16(31)
  03bc824  lfs 1, 388(30)
  03bc828  fadds 1, 2, 1
  03bc82c  stfs 1, 20(31)
  03bc830  lfs 1, 392(30)
  03bc834  fadds 1, 3, 1
  03bc838  stfs 1, 24(31)
  03bc83c  lfs 3, 0(3)
  03bc840  lfs 2, 392(30)
  03bc844  lfs 4, -3048(4)
  03bc848  lwz 3, 376(30)
  03bc84c  fnmsubs 2, 4, 3, 2
  03bc850  lfs 1, 376(30)
  03bc854  srawi 4, 3, 31
  03bc858  srwi 5, 4, 1
  03bc85c  xor 3, 5, 3
  03bc860  subc 3, 3, 4
  03bc864  stfs 2, 392(30)
  03bc868  lwz 4, 24(31)
  03bc86c  srawi 5, 4, 31
  03bc870  srwi 6, 5, 1
  03bc874  xor 4, 6, 4
  03bc878  subc 4, 4, 5
  03bc87c  cmpw 4, 3
  03bc880  bf 0, 0x3bccfc
  03bc884  lis 4, 60
  03bc888  stfs 1, 24(31)
  03bc88c  li 3, 2
  03bc890  addi 4, 4, -14560
  03bc894  lis 5, 132
  03bc898  stb 3, 32(31)
  03bc89c  lis 3, 114
  03bc8a0  lfs 1, 4(4)
  03bc8a4  lfs 2, 23872(5)
  03bc8a8  fmuls 1, 2, 1
  03bc8ac  lfs 3, -3052(3)
  03bc8b0  fmuls 1, 1, 3
  03bc8b4  fneg 1, 1
  03bc8b8  stfs 1, 392(30)
  03bc8bc  b 0x3bccfc
  03bc8c0  lis 3, 60
  03bc8c4  lis 4, 114
  03bc8c8  addi 29, 3, -14560
  03bc8cc  lis 3, 132
  03bc8d0  lfs 3, 4(29)
  03bc8d4  lfs 2, 23872(3)
  03bc8d8  lfs 1, 8(29)
  03bc8dc  fmuls 2, 2, 3
  03bc8e0  lfs 4, -3048(4)
  03bc8e4  addic 3, 30, 392
  03bc8e8  fmuls 2, 2, 4
  03bc8ec  bl 0x109af0
  03bc8f0  nop
  03bc8f4  lfs 2, 12(29)
  03bc8f8  lfs 3, 72(31)
  03bc8fc  lfs 4, 16(29)
  03bc900  fadds 2, 3, 2
  03bc904  fsubs 6, 4, 3
  03bc908  lfs 5, 20(29)
  03bc90c  fsubs 4, 4, 2
  03bc910  fsub 8, 3, 6
  03bc914  fsubs 7, 5, 2
  03bc918  fsubs 5, 5, 3
  03bc91c  fsub 9, 2, 4
  03bc920  fsel 3, 8, 6, 3
  03bc924  lfs 6, 24(29)
  03bc928  fsel 2, 9, 4, 2
  03bc92c  fsub 4, 5, 3
  03bc930  fsub 9, 7, 2
  03bc934  fsel 3, 4, 5, 3
  03bc938  lfs 4, 28(29)
  03bc93c  lfs 5, 32(29)
  03bc940  lfs 8, 68(31)
  03bc944  lfs 11, 36(29)
  03bc948  fadds 8, 8, 1
  03bc94c  fsel 2, 9, 7, 2
  03bc950  fmuls 7, 3, 3
  03bc954  fmuls 9, 2, 2
  03bc958  fmuls 10, 7, 3
  03bc95c  fmuls 12, 9, 2
  03bc960  fmuls 13, 7, 10
  03bc964  fmadds 3, 10, 6, 3
  03bc968  lfs 10, 16(31)
  03bc96c  lfs 0, 20(31)
  03bc970  lbz 3, 83(31)
  03bc974  stfs 8, 68(31)
  03bc978  fmuls 31, 9, 12
  03bc97c  fmadds 2, 12, 6, 2
  03bc980  fmuls 6, 7, 13
  03bc984  fmadds 3, 13, 4, 3
  03bc988  fmuls 12, 9, 31
  03bc98c  fmadds 2, 31, 4, 2
  03bc990  fmuls 4, 7, 6
  03bc994  fmadds 3, 6, 5, 3
  03bc998  fmuls 6, 9, 12
  03bc99c  fmadds 2, 12, 5, 2
  03bc9a0  fmadds 3, 4, 11, 3
  03bc9a4  fmadds 2, 6, 11, 2
  03bc9a8  fmadds 3, 3, 1, 0
  03bc9ac  fmadds 1, 2, 1, 10
  03bc9b0  stfs 3, 20(31)
  03bc9b4  stfs 1, 16(31)
  03bc9b8  lwz 4, 392(30)
  03bc9bc  cmpwi 4, 0
  03bc9c0  bf 2, 0x3bccfc
  03bc9c4  cmpwi 3, 1
  03bc9c8  bt 2, 0x3bca08
  03bc9cc  lis 3, 60
  03bc9d0  lis 4, 114
  03bc9d4  addi 3, 3, -14560
  03bc9d8  li 5, 0
  03bc9dc  lfs 1, 40(3)
  03bc9e0  lfs 2, -3056(4)
  03bc9e4  ori 3, 31, 0
  03bc9e8  fmuls 1, 2, 1
  03bc9ec  li 4, 1
  03bc9f0  fctiwz 1, 1
  03bc9f4  stfd 1, 192(1)
  03bc9f8  lwz 6, 196(1)
  03bc9fc  extsw 6, 6
  03bca00  bl 0xfddc0
  03bca04  nop
  03bca08  li 3, 3
  03bca0c  li 4, 255
  03bca10  stb 3, 32(31)
  03bca14  stb 4, 164(31)
  03bca18  b 0x3bccfc
  03bca1c  lbz 3, 83(31)
  03bca20  cmpwi 3, 1
  03bca24  cmpwi 1, 3, 2
  03bca28  bf 2, 0x3bca7c
  03bca2c  lbz 3, 112(31)
  03bca30  rlwinm 3, 3, 0, 30, 30
  03bca34  cmpwi 3, 0
  03bca38  bt 2, 0x3bca7c
  03bca3c  bt 6, 0x3bca7c
  03bca40  lis 3, 60
  03bca44  lis 4, 114
  03bca48  addi 3, 3, -14560
  03bca4c  li 5, 0
  03bca50  lfs 1, 40(3)
  03bca54  lfs 2, -3056(4)
  03bca58  ori 3, 31, 0
  03bca5c  li 4, 2
  03bca60  fmuls 1, 2, 1
  03bca64  fctiwz 1, 1
  03bca68  stfd 1, 192(1)
  03bca6c  lwz 6, 196(1)
  03bca70  extsw 6, 6
  03bca74  bl 0xfddc0
  03bca78  nop
  03bca7c  lbz 3, 49(31)
  03bca80  cmpwi 3, 0
  03bca84  bt 2, 0x3bccfc
  03bca88  lis 3, 60
  03bca8c  addic 5, 1, 112
  03bca90  addi 4, 3, -14560
  03bca94  ori 3, 31, 0
  03bca98  lfs 31, 44(4)
  03bca9c  fmr 1, 31
  03bcaa0  bl 0x1118d8
  03bcaa4  nop
  03bcaa8  cmpwi 3, 2
  03bcaac  bt 2, 0x3bccfc
  03bcab0  lwz 3, 176(1)
  03bcab4  cmpwi 3, 0
  03bcab8  bt 2, 0x3bccfc
  03bcabc  lfs 29, 20(31)
  03bcac0  lfs 2, 20(3)
  03bcac4  lfs 30, 16(31)
  03bcac8  fsubs 3, 29, 2
  03bcacc  lfs 1, 16(3)
  03bcad0  fsubs 4, 30, 1
  03bcad4  fmuls 3, 3, 3
  03bcad8  fmadds 3, 4, 4, 3
  03bcadc  fsqrts 3, 3
  03bcae0  fcmpu 0, 3, 31
  03bcae4  cror 6, 1, 2
  03bcae8  bt 6, 0x3bccfc
  03bcaec  fsubs 3, 2, 29
  03bcaf0  fsubs 2, 1, 30
  03bcaf4  lis 3, 114
  03bcaf8  lis 4, 114
  03bcafc  lfs 6, -3048(3)
  03bcb00  fmuls 1, 3, 3
  03bcb04  lis 3, 60
  03bcb08  lfs 28, 24(31)
  03bcb0c  addi 3, 3, -14560
  03bcb10  fmadds 5, 2, 2, 1
  03bcb14  fmuls 1, 6, 31
  03bcb18  lfs 31, 48(3)
  03bcb1c  lfs 7, -3052(4)
  03bcb20  lfs 4, 52(3)
  03bcb24  fmuls 31, 7, 31
  03bcb28  fsqrts 5, 5
  03bcb2c  fcmpu 0, 5, 1
  03bcb30  cror 6, 0, 2
  03bcb34  bt 6, 0x3bcb64
  03bcb38  lis 3, 60
  03bcb3c  addi 3, 3, -14560
  03bcb40  lfs 7, 8(3)
  03bcb44  fcmpu 0, 5, 7
  03bcb48  bf 2, 0x3bcb58
  03bcb4c  fmr 2, 7
  03bcb50  fmr 3, 2
  03bcb54  b 0x3bcb64
  03bcb58  fdivs 1, 1, 5
  03bcb5c  fmuls 2, 2, 1
  03bcb60  fmuls 3, 3, 1
  03bcb64  lfs 1, 68(30)
  03bcb68  lfs 5, 64(30)
  03bcb6c  fadds 1, 1, 3
  03bcb70  fadds 2, 5, 2
  03bcb74  lfs 5, 72(30)
  03bcb78  fmadds 4, 6, 4, 5
  03bcb7c  fmuls 3, 1, 1
  03bcb80  stfs 2, 64(30)
  03bcb84  stfs 1, 68(30)
  03bcb88  stfs 4, 72(30)
  03bcb8c  fmadds 3, 2, 2, 3
  03bcb90  fsqrts 3, 3
  03bcb94  fcmpu 0, 3, 31
  03bcb98  cror 6, 0, 2
  03bcb9c  bt 6, 0x3bcbe0
  03bcba0  fdivs 4, 31, 3
  03bcba4  lis 3, 60
  03bcba8  addi 3, 3, -14560
  03bcbac  lfs 5, 8(3)
  03bcbb0  fsub 6, 5, 3
  03bcbb4  fsub 7, 5, 3
  03bcbb8  fsub 8, 3, 5
  03bcbbc  fsub 3, 3, 5
  03bcbc0  fmuls 2, 2, 4
  03bcbc4  fmuls 1, 1, 4
  03bcbc8  fsel 4, 6, 5, 2
  03bcbcc  fsel 5, 7, 5, 1
  03bcbd0  fsel 2, 8, 4, 2
  03bcbd4  fsel 1, 3, 5, 1
  03bcbd8  stfs 2, 64(30)
  03bcbdc  stfs 1, 68(30)
  03bcbe0  lis 3, 60
  03bcbe4  addic 4, 30, 64
  03bcbe8  addi 5, 3, -14560
  03bcbec  ori 3, 31, 0
  03bcbf0  li 8, 0
  03bcbf4  lfs 27, 8(5)
  03bcbf8  lfs 2, 56(5)
  03bcbfc  fmr 1, 27
  03bcc00  fmr 3, 27
  03bcc04  bl 0x1009b0
  03bcc08  nop
  03bcc0c  lfs 1, 16(31)
  03bcc10  fsubs 1, 1, 30
  03bcc14  stfs 1, 64(30)
  03bcc18  lfs 1, 20(31)
  03bcc1c  fsubs 1, 1, 29
  03bcc20  stfs 1, 68(30)
  03bcc24  lfs 30, 24(31)
  03bcc28  fsubs 30, 30, 28
  03bcc2c  fcmpu 0, 30, 27
  03bcc30  stfs 30, 72(30)
  03bcc34  lfs 1, 28(31)
  03bcc38  stfs 1, 76(30)
  03bcc3c  cror 6, 0, 2
  03bcc40  bt 6, 0x3bcc50
  03bcc44  li 3, 0
  03bcc48  stw 3, 72(30)
  03bcc4c  b 0x3bcc64
  03bcc50  fneg 31, 31
  03bcc54  fcmpu 0, 30, 31
  03bcc58  cror 6, 1, 2
  03bcc5c  bt 6, 0x3bcc64
  03bcc60  stfs 31, 72(30)
  03bcc64  lis 3, 151
  03bcc68  addic 4, 3, -25376
  03bcc6c  lwz 3, 176(1)
  03bcc70  lwz 4, 8320(4)
  03bcc74  cmpw 3, 4
  03bcc78  bt 2, 0x3bccfc
  03bcc7c  lfs 1, 20(3)
  03bcc80  lfs 2, 20(31)
  03bcc84  lfs 3, 16(3)
  03bcc88  fsubs 1, 1, 2
  03bcc8c  lfs 2, 16(31)
  03bcc90  fsubs 2, 3, 2
  03bcc94  lfs 3, 24(3)
  03bcc98  lfs 4, 24(31)
  03bcc9c  fsubs 3, 3, 4
  03bcca0  fmuls 1, 1, 1
  03bcca4  lis 3, 60
  03bcca8  addi 3, 3, -14560
  03bccac  fmadds 1, 2, 2, 1
  03bccb0  lfs 2, 4(3)
  03bccb4  fmadds 1, 3, 3, 1
  03bccb8  fsqrts 1, 1
  03bccbc  fcmpu 0, 1, 2
  03bccc0  cror 6, 1, 2
  03bccc4  bt 6, 0x3bccfc
  03bccc8  li 3, 1
  03bcccc  stw 3, 412(30)
  03bccd0  b 0x3bccfc
  03bccd4  ori 3, 31, 0
  03bccd8  addic 4, 30, 272
  03bccdc  bl 0x48c188
  03bcce0  nop
  03bcce4  cmpwi 3, 0
  03bcce8  bt 2, 0x3bccfc
  03bccec  li 3, 3
  03bccf0  li 4, 0
  03bccf4  stb 3, 32(31)
  03bccf8  sth 4, 200(30)
  03bccfc  ld 0, 288(1)
  03bcd00  mtlr 0
  03bcd04  lfd 27, 232(1)
  03bcd08  lfd 28, 240(1)
  03bcd0c  lfd 29, 248(1)
  03bcd10  lfd 30, 256(1)
  03bcd14  lfd 31, 264(1)
  03bcd18  ld 29, 208(1)
  03bcd1c  ld 30, 216(1)
  03bcd20  ld 31, 224(1)
  03bcd24  addi 1, 1, 272
  03bcd28  blr
