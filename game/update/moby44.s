# game/update/moby44.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M439_0037c1c0:   # 0x37c1c0, 0x98 bytes
  037c1c0  stdu 1, -128(1)
  037c1c4  mflr 0
  037c1c8  std 0, 144(1)
  037c1cc  std 31, 120(1)
  037c1d0  cmpw 3, 4
  037c1d4  std 30, 112(1)
  037c1d8  ori 31, 3, 0
  037c1dc  bt 2, 0x37c240
  037c1e0  lwz 30, 120(4)
  037c1e4  lhz 3, 412(30)
  037c1e8  cmpwi 3, 0
  037c1ec  bt 2, 0x37c204
  037c1f0  li 3, 16
  037c1f4  bl 0xfc620
  037c1f8  nop
  037c1fc  cmpwi 3, 0
  037c200  bf 2, 0x37c240
  037c204  lis 3, 56
  037c208  vspltisw 2, -1
  037c20c  lis 4, 114
  037c210  addi 3, 3, -15944
  037c214  stw 31, 408(30)
  037c218  li 5, -3056
  037c21c  vslw 2, 2, 2
  037c220  lvlx 3, 0, 3
  037c224  lvlx 4, 5, 4
  037c228  vspltw 3, 3, 0
  037c22c  li 3, 412
  037c230  vmaddfp 2, 4, 3, 2
  037c234  vctsxs 2, 2, 0
  037c238  vsplth 2, 2, 1
  037c23c  stvehx 2, 3, 30
  037c240  ld 0, 144(1)
  037c244  mtlr 0
  037c248  ld 30, 112(1)
  037c24c  ld 31, 120(1)
  037c250  addi 1, 1, 128
  037c254  blr

M44_0037c268:   # 0x37c268, 0x25c bytes
  037c268  stdu 1, -208(1)
  037c26c  mflr 0
  037c270  std 0, 224(1)
  037c274  stfd 31, 200(1)
  037c278  addi 0, 1, 144
  037c27c  stvx 30, 0, 0
  037c280  addic 0, 0, 16
  037c284  stvx 31, 0, 0
  037c288  std 31, 192(1)
  037c28c  lis 4, 151
  037c290  ori 31, 3, 0
  037c294  addic 4, 4, -25376
  037c298  lwz 3, 120(31)
  037c29c  lwz 4, 8324(4)
  037c2a0  std 30, 184(1)
  037c2a4  std 29, 176(1)
  037c2a8  cmpwi 4, 101
  037c2ac  bf 2, 0x37c2bc
  037c2b0  li 4, 0
  037c2b4  sth 4, 342(3)
  037c2b8  b 0x37c494
  037c2bc  lbz 30, 33(31)
  037c2c0  cmpwi 30, 255
  037c2c4  bf 2, 0x37c304
  037c2c8  lis 4, 56
  037c2cc  vspltisw 2, -1
  037c2d0  lis 5, 114
  037c2d4  addi 4, 4, -15784
  037c2d8  li 6, -3056
  037c2dc  vslw 2, 2, 2
  037c2e0  lvlx 3, 0, 4
  037c2e4  lvlx 4, 6, 5
  037c2e8  li 4, 342
  037c2ec  vspltw 3, 3, 0
  037c2f0  vmaddfp 2, 4, 3, 2
  037c2f4  vctsxs 2, 2, 0
  037c2f8  vsplth 2, 2, 1
  037c2fc  stvehx 2, 4, 3
  037c300  b 0x37c494
  037c304  lis 3, 165
  037c308  rlwinm 4, 30, 2, 22, 29
  037c30c  addic 3, 3, -28284
  037c310  lwzx 30, 3, 4
  037c314  cmpwi 30, 0
  037c318  bt 2, 0x37c494
  037c31c  lis 3, 56
  037c320  lfs 1, 16(31)
  037c324  li 4, 8
  037c328  addi 3, 3, -15784
  037c32c  lfs 2, 20(31)
  037c330  stfs 1, 112(1)
  037c334  lfs 1, 28(31)
  037c338  stfs 2, 116(1)
  037c33c  stfs 1, 124(1)
  037c340  lfs 31, 4(3)
  037c344  lfs 1, 24(31)
  037c348  fadds 1, 1, 31
  037c34c  stfs 1, 120(1)
  037c350  lvlx 30, 4, 3
  037c354  lvlx 31, 0, 3
  037c358  vspltw 30, 30, 0
  037c35c  vspltw 31, 31, 0
  037c360  lis 3, 164
  037c364  lhz 29, 0(30)
  037c368  rlwinm 29, 29, 8, 9, 23
  037c36c  lwz 3, -28512(3)
  037c370  addc 3, 3, 29
  037c374  clrldi 3, 3, 32
  037c378  lbz 4, 32(3)
  037c37c  cmpwi 4, 128
  037c380  bf 0, 0x37c480
  037c384  lhz 4, 166(3)
  037c388  cmpwi 4, 44
  037c38c  bf 2, 0x37c480
  037c390  ori 6, 3, 0
  037c394  addic 3, 1, 128
  037c398  addic 4, 1, 112
  037c39c  li 5, 2
  037c3a0  li 7, 0
  037c3a4  lfs 1, 16(6)
  037c3a8  stfs 1, 128(1)
  037c3ac  lfs 1, 20(6)
  037c3b0  stfs 1, 132(1)
  037c3b4  lfs 1, 24(6)
  037c3b8  fadds 2, 1, 31
  037c3bc  stfs 1, 136(1)
  037c3c0  lfs 1, 28(6)
  037c3c4  li 6, 0
  037c3c8  stfs 1, 140(1)
  037c3cc  stfs 2, 136(1)
  037c3d0  bl 0x57820
  037c3d4  nop
  037c3d8  cmpwi 3, 0
  037c3dc  bf 2, 0x37c480
  037c3e0  vspltisw 2, -1
  037c3e4  lis 3, 114
  037c3e8  li 4, -3056
  037c3ec  lis 5, 164
  037c3f0  vslw 3, 2, 2
  037c3f4  lvlx 2, 4, 3
  037c3f8  lwz 3, -28512(5)
  037c3fc  li 4, 0
  037c400  vmaddfp 3, 2, 30, 3
  037c404  addc 29, 3, 29
  037c408  li 3, 342
  037c40c  clrldi 29, 29, 32
  037c410  cmpw 31, 29
  037c414  lwz 5, 120(29)
  037c418  vctsxs 3, 3, 0
  037c41c  vsplth 3, 3, 1
  037c420  stvehx 3, 3, 5
  037c424  stb 4, 347(5)
  037c428  bt 2, 0x37c480
  037c42c  lwz 29, 120(29)
  037c430  lhz 3, 412(29)
  037c434  cmpwi 3, 0
  037c438  bt 2, 0x37c45c
  037c43c  li 3, 16
  037c440  bl 0xfc620
  037c444  nop
  037c448  cmpwi 3, 0
  037c44c  bf 2, 0x37c480
  037c450  lis 3, 114
  037c454  li 4, -3056
  037c458  lvlx 2, 4, 3
  037c45c  vspltisw 3, -1
  037c460  vspltw 2, 2, 0
  037c464  li 3, 412
  037c468  stw 31, 408(29)
  037c46c  vslw 3, 3, 3
  037c470  vmaddfp 2, 2, 31, 3
  037c474  vctsxs 2, 2, 0
  037c478  vsplth 2, 2, 1
  037c47c  stvehx 2, 3, 29
  037c480  lhz 3, 0(30)
  037c484  addic 30, 30, 2
  037c488  extsh 3, 3
  037c48c  cmpwi 3, 0
  037c490  bf 0, 0x37c360
  037c494  li 0, 144
  037c498  lvx 30, 1, 0
  037c49c  addic 0, 0, 16
  037c4a0  lvx 31, 1, 0
  037c4a4  ld 0, 224(1)
  037c4a8  mtlr 0
  037c4ac  lfd 31, 200(1)
  037c4b0  ld 29, 176(1)
  037c4b4  ld 30, 184(1)
  037c4b8  ld 31, 192(1)
  037c4bc  addi 1, 1, 208
  037c4c0  blr

M44_0037c500:   # 0x37c500, 0x5b0 bytes
  037c500  stdu 1, -272(1)
  037c504  mflr 0
  037c508  std 0, 288(1)
  037c50c  stfd 29, 248(1)
  037c510  stfd 30, 256(1)
  037c514  stfd 31, 264(1)
  037c518  std 31, 240(1)
  037c51c  ori 31, 3, 0
  037c520  lfs 2, 0(5)
  037c524  lis 3, 56
  037c528  std 30, 232(1)
  037c52c  fmr 31, 1
  037c530  ori 30, 5, 0
  037c534  addi 4, 3, -15164
  037c538  lfs 3, 16(31)
  037c53c  lfs 4, 4(5)
  037c540  lfs 5, 20(31)
  037c544  fsubs 2, 2, 3
  037c548  std 28, 216(1)
  037c54c  fsubs 3, 4, 5
  037c550  lis 28, 115
  037c554  addic 3, 31, 72
  037c558  addic 28, 28, 22784
  037c55c  fabs 5, 2
  037c560  fabs 4, 3
  037c564  stfs 2, 140(1)
  037c568  std 29, 224(1)
  037c56c  stfs 3, 144(1)
  037c570  lwz 29, 120(31)
  037c574  fsubs 2, 5, 4
  037c578  stfs 2, 148(1)
  037c57c  lwz 6, 140(1)
  037c580  lfs 29, 0(4)
  037c584  lfs 1, 140(1)
  037c588  lwz 7, 144(1)
  037c58c  lfs 2, 144(1)
  037c590  fabs 1, 1
  037c594  lwz 5, 148(1)
  037c598  rlwinm 7, 7, 3, 29, 29
  037c59c  fabs 3, 2
  037c5a0  lfs 2, 148(1)
  037c5a4  rlwimi 7, 5, 2, 30, 30
  037c5a8  fsub 6, 2, 29
  037c5ac  fsub 7, 2, 29
  037c5b0  rlwimi 7, 6, 4, 28, 28
  037c5b4  ori 5, 28, 0
  037c5b8  slwi 6, 7, 2
  037c5bc  rlwimi 5, 7, 2, 26, 28
  037c5c0  clrldi 5, 5, 32
  037c5c4  fsel 4, 6, 1, 4
  037c5c8  lfsx 1, 28, 6
  037c5cc  lfs 2, 4(5)
  037c5d0  fsel 3, 7, 3, 5
  037c5d4  lfs 30, 4(4)
  037c5d8  fcmpu 0, 4, 29
  037c5dc  bt 1, 0x37c5e8
  037c5e0  fmr 1, 29
  037c5e4  b 0x37c700
  037c5e8  fsubs 5, 3, 4
  037c5ec  fadds 3, 3, 4
  037c5f0  addic 4, 1, 16
  037c5f4  li 7, 2
  037c5f8  addic 6, 4, 184
  037c5fc  addic 5, 4, 168
  037c600  mtctr 7
  037c604  fdivs 3, 5, 3
  037c608  fmuls 4, 3, 3
  037c60c  stfs 3, 196(1)
  037c610  stfs 3, 188(1)
  037c614  stfs 3, 192(1)
  037c618  stfs 3, 184(1)
  037c61c  lfs 6, 196(1)
  037c620  lfs 7, 188(1)
  037c624  lfs 8, 192(1)
  037c628  fmuls 5, 4, 4
  037c62c  fmuls 7, 7, 4
  037c630  fmuls 6, 6, 5
  037c634  fmuls 3, 5, 5
  037c638  fmuls 5, 8, 5
  037c63c  stfs 7, 188(1)
  037c640  fmuls 4, 6, 4
  037c644  stfs 5, 192(1)
  037c648  stfs 4, 196(1)
  037c64c  lfs 4, 168(4)
  037c650  fmuls 4, 4, 3
  037c654  stfs 4, 184(4)
  037c658  lfs 4, 4(5)
  037c65c  addic 5, 5, 8
  037c660  fmuls 4, 4, 3
  037c664  addic 4, 4, 8
  037c668  stfs 4, 4(6)
  037c66c  addic 6, 6, 8
  037c670  bdnz 0x37c64c
  037c674  li 6, 4
  037c678  ori 4, 1, 0
  037c67c  mtctr 6
  037c680  lis 5, 115
  037c684  addic 6, 4, 184
  037c688  addic 5, 5, 22752
  037c68c  ori 8, 6, 0
  037c690  lfs 3, 184(4)
  037c694  lfs 4, 0(5)
  037c698  fmuls 3, 3, 4
  037c69c  lfs 4, 4(5)
  037c6a0  addic 5, 5, 8
  037c6a4  stfs 3, 184(4)
  037c6a8  lfs 3, 4(6)
  037c6ac  addic 4, 4, 8
  037c6b0  fmuls 3, 3, 4
  037c6b4  stfs 3, 4(6)
  037c6b8  addic 6, 6, 8
  037c6bc  bdnz 0x37c690
  037c6c0  ori 4, 1, 0
  037c6c4  fmr 3, 29
  037c6c8  mtctr 7
  037c6cc  lfs 4, 184(4)
  037c6d0  fadds 3, 3, 4
  037c6d4  lfs 4, 4(8)
  037c6d8  addic 4, 4, 16
  037c6dc  lfs 5, 8(8)
  037c6e0  lfs 6, 12(8)
  037c6e4  addic 8, 8, 16
  037c6e8  fadds 3, 3, 4
  037c6ec  fadds 3, 3, 5
  037c6f0  fadds 3, 3, 6
  037c6f4  bdnz 0x37c6cc
  037c6f8  fadds 3, 3, 30
  037c6fc  fmadds 1, 3, 1, 2
  037c700  lis 4, 56
  037c704  lis 5, 114
  037c708  addi 4, 4, -15164
  037c70c  lis 6, 114
  037c710  lfs 2, 8(4)
  037c714  lfs 3, -3048(5)
  037c718  lfs 4, 12(4)
  037c71c  fmuls 2, 3, 2
  037c720  lfs 5, -3052(6)
  037c724  addic 5, 29, 312
  037c728  fmuls 4, 5, 4
  037c72c  fmr 3, 2
  037c730  bl 0x10a2e0
  037c734  nop
  037c738  lfs 1, 0(30)
  037c73c  lfs 2, 16(31)
  037c740  lfs 3, 4(30)
  037c744  lfs 4, 20(31)
  037c748  fsubs 1, 1, 2
  037c74c  fsubs 2, 3, 4
  037c750  fabs 4, 1
  037c754  fabs 5, 2
  037c758  stfs 1, 128(1)
  037c75c  stfs 2, 132(1)
  037c760  lfs 3, 72(31)
  037c764  fsubs 1, 4, 5
  037c768  stfs 1, 136(1)
  037c76c  lwz 3, 128(1)
  037c770  lfs 1, 128(1)
  037c774  lwz 4, 132(1)
  037c778  lfs 2, 132(1)
  037c77c  lwz 5, 136(1)
  037c780  rlwinm 4, 4, 3, 29, 29
  037c784  fabs 6, 2
  037c788  lfs 2, 136(1)
  037c78c  fabs 1, 1
  037c790  rlwimi 4, 5, 2, 30, 30
  037c794  fsub 7, 2, 29
  037c798  fsub 8, 2, 29
  037c79c  rlwimi 4, 3, 4, 28, 28
  037c7a0  ori 3, 28, 0
  037c7a4  rlwimi 3, 4, 2, 26, 28
  037c7a8  slwi 4, 4, 2
  037c7ac  clrldi 3, 3, 32
  037c7b0  fsel 5, 7, 1, 5
  037c7b4  lfsx 1, 28, 4
  037c7b8  fsel 4, 8, 6, 4
  037c7bc  lfs 2, 4(3)
  037c7c0  fcmpu 0, 5, 29
  037c7c4  bt 1, 0x37c7d0
  037c7c8  fmr 1, 29
  037c7cc  b 0x37c8e8
  037c7d0  fsubs 6, 4, 5
  037c7d4  fadds 4, 4, 5
  037c7d8  addic 3, 1, 16
  037c7dc  li 6, 2
  037c7e0  addic 5, 3, 152
  037c7e4  addic 4, 3, 136
  037c7e8  mtctr 6
  037c7ec  fdivs 4, 6, 4
  037c7f0  fmuls 5, 4, 4
  037c7f4  stfs 4, 164(1)
  037c7f8  stfs 4, 156(1)
  037c7fc  stfs 4, 160(1)
  037c800  stfs 4, 152(1)
  037c804  lfs 7, 164(1)
  037c808  lfs 8, 156(1)
  037c80c  lfs 9, 160(1)
  037c810  fmuls 6, 5, 5
  037c814  fmuls 8, 8, 5
  037c818  fmuls 7, 7, 6
  037c81c  fmuls 4, 6, 6
  037c820  fmuls 6, 9, 6
  037c824  stfs 8, 156(1)
  037c828  fmuls 5, 7, 5
  037c82c  stfs 6, 160(1)
  037c830  stfs 5, 164(1)
  037c834  lfs 5, 136(3)
  037c838  fmuls 5, 5, 4
  037c83c  stfs 5, 152(3)
  037c840  lfs 5, 4(4)
  037c844  addic 4, 4, 8
  037c848  fmuls 5, 5, 4
  037c84c  addic 3, 3, 8
  037c850  stfs 5, 4(5)
  037c854  addic 5, 5, 8
  037c858  bdnz 0x37c834
  037c85c  li 5, 4
  037c860  ori 3, 1, 0
  037c864  mtctr 5
  037c868  lis 4, 115
  037c86c  addic 5, 3, 152
  037c870  addic 4, 4, 22752
  037c874  ori 7, 5, 0
  037c878  lfs 4, 152(3)
  037c87c  lfs 5, 0(4)
  037c880  fmuls 4, 4, 5
  037c884  lfs 5, 4(4)
  037c888  addic 4, 4, 8
  037c88c  stfs 4, 152(3)
  037c890  lfs 4, 4(5)
  037c894  addic 3, 3, 8
  037c898  fmuls 4, 4, 5
  037c89c  stfs 4, 4(5)
  037c8a0  addic 5, 5, 8
  037c8a4  bdnz 0x37c878
  037c8a8  ori 3, 1, 0
  037c8ac  fmr 4, 29
  037c8b0  mtctr 6
  037c8b4  lfs 5, 152(3)
  037c8b8  fadds 4, 4, 5
  037c8bc  lfs 5, 4(7)
  037c8c0  addic 3, 3, 16
  037c8c4  lfs 6, 8(7)
  037c8c8  lfs 7, 12(7)
  037c8cc  addic 7, 7, 16
  037c8d0  fadds 4, 4, 5
  037c8d4  fadds 4, 4, 6
  037c8d8  fadds 4, 4, 7
  037c8dc  bdnz 0x37c8b4
  037c8e0  fadds 4, 4, 30
  037c8e4  fmadds 1, 4, 1, 2
  037c8e8  fmr 2, 1
  037c8ec  fmr 1, 3
  037c8f0  bl 0x5026a0
  037c8f4  nop
  037c8f8  fcmpu 0, 1, 30
  037c8fc  lis 4, 56
  037c900  addic 3, 29, 308
  037c904  addi 4, 4, -15164
  037c908  lfs 1, 16(4)
  037c90c  cror 6, 1, 2
  037c910  bt 6, 0x37c934
  037c914  fmr 2, 1
  037c918  lis 4, 114
  037c91c  fmr 1, 31
  037c920  lfs 3, -3048(4)
  037c924  fmuls 2, 3, 2
  037c928  bl 0x109af0
  037c92c  nop
  037c930  b 0x37c950
  037c934  fmr 2, 1
  037c938  lis 4, 114
  037c93c  fmr 1, 29
  037c940  lfs 3, -3048(4)
  037c944  fmuls 2, 3, 2
  037c948  bl 0x109af0
  037c94c  nop
  037c950  lis 3, 56
  037c954  lfs 1, 72(31)
  037c958  addi 28, 3, -15164
  037c95c  lfs 2, 20(28)
  037c960  lfs 3, 24(28)
  037c964  fadds 2, 1, 2
  037c968  lfs 4, 28(28)
  037c96c  fsubs 5, 3, 1
  037c970  lis 3, 114
  037c974  addic 4, 1, 112
  037c978  li 8, 0
  037c97c  fsubs 3, 3, 2
  037c980  fsub 7, 1, 5
  037c984  fsubs 6, 4, 2
  037c988  fsubs 4, 4, 1
  037c98c  fsub 8, 2, 3
  037c990  fsel 1, 7, 5, 1
  037c994  fsel 2, 8, 3, 2
  037c998  fsub 7, 4, 1
  037c99c  lfs 3, 32(28)
  037c9a0  lfs 5, 36(28)
  037c9a4  fsub 8, 6, 2
  037c9a8  fsel 1, 7, 4, 1
  037c9ac  lfs 4, 40(28)
  037c9b0  fsel 2, 8, 6, 2
  037c9b4  fmuls 6, 1, 1
  037c9b8  lfs 8, 44(28)
  037c9bc  lfs 11, 308(29)
  037c9c0  fmuls 7, 2, 2
  037c9c4  fmuls 9, 6, 1
  037c9c8  fmuls 10, 7, 2
  037c9cc  fmuls 12, 6, 9
  037c9d0  fmadds 1, 9, 3, 1
  037c9d4  fmuls 9, 7, 10
  037c9d8  fmadds 2, 10, 3, 2
  037c9dc  fmuls 3, 6, 12
  037c9e0  fmadds 1, 12, 5, 1
  037c9e4  fmuls 10, 7, 9
  037c9e8  fmadds 2, 9, 5, 2
  037c9ec  fmuls 5, 6, 3
  037c9f0  fmadds 1, 3, 4, 1
  037c9f4  fmuls 3, 7, 10
  037c9f8  fmadds 2, 10, 4, 2
  037c9fc  lfs 4, -3052(3)
  037ca00  fmadds 1, 5, 8, 1
  037ca04  ori 3, 31, 0
  037ca08  fmadds 2, 3, 8, 2
  037ca0c  fmr 3, 29
  037ca10  fmuls 2, 2, 11
  037ca14  stfs 2, 112(1)
  037ca18  lfs 2, 308(29)
  037ca1c  li 29, 0
  037ca20  fmuls 1, 1, 2
  037ca24  stw 29, 120(1)
  037ca28  stfs 1, 116(1)
  037ca2c  lfs 1, 48(28)
  037ca30  fmuls 1, 4, 1
  037ca34  stfs 1, 120(1)
  037ca38  lfs 1, 52(28)
  037ca3c  fmr 2, 1
  037ca40  bl 0x1009b0
  037ca44  nop
  037ca48  lfs 1, 20(31)
  037ca4c  lfs 2, 4(30)
  037ca50  lfs 3, 16(31)
  037ca54  fsubs 1, 1, 2
  037ca58  lfs 2, 0(30)
  037ca5c  fsubs 2, 3, 2
  037ca60  fmuls 1, 1, 1
  037ca64  fmadds 1, 2, 2, 1
  037ca68  lfs 2, 56(28)
  037ca6c  fsqrts 1, 1
  037ca70  fcmpu 0, 1, 2
  037ca74  cror 6, 1, 2
  037ca78  bt 6, 0x37ca80
  037ca7c  li 29, 1
  037ca80  ori 3, 29, 0
  037ca84  ld 0, 288(1)
  037ca88  mtlr 0
  037ca8c  lfd 29, 248(1)
  037ca90  lfd 30, 256(1)
  037ca94  lfd 31, 264(1)
  037ca98  ld 28, 216(1)
  037ca9c  ld 29, 224(1)
  037caa0  ld 30, 232(1)
  037caa4  ld 31, 240(1)
  037caa8  addi 1, 1, 272
  037caac  blr

M44_0037cac8:   # 0x37cac8, 0x418 bytes
  037cac8  stdu 1, -272(1)
  037cacc  mflr 0
  037cad0  std 0, 288(1)
  037cad4  stfd 29, 248(1)
  037cad8  stfd 30, 256(1)
  037cadc  stfd 31, 264(1)
  037cae0  std 26, 200(1)
  037cae4  std 29, 224(1)
  037cae8  lwz 29, 120(3)
  037caec  std 31, 240(1)
  037caf0  lis 26, 56
  037caf4  ori 31, 3, 0
  037caf8  std 28, 216(1)
  037cafc  addi 26, 26, -13648
  037cb00  lwz 28, 380(29)
  037cb04  std 30, 232(1)
  037cb08  std 27, 208(1)
  037cb0c  std 25, 192(1)
  037cb10  cmpwi 28, -1
  037cb14  bf 2, 0x37cb20
  037cb18  li 3, 0
  037cb1c  b 0x37cea8
  037cb20  lis 3, 165
  037cb24  slwi 4, 28, 2
  037cb28  addic 3, 3, -28284
  037cb2c  extsw 4, 4
  037cb30  lwzx 28, 3, 4
  037cb34  cmpwi 28, 0
  037cb38  bf 2, 0x37cb44
  037cb3c  li 3, 0
  037cb40  b 0x37cea8
  037cb44  lfs 1, 16(31)
  037cb48  lfs 2, 20(31)
  037cb4c  li 30, 0
  037cb50  stfs 1, 112(1)
  037cb54  lfs 1, 28(31)
  037cb58  stfs 2, 116(1)
  037cb5c  ori 25, 30, 0
  037cb60  stfs 1, 124(1)
  037cb64  lfs 30, 0(26)
  037cb68  lfs 1, 24(31)
  037cb6c  fadds 1, 1, 30
  037cb70  stfs 1, 120(1)
  037cb74  lfs 31, 4(26)
  037cb78  fmr 29, 31
  037cb7c  lis 3, 164
  037cb80  lhz 27, 0(28)
  037cb84  rlwinm 27, 27, 8, 9, 23
  037cb88  lwz 3, -28512(3)
  037cb8c  addc 3, 3, 27
  037cb90  clrldi 3, 3, 32
  037cb94  lhz 4, 166(3)
  037cb98  cmpwi 4, 635
  037cb9c  bf 2, 0x37ce70
  037cba0  lbz 4, 32(3)
  037cba4  cmpwi 1, 4, 15
  037cba8  cmpwi 4, 6
  037cbac  cror 2, 0, 5
  037cbb0  bt 2, 0x37ce70
  037cbb4  lfs 1, 16(3)
  037cbb8  lfs 2, 16(31)
  037cbbc  lfs 3, 20(3)
  037cbc0  lfs 4, 20(31)
  037cbc4  fsubs 1, 1, 2
  037cbc8  fsubs 2, 3, 4
  037cbcc  lis 3, 115
  037cbd0  addic 3, 3, 22784
  037cbd4  fabs 4, 1
  037cbd8  fabs 5, 2
  037cbdc  stfs 1, 144(1)
  037cbe0  stfs 2, 148(1)
  037cbe4  lfs 1, 72(31)
  037cbe8  fsubs 2, 4, 5
  037cbec  stfs 2, 152(1)
  037cbf0  lwz 4, 144(1)
  037cbf4  lfs 2, 144(1)
  037cbf8  lwz 5, 148(1)
  037cbfc  lfs 3, 148(1)
  037cc00  lwz 6, 152(1)
  037cc04  rlwinm 5, 5, 3, 29, 29
  037cc08  fabs 6, 3
  037cc0c  lfs 3, 152(1)
  037cc10  fabs 2, 2
  037cc14  rlwimi 5, 6, 2, 30, 30
  037cc18  fsub 7, 3, 29
  037cc1c  fsub 8, 3, 29
  037cc20  rlwimi 5, 4, 4, 28, 28
  037cc24  ori 4, 3, 0
  037cc28  rlwimi 4, 5, 2, 26, 28
  037cc2c  slwi 5, 5, 2
  037cc30  clrldi 4, 4, 32
  037cc34  fsel 5, 7, 2, 5
  037cc38  lfsx 2, 3, 5
  037cc3c  fsel 4, 8, 6, 4
  037cc40  lfs 3, 4(4)
  037cc44  fcmpu 0, 5, 29
  037cc48  bt 1, 0x37cc54
  037cc4c  fmr 2, 29
  037cc50  b 0x37cd70
  037cc54  fsubs 6, 4, 5
  037cc58  fadds 4, 4, 5
  037cc5c  addic 3, 1, 16
  037cc60  li 6, 2
  037cc64  addic 5, 3, 156
  037cc68  addic 4, 3, 140
  037cc6c  mtctr 6
  037cc70  fdivs 4, 6, 4
  037cc74  fmuls 5, 4, 4
  037cc78  stfs 4, 168(1)
  037cc7c  stfs 4, 160(1)
  037cc80  stfs 4, 164(1)
  037cc84  stfs 4, 156(1)
  037cc88  lfs 7, 168(1)
  037cc8c  lfs 8, 160(1)
  037cc90  lfs 9, 164(1)
  037cc94  fmuls 6, 5, 5
  037cc98  fmuls 8, 8, 5
  037cc9c  fmuls 7, 7, 6
  037cca0  fmuls 4, 6, 6
  037cca4  fmuls 6, 9, 6
  037cca8  stfs 8, 160(1)
  037ccac  fmuls 5, 7, 5
  037ccb0  stfs 6, 164(1)
  037ccb4  stfs 5, 168(1)
  037ccb8  lfs 5, 140(3)
  037ccbc  fmuls 5, 5, 4
  037ccc0  stfs 5, 156(3)
  037ccc4  lfs 5, 4(4)
  037ccc8  addic 4, 4, 8
  037cccc  fmuls 5, 5, 4
  037ccd0  addic 3, 3, 8
  037ccd4  stfs 5, 4(5)
  037ccd8  addic 5, 5, 8
  037ccdc  bdnz 0x37ccb8
  037cce0  li 5, 4
  037cce4  ori 3, 1, 0
  037cce8  mtctr 5
  037ccec  lis 4, 115
  037ccf0  addic 5, 3, 156
  037ccf4  addic 4, 4, 22752
  037ccf8  ori 7, 5, 0
  037ccfc  lfs 4, 156(3)
  037cd00  lfs 5, 0(4)
  037cd04  fmuls 4, 4, 5
  037cd08  lfs 5, 4(4)
  037cd0c  addic 4, 4, 8
  037cd10  stfs 4, 156(3)
  037cd14  lfs 4, 4(5)
  037cd18  addic 3, 3, 8
  037cd1c  fmuls 4, 4, 5
  037cd20  stfs 4, 4(5)
  037cd24  addic 5, 5, 8
  037cd28  bdnz 0x37ccfc
  037cd2c  ori 3, 1, 0
  037cd30  fmr 4, 29
  037cd34  mtctr 6
  037cd38  lfs 5, 156(3)
  037cd3c  fadds 4, 4, 5
  037cd40  lfs 5, 4(7)
  037cd44  addic 3, 3, 16
  037cd48  lfs 6, 8(7)
  037cd4c  lfs 7, 12(7)
  037cd50  addic 7, 7, 16
  037cd54  fadds 4, 4, 5
  037cd58  fadds 4, 4, 6
  037cd5c  fadds 4, 4, 7
  037cd60  bdnz 0x37cd38
  037cd64  lfs 5, 8(26)
  037cd68  fadds 4, 4, 5
  037cd6c  fmadds 2, 4, 2, 3
  037cd70  bl 0x5026a0
  037cd74  nop
  037cd78  lis 3, 164
  037cd7c  lwz 3, -28512(3)
  037cd80  addc 4, 3, 27
  037cd84  clrldi 4, 4, 32
  037cd88  lbz 3, 32(4)
  037cd8c  cmpwi 3, 7
  037cd90  bt 2, 0x37cda4
  037cd94  cmpwi 3, 15
  037cd98  lhz 3, 404(29)
  037cd9c  cmpwi 1, 3, 0
  037cda0  bf 2, 0x37cdb0
  037cda4  li 3, 1
  037cda8  sth 3, 404(29)
  037cdac  b 0x37cdc4
  037cdb0  bf 6, 0x37cdc4
  037cdb4  lfs 2, 12(26)
  037cdb8  fcmpu 0, 1, 2
  037cdbc  cror 6, 1, 2
  037cdc0  bt 6, 0x37ce70
  037cdc4  ori 8, 4, 0
  037cdc8  addic 4, 1, 128
  037cdcc  addic 3, 1, 112
  037cdd0  li 5, 2
  037cdd4  li 6, 0
  037cdd8  lfs 1, 16(8)
  037cddc  li 7, 0
  037cde0  lfs 2, 120(1)
  037cde4  stfs 1, 128(1)
  037cde8  fadds 2, 2, 30
  037cdec  lfs 1, 20(8)
  037cdf0  stfs 1, 132(1)
  037cdf4  lfs 1, 24(8)
  037cdf8  stfs 1, 136(1)
  037cdfc  lfs 1, 28(8)
  037ce00  stfs 1, 140(1)
  037ce04  stfs 2, 120(1)
  037ce08  bl 0x57820
  037ce0c  nop
  037ce10  lis 4, 164
  037ce14  cmpwi 3, 0
  037ce18  lwz 4, -28512(4)
  037ce1c  bf 2, 0x37ce70
  037ce20  lfs 1, 116(1)
  037ce24  lfs 2, 132(1)
  037ce28  lfs 3, 112(1)
  037ce2c  fsubs 1, 1, 2
  037ce30  lfs 2, 128(1)
  037ce34  fsubs 2, 3, 2
  037ce38  lfs 3, 120(1)
  037ce3c  lfs 4, 136(1)
  037ce40  fsubs 3, 3, 4
  037ce44  fmuls 1, 1, 1
  037ce48  cmpwi 30, 0
  037ce4c  fmadds 1, 2, 2, 1
  037ce50  fmadds 1, 3, 3, 1
  037ce54  fsqrts 1, 1
  037ce58  fcmpu 1, 1, 31
  037ce5c  bt 2, 0x37ce64
  037ce60  bf 4, 0x37ce70
  037ce64  addc 30, 4, 27
  037ce68  fmr 31, 1
  037ce6c  clrldi 30, 30, 32
  037ce70  lhz 3, 0(28)
  037ce74  addic 28, 28, 2
  037ce78  extsh 3, 3
  037ce7c  cmpwi 3, 0
  037ce80  bf 0, 0x37cb7c
  037ce84  lhz 3, 404(29)
  037ce88  cmpwi 3, 0
  037ce8c  bf 2, 0x37cea4
  037ce90  lfs 1, 16(26)
  037ce94  fcmpu 0, 31, 1
  037ce98  cror 6, 0, 2
  037ce9c  bt 6, 0x37cea4
  037cea0  ori 30, 25, 0
  037cea4  ori 3, 30, 0
  037cea8  ld 0, 288(1)
  037ceac  mtlr 0
  037ceb0  lfd 29, 248(1)
  037ceb4  lfd 30, 256(1)
  037ceb8  lfd 31, 264(1)
  037cebc  ld 25, 192(1)
  037cec0  ld 26, 200(1)
  037cec4  ld 27, 208(1)
  037cec8  ld 28, 216(1)
  037cecc  ld 29, 224(1)
  037ced0  ld 30, 232(1)
  037ced4  ld 31, 240(1)
  037ced8  addi 1, 1, 272
  037cedc  blr

M44_0037cee0:   # 0x37cee0, 0xd4 bytes
  037cee0  lbz 4, 33(3)
  037cee4  cmpwi 4, 255
  037cee8  bf 2, 0x37cef4
  037ceec  li 3, 1
  037cef0  b 0x37cfb0
  037cef4  lis 5, 165
  037cef8  rlwinm 4, 4, 2, 22, 29
  037cefc  addic 6, 5, -28284
  037cf00  lis 7, 164
  037cf04  lwz 5, 120(3)
  037cf08  lwzx 4, 6, 4
  037cf0c  lwz 3, -28512(7)
  037cf10  cmpwi 4, 0
  037cf14  bf 2, 0x37cf20
  037cf18  li 3, 1
  037cf1c  b 0x37cfb0
  037cf20  lhz 6, 0(4)
  037cf24  rlwinm 6, 6, 8, 9, 23
  037cf28  addc 7, 3, 6
  037cf2c  clrldi 6, 7, 32
  037cf30  cmpwi 1, 7, 0
  037cf34  lhz 7, 166(6)
  037cf38  cmpwi 7, 44
  037cf3c  crorc 2, 6, 2
  037cf40  bt 2, 0x37cf98
  037cf44  lbz 7, 32(6)
  037cf48  cmpwi 1, 7, 253
  037cf4c  cmpwi 7, 254
  037cf50  cror 2, 2, 6
  037cf54  bt 2, 0x37cf98
  037cf58  lbz 7, 188(6)
  037cf5c  cmpwi 7, 0
  037cf60  bf 2, 0x37cf98
  037cf64  lwz 6, 120(6)
  037cf68  lwz 7, 324(6)
  037cf6c  cmpwi 7, 0
  037cf70  bf 2, 0x37cf98
  037cf74  lwz 7, 292(6)
  037cf78  cmpwi 7, -1
  037cf7c  bt 2, 0x37cf98
  037cf80  lwz 6, 316(6)
  037cf84  lwz 7, 316(5)
  037cf88  cmpw 6, 7
  037cf8c  bt 0, 0x37cf98
  037cf90  li 3, 0
  037cf94  b 0x37cfb0
  037cf98  lhz 6, 0(4)
  037cf9c  addic 4, 4, 2
  037cfa0  extsh 6, 6
  037cfa4  cmpwi 6, 0
  037cfa8  bf 0, 0x37cf20
  037cfac  li 3, 1
  037cfb0  blr

M44_0037cfe0:   # 0x37cfe0, 0xc10 bytes
  037cfe0  stdu 1, -352(1)
  037cfe4  mflr 0
  037cfe8  std 0, 368(1)
  037cfec  stfd 31, 344(1)
  037cff0  std 30, 328(1)
  037cff4  ori 30, 4, 0
  037cff8  std 31, 336(1)
  037cffc  lbz 4, 32(3)
  037d000  std 29, 320(1)
  037d004  ori 31, 3, 0
  037d008  lwz 29, 120(3)
  037d00c  std 28, 312(1)
  037d010  std 27, 304(1)
  037d014  cmpwi 4, 0
  037d018  bt 2, 0x37dbc8
  037d01c  lis 3, 132
  037d020  lwz 5, 36(31)
  037d024  lis 4, 56
  037d028  li 7, 0
  037d02c  addi 6, 4, -12364
  037d030  lis 4, 51
  037d034  lfs 1, 6788(3)
  037d038  lfs 2, 36(5)
  037d03c  ori 3, 31, 0
  037d040  li 5, 0
  037d044  fmuls 1, 2, 1
  037d048  stfs 1, 44(31)
  037d04c  lfs 31, 0(6)
  037d050  stw 7, 132(1)
  037d054  bl 0x10675c
  037d058  nop
  037d05c  ori 28, 3, 0
  037d060  ori 3, 31, 0
  037d064  ori 4, 28, 0
  037d068  addic 5, 29, 32
  037d06c  li 6, 0
  037d070  addic 7, 1, 128
  037d074  li 9, 0
  037d078  addic 8, 1, 132
  037d07c  li 10, 4
  037d080  bl 0x106840
  037d084  nop
  037d088  ori 27, 3, 0
  037d08c  lwz 3, 128(1)
  037d090  cmpwi 3, 1
  037d094  bt 2, 0x37d6d0
  037d098  lbz 3, 32(31)
  037d09c  cmpwi 3, 23
  037d0a0  bt 2, 0x37d6d0
  037d0a4  lis 3, 151
  037d0a8  addic 3, 3, -25376
  037d0ac  lbz 3, 8356(3)
  037d0b0  cmpwi 3, 0
  037d0b4  bf 2, 0x37d0c0
  037d0b8  ori 3, 31, 0
  037d0bc  bl 0x37c268
  037d0c0  lfs 1, 32(29)
  037d0c4  lfs 2, 132(1)
  037d0c8  li 3, 71
  037d0cc  li 4, 3
  037d0d0  fsubs 1, 1, 2
  037d0d4  subc 4, 4, 27
  037d0d8  fcmpu 0, 1, 31
  037d0dc  stfs 1, 32(29)
  037d0e0  lwz 5, 32(28)
  037d0e4  lhz 5, 166(5)
  037d0e8  subc 3, 3, 5
  037d0ec  cntlzw 3, 3
  037d0f0  sldi 3, 3, 58
  037d0f4  sradi 3, 3, 63
  037d0f8  and 3, 3, 4
  037d0fc  addc 27, 27, 3
  037d100  bt 1, 0x37d108
  037d104  li 27, 1
  037d108  lis 3, 56
  037d10c  addi 3, 3, -12364
  037d110  lfs 1, 4(3)
  037d114  bl 0x502758
  037d118  nop
  037d11c  lis 4, 16128
  037d120  lis 5, 132
  037d124  lis 6, 114
  037d128  cmpwi 27, 2
  037d12c  stw 4, 152(29)
  037d130  li 4, 0
  037d134  lfs 1, 6792(5)
  037d138  lfs 2, -3048(6)
  037d13c  stw 3, 144(29)
  037d140  fmuls 1, 1, 2
  037d144  li 3, 9
  037d148  stb 4, 173(29)
  037d14c  stw 3, 148(29)
  037d150  stfs 1, 128(29)
  037d154  bt 1, 0x37d16c
  037d158  cmpwi 27, -1
  037d15c  cmpwi 1, 27, 0
  037d160  bf 1, 0x37d6c0
  037d164  bf 5, 0x37d6c0
  037d168  b 0x37d414
  037d16c  cmpwi 27, 10
  037d170  cmpwi 1, 27, 8
  037d174  bt 1, 0x37d6c0
  037d178  bf 5, 0x37d188
  037d17c  li 3, 250
  037d180  stb 3, 103(29)
  037d184  b 0x37d6c0
  037d188  lis 3, 132
  037d18c  lis 4, 114
  037d190  stfs 1, 128(29)
  037d194  lis 5, 132
  037d198  lis 6, 16672
  037d19c  lfs 1, 6804(3)
  037d1a0  lfs 2, -3052(4)
  037d1a4  lis 3, 268
  037d1a8  fmuls 1, 1, 2
  037d1ac  lis 4, 16544
  037d1b0  stfs 1, 136(29)
  037d1b4  lfs 1, 6800(5)
  037d1b8  fmuls 1, 1, 2
  037d1bc  stfs 1, 140(29)
  037d1c0  lfs 1, 20908(3)
  037d1c4  stw 4, 192(29)
  037d1c8  fmuls 1, 1, 2
  037d1cc  stw 6, 196(29)
  037d1d0  stfs 1, 132(29)
  037d1d4  lwz 3, 32(28)
  037d1d8  lfs 1, 16(31)
  037d1dc  lfs 2, 20(31)
  037d1e0  lfs 3, 16(3)
  037d1e4  lfs 4, 20(3)
  037d1e8  fsubs 1, 1, 3
  037d1ec  fsubs 2, 2, 4
  037d1f0  lis 3, 115
  037d1f4  addic 3, 3, 22784
  037d1f8  fabs 3, 1
  037d1fc  fabs 4, 2
  037d200  stfs 1, 168(1)
  037d204  stfs 2, 172(1)
  037d208  fsubs 1, 3, 4
  037d20c  stfs 1, 176(1)
  037d210  lwz 4, 168(1)
  037d214  lfs 1, 168(1)
  037d218  lwz 5, 172(1)
  037d21c  lfs 2, 172(1)
  037d220  fabs 1, 1
  037d224  lwz 6, 176(1)
  037d228  rlwinm 5, 5, 3, 29, 29
  037d22c  lfs 5, 176(1)
  037d230  fabs 2, 2
  037d234  rlwimi 5, 6, 2, 30, 30
  037d238  fsub 6, 5, 31
  037d23c  fsub 5, 5, 31
  037d240  rlwimi 5, 4, 4, 28, 28
  037d244  ori 4, 3, 0
  037d248  rlwimi 4, 5, 2, 26, 28
  037d24c  slwi 5, 5, 2
  037d250  clrldi 4, 4, 32
  037d254  fsel 4, 6, 1, 4
  037d258  lfsx 1, 3, 5
  037d25c  fsel 3, 5, 2, 3
  037d260  lfs 2, 4(4)
  037d264  fcmpu 0, 4, 31
  037d268  bt 1, 0x37d274
  037d26c  fmr 1, 31
  037d270  b 0x37d398
  037d274  fsubs 5, 3, 4
  037d278  fadds 3, 3, 4
  037d27c  addic 3, 1, 16
  037d280  li 6, 2
  037d284  addic 4, 3, 228
  037d288  addic 5, 3, 244
  037d28c  mtctr 6
  037d290  fdivs 3, 5, 3
  037d294  fmuls 4, 3, 3
  037d298  stfs 3, 256(1)
  037d29c  stfs 3, 248(1)
  037d2a0  stfs 3, 252(1)
  037d2a4  stfs 3, 244(1)
  037d2a8  lfs 6, 256(1)
  037d2ac  lfs 7, 248(1)
  037d2b0  lfs 8, 252(1)
  037d2b4  fmuls 5, 4, 4
  037d2b8  fmuls 7, 7, 4
  037d2bc  fmuls 6, 6, 5
  037d2c0  fmuls 3, 5, 5
  037d2c4  fmuls 5, 8, 5
  037d2c8  stfs 7, 248(1)
  037d2cc  fmuls 4, 6, 4
  037d2d0  stfs 5, 252(1)
  037d2d4  stfs 4, 256(1)
  037d2d8  lfs 4, 228(3)
  037d2dc  fmuls 4, 4, 3
  037d2e0  stfs 4, 244(3)
  037d2e4  lfs 4, 4(4)
  037d2e8  addic 3, 3, 8
  037d2ec  addic 4, 4, 8
  037d2f0  fmuls 4, 4, 3
  037d2f4  stfs 4, 4(5)
  037d2f8  addic 5, 5, 8
  037d2fc  bdnz 0x37d2d8
  037d300  li 5, 4
  037d304  ori 3, 1, 0
  037d308  mtctr 5
  037d30c  lis 4, 115
  037d310  addic 5, 3, 244
  037d314  addic 4, 4, 22752
  037d318  ori 7, 5, 0
  037d31c  lfs 3, 244(3)
  037d320  lfs 4, 0(4)
  037d324  fmuls 3, 3, 4
  037d328  lfs 4, 4(4)
  037d32c  addic 4, 4, 8
  037d330  stfs 3, 244(3)
  037d334  lfs 3, 4(5)
  037d338  addic 3, 3, 8
  037d33c  fmuls 3, 3, 4
  037d340  stfs 3, 4(5)
  037d344  addic 5, 5, 8
  037d348  bdnz 0x37d31c
  037d34c  fmr 3, 31
  037d350  ori 3, 1, 0
  037d354  mtctr 6
  037d358  lfs 4, 244(3)
  037d35c  fadds 3, 3, 4
  037d360  addic 3, 3, 16
  037d364  lfs 4, 4(7)
  037d368  lfs 5, 8(7)
  037d36c  lfs 6, 12(7)
  037d370  addic 7, 7, 16
  037d374  fadds 3, 3, 4
  037d378  fadds 3, 3, 5
  037d37c  fadds 3, 3, 6
  037d380  bdnz 0x37d358
  037d384  lis 3, 56
  037d388  addi 3, 3, -12364
  037d38c  lfs 4, 8(3)
  037d390  fadds 3, 3, 4
  037d394  fmadds 1, 3, 1, 2
  037d398  stfs 1, 136(1)
  037d39c  lfs 1, 16(28)
  037d3a0  addic 5, 1, 136
  037d3a4  lfs 2, 24(28)
  037d3a8  addic 6, 29, 136
  037d3ac  stfs 1, 48(1)
  037d3b0  addic 7, 29, 140
  037d3b4  stfs 2, 56(1)
  037d3b8  lfs 1, 20(28)
  037d3bc  lfs 2, 28(28)
  037d3c0  stfs 1, 52(1)
  037d3c4  stfs 2, 60(1)
  037d3c8  ld 3, 48(1)
  037d3cc  ld 4, 56(1)
  037d3d0  bl 0x107de8
  037d3d4  nop
  037d3d8  ori 3, 31, 0
  037d3dc  addic 4, 29, 112
  037d3e0  lfs 1, 136(1)
  037d3e4  li 6, 7
  037d3e8  li 7, 1
  037d3ec  li 8, 0
  037d3f0  bl 0x10ad80
  037d3f4  nop
  037d3f8  li 3, 21
  037d3fc  li 4, 2
  037d400  li 5, 120
  037d404  stb 3, 32(31)
  037d408  stb 4, 188(31)
  037d40c  stb 5, 103(29)
  037d410  b 0x37d6c0
  037d414  lis 3, 132
  037d418  lis 4, 114
  037d41c  lis 5, 132
  037d420  lis 6, 114
  037d424  lis 7, 132
  037d428  lfs 1, 6796(3)
  037d42c  lfs 2, -3048(4)
  037d430  li 3, 0
  037d434  lhz 4, 52(31)
  037d438  fmuls 1, 1, 2
  037d43c  rlwimi 4, 3, 0, 19, 19
  037d440  lis 3, 132
  037d444  sth 4, 52(31)
  037d448  lis 4, 16640
  037d44c  stfs 1, 128(29)
  037d450  lfs 1, 6812(5)
  037d454  lfs 2, -3052(6)
  037d458  lis 5, 16768
  037d45c  fmuls 1, 1, 2
  037d460  stfs 1, 136(29)
  037d464  lfs 1, 6808(7)
  037d468  fmuls 1, 1, 2
  037d46c  stfs 1, 140(29)
  037d470  lfs 1, 6816(3)
  037d474  stw 4, 192(29)
  037d478  fmuls 1, 1, 2
  037d47c  stw 5, 196(29)
  037d480  stfs 1, 132(29)
  037d484  lwz 3, 32(28)
  037d488  lfs 1, 16(31)
  037d48c  lfs 2, 20(31)
  037d490  lfs 3, 16(3)
  037d494  lfs 4, 20(3)
  037d498  fsubs 1, 1, 3
  037d49c  fsubs 2, 2, 4
  037d4a0  lis 3, 115
  037d4a4  addic 3, 3, 22784
  037d4a8  fabs 3, 1
  037d4ac  fabs 4, 2
  037d4b0  stfs 1, 156(1)
  037d4b4  stfs 2, 160(1)
  037d4b8  fsubs 1, 3, 4
  037d4bc  stfs 1, 164(1)
  037d4c0  lwz 4, 156(1)
  037d4c4  lfs 1, 156(1)
  037d4c8  lwz 5, 160(1)
  037d4cc  lfs 2, 160(1)
  037d4d0  fabs 1, 1
  037d4d4  lwz 6, 164(1)
  037d4d8  rlwinm 5, 5, 3, 29, 29
  037d4dc  lfs 5, 164(1)
  037d4e0  fabs 2, 2
  037d4e4  rlwimi 5, 6, 2, 30, 30
  037d4e8  fsub 6, 5, 31
  037d4ec  fsub 5, 5, 31
  037d4f0  rlwimi 5, 4, 4, 28, 28
  037d4f4  ori 4, 3, 0
  037d4f8  rlwimi 4, 5, 2, 26, 28
  037d4fc  slwi 5, 5, 2
  037d500  clrldi 4, 4, 32
  037d504  fsel 4, 6, 1, 4
  037d508  lfsx 1, 3, 5
  037d50c  fsel 3, 5, 2, 3
  037d510  lfs 2, 4(4)
  037d514  fcmpu 0, 4, 31
  037d518  bt 1, 0x37d524
  037d51c  fmr 1, 31
  037d520  b 0x37d648
  037d524  fsubs 5, 3, 4
  037d528  fadds 3, 3, 4
  037d52c  addic 3, 1, 16
  037d530  li 6, 2
  037d534  addic 4, 3, 196
  037d538  addic 5, 3, 212
  037d53c  mtctr 6
  037d540  fdivs 3, 5, 3
  037d544  fmuls 4, 3, 3
  037d548  stfs 3, 224(1)
  037d54c  stfs 3, 216(1)
  037d550  stfs 3, 220(1)
  037d554  stfs 3, 212(1)
  037d558  lfs 6, 224(1)
  037d55c  lfs 7, 216(1)
  037d560  lfs 8, 220(1)
  037d564  fmuls 5, 4, 4
  037d568  fmuls 7, 7, 4
  037d56c  fmuls 6, 6, 5
  037d570  fmuls 3, 5, 5
  037d574  fmuls 5, 8, 5
  037d578  stfs 7, 216(1)
  037d57c  fmuls 4, 6, 4
  037d580  stfs 5, 220(1)
  037d584  stfs 4, 224(1)
  037d588  lfs 4, 196(3)
  037d58c  fmuls 4, 4, 3
  037d590  stfs 4, 212(3)
  037d594  lfs 4, 4(4)
  037d598  addic 3, 3, 8
  037d59c  addic 4, 4, 8
  037d5a0  fmuls 4, 4, 3
  037d5a4  stfs 4, 4(5)
  037d5a8  addic 5, 5, 8
  037d5ac  bdnz 0x37d588
  037d5b0  li 5, 4
  037d5b4  ori 3, 1, 0
  037d5b8  mtctr 5
  037d5bc  lis 4, 115
  037d5c0  addic 5, 3, 212
  037d5c4  addic 4, 4, 22752
  037d5c8  ori 7, 5, 0
  037d5cc  lfs 3, 212(3)
  037d5d0  lfs 4, 0(4)
  037d5d4  fmuls 3, 3, 4
  037d5d8  lfs 4, 4(4)
  037d5dc  addic 4, 4, 8
  037d5e0  stfs 3, 212(3)
  037d5e4  lfs 3, 4(5)
  037d5e8  addic 3, 3, 8
  037d5ec  fmuls 3, 3, 4
  037d5f0  stfs 3, 4(5)
  037d5f4  addic 5, 5, 8
  037d5f8  bdnz 0x37d5cc
  037d5fc  fmr 3, 31
  037d600  ori 3, 1, 0
  037d604  mtctr 6
  037d608  lfs 4, 212(3)
  037d60c  fadds 3, 3, 4
  037d610  addic 3, 3, 16
  037d614  lfs 4, 4(7)
  037d618  lfs 5, 8(7)
  037d61c  lfs 6, 12(7)
  037d620  addic 7, 7, 16
  037d624  fadds 3, 3, 4
  037d628  fadds 3, 3, 5
  037d62c  fadds 3, 3, 6
  037d630  bdnz 0x37d608
  037d634  lis 3, 56
  037d638  addi 3, 3, -12364
  037d63c  lfs 4, 8(3)
  037d640  fadds 3, 3, 4
  037d644  fmadds 1, 3, 1, 2
  037d648  stfs 1, 140(1)
  037d64c  lfs 1, 16(28)
  037d650  addic 5, 1, 140
  037d654  lfs 2, 24(28)
  037d658  addic 6, 29, 136
  037d65c  stfs 1, 48(1)
  037d660  addic 7, 29, 140
  037d664  stfs 2, 56(1)
  037d668  lfs 1, 20(28)
  037d66c  lfs 2, 28(28)
  037d670  stfs 1, 52(1)
  037d674  stfs 2, 60(1)
  037d678  ld 3, 48(1)
  037d67c  ld 4, 56(1)
  037d680  bl 0x107de8
  037d684  nop
  037d688  ori 3, 31, 0
  037d68c  addic 4, 29, 112
  037d690  lfs 1, 140(1)
  037d694  li 6, 8
  037d698  li 7, 1
  037d69c  li 8, 0
  037d6a0  bl 0x10ad80
  037d6a4  nop
  037d6a8  li 3, 23
  037d6ac  li 4, 2
  037d6b0  li 5, 240
  037d6b4  stb 3, 32(31)
  037d6b8  stb 4, 188(31)
  037d6bc  stb 5, 103(29)
  037d6c0  addic 4, 29, 96
  037d6c4  ori 3, 31, 0
  037d6c8  bl 0x10c808
  037d6cc  nop
  037d6d0  li 5, 255
  037d6d4  addic 4, 29, 96
  037d6d8  ori 3, 31, 0
  037d6dc  stb 5, 164(31)
  037d6e0  bl 0x10c9a0
  037d6e4  nop
  037d6e8  cmpwi 30, 0
  037d6ec  bf 2, 0x37dbc8
  037d6f0  lwz 3, 56(29)
  037d6f4  cmpwi 3, 0
  037d6f8  bt 2, 0x37d748
  037d6fc  lis 3, 56
  037d700  addi 3, 3, -12364
  037d704  lfs 1, 12(3)
  037d708  lfs 2, 16(3)
  037d70c  bl 0xfcbe8
  037d710  nop
  037d714  lis 3, 114
  037d718  lfs 2, -3056(3)
  037d71c  fmuls 1, 1, 2
  037d720  bl 0x502758
  037d724  nop
  037d728  extsw 3, 3
  037d72c  std 3, 280(1)
  037d730  li 3, 0
  037d734  lfd 1, 280(1)
  037d738  stw 3, 56(29)
  037d73c  fcfid 1, 1
  037d740  frsp 1, 1
  037d744  stfs 1, 304(29)
  037d748  addic 3, 29, 304
  037d74c  bl 0x500108
  037d750  nop
  037d754  lis 30, 151
  037d758  lfs 2, 20(31)
  037d75c  lfs 1, 16(31)
  037d760  addic 30, 30, -25376
  037d764  lfs 3, 24(31)
  037d768  lis 3, 56
  037d76c  lfs 4, 212(30)
  037d770  lfs 5, 208(30)
  037d774  fsubs 4, 2, 4
  037d778  lfs 6, 216(30)
  037d77c  fsubs 5, 1, 5
  037d780  fsubs 6, 3, 6
  037d784  addi 3, 3, -12364
  037d788  fmuls 4, 4, 4
  037d78c  fmadds 4, 5, 5, 4
  037d790  lfs 5, 20(3)
  037d794  fmadds 4, 6, 6, 4
  037d798  fsqrts 4, 4
  037d79c  fcmpu 0, 4, 5
  037d7a0  cror 6, 1, 2
  037d7a4  bt 6, 0x37d81c
  037d7a8  lis 3, 56
  037d7ac  lfs 4, 28(31)
  037d7b0  addi 3, 3, -12364
  037d7b4  stfs 1, 112(1)
  037d7b8  stfs 2, 116(1)
  037d7bc  stfs 4, 124(1)
  037d7c0  lfs 1, 24(3)
  037d7c4  lwz 4, 300(29)
  037d7c8  li 3, 0
  037d7cc  fadds 1, 3, 1
  037d7d0  cmpwi 4, -1
  037d7d4  stfs 1, 120(1)
  037d7d8  bt 2, 0x37d7f0
  037d7dc  lis 3, 164
  037d7e0  slwi 4, 4, 8
  037d7e4  lwz 3, -28512(3)
  037d7e8  addc 3, 3, 4
  037d7ec  clrldi 3, 3, 32
  037d7f0  ori 6, 3, 0
  037d7f4  addic 3, 1, 112
  037d7f8  addic 4, 30, 208
  037d7fc  li 5, 2
  037d800  li 7, 0
  037d804  bl 0x57820
  037d808  nop
  037d80c  cntlzw 3, 3
  037d810  rlwinm 3, 3, 27, 31, 31
  037d814  stb 3, 346(29)
  037d818  b 0x37d824
  037d81c  li 3, 0
  037d820  stb 3, 346(29)
  037d824  lis 3, 165
  037d828  lwz 6, 288(29)
  037d82c  lis 4, 56
  037d830  addic 5, 3, 7136
  037d834  slwi 6, 6, 2
  037d838  addi 3, 4, -12364
  037d83c  extsw 7, 6
  037d840  addic 4, 29, 208
  037d844  li 6, 0
  037d848  lfs 1, 28(3)
  037d84c  lwzx 5, 5, 7
  037d850  ori 3, 31, 0
  037d854  li 7, 0
  037d858  addic 8, 5, 16
  037d85c  lwz 9, 0(5)
  037d860  extsw 9, 9
  037d864  bl 0x111ba0
  037d868  nop
  037d86c  cmpwi 3, 2
  037d870  bt 2, 0x37dba0
  037d874  lfs 1, 208(29)
  037d878  lfs 2, 16(31)
  037d87c  lfs 3, 212(29)
  037d880  lfs 4, 20(31)
  037d884  fsubs 1, 1, 2
  037d888  fsubs 2, 3, 4
  037d88c  lis 3, 115
  037d890  addic 3, 3, 22784
  037d894  fabs 4, 1
  037d898  fabs 5, 2
  037d89c  stfs 1, 144(1)
  037d8a0  stfs 2, 148(1)
  037d8a4  lfs 1, 72(31)
  037d8a8  fsubs 2, 4, 5
  037d8ac  stfs 2, 152(1)
  037d8b0  lwz 4, 144(1)
  037d8b4  lfs 2, 144(1)
  037d8b8  lwz 5, 148(1)
  037d8bc  lfs 3, 148(1)
  037d8c0  fabs 2, 2
  037d8c4  lwz 6, 152(1)
  037d8c8  rlwinm 5, 5, 3, 29, 29
  037d8cc  lfs 6, 152(1)
  037d8d0  fabs 3, 3
  037d8d4  rlwimi 5, 6, 2, 30, 30
  037d8d8  fsub 7, 6, 31
  037d8dc  fsub 6, 6, 31
  037d8e0  rlwimi 5, 4, 4, 28, 28
  037d8e4  ori 4, 3, 0
  037d8e8  rlwimi 4, 5, 2, 26, 28
  037d8ec  slwi 5, 5, 2
  037d8f0  clrldi 4, 4, 32
  037d8f4  fsel 5, 7, 2, 5
  037d8f8  lfsx 2, 3, 5
  037d8fc  fsel 4, 6, 3, 4
  037d900  lfs 3, 4(4)
  037d904  fcmpu 0, 5, 31
  037d908  bt 1, 0x37d910
  037d90c  b 0x37da30
  037d910  fsubs 6, 4, 5
  037d914  fadds 4, 4, 5
  037d918  addic 3, 1, 16
  037d91c  li 7, 2
  037d920  addic 5, 3, 180
  037d924  addic 4, 3, 164
  037d928  mtctr 7
  037d92c  fdivs 4, 6, 4
  037d930  fmuls 5, 4, 4
  037d934  stfs 4, 192(1)
  037d938  stfs 4, 184(1)
  037d93c  stfs 4, 188(1)
  037d940  stfs 4, 180(1)
  037d944  lfs 7, 192(1)
  037d948  lfs 8, 184(1)
  037d94c  lfs 9, 188(1)
  037d950  fmuls 6, 5, 5
  037d954  fmuls 8, 8, 5
  037d958  fmuls 7, 7, 6
  037d95c  fmuls 4, 6, 6
  037d960  fmuls 6, 9, 6
  037d964  stfs 8, 184(1)
  037d968  fmuls 5, 7, 5
  037d96c  stfs 6, 188(1)
  037d970  stfs 5, 192(1)
  037d974  lfs 5, 164(3)
  037d978  fmuls 5, 5, 4
  037d97c  stfs 5, 180(3)
  037d980  lfs 5, 4(4)
  037d984  addic 4, 4, 8
  037d988  fmuls 5, 5, 4
  037d98c  addic 3, 3, 8
  037d990  stfs 5, 4(5)
  037d994  addic 5, 5, 8
  037d998  bdnz 0x37d974
  037d99c  li 5, 4
  037d9a0  ori 3, 1, 0
  037d9a4  mtctr 5
  037d9a8  lis 4, 115
  037d9ac  addic 5, 3, 180
  037d9b0  addic 4, 4, 22752
  037d9b4  ori 6, 5, 0
  037d9b8  lfs 4, 180(3)
  037d9bc  lfs 5, 0(4)
  037d9c0  fmuls 4, 4, 5
  037d9c4  lfs 5, 4(4)
  037d9c8  addic 4, 4, 8
  037d9cc  stfs 4, 180(3)
  037d9d0  lfs 4, 4(5)
  037d9d4  addic 3, 3, 8
  037d9d8  fmuls 4, 4, 5
  037d9dc  stfs 4, 4(5)
  037d9e0  addic 5, 5, 8
  037d9e4  bdnz 0x37d9b8
  037d9e8  ori 3, 1, 0
  037d9ec  mtctr 7
  037d9f0  lfs 4, 180(3)
  037d9f4  lfs 5, 4(6)
  037d9f8  fadds 4, 31, 4
  037d9fc  lfs 6, 8(6)
  037da00  addic 3, 3, 16
  037da04  lfs 31, 12(6)
  037da08  addic 6, 6, 16
  037da0c  fadds 4, 4, 5
  037da10  fadds 4, 4, 6
  037da14  fadds 31, 4, 31
  037da18  bdnz 0x37d9f0
  037da1c  lis 3, 56
  037da20  addi 3, 3, -12364
  037da24  lfs 4, 8(3)
  037da28  fadds 31, 31, 4
  037da2c  fmadds 31, 31, 2, 3
  037da30  fmr 2, 31
  037da34  bl 0x5026a0
  037da38  nop
  037da3c  lis 3, 56
  037da40  addi 4, 3, -12364
  037da44  lbz 3, 32(31)
  037da48  lfs 2, 32(4)
  037da4c  fcmpu 0, 1, 2
  037da50  cror 6, 1, 2
  037da54  bt 6, 0x37da88
  037da58  lhz 4, 776(30)
  037da5c  cmpwi 4, 0
  037da60  bt 2, 0x37daa0
  037da64  lfs 1, 24(31)
  037da68  lis 4, 56
  037da6c  lfs 2, 216(29)
  037da70  addi 4, 4, -12364
  037da74  fsubs 1, 1, 2
  037da78  lfs 2, 36(4)
  037da7c  fabs 1, 1
  037da80  fcmpu 0, 1, 2
  037da84  bt 0, 0x37daa0
  037da88  cmpwi 3, 16
  037da8c  bt 2, 0x37daa0
  037da90  ori 4, 3, 0
  037da94  li 3, 0
  037da98  cmpwi 4, 17
  037da9c  bf 2, 0x37daa4
  037daa0  lbz 3, 346(29)
  037daa4  lwz 4, 276(29)
  037daa8  cmpwi 6, 4, 1
  037daac  cmpwi 7, 4, 2
  037dab0  bf 26, 0x37dac4
  037dab4  lbz 4, 347(29)
  037dab8  addic 4, 4, 1
  037dabc  stb 4, 350(29)
  037dac0  b 0x37daf0
  037dac4  lbz 4, 8356(30)
  037dac8  cmpwi 4, 3
  037dacc  bt 2, 0x37dadc
  037dad0  li 4, 0
  037dad4  stb 4, 350(29)
  037dad8  b 0x37daf0
  037dadc  lbz 4, 350(29)
  037dae0  cmpwi 4, 1
  037dae4  bf 1, 0x37daf0
  037dae8  li 5, 1
  037daec  stb 5, 347(29)
  037daf0  li 5, 1
  037daf4  cmpwi 3, 0
  037daf8  stb 5, 415(29)
  037dafc  lbz 3, 8356(30)
  037db00  cmpwi 1, 3, 3
  037db04  bf 2, 0x37db34
  037db08  lbz 3, 346(29)
  037db0c  cmpwi 3, 0
  037db10  bf 2, 0x37db1c
  037db14  li 3, 1
  037db18  stb 3, 347(29)
  037db1c  li 3, 0
  037db20  li 4, 2
  037db24  stb 3, 415(29)
  037db28  sth 3, 344(29)
  037db2c  stw 4, 276(29)
  037db30  b 0x37db84
  037db34  lhz 3, 342(29)
  037db38  cmpwi 3, 0
  037db3c  bt 2, 0x37db4c
  037db40  lbz 3, 347(29)
  037db44  cmpwi 3, 0
  037db48  bt 2, 0x37db50
  037db4c  bt 6, 0x37db60
  037db50  clrlwi 3, 4, 24
  037db54  cmpwi 3, 0
  037db58  bt 2, 0x37db74
  037db5c  bt 26, 0x37db74
  037db60  li 3, 2
  037db64  li 4, 1
  037db68  stw 3, 276(29)
  037db6c  sth 4, 344(29)
  037db70  b 0x37db84
  037db74  bt 6, 0x37db84
  037db78  bt 30, 0x37db84
  037db7c  li 3, 0
  037db80  stb 3, 347(29)
  037db84  lis 3, 161
  037db88  lwz 3, 1800(3)
  037db8c  cmpwi 3, 2
  037db90  bf 2, 0x37dbb4
  037db94  li 3, 2
  037db98  stw 3, 276(29)
  037db9c  b 0x37dbb4
  037dba0  li 3, 0
  037dba4  li 4, 1
  037dba8  stb 3, 415(29)
  037dbac  stb 4, 347(29)
  037dbb0  sth 3, 344(29)
  037dbb4  lwz 3, 272(29)
  037dbb8  cmpwi 3, 0
  037dbbc  bf 2, 0x37dbc8
  037dbc0  lwz 3, 8320(30)
  037dbc4  stw 3, 272(29)
  037dbc8  ld 0, 368(1)
  037dbcc  mtlr 0
  037dbd0  lfd 31, 344(1)
  037dbd4  ld 27, 304(1)
  037dbd8  ld 28, 312(1)
  037dbdc  ld 29, 320(1)
  037dbe0  ld 30, 328(1)
  037dbe4  ld 31, 336(1)
  037dbe8  addi 1, 1, 352
  037dbec  blr

UpdateMoby_44:   # 0x37dc48, 0x286c bytes
  037dc48  stdu 1, -464(1)
  037dc4c  mflr 0
  037dc50  std 0, 480(1)
  037dc54  stfd 30, 448(1)
  037dc58  stfd 31, 456(1)
  037dc5c  std 31, 440(1)
  037dc60  lis 4, 268
  037dc64  ori 31, 3, 0
  037dc68  lwz 3, 20912(4)
  037dc6c  std 30, 432(1)
  037dc70  std 29, 424(1)
  037dc74  std 28, 416(1)
  037dc78  std 27, 408(1)
  037dc7c  std 26, 400(1)
  037dc80  std 25, 392(1)
  037dc84  std 24, 384(1)
  037dc88  std 23, 376(1)
  037dc8c  cmpwi 3, 0
  037dc90  bf 2, 0x380478
  037dc94  lis 3, 161
  037dc98  lwz 3, 1800(3)
  037dc9c  lwz 30, 120(31)
  037dca0  cmpwi 3, 2
  037dca4  bf 2, 0x37dcb8
  037dca8  lhz 3, 52(31)
  037dcac  ori 3, 3, 65
  037dcb0  sth 3, 52(31)
  037dcb4  b 0x380478
  037dcb8  lwz 3, 720(30)
  037dcbc  li 29, 0
  037dcc0  cmpwi 3, -1
  037dcc4  ori 27, 29, 0
  037dcc8  bt 2, 0x37dd1c
  037dccc  lis 5, 149
  037dcd0  extsw 4, 3
  037dcd4  addic 28, 5, 5056
  037dcd8  addic 28, 28, 320
  037dcdc  ori 3, 28, 0
  037dce0  bl 0x110b70
  037dce4  nop
  037dce8  cntlzw 29, 3
  037dcec  lwz 3, 724(30)
  037dcf0  rlwinm 29, 29, 27, 31, 31
  037dcf4  cmpwi 3, -1
  037dcf8  bt 2, 0x37dd6c
  037dcfc  extsw 4, 3
  037dd00  ori 3, 28, 0
  037dd04  bl 0x110b70
  037dd08  nop
  037dd0c  cntlzw 3, 3
  037dd10  rlwinm 3, 3, 27, 31, 31
  037dd14  and 29, 29, 3
  037dd18  b 0x37dd6c
  037dd1c  lwz 4, 728(30)
  037dd20  cmpwi 4, -1
  037dd24  bt 2, 0x37dd6c
  037dd28  lis 5, 149
  037dd2c  extsw 4, 3
  037dd30  addic 28, 5, 5056
  037dd34  addic 28, 28, 320
  037dd38  ori 3, 28, 0
  037dd3c  bl 0x110b70
  037dd40  nop
  037dd44  ori 29, 3, 0
  037dd48  lwz 3, 732(30)
  037dd4c  cmpwi 3, -1
  037dd50  bt 2, 0x37dd6c
  037dd54  extsw 4, 3
  037dd58  ori 3, 28, 0
  037dd5c  bl 0x110b70
  037dd60  nop
  037dd64  or 29, 29, 3
  037dd68  extsw 29, 29
  037dd6c  ori 28, 29, 0
  037dd70  ori 3, 31, 0
  037dd74  ori 4, 28, 0
  037dd78  bl 0x37cfe0
  037dd7c  lhz 29, 52(31)
  037dd80  cmpwi 28, 0
  037dd84  lwz 3, 36(31)
  037dd88  bt 2, 0x37ddb4
  037dd8c  lbz 4, 32(31)
  037dd90  cmpwi 1, 4, 23
  037dd94  cmpwi 4, 21
  037dd98  cror 2, 2, 6
  037dd9c  bt 2, 0x37ddb4
  037dda0  ori 3, 29, 65
  037dda4  stw 27, 148(31)
  037dda8  rlwimi 3, 27, 0, 19, 19
  037ddac  sth 3, 52(31)
  037ddb0  b 0x380478
  037ddb4  ori 4, 3, 0
  037ddb8  li 3, -66
  037ddbc  lis 5, 56
  037ddc0  and 3, 29, 3
  037ddc4  addi 5, 5, -9232
  037ddc8  ori 6, 3, 4096
  037ddcc  addic 3, 30, 416
  037ddd0  sth 6, 52(31)
  037ddd4  lwz 4, 16(4)
  037ddd8  stw 4, 148(31)
  037dddc  lwz 29, 272(30)
  037dde0  lfs 1, 0(5)
  037dde4  bl 0x119ac0
  037dde8  nop
  037ddec  lbz 3, 49(31)
  037ddf0  cmpwi 3, 0
  037ddf4  bt 2, 0x37de3c
  037ddf8  lis 4, 149
  037ddfc  addic 3, 31, 16
  037de00  addic 4, 4, 5056
  037de04  addic 4, 4, 320
  037de08  bl 0x5e8548
  037de0c  nop
  037de10  lis 3, 56
  037de14  addi 3, 3, -9232
  037de18  lfs 2, 4(3)
  037de1c  fcmpu 0, 1, 2
  037de20  cror 6, 1, 2
  037de24  bt 6, 0x37de3c
  037de28  ori 3, 31, 0
  037de2c  bl 0x106360
  037de30  nop
  037de34  li 3, 22
  037de38  stb 3, 127(31)
  037de3c  lis 28, 151
  037de40  addic 28, 28, -25376
  037de44  lwz 3, 8324(28)
  037de48  cmpwi 3, 101
  037de4c  bf 2, 0x37de54
  037de50  sth 27, 342(30)
  037de54  addic 3, 30, 340
  037de58  bl 0x4fffb4
  037de5c  nop
  037de60  addic 3, 30, 342
  037de64  bl 0x4fffb4
  037de68  nop
  037de6c  addic 3, 30, 412
  037de70  bl 0x4fffb4
  037de74  nop
  037de78  lhz 3, 342(30)
  037de7c  cmpwi 3, 0
  037de80  bt 2, 0x37dec0
  037de84  lwz 3, 296(30)
  037de88  cmpwi 3, -1
  037de8c  bt 2, 0x37dec0
  037de90  lis 4, 164
  037de94  slwi 3, 3, 8
  037de98  lwz 4, -28512(4)
  037de9c  addc 3, 4, 3
  037dea0  clrldi 3, 3, 32
  037dea4  lwz 4, 120(3)
  037dea8  lwz 4, 8(4)
  037deac  cmpwi 4, 0
  037deb0  bt 2, 0x37dec0
  037deb4  li 4, 180
  037deb8  bl 0x364690
  037debc  nop
  037dec0  lbz 3, 188(31)
  037dec4  cmpwi 3, 0
  037dec8  bf 2, 0x37ded0
  037decc  stb 27, 351(30)
  037ded0  lbz 3, 32(31)
  037ded4  cmpwi 3, 12
  037ded8  cmpwi 1, 3, 4
  037dedc  cmpwi 6, 3, 0
  037dee0  cmpwi 7, 3, -1
  037dee4  bt 1, 0x37df3c
  037dee8  bt 5, 0x37df0c
  037deec  bt 25, 0x37def8
  037def0  bf 29, 0x380248
  037def4  b 0x37df9c
  037def8  cmpwi 3, 1
  037defc  bf 1, 0x37e084
  037df00  cmpwi 3, 3
  037df04  bf 1, 0x37e0d0
  037df08  b 0x37e978
  037df0c  cmpwi 3, 9
  037df10  bt 1, 0x37df28
  037df14  cmpwi 3, 5
  037df18  bf 1, 0x37e600
  037df1c  cmpwi 3, 8
  037df20  bf 1, 0x37e714
  037df24  b 0x37eed8
  037df28  cmpwi 3, 10
  037df2c  bf 1, 0x37e4f0
  037df30  cmpwi 3, 11
  037df34  bf 1, 0x37f120
  037df38  b 0x37fc90
  037df3c  cmpwi 3, 18
  037df40  bt 1, 0x37df74
  037df44  cmpwi 3, 15
  037df48  bt 1, 0x37df60
  037df4c  cmpwi 3, 13
  037df50  bf 1, 0x37ecdc
  037df54  cmpwi 3, 14
  037df58  bf 1, 0x37f298
  037df5c  b 0x37f388
  037df60  cmpwi 3, 16
  037df64  bf 1, 0x37f4d4
  037df68  cmpwi 3, 17
  037df6c  bf 1, 0x37f904
  037df70  b 0x37f42c
  037df74  cmpwi 3, 21
  037df78  bt 1, 0x37df90
  037df7c  cmpwi 3, 19
  037df80  bf 1, 0x37f57c
  037df84  cmpwi 3, 20
  037df88  bf 1, 0x37efa0
  037df8c  b 0x37ff30
  037df90  cmpwi 3, 23
  037df94  bt 2, 0x38016c
  037df98  b 0x380248
  037df9c  lwz 3, 288(30)
  037dfa0  cmpwi 3, -1
  037dfa4  bt 2, 0x37dfc8
  037dfa8  lis 4, 165
  037dfac  slwi 3, 3, 2
  037dfb0  addic 4, 4, 7136
  037dfb4  extsw 3, 3
  037dfb8  lwzx 3, 4, 3
  037dfbc  lwz 3, 0(3)
  037dfc0  cmpwi 3, 0
  037dfc4  bf 2, 0x37dfd8
  037dfc8  ori 3, 31, 0
  037dfcc  bl 0xefb38
  037dfd0  nop
  037dfd4  b 0x380478
  037dfd8  lis 5, 16448
  037dfdc  li 6, 3
  037dfe0  li 29, 2
  037dfe4  addic 3, 30, 352
  037dfe8  stw 5, 32(30)
  037dfec  sth 6, 36(30)
  037dff0  addic 4, 31, 16
  037dff4  stb 29, 40(30)
  037dff8  stb 27, 41(30)
  037dffc  bl 0x5e7e98
  037e000  nop
  037e004  lwz 3, 328(30)
  037e008  li 4, 5
  037e00c  li 5, 5
  037e010  lfs 1, 72(31)
  037e014  extsw 6, 3
  037e018  subc 5, 5, 3
  037e01c  subc 4, 6, 4
  037e020  stfs 1, 364(30)
  037e024  li 6, 1
  037e028  sradi 4, 4, 63
  037e02c  and 4, 4, 5
  037e030  stw 6, 324(30)
  037e034  addc 4, 3, 4
  037e038  ori 3, 27, 0
  037e03c  stw 4, 328(30)
  037e040  lhz 5, 52(31)
  037e044  stb 29, 32(31)
  037e048  ori 4, 30, 0
  037e04c  ori 5, 5, 4096
  037e050  sth 5, 52(31)
  037e054  lwz 5, 384(4)
  037e058  cmpwi 5, -1
  037e05c  bt 2, 0x37e06c
  037e060  li 3, 1
  037e064  stb 3, 32(31)
  037e068  b 0x37e07c
  037e06c  addic 3, 3, 1
  037e070  addic 4, 4, 4
  037e074  cmpwi 3, 4
  037e078  bt 0, 0x37e054
  037e07c  stb 27, 188(31)
  037e080  b 0x380248
  037e084  ori 3, 27, 0
  037e088  lis 4, 164
  037e08c  ori 5, 30, 0
  037e090  lwz 6, 384(5)
  037e094  lwz 7, -28512(4)
  037e098  slwi 6, 6, 8
  037e09c  addc 6, 7, 6
  037e0a0  clrldi 6, 6, 32
  037e0a4  lbz 6, 32(6)
  037e0a8  cmpwi 6, 1
  037e0ac  bf 1, 0x37e0bc
  037e0b0  li 3, 2
  037e0b4  stb 3, 32(31)
  037e0b8  b 0x380248
  037e0bc  addic 3, 3, 1
  037e0c0  addic 5, 5, 4
  037e0c4  cmpwi 3, 4
  037e0c8  bt 0, 0x37e090
  037e0cc  b 0x380248
  037e0d0  lwz 3, 276(30)
  037e0d4  cmpwi 3, 2
  037e0d8  bt 2, 0x37e180
  037e0dc  li 3, 1
  037e0e0  stb 3, 188(31)
  037e0e4  lbz 3, 351(30)
  037e0e8  cmpwi 3, 0
  037e0ec  bt 2, 0x37e12c
  037e0f0  li 3, 16
  037e0f4  lbz 4, 83(31)
  037e0f8  cmpwi 4, 3
  037e0fc  stb 3, 32(31)
  037e100  bt 2, 0x380248
  037e104  li 3, 10
  037e108  bl 0x5e7e18
  037e10c  nop
  037e110  ori 6, 3, 0
  037e114  ori 3, 31, 0
  037e118  li 4, 3
  037e11c  li 5, 0
  037e120  bl 0xfddc0
  037e124  nop
  037e128  b 0x380248
  037e12c  li 3, 1
  037e130  li 5, 11
  037e134  li 6, 16
  037e138  li 4, 3
  037e13c  stb 3, 351(30)
  037e140  stb 5, 32(31)
  037e144  stb 6, 348(30)
  037e148  stb 4, 349(30)
  037e14c  lbz 3, 83(31)
  037e150  cmpwi 3, 1
  037e154  bt 2, 0x380248
  037e158  li 3, 10
  037e15c  bl 0x5e7e18
  037e160  nop
  037e164  ori 6, 3, 0
  037e168  ori 3, 31, 0
  037e16c  li 4, 1
  037e170  li 5, 0
  037e174  bl 0xfddc0
  037e178  nop
  037e17c  b 0x380248
  037e180  lhz 3, 342(30)
  037e184  cmpwi 3, 0
  037e188  bt 2, 0x37e2b0
  037e18c  lbz 3, 347(30)
  037e190  cmpwi 3, 0
  037e194  bf 2, 0x37e2b0
  037e198  lbz 3, 346(30)
  037e19c  cmpwi 3, 0
  037e1a0  bf 2, 0x37e1b0
  037e1a4  lwz 3, 292(30)
  037e1a8  cmpwi 3, -1
  037e1ac  bf 2, 0x37e1cc
  037e1b0  addic 5, 29, 16
  037e1b4  ori 3, 31, 0
  037e1b8  ori 4, 30, 0
  037e1bc  li 6, 16
  037e1c0  li 7, 3
  037e1c4  bl 0x37be68
  037e1c8  b 0x380248
  037e1cc  lwz 4, 324(30)
  037e1d0  cmpwi 4, 0
  037e1d4  bt 2, 0x37e208
  037e1d8  lis 4, 165
  037e1dc  lwz 5, 316(30)
  037e1e0  slwi 3, 3, 2
  037e1e4  addic 4, 4, 7136
  037e1e8  extsw 3, 3
  037e1ec  addic 5, 5, 1
  037e1f0  lwzx 3, 4, 3
  037e1f4  lwz 3, 0(3)
  037e1f8  divw 4, 5, 3
  037e1fc  mullw 3, 4, 3
  037e200  subc 3, 5, 3
  037e204  stw 3, 316(30)
  037e208  li 3, 1
  037e20c  stw 27, 324(30)
  037e210  stb 3, 188(31)
  037e214  lbz 3, 351(30)
  037e218  cmpwi 3, 0
  037e21c  bt 2, 0x37e25c
  037e220  li 3, 13
  037e224  lbz 4, 83(31)
  037e228  cmpwi 4, 14
  037e22c  stb 3, 32(31)
  037e230  bt 2, 0x380248
  037e234  li 3, 10
  037e238  bl 0x5e7e18
  037e23c  nop
  037e240  ori 6, 3, 0
  037e244  ori 3, 31, 0
  037e248  li 4, 14
  037e24c  li 5, 0
  037e250  bl 0xfddc0
  037e254  nop
  037e258  b 0x380248
  037e25c  li 3, 1
  037e260  li 4, 11
  037e264  li 5, 13
  037e268  li 6, 14
  037e26c  stb 3, 351(30)
  037e270  stb 4, 32(31)
  037e274  stb 5, 348(30)
  037e278  stb 6, 349(30)
  037e27c  lbz 3, 83(31)
  037e280  cmpwi 3, 1
  037e284  bt 2, 0x380248
  037e288  li 3, 10
  037e28c  bl 0x5e7e18
  037e290  nop
  037e294  ori 6, 3, 0
  037e298  ori 3, 31, 0
  037e29c  li 4, 1
  037e2a0  li 5, 0
  037e2a4  bl 0xfddc0
  037e2a8  nop
  037e2ac  b 0x380248
  037e2b0  lhz 3, 412(30)
  037e2b4  cmpwi 3, 0
  037e2b8  bt 2, 0x37e2dc
  037e2bc  lwz 5, 408(30)
  037e2c0  ori 3, 31, 0
  037e2c4  ori 4, 30, 0
  037e2c8  li 6, 10
  037e2cc  li 7, 15
  037e2d0  addic 5, 5, 16
  037e2d4  bl 0x37be68
  037e2d8  b 0x380248
  037e2dc  addic 3, 30, 406
  037e2e0  bl 0x4fffb4
  037e2e4  nop
  037e2e8  cmpwi 3, 0
  037e2ec  bt 2, 0x37e34c
  037e2f0  ori 3, 31, 0
  037e2f4  bl 0x37cac8
  037e2f8  cmpwi 3, 0
  037e2fc  stw 3, 400(30)
  037e300  bt 2, 0x37e34c
  037e304  lhz 4, 404(30)
  037e308  cmpwi 4, 0
  037e30c  bf 2, 0x37e330
  037e310  li 3, 150
  037e314  bl 0x5e7e18
  037e318  nop
  037e31c  bl 0xfc620
  037e320  nop
  037e324  cmpwi 3, 0
  037e328  bf 2, 0x37e34c
  037e32c  lwz 3, 400(30)
  037e330  addic 5, 3, 16
  037e334  ori 3, 31, 0
  037e338  ori 4, 30, 0
  037e33c  li 6, 10
  037e340  li 7, 15
  037e344  bl 0x37be68
  037e348  b 0x380248
  037e34c  lbz 3, 32(31)
  037e350  cmpwi 3, 2
  037e354  cmpwi 1, 3, 3
  037e358  bf 2, 0x37e45c
  037e35c  lwz 3, 292(30)
  037e360  cmpwi 1, 3, -1
  037e364  bt 6, 0x37e3a4
  037e368  lwz 3, 324(30)
  037e36c  cmpwi 3, 0
  037e370  bt 2, 0x37e384
  037e374  ori 3, 31, 0
  037e378  bl 0x37cee0
  037e37c  cmpwi 3, 0
  037e380  bt 2, 0x380248
  037e384  lwz 3, 328(30)
  037e388  extsw 3, 3
  037e38c  bl 0x5e7e18
  037e390  nop
  037e394  li 4, 3
  037e398  stw 3, 332(30)
  037e39c  stb 4, 32(31)
  037e3a0  b 0x380248
  037e3a4  lhz 3, 344(30)
  037e3a8  cmpwi 3, 0
  037e3ac  bt 2, 0x37e43c
  037e3b0  lwz 3, 8324(28)
  037e3b4  cmpwi 3, 89
  037e3b8  bf 2, 0x37e43c
  037e3bc  lwz 3, 336(30)
  037e3c0  cmpwi 3, -1
  037e3c4  bf 2, 0x37e3f4
  037e3c8  lwz 3, 300(30)
  037e3cc  cmpwi 3, -1
  037e3d0  bf 2, 0x37e3f4
  037e3d4  lhz 3, 340(30)
  037e3d8  cmpwi 3, 0
  037e3dc  bf 2, 0x380248
  037e3e0  li 3, 120
  037e3e4  bl 0xfc620
  037e3e8  nop
  037e3ec  cmpwi 3, 0
  037e3f0  bf 2, 0x380248
  037e3f4  li 3, 2
  037e3f8  li 4, 5
  037e3fc  stb 3, 348(30)
  037e400  stb 27, 349(30)
  037e404  lbz 3, 83(31)
  037e408  stb 4, 32(31)
  037e40c  cmpwi 3, 2
  037e410  bt 2, 0x380248
  037e414  li 3, 10
  037e418  bl 0x5e7e18
  037e41c  nop
  037e420  ori 6, 3, 0
  037e424  ori 3, 31, 0
  037e428  li 4, 2
  037e42c  li 5, 0
  037e430  bl 0xfddc0
  037e434  nop
  037e438  b 0x380248
  037e43c  bf 6, 0x380248
  037e440  ori 3, 31, 0
  037e444  lfs 1, 364(30)
  037e448  ori 4, 30, 0
  037e44c  li 6, 2
  037e450  li 7, 0
  037e454  bl 0x37bbe8
  037e458  b 0x380248
  037e45c  bf 6, 0x380248
  037e460  addic 3, 30, 332
  037e464  bl 0x4fff60
  037e468  nop
  037e46c  cmpwi 3, 0
  037e470  bt 2, 0x380248
  037e474  lwz 3, 324(30)
  037e478  lwz 5, 292(30)
  037e47c  cmpwi 3, 0
  037e480  lwz 4, 316(30)
  037e484  slwi 3, 5, 2
  037e488  extsw 3, 3
  037e48c  bt 2, 0x37e4b4
  037e490  lis 5, 165
  037e494  addic 4, 4, 1
  037e498  addic 5, 5, 7136
  037e49c  lwzx 5, 5, 3
  037e4a0  lwz 5, 0(5)
  037e4a4  divw 6, 4, 5
  037e4a8  mullw 5, 6, 5
  037e4ac  subc 4, 4, 5
  037e4b0  stw 4, 316(30)
  037e4b4  ori 5, 3, 0
  037e4b8  stw 27, 324(30)
  037e4bc  lis 3, 165
  037e4c0  slwi 7, 4, 4
  037e4c4  addic 4, 3, 7136
  037e4c8  li 6, 4
  037e4cc  ori 3, 31, 0
  037e4d0  lwzx 5, 4, 5
  037e4d4  ori 4, 30, 0
  037e4d8  addc 5, 5, 7
  037e4dc  li 7, 13
  037e4e0  addic 5, 5, 16
  037e4e4  clrldi 5, 5, 32
  037e4e8  bl 0x37be68
  037e4ec  b 0x380248
  037e4f0  lwz 3, 276(30)
  037e4f4  cmpwi 3, 2
  037e4f8  bt 2, 0x37e5a0
  037e4fc  li 3, 1
  037e500  stb 3, 188(31)
  037e504  lbz 3, 351(30)
  037e508  cmpwi 3, 0
  037e50c  bt 2, 0x37e54c
  037e510  li 3, 16
  037e514  lbz 4, 83(31)
  037e518  cmpwi 4, 3
  037e51c  stb 3, 32(31)
  037e520  bt 2, 0x380248
  037e524  li 3, 10
  037e528  bl 0x5e7e18
  037e52c  nop
  037e530  ori 6, 3, 0
  037e534  ori 3, 31, 0
  037e538  li 4, 3
  037e53c  li 5, 0
  037e540  bl 0xfddc0
  037e544  nop
  037e548  b 0x380248
  037e54c  li 3, 1
  037e550  li 4, 11
  037e554  li 5, 16
  037e558  li 6, 3
  037e55c  stb 3, 351(30)
  037e560  stb 4, 32(31)
  037e564  stb 5, 348(30)
  037e568  stb 6, 349(30)
  037e56c  lbz 3, 83(31)
  037e570  cmpwi 3, 1
  037e574  bt 2, 0x380248
  037e578  li 3, 10
  037e57c  bl 0x5e7e18
  037e580  nop
  037e584  ori 6, 3, 0
  037e588  ori 3, 31, 0
  037e58c  li 4, 1
  037e590  li 5, 0
  037e594  bl 0xfddc0
  037e598  nop
  037e59c  b 0x380248
  037e5a0  lbz 3, 112(31)
  037e5a4  rlwinm 3, 3, 0, 30, 30
  037e5a8  cmpwi 3, 0
  037e5ac  bt 2, 0x380248
  037e5b0  li 3, 2
  037e5b4  lbz 4, 83(31)
  037e5b8  cmpwi 4, 0
  037e5bc  stb 3, 32(31)
  037e5c0  bt 2, 0x37e5e8
  037e5c4  li 3, 10
  037e5c8  bl 0x5e7e18
  037e5cc  nop
  037e5d0  ori 6, 3, 0
  037e5d4  ori 3, 31, 0
  037e5d8  li 4, 0
  037e5dc  li 5, 0
  037e5e0  bl 0xfddc0
  037e5e4  nop
  037e5e8  li 3, 360
  037e5ec  bl 0x5e7e18
  037e5f0  nop
  037e5f4  sth 3, 406(30)
  037e5f8  sth 27, 404(30)
  037e5fc  b 0x380248
  037e600  lbz 3, 112(31)
  037e604  rlwinm 3, 3, 0, 30, 30
  037e608  cmpwi 3, 0
  037e60c  bt 2, 0x380248
  037e610  li 3, 240
  037e614  bl 0x5e7e18
  037e618  nop
  037e61c  lwz 5, 336(30)
  037e620  sth 3, 340(30)
  037e624  ori 3, 5, 0
  037e628  cmpwi 3, -1
  037e62c  bt 2, 0x37e654
  037e630  lis 4, 164
  037e634  slwi 3, 3, 8
  037e638  lwz 4, -28512(4)
  037e63c  addc 3, 4, 3
  037e640  clrldi 3, 3, 32
  037e644  bl 0x459ff0
  037e648  nop
  037e64c  li 3, -1
  037e650  stw 3, 336(30)
  037e654  lwz 3, 300(30)
  037e658  cmpwi 3, -1
  037e65c  bt 2, 0x37e684
  037e660  lis 4, 164
  037e664  slwi 3, 3, 8
  037e668  lwz 4, -28512(4)
  037e66c  addc 3, 4, 3
  037e670  clrldi 3, 3, 32
  037e674  bl 0x459ff0
  037e678  nop
  037e67c  li 3, -1
  037e680  stw 3, 300(30)
  037e684  lbz 3, 348(30)
  037e688  cmpwi 3, 2
  037e68c  stb 3, 32(31)
  037e690  cmpwi 1, 3, 1
  037e694  cmpwi 6, 3, 4
  037e698  bt 1, 0x37e6a4
  037e69c  bf 5, 0x380248
  037e6a0  b 0x37e6ac
  037e6a4  bt 26, 0x37e6e0
  037e6a8  b 0x380248
  037e6ac  lbz 3, 83(31)
  037e6b0  cmpwi 3, 0
  037e6b4  bt 2, 0x380248
  037e6b8  li 3, 10
  037e6bc  bl 0x5e7e18
  037e6c0  nop
  037e6c4  ori 6, 3, 0
  037e6c8  ori 3, 31, 0
  037e6cc  li 4, 0
  037e6d0  li 5, 0
  037e6d4  bl 0xfddc0
  037e6d8  nop
  037e6dc  b 0x380248
  037e6e0  lbz 3, 83(31)
  037e6e4  cmpwi 3, 13
  037e6e8  bt 2, 0x380248
  037e6ec  li 3, 10
  037e6f0  bl 0x5e7e18
  037e6f4  nop
  037e6f8  ori 6, 3, 0
  037e6fc  ori 3, 31, 0
  037e700  li 4, 13
  037e704  li 5, 0
  037e708  bl 0xfddc0
  037e70c  nop
  037e710  b 0x380248
  037e714  lwz 3, 276(30)
  037e718  cmpwi 3, 2
  037e71c  bt 2, 0x37e810
  037e720  lfs 1, 208(30)
  037e724  lfs 31, 72(31)
  037e728  lfs 2, 16(31)
  037e72c  lfs 3, 212(30)
  037e730  fsubs 1, 1, 2
  037e734  lfs 4, 20(31)
  037e738  fsubs 2, 3, 4
  037e73c  bl 0x5e8338
  037e740  nop
  037e744  fmr 2, 1
  037e748  fmr 1, 31
  037e74c  bl 0x5026a0
  037e750  nop
  037e754  lis 3, 56
  037e758  addi 3, 3, -9232
  037e75c  lfs 2, 8(3)
  037e760  fcmpu 0, 1, 2
  037e764  cror 6, 1, 2
  037e768  bt 6, 0x37e810
  037e76c  li 3, 1
  037e770  stb 3, 188(31)
  037e774  lbz 3, 351(30)
  037e778  cmpwi 3, 0
  037e77c  bt 2, 0x37e7bc
  037e780  li 3, 16
  037e784  lbz 4, 83(31)
  037e788  cmpwi 4, 3
  037e78c  stb 3, 32(31)
  037e790  bt 2, 0x380248
  037e794  li 3, 10
  037e798  bl 0x5e7e18
  037e79c  nop
  037e7a0  ori 6, 3, 0
  037e7a4  ori 3, 31, 0
  037e7a8  li 4, 3
  037e7ac  li 5, 0
  037e7b0  bl 0xfddc0
  037e7b4  nop
  037e7b8  b 0x380248
  037e7bc  li 3, 1
  037e7c0  li 4, 11
  037e7c4  li 5, 16
  037e7c8  li 6, 3
  037e7cc  stb 3, 351(30)
  037e7d0  stb 4, 32(31)
  037e7d4  stb 5, 348(30)
  037e7d8  stb 6, 349(30)
  037e7dc  lbz 3, 83(31)
  037e7e0  cmpwi 3, 1
  037e7e4  bt 2, 0x380248
  037e7e8  li 3, 10
  037e7ec  bl 0x5e7e18
  037e7f0  nop
  037e7f4  ori 6, 3, 0
  037e7f8  ori 3, 31, 0
  037e7fc  li 4, 1
  037e800  li 5, 0
  037e804  bl 0xfddc0
  037e808  nop
  037e80c  b 0x380248
  037e810  lbz 3, 82(31)
  037e814  ori 29, 27, 0
  037e818  cmpwi 3, 10
  037e81c  cmpwi 1, 3, 9
  037e820  cmpwi 6, 3, 11
  037e824  cmpwi 7, 3, 12
  037e828  bt 1, 0x37e834
  037e82c  bf 5, 0x37e85c
  037e830  b 0x37e848
  037e834  bf 25, 0x37e854
  037e838  bt 29, 0x37e85c
  037e83c  lis 29, 132
  037e840  addic 29, 29, 7080
  037e844  b 0x37e85c
  037e848  lis 29, 132
  037e84c  addic 29, 29, 6952
  037e850  b 0x37e85c
  037e854  lis 29, 132
  037e858  addic 29, 29, 6824
  037e85c  lbz 4, 112(31)
  037e860  rlwinm 4, 4, 0, 30, 30
  037e864  cmpwi 4, 0
  037e868  bt 2, 0x37e8f8
  037e86c  ori 4, 3, 0
  037e870  lbz 3, 34(31)
  037e874  bl 0xefff8
  037e878  nop
  037e87c  bl 0x502758
  037e880  nop
  037e884  cmpwi 29, 0
  037e888  bt 2, 0x37e8b8
  037e88c  lis 4, 56
  037e890  sldi 3, 3, 2
  037e894  lfs 1, 368(30)
  037e898  addi 4, 4, -9232
  037e89c  extsw 3, 3
  037e8a0  lfs 2, 12(4)
  037e8a4  lfsx 3, 3, 29
  037e8a8  fmuls 2, 3, 2
  037e8ac  bl 0x502578
  037e8b0  nop
  037e8b4  stfs 1, 72(31)
  037e8b8  lbz 3, 348(30)
  037e8bc  lbz 4, 83(31)
  037e8c0  stb 3, 32(31)
  037e8c4  lbz 29, 349(30)
  037e8c8  cmpw 4, 29
  037e8cc  bt 2, 0x380248
  037e8d0  li 3, 10
  037e8d4  bl 0x5e7e18
  037e8d8  nop
  037e8dc  ori 6, 3, 0
  037e8e0  ori 3, 31, 0
  037e8e4  ori 4, 29, 0
  037e8e8  li 5, 0
  037e8ec  bl 0xfddc0
  037e8f0  nop
  037e8f4  b 0x380248
  037e8f8  lbz 4, 83(31)
  037e8fc  cmpwi 1, 29, 0
  037e900  cmpw 3, 4
  037e904  crorc 2, 6, 2
  037e908  bt 2, 0x380248
  037e90c  ori 3, 31, 0
  037e910  bl 0xefe40
  037e914  nop
  037e918  fmr 31, 1
  037e91c  bl 0x502758
  037e920  nop
  037e924  ori 26, 3, 0
  037e928  bl 0x502730
  037e92c  nop
  037e930  sldi 3, 26, 2
  037e934  fsubs 2, 31, 1
  037e938  lis 5, 56
  037e93c  addc 4, 29, 3
  037e940  extsw 3, 3
  037e944  clrldi 4, 4, 32
  037e948  lfsx 3, 3, 29
  037e94c  lfs 1, 4(4)
  037e950  addi 3, 5, -9232
  037e954  fsubs 4, 1, 3
  037e958  lfs 5, 12(3)
  037e95c  lfs 1, 368(30)
  037e960  fmadds 2, 4, 2, 3
  037e964  fmuls 2, 2, 5
  037e968  bl 0x502578
  037e96c  nop
  037e970  stfs 1, 72(31)
  037e974  b 0x380248
  037e978  lis 3, 56
  037e97c  lwz 6, 292(30)
  037e980  lis 4, 165
  037e984  addi 3, 3, -9232
  037e988  lis 5, 114
  037e98c  slwi 6, 6, 2
  037e990  lfs 1, 16(3)
  037e994  addic 3, 4, 7136
  037e998  extsw 4, 6
  037e99c  lfs 2, -3052(5)
  037e9a0  lwz 5, 316(30)
  037e9a4  fmuls 1, 2, 1
  037e9a8  slwi 5, 5, 4
  037e9ac  lwzx 3, 3, 4
  037e9b0  addc 4, 3, 5
  037e9b4  ori 3, 31, 0
  037e9b8  addic 5, 4, 16
  037e9bc  clrldi 5, 5, 32
  037e9c0  bl 0x37c500
  037e9c4  ori 4, 3, 0
  037e9c8  lwz 3, 8324(28)
  037e9cc  cmpwi 4, 0
  037e9d0  lbz 4, 32(31)
  037e9d4  bt 2, 0x37ea1c
  037e9d8  li 3, 2
  037e9dc  li 4, 1
  037e9e0  stb 3, 32(31)
  037e9e4  stw 4, 324(30)
  037e9e8  lbz 3, 83(31)
  037e9ec  cmpwi 3, 0
  037e9f0  bt 2, 0x380248
  037e9f4  li 3, 10
  037e9f8  bl 0x5e7e18
  037e9fc  nop
  037ea00  ori 6, 3, 0
  037ea04  ori 3, 31, 0
  037ea08  li 4, 0
  037ea0c  li 5, 0
  037ea10  bl 0xfddc0
  037ea14  nop
  037ea18  b 0x380248
  037ea1c  lwz 5, 276(30)
  037ea20  cmpwi 5, 2
  037ea24  bt 2, 0x37eacc
  037ea28  li 3, 1
  037ea2c  stb 3, 188(31)
  037ea30  lbz 3, 351(30)
  037ea34  cmpwi 3, 0
  037ea38  bt 2, 0x37ea78
  037ea3c  li 3, 16
  037ea40  lbz 4, 83(31)
  037ea44  cmpwi 4, 3
  037ea48  stb 3, 32(31)
  037ea4c  bt 2, 0x380248
  037ea50  li 3, 10
  037ea54  bl 0x5e7e18
  037ea58  nop
  037ea5c  ori 6, 3, 0
  037ea60  ori 3, 31, 0
  037ea64  li 4, 3
  037ea68  li 5, 0
  037ea6c  bl 0xfddc0
  037ea70  nop
  037ea74  b 0x380248
  037ea78  li 3, 1
  037ea7c  li 4, 11
  037ea80  li 5, 16
  037ea84  li 6, 3
  037ea88  stb 3, 351(30)
  037ea8c  stb 4, 32(31)
  037ea90  stb 5, 348(30)
  037ea94  stb 6, 349(30)
  037ea98  lbz 3, 83(31)
  037ea9c  cmpwi 3, 1
  037eaa0  bt 2, 0x380248
  037eaa4  li 3, 10
  037eaa8  bl 0x5e7e18
  037eaac  nop
  037eab0  ori 6, 3, 0
  037eab4  ori 3, 31, 0
  037eab8  li 4, 1
  037eabc  li 5, 0
  037eac0  bl 0xfddc0
  037eac4  nop
  037eac8  b 0x380248
  037eacc  lhz 5, 342(30)
  037ead0  cmpwi 5, 0
  037ead4  bt 2, 0x37ebc0
  037ead8  lbz 5, 347(30)
  037eadc  cmpwi 5, 0
  037eae0  bf 2, 0x37ebc0
  037eae4  lbz 3, 346(30)
  037eae8  cmpwi 3, 0
  037eaec  bt 2, 0x37eb0c
  037eaf0  addic 5, 29, 16
  037eaf4  ori 3, 31, 0
  037eaf8  ori 4, 30, 0
  037eafc  li 6, 16
  037eb00  li 7, 3
  037eb04  bl 0x37be68
  037eb08  b 0x380248
  037eb0c  li 3, 60
  037eb10  bl 0x5e7e18
  037eb14  nop
  037eb18  stw 3, 332(30)
  037eb1c  li 3, 1
  037eb20  stb 3, 188(31)
  037eb24  lbz 3, 351(30)
  037eb28  cmpwi 3, 0
  037eb2c  bt 2, 0x37eb6c
  037eb30  li 3, 13
  037eb34  lbz 4, 83(31)
  037eb38  cmpwi 4, 14
  037eb3c  stb 3, 32(31)
  037eb40  bt 2, 0x380248
  037eb44  li 3, 10
  037eb48  bl 0x5e7e18
  037eb4c  nop
  037eb50  ori 6, 3, 0
  037eb54  ori 3, 31, 0
  037eb58  li 4, 14
  037eb5c  li 5, 0
  037eb60  bl 0xfddc0
  037eb64  nop
  037eb68  b 0x380248
  037eb6c  li 3, 1
  037eb70  li 4, 11
  037eb74  li 5, 13
  037eb78  li 6, 14
  037eb7c  stb 3, 351(30)
  037eb80  stb 4, 32(31)
  037eb84  stb 5, 348(30)
  037eb88  stb 6, 349(30)
  037eb8c  lbz 3, 83(31)
  037eb90  cmpwi 3, 1
  037eb94  bt 2, 0x380248
  037eb98  li 3, 10
  037eb9c  bl 0x5e7e18
  037eba0  nop
  037eba4  ori 6, 3, 0
  037eba8  ori 3, 31, 0
  037ebac  li 4, 1
  037ebb0  li 5, 0
  037ebb4  bl 0xfddc0
  037ebb8  nop
  037ebbc  b 0x380248
  037ebc0  lhz 5, 412(30)
  037ebc4  cmpwi 5, 0
  037ebc8  bt 2, 0x37ebec
  037ebcc  lwz 5, 408(30)
  037ebd0  ori 3, 31, 0
  037ebd4  ori 4, 30, 0
  037ebd8  li 6, 10
  037ebdc  li 7, 15
  037ebe0  addic 5, 5, 16
  037ebe4  bl 0x37be68
  037ebe8  b 0x380248
  037ebec  lhz 5, 344(30)
  037ebf0  cmpwi 5, 0
  037ebf4  bt 2, 0x37ec6c
  037ebf8  cmpwi 3, 89
  037ebfc  bf 2, 0x37ec6c
  037ec00  lwz 3, 336(30)
  037ec04  cmpwi 3, -1
  037ec08  bf 2, 0x37ec24
  037ec0c  lwz 3, 300(30)
  037ec10  cmpwi 3, -1
  037ec14  bf 2, 0x37ec24
  037ec18  lhz 3, 340(30)
  037ec1c  cmpwi 3, 0
  037ec20  bf 2, 0x380248
  037ec24  li 3, 13
  037ec28  stb 4, 348(30)
  037ec2c  li 5, 5
  037ec30  stb 3, 349(30)
  037ec34  lbz 3, 83(31)
  037ec38  stb 5, 32(31)
  037ec3c  cmpwi 3, 2
  037ec40  bt 2, 0x380248
  037ec44  li 3, 10
  037ec48  bl 0x5e7e18
  037ec4c  nop
  037ec50  ori 6, 3, 0
  037ec54  ori 3, 31, 0
  037ec58  li 4, 2
  037ec5c  li 5, 0
  037ec60  bl 0xfddc0
  037ec64  nop
  037ec68  b 0x380248
  037ec6c  addic 3, 30, 406
  037ec70  bl 0x4fffb4
  037ec74  nop
  037ec78  cmpwi 3, 0
  037ec7c  bt 2, 0x380248
  037ec80  ori 3, 31, 0
  037ec84  bl 0x37cac8
  037ec88  cmpwi 3, 0
  037ec8c  stw 3, 400(30)
  037ec90  bt 2, 0x380248
  037ec94  lhz 4, 404(30)
  037ec98  cmpwi 4, 0
  037ec9c  bf 2, 0x37ecc0
  037eca0  li 3, 150
  037eca4  bl 0x5e7e18
  037eca8  nop
  037ecac  bl 0xfc620
  037ecb0  nop
  037ecb4  cmpwi 3, 0
  037ecb8  bf 2, 0x380248
  037ecbc  lwz 3, 400(30)
  037ecc0  addic 5, 3, 16
  037ecc4  ori 3, 31, 0
  037ecc8  ori 4, 30, 0
  037eccc  li 6, 10
  037ecd0  li 7, 15
  037ecd4  bl 0x37be68
  037ecd8  b 0x380248
  037ecdc  lis 3, 56
  037ece0  lwz 6, 292(30)
  037ece4  lis 4, 165
  037ece8  addi 3, 3, -9232
  037ecec  lis 5, 114
  037ecf0  slwi 6, 6, 2
  037ecf4  lfs 1, 20(3)
  037ecf8  addic 3, 4, 7136
  037ecfc  extsw 4, 6
  037ed00  lfs 2, -3052(5)
  037ed04  lwz 5, 316(30)
  037ed08  fmuls 1, 2, 1
  037ed0c  slwi 5, 5, 4
  037ed10  lwzx 3, 3, 4
  037ed14  addc 4, 3, 5
  037ed18  ori 3, 31, 0
  037ed1c  addic 5, 4, 16
  037ed20  clrldi 5, 5, 32
  037ed24  bl 0x37c500
  037ed28  ori 4, 3, 0
  037ed2c  lbz 3, 83(31)
  037ed30  cmpwi 4, 0
  037ed34  bt 2, 0x37ed7c
  037ed38  li 3, 12
  037ed3c  li 4, 1
  037ed40  stb 3, 32(31)
  037ed44  stw 4, 324(30)
  037ed48  lbz 3, 83(31)
  037ed4c  cmpwi 3, 0
  037ed50  bt 2, 0x380248
  037ed54  li 3, 10
  037ed58  bl 0x5e7e18
  037ed5c  nop
  037ed60  ori 6, 3, 0
  037ed64  ori 3, 31, 0
  037ed68  li 4, 0
  037ed6c  li 5, 0
  037ed70  bl 0xfddc0
  037ed74  nop
  037ed78  b 0x380248
  037ed7c  lwz 4, 276(30)
  037ed80  cmpwi 4, 2
  037ed84  bt 2, 0x37ee34
  037ed88  lbz 4, 347(30)
  037ed8c  cmpwi 4, 0
  037ed90  bf 2, 0x37ee34
  037ed94  li 4, 1
  037ed98  stb 4, 188(31)
  037ed9c  lbz 4, 351(30)
  037eda0  cmpwi 4, 0
  037eda4  bt 2, 0x37ede0
  037eda8  li 4, 16
  037edac  cmpwi 3, 3
  037edb0  stb 4, 32(31)
  037edb4  bt 2, 0x380248
  037edb8  li 3, 10
  037edbc  bl 0x5e7e18
  037edc0  nop
  037edc4  ori 6, 3, 0
  037edc8  ori 3, 31, 0
  037edcc  li 4, 3
  037edd0  li 5, 0
  037edd4  bl 0xfddc0
  037edd8  nop
  037eddc  b 0x380248
  037ede0  li 3, 1
  037ede4  li 5, 11
  037ede8  li 6, 16
  037edec  li 4, 3
  037edf0  stb 3, 351(30)
  037edf4  stb 5, 32(31)
  037edf8  stb 6, 348(30)
  037edfc  stb 4, 349(30)
  037ee00  lbz 3, 83(31)
  037ee04  cmpwi 3, 1
  037ee08  bt 2, 0x380248
  037ee0c  li 3, 10
  037ee10  bl 0x5e7e18
  037ee14  nop
  037ee18  ori 6, 3, 0
  037ee1c  ori 3, 31, 0
  037ee20  li 4, 1
  037ee24  li 5, 0
  037ee28  bl 0xfddc0
  037ee2c  nop
  037ee30  b 0x380248
  037ee34  lhz 4, 342(30)
  037ee38  cmpwi 4, 0
  037ee3c  bf 2, 0x37eec4
  037ee40  li 4, 9
  037ee44  cmpwi 3, 13
  037ee48  stb 4, 32(31)
  037ee4c  bt 2, 0x37ee74
  037ee50  li 3, 10
  037ee54  bl 0x5e7e18
  037ee58  nop
  037ee5c  ori 6, 3, 0
  037ee60  ori 3, 31, 0
  037ee64  li 4, 13
  037ee68  li 5, 0
  037ee6c  bl 0xfddc0
  037ee70  nop
  037ee74  lwz 29, 296(30)
  037ee78  cmpwi 29, -1
  037ee7c  bt 2, 0x380248
  037ee80  lis 3, 164
  037ee84  slwi 4, 29, 8
  037ee88  lwz 3, -28512(3)
  037ee8c  addc 29, 3, 4
  037ee90  clrldi 29, 29, 32
  037ee94  lwz 3, 120(29)
  037ee98  lwz 3, 8(3)
  037ee9c  cmpwi 3, 0
  037eea0  bt 2, 0x380248
  037eea4  li 3, 30
  037eea8  bl 0x5e7e18
  037eeac  nop
  037eeb0  ori 4, 3, 0
  037eeb4  ori 3, 29, 0
  037eeb8  bl 0x364690
  037eebc  nop
  037eec0  b 0x380248
  037eec4  li 3, 60
  037eec8  bl 0x5e7e18
  037eecc  nop
  037eed0  stw 3, 332(30)
  037eed4  b 0x380248
  037eed8  addic 29, 30, 352
  037eedc  addic 3, 31, 16
  037eee0  ori 4, 29, 0
  037eee4  bl 0x5e8548
  037eee8  nop
  037eeec  lis 3, 56
  037eef0  addi 3, 3, -9232
  037eef4  lfs 2, 24(3)
  037eef8  fcmpu 0, 1, 2
  037eefc  cror 6, 0, 2
  037ef00  bt 6, 0x37ef2c
  037ef04  lis 3, 56
  037ef08  lis 6, 114
  037ef0c  addi 4, 3, -9232
  037ef10  ori 3, 31, 0
  037ef14  ori 5, 29, 0
  037ef18  lfs 1, 16(4)
  037ef1c  lfs 2, -3052(6)
  037ef20  fmuls 1, 2, 1
  037ef24  bl 0x37c500
  037ef28  b 0x380248
  037ef2c  lwz 3, 292(30)
  037ef30  cmpwi 3, -1
  037ef34  bt 2, 0x37ef84
  037ef38  lis 3, 165
  037ef3c  stb 27, 188(31)
  037ef40  addic 5, 3, 7136
  037ef44  lwz 3, 292(30)
  037ef48  stw 27, 324(30)
  037ef4c  slwi 3, 3, 2
  037ef50  lwz 4, 316(30)
  037ef54  extsw 6, 3
  037ef58  slwi 7, 4, 4
  037ef5c  ori 3, 31, 0
  037ef60  ori 4, 30, 0
  037ef64  lwzx 5, 5, 6
  037ef68  li 6, 2
  037ef6c  addc 5, 5, 7
  037ef70  li 7, 0
  037ef74  addic 5, 5, 16
  037ef78  clrldi 5, 5, 32
  037ef7c  bl 0x37be68
  037ef80  b 0x380248
  037ef84  ori 3, 31, 0
  037ef88  ori 4, 30, 0
  037ef8c  lfs 1, 364(30)
  037ef90  li 6, 2
  037ef94  li 7, 0
  037ef98  bl 0x37bbe8
  037ef9c  b 0x380248
  037efa0  addic 29, 30, 352
  037efa4  addic 3, 31, 16
  037efa8  ori 4, 29, 0
  037efac  bl 0x5e8548
  037efb0  nop
  037efb4  lis 3, 56
  037efb8  addi 3, 3, -9232
  037efbc  lfs 2, 24(3)
  037efc0  fcmpu 0, 1, 2
  037efc4  cror 6, 0, 2
  037efc8  bt 6, 0x37eff4
  037efcc  lis 3, 56
  037efd0  lis 6, 114
  037efd4  addi 4, 3, -9232
  037efd8  ori 3, 31, 0
  037efdc  ori 5, 29, 0
  037efe0  lfs 1, 28(4)
  037efe4  lfs 2, -3052(6)
  037efe8  fmuls 1, 2, 1
  037efec  bl 0x37c500
  037eff0  b 0x380248
  037eff4  lhz 3, 342(30)
  037eff8  cmpwi 3, 0
  037effc  bf 2, 0x37f070
  037f000  stb 27, 188(31)
  037f004  lwz 3, 292(30)
  037f008  stw 27, 324(30)
  037f00c  cmpwi 3, -1
  037f010  bt 2, 0x37f054
  037f014  lis 4, 165
  037f018  slwi 3, 3, 2
  037f01c  lwz 7, 316(30)
  037f020  addic 4, 4, 7136
  037f024  extsw 5, 3
  037f028  slwi 7, 7, 4
  037f02c  li 6, 2
  037f030  ori 3, 31, 0
  037f034  lwzx 4, 4, 5
  037f038  addc 5, 4, 7
  037f03c  ori 4, 30, 0
  037f040  addic 5, 5, 16
  037f044  li 7, 0
  037f048  clrldi 5, 5, 32
  037f04c  bl 0x37be68
  037f050  b 0x380248
  037f054  ori 3, 31, 0
  037f058  lfs 1, 364(30)
  037f05c  ori 4, 30, 0
  037f060  li 6, 2
  037f064  li 7, 0
  037f068  bl 0x37bbe8
  037f06c  b 0x380248
  037f070  lfs 1, 208(30)
  037f074  lfs 31, 72(31)
  037f078  lfs 2, 16(31)
  037f07c  lfs 3, 212(30)
  037f080  fsubs 1, 1, 2
  037f084  lfs 4, 20(31)
  037f088  fsubs 2, 3, 4
  037f08c  bl 0x5e8338
  037f090  nop
  037f094  fmr 2, 1
  037f098  fmr 1, 31
  037f09c  bl 0x5026a0
  037f0a0  nop
  037f0a4  lis 3, 56
  037f0a8  addi 4, 3, -9232
  037f0ac  lbz 3, 83(31)
  037f0b0  lfs 2, 32(4)
  037f0b4  fcmpu 0, 1, 2
  037f0b8  cror 6, 0, 2
  037f0bc  bt 6, 0x37f0e8
  037f0c0  lbz 4, 347(30)
  037f0c4  cmpwi 4, 0
  037f0c8  bf 2, 0x37f0e8
  037f0cc  addic 5, 30, 208
  037f0d0  ori 3, 31, 0
  037f0d4  ori 4, 30, 0
  037f0d8  li 6, 16
  037f0dc  li 7, 3
  037f0e0  bl 0x37be68
  037f0e4  b 0x380248
  037f0e8  li 4, 12
  037f0ec  cmpwi 3, 0
  037f0f0  stb 4, 32(31)
  037f0f4  bt 2, 0x380248
  037f0f8  li 3, 10
  037f0fc  bl 0x5e7e18
  037f100  nop
  037f104  ori 6, 3, 0
  037f108  ori 3, 31, 0
  037f10c  li 4, 0
  037f110  li 5, 0
  037f114  bl 0xfddc0
  037f118  nop
  037f11c  b 0x380248
  037f120  lwz 3, 296(30)
  037f124  cmpwi 3, -1
  037f128  bt 2, 0x37f148
  037f12c  lis 4, 164
  037f130  slwi 3, 3, 8
  037f134  lwz 4, -28512(4)
  037f138  addc 3, 4, 3
  037f13c  clrldi 3, 3, 32
  037f140  bl 0x3655c0
  037f144  nop
  037f148  lbz 3, 112(31)
  037f14c  rlwinm 3, 3, 0, 30, 30
  037f150  cmpwi 3, 0
  037f154  bt 2, 0x380248
  037f158  lwz 3, 8324(28)
  037f15c  cmpwi 3, 101
  037f160  bf 2, 0x37f1a0
  037f164  li 3, 12
  037f168  lbz 4, 83(31)
  037f16c  cmpwi 4, 0
  037f170  stb 3, 32(31)
  037f174  bt 2, 0x380248
  037f178  li 3, 10
  037f17c  bl 0x5e7e18
  037f180  nop
  037f184  ori 6, 3, 0
  037f188  ori 3, 31, 0
  037f18c  li 4, 0
  037f190  li 5, 0
  037f194  bl 0xfddc0
  037f198  nop
  037f19c  b 0x380248
  037f1a0  ori 3, 31, 0
  037f1a4  bl 0x37c268
  037f1a8  lwz 3, 296(30)
  037f1ac  cmpwi 3, -1
  037f1b0  bt 2, 0x37f224
  037f1b4  lis 4, 164
  037f1b8  slwi 3, 3, 8
  037f1bc  lwz 4, -28512(4)
  037f1c0  addc 3, 4, 3
  037f1c4  clrldi 3, 3, 32
  037f1c8  lwz 3, 120(3)
  037f1cc  lwz 3, 8(3)
  037f1d0  cmpwi 3, 0
  037f1d4  bf 2, 0x37f224
  037f1d8  ori 3, 31, 0
  037f1dc  bl 0x37c07c
  037f1e0  cmpwi 3, 0
  037f1e4  bt 2, 0x37f224
  037f1e8  li 3, 14
  037f1ec  lbz 4, 83(31)
  037f1f0  cmpwi 4, 14
  037f1f4  stb 3, 32(31)
  037f1f8  bt 2, 0x380248
  037f1fc  li 3, 20
  037f200  bl 0x5e7e18
  037f204  nop
  037f208  ori 6, 3, 0
  037f20c  ori 3, 31, 0
  037f210  li 4, 14
  037f214  li 5, 0
  037f218  bl 0xfddc0
  037f21c  nop
  037f220  b 0x380248
  037f224  lbz 3, 348(30)
  037f228  cmpwi 3, 16
  037f22c  cmpwi 1, 3, 255
  037f230  bf 2, 0x37f250
  037f234  addic 5, 29, 16
  037f238  ori 3, 31, 0
  037f23c  ori 4, 30, 0
  037f240  li 6, 16
  037f244  li 7, 3
  037f248  bl 0x37be68
  037f24c  b 0x380248
  037f250  bt 6, 0x37f258
  037f254  stb 3, 32(31)
  037f258  lbz 29, 349(30)
  037f25c  cmpwi 29, 255
  037f260  bt 2, 0x380248
  037f264  lbz 3, 83(31)
  037f268  cmpw 3, 29
  037f26c  bt 2, 0x380248
  037f270  li 3, 10
  037f274  bl 0x5e7e18
  037f278  nop
  037f27c  ori 6, 3, 0
  037f280  ori 3, 31, 0
  037f284  ori 4, 29, 0
  037f288  li 5, 0
  037f28c  bl 0xfddc0
  037f290  nop
  037f294  b 0x380248
  037f298  lis 29, 164
  037f29c  lwz 3, 296(30)
  037f2a0  slwi 3, 3, 8
  037f2a4  lwz 4, -28512(29)
  037f2a8  addc 3, 4, 3
  037f2ac  clrldi 3, 3, 32
  037f2b0  bl 0x3655c0
  037f2b4  nop
  037f2b8  lwz 3, 296(30)
  037f2bc  addic 26, 31, 16
  037f2c0  lwz 4, -28512(29)
  037f2c4  slwi 3, 3, 8
  037f2c8  addic 29, 1, 112
  037f2cc  addc 4, 4, 3
  037f2d0  ori 3, 29, 0
  037f2d4  addic 4, 4, 16
  037f2d8  ori 5, 26, 0
  037f2dc  clrldi 4, 4, 32
  037f2e0  bl 0x5e81f0
  037f2e4  nop
  037f2e8  ori 3, 29, 0
  037f2ec  bl 0x5e8030
  037f2f0  nop
  037f2f4  lis 3, 56
  037f2f8  ori 4, 29, 0
  037f2fc  addi 25, 3, -9232
  037f300  ori 3, 29, 0
  037f304  lfs 2, 36(25)
  037f308  fsubs 1, 1, 2
  037f30c  bl 0x5e7f98
  037f310  nop
  037f314  ori 4, 29, 0
  037f318  ori 3, 29, 0
  037f31c  ori 5, 26, 0
  037f320  bl 0x5e7f54
  037f324  nop
  037f328  lis 4, 114
  037f32c  lfs 1, 40(25)
  037f330  ori 3, 31, 0
  037f334  ori 5, 29, 0
  037f338  lfs 2, -3052(4)
  037f33c  fmuls 1, 2, 1
  037f340  bl 0x37c500
  037f344  cmpwi 3, 0
  037f348  bt 2, 0x380248
  037f34c  li 3, 15
  037f350  lbz 4, 83(31)
  037f354  cmpwi 4, 9
  037f358  stb 3, 32(31)
  037f35c  bt 2, 0x380248
  037f360  li 3, 10
  037f364  bl 0x5e7e18
  037f368  nop
  037f36c  ori 6, 3, 0
  037f370  ori 3, 31, 0
  037f374  li 4, 9
  037f378  li 5, 0
  037f37c  bl 0xfddc0
  037f380  nop
  037f384  b 0x380248
  037f388  lbz 3, 82(31)
  037f38c  lbz 4, 83(31)
  037f390  cmpw 3, 4
  037f394  bf 2, 0x37f3dc
  037f398  ori 3, 31, 0
  037f39c  bl 0xefe40
  037f3a0  nop
  037f3a4  lis 3, 56
  037f3a8  addi 3, 3, -9232
  037f3ac  lfs 2, 44(3)
  037f3b0  fcmpu 0, 1, 2
  037f3b4  bt 0, 0x37f3dc
  037f3b8  lis 3, 164
  037f3bc  lwz 5, 296(30)
  037f3c0  li 4, 180
  037f3c4  slwi 5, 5, 8
  037f3c8  lwz 3, -28512(3)
  037f3cc  addc 3, 3, 5
  037f3d0  clrldi 3, 3, 32
  037f3d4  bl 0x364690
  037f3d8  nop
  037f3dc  lbz 3, 112(31)
  037f3e0  rlwinm 3, 3, 0, 30, 30
  037f3e4  cmpwi 3, 0
  037f3e8  bt 2, 0x380248
  037f3ec  lis 3, 164
  037f3f0  lwz 5, 296(30)
  037f3f4  li 4, 180
  037f3f8  slwi 5, 5, 8
  037f3fc  lwz 3, -28512(3)
  037f400  addc 3, 3, 5
  037f404  clrldi 3, 3, 32
  037f408  bl 0x364690
  037f40c  nop
  037f410  addic 5, 29, 16
  037f414  ori 3, 31, 0
  037f418  ori 4, 30, 0
  037f41c  li 6, 20
  037f420  li 7, 14
  037f424  bl 0x37be68
  037f428  b 0x380248
  037f42c  sth 27, 412(30)
  037f430  ori 3, 31, 0
  037f434  sth 27, 404(30)
  037f438  bl 0x37c268
  037f43c  lbz 3, 112(31)
  037f440  rlwinm 3, 3, 0, 30, 30
  037f444  cmpwi 3, 0
  037f448  bt 2, 0x380248
  037f44c  lwz 3, 8324(28)
  037f450  cmpwi 3, 101
  037f454  bf 2, 0x37f494
  037f458  li 3, 12
  037f45c  lbz 4, 83(31)
  037f460  cmpwi 4, 0
  037f464  stb 3, 32(31)
  037f468  bt 2, 0x380248
  037f46c  li 3, 10
  037f470  bl 0x5e7e18
  037f474  nop
  037f478  ori 6, 3, 0
  037f47c  ori 3, 31, 0
  037f480  li 4, 0
  037f484  li 5, 0
  037f488  bl 0xfddc0
  037f48c  nop
  037f490  b 0x380248
  037f494  li 3, 19
  037f498  stb 3, 32(31)
  037f49c  stb 27, 414(30)
  037f4a0  lbz 3, 83(31)
  037f4a4  cmpwi 3, 6
  037f4a8  bt 2, 0x380248
  037f4ac  li 3, 10
  037f4b0  bl 0x5e7e18
  037f4b4  nop
  037f4b8  ori 6, 3, 0
  037f4bc  ori 3, 31, 0
  037f4c0  li 4, 6
  037f4c4  li 5, 0
  037f4c8  bl 0xfddc0
  037f4cc  nop
  037f4d0  b 0x380248
  037f4d4  sth 27, 412(30)
  037f4d8  ori 3, 31, 0
  037f4dc  sth 27, 404(30)
  037f4e0  bl 0x37c268
  037f4e4  lbz 3, 112(31)
  037f4e8  rlwinm 3, 3, 0, 30, 30
  037f4ec  cmpwi 3, 0
  037f4f0  bt 2, 0x380248
  037f4f4  lwz 3, 8324(28)
  037f4f8  cmpwi 3, 101
  037f4fc  bf 2, 0x37f53c
  037f500  li 3, 12
  037f504  lbz 4, 83(31)
  037f508  cmpwi 4, 0
  037f50c  stb 3, 32(31)
  037f510  bt 2, 0x380248
  037f514  li 3, 10
  037f518  bl 0x5e7e18
  037f51c  nop
  037f520  ori 6, 3, 0
  037f524  ori 3, 31, 0
  037f528  li 4, 0
  037f52c  li 5, 0
  037f530  bl 0xfddc0
  037f534  nop
  037f538  b 0x380248
  037f53c  li 3, 17
  037f540  stb 3, 32(31)
  037f544  stb 27, 414(30)
  037f548  lbz 3, 83(31)
  037f54c  cmpwi 3, 4
  037f550  bt 2, 0x380248
  037f554  li 3, 10
  037f558  bl 0x5e7e18
  037f55c  nop
  037f560  ori 6, 3, 0
  037f564  ori 3, 31, 0
  037f568  li 4, 4
  037f56c  li 5, 0
  037f570  bl 0xfddc0
  037f574  nop
  037f578  b 0x380248
  037f57c  sth 27, 412(30)
  037f580  ori 3, 31, 0
  037f584  sth 27, 404(30)
  037f588  bl 0x37c268
  037f58c  lbz 3, 414(30)
  037f590  cmpwi 3, 0
  037f594  bf 2, 0x37f740
  037f598  ori 3, 31, 0
  037f59c  bl 0xefe40
  037f5a0  nop
  037f5a4  lis 3, 56
  037f5a8  addi 3, 3, -9232
  037f5ac  lfs 2, 48(3)
  037f5b0  fcmpu 0, 1, 2
  037f5b4  bt 0, 0x37f740
  037f5b8  lis 3, 56
  037f5bc  addi 3, 3, -9232
  037f5c0  lfs 2, 28(3)
  037f5c4  fcmpu 0, 1, 2
  037f5c8  cror 6, 1, 2
  037f5cc  bt 6, 0x37f740
  037f5d0  li 5, 2
  037f5d4  addic 29, 1, 352
  037f5d8  addic 6, 1, 224
  037f5dc  ori 3, 31, 0
  037f5e0  stw 5, 352(1)
  037f5e4  li 4, 1
  037f5e8  ori 5, 29, 0
  037f5ec  bl 0xf1364
  037f5f0  nop
  037f5f4  addic 26, 1, 160
  037f5f8  ori 3, 31, 0
  037f5fc  li 4, 1
  037f600  ori 5, 29, 0
  037f604  ori 6, 26, 0
  037f608  bl 0xf1238
  037f60c  nop
  037f610  lis 25, 132
  037f614  lis 24, 114
  037f618  addic 3, 1, 128
  037f61c  addic 4, 1, 240
  037f620  lfs 1, 6820(25)
  037f624  lfs 2, -3052(24)
  037f628  fmuls 1, 1, 2
  037f62c  bl 0x5e7f98
  037f630  nop
  037f634  addic 23, 1, 144
  037f638  addic 29, 30, 256
  037f63c  ori 3, 23, 0
  037f640  ori 5, 26, 0
  037f644  ori 4, 29, 0
  037f648  bl 0x5e81f0
  037f64c  nop
  037f650  lfs 1, 6820(25)
  037f654  lfs 2, -3052(24)
  037f658  ori 3, 23, 0
  037f65c  ori 4, 23, 0
  037f660  fmuls 1, 1, 2
  037f664  bl 0x5e7f98
  037f668  nop
  037f66c  lfs 1, 128(1)
  037f670  lfs 2, 132(1)
  037f674  bl 0x5e8338
  037f678  nop
  037f67c  fmr 31, 1
  037f680  lfs 2, 148(1)
  037f684  lfs 1, 144(1)
  037f688  bl 0x5e8338
  037f68c  nop
  037f690  fmr 2, 1
  037f694  fmr 1, 31
  037f698  bl 0x5026a0
  037f69c  nop
  037f6a0  lis 3, 56
  037f6a4  addi 3, 3, -9232
  037f6a8  lfs 31, 32(3)
  037f6ac  fcmpu 0, 1, 31
  037f6b0  bt 1, 0x37f704
  037f6b4  addic 3, 1, 128
  037f6b8  bl 0x5e7ebc
  037f6bc  nop
  037f6c0  lfs 2, 136(1)
  037f6c4  bl 0x5e8338
  037f6c8  nop
  037f6cc  fmr 30, 1
  037f6d0  addic 3, 1, 144
  037f6d4  bl 0x5e7ebc
  037f6d8  nop
  037f6dc  lfs 2, 152(1)
  037f6e0  bl 0x5e8338
  037f6e4  nop
  037f6e8  fmr 2, 1
  037f6ec  fmr 1, 30
  037f6f0  bl 0x5026a0
  037f6f4  nop
  037f6f8  fcmpu 0, 1, 31
  037f6fc  cror 6, 0, 2
  037f700  bt 6, 0x37f720
  037f704  addic 5, 1, 160
  037f708  addic 4, 1, 128
  037f70c  ori 3, 31, 0
  037f710  ori 6, 29, 0
  037f714  bl 0x4c0208
  037f718  nop
  037f71c  b 0x37f738
  037f720  addic 5, 1, 160
  037f724  addic 4, 1, 144
  037f728  ori 3, 31, 0
  037f72c  ori 6, 29, 0
  037f730  bl 0x4c0208
  037f734  nop
  037f738  li 3, 1
  037f73c  stb 3, 414(30)
  037f740  lbz 3, 112(31)
  037f744  rlwinm 3, 3, 0, 30, 30
  037f748  cmpwi 3, 0
  037f74c  bt 2, 0x380248
  037f750  lwz 3, 8324(28)
  037f754  cmpwi 3, 101
  037f758  bf 2, 0x37f798
  037f75c  li 3, 12
  037f760  lbz 4, 83(31)
  037f764  cmpwi 4, 0
  037f768  stb 3, 32(31)
  037f76c  bt 2, 0x37f8fc
  037f770  li 3, 10
  037f774  bl 0x5e7e18
  037f778  nop
  037f77c  ori 6, 3, 0
  037f780  ori 3, 31, 0
  037f784  li 4, 0
  037f788  li 5, 0
  037f78c  bl 0xfddc0
  037f790  nop
  037f794  b 0x37f8fc
  037f798  lwz 3, 296(30)
  037f79c  cmpwi 3, -1
  037f7a0  bt 2, 0x37f814
  037f7a4  lis 4, 164
  037f7a8  slwi 3, 3, 8
  037f7ac  lwz 4, -28512(4)
  037f7b0  addc 3, 4, 3
  037f7b4  clrldi 3, 3, 32
  037f7b8  lwz 3, 120(3)
  037f7bc  lwz 3, 8(3)
  037f7c0  cmpwi 3, 0
  037f7c4  bf 2, 0x37f814
  037f7c8  ori 3, 31, 0
  037f7cc  bl 0x37c07c
  037f7d0  cmpwi 3, 0
  037f7d4  bt 2, 0x37f814
  037f7d8  li 3, 14
  037f7dc  lbz 4, 83(31)
  037f7e0  cmpwi 4, 14
  037f7e4  stb 3, 32(31)
  037f7e8  bt 2, 0x37f8fc
  037f7ec  li 3, 20
  037f7f0  bl 0x5e7e18
  037f7f4  nop
  037f7f8  ori 6, 3, 0
  037f7fc  ori 3, 31, 0
  037f800  li 4, 14
  037f804  li 5, 0
  037f808  bl 0xfddc0
  037f80c  nop
  037f810  b 0x37f8fc
  037f814  lfs 1, 208(30)
  037f818  lfs 31, 72(31)
  037f81c  lfs 2, 16(31)
  037f820  lfs 3, 212(30)
  037f824  fsubs 1, 1, 2
  037f828  lfs 4, 20(31)
  037f82c  fsubs 2, 3, 4
  037f830  bl 0x5e8338
  037f834  nop
  037f838  fmr 2, 1
  037f83c  fmr 1, 31
  037f840  bl 0x5026a0
  037f844  nop
  037f848  lis 3, 56
  037f84c  addi 3, 3, -9232
  037f850  lfs 2, 32(3)
  037f854  fcmpu 0, 1, 2
  037f858  cror 6, 0, 2
  037f85c  bt 6, 0x37f87c
  037f860  addic 5, 30, 208
  037f864  ori 3, 31, 0
  037f868  ori 4, 30, 0
  037f86c  li 6, 16
  037f870  li 7, 3
  037f874  bl 0x37be68
  037f878  b 0x37f8fc
  037f87c  lwz 3, 276(30)
  037f880  cmpwi 3, 2
  037f884  bf 2, 0x37f8c4
  037f888  li 3, 12
  037f88c  lbz 4, 83(31)
  037f890  cmpwi 4, 0
  037f894  stb 3, 32(31)
  037f898  bt 2, 0x37f8fc
  037f89c  li 3, 10
  037f8a0  bl 0x5e7e18
  037f8a4  nop
  037f8a8  ori 6, 3, 0
  037f8ac  ori 3, 31, 0
  037f8b0  li 4, 0
  037f8b4  li 5, 0
  037f8b8  bl 0xfddc0
  037f8bc  nop
  037f8c0  b 0x37f8fc
  037f8c4  li 3, 16
  037f8c8  lbz 4, 83(31)
  037f8cc  cmpwi 4, 3
  037f8d0  stb 3, 32(31)
  037f8d4  bt 2, 0x37f8fc
  037f8d8  li 3, 10
  037f8dc  bl 0x5e7e18
  037f8e0  nop
  037f8e4  ori 6, 3, 0
  037f8e8  ori 3, 31, 0
  037f8ec  li 4, 3
  037f8f0  li 5, 0
  037f8f4  bl 0xfddc0
  037f8f8  nop
  037f8fc  stb 27, 414(30)
  037f900  b 0x380248
  037f904  sth 27, 412(30)
  037f908  ori 3, 31, 0
  037f90c  sth 27, 404(30)
  037f910  bl 0x37c268
  037f914  lbz 3, 414(30)
  037f918  cmpwi 3, 0
  037f91c  bf 2, 0x37facc
  037f920  ori 3, 31, 0
  037f924  bl 0xefe40
  037f928  nop
  037f92c  lis 3, 56
  037f930  addi 3, 3, -9232
  037f934  lfs 2, 48(3)
  037f938  fcmpu 0, 1, 2
  037f93c  bt 0, 0x37facc
  037f940  lis 3, 56
  037f944  addi 3, 3, -9232
  037f948  lfs 2, 28(3)
  037f94c  fcmpu 0, 1, 2
  037f950  cror 6, 1, 2
  037f954  bt 6, 0x37facc
  037f958  li 4, 3
  037f95c  addic 29, 1, 356
  037f960  ori 3, 31, 0
  037f964  addic 6, 1, 288
  037f968  stw 4, 356(1)
  037f96c  ori 5, 29, 0
  037f970  li 4, 1
  037f974  bl 0xf1364
  037f978  nop
  037f97c  addic 26, 1, 208
  037f980  ori 3, 31, 0
  037f984  li 4, 1
  037f988  ori 5, 29, 0
  037f98c  ori 6, 26, 0
  037f990  bl 0xf1238
  037f994  nop
  037f998  lis 25, 132
  037f99c  lis 24, 114
  037f9a0  addic 3, 1, 176
  037f9a4  addic 4, 1, 304
  037f9a8  lfs 1, 6820(25)
  037f9ac  lfs 2, -3052(24)
  037f9b0  fmuls 1, 1, 2
  037f9b4  fneg 1, 1
  037f9b8  bl 0x5e7f98
  037f9bc  nop
  037f9c0  addic 23, 1, 192
  037f9c4  addic 29, 30, 256
  037f9c8  ori 3, 23, 0
  037f9cc  ori 5, 26, 0
  037f9d0  ori 4, 29, 0
  037f9d4  bl 0x5e81f0
  037f9d8  nop
  037f9dc  lfs 1, 6820(25)
  037f9e0  lfs 2, -3052(24)
  037f9e4  ori 3, 23, 0
  037f9e8  ori 4, 23, 0
  037f9ec  fmuls 1, 1, 2
  037f9f0  bl 0x5e7f98
  037f9f4  nop
  037f9f8  lfs 1, 176(1)
  037f9fc  lfs 2, 180(1)
  037fa00  bl 0x5e8338
  037fa04  nop
  037fa08  fmr 31, 1
  037fa0c  lfs 2, 196(1)
  037fa10  lfs 1, 192(1)
  037fa14  bl 0x5e8338
  037fa18  nop
  037fa1c  fmr 2, 1
  037fa20  fmr 1, 31
  037fa24  bl 0x5026a0
  037fa28  nop
  037fa2c  lis 3, 56
  037fa30  addi 3, 3, -9232
  037fa34  lfs 31, 32(3)
  037fa38  fcmpu 0, 1, 31
  037fa3c  bt 1, 0x37fa90
  037fa40  addic 3, 1, 176
  037fa44  bl 0x5e7ebc
  037fa48  nop
  037fa4c  lfs 2, 184(1)
  037fa50  bl 0x5e8338
  037fa54  nop
  037fa58  fmr 30, 1
  037fa5c  addic 3, 1, 192
  037fa60  bl 0x5e7ebc
  037fa64  nop
  037fa68  lfs 2, 200(1)
  037fa6c  bl 0x5e8338
  037fa70  nop
  037fa74  fmr 2, 1
  037fa78  fmr 1, 30
  037fa7c  bl 0x5026a0
  037fa80  nop
  037fa84  fcmpu 0, 1, 31
  037fa88  cror 6, 0, 2
  037fa8c  bt 6, 0x37faac
  037fa90  addic 5, 1, 208
  037fa94  addic 4, 1, 176
  037fa98  ori 3, 31, 0
  037fa9c  ori 6, 29, 0
  037faa0  bl 0x4c0208
  037faa4  nop
  037faa8  b 0x37fac4
  037faac  addic 5, 1, 208
  037fab0  addic 4, 1, 192
  037fab4  ori 3, 31, 0
  037fab8  ori 6, 29, 0
  037fabc  bl 0x4c0208
  037fac0  nop
  037fac4  li 3, 1
  037fac8  stb 3, 414(30)
  037facc  lbz 3, 112(31)
  037fad0  rlwinm 3, 3, 0, 30, 30
  037fad4  cmpwi 3, 0
  037fad8  bt 2, 0x380248
  037fadc  lwz 3, 8324(28)
  037fae0  cmpwi 3, 101
  037fae4  bf 2, 0x37fb24
  037fae8  li 3, 12
  037faec  lbz 4, 83(31)
  037faf0  cmpwi 4, 0
  037faf4  stb 3, 32(31)
  037faf8  bt 2, 0x37fc88
  037fafc  li 3, 10
  037fb00  bl 0x5e7e18
  037fb04  nop
  037fb08  ori 6, 3, 0
  037fb0c  ori 3, 31, 0
  037fb10  li 4, 0
  037fb14  li 5, 0
  037fb18  bl 0xfddc0
  037fb1c  nop
  037fb20  b 0x37fc88
  037fb24  lwz 3, 296(30)
  037fb28  cmpwi 3, -1
  037fb2c  bt 2, 0x37fba0
  037fb30  lis 4, 164
  037fb34  slwi 3, 3, 8
  037fb38  lwz 4, -28512(4)
  037fb3c  addc 3, 4, 3
  037fb40  clrldi 3, 3, 32
  037fb44  lwz 3, 120(3)
  037fb48  lwz 3, 8(3)
  037fb4c  cmpwi 3, 0
  037fb50  bf 2, 0x37fba0
  037fb54  ori 3, 31, 0
  037fb58  bl 0x37c07c
  037fb5c  cmpwi 3, 0
  037fb60  bt 2, 0x37fba0
  037fb64  li 3, 14
  037fb68  lbz 4, 83(31)
  037fb6c  cmpwi 4, 14
  037fb70  stb 3, 32(31)
  037fb74  bt 2, 0x37fc88
  037fb78  li 3, 20
  037fb7c  bl 0x5e7e18
  037fb80  nop
  037fb84  ori 6, 3, 0
  037fb88  ori 3, 31, 0
  037fb8c  li 4, 14
  037fb90  li 5, 0
  037fb94  bl 0xfddc0
  037fb98  nop
  037fb9c  b 0x37fc88
  037fba0  lfs 1, 208(30)
  037fba4  lfs 31, 72(31)
  037fba8  lfs 2, 16(31)
  037fbac  lfs 3, 212(30)
  037fbb0  fsubs 1, 1, 2
  037fbb4  lfs 4, 20(31)
  037fbb8  fsubs 2, 3, 4
  037fbbc  bl 0x5e8338
  037fbc0  nop
  037fbc4  fmr 2, 1
  037fbc8  fmr 1, 31
  037fbcc  bl 0x5026a0
  037fbd0  nop
  037fbd4  lis 3, 56
  037fbd8  addi 3, 3, -9232
  037fbdc  lfs 2, 32(3)
  037fbe0  fcmpu 0, 1, 2
  037fbe4  cror 6, 0, 2
  037fbe8  bt 6, 0x37fc08
  037fbec  addic 5, 30, 208
  037fbf0  ori 3, 31, 0
  037fbf4  ori 4, 30, 0
  037fbf8  li 6, 18
  037fbfc  li 7, 5
  037fc00  bl 0x37be68
  037fc04  b 0x37fc88
  037fc08  lwz 3, 276(30)
  037fc0c  cmpwi 3, 2
  037fc10  bf 2, 0x37fc50
  037fc14  li 3, 12
  037fc18  lbz 4, 83(31)
  037fc1c  cmpwi 4, 0
  037fc20  stb 3, 32(31)
  037fc24  bt 2, 0x37fc88
  037fc28  li 3, 10
  037fc2c  bl 0x5e7e18
  037fc30  nop
  037fc34  ori 6, 3, 0
  037fc38  ori 3, 31, 0
  037fc3c  li 4, 0
  037fc40  li 5, 0
  037fc44  bl 0xfddc0
  037fc48  nop
  037fc4c  b 0x37fc88
  037fc50  li 3, 18
  037fc54  lbz 4, 83(31)
  037fc58  cmpwi 4, 5
  037fc5c  stb 3, 32(31)
  037fc60  bt 2, 0x37fc88
  037fc64  li 3, 10
  037fc68  bl 0x5e7e18
  037fc6c  nop
  037fc70  ori 6, 3, 0
  037fc74  ori 3, 31, 0
  037fc78  li 4, 5
  037fc7c  li 5, 0
  037fc80  bl 0xfddc0
  037fc84  nop
  037fc88  stb 27, 414(30)
  037fc8c  b 0x380248
  037fc90  lwz 3, 8324(28)
  037fc94  cmpwi 3, 101
  037fc98  bf 2, 0x37fd14
  037fc9c  li 3, 9
  037fca0  lbz 4, 83(31)
  037fca4  cmpwi 4, 13
  037fca8  stb 3, 32(31)
  037fcac  bt 2, 0x37fcd4
  037fcb0  li 3, 10
  037fcb4  bl 0x5e7e18
  037fcb8  nop
  037fcbc  ori 6, 3, 0
  037fcc0  ori 3, 31, 0
  037fcc4  li 4, 13
  037fcc8  li 5, 0
  037fccc  bl 0xfddc0
  037fcd0  nop
  037fcd4  lwz 3, 296(30)
  037fcd8  cmpwi 3, -1
  037fcdc  bt 2, 0x380248
  037fce0  lis 4, 164
  037fce4  slwi 3, 3, 8
  037fce8  lwz 4, -28512(4)
  037fcec  addc 3, 4, 3
  037fcf0  clrldi 3, 3, 32
  037fcf4  lwz 4, 120(3)
  037fcf8  lwz 4, 8(4)
  037fcfc  cmpwi 4, 0
  037fd00  bt 2, 0x380248
  037fd04  li 4, -1
  037fd08  bl 0x364690
  037fd0c  nop
  037fd10  b 0x380248
  037fd14  lwz 3, 276(30)
  037fd18  cmpwi 1, 3, 2
  037fd1c  bt 6, 0x37fd48
  037fd20  lbz 3, 347(30)
  037fd24  cmpwi 3, 0
  037fd28  bf 2, 0x37fd48
  037fd2c  addic 5, 30, 208
  037fd30  ori 3, 31, 0
  037fd34  ori 4, 30, 0
  037fd38  li 6, 16
  037fd3c  li 7, 3
  037fd40  bl 0x37be68
  037fd44  b 0x380248
  037fd48  lhz 3, 342(30)
  037fd4c  cmpwi 3, 0
  037fd50  bf 2, 0x37fddc
  037fd54  li 3, 9
  037fd58  lbz 4, 83(31)
  037fd5c  cmpwi 4, 13
  037fd60  stb 3, 32(31)
  037fd64  bt 2, 0x37fd8c
  037fd68  li 3, 10
  037fd6c  bl 0x5e7e18
  037fd70  nop
  037fd74  ori 6, 3, 0
  037fd78  ori 3, 31, 0
  037fd7c  li 4, 13
  037fd80  li 5, 0
  037fd84  bl 0xfddc0
  037fd88  nop
  037fd8c  lwz 29, 296(30)
  037fd90  cmpwi 29, -1
  037fd94  bt 2, 0x380248
  037fd98  lis 3, 164
  037fd9c  slwi 4, 29, 8
  037fda0  lwz 3, -28512(3)
  037fda4  addc 29, 3, 4
  037fda8  clrldi 29, 29, 32
  037fdac  lwz 3, 120(29)
  037fdb0  lwz 3, 8(3)
  037fdb4  cmpwi 3, 0
  037fdb8  bt 2, 0x380248
  037fdbc  li 3, 30
  037fdc0  bl 0x5e7e18
  037fdc4  nop
  037fdc8  ori 4, 3, 0
  037fdcc  ori 3, 29, 0
  037fdd0  bl 0x364690
  037fdd4  nop
  037fdd8  b 0x380248
  037fddc  lbz 3, 346(30)
  037fde0  cmpwi 3, 0
  037fde4  bt 2, 0x37fe30
  037fde8  bt 6, 0x37fe14
  037fdec  lbz 3, 347(30)
  037fdf0  cmpwi 3, 0
  037fdf4  bf 2, 0x37fe14
  037fdf8  addic 5, 29, 16
  037fdfc  ori 3, 31, 0
  037fe00  ori 4, 30, 0
  037fe04  li 6, 16
  037fe08  li 7, 3
  037fe0c  bl 0x37be68
  037fe10  b 0x380248
  037fe14  addic 5, 29, 16
  037fe18  ori 3, 31, 0
  037fe1c  ori 4, 30, 0
  037fe20  li 6, 12
  037fe24  li 7, 0
  037fe28  bl 0x37be68
  037fe2c  b 0x380248
  037fe30  lwz 3, 292(30)
  037fe34  cmpwi 3, -1
  037fe38  bt 2, 0x380248
  037fe3c  lwz 4, 324(30)
  037fe40  cmpwi 4, 0
  037fe44  bt 2, 0x37fe78
  037fe48  lis 4, 165
  037fe4c  slwi 3, 3, 2
  037fe50  lwz 5, 316(30)
  037fe54  addic 4, 4, 7136
  037fe58  extsw 3, 3
  037fe5c  addic 5, 5, 1
  037fe60  lwzx 3, 4, 3
  037fe64  lwz 3, 0(3)
  037fe68  divw 4, 5, 3
  037fe6c  mullw 3, 4, 3
  037fe70  subc 3, 5, 3
  037fe74  stw 3, 316(30)
  037fe78  li 3, 60
  037fe7c  stw 27, 324(30)
  037fe80  bl 0x5e7e18
  037fe84  nop
  037fe88  li 4, 1
  037fe8c  stw 3, 332(30)
  037fe90  stb 4, 188(31)
  037fe94  lbz 3, 351(30)
  037fe98  cmpwi 3, 0
  037fe9c  bt 2, 0x37fedc
  037fea0  li 3, 13
  037fea4  lbz 4, 83(31)
  037fea8  cmpwi 4, 14
  037feac  stb 3, 32(31)
  037feb0  bt 2, 0x380248
  037feb4  li 3, 10
  037feb8  bl 0x5e7e18
  037febc  nop
  037fec0  ori 6, 3, 0
  037fec4  ori 3, 31, 0
  037fec8  li 4, 14
  037fecc  li 5, 0
  037fed0  bl 0xfddc0
  037fed4  nop
  037fed8  b 0x380248
  037fedc  li 3, 1
  037fee0  li 5, 11
  037fee4  li 6, 13
  037fee8  li 4, 14
  037feec  stb 3, 351(30)
  037fef0  stb 5, 32(31)
  037fef4  stb 6, 348(30)
  037fef8  stb 4, 349(30)
  037fefc  lbz 3, 83(31)
  037ff00  cmpwi 3, 1
  037ff04  bt 2, 0x380248
  037ff08  li 3, 10
  037ff0c  bl 0x5e7e18
  037ff10  nop
  037ff14  ori 6, 3, 0
  037ff18  ori 3, 31, 0
  037ff1c  li 4, 1
  037ff20  li 5, 0
  037ff24  bl 0xfddc0
  037ff28  nop
  037ff2c  b 0x380248
  037ff30  ori 3, 31, 0
  037ff34  addic 4, 30, 112
  037ff38  bl 0x10b030
  037ff3c  nop
  037ff40  rlwinm 4, 3, 0, 25, 25
  037ff44  cmpwi 4, 0
  037ff48  bt 2, 0x38014c
  037ff4c  lis 3, 56
  037ff50  addic 29, 31, 16
  037ff54  addi 3, 3, -9232
  037ff58  li 4, 0
  037ff5c  lfs 31, 52(3)
  037ff60  ori 3, 29, 0
  037ff64  fmr 1, 31
  037ff68  bl 0xffb70
  037ff6c  nop
  037ff70  bl 0x60780
  037ff74  nop
  037ff78  cmpwi 3, -1
  037ff7c  bf 2, 0x380090
  037ff80  lis 3, 56
  037ff84  lfs 1, 360(30)
  037ff88  addi 3, 3, -9232
  037ff8c  lfs 2, 56(3)
  037ff90  lfs 3, 24(31)
  037ff94  fsubs 1, 1, 2
  037ff98  fcmpu 0, 3, 1
  037ff9c  cror 6, 0, 2
  037ffa0  bt 6, 0x380090
  037ffa4  lwz 3, 8324(28)
  037ffa8  cmpwi 3, 101
  037ffac  bf 2, 0x37ffec
  037ffb0  li 3, 12
  037ffb4  lbz 4, 83(31)
  037ffb8  cmpwi 4, 0
  037ffbc  stb 3, 32(31)
  037ffc0  bt 2, 0x380478
  037ffc4  li 3, 10
  037ffc8  bl 0x5e7e18
  037ffcc  nop
  037ffd0  ori 6, 3, 0
  037ffd4  ori 3, 31, 0
  037ffd8  li 4, 0
  037ffdc  li 5, 0
  037ffe0  bl 0xfddc0
  037ffe4  nop
  037ffe8  b 0x380478
  037ffec  li 3, 1
  037fff0  stb 3, 188(31)
  037fff4  lbz 3, 351(30)
  037fff8  cmpwi 3, 0
  037fffc  bt 2, 0x38003c
  0380000  li 3, 16
  0380004  lbz 4, 83(31)
  0380008  cmpwi 4, 3
  038000c  stb 3, 32(31)
  0380010  bt 2, 0x380478
  0380014  li 3, 10
  0380018  bl 0x5e7e18
  038001c  nop
  0380020  ori 6, 3, 0
  0380024  ori 3, 31, 0
  0380028  li 4, 3
  038002c  li 5, 0
  0380030  bl 0xfddc0
  0380034  nop
  0380038  b 0x380478
  038003c  li 3, 1
  0380040  li 5, 11
  0380044  li 6, 16
  0380048  li 4, 3
  038004c  stb 3, 351(30)
  0380050  stb 5, 32(31)
  0380054  stb 6, 348(30)
  0380058  stb 4, 349(30)
  038005c  lbz 3, 83(31)
  0380060  cmpwi 3, 1
  0380064  bt 2, 0x380478
  0380068  li 3, 10
  038006c  bl 0x5e7e18
  0380070  nop
  0380074  ori 6, 3, 0
  0380078  ori 3, 31, 0
  038007c  li 4, 1
  0380080  li 5, 0
  0380084  bl 0xfddc0
  0380088  nop
  038008c  b 0x380478
  0380090  lwz 3, 300(30)
  0380094  cmpwi 3, -1
  0380098  bt 2, 0x3800c0
  038009c  lis 4, 164
  03800a0  slwi 3, 3, 8
  03800a4  lwz 4, -28512(4)
  03800a8  addc 3, 4, 3
  03800ac  clrldi 3, 3, 32
  03800b0  bl 0x459ff0
  03800b4  nop
  03800b8  li 3, -1
  03800bc  stw 3, 300(30)
  03800c0  lwz 3, 336(30)
  03800c4  cmpwi 3, -1
  03800c8  bt 2, 0x3800f0
  03800cc  lis 4, 164
  03800d0  slwi 3, 3, 8
  03800d4  lwz 4, -28512(4)
  03800d8  addc 3, 4, 3
  03800dc  clrldi 3, 3, 32
  03800e0  bl 0x459ff0
  03800e4  nop
  03800e8  li 3, -1
  03800ec  stw 3, 336(30)
  03800f0  li 3, 13
  03800f4  li 4, 0
  03800f8  ori 5, 31, 0
  03800fc  bl 0x15d12c
  0380100  nop
  0380104  lis 3, 56
  0380108  fmr 1, 31
  038010c  ori 4, 29, 0
  0380110  addi 5, 3, -9232
  0380114  ori 3, 31, 0
  0380118  li 6, -1
  038011c  lfs 2, 60(5)
  0380120  bl 0x10fb28
  0380124  nop
  0380128  ori 3, 31, 0
  038012c  li 4, 0
  0380130  li 5, -1
  0380134  bl 0xfd8d0
  0380138  nop
  038013c  ori 3, 31, 0
  0380140  bl 0xefb38
  0380144  nop
  0380148  b 0x380478
  038014c  li 4, 288
  0380150  and 3, 3, 4
  0380154  cmpwi 3, 0
  0380158  bt 2, 0x380248
  038015c  ori 3, 31, 0
  0380160  bl 0xefb38
  0380164  nop
  0380168  b 0x380478
  038016c  addic 4, 30, 112
  0380170  ori 3, 31, 0
  0380174  bl 0x10b030
  0380178  nop
  038017c  li 4, 352
  0380180  and 3, 3, 4
  0380184  cmpwi 3, 0
  0380188  bt 2, 0x380248
  038018c  lwz 3, 300(30)
  0380190  cmpwi 3, -1
  0380194  bt 2, 0x3801bc
  0380198  lis 4, 164
  038019c  slwi 3, 3, 8
  03801a0  lwz 4, -28512(4)
  03801a4  addc 3, 4, 3
  03801a8  clrldi 3, 3, 32
  03801ac  bl 0x459ff0
  03801b0  nop
  03801b4  li 3, -1
  03801b8  stw 3, 300(30)
  03801bc  lwz 3, 336(30)
  03801c0  cmpwi 3, -1
  03801c4  bt 2, 0x3801ec
  03801c8  lis 4, 164
  03801cc  slwi 3, 3, 8
  03801d0  lwz 4, -28512(4)
  03801d4  addc 3, 4, 3
  03801d8  clrldi 3, 3, 32
  03801dc  bl 0x459ff0
  03801e0  nop
  03801e4  li 3, -1
  03801e8  stw 3, 336(30)
  03801ec  li 4, 0
  03801f0  li 3, 13
  03801f4  ori 5, 31, 0
  03801f8  bl 0x15d12c
  03801fc  nop
  0380200  lis 4, 56
  0380204  ori 3, 31, 0
  0380208  addi 5, 4, -9232
  038020c  li 6, -1
  0380210  addic 4, 31, 16
  0380214  lfs 1, 52(5)
  0380218  lfs 2, 60(5)
  038021c  bl 0x10fb28
  0380220  nop
  0380224  ori 3, 31, 0
  0380228  li 4, 0
  038022c  li 5, -1
  0380230  bl 0xfd8d0
  0380234  nop
  0380238  ori 3, 31, 0
  038023c  bl 0xefb38
  0380240  nop
  0380244  b 0x380478
  0380248  ori 3, 31, 0
  038024c  bl 0x37b5b0
  0380250  lhz 3, 342(30)
  0380254  ori 29, 27, 0
  0380258  cmpwi 3, 0
  038025c  bf 2, 0x38026c
  0380260  lwz 3, 276(30)
  0380264  cmpwi 3, 2
  0380268  bt 2, 0x380274
  038026c  li 29, 2
  0380270  b 0x380284
  0380274  lhz 3, 344(30)
  0380278  cmpwi 3, 0
  038027c  bt 2, 0x380284
  0380280  li 29, 1
  0380284  lis 3, 268
  0380288  lis 4, 161
  038028c  lwz 5, 20904(3)
  0380290  lwz 3, 1808(4)
  0380294  cmpw 5, 3
  0380298  bf 2, 0x3802ac
  038029c  lhz 4, 8928(28)
  03802a0  extsh 4, 4
  03802a4  cmpw 4, 29
  03802a8  bf 0, 0x3802b8
  03802ac  lis 4, 268
  03802b0  stw 3, 20904(4)
  03802b4  sth 29, 8928(28)
  03802b8  li 3, 170
  03802bc  bl 0x5e7e18
  03802c0  nop
  03802c4  cmpwi 29, 2
  03802c8  ori 28, 3, 0
  03802cc  bf 2, 0x3802e4
  03802d0  li 3, 50
  03802d4  bl 0x5e7e18
  03802d8  nop
  03802dc  ori 28, 3, 0
  03802e0  b 0x3802fc
  03802e4  cmpwi 29, 1
  03802e8  bf 2, 0x3802fc
  03802ec  li 3, 90
  03802f0  bl 0x5e7e18
  03802f4  nop
  03802f8  ori 28, 3, 0
  03802fc  ori 3, 28, 0
  0380300  bl 0x502730
  0380304  nop
  0380308  lis 3, 161
  038030c  lwz 3, 1808(3)
  0380310  divw 4, 3, 28
  0380314  mullw 4, 4, 28
  0380318  subc 3, 3, 4
  038031c  extsw 3, 3
  0380320  std 3, 360(1)
  0380324  lis 3, 56
  0380328  addi 28, 3, -9232
  038032c  lfs 2, 16(28)
  0380330  lfd 3, 360(1)
  0380334  fcfid 3, 3
  0380338  frsp 3, 3
  038033c  fdivs 1, 3, 1
  0380340  lfs 3, 64(28)
  0380344  lfs 4, 68(28)
  0380348  fmuls 1, 1, 2
  038034c  fmadds 1, 1, 3, 4
  0380350  bl 0x5e8128
  0380354  nop
  0380358  lfs 2, 72(28)
  038035c  fmr 31, 1
  0380360  fmr 1, 2
  0380364  fmuls 1, 31, 1
  0380368  bl 0x502758
  038036c  nop
  0380370  lfs 1, 76(28)
  0380374  ori 26, 3, 0
  0380378  fmuls 1, 31, 1
  038037c  bl 0x502758
  0380380  nop
  0380384  lfs 1, 80(28)
  0380388  ori 28, 3, 0
  038038c  fmuls 1, 31, 1
  0380390  bl 0x502758
  0380394  nop
  0380398  addic 4, 26, 50
  038039c  li 9, 255
  03803a0  extsw 7, 4
  03803a4  addic 6, 28, 180
  03803a8  ori 11, 3, 0
  03803ac  li 8, 255
  03803b0  subc 3, 9, 7
  03803b4  extsw 5, 6
  03803b8  li 10, 255
  03803bc  subc 8, 8, 4
  03803c0  sradi 7, 3, 63
  03803c4  subc 5, 10, 5
  03803c8  li 9, 255
  03803cc  lwz 3, 144(31)
  03803d0  and 7, 7, 8
  03803d4  subc 8, 9, 6
  03803d8  sradi 5, 5, 63
  03803dc  addic 28, 11, 20
  03803e0  and 5, 5, 8
  03803e4  cmpwi 29, 2
  03803e8  addc 6, 6, 5
  03803ec  addc 4, 4, 7
  03803f0  slwi 28, 28, 16
  03803f4  ori 5, 6, 0
  03803f8  bf 2, 0x380408
  03803fc  srawi 5, 4, 1
  0380400  ori 4, 6, 0
  0380404  addze 5, 5
  0380408  slwi 5, 5, 8
  038040c  lis 6, 56
  0380410  or 4, 5, 4
  0380414  addi 6, 6, -9232
  0380418  extsw 3, 3
  038041c  or 4, 4, 28
  0380420  lis 5, -32768
  0380424  or 4, 4, 5
  0380428  lfs 1, 84(6)
  038042c  extsw 4, 4
  0380430  bl 0x5027bc
  0380434  nop
  0380438  stw 3, 144(31)
  038043c  addic 4, 27, 4
  0380440  addic 5, 30, 672
  0380444  extsw 4, 4
  0380448  ori 3, 31, 0
  038044c  bl 0xf1114
  0380450  nop
  0380454  addic 27, 27, 1
  0380458  addic 30, 30, 16
  038045c  cmpwi 27, 3
  0380460  bt 0, 0x38043c
  0380464  lis 3, 113
  0380468  ori 4, 31, 0
  038046c  addic 3, 3, -13384
  0380470  bl 0x6d720
  0380474  nop
  0380478  ld 0, 480(1)
  038047c  mtlr 0
  0380480  lfd 30, 448(1)
  0380484  lfd 31, 456(1)
  0380488  ld 23, 376(1)
  038048c  ld 24, 384(1)
  0380490  ld 25, 392(1)
  0380494  ld 26, 400(1)
  0380498  ld 27, 408(1)
  038049c  ld 28, 416(1)
  03804a0  ld 29, 424(1)
  03804a4  ld 30, 432(1)
  03804a8  ld 31, 440(1)
  03804ac  addi 1, 1, 464
  03804b0  blr
