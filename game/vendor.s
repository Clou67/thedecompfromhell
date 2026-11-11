# game/vendor.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_VENDOR:   # 0x16a0d8, 0x14 bytes
  016a0d8  lis 3, 116
  016a0dc  lis 4, 1
  016a0e0  addic 3, 3, -30844
  016a0e4  stw 4, 72(3)
  016a0e8  blr

ProjectBoxToScreenInt:   # 0x16a108, 0x288 bytes
  016a108  stdu 1, -208(1)
  016a10c  mflr 0
  016a110  std 0, 224(1)
  016a114  stfd 25, 152(1)
  016a118  stfd 26, 160(1)
  016a11c  stfd 27, 168(1)
  016a120  stfd 28, 176(1)
  016a124  stfd 29, 184(1)
  016a128  stfd 30, 192(1)
  016a12c  stfd 31, 200(1)
  016a130  lis 12, 144
  016a134  std 31, 144(1)
  016a138  li 11, 208
  016a13c  lis 31, 23
  016a140  addc 11, 1, 11
  016a144  std 3, 48(11)
  016a148  std 5, 64(11)
  016a14c  std 4, 56(11)
  016a150  addi 3, 31, -24336
  016a154  std 6, 72(11)
  016a158  lwz 4, -23196(12)
  016a15c  lfs 2, 52(11)
  016a160  addic 5, 4, 224
  016a164  lfs 4, 68(11)
  016a168  lfs 1, 0(3)
  016a16c  lfs 3, 12(5)
  016a170  lfs 5, 28(5)
  016a174  lfs 7, 44(5)
  016a178  lfs 8, 48(11)
  016a17c  lfs 9, 64(11)
  016a180  fmuls 6, 5, 2
  016a184  fmuls 12, 3, 8
  016a188  lfs 10, 56(11)
  016a18c  fmuls 5, 5, 4
  016a190  lfs 11, 72(11)
  016a194  fmuls 3, 3, 9
  016a198  lfs 0, 60(5)
  016a19c  fmuls 13, 7, 10
  016a1a0  fmuls 7, 7, 11
  016a1a4  fmuls 0, 0, 1
  016a1a8  std 28, 120(1)
  016a1ac  lis 3, 150
  016a1b0  ori 28, 7, 0
  016a1b4  fadds 6, 12, 6
  016a1b8  fadds 3, 3, 5
  016a1bc  lfs 5, 0(5)
  016a1c0  lfs 12, 16(5)
  016a1c4  addic 3, 3, -12416
  016a1c8  std 29, 128(1)
  016a1cc  fmuls 31, 12, 2
  016a1d0  ori 29, 8, 0
  016a1d4  fadds 6, 6, 13
  016a1d8  fadds 3, 3, 7
  016a1dc  lfs 13, 4(5)
  016a1e0  fmuls 7, 5, 8
  016a1e4  lfs 30, 20(5)
  016a1e8  fmuls 5, 5, 9
  016a1ec  fmuls 8, 13, 8
  016a1f0  lfs 29, 32(5)
  016a1f4  fmuls 2, 30, 2
  016a1f8  fmuls 9, 13, 9
  016a1fc  fadds 6, 6, 0
  016a200  fadds 3, 3, 0
  016a204  fadds 7, 7, 31
  016a208  lfs 0, 36(5)
  016a20c  fmuls 31, 29, 10
  016a210  lfs 28, 48(5)
  016a214  fmuls 10, 0, 10
  016a218  lfs 27, 52(5)
  016a21c  fadds 2, 8, 2
  016a220  fmuls 8, 12, 4
  016a224  fmuls 4, 30, 4
  016a228  std 30, 136(1)
  016a22c  fdivs 6, 1, 6
  016a230  ori 30, 9, 0
  016a234  ori 31, 10, 0
  016a238  fdivs 26, 1, 3
  016a23c  lfs 3, 400(3)
  016a240  fadds 7, 7, 31
  016a244  fmuls 31, 29, 11
  016a248  fmuls 11, 0, 11
  016a24c  fadds 5, 5, 8
  016a250  fadds 4, 9, 4
  016a254  fmuls 12, 28, 1
  016a258  fmuls 13, 27, 1
  016a25c  fadds 2, 2, 10
  016a260  lwz 4, 12(4)
  016a264  cmpwi 4, 0
  016a268  fadds 5, 5, 31
  016a26c  fadds 4, 4, 11
  016a270  fadds 7, 7, 12
  016a274  fadds 2, 2, 13
  016a278  fadds 29, 5, 12
  016a27c  fadds 4, 4, 13
  016a280  fmuls 5, 7, 6
  016a284  fmuls 2, 2, 6
  016a288  fmuls 29, 29, 26
  016a28c  std 27, 112(1)
  016a290  fmuls 4, 4, 26
  016a294  bf 2, 0x16a2a0
  016a298  fmr 30, 1
  016a29c  b 0x16a2ac
  016a2a0  lis 5, 23
  016a2a4  addi 5, 5, -24336
  016a2a8  lfs 30, 4(5)
  016a2ac  fmuls 30, 3, 30
  016a2b0  cmpwi 4, 0
  016a2b4  fneg 31, 2
  016a2b8  lfs 2, 404(3)
  016a2bc  fmuls 30, 30, 5
  016a2c0  fmuls 31, 31, 2
  016a2c4  bt 2, 0x16a2d8
  016a2c8  lis 3, 23
  016a2cc  addi 3, 3, -24336
  016a2d0  lfs 1, 4(3)
  016a2d4  b 0x16a2d8
  016a2d8  lis 3, 23
  016a2dc  fmr 25, 2
  016a2e0  fmuls 28, 3, 1
  016a2e4  addi 27, 3, -24336
  016a2e8  fneg 27, 4
  016a2ec  lfs 26, 8(27)
  016a2f0  lfs 1, 12(27)
  016a2f4  fmuls 2, 30, 26
  016a2f8  fadds 1, 2, 1
  016a2fc  bl 0x502758
  016a300  nop
  016a304  fmuls 2, 31, 26
  016a308  stw 3, 0(30)
  016a30c  lfs 1, 16(27)
  016a310  fadds 1, 2, 1
  016a314  bl 0x502758
  016a318  nop
  016a31c  fmuls 1, 28, 29
  016a320  stw 3, 0(31)
  016a324  fsubs 1, 1, 30
  016a328  fmuls 1, 1, 26
  016a32c  bl 0x502758
  016a330  nop
  016a334  fmuls 1, 27, 25
  016a338  stw 3, 0(28)
  016a33c  fsubs 1, 1, 31
  016a340  fmuls 1, 1, 26
  016a344  bl 0x502758
  016a348  nop
  016a34c  stw 3, 0(29)
  016a350  ld 0, 224(1)
  016a354  mtlr 0
  016a358  lfd 25, 152(1)
  016a35c  lfd 26, 160(1)
  016a360  lfd 27, 168(1)
  016a364  lfd 28, 176(1)
  016a368  lfd 29, 184(1)
  016a36c  lfd 30, 192(1)
  016a370  lfd 31, 200(1)
  016a374  ld 27, 112(1)
  016a378  ld 28, 120(1)
  016a37c  ld 29, 128(1)
  016a380  ld 30, 136(1)
  016a384  ld 31, 144(1)
  016a388  addi 1, 1, 208
  016a38c  blr

ProjectBoxToScreen:   # 0x16a3a8, 0x1fc bytes
  016a3a8  stdu 1, -96(1)
  016a3ac  stfd 26, 48(1)
  016a3b0  stfd 27, 56(1)
  016a3b4  stfd 28, 64(1)
  016a3b8  stfd 29, 72(1)
  016a3bc  stfd 30, 80(1)
  016a3c0  stfd 31, 88(1)
  016a3c4  lis 12, 144
  016a3c8  li 11, 96
  016a3cc  addc 11, 1, 11
  016a3d0  std 3, 48(11)
  016a3d4  std 5, 64(11)
  016a3d8  std 4, 56(11)
  016a3dc  lis 3, 23
  016a3e0  std 6, 72(11)
  016a3e4  lwz 5, -23196(12)
  016a3e8  addi 4, 3, -23664
  016a3ec  lfs 2, 52(11)
  016a3f0  addic 3, 5, 224
  016a3f4  lfs 3, 68(11)
  016a3f8  lfs 1, 0(4)
  016a3fc  lfs 4, 12(3)
  016a400  lfs 5, 28(3)
  016a404  lfs 7, 44(3)
  016a408  lfs 8, 48(11)
  016a40c  fmuls 6, 5, 2
  016a410  lfs 9, 64(11)
  016a414  fmuls 5, 5, 3
  016a418  fmuls 12, 4, 8
  016a41c  lfs 10, 56(11)
  016a420  fmuls 4, 4, 9
  016a424  lfs 11, 72(11)
  016a428  fmuls 13, 7, 10
  016a42c  lfs 0, 60(3)
  016a430  fmuls 7, 7, 11
  016a434  fmuls 0, 0, 1
  016a438  fadds 6, 12, 6
  016a43c  fadds 4, 4, 5
  016a440  lfs 12, 0(3)
  016a444  lfs 31, 16(3)
  016a448  fadds 5, 6, 13
  016a44c  fadds 4, 4, 7
  016a450  lfs 7, 4(3)
  016a454  fmuls 6, 12, 8
  016a458  lfs 30, 20(3)
  016a45c  fmuls 13, 31, 2
  016a460  fmuls 8, 7, 8
  016a464  lfs 29, 32(3)
  016a468  fmuls 2, 30, 2
  016a46c  fmuls 7, 7, 9
  016a470  fadds 5, 5, 0
  016a474  fadds 4, 4, 0
  016a478  lfs 0, 36(3)
  016a47c  fadds 6, 6, 13
  016a480  fmuls 13, 29, 10
  016a484  lfs 28, 48(3)
  016a488  fadds 2, 8, 2
  016a48c  lfs 26, 52(3)
  016a490  fmuls 8, 12, 9
  016a494  lis 3, 150
  016a498  fmuls 12, 31, 3
  016a49c  fmuls 3, 30, 3
  016a4a0  fdivs 27, 1, 5
  016a4a4  addic 3, 3, -12416
  016a4a8  lfs 5, 400(3)
  016a4ac  fdivs 4, 1, 4
  016a4b0  fmuls 31, 29, 11
  016a4b4  fadds 8, 8, 12
  016a4b8  fmuls 10, 0, 10
  016a4bc  fmuls 11, 0, 11
  016a4c0  fadds 3, 7, 3
  016a4c4  fadds 6, 6, 13
  016a4c8  fmuls 9, 28, 1
  016a4cc  fmuls 13, 26, 1
  016a4d0  lwz 5, 12(5)
  016a4d4  cmpwi 5, 0
  016a4d8  fadds 7, 8, 31
  016a4dc  fadds 2, 2, 10
  016a4e0  fadds 3, 3, 11
  016a4e4  fadds 6, 6, 9
  016a4e8  fadds 7, 7, 9
  016a4ec  fadds 8, 2, 13
  016a4f0  fadds 9, 3, 13
  016a4f4  fmuls 2, 6, 27
  016a4f8  fmuls 3, 8, 27
  016a4fc  fmuls 7, 7, 4
  016a500  fmuls 6, 9, 4
  016a504  bf 2, 0x16a510
  016a508  fmr 4, 1
  016a50c  b 0x16a514
  016a510  lfs 4, 4(4)
  016a514  fmuls 4, 5, 4
  016a518  fneg 8, 3
  016a51c  cmpwi 5, 0
  016a520  lfs 3, 404(3)
  016a524  fmuls 4, 4, 2
  016a528  fmuls 2, 8, 3
  016a52c  bt 2, 0x16a538
  016a530  lfs 1, 4(4)
  016a534  b 0x16a538
  016a538  fmuls 1, 5, 1
  016a53c  fneg 5, 6
  016a540  lfs 6, 8(4)
  016a544  lfs 8, 12(4)
  016a548  fmuls 1, 1, 7
  016a54c  fmuls 3, 5, 3
  016a550  fmuls 5, 4, 6
  016a554  fmuls 7, 2, 6
  016a558  fsubs 1, 1, 4
  016a55c  fsubs 2, 3, 2
  016a560  fadds 3, 5, 8
  016a564  fmuls 1, 1, 6
  016a568  fmuls 2, 2, 6
  016a56c  stfs 3, 0(9)
  016a570  lfs 3, 16(4)
  016a574  fadds 3, 7, 3
  016a578  stfs 3, 0(10)
  016a57c  stfs 1, 0(7)
  016a580  stfs 2, 0(8)
  016a584  lfd 26, 48(1)
  016a588  lfd 27, 56(1)
  016a58c  lfd 28, 64(1)
  016a590  lfd 29, 72(1)
  016a594  lfd 30, 80(1)
  016a598  lfd 31, 88(1)
  016a59c  addi 1, 1, 96
  016a5a0  blr

Vendor_ParseMobySeqs:   # 0x16a5a4, 0xb4 bytes
  016a5a4  stdu 1, -144(1)
  016a5a8  mflr 0
  016a5ac  std 0, 160(1)
  016a5b0  std 29, 120(1)
  016a5b4  lis 3, 163
  016a5b8  lis 29, 230
  016a5bc  addic 3, 3, 21696
  016a5c0  std 28, 112(1)
  016a5c4  lis 4, 163
  016a5c8  addic 29, 29, -22960
  016a5cc  std 31, 136(1)
  016a5d0  addic 28, 4, 19456
  016a5d4  li 31, 0
  016a5d8  lbz 3, 12(3)
  016a5dc  std 30, 128(1)
  016a5e0  slwi 3, 3, 2
  016a5e4  lwz 30, 24(29)
  016a5e8  lwzx 28, 28, 3
  016a5ec  lwz 3, 0(30)
  016a5f0  cmpwi 3, 0
  016a5f4  bt 2, 0x16a624
  016a5f8  addic 4, 28, 72
  016a5fc  slwi 5, 31, 2
  016a600  addc 4, 4, 5
  016a604  lwz 5, 24(29)
  016a608  clrldi 6, 4, 32
  016a60c  addc 5, 5, 3
  016a610  ori 3, 28, 0
  016a614  ori 4, 31, 0
  016a618  stw 5, 0(6)
  016a61c  bl 0xdcb64
  016a620  nop
  016a624  addic 31, 31, 1
  016a628  addic 30, 30, 4
  016a62c  extsw 31, 31
  016a630  cmpwi 31, 16
  016a634  bt 0, 0x16a5ec
  016a638  ld 0, 160(1)
  016a63c  mtlr 0
  016a640  ld 28, 112(1)
  016a644  ld 29, 120(1)
  016a648  ld 30, 128(1)
  016a64c  ld 31, 136(1)
  016a650  addi 1, 1, 144
  016a654  blr

LoadVendorItems:   # 0x16a658, 0x28c bytes
  016a658  stdu 1, -80(1)
  016a65c  std 31, 72(1)
  016a660  std 30, 64(1)
  016a664  std 29, 56(1)
  016a668  std 28, 48(1)
  016a66c  li 9, 0
  016a670  ori 4, 9, 0
  016a674  cmpwi 9, 12
  016a678  bf 0, 0x16a69c
  016a67c  lis 5, 114
  016a680  addic 5, 5, -1236
  016a684  lbzx 5, 5, 9
  016a688  cmpwi 5, 255
  016a68c  bt 2, 0x16a69c
  016a690  addic 9, 9, 1
  016a694  extsw 9, 9
  016a698  b 0x16a674
  016a69c  lis 5, 230
  016a6a0  ori 8, 4, 0
  016a6a4  addic 5, 5, -22960
  016a6a8  cmpw 9, 8
  016a6ac  stw 4, 464(5)
  016a6b0  bf 1, 0x16a7dc
  016a6b4  lis 6, 114
  016a6b8  addic 6, 6, -1236
  016a6bc  lbzx 7, 6, 8
  016a6c0  cmpwi 7, 255
  016a6c4  bt 2, 0x16a7cc
  016a6c8  lbzx 6, 6, 8
  016a6cc  clrlwi 7, 6, 26
  016a6d0  rlwinm 6, 6, 0, 25, 25
  016a6d4  sldi 10, 7, 4
  016a6d8  sldi 11, 7, 2
  016a6dc  cmpwi 6, 0
  016a6e0  addc 6, 10, 11
  016a6e4  bt 2, 0x16a768
  016a6e8  sldi 10, 7, 3
  016a6ec  lis 11, 115
  016a6f0  addc 12, 10, 10
  016a6f4  addic 11, 11, 32056
  016a6f8  addc 10, 10, 12
  016a6fc  lhzx 10, 11, 10
  016a700  cmpwi 10, 0
  016a704  bt 2, 0x16a7cc
  016a708  lwz 12, 464(5)
  016a70c  li 10, 1
  016a710  slwi 30, 12, 4
  016a714  slwi 29, 12, 4
  016a718  extsw 30, 30
  016a71c  extsw 29, 29
  016a720  addc 30, 5, 30
  016a724  addc 29, 5, 29
  016a728  lis 11, 115
  016a72c  slwi 28, 12, 4
  016a730  slwi 31, 12, 4
  016a734  addic 11, 11, 21888
  016a738  stw 7, 208(30)
  016a73c  extsw 28, 28
  016a740  stb 10, 212(29)
  016a744  extsw 31, 31
  016a748  addic 12, 12, 1
  016a74c  addc 7, 5, 28
  016a750  addc 10, 5, 31
  016a754  lwzx 6, 11, 6
  016a758  stw 12, 464(5)
  016a75c  stb 4, 213(7)
  016a760  stw 6, 220(10)
  016a764  b 0x16a7cc
  016a768  clrlwi 10, 3, 24
  016a76c  cmpwi 10, 0
  016a770  bf 2, 0x16a7cc
  016a774  lwz 11, 464(5)
  016a778  lis 10, 115
  016a77c  slwi 31, 11, 4
  016a780  slwi 30, 11, 4
  016a784  extsw 31, 31
  016a788  extsw 30, 30
  016a78c  addc 31, 5, 31
  016a790  slwi 29, 11, 4
  016a794  slwi 12, 11, 4
  016a798  addc 30, 5, 30
  016a79c  addic 10, 10, 21888
  016a7a0  extsw 29, 29
  016a7a4  extsw 12, 12
  016a7a8  stw 7, 208(31)
  016a7ac  addic 11, 11, 1
  016a7b0  addc 7, 5, 29
  016a7b4  addc 12, 5, 12
  016a7b8  stb 4, 212(30)
  016a7bc  lwzx 6, 10, 6
  016a7c0  stw 11, 464(5)
  016a7c4  stb 4, 213(7)
  016a7c8  stw 6, 220(12)
  016a7cc  addic 8, 8, 1
  016a7d0  extsw 8, 8
  016a7d4  cmpw 8, 9
  016a7d8  bt 0, 0x16a6b4
  016a7dc  ori 6, 4, 0
  016a7e0  lis 3, 151
  016a7e4  addic 3, 3, -16064
  016a7e8  lbzx 3, 3, 6
  016a7ec  cmpwi 3, 0
  016a7f0  bt 2, 0x16a8bc
  016a7f4  sldi 3, 6, 3
  016a7f8  lis 7, 115
  016a7fc  addc 8, 3, 3
  016a800  addic 7, 7, 32056
  016a804  addc 3, 3, 8
  016a808  extsw 3, 3
  016a80c  lhzx 3, 7, 3
  016a810  cmpwi 3, 0
  016a814  bf 1, 0x16a8bc
  016a818  ori 3, 4, 0
  016a81c  lwz 7, 464(5)
  016a820  cmpw 3, 7
  016a824  bf 0, 0x16a848
  016a828  slwi 8, 3, 4
  016a82c  extsw 8, 8
  016a830  addc 8, 5, 8
  016a834  lwz 8, 208(8)
  016a838  cmpw 8, 6
  016a83c  bt 2, 0x16a848
  016a840  addic 3, 3, 1
  016a844  b 0x16a81c
  016a848  cmpw 3, 7
  016a84c  bt 0, 0x16a8bc
  016a850  lwz 9, 464(5)
  016a854  sldi 7, 6, 4
  016a858  slwi 11, 9, 4
  016a85c  sldi 10, 6, 2
  016a860  slwi 12, 9, 4
  016a864  extsw 11, 11
  016a868  addc 7, 7, 10
  016a86c  addc 11, 5, 11
  016a870  extsw 10, 12
  016a874  li 3, 1
  016a878  addc 10, 5, 10
  016a87c  slwi 12, 9, 4
  016a880  lis 8, 115
  016a884  slwi 31, 9, 4
  016a888  stw 6, 208(11)
  016a88c  extsw 11, 12
  016a890  addic 8, 8, 21888
  016a894  extsw 7, 7
  016a898  stb 3, 212(10)
  016a89c  extsw 12, 31
  016a8a0  addc 3, 5, 11
  016a8a4  addc 10, 5, 12
  016a8a8  addic 9, 9, 1
  016a8ac  lwzx 7, 8, 7
  016a8b0  stb 4, 213(3)
  016a8b4  stw 7, 220(10)
  016a8b8  stw 9, 464(5)
  016a8bc  addic 6, 6, 1
  016a8c0  extsw 6, 6
  016a8c4  cmpwi 6, 37
  016a8c8  bt 0, 0x16a7e0
  016a8cc  ld 28, 48(1)
  016a8d0  ld 29, 56(1)
  016a8d4  ld 30, 64(1)
  016a8d8  ld 31, 72(1)
  016a8dc  addi 1, 1, 80
  016a8e0  blr

Spawn_Moby11_Vendor:   # 0x16a8f0, 0x740 bytes
  016a8f0  stdu 1, -176(1)
  016a8f4  mflr 0
  016a8f8  std 0, 192(1)
  016a8fc  stfd 31, 168(1)
  016a900  std 30, 152(1)
  016a904  lis 4, 230
  016a908  ori 30, 3, 0
  016a90c  lbz 3, -21960(4)
  016a910  std 31, 160(1)
  016a914  std 29, 144(1)
  016a918  std 28, 136(1)
  016a91c  cmpwi 3, 0
  016a920  bf 2, 0x16a95c
  016a924  lis 4, 144
  016a928  li 3, 0
  016a92c  lwz 4, -23196(4)
  016a930  lwz 4, 12(4)
  016a934  cmpwi 4, 0
  016a938  bf 2, 0x16a940
  016a93c  li 3, 1
  016a940  lis 4, 230
  016a944  lis 5, 230
  016a948  lis 6, 230
  016a94c  li 7, 1
  016a950  stb 3, -22062(4)
  016a954  stb 3, -21952(5)
  016a958  stb 7, -21960(6)
  016a95c  lis 3, 144
  016a960  lis 4, 23
  016a964  lis 6, 230
  016a968  addi 8, 4, -22300
  016a96c  lis 31, 230
  016a970  lwz 7, -23196(3)
  016a974  li 29, 0
  016a978  addic 31, 31, -22960
  016a97c  li 5, 480
  016a980  ori 3, 31, 0
  016a984  lfs 1, 6776(7)
  016a988  ori 4, 29, 0
  016a98c  stfs 1, -22480(6)
  016a990  lfs 31, 0(8)
  016a994  stw 29, 6776(7)
  016a998  bl 0x5001fc
  016a99c  nop
  016a9a0  lis 3, 230
  016a9a4  li 5, 64
  016a9a8  addic 3, 3, -22128
  016a9ac  ori 4, 29, 0
  016a9b0  bl 0x5001fc
  016a9b4  nop
  016a9b8  cmpwi 30, 0
  016a9bc  bf 2, 0x16aa44
  016a9c0  li 3, 11
  016a9c4  bl 0xefa28
  016a9c8  nop
  016a9cc  lis 4, 149
  016a9d0  lis 5, 116
  016a9d4  addic 4, 4, 5056
  016a9d8  ori 30, 3, 0
  016a9dc  li 3, 64
  016a9e0  lis 6, 16457
  016a9e4  lfs 1, -30656(5)
  016a9e8  lfs 2, 320(4)
  016a9ec  sth 3, 50(30)
  016a9f0  addic 5, 5, -30656
  016a9f4  fadds 1, 2, 1
  016a9f8  ori 6, 6, 4059
  016a9fc  ori 3, 30, 0
  016aa00  stfs 1, 16(30)
  016aa04  lfs 1, 324(4)
  016aa08  stfs 1, 20(30)
  016aa0c  lfs 1, 328(4)
  016aa10  lfs 2, 8(5)
  016aa14  stfs 31, 76(30)
  016aa18  fsubs 1, 1, 2
  016aa1c  stfs 31, 68(30)
  016aa20  stfs 31, 64(30)
  016aa24  stw 6, 72(30)
  016aa28  stfs 1, 24(30)
  016aa2c  bl 0xf31a8
  016aa30  nop
  016aa34  li 3, 3
  016aa38  li 4, 1
  016aa3c  stb 3, 32(30)
  016aa40  stw 4, 64(31)
  016aa44  lis 3, 151
  016aa48  li 4, 0
  016aa4c  lwz 3, -25484(3)
  016aa50  addic 3, 3, -1
  016aa54  cmpwi 3, 0
  016aa58  bt 0, 0x16aa60
  016aa5c  ori 4, 3, 0
  016aa60  li 29, 0
  016aa64  li 5, -1
  016aa68  stw 4, 56(31)
  016aa6c  lis 7, 230
  016aa70  lis 4, 230
  016aa74  stw 29, 68(31)
  016aa78  lis 6, 230
  016aa7c  stw 29, 88(31)
  016aa80  lis 8, 230
  016aa84  stw 5, 80(31)
  016aa88  li 3, 29
  016aa8c  stw 5, 84(31)
  016aa90  stw 5, 72(31)
  016aa94  stb 29, -22204(7)
  016aa98  stb 29, -22196(4)
  016aa9c  stw 29, 92(31)
  016aaa0  stw 29, -22180(6)
  016aaa4  stfs 31, -22192(8)
  016aaa8  bl 0x60bc8c
  016aaac  nop
  016aab0  ori 3, 29, 0
  016aab4  bl 0x11ce20
  016aab8  nop
  016aabc  bl 0x505d20
  016aac0  nop
  016aac4  lwz 3, 64(31)
  016aac8  cntlzw 3, 3
  016aacc  srwi 3, 3, 5
  016aad0  xori 3, 3, 1
  016aad4  bl 0x16a658
  016aad8  lwz 4, 464(31)
  016aadc  srawi 3, 4, 1
  016aae0  cmpwi 4, 3
  016aae4  addze 3, 3
  016aae8  bf 0, 0x16aaf0
  016aaec  li 3, 1
  016aaf0  srawi 4, 4, 1
  016aaf4  addze 4, 4
  016aaf8  subc 3, 3, 4
  016aafc  sldi 5, 3, 5
  016ab00  sldi 3, 3, 3
  016ab04  stw 4, 88(31)
  016ab08  addc 3, 5, 3
  016ab0c  stw 3, 76(31)
  016ab10  bl 0xd5b38
  016ab14  nop
  016ab18  lis 5, 112
  016ab1c  lis 8, 151
  016ab20  li 3, 18
  016ab24  lis 9, 152
  016ab28  lis 6, 112
  016ab2c  lis 7, 112
  016ab30  li 4, 30030
  016ab34  addic 8, 8, -25440
  016ab38  ori 9, 9, 38527
  016ab3c  addic 5, 5, 22544
  016ab40  addic 6, 6, 22552
  016ab44  addic 7, 7, 22560
  016ab48  bl 0xc8444
  016ab4c  nop
  016ab50  lwz 4, 88(31)
  016ab54  stw 3, 84(31)
  016ab58  slwi 4, 4, 4
  016ab5c  extsw 3, 4
  016ab60  addc 4, 31, 3
  016ab64  lbz 5, 212(4)
  016ab68  cmpwi 5, 1
  016ab6c  bf 2, 0x16abe8
  016ab70  addic 5, 31, 208
  016ab74  lis 6, 0
  016ab78  lis 10, 151
  016ab7c  lis 9, 115
  016ab80  addic 10, 10, -16212
  016ab84  lwzx 3, 5, 3
  016ab88  ori 5, 6, 60000
  016ab8c  lwz 4, 208(4)
  016ab90  sldi 6, 3, 3
  016ab94  slwi 3, 3, 2
  016ab98  addc 11, 6, 6
  016ab9c  li 8, 48
  016aba0  addc 11, 6, 11
  016aba4  addic 9, 9, 32062
  016aba8  extsw 11, 11
  016abac  addc 10, 10, 3
  016abb0  lis 7, 112
  016abb4  ori 3, 8, 0
  016abb8  addc 4, 4, 5
  016abbc  addic 5, 7, 22536
  016abc0  lis 12, 112
  016abc4  lhzx 9, 9, 11
  016abc8  lis 7, 112
  016abcc  extsw 4, 4
  016abd0  addic 6, 12, 22216
  016abd4  addic 7, 7, 22664
  016abd8  clrldi 8, 10, 32
  016abdc  bl 0xc8444
  016abe0  nop
  016abe4  stw 3, 80(31)
  016abe8  lis 3, 161
  016abec  stw 30, 28(31)
  016abf0  lis 6, 161
  016abf4  addic 3, 3, 2264
  016abf8  li 29, 1
  016abfc  lis 7, 230
  016ac00  li 4, 0
  016ac04  lis 5, 16
  016ac08  lwz 8, 64(3)
  016ac0c  stw 29, 1820(6)
  016ac10  addc 6, 8, 5
  016ac14  stw 4, -22960(7)
  016ac18  stw 4, 8(31)
  016ac1c  li 3, 3
  016ac20  stw 8, 16(31)
  016ac24  ori 5, 30, 0
  016ac28  stw 6, 20(31)
  016ac2c  bl 0x15d12c
  016ac30  nop
  016ac34  lwz 3, 64(31)
  016ac38  cmpwi 3, 0
  016ac3c  bf 2, 0x16ac4c
  016ac40  li 3, 4
  016ac44  bl 0x6dad0
  016ac48  nop
  016ac4c  bl 0x7b458
  016ac50  nop
  016ac54  lis 4, 150
  016ac58  lis 5, 16256
  016ac5c  lis 6, 150
  016ac60  lis 7, 161
  016ac64  li 3, 100
  016ac68  stw 5, -12528(4)
  016ac6c  li 5, 5
  016ac70  stfs 31, -12524(6)
  016ac74  ori 4, 29, 0
  016ac78  stw 5, 1800(7)
  016ac7c  bl 0xb72b0
  016ac80  nop
  016ac84  lis 3, 151
  016ac88  addic 3, 3, -25376
  016ac8c  stb 29, 8364(3)
  016ac90  stb 29, 8357(3)
  016ac94  bl 0x7d5c0
  016ac98  nop
  016ac9c  lwz 3, 64(31)
  016aca0  cmpwi 3, 0
  016aca4  bt 2, 0x16acc0
  016aca8  li 4, 3
  016acac  li 5, 0
  016acb0  ori 3, 30, 0
  016acb4  bl 0xfdcf0
  016acb8  nop
  016acbc  b 0x16acd4
  016acc0  li 4, 2
  016acc4  li 5, 0
  016acc8  ori 3, 30, 0
  016accc  bl 0xfdcf0
  016acd0  nop
  016acd4  lis 3, 23
  016acd8  lis 4, 114
  016acdc  addi 3, 3, -22300
  016ace0  lfs 1, 4(3)
  016ace4  lfs 2, -3064(4)
  016ace8  lwz 3, 64(31)
  016acec  fmuls 1, 2, 1
  016acf0  cmpwi 3, 0
  016acf4  stfs 1, 88(30)
  016acf8  bf 2, 0x16ae2c
  016acfc  lis 3, 116
  016ad00  lwz 5, 28(31)
  016ad04  addic 4, 3, -30656
  016ad08  lfs 1, -30656(3)
  016ad0c  addic 3, 5, 192
  016ad10  lfs 2, 4(4)
  016ad14  lfs 3, 8(4)
  016ad18  addic 6, 5, 16
  016ad1c  lfs 4, 0(3)
  016ad20  lfs 5, 16(3)
  016ad24  lfs 6, 12(3)
  016ad28  lfs 7, 28(3)
  016ad2c  fmuls 4, 4, 1
  016ad30  fmuls 5, 5, 2
  016ad34  lfs 8, 32(3)
  016ad38  fmuls 6, 6, 1
  016ad3c  lfs 9, 44(3)
  016ad40  fmuls 7, 7, 2
  016ad44  lfs 10, 4(3)
  016ad48  fmuls 9, 9, 3
  016ad4c  lfs 11, 20(3)
  016ad50  fmuls 8, 8, 3
  016ad54  fmuls 10, 10, 1
  016ad58  fmuls 11, 11, 2
  016ad5c  lis 7, 23
  016ad60  addic 30, 31, 96
  016ad64  fadds 4, 4, 5
  016ad68  fadds 5, 6, 7
  016ad6c  lfs 6, 36(3)
  016ad70  lfs 7, 12(4)
  016ad74  lfs 12, 8(3)
  016ad78  lfs 13, 24(3)
  016ad7c  addic 4, 31, 12
  016ad80  fmuls 1, 12, 1
  016ad84  fmuls 2, 13, 2
  016ad88  fmuls 6, 6, 3
  016ad8c  fadds 4, 4, 8
  016ad90  lfs 8, 40(3)
  016ad94  fadds 10, 10, 11
  016ad98  fadds 5, 5, 9
  016ad9c  addic 3, 5, 16
  016ada0  fmuls 3, 8, 3
  016ada4  fadds 1, 1, 2
  016ada8  fadds 6, 10, 6
  016adac  fadds 5, 5, 7
  016adb0  fadds 1, 1, 3
  016adb4  stfs 5, 96(4)
  016adb8  lfs 2, 0(3)
  016adbc  fadds 2, 4, 2
  016adc0  addi 3, 7, -22300
  016adc4  stfs 2, 96(31)
  016adc8  lfs 2, 4(6)
  016adcc  fadds 2, 6, 2
  016add0  stfs 2, 100(31)
  016add4  lfs 2, 8(6)
  016add8  fadds 1, 1, 2
  016addc  stfs 1, 104(31)
  016ade0  lfs 1, 72(5)
  016ade4  lfs 2, 8(3)
  016ade8  bl 0x502578
  016adec  nop
  016adf0  addic 28, 31, 112
  016adf4  stfs 1, 120(31)
  016adf8  li 6, 0
  016adfc  ori 3, 30, 0
  016ae00  ori 7, 6, 0
  016ae04  ori 4, 28, 0
  016ae08  ori 5, 29, 0
  016ae0c  bl 0x47f74
  016ae10  nop
  016ae14  ori 3, 30, 0
  016ae18  bl 0x47b98
  016ae1c  nop
  016ae20  ori 3, 28, 0
  016ae24  bl 0x47c08
  016ae28  nop
  016ae2c  lis 3, 116
  016ae30  lwz 5, 28(31)
  016ae34  addic 4, 3, -30544
  016ae38  lis 8, 116
  016ae3c  lfs 1, -30544(3)
  016ae40  addic 3, 5, 192
  016ae44  lfs 2, 4(4)
  016ae48  lfs 3, 8(4)
  016ae4c  addic 9, 8, -30528
  016ae50  li 29, 16
  016ae54  lfs 4, 0(3)
  016ae58  lfs 5, 16(3)
  016ae5c  lfs 6, 4(3)
  016ae60  lfs 7, 20(3)
  016ae64  fmuls 4, 4, 1
  016ae68  fmuls 5, 5, 2
  016ae6c  lfs 8, 12(3)
  016ae70  lfs 9, 28(3)
  016ae74  fmuls 6, 6, 1
  016ae78  fmuls 7, 7, 2
  016ae7c  lfs 10, 32(3)
  016ae80  fmuls 8, 8, 1
  016ae84  lfs 11, 8(3)
  016ae88  fmuls 9, 9, 2
  016ae8c  lfs 12, 24(3)
  016ae90  fmuls 1, 11, 1
  016ae94  fmuls 2, 12, 2
  016ae98  fmuls 10, 10, 3
  016ae9c  lfs 11, 36(3)
  016aea0  lfs 12, 44(3)
  016aea4  lfs 13, 40(3)
  016aea8  fadds 4, 4, 5
  016aeac  lis 3, 162
  016aeb0  fmuls 5, 12, 3
  016aeb4  fadds 6, 6, 7
  016aeb8  fmuls 11, 11, 3
  016aebc  addic 30, 3, -9472
  016aec0  fadds 7, 8, 9
  016aec4  li 28, 0
  016aec8  fmuls 3, 13, 3
  016aecc  addic 3, 30, 912
  016aed0  fadds 1, 1, 2
  016aed4  lfs 8, 12(4)
  016aed8  addic 4, 30, 4
  016aedc  addic 6, 30, 8
  016aee0  addic 7, 30, 12
  016aee4  fadds 2, 4, 10
  016aee8  ori 5, 29, 0
  016aeec  fadds 4, 6, 11
  016aef0  fadds 5, 7, 5
  016aef4  fadds 1, 1, 3
  016aef8  stfs 2, 0(3)
  016aefc  addic 3, 30, 944
  016af00  fadds 2, 5, 8
  016af04  stfs 4, 912(4)
  016af08  ori 4, 28, 0
  016af0c  stfs 1, 912(6)
  016af10  stfs 2, 912(7)
  016af14  lfs 1, -30528(8)
  016af18  lfs 2, 4(9)
  016af1c  stfs 1, 896(30)
  016af20  lfs 1, 8(9)
  016af24  stfs 2, 900(30)
  016af28  lfs 2, 12(9)
  016af2c  stfs 1, 904(30)
  016af30  stfs 2, 908(30)
  016af34  bl 0x5d0140
  016af38  nop
  016af3c  ori 5, 29, 0
  016af40  addic 3, 30, 928
  016af44  ori 4, 28, 0
  016af48  bl 0x5d0140
  016af4c  nop
  016af50  ori 29, 28, 0
  016af54  lis 30, 230
  016af58  addic 30, 30, -22464
  016af5c  addc 3, 30, 29
  016af60  lbz 4, 1(3)
  016af64  cmpwi 4, 0
  016af68  bf 2, 0x16af84
  016af6c  addic 4, 28, 20
  016af70  clrldi 5, 3, 32
  016af74  extsw 4, 4
  016af78  lwz 3, 28(31)
  016af7c  bl 0xf0ea8
  016af80  nop
  016af84  addic 28, 28, 1
  016af88  addic 29, 29, 64
  016af8c  cmpwi 28, 4
  016af90  bt 0, 0x16af54
  016af94  lwz 31, 464(31)
  016af98  cmpwi 31, 7
  016af9c  bt 1, 0x16afe8
  016afa0  subfic 3, 31, 7
  016afa4  mulli 4, 3, 1665
  016afa8  extsw 4, 4
  016afac  mulli 3, 3, -1665
  016afb0  std 4, 112(1)
  016afb4  extsw 3, 3
  016afb8  lfd 1, 112(1)
  016afbc  std 3, 112(1)
  016afc0  fcfid 1, 1
  016afc4  frsp 1, 1
  016afc8  stfs 1, 52(30)
  016afcc  lfd 2, 112(1)
  016afd0  stfs 1, 180(30)
  016afd4  fcfid 2, 2
  016afd8  frsp 1, 2
  016afdc  stfs 1, 116(30)
  016afe0  stfs 1, 244(30)
  016afe4  b 0x16aff8
  016afe8  stfs 31, 52(30)
  016afec  stfs 31, 116(30)
  016aff0  stfs 31, 180(30)
  016aff4  stfs 31, 244(30)
  016aff8  lis 3, 230
  016affc  li 4, 0
  016b000  lis 5, 230
  016b004  stb 4, -22064(3)
  016b008  stb 4, -22063(5)
  016b00c  ld 0, 192(1)
  016b010  mtlr 0
  016b014  lfd 31, 168(1)
  016b018  ld 28, 136(1)
  016b01c  ld 29, 144(1)
  016b020  ld 30, 152(1)
  016b024  ld 31, 160(1)
  016b028  addi 1, 1, 176
  016b02c  blr

Vendor_EndWeaponCutscene:   # 0x16b038, 0x2ac bytes
  016b038  stdu 1, -192(1)
  016b03c  mflr 0
  016b040  std 0, 208(1)
  016b044  std 31, 184(1)
  016b048  lis 4, 144
  016b04c  lis 31, 230
  016b050  lis 5, 230
  016b054  std 29, 168(1)
  016b058  addic 31, 31, -22960
  016b05c  ori 29, 3, 0
  016b060  lwz 4, -23196(4)
  016b064  lfs 1, -22480(5)
  016b068  lwz 3, 84(31)
  016b06c  cmpwi 3, -1
  016b070  std 30, 176(1)
  016b074  std 28, 160(1)
  016b078  std 27, 152(1)
  016b07c  stfs 1, 6776(4)
  016b080  bt 2, 0x16b094
  016b084  li 4, 0
  016b088  extsw 3, 3
  016b08c  bl 0xc8b28
  016b090  nop
  016b094  lwz 3, 80(31)
  016b098  cmpwi 3, -1
  016b09c  bt 2, 0x16b0b0
  016b0a0  li 4, 0
  016b0a4  extsw 3, 3
  016b0a8  bl 0xc8b28
  016b0ac  nop
  016b0b0  li 3, -1
  016b0b4  stw 3, 84(31)
  016b0b8  stw 3, 80(31)
  016b0bc  bl 0xd5bf8
  016b0c0  nop
  016b0c4  lis 3, 161
  016b0c8  li 30, 1
  016b0cc  lis 5, 161
  016b0d0  li 28, 0
  016b0d4  ori 4, 30, 0
  016b0d8  stw 30, 1820(3)
  016b0dc  ori 3, 28, 0
  016b0e0  stw 28, 1800(5)
  016b0e4  bl 0xb72b0
  016b0e8  nop
  016b0ec  lis 3, 151
  016b0f0  addic 3, 3, -25376
  016b0f4  stb 28, 8357(3)
  016b0f8  bl 0x7d478
  016b0fc  nop
  016b100  lwz 3, 64(31)
  016b104  cmpwi 3, 0
  016b108  bf 2, 0x16b260
  016b10c  lis 3, 116
  016b110  lwz 5, 28(31)
  016b114  addic 4, 3, -30640
  016b118  addic 6, 5, 192
  016b11c  lfs 1, -30640(3)
  016b120  ori 27, 29, 0
  016b124  lfs 2, 4(4)
  016b128  lfs 3, 8(4)
  016b12c  lfs 4, 0(6)
  016b130  lfs 5, 16(6)
  016b134  fmuls 4, 4, 1
  016b138  lfs 6, 4(6)
  016b13c  fmuls 5, 5, 2
  016b140  lfs 7, 12(6)
  016b144  lfs 8, 20(6)
  016b148  fmuls 6, 6, 1
  016b14c  lfs 9, 28(6)
  016b150  fmuls 7, 7, 1
  016b154  fmuls 8, 8, 2
  016b158  lfs 10, 8(6)
  016b15c  fmuls 9, 9, 2
  016b160  lfs 11, 24(6)
  016b164  lfs 12, 32(6)
  016b168  fmuls 1, 10, 1
  016b16c  fmuls 2, 11, 2
  016b170  lfs 10, 36(6)
  016b174  fmuls 11, 12, 3
  016b178  addic 29, 1, 112
  016b17c  lfs 12, 44(6)
  016b180  fmuls 10, 10, 3
  016b184  fadds 4, 4, 5
  016b188  lfs 5, 40(6)
  016b18c  fmuls 12, 12, 3
  016b190  fmuls 3, 5, 3
  016b194  fadds 5, 6, 8
  016b198  addic 3, 5, 16
  016b19c  fadds 6, 7, 9
  016b1a0  fadds 1, 1, 2
  016b1a4  fadds 2, 4, 11
  016b1a8  lfs 4, 12(4)
  016b1ac  addic 4, 5, 16
  016b1b0  fadds 5, 5, 10
  016b1b4  fadds 6, 6, 12
  016b1b8  fadds 1, 1, 3
  016b1bc  stfs 2, 0(29)
  016b1c0  fadds 3, 6, 4
  016b1c4  stfs 5, 4(29)
  016b1c8  stfs 1, 8(29)
  016b1cc  stfs 3, 12(29)
  016b1d0  lfs 3, 0(3)
  016b1d4  fadds 2, 2, 3
  016b1d8  lis 3, 23
  016b1dc  addi 3, 3, -20432
  016b1e0  stfs 2, 112(1)
  016b1e4  lfs 2, 4(4)
  016b1e8  fadds 2, 5, 2
  016b1ec  stfs 2, 116(1)
  016b1f0  lfs 2, 8(4)
  016b1f4  stw 28, 128(1)
  016b1f8  fadds 1, 1, 2
  016b1fc  stw 28, 132(1)
  016b200  stfs 1, 120(1)
  016b204  lfs 1, 72(5)
  016b208  lfs 2, 0(3)
  016b20c  bl 0x502578
  016b210  nop
  016b214  cmpwi 27, 0
  016b218  stfs 1, 136(1)
  016b21c  bf 2, 0x16b248
  016b220  ori 3, 29, 0
  016b224  addic 4, 1, 128
  016b228  ori 5, 28, 0
  016b22c  ori 6, 28, 0
  016b230  bl 0xa0c38
  016b234  nop
  016b238  li 3, 2
  016b23c  bl 0x481d0
  016b240  nop
  016b244  b 0x16b260
  016b248  addic 4, 1, 128
  016b24c  ori 3, 29, 0
  016b250  ori 5, 28, 0
  016b254  ori 6, 30, 0
  016b258  bl 0xa0c38
  016b25c  nop
  016b260  lwz 4, 28(31)
  016b264  lis 3, 150
  016b268  stb 30, 32(4)
  016b26c  addic 30, 3, 14024
  016b270  lhz 3, 102(30)
  016b274  cmpwi 3, 6
  016b278  bt 2, 0x16b28c
  016b27c  cmpwi 3, 7
  016b280  bt 2, 0x16b28c
  016b284  li 3, 5
  016b288  sth 3, 102(30)
  016b28c  lwz 3, 64(31)
  016b290  cmpwi 3, 0
  016b294  bt 2, 0x16b2a4
  016b298  ori 3, 4, 0
  016b29c  bl 0xefb38
  016b2a0  nop
  016b2a4  li 3, 29
  016b2a8  bl 0x60bb90
  016b2ac  nop
  016b2b0  bl 0x11ce64
  016b2b4  nop
  016b2b8  bl 0x505d20
  016b2bc  nop
  016b2c0  ld 0, 208(1)
  016b2c4  mtlr 0
  016b2c8  ld 27, 152(1)
  016b2cc  ld 28, 160(1)
  016b2d0  ld 29, 168(1)
  016b2d4  ld 30, 176(1)
  016b2d8  ld 31, 184(1)
  016b2dc  addi 1, 1, 192
  016b2e0  blr

Vendor_StartWeaponCutscene:   # 0x16b2f8, 0x34c bytes
  016b2f8  stdu 1, -160(1)
  016b2fc  mflr 0
  016b300  std 0, 176(1)
  016b304  stfd 31, 152(1)
  016b308  std 31, 144(1)
  016b30c  std 30, 136(1)
  016b310  std 29, 128(1)
  016b314  std 28, 120(1)
  016b318  std 27, 112(1)
  016b31c  li 3, 2
  016b320  bl 0x481d0
  016b324  nop
  016b328  lis 31, 150
  016b32c  addic 31, 31, 14024
  016b330  lhz 3, 102(31)
  016b334  cmpwi 3, 6
  016b338  bt 2, 0x16b34c
  016b33c  cmpwi 3, 7
  016b340  bt 2, 0x16b34c
  016b344  li 3, 5
  016b348  sth 3, 102(31)
  016b34c  lis 3, 230
  016b350  lis 4, 161
  016b354  addic 28, 3, -22960
  016b358  li 29, 1
  016b35c  lis 5, 116
  016b360  addic 7, 5, -23840
  016b364  lwz 6, 28(28)
  016b368  stw 29, 1820(4)
  016b36c  addic 4, 6, 192
  016b370  li 30, 0
  016b374  stb 29, 32(6)
  016b378  lfs 1, -23840(5)
  016b37c  lfs 2, 4(7)
  016b380  lfs 3, 0(4)
  016b384  lfs 4, 8(7)
  016b388  lfs 5, 12(4)
  016b38c  fmuls 3, 3, 1
  016b390  lfs 6, 16(4)
  016b394  lfs 7, 28(4)
  016b398  fmuls 5, 5, 1
  016b39c  lfs 8, 44(4)
  016b3a0  fmuls 7, 7, 2
  016b3a4  lfs 9, 32(4)
  016b3a8  fmuls 8, 8, 4
  016b3ac  lfs 10, 4(4)
  016b3b0  fmuls 6, 6, 2
  016b3b4  lfs 11, 20(4)
  016b3b8  fmuls 9, 9, 4
  016b3bc  addic 5, 28, 12
  016b3c0  fmuls 10, 10, 1
  016b3c4  fmuls 11, 11, 2
  016b3c8  fadds 5, 5, 7
  016b3cc  fadds 3, 3, 6
  016b3d0  lfs 6, 36(4)
  016b3d4  lfs 7, 12(7)
  016b3d8  lfs 12, 8(4)
  016b3dc  li 7, 3
  016b3e0  lfs 13, 24(4)
  016b3e4  fmuls 6, 6, 4
  016b3e8  fmuls 1, 12, 1
  016b3ec  lfs 0, 40(4)
  016b3f0  fmuls 2, 13, 2
  016b3f4  addic 4, 6, 16
  016b3f8  fadds 10, 10, 11
  016b3fc  stw 7, -22960(3)
  016b400  fadds 5, 5, 8
  016b404  stw 30, 4(28)
  016b408  addic 6, 6, 16
  016b40c  fmuls 4, 0, 4
  016b410  fadds 3, 3, 9
  016b414  lis 3, 23
  016b418  addi 27, 3, -19740
  016b41c  addic 3, 28, 192
  016b420  fadds 1, 1, 2
  016b424  fadds 6, 10, 6
  016b428  fadds 5, 5, 7
  016b42c  fadds 1, 1, 4
  016b430  stfs 5, 192(5)
  016b434  lfs 2, 0(4)
  016b438  fadds 2, 3, 2
  016b43c  ori 4, 30, 0
  016b440  stfs 2, 192(28)
  016b444  lfs 2, 4(6)
  016b448  fadds 2, 6, 2
  016b44c  stfs 2, 196(28)
  016b450  lfs 2, 8(6)
  016b454  lfs 3, 0(27)
  016b458  fadds 1, 1, 2
  016b45c  fmr 2, 3
  016b460  fadds 1, 1, 2
  016b464  stfs 1, 200(28)
  016b468  lfs 1, 4(27)
  016b46c  bl 0xffb70
  016b470  nop
  016b474  stfs 1, 200(28)
  016b478  lfs 31, 8(27)
  016b47c  stw 30, 188(28)
  016b480  lwz 3, 28(28)
  016b484  stfs 31, 184(28)
  016b488  stfs 31, 180(28)
  016b48c  stfs 31, 176(28)
  016b490  lfs 1, 72(3)
  016b494  lfs 2, 12(27)
  016b498  bl 0x502578
  016b49c  nop
  016b4a0  addic 3, 28, 128
  016b4a4  stfs 1, 184(28)
  016b4a8  addic 4, 28, 176
  016b4ac  bl 0x500b64
  016b4b0  nop
  016b4b4  lis 3, 150
  016b4b8  li 5, 448
  016b4bc  addic 27, 3, -12976
  016b4c0  ori 4, 30, 0
  016b4c4  ori 3, 27, 0
  016b4c8  bl 0x5001fc
  016b4cc  nop
  016b4d0  lis 3, 162
  016b4d4  li 5, 64
  016b4d8  addic 3, 3, -16768
  016b4dc  ori 4, 30, 0
  016b4e0  bl 0x5001fc
  016b4e4  nop
  016b4e8  ori 3, 29, 0
  016b4ec  bl 0x174cf4
  016b4f0  nop
  016b4f4  bl 0x174bdc
  016b4f8  nop
  016b4fc  lis 3, 230
  016b500  lis 4, 4
  016b504  lis 5, 161
  016b508  lis 7, 8
  016b50c  addic 5, 5, 2264
  016b510  lwz 6, -21916(3)
  016b514  lis 8, 150
  016b518  lis 29, 151
  016b51c  subc 4, 6, 4
  016b520  lis 6, 116
  016b524  addic 29, 29, -25376
  016b528  addic 6, 6, -24000
  016b52c  stw 4, -21916(3)
  016b530  lwz 5, 64(5)
  016b534  lis 3, 150
  016b538  lwz 4, 72(28)
  016b53c  stw 5, 88(27)
  016b540  addc 5, 5, 7
  016b544  stfs 31, -12524(8)
  016b548  slwi 7, 4, 2
  016b54c  stfs 31, -12528(3)
  016b550  extsw 7, 7
  016b554  stw 5, 92(27)
  016b558  lwz 3, 4280(29)
  016b55c  cmpwi 3, 0
  016b560  lwzx 27, 6, 7
  016b564  extsw 27, 27
  016b568  bt 2, 0x16b584
  016b56c  cmpw 4, 3
  016b570  bt 2, 0x16b584
  016b574  ori 3, 30, 0
  016b578  ori 4, 30, 0
  016b57c  bl 0x86814
  016b580  nop
  016b584  lwz 28, 72(28)
  016b588  cmpwi 28, 24
  016b58c  stw 28, 8376(29)
  016b590  bf 2, 0x16b598
  016b594  stw 30, 8376(29)
  016b598  sldi 4, 28, 4
  016b59c  lis 3, 114
  016b5a0  subc 5, 28, 4
  016b5a4  addic 3, 3, 4112
  016b5a8  sldi 5, 5, 2
  016b5ac  subc 4, 4, 5
  016b5b0  extsw 5, 4
  016b5b4  li 4, -1
  016b5b8  lwzx 3, 3, 5
  016b5bc  extsw 3, 3
  016b5c0  bl 0xe0854
  016b5c4  nop
  016b5c8  ori 3, 27, 0
  016b5cc  bl 0xe0528
  016b5d0  nop
  016b5d4  li 4, 10036
  016b5d8  ori 3, 30, 0
  016b5dc  stw 4, 28(31)
  016b5e0  bl 0xe0654
  016b5e4  nop
  016b5e8  lhz 3, 102(31)
  016b5ec  cmpwi 3, 3
  016b5f0  bt 2, 0x16b614
  016b5f4  bl 0x15be68
  016b5f8  nop
  016b5fc  ori 3, 30, 0
  016b600  bl 0x503078
  016b604  nop
  016b608  lhz 3, 102(31)
  016b60c  cmpwi 3, 3
  016b610  bf 2, 0x16b5f4
  016b614  bl 0x11c830
  016b618  nop
  016b61c  ld 0, 176(1)
  016b620  mtlr 0
  016b624  lfd 31, 152(1)
  016b628  ld 27, 112(1)
  016b62c  ld 28, 120(1)
  016b630  ld 29, 128(1)
  016b634  ld 30, 136(1)
  016b638  ld 31, 144(1)
  016b63c  addi 1, 1, 160
  016b640  blr

StartGadgetPickupCutscene:   # 0x16b650, 0x3e0 bytes
  016b650  stdu 1, -176(1)
  016b654  mflr 0
  016b658  std 0, 192(1)
  016b65c  stfd 31, 168(1)
  016b660  std 28, 136(1)
  016b664  std 30, 152(1)
  016b668  lis 28, 144
  016b66c  std 31, 160(1)
  016b670  ori 30, 3, 0
  016b674  ori 31, 4, 0
  016b678  lwz 28, -23196(28)
  016b67c  lbz 3, 17(28)
  016b680  std 29, 144(1)
  016b684  std 27, 128(1)
  016b688  std 26, 120(1)
  016b68c  cmpwi 3, 129
  016b690  bf 2, 0x16b6c8
  016b694  lwz 3, 20(28)
  016b698  rlwinm 3, 3, 31, 31, 31
  016b69c  cmpwi 3, 0
  016b6a0  bf 2, 0x16b6c8
  016b6a4  lwz 4, 0(28)
  016b6a8  ori 3, 28, 0
  016b6ac  std 2, 40(1)
  016b6b0  lwz 4, 24(4)
  016b6b4  lwz 5, 0(4)
  016b6b8  lwz 2, 4(4)
  016b6bc  mtctr 5
  016b6c0  bcctrl 20, 30
  016b6c4  ld 2, 40(1)
  016b6c8  lwz 4, 0(28)
  016b6cc  std 2, 40(1)
  016b6d0  ori 27, 31, 0
  016b6d4  ori 3, 28, 0
  016b6d8  lwz 4, 24(4)
  016b6dc  lwz 5, 0(4)
  016b6e0  lwz 2, 4(4)
  016b6e4  mtctr 5
  016b6e8  bcctrl 20, 30
  016b6ec  lwz 4, 6796(28)
  016b6f0  li 3, 29
  016b6f4  ld 2, 40(1)
  016b6f8  addic 4, 4, 2
  016b6fc  stw 4, 6796(28)
  016b700  bl 0x60bc8c
  016b704  nop
  016b708  li 31, 0
  016b70c  ori 3, 31, 0
  016b710  bl 0x11ce20
  016b714  nop
  016b718  bl 0x505d20
  016b71c  nop
  016b720  lis 3, 161
  016b724  li 28, 1
  016b728  lis 29, 230
  016b72c  ori 4, 31, 0
  016b730  addic 26, 29, -22960
  016b734  stw 28, 1820(3)
  016b738  li 5, 480
  016b73c  ori 3, 26, 0
  016b740  bl 0x5001fc
  016b744  nop
  016b748  li 3, 3
  016b74c  lis 4, 161
  016b750  stw 31, 4(26)
  016b754  li 5, 5
  016b758  stw 30, 40(26)
  016b75c  stw 3, -22960(29)
  016b760  stw 5, 1800(4)
  016b764  bl 0xd5b38
  016b768  nop
  016b76c  bl 0x7b458
  016b770  nop
  016b774  li 3, 100
  016b778  ori 4, 28, 0
  016b77c  bl 0xb72b0
  016b780  nop
  016b784  lis 29, 151
  016b788  addic 29, 29, -25376
  016b78c  stb 28, 8364(29)
  016b790  stb 28, 8357(29)
  016b794  bl 0x7d5c0
  016b798  nop
  016b79c  lis 3, 116
  016b7a0  addic 4, 3, -23824
  016b7a4  lfs 1, -23824(3)
  016b7a8  lfs 2, 4(4)
  016b7ac  lfs 3, 192(30)
  016b7b0  lfs 4, 8(4)
  016b7b4  lfs 5, 204(30)
  016b7b8  fmuls 3, 3, 1
  016b7bc  lfs 6, 208(30)
  016b7c0  lfs 7, 220(30)
  016b7c4  fmuls 5, 5, 1
  016b7c8  lfs 8, 236(30)
  016b7cc  fmuls 7, 7, 2
  016b7d0  lfs 9, 224(30)
  016b7d4  fmuls 8, 8, 4
  016b7d8  lfs 10, 196(30)
  016b7dc  fmuls 6, 6, 2
  016b7e0  lfs 11, 212(30)
  016b7e4  fmuls 9, 9, 4
  016b7e8  lfs 12, 228(30)
  016b7ec  fmuls 10, 10, 1
  016b7f0  fmuls 11, 11, 2
  016b7f4  lis 5, 23
  016b7f8  addic 3, 26, 192
  016b7fc  fadds 5, 5, 7
  016b800  fmuls 7, 12, 4
  016b804  fadds 3, 3, 6
  016b808  lfs 6, 12(4)
  016b80c  lfs 12, 200(30)
  016b810  addic 4, 26, 12
  016b814  lfs 13, 216(30)
  016b818  fadds 10, 10, 11
  016b81c  fmuls 1, 12, 1
  016b820  lfs 0, 232(30)
  016b824  fmuls 2, 13, 2
  016b828  addi 28, 5, -18876
  016b82c  fmuls 4, 0, 4
  016b830  fadds 5, 5, 8
  016b834  fadds 3, 3, 9
  016b838  fadds 1, 1, 2
  016b83c  fadds 2, 10, 7
  016b840  fadds 5, 5, 6
  016b844  fadds 1, 1, 4
  016b848  stfs 5, 192(4)
  016b84c  lfs 5, 16(30)
  016b850  ori 4, 31, 0
  016b854  fadds 3, 3, 5
  016b858  stfs 3, 192(26)
  016b85c  lfs 3, 20(30)
  016b860  fadds 2, 2, 3
  016b864  stfs 2, 196(26)
  016b868  lfs 2, 24(30)
  016b86c  fadds 1, 1, 2
  016b870  stfs 1, 200(26)
  016b874  lfs 1, 0(28)
  016b878  bl 0xffb70
  016b87c  nop
  016b880  stfs 1, 200(26)
  016b884  lfs 31, 4(28)
  016b888  stw 31, 188(26)
  016b88c  stfs 31, 184(26)
  016b890  stfs 31, 180(26)
  016b894  stfs 31, 176(26)
  016b898  lfs 1, 72(30)
  016b89c  lfs 2, 8(28)
  016b8a0  bl 0x502578
  016b8a4  nop
  016b8a8  addic 3, 26, 128
  016b8ac  stfs 1, 184(26)
  016b8b0  addic 4, 26, 176
  016b8b4  bl 0x500b64
  016b8b8  nop
  016b8bc  lis 28, 150
  016b8c0  li 5, 448
  016b8c4  addic 28, 28, -12976
  016b8c8  ori 4, 31, 0
  016b8cc  ori 3, 28, 0
  016b8d0  bl 0x5001fc
  016b8d4  nop
  016b8d8  lis 3, 162
  016b8dc  ori 4, 31, 0
  016b8e0  addic 3, 3, -16768
  016b8e4  li 5, 64
  016b8e8  bl 0x5001fc
  016b8ec  nop
  016b8f0  bl 0x174bdc
  016b8f4  nop
  016b8f8  lis 3, 230
  016b8fc  lis 4, 161
  016b900  lis 6, 4
  016b904  addic 4, 4, 2264
  016b908  lis 5, 32
  016b90c  lwz 7, -21916(3)
  016b910  lis 9, 150
  016b914  lis 8, 116
  016b918  subc 6, 7, 6
  016b91c  lwz 4, 64(4)
  016b920  sldi 10, 27, 2
  016b924  lis 7, 16256
  016b928  stw 4, 88(28)
  016b92c  addc 4, 4, 5
  016b930  stw 6, -21916(3)
  016b934  lis 5, 150
  016b938  extsw 10, 10
  016b93c  addic 6, 8, -24000
  016b940  stw 7, -12528(9)
  016b944  stw 4, 92(28)
  016b948  ori 3, 31, 0
  016b94c  ori 4, 31, 0
  016b950  stfs 31, -12524(5)
  016b954  lwzx 5, 6, 10
  016b958  extsw 30, 5
  016b95c  bl 0x86814
  016b960  nop
  016b964  sldi 3, 27, 4
  016b968  stw 27, 8376(29)
  016b96c  lis 4, 114
  016b970  subc 5, 27, 3
  016b974  addic 6, 4, 4112
  016b978  sldi 4, 5, 2
  016b97c  subc 3, 3, 4
  016b980  li 4, -1
  016b984  extsw 3, 3
  016b988  lwzx 3, 6, 3
  016b98c  extsw 3, 3
  016b990  bl 0xe0854
  016b994  nop
  016b998  ori 3, 30, 0
  016b99c  bl 0xe0528
  016b9a0  nop
  016b9a4  lis 30, 150
  016b9a8  li 4, 10036
  016b9ac  addic 30, 30, 14024
  016b9b0  ori 3, 31, 0
  016b9b4  stw 4, 28(30)
  016b9b8  bl 0xe0654
  016b9bc  nop
  016b9c0  lhz 3, 102(30)
  016b9c4  cmpwi 3, 3
  016b9c8  bt 2, 0x16b9ec
  016b9cc  bl 0x15be68
  016b9d0  nop
  016b9d4  ori 3, 31, 0
  016b9d8  bl 0x503078
  016b9dc  nop
  016b9e0  lhz 3, 102(30)
  016b9e4  cmpwi 3, 3
  016b9e8  bf 2, 0x16b9cc
  016b9ec  lwz 3, 380(28)
  016b9f0  lwz 4, 8320(29)
  016b9f4  bl 0x8d7e8
  016b9f8  nop
  016b9fc  bl 0x11c830
  016ba00  nop
  016ba04  ld 0, 192(1)
  016ba08  mtlr 0
  016ba0c  lfd 31, 168(1)
  016ba10  ld 26, 120(1)
  016ba14  ld 27, 128(1)
  016ba18  ld 28, 136(1)
  016ba1c  ld 29, 144(1)
  016ba20  ld 30, 152(1)
  016ba24  ld 31, 160(1)
  016ba28  addi 1, 1, 176
  016ba2c  blr

Vendor_RestoreHero:   # 0x16ba38, 0x1e8 bytes
  016ba38  stdu 1, -176(1)
  016ba3c  mflr 0
  016ba40  std 0, 192(1)
  016ba44  std 31, 168(1)
  016ba48  lis 3, 161
  016ba4c  li 31, 1
  016ba50  std 30, 160(1)
  016ba54  lis 5, 161
  016ba58  li 30, 0
  016ba5c  lis 4, 23
  016ba60  std 29, 152(1)
  016ba64  stw 31, 1820(3)
  016ba68  addi 29, 4, -17872
  016ba6c  ori 3, 30, 0
  016ba70  stw 30, 1800(5)
  016ba74  std 28, 144(1)
  016ba78  ori 4, 31, 0
  016ba7c  bl 0xb72b0
  016ba80  nop
  016ba84  lis 3, 151
  016ba88  addic 3, 3, -25376
  016ba8c  stb 30, 8357(3)
  016ba90  bl 0x7d478
  016ba94  nop
  016ba98  lis 3, 230
  016ba9c  lis 4, 116
  016baa0  addic 3, 3, -22960
  016baa4  addic 5, 4, -23824
  016baa8  addic 28, 1, 112
  016baac  lwz 3, 40(3)
  016bab0  lfs 1, -23824(4)
  016bab4  addic 6, 3, 192
  016bab8  lfs 2, 4(5)
  016babc  addic 4, 3, 16
  016bac0  lfs 3, 0(6)
  016bac4  lfs 4, 16(6)
  016bac8  fmuls 3, 3, 1
  016bacc  lfs 5, 32(6)
  016bad0  fmuls 4, 4, 2
  016bad4  lfs 6, 8(5)
  016bad8  lfs 7, 4(6)
  016badc  lfs 8, 12(6)
  016bae0  lfs 9, 20(6)
  016bae4  fmuls 5, 5, 6
  016bae8  lfs 10, 28(6)
  016baec  fmuls 7, 7, 1
  016baf0  fmuls 9, 9, 2
  016baf4  lfs 11, 8(6)
  016baf8  fmuls 8, 8, 1
  016bafc  fmuls 10, 10, 2
  016bb00  fmuls 1, 11, 1
  016bb04  fadds 3, 3, 4
  016bb08  lfs 4, 24(6)
  016bb0c  lfs 11, 36(6)
  016bb10  fmuls 2, 4, 2
  016bb14  lfs 4, 44(6)
  016bb18  lfs 12, 40(6)
  016bb1c  fmuls 11, 11, 6
  016bb20  fmuls 4, 4, 6
  016bb24  fmuls 6, 12, 6
  016bb28  fadds 3, 3, 5
  016bb2c  fadds 5, 7, 9
  016bb30  fadds 7, 8, 10
  016bb34  fadds 1, 1, 2
  016bb38  lfs 2, 12(5)
  016bb3c  addic 5, 3, 16
  016bb40  fadds 5, 5, 11
  016bb44  fadds 4, 7, 4
  016bb48  stfs 3, 0(28)
  016bb4c  fadds 1, 1, 6
  016bb50  lfs 6, 0(4)
  016bb54  fadds 3, 3, 6
  016bb58  fadds 2, 4, 2
  016bb5c  stfs 5, 4(28)
  016bb60  stfs 1, 8(28)
  016bb64  stfs 2, 12(28)
  016bb68  stfs 3, 112(1)
  016bb6c  lfs 2, 4(5)
  016bb70  fadds 2, 5, 2
  016bb74  stfs 2, 116(1)
  016bb78  lfs 2, 8(5)
  016bb7c  stw 30, 128(1)
  016bb80  fadds 1, 1, 2
  016bb84  stw 30, 132(1)
  016bb88  stfs 1, 120(1)
  016bb8c  lfs 1, 72(3)
  016bb90  lfs 2, 0(29)
  016bb94  bl 0x502578
  016bb98  nop
  016bb9c  ori 3, 28, 0
  016bba0  addic 4, 1, 128
  016bba4  stfs 1, 136(1)
  016bba8  ori 5, 30, 0
  016bbac  ori 6, 31, 0
  016bbb0  bl 0xa0c38
  016bbb4  nop
  016bbb8  bl 0xd5bf8
  016bbbc  nop
  016bbc0  lis 3, 150
  016bbc4  addic 3, 3, 14024
  016bbc8  lhz 4, 102(3)
  016bbcc  cmpwi 4, 6
  016bbd0  bt 2, 0x16bbe4
  016bbd4  cmpwi 4, 7
  016bbd8  bt 2, 0x16bbe4
  016bbdc  li 4, 5
  016bbe0  sth 4, 102(3)
  016bbe4  li 3, 29
  016bbe8  bl 0x60bb90
  016bbec  nop
  016bbf0  bl 0x11ce64
  016bbf4  nop
  016bbf8  bl 0x505d20
  016bbfc  nop
  016bc00  ld 0, 192(1)
  016bc04  mtlr 0
  016bc08  ld 28, 144(1)
  016bc0c  ld 29, 152(1)
  016bc10  ld 30, 160(1)
  016bc14  ld 31, 168(1)
  016bc18  addi 1, 1, 176
  016bc1c  blr

Vendor_SetScrollText:   # 0x16bc20, 0x128 bytes
  016bc20  stdu 1, -128(1)
  016bc24  mflr 0
  016bc28  std 0, 144(1)
  016bc2c  std 31, 120(1)
  016bc30  lis 4, 346
  016bc34  ori 31, 3, 0
  016bc38  lbz 3, -15535(4)
  016bc3c  std 30, 112(1)
  016bc40  cmpwi 3, 0
  016bc44  bf 2, 0x16bc6c
  016bc48  lis 3, 230
  016bc4c  lis 4, 101
  016bc50  addic 3, 3, -22960
  016bc54  ori 5, 31, 0
  016bc58  addic 4, 4, 16212
  016bc5c  lwz 3, 44(3)
  016bc60  bl 0x5cd2a8
  016bc64  nop
  016bc68  b 0x16bd20
  016bc6c  lis 3, 230
  016bc70  lis 4, 8224
  016bc74  addic 30, 3, -22960
  016bc78  ori 4, 4, 8224
  016bc7c  li 5, 36
  016bc80  lwz 3, 44(30)
  016bc84  bl 0x5001fc
  016bc88  nop
  016bc8c  lwz 6, 44(30)
  016bc90  lbz 3, 0(31)
  016bc94  li 5, 0
  016bc98  addic 6, 6, 36
  016bc9c  cmpwi 3, 0
  016bca0  ori 4, 5, 0
  016bca4  bt 2, 0x16bd1c
  016bca8  lbzx 3, 31, 5
  016bcac  cmpwi 3, 98
  016bcb0  cmpwi 1, 3, 15
  016bcb4  bf 2, 0x16bcec
  016bcb8  li 3, 15
  016bcbc  addic 5, 5, 1
  016bcc0  addic 7, 6, 1
  016bcc4  extsw 5, 5
  016bcc8  stb 3, 0(6)
  016bccc  clrldi 3, 7, 32
  016bcd0  li 7, 8
  016bcd4  addic 8, 3, 1
  016bcd8  lbzx 9, 31, 5
  016bcdc  addic 6, 3, 2
  016bce0  stb 9, 0(3)
  016bce4  stb 7, 0(8)
  016bce8  b 0x16bd08
  016bcec  cmpwi 3, 8
  016bcf0  bt 0, 0x16bcf8
  016bcf4  bf 5, 0x16bd08
  016bcf8  lbzx 7, 31, 5
  016bcfc  addic 3, 6, 1
  016bd00  stb 7, 0(6)
  016bd04  clrldi 6, 3, 32
  016bd08  addic 5, 5, 1
  016bd0c  extsw 5, 5
  016bd10  lbzx 3, 31, 5
  016bd14  cmpwi 3, 0
  016bd18  bf 2, 0x16bca8
  016bd1c  stb 4, 0(6)
  016bd20  lis 3, 230
  016bd24  li 4, 0
  016bd28  addic 3, 3, -22960
  016bd2c  stw 4, 68(3)
  016bd30  ld 0, 144(1)
  016bd34  mtlr 0
  016bd38  ld 30, 112(1)
  016bd3c  ld 31, 120(1)
  016bd40  addi 1, 1, 128
  016bd44  blr

Vendor_UpdateDude:   # 0x16bd58, 0x788 bytes
  016bd58  stdu 1, -144(1)
  016bd5c  mflr 0
  016bd60  std 0, 160(1)
  016bd64  std 31, 136(1)
  016bd68  lis 4, 151
  016bd6c  ori 31, 3, 0
  016bd70  lbz 3, -16268(4)
  016bd74  std 30, 128(1)
  016bd78  cmpwi 3, 0
  016bd7c  bt 2, 0x16bdcc
  016bd80  lis 30, 230
  016bd84  addic 30, 30, -22128
  016bd88  lbz 3, 1(30)
  016bd8c  cmpwi 3, 0
  016bd90  bf 2, 0x16bda8
  016bd94  li 4, 0
  016bd98  ori 3, 31, 0
  016bd9c  ori 5, 30, 0
  016bda0  bl 0xf0ea8
  016bda4  nop
  016bda8  lis 3, 23
  016bdac  lis 4, 16407
  016bdb0  addi 3, 3, -17080
  016bdb4  ori 4, 4, 44564
  016bdb8  lfs 1, 0(3)
  016bdbc  stw 4, 32(30)
  016bdc0  stfs 1, 36(30)
  016bdc4  stfs 1, 40(30)
  016bdc8  b 0x16bdf0
  016bdcc  lis 3, 230
  016bdd0  addic 3, 3, -22128
  016bdd4  lbz 4, 1(3)
  016bdd8  cmpwi 4, 0
  016bddc  bt 2, 0x16bdf0
  016bde0  ori 4, 3, 0
  016bde4  ori 3, 31, 0
  016bde8  bl 0xf0f1c
  016bdec  nop
  016bdf0  lbz 3, 32(31)
  016bdf4  cmpwi 3, 4
  016bdf8  cmpwi 1, 3, 1
  016bdfc  cmpwi 6, 3, -1
  016be00  cmpwi 7, 3, 0
  016be04  bt 1, 0x16be2c
  016be08  bt 5, 0x16be18
  016be0c  bf 25, 0x16c4c8
  016be10  bf 29, 0x16be58
  016be14  b 0x16bf40
  016be18  cmpwi 3, 2
  016be1c  bf 1, 0x16bf44
  016be20  cmpwi 3, 3
  016be24  bf 1, 0x16bfe4
  016be28  b 0x16c048
  016be2c  cmpwi 3, 12
  016be30  bt 2, 0x16c384
  016be34  cmpwi 3, 11
  016be38  bt 2, 0x16c428
  016be3c  cmpwi 3, 10
  016be40  bt 2, 0x16c2d0
  016be44  cmpwi 3, 6
  016be48  bt 2, 0x16c1f8
  016be4c  cmpwi 3, 5
  016be50  bt 2, 0x16c120
  016be54  b 0x16c4c8
  016be58  lis 3, 23
  016be5c  lis 4, 114
  016be60  addi 3, 3, -17080
  016be64  lis 30, 230
  016be68  addic 30, 30, -22960
  016be6c  lfs 1, 4(3)
  016be70  lfs 2, -3056(4)
  016be74  fmuls 1, 2, 1
  016be78  lwz 3, 52(30)
  016be7c  fctiwz 1, 1
  016be80  stfd 1, 112(1)
  016be84  lwz 4, 116(1)
  016be88  cmpw 3, 4
  016be8c  bf 1, 0x16bf34
  016be90  li 3, 2
  016be94  bl 0xfc620
  016be98  nop
  016be9c  sldi 4, 3, 4
  016bea0  lwz 5, 56(30)
  016bea4  lis 6, 150
  016bea8  addc 4, 3, 4
  016beac  stw 3, 60(30)
  016beb0  lis 7, 230
  016beb4  addc 4, 3, 4
  016beb8  addic 6, 6, 14024
  016bebc  addc 3, 4, 5
  016bec0  li 4, 1
  016bec4  lis 5, 230
  016bec8  addic 3, 3, 10006
  016becc  li 8, 0
  016bed0  stb 4, -22060(7)
  016bed4  stw 3, 28(6)
  016bed8  stb 8, -22059(5)
  016bedc  lbz 3, 83(31)
  016bee0  cmpwi 3, 2
  016bee4  bt 2, 0x16bf24
  016bee8  lis 3, 23
  016beec  lis 4, 114
  016bef0  addi 3, 3, -17080
  016bef4  li 5, 0
  016bef8  lfs 1, 8(3)
  016befc  lfs 2, -3056(4)
  016bf00  li 4, 2
  016bf04  fmuls 1, 2, 1
  016bf08  ori 3, 31, 0
  016bf0c  fctiwz 1, 1
  016bf10  stfd 1, 112(1)
  016bf14  lwz 6, 116(1)
  016bf18  extsw 6, 6
  016bf1c  bl 0xfddc0
  016bf20  nop
  016bf24  li 3, 12
  016bf28  li 4, 0
  016bf2c  stb 3, 32(31)
  016bf30  stw 4, 52(30)
  016bf34  lwz 3, 52(30)
  016bf38  addic 3, 3, 1
  016bf3c  stw 3, 52(30)
  016bf40  b 0x16c4c8
  016bf44  lis 3, 23
  016bf48  lis 4, 114
  016bf4c  addi 3, 3, -17080
  016bf50  lis 30, 230
  016bf54  addic 30, 30, -22960
  016bf58  lfs 1, 4(3)
  016bf5c  lfs 2, -3056(4)
  016bf60  fmuls 1, 2, 1
  016bf64  lwz 3, 52(30)
  016bf68  fctiwz 1, 1
  016bf6c  stfd 1, 112(1)
  016bf70  lwz 4, 116(1)
  016bf74  cmpw 3, 4
  016bf78  bf 1, 0x16bfd4
  016bf7c  lbz 3, 83(31)
  016bf80  cmpwi 3, 3
  016bf84  bt 2, 0x16bfc4
  016bf88  lis 3, 23
  016bf8c  lis 4, 114
  016bf90  addi 3, 3, -17080
  016bf94  li 5, 0
  016bf98  lfs 1, 8(3)
  016bf9c  lfs 2, -3056(4)
  016bfa0  li 4, 3
  016bfa4  fmuls 1, 2, 1
  016bfa8  ori 3, 31, 0
  016bfac  fctiwz 1, 1
  016bfb0  stfd 1, 112(1)
  016bfb4  lwz 6, 116(1)
  016bfb8  extsw 6, 6
  016bfbc  bl 0xfddc0
  016bfc0  nop
  016bfc4  li 3, 3
  016bfc8  li 4, 0
  016bfcc  stb 3, 32(31)
  016bfd0  stw 4, 52(30)
  016bfd4  lwz 3, 52(30)
  016bfd8  addic 3, 3, 1
  016bfdc  stw 3, 52(30)
  016bfe0  b 0x16c4c8
  016bfe4  lbz 3, 112(31)
  016bfe8  rlwinm 3, 3, 0, 30, 30
  016bfec  cmpwi 3, 0
  016bff0  bt 2, 0x16c4c8
  016bff4  lbz 3, 83(31)
  016bff8  cmpwi 3, 0
  016bffc  bt 2, 0x16c03c
  016c000  lis 3, 23
  016c004  lis 4, 114
  016c008  addi 3, 3, -17080
  016c00c  lfs 1, 8(3)
  016c010  lfs 2, -3056(4)
  016c014  ori 3, 31, 0
  016c018  li 4, 0
  016c01c  fmuls 1, 2, 1
  016c020  ori 5, 4, 0
  016c024  fctiwz 1, 1
  016c028  stfd 1, 112(1)
  016c02c  lwz 6, 116(1)
  016c030  extsw 6, 6
  016c034  bl 0xfddc0
  016c038  nop
  016c03c  li 3, 0
  016c040  stb 3, 32(31)
  016c044  b 0x16c4c8
  016c048  lis 30, 230
  016c04c  lis 3, 116
  016c050  addic 30, 30, -22960
  016c054  addic 3, 3, -23808
  016c058  lwz 4, 60(30)
  016c05c  slwi 4, 4, 2
  016c060  extsw 4, 4
  016c064  lwzx 3, 3, 4
  016c068  extsw 3, 3
  016c06c  std 3, 112(1)
  016c070  ori 3, 31, 0
  016c074  lfd 1, 112(1)
  016c078  fcfid 1, 1
  016c07c  frsp 1, 1
  016c080  bl 0x113e88
  016c084  nop
  016c088  cmpwi 3, 0
  016c08c  bt 2, 0x16c0b4
  016c090  lis 3, 230
  016c094  lbz 3, -22059(3)
  016c098  cmpwi 3, 0
  016c09c  bt 2, 0x16c0b4
  016c0a0  lis 3, 230
  016c0a4  li 4, 0
  016c0a8  stb 4, -22059(3)
  016c0ac  bl 0x11c830
  016c0b0  nop
  016c0b4  lbz 3, 112(31)
  016c0b8  rlwinm 3, 3, 0, 30, 30
  016c0bc  cmpwi 3, 0
  016c0c0  bt 2, 0x16c4c8
  016c0c4  lbz 3, 83(31)
  016c0c8  cmpwi 3, 2
  016c0cc  bt 2, 0x16c10c
  016c0d0  lis 3, 23
  016c0d4  lis 4, 114
  016c0d8  addi 3, 3, -17080
  016c0dc  li 5, 0
  016c0e0  lfs 1, 8(3)
  016c0e4  lfs 2, -3056(4)
  016c0e8  li 4, 2
  016c0ec  fmuls 1, 2, 1
  016c0f0  ori 3, 31, 0
  016c0f4  fctiwz 1, 1
  016c0f8  stfd 1, 112(1)
  016c0fc  lwz 6, 116(1)
  016c100  extsw 6, 6
  016c104  bl 0xfddc0
  016c108  nop
  016c10c  li 3, 2
  016c110  li 4, 0
  016c114  stb 3, 32(31)
  016c118  stw 4, 52(30)
  016c11c  b 0x16c4c8
  016c120  lis 30, 230
  016c124  lis 3, 116
  016c128  addic 30, 30, -22960
  016c12c  addic 3, 3, -23800
  016c130  lwz 4, 60(30)
  016c134  slwi 4, 4, 2
  016c138  extsw 4, 4
  016c13c  lwzx 3, 3, 4
  016c140  extsw 3, 3
  016c144  std 3, 112(1)
  016c148  ori 3, 31, 0
  016c14c  lfd 1, 112(1)
  016c150  fcfid 1, 1
  016c154  frsp 1, 1
  016c158  bl 0x113e88
  016c15c  nop
  016c160  cmpwi 3, 0
  016c164  bt 2, 0x16c18c
  016c168  lis 3, 230
  016c16c  lbz 3, -22059(3)
  016c170  cmpwi 3, 0
  016c174  bt 2, 0x16c18c
  016c178  lis 3, 230
  016c17c  li 4, 0
  016c180  stb 4, -22059(3)
  016c184  bl 0x11c830
  016c188  nop
  016c18c  lbz 3, 112(31)
  016c190  rlwinm 3, 3, 0, 30, 30
  016c194  cmpwi 3, 0
  016c198  bt 2, 0x16c4c8
  016c19c  lbz 3, 83(31)
  016c1a0  cmpwi 3, 2
  016c1a4  bt 2, 0x16c1e4
  016c1a8  lis 3, 23
  016c1ac  lis 4, 114
  016c1b0  addi 3, 3, -17080
  016c1b4  li 5, 0
  016c1b8  lfs 1, 8(3)
  016c1bc  lfs 2, -3056(4)
  016c1c0  li 4, 2
  016c1c4  fmuls 1, 2, 1
  016c1c8  ori 3, 31, 0
  016c1cc  fctiwz 1, 1
  016c1d0  stfd 1, 112(1)
  016c1d4  lwz 6, 116(1)
  016c1d8  extsw 6, 6
  016c1dc  bl 0xfddc0
  016c1e0  nop
  016c1e4  li 3, 2
  016c1e8  li 4, 0
  016c1ec  stb 3, 32(31)
  016c1f0  stw 4, 52(30)
  016c1f4  b 0x16c4c8
  016c1f8  lis 30, 230
  016c1fc  lis 3, 116
  016c200  addic 30, 30, -22960
  016c204  addic 3, 3, -23792
  016c208  lwz 4, 60(30)
  016c20c  slwi 4, 4, 2
  016c210  extsw 4, 4
  016c214  lwzx 3, 3, 4
  016c218  extsw 3, 3
  016c21c  std 3, 112(1)
  016c220  ori 3, 31, 0
  016c224  lfd 1, 112(1)
  016c228  fcfid 1, 1
  016c22c  frsp 1, 1
  016c230  bl 0x113e88
  016c234  nop
  016c238  cmpwi 3, 0
  016c23c  bt 2, 0x16c264
  016c240  lis 3, 230
  016c244  lbz 3, -22059(3)
  016c248  cmpwi 3, 0
  016c24c  bt 2, 0x16c264
  016c250  lis 3, 230
  016c254  li 4, 0
  016c258  stb 4, -22059(3)
  016c25c  bl 0x11c830
  016c260  nop
  016c264  lbz 3, 112(31)
  016c268  rlwinm 3, 3, 0, 30, 30
  016c26c  cmpwi 3, 0
  016c270  bt 2, 0x16c4c8
  016c274  lbz 3, 83(31)
  016c278  cmpwi 3, 2
  016c27c  bt 2, 0x16c2bc
  016c280  lis 3, 23
  016c284  lis 4, 114
  016c288  addi 3, 3, -17080
  016c28c  li 5, 0
  016c290  lfs 1, 8(3)
  016c294  lfs 2, -3056(4)
  016c298  li 4, 2
  016c29c  fmuls 1, 2, 1
  016c2a0  ori 3, 31, 0
  016c2a4  fctiwz 1, 1
  016c2a8  stfd 1, 112(1)
  016c2ac  lwz 6, 116(1)
  016c2b0  extsw 6, 6
  016c2b4  bl 0xfddc0
  016c2b8  nop
  016c2bc  li 3, 2
  016c2c0  li 4, 0
  016c2c4  stb 3, 32(31)
  016c2c8  stw 4, 52(30)
  016c2cc  b 0x16c4c8
  016c2d0  lis 3, 150
  016c2d4  addic 3, 3, 14024
  016c2d8  lhz 3, 102(3)
  016c2dc  cmpwi 3, 3
  016c2e0  bf 2, 0x16c308
  016c2e4  lis 3, 230
  016c2e8  lbz 4, -22060(3)
  016c2ec  cmpwi 4, 0
  016c2f0  bt 2, 0x16c308
  016c2f4  li 4, 0
  016c2f8  lis 5, 230
  016c2fc  li 6, 1
  016c300  stb 4, -22060(3)
  016c304  stb 6, -22059(5)
  016c308  lbz 3, 112(31)
  016c30c  rlwinm 3, 3, 0, 30, 30
  016c310  cmpwi 3, 0
  016c314  bt 2, 0x16c4c8
  016c318  lis 3, 230
  016c31c  lbz 4, 83(31)
  016c320  addic 3, 3, -22960
  016c324  lwz 3, 60(3)
  016c328  addc 5, 3, 3
  016c32c  addc 3, 3, 5
  016c330  addic 3, 3, 4
  016c334  cmpw 4, 3
  016c338  bt 2, 0x16c378
  016c33c  lis 4, 23
  016c340  lis 5, 114
  016c344  addi 4, 4, -17080
  016c348  lfs 1, 12(4)
  016c34c  lfs 2, -3056(5)
  016c350  extsw 4, 3
  016c354  fmuls 1, 2, 1
  016c358  li 5, 0
  016c35c  ori 3, 31, 0
  016c360  fctiwz 1, 1
  016c364  stfd 1, 112(1)
  016c368  lwz 6, 116(1)
  016c36c  extsw 6, 6
  016c370  bl 0xfddc0
  016c374  nop
  016c378  li 3, 4
  016c37c  stb 3, 32(31)
  016c380  b 0x16c4c8
  016c384  lis 3, 150
  016c388  addic 3, 3, 14024
  016c38c  lhz 3, 102(3)
  016c390  cmpwi 3, 3
  016c394  bf 2, 0x16c4c8
  016c398  lis 3, 230
  016c39c  lbz 4, -22060(3)
  016c3a0  cmpwi 4, 0
  016c3a4  bt 2, 0x16c4c8
  016c3a8  lis 4, 230
  016c3ac  li 5, 0
  016c3b0  addic 4, 4, -22960
  016c3b4  lis 6, 230
  016c3b8  li 7, 1
  016c3bc  lwz 4, 60(4)
  016c3c0  stb 5, -22060(3)
  016c3c4  addc 3, 4, 4
  016c3c8  stb 7, -22059(6)
  016c3cc  addc 3, 4, 3
  016c3d0  lbz 5, 83(31)
  016c3d4  addic 3, 3, 5
  016c3d8  cmpw 5, 3
  016c3dc  bt 2, 0x16c41c
  016c3e0  lis 4, 23
  016c3e4  lis 5, 114
  016c3e8  addi 4, 4, -17080
  016c3ec  lfs 1, 8(4)
  016c3f0  lfs 2, -3056(5)
  016c3f4  extsw 4, 3
  016c3f8  li 5, 0
  016c3fc  fmuls 1, 2, 1
  016c400  ori 3, 31, 0
  016c404  fctiwz 1, 1
  016c408  stfd 1, 112(1)
  016c40c  lwz 6, 116(1)
  016c410  extsw 6, 6
  016c414  bl 0xfddc0
  016c418  nop
  016c41c  li 3, 5
  016c420  stb 3, 32(31)
  016c424  b 0x16c4c8
  016c428  lis 3, 150
  016c42c  addic 3, 3, 14024
  016c430  lhz 3, 102(3)
  016c434  cmpwi 3, 3
  016c438  bf 2, 0x16c4c8
  016c43c  lis 3, 230
  016c440  lbz 4, -22060(3)
  016c444  cmpwi 4, 0
  016c448  bt 2, 0x16c4c8
  016c44c  lis 4, 230
  016c450  li 5, 0
  016c454  addic 4, 4, -22960
  016c458  lis 6, 230
  016c45c  li 7, 1
  016c460  lwz 4, 60(4)
  016c464  stb 5, -22060(3)
  016c468  addc 3, 4, 4
  016c46c  stb 7, -22059(6)
  016c470  addc 3, 4, 3
  016c474  lbz 4, 83(31)
  016c478  addic 3, 3, 6
  016c47c  cmpw 4, 3
  016c480  bt 2, 0x16c4c0
  016c484  lis 4, 23
  016c488  lis 5, 114
  016c48c  addi 4, 4, -17080
  016c490  lfs 1, 8(4)
  016c494  lfs 2, -3056(5)
  016c498  extsw 4, 3
  016c49c  fmuls 1, 2, 1
  016c4a0  li 5, 0
  016c4a4  ori 3, 31, 0
  016c4a8  fctiwz 1, 1
  016c4ac  stfd 1, 112(1)
  016c4b0  lwz 6, 116(1)
  016c4b4  extsw 6, 6
  016c4b8  bl 0xfddc0
  016c4bc  nop
  016c4c0  li 3, 6
  016c4c4  stb 3, 32(31)
  016c4c8  ld 0, 160(1)
  016c4cc  mtlr 0
  016c4d0  ld 30, 128(1)
  016c4d4  ld 31, 136(1)
  016c4d8  addi 1, 1, 144
  016c4dc  blr

Vendor_PlayDudeSpeech:   # 0x16c4e8, 0x1d0 bytes
  016c4e8  stdu 1, -144(1)
  016c4ec  mflr 0
  016c4f0  std 0, 160(1)
  016c4f4  lis 4, 230
  016c4f8  lbz 4, -22064(4)
  016c4fc  std 31, 136(1)
  016c500  std 30, 128(1)
  016c504  cmpwi 4, 0
  016c508  bt 2, 0x16c6a0
  016c50c  lis 30, 230
  016c510  cmpwi 3, 0
  016c514  addic 30, 30, -22960
  016c518  cmpwi 1, 3, 3
  016c51c  cmpwi 6, 3, 1
  016c520  cmpwi 7, 3, -1
  016c524  lwz 31, 36(30)
  016c528  bt 1, 0x16c534
  016c52c  bf 29, 0x16c6a0
  016c530  b 0x16c540
  016c534  bf 25, 0x16c608
  016c538  bf 5, 0x16c684
  016c53c  b 0x16c6a0
  016c540  lbz 3, 32(31)
  016c544  cmpwi 3, 2
  016c548  bt 2, 0x16c554
  016c54c  cmpwi 3, 0
  016c550  bf 2, 0x16c6a0
  016c554  li 3, 4
  016c558  bl 0xfc620
  016c55c  nop
  016c560  cmpwi 3, 0
  016c564  bf 2, 0x16c6a0
  016c568  lis 3, 23
  016c56c  lis 4, 114
  016c570  addi 3, 3, -15136
  016c574  lis 5, 346
  016c578  lfs 1, 0(3)
  016c57c  lfs 2, -3056(4)
  016c580  lwz 3, -15568(5)
  016c584  fmuls 1, 2, 1
  016c588  lwz 4, 48(30)
  016c58c  fctiwz 1, 1
  016c590  stfd 1, 112(1)
  016c594  lwz 5, 116(1)
  016c598  addc 4, 4, 5
  016c59c  cmpw 3, 4
  016c5a0  bf 1, 0x16c6a0
  016c5a4  lis 4, 346
  016c5a8  li 3, 2
  016c5ac  lwz 4, -15568(4)
  016c5b0  stw 4, 48(30)
  016c5b4  bl 0xfc620
  016c5b8  nop
  016c5bc  sldi 4, 3, 4
  016c5c0  lwz 5, 56(30)
  016c5c4  lis 7, 230
  016c5c8  addc 4, 3, 4
  016c5cc  stw 3, 60(30)
  016c5d0  lis 6, 150
  016c5d4  addc 4, 3, 4
  016c5d8  addic 6, 6, 14024
  016c5dc  addc 3, 4, 5
  016c5e0  li 4, 1
  016c5e4  lis 5, 230
  016c5e8  addic 3, 3, 10012
  016c5ec  li 8, 0
  016c5f0  stb 4, -22060(7)
  016c5f4  li 4, 11
  016c5f8  stw 3, 28(6)
  016c5fc  stb 8, -22059(5)
  016c600  stb 4, 32(31)
  016c604  b 0x16c6a0
  016c608  li 3, 2
  016c60c  bl 0xfc620
  016c610  nop
  016c614  sldi 4, 3, 4
  016c618  lwz 5, 56(30)
  016c61c  lis 6, 150
  016c620  addc 4, 3, 4
  016c624  stw 3, 60(30)
  016c628  lis 7, 230
  016c62c  addc 4, 3, 4
  016c630  addic 6, 6, 14024
  016c634  addc 3, 4, 5
  016c638  li 4, 1
  016c63c  lis 5, 230
  016c640  addic 3, 3, 10000
  016c644  li 8, 0
  016c648  stb 4, -22060(7)
  016c64c  stw 3, 28(6)
  016c650  stb 8, -22059(5)
  016c654  lbz 3, 83(31)
  016c658  cmpwi 3, 1
  016c65c  bt 2, 0x16c678
  016c660  li 4, 1
  016c664  li 5, 0
  016c668  li 6, 10
  016c66c  ori 3, 31, 0
  016c670  bl 0xfddc0
  016c674  nop
  016c678  li 3, 10
  016c67c  stb 3, 32(31)
  016c680  b 0x16c6a0
  016c684  lbz 3, 32(31)
  016c688  cmpwi 3, 2
  016c68c  bt 2, 0x16c698
  016c690  cmpwi 3, 0
  016c694  bf 2, 0x16c6a0
  016c698  li 3, 0
  016c69c  stw 3, 52(30)
  016c6a0  ld 0, 160(1)
  016c6a4  mtlr 0
  016c6a8  ld 30, 128(1)
  016c6ac  ld 31, 136(1)
  016c6b0  addi 1, 1, 144
  016c6b4  blr

Vendor_SpawnPreviewMoby:   # 0x16c6b8, 0x590 bytes
  016c6b8  stdu 1, -160(1)
  016c6bc  mflr 0
  016c6c0  std 0, 176(1)
  016c6c4  std 27, 120(1)
  016c6c8  lis 3, 144
  016c6cc  std 30, 144(1)
  016c6d0  li 27, 0
  016c6d4  ori 30, 27, 0
  016c6d8  lwz 3, -23196(3)
  016c6dc  lwz 3, 12(3)
  016c6e0  std 31, 152(1)
  016c6e4  std 29, 136(1)
  016c6e8  std 28, 128(1)
  016c6ec  std 26, 112(1)
  016c6f0  cmpwi 3, 0
  016c6f4  bf 2, 0x16c6fc
  016c6f8  li 27, 1
  016c6fc  lis 28, 144
  016c700  lwz 28, -23196(28)
  016c704  lbz 3, 17(28)
  016c708  cmpwi 3, 129
  016c70c  bf 2, 0x16c744
  016c710  lwz 3, 20(28)
  016c714  rlwinm 3, 3, 31, 31, 31
  016c718  cmpwi 3, 0
  016c71c  bf 2, 0x16c744
  016c720  lwz 4, 0(28)
  016c724  ori 3, 28, 0
  016c728  std 2, 40(1)
  016c72c  lwz 4, 24(4)
  016c730  lwz 5, 0(4)
  016c734  lwz 2, 4(4)
  016c738  mtctr 5
  016c73c  bcctrl 20, 30
  016c740  ld 2, 40(1)
  016c744  lwz 4, 0(28)
  016c748  std 2, 40(1)
  016c74c  ori 3, 28, 0
  016c750  lwz 4, 24(4)
  016c754  lwz 5, 0(4)
  016c758  lwz 2, 4(4)
  016c75c  mtctr 5
  016c760  bcctrl 20, 30
  016c764  lwz 3, 6796(28)
  016c768  lis 29, 230
  016c76c  ld 2, 40(1)
  016c770  addic 3, 3, 2
  016c774  addic 29, 29, -22960
  016c778  lis 4, 114
  016c77c  addic 31, 29, 208
  016c780  stw 3, 6796(28)
  016c784  addic 4, 4, 4112
  016c788  lwz 3, 88(29)
  016c78c  slwi 5, 3, 4
  016c790  slwi 3, 3, 4
  016c794  extsw 5, 5
  016c798  extsw 3, 3
  016c79c  addc 5, 29, 5
  016c7a0  addc 7, 29, 3
  016c7a4  lwz 5, 208(5)
  016c7a8  sldi 6, 5, 4
  016c7ac  subc 5, 5, 6
  016c7b0  sldi 5, 5, 2
  016c7b4  subc 5, 6, 5
  016c7b8  lwz 6, 208(7)
  016c7bc  extsw 5, 5
  016c7c0  cmpwi 6, 24
  016c7c4  lwzx 28, 4, 5
  016c7c8  extsw 28, 28
  016c7cc  bf 2, 0x16c7d8
  016c7d0  li 28, 479
  016c7d4  b 0x16c808
  016c7d8  lwzx 3, 31, 3
  016c7dc  ori 5, 4, 0
  016c7e0  sldi 4, 3, 4
  016c7e4  subc 3, 3, 4
  016c7e8  sldi 3, 3, 2
  016c7ec  subc 3, 4, 3
  016c7f0  li 4, -1
  016c7f4  extsw 3, 3
  016c7f8  lwzx 3, 5, 3
  016c7fc  extsw 3, 3
  016c800  bl 0xe0854
  016c804  nop
  016c808  lwz 3, 32(29)
  016c80c  ori 26, 27, 0
  016c810  ori 4, 28, 0
  016c814  addic 3, 3, 256
  016c818  bl 0xef810
  016c81c  nop
  016c820  lwz 3, 32(29)
  016c824  li 27, 64
  016c828  lis 5, 116
  016c82c  lis 4, 116
  016c830  cmpwi 26, 0
  016c834  addic 4, 4, -29920
  016c838  sth 27, 306(3)
  016c83c  stw 30, 404(3)
  016c840  lwz 3, 88(29)
  016c844  addic 7, 4, 32
  016c848  lfs 5, -30608(5)
  016c84c  slwi 3, 3, 4
  016c850  extsw 3, 3
  016c854  lwzx 6, 31, 3
  016c858  sldi 6, 6, 4
  016c85c  addc 8, 6, 6
  016c860  addc 6, 6, 8
  016c864  addic 8, 5, -30608
  016c868  addc 5, 7, 6
  016c86c  clrldi 7, 5, 32
  016c870  addc 5, 29, 3
  016c874  lfs 4, 4(8)
  016c878  lfs 3, 8(8)
  016c87c  lfs 1, 0(7)
  016c880  lfs 2, 4(7)
  016c884  fadds 5, 5, 1
  016c888  lfs 1, 8(7)
  016c88c  fadds 4, 4, 2
  016c890  lfs 2, 12(8)
  016c894  fadds 3, 3, 1
  016c898  lwz 7, 208(5)
  016c89c  bt 2, 0x16c8cc
  016c8a0  lis 8, 116
  016c8a4  slwi 7, 7, 4
  016c8a8  addic 8, 8, -30512
  016c8ac  addc 7, 8, 7
  016c8b0  clrldi 7, 7, 32
  016c8b4  lfs 1, 0(7)
  016c8b8  lfs 6, 4(7)
  016c8bc  fadds 5, 5, 1
  016c8c0  lfs 1, 8(7)
  016c8c4  fadds 4, 4, 6
  016c8c8  fadds 3, 3, 1
  016c8cc  lbz 5, 212(5)
  016c8d0  cmpwi 5, 0
  016c8d4  bf 2, 0x16c900
  016c8d8  lis 5, 151
  016c8dc  extsw 6, 6
  016c8e0  addic 5, 5, -16064
  016c8e4  addc 6, 4, 6
  016c8e8  lbz 5, 35(5)
  016c8ec  lfs 1, 44(6)
  016c8f0  cmpwi 5, 0
  016c8f4  fadds 3, 3, 1
  016c8f8  bt 2, 0x16c900
  016c8fc  fadds 3, 3, 1
  016c900  lwz 5, 28(29)
  016c904  lwz 7, 32(29)
  016c908  addic 6, 5, 192
  016c90c  addic 8, 7, 272
  016c910  addic 9, 5, 16
  016c914  lfs 1, 0(6)
  016c918  lfs 6, 16(6)
  016c91c  fmuls 1, 1, 5
  016c920  fmuls 6, 6, 4
  016c924  lfs 7, 32(6)
  016c928  lfs 8, 4(6)
  016c92c  lfs 9, 20(6)
  016c930  lfs 10, 12(6)
  016c934  fmuls 8, 8, 5
  016c938  lfs 11, 28(6)
  016c93c  fmuls 9, 9, 4
  016c940  fmuls 10, 10, 5
  016c944  lfs 12, 8(6)
  016c948  fmuls 7, 7, 3
  016c94c  fmuls 5, 12, 5
  016c950  addic 10, 5, 16
  016c954  fadds 1, 1, 6
  016c958  fmuls 6, 11, 4
  016c95c  lfs 11, 24(6)
  016c960  lfs 12, 36(6)
  016c964  fmuls 4, 11, 4
  016c968  lfs 11, 44(6)
  016c96c  fadds 8, 8, 9
  016c970  fmuls 12, 12, 3
  016c974  fmuls 9, 11, 3
  016c978  lfs 11, 40(6)
  016c97c  addic 6, 7, 272
  016c980  fadds 1, 1, 7
  016c984  fadds 6, 10, 6
  016c988  fmuls 3, 11, 3
  016c98c  fadds 4, 5, 4
  016c990  fadds 5, 8, 12
  016c994  fadds 6, 6, 9
  016c998  stfs 1, 0(6)
  016c99c  fadds 1, 4, 3
  016c9a0  stfs 5, 4(8)
  016c9a4  fadds 2, 6, 2
  016c9a8  stfs 1, 8(8)
  016c9ac  stfs 2, 12(8)
  016c9b0  lfs 1, 0(6)
  016c9b4  lfs 2, 0(9)
  016c9b8  fadds 1, 1, 2
  016c9bc  stfs 1, 0(6)
  016c9c0  lfs 1, 4(8)
  016c9c4  lfs 2, 4(10)
  016c9c8  fadds 1, 1, 2
  016c9cc  lfs 2, 8(8)
  016c9d0  lfs 3, 12(8)
  016c9d4  stfs 1, 4(8)
  016c9d8  lfs 1, 8(10)
  016c9dc  stfs 3, 12(8)
  016c9e0  fadds 1, 2, 1
  016c9e4  stfs 1, 8(8)
  016c9e8  lwzx 6, 31, 3
  016c9ec  sldi 6, 6, 4
  016c9f0  addc 8, 6, 6
  016c9f4  addc 6, 6, 8
  016c9f8  extsw 6, 6
  016c9fc  addc 6, 4, 6
  016ca00  lfs 1, 16(6)
  016ca04  stfs 1, 320(7)
  016ca08  lwzx 6, 31, 3
  016ca0c  sldi 6, 6, 4
  016ca10  addc 8, 6, 6
  016ca14  addc 6, 6, 8
  016ca18  extsw 6, 6
  016ca1c  addc 6, 4, 6
  016ca20  lfs 1, 20(6)
  016ca24  stfs 1, 324(7)
  016ca28  lwzx 3, 31, 3
  016ca2c  lfs 1, 72(5)
  016ca30  sldi 3, 3, 4
  016ca34  addc 6, 3, 3
  016ca38  addc 3, 3, 6
  016ca3c  extsw 3, 3
  016ca40  addc 3, 4, 3
  016ca44  addic 4, 7, 256
  016ca48  lfs 2, 24(3)
  016ca4c  ori 3, 4, 0
  016ca50  fadds 1, 2, 1
  016ca54  stfs 1, 328(7)
  016ca58  bl 0xf31a8
  016ca5c  nop
  016ca60  lwz 3, 32(29)
  016ca64  ori 4, 30, 0
  016ca68  ori 5, 30, 0
  016ca6c  addic 3, 3, 256
  016ca70  bl 0xfdcf0
  016ca74  nop
  016ca78  lwz 3, 32(29)
  016ca7c  lwz 4, 292(3)
  016ca80  lbz 4, 12(4)
  016ca84  cmpwi 4, 1
  016ca88  bf 1, 0x16caa0
  016ca8c  li 4, 1
  016ca90  ori 5, 30, 0
  016ca94  addic 3, 3, 256
  016ca98  bl 0xfdcf0
  016ca9c  nop
  016caa0  lwz 4, 32(29)
  016caa4  addic 3, 4, 256
  016caa8  stw 30, 344(4)
  016caac  stb 30, 337(4)
  016cab0  bl 0xef74c
  016cab4  nop
  016cab8  lis 26, 32
  016cabc  lwz 3, 32(29)
  016cac0  li 5, 14
  016cac4  ori 26, 26, 8224
  016cac8  addic 3, 3, 256
  016cacc  ori 4, 26, 0
  016cad0  ori 7, 30, 0
  016cad4  ori 6, 5, 0
  016cad8  bl 0xf1ea0
  016cadc  nop
  016cae0  lwz 3, 88(29)
  016cae4  lis 4, 116
  016cae8  slwi 3, 3, 4
  016caec  addic 4, 4, -28096
  016caf0  extsw 3, 3
  016caf4  lwzx 5, 31, 3
  016caf8  slwi 5, 5, 6
  016cafc  extsw 5, 5
  016cb00  lwzx 5, 4, 5
  016cb04  cmpwi 5, 0
  016cb08  bt 2, 0x16cb68
  016cb0c  lwz 5, 32(29)
  016cb10  lwzx 3, 31, 3
  016cb14  addic 5, 5, 512
  016cb18  slwi 3, 3, 6
  016cb1c  extsw 6, 3
  016cb20  ori 3, 5, 0
  016cb24  lwzx 4, 4, 6
  016cb28  extsw 4, 4
  016cb2c  bl 0xef810
  016cb30  nop
  016cb34  lwz 4, 32(29)
  016cb38  addic 3, 4, 512
  016cb3c  sth 27, 562(4)
  016cb40  bl 0xf31a8
  016cb44  nop
  016cb48  li 5, 14
  016cb4c  lwz 3, 32(29)
  016cb50  ori 4, 26, 0
  016cb54  ori 7, 30, 0
  016cb58  addic 3, 3, 512
  016cb5c  ori 6, 5, 0
  016cb60  bl 0xf1ea0
  016cb64  nop
  016cb68  lwz 3, 32(29)
  016cb6c  ori 4, 28, 0
  016cb70  addic 3, 3, 768
  016cb74  bl 0xef810
  016cb78  nop
  016cb7c  lwz 4, 32(29)
  016cb80  addic 3, 4, 768
  016cb84  sth 27, 818(4)
  016cb88  stw 30, 916(4)
  016cb8c  bl 0xf31a8
  016cb90  nop
  016cb94  lwz 3, 32(29)
  016cb98  ori 4, 30, 0
  016cb9c  addic 3, 3, 768
  016cba0  ori 5, 30, 0
  016cba4  bl 0xfdcf0
  016cba8  nop
  016cbac  lwz 3, 32(29)
  016cbb0  lwz 4, 804(3)
  016cbb4  lbz 4, 12(4)
  016cbb8  cmpwi 4, 1
  016cbbc  bf 1, 0x16cbd4
  016cbc0  li 4, 1
  016cbc4  ori 5, 30, 0
  016cbc8  addic 3, 3, 768
  016cbcc  bl 0xfdcf0
  016cbd0  nop
  016cbd4  lwz 4, 32(29)
  016cbd8  addic 3, 4, 768
  016cbdc  stw 30, 856(4)
  016cbe0  stb 30, 849(4)
  016cbe4  bl 0xef74c
  016cbe8  nop
  016cbec  lwz 8, 32(29)
  016cbf0  li 5, 14
  016cbf4  addic 3, 8, 768
  016cbf8  ori 4, 26, 0
  016cbfc  ori 7, 30, 0
  016cc00  lhz 6, 820(8)
  016cc04  ori 9, 6, 256
  016cc08  ori 6, 5, 0
  016cc0c  sth 9, 820(8)
  016cc10  bl 0xf1ea0
  016cc14  nop
  016cc18  lis 3, 230
  016cc1c  stb 30, -22061(3)
  016cc20  ld 0, 176(1)
  016cc24  mtlr 0
  016cc28  ld 26, 112(1)
  016cc2c  ld 27, 120(1)
  016cc30  ld 28, 128(1)
  016cc34  ld 29, 136(1)
  016cc38  ld 30, 144(1)
  016cc3c  ld 31, 152(1)
  016cc40  addi 1, 1, 160
  016cc44  blr

PurchaseHandler:   # 0x16cc50, 0xde8 bytes
  016cc50  stdu 1, -160(1)
  016cc54  mflr 0
  016cc58  std 0, 176(1)
  016cc5c  stfd 31, 152(1)
  016cc60  std 29, 128(1)
  016cc64  lis 29, 230
  016cc68  addic 29, 29, -22960
  016cc6c  lwz 3, 92(29)
  016cc70  cmpwi 3, 0
  016cc74  cmpwi 1, 3, 4
  016cc78  cmpwi 6, 3, 3
  016cc7c  std 31, 144(1)
  016cc80  std 30, 136(1)
  016cc84  std 28, 120(1)
  016cc88  std 27, 112(1)
  016cc8c  cmpwi 7, 3, 2
  016cc90  bt 2, 0x16da10
  016cc94  cmpwi 3, 1
  016cc98  bf 2, 0x16cf74
  016cc9c  lis 3, 230
  016cca0  li 31, 0
  016cca4  lwz 7, 32(29)
  016cca8  lis 5, 230
  016ccac  li 6, 1
  016ccb0  li 4, 1137
  016ccb4  stb 31, -21951(3)
  016ccb8  addic 3, 7, 1024
  016ccbc  stw 6, -22180(5)
  016ccc0  bl 0xef810
  016ccc4  nop
  016ccc8  lwz 4, 32(29)
  016cccc  li 3, 64
  016ccd0  lis 5, 23
  016ccd4  lwz 6, 28(29)
  016ccd8  addi 5, 5, -13240
  016ccdc  addic 7, 6, 16
  016cce0  sth 3, 1074(4)
  016cce4  addic 8, 4, 1040
  016cce8  addic 3, 6, 16
  016ccec  lfs 31, 0(5)
  016ccf0  addic 9, 6, 64
  016ccf4  lfs 1, 0(3)
  016ccf8  addic 3, 4, 1040
  016ccfc  fadds 1, 31, 1
  016cd00  addic 10, 4, 1088
  016cd04  addic 6, 6, 64
  016cd08  addic 11, 4, 1088
  016cd0c  ori 5, 31, 0
  016cd10  stfs 1, 0(3)
  016cd14  lfs 1, 4(7)
  016cd18  fadds 1, 31, 1
  016cd1c  addic 3, 4, 1024
  016cd20  ori 4, 31, 0
  016cd24  stfs 1, 4(8)
  016cd28  lfs 1, 8(7)
  016cd2c  stw 31, 12(8)
  016cd30  fadds 1, 31, 1
  016cd34  stfs 1, 8(8)
  016cd38  lfs 1, 0(9)
  016cd3c  stfs 1, 0(10)
  016cd40  lfs 1, 4(6)
  016cd44  stfs 1, 4(11)
  016cd48  lfs 1, 8(6)
  016cd4c  stfs 1, 8(11)
  016cd50  lfs 1, 12(6)
  016cd54  stfs 1, 12(11)
  016cd58  bl 0xfdcf0
  016cd5c  nop
  016cd60  lwz 3, 32(29)
  016cd64  lwz 4, 1060(3)
  016cd68  lwz 4, 72(4)
  016cd6c  lbz 4, 16(4)
  016cd70  cmpwi 4, 1
  016cd74  bt 1, 0x16cd90
  016cd78  ori 4, 3, 0
  016cd7c  addic 3, 4, 1024
  016cd80  stfs 31, 1112(4)
  016cd84  stb 31, 1105(4)
  016cd88  bl 0xef74c
  016cd8c  nop
  016cd90  lwz 3, 32(29)
  016cd94  addic 3, 3, 1024
  016cd98  bl 0xf31a8
  016cd9c  nop
  016cda0  lis 4, 16
  016cda4  lwz 3, 32(29)
  016cda8  li 5, 14
  016cdac  ori 4, 4, 4112
  016cdb0  addic 3, 3, 1024
  016cdb4  ori 7, 31, 0
  016cdb8  ori 6, 5, 0
  016cdbc  bl 0xf1ea0
  016cdc0  nop
  016cdc4  lwz 3, 88(29)
  016cdc8  lis 4, 230
  016cdcc  slwi 3, 3, 4
  016cdd0  addic 5, 29, 212
  016cdd4  extsw 3, 3
  016cdd8  stb 31, -21950(4)
  016cddc  addc 4, 29, 3
  016cde0  lbz 6, 212(4)
  016cde4  cmpwi 6, 1
  016cde8  bf 2, 0x16ce4c
  016cdec  addic 6, 29, 208
  016cdf0  lis 8, 115
  016cdf4  lis 7, 151
  016cdf8  addic 8, 8, 32048
  016cdfc  addic 7, 7, -16212
  016ce00  lwzx 6, 6, 3
  016ce04  lwz 9, 208(4)
  016ce08  sldi 6, 6, 3
  016ce0c  slwi 9, 9, 2
  016ce10  addc 10, 6, 6
  016ce14  extsw 9, 9
  016ce18  addc 6, 6, 10
  016ce1c  extsw 6, 6
  016ce20  addc 6, 8, 6
  016ce24  lwzx 7, 7, 9
  016ce28  lhz 6, 14(6)
  016ce2c  cmpw 7, 6
  016ce30  bt 0, 0x16ce4c
  016ce34  li 3, 2
  016ce38  ori 4, 31, 0
  016ce3c  lwz 5, 28(29)
  016ce40  bl 0x15d12c
  016ce44  nop
  016ce48  b 0x16cf68
  016ce4c  lbzx 3, 5, 3
  016ce50  cmpwi 3, 1
  016ce54  bf 2, 0x16cee8
  016ce58  lwz 3, 64(29)
  016ce5c  cmpwi 3, 0
  016ce60  bt 2, 0x16ce8c
  016ce64  lwz 4, 208(4)
  016ce68  lis 3, 115
  016ce6c  sldi 4, 4, 3
  016ce70  addic 3, 3, 32048
  016ce74  addc 5, 4, 4
  016ce78  addc 4, 4, 5
  016ce7c  extsw 4, 4
  016ce80  addc 3, 3, 4
  016ce84  lhz 4, 10(3)
  016ce88  b 0x16ceb0
  016ce8c  lwz 4, 208(4)
  016ce90  lis 3, 115
  016ce94  sldi 4, 4, 3
  016ce98  addic 3, 3, 32048
  016ce9c  addc 5, 4, 4
  016cea0  addc 4, 4, 5
  016cea4  extsw 4, 4
  016cea8  addc 3, 3, 4
  016ceac  lhz 4, 8(3)
  016ceb0  lis 3, 151
  016ceb4  lwz 3, -25440(3)
  016ceb8  cmpw 3, 4
  016cebc  bf 0, 0x16ced8
  016cec0  li 3, 2
  016cec4  lwz 5, 28(29)
  016cec8  ori 4, 31, 0
  016cecc  bl 0x15d12c
  016ced0  nop
  016ced4  b 0x16cf68
  016ced8  lis 3, 230
  016cedc  li 4, 1
  016cee0  stb 4, -21950(3)
  016cee4  b 0x16cf68
  016cee8  lis 3, 151
  016ceec  addic 3, 3, -16064
  016cef0  lbz 3, 35(3)
  016cef4  cmpwi 3, 0
  016cef8  bt 2, 0x16cf24
  016cefc  lwz 4, 208(4)
  016cf00  lis 3, 115
  016cf04  sldi 4, 4, 3
  016cf08  addic 3, 3, 32048
  016cf0c  addc 5, 4, 4
  016cf10  addc 4, 4, 5
  016cf14  extsw 4, 4
  016cf18  addc 3, 3, 4
  016cf1c  lwz 4, 4(3)
  016cf20  b 0x16cf44
  016cf24  lwz 4, 208(4)
  016cf28  lis 3, 115
  016cf2c  sldi 4, 4, 3
  016cf30  addic 3, 3, 32048
  016cf34  addc 5, 4, 4
  016cf38  addc 4, 4, 5
  016cf3c  extsw 4, 4
  016cf40  lwzx 4, 3, 4
  016cf44  lis 3, 151
  016cf48  lwz 3, -25440(3)
  016cf4c  cmpw 3, 4
  016cf50  bf 0, 0x16cf68
  016cf54  li 3, 2
  016cf58  ori 4, 31, 0
  016cf5c  lwz 5, 28(29)
  016cf60  bl 0x15d12c
  016cf64  nop
  016cf68  li 3, 2
  016cf6c  stw 3, 92(29)
  016cf70  b 0x16da10
  016cf74  bf 30, 0x16d35c
  016cf78  lis 3, 230
  016cf7c  lbz 3, -21950(3)
  016cf80  cmpwi 3, 1
  016cf84  bf 2, 0x16d238
  016cf88  lis 31, 150
  016cf8c  li 3, 0
  016cf90  addic 31, 31, 19008
  016cf94  ori 28, 3, 0
  016cf98  lwz 4, 192(31)
  016cf9c  rlwinm 5, 4, 0, 16, 16
  016cfa0  cmpwi 5, 0
  016cfa4  bt 2, 0x16cfb4
  016cfa8  lis 3, 230
  016cfac  lwz 3, -22188(3)
  016cfb0  addic 3, 3, 1
  016cfb4  ori 5, 4, 0
  016cfb8  lis 4, 230
  016cfbc  rlwinm 5, 5, 0, 18, 18
  016cfc0  cmpwi 5, 0
  016cfc4  stw 3, -22188(4)
  016cfc8  ori 3, 28, 0
  016cfcc  bt 2, 0x16cfdc
  016cfd0  lis 3, 230
  016cfd4  lwz 3, -22184(3)
  016cfd8  addic 3, 3, 1
  016cfdc  lis 30, 230
  016cfe0  lwz 5, 196(31)
  016cfe4  stw 3, -22184(30)
  016cfe8  rlwinm 3, 5, 0, 16, 16
  016cfec  cmpwi 3, 0
  016cff0  bf 2, 0x16d01c
  016cff4  lwz 3, -22188(4)
  016cff8  cmpwi 3, 16
  016cffc  bt 0, 0x16d010
  016d000  lwz 3, -22188(4)
  016d004  clrlwi 3, 3, 29
  016d008  cmpwi 3, 0
  016d00c  bt 2, 0x16d01c
  016d010  lwz 3, -22188(4)
  016d014  cmpwi 3, 48
  016d018  bt 0, 0x16d064
  016d01c  lis 3, 230
  016d020  lwz 5, -22180(3)
  016d024  cmpwi 5, 1
  016d028  bf 1, 0x16d064
  016d02c  lwz 5, -22180(3)
  016d030  lwz 4, -22188(4)
  016d034  addic 5, 5, -1
  016d038  clrlwi 6, 4, 30
  016d03c  cmpwi 6, 0
  016d040  stw 5, -22180(3)
  016d044  bt 2, 0x16d050
  016d048  cmpwi 4, 16
  016d04c  bf 0, 0x16d064
  016d050  li 3, 1
  016d054  lwz 5, 28(29)
  016d058  ori 4, 28, 0
  016d05c  bl 0x15d12c
  016d060  nop
  016d064  lwz 3, 196(31)
  016d068  rlwinm 3, 3, 0, 18, 18
  016d06c  cmpwi 3, 0
  016d070  bf 2, 0x16d09c
  016d074  lwz 3, -22184(30)
  016d078  cmpwi 3, 16
  016d07c  bt 0, 0x16d090
  016d080  lwz 3, -22184(30)
  016d084  clrlwi 3, 3, 29
  016d088  cmpwi 3, 0
  016d08c  bt 2, 0x16d09c
  016d090  lwz 3, -22184(30)
  016d094  cmpwi 3, 48
  016d098  bt 0, 0x16d238
  016d09c  lwz 3, 64(29)
  016d0a0  cmpwi 1, 3, 0
  016d0a4  bt 6, 0x16d0e0
  016d0a8  lwz 4, 88(29)
  016d0ac  lis 3, 115
  016d0b0  slwi 4, 4, 4
  016d0b4  addic 3, 3, 32048
  016d0b8  extsw 4, 4
  016d0bc  addc 4, 29, 4
  016d0c0  lwz 4, 208(4)
  016d0c4  sldi 4, 4, 3
  016d0c8  addc 5, 4, 4
  016d0cc  addc 4, 4, 5
  016d0d0  extsw 4, 4
  016d0d4  addc 3, 3, 4
  016d0d8  lhz 3, 10(3)
  016d0dc  b 0x16d114
  016d0e0  lwz 4, 88(29)
  016d0e4  lis 3, 115
  016d0e8  slwi 4, 4, 4
  016d0ec  addic 3, 3, 32048
  016d0f0  extsw 4, 4
  016d0f4  addc 4, 29, 4
  016d0f8  lwz 4, 208(4)
  016d0fc  sldi 4, 4, 3
  016d100  addc 5, 4, 4
  016d104  addc 4, 4, 5
  016d108  extsw 4, 4
  016d10c  addc 3, 3, 4
  016d110  lhz 3, 8(3)
  016d114  cmpwi 3, 0
  016d118  bf 1, 0x16d238
  016d11c  bt 6, 0x16d158
  016d120  lwz 4, 88(29)
  016d124  lis 3, 115
  016d128  slwi 4, 4, 4
  016d12c  addic 3, 3, 32048
  016d130  extsw 4, 4
  016d134  addc 4, 29, 4
  016d138  lwz 4, 208(4)
  016d13c  sldi 4, 4, 3
  016d140  addc 5, 4, 4
  016d144  addc 4, 4, 5
  016d148  extsw 4, 4
  016d14c  addc 3, 3, 4
  016d150  lhz 3, 10(3)
  016d154  b 0x16d18c
  016d158  lwz 4, 88(29)
  016d15c  lis 3, 115
  016d160  slwi 4, 4, 4
  016d164  addic 3, 3, 32048
  016d168  extsw 4, 4
  016d16c  addc 4, 29, 4
  016d170  lwz 4, 208(4)
  016d174  sldi 4, 4, 3
  016d178  addc 5, 4, 4
  016d17c  addc 4, 4, 5
  016d180  extsw 4, 4
  016d184  addc 3, 3, 4
  016d188  lhz 3, 8(3)
  016d18c  lis 4, 151
  016d190  lwz 6, 88(29)
  016d194  lis 5, 115
  016d198  slwi 6, 6, 4
  016d19c  addic 5, 5, 32048
  016d1a0  lwz 4, -25440(4)
  016d1a4  divw 4, 4, 3
  016d1a8  extsw 3, 6
  016d1ac  lis 6, 151
  016d1b0  addc 3, 29, 3
  016d1b4  addic 6, 6, -16212
  016d1b8  lwz 3, 208(3)
  016d1bc  sldi 7, 3, 3
  016d1c0  slwi 3, 3, 2
  016d1c4  addc 8, 7, 7
  016d1c8  extsw 3, 3
  016d1cc  addc 7, 7, 8
  016d1d0  extsw 7, 7
  016d1d4  addc 5, 5, 7
  016d1d8  lwzx 3, 6, 3
  016d1dc  lhz 5, 14(5)
  016d1e0  subc 3, 5, 3
  016d1e4  cmpw 4, 3
  016d1e8  bf 1, 0x16d1f0
  016d1ec  ori 4, 3, 0
  016d1f0  lis 3, 230
  016d1f4  lwz 5, -22180(3)
  016d1f8  cmpw 5, 4
  016d1fc  bf 0, 0x16d238
  016d200  lwz 4, -22180(3)
  016d204  lwz 30, -22184(30)
  016d208  addic 4, 4, 1
  016d20c  clrlwi 5, 30, 30
  016d210  cmpwi 5, 0
  016d214  stw 4, -22180(3)
  016d218  bt 2, 0x16d224
  016d21c  cmpwi 30, 16
  016d220  bf 0, 0x16d238
  016d224  li 3, 1
  016d228  ori 4, 28, 0
  016d22c  lwz 5, 28(29)
  016d230  bl 0x15d12c
  016d234  nop
  016d238  lis 3, 150
  016d23c  addic 3, 3, 19008
  016d240  lwz 3, 196(3)
  016d244  rlwinm 4, 3, 0, 27, 27
  016d248  cmpwi 4, 0
  016d24c  bt 2, 0x16d29c
  016d250  li 3, 3
  016d254  lwz 7, 32(29)
  016d258  lis 5, 230
  016d25c  li 4, 0
  016d260  li 6, 1
  016d264  stw 3, 92(29)
  016d268  addic 3, 7, 1024
  016d26c  stb 4, -21951(5)
  016d270  lwz 5, 1060(7)
  016d274  lwz 5, 72(5)
  016d278  lbz 5, 16(5)
  016d27c  addic 5, 5, -1
  016d280  bl 0xfddc0
  016d284  nop
  016d288  lwz 3, 32(29)
  016d28c  addic 3, 3, 1024
  016d290  bl 0xf31a8
  016d294  nop
  016d298  b 0x16da10
  016d29c  lis 4, 144
  016d2a0  lwz 4, 11988(4)
  016d2a4  and 3, 3, 4
  016d2a8  cmpwi 3, 0
  016d2ac  bt 2, 0x16d300
  016d2b0  li 3, 3
  016d2b4  lwz 8, 32(29)
  016d2b8  lis 5, 230
  016d2bc  li 7, 1
  016d2c0  li 6, 8
  016d2c4  stw 3, 92(29)
  016d2c8  addic 3, 8, 1024
  016d2cc  stb 7, -21951(5)
  016d2d0  lwz 5, 1060(8)
  016d2d4  li 4, 0
  016d2d8  lwz 5, 72(5)
  016d2dc  lbz 5, 16(5)
  016d2e0  addic 5, 5, -1
  016d2e4  bl 0xfddc0
  016d2e8  nop
  016d2ec  lwz 3, 32(29)
  016d2f0  addic 3, 3, 1024
  016d2f4  bl 0xf31a8
  016d2f8  nop
  016d2fc  b 0x16da10
  016d300  lwz 3, 32(29)
  016d304  addic 3, 3, 1024
  016d308  bl 0xf98d8
  016d30c  nop
  016d310  lwz 3, 32(29)
  016d314  lbz 4, 1107(3)
  016d318  cmpwi 4, 0
  016d31c  bf 2, 0x16d348
  016d320  lbz 4, 1136(3)
  016d324  rlwinm 4, 4, 0, 30, 30
  016d328  cmpwi 4, 0
  016d32c  bt 2, 0x16d348
  016d330  li 4, 1
  016d334  addic 3, 3, 1024
  016d338  li 5, 0
  016d33c  ori 6, 4, 0
  016d340  bl 0xfddc0
  016d344  nop
  016d348  lwz 3, 32(29)
  016d34c  addic 3, 3, 1024
  016d350  bl 0xf31a8
  016d354  nop
  016d358  b 0x16da10
  016d35c  bf 26, 0x16d3b4
  016d360  lwz 3, 32(29)
  016d364  addic 3, 3, 1024
  016d368  bl 0xf98d8
  016d36c  nop
  016d370  lwz 3, 32(29)
  016d374  lbz 4, 1107(3)
  016d378  cmpwi 4, 0
  016d37c  bf 2, 0x16d3a0
  016d380  lbz 4, 1136(3)
  016d384  rlwinm 4, 4, 0, 30, 30
  016d388  cmpwi 4, 0
  016d38c  bt 2, 0x16d3a0
  016d390  lis 4, -16512
  016d394  li 5, 4
  016d398  stw 4, 1112(3)
  016d39c  stw 5, 92(29)
  016d3a0  lwz 3, 32(29)
  016d3a4  addic 3, 3, 1024
  016d3a8  bl 0xf31a8
  016d3ac  nop
  016d3b0  b 0x16da10
  016d3b4  bf 6, 0x16da10
  016d3b8  lwz 3, 32(29)
  016d3bc  addic 3, 3, 1024
  016d3c0  bl 0xf98d8
  016d3c4  nop
  016d3c8  lwz 3, 32(29)
  016d3cc  lbz 3, 1136(3)
  016d3d0  rlwinm 3, 3, 0, 30, 30
  016d3d4  cmpwi 3, 0
  016d3d8  bt 2, 0x16da00
  016d3dc  lis 3, 230
  016d3e0  lbz 3, -21951(3)
  016d3e4  cmpwi 3, 1
  016d3e8  bf 2, 0x16d9e4
  016d3ec  lwz 3, 88(29)
  016d3f0  addic 4, 29, 212
  016d3f4  slwi 3, 3, 4
  016d3f8  addc 4, 4, 3
  016d3fc  clrldi 4, 4, 32
  016d400  lbz 4, 0(4)
  016d404  cmpwi 4, 1
  016d408  bf 2, 0x16d484
  016d40c  lwz 4, 64(29)
  016d410  cmpwi 4, 0
  016d414  bt 2, 0x16d448
  016d418  extsw 3, 3
  016d41c  lis 4, 115
  016d420  addc 3, 29, 3
  016d424  addic 4, 4, 32048
  016d428  lwz 3, 208(3)
  016d42c  sldi 3, 3, 3
  016d430  addc 5, 3, 3
  016d434  addc 3, 3, 5
  016d438  extsw 3, 3
  016d43c  addc 3, 4, 3
  016d440  lhz 3, 10(3)
  016d444  b 0x16d474
  016d448  extsw 3, 3
  016d44c  lis 4, 115
  016d450  addc 3, 29, 3
  016d454  addic 4, 4, 32048
  016d458  lwz 3, 208(3)
  016d45c  sldi 3, 3, 3
  016d460  addc 5, 3, 3
  016d464  addc 3, 3, 5
  016d468  extsw 3, 3
  016d46c  addc 3, 4, 3
  016d470  lhz 3, 8(3)
  016d474  lis 4, 230
  016d478  lwz 4, -22180(4)
  016d47c  mullw 3, 3, 4
  016d480  b 0x16d4f0
  016d484  lis 4, 151
  016d488  addic 4, 4, -16064
  016d48c  lbz 4, 35(4)
  016d490  cmpwi 4, 0
  016d494  bt 2, 0x16d4c8
  016d498  extsw 3, 3
  016d49c  lis 4, 115
  016d4a0  addc 3, 29, 3
  016d4a4  addic 4, 4, 32048
  016d4a8  lwz 3, 208(3)
  016d4ac  sldi 3, 3, 3
  016d4b0  addc 5, 3, 3
  016d4b4  addc 3, 3, 5
  016d4b8  extsw 3, 3
  016d4bc  addc 3, 4, 3
  016d4c0  lwz 3, 4(3)
  016d4c4  b 0x16d4f0
  016d4c8  extsw 3, 3
  016d4cc  lis 4, 115
  016d4d0  addc 3, 29, 3
  016d4d4  addic 4, 4, 32048
  016d4d8  lwz 3, 208(3)
  016d4dc  sldi 3, 3, 3
  016d4e0  addc 5, 3, 3
  016d4e4  addc 3, 3, 5
  016d4e8  extsw 3, 3
  016d4ec  lwzx 3, 4, 3
  016d4f0  lis 28, 151
  016d4f4  lwz 4, -25440(28)
  016d4f8  cmpw 4, 3
  016d4fc  bf 0, 0x16d570
  016d500  lwz 6, 88(29)
  016d504  addic 3, 29, 208
  016d508  slwi 6, 6, 4
  016d50c  lis 5, 115
  016d510  extsw 6, 6
  016d514  lis 4, 151
  016d518  addc 7, 29, 6
  016d51c  addic 5, 5, 32048
  016d520  addic 4, 4, -16212
  016d524  lwzx 3, 3, 6
  016d528  sldi 3, 3, 3
  016d52c  lwz 6, 208(7)
  016d530  addc 7, 3, 3
  016d534  slwi 6, 6, 2
  016d538  addc 3, 3, 7
  016d53c  extsw 6, 6
  016d540  extsw 3, 3
  016d544  addc 3, 5, 3
  016d548  lwzx 4, 4, 6
  016d54c  lhz 3, 14(3)
  016d550  cmpw 4, 3
  016d554  bt 0, 0x16d570
  016d558  li 3, 0
  016d55c  lwz 5, 28(29)
  016d560  ori 4, 3, 0
  016d564  bl 0x15d12c
  016d568  nop
  016d56c  b 0x16d9f8
  016d570  lwz 3, 88(29)
  016d574  addic 31, 29, 212
  016d578  slwi 4, 3, 4
  016d57c  extsw 4, 4
  016d580  addc 3, 29, 4
  016d584  lbz 5, 212(3)
  016d588  cmpwi 5, 1
  016d58c  bf 2, 0x16d7d8
  016d590  addic 30, 29, 208
  016d594  lis 5, 151
  016d598  lis 31, 115
  016d59c  addic 31, 31, 32048
  016d5a0  lwzx 6, 30, 4
  016d5a4  sldi 7, 6, 3
  016d5a8  lwz 6, 208(3)
  016d5ac  addc 8, 7, 7
  016d5b0  addic 3, 5, -16212
  016d5b4  addc 7, 7, 8
  016d5b8  slwi 5, 6, 2
  016d5bc  extsw 7, 7
  016d5c0  extsw 9, 5
  016d5c4  addc 7, 31, 7
  016d5c8  addic 5, 31, 14
  016d5cc  lwzx 8, 3, 9
  016d5d0  lhz 7, 14(7)
  016d5d4  cmpw 8, 7
  016d5d8  bf 0, 0x16d7c0
  016d5dc  sldi 6, 6, 3
  016d5e0  addc 7, 6, 6
  016d5e4  addc 6, 6, 7
  016d5e8  lwz 7, 64(29)
  016d5ec  extsw 6, 6
  016d5f0  cmpwi 7, 0
  016d5f4  addc 6, 31, 6
  016d5f8  bt 2, 0x16d604
  016d5fc  lhz 6, 10(6)
  016d600  b 0x16d608
  016d604  lhz 6, 8(6)
  016d608  lis 7, 230
  016d60c  lwz 7, -22180(7)
  016d610  mullw 6, 6, 7
  016d614  lwz 7, -25440(28)
  016d618  cmpw 7, 6
  016d61c  bt 0, 0x16d798
  016d620  ori 6, 4, 0
  016d624  lwzx 7, 30, 6
  016d628  sldi 8, 7, 3
  016d62c  slwi 7, 7, 2
  016d630  addc 9, 8, 8
  016d634  extsw 7, 7
  016d638  addc 8, 8, 9
  016d63c  extsw 8, 8
  016d640  lwzx 7, 3, 7
  016d644  lhzx 8, 5, 8
  016d648  cmpw 7, 8
  016d64c  bf 1, 0x16d66c
  016d650  lwzx 6, 30, 6
  016d654  sldi 6, 6, 3
  016d658  addc 7, 6, 6
  016d65c  addc 6, 6, 7
  016d660  extsw 6, 6
  016d664  lhzx 5, 5, 6
  016d668  b 0x16d67c
  016d66c  lwzx 5, 30, 6
  016d670  slwi 5, 5, 2
  016d674  extsw 5, 5
  016d678  lwzx 5, 3, 5
  016d67c  ori 6, 3, 0
  016d680  lwzx 4, 30, 4
  016d684  lis 3, 230
  016d688  slwi 7, 4, 2
  016d68c  extsw 7, 7
  016d690  lwz 3, -22180(3)
  016d694  extsw 27, 3
  016d698  extsw 3, 4
  016d69c  stwx 5, 6, 7
  016d6a0  ori 4, 27, 0
  016d6a4  bl 0xaa2e8
  016d6a8  nop
  016d6ac  subc 5, 27, 3
  016d6b0  lwz 3, 64(29)
  016d6b4  cmpwi 3, 0
  016d6b8  bt 2, 0x16d6e8
  016d6bc  lwz 3, 88(29)
  016d6c0  slwi 3, 3, 4
  016d6c4  extsw 3, 3
  016d6c8  lwzx 3, 30, 3
  016d6cc  sldi 3, 3, 3
  016d6d0  addc 4, 3, 3
  016d6d4  addc 3, 3, 4
  016d6d8  extsw 3, 3
  016d6dc  addc 3, 31, 3
  016d6e0  lhz 31, 10(3)
  016d6e4  b 0x16d710
  016d6e8  lwz 3, 88(29)
  016d6ec  slwi 3, 3, 4
  016d6f0  extsw 3, 3
  016d6f4  lwzx 3, 30, 3
  016d6f8  sldi 3, 3, 3
  016d6fc  addc 4, 3, 3
  016d700  addc 3, 3, 4
  016d704  extsw 3, 3
  016d708  addc 3, 31, 3
  016d70c  lhz 31, 8(3)
  016d710  lwz 4, 88(29)
  016d714  lis 3, 161
  016d718  slwi 4, 4, 4
  016d71c  mullw 31, 31, 5
  016d720  extsw 4, 4
  016d724  addic 6, 3, -2788
  016d728  li 3, 3
  016d72c  lwzx 4, 30, 4
  016d730  slwi 7, 4, 2
  016d734  slwi 4, 4, 2
  016d738  extsw 7, 7
  016d73c  extsw 4, 4
  016d740  lwzx 7, 6, 7
  016d744  addc 5, 7, 5
  016d748  stwx 5, 6, 4
  016d74c  bl 0x16c4e8
  016d750  lwz 3, -25440(28)
  016d754  lwz 4, 64(29)
  016d758  subc 3, 3, 31
  016d75c  cntlzw 4, 4
  016d760  srwi 4, 4, 5
  016d764  stw 3, -25440(28)
  016d768  xori 3, 4, 1
  016d76c  bl 0x16a658
  016d770  li 3, 20319
  016d774  bl 0x7b740
  016d778  nop
  016d77c  bl 0x16bc20
  016d780  li 3, 7
  016d784  lwz 5, 28(29)
  016d788  li 4, 0
  016d78c  bl 0x15d12c
  016d790  nop
  016d794  b 0x16d9f8
  016d798  li 3, 20320
  016d79c  bl 0x7b740
  016d7a0  nop
  016d7a4  bl 0x16bc20
  016d7a8  li 3, 0
  016d7ac  lwz 5, 28(29)
  016d7b0  ori 4, 3, 0
  016d7b4  bl 0x15d12c
  016d7b8  nop
  016d7bc  b 0x16d9f8
  016d7c0  li 3, 0
  016d7c4  lwz 5, 28(29)
  016d7c8  ori 4, 3, 0
  016d7cc  bl 0x15d12c
  016d7d0  nop
  016d7d4  b 0x16d9f8
  016d7d8  lis 4, 151
  016d7dc  addic 4, 4, -16064
  016d7e0  lbz 4, 35(4)
  016d7e4  cmpwi 4, 0
  016d7e8  bt 2, 0x16d814
  016d7ec  lwz 3, 208(3)
  016d7f0  lis 4, 115
  016d7f4  sldi 3, 3, 3
  016d7f8  addic 4, 4, 32048
  016d7fc  addc 5, 3, 3
  016d800  addc 3, 3, 5
  016d804  extsw 3, 3
  016d808  addc 3, 4, 3
  016d80c  lwz 30, 4(3)
  016d810  b 0x16d834
  016d814  lwz 3, 208(3)
  016d818  lis 4, 115
  016d81c  sldi 3, 3, 3
  016d820  addic 4, 4, 32048
  016d824  addc 5, 3, 3
  016d828  addc 3, 3, 5
  016d82c  extsw 3, 3
  016d830  lwzx 30, 4, 3
  016d834  lwz 3, -25440(28)
  016d838  cmpw 3, 30
  016d83c  bt 0, 0x16d9bc
  016d840  li 3, 2
  016d844  bl 0x16c4e8
  016d848  lwz 3, 88(29)
  016d84c  addic 27, 29, 208
  016d850  li 4, 1
  016d854  slwi 3, 3, 4
  016d858  extsw 3, 3
  016d85c  addc 3, 29, 3
  016d860  lwz 3, 208(3)
  016d864  extsw 3, 3
  016d868  bl 0x112e18
  016d86c  nop
  016d870  lwz 3, 88(29)
  016d874  slwi 3, 3, 4
  016d878  extsw 3, 3
  016d87c  lwzx 3, 27, 3
  016d880  cmpwi 3, 24
  016d884  stw 3, 72(29)
  016d888  bf 2, 0x16d89c
  016d88c  lis 3, 151
  016d890  li 4, 1
  016d894  addic 3, 3, -25376
  016d898  stb 4, 8181(3)
  016d89c  lwz 3, -25440(28)
  016d8a0  lwz 4, 64(29)
  016d8a4  subc 3, 3, 30
  016d8a8  cntlzw 4, 4
  016d8ac  srwi 4, 4, 5
  016d8b0  stw 3, -25440(28)
  016d8b4  xori 3, 4, 1
  016d8b8  bl 0x16a658
  016d8bc  lwz 30, 80(29)
  016d8c0  cmpwi 30, -1
  016d8c4  bt 2, 0x16d8d8
  016d8c8  li 4, 0
  016d8cc  extsw 3, 30
  016d8d0  bl 0xc8b28
  016d8d4  nop
  016d8d8  li 3, -1
  016d8dc  ori 4, 31, 0
  016d8e0  lwz 31, 88(29)
  016d8e4  stw 3, 80(29)
  016d8e8  slwi 3, 31, 4
  016d8ec  extsw 3, 3
  016d8f0  lbzx 4, 4, 3
  016d8f4  cmpwi 4, 1
  016d8f8  bf 2, 0x16d974
  016d8fc  lwzx 3, 27, 3
  016d900  lis 4, 0
  016d904  lis 5, 115
  016d908  sldi 7, 3, 3
  016d90c  ori 4, 4, 60000
  016d910  addc 8, 7, 7
  016d914  lis 6, 112
  016d918  lis 11, 151
  016d91c  addc 7, 7, 8
  016d920  addc 4, 3, 4
  016d924  addic 10, 5, 32048
  016d928  lis 8, 112
  016d92c  addic 5, 6, 22536
  016d930  addic 11, 11, -16212
  016d934  slwi 3, 3, 2
  016d938  extsw 31, 7
  016d93c  li 9, 48
  016d940  addic 6, 8, 22216
  016d944  addc 8, 11, 3
  016d948  addc 10, 10, 31
  016d94c  ori 3, 9, 0
  016d950  lis 12, 112
  016d954  extsw 4, 4
  016d958  addic 7, 12, 22664
  016d95c  lhz 9, 14(10)
  016d960  clrldi 8, 8, 32
  016d964  bl 0xc8444
  016d968  nop
  016d96c  stw 3, 80(29)
  016d970  b 0x16d994
  016d974  lwz 3, 464(29)
  016d978  addic 3, 3, -1
  016d97c  cmpw 31, 3
  016d980  bf 1, 0x16d98c
  016d984  ori 31, 3, 0
  016d988  b 0x16d98c
  016d98c  stw 31, 88(29)
  016d990  bl 0x16c6b8
  016d994  li 3, 20319
  016d998  bl 0x7b740
  016d99c  nop
  016d9a0  bl 0x16bc20
  016d9a4  lwz 5, 28(29)
  016d9a8  li 3, 7
  016d9ac  li 4, 0
  016d9b0  bl 0x15d12c
  016d9b4  nop
  016d9b8  b 0x16d9f8
  016d9bc  li 3, 20320
  016d9c0  bl 0x7b740
  016d9c4  nop
  016d9c8  bl 0x16bc20
  016d9cc  li 3, 0
  016d9d0  lwz 5, 28(29)
  016d9d4  ori 4, 3, 0
  016d9d8  bl 0x15d12c
  016d9dc  nop
  016d9e0  b 0x16d9f8
  016d9e4  li 3, 0
  016d9e8  lwz 5, 28(29)
  016d9ec  ori 4, 3, 0
  016d9f0  bl 0x15d12c
  016d9f4  nop
  016d9f8  li 3, 0
  016d9fc  stw 3, 92(29)
  016da00  lwz 3, 32(29)
  016da04  addic 3, 3, 1024
  016da08  bl 0xf31a8
  016da0c  nop
  016da10  ld 0, 176(1)
  016da14  mtlr 0
  016da18  lfd 31, 152(1)
  016da1c  ld 27, 112(1)
  016da20  ld 28, 120(1)
  016da24  ld 29, 128(1)
  016da28  ld 30, 136(1)
  016da2c  ld 31, 144(1)
  016da30  addi 1, 1, 160
  016da34  blr

Vendor_PreUpdate:   # 0x16da88, 0x1f14 bytes
  016da88  stdu 1, -416(1)
  016da8c  mflr 0
  016da90  std 0, 432(1)
  016da94  stfd 24, 352(1)
  016da98  stfd 25, 360(1)
  016da9c  stfd 26, 368(1)
  016daa0  stfd 27, 376(1)
  016daa4  stfd 28, 384(1)
  016daa8  stfd 29, 392(1)
  016daac  stfd 30, 400(1)
  016dab0  stfd 31, 408(1)
  016dab4  std 26, 304(1)
  016dab8  std 27, 312(1)
  016dabc  lis 26, 230
  016dac0  lis 27, 23
  016dac4  addi 27, 27, -9672
  016dac8  lwz 3, -22960(26)
  016dacc  cmpwi 3, 2
  016dad0  cmpwi 6, 3, 0
  016dad4  std 31, 344(1)
  016dad8  std 30, 336(1)
  016dadc  std 29, 328(1)
  016dae0  std 28, 320(1)
  016dae4  std 25, 296(1)
  016dae8  std 24, 288(1)
  016daec  std 23, 280(1)
  016daf0  cmpwi 1, 3, 3
  016daf4  bt 1, 0x16db14
  016daf8  cmpwi 1, 3, -1
  016dafc  cmpwi 7, 3, 1
  016db00  bt 25, 0x16db0c
  016db04  bf 5, 0x16f940
  016db08  b 0x16db1c
  016db0c  bf 29, 0x16df18
  016db10  b 0x16db1c
  016db14  bf 5, 0x16f27c
  016db18  b 0x16f940
  016db1c  addic 31, 26, -22960
  016db20  lwz 3, 64(31)
  016db24  cmpwi 3, 0
  016db28  bt 2, 0x16db38
  016db2c  lwz 3, -22960(26)
  016db30  cmpwi 3, 2
  016db34  bf 2, 0x16dc74
  016db38  lis 30, 150
  016db3c  addic 30, 30, -14912
  016db40  lwz 3, 8(30)
  016db44  rlwinm 4, 3, 0, 30, 30
  016db48  cmpwi 4, 0
  016db4c  bf 2, 0x16db74
  016db50  rlwinm 3, 3, 0, 27, 27
  016db54  cmpwi 3, 0
  016db58  bt 2, 0x16db7c
  016db5c  lis 3, 150
  016db60  addic 3, 3, 19008
  016db64  lwz 3, 164(3)
  016db68  rlwinm 3, 3, 0, 22, 22
  016db6c  cmpwi 3, 0
  016db70  bt 2, 0x16db7c
  016db74  bl 0x166e30
  016db78  nop
  016db7c  lwz 3, 8(30)
  016db80  rlwinm 4, 3, 0, 30, 30
  016db84  cmpwi 4, 0
  016db88  bf 2, 0x16dbb0
  016db8c  rlwinm 3, 3, 0, 27, 27
  016db90  cmpwi 3, 0
  016db94  bt 2, 0x16dbc0
  016db98  lis 3, 150
  016db9c  addic 3, 3, 19008
  016dba0  lwz 3, 164(3)
  016dba4  rlwinm 3, 3, 0, 22, 22
  016dba8  cmpwi 3, 0
  016dbac  bt 2, 0x16dbc0
  016dbb0  bl 0xfc168
  016dbb4  nop
  016dbb8  bl 0x15d7ac
  016dbbc  nop
  016dbc0  lis 3, 101
  016dbc4  li 4, 3
  016dbc8  addic 3, 3, 16236
  016dbcc  bl 0x6562c
  016dbd0  nop
  016dbd4  lwz 3, 8(30)
  016dbd8  clrlwi 4, 3, 31
  016dbdc  cmpwi 4, 0
  016dbe0  bf 2, 0x16dc08
  016dbe4  rlwinm 3, 3, 0, 27, 27
  016dbe8  cmpwi 3, 0
  016dbec  bt 2, 0x16dc10
  016dbf0  lis 3, 150
  016dbf4  addic 3, 3, 19008
  016dbf8  lwz 3, 164(3)
  016dbfc  rlwinm 3, 3, 0, 22, 22
  016dc00  cmpwi 3, 0
  016dc04  bt 2, 0x16dc10
  016dc08  bl 0x954c8
  016dc0c  nop
  016dc10  lis 3, 101
  016dc14  li 4, 7
  016dc18  addic 3, 3, 16252
  016dc1c  bl 0x6562c
  016dc20  nop
  016dc24  lwz 30, 8(30)
  016dc28  rlwinm 3, 30, 0, 29, 29
  016dc2c  cmpwi 3, 0
  016dc30  bf 2, 0x16dc58
  016dc34  rlwinm 3, 30, 0, 27, 27
  016dc38  cmpwi 3, 0
  016dc3c  bt 2, 0x16dc60
  016dc40  lis 3, 150
  016dc44  addic 3, 3, 19008
  016dc48  lwz 3, 164(3)
  016dc4c  rlwinm 3, 3, 0, 22, 22
  016dc50  cmpwi 3, 0
  016dc54  bt 2, 0x16dc60
  016dc58  bl 0x11e8a0
  016dc5c  nop
  016dc60  lis 3, 101
  016dc64  li 4, 5
  016dc68  addic 3, 3, 16268
  016dc6c  bl 0x6562c
  016dc70  nop
  016dc74  lwz 3, -22960(26)
  016dc78  cmpwi 3, 0
  016dc7c  bf 2, 0x16dd50
  016dc80  lis 3, 150
  016dc84  lfs 1, 0(27)
  016dc88  lfs 2, -12528(3)
  016dc8c  fsubs 1, 2, 1
  016dc90  stfs 1, -12528(3)
  016dc94  lfs 1, 4(27)
  016dc98  lfs 2, -12528(3)
  016dc9c  fcmpu 0, 2, 1
  016dca0  cror 6, 1, 2
  016dca4  bt 6, 0x16dcac
  016dca8  stfs 1, -12528(3)
  016dcac  lis 4, 114
  016dcb0  lwz 5, 4(31)
  016dcb4  addic 5, 5, 1
  016dcb8  lfs 2, -3056(4)
  016dcbc  stw 5, 4(31)
  016dcc0  lfs 3, 8(27)
  016dcc4  fmuls 2, 2, 3
  016dcc8  fctiwz 2, 2
  016dccc  stfd 2, 256(1)
  016dcd0  lwz 4, 260(1)
  016dcd4  cmpw 5, 4
  016dcd8  bf 0, 0x16dce8
  016dcdc  lwz 4, 64(31)
  016dce0  cmpwi 4, 0
  016dce4  bt 2, 0x16de68
  016dce8  li 30, 1
  016dcec  li 29, 0
  016dcf0  stfs 1, -12528(3)
  016dcf4  li 28, 8
  016dcf8  ori 5, 29, 0
  016dcfc  stw 30, 12(31)
  016dd00  li 4, 3
  016dd04  stw 30, -22960(26)
  016dd08  ori 6, 28, 0
  016dd0c  lwz 3, 28(31)
  016dd10  stw 29, 4(31)
  016dd14  bl 0xfddc0
  016dd18  nop
  016dd1c  lwz 7, 28(31)
  016dd20  lis 6, 16256
  016dd24  lis 8, 230
  016dd28  lis 9, 230
  016dd2c  li 3, 4
  016dd30  ori 4, 29, 0
  016dd34  stw 6, 88(7)
  016dd38  ori 5, 7, 0
  016dd3c  stb 30, -22196(8)
  016dd40  stw 28, -22200(9)
  016dd44  bl 0x15d12c
  016dd48  nop
  016dd4c  b 0x16de68
  016dd50  cmpwi 3, 2
  016dd54  bf 2, 0x16de68
  016dd58  lwz 3, 64(31)
  016dd5c  li 30, 0
  016dd60  cmpwi 3, 0
  016dd64  bf 2, 0x16dd94
  016dd68  lwz 4, 72(31)
  016dd6c  cmpwi 4, 0
  016dd70  bt 0, 0x16dd94
  016dd74  lis 5, 116
  016dd78  slwi 4, 4, 2
  016dd7c  addic 5, 5, -24000
  016dd80  extsw 4, 4
  016dd84  lwzx 4, 5, 4
  016dd88  cmpwi 4, 0
  016dd8c  bt 0, 0x16dd94
  016dd90  li 30, 1
  016dd94  lis 4, 114
  016dd98  lwz 5, 4(31)
  016dd9c  addic 5, 5, 1
  016dda0  lfs 1, -3056(4)
  016dda4  stw 5, 4(31)
  016dda8  lfs 2, 8(27)
  016ddac  fmuls 1, 1, 2
  016ddb0  fctiwz 1, 1
  016ddb4  stfd 1, 256(1)
  016ddb8  lwz 4, 260(1)
  016ddbc  cmpw 5, 4
  016ddc0  bf 0, 0x16ddcc
  016ddc4  cmpwi 3, 0
  016ddc8  bt 2, 0x16de5c
  016ddcc  li 29, 0
  016ddd0  lwz 3, 28(31)
  016ddd4  li 4, 1
  016ddd8  ori 5, 29, 0
  016dddc  li 6, 8
  016dde0  bl 0xfddc0
  016dde4  nop
  016dde8  ori 28, 29, 0
  016ddec  lis 3, 230
  016ddf0  addic 3, 3, -22463
  016ddf4  lbzx 3, 3, 28
  016ddf8  cmpwi 3, 1
  016ddfc  bf 2, 0x16de1c
  016de00  lis 3, 230
  016de04  addic 3, 3, -22464
  016de08  addc 4, 3, 28
  016de0c  lwz 3, 28(31)
  016de10  clrldi 4, 4, 32
  016de14  bl 0xf0f1c
  016de18  nop
  016de1c  addic 29, 29, 1
  016de20  addic 28, 28, 64
  016de24  cmpwi 29, 4
  016de28  bt 0, 0x16ddec
  016de2c  cmpwi 30, 0
  016de30  bt 2, 0x16de3c
  016de34  bl 0x16b2f8
  016de38  b 0x16de5c
  016de3c  li 30, 0
  016de40  ori 3, 30, 0
  016de44  bl 0x16b038
  016de48  li 3, 6
  016de4c  lwz 5, 28(31)
  016de50  ori 4, 30, 0
  016de54  bl 0x15d12c
  016de58  nop
  016de5c  li 3, 1
  016de60  bl 0xd56d8
  016de64  nop
  016de68  lis 3, 114
  016de6c  lfs 1, 12(27)
  016de70  lfs 2, -3056(3)
  016de74  lwz 3, 4(31)
  016de78  fmuls 1, 2, 1
  016de7c  fctiwz 1, 1
  016de80  stfd 1, 256(1)
  016de84  lwz 4, 260(1)
  016de88  cmpw 3, 4
  016de8c  bt 1, 0x16dea4
  016de90  lis 3, 112
  016de94  lwz 4, 28(31)
  016de98  addic 3, 3, 32608
  016de9c  bl 0x6d7e0
  016dea0  nop
  016dea4  lwz 3, 64(31)
  016dea8  cmpwi 3, 0
  016deac  bf 2, 0x16dec8
  016deb0  addic 3, 31, 96
  016deb4  bl 0x47b98
  016deb8  nop
  016debc  addic 3, 31, 112
  016dec0  bl 0x47c08
  016dec4  nop
  016dec8  bl 0xdafb8
  016decc  nop
  016ded0  lis 3, 150
  016ded4  addic 3, 3, -14912
  016ded8  lwz 3, 8(3)
  016dedc  rlwinm 4, 3, 0, 30, 30
  016dee0  cmpwi 4, 0
  016dee4  bf 2, 0x16df0c
  016dee8  rlwinm 3, 3, 0, 27, 27
  016deec  cmpwi 3, 0
  016def0  bt 2, 0x16f940
  016def4  lis 3, 150
  016def8  addic 3, 3, 19008
  016defc  lwz 3, 164(3)
  016df00  rlwinm 3, 3, 0, 22, 22
  016df04  cmpwi 3, 0
  016df08  bt 2, 0x16f940
  016df0c  bl 0x166e88
  016df10  nop
  016df14  b 0x16f940
  016df18  lis 25, 230
  016df1c  lbz 3, -22064(25)
  016df20  cmpwi 3, 0
  016df24  bf 2, 0x16e034
  016df28  lis 3, 150
  016df2c  addic 3, 3, 14024
  016df30  lhz 3, 8(3)
  016df34  cmpwi 3, 0
  016df38  bf 2, 0x16e034
  016df3c  lis 3, 230
  016df40  lbz 3, -22063(3)
  016df44  cmpwi 3, 0
  016df48  bt 2, 0x16e034
  016df4c  lis 3, 163
  016df50  lis 4, 163
  016df54  addic 3, 3, 21696
  016df58  addic 30, 26, -22960
  016df5c  addic 31, 4, 19456
  016df60  li 28, 0
  016df64  lbz 3, 12(3)
  016df68  lwz 29, 24(30)
  016df6c  slwi 3, 3, 2
  016df70  lwzx 31, 31, 3
  016df74  lwz 3, 0(29)
  016df78  cmpwi 3, 0
  016df7c  bt 2, 0x16dfac
  016df80  addic 4, 31, 72
  016df84  slwi 5, 28, 2
  016df88  addc 4, 4, 5
  016df8c  lwz 5, 24(30)
  016df90  clrldi 6, 4, 32
  016df94  addc 5, 5, 3
  016df98  ori 3, 31, 0
  016df9c  ori 4, 28, 0
  016dfa0  stw 5, 0(6)
  016dfa4  bl 0xdcb64
  016dfa8  nop
  016dfac  addic 28, 28, 1
  016dfb0  addic 29, 29, 4
  016dfb4  extsw 28, 28
  016dfb8  cmpwi 28, 16
  016dfbc  bt 0, 0x16df74
  016dfc0  lwz 5, 20(30)
  016dfc4  li 4, 12
  016dfc8  stw 5, 36(30)
  016dfcc  ori 3, 5, 0
  016dfd0  bl 0xef810
  016dfd4  nop
  016dfd8  li 4, 64
  016dfdc  lwz 5, 36(30)
  016dfe0  ori 3, 5, 0
  016dfe4  sth 4, 50(5)
  016dfe8  lwz 4, 28(30)
  016dfec  lfs 1, 72(4)
  016dff0  stfs 1, 72(5)
  016dff4  bl 0xf31a8
  016dff8  nop
  016dffc  lis 4, 32
  016e000  lwz 3, 36(30)
  016e004  li 5, 14
  016e008  li 31, 0
  016e00c  ori 4, 4, 8224
  016e010  ori 7, 31, 0
  016e014  ori 6, 5, 0
  016e018  bl 0xf1ea0
  016e01c  nop
  016e020  li 3, 1
  016e024  lis 4, 230
  016e028  stb 3, -22064(25)
  016e02c  stb 31, -22063(4)
  016e030  bl 0x16c4e8
  016e034  addic 31, 26, -22960
  016e038  lwz 3, 28(31)
  016e03c  bl 0xf98d8
  016e040  nop
  016e044  lwz 3, 28(31)
  016e048  bl 0xf31a8
  016e04c  nop
  016e050  lbz 3, -22064(25)
  016e054  cmpwi 3, 1
  016e058  bf 2, 0x16e1ac
  016e05c  lis 4, 230
  016e060  lis 3, 116
  016e064  addic 3, 3, -30624
  016e068  lbz 4, -22062(4)
  016e06c  cmpwi 4, 0
  016e070  bt 2, 0x16e090
  016e074  lis 4, -16410
  016e078  lis 5, 116
  016e07c  lis 6, -16615
  016e080  ori 4, 4, 26214
  016e084  ori 6, 6, 39322
  016e088  stw 4, -30624(5)
  016e08c  stw 6, 8(3)
  016e090  lis 4, 116
  016e094  lwz 5, 28(31)
  016e098  lfs 1, -30624(4)
  016e09c  addic 4, 5, 192
  016e0a0  lfs 2, 4(3)
  016e0a4  lfs 3, 8(3)
  016e0a8  lfs 4, 0(4)
  016e0ac  lfs 5, 16(4)
  016e0b0  fmuls 4, 4, 1
  016e0b4  lfs 6, 32(4)
  016e0b8  fmuls 5, 5, 2
  016e0bc  lfs 7, 4(4)
  016e0c0  lfs 8, 20(4)
  016e0c4  fmuls 6, 6, 3
  016e0c8  lwz 6, 36(31)
  016e0cc  fmuls 7, 7, 1
  016e0d0  fmuls 8, 8, 2
  016e0d4  lfs 9, 12(4)
  016e0d8  addic 7, 6, 16
  016e0dc  fmuls 9, 9, 1
  016e0e0  fadds 4, 4, 5
  016e0e4  lfs 5, 28(4)
  016e0e8  lfs 10, 8(4)
  016e0ec  fmuls 5, 5, 2
  016e0f0  lfs 11, 24(4)
  016e0f4  fmuls 1, 10, 1
  016e0f8  lfs 10, 36(4)
  016e0fc  fadds 7, 7, 8
  016e100  fmuls 2, 11, 2
  016e104  lfs 8, 44(4)
  016e108  fmuls 10, 10, 3
  016e10c  fadds 4, 4, 6
  016e110  fmuls 6, 8, 3
  016e114  lfs 8, 40(4)
  016e118  fadds 5, 9, 5
  016e11c  addic 4, 6, 16
  016e120  fmuls 3, 8, 3
  016e124  fadds 1, 1, 2
  016e128  lfs 2, 12(3)
  016e12c  fadds 7, 7, 10
  016e130  addic 3, 5, 16
  016e134  addic 5, 5, 16
  016e138  stfs 4, 0(7)
  016e13c  fadds 4, 5, 6
  016e140  fadds 1, 1, 3
  016e144  stfs 7, 4(4)
  016e148  fadds 2, 4, 2
  016e14c  stfs 1, 8(4)
  016e150  stfs 2, 12(4)
  016e154  lfs 1, 0(7)
  016e158  lfs 2, 0(3)
  016e15c  fadds 1, 1, 2
  016e160  ori 3, 6, 0
  016e164  stfs 1, 0(7)
  016e168  lfs 1, 4(4)
  016e16c  lfs 2, 4(5)
  016e170  fadds 1, 1, 2
  016e174  stfs 1, 4(7)
  016e178  lfs 1, 8(4)
  016e17c  lfs 2, 8(5)
  016e180  fadds 1, 1, 2
  016e184  stfs 1, 8(7)
  016e188  lfs 1, 12(4)
  016e18c  stfs 1, 12(7)
  016e190  bl 0xf98d8
  016e194  nop
  016e198  lwz 3, 36(31)
  016e19c  bl 0xf31a8
  016e1a0  nop
  016e1a4  lwz 3, 36(31)
  016e1a8  bl 0x16bd58
  016e1ac  lis 3, 144
  016e1b0  lwz 4, -23196(3)
  016e1b4  lbz 4, 17(4)
  016e1b8  cmpwi 4, 4
  016e1bc  bt 2, 0x16e1d0
  016e1c0  lwz 4, -23196(3)
  016e1c4  lbz 4, 17(4)
  016e1c8  cmpwi 4, 5
  016e1cc  bf 2, 0x16e1e8
  016e1d0  lwz 3, -23196(3)
  016e1d4  lwz 3, 12(3)
  016e1d8  cmpwi 3, 0
  016e1dc  bf 2, 0x16e1e8
  016e1e0  lfs 26, 16(27)
  016e1e4  b 0x16e1ec
  016e1e8  lfs 26, 20(27)
  016e1ec  lis 3, 116
  016e1f0  lwz 5, 28(31)
  016e1f4  addic 4, 3, -30576
  016e1f8  addic 6, 5, 192
  016e1fc  stfs 26, 4(4)
  016e200  lfs 1, -30576(3)
  016e204  lfs 2, 0(6)
  016e208  lfs 3, 16(6)
  016e20c  fmuls 2, 2, 1
  016e210  lfs 4, 32(6)
  016e214  fmuls 3, 3, 26
  016e218  lfs 5, 8(4)
  016e21c  lfs 6, 4(6)
  016e220  lfs 7, 20(6)
  016e224  lwz 3, 32(31)
  016e228  lfs 8, 12(6)
  016e22c  fmuls 4, 4, 5
  016e230  addic 7, 3, 16
  016e234  fmuls 8, 8, 1
  016e238  fmuls 6, 6, 1
  016e23c  fmuls 7, 7, 26
  016e240  fadds 2, 2, 3
  016e244  lfs 3, 28(6)
  016e248  lfs 9, 8(6)
  016e24c  fmuls 3, 3, 26
  016e250  lfs 10, 24(6)
  016e254  fmuls 1, 9, 1
  016e258  lfs 9, 36(6)
  016e25c  lfs 11, 44(6)
  016e260  fmuls 10, 10, 26
  016e264  lfs 12, 40(6)
  016e268  fmuls 9, 9, 5
  016e26c  fadds 6, 6, 7
  016e270  addic 6, 5, 16
  016e274  lfs 7, 12(4)
  016e278  fadds 2, 2, 4
  016e27c  fmuls 4, 11, 5
  016e280  addic 4, 3, 16
  016e284  fmuls 5, 12, 5
  016e288  fadds 3, 8, 3
  016e28c  addic 5, 5, 16
  016e290  fadds 1, 1, 10
  016e294  fadds 6, 6, 9
  016e298  lis 30, 114
  016e29c  stfs 2, 0(7)
  016e2a0  fadds 3, 3, 4
  016e2a4  fadds 1, 1, 5
  016e2a8  stfs 6, 4(4)
  016e2ac  fadds 2, 3, 7
  016e2b0  stfs 1, 8(4)
  016e2b4  stfs 2, 12(4)
  016e2b8  lfs 1, 0(7)
  016e2bc  lfs 2, 0(6)
  016e2c0  fadds 1, 1, 2
  016e2c4  stfs 1, 0(7)
  016e2c8  lfs 1, 4(4)
  016e2cc  lfs 2, 4(5)
  016e2d0  fadds 1, 1, 2
  016e2d4  stfs 1, 4(7)
  016e2d8  lfs 1, 8(4)
  016e2dc  lfs 2, 8(5)
  016e2e0  fadds 1, 1, 2
  016e2e4  stfs 1, 8(7)
  016e2e8  lfs 1, 12(4)
  016e2ec  stfs 1, 12(7)
  016e2f0  lfs 31, 24(27)
  016e2f4  lfs 2, -3056(30)
  016e2f8  lfs 1, 64(3)
  016e2fc  fmuls 2, 2, 31
  016e300  bl 0x502578
  016e304  nop
  016e308  lwz 3, 32(31)
  016e30c  lis 4, -16712
  016e310  ori 4, 4, 20972
  016e314  stfs 1, 64(3)
  016e318  lfs 30, 28(27)
  016e31c  stw 4, 68(3)
  016e320  lfs 26, 32(27)
  016e324  lfs 2, -3056(30)
  016e328  lfs 3, 72(3)
  016e32c  fmuls 2, 2, 26
  016e330  fmr 1, 3
  016e334  bl 0x502578
  016e338  nop
  016e33c  lwz 4, 32(31)
  016e340  ori 3, 4, 0
  016e344  stfs 1, 72(4)
  016e348  bl 0xf31a8
  016e34c  nop
  016e350  lis 3, 116
  016e354  lwz 4, 28(31)
  016e358  addic 5, 3, -30560
  016e35c  addic 6, 4, 192
  016e360  lfs 1, -30560(3)
  016e364  lfs 2, 4(5)
  016e368  lfs 3, 0(6)
  016e36c  lfs 4, 16(6)
  016e370  fmuls 3, 3, 1
  016e374  fmuls 4, 4, 2
  016e378  lfs 5, 32(6)
  016e37c  lfs 6, 8(5)
  016e380  lfs 7, 4(6)
  016e384  lfs 8, 20(6)
  016e388  fmuls 5, 5, 6
  016e38c  lwz 3, 32(31)
  016e390  fmuls 7, 7, 1
  016e394  fmuls 8, 8, 2
  016e398  lfs 9, 12(6)
  016e39c  addic 7, 3, 1296
  016e3a0  fmuls 9, 9, 1
  016e3a4  fadds 3, 3, 4
  016e3a8  lfs 4, 28(6)
  016e3ac  lfs 10, 8(6)
  016e3b0  fmuls 4, 4, 2
  016e3b4  lfs 11, 24(6)
  016e3b8  fmuls 1, 10, 1
  016e3bc  lfs 10, 36(6)
  016e3c0  fmuls 2, 11, 2
  016e3c4  fadds 7, 7, 8
  016e3c8  lfs 8, 44(6)
  016e3cc  fmuls 10, 10, 6
  016e3d0  fadds 3, 3, 5
  016e3d4  fmuls 5, 8, 6
  016e3d8  lfs 8, 40(6)
  016e3dc  fadds 4, 9, 4
  016e3e0  addic 6, 4, 16
  016e3e4  fmuls 6, 8, 6
  016e3e8  addic 4, 4, 16
  016e3ec  fadds 1, 1, 2
  016e3f0  lfs 2, 12(5)
  016e3f4  addic 5, 3, 1296
  016e3f8  fadds 7, 7, 10
  016e3fc  stfs 3, 0(7)
  016e400  fadds 3, 4, 5
  016e404  fadds 1, 1, 6
  016e408  stfs 7, 4(5)
  016e40c  fadds 2, 3, 2
  016e410  stfs 1, 8(5)
  016e414  stfs 2, 12(5)
  016e418  lfs 1, 0(7)
  016e41c  lfs 2, 0(6)
  016e420  fadds 1, 1, 2
  016e424  stfs 1, 0(7)
  016e428  lfs 1, 4(5)
  016e42c  lfs 2, 4(4)
  016e430  fadds 1, 1, 2
  016e434  stfs 1, 4(7)
  016e438  lfs 1, 8(5)
  016e43c  lfs 2, 8(4)
  016e440  fadds 1, 1, 2
  016e444  stfs 1, 8(7)
  016e448  lfs 1, 12(5)
  016e44c  stfs 1, 12(7)
  016e450  lfs 1, 1344(3)
  016e454  lfs 2, -3056(30)
  016e458  fmuls 2, 2, 31
  016e45c  bl 0x502578
  016e460  nop
  016e464  lwz 3, 32(31)
  016e468  stfs 1, 1344(3)
  016e46c  stfs 30, 1348(3)
  016e470  lfs 1, -3056(30)
  016e474  fmuls 3, 1, 26
  016e478  lfs 1, 1352(3)
  016e47c  fmr 2, 3
  016e480  bl 0x502578
  016e484  nop
  016e488  lwz 4, 32(31)
  016e48c  addic 3, 4, 1280
  016e490  stfs 1, 1352(4)
  016e494  bl 0xf31a8
  016e498  nop
  016e49c  lis 29, 230
  016e4a0  lfs 2, -3056(30)
  016e4a4  fmuls 2, 2, 26
  016e4a8  lfs 1, -22192(29)
  016e4ac  bl 0x502578
  016e4b0  nop
  016e4b4  lwz 3, 32(31)
  016e4b8  stfs 1, -22192(29)
  016e4bc  addic 3, 3, 256
  016e4c0  bl 0xf98d8
  016e4c4  nop
  016e4c8  lwz 3, 32(31)
  016e4cc  lbz 4, 339(3)
  016e4d0  cmpwi 4, 0
  016e4d4  bf 2, 0x16e500
  016e4d8  lbz 4, 368(3)
  016e4dc  rlwinm 4, 4, 0, 30, 30
  016e4e0  cmpwi 4, 0
  016e4e4  bt 2, 0x16e500
  016e4e8  addic 3, 3, 256
  016e4ec  li 4, 1
  016e4f0  li 5, 0
  016e4f4  li 6, 8
  016e4f8  bl 0xfddc0
  016e4fc  nop
  016e500  lwz 3, 32(31)
  016e504  addic 3, 3, 256
  016e508  bl 0xf31a8
  016e50c  nop
  016e510  lfs 3, -22192(29)
  016e514  lfs 31, 36(27)
  016e518  fmr 1, 3
  016e51c  li 3, 0
  016e520  lfs 25, 4(27)
  016e524  fmr 2, 25
  016e528  stw 3, 112(1)
  016e52c  fsubs 4, 31, 1
  016e530  fcmpu 0, 1, 4
  016e534  bt 0, 0x16e53c
  016e538  fmr 1, 4
  016e53c  lfs 30, 40(27)
  016e540  fsubs 3, 30, 3
  016e544  fcmpu 0, 1, 3
  016e548  bt 1, 0x16e550
  016e54c  fmr 1, 3
  016e550  fmuls 3, 1, 1
  016e554  fmr 24, 31
  016e558  lis 3, 116
  016e55c  lfs 31, 44(27)
  016e560  lis 5, 116
  016e564  lfs 29, 48(27)
  016e568  addic 30, 3, -30592
  016e56c  lfs 28, 52(27)
  016e570  lfs 27, 56(27)
  016e574  lwz 4, 88(31)
  016e578  fmuls 4, 3, 1
  016e57c  addic 28, 31, 208
  016e580  fmuls 5, 3, 4
  016e584  fmuls 4, 4, 31
  016e588  fmuls 6, 3, 5
  016e58c  fadds 1, 1, 4
  016e590  fmuls 4, 5, 29
  016e594  fmuls 3, 3, 6
  016e598  fmuls 5, 6, 28
  016e59c  fadds 1, 1, 4
  016e5a0  lfs 4, -30592(3)
  016e5a4  slwi 3, 4, 4
  016e5a8  lfs 6, 112(1)
  016e5ac  addic 4, 5, -28144
  016e5b0  extsw 5, 3
  016e5b4  addic 6, 4, 32
  016e5b8  fadds 4, 4, 6
  016e5bc  addc 3, 31, 5
  016e5c0  fmuls 3, 3, 27
  016e5c4  fadds 1, 1, 5
  016e5c8  lfs 5, 4(30)
  016e5cc  fadds 2, 5, 2
  016e5d0  lfs 5, 8(30)
  016e5d4  lwz 3, 208(3)
  016e5d8  slwi 3, 3, 6
  016e5dc  addc 3, 6, 3
  016e5e0  fadds 1, 1, 3
  016e5e4  clrldi 3, 3, 32
  016e5e8  lwz 6, 28(31)
  016e5ec  addic 7, 6, 192
  016e5f0  lfs 3, 0(3)
  016e5f4  lfs 6, 4(3)
  016e5f8  fadds 3, 4, 3
  016e5fc  fadds 2, 2, 6
  016e600  lfs 4, 8(3)
  016e604  fmuls 1, 1, 26
  016e608  lfs 6, 0(7)
  016e60c  lfs 7, 16(7)
  016e610  addic 3, 6, 16
  016e614  addic 6, 6, 16
  016e618  fmuls 6, 6, 3
  016e61c  fmuls 7, 7, 2
  016e620  fadds 1, 5, 1
  016e624  lfs 5, 32(7)
  016e628  lfs 8, 12(30)
  016e62c  lfs 9, 4(7)
  016e630  lfs 10, 20(7)
  016e634  fmuls 10, 10, 2
  016e638  fadds 6, 6, 7
  016e63c  fadds 1, 1, 4
  016e640  fmuls 4, 9, 3
  016e644  lfs 9, 12(7)
  016e648  lfs 7, 28(7)
  016e64c  fmuls 9, 9, 3
  016e650  fmuls 7, 7, 2
  016e654  lwz 8, 32(31)
  016e658  lfs 11, 8(7)
  016e65c  lfs 12, 24(7)
  016e660  addic 9, 8, 528
  016e664  fmuls 3, 11, 3
  016e668  lfs 11, 36(7)
  016e66c  fmuls 2, 12, 2
  016e670  lfs 12, 44(7)
  016e674  fmuls 11, 11, 1
  016e678  lfs 13, 40(7)
  016e67c  fadds 4, 4, 10
  016e680  addic 7, 8, 528
  016e684  fmuls 10, 12, 1
  016e688  fadds 7, 9, 7
  016e68c  fmuls 5, 5, 1
  016e690  fmuls 1, 13, 1
  016e694  fadds 2, 3, 2
  016e698  fadds 3, 4, 11
  016e69c  fadds 4, 7, 10
  016e6a0  fadds 5, 6, 5
  016e6a4  fadds 1, 2, 1
  016e6a8  fadds 2, 4, 8
  016e6ac  stfs 5, 0(9)
  016e6b0  stfs 3, 4(7)
  016e6b4  stfs 1, 8(7)
  016e6b8  stfs 2, 12(7)
  016e6bc  lfs 1, 0(3)
  016e6c0  lfs 2, 0(9)
  016e6c4  fadds 1, 2, 1
  016e6c8  lfs 2, -22192(29)
  016e6cc  addic 3, 8, 512
  016e6d0  stfs 1, 0(9)
  016e6d4  lfs 1, 4(7)
  016e6d8  lfs 3, 4(6)
  016e6dc  fadds 1, 1, 3
  016e6e0  stfs 1, 4(9)
  016e6e4  lfs 1, 8(7)
  016e6e8  lfs 3, 8(6)
  016e6ec  fadds 1, 1, 3
  016e6f0  stfs 1, 8(9)
  016e6f4  lfs 1, 12(7)
  016e6f8  stfs 1, 12(9)
  016e6fc  lwzx 6, 28, 5
  016e700  slwi 6, 6, 6
  016e704  extsw 6, 6
  016e708  addc 6, 4, 6
  016e70c  lfs 1, 16(6)
  016e710  stfs 1, 576(8)
  016e714  lwzx 5, 28, 5
  016e718  slwi 5, 5, 6
  016e71c  extsw 5, 5
  016e720  addc 4, 4, 5
  016e724  lfs 1, 20(4)
  016e728  stfs 2, 584(8)
  016e72c  stfs 1, 580(8)
  016e730  bl 0xf31a8
  016e734  nop
  016e738  lfs 1, -22192(29)
  016e73c  fmr 2, 1
  016e740  fsubs 3, 24, 2
  016e744  fcmpu 0, 2, 3
  016e748  bt 0, 0x16e750
  016e74c  fmr 2, 3
  016e750  fsubs 1, 30, 1
  016e754  fcmpu 0, 2, 1
  016e758  bt 1, 0x16e760
  016e75c  fmr 2, 1
  016e760  fmuls 1, 2, 2
  016e764  lis 3, 116
  016e768  lwz 4, 88(31)
  016e76c  lfs 5, 4(30)
  016e770  lis 5, 116
  016e774  slwi 4, 4, 4
  016e778  fadds 5, 5, 25
  016e77c  extsw 4, 4
  016e780  fmuls 3, 1, 2
  016e784  fmuls 4, 1, 3
  016e788  fmuls 3, 3, 31
  016e78c  fmuls 6, 1, 4
  016e790  fadds 2, 2, 3
  016e794  fmuls 3, 4, 29
  016e798  lfs 4, -30592(3)
  016e79c  lfs 7, 8(30)
  016e7a0  fadds 4, 4, 25
  016e7a4  fmuls 1, 1, 6
  016e7a8  fmuls 6, 6, 28
  016e7ac  fadds 2, 2, 3
  016e7b0  lfs 3, 12(30)
  016e7b4  addic 30, 5, -25776
  016e7b8  lwzx 5, 28, 4
  016e7bc  addic 3, 30, 32
  016e7c0  sldi 5, 5, 4
  016e7c4  addc 6, 5, 5
  016e7c8  fmuls 1, 1, 27
  016e7cc  addc 5, 5, 6
  016e7d0  fadds 2, 2, 6
  016e7d4  addc 3, 3, 5
  016e7d8  lwz 5, 28(31)
  016e7dc  clrldi 3, 3, 32
  016e7e0  addic 6, 5, 192
  016e7e4  fadds 1, 2, 1
  016e7e8  lfs 2, 0(3)
  016e7ec  lfs 6, 4(3)
  016e7f0  fadds 2, 4, 2
  016e7f4  fadds 4, 5, 6
  016e7f8  lfs 5, 8(3)
  016e7fc  lfs 6, 0(6)
  016e800  addic 3, 5, 16
  016e804  addic 5, 5, 16
  016e808  fmuls 1, 1, 26
  016e80c  fmuls 6, 6, 2
  016e810  fadds 1, 7, 1
  016e814  lfs 7, 16(6)
  016e818  lfs 8, 32(6)
  016e81c  fmuls 7, 7, 4
  016e820  lfs 9, 4(6)
  016e824  lfs 10, 20(6)
  016e828  fmuls 9, 9, 2
  016e82c  fmuls 10, 10, 4
  016e830  fadds 1, 1, 5
  016e834  lfs 5, 12(6)
  016e838  lwz 7, 32(31)
  016e83c  fadds 6, 6, 7
  016e840  lfs 7, 28(6)
  016e844  fmuls 5, 5, 2
  016e848  lfs 11, 8(6)
  016e84c  fmuls 7, 7, 4
  016e850  lfs 12, 24(6)
  016e854  fmuls 2, 11, 2
  016e858  addic 8, 7, 784
  016e85c  lfs 11, 36(6)
  016e860  fmuls 4, 12, 4
  016e864  lfs 12, 44(6)
  016e868  fadds 9, 9, 10
  016e86c  fmuls 10, 11, 1
  016e870  fmuls 11, 12, 1
  016e874  fmuls 8, 8, 1
  016e878  lfs 12, 40(6)
  016e87c  addic 6, 7, 784
  016e880  fmuls 1, 12, 1
  016e884  fadds 5, 5, 7
  016e888  fadds 2, 2, 4
  016e88c  fadds 4, 9, 10
  016e890  fadds 6, 6, 8
  016e894  fadds 5, 5, 11
  016e898  fadds 1, 2, 1
  016e89c  stfs 6, 0(8)
  016e8a0  stfs 4, 4(6)
  016e8a4  fadds 2, 5, 3
  016e8a8  stfs 1, 8(6)
  016e8ac  stfs 2, 12(6)
  016e8b0  lfs 1, 0(3)
  016e8b4  lfs 2, 0(8)
  016e8b8  fadds 1, 2, 1
  016e8bc  addic 3, 7, 768
  016e8c0  stfs 1, 0(8)
  016e8c4  lfs 1, 4(6)
  016e8c8  lfs 2, 4(5)
  016e8cc  fadds 1, 1, 2
  016e8d0  lfs 2, -22192(29)
  016e8d4  stfs 1, 4(8)
  016e8d8  lfs 1, 8(6)
  016e8dc  lfs 3, 8(5)
  016e8e0  fadds 1, 1, 3
  016e8e4  stfs 1, 8(8)
  016e8e8  lfs 1, 12(6)
  016e8ec  stfs 1, 12(8)
  016e8f0  lwzx 5, 28, 4
  016e8f4  sldi 5, 5, 4
  016e8f8  addc 6, 5, 5
  016e8fc  addc 5, 5, 6
  016e900  extsw 5, 5
  016e904  addc 5, 30, 5
  016e908  lfs 1, 16(5)
  016e90c  stfs 1, 832(7)
  016e910  lwzx 4, 28, 4
  016e914  sldi 4, 4, 4
  016e918  addc 5, 4, 4
  016e91c  addc 4, 4, 5
  016e920  extsw 4, 4
  016e924  addc 4, 30, 4
  016e928  lfs 1, 20(4)
  016e92c  stfs 2, 840(7)
  016e930  stfs 1, 836(7)
  016e934  bl 0xf98d8
  016e938  nop
  016e93c  lwz 3, 32(31)
  016e940  lbz 4, 851(3)
  016e944  cmpwi 4, 0
  016e948  bf 2, 0x16e974
  016e94c  lbz 4, 880(3)
  016e950  rlwinm 4, 4, 0, 30, 30
  016e954  cmpwi 4, 0
  016e958  bt 2, 0x16e974
  016e95c  addic 3, 3, 768
  016e960  li 4, 1
  016e964  li 6, 8
  016e968  li 5, 0
  016e96c  bl 0xfddc0
  016e970  nop
  016e974  lwz 3, 32(31)
  016e978  addic 3, 3, 768
  016e97c  bl 0xf31a8
  016e980  nop
  016e984  lwz 3, 88(31)
  016e988  lwz 4, 32(31)
  016e98c  slwi 3, 3, 4
  016e990  extsw 3, 3
  016e994  lwzx 3, 28, 3
  016e998  sldi 5, 3, 4
  016e99c  sldi 6, 3, 4
  016e9a0  addc 7, 5, 5
  016e9a4  sldi 3, 3, 4
  016e9a8  addc 8, 6, 6
  016e9ac  addc 5, 5, 7
  016e9b0  addc 7, 3, 3
  016e9b4  addc 6, 6, 8
  016e9b8  addc 3, 3, 7
  016e9bc  extsw 5, 5
  016e9c0  extsw 6, 6
  016e9c4  extsw 3, 3
  016e9c8  addc 6, 30, 6
  016e9cc  addc 7, 30, 3
  016e9d0  lfsx 31, 30, 5
  016e9d4  addic 5, 4, 960
  016e9d8  addic 4, 4, 832
  016e9dc  lfs 30, 4(6)
  016e9e0  ori 3, 5, 0
  016e9e4  lfs 29, 8(7)
  016e9e8  bl 0x500b64
  016e9ec  nop
  016e9f0  lwz 3, 32(31)
  016e9f4  addic 4, 3, 960
  016e9f8  addic 5, 3, 784
  016e9fc  addic 3, 3, 784
  016ea00  lfs 1, 0(4)
  016ea04  lfs 2, 16(4)
  016ea08  fmuls 1, 1, 31
  016ea0c  fmuls 2, 2, 30
  016ea10  lfs 3, 32(4)
  016ea14  lfs 4, 4(4)
  016ea18  fmuls 3, 3, 29
  016ea1c  lfs 5, 20(4)
  016ea20  fmuls 4, 4, 31
  016ea24  lfs 6, 36(4)
  016ea28  fmuls 5, 5, 30
  016ea2c  fmuls 6, 6, 29
  016ea30  lfs 7, 8(4)
  016ea34  fmuls 7, 7, 31
  016ea38  fadds 1, 1, 2
  016ea3c  lfs 2, 24(4)
  016ea40  lfs 8, 0(5)
  016ea44  fmuls 2, 2, 30
  016ea48  fadds 4, 4, 5
  016ea4c  lfs 5, 40(4)
  016ea50  fadds 1, 1, 3
  016ea54  fmuls 3, 5, 29
  016ea58  fadds 2, 7, 2
  016ea5c  fadds 4, 4, 6
  016ea60  fadds 1, 8, 1
  016ea64  fadds 2, 2, 3
  016ea68  stfs 1, 0(5)
  016ea6c  lfs 1, 4(3)
  016ea70  fadds 1, 1, 4
  016ea74  stfs 1, 4(5)
  016ea78  lfs 1, 8(3)
  016ea7c  fadds 1, 1, 2
  016ea80  stfs 1, 8(5)
  016ea84  lfs 1, 12(3)
  016ea88  stfs 1, 12(5)
  016ea8c  lwz 3, 4(31)
  016ea90  lwz 4, 92(31)
  016ea94  addic 3, 3, 1
  016ea98  cmpwi 4, 0
  016ea9c  stw 3, 4(31)
  016eaa0  bf 2, 0x16f0d0
  016eaa4  lis 3, 230
  016eaa8  lbz 3, -22204(3)
  016eaac  cmpwi 3, 0
  016eab0  bf 2, 0x16f0d0
  016eab4  lwz 3, 464(31)
  016eab8  cmpwi 3, 7
  016eabc  bt 1, 0x16ed60
  016eac0  lis 30, 150
  016eac4  addic 30, 30, 19008
  016eac8  lwz 4, 196(30)
  016eacc  rlwinm 4, 4, 0, 18, 18
  016ead0  cmpwi 4, 0
  016ead4  bt 2, 0x16ec14
  016ead8  addic 3, 3, -1
  016eadc  lwz 4, 88(31)
  016eae0  cmpw 4, 3
  016eae4  bf 0, 0x16ec14
  016eae8  lis 4, 230
  016eaec  li 29, 1
  016eaf0  li 25, 0
  016eaf4  ori 3, 25, 0
  016eaf8  stb 29, -22061(4)
  016eafc  bl 0x16c4e8
  016eb00  lwz 4, 88(31)
  016eb04  ori 3, 29, 0
  016eb08  lwz 5, 28(31)
  016eb0c  addic 6, 4, 1
  016eb10  ori 4, 25, 0
  016eb14  stw 6, 88(31)
  016eb18  bl 0x15d12c
  016eb1c  nop
  016eb20  lis 4, 115
  016eb24  addic 4, 4, 21888
  016eb28  lwz 3, 88(31)
  016eb2c  slwi 3, 3, 4
  016eb30  extsw 3, 3
  016eb34  lwzx 3, 28, 3
  016eb38  sldi 5, 3, 4
  016eb3c  sldi 3, 3, 2
  016eb40  addc 3, 5, 3
  016eb44  extsw 3, 3
  016eb48  addc 3, 4, 3
  016eb4c  lwz 3, 16(3)
  016eb50  extsw 3, 3
  016eb54  bl 0x7b740
  016eb58  nop
  016eb5c  bl 0x16bc20
  016eb60  lwz 3, 80(31)
  016eb64  cmpwi 3, -1
  016eb68  bt 2, 0x16eb7c
  016eb6c  li 4, 0
  016eb70  extsw 3, 3
  016eb74  bl 0xc8b28
  016eb78  nop
  016eb7c  li 3, -1
  016eb80  lwz 4, 88(31)
  016eb84  slwi 4, 4, 4
  016eb88  stw 3, 80(31)
  016eb8c  extsw 3, 4
  016eb90  addc 4, 31, 3
  016eb94  lbz 4, 212(4)
  016eb98  cmpwi 4, 1
  016eb9c  bf 2, 0x16ec14
  016eba0  lwzx 3, 28, 3
  016eba4  lis 4, 0
  016eba8  sldi 6, 3, 3
  016ebac  ori 4, 4, 60000
  016ebb0  addc 7, 6, 6
  016ebb4  lis 5, 115
  016ebb8  addc 6, 6, 7
  016ebbc  lis 7, 151
  016ebc0  addc 4, 3, 4
  016ebc4  lis 10, 112
  016ebc8  addic 12, 7, -16212
  016ebcc  slwi 3, 3, 2
  016ebd0  addic 8, 5, 32048
  016ebd4  extsw 29, 6
  016ebd8  addic 6, 10, 22216
  016ebdc  addc 3, 12, 3
  016ebe0  li 9, 48
  016ebe4  addc 10, 8, 29
  016ebe8  clrldi 8, 3, 32
  016ebec  ori 3, 9, 0
  016ebf0  lis 5, 112
  016ebf4  lis 11, 112
  016ebf8  lhz 9, 14(10)
  016ebfc  extsw 4, 4
  016ec00  addic 5, 5, 22536
  016ec04  addic 7, 11, 22664
  016ec08  bl 0xc8444
  016ec0c  nop
  016ec10  stw 3, 80(31)
  016ec14  lwz 3, 196(30)
  016ec18  rlwinm 3, 3, 0, 16, 16
  016ec1c  cmpwi 3, 0
  016ec20  bt 2, 0x16f028
  016ec24  lwz 3, 88(31)
  016ec28  cmpwi 3, 0
  016ec2c  bf 1, 0x16f028
  016ec30  lis 4, 230
  016ec34  li 30, 1
  016ec38  li 29, 0
  016ec3c  ori 3, 29, 0
  016ec40  stb 30, -22061(4)
  016ec44  bl 0x16c4e8
  016ec48  lwz 4, 88(31)
  016ec4c  ori 3, 30, 0
  016ec50  lwz 5, 28(31)
  016ec54  addic 6, 4, -1
  016ec58  ori 4, 29, 0
  016ec5c  stw 6, 88(31)
  016ec60  bl 0x15d12c
  016ec64  nop
  016ec68  lis 4, 115
  016ec6c  addic 4, 4, 21888
  016ec70  lwz 3, 88(31)
  016ec74  slwi 3, 3, 4
  016ec78  extsw 3, 3
  016ec7c  lwzx 3, 28, 3
  016ec80  sldi 5, 3, 4
  016ec84  sldi 3, 3, 2
  016ec88  addc 3, 5, 3
  016ec8c  extsw 3, 3
  016ec90  addc 3, 4, 3
  016ec94  lwz 3, 16(3)
  016ec98  extsw 3, 3
  016ec9c  bl 0x7b740
  016eca0  nop
  016eca4  bl 0x16bc20
  016eca8  lwz 3, 80(31)
  016ecac  cmpwi 3, -1
  016ecb0  bt 2, 0x16ecc4
  016ecb4  li 4, 0
  016ecb8  extsw 3, 3
  016ecbc  bl 0xc8b28
  016ecc0  nop
  016ecc4  li 3, -1
  016ecc8  lwz 4, 88(31)
  016eccc  slwi 4, 4, 4
  016ecd0  stw 3, 80(31)
  016ecd4  extsw 3, 4
  016ecd8  addc 4, 31, 3
  016ecdc  lbz 4, 212(4)
  016ece0  cmpwi 4, 1
  016ece4  bf 2, 0x16f028
  016ece8  lwzx 3, 28, 3
  016ecec  lis 4, 0
  016ecf0  sldi 6, 3, 3
  016ecf4  ori 4, 4, 60000
  016ecf8  addc 7, 6, 6
  016ecfc  lis 5, 115
  016ed00  addc 6, 6, 7
  016ed04  lis 7, 151
  016ed08  addc 4, 3, 4
  016ed0c  lis 10, 112
  016ed10  addic 12, 7, -16212
  016ed14  slwi 3, 3, 2
  016ed18  addic 8, 5, 32048
  016ed1c  extsw 30, 6
  016ed20  addic 6, 10, 22216
  016ed24  addc 3, 12, 3
  016ed28  li 9, 48
  016ed2c  addc 10, 8, 30
  016ed30  clrldi 8, 3, 32
  016ed34  ori 3, 9, 0
  016ed38  lis 5, 112
  016ed3c  lis 11, 112
  016ed40  lhz 9, 14(10)
  016ed44  extsw 4, 4
  016ed48  addic 5, 5, 22536
  016ed4c  addic 7, 11, 22664
  016ed50  bl 0xc8444
  016ed54  nop
  016ed58  stw 3, 80(31)
  016ed5c  b 0x16f028
  016ed60  lis 30, 150
  016ed64  addic 30, 30, 19008
  016ed68  lwz 3, 196(30)
  016ed6c  rlwinm 3, 3, 0, 18, 18
  016ed70  cmpwi 3, 0
  016ed74  bt 2, 0x16eec8
  016ed78  lwz 3, 76(31)
  016ed7c  cmpwi 3, 56
  016ed80  bt 1, 0x16eec8
  016ed84  ori 4, 3, 0
  016ed88  lis 5, 230
  016ed8c  li 3, 1
  016ed90  addic 6, 4, 56
  016ed94  li 29, 0
  016ed98  stb 3, -22061(5)
  016ed9c  lwz 5, 28(31)
  016eda0  ori 4, 29, 0
  016eda4  stw 6, 76(31)
  016eda8  bl 0x15d12c
  016edac  nop
  016edb0  ori 3, 29, 0
  016edb4  bl 0x16c4e8
  016edb8  lwz 3, 464(31)
  016edbc  lwz 4, 88(31)
  016edc0  addic 5, 3, -1
  016edc4  ori 3, 29, 0
  016edc8  cmpw 4, 5
  016edcc  bf 0, 0x16edd4
  016edd0  addic 3, 4, 1
  016edd4  slwi 4, 3, 4
  016edd8  stw 3, 88(31)
  016eddc  lis 5, 115
  016ede0  extsw 4, 4
  016ede4  addic 5, 5, 21888
  016ede8  lwzx 3, 28, 4
  016edec  sldi 4, 3, 4
  016edf0  sldi 3, 3, 2
  016edf4  addc 3, 4, 3
  016edf8  extsw 3, 3
  016edfc  addc 3, 5, 3
  016ee00  lwz 3, 16(3)
  016ee04  extsw 3, 3
  016ee08  bl 0x7b740
  016ee0c  nop
  016ee10  bl 0x16bc20
  016ee14  lwz 3, 80(31)
  016ee18  cmpwi 3, -1
  016ee1c  bt 2, 0x16ee30
  016ee20  li 4, 0
  016ee24  extsw 3, 3
  016ee28  bl 0xc8b28
  016ee2c  nop
  016ee30  li 3, -1
  016ee34  lwz 4, 88(31)
  016ee38  slwi 4, 4, 4
  016ee3c  stw 3, 80(31)
  016ee40  extsw 3, 4
  016ee44  addc 4, 31, 3
  016ee48  lbz 4, 212(4)
  016ee4c  cmpwi 4, 1
  016ee50  bf 2, 0x16eec8
  016ee54  lwzx 3, 28, 3
  016ee58  lis 4, 0
  016ee5c  lis 5, 115
  016ee60  sldi 7, 3, 3
  016ee64  ori 4, 4, 60000
  016ee68  addc 8, 7, 7
  016ee6c  lis 6, 112
  016ee70  lis 11, 151
  016ee74  addc 7, 7, 8
  016ee78  addc 4, 3, 4
  016ee7c  addic 10, 5, 32048
  016ee80  lis 8, 112
  016ee84  addic 5, 6, 22536
  016ee88  addic 11, 11, -16212
  016ee8c  slwi 3, 3, 2
  016ee90  extsw 29, 7
  016ee94  li 9, 48
  016ee98  addic 6, 8, 22216
  016ee9c  addc 8, 11, 3
  016eea0  addc 10, 10, 29
  016eea4  ori 3, 9, 0
  016eea8  lis 12, 112
  016eeac  extsw 4, 4
  016eeb0  addic 7, 12, 22664
  016eeb4  lhz 9, 14(10)
  016eeb8  clrldi 8, 8, 32
  016eebc  bl 0xc8444
  016eec0  nop
  016eec4  stw 3, 80(31)
  016eec8  lwz 3, 196(30)
  016eecc  rlwinm 3, 3, 0, 16, 16
  016eed0  cmpwi 3, 0
  016eed4  bt 2, 0x16f028
  016eed8  lwz 3, 76(31)
  016eedc  cmpwi 3, -56
  016eee0  bt 0, 0x16f028
  016eee4  ori 4, 3, 0
  016eee8  lis 5, 230
  016eeec  li 3, 1
  016eef0  addic 6, 4, -56
  016eef4  li 30, 0
  016eef8  stb 3, -22061(5)
  016eefc  lwz 5, 28(31)
  016ef00  ori 4, 30, 0
  016ef04  stw 6, 76(31)
  016ef08  bl 0x15d12c
  016ef0c  nop
  016ef10  ori 3, 30, 0
  016ef14  bl 0x16c4e8
  016ef18  lwz 3, 88(31)
  016ef1c  cmpwi 3, 0
  016ef20  bf 1, 0x16ef2c
  016ef24  addic 3, 3, -1
  016ef28  b 0x16ef34
  016ef2c  lwz 3, 464(31)
  016ef30  addic 3, 3, -1
  016ef34  slwi 4, 3, 4
  016ef38  stw 3, 88(31)
  016ef3c  lis 5, 115
  016ef40  extsw 4, 4
  016ef44  addic 5, 5, 21888
  016ef48  lwzx 3, 28, 4
  016ef4c  sldi 4, 3, 4
  016ef50  sldi 3, 3, 2
  016ef54  addc 3, 4, 3
  016ef58  extsw 3, 3
  016ef5c  addc 3, 5, 3
  016ef60  lwz 3, 16(3)
  016ef64  extsw 3, 3
  016ef68  bl 0x7b740
  016ef6c  nop
  016ef70  bl 0x16bc20
  016ef74  lwz 3, 80(31)
  016ef78  cmpwi 3, -1
  016ef7c  bt 2, 0x16ef90
  016ef80  li 4, 0
  016ef84  extsw 3, 3
  016ef88  bl 0xc8b28
  016ef8c  nop
  016ef90  li 3, -1
  016ef94  lwz 4, 88(31)
  016ef98  slwi 4, 4, 4
  016ef9c  stw 3, 80(31)
  016efa0  extsw 3, 4
  016efa4  addc 4, 31, 3
  016efa8  lbz 4, 212(4)
  016efac  cmpwi 4, 1
  016efb0  bf 2, 0x16f028
  016efb4  lwzx 3, 28, 3
  016efb8  lis 4, 0
  016efbc  lis 5, 115
  016efc0  sldi 7, 3, 3
  016efc4  ori 4, 4, 60000
  016efc8  addc 8, 7, 7
  016efcc  lis 6, 112
  016efd0  lis 11, 151
  016efd4  addc 7, 7, 8
  016efd8  addc 4, 3, 4
  016efdc  addic 10, 5, 32048
  016efe0  lis 8, 112
  016efe4  addic 5, 6, 22536
  016efe8  addic 11, 11, -16212
  016efec  slwi 3, 3, 2
  016eff0  extsw 30, 7
  016eff4  li 9, 48
  016eff8  addic 6, 8, 22216
  016effc  addc 8, 11, 3
  016f000  addc 10, 10, 30
  016f004  ori 3, 9, 0
  016f008  lis 12, 112
  016f00c  extsw 4, 4
  016f010  addic 7, 12, 22664
  016f014  lhz 9, 14(10)
  016f018  clrldi 8, 8, 32
  016f01c  bl 0xc8444
  016f020  nop
  016f024  stw 3, 80(31)
  016f028  lis 30, 150
  016f02c  lis 3, 144
  016f030  addic 30, 30, 19008
  016f034  lwz 3, 11988(3)
  016f038  lwz 4, 196(30)
  016f03c  and 3, 4, 3
  016f040  cmpwi 3, 0
  016f044  bt 2, 0x16f084
  016f048  lwz 3, 88(31)
  016f04c  slwi 3, 3, 4
  016f050  extsw 3, 3
  016f054  addc 3, 31, 3
  016f058  lbz 3, 213(3)
  016f05c  cmpwi 3, 0
  016f060  bf 2, 0x16f084
  016f064  li 5, 1
  016f068  lwz 6, 28(31)
  016f06c  li 3, 0
  016f070  ori 4, 3, 0
  016f074  stw 5, 92(31)
  016f078  ori 5, 6, 0
  016f07c  bl 0x15d12c
  016f080  nop
  016f084  lwz 3, 196(30)
  016f088  rlwinm 3, 3, 0, 27, 27
  016f08c  cmpwi 3, 0
  016f090  bt 2, 0x16f0d0
  016f094  lis 3, 230
  016f098  lbz 3, -22063(3)
  016f09c  cmpwi 3, 0
  016f0a0  bf 2, 0x16f0d0
  016f0a4  lis 4, 230
  016f0a8  li 5, 8
  016f0ac  lis 6, 230
  016f0b0  li 7, 1
  016f0b4  li 3, 5
  016f0b8  stw 5, -22208(4)
  016f0bc  lwz 5, 28(31)
  016f0c0  li 4, 0
  016f0c4  stb 7, -22204(6)
  016f0c8  bl 0x15d12c
  016f0cc  nop
  016f0d0  bl 0x16cc50
  016f0d4  lis 3, 230
  016f0d8  lbz 3, -22196(3)
  016f0dc  cmpwi 3, 1
  016f0e0  bf 2, 0x16f110
  016f0e4  lis 3, 230
  016f0e8  lwz 4, -22200(3)
  016f0ec  cmpwi 4, 0
  016f0f0  bf 2, 0x16f104
  016f0f4  lis 3, 230
  016f0f8  li 4, 0
  016f0fc  stb 4, -22196(3)
  016f100  b 0x16f110
  016f104  lwz 4, -22200(3)
  016f108  addic 4, 4, -1
  016f10c  stw 4, -22200(3)
  016f110  lis 3, 230
  016f114  lbz 3, -22204(3)
  016f118  cmpwi 3, 1
  016f11c  bf 2, 0x16f258
  016f120  lis 3, 230
  016f124  lwz 4, -22208(3)
  016f128  addic 4, 4, -1
  016f12c  stw 4, -22208(3)
  016f130  lwz 3, -22208(3)
  016f134  cmpwi 3, 0
  016f138  bf 2, 0x16f26c
  016f13c  lis 3, 161
  016f140  li 4, 1
  016f144  stw 4, 1820(3)
  016f148  bl 0x174bdc
  016f14c  nop
  016f150  lwz 3, 28(31)
  016f154  li 4, 4
  016f158  li 5, 9
  016f15c  li 6, 8
  016f160  bl 0xfddc0
  016f164  nop
  016f168  lis 3, 114
  016f16c  lfs 1, 60(27)
  016f170  lwz 4, 28(31)
  016f174  lfs 2, -3064(3)
  016f178  fmuls 1, 2, 1
  016f17c  stfs 1, 88(4)
  016f180  lwz 3, 64(31)
  016f184  cmpwi 3, 0
  016f188  bt 2, 0x16f1b4
  016f18c  lis 3, 149
  016f190  lfs 1, 112(31)
  016f194  addic 3, 3, 5056
  016f198  lfs 2, 116(31)
  016f19c  stfs 1, 336(3)
  016f1a0  lfs 1, 120(31)
  016f1a4  stfs 2, 340(3)
  016f1a8  lfs 2, 124(31)
  016f1ac  stfs 1, 344(3)
  016f1b0  stfs 2, 348(3)
  016f1b4  lis 3, 230
  016f1b8  lis 4, 149
  016f1bc  addic 3, 3, -22176
  016f1c0  li 5, 0
  016f1c4  addic 4, 4, 5056
  016f1c8  addic 6, 3, 16
  016f1cc  addic 7, 4, 848
  016f1d0  lvx 2, 0, 3
  016f1d4  addic 8, 4, 864
  016f1d8  addic 3, 3, 32
  016f1dc  stw 5, 8(31)
  016f1e0  stw 5, 4(31)
  016f1e4  addic 4, 4, 880
  016f1e8  lis 31, 151
  016f1ec  lvx 3, 0, 6
  016f1f0  stvx 2, 0, 7
  016f1f4  li 5, 2
  016f1f8  addic 31, 31, -25376
  016f1fc  lvx 2, 0, 3
  016f200  stvx 3, 0, 8
  016f204  stvx 2, 0, 4
  016f208  stw 5, -22960(26)
  016f20c  lwz 3, 4240(31)
  016f210  cmpwi 3, 0
  016f214  bt 2, 0x16f26c
  016f218  lhz 3, 166(3)
  016f21c  li 4, -1
  016f220  extsh 3, 3
  016f224  bl 0xe0854
  016f228  nop
  016f22c  lwz 4, 4240(31)
  016f230  lis 3, 163
  016f234  addic 5, 3, 19456
  016f238  ori 3, 4, 0
  016f23c  lbz 6, 34(4)
  016f240  slwi 6, 6, 2
  016f244  lwzx 5, 5, 6
  016f248  stw 5, 36(4)
  016f24c  bl 0xef74c
  016f250  nop
  016f254  b 0x16f26c
  016f258  lis 3, 230
  016f25c  lbz 3, -22061(3)
  016f260  cmpwi 3, 0
  016f264  bt 2, 0x16f26c
  016f268  bl 0x16c6b8
  016f26c  li 3, 1
  016f270  bl 0xd56d8
  016f274  nop
  016f278  b 0x16f940
  016f27c  bl 0x166e30
  016f280  nop
  016f284  bl 0xfc168
  016f288  nop
  016f28c  bl 0x15d7ac
  016f290  nop
  016f294  bl 0x954c8
  016f298  nop
  016f29c  bl 0x11e8a0
  016f2a0  nop
  016f2a4  lis 30, 150
  016f2a8  addic 30, 30, -12976
  016f2ac  lwz 3, 56(30)
  016f2b0  lwz 4, 52(30)
  016f2b4  lhz 5, 64(30)
  016f2b8  addic 3, 3, 1
  016f2bc  addic 4, 4, 1
  016f2c0  extsh 5, 5
  016f2c4  addic 6, 5, -12
  016f2c8  stw 3, 56(30)
  016f2cc  stw 4, 52(30)
  016f2d0  cmpw 4, 6
  016f2d4  bf 1, 0x16f308
  016f2d8  lis 6, 150
  016f2dc  lfs 1, 64(27)
  016f2e0  lfs 2, -12528(6)
  016f2e4  fadds 1, 2, 1
  016f2e8  stfs 1, -12528(6)
  016f2ec  lfs 1, 68(27)
  016f2f0  lfs 2, -12528(6)
  016f2f4  fcmpu 0, 2, 1
  016f2f8  cror 6, 0, 2
  016f2fc  bt 6, 0x16f334
  016f300  stfs 1, -12528(6)
  016f304  b 0x16f334
  016f308  lis 6, 150
  016f30c  lfs 1, 72(27)
  016f310  lfs 2, -12528(6)
  016f314  fsubs 1, 2, 1
  016f318  stfs 1, -12528(6)
  016f31c  lfs 1, 4(27)
  016f320  lfs 2, -12528(6)
  016f324  fcmpu 0, 2, 1
  016f328  cror 6, 1, 2
  016f32c  bt 6, 0x16f334
  016f330  stfs 1, -12528(6)
  016f334  cmpw 4, 5
  016f338  bt 0, 0x16f400
  016f33c  lis 3, 150
  016f340  li 31, 0
  016f344  stw 31, -12528(3)
  016f348  bl 0x174bdc
  016f34c  nop
  016f350  lis 3, 150
  016f354  lis 4, 16161
  016f358  addic 3, 3, -12416
  016f35c  ori 4, 4, 18350
  016f360  stw 4, 176(3)
  016f364  bl 0x668d0
  016f368  nop
  016f36c  lhz 3, 68(30)
  016f370  extsh 3, 3
  016f374  cmpw 3, 31
  016f378  bf 1, 0x16f3dc
  016f37c  ori 29, 30, 0
  016f380  lwz 3, 376(29)
  016f384  cmpwi 3, 0
  016f388  bt 2, 0x16f3c4
  016f38c  lwz 4, 36(3)
  016f390  li 5, 0
  016f394  lbz 6, 12(4)
  016f398  addic 6, 6, -1
  016f39c  stb 6, 12(4)
  016f3a0  lwz 4, 36(3)
  016f3a4  addic 6, 4, 72
  016f3a8  lbz 4, 12(4)
  016f3ac  slwi 4, 4, 2
  016f3b0  addc 4, 6, 4
  016f3b4  clrldi 4, 4, 32
  016f3b8  stw 5, 0(4)
  016f3bc  bl 0xefb38
  016f3c0  nop
  016f3c4  lhz 3, 68(30)
  016f3c8  addic 31, 31, 1
  016f3cc  addic 29, 29, 4
  016f3d0  extsh 3, 3
  016f3d4  cmpw 31, 3
  016f3d8  bt 0, 0x16f380
  016f3dc  addic 3, 26, -22960
  016f3e0  lwz 3, 40(3)
  016f3e4  cmpwi 3, 0
  016f3e8  bt 2, 0x16f3f4
  016f3ec  bl 0x16ba38
  016f3f0  b 0x16f940
  016f3f4  li 3, 1
  016f3f8  bl 0x16b038
  016f3fc  b 0x16f940
  016f400  lis 5, 150
  016f404  li 4, 96
  016f408  lwz 5, 27368(5)
  016f40c  cmpwi 5, 0
  016f410  bt 2, 0x16f418
  016f414  li 4, 80
  016f418  cmpw 3, 4
  016f41c  bt 0, 0x16f438
  016f420  lwz 3, 60(30)
  016f424  addic 4, 3, 1
  016f428  extsw 3, 4
  016f42c  stw 4, 60(30)
  016f430  bl 0xe0654
  016f434  nop
  016f438  lwz 4, 56(30)
  016f43c  lwz 5, 84(30)
  016f440  lis 3, 150
  016f444  slwi 4, 4, 1
  016f448  addic 3, 3, -12416
  016f44c  sldi 4, 4, 4
  016f450  addc 4, 5, 4
  016f454  clrldi 28, 4, 32
  016f458  addic 31, 28, 12
  016f45c  addic 25, 28, 16
  016f460  addic 24, 28, 16
  016f464  lbz 31, 0(31)
  016f468  lfs 1, 12(25)
  016f46c  stfs 1, 176(3)
  016f470  bl 0x668d0
  016f474  nop
  016f478  lis 3, 149
  016f47c  lfs 1, 0(28)
  016f480  addic 29, 26, -22960
  016f484  addic 23, 3, 5056
  016f488  addic 3, 23, 12
  016f48c  stfs 1, 320(23)
  016f490  lfs 2, 4(28)
  016f494  stfs 2, 324(23)
  016f498  lfs 3, 8(28)
  016f49c  lfs 4, 128(29)
  016f4a0  lfs 5, 140(29)
  016f4a4  lfs 6, 144(29)
  016f4a8  fmuls 4, 4, 1
  016f4ac  lfs 7, 156(29)
  016f4b0  fmuls 5, 5, 1
  016f4b4  fmuls 6, 6, 2
  016f4b8  lfs 8, 132(29)
  016f4bc  fmuls 7, 7, 2
  016f4c0  lfs 9, 148(29)
  016f4c4  lfs 10, 136(29)
  016f4c8  fmuls 8, 8, 1
  016f4cc  stfs 3, 328(23)
  016f4d0  fmuls 9, 9, 2
  016f4d4  lfs 11, 152(29)
  016f4d8  fmuls 1, 10, 1
  016f4dc  lfs 12, 160(29)
  016f4e0  lfs 10, 12(28)
  016f4e4  fmuls 2, 11, 2
  016f4e8  lfs 11, 172(29)
  016f4ec  fmuls 12, 12, 3
  016f4f0  lfs 13, 164(29)
  016f4f4  fadds 4, 4, 6
  016f4f8  fmuls 11, 11, 3
  016f4fc  fadds 5, 5, 7
  016f500  lfs 7, 168(29)
  016f504  fmuls 6, 13, 3
  016f508  fmuls 3, 7, 3
  016f50c  fadds 8, 8, 9
  016f510  fadds 1, 1, 2
  016f514  fadds 2, 4, 12
  016f518  fadds 4, 5, 11
  016f51c  fadds 5, 8, 6
  016f520  fadds 1, 1, 3
  016f524  fadds 3, 4, 10
  016f528  stfs 3, 320(3)
  016f52c  lfs 3, 192(29)
  016f530  lfs 4, 196(29)
  016f534  fadds 2, 2, 3
  016f538  lfs 3, 200(29)
  016f53c  fadds 4, 5, 4
  016f540  fadds 1, 1, 3
  016f544  stfs 2, 320(23)
  016f548  stfs 4, 324(23)
  016f54c  stfs 1, 328(23)
  016f550  lfs 1, 8(25)
  016f554  lfs 2, 184(29)
  016f558  bl 0x502578
  016f55c  nop
  016f560  lfs 30, 0(24)
  016f564  addic 28, 1, 128
  016f568  fmr 31, 1
  016f56c  lis 4, 101
  016f570  lfs 29, 4(25)
  016f574  li 24, 64
  016f578  addic 4, 4, 16136
  016f57c  ori 3, 28, 0
  016f580  ori 5, 24, 0
  016f584  bl 0x5c5ad0
  016f588  nop
  016f58c  fmr 1, 30
  016f590  li 26, 0
  016f594  ori 4, 26, 0
  016f598  bl 0x5dd914
  016f59c  nop
  016f5a0  fmr 28, 1
  016f5a4  fmr 1, 30
  016f5a8  li 25, 1
  016f5ac  ori 4, 25, 0
  016f5b0  bl 0x5dd914
  016f5b4  nop
  016f5b8  fmr 30, 1
  016f5bc  fmr 1, 29
  016f5c0  ori 4, 26, 0
  016f5c4  bl 0x5dd914
  016f5c8  nop
  016f5cc  fmr 27, 1
  016f5d0  ori 4, 25, 0
  016f5d4  fmr 1, 29
  016f5d8  bl 0x5dd914
  016f5dc  nop
  016f5e0  fmr 29, 1
  016f5e4  fmr 1, 31
  016f5e8  ori 4, 26, 0
  016f5ec  bl 0x5dd914
  016f5f0  nop
  016f5f4  fmr 26, 1
  016f5f8  ori 4, 25, 0
  016f5fc  fmr 1, 31
  016f600  bl 0x5dd914
  016f604  nop
  016f608  fmr 31, 1
  016f60c  fmuls 25, 27, 26
  016f610  addic 25, 1, 192
  016f614  lis 4, 116
  016f618  ori 3, 25, 0
  016f61c  addic 4, 4, -22644
  016f620  ori 5, 24, 0
  016f624  fmuls 24, 31, 27
  016f628  bl 0x5c5ad0
  016f62c  nop
  016f630  fmuls 1, 28, 24
  016f634  fmuls 2, 30, 26
  016f638  addic 4, 1, 208
  016f63c  fmuls 3, 29, 31
  016f640  addic 6, 1, 224
  016f644  fmuls 4, 28, 25
  016f648  ori 3, 28, 0
  016f64c  fmuls 5, 30, 31
  016f650  ori 5, 24, 0
  016f654  fmuls 6, 29, 26
  016f658  fmuls 8, 30, 24
  016f65c  fmuls 9, 28, 26
  016f660  fmuls 10, 30, 25
  016f664  fmuls 11, 31, 28
  016f668  fneg 7, 27
  016f66c  fsubs 1, 1, 2
  016f670  fmuls 2, 29, 28
  016f674  fadds 4, 4, 5
  016f678  stfs 3, 192(1)
  016f67c  fmuls 3, 30, 29
  016f680  fadds 5, 8, 9
  016f684  stfs 6, 4(25)
  016f688  fsubs 6, 10, 11
  016f68c  stfs 7, 8(25)
  016f690  stfs 1, 0(4)
  016f694  stfs 2, 216(1)
  016f698  ori 4, 25, 0
  016f69c  stfs 4, 212(1)
  016f6a0  stfs 5, 0(6)
  016f6a4  stfs 3, 232(1)
  016f6a8  stfs 6, 228(1)
  016f6ac  bl 0x5c5ad0
  016f6b0  nop
  016f6b4  lfs 1, 160(1)
  016f6b8  lfs 2, 128(1)
  016f6bc  fneg 1, 1
  016f6c0  lfs 3, 164(1)
  016f6c4  fneg 2, 2
  016f6c8  lfs 4, 132(1)
  016f6cc  fneg 3, 3
  016f6d0  lfs 5, 168(1)
  016f6d4  fneg 4, 4
  016f6d8  lfs 6, 136(1)
  016f6dc  fneg 5, 5
  016f6e0  lfs 7, 144(1)
  016f6e4  fneg 6, 6
  016f6e8  lfs 8, 148(1)
  016f6ec  stfs 7, 880(23)
  016f6f0  stfs 8, 884(23)
  016f6f4  lhz 3, 68(30)
  016f6f8  lfs 7, 152(1)
  016f6fc  extsh 3, 3
  016f700  stfs 1, 848(23)
  016f704  stfs 2, 864(23)
  016f708  cmpw 3, 26
  016f70c  stfs 3, 852(23)
  016f710  stfs 4, 868(23)
  016f714  stfs 5, 856(23)
  016f718  stfs 6, 872(23)
  016f71c  stfs 7, 888(23)
  016f720  bf 1, 0x16f930
  016f724  ori 25, 30, 0
  016f728  lwz 3, 56(30)
  016f72c  lwz 28, 376(25)
  016f730  srawi 4, 3, 1
  016f734  ori 3, 28, 0
  016f738  addic 5, 4, 1
  016f73c  stb 4, 80(28)
  016f740  stb 5, 81(28)
  016f744  bl 0xef74c
  016f748  nop
  016f74c  lwz 3, 56(30)
  016f750  clrlwi 3, 3, 31
  016f754  bl 0x502730
  016f758  nop
  016f75c  lfs 2, 76(27)
  016f760  cmpwi 31, 0
  016f764  fmuls 1, 1, 2
  016f768  stfs 1, 84(28)
  016f76c  bt 2, 0x16f788
  016f770  lwz 3, 56(30)
  016f774  clrlwi 3, 3, 31
  016f778  cmpwi 3, 0
  016f77c  bt 2, 0x16f788
  016f780  lis 3, 16256
  016f784  stw 3, 84(28)
  016f788  lfs 1, 68(27)
  016f78c  lbz 3, 80(28)
  016f790  lwz 4, 120(28)
  016f794  slwi 3, 3, 4
  016f798  lfs 2, 84(28)
  016f79c  lbz 5, 81(28)
  016f7a0  addc 3, 4, 3
  016f7a4  slwi 5, 5, 4
  016f7a8  fsubs 1, 1, 2
  016f7ac  clrldi 3, 3, 32
  016f7b0  addc 4, 4, 5
  016f7b4  clrldi 4, 4, 32
  016f7b8  lfs 3, 0(3)
  016f7bc  lfs 4, 4(3)
  016f7c0  lfs 5, 8(3)
  016f7c4  lfs 6, 0(4)
  016f7c8  lfs 7, 4(4)
  016f7cc  fmuls 6, 6, 2
  016f7d0  lfs 8, 8(4)
  016f7d4  fmuls 3, 3, 1
  016f7d8  fmuls 7, 7, 2
  016f7dc  fmuls 4, 4, 1
  016f7e0  fmuls 1, 5, 1
  016f7e4  fmuls 2, 8, 2
  016f7e8  lfs 5, 12(3)
  016f7ec  stfs 5, 28(28)
  016f7f0  addic 3, 28, 16
  016f7f4  addic 4, 28, 16
  016f7f8  fadds 3, 3, 6
  016f7fc  fadds 4, 4, 7
  016f800  fadds 1, 1, 2
  016f804  stfs 3, 16(28)
  016f808  stfs 4, 20(28)
  016f80c  stfs 1, 24(28)
  016f810  lfs 2, 128(29)
  016f814  lfs 6, 144(29)
  016f818  lfs 7, 132(29)
  016f81c  lfs 8, 140(29)
  016f820  fmuls 2, 2, 3
  016f824  fmuls 6, 6, 4
  016f828  lfs 9, 148(29)
  016f82c  lfs 10, 156(29)
  016f830  fmuls 8, 8, 3
  016f834  lfs 11, 136(29)
  016f838  fmuls 7, 7, 3
  016f83c  fmuls 10, 10, 4
  016f840  lfs 12, 152(29)
  016f844  fmuls 9, 9, 4
  016f848  lfs 13, 160(29)
  016f84c  fmuls 3, 11, 3
  016f850  fmuls 4, 12, 4
  016f854  lfs 11, 164(29)
  016f858  fmuls 12, 13, 1
  016f85c  lfs 13, 172(29)
  016f860  lfs 0, 168(29)
  016f864  fadds 2, 2, 6
  016f868  fmuls 6, 13, 1
  016f86c  fmuls 11, 11, 1
  016f870  fadds 8, 8, 10
  016f874  fadds 7, 7, 9
  016f878  fmuls 1, 0, 1
  016f87c  fadds 3, 3, 4
  016f880  fadds 2, 2, 12
  016f884  fadds 6, 8, 6
  016f888  fadds 4, 7, 11
  016f88c  fadds 1, 3, 1
  016f890  stfs 2, 0(3)
  016f894  fadds 2, 6, 5
  016f898  ori 3, 28, 0
  016f89c  stfs 4, 4(4)
  016f8a0  stfs 1, 8(4)
  016f8a4  stfs 2, 12(4)
  016f8a8  lfs 2, 16(28)
  016f8ac  lfs 3, 192(29)
  016f8b0  li 4, 255
  016f8b4  fadds 2, 2, 3
  016f8b8  stfs 2, 16(28)
  016f8bc  lfs 2, 196(29)
  016f8c0  fadds 2, 4, 2
  016f8c4  stfs 2, 20(28)
  016f8c8  lfs 2, 200(29)
  016f8cc  fadds 1, 1, 2
  016f8d0  stfs 1, 24(28)
  016f8d4  lfs 1, 184(29)
  016f8d8  stb 4, 113(28)
  016f8dc  stfs 1, 72(28)
  016f8e0  bl 0xf31a8
  016f8e4  nop
  016f8e8  lbz 3, 127(28)
  016f8ec  cmpwi 3, 0
  016f8f0  bt 2, 0x16f900
  016f8f4  ori 3, 28, 0
  016f8f8  bl 0x106468
  016f8fc  nop
  016f900  lhz 3, 166(28)
  016f904  cmpwi 3, 0
  016f908  bf 2, 0x16f918
  016f90c  ori 3, 28, 0
  016f910  bl 0xaa5e0
  016f914  nop
  016f918  lhz 3, 68(30)
  016f91c  addic 26, 26, 1
  016f920  extsh 3, 3
  016f924  addic 25, 25, 4
  016f928  cmpw 26, 3
  016f92c  bt 0, 0x16f728
  016f930  bl 0xdafb8
  016f934  nop
  016f938  bl 0x166e88
  016f93c  nop
  016f940  bl 0x15be68
  016f944  nop
  016f948  ld 0, 432(1)
  016f94c  mtlr 0
  016f950  lfd 24, 352(1)
  016f954  lfd 25, 360(1)
  016f958  lfd 26, 368(1)
  016f95c  lfd 27, 376(1)
  016f960  lfd 28, 384(1)
  016f964  lfd 29, 392(1)
  016f968  lfd 30, 400(1)
  016f96c  lfd 31, 408(1)
  016f970  ld 23, 280(1)
  016f974  ld 24, 288(1)
  016f978  ld 25, 296(1)
  016f97c  ld 26, 304(1)
  016f980  ld 27, 312(1)
  016f984  ld 28, 320(1)
  016f988  ld 29, 328(1)
  016f98c  ld 30, 336(1)
  016f990  ld 31, 344(1)
  016f994  addi 1, 1, 416
  016f998  blr

DrawVendorHintFrame:   # 0x16f9a8, 0x25c bytes
  016f9a8  stdu 1, -240(1)
  016f9ac  mflr 0
  016f9b0  std 0, 256(1)
  016f9b4  stfd 31, 232(1)
  016f9b8  std 31, 224(1)
  016f9bc  ori 31, 4, 0
  016f9c0  lis 4, 0
  016f9c4  std 29, 208(1)
  016f9c8  fmr 31, 1
  016f9cc  std 25, 176(1)
  016f9d0  ori 29, 3, 0
  016f9d4  li 25, 0
  016f9d8  std 28, 200(1)
  016f9dc  ori 3, 4, 59701
  016f9e0  ori 28, 5, 0
  016f9e4  std 30, 216(1)
  016f9e8  std 27, 192(1)
  016f9ec  std 26, 184(1)
  016f9f0  std 24, 168(1)
  016f9f4  std 23, 160(1)
  016f9f8  std 22, 152(1)
  016f9fc  std 21, 144(1)
  016fa00  ori 4, 25, 0
  016fa04  bl 0xca3e4
  016fa08  nop
  016fa0c  bl 0xd6bf8
  016fa10  nop
  016fa14  ori 26, 3, 0
  016fa18  ori 27, 31, 0
  016fa1c  lbz 3, 0(29)
  016fa20  cmpwi 3, 0
  016fa24  bt 2, 0x16fbc4
  016fa28  lbz 4, 0(29)
  016fa2c  addic 29, 29, 1
  016fa30  addic 4, 4, -32
  016fa34  cmpwi 4, 66
  016fa38  cmpwi 1, 4, 234
  016fa3c  cmpwi 6, 4, 58
  016fa40  cmpwi 7, 4, 0
  016fa44  bf 2, 0x16fa4c
  016fa48  li 25, 1
  016fa4c  bf 6, 0x16fa5c
  016fa50  addic 28, 28, 9
  016fa54  ori 27, 31, 0
  016fa58  extsw 28, 28
  016fa5c  bt 25, 0x16fbc0
  016fa60  lis 3, 116
  016fa64  sldi 30, 4, 2
  016fa68  addic 3, 3, -23688
  016fa6c  lwzx 5, 3, 30
  016fa70  cmpwi 5, -1
  016fa74  bf 2, 0x16fa7c
  016fa78  bf 30, 0x16fbc0
  016fa7c  cmpwi 25, 0
  016fa80  li 5, 0
  016fa84  bt 2, 0x16fb00
  016fa88  lis 5, 23
  016fa8c  lis 6, 114
  016fa90  addi 5, 5, -1636
  016fa94  li 25, 0
  016fa98  lfs 1, 0(5)
  016fa9c  lfs 2, -3056(6)
  016faa0  lis 6, 346
  016faa4  fmuls 1, 2, 1
  016faa8  lwz 6, -15568(6)
  016faac  fctiwz 1, 1
  016fab0  stfd 1, 128(1)
  016fab4  lfs 1, 4(5)
  016fab8  lwz 7, 132(1)
  016fabc  fmuls 3, 2, 1
  016fac0  fmuls 1, 2, 1
  016fac4  ori 5, 25, 0
  016fac8  fctiwz 2, 3
  016facc  fctiwz 1, 1
  016fad0  stfd 2, 128(1)
  016fad4  lwz 8, 132(1)
  016fad8  addc 7, 7, 8
  016fadc  stfd 1, 128(1)
  016fae0  divw 8, 6, 7
  016fae4  mullw 7, 8, 7
  016fae8  lwz 8, 132(1)
  016faec  subc 6, 6, 7
  016faf0  cmpw 6, 8
  016faf4  bf 0, 0x16fb00
  016faf8  li 5, 1
  016fafc  li 25, 0
  016fb00  cmpwi 1, 5, 0
  016fb04  cmpwi 4, 0
  016fb08  crorc 2, 2, 6
  016fb0c  bt 2, 0x16fb94
  016fb10  ori 4, 3, 0
  016fb14  li 24, 9
  016fb18  ori 3, 24, 0
  016fb1c  lwzx 4, 4, 30
  016fb20  rlwinm 23, 4, 28, 20, 31
  016fb24  srwi 22, 4, 20
  016fb28  bl 0x502730
  016fb2c  nop
  016fb30  fmuls 1, 1, 31
  016fb34  bl 0x502758
  016fb38  nop
  016fb3c  ori 21, 3, 0
  016fb40  ori 3, 24, 0
  016fb44  bl 0x502730
  016fb48  nop
  016fb4c  fmuls 1, 1, 31
  016fb50  bl 0x502758
  016fb54  nop
  016fb58  lis 5, -32640
  016fb5c  ori 9, 24, 0
  016fb60  ori 6, 5, 32896
  016fb64  ori 4, 28, 0
  016fb68  clrldi 8, 6, 32
  016fb6c  ori 6, 3, 0
  016fb70  ori 5, 21, 0
  016fb74  ori 10, 24, 0
  016fb78  ori 3, 27, 0
  016fb7c  std 8, 112(1)
  016fb80  ori 7, 23, 0
  016fb84  std 26, 120(1)
  016fb88  ori 8, 22, 0
  016fb8c  bl 0x6a5c4
  016fb90  nop
  016fb94  lis 3, 116
  016fb98  addic 3, 3, -23432
  016fb9c  lwzx 3, 3, 30
  016fba0  extsw 3, 3
  016fba4  bl 0x502730
  016fba8  nop
  016fbac  fmuls 1, 1, 31
  016fbb0  bl 0x502758
  016fbb4  nop
  016fbb8  addc 27, 27, 3
  016fbbc  extsw 27, 27
  016fbc0  b 0x16fa1c
  016fbc4  ld 0, 256(1)
  016fbc8  mtlr 0
  016fbcc  lfd 31, 232(1)
  016fbd0  ld 21, 144(1)
  016fbd4  ld 22, 152(1)
  016fbd8  ld 23, 160(1)
  016fbdc  ld 24, 168(1)
  016fbe0  ld 25, 176(1)
  016fbe4  ld 26, 184(1)
  016fbe8  ld 27, 192(1)
  016fbec  ld 28, 200(1)
  016fbf0  ld 29, 208(1)
  016fbf4  ld 30, 216(1)
  016fbf8  ld 31, 224(1)
  016fbfc  addi 1, 1, 240
  016fc00  blr

Vendor_DrawScrollText:   # 0x16fc10, 0x208 bytes
  016fc10  stdu 1, -160(1)
  016fc14  mflr 0
  016fc18  std 0, 176(1)
  016fc1c  std 31, 152(1)
  016fc20  li 3, 0
  016fc24  std 30, 144(1)
  016fc28  li 31, 512
  016fc2c  li 30, 128
  016fc30  ori 4, 3, 0
  016fc34  ori 9, 3, 0
  016fc38  ori 5, 31, 0
  016fc3c  ori 7, 31, 0
  016fc40  ori 6, 30, 0
  016fc44  std 29, 136(1)
  016fc48  std 28, 128(1)
  016fc4c  ori 8, 30, 0
  016fc50  bl 0x7813c
  016fc54  nop
  016fc58  lis 3, 346
  016fc5c  lbz 3, -15535(3)
  016fc60  cmpwi 3, 0
  016fc64  bt 2, 0x16fca0
  016fc68  lis 3, 346
  016fc6c  lwz 3, -15568(3)
  016fc70  clrlwi 3, 3, 27
  016fc74  cmpwi 3, 16
  016fc78  bf 0, 0x16fc8c
  016fc7c  lis 3, 116
  016fc80  lwz 3, -23176(3)
  016fc84  clrlwi 3, 3, 8
  016fc88  b 0x16fc94
  016fc8c  lis 3, 116
  016fc90  lwz 3, -23176(3)
  016fc94  lis 4, 114
  016fc98  addic 4, 4, -4200
  016fc9c  stw 3, 28(4)
  016fca0  lis 29, 230
  016fca4  addic 29, 29, -22960
  016fca8  lwz 3, 44(29)
  016fcac  bl 0x5c8510
  016fcb0  nop
  016fcb4  lis 4, 26214
  016fcb8  ori 5, 3, 0
  016fcbc  ori 4, 4, 26215
  016fcc0  lwz 3, 68(29)
  016fcc4  mulhw 4, 4, 3
  016fcc8  ori 3, 5, 0
  016fccc  srawi 4, 4, 3
  016fcd0  srwi 5, 4, 31
  016fcd4  addc 4, 4, 5
  016fcd8  subc 3, 3, 4
  016fcdc  cmpwi 3, 0
  016fce0  lwz 3, 68(29)
  016fce4  bf 1, 0x16fcf4
  016fce8  addic 3, 3, 2
  016fcec  stw 3, 68(29)
  016fcf0  b 0x16fd24
  016fcf4  lis 4, 116
  016fcf8  li 3, 24
  016fcfc  addic 28, 4, -23784
  016fd00  bl 0xfc620
  016fd04  nop
  016fd08  sldi 3, 3, 2
  016fd0c  extsw 3, 3
  016fd10  lwzx 3, 28, 3
  016fd14  extsw 3, 3
  016fd18  bl 0x7b740
  016fd1c  nop
  016fd20  bl 0x16bc20
  016fd24  lis 3, 346
  016fd28  lbz 3, -15535(3)
  016fd2c  cmpwi 3, 0
  016fd30  bf 2, 0x16fd60
  016fd34  lis 3, 23
  016fd38  lwz 4, 68(29)
  016fd3c  li 5, 8
  016fd40  addi 3, 3, -1020
  016fd44  neg 4, 4
  016fd48  extsw 4, 4
  016fd4c  lfs 1, 0(3)
  016fd50  lwz 6, 44(29)
  016fd54  ori 3, 6, 0
  016fd58  bl 0x16f9a8
  016fd5c  b 0x16fda8
  016fd60  lwz 3, 68(29)
  016fd64  lis 4, 23
  016fd68  li 7, -1
  016fd6c  neg 3, 3
  016fd70  extsw 3, 3
  016fd74  std 3, 112(1)
  016fd78  addi 3, 4, -1020
  016fd7c  lwz 6, 44(29)
  016fd80  lis 4, 116
  016fd84  lfs 2, 4(3)
  016fd88  lwz 5, -23176(4)
  016fd8c  lfs 3, 8(3)
  016fd90  lfd 1, 112(1)
  016fd94  extsw 5, 5
  016fd98  fcfid 1, 1
  016fd9c  frsp 1, 1
  016fda0  bl 0x6fda4
  016fda4  nop
  016fda8  li 29, 64
  016fdac  li 28, 0
  016fdb0  ori 6, 29, 0
  016fdb4  ori 4, 28, 0
  016fdb8  li 5, 4
  016fdbc  ori 9, 28, 0
  016fdc0  ori 3, 28, 0
  016fdc4  ori 7, 31, 0
  016fdc8  ori 8, 30, 0
  016fdcc  bl 0x7813c
  016fdd0  nop
  016fdd4  li 3, 226
  016fdd8  li 5, 230
  016fddc  ori 4, 28, 0
  016fde0  ori 6, 29, 0
  016fde4  ori 7, 31, 0
  016fde8  ori 8, 30, 0
  016fdec  ori 9, 28, 0
  016fdf0  bl 0x7813c
  016fdf4  nop
  016fdf8  ld 0, 176(1)
  016fdfc  mtlr 0
  016fe00  ld 28, 128(1)
  016fe04  ld 29, 136(1)
  016fe08  ld 30, 144(1)
  016fe0c  ld 31, 152(1)
  016fe10  addi 1, 1, 160
  016fe14  blr

DrawVendorDude:   # 0x16fe20, 0x1c0 bytes
  016fe20  stdu 1, -224(1)
  016fe24  mflr 0
  016fe28  std 0, 240(1)
  016fe2c  stfd 20, 128(1)
  016fe30  stfd 21, 136(1)
  016fe34  stfd 22, 144(1)
  016fe38  stfd 23, 152(1)
  016fe3c  stfd 24, 160(1)
  016fe40  stfd 25, 168(1)
  016fe44  stfd 26, 176(1)
  016fe48  stfd 27, 184(1)
  016fe4c  stfd 28, 192(1)
  016fe50  stfd 29, 200(1)
  016fe54  stfd 30, 208(1)
  016fe58  stfd 31, 216(1)
  016fe5c  li 3, 0
  016fe60  li 5, 512
  016fe64  li 6, 128
  016fe68  ori 4, 3, 0
  016fe6c  ori 9, 3, 0
  016fe70  ori 7, 5, 0
  016fe74  std 31, 120(1)
  016fe78  ori 8, 6, 0
  016fe7c  bl 0x7813c
  016fe80  nop
  016fe84  lis 3, 230
  016fe88  lbz 3, -22064(3)
  016fe8c  cmpwi 3, 1
  016fe90  bf 2, 0x16ff9c
  016fe94  lis 31, 230
  016fe98  lis 9, 230
  016fe9c  addic 31, 31, -22960
  016fea0  lwz 8, 36(31)
  016fea4  addic 7, 8, 192
  016fea8  addic 6, 8, 208
  016feac  addic 4, 8, 208
  016feb0  addic 5, 8, 224
  016feb4  addic 3, 8, 224
  016feb8  lfs 20, 0(7)
  016febc  lfs 21, 4(7)
  016fec0  lfs 22, 8(7)
  016fec4  lfs 23, 12(7)
  016fec8  lfs 24, 0(6)
  016fecc  lfs 25, 4(4)
  016fed0  lfs 26, 8(4)
  016fed4  lfs 27, 12(4)
  016fed8  lfs 28, 0(5)
  016fedc  lbz 9, -22062(9)
  016fee0  lfs 29, 4(3)
  016fee4  lfs 30, 8(3)
  016fee8  cmpwi 9, 0
  016feec  lfs 31, 12(3)
  016fef0  bt 2, 0x16ff34
  016fef4  lis 9, 23
  016fef8  addi 9, 9, -488
  016fefc  lfs 1, 0(9)
  016ff00  stfs 20, 0(7)
  016ff04  fmuls 1, 30, 1
  016ff08  stfs 21, 4(7)
  016ff0c  stfs 22, 8(7)
  016ff10  stfs 23, 12(7)
  016ff14  stfs 24, 0(6)
  016ff18  stfs 25, 4(4)
  016ff1c  stfs 26, 8(4)
  016ff20  stfs 27, 12(4)
  016ff24  stfs 28, 0(5)
  016ff28  stfs 29, 4(3)
  016ff2c  stfs 31, 12(3)
  016ff30  stfs 1, 8(3)
  016ff34  ori 3, 8, 0
  016ff38  li 4, 1
  016ff3c  bl 0xf1934
  016ff40  nop
  016ff44  lis 3, 230
  016ff48  lbz 3, -22062(3)
  016ff4c  cmpwi 3, 0
  016ff50  bt 2, 0x16ff9c
  016ff54  lwz 3, 36(31)
  016ff58  addic 5, 3, 192
  016ff5c  addic 6, 3, 208
  016ff60  addic 7, 3, 208
  016ff64  addic 4, 3, 224
  016ff68  addic 3, 3, 224
  016ff6c  stfs 20, 0(5)
  016ff70  stfs 21, 4(5)
  016ff74  stfs 22, 8(5)
  016ff78  stfs 23, 12(5)
  016ff7c  stfs 24, 0(6)
  016ff80  stfs 25, 4(7)
  016ff84  stfs 26, 8(7)
  016ff88  stfs 27, 12(7)
  016ff8c  stfs 28, 0(4)
  016ff90  stfs 29, 4(3)
  016ff94  stfs 30, 8(3)
  016ff98  stfs 31, 12(3)
  016ff9c  ld 0, 240(1)
  016ffa0  mtlr 0
  016ffa4  lfd 20, 128(1)
  016ffa8  lfd 21, 136(1)
  016ffac  lfd 22, 144(1)
  016ffb0  lfd 23, 152(1)
  016ffb4  lfd 24, 160(1)
  016ffb8  lfd 25, 168(1)
  016ffbc  lfd 26, 176(1)
  016ffc0  lfd 27, 184(1)
  016ffc4  lfd 28, 192(1)
  016ffc8  lfd 29, 200(1)
  016ffcc  lfd 30, 208(1)
  016ffd0  lfd 31, 216(1)
  016ffd4  ld 31, 120(1)
  016ffd8  addi 1, 1, 224
  016ffdc  blr

Vendor_FormatBolts:   # 0x16ffe0, 0x9c bytes
  016ffe0  stdu 1, -112(1)
  016ffe4  mflr 0
  016ffe8  std 0, 128(1)
  016ffec  ori 5, 4, 0
  016fff0  ori 4, 3, 0
  016fff4  cmpwi 5, 1000
  016fff8  ori 3, 5, 0
  016fffc  bt 0, 0x170054
  0170000  lis 5, 4194
  0170004  lis 7, 101
  0170008  ori 5, 5, 19923
  017000c  mulhw 6, 5, 3
  0170010  mulhw 5, 5, 3
  0170014  srawi 6, 6, 6
  0170018  srawi 5, 5, 6
  017001c  srwi 8, 6, 31
  0170020  addic 7, 7, 16280
  0170024  addc 6, 6, 8
  0170028  mulli 6, 6, 1000
  017002c  srwi 8, 5, 31
  0170030  subc 6, 3, 6
  0170034  addc 5, 5, 8
  0170038  ori 3, 4, 0
  017003c  extsw 6, 6
  0170040  extsw 5, 5
  0170044  ori 4, 7, 0
  0170048  bl 0x5cd2a8
  017004c  nop
  0170050  b 0x17006c
  0170054  ori 5, 3, 0
  0170058  lis 6, 101
  017005c  ori 3, 4, 0
  0170060  addic 4, 6, 16288
  0170064  bl 0x5cd2a8
  0170068  nop
  017006c  ld 0, 128(1)
  0170070  mtlr 0
  0170074  addi 1, 1, 112
  0170078  blr

DrawWeaponIcons:   # 0x17007c, 0x400 bytes
  017007c  stdu 1, -208(1)
  0170080  mflr 0
  0170084  std 0, 224(1)
  0170088  std 30, 192(1)
  017008c  li 30, 0
  0170090  li 5, 512
  0170094  li 6, 128
  0170098  ori 3, 30, 0
  017009c  ori 9, 30, 0
  01700a0  ori 4, 30, 0
  01700a4  ori 7, 5, 0
  01700a8  std 31, 200(1)
  01700ac  std 29, 184(1)
  01700b0  std 28, 176(1)
  01700b4  std 27, 168(1)
  01700b8  std 26, 160(1)
  01700bc  std 25, 152(1)
  01700c0  std 24, 144(1)
  01700c4  std 23, 136(1)
  01700c8  ori 8, 6, 0
  01700cc  bl 0x7813c
  01700d0  nop
  01700d4  lis 31, 230
  01700d8  addic 31, 31, -22960
  01700dc  lwz 3, 464(31)
  01700e0  cmpwi 3, 7
  01700e4  bt 1, 0x170280
  01700e8  lwz 3, 88(31)
  01700ec  lwz 4, 4(31)
  01700f0  sldi 5, 3, 6
  01700f4  sldi 3, 3, 3
  01700f8  rlwinm 4, 4, 2, 26, 29
  01700fc  subc 29, 5, 3
  0170100  addic 3, 4, -32
  0170104  bl 0x5c4988
  0170108  nop
  017010c  lis 4, 1
  0170110  addic 3, 3, 64
  0170114  ori 4, 4, 514
  0170118  mullw 4, 3, 4
  017011c  addic 3, 29, 8
  0170120  lis 5, -32768
  0170124  li 27, 22
  0170128  extsw 26, 3
  017012c  or 4, 4, 5
  0170130  ori 3, 27, 0
  0170134  clrldi 23, 4, 32
  0170138  li 28, 2
  017013c  li 25, 56
  0170140  li 24, 16
  0170144  bl 0x685c4
  0170148  nop
  017014c  ori 8, 3, 0
  0170150  std 23, 112(1)
  0170154  ori 4, 28, 0
  0170158  ori 3, 26, 0
  017015c  ori 9, 24, 0
  0170160  std 8, 120(1)
  0170164  ori 10, 24, 0
  0170168  ori 5, 25, 0
  017016c  ori 6, 25, 0
  0170170  ori 7, 30, 0
  0170174  ori 8, 30, 0
  0170178  bl 0x6a5c4
  017017c  nop
  0170180  lis 4, -32768
  0170184  addic 5, 29, 10
  0170188  clrldi 4, 4, 32
  017018c  ori 3, 27, 0
  0170190  ori 26, 4, 0
  0170194  extsw 29, 5
  0170198  li 28, 4
  017019c  li 27, 52
  01701a0  bl 0x685c4
  01701a4  nop
  01701a8  ori 8, 3, 0
  01701ac  std 26, 112(1)
  01701b0  ori 3, 29, 0
  01701b4  ori 9, 24, 0
  01701b8  ori 4, 28, 0
  01701bc  std 8, 120(1)
  01701c0  ori 10, 24, 0
  01701c4  ori 5, 27, 0
  01701c8  ori 6, 27, 0
  01701cc  ori 7, 30, 0
  01701d0  ori 8, 30, 0
  01701d4  bl 0x6a5c4
  01701d8  nop
  01701dc  lwz 3, 464(31)
  01701e0  ori 29, 30, 0
  01701e4  li 28, 12
  01701e8  cmpw 3, 29
  01701ec  bf 1, 0x170448
  01701f0  slwi 3, 29, 4
  01701f4  lis 4, 114
  01701f8  extsw 3, 3
  01701fc  addic 4, 4, 4152
  0170200  addc 3, 31, 3
  0170204  lwz 5, 208(3)
  0170208  lbz 3, 212(3)
  017020c  sldi 6, 5, 4
  0170210  cmpwi 3, 1
  0170214  subc 5, 5, 6
  0170218  sldi 5, 5, 2
  017021c  subc 5, 6, 5
  0170220  extsw 3, 5
  0170224  lhzx 3, 4, 3
  0170228  bf 2, 0x17023c
  017022c  li 4, 2
  0170230  bl 0xca3e4
  0170234  nop
  0170238  b 0x170248
  017023c  ori 4, 30, 0
  0170240  bl 0xca3e4
  0170244  nop
  0170248  li 6, 48
  017024c  ori 4, 28, 0
  0170250  li 5, 6
  0170254  ori 7, 6, 0
  0170258  li 8, 128
  017025c  bl 0xcc0f0
  0170260  nop
  0170264  lwz 3, 464(31)
  0170268  addic 29, 29, 1
  017026c  addic 28, 28, 56
  0170270  cmpw 29, 3
  0170274  extsw 28, 28
  0170278  bt 0, 0x1701f0
  017027c  b 0x170448
  0170280  lwz 3, 76(31)
  0170284  cmpwi 3, 0
  0170288  bf 0, 0x170298
  017028c  addic 3, 3, 4
  0170290  stw 3, 76(31)
  0170294  b 0x170388
  0170298  cmpwi 3, 0
  017029c  bf 1, 0x1702ac
  01702a0  addic 3, 3, -4
  01702a4  stw 3, 76(31)
  01702a8  b 0x170388
  01702ac  lwz 3, 4(31)
  01702b0  rlwinm 3, 3, 2, 26, 29
  01702b4  addic 3, 3, -32
  01702b8  bl 0x5c4988
  01702bc  nop
  01702c0  lis 4, 1
  01702c4  addic 3, 3, 64
  01702c8  ori 4, 4, 514
  01702cc  mullw 4, 3, 4
  01702d0  lis 5, -32768
  01702d4  li 28, 22
  01702d8  or 4, 4, 5
  01702dc  ori 3, 28, 0
  01702e0  clrldi 24, 4, 32
  01702e4  li 29, 176
  01702e8  li 27, 2
  01702ec  li 26, 56
  01702f0  li 25, 16
  01702f4  bl 0x685c4
  01702f8  nop
  01702fc  ori 8, 3, 0
  0170300  std 24, 112(1)
  0170304  ori 4, 27, 0
  0170308  ori 3, 29, 0
  017030c  ori 9, 25, 0
  0170310  std 8, 120(1)
  0170314  ori 10, 25, 0
  0170318  ori 5, 26, 0
  017031c  ori 6, 26, 0
  0170320  ori 7, 30, 0
  0170324  ori 8, 30, 0
  0170328  bl 0x6a5c4
  017032c  nop
  0170330  lis 4, -32768
  0170334  ori 3, 28, 0
  0170338  clrldi 4, 4, 32
  017033c  li 29, 178
  0170340  ori 26, 4, 0
  0170344  li 28, 4
  0170348  li 27, 52
  017034c  bl 0x685c4
  0170350  nop
  0170354  ori 11, 3, 0
  0170358  std 26, 112(1)
  017035c  ori 8, 30, 0
  0170360  ori 3, 29, 0
  0170364  ori 9, 25, 0
  0170368  ori 4, 28, 0
  017036c  std 11, 120(1)
  0170370  ori 10, 25, 0
  0170374  ori 5, 27, 0
  0170378  ori 6, 27, 0
  017037c  ori 7, 30, 0
  0170380  bl 0x6a5c4
  0170384  nop
  0170388  lwz 3, 76(31)
  017038c  li 29, -2
  0170390  addic 28, 3, -100
  0170394  extsw 28, 28
  0170398  lwz 3, 464(31)
  017039c  lwz 4, 88(31)
  01703a0  slwi 5, 3, 1
  01703a4  addc 5, 5, 29
  01703a8  addc 4, 5, 4
  01703ac  addic 4, 4, -3
  01703b0  divw 5, 4, 3
  01703b4  mullw 3, 5, 3
  01703b8  subc 3, 4, 3
  01703bc  lis 4, 114
  01703c0  sldi 3, 3, 4
  01703c4  addic 4, 4, 4152
  01703c8  extsw 3, 3
  01703cc  addc 3, 31, 3
  01703d0  lwz 5, 208(3)
  01703d4  lbz 3, 212(3)
  01703d8  sldi 6, 5, 4
  01703dc  cmpwi 3, 1
  01703e0  subc 5, 5, 6
  01703e4  sldi 5, 5, 2
  01703e8  subc 5, 6, 5
  01703ec  extsw 3, 5
  01703f0  lhzx 3, 4, 3
  01703f4  bf 2, 0x170408
  01703f8  li 4, 2
  01703fc  bl 0xca3e4
  0170400  nop
  0170404  b 0x170414
  0170408  ori 4, 30, 0
  017040c  bl 0xca3e4
  0170410  nop
  0170414  li 6, 48
  0170418  lis 8, -32640
  017041c  li 5, 6
  0170420  ori 7, 6, 0
  0170424  ori 8, 8, 32896
  0170428  ori 4, 28, 0
  017042c  bl 0xcc0f0
  0170430  nop
  0170434  addic 29, 29, 1
  0170438  addic 28, 28, 56
  017043c  cmpwi 29, 9
  0170440  extsw 28, 28
  0170444  bt 0, 0x170398
  0170448  ld 0, 224(1)
  017044c  mtlr 0
  0170450  ld 23, 136(1)
  0170454  ld 24, 144(1)
  0170458  ld 25, 152(1)
  017045c  ld 26, 160(1)
  0170460  ld 27, 168(1)
  0170464  ld 28, 176(1)
  0170468  ld 29, 184(1)
  017046c  ld 30, 192(1)
  0170470  ld 31, 200(1)
  0170474  addi 1, 1, 208
  0170478  blr

DrawWeaponStrings:   # 0x170490, 0x858 bytes
  0170490  stdu 1, -480(1)
  0170494  mflr 0
  0170498  std 0, 496(1)
  017049c  stfd 29, 456(1)
  01704a0  stfd 30, 464(1)
  01704a4  stfd 31, 472(1)
  01704a8  lis 4, 151
  01704ac  lis 3, 23
  01704b0  addi 3, 3, 1148
  01704b4  lwz 4, -25484(4)
  01704b8  cmpwi 4, 3
  01704bc  std 31, 448(1)
  01704c0  std 30, 440(1)
  01704c4  std 29, 432(1)
  01704c8  std 28, 424(1)
  01704cc  std 27, 416(1)
  01704d0  std 26, 408(1)
  01704d4  std 25, 400(1)
  01704d8  std 24, 392(1)
  01704dc  std 23, 384(1)
  01704e0  std 22, 376(1)
  01704e4  std 21, 368(1)
  01704e8  lfs 31, 0(3)
  01704ec  bf 2, 0x1704fc
  01704f0  lis 3, 23
  01704f4  addi 3, 3, 1148
  01704f8  lfs 31, 4(3)
  01704fc  li 25, 0
  0170500  li 5, 512
  0170504  li 6, 128
  0170508  ori 3, 25, 0
  017050c  ori 9, 25, 0
  0170510  ori 4, 25, 0
  0170514  ori 7, 5, 0
  0170518  ori 8, 6, 0
  017051c  bl 0x7813c
  0170520  nop
  0170524  lis 29, 230
  0170528  li 31, 1
  017052c  addic 29, 29, -22960
  0170530  ori 4, 31, 0
  0170534  lwz 3, 32(29)
  0170538  addic 3, 3, 256
  017053c  bl 0xf1934
  0170540  nop
  0170544  lwz 3, 32(29)
  0170548  ori 4, 31, 0
  017054c  bl 0xf1934
  0170550  nop
  0170554  lwz 3, 88(29)
  0170558  slwi 3, 3, 4
  017055c  extsw 31, 3
  0170560  addc 31, 29, 31
  0170564  lbz 3, 212(31)
  0170568  cmpwi 3, 1
  017056c  bf 2, 0x170910
  0170570  lis 3, 23
  0170574  lwz 6, 208(31)
  0170578  lis 5, -32528
  017057c  addi 3, 3, 1148
  0170580  sldi 7, 6, 4
  0170584  lis 4, 114
  0170588  addic 26, 29, 208
  017058c  addic 4, 4, 4096
  0170590  lfs 1, 8(3)
  0170594  lfs 2, 12(3)
  0170598  ori 3, 5, 61680
  017059c  fmr 30, 1
  01705a0  subc 5, 6, 7
  01705a4  fmr 29, 2
  01705a8  clrldi 30, 3, 32
  01705ac  sldi 3, 5, 2
  01705b0  subc 3, 7, 3
  01705b4  extsw 3, 3
  01705b8  lwzx 3, 4, 3
  01705bc  extsw 3, 3
  01705c0  bl 0x7b740
  01705c4  nop
  01705c8  li 27, -1
  01705cc  fmr 1, 30
  01705d0  ori 6, 3, 0
  01705d4  fmr 2, 29
  01705d8  ori 5, 30, 0
  01705dc  fmr 3, 31
  01705e0  ori 7, 27, 0
  01705e4  bl 0x6fe44
  01705e8  nop
  01705ec  li 3, 20317
  01705f0  li 31, 24
  01705f4  bl 0x7b740
  01705f8  nop
  01705fc  ori 6, 3, 0
  0170600  ori 3, 31, 0
  0170604  ori 4, 31, 0
  0170608  ori 5, 30, 0
  017060c  ori 7, 27, 0
  0170610  bl 0x6fc54
  0170614  nop
  0170618  lwz 3, 88(29)
  017061c  lis 31, 115
  0170620  slwi 3, 3, 4
  0170624  addic 31, 31, 32048
  0170628  extsw 3, 3
  017062c  lwzx 3, 26, 3
  0170630  sldi 3, 3, 3
  0170634  addc 4, 3, 3
  0170638  addc 3, 3, 4
  017063c  extsw 3, 3
  0170640  addc 3, 31, 3
  0170644  lhz 3, 8(3)
  0170648  cmpwi 3, 1000
  017064c  bt 0, 0x1706a4
  0170650  ori 6, 3, 0
  0170654  lis 3, 4194
  0170658  lis 7, 101
  017065c  ori 3, 3, 19923
  0170660  mulhw 4, 3, 6
  0170664  mulhw 3, 3, 6
  0170668  srawi 4, 4, 6
  017066c  srawi 3, 3, 6
  0170670  srwi 5, 4, 31
  0170674  addc 4, 4, 5
  0170678  mulli 8, 4, 1000
  017067c  srwi 5, 3, 31
  0170680  subc 6, 6, 8
  0170684  addc 5, 3, 5
  0170688  addic 4, 7, 16280
  017068c  addic 3, 1, 112
  0170690  extsw 5, 5
  0170694  extsw 6, 6
  0170698  bl 0x5cd2a8
  017069c  nop
  01706a0  b 0x1706bc
  01706a4  lis 4, 101
  01706a8  ori 5, 3, 0
  01706ac  addic 3, 1, 112
  01706b0  addic 4, 4, 16288
  01706b4  bl 0x5cd2a8
  01706b8  nop
  01706bc  li 28, 118
  01706c0  li 4, 101
  01706c4  ori 3, 28, 0
  01706c8  addic 6, 1, 112
  01706cc  ori 5, 30, 0
  01706d0  ori 7, 27, 0
  01706d4  bl 0x7027c
  01706d8  nop
  01706dc  lwz 3, 64(29)
  01706e0  cmpwi 3, 0
  01706e4  bt 2, 0x170ca0
  01706e8  addic 3, 1, 112
  01706ec  ori 4, 27, 0
  01706f0  bl 0x6cde8
  01706f4  nop
  01706f8  ori 24, 3, 0
  01706fc  li 23, 109
  0170700  subfic 3, 24, 117
  0170704  li 22, 112
  0170708  lis 7, 8341
  017070c  extsw 3, 3
  0170710  ori 4, 23, 0
  0170714  ori 8, 25, 0
  0170718  ori 6, 22, 0
  017071c  li 5, 123
  0170720  ori 7, 7, 38212
  0170724  bl 0xca72c
  0170728  nop
  017072c  subfic 3, 24, 118
  0170730  lis 7, 12437
  0170734  extsw 3, 3
  0170738  ori 4, 23, 0
  017073c  ori 6, 22, 0
  0170740  li 5, 122
  0170744  ori 7, 7, 38212
  0170748  ori 8, 25, 0
  017074c  bl 0xca72c
  0170750  nop
  0170754  subfic 3, 24, 119
  0170758  lis 7, 16533
  017075c  extsw 3, 3
  0170760  ori 4, 23, 0
  0170764  ori 6, 22, 0
  0170768  li 5, 121
  017076c  ori 7, 7, 38212
  0170770  ori 8, 25, 0
  0170774  bl 0xca72c
  0170778  nop
  017077c  subfic 3, 24, 120
  0170780  lis 7, 20629
  0170784  extsw 3, 3
  0170788  ori 4, 23, 0
  017078c  ori 6, 22, 0
  0170790  li 5, 120
  0170794  ori 7, 7, 38212
  0170798  ori 8, 25, 0
  017079c  bl 0xca72c
  01707a0  nop
  01707a4  subfic 3, 24, 121
  01707a8  lis 7, 24725
  01707ac  extsw 3, 3
  01707b0  ori 4, 23, 0
  01707b4  ori 6, 22, 0
  01707b8  li 5, 119
  01707bc  ori 7, 7, 38212
  01707c0  ori 8, 25, 0
  01707c4  bl 0xca72c
  01707c8  nop
  01707cc  subfic 3, 24, 122
  01707d0  lis 7, 28821
  01707d4  extsw 3, 3
  01707d8  ori 5, 28, 0
  01707dc  ori 8, 25, 0
  01707e0  ori 7, 7, 38212
  01707e4  ori 4, 23, 0
  01707e8  ori 6, 22, 0
  01707ec  bl 0xca72c
  01707f0  nop
  01707f4  lis 3, -32619
  01707f8  subfic 4, 24, 123
  01707fc  ori 7, 3, 38212
  0170800  extsw 3, 4
  0170804  ori 4, 23, 0
  0170808  li 5, 117
  017080c  ori 6, 22, 0
  0170810  clrldi 7, 7, 32
  0170814  ori 8, 25, 0
  0170818  bl 0xca72c
  017081c  nop
  0170820  lwz 3, 64(29)
  0170824  cmpwi 3, 0
  0170828  bt 2, 0x170858
  017082c  lwz 3, 88(29)
  0170830  slwi 3, 3, 4
  0170834  extsw 3, 3
  0170838  lwzx 3, 26, 3
  017083c  sldi 3, 3, 3
  0170840  addc 4, 3, 3
  0170844  addc 3, 3, 4
  0170848  extsw 3, 3
  017084c  addc 3, 31, 3
  0170850  lhz 29, 10(3)
  0170854  b 0x170880
  0170858  lwz 3, 88(29)
  017085c  slwi 3, 3, 4
  0170860  extsw 3, 3
  0170864  lwzx 3, 26, 3
  0170868  sldi 3, 3, 3
  017086c  addc 4, 3, 3
  0170870  addc 3, 3, 4
  0170874  extsw 3, 3
  0170878  addc 3, 31, 3
  017087c  lhz 29, 8(3)
  0170880  cmpwi 29, 1000
  0170884  bt 0, 0x1708d8
  0170888  lis 3, 4194
  017088c  lis 6, 101
  0170890  ori 3, 3, 19923
  0170894  mulhw 4, 3, 29
  0170898  mulhw 3, 3, 29
  017089c  srawi 4, 4, 6
  01708a0  srawi 3, 3, 6
  01708a4  srwi 5, 4, 31
  01708a8  addc 4, 4, 5
  01708ac  mulli 7, 4, 1000
  01708b0  srwi 5, 3, 31
  01708b4  addic 4, 6, 16280
  01708b8  addc 5, 3, 5
  01708bc  subc 6, 29, 7
  01708c0  addic 3, 1, 112
  01708c4  extsw 5, 5
  01708c8  extsw 6, 6
  01708cc  bl 0x5cd2a8
  01708d0  nop
  01708d4  b 0x1708f0
  01708d8  lis 4, 101
  01708dc  addic 3, 1, 112
  01708e0  addic 4, 4, 16288
  01708e4  ori 5, 29, 0
  01708e8  bl 0x5cd2a8
  01708ec  nop
  01708f0  li 4, 85
  01708f4  addic 6, 1, 112
  01708f8  ori 3, 28, 0
  01708fc  ori 5, 30, 0
  0170900  ori 7, 27, 0
  0170904  bl 0x7027c
  0170908  nop
  017090c  b 0x170ca0
  0170910  lis 3, 23
  0170914  lwz 5, 208(31)
  0170918  lis 4, 114
  017091c  addi 3, 3, 1148
  0170920  sldi 7, 5, 4
  0170924  addic 4, 4, 4096
  0170928  lis 6, -32528
  017092c  addic 24, 29, 208
  0170930  lfs 1, 8(3)
  0170934  ori 6, 6, 61680
  0170938  lfs 2, 12(3)
  017093c  subc 3, 5, 7
  0170940  fmr 30, 1
  0170944  clrldi 31, 6, 32
  0170948  sldi 3, 3, 2
  017094c  fmr 29, 2
  0170950  subc 3, 7, 3
  0170954  extsw 3, 3
  0170958  lwzx 3, 4, 3
  017095c  extsw 3, 3
  0170960  bl 0x7b740
  0170964  nop
  0170968  li 26, -1
  017096c  fmr 1, 30
  0170970  ori 6, 3, 0
  0170974  fmr 2, 29
  0170978  ori 5, 31, 0
  017097c  fmr 3, 31
  0170980  ori 7, 26, 0
  0170984  bl 0x6fe44
  0170988  nop
  017098c  lwz 3, 88(29)
  0170990  lis 30, 115
  0170994  slwi 3, 3, 4
  0170998  addic 30, 30, 32048
  017099c  extsw 3, 3
  01709a0  lwzx 3, 24, 3
  01709a4  sldi 3, 3, 3
  01709a8  addc 4, 3, 3
  01709ac  addc 3, 3, 4
  01709b0  extsw 3, 3
  01709b4  lwzx 3, 30, 3
  01709b8  extsw 3, 3
  01709bc  cmpwi 3, 1000
  01709c0  bt 0, 0x170a14
  01709c4  lis 4, 4194
  01709c8  ori 4, 4, 19923
  01709cc  mulhw 5, 4, 3
  01709d0  mulhw 4, 4, 3
  01709d4  srawi 5, 5, 6
  01709d8  srawi 6, 4, 6
  01709dc  srwi 4, 5, 31
  01709e0  srwi 8, 6, 31
  01709e4  addc 4, 5, 4
  01709e8  mulli 5, 4, 1000
  01709ec  lis 7, 101
  01709f0  subc 3, 3, 5
  01709f4  addc 5, 6, 8
  01709f8  extsw 6, 3
  01709fc  addic 4, 7, 16280
  0170a00  extsw 5, 5
  0170a04  addic 3, 1, 112
  0170a08  bl 0x5cd2a8
  0170a0c  nop
  0170a10  b 0x170a2c
  0170a14  lis 4, 101
  0170a18  ori 5, 3, 0
  0170a1c  addic 3, 1, 112
  0170a20  addic 4, 4, 16288
  0170a24  bl 0x5cd2a8
  0170a28  nop
  0170a2c  lis 28, 151
  0170a30  lis 3, -32528
  0170a34  addic 28, 28, -16064
  0170a38  li 27, 118
  0170a3c  ori 3, 3, 61680
  0170a40  lbz 4, 35(28)
  0170a44  cmpwi 4, 0
  0170a48  bt 2, 0x170a54
  0170a4c  lis 3, -32640
  0170a50  ori 3, 3, 32896
  0170a54  clrldi 5, 3, 32
  0170a58  ori 3, 27, 0
  0170a5c  li 4, 101
  0170a60  addic 6, 1, 112
  0170a64  ori 7, 26, 0
  0170a68  bl 0x7027c
  0170a6c  nop
  0170a70  lbz 3, 35(28)
  0170a74  cmpwi 3, 0
  0170a78  bt 2, 0x170ca0
  0170a7c  addic 3, 1, 112
  0170a80  ori 4, 26, 0
  0170a84  bl 0x6cde8
  0170a88  nop
  0170a8c  ori 23, 3, 0
  0170a90  li 22, 109
  0170a94  subfic 3, 23, 117
  0170a98  li 21, 112
  0170a9c  lis 7, 8341
  0170aa0  extsw 3, 3
  0170aa4  ori 4, 22, 0
  0170aa8  ori 6, 21, 0
  0170aac  ori 8, 25, 0
  0170ab0  li 5, 123
  0170ab4  ori 7, 7, 38212
  0170ab8  bl 0xca72c
  0170abc  nop
  0170ac0  subfic 3, 23, 118
  0170ac4  lis 7, 12437
  0170ac8  extsw 3, 3
  0170acc  ori 4, 22, 0
  0170ad0  ori 6, 21, 0
  0170ad4  ori 8, 25, 0
  0170ad8  li 5, 122
  0170adc  ori 7, 7, 38212
  0170ae0  bl 0xca72c
  0170ae4  nop
  0170ae8  subfic 3, 23, 119
  0170aec  lis 7, 16533
  0170af0  extsw 3, 3
  0170af4  ori 4, 22, 0
  0170af8  ori 6, 21, 0
  0170afc  ori 8, 25, 0
  0170b00  li 5, 121
  0170b04  ori 7, 7, 38212
  0170b08  bl 0xca72c
  0170b0c  nop
  0170b10  subfic 3, 23, 120
  0170b14  lis 7, 20629
  0170b18  extsw 3, 3
  0170b1c  ori 4, 22, 0
  0170b20  ori 6, 21, 0
  0170b24  ori 8, 25, 0
  0170b28  li 5, 120
  0170b2c  ori 7, 7, 38212
  0170b30  bl 0xca72c
  0170b34  nop
  0170b38  subfic 3, 23, 121
  0170b3c  lis 7, 24725
  0170b40  extsw 3, 3
  0170b44  ori 4, 22, 0
  0170b48  ori 6, 21, 0
  0170b4c  ori 8, 25, 0
  0170b50  li 5, 119
  0170b54  ori 7, 7, 38212
  0170b58  bl 0xca72c
  0170b5c  nop
  0170b60  subfic 3, 23, 122
  0170b64  lis 7, 28821
  0170b68  extsw 3, 3
  0170b6c  ori 4, 22, 0
  0170b70  ori 5, 27, 0
  0170b74  ori 8, 25, 0
  0170b78  ori 7, 7, 38212
  0170b7c  ori 6, 21, 0
  0170b80  bl 0xca72c
  0170b84  nop
  0170b88  lis 3, -32619
  0170b8c  ori 4, 22, 0
  0170b90  ori 7, 3, 38212
  0170b94  subfic 3, 23, 123
  0170b98  ori 6, 21, 0
  0170b9c  extsw 3, 3
  0170ba0  li 5, 117
  0170ba4  ori 8, 25, 0
  0170ba8  clrldi 7, 7, 32
  0170bac  bl 0xca72c
  0170bb0  nop
  0170bb4  lbz 3, 35(28)
  0170bb8  cmpwi 3, 0
  0170bbc  bt 2, 0x170bec
  0170bc0  lwz 3, 88(29)
  0170bc4  slwi 3, 3, 4
  0170bc8  extsw 3, 3
  0170bcc  lwzx 3, 24, 3
  0170bd0  sldi 3, 3, 3
  0170bd4  addc 4, 3, 3
  0170bd8  addc 3, 3, 4
  0170bdc  extsw 3, 3
  0170be0  addc 3, 30, 3
  0170be4  lwz 30, 4(3)
  0170be8  b 0x170c10
  0170bec  lwz 3, 88(29)
  0170bf0  slwi 3, 3, 4
  0170bf4  extsw 3, 3
  0170bf8  lwzx 3, 24, 3
  0170bfc  sldi 3, 3, 3
  0170c00  addc 4, 3, 3
  0170c04  addc 3, 3, 4
  0170c08  extsw 3, 3
  0170c0c  lwzx 30, 30, 3
  0170c10  extsw 30, 30
  0170c14  cmpwi 30, 1000
  0170c18  bt 0, 0x170c6c
  0170c1c  lis 3, 4194
  0170c20  lis 6, 101
  0170c24  ori 3, 3, 19923
  0170c28  mulhw 4, 3, 30
  0170c2c  mulhw 3, 3, 30
  0170c30  srawi 4, 4, 6
  0170c34  srawi 3, 3, 6
  0170c38  srwi 5, 4, 31
  0170c3c  srwi 7, 3, 31
  0170c40  addc 4, 4, 5
  0170c44  mulli 5, 4, 1000
  0170c48  addic 4, 6, 16280
  0170c4c  subc 6, 30, 5
  0170c50  addc 5, 3, 7
  0170c54  extsw 6, 6
  0170c58  extsw 5, 5
  0170c5c  addic 3, 1, 112
  0170c60  bl 0x5cd2a8
  0170c64  nop
  0170c68  b 0x170c84
  0170c6c  lis 4, 101
  0170c70  addic 3, 1, 112
  0170c74  addic 4, 4, 16288
  0170c78  ori 5, 30, 0
  0170c7c  bl 0x5cd2a8
  0170c80  nop
  0170c84  li 4, 85
  0170c88  ori 5, 31, 0
  0170c8c  addic 6, 1, 112
  0170c90  ori 3, 27, 0
  0170c94  ori 7, 26, 0
  0170c98  bl 0x7027c
  0170c9c  nop
  0170ca0  ld 0, 496(1)
  0170ca4  mtlr 0
  0170ca8  lfd 29, 456(1)
  0170cac  lfd 30, 464(1)
  0170cb0  lfd 31, 472(1)
  0170cb4  ld 21, 368(1)
  0170cb8  ld 22, 376(1)
  0170cbc  ld 23, 384(1)
  0170cc0  ld 24, 392(1)
  0170cc4  ld 25, 400(1)
  0170cc8  ld 26, 408(1)
  0170ccc  ld 27, 416(1)
  0170cd0  ld 28, 424(1)
  0170cd4  ld 29, 432(1)
  0170cd8  ld 30, 440(1)
  0170cdc  ld 31, 448(1)
  0170ce0  addi 1, 1, 480
  0170ce4  blr

DrawBuyButton:   # 0x170cf0, 0x2e0 bytes
  0170cf0  stdu 1, -192(1)
  0170cf4  mflr 0
  0170cf8  std 0, 208(1)
  0170cfc  stfd 31, 184(1)
  0170d00  std 30, 168(1)
  0170d04  std 31, 176(1)
  0170d08  li 30, 0
  0170d0c  ori 31, 5, 0
  0170d10  li 5, 512
  0170d14  li 6, 128
  0170d18  std 29, 160(1)
  0170d1c  ori 3, 30, 0
  0170d20  ori 29, 4, 0
  0170d24  ori 4, 30, 0
  0170d28  ori 9, 30, 0
  0170d2c  ori 7, 5, 0
  0170d30  std 28, 152(1)
  0170d34  std 27, 144(1)
  0170d38  ori 8, 6, 0
  0170d3c  bl 0x7813c
  0170d40  nop
  0170d44  li 3, 16
  0170d48  sth 30, 112(1)
  0170d4c  li 5, 1
  0170d50  sth 30, 116(1)
  0170d54  lis 4, 230
  0170d58  sth 30, 124(1)
  0170d5c  srawi 7, 29, 1
  0170d60  sth 30, 126(1)
  0170d64  addic 4, 4, -22960
  0170d68  sth 3, 128(1)
  0170d6c  srawi 6, 31, 1
  0170d70  sth 5, 130(1)
  0170d74  sth 30, 132(1)
  0170d78  sth 30, 134(1)
  0170d7c  addic 3, 6, -7
  0170d80  sth 31, 114(1)
  0170d84  sth 29, 118(1)
  0170d88  sth 7, 120(1)
  0170d8c  lwz 5, 92(4)
  0170d90  sth 3, 122(1)
  0170d94  cmpwi 5, 0
  0170d98  bt 2, 0x170efc
  0170d9c  lwz 3, 88(4)
  0170da0  slwi 3, 3, 4
  0170da4  extsw 3, 3
  0170da8  addc 3, 4, 3
  0170dac  lbz 5, 212(3)
  0170db0  cmpwi 5, 1
  0170db4  bf 2, 0x170e00
  0170db8  lwz 8, 208(3)
  0170dbc  lis 7, 115
  0170dc0  lis 6, 151
  0170dc4  sldi 9, 8, 3
  0170dc8  slwi 8, 8, 2
  0170dcc  addc 10, 9, 9
  0170dd0  addic 7, 7, 32048
  0170dd4  addc 9, 9, 10
  0170dd8  addic 6, 6, -16212
  0170ddc  extsw 9, 9
  0170de0  extsw 8, 8
  0170de4  addc 7, 7, 9
  0170de8  lwzx 6, 6, 8
  0170dec  lhz 7, 14(7)
  0170df0  cmpw 6, 7
  0170df4  bt 0, 0x170e00
  0170df8  li 30, 21043
  0170dfc  b 0x170f00
  0170e00  cmpwi 5, 1
  0170e04  bf 2, 0x170e7c
  0170e08  lwz 4, 64(4)
  0170e0c  cmpwi 4, 0
  0170e10  bt 2, 0x170e3c
  0170e14  lwz 3, 208(3)
  0170e18  lis 4, 115
  0170e1c  sldi 3, 3, 3
  0170e20  addic 4, 4, 32048
  0170e24  addc 5, 3, 3
  0170e28  addc 3, 3, 5
  0170e2c  extsw 3, 3
  0170e30  addc 3, 4, 3
  0170e34  lhz 3, 10(3)
  0170e38  b 0x170e60
  0170e3c  lwz 3, 208(3)
  0170e40  lis 4, 115
  0170e44  sldi 3, 3, 3
  0170e48  addic 4, 4, 32048
  0170e4c  addc 5, 3, 3
  0170e50  addc 3, 3, 5
  0170e54  extsw 3, 3
  0170e58  addc 3, 4, 3
  0170e5c  lhz 3, 8(3)
  0170e60  lis 4, 151
  0170e64  li 30, 21043
  0170e68  lwz 4, -25440(4)
  0170e6c  cmpw 4, 3
  0170e70  bt 0, 0x170e78
  0170e74  li 30, 21044
  0170e78  b 0x170f00
  0170e7c  lis 4, 151
  0170e80  addic 4, 4, -16064
  0170e84  lbz 4, 35(4)
  0170e88  cmpwi 4, 0
  0170e8c  bt 2, 0x170eb8
  0170e90  lwz 3, 208(3)
  0170e94  lis 4, 115
  0170e98  sldi 3, 3, 3
  0170e9c  addic 4, 4, 32048
  0170ea0  addc 5, 3, 3
  0170ea4  addc 3, 3, 5
  0170ea8  extsw 3, 3
  0170eac  addc 3, 4, 3
  0170eb0  lwz 3, 4(3)
  0170eb4  b 0x170ed8
  0170eb8  lwz 3, 208(3)
  0170ebc  lis 4, 115
  0170ec0  sldi 3, 3, 3
  0170ec4  addic 4, 4, 32048
  0170ec8  addc 5, 3, 3
  0170ecc  addc 3, 3, 5
  0170ed0  extsw 3, 3
  0170ed4  lwzx 3, 4, 3
  0170ed8  lis 4, 151
  0170edc  ori 5, 3, 0
  0170ee0  li 3, 21043
  0170ee4  lwz 4, -25440(4)
  0170ee8  cmpw 4, 5
  0170eec  bt 0, 0x170ef4
  0170ef0  ori 3, 30, 0
  0170ef4  ori 30, 3, 0
  0170ef8  b 0x170f00
  0170efc  li 30, 21044
  0170f00  cmpwi 30, 0
  0170f04  bt 2, 0x170fa8
  0170f08  lis 3, 23
  0170f0c  lis 4, -32528
  0170f10  addi 29, 3, 3304
  0170f14  lhz 3, 130(1)
  0170f18  ori 4, 4, 61680
  0170f1c  ori 5, 3, 4
  0170f20  clrldi 4, 4, 32
  0170f24  ori 3, 30, 0
  0170f28  addic 28, 1, 112
  0170f2c  sth 5, 130(1)
  0170f30  ori 27, 4, 0
  0170f34  bl 0x7b740
  0170f38  nop
  0170f3c  lfs 31, 0(29)
  0170f40  ori 5, 3, 0
  0170f44  li 29, -1
  0170f48  ori 3, 28, 0
  0170f4c  fmr 1, 31
  0170f50  ori 4, 27, 0
  0170f54  ori 6, 29, 0
  0170f58  bl 0x7100c
  0170f5c  nop
  0170f60  lhz 3, 126(1)
  0170f64  lhz 4, 130(1)
  0170f68  extsh 3, 3
  0170f6c  xori 4, 4, 4
  0170f70  subc 5, 31, 3
  0170f74  ori 3, 30, 0
  0170f78  srawi 5, 5, 1
  0170f7c  sth 4, 130(1)
  0170f80  sth 5, 122(1)
  0170f84  bl 0x7b740
  0170f88  nop
  0170f8c  ori 5, 3, 0
  0170f90  fmr 1, 31
  0170f94  ori 3, 28, 0
  0170f98  ori 4, 27, 0
  0170f9c  ori 6, 29, 0
  0170fa0  bl 0x7100c
  0170fa4  nop
  0170fa8  ld 0, 208(1)
  0170fac  mtlr 0
  0170fb0  lfd 31, 184(1)
  0170fb4  ld 27, 144(1)
  0170fb8  ld 28, 152(1)
  0170fbc  ld 29, 160(1)
  0170fc0  ld 30, 168(1)
  0170fc4  ld 31, 176(1)
  0170fc8  addi 1, 1, 192
  0170fcc  blr

DrawExitButton:   # 0x170fd0, 0x1bc bytes
  0170fd0  stdu 1, -144(1)
  0170fd4  mflr 0
  0170fd8  std 0, 160(1)
  0170fdc  li 3, 0
  0170fe0  li 5, 512
  0170fe4  li 6, 128
  0170fe8  ori 4, 3, 0
  0170fec  ori 7, 5, 0
  0170ff0  ori 8, 6, 0
  0170ff4  std 31, 136(1)
  0170ff8  std 30, 128(1)
  0170ffc  std 29, 120(1)
  0171000  ori 9, 3, 0
  0171004  bl 0x7813c
  0171008  nop
  017100c  lis 4, 230
  0171010  addic 4, 4, -22960
  0171014  lwz 3, 92(4)
  0171018  cmpwi 3, 0
  017101c  bt 2, 0x171130
  0171020  lwz 3, 88(4)
  0171024  slwi 3, 3, 4
  0171028  extsw 3, 3
  017102c  addc 3, 4, 3
  0171030  lbz 5, 212(3)
  0171034  cmpwi 5, 1
  0171038  bf 2, 0x17107c
  017103c  lwz 8, 208(3)
  0171040  lis 7, 115
  0171044  lis 6, 151
  0171048  sldi 9, 8, 3
  017104c  slwi 8, 8, 2
  0171050  addc 10, 9, 9
  0171054  addic 7, 7, 32048
  0171058  addc 9, 9, 10
  017105c  addic 6, 6, -16212
  0171060  extsw 9, 9
  0171064  extsw 8, 8
  0171068  addc 7, 7, 9
  017106c  lwzx 6, 6, 8
  0171070  lhz 7, 14(7)
  0171074  cmpw 6, 7
  0171078  bf 0, 0x171170
  017107c  cmpwi 5, 1
  0171080  bf 2, 0x171170
  0171084  lwz 4, 64(4)
  0171088  cmpwi 4, 0
  017108c  bt 2, 0x1710b8
  0171090  lwz 3, 208(3)
  0171094  lis 4, 115
  0171098  sldi 3, 3, 3
  017109c  addic 4, 4, 32048
  01710a0  addc 5, 3, 3
  01710a4  addc 3, 3, 5
  01710a8  extsw 3, 3
  01710ac  addc 3, 4, 3
  01710b0  lhz 3, 10(3)
  01710b4  b 0x1710dc
  01710b8  lwz 3, 208(3)
  01710bc  lis 4, 115
  01710c0  sldi 3, 3, 3
  01710c4  addic 4, 4, 32048
  01710c8  addc 5, 3, 3
  01710cc  addc 3, 3, 5
  01710d0  extsw 3, 3
  01710d4  addc 3, 4, 3
  01710d8  lhz 3, 8(3)
  01710dc  lis 4, 151
  01710e0  lwz 4, -25440(4)
  01710e4  cmpw 4, 3
  01710e8  bt 0, 0x171170
  01710ec  lis 4, -32528
  01710f0  li 3, 20192
  01710f4  ori 4, 4, 61680
  01710f8  li 31, 40
  01710fc  clrldi 4, 4, 32
  0171100  li 30, 20
  0171104  ori 29, 4, 0
  0171108  bl 0x7b740
  017110c  nop
  0171110  ori 6, 3, 0
  0171114  li 7, -1
  0171118  ori 3, 31, 0
  017111c  ori 4, 30, 0
  0171120  ori 5, 29, 0
  0171124  bl 0x70834
  0171128  nop
  017112c  b 0x171170
  0171130  lis 3, -32528
  0171134  li 31, 40
  0171138  ori 4, 3, 61680
  017113c  li 3, 20192
  0171140  clrldi 4, 4, 32
  0171144  li 30, 20
  0171148  ori 29, 4, 0
  017114c  bl 0x7b740
  0171150  nop
  0171154  ori 6, 3, 0
  0171158  li 7, -1
  017115c  ori 3, 31, 0
  0171160  ori 4, 30, 0
  0171164  ori 5, 29, 0
  0171168  bl 0x70834
  017116c  nop
  0171170  ld 0, 160(1)
  0171174  mtlr 0
  0171178  ld 29, 120(1)
  017117c  ld 30, 128(1)
  0171180  ld 31, 136(1)
  0171184  addi 1, 1, 144
  0171188  blr

Vendor_DrawItemInfo:   # 0x1711a8, 0x5ec bytes
  01711a8  stdu 1, -480(1)
  01711ac  mflr 0
  01711b0  std 0, 496(1)
  01711b4  stfd 29, 456(1)
  01711b8  stfd 30, 464(1)
  01711bc  stfd 31, 472(1)
  01711c0  std 30, 440(1)
  01711c4  std 29, 432(1)
  01711c8  ori 30, 5, 0
  01711cc  li 29, 0
  01711d0  li 5, 512
  01711d4  std 28, 424(1)
  01711d8  li 6, 128
  01711dc  ori 28, 4, 0
  01711e0  ori 3, 29, 0
  01711e4  ori 4, 29, 0
  01711e8  ori 9, 29, 0
  01711ec  ori 7, 5, 0
  01711f0  std 31, 448(1)
  01711f4  std 27, 416(1)
  01711f8  std 26, 408(1)
  01711fc  std 25, 400(1)
  0171200  ori 8, 6, 0
  0171204  bl 0x7813c
  0171208  nop
  017120c  lis 31, 230
  0171210  sth 29, 112(1)
  0171214  li 3, 16
  0171218  addic 31, 31, -22960
  017121c  sth 29, 116(1)
  0171220  li 4, 3
  0171224  sth 29, 132(1)
  0171228  srawi 6, 28, 1
  017122c  addze 6, 6
  0171230  lwz 7, 88(31)
  0171234  addic 5, 28, -8
  0171238  sth 3, 128(1)
  017123c  srawi 3, 30, 1
  0171240  sth 4, 130(1)
  0171244  slwi 4, 7, 4
  0171248  addze 7, 3
  017124c  sth 29, 134(1)
  0171250  extsw 3, 4
  0171254  sth 30, 114(1)
  0171258  sth 28, 118(1)
  017125c  addic 4, 30, -8
  0171260  addc 3, 31, 3
  0171264  sth 6, 120(1)
  0171268  sth 7, 122(1)
  017126c  sth 5, 124(1)
  0171270  sth 4, 126(1)
  0171274  lbz 4, 212(3)
  0171278  cmpwi 4, 1
  017127c  bf 2, 0x171304
  0171280  lwz 7, 208(3)
  0171284  lis 6, 115
  0171288  lis 5, 151
  017128c  sldi 8, 7, 3
  0171290  slwi 7, 7, 2
  0171294  addc 9, 8, 8
  0171298  addic 6, 6, 32048
  017129c  addc 8, 8, 9
  01712a0  addic 5, 5, -16212
  01712a4  extsw 8, 8
  01712a8  extsw 7, 7
  01712ac  addc 6, 6, 8
  01712b0  lwzx 5, 5, 7
  01712b4  lhz 6, 14(6)
  01712b8  cmpw 5, 6
  01712bc  bt 0, 0x171304
  01712c0  lis 4, -32528
  01712c4  lis 3, 23
  01712c8  ori 4, 4, 61680
  01712cc  addi 31, 3, 4492
  01712d0  clrldi 4, 4, 32
  01712d4  li 3, 21046
  01712d8  ori 30, 4, 0
  01712dc  bl 0x7b740
  01712e0  nop
  01712e4  ori 5, 3, 0
  01712e8  lfs 1, 0(31)
  01712ec  li 6, -1
  01712f0  addic 3, 1, 112
  01712f4  ori 4, 30, 0
  01712f8  bl 0x7100c
  01712fc  nop
  0171300  b 0x17175c
  0171304  cmpwi 4, 1
  0171308  bf 2, 0x1715b0
  017130c  lwz 4, 64(31)
  0171310  cmpwi 4, 0
  0171314  bt 2, 0x171340
  0171318  lwz 3, 208(3)
  017131c  lis 4, 115
  0171320  sldi 3, 3, 3
  0171324  addic 4, 4, 32048
  0171328  addc 5, 3, 3
  017132c  addc 3, 3, 5
  0171330  extsw 3, 3
  0171334  addc 3, 4, 3
  0171338  lhz 3, 10(3)
  017133c  b 0x171364
  0171340  lwz 3, 208(3)
  0171344  lis 4, 115
  0171348  sldi 3, 3, 3
  017134c  addic 4, 4, 32048
  0171350  addc 5, 3, 3
  0171354  addc 3, 3, 5
  0171358  extsw 3, 3
  017135c  addc 3, 4, 3
  0171360  lhz 3, 8(3)
  0171364  lis 4, 151
  0171368  lwz 4, -25440(4)
  017136c  cmpw 4, 3
  0171370  bt 0, 0x17156c
  0171374  li 30, 1
  0171378  lwz 3, 32(31)
  017137c  ori 4, 30, 0
  0171380  addic 3, 3, 1280
  0171384  bl 0xf1934
  0171388  nop
  017138c  lis 3, 23
  0171390  li 4, 6
  0171394  sth 30, 130(1)
  0171398  addi 30, 3, 4492
  017139c  lis 5, -32528
  01713a0  li 3, 21047
  01713a4  sth 4, 122(1)
  01713a8  ori 4, 5, 61680
  01713ac  clrldi 28, 4, 32
  01713b0  bl 0x7b740
  01713b4  nop
  01713b8  lfs 1, 0(30)
  01713bc  ori 5, 3, 0
  01713c0  li 30, -1
  01713c4  addic 3, 1, 112
  01713c8  ori 4, 28, 0
  01713cc  ori 6, 30, 0
  01713d0  bl 0x7100c
  01713d4  nop
  01713d8  lis 29, 230
  01713dc  lis 26, 101
  01713e0  addic 27, 1, 136
  01713e4  addic 26, 26, 16288
  01713e8  ori 3, 27, 0
  01713ec  lwz 5, -22180(29)
  01713f0  ori 4, 26, 0
  01713f4  extsw 5, 5
  01713f8  bl 0x5cd2a8
  01713fc  nop
  0171400  lwz 3, -22180(29)
  0171404  cmpwi 3, 99
  0171408  bf 1, 0x17142c
  017140c  li 3, 23
  0171410  li 4, 50
  0171414  ori 5, 28, 0
  0171418  ori 6, 27, 0
  017141c  ori 7, 30, 0
  0171420  bl 0x6fc54
  0171424  nop
  0171428  b 0x171474
  017142c  lwz 3, -22180(29)
  0171430  cmpwi 3, 9
  0171434  bf 1, 0x171458
  0171438  li 3, 30
  017143c  li 4, 50
  0171440  ori 5, 28, 0
  0171444  ori 6, 27, 0
  0171448  ori 7, 30, 0
  017144c  bl 0x6fc54
  0171450  nop
  0171454  b 0x171474
  0171458  li 3, 37
  017145c  li 4, 50
  0171460  ori 5, 28, 0
  0171464  ori 6, 27, 0
  0171468  ori 7, 30, 0
  017146c  bl 0x6fc54
  0171470  nop
  0171474  lis 6, 101
  0171478  li 25, 50
  017147c  addic 6, 6, 16292
  0171480  li 3, 12
  0171484  ori 5, 28, 0
  0171488  ori 7, 30, 0
  017148c  ori 4, 25, 0
  0171490  bl 0x6fc54
  0171494  nop
  0171498  lis 6, 101
  017149c  li 3, 64
  01714a0  ori 5, 28, 0
  01714a4  addic 6, 6, 16300
  01714a8  ori 4, 25, 0
  01714ac  ori 7, 30, 0
  01714b0  bl 0x6fc54
  01714b4  nop
  01714b8  lwz 3, 64(31)
  01714bc  cmpwi 3, 0
  01714c0  bt 2, 0x1714fc
  01714c4  lwz 4, 88(31)
  01714c8  lis 3, 115
  01714cc  slwi 4, 4, 4
  01714d0  addic 3, 3, 32048
  01714d4  extsw 4, 4
  01714d8  addc 4, 31, 4
  01714dc  lwz 4, 208(4)
  01714e0  sldi 4, 4, 3
  01714e4  addc 5, 4, 4
  01714e8  addc 4, 4, 5
  01714ec  extsw 4, 4
  01714f0  addc 3, 3, 4
  01714f4  lhz 31, 10(3)
  01714f8  b 0x171530
  01714fc  lwz 4, 88(31)
  0171500  lis 3, 115
  0171504  slwi 4, 4, 4
  0171508  addic 3, 3, 32048
  017150c  extsw 4, 4
  0171510  addc 4, 31, 4
  0171514  lwz 4, 208(4)
  0171518  sldi 4, 4, 3
  017151c  addc 5, 4, 4
  0171520  addc 4, 4, 5
  0171524  extsw 4, 4
  0171528  addc 3, 3, 4
  017152c  lhz 31, 8(3)
  0171530  lwz 5, -22180(29)
  0171534  ori 3, 27, 0
  0171538  mullw 5, 5, 31
  017153c  ori 4, 26, 0
  0171540  extsw 5, 5
  0171544  bl 0x5cd2a8
  0171548  nop
  017154c  li 3, 64
  0171550  li 4, 76
  0171554  ori 5, 28, 0
  0171558  ori 6, 27, 0
  017155c  ori 7, 30, 0
  0171560  bl 0x7027c
  0171564  nop
  0171568  b 0x17175c
  017156c  lis 4, -32528
  0171570  lis 3, 23
  0171574  ori 4, 4, 61680
  0171578  addi 31, 3, 4492
  017157c  clrldi 4, 4, 32
  0171580  li 3, 21048
  0171584  ori 30, 4, 0
  0171588  bl 0x7b740
  017158c  nop
  0171590  ori 5, 3, 0
  0171594  lfs 1, 0(31)
  0171598  li 6, -1
  017159c  addic 3, 1, 112
  01715a0  ori 4, 30, 0
  01715a4  bl 0x7100c
  01715a8  nop
  01715ac  b 0x17175c
  01715b0  lis 4, 151
  01715b4  addic 4, 4, -16064
  01715b8  lbz 4, 35(4)
  01715bc  cmpwi 4, 0
  01715c0  bt 2, 0x1715ec
  01715c4  lwz 3, 208(3)
  01715c8  lis 4, 115
  01715cc  sldi 3, 3, 3
  01715d0  addic 4, 4, 32048
  01715d4  addc 5, 3, 3
  01715d8  addc 3, 3, 5
  01715dc  extsw 3, 3
  01715e0  addc 3, 4, 3
  01715e4  lwz 3, 4(3)
  01715e8  b 0x17160c
  01715ec  lwz 3, 208(3)
  01715f0  lis 4, 115
  01715f4  sldi 3, 3, 3
  01715f8  addic 4, 4, 32048
  01715fc  addc 5, 3, 3
  0171600  addc 3, 3, 5
  0171604  extsw 3, 3
  0171608  lwzx 3, 4, 3
  017160c  lis 4, 23
  0171610  addi 5, 4, 4492
  0171614  lis 4, 151
  0171618  lfs 30, 0(5)
  017161c  lwz 5, -25484(4)
  0171620  fmr 31, 30
  0171624  cmpwi 5, 4
  0171628  bt 2, 0x171644
  017162c  lwz 5, -25484(4)
  0171630  cmpwi 5, 2
  0171634  bt 2, 0x171644
  0171638  lwz 4, -25484(4)
  017163c  cmpwi 4, 5
  0171640  bf 2, 0x171650
  0171644  lis 4, 23
  0171648  addi 4, 4, 4492
  017164c  lfs 30, 4(4)
  0171650  lis 4, 151
  0171654  lwz 4, -25440(4)
  0171658  cmpw 4, 3
  017165c  bt 0, 0x171724
  0171660  lis 3, 23
  0171664  lis 4, -32528
  0171668  addi 31, 3, 4492
  017166c  ori 4, 4, 61680
  0171670  li 3, 21049
  0171674  clrldi 4, 4, 32
  0171678  lfs 1, 8(31)
  017167c  ori 30, 4, 0
  0171680  fmr 31, 1
  0171684  bl 0x7b740
  0171688  nop
  017168c  li 29, -1
  0171690  fmr 1, 31
  0171694  ori 5, 30, 0
  0171698  fmr 2, 31
  017169c  ori 6, 3, 0
  01716a0  fmr 3, 30
  01716a4  ori 7, 29, 0
  01716a8  bl 0x6fe44
  01716ac  nop
  01716b0  lfs 1, 12(31)
  01716b4  li 3, 21044
  01716b8  lfs 2, 16(31)
  01716bc  fmr 31, 1
  01716c0  fmr 29, 2
  01716c4  bl 0x7b740
  01716c8  nop
  01716cc  fmr 1, 31
  01716d0  ori 5, 30, 0
  01716d4  fmr 2, 29
  01716d8  ori 6, 3, 0
  01716dc  fmr 3, 30
  01716e0  ori 7, 29, 0
  01716e4  bl 0x6fe44
  01716e8  nop
  01716ec  lfs 1, 20(31)
  01716f0  li 3, 21067
  01716f4  fmr 29, 1
  01716f8  bl 0x7b740
  01716fc  nop
  0171700  fmr 1, 31
  0171704  ori 5, 30, 0
  0171708  fmr 2, 29
  017170c  ori 6, 3, 0
  0171710  fmr 3, 30
  0171714  ori 7, 29, 0
  0171718  bl 0x6fe44
  017171c  nop
  0171720  b 0x17175c
  0171724  lis 3, -32528
  0171728  ori 4, 3, 61680
  017172c  li 3, 21048
  0171730  clrldi 4, 4, 32
  0171734  ori 31, 4, 0
  0171738  bl 0x7b740
  017173c  nop
  0171740  ori 5, 3, 0
  0171744  fmr 1, 31
  0171748  li 6, -1
  017174c  addic 3, 1, 112
  0171750  ori 4, 31, 0
  0171754  bl 0x7100c
  0171758  nop
  017175c  ld 0, 496(1)
  0171760  mtlr 0
  0171764  lfd 29, 456(1)
  0171768  lfd 30, 464(1)
  017176c  lfd 31, 472(1)
  0171770  ld 25, 400(1)
  0171774  ld 26, 408(1)
  0171778  ld 27, 416(1)
  017177c  ld 28, 424(1)
  0171780  ld 29, 432(1)
  0171784  ld 30, 440(1)
  0171788  ld 31, 448(1)
  017178c  addi 1, 1, 480
  0171790  blr

Vendor_DrawFlickerText:   # 0x1717a8, 0x52c bytes
  01717a8  stdu 1, -272(1)
  01717ac  mflr 0
  01717b0  std 0, 288(1)
  01717b4  stfd 27, 232(1)
  01717b8  stfd 28, 240(1)
  01717bc  stfd 29, 248(1)
  01717c0  stfd 30, 256(1)
  01717c4  stfd 31, 264(1)
  01717c8  std 31, 224(1)
  01717cc  ori 31, 3, 0
  01717d0  std 28, 200(1)
  01717d4  li 3, 1
  01717d8  fmr 31, 2
  01717dc  std 29, 208(1)
  01717e0  li 28, 2
  01717e4  fmr 30, 1
  01717e8  std 30, 216(1)
  01717ec  li 29, 0
  01717f0  li 30, 22
  01717f4  ori 4, 3, 0
  01717f8  ori 6, 28, 0
  01717fc  ori 5, 29, 0
  0171800  ori 9, 3, 0
  0171804  ori 7, 29, 0
  0171808  ori 10, 3, 0
  017180c  std 27, 192(1)
  0171810  std 26, 184(1)
  0171814  std 25, 176(1)
  0171818  std 24, 168(1)
  017181c  std 23, 160(1)
  0171820  std 22, 152(1)
  0171824  ori 8, 29, 0
  0171828  bl 0x502f7c
  017182c  nop
  0171830  ori 4, 3, 0
  0171834  ori 3, 30, 0
  0171838  bl 0x174f80
  017183c  nop
  0171840  lis 3, 161
  0171844  lis 4, 1
  0171848  addic 30, 3, 24396
  017184c  ori 26, 4, 257
  0171850  li 3, 28
  0171854  lwz 4, 28(30)
  0171858  addic 27, 4, 8
  017185c  bl 0x685c4
  0171860  nop
  0171864  sldi 4, 3, 5
  0171868  lwz 5, 28(30)
  017186c  sldi 3, 3, 2
  0171870  addic 30, 5, 8
  0171874  addc 3, 4, 3
  0171878  addc 3, 27, 3
  017187c  clrldi 4, 3, 32
  0171880  li 3, 26
  0171884  stw 26, 0(4)
  0171888  bl 0x685c4
  017188c  nop
  0171890  sldi 4, 3, 5
  0171894  sldi 3, 3, 2
  0171898  lis 27, 230
  017189c  addc 3, 4, 3
  01718a0  sldi 4, 31, 2
  01718a4  addc 3, 30, 3
  01718a8  addic 27, 27, -22052
  01718ac  clrldi 3, 3, 32
  01718b0  extsw 30, 4
  01718b4  stw 26, 0(3)
  01718b8  lwzx 3, 27, 30
  01718bc  cmpwi 3, 0
  01718c0  bf 2, 0x1718cc
  01718c4  cmpwi 31, 0
  01718c8  bf 2, 0x171a74
  01718cc  lwzx 3, 27, 30
  01718d0  cmpwi 3, 0
  01718d4  bt 2, 0x1718e4
  01718d8  lwzx 3, 27, 30
  01718dc  addic 3, 3, 2
  01718e0  stwx 3, 27, 30
  01718e4  cmpwi 31, 0
  01718e8  lwzx 26, 27, 30
  01718ec  bf 2, 0x1718fc
  01718f0  cmpwi 26, 24
  01718f4  bf 0, 0x1718fc
  01718f8  li 26, 24
  01718fc  li 25, 200
  0171900  ori 3, 25, 0
  0171904  bl 0xfc620
  0171908  nop
  017190c  extsw 3, 3
  0171910  std 3, 128(1)
  0171914  ori 3, 25, 0
  0171918  lfd 1, 128(1)
  017191c  fcfid 28, 1
  0171920  frsp 28, 28
  0171924  bl 0xfc620
  0171928  nop
  017192c  extsw 3, 3
  0171930  std 3, 128(1)
  0171934  addic 3, 26, -128
  0171938  extsw 3, 3
  017193c  lfd 1, 128(1)
  0171940  fcfid 29, 1
  0171944  frsp 29, 29
  0171948  bl 0x5c4988
  017194c  nop
  0171950  subfic 26, 3, 128
  0171954  ori 3, 29, 0
  0171958  li 25, 6
  017195c  ori 4, 29, 0
  0171960  ori 8, 29, 0
  0171964  ori 5, 29, 0
  0171968  ori 6, 29, 0
  017196c  ori 7, 29, 0
  0171970  bl 0x502f08
  0171974  nop
  0171978  ori 4, 3, 0
  017197c  ori 3, 25, 0
  0171980  bl 0x174f80
  0171984  nop
  0171988  sldi 26, 26, 1
  017198c  li 3, 255
  0171990  cmpwi 26, 255
  0171994  bt 1, 0x17199c
  0171998  ori 3, 26, 0
  017199c  clrldi 7, 3, 32
  01719a0  ori 3, 29, 0
  01719a4  ori 4, 28, 0
  01719a8  li 6, 1
  01719ac  ori 5, 28, 0
  01719b0  bl 0x502ea8
  01719b4  nop
  01719b8  ori 4, 3, 0
  01719bc  li 3, 3
  01719c0  bl 0x174f80
  01719c4  nop
  01719c8  fadds 1, 30, 28
  01719cc  lis 3, 23
  01719d0  fctiwz 2, 28
  01719d4  fadds 4, 31, 29
  01719d8  addi 3, 3, 6036
  01719dc  fctiwz 3, 29
  01719e0  lfs 5, 0(3)
  01719e4  lis 3, 128
  01719e8  fctiwz 1, 1
  01719ec  fmr 29, 5
  01719f0  ori 25, 3, 32896
  01719f4  stfd 2, 128(1)
  01719f8  fctiwz 2, 4
  01719fc  li 3, 26
  0171a00  lwz 4, 132(1)
  0171a04  stfd 3, 128(1)
  0171a08  lwz 5, 132(1)
  0171a0c  extsw 26, 4
  0171a10  extsw 24, 5
  0171a14  stfd 1, 128(1)
  0171a18  lwz 4, 132(1)
  0171a1c  extsw 23, 4
  0171a20  stfd 2, 128(1)
  0171a24  lwz 4, 132(1)
  0171a28  extsw 22, 4
  0171a2c  bl 0x685c4
  0171a30  nop
  0171a34  std 25, 112(1)
  0171a38  std 3, 120(1)
  0171a3c  ori 7, 26, 0
  0171a40  fmr 1, 29
  0171a44  ori 8, 24, 0
  0171a48  fmr 2, 29
  0171a4c  ori 9, 23, 0
  0171a50  fmr 3, 30
  0171a54  ori 10, 22, 0
  0171a58  fmr 4, 31
  0171a5c  bl 0x6968c
  0171a60  nop
  0171a64  lwzx 3, 27, 30
  0171a68  cmpwi 3, 256
  0171a6c  bt 0, 0x171a74
  0171a70  stwx 29, 27, 30
  0171a74  lwzx 3, 27, 30
  0171a78  cmpwi 3, 0
  0171a7c  bf 2, 0x171a98
  0171a80  li 3, 700
  0171a84  bl 0xfc620
  0171a88  nop
  0171a8c  cmpwi 3, 0
  0171a90  bf 2, 0x171a98
  0171a94  stwx 28, 27, 30
  0171a98  ori 3, 29, 0
  0171a9c  li 27, 6
  0171aa0  ori 4, 29, 0
  0171aa4  ori 8, 29, 0
  0171aa8  ori 5, 29, 0
  0171aac  ori 6, 29, 0
  0171ab0  ori 7, 29, 0
  0171ab4  bl 0x502f08
  0171ab8  nop
  0171abc  ori 4, 3, 0
  0171ac0  ori 3, 27, 0
  0171ac4  bl 0x174f80
  0171ac8  nop
  0171acc  li 4, 1
  0171ad0  ori 3, 29, 0
  0171ad4  li 27, 3
  0171ad8  ori 6, 4, 0
  0171adc  li 7, 128
  0171ae0  ori 5, 29, 0
  0171ae4  bl 0x502ea8
  0171ae8  nop
  0171aec  ori 4, 3, 0
  0171af0  ori 3, 27, 0
  0171af4  bl 0x174f80
  0171af8  nop
  0171afc  cmpwi 31, 0
  0171b00  bf 1, 0x171c20
  0171b04  lis 27, 230
  0171b08  addic 27, 27, -22024
  0171b0c  lwzx 3, 27, 30
  0171b10  cmpwi 3, 0
  0171b14  bt 2, 0x171c08
  0171b18  lwzx 3, 27, 30
  0171b1c  addic 4, 3, 2
  0171b20  addic 3, 3, -126
  0171b24  extsw 3, 3
  0171b28  stwx 4, 27, 30
  0171b2c  bl 0x5c4988
  0171b30  nop
  0171b34  subfic 28, 3, 128
  0171b38  cmpwi 28, 80
  0171b3c  bf 1, 0x171b44
  0171b40  li 28, 80
  0171b44  lwzx 3, 27, 30
  0171b48  subfic 3, 3, 512
  0171b4c  extsw 3, 3
  0171b50  bl 0x502730
  0171b54  nop
  0171b58  fctiwz 2, 30
  0171b5c  lis 3, 23
  0171b60  addi 3, 3, 6036
  0171b64  sldi 4, 28, 24
  0171b68  lfs 3, 4(3)
  0171b6c  lfs 4, 0(3)
  0171b70  fmuls 1, 1, 3
  0171b74  fmr 29, 4
  0171b78  stfd 2, 128(1)
  0171b7c  lfs 2, 8(3)
  0171b80  lfs 5, 12(3)
  0171b84  fadds 28, 31, 2
  0171b88  lis 3, 160
  0171b8c  lwz 5, 132(1)
  0171b90  ori 3, 3, 41120
  0171b94  fneg 27, 1
  0171b98  or 3, 4, 3
  0171b9c  extsw 28, 5
  0171ba0  extsw 26, 3
  0171ba4  li 3, 28
  0171ba8  fmuls 1, 28, 5
  0171bac  fctiwz 1, 1
  0171bb0  stfd 1, 128(1)
  0171bb4  lwz 4, 132(1)
  0171bb8  extsw 25, 4
  0171bbc  bl 0x685c4
  0171bc0  nop
  0171bc4  std 26, 112(1)
  0171bc8  std 3, 120(1)
  0171bcc  fmr 1, 29
  0171bd0  ori 7, 29, 0
  0171bd4  fmr 2, 27
  0171bd8  ori 8, 29, 0
  0171bdc  fmr 3, 30
  0171be0  ori 9, 28, 0
  0171be4  fmr 4, 28
  0171be8  ori 10, 25, 0
  0171bec  bl 0x6968c
  0171bf0  nop
  0171bf4  lwzx 3, 27, 30
  0171bf8  cmpwi 3, 512
  0171bfc  bt 0, 0x171c20
  0171c00  stwx 29, 27, 30
  0171c04  b 0x171c20
  0171c08  li 3, 360
  0171c0c  bl 0xfc620
  0171c10  nop
  0171c14  cmpwi 3, 0
  0171c18  bf 2, 0x171c20
  0171c1c  stwx 28, 27, 30
  0171c20  cmpwi 31, 6
  0171c24  bf 2, 0x171c88
  0171c28  lis 3, 23
  0171c2c  lis 5, -32640
  0171c30  addi 4, 3, 6036
  0171c34  ori 5, 5, 32896
  0171c38  li 3, 25
  0171c3c  li 31, 64
  0171c40  lfs 1, 0(4)
  0171c44  clrldi 4, 5, 32
  0171c48  fmr 29, 1
  0171c4c  ori 30, 4, 0
  0171c50  bl 0x685c4
  0171c54  nop
  0171c58  std 30, 112(1)
  0171c5c  fmr 1, 29
  0171c60  ori 7, 29, 0
  0171c64  fmr 2, 29
  0171c68  ori 8, 29, 0
  0171c6c  fmr 3, 30
  0171c70  ori 9, 31, 0
  0171c74  fmr 4, 31
  0171c78  ori 10, 31, 0
  0171c7c  std 3, 120(1)
  0171c80  bl 0x6968c
  0171c84  nop
  0171c88  ld 0, 288(1)
  0171c8c  mtlr 0
  0171c90  lfd 27, 232(1)
  0171c94  lfd 28, 240(1)
  0171c98  lfd 29, 248(1)
  0171c9c  lfd 30, 256(1)
  0171ca0  lfd 31, 264(1)
  0171ca4  ld 22, 152(1)
  0171ca8  ld 23, 160(1)
  0171cac  ld 24, 168(1)
  0171cb0  ld 25, 176(1)
  0171cb4  ld 26, 184(1)
  0171cb8  ld 27, 192(1)
  0171cbc  ld 28, 200(1)
  0171cc0  ld 29, 208(1)
  0171cc4  ld 30, 216(1)
  0171cc8  ld 31, 224(1)
  0171ccc  addi 1, 1, 272
  0171cd0  blr

Vendor_SetupScreenRender:   # 0x171d00, 0xefc bytes
  0171d00  stdu 1, -752(1)
  0171d04  mflr 0
  0171d08  std 0, 768(1)
  0171d0c  stfd 30, 736(1)
  0171d10  stfd 31, 744(1)
  0171d14  std 30, 720(1)
  0171d18  lis 5, 23
  0171d1c  lis 30, 150
  0171d20  addi 5, 5, 7380
  0171d24  addic 30, 30, -12416
  0171d28  std 27, 696(1)
  0171d2c  lis 6, 16256
  0171d30  li 27, 1
  0171d34  lfs 30, 0(5)
  0171d38  std 25, 680(1)
  0171d3c  stw 6, 584(30)
  0171d40  slw 25, 27, 3
  0171d44  std 26, 688(1)
  0171d48  lfs 31, 12(5)
  0171d4c  slw 26, 27, 4
  0171d50  lfs 3, 4(5)
  0171d54  extsw 3, 25
  0171d58  lfs 4, 8(5)
  0171d5c  extsw 4, 26
  0171d60  fmr 2, 31
  0171d64  std 31, 728(1)
  0171d68  std 29, 712(1)
  0171d6c  std 28, 704(1)
  0171d70  std 24, 672(1)
  0171d74  fmr 5, 31
  0171d78  bl 0x682c8
  0171d7c  nop
  0171d80  lwz 3, 180(30)
  0171d84  lis 31, 144
  0171d88  lfs 2, 180(30)
  0171d8c  fabs 1, 30
  0171d90  stfs 30, 480(1)
  0171d94  fabs 2, 2
  0171d98  rlwinm 3, 3, 3, 29, 29
  0171d9c  lwz 31, -23196(31)
  0171da0  lis 4, 115
  0171da4  addic 4, 4, 22784
  0171da8  addic 5, 4, 4
  0171dac  fsubs 3, 1, 2
  0171db0  stfs 3, 484(1)
  0171db4  lwz 6, 480(1)
  0171db8  lwz 7, 484(1)
  0171dbc  lfs 3, 484(1)
  0171dc0  rlwimi 3, 7, 2, 30, 30
  0171dc4  fcmpu 0, 3, 31
  0171dc8  rlwimi 3, 6, 4, 28, 28
  0171dcc  slwi 3, 3, 2
  0171dd0  addc 5, 5, 3
  0171dd4  clrldi 5, 5, 32
  0171dd8  lfsx 3, 4, 3
  0171ddc  lfs 4, 0(5)
  0171de0  bt 0, 0x171df0
  0171de4  fmr 1, 2
  0171de8  lfs 2, 480(1)
  0171dec  fabs 2, 2
  0171df0  fcmpu 0, 2, 31
  0171df4  bt 1, 0x171e00
  0171df8  fmr 3, 31
  0171dfc  b 0x171ef4
  0171e00  fsubs 5, 1, 2
  0171e04  ori 3, 1, 0
  0171e08  fadds 1, 1, 2
  0171e0c  li 4, 4
  0171e10  fdivs 1, 5, 1
  0171e14  addic 4, 4, -1
  0171e18  stfs 1, 536(3)
  0171e1c  cmpwi 4, 0
  0171e20  addic 3, 3, 4
  0171e24  bf 2, 0x171e14
  0171e28  fmuls 2, 1, 1
  0171e2c  addic 3, 1, 16
  0171e30  lfs 1, 548(1)
  0171e34  li 4, 4
  0171e38  lfs 5, 540(1)
  0171e3c  lfs 7, 544(1)
  0171e40  fmuls 6, 2, 2
  0171e44  fmuls 5, 5, 2
  0171e48  fmuls 8, 1, 6
  0171e4c  fmuls 7, 7, 6
  0171e50  fmuls 1, 6, 6
  0171e54  stfs 5, 540(1)
  0171e58  fmuls 2, 8, 2
  0171e5c  stfs 7, 544(1)
  0171e60  stfs 2, 548(1)
  0171e64  lfs 2, 520(3)
  0171e68  addic 4, 4, -1
  0171e6c  fmuls 2, 2, 1
  0171e70  cmpwi 4, 0
  0171e74  stfs 2, 536(3)
  0171e78  addic 3, 3, 4
  0171e7c  bf 2, 0x171e64
  0171e80  lis 3, 115
  0171e84  li 4, 0
  0171e88  addic 3, 3, 22752
  0171e8c  ori 5, 1, 0
  0171e90  li 6, 8
  0171e94  lfs 1, 536(5)
  0171e98  lfsx 2, 3, 4
  0171e9c  addic 6, 6, -1
  0171ea0  addic 4, 4, 4
  0171ea4  fmuls 1, 1, 2
  0171ea8  cmpwi 6, 0
  0171eac  stfs 1, 536(5)
  0171eb0  addic 5, 5, 4
  0171eb4  bf 2, 0x171e94
  0171eb8  fmr 1, 31
  0171ebc  ori 3, 1, 0
  0171ec0  li 4, 8
  0171ec4  addic 4, 4, -1
  0171ec8  lfs 2, 536(3)
  0171ecc  cmpwi 4, 0
  0171ed0  addic 3, 3, 4
  0171ed4  fadds 1, 1, 2
  0171ed8  bf 2, 0x171ec4
  0171edc  lis 3, 23
  0171ee0  addi 3, 3, 7380
  0171ee4  lfs 2, 16(3)
  0171ee8  fadds 1, 1, 2
  0171eec  fmuls 3, 1, 3
  0171ef0  fadds 3, 3, 4
  0171ef4  lis 3, 23
  0171ef8  fmr 1, 3
  0171efc  addi 4, 3, 7380
  0171f00  ori 3, 31, 0
  0171f04  lfs 4, 20(4)
  0171f08  lwz 5, 0(31)
  0171f0c  lfs 5, 584(30)
  0171f10  lfs 2, 24(4)
  0171f14  lfs 3, 28(4)
  0171f18  fmuls 1, 1, 4
  0171f1c  lwz 4, 32(5)
  0171f20  std 2, 40(1)
  0171f24  lwz 5, 0(4)
  0171f28  lwz 2, 4(4)
  0171f2c  mtctr 5
  0171f30  fmuls 1, 1, 5
  0171f34  bcctrl 20, 30
  0171f38  lis 3, 149
  0171f3c  ld 2, 40(1)
  0171f40  addic 4, 1, 112
  0171f44  addic 5, 3, 5056
  0171f48  addic 6, 1, 128
  0171f4c  addic 7, 1, 144
  0171f50  lfs 1, 5056(3)
  0171f54  addic 8, 1, 160
  0171f58  addic 9, 1, 384
  0171f5c  lfs 2, 16(5)
  0171f60  lfs 3, 32(5)
  0171f64  stfs 1, 0(4)
  0171f68  stfs 2, 4(4)
  0171f6c  stfs 3, 8(4)
  0171f70  stfs 31, 12(4)
  0171f74  lfs 1, 4(5)
  0171f78  lvx 2, 0, 4
  0171f7c  lfs 4, 20(5)
  0171f80  lfs 5, 36(5)
  0171f84  addic 4, 1, 352
  0171f88  stfs 1, 0(6)
  0171f8c  stfs 4, 4(6)
  0171f90  stfs 5, 8(6)
  0171f94  stfs 31, 12(6)
  0171f98  lfs 6, 8(5)
  0171f9c  lvx 3, 0, 6
  0171fa0  lfs 7, 24(5)
  0171fa4  addic 6, 1, 368
  0171fa8  lfs 8, 40(5)
  0171fac  stfs 6, 0(7)
  0171fb0  stfs 7, 4(7)
  0171fb4  stfs 8, 8(7)
  0171fb8  stfs 31, 12(7)
  0171fbc  lfs 9, 320(5)
  0171fc0  lvx 4, 0, 7
  0171fc4  lfs 10, 324(5)
  0171fc8  lfs 11, 328(5)
  0171fcc  addic 7, 1, 400
  0171fd0  stfs 9, 0(8)
  0171fd4  addic 5, 1, 176
  0171fd8  stfs 10, 4(8)
  0171fdc  stfs 11, 8(8)
  0171fe0  stfs 30, 12(8)
  0171fe4  lvx 5, 0, 8
  0171fe8  stvx 2, 0, 4
  0171fec  addic 8, 1, 192
  0171ff0  stvx 3, 0, 6
  0171ff4  stvx 4, 0, 9
  0171ff8  lfs 12, 5056(3)
  0171ffc  addic 6, 1, 208
  0172000  stvx 5, 0, 7
  0172004  addic 9, 1, 224
  0172008  stfs 12, 0(5)
  017200c  addic 7, 1, 304
  0172010  stfs 1, 4(5)
  0172014  addic 3, 1, 320
  0172018  stfs 6, 8(5)
  017201c  li 30, 0
  0172020  lvx 2, 0, 5
  0172024  stfs 2, 0(8)
  0172028  stfs 4, 4(8)
  017202c  addic 5, 1, 336
  0172030  stfs 7, 8(8)
  0172034  lvx 3, 0, 8
  0172038  stfs 3, 0(6)
  017203c  stfs 5, 4(6)
  0172040  stfs 8, 8(6)
  0172044  lvx 4, 0, 6
  0172048  stfs 9, 0(9)
  017204c  stfs 10, 4(9)
  0172050  stfs 11, 8(9)
  0172054  stvx 2, 0, 7
  0172058  stvx 3, 0, 3
  017205c  stvx 4, 0, 5
  0172060  lwz 5, 0(31)
  0172064  ori 3, 31, 0
  0172068  lvx 2, 0, 9
  017206c  std 2, 40(1)
  0172070  lwz 5, 36(5)
  0172074  lwz 6, 0(5)
  0172078  lwz 2, 4(5)
  017207c  mtctr 6
  0172080  bcctrl 20, 30
  0172084  addic 3, 31, 224
  0172088  addic 5, 1, 272
  017208c  addic 6, 31, 256
  0172090  addic 4, 1, 288
  0172094  addic 7, 31, 272
  0172098  lvx 2, 0, 3
  017209c  lis 28, 144
  01720a0  addic 8, 1, 448
  01720a4  stvx 2, 0, 5
  01720a8  lvx 3, 0, 6
  01720ac  addic 28, 28, -23532
  01720b0  addic 6, 31, 240
  01720b4  stvx 3, 0, 4
  01720b8  ld 2, 40(1)
  01720bc  addic 9, 1, 464
  01720c0  vmrglw 2, 2, 3
  01720c4  addic 3, 1, 416
  01720c8  lvx 3, 0, 6
  01720cc  lvx 4, 0, 7
  01720d0  addic 7, 1, 432
  01720d4  vmrghw 5, 3, 4
  01720d8  vmrglw 3, 3, 4
  01720dc  vmrghw 4, 2, 3
  01720e0  vmrglw 2, 2, 3
  01720e4  lvx 3, 0, 5
  01720e8  lvx 6, 0, 4
  01720ec  li 5, 16
  01720f0  lwz 6, 40(28)
  01720f4  lis 4, 68
  01720f8  vmrghw 3, 3, 6
  01720fc  stvx 4, 0, 8
  0172100  stvx 2, 0, 9
  0172104  ori 10, 4, 7932
  0172108  ori 4, 3, 0
  017210c  vmrghw 6, 3, 5
  0172110  vmrglw 3, 3, 5
  0172114  stvx 6, 0, 3
  0172118  stvx 3, 0, 7
  017211c  lwz 7, 8(6)
  0172120  stw 10, 0(7)
  0172124  lwz 7, 8(6)
  0172128  stw 30, 4(7)
  017212c  lwz 7, 8(6)
  0172130  addic 7, 7, 8
  0172134  stw 7, 8(6)
  0172138  lwz 7, 8(6)
  017213c  addic 5, 5, -1
  0172140  lwz 8, 0(4)
  0172144  cmpwi 5, 0
  0172148  addic 4, 4, 4
  017214c  stw 8, 0(7)
  0172150  lwz 7, 8(6)
  0172154  addic 7, 7, 4
  0172158  stw 7, 8(6)
  017215c  bf 2, 0x172138
  0172160  addic 4, 31, 160
  0172164  addic 7, 1, 240
  0172168  addic 5, 31, 192
  017216c  addic 6, 1, 256
  0172170  addic 9, 1, 464
  0172174  lvx 2, 0, 4
  0172178  addic 4, 31, 176
  017217c  stvx 2, 0, 7
  0172180  lvx 3, 0, 5
  0172184  addic 8, 1, 432
  0172188  addic 5, 31, 208
  017218c  stvx 3, 0, 6
  0172190  vmrglw 2, 2, 3
  0172194  lis 10, 68
  0172198  lvx 3, 0, 4
  017219c  li 24, 8
  01721a0  addic 4, 1, 448
  01721a4  lvx 4, 0, 5
  01721a8  lwz 5, 40(28)
  01721ac  vmrghw 5, 3, 4
  01721b0  vmrglw 3, 3, 4
  01721b4  vmrghw 4, 2, 3
  01721b8  vmrglw 2, 2, 3
  01721bc  lvx 3, 0, 7
  01721c0  lvx 6, 0, 6
  01721c4  ori 6, 10, 7932
  01721c8  vmrghw 3, 3, 6
  01721cc  stvx 4, 0, 4
  01721d0  stvx 2, 0, 9
  01721d4  li 4, 16
  01721d8  vmrghw 2, 3, 5
  01721dc  vmrglw 3, 3, 5
  01721e0  stvx 2, 0, 3
  01721e4  stvx 3, 0, 8
  01721e8  lwz 7, 8(5)
  01721ec  stw 6, 0(7)
  01721f0  lwz 6, 8(5)
  01721f4  stw 24, 4(6)
  01721f8  lwz 6, 8(5)
  01721fc  addic 6, 6, 8
  0172200  stw 6, 8(5)
  0172204  lwz 6, 8(5)
  0172208  lwz 7, 0(3)
  017220c  addic 4, 4, -1
  0172210  addic 3, 3, 4
  0172214  cmpwi 4, 0
  0172218  stw 7, 0(6)
  017221c  lwz 6, 8(5)
  0172220  addic 6, 6, 4
  0172224  stw 6, 8(5)
  0172228  bf 2, 0x172204
  017222c  mullw 29, 26, 25
  0172230  lis 3, 150
  0172234  lwz 4, 8920(31)
  0172238  slwi 29, 29, 2
  017223c  addic 6, 3, 27456
  0172240  addic 7, 4, 1
  0172244  addic 3, 1, 568
  0172248  li 5, 60
  017224c  ori 4, 30, 0
  0172250  sth 25, 76(6)
  0172254  sth 26, 78(6)
  0172258  stw 7, 8920(31)
  017225c  bl 0x5d0140
  0172260  nop
  0172264  stb 24, 570(1)
  0172268  stb 27, 571(1)
  017226c  slwi 3, 25, 2
  0172270  stb 30, 572(1)
  0172274  addic 4, 1, 1
  0172278  lwz 5, 8840(31)
  017227c  lwz 6, 1196(31)
  0172280  stw 3, 592(1)
  0172284  subc 7, 5, 6
  0172288  addic 5, 1, 4
  017228c  li 6, 3
  0172290  stw 7, 576(1)
  0172294  li 7, 64
  0172298  addic 6, 6, -1
  017229c  stb 30, 572(4)
  01722a0  stw 30, 576(5)
  01722a4  addic 4, 4, 1
  01722a8  cmpwi 6, 0
  01722ac  stw 7, 592(5)
  01722b0  addic 5, 5, 4
  01722b4  bf 2, 0x172294
  01722b8  li 4, 2
  01722bc  ori 5, 3, 0
  01722c0  lis 6, 230
  01722c4  lis 3, 0
  01722c8  stb 4, 608(1)
  01722cc  addic 8, 6, -21996
  01722d0  lwz 4, 8840(31)
  01722d4  lis 9, -32767
  01722d8  lwz 7, 1196(31)
  01722dc  lis 11, 518
  01722e0  addc 4, 4, 29
  01722e4  stw 5, 616(1)
  01722e8  stb 30, 609(1)
  01722ec  ori 12, 3, 43748
  01722f0  subc 4, 4, 7
  01722f4  stb 27, 568(1)
  01722f8  stb 30, 569(1)
  01722fc  lis 7, 1
  0172300  slwi 3, 25, 16
  0172304  ori 7, 7, 42281
  0172308  stw 4, 612(1)
  017230c  sth 25, 620(1)
  0172310  lis 4, 3
  0172314  sth 26, 622(1)
  0172318  lwz 10, 576(1)
  017231c  ori 4, 4, 771
  0172320  sth 30, 624(1)
  0172324  sth 30, 626(1)
  0172328  stw 10, -21996(6)
  017232c  ori 6, 11, 8192
  0172330  stw 7, 4(8)
  0172334  or 7, 3, 26
  0172338  stw 4, 8(8)
  017233c  stw 9, 12(8)
  0172340  stw 12, 16(8)
  0172344  lis 9, 4
  0172348  oris 4, 5, 16
  017234c  stw 6, 20(8)
  0172350  ori 6, 9, 404
  0172354  stw 7, 24(8)
  0172358  li 5, 255
  017235c  lwz 9, 40(28)
  0172360  addic 7, 1, 572
  0172364  stw 4, 28(8)
  0172368  stb 30, 32(8)
  017236c  stb 5, 33(8)
  0172370  lwz 4, 8(9)
  0172374  lis 5, 275
  0172378  stw 6, 0(4)
  017237c  lbz 4, 0(7)
  0172380  lwz 6, 8(9)
  0172384  subc 4, 4, 5
  0172388  stw 4, 4(6)
  017238c  lwz 4, 8(9)
  0172390  lis 6, 4
  0172394  addic 4, 4, 8
  0172398  ori 6, 6, 396
  017239c  stw 4, 8(9)
  01723a0  stw 6, 0(4)
  01723a4  lbz 4, 1(7)
  01723a8  lwz 8, 8(9)
  01723ac  lis 6, 8
  01723b0  subc 4, 4, 5
  01723b4  ori 6, 6, 436
  01723b8  stw 4, 4(8)
  01723bc  lwz 4, 8(9)
  01723c0  addic 4, 4, 8
  01723c4  lis 8, 24
  01723c8  stw 4, 8(9)
  01723cc  stw 6, 0(4)
  01723d0  lbz 4, 2(7)
  01723d4  lis 6, 4
  01723d8  lwz 10, 8(9)
  01723dc  subc 4, 4, 5
  01723e0  ori 6, 6, 408
  01723e4  stw 4, 4(10)
  01723e8  lbz 4, 3(7)
  01723ec  lwz 7, 8(9)
  01723f0  subc 4, 4, 5
  01723f4  stw 4, 8(7)
  01723f8  lwz 4, 8(9)
  01723fc  addic 7, 1, 592
  0172400  addic 4, 4, 12
  0172404  stw 4, 8(9)
  0172408  stw 6, 0(4)
  017240c  lbz 4, 609(1)
  0172410  lwz 10, 8(9)
  0172414  li 6, 31
  0172418  subc 4, 4, 5
  017241c  ori 5, 8, 520
  0172420  addic 8, 1, 576
  0172424  stw 4, 4(10)
  0172428  lwz 4, 8(9)
  017242c  addic 4, 4, 8
  0172430  stw 4, 8(9)
  0172434  lhz 10, 620(1)
  0172438  lhz 11, 622(1)
  017243c  stw 5, 0(4)
  0172440  cntlzw 11, 11
  0172444  lbz 5, 608(1)
  0172448  cntlzw 4, 10
  017244c  subc 10, 6, 11
  0172450  lbz 11, 570(1)
  0172454  subc 4, 6, 4
  0172458  lbz 6, 568(1)
  017245c  slwi 5, 5, 5
  0172460  lbz 12, 569(1)
  0172464  slwi 4, 4, 16
  0172468  or 5, 11, 5
  017246c  slwi 6, 6, 8
  0172470  slwi 11, 12, 12
  0172474  slwi 10, 10, 24
  0172478  or 6, 6, 11
  017247c  or 5, 5, 6
  0172480  or 4, 5, 4
  0172484  lwz 5, 8(9)
  0172488  or 4, 4, 10
  017248c  stw 4, 4(5)
  0172490  lwz 4, 8(9)
  0172494  lwz 5, 0(7)
  0172498  stw 5, 8(4)
  017249c  lwz 4, 8(9)
  01724a0  lwz 5, 0(8)
  01724a4  stw 5, 12(4)
  01724a8  lwz 4, 8(9)
  01724ac  lwz 5, 612(1)
  01724b0  stw 5, 16(4)
  01724b4  lwz 4, 8(9)
  01724b8  lwz 5, 4(8)
  01724bc  stw 5, 20(4)
  01724c0  lwz 4, 8(9)
  01724c4  lwz 5, 4(7)
  01724c8  stw 5, 24(4)
  01724cc  lwz 4, 8(9)
  01724d0  lis 5, 4
  01724d4  addic 4, 4, 28
  01724d8  ori 5, 5, 556
  01724dc  stw 4, 8(9)
  01724e0  stw 5, 0(4)
  01724e4  lwz 4, 616(1)
  01724e8  lwz 6, 8(9)
  01724ec  lis 5, 16
  01724f0  ori 5, 5, 640
  01724f4  stw 4, 4(6)
  01724f8  lwz 4, 8(9)
  01724fc  lis 6, 4
  0172500  addic 4, 4, 8
  0172504  stw 4, 8(9)
  0172508  stw 5, 0(4)
  017250c  lwz 4, 8(7)
  0172510  lwz 10, 8(9)
  0172514  lis 5, 4
  0172518  ori 5, 5, 544
  017251c  stw 4, 4(10)
  0172520  lwz 4, 8(9)
  0172524  lwz 7, 12(7)
  0172528  stw 7, 8(4)
  017252c  lwz 4, 8(9)
  0172530  lwz 7, 8(8)
  0172534  stw 7, 12(4)
  0172538  lwz 4, 8(9)
  017253c  lwz 7, 12(8)
  0172540  stw 7, 16(4)
  0172544  lwz 4, 8(9)
  0172548  addic 4, 4, 20
  017254c  stw 4, 8(9)
  0172550  stw 5, 0(4)
  0172554  lbz 4, 571(1)
  0172558  lwz 7, 8(9)
  017255c  ori 5, 6, 696
  0172560  lis 6, 8
  0172564  ori 6, 6, 512
  0172568  stw 4, 4(7)
  017256c  lwz 4, 8(9)
  0172570  addic 4, 4, 8
  0172574  stw 4, 8(9)
  0172578  stw 5, 0(4)
  017257c  lhz 4, 624(1)
  0172580  lhz 5, 626(1)
  0172584  lwz 7, 8(9)
  0172588  rlwimi 4, 5, 16, 0, 15
  017258c  lis 5, 4
  0172590  ori 5, 5, 7560
  0172594  stw 4, 4(7)
  0172598  lwz 4, 8(9)
  017259c  addic 4, 4, 8
  01725a0  stw 4, 8(9)
  01725a4  stw 6, 0(4)
  01725a8  lhz 4, 624(1)
  01725ac  lhz 6, 620(1)
  01725b0  lwz 7, 8(9)
  01725b4  rlwimi 4, 6, 16, 0, 15
  01725b8  lis 6, 4
  01725bc  stw 4, 4(7)
  01725c0  lhz 4, 626(1)
  01725c4  lhz 7, 622(1)
  01725c8  lwz 8, 8(9)
  01725cc  rlwimi 4, 7, 16, 0, 15
  01725d0  ori 6, 6, 7568
  01725d4  stw 4, 8(8)
  01725d8  lwz 4, 8(9)
  01725dc  addic 4, 4, 12
  01725e0  li 8, -256
  01725e4  stw 4, 8(9)
  01725e8  stw 5, 0(4)
  01725ec  lhz 4, 622(1)
  01725f0  lwz 7, 8(9)
  01725f4  rlwinm 5, 4, 20, 31, 31
  01725f8  subc 4, 4, 5
  01725fc  ori 4, 4, 4096
  0172600  lis 5, 4
  0172604  stw 4, 4(7)
  0172608  lwz 4, 8(9)
  017260c  ori 5, 5, 7564
  0172610  addic 4, 4, 8
  0172614  stw 4, 8(9)
  0172618  lwz 4, 40(28)
  017261c  lwz 7, 8(4)
  0172620  stw 6, 0(7)
  0172624  lwz 6, 8(4)
  0172628  stw 30, 4(6)
  017262c  lwz 6, 8(4)
  0172630  addic 6, 6, 8
  0172634  stw 6, 8(4)
  0172638  lwz 4, 40(28)
  017263c  lis 6, 4
  0172640  ori 6, 6, 2672
  0172644  lwz 7, 8(4)
  0172648  stw 5, 0(7)
  017264c  lwz 5, 8(4)
  0172650  stw 8, 4(5)
  0172654  lwz 5, 8(4)
  0172658  addic 5, 5, 8
  017265c  clrldi 8, 25, 32
  0172660  stw 5, 8(4)
  0172664  lwz 4, 40(28)
  0172668  lis 5, 4
  017266c  ori 5, 5, 2676
  0172670  lwz 7, 8(4)
  0172674  stw 6, 0(7)
  0172678  lwz 6, 8(4)
  017267c  stw 27, 4(6)
  0172680  lwz 6, 8(4)
  0172684  addic 6, 6, 8
  0172688  stw 6, 8(4)
  017268c  lwz 4, 40(28)
  0172690  lis 6, 4
  0172694  ori 6, 6, 784
  0172698  lwz 7, 8(4)
  017269c  stw 5, 0(7)
  01726a0  lwz 5, 8(4)
  01726a4  stw 27, 4(5)
  01726a8  lwz 5, 8(4)
  01726ac  addic 5, 5, 8
  01726b0  stw 5, 8(4)
  01726b4  lwz 4, 40(28)
  01726b8  lis 5, 4
  01726bc  ori 5, 5, 8152
  01726c0  lwz 7, 8(4)
  01726c4  stw 6, 0(7)
  01726c8  lwz 6, 8(4)
  01726cc  std 8, 656(1)
  01726d0  stw 27, 4(6)
  01726d4  lwz 6, 8(4)
  01726d8  addic 6, 6, 8
  01726dc  stw 6, 8(4)
  01726e0  lwz 4, 40(28)
  01726e4  lis 6, 23
  01726e8  li 0, 640
  01726ec  addi 6, 6, 7380
  01726f0  lwz 7, 8(4)
  01726f4  stw 5, 0(7)
  01726f8  lwz 5, 8(4)
  01726fc  stw 27, 4(5)
  0172700  lwz 5, 8(4)
  0172704  addic 5, 5, 8
  0172708  stw 5, 8(4)
  017270c  lfd 1, 656(1)
  0172710  fcfid 2, 1
  0172714  lfs 1, 32(6)
  0172718  addic 4, 1, 488
  017271c  clrldi 5, 26, 32
  0172720  frsp 2, 2
  0172724  fmuls 2, 2, 1
  0172728  stfs 2, 640(1)
  017272c  stfs 2, 644(1)
  0172730  stfs 2, 648(1)
  0172734  stfs 2, 652(1)
  0172738  lvx 2, 1, 0
  017273c  vspltw 2, 2, 0
  0172740  vspltw 2, 2, 0
  0172744  vspltw 2, 2, 0
  0172748  vspltw 2, 2, 0
  017274c  vspltw 2, 2, 0
  0172750  vspltw 2, 2, 0
  0172754  vspltw 2, 2, 0
  0172758  vspltw 2, 2, 0
  017275c  vspltw 2, 2, 0
  0172760  vspltw 2, 2, 0
  0172764  vspltw 2, 2, 0
  0172768  vspltw 2, 2, 0
  017276c  vspltw 2, 2, 0
  0172770  vspltw 2, 2, 0
  0172774  vspltw 2, 2, 0
  0172778  vspltw 2, 2, 0
  017277c  vspltw 2, 2, 0
  0172780  vspltw 2, 2, 0
  0172784  vspltw 2, 2, 0
  0172788  vspltw 2, 2, 0
  017278c  vspltw 2, 2, 0
  0172790  vspltw 2, 2, 0
  0172794  vspltw 2, 2, 0
  0172798  vspltw 2, 2, 0
  017279c  vspltw 2, 2, 0
  01727a0  vspltw 2, 2, 0
  01727a4  vspltw 2, 2, 0
  01727a8  vspltw 2, 2, 0
  01727ac  vspltw 2, 2, 0
  01727b0  vspltw 2, 2, 0
  01727b4  vspltw 2, 2, 0
  01727b8  vspltw 2, 2, 0
  01727bc  vspltw 2, 2, 0
  01727c0  vspltw 2, 2, 0
  01727c4  vspltw 2, 2, 0
  01727c8  vspltw 2, 2, 0
  01727cc  stvewx 2, 0, 4
  01727d0  std 5, 656(1)
  01727d4  li 0, 640
  01727d8  addic 5, 1, 492
  01727dc  addic 7, 1, 496
  01727e0  lfd 2, 656(1)
  01727e4  fcfid 2, 2
  01727e8  frsp 2, 2
  01727ec  fmuls 3, 2, 1
  01727f0  stfs 3, 640(1)
  01727f4  stfs 3, 644(1)
  01727f8  stfs 3, 648(1)
  01727fc  stfs 3, 652(1)
  0172800  lvx 3, 1, 0
  0172804  vspltw 3, 3, 0
  0172808  vspltw 3, 3, 0
  017280c  vspltw 3, 3, 0
  0172810  vspltw 3, 3, 0
  0172814  vspltw 3, 3, 0
  0172818  vspltw 3, 3, 0
  017281c  vspltw 3, 3, 0
  0172820  vspltw 3, 3, 0
  0172824  vspltw 3, 3, 0
  0172828  vspltw 3, 3, 0
  017282c  vspltw 3, 3, 0
  0172830  vspltw 3, 3, 0
  0172834  vspltw 3, 3, 0
  0172838  vspltw 3, 3, 0
  017283c  vspltw 3, 3, 0
  0172840  vspltw 3, 3, 0
  0172844  vspltw 3, 3, 0
  0172848  vspltw 3, 3, 0
  017284c  vspltw 3, 3, 0
  0172850  vspltw 3, 3, 0
  0172854  vspltw 3, 3, 0
  0172858  vspltw 3, 3, 0
  017285c  vspltw 3, 3, 0
  0172860  vspltw 3, 3, 0
  0172864  vspltw 3, 3, 0
  0172868  vspltw 3, 3, 0
  017286c  vspltw 3, 3, 0
  0172870  vspltw 3, 3, 0
  0172874  vspltw 3, 3, 0
  0172878  vspltw 3, 3, 0
  017287c  vspltw 3, 3, 0
  0172880  vspltw 3, 3, 0
  0172884  vspltw 3, 3, 0
  0172888  vspltw 3, 3, 0
  017288c  vspltw 3, 3, 0
  0172890  vspltw 3, 3, 0
  0172894  stvewx 3, 0, 5
  0172898  stvewx 2, 0, 7
  017289c  lfs 3, 36(6)
  01728a0  li 0, 640
  01728a4  fmuls 2, 2, 3
  01728a8  addic 6, 1, 500
  01728ac  lis 5, 20
  01728b0  li 8, 18
  01728b4  ori 7, 5, 7932
  01728b8  li 5, 4
  01728bc  stfs 2, 640(1)
  01728c0  stfs 2, 644(1)
  01728c4  stfs 2, 648(1)
  01728c8  stfs 2, 652(1)
  01728cc  lvx 4, 1, 0
  01728d0  vspltw 4, 4, 0
  01728d4  vspltw 4, 4, 0
  01728d8  vspltw 4, 4, 0
  01728dc  vspltw 4, 4, 0
  01728e0  vspltw 4, 4, 0
  01728e4  vspltw 4, 4, 0
  01728e8  vspltw 4, 4, 0
  01728ec  vspltw 4, 4, 0
  01728f0  vspltw 4, 4, 0
  01728f4  vspltw 4, 4, 0
  01728f8  vspltw 4, 4, 0
  01728fc  vspltw 4, 4, 0
  0172900  vspltw 4, 4, 0
  0172904  vspltw 4, 4, 0
  0172908  lwz 29, 40(28)
  017290c  vspltw 4, 4, 0
  0172910  vspltw 4, 4, 0
  0172914  vspltw 4, 4, 0
  0172918  vspltw 4, 4, 0
  017291c  vspltw 4, 4, 0
  0172920  vspltw 4, 4, 0
  0172924  vspltw 4, 4, 0
  0172928  vspltw 4, 4, 0
  017292c  vspltw 4, 4, 0
  0172930  vspltw 4, 4, 0
  0172934  vspltw 4, 4, 0
  0172938  vspltw 4, 4, 0
  017293c  vspltw 4, 4, 0
  0172940  vspltw 4, 4, 0
  0172944  vspltw 4, 4, 0
  0172948  vspltw 4, 4, 0
  017294c  vspltw 4, 4, 0
  0172950  vspltw 4, 4, 0
  0172954  vspltw 4, 4, 0
  0172958  vspltw 4, 4, 0
  017295c  vspltw 4, 4, 0
  0172960  vspltw 4, 4, 0
  0172964  stvewx 4, 0, 6
  0172968  lwz 6, 8(29)
  017296c  stw 7, 0(6)
  0172970  lwz 6, 8(29)
  0172974  stw 8, 4(6)
  0172978  lwz 6, 8(29)
  017297c  addic 6, 6, 8
  0172980  stw 6, 8(29)
  0172984  lwz 6, 8(29)
  0172988  lwz 7, 0(4)
  017298c  addic 5, 5, -1
  0172990  addic 4, 4, 4
  0172994  cmpwi 5, 0
  0172998  stw 7, 0(6)
  017299c  lwz 6, 8(29)
  01729a0  addic 6, 6, 4
  01729a4  stw 6, 8(29)
  01729a8  bf 2, 0x172984
  01729ac  addic 4, 1, 504
  01729b0  addic 5, 1, 508
  01729b4  lwz 8, 40(28)
  01729b8  addic 7, 1, 520
  01729bc  lis 6, 8
  01729c0  addic 9, 1, 524
  01729c4  stvewx 2, 0, 4
  01729c8  ori 4, 30, 0
  01729cc  stvewx 3, 0, 5
  01729d0  stvewx 2, 0, 7
  01729d4  ori 6, 6, 2560
  01729d8  rlwimi 4, 3, 0, 0, 31
  01729dc  lwz 3, 8(8)
  01729e0  stvewx 4, 0, 9
  01729e4  slwi 5, 26, 16
  01729e8  li 7, 20
  01729ec  stw 6, 0(3)
  01729f0  lwz 3, 8(8)
  01729f4  ori 6, 30, 0
  01729f8  rlwimi 6, 5, 0, 0, 31
  01729fc  lis 5, 8
  0172a00  stw 4, 4(3)
  0172a04  ori 5, 5, 916
  0172a08  lwz 3, 8(8)
  0172a0c  li 9, 24
  0172a10  stw 6, 8(3)
  0172a14  lwz 3, 8(8)
  0172a18  addic 3, 3, 12
  0172a1c  stw 3, 8(8)
  0172a20  stw 5, 0(3)
  0172a24  lwz 10, 8(8)
  0172a28  lis 3, 32
  0172a2c  li 5, 4
  0172a30  ori 3, 3, 2592
  0172a34  stfs 31, 4(10)
  0172a38  lwz 10, 8(8)
  0172a3c  lis 27, 8
  0172a40  stfs 30, 8(10)
  0172a44  lwz 10, 8(8)
  0172a48  addic 10, 10, 12
  0172a4c  stw 10, 8(8)
  0172a50  stw 3, 0(10)
  0172a54  stfs 1, 512(1)
  0172a58  stfs 31, 516(1)
  0172a5c  stfs 1, 528(1)
  0172a60  lwz 10, 504(1)
  0172a64  stfs 31, 532(1)
  0172a68  lwz 11, 508(1)
  0172a6c  lwz 12, 8(8)
  0172a70  ori 27, 27, 2240
  0172a74  stvewx 2, 5, 12
  0172a78  lwz 5, 8(8)
  0172a7c  stvewx 3, 24, 5
  0172a80  lwz 5, 8(8)
  0172a84  stfs 1, 12(5)
  0172a88  lwz 5, 8(8)
  0172a8c  stfs 31, 16(5)
  0172a90  lwz 5, 8(8)
  0172a94  stvewx 2, 7, 5
  0172a98  lwz 5, 8(8)
  0172a9c  stvewx 4, 9, 5
  0172aa0  lwz 5, 8(8)
  0172aa4  stfs 1, 28(5)
  0172aa8  lwz 5, 8(8)
  0172aac  stfs 31, 32(5)
  0172ab0  lwz 5, 8(8)
  0172ab4  addic 5, 5, 36
  0172ab8  stw 5, 8(8)
  0172abc  stw 3, 0(5)
  0172ac0  lwz 3, 512(1)
  0172ac4  lwz 5, 516(1)
  0172ac8  lwz 7, 520(1)
  0172acc  lwz 9, 524(1)
  0172ad0  lwz 12, 528(1)
  0172ad4  lwz 29, 532(1)
  0172ad8  lwz 26, 8(8)
  0172adc  stw 10, 4(26)
  0172ae0  lwz 10, 8(8)
  0172ae4  stw 11, 8(10)
  0172ae8  lwz 10, 8(8)
  0172aec  stw 3, 12(10)
  0172af0  lwz 3, 8(8)
  0172af4  stw 5, 16(3)
  0172af8  lwz 3, 8(8)
  0172afc  stw 7, 20(3)
  0172b00  lwz 3, 8(8)
  0172b04  stw 9, 24(3)
  0172b08  lwz 3, 8(8)
  0172b0c  stw 12, 28(3)
  0172b10  lwz 3, 8(8)
  0172b14  stw 29, 32(3)
  0172b18  lwz 3, 8(8)
  0172b1c  li 29, 12
  0172b20  addic 3, 3, 36
  0172b24  stw 3, 8(8)
  0172b28  lwz 7, 40(28)
  0172b2c  lwz 3, 8(7)
  0172b30  stw 27, 0(3)
  0172b34  lwz 5, 8(7)
  0172b38  ori 3, 31, 0
  0172b3c  stw 4, 4(5)
  0172b40  lwz 4, 8(7)
  0172b44  ori 5, 29, 0
  0172b48  stw 6, 8(4)
  0172b4c  lwz 4, 8(7)
  0172b50  addic 4, 4, 12
  0172b54  stw 4, 8(7)
  0172b58  lwz 4, 40(28)
  0172b5c  bl 0x4d83ec
  0172b60  nop
  0172b64  lwz 4, 40(28)
  0172b68  ori 3, 31, 0
  0172b6c  ori 5, 29, 0
  0172b70  bl 0x4d82b8
  0172b74  nop
  0172b78  lwz 3, 40(28)
  0172b7c  lis 4, 4
  0172b80  li 5, 243
  0172b84  ori 4, 4, 7572
  0172b88  lis 7, 4
  0172b8c  lwz 6, 8(3)
  0172b90  stw 4, 0(6)
  0172b94  lwz 4, 8(3)
  0172b98  stw 5, 4(4)
  0172b9c  lwz 4, 8(3)
  0172ba0  ori 5, 7, 256
  0172ba4  addic 4, 4, 8
  0172ba8  stw 4, 8(3)
  0172bac  stw 5, 0(4)
  0172bb0  lwz 4, 8(3)
  0172bb4  stw 30, 4(4)
  0172bb8  lwz 4, 8(3)
  0172bbc  addic 4, 4, 8
  0172bc0  stw 4, 8(3)
  0172bc4  ld 0, 768(1)
  0172bc8  mtlr 0
  0172bcc  lfd 30, 736(1)
  0172bd0  lfd 31, 744(1)
  0172bd4  ld 24, 672(1)
  0172bd8  ld 25, 680(1)
  0172bdc  ld 26, 688(1)
  0172be0  ld 27, 696(1)
  0172be4  ld 28, 704(1)
  0172be8  ld 29, 712(1)
  0172bec  ld 30, 720(1)
  0172bf0  ld 31, 728(1)
  0172bf4  addi 1, 1, 752
  0172bf8  blr

Vendor_ResetHUDPass:   # 0x172bfc, 0x24 bytes
  0172bfc  stdu 1, -112(1)
  0172c00  mflr 0
  0172c04  std 0, 128(1)
  0172c08  bl 0x71ac0
  0172c0c  nop
  0172c10  ld 0, 128(1)
  0172c14  mtlr 0
  0172c18  addi 1, 1, 112
  0172c1c  blr

Vendor_HudUpdate:   # 0x172c40, 0xa3c bytes
  0172c40  stdu 1, -448(1)
  0172c44  mflr 0
  0172c48  std 0, 464(1)
  0172c4c  stfd 20, 352(1)
  0172c50  stfd 21, 360(1)
  0172c54  stfd 22, 368(1)
  0172c58  stfd 23, 376(1)
  0172c5c  stfd 24, 384(1)
  0172c60  stfd 25, 392(1)
  0172c64  stfd 26, 400(1)
  0172c68  stfd 27, 408(1)
  0172c6c  stfd 28, 416(1)
  0172c70  stfd 29, 424(1)
  0172c74  stfd 30, 432(1)
  0172c78  stfd 31, 440(1)
  0172c7c  std 30, 336(1)
  0172c80  std 31, 344(1)
  0172c84  li 30, 0
  0172c88  std 29, 328(1)
  0172c8c  std 28, 320(1)
  0172c90  std 27, 312(1)
  0172c94  std 26, 304(1)
  0172c98  std 25, 296(1)
  0172c9c  std 24, 288(1)
  0172ca0  std 23, 280(1)
  0172ca4  std 22, 272(1)
  0172ca8  ori 31, 3, 0
  0172cac  ori 28, 30, 0
  0172cb0  slwi 3, 30, 2
  0172cb4  li 4, 3
  0172cb8  addic 6, 3, 1
  0172cbc  addic 7, 3, 2
  0172cc0  stw 3, 240(1)
  0172cc4  addic 5, 1, 240
  0172cc8  ori 3, 31, 0
  0172ccc  stw 6, 244(1)
  0172cd0  stw 7, 248(1)
  0172cd4  addic 6, 1, 160
  0172cd8  bl 0xf1238
  0172cdc  nop
  0172ce0  lfs 28, 160(1)
  0172ce4  lfs 27, 164(1)
  0172ce8  lfs 31, 176(1)
  0172cec  lfs 30, 180(1)
  0172cf0  fsubs 31, 31, 28
  0172cf4  lfs 26, 168(1)
  0172cf8  fsubs 30, 30, 27
  0172cfc  lfs 29, 184(1)
  0172d00  fsubs 29, 29, 26
  0172d04  lis 3, 23
  0172d08  slwi 4, 30, 4
  0172d0c  addi 3, 3, 11296
  0172d10  extsw 4, 4
  0172d14  fmuls 1, 31, 31
  0172d18  fmuls 2, 30, 30
  0172d1c  fmuls 3, 29, 29
  0172d20  lfs 20, 0(3)
  0172d24  stfs 28, 128(1)
  0172d28  stfs 27, 132(1)
  0172d2c  lis 3, 116
  0172d30  fadds 1, 1, 2
  0172d34  addic 3, 3, -23172
  0172d38  fadds 3, 1, 3
  0172d3c  lfs 1, 172(1)
  0172d40  stfs 26, 136(1)
  0172d44  stfs 1, 140(1)
  0172d48  lfs 4, 192(1)
  0172d4c  lfs 5, 196(1)
  0172d50  lfs 6, 200(1)
  0172d54  fsubs 28, 4, 28
  0172d58  fsqrts 3, 3
  0172d5c  lfsx 2, 3, 4
  0172d60  fsubs 27, 5, 27
  0172d64  fsubs 26, 6, 26
  0172d68  fcmpu 0, 3, 20
  0172d6c  bf 2, 0x172d80
  0172d70  stfs 20, 152(1)
  0172d74  stfs 20, 148(1)
  0172d78  stfs 20, 144(1)
  0172d7c  b 0x172d9c
  0172d80  fdivs 2, 2, 3
  0172d84  fmuls 4, 2, 31
  0172d88  fmuls 5, 2, 30
  0172d8c  fmuls 2, 2, 29
  0172d90  stfs 4, 144(1)
  0172d94  stfs 5, 148(1)
  0172d98  stfs 2, 152(1)
  0172d9c  lis 5, 23
  0172da0  fcmpu 0, 3, 20
  0172da4  addc 3, 3, 4
  0172da8  addi 5, 5, 11296
  0172dac  lfs 25, 128(1)
  0172db0  lfs 21, 4(5)
  0172db4  lfs 2, 8(3)
  0172db8  lfs 4, 144(1)
  0172dbc  fmuls 2, 2, 21
  0172dc0  lfs 24, 132(1)
  0172dc4  fadds 25, 25, 4
  0172dc8  lfs 5, 148(1)
  0172dcc  lfs 23, 136(1)
  0172dd0  lfs 4, 152(1)
  0172dd4  fadds 24, 24, 5
  0172dd8  fadds 23, 23, 4
  0172ddc  fsubs 2, 3, 2
  0172de0  bf 2, 0x172df4
  0172de4  fmr 29, 20
  0172de8  fmr 30, 29
  0172dec  fmr 31, 30
  0172df0  b 0x172e04
  0172df4  fdivs 2, 2, 3
  0172df8  fmuls 31, 2, 31
  0172dfc  fmuls 30, 2, 30
  0172e00  fmuls 29, 2, 29
  0172e04  fmuls 2, 28, 28
  0172e08  fmuls 3, 27, 27
  0172e0c  fmuls 4, 26, 26
  0172e10  fadds 2, 2, 3
  0172e14  fadds 3, 2, 4
  0172e18  lfs 2, 4(3)
  0172e1c  fsqrts 3, 3
  0172e20  fcmpu 1, 3, 20
  0172e24  bf 6, 0x172e38
  0172e28  stfs 20, 152(1)
  0172e2c  stfs 20, 148(1)
  0172e30  stfs 20, 144(1)
  0172e34  b 0x172e54
  0172e38  fdivs 2, 2, 3
  0172e3c  fmuls 4, 2, 28
  0172e40  fmuls 5, 2, 27
  0172e44  fmuls 2, 2, 26
  0172e48  stfs 4, 144(1)
  0172e4c  stfs 5, 148(1)
  0172e50  stfs 2, 152(1)
  0172e54  lfs 2, 144(1)
  0172e58  lfs 4, 148(1)
  0172e5c  fadds 25, 25, 2
  0172e60  lfs 2, 152(1)
  0172e64  fadds 24, 24, 4
  0172e68  lfs 4, 12(3)
  0172e6c  fadds 23, 23, 2
  0172e70  fmuls 2, 4, 21
  0172e74  stfs 25, 128(1)
  0172e78  stfs 24, 132(1)
  0172e7c  fsubs 2, 3, 2
  0172e80  stfs 23, 136(1)
  0172e84  bf 6, 0x172e98
  0172e88  fmr 26, 20
  0172e8c  fmr 27, 26
  0172e90  fmr 28, 27
  0172e94  b 0x172ea8
  0172e98  fdivs 2, 2, 3
  0172e9c  fmuls 28, 2, 28
  0172ea0  fmuls 27, 2, 27
  0172ea4  fmuls 26, 2, 26
  0172ea8  fadds 2, 25, 31
  0172eac  stfs 25, 48(1)
  0172eb0  fadds 3, 23, 29
  0172eb4  stfs 23, 56(1)
  0172eb8  fadds 4, 24, 30
  0172ebc  stfs 24, 52(1)
  0172ec0  stfs 1, 60(1)
  0172ec4  addic 7, 1, 208
  0172ec8  stfs 1, 76(1)
  0172ecc  addic 8, 1, 212
  0172ed0  addic 9, 1, 216
  0172ed4  addic 10, 1, 220
  0172ed8  fadds 2, 2, 28
  0172edc  fadds 3, 3, 26
  0172ee0  fadds 4, 4, 27
  0172ee4  stfs 2, 64(1)
  0172ee8  stfs 3, 72(1)
  0172eec  stfs 4, 68(1)
  0172ef0  ld 3, 48(1)
  0172ef4  ld 4, 56(1)
  0172ef8  ld 5, 64(1)
  0172efc  ld 6, 72(1)
  0172f00  bl 0x16a3a8
  0172f04  lis 3, 230
  0172f08  lbz 3, -22204(3)
  0172f0c  cmpwi 3, 0
  0172f10  bf 2, 0x172f24
  0172f14  lis 3, 230
  0172f18  lbz 3, -22196(3)
  0172f1c  cmpwi 3, 0
  0172f20  bt 2, 0x1730e8
  0172f24  lis 3, 23
  0172f28  lis 4, 230
  0172f2c  addi 3, 3, 11296
  0172f30  lfs 1, 8(3)
  0172f34  lbz 3, -22196(4)
  0172f38  fmr 22, 1
  0172f3c  cmpwi 3, 0
  0172f40  bt 2, 0x172f6c
  0172f44  lis 3, 230
  0172f48  lwz 3, -22200(3)
  0172f4c  subfic 3, 3, 8
  0172f50  extsw 3, 3
  0172f54  bl 0x502730
  0172f58  nop
  0172f5c  lis 3, 23
  0172f60  addi 3, 3, 11296
  0172f64  lfs 2, 12(3)
  0172f68  fmuls 1, 1, 2
  0172f6c  lis 3, 230
  0172f70  lbz 3, -22204(3)
  0172f74  cmpwi 3, 0
  0172f78  bt 2, 0x172fa0
  0172f7c  lis 3, 230
  0172f80  lwz 3, -22208(3)
  0172f84  extsw 3, 3
  0172f88  bl 0x502730
  0172f8c  nop
  0172f90  lis 3, 23
  0172f94  addi 3, 3, 11296
  0172f98  lfs 2, 12(3)
  0172f9c  fmuls 1, 1, 2
  0172fa0  fmuls 2, 31, 31
  0172fa4  fmuls 3, 30, 30
  0172fa8  fmuls 4, 29, 29
  0172fac  fsubs 22, 22, 1
  0172fb0  lis 3, 23
  0172fb4  addi 3, 3, 11296
  0172fb8  fadds 2, 2, 3
  0172fbc  fadds 4, 2, 4
  0172fc0  lfs 2, 16(3)
  0172fc4  fsqrts 4, 4
  0172fc8  fmuls 3, 4, 22
  0172fcc  fcmpu 1, 4, 20
  0172fd0  fmuls 3, 3, 2
  0172fd4  bf 6, 0x172fe8
  0172fd8  stfs 20, 152(1)
  0172fdc  stfs 20, 148(1)
  0172fe0  stfs 20, 144(1)
  0172fe4  b 0x173004
  0172fe8  fdivs 3, 3, 4
  0172fec  fmuls 5, 3, 31
  0172ff0  fmuls 6, 3, 30
  0172ff4  fmuls 3, 3, 29
  0172ff8  stfs 5, 144(1)
  0172ffc  stfs 6, 148(1)
  0173000  stfs 3, 152(1)
  0173004  fmuls 3, 1, 4
  0173008  bf 6, 0x17301c
  017300c  fmr 29, 20
  0173010  fmr 30, 29
  0173014  fmr 31, 30
  0173018  b 0x17302c
  017301c  fdivs 3, 3, 4
  0173020  fmuls 31, 3, 31
  0173024  fmuls 30, 3, 30
  0173028  fmuls 29, 3, 29
  017302c  fmuls 3, 28, 28
  0173030  fmuls 4, 27, 27
  0173034  fmr 6, 2
  0173038  fmuls 5, 26, 26
  017303c  fadds 2, 3, 4
  0173040  lfs 3, 144(1)
  0173044  lfs 4, 148(1)
  0173048  fadds 25, 25, 3
  017304c  fadds 24, 24, 4
  0173050  fadds 2, 2, 5
  0173054  lfs 5, 152(1)
  0173058  fadds 23, 23, 5
  017305c  fsqrts 2, 2
  0173060  fmuls 22, 2, 22
  0173064  fcmpu 1, 2, 20
  0173068  fmuls 22, 22, 6
  017306c  bf 6, 0x173080
  0173070  stfs 20, 152(1)
  0173074  stfs 20, 148(1)
  0173078  stfs 20, 144(1)
  017307c  b 0x17309c
  0173080  fdivs 3, 22, 2
  0173084  fmuls 4, 3, 28
  0173088  fmuls 5, 3, 27
  017308c  fmuls 3, 3, 26
  0173090  stfs 4, 144(1)
  0173094  stfs 5, 148(1)
  0173098  stfs 3, 152(1)
  017309c  fmuls 1, 1, 2
  01730a0  bf 6, 0x1730b4
  01730a4  fmr 26, 20
  01730a8  fmr 27, 26
  01730ac  fmr 28, 27
  01730b0  b 0x1730c4
  01730b4  fdivs 1, 1, 2
  01730b8  fmuls 28, 1, 28
  01730bc  fmuls 27, 1, 27
  01730c0  fmuls 26, 1, 26
  01730c4  lfs 1, 144(1)
  01730c8  lfs 2, 148(1)
  01730cc  fadds 1, 25, 1
  01730d0  lfs 3, 152(1)
  01730d4  fadds 2, 24, 2
  01730d8  fadds 3, 23, 3
  01730dc  stfs 1, 128(1)
  01730e0  stfs 2, 132(1)
  01730e4  stfs 3, 136(1)
  01730e8  lfs 1, 128(1)
  01730ec  lfs 2, 136(1)
  01730f0  addic 7, 1, 224
  01730f4  fadds 3, 1, 28
  01730f8  lfs 5, 132(1)
  01730fc  fadds 4, 2, 26
  0173100  stfs 1, 48(1)
  0173104  fadds 6, 5, 27
  0173108  stfs 2, 56(1)
  017310c  lfs 1, 140(1)
  0173110  addic 8, 1, 228
  0173114  stfs 5, 52(1)
  0173118  addic 9, 1, 232
  017311c  stfs 1, 60(1)
  0173120  addic 10, 1, 236
  0173124  stfs 1, 76(1)
  0173128  fadds 2, 3, 31
  017312c  fadds 3, 4, 29
  0173130  fadds 4, 6, 30
  0173134  stfs 2, 64(1)
  0173138  stfs 3, 72(1)
  017313c  ld 3, 48(1)
  0173140  ld 4, 56(1)
  0173144  stfs 4, 68(1)
  0173148  ld 5, 64(1)
  017314c  ld 6, 72(1)
  0173150  bl 0x16a3a8
  0173154  lis 4, 23
  0173158  li 3, 9
  017315c  addi 5, 4, 11296
  0173160  li 4, 7
  0173164  lfs 1, 8(5)
  0173168  bl 0x171d00
  017316c  li 3, 512
  0173170  ori 4, 3, 0
  0173174  bl 0x78138
  0173178  nop
  017317c  li 4, 1
  0173180  ori 3, 28, 0
  0173184  ori 6, 4, 0
  0173188  li 5, 2
  017318c  li 7, 255
  0173190  bl 0x502ea8
  0173194  nop
  0173198  ori 4, 3, 0
  017319c  li 3, 3
  01731a0  bl 0x174f80
  01731a4  nop
  01731a8  cmpwi 30, 5
  01731ac  bt 2, 0x1733f0
  01731b0  cmpwi 30, 4
  01731b4  cmpwi 6, 30, 3
  01731b8  bt 2, 0x1733e4
  01731bc  cmpwi 1, 30, 2
  01731c0  bt 26, 0x1733b0
  01731c4  cmpwi 6, 30, 1
  01731c8  bt 6, 0x1733a4
  01731cc  cmpwi 1, 30, 0
  01731d0  bt 26, 0x173398
  01731d4  bf 6, 0x1733f8
  01731d8  li 27, 128
  01731dc  li 5, 512
  01731e0  ori 3, 28, 0
  01731e4  ori 8, 27, 0
  01731e8  ori 9, 28, 0
  01731ec  ori 4, 28, 0
  01731f0  ori 7, 5, 0
  01731f4  ori 6, 27, 0
  01731f8  bl 0x7813c
  01731fc  nop
  0173200  lis 3, 346
  0173204  lbz 3, -15535(3)
  0173208  cmpwi 3, 0
  017320c  bt 2, 0x173248
  0173210  lis 3, 346
  0173214  lwz 3, -15568(3)
  0173218  clrlwi 3, 3, 27
  017321c  cmpwi 3, 16
  0173220  bf 0, 0x173234
  0173224  lis 3, 116
  0173228  lwz 3, -23176(3)
  017322c  clrlwi 3, 3, 8
  0173230  b 0x17323c
  0173234  lis 3, 116
  0173238  lwz 3, -23176(3)
  017323c  lis 4, 114
  0173240  addic 4, 4, -4200
  0173244  stw 3, 28(4)
  0173248  lis 29, 230
  017324c  addic 29, 29, -22960
  0173250  lwz 3, 44(29)
  0173254  bl 0x5c8510
  0173258  nop
  017325c  lis 4, 26214
  0173260  ori 5, 3, 0
  0173264  lwz 3, 68(29)
  0173268  ori 4, 4, 26215
  017326c  mulhw 4, 4, 3
  0173270  ori 3, 5, 0
  0173274  srawi 4, 4, 3
  0173278  srwi 5, 4, 31
  017327c  addc 4, 4, 5
  0173280  subc 3, 3, 4
  0173284  cmpwi 3, 0
  0173288  lwz 3, 68(29)
  017328c  bf 1, 0x17329c
  0173290  addic 3, 3, 2
  0173294  stw 3, 68(29)
  0173298  b 0x1732cc
  017329c  lis 4, 116
  01732a0  li 3, 24
  01732a4  addic 26, 4, -23784
  01732a8  bl 0xfc620
  01732ac  nop
  01732b0  sldi 3, 3, 2
  01732b4  extsw 3, 3
  01732b8  lwzx 3, 26, 3
  01732bc  extsw 3, 3
  01732c0  bl 0x7b740
  01732c4  nop
  01732c8  bl 0x16bc20
  01732cc  lis 3, 346
  01732d0  lbz 3, -15535(3)
  01732d4  cmpwi 3, 0
  01732d8  bf 2, 0x1732fc
  01732dc  lwz 4, 68(29)
  01732e0  li 5, 8
  01732e4  fmr 1, 21
  01732e8  neg 4, 4
  01732ec  lwz 3, 44(29)
  01732f0  extsw 4, 4
  01732f4  bl 0x16f9a8
  01732f8  b 0x173344
  01732fc  lwz 3, 68(29)
  0173300  lis 4, 23
  0173304  li 7, -1
  0173308  neg 3, 3
  017330c  extsw 3, 3
  0173310  std 3, 256(1)
  0173314  addi 3, 4, 11296
  0173318  lwz 6, 44(29)
  017331c  lis 4, 116
  0173320  lfs 2, 20(3)
  0173324  lwz 5, -23176(4)
  0173328  lfs 3, 24(3)
  017332c  lfd 1, 256(1)
  0173330  extsw 5, 5
  0173334  fcfid 1, 1
  0173338  frsp 1, 1
  017333c  bl 0x6fda4
  0173340  nop
  0173344  li 29, 64
  0173348  li 26, 512
  017334c  ori 3, 28, 0
  0173350  ori 4, 28, 0
  0173354  li 5, 4
  0173358  ori 6, 29, 0
  017335c  ori 7, 26, 0
  0173360  ori 8, 27, 0
  0173364  ori 9, 28, 0
  0173368  bl 0x7813c
  017336c  nop
  0173370  li 3, 226
  0173374  li 5, 230
  0173378  ori 4, 28, 0
  017337c  ori 6, 29, 0
  0173380  ori 7, 26, 0
  0173384  ori 8, 27, 0
  0173388  ori 9, 28, 0
  017338c  bl 0x7813c
  0173390  nop
  0173394  b 0x1733f8
  0173398  ori 3, 31, 0
  017339c  bl 0x170490
  01733a0  b 0x1733f8
  01733a4  ori 3, 31, 0
  01733a8  bl 0x16fe20
  01733ac  b 0x1733f8
  01733b0  lfs 1, 224(1)
  01733b4  lfs 2, 228(1)
  01733b8  ori 3, 31, 0
  01733bc  fctiwz 1, 1
  01733c0  fctiwz 2, 2
  01733c4  stfd 1, 256(1)
  01733c8  lwz 4, 260(1)
  01733cc  stfd 2, 256(1)
  01733d0  lwz 5, 260(1)
  01733d4  extsw 4, 4
  01733d8  extsw 5, 5
  01733dc  bl 0x170cf0
  01733e0  b 0x1733f8
  01733e4  ori 3, 31, 0
  01733e8  bl 0x170fd0
  01733ec  b 0x1733f8
  01733f0  ori 3, 31, 0
  01733f4  bl 0x17007c
  01733f8  lfs 1, 224(1)
  01733fc  ori 3, 30, 0
  0173400  lfs 2, 228(1)
  0173404  bl 0x1717a8
  0173408  bl 0x71ac0
  017340c  nop
  0173410  li 29, 1
  0173414  ori 3, 28, 0
  0173418  ori 4, 29, 0
  017341c  li 5, 2
  0173420  ori 6, 29, 0
  0173424  li 7, 255
  0173428  bl 0x502ea8
  017342c  nop
  0173430  ori 4, 3, 0
  0173434  li 3, 3
  0173438  bl 0x174f80
  017343c  nop
  0173440  ori 3, 29, 0
  0173444  li 27, 6
  0173448  ori 4, 29, 0
  017344c  ori 8, 28, 0
  0173450  ori 5, 28, 0
  0173454  ori 6, 28, 0
  0173458  ori 7, 28, 0
  017345c  bl 0x502f08
  0173460  nop
  0173464  ori 4, 3, 0
  0173468  ori 3, 27, 0
  017346c  bl 0x174f80
  0173470  nop
  0173474  bl 0x1754c0
  0173478  nop
  017347c  lis 3, 150
  0173480  lis 4, -32640
  0173484  lis 27, 230
  0173488  ori 4, 4, 32896
  017348c  addic 27, 27, -21996
  0173490  lwz 3, 27372(3)
  0173494  clrldi 29, 4, 32
  0173498  cmpwi 3, 0
  017349c  bt 2, 0x173560
  01734a0  lfs 1, 232(1)
  01734a4  lfs 2, 236(1)
  01734a8  lis 3, 23
  01734ac  fctiwz 1, 1
  01734b0  lfs 3, 224(1)
  01734b4  fctiwz 2, 2
  01734b8  lfs 4, 228(1)
  01734bc  fctiwz 3, 3
  01734c0  lfs 5, 208(1)
  01734c4  fctiwz 4, 4
  01734c8  addi 3, 3, 11296
  01734cc  stfd 1, 256(1)
  01734d0  lwz 4, 260(1)
  01734d4  stfd 2, 256(1)
  01734d8  lwz 5, 260(1)
  01734dc  stfd 3, 256(1)
  01734e0  lwz 6, 260(1)
  01734e4  stfd 4, 256(1)
  01734e8  lfs 1, 16(3)
  01734ec  lwz 7, 260(1)
  01734f0  fmuls 3, 5, 1
  01734f4  lfs 2, 212(1)
  01734f8  extsw 26, 4
  01734fc  extsw 25, 6
  0173500  extsw 24, 5
  0173504  extsw 23, 7
  0173508  fctiwz 3, 3
  017350c  stfd 3, 256(1)
  0173510  lfs 3, 28(3)
  0173514  lwz 3, 260(1)
  0173518  fmuls 2, 2, 3
  017351c  extsw 22, 3
  0173520  fmuls 1, 2, 1
  0173524  bl 0x502758
  0173528  nop
  017352c  ori 10, 3, 0
  0173530  std 29, 112(1)
  0173534  ori 8, 28, 0
  0173538  std 27, 120(1)
  017353c  ori 3, 26, 0
  0173540  ori 9, 22, 0
  0173544  ori 4, 24, 0
  0173548  ori 5, 25, 0
  017354c  ori 6, 23, 0
  0173550  ori 7, 28, 0
  0173554  bl 0x6889c
  0173558  nop
  017355c  b 0x173604
  0173560  lfs 1, 232(1)
  0173564  lfs 2, 236(1)
  0173568  lis 3, 23
  017356c  fctiwz 1, 1
  0173570  lfs 3, 224(1)
  0173574  fctiwz 2, 2
  0173578  lfs 4, 228(1)
  017357c  fctiwz 3, 3
  0173580  lfs 5, 208(1)
  0173584  fctiwz 4, 4
  0173588  lfs 6, 212(1)
  017358c  addi 3, 3, 11296
  0173590  ori 8, 28, 0
  0173594  stfd 1, 256(1)
  0173598  lwz 4, 260(1)
  017359c  stfd 2, 256(1)
  01735a0  lwz 6, 260(1)
  01735a4  stfd 3, 256(1)
  01735a8  lwz 5, 260(1)
  01735ac  stfd 4, 256(1)
  01735b0  lfs 1, 16(3)
  01735b4  lwz 7, 260(1)
  01735b8  extsw 3, 4
  01735bc  fmuls 2, 5, 1
  01735c0  std 29, 112(1)
  01735c4  fmuls 1, 6, 1
  01735c8  std 27, 120(1)
  01735cc  extsw 4, 6
  01735d0  extsw 6, 7
  01735d4  extsw 5, 5
  01735d8  ori 7, 28, 0
  01735dc  fctiwz 2, 2
  01735e0  fctiwz 1, 1
  01735e4  stfd 2, 256(1)
  01735e8  lwz 9, 260(1)
  01735ec  stfd 1, 256(1)
  01735f0  lwz 10, 260(1)
  01735f4  extsw 9, 9
  01735f8  extsw 10, 10
  01735fc  bl 0x6889c
  0173600  nop
  0173604  addic 30, 30, 1
  0173608  extsw 30, 30
  017360c  cmpwi 30, 6
  0173610  bt 0, 0x172cb0
  0173614  ld 0, 464(1)
  0173618  mtlr 0
  017361c  lfd 20, 352(1)
  0173620  lfd 21, 360(1)
  0173624  lfd 22, 368(1)
  0173628  lfd 23, 376(1)
  017362c  lfd 24, 384(1)
  0173630  lfd 25, 392(1)
  0173634  lfd 26, 400(1)
  0173638  lfd 27, 408(1)
  017363c  lfd 28, 416(1)
  0173640  lfd 29, 424(1)
  0173644  lfd 30, 432(1)
  0173648  lfd 31, 440(1)
  017364c  ld 22, 272(1)
  0173650  ld 23, 280(1)
  0173654  ld 24, 288(1)
  0173658  ld 25, 296(1)
  017365c  ld 26, 304(1)
  0173660  ld 27, 312(1)
  0173664  ld 28, 320(1)
  0173668  ld 29, 328(1)
  017366c  ld 30, 336(1)
  0173670  ld 31, 344(1)
  0173674  addi 1, 1, 448
  0173678  blr

Vendor_DrawMobyHighlight:   # 0x173690, 0x4bc bytes
  0173690  stdu 1, -544(1)
  0173694  mflr 0
  0173698  std 0, 560(1)
  017369c  stfd 18, 432(1)
  01736a0  stfd 19, 440(1)
  01736a4  stfd 20, 448(1)
  01736a8  stfd 21, 456(1)
  01736ac  stfd 22, 464(1)
  01736b0  stfd 23, 472(1)
  01736b4  stfd 24, 480(1)
  01736b8  stfd 25, 488(1)
  01736bc  stfd 26, 496(1)
  01736c0  stfd 27, 504(1)
  01736c4  stfd 28, 512(1)
  01736c8  stfd 29, 520(1)
  01736cc  stfd 30, 528(1)
  01736d0  stfd 31, 536(1)
  01736d4  std 30, 416(1)
  01736d8  std 29, 408(1)
  01736dc  li 30, 1
  01736e0  std 28, 400(1)
  01736e4  std 27, 392(1)
  01736e8  li 29, 4
  01736ec  ori 27, 30, 0
  01736f0  std 31, 424(1)
  01736f4  std 26, 384(1)
  01736f8  std 25, 376(1)
  01736fc  li 28, 16
  0173700  ori 31, 3, 0
  0173704  addic 3, 29, 1
  0173708  stw 29, 352(1)
  017370c  addic 7, 29, 2
  0173710  li 4, 3
  0173714  addic 5, 1, 352
  0173718  stw 3, 356(1)
  017371c  stw 7, 360(1)
  0173720  addic 6, 1, 144
  0173724  ori 3, 31, 0
  0173728  bl 0xf1238
  017372c  nop
  0173730  lfs 27, 144(1)
  0173734  lfs 26, 148(1)
  0173738  lfs 30, 160(1)
  017373c  lfs 29, 164(1)
  0173740  fsubs 30, 30, 27
  0173744  fsubs 29, 29, 26
  0173748  lfs 25, 152(1)
  017374c  lfs 28, 168(1)
  0173750  fsubs 28, 28, 25
  0173754  lis 3, 23
  0173758  stfs 27, 112(1)
  017375c  stfs 26, 116(1)
  0173760  fmuls 1, 30, 30
  0173764  fmuls 2, 29, 29
  0173768  addi 4, 3, 13948
  017376c  fmuls 3, 28, 28
  0173770  lis 3, 116
  0173774  lfs 24, 0(4)
  0173778  addic 3, 3, -23172
  017377c  stfs 25, 120(1)
  0173780  fadds 1, 1, 2
  0173784  lfs 31, 156(1)
  0173788  lfs 2, 176(1)
  017378c  fsubs 27, 2, 27
  0173790  fadds 9, 1, 3
  0173794  lfs 3, 180(1)
  0173798  lfs 4, 184(1)
  017379c  lfsx 1, 3, 28
  01737a0  fsubs 26, 3, 26
  01737a4  fsubs 25, 4, 25
  01737a8  fsqrts 9, 9
  01737ac  fcmpu 0, 9, 24
  01737b0  bf 2, 0x1737c4
  01737b4  stfs 24, 136(1)
  01737b8  stfs 24, 132(1)
  01737bc  stfs 24, 128(1)
  01737c0  b 0x1737e0
  01737c4  fdivs 1, 1, 9
  01737c8  fmuls 2, 1, 30
  01737cc  fmuls 3, 1, 29
  01737d0  fmuls 1, 1, 28
  01737d4  stfs 2, 128(1)
  01737d8  stfs 3, 132(1)
  01737dc  stfs 1, 136(1)
  01737e0  lis 4, 23
  01737e4  fcmpu 0, 9, 24
  01737e8  addc 3, 3, 28
  01737ec  addi 4, 4, 13948
  01737f0  lfs 8, 4(4)
  01737f4  lfs 4, 8(3)
  01737f8  lfs 1, 112(1)
  01737fc  fmuls 4, 4, 8
  0173800  lfs 5, 128(1)
  0173804  lfs 2, 116(1)
  0173808  lfs 6, 132(1)
  017380c  lfs 3, 120(1)
  0173810  lfs 7, 136(1)
  0173814  fsubs 4, 9, 4
  0173818  bf 2, 0x17382c
  017381c  fmr 28, 24
  0173820  fmr 29, 28
  0173824  fmr 30, 29
  0173828  b 0x17383c
  017382c  fdivs 4, 4, 9
  0173830  fmuls 30, 4, 30
  0173834  fmuls 29, 4, 29
  0173838  fmuls 28, 4, 28
  017383c  fmuls 4, 27, 27
  0173840  fmuls 9, 26, 26
  0173844  fmuls 10, 25, 25
  0173848  fadds 4, 4, 9
  017384c  lfs 9, 4(3)
  0173850  fadds 4, 4, 10
  0173854  fsqrts 4, 4
  0173858  fcmpu 1, 4, 24
  017385c  bf 6, 0x173870
  0173860  stfs 24, 136(1)
  0173864  stfs 24, 132(1)
  0173868  stfs 24, 128(1)
  017386c  b 0x17388c
  0173870  fdivs 9, 9, 4
  0173874  fmuls 10, 9, 27
  0173878  fmuls 11, 9, 26
  017387c  fmuls 9, 9, 25
  0173880  stfs 10, 128(1)
  0173884  stfs 11, 132(1)
  0173888  stfs 9, 136(1)
  017388c  lfs 9, 12(3)
  0173890  fadds 1, 1, 5
  0173894  fadds 2, 2, 6
  0173898  lfs 5, 128(1)
  017389c  fmuls 8, 9, 8
  01738a0  lfs 6, 132(1)
  01738a4  fadds 3, 3, 7
  01738a8  lfs 7, 136(1)
  01738ac  fsubs 8, 4, 8
  01738b0  bf 6, 0x1738c4
  01738b4  fmr 25, 24
  01738b8  fmr 26, 25
  01738bc  fmr 27, 26
  01738c0  b 0x1738d4
  01738c4  fdivs 4, 8, 4
  01738c8  fmuls 27, 4, 27
  01738cc  fmuls 26, 4, 26
  01738d0  fmuls 25, 4, 25
  01738d4  fadds 23, 1, 5
  01738d8  fadds 22, 3, 7
  01738dc  fadds 21, 2, 6
  01738e0  addic 7, 1, 336
  01738e4  addic 8, 1, 340
  01738e8  addic 9, 1, 344
  01738ec  addic 10, 1, 348
  01738f0  fadds 20, 23, 30
  01738f4  fadds 19, 22, 28
  01738f8  fadds 18, 21, 29
  01738fc  stfs 23, 48(1)
  0173900  stfs 22, 56(1)
  0173904  stfs 21, 52(1)
  0173908  stfs 31, 60(1)
  017390c  stfs 31, 76(1)
  0173910  fadds 1, 20, 27
  0173914  fadds 2, 19, 25
  0173918  fadds 3, 18, 26
  017391c  stfs 1, 64(1)
  0173920  stfs 2, 72(1)
  0173924  ld 3, 48(1)
  0173928  ld 4, 56(1)
  017392c  stfs 3, 68(1)
  0173930  ld 5, 64(1)
  0173934  ld 6, 72(1)
  0173938  bl 0x16a3a8
  017393c  fadds 1, 23, 27
  0173940  fadds 2, 21, 26
  0173944  stfs 23, 192(1)
  0173948  fadds 3, 22, 25
  017394c  stfs 21, 196(1)
  0173950  stfs 22, 200(1)
  0173954  lis 3, -32640
  0173958  stfs 31, 204(1)
  017395c  li 26, 0
  0173960  stfs 20, 208(1)
  0173964  ori 7, 3, 32896
  0173968  stfs 18, 212(1)
  017396c  ori 3, 27, 0
  0173970  stfs 19, 216(1)
  0173974  ori 4, 27, 0
  0173978  stfs 31, 220(1)
  017397c  ori 5, 26, 0
  0173980  ori 6, 26, 0
  0173984  fadds 4, 1, 30
  0173988  fadds 5, 2, 29
  017398c  ori 8, 26, 0
  0173990  fadds 6, 3, 28
  0173994  stfs 1, 224(1)
  0173998  stfs 2, 228(1)
  017399c  stfs 3, 232(1)
  01739a0  stfs 31, 236(1)
  01739a4  stfs 31, 252(1)
  01739a8  stw 7, 256(1)
  01739ac  stw 7, 260(1)
  01739b0  stw 7, 264(1)
  01739b4  stw 7, 268(1)
  01739b8  ori 7, 26, 0
  01739bc  stfs 4, 240(1)
  01739c0  stfs 5, 244(1)
  01739c4  stfs 6, 248(1)
  01739c8  bl 0x502f08
  01739cc  nop
  01739d0  std 3, 304(1)
  01739d4  ori 4, 26, 0
  01739d8  ori 3, 27, 0
  01739dc  ori 5, 26, 0
  01739e0  ori 6, 26, 0
  01739e4  ori 7, 26, 0
  01739e8  ori 8, 26, 0
  01739ec  ori 9, 26, 0
  01739f0  bl 0x502fd4
  01739f4  nop
  01739f8  std 3, 320(1)
  01739fc  li 7, 128
  0173a00  ori 3, 26, 0
  0173a04  ori 4, 27, 0
  0173a08  ori 5, 26, 0
  0173a0c  ori 6, 27, 0
  0173a10  bl 0x502ea8
  0173a14  nop
  0173a18  std 3, 328(1)
  0173a1c  li 3, 25
  0173a20  bl 0x685c4
  0173a24  nop
  0173a28  lis 4, 23
  0173a2c  std 3, 312(1)
  0173a30  li 25, 22
  0173a34  addi 3, 4, 13948
  0173a38  lis 4, 16256
  0173a3c  ori 7, 26, 0
  0173a40  li 6, 2
  0173a44  ori 9, 27, 0
  0173a48  lfs 1, 8(3)
  0173a4c  ori 5, 26, 0
  0173a50  stw 4, 204(1)
  0173a54  ori 8, 26, 0
  0173a58  stfs 24, 272(1)
  0173a5c  lis 4, 16252
  0173a60  stfs 24, 276(1)
  0173a64  ori 10, 27, 0
  0173a68  stfs 1, 220(1)
  0173a6c  stfs 1, 236(1)
  0173a70  stfs 1, 252(1)
  0173a74  lfs 1, 12(3)
  0173a78  stw 4, 280(1)
  0173a7c  ori 3, 27, 0
  0173a80  stfs 24, 284(1)
  0173a84  ori 4, 27, 0
  0173a88  stfs 24, 288(1)
  0173a8c  stfs 1, 292(1)
  0173a90  stfs 1, 296(1)
  0173a94  stfs 1, 300(1)
  0173a98  bl 0x502f7c
  0173a9c  nop
  0173aa0  ori 4, 3, 0
  0173aa4  ori 3, 25, 0
  0173aa8  bl 0x174f80
  0173aac  nop
  0173ab0  lis 3, 161
  0173ab4  ori 4, 26, 0
  0173ab8  addic 6, 3, 24396
  0173abc  ori 5, 27, 0
  0173ac0  addic 3, 1, 192
  0173ac4  li 7, 9
  0173ac8  lwz 6, 28(6)
  0173acc  bl 0x72280
  0173ad0  nop
  0173ad4  addic 30, 30, 1
  0173ad8  addic 29, 29, 4
  0173adc  cmpwi 30, 6
  0173ae0  addic 28, 28, 16
  0173ae4  bt 0, 0x173704
  0173ae8  ld 0, 560(1)
  0173aec  mtlr 0
  0173af0  lfd 18, 432(1)
  0173af4  lfd 19, 440(1)
  0173af8  lfd 20, 448(1)
  0173afc  lfd 21, 456(1)
  0173b00  lfd 22, 464(1)
  0173b04  lfd 23, 472(1)
  0173b08  lfd 24, 480(1)
  0173b0c  lfd 25, 488(1)
  0173b10  lfd 26, 496(1)
  0173b14  lfd 27, 504(1)
  0173b18  lfd 28, 512(1)
  0173b1c  lfd 29, 520(1)
  0173b20  lfd 30, 528(1)
  0173b24  lfd 31, 536(1)
  0173b28  ld 25, 376(1)
  0173b2c  ld 26, 384(1)
  0173b30  ld 27, 392(1)
  0173b34  ld 28, 400(1)
  0173b38  ld 29, 408(1)
  0173b3c  ld 30, 416(1)
  0173b40  ld 31, 424(1)
  0173b44  addi 1, 1, 544
  0173b48  blr

Vendor_DrawScreen:   # 0x173b60, 0x40c bytes
  0173b60  stdu 1, -304(1)
  0173b64  mflr 0
  0173b68  std 0, 320(1)
  0173b6c  stfd 31, 296(1)
  0173b70  std 31, 288(1)
  0173b74  ori 31, 3, 0
  0173b78  li 3, 0
  0173b7c  li 6, 1
  0173b80  lis 5, 23
  0173b84  li 4, 3
  0173b88  std 30, 280(1)
  0173b8c  stw 3, 192(1)
  0173b90  addi 30, 5, 15180
  0173b94  li 3, 2
  0173b98  stw 6, 196(1)
  0173b9c  addic 5, 1, 192
  0173ba0  addic 6, 1, 128
  0173ba4  stw 3, 200(1)
  0173ba8  std 29, 272(1)
  0173bac  std 28, 264(1)
  0173bb0  std 27, 256(1)
  0173bb4  std 26, 248(1)
  0173bb8  std 25, 240(1)
  0173bbc  std 24, 232(1)
  0173bc0  ori 3, 31, 0
  0173bc4  bl 0xf1238
  0173bc8  nop
  0173bcc  lfs 31, 128(1)
  0173bd0  lfs 0, 132(1)
  0173bd4  lfs 13, 136(1)
  0173bd8  lfs 11, 144(1)
  0173bdc  lfs 10, 148(1)
  0173be0  fsubs 11, 11, 31
  0173be4  fsubs 10, 10, 0
  0173be8  lfs 9, 152(1)
  0173bec  fsubs 9, 9, 13
  0173bf0  fmuls 1, 11, 11
  0173bf4  fmuls 2, 10, 10
  0173bf8  fmuls 3, 9, 9
  0173bfc  fadds 1, 1, 2
  0173c00  fadds 5, 1, 3
  0173c04  lfs 1, 0(30)
  0173c08  lfs 12, 140(1)
  0173c0c  lfs 8, 160(1)
  0173c10  lfs 7, 164(1)
  0173c14  lfs 6, 168(1)
  0173c18  fsubs 8, 8, 31
  0173c1c  fsubs 7, 7, 0
  0173c20  fsqrts 5, 5
  0173c24  fsubs 6, 6, 13
  0173c28  fcmpu 0, 5, 1
  0173c2c  bf 2, 0x173c40
  0173c30  fmr 2, 1
  0173c34  fmr 3, 2
  0173c38  fmr 4, 3
  0173c3c  b 0x173c5c
  0173c40  lis 3, 23
  0173c44  addi 3, 3, 15180
  0173c48  lfs 2, 4(3)
  0173c4c  fdivs 2, 2, 5
  0173c50  fmuls 4, 2, 11
  0173c54  fmuls 3, 2, 10
  0173c58  fmuls 2, 2, 9
  0173c5c  fcmpu 0, 5, 1
  0173c60  lis 3, 23
  0173c64  fadds 31, 31, 4
  0173c68  addi 3, 3, 15180
  0173c6c  fadds 0, 0, 3
  0173c70  fadds 13, 13, 2
  0173c74  lfs 4, 8(3)
  0173c78  fsubs 4, 5, 4
  0173c7c  bf 2, 0x173c90
  0173c80  fmr 9, 1
  0173c84  fmr 10, 9
  0173c88  fmr 11, 10
  0173c8c  b 0x173ca0
  0173c90  fdivs 2, 4, 5
  0173c94  fmuls 11, 2, 11
  0173c98  fmuls 10, 2, 10
  0173c9c  fmuls 9, 2, 9
  0173ca0  fmuls 2, 8, 8
  0173ca4  fmuls 3, 7, 7
  0173ca8  fmuls 4, 6, 6
  0173cac  fadds 2, 2, 3
  0173cb0  fadds 5, 2, 4
  0173cb4  fsqrts 5, 5
  0173cb8  fcmpu 1, 5, 1
  0173cbc  bf 6, 0x173cd0
  0173cc0  fmr 2, 1
  0173cc4  fmr 3, 2
  0173cc8  fmr 4, 3
  0173ccc  b 0x173cec
  0173cd0  lis 3, 23
  0173cd4  addi 3, 3, 15180
  0173cd8  lfs 2, 12(3)
  0173cdc  fdivs 2, 2, 5
  0173ce0  fmuls 4, 2, 8
  0173ce4  fmuls 3, 2, 7
  0173ce8  fmuls 2, 2, 6
  0173cec  lis 3, 23
  0173cf0  fadds 31, 31, 4
  0173cf4  fadds 0, 0, 3
  0173cf8  addi 3, 3, 15180
  0173cfc  fadds 13, 13, 2
  0173d00  lfs 4, 12(3)
  0173d04  fsubs 4, 5, 4
  0173d08  bf 6, 0x173d1c
  0173d0c  fmr 6, 1
  0173d10  fmr 7, 6
  0173d14  fmr 8, 7
  0173d18  b 0x173d2c
  0173d1c  fdivs 1, 4, 5
  0173d20  fmuls 8, 1, 8
  0173d24  fmuls 7, 1, 7
  0173d28  fmuls 6, 1, 6
  0173d2c  fadds 1, 31, 8
  0173d30  stfs 31, 48(1)
  0173d34  fadds 2, 13, 6
  0173d38  stfs 13, 56(1)
  0173d3c  fadds 3, 0, 7
  0173d40  stfs 0, 52(1)
  0173d44  stfs 12, 60(1)
  0173d48  addic 7, 1, 176
  0173d4c  stfs 12, 76(1)
  0173d50  addic 8, 1, 180
  0173d54  addic 9, 1, 184
  0173d58  addic 10, 1, 188
  0173d5c  fadds 1, 1, 11
  0173d60  fadds 2, 2, 9
  0173d64  fadds 3, 3, 10
  0173d68  stfs 1, 64(1)
  0173d6c  stfs 2, 72(1)
  0173d70  stfs 3, 68(1)
  0173d74  ld 3, 48(1)
  0173d78  ld 4, 56(1)
  0173d7c  ld 5, 64(1)
  0173d80  ld 6, 72(1)
  0173d84  bl 0x16a108
  0173d88  lis 4, 23
  0173d8c  li 3, 9
  0173d90  addi 5, 4, 15180
  0173d94  ori 4, 3, 0
  0173d98  lfs 1, 16(5)
  0173d9c  bl 0x171d00
  0173da0  li 30, 512
  0173da4  ori 3, 30, 0
  0173da8  ori 4, 30, 0
  0173dac  bl 0x78138
  0173db0  nop
  0173db4  lis 3, 144
  0173db8  li 28, 0
  0173dbc  addic 27, 3, -23532
  0173dc0  li 26, 1
  0173dc4  li 29, 255
  0173dc8  ori 3, 28, 0
  0173dcc  li 24, 2
  0173dd0  ori 4, 26, 0
  0173dd4  lwz 25, 40(27)
  0173dd8  ori 6, 26, 0
  0173ddc  ori 5, 24, 0
  0173de0  ori 7, 29, 0
  0173de4  bl 0x502ea8
  0173de8  nop
  0173dec  ori 4, 3, 0
  0173df0  ori 3, 25, 0
  0173df4  bl 0x4d5fe4
  0173df8  nop
  0173dfc  lwz 4, 176(1)
  0173e00  ori 3, 31, 0
  0173e04  lwz 5, 180(1)
  0173e08  extsw 4, 4
  0173e0c  extsw 5, 5
  0173e10  bl 0x1711a8
  0173e14  lwz 3, 176(1)
  0173e18  lwz 4, 180(1)
  0173e1c  extsw 3, 3
  0173e20  extsw 4, 4
  0173e24  std 3, 208(1)
  0173e28  li 3, 6
  0173e2c  lfd 1, 208(1)
  0173e30  std 4, 208(1)
  0173e34  fcfid 1, 1
  0173e38  frsp 1, 1
  0173e3c  lfd 2, 208(1)
  0173e40  fcfid 2, 2
  0173e44  frsp 2, 2
  0173e48  bl 0x1717a8
  0173e4c  bl 0x71ac0
  0173e50  nop
  0173e54  ori 3, 30, 0
  0173e58  ori 4, 30, 0
  0173e5c  bl 0x78138
  0173e60  nop
  0173e64  ori 3, 28, 0
  0173e68  lwz 30, 40(27)
  0173e6c  ori 4, 26, 0
  0173e70  ori 5, 24, 0
  0173e74  ori 6, 26, 0
  0173e78  ori 7, 29, 0
  0173e7c  bl 0x502ea8
  0173e80  nop
  0173e84  ori 4, 3, 0
  0173e88  ori 3, 30, 0
  0173e8c  bl 0x4d5fe4
  0173e90  nop
  0173e94  ori 3, 28, 0
  0173e98  lwz 30, 28(27)
  0173e9c  ori 4, 26, 0
  0173ea0  ori 5, 24, 0
  0173ea4  ori 6, 26, 0
  0173ea8  ori 7, 29, 0
  0173eac  bl 0x502ea8
  0173eb0  nop
  0173eb4  ori 4, 3, 0
  0173eb8  ori 3, 30, 0
  0173ebc  bl 0x4d5fe4
  0173ec0  nop
  0173ec4  ori 3, 31, 0
  0173ec8  ori 4, 26, 0
  0173ecc  bl 0xf1934
  0173ed0  nop
  0173ed4  lwz 5, 176(1)
  0173ed8  lis 3, -32640
  0173edc  lwz 4, 184(1)
  0173ee0  lis 6, 230
  0173ee4  lwz 8, 180(1)
  0173ee8  ori 7, 3, 32896
  0173eec  lwz 10, 188(1)
  0173ef0  extsw 3, 4
  0173ef4  addic 11, 6, -21996
  0173ef8  extsw 4, 10
  0173efc  clrldi 12, 7, 32
  0173f00  srawi 9, 5, 1
  0173f04  extsw 6, 8
  0173f08  std 11, 120(1)
  0173f0c  addze 9, 9
  0173f10  srawi 10, 8, 1
  0173f14  extsw 5, 5
  0173f18  std 12, 112(1)
  0173f1c  addze 10, 10
  0173f20  extsw 9, 9
  0173f24  extsw 10, 10
  0173f28  ori 7, 28, 0
  0173f2c  ori 8, 28, 0
  0173f30  bl 0x6889c
  0173f34  nop
  0173f38  ld 0, 320(1)
  0173f3c  mtlr 0
  0173f40  lfd 31, 296(1)
  0173f44  ld 24, 232(1)
  0173f48  ld 25, 240(1)
  0173f4c  ld 26, 248(1)
  0173f50  ld 27, 256(1)
  0173f54  ld 28, 264(1)
  0173f58  ld 29, 272(1)
  0173f5c  ld 30, 280(1)
  0173f60  ld 31, 288(1)
  0173f64  addi 1, 1, 304
  0173f68  blr

Vendor_DrawScrollingOverlay:   # 0x173f78, 0x574 bytes
  0173f78  stdu 1, -480(1)
  0173f7c  mflr 0
  0173f80  std 0, 496(1)
  0173f84  stfd 17, 360(1)
  0173f88  stfd 18, 368(1)
  0173f8c  stfd 19, 376(1)
  0173f90  stfd 20, 384(1)
  0173f94  stfd 21, 392(1)
  0173f98  stfd 22, 400(1)
  0173f9c  stfd 23, 408(1)
  0173fa0  stfd 24, 416(1)
  0173fa4  stfd 25, 424(1)
  0173fa8  stfd 26, 432(1)
  0173fac  stfd 27, 440(1)
  0173fb0  stfd 28, 448(1)
  0173fb4  stfd 29, 456(1)
  0173fb8  stfd 30, 464(1)
  0173fbc  stfd 31, 472(1)
  0173fc0  std 31, 352(1)
  0173fc4  lis 3, 23
  0173fc8  lis 31, 116
  0173fcc  addi 3, 3, 16236
  0173fd0  lfs 1, 0(3)
  0173fd4  lfs 2, -22564(31)
  0173fd8  fadds 1, 2, 1
  0173fdc  stfs 1, -22564(31)
  0173fe0  lfs 1, 4(3)
  0173fe4  lfs 2, -22564(31)
  0173fe8  fcmpu 0, 2, 1
  0173fec  std 30, 344(1)
  0173ff0  std 29, 336(1)
  0173ff4  std 28, 328(1)
  0173ff8  std 27, 320(1)
  0173ffc  cror 6, 0, 2
  0174000  bt 6, 0x17400c
  0174004  fsubs 1, 2, 1
  0174008  stfs 1, -22564(31)
  017400c  li 29, 0
  0174010  ori 3, 29, 0
  0174014  ori 4, 29, 0
  0174018  ori 5, 29, 0
  017401c  ori 6, 29, 0
  0174020  ori 7, 29, 0
  0174024  ori 8, 29, 0
  0174028  bl 0x502f08
  017402c  nop
  0174030  li 30, 1
  0174034  std 3, 288(1)
  0174038  ori 4, 29, 0
  017403c  ori 3, 30, 0
  0174040  ori 8, 29, 0
  0174044  ori 5, 29, 0
  0174048  ori 6, 29, 0
  017404c  ori 7, 29, 0
  0174050  ori 9, 29, 0
  0174054  bl 0x502fd4
  0174058  nop
  017405c  std 3, 304(1)
  0174060  ori 3, 29, 0
  0174064  li 7, 64
  0174068  ori 4, 30, 0
  017406c  ori 5, 29, 0
  0174070  ori 6, 30, 0
  0174074  bl 0x502ea8
  0174078  nop
  017407c  std 3, 312(1)
  0174080  li 3, 24
  0174084  bl 0x685c4
  0174088  nop
  017408c  ori 30, 29, 0
  0174090  std 3, 296(1)
  0174094  lis 3, 116
  0174098  lis 5, 230
  017409c  addic 3, 3, -22820
  01740a0  lis 4, 116
  01740a4  addic 5, 5, -22960
  01740a8  addic 4, 4, -23072
  01740ac  lwzx 6, 3, 30
  01740b0  slwi 7, 6, 4
  01740b4  lwz 5, 28(5)
  01740b8  addc 7, 4, 7
  01740bc  addic 8, 5, 192
  01740c0  clrldi 7, 7, 32
  01740c4  lfs 1, 0(7)
  01740c8  lfs 2, 4(7)
  01740cc  lfs 3, 0(8)
  01740d0  lfs 4, 16(8)
  01740d4  lfs 7, 8(7)
  01740d8  lfs 8, 4(8)
  01740dc  fmuls 5, 3, 1
  01740e0  lfs 9, 12(8)
  01740e4  fmuls 6, 4, 2
  01740e8  lfs 10, 20(8)
  01740ec  fmuls 11, 8, 1
  01740f0  lfs 12, 28(8)
  01740f4  fmuls 13, 9, 1
  01740f8  lfs 31, 8(8)
  01740fc  fmuls 0, 10, 2
  0174100  fmuls 30, 12, 2
  0174104  lfs 29, 24(8)
  0174108  lfs 28, 32(8)
  017410c  fmuls 1, 31, 1
  0174110  lfs 27, 36(8)
  0174114  fmuls 2, 29, 2
  0174118  lfs 25, 44(8)
  017411c  fmuls 26, 28, 7
  0174120  fmuls 24, 27, 7
  0174124  fmuls 23, 25, 7
  0174128  fadds 5, 5, 6
  017412c  lfs 6, 40(8)
  0174130  addic 8, 1, 112
  0174134  fadds 11, 11, 0
  0174138  fadds 13, 13, 30
  017413c  fmuls 7, 6, 7
  0174140  fadds 1, 1, 2
  0174144  fadds 2, 5, 26
  0174148  lfs 5, 12(7)
  017414c  addc 7, 3, 30
  0174150  fadds 11, 11, 24
  0174154  fadds 13, 13, 23
  0174158  fadds 1, 1, 7
  017415c  lwz 9, 4(7)
  0174160  slwi 9, 9, 4
  0174164  addc 9, 4, 9
  0174168  stfs 2, 0(8)
  017416c  clrldi 9, 9, 32
  0174170  fadds 5, 13, 5
  0174174  stfs 11, 4(8)
  0174178  stfs 1, 8(8)
  017417c  slwi 10, 6, 2
  0174180  slwi 6, 6, 3
  0174184  extsw 10, 10
  0174188  stfs 5, 12(8)
  017418c  lfs 5, 0(9)
  0174190  lfs 7, 4(9)
  0174194  fmuls 13, 3, 5
  0174198  fmuls 30, 4, 7
  017419c  lfs 0, 8(9)
  01741a0  fmuls 26, 9, 5
  01741a4  fmuls 24, 12, 7
  01741a8  fmuls 23, 8, 5
  01741ac  fmuls 22, 10, 7
  01741b0  fmuls 5, 31, 5
  01741b4  fmuls 7, 29, 7
  01741b8  fmuls 20, 25, 0
  01741bc  fmuls 21, 28, 0
  01741c0  fmuls 19, 27, 0
  01741c4  fadds 13, 13, 30
  01741c8  fmuls 0, 6, 0
  01741cc  fadds 30, 26, 24
  01741d0  fadds 26, 23, 22
  01741d4  fadds 5, 5, 7
  01741d8  lfs 7, 12(9)
  01741dc  lwz 8, 8(7)
  01741e0  addic 9, 1, 128
  01741e4  fadds 13, 13, 21
  01741e8  slwi 8, 8, 4
  01741ec  fadds 30, 30, 20
  01741f0  addc 8, 4, 8
  01741f4  fadds 26, 26, 19
  01741f8  clrldi 8, 8, 32
  01741fc  fadds 5, 5, 0
  0174200  extsw 6, 6
  0174204  fadds 7, 30, 7
  0174208  stfs 13, 0(9)
  017420c  stfs 26, 4(9)
  0174210  stfs 5, 8(9)
  0174214  stfs 7, 12(9)
  0174218  lfs 7, 0(8)
  017421c  lfs 0, 4(8)
  0174220  fmuls 22, 9, 7
  0174224  lfs 24, 8(8)
  0174228  fmuls 21, 12, 0
  017422c  fmuls 30, 3, 7
  0174230  fmuls 23, 4, 0
  0174234  fmuls 20, 8, 7
  0174238  fmuls 19, 10, 0
  017423c  fmuls 7, 31, 7
  0174240  fmuls 0, 29, 0
  0174244  fmuls 17, 25, 24
  0174248  fmuls 18, 28, 24
  017424c  fadds 22, 22, 21
  0174250  fadds 30, 30, 23
  0174254  fmuls 23, 27, 24
  0174258  fadds 21, 20, 19
  017425c  fmuls 24, 6, 24
  0174260  fadds 7, 7, 0
  0174264  lfs 0, 12(8)
  0174268  lwz 7, 12(7)
  017426c  addic 8, 1, 144
  0174270  fadds 22, 22, 17
  0174274  slwi 7, 7, 4
  0174278  fadds 30, 30, 18
  017427c  addc 4, 4, 7
  0174280  fadds 23, 21, 23
  0174284  clrldi 4, 4, 32
  0174288  fadds 7, 7, 24
  017428c  addic 7, 3, 4
  0174290  fadds 0, 22, 0
  0174294  lis 9, 116
  0174298  stfs 30, 0(8)
  017429c  stfs 23, 4(8)
  01742a0  stfs 7, 8(8)
  01742a4  addic 9, 9, -22928
  01742a8  stfs 0, 12(8)
  01742ac  lfs 0, 0(4)
  01742b0  lfs 24, 4(4)
  01742b4  fmuls 3, 3, 0
  01742b8  fmuls 4, 4, 24
  01742bc  lfs 22, 8(4)
  01742c0  fmuls 9, 9, 0
  01742c4  fmuls 12, 12, 24
  01742c8  fmuls 8, 8, 0
  01742cc  fmuls 0, 31, 0
  01742d0  fmuls 10, 10, 24
  01742d4  fmuls 31, 29, 24
  01742d8  fmuls 29, 28, 22
  01742dc  fmuls 28, 25, 22
  01742e0  fmuls 27, 27, 22
  01742e4  fadds 3, 3, 4
  01742e8  fmuls 6, 6, 22
  01742ec  fadds 4, 9, 12
  01742f0  addic 8, 3, 8
  01742f4  fadds 8, 8, 10
  01742f8  fadds 9, 0, 31
  01742fc  lfs 10, 12(4)
  0174300  addic 4, 1, 160
  0174304  addic 3, 3, 12
  0174308  fadds 3, 3, 29
  017430c  fadds 4, 4, 28
  0174310  fadds 8, 8, 27
  0174314  fadds 6, 9, 6
  0174318  addic 28, 9, 4
  017431c  fadds 4, 4, 10
  0174320  stfs 3, 0(4)
  0174324  stfs 8, 4(4)
  0174328  stfs 6, 8(4)
  017432c  stfs 4, 12(4)
  0174330  lfs 4, 16(5)
  0174334  lis 4, 116
  0174338  lwzx 7, 7, 30
  017433c  fadds 2, 4, 2
  0174340  lwzx 8, 8, 30
  0174344  slwi 12, 7, 2
  0174348  lwzx 3, 3, 30
  017434c  addic 4, 4, -22856
  0174350  fadds 9, 4, 13
  0174354  slwi 11, 8, 2
  0174358  fadds 10, 4, 30
  017435c  fadds 3, 4, 3
  0174360  slwi 7, 7, 3
  0174364  extsw 11, 11
  0174368  slwi 27, 3, 2
  017436c  extsw 7, 7
  0174370  slwi 3, 3, 3
  0174374  stfs 2, 176(1)
  0174378  lfs 2, 20(5)
  017437c  extsw 27, 27
  0174380  fadds 4, 2, 11
  0174384  slwi 8, 8, 3
  0174388  fadds 11, 2, 26
  017438c  fadds 12, 2, 23
  0174390  fadds 2, 2, 8
  0174394  extsw 8, 8
  0174398  stfs 4, 180(1)
  017439c  lfs 4, 24(5)
  01743a0  stfs 9, 192(1)
  01743a4  extsw 5, 12
  01743a8  fadds 1, 4, 1
  01743ac  stfs 11, 196(1)
  01743b0  fadds 5, 4, 5
  01743b4  stfs 10, 208(1)
  01743b8  fadds 7, 4, 7
  01743bc  stfs 12, 212(1)
  01743c0  fadds 4, 4, 6
  01743c4  stfs 3, 224(1)
  01743c8  stfs 2, 228(1)
  01743cc  addc 12, 9, 6
  01743d0  lwzx 10, 4, 10
  01743d4  lwzx 5, 4, 5
  01743d8  stfs 1, 184(1)
  01743dc  stfs 5, 200(1)
  01743e0  stfs 7, 216(1)
  01743e4  stfs 4, 232(1)
  01743e8  stw 10, 240(1)
  01743ec  lfs 1, 4(12)
  01743f0  lfs 2, -22564(31)
  01743f4  extsw 10, 3
  01743f8  stw 5, 244(1)
  01743fc  lwzx 3, 4, 11
  0174400  lfsx 3, 28, 7
  0174404  fadds 1, 1, 2
  0174408  stw 3, 248(1)
  017440c  li 5, 1
  0174410  lwzx 3, 4, 27
  0174414  lfsx 4, 9, 6
  0174418  stw 3, 252(1)
  017441c  fadds 3, 3, 2
  0174420  lfsx 5, 28, 8
  0174424  lis 3, 161
  0174428  stfs 4, 256(1)
  017442c  fadds 4, 5, 2
  0174430  lfsx 5, 28, 10
  0174434  addic 4, 3, 24396
  0174438  lfsx 6, 9, 7
  017443c  addic 3, 1, 176
  0174440  fadds 2, 5, 2
  0174444  li 7, 9
  0174448  lfsx 5, 9, 8
  017444c  stfs 6, 264(1)
  0174450  stfs 1, 260(1)
  0174454  stfs 5, 272(1)
  0174458  lfsx 1, 9, 10
  017445c  stfs 3, 268(1)
  0174460  stfs 1, 280(1)
  0174464  lwz 6, 28(4)
  0174468  stfs 4, 276(1)
  017446c  li 4, 0
  0174470  stfs 2, 284(1)
  0174474  bl 0x72280
  0174478  nop
  017447c  addic 29, 29, 1
  0174480  addic 30, 30, 16
  0174484  cmpwi 29, 4
  0174488  bt 0, 0x174094
  017448c  ld 0, 496(1)
  0174490  mtlr 0
  0174494  lfd 17, 360(1)
  0174498  lfd 18, 368(1)
  017449c  lfd 19, 376(1)
  01744a0  lfd 20, 384(1)
  01744a4  lfd 21, 392(1)
  01744a8  lfd 22, 400(1)
  01744ac  lfd 23, 408(1)
  01744b0  lfd 24, 416(1)
  01744b4  lfd 25, 424(1)
  01744b8  lfd 26, 432(1)
  01744bc  lfd 27, 440(1)
  01744c0  lfd 28, 448(1)
  01744c4  lfd 29, 456(1)
  01744c8  lfd 30, 464(1)
  01744cc  lfd 31, 472(1)
  01744d0  ld 27, 320(1)
  01744d4  ld 28, 328(1)
  01744d8  ld 29, 336(1)
  01744dc  ld 30, 344(1)
  01744e0  ld 31, 352(1)
  01744e4  addi 1, 1, 480
  01744e8  blr

Vendor_PostUpdate:   # 0x1744f0, 0x61c bytes
  01744f0  stdu 1, -224(1)
  01744f4  mflr 0
  01744f8  std 0, 240(1)
  01744fc  lis 3, 161
  0174500  lwz 3, 1820(3)
  0174504  std 31, 216(1)
  0174508  std 30, 208(1)
  017450c  std 29, 200(1)
  0174510  std 28, 192(1)
  0174514  std 27, 184(1)
  0174518  std 26, 176(1)
  017451c  cmpwi 3, 0
  0174520  bf 2, 0x174ae4
  0174524  bl 0x78100
  0174528  nop
  017452c  lis 31, 230
  0174530  addic 31, 31, -22960
  0174534  lwz 3, 8(31)
  0174538  cmpwi 3, 0
  017453c  bt 1, 0x17454c
  0174540  cmpwi 3, -1
  0174544  bf 1, 0x174ae4
  0174548  b 0x174558
  017454c  cmpwi 3, 1
  0174550  bf 1, 0x174910
  0174554  b 0x174ae4
  0174558  lwz 3, 12(31)
  017455c  cmpwi 3, 0
  0174560  bt 2, 0x174574
  0174564  lwz 4, 28(31)
  0174568  lhz 5, 52(4)
  017456c  ori 5, 5, 1
  0174570  sth 5, 52(4)
  0174574  lis 4, 1
  0174578  cmpwi 3, 0
  017457c  lis 3, 150
  0174580  ori 4, 4, 255
  0174584  stw 4, -12988(3)
  0174588  bf 2, 0x17459c
  017458c  lis 4, 230
  0174590  lwz 4, -22960(4)
  0174594  cmpwi 4, 3
  0174598  bf 2, 0x1745b0
  017459c  lis 4, -2
  01745a0  lwz 5, -12988(3)
  01745a4  ori 4, 4, 65407
  01745a8  and 4, 5, 4
  01745ac  stw 4, -12988(3)
  01745b0  bl 0x6bb78
  01745b4  nop
  01745b8  lwz 3, 12(31)
  01745bc  cmpwi 3, 0
  01745c0  bt 2, 0x174ae4
  01745c4  lis 3, 346
  01745c8  li 30, 0
  01745cc  li 5, 1
  01745d0  lis 4, 230
  01745d4  lis 6, 6
  01745d8  lwz 7, -15568(3)
  01745dc  stw 30, 12(31)
  01745e0  stw 5, 8(31)
  01745e4  addic 5, 7, 1
  01745e8  lwz 7, 16(31)
  01745ec  stw 6, -21916(4)
  01745f0  stw 5, -15568(3)
  01745f4  ori 3, 7, 0
  01745f8  bl 0x6e068
  01745fc  nop
  0174600  lwz 3, 28(31)
  0174604  lis 4, 15889
  0174608  lwz 7, 64(31)
  017460c  lis 6, 230
  0174610  ori 4, 4, 20565
  0174614  lis 27, 149
  0174618  addic 6, 6, -22176
  017461c  lhz 5, 52(3)
  0174620  stw 4, 44(3)
  0174624  addic 27, 27, 5056
  0174628  rlwinm 5, 5, 0, 0, 30
  017462c  cmpwi 7, 0
  0174630  addic 4, 6, 32
  0174634  addic 28, 27, 864
  0174638  sth 5, 52(3)
  017463c  addic 29, 27, 880
  0174640  addic 5, 27, 848
  0174644  addic 3, 6, 16
  0174648  bt 2, 0x1746fc
  017464c  lfs 1, 336(27)
  0174650  lfs 2, 340(27)
  0174654  ori 7, 5, 0
  0174658  stfs 1, 112(31)
  017465c  ori 9, 3, 0
  0174660  lfs 1, 344(27)
  0174664  ori 8, 4, 0
  0174668  stfs 2, 116(31)
  017466c  li 26, 16
  0174670  lfs 2, 348(27)
  0174674  ori 3, 7, 0
  0174678  stfs 1, 120(31)
  017467c  ori 4, 30, 0
  0174680  lvx 2, 0, 7
  0174684  ori 5, 26, 0
  0174688  lvx 3, 0, 28
  017468c  stfs 2, 124(31)
  0174690  lvx 4, 0, 29
  0174694  stvx 2, 0, 6
  0174698  stvx 3, 0, 9
  017469c  stvx 4, 0, 8
  01746a0  bl 0x5d0140
  01746a4  nop
  01746a8  ori 3, 28, 0
  01746ac  ori 4, 30, 0
  01746b0  ori 5, 26, 0
  01746b4  bl 0x5d0140
  01746b8  nop
  01746bc  ori 3, 29, 0
  01746c0  ori 4, 30, 0
  01746c4  ori 5, 26, 0
  01746c8  bl 0x5d0140
  01746cc  nop
  01746d0  lis 3, 23
  01746d4  lis 4, 16256
  01746d8  addi 3, 3, 17644
  01746dc  lfs 1, 0(3)
  01746e0  stw 4, 848(27)
  01746e4  stfs 1, 868(27)
  01746e8  stfs 1, 888(27)
  01746ec  stfs 1, 892(27)
  01746f0  bl 0x66088
  01746f4  nop
  01746f8  b 0x17476c
  01746fc  lfs 1, 884(27)
  0174700  lfs 2, 856(27)
  0174704  addic 7, 27, 4
  0174708  lfs 3, 888(27)
  017470c  lfs 4, 852(27)
  0174710  lfs 6, 848(27)
  0174714  fmuls 5, 1, 2
  0174718  lfs 8, 880(27)
  017471c  fmuls 7, 3, 4
  0174720  fmuls 3, 3, 6
  0174724  fmuls 2, 8, 2
  0174728  fmuls 4, 8, 4
  017472c  fmuls 1, 1, 6
  0174730  lvx 2, 0, 5
  0174734  lvx 3, 0, 28
  0174738  lvx 4, 0, 29
  017473c  stvx 2, 0, 6
  0174740  stvx 3, 0, 3
  0174744  fsubs 5, 5, 7
  0174748  stvx 4, 0, 4
  017474c  addic 3, 27, 8
  0174750  fsubs 2, 3, 2
  0174754  addic 4, 27, 12
  0174758  fsubs 1, 4, 1
  017475c  stfs 5, 0(28)
  0174760  stfs 2, 864(7)
  0174764  stfs 1, 864(3)
  0174768  stw 30, 864(4)
  017476c  lwz 3, 20(31)
  0174770  li 29, 13
  0174774  addic 3, 3, 256
  0174778  ori 4, 29, 0
  017477c  stw 3, 32(31)
  0174780  bl 0xef810
  0174784  nop
  0174788  li 28, 64
  017478c  lwz 4, 32(31)
  0174790  ori 3, 4, 0
  0174794  sth 28, 50(4)
  0174798  bl 0xf31a8
  017479c  nop
  01747a0  lis 4, 32
  01747a4  lwz 3, 32(31)
  01747a8  li 27, 14
  01747ac  ori 26, 4, 8224
  01747b0  ori 5, 27, 0
  01747b4  ori 4, 26, 0
  01747b8  ori 6, 27, 0
  01747bc  ori 7, 30, 0
  01747c0  bl 0xf1ea0
  01747c4  nop
  01747c8  lwz 3, 32(31)
  01747cc  ori 4, 29, 0
  01747d0  addic 3, 3, 1280
  01747d4  bl 0xef810
  01747d8  nop
  01747dc  lwz 4, 32(31)
  01747e0  addic 3, 4, 1280
  01747e4  sth 28, 1330(4)
  01747e8  bl 0xf31a8
  01747ec  nop
  01747f0  lwz 3, 32(31)
  01747f4  ori 4, 26, 0
  01747f8  ori 7, 30, 0
  01747fc  addic 3, 3, 1280
  0174800  ori 5, 27, 0
  0174804  ori 6, 27, 0
  0174808  bl 0xf1ea0
  017480c  nop
  0174810  lis 29, 144
  0174814  lwz 29, -23196(29)
  0174818  lbz 3, 17(29)
  017481c  cmpwi 3, 129
  0174820  bf 2, 0x174858
  0174824  lwz 3, 20(29)
  0174828  rlwinm 3, 3, 31, 31, 31
  017482c  cmpwi 3, 0
  0174830  bf 2, 0x174858
  0174834  lwz 4, 0(29)
  0174838  std 2, 40(1)
  017483c  ori 3, 29, 0
  0174840  lwz 4, 24(4)
  0174844  lwz 5, 0(4)
  0174848  lwz 2, 4(4)
  017484c  mtctr 5
  0174850  bcctrl 20, 30
  0174854  ld 2, 40(1)
  0174858  lwz 3, 6796(29)
  017485c  addic 3, 3, 2
  0174860  stw 3, 6796(29)
  0174864  bl 0x16c6b8
  0174868  lwz 3, 20(31)
  017486c  li 4, 1024
  0174870  addic 3, 3, 5120
  0174874  stw 3, 44(31)
  0174878  bl 0x500250
  017487c  nop
  0174880  lis 3, 150
  0174884  addic 3, 3, 14024
  0174888  lwz 4, 44(31)
  017488c  addic 4, 4, 1024
  0174890  lhz 3, 8(3)
  0174894  cmpwi 3, 0
  0174898  stw 4, 24(31)
  017489c  bf 2, 0x174908
  01748a0  lis 3, 150
  01748a4  lwz 3, 27368(3)
  01748a8  cmpwi 3, 0
  01748ac  bt 2, 0x1748c8
  01748b0  lis 4, 101
  01748b4  addic 3, 1, 112
  01748b8  addic 4, 4, 16304
  01748bc  bl 0x5cd2a8
  01748c0  nop
  01748c4  b 0x1748dc
  01748c8  lis 4, 101
  01748cc  addic 3, 1, 112
  01748d0  addic 4, 4, 16336
  01748d4  bl 0x5cd2a8
  01748d8  nop
  01748dc  addic 3, 1, 112
  01748e0  lwz 4, 24(31)
  01748e4  li 5, -1
  01748e8  bl 0x503e00
  01748ec  nop
  01748f0  cmpdi 3, 0
  01748f4  bt 2, 0x1748fc
  01748f8  li 30, 1
  01748fc  lis 3, 230
  0174900  stb 30, -22063(3)
  0174904  b 0x174910
  0174908  lis 3, 230
  017490c  stb 30, -22063(3)
  0174910  lwz 3, 16(31)
  0174914  bl 0x6e0d8
  0174918  nop
  017491c  lis 3, 144
  0174920  lis 5, 4
  0174924  lwz 4, -23532(3)
  0174928  lwz 6, 8(4)
  017492c  addic 7, 6, 8
  0174930  stw 7, 8(4)
  0174934  lwz 4, -23532(3)
  0174938  ori 3, 5, 7564
  017493c  li 5, -256
  0174940  lwz 7, 8(4)
  0174944  stw 3, 0(6)
  0174948  addic 8, 7, 8
  017494c  lis 3, 4
  0174950  ori 9, 3, 7572
  0174954  stw 8, 8(4)
  0174958  li 3, 0
  017495c  stw 5, 4(6)
  0174960  lis 6, 4
  0174964  li 5, 1
  0174968  stw 9, 0(7)
  017496c  ori 6, 6, 256
  0174970  stw 5, 4(7)
  0174974  stw 6, 0(8)
  0174978  lwz 5, 8(4)
  017497c  addic 6, 5, 8
  0174980  stw 3, 4(5)
  0174984  stw 6, 8(4)
  0174988  bl 0x6d704
  017498c  nop
  0174990  bl 0x66088
  0174994  nop
  0174998  bl 0x6849c
  017499c  nop
  01749a0  bl 0xf1850
  01749a4  nop
  01749a8  bl 0xf1844
  01749ac  nop
  01749b0  bl 0xf1848
  01749b4  nop
  01749b8  lis 3, 230
  01749bc  lwz 4, 64(31)
  01749c0  lbz 3, -22061(3)
  01749c4  or 3, 3, 4
  01749c8  cmpwi 3, 0
  01749cc  bf 2, 0x174a38
  01749d0  lwz 3, 88(31)
  01749d4  slwi 3, 3, 4
  01749d8  extsw 3, 3
  01749dc  addc 3, 31, 3
  01749e0  lbz 4, 212(3)
  01749e4  cmpwi 4, 1
  01749e8  bf 2, 0x174a24
  01749ec  lwz 3, 208(3)
  01749f0  lis 4, 116
  01749f4  slwi 3, 3, 6
  01749f8  addic 4, 4, -28096
  01749fc  extsw 3, 3
  0174a00  lwzx 3, 4, 3
  0174a04  cmpwi 3, 0
  0174a08  bt 2, 0x174a38
  0174a0c  lwz 3, 32(31)
  0174a10  li 4, 1
  0174a14  addic 3, 3, 512
  0174a18  bl 0xf1934
  0174a1c  nop
  0174a20  b 0x174a38
  0174a24  lwz 3, 32(31)
  0174a28  li 4, 1
  0174a2c  addic 3, 3, 768
  0174a30  bl 0xf1934
  0174a34  nop
  0174a38  lwz 3, 28(31)
  0174a3c  li 4, 1
  0174a40  bl 0xf1934
  0174a44  nop
  0174a48  lwz 3, 64(31)
  0174a4c  cmpwi 3, 0
  0174a50  bf 2, 0x174a58
  0174a54  bl 0x173f78
  0174a58  lwz 3, 28(31)
  0174a5c  bl 0x172c40
  0174a60  lwz 3, 92(31)
  0174a64  cmpwi 3, 0
  0174a68  bt 2, 0x174a78
  0174a6c  lwz 3, 32(31)
  0174a70  addic 3, 3, 1024
  0174a74  bl 0x173b60
  0174a78  lwz 3, 28(31)
  0174a7c  bl 0x173690
  0174a80  li 4, 1
  0174a84  li 3, 0
  0174a88  li 31, 3
  0174a8c  ori 6, 4, 0
  0174a90  li 7, 128
  0174a94  ori 5, 3, 0
  0174a98  bl 0x502ea8
  0174a9c  nop
  0174aa0  ori 4, 3, 0
  0174aa4  ori 3, 31, 0
  0174aa8  bl 0x174f80
  0174aac  nop
  0174ab0  bl 0xd5c20
  0174ab4  nop
  0174ab8  bl 0x6d708
  0174abc  nop
  0174ac0  bl 0xf184c
  0174ac4  nop
  0174ac8  bl 0xf1974
  0174acc  nop
  0174ad0  li 3, 16
  0174ad4  bl 0x174cf4
  0174ad8  nop
  0174adc  bl 0xf1448
  0174ae0  nop
  0174ae4  ld 0, 240(1)
  0174ae8  mtlr 0
  0174aec  ld 26, 176(1)
  0174af0  ld 27, 184(1)
  0174af4  ld 28, 192(1)
  0174af8  ld 29, 200(1)
  0174afc  ld 30, 208(1)
  0174b00  ld 31, 216(1)
  0174b04  addi 1, 1, 224
  0174b08  blr
