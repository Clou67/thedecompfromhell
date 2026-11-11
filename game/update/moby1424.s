# game/update/moby1424.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1424_0027a098:   # 0x27a098, 0x3b0 bytes
  027a098  stdu 1, -288(1)
  027a09c  mflr 0
  027a0a0  std 0, 304(1)
  027a0a4  stfd 22, 208(1)
  027a0a8  stfd 23, 216(1)
  027a0ac  stfd 24, 224(1)
  027a0b0  stfd 25, 232(1)
  027a0b4  stfd 26, 240(1)
  027a0b8  stfd 27, 248(1)
  027a0bc  stfd 28, 256(1)
  027a0c0  stfd 29, 264(1)
  027a0c4  stfd 30, 272(1)
  027a0c8  stfd 31, 280(1)
  027a0cc  std 31, 200(1)
  027a0d0  lis 4, 123
  027a0d4  ori 31, 3, 0
  027a0d8  lwz 4, -24384(4)
  027a0dc  extsw 4, 4
  027a0e0  std 4, 144(1)
  027a0e4  std 29, 184(1)
  027a0e8  lis 4, 40
  027a0ec  addi 29, 4, -24468
  027a0f0  lis 4, 114
  027a0f4  lfs 31, 0(29)
  027a0f8  lfs 1, -3056(4)
  027a0fc  lfd 2, 144(1)
  027a100  fcfid 2, 2
  027a104  lis 4, 161
  027a108  std 30, 192(1)
  027a10c  lwz 4, 1808(4)
  027a110  lwz 30, 120(31)
  027a114  frsp 2, 2
  027a118  fadds 2, 2, 31
  027a11c  fmuls 1, 1, 2
  027a120  fctiwz 1, 1
  027a124  stfd 1, 144(1)
  027a128  std 28, 176(1)
  027a12c  lwz 3, 148(1)
  027a130  extsw 28, 3
  027a134  divw 5, 4, 28
  027a138  mullw 3, 5, 3
  027a13c  subc 3, 4, 3
  027a140  std 27, 168(1)
  027a144  std 26, 160(1)
  027a148  extsw 3, 3
  027a14c  bl 0x502730
  027a150  nop
  027a154  fmr 30, 1
  027a158  ori 3, 28, 0
  027a15c  bl 0x502730
  027a160  nop
  027a164  fdivs 1, 30, 1
  027a168  lfs 23, 4(29)
  027a16c  lfs 24, 8(29)
  027a170  lfs 25, 12(29)
  027a174  lfs 26, 16(29)
  027a178  lfs 27, 20(29)
  027a17c  lis 3, 123
  027a180  lfs 28, 24(29)
  027a184  lis 4, 123
  027a188  lfs 29, 28(29)
  027a18c  lfs 30, 32(29)
  027a190  lwz 3, -24392(3)
  027a194  lwz 4, -24388(4)
  027a198  extsw 3, 3
  027a19c  extsw 4, 4
  027a1a0  fmsubs 1, 1, 23, 24
  027a1a4  fsubs 2, 25, 1
  027a1a8  fsubs 3, 26, 1
  027a1ac  fsub 4, 1, 2
  027a1b0  fsel 1, 4, 2, 1
  027a1b4  fsub 2, 3, 1
  027a1b8  fsel 1, 2, 3, 1
  027a1bc  fmuls 2, 1, 1
  027a1c0  fmuls 3, 2, 1
  027a1c4  fmuls 4, 2, 3
  027a1c8  fmadds 1, 3, 27, 1
  027a1cc  fmuls 3, 2, 4
  027a1d0  fmadds 1, 4, 28, 1
  027a1d4  fmuls 2, 2, 3
  027a1d8  fmadds 1, 3, 29, 1
  027a1dc  fmadds 1, 2, 30, 1
  027a1e0  fmadds 1, 1, 31, 31
  027a1e4  bl 0x5027bc
  027a1e8  nop
  027a1ec  addic 28, 1, 112
  027a1f0  ori 29, 3, 0
  027a1f4  lwz 3, 928(30)
  027a1f8  li 4, 1
  027a1fc  ori 5, 28, 0
  027a200  bl 0xf1114
  027a204  nop
  027a208  lis 27, 123
  027a20c  lis 26, 123
  027a210  ori 3, 28, 0
  027a214  ori 4, 29, 0
  027a218  lfs 1, -24400(27)
  027a21c  lfs 2, -24396(26)
  027a220  bl 0x119028
  027a224  nop
  027a228  lwz 3, 928(30)
  027a22c  li 4, 2
  027a230  ori 5, 28, 0
  027a234  bl 0xf1114
  027a238  nop
  027a23c  lfs 1, -24400(27)
  027a240  ori 3, 28, 0
  027a244  lfs 2, -24396(26)
  027a248  ori 4, 29, 0
  027a24c  bl 0x119028
  027a250  nop
  027a254  lbz 3, 83(31)
  027a258  cmpwi 3, 11
  027a25c  bt 0, 0x27a3a4
  027a260  cmpwi 3, 13
  027a264  bt 1, 0x27a3a4
  027a268  lis 3, 123
  027a26c  lis 4, 161
  027a270  lwz 3, -24368(3)
  027a274  extsw 3, 3
  027a278  std 3, 144(1)
  027a27c  lis 3, 114
  027a280  lfs 1, -3056(3)
  027a284  lwz 3, 1808(4)
  027a288  lfd 2, 144(1)
  027a28c  fcfid 2, 2
  027a290  frsp 2, 2
  027a294  fadds 2, 2, 31
  027a298  fmuls 1, 1, 2
  027a29c  fctiwz 1, 1
  027a2a0  stfd 1, 144(1)
  027a2a4  lwz 4, 148(1)
  027a2a8  extsw 29, 4
  027a2ac  divw 5, 3, 29
  027a2b0  mullw 4, 5, 4
  027a2b4  subc 3, 3, 4
  027a2b8  extsw 3, 3
  027a2bc  bl 0x502730
  027a2c0  nop
  027a2c4  fmr 22, 1
  027a2c8  ori 3, 29, 0
  027a2cc  bl 0x502730
  027a2d0  nop
  027a2d4  fdivs 1, 22, 1
  027a2d8  lis 3, 123
  027a2dc  lis 4, 123
  027a2e0  lwz 3, -24376(3)
  027a2e4  lwz 4, -24372(4)
  027a2e8  extsw 3, 3
  027a2ec  extsw 4, 4
  027a2f0  fmsubs 1, 1, 23, 24
  027a2f4  fsubs 2, 25, 1
  027a2f8  fsubs 3, 26, 1
  027a2fc  fsub 4, 1, 2
  027a300  fsel 1, 4, 2, 1
  027a304  fsub 2, 3, 1
  027a308  fsel 1, 2, 3, 1
  027a30c  fmuls 2, 1, 1
  027a310  fmuls 3, 2, 1
  027a314  fmuls 4, 2, 3
  027a318  fmadds 1, 3, 27, 1
  027a31c  fmuls 3, 2, 4
  027a320  fmadds 1, 4, 28, 1
  027a324  fmuls 2, 2, 3
  027a328  fmadds 1, 3, 29, 1
  027a32c  fmadds 1, 2, 30, 1
  027a330  fmadds 1, 1, 31, 31
  027a334  bl 0x5027bc
  027a338  nop
  027a33c  addic 29, 1, 128
  027a340  ori 28, 3, 0
  027a344  ori 3, 31, 0
  027a348  li 4, 5
  027a34c  ori 5, 29, 0
  027a350  bl 0xf1114
  027a354  nop
  027a358  lis 27, 123
  027a35c  lis 26, 251
  027a360  ori 3, 29, 0
  027a364  ori 4, 28, 0
  027a368  lfs 1, -24380(27)
  027a36c  lfs 2, -13172(26)
  027a370  bl 0x119028
  027a374  nop
  027a378  ori 3, 31, 0
  027a37c  li 4, 6
  027a380  ori 5, 29, 0
  027a384  bl 0xf1114
  027a388  nop
  027a38c  lfs 1, -24380(27)
  027a390  lfs 2, -13172(26)
  027a394  ori 3, 29, 0
  027a398  ori 4, 28, 0
  027a39c  bl 0x119028
  027a3a0  nop
  027a3a4  lis 3, 40
  027a3a8  li 29, 0
  027a3ac  addi 3, 3, -24468
  027a3b0  lfs 30, 36(3)
  027a3b4  addic 4, 29, 11
  027a3b8  addic 28, 1, 112
  027a3bc  extsw 4, 4
  027a3c0  ori 3, 31, 0
  027a3c4  ori 5, 28, 0
  027a3c8  bl 0xf1114
  027a3cc  nop
  027a3d0  lwz 4, 952(30)
  027a3d4  ori 3, 28, 0
  027a3d8  fmr 1, 30
  027a3dc  extsw 4, 4
  027a3e0  fmr 2, 31
  027a3e4  bl 0x119028
  027a3e8  nop
  027a3ec  addic 29, 29, 1
  027a3f0  cmpwi 29, 8
  027a3f4  bt 0, 0x27a3b4
  027a3f8  ld 0, 304(1)
  027a3fc  mtlr 0
  027a400  lfd 22, 208(1)
  027a404  lfd 23, 216(1)
  027a408  lfd 24, 224(1)
  027a40c  lfd 25, 232(1)
  027a410  lfd 26, 240(1)
  027a414  lfd 27, 248(1)
  027a418  lfd 28, 256(1)
  027a41c  lfd 29, 264(1)
  027a420  lfd 30, 272(1)
  027a424  lfd 31, 280(1)
  027a428  ld 26, 160(1)
  027a42c  ld 27, 168(1)
  027a430  ld 28, 176(1)
  027a434  ld 29, 184(1)
  027a438  ld 30, 192(1)
  027a43c  ld 31, 200(1)
  027a440  addi 1, 1, 288
  027a444  blr

M1424_0027a448:   # 0x27a448, 0x14 bytes
  027a448  lis 3, 123
  027a44c  lis 4, 1
  027a450  addic 3, 3, -24360
  027a454  stw 4, 72(3)
  027a458  blr

UpdateMoby_1424:   # 0x27a488, 0x6e0 bytes
  027a488  stdu 1, -272(1)
  027a48c  mflr 0
  027a490  std 0, 288(1)
  027a494  stfd 22, 192(1)
  027a498  stfd 23, 200(1)
  027a49c  stfd 24, 208(1)
  027a4a0  stfd 25, 216(1)
  027a4a4  stfd 26, 224(1)
  027a4a8  stfd 27, 232(1)
  027a4ac  stfd 28, 240(1)
  027a4b0  stfd 29, 248(1)
  027a4b4  stfd 30, 256(1)
  027a4b8  stfd 31, 264(1)
  027a4bc  std 31, 184(1)
  027a4c0  ori 31, 3, 0
  027a4c4  std 30, 176(1)
  027a4c8  lbz 3, 32(31)
  027a4cc  lwz 30, 120(31)
  027a4d0  cmpwi 3, 1
  027a4d4  cmpwi 1, 3, 3
  027a4d8  cmpwi 6, 3, 2
  027a4dc  std 29, 168(1)
  027a4e0  std 28, 160(1)
  027a4e4  cmpwi 7, 3, 0
  027a4e8  bt 1, 0x27a4fc
  027a4ec  cmpwi 3, -1
  027a4f0  bf 1, 0x27ab20
  027a4f4  bf 29, 0x27a508
  027a4f8  b 0x27a704
  027a4fc  bf 25, 0x27a8d4
  027a500  bf 5, 0x27aa80
  027a504  b 0x27ab20
  027a508  li 3, 255
  027a50c  lfs 1, 16(31)
  027a510  lis 4, 151
  027a514  stb 3, 48(31)
  027a518  stfs 1, 0(30)
  027a51c  addic 3, 4, -25376
  027a520  lfs 1, 20(31)
  027a524  stfs 1, 4(30)
  027a528  lfs 1, 24(31)
  027a52c  stfs 1, 8(30)
  027a530  lfs 1, 28(31)
  027a534  stfs 1, 12(30)
  027a538  lbz 3, 8356(3)
  027a53c  lfs 1, 72(31)
  027a540  cmpwi 3, 0
  027a544  bf 2, 0x27a5ac
  027a548  lis 3, 165
  027a54c  lhz 4, 178(31)
  027a550  addic 5, 3, 16752
  027a554  extsh 3, 4
  027a558  addc 5, 5, 3
  027a55c  lbz 5, 1108(5)
  027a560  cmpwi 5, 0
  027a564  bf 2, 0x27a5ac
  027a568  lis 6, 151
  027a56c  lis 5, 161
  027a570  srawi 3, 3, 5
  027a574  addic 5, 5, -13028
  027a578  sldi 3, 3, 2
  027a57c  lwz 6, -25488(6)
  027a580  addc 3, 3, 5
  027a584  slwi 5, 6, 8
  027a588  clrldi 3, 3, 32
  027a58c  extsw 5, 5
  027a590  li 7, 1
  027a594  clrlwi 4, 4, 27
  027a598  slw 4, 7, 4
  027a59c  lwzx 3, 3, 5
  027a5a0  and 3, 3, 4
  027a5a4  cmpwi 3, 0
  027a5a8  bt 2, 0x27a6cc
  027a5ac  lis 3, 40
  027a5b0  addi 29, 3, -23456
  027a5b4  lfs 31, 0(29)
  027a5b8  fmr 2, 31
  027a5bc  bl 0x502578
  027a5c0  nop
  027a5c4  lfs 2, 4(29)
  027a5c8  lfs 30, 8(29)
  027a5cc  fadds 1, 1, 2
  027a5d0  lfs 29, 12(29)
  027a5d4  lfs 28, 16(29)
  027a5d8  lfs 27, 20(29)
  027a5dc  lfs 26, 24(29)
  027a5e0  lfs 25, 28(29)
  027a5e4  lfs 24, 32(29)
  027a5e8  fsubs 2, 30, 1
  027a5ec  fsubs 3, 29, 1
  027a5f0  lfs 5, 72(31)
  027a5f4  fsub 4, 1, 2
  027a5f8  fsel 1, 4, 2, 1
  027a5fc  fsub 4, 3, 1
  027a600  fsel 1, 4, 3, 1
  027a604  fmuls 3, 1, 1
  027a608  fmuls 4, 3, 1
  027a60c  fmuls 2, 3, 4
  027a610  fmadds 1, 4, 28, 1
  027a614  fmuls 4, 3, 2
  027a618  fmadds 6, 2, 27, 1
  027a61c  fmr 1, 5
  027a620  fmr 2, 31
  027a624  fmuls 3, 3, 4
  027a628  fmadds 4, 4, 26, 6
  027a62c  fmadds 3, 3, 25, 4
  027a630  fmuls 3, 3, 24
  027a634  stfs 3, 112(1)
  027a638  bl 0x502578
  027a63c  nop
  027a640  fsubs 2, 30, 1
  027a644  fsubs 3, 29, 1
  027a648  li 4, 0
  027a64c  addic 3, 1, 128
  027a650  addic 5, 1, 112
  027a654  stw 4, 120(1)
  027a658  fsub 4, 1, 2
  027a65c  ori 4, 30, 0
  027a660  fsel 1, 4, 2, 1
  027a664  fsub 2, 3, 1
  027a668  fsel 1, 2, 3, 1
  027a66c  fmuls 2, 1, 1
  027a670  fmuls 3, 2, 1
  027a674  fmuls 4, 2, 3
  027a678  fmadds 1, 3, 28, 1
  027a67c  fmuls 3, 2, 4
  027a680  fmadds 1, 4, 27, 1
  027a684  fmuls 2, 2, 3
  027a688  fmadds 1, 3, 26, 1
  027a68c  fmadds 1, 2, 25, 1
  027a690  fmuls 1, 1, 24
  027a694  stfs 1, 116(1)
  027a698  bl 0x5023f0
  027a69c  nop
  027a6a0  lfs 1, 128(1)
  027a6a4  li 3, 3
  027a6a8  stfs 1, 16(31)
  027a6ac  lfs 1, 132(1)
  027a6b0  stfs 1, 20(31)
  027a6b4  lfs 1, 136(1)
  027a6b8  stb 3, 32(31)
  027a6bc  stfs 1, 24(31)
  027a6c0  lfs 1, 140(1)
  027a6c4  stfs 1, 28(31)
  027a6c8  b 0x27ab20
  027a6cc  lwz 30, 28(30)
  027a6d0  cmpwi 30, 0
  027a6d4  bf 1, 0x27a6f8
  027a6d8  lis 3, 164
  027a6dc  slwi 4, 30, 8
  027a6e0  lwz 3, -28512(3)
  027a6e4  addc 3, 3, 4
  027a6e8  clrldi 3, 3, 32
  027a6ec  lhz 4, 52(3)
  027a6f0  ori 4, 4, 2
  027a6f4  sth 4, 52(3)
  027a6f8  li 3, 1
  027a6fc  stb 3, 32(31)
  027a700  b 0x27ab20
  027a704  lis 3, 151
  027a708  addic 3, 3, -25376
  027a70c  lbz 3, 8356(3)
  027a710  cmpwi 3, 0
  027a714  bf 2, 0x27a780
  027a718  lis 3, 165
  027a71c  lhz 4, 178(31)
  027a720  addic 5, 3, 16752
  027a724  extsh 3, 4
  027a728  addc 5, 5, 3
  027a72c  lbz 5, 1108(5)
  027a730  cmpwi 5, 0
  027a734  bf 2, 0x27a780
  027a738  lis 6, 151
  027a73c  lis 5, 161
  027a740  srawi 3, 3, 5
  027a744  addic 5, 5, -13028
  027a748  sldi 3, 3, 2
  027a74c  lwz 6, -25488(6)
  027a750  addc 3, 3, 5
  027a754  clrlwi 8, 4, 27
  027a758  clrldi 7, 3, 32
  027a75c  ori 3, 6, 0
  027a760  li 9, 1
  027a764  slwi 6, 3, 8
  027a768  slw 8, 9, 8
  027a76c  extsw 6, 6
  027a770  lwzx 6, 7, 6
  027a774  and 6, 6, 8
  027a778  cmpwi 6, 0
  027a77c  bt 2, 0x27a7dc
  027a780  lfs 1, 0(30)
  027a784  li 3, 3
  027a788  stfs 1, 16(31)
  027a78c  lfs 1, 4(30)
  027a790  stfs 1, 20(31)
  027a794  lfs 1, 8(30)
  027a798  stfs 1, 24(31)
  027a79c  lfs 1, 12(30)
  027a7a0  stb 3, 32(31)
  027a7a4  stfs 1, 28(31)
  027a7a8  lwz 31, 28(30)
  027a7ac  cmpwi 31, 0
  027a7b0  bf 1, 0x27ab20
  027a7b4  lis 3, 164
  027a7b8  slwi 4, 31, 8
  027a7bc  li 5, 0
  027a7c0  lwz 3, -28512(3)
  027a7c4  addc 3, 3, 4
  027a7c8  clrldi 3, 3, 32
  027a7cc  lhz 4, 52(3)
  027a7d0  rlwimi 4, 5, 0, 30, 30
  027a7d4  sth 4, 52(3)
  027a7d8  b 0x27ab20
  027a7dc  lis 6, 151
  027a7e0  addic 6, 6, -13812
  027a7e4  lbz 6, 12(6)
  027a7e8  cmpwi 6, 0
  027a7ec  bt 2, 0x27ab20
  027a7f0  lwz 6, 28(30)
  027a7f4  cmpwi 6, 0
  027a7f8  bf 1, 0x27a82c
  027a7fc  lis 3, 164
  027a800  slwi 4, 6, 8
  027a804  li 7, 0
  027a808  lis 6, 151
  027a80c  lwz 3, -28512(3)
  027a810  addc 3, 3, 4
  027a814  clrldi 3, 3, 32
  027a818  lhz 4, 52(3)
  027a81c  rlwimi 4, 7, 0, 30, 30
  027a820  sth 4, 52(3)
  027a824  lhz 4, 178(31)
  027a828  lwz 3, -25488(6)
  027a82c  extsh 6, 4
  027a830  slwi 3, 3, 8
  027a834  srawi 6, 6, 5
  027a838  extsw 3, 3
  027a83c  sldi 6, 6, 2
  027a840  lis 7, 165
  027a844  addc 5, 6, 5
  027a848  lhz 6, 178(31)
  027a84c  clrlwi 4, 4, 27
  027a850  clrldi 5, 5, 32
  027a854  extsh 8, 6
  027a858  li 9, 1
  027a85c  srawi 8, 8, 5
  027a860  addic 7, 7, 19920
  027a864  lwzx 10, 5, 3
  027a868  slw 4, 9, 4
  027a86c  sldi 8, 8, 2
  027a870  clrlwi 6, 6, 27
  027a874  or 4, 10, 4
  027a878  slw 6, 9, 6
  027a87c  lwzx 9, 7, 8
  027a880  stwx 4, 5, 3
  027a884  or 3, 9, 6
  027a888  stwx 3, 7, 8
  027a88c  lwz 5, 16(30)
  027a890  cmpwi 5, 0
  027a894  bf 1, 0x27a8a4
  027a898  extsw 3, 5
  027a89c  bl 0x3fba8
  027a8a0  nop
  027a8a4  lis 3, 40
  027a8a8  lis 4, 114
  027a8ac  addi 3, 3, -23456
  027a8b0  lfs 1, 36(3)
  027a8b4  lfs 2, -3056(4)
  027a8b8  fmuls 1, 2, 1
  027a8bc  bl 0x502758
  027a8c0  nop
  027a8c4  stw 3, 20(30)
  027a8c8  li 3, 2
  027a8cc  stb 3, 32(31)
  027a8d0  b 0x27ab20
  027a8d4  lis 3, 40
  027a8d8  lis 28, 114
  027a8dc  addi 29, 3, -23456
  027a8e0  lfs 31, 36(29)
  027a8e4  lfs 2, -3056(28)
  027a8e8  fmuls 1, 2, 31
  027a8ec  bl 0x502758
  027a8f0  nop
  027a8f4  lwz 4, 20(30)
  027a8f8  subc 3, 3, 4
  027a8fc  extsw 3, 3
  027a900  bl 0x502730
  027a904  nop
  027a908  lfs 30, 0(29)
  027a90c  fmr 29, 1
  027a910  lfs 3, 72(31)
  027a914  fmr 2, 30
  027a918  fmr 1, 3
  027a91c  bl 0x502578
  027a920  nop
  027a924  lfs 2, 4(29)
  027a928  lfs 28, 8(29)
  027a92c  fadds 1, 1, 2
  027a930  lfs 27, 12(29)
  027a934  lfs 26, 16(29)
  027a938  lfs 25, 20(29)
  027a93c  lfs 24, 24(29)
  027a940  lfs 23, 28(29)
  027a944  lfs 22, 32(29)
  027a948  fsubs 2, 28, 1
  027a94c  fsubs 3, 27, 1
  027a950  fsub 4, 1, 2
  027a954  fsel 1, 4, 2, 1
  027a958  fsub 4, 3, 1
  027a95c  fsel 1, 4, 3, 1
  027a960  lfs 4, -3056(28)
  027a964  fmuls 3, 1, 1
  027a968  fmuls 5, 3, 1
  027a96c  fmuls 2, 3, 5
  027a970  fmadds 1, 5, 26, 1
  027a974  fmuls 5, 4, 31
  027a978  fmuls 6, 3, 2
  027a97c  fmadds 1, 2, 25, 1
  027a980  fmuls 2, 3, 6
  027a984  fmadds 1, 6, 24, 1
  027a988  fmadds 1, 2, 23, 1
  027a98c  fmuls 1, 1, 22
  027a990  fmuls 1, 1, 29
  027a994  fdivs 2, 1, 5
  027a998  fmuls 1, 4, 31
  027a99c  stfs 2, 112(1)
  027a9a0  bl 0x502758
  027a9a4  nop
  027a9a8  lwz 4, 20(30)
  027a9ac  subc 3, 3, 4
  027a9b0  extsw 3, 3
  027a9b4  bl 0x502730
  027a9b8  nop
  027a9bc  fmr 29, 1
  027a9c0  lfs 1, 72(31)
  027a9c4  fmr 2, 30
  027a9c8  bl 0x502578
  027a9cc  nop
  027a9d0  fsubs 2, 28, 1
  027a9d4  fsubs 3, 27, 1
  027a9d8  li 6, 0
  027a9dc  addic 3, 1, 144
  027a9e0  fsub 4, 1, 2
  027a9e4  addic 5, 1, 112
  027a9e8  ori 4, 30, 0
  027a9ec  fsel 1, 4, 2, 1
  027a9f0  fsub 2, 3, 1
  027a9f4  fsel 1, 2, 3, 1
  027a9f8  lfs 2, -3056(28)
  027a9fc  fmuls 2, 2, 31
  027aa00  stw 6, 120(1)
  027aa04  fmuls 3, 1, 1
  027aa08  fmuls 4, 3, 1
  027aa0c  fmuls 5, 3, 4
  027aa10  fmadds 1, 4, 26, 1
  027aa14  fmuls 4, 3, 5
  027aa18  fmadds 1, 5, 25, 1
  027aa1c  fmuls 3, 3, 4
  027aa20  fmadds 1, 4, 24, 1
  027aa24  fmadds 1, 3, 23, 1
  027aa28  fmuls 1, 1, 22
  027aa2c  fmuls 1, 1, 29
  027aa30  fdivs 1, 1, 2
  027aa34  stfs 1, 116(1)
  027aa38  bl 0x5023f0
  027aa3c  nop
  027aa40  lfs 1, 144(1)
  027aa44  addic 3, 30, 20
  027aa48  stfs 1, 16(31)
  027aa4c  lfs 1, 148(1)
  027aa50  stfs 1, 20(31)
  027aa54  lfs 1, 152(1)
  027aa58  stfs 1, 24(31)
  027aa5c  lfs 1, 156(1)
  027aa60  stfs 1, 28(31)
  027aa64  bl 0x4fff60
  027aa68  nop
  027aa6c  cmpwi 3, 0
  027aa70  bt 2, 0x27ab20
  027aa74  li 3, 3
  027aa78  stb 3, 32(31)
  027aa7c  b 0x27ab20
  027aa80  lis 3, 151
  027aa84  addic 3, 3, -25376
  027aa88  lbz 3, 8356(3)
  027aa8c  cmpwi 3, 0
  027aa90  bf 2, 0x27ab20
  027aa94  lis 3, 165
  027aa98  lhz 4, 178(31)
  027aa9c  addic 5, 3, 16752
  027aaa0  extsh 3, 4
  027aaa4  addc 5, 5, 3
  027aaa8  lbz 5, 1108(5)
  027aaac  cmpwi 5, 0
  027aab0  bf 2, 0x27ab20
  027aab4  lis 6, 151
  027aab8  lis 5, 161
  027aabc  srawi 3, 3, 5
  027aac0  addic 5, 5, -13028
  027aac4  sldi 3, 3, 2
  027aac8  lwz 6, -25488(6)
  027aacc  clrlwi 4, 4, 27
  027aad0  addc 3, 3, 5
  027aad4  slwi 5, 6, 8
  027aad8  clrldi 3, 3, 32
  027aadc  extsw 5, 5
  027aae0  li 6, 1
  027aae4  slw 4, 6, 4
  027aae8  lwzx 3, 3, 5
  027aaec  and 3, 3, 4
  027aaf0  cmpwi 3, 0
  027aaf4  bf 2, 0x27ab20
  027aaf8  lfs 1, 0(30)
  027aafc  li 3, 0
  027ab00  stfs 1, 16(31)
  027ab04  lfs 1, 4(30)
  027ab08  stfs 1, 20(31)
  027ab0c  lfs 1, 8(30)
  027ab10  stfs 1, 24(31)
  027ab14  lfs 1, 12(30)
  027ab18  stb 3, 32(31)
  027ab1c  stfs 1, 28(31)
  027ab20  ld 0, 288(1)
  027ab24  mtlr 0
  027ab28  lfd 22, 192(1)
  027ab2c  lfd 23, 200(1)
  027ab30  lfd 24, 208(1)
  027ab34  lfd 25, 216(1)
  027ab38  lfd 26, 224(1)
  027ab3c  lfd 27, 232(1)
  027ab40  lfd 28, 240(1)
  027ab44  lfd 29, 248(1)
  027ab48  lfd 30, 256(1)
  027ab4c  lfd 31, 264(1)
  027ab50  ld 28, 160(1)
  027ab54  ld 29, 168(1)
  027ab58  ld 30, 176(1)
  027ab5c  ld 31, 184(1)
  027ab60  addi 1, 1, 272
  027ab64  blr
