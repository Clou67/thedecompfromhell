# game/update/moby1222.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1222_0020c5c0:   # 0x20c5c0, 0x31c bytes
  020c5c0  stdu 1, -288(1)
  020c5c4  mflr 0
  020c5c8  std 0, 304(1)
  020c5cc  stfd 25, 232(1)
  020c5d0  stfd 26, 240(1)
  020c5d4  stfd 27, 248(1)
  020c5d8  stfd 28, 256(1)
  020c5dc  stfd 29, 264(1)
  020c5e0  stfd 30, 272(1)
  020c5e4  stfd 31, 280(1)
  020c5e8  std 30, 216(1)
  020c5ec  ori 30, 3, 0
  020c5f0  std 31, 224(1)
  020c5f4  li 3, 1222
  020c5f8  std 29, 208(1)
  020c5fc  std 28, 200(1)
  020c600  std 27, 192(1)
  020c604  std 26, 184(1)
  020c608  ori 31, 4, 0
  020c60c  bl 0xefa28
  020c610  nop
  020c614  ori 29, 3, 0
  020c618  cmpwi 29, 0
  020c61c  bt 2, 0x20c894
  020c620  lis 3, 33
  020c624  lwz 27, 120(29)
  020c628  addi 28, 3, -14944
  020c62c  lfs 31, 4(28)
  020c630  lfs 30, 8(28)
  020c634  fmr 1, 31
  020c638  lfs 29, 0(28)
  020c63c  fmr 2, 30
  020c640  bl 0xfcbe8
  020c644  nop
  020c648  fmr 28, 1
  020c64c  fmr 1, 31
  020c650  fmr 2, 30
  020c654  bl 0xfcbe8
  020c658  nop
  020c65c  fmr 27, 1
  020c660  fmr 1, 31
  020c664  fmr 2, 30
  020c668  bl 0xfcbe8
  020c66c  nop
  020c670  li 3, 255
  020c674  li 4, 1
  020c678  li 26, 0
  020c67c  fmuls 6, 27, 27
  020c680  stb 3, 48(29)
  020c684  sth 3, 50(29)
  020c688  stb 4, 49(29)
  020c68c  stb 26, 32(29)
  020c690  lfs 2, 0(31)
  020c694  stfs 2, 16(29)
  020c698  lfs 2, 4(31)
  020c69c  stfs 2, 20(29)
  020c6a0  fmadds 6, 28, 28, 6
  020c6a4  lfs 2, 8(31)
  020c6a8  stfs 2, 24(29)
  020c6ac  lfs 2, 12(31)
  020c6b0  stfs 28, 64(29)
  020c6b4  stfs 2, 28(29)
  020c6b8  stfs 27, 68(29)
  020c6bc  stfs 1, 72(29)
  020c6c0  stw 26, 76(29)
  020c6c4  lfs 2, 4(31)
  020c6c8  fmadds 6, 1, 1, 6
  020c6cc  lfs 3, 20(30)
  020c6d0  lfs 4, 0(31)
  020c6d4  fsubs 2, 2, 3
  020c6d8  lfs 3, 16(30)
  020c6dc  fsubs 3, 4, 3
  020c6e0  lfs 4, 8(31)
  020c6e4  lfs 5, 24(30)
  020c6e8  fsubs 4, 4, 5
  020c6ec  fsqrts 31, 6
  020c6f0  lis 30, 114
  020c6f4  addic 3, 1, 144
  020c6f8  addic 4, 1, 128
  020c6fc  stfs 3, 112(1)
  020c700  stfs 2, 116(1)
  020c704  lfs 6, 12(31)
  020c708  stfs 4, 120(1)
  020c70c  stfs 6, 124(1)
  020c710  addic 5, 1, 112
  020c714  fmuls 5, 2, 2
  020c718  fmadds 5, 3, 3, 5
  020c71c  fmadds 5, 4, 4, 5
  020c720  lfs 4, 12(28)
  020c724  lfs 6, -3052(30)
  020c728  fmuls 7, 6, 4
  020c72c  fmuls 4, 6, 4
  020c730  stfs 28, 128(1)
  020c734  fsqrts 5, 5
  020c738  stw 26, 120(1)
  020c73c  stfs 27, 132(1)
  020c740  stfs 1, 136(1)
  020c744  stw 26, 140(1)
  020c748  fdivs 4, 4, 31
  020c74c  fsub 10, 29, 31
  020c750  fsub 11, 29, 31
  020c754  fsub 12, 29, 31
  020c758  fsub 13, 31, 29
  020c75c  fsub 0, 31, 29
  020c760  fsub 30, 31, 29
  020c764  fdivs 6, 7, 5
  020c768  fsub 7, 29, 5
  020c76c  fsub 8, 29, 5
  020c770  fsub 9, 5, 29
  020c774  fsub 5, 5, 29
  020c778  fmuls 26, 28, 4
  020c77c  fmuls 25, 27, 4
  020c780  fmuls 1, 1, 4
  020c784  fsel 4, 10, 29, 26
  020c788  fsel 10, 11, 29, 25
  020c78c  fsel 11, 12, 29, 1
  020c790  fsel 4, 13, 4, 26
  020c794  fsel 1, 30, 11, 1
  020c798  stfs 4, 128(1)
  020c79c  fmuls 3, 3, 6
  020c7a0  fmuls 2, 2, 6
  020c7a4  fsel 6, 0, 10, 25
  020c7a8  fsel 7, 7, 29, 3
  020c7ac  fsel 8, 8, 29, 2
  020c7b0  stfs 6, 132(1)
  020c7b4  stfs 1, 136(1)
  020c7b8  fsel 3, 9, 7, 3
  020c7bc  fsel 2, 5, 8, 2
  020c7c0  stfs 3, 112(1)
  020c7c4  stfs 2, 116(1)
  020c7c8  bl 0x5023f0
  020c7cc  nop
  020c7d0  lfs 1, 144(1)
  020c7d4  stfs 1, 0(27)
  020c7d8  lfs 1, 148(1)
  020c7dc  stfs 1, 4(27)
  020c7e0  lfs 1, 152(1)
  020c7e4  stfs 1, 8(27)
  020c7e8  lfs 1, 156(1)
  020c7ec  stfs 1, 12(27)
  020c7f0  lfs 1, 16(28)
  020c7f4  lfs 2, -3052(30)
  020c7f8  fmuls 1, 2, 1
  020c7fc  fsub 3, 29, 31
  020c800  stw 26, 28(27)
  020c804  fsub 4, 29, 31
  020c808  fsub 5, 31, 29
  020c80c  fsub 6, 31, 29
  020c810  lis 3, 114
  020c814  fdivs 1, 1, 31
  020c818  fmuls 7, 28, 1
  020c81c  fmuls 1, 27, 1
  020c820  fsel 3, 3, 29, 7
  020c824  fsel 4, 4, 29, 1
  020c828  fsel 3, 5, 3, 7
  020c82c  fsel 1, 6, 4, 1
  020c830  stfs 3, 16(27)
  020c834  stfs 1, 20(27)
  020c838  lfs 1, 20(28)
  020c83c  fmuls 1, 2, 1
  020c840  stfs 1, 24(27)
  020c844  lfs 1, 24(28)
  020c848  lfs 2, -3056(3)
  020c84c  fmuls 1, 2, 1
  020c850  fctiwz 1, 1
  020c854  stfd 1, 160(1)
  020c858  lfs 1, 28(28)
  020c85c  lwz 3, 164(1)
  020c860  fmuls 1, 2, 1
  020c864  extsw 3, 3
  020c868  fctiwz 1, 1
  020c86c  stfd 1, 160(1)
  020c870  lwz 4, 164(1)
  020c874  extsw 4, 4
  020c878  bl 0xfe484
  020c87c  nop
  020c880  stw 3, 36(27)
  020c884  stw 3, 32(27)
  020c888  ori 3, 29, 0
  020c88c  bl 0xf31a8
  020c890  nop
  020c894  ori 3, 29, 0
  020c898  ld 0, 304(1)
  020c89c  mtlr 0
  020c8a0  lfd 25, 232(1)
  020c8a4  lfd 26, 240(1)
  020c8a8  lfd 27, 248(1)
  020c8ac  lfd 28, 256(1)
  020c8b0  lfd 29, 264(1)
  020c8b4  lfd 30, 272(1)
  020c8b8  lfd 31, 280(1)
  020c8bc  ld 26, 184(1)
  020c8c0  ld 27, 192(1)
  020c8c4  ld 28, 200(1)
  020c8c8  ld 29, 208(1)
  020c8cc  ld 30, 216(1)
  020c8d0  ld 31, 224(1)
  020c8d4  addi 1, 1, 288
  020c8d8  blr

UpdateMoby_1222:   # 0x20c8e8, 0x110 bytes
  020c8e8  stdu 1, -160(1)
  020c8ec  mflr 0
  020c8f0  std 0, 176(1)
  020c8f4  stfd 31, 152(1)
  020c8f8  std 31, 144(1)
  020c8fc  ori 31, 3, 0
  020c900  lis 4, 33
  020c904  std 30, 136(1)
  020c908  lis 3, 114
  020c90c  addi 30, 4, -14116
  020c910  std 29, 128(1)
  020c914  addic 4, 31, 16
  020c918  lwz 29, 120(31)
  020c91c  ori 5, 29, 0
  020c920  lfs 1, 0(30)
  020c924  lfs 2, -3048(3)
  020c928  lfs 3, 8(29)
  020c92c  addic 3, 1, 112
  020c930  fnmsubs 1, 2, 1, 3
  020c934  stfs 1, 8(29)
  020c938  bl 0x502b08
  020c93c  nop
  020c940  lfs 1, 64(31)
  020c944  lfs 2, 16(29)
  020c948  bl 0x502578
  020c94c  nop
  020c950  stfs 1, 64(31)
  020c954  lfs 1, 68(31)
  020c958  lfs 2, 20(29)
  020c95c  bl 0x502578
  020c960  nop
  020c964  stfs 1, 68(31)
  020c968  lfs 1, 72(31)
  020c96c  lfs 2, 24(29)
  020c970  bl 0x502578
  020c974  nop
  020c978  lwz 3, 32(29)
  020c97c  stfs 1, 72(31)
  020c980  extsw 3, 3
  020c984  bl 0x502730
  020c988  nop
  020c98c  lwz 3, 36(29)
  020c990  fmr 31, 1
  020c994  extsw 3, 3
  020c998  bl 0x502730
  020c99c  nop
  020c9a0  lfs 2, 4(30)
  020c9a4  fmuls 1, 1, 2
  020c9a8  fdivs 1, 1, 31
  020c9ac  bl 0x502758
  020c9b0  nop
  020c9b4  stb 3, 35(31)
  020c9b8  addic 3, 29, 36
  020c9bc  bl 0x4fff60
  020c9c0  nop
  020c9c4  cmpwi 3, 0
  020c9c8  bt 2, 0x20c9d8
  020c9cc  ori 3, 31, 0
  020c9d0  bl 0xefb38
  020c9d4  nop
  020c9d8  ld 0, 176(1)
  020c9dc  mtlr 0
  020c9e0  lfd 31, 152(1)
  020c9e4  ld 29, 128(1)
  020c9e8  ld 30, 136(1)
  020c9ec  ld 31, 144(1)
  020c9f0  addi 1, 1, 160
  020c9f4  blr
