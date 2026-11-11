# game/update/moby739.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M739_0043a0f0:   # 0x43a0f0, 0x14 bytes
  043a0f0  lis 3, 134
  043a0f4  lis 4, 1
  043a0f8  addic 3, 3, -23680
  043a0fc  stw 4, 72(3)
  043a100  blr

UpdateMoby_739:   # 0x43a188, 0x232c bytes
  043a188  stdu 1, -592(1)
  043a18c  mflr 0
  043a190  std 0, 608(1)
  043a194  stfd 26, 544(1)
  043a198  stfd 27, 552(1)
  043a19c  stfd 28, 560(1)
  043a1a0  stfd 29, 568(1)
  043a1a4  stfd 30, 576(1)
  043a1a8  stfd 31, 584(1)
  043a1ac  std 31, 536(1)
  043a1b0  ori 31, 3, 0
  043a1b4  std 28, 512(1)
  043a1b8  addic 3, 1, 112
  043a1bc  addic 28, 31, 16
  043a1c0  std 30, 528(1)
  043a1c4  ori 4, 28, 0
  043a1c8  std 29, 520(1)
  043a1cc  std 27, 504(1)
  043a1d0  std 26, 496(1)
  043a1d4  std 25, 488(1)
  043a1d8  lwz 30, 120(31)
  043a1dc  bl 0x5e7e98
  043a1e0  nop
  043a1e4  lwz 3, 24(30)
  043a1e8  cmpwi 3, 0
  043a1ec  bt 2, 0x43a200
  043a1f0  li 3, 240
  043a1f4  bl 0x5e7e18
  043a1f8  nop
  043a1fc  sth 3, 500(30)
  043a200  li 4, 0
  043a204  addic 3, 30, 488
  043a208  stw 4, 24(30)
  043a20c  bl 0x4fffb4
  043a210  nop
  043a214  addic 3, 30, 500
  043a218  bl 0x4fffb4
  043a21c  nop
  043a220  lis 4, 68
  043a224  cmpwi 3, 0
  043a228  addi 4, 4, -24312
  043a22c  lfs 31, 0(4)
  043a230  bt 2, 0x43a240
  043a234  lis 3, 68
  043a238  addi 3, 3, -24312
  043a23c  lfs 31, 4(3)
  043a240  lis 3, 68
  043a244  li 6, 0
  043a248  stfs 31, 476(30)
  043a24c  addi 7, 3, -24312
  043a250  ori 3, 31, 0
  043a254  lis 4, 51
  043a258  li 5, 0
  043a25c  lfs 31, 8(7)
  043a260  stw 6, 452(1)
  043a264  bl 0x10675c
  043a268  nop
  043a26c  ori 29, 3, 0
  043a270  ori 3, 31, 0
  043a274  ori 4, 29, 0
  043a278  addic 7, 1, 448
  043a27c  li 6, 0
  043a280  addic 8, 1, 452
  043a284  li 10, 4
  043a288  ori 5, 30, 0
  043a28c  li 9, 0
  043a290  bl 0x106840
  043a294  nop
  043a298  addic 3, 30, 6
  043a29c  bl 0x4fffb4
  043a2a0  nop
  043a2a4  lhz 4, 6(30)
  043a2a8  li 3, 45
  043a2ac  extsh 27, 4
  043a2b0  bl 0x5e7e18
  043a2b4  nop
  043a2b8  cmpw 27, 3
  043a2bc  bf 0, 0x43a4c8
  043a2c0  cmpwi 29, 0
  043a2c4  bt 2, 0x43a4c8
  043a2c8  lbz 3, 32(31)
  043a2cc  cmpwi 3, 99
  043a2d0  bt 2, 0x43a4c8
  043a2d4  lwz 3, 32(29)
  043a2d8  lhz 3, 166(3)
  043a2dc  cmpwi 3, 176
  043a2e0  cmpwi 1, 3, 177
  043a2e4  bt 2, 0x43a2ec
  043a2e8  bf 6, 0x43a300
  043a2ec  lhz 3, 6(30)
  043a2f0  cmpwi 3, 0
  043a2f4  bt 2, 0x43a300
  043a2f8  li 3, 0
  043a2fc  stw 3, 44(29)
  043a300  lbz 3, 33(31)
  043a304  cmpwi 3, 255
  043a308  bt 2, 0x43a318
  043a30c  li 4, 1
  043a310  bl 0x104298
  043a314  nop
  043a318  lwz 3, 44(29)
  043a31c  lfs 1, 44(29)
  043a320  cmpwi 3, 0
  043a324  bt 2, 0x43a4c8
  043a328  lfs 2, 0(30)
  043a32c  lis 3, 15363
  043a330  fsubs 1, 2, 1
  043a334  lis 4, 14851
  043a338  ori 3, 3, 4719
  043a33c  ori 4, 4, 4719
  043a340  lis 5, 134
  043a344  lis 6, 114
  043a348  stw 3, 272(30)
  043a34c  stw 4, 276(30)
  043a350  li 7, 9
  043a354  lis 3, 134
  043a358  li 4, 0
  043a35c  fcmpu 0, 1, 31
  043a360  stfs 1, 0(30)
  043a364  lfs 2, -23568(5)
  043a368  lfs 3, -3052(6)
  043a36c  stw 7, 292(30)
  043a370  fmuls 2, 2, 3
  043a374  stfs 2, 280(30)
  043a378  lfs 1, -23572(3)
  043a37c  stb 4, 317(30)
  043a380  fmuls 1, 1, 3
  043a384  stfs 1, 284(30)
  043a388  bt 1, 0x43a440
  043a38c  li 3, 0
  043a390  lhz 6, 52(31)
  043a394  lis 4, 68
  043a398  lis 5, 114
  043a39c  addi 4, 4, -24312
  043a3a0  rlwimi 6, 3, 0, 19, 19
  043a3a4  lis 3, 151
  043a3a8  lfs 1, -3052(5)
  043a3ac  sth 6, 52(31)
  043a3b0  addic 3, 3, -25376
  043a3b4  lfs 2, 12(4)
  043a3b8  addic 29, 30, 256
  043a3bc  fmuls 2, 1, 2
  043a3c0  stfs 2, 280(30)
  043a3c4  lfs 2, 16(4)
  043a3c8  fmuls 1, 1, 2
  043a3cc  stfs 1, 284(30)
  043a3d0  lfs 1, 16(31)
  043a3d4  lfs 2, 128(3)
  043a3d8  lfs 3, 20(31)
  043a3dc  lfs 4, 132(3)
  043a3e0  fsubs 1, 1, 2
  043a3e4  fsubs 2, 3, 4
  043a3e8  bl 0x5e8338
  043a3ec  nop
  043a3f0  ori 3, 31, 0
  043a3f4  ori 4, 29, 0
  043a3f8  li 6, 6
  043a3fc  li 7, 1
  043a400  li 8, 0
  043a404  bl 0x10ad80
  043a408  nop
  043a40c  lis 3, 16688
  043a410  lis 5, 16784
  043a414  li 6, 99
  043a418  li 7, 120
  043a41c  stw 3, 336(30)
  043a420  addic 4, 30, 240
  043a424  stw 5, 340(30)
  043a428  ori 3, 31, 0
  043a42c  stb 6, 32(31)
  043a430  stb 7, 247(30)
  043a434  bl 0x10c808
  043a438  nop
  043a43c  b 0x43a4c8
  043a440  lis 3, 151
  043a444  lfs 1, 16(31)
  043a448  addic 29, 30, 256
  043a44c  addic 3, 3, -25376
  043a450  lfs 2, 20(31)
  043a454  lfs 3, 128(3)
  043a458  lfs 4, 132(3)
  043a45c  fsubs 1, 1, 3
  043a460  fsubs 2, 2, 4
  043a464  bl 0x5e8338
  043a468  nop
  043a46c  ori 3, 31, 0
  043a470  ori 4, 29, 0
  043a474  li 6, 7
  043a478  li 7, 1
  043a47c  li 8, 0
  043a480  bl 0x10ad80
  043a484  nop
  043a488  lis 3, 16544
  043a48c  lis 5, 16672
  043a490  li 6, 6
  043a494  li 4, 250
  043a498  stw 3, 336(30)
  043a49c  li 3, 60
  043a4a0  stw 5, 340(30)
  043a4a4  stb 6, 32(31)
  043a4a8  stb 4, 247(30)
  043a4ac  bl 0x5e7e18
  043a4b0  nop
  043a4b4  sth 3, 6(30)
  043a4b8  addic 4, 30, 240
  043a4bc  ori 3, 31, 0
  043a4c0  bl 0x10c808
  043a4c4  nop
  043a4c8  li 4, 255
  043a4cc  lbz 3, 32(31)
  043a4d0  cmpwi 3, 9
  043a4d4  stb 4, 164(31)
  043a4d8  cmpwi 1, 3, 3
  043a4dc  cmpwi 6, 3, 0
  043a4e0  cmpwi 7, 3, -1
  043a4e4  bt 1, 0x43a53c
  043a4e8  bt 5, 0x43a50c
  043a4ec  bt 25, 0x43a4f8
  043a4f0  bf 29, 0x43c460
  043a4f4  b 0x43a594
  043a4f8  cmpwi 3, 1
  043a4fc  bf 1, 0x43ab94
  043a500  cmpwi 3, 2
  043a504  bf 1, 0x43b17c
  043a508  b 0x43b470
  043a50c  cmpwi 3, 6
  043a510  bt 1, 0x43a528
  043a514  cmpwi 3, 4
  043a518  bf 1, 0x43b7b0
  043a51c  cmpwi 3, 5
  043a520  bf 1, 0x43ba2c
  043a524  b 0x43bd14
  043a528  cmpwi 3, 7
  043a52c  bf 1, 0x43bda0
  043a530  cmpwi 3, 8
  043a534  bf 1, 0x43adec
  043a538  b 0x43bdc8
  043a53c  cmpwi 3, 14
  043a540  bt 1, 0x43a56c
  043a544  cmpwi 3, 11
  043a548  bt 1, 0x43a558
  043a54c  cmpwi 3, 10
  043a550  bf 1, 0x43aee0
  043a554  b 0x43b084
  043a558  cmpwi 3, 12
  043a55c  bf 1, 0x43beac
  043a560  cmpwi 3, 13
  043a564  bf 1, 0x43c168
  043a568  b 0x43a688
  043a56c  cmpwi 3, 17
  043a570  bt 1, 0x43a588
  043a574  cmpwi 3, 15
  043a578  bf 1, 0x43a8cc
  043a57c  cmpwi 3, 16
  043a580  bf 1, 0x43aadc
  043a584  b 0x43a9c8
  043a588  cmpwi 3, 99
  043a58c  bt 2, 0x43be40
  043a590  b 0x43c460
  043a594  addic 3, 30, 432
  043a598  ori 4, 28, 0
  043a59c  bl 0x5e7e98
  043a5a0  nop
  043a5a4  lhz 3, 490(30)
  043a5a8  cmpwi 3, 0
  043a5ac  bt 2, 0x43a5bc
  043a5b0  li 3, 1
  043a5b4  stb 3, 32(31)
  043a5b8  b 0x43a5dc
  043a5bc  lis 3, 68
  043a5c0  lfs 1, 24(31)
  043a5c4  addi 3, 3, -24312
  043a5c8  lfs 2, 20(3)
  043a5cc  li 3, 14
  043a5d0  fadds 1, 1, 2
  043a5d4  stb 3, 32(31)
  043a5d8  stfs 1, 24(31)
  043a5dc  lis 4, 16256
  043a5e0  li 5, 1
  043a5e4  li 6, 0
  043a5e8  addic 3, 30, 352
  043a5ec  stw 4, 0(30)
  043a5f0  sth 5, 4(30)
  043a5f4  sth 6, 500(30)
  043a5f8  sth 6, 488(30)
  043a5fc  bl 0x100f8c
  043a600  nop
  043a604  lis 3, 16384
  043a608  lfs 1, 484(30)
  043a60c  lis 4, 114
  043a610  li 5, 909
  043a614  stw 3, 364(30)
  043a618  stw 3, 360(30)
  043a61c  lfs 2, -3052(4)
  043a620  stw 5, 352(30)
  043a624  fmuls 1, 1, 2
  043a628  stfs 1, 388(30)
  043a62c  bl 0x5c8318
  043a630  nop
  043a634  clrlwi 3, 3, 31
  043a638  cmpwi 3, 0
  043a63c  bt 2, 0x43a654
  043a640  lis 3, 0
  043a644  lhz 4, 52(31)
  043a648  ori 3, 3, 32768
  043a64c  or 3, 4, 3
  043a650  sth 3, 52(31)
  043a654  lis 3, 134
  043a658  addic 3, 3, -23556
  043a65c  stw 3, 176(30)
  043a660  lbz 3, 83(31)
  043a664  cmpwi 3, 2
  043a668  bt 2, 0x43c460
  043a66c  ori 3, 31, 0
  043a670  li 4, 2
  043a674  li 5, 0
  043a678  li 6, 0
  043a67c  bl 0xfddc0
  043a680  nop
  043a684  b 0x43c460
  043a688  lis 29, 151
  043a68c  addic 27, 1, 128
  043a690  addic 29, 29, -25376
  043a694  ori 3, 27, 0
  043a698  ori 5, 28, 0
  043a69c  addic 4, 29, 128
  043a6a0  bl 0x5e81f0
  043a6a4  nop
  043a6a8  ori 3, 27, 0
  043a6ac  bl 0x5e8030
  043a6b0  nop
  043a6b4  lis 3, 68
  043a6b8  lfs 2, 476(30)
  043a6bc  addi 3, 3, -24312
  043a6c0  lfs 3, 24(3)
  043a6c4  fadds 2, 2, 3
  043a6c8  fcmpu 0, 1, 2
  043a6cc  cror 6, 1, 2
  043a6d0  bt 6, 0x43a74c
  043a6d4  lfs 1, 24(31)
  043a6d8  lis 3, 68
  043a6dc  lfs 2, 136(29)
  043a6e0  addi 3, 3, -24312
  043a6e4  fsubs 1, 1, 2
  043a6e8  lfs 2, 12(3)
  043a6ec  fabs 1, 1
  043a6f0  fcmpu 0, 1, 2
  043a6f4  cror 6, 1, 2
  043a6f8  bt 6, 0x43a74c
  043a6fc  li 3, 19
  043a700  bl 0xfc620
  043a704  nop
  043a708  cmpwi 3, 0
  043a70c  bf 2, 0x43a74c
  043a710  li 3, 17
  043a714  lbz 4, 83(31)
  043a718  cmpwi 4, 2
  043a71c  stb 3, 32(31)
  043a720  bt 2, 0x43c460
  043a724  li 3, 3
  043a728  bl 0x5e7e18
  043a72c  nop
  043a730  ori 6, 3, 0
  043a734  ori 3, 31, 0
  043a738  li 4, 2
  043a73c  li 5, 0
  043a740  bl 0xfddc0
  043a744  nop
  043a748  b 0x43c460
  043a74c  lbz 3, 188(31)
  043a750  cmpwi 3, 1
  043a754  bf 2, 0x43a820
  043a758  li 3, 19
  043a75c  bl 0xfc620
  043a760  nop
  043a764  cmpwi 3, 0
  043a768  bf 2, 0x43a820
  043a76c  li 3, 256
  043a770  bl 0xfc620
  043a774  nop
  043a778  clrlwi 3, 3, 31
  043a77c  lfs 1, 472(30)
  043a780  cmpwi 3, 0
  043a784  bt 2, 0x43a790
  043a788  fneg 1, 1
  043a78c  stfs 1, 472(30)
  043a790  lis 3, 68
  043a794  addi 3, 3, -24312
  043a798  lfs 2, 28(3)
  043a79c  fmuls 1, 1, 2
  043a7a0  stfs 1, 468(30)
  043a7a4  lfs 1, 32(3)
  043a7a8  lfs 2, 36(3)
  043a7ac  bl 0xfcbe8
  043a7b0  nop
  043a7b4  fctiwz 1, 1
  043a7b8  stfd 1, 464(1)
  043a7bc  lwz 3, 468(1)
  043a7c0  extsw 3, 3
  043a7c4  bl 0x5e7e18
  043a7c8  nop
  043a7cc  li 4, 17
  043a7d0  stw 3, 496(30)
  043a7d4  addic 3, 30, 32
  043a7d8  stb 4, 32(31)
  043a7dc  bl 0x5e7e70
  043a7e0  nop
  043a7e4  lbz 3, 83(31)
  043a7e8  cmpwi 3, 2
  043a7ec  bt 2, 0x43a814
  043a7f0  li 3, 3
  043a7f4  bl 0x5e7e18
  043a7f8  nop
  043a7fc  ori 6, 3, 0
  043a800  ori 3, 31, 0
  043a804  li 4, 2
  043a808  li 5, 0
  043a80c  bl 0xfddc0
  043a810  nop
  043a814  li 3, 0
  043a818  stb 3, 188(31)
  043a81c  b 0x43c460
  043a820  addic 3, 30, 492
  043a824  bl 0x4fff60
  043a828  nop
  043a82c  cmpwi 3, 0
  043a830  bt 2, 0x43c460
  043a834  li 3, 120
  043a838  bl 0x5e7e18
  043a83c  nop
  043a840  fmr 1, 31
  043a844  lis 4, 68
  043a848  stw 3, 492(30)
  043a84c  addi 29, 4, -24312
  043a850  lfs 2, 40(29)
  043a854  bl 0xfcbe8
  043a858  nop
  043a85c  fmr 31, 1
  043a860  bl 0xfcc68
  043a864  nop
  043a868  fmr 30, 1
  043a86c  bl 0x5e8078
  043a870  nop
  043a874  fmuls 2, 1, 31
  043a878  fmr 1, 30
  043a87c  stfs 2, 144(1)
  043a880  bl 0x5e8128
  043a884  nop
  043a888  fmuls 1, 1, 31
  043a88c  li 3, 0
  043a890  stw 3, 152(1)
  043a894  stfs 1, 148(1)
  043a898  lfs 1, 44(29)
  043a89c  lfs 2, 48(29)
  043a8a0  bl 0xfcbe8
  043a8a4  nop
  043a8a8  addic 3, 30, 448
  043a8ac  stfs 1, 152(1)
  043a8b0  addic 4, 1, 144
  043a8b4  addic 5, 30, 432
  043a8b8  bl 0x5e7f54
  043a8bc  nop
  043a8c0  li 3, 15
  043a8c4  stb 3, 32(31)
  043a8c8  b 0x43c460
  043a8cc  lfs 1, 448(30)
  043a8d0  lfs 2, 16(31)
  043a8d4  lfs 3, 452(30)
  043a8d8  lfs 4, 20(31)
  043a8dc  fsubs 1, 1, 2
  043a8e0  fsubs 2, 3, 4
  043a8e4  bl 0x5e8338
  043a8e8  nop
  043a8ec  lis 3, 68
  043a8f0  addic 5, 30, 464
  043a8f4  addi 27, 3, -24312
  043a8f8  ori 3, 31, 0
  043a8fc  lfs 2, 52(27)
  043a900  lfs 3, 56(27)
  043a904  lfs 4, 60(27)
  043a908  bl 0xff2e8
  043a90c  nop
  043a910  addic 29, 30, 32
  043a914  addic 4, 30, 448
  043a918  ori 3, 29, 0
  043a91c  ori 5, 28, 0
  043a920  bl 0x5e81f0
  043a924  nop
  043a928  lis 4, 114
  043a92c  lfs 1, 24(27)
  043a930  ori 3, 29, 0
  043a934  lfs 2, -3052(4)
  043a938  fmuls 1, 2, 1
  043a93c  bl 0x110488
  043a940  nop
  043a944  addic 27, 1, 160
  043a948  ori 4, 29, 0
  043a94c  ori 3, 27, 0
  043a950  ori 5, 28, 0
  043a954  bl 0x5e7f54
  043a958  nop
  043a95c  ori 3, 27, 0
  043a960  li 4, 400
  043a964  li 5, 0
  043a968  ori 6, 31, 0
  043a96c  li 7, 0
  043a970  bl 0x55ac0
  043a974  nop
  043a978  cmpwi 3, 0
  043a97c  bt 2, 0x43a998
  043a980  ori 3, 29, 0
  043a984  bl 0x5e7e70
  043a988  nop
  043a98c  li 3, 14
  043a990  stb 3, 32(31)
  043a994  b 0x43a9a8
  043a998  addic 4, 1, 160
  043a99c  ori 3, 28, 0
  043a9a0  bl 0x5e7e98
  043a9a4  nop
  043a9a8  ori 3, 29, 0
  043a9ac  bl 0x5e8030
  043a9b0  nop
  043a9b4  fcmpu 0, 1, 31
  043a9b8  bf 2, 0x43c460
  043a9bc  li 3, 14
  043a9c0  stb 3, 32(31)
  043a9c4  b 0x43c460
  043a9c8  lis 3, 68
  043a9cc  li 4, 0
  043a9d0  addi 29, 3, -24312
  043a9d4  ori 3, 28, 0
  043a9d8  lfs 1, 64(29)
  043a9dc  bl 0xffb70
  043a9e0  nop
  043a9e4  lis 4, 114
  043a9e8  lfs 2, 68(29)
  043a9ec  lis 5, 114
  043a9f0  lfs 3, 72(29)
  043a9f4  fmr 31, 1
  043a9f8  addic 3, 30, 40
  043a9fc  lfs 1, -3052(4)
  043aa00  lfs 4, -3048(5)
  043aa04  fmuls 1, 1, 2
  043aa08  fmuls 2, 4, 3
  043aa0c  bl 0x109af0
  043aa10  nop
  043aa14  lfs 1, 24(31)
  043aa18  lfs 2, 40(30)
  043aa1c  fadds 1, 1, 2
  043aa20  fcmpu 0, 1, 31
  043aa24  stfs 1, 24(31)
  043aa28  bt 1, 0x43c460
  043aa2c  li 3, 256
  043aa30  stfs 31, 24(31)
  043aa34  bl 0xfc620
  043aa38  nop
  043aa3c  clrlwi 3, 3, 31
  043aa40  lfs 31, 472(30)
  043aa44  cmpwi 3, 0
  043aa48  bt 2, 0x43aa54
  043aa4c  fneg 31, 31
  043aa50  stfs 31, 472(30)
  043aa54  lis 3, 68
  043aa58  addi 3, 3, -24312
  043aa5c  lfs 1, 28(3)
  043aa60  fmuls 1, 31, 1
  043aa64  stfs 1, 468(30)
  043aa68  lfs 1, 32(3)
  043aa6c  lfs 2, 36(3)
  043aa70  bl 0xfcbe8
  043aa74  nop
  043aa78  fctiwz 1, 1
  043aa7c  stfd 1, 464(1)
  043aa80  lwz 3, 468(1)
  043aa84  extsw 3, 3
  043aa88  bl 0x5e7e18
  043aa8c  nop
  043aa90  li 4, 3
  043aa94  stw 3, 496(30)
  043aa98  addic 3, 30, 32
  043aa9c  stb 4, 32(31)
  043aaa0  bl 0x5e7e70
  043aaa4  nop
  043aaa8  lbz 3, 83(31)
  043aaac  cmpwi 3, 0
  043aab0  bt 2, 0x43c460
  043aab4  li 3, 3
  043aab8  bl 0x5e7e18
  043aabc  nop
  043aac0  ori 6, 3, 0
  043aac4  ori 3, 31, 0
  043aac8  li 4, 0
  043aacc  li 5, 0
  043aad0  bl 0xfddc0
  043aad4  nop
  043aad8  b 0x43c460
  043aadc  lis 3, 68
  043aae0  li 4, 0
  043aae4  addi 29, 3, -24312
  043aae8  ori 3, 28, 0
  043aaec  lfs 1, 64(29)
  043aaf0  bl 0xffb70
  043aaf4  nop
  043aaf8  lis 4, 114
  043aafc  lis 5, 114
  043ab00  lfs 2, 12(29)
  043ab04  lfs 3, 72(29)
  043ab08  fmr 31, 1
  043ab0c  addic 3, 30, 40
  043ab10  lfs 1, -3052(4)
  043ab14  lfs 4, -3048(5)
  043ab18  fmuls 1, 1, 2
  043ab1c  fmuls 2, 4, 3
  043ab20  bl 0x109af0
  043ab24  nop
  043ab28  lfs 1, 24(31)
  043ab2c  lfs 2, 40(30)
  043ab30  fadds 2, 1, 2
  043ab34  stfs 2, 24(31)
  043ab38  lfs 1, 20(29)
  043ab3c  fadds 1, 31, 1
  043ab40  fcmpu 0, 2, 1
  043ab44  bt 0, 0x43c460
  043ab48  li 4, 14
  043ab4c  stfs 1, 24(31)
  043ab50  addic 3, 30, 32
  043ab54  stb 4, 32(31)
  043ab58  bl 0x5e7e70
  043ab5c  nop
  043ab60  lbz 3, 83(31)
  043ab64  cmpwi 3, 2
  043ab68  bt 2, 0x43c460
  043ab6c  li 3, 3
  043ab70  bl 0x5e7e18
  043ab74  nop
  043ab78  ori 6, 3, 0
  043ab7c  ori 3, 31, 0
  043ab80  li 4, 2
  043ab84  li 5, 0
  043ab88  bl 0xfddc0
  043ab8c  nop
  043ab90  b 0x43c460
  043ab94  lis 29, 151
  043ab98  ori 5, 28, 0
  043ab9c  addic 28, 1, 176
  043aba0  addic 29, 29, -25376
  043aba4  ori 3, 28, 0
  043aba8  addic 4, 29, 128
  043abac  bl 0x5e81f0
  043abb0  nop
  043abb4  ori 3, 28, 0
  043abb8  bl 0x5e8030
  043abbc  nop
  043abc0  lis 3, 68
  043abc4  lfs 2, 476(30)
  043abc8  addi 3, 3, -24312
  043abcc  lfs 3, 24(3)
  043abd0  fadds 2, 2, 3
  043abd4  fcmpu 0, 1, 2
  043abd8  cror 6, 1, 2
  043abdc  bt 6, 0x43ac70
  043abe0  lfs 1, 24(31)
  043abe4  lfs 2, 136(29)
  043abe8  lis 3, 68
  043abec  fsubs 1, 1, 2
  043abf0  addi 3, 3, -24312
  043abf4  lfs 2, 12(3)
  043abf8  fabs 1, 1
  043abfc  fcmpu 0, 1, 2
  043ac00  cror 6, 1, 2
  043ac04  bt 6, 0x43ac70
  043ac08  li 3, 19
  043ac0c  bl 0xfc620
  043ac10  nop
  043ac14  cmpwi 3, 0
  043ac18  bf 2, 0x43ac70
  043ac1c  li 3, 2
  043ac20  lbz 4, 83(31)
  043ac24  cmpwi 4, 5
  043ac28  stb 3, 32(31)
  043ac2c  bt 2, 0x43c460
  043ac30  lis 3, 68
  043ac34  lis 4, 114
  043ac38  addi 3, 3, -24312
  043ac3c  li 5, 0
  043ac40  lfs 1, 76(3)
  043ac44  lfs 2, -3056(4)
  043ac48  ori 3, 31, 0
  043ac4c  li 4, 5
  043ac50  fmuls 1, 2, 1
  043ac54  fctiwz 1, 1
  043ac58  stfd 1, 464(1)
  043ac5c  lwz 6, 468(1)
  043ac60  extsw 6, 6
  043ac64  bl 0xfddc0
  043ac68  nop
  043ac6c  b 0x43c460
  043ac70  lbz 3, 188(31)
  043ac74  cmpwi 3, 1
  043ac78  bf 2, 0x43ad60
  043ac7c  li 3, 19
  043ac80  bl 0xfc620
  043ac84  nop
  043ac88  cmpwi 3, 0
  043ac8c  bf 2, 0x43ad60
  043ac90  li 3, 256
  043ac94  bl 0xfc620
  043ac98  nop
  043ac9c  clrlwi 3, 3, 31
  043aca0  lfs 1, 472(30)
  043aca4  cmpwi 3, 0
  043aca8  bt 2, 0x43acb4
  043acac  fneg 1, 1
  043acb0  stfs 1, 472(30)
  043acb4  lis 3, 68
  043acb8  addi 29, 3, -24312
  043acbc  lfs 2, 28(29)
  043acc0  fmuls 1, 1, 2
  043acc4  stfs 1, 468(30)
  043acc8  lfs 1, 32(29)
  043accc  lfs 2, 36(29)
  043acd0  bl 0xfcbe8
  043acd4  nop
  043acd8  fctidz 1, 1
  043acdc  lfs 2, 64(29)
  043ace0  lis 3, 114
  043ace4  li 4, 3
  043ace8  lfs 3, -3056(3)
  043acec  li 3, 496
  043acf0  fcfid 1, 1
  043acf4  frsp 1, 1
  043acf8  fadds 1, 1, 2
  043acfc  fmuls 1, 3, 1
  043ad00  fctiwz 1, 1
  043ad04  stfiwx 1, 3, 30
  043ad08  lbz 3, 83(31)
  043ad0c  stb 4, 32(31)
  043ad10  cmpwi 3, 0
  043ad14  bt 2, 0x43ad54
  043ad18  lis 3, 68
  043ad1c  lis 4, 114
  043ad20  addi 3, 3, -24312
  043ad24  li 5, 0
  043ad28  lfs 1, 76(3)
  043ad2c  lfs 2, -3056(4)
  043ad30  ori 3, 31, 0
  043ad34  li 4, 0
  043ad38  fmuls 1, 2, 1
  043ad3c  fctiwz 1, 1
  043ad40  stfd 1, 464(1)
  043ad44  lwz 6, 468(1)
  043ad48  extsw 6, 6
  043ad4c  bl 0xfddc0
  043ad50  nop
  043ad54  li 3, 0
  043ad58  stb 3, 188(31)
  043ad5c  b 0x43c460
  043ad60  addic 3, 1, 176
  043ad64  bl 0x5e8030
  043ad68  nop
  043ad6c  lis 3, 68
  043ad70  lfs 2, 476(30)
  043ad74  addi 3, 3, -24312
  043ad78  lfs 3, 20(3)
  043ad7c  fadds 2, 2, 3
  043ad80  fcmpu 0, 1, 2
  043ad84  cror 6, 0, 2
  043ad88  bt 6, 0x43c460
  043ad8c  lhz 3, 490(30)
  043ad90  cmpwi 3, 0
  043ad94  bf 2, 0x43c460
  043ad98  li 3, 16
  043ad9c  lbz 4, 83(31)
  043ada0  cmpwi 4, 2
  043ada4  stb 3, 32(31)
  043ada8  bt 2, 0x43c460
  043adac  lis 3, 68
  043adb0  lis 4, 114
  043adb4  addi 3, 3, -24312
  043adb8  li 5, 0
  043adbc  lfs 1, 76(3)
  043adc0  lfs 2, -3056(4)
  043adc4  ori 3, 31, 0
  043adc8  fmuls 1, 2, 1
  043adcc  li 4, 2
  043add0  fctiwz 1, 1
  043add4  stfd 1, 464(1)
  043add8  lwz 6, 468(1)
  043addc  extsw 6, 6
  043ade0  bl 0xfddc0
  043ade4  nop
  043ade8  b 0x43c460
  043adec  lis 29, 151
  043adf0  ori 5, 28, 0
  043adf4  addic 28, 1, 192
  043adf8  addic 29, 29, -25376
  043adfc  ori 3, 28, 0
  043ae00  addic 4, 29, 128
  043ae04  bl 0x5e81f0
  043ae08  nop
  043ae0c  ori 3, 28, 0
  043ae10  bl 0x5e8030
  043ae14  nop
  043ae18  lis 3, 68
  043ae1c  lfs 2, 476(30)
  043ae20  addi 3, 3, -24312
  043ae24  lfs 3, 24(3)
  043ae28  fsubs 2, 2, 3
  043ae2c  fcmpu 0, 1, 2
  043ae30  cror 6, 1, 2
  043ae34  bt 6, 0x43c460
  043ae38  lfs 1, 24(31)
  043ae3c  lfs 2, 136(29)
  043ae40  lis 3, 68
  043ae44  fsubs 1, 1, 2
  043ae48  addi 3, 3, -24312
  043ae4c  lfs 2, 12(3)
  043ae50  fabs 1, 1
  043ae54  fcmpu 0, 1, 2
  043ae58  cror 6, 1, 2
  043ae5c  bt 6, 0x43c460
  043ae60  li 3, 19
  043ae64  bl 0xfc620
  043ae68  nop
  043ae6c  cmpwi 3, 0
  043ae70  bf 2, 0x43c460
  043ae74  lis 3, 68
  043ae78  lfs 1, 24(31)
  043ae7c  addi 3, 3, -24312
  043ae80  lfs 2, 80(3)
  043ae84  li 3, 2
  043ae88  lbz 4, 83(31)
  043ae8c  fadds 1, 1, 2
  043ae90  cmpwi 4, 5
  043ae94  stb 3, 32(31)
  043ae98  stfs 1, 24(31)
  043ae9c  bt 2, 0x43c460
  043aea0  lis 3, 68
  043aea4  lis 4, 114
  043aea8  addi 3, 3, -24312
  043aeac  li 5, 0
  043aeb0  lfs 1, 76(3)
  043aeb4  lfs 2, -3056(4)
  043aeb8  ori 3, 31, 0
  043aebc  li 4, 5
  043aec0  fmuls 1, 2, 1
  043aec4  fctiwz 1, 1
  043aec8  stfd 1, 464(1)
  043aecc  lwz 6, 468(1)
  043aed0  extsw 6, 6
  043aed4  bl 0xfddc0
  043aed8  nop
  043aedc  b 0x43c460
  043aee0  lfs 1, 432(30)
  043aee4  lfs 2, 16(31)
  043aee8  lfs 3, 436(30)
  043aeec  lfs 4, 20(31)
  043aef0  fsubs 1, 1, 2
  043aef4  fsubs 2, 3, 4
  043aef8  bl 0x5e8338
  043aefc  nop
  043af00  lis 3, 68
  043af04  addic 5, 30, 464
  043af08  addi 4, 3, -24312
  043af0c  ori 3, 31, 0
  043af10  lfs 2, 52(4)
  043af14  lfs 3, 56(4)
  043af18  lfs 4, 60(4)
  043af1c  bl 0xff2e8
  043af20  nop
  043af24  lis 27, 151
  043af28  addic 26, 1, 208
  043af2c  addic 27, 27, -25376
  043af30  addic 29, 30, 432
  043af34  ori 3, 26, 0
  043af38  addic 4, 27, 128
  043af3c  ori 5, 29, 0
  043af40  bl 0x5e81f0
  043af44  nop
  043af48  ori 3, 26, 0
  043af4c  bl 0x5e8030
  043af50  nop
  043af54  lfs 2, 476(30)
  043af58  fcmpu 0, 1, 2
  043af5c  cror 6, 1, 2
  043af60  bt 6, 0x43af88
  043af64  lfs 1, 440(30)
  043af68  lis 3, 68
  043af6c  lfs 2, 136(27)
  043af70  addi 3, 3, -24312
  043af74  fsubs 1, 1, 2
  043af78  lfs 2, 12(3)
  043af7c  fabs 1, 1
  043af80  fcmpu 0, 1, 2
  043af84  bt 0, 0x43af94
  043af88  lbz 3, 188(31)
  043af8c  cmpwi 3, 2
  043af90  bf 2, 0x43c460
  043af94  lbz 3, 33(31)
  043af98  cmpwi 3, 255
  043af9c  bt 2, 0x43afac
  043afa0  li 4, 2
  043afa4  bl 0x104298
  043afa8  nop
  043afac  lbz 3, 83(31)
  043afb0  cmpwi 3, 7
  043afb4  bt 2, 0x43aff4
  043afb8  lis 3, 68
  043afbc  lis 4, 114
  043afc0  addi 3, 3, -24312
  043afc4  li 5, 0
  043afc8  lfs 1, 76(3)
  043afcc  lfs 2, -3056(4)
  043afd0  ori 3, 31, 0
  043afd4  li 4, 7
  043afd8  fmuls 1, 2, 1
  043afdc  fctiwz 1, 1
  043afe0  stfd 1, 464(1)
  043afe4  lwz 6, 468(1)
  043afe8  extsw 6, 6
  043afec  bl 0xfddc0
  043aff0  nop
  043aff4  lis 3, 134
  043aff8  li 27, 0
  043affc  lis 4, 134
  043b000  lis 5, 114
  043b004  addic 7, 1, 456
  043b008  lfs 2, -23560(3)
  043b00c  stw 27, 276(30)
  043b010  ori 3, 28, 0
  043b014  stfs 2, 272(30)
  043b018  lfs 1, -23564(4)
  043b01c  lfs 3, -3052(5)
  043b020  fneg 2, 2
  043b024  ori 4, 29, 0
  043b028  fmuls 1, 1, 3
  043b02c  stfs 1, 280(30)
  043b030  bl 0x108180
  043b034  nop
  043b038  li 5, 13
  043b03c  stfs 1, 284(30)
  043b040  ori 3, 31, 0
  043b044  stb 27, 317(30)
  043b048  addic 4, 30, 256
  043b04c  lfs 1, 72(31)
  043b050  li 6, 7
  043b054  stw 5, 292(30)
  043b058  li 7, 1
  043b05c  li 8, 0
  043b060  bl 0x10ad80
  043b064  nop
  043b068  lis 3, 16544
  043b06c  lis 4, 16672
  043b070  li 5, 11
  043b074  stw 3, 336(30)
  043b078  stw 4, 340(30)
  043b07c  stb 5, 32(31)
  043b080  b 0x43c460
  043b084  ori 3, 31, 0
  043b088  addic 4, 30, 256
  043b08c  bl 0x10b030
  043b090  nop
  043b094  clrlwi 3, 3, 31
  043b098  cmpwi 3, 0
  043b09c  bt 2, 0x43b160
  043b0a0  li 4, 3
  043b0a4  li 3, 256
  043b0a8  stb 4, 32(31)
  043b0ac  bl 0xfc620
  043b0b0  nop
  043b0b4  clrlwi 3, 3, 31
  043b0b8  lfs 1, 472(30)
  043b0bc  cmpwi 3, 0
  043b0c0  bt 2, 0x43b0cc
  043b0c4  fneg 1, 1
  043b0c8  stfs 1, 472(30)
  043b0cc  lis 3, 68
  043b0d0  addi 29, 3, -24312
  043b0d4  lfs 2, 28(29)
  043b0d8  fmuls 1, 1, 2
  043b0dc  stfs 1, 468(30)
  043b0e0  lfs 1, 32(29)
  043b0e4  lfs 2, 36(29)
  043b0e8  bl 0xfcbe8
  043b0ec  nop
  043b0f0  fctidz 3, 1
  043b0f4  lfs 2, 64(29)
  043b0f8  lis 3, 114
  043b0fc  lfs 1, -3056(3)
  043b100  li 3, 496
  043b104  fcfid 3, 3
  043b108  frsp 3, 3
  043b10c  fadds 2, 3, 2
  043b110  fmuls 2, 1, 2
  043b114  fctiwz 2, 2
  043b118  stfiwx 2, 3, 30
  043b11c  lbz 3, 83(31)
  043b120  cmpwi 3, 0
  043b124  bt 2, 0x43c470
  043b128  lis 3, 68
  043b12c  addi 3, 3, -24312
  043b130  li 4, 0
  043b134  li 5, 8
  043b138  lfs 2, 76(3)
  043b13c  ori 3, 31, 0
  043b140  fmuls 1, 1, 2
  043b144  fctiwz 1, 1
  043b148  stfd 1, 464(1)
  043b14c  lwz 6, 468(1)
  043b150  extsw 6, 6
  043b154  bl 0xfddc0
  043b158  nop
  043b15c  b 0x43c470
  043b160  lwz 3, 24(31)
  043b164  cmpwi 3, 0
  043b168  bf 0, 0x43c460
  043b16c  ori 3, 31, 0
  043b170  bl 0xefb38
  043b174  nop
  043b178  b 0x43c470
  043b17c  lis 29, 151
  043b180  lfs 1, 16(31)
  043b184  addic 29, 29, -25376
  043b188  lfs 2, 20(31)
  043b18c  lfs 3, 128(29)
  043b190  lfs 4, 132(29)
  043b194  fsubs 1, 3, 1
  043b198  fsubs 2, 4, 2
  043b19c  bl 0x5e8338
  043b1a0  nop
  043b1a4  lis 3, 68
  043b1a8  addic 5, 30, 464
  043b1ac  addi 4, 3, -24312
  043b1b0  ori 3, 31, 0
  043b1b4  lfs 2, 84(4)
  043b1b8  lfs 3, 56(4)
  043b1bc  lfs 4, 88(4)
  043b1c0  bl 0xff2e8
  043b1c4  nop
  043b1c8  addic 27, 1, 224
  043b1cc  addic 4, 29, 128
  043b1d0  ori 3, 27, 0
  043b1d4  ori 5, 28, 0
  043b1d8  bl 0x5e81f0
  043b1dc  nop
  043b1e0  ori 3, 27, 0
  043b1e4  bl 0x5e8030
  043b1e8  nop
  043b1ec  lfs 2, 476(30)
  043b1f0  fcmpu 0, 1, 2
  043b1f4  cror 6, 1, 2
  043b1f8  bt 6, 0x43b320
  043b1fc  lfs 1, 24(31)
  043b200  lfs 2, 136(29)
  043b204  lis 3, 68
  043b208  fsubs 1, 1, 2
  043b20c  addi 3, 3, -24312
  043b210  lfs 2, 12(3)
  043b214  fabs 1, 1
  043b218  fcmpu 0, 1, 2
  043b21c  cror 6, 1, 2
  043b220  bt 6, 0x43b320
  043b224  li 3, 19
  043b228  bl 0xfc620
  043b22c  nop
  043b230  cmpwi 3, 0
  043b234  bf 2, 0x43b320
  043b238  lbz 3, 33(31)
  043b23c  cmpwi 3, 255
  043b240  bt 2, 0x43b250
  043b244  li 4, 1
  043b248  bl 0x104298
  043b24c  nop
  043b250  li 3, 256
  043b254  bl 0xfc620
  043b258  nop
  043b25c  clrlwi 3, 3, 31
  043b260  lfs 1, 472(30)
  043b264  cmpwi 3, 0
  043b268  bt 2, 0x43b274
  043b26c  fneg 1, 1
  043b270  stfs 1, 472(30)
  043b274  lis 3, 68
  043b278  addi 29, 3, -24312
  043b27c  lfs 2, 28(29)
  043b280  fmuls 1, 1, 2
  043b284  stfs 1, 468(30)
  043b288  lfs 1, 32(29)
  043b28c  lfs 2, 36(29)
  043b290  bl 0xfcbe8
  043b294  nop
  043b298  fctidz 1, 1
  043b29c  lfs 2, 64(29)
  043b2a0  lis 3, 114
  043b2a4  li 4, 3
  043b2a8  lfs 3, -3056(3)
  043b2ac  li 3, 496
  043b2b0  fcfid 1, 1
  043b2b4  frsp 1, 1
  043b2b8  fadds 1, 1, 2
  043b2bc  fmuls 1, 3, 1
  043b2c0  fctiwz 1, 1
  043b2c4  stfiwx 1, 3, 30
  043b2c8  lbz 3, 83(31)
  043b2cc  stb 4, 32(31)
  043b2d0  cmpwi 3, 0
  043b2d4  bt 2, 0x43b314
  043b2d8  lis 3, 68
  043b2dc  lis 4, 114
  043b2e0  addi 3, 3, -24312
  043b2e4  li 5, 0
  043b2e8  lfs 1, 76(3)
  043b2ec  lfs 2, -3056(4)
  043b2f0  ori 3, 31, 0
  043b2f4  fmuls 1, 2, 1
  043b2f8  li 4, 0
  043b2fc  fctiwz 1, 1
  043b300  stfd 1, 464(1)
  043b304  lwz 6, 468(1)
  043b308  extsw 6, 6
  043b30c  bl 0xfddc0
  043b310  nop
  043b314  li 3, 0
  043b318  stb 3, 188(31)
  043b31c  b 0x43b40c
  043b320  lbz 3, 188(31)
  043b324  cmpwi 3, 1
  043b328  bf 2, 0x43b40c
  043b32c  li 3, 19
  043b330  bl 0xfc620
  043b334  nop
  043b338  cmpwi 3, 0
  043b33c  bf 2, 0x43b40c
  043b340  li 3, 256
  043b344  bl 0xfc620
  043b348  nop
  043b34c  clrlwi 3, 3, 31
  043b350  lfs 1, 472(30)
  043b354  cmpwi 3, 0
  043b358  bt 2, 0x43b364
  043b35c  fneg 1, 1
  043b360  stfs 1, 472(30)
  043b364  lis 3, 68
  043b368  addi 29, 3, -24312
  043b36c  lfs 2, 28(29)
  043b370  fmuls 1, 1, 2
  043b374  stfs 1, 468(30)
  043b378  lfs 1, 32(29)
  043b37c  lfs 2, 36(29)
  043b380  bl 0xfcbe8
  043b384  nop
  043b388  fctidz 1, 1
  043b38c  lfs 2, 64(29)
  043b390  lis 3, 114
  043b394  li 4, 3
  043b398  lfs 3, -3056(3)
  043b39c  li 3, 496
  043b3a0  fcfid 1, 1
  043b3a4  frsp 1, 1
  043b3a8  fadds 1, 1, 2
  043b3ac  fmuls 1, 3, 1
  043b3b0  fctiwz 1, 1
  043b3b4  stfiwx 1, 3, 30
  043b3b8  lbz 3, 83(31)
  043b3bc  stb 4, 32(31)
  043b3c0  cmpwi 3, 0
  043b3c4  bt 2, 0x43b404
  043b3c8  lis 3, 68
  043b3cc  lis 4, 114
  043b3d0  addi 3, 3, -24312
  043b3d4  li 5, 0
  043b3d8  lfs 1, 76(3)
  043b3dc  lfs 2, -3056(4)
  043b3e0  ori 3, 31, 0
  043b3e4  fmuls 1, 2, 1
  043b3e8  li 4, 0
  043b3ec  fctiwz 1, 1
  043b3f0  stfd 1, 464(1)
  043b3f4  lwz 6, 468(1)
  043b3f8  extsw 6, 6
  043b3fc  bl 0xfddc0
  043b400  nop
  043b404  li 3, 0
  043b408  stb 3, 188(31)
  043b40c  lbz 3, 83(31)
  043b410  cmpwi 3, 5
  043b414  cmpwi 1, 3, 2
  043b418  bf 2, 0x43c460
  043b41c  lbz 3, 112(31)
  043b420  rlwinm 3, 3, 0, 30, 30
  043b424  cmpwi 3, 0
  043b428  bt 2, 0x43c460
  043b42c  bt 6, 0x43c460
  043b430  lis 3, 68
  043b434  lis 4, 114
  043b438  addi 3, 3, -24312
  043b43c  li 5, 0
  043b440  lfs 1, 76(3)
  043b444  lfs 2, -3056(4)
  043b448  ori 3, 31, 0
  043b44c  fmuls 1, 2, 1
  043b450  li 4, 2
  043b454  fctiwz 1, 1
  043b458  stfd 1, 464(1)
  043b45c  lwz 6, 468(1)
  043b460  extsw 6, 6
  043b464  bl 0xfddc0
  043b468  nop
  043b46c  b 0x43c460
  043b470  lis 26, 151
  043b474  lfs 1, 24(31)
  043b478  ori 3, 28, 0
  043b47c  addic 26, 26, -25376
  043b480  addic 27, 26, 128
  043b484  lwz 4, 8320(26)
  043b488  lfs 2, 24(4)
  043b48c  ori 4, 27, 0
  043b490  fsubs 1, 1, 2
  043b494  fabs 31, 1
  043b498  bl 0x5e8588
  043b49c  nop
  043b4a0  lwz 3, 508(30)
  043b4a4  fdivs 31, 31, 1
  043b4a8  cmpwi 3, -1
  043b4ac  bt 2, 0x43b4e4
  043b4b0  lis 4, 165
  043b4b4  slwi 3, 3, 2
  043b4b8  addic 4, 4, 7136
  043b4bc  extsw 7, 3
  043b4c0  addic 6, 1, 256
  043b4c4  ori 3, 31, 0
  043b4c8  ori 5, 27, 0
  043b4cc  lwzx 4, 4, 7
  043b4d0  bl 0x1385d0
  043b4d4  nop
  043b4d8  lfs 30, 256(1)
  043b4dc  lfs 1, 260(1)
  043b4e0  b 0x43b504
  043b4e4  lfs 30, 128(26)
  043b4e8  lfs 1, 132(26)
  043b4ec  stfs 30, 256(1)
  043b4f0  lfs 2, 136(26)
  043b4f4  stfs 1, 260(1)
  043b4f8  lfs 3, 140(26)
  043b4fc  stfs 2, 264(1)
  043b500  stfs 3, 268(1)
  043b504  lfs 2, 16(31)
  043b508  fsubs 3, 30, 2
  043b50c  lfs 2, 20(31)
  043b510  fsubs 2, 1, 2
  043b514  fmr 1, 3
  043b518  bl 0x5e8338
  043b51c  nop
  043b520  lis 3, 68
  043b524  lfs 2, 468(30)
  043b528  addic 5, 30, 464
  043b52c  addi 29, 3, -24312
  043b530  fadds 1, 1, 2
  043b534  ori 3, 31, 0
  043b538  lfs 2, 52(29)
  043b53c  lfs 3, 56(29)
  043b540  lfs 4, 60(29)
  043b544  bl 0xff2e8
  043b548  nop
  043b54c  lfs 1, 72(31)
  043b550  bl 0x5e8078
  043b554  nop
  043b558  lfs 30, 92(29)
  043b55c  lfs 2, 72(31)
  043b560  fmuls 3, 1, 30
  043b564  fmr 1, 2
  043b568  stfs 3, 240(1)
  043b56c  bl 0x5e8128
  043b570  nop
  043b574  fmuls 1, 1, 30
  043b578  li 5, 0
  043b57c  ori 3, 31, 0
  043b580  addic 4, 30, 352
  043b584  addic 6, 1, 256
  043b588  stw 5, 248(1)
  043b58c  addic 5, 1, 240
  043b590  stfs 1, 244(1)
  043b594  lfs 30, 80(29)
  043b598  fmr 1, 30
  043b59c  bl 0x101058
  043b5a0  nop
  043b5a4  ori 29, 3, 0
  043b5a8  addic 3, 30, 496
  043b5ac  bl 0x4fff60
  043b5b0  nop
  043b5b4  cmpwi 3, 0
  043b5b8  bt 2, 0x43b60c
  043b5bc  lis 3, 68
  043b5c0  addi 25, 3, -24312
  043b5c4  lfs 1, 32(25)
  043b5c8  lfs 2, 36(25)
  043b5cc  bl 0xfcbe8
  043b5d0  nop
  043b5d4  fctidz 1, 1
  043b5d8  lfs 2, 64(25)
  043b5dc  lis 3, 114
  043b5e0  lfs 3, -3056(3)
  043b5e4  lfs 4, 468(30)
  043b5e8  li 3, 496
  043b5ec  fcfid 1, 1
  043b5f0  fneg 4, 4
  043b5f4  frsp 1, 1
  043b5f8  stfs 4, 468(30)
  043b5fc  fadds 1, 1, 2
  043b600  fmuls 1, 3, 1
  043b604  fctiwz 1, 1
  043b608  stfiwx 1, 3, 30
  043b60c  addic 3, 1, 272
  043b610  ori 4, 27, 0
  043b614  addic 5, 30, 432
  043b618  bl 0x5e81f0
  043b61c  nop
  043b620  ori 3, 28, 0
  043b624  ori 4, 27, 0
  043b628  bl 0x5e8588
  043b62c  nop
  043b630  fmr 3, 1
  043b634  lis 3, 68
  043b638  lfs 1, 112(1)
  043b63c  addi 3, 3, -24312
  043b640  lfs 2, 116(1)
  043b644  lfs 4, 96(3)
  043b648  lbz 28, 83(31)
  043b64c  fcmpu 0, 3, 4
  043b650  cror 6, 1, 2
  043b654  bt 6, 0x43b6b4
  043b658  rlwinm 3, 29, 0, 30, 30
  043b65c  cmpwi 3, 0
  043b660  bf 2, 0x43b6b4
  043b664  li 3, 4
  043b668  cmpwi 28, 1
  043b66c  stb 3, 32(31)
  043b670  bt 2, 0x43b7a4
  043b674  lis 3, 68
  043b678  lis 4, 114
  043b67c  addi 3, 3, -24312
  043b680  li 5, 0
  043b684  lfs 1, 76(3)
  043b688  lfs 2, -3056(4)
  043b68c  ori 3, 31, 0
  043b690  li 4, 1
  043b694  fmuls 1, 2, 1
  043b698  fctiwz 1, 1
  043b69c  stfd 1, 464(1)
  043b6a0  lwz 6, 468(1)
  043b6a4  extsw 6, 6
  043b6a8  bl 0xfddc0
  043b6ac  nop
  043b6b0  b 0x43b7a4
  043b6b4  fcmpu 0, 31, 30
  043b6b8  bt 1, 0x43b6c8
  043b6bc  rlwinm 3, 29, 0, 30, 30
  043b6c0  cmpwi 3, 0
  043b6c4  bt 2, 0x43b720
  043b6c8  li 3, 12
  043b6cc  stfs 1, 16(31)
  043b6d0  cmpwi 28, 5
  043b6d4  stfs 2, 20(31)
  043b6d8  stb 3, 32(31)
  043b6dc  bt 2, 0x43b7a4
  043b6e0  lis 3, 68
  043b6e4  lis 4, 114
  043b6e8  addi 3, 3, -24312
  043b6ec  li 5, 0
  043b6f0  lfs 1, 76(3)
  043b6f4  lfs 2, -3056(4)
  043b6f8  ori 3, 31, 0
  043b6fc  fmuls 1, 2, 1
  043b700  li 4, 5
  043b704  fctiwz 1, 1
  043b708  stfd 1, 464(1)
  043b70c  lwz 6, 468(1)
  043b710  extsw 6, 6
  043b714  bl 0xfddc0
  043b718  nop
  043b71c  b 0x43b7a4
  043b720  addic 3, 1, 272
  043b724  bl 0x5e8030
  043b728  nop
  043b72c  lis 3, 68
  043b730  lfs 2, 476(30)
  043b734  addi 3, 3, -24312
  043b738  lfs 3, 24(3)
  043b73c  fadds 2, 2, 3
  043b740  fcmpu 0, 1, 2
  043b744  cror 6, 1, 2
  043b748  bt 6, 0x43b790
  043b74c  lfs 1, 24(31)
  043b750  lfs 2, 136(26)
  043b754  lis 3, 68
  043b758  fsubs 1, 1, 2
  043b75c  addi 3, 3, -24312
  043b760  lfs 2, 12(3)
  043b764  fabs 1, 1
  043b768  fcmpu 0, 1, 2
  043b76c  cror 6, 1, 2
  043b770  bt 6, 0x43b790
  043b774  lbz 3, 33(31)
  043b778  cmpwi 3, 255
  043b77c  bt 2, 0x43b7a4
  043b780  li 4, 1
  043b784  bl 0x104298
  043b788  nop
  043b78c  b 0x43b7a4
  043b790  lbz 3, 188(31)
  043b794  cmpwi 3, 1
  043b798  bt 2, 0x43b7a4
  043b79c  li 3, 5
  043b7a0  stb 3, 32(31)
  043b7a4  li 3, 0
  043b7a8  stb 3, 188(31)
  043b7ac  b 0x43c460
  043b7b0  lis 29, 151
  043b7b4  lfs 1, 16(31)
  043b7b8  lfs 2, 20(31)
  043b7bc  addic 29, 29, -25376
  043b7c0  lfs 3, 128(29)
  043b7c4  lfs 4, 132(29)
  043b7c8  fsubs 1, 3, 1
  043b7cc  fsubs 2, 4, 2
  043b7d0  bl 0x5e8338
  043b7d4  nop
  043b7d8  lis 3, 68
  043b7dc  addic 5, 30, 464
  043b7e0  addi 4, 3, -24312
  043b7e4  ori 3, 31, 0
  043b7e8  lfs 31, 60(4)
  043b7ec  lfs 2, 52(4)
  043b7f0  lfs 3, 56(4)
  043b7f4  fmr 4, 31
  043b7f8  bl 0xff2e8
  043b7fc  nop
  043b800  lbz 3, 82(31)
  043b804  lbz 4, 83(31)
  043b808  cmpw 3, 4
  043b80c  bf 2, 0x43b948
  043b810  ori 3, 31, 0
  043b814  bl 0xefe40
  043b818  nop
  043b81c  lis 3, 68
  043b820  addi 3, 3, -24312
  043b824  lfs 2, 100(3)
  043b828  fcmpu 0, 1, 2
  043b82c  bf 2, 0x43b948
  043b830  lfs 1, 24(31)
  043b834  lis 3, 68
  043b838  lfs 2, 136(29)
  043b83c  addi 3, 3, -24312
  043b840  fsubs 1, 1, 2
  043b844  lfs 2, 64(3)
  043b848  fabs 1, 1
  043b84c  fcmpu 0, 1, 2
  043b850  cror 6, 1, 2
  043b854  bt 6, 0x43b948
  043b858  ori 3, 28, 0
  043b85c  addic 4, 29, 128
  043b860  bl 0x5e8588
  043b864  nop
  043b868  lis 3, 68
  043b86c  addi 3, 3, -24312
  043b870  lfs 2, 92(3)
  043b874  fcmpu 0, 1, 2
  043b878  cror 6, 1, 2
  043b87c  bt 6, 0x43b948
  043b880  lfs 1, 128(29)
  043b884  lfs 2, 16(31)
  043b888  lfs 3, 132(29)
  043b88c  lfs 4, 20(31)
  043b890  fsubs 1, 1, 2
  043b894  fsubs 2, 3, 4
  043b898  bl 0x5e8338
  043b89c  nop
  043b8a0  lfs 2, 72(31)
  043b8a4  bl 0x5026a0
  043b8a8  nop
  043b8ac  lis 3, 68
  043b8b0  addi 3, 3, -24312
  043b8b4  lfs 2, 104(3)
  043b8b8  fcmpu 0, 1, 2
  043b8bc  cror 6, 1, 2
  043b8c0  bt 6, 0x43b948
  043b8c4  lfs 1, 72(31)
  043b8c8  bl 0x5e8078
  043b8cc  nop
  043b8d0  fmuls 2, 1, 31
  043b8d4  lfs 1, 72(31)
  043b8d8  stfs 2, 288(1)
  043b8dc  bl 0x5e8128
  043b8e0  nop
  043b8e4  fmuls 1, 1, 31
  043b8e8  li 4, 0
  043b8ec  lwz 3, 8320(29)
  043b8f0  lis 5, 68
  043b8f4  addic 7, 1, 304
  043b8f8  addi 6, 5, -24312
  043b8fc  stw 4, 296(1)
  043b900  addic 8, 1, 288
  043b904  ori 4, 31, 0
  043b908  li 5, 1
  043b90c  stfs 1, 292(1)
  043b910  lfs 1, 16(3)
  043b914  stfs 1, 304(1)
  043b918  lfs 1, 20(3)
  043b91c  stfs 1, 308(1)
  043b920  lfs 1, 24(3)
  043b924  stfs 1, 312(1)
  043b928  lfs 2, 28(3)
  043b92c  stfs 2, 316(1)
  043b930  lfs 2, 108(6)
  043b934  fadds 1, 1, 2
  043b938  stfs 1, 312(1)
  043b93c  lfs 1, 80(6)
  043b940  bl 0x105c08
  043b944  nop
  043b948  lbz 3, 112(31)
  043b94c  rlwinm 3, 3, 0, 30, 30
  043b950  cmpwi 3, 0
  043b954  bt 2, 0x43b9d0
  043b958  ori 3, 28, 0
  043b95c  addic 4, 29, 128
  043b960  bl 0x5e8588
  043b964  nop
  043b968  lis 3, 68
  043b96c  addi 3, 3, -24312
  043b970  lfs 2, 96(3)
  043b974  fcmpu 0, 1, 2
  043b978  cror 6, 0, 2
  043b97c  bt 6, 0x43b9d0
  043b980  li 3, 3
  043b984  lbz 4, 83(31)
  043b988  cmpwi 4, 0
  043b98c  stb 3, 32(31)
  043b990  bt 2, 0x43b9d0
  043b994  lis 3, 68
  043b998  lis 4, 114
  043b99c  addi 3, 3, -24312
  043b9a0  li 5, 0
  043b9a4  lfs 1, 76(3)
  043b9a8  lfs 2, -3056(4)
  043b9ac  ori 3, 31, 0
  043b9b0  li 4, 0
  043b9b4  fmuls 1, 2, 1
  043b9b8  fctiwz 1, 1
  043b9bc  stfd 1, 464(1)
  043b9c0  lwz 6, 468(1)
  043b9c4  extsw 6, 6
  043b9c8  bl 0xfddc0
  043b9cc  nop
  043b9d0  lis 3, 68
  043b9d4  li 4, 0
  043b9d8  addi 29, 3, -24312
  043b9dc  ori 3, 28, 0
  043b9e0  lfs 1, 64(29)
  043b9e4  bl 0xffb70
  043b9e8  nop
  043b9ec  lis 3, 114
  043b9f0  lfs 2, 112(29)
  043b9f4  lfs 3, 376(30)
  043b9f8  lfs 4, -3048(3)
  043b9fc  fnmsubs 2, 4, 2, 3
  043ba00  stfs 2, 376(30)
  043ba04  lfs 3, 24(31)
  043ba08  fadds 2, 3, 2
  043ba0c  fcmpu 0, 2, 1
  043ba10  stfs 2, 24(31)
  043ba14  cror 6, 1, 2
  043ba18  bt 6, 0x43c460
  043ba1c  li 3, 0
  043ba20  stw 3, 376(30)
  043ba24  stfs 1, 24(31)
  043ba28  b 0x43c460
  043ba2c  lwz 3, 508(30)
  043ba30  cmpwi 3, -1
  043ba34  bt 2, 0x43ba6c
  043ba38  lis 4, 165
  043ba3c  slwi 3, 3, 2
  043ba40  addic 4, 4, 7136
  043ba44  extsw 7, 3
  043ba48  addic 5, 30, 432
  043ba4c  addic 6, 1, 336
  043ba50  ori 3, 31, 0
  043ba54  lwzx 4, 4, 7
  043ba58  bl 0x1385d0
  043ba5c  nop
  043ba60  lfs 1, 336(1)
  043ba64  lfs 2, 340(1)
  043ba68  b 0x43ba8c
  043ba6c  lfs 1, 432(30)
  043ba70  stfs 1, 336(1)
  043ba74  lfs 2, 436(30)
  043ba78  stfs 2, 340(1)
  043ba7c  lfs 3, 440(30)
  043ba80  stfs 3, 344(1)
  043ba84  lfs 3, 444(30)
  043ba88  stfs 3, 348(1)
  043ba8c  lfs 3, 16(31)
  043ba90  lfs 4, 20(31)
  043ba94  ori 27, 28, 0
  043ba98  fsubs 1, 1, 3
  043ba9c  fsubs 2, 2, 4
  043baa0  bl 0x5e8338
  043baa4  nop
  043baa8  lis 3, 68
  043baac  addic 5, 30, 464
  043bab0  addi 29, 3, -24312
  043bab4  ori 3, 31, 0
  043bab8  lfs 2, 84(29)
  043babc  lfs 3, 56(29)
  043bac0  lfs 4, 88(29)
  043bac4  bl 0xff2e8
  043bac8  nop
  043bacc  lfs 1, 72(31)
  043bad0  bl 0x5e8078
  043bad4  nop
  043bad8  lfs 31, 92(29)
  043badc  lfs 2, 72(31)
  043bae0  fmuls 3, 1, 31
  043bae4  fmr 1, 2
  043bae8  stfs 3, 320(1)
  043baec  bl 0x5e8128
  043baf0  nop
  043baf4  fmuls 1, 1, 31
  043baf8  li 6, 0
  043bafc  ori 3, 31, 0
  043bb00  addic 4, 30, 352
  043bb04  addic 5, 1, 320
  043bb08  stw 6, 328(1)
  043bb0c  addic 6, 1, 336
  043bb10  stfs 1, 324(1)
  043bb14  lfs 1, 80(29)
  043bb18  bl 0x101058
  043bb1c  nop
  043bb20  addic 28, 30, 432
  043bb24  ori 29, 3, 0
  043bb28  ori 3, 27, 0
  043bb2c  ori 4, 28, 0
  043bb30  bl 0x5e8588
  043bb34  nop
  043bb38  fcmpu 0, 1, 31
  043bb3c  cror 6, 1, 2
  043bb40  bt 6, 0x43bb94
  043bb44  li 3, 1
  043bb48  lbz 4, 83(31)
  043bb4c  cmpwi 4, 2
  043bb50  stb 3, 32(31)
  043bb54  bt 2, 0x43bb94
  043bb58  lis 3, 68
  043bb5c  lis 4, 114
  043bb60  addi 3, 3, -24312
  043bb64  li 5, 0
  043bb68  lfs 1, 76(3)
  043bb6c  lfs 2, -3056(4)
  043bb70  ori 3, 31, 0
  043bb74  fmuls 1, 2, 1
  043bb78  li 4, 2
  043bb7c  fctiwz 1, 1
  043bb80  stfd 1, 464(1)
  043bb84  lwz 6, 468(1)
  043bb88  extsw 6, 6
  043bb8c  bl 0xfddc0
  043bb90  nop
  043bb94  lis 4, 151
  043bb98  addic 27, 1, 352
  043bb9c  addic 4, 4, -25376
  043bba0  ori 3, 27, 0
  043bba4  ori 5, 28, 0
  043bba8  addic 4, 4, 128
  043bbac  bl 0x5e81f0
  043bbb0  nop
  043bbb4  ori 3, 27, 0
  043bbb8  bl 0x5e8030
  043bbbc  nop
  043bbc0  lfs 2, 476(30)
  043bbc4  fcmpu 0, 1, 2
  043bbc8  cror 6, 1, 2
  043bbcc  bt 6, 0x43bc3c
  043bbd0  lbz 3, 33(31)
  043bbd4  cmpwi 3, 255
  043bbd8  bt 2, 0x43bbe8
  043bbdc  li 4, 1
  043bbe0  bl 0x104298
  043bbe4  nop
  043bbe8  li 3, 3
  043bbec  lbz 4, 83(31)
  043bbf0  cmpwi 4, 0
  043bbf4  stb 3, 32(31)
  043bbf8  bt 2, 0x43bd08
  043bbfc  lis 3, 68
  043bc00  lis 4, 114
  043bc04  addi 3, 3, -24312
  043bc08  li 5, 0
  043bc0c  lfs 1, 76(3)
  043bc10  lfs 2, -3056(4)
  043bc14  ori 3, 31, 0
  043bc18  li 4, 0
  043bc1c  fmuls 1, 2, 1
  043bc20  fctiwz 1, 1
  043bc24  stfd 1, 464(1)
  043bc28  lwz 6, 468(1)
  043bc2c  extsw 6, 6
  043bc30  bl 0xfddc0
  043bc34  nop
  043bc38  b 0x43bd08
  043bc3c  lbz 3, 188(31)
  043bc40  cmpwi 3, 1
  043bc44  bf 2, 0x43bc9c
  043bc48  li 3, 3
  043bc4c  lbz 4, 83(31)
  043bc50  cmpwi 4, 0
  043bc54  stb 3, 32(31)
  043bc58  bt 2, 0x43bd08
  043bc5c  lis 3, 68
  043bc60  lis 4, 114
  043bc64  addi 3, 3, -24312
  043bc68  li 5, 0
  043bc6c  lfs 1, 76(3)
  043bc70  lfs 2, -3056(4)
  043bc74  ori 3, 31, 0
  043bc78  li 4, 0
  043bc7c  fmuls 1, 2, 1
  043bc80  fctiwz 1, 1
  043bc84  stfd 1, 464(1)
  043bc88  lwz 6, 468(1)
  043bc8c  extsw 6, 6
  043bc90  bl 0xfddc0
  043bc94  nop
  043bc98  b 0x43bd08
  043bc9c  rlwinm 3, 29, 0, 30, 30
  043bca0  cmpwi 3, 0
  043bca4  bt 2, 0x43bd08
  043bca8  lfs 1, 112(1)
  043bcac  li 3, 12
  043bcb0  lfs 2, 116(1)
  043bcb4  stfs 1, 16(31)
  043bcb8  lbz 4, 83(31)
  043bcbc  stfs 2, 20(31)
  043bcc0  cmpwi 4, 5
  043bcc4  stb 3, 32(31)
  043bcc8  bt 2, 0x43bd08
  043bccc  lis 3, 68
  043bcd0  lis 4, 114
  043bcd4  addi 3, 3, -24312
  043bcd8  li 5, 0
  043bcdc  lfs 1, 76(3)
  043bce0  lfs 2, -3056(4)
  043bce4  ori 3, 31, 0
  043bce8  li 4, 5
  043bcec  fmuls 1, 2, 1
  043bcf0  fctiwz 1, 1
  043bcf4  stfd 1, 464(1)
  043bcf8  lwz 6, 468(1)
  043bcfc  extsw 6, 6
  043bd00  bl 0xfddc0
  043bd04  nop
  043bd08  li 3, 0
  043bd0c  stb 3, 188(31)
  043bd10  b 0x43c460
  043bd14  ori 3, 31, 0
  043bd18  addic 4, 30, 256
  043bd1c  bl 0x10b030
  043bd20  nop
  043bd24  clrlwi 3, 3, 31
  043bd28  cmpwi 3, 0
  043bd2c  bt 2, 0x43bd84
  043bd30  li 3, 9
  043bd34  lbz 4, 83(31)
  043bd38  cmpwi 4, 4
  043bd3c  stb 3, 32(31)
  043bd40  bt 2, 0x43c470
  043bd44  lis 3, 68
  043bd48  lis 4, 114
  043bd4c  addi 3, 3, -24312
  043bd50  li 5, 8
  043bd54  lfs 1, 76(3)
  043bd58  lfs 2, -3056(4)
  043bd5c  ori 3, 31, 0
  043bd60  li 4, 4
  043bd64  fmuls 1, 2, 1
  043bd68  fctiwz 1, 1
  043bd6c  stfd 1, 464(1)
  043bd70  lwz 6, 468(1)
  043bd74  extsw 6, 6
  043bd78  bl 0xfddc0
  043bd7c  nop
  043bd80  b 0x43c470
  043bd84  lwz 3, 24(31)
  043bd88  cmpwi 3, 0
  043bd8c  bf 0, 0x43c460
  043bd90  ori 3, 31, 0
  043bd94  bl 0xefb38
  043bd98  nop
  043bd9c  b 0x43c470
  043bda0  ori 3, 31, 0
  043bda4  addic 4, 30, 256
  043bda8  bl 0x48c188
  043bdac  nop
  043bdb0  cmpwi 3, 0
  043bdb4  bt 2, 0x43c460
  043bdb8  li 3, 0
  043bdbc  stb 3, 32(31)
  043bdc0  sth 3, 168(30)
  043bdc4  b 0x43c460
  043bdc8  ori 3, 31, 0
  043bdcc  bl 0xefe40
  043bdd0  nop
  043bdd4  lis 3, 68
  043bdd8  addi 3, 3, -24312
  043bddc  lfs 2, 116(3)
  043bde0  fcmpu 0, 1, 2
  043bde4  cror 6, 0, 2
  043bde8  bt 6, 0x43c460
  043bdec  li 3, 3
  043bdf0  lbz 4, 83(31)
  043bdf4  cmpwi 4, 0
  043bdf8  stb 3, 32(31)
  043bdfc  bt 2, 0x43c470
  043be00  lis 3, 68
  043be04  lis 4, 114
  043be08  addi 3, 3, -24312
  043be0c  li 5, 0
  043be10  lfs 1, 76(3)
  043be14  lfs 2, -3056(4)
  043be18  ori 3, 31, 0
  043be1c  li 4, 0
  043be20  fmuls 1, 2, 1
  043be24  fctiwz 1, 1
  043be28  stfd 1, 464(1)
  043be2c  lwz 6, 468(1)
  043be30  extsw 6, 6
  043be34  bl 0xfddc0
  043be38  nop
  043be3c  b 0x43c470
  043be40  ori 3, 31, 0
  043be44  addic 4, 30, 256
  043be48  bl 0x10b030
  043be4c  nop
  043be50  rlwinm 3, 3, 0, 25, 25
  043be54  cmpwi 3, 0
  043be58  bt 2, 0x43be90
  043be5c  lis 4, 68
  043be60  ori 3, 31, 0
  043be64  addi 5, 4, -24312
  043be68  ori 4, 28, 0
  043be6c  li 6, 6
  043be70  lfs 1, 64(5)
  043be74  lfs 2, 100(5)
  043be78  bl 0x10fb28
  043be7c  nop
  043be80  ori 3, 31, 0
  043be84  bl 0xefb38
  043be88  nop
  043be8c  b 0x43c470
  043be90  lwz 3, 24(31)
  043be94  cmpwi 3, 0
  043be98  bf 0, 0x43c460
  043be9c  ori 3, 31, 0
  043bea0  bl 0xefb38
  043bea4  nop
  043bea8  b 0x43c470
  043beac  lis 3, 151
  043beb0  lfs 1, 24(31)
  043beb4  addic 29, 3, -25376
  043beb8  ori 3, 28, 0
  043bebc  lwz 4, 8320(29)
  043bec0  addic 29, 29, 128
  043bec4  lfs 2, 24(4)
  043bec8  ori 4, 29, 0
  043becc  fsubs 1, 1, 2
  043bed0  fabs 31, 1
  043bed4  bl 0x5e8588
  043bed8  nop
  043bedc  lwz 3, 508(30)
  043bee0  fdivs 31, 31, 1
  043bee4  cmpwi 3, -1
  043bee8  bt 2, 0x43bf20
  043beec  lis 4, 165
  043bef0  slwi 3, 3, 2
  043bef4  addic 4, 4, 7136
  043bef8  extsw 7, 3
  043befc  addic 5, 30, 432
  043bf00  addic 6, 1, 384
  043bf04  ori 3, 31, 0
  043bf08  lwzx 4, 4, 7
  043bf0c  bl 0x1385d0
  043bf10  nop
  043bf14  lfs 30, 384(1)
  043bf18  lfs 1, 388(1)
  043bf1c  b 0x43bf40
  043bf20  lfs 30, 432(30)
  043bf24  stfs 30, 384(1)
  043bf28  lfs 1, 436(30)
  043bf2c  stfs 1, 388(1)
  043bf30  lfs 2, 440(30)
  043bf34  stfs 2, 392(1)
  043bf38  lfs 2, 444(30)
  043bf3c  stfs 2, 396(1)
  043bf40  lfs 2, 16(31)
  043bf44  ori 27, 29, 0
  043bf48  fsubs 3, 30, 2
  043bf4c  lfs 2, 20(31)
  043bf50  fsubs 2, 1, 2
  043bf54  fmr 1, 3
  043bf58  bl 0x5e8338
  043bf5c  nop
  043bf60  lis 3, 68
  043bf64  addic 5, 30, 464
  043bf68  addi 26, 3, -24312
  043bf6c  ori 3, 31, 0
  043bf70  lfs 2, 52(26)
  043bf74  lfs 3, 56(26)
  043bf78  lfs 4, 60(26)
  043bf7c  bl 0xff2e8
  043bf80  nop
  043bf84  lfs 1, 72(31)
  043bf88  bl 0x5e8078
  043bf8c  nop
  043bf90  lfs 30, 92(26)
  043bf94  lfs 2, 72(31)
  043bf98  fmuls 3, 1, 30
  043bf9c  fmr 1, 2
  043bfa0  stfs 3, 368(1)
  043bfa4  bl 0x5e8128
  043bfa8  nop
  043bfac  fmuls 1, 1, 30
  043bfb0  li 5, 0
  043bfb4  ori 3, 31, 0
  043bfb8  addic 4, 30, 352
  043bfbc  addic 6, 1, 384
  043bfc0  stw 5, 376(1)
  043bfc4  addic 5, 1, 368
  043bfc8  stfs 1, 372(1)
  043bfcc  lfs 30, 80(26)
  043bfd0  fmr 1, 30
  043bfd4  bl 0x101058
  043bfd8  nop
  043bfdc  ori 29, 3, 0
  043bfe0  addic 3, 1, 400
  043bfe4  ori 4, 27, 0
  043bfe8  addic 5, 30, 432
  043bfec  bl 0x5e81f0
  043bff0  nop
  043bff4  ori 3, 28, 0
  043bff8  ori 4, 27, 0
  043bffc  bl 0x5e8588
  043c000  nop
  043c004  lfs 2, 96(26)
  043c008  lbz 28, 83(31)
  043c00c  fcmpu 0, 1, 2
  043c010  lbz 3, 112(31)
  043c014  cror 6, 1, 2
  043c018  bt 6, 0x43c074
  043c01c  fcmpu 0, 31, 30
  043c020  bt 1, 0x43c074
  043c024  li 3, 4
  043c028  cmpwi 28, 1
  043c02c  stb 3, 32(31)
  043c030  bt 2, 0x43c15c
  043c034  lis 3, 68
  043c038  lis 4, 114
  043c03c  addi 3, 3, -24312
  043c040  li 5, 0
  043c044  lfs 1, 76(3)
  043c048  lfs 2, -3056(4)
  043c04c  ori 3, 31, 0
  043c050  fmuls 1, 2, 1
  043c054  li 4, 1
  043c058  fctiwz 1, 1
  043c05c  stfd 1, 464(1)
  043c060  lwz 6, 468(1)
  043c064  extsw 6, 6
  043c068  bl 0xfddc0
  043c06c  nop
  043c070  b 0x43c15c
  043c074  fcmpu 0, 31, 30
  043c078  bt 1, 0x43c0d8
  043c07c  rlwinm 4, 29, 0, 30, 30
  043c080  cmpwi 4, 0
  043c084  bf 2, 0x43c0d8
  043c088  li 3, 5
  043c08c  cmpwi 28, 0
  043c090  stb 3, 32(31)
  043c094  bt 2, 0x43c15c
  043c098  lis 3, 68
  043c09c  lis 4, 114
  043c0a0  addi 3, 3, -24312
  043c0a4  li 5, 0
  043c0a8  lfs 1, 76(3)
  043c0ac  lfs 2, -3056(4)
  043c0b0  ori 3, 31, 0
  043c0b4  li 4, 0
  043c0b8  fmuls 1, 2, 1
  043c0bc  fctiwz 1, 1
  043c0c0  stfd 1, 464(1)
  043c0c4  lwz 6, 468(1)
  043c0c8  extsw 6, 6
  043c0cc  bl 0xfddc0
  043c0d0  nop
  043c0d4  b 0x43c15c
  043c0d8  rlwinm 3, 3, 0, 30, 30
  043c0dc  cmpwi 3, 0
  043c0e0  bt 2, 0x43c15c
  043c0e4  li 3, 4
  043c0e8  bl 0xfc620
  043c0ec  nop
  043c0f0  li 3, 4
  043c0f4  bl 0xfc620
  043c0f8  nop
  043c0fc  lis 4, 68
  043c100  lis 5, 114
  043c104  addi 4, 4, -24312
  043c108  li 6, 0
  043c10c  subc 3, 6, 3
  043c110  li 6, 2
  043c114  lfs 1, 76(4)
  043c118  cntlzw 3, 3
  043c11c  lfs 2, -3056(5)
  043c120  li 4, 5
  043c124  sldi 3, 3, 58
  043c128  fmuls 1, 2, 1
  043c12c  sradi 5, 3, 63
  043c130  subc 4, 4, 6
  043c134  ori 3, 31, 0
  043c138  and 4, 5, 4
  043c13c  li 5, 0
  043c140  addc 4, 6, 4
  043c144  fctiwz 1, 1
  043c148  stfd 1, 464(1)
  043c14c  lwz 6, 468(1)
  043c150  extsw 6, 6
  043c154  bl 0xfddc0
  043c158  nop
  043c15c  li 3, 0
  043c160  stb 3, 188(31)
  043c164  b 0x43c460
  043c168  lbz 3, 82(31)
  043c16c  cmpwi 3, 0
  043c170  bt 2, 0x43c1bc
  043c174  lbz 3, 83(31)
  043c178  cmpwi 3, 0
  043c17c  bt 2, 0x43c1bc
  043c180  lis 3, 68
  043c184  lis 4, 114
  043c188  addi 3, 3, -24312
  043c18c  li 5, 0
  043c190  lfs 1, 76(3)
  043c194  lfs 2, -3056(4)
  043c198  ori 3, 31, 0
  043c19c  li 4, 0
  043c1a0  fmuls 1, 2, 1
  043c1a4  fctiwz 1, 1
  043c1a8  stfd 1, 464(1)
  043c1ac  lwz 6, 468(1)
  043c1b0  extsw 6, 6
  043c1b4  bl 0xfddc0
  043c1b8  nop
  043c1bc  lfs 1, 72(31)
  043c1c0  bl 0x5e8078
  043c1c4  nop
  043c1c8  lis 29, 114
  043c1cc  lfs 2, 484(30)
  043c1d0  lfs 3, 72(31)
  043c1d4  lfs 4, -3052(29)
  043c1d8  fmuls 2, 2, 4
  043c1dc  fmuls 2, 2, 1
  043c1e0  fmr 1, 3
  043c1e4  stfs 2, 416(1)
  043c1e8  bl 0x5e8128
  043c1ec  nop
  043c1f0  lfs 2, 484(30)
  043c1f4  lfs 3, -3052(29)
  043c1f8  li 6, 0
  043c1fc  addic 3, 1, 432
  043c200  fmuls 2, 2, 3
  043c204  addic 5, 1, 416
  043c208  stw 6, 424(1)
  043c20c  ori 4, 28, 0
  043c210  fmuls 1, 2, 1
  043c214  stfs 1, 420(1)
  043c218  bl 0x5e7f54
  043c21c  nop
  043c220  lis 3, 164
  043c224  lwz 29, -28500(3)
  043c228  cmpwi 29, 0
  043c22c  bt 2, 0x43c354
  043c230  lis 3, 68
  043c234  addi 3, 3, -24312
  043c238  lfs 29, 92(3)
  043c23c  lfs 28, 120(3)
  043c240  lfs 27, 124(3)
  043c244  cmpw 29, 31
  043c248  bt 2, 0x43c348
  043c24c  lbz 3, 32(29)
  043c250  cmpwi 3, 128
  043c254  bf 0, 0x43c348
  043c258  lhz 3, 166(29)
  043c25c  cmpwi 3, 0
  043c260  cmpwi 1, 3, 739
  043c264  bt 2, 0x43c26c
  043c268  bf 6, 0x43c348
  043c26c  addic 27, 29, 16
  043c270  addic 3, 1, 432
  043c274  ori 4, 27, 0
  043c278  bl 0x5e8588
  043c27c  nop
  043c280  fcmpu 0, 1, 29
  043c284  cror 6, 1, 2
  043c288  bt 6, 0x43c348
  043c28c  lfs 1, 16(29)
  043c290  lfs 26, 72(31)
  043c294  lfs 30, 24(31)
  043c298  lfs 2, 16(31)
  043c29c  lfs 3, 20(29)
  043c2a0  fsubs 1, 1, 2
  043c2a4  lfs 4, 20(31)
  043c2a8  fsubs 2, 3, 4
  043c2ac  bl 0x5e8338
  043c2b0  nop
  043c2b4  fmr 2, 1
  043c2b8  fmr 1, 26
  043c2bc  bl 0x5025e0
  043c2c0  nop
  043c2c4  fmr 2, 1
  043c2c8  lfs 1, 72(31)
  043c2cc  fcmpu 0, 2, 31
  043c2d0  cror 6, 0, 2
  043c2d4  bt 6, 0x43c2e8
  043c2d8  lis 3, 114
  043c2dc  fmr 3, 28
  043c2e0  lfs 2, -3052(3)
  043c2e4  b 0x43c2f4
  043c2e8  lis 3, 114
  043c2ec  fmr 3, 27
  043c2f0  lfs 2, -3052(3)
  043c2f4  fmuls 2, 2, 3
  043c2f8  bl 0x502578
  043c2fc  nop
  043c300  addic 26, 1, 432
  043c304  ori 4, 28, 0
  043c308  stfs 1, 72(31)
  043c30c  ori 3, 26, 0
  043c310  ori 5, 27, 0
  043c314  bl 0x5e81f0
  043c318  nop
  043c31c  ori 3, 26, 0
  043c320  fmr 1, 29
  043c324  ori 4, 26, 0
  043c328  bl 0x5e7f98
  043c32c  nop
  043c330  ori 3, 26, 0
  043c334  ori 4, 26, 0
  043c338  ori 5, 27, 0
  043c33c  bl 0x5e7f54
  043c340  nop
  043c344  stfs 30, 440(1)
  043c348  lwz 29, 40(29)
  043c34c  cmpwi 29, 0
  043c350  bf 2, 0x43c244
  043c354  lfs 1, 432(1)
  043c358  lis 3, 68
  043c35c  lfs 2, 436(1)
  043c360  li 4, 0
  043c364  stfs 1, 16(31)
  043c368  addi 29, 3, -24312
  043c36c  lfs 1, 440(1)
  043c370  ori 3, 28, 0
  043c374  stfs 2, 20(31)
  043c378  lfs 2, 444(1)
  043c37c  stfs 1, 24(31)
  043c380  stfs 2, 28(31)
  043c384  lfs 1, 64(29)
  043c388  bl 0xffb70
  043c38c  nop
  043c390  lis 3, 114
  043c394  lfs 2, 112(29)
  043c398  lfs 3, 376(30)
  043c39c  lfs 4, -3048(3)
  043c3a0  fnmsubs 2, 4, 2, 3
  043c3a4  stfs 2, 376(30)
  043c3a8  lfs 3, 24(31)
  043c3ac  fadds 2, 3, 2
  043c3b0  fcmpu 0, 2, 1
  043c3b4  stfs 2, 24(31)
  043c3b8  cror 6, 1, 2
  043c3bc  bt 6, 0x43c3cc
  043c3c0  li 3, 0
  043c3c4  stw 3, 376(30)
  043c3c8  stfs 1, 24(31)
  043c3cc  lwz 3, 504(30)
  043c3d0  cmpwi 3, 0
  043c3d4  bt 2, 0x43c408
  043c3d8  addic 4, 3, 16
  043c3dc  ori 3, 28, 0
  043c3e0  bl 0x5e8588
  043c3e4  nop
  043c3e8  fmr 31, 1
  043c3ec  lhz 3, 502(30)
  043c3f0  extsh 3, 3
  043c3f4  bl 0x502730
  043c3f8  nop
  043c3fc  fcmpu 0, 31, 1
  043c400  cror 6, 0, 2
  043c404  bt 6, 0x43c458
  043c408  li 3, 5
  043c40c  lbz 4, 83(31)
  043c410  cmpwi 4, 0
  043c414  stb 3, 32(31)
  043c418  bt 2, 0x43c458
  043c41c  lis 3, 68
  043c420  lis 4, 114
  043c424  addi 3, 3, -24312
  043c428  li 5, 0
  043c42c  lfs 1, 76(3)
  043c430  lfs 2, -3056(4)
  043c434  ori 3, 31, 0
  043c438  fmuls 1, 2, 1
  043c43c  li 4, 0
  043c440  fctiwz 1, 1
  043c444  stfd 1, 464(1)
  043c448  lwz 6, 468(1)
  043c44c  extsw 6, 6
  043c450  bl 0xfddc0
  043c454  nop
  043c458  li 3, 0
  043c45c  stb 3, 188(31)
  043c460  addic 4, 30, 240
  043c464  ori 3, 31, 0
  043c468  bl 0x10c9a0
  043c46c  nop
  043c470  ld 0, 608(1)
  043c474  mtlr 0
  043c478  lfd 26, 544(1)
  043c47c  lfd 27, 552(1)
  043c480  lfd 28, 560(1)
  043c484  lfd 29, 568(1)
  043c488  lfd 30, 576(1)
  043c48c  lfd 31, 584(1)
  043c490  ld 25, 488(1)
  043c494  ld 26, 496(1)
  043c498  ld 27, 504(1)
  043c49c  ld 28, 512(1)
  043c4a0  ld 29, 520(1)
  043c4a4  ld 30, 528(1)
  043c4a8  ld 31, 536(1)
  043c4ac  addi 1, 1, 592
  043c4b0  blr

M739_0043c4b4:   # 0x43c4b4, 0x58 bytes
  043c4b4  stdu 1, -128(1)
  043c4b8  mflr 0
  043c4bc  std 0, 144(1)
  043c4c0  std 31, 120(1)
  043c4c4  ori 31, 3, 0
  043c4c8  bl 0x48a718
  043c4cc  nop
  043c4d0  cmpwi 3, 0
  043c4d4  bt 2, 0x43c4e4
  043c4d8  li 4, 7
  043c4dc  stb 4, 32(31)
  043c4e0  b 0x43c4f8
  043c4e4  lbz 4, 32(31)
  043c4e8  cmpwi 4, 7
  043c4ec  bf 2, 0x43c4f8
  043c4f0  li 4, 1
  043c4f4  stb 4, 32(31)
  043c4f8  ld 0, 144(1)
  043c4fc  mtlr 0
  043c500  ld 31, 120(1)
  043c504  addi 1, 1, 128
  043c508  blr

M739_0043c50c:   # 0x43c50c, 0x58 bytes
  043c50c  stdu 1, -128(1)
  043c510  mflr 0
  043c514  std 0, 144(1)
  043c518  std 31, 120(1)
  043c51c  ori 31, 3, 0
  043c520  bl 0x48aa70
  043c524  nop
  043c528  cmpwi 3, 0
  043c52c  bt 2, 0x43c53c
  043c530  li 4, 7
  043c534  stb 4, 32(31)
  043c538  b 0x43c550
  043c53c  lbz 4, 32(31)
  043c540  cmpwi 4, 7
  043c544  bf 2, 0x43c550
  043c548  li 4, 1
  043c54c  stb 4, 32(31)
  043c550  ld 0, 144(1)
  043c554  mtlr 0
  043c558  ld 31, 120(1)
  043c55c  addi 1, 1, 128
  043c560  blr

M739_0043c564:   # 0x43c564, 0x58 bytes
  043c564  stdu 1, -128(1)
  043c568  mflr 0
  043c56c  std 0, 144(1)
  043c570  std 31, 120(1)
  043c574  ori 31, 3, 0
  043c578  bl 0x48acb8
  043c57c  nop
  043c580  cmpwi 3, 0
  043c584  bt 2, 0x43c594
  043c588  li 4, 7
  043c58c  stb 4, 32(31)
  043c590  b 0x43c5a8
  043c594  lbz 4, 32(31)
  043c598  cmpwi 4, 7
  043c59c  bf 2, 0x43c5a8
  043c5a0  li 4, 1
  043c5a4  stb 4, 32(31)
  043c5a8  ld 0, 144(1)
  043c5ac  mtlr 0
  043c5b0  ld 31, 120(1)
  043c5b4  addi 1, 1, 128
  043c5b8  blr

M739_0043c5bc:   # 0x43c5bc, 0x38 bytes
  043c5bc  stdu 1, -128(1)
  043c5c0  mflr 0
  043c5c4  std 0, 144(1)
  043c5c8  std 31, 120(1)
  043c5cc  ori 31, 3, 0
  043c5d0  bl 0x48afe8
  043c5d4  nop
  043c5d8  li 4, 7
  043c5dc  stb 4, 32(31)
  043c5e0  ld 0, 144(1)
  043c5e4  mtlr 0
  043c5e8  ld 31, 120(1)
  043c5ec  addi 1, 1, 128
  043c5f0  blr

M739_0043c5f4:   # 0x43c5f4, 0x40 bytes
  043c5f4  cmpwi 3, 0
  043c5f8  bt 2, 0x43c62c
  043c5fc  li 4, 0
  043c600  lwz 3, 120(3)
  043c604  li 5, 0
  043c608  subc 4, 4, 3
  043c60c  addic 3, 3, 64
  043c610  cntlzw 4, 4
  043c614  subc 5, 5, 3
  043c618  sldi 4, 4, 58
  043c61c  sradi 4, 4, 63
  043c620  and 4, 4, 5
  043c624  addc 3, 3, 4
  043c628  b 0x43c630
  043c62c  li 3, 0
  043c630  blr

M739_0043c634:   # 0x43c634, 0x14 bytes
  043c634  lis 3, 134
  043c638  lis 4, 1
  043c63c  addic 3, 3, -23540
  043c640  stw 4, 72(3)
  043c644  blr

M739_0043c668:   # 0x43c668, 0x624 bytes
  043c668  stdu 1, -560(1)
  043c66c  mflr 0
  043c670  std 0, 576(1)
  043c674  stfd 30, 544(1)
  043c678  stfd 31, 552(1)
  043c67c  lis 4, 161
  043c680  std 31, 536(1)
  043c684  lwz 4, 1800(4)
  043c688  lwz 31, 120(3)
  043c68c  std 30, 528(1)
  043c690  std 29, 520(1)
  043c694  std 28, 512(1)
  043c698  std 27, 504(1)
  043c69c  std 26, 496(1)
  043c6a0  cmpwi 4, 2
  043c6a4  bt 2, 0x43cc5c
  043c6a8  li 30, 0
  043c6ac  ori 28, 30, 0
  043c6b0  lfs 1, 40(31)
  043c6b4  lfs 2, 32(31)
  043c6b8  fmuls 1, 1, 1
  043c6bc  lis 3, 68
  043c6c0  lwz 4, 36(31)
  043c6c4  addi 3, 3, -14776
  043c6c8  lis 29, 115
  043c6cc  rlwinm 4, 4, 3, 29, 29
  043c6d0  addic 29, 29, 22784
  043c6d4  fmadds 1, 2, 2, 1
  043c6d8  lfs 2, 36(31)
  043c6dc  fabs 3, 2
  043c6e0  fsqrts 1, 1
  043c6e4  fabs 2, 1
  043c6e8  stfs 1, 404(1)
  043c6ec  fsubs 1, 2, 3
  043c6f0  stfs 1, 408(1)
  043c6f4  lwz 5, 404(1)
  043c6f8  lfs 30, 0(3)
  043c6fc  lfs 1, 404(1)
  043c700  lfs 31, 4(3)
  043c704  fabs 4, 1
  043c708  lwz 3, 408(1)
  043c70c  lfs 1, 408(1)
  043c710  rlwimi 4, 3, 2, 30, 30
  043c714  fsub 5, 1, 30
  043c718  fsub 6, 1, 30
  043c71c  rlwimi 4, 5, 4, 28, 28
  043c720  ori 3, 29, 0
  043c724  rlwimi 3, 4, 2, 26, 28
  043c728  slwi 4, 4, 2
  043c72c  clrldi 3, 3, 32
  043c730  fsel 4, 5, 4, 3
  043c734  lfsx 1, 29, 4
  043c738  fsel 3, 6, 3, 2
  043c73c  lfs 2, 4(3)
  043c740  fcmpu 0, 4, 30
  043c744  bt 1, 0x43c750
  043c748  fmr 1, 30
  043c74c  b 0x43c868
  043c750  fsubs 5, 3, 4
  043c754  fadds 3, 3, 4
  043c758  addic 3, 1, 16
  043c75c  li 7, 2
  043c760  addic 4, 3, 428
  043c764  addic 5, 3, 444
  043c768  mtctr 7
  043c76c  fdivs 3, 5, 3
  043c770  fmuls 4, 3, 3
  043c774  stfs 3, 456(1)
  043c778  stfs 3, 448(1)
  043c77c  stfs 3, 452(1)
  043c780  stfs 3, 444(1)
  043c784  lfs 6, 456(1)
  043c788  lfs 7, 448(1)
  043c78c  lfs 8, 452(1)
  043c790  fmuls 5, 4, 4
  043c794  fmuls 7, 7, 4
  043c798  fmuls 6, 6, 5
  043c79c  fmuls 3, 5, 5
  043c7a0  fmuls 5, 8, 5
  043c7a4  stfs 7, 448(1)
  043c7a8  fmuls 4, 6, 4
  043c7ac  stfs 5, 452(1)
  043c7b0  stfs 4, 456(1)
  043c7b4  lfs 4, 428(3)
  043c7b8  fmuls 4, 4, 3
  043c7bc  stfs 4, 444(3)
  043c7c0  lfs 4, 4(4)
  043c7c4  addic 3, 3, 8
  043c7c8  addic 4, 4, 8
  043c7cc  fmuls 4, 4, 3
  043c7d0  stfs 4, 4(5)
  043c7d4  addic 5, 5, 8
  043c7d8  bdnz 0x43c7b4
  043c7dc  li 5, 4
  043c7e0  ori 3, 1, 0
  043c7e4  mtctr 5
  043c7e8  lis 4, 115
  043c7ec  addic 5, 3, 444
  043c7f0  addic 4, 4, 22752
  043c7f4  ori 6, 5, 0
  043c7f8  lfs 3, 444(3)
  043c7fc  lfs 4, 0(4)
  043c800  fmuls 3, 3, 4
  043c804  lfs 4, 4(4)
  043c808  addic 4, 4, 8
  043c80c  stfs 3, 444(3)
  043c810  lfs 3, 4(5)
  043c814  addic 3, 3, 8
  043c818  fmuls 3, 3, 4
  043c81c  stfs 3, 4(5)
  043c820  addic 5, 5, 8
  043c824  bdnz 0x43c7f8
  043c828  fmr 3, 30
  043c82c  ori 3, 1, 0
  043c830  mtctr 7
  043c834  lfs 4, 444(3)
  043c838  fadds 3, 3, 4
  043c83c  addic 3, 3, 16
  043c840  lfs 4, 4(6)
  043c844  lfs 5, 8(6)
  043c848  lfs 6, 12(6)
  043c84c  addic 6, 6, 16
  043c850  fadds 3, 3, 4
  043c854  fadds 3, 3, 5
  043c858  fadds 3, 3, 6
  043c85c  bdnz 0x43c834
  043c860  fadds 3, 3, 31
  043c864  fmadds 1, 3, 1, 2
  043c868  lis 3, 68
  043c86c  fneg 1, 1
  043c870  addi 3, 3, -14776
  043c874  lfs 2, 8(3)
  043c878  bl 0x502578
  043c87c  nop
  043c880  stfs 1, 112(1)
  043c884  lwz 3, 40(31)
  043c888  lwz 4, 32(31)
  043c88c  lfs 1, 40(31)
  043c890  lfs 2, 32(31)
  043c894  fabs 3, 1
  043c898  fabs 5, 2
  043c89c  rlwinm 4, 4, 3, 29, 29
  043c8a0  fsubs 1, 3, 5
  043c8a4  stfs 1, 400(1)
  043c8a8  lwz 5, 400(1)
  043c8ac  lfs 1, 400(1)
  043c8b0  rlwimi 4, 5, 2, 30, 30
  043c8b4  fsub 4, 1, 30
  043c8b8  fsub 6, 1, 30
  043c8bc  rlwimi 4, 3, 4, 28, 28
  043c8c0  ori 3, 29, 0
  043c8c4  rlwimi 3, 4, 2, 26, 28
  043c8c8  slwi 4, 4, 2
  043c8cc  clrldi 3, 3, 32
  043c8d0  fsel 4, 4, 3, 5
  043c8d4  lfsx 1, 29, 4
  043c8d8  lfs 2, 4(3)
  043c8dc  fsel 3, 6, 5, 3
  043c8e0  fcmpu 0, 4, 30
  043c8e4  bt 1, 0x43c8ec
  043c8e8  b 0x43ca00
  043c8ec  fsubs 5, 3, 4
  043c8f0  fadds 3, 3, 4
  043c8f4  addic 3, 1, 16
  043c8f8  li 6, 2
  043c8fc  addic 5, 3, 412
  043c900  addic 4, 3, 396
  043c904  mtctr 6
  043c908  fdivs 3, 5, 3
  043c90c  fmuls 4, 3, 3
  043c910  stfs 3, 424(1)
  043c914  stfs 3, 416(1)
  043c918  stfs 3, 420(1)
  043c91c  stfs 3, 412(1)
  043c920  lfs 6, 424(1)
  043c924  lfs 7, 416(1)
  043c928  lfs 8, 420(1)
  043c92c  fmuls 5, 4, 4
  043c930  fmuls 7, 7, 4
  043c934  fmuls 6, 6, 5
  043c938  fmuls 3, 5, 5
  043c93c  fmuls 5, 8, 5
  043c940  stfs 7, 416(1)
  043c944  fmuls 4, 6, 4
  043c948  stfs 5, 420(1)
  043c94c  stfs 4, 424(1)
  043c950  lfs 4, 396(3)
  043c954  fmuls 4, 4, 3
  043c958  stfs 4, 412(3)
  043c95c  lfs 4, 4(4)
  043c960  addic 4, 4, 8
  043c964  fmuls 4, 4, 3
  043c968  addic 3, 3, 8
  043c96c  stfs 4, 4(5)
  043c970  addic 5, 5, 8
  043c974  bdnz 0x43c950
  043c978  li 5, 4
  043c97c  ori 3, 1, 0
  043c980  mtctr 5
  043c984  lis 4, 115
  043c988  addic 5, 3, 412
  043c98c  addic 4, 4, 22752
  043c990  ori 7, 5, 0
  043c994  lfs 3, 412(3)
  043c998  lfs 4, 0(4)
  043c99c  fmuls 3, 3, 4
  043c9a0  lfs 4, 4(4)
  043c9a4  addic 4, 4, 8
  043c9a8  stfs 3, 412(3)
  043c9ac  lfs 3, 4(5)
  043c9b0  addic 3, 3, 8
  043c9b4  fmuls 3, 3, 4
  043c9b8  stfs 3, 4(5)
  043c9bc  addic 5, 5, 8
  043c9c0  bdnz 0x43c994
  043c9c4  ori 3, 1, 0
  043c9c8  mtctr 6
  043c9cc  lfs 3, 412(3)
  043c9d0  lfs 4, 4(7)
  043c9d4  fadds 3, 30, 3
  043c9d8  lfs 5, 8(7)
  043c9dc  addic 3, 3, 16
  043c9e0  lfs 30, 12(7)
  043c9e4  addic 7, 7, 16
  043c9e8  fadds 3, 3, 4
  043c9ec  fadds 3, 3, 5
  043c9f0  fadds 30, 3, 30
  043c9f4  bdnz 0x43c9cc
  043c9f8  fadds 30, 30, 31
  043c9fc  fmadds 30, 30, 1, 2
  043ca00  lis 4, 68
  043ca04  stfs 30, 116(1)
  043ca08  lis 3, 269
  043ca0c  stw 28, 120(1)
  043ca10  addi 29, 4, -14776
  043ca14  stw 28, 124(1)
  043ca18  lis 27, 114
  043ca1c  stw 28, -13008(3)
  043ca20  lfs 1, 12(29)
  043ca24  lis 3, 161
  043ca28  lfs 2, -3056(27)
  043ca2c  fmuls 1, 2, 1
  043ca30  lwz 3, 1808(3)
  043ca34  fctiwz 1, 1
  043ca38  stfd 1, 480(1)
  043ca3c  lwz 4, 484(1)
  043ca40  divw 5, 3, 4
  043ca44  mullw 4, 5, 4
  043ca48  subc 3, 3, 4
  043ca4c  extsw 3, 3
  043ca50  bl 0x502730
  043ca54  nop
  043ca58  lfs 2, 16(29)
  043ca5c  lfs 3, 20(29)
  043ca60  lfs 4, -3056(27)
  043ca64  fmuls 1, 1, 2
  043ca68  fmuls 2, 4, 3
  043ca6c  fdivs 1, 1, 2
  043ca70  bl 0x502648
  043ca74  nop
  043ca78  fmr 30, 1
  043ca7c  lfs 1, 24(29)
  043ca80  clrlwi 29, 30, 31
  043ca84  fmr 31, 1
  043ca88  cmpwi 29, 0
  043ca8c  bt 2, 0x43ca9c
  043ca90  lis 3, 68
  043ca94  addi 3, 3, -14776
  043ca98  lfs 1, 28(3)
  043ca9c  fmuls 1, 30, 1
  043caa0  lis 4, 269
  043caa4  addic 27, 1, 192
  043caa8  addic 4, 4, -13008
  043caac  ori 3, 27, 0
  043cab0  stw 28, 8(4)
  043cab4  stw 28, 12(4)
  043cab8  stfs 1, 4(4)
  043cabc  bl 0x500ca4
  043cac0  nop
  043cac4  addic 26, 1, 128
  043cac8  addic 4, 1, 112
  043cacc  ori 3, 26, 0
  043cad0  bl 0x500ca4
  043cad4  nop
  043cad8  ori 3, 26, 0
  043cadc  ori 4, 26, 0
  043cae0  ori 5, 27, 0
  043cae4  bl 0x50162c
  043cae8  nop
  043caec  li 3, 0
  043caf0  lfs 1, 16(31)
  043caf4  lis 4, -32640
  043caf8  subc 3, 3, 29
  043cafc  stfs 1, 176(1)
  043cb00  cntlzw 3, 3
  043cb04  lfs 1, 20(31)
  043cb08  li 5, 17
  043cb0c  li 6, 18
  043cb10  sldi 3, 3, 58
  043cb14  stfs 1, 180(1)
  043cb18  lfs 1, 24(31)
  043cb1c  ori 4, 4, 32896
  043cb20  subc 5, 5, 6
  043cb24  sradi 3, 3, 63
  043cb28  stfs 1, 184(1)
  043cb2c  and 3, 3, 5
  043cb30  lfs 1, 28(31)
  043cb34  stw 4, 320(1)
  043cb38  addc 3, 6, 3
  043cb3c  stfs 1, 188(1)
  043cb40  stw 4, 324(1)
  043cb44  stw 4, 328(1)
  043cb48  stw 4, 332(1)
  043cb4c  bl 0x685c4
  043cb50  nop
  043cb54  std 3, 376(1)
  043cb58  li 3, 0
  043cb5c  lis 9, 0
  043cb60  li 4, 0
  043cb64  li 5, 1
  043cb68  li 6, 1
  043cb6c  li 7, 1
  043cb70  li 8, 0
  043cb74  ori 9, 9, 65424
  043cb78  bl 0x502fd4
  043cb7c  nop
  043cb80  std 3, 384(1)
  043cb84  li 4, 0
  043cb88  li 3, 0
  043cb8c  li 5, 0
  043cb90  li 6, 0
  043cb94  li 7, 0
  043cb98  li 8, 0
  043cb9c  bl 0x502f08
  043cba0  nop
  043cba4  std 3, 368(1)
  043cba8  li 3, 0
  043cbac  li 4, 2
  043cbb0  li 5, 0
  043cbb4  li 6, 1
  043cbb8  li 7, 128
  043cbbc  bl 0x502ea8
  043cbc0  nop
  043cbc4  lis 4, -16512
  043cbc8  std 3, 392(1)
  043cbcc  li 5, 1
  043cbd0  stw 28, 260(1)
  043cbd4  lis 3, 161
  043cbd8  li 7, 9
  043cbdc  stw 4, 256(1)
  043cbe0  stfs 31, 264(1)
  043cbe4  addic 6, 3, 24396
  043cbe8  stfs 31, 268(1)
  043cbec  addic 3, 1, 256
  043cbf0  stfs 31, 272(1)
  043cbf4  stw 28, 276(1)
  043cbf8  stfs 31, 280(1)
  043cbfc  stfs 31, 284(1)
  043cc00  stw 4, 288(1)
  043cc04  stw 28, 292(1)
  043cc08  stw 4, 296(1)
  043cc0c  stfs 31, 300(1)
  043cc10  stfs 31, 304(1)
  043cc14  stw 28, 308(1)
  043cc18  stw 4, 312(1)
  043cc1c  stfs 31, 316(1)
  043cc20  stw 28, 336(1)
  043cc24  ori 4, 26, 0
  043cc28  stfs 31, 340(1)
  043cc2c  stfs 31, 344(1)
  043cc30  stfs 31, 348(1)
  043cc34  stw 28, 352(1)
  043cc38  stw 28, 356(1)
  043cc3c  stfs 31, 360(1)
  043cc40  stw 28, 364(1)
  043cc44  lwz 6, 28(6)
  043cc48  bl 0x72280
  043cc4c  nop
  043cc50  addic 30, 30, 1
  043cc54  cmpwi 30, 2
  043cc58  bt 0, 0x43c6b0
  043cc5c  ld 0, 576(1)
  043cc60  mtlr 0
  043cc64  lfd 30, 544(1)
  043cc68  lfd 31, 552(1)
  043cc6c  ld 26, 496(1)
  043cc70  ld 27, 504(1)
  043cc74  ld 28, 512(1)
  043cc78  ld 29, 520(1)
  043cc7c  ld 30, 528(1)
  043cc80  ld 31, 536(1)
  043cc84  addi 1, 1, 560
  043cc88  blr
