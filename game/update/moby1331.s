# game/update/moby1331.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1331_0024c2f8:   # 0x24c2f8, 0x14 bytes
  024c2f8  lis 3, 122
  024c2fc  lis 4, 1
  024c300  addic 3, 3, -19420
  024c304  stw 4, 72(3)
  024c308  blr

M1331_0024c380:   # 0x24c380, 0xcfc bytes
  024c380  stdu 1, -544(1)
  024c384  mflr 0
  024c388  std 0, 560(1)
  024c38c  stfd 15, 408(1)
  024c390  stfd 16, 416(1)
  024c394  stfd 17, 424(1)
  024c398  stfd 18, 432(1)
  024c39c  stfd 19, 440(1)
  024c3a0  stfd 20, 448(1)
  024c3a4  stfd 21, 456(1)
  024c3a8  stfd 22, 464(1)
  024c3ac  stfd 23, 472(1)
  024c3b0  stfd 24, 480(1)
  024c3b4  stfd 25, 488(1)
  024c3b8  stfd 26, 496(1)
  024c3bc  stfd 27, 504(1)
  024c3c0  stfd 28, 512(1)
  024c3c4  stfd 29, 520(1)
  024c3c8  stfd 30, 528(1)
  024c3cc  stfd 31, 536(1)
  024c3d0  addi 0, 1, 208
  024c3d4  stvx 29, 0, 0
  024c3d8  addic 0, 0, 16
  024c3dc  stvx 30, 0, 0
  024c3e0  addic 0, 0, 16
  024c3e4  stvx 31, 0, 0
  024c3e8  std 16, 280(1)
  024c3ec  lis 3, 250
  024c3f0  sldi 16, 4, 4
  024c3f4  addic 3, 3, 12384
  024c3f8  std 18, 296(1)
  024c3fc  lis 6, 250
  024c400  addc 18, 3, 16
  024c404  sldi 5, 4, 6
  024c408  addic 3, 6, 12192
  024c40c  clrldi 18, 18, 32
  024c410  std 19, 304(1)
  024c414  addc 3, 3, 5
  024c418  clrldi 19, 3, 32
  024c41c  lfs 1, 4(18)
  024c420  lfs 2, 0(18)
  024c424  lfs 3, 52(19)
  024c428  lfs 4, 48(19)
  024c42c  fsubs 1, 1, 3
  024c430  fsubs 2, 2, 4
  024c434  lfs 3, 8(18)
  024c438  lfs 4, 56(19)
  024c43c  std 14, 264(1)
  024c440  fsubs 3, 3, 4
  024c444  addic 14, 3, 48
  024c448  vspltisw 2, -1
  024c44c  lis 3, 250
  024c450  std 20, 312(1)
  024c454  fmuls 1, 1, 1
  024c458  sldi 20, 4, 2
  024c45c  vslw 31, 2, 2
  024c460  addic 3, 3, 12064
  024c464  extsw 20, 20
  024c468  std 30, 392(1)
  024c46c  lis 5, 37
  024c470  slwi 30, 4, 1
  024c474  addi 5, 5, -15600
  024c478  fmadds 1, 2, 2, 1
  024c47c  std 15, 272(1)
  024c480  lwzx 4, 3, 20
  024c484  addic 15, 30, 1
  024c488  clrldi 14, 14, 32
  024c48c  cmpwi 4, 2
  024c490  fmadds 1, 3, 3, 1
  024c494  fsqrts 1, 1
  024c498  stfs 1, 176(1)
  024c49c  stfs 1, 180(1)
  024c4a0  stfs 1, 184(1)
  024c4a4  stfs 1, 188(1)
  024c4a8  lvlx 2, 0, 5
  024c4ac  li 0, 176
  024c4b0  vspltw 2, 2, 0
  024c4b4  lfs 30, 0(5)
  024c4b8  lvx 3, 1, 0
  024c4bc  std 31, 400(1)
  024c4c0  std 29, 384(1)
  024c4c4  std 28, 376(1)
  024c4c8  std 27, 368(1)
  024c4cc  std 26, 360(1)
  024c4d0  std 25, 352(1)
  024c4d4  std 24, 344(1)
  024c4d8  std 23, 336(1)
  024c4dc  std 22, 328(1)
  024c4e0  std 21, 320(1)
  024c4e4  std 17, 288(1)
  024c4e8  vmaddfp 31, 3, 2, 31
  024c4ec  bf 2, 0x24c5bc
  024c4f0  li 4, 3
  024c4f4  sldi 6, 15, 8
  024c4f8  vspltisw 2, 0
  024c4fc  sldi 7, 30, 8
  024c500  vspltisw 3, 1
  024c504  sldi 8, 15, 6
  024c508  stwx 4, 3, 20
  024c50c  sldi 3, 30, 6
  024c510  lis 5, 250
  024c514  addc 4, 7, 3
  024c518  addc 8, 6, 8
  024c51c  addic 9, 5, 12480
  024c520  extsw 7, 4
  024c524  extsw 28, 8
  024c528  addic 10, 9, 8
  024c52c  addic 11, 9, 4
  024c530  addc 4, 9, 7
  024c534  addic 29, 9, 12
  024c538  addc 8, 9, 28
  024c53c  li 31, 20
  024c540  addc 5, 10, 7
  024c544  addc 9, 10, 28
  024c548  addc 6, 11, 7
  024c54c  addc 10, 11, 28
  024c550  li 3, 0
  024c554  lis 12, 16256
  024c558  addc 7, 29, 7
  024c55c  mtctr 31
  024c560  addc 11, 29, 28
  024c564  vcfsx 4, 2, 0
  024c568  vspltisw 5, -1
  024c56c  vadduwm 2, 2, 3
  024c570  vslw 5, 5, 5
  024c574  vmaddfp 4, 4, 31, 5
  024c578  stvewx 4, 0, 4
  024c57c  stw 3, 0(5)
  024c580  addic 4, 4, 16
  024c584  stw 3, 0(6)
  024c588  addic 5, 5, 16
  024c58c  stw 12, 0(7)
  024c590  addic 6, 6, 16
  024c594  stvewx 4, 0, 8
  024c598  addic 7, 7, 16
  024c59c  stw 3, 0(9)
  024c5a0  addic 8, 8, 16
  024c5a4  stw 3, 0(10)
  024c5a8  addic 9, 9, 16
  024c5ac  stw 12, 0(11)
  024c5b0  addic 10, 10, 16
  024c5b4  addic 11, 11, 16
  024c5b8  bdnz 0x24c564
  024c5bc  lis 29, 250
  024c5c0  lis 3, 37
  024c5c4  addic 29, 29, 12076
  024c5c8  addi 21, 3, -15600
  024c5cc  lfsx 1, 29, 20
  024c5d0  lfs 2, 4(21)
  024c5d4  bl 0x502578
  024c5d8  nop
  024c5dc  lis 22, 250
  024c5e0  stfsx 1, 29, 20
  024c5e4  lfs 2, 8(21)
  024c5e8  addic 22, 22, 12088
  024c5ec  lfsx 1, 22, 20
  024c5f0  bl 0x5025e0
  024c5f4  nop
  024c5f8  lis 23, 250
  024c5fc  stfsx 1, 22, 20
  024c600  addic 23, 23, 12100
  024c604  lfs 2, 12(21)
  024c608  lfsx 1, 23, 20
  024c60c  bl 0x502578
  024c610  nop
  024c614  stfsx 1, 23, 20
  024c618  li 3, 20
  024c61c  bl 0x502730
  024c620  nop
  024c624  lfs 31, 16(21)
  024c628  lfs 2, 20(21)
  024c62c  fmuls 1, 1, 31
  024c630  lfs 3, 24(21)
  024c634  lfs 29, 28(21)
  024c638  lis 28, 250
  024c63c  lfs 19, 32(21)
  024c640  sldi 17, 30, 8
  024c644  lfs 28, 36(21)
  024c648  sldi 3, 30, 6
  024c64c  lfs 27, 40(21)
  024c650  li 31, 0
  024c654  lfs 26, 44(21)
  024c658  addic 28, 28, 12480
  024c65c  lfs 25, 48(21)
  024c660  addc 17, 17, 3
  024c664  lfs 24, 52(21)
  024c668  ori 26, 31, 0
  024c66c  fdivs 20, 2, 1
  024c670  lfs 23, 56(21)
  024c674  lfs 22, 60(21)
  024c678  addic 24, 28, 8
  024c67c  lfs 21, 64(21)
  024c680  extsw 30, 17
  024c684  vspltisw 30, 0
  024c688  addic 25, 28, 4
  024c68c  addic 27, 28, 12
  024c690  lis 21, 16256
  024c694  fmr 1, 3
  024c698  fmuls 20, 20, 1
  024c69c  ori 3, 31, 0
  024c6a0  bl 0x502730
  024c6a4  nop
  024c6a8  fmr 18, 1
  024c6ac  li 3, 20
  024c6b0  bl 0x502730
  024c6b4  nop
  024c6b8  fdivs 2, 18, 1
  024c6bc  extsw 3, 31
  024c6c0  std 3, 192(1)
  024c6c4  lfsx 1, 29, 20
  024c6c8  lfd 3, 192(1)
  024c6cc  fcfid 3, 3
  024c6d0  vcfsx 29, 30, 0
  024c6d4  frsp 3, 3
  024c6d8  fmadds 1, 3, 20, 1
  024c6dc  fmadds 18, 2, 29, 19
  024c6e0  bl 0x10de78
  024c6e4  nop
  024c6e8  fsubs 2, 28, 1
  024c6ec  fsubs 3, 27, 1
  024c6f0  vspltisw 2, -1
  024c6f4  slwi 3, 31, 4
  024c6f8  addic 31, 31, 1
  024c6fc  addc 4, 3, 28
  024c700  vslw 2, 2, 2
  024c704  clrldi 4, 4, 32
  024c708  fsub 4, 1, 2
  024c70c  vmaddfp 2, 29, 31, 2
  024c710  addc 5, 3, 24
  024c714  addc 6, 3, 25
  024c718  addc 3, 3, 27
  024c71c  clrldi 6, 6, 32
  024c720  clrldi 3, 3, 32
  024c724  clrldi 5, 5, 32
  024c728  fsel 1, 4, 2, 1
  024c72c  extsw 31, 31
  024c730  cmpwi 31, 19
  024c734  stvewx 2, 30, 4
  024c738  vspltisw 2, 1
  024c73c  fsub 2, 3, 1
  024c740  stwx 26, 6, 30
  024c744  stwx 21, 3, 30
  024c748  vadduwm 30, 30, 2
  024c74c  fsel 1, 2, 3, 1
  024c750  fmuls 2, 1, 1
  024c754  fmuls 3, 2, 1
  024c758  fmuls 4, 2, 3
  024c75c  fmadds 1, 3, 26, 1
  024c760  fmuls 3, 2, 4
  024c764  fmadds 1, 4, 25, 1
  024c768  fmuls 2, 2, 3
  024c76c  fmadds 1, 3, 24, 1
  024c770  fmadds 1, 2, 23, 1
  024c774  fmuls 1, 18, 1
  024c778  stfsx 1, 5, 30
  024c77c  bt 0, 0x24c69c
  024c780  lfs 9, 52(19)
  024c784  lfs 2, 4(18)
  024c788  lfs 20, 48(19)
  024c78c  fsubs 2, 2, 9
  024c790  lfs 1, 0(18)
  024c794  lfs 10, 56(19)
  024c798  fsubs 1, 1, 20
  024c79c  lfs 3, 8(18)
  024c7a0  fsubs 3, 3, 10
  024c7a4  fmr 13, 22
  024c7a8  lfs 11, 60(19)
  024c7ac  fmuls 4, 2, 2
  024c7b0  lfs 12, 12(18)
  024c7b4  fmr 0, 13
  024c7b8  fmadds 4, 1, 1, 4
  024c7bc  fmr 19, 0
  024c7c0  fmadds 4, 3, 3, 4
  024c7c4  fsqrts 5, 4
  024c7c8  fcmpu 0, 5, 19
  024c7cc  bt 2, 0x24c810
  024c7d0  frsqrte 5, 4
  024c7d4  fmuls 6, 4, 5
  024c7d8  fmuls 7, 31, 5
  024c7dc  fnmsubs 6, 6, 5, 21
  024c7e0  fmadds 5, 6, 7, 5
  024c7e4  fmuls 6, 4, 5
  024c7e8  fmuls 7, 31, 5
  024c7ec  fnmsubs 6, 6, 5, 21
  024c7f0  fmadds 5, 6, 7, 5
  024c7f4  fmuls 4, 4, 5
  024c7f8  fmuls 6, 31, 5
  024c7fc  fnmsubs 4, 4, 5, 21
  024c800  fmadds 13, 4, 6, 5
  024c804  fmuls 19, 1, 13
  024c808  fmuls 0, 2, 13
  024c80c  fmuls 13, 3, 13
  024c810  lis 3, 151
  024c814  addic 3, 3, -25376
  024c818  lfs 1, 656(3)
  024c81c  lfs 2, 664(3)
  024c820  fmuls 3, 1, 13
  024c824  fmuls 4, 2, 0
  024c828  lfs 5, 660(3)
  024c82c  fmuls 6, 5, 19
  024c830  lis 3, 37
  024c834  addi 3, 3, -15600
  024c838  fmsubs 2, 2, 19, 3
  024c83c  fmsubs 3, 5, 13, 4
  024c840  fmsubs 1, 1, 0, 6
  024c844  lfs 5, 68(3)
  024c848  addc 4, 28, 17
  024c84c  fmuls 4, 2, 2
  024c850  clrldi 4, 4, 32
  024c854  sldi 5, 15, 8
  024c858  vspltisw 30, 0
  024c85c  lfs 6, 292(4)
  024c860  fmadds 4, 3, 3, 4
  024c864  lfs 7, 288(4)
  024c868  lfs 8, 296(4)
  024c86c  fmuls 12, 12, 7
  024c870  lfs 18, 300(4)
  024c874  fmadds 4, 1, 1, 4
  024c878  lis 4, 250
  024c87c  fmadds 11, 11, 18, 12
  024c880  fsqrts 4, 4
  024c884  addic 4, 4, 12432
  024c888  sldi 6, 15, 6
  024c88c  stfs 11, 124(1)
  024c890  addc 4, 4, 16
  024c894  addc 5, 5, 6
  024c898  clrldi 4, 4, 32
  024c89c  ori 29, 27, 0
  024c8a0  extsw 5, 5
  024c8a4  ori 30, 26, 0
  024c8a8  addc 31, 24, 5
  024c8ac  addc 27, 25, 5
  024c8b0  addc 28, 28, 5
  024c8b4  addc 29, 29, 5
  024c8b8  fdivs 5, 5, 4
  024c8bc  fsub 11, 22, 4
  024c8c0  fsub 17, 22, 4
  024c8c4  fsub 12, 22, 4
  024c8c8  fsub 16, 4, 22
  024c8cc  fsub 15, 4, 22
  024c8d0  fsub 4, 4, 22
  024c8d4  fmuls 2, 2, 5
  024c8d8  fmuls 1, 1, 5
  024c8dc  fmuls 3, 3, 5
  024c8e0  fsel 5, 11, 22, 2
  024c8e4  fsel 11, 17, 22, 1
  024c8e8  fsel 12, 12, 22, 3
  024c8ec  fsel 2, 16, 5, 2
  024c8f0  fsel 1, 4, 11, 1
  024c8f4  fsel 3, 15, 12, 3
  024c8f8  fmuls 11, 2, 6
  024c8fc  fmuls 4, 19, 1
  024c900  fmuls 5, 0, 3
  024c904  fmuls 12, 1, 6
  024c908  fmuls 17, 13, 2
  024c90c  fmuls 6, 3, 6
  024c910  fmsubs 3, 13, 3, 4
  024c914  fmsubs 2, 19, 2, 5
  024c918  fmadds 4, 0, 7, 11
  024c91c  fmadds 5, 13, 7, 12
  024c920  fmsubs 1, 0, 1, 17
  024c924  fmadds 6, 19, 7, 6
  024c928  fmadds 3, 3, 8, 4
  024c92c  fmadds 2, 2, 8, 5
  024c930  fmadds 1, 1, 8, 6
  024c934  fmadds 3, 9, 18, 3
  024c938  fmadds 2, 10, 18, 2
  024c93c  fmadds 1, 20, 18, 1
  024c940  stfs 3, 116(1)
  024c944  stfs 2, 120(1)
  024c948  stfs 1, 112(1)
  024c94c  stfs 1, 0(4)
  024c950  lfs 1, 116(1)
  024c954  stfs 1, 4(4)
  024c958  lfs 1, 120(1)
  024c95c  stfs 1, 8(4)
  024c960  lfs 1, 124(1)
  024c964  stfs 1, 12(4)
  024c968  lfs 20, 72(3)
  024c96c  lfs 19, 76(3)
  024c970  lfs 18, 80(3)
  024c974  lfs 17, 84(3)
  024c978  extsw 3, 30
  024c97c  vcfsx 29, 30, 0
  024c980  std 3, 192(1)
  024c984  stw 26, 0(31)
  024c988  lfsx 1, 22, 20
  024c98c  lfd 2, 192(1)
  024c990  fcfid 2, 2
  024c994  frsp 16, 2
  024c998  fmadds 1, 16, 20, 1
  024c99c  bl 0x10de78
  024c9a0  nop
  024c9a4  lfsx 2, 23, 20
  024c9a8  fmr 15, 1
  024c9ac  fmadds 1, 16, 19, 2
  024c9b0  bl 0x10de78
  024c9b4  nop
  024c9b8  fsubs 2, 28, 1
  024c9bc  fsubs 3, 27, 1
  024c9c0  fsub 4, 1, 2
  024c9c4  fsel 1, 4, 2, 1
  024c9c8  fsub 2, 3, 1
  024c9cc  fsel 3, 2, 3, 1
  024c9d0  fmr 2, 18
  024c9d4  fmr 1, 22
  024c9d8  fmuls 4, 3, 3
  024c9dc  fmuls 5, 4, 3
  024c9e0  fmuls 6, 4, 5
  024c9e4  fmadds 3, 5, 26, 3
  024c9e8  fmuls 5, 4, 6
  024c9ec  fmadds 3, 6, 25, 3
  024c9f0  fmuls 4, 4, 5
  024c9f4  fmadds 3, 5, 24, 3
  024c9f8  fmadds 3, 4, 23, 3
  024c9fc  fmuls 16, 3, 31
  024ca00  bl 0xfe4f0
  024ca04  nop
  024ca08  fsubs 2, 28, 15
  024ca0c  fadds 3, 15, 17
  024ca10  fsubs 4, 27, 15
  024ca14  vspltisw 2, -1
  024ca18  addic 30, 30, 1
  024ca1c  vspltisw 3, 1
  024ca20  cmpwi 30, 19
  024ca24  fsub 5, 15, 2
  024ca28  fsubs 6, 28, 3
  024ca2c  fsubs 7, 27, 3
  024ca30  vslw 2, 2, 2
  024ca34  vadduwm 30, 30, 3
  024ca38  vmaddfp 2, 29, 31, 2
  024ca3c  fsel 2, 5, 2, 15
  024ca40  fsub 5, 3, 6
  024ca44  fsub 8, 4, 2
  024ca48  fsel 3, 5, 6, 3
  024ca4c  fsel 2, 8, 4, 2
  024ca50  fsub 4, 7, 3
  024ca54  fmuls 5, 2, 2
  024ca58  fsel 3, 4, 7, 3
  024ca5c  lfs 4, 0(31)
  024ca60  stvewx 2, 0, 28
  024ca64  stw 21, 0(29)
  024ca68  addic 28, 28, 16
  024ca6c  addic 29, 29, 16
  024ca70  fmuls 6, 5, 2
  024ca74  fmuls 7, 3, 3
  024ca78  fmuls 8, 5, 6
  024ca7c  fmadds 2, 6, 26, 2
  024ca80  fmuls 6, 7, 3
  024ca84  fmuls 9, 5, 8
  024ca88  fmadds 2, 8, 25, 2
  024ca8c  fmuls 8, 7, 6
  024ca90  fmadds 3, 6, 26, 3
  024ca94  fmuls 5, 5, 9
  024ca98  fmadds 2, 9, 24, 2
  024ca9c  fmuls 6, 7, 8
  024caa0  fmadds 3, 8, 25, 3
  024caa4  fmadds 2, 5, 23, 2
  024caa8  fmuls 5, 7, 6
  024caac  fmadds 3, 6, 24, 3
  024cab0  fmadds 1, 16, 2, 1
  024cab4  fmadds 2, 5, 23, 3
  024cab8  fadds 1, 1, 4
  024cabc  fmuls 2, 2, 29
  024cac0  stfs 1, 0(31)
  024cac4  addic 31, 31, 16
  024cac8  stfs 2, 0(27)
  024cacc  addic 27, 27, 16
  024cad0  bt 0, 0x24c978
  024cad4  lis 3, 37
  024cad8  fmr 20, 28
  024cadc  fmr 2, 30
  024cae0  addi 31, 3, -15600
  024cae4  lfs 28, 88(31)
  024cae8  fmr 1, 28
  024caec  bl 0xfcbe8
  024caf0  nop
  024caf4  fmr 19, 1
  024caf8  lfs 1, 92(31)
  024cafc  lfs 3, 96(31)
  024cb00  fmr 2, 3
  024cb04  bl 0xfe4f0
  024cb08  nop
  024cb0c  fadds 2, 1, 17
  024cb10  fsubs 3, 20, 1
  024cb14  fsubs 4, 27, 1
  024cb18  stw 21, 140(1)
  024cb1c  stw 26, 136(1)
  024cb20  ori 3, 14, 0
  024cb24  lis 26, 250
  024cb28  fsubs 5, 20, 2
  024cb2c  fsub 6, 1, 3
  024cb30  fsubs 7, 27, 2
  024cb34  addic 26, 26, 12172
  024cb38  addic 4, 1, 128
  024cb3c  li 5, 127
  024cb40  fsub 8, 2, 5
  024cb44  fsel 1, 6, 3, 1
  024cb48  fsel 2, 8, 5, 2
  024cb4c  fsub 3, 4, 1
  024cb50  fsub 5, 7, 2
  024cb54  fsel 1, 3, 4, 1
  024cb58  fsel 2, 5, 7, 2
  024cb5c  fmuls 3, 1, 1
  024cb60  fmuls 4, 2, 2
  024cb64  fmuls 5, 3, 1
  024cb68  fmuls 6, 4, 2
  024cb6c  fmuls 7, 3, 5
  024cb70  fmadds 1, 5, 26, 1
  024cb74  fmuls 5, 4, 6
  024cb78  fmadds 2, 6, 26, 2
  024cb7c  fmuls 6, 3, 7
  024cb80  fmadds 1, 7, 25, 1
  024cb84  fmuls 7, 4, 5
  024cb88  fmadds 2, 5, 25, 2
  024cb8c  fmuls 3, 3, 6
  024cb90  fmadds 1, 6, 24, 1
  024cb94  fmuls 4, 4, 7
  024cb98  fmadds 2, 7, 24, 2
  024cb9c  fmadds 1, 3, 23, 1
  024cba0  fmadds 2, 4, 23, 2
  024cba4  fmuls 1, 19, 1
  024cba8  fmuls 2, 19, 2
  024cbac  stfs 1, 132(1)
  024cbb0  stfs 2, 128(1)
  024cbb4  lfs 3, 16(19)
  024cbb8  lfs 4, 20(19)
  024cbbc  fmuls 3, 3, 1
  024cbc0  lfs 5, 24(19)
  024cbc4  fmuls 4, 4, 1
  024cbc8  lfs 6, 12(19)
  024cbcc  fmuls 5, 5, 1
  024cbd0  lfs 7, 0(19)
  024cbd4  fmadds 6, 6, 2, 21
  024cbd8  lfs 8, 4(19)
  024cbdc  lfs 9, 8(19)
  024cbe0  lfs 10, 28(19)
  024cbe4  lwzx 6, 26, 20
  024cbe8  fmadds 3, 7, 2, 3
  024cbec  fmadds 4, 8, 2, 4
  024cbf0  fmadds 2, 9, 2, 5
  024cbf4  fmadds 1, 10, 1, 6
  024cbf8  stfs 3, 128(1)
  024cbfc  stfs 4, 132(1)
  024cc00  stfs 2, 136(1)
  024cc04  stfs 1, 140(1)
  024cc08  bl 0x133580
  024cc0c  nop
  024cc10  li 3, 3
  024cc14  bl 0xfc620
  024cc18  nop
  024cc1c  cmpwi 3, 0
  024cc20  bf 2, 0x24cd38
  024cc24  lfs 1, 0(19)
  024cc28  fmuls 1, 1, 29
  024cc2c  lis 4, 161
  024cc30  addic 3, 1, 144
  024cc34  addic 4, 4, 23856
  024cc38  li 5, 127
  024cc3c  stfs 1, 144(1)
  024cc40  lfs 2, 4(19)
  024cc44  lwzx 6, 26, 20
  024cc48  fmuls 2, 2, 29
  024cc4c  stfs 2, 148(1)
  024cc50  lfs 3, 8(19)
  024cc54  fmuls 3, 3, 29
  024cc58  stfs 3, 152(1)
  024cc5c  lfs 4, 12(19)
  024cc60  stfs 4, 156(1)
  024cc64  lfs 4, 48(19)
  024cc68  fadds 1, 1, 4
  024cc6c  stfs 1, 144(1)
  024cc70  lfs 1, 52(19)
  024cc74  fadds 1, 2, 1
  024cc78  stfs 1, 148(1)
  024cc7c  lfs 1, 56(19)
  024cc80  fadds 1, 3, 1
  024cc84  stfs 1, 152(1)
  024cc88  bl 0x133580
  024cc8c  nop
  024cc90  ori 31, 3, 0
  024cc94  cmpwi 31, 0
  024cc98  bt 2, 0x24cd38
  024cc9c  lis 3, 18410
  024cca0  vspltisw 3, -1
  024cca4  lis 5, 37
  024cca8  ori 3, 3, 24576
  024ccac  li 4, 100
  024ccb0  addi 5, 5, -15600
  024ccb4  lis 6, 114
  024ccb8  vslw 3, 3, 3
  024ccbc  stw 3, 12(31)
  024ccc0  li 3, -3056
  024ccc4  lvlx 2, 4, 5
  024ccc8  lfs 1, 100(5)
  024cccc  vspltw 2, 2, 0
  024ccd0  li 4, 10
  024ccd4  lvlx 4, 3, 6
  024ccd8  lfs 2, -3056(6)
  024ccdc  vmaddfp 2, 4, 2, 3
  024cce0  fmuls 1, 2, 1
  024cce4  fctiwz 1, 1
  024cce8  vctsxs 2, 2, 0
  024ccec  stfd 1, 192(1)
  024ccf0  vsplth 2, 2, 1
  024ccf4  lwz 3, 196(1)
  024ccf8  extsh 3, 3
  024ccfc  stvehx 2, 4, 31
  024cd00  bl 0x502730
  024cd04  nop
  024cd08  fdivs 1, 21, 1
  024cd0c  lis 3, 127
  024cd10  lis 4, 250
  024cd14  ori 3, 3, 32639
  024cd18  addic 4, 4, 12148
  024cd1c  stw 3, 56(31)
  024cd20  stfs 1, 48(31)
  024cd24  lwzx 3, 4, 20
  024cd28  cmpwi 3, 1
  024cd2c  bf 2, 0x24cd38
  024cd30  li 3, 1
  024cd34  sth 3, 54(31)
  024cd38  fmr 1, 28
  024cd3c  fmr 2, 30
  024cd40  bl 0xfcbe8
  024cd44  nop
  024cd48  addic 31, 1, 128
  024cd4c  fmr 1, 28
  024cd50  ori 3, 31, 0
  024cd54  fmr 2, 30
  024cd58  bl 0xfe788
  024cd5c  nop
  024cd60  addic 3, 1, 112
  024cd64  lwzx 6, 26, 20
  024cd68  ori 4, 31, 0
  024cd6c  li 5, 127
  024cd70  bl 0x133580
  024cd74  nop
  024cd78  li 3, 3
  024cd7c  bl 0xfc620
  024cd80  nop
  024cd84  cmpwi 3, 0
  024cd88  bf 2, 0x24ce50
  024cd8c  lis 4, 161
  024cd90  lwzx 6, 26, 20
  024cd94  addic 3, 1, 112
  024cd98  addic 4, 4, 23856
  024cd9c  li 5, 127
  024cda0  bl 0x133580
  024cda4  nop
  024cda8  ori 26, 3, 0
  024cdac  cmpwi 26, 0
  024cdb0  bt 2, 0x24ce50
  024cdb4  lis 3, 18410
  024cdb8  vspltisw 3, -1
  024cdbc  lis 5, 37
  024cdc0  ori 3, 3, 24576
  024cdc4  li 4, 100
  024cdc8  addi 5, 5, -15600
  024cdcc  lis 6, 114
  024cdd0  vslw 3, 3, 3
  024cdd4  stw 3, 12(26)
  024cdd8  li 3, -3056
  024cddc  lvlx 2, 4, 5
  024cde0  lfs 1, 100(5)
  024cde4  vspltw 2, 2, 0
  024cde8  li 4, 10
  024cdec  lvlx 4, 3, 6
  024cdf0  lfs 2, -3056(6)
  024cdf4  vmaddfp 2, 4, 2, 3
  024cdf8  fmuls 1, 2, 1
  024cdfc  fctiwz 1, 1
  024ce00  vctsxs 2, 2, 0
  024ce04  stfd 1, 192(1)
  024ce08  vsplth 2, 2, 1
  024ce0c  lwz 3, 196(1)
  024ce10  extsh 3, 3
  024ce14  stvehx 2, 4, 26
  024ce18  bl 0x502730
  024ce1c  nop
  024ce20  fdivs 1, 21, 1
  024ce24  lis 3, 127
  024ce28  lis 4, 250
  024ce2c  ori 3, 3, 32639
  024ce30  addic 4, 4, 12148
  024ce34  stw 3, 56(26)
  024ce38  stfs 1, 48(26)
  024ce3c  lwzx 3, 4, 20
  024ce40  cmpwi 3, 1
  024ce44  bf 2, 0x24ce50
  024ce48  li 3, 2
  024ce4c  sth 3, 54(26)
  024ce50  lis 31, 250
  024ce54  addic 31, 31, 12136
  024ce58  lwzx 4, 31, 20
  024ce5c  cmpwi 4, 0
  024ce60  bt 2, 0x24cfc8
  024ce64  clrlwi 3, 4, 31
  024ce68  cmpwi 3, 0
  024ce6c  bt 2, 0x24cf2c
  024ce70  lfs 1, 48(19)
  024ce74  lis 3, 37
  024ce78  stfs 1, 160(1)
  024ce7c  lfs 2, 52(19)
  024ce80  addi 3, 3, -15600
  024ce84  stfs 2, 164(1)
  024ce88  lfs 2, 56(19)
  024ce8c  stfs 2, 168(1)
  024ce90  lfs 3, 60(19)
  024ce94  lis 19, 250
  024ce98  stfs 3, 172(1)
  024ce9c  lfs 3, 104(3)
  024cea0  addic 19, 19, 12112
  024cea4  fsubs 2, 2, 3
  024cea8  lwzx 3, 19, 20
  024ceac  cmpwi 3, -1
  024ceb0  stfs 2, 168(1)
  024ceb4  bf 2, 0x24cef0
  024ceb8  lis 3, 37
  024cebc  lis 4, 122
  024cec0  fmr 2, 22
  024cec4  addi 5, 3, -15600
  024cec8  fmr 3, 21
  024cecc  addic 3, 1, 160
  024ced0  fmr 4, 21
  024ced4  lfs 1, -19248(4)
  024ced8  lfs 5, 108(5)
  024cedc  bl 0xda4ac
  024cee0  nop
  024cee4  lfs 1, 160(1)
  024cee8  lwzx 4, 31, 20
  024ceec  stwx 3, 19, 20
  024cef0  cmpwi 3, 0
  024cef4  bt 0, 0x24cf2c
  024cef8  lis 5, 162
  024cefc  slwi 3, 3, 5
  024cf00  addic 5, 5, -8448
  024cf04  addc 3, 5, 3
  024cf08  lis 5, 122
  024cf0c  clrldi 3, 3, 32
  024cf10  stfs 1, 16(3)
  024cf14  lfs 1, 164(1)
  024cf18  stfs 1, 20(3)
  024cf1c  lfs 1, 168(1)
  024cf20  stfs 1, 24(3)
  024cf24  lfs 1, -19248(5)
  024cf28  stfs 1, 28(3)
  024cf2c  rlwinm 3, 4, 0, 30, 30
  024cf30  cmpwi 3, 0
  024cf34  bt 2, 0x24cfc8
  024cf38  lfs 1, 120(1)
  024cf3c  lis 31, 250
  024cf40  fadds 1, 1, 31
  024cf44  addic 31, 31, 12124
  024cf48  lwzx 3, 31, 20
  024cf4c  cmpwi 3, -1
  024cf50  stfs 1, 120(1)
  024cf54  bf 2, 0x24cf88
  024cf58  lis 3, 37
  024cf5c  lis 4, 122
  024cf60  fmr 2, 22
  024cf64  addi 5, 3, -15600
  024cf68  fmr 3, 21
  024cf6c  addic 3, 1, 112
  024cf70  fmr 4, 21
  024cf74  lfs 1, -19248(4)
  024cf78  lfs 5, 108(5)
  024cf7c  bl 0xda4ac
  024cf80  nop
  024cf84  stwx 3, 31, 20
  024cf88  cmpwi 3, 0
  024cf8c  bt 0, 0x24cfc8
  024cf90  lis 4, 162
  024cf94  slwi 3, 3, 5
  024cf98  lfs 1, 112(1)
  024cf9c  addic 4, 4, -8448
  024cfa0  addc 3, 4, 3
  024cfa4  lis 4, 122
  024cfa8  clrldi 3, 3, 32
  024cfac  stfs 1, 16(3)
  024cfb0  lfs 1, 116(1)
  024cfb4  stfs 1, 20(3)
  024cfb8  lfs 1, 120(1)
  024cfbc  stfs 1, 24(3)
  024cfc0  lfs 1, -19248(4)
  024cfc4  stfs 1, 28(3)
  024cfc8  li 0, 208
  024cfcc  lvx 29, 1, 0
  024cfd0  addic 0, 0, 16
  024cfd4  lvx 30, 1, 0
  024cfd8  addic 0, 0, 16
  024cfdc  lvx 31, 1, 0
  024cfe0  ld 0, 560(1)
  024cfe4  mtlr 0
  024cfe8  lfd 15, 408(1)
  024cfec  lfd 16, 416(1)
  024cff0  lfd 17, 424(1)
  024cff4  lfd 18, 432(1)
  024cff8  lfd 19, 440(1)
  024cffc  lfd 20, 448(1)
  024d000  lfd 21, 456(1)
  024d004  lfd 22, 464(1)
  024d008  lfd 23, 472(1)
  024d00c  lfd 24, 480(1)
  024d010  lfd 25, 488(1)
  024d014  lfd 26, 496(1)
  024d018  lfd 27, 504(1)
  024d01c  lfd 28, 512(1)
  024d020  lfd 29, 520(1)
  024d024  lfd 30, 528(1)
  024d028  lfd 31, 536(1)
  024d02c  ld 14, 264(1)
  024d030  ld 15, 272(1)
  024d034  ld 16, 280(1)
  024d038  ld 17, 288(1)
  024d03c  ld 18, 296(1)
  024d040  ld 19, 304(1)
  024d044  ld 20, 312(1)
  024d048  ld 21, 320(1)
  024d04c  ld 22, 328(1)
  024d050  ld 23, 336(1)
  024d054  ld 24, 344(1)
  024d058  ld 25, 352(1)
  024d05c  ld 26, 360(1)
  024d060  ld 27, 368(1)
  024d064  ld 28, 376(1)
  024d068  ld 29, 384(1)
  024d06c  ld 30, 392(1)
  024d070  ld 31, 400(1)
  024d074  addi 1, 1, 544
  024d078  blr

M1331_0024d07c:   # 0x24d07c, 0xa0 bytes
  024d07c  stdu 1, -128(1)
  024d080  mflr 0
  024d084  std 0, 144(1)
  024d088  std 31, 120(1)
  024d08c  sldi 31, 3, 2
  024d090  std 30, 112(1)
  024d094  lis 3, 250
  024d098  lis 30, 250
  024d09c  extsw 31, 31
  024d0a0  addic 3, 3, 12064
  024d0a4  li 4, 0
  024d0a8  addic 30, 30, 12112
  024d0ac  lis 5, 250
  024d0b0  addic 5, 5, 12172
  024d0b4  stwx 4, 3, 31
  024d0b8  lwzx 3, 30, 31
  024d0bc  cmpwi 3, -1
  024d0c0  stwx 4, 5, 31
  024d0c4  bt 2, 0x24d0dc
  024d0c8  extsw 3, 3
  024d0cc  bl 0xda9e8
  024d0d0  nop
  024d0d4  li 3, -1
  024d0d8  stwx 3, 30, 31
  024d0dc  lis 30, 250
  024d0e0  addic 30, 30, 12124
  024d0e4  lwzx 3, 30, 31
  024d0e8  cmpwi 3, -1
  024d0ec  bt 2, 0x24d104
  024d0f0  extsw 3, 3
  024d0f4  bl 0xda9e8
  024d0f8  nop
  024d0fc  li 3, -1
  024d100  stwx 3, 30, 31
  024d104  ld 0, 144(1)
  024d108  mtlr 0
  024d10c  ld 30, 112(1)
  024d110  ld 31, 120(1)
  024d114  addi 1, 1, 128
  024d118  blr

UpdateMoby_1331:   # 0x24d11c, 0x1c8 bytes
  024d11c  stdu 1, -192(1)
  024d120  mflr 0
  024d124  std 0, 208(1)
  024d128  std 31, 184(1)
  024d12c  ori 31, 3, 0
  024d130  lbz 3, 32(3)
  024d134  cmpwi 3, 0
  024d138  cmpwi 1, 3, 1
  024d13c  std 30, 176(1)
  024d140  std 29, 168(1)
  024d144  std 28, 160(1)
  024d148  std 27, 152(1)
  024d14c  std 26, 144(1)
  024d150  std 25, 136(1)
  024d154  std 24, 128(1)
  024d158  std 23, 120(1)
  024d15c  cmpwi 6, 3, -1
  024d160  bt 1, 0x24d16c
  024d164  bf 25, 0x24d2b0
  024d168  b 0x24d174
  024d16c  bf 5, 0x24d1b4
  024d170  b 0x24d2b0
  024d174  lis 3, 250
  024d178  lis 4, 250
  024d17c  addic 7, 3, 12064
  024d180  li 6, 0
  024d184  addic 8, 4, 12172
  024d188  li 5, 1
  024d18c  li 9, 255
  024d190  stw 6, 8(7)
  024d194  stw 6, 8(8)
  024d198  stw 6, 4(8)
  024d19c  stw 6, 4(7)
  024d1a0  stw 6, 12172(4)
  024d1a4  stw 6, 12064(3)
  024d1a8  stb 5, 32(31)
  024d1ac  stb 9, 48(31)
  024d1b0  b 0x24d2b0
  024d1b4  li 24, 0
  024d1b8  lis 27, 250
  024d1bc  lis 28, 250
  024d1c0  ori 26, 24, 0
  024d1c4  lis 29, 250
  024d1c8  lis 30, 250
  024d1cc  addic 27, 27, 12064
  024d1d0  ori 23, 26, 0
  024d1d4  addic 28, 28, 12172
  024d1d8  addic 29, 29, 12112
  024d1dc  addic 30, 30, 12124
  024d1e0  slwi 25, 24, 2
  024d1e4  extsw 25, 25
  024d1e8  lwzx 3, 27, 25
  024d1ec  cmpwi 3, 1
  024d1f0  cmpwi 1, 3, 0
  024d1f4  cmpwi 6, 3, 4
  024d1f8  bf 2, 0x24d218
  024d1fc  lwzx 3, 28, 25
  024d200  lbz 3, 32(3)
  024d204  cmpwi 3, 128
  024d208  bt 0, 0x24d284
  024d20c  stwx 26, 27, 25
  024d210  stwx 26, 28, 25
  024d214  b 0x24d284
  024d218  bf 26, 0x24d268
  024d21c  lwzx 3, 29, 25
  024d220  stwx 26, 27, 25
  024d224  cmpwi 3, -1
  024d228  stwx 26, 28, 25
  024d22c  bt 2, 0x24d244
  024d230  extsw 3, 3
  024d234  bl 0xda9e8
  024d238  nop
  024d23c  li 3, -1
  024d240  stwx 3, 29, 25
  024d244  lwzx 3, 30, 25
  024d248  cmpwi 3, -1
  024d24c  bt 2, 0x24d284
  024d250  extsw 3, 3
  024d254  bl 0xda9e8
  024d258  nop
  024d25c  li 3, -1
  024d260  stwx 3, 30, 25
  024d264  b 0x24d284
  024d268  bt 6, 0x24d284
  024d26c  lwzx 3, 28, 25
  024d270  ori 4, 24, 0
  024d274  addic 23, 23, 1
  024d278  bl 0x24c380
  024d27c  li 3, 4
  024d280  stwx 3, 27, 25
  024d284  addic 24, 24, 1
  024d288  extsw 24, 24
  024d28c  cmpwi 24, 3
  024d290  bt 0, 0x24d1e0
  024d294  cmpwi 23, 0
  024d298  bt 2, 0x24d2b0
  024d29c  lis 3, 113
  024d2a0  ori 4, 31, 0
  024d2a4  addic 3, 3, -24864
  024d2a8  bl 0x6d7e0
  024d2ac  nop
  024d2b0  ld 0, 208(1)
  024d2b4  mtlr 0
  024d2b8  ld 23, 120(1)
  024d2bc  ld 24, 128(1)
  024d2c0  ld 25, 136(1)
  024d2c4  ld 26, 144(1)
  024d2c8  ld 27, 152(1)
  024d2cc  ld 28, 160(1)
  024d2d0  ld 29, 168(1)
  024d2d4  ld 30, 176(1)
  024d2d8  ld 31, 184(1)
  024d2dc  addi 1, 1, 192
  024d2e0  blr
