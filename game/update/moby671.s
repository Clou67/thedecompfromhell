# game/update/moby671.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M671_0040c2f0:   # 0x40c2f0, 0x14 bytes
  040c2f0  lis 3, 133
  040c2f4  lis 4, 1
  040c2f8  addic 3, 3, 20740
  040c2fc  stw 4, 72(3)
  040c300  blr

M671_0040c310:   # 0x40c310, 0xc0 bytes
  040c310  stdu 1, -144(1)
  040c314  mflr 0
  040c318  std 0, 160(1)
  040c31c  stfd 31, 136(1)
  040c320  std 30, 120(1)
  040c324  lis 4, 65
  040c328  std 31, 128(1)
  040c32c  ori 30, 3, 0
  040c330  addi 31, 4, -15608
  040c334  lfs 2, 0(31)
  040c338  fmuls 31, 1, 2
  040c33c  std 29, 112(1)
  040c340  fmr 1, 31
  040c344  bl 0x502758
  040c348  nop
  040c34c  ori 29, 3, 0
  040c350  bl 0x502730
  040c354  nop
  040c358  srawi 3, 29, 3
  040c35c  fsubs 1, 31, 1
  040c360  lfs 2, 4(31)
  040c364  addze 3, 3
  040c368  sldi 3, 3, 3
  040c36c  subc 3, 29, 3
  040c370  addic 4, 3, 1
  040c374  sldi 3, 3, 2
  040c378  srawi 5, 4, 3
  040c37c  fsubs 2, 2, 1
  040c380  addze 5, 5
  040c384  addc 3, 30, 3
  040c388  sldi 5, 5, 3
  040c38c  clrldi 3, 3, 32
  040c390  subc 4, 4, 5
  040c394  sldi 4, 4, 2
  040c398  addc 4, 30, 4
  040c39c  lfs 3, 144(3)
  040c3a0  clrldi 4, 4, 32
  040c3a4  lfs 4, 144(4)
  040c3a8  fmuls 1, 4, 1
  040c3ac  fmadds 1, 3, 2, 1
  040c3b0  ld 0, 160(1)
  040c3b4  mtlr 0
  040c3b8  lfd 31, 136(1)
  040c3bc  ld 29, 112(1)
  040c3c0  ld 30, 120(1)
  040c3c4  ld 31, 128(1)
  040c3c8  addi 1, 1, 144
  040c3cc  blr

M671_0040c3f0:   # 0x40c3f0, 0x161c bytes
  040c3f0  mr 11, 1
  040c3f4  stdu 1, -1264(1)
  040c3f8  mflr 0
  040c3fc  std 0, 16(11)
  040c400  stfd 14, -144(11)
  040c404  stfd 15, -136(11)
  040c408  stfd 16, -128(11)
  040c40c  stfd 17, -120(11)
  040c410  stfd 18, -112(11)
  040c414  stfd 19, -104(11)
  040c418  stfd 20, -96(11)
  040c41c  stfd 21, -88(11)
  040c420  stfd 22, -80(11)
  040c424  stfd 23, -72(11)
  040c428  stfd 24, -64(11)
  040c42c  stfd 25, -56(11)
  040c430  stfd 26, -48(11)
  040c434  stfd 27, -40(11)
  040c438  stfd 28, -32(11)
  040c43c  stfd 29, -24(11)
  040c440  stfd 30, -16(11)
  040c444  stfd 31, -8(11)
  040c448  std 27, -184(11)
  040c44c  std 31, -152(11)
  040c450  mr 31, 1
  040c454  lis 27, 65
  040c458  std 18, -256(11)
  040c45c  cmpwi 3, 0
  040c460  addi 27, 27, -15408
  040c464  std 30, -160(11)
  040c468  std 29, -168(11)
  040c46c  std 28, -176(11)
  040c470  std 26, -192(11)
  040c474  std 25, -200(11)
  040c478  std 24, -208(11)
  040c47c  std 23, -216(11)
  040c480  std 22, -224(11)
  040c484  std 21, -232(11)
  040c488  std 20, -240(11)
  040c48c  std 19, -248(11)
  040c490  std 17, -264(11)
  040c494  std 16, -272(11)
  040c498  std 15, -280(11)
  040c49c  std 14, -288(11)
  040c4a0  ori 18, 3, 0
  040c4a4  bt 2, 0x40d968
  040c4a8  lwz 23, 120(18)
  040c4ac  cmpwi 23, 0
  040c4b0  bt 2, 0x40d968
  040c4b4  lbz 3, 9(23)
  040c4b8  lbz 4, 8(23)
  040c4bc  mullw 5, 3, 4
  040c4c0  addic 3, 3, 1
  040c4c4  std 4, 896(31)
  040c4c8  addc 5, 5, 4
  040c4cc  stw 1, 752(31)
  040c4d0  addic 4, 4, 1
  040c4d4  addc 3, 5, 3
  040c4d8  ld 5, 0(1)
  040c4dc  slwi 3, 3, 4
  040c4e0  std 4, 912(31)
  040c4e4  addic 3, 3, 143
  040c4e8  rldicr 3, 3, 0, 59
  040c4ec  neg 3, 3
  040c4f0  addc 4, 1, 3
  040c4f4  addc 3, 1, 3
  040c4f8  clrldi 1, 3, 32
  040c4fc  std 5, 0(4)
  040c500  lbz 3, 8(23)
  040c504  addic 17, 1, 128
  040c508  bl 0x502730
  040c50c  nop
  040c510  lfs 14, 0(27)
  040c514  fdivs 1, 14, 1
  040c518  lbz 3, 9(23)
  040c51c  stfd 1, 800(31)
  040c520  bl 0x502730
  040c524  nop
  040c528  fdivs 1, 14, 1
  040c52c  ori 29, 1, 0
  040c530  lis 3, 346
  040c534  lbz 4, 8(23)
  040c538  ld 5, 0(1)
  040c53c  addic 4, 4, 1
  040c540  slwi 4, 4, 2
  040c544  addic 4, 4, 143
  040c548  rldicr 4, 4, 0, 59
  040c54c  neg 4, 4
  040c550  addc 6, 1, 4
  040c554  addc 4, 1, 4
  040c558  clrldi 1, 4, 32
  040c55c  std 5, 0(6)
  040c560  lbz 4, 9(23)
  040c564  ori 25, 1, 0
  040c568  addic 4, 4, 1
  040c56c  ld 5, 0(1)
  040c570  slwi 4, 4, 2
  040c574  addic 4, 4, 143
  040c578  rldicr 4, 4, 0, 59
  040c57c  neg 4, 4
  040c580  addc 6, 1, 4
  040c584  addc 4, 1, 4
  040c588  clrldi 1, 4, 32
  040c58c  std 5, 0(6)
  040c590  lwz 3, -15568(3)
  040c594  extsw 3, 3
  040c598  stfd 1, 792(31)
  040c59c  bl 0x502730
  040c5a0  nop
  040c5a4  li 30, 0
  040c5a8  stfs 1, 784(31)
  040c5ac  stw 29, 904(31)
  040c5b0  ori 29, 23, 0
  040c5b4  ori 28, 30, 0
  040c5b8  lwz 3, 144(29)
  040c5bc  lwz 4, 176(29)
  040c5c0  srawi 5, 3, 31
  040c5c4  lfs 1, 144(29)
  040c5c8  srawi 6, 4, 31
  040c5cc  lfs 2, 176(29)
  040c5d0  srwi 7, 5, 1
  040c5d4  srwi 8, 6, 1
  040c5d8  xor 3, 7, 3
  040c5dc  xor 4, 8, 4
  040c5e0  subc 3, 3, 5
  040c5e4  subc 4, 4, 6
  040c5e8  cmpw 3, 4
  040c5ec  bf 0, 0x40c624
  040c5f0  lfs 3, 136(23)
  040c5f4  lfs 4, 140(23)
  040c5f8  fmadds 1, 3, 4, 1
  040c5fc  fcmpu 0, 1, 2
  040c600  stfs 1, 144(29)
  040c604  bt 0, 0x40c654
  040c608  lfs 1, 136(23)
  040c60c  fmr 2, 14
  040c610  fsubs 1, 14, 1
  040c614  bl 0xfcbe8
  040c618  nop
  040c61c  stfs 1, 176(29)
  040c620  b 0x40c654
  040c624  lfs 3, 136(23)
  040c628  lfs 4, 140(23)
  040c62c  fnmsubs 1, 3, 4, 1
  040c630  fcmpu 0, 1, 2
  040c634  stfs 1, 144(29)
  040c638  bt 1, 0x40c654
  040c63c  lfs 1, 136(23)
  040c640  fmr 2, 14
  040c644  fsubs 1, 14, 1
  040c648  bl 0xfcbe8
  040c64c  nop
  040c650  stfs 1, 176(29)
  040c654  addic 30, 30, 1
  040c658  addic 29, 29, 4
  040c65c  cmpwi 30, 8
  040c660  bt 0, 0x40c5b8
  040c664  lbz 3, 35(18)
  040c668  bl 0x502730
  040c66c  nop
  040c670  lbz 3, 19(23)
  040c674  fmr 31, 1
  040c678  bl 0x502730
  040c67c  nop
  040c680  lfs 2, 340(23)
  040c684  fmuls 1, 2, 1
  040c688  lfs 2, 4(27)
  040c68c  fmuls 1, 1, 31
  040c690  fmuls 1, 1, 2
  040c694  bl 0x502758
  040c698  nop
  040c69c  lbz 30, 13(23)
  040c6a0  clrlwi 19, 3, 24
  040c6a4  cmpwi 30, 0
  040c6a8  lhz 3, 10(23)
  040c6ac  bf 1, 0x40c6dc
  040c6b0  lis 4, 346
  040c6b4  lbz 5, 14(23)
  040c6b8  addic 5, 5, 1
  040c6bc  lwz 4, -15568(4)
  040c6c0  divw 4, 4, 5
  040c6c4  divw 5, 4, 30
  040c6c8  mullw 5, 5, 30
  040c6cc  lbz 30, 12(23)
  040c6d0  subc 4, 4, 5
  040c6d4  addc 30, 30, 4
  040c6d8  b 0x40c6e0
  040c6dc  lbz 30, 12(23)
  040c6e0  clrlwi 3, 3, 31
  040c6e4  stb 30, 15(23)
  040c6e8  clrlwi 30, 30, 24
  040c6ec  cmpwi 3, 0
  040c6f0  bt 2, 0x40c708
  040c6f4  ori 3, 30, 0
  040c6f8  bl 0x685c4
  040c6fc  nop
  040c700  ori 30, 3, 0
  040c704  b 0x40c718
  040c708  addic 3, 30, 40
  040c70c  bl 0x685c4
  040c710  nop
  040c714  ori 30, 3, 0
  040c718  li 3, 0
  040c71c  std 28, 888(31)
  040c720  lis 9, 0
  040c724  std 30, 696(31)
  040c728  li 4, 0
  040c72c  li 5, 1
  040c730  li 6, 1
  040c734  li 7, 1
  040c738  li 8, 0
  040c73c  ori 9, 9, 65424
  040c740  bl 0x502fd4
  040c744  nop
  040c748  std 3, 704(31)
  040c74c  li 4, 0
  040c750  li 3, 0
  040c754  li 5, 0
  040c758  li 6, 0
  040c75c  li 7, 0
  040c760  li 8, 0
  040c764  bl 0x502f08
  040c768  nop
  040c76c  std 3, 688(31)
  040c770  lbz 3, 60(23)
  040c774  lbz 4, 61(23)
  040c778  lbz 5, 62(23)
  040c77c  lbz 6, 63(23)
  040c780  lbz 7, 19(23)
  040c784  bl 0x502ea8
  040c788  nop
  040c78c  std 3, 712(31)
  040c790  lbz 3, 18(23)
  040c794  li 6, 208
  040c798  lbz 4, 16(23)
  040c79c  li 7, 224
  040c7a0  lbz 5, 19(23)
  040c7a4  rlwimi 4, 3, 8, 16, 23
  040c7a8  lbz 3, 17(23)
  040c7ac  rlwimi 4, 5, 24, 0, 7
  040c7b0  vspltisw 2, 0
  040c7b4  li 5, 176
  040c7b8  rlwimi 4, 3, 16, 8, 15
  040c7bc  li 3, 192
  040c7c0  stw 4, 640(31)
  040c7c4  stw 4, 644(31)
  040c7c8  stw 4, 648(31)
  040c7cc  stw 4, 652(31)
  040c7d0  stvx 2, 5, 31
  040c7d4  stvx 2, 3, 31
  040c7d8  stvx 2, 6, 31
  040c7dc  li 3, 8
  040c7e0  stvx 2, 7, 31
  040c7e4  lfs 1, 8(27)
  040c7e8  lfs 2, 0(23)
  040c7ec  addic 22, 31, 512
  040c7f0  fmuls 2, 2, 1
  040c7f4  lvlx 2, 3, 27
  040c7f8  li 3, 736
  040c7fc  vspltw 2, 2, 0
  040c800  addic 29, 31, 176
  040c804  addic 30, 31, 192
  040c808  addic 4, 18, 64
  040c80c  addic 26, 31, 208
  040c810  addic 24, 31, 224
  040c814  fneg 3, 2
  040c818  stfs 2, 224(31)
  040c81c  stfs 2, 192(31)
  040c820  stfs 1, 880(31)
  040c824  stfs 3, 208(31)
  040c828  stfs 3, 176(31)
  040c82c  lfs 1, 12(27)
  040c830  lfs 2, 128(23)
  040c834  stvx 2, 3, 31
  040c838  fadds 2, 2, 1
  040c83c  ori 3, 22, 0
  040c840  stfs 2, 184(31)
  040c844  lfs 2, 132(23)
  040c848  fadds 1, 2, 1
  040c84c  stfs 1, 200(31)
  040c850  bl 0x500ca4
  040c854  nop
  040c858  ori 3, 29, 0
  040c85c  ori 4, 29, 0
  040c860  ori 5, 22, 0
  040c864  bl 0x5e825c
  040c868  nop
  040c86c  ori 3, 30, 0
  040c870  ori 4, 30, 0
  040c874  ori 5, 22, 0
  040c878  bl 0x5e825c
  040c87c  nop
  040c880  ori 3, 26, 0
  040c884  ori 4, 26, 0
  040c888  ori 5, 22, 0
  040c88c  bl 0x5e825c
  040c890  nop
  040c894  ori 3, 24, 0
  040c898  ori 4, 24, 0
  040c89c  ori 5, 22, 0
  040c8a0  bl 0x5e825c
  040c8a4  nop
  040c8a8  lfs 1, 208(31)
  040c8ac  lfs 2, 176(31)
  040c8b0  lfs 3, 212(31)
  040c8b4  lfs 4, 180(31)
  040c8b8  lfs 5, 216(31)
  040c8bc  fsubs 1, 1, 2
  040c8c0  lfs 6, 184(31)
  040c8c4  fsubs 3, 3, 4
  040c8c8  lfd 7, 792(31)
  040c8cc  fsubs 5, 5, 6
  040c8d0  lfs 8, 220(31)
  040c8d4  lfs 9, 224(31)
  040c8d8  stfs 8, 268(31)
  040c8dc  addic 30, 31, 288
  040c8e0  addic 26, 31, 256
  040c8e4  addic 4, 31, 272
  040c8e8  fmuls 1, 1, 7
  040c8ec  fmuls 3, 3, 7
  040c8f0  fmuls 5, 5, 7
  040c8f4  lfs 7, 192(31)
  040c8f8  lfs 8, 228(31)
  040c8fc  lfs 10, 196(31)
  040c900  lfs 11, 232(31)
  040c904  fsubs 9, 9, 7
  040c908  lfs 12, 200(31)
  040c90c  fsubs 8, 8, 10
  040c910  fsubs 2, 7, 2
  040c914  ori 3, 30, 0
  040c918  fsubs 4, 10, 4
  040c91c  ori 5, 26, 0
  040c920  stfs 1, 256(31)
  040c924  stfs 3, 260(31)
  040c928  fsubs 1, 11, 12
  040c92c  stfs 5, 264(31)
  040c930  lfs 3, 24(23)
  040c934  lfs 5, 20(23)
  040c938  lfs 11, 36(23)
  040c93c  fsubs 3, 3, 5
  040c940  lfs 5, 28(23)
  040c944  lfs 13, 40(23)
  040c948  fsubs 5, 11, 5
  040c94c  lfs 11, 32(23)
  040c950  stfd 9, 872(31)
  040c954  fsubs 9, 13, 11
  040c958  lfs 11, 104(23)
  040c95c  lfs 7, 96(23)
  040c960  stfd 8, 864(31)
  040c964  lfs 8, 108(23)
  040c968  fsubs 7, 11, 7
  040c96c  lfs 11, 100(23)
  040c970  stfd 1, 856(31)
  040c974  fsubs 1, 12, 6
  040c978  fsubs 6, 8, 11
  040c97c  stfd 3, 848(31)
  040c980  lfs 16, 4(23)
  040c984  lfs 15, 128(23)
  040c988  stfd 5, 840(31)
  040c98c  lfs 3, 132(23)
  040c990  stfd 9, 832(31)
  040c994  fsubs 15, 16, 15
  040c998  stfs 2, 272(31)
  040c99c  fsubs 16, 16, 3
  040c9a0  lfs 2, 204(31)
  040c9a4  stfd 7, 824(31)
  040c9a8  stfs 4, 276(31)
  040c9ac  stfs 1, 280(31)
  040c9b0  stfd 6, 816(31)
  040c9b4  stfs 2, 284(31)
  040c9b8  bl 0x5e8f4c
  040c9bc  nop
  040c9c0  fmr 1, 14
  040c9c4  ori 3, 30, 0
  040c9c8  ori 4, 30, 0
  040c9cc  bl 0x5e7f98
  040c9d0  nop
  040c9d4  lfs 1, 176(31)
  040c9d8  lfs 2, 180(31)
  040c9dc  ori 30, 28, 0
  040c9e0  lfs 3, 184(31)
  040c9e4  lfs 4, 204(31)
  040c9e8  stfs 1, 780(31)
  040c9ec  lfs 1, 192(31)
  040c9f0  lfs 17, 188(31)
  040c9f4  stfs 2, 776(31)
  040c9f8  lfs 2, 196(31)
  040c9fc  lfs 5, 20(23)
  040ca00  lfs 6, 200(31)
  040ca04  stfs 3, 772(31)
  040ca08  stfd 4, 808(31)
  040ca0c  stfs 1, 768(31)
  040ca10  stfs 2, 764(31)
  040ca14  lfs 19, 28(23)
  040ca18  stfs 6, 760(31)
  040ca1c  lfs 20, 32(23)
  040ca20  lfs 21, 96(23)
  040ca24  stfs 5, 756(31)
  040ca28  lfs 22, 100(23)
  040ca2c  lfs 18, 144(23)
  040ca30  lbz 3, 9(23)
  040ca34  cmpwi 3, 0
  040ca38  bt 0, 0x40ce7c
  040ca3c  ori 3, 30, 0
  040ca40  bl 0x502730
  040ca44  nop
  040ca48  fmr 31, 1
  040ca4c  lbz 3, 9(23)
  040ca50  bl 0x502730
  040ca54  nop
  040ca58  fdivs 31, 31, 1
  040ca5c  lfs 28, 780(31)
  040ca60  lfs 29, 776(31)
  040ca64  lfs 30, 772(31)
  040ca68  lfs 1, 768(31)
  040ca6c  ori 3, 23, 0
  040ca70  lfs 2, 764(31)
  040ca74  lfs 3, 760(31)
  040ca78  lfd 4, 800(31)
  040ca7c  lfd 5, 808(31)
  040ca80  stfs 5, 252(31)
  040ca84  fsubs 1, 1, 28
  040ca88  fsubs 2, 2, 29
  040ca8c  fsubs 3, 3, 30
  040ca90  fmuls 1, 1, 4
  040ca94  fmuls 2, 2, 4
  040ca98  fmuls 3, 3, 4
  040ca9c  stfs 1, 240(31)
  040caa0  stfs 2, 244(31)
  040caa4  stfs 3, 248(31)
  040caa8  fmr 1, 31
  040caac  bl 0x40c310
  040cab0  ld 29, 888(31)
  040cab4  lbz 3, 8(23)
  040cab8  fmr 23, 1
  040cabc  cmpwi 3, 0
  040cac0  bt 0, 0x40cdd0
  040cac4  ld 4, 896(31)
  040cac8  lis 3, 65
  040cacc  mullw 4, 30, 4
  040cad0  addi 3, 3, -15408
  040cad4  addc 4, 4, 30
  040cad8  fsubs 25, 14, 31
  040cadc  slwi 27, 4, 4
  040cae0  lfs 27, 16(3)
  040cae4  lfs 24, 784(31)
  040cae8  addc 28, 27, 17
  040caec  lfs 1, 756(31)
  040caf0  fmuls 26, 27, 31
  040caf4  lwz 3, 904(31)
  040caf8  fmuls 24, 1, 24
  040cafc  addic 3, 3, 140
  040cb00  addc 27, 27, 3
  040cb04  stfs 27, 944(31)
  040cb08  ori 3, 29, 0
  040cb0c  stfs 23, 936(31)
  040cb10  stfs 30, 932(31)
  040cb14  stfs 24, 928(31)
  040cb18  stfs 17, 924(31)
  040cb1c  bl 0x502730
  040cb20  nop
  040cb24  fmr 17, 1
  040cb28  lbz 3, 8(23)
  040cb2c  bl 0x502730
  040cb30  nop
  040cb34  fdivs 17, 17, 1
  040cb38  lfs 1, 784(31)
  040cb3c  lfs 2, 92(23)
  040cb40  fmuls 1, 2, 1
  040cb44  bl 0x10de78
  040cb48  nop
  040cb4c  bl 0x5e8128
  040cb50  nop
  040cb54  lfs 2, 88(23)
  040cb58  ori 3, 23, 0
  040cb5c  fmadds 24, 2, 1, 24
  040cb60  fmr 1, 17
  040cb64  bl 0x40c310
  040cb68  fmr 30, 1
  040cb6c  lfs 1, 208(23)
  040cb70  lfs 2, 216(23)
  040cb74  fsubs 4, 14, 17
  040cb78  lfs 3, 212(23)
  040cb7c  lfs 5, 44(23)
  040cb80  lfs 6, 52(23)
  040cb84  stfs 18, 940(31)
  040cb88  stfs 21, 952(31)
  040cb8c  fmadds 1, 30, 1, 24
  040cb90  fmuls 4, 4, 16
  040cb94  fmadds 1, 2, 18, 1
  040cb98  fmadds 24, 17, 15, 4
  040cb9c  fmadds 23, 3, 23, 1
  040cba0  fadds 1, 23, 21
  040cba4  fmadds 1, 5, 17, 1
  040cba8  fmadds 1, 6, 31, 1
  040cbac  bl 0x10de78
  040cbb0  nop
  040cbb4  fadds 2, 23, 22
  040cbb8  stfs 22, 948(31)
  040cbbc  fmr 18, 1
  040cbc0  lfs 3, 48(23)
  040cbc4  lfs 1, 56(23)
  040cbc8  fmadds 2, 3, 31, 2
  040cbcc  fmadds 1, 1, 17, 2
  040cbd0  bl 0x10de78
  040cbd4  nop
  040cbd8  fmuls 27, 17, 27
  040cbdc  fmr 22, 1
  040cbe0  fmr 1, 27
  040cbe4  bl 0x5e8128
  040cbe8  nop
  040cbec  fsqrts 21, 1
  040cbf0  fmr 1, 18
  040cbf4  fmuls 2, 21, 24
  040cbf8  fmuls 24, 2, 25
  040cbfc  bl 0x5e8078
  040cc00  nop
  040cc04  fmuls 1, 1, 19
  040cc08  addic 3, 31, 304
  040cc0c  addic 4, 31, 240
  040cc10  fmuls 1, 1, 21
  040cc14  fmuls 1, 1, 30
  040cc18  bl 0x5e7f98
  040cc1c  nop
  040cc20  fmr 1, 22
  040cc24  bl 0x5e8128
  040cc28  nop
  040cc2c  fmuls 1, 1, 20
  040cc30  addic 3, 31, 320
  040cc34  ori 4, 26, 0
  040cc38  fmuls 1, 1, 21
  040cc3c  fmuls 1, 1, 30
  040cc40  bl 0x5e7f98
  040cc44  nop
  040cc48  fmr 1, 26
  040cc4c  bl 0x5e8128
  040cc50  nop
  040cc54  fmr 30, 1
  040cc58  fmr 1, 27
  040cc5c  bl 0x5e8128
  040cc60  nop
  040cc64  lfs 2, 44(23)
  040cc68  fmuls 30, 30, 1
  040cc6c  fmadds 1, 2, 17, 23
  040cc70  bl 0x10de78
  040cc74  nop
  040cc78  bl 0x5e8128
  040cc7c  nop
  040cc80  fmr 27, 1
  040cc84  lfs 1, 52(23)
  040cc88  lfs 22, 120(23)
  040cc8c  fmadds 1, 1, 31, 23
  040cc90  bl 0x10de78
  040cc94  nop
  040cc98  bl 0x5e8128
  040cc9c  nop
  040cca0  lfs 2, 124(23)
  040cca4  addic 4, 31, 288
  040cca8  addic 3, 31, 336
  040ccac  fmuls 1, 2, 1
  040ccb0  fmadds 1, 22, 27, 1
  040ccb4  fmuls 1, 30, 1
  040ccb8  bl 0x5e7f98
  040ccbc  nop
  040ccc0  fmr 1, 24
  040ccc4  addic 3, 31, 352
  040ccc8  ori 4, 26, 0
  040cccc  bl 0x5e7f98
  040ccd0  nop
  040ccd4  lfs 1, 304(31)
  040ccd8  lfs 2, 320(31)
  040ccdc  lfs 3, 308(31)
  040cce0  lfs 4, 324(31)
  040cce4  fadds 1, 1, 2
  040cce8  lfs 2, 312(31)
  040ccec  lfs 5, 328(31)
  040ccf0  fadds 3, 3, 4
  040ccf4  fadds 2, 2, 5
  040ccf8  lfs 4, 336(31)
  040ccfc  slwi 3, 29, 4
  040cd00  lfs 5, 340(31)
  040cd04  lfs 6, 344(31)
  040cd08  lfs 7, 352(31)
  040cd0c  addc 4, 3, 28
  040cd10  fadds 1, 1, 4
  040cd14  clrldi 4, 4, 32
  040cd18  lfs 4, 356(31)
  040cd1c  lfs 8, 360(31)
  040cd20  fadds 3, 3, 5
  040cd24  lfs 30, 932(31)
  040cd28  fadds 2, 2, 6
  040cd2c  lfs 17, 924(31)
  040cd30  stfs 17, 12(4)
  040cd34  fsubs 1, 1, 7
  040cd38  fsubs 3, 3, 4
  040cd3c  fsubs 2, 2, 8
  040cd40  addc 3, 3, 27
  040cd44  fadds 1, 28, 1
  040cd48  fadds 3, 29, 3
  040cd4c  fadds 2, 30, 2
  040cd50  clrldi 3, 3, 32
  040cd54  addic 29, 29, 1
  040cd58  stfs 1, 0(4)
  040cd5c  stfs 3, 4(4)
  040cd60  stfs 2, 8(4)
  040cd64  lfs 1, 344(23)
  040cd68  lfs 3, 348(23)
  040cd6c  fmuls 2, 1, 21
  040cd70  fsubs 1, 14, 1
  040cd74  fsubs 4, 14, 3
  040cd78  extsw 29, 29
  040cd7c  fmuls 2, 2, 21
  040cd80  fmadds 3, 3, 31, 4
  040cd84  fmadds 1, 2, 21, 1
  040cd88  fmuls 1, 1, 3
  040cd8c  fdivs 1, 14, 1
  040cd90  stfs 1, 0(3)
  040cd94  lfs 1, 240(31)
  040cd98  lfs 2, 244(31)
  040cd9c  fadds 28, 28, 1
  040cda0  lfs 1, 248(31)
  040cda4  fadds 29, 29, 2
  040cda8  lbz 3, 8(23)
  040cdac  lfs 24, 928(31)
  040cdb0  lfs 23, 936(31)
  040cdb4  cmpw 29, 3
  040cdb8  lfs 18, 940(31)
  040cdbc  fadds 30, 30, 1
  040cdc0  lfs 27, 944(31)
  040cdc4  lfs 22, 948(31)
  040cdc8  lfs 21, 952(31)
  040cdcc  bf 1, 0x40cb04
  040cdd0  lfs 1, 780(31)
  040cdd4  addic 30, 30, 1
  040cdd8  lfs 2, 256(31)
  040cddc  lfs 3, 776(31)
  040cde0  lfs 4, 260(31)
  040cde4  fadds 1, 1, 2
  040cde8  lfs 5, 772(31)
  040cdec  extsw 30, 30
  040cdf0  lfs 2, 768(31)
  040cdf4  fadds 3, 3, 4
  040cdf8  lfs 4, 264(31)
  040cdfc  lfd 6, 792(31)
  040ce00  lfd 7, 872(31)
  040ce04  fadds 4, 5, 4
  040ce08  lfs 5, 764(31)
  040ce0c  lfs 8, 760(31)
  040ce10  lfd 9, 864(31)
  040ce14  fmadds 2, 7, 6, 2
  040ce18  lfs 7, 756(31)
  040ce1c  lfd 10, 856(31)
  040ce20  lfd 11, 848(31)
  040ce24  fmadds 5, 9, 6, 5
  040ce28  fmadds 8, 10, 6, 8
  040ce2c  stfs 1, 780(31)
  040ce30  fmadds 1, 11, 6, 7
  040ce34  stfs 3, 776(31)
  040ce38  lfd 3, 840(31)
  040ce3c  lfd 7, 832(31)
  040ce40  stfs 4, 772(31)
  040ce44  fmadds 19, 3, 6, 19
  040ce48  lfd 3, 800(31)
  040ce4c  fmadds 20, 7, 6, 20
  040ce50  lfd 4, 824(31)
  040ce54  stfs 2, 768(31)
  040ce58  lfd 2, 816(31)
  040ce5c  fmadds 21, 4, 3, 21
  040ce60  lbz 3, 9(23)
  040ce64  stfs 5, 764(31)
  040ce68  cmpw 30, 3
  040ce6c  stfs 8, 760(31)
  040ce70  fmadds 22, 2, 6, 22
  040ce74  stfs 1, 756(31)
  040ce78  bf 1, 0x40ca3c
  040ce7c  lfs 31, 784(31)
  040ce80  stw 25, 920(31)
  040ce84  lfs 1, 72(23)
  040ce88  lfs 30, 64(23)
  040ce8c  fmuls 1, 31, 1
  040ce90  bl 0x10de78
  040ce94  nop
  040ce98  bl 0x5e8128
  040ce9c  nop
  040cea0  lfs 2, 68(23)
  040cea4  addic 4, 31, 720
  040cea8  fmuls 1, 2, 1
  040ceac  fmadds 1, 31, 30, 1
  040ceb0  bl 0x5026dc
  040ceb4  nop
  040ceb8  ld 3, 888(31)
  040cebc  lbz 4, 8(23)
  040cec0  cmpwi 4, 0
  040cec4  bt 0, 0x40cef8
  040cec8  ori 4, 25, 0
  040cecc  stw 25, 920(31)
  040ced0  stfs 1, 128(4)
  040ced4  lfd 2, 800(31)
  040ced8  lfs 3, 112(23)
  040cedc  fdivs 2, 2, 3
  040cee0  addic 3, 3, 1
  040cee4  addic 4, 4, 4
  040cee8  lbz 5, 8(23)
  040ceec  cmpw 3, 5
  040cef0  fadds 1, 1, 2
  040cef4  bf 1, 0x40ced0
  040cef8  lfs 1, 84(23)
  040cefc  lfs 30, 76(23)
  040cf00  fmuls 1, 31, 1
  040cf04  bl 0x10de78
  040cf08  nop
  040cf0c  bl 0x5e8128
  040cf10  nop
  040cf14  lfs 2, 80(23)
  040cf18  addic 4, 31, 720
  040cf1c  fmuls 1, 2, 1
  040cf20  fmadds 1, 31, 30, 1
  040cf24  bl 0x5026dc
  040cf28  nop
  040cf2c  lbz 3, 9(23)
  040cf30  ld 4, 888(31)
  040cf34  cmpwi 3, 0
  040cf38  bt 0, 0x40cf68
  040cf3c  ori 5, 1, 0
  040cf40  stfs 1, 128(5)
  040cf44  lfd 2, 792(31)
  040cf48  lfs 3, 116(23)
  040cf4c  fdivs 2, 2, 3
  040cf50  addic 4, 4, 1
  040cf54  addic 5, 5, 4
  040cf58  lbz 3, 9(23)
  040cf5c  cmpw 4, 3
  040cf60  fadds 1, 1, 2
  040cf64  bf 1, 0x40cf40
  040cf68  cmpwi 3, 0
  040cf6c  ld 16, 888(31)
  040cf70  bf 1, 0x40d21c
  040cf74  ld 15, 888(31)
  040cf78  ori 20, 1, 0
  040cf7c  ori 14, 15, 0
  040cf80  ld 5, 888(31)
  040cf84  lbz 4, 8(23)
  040cf88  ori 24, 5, 0
  040cf8c  cmpwi 4, 0
  040cf90  bf 1, 0x40d200
  040cf94  addic 3, 1, 132
  040cf98  addc 27, 14, 16
  040cf9c  addc 21, 15, 3
  040cfa0  ld 3, 912(31)
  040cfa4  lis 22, 161
  040cfa8  lwz 26, 904(31)
  040cfac  ori 30, 5, 0
  040cfb0  addc 28, 27, 3
  040cfb4  lwz 29, 920(31)
  040cfb8  addic 25, 26, 140
  040cfbc  clrldi 21, 21, 32
  040cfc0  sldi 27, 27, 4
  040cfc4  sldi 28, 28, 4
  040cfc8  addic 26, 26, 156
  040cfcc  addic 22, 22, 24396
  040cfd0  lfs 1, 128(29)
  040cfd4  addc 3, 27, 17
  040cfd8  stfs 1, 656(31)
  040cfdc  addc 3, 3, 30
  040cfe0  lfs 2, 128(20)
  040cfe4  clrldi 3, 3, 32
  040cfe8  stfs 2, 660(31)
  040cfec  lfs 3, 132(29)
  040cff0  stfs 2, 668(31)
  040cff4  stfs 3, 664(31)
  040cff8  stfs 1, 672(31)
  040cffc  lfs 1, 0(21)
  040d000  stfs 3, 680(31)
  040d004  stfs 1, 676(31)
  040d008  stfs 1, 684(31)
  040d00c  lfs 1, 0(3)
  040d010  lfs 2, 16(18)
  040d014  lfs 3, 20(18)
  040d018  fadds 1, 1, 2
  040d01c  lfs 4, 24(18)
  040d020  addc 4, 28, 17
  040d024  addc 4, 4, 30
  040d028  clrldi 4, 4, 32
  040d02c  stfs 1, 576(31)
  040d030  lfs 1, 4(3)
  040d034  fadds 1, 1, 3
  040d038  stfs 1, 580(31)
  040d03c  lfs 1, 8(3)
  040d040  fadds 1, 1, 4
  040d044  stfs 1, 584(31)
  040d048  lfs 1, 12(3)
  040d04c  stfs 1, 588(31)
  040d050  lfs 1, 16(3)
  040d054  fadds 1, 1, 2
  040d058  stfs 1, 592(31)
  040d05c  lfs 1, 20(3)
  040d060  fadds 1, 1, 3
  040d064  stfs 1, 596(31)
  040d068  lfs 1, 24(3)
  040d06c  fadds 1, 1, 4
  040d070  stfs 1, 600(31)
  040d074  lfs 1, 28(3)
  040d078  stfs 1, 604(31)
  040d07c  lfs 1, 0(4)
  040d080  fadds 1, 1, 2
  040d084  addc 3, 27, 25
  040d088  addc 3, 3, 30
  040d08c  clrldi 3, 3, 32
  040d090  stfs 1, 608(31)
  040d094  lfs 1, 4(4)
  040d098  fadds 1, 1, 3
  040d09c  stfs 1, 612(31)
  040d0a0  lfs 1, 8(4)
  040d0a4  fadds 1, 1, 4
  040d0a8  stfs 1, 616(31)
  040d0ac  lfs 1, 12(4)
  040d0b0  stfs 1, 620(31)
  040d0b4  lfs 1, 16(4)
  040d0b8  fadds 1, 1, 2
  040d0bc  stfs 1, 624(31)
  040d0c0  lfs 1, 20(4)
  040d0c4  fadds 1, 1, 3
  040d0c8  stfs 1, 628(31)
  040d0cc  lfs 1, 24(4)
  040d0d0  fadds 1, 1, 4
  040d0d4  stfs 1, 632(31)
  040d0d8  lfs 1, 28(4)
  040d0dc  stfs 1, 636(31)
  040d0e0  lfs 1, 0(3)
  040d0e4  bl 0x502758
  040d0e8  nop
  040d0ec  divw 3, 19, 3
  040d0f0  lbz 4, 17(23)
  040d0f4  addc 6, 27, 26
  040d0f8  lbz 5, 18(23)
  040d0fc  lbz 7, 16(23)
  040d100  slwi 4, 4, 16
  040d104  addc 6, 6, 30
  040d108  rlwimi 4, 3, 24, 0, 7
  040d10c  rlwimi 7, 5, 8, 16, 23
  040d110  clrldi 3, 6, 32
  040d114  or 4, 4, 7
  040d118  stw 4, 640(31)
  040d11c  lfs 1, 0(3)
  040d120  bl 0x502758
  040d124  nop
  040d128  divw 3, 19, 3
  040d12c  lbz 4, 17(23)
  040d130  lbz 5, 18(23)
  040d134  addc 6, 28, 25
  040d138  lbz 7, 16(23)
  040d13c  slwi 4, 4, 16
  040d140  addc 6, 6, 30
  040d144  rlwimi 4, 3, 24, 0, 7
  040d148  rlwimi 7, 5, 8, 16, 23
  040d14c  clrldi 3, 6, 32
  040d150  or 4, 4, 7
  040d154  stw 4, 644(31)
  040d158  lfs 1, 0(3)
  040d15c  bl 0x502758
  040d160  nop
  040d164  divw 3, 19, 3
  040d168  lbz 4, 17(23)
  040d16c  addc 6, 28, 26
  040d170  lbz 5, 18(23)
  040d174  lbz 7, 16(23)
  040d178  slwi 4, 4, 16
  040d17c  addc 6, 6, 30
  040d180  rlwimi 4, 3, 24, 0, 7
  040d184  rlwimi 7, 5, 8, 16, 23
  040d188  clrldi 3, 6, 32
  040d18c  or 4, 4, 7
  040d190  stw 4, 648(31)
  040d194  lfs 1, 0(3)
  040d198  bl 0x502758
  040d19c  nop
  040d1a0  divw 3, 19, 3
  040d1a4  lbz 4, 17(23)
  040d1a8  lbz 5, 18(23)
  040d1ac  slwi 4, 4, 16
  040d1b0  lbz 6, 16(23)
  040d1b4  rlwimi 4, 3, 24, 0, 7
  040d1b8  rlwimi 6, 5, 8, 16, 23
  040d1bc  lwz 7, 28(22)
  040d1c0  addic 3, 31, 576
  040d1c4  or 6, 4, 6
  040d1c8  li 4, 0
  040d1cc  li 5, 0
  040d1d0  stw 6, 652(31)
  040d1d4  ori 6, 7, 0
  040d1d8  li 7, 9
  040d1dc  bl 0x72280
  040d1e0  nop
  040d1e4  addic 24, 24, 1
  040d1e8  lbz 3, 8(23)
  040d1ec  addic 30, 30, 16
  040d1f0  addic 29, 29, 4
  040d1f4  cmpw 24, 3
  040d1f8  bt 0, 0x40cfd0
  040d1fc  lbz 3, 9(23)
  040d200  addic 16, 16, 1
  040d204  ld 4, 896(31)
  040d208  addic 20, 20, 4
  040d20c  cmpw 16, 3
  040d210  addic 15, 15, 4
  040d214  addc 14, 14, 4
  040d218  bt 0, 0x40cf80
  040d21c  lhz 3, 10(23)
  040d220  rlwinm 3, 3, 0, 30, 30
  040d224  cmpwi 3, 0
  040d228  bt 2, 0x40d964
  040d22c  addic 3, 23, 248
  040d230  bl 0x4fff60
  040d234  nop
  040d238  cmpwi 3, 0
  040d23c  bt 2, 0x40d47c
  040d240  li 3, 243
  040d244  vspltisw 2, -8
  040d248  li 4, 736
  040d24c  vspltisw 4, -1
  040d250  lvlx 3, 3, 23
  040d254  lis 3, 114
  040d258  vsrw 2, 3, 2
  040d25c  lvx 3, 4, 31
  040d260  li 4, -3056
  040d264  vslw 4, 4, 4
  040d268  vcfsx 2, 2, 0
  040d26c  lvlx 5, 4, 3
  040d270  li 3, 248
  040d274  ld 30, 888(31)
  040d278  vaddfp 2, 2, 3
  040d27c  vmaddfp 2, 5, 2, 4
  040d280  vctsxs 2, 2, 0
  040d284  vspltw 2, 2, 0
  040d288  stvewx 2, 3, 23
  040d28c  lbz 3, 242(23)
  040d290  cmpwi 3, 0
  040d294  bf 1, 0x40d47c
  040d298  lis 3, 65
  040d29c  lfs 28, 880(31)
  040d2a0  addic 29, 31, 256
  040d2a4  addi 3, 3, -15408
  040d2a8  lfs 31, 20(3)
  040d2ac  lfs 30, 24(3)
  040d2b0  lfs 29, 16(3)
  040d2b4  fmr 1, 31
  040d2b8  lfs 3, 0(23)
  040d2bc  fmr 2, 14
  040d2c0  fmuls 27, 3, 28
  040d2c4  bl 0xfcbe8
  040d2c8  nop
  040d2cc  lfs 2, 244(23)
  040d2d0  fmuls 2, 1, 2
  040d2d4  fmr 1, 30
  040d2d8  bl 0xfcbe8
  040d2dc  nop
  040d2e0  fmr 26, 1
  040d2e4  fmuls 1, 26, 29
  040d2e8  bl 0x5e8078
  040d2ec  nop
  040d2f0  fsqrts 1, 1
  040d2f4  lfs 2, 252(23)
  040d2f8  lfs 3, 256(23)
  040d2fc  addic 3, 31, 400
  040d300  ori 4, 29, 0
  040d304  fnmadds 1, 1, 3, 2
  040d308  bl 0x5e7f98
  040d30c  nop
  040d310  addic 28, 31, 384
  040d314  fmuls 1, 27, 26
  040d318  addic 4, 31, 240
  040d31c  ori 3, 28, 0
  040d320  bl 0x5e7f98
  040d324  nop
  040d328  lfs 1, 384(31)
  040d32c  lfs 2, 16(18)
  040d330  lfs 3, 388(31)
  040d334  lfs 4, 20(18)
  040d338  fadds 1, 1, 2
  040d33c  lfs 2, 392(31)
  040d340  lfs 5, 24(18)
  040d344  fadds 3, 3, 4
  040d348  lfs 4, 400(31)
  040d34c  fadds 2, 2, 5
  040d350  lfs 5, 404(31)
  040d354  lfs 6, 408(31)
  040d358  fadds 1, 1, 4
  040d35c  fadds 3, 3, 5
  040d360  fadds 2, 2, 6
  040d364  stfs 1, 384(31)
  040d368  stfs 3, 388(31)
  040d36c  stfs 2, 392(31)
  040d370  lfs 2, 220(23)
  040d374  fneg 1, 2
  040d378  bl 0xfcbe8
  040d37c  nop
  040d380  lis 27, 114
  040d384  lfs 2, -3064(27)
  040d388  fmuls 1, 1, 2
  040d38c  stfs 1, 368(31)
  040d390  lfs 2, 220(23)
  040d394  fneg 1, 2
  040d398  bl 0xfcbe8
  040d39c  nop
  040d3a0  lfs 2, -3064(27)
  040d3a4  fmuls 2, 1, 2
  040d3a8  fmr 1, 30
  040d3ac  stfs 2, 372(31)
  040d3b0  lfs 2, 224(23)
  040d3b4  bl 0xfcbe8
  040d3b8  nop
  040d3bc  lfs 2, -3064(27)
  040d3c0  fmuls 1, 1, 2
  040d3c4  stfs 1, 376(31)
  040d3c8  lfs 1, 228(23)
  040d3cc  lfs 2, 232(23)
  040d3d0  bl 0xfcbe8
  040d3d4  nop
  040d3d8  lhz 3, 240(23)
  040d3dc  fmr 27, 1
  040d3e0  extsh 3, 3
  040d3e4  extsw 3, 3
  040d3e8  std 3, 960(31)
  040d3ec  lis 3, 114
  040d3f0  lfs 1, -3056(3)
  040d3f4  lbz 27, 236(23)
  040d3f8  lbz 3, 239(23)
  040d3fc  lbz 26, 237(23)
  040d400  lbz 25, 238(23)
  040d404  lfd 2, 960(31)
  040d408  fcfid 2, 2
  040d40c  frsp 2, 2
  040d410  fadds 2, 2, 28
  040d414  fmuls 1, 1, 2
  040d418  fctiwz 1, 1
  040d41c  stfd 1, 960(31)
  040d420  lwz 4, 964(31)
  040d424  extsh 24, 4
  040d428  bl 0x502730
  040d42c  nop
  040d430  fmuls 1, 1, 26
  040d434  bl 0x502758
  040d438  nop
  040d43c  clrlwi 6, 3, 24
  040d440  ori 3, 18, 0
  040d444  fmr 1, 27
  040d448  addic 5, 31, 368
  040d44c  ori 10, 25, 0
  040d450  std 6, 112(1)
  040d454  ori 4, 28, 0
  040d458  ori 7, 24, 0
  040d45c  ori 8, 27, 0
  040d460  ori 9, 26, 0
  040d464  bl 0x12df70
  040d468  nop
  040d46c  addic 30, 30, 1
  040d470  lbz 3, 242(23)
  040d474  cmpw 30, 3
  040d478  bt 0, 0x40d2b4
  040d47c  addic 3, 23, 290
  040d480  bl 0x4fffb4
  040d484  nop
  040d488  cmpwi 3, 0
  040d48c  bt 2, 0x40d71c
  040d490  li 3, 289
  040d494  vspltisw 2, -8
  040d498  li 4, 736
  040d49c  vspltisw 4, -1
  040d4a0  lvlx 3, 3, 23
  040d4a4  lis 3, 114
  040d4a8  vsrw 2, 3, 2
  040d4ac  lvx 3, 4, 31
  040d4b0  li 4, -3056
  040d4b4  vslw 4, 4, 4
  040d4b8  vcfsx 2, 2, 0
  040d4bc  lvlx 5, 4, 3
  040d4c0  li 3, 290
  040d4c4  ld 30, 888(31)
  040d4c8  vaddfp 2, 2, 3
  040d4cc  vmaddfp 2, 5, 2, 4
  040d4d0  vctsxs 2, 2, 0
  040d4d4  vsplth 2, 2, 1
  040d4d8  stvehx 2, 3, 23
  040d4dc  lbz 3, 288(23)
  040d4e0  cmpwi 3, 0
  040d4e4  bf 1, 0x40d71c
  040d4e8  lis 3, 65
  040d4ec  lfs 28, 880(31)
  040d4f0  addic 29, 31, 256
  040d4f4  addi 3, 3, -15408
  040d4f8  lfs 31, 20(3)
  040d4fc  lfs 30, 16(3)
  040d500  lfs 29, 24(3)
  040d504  lbz 3, 278(23)
  040d508  lbz 4, 279(23)
  040d50c  slwi 3, 3, 16
  040d510  lfs 1, 0(23)
  040d514  rlwimi 3, 4, 24, 0, 7
  040d518  lbz 4, 277(23)
  040d51c  lbz 5, 276(23)
  040d520  lbz 6, 282(23)
  040d524  rlwimi 5, 4, 8, 16, 23
  040d528  slwi 4, 6, 16
  040d52c  fmuls 27, 1, 28
  040d530  lbz 6, 283(23)
  040d534  or 3, 3, 5
  040d538  lbz 5, 281(23)
  040d53c  rlwimi 4, 6, 24, 0, 7
  040d540  lbz 6, 280(23)
  040d544  extsw 28, 3
  040d548  lfs 1, 268(23)
  040d54c  rlwimi 6, 5, 8, 16, 23
  040d550  lfs 2, 272(23)
  040d554  or 3, 4, 6
  040d558  extsw 27, 3
  040d55c  bl 0xfcbe8
  040d560  nop
  040d564  lhz 3, 284(23)
  040d568  lhz 4, 286(23)
  040d56c  extsh 3, 3
  040d570  fmr 26, 1
  040d574  extsh 4, 4
  040d578  bl 0xfe484
  040d57c  nop
  040d580  extsw 3, 3
  040d584  fmr 1, 31
  040d588  fmr 2, 14
  040d58c  std 3, 960(31)
  040d590  lis 3, 114
  040d594  lfs 3, -3056(3)
  040d598  lfd 4, 960(31)
  040d59c  fcfid 4, 4
  040d5a0  frsp 4, 4
  040d5a4  fadds 4, 4, 28
  040d5a8  fmuls 3, 3, 4
  040d5ac  fctiwz 3, 3
  040d5b0  stfd 3, 960(31)
  040d5b4  lwz 3, 964(31)
  040d5b8  extsw 26, 3
  040d5bc  bl 0xfcbe8
  040d5c0  nop
  040d5c4  lfs 2, 292(23)
  040d5c8  fmuls 2, 1, 2
  040d5cc  fneg 1, 2
  040d5d0  bl 0xfcbe8
  040d5d4  nop
  040d5d8  fmr 25, 1
  040d5dc  fmuls 1, 25, 30
  040d5e0  bl 0x5e8078
  040d5e4  nop
  040d5e8  fsqrts 24, 1
  040d5ec  addic 3, 31, 448
  040d5f0  lfs 1, 300(23)
  040d5f4  ori 4, 29, 0
  040d5f8  lfs 2, 304(23)
  040d5fc  fnmadds 1, 24, 2, 1
  040d600  bl 0x5e7f98
  040d604  nop
  040d608  addic 25, 31, 432
  040d60c  fmuls 1, 27, 25
  040d610  addic 4, 31, 240
  040d614  ori 3, 25, 0
  040d618  bl 0x5e7f98
  040d61c  nop
  040d620  lfs 1, 432(31)
  040d624  lfs 2, 16(18)
  040d628  lfs 3, 436(31)
  040d62c  lfs 4, 20(18)
  040d630  fadds 1, 1, 2
  040d634  lfs 2, 440(31)
  040d638  lfs 5, 24(18)
  040d63c  fadds 3, 3, 4
  040d640  lfs 4, 448(31)
  040d644  fadds 2, 2, 5
  040d648  lfs 5, 452(31)
  040d64c  lfs 6, 456(31)
  040d650  fadds 1, 1, 4
  040d654  fadds 3, 3, 5
  040d658  fadds 2, 2, 6
  040d65c  stfs 1, 432(31)
  040d660  stfs 3, 436(31)
  040d664  stfs 2, 440(31)
  040d668  lfs 2, 260(23)
  040d66c  fneg 1, 2
  040d670  bl 0xfcbe8
  040d674  nop
  040d678  lis 24, 114
  040d67c  lfs 2, -3064(24)
  040d680  fmuls 1, 1, 2
  040d684  stfs 1, 416(31)
  040d688  lfs 2, 260(23)
  040d68c  fneg 1, 2
  040d690  bl 0xfcbe8
  040d694  nop
  040d698  lfs 2, -3064(24)
  040d69c  fmuls 2, 1, 2
  040d6a0  fmr 1, 29
  040d6a4  stfs 2, 420(31)
  040d6a8  lfs 2, 264(23)
  040d6ac  bl 0xfcbe8
  040d6b0  nop
  040d6b4  lfs 2, -3064(24)
  040d6b8  lfs 3, 416(31)
  040d6bc  fmuls 2, 1, 2
  040d6c0  lfs 4, 420(31)
  040d6c4  ori 3, 25, 0
  040d6c8  addic 4, 31, 416
  040d6cc  fmr 1, 26
  040d6d0  ori 8, 26, 0
  040d6d4  ori 5, 28, 0
  040d6d8  ori 6, 27, 0
  040d6dc  stfs 2, 424(31)
  040d6e0  lfs 5, 296(23)
  040d6e4  fsubs 6, 14, 5
  040d6e8  fmadds 5, 24, 5, 6
  040d6ec  fmuls 3, 3, 5
  040d6f0  fmuls 4, 4, 5
  040d6f4  fmuls 2, 2, 5
  040d6f8  stfs 3, 416(31)
  040d6fc  stfs 4, 420(31)
  040d700  stfs 2, 424(31)
  040d704  bl 0x126dd8
  040d708  nop
  040d70c  lbz 3, 288(23)
  040d710  addic 30, 30, 1
  040d714  cmpw 30, 3
  040d718  bt 0, 0x40d504
  040d71c  lbz 30, 315(23)
  040d720  addic 29, 31, 256
  040d724  lfs 28, 880(31)
  040d728  extsb 30, 30
  040d72c  cmpwi 30, -1
  040d730  bt 2, 0x40d958
  040d734  lis 3, 162
  040d738  sldi 4, 30, 5
  040d73c  lfs 1, 324(23)
  040d740  addic 3, 3, -8448
  040d744  lfs 2, 320(23)
  040d748  addc 30, 3, 4
  040d74c  clrldi 30, 30, 32
  040d750  lis 3, 114
  040d754  lfs 3, 20(30)
  040d758  lfs 4, 16(30)
  040d75c  fsubs 3, 1, 3
  040d760  fsubs 1, 2, 4
  040d764  lfs 2, 328(23)
  040d768  lfs 4, 24(30)
  040d76c  fsubs 2, 2, 4
  040d770  fmuls 3, 3, 3
  040d774  fmadds 3, 1, 1, 3
  040d778  fmadds 2, 2, 2, 3
  040d77c  lfs 3, 316(23)
  040d780  lfs 4, -3064(3)
  040d784  fmuls 3, 3, 4
  040d788  fsqrts 2, 2
  040d78c  fcmpu 0, 2, 3
  040d790  cror 6, 1, 2
  040d794  bt 6, 0x40d8cc
  040d798  lbz 3, 313(23)
  040d79c  neg 4, 3
  040d7a0  clrldi 3, 3, 32
  040d7a4  extsw 4, 4
  040d7a8  std 4, 960(31)
  040d7ac  lfd 1, 960(31)
  040d7b0  std 3, 960(31)
  040d7b4  fcfid 1, 1
  040d7b8  frsp 1, 1
  040d7bc  lfd 2, 960(31)
  040d7c0  fcfid 2, 2
  040d7c4  frsp 2, 2
  040d7c8  bl 0xfcbe8
  040d7cc  nop
  040d7d0  lbz 3, 314(23)
  040d7d4  neg 4, 3
  040d7d8  clrldi 3, 3, 32
  040d7dc  extsw 4, 4
  040d7e0  std 4, 960(31)
  040d7e4  lfs 2, 0(23)
  040d7e8  fadds 1, 1, 2
  040d7ec  fmuls 31, 1, 28
  040d7f0  lfd 1, 960(31)
  040d7f4  std 3, 960(31)
  040d7f8  fcfid 1, 1
  040d7fc  frsp 1, 1
  040d800  lfd 2, 960(31)
  040d804  fcfid 2, 2
  040d808  frsp 2, 2
  040d80c  bl 0xfcbe8
  040d810  nop
  040d814  lfs 2, 4(23)
  040d818  addic 3, 31, 464
  040d81c  fadds 2, 1, 2
  040d820  fmr 1, 31
  040d824  addic 4, 31, 240
  040d828  fmuls 31, 2, 28
  040d82c  bl 0x5e7f98
  040d830  nop
  040d834  fneg 1, 31
  040d838  addic 3, 31, 480
  040d83c  ori 4, 29, 0
  040d840  bl 0x5e7f98
  040d844  nop
  040d848  lfs 1, 464(31)
  040d84c  lfs 2, 480(31)
  040d850  fadds 1, 1, 2
  040d854  stfs 1, 320(23)
  040d858  lfs 2, 468(31)
  040d85c  lfs 3, 484(31)
  040d860  fadds 2, 2, 3
  040d864  stfs 2, 324(23)
  040d868  lfs 3, 472(31)
  040d86c  lfs 4, 488(31)
  040d870  fadds 3, 3, 4
  040d874  stfs 3, 328(23)
  040d878  lfs 4, 476(31)
  040d87c  stfs 4, 332(23)
  040d880  lfs 4, 176(31)
  040d884  fadds 1, 1, 4
  040d888  stfs 1, 320(23)
  040d88c  lfs 4, 180(31)
  040d890  fadds 2, 2, 4
  040d894  stfs 2, 324(23)
  040d898  lfs 4, 184(31)
  040d89c  fadds 3, 3, 4
  040d8a0  stfs 3, 328(23)
  040d8a4  lfs 4, 16(18)
  040d8a8  fadds 1, 1, 4
  040d8ac  stfs 1, 320(23)
  040d8b0  lfs 1, 20(18)
  040d8b4  fadds 1, 2, 1
  040d8b8  stfs 1, 324(23)
  040d8bc  lfs 1, 24(18)
  040d8c0  fadds 1, 3, 1
  040d8c4  stfs 1, 328(23)
  040d8c8  b 0x40d958
  040d8cc  stfs 1, 496(31)
  040d8d0  lfs 1, 324(23)
  040d8d4  lis 5, 114
  040d8d8  lfs 2, 20(30)
  040d8dc  addic 3, 31, 496
  040d8e0  fsubs 1, 1, 2
  040d8e4  ori 4, 3, 0
  040d8e8  lfs 2, -3064(5)
  040d8ec  stfs 1, 500(31)
  040d8f0  lfs 1, 328(23)
  040d8f4  lfs 3, 24(30)
  040d8f8  fsubs 1, 1, 3
  040d8fc  stfs 1, 504(31)
  040d900  lfs 1, 332(23)
  040d904  stfs 1, 508(31)
  040d908  lfs 1, 316(23)
  040d90c  fmuls 1, 1, 2
  040d910  bl 0x5e7f98
  040d914  nop
  040d918  lfs 1, 16(30)
  040d91c  lfs 2, 496(31)
  040d920  fadds 1, 1, 2
  040d924  lfs 2, 20(30)
  040d928  lfs 3, 24(30)
  040d92c  stfs 1, 16(30)
  040d930  lfs 1, 500(31)
  040d934  fadds 1, 2, 1
  040d938  stfs 1, 20(30)
  040d93c  lfs 1, 504(31)
  040d940  fadds 1, 3, 1
  040d944  stfs 1, 24(30)
  040d948  lbz 3, 311(23)
  040d94c  bl 0x502730
  040d950  nop
  040d954  stfs 1, 28(30)
  040d958  lhz 3, 10(23)
  040d95c  xori 3, 3, 2
  040d960  sth 3, 10(23)
  040d964  lwz 1, 752(31)
  040d968  addi 11, 31, 1264
  040d96c  ld 0, 16(11)
  040d970  mtlr 0
  040d974  lfd 14, -144(11)
  040d978  lfd 15, -136(11)
  040d97c  lfd 16, -128(11)
  040d980  lfd 17, -120(11)
  040d984  lfd 18, -112(11)
  040d988  lfd 19, -104(11)
  040d98c  lfd 20, -96(11)
  040d990  lfd 21, -88(11)
  040d994  lfd 22, -80(11)
  040d998  lfd 23, -72(11)
  040d99c  lfd 24, -64(11)
  040d9a0  lfd 25, -56(11)
  040d9a4  lfd 26, -48(11)
  040d9a8  lfd 27, -40(11)
  040d9ac  lfd 28, -32(11)
  040d9b0  lfd 29, -24(11)
  040d9b4  lfd 30, -16(11)
  040d9b8  lfd 31, -8(11)
  040d9bc  ld 14, -288(11)
  040d9c0  ld 15, -280(11)
  040d9c4  ld 16, -272(11)
  040d9c8  ld 17, -264(11)
  040d9cc  ld 18, -256(11)
  040d9d0  ld 19, -248(11)
  040d9d4  ld 20, -240(11)
  040d9d8  ld 21, -232(11)
  040d9dc  ld 22, -224(11)
  040d9e0  ld 23, -216(11)
  040d9e4  ld 24, -208(11)
  040d9e8  ld 25, -200(11)
  040d9ec  ld 26, -192(11)
  040d9f0  ld 27, -184(11)
  040d9f4  ld 28, -176(11)
  040d9f8  ld 29, -168(11)
  040d9fc  ld 30, -160(11)
  040da00  ld 31, -152(11)
  040da04  mr 1, 11
  040da08  blr

UpdateMoby_671:   # 0x40da20, 0x484 bytes
  040da20  stdu 1, -224(1)
  040da24  mflr 0
  040da28  std 0, 240(1)
  040da2c  stfd 27, 184(1)
  040da30  stfd 28, 192(1)
  040da34  stfd 29, 200(1)
  040da38  stfd 30, 208(1)
  040da3c  stfd 31, 216(1)
  040da40  std 30, 168(1)
  040da44  cmpwi 3, 0
  040da48  std 31, 176(1)
  040da4c  std 29, 160(1)
  040da50  std 28, 152(1)
  040da54  std 27, 144(1)
  040da58  ori 30, 3, 0
  040da5c  bt 2, 0x40de6c
  040da60  lwz 31, 120(30)
  040da64  li 27, 0
  040da68  cmpwi 31, 0
  040da6c  bt 2, 0x40de6c
  040da70  lbz 3, 32(30)
  040da74  cmpwi 3, 0
  040da78  bf 2, 0x40dbc8
  040da7c  li 3, -1
  040da80  stb 3, 315(31)
  040da84  lfs 1, 16(30)
  040da88  lbz 3, 243(31)
  040da8c  stfs 1, 320(31)
  040da90  lfs 1, 20(30)
  040da94  stw 3, 248(31)
  040da98  stfs 1, 324(31)
  040da9c  lfs 1, 24(30)
  040daa0  lwz 3, 112(31)
  040daa4  stfs 1, 328(31)
  040daa8  lfs 1, 28(30)
  040daac  cmpwi 3, 0
  040dab0  stfs 1, 332(31)
  040dab4  bf 2, 0x40dad4
  040dab8  lis 3, 101
  040dabc  addic 3, 3, 28672
  040dac0  bl 0x5cd098
  040dac4  nop
  040dac8  lis 3, 16256
  040dacc  stw 3, 112(31)
  040dad0  b 0x40db10
  040dad4  lwz 4, 116(31)
  040dad8  lis 3, 16640
  040dadc  lfs 1, 116(31)
  040dae0  srawi 5, 4, 31
  040dae4  srwi 6, 5, 1
  040dae8  xor 4, 6, 4
  040daec  subc 4, 4, 5
  040daf0  cmpw 4, 3
  040daf4  bf 1, 0x40db10
  040daf8  stfd 1, 56(1)
  040dafc  lis 3, 101
  040db00  addic 3, 3, 28720
  040db04  ld 4, 56(1)
  040db08  bl 0x5cd098
  040db0c  nop
  040db10  lwz 3, 116(31)
  040db14  cmpwi 3, 0
  040db18  bf 2, 0x40db38
  040db1c  lis 3, 101
  040db20  addic 3, 3, 28800
  040db24  bl 0x5cd098
  040db28  nop
  040db2c  lis 3, 16256
  040db30  stw 3, 116(31)
  040db34  b 0x40db74
  040db38  lwz 4, 112(31)
  040db3c  lis 3, 16640
  040db40  lfs 1, 112(31)
  040db44  srawi 5, 4, 31
  040db48  srwi 6, 5, 1
  040db4c  xor 4, 6, 4
  040db50  subc 4, 4, 5
  040db54  cmpw 4, 3
  040db58  bf 1, 0x40db74
  040db5c  stfd 1, 56(1)
  040db60  lis 3, 101
  040db64  addic 3, 3, 28848
  040db68  ld 4, 56(1)
  040db6c  bl 0x5cd098
  040db70  nop
  040db74  lis 3, 65
  040db78  ori 28, 27, 0
  040db7c  addi 3, 3, -9716
  040db80  ori 29, 31, 0
  040db84  lfs 31, 0(3)
  040db88  lfs 1, 136(31)
  040db8c  fmr 2, 31
  040db90  bl 0xfcbe8
  040db94  nop
  040db98  stfs 1, 144(29)
  040db9c  fmr 2, 31
  040dba0  lfs 1, 136(31)
  040dba4  bl 0xfcbe8
  040dba8  nop
  040dbac  addic 28, 28, 1
  040dbb0  stfs 1, 176(29)
  040dbb4  cmpwi 28, 8
  040dbb8  addic 29, 29, 4
  040dbbc  bt 0, 0x40db88
  040dbc0  li 3, 1
  040dbc4  stb 3, 32(30)
  040dbc8  lfs 1, 0(31)
  040dbcc  lis 3, 65
  040dbd0  lfs 2, 4(31)
  040dbd4  addi 29, 3, -9716
  040dbd8  fsub 3, 2, 1
  040dbdc  lwz 3, 36(30)
  040dbe0  lfs 4, 4(29)
  040dbe4  lfs 5, 36(3)
  040dbe8  lhz 3, 50(30)
  040dbec  fsel 1, 3, 2, 1
  040dbf0  extsh 3, 3
  040dbf4  fmuls 1, 5, 1
  040dbf8  fmuls 1, 1, 4
  040dbfc  stfs 1, 44(30)
  040dc00  bl 0x502730
  040dc04  nop
  040dc08  lis 3, 149
  040dc0c  lfs 2, 20(30)
  040dc10  lfs 3, 16(30)
  040dc14  addic 3, 3, 5056
  040dc18  lfs 4, 324(3)
  040dc1c  lfs 5, 320(3)
  040dc20  fsubs 2, 2, 4
  040dc24  fsubs 3, 3, 5
  040dc28  lfs 4, 24(30)
  040dc2c  lfs 5, 328(3)
  040dc30  fsubs 4, 4, 5
  040dc34  fmr 5, 1
  040dc38  fmuls 2, 2, 2
  040dc3c  fmadds 2, 3, 3, 2
  040dc40  lfs 3, 336(31)
  040dc44  lfs 1, 8(29)
  040dc48  fmadds 4, 4, 4, 2
  040dc4c  fsubs 2, 5, 3
  040dc50  fsqrts 4, 4
  040dc54  fsub 6, 2, 1
  040dc58  fsel 2, 6, 2, 1
  040dc5c  fcmpu 0, 4, 5
  040dc60  cror 6, 0, 2
  040dc64  bt 6, 0x40dc70
  040dc68  li 27, 1
  040dc6c  b 0x40dc90
  040dc70  fsubs 1, 4, 2
  040dc74  lis 3, 65
  040dc78  fsub 2, 2, 4
  040dc7c  addi 3, 3, -9716
  040dc80  fdivs 1, 1, 3
  040dc84  lfs 3, 0(3)
  040dc88  fsubs 1, 3, 1
  040dc8c  fsel 1, 2, 3, 1
  040dc90  stfs 1, 340(31)
  040dc94  lfs 1, 16(30)
  040dc98  lfs 2, 20(30)
  040dc9c  stfs 1, 112(1)
  040dca0  lfs 1, 24(30)
  040dca4  stfs 2, 116(1)
  040dca8  lfs 2, 28(30)
  040dcac  stfs 1, 120(1)
  040dcb0  stfs 2, 124(1)
  040dcb4  lbz 3, 311(31)
  040dcb8  bl 0x502730
  040dcbc  nop
  040dcc0  lbz 3, 49(30)
  040dcc4  stfs 1, 124(1)
  040dcc8  cmpwi 3, 0
  040dccc  bf 2, 0x40dcf0
  040dcd0  lis 4, 65
  040dcd4  addic 3, 1, 112
  040dcd8  addi 4, 4, -9716
  040dcdc  lfs 1, 12(4)
  040dce0  bl 0x502910
  040dce4  nop
  040dce8  cmpwi 3, -1
  040dcec  bt 2, 0x40de40
  040dcf0  cmpwi 27, 0
  040dcf4  bf 2, 0x40de40
  040dcf8  lis 3, 113
  040dcfc  ori 4, 30, 0
  040dd00  addic 3, 3, -8288
  040dd04  bl 0x6d720
  040dd08  nop
  040dd0c  lhz 3, 10(31)
  040dd10  rlwinm 3, 3, 0, 29, 29
  040dd14  cmpwi 3, 0
  040dd18  bt 2, 0x40de60
  040dd1c  lis 3, 65
  040dd20  lbz 4, 315(31)
  040dd24  addi 3, 3, -9716
  040dd28  lfs 31, 16(3)
  040dd2c  extsb 3, 4
  040dd30  cmpwi 3, -1
  040dd34  bf 2, 0x40ddd0
  040dd38  lbz 3, 311(31)
  040dd3c  addic 30, 31, 320
  040dd40  clrldi 3, 3, 32
  040dd44  std 3, 128(1)
  040dd48  lbz 3, 312(31)
  040dd4c  lfd 1, 128(1)
  040dd50  fcfid 1, 1
  040dd54  frsp 30, 1
  040dd58  bl 0x502730
  040dd5c  nop
  040dd60  lbz 3, 308(31)
  040dd64  fmuls 29, 1, 31
  040dd68  bl 0x502730
  040dd6c  nop
  040dd70  lfs 2, 340(31)
  040dd74  lbz 3, 309(31)
  040dd78  fmuls 1, 2, 1
  040dd7c  fmuls 28, 1, 31
  040dd80  bl 0x502730
  040dd84  nop
  040dd88  lfs 2, 340(31)
  040dd8c  lbz 3, 310(31)
  040dd90  fmuls 1, 2, 1
  040dd94  fmuls 27, 1, 31
  040dd98  bl 0x502730
  040dd9c  nop
  040dda0  lfs 2, 340(31)
  040dda4  ori 3, 30, 0
  040dda8  fmr 3, 28
  040ddac  fmuls 5, 2, 1
  040ddb0  fmr 1, 30
  040ddb4  fmr 2, 29
  040ddb8  fmr 4, 27
  040ddbc  fmuls 5, 5, 31
  040ddc0  bl 0xda4ac
  040ddc4  nop
  040ddc8  stb 3, 315(31)
  040ddcc  b 0x40de60
  040ddd0  lis 4, 162
  040ddd4  sldi 3, 3, 5
  040ddd8  addic 4, 4, -8448
  040dddc  addc 3, 4, 3
  040dde0  lbz 4, 308(31)
  040dde4  clrldi 30, 3, 32
  040dde8  ori 3, 4, 0
  040ddec  bl 0x502730
  040ddf0  nop
  040ddf4  lfs 2, 340(31)
  040ddf8  fmuls 1, 2, 1
  040ddfc  fmuls 1, 1, 31
  040de00  stfs 1, 0(30)
  040de04  lbz 3, 309(31)
  040de08  bl 0x502730
  040de0c  nop
  040de10  lfs 2, 340(31)
  040de14  fmuls 1, 2, 1
  040de18  fmuls 1, 1, 31
  040de1c  stfs 1, 4(30)
  040de20  lbz 3, 310(31)
  040de24  bl 0x502730
  040de28  nop
  040de2c  lfs 2, 340(31)
  040de30  fmuls 1, 2, 1
  040de34  fmuls 1, 1, 31
  040de38  stfs 1, 8(30)
  040de3c  b 0x40de60
  040de40  lbz 3, 315(31)
  040de44  extsb 3, 3
  040de48  cmpwi 3, -1
  040de4c  bt 2, 0x40de60
  040de50  bl 0xda9e8
  040de54  nop
  040de58  li 3, -1
  040de5c  stb 3, 315(31)
  040de60  lhz 3, 10(31)
  040de64  ori 3, 3, 2
  040de68  sth 3, 10(31)
  040de6c  ld 0, 240(1)
  040de70  mtlr 0
  040de74  lfd 27, 184(1)
  040de78  lfd 28, 192(1)
  040de7c  lfd 29, 200(1)
  040de80  lfd 30, 208(1)
  040de84  lfd 31, 216(1)
  040de88  ld 27, 144(1)
  040de8c  ld 28, 152(1)
  040de90  ld 29, 160(1)
  040de94  ld 30, 168(1)
  040de98  ld 31, 176(1)
  040de9c  addi 1, 1, 224
  040dea0  blr
