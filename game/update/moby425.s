# game/update/moby425.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M425_0036a198:   # 0x36a198, 0x14 bytes
  036a198  lis 3, 132
  036a19c  lis 4, 1
  036a1a0  addic 3, 3, 4308
  036a1a4  stw 4, 72(3)
  036a1a8  blr

FUN_0036a1d0:   # 0x36a1d0, 0x2e8 bytes
  036a1d0  stdu 1, -192(1)
  036a1d4  mflr 0
  036a1d8  std 0, 208(1)
  036a1dc  std 28, 160(1)
  036a1e0  ori 28, 3, 0
  036a1e4  std 30, 176(1)
  036a1e8  std 29, 168(1)
  036a1ec  li 3, 425
  036a1f0  ori 30, 5, 0
  036a1f4  std 31, 184(1)
  036a1f8  std 27, 152(1)
  036a1fc  ori 29, 4, 0
  036a200  bl 0xefa28
  036a204  nop
  036a208  ori 31, 3, 0
  036a20c  cmpwi 31, 0
  036a210  bt 2, 0x36a490
  036a214  li 3, 255
  036a218  lwz 7, 120(31)
  036a21c  li 4, 1
  036a220  vspltisw 3, -1
  036a224  lis 5, 55
  036a228  lis 6, 114
  036a22c  addi 27, 5, -24144
  036a230  stb 3, 48(31)
  036a234  sth 3, 50(31)
  036a238  li 5, -3056
  036a23c  stb 4, 49(31)
  036a240  stb 4, 32(31)
  036a244  stw 28, 32(7)
  036a248  lvlx 2, 0, 27
  036a24c  vslw 3, 3, 3
  036a250  li 3, 16
  036a254  vspltw 2, 2, 0
  036a258  li 4, 0
  036a25c  lvlx 4, 5, 6
  036a260  lis 5, 16256
  036a264  vmaddfp 2, 4, 2, 3
  036a268  vctsxs 2, 2, 0
  036a26c  vspltw 2, 2, 0
  036a270  stvewx 2, 3, 7
  036a274  stw 4, 20(7)
  036a278  stw 5, 28(7)
  036a27c  lfs 1, 0(29)
  036a280  stfs 1, 16(31)
  036a284  lfs 1, 4(29)
  036a288  stfs 1, 20(31)
  036a28c  lfs 1, 8(29)
  036a290  stfs 1, 24(31)
  036a294  lfs 1, 12(29)
  036a298  stfs 1, 28(31)
  036a29c  lfs 1, 0(30)
  036a2a0  stfs 1, 0(7)
  036a2a4  lfs 1, 4(30)
  036a2a8  stfs 1, 4(7)
  036a2ac  lfs 1, 8(30)
  036a2b0  stfs 1, 8(7)
  036a2b4  lfs 1, 12(30)
  036a2b8  stfs 1, 12(7)
  036a2bc  lfs 1, 4(27)
  036a2c0  lfs 2, 8(27)
  036a2c4  bl 0xfcbe8
  036a2c8  nop
  036a2cc  lfs 2, 12(27)
  036a2d0  fmuls 1, 1, 2
  036a2d4  lis 5, 115
  036a2d8  addic 5, 5, 22784
  036a2dc  stfs 1, 64(31)
  036a2e0  lwz 3, 0(30)
  036a2e4  lwz 4, 4(30)
  036a2e8  lfs 1, 0(30)
  036a2ec  lfs 2, 4(30)
  036a2f0  fabs 5, 1
  036a2f4  fabs 6, 2
  036a2f8  rlwinm 4, 4, 3, 29, 29
  036a2fc  fsubs 1, 5, 6
  036a300  stfs 1, 112(1)
  036a304  lfs 1, 16(27)
  036a308  lwz 6, 112(1)
  036a30c  lfs 2, 112(1)
  036a310  rlwimi 4, 6, 2, 30, 30
  036a314  fsub 4, 2, 1
  036a318  fsub 7, 2, 1
  036a31c  rlwimi 4, 3, 4, 28, 28
  036a320  ori 3, 5, 0
  036a324  rlwimi 3, 4, 2, 26, 28
  036a328  slwi 4, 4, 2
  036a32c  clrldi 3, 3, 32
  036a330  fsel 4, 4, 5, 6
  036a334  lfsx 3, 5, 4
  036a338  fsel 5, 7, 6, 5
  036a33c  lfs 2, 4(3)
  036a340  fcmpu 0, 4, 1
  036a344  bt 1, 0x36a34c
  036a348  b 0x36a470
  036a34c  fsubs 6, 5, 4
  036a350  fadds 4, 5, 4
  036a354  addic 6, 1, 16
  036a358  li 3, 2
  036a35c  addic 5, 6, 100
  036a360  addic 4, 6, 116
  036a364  mtctr 3
  036a368  fdivs 4, 6, 4
  036a36c  fmuls 6, 4, 4
  036a370  stfs 4, 128(1)
  036a374  stfs 4, 120(1)
  036a378  stfs 4, 124(1)
  036a37c  stfs 4, 116(1)
  036a380  lfs 7, 128(1)
  036a384  lfs 8, 120(1)
  036a388  lfs 9, 124(1)
  036a38c  fmuls 4, 6, 6
  036a390  fmuls 8, 8, 6
  036a394  fmuls 7, 7, 4
  036a398  fmuls 5, 4, 4
  036a39c  fmuls 4, 9, 4
  036a3a0  stfs 8, 120(1)
  036a3a4  fmuls 6, 7, 6
  036a3a8  stfs 4, 124(1)
  036a3ac  stfs 6, 128(1)
  036a3b0  lfs 4, 100(6)
  036a3b4  fmuls 4, 4, 5
  036a3b8  stfs 4, 116(6)
  036a3bc  lfs 4, 4(5)
  036a3c0  addic 6, 6, 8
  036a3c4  addic 5, 5, 8
  036a3c8  fmuls 4, 4, 5
  036a3cc  stfs 4, 4(4)
  036a3d0  addic 4, 4, 8
  036a3d4  bdnz 0x36a3b0
  036a3d8  ori 7, 1, 0
  036a3dc  lis 6, 115
  036a3e0  li 8, 4
  036a3e4  addic 5, 7, 116
  036a3e8  addic 6, 6, 22752
  036a3ec  ori 4, 5, 0
  036a3f0  mtctr 8
  036a3f4  lfs 4, 116(7)
  036a3f8  lfs 5, 0(6)
  036a3fc  fmuls 4, 4, 5
  036a400  lfs 5, 4(6)
  036a404  addic 6, 6, 8
  036a408  stfs 4, 116(7)
  036a40c  lfs 4, 4(5)
  036a410  addic 7, 7, 8
  036a414  fmuls 4, 4, 5
  036a418  stfs 4, 4(5)
  036a41c  addic 5, 5, 8
  036a420  bdnz 0x36a3f4
  036a424  ori 5, 3, 0
  036a428  ori 3, 1, 0
  036a42c  mtctr 5
  036a430  lfs 4, 116(3)
  036a434  fadds 1, 1, 4
  036a438  addic 3, 3, 16
  036a43c  lfs 4, 4(4)
  036a440  lfs 5, 8(4)
  036a444  lfs 6, 12(4)
  036a448  addic 4, 4, 16
  036a44c  fadds 1, 1, 4
  036a450  fadds 1, 1, 5
  036a454  fadds 1, 1, 6
  036a458  bdnz 0x36a430
  036a45c  lis 3, 55
  036a460  addi 3, 3, -24144
  036a464  lfs 4, 20(3)
  036a468  fadds 1, 1, 4
  036a46c  fmadds 1, 1, 3, 2
  036a470  lis 3, 55
  036a474  addi 4, 3, -24144
  036a478  ori 3, 31, 0
  036a47c  lfs 2, 24(4)
  036a480  fadds 1, 1, 2
  036a484  stfs 1, 72(31)
  036a488  bl 0xf31a8
  036a48c  nop
  036a490  ori 3, 31, 0
  036a494  ld 0, 208(1)
  036a498  mtlr 0
  036a49c  ld 27, 152(1)
  036a4a0  ld 28, 160(1)
  036a4a4  ld 29, 168(1)
  036a4a8  ld 30, 176(1)
  036a4ac  ld 31, 184(1)
  036a4b0  addi 1, 1, 192
  036a4b4  blr

UpdateMoby_425:   # 0x36a528, 0x7f0 bytes
  036a528  stdu 1, -480(1)
  036a52c  mflr 0
  036a530  std 0, 496(1)
  036a534  stfd 14, 336(1)
  036a538  stfd 15, 344(1)
  036a53c  stfd 16, 352(1)
  036a540  stfd 17, 360(1)
  036a544  stfd 18, 368(1)
  036a548  stfd 19, 376(1)
  036a54c  stfd 20, 384(1)
  036a550  stfd 21, 392(1)
  036a554  stfd 22, 400(1)
  036a558  stfd 23, 408(1)
  036a55c  stfd 24, 416(1)
  036a560  stfd 25, 424(1)
  036a564  stfd 26, 432(1)
  036a568  stfd 27, 440(1)
  036a56c  stfd 28, 448(1)
  036a570  stfd 29, 456(1)
  036a574  stfd 30, 464(1)
  036a578  stfd 31, 472(1)
  036a57c  std 31, 328(1)
  036a580  lis 4, 55
  036a584  ori 31, 3, 0
  036a588  std 29, 312(1)
  036a58c  addi 4, 4, -23368
  036a590  addic 29, 31, 16
  036a594  li 5, 0
  036a598  ori 3, 29, 0
  036a59c  ori 6, 31, 0
  036a5a0  lfs 16, 0(4)
  036a5a4  std 30, 320(1)
  036a5a8  li 7, 0
  036a5ac  lwz 30, 120(31)
  036a5b0  std 28, 304(1)
  036a5b4  std 27, 296(1)
  036a5b8  fmr 1, 16
  036a5bc  bl 0x5e598
  036a5c0  nop
  036a5c4  cmpwi 3, 0
  036a5c8  bt 2, 0x36a600
  036a5cc  lis 3, 161
  036a5d0  addic 3, 3, 2368
  036a5d4  lwz 3, 24(3)
  036a5d8  cmpwi 3, 0
  036a5dc  bt 2, 0x36a600
  036a5e0  lwz 4, 32(30)
  036a5e4  cmpw 3, 4
  036a5e8  bf 2, 0x36a5f8
  036a5ec  lwz 3, 20(30)
  036a5f0  cmpwi 3, 0
  036a5f4  bt 2, 0x36a600
  036a5f8  li 3, 99
  036a5fc  stb 3, 32(31)
  036a600  lbz 3, 32(31)
  036a604  cmpwi 3, 1
  036a608  cmpwi 1, 3, 0
  036a60c  cmpwi 6, 3, 99
  036a610  bt 1, 0x36a61c
  036a614  bf 5, 0x36acac
  036a618  b 0x36a624
  036a61c  bt 26, 0x36a7d8
  036a620  b 0x36acac
  036a624  lfs 1, 16(31)
  036a628  lfs 2, 20(31)
  036a62c  stfs 1, 112(1)
  036a630  lfs 3, 24(31)
  036a634  stfs 2, 116(1)
  036a638  lfs 4, 28(31)
  036a63c  stfs 3, 120(1)
  036a640  stfs 4, 124(1)
  036a644  lfs 4, 0(30)
  036a648  lis 3, 55
  036a64c  fadds 1, 1, 4
  036a650  addi 8, 3, -23368
  036a654  lis 9, 114
  036a658  addic 3, 1, 112
  036a65c  addic 4, 1, 128
  036a660  li 5, 0
  036a664  ori 6, 31, 0
  036a668  li 7, 0
  036a66c  stfs 1, 16(31)
  036a670  lfs 1, 4(30)
  036a674  fadds 1, 2, 1
  036a678  stfs 1, 20(31)
  036a67c  lfs 1, 8(30)
  036a680  fadds 1, 3, 1
  036a684  stfs 1, 24(31)
  036a688  lfs 1, 4(8)
  036a68c  lfs 2, 8(30)
  036a690  lfs 3, -3048(9)
  036a694  fnmsubs 1, 3, 1, 2
  036a698  stfs 1, 8(30)
  036a69c  lfs 1, 16(31)
  036a6a0  lfs 2, 20(31)
  036a6a4  stfs 1, 128(1)
  036a6a8  lfs 1, 24(31)
  036a6ac  stfs 2, 132(1)
  036a6b0  lfs 2, 28(31)
  036a6b4  stfs 1, 136(1)
  036a6b8  stfs 2, 140(1)
  036a6bc  bl 0x57820
  036a6c0  nop
  036a6c4  cmpwi 3, 0
  036a6c8  bt 2, 0x36a7b8
  036a6cc  lwz 3, 32(30)
  036a6d0  cmpwi 3, 0
  036a6d4  bt 2, 0x36acac
  036a6d8  lis 4, 161
  036a6dc  ori 5, 3, 0
  036a6e0  addic 3, 4, 2368
  036a6e4  lwz 4, 24(3)
  036a6e8  cmpw 4, 5
  036a6ec  bt 2, 0x36acac
  036a6f0  ori 6, 3, 0
  036a6f4  li 4, 99
  036a6f8  addic 5, 6, 64
  036a6fc  ori 3, 30, 0
  036a700  stb 4, 32(31)
  036a704  lfs 1, 32(6)
  036a708  ori 4, 30, 0
  036a70c  stfs 1, 16(31)
  036a710  lfs 1, 36(6)
  036a714  stfs 1, 20(31)
  036a718  lfs 1, 40(6)
  036a71c  stfs 1, 24(31)
  036a720  lfs 1, 44(6)
  036a724  stfs 1, 28(31)
  036a728  bl 0x500608
  036a72c  nop
  036a730  lfs 1, 4(30)
  036a734  lfs 2, 0(30)
  036a738  fmuls 3, 1, 1
  036a73c  lfs 4, 8(30)
  036a740  lis 3, 55
  036a744  lis 4, 114
  036a748  addi 3, 3, -23368
  036a74c  fmadds 3, 2, 2, 3
  036a750  lfs 5, 8(3)
  036a754  lfs 6, -3052(4)
  036a758  fmuls 5, 6, 5
  036a75c  lfs 6, 12(3)
  036a760  fmadds 3, 4, 4, 3
  036a764  fsqrts 3, 3
  036a768  fdivs 5, 5, 3
  036a76c  fsub 7, 6, 3
  036a770  fsub 8, 6, 3
  036a774  fsub 9, 6, 3
  036a778  fsub 10, 3, 6
  036a77c  fsub 11, 3, 6
  036a780  fsub 3, 3, 6
  036a784  fmuls 2, 2, 5
  036a788  fmuls 1, 1, 5
  036a78c  fmuls 4, 4, 5
  036a790  fsel 5, 7, 6, 2
  036a794  fsel 7, 8, 6, 1
  036a798  fsel 6, 9, 6, 4
  036a79c  fsel 2, 10, 5, 2
  036a7a0  fsel 1, 11, 7, 1
  036a7a4  fsel 3, 3, 6, 4
  036a7a8  stfs 2, 0(30)
  036a7ac  stfs 1, 4(30)
  036a7b0  stfs 3, 8(30)
  036a7b4  b 0x36acac
  036a7b8  addic 3, 30, 16
  036a7bc  bl 0x4fff60
  036a7c0  nop
  036a7c4  cmpwi 3, 0
  036a7c8  bt 2, 0x36acac
  036a7cc  li 3, 99
  036a7d0  stb 3, 32(31)
  036a7d4  b 0x36acac
  036a7d8  lis 3, 55
  036a7dc  li 30, 0
  036a7e0  addi 28, 3, -23368
  036a7e4  lis 3, 114
  036a7e8  lis 8, 16256
  036a7ec  li 5, 9
  036a7f0  lfs 17, 12(28)
  036a7f4  stw 30, 236(1)
  036a7f8  lfs 1, 16(28)
  036a7fc  lfs 2, -3052(3)
  036a800  addic 7, 1, 176
  036a804  fmuls 1, 2, 1
  036a808  lis 3, 129
  036a80c  ori 6, 31, 0
  036a810  ori 4, 3, 1
  036a814  ori 3, 29, 0
  036a818  stfs 1, 224(1)
  036a81c  lfs 1, 20(28)
  036a820  fmuls 1, 2, 1
  036a824  stfs 1, 228(1)
  036a828  lfs 1, 24(28)
  036a82c  stw 31, 192(1)
  036a830  fmuls 1, 2, 1
  036a834  stw 4, 196(1)
  036a838  stfs 1, 232(1)
  036a83c  lfs 30, 28(28)
  036a840  stw 8, 204(1)
  036a844  stw 30, 188(1)
  036a848  fmr 1, 30
  036a84c  stw 30, 184(1)
  036a850  stw 30, 180(1)
  036a854  stw 30, 176(1)
  036a858  stw 30, 208(1)
  036a85c  bl 0x5e598
  036a860  nop
  036a864  li 3, 0
  036a868  li 4, 0
  036a86c  ori 5, 31, 0
  036a870  bl 0x15d12c
  036a874  nop
  036a878  lfs 1, 36(28)
  036a87c  lfs 2, 44(28)
  036a880  ori 29, 30, 0
  036a884  lfs 18, 32(28)
  036a888  lfs 19, 40(28)
  036a88c  lfs 3, 72(28)
  036a890  lfs 4, 76(28)
  036a894  lfs 20, 48(28)
  036a898  lfs 5, 84(28)
  036a89c  lfs 21, 52(28)
  036a8a0  lfs 22, 56(28)
  036a8a4  lfs 23, 60(28)
  036a8a8  lfs 24, 64(28)
  036a8ac  lfs 25, 68(28)
  036a8b0  stfd 1, 256(1)
  036a8b4  stfs 2, 252(1)
  036a8b8  lfs 26, 80(28)
  036a8bc  lfs 27, 88(28)
  036a8c0  stfs 3, 248(1)
  036a8c4  lfs 28, 92(28)
  036a8c8  stfs 4, 244(1)
  036a8cc  lfs 29, 96(28)
  036a8d0  lfs 14, 100(28)
  036a8d4  stfs 5, 240(1)
  036a8d8  lfs 15, 104(28)
  036a8dc  li 4, 0
  036a8e0  stfs 15, 264(1)
  036a8e4  lis 28, 114
  036a8e8  srawi 3, 29, 2
  036a8ec  stw 4, 160(1)
  036a8f0  addze 3, 3
  036a8f4  stw 4, 164(1)
  036a8f8  stw 4, 168(1)
  036a8fc  lfs 2, -3052(28)
  036a900  sldi 30, 3, 2
  036a904  stw 4, 172(1)
  036a908  fmuls 1, 2, 18
  036a90c  fmuls 2, 2, 16
  036a910  subc 30, 29, 30
  036a914  bl 0xfcbe8
  036a918  nop
  036a91c  lfs 2, -3052(28)
  036a920  stfs 1, 160(1)
  036a924  fmuls 1, 2, 18
  036a928  fmuls 2, 2, 16
  036a92c  bl 0xfcbe8
  036a930  nop
  036a934  sldi 3, 30, 2
  036a938  lfd 2, 256(1)
  036a93c  lfs 3, -3052(28)
  036a940  addc 3, 3, 1
  036a944  stfs 1, 164(1)
  036a948  clrldi 3, 3, 32
  036a94c  fmuls 1, 3, 2
  036a950  lfs 2, 224(3)
  036a954  bl 0xfcbe8
  036a958  nop
  036a95c  stfs 1, 168(1)
  036a960  fmr 2, 19
  036a964  fmr 1, 17
  036a968  bl 0xfcbe8
  036a96c  nop
  036a970  fmr 15, 1
  036a974  bl 0xfcc68
  036a978  nop
  036a97c  fmr 31, 1
  036a980  lfs 1, 252(1)
  036a984  cmpwi 30, 1
  036a988  fadds 1, 31, 1
  036a98c  fsubs 2, 20, 31
  036a990  fsubs 3, 21, 31
  036a994  fsubs 4, 20, 1
  036a998  fsub 5, 31, 2
  036a99c  fsubs 6, 21, 1
  036a9a0  fsub 7, 1, 4
  036a9a4  fsel 2, 5, 2, 31
  036a9a8  fsel 1, 7, 4, 1
  036a9ac  fsub 4, 3, 2
  036a9b0  fsub 5, 6, 1
  036a9b4  fsel 2, 4, 3, 2
  036a9b8  lfs 4, 16(31)
  036a9bc  lfs 7, 20(31)
  036a9c0  lfs 8, 24(31)
  036a9c4  lfs 9, 168(1)
  036a9c8  lfs 11, -3052(28)
  036a9cc  lfs 12, 248(1)
  036a9d0  fsel 1, 5, 6, 1
  036a9d4  fmuls 3, 2, 2
  036a9d8  fmuls 11, 11, 15
  036a9dc  fmuls 5, 1, 1
  036a9e0  fmuls 6, 3, 2
  036a9e4  fmuls 10, 5, 1
  036a9e8  fmadds 2, 6, 22, 2
  036a9ec  fmuls 6, 3, 6
  036a9f0  fmadds 1, 10, 22, 1
  036a9f4  fmuls 10, 5, 10
  036a9f8  fmadds 2, 6, 23, 2
  036a9fc  fmuls 6, 3, 6
  036aa00  fmadds 1, 10, 23, 1
  036aa04  fmuls 10, 5, 10
  036aa08  fmuls 3, 3, 6
  036aa0c  fmadds 2, 6, 24, 2
  036aa10  fnmsubs 6, 15, 12, 8
  036aa14  lfs 8, 244(1)
  036aa18  fmuls 5, 5, 10
  036aa1c  fmadds 1, 10, 24, 1
  036aa20  fmadds 2, 3, 25, 2
  036aa24  fnmsubs 3, 11, 8, 9
  036aa28  stfs 6, 152(1)
  036aa2c  fmadds 1, 5, 25, 1
  036aa30  fmadds 2, 2, 15, 7
  036aa34  stfs 3, 168(1)
  036aa38  fmadds 1, 1, 15, 4
  036aa3c  stfs 2, 148(1)
  036aa40  stfs 1, 144(1)
  036aa44  lfs 15, 264(1)
  036aa48  bt 1, 0x36aa60
  036aa4c  cmpwi 30, -1
  036aa50  bf 1, 0x36ac90
  036aa54  cmpwi 30, 0
  036aa58  bf 1, 0x36aa74
  036aa5c  b 0x36ac90
  036aa60  cmpwi 30, 2
  036aa64  bf 1, 0x36aaf0
  036aa68  cmpwi 30, 3
  036aa6c  bf 1, 0x36ab88
  036aa70  b 0x36ac90
  036aa74  fmr 1, 26
  036aa78  lfs 2, 240(1)
  036aa7c  bl 0xfcbe8
  036aa80  nop
  036aa84  lis 3, 114
  036aa88  fmr 31, 1
  036aa8c  lfs 1, -3056(3)
  036aa90  fmuls 2, 1, 27
  036aa94  fmuls 1, 1, 28
  036aa98  fctiwz 2, 2
  036aa9c  fctiwz 1, 1
  036aaa0  stfd 2, 272(1)
  036aaa4  lwz 3, 276(1)
  036aaa8  stfd 1, 272(1)
  036aaac  lwz 4, 276(1)
  036aab0  extsw 3, 3
  036aab4  extsw 4, 4
  036aab8  bl 0xfe484
  036aabc  nop
  036aac0  lis 5, 7952
  036aac4  lis 6, 16
  036aac8  fmr 1, 31
  036aacc  ori 8, 3, 0
  036aad0  li 9, 0
  036aad4  addic 3, 1, 144
  036aad8  addic 4, 1, 160
  036aadc  ori 5, 5, 6176
  036aae0  ori 6, 6, 4112
  036aae4  bl 0x125350
  036aae8  nop
  036aaec  b 0x36ac90
  036aaf0  li 3, 100
  036aaf4  bl 0xfc620
  036aaf8  nop
  036aafc  lis 4, 114
  036ab00  li 5, 40
  036ab04  lis 6, 24568
  036ab08  subc 3, 3, 5
  036ab0c  ori 6, 6, 63736
  036ab10  lfs 1, -3056(4)
  036ab14  lis 4, 12104
  036ab18  fmuls 2, 1, 14
  036ab1c  fmuls 1, 1, 15
  036ab20  ori 4, 4, 24696
  036ab24  sradi 3, 3, 63
  036ab28  subc 5, 6, 4
  036ab2c  and 3, 3, 5
  036ab30  addc 30, 4, 3
  036ab34  fctiwz 2, 2
  036ab38  fctiwz 1, 1
  036ab3c  stfd 2, 272(1)
  036ab40  lwz 3, 276(1)
  036ab44  stfd 1, 272(1)
  036ab48  lwz 4, 276(1)
  036ab4c  extsw 3, 3
  036ab50  extsw 4, 4
  036ab54  bl 0xfe484
  036ab58  nop
  036ab5c  lis 6, 3840
  036ab60  fmr 1, 29
  036ab64  ori 8, 3, 0
  036ab68  li 9, 2
  036ab6c  addic 3, 1, 144
  036ab70  addic 4, 1, 160
  036ab74  ori 5, 30, 0
  036ab78  ori 6, 6, 32
  036ab7c  bl 0x125350
  036ab80  nop
  036ab84  b 0x36ac90
  036ab88  stfs 15, 264(1)
  036ab8c  fmr 1, 19
  036ab90  fmr 2, 30
  036ab94  bl 0xfcbe8
  036ab98  nop
  036ab9c  lis 4, 32536
  036aba0  lis 3, 32512
  036aba4  ori 4, 4, 8240
  036aba8  bl 0x106738
  036abac  nop
  036abb0  ori 30, 3, 0
  036abb4  fmr 1, 16
  036abb8  fmr 2, 30
  036abbc  bl 0xfcbe8
  036abc0  nop
  036abc4  lis 4, 95
  036abc8  li 3, 0
  036abcc  ori 4, 4, 24415
  036abd0  bl 0x106738
  036abd4  nop
  036abd8  fmr 1, 17
  036abdc  ori 28, 3, 0
  036abe0  fmr 2, 30
  036abe4  bl 0xfcbe8
  036abe8  nop
  036abec  lis 3, 114
  036abf0  lfs 2, -3052(3)
  036abf4  fmuls 15, 1, 2
  036abf8  bl 0xfcc68
  036abfc  nop
  036ac00  fmr 3, 1
  036ac04  addic 27, 1, 160
  036ac08  fmr 1, 15
  036ac0c  fmr 2, 31
  036ac10  ori 3, 27, 0
  036ac14  bl 0xfe610
  036ac18  nop
  036ac1c  fmr 1, 29
  036ac20  fmr 2, 26
  036ac24  bl 0xfcbe8
  036ac28  nop
  036ac2c  lis 3, 114
  036ac30  fmr 31, 1
  036ac34  lfs 1, -3056(3)
  036ac38  fmuls 2, 1, 27
  036ac3c  fmuls 1, 1, 28
  036ac40  fctiwz 2, 2
  036ac44  fctiwz 1, 1
  036ac48  stfd 2, 272(1)
  036ac4c  lwz 3, 276(1)
  036ac50  stfd 1, 272(1)
  036ac54  extsw 3, 3
  036ac58  lwz 4, 276(1)
  036ac5c  extsw 4, 4
  036ac60  bl 0xfe484
  036ac64  nop
  036ac68  ori 8, 3, 0
  036ac6c  li 9, 3
  036ac70  fmr 1, 31
  036ac74  addic 3, 1, 144
  036ac78  ori 4, 27, 0
  036ac7c  ori 5, 30, 0
  036ac80  ori 6, 28, 0
  036ac84  bl 0x125350
  036ac88  nop
  036ac8c  lfs 15, 264(1)
  036ac90  addic 29, 29, 1
  036ac94  cmpwi 29, 50
  036ac98  bt 0, 0x36a8dc
  036ac9c  ori 3, 31, 0
  036aca0  bl 0xefb38
  036aca4  nop
  036aca8  b 0x36acac
  036acac  ld 0, 496(1)
  036acb0  mtlr 0
  036acb4  lfd 14, 336(1)
  036acb8  lfd 15, 344(1)
  036acbc  lfd 16, 352(1)
  036acc0  lfd 17, 360(1)
  036acc4  lfd 18, 368(1)
  036acc8  lfd 19, 376(1)
  036accc  lfd 20, 384(1)
  036acd0  lfd 21, 392(1)
  036acd4  lfd 22, 400(1)
  036acd8  lfd 23, 408(1)
  036acdc  lfd 24, 416(1)
  036ace0  lfd 25, 424(1)
  036ace4  lfd 26, 432(1)
  036ace8  lfd 27, 440(1)
  036acec  lfd 28, 448(1)
  036acf0  lfd 29, 456(1)
  036acf4  lfd 30, 464(1)
  036acf8  lfd 31, 472(1)
  036acfc  ld 27, 296(1)
  036ad00  ld 28, 304(1)
  036ad04  ld 29, 312(1)
  036ad08  ld 30, 320(1)
  036ad0c  ld 31, 328(1)
  036ad10  addi 1, 1, 480
  036ad14  blr
