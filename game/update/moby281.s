# game/update/moby281.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M281_0032c410:   # 0x32c410, 0x14 bytes
  032c410  lis 3, 128
  032c414  lis 4, 1
  032c418  addic 3, 3, 916
  032c41c  stw 4, 72(3)
  032c420  blr

UpdateMoby_281:   # 0x32c468, 0x5f4 bytes
  032c468  stdu 1, -288(1)
  032c46c  mflr 0
  032c470  std 0, 304(1)
  032c474  stfd 31, 280(1)
  032c478  std 31, 272(1)
  032c47c  lbz 4, 32(3)
  032c480  std 30, 264(1)
  032c484  ori 31, 3, 0
  032c488  lwz 30, 120(3)
  032c48c  cmpwi 4, 1
  032c490  cmpwi 1, 4, 3
  032c494  cmpwi 6, 4, 2
  032c498  std 29, 256(1)
  032c49c  cmpwi 7, 4, 0
  032c4a0  bt 1, 0x32c4ac
  032c4a4  bf 29, 0x32ca2c
  032c4a8  b 0x32c4b8
  032c4ac  bf 25, 0x32c904
  032c4b0  bf 5, 0x32c9a0
  032c4b4  b 0x32ca2c
  032c4b8  lfs 1, 16(31)
  032c4bc  lfs 2, 20(31)
  032c4c0  stfs 1, 192(1)
  032c4c4  lfs 3, 24(31)
  032c4c8  stfs 2, 196(1)
  032c4cc  lfs 4, 28(31)
  032c4d0  stfs 3, 200(1)
  032c4d4  stfs 4, 204(1)
  032c4d8  lfs 4, 16(30)
  032c4dc  addic 29, 31, 16
  032c4e0  lwz 6, 32(30)
  032c4e4  fadds 1, 1, 4
  032c4e8  addic 3, 1, 192
  032c4ec  ori 4, 29, 0
  032c4f0  li 5, 5
  032c4f4  li 7, 0
  032c4f8  stfs 1, 16(31)
  032c4fc  lfs 1, 20(30)
  032c500  fadds 1, 2, 1
  032c504  stfs 1, 20(31)
  032c508  lfs 1, 24(30)
  032c50c  fadds 1, 3, 1
  032c510  stfs 1, 24(31)
  032c514  bl 0x57820
  032c518  nop
  032c51c  cmpwi 3, 0
  032c520  bt 2, 0x32c668
  032c524  lis 3, 161
  032c528  addic 3, 3, 2368
  032c52c  lis 4, 51
  032c530  lfs 1, 68(3)
  032c534  lfs 4, 64(3)
  032c538  fmuls 1, 1, 1
  032c53c  lfs 2, 72(3)
  032c540  addi 4, 4, -15320
  032c544  lfs 5, 0(4)
  032c548  fmadds 1, 4, 4, 1
  032c54c  fmadds 1, 2, 2, 1
  032c550  fsqrts 2, 1
  032c554  fcmpu 0, 2, 5
  032c558  bf 2, 0x32c594
  032c55c  fmr 2, 5
  032c560  lfs 1, 68(3)
  032c564  li 4, 0
  032c568  stfs 4, 208(1)
  032c56c  lfs 4, 72(3)
  032c570  stfs 1, 212(1)
  032c574  lfs 1, 76(3)
  032c578  stfs 4, 216(1)
  032c57c  stw 4, 216(1)
  032c580  stw 4, 212(1)
  032c584  stw 4, 208(1)
  032c588  fmr 3, 2
  032c58c  fmr 4, 3
  032c590  b 0x32c5fc
  032c594  frsqrte 2, 1
  032c598  lis 4, 51
  032c59c  addi 4, 4, -15320
  032c5a0  lfs 3, 4(4)
  032c5a4  lfs 6, 8(4)
  032c5a8  lfs 9, 68(3)
  032c5ac  fmuls 7, 1, 2
  032c5b0  fmuls 8, 3, 2
  032c5b4  lfs 10, 72(3)
  032c5b8  fnmsubs 7, 7, 2, 6
  032c5bc  fmadds 2, 7, 8, 2
  032c5c0  fmuls 7, 1, 2
  032c5c4  fmuls 8, 3, 2
  032c5c8  fnmsubs 7, 7, 2, 6
  032c5cc  fmadds 2, 7, 8, 2
  032c5d0  fmuls 8, 1, 2
  032c5d4  fmuls 3, 3, 2
  032c5d8  lfs 1, 76(3)
  032c5dc  fnmsubs 6, 8, 2, 6
  032c5e0  fmadds 2, 6, 3, 2
  032c5e4  fmuls 4, 4, 2
  032c5e8  fmuls 3, 9, 2
  032c5ec  fmuls 2, 10, 2
  032c5f0  stfs 4, 208(1)
  032c5f4  stfs 3, 212(1)
  032c5f8  stfs 2, 216(1)
  032c5fc  stfs 1, 220(1)
  032c600  lfs 1, 20(30)
  032c604  lfs 6, 16(30)
  032c608  fmuls 1, 3, 1
  032c60c  lfs 3, 24(30)
  032c610  fmadds 1, 4, 6, 1
  032c614  fmadds 1, 2, 3, 1
  032c618  fcmpu 0, 1, 5
  032c61c  cror 6, 1, 2
  032c620  bt 6, 0x32c668
  032c624  addic 3, 30, 16
  032c628  addic 5, 1, 208
  032c62c  ori 4, 3, 0
  032c630  bl 0x500608
  032c634  nop
  032c638  lis 3, 51
  032c63c  lfs 1, 16(30)
  032c640  lfs 2, 20(30)
  032c644  addi 3, 3, -15320
  032c648  lfs 3, 12(3)
  032c64c  lfs 4, 24(30)
  032c650  fmuls 1, 1, 3
  032c654  fmuls 2, 2, 3
  032c658  fmuls 3, 4, 3
  032c65c  stfs 1, 16(30)
  032c660  stfs 2, 20(30)
  032c664  stfs 3, 24(30)
  032c668  lis 3, 51
  032c66c  li 5, 2
  032c670  addi 4, 3, -15320
  032c674  ori 3, 29, 0
  032c678  li 6, 0
  032c67c  lfs 31, 16(4)
  032c680  fmr 1, 31
  032c684  bl 0x59e20
  032c688  nop
  032c68c  cmpwi 3, 0
  032c690  bt 2, 0x32c858
  032c694  lis 29, 161
  032c698  addic 29, 29, 2368
  032c69c  lis 3, 51
  032c6a0  lfs 1, 68(29)
  032c6a4  lfs 3, 64(29)
  032c6a8  fmuls 1, 1, 1
  032c6ac  lfs 2, 72(29)
  032c6b0  addi 3, 3, -15320
  032c6b4  lfs 4, 0(3)
  032c6b8  fmadds 1, 3, 3, 1
  032c6bc  fmadds 1, 2, 2, 1
  032c6c0  fsqrts 1, 1
  032c6c4  fcmpu 0, 1, 4
  032c6c8  bf 2, 0x32c704
  032c6cc  fmr 31, 4
  032c6d0  lfs 1, 68(29)
  032c6d4  li 3, 0
  032c6d8  stfs 3, 224(1)
  032c6dc  lfs 3, 72(29)
  032c6e0  stfs 1, 228(1)
  032c6e4  lfs 1, 76(29)
  032c6e8  stfs 3, 232(1)
  032c6ec  stw 3, 232(1)
  032c6f0  stw 3, 228(1)
  032c6f4  stw 3, 224(1)
  032c6f8  fmr 2, 31
  032c6fc  fmr 3, 2
  032c700  b 0x32c72c
  032c704  fdivs 31, 31, 1
  032c708  lfs 2, 68(29)
  032c70c  lfs 5, 72(29)
  032c710  lfs 1, 76(29)
  032c714  fmuls 3, 3, 31
  032c718  fmuls 2, 2, 31
  032c71c  fmuls 31, 5, 31
  032c720  stfs 3, 224(1)
  032c724  stfs 2, 228(1)
  032c728  stfs 31, 232(1)
  032c72c  stfs 1, 236(1)
  032c730  lfs 1, 20(30)
  032c734  lfs 5, 16(30)
  032c738  fmuls 1, 2, 1
  032c73c  lfs 2, 24(30)
  032c740  fmadds 1, 3, 5, 1
  032c744  fmadds 1, 31, 2, 1
  032c748  fcmpu 0, 1, 4
  032c74c  cror 6, 1, 2
  032c750  bt 6, 0x32c79c
  032c754  addic 3, 30, 16
  032c758  addic 5, 1, 224
  032c75c  ori 4, 3, 0
  032c760  bl 0x500608
  032c764  nop
  032c768  lis 3, 51
  032c76c  lfs 1, 16(30)
  032c770  lfs 2, 20(30)
  032c774  addi 3, 3, -15320
  032c778  lfs 3, 12(3)
  032c77c  lfs 4, 24(30)
  032c780  fmuls 1, 1, 3
  032c784  fmuls 2, 2, 3
  032c788  fmuls 3, 4, 3
  032c78c  stfs 1, 16(30)
  032c790  stfs 2, 20(30)
  032c794  stfs 3, 24(30)
  032c798  lfs 31, 232(1)
  032c79c  lfs 1, 32(29)
  032c7a0  lis 3, 51
  032c7a4  stfs 1, 16(31)
  032c7a8  lfs 1, 36(29)
  032c7ac  addi 3, 3, -15320
  032c7b0  stfs 1, 20(31)
  032c7b4  lfs 1, 40(29)
  032c7b8  lfs 2, 44(29)
  032c7bc  fadds 1, 1, 31
  032c7c0  stfs 2, 28(31)
  032c7c4  stfs 1, 24(31)
  032c7c8  lfs 1, 20(3)
  032c7cc  fcmpu 0, 31, 1
  032c7d0  bt 0, 0x32c858
  032c7d4  lfs 1, 20(30)
  032c7d8  lfs 2, 16(30)
  032c7dc  fmuls 1, 1, 1
  032c7e0  lfs 3, 24(30)
  032c7e4  lis 3, 51
  032c7e8  lis 4, 114
  032c7ec  addi 3, 3, -15320
  032c7f0  fmadds 1, 2, 2, 1
  032c7f4  lfs 2, 12(3)
  032c7f8  fmadds 1, 3, 3, 1
  032c7fc  lfs 3, -3052(4)
  032c800  fmuls 2, 3, 2
  032c804  fsqrts 1, 1
  032c808  fcmpu 0, 1, 2
  032c80c  cror 6, 1, 2
  032c810  bt 6, 0x32c858
  032c814  lis 3, 51
  032c818  li 4, 2
  032c81c  vspltisw 2, -1
  032c820  addi 3, 3, -15320
  032c824  li 5, 24
  032c828  lis 6, 114
  032c82c  stb 4, 32(31)
  032c830  li 4, -3056
  032c834  vslw 2, 2, 2
  032c838  lvlx 3, 5, 3
  032c83c  li 3, 40
  032c840  vspltw 3, 3, 0
  032c844  lvlx 4, 4, 6
  032c848  vmaddfp 2, 4, 3, 2
  032c84c  vctsxs 2, 2, 0
  032c850  vspltw 2, 2, 0
  032c854  stvewx 2, 3, 30
  032c858  addic 3, 30, 40
  032c85c  bl 0x4fff60
  032c860  nop
  032c864  cmpwi 3, 0
  032c868  bt 2, 0x32c878
  032c86c  li 3, 3
  032c870  stb 3, 32(31)
  032c874  b 0x32c8f0
  032c878  lis 3, 51
  032c87c  lis 4, 114
  032c880  addi 3, 3, -15320
  032c884  lfs 2, 28(3)
  032c888  lfs 1, -3056(4)
  032c88c  lwz 3, 40(30)
  032c890  fmuls 2, 1, 2
  032c894  fctiwz 2, 2
  032c898  stfd 2, 240(1)
  032c89c  lwz 4, 244(1)
  032c8a0  cmpw 3, 4
  032c8a4  bf 0, 0x32c8f0
  032c8a8  lis 4, 51
  032c8ac  addi 4, 4, -15320
  032c8b0  lfs 2, 32(4)
  032c8b4  fmuls 1, 1, 2
  032c8b8  fctiwz 1, 1
  032c8bc  stfd 1, 240(1)
  032c8c0  lwz 4, 244(1)
  032c8c4  divw 5, 3, 4
  032c8c8  mullw 4, 5, 4
  032c8cc  subc 3, 3, 4
  032c8d0  cmpwi 3, 0
  032c8d4  bf 2, 0x32c8f0
  032c8d8  li 5, 250
  032c8dc  ori 3, 31, 0
  032c8e0  ori 4, 30, 0
  032c8e4  stb 5, 7(30)
  032c8e8  bl 0x10c808
  032c8ec  nop
  032c8f0  lfs 1, 24(30)
  032c8f4  lfs 2, 36(30)
  032c8f8  fsubs 1, 1, 2
  032c8fc  stfs 1, 24(30)
  032c900  b 0x32ca2c
  032c904  addic 3, 30, 40
  032c908  bl 0x4fff60
  032c90c  nop
  032c910  cmpwi 3, 0
  032c914  bt 2, 0x32c924
  032c918  li 3, 3
  032c91c  stb 3, 32(31)
  032c920  b 0x32ca2c
  032c924  lis 3, 51
  032c928  lis 4, 114
  032c92c  addi 3, 3, -15320
  032c930  lfs 2, 36(3)
  032c934  lfs 1, -3056(4)
  032c938  lwz 3, 40(30)
  032c93c  fmuls 2, 1, 2
  032c940  fctiwz 2, 2
  032c944  stfd 2, 240(1)
  032c948  lwz 4, 244(1)
  032c94c  cmpw 3, 4
  032c950  bf 0, 0x32ca2c
  032c954  lis 4, 51
  032c958  addi 4, 4, -15320
  032c95c  lfs 2, 40(4)
  032c960  fmuls 1, 1, 2
  032c964  fctiwz 1, 1
  032c968  stfd 1, 240(1)
  032c96c  lwz 4, 244(1)
  032c970  divw 5, 3, 4
  032c974  mullw 4, 5, 4
  032c978  subc 3, 3, 4
  032c97c  cmpwi 3, 0
  032c980  bf 2, 0x32ca2c
  032c984  li 5, 250
  032c988  ori 3, 31, 0
  032c98c  ori 4, 30, 0
  032c990  stb 5, 7(30)
  032c994  bl 0x10c808
  032c998  nop
  032c99c  b 0x32ca2c
  032c9a0  li 3, 0
  032c9a4  li 4, 0
  032c9a8  ori 5, 31, 0
  032c9ac  bl 0x15d12c
  032c9b0  nop
  032c9b4  lis 3, 51
  032c9b8  li 11, -1
  032c9bc  addi 3, 3, -15320
  032c9c0  li 6, 0
  032c9c4  li 7, 7
  032c9c8  lis 4, 161
  032c9cc  li 5, 0
  032c9d0  lfs 2, 8(3)
  032c9d4  addic 4, 4, 23856
  032c9d8  lfs 1, 44(3)
  032c9dc  li 8, 7
  032c9e0  lfs 3, 48(3)
  032c9e4  li 9, 10
  032c9e8  lfs 4, 52(3)
  032c9ec  li 10, 20
  032c9f0  lfs 5, 56(3)
  032c9f4  fmr 6, 2
  032c9f8  lfs 7, 60(3)
  032c9fc  std 11, 144(1)
  032ca00  std 6, 160(1)
  032ca04  ori 3, 31, 0
  032ca08  std 7, 168(1)
  032ca0c  std 11, 176(1)
  032ca10  std 6, 184(1)
  032ca14  bl 0x10e030
  032ca18  nop
  032ca1c  ori 3, 31, 0
  032ca20  bl 0xefb38
  032ca24  nop
  032ca28  b 0x32ca3c
  032ca2c  ori 3, 31, 0
  032ca30  ori 4, 30, 0
  032ca34  bl 0x10c9a0
  032ca38  nop
  032ca3c  ld 0, 304(1)
  032ca40  mtlr 0
  032ca44  lfd 31, 280(1)
  032ca48  ld 29, 256(1)
  032ca4c  ld 30, 264(1)
  032ca50  ld 31, 272(1)
  032ca54  addi 1, 1, 288
  032ca58  blr
