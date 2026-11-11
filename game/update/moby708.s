# game/update/moby708.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_708:   # 0x42a050, 0x638 bytes
  042a050  stdu 1, -352(1)
  042a054  mflr 0
  042a058  std 0, 368(1)
  042a05c  stfd 27, 312(1)
  042a060  stfd 28, 320(1)
  042a064  stfd 29, 328(1)
  042a068  stfd 30, 336(1)
  042a06c  stfd 31, 344(1)
  042a070  std 31, 304(1)
  042a074  lbz 4, 32(3)
  042a078  std 29, 288(1)
  042a07c  ori 31, 3, 0
  042a080  lwz 29, 120(3)
  042a084  cmpwi 4, 0
  042a088  cmpwi 1, 4, 2
  042a08c  std 30, 296(1)
  042a090  std 28, 280(1)
  042a094  std 27, 272(1)
  042a098  cmpwi 6, 4, -1
  042a09c  bt 1, 0x42a0a8
  042a0a0  bf 25, 0x42a650
  042a0a4  b 0x42a0b0
  042a0a8  bt 6, 0x42a0e8
  042a0ac  b 0x42a650
  042a0b0  li 3, 2
  042a0b4  li 5, 0
  042a0b8  lis 4, 165
  042a0bc  stb 3, 32(31)
  042a0c0  lwz 3, 20(29)
  042a0c4  addic 4, 4, 7136
  042a0c8  stw 5, 0(29)
  042a0cc  slwi 3, 3, 2
  042a0d0  li 5, 1
  042a0d4  extsw 3, 3
  042a0d8  lwzx 3, 4, 3
  042a0dc  stb 5, 4(29)
  042a0e0  stw 3, 16(29)
  042a0e4  b 0x42a650
  042a0e8  ori 3, 31, 0
  042a0ec  lis 4, 51
  042a0f0  li 5, 0
  042a0f4  bl 0x10675c
  042a0f8  nop
  042a0fc  cmpwi 3, 0
  042a100  bt 2, 0x42a19c
  042a104  lis 3, 67
  042a108  li 6, 0
  042a10c  addi 3, 3, -24552
  042a110  li 11, -1
  042a114  li 7, 1
  042a118  addic 4, 1, 192
  042a11c  addic 5, 31, 16
  042a120  lfs 1, 0(3)
  042a124  li 8, 5
  042a128  stw 6, 204(1)
  042a12c  li 9, 2
  042a130  stw 6, 200(1)
  042a134  li 10, 4
  042a138  stw 6, 196(1)
  042a13c  fmr 2, 1
  042a140  stw 6, 192(1)
  042a144  lfs 4, 12(3)
  042a148  lfs 3, 4(3)
  042a14c  lfs 5, 8(3)
  042a150  lfs 7, 16(3)
  042a154  fmr 6, 4
  042a158  std 11, 144(1)
  042a15c  ori 3, 31, 0
  042a160  std 7, 160(1)
  042a164  std 7, 168(1)
  042a168  std 11, 176(1)
  042a16c  std 6, 184(1)
  042a170  bl 0x10e030
  042a174  nop
  042a178  li 3, 0
  042a17c  li 4, 0
  042a180  ori 5, 31, 0
  042a184  bl 0x15d12c
  042a188  nop
  042a18c  ori 3, 31, 0
  042a190  bl 0xefb38
  042a194  nop
  042a198  b 0x42a650
  042a19c  lis 3, 67
  042a1a0  lfs 1, 24(31)
  042a1a4  addi 3, 3, -24552
  042a1a8  lfs 30, 20(3)
  042a1ac  lwz 3, 20(29)
  042a1b0  fsubs 1, 1, 30
  042a1b4  cmpwi 3, -1
  042a1b8  stfs 1, 24(31)
  042a1bc  bf 2, 0x42a1d0
  042a1c0  ori 3, 31, 0
  042a1c4  bl 0xefb38
  042a1c8  nop
  042a1cc  b 0x42a650
  042a1d0  lwz 3, 16(29)
  042a1d4  lwz 3, 0(3)
  042a1d8  cmpwi 3, 0
  042a1dc  bf 2, 0x42a1f0
  042a1e0  ori 3, 31, 0
  042a1e4  bl 0xefb38
  042a1e8  nop
  042a1ec  b 0x42a650
  042a1f0  lis 3, 67
  042a1f4  lis 4, 114
  042a1f8  addi 30, 3, -24552
  042a1fc  lis 3, 133
  042a200  lfs 3, 24(30)
  042a204  lfs 2, 31732(3)
  042a208  lfs 1, 68(31)
  042a20c  fmuls 2, 2, 3
  042a210  lfs 4, -3052(4)
  042a214  fmuls 2, 2, 4
  042a218  bl 0x502578
  042a21c  nop
  042a220  lis 3, 151
  042a224  lfs 2, 20(31)
  042a228  addic 3, 3, -25376
  042a22c  stfs 1, 68(31)
  042a230  lfs 1, 16(31)
  042a234  lfs 3, 132(3)
  042a238  lfs 4, 128(3)
  042a23c  fsubs 3, 2, 3
  042a240  lfs 5, 24(31)
  042a244  fsubs 4, 1, 4
  042a248  lfs 6, 136(3)
  042a24c  fsubs 5, 5, 6
  042a250  fmuls 3, 3, 3
  042a254  fmadds 3, 4, 4, 3
  042a258  lfs 4, 28(30)
  042a25c  fmadds 3, 5, 5, 3
  042a260  fsqrts 3, 3
  042a264  fcmpu 0, 3, 4
  042a268  cror 6, 1, 2
  042a26c  bt 6, 0x42a2f4
  042a270  lis 3, 67
  042a274  li 7, 0
  042a278  addi 6, 3, -24552
  042a27c  li 12, -1
  042a280  li 11, 1
  042a284  ori 3, 31, 0
  042a288  addic 4, 1, 208
  042a28c  lfs 1, 0(6)
  042a290  addic 5, 31, 16
  042a294  stw 7, 220(1)
  042a298  li 8, 10
  042a29c  stw 7, 216(1)
  042a2a0  li 9, 20
  042a2a4  stw 7, 212(1)
  042a2a8  li 10, 60
  042a2ac  stw 7, 208(1)
  042a2b0  fmr 2, 1
  042a2b4  lfs 3, 32(6)
  042a2b8  lfs 4, 36(6)
  042a2bc  lfs 5, 8(6)
  042a2c0  lfs 6, 12(6)
  042a2c4  lfs 7, 16(6)
  042a2c8  std 12, 144(1)
  042a2cc  std 11, 160(1)
  042a2d0  std 11, 168(1)
  042a2d4  std 12, 176(1)
  042a2d8  std 7, 184(1)
  042a2dc  bl 0x10e030
  042a2e0  nop
  042a2e4  ori 3, 31, 0
  042a2e8  bl 0xefb38
  042a2ec  nop
  042a2f0  b 0x42a650
  042a2f4  lwz 3, 16(29)
  042a2f8  lwz 5, 0(29)
  042a2fc  lbz 4, 4(29)
  042a300  extsb 7, 4
  042a304  lwz 6, 0(3)
  042a308  addc 8, 5, 6
  042a30c  addc 30, 8, 7
  042a310  li 9, 0
  042a314  divw 8, 30, 6
  042a318  mullw 8, 8, 6
  042a31c  subc 7, 7, 9
  042a320  addic 6, 6, -1
  042a324  li 9, 0
  042a328  subc 30, 30, 8
  042a32c  subc 8, 9, 6
  042a330  sradi 7, 7, 63
  042a334  and 7, 7, 8
  042a338  addc 6, 6, 7
  042a33c  cmpw 30, 6
  042a340  bf 2, 0x42a370
  042a344  neg 4, 4
  042a348  extsb 6, 4
  042a34c  stb 4, 4(29)
  042a350  lwz 4, 0(3)
  042a354  addc 5, 5, 4
  042a358  addc 30, 5, 6
  042a35c  lfs 1, 16(31)
  042a360  divw 5, 30, 4
  042a364  mullw 4, 5, 4
  042a368  lfs 2, 20(31)
  042a36c  subc 30, 30, 4
  042a370  sldi 28, 30, 4
  042a374  addc 3, 3, 28
  042a378  clrldi 3, 3, 32
  042a37c  lis 4, 115
  042a380  lfs 3, 16(3)
  042a384  lfs 4, 20(3)
  042a388  fsubs 1, 3, 1
  042a38c  lis 3, 67
  042a390  fsubs 2, 4, 2
  042a394  addi 3, 3, -24552
  042a398  addic 4, 4, 22784
  042a39c  fabs 4, 1
  042a3a0  fabs 3, 2
  042a3a4  stfs 1, 224(1)
  042a3a8  stfs 2, 228(1)
  042a3ac  fsubs 1, 4, 3
  042a3b0  stfs 1, 232(1)
  042a3b4  lwz 5, 224(1)
  042a3b8  lfs 31, 0(3)
  042a3bc  lfs 1, 224(1)
  042a3c0  lwz 3, 228(1)
  042a3c4  lfs 2, 228(1)
  042a3c8  lwz 6, 232(1)
  042a3cc  rlwinm 3, 3, 3, 29, 29
  042a3d0  fabs 5, 2
  042a3d4  lfs 2, 232(1)
  042a3d8  fabs 1, 1
  042a3dc  rlwimi 3, 6, 2, 30, 30
  042a3e0  fsub 6, 2, 31
  042a3e4  rlwimi 3, 5, 4, 28, 28
  042a3e8  fsub 7, 2, 31
  042a3ec  ori 5, 4, 0
  042a3f0  rlwimi 5, 3, 2, 26, 28
  042a3f4  slwi 3, 3, 2
  042a3f8  clrldi 5, 5, 32
  042a3fc  fsel 3, 6, 1, 3
  042a400  lfsx 2, 4, 3
  042a404  lfs 1, 4(5)
  042a408  fsel 4, 7, 5, 4
  042a40c  fcmpu 0, 3, 31
  042a410  bt 1, 0x42a41c
  042a414  fmr 2, 31
  042a418  b 0x42a544
  042a41c  fsubs 5, 4, 3
  042a420  fadds 3, 4, 3
  042a424  addic 6, 1, 16
  042a428  li 3, 2
  042a42c  addic 4, 6, 236
  042a430  addic 5, 6, 220
  042a434  mtctr 3
  042a438  fdivs 3, 5, 3
  042a43c  fmuls 5, 3, 3
  042a440  stfs 3, 248(1)
  042a444  stfs 3, 240(1)
  042a448  stfs 3, 244(1)
  042a44c  stfs 3, 236(1)
  042a450  lfs 6, 248(1)
  042a454  lfs 7, 240(1)
  042a458  lfs 8, 244(1)
  042a45c  fmuls 3, 5, 5
  042a460  fmuls 7, 7, 5
  042a464  fmuls 6, 6, 3
  042a468  fmuls 4, 3, 3
  042a46c  fmuls 3, 8, 3
  042a470  stfs 7, 240(1)
  042a474  fmuls 5, 6, 5
  042a478  stfs 3, 244(1)
  042a47c  stfs 5, 248(1)
  042a480  lfs 3, 220(6)
  042a484  fmuls 3, 3, 4
  042a488  stfs 3, 236(6)
  042a48c  lfs 3, 4(5)
  042a490  addic 5, 5, 8
  042a494  fmuls 3, 3, 4
  042a498  addic 6, 6, 8
  042a49c  stfs 3, 4(4)
  042a4a0  addic 4, 4, 8
  042a4a4  bdnz 0x42a480
  042a4a8  ori 7, 1, 0
  042a4ac  li 4, 4
  042a4b0  lis 6, 115
  042a4b4  addic 5, 7, 236
  042a4b8  mtctr 4
  042a4bc  addic 6, 6, 22752
  042a4c0  ori 4, 5, 0
  042a4c4  lfs 3, 236(7)
  042a4c8  lfs 4, 0(6)
  042a4cc  fmuls 3, 3, 4
  042a4d0  lfs 4, 4(6)
  042a4d4  addic 6, 6, 8
  042a4d8  stfs 3, 236(7)
  042a4dc  lfs 3, 4(5)
  042a4e0  addic 7, 7, 8
  042a4e4  fmuls 3, 3, 4
  042a4e8  stfs 3, 4(5)
  042a4ec  addic 5, 5, 8
  042a4f0  bdnz 0x42a4c4
  042a4f4  ori 5, 3, 0
  042a4f8  fmr 3, 31
  042a4fc  ori 3, 1, 0
  042a500  mtctr 5
  042a504  lfs 4, 236(3)
  042a508  fadds 3, 3, 4
  042a50c  addic 3, 3, 16
  042a510  lfs 4, 4(4)
  042a514  lfs 5, 8(4)
  042a518  lfs 6, 12(4)
  042a51c  addic 4, 4, 16
  042a520  fadds 3, 3, 4
  042a524  fadds 3, 3, 5
  042a528  fadds 3, 3, 6
  042a52c  bdnz 0x42a504
  042a530  lis 3, 67
  042a534  addi 3, 3, -24552
  042a538  lfs 4, 40(3)
  042a53c  fadds 3, 3, 4
  042a540  fmadds 2, 3, 2, 1
  042a544  lis 3, 67
  042a548  fmr 1, 2
  042a54c  addic 5, 29, 48
  042a550  addi 27, 3, -24552
  042a554  ori 3, 31, 0
  042a558  lfs 2, 44(27)
  042a55c  lfs 29, 52(27)
  042a560  lfs 3, 48(27)
  042a564  fmr 4, 29
  042a568  bl 0xff2e8
  042a56c  nop
  042a570  lwz 3, 16(29)
  042a574  lfs 1, 20(31)
  042a578  addc 3, 3, 28
  042a57c  lfs 2, 16(31)
  042a580  clrldi 3, 3, 32
  042a584  lfs 3, 20(3)
  042a588  lfs 4, 16(3)
  042a58c  fsubs 5, 3, 1
  042a590  fsubs 6, 4, 2
  042a594  lfs 7, 24(3)
  042a598  lfs 8, 24(31)
  042a59c  fsubs 9, 7, 8
  042a5a0  lis 3, 114
  042a5a4  lfs 11, 32(27)
  042a5a8  fmuls 10, 5, 5
  042a5ac  lfs 12, -3052(3)
  042a5b0  fmuls 11, 12, 11
  042a5b4  fmadds 10, 6, 6, 10
  042a5b8  fmadds 10, 9, 9, 10
  042a5bc  fsqrts 10, 10
  042a5c0  fdivs 11, 11, 10
  042a5c4  fsub 12, 31, 10
  042a5c8  fsub 13, 10, 31
  042a5cc  fsub 0, 31, 10
  042a5d0  fsub 28, 31, 10
  042a5d4  fsub 27, 10, 31
  042a5d8  fsub 10, 10, 31
  042a5dc  fmuls 5, 5, 11
  042a5e0  fmuls 6, 6, 11
  042a5e4  fmuls 9, 9, 11
  042a5e8  fsel 11, 12, 31, 5
  042a5ec  fsel 12, 0, 31, 6
  042a5f0  fsel 0, 28, 31, 9
  042a5f4  fsel 5, 13, 11, 5
  042a5f8  fsel 6, 27, 12, 6
  042a5fc  fsel 9, 10, 0, 9
  042a600  fadds 1, 1, 5
  042a604  fadds 5, 2, 6
  042a608  fadds 2, 8, 9
  042a60c  fsubs 3, 1, 3
  042a610  fsubs 4, 5, 4
  042a614  fsubs 6, 2, 7
  042a618  stfs 5, 16(31)
  042a61c  stfs 1, 20(31)
  042a620  fmuls 3, 3, 3
  042a624  fmadds 3, 4, 4, 3
  042a628  fmadds 3, 6, 6, 3
  042a62c  fsqrts 3, 3
  042a630  fcmpu 0, 3, 29
  042a634  cror 6, 1, 2
  042a638  bt 6, 0x42a648
  042a63c  stfs 2, 24(31)
  042a640  stw 30, 0(29)
  042a644  lfs 2, 24(31)
  042a648  fadds 1, 2, 30
  042a64c  stfs 1, 24(31)
  042a650  ld 0, 368(1)
  042a654  mtlr 0
  042a658  lfd 27, 312(1)
  042a65c  lfd 28, 320(1)
  042a660  lfd 29, 328(1)
  042a664  lfd 30, 336(1)
  042a668  lfd 31, 344(1)
  042a66c  ld 27, 272(1)
  042a670  ld 28, 280(1)
  042a674  ld 29, 288(1)
  042a678  ld 30, 296(1)
  042a67c  ld 31, 304(1)
  042a680  addi 1, 1, 352
  042a684  blr
