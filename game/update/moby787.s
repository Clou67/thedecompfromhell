# game/update/moby787.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M787_0045c4b8:   # 0x45c4b8, 0x14 bytes
  045c4b8  lis 3, 135
  045c4bc  lis 4, 1
  045c4c0  addic 3, 3, 15204
  045c4c4  stw 4, 72(3)
  045c4c8  blr

FUN_0045c4e0:   # 0x45c4e0, 0x15c bytes
  045c4e0  stdu 1, -160(1)
  045c4e4  mflr 0
  045c4e8  std 0, 176(1)
  045c4ec  stfd 31, 152(1)
  045c4f0  std 31, 144(1)
  045c4f4  ori 31, 3, 0
  045c4f8  li 3, 787
  045c4fc  std 30, 136(1)
  045c500  std 29, 128(1)
  045c504  std 28, 120(1)
  045c508  fmr 31, 1
  045c50c  bl 0xefa28
  045c510  nop
  045c514  ori 30, 3, 0
  045c518  cmpwi 30, 0
  045c51c  bt 2, 0x45c614
  045c520  lwz 29, 120(30)
  045c524  ori 3, 30, 0
  045c528  bl 0x10c000
  045c52c  nop
  045c530  lfs 1, 44(30)
  045c534  li 3, 255
  045c538  fmuls 1, 1, 31
  045c53c  li 4, 64
  045c540  li 28, 0
  045c544  stb 3, 48(30)
  045c548  sth 4, 50(30)
  045c54c  stw 28, 64(30)
  045c550  stfs 1, 44(30)
  045c554  bl 0xfcc68
  045c558  nop
  045c55c  stfs 1, 72(30)
  045c560  lis 3, 114
  045c564  lfs 1, 0(31)
  045c568  lis 4, 70
  045c56c  stfs 1, 16(30)
  045c570  lfs 1, 4(31)
  045c574  stfs 1, 20(30)
  045c578  lfs 1, 8(31)
  045c57c  stfs 1, 24(30)
  045c580  lfs 1, 12(31)
  045c584  stfs 1, 28(30)
  045c588  stb 28, 0(29)
  045c58c  stb 28, 1(29)
  045c590  stb 28, 2(29)
  045c594  stb 28, 3(29)
  045c598  stb 28, 4(29)
  045c59c  stb 28, 5(29)
  045c5a0  stb 28, 6(29)
  045c5a4  stb 28, 7(29)
  045c5a8  stb 28, 8(29)
  045c5ac  stb 28, 9(29)
  045c5b0  stb 28, 10(29)
  045c5b4  stb 28, 11(29)
  045c5b8  stb 28, 12(29)
  045c5bc  stb 28, 13(29)
  045c5c0  stb 28, 14(29)
  045c5c4  stb 28, 15(29)
  045c5c8  lfs 1, -3052(3)
  045c5cc  li 3, 120
  045c5d0  fneg 1, 1
  045c5d4  stw 3, 20(29)
  045c5d8  addi 3, 4, -15152
  045c5dc  lis 4, 114
  045c5e0  stfs 1, 8(29)
  045c5e4  lfs 1, 0(3)
  045c5e8  lfs 2, -3048(4)
  045c5ec  fmuls 1, 2, 1
  045c5f0  stfs 1, 16(29)
  045c5f4  lfs 1, 4(3)
  045c5f8  lfs 2, 8(3)
  045c5fc  bl 0xfcbe8
  045c600  nop
  045c604  ori 3, 30, 0
  045c608  stfs 1, 28(29)
  045c60c  bl 0xf31a8
  045c610  nop
  045c614  ori 3, 30, 0
  045c618  ld 0, 176(1)
  045c61c  mtlr 0
  045c620  lfd 31, 152(1)
  045c624  ld 28, 120(1)
  045c628  ld 29, 128(1)
  045c62c  ld 30, 136(1)
  045c630  ld 31, 144(1)
  045c634  addi 1, 1, 160
  045c638  blr

UpdateMoby_787:   # 0x45c680, 0x3b8 bytes
  045c680  stdu 1, -288(1)
  045c684  mflr 0
  045c688  std 0, 304(1)
  045c68c  stfd 21, 200(1)
  045c690  stfd 22, 208(1)
  045c694  stfd 23, 216(1)
  045c698  stfd 24, 224(1)
  045c69c  stfd 25, 232(1)
  045c6a0  stfd 26, 240(1)
  045c6a4  stfd 27, 248(1)
  045c6a8  stfd 28, 256(1)
  045c6ac  stfd 29, 264(1)
  045c6b0  stfd 30, 272(1)
  045c6b4  stfd 31, 280(1)
  045c6b8  std 31, 192(1)
  045c6bc  ori 31, 3, 0
  045c6c0  addic 4, 1, 112
  045c6c4  std 30, 184(1)
  045c6c8  addic 3, 31, 16
  045c6cc  lwz 30, 120(31)
  045c6d0  li 5, 2
  045c6d4  li 6, 0
  045c6d8  li 7, 0
  045c6dc  lfs 1, 8(30)
  045c6e0  lfs 2, 16(30)
  045c6e4  fsubs 1, 1, 2
  045c6e8  lfs 2, 28(30)
  045c6ec  stfs 1, 8(30)
  045c6f0  lfs 1, 64(31)
  045c6f4  fadds 1, 1, 2
  045c6f8  lfs 2, 16(31)
  045c6fc  lfs 3, 20(31)
  045c700  lfs 4, 24(31)
  045c704  lfs 5, 28(31)
  045c708  stfs 1, 64(31)
  045c70c  lfs 1, 0(30)
  045c710  fadds 1, 2, 1
  045c714  stfs 1, 112(1)
  045c718  lfs 1, 4(30)
  045c71c  fadds 1, 3, 1
  045c720  stfs 1, 116(1)
  045c724  lfs 1, 8(30)
  045c728  stfs 5, 124(1)
  045c72c  fadds 1, 4, 1
  045c730  std 29, 176(1)
  045c734  std 28, 168(1)
  045c738  stfs 1, 120(1)
  045c73c  bl 0x57820
  045c740  nop
  045c744  cmpwi 3, 0
  045c748  bt 2, 0x45c988
  045c74c  bl 0x60780
  045c750  nop
  045c754  cmpwi 3, 0
  045c758  bf 2, 0x45c978
  045c75c  lwz 3, 24(30)
  045c760  cmpwi 3, 0
  045c764  bf 2, 0x45c77c
  045c768  li 3, 0
  045c76c  li 4, 0
  045c770  ori 5, 31, 0
  045c774  bl 0x15d12c
  045c778  nop
  045c77c  lis 3, 230
  045c780  lis 4, 230
  045c784  lis 5, 70
  045c788  li 9, 1
  045c78c  addi 29, 5, -14788
  045c790  lwz 3, -21888(3)
  045c794  lwz 4, -21880(4)
  045c798  lfs 1, 16(31)
  045c79c  lfs 2, 20(31)
  045c7a0  extsw 4, 4
  045c7a4  lfs 3, 0(29)
  045c7a8  lfs 4, 4(29)
  045c7ac  bl 0x17bd90
  045c7b0  nop
  045c7b4  li 3, 1
  045c7b8  li 4, 120
  045c7bc  lis 5, 114
  045c7c0  stw 3, 24(30)
  045c7c4  stw 4, 20(30)
  045c7c8  lfs 1, 8(29)
  045c7cc  lfs 2, -3052(5)
  045c7d0  lis 4, 114
  045c7d4  li 5, 0
  045c7d8  fmuls 1, 2, 1
  045c7dc  lis 3, 161
  045c7e0  addic 6, 3, 2368
  045c7e4  addic 3, 1, 128
  045c7e8  stfs 1, 8(30)
  045c7ec  lfs 1, 12(29)
  045c7f0  lfs 2, -3048(4)
  045c7f4  fmuls 1, 2, 1
  045c7f8  stfs 1, 16(30)
  045c7fc  lfs 22, 16(29)
  045c800  stw 5, 28(30)
  045c804  lfs 1, 16(31)
  045c808  lfs 2, 20(31)
  045c80c  stfs 1, 128(1)
  045c810  stfs 2, 132(1)
  045c814  lfs 1, 40(6)
  045c818  stfs 1, 136(1)
  045c81c  lfs 1, 20(29)
  045c820  bl 0x456478
  045c824  nop
  045c828  cmpwi 3, 0
  045c82c  bt 2, 0x45c838
  045c830  li 4, 112
  045c834  stb 4, 35(3)
  045c838  lis 3, 70
  045c83c  li 29, 0
  045c840  addi 3, 3, -14788
  045c844  lfs 23, 24(3)
  045c848  lfs 24, 28(3)
  045c84c  lfs 25, 32(3)
  045c850  lfs 26, 36(3)
  045c854  lfs 27, 40(3)
  045c858  lfs 28, 44(3)
  045c85c  lfs 29, 48(3)
  045c860  lfs 30, 52(3)
  045c864  lfs 31, 56(3)
  045c868  bl 0xfcc68
  045c86c  nop
  045c870  fmr 21, 1
  045c874  lis 28, 114
  045c878  fmr 1, 22
  045c87c  lfs 2, -3052(28)
  045c880  fmuls 2, 2, 23
  045c884  bl 0xfcbe8
  045c888  nop
  045c88c  fadds 2, 21, 24
  045c890  fsubs 3, 25, 21
  045c894  fsubs 4, 26, 21
  045c898  fsubs 5, 25, 2
  045c89c  fsub 6, 21, 3
  045c8a0  fsubs 7, 26, 2
  045c8a4  fsub 8, 2, 5
  045c8a8  fsel 3, 6, 3, 21
  045c8ac  fsel 2, 8, 5, 2
  045c8b0  fsub 5, 4, 3
  045c8b4  fsub 6, 7, 2
  045c8b8  fsel 3, 5, 4, 3
  045c8bc  fsel 2, 6, 7, 2
  045c8c0  fmuls 4, 3, 3
  045c8c4  fmuls 5, 2, 2
  045c8c8  fmuls 6, 4, 3
  045c8cc  fmuls 7, 5, 2
  045c8d0  fmuls 8, 4, 6
  045c8d4  fmadds 3, 6, 27, 3
  045c8d8  fmuls 6, 5, 7
  045c8dc  fmadds 2, 7, 27, 2
  045c8e0  fmuls 7, 4, 8
  045c8e4  fmadds 3, 8, 28, 3
  045c8e8  fmuls 8, 5, 6
  045c8ec  fmadds 2, 6, 28, 2
  045c8f0  fmuls 4, 4, 7
  045c8f4  fmadds 3, 7, 29, 3
  045c8f8  lfs 6, -3052(28)
  045c8fc  fmuls 5, 5, 8
  045c900  fmadds 7, 8, 29, 2
  045c904  fmuls 2, 6, 31
  045c908  fmadds 3, 4, 30, 3
  045c90c  fmadds 4, 5, 30, 7
  045c910  fmuls 3, 3, 1
  045c914  fmuls 4, 4, 1
  045c918  fmuls 1, 6, 23
  045c91c  stfs 3, 148(1)
  045c920  stfs 4, 144(1)
  045c924  bl 0xfcbe8
  045c928  nop
  045c92c  li 3, 90
  045c930  stfs 1, 152(1)
  045c934  li 4, 120
  045c938  bl 0xfe484
  045c93c  nop
  045c940  ori 28, 3, 0
  045c944  li 3, 2
  045c948  bl 0xfc620
  045c94c  nop
  045c950  ori 5, 3, 0
  045c954  addic 3, 1, 128
  045c958  addic 4, 1, 144
  045c95c  ori 6, 28, 0
  045c960  bl 0x12ab08
  045c964  nop
  045c968  addic 29, 29, 1
  045c96c  cmpwi 29, 16
  045c970  bt 0, 0x45c868
  045c974  b 0x45c988
  045c978  ori 3, 31, 0
  045c97c  bl 0xefb38
  045c980  nop
  045c984  b 0x45c9ec
  045c988  lfs 1, 112(1)
  045c98c  lfs 2, 116(1)
  045c990  stfs 1, 16(31)
  045c994  lfs 1, 120(1)
  045c998  stfs 2, 20(31)
  045c99c  lfs 2, 124(1)
  045c9a0  lwz 3, 24(30)
  045c9a4  stfs 1, 24(31)
  045c9a8  cmpwi 3, 0
  045c9ac  stfs 2, 28(31)
  045c9b0  bt 2, 0x45c9cc
  045c9b4  lis 3, 70
  045c9b8  lfs 1, 44(31)
  045c9bc  addi 3, 3, -14788
  045c9c0  lfs 2, 60(3)
  045c9c4  fmuls 1, 1, 2
  045c9c8  stfs 1, 44(31)
  045c9cc  addic 3, 30, 20
  045c9d0  bl 0x4fff60
  045c9d4  nop
  045c9d8  cmpwi 3, 0
  045c9dc  bt 2, 0x45c9ec
  045c9e0  ori 3, 31, 0
  045c9e4  bl 0xefb38
  045c9e8  nop
  045c9ec  ld 0, 304(1)
  045c9f0  mtlr 0
  045c9f4  lfd 21, 200(1)
  045c9f8  lfd 22, 208(1)
  045c9fc  lfd 23, 216(1)
  045ca00  lfd 24, 224(1)
  045ca04  lfd 25, 232(1)
  045ca08  lfd 26, 240(1)
  045ca0c  lfd 27, 248(1)
  045ca10  lfd 28, 256(1)
  045ca14  lfd 29, 264(1)
  045ca18  lfd 30, 272(1)
  045ca1c  lfd 31, 280(1)
  045ca20  ld 28, 168(1)
  045ca24  ld 29, 176(1)
  045ca28  ld 30, 184(1)
  045ca2c  ld 31, 192(1)
  045ca30  addi 1, 1, 288
  045ca34  blr
