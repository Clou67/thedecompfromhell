# game/update/moby455.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M455_0038a0c4:   # 0x38a0c4, 0x14 bytes
  038a0c4  lis 3, 132
  038a0c8  lis 4, 1
  038a0cc  addic 3, 3, 8264
  038a0d0  stw 4, 72(3)
  038a0d4  blr

M455_0038a0e0:   # 0x38a0e0, 0x164 bytes
  038a0e0  stdu 1, -144(1)
  038a0e4  mflr 0
  038a0e8  std 0, 160(1)
  038a0ec  stfd 30, 128(1)
  038a0f0  stfd 31, 136(1)
  038a0f4  std 31, 120(1)
  038a0f8  cmpwi 3, -1
  038a0fc  std 30, 112(1)
  038a100  ori 31, 4, 0
  038a104  bt 2, 0x38a220
  038a108  lis 4, 57
  038a10c  lis 5, 165
  038a110  addi 4, 4, -24360
  038a114  sldi 3, 3, 7
  038a118  lfs 31, 0(4)
  038a11c  lfs 30, 4(4)
  038a120  fmr 1, 31
  038a124  lwz 4, 7128(5)
  038a128  fmr 2, 30
  038a12c  addc 3, 4, 3
  038a130  clrldi 30, 3, 32
  038a134  bl 0xfcbe8
  038a138  nop
  038a13c  stfs 1, 0(31)
  038a140  fmr 1, 31
  038a144  fmr 2, 30
  038a148  bl 0xfcbe8
  038a14c  nop
  038a150  stfs 1, 4(31)
  038a154  fmr 2, 30
  038a158  fmr 1, 31
  038a15c  bl 0xfcbe8
  038a160  nop
  038a164  stfs 1, 8(31)
  038a168  lfs 2, 16(30)
  038a16c  lfs 3, 4(31)
  038a170  lfs 4, 0(30)
  038a174  lfs 5, 0(31)
  038a178  lfs 6, 20(30)
  038a17c  fmuls 2, 2, 3
  038a180  lfs 7, 32(30)
  038a184  lfs 8, 28(30)
  038a188  fmuls 6, 6, 3
  038a18c  lfs 9, 24(30)
  038a190  fmuls 8, 8, 3
  038a194  lfs 10, 4(30)
  038a198  fmuls 3, 9, 3
  038a19c  li 3, 0
  038a1a0  fmadds 2, 4, 5, 2
  038a1a4  lfs 4, 12(30)
  038a1a8  lfs 9, 8(30)
  038a1ac  lfs 11, 36(30)
  038a1b0  fmadds 4, 4, 5, 8
  038a1b4  fmadds 6, 10, 5, 6
  038a1b8  lfs 10, 40(30)
  038a1bc  fmadds 3, 9, 5, 3
  038a1c0  fmadds 2, 7, 1, 2
  038a1c4  lfs 7, 44(30)
  038a1c8  lfs 5, 12(31)
  038a1cc  fmadds 4, 7, 1, 4
  038a1d0  fmadds 6, 11, 1, 6
  038a1d4  fmadds 1, 10, 1, 3
  038a1d8  stfs 2, 0(31)
  038a1dc  fadds 2, 4, 5
  038a1e0  stfs 6, 4(31)
  038a1e4  stfs 1, 8(31)
  038a1e8  stfs 2, 12(31)
  038a1ec  lfs 1, 48(30)
  038a1f0  lfs 2, 0(31)
  038a1f4  fadds 1, 2, 1
  038a1f8  lfs 2, 4(31)
  038a1fc  lfs 3, 8(31)
  038a200  stfs 1, 0(31)
  038a204  lfs 1, 52(30)
  038a208  fadds 1, 2, 1
  038a20c  stfs 1, 4(31)
  038a210  lfs 1, 56(30)
  038a214  fadds 1, 3, 1
  038a218  stfs 1, 8(31)
  038a21c  b 0x38a224
  038a220  li 3, 1
  038a224  ld 0, 160(1)
  038a228  mtlr 0
  038a22c  lfd 30, 128(1)
  038a230  lfd 31, 136(1)
  038a234  ld 30, 112(1)
  038a238  ld 31, 120(1)
  038a23c  addi 1, 1, 144
  038a240  blr

FUN_0038a248:   # 0x38a248, 0x38c bytes
  038a248  stdu 1, -224(1)
  038a24c  mflr 0
  038a250  std 0, 240(1)
  038a254  stfd 28, 192(1)
  038a258  stfd 29, 200(1)
  038a25c  stfd 30, 208(1)
  038a260  stfd 31, 216(1)
  038a264  std 31, 184(1)
  038a268  std 23, 120(1)
  038a26c  cmpwi 3, 0
  038a270  ori 31, 3, 0
  038a274  std 30, 176(1)
  038a278  li 23, 224
  038a27c  std 29, 168(1)
  038a280  std 28, 160(1)
  038a284  std 27, 152(1)
  038a288  std 26, 144(1)
  038a28c  std 25, 136(1)
  038a290  std 24, 128(1)
  038a294  ori 30, 7, 0
  038a298  bf 2, 0x38a2a4
  038a29c  li 3, 0
  038a2a0  b 0x38a590
  038a2a4  lwz 29, 120(31)
  038a2a8  cmpwi 29, 0
  038a2ac  bf 2, 0x38a2b8
  038a2b0  li 3, 0
  038a2b4  b 0x38a590
  038a2b8  li 27, 0
  038a2bc  lis 4, 57
  038a2c0  ori 24, 27, 0
  038a2c4  addi 4, 4, -23996
  038a2c8  addc 3, 1, 23
  038a2cc  ori 26, 24, 0
  038a2d0  stb 24, 134(29)
  038a2d4  ori 23, 29, 0
  038a2d8  ori 28, 26, 0
  038a2dc  lfs 31, 0(4)
  038a2e0  std 5, 64(3)
  038a2e4  std 6, 72(3)
  038a2e8  lfs 29, 68(3)
  038a2ec  lfs 30, 64(3)
  038a2f0  lfs 28, 72(3)
  038a2f4  lwz 25, 232(23)
  038a2f8  cmpwi 25, -1
  038a2fc  bt 2, 0x38a500
  038a300  lis 3, 164
  038a304  slwi 4, 25, 8
  038a308  lwz 3, -28512(3)
  038a30c  addc 25, 3, 4
  038a310  clrldi 25, 25, 32
  038a314  cmpwi 25, 0
  038a318  bt 2, 0x38a340
  038a31c  lbz 3, 32(25)
  038a320  cmpwi 1, 3, 253
  038a324  cmpwi 3, 254
  038a328  cror 2, 2, 6
  038a32c  bt 2, 0x38a340
  038a330  lbz 3, 134(29)
  038a334  addic 3, 3, 1
  038a338  stb 3, 134(29)
  038a33c  b 0x38a500
  038a340  cmpwi 30, -1
  038a344  bt 2, 0x38a358
  038a348  lhz 3, 166(25)
  038a34c  extsh 3, 3
  038a350  cmpw 30, 3
  038a354  bf 2, 0x38a500
  038a358  cmpwi 28, 0
  038a35c  bf 2, 0x38a500
  038a360  lbz 3, 134(29)
  038a364  li 28, 1
  038a368  addic 3, 3, 1
  038a36c  stb 3, 134(29)
  038a370  stfs 30, 16(25)
  038a374  lwz 4, 36(25)
  038a378  stfs 29, 20(25)
  038a37c  stfs 28, 24(25)
  038a380  stw 24, 28(25)
  038a384  stb 24, 32(25)
  038a388  stb 24, 188(25)
  038a38c  lhz 3, 68(4)
  038a390  sth 3, 52(25)
  038a394  lfs 1, 36(4)
  038a398  stfs 1, 44(25)
  038a39c  lbz 5, 48(31)
  038a3a0  stb 5, 48(25)
  038a3a4  lhz 5, 50(31)
  038a3a8  stb 28, 49(25)
  038a3ac  sth 5, 50(25)
  038a3b0  lwz 5, 64(4)
  038a3b4  lbz 4, 15(4)
  038a3b8  cmpwi 5, 0
  038a3bc  cmpwi 1, 4, 0
  038a3c0  bt 2, 0x38a3cc
  038a3c4  ori 3, 3, 16
  038a3c8  sth 3, 52(25)
  038a3cc  bt 6, 0x38a3d8
  038a3d0  ori 3, 3, 1024
  038a3d4  sth 3, 52(25)
  038a3d8  li 3, 32640
  038a3dc  li 4, 255
  038a3e0  sth 3, 54(25)
  038a3e4  stb 4, 113(25)
  038a3e8  stb 4, 114(25)
  038a3ec  stb 4, 164(25)
  038a3f0  lbz 3, 131(29)
  038a3f4  rlwinm 3, 3, 0, 30, 30
  038a3f8  cmpwi 3, 0
  038a3fc  bt 2, 0x38a408
  038a400  fmuls 1, 1, 31
  038a404  stfs 1, 44(25)
  038a408  ori 3, 25, 0
  038a40c  li 4, 0
  038a410  li 5, 0
  038a414  bl 0xfdcf0
  038a418  nop
  038a41c  ori 3, 25, 0
  038a420  bl 0x486828
  038a424  nop
  038a428  cmpwi 3, 0
  038a42c  lhz 4, 180(31)
  038a430  lhz 5, 180(25)
  038a434  bt 2, 0x38a444
  038a438  stw 24, 148(3)
  038a43c  sth 24, 104(3)
  038a440  stw 24, 108(3)
  038a444  extsh 6, 4
  038a448  extsh 7, 5
  038a44c  ori 3, 5, 0
  038a450  cmpw 6, 7
  038a454  bf 0, 0x38a460
  038a458  ori 3, 4, 0
  038a45c  sth 4, 180(25)
  038a460  extsh 4, 3
  038a464  cmpwi 4, 1
  038a468  bf 0, 0x38a474
  038a46c  ori 3, 28, 0
  038a470  sth 28, 180(25)
  038a474  lhz 4, 180(31)
  038a478  subc 3, 4, 3
  038a47c  extsh 4, 3
  038a480  cmpwi 4, 0
  038a484  sth 3, 180(31)
  038a488  bf 0, 0x38a490
  038a48c  sth 28, 180(31)
  038a490  lwz 4, 36(25)
  038a494  ori 3, 25, 0
  038a498  lwz 4, 16(4)
  038a49c  stw 4, 148(25)
  038a4a0  bl 0x10c000
  038a4a4  nop
  038a4a8  ori 3, 25, 0
  038a4ac  bl 0xf31a8
  038a4b0  nop
  038a4b4  ori 3, 25, 0
  038a4b8  ori 27, 25, 0
  038a4bc  bl 0xfcccc
  038a4c0  nop
  038a4c4  ori 25, 3, 0
  038a4c8  cmpwi 25, 0
  038a4cc  bt 2, 0x38a500
  038a4d0  li 3, 4
  038a4d4  vspltisw 2, -16
  038a4d8  addi 4, 3, 16
  038a4dc  <unknown>
  038a4e0  <unknown>
  038a4e4  vor 3, 3, 4
  038a4e8  vsraw 2, 3, 2
  038a4ec  vcfsx 2, 2, 0
  038a4f0  vspltw 2, 2, 0
  038a4f4  stvewx 2, 0, 25
  038a4f8  stw 24, 48(25)
  038a4fc  stw 24, 52(25)
  038a500  addic 26, 26, 1
  038a504  addic 23, 23, 4
  038a508  cmpwi 26, 18
  038a50c  bt 0, 0x38a2f4
  038a510  lis 3, 164
  038a514  lwz 3, -28500(3)
  038a518  cmpwi 3, 0
  038a51c  bt 2, 0x38a558
  038a520  lhz 4, 166(3)
  038a524  cmpwi 4, 545
  038a528  bf 2, 0x38a54c
  038a52c  lbz 4, 32(3)
  038a530  cmpwi 1, 4, 253
  038a534  cmpwi 4, 254
  038a538  cror 2, 2, 6
  038a53c  bt 2, 0x38a54c
  038a540  lbz 4, 134(29)
  038a544  addic 4, 4, 1
  038a548  stb 4, 134(29)
  038a54c  lwz 3, 40(3)
  038a550  cmpwi 3, 0
  038a554  bf 2, 0x38a520
  038a558  cmpwi 27, 0
  038a55c  bf 2, 0x38a58c
  038a560  lis 4, 161
  038a564  lis 3, 101
  038a568  addic 3, 3, 26736
  038a56c  lwz 4, 1808(4)
  038a570  lhz 5, 178(31)
  038a574  lhz 6, 166(31)
  038a578  extsw 4, 4
  038a57c  extsh 5, 5
  038a580  extsh 6, 6
  038a584  bl 0x5cd098
  038a588  nop
  038a58c  ori 3, 27, 0
  038a590  ld 0, 240(1)
  038a594  mtlr 0
  038a598  lfd 28, 192(1)
  038a59c  lfd 29, 200(1)
  038a5a0  lfd 30, 208(1)
  038a5a4  lfd 31, 216(1)
  038a5a8  ld 23, 120(1)
  038a5ac  ld 24, 128(1)
  038a5b0  ld 25, 136(1)
  038a5b4  ld 26, 144(1)
  038a5b8  ld 27, 152(1)
  038a5bc  ld 28, 160(1)
  038a5c0  ld 29, 168(1)
  038a5c4  ld 30, 176(1)
  038a5c8  ld 31, 184(1)
  038a5cc  addi 1, 1, 224
  038a5d0  blr

UpdateMoby_455:   # 0x38a628, 0x11d8 bytes
  038a628  stdu 1, -480(1)
  038a62c  mflr 0
  038a630  std 0, 496(1)
  038a634  stfd 26, 432(1)
  038a638  stfd 27, 440(1)
  038a63c  stfd 28, 448(1)
  038a640  stfd 29, 456(1)
  038a644  stfd 30, 464(1)
  038a648  stfd 31, 472(1)
  038a64c  std 23, 360(1)
  038a650  lis 23, 57
  038a654  cmpwi 3, 0
  038a658  std 31, 424(1)
  038a65c  addi 23, 23, -23084
  038a660  std 30, 416(1)
  038a664  std 29, 408(1)
  038a668  std 28, 400(1)
  038a66c  std 27, 392(1)
  038a670  std 26, 384(1)
  038a674  std 25, 376(1)
  038a678  std 24, 368(1)
  038a67c  std 22, 352(1)
  038a680  ori 31, 3, 0
  038a684  bt 2, 0x38b7b0
  038a688  lbz 3, 49(31)
  038a68c  lwz 30, 120(31)
  038a690  cmpwi 3, 0
  038a694  bt 2, 0x38a6f8
  038a698  lis 3, 149
  038a69c  lfs 1, 20(31)
  038a6a0  lfs 2, 16(31)
  038a6a4  addic 3, 3, 5056
  038a6a8  lfs 3, 324(3)
  038a6ac  lfs 4, 320(3)
  038a6b0  fsubs 1, 1, 3
  038a6b4  fsubs 2, 2, 4
  038a6b8  lfs 3, 24(31)
  038a6bc  lfs 4, 328(3)
  038a6c0  fsubs 3, 3, 4
  038a6c4  fmuls 1, 1, 1
  038a6c8  fmadds 1, 2, 2, 1
  038a6cc  lfs 2, 0(23)
  038a6d0  fmadds 1, 3, 3, 1
  038a6d4  fsqrts 1, 1
  038a6d8  fcmpu 0, 1, 2
  038a6dc  cror 6, 1, 2
  038a6e0  bt 6, 0x38a6f8
  038a6e4  ori 3, 31, 0
  038a6e8  bl 0x106360
  038a6ec  nop
  038a6f0  li 3, 22
  038a6f4  stb 3, 127(31)
  038a6f8  cmpwi 30, 0
  038a6fc  bt 2, 0x38b7b0
  038a700  li 25, 0
  038a704  ori 6, 30, 0
  038a708  ori 5, 25, 0
  038a70c  ori 3, 5, 0
  038a710  stb 25, 134(30)
  038a714  lwz 4, 232(6)
  038a718  cmpwi 4, -1
  038a71c  bt 2, 0x38a758
  038a720  lis 7, 164
  038a724  slwi 4, 4, 8
  038a728  lwz 7, -28512(7)
  038a72c  addc 4, 7, 4
  038a730  clrldi 4, 4, 32
  038a734  cmpwi 4, 0
  038a738  bt 2, 0x38a758
  038a73c  lbz 4, 32(4)
  038a740  cmpwi 1, 4, 253
  038a744  cmpwi 4, 254
  038a748  cror 2, 2, 6
  038a74c  bt 2, 0x38a758
  038a750  addic 5, 5, 1
  038a754  stb 5, 134(30)
  038a758  addic 3, 3, 1
  038a75c  addic 6, 6, 4
  038a760  cmpwi 3, 18
  038a764  bt 0, 0x38a714
  038a768  lis 4, 164
  038a76c  ori 3, 5, 0
  038a770  lwz 5, -28500(4)
  038a774  cmpwi 5, 0
  038a778  bt 2, 0x38a7b0
  038a77c  lhz 4, 166(5)
  038a780  cmpwi 4, 545
  038a784  bf 2, 0x38a7a4
  038a788  lbz 4, 32(5)
  038a78c  cmpwi 1, 4, 253
  038a790  cmpwi 4, 254
  038a794  cror 2, 2, 6
  038a798  bt 2, 0x38a7a4
  038a79c  addic 3, 3, 1
  038a7a0  stb 3, 134(30)
  038a7a4  lwz 5, 40(5)
  038a7a8  cmpwi 5, 0
  038a7ac  bf 2, 0x38a77c
  038a7b0  lis 24, 151
  038a7b4  lfs 1, 20(31)
  038a7b8  addic 24, 24, -25376
  038a7bc  ori 29, 25, 0
  038a7c0  lfs 2, 132(24)
  038a7c4  lfs 3, 16(31)
  038a7c8  fsubs 1, 1, 2
  038a7cc  lfs 2, 128(24)
  038a7d0  fsubs 2, 3, 2
  038a7d4  fmuls 1, 1, 1
  038a7d8  fmadds 1, 2, 2, 1
  038a7dc  lfs 2, 156(30)
  038a7e0  fsqrts 1, 1
  038a7e4  fcmpu 0, 1, 2
  038a7e8  cror 6, 1, 2
  038a7ec  bt 6, 0x38a7f4
  038a7f0  li 29, 1
  038a7f4  lfs 2, 144(30)
  038a7f8  ori 28, 25, 0
  038a7fc  fcmpu 0, 1, 2
  038a800  cror 6, 1, 2
  038a804  bt 6, 0x38a80c
  038a808  li 28, 1
  038a80c  addic 3, 30, 136
  038a810  bl 0x4fffb4
  038a814  nop
  038a818  lbz 5, 134(30)
  038a81c  ori 27, 3, 0
  038a820  lbz 6, 135(30)
  038a824  ori 3, 25, 0
  038a828  lwz 4, 208(30)
  038a82c  subc 26, 5, 6
  038a830  cmpwi 4, -1
  038a834  rldicl 26, 26, 1, 63
  038a838  bt 2, 0x38a858
  038a83c  addic 3, 24, 128
  038a840  extsw 4, 4
  038a844  bl 0x110b70
  038a848  nop
  038a84c  cntlzw 3, 3
  038a850  rlwinm 3, 3, 27, 31, 31
  038a854  xori 3, 3, 1
  038a858  or 4, 3, 28
  038a85c  cntlzw 4, 4
  038a860  rlwinm 28, 4, 27, 31, 31
  038a864  lbz 4, 130(30)
  038a868  xori 28, 28, 1
  038a86c  cmpwi 4, 0
  038a870  cmpwi 1, 4, -1
  038a874  cmpwi 6, 4, 1
  038a878  bt 1, 0x38a884
  038a87c  bf 5, 0x38a898
  038a880  b 0x38a88c
  038a884  bf 25, 0x38a894
  038a888  b 0x38a898
  038a88c  ori 28, 29, 0
  038a890  b 0x38a898
  038a894  ori 28, 3, 0
  038a898  lhz 3, 138(30)
  038a89c  cmpwi 3, 0
  038a8a0  bf 2, 0x38a8b4
  038a8a4  lbz 3, 134(30)
  038a8a8  cmpwi 3, 0
  038a8ac  bf 1, 0x38a8b4
  038a8b0  ori 26, 25, 0
  038a8b4  ori 3, 31, 0
  038a8b8  lis 4, 195
  038a8bc  li 5, 0
  038a8c0  bl 0x10675c
  038a8c4  nop
  038a8c8  ori 22, 3, 0
  038a8cc  ori 3, 31, 0
  038a8d0  li 6, 0
  038a8d4  addic 5, 30, 32
  038a8d8  li 8, 0
  038a8dc  addic 7, 1, 320
  038a8e0  li 10, 4
  038a8e4  ori 4, 22, 0
  038a8e8  li 9, 0
  038a8ec  bl 0x106840
  038a8f0  nop
  038a8f4  lwz 3, 320(1)
  038a8f8  cmpwi 3, 1
  038a8fc  bf 1, 0x38a970
  038a900  lfs 1, 32(30)
  038a904  lfs 2, 44(22)
  038a908  fsubs 1, 1, 2
  038a90c  stfs 1, 32(30)
  038a910  lfs 2, 4(23)
  038a914  fcmpu 0, 1, 2
  038a918  cror 6, 0, 2
  038a91c  bt 6, 0x38a93c
  038a920  li 5, 90
  038a924  addic 4, 30, 96
  038a928  ori 3, 31, 0
  038a92c  stb 5, 103(30)
  038a930  bl 0x10c808
  038a934  nop
  038a938  b 0x38a970
  038a93c  li 5, -1
  038a940  ori 3, 31, 0
  038a944  li 4, 0
  038a948  bl 0xfd8d0
  038a94c  nop
  038a950  li 5, 8
  038a954  li 6, 120
  038a958  addic 4, 30, 96
  038a95c  ori 3, 31, 0
  038a960  stb 5, 32(31)
  038a964  stb 6, 103(30)
  038a968  bl 0x10c808
  038a96c  nop
  038a970  li 4, 255
  038a974  lbz 3, 32(31)
  038a978  cmpwi 3, 3
  038a97c  cmpwi 1, 3, 0
  038a980  stb 4, 164(31)
  038a984  cmpwi 6, 3, -1
  038a988  cmpwi 7, 3, 1
  038a98c  bt 1, 0x38a9a8
  038a990  bt 5, 0x38a99c
  038a994  bf 25, 0x38abe4
  038a998  b 0x38a9c4
  038a99c  cmpwi 1, 29, 0
  038a9a0  bf 29, 0x38aa4c
  038a9a4  b 0x38abf0
  038a9a8  cmpwi 3, 6
  038a9ac  bf 1, 0x38abf0
  038a9b0  cmpwi 3, 7
  038a9b4  bf 1, 0x38abf0
  038a9b8  cmpwi 3, 8
  038a9bc  bf 1, 0x38aad8
  038a9c0  b 0x38abe4
  038a9c4  ori 29, 25, 0
  038a9c8  ori 28, 30, 0
  038a9cc  lwz 3, 232(28)
  038a9d0  cmpwi 3, -1
  038a9d4  bt 2, 0x38aa10
  038a9d8  lis 4, 164
  038a9dc  slwi 3, 3, 8
  038a9e0  lwz 4, -28512(4)
  038a9e4  addc 3, 4, 3
  038a9e8  cmpwi 3, 0
  038a9ec  bt 2, 0x38aa10
  038a9f0  clrldi 3, 3, 32
  038a9f4  lbz 4, 32(3)
  038a9f8  cmpwi 1, 4, 253
  038a9fc  cmpwi 4, 254
  038aa00  cror 2, 2, 6
  038aa04  bt 2, 0x38aa10
  038aa08  bl 0xefb38
  038aa0c  nop
  038aa10  addic 29, 29, 1
  038aa14  addic 28, 28, 4
  038aa18  cmpwi 29, 18
  038aa1c  bt 0, 0x38a9cc
  038aa20  lhz 6, 52(31)
  038aa24  li 3, 3
  038aa28  li 4, 8
  038aa2c  ori 6, 6, 4096
  038aa30  li 5, 1
  038aa34  sth 6, 52(31)
  038aa38  stb 25, 41(30)
  038aa3c  stb 3, 90(30)
  038aa40  stb 4, 88(30)
  038aa44  stb 5, 32(31)
  038aa48  b 0x38b7a0
  038aa4c  bt 6, 0x38b7a0
  038aa50  lbz 3, 132(30)
  038aa54  cmpwi 3, 5
  038aa58  cmpwi 1, 3, 4
  038aa5c  cmpwi 6, 3, 3
  038aa60  cmpwi 7, 3, 2
  038aa64  bt 2, 0x38aac0
  038aa68  bt 6, 0x38aab4
  038aa6c  bt 26, 0x38aaa8
  038aa70  bt 30, 0x38aa9c
  038aa74  cmpwi 3, 1
  038aa78  bt 2, 0x38aa90
  038aa7c  cmpwi 3, 0
  038aa80  bf 2, 0x38aacc
  038aa84  li 3, 2
  038aa88  stb 3, 32(31)
  038aa8c  b 0x38b7a0
  038aa90  li 3, 3
  038aa94  stb 3, 32(31)
  038aa98  b 0x38b7a0
  038aa9c  li 3, 7
  038aaa0  stb 3, 32(31)
  038aaa4  b 0x38b7a0
  038aaa8  li 3, 2
  038aaac  stb 3, 32(31)
  038aab0  b 0x38b7a0
  038aab4  li 3, 5
  038aab8  stb 3, 32(31)
  038aabc  b 0x38b7a0
  038aac0  li 3, 5
  038aac4  stb 3, 32(31)
  038aac8  b 0x38b7a0
  038aacc  li 3, 1
  038aad0  stb 3, 32(31)
  038aad4  b 0x38b7a0
  038aad8  lfs 31, 4(23)
  038aadc  li 6, 1
  038aae0  lfs 3, 8(23)
  038aae4  li 7, -1
  038aae8  lfs 4, 12(23)
  038aaec  addic 4, 30, 112
  038aaf0  lfs 5, 16(23)
  038aaf4  ori 3, 31, 0
  038aaf8  lfs 6, 20(23)
  038aafc  li 5, 0
  038ab00  lfs 7, 24(23)
  038ab04  li 8, 30
  038ab08  std 6, 144(1)
  038ab0c  li 9, 8
  038ab10  std 6, 160(1)
  038ab14  li 10, 20
  038ab18  std 6, 168(1)
  038ab1c  fmr 1, 31
  038ab20  std 7, 176(1)
  038ab24  fmr 2, 31
  038ab28  std 25, 184(1)
  038ab2c  bl 0x10e030
  038ab30  nop
  038ab34  lis 4, 161
  038ab38  addic 30, 31, 16
  038ab3c  fmr 1, 31
  038ab40  addic 29, 4, 23856
  038ab44  addic 28, 31, 64
  038ab48  ori 3, 31, 0
  038ab4c  li 4, 1733
  038ab50  std 29, 112(1)
  038ab54  ori 10, 29, 0
  038ab58  std 29, 120(1)
  038ab5c  ori 5, 30, 0
  038ab60  ori 6, 28, 0
  038ab64  li 7, 0
  038ab68  li 8, 0
  038ab6c  bl 0x11a560
  038ab70  nop
  038ab74  std 29, 112(1)
  038ab78  ori 3, 31, 0
  038ab7c  std 29, 120(1)
  038ab80  li 4, 1734
  038ab84  fmr 1, 31
  038ab88  ori 10, 29, 0
  038ab8c  ori 5, 30, 0
  038ab90  ori 6, 28, 0
  038ab94  li 7, 0
  038ab98  li 8, 0
  038ab9c  bl 0x11a560
  038aba0  nop
  038aba4  ori 3, 31, 0
  038aba8  std 29, 112(1)
  038abac  li 4, 1735
  038abb0  ori 10, 29, 0
  038abb4  fmr 1, 31
  038abb8  ori 5, 30, 0
  038abbc  std 29, 120(1)
  038abc0  ori 6, 28, 0
  038abc4  li 7, 0
  038abc8  li 8, 0
  038abcc  bl 0x11a560
  038abd0  nop
  038abd4  ori 3, 31, 0
  038abd8  bl 0xefb38
  038abdc  nop
  038abe0  b 0x38b7b0
  038abe4  li 3, 1
  038abe8  stb 3, 32(31)
  038abec  b 0x38b7a0
  038abf0  cmpwi 28, 0
  038abf4  bt 2, 0x38b7a0
  038abf8  cmpwi 1, 26, 0
  038abfc  cmpwi 27, 0
  038ac00  cror 2, 2, 6
  038ac04  bt 2, 0x38b7a0
  038ac08  fmr 28, 27
  038ac0c  stw 25, 324(1)
  038ac10  stw 25, 328(1)
  038ac14  stw 25, 332(1)
  038ac18  stw 25, 336(1)
  038ac1c  fmr 29, 28
  038ac20  fmr 30, 29
  038ac24  lhz 3, 138(30)
  038ac28  cmpwi 1, 3, 0
  038ac2c  bf 6, 0x38ac40
  038ac30  lbz 3, 134(30)
  038ac34  lbz 4, 135(30)
  038ac38  cmpw 3, 4
  038ac3c  bt 0, 0x38ac50
  038ac40  bt 6, 0x38b7a0
  038ac44  lhz 3, 136(30)
  038ac48  cmpwi 3, 0
  038ac4c  bf 2, 0x38b7a0
  038ac50  ori 3, 31, 0
  038ac54  addic 5, 1, 192
  038ac58  li 4, 0
  038ac5c  bl 0xf1114
  038ac60  nop
  038ac64  lbz 3, 133(30)
  038ac68  cmpwi 3, 4
  038ac6c  bt 2, 0x38b3e8
  038ac70  cmpwi 3, 3
  038ac74  bt 2, 0x38b1dc
  038ac78  cmpwi 3, 2
  038ac7c  bt 2, 0x38b058
  038ac80  cmpwi 3, 1
  038ac84  bt 2, 0x38ae5c
  038ac88  cmpwi 3, 0
  038ac8c  bf 2, 0x38b5ec
  038ac90  lbz 3, 135(30)
  038ac94  addic 3, 3, 1
  038ac98  bl 0x502730
  038ac9c  nop
  038aca0  lbz 3, 134(30)
  038aca4  fmr 31, 1
  038aca8  bl 0x502730
  038acac  nop
  038acb0  lfs 2, 28(23)
  038acb4  lfs 3, 32(23)
  038acb8  fmuls 1, 1, 2
  038acbc  fmuls 1, 1, 3
  038acc0  fdivs 1, 1, 31
  038acc4  fsubs 1, 1, 3
  038acc8  bl 0x10de78
  038accc  nop
  038acd0  lfs 2, 20(31)
  038acd4  lfs 3, 132(24)
  038acd8  lfs 4, 16(31)
  038acdc  fsubs 2, 2, 3
  038ace0  lfs 3, 128(24)
  038ace4  fsubs 3, 4, 3
  038ace8  lfs 26, 36(23)
  038acec  fmr 31, 1
  038acf0  lbz 3, 131(30)
  038acf4  rlwinm 3, 3, 0, 28, 28
  038acf8  fmuls 2, 2, 2
  038acfc  cmpwi 3, 0
  038ad00  fmadds 2, 3, 3, 2
  038ad04  fsqrts 2, 2
  038ad08  fmuls 1, 2, 26
  038ad0c  bt 2, 0x38ad1c
  038ad10  lfs 2, 40(23)
  038ad14  bl 0xfcbe8
  038ad18  nop
  038ad1c  lfs 2, 44(23)
  038ad20  lfs 3, 48(23)
  038ad24  fadds 2, 31, 2
  038ad28  fsubs 5, 3, 31
  038ad2c  lfs 4, 52(23)
  038ad30  fsubs 6, 4, 31
  038ad34  fsubs 3, 3, 2
  038ad38  fsub 7, 31, 5
  038ad3c  fsubs 4, 4, 2
  038ad40  fsub 9, 2, 3
  038ad44  fsel 5, 7, 5, 31
  038ad48  lfs 7, 56(23)
  038ad4c  lfs 8, 40(23)
  038ad50  fsel 2, 9, 3, 2
  038ad54  fsub 3, 6, 5
  038ad58  lfs 9, 60(23)
  038ad5c  fsub 10, 4, 2
  038ad60  fsel 3, 3, 6, 5
  038ad64  fsub 6, 1, 8
  038ad68  lfs 5, 64(23)
  038ad6c  fsel 2, 10, 4, 2
  038ad70  fmuls 4, 3, 3
  038ad74  fsel 1, 6, 1, 8
  038ad78  lfs 6, 68(23)
  038ad7c  fmuls 8, 2, 2
  038ad80  fmuls 10, 4, 3
  038ad84  fmuls 11, 8, 2
  038ad88  fmuls 12, 4, 10
  038ad8c  fmadds 3, 10, 7, 3
  038ad90  fmuls 10, 8, 11
  038ad94  fmadds 2, 11, 7, 2
  038ad98  fmuls 7, 4, 12
  038ad9c  fmadds 3, 12, 9, 3
  038ada0  fmuls 11, 8, 10
  038ada4  fmadds 2, 10, 9, 2
  038ada8  fmuls 4, 4, 7
  038adac  fmadds 3, 7, 5, 3
  038adb0  fmuls 7, 8, 11
  038adb4  fmadds 2, 11, 5, 2
  038adb8  fmadds 4, 4, 6, 3
  038adbc  fmadds 3, 7, 6, 2
  038adc0  fmuls 4, 4, 1
  038adc4  fmuls 3, 3, 1
  038adc8  fmuls 1, 4, 4
  038adcc  stfs 4, 212(1)
  038add0  lfs 31, 4(23)
  038add4  stw 25, 216(1)
  038add8  fmadds 1, 3, 3, 1
  038addc  stfs 3, 208(1)
  038ade0  lfs 2, 144(30)
  038ade4  fsqrts 1, 1
  038ade8  fcmpu 0, 2, 1
  038adec  cror 6, 1, 2
  038adf0  bt 6, 0x38ae0c
  038adf4  fdivs 1, 2, 1
  038adf8  stw 25, 216(1)
  038adfc  fmuls 3, 3, 1
  038ae00  fmuls 4, 4, 1
  038ae04  stfs 3, 208(1)
  038ae08  stfs 4, 212(1)
  038ae0c  lfs 2, 192(1)
  038ae10  lfs 5, 196(1)
  038ae14  fmr 1, 26
  038ae18  fadds 2, 2, 3
  038ae1c  addic 3, 1, 224
  038ae20  fadds 3, 5, 4
  038ae24  li 4, 0
  038ae28  lfs 4, 200(1)
  038ae2c  lfs 5, 204(1)
  038ae30  stfs 4, 232(1)
  038ae34  stfs 5, 236(1)
  038ae38  stfs 2, 224(1)
  038ae3c  stfs 3, 228(1)
  038ae40  bl 0xffb70
  038ae44  nop
  038ae48  fmr 26, 1
  038ae4c  fcmpu 0, 26, 31
  038ae50  bt 2, 0x38b5ec
  038ae54  stfs 26, 232(1)
  038ae58  b 0x38b5ec
  038ae5c  lfs 3, 192(1)
  038ae60  lfs 5, 196(1)
  038ae64  lfs 7, 200(1)
  038ae68  lfs 1, 128(24)
  038ae6c  lfs 2, 132(24)
  038ae70  lfs 4, 136(24)
  038ae74  fsubs 1, 1, 3
  038ae78  fsubs 2, 2, 5
  038ae7c  lfs 6, 140(24)
  038ae80  fsubs 4, 4, 7
  038ae84  stfs 6, 220(1)
  038ae88  stfs 1, 208(1)
  038ae8c  stfs 2, 212(1)
  038ae90  stfs 4, 216(1)
  038ae94  lfs 26, 36(23)
  038ae98  lfs 31, 4(23)
  038ae9c  fmuls 6, 2, 26
  038aea0  fmuls 4, 1, 26
  038aea4  stw 25, 216(1)
  038aea8  fmr 8, 31
  038aeac  fmuls 1, 6, 6
  038aeb0  stfs 6, 212(1)
  038aeb4  stfs 4, 208(1)
  038aeb8  lbz 3, 131(30)
  038aebc  rlwinm 3, 3, 0, 28, 28
  038aec0  cmpwi 3, 0
  038aec4  fmadds 1, 4, 4, 1
  038aec8  fsqrts 1, 1
  038aecc  bt 2, 0x38af50
  038aed0  lfs 2, 40(23)
  038aed4  bl 0xfcbe8
  038aed8  nop
  038aedc  lfs 2, 212(1)
  038aee0  lfs 4, 208(1)
  038aee4  fmuls 3, 2, 2
  038aee8  lfs 6, 216(1)
  038aeec  fmadds 3, 4, 4, 3
  038aef0  fmadds 3, 6, 6, 3
  038aef4  fsqrts 8, 3
  038aef8  lfs 3, 192(1)
  038aefc  lfs 5, 196(1)
  038af00  lfs 7, 200(1)
  038af04  fdivs 1, 1, 8
  038af08  fsub 9, 31, 8
  038af0c  fsub 10, 31, 8
  038af10  fsub 11, 31, 8
  038af14  fsub 12, 8, 31
  038af18  fsub 13, 8, 31
  038af1c  fsub 8, 8, 31
  038af20  fmuls 4, 4, 1
  038af24  fmuls 2, 2, 1
  038af28  fmuls 1, 6, 1
  038af2c  fsel 6, 9, 31, 4
  038af30  fsel 9, 10, 31, 2
  038af34  fsel 10, 11, 31, 1
  038af38  fsel 4, 12, 6, 4
  038af3c  fsel 6, 13, 9, 2
  038af40  fsel 8, 8, 10, 1
  038af44  stfs 4, 208(1)
  038af48  stfs 6, 212(1)
  038af4c  stfs 8, 216(1)
  038af50  fmuls 1, 6, 6
  038af54  lfs 2, 40(23)
  038af58  fmr 9, 4
  038af5c  fmr 10, 6
  038af60  fmr 11, 8
  038af64  fmadds 1, 4, 4, 1
  038af68  fmadds 1, 8, 8, 1
  038af6c  fsqrts 1, 1
  038af70  fcmpu 0, 1, 2
  038af74  cror 6, 1, 2
  038af78  bt 6, 0x38afc8
  038af7c  fdivs 2, 2, 1
  038af80  fsub 9, 31, 1
  038af84  fsub 10, 31, 1
  038af88  fsub 11, 31, 1
  038af8c  fsub 12, 1, 31
  038af90  fsub 13, 1, 31
  038af94  fsub 1, 1, 31
  038af98  fmuls 4, 4, 2
  038af9c  fmuls 6, 6, 2
  038afa0  fmuls 2, 8, 2
  038afa4  fsel 9, 9, 31, 4
  038afa8  fsel 10, 10, 31, 6
  038afac  fsel 11, 11, 31, 2
  038afb0  fsel 9, 12, 9, 4
  038afb4  fsel 10, 13, 10, 6
  038afb8  fsel 11, 1, 11, 2
  038afbc  stfs 9, 208(1)
  038afc0  stfs 10, 212(1)
  038afc4  stfs 11, 216(1)
  038afc8  fmr 6, 10
  038afcc  fmr 4, 9
  038afd0  fmr 8, 11
  038afd4  fmuls 1, 6, 6
  038afd8  fmadds 1, 4, 4, 1
  038afdc  fmadds 2, 8, 8, 1
  038afe0  lfs 1, 144(30)
  038afe4  fsqrts 2, 2
  038afe8  fcmpu 0, 1, 2
  038afec  cror 6, 1, 2
  038aff0  bt 6, 0x38b010
  038aff4  fdivs 8, 1, 2
  038aff8  fmuls 4, 9, 8
  038affc  fmuls 6, 10, 8
  038b000  fmuls 8, 11, 8
  038b004  stfs 4, 208(1)
  038b008  stfs 6, 212(1)
  038b00c  stfs 8, 216(1)
  038b010  fadds 2, 3, 4
  038b014  addic 3, 1, 224
  038b018  fadds 3, 5, 6
  038b01c  li 4, 0
  038b020  fadds 4, 7, 8
  038b024  lfs 5, 204(1)
  038b028  fmr 1, 26
  038b02c  stfs 5, 236(1)
  038b030  stfs 2, 224(1)
  038b034  stfs 3, 228(1)
  038b038  stfs 4, 232(1)
  038b03c  bl 0xffb70
  038b040  nop
  038b044  fmr 26, 1
  038b048  fcmpu 0, 26, 31
  038b04c  bt 2, 0x38b5ec
  038b050  stfs 26, 232(1)
  038b054  b 0x38b5ec
  038b058  li 29, -1
  038b05c  lfs 31, 72(23)
  038b060  ori 27, 1, 0
  038b064  ori 28, 25, 0
  038b068  ori 26, 30, 0
  038b06c  lwz 3, 324(27)
  038b070  cmpwi 3, 1
  038b074  bt 2, 0x38b0d8
  038b078  lwz 3, 160(26)
  038b07c  addic 4, 1, 240
  038b080  extsw 3, 3
  038b084  bl 0x38a0e0
  038b088  cmpwi 3, 0
  038b08c  bf 2, 0x38b0d8
  038b090  lfs 1, 20(31)
  038b094  lfs 2, 132(24)
  038b098  lfs 3, 16(31)
  038b09c  fsubs 1, 1, 2
  038b0a0  lfs 2, 128(24)
  038b0a4  fsubs 2, 3, 2
  038b0a8  fmuls 1, 1, 1
  038b0ac  fmadds 1, 2, 2, 1
  038b0b0  fsqrts 1, 1
  038b0b4  fcmpu 0, 31, 1
  038b0b8  cror 6, 0, 2
  038b0bc  bt 6, 0x38b0d8
  038b0c0  lfs 30, 240(1)
  038b0c4  lfs 29, 244(1)
  038b0c8  ori 29, 28, 0
  038b0cc  lfs 28, 248(1)
  038b0d0  fmr 31, 1
  038b0d4  lfs 27, 252(1)
  038b0d8  addic 28, 28, 1
  038b0dc  addic 26, 26, 4
  038b0e0  cmpwi 28, 4
  038b0e4  addic 27, 27, 4
  038b0e8  bt 0, 0x38b06c
  038b0ec  cmpwi 29, -1
  038b0f0  bt 2, 0x38b108
  038b0f4  sldi 3, 29, 2
  038b0f8  li 4, 1
  038b0fc  addc 3, 1, 3
  038b100  clrldi 3, 3, 32
  038b104  stw 4, 324(3)
  038b108  lfs 1, 196(1)
  038b10c  lfs 2, 192(1)
  038b110  fsubs 1, 29, 1
  038b114  fsubs 2, 30, 2
  038b118  lfs 3, 200(1)
  038b11c  stfs 27, 220(1)
  038b120  fsubs 3, 28, 3
  038b124  fmuls 4, 1, 1
  038b128  stfs 1, 212(1)
  038b12c  stfs 2, 208(1)
  038b130  stfs 3, 216(1)
  038b134  lbz 3, 131(30)
  038b138  rlwinm 3, 3, 0, 28, 28
  038b13c  fmadds 1, 2, 2, 4
  038b140  cmpwi 3, 0
  038b144  fmadds 1, 3, 3, 1
  038b148  fsqrts 1, 1
  038b14c  bt 2, 0x38b1c8
  038b150  lfs 2, 40(23)
  038b154  bl 0xfcbe8
  038b158  nop
  038b15c  lfs 2, 212(1)
  038b160  lfs 3, 208(1)
  038b164  fmuls 4, 2, 2
  038b168  lfs 5, 216(1)
  038b16c  lfs 6, 4(23)
  038b170  fmadds 4, 3, 3, 4
  038b174  fmadds 4, 5, 5, 4
  038b178  fsqrts 4, 4
  038b17c  fdivs 1, 1, 4
  038b180  fsub 7, 6, 4
  038b184  fsub 8, 6, 4
  038b188  fsub 9, 6, 4
  038b18c  fsub 10, 4, 6
  038b190  fsub 11, 4, 6
  038b194  fsub 4, 4, 6
  038b198  fmuls 3, 3, 1
  038b19c  fmuls 2, 2, 1
  038b1a0  fmuls 1, 5, 1
  038b1a4  fsel 5, 7, 6, 3
  038b1a8  fsel 7, 8, 6, 2
  038b1ac  fsel 6, 9, 6, 1
  038b1b0  fsel 3, 10, 5, 3
  038b1b4  fsel 2, 11, 7, 2
  038b1b8  fsel 1, 4, 6, 1
  038b1bc  stfs 3, 208(1)
  038b1c0  stfs 2, 212(1)
  038b1c4  stfs 1, 216(1)
  038b1c8  stfs 30, 224(1)
  038b1cc  stfs 29, 228(1)
  038b1d0  stfs 28, 232(1)
  038b1d4  stfs 27, 236(1)
  038b1d8  b 0x38b5ec
  038b1dc  lwz 3, 160(30)
  038b1e0  li 4, -1
  038b1e4  li 5, -1
  038b1e8  subc 3, 4, 3
  038b1ec  lwz 4, 164(30)
  038b1f0  li 6, 1
  038b1f4  cntlzw 3, 3
  038b1f8  subc 4, 5, 4
  038b1fc  sldi 3, 3, 58
  038b200  li 5, 0
  038b204  sradi 3, 3, 63
  038b208  subc 5, 5, 6
  038b20c  cntlzw 4, 4
  038b210  and 3, 3, 5
  038b214  sldi 4, 4, 58
  038b218  addc 3, 6, 3
  038b21c  lwz 6, 168(30)
  038b220  sradi 4, 4, 63
  038b224  addic 5, 3, 1
  038b228  li 7, -1
  038b22c  subc 3, 3, 5
  038b230  subc 6, 7, 6
  038b234  and 3, 4, 3
  038b238  cntlzw 4, 6
  038b23c  addc 3, 5, 3
  038b240  lwz 6, 172(30)
  038b244  sldi 4, 4, 58
  038b248  addic 5, 3, 1
  038b24c  sradi 4, 4, 63
  038b250  li 7, -1
  038b254  subc 3, 3, 5
  038b258  subc 6, 7, 6
  038b25c  and 3, 4, 3
  038b260  cntlzw 4, 6
  038b264  addc 3, 5, 3
  038b268  sldi 4, 4, 58
  038b26c  addic 5, 3, 1
  038b270  sradi 4, 4, 63
  038b274  subc 3, 3, 5
  038b278  and 3, 4, 3
  038b27c  addc 29, 5, 3
  038b280  bl 0x5c8318
  038b284  nop
  038b288  divw 4, 3, 29
  038b28c  mullw 4, 4, 29
  038b290  ori 29, 25, 0
  038b294  subc 27, 3, 4
  038b298  ori 28, 30, 0
  038b29c  addic 27, 27, 1
  038b2a0  li 5, -1
  038b2a4  lwz 3, 160(28)
  038b2a8  addic 4, 27, -1
  038b2ac  subc 5, 5, 3
  038b2b0  subc 6, 27, 4
  038b2b4  cntlzw 5, 5
  038b2b8  sldi 5, 5, 58
  038b2bc  sradi 5, 5, 63
  038b2c0  and 27, 5, 6
  038b2c4  addc 27, 4, 27
  038b2c8  cmpwi 27, 0
  038b2cc  bf 2, 0x38b2e4
  038b2d0  extsw 3, 3
  038b2d4  addic 4, 1, 256
  038b2d8  bl 0x38a0e0
  038b2dc  cmpwi 3, 0
  038b2e0  bt 2, 0x38b2f4
  038b2e4  addic 29, 29, 1
  038b2e8  addic 28, 28, 4
  038b2ec  cmpwi 29, 4
  038b2f0  bt 0, 0x38b2a0
  038b2f4  lfs 3, 260(1)
  038b2f8  lfs 2, 256(1)
  038b2fc  lfs 1, 196(1)
  038b300  lfs 5, 192(1)
  038b304  fsubs 1, 3, 1
  038b308  fsubs 8, 2, 5
  038b30c  lfs 4, 264(1)
  038b310  lfs 6, 200(1)
  038b314  lfs 5, 268(1)
  038b318  fsubs 6, 4, 6
  038b31c  fmuls 7, 1, 1
  038b320  stfs 1, 212(1)
  038b324  stfs 8, 208(1)
  038b328  stfs 5, 220(1)
  038b32c  stfs 6, 216(1)
  038b330  lbz 3, 131(30)
  038b334  rlwinm 3, 3, 0, 28, 28
  038b338  fmadds 1, 8, 8, 7
  038b33c  cmpwi 3, 0
  038b340  fmadds 1, 6, 6, 1
  038b344  fsqrts 1, 1
  038b348  bt 2, 0x38b3d4
  038b34c  lfs 2, 40(23)
  038b350  bl 0xfcbe8
  038b354  nop
  038b358  lfs 6, 212(1)
  038b35c  lfs 7, 208(1)
  038b360  fmuls 2, 6, 6
  038b364  lfs 8, 216(1)
  038b368  lfs 10, 4(23)
  038b36c  fmadds 2, 7, 7, 2
  038b370  fmadds 2, 8, 8, 2
  038b374  fsqrts 9, 2
  038b378  lfs 2, 256(1)
  038b37c  lfs 3, 260(1)
  038b380  lfs 4, 264(1)
  038b384  lfs 5, 268(1)
  038b388  fdivs 1, 1, 9
  038b38c  fsub 11, 10, 9
  038b390  fsub 12, 10, 9
  038b394  fsub 13, 10, 9
  038b398  fsub 0, 9, 10
  038b39c  fsub 31, 9, 10
  038b3a0  fsub 9, 9, 10
  038b3a4  fmuls 7, 7, 1
  038b3a8  fmuls 6, 6, 1
  038b3ac  fmuls 1, 8, 1
  038b3b0  fsel 8, 11, 10, 7
  038b3b4  fsel 11, 12, 10, 6
  038b3b8  fsel 10, 13, 10, 1
  038b3bc  fsel 7, 0, 8, 7
  038b3c0  fsel 6, 31, 11, 6
  038b3c4  fsel 1, 9, 10, 1
  038b3c8  stfs 7, 208(1)
  038b3cc  stfs 6, 212(1)
  038b3d0  stfs 1, 216(1)
  038b3d4  stfs 2, 224(1)
  038b3d8  stfs 3, 228(1)
  038b3dc  stfs 4, 232(1)
  038b3e0  stfs 5, 236(1)
  038b3e4  b 0x38b5ec
  038b3e8  li 3, -1
  038b3ec  lwz 7, 160(30)
  038b3f0  li 4, 0
  038b3f4  subc 3, 3, 7
  038b3f8  li 5, 1
  038b3fc  lwz 7, 164(30)
  038b400  cntlzw 3, 3
  038b404  li 6, -1
  038b408  sldi 3, 3, 58
  038b40c  subc 4, 4, 5
  038b410  sradi 3, 3, 63
  038b414  subc 6, 6, 7
  038b418  and 3, 3, 4
  038b41c  lwz 7, 168(30)
  038b420  cntlzw 4, 6
  038b424  lbz 9, 134(30)
  038b428  addc 3, 5, 3
  038b42c  sldi 4, 4, 58
  038b430  addic 5, 3, 1
  038b434  li 8, -1
  038b438  sradi 4, 4, 63
  038b43c  subc 3, 3, 5
  038b440  subc 7, 8, 7
  038b444  and 3, 4, 3
  038b448  cntlzw 4, 7
  038b44c  addc 3, 5, 3
  038b450  sldi 4, 4, 58
  038b454  lwz 7, 172(30)
  038b458  addic 5, 3, 1
  038b45c  li 6, -1
  038b460  sradi 4, 4, 63
  038b464  subc 3, 3, 5
  038b468  subc 6, 6, 7
  038b46c  and 3, 4, 3
  038b470  cntlzw 4, 6
  038b474  addc 3, 5, 3
  038b478  sldi 4, 4, 58
  038b47c  addic 5, 3, 1
  038b480  sradi 4, 4, 63
  038b484  subc 3, 3, 5
  038b488  and 3, 4, 3
  038b48c  addc 3, 5, 3
  038b490  divw 4, 9, 3
  038b494  mullw 3, 4, 3
  038b498  ori 29, 25, 0
  038b49c  subc 27, 9, 3
  038b4a0  ori 28, 30, 0
  038b4a4  addic 27, 27, 1
  038b4a8  li 6, -1
  038b4ac  lwz 3, 160(28)
  038b4b0  addic 4, 27, -1
  038b4b4  subc 6, 6, 3
  038b4b8  subc 5, 27, 4
  038b4bc  cntlzw 6, 6
  038b4c0  sldi 6, 6, 58
  038b4c4  sradi 6, 6, 63
  038b4c8  and 27, 6, 5
  038b4cc  addc 27, 4, 27
  038b4d0  cmpwi 27, 0
  038b4d4  bf 2, 0x38b4ec
  038b4d8  extsw 3, 3
  038b4dc  addic 4, 1, 272
  038b4e0  bl 0x38a0e0
  038b4e4  cmpwi 3, 0
  038b4e8  bt 2, 0x38b4fc
  038b4ec  addic 29, 29, 1
  038b4f0  addic 28, 28, 4
  038b4f4  cmpwi 29, 4
  038b4f8  bt 0, 0x38b4a8
  038b4fc  lfs 3, 276(1)
  038b500  lfs 2, 272(1)
  038b504  lfs 1, 196(1)
  038b508  lfs 5, 192(1)
  038b50c  fsubs 1, 3, 1
  038b510  lfs 4, 280(1)
  038b514  fsubs 8, 2, 5
  038b518  lfs 6, 200(1)
  038b51c  lfs 5, 284(1)
  038b520  fsubs 6, 4, 6
  038b524  fmuls 7, 1, 1
  038b528  stfs 1, 212(1)
  038b52c  stfs 8, 208(1)
  038b530  stfs 5, 220(1)
  038b534  stfs 6, 216(1)
  038b538  lbz 3, 131(30)
  038b53c  rlwinm 3, 3, 0, 28, 28
  038b540  fmadds 1, 8, 8, 7
  038b544  cmpwi 3, 0
  038b548  fmadds 1, 6, 6, 1
  038b54c  fsqrts 1, 1
  038b550  bt 2, 0x38b5dc
  038b554  lfs 2, 40(23)
  038b558  bl 0xfcbe8
  038b55c  nop
  038b560  lfs 6, 212(1)
  038b564  lfs 7, 208(1)
  038b568  fmuls 2, 6, 6
  038b56c  lfs 8, 216(1)
  038b570  lfs 10, 4(23)
  038b574  fmadds 2, 7, 7, 2
  038b578  fmadds 2, 8, 8, 2
  038b57c  fsqrts 9, 2
  038b580  lfs 2, 272(1)
  038b584  lfs 3, 276(1)
  038b588  lfs 4, 280(1)
  038b58c  lfs 5, 284(1)
  038b590  fdivs 1, 1, 9
  038b594  fsub 11, 10, 9
  038b598  fsub 12, 10, 9
  038b59c  fsub 13, 10, 9
  038b5a0  fsub 0, 9, 10
  038b5a4  fsub 31, 9, 10
  038b5a8  fsub 9, 9, 10
  038b5ac  fmuls 7, 7, 1
  038b5b0  fmuls 6, 6, 1
  038b5b4  fmuls 1, 8, 1
  038b5b8  fsel 8, 11, 10, 7
  038b5bc  fsel 11, 12, 10, 6
  038b5c0  fsel 10, 13, 10, 1
  038b5c4  fsel 7, 0, 8, 7
  038b5c8  fsel 6, 31, 11, 6
  038b5cc  fsel 1, 9, 10, 1
  038b5d0  stfs 7, 208(1)
  038b5d4  stfs 6, 212(1)
  038b5d8  stfs 1, 216(1)
  038b5dc  stfs 2, 224(1)
  038b5e0  stfs 3, 228(1)
  038b5e4  stfs 4, 232(1)
  038b5e8  stfs 5, 236(1)
  038b5ec  lfs 1, 212(1)
  038b5f0  lfs 2, 208(1)
  038b5f4  fmuls 3, 1, 1
  038b5f8  lfs 4, 216(1)
  038b5fc  lis 3, 114
  038b600  lfs 5, 228(30)
  038b604  lfs 6, -3064(3)
  038b608  fmadds 3, 2, 2, 3
  038b60c  fmuls 5, 5, 6
  038b610  lfs 6, 4(23)
  038b614  fmadds 4, 4, 4, 3
  038b618  fsqrts 3, 3
  038b61c  addic 29, 1, 288
  038b620  ori 3, 29, 0
  038b624  fsqrts 4, 4
  038b628  fsub 7, 6, 3
  038b62c  fsub 8, 6, 3
  038b630  fsub 9, 3, 6
  038b634  fsub 10, 3, 6
  038b638  fmuls 31, 5, 4
  038b63c  lfs 4, 76(23)
  038b640  lfs 5, 220(1)
  038b644  stw 25, 296(1)
  038b648  stfs 5, 300(1)
  038b64c  fdivs 3, 31, 3
  038b650  fmuls 1, 1, 3
  038b654  fmuls 2, 2, 3
  038b658  fsel 3, 7, 6, 1
  038b65c  fsel 5, 8, 6, 2
  038b660  fsel 3, 9, 3, 1
  038b664  fsel 2, 10, 5, 2
  038b668  fmuls 1, 3, 3
  038b66c  fmadds 1, 2, 2, 1
  038b670  fmadds 1, 6, 6, 1
  038b674  fsqrts 1, 1
  038b678  fdivs 4, 4, 1
  038b67c  fsub 5, 6, 1
  038b680  fsub 7, 6, 1
  038b684  fsub 8, 1, 6
  038b688  fsub 1, 1, 6
  038b68c  fmuls 9, 2, 4
  038b690  fmuls 4, 3, 4
  038b694  fsel 5, 5, 6, 9
  038b698  fsel 6, 7, 6, 4
  038b69c  fsel 5, 8, 5, 9
  038b6a0  fsel 1, 1, 6, 4
  038b6a4  stfs 5, 288(1)
  038b6a8  stfs 1, 292(1)
  038b6ac  lfs 1, 80(23)
  038b6b0  stw 25, 216(1)
  038b6b4  stfs 3, 212(1)
  038b6b8  stfs 2, 208(1)
  038b6bc  bl 0x110950
  038b6c0  nop
  038b6c4  addic 3, 1, 304
  038b6c8  addic 5, 1, 192
  038b6cc  ori 4, 29, 0
  038b6d0  bl 0x502b08
  038b6d4  nop
  038b6d8  lis 3, 114
  038b6dc  lfs 1, 220(30)
  038b6e0  addic 4, 1, 224
  038b6e4  li 7, 0
  038b6e8  lfs 2, -3048(3)
  038b6ec  ori 3, 29, 0
  038b6f0  fmuls 2, 1, 2
  038b6f4  fmr 1, 31
  038b6f8  fneg 2, 2
  038b6fc  bl 0x108180
  038b700  nop
  038b704  stfs 1, 216(1)
  038b708  ori 3, 31, 0
  038b70c  lhz 6, 140(30)
  038b710  addic 5, 1, 208
  038b714  lbz 7, 131(30)
  038b718  ori 4, 29, 0
  038b71c  extsh 6, 6
  038b720  bl 0x3affa0
  038b724  nop
  038b728  cmpwi 3, 0
  038b72c  bt 2, 0x38b738
  038b730  li 4, 255
  038b734  stb 4, 48(3)
  038b738  li 3, 138
  038b73c  li 5, 36
  038b740  addi 4, 3, 16
  038b744  <unknown>
  038b748  lis 3, 114
  038b74c  <unknown>
  038b750  <unknown>
  038b754  vor 2, 2, 3
  038b758  li 4, -3056
  038b75c  vspltisw 3, -16
  038b760  vsraw 2, 2, 3
  038b764  vspltw 3, 4, 0
  038b768  vspltisw 4, -1
  038b76c  <unknown>
  038b770  vcfsx 2, 2, 0
  038b774  li 3, 136
  038b778  vslw 4, 4, 4
  038b77c  vaddfp 2, 2, 3
  038b780  vmaddfp 2, 5, 2, 4
  038b784  vctsxs 2, 2, 0
  038b788  vsplth 2, 2, 1
  038b78c  stvehx 2, 3, 30
  038b790  lbz 3, 134(30)
  038b794  addic 3, 3, 1
  038b798  stb 3, 134(30)
  038b79c  b 0x38ac24
  038b7a0  addic 4, 30, 96
  038b7a4  ori 3, 31, 0
  038b7a8  bl 0x10c9a0
  038b7ac  nop
  038b7b0  ld 0, 496(1)
  038b7b4  mtlr 0
  038b7b8  lfd 26, 432(1)
  038b7bc  lfd 27, 440(1)
  038b7c0  lfd 28, 448(1)
  038b7c4  lfd 29, 456(1)
  038b7c8  lfd 30, 464(1)
  038b7cc  lfd 31, 472(1)
  038b7d0  ld 22, 352(1)
  038b7d4  ld 23, 360(1)
  038b7d8  ld 24, 368(1)
  038b7dc  ld 25, 376(1)
  038b7e0  ld 26, 384(1)
  038b7e4  ld 27, 392(1)
  038b7e8  ld 28, 400(1)
  038b7ec  ld 29, 408(1)
  038b7f0  ld 30, 416(1)
  038b7f4  ld 31, 424(1)
  038b7f8  addi 1, 1, 480
  038b7fc  blr
