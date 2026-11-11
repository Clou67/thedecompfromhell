# game/update/moby78.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M78_00459ff0:   # 0x459ff0, 0xfc bytes
  0459ff0  stdu 1, -128(1)
  0459ff4  mflr 0
  0459ff8  std 0, 144(1)
  0459ffc  std 31, 120(1)
  045a000  ori 31, 3, 0
  045a004  li 3, 0
  045a008  lis 4, 165
  045a00c  addic 6, 4, 14692
  045a010  lbz 5, 176(31)
  045a014  lhz 7, 178(31)
  045a018  stw 3, 148(31)
  045a01c  extsh 3, 7
  045a020  addic 4, 5, 2
  045a024  cmpwi 5, 255
  045a028  stbx 4, 6, 3
  045a02c  bt 2, 0x45a070
  045a030  lis 6, 162
  045a034  addic 6, 6, 704
  045a038  lbzx 6, 5, 6
  045a03c  cmpwi 6, 255
  045a040  bt 2, 0x45a07c
  045a044  lis 6, 151
  045a048  lis 7, 161
  045a04c  addic 7, 7, -13692
  045a050  lwz 6, -25488(6)
  045a054  addc 5, 5, 7
  045a058  slwi 6, 6, 4
  045a05c  clrldi 5, 5, 32
  045a060  extsw 6, 6
  045a064  lbzx 5, 5, 6
  045a068  cmpwi 5, 255
  045a06c  bf 2, 0x45a07c
  045a070  lis 5, 165
  045a074  addic 5, 5, 17860
  045a078  stbx 4, 5, 3
  045a07c  lbz 4, 188(31)
  045a080  cmpwi 4, 255
  045a084  bt 2, 0x45a0c8
  045a088  lis 3, 150
  045a08c  sldi 5, 4, 7
  045a090  sldi 6, 4, 4
  045a094  addic 7, 3, 14312
  045a098  subc 3, 5, 6
  045a09c  lwzx 5, 7, 3
  045a0a0  cmpw 5, 31
  045a0a4  bf 2, 0x45a0c8
  045a0a8  lis 5, 150
  045a0ac  addic 5, 5, 14292
  045a0b0  lbzx 3, 5, 3
  045a0b4  cmpwi 3, 0
  045a0b8  bt 2, 0x45a0c8
  045a0bc  ori 3, 4, 0
  045a0c0  bl 0x15cdb0
  045a0c4  nop
  045a0c8  li 3, 255
  045a0cc  li 4, 2
  045a0d0  stb 3, 188(31)
  045a0d4  stb 4, 32(31)
  045a0d8  ld 0, 144(1)
  045a0dc  mtlr 0
  045a0e0  ld 31, 120(1)
  045a0e4  addi 1, 1, 128
  045a0e8  blr

UpdateMoby_78:   # 0x45a108, 0x8ec bytes
  045a108  stdu 1, -528(1)
  045a10c  mflr 0
  045a110  std 0, 544(1)
  045a114  stfd 14, 384(1)
  045a118  stfd 15, 392(1)
  045a11c  stfd 16, 400(1)
  045a120  stfd 17, 408(1)
  045a124  stfd 18, 416(1)
  045a128  stfd 19, 424(1)
  045a12c  stfd 20, 432(1)
  045a130  stfd 21, 440(1)
  045a134  stfd 22, 448(1)
  045a138  stfd 23, 456(1)
  045a13c  stfd 24, 464(1)
  045a140  stfd 25, 472(1)
  045a144  stfd 26, 480(1)
  045a148  stfd 27, 488(1)
  045a14c  stfd 28, 496(1)
  045a150  stfd 29, 504(1)
  045a154  stfd 30, 512(1)
  045a158  stfd 31, 520(1)
  045a15c  std 31, 376(1)
  045a160  ori 31, 3, 0
  045a164  lbz 4, 32(3)
  045a168  lwz 3, 120(3)
  045a16c  cmpwi 4, 0
  045a170  cmpwi 1, 4, -1
  045a174  cmpwi 6, 4, 1
  045a178  std 3, 264(1)
  045a17c  std 30, 368(1)
  045a180  std 29, 360(1)
  045a184  std 28, 352(1)
  045a188  std 27, 344(1)
  045a18c  std 26, 336(1)
  045a190  cmpwi 7, 4, 2
  045a194  bt 1, 0x45a1a0
  045a198  bf 5, 0x45a984
  045a19c  b 0x45a1b0
  045a1a0  ld 3, 264(1)
  045a1a4  bf 25, 0x45a24c
  045a1a8  bf 29, 0x45a96c
  045a1ac  b 0x45a984
  045a1b0  lis 3, 165
  045a1b4  lhz 7, 52(31)
  045a1b8  li 5, 0
  045a1bc  addic 6, 3, 17860
  045a1c0  lhz 3, 178(31)
  045a1c4  ori 7, 7, 1
  045a1c8  extsh 4, 3
  045a1cc  stb 5, 49(31)
  045a1d0  sth 7, 52(31)
  045a1d4  lbzx 5, 6, 4
  045a1d8  cmpwi 5, 0
  045a1dc  bf 2, 0x45a230
  045a1e0  lis 6, 151
  045a1e4  lis 5, 161
  045a1e8  srawi 4, 4, 5
  045a1ec  addic 5, 5, -13028
  045a1f0  sldi 4, 4, 2
  045a1f4  lwz 6, -25488(6)
  045a1f8  addc 4, 4, 5
  045a1fc  slwi 5, 6, 8
  045a200  clrldi 4, 4, 32
  045a204  extsw 5, 5
  045a208  li 7, 1
  045a20c  clrlwi 3, 3, 27
  045a210  slw 3, 7, 3
  045a214  lwzx 4, 4, 5
  045a218  and 3, 4, 3
  045a21c  cmpwi 3, 0
  045a220  bf 2, 0x45a230
  045a224  li 3, 1
  045a228  stb 3, 32(31)
  045a22c  b 0x45a984
  045a230  li 3, 0
  045a234  li 4, 255
  045a238  li 5, 3
  045a23c  stw 3, 148(31)
  045a240  stb 4, 188(31)
  045a244  stb 5, 32(31)
  045a248  b 0x45a984
  045a24c  lwz 4, 16(3)
  045a250  cmpwi 4, -1
  045a254  bt 2, 0x45a278
  045a258  lis 3, 164
  045a25c  slwi 4, 4, 8
  045a260  lwz 3, -28512(3)
  045a264  addc 3, 3, 4
  045a268  clrldi 3, 3, 32
  045a26c  lbz 3, 32(3)
  045a270  cmpwi 3, 2
  045a274  bt 2, 0x45a2a8
  045a278  lis 3, 151
  045a27c  lbz 5, 176(31)
  045a280  lis 4, 161
  045a284  addic 4, 4, -13692
  045a288  lwz 3, -25488(3)
  045a28c  addc 4, 5, 4
  045a290  slwi 3, 3, 4
  045a294  clrldi 4, 4, 32
  045a298  extsw 3, 3
  045a29c  lbzx 3, 4, 3
  045a2a0  cmpwi 3, 255
  045a2a4  bf 2, 0x45a2b4
  045a2a8  ori 3, 31, 0
  045a2ac  bl 0x459ff0
  045a2b0  b 0x45a984
  045a2b4  lis 3, 150
  045a2b8  addic 4, 3, 14312
  045a2bc  lbz 3, 188(31)
  045a2c0  sldi 5, 3, 7
  045a2c4  sldi 3, 3, 4
  045a2c8  subc 3, 5, 3
  045a2cc  lwzx 4, 4, 3
  045a2d0  cmpw 4, 31
  045a2d4  bf 2, 0x45a2ec
  045a2d8  lis 4, 150
  045a2dc  addic 4, 4, 14292
  045a2e0  lbzx 3, 4, 3
  045a2e4  cmpwi 3, 0
  045a2e8  bf 2, 0x45a304
  045a2ec  li 3, 0
  045a2f0  li 4, 4
  045a2f4  ori 5, 31, 0
  045a2f8  bl 0x15d12c
  045a2fc  nop
  045a300  stb 3, 188(31)
  045a304  lis 3, 151
  045a308  lfs 1, 20(31)
  045a30c  lfs 2, 16(31)
  045a310  addic 4, 31, 192
  045a314  addic 5, 3, -25376
  045a318  addic 3, 1, 176
  045a31c  lfs 3, 212(5)
  045a320  lfs 4, 208(5)
  045a324  fsubs 31, 3, 1
  045a328  fsubs 30, 4, 2
  045a32c  lfs 1, 216(5)
  045a330  lfs 2, 24(31)
  045a334  lfs 29, 220(5)
  045a338  fsubs 28, 1, 2
  045a33c  bl 0x5010c0
  045a340  nop
  045a344  lfs 1, 196(1)
  045a348  lfs 2, 200(1)
  045a34c  lfs 3, 180(1)
  045a350  fmuls 1, 1, 31
  045a354  lfs 4, 204(1)
  045a358  fmuls 2, 2, 31
  045a35c  lfs 5, 184(1)
  045a360  lis 3, 70
  045a364  fmuls 4, 4, 31
  045a368  lfs 6, 188(1)
  045a36c  lfs 7, 212(1)
  045a370  addi 3, 3, -24340
  045a374  lfs 8, 216(1)
  045a378  li 30, 0
  045a37c  ori 29, 30, 0
  045a380  fmadds 1, 3, 30, 1
  045a384  fmadds 2, 5, 30, 2
  045a388  fmadds 3, 6, 30, 4
  045a38c  lfs 4, 228(1)
  045a390  lfs 5, 220(1)
  045a394  lfs 6, 232(1)
  045a398  lfs 9, 236(1)
  045a39c  fmadds 1, 7, 28, 1
  045a3a0  fmadds 2, 8, 28, 2
  045a3a4  fmadds 3, 5, 28, 3
  045a3a8  lfs 5, 4(3)
  045a3ac  lfs 7, 8(3)
  045a3b0  fmadds 1, 4, 29, 1
  045a3b4  fmadds 2, 6, 29, 2
  045a3b8  lfs 6, 12(3)
  045a3bc  fmadds 3, 9, 29, 3
  045a3c0  lfs 8, 16(3)
  045a3c4  lfs 4, 24(3)
  045a3c8  lfs 15, 0(3)
  045a3cc  lfs 14, 20(3)
  045a3d0  stfd 1, 256(1)
  045a3d4  stfd 2, 248(1)
  045a3d8  stfd 3, 240(1)
  045a3dc  stfd 5, 304(1)
  045a3e0  stfd 7, 296(1)
  045a3e4  stfd 6, 272(1)
  045a3e8  stfs 8, 280(1)
  045a3ec  stfd 4, 288(1)
  045a3f0  lfd 2, 296(1)
  045a3f4  lfd 1, 304(1)
  045a3f8  bl 0xfcbe8
  045a3fc  nop
  045a400  lfd 31, 272(1)
  045a404  stfs 1, 128(1)
  045a408  fmr 1, 31
  045a40c  lfs 30, 280(1)
  045a410  fmr 2, 30
  045a414  bl 0xfcbe8
  045a418  nop
  045a41c  stfs 1, 132(1)
  045a420  fmr 2, 30
  045a424  fmr 1, 15
  045a428  bl 0xfcbe8
  045a42c  nop
  045a430  stfs 1, 136(1)
  045a434  fmr 1, 31
  045a438  stw 29, 144(1)
  045a43c  fmr 2, 30
  045a440  bl 0xfcbe8
  045a444  nop
  045a448  stfs 1, 148(1)
  045a44c  fmr 1, 31
  045a450  fmr 2, 30
  045a454  bl 0xfcbe8
  045a458  nop
  045a45c  stfs 1, 152(1)
  045a460  fmr 2, 30
  045a464  fmr 1, 31
  045a468  stw 29, 160(1)
  045a46c  bl 0xfcbe8
  045a470  nop
  045a474  stfs 1, 164(1)
  045a478  fmr 2, 30
  045a47c  fmr 1, 31
  045a480  bl 0xfcbe8
  045a484  nop
  045a488  lfs 2, 132(1)
  045a48c  lfs 3, 128(1)
  045a490  lfs 4, 208(31)
  045a494  lfs 5, 220(31)
  045a498  lfs 6, 212(31)
  045a49c  fmuls 7, 5, 2
  045a4a0  lfs 8, 192(31)
  045a4a4  lfs 9, 216(31)
  045a4a8  lfs 10, 148(1)
  045a4ac  lfs 11, 204(31)
  045a4b0  lfs 12, 136(1)
  045a4b4  fmuls 0, 5, 10
  045a4b8  lfs 13, 196(31)
  045a4bc  fmuls 30, 4, 10
  045a4c0  lfs 31, 200(31)
  045a4c4  fmuls 28, 6, 10
  045a4c8  lfs 29, 144(1)
  045a4cc  lfs 27, 224(31)
  045a4d0  fmuls 10, 9, 10
  045a4d4  lfs 26, 164(1)
  045a4d8  fmadds 7, 11, 3, 7
  045a4dc  fmuls 5, 5, 26
  045a4e0  lfs 25, 236(31)
  045a4e4  lfs 24, 228(31)
  045a4e8  fmuls 19, 4, 26
  045a4ec  lfs 23, 232(31)
  045a4f0  lfs 22, 152(1)
  045a4f4  fmadds 0, 11, 29, 0
  045a4f8  lfs 21, 160(1)
  045a4fc  fmadds 30, 8, 29, 30
  045a500  lfs 20, 140(1)
  045a504  fmadds 28, 13, 29, 28
  045a508  fmadds 10, 31, 29, 10
  045a50c  fmuls 29, 6, 26
  045a510  fmadds 7, 25, 12, 7
  045a514  fmuls 26, 9, 26
  045a518  lis 28, 114
  045a51c  fmadds 5, 11, 21, 5
  045a520  fmadds 19, 8, 21, 19
  045a524  fmadds 11, 25, 22, 0
  045a528  fmadds 30, 27, 22, 30
  045a52c  fmadds 28, 24, 22, 28
  045a530  lfs 0, 156(1)
  045a534  fmadds 10, 23, 22, 10
  045a538  fmadds 29, 13, 21, 29
  045a53c  fadds 7, 7, 20
  045a540  fmadds 26, 31, 21, 26
  045a544  fmadds 5, 25, 1, 5
  045a548  fmadds 25, 27, 1, 19
  045a54c  fadds 11, 11, 0
  045a550  lfs 0, 172(1)
  045a554  stfs 30, 144(1)
  045a558  stfs 28, 148(1)
  045a55c  stfs 7, 140(1)
  045a560  fadds 5, 5, 0
  045a564  fmadds 7, 24, 1, 29
  045a568  stfs 10, 152(1)
  045a56c  fmadds 1, 23, 1, 26
  045a570  fmuls 0, 28, 28
  045a574  stfs 11, 156(1)
  045a578  stfs 25, 160(1)
  045a57c  fmuls 4, 4, 2
  045a580  fmuls 29, 7, 7
  045a584  stfs 7, 164(1)
  045a588  fmadds 0, 30, 30, 0
  045a58c  stfs 1, 168(1)
  045a590  stfs 5, 172(1)
  045a594  lfs 5, -3056(28)
  045a598  fmuls 11, 5, 14
  045a59c  fmuls 5, 5, 14
  045a5a0  lfd 26, 288(1)
  045a5a4  fmadds 29, 25, 25, 29
  045a5a8  fmadds 0, 10, 10, 0
  045a5ac  fctidz 11, 11
  045a5b0  fctidz 5, 5
  045a5b4  fmadds 29, 1, 1, 29
  045a5b8  fsqrts 0, 0
  045a5bc  lfs 22, 16(31)
  045a5c0  lis 3, 15872
  045a5c4  lfs 21, 20(31)
  045a5c8  lfs 20, 24(31)
  045a5cc  stw 3, 156(1)
  045a5d0  li 3, 32
  045a5d4  fcfid 11, 11
  045a5d8  fcfid 5, 5
  045a5dc  fsqrts 29, 29
  045a5e0  frsp 11, 11
  045a5e4  frsp 5, 5
  045a5e8  fmuls 6, 6, 2
  045a5ec  fmuls 2, 9, 2
  045a5f0  fmadds 4, 8, 3, 4
  045a5f4  fdivs 11, 26, 11
  045a5f8  fdivs 5, 26, 5
  045a5fc  fmadds 6, 13, 3, 6
  045a600  fmadds 2, 31, 3, 2
  045a604  fmadds 3, 27, 12, 4
  045a608  fsub 8, 15, 0
  045a60c  fsub 9, 15, 0
  045a610  fsub 13, 0, 15
  045a614  fsub 31, 15, 29
  045a618  fsub 27, 15, 29
  045a61c  fsub 26, 15, 29
  045a620  fmadds 4, 24, 12, 6
  045a624  fsub 6, 15, 0
  045a628  fadds 3, 3, 22
  045a62c  fmadds 2, 23, 12, 2
  045a630  fsub 12, 0, 15
  045a634  fsub 24, 29, 15
  045a638  fadds 4, 4, 21
  045a63c  fadds 2, 2, 20
  045a640  stfs 3, 128(1)
  045a644  fsub 3, 29, 15
  045a648  stfs 4, 132(1)
  045a64c  fdivs 11, 11, 0
  045a650  stfs 2, 136(1)
  045a654  fdivs 5, 5, 29
  045a658  fsub 0, 0, 15
  045a65c  fsub 2, 29, 15
  045a660  fmuls 4, 30, 11
  045a664  fmuls 30, 28, 11
  045a668  fmuls 10, 10, 11
  045a66c  fsel 6, 6, 15, 4
  045a670  fsel 8, 8, 15, 30
  045a674  fsel 9, 9, 15, 10
  045a678  fmuls 11, 25, 5
  045a67c  fmuls 7, 7, 5
  045a680  fmuls 1, 1, 5
  045a684  fsel 4, 12, 6, 4
  045a688  fsel 5, 13, 8, 30
  045a68c  fsel 6, 0, 9, 10
  045a690  fsel 8, 31, 15, 11
  045a694  fsel 9, 27, 15, 7
  045a698  fsel 10, 26, 15, 1
  045a69c  stfs 4, 144(1)
  045a6a0  stfs 5, 148(1)
  045a6a4  stfs 6, 152(1)
  045a6a8  fsel 4, 24, 8, 11
  045a6ac  fsel 2, 2, 9, 7
  045a6b0  fsel 1, 3, 10, 1
  045a6b4  stfs 4, 160(1)
  045a6b8  stfs 2, 164(1)
  045a6bc  stfs 1, 168(1)
  045a6c0  bl 0xfc620
  045a6c4  nop
  045a6c8  slwi 4, 3, 8
  045a6cc  li 3, 32
  045a6d0  addic 27, 4, 24576
  045a6d4  bl 0xfc620
  045a6d8  nop
  045a6dc  addic 4, 3, 96
  045a6e0  li 3, 16
  045a6e4  or 27, 27, 4
  045a6e8  bl 0xfc620
  045a6ec  nop
  045a6f0  lfs 1, -3056(28)
  045a6f4  slwi 3, 3, 16
  045a6f8  fmuls 1, 1, 14
  045a6fc  lis 4, 32
  045a700  addc 3, 3, 4
  045a704  or 3, 27, 3
  045a708  oris 3, 3, 24576
  045a70c  extsw 27, 3
  045a710  fctiwz 1, 1
  045a714  stfd 1, 312(1)
  045a718  lwz 3, 316(1)
  045a71c  srawi 3, 3, 2
  045a720  addze 3, 3
  045a724  extsw 3, 3
  045a728  std 3, 312(1)
  045a72c  lfd 1, 312(1)
  045a730  fcfid 1, 1
  045a734  frsp 1, 1
  045a738  bl 0x502758
  045a73c  nop
  045a740  lfs 1, -3056(28)
  045a744  ori 26, 3, 0
  045a748  fmuls 1, 1, 14
  045a74c  fctiwz 1, 1
  045a750  stfd 1, 312(1)
  045a754  lwz 3, 316(1)
  045a758  srawi 3, 3, 1
  045a75c  addze 3, 3
  045a760  extsw 3, 3
  045a764  std 3, 312(1)
  045a768  lfd 1, 312(1)
  045a76c  fcfid 1, 1
  045a770  frsp 1, 1
  045a774  bl 0x502758
  045a778  nop
  045a77c  lfs 1, -3056(28)
  045a780  ori 28, 3, 0
  045a784  fmuls 1, 1, 14
  045a788  fctiwz 1, 1
  045a78c  stfd 1, 312(1)
  045a790  lwz 3, 316(1)
  045a794  srawi 3, 3, 2
  045a798  addze 3, 3
  045a79c  extsw 3, 3
  045a7a0  std 3, 312(1)
  045a7a4  lfd 1, 312(1)
  045a7a8  fcfid 1, 1
  045a7ac  frsp 1, 1
  045a7b0  bl 0x502758
  045a7b4  nop
  045a7b8  lis 7, 24704
  045a7bc  ori 10, 3, 0
  045a7c0  std 31, 112(1)
  045a7c4  addic 3, 1, 128
  045a7c8  ori 8, 26, 0
  045a7cc  addic 4, 1, 144
  045a7d0  ori 9, 28, 0
  045a7d4  addic 5, 1, 160
  045a7d8  ori 6, 27, 0
  045a7dc  ori 7, 7, 32896
  045a7e0  bl 0x133bf8
  045a7e4  nop
  045a7e8  addic 30, 30, 1
  045a7ec  cmpwi 30, 16
  045a7f0  bt 0, 0x45a3f0
  045a7f4  lfd 3, 256(1)
  045a7f8  lfs 1, 280(1)
  045a7fc  fabs 2, 3
  045a800  ld 3, 264(1)
  045a804  fcmpu 0, 2, 1
  045a808  cror 6, 1, 2
  045a80c  bt 6, 0x45a8a8
  045a810  lfd 2, 248(1)
  045a814  fcmpu 0, 2, 15
  045a818  cror 6, 0, 2
  045a81c  bt 6, 0x45a8a8
  045a820  fcmpu 0, 2, 1
  045a824  cror 6, 1, 2
  045a828  bt 6, 0x45a8a8
  045a82c  lfs 1, 208(31)
  045a830  lfs 4, 212(31)
  045a834  lfs 5, 216(31)
  045a838  fmuls 1, 1, 3
  045a83c  lfd 6, 240(1)
  045a840  fmuls 4, 4, 3
  045a844  lfs 7, 236(31)
  045a848  fmuls 5, 5, 3
  045a84c  lfs 8, 224(31)
  045a850  fmadds 6, 7, 2, 6
  045a854  lfs 7, 228(31)
  045a858  lfs 9, 232(31)
  045a85c  lfs 10, 220(31)
  045a860  fmadds 1, 8, 2, 1
  045a864  fmadds 4, 7, 2, 4
  045a868  fmadds 2, 9, 2, 5
  045a86c  fmadds 3, 10, 3, 6
  045a870  stfs 1, 0(3)
  045a874  stfs 4, 4(3)
  045a878  stfs 2, 8(3)
  045a87c  stfs 3, 12(3)
  045a880  lfs 3, 16(31)
  045a884  fadds 1, 1, 3
  045a888  stfs 1, 0(3)
  045a88c  lfs 1, 20(31)
  045a890  fadds 1, 4, 1
  045a894  stfs 1, 4(3)
  045a898  lfs 1, 24(31)
  045a89c  fadds 1, 2, 1
  045a8a0  stfs 1, 8(3)
  045a8a4  b 0x45a8e8
  045a8a8  stb 29, 0(3)
  045a8ac  stb 29, 1(3)
  045a8b0  stb 29, 2(3)
  045a8b4  stb 29, 3(3)
  045a8b8  stb 29, 4(3)
  045a8bc  stb 29, 5(3)
  045a8c0  stb 29, 6(3)
  045a8c4  stb 29, 7(3)
  045a8c8  stb 29, 8(3)
  045a8cc  stb 29, 9(3)
  045a8d0  stb 29, 10(3)
  045a8d4  stb 29, 11(3)
  045a8d8  stb 29, 12(3)
  045a8dc  stb 29, 13(3)
  045a8e0  stb 29, 14(3)
  045a8e4  stb 29, 15(3)
  045a8e8  lis 3, 113
  045a8ec  ori 4, 31, 0
  045a8f0  addic 3, 3, -5696
  045a8f4  bl 0x6d720
  045a8f8  nop
  045a8fc  b 0x45a984
  045a900  li 3, 3
  045a904  stb 3, 32(31)
  045a908  b 0x45a984
  045a90c  ori 5, 3, 0
  045a910  li 6, 0
  045a914  lis 3, 113
  045a918  ori 4, 31, 0
  045a91c  addic 3, 3, -5696
  045a920  stb 6, 0(5)
  045a924  stb 6, 1(5)
  045a928  stb 6, 2(5)
  045a92c  stb 6, 3(5)
  045a930  stb 6, 4(5)
  045a934  stb 6, 5(5)
  045a938  stb 6, 6(5)
  045a93c  stb 6, 7(5)
  045a940  stb 6, 8(5)
  045a944  stb 6, 9(5)
  045a948  stb 6, 10(5)
  045a94c  stb 6, 11(5)
  045a950  stb 6, 12(5)
  045a954  stb 6, 13(5)
  045a958  stb 6, 14(5)
  045a95c  stb 6, 15(5)
  045a960  bl 0x6d720
  045a964  nop
  045a968  b 0x45a984
  045a96c  lwz 4, 20(3)
  045a970  addic 5, 4, 1
  045a974  cmpwi 4, 60
  045a978  stw 5, 20(3)
  045a97c  bf 1, 0x45a90c
  045a980  b 0x45a900
  045a984  ld 0, 544(1)
  045a988  mtlr 0
  045a98c  lfd 14, 384(1)
  045a990  lfd 15, 392(1)
  045a994  lfd 16, 400(1)
  045a998  lfd 17, 408(1)
  045a99c  lfd 18, 416(1)
  045a9a0  lfd 19, 424(1)
  045a9a4  lfd 20, 432(1)
  045a9a8  lfd 21, 440(1)
  045a9ac  lfd 22, 448(1)
  045a9b0  lfd 23, 456(1)
  045a9b4  lfd 24, 464(1)
  045a9b8  lfd 25, 472(1)
  045a9bc  lfd 26, 480(1)
  045a9c0  lfd 27, 488(1)
  045a9c4  lfd 28, 496(1)
  045a9c8  lfd 29, 504(1)
  045a9cc  lfd 30, 512(1)
  045a9d0  lfd 31, 520(1)
  045a9d4  ld 26, 336(1)
  045a9d8  ld 27, 344(1)
  045a9dc  ld 28, 352(1)
  045a9e0  ld 29, 360(1)
  045a9e4  ld 30, 368(1)
  045a9e8  ld 31, 376(1)
  045a9ec  addi 1, 1, 528
  045a9f0  blr
