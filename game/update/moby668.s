# game/update/moby668.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M668_0040a078:   # 0x40a078, 0xdc bytes
  040a078  lbz 8, 33(3)
  040a07c  cmpwi 8, 255
  040a080  bf 2, 0x40a08c
  040a084  li 3, 0
  040a088  b 0x40a150
  040a08c  lis 5, 165
  040a090  lis 4, 164
  040a094  addic 5, 5, -28284
  040a098  rlwinm 6, 8, 2, 22, 29
  040a09c  lwz 7, -28512(4)
  040a0a0  lwzx 8, 5, 6
  040a0a4  lhz 6, 0(8)
  040a0a8  rlwinm 6, 6, 8, 9, 23
  040a0ac  addc 5, 7, 6
  040a0b0  clrldi 5, 5, 32
  040a0b4  lhz 9, 166(5)
  040a0b8  cmpwi 9, 580
  040a0bc  bf 2, 0x40a138
  040a0c0  lbz 9, 32(5)
  040a0c4  cmpwi 9, 26
  040a0c8  bf 2, 0x40a138
  040a0cc  stw 3, 184(5)
  040a0d0  lwz 5, -28512(4)
  040a0d4  lhz 7, 180(3)
  040a0d8  addc 8, 5, 6
  040a0dc  extsh 9, 7
  040a0e0  clrldi 8, 8, 32
  040a0e4  lhz 10, 180(8)
  040a0e8  extsh 10, 10
  040a0ec  cmpw 10, 9
  040a0f0  bf 1, 0x40a100
  040a0f4  sth 7, 180(8)
  040a0f8  lhz 7, 180(3)
  040a0fc  lwz 5, -28512(4)
  040a100  addc 5, 5, 6
  040a104  clrldi 5, 5, 32
  040a108  lhz 5, 180(5)
  040a10c  subc 5, 7, 5
  040a110  extsh 7, 5
  040a114  cmpwi 7, 1
  040a118  sth 5, 180(3)
  040a11c  bf 0, 0x40a128
  040a120  li 5, 1
  040a124  sth 5, 180(3)
  040a128  lwz 3, -28512(4)
  040a12c  addc 3, 3, 6
  040a130  clrldi 3, 3, 32
  040a134  b 0x40a150
  040a138  lhz 5, 0(8)
  040a13c  addic 8, 8, 2
  040a140  extsh 5, 5
  040a144  cmpwi 5, 0
  040a148  bf 0, 0x40a0a4
  040a14c  li 3, 0
  040a150  blr

M668_0040a168:   # 0x40a168, 0x338 bytes
  040a168  stdu 1, -160(1)
  040a16c  mflr 0
  040a170  std 0, 176(1)
  040a174  stfd 31, 152(1)
  040a178  lis 4, 65
  040a17c  std 30, 136(1)
  040a180  li 5, 0
  040a184  lwz 30, 120(3)
  040a188  std 31, 144(1)
  040a18c  addi 4, 4, -24236
  040a190  ori 31, 3, 0
  040a194  lfs 31, 0(4)
  040a198  stw 5, 116(1)
  040a19c  lbz 3, 46(30)
  040a1a0  std 29, 128(1)
  040a1a4  cmpwi 3, 2
  040a1a8  bf 2, 0x40a1f4
  040a1ac  li 3, 1
  040a1b0  stb 3, 46(30)
  040a1b4  lwz 30, 224(30)
  040a1b8  cmpwi 30, -1
  040a1bc  bf 1, 0x40a1e4
  040a1c0  lis 3, 164
  040a1c4  slwi 4, 30, 8
  040a1c8  lwz 3, -28512(3)
  040a1cc  addc 3, 3, 4
  040a1d0  clrldi 3, 3, 32
  040a1d4  lwz 3, 120(3)
  040a1d8  lwz 4, 336(3)
  040a1dc  addic 4, 4, -1
  040a1e0  stw 4, 336(3)
  040a1e4  ori 3, 31, 0
  040a1e8  bl 0xefb38
  040a1ec  nop
  040a1f0  b 0x40a480
  040a1f4  ori 3, 31, 0
  040a1f8  lis 4, 51
  040a1fc  li 5, 0
  040a200  bl 0x10675c
  040a204  nop
  040a208  ori 29, 3, 0
  040a20c  addic 5, 30, 32
  040a210  li 6, 0
  040a214  addic 7, 1, 112
  040a218  li 9, 0
  040a21c  addic 8, 1, 116
  040a220  ori 3, 31, 0
  040a224  ori 4, 29, 0
  040a228  li 10, 4
  040a22c  bl 0x106840
  040a230  nop
  040a234  cmpwi 29, 0
  040a238  bt 2, 0x40a45c
  040a23c  lwz 3, 112(1)
  040a240  cmpwi 3, 1
  040a244  cmpwi 1, 3, 3
  040a248  bt 2, 0x40a45c
  040a24c  lbz 3, 32(31)
  040a250  cmpwi 3, 4
  040a254  bt 2, 0x40a45c
  040a258  fmr 1, 31
  040a25c  bt 6, 0x40a26c
  040a260  lfs 1, 32(30)
  040a264  lfs 2, 116(1)
  040a268  fsubs 1, 1, 2
  040a26c  fcmpu 0, 1, 31
  040a270  li 3, 4
  040a274  stfs 1, 32(30)
  040a278  stw 3, 148(30)
  040a27c  cror 6, 0, 2
  040a280  bt 6, 0x40a360
  040a284  lis 3, 65
  040a288  lis 4, 114
  040a28c  addi 3, 3, -24236
  040a290  addic 5, 1, 120
  040a294  addic 6, 30, 136
  040a298  addic 7, 30, 140
  040a29c  lfs 1, 4(3)
  040a2a0  lfs 2, -3052(4)
  040a2a4  fmuls 1, 2, 1
  040a2a8  stfs 1, 136(30)
  040a2ac  lfs 1, 8(3)
  040a2b0  fmuls 1, 2, 1
  040a2b4  stfs 1, 140(30)
  040a2b8  lfs 1, 16(29)
  040a2bc  lfs 2, 24(29)
  040a2c0  stfs 1, 48(1)
  040a2c4  stfs 2, 56(1)
  040a2c8  lfs 1, 20(29)
  040a2cc  lfs 2, 28(29)
  040a2d0  stfs 1, 52(1)
  040a2d4  stfs 2, 60(1)
  040a2d8  ld 3, 48(1)
  040a2dc  ld 4, 56(1)
  040a2e0  bl 0x107de8
  040a2e4  nop
  040a2e8  lfs 1, 120(1)
  040a2ec  ori 3, 31, 0
  040a2f0  addic 4, 30, 112
  040a2f4  li 6, 3
  040a2f8  li 7, 1
  040a2fc  li 8, 0
  040a300  bl 0x10ad80
  040a304  nop
  040a308  lwz 3, 116(1)
  040a30c  lis 4, 16256
  040a310  srawi 5, 3, 31
  040a314  srwi 6, 5, 1
  040a318  xor 3, 6, 3
  040a31c  subc 3, 3, 5
  040a320  cmpw 3, 4
  040a324  bt 0, 0x40a354
  040a328  li 6, 120
  040a32c  li 7, 3
  040a330  ori 3, 31, 0
  040a334  li 4, 2
  040a338  stb 6, 103(30)
  040a33c  li 5, 0
  040a340  stb 7, 32(31)
  040a344  li 6, 0
  040a348  bl 0xfddc0
  040a34c  nop
  040a350  b 0x40a44c
  040a354  li 3, 120
  040a358  stb 3, 103(30)
  040a35c  b 0x40a44c
  040a360  li 3, 0
  040a364  lhz 7, 52(31)
  040a368  lis 6, 65
  040a36c  li 4, 250
  040a370  rlwimi 7, 3, 0, 19, 19
  040a374  li 5, 4
  040a378  addi 3, 6, -24236
  040a37c  lis 6, 114
  040a380  sth 7, 52(31)
  040a384  stb 4, 103(30)
  040a388  stb 5, 32(31)
  040a38c  lfs 1, 12(3)
  040a390  lfs 2, -3052(6)
  040a394  fmuls 1, 2, 1
  040a398  addic 5, 1, 124
  040a39c  addic 6, 30, 136
  040a3a0  addic 7, 30, 140
  040a3a4  stfs 1, 136(30)
  040a3a8  lfs 1, 8(3)
  040a3ac  fmuls 1, 2, 1
  040a3b0  stfs 1, 140(30)
  040a3b4  lfs 1, 16(29)
  040a3b8  lfs 2, 24(29)
  040a3bc  stfs 1, 48(1)
  040a3c0  stfs 2, 56(1)
  040a3c4  lfs 1, 20(29)
  040a3c8  lfs 2, 28(29)
  040a3cc  stfs 1, 52(1)
  040a3d0  stfs 2, 60(1)
  040a3d4  ld 3, 48(1)
  040a3d8  ld 4, 56(1)
  040a3dc  bl 0x107de8
  040a3e0  nop
  040a3e4  ori 3, 31, 0
  040a3e8  lfs 1, 124(1)
  040a3ec  addic 4, 30, 112
  040a3f0  li 6, 3
  040a3f4  li 7, 1
  040a3f8  li 8, 0
  040a3fc  bl 0x10ad80
  040a400  nop
  040a404  lis 3, 16656
  040a408  lis 4, 16792
  040a40c  stw 3, 192(30)
  040a410  stw 4, 196(30)
  040a414  lbz 3, 83(31)
  040a418  cmpwi 3, 3
  040a41c  bt 2, 0x40a438
  040a420  ori 3, 31, 0
  040a424  li 4, 3
  040a428  li 5, 0
  040a42c  li 6, 0
  040a430  bl 0xfddc0
  040a434  nop
  040a438  ori 3, 31, 0
  040a43c  li 4, 0
  040a440  li 5, -1
  040a444  bl 0xfd8d0
  040a448  nop
  040a44c  addic 4, 30, 96
  040a450  ori 3, 31, 0
  040a454  bl 0x10c808
  040a458  nop
  040a45c  li 5, 255
  040a460  ori 3, 31, 0
  040a464  addic 4, 30, 96
  040a468  stb 5, 164(31)
  040a46c  bl 0x10c9a0
  040a470  nop
  040a474  addic 3, 31, 188
  040a478  bl 0x500060
  040a47c  nop
  040a480  ld 0, 176(1)
  040a484  mtlr 0
  040a488  lfd 31, 152(1)
  040a48c  ld 29, 128(1)
  040a490  ld 30, 136(1)
  040a494  ld 31, 144(1)
  040a498  addi 1, 1, 160
  040a49c  blr

UpdateMoby_668:   # 0x40a4d8, 0x734 bytes
  040a4d8  stdu 1, -304(1)
  040a4dc  mflr 0
  040a4e0  std 0, 320(1)
  040a4e4  stfd 31, 296(1)
  040a4e8  std 31, 288(1)
  040a4ec  std 30, 280(1)
  040a4f0  ori 31, 3, 0
  040a4f4  std 29, 272(1)
  040a4f8  std 28, 264(1)
  040a4fc  lwz 30, 120(31)
  040a500  bl 0x40a168
  040a504  lbz 3, 32(31)
  040a508  cmpwi 3, 127
  040a50c  bt 1, 0x40abe8
  040a510  lbz 4, 49(31)
  040a514  cmpwi 4, 0
  040a518  bt 2, 0x40a588
  040a51c  lis 4, 149
  040a520  lfs 1, 20(31)
  040a524  addic 4, 4, 5056
  040a528  lfs 2, 16(31)
  040a52c  lfs 3, 324(4)
  040a530  lfs 4, 320(4)
  040a534  fsubs 1, 1, 3
  040a538  fsubs 2, 2, 4
  040a53c  lfs 3, 24(31)
  040a540  lfs 4, 328(4)
  040a544  fsubs 3, 3, 4
  040a548  lis 4, 65
  040a54c  fmuls 1, 1, 1
  040a550  addi 4, 4, -23392
  040a554  fmadds 1, 2, 2, 1
  040a558  lfs 2, 0(4)
  040a55c  fmadds 1, 3, 3, 1
  040a560  fsqrts 1, 1
  040a564  fcmpu 0, 1, 2
  040a568  cror 6, 1, 2
  040a56c  bt 6, 0x40a588
  040a570  ori 3, 31, 0
  040a574  bl 0x106360
  040a578  nop
  040a57c  li 4, 22
  040a580  lbz 3, 32(31)
  040a584  stb 4, 127(31)
  040a588  cmpwi 3, 4
  040a58c  cmpwi 6, 3, 3
  040a590  bt 2, 0x40aa34
  040a594  cmpwi 1, 3, 2
  040a598  bt 26, 0x40a9c0
  040a59c  cmpwi 6, 3, 1
  040a5a0  bt 6, 0x40a760
  040a5a4  cmpwi 1, 3, 0
  040a5a8  bt 26, 0x40a68c
  040a5ac  bf 6, 0x40abe8
  040a5b0  lis 3, 161
  040a5b4  lbz 4, 177(31)
  040a5b8  lhz 5, 180(31)
  040a5bc  addic 3, 3, -7394
  040a5c0  slwi 4, 4, 2
  040a5c4  lhzx 3, 3, 4
  040a5c8  subc 3, 5, 3
  040a5cc  extsh 4, 3
  040a5d0  cmpwi 4, 1
  040a5d4  sth 3, 180(31)
  040a5d8  bf 0, 0x40a5e4
  040a5dc  li 3, 1
  040a5e0  sth 3, 180(31)
  040a5e4  li 4, 212
  040a5e8  li 3, 1
  040a5ec  vspltisw 4, -1
  040a5f0  addi 5, 4, 16
  040a5f4  lis 6, 16448
  040a5f8  stb 3, 32(31)
  040a5fc  lvlx 2, 4, 30
  040a600  lvrx 3, 5, 30
  040a604  li 4, 3
  040a608  lis 5, 65
  040a60c  stw 6, 32(30)
  040a610  vor 2, 2, 3
  040a614  li 6, 4
  040a618  addi 5, 5, -23392
  040a61c  vslw 4, 4, 4
  040a620  sth 4, 36(30)
  040a624  stb 3, 46(30)
  040a628  vcfsx 2, 2, 0
  040a62c  lis 3, 114
  040a630  li 4, -3056
  040a634  lvlx 3, 6, 5
  040a638  vspltw 3, 3, 0
  040a63c  lvlx 5, 4, 3
  040a640  li 3, 216
  040a644  lwz 31, 224(30)
  040a648  cmpwi 31, -1
  040a64c  vaddfp 2, 2, 3
  040a650  vmaddfp 2, 5, 2, 4
  040a654  vctsxs 2, 2, 0
  040a658  vspltw 2, 2, 0
  040a65c  stvewx 2, 3, 30
  040a660  bf 1, 0x40abe8
  040a664  lis 3, 164
  040a668  slwi 4, 31, 8
  040a66c  lwz 3, -28512(3)
  040a670  addc 3, 3, 4
  040a674  clrldi 3, 3, 32
  040a678  lwz 3, 120(3)
  040a67c  lwz 4, 336(3)
  040a680  addic 4, 4, 1
  040a684  stw 4, 336(3)
  040a688  b 0x40abe8
  040a68c  addic 3, 30, 216
  040a690  bl 0x4fff60
  040a694  nop
  040a698  cmpwi 3, 0
  040a69c  bt 2, 0x40abe8
  040a6a0  ori 3, 31, 0
  040a6a4  bl 0x40a078
  040a6a8  cmpwi 3, 0
  040a6ac  bt 2, 0x40a704
  040a6b0  li 3, 2
  040a6b4  lbz 4, 83(31)
  040a6b8  cmpwi 4, 1
  040a6bc  stb 3, 32(31)
  040a6c0  bt 2, 0x40abe8
  040a6c4  lis 3, 65
  040a6c8  lis 4, 114
  040a6cc  addi 3, 3, -23392
  040a6d0  li 5, 0
  040a6d4  lfs 1, 8(3)
  040a6d8  lfs 2, -3056(4)
  040a6dc  ori 3, 31, 0
  040a6e0  fmuls 1, 2, 1
  040a6e4  li 4, 1
  040a6e8  fctiwz 1, 1
  040a6ec  stfd 1, 240(1)
  040a6f0  lwz 6, 244(1)
  040a6f4  extsw 6, 6
  040a6f8  bl 0xfddc0
  040a6fc  nop
  040a700  b 0x40abe8
  040a704  li 3, 212
  040a708  vspltisw 4, -1
  040a70c  lis 5, 65
  040a710  addi 4, 3, 16
  040a714  vslw 4, 4, 4
  040a718  lvlx 2, 3, 30
  040a71c  addi 3, 5, -23392
  040a720  lvrx 3, 4, 30
  040a724  li 4, 4
  040a728  vor 2, 2, 3
  040a72c  vcfsx 2, 2, 0
  040a730  lvlx 3, 4, 3
  040a734  lis 3, 114
  040a738  vspltw 3, 3, 0
  040a73c  li 4, -3056
  040a740  lvlx 5, 4, 3
  040a744  li 3, 216
  040a748  vaddfp 2, 2, 3
  040a74c  vmaddfp 2, 5, 2, 4
  040a750  vctsxs 2, 2, 0
  040a754  vspltw 2, 2, 0
  040a758  stvewx 2, 3, 30
  040a75c  b 0x40abe8
  040a760  lbz 3, 112(31)
  040a764  rlwinm 3, 3, 0, 30, 30
  040a768  cmpwi 3, 0
  040a76c  bt 2, 0x40a7c4
  040a770  li 3, 1
  040a774  lbz 4, 83(31)
  040a778  cmpwi 4, 0
  040a77c  stb 3, 32(31)
  040a780  bt 2, 0x40abe8
  040a784  lis 3, 65
  040a788  lis 4, 114
  040a78c  addi 3, 3, -23392
  040a790  li 5, 0
  040a794  lfs 1, 8(3)
  040a798  lfs 2, -3056(4)
  040a79c  ori 3, 31, 0
  040a7a0  fmuls 1, 2, 1
  040a7a4  li 4, 0
  040a7a8  fctiwz 1, 1
  040a7ac  stfd 1, 240(1)
  040a7b0  lwz 6, 244(1)
  040a7b4  extsw 6, 6
  040a7b8  bl 0xfddc0
  040a7bc  nop
  040a7c0  b 0x40abe8
  040a7c4  ori 3, 31, 0
  040a7c8  bl 0xefe40
  040a7cc  nop
  040a7d0  lis 3, 65
  040a7d4  addi 3, 3, -23392
  040a7d8  lfs 2, 12(3)
  040a7dc  fcmpu 0, 1, 2
  040a7e0  bf 2, 0x40abe8
  040a7e4  lis 3, 65
  040a7e8  lbz 6, 176(31)
  040a7ec  li 5, 16
  040a7f0  vspltisw 5, 0
  040a7f4  addi 3, 3, -23392
  040a7f8  lis 4, 161
  040a7fc  slwi 6, 6, 2
  040a800  addic 4, 4, -812
  040a804  lvlx 2, 5, 3
  040a808  vspltw 2, 2, 0
  040a80c  lvlx 3, 6, 4
  040a810  lis 5, 114
  040a814  li 4, 4
  040a818  vcmpgtsw 4, 3, 2
  040a81c  vsel 2, 3, 2, 4
  040a820  vspltisw 3, 15
  040a824  vspltisw 4, -16
  040a828  vrlw 6, 3, 4
  040a82c  vmulouh 3, 2, 3
  040a830  vmsumshm 2, 2, 6, 5
  040a834  lvlx 5, 4, 3
  040a838  li 3, -3056
  040a83c  vspltw 5, 5, 0
  040a840  vslw 2, 2, 4
  040a844  vspltisw 4, -1
  040a848  vadduwm 2, 2, 3
  040a84c  vslw 4, 4, 4
  040a850  lvlx 3, 3, 5
  040a854  vcfsx 2, 2, 0
  040a858  li 3, 212
  040a85c  addi 4, 3, 16
  040a860  lvlx 6, 3, 30
  040a864  lvrx 7, 4, 30
  040a868  vor 6, 6, 7
  040a86c  vaddfp 2, 2, 5
  040a870  li 4, 216
  040a874  ori 3, 31, 0
  040a878  vmaddfp 2, 3, 2, 4
  040a87c  vspltisw 4, -1
  040a880  vslw 4, 4, 4
  040a884  vctsxs 2, 2, 0
  040a888  vadduwm 2, 6, 2
  040a88c  vcfsx 2, 2, 0
  040a890  vaddfp 2, 2, 5
  040a894  vmaddfp 2, 3, 2, 4
  040a898  vctsxs 2, 2, 0
  040a89c  vspltw 2, 2, 0
  040a8a0  stvewx 2, 4, 30
  040a8a4  bl 0x40a078
  040a8a8  ori 4, 3, 0
  040a8ac  cmpwi 4, 0
  040a8b0  bt 2, 0x40abe8
  040a8b4  lwz 30, 224(30)
  040a8b8  lwz 3, 120(4)
  040a8bc  cmpwi 30, -1
  040a8c0  bf 1, 0x40a8e8
  040a8c4  lis 5, 164
  040a8c8  slwi 6, 30, 8
  040a8cc  lwz 5, -28512(5)
  040a8d0  addc 5, 5, 6
  040a8d4  clrldi 5, 5, 32
  040a8d8  lwz 5, 120(5)
  040a8dc  lwz 6, 332(5)
  040a8e0  addic 6, 6, 1
  040a8e4  stw 6, 332(5)
  040a8e8  lis 5, 65
  040a8ec  lfs 1, 16(31)
  040a8f0  lfs 2, 20(31)
  040a8f4  addi 6, 5, -23392
  040a8f8  stfs 1, 208(1)
  040a8fc  lfs 3, 28(31)
  040a900  stfs 2, 212(1)
  040a904  stfs 3, 220(1)
  040a908  lfs 3, 20(6)
  040a90c  lfs 4, 24(31)
  040a910  fadds 3, 4, 3
  040a914  lis 5, 114
  040a918  addic 7, 1, 208
  040a91c  stfs 3, 216(1)
  040a920  lfs 3, 544(3)
  040a924  fsubs 1, 3, 1
  040a928  stfs 1, 192(1)
  040a92c  lfs 3, 548(3)
  040a930  fsubs 2, 3, 2
  040a934  fmuls 3, 2, 2
  040a938  stfs 2, 196(1)
  040a93c  lfs 5, 552(3)
  040a940  fsubs 4, 5, 4
  040a944  lfs 5, -3052(5)
  040a948  fmadds 3, 1, 1, 3
  040a94c  addic 5, 1, 192
  040a950  stfs 4, 200(1)
  040a954  lfs 4, 556(3)
  040a958  fsqrts 3, 3
  040a95c  stfs 4, 204(1)
  040a960  lfs 4, 24(6)
  040a964  lfs 6, 28(6)
  040a968  ori 3, 4, 0
  040a96c  ori 4, 7, 0
  040a970  fmuls 4, 5, 4
  040a974  fdivs 4, 4, 3
  040a978  fsub 7, 6, 3
  040a97c  fsub 8, 6, 3
  040a980  fsub 9, 3, 6
  040a984  fsub 3, 3, 6
  040a988  fmuls 1, 1, 4
  040a98c  fmuls 2, 2, 4
  040a990  fsel 4, 7, 6, 1
  040a994  fsel 6, 8, 6, 2
  040a998  fsel 1, 9, 4, 1
  040a99c  fsel 2, 3, 6, 2
  040a9a0  stfs 1, 192(1)
  040a9a4  stfs 2, 196(1)
  040a9a8  lfs 1, 32(6)
  040a9ac  fmuls 1, 5, 1
  040a9b0  stfs 1, 200(1)
  040a9b4  bl 0x3d0b20
  040a9b8  nop
  040a9bc  b 0x40abe8
  040a9c0  ori 3, 31, 0
  040a9c4  addic 4, 30, 112
  040a9c8  bl 0x10b030
  040a9cc  nop
  040a9d0  lbz 3, 112(31)
  040a9d4  rlwinm 3, 3, 0, 30, 30
  040a9d8  cmpwi 3, 0
  040a9dc  bt 2, 0x40abe8
  040a9e0  li 3, 1
  040a9e4  lbz 4, 83(31)
  040a9e8  cmpwi 4, 0
  040a9ec  stb 3, 32(31)
  040a9f0  bt 2, 0x40abe8
  040a9f4  lis 3, 65
  040a9f8  lis 4, 114
  040a9fc  addi 3, 3, -23392
  040aa00  li 5, 0
  040aa04  lfs 1, 36(3)
  040aa08  lfs 2, -3056(4)
  040aa0c  ori 3, 31, 0
  040aa10  li 4, 0
  040aa14  fmuls 1, 2, 1
  040aa18  fctiwz 1, 1
  040aa1c  stfd 1, 240(1)
  040aa20  lwz 6, 244(1)
  040aa24  extsw 6, 6
  040aa28  bl 0xfddc0
  040aa2c  nop
  040aa30  b 0x40abe8
  040aa34  ori 3, 31, 0
  040aa38  addic 4, 30, 112
  040aa3c  bl 0x10b030
  040aa40  nop
  040aa44  rlwinm 3, 3, 0, 25, 25
  040aa48  cmpwi 3, 0
  040aa4c  bt 2, 0x40abe8
  040aa50  lwz 3, 224(30)
  040aa54  cmpwi 3, -1
  040aa58  bf 1, 0x40aa80
  040aa5c  lis 4, 164
  040aa60  slwi 3, 3, 8
  040aa64  lwz 4, -28512(4)
  040aa68  addc 3, 4, 3
  040aa6c  clrldi 3, 3, 32
  040aa70  lwz 3, 120(3)
  040aa74  lwz 4, 336(3)
  040aa78  addic 4, 4, -1
  040aa7c  stw 4, 336(3)
  040aa80  lfs 1, 16(31)
  040aa84  lis 3, 65
  040aa88  lfs 2, 20(31)
  040aa8c  li 7, -1
  040aa90  stfs 1, 224(1)
  040aa94  addi 3, 3, -23392
  040aa98  lfs 1, 24(31)
  040aa9c  li 6, 1
  040aaa0  stfs 2, 228(1)
  040aaa4  li 11, 0
  040aaa8  lfs 2, 28(31)
  040aaac  addic 4, 30, 64
  040aab0  stfs 1, 232(1)
  040aab4  addic 5, 1, 224
  040aab8  stfs 2, 236(1)
  040aabc  li 8, 5
  040aac0  lfs 31, 28(3)
  040aac4  li 9, 2
  040aac8  lfs 4, 44(3)
  040aacc  li 10, 4
  040aad0  lfs 3, 24(3)
  040aad4  fmr 1, 31
  040aad8  lfs 5, 40(3)
  040aadc  fmr 2, 31
  040aae0  lfs 7, 48(3)
  040aae4  fmr 6, 4
  040aae8  std 7, 144(1)
  040aaec  ori 3, 31, 0
  040aaf0  std 6, 160(1)
  040aaf4  std 6, 168(1)
  040aaf8  std 7, 176(1)
  040aafc  std 11, 184(1)
  040ab00  bl 0x10e030
  040ab04  nop
  040ab08  lis 4, 161
  040ab0c  fmr 1, 31
  040ab10  addic 30, 31, 16
  040ab14  addic 29, 4, 23856
  040ab18  addic 28, 31, 64
  040ab1c  ori 3, 31, 0
  040ab20  li 4, 1764
  040ab24  std 29, 112(1)
  040ab28  std 29, 120(1)
  040ab2c  ori 10, 29, 0
  040ab30  ori 5, 30, 0
  040ab34  ori 6, 28, 0
  040ab38  li 7, 0
  040ab3c  li 8, 0
  040ab40  bl 0x11a560
  040ab44  nop
  040ab48  std 29, 112(1)
  040ab4c  ori 3, 31, 0
  040ab50  std 29, 120(1)
  040ab54  li 4, 1764
  040ab58  ori 10, 29, 0
  040ab5c  fmr 1, 31
  040ab60  ori 5, 30, 0
  040ab64  ori 6, 28, 0
  040ab68  li 7, 0
  040ab6c  li 8, 0
  040ab70  bl 0x11a560
  040ab74  nop
  040ab78  std 29, 112(1)
  040ab7c  ori 3, 31, 0
  040ab80  std 29, 120(1)
  040ab84  li 4, 1765
  040ab88  ori 10, 29, 0
  040ab8c  fmr 1, 31
  040ab90  ori 5, 30, 0
  040ab94  ori 6, 28, 0
  040ab98  li 7, 0
  040ab9c  li 8, 0
  040aba0  bl 0x11a560
  040aba4  nop
  040aba8  ori 3, 31, 0
  040abac  std 29, 112(1)
  040abb0  li 4, 1765
  040abb4  fmr 1, 31
  040abb8  ori 10, 29, 0
  040abbc  std 29, 120(1)
  040abc0  ori 5, 30, 0
  040abc4  ori 6, 28, 0
  040abc8  li 7, 0
  040abcc  li 8, 0
  040abd0  bl 0x11a560
  040abd4  nop
  040abd8  ori 3, 31, 0
  040abdc  bl 0xefb38
  040abe0  nop
  040abe4  b 0x40abe8
  040abe8  ld 0, 320(1)
  040abec  mtlr 0
  040abf0  lfd 31, 296(1)
  040abf4  ld 28, 264(1)
  040abf8  ld 29, 272(1)
  040abfc  ld 30, 280(1)
  040ac00  ld 31, 288(1)
  040ac04  addi 1, 1, 304
  040ac08  blr
