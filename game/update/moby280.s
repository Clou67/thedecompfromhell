# game/update/moby280.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M280_00329e48:   # 0x329e48, 0xbac bytes
  0329e48  stdu 1, -448(1)
  0329e4c  mflr 0
  0329e50  std 0, 464(1)
  0329e54  stfd 15, 312(1)
  0329e58  stfd 16, 320(1)
  0329e5c  stfd 17, 328(1)
  0329e60  stfd 18, 336(1)
  0329e64  stfd 19, 344(1)
  0329e68  stfd 20, 352(1)
  0329e6c  stfd 21, 360(1)
  0329e70  stfd 22, 368(1)
  0329e74  stfd 23, 376(1)
  0329e78  stfd 24, 384(1)
  0329e7c  stfd 25, 392(1)
  0329e80  stfd 26, 400(1)
  0329e84  stfd 27, 408(1)
  0329e88  stfd 28, 416(1)
  0329e8c  stfd 29, 424(1)
  0329e90  stfd 30, 432(1)
  0329e94  stfd 31, 440(1)
  0329e98  std 30, 296(1)
  0329e9c  std 31, 304(1)
  0329ea0  lis 30, 149
  0329ea4  lwz 31, 120(3)
  0329ea8  addic 30, 30, 5056
  0329eac  lis 3, 51
  0329eb0  lfs 2, 324(30)
  0329eb4  lfs 30, 484(31)
  0329eb8  lfs 31, 480(31)
  0329ebc  fsubs 2, 2, 30
  0329ec0  lfs 1, 320(30)
  0329ec4  lfs 29, 488(31)
  0329ec8  fsubs 1, 1, 31
  0329ecc  lfs 3, 328(30)
  0329ed0  addi 3, 3, -25040
  0329ed4  fsubs 3, 3, 29
  0329ed8  fmuls 4, 2, 2
  0329edc  lfs 26, 4(3)
  0329ee0  fmr 19, 26
  0329ee4  lfs 28, 0(3)
  0329ee8  lfs 27, 332(30)
  0329eec  lfs 23, 8(3)
  0329ef0  fmadds 4, 1, 1, 4
  0329ef4  fmr 20, 19
  0329ef8  fmadds 4, 3, 3, 4
  0329efc  fmr 21, 20
  0329f00  fsqrts 5, 4
  0329f04  std 29, 288(1)
  0329f08  std 28, 280(1)
  0329f0c  std 27, 272(1)
  0329f10  std 26, 264(1)
  0329f14  std 25, 256(1)
  0329f18  fcmpu 0, 5, 21
  0329f1c  bt 2, 0x329f60
  0329f20  frsqrte 5, 4
  0329f24  fmuls 6, 4, 5
  0329f28  fmuls 7, 23, 5
  0329f2c  fnmsubs 6, 6, 5, 28
  0329f30  fmadds 5, 6, 7, 5
  0329f34  fmuls 6, 4, 5
  0329f38  fmuls 7, 23, 5
  0329f3c  fnmsubs 6, 6, 5, 28
  0329f40  fmadds 5, 6, 7, 5
  0329f44  fmuls 4, 4, 5
  0329f48  fmuls 6, 23, 5
  0329f4c  fnmsubs 4, 4, 5, 28
  0329f50  fmadds 19, 4, 6, 5
  0329f54  fmuls 21, 1, 19
  0329f58  fmuls 20, 2, 19
  0329f5c  fmuls 19, 3, 19
  0329f60  lis 29, 151
  0329f64  addic 29, 29, -25376
  0329f68  lis 3, 51
  0329f6c  lfs 1, 656(29)
  0329f70  lfs 2, 664(29)
  0329f74  fmuls 3, 1, 19
  0329f78  fmuls 5, 2, 20
  0329f7c  lfs 4, 660(29)
  0329f80  fmuls 6, 4, 21
  0329f84  addi 28, 3, -25040
  0329f88  fmsubs 2, 2, 21, 3
  0329f8c  fmsubs 3, 4, 19, 5
  0329f90  fmsubs 1, 1, 20, 6
  0329f94  lfs 22, 12(28)
  0329f98  fmuls 4, 2, 2
  0329f9c  li 3, 11
  0329fa0  fmr 18, 27
  0329fa4  fmadds 4, 3, 3, 4
  0329fa8  fmadds 4, 1, 1, 4
  0329fac  fsqrts 4, 4
  0329fb0  fdivs 5, 22, 4
  0329fb4  fsub 6, 26, 4
  0329fb8  fsub 7, 26, 4
  0329fbc  fsub 8, 26, 4
  0329fc0  fsub 9, 4, 26
  0329fc4  fsub 10, 4, 26
  0329fc8  fsub 4, 4, 26
  0329fcc  fmuls 3, 3, 5
  0329fd0  fmuls 2, 2, 5
  0329fd4  fmuls 1, 1, 5
  0329fd8  fsel 5, 6, 26, 3
  0329fdc  fsel 6, 7, 26, 2
  0329fe0  fsel 7, 8, 26, 1
  0329fe4  fsel 17, 9, 5, 3
  0329fe8  fsel 16, 10, 6, 2
  0329fec  fsel 15, 4, 7, 1
  0329ff0  fmuls 24, 20, 17
  0329ff4  fmuls 27, 19, 16
  0329ff8  fmuls 25, 21, 15
  0329ffc  fmsubs 24, 21, 16, 24
  032a000  fmsubs 27, 20, 15, 27
  032a004  fmsubs 25, 19, 17, 25
  032a008  bl 0x685c4
  032a00c  nop
  032a010  std 3, 232(1)
  032a014  li 4, 2
  032a018  li 3, 0
  032a01c  li 5, 0
  032a020  li 6, 1
  032a024  li 7, 128
  032a028  bl 0x502ea8
  032a02c  nop
  032a030  std 3, 248(1)
  032a034  lis 9, 0
  032a038  li 3, 0
  032a03c  li 4, 0
  032a040  li 5, 1
  032a044  li 6, 1
  032a048  li 7, 1
  032a04c  li 8, 0
  032a050  ori 9, 9, 65424
  032a054  bl 0x502fd4
  032a058  nop
  032a05c  std 3, 240(1)
  032a060  li 3, 1
  032a064  li 4, 1
  032a068  li 5, 0
  032a06c  li 6, 0
  032a070  li 7, 0
  032a074  li 8, 0
  032a078  bl 0x502f08
  032a07c  nop
  032a080  lis 4, -32513
  032a084  std 3, 224(1)
  032a088  li 3, 0
  032a08c  ori 4, 4, 65535
  032a090  lis 5, 16256
  032a094  lis 26, 128
  032a098  stw 3, 192(1)
  032a09c  addic 27, 1, 112
  032a0a0  stw 4, 188(1)
  032a0a4  addic 26, 26, 656
  032a0a8  stw 4, 184(1)
  032a0ac  li 25, 4
  032a0b0  stw 4, 180(1)
  032a0b4  stw 4, 176(1)
  032a0b8  stw 3, 196(1)
  032a0bc  ori 4, 26, 0
  032a0c0  stw 3, 200(1)
  032a0c4  mtctr 25
  032a0c8  stw 5, 204(1)
  032a0cc  stw 5, 208(1)
  032a0d0  stw 3, 212(1)
  032a0d4  stw 5, 216(1)
  032a0d8  stw 5, 220(1)
  032a0dc  ori 3, 27, 0
  032a0e0  lfs 1, 16(28)
  032a0e4  fmuls 2, 1, 17
  032a0e8  fmuls 3, 1, 16
  032a0ec  fmuls 4, 1, 15
  032a0f0  fmuls 5, 1, 18
  032a0f4  lfs 6, 0(4)
  032a0f8  fmuls 7, 6, 1
  032a0fc  stfs 7, 0(3)
  032a100  lfs 8, 4(4)
  032a104  fmuls 9, 8, 1
  032a108  fmuls 10, 8, 2
  032a10c  fmuls 11, 8, 3
  032a110  fmuls 8, 8, 4
  032a114  fmadds 10, 7, 21, 10
  032a118  stfs 9, 4(3)
  032a11c  fmadds 11, 7, 20, 11
  032a120  lfs 9, 8(4)
  032a124  fmadds 7, 7, 19, 8
  032a128  fmuls 9, 9, 1
  032a12c  fmadds 8, 9, 27, 10
  032a130  fmadds 10, 9, 25, 11
  032a134  fmadds 7, 9, 24, 7
  032a138  stfs 9, 8(3)
  032a13c  lfs 9, 12(4)
  032a140  addic 4, 4, 16
  032a144  fmadds 6, 6, 5, 9
  032a148  fmadds 8, 9, 31, 8
  032a14c  fmadds 10, 9, 30, 10
  032a150  fmadds 7, 9, 29, 7
  032a154  stfs 6, 12(3)
  032a158  stfs 8, 0(3)
  032a15c  stfs 10, 4(3)
  032a160  stfs 7, 8(3)
  032a164  addic 3, 3, 16
  032a168  bdnz 0x32a0f4
  032a16c  lis 28, 161
  032a170  addic 3, 1, 112
  032a174  addic 28, 28, 24396
  032a178  li 4, 0
  032a17c  li 5, 0
  032a180  li 7, 9
  032a184  lwz 6, 28(28)
  032a188  bl 0x72280
  032a18c  nop
  032a190  lfs 2, 516(31)
  032a194  lfs 10, 324(30)
  032a198  lfs 1, 512(31)
  032a19c  fsubs 10, 10, 2
  032a1a0  lfs 9, 320(30)
  032a1a4  lfs 3, 520(31)
  032a1a8  fsubs 9, 9, 1
  032a1ac  lfs 11, 328(30)
  032a1b0  fsubs 11, 11, 3
  032a1b4  fmr 0, 26
  032a1b8  fmuls 4, 10, 10
  032a1bc  fmr 13, 0
  032a1c0  fmadds 31, 9, 9, 4
  032a1c4  lfs 4, 524(31)
  032a1c8  lfs 5, 332(30)
  032a1cc  lfs 6, 660(29)
  032a1d0  lfs 7, 664(29)
  032a1d4  lfs 8, 656(29)
  032a1d8  fmr 12, 13
  032a1dc  fmadds 31, 11, 11, 31
  032a1e0  lwz 3, 28(28)
  032a1e4  fsqrts 30, 31
  032a1e8  fcmpu 0, 30, 12
  032a1ec  bt 2, 0x32a230
  032a1f0  frsqrte 12, 31
  032a1f4  fmuls 13, 31, 12
  032a1f8  fmuls 0, 23, 12
  032a1fc  fnmsubs 13, 13, 12, 28
  032a200  fmadds 12, 13, 0, 12
  032a204  fmuls 13, 31, 12
  032a208  fmuls 0, 23, 12
  032a20c  fnmsubs 13, 13, 12, 28
  032a210  fmadds 12, 13, 0, 12
  032a214  fmuls 13, 31, 12
  032a218  fmuls 0, 23, 12
  032a21c  fnmsubs 13, 13, 12, 28
  032a220  fmadds 0, 13, 0, 12
  032a224  fmuls 12, 9, 0
  032a228  fmuls 13, 10, 0
  032a22c  fmuls 0, 11, 0
  032a230  fmuls 9, 8, 0
  032a234  fmuls 10, 7, 13
  032a238  fmuls 11, 6, 12
  032a23c  lis 4, 8224
  032a240  lis 5, 51
  032a244  ori 4, 4, 8447
  032a248  addi 5, 5, -25040
  032a24c  fmsubs 7, 7, 12, 9
  032a250  fmsubs 6, 6, 0, 10
  032a254  fmsubs 8, 8, 13, 11
  032a258  stw 4, 188(1)
  032a25c  stw 4, 184(1)
  032a260  stw 4, 180(1)
  032a264  stw 4, 176(1)
  032a268  fmuls 9, 7, 7
  032a26c  lfs 31, 20(5)
  032a270  fmuls 11, 31, 5
  032a274  ori 4, 27, 0
  032a278  ori 5, 26, 0
  032a27c  fmadds 9, 6, 6, 9
  032a280  mtctr 25
  032a284  fmadds 9, 8, 8, 9
  032a288  fsqrts 9, 9
  032a28c  fdivs 5, 22, 9
  032a290  fsub 10, 26, 9
  032a294  fsub 30, 26, 9
  032a298  fsub 29, 26, 9
  032a29c  fsub 27, 9, 26
  032a2a0  fsub 25, 9, 26
  032a2a4  fsub 9, 9, 26
  032a2a8  fmuls 6, 6, 5
  032a2ac  fmuls 7, 7, 5
  032a2b0  fmuls 5, 8, 5
  032a2b4  fsel 8, 10, 26, 6
  032a2b8  fsel 10, 30, 26, 7
  032a2bc  fsel 30, 29, 26, 5
  032a2c0  fsel 6, 27, 8, 6
  032a2c4  fsel 7, 25, 10, 7
  032a2c8  fsel 5, 9, 30, 5
  032a2cc  fmuls 30, 13, 6
  032a2d0  fmuls 29, 0, 7
  032a2d4  fmuls 27, 12, 5
  032a2d8  fmuls 8, 31, 6
  032a2dc  fmuls 9, 31, 7
  032a2e0  fmuls 10, 31, 5
  032a2e4  fmsubs 7, 12, 7, 30
  032a2e8  fmsubs 5, 13, 5, 29
  032a2ec  fmsubs 6, 0, 6, 27
  032a2f0  lfs 30, 0(5)
  032a2f4  fmuls 29, 30, 31
  032a2f8  fmuls 30, 30, 11
  032a2fc  stfs 29, 0(4)
  032a300  lfs 27, 4(5)
  032a304  fmuls 25, 27, 31
  032a308  fmuls 24, 27, 8
  032a30c  fmuls 21, 27, 9
  032a310  fmuls 27, 27, 10
  032a314  fmadds 24, 29, 12, 24
  032a318  stfs 25, 4(4)
  032a31c  fmadds 21, 29, 13, 21
  032a320  lfs 25, 8(5)
  032a324  fmadds 29, 29, 0, 27
  032a328  fmuls 25, 25, 31
  032a32c  fmadds 27, 25, 5, 24
  032a330  fmadds 24, 25, 6, 21
  032a334  fmadds 29, 25, 7, 29
  032a338  stfs 25, 8(4)
  032a33c  lfs 25, 12(5)
  032a340  addic 5, 5, 16
  032a344  fmadds 30, 25, 4, 30
  032a348  fmadds 27, 25, 1, 27
  032a34c  fmadds 24, 25, 2, 24
  032a350  fmadds 29, 25, 3, 29
  032a354  stfs 30, 12(4)
  032a358  stfs 27, 0(4)
  032a35c  stfs 24, 4(4)
  032a360  stfs 29, 8(4)
  032a364  addic 4, 4, 16
  032a368  bdnz 0x32a2f0
  032a36c  ori 6, 3, 0
  032a370  addic 3, 1, 112
  032a374  li 4, 0
  032a378  li 5, 0
  032a37c  li 7, 9
  032a380  bl 0x72280
  032a384  nop
  032a388  lfs 2, 500(31)
  032a38c  lfs 10, 324(30)
  032a390  lfs 1, 496(31)
  032a394  fsubs 10, 10, 2
  032a398  lfs 9, 320(30)
  032a39c  lfs 3, 504(31)
  032a3a0  fsubs 9, 9, 1
  032a3a4  lfs 11, 328(30)
  032a3a8  fsubs 11, 11, 3
  032a3ac  fmr 0, 26
  032a3b0  fmuls 4, 10, 10
  032a3b4  fmr 13, 0
  032a3b8  fmadds 30, 9, 9, 4
  032a3bc  lfs 4, 508(31)
  032a3c0  lfs 5, 332(30)
  032a3c4  lfs 6, 660(29)
  032a3c8  lfs 7, 664(29)
  032a3cc  lfs 8, 656(29)
  032a3d0  fmr 12, 13
  032a3d4  fmadds 30, 11, 11, 30
  032a3d8  lwz 3, 28(28)
  032a3dc  fsqrts 29, 30
  032a3e0  fcmpu 0, 29, 12
  032a3e4  bt 2, 0x32a428
  032a3e8  frsqrte 12, 30
  032a3ec  fmuls 13, 30, 12
  032a3f0  fmuls 0, 23, 12
  032a3f4  fnmsubs 13, 13, 12, 28
  032a3f8  fmadds 12, 13, 0, 12
  032a3fc  fmuls 13, 30, 12
  032a400  fmuls 0, 23, 12
  032a404  fnmsubs 13, 13, 12, 28
  032a408  fmadds 12, 13, 0, 12
  032a40c  fmuls 13, 30, 12
  032a410  fmuls 0, 23, 12
  032a414  fnmsubs 13, 13, 12, 28
  032a418  fmadds 0, 13, 0, 12
  032a41c  fmuls 12, 9, 0
  032a420  fmuls 13, 10, 0
  032a424  fmuls 0, 11, 0
  032a428  fmuls 9, 8, 0
  032a42c  fmuls 10, 7, 13
  032a430  fmuls 11, 6, 12
  032a434  lis 4, 128
  032a438  fmr 29, 5
  032a43c  fmsubs 9, 7, 12, 9
  032a440  fmsubs 10, 6, 0, 10
  032a444  fmsubs 8, 8, 13, 11
  032a448  lfs 11, 580(4)
  032a44c  fmadds 5, 12, 11, 1
  032a450  fmuls 6, 9, 9
  032a454  fmadds 7, 0, 11, 3
  032a458  lis 5, 16416
  032a45c  mtctr 25
  032a460  fmadds 6, 10, 10, 6
  032a464  ori 6, 5, 65312
  032a468  ori 4, 27, 0
  032a46c  ori 5, 26, 0
  032a470  fmadds 6, 8, 8, 6
  032a474  stw 6, 188(1)
  032a478  stw 6, 184(1)
  032a47c  stw 6, 180(1)
  032a480  stw 6, 176(1)
  032a484  fsqrts 30, 6
  032a488  fmadds 6, 13, 11, 2
  032a48c  fmuls 11, 31, 29
  032a490  fdivs 1, 22, 30
  032a494  fsub 2, 26, 30
  032a498  fsub 3, 26, 30
  032a49c  fsub 29, 26, 30
  032a4a0  fsub 27, 30, 26
  032a4a4  fsub 25, 30, 26
  032a4a8  fsub 30, 30, 26
  032a4ac  fmuls 10, 10, 1
  032a4b0  fmuls 9, 9, 1
  032a4b4  fmuls 1, 8, 1
  032a4b8  fsel 2, 2, 26, 10
  032a4bc  fsel 3, 3, 26, 9
  032a4c0  fsel 8, 29, 26, 1
  032a4c4  fsel 2, 27, 2, 10
  032a4c8  fsel 3, 25, 3, 9
  032a4cc  fsel 1, 30, 8, 1
  032a4d0  fmuls 30, 13, 2
  032a4d4  fmuls 29, 0, 3
  032a4d8  fmuls 27, 12, 1
  032a4dc  fmuls 8, 31, 2
  032a4e0  fmuls 9, 31, 3
  032a4e4  fmuls 10, 31, 1
  032a4e8  fmsubs 3, 12, 3, 30
  032a4ec  fmsubs 1, 13, 1, 29
  032a4f0  fmsubs 2, 0, 2, 27
  032a4f4  lfs 30, 0(5)
  032a4f8  fmuls 29, 30, 31
  032a4fc  fmuls 30, 30, 11
  032a500  stfs 29, 0(4)
  032a504  lfs 27, 4(5)
  032a508  fmuls 25, 27, 31
  032a50c  fmuls 24, 27, 8
  032a510  fmuls 21, 27, 9
  032a514  fmuls 27, 27, 10
  032a518  stfs 25, 4(4)
  032a51c  fmadds 21, 29, 13, 21
  032a520  fmadds 25, 29, 12, 24
  032a524  lfs 24, 8(5)
  032a528  fmadds 29, 29, 0, 27
  032a52c  fmuls 24, 24, 31
  032a530  fmadds 27, 24, 1, 25
  032a534  fmadds 25, 24, 2, 21
  032a538  fmadds 29, 24, 3, 29
  032a53c  stfs 24, 8(4)
  032a540  lfs 24, 12(5)
  032a544  addic 5, 5, 16
  032a548  fmadds 30, 24, 4, 30
  032a54c  fmadds 27, 24, 5, 27
  032a550  fmadds 25, 24, 6, 25
  032a554  fmadds 29, 24, 7, 29
  032a558  stfs 30, 12(4)
  032a55c  stfs 27, 0(4)
  032a560  stfs 25, 4(4)
  032a564  stfs 29, 8(4)
  032a568  addic 4, 4, 16
  032a56c  bdnz 0x32a4f4
  032a570  ori 6, 3, 0
  032a574  addic 3, 1, 112
  032a578  li 4, 0
  032a57c  li 5, 0
  032a580  li 7, 9
  032a584  bl 0x72280
  032a588  nop
  032a58c  lfs 2, 532(31)
  032a590  lfs 10, 324(30)
  032a594  lfs 1, 528(31)
  032a598  fsubs 10, 10, 2
  032a59c  lfs 9, 320(30)
  032a5a0  lfs 3, 536(31)
  032a5a4  fsubs 9, 9, 1
  032a5a8  lfs 11, 328(30)
  032a5ac  fsubs 11, 11, 3
  032a5b0  fmr 0, 26
  032a5b4  fmuls 4, 10, 10
  032a5b8  fmr 13, 0
  032a5bc  fmadds 31, 9, 9, 4
  032a5c0  lfs 4, 540(31)
  032a5c4  lfs 5, 332(30)
  032a5c8  lfs 6, 660(29)
  032a5cc  lfs 7, 664(29)
  032a5d0  lfs 8, 656(29)
  032a5d4  fmr 12, 13
  032a5d8  fmadds 31, 11, 11, 31
  032a5dc  lwz 3, 28(28)
  032a5e0  fsqrts 30, 31
  032a5e4  fcmpu 0, 30, 12
  032a5e8  bt 2, 0x32a62c
  032a5ec  frsqrte 12, 31
  032a5f0  fmuls 13, 31, 12
  032a5f4  fmuls 0, 23, 12
  032a5f8  fnmsubs 13, 13, 12, 28
  032a5fc  fmadds 12, 13, 0, 12
  032a600  fmuls 13, 31, 12
  032a604  fmuls 0, 23, 12
  032a608  fnmsubs 13, 13, 12, 28
  032a60c  fmadds 12, 13, 0, 12
  032a610  fmuls 13, 31, 12
  032a614  fmuls 0, 23, 12
  032a618  fnmsubs 13, 13, 12, 28
  032a61c  fmadds 0, 13, 0, 12
  032a620  fmuls 12, 9, 0
  032a624  fmuls 13, 10, 0
  032a628  fmuls 0, 11, 0
  032a62c  fmuls 9, 8, 0
  032a630  fmuls 10, 7, 13
  032a634  fmuls 11, 6, 12
  032a638  lis 4, 128
  032a63c  fmsubs 9, 7, 12, 9
  032a640  fmsubs 10, 6, 0, 10
  032a644  fmsubs 11, 8, 13, 11
  032a648  lis 5, 16639
  032a64c  fmuls 6, 9, 9
  032a650  ori 6, 5, 8224
  032a654  ori 5, 26, 0
  032a658  mtctr 25
  032a65c  fmadds 6, 10, 10, 6
  032a660  fmadds 6, 11, 11, 6
  032a664  fsqrts 31, 6
  032a668  lfs 6, 596(4)
  032a66c  stw 6, 188(1)
  032a670  stw 6, 184(1)
  032a674  ori 4, 27, 0
  032a678  stw 6, 180(1)
  032a67c  stw 6, 176(1)
  032a680  fmadds 8, 0, 6, 3
  032a684  fmadds 7, 13, 6, 2
  032a688  fmadds 6, 12, 6, 1
  032a68c  fdivs 1, 22, 31
  032a690  fsub 2, 26, 31
  032a694  fsub 3, 26, 31
  032a698  fsub 30, 26, 31
  032a69c  fsub 29, 31, 26
  032a6a0  fsub 27, 31, 26
  032a6a4  fsub 31, 31, 26
  032a6a8  fmuls 10, 10, 1
  032a6ac  fmuls 25, 9, 1
  032a6b0  fmuls 11, 11, 1
  032a6b4  fsel 9, 2, 26, 10
  032a6b8  fsel 1, 3, 26, 25
  032a6bc  fsel 2, 30, 26, 11
  032a6c0  fsel 9, 29, 9, 10
  032a6c4  fsel 10, 27, 1, 25
  032a6c8  fsel 11, 31, 2, 11
  032a6cc  fmuls 3, 13, 9
  032a6d0  fmuls 1, 0, 10
  032a6d4  fmuls 2, 12, 11
  032a6d8  fmsubs 3, 12, 10, 3
  032a6dc  fmsubs 1, 13, 11, 1
  032a6e0  fmsubs 2, 0, 9, 2
  032a6e4  lis 6, 128
  032a6e8  lfs 31, 0(5)
  032a6ec  lfs 30, 600(6)
  032a6f0  fmuls 31, 31, 30
  032a6f4  stfs 31, 0(4)
  032a6f8  lfs 30, 4(5)
  032a6fc  lfs 29, 600(6)
  032a700  fmuls 30, 30, 29
  032a704  fmuls 29, 31, 5
  032a708  fmuls 27, 30, 9
  032a70c  fmuls 25, 30, 10
  032a710  stfs 30, 4(4)
  032a714  fmuls 30, 30, 11
  032a718  lfs 24, 8(5)
  032a71c  lfs 21, 600(6)
  032a720  fmuls 24, 24, 21
  032a724  fmadds 27, 31, 12, 27
  032a728  fmadds 25, 31, 13, 25
  032a72c  fmadds 31, 31, 0, 30
  032a730  stfs 24, 8(4)
  032a734  fmadds 27, 24, 1, 27
  032a738  fmadds 25, 24, 2, 25
  032a73c  lfs 30, 12(5)
  032a740  addic 5, 5, 16
  032a744  fmadds 31, 24, 3, 31
  032a748  fmadds 29, 30, 4, 29
  032a74c  fmadds 27, 30, 6, 27
  032a750  fmadds 25, 30, 7, 25
  032a754  fmadds 31, 30, 8, 31
  032a758  stfs 29, 12(4)
  032a75c  stfs 27, 0(4)
  032a760  stfs 25, 4(4)
  032a764  stfs 31, 8(4)
  032a768  addic 4, 4, 16
  032a76c  bdnz 0x32a6e4
  032a770  ori 6, 3, 0
  032a774  addic 3, 1, 112
  032a778  li 4, 0
  032a77c  li 5, 0
  032a780  li 7, 9
  032a784  bl 0x72280
  032a788  nop
  032a78c  lfs 3, 548(31)
  032a790  lfs 0, 324(30)
  032a794  lfs 2, 544(31)
  032a798  fsubs 0, 0, 3
  032a79c  lfs 13, 320(30)
  032a7a0  lfs 4, 552(31)
  032a7a4  fsubs 13, 13, 2
  032a7a8  lfs 31, 328(30)
  032a7ac  fsubs 31, 31, 4
  032a7b0  fmr 6, 26
  032a7b4  lfs 5, 556(31)
  032a7b8  fmuls 1, 0, 0
  032a7bc  lis 3, 128
  032a7c0  fmr 7, 6
  032a7c4  fmadds 30, 13, 13, 1
  032a7c8  lfs 1, 332(30)
  032a7cc  lfs 9, 660(29)
  032a7d0  lfs 10, 664(29)
  032a7d4  lfs 11, 656(29)
  032a7d8  lfs 12, 596(3)
  032a7dc  fmr 8, 7
  032a7e0  fmadds 30, 31, 31, 30
  032a7e4  lwz 31, 28(28)
  032a7e8  fsqrts 29, 30
  032a7ec  fcmpu 0, 29, 8
  032a7f0  bt 2, 0x32a834
  032a7f4  frsqrte 6, 30
  032a7f8  fmuls 7, 30, 6
  032a7fc  fmuls 8, 23, 6
  032a800  fnmsubs 7, 7, 6, 28
  032a804  fmadds 6, 7, 8, 6
  032a808  fmuls 7, 30, 6
  032a80c  fmuls 8, 23, 6
  032a810  fnmsubs 7, 7, 6, 28
  032a814  fmadds 6, 7, 8, 6
  032a818  fmuls 7, 30, 6
  032a81c  fmuls 8, 23, 6
  032a820  fnmsubs 7, 7, 6, 28
  032a824  fmadds 6, 7, 8, 6
  032a828  fmuls 8, 13, 6
  032a82c  fmuls 7, 0, 6
  032a830  fmuls 6, 31, 6
  032a834  fmuls 13, 11, 6
  032a838  fmuls 0, 10, 7
  032a83c  fmuls 31, 9, 8
  032a840  fmsubs 13, 10, 8, 13
  032a844  fmsubs 0, 9, 6, 0
  032a848  fmsubs 11, 11, 7, 31
  032a84c  fmadds 10, 6, 12, 4
  032a850  fmadds 4, 8, 12, 2
  032a854  fmuls 9, 13, 13
  032a858  lis 3, 16639
  032a85c  mtctr 25
  032a860  ori 3, 3, 8224
  032a864  fmadds 9, 0, 0, 9
  032a868  stw 3, 188(1)
  032a86c  stw 3, 184(1)
  032a870  stw 3, 180(1)
  032a874  fmadds 9, 11, 11, 9
  032a878  stw 3, 176(1)
  032a87c  fsqrts 31, 9
  032a880  fmadds 9, 7, 12, 3
  032a884  fdivs 2, 22, 31
  032a888  fsub 3, 26, 31
  032a88c  fsub 12, 26, 31
  032a890  fsub 30, 26, 31
  032a894  fsub 29, 31, 26
  032a898  fsub 28, 31, 26
  032a89c  fsub 31, 31, 26
  032a8a0  fmuls 0, 0, 2
  032a8a4  fmuls 13, 13, 2
  032a8a8  fmuls 2, 11, 2
  032a8ac  fsel 11, 3, 26, 0
  032a8b0  fsel 12, 12, 26, 13
  032a8b4  fsel 3, 30, 26, 2
  032a8b8  fsel 11, 29, 11, 0
  032a8bc  fsel 12, 28, 12, 13
  032a8c0  fsel 13, 31, 3, 2
  032a8c4  fmuls 3, 7, 11
  032a8c8  fmuls 26, 6, 12
  032a8cc  fmuls 2, 8, 13
  032a8d0  fmsubs 3, 8, 12, 3
  032a8d4  fmsubs 26, 7, 13, 26
  032a8d8  fmsubs 2, 6, 11, 2
  032a8dc  lis 3, 128
  032a8e0  lfs 0, 0(26)
  032a8e4  lfs 31, 600(3)
  032a8e8  fmuls 0, 0, 31
  032a8ec  stfs 0, 0(27)
  032a8f0  lfs 31, 4(26)
  032a8f4  lfs 30, 600(3)
  032a8f8  fmuls 31, 31, 30
  032a8fc  fmuls 30, 0, 1
  032a900  fmuls 29, 31, 11
  032a904  fmuls 28, 31, 12
  032a908  stfs 31, 4(27)
  032a90c  fmuls 31, 31, 13
  032a910  lfs 27, 8(26)
  032a914  lfs 25, 600(3)
  032a918  fmuls 27, 27, 25
  032a91c  fmadds 29, 0, 8, 29
  032a920  fmadds 28, 0, 7, 28
  032a924  fmadds 0, 0, 6, 31
  032a928  stfs 27, 8(27)
  032a92c  fmadds 29, 27, 26, 29
  032a930  fmadds 28, 27, 2, 28
  032a934  lfs 31, 12(26)
  032a938  addic 26, 26, 16
  032a93c  fmadds 0, 27, 3, 0
  032a940  fmadds 30, 31, 5, 30
  032a944  fmadds 29, 31, 4, 29
  032a948  fmadds 28, 31, 9, 28
  032a94c  fmadds 0, 31, 10, 0
  032a950  stfs 30, 12(27)
  032a954  stfs 29, 0(27)
  032a958  stfs 28, 4(27)
  032a95c  stfs 0, 8(27)
  032a960  addic 27, 27, 16
  032a964  bdnz 0x32a8dc
  032a968  addic 3, 1, 112
  032a96c  li 4, 0
  032a970  li 5, 0
  032a974  ori 6, 31, 0
  032a978  li 7, 9
  032a97c  bl 0x72280
  032a980  nop
  032a984  ld 0, 464(1)
  032a988  mtlr 0
  032a98c  lfd 15, 312(1)
  032a990  lfd 16, 320(1)
  032a994  lfd 17, 328(1)
  032a998  lfd 18, 336(1)
  032a99c  lfd 19, 344(1)
  032a9a0  lfd 20, 352(1)
  032a9a4  lfd 21, 360(1)
  032a9a8  lfd 22, 368(1)
  032a9ac  lfd 23, 376(1)
  032a9b0  lfd 24, 384(1)
  032a9b4  lfd 25, 392(1)
  032a9b8  lfd 26, 400(1)
  032a9bc  lfd 27, 408(1)
  032a9c0  lfd 28, 416(1)
  032a9c4  lfd 29, 424(1)
  032a9c8  lfd 30, 432(1)
  032a9cc  lfd 31, 440(1)
  032a9d0  ld 25, 256(1)
  032a9d4  ld 26, 264(1)
  032a9d8  ld 27, 272(1)
  032a9dc  ld 28, 280(1)
  032a9e0  ld 29, 288(1)
  032a9e4  ld 30, 296(1)
  032a9e8  ld 31, 304(1)
  032a9ec  addi 1, 1, 448
  032a9f0  blr

M280_0032aa00:   # 0x32aa00, 0x2c4 bytes
  032aa00  stdu 1, -288(1)
  032aa04  mflr 0
  032aa08  std 0, 304(1)
  032aa0c  stfd 29, 264(1)
  032aa10  stfd 30, 272(1)
  032aa14  stfd 31, 280(1)
  032aa18  lis 4, 51
  032aa1c  std 31, 256(1)
  032aa20  lfs 29, 16(3)
  032aa24  addi 31, 4, -22028
  032aa28  lfs 31, 0(31)
  032aa2c  lfs 30, 20(3)
  032aa30  lfs 1, 24(3)
  032aa34  li 3, 11
  032aa38  fadds 31, 1, 31
  032aa3c  bl 0x685c4
  032aa40  nop
  032aa44  std 3, 232(1)
  032aa48  li 3, 0
  032aa4c  lis 9, 0
  032aa50  li 4, 0
  032aa54  li 5, 1
  032aa58  li 6, 1
  032aa5c  li 7, 1
  032aa60  li 8, 0
  032aa64  ori 9, 9, 65424
  032aa68  bl 0x502fd4
  032aa6c  nop
  032aa70  std 3, 240(1)
  032aa74  li 4, 0
  032aa78  li 3, 0
  032aa7c  li 5, 0
  032aa80  li 6, 0
  032aa84  li 7, 0
  032aa88  li 8, 0
  032aa8c  bl 0x502f08
  032aa90  nop
  032aa94  std 3, 224(1)
  032aa98  li 3, 0
  032aa9c  li 4, 2
  032aaa0  li 5, 0
  032aaa4  li 6, 1
  032aaa8  li 7, 128
  032aaac  bl 0x502ea8
  032aab0  nop
  032aab4  std 3, 248(1)
  032aab8  li 3, 0
  032aabc  bl 0x502e50
  032aac0  nop
  032aac4  ori 4, 3, 0
  032aac8  li 3, 8
  032aacc  bl 0x174f80
  032aad0  nop
  032aad4  li 3, 1
  032aad8  li 4, 0
  032aadc  li 8, 0
  032aae0  li 10, 2
  032aae4  li 5, 0
  032aae8  li 6, 1
  032aaec  li 7, 0
  032aaf0  li 9, 1
  032aaf4  bl 0x502f98
  032aaf8  nop
  032aafc  ori 4, 3, 0
  032ab00  li 3, 22
  032ab04  bl 0x174f80
  032ab08  nop
  032ab0c  lis 3, 149
  032ab10  addic 3, 3, 5056
  032ab14  lfs 6, 324(3)
  032ab18  lfs 7, 320(3)
  032ab1c  fsubs 6, 6, 30
  032ab20  fsubs 7, 7, 29
  032ab24  lfs 5, 328(3)
  032ab28  fsubs 5, 5, 31
  032ab2c  lfs 2, 4(31)
  032ab30  fmuls 1, 6, 6
  032ab34  fmadds 1, 7, 7, 1
  032ab38  fmadds 4, 5, 5, 1
  032ab3c  fsqrts 4, 4
  032ab40  fcmpu 0, 4, 2
  032ab44  cror 6, 0, 2
  032ab48  bt 6, 0x32abcc
  032ab4c  lis 3, 128
  032ab50  lis 4, 128
  032ab54  lfs 3, 724(3)
  032ab58  lfs 1, 728(4)
  032ab5c  fsubs 1, 4, 1
  032ab60  fcmpu 0, 3, 1
  032ab64  cror 6, 0, 2
  032ab68  bt 6, 0x32ab80
  032ab6c  fmr 3, 1
  032ab70  fcmpu 0, 3, 2
  032ab74  cror 6, 1, 2
  032ab78  bt 6, 0x32ab80
  032ab7c  fmr 3, 2
  032ab80  fdivs 1, 3, 4
  032ab84  fsub 3, 2, 4
  032ab88  fsub 8, 2, 4
  032ab8c  fsub 9, 2, 4
  032ab90  fsub 10, 4, 2
  032ab94  fsub 11, 4, 2
  032ab98  fsub 4, 4, 2
  032ab9c  fmuls 5, 5, 1
  032aba0  fmuls 6, 6, 1
  032aba4  fmuls 1, 7, 1
  032aba8  fsel 3, 3, 2, 5
  032abac  fsel 7, 8, 2, 6
  032abb0  fsel 2, 9, 2, 1
  032abb4  fsel 3, 10, 3, 5
  032abb8  fsel 5, 11, 7, 6
  032abbc  fsel 1, 4, 2, 1
  032abc0  fadds 31, 31, 3
  032abc4  fadds 30, 30, 5
  032abc8  fadds 29, 29, 1
  032abcc  lis 3, 16256
  032abd0  li 4, 0
  032abd4  lis 6, 128
  032abd8  lis 7, 128
  032abdc  stw 3, 192(1)
  032abe0  stw 3, 196(1)
  032abe4  li 8, 4
  032abe8  stw 4, 200(1)
  032abec  lis 5, 128
  032abf0  stw 3, 204(1)
  032abf4  mtctr 8
  032abf8  stw 3, 208(1)
  032abfc  stw 4, 212(1)
  032ac00  stw 4, 216(1)
  032ac04  addic 3, 7, 736
  032ac08  stw 4, 220(1)
  032ac0c  lwz 6, 732(6)
  032ac10  addic 4, 1, 112
  032ac14  stw 6, 188(1)
  032ac18  stw 6, 184(1)
  032ac1c  stw 6, 180(1)
  032ac20  stw 6, 176(1)
  032ac24  lfs 1, 0(3)
  032ac28  lfs 2, 720(5)
  032ac2c  fmuls 1, 1, 2
  032ac30  stfs 1, 0(4)
  032ac34  lfs 2, 4(3)
  032ac38  lfs 3, 720(5)
  032ac3c  fadds 1, 1, 29
  032ac40  fmuls 2, 2, 3
  032ac44  stfs 2, 4(4)
  032ac48  lfs 3, 8(3)
  032ac4c  fadds 2, 2, 30
  032ac50  lfs 4, 720(5)
  032ac54  fmuls 3, 3, 4
  032ac58  fadds 4, 3, 31
  032ac5c  stfs 3, 8(4)
  032ac60  lfs 3, 12(3)
  032ac64  stfs 1, 0(4)
  032ac68  stfs 2, 4(4)
  032ac6c  addic 3, 3, 16
  032ac70  stfs 3, 12(4)
  032ac74  stfs 4, 8(4)
  032ac78  addic 4, 4, 16
  032ac7c  bdnz 0x32ac24
  032ac80  lis 3, 161
  032ac84  li 4, 0
  032ac88  addic 6, 3, 24396
  032ac8c  li 5, 0
  032ac90  addic 3, 1, 112
  032ac94  li 7, 9
  032ac98  lwz 6, 28(6)
  032ac9c  bl 0x72280
  032aca0  nop
  032aca4  ld 0, 304(1)
  032aca8  mtlr 0
  032acac  lfd 29, 264(1)
  032acb0  lfd 30, 272(1)
  032acb4  lfd 31, 280(1)
  032acb8  ld 31, 256(1)
  032acbc  addi 1, 1, 288
  032acc0  blr

M280_0032acc4:   # 0x32acc4, 0x14 bytes
  032acc4  lis 3, 128
  032acc8  lis 4, 1
  032accc  addic 3, 3, 804
  032acd0  stw 4, 72(3)
  032acd4  blr

M280_0032acd8:   # 0x32acd8, 0x80 bytes
  032acd8  lis 4, 151
  032acdc  lwz 4, -25488(4)
  032ace0  cmpwi 1, 4, 1
  032ace4  bf 6, 0x32ad1c
  032ace8  lhz 4, 178(3)
  032acec  cmpwi 4, 52
  032acf0  bf 2, 0x32ad1c
  032acf4  lhz 4, 166(3)
  032acf8  cmpwi 4, 280
  032acfc  bf 2, 0x32ad1c
  032ad00  lbz 4, 32(3)
  032ad04  cmpwi 4, 5
  032ad08  bf 2, 0x32ad1c
  032ad0c  lis 4, 151
  032ad10  li 5, 1
  032ad14  addic 4, 4, -16400
  032ad18  stb 5, 12(4)
  032ad1c  bf 6, 0x32ad54
  032ad20  lhz 4, 178(3)
  032ad24  cmpwi 4, 53
  032ad28  bf 2, 0x32ad54
  032ad2c  lhz 4, 166(3)
  032ad30  cmpwi 4, 280
  032ad34  bf 2, 0x32ad54
  032ad38  lbz 3, 32(3)
  032ad3c  cmpwi 3, 5
  032ad40  bf 2, 0x32ad54
  032ad44  lis 3, 151
  032ad48  li 4, 1
  032ad4c  addic 3, 3, -16400
  032ad50  stb 4, 13(3)
  032ad54  blr

UpdateMoby_280:   # 0x32adf8, 0x1618 bytes
  032adf8  stdu 1, -496(1)
  032adfc  mflr 0
  032ae00  std 0, 512(1)
  032ae04  stfd 18, 384(1)
  032ae08  stfd 19, 392(1)
  032ae0c  stfd 20, 400(1)
  032ae10  stfd 21, 408(1)
  032ae14  stfd 22, 416(1)
  032ae18  stfd 23, 424(1)
  032ae1c  stfd 24, 432(1)
  032ae20  stfd 25, 440(1)
  032ae24  stfd 26, 448(1)
  032ae28  stfd 27, 456(1)
  032ae2c  stfd 28, 464(1)
  032ae30  stfd 29, 472(1)
  032ae34  stfd 30, 480(1)
  032ae38  stfd 31, 488(1)
  032ae3c  std 30, 368(1)
  032ae40  lwz 30, 120(3)
  032ae44  std 31, 376(1)
  032ae48  lfs 3, 24(3)
  032ae4c  ori 31, 3, 0
  032ae50  lfs 2, 16(3)
  032ae54  cmpwi 30, 0
  032ae58  std 29, 360(1)
  032ae5c  std 28, 352(1)
  032ae60  lfs 1, 20(3)
  032ae64  bf 2, 0x32ae94
  032ae68  lis 3, 51
  032ae6c  lfs 1, 72(31)
  032ae70  lis 4, 114
  032ae74  addi 3, 3, -21160
  032ae78  lfs 2, 0(3)
  032ae7c  lfs 3, -3052(4)
  032ae80  fmuls 2, 3, 2
  032ae84  bl 0x502578
  032ae88  nop
  032ae8c  stfs 1, 72(31)
  032ae90  b 0x32c3b8
  032ae94  lis 28, 151
  032ae98  lbz 3, 32(31)
  032ae9c  addic 28, 28, -25376
  032aea0  cmpwi 1, 3, 3
  032aea4  lwz 4, 8324(28)
  032aea8  cmpwi 4, 59
  032aeac  crorc 2, 2, 6
  032aeb0  bt 2, 0x32aee0
  032aeb4  lis 3, 149
  032aeb8  li 4, 1
  032aebc  addic 3, 3, 5056
  032aec0  stb 4, 32(31)
  032aec4  lwz 3, 384(3)
  032aec8  cmpwi 3, 0
  032aecc  bt 2, 0x32c3b8
  032aed0  li 3, 4
  032aed4  bl 0x481d0
  032aed8  nop
  032aedc  b 0x32c3b8
  032aee0  cmpwi 3, 5
  032aee4  bt 2, 0x32c33c
  032aee8  cmpwi 3, 4
  032aeec  bt 2, 0x32c2f8
  032aef0  bt 6, 0x32b5c0
  032aef4  cmpwi 3, 1
  032aef8  bt 2, 0x32af14
  032aefc  cmpwi 3, 0
  032af00  bf 2, 0x32c344
  032af04  li 3, 1
  032af08  stfs 3, 60(30)
  032af0c  stb 3, 32(31)
  032af10  b 0x32c344
  032af14  lis 3, 165
  032af18  addic 5, 3, 17860
  032af1c  lhz 3, 178(31)
  032af20  extsh 4, 3
  032af24  lbzx 5, 5, 4
  032af28  cmpwi 5, 0
  032af2c  bf 2, 0x32af74
  032af30  lis 6, 151
  032af34  lis 5, 161
  032af38  srawi 4, 4, 5
  032af3c  addic 5, 5, -13028
  032af40  sldi 4, 4, 2
  032af44  lwz 6, -25488(6)
  032af48  clrlwi 3, 3, 27
  032af4c  addc 4, 4, 5
  032af50  slwi 5, 6, 8
  032af54  clrldi 4, 4, 32
  032af58  extsw 5, 5
  032af5c  li 6, 1
  032af60  slw 3, 6, 3
  032af64  lwzx 4, 4, 5
  032af68  and 3, 4, 3
  032af6c  cmpwi 3, 0
  032af70  bt 2, 0x32af9c
  032af74  lis 3, 51
  032af78  li 4, 5
  032af7c  addi 3, 3, -21160
  032af80  lfs 1, 4(3)
  032af84  lis 3, 16256
  032af88  stb 4, 32(31)
  032af8c  fsubs 1, 3, 1
  032af90  stfs 1, 24(31)
  032af94  stw 3, 0(30)
  032af98  b 0x32c344
  032af9c  lfs 3, 132(28)
  032afa0  lfs 4, 128(28)
  032afa4  fsubs 1, 1, 3
  032afa8  fsubs 2, 2, 4
  032afac  lis 3, 51
  032afb0  addi 3, 3, -21160
  032afb4  fmuls 3, 1, 1
  032afb8  lfs 4, 8(3)
  032afbc  fmadds 3, 2, 2, 3
  032afc0  fsqrts 3, 3
  032afc4  fcmpu 0, 3, 4
  032afc8  cror 6, 1, 2
  032afcc  bt 6, 0x32b3e8
  032afd0  lbz 3, 8356(28)
  032afd4  cmpwi 3, 0
  032afd8  bf 2, 0x32b3e8
  032afdc  fabs 5, 2
  032afe0  stfs 2, 220(1)
  032afe4  fabs 6, 1
  032afe8  stfs 1, 224(1)
  032afec  lis 3, 51
  032aff0  lwz 4, 220(1)
  032aff4  addi 3, 3, -21160
  032aff8  lis 5, 115
  032affc  addic 5, 5, 22784
  032b000  fsubs 1, 5, 6
  032b004  stfs 1, 228(1)
  032b008  lfs 4, 12(3)
  032b00c  lfs 1, 220(1)
  032b010  lwz 3, 224(1)
  032b014  fabs 2, 1
  032b018  lfs 1, 152(28)
  032b01c  lfs 3, 224(1)
  032b020  rlwinm 3, 3, 3, 29, 29
  032b024  lwz 6, 228(1)
  032b028  fabs 7, 3
  032b02c  lfs 3, 228(1)
  032b030  rlwimi 3, 6, 2, 30, 30
  032b034  fsub 8, 3, 4
  032b038  rlwimi 3, 4, 4, 28, 28
  032b03c  fsub 9, 3, 4
  032b040  ori 4, 5, 0
  032b044  rlwimi 4, 3, 2, 26, 28
  032b048  slwi 3, 3, 2
  032b04c  clrldi 4, 4, 32
  032b050  fsel 6, 8, 2, 6
  032b054  lfsx 2, 5, 3
  032b058  fsel 5, 9, 7, 5
  032b05c  lfs 3, 4(4)
  032b060  fcmpu 0, 6, 4
  032b064  bt 1, 0x32b06c
  032b068  b 0x32b18c
  032b06c  fsubs 7, 5, 6
  032b070  fadds 5, 5, 6
  032b074  addic 3, 1, 16
  032b078  li 7, 2
  032b07c  addic 4, 3, 280
  032b080  addic 5, 3, 296
  032b084  mtctr 7
  032b088  fdivs 5, 7, 5
  032b08c  fmuls 6, 5, 5
  032b090  stfs 5, 308(1)
  032b094  stfs 5, 300(1)
  032b098  stfs 5, 304(1)
  032b09c  stfs 5, 296(1)
  032b0a0  lfs 8, 308(1)
  032b0a4  lfs 9, 300(1)
  032b0a8  lfs 10, 304(1)
  032b0ac  fmuls 7, 6, 6
  032b0b0  fmuls 9, 9, 6
  032b0b4  fmuls 8, 8, 7
  032b0b8  fmuls 5, 7, 7
  032b0bc  fmuls 7, 10, 7
  032b0c0  stfs 9, 300(1)
  032b0c4  fmuls 6, 8, 6
  032b0c8  stfs 7, 304(1)
  032b0cc  stfs 6, 308(1)
  032b0d0  lfs 6, 280(3)
  032b0d4  fmuls 6, 6, 5
  032b0d8  stfs 6, 296(3)
  032b0dc  lfs 6, 4(4)
  032b0e0  addic 3, 3, 8
  032b0e4  addic 4, 4, 8
  032b0e8  fmuls 6, 6, 5
  032b0ec  stfs 6, 4(5)
  032b0f0  addic 5, 5, 8
  032b0f4  bdnz 0x32b0d0
  032b0f8  li 5, 4
  032b0fc  ori 3, 1, 0
  032b100  mtctr 5
  032b104  lis 4, 115
  032b108  addic 5, 3, 296
  032b10c  addic 4, 4, 22752
  032b110  ori 6, 5, 0
  032b114  lfs 5, 296(3)
  032b118  lfs 6, 0(4)
  032b11c  fmuls 5, 5, 6
  032b120  lfs 6, 4(4)
  032b124  addic 4, 4, 8
  032b128  stfs 5, 296(3)
  032b12c  lfs 5, 4(5)
  032b130  addic 3, 3, 8
  032b134  fmuls 5, 5, 6
  032b138  stfs 5, 4(5)
  032b13c  addic 5, 5, 8
  032b140  bdnz 0x32b114
  032b144  ori 3, 1, 0
  032b148  mtctr 7
  032b14c  lfs 5, 296(3)
  032b150  fadds 4, 4, 5
  032b154  lfs 5, 4(6)
  032b158  addic 3, 3, 16
  032b15c  lfs 6, 8(6)
  032b160  lfs 7, 12(6)
  032b164  addic 6, 6, 16
  032b168  fadds 4, 4, 5
  032b16c  fadds 4, 4, 6
  032b170  fadds 4, 4, 7
  032b174  bdnz 0x32b14c
  032b178  lis 3, 51
  032b17c  addi 3, 3, -21160
  032b180  lfs 5, 16(3)
  032b184  fadds 4, 4, 5
  032b188  fmadds 4, 4, 2, 3
  032b18c  fmr 2, 4
  032b190  bl 0x5026a0
  032b194  nop
  032b198  lis 3, 51
  032b19c  addi 3, 3, -21160
  032b1a0  lfs 2, 20(3)
  032b1a4  fcmpu 0, 1, 2
  032b1a8  cror 6, 1, 2
  032b1ac  bt 6, 0x32b3e8
  032b1b0  lis 3, 51
  032b1b4  lfs 1, 136(28)
  032b1b8  addi 3, 3, -21160
  032b1bc  lfs 2, 24(3)
  032b1c0  lfs 3, 24(31)
  032b1c4  fsubs 1, 1, 2
  032b1c8  lfs 4, 28(3)
  032b1cc  fsubs 1, 1, 3
  032b1d0  fabs 1, 1
  032b1d4  fcmpu 0, 1, 4
  032b1d8  cror 6, 1, 2
  032b1dc  bt 6, 0x32b3e8
  032b1e0  lwz 3, 4280(28)
  032b1e4  cmpwi 3, 8
  032b1e8  bf 2, 0x32b3e8
  032b1ec  lwz 3, 4240(28)
  032b1f0  cmpwi 3, 0
  032b1f4  bt 2, 0x32b3e8
  032b1f8  lis 3, 51
  032b1fc  lis 4, 114
  032b200  addi 3, 3, -21160
  032b204  li 5, 0
  032b208  lfs 1, 32(3)
  032b20c  lfs 2, -3056(4)
  032b210  li 3, 128
  032b214  fmuls 1, 2, 1
  032b218  fctiwz 1, 1
  032b21c  stfd 1, 328(1)
  032b220  lwz 4, 332(1)
  032b224  extsw 4, 4
  032b228  bl 0x11dfe0
  032b22c  nop
  032b230  cmpwi 3, 0
  032b234  bt 2, 0x32b3e8
  032b238  lis 3, 51
  032b23c  lis 4, 114
  032b240  addi 3, 3, -21160
  032b244  lfs 1, 36(3)
  032b248  lfs 2, -3056(4)
  032b24c  lwz 3, 20(30)
  032b250  fmuls 1, 2, 1
  032b254  fctiwz 1, 1
  032b258  stfd 1, 328(1)
  032b25c  lwz 4, 332(1)
  032b260  cmplw 3, 4
  032b264  bf 1, 0x32b3e8
  032b268  lwz 3, 24(31)
  032b26c  lwz 4, 60(30)
  032b270  cmpw 3, 4
  032b274  bf 2, 0x32b3e8
  032b278  lwz 4, 0(30)
  032b27c  lis 3, 16256
  032b280  srawi 5, 4, 31
  032b284  srwi 6, 5, 1
  032b288  xor 4, 6, 4
  032b28c  subc 4, 4, 5
  032b290  cmpw 4, 3
  032b294  bf 0, 0x32b3e8
  032b298  li 3, 0
  032b29c  lis 4, 164
  032b2a0  lis 5, 268
  032b2a4  stw 3, 20(30)
  032b2a8  lwz 4, -28500(4)
  032b2ac  stw 3, -13760(5)
  032b2b0  ori 3, 4, 0
  032b2b4  cmpwi 3, 0
  032b2b8  bt 2, 0x32b310
  032b2bc  lis 4, 51
  032b2c0  lfs 2, 16(31)
  032b2c4  lfs 3, 20(31)
  032b2c8  addi 4, 4, -21160
  032b2cc  lfs 1, 40(4)
  032b2d0  lhz 4, 52(3)
  032b2d4  rlwinm 4, 4, 0, 19, 19
  032b2d8  cmpwi 4, 0
  032b2dc  bt 2, 0x32b304
  032b2e0  lfs 4, 20(3)
  032b2e4  lfs 5, 16(3)
  032b2e8  fsubs 4, 3, 4
  032b2ec  fsubs 5, 2, 5
  032b2f0  fmuls 4, 4, 4
  032b2f4  fmadds 4, 5, 5, 4
  032b2f8  fsqrts 4, 4
  032b2fc  fcmpu 0, 4, 1
  032b300  bt 0, 0x32c344
  032b304  lwz 3, 40(3)
  032b308  cmpwi 3, 0
  032b30c  bf 2, 0x32b2d0
  032b310  li 3, 59
  032b314  li 4, 1
  032b318  bl 0xb72b0
  032b31c  nop
  032b320  lis 3, 51
  032b324  addi 29, 3, -21160
  032b328  lis 3, 114
  032b32c  li 7, 0
  032b330  li 5, 3
  032b334  lfs 1, 44(29)
  032b338  lfs 2, -3056(3)
  032b33c  lis 3, 149
  032b340  fmuls 1, 2, 1
  032b344  addic 4, 3, 5056
  032b348  addic 3, 4, 320
  032b34c  addic 4, 4, 336
  032b350  fctiwz 1, 1
  032b354  stfd 1, 328(1)
  032b358  lwz 6, 332(1)
  032b35c  extsw 6, 6
  032b360  bl 0x47f74
  032b364  nop
  032b368  lis 28, 165
  032b36c  lwz 3, 32(30)
  032b370  slwi 3, 3, 7
  032b374  lwz 4, 7128(28)
  032b378  addc 3, 4, 3
  032b37c  addic 3, 3, 112
  032b380  clrldi 3, 3, 32
  032b384  bl 0x47c08
  032b388  nop
  032b38c  lwz 3, 32(30)
  032b390  lwz 4, 7128(28)
  032b394  slwi 3, 3, 7
  032b398  addc 3, 4, 3
  032b39c  addic 3, 3, 48
  032b3a0  clrldi 3, 3, 32
  032b3a4  bl 0x47b98
  032b3a8  nop
  032b3ac  lfs 1, 40(30)
  032b3b0  lfs 2, 44(30)
  032b3b4  bl 0x47e3c
  032b3b8  nop
  032b3bc  li 3, 3
  032b3c0  stb 3, 32(31)
  032b3c4  lfs 1, 0(29)
  032b3c8  li 3, 0
  032b3cc  lfs 2, 48(30)
  032b3d0  lfs 3, 0(30)
  032b3d4  fmuls 1, 2, 1
  032b3d8  stw 3, 36(30)
  032b3dc  fmuls 1, 1, 3
  032b3e0  stfs 1, 24(30)
  032b3e4  b 0x32c344
  032b3e8  lis 3, 51
  032b3ec  lwz 5, 0(30)
  032b3f0  lis 4, 16256
  032b3f4  addi 3, 3, -21160
  032b3f8  srawi 6, 5, 31
  032b3fc  lfs 1, 48(3)
  032b400  srwi 3, 6, 1
  032b404  xor 3, 3, 5
  032b408  subc 3, 3, 6
  032b40c  cmpw 3, 4
  032b410  bf 0, 0x32b4dc
  032b414  lis 3, 51
  032b418  lwz 4, 20(30)
  032b41c  lis 5, 114
  032b420  fmr 2, 1
  032b424  addi 3, 3, -21160
  032b428  addic 4, 4, 1
  032b42c  stw 4, 20(30)
  032b430  lfs 31, 52(3)
  032b434  lfs 1, -3056(5)
  032b438  fmuls 4, 1, 31
  032b43c  lfs 1, 12(3)
  032b440  ori 3, 30, 0
  032b444  fctidz 3, 4
  032b448  fcfid 3, 3
  032b44c  frsp 3, 3
  032b450  fdivs 2, 2, 3
  032b454  bl 0x109af0
  032b458  nop
  032b45c  lwz 3, 0(30)
  032b460  cmpwi 3, 0
  032b464  bf 1, 0x32b4a8
  032b468  lis 3, 114
  032b46c  lis 4, 51
  032b470  lfs 1, -3056(3)
  032b474  addi 3, 4, -21160
  032b478  lfs 2, 48(30)
  032b47c  fmuls 5, 1, 31
  032b480  lfs 1, 72(31)
  032b484  lfs 4, 0(3)
  032b488  fmuls 2, 2, 4
  032b48c  fctidz 3, 5
  032b490  fcfid 3, 3
  032b494  frsp 3, 3
  032b498  fdivs 2, 2, 3
  032b49c  bl 0x5025e0
  032b4a0  nop
  032b4a4  stfs 1, 72(31)
  032b4a8  lis 3, 51
  032b4ac  lis 4, 114
  032b4b0  lfs 1, 24(31)
  032b4b4  addi 3, 3, -21160
  032b4b8  lfs 2, 4(3)
  032b4bc  lfs 3, -3052(4)
  032b4c0  fmadds 2, 3, 2, 1
  032b4c4  stfs 2, 24(31)
  032b4c8  lfs 1, 60(30)
  032b4cc  fcmpu 0, 2, 1
  032b4d0  bt 0, 0x32c344
  032b4d4  stfs 1, 24(31)
  032b4d8  b 0x32c344
  032b4dc  lwz 3, 56(30)
  032b4e0  cmpwi 3, 0
  032b4e4  bt 2, 0x32c344
  032b4e8  lwz 3, 52(30)
  032b4ec  cmpwi 3, -1
  032b4f0  bt 2, 0x32b588
  032b4f4  lis 3, 151
  032b4f8  lbz 5, 176(31)
  032b4fc  lis 4, 161
  032b500  addic 4, 4, -13692
  032b504  lwz 3, -25488(3)
  032b508  addc 4, 5, 4
  032b50c  slwi 3, 3, 4
  032b510  clrldi 4, 4, 32
  032b514  extsw 3, 3
  032b518  lbzx 3, 4, 3
  032b51c  cmpwi 3, 255
  032b520  bt 2, 0x32b588
  032b524  lis 4, 165
  032b528  ori 3, 30, 0
  032b52c  addic 7, 4, 13584
  032b530  li 4, 4
  032b534  addic 7, 7, 80
  032b538  ori 5, 31, 0
  032b53c  li 6, 2
  032b540  bl 0x1523d8
  032b544  nop
  032b548  lbz 3, 176(31)
  032b54c  bl 0xf1e50
  032b550  nop
  032b554  lwz 3, 52(30)
  032b558  cmpwi 3, -1
  032b55c  bt 2, 0x32b588
  032b560  lis 4, 165
  032b564  slwi 3, 3, 7
  032b568  lwz 4, 7128(4)
  032b56c  addc 3, 4, 3
  032b570  addic 4, 3, 48
  032b574  addic 5, 3, 112
  032b578  clrldi 3, 4, 32
  032b57c  clrldi 4, 5, 32
  032b580  bl 0x151e70
  032b584  nop
  032b588  lis 3, 51
  032b58c  lis 4, 114
  032b590  lfs 1, 24(31)
  032b594  addi 3, 3, -21160
  032b598  lfs 2, 4(3)
  032b59c  lfs 3, -3052(4)
  032b5a0  fnmsubs 3, 3, 2, 1
  032b5a4  stfs 3, 24(31)
  032b5a8  lfs 1, 60(30)
  032b5ac  fsubs 1, 1, 2
  032b5b0  fcmpu 0, 3, 1
  032b5b4  bt 1, 0x32c344
  032b5b8  stfs 1, 24(31)
  032b5bc  b 0x32c344
  032b5c0  lis 3, 51
  032b5c4  li 4, 0
  032b5c8  addi 3, 3, -21160
  032b5cc  lis 5, 149
  032b5d0  addic 5, 5, 5056
  032b5d4  lfs 30, 12(3)
  032b5d8  stw 4, 112(1)
  032b5dc  stw 4, 116(1)
  032b5e0  stw 4, 120(1)
  032b5e4  stw 4, 124(1)
  032b5e8  lfs 3, 344(5)
  032b5ec  stfs 3, 120(1)
  032b5f0  lfs 3, 128(28)
  032b5f4  lfs 4, 132(28)
  032b5f8  fsubs 2, 3, 2
  032b5fc  fsubs 1, 4, 1
  032b600  lis 29, 115
  032b604  addic 29, 29, 22784
  032b608  fabs 3, 2
  032b60c  fabs 4, 1
  032b610  stfs 2, 208(1)
  032b614  stfs 1, 212(1)
  032b618  fsubs 1, 3, 4
  032b61c  stfs 1, 216(1)
  032b620  lwz 3, 208(1)
  032b624  lfs 1, 208(1)
  032b628  lwz 4, 212(1)
  032b62c  lfs 2, 212(1)
  032b630  fabs 1, 1
  032b634  lwz 5, 216(1)
  032b638  rlwinm 4, 4, 3, 29, 29
  032b63c  fabs 5, 2
  032b640  lfs 2, 216(1)
  032b644  rlwimi 4, 5, 2, 30, 30
  032b648  fsub 6, 2, 30
  032b64c  fsub 7, 2, 30
  032b650  rlwimi 4, 3, 4, 28, 28
  032b654  ori 3, 29, 0
  032b658  rlwimi 3, 4, 2, 26, 28
  032b65c  slwi 4, 4, 2
  032b660  clrldi 3, 3, 32
  032b664  fsel 4, 6, 1, 4
  032b668  lfsx 2, 29, 4
  032b66c  lfs 1, 4(3)
  032b670  fsel 3, 7, 5, 3
  032b674  fcmpu 0, 4, 30
  032b678  bt 1, 0x32b684
  032b67c  fmr 31, 30
  032b680  b 0x32b7a8
  032b684  fsubs 5, 3, 4
  032b688  fadds 3, 3, 4
  032b68c  addic 3, 1, 16
  032b690  li 7, 2
  032b694  addic 4, 3, 248
  032b698  addic 5, 3, 264
  032b69c  mtctr 7
  032b6a0  fdivs 3, 5, 3
  032b6a4  fmuls 4, 3, 3
  032b6a8  stfs 3, 276(1)
  032b6ac  stfs 3, 268(1)
  032b6b0  stfs 3, 272(1)
  032b6b4  stfs 3, 264(1)
  032b6b8  lfs 6, 276(1)
  032b6bc  lfs 7, 268(1)
  032b6c0  lfs 8, 272(1)
  032b6c4  fmuls 5, 4, 4
  032b6c8  fmuls 7, 7, 4
  032b6cc  fmuls 6, 6, 5
  032b6d0  fmuls 3, 5, 5
  032b6d4  fmuls 5, 8, 5
  032b6d8  stfs 7, 268(1)
  032b6dc  fmuls 4, 6, 4
  032b6e0  stfs 5, 272(1)
  032b6e4  stfs 4, 276(1)
  032b6e8  lfs 4, 248(3)
  032b6ec  fmuls 4, 4, 3
  032b6f0  stfs 4, 264(3)
  032b6f4  lfs 4, 4(4)
  032b6f8  addic 3, 3, 8
  032b6fc  addic 4, 4, 8
  032b700  fmuls 4, 4, 3
  032b704  stfs 4, 4(5)
  032b708  addic 5, 5, 8
  032b70c  bdnz 0x32b6e8
  032b710  li 5, 4
  032b714  ori 3, 1, 0
  032b718  mtctr 5
  032b71c  lis 4, 115
  032b720  addic 5, 3, 264
  032b724  addic 4, 4, 22752
  032b728  ori 6, 5, 0
  032b72c  lfs 3, 264(3)
  032b730  lfs 4, 0(4)
  032b734  fmuls 3, 3, 4
  032b738  lfs 4, 4(4)
  032b73c  addic 4, 4, 8
  032b740  stfs 3, 264(3)
  032b744  lfs 3, 4(5)
  032b748  addic 3, 3, 8
  032b74c  fmuls 3, 3, 4
  032b750  stfs 3, 4(5)
  032b754  addic 5, 5, 8
  032b758  bdnz 0x32b72c
  032b75c  fmr 31, 30
  032b760  ori 3, 1, 0
  032b764  mtctr 7
  032b768  lfs 3, 264(3)
  032b76c  lfs 4, 4(6)
  032b770  fadds 3, 31, 3
  032b774  lfs 5, 8(6)
  032b778  addic 3, 3, 16
  032b77c  lfs 31, 12(6)
  032b780  addic 6, 6, 16
  032b784  fadds 3, 3, 4
  032b788  fadds 3, 3, 5
  032b78c  fadds 31, 3, 31
  032b790  bdnz 0x32b768
  032b794  lis 3, 51
  032b798  addi 3, 3, -21160
  032b79c  lfs 3, 16(3)
  032b7a0  fadds 31, 31, 3
  032b7a4  fmadds 31, 31, 2, 1
  032b7a8  lis 3, 51
  032b7ac  lis 4, 114
  032b7b0  addi 3, 3, -21160
  032b7b4  li 5, 0
  032b7b8  lfs 29, 32(3)
  032b7bc  lfs 1, -3056(4)
  032b7c0  li 3, 128
  032b7c4  fmuls 1, 1, 29
  032b7c8  fctiwz 1, 1
  032b7cc  stfd 1, 328(1)
  032b7d0  lwz 4, 332(1)
  032b7d4  extsw 4, 4
  032b7d8  bl 0x11dfe0
  032b7dc  nop
  032b7e0  lfs 2, 7456(28)
  032b7e4  cmpwi 3, 0
  032b7e8  lfs 3, 7460(28)
  032b7ec  bt 2, 0x32b820
  032b7f0  lis 3, 51
  032b7f4  lis 4, 114
  032b7f8  addi 3, 3, -21160
  032b7fc  lfs 1, 52(3)
  032b800  lfs 4, -3056(4)
  032b804  lwz 3, 408(28)
  032b808  fmuls 1, 4, 1
  032b80c  fctiwz 1, 1
  032b810  stfd 1, 328(1)
  032b814  lwz 4, 332(1)
  032b818  cmpw 3, 4
  032b81c  bt 1, 0x32b83c
  032b820  lis 3, 51
  032b824  lis 4, 16256
  032b828  lwz 5, 0(30)
  032b82c  addi 3, 3, -21160
  032b830  cmpw 5, 4
  032b834  lfs 28, 48(3)
  032b838  bf 2, 0x32b9d0
  032b83c  li 3, 0
  032b840  li 4, 1
  032b844  bl 0xb72b0
  032b848  nop
  032b84c  lwz 3, 56(30)
  032b850  cmpwi 3, 0
  032b854  bt 2, 0x32b864
  032b858  li 3, 1
  032b85c  stb 3, 32(31)
  032b860  b 0x32b9c0
  032b864  lis 3, 16256
  032b868  lwz 4, 0(30)
  032b86c  cmpw 4, 3
  032b870  bf 2, 0x32b9c0
  032b874  lis 4, 165
  032b878  ori 3, 30, 0
  032b87c  addic 29, 4, 13584
  032b880  li 4, 4
  032b884  addic 29, 29, 80
  032b888  ori 5, 31, 0
  032b88c  li 6, 2
  032b890  ori 7, 29, 0
  032b894  bl 0x1523d8
  032b898  nop
  032b89c  li 4, 4
  032b8a0  lhz 3, 178(31)
  032b8a4  lis 7, 151
  032b8a8  extsh 6, 3
  032b8ac  lis 5, 161
  032b8b0  stb 4, 32(31)
  032b8b4  srawi 4, 6, 5
  032b8b8  addic 5, 5, -13028
  032b8bc  sldi 4, 4, 2
  032b8c0  lwz 7, -25488(7)
  032b8c4  extsh 6, 3
  032b8c8  addc 4, 4, 5
  032b8cc  slwi 7, 7, 8
  032b8d0  clrldi 4, 4, 32
  032b8d4  extsw 7, 7
  032b8d8  lis 5, 165
  032b8dc  clrlwi 8, 3, 27
  032b8e0  srawi 6, 6, 5
  032b8e4  li 9, 1
  032b8e8  addic 10, 5, 19920
  032b8ec  sldi 6, 6, 2
  032b8f0  lwzx 5, 4, 7
  032b8f4  slw 8, 9, 8
  032b8f8  clrlwi 3, 3, 27
  032b8fc  or 5, 5, 8
  032b900  slw 9, 9, 3
  032b904  lwzx 8, 10, 6
  032b908  li 3, 0
  032b90c  stwx 5, 4, 7
  032b910  or 7, 8, 9
  032b914  li 4, 0
  032b918  ori 5, 31, 0
  032b91c  stwx 7, 10, 6
  032b920  bl 0x15d12c
  032b924  nop
  032b928  lwz 3, 52(30)
  032b92c  cmpwi 3, -1
  032b930  bt 2, 0x32b9c0
  032b934  lis 3, 151
  032b938  lbz 5, 176(31)
  032b93c  lis 4, 161
  032b940  addic 4, 4, -13692
  032b944  lwz 3, -25488(3)
  032b948  addc 4, 5, 4
  032b94c  slwi 3, 3, 4
  032b950  clrldi 4, 4, 32
  032b954  extsw 3, 3
  032b958  lbzx 3, 4, 3
  032b95c  cmpwi 3, 255
  032b960  bt 2, 0x32b9c0
  032b964  ori 3, 30, 0
  032b968  li 4, 4
  032b96c  ori 5, 31, 0
  032b970  li 6, 2
  032b974  ori 7, 29, 0
  032b978  bl 0x1523d8
  032b97c  nop
  032b980  lbz 3, 176(31)
  032b984  bl 0xf1e50
  032b988  nop
  032b98c  lwz 31, 52(30)
  032b990  cmpwi 31, -1
  032b994  bt 2, 0x32b9c0
  032b998  lis 3, 165
  032b99c  slwi 4, 31, 7
  032b9a0  lwz 3, 7128(3)
  032b9a4  addc 3, 3, 4
  032b9a8  addic 4, 3, 48
  032b9ac  addic 5, 3, 112
  032b9b0  clrldi 3, 4, 32
  032b9b4  clrldi 4, 5, 32
  032b9b8  bl 0x151e70
  032b9bc  nop
  032b9c0  li 3, 4
  032b9c4  bl 0x481d0
  032b9c8  nop
  032b9cc  b 0x32c3b8
  032b9d0  fmuls 1, 3, 3
  032b9d4  fmuls 4, 2, 2
  032b9d8  fmr 26, 2
  032b9dc  fmr 8, 3
  032b9e0  fneg 1, 1
  032b9e4  fneg 4, 4
  032b9e8  fneg 1, 1
  032b9ec  fneg 4, 4
  032b9f0  fadds 1, 1, 4
  032b9f4  fsqrts 4, 1
  032b9f8  fcmpu 0, 4, 28
  032b9fc  cror 6, 0, 2
  032ba00  bt 6, 0x32ba50
  032ba04  frsqrte 4, 1
  032ba08  lis 3, 51
  032ba0c  addi 3, 3, -21160
  032ba10  lfs 5, 4(3)
  032ba14  fmuls 6, 1, 4
  032ba18  fmuls 7, 5, 4
  032ba1c  fnmsubs 6, 6, 4, 28
  032ba20  fmadds 4, 6, 7, 4
  032ba24  fmuls 6, 1, 4
  032ba28  fmuls 7, 5, 4
  032ba2c  fnmsubs 6, 6, 4, 28
  032ba30  fmadds 4, 6, 7, 4
  032ba34  fmuls 1, 1, 4
  032ba38  fmuls 5, 5, 4
  032ba3c  fnmsubs 1, 1, 4, 28
  032ba40  fmadds 27, 1, 5, 4
  032ba44  fmuls 8, 3, 27
  032ba48  fmuls 26, 2, 27
  032ba4c  fmuls 27, 1, 27
  032ba50  fneg 25, 8
  032ba54  addic 3, 1, 128
  032ba58  addic 4, 1, 112
  032ba5c  bl 0x500ca4
  032ba60  nop
  032ba64  lfs 1, 144(1)
  032ba68  lfs 2, 128(1)
  032ba6c  fmuls 1, 26, 1
  032ba70  lfs 3, 160(1)
  032ba74  lfs 4, 176(1)
  032ba78  fneg 1, 1
  032ba7c  fmadds 1, 2, 25, 1
  032ba80  fmadds 1, 3, 27, 1
  032ba84  lfs 3, 148(1)
  032ba88  lis 3, 51
  032ba8c  lfs 5, 132(1)
  032ba90  fmuls 3, 26, 3
  032ba94  addi 3, 3, -21160
  032ba98  lfs 6, 164(1)
  032ba9c  lwz 4, 8320(28)
  032baa0  fmadds 1, 4, 2, 1
  032baa4  lfs 7, 56(3)
  032baa8  lfs 26, 60(3)
  032baac  lfs 8, 72(4)
  032bab0  fneg 3, 3
  032bab4  lis 4, 114
  032bab8  fmadds 3, 5, 25, 3
  032babc  fsubs 5, 26, 8
  032bac0  lfs 25, 64(3)
  032bac4  lfs 24, 68(3)
  032bac8  lfs 23, 72(3)
  032bacc  fmadds 3, 6, 27, 3
  032bad0  fmr 27, 7
  032bad4  fsub 7, 8, 5
  032bad8  fsubs 6, 25, 8
  032badc  fadds 9, 8, 27
  032bae0  fsel 5, 7, 5, 8
  032bae4  fsubs 7, 26, 9
  032bae8  fsub 10, 6, 5
  032baec  fsubs 8, 25, 9
  032baf0  fsub 11, 9, 7
  032baf4  fsel 5, 10, 6, 5
  032baf8  lfs 10, 180(1)
  032bafc  lfs 22, 76(3)
  032bb00  fmadds 2, 10, 2, 3
  032bb04  lfs 21, 80(3)
  032bb08  lfs 0, 28(30)
  032bb0c  fsel 6, 11, 7, 9
  032bb10  fmuls 7, 5, 5
  032bb14  lfs 12, 84(3)
  032bb18  fsub 9, 8, 6
  032bb1c  fmuls 4, 7, 5
  032bb20  fsel 3, 9, 8, 6
  032bb24  fmuls 6, 7, 4
  032bb28  fmadds 4, 4, 24, 5
  032bb2c  fmuls 5, 3, 3
  032bb30  fmuls 8, 7, 6
  032bb34  fmadds 4, 6, 23, 4
  032bb38  fmuls 6, 5, 3
  032bb3c  fmuls 9, 7, 8
  032bb40  fmadds 4, 8, 22, 4
  032bb44  fmuls 7, 5, 6
  032bb48  fmadds 3, 6, 24, 3
  032bb4c  fmadds 9, 9, 21, 4
  032bb50  fmuls 4, 5, 7
  032bb54  fmadds 3, 7, 23, 3
  032bb58  fmuls 2, 9, 2
  032bb5c  fmuls 8, 5, 4
  032bb60  fmadds 3, 4, 22, 3
  032bb64  fmadds 8, 8, 21, 3
  032bb68  lfs 3, 88(3)
  032bb6c  lfs 5, -3048(4)
  032bb70  fmuls 12, 5, 12
  032bb74  lis 4, 114
  032bb78  fmadds 1, 8, 1, 2
  032bb7c  fmuls 2, 5, 3
  032bb80  lfs 10, -3056(4)
  032bb84  lis 4, 114
  032bb88  fsubs 1, 1, 0
  032bb8c  fsub 3, 12, 1
  032bb90  fsel 1, 3, 1, 12
  032bb94  fsub 3, 1, 2
  032bb98  fsel 1, 3, 1, 2
  032bb9c  fadds 0, 0, 1
  032bba0  stfs 0, 28(30)
  032bba4  lfs 11, -3052(4)
  032bba8  lfs 20, 92(3)
  032bbac  fmuls 13, 11, 20
  032bbb0  fcmpu 0, 0, 13
  032bbb4  cror 6, 0, 2
  032bbb8  bt 6, 0x32bbc4
  032bbbc  fmr 0, 13
  032bbc0  stfs 13, 28(30)
  032bbc4  fcmpu 0, 0, 30
  032bbc8  cror 6, 1, 2
  032bbcc  bt 6, 0x32bbdc
  032bbd0  li 3, 0
  032bbd4  fmr 0, 30
  032bbd8  stw 3, 28(30)
  032bbdc  lis 3, 51
  032bbe0  fabs 1, 0
  032bbe4  addi 3, 3, -21160
  032bbe8  lfs 2, 96(3)
  032bbec  fmuls 2, 12, 2
  032bbf0  fmr 12, 0
  032bbf4  fcmpu 0, 1, 2
  032bbf8  cror 6, 1, 2
  032bbfc  bt 6, 0x32bc0c
  032bc00  li 3, 0
  032bc04  fmr 12, 30
  032bc08  stw 3, 28(30)
  032bc0c  fmuls 1, 9, 9
  032bc10  lwz 3, 2712(28)
  032bc14  rlwinm 3, 3, 0, 30, 30
  032bc18  fmadds 1, 8, 8, 1
  032bc1c  cmpwi 3, 0
  032bc20  fsqrts 1, 1
  032bc24  fdivs 2, 12, 1
  032bc28  fsub 3, 30, 1
  032bc2c  fsub 4, 30, 1
  032bc30  fsub 19, 1, 30
  032bc34  fsub 18, 1, 30
  032bc38  fmuls 1, 9, 2
  032bc3c  fmuls 2, 8, 2
  032bc40  fsel 3, 3, 30, 1
  032bc44  fsel 4, 4, 30, 2
  032bc48  fsel 19, 19, 3, 1
  032bc4c  fsel 18, 18, 4, 2
  032bc50  bt 2, 0x32bc94
  032bc54  lwz 3, 8320(28)
  032bc58  lbz 3, 83(3)
  032bc5c  cmpwi 3, 68
  032bc60  bf 2, 0x32bc94
  032bc64  fmuls 1, 10, 29
  032bc68  li 3, 63
  032bc6c  li 4, 0
  032bc70  fctidz 1, 1
  032bc74  fcfid 1, 1
  032bc78  frsp 1, 1
  032bc7c  bl 0x85300
  032bc80  nop
  032bc84  lis 3, 114
  032bc88  lis 4, 114
  032bc8c  lfs 11, -3052(3)
  032bc90  lfs 10, -3056(4)
  032bc94  lwz 3, 8320(28)
  032bc98  lbz 4, 83(3)
  032bc9c  cmpwi 4, 68
  032bca0  bt 2, 0x32bdf0
  032bca4  lwz 4, 2716(28)
  032bca8  cmpwi 4, 0
  032bcac  bf 2, 0x32bdf0
  032bcb0  lbz 3, 82(3)
  032bcb4  cmpwi 6, 3, 64
  032bcb8  cmpwi 1, 3, 63
  032bcbc  cmpwi 7, 3, 65
  032bcc0  bf 26, 0x32bd04
  032bcc4  lwz 3, 28(30)
  032bcc8  clrlwi 3, 3, 1
  032bccc  cmpwi 3, 0
  032bcd0  bf 2, 0x32bd04
  032bcd4  lis 3, 51
  032bcd8  addi 3, 3, -21160
  032bcdc  li 4, 0
  032bce0  lfs 1, 100(3)
  032bce4  li 3, 63
  032bce8  fmuls 1, 10, 1
  032bcec  fctidz 1, 1
  032bcf0  fcfid 1, 1
  032bcf4  frsp 1, 1
  032bcf8  bl 0x85300
  032bcfc  nop
  032bd00  b 0x32bdf0
  032bd04  bf 6, 0x32bd44
  032bd08  lwz 3, 28(30)
  032bd0c  cmpwi 3, 0
  032bd10  bf 1, 0x32bdf0
  032bd14  lis 3, 51
  032bd18  addi 3, 3, -21160
  032bd1c  li 4, 0
  032bd20  lfs 1, 100(3)
  032bd24  li 3, 64
  032bd28  fmuls 1, 10, 1
  032bd2c  fctidz 1, 1
  032bd30  fcfid 1, 1
  032bd34  frsp 1, 1
  032bd38  bl 0x85300
  032bd3c  nop
  032bd40  b 0x32bdf0
  032bd44  bf 26, 0x32bd9c
  032bd48  fmuls 1, 11, 20
  032bd4c  lis 3, 51
  032bd50  addi 3, 3, -21160
  032bd54  lfs 2, 104(3)
  032bd58  lfs 3, 28(30)
  032bd5c  fmuls 1, 1, 2
  032bd60  fcmpu 0, 3, 1
  032bd64  cror 6, 0, 2
  032bd68  bt 6, 0x32bd9c
  032bd6c  lis 3, 51
  032bd70  addi 3, 3, -21160
  032bd74  li 4, 0
  032bd78  lfs 1, 100(3)
  032bd7c  li 3, 65
  032bd80  fmuls 1, 10, 1
  032bd84  fctidz 1, 1
  032bd88  fcfid 1, 1
  032bd8c  frsp 1, 1
  032bd90  bl 0x85300
  032bd94  nop
  032bd98  b 0x32bdf0
  032bd9c  bf 30, 0x32bdf0
  032bda0  fmuls 1, 11, 20
  032bda4  lis 3, 51
  032bda8  addi 3, 3, -21160
  032bdac  lfs 2, 108(3)
  032bdb0  lfs 3, 28(30)
  032bdb4  fmuls 1, 1, 2
  032bdb8  fcmpu 0, 3, 1
  032bdbc  cror 6, 1, 2
  032bdc0  bt 6, 0x32bdf0
  032bdc4  lis 3, 51
  032bdc8  addi 3, 3, -21160
  032bdcc  li 4, 0
  032bdd0  lfs 1, 112(3)
  032bdd4  li 3, 64
  032bdd8  fmuls 1, 10, 1
  032bddc  fctidz 1, 1
  032bde0  fcfid 1, 1
  032bde4  frsp 1, 1
  032bde8  bl 0x85300
  032bdec  nop
  032bdf0  lfs 1, 128(28)
  032bdf4  lfs 2, 132(28)
  032bdf8  fadds 18, 1, 18
  032bdfc  fadds 19, 2, 19
  032be00  stfs 18, 128(28)
  032be04  stfs 19, 132(28)
  032be08  lfs 3, 16(31)
  032be0c  lfs 4, 20(31)
  032be10  fsubs 1, 18, 3
  032be14  fsubs 2, 19, 4
  032be18  fabs 5, 1
  032be1c  fabs 6, 2
  032be20  stfs 1, 196(1)
  032be24  stfs 2, 200(1)
  032be28  lfs 29, 136(28)
  032be2c  fsubs 1, 5, 6
  032be30  stfs 1, 204(1)
  032be34  lwz 3, 196(1)
  032be38  lfs 1, 196(1)
  032be3c  lwz 4, 200(1)
  032be40  lfs 2, 200(1)
  032be44  lwz 5, 204(1)
  032be48  rlwinm 4, 4, 3, 29, 29
  032be4c  fabs 7, 2
  032be50  lfs 2, 204(1)
  032be54  fabs 1, 1
  032be58  rlwimi 4, 5, 2, 30, 30
  032be5c  fsub 8, 2, 30
  032be60  fsub 9, 2, 30
  032be64  rlwimi 4, 3, 4, 28, 28
  032be68  ori 3, 29, 0
  032be6c  rlwimi 3, 4, 2, 26, 28
  032be70  slwi 4, 4, 2
  032be74  clrldi 3, 3, 32
  032be78  fsel 6, 8, 1, 6
  032be7c  lfsx 1, 29, 4
  032be80  fsel 5, 9, 7, 5
  032be84  lfs 2, 4(3)
  032be88  fcmpu 0, 6, 30
  032be8c  bt 1, 0x32be98
  032be90  fmr 20, 30
  032be94  b 0x32bfbc
  032be98  fsubs 7, 5, 6
  032be9c  fadds 5, 5, 6
  032bea0  addic 3, 1, 16
  032bea4  li 7, 2
  032bea8  addic 5, 3, 232
  032beac  addic 4, 3, 216
  032beb0  mtctr 7
  032beb4  fdivs 5, 7, 5
  032beb8  fmuls 6, 5, 5
  032bebc  stfs 5, 244(1)
  032bec0  stfs 5, 236(1)
  032bec4  stfs 5, 240(1)
  032bec8  stfs 5, 232(1)
  032becc  lfs 8, 244(1)
  032bed0  lfs 9, 236(1)
  032bed4  lfs 10, 240(1)
  032bed8  fmuls 7, 6, 6
  032bedc  fmuls 9, 9, 6
  032bee0  fmuls 8, 8, 7
  032bee4  fmuls 5, 7, 7
  032bee8  fmuls 7, 10, 7
  032beec  stfs 9, 236(1)
  032bef0  fmuls 6, 8, 6
  032bef4  stfs 7, 240(1)
  032bef8  stfs 6, 244(1)
  032befc  lfs 6, 216(3)
  032bf00  fmuls 6, 6, 5
  032bf04  stfs 6, 232(3)
  032bf08  lfs 6, 4(4)
  032bf0c  addic 4, 4, 8
  032bf10  fmuls 6, 6, 5
  032bf14  addic 3, 3, 8
  032bf18  stfs 6, 4(5)
  032bf1c  addic 5, 5, 8
  032bf20  bdnz 0x32befc
  032bf24  li 5, 4
  032bf28  ori 3, 1, 0
  032bf2c  mtctr 5
  032bf30  lis 4, 115
  032bf34  addic 5, 3, 232
  032bf38  addic 4, 4, 22752
  032bf3c  ori 6, 5, 0
  032bf40  lfs 5, 232(3)
  032bf44  lfs 6, 0(4)
  032bf48  fmuls 5, 5, 6
  032bf4c  lfs 6, 4(4)
  032bf50  addic 4, 4, 8
  032bf54  stfs 5, 232(3)
  032bf58  lfs 5, 4(5)
  032bf5c  addic 3, 3, 8
  032bf60  fmuls 5, 5, 6
  032bf64  stfs 5, 4(5)
  032bf68  addic 5, 5, 8
  032bf6c  bdnz 0x32bf40
  032bf70  ori 3, 1, 0
  032bf74  fmr 20, 30
  032bf78  mtctr 7
  032bf7c  lfs 5, 232(3)
  032bf80  lfs 6, 4(6)
  032bf84  fadds 5, 20, 5
  032bf88  lfs 7, 8(6)
  032bf8c  lfs 20, 12(6)
  032bf90  addic 3, 3, 16
  032bf94  addic 6, 6, 16
  032bf98  fadds 5, 5, 6
  032bf9c  fadds 5, 5, 7
  032bfa0  fadds 20, 5, 20
  032bfa4  bdnz 0x32bf7c
  032bfa8  lis 3, 51
  032bfac  addi 3, 3, -21160
  032bfb0  lfs 5, 16(3)
  032bfb4  fadds 20, 20, 5
  032bfb8  fmadds 20, 20, 1, 2
  032bfbc  fadds 1, 20, 27
  032bfc0  fsubs 2, 26, 20
  032bfc4  fsubs 5, 25, 20
  032bfc8  lis 3, 51
  032bfcc  addi 4, 3, -21160
  032bfd0  fsubs 6, 26, 1
  032bfd4  fsub 7, 20, 2
  032bfd8  fsubs 8, 25, 1
  032bfdc  lis 6, 114
  032bfe0  fsub 9, 1, 6
  032bfe4  fsel 2, 7, 2, 20
  032bfe8  lis 7, 114
  032bfec  lis 29, 268
  032bff0  fsel 1, 9, 6, 1
  032bff4  fsub 6, 5, 2
  032bff8  addic 3, 1, 192
  032bffc  addic 5, 29, -13760
  032c000  fsub 7, 8, 1
  032c004  fsel 2, 6, 5, 2
  032c008  fsel 1, 7, 8, 1
  032c00c  fmuls 5, 2, 2
  032c010  lfs 8, 116(4)
  032c014  fmuls 6, 1, 1
  032c018  fmuls 7, 5, 2
  032c01c  fmuls 9, 6, 1
  032c020  fmuls 10, 5, 7
  032c024  fmadds 2, 7, 24, 2
  032c028  fmuls 7, 6, 9
  032c02c  fmadds 1, 9, 24, 1
  032c030  fmuls 9, 5, 10
  032c034  fmadds 2, 10, 23, 2
  032c038  fmuls 10, 6, 7
  032c03c  fmadds 1, 7, 23, 1
  032c040  fmuls 5, 5, 9
  032c044  fmadds 2, 9, 22, 2
  032c048  fmuls 6, 6, 10
  032c04c  fmadds 1, 10, 22, 1
  032c050  fmadds 2, 5, 21, 2
  032c054  fmadds 1, 6, 21, 1
  032c058  fmadds 2, 2, 8, 4
  032c05c  fmadds 1, 1, 8, 3
  032c060  fsubs 27, 2, 19
  032c064  lfs 3, -3060(6)
  032c068  lfs 4, -3052(7)
  032c06c  fsubs 26, 1, 18
  032c070  fmuls 1, 27, 27
  032c074  fmadds 1, 26, 26, 1
  032c078  fsqrts 25, 1
  032c07c  fmr 1, 30
  032c080  fneg 2, 25
  032c084  stfs 2, 192(1)
  032c088  lfs 2, 120(4)
  032c08c  lfs 5, 24(4)
  032c090  lfs 6, 124(4)
  032c094  fmuls 2, 3, 2
  032c098  fmuls 3, 3, 5
  032c09c  fmuls 4, 4, 6
  032c0a0  bl 0x109b40
  032c0a4  nop
  032c0a8  lfs 1, -13760(29)
  032c0ac  fdivs 1, 1, 25
  032c0b0  lfs 2, 128(28)
  032c0b4  lfs 3, 132(28)
  032c0b8  lis 3, 151
  032c0bc  stfs 29, 136(28)
  032c0c0  addic 3, 3, -16268
  032c0c4  fsub 4, 30, 25
  032c0c8  fsub 5, 30, 25
  032c0cc  fsub 6, 25, 30
  032c0d0  fsub 7, 25, 30
  032c0d4  lbz 3, 5(3)
  032c0d8  cmpwi 3, 0
  032c0dc  fmuls 8, 1, 27
  032c0e0  fmuls 1, 1, 26
  032c0e4  fsel 4, 4, 30, 8
  032c0e8  fsel 5, 5, 30, 1
  032c0ec  fsel 4, 6, 4, 8
  032c0f0  fsel 1, 7, 5, 1
  032c0f4  fadds 3, 3, 4
  032c0f8  fadds 1, 2, 1
  032c0fc  stfs 3, 132(28)
  032c100  stfs 1, 128(28)
  032c104  bt 2, 0x32c124
  032c108  lis 3, 51
  032c10c  fmr 2, 20
  032c110  addi 3, 3, -21160
  032c114  lfs 1, 128(3)
  032c118  bl 0x502578
  032c11c  nop
  032c120  b 0x32c13c
  032c124  lis 3, 51
  032c128  fmr 2, 20
  032c12c  addi 3, 3, -21160
  032c130  lfs 1, 20(3)
  032c134  bl 0x502578
  032c138  nop
  032c13c  lis 3, 51
  032c140  stfs 1, 384(28)
  032c144  lis 4, 114
  032c148  addi 29, 3, -21160
  032c14c  addic 3, 28, 152
  032c150  li 6, 0
  032c154  lfs 27, 0(29)
  032c158  lfs 2, -3052(4)
  032c15c  fmuls 2, 2, 27
  032c160  bl 0x109ec0
  032c164  nop
  032c168  lis 3, 114
  032c16c  lfs 1, 132(29)
  032c170  lfs 2, 36(30)
  032c174  li 4, 0
  032c178  lfs 3, -3048(3)
  032c17c  fmadds 1, 3, 1, 2
  032c180  addic 3, 28, 128
  032c184  stfs 1, 36(30)
  032c188  lfs 29, 136(29)
  032c18c  lfs 2, 136(28)
  032c190  fsubs 1, 1, 29
  032c194  fsubs 1, 2, 1
  032c198  stfs 1, 136(28)
  032c19c  lfs 1, 4(29)
  032c1a0  bl 0xffb70
  032c1a4  nop
  032c1a8  lfs 2, 136(28)
  032c1ac  fsubs 2, 2, 29
  032c1b0  fcmpu 0, 2, 1
  032c1b4  stfs 2, 136(28)
  032c1b8  cror 6, 1, 2
  032c1bc  bt 6, 0x32c1cc
  032c1c0  li 3, 0
  032c1c4  stfs 1, 136(28)
  032c1c8  stw 3, 36(30)
  032c1cc  lwz 3, 8320(28)
  032c1d0  lbz 3, 83(3)
  032c1d4  cmpwi 3, 68
  032c1d8  bt 2, 0x32c28c
  032c1dc  lis 3, 51
  032c1e0  fmr 2, 20
  032c1e4  addi 29, 3, -21160
  032c1e8  lfs 1, 140(29)
  032c1ec  bl 0x502578
  032c1f0  nop
  032c1f4  fmr 29, 1
  032c1f8  lis 4, 114
  032c1fc  lfs 2, 144(29)
  032c200  addic 3, 31, 72
  032c204  li 6, 0
  032c208  lfs 3, -3052(4)
  032c20c  fmuls 2, 3, 2
  032c210  bl 0x109ec0
  032c214  nop
  032c218  lfs 1, 72(31)
  032c21c  fmr 2, 29
  032c220  bl 0x5025e0
  032c224  nop
  032c228  lfs 26, 148(29)
  032c22c  fcmpu 0, 1, 26
  032c230  cror 6, 0, 2
  032c234  bt 6, 0x32c250
  032c238  lfs 1, 72(31)
  032c23c  fmr 2, 26
  032c240  bl 0x5025e0
  032c244  nop
  032c248  stfs 1, 72(31)
  032c24c  b 0x32c28c
  032c250  fmr 2, 29
  032c254  lfs 1, 72(31)
  032c258  bl 0x5025e0
  032c25c  nop
  032c260  lis 3, 51
  032c264  addi 3, 3, -21160
  032c268  lfs 2, 152(3)
  032c26c  fcmpu 0, 1, 2
  032c270  cror 6, 1, 2
  032c274  bt 6, 0x32c28c
  032c278  lfs 1, 72(31)
  032c27c  fmr 2, 26
  032c280  bl 0x502578
  032c284  nop
  032c288  stfs 1, 72(31)
  032c28c  fmr 1, 20
  032c290  fmr 2, 31
  032c294  bl 0x5026a0
  032c298  nop
  032c29c  lfs 2, 24(30)
  032c2a0  lfs 3, 48(30)
  032c2a4  fadds 2, 2, 1
  032c2a8  fmuls 1, 3, 27
  032c2ac  fdivs 1, 2, 1
  032c2b0  stfs 2, 24(30)
  032c2b4  fcmpu 0, 1, 28
  032c2b8  stfs 1, 0(30)
  032c2bc  cror 6, 0, 2
  032c2c0  bt 6, 0x32c2d0
  032c2c4  lis 3, 16256
  032c2c8  fmr 1, 28
  032c2cc  stw 3, 0(30)
  032c2d0  fcmpu 0, 1, 30
  032c2d4  cror 6, 1, 2
  032c2d8  bt 6, 0x32c2e4
  032c2dc  li 3, 0
  032c2e0  stw 3, 0(30)
  032c2e4  addic 3, 28, 224
  032c2e8  li 4, 144
  032c2ec  bl 0x500250
  032c2f0  nop
  032c2f4  b 0x32c344
  032c2f8  lis 3, 51
  032c2fc  lis 4, 114
  032c300  addi 3, 3, -21160
  032c304  lfs 1, 4(3)
  032c308  lfs 2, -3052(4)
  032c30c  fnmsubs 2, 2, 1, 3
  032c310  stfs 2, 24(31)
  032c314  lfs 3, 60(30)
  032c318  fsubs 3, 3, 1
  032c31c  fcmpu 0, 2, 3
  032c320  bt 1, 0x32c344
  032c324  li 3, 5
  032c328  stfs 3, 24(31)
  032c32c  lis 4, 16256
  032c330  stb 3, 32(31)
  032c334  stw 4, 0(30)
  032c338  b 0x32c344
  032c33c  lis 3, 16256
  032c340  stw 3, 0(30)
  032c344  lis 4, 151
  032c348  lis 3, 151
  032c34c  addic 3, 3, -16400
  032c350  lwz 4, -25488(4)
  032c354  cmpwi 1, 4, 1
  032c358  bf 6, 0x32c388
  032c35c  lhz 4, 178(31)
  032c360  cmpwi 4, 52
  032c364  bf 2, 0x32c388
  032c368  lhz 4, 166(31)
  032c36c  cmpwi 4, 280
  032c370  bf 2, 0x32c388
  032c374  lbz 4, 32(31)
  032c378  cmpwi 4, 5
  032c37c  bf 2, 0x32c388
  032c380  li 4, 1
  032c384  stb 4, 12(3)
  032c388  bf 6, 0x32c3b8
  032c38c  lhz 4, 178(31)
  032c390  cmpwi 4, 53
  032c394  bf 2, 0x32c3b8
  032c398  lhz 4, 166(31)
  032c39c  cmpwi 4, 280
  032c3a0  bf 2, 0x32c3b8
  032c3a4  lbz 4, 32(31)
  032c3a8  cmpwi 4, 5
  032c3ac  bf 2, 0x32c3b8
  032c3b0  li 4, 1
  032c3b4  stb 4, 13(3)
  032c3b8  ld 0, 512(1)
  032c3bc  mtlr 0
  032c3c0  lfd 18, 384(1)
  032c3c4  lfd 19, 392(1)
  032c3c8  lfd 20, 400(1)
  032c3cc  lfd 21, 408(1)
  032c3d0  lfd 22, 416(1)
  032c3d4  lfd 23, 424(1)
  032c3d8  lfd 24, 432(1)
  032c3dc  lfd 25, 440(1)
  032c3e0  lfd 26, 448(1)
  032c3e4  lfd 27, 456(1)
  032c3e8  lfd 28, 464(1)
  032c3ec  lfd 29, 472(1)
  032c3f0  lfd 30, 480(1)
  032c3f4  lfd 31, 488(1)
  032c3f8  ld 28, 352(1)
  032c3fc  ld 29, 360(1)
  032c400  ld 30, 368(1)
  032c404  ld 31, 376(1)
  032c408  addi 1, 1, 496
  032c40c  blr
