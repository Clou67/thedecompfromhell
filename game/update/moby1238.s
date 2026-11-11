# game/update/moby1238.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1238_0021a074:   # 0x21a074, 0x14 bytes
  021a074  lis 3, 119
  021a078  lis 4, 1
  021a07c  addic 3, 3, -30692
  021a080  stw 4, 72(3)
  021a084  blr

FUN_0021a098:   # 0x21a098, 0x4d8 bytes
  021a098  stdu 1, -256(1)
  021a09c  mflr 0
  021a0a0  std 0, 272(1)
  021a0a4  stfd 31, 248(1)
  021a0a8  std 31, 240(1)
  021a0ac  ori 31, 3, 0
  021a0b0  std 29, 224(1)
  021a0b4  li 3, 1238
  021a0b8  fmr 31, 1
  021a0bc  std 30, 232(1)
  021a0c0  ori 29, 5, 0
  021a0c4  std 28, 216(1)
  021a0c8  std 27, 208(1)
  021a0cc  ori 30, 4, 0
  021a0d0  bl 0xefa28
  021a0d4  nop
  021a0d8  ori 28, 3, 0
  021a0dc  cmpwi 28, 0
  021a0e0  bt 2, 0x21a544
  021a0e4  li 3, 255
  021a0e8  lis 5, 34
  021a0ec  li 4, 127
  021a0f0  li 6, 1
  021a0f4  addi 5, 5, -24440
  021a0f8  li 7, 0
  021a0fc  stb 3, 48(28)
  021a100  sth 4, 50(28)
  021a104  stb 6, 49(28)
  021a108  lfs 4, 0(5)
  021a10c  stw 7, 64(28)
  021a110  lfs 1, 4(30)
  021a114  lfs 2, 0(30)
  021a118  fmuls 1, 1, 1
  021a11c  lwz 4, 8(30)
  021a120  lis 3, 115
  021a124  rlwinm 4, 4, 3, 29, 29
  021a128  addic 3, 3, 22784
  021a12c  fmadds 1, 2, 2, 1
  021a130  lfs 2, 8(30)
  021a134  lwz 27, 120(28)
  021a138  fabs 5, 2
  021a13c  fsqrts 1, 1
  021a140  fabs 3, 1
  021a144  stfs 1, 116(1)
  021a148  fsubs 1, 3, 5
  021a14c  stfs 1, 120(1)
  021a150  lwz 6, 116(1)
  021a154  lfs 1, 116(1)
  021a158  lfs 2, 4(5)
  021a15c  fabs 6, 1
  021a160  lwz 5, 120(1)
  021a164  lfs 1, 120(1)
  021a168  rlwimi 4, 5, 2, 30, 30
  021a16c  fsub 7, 1, 4
  021a170  fsub 8, 1, 4
  021a174  rlwimi 4, 6, 4, 28, 28
  021a178  ori 5, 3, 0
  021a17c  rlwimi 5, 4, 2, 26, 28
  021a180  slwi 4, 4, 2
  021a184  clrldi 5, 5, 32
  021a188  fsel 6, 7, 6, 5
  021a18c  lfsx 1, 3, 4
  021a190  fsel 5, 8, 5, 3
  021a194  lfs 3, 4(5)
  021a198  fcmpu 0, 6, 4
  021a19c  bt 1, 0x21a1a8
  021a1a0  fmr 1, 4
  021a1a4  b 0x21a2c0
  021a1a8  fsubs 7, 5, 6
  021a1ac  fadds 5, 5, 6
  021a1b0  addic 4, 1, 16
  021a1b4  li 8, 2
  021a1b8  addic 5, 4, 140
  021a1bc  addic 6, 4, 156
  021a1c0  mtctr 8
  021a1c4  fdivs 5, 7, 5
  021a1c8  fmuls 6, 5, 5
  021a1cc  stfs 5, 168(1)
  021a1d0  stfs 5, 160(1)
  021a1d4  stfs 5, 164(1)
  021a1d8  stfs 5, 156(1)
  021a1dc  lfs 8, 168(1)
  021a1e0  lfs 9, 160(1)
  021a1e4  lfs 10, 164(1)
  021a1e8  fmuls 7, 6, 6
  021a1ec  fmuls 9, 9, 6
  021a1f0  fmuls 8, 8, 7
  021a1f4  fmuls 5, 7, 7
  021a1f8  fmuls 7, 10, 7
  021a1fc  stfs 9, 160(1)
  021a200  fmuls 6, 8, 6
  021a204  stfs 7, 164(1)
  021a208  stfs 6, 168(1)
  021a20c  lfs 6, 140(4)
  021a210  fmuls 6, 6, 5
  021a214  stfs 6, 156(4)
  021a218  lfs 6, 4(5)
  021a21c  addic 4, 4, 8
  021a220  addic 5, 5, 8
  021a224  fmuls 6, 6, 5
  021a228  stfs 6, 4(6)
  021a22c  addic 6, 6, 8
  021a230  bdnz 0x21a20c
  021a234  ori 4, 1, 0
  021a238  lis 5, 115
  021a23c  li 9, 4
  021a240  addic 6, 4, 156
  021a244  addic 5, 5, 22752
  021a248  ori 7, 6, 0
  021a24c  mtctr 9
  021a250  lfs 5, 156(4)
  021a254  lfs 6, 0(5)
  021a258  fmuls 5, 5, 6
  021a25c  lfs 6, 4(5)
  021a260  addic 5, 5, 8
  021a264  stfs 5, 156(4)
  021a268  lfs 5, 4(6)
  021a26c  addic 4, 4, 8
  021a270  fmuls 5, 5, 6
  021a274  stfs 5, 4(6)
  021a278  addic 6, 6, 8
  021a27c  bdnz 0x21a250
  021a280  fmr 5, 4
  021a284  ori 4, 1, 0
  021a288  mtctr 8
  021a28c  lfs 6, 156(4)
  021a290  fadds 5, 5, 6
  021a294  addic 4, 4, 16
  021a298  lfs 6, 4(7)
  021a29c  lfs 7, 8(7)
  021a2a0  lfs 8, 12(7)
  021a2a4  addic 7, 7, 16
  021a2a8  fadds 5, 5, 6
  021a2ac  fadds 5, 5, 7
  021a2b0  fadds 5, 5, 8
  021a2b4  bdnz 0x21a28c
  021a2b8  fadds 5, 5, 2
  021a2bc  fmadds 1, 5, 1, 3
  021a2c0  fneg 1, 1
  021a2c4  stfs 1, 68(28)
  021a2c8  lwz 4, 0(30)
  021a2cc  lwz 5, 4(30)
  021a2d0  lfs 1, 0(30)
  021a2d4  lfs 3, 4(30)
  021a2d8  fabs 5, 1
  021a2dc  fabs 7, 3
  021a2e0  rlwinm 5, 5, 3, 29, 29
  021a2e4  fsubs 1, 5, 7
  021a2e8  stfs 1, 112(1)
  021a2ec  lwz 6, 112(1)
  021a2f0  lfs 1, 112(1)
  021a2f4  rlwimi 5, 6, 2, 30, 30
  021a2f8  fsub 6, 1, 4
  021a2fc  fsub 8, 1, 4
  021a300  rlwimi 5, 4, 4, 28, 28
  021a304  ori 4, 3, 0
  021a308  rlwimi 4, 5, 2, 26, 28
  021a30c  slwi 5, 5, 2
  021a310  clrldi 4, 4, 32
  021a314  fsel 6, 6, 5, 7
  021a318  lfsx 1, 3, 5
  021a31c  fsel 5, 8, 7, 5
  021a320  lfs 3, 4(4)
  021a324  fcmpu 0, 6, 4
  021a328  bt 1, 0x21a330
  021a32c  b 0x21a444
  021a330  fsubs 7, 5, 6
  021a334  fadds 5, 5, 6
  021a338  addic 3, 1, 16
  021a33c  li 7, 2
  021a340  addic 4, 3, 108
  021a344  addic 5, 3, 124
  021a348  mtctr 7
  021a34c  fdivs 5, 7, 5
  021a350  fmuls 6, 5, 5
  021a354  stfs 5, 136(1)
  021a358  stfs 5, 128(1)
  021a35c  stfs 5, 132(1)
  021a360  stfs 5, 124(1)
  021a364  lfs 8, 136(1)
  021a368  lfs 9, 128(1)
  021a36c  lfs 10, 132(1)
  021a370  fmuls 7, 6, 6
  021a374  fmuls 9, 9, 6
  021a378  fmuls 8, 8, 7
  021a37c  fmuls 5, 7, 7
  021a380  fmuls 7, 10, 7
  021a384  stfs 9, 128(1)
  021a388  fmuls 6, 8, 6
  021a38c  stfs 7, 132(1)
  021a390  stfs 6, 136(1)
  021a394  lfs 6, 108(3)
  021a398  fmuls 6, 6, 5
  021a39c  stfs 6, 124(3)
  021a3a0  lfs 6, 4(4)
  021a3a4  addic 3, 3, 8
  021a3a8  addic 4, 4, 8
  021a3ac  fmuls 6, 6, 5
  021a3b0  stfs 6, 4(5)
  021a3b4  addic 5, 5, 8
  021a3b8  bdnz 0x21a394
  021a3bc  ori 3, 1, 0
  021a3c0  lis 4, 115
  021a3c4  li 8, 4
  021a3c8  addic 5, 3, 124
  021a3cc  addic 4, 4, 22752
  021a3d0  ori 6, 5, 0
  021a3d4  mtctr 8
  021a3d8  lfs 5, 124(3)
  021a3dc  lfs 6, 0(4)
  021a3e0  fmuls 5, 5, 6
  021a3e4  lfs 6, 4(4)
  021a3e8  addic 4, 4, 8
  021a3ec  stfs 5, 124(3)
  021a3f0  lfs 5, 4(5)
  021a3f4  addic 3, 3, 8
  021a3f8  fmuls 5, 5, 6
  021a3fc  stfs 5, 4(5)
  021a400  addic 5, 5, 8
  021a404  bdnz 0x21a3d8
  021a408  ori 3, 1, 0
  021a40c  mtctr 7
  021a410  lfs 5, 124(3)
  021a414  fadds 4, 4, 5
  021a418  lfs 5, 4(6)
  021a41c  addic 3, 3, 16
  021a420  lfs 6, 8(6)
  021a424  lfs 7, 12(6)
  021a428  addic 6, 6, 16
  021a42c  fadds 4, 4, 5
  021a430  fadds 4, 4, 6
  021a434  fadds 4, 4, 7
  021a438  bdnz 0x21a410
  021a43c  fadds 4, 4, 2
  021a440  fmadds 4, 4, 1, 3
  021a444  stfs 4, 72(28)
  021a448  lfs 1, 0(31)
  021a44c  lis 3, 34
  021a450  stfs 1, 16(28)
  021a454  lfs 1, 4(31)
  021a458  stfs 1, 20(28)
  021a45c  lfs 1, 8(31)
  021a460  stfs 1, 24(28)
  021a464  lfs 1, 12(31)
  021a468  stfs 1, 28(28)
  021a46c  lfs 1, 0(31)
  021a470  stfs 1, 16(27)
  021a474  lfs 1, 4(31)
  021a478  stfs 1, 20(27)
  021a47c  lfs 1, 8(31)
  021a480  stfs 1, 24(27)
  021a484  lfs 1, 12(31)
  021a488  addi 31, 3, -24440
  021a48c  stfs 1, 28(27)
  021a490  lfs 1, 0(30)
  021a494  lis 3, 114
  021a498  stfs 1, 0(27)
  021a49c  lfs 1, 4(30)
  021a4a0  stfs 1, 4(27)
  021a4a4  lfs 1, 8(30)
  021a4a8  stfs 1, 8(27)
  021a4ac  lfs 1, 12(30)
  021a4b0  li 4, 1
  021a4b4  stfs 1, 12(27)
  021a4b8  lfs 1, 8(31)
  021a4bc  li 5, 0
  021a4c0  lfs 2, -3056(3)
  021a4c4  ori 3, 28, 0
  021a4c8  fmuls 1, 2, 1
  021a4cc  fctiwz 1, 1
  021a4d0  stfd 1, 192(1)
  021a4d4  lwz 6, 196(1)
  021a4d8  extsw 6, 6
  021a4dc  bl 0xfddc0
  021a4e0  nop
  021a4e4  li 3, 520
  021a4e8  li 4, 1
  021a4ec  li 5, 16
  021a4f0  sth 3, 52(28)
  021a4f4  stw 29, 32(27)
  021a4f8  stfs 31, 40(27)
  021a4fc  stw 4, 36(27)
  021a500  stb 5, 35(28)
  021a504  lfs 1, 4(27)
  021a508  lfs 2, 0(27)
  021a50c  fmuls 1, 1, 1
  021a510  lfs 3, 8(27)
  021a514  fmadds 1, 2, 2, 1
  021a518  lfs 2, 12(31)
  021a51c  fmadds 1, 3, 3, 1
  021a520  fsqrts 1, 1
  021a524  fdivs 1, 31, 1
  021a528  fadds 1, 1, 2
  021a52c  bl 0x502758
  021a530  nop
  021a534  stw 3, 44(27)
  021a538  ori 3, 28, 0
  021a53c  bl 0xf31a8
  021a540  nop
  021a544  ori 3, 28, 0
  021a548  ld 0, 272(1)
  021a54c  mtlr 0
  021a550  lfd 31, 248(1)
  021a554  ld 27, 208(1)
  021a558  ld 28, 216(1)
  021a55c  ld 29, 224(1)
  021a560  ld 30, 232(1)
  021a564  ld 31, 240(1)
  021a568  addi 1, 1, 256
  021a56c  blr

UpdateMoby_1238:   # 0x21a5a0, 0x9a4 bytes
  021a5a0  stdu 1, -400(1)
  021a5a4  mflr 0
  021a5a8  std 0, 416(1)
  021a5ac  stfd 22, 320(1)
  021a5b0  stfd 23, 328(1)
  021a5b4  stfd 24, 336(1)
  021a5b8  stfd 25, 344(1)
  021a5bc  stfd 26, 352(1)
  021a5c0  stfd 27, 360(1)
  021a5c4  stfd 28, 368(1)
  021a5c8  stfd 29, 376(1)
  021a5cc  stfd 30, 384(1)
  021a5d0  stfd 31, 392(1)
  021a5d4  std 30, 304(1)
  021a5d8  lwz 30, 120(3)
  021a5dc  lfs 1, 16(3)
  021a5e0  lfs 2, 20(3)
  021a5e4  stfs 1, 112(1)
  021a5e8  lfs 3, 24(3)
  021a5ec  stfs 2, 116(1)
  021a5f0  lfs 4, 28(3)
  021a5f4  stfs 3, 120(1)
  021a5f8  stfs 4, 124(1)
  021a5fc  lfs 4, 0(30)
  021a600  fadds 1, 1, 4
  021a604  lis 4, 34
  021a608  std 31, 312(1)
  021a60c  addi 4, 4, -23184
  021a610  ori 31, 3, 0
  021a614  stfs 1, 16(3)
  021a618  lfs 4, 4(30)
  021a61c  fadds 2, 2, 4
  021a620  stfs 2, 20(3)
  021a624  lfs 4, 8(30)
  021a628  fadds 3, 3, 4
  021a62c  stfs 3, 24(3)
  021a630  lfs 6, 0(30)
  021a634  stfs 6, 128(1)
  021a638  lfs 7, 4(30)
  021a63c  fmuls 5, 7, 7
  021a640  stfs 7, 132(1)
  021a644  lfs 4, 8(30)
  021a648  stfs 4, 136(1)
  021a64c  lfs 4, 12(30)
  021a650  stfs 4, 140(1)
  021a654  fmadds 5, 6, 6, 5
  021a658  lfs 31, 0(4)
  021a65c  fmr 30, 31
  021a660  fsqrts 8, 5
  021a664  fmr 4, 30
  021a668  std 29, 296(1)
  021a66c  std 28, 288(1)
  021a670  std 27, 280(1)
  021a674  std 26, 272(1)
  021a678  std 25, 264(1)
  021a67c  fcmpu 0, 8, 4
  021a680  bt 2, 0x21a6d0
  021a684  frsqrte 4, 5
  021a688  lis 3, 34
  021a68c  addi 3, 3, -23184
  021a690  lfs 8, 4(3)
  021a694  lfs 9, 8(3)
  021a698  fmuls 10, 5, 4
  021a69c  fmuls 11, 8, 4
  021a6a0  fnmsubs 10, 10, 4, 9
  021a6a4  fmadds 4, 10, 11, 4
  021a6a8  fmuls 10, 5, 4
  021a6ac  fmuls 11, 8, 4
  021a6b0  fnmsubs 10, 10, 4, 9
  021a6b4  fmadds 4, 10, 11, 4
  021a6b8  fmuls 5, 5, 4
  021a6bc  fmuls 8, 8, 4
  021a6c0  fnmsubs 5, 5, 4, 9
  021a6c4  fmadds 30, 5, 8, 4
  021a6c8  fmuls 4, 6, 30
  021a6cc  fmuls 30, 7, 30
  021a6d0  lis 4, 151
  021a6d4  lis 3, 34
  021a6d8  stfs 4, 128(1)
  021a6dc  addic 4, 4, -25376
  021a6e0  stfs 30, 132(1)
  021a6e4  addi 3, 3, -23184
  021a6e8  lis 5, 16256
  021a6ec  lbz 6, 8182(4)
  021a6f0  lfs 30, 8(3)
  021a6f4  cmpwi 6, 0
  021a6f8  stw 5, 136(1)
  021a6fc  bf 1, 0x21a97c
  021a700  lis 3, 18164
  021a704  lwz 5, 12(30)
  021a708  ori 3, 3, 54068
  021a70c  cmpw 5, 3
  021a710  bt 2, 0x21a97c
  021a714  lfs 4, 132(4)
  021a718  lfs 5, 128(4)
  021a71c  fsubs 2, 2, 4
  021a720  fsubs 1, 1, 5
  021a724  lfs 4, 136(4)
  021a728  fsubs 3, 3, 4
  021a72c  lis 3, 34
  021a730  fmuls 2, 2, 2
  021a734  addi 3, 3, -23184
  021a738  fmadds 1, 1, 1, 2
  021a73c  lfs 2, 12(3)
  021a740  fmadds 1, 3, 3, 1
  021a744  fsqrts 1, 1
  021a748  fcmpu 0, 1, 2
  021a74c  cror 6, 1, 2
  021a750  bt 6, 0x21a97c
  021a754  lfs 1, 4(30)
  021a758  lfs 2, 0(30)
  021a75c  fmuls 3, 1, 1
  021a760  lfs 4, 8(30)
  021a764  lis 3, 34
  021a768  addi 3, 3, -23184
  021a76c  fmadds 3, 2, 2, 3
  021a770  lfs 5, 4(3)
  021a774  li 3, 0
  021a778  fmadds 3, 4, 4, 3
  021a77c  lis 6, 18164
  021a780  li 5, 5
  021a784  fsqrts 3, 3
  021a788  ori 6, 6, 54068
  021a78c  fdivs 5, 5, 3
  021a790  fsub 6, 31, 3
  021a794  fsub 7, 31, 3
  021a798  fsub 8, 31, 3
  021a79c  fsub 9, 3, 31
  021a7a0  fsub 10, 3, 31
  021a7a4  fsub 3, 3, 31
  021a7a8  fmuls 1, 1, 5
  021a7ac  fmuls 2, 2, 5
  021a7b0  fmuls 4, 4, 5
  021a7b4  fsel 5, 6, 31, 1
  021a7b8  fsel 6, 7, 31, 2
  021a7bc  fsel 7, 8, 31, 4
  021a7c0  fsel 1, 9, 5, 1
  021a7c4  fsel 2, 10, 6, 2
  021a7c8  fsel 3, 3, 7, 4
  021a7cc  stfs 1, 4(30)
  021a7d0  stfs 2, 0(30)
  021a7d4  stfs 3, 8(30)
  021a7d8  lfs 1, 16(31)
  021a7dc  fsubs 1, 1, 2
  021a7e0  lfs 2, 20(31)
  021a7e4  lfs 3, 24(31)
  021a7e8  stfs 1, 16(31)
  021a7ec  lfs 1, 4(30)
  021a7f0  fsubs 1, 2, 1
  021a7f4  stfs 1, 20(31)
  021a7f8  lfs 1, 8(30)
  021a7fc  fsubs 1, 3, 1
  021a800  stfs 1, 24(31)
  021a804  stb 3, 0(30)
  021a808  stb 3, 1(30)
  021a80c  stb 3, 2(30)
  021a810  stb 3, 3(30)
  021a814  stb 3, 4(30)
  021a818  stb 3, 5(30)
  021a81c  stb 3, 6(30)
  021a820  stb 3, 7(30)
  021a824  stb 3, 8(30)
  021a828  stb 3, 9(30)
  021a82c  stb 3, 10(30)
  021a830  stb 3, 12(30)
  021a834  stb 3, 11(30)
  021a838  stb 3, 13(30)
  021a83c  stb 3, 14(30)
  021a840  stb 3, 15(30)
  021a844  stw 6, 12(30)
  021a848  stw 5, 44(30)
  021a84c  lwz 29, 8224(4)
  021a850  cmpwi 29, 0
  021a854  bt 2, 0x21a96c
  021a858  lis 5, 1
  021a85c  addic 3, 1, 192
  021a860  fmr 1, 30
  021a864  addic 7, 1, 128
  021a868  ori 4, 31, 0
  021a86c  ori 5, 5, 1
  021a870  bl 0x10581c
  021a874  nop
  021a878  li 3, 1
  021a87c  lhz 4, 166(31)
  021a880  sth 4, 218(1)
  021a884  stb 3, 216(1)
  021a888  stb 3, 217(1)
  021a88c  lbz 3, 164(29)
  021a890  cmpwi 3, 255
  021a894  bt 2, 0x21a8b4
  021a898  lis 4, 161
  021a89c  slwi 5, 3, 6
  021a8a0  addic 3, 4, 19456
  021a8a4  addc 4, 3, 5
  021a8a8  lwz 5, 52(4)
  021a8ac  cmpw 5, 29
  021a8b0  bt 2, 0x21a90c
  021a8b4  li 3, 192
  021a8b8  li 5, 208
  021a8bc  li 7, 224
  021a8c0  li 4, 64
  021a8c4  li 6, 80
  021a8c8  li 8, 96
  021a8cc  lvx 2, 3, 1
  021a8d0  lvx 3, 5, 1
  021a8d4  lvx 4, 7, 1
  021a8d8  ori 3, 29, 0
  021a8dc  stvx 2, 4, 1
  021a8e0  stvx 3, 6, 1
  021a8e4  stvx 4, 8, 1
  021a8e8  ld 5, 64(1)
  021a8ec  ld 6, 72(1)
  021a8f0  ld 7, 80(1)
  021a8f4  ld 8, 88(1)
  021a8f8  ld 9, 96(1)
  021a8fc  ld 10, 104(1)
  021a900  bl 0x105ab4
  021a904  nop
  021a908  b 0x21a97c
  021a90c  lfs 1, 44(4)
  021a910  li 5, 1
  021a914  fadds 1, 1, 30
  021a918  lis 6, 1
  021a91c  ori 6, 6, 1
  021a920  stfs 1, 44(4)
  021a924  lbz 4, 164(29)
  021a928  slwi 4, 4, 6
  021a92c  addc 4, 3, 4
  021a930  stb 5, 40(4)
  021a934  lbz 4, 164(29)
  021a938  slwi 4, 4, 6
  021a93c  addc 4, 3, 4
  021a940  stb 5, 41(4)
  021a944  lbz 4, 164(29)
  021a948  lhz 5, 166(31)
  021a94c  slwi 4, 4, 6
  021a950  addc 4, 3, 4
  021a954  sth 5, 42(4)
  021a958  lbz 4, 164(29)
  021a95c  slwi 4, 4, 6
  021a960  addc 3, 3, 4
  021a964  stw 6, 36(3)
  021a968  b 0x21a97c
  021a96c  addic 3, 3, 1
  021a970  addic 4, 4, 4
  021a974  cmpwi 3, 6
  021a978  bt 0, 0x21a84c
  021a97c  lis 5, 1
  021a980  fmr 1, 30
  021a984  addic 3, 1, 192
  021a988  addic 7, 1, 128
  021a98c  ori 4, 31, 0
  021a990  ori 5, 5, 1
  021a994  bl 0x10581c
  021a998  nop
  021a99c  li 3, 1
  021a9a0  lfs 1, 20(31)
  021a9a4  lfs 2, 16(31)
  021a9a8  stb 3, 216(1)
  021a9ac  stb 3, 217(1)
  021a9b0  lfs 3, 20(30)
  021a9b4  lfs 4, 16(30)
  021a9b8  fsubs 1, 1, 3
  021a9bc  fsubs 2, 2, 4
  021a9c0  fmuls 1, 1, 1
  021a9c4  fmadds 1, 2, 2, 1
  021a9c8  lfs 2, 40(30)
  021a9cc  lwz 3, 36(30)
  021a9d0  lhz 4, 166(31)
  021a9d4  cntlzw 29, 3
  021a9d8  sth 4, 218(1)
  021a9dc  rlwinm 29, 29, 27, 31, 31
  021a9e0  fsqrts 1, 1
  021a9e4  fcmpu 0, 1, 2
  021a9e8  bt 1, 0x21aa00
  021a9ec  addic 3, 30, 44
  021a9f0  bl 0x4fff60
  021a9f4  nop
  021a9f8  cmpwi 3, 0
  021a9fc  bt 2, 0x21abac
  021aa00  lbz 3, 49(31)
  021aa04  cmpwi 3, 0
  021aa08  bt 2, 0x21ab9c
  021aa0c  lis 3, 34
  021aa10  li 30, 0
  021aa14  addi 3, 3, -23184
  021aa18  ori 28, 30, 0
  021aa1c  addic 29, 31, 16
  021aa20  lfs 29, 16(3)
  021aa24  lfs 28, 20(3)
  021aa28  lfs 27, 12(3)
  021aa2c  lfs 26, 24(3)
  021aa30  fmr 1, 29
  021aa34  stw 28, 144(1)
  021aa38  stw 28, 148(1)
  021aa3c  fmr 2, 30
  021aa40  stw 28, 152(1)
  021aa44  stw 28, 156(1)
  021aa48  bl 0xfcbe8
  021aa4c  nop
  021aa50  stfs 1, 144(1)
  021aa54  fmr 2, 30
  021aa58  fmr 1, 29
  021aa5c  bl 0xfcbe8
  021aa60  nop
  021aa64  stfs 1, 148(1)
  021aa68  fmr 2, 30
  021aa6c  fmr 1, 29
  021aa70  bl 0xfcbe8
  021aa74  nop
  021aa78  fmuls 2, 25, 25
  021aa7c  lfs 3, 148(1)
  021aa80  lfs 4, 144(1)
  021aa84  fmuls 5, 3, 3
  021aa88  fmadds 2, 25, 25, 2
  021aa8c  fmadds 5, 4, 4, 5
  021aa90  fmadds 2, 25, 25, 2
  021aa94  fmadds 5, 1, 1, 5
  021aa98  fsqrts 2, 2
  021aa9c  lis 3, 114
  021aaa0  lfs 6, -3052(3)
  021aaa4  stfs 25, 156(1)
  021aaa8  fsqrts 5, 5
  021aaac  fmuls 7, 2, 28
  021aab0  fmuls 2, 6, 26
  021aab4  fdivs 7, 7, 5
  021aab8  fsub 8, 31, 5
  021aabc  fsub 9, 31, 5
  021aac0  fsub 10, 31, 5
  021aac4  fsub 11, 5, 31
  021aac8  fsub 12, 5, 31
  021aacc  fsub 5, 5, 31
  021aad0  fmuls 13, 1, 7
  021aad4  fmuls 3, 3, 7
  021aad8  fmuls 4, 4, 7
  021aadc  fmuls 1, 6, 27
  021aae0  fsel 6, 8, 31, 13
  021aae4  fsel 7, 9, 31, 3
  021aae8  fsel 8, 10, 31, 4
  021aaec  fsel 6, 11, 6, 13
  021aaf0  fsel 3, 12, 7, 3
  021aaf4  fsel 4, 5, 8, 4
  021aaf8  fadds 5, 25, 6
  021aafc  fadds 3, 25, 3
  021ab00  fadds 4, 25, 4
  021ab04  stfs 5, 152(1)
  021ab08  stfs 3, 148(1)
  021ab0c  stfs 4, 144(1)
  021ab10  bl 0xfcbe8
  021ab14  nop
  021ab18  lfs 2, 148(1)
  021ab1c  lfs 3, 144(1)
  021ab20  fmuls 4, 2, 2
  021ab24  lfs 5, 152(1)
  021ab28  addic 4, 1, 144
  021ab2c  ori 3, 29, 0
  021ab30  fmadds 4, 3, 3, 4
  021ab34  fmadds 4, 5, 5, 4
  021ab38  fsqrts 4, 4
  021ab3c  fdivs 1, 1, 4
  021ab40  fsub 6, 31, 4
  021ab44  fsub 7, 31, 4
  021ab48  fsub 8, 31, 4
  021ab4c  fsub 9, 4, 31
  021ab50  fsub 10, 4, 31
  021ab54  fsub 4, 4, 31
  021ab58  fmuls 3, 3, 1
  021ab5c  fmuls 2, 2, 1
  021ab60  fmuls 1, 5, 1
  021ab64  fsel 5, 6, 31, 3
  021ab68  fsel 6, 7, 31, 2
  021ab6c  fsel 7, 8, 31, 1
  021ab70  fsel 3, 9, 5, 3
  021ab74  fsel 2, 10, 6, 2
  021ab78  fsel 1, 4, 7, 1
  021ab7c  stfs 3, 144(1)
  021ab80  stfs 2, 148(1)
  021ab84  stfs 1, 152(1)
  021ab88  bl 0x12f490
  021ab8c  nop
  021ab90  addic 30, 30, 1
  021ab94  cmpwi 30, 3
  021ab98  bt 0, 0x21aa30
  021ab9c  ori 3, 31, 0
  021aba0  bl 0xefb38
  021aba4  nop
  021aba8  b 0x21aef0
  021abac  addic 28, 31, 16
  021abb0  lwz 6, 32(30)
  021abb4  addic 3, 1, 112
  021abb8  ori 4, 28, 0
  021abbc  addic 7, 1, 192
  021abc0  ori 5, 29, 0
  021abc4  bl 0x57820
  021abc8  nop
  021abcc  cmpwi 3, 0
  021abd0  bt 2, 0x21ae54
  021abd4  lis 27, 161
  021abd8  addic 27, 27, 2368
  021abdc  lfs 1, 32(27)
  021abe0  stfs 1, 16(31)
  021abe4  lfs 1, 36(27)
  021abe8  lbz 3, 49(31)
  021abec  stfs 1, 20(31)
  021abf0  lfs 1, 40(27)
  021abf4  cmpwi 3, 0
  021abf8  stfs 1, 24(31)
  021abfc  lfs 1, 44(27)
  021ac00  stfs 1, 28(31)
  021ac04  bt 2, 0x21ae18
  021ac08  lis 3, 34
  021ac0c  li 29, 0
  021ac10  addi 3, 3, -23184
  021ac14  ori 25, 29, 0
  021ac18  addic 26, 27, 64
  021ac1c  lfs 29, 16(3)
  021ac20  lfs 28, 4(3)
  021ac24  lfs 27, 28(3)
  021ac28  lfs 26, 32(3)
  021ac2c  lfs 25, 36(3)
  021ac30  lfs 24, 40(3)
  021ac34  lfs 23, 44(3)
  021ac38  fmr 1, 29
  021ac3c  stw 25, 160(1)
  021ac40  fmr 2, 30
  021ac44  stw 25, 164(1)
  021ac48  stw 25, 168(1)
  021ac4c  stw 25, 172(1)
  021ac50  bl 0xfcbe8
  021ac54  nop
  021ac58  stfs 1, 160(1)
  021ac5c  fmr 1, 29
  021ac60  fmr 2, 30
  021ac64  bl 0xfcbe8
  021ac68  nop
  021ac6c  stfs 1, 164(1)
  021ac70  fmr 2, 30
  021ac74  fmr 1, 29
  021ac78  bl 0xfcbe8
  021ac7c  nop
  021ac80  stfs 1, 168(1)
  021ac84  addic 3, 1, 176
  021ac88  ori 4, 30, 0
  021ac8c  ori 5, 26, 0
  021ac90  bl 0x500608
  021ac94  nop
  021ac98  lfs 3, 180(1)
  021ac9c  lfs 4, 176(1)
  021aca0  fmuls 1, 3, 3
  021aca4  lfs 5, 164(1)
  021aca8  lfs 6, 184(1)
  021acac  fmuls 2, 5, 5
  021acb0  lfs 7, 160(1)
  021acb4  lfs 8, 168(1)
  021acb8  lis 3, 114
  021acbc  lfs 9, 188(1)
  021acc0  fmadds 1, 4, 4, 1
  021acc4  fmadds 2, 7, 7, 2
  021acc8  fmadds 1, 6, 6, 1
  021accc  fmadds 2, 8, 8, 2
  021acd0  fsqrts 1, 1
  021acd4  fsqrts 10, 2
  021acd8  lfs 2, -3052(3)
  021acdc  stfs 9, 172(1)
  021ace0  fmuls 9, 1, 28
  021ace4  fmuls 1, 2, 27
  021ace8  fmuls 2, 2, 26
  021acec  fdivs 9, 9, 10
  021acf0  fsub 11, 31, 10
  021acf4  fsub 12, 31, 10
  021acf8  fsub 13, 31, 10
  021acfc  fsub 0, 10, 31
  021ad00  fsub 22, 10, 31
  021ad04  fsub 10, 10, 31
  021ad08  fmuls 8, 8, 9
  021ad0c  fmuls 5, 5, 9
  021ad10  fmuls 7, 7, 9
  021ad14  fsel 9, 11, 31, 8
  021ad18  fsel 11, 12, 31, 5
  021ad1c  fsel 12, 13, 31, 7
  021ad20  fsel 8, 0, 9, 8
  021ad24  fsel 5, 22, 11, 5
  021ad28  fsel 7, 10, 12, 7
  021ad2c  fadds 6, 6, 8
  021ad30  fadds 3, 3, 5
  021ad34  fadds 4, 4, 7
  021ad38  stfs 6, 168(1)
  021ad3c  stfs 3, 164(1)
  021ad40  stfs 4, 160(1)
  021ad44  bl 0xfcbe8
  021ad48  nop
  021ad4c  lfs 2, 164(1)
  021ad50  lfs 3, 160(1)
  021ad54  fmuls 4, 2, 2
  021ad58  lfs 5, 168(1)
  021ad5c  lis 3, 114
  021ad60  fmadds 4, 3, 3, 4
  021ad64  lfs 6, -3056(3)
  021ad68  fmuls 7, 6, 25
  021ad6c  fmuls 6, 6, 24
  021ad70  fmadds 4, 5, 5, 4
  021ad74  fctiwz 7, 7
  021ad78  fctiwz 6, 6
  021ad7c  fsqrts 4, 4
  021ad80  stfd 7, 240(1)
  021ad84  lwz 3, 244(1)
  021ad88  stfd 6, 240(1)
  021ad8c  lwz 4, 244(1)
  021ad90  extsw 3, 3
  021ad94  extsw 4, 4
  021ad98  fdivs 1, 1, 4
  021ad9c  fsub 6, 31, 4
  021ada0  fsub 7, 31, 4
  021ada4  fsub 8, 31, 4
  021ada8  fsub 9, 4, 31
  021adac  fsub 10, 4, 31
  021adb0  fsub 4, 4, 31
  021adb4  fmuls 3, 3, 1
  021adb8  fmuls 2, 2, 1
  021adbc  fmuls 1, 5, 1
  021adc0  fsel 5, 6, 31, 3
  021adc4  fsel 6, 7, 31, 2
  021adc8  fsel 7, 8, 31, 1
  021adcc  fsel 3, 9, 5, 3
  021add0  fsel 2, 10, 6, 2
  021add4  fsel 1, 4, 7, 1
  021add8  stfs 3, 160(1)
  021addc  stfs 2, 164(1)
  021ade0  stfs 1, 168(1)
  021ade4  bl 0xfe484
  021ade8  nop
  021adec  lis 5, 32559
  021adf0  fmr 1, 23
  021adf4  ori 6, 3, 0
  021adf8  addic 4, 1, 160
  021adfc  ori 3, 28, 0
  021ae00  ori 5, 5, 20335
  021ae04  bl 0x128248
  021ae08  nop
  021ae0c  addic 29, 29, 1
  021ae10  cmpwi 29, 5
  021ae14  bt 0, 0x21ac38
  021ae18  lwz 27, 24(27)
  021ae1c  cmpwi 27, 0
  021ae20  bt 2, 0x21ae44
  021ae24  lhz 3, 166(27)
  021ae28  cmpwi 3, 0
  021ae2c  bf 2, 0x21ae44
  021ae30  li 3, 0
  021ae34  li 4, 0
  021ae38  ori 5, 31, 0
  021ae3c  bl 0x15d12c
  021ae40  nop
  021ae44  ori 3, 31, 0
  021ae48  bl 0xefb38
  021ae4c  nop
  021ae50  b 0x21aef0
  021ae54  lwz 3, 16(31)
  021ae58  lis 4, 16384
  021ae5c  srawi 5, 3, 31
  021ae60  srwi 6, 5, 1
  021ae64  xor 3, 6, 3
  021ae68  subc 3, 3, 5
  021ae6c  cmpw 3, 4
  021ae70  bt 0, 0x21aee4
  021ae74  lis 4, 17535
  021ae78  ori 4, 4, 16384
  021ae7c  cmpw 3, 4
  021ae80  bt 1, 0x21aee4
  021ae84  lwz 5, 20(31)
  021ae88  lis 3, 17535
  021ae8c  srawi 6, 5, 31
  021ae90  lis 4, 16384
  021ae94  srwi 7, 6, 1
  021ae98  ori 3, 3, 16384
  021ae9c  xor 5, 7, 5
  021aea0  subc 5, 5, 6
  021aea4  cmpw 1, 5, 3
  021aea8  cmpw 5, 4
  021aeac  cror 2, 0, 5
  021aeb0  bt 2, 0x21aee4
  021aeb4  lwz 5, 24(31)
  021aeb8  lis 3, 17535
  021aebc  srawi 6, 5, 31
  021aec0  lis 4, 16384
  021aec4  srwi 7, 6, 1
  021aec8  ori 3, 3, 16384
  021aecc  xor 5, 7, 5
  021aed0  subc 5, 5, 6
  021aed4  cmpw 5, 4
  021aed8  cmpw 1, 5, 3
  021aedc  bt 0, 0x21aee4
  021aee0  bf 5, 0x21aef0
  021aee4  ori 3, 31, 0
  021aee8  bl 0xefb38
  021aeec  nop
  021aef0  ld 0, 416(1)
  021aef4  mtlr 0
  021aef8  lfd 22, 320(1)
  021aefc  lfd 23, 328(1)
  021af00  lfd 24, 336(1)
  021af04  lfd 25, 344(1)
  021af08  lfd 26, 352(1)
  021af0c  lfd 27, 360(1)
  021af10  lfd 28, 368(1)
  021af14  lfd 29, 376(1)
  021af18  lfd 30, 384(1)
  021af1c  lfd 31, 392(1)
  021af20  ld 25, 264(1)
  021af24  ld 26, 272(1)
  021af28  ld 27, 280(1)
  021af2c  ld 28, 288(1)
  021af30  ld 29, 296(1)
  021af34  ld 30, 304(1)
  021af38  ld 31, 312(1)
  021af3c  addi 1, 1, 400
  021af40  blr

M1238_0021af44:   # 0x21af44, 0x14 bytes
  021af44  lis 3, 119
  021af48  lis 4, 1
  021af4c  addic 3, 3, -30576
  021af50  stw 4, 72(3)
  021af54  blr

M1238_0021af58:   # 0x21af58, 0x10 bytes
  021af58  lis 3, 119
  021af5c  addic 3, 3, -15072
  021af60  lfs 1, 8(3)
  021af64  blr

M1238_0021af68:   # 0x21af68, 0x2c bytes
  021af68  stdu 1, -112(1)
  021af6c  mflr 0
  021af70  std 0, 128(1)
  021af74  lis 3, 119
  021af78  addic 3, 3, -15072
  021af7c  bl 0x17e558
  021af80  nop
  021af84  ld 0, 128(1)
  021af88  mtlr 0
  021af8c  addi 1, 1, 112
  021af90  blr
