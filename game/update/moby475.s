# game/update/moby475.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M475_0039a180:   # 0x39a180, 0x540 bytes
  039a180  stdu 1, -512(1)
  039a184  mflr 0
  039a188  std 0, 528(1)
  039a18c  stfd 30, 496(1)
  039a190  stfd 31, 504(1)
  039a194  std 31, 488(1)
  039a198  lis 4, 165
  039a19c  lwz 31, 120(3)
  039a1a0  lwz 3, 7128(4)
  039a1a4  lwz 4, 96(31)
  039a1a8  slwi 4, 4, 7
  039a1ac  addc 3, 3, 4
  039a1b0  clrldi 3, 3, 32
  039a1b4  lfs 1, 4(3)
  039a1b8  lfs 2, 0(3)
  039a1bc  fmuls 1, 1, 1
  039a1c0  lfs 3, 8(3)
  039a1c4  std 29, 472(1)
  039a1c8  lis 3, 58
  039a1cc  addi 29, 3, -24248
  039a1d0  fmadds 1, 2, 2, 1
  039a1d4  lfs 2, 0(29)
  039a1d8  fmadds 1, 3, 3, 1
  039a1dc  fsqrts 1, 1
  039a1e0  fmuls 31, 1, 2
  039a1e4  std 30, 480(1)
  039a1e8  std 28, 464(1)
  039a1ec  std 27, 456(1)
  039a1f0  std 26, 448(1)
  039a1f4  std 25, 440(1)
  039a1f8  std 24, 432(1)
  039a1fc  std 23, 424(1)
  039a200  fmr 1, 31
  039a204  bl 0x502758
  039a208  nop
  039a20c  lfs 1, 112(31)
  039a210  ori 30, 3, 0
  039a214  lfs 2, 108(31)
  039a218  lfs 3, 4(29)
  039a21c  fadds 1, 1, 2
  039a220  fdivs 31, 3, 31
  039a224  stfs 1, 112(31)
  039a228  lfs 2, 8(29)
  039a22c  fcmpu 0, 1, 2
  039a230  cror 6, 0, 2
  039a234  bt 6, 0x39a244
  039a238  fsubs 1, 1, 2
  039a23c  stfs 1, 112(31)
  039a240  b 0x39a264
  039a244  lis 3, 58
  039a248  addi 3, 3, -24248
  039a24c  lfs 3, 12(3)
  039a250  fcmpu 0, 1, 3
  039a254  cror 6, 1, 2
  039a258  bt 6, 0x39a264
  039a25c  fadds 1, 1, 2
  039a260  stfs 1, 112(31)
  039a264  lis 3, 58
  039a268  lis 4, 114
  039a26c  addi 29, 3, -24248
  039a270  lis 3, 161
  039a274  lfs 1, 16(29)
  039a278  lfs 2, -3056(4)
  039a27c  lwz 3, 1808(3)
  039a280  fmuls 1, 2, 1
  039a284  fctiwz 1, 1
  039a288  stfd 1, 400(1)
  039a28c  lwz 4, 404(1)
  039a290  extsw 28, 4
  039a294  divw 5, 3, 28
  039a298  mullw 4, 5, 4
  039a29c  subc 3, 3, 4
  039a2a0  extsw 3, 3
  039a2a4  bl 0x502730
  039a2a8  nop
  039a2ac  fmr 30, 1
  039a2b0  ori 3, 28, 0
  039a2b4  bl 0x502730
  039a2b8  nop
  039a2bc  fdivs 1, 30, 1
  039a2c0  lfs 2, 20(29)
  039a2c4  lfs 3, 24(29)
  039a2c8  lfs 4, 28(29)
  039a2cc  lfs 5, 32(29)
  039a2d0  lfs 6, 36(29)
  039a2d4  lfs 7, 40(29)
  039a2d8  lis 3, 132
  039a2dc  lfs 8, 44(29)
  039a2e0  lis 4, 132
  039a2e4  lfs 9, 48(29)
  039a2e8  lfs 10, 52(29)
  039a2ec  lwz 3, 11940(3)
  039a2f0  lwz 4, 11944(4)
  039a2f4  extsw 3, 3
  039a2f8  extsw 4, 4
  039a2fc  fmsubs 1, 1, 2, 3
  039a300  fsubs 2, 4, 1
  039a304  fsubs 3, 5, 1
  039a308  fsub 4, 1, 2
  039a30c  fsel 1, 4, 2, 1
  039a310  fsub 2, 3, 1
  039a314  fsel 1, 2, 3, 1
  039a318  fmuls 2, 1, 1
  039a31c  fmuls 3, 2, 1
  039a320  fmuls 4, 2, 3
  039a324  fmadds 1, 3, 6, 1
  039a328  fmuls 3, 2, 4
  039a32c  fmadds 1, 4, 7, 1
  039a330  fmuls 2, 2, 3
  039a334  fmadds 1, 3, 8, 1
  039a338  fmadds 1, 2, 9, 1
  039a33c  fmadds 1, 1, 10, 10
  039a340  bl 0x5027bc
  039a344  nop
  039a348  lis 4, 132
  039a34c  ori 29, 3, 0
  039a350  lis 28, 132
  039a354  lwz 3, 11924(4)
  039a358  extsw 3, 3
  039a35c  lwz 28, 11948(28)
  039a360  bl 0x685c4
  039a364  nop
  039a368  std 3, 232(1)
  039a36c  li 3, 0
  039a370  lis 9, 0
  039a374  li 4, 0
  039a378  li 5, 1
  039a37c  li 6, 1
  039a380  li 7, 1
  039a384  li 8, 0
  039a388  ori 9, 9, 65424
  039a38c  bl 0x502fd4
  039a390  nop
  039a394  std 3, 240(1)
  039a398  li 4, 0
  039a39c  li 3, 0
  039a3a0  li 5, 0
  039a3a4  li 6, 0
  039a3a8  li 7, 0
  039a3ac  li 8, 0
  039a3b0  bl 0x502f08
  039a3b4  nop
  039a3b8  lis 27, 269
  039a3bc  lis 26, 132
  039a3c0  std 3, 224(1)
  039a3c4  lis 25, 269
  039a3c8  lis 24, 132
  039a3cc  li 7, 128
  039a3d0  lwz 3, -28088(27)
  039a3d4  lwz 4, 11932(26)
  039a3d8  lwz 5, -28084(25)
  039a3dc  lwz 6, 11936(24)
  039a3e0  bl 0x502ea8
  039a3e4  nop
  039a3e8  lis 4, 132
  039a3ec  std 3, 248(1)
  039a3f0  lwz 3, 11928(4)
  039a3f4  extsw 3, 3
  039a3f8  bl 0x685c4
  039a3fc  nop
  039a400  std 3, 376(1)
  039a404  li 3, 0
  039a408  lis 9, 0
  039a40c  li 4, 0
  039a410  li 5, 1
  039a414  li 6, 1
  039a418  li 7, 1
  039a41c  li 8, 0
  039a420  ori 9, 9, 65424
  039a424  bl 0x502fd4
  039a428  nop
  039a42c  std 3, 384(1)
  039a430  li 4, 0
  039a434  li 3, 0
  039a438  li 5, 0
  039a43c  li 6, 0
  039a440  li 7, 0
  039a444  li 8, 0
  039a448  bl 0x502f08
  039a44c  nop
  039a450  lwz 4, -28088(27)
  039a454  std 3, 368(1)
  039a458  li 7, 128
  039a45c  ori 3, 4, 0
  039a460  lwz 4, 11932(26)
  039a464  lwz 5, -28084(25)
  039a468  lwz 8, 11936(24)
  039a46c  ori 6, 8, 0
  039a470  bl 0x502ea8
  039a474  nop
  039a478  std 3, 392(1)
  039a47c  li 3, 0
  039a480  lis 12, 132
  039a484  lis 9, 132
  039a488  lis 26, 132
  039a48c  lis 10, 132
  039a490  lis 11, 132
  039a494  ori 6, 1, 0
  039a498  ori 25, 3, 0
  039a49c  ori 7, 1, 0
  039a4a0  addic 12, 12, 11988
  039a4a4  ori 8, 1, 0
  039a4a8  addic 27, 1, 112
  039a4ac  addic 26, 26, 12016
  039a4b0  addic 9, 9, 11952
  039a4b4  addic 10, 10, 11956
  039a4b8  addic 24, 1, 256
  039a4bc  addic 11, 11, 11984
  039a4c0  lfs 1, 0(9)
  039a4c4  lfs 2, 0(10)
  039a4c8  stfs 1, 192(6)
  039a4cc  stfs 2, 196(6)
  039a4d0  lfs 1, 0(11)
  039a4d4  lfs 2, 112(31)
  039a4d8  cmpwi 3, 2
  039a4dc  fsubs 1, 1, 2
  039a4e0  lfs 2, 0(12)
  039a4e4  stw 29, 176(7)
  039a4e8  stfs 2, 340(6)
  039a4ec  stw 28, 320(7)
  039a4f0  stfs 1, 336(6)
  039a4f4  lfs 1, 0(26)
  039a4f8  stfs 1, 0(27)
  039a4fc  lfs 1, 4(26)
  039a500  stfs 1, 4(27)
  039a504  lfs 1, 8(26)
  039a508  stfs 1, 8(27)
  039a50c  lfs 1, 12(26)
  039a510  stfs 1, 12(27)
  039a514  lfs 1, 0(26)
  039a518  stfs 1, 0(24)
  039a51c  lfs 1, 4(26)
  039a520  stfs 1, 4(24)
  039a524  lfs 1, 8(26)
  039a528  stfs 1, 8(24)
  039a52c  lfs 1, 12(26)
  039a530  stfs 1, 12(24)
  039a534  bf 0, 0x39a550
  039a538  lfs 1, 112(8)
  039a53c  lfs 2, 256(8)
  039a540  fsubs 1, 1, 31
  039a544  fsubs 2, 2, 31
  039a548  stfs 1, 112(8)
  039a54c  stfs 2, 256(8)
  039a550  addic 3, 3, 1
  039a554  addic 9, 9, 8
  039a558  cmpwi 3, 4
  039a55c  addic 24, 24, 16
  039a560  addic 10, 10, 8
  039a564  addic 6, 6, 8
  039a568  addic 11, 11, 8
  039a56c  addic 7, 7, 4
  039a570  addic 12, 12, 8
  039a574  addic 27, 27, 16
  039a578  addic 26, 26, 16
  039a57c  addic 8, 8, 16
  039a580  bt 0, 0x39a4c0
  039a584  addic 26, 30, 2
  039a588  ori 27, 25, 0
  039a58c  cmpwi 26, 0
  039a590  bf 1, 0x39a684
  039a594  lis 24, 161
  039a598  addic 30, 30, 1
  039a59c  addic 24, 24, 24396
  039a5a0  cmpwi 27, 0
  039a5a4  cmpw 6, 27, 30
  039a5a8  bf 2, 0x39a5c0
  039a5ac  stw 25, 180(1)
  039a5b0  stw 25, 176(1)
  039a5b4  stw 25, 324(1)
  039a5b8  stw 25, 320(1)
  039a5bc  b 0x39a5f0
  039a5c0  cmpwi 1, 27, 1
  039a5c4  bf 26, 0x39a5dc
  039a5c8  stw 25, 188(1)
  039a5cc  stw 25, 184(1)
  039a5d0  stw 25, 332(1)
  039a5d4  stw 25, 328(1)
  039a5d8  b 0x39a5f0
  039a5dc  bf 6, 0x39a5f0
  039a5e0  stw 29, 180(1)
  039a5e4  stw 29, 176(1)
  039a5e8  stw 28, 324(1)
  039a5ec  stw 28, 320(1)
  039a5f0  lis 23, 165
  039a5f4  lwz 4, 96(31)
  039a5f8  addic 3, 1, 112
  039a5fc  li 5, 0
  039a600  slwi 4, 4, 7
  039a604  li 7, 9
  039a608  lwz 6, 7128(23)
  039a60c  addc 4, 6, 4
  039a610  lwz 6, 28(24)
  039a614  clrldi 4, 4, 32
  039a618  bl 0x72280
  039a61c  nop
  039a620  lwz 4, 96(31)
  039a624  lwz 6, 7128(23)
  039a628  addic 3, 1, 256
  039a62c  slwi 4, 4, 7
  039a630  li 5, 0
  039a634  addc 4, 6, 4
  039a638  lwz 6, 28(24)
  039a63c  clrldi 4, 4, 32
  039a640  li 7, 9
  039a644  bl 0x72280
  039a648  nop
  039a64c  li 4, 4
  039a650  ori 3, 1, 0
  039a654  mtctr 4
  039a658  lfs 1, 112(3)
  039a65c  lfs 2, 256(3)
  039a660  fadds 1, 1, 31
  039a664  fadds 2, 2, 31
  039a668  stfs 1, 112(3)
  039a66c  stfs 2, 256(3)
  039a670  addic 3, 3, 16
  039a674  bdnz 0x39a658
  039a678  addic 27, 27, 1
  039a67c  cmpw 27, 26
  039a680  bt 0, 0x39a5a0
  039a684  ld 0, 528(1)
  039a688  mtlr 0
  039a68c  lfd 30, 496(1)
  039a690  lfd 31, 504(1)
  039a694  ld 23, 424(1)
  039a698  ld 24, 432(1)
  039a69c  ld 25, 440(1)
  039a6a0  ld 26, 448(1)
  039a6a4  ld 27, 456(1)
  039a6a8  ld 28, 464(1)
  039a6ac  ld 29, 472(1)
  039a6b0  ld 30, 480(1)
  039a6b4  ld 31, 488(1)
  039a6b8  addi 1, 1, 512
  039a6bc  blr

M475_0039a6c0:   # 0x39a6c0, 0x14 bytes
  039a6c0  lis 3, 132
  039a6c4  lis 4, 1
  039a6c8  addic 3, 3, 12084
  039a6cc  stw 4, 72(3)
  039a6d0  blr

UpdateMoby_475:   # 0x39a6d8, 0x24 bytes
  039a6d8  stdu 1, -112(1)
  039a6dc  mflr 0
  039a6e0  std 0, 128(1)
  039a6e4  bl 0xefb38
  039a6e8  nop
  039a6ec  ld 0, 128(1)
  039a6f0  mtlr 0
  039a6f4  addi 1, 1, 112
  039a6f8  blr
