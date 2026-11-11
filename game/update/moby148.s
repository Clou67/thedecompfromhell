# game/update/moby148.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_148:   # 0x28bf80, 0xc00 bytes
  028bf80  stdu 1, -688(1)
  028bf84  mflr 0
  028bf88  std 0, 704(1)
  028bf8c  stfd 14, 544(1)
  028bf90  stfd 15, 552(1)
  028bf94  stfd 16, 560(1)
  028bf98  stfd 17, 568(1)
  028bf9c  stfd 18, 576(1)
  028bfa0  stfd 19, 584(1)
  028bfa4  stfd 20, 592(1)
  028bfa8  stfd 21, 600(1)
  028bfac  stfd 22, 608(1)
  028bfb0  stfd 23, 616(1)
  028bfb4  stfd 24, 624(1)
  028bfb8  stfd 25, 632(1)
  028bfbc  stfd 26, 640(1)
  028bfc0  stfd 27, 648(1)
  028bfc4  stfd 28, 656(1)
  028bfc8  stfd 29, 664(1)
  028bfcc  stfd 30, 672(1)
  028bfd0  stfd 31, 680(1)
  028bfd4  std 31, 536(1)
  028bfd8  lis 4, 151
  028bfdc  ori 31, 3, 0
  028bfe0  addic 4, 4, -25376
  028bfe4  lbz 3, 8356(4)
  028bfe8  std 30, 528(1)
  028bfec  std 29, 520(1)
  028bff0  std 28, 512(1)
  028bff4  std 27, 504(1)
  028bff8  std 26, 496(1)
  028bffc  std 25, 488(1)
  028c000  std 24, 480(1)
  028c004  std 23, 472(1)
  028c008  std 22, 464(1)
  028c00c  std 21, 456(1)
  028c010  std 20, 448(1)
  028c014  cmpwi 3, 2
  028c018  bt 2, 0x28c028
  028c01c  lbz 3, 32(31)
  028c020  cmpwi 3, 1
  028c024  bt 2, 0x28caf8
  028c028  li 4, 0
  028c02c  lis 5, 161
  028c030  ori 28, 4, 0
  028c034  addic 5, 5, 19456
  028c038  ori 3, 28, 0
  028c03c  lwz 6, 52(5)
  028c040  cmpw 6, 31
  028c044  bf 2, 0x28c060
  028c048  lwz 6, 36(5)
  028c04c  rlwinm 6, 6, 0, 12, 12
  028c050  cmpwi 6, 0
  028c054  bt 2, 0x28c060
  028c058  ori 3, 5, 0
  028c05c  b 0x28c070
  028c060  addic 4, 4, 1
  028c064  addic 5, 5, 64
  028c068  cmpwi 4, 64
  028c06c  bt 0, 0x28c03c
  028c070  cmpwi 3, 0
  028c074  li 4, 255
  028c078  bt 2, 0x28ca4c
  028c07c  li 5, 200
  028c080  li 6, 205
  028c084  li 7, 206
  028c088  li 8, 210
  028c08c  stw 5, 396(1)
  028c090  stw 6, 400(1)
  028c094  stw 7, 404(1)
  028c098  stw 8, 408(1)
  028c09c  stb 4, 164(31)
  028c0a0  lfs 1, 20(3)
  028c0a4  lfs 3, 16(3)
  028c0a8  fmuls 1, 1, 1
  028c0ac  lfs 2, 24(3)
  028c0b0  lis 4, 41
  028c0b4  lis 29, 114
  028c0b8  addi 4, 4, -16632
  028c0bc  fmadds 1, 3, 3, 1
  028c0c0  lfs 30, 4(4)
  028c0c4  lfs 5, 0(4)
  028c0c8  lfs 4, -3052(29)
  028c0cc  fmadds 2, 2, 2, 1
  028c0d0  fmuls 1, 4, 5
  028c0d4  stfs 5, 428(1)
  028c0d8  fsqrts 2, 2
  028c0dc  fcmpu 0, 2, 30
  028c0e0  bf 2, 0x28c118
  028c0e4  stfs 3, 208(1)
  028c0e8  fmr 3, 30
  028c0ec  lfs 1, 20(3)
  028c0f0  stfs 1, 212(1)
  028c0f4  lfs 1, 24(3)
  028c0f8  stfs 1, 216(1)
  028c0fc  lfs 4, 28(3)
  028c100  stw 28, 216(1)
  028c104  stw 28, 212(1)
  028c108  stw 28, 208(1)
  028c10c  fmr 2, 3
  028c110  fmr 1, 2
  028c114  b 0x28c140
  028c118  fdivs 4, 1, 2
  028c11c  fmuls 1, 3, 4
  028c120  stfs 1, 208(1)
  028c124  lfs 2, 20(3)
  028c128  fmuls 2, 2, 4
  028c12c  stfs 2, 212(1)
  028c130  lfs 3, 24(3)
  028c134  fmuls 3, 3, 4
  028c138  stfs 3, 216(1)
  028c13c  lfs 4, 28(3)
  028c140  lis 4, 41
  028c144  stfs 4, 220(1)
  028c148  addi 4, 4, -16632
  028c14c  lfs 5, 8(4)
  028c150  stfs 4, 236(1)
  028c154  fmuls 1, 1, 5
  028c158  fmuls 2, 2, 5
  028c15c  fmuls 3, 3, 5
  028c160  stfs 1, 224(1)
  028c164  stfs 2, 228(1)
  028c168  stfs 3, 232(1)
  028c16c  lfs 2, 4(3)
  028c170  lfs 1, 0(3)
  028c174  fmuls 2, 2, 2
  028c178  lfs 3, 8(3)
  028c17c  stfs 5, 412(1)
  028c180  fmadds 2, 1, 1, 2
  028c184  fmadds 2, 3, 3, 2
  028c188  fsqrts 2, 2
  028c18c  fcmpu 0, 2, 30
  028c190  bt 2, 0x28c1b0
  028c194  stfs 1, 256(1)
  028c198  lfs 1, 4(3)
  028c19c  stfs 1, 260(1)
  028c1a0  lfs 1, 8(3)
  028c1a4  stfs 1, 264(1)
  028c1a8  lfs 17, 12(3)
  028c1ac  b 0x28c1dc
  028c1b0  lis 3, 41
  028c1b4  lfs 1, 16(31)
  028c1b8  addi 3, 3, -16632
  028c1bc  stfs 1, 256(1)
  028c1c0  lfs 1, 20(31)
  028c1c4  stfs 1, 260(1)
  028c1c8  lfs 1, 12(3)
  028c1cc  lfs 2, 24(31)
  028c1d0  lfs 17, 28(31)
  028c1d4  fadds 1, 2, 1
  028c1d8  stfs 1, 264(1)
  028c1dc  lis 3, 41
  028c1e0  stfs 17, 268(1)
  028c1e4  ori 30, 28, 0
  028c1e8  addi 3, 3, -16632
  028c1ec  addic 27, 1, 240
  028c1f0  addic 26, 31, 16
  028c1f4  addic 25, 1, 256
  028c1f8  addic 24, 1, 192
  028c1fc  lfs 1, 20(3)
  028c200  lfs 2, 28(3)
  028c204  addic 23, 1, 224
  028c208  lfs 17, 16(3)
  028c20c  li 22, 1
  028c210  lfs 27, 24(3)
  028c214  lfs 21, 32(3)
  028c218  lfs 22, 36(3)
  028c21c  lfs 23, 40(3)
  028c220  lfs 24, 44(3)
  028c224  lfs 25, 48(3)
  028c228  lfs 26, 52(3)
  028c22c  lfs 28, 56(3)
  028c230  stfs 1, 424(1)
  028c234  stfd 2, 416(1)
  028c238  lfs 29, 60(3)
  028c23c  lfs 16, 64(3)
  028c240  lfs 14, 68(3)
  028c244  lfs 15, 72(3)
  028c248  lfs 18, 76(3)
  028c24c  lfs 19, 80(3)
  028c250  lfs 20, 84(3)
  028c254  fmr 1, 17
  028c258  lfs 2, 424(1)
  028c25c  bl 0xfcbe8
  028c260  nop
  028c264  fmr 31, 1
  028c268  bl 0xfcc68
  028c26c  nop
  028c270  lhz 3, 166(31)
  028c274  cmpwi 3, 148
  028c278  bf 2, 0x28c280
  028c27c  fmuls 31, 31, 27
  028c280  lfd 3, 416(1)
  028c284  fsubs 2, 21, 1
  028c288  fsubs 4, 22, 1
  028c28c  fadds 3, 1, 3
  028c290  stw 28, 248(1)
  028c294  fsub 5, 1, 2
  028c298  fsubs 6, 21, 3
  028c29c  fsubs 7, 22, 3
  028c2a0  fsel 1, 5, 2, 1
  028c2a4  fsub 2, 3, 6
  028c2a8  fsub 5, 4, 1
  028c2ac  fsel 2, 2, 6, 3
  028c2b0  fsel 1, 5, 4, 1
  028c2b4  fsub 3, 7, 2
  028c2b8  fmuls 4, 1, 1
  028c2bc  fsel 2, 3, 7, 2
  028c2c0  fmuls 3, 4, 1
  028c2c4  fmuls 5, 2, 2
  028c2c8  fmuls 6, 4, 3
  028c2cc  fmadds 1, 3, 23, 1
  028c2d0  fmuls 3, 5, 2
  028c2d4  fmuls 7, 4, 6
  028c2d8  fmadds 1, 6, 24, 1
  028c2dc  fmuls 6, 5, 3
  028c2e0  fmadds 2, 3, 23, 2
  028c2e4  fmuls 3, 4, 7
  028c2e8  fmadds 1, 7, 25, 1
  028c2ec  fmuls 4, 5, 6
  028c2f0  fmadds 2, 6, 24, 2
  028c2f4  fmadds 1, 3, 26, 1
  028c2f8  fmuls 3, 5, 4
  028c2fc  fmadds 2, 4, 25, 2
  028c300  fmuls 4, 1, 31
  028c304  fmr 1, 28
  028c308  fmadds 3, 3, 26, 2
  028c30c  fmr 2, 29
  028c310  fmuls 3, 3, 31
  028c314  stfs 4, 244(1)
  028c318  stfs 3, 240(1)
  028c31c  bl 0xfcbe8
  028c320  nop
  028c324  addic 3, 1, 272
  028c328  stfs 1, 248(1)
  028c32c  ori 4, 27, 0
  028c330  ori 5, 26, 0
  028c334  bl 0x502b08
  028c338  nop
  028c33c  addic 3, 1, 288
  028c340  ori 4, 25, 0
  028c344  ori 5, 27, 0
  028c348  bl 0x502a64
  028c34c  nop
  028c350  lfs 1, 292(1)
  028c354  lfs 2, 288(1)
  028c358  fmuls 3, 1, 1
  028c35c  lfs 4, 296(1)
  028c360  lfs 5, -3052(29)
  028c364  fmuls 5, 5, 16
  028c368  stfs 2, 192(1)
  028c36c  fmadds 3, 2, 2, 3
  028c370  stfs 1, 196(1)
  028c374  lfs 6, 300(1)
  028c378  stfs 4, 200(1)
  028c37c  stfs 6, 204(1)
  028c380  fmadds 3, 4, 4, 3
  028c384  addic 3, 1, 304
  028c388  ori 4, 24, 0
  028c38c  ori 5, 23, 0
  028c390  fsqrts 3, 3
  028c394  fdivs 5, 5, 3
  028c398  fsub 6, 30, 3
  028c39c  fsub 7, 30, 3
  028c3a0  fsub 8, 30, 3
  028c3a4  fsub 9, 3, 30
  028c3a8  fsub 10, 3, 30
  028c3ac  fsub 3, 3, 30
  028c3b0  fmuls 2, 2, 5
  028c3b4  fmuls 1, 1, 5
  028c3b8  fmuls 4, 4, 5
  028c3bc  fsel 5, 6, 30, 2
  028c3c0  fsel 6, 7, 30, 1
  028c3c4  fsel 7, 8, 30, 4
  028c3c8  fsel 2, 9, 5, 2
  028c3cc  fsel 1, 10, 6, 1
  028c3d0  fsel 3, 3, 7, 4
  028c3d4  stfs 2, 192(1)
  028c3d8  stfs 1, 196(1)
  028c3dc  stfs 3, 200(1)
  028c3e0  bl 0x502b08
  028c3e4  nop
  028c3e8  lfs 1, 200(1)
  028c3ec  lfs 2, -3052(29)
  028c3f0  fmadds 3, 2, 27, 1
  028c3f4  fmr 1, 14
  028c3f8  fmr 2, 15
  028c3fc  stfs 3, 200(1)
  028c400  bl 0xfcbe8
  028c404  nop
  028c408  lfs 2, 192(1)
  028c40c  li 3, 4
  028c410  lfs 3, 196(1)
  028c414  fmuls 2, 2, 1
  028c418  lfs 4, 200(1)
  028c41c  fmuls 3, 3, 1
  028c420  fmuls 1, 4, 1
  028c424  stfs 2, 192(1)
  028c428  stfs 3, 196(1)
  028c42c  stfs 1, 200(1)
  028c430  bl 0xfc620
  028c434  nop
  028c438  sldi 3, 3, 2
  028c43c  fmr 1, 18
  028c440  fmr 2, 19
  028c444  addc 3, 3, 1
  028c448  clrldi 3, 3, 32
  028c44c  lwz 3, 396(3)
  028c450  extsw 21, 3
  028c454  bl 0xfcbe8
  028c458  nop
  028c45c  fmr 31, 1
  028c460  li 3, 60
  028c464  li 4, 100
  028c468  bl 0xfe484
  028c46c  nop
  028c470  fmr 1, 27
  028c474  ori 20, 3, 0
  028c478  fmr 2, 29
  028c47c  bl 0xfcbe8
  028c480  nop
  028c484  lfs 2, 240(1)
  028c488  lfs 3, 248(1)
  028c48c  ori 7, 21, 0
  028c490  stfs 2, 48(1)
  028c494  ori 9, 20, 0
  028c498  stfs 3, 56(1)
  028c49c  lfs 2, 192(1)
  028c4a0  lfs 3, 200(1)
  028c4a4  stfs 2, 64(1)
  028c4a8  stfs 3, 72(1)
  028c4ac  fmr 2, 1
  028c4b0  lfs 1, 244(1)
  028c4b4  lfs 3, 252(1)
  028c4b8  stfs 1, 52(1)
  028c4bc  stfs 3, 60(1)
  028c4c0  lfs 1, 196(1)
  028c4c4  lfs 3, 204(1)
  028c4c8  stfs 1, 68(1)
  028c4cc  stfs 3, 76(1)
  028c4d0  lfs 4, 412(1)
  028c4d4  fmr 1, 31
  028c4d8  std 22, 128(1)
  028c4dc  fmr 3, 20
  028c4e0  ld 3, 48(1)
  028c4e4  ld 4, 56(1)
  028c4e8  ld 5, 64(1)
  028c4ec  ld 6, 72(1)
  028c4f0  bl 0x425540
  028c4f4  nop
  028c4f8  addic 30, 30, 1
  028c4fc  cmpwi 30, 25
  028c500  bt 0, 0x28c254
  028c504  lhz 3, 166(31)
  028c508  lfs 31, 428(1)
  028c50c  cmpwi 3, 148
  028c510  bf 2, 0x28c6ec
  028c514  lfs 1, 16(31)
  028c518  addic 3, 1, 320
  028c51c  stfs 1, 240(1)
  028c520  lfs 1, 20(31)
  028c524  ori 4, 25, 0
  028c528  ori 5, 27, 0
  028c52c  stfs 1, 244(1)
  028c530  lfs 1, 24(31)
  028c534  lfs 29, 412(1)
  028c538  fadds 1, 1, 31
  028c53c  lfs 2, 28(31)
  028c540  stfs 2, 252(1)
  028c544  stfs 1, 248(1)
  028c548  bl 0x502a64
  028c54c  nop
  028c550  lfs 1, 324(1)
  028c554  lfs 2, 320(1)
  028c558  fmuls 3, 1, 1
  028c55c  lfs 4, 328(1)
  028c560  lfs 5, -3052(29)
  028c564  fmuls 5, 5, 16
  028c568  stfs 2, 192(1)
  028c56c  fmadds 3, 2, 2, 3
  028c570  stfs 1, 196(1)
  028c574  lfs 6, 332(1)
  028c578  stfs 4, 200(1)
  028c57c  stfs 6, 204(1)
  028c580  fmadds 3, 4, 4, 3
  028c584  addic 3, 1, 336
  028c588  ori 4, 24, 0
  028c58c  ori 5, 23, 0
  028c590  fsqrts 3, 3
  028c594  fdivs 5, 5, 3
  028c598  fsub 6, 30, 3
  028c59c  fsub 7, 30, 3
  028c5a0  fsub 8, 30, 3
  028c5a4  fsub 9, 3, 30
  028c5a8  fsub 10, 3, 30
  028c5ac  fsub 3, 3, 30
  028c5b0  fmuls 2, 2, 5
  028c5b4  fmuls 1, 1, 5
  028c5b8  fmuls 4, 4, 5
  028c5bc  fsel 5, 6, 30, 2
  028c5c0  fsel 6, 7, 30, 1
  028c5c4  fsel 7, 8, 30, 4
  028c5c8  fsel 2, 9, 5, 2
  028c5cc  fsel 1, 10, 6, 1
  028c5d0  fsel 3, 3, 7, 4
  028c5d4  stfs 2, 192(1)
  028c5d8  stfs 1, 196(1)
  028c5dc  stfs 3, 200(1)
  028c5e0  bl 0x502b08
  028c5e4  nop
  028c5e8  lfs 1, 200(1)
  028c5ec  lfs 2, -3052(29)
  028c5f0  fmadds 3, 2, 27, 1
  028c5f4  fmr 1, 14
  028c5f8  fmr 2, 15
  028c5fc  stfs 3, 200(1)
  028c600  bl 0xfcbe8
  028c604  nop
  028c608  lfs 2, 192(1)
  028c60c  li 3, 60
  028c610  lfs 3, 196(1)
  028c614  li 4, 100
  028c618  fmuls 2, 2, 1
  028c61c  lfs 4, 200(1)
  028c620  fmuls 3, 3, 1
  028c624  fmuls 1, 4, 1
  028c628  stfs 2, 192(1)
  028c62c  stfs 3, 196(1)
  028c630  stfs 1, 200(1)
  028c634  bl 0xfe484
  028c638  nop
  028c63c  lfs 1, 240(1)
  028c640  lfs 2, 248(1)
  028c644  ori 9, 3, 0
  028c648  stfs 1, 48(1)
  028c64c  li 7, 201
  028c650  stfs 2, 56(1)
  028c654  fmr 3, 28
  028c658  lfs 1, 192(1)
  028c65c  fmr 4, 29
  028c660  lfs 2, 200(1)
  028c664  stfs 1, 64(1)
  028c668  stfs 2, 72(1)
  028c66c  lfs 1, 244(1)
  028c670  lfs 2, 252(1)
  028c674  stfs 1, 52(1)
  028c678  stfs 2, 60(1)
  028c67c  lfs 1, 196(1)
  028c680  lfs 2, 204(1)
  028c684  stfs 1, 68(1)
  028c688  stfs 2, 76(1)
  028c68c  fmr 1, 28
  028c690  std 22, 128(1)
  028c694  fmr 2, 16
  028c698  ld 3, 48(1)
  028c69c  ld 4, 56(1)
  028c6a0  ld 5, 64(1)
  028c6a4  ld 6, 72(1)
  028c6a8  bl 0x425540
  028c6ac  nop
  028c6b0  ori 23, 3, 0
  028c6b4  cmpwi 23, 0
  028c6b8  bt 2, 0x28c6ec
  028c6bc  lis 3, 41
  028c6c0  lfs 1, 64(23)
  028c6c4  addi 3, 3, -16632
  028c6c8  lfs 2, 88(3)
  028c6cc  lfs 3, 68(23)
  028c6d0  lfs 4, 72(23)
  028c6d4  fmuls 1, 1, 2
  028c6d8  fmuls 3, 3, 2
  028c6dc  fmuls 2, 4, 2
  028c6e0  stfs 1, 64(23)
  028c6e4  stfs 3, 68(23)
  028c6e8  stfs 2, 72(23)
  028c6ec  lis 3, 41
  028c6f0  stw 28, 204(1)
  028c6f4  li 6, -1
  028c6f8  addi 26, 3, -16632
  028c6fc  stw 28, 200(1)
  028c700  stw 28, 196(1)
  028c704  fmr 1, 30
  028c708  stw 28, 192(1)
  028c70c  ori 3, 31, 0
  028c710  ori 4, 24, 0
  028c714  fmr 2, 30
  028c718  ori 5, 25, 0
  028c71c  fmr 3, 31
  028c720  lfs 5, 92(26)
  028c724  li 8, 20
  028c728  lfs 7, 96(26)
  028c72c  li 9, 3
  028c730  std 28, 144(1)
  028c734  li 10, 4
  028c738  std 22, 160(1)
  028c73c  fmr 4, 16
  028c740  std 22, 168(1)
  028c744  fmr 6, 27
  028c748  std 6, 176(1)
  028c74c  std 28, 184(1)
  028c750  bl 0x10e030
  028c754  nop
  028c758  lfs 18, 100(26)
  028c75c  ori 30, 28, 0
  028c760  lfs 19, 104(26)
  028c764  lfs 20, 108(26)
  028c768  lfs 29, 112(26)
  028c76c  fmr 1, 30
  028c770  li 3, 2
  028c774  stw 28, 384(1)
  028c778  stw 22, 388(1)
  028c77c  lfs 2, 424(1)
  028c780  stw 3, 392(1)
  028c784  bl 0xfcbe8
  028c788  nop
  028c78c  fmr 31, 1
  028c790  bl 0xfcc68
  028c794  nop
  028c798  lhz 3, 166(31)
  028c79c  lfs 10, 16(31)
  028c7a0  cmpwi 3, 148
  028c7a4  lfs 11, 20(31)
  028c7a8  fmr 9, 1
  028c7ac  lfs 12, 24(31)
  028c7b0  bf 2, 0x28c7b8
  028c7b4  fmuls 31, 31, 27
  028c7b8  lfd 2, 416(1)
  028c7bc  fsubs 1, 21, 9
  028c7c0  fsubs 3, 22, 9
  028c7c4  fadds 2, 9, 2
  028c7c8  stfs 12, 248(1)
  028c7cc  fsub 4, 9, 1
  028c7d0  fsubs 5, 21, 2
  028c7d4  fsubs 6, 22, 2
  028c7d8  fsel 1, 4, 1, 9
  028c7dc  fsub 4, 2, 5
  028c7e0  fsub 7, 3, 1
  028c7e4  fsel 2, 4, 5, 2
  028c7e8  fsel 1, 7, 3, 1
  028c7ec  fsub 3, 6, 2
  028c7f0  fmuls 4, 1, 1
  028c7f4  fsel 2, 3, 6, 2
  028c7f8  fmuls 3, 4, 1
  028c7fc  fmuls 5, 2, 2
  028c800  fmuls 6, 4, 3
  028c804  fmadds 1, 3, 23, 1
  028c808  fmuls 3, 5, 2
  028c80c  fmuls 7, 4, 6
  028c810  fmadds 1, 6, 24, 1
  028c814  fmuls 6, 5, 3
  028c818  fmadds 2, 3, 23, 2
  028c81c  fmuls 3, 4, 7
  028c820  fmadds 1, 7, 25, 1
  028c824  fmuls 4, 5, 6
  028c828  fmadds 2, 6, 24, 2
  028c82c  fmadds 1, 3, 26, 1
  028c830  fmuls 3, 5, 4
  028c834  fmadds 2, 4, 25, 2
  028c838  fmadds 4, 1, 31, 11
  028c83c  fmr 1, 28
  028c840  fmadds 3, 3, 26, 2
  028c844  fmr 2, 18
  028c848  fmadds 3, 3, 31, 10
  028c84c  stfs 4, 244(1)
  028c850  stfs 3, 240(1)
  028c854  bl 0xfcbe8
  028c858  nop
  028c85c  lfs 2, 248(1)
  028c860  addic 3, 1, 352
  028c864  fadds 1, 2, 1
  028c868  ori 4, 25, 0
  028c86c  ori 5, 27, 0
  028c870  stfs 1, 248(1)
  028c874  bl 0x502a64
  028c878  nop
  028c87c  lfs 1, 356(1)
  028c880  lfs 2, 352(1)
  028c884  fmuls 3, 1, 1
  028c888  lfs 4, 360(1)
  028c88c  lfs 5, -3052(29)
  028c890  fmuls 5, 5, 16
  028c894  stfs 2, 192(1)
  028c898  fmadds 3, 2, 2, 3
  028c89c  stfs 1, 196(1)
  028c8a0  lfs 6, 364(1)
  028c8a4  stfs 4, 200(1)
  028c8a8  stfs 6, 204(1)
  028c8ac  addic 3, 1, 368
  028c8b0  fmadds 3, 4, 4, 3
  028c8b4  addic 5, 1, 208
  028c8b8  ori 4, 24, 0
  028c8bc  fsqrts 3, 3
  028c8c0  fdivs 5, 5, 3
  028c8c4  fsub 6, 30, 3
  028c8c8  fsub 7, 30, 3
  028c8cc  fsub 8, 30, 3
  028c8d0  fsub 9, 3, 30
  028c8d4  fsub 10, 3, 30
  028c8d8  fsub 3, 3, 30
  028c8dc  fmuls 2, 2, 5
  028c8e0  fmuls 1, 1, 5
  028c8e4  fmuls 4, 4, 5
  028c8e8  fsel 5, 6, 30, 2
  028c8ec  fsel 6, 7, 30, 1
  028c8f0  fsel 7, 8, 30, 4
  028c8f4  fsel 2, 9, 5, 2
  028c8f8  fsel 1, 10, 6, 1
  028c8fc  fsel 3, 3, 7, 4
  028c900  stfs 2, 192(1)
  028c904  stfs 1, 196(1)
  028c908  stfs 3, 200(1)
  028c90c  bl 0x502b08
  028c910  nop
  028c914  fmr 1, 14
  028c918  fmr 2, 15
  028c91c  bl 0xfcbe8
  028c920  nop
  028c924  lfs 2, 192(1)
  028c928  lfs 3, 196(1)
  028c92c  fmuls 4, 2, 1
  028c930  lfs 2, 200(1)
  028c934  fmuls 3, 3, 1
  028c938  fmuls 5, 2, 1
  028c93c  fmr 1, 19
  028c940  fmr 2, 28
  028c944  stfs 4, 192(1)
  028c948  stfs 3, 196(1)
  028c94c  stfs 5, 200(1)
  028c950  bl 0xfcbe8
  028c954  nop
  028c958  lis 4, 32536
  028c95c  lis 3, 32512
  028c960  ori 4, 4, 8240
  028c964  bl 0x106738
  028c968  nop
  028c96c  fmr 1, 17
  028c970  ori 26, 3, 0
  028c974  fmr 2, 28
  028c978  bl 0xfcbe8
  028c97c  nop
  028c980  lis 4, 95
  028c984  li 3, 0
  028c988  ori 4, 4, 24415
  028c98c  bl 0x106738
  028c990  nop
  028c994  fmr 1, 28
  028c998  ori 23, 3, 0
  028c99c  fmr 2, 27
  028c9a0  bl 0xfcbe8
  028c9a4  nop
  028c9a8  lis 3, 114
  028c9ac  fmuls 31, 1, 20
  028c9b0  lfs 1, -3056(3)
  028c9b4  li 3, 3
  028c9b8  fmuls 1, 1, 29
  028c9bc  fctiwz 1, 1
  028c9c0  stfd 1, 432(1)
  028c9c4  lwz 4, 436(1)
  028c9c8  extsw 21, 4
  028c9cc  bl 0xfc620
  028c9d0  nop
  028c9d4  sldi 4, 3, 2
  028c9d8  ori 3, 27, 0
  028c9dc  fmr 1, 31
  028c9e0  addc 5, 4, 1
  028c9e4  ori 8, 21, 0
  028c9e8  clrldi 7, 5, 32
  028c9ec  ori 4, 24, 0
  028c9f0  ori 5, 26, 0
  028c9f4  ori 6, 23, 0
  028c9f8  lwz 9, 384(7)
  028c9fc  extsw 9, 9
  028ca00  bl 0x125350
  028ca04  nop
  028ca08  cmpwi 3, 0
  028ca0c  bt 2, 0x28ca1c
  028ca10  lfs 1, 24(31)
  028ca14  fsubs 1, 1, 17
  028ca18  stfs 1, 44(3)
  028ca1c  addic 30, 30, 1
  028ca20  cmpwi 30, 20
  028ca24  bt 0, 0x28c76c
  028ca28  ori 3, 31, 0
  028ca2c  li 4, 0
  028ca30  li 5, -1
  028ca34  bl 0xfd8d0
  028ca38  nop
  028ca3c  ori 3, 31, 0
  028ca40  bl 0xefb38
  028ca44  nop
  028ca48  b 0x28caf8
  028ca4c  lbz 3, 32(31)
  028ca50  stb 4, 164(31)
  028ca54  cmpwi 3, 0
  028ca58  cmpwi 1, 3, -1
  028ca5c  bt 1, 0x28caf8
  028ca60  bf 5, 0x28caf8
  028ca64  lis 5, 41
  028ca68  li 3, 128
  028ca6c  addi 5, 5, -16632
  028ca70  li 6, 1
  028ca74  lis 7, 151
  028ca78  sth 3, 50(31)
  028ca7c  stb 4, 48(31)
  028ca80  lis 3, 161
  028ca84  lfs 1, 8(5)
  028ca88  lis 8, 151
  028ca8c  lfs 2, 44(31)
  028ca90  addic 3, 3, -13028
  028ca94  lhz 4, 178(31)
  028ca98  addic 8, 8, -13812
  028ca9c  fmuls 1, 2, 1
  028caa0  stb 6, 32(31)
  028caa4  extsh 5, 4
  028caa8  lwz 7, -25488(7)
  028caac  clrlwi 4, 4, 27
  028cab0  srawi 5, 5, 5
  028cab4  slw 4, 6, 4
  028cab8  sldi 5, 5, 2
  028cabc  addc 3, 5, 3
  028cac0  slwi 5, 7, 8
  028cac4  clrldi 3, 3, 32
  028cac8  extsw 5, 5
  028cacc  stfs 1, 44(31)
  028cad0  lbz 6, 16(8)
  028cad4  lwzx 3, 3, 5
  028cad8  cmpwi 6, 0
  028cadc  and 3, 3, 4
  028cae0  cmpwi 1, 3, 0
  028cae4  cror 2, 2, 6
  028cae8  bt 2, 0x28caf8
  028caec  ori 3, 31, 0
  028caf0  bl 0xefb38
  028caf4  nop
  028caf8  ld 0, 704(1)
  028cafc  mtlr 0
  028cb00  lfd 14, 544(1)
  028cb04  lfd 15, 552(1)
  028cb08  lfd 16, 560(1)
  028cb0c  lfd 17, 568(1)
  028cb10  lfd 18, 576(1)
  028cb14  lfd 19, 584(1)
  028cb18  lfd 20, 592(1)
  028cb1c  lfd 21, 600(1)
  028cb20  lfd 22, 608(1)
  028cb24  lfd 23, 616(1)
  028cb28  lfd 24, 624(1)
  028cb2c  lfd 25, 632(1)
  028cb30  lfd 26, 640(1)
  028cb34  lfd 27, 648(1)
  028cb38  lfd 28, 656(1)
  028cb3c  lfd 29, 664(1)
  028cb40  lfd 30, 672(1)
  028cb44  lfd 31, 680(1)
  028cb48  ld 20, 448(1)
  028cb4c  ld 21, 456(1)
  028cb50  ld 22, 464(1)
  028cb54  ld 23, 472(1)
  028cb58  ld 24, 480(1)
  028cb5c  ld 25, 488(1)
  028cb60  ld 26, 496(1)
  028cb64  ld 27, 504(1)
  028cb68  ld 28, 512(1)
  028cb6c  ld 29, 520(1)
  028cb70  ld 30, 528(1)
  028cb74  ld 31, 536(1)
  028cb78  addi 1, 1, 688
  028cb7c  blr
