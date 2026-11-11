# game/update/moby1221.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1221_0020c118:   # 0x20c118, 0x36c bytes
  020c118  stdu 1, -272(1)
  020c11c  mflr 0
  020c120  std 0, 288(1)
  020c124  stfd 27, 232(1)
  020c128  stfd 28, 240(1)
  020c12c  stfd 29, 248(1)
  020c130  stfd 30, 256(1)
  020c134  stfd 31, 264(1)
  020c138  std 30, 216(1)
  020c13c  ori 30, 3, 0
  020c140  std 31, 224(1)
  020c144  li 3, 1221
  020c148  std 29, 208(1)
  020c14c  std 28, 200(1)
  020c150  std 27, 192(1)
  020c154  std 26, 184(1)
  020c158  ori 31, 4, 0
  020c15c  bl 0xefa28
  020c160  nop
  020c164  ori 29, 3, 0
  020c168  cmpwi 29, 0
  020c16c  bt 2, 0x20c444
  020c170  lis 3, 33
  020c174  lwz 27, 120(29)
  020c178  addi 28, 3, -16152
  020c17c  lfs 31, 4(28)
  020c180  lfs 30, 8(28)
  020c184  fmr 1, 31
  020c188  lfs 29, 0(28)
  020c18c  fmr 2, 30
  020c190  bl 0xfcbe8
  020c194  nop
  020c198  fmr 28, 1
  020c19c  fmr 1, 31
  020c1a0  fmr 2, 30
  020c1a4  bl 0xfcbe8
  020c1a8  nop
  020c1ac  fmr 27, 1
  020c1b0  fmr 1, 31
  020c1b4  fmr 2, 30
  020c1b8  bl 0xfcbe8
  020c1bc  nop
  020c1c0  li 3, 255
  020c1c4  li 4, 1
  020c1c8  fmr 31, 1
  020c1cc  li 26, 0
  020c1d0  stb 3, 48(29)
  020c1d4  sth 3, 50(29)
  020c1d8  stb 4, 49(29)
  020c1dc  stb 26, 32(29)
  020c1e0  lfs 1, 0(31)
  020c1e4  stfs 1, 16(29)
  020c1e8  lfs 1, 4(31)
  020c1ec  stfs 1, 20(29)
  020c1f0  lfs 1, 8(31)
  020c1f4  stfs 1, 24(29)
  020c1f8  lfs 1, 12(31)
  020c1fc  stfs 31, 72(29)
  020c200  stfs 1, 28(29)
  020c204  lfs 1, 4(31)
  020c208  lfs 2, 20(30)
  020c20c  lfs 3, 0(31)
  020c210  fsubs 1, 1, 2
  020c214  lfs 2, 16(30)
  020c218  fsubs 2, 3, 2
  020c21c  lfs 3, 8(31)
  020c220  lfs 4, 24(30)
  020c224  lfs 5, 12(31)
  020c228  fsubs 3, 3, 4
  020c22c  fmuls 4, 1, 1
  020c230  lis 31, 114
  020c234  fmuls 6, 27, 27
  020c238  stfs 2, 112(1)
  020c23c  stfs 1, 116(1)
  020c240  stfs 3, 120(1)
  020c244  fmadds 4, 2, 2, 4
  020c248  stfs 5, 124(1)
  020c24c  fmadds 6, 28, 28, 6
  020c250  fmadds 3, 3, 3, 4
  020c254  lfs 4, 12(28)
  020c258  lfs 5, -3052(31)
  020c25c  fmuls 4, 5, 4
  020c260  fmadds 6, 31, 31, 6
  020c264  fsqrts 3, 3
  020c268  stw 26, 120(1)
  020c26c  stfs 28, 128(1)
  020c270  stfs 27, 132(1)
  020c274  stfs 31, 136(1)
  020c278  stw 26, 140(1)
  020c27c  addic 3, 1, 144
  020c280  addic 4, 1, 128
  020c284  addic 5, 1, 112
  020c288  fsqrts 30, 6
  020c28c  fdivs 4, 4, 3
  020c290  fsub 6, 29, 3
  020c294  fsub 7, 29, 3
  020c298  fsub 8, 3, 29
  020c29c  fsub 3, 3, 29
  020c2a0  fmuls 2, 2, 4
  020c2a4  fmuls 1, 1, 4
  020c2a8  fsel 4, 6, 29, 2
  020c2ac  fsel 6, 7, 29, 1
  020c2b0  fsub 7, 30, 29
  020c2b4  fsel 2, 8, 4, 2
  020c2b8  fsel 1, 3, 6, 1
  020c2bc  fsub 3, 29, 30
  020c2c0  fsub 4, 29, 30
  020c2c4  fsub 6, 30, 29
  020c2c8  stfs 2, 112(1)
  020c2cc  stfs 1, 116(1)
  020c2d0  lfs 1, 16(28)
  020c2d4  fmuls 1, 5, 1
  020c2d8  fsub 2, 29, 30
  020c2dc  fsub 5, 30, 29
  020c2e0  fdivs 1, 1, 30
  020c2e4  fmuls 8, 28, 1
  020c2e8  fmuls 9, 27, 1
  020c2ec  fmuls 1, 31, 1
  020c2f0  fsel 2, 2, 29, 8
  020c2f4  fsel 3, 3, 29, 9
  020c2f8  fsel 4, 4, 29, 1
  020c2fc  fsel 2, 5, 2, 8
  020c300  fsel 3, 6, 3, 9
  020c304  fsel 1, 7, 4, 1
  020c308  stfs 2, 128(1)
  020c30c  stfs 3, 132(1)
  020c310  stfs 1, 136(1)
  020c314  bl 0x5023f0
  020c318  nop
  020c31c  lfs 1, 144(1)
  020c320  stfs 1, 0(27)
  020c324  lfs 1, 148(1)
  020c328  stfs 1, 4(27)
  020c32c  lfs 1, 152(1)
  020c330  stfs 1, 8(27)
  020c334  lfs 1, 156(1)
  020c338  stfs 1, 12(27)
  020c33c  lfs 1, 20(28)
  020c340  lfs 2, -3052(31)
  020c344  fmuls 1, 2, 1
  020c348  fsub 2, 29, 30
  020c34c  fsub 3, 29, 30
  020c350  stw 26, 28(27)
  020c354  fsub 4, 29, 30
  020c358  fsub 5, 30, 29
  020c35c  fsub 6, 30, 29
  020c360  fsub 7, 30, 29
  020c364  fdivs 1, 1, 30
  020c368  fmuls 8, 28, 1
  020c36c  fmuls 9, 27, 1
  020c370  fmuls 1, 31, 1
  020c374  fsel 2, 2, 29, 8
  020c378  fsel 3, 3, 29, 9
  020c37c  fsel 4, 4, 29, 1
  020c380  fsel 2, 5, 2, 8
  020c384  fsel 3, 6, 3, 9
  020c388  fsel 1, 7, 4, 1
  020c38c  stfs 2, 16(27)
  020c390  stfs 3, 20(27)
  020c394  stfs 1, 24(27)
  020c398  lfs 31, 24(28)
  020c39c  lfs 30, 28(28)
  020c3a0  fmr 1, 31
  020c3a4  fmr 2, 30
  020c3a8  bl 0xfcbe8
  020c3ac  nop
  020c3b0  lfs 29, 32(28)
  020c3b4  lfs 3, -3052(31)
  020c3b8  fmr 2, 30
  020c3bc  fmuls 4, 1, 29
  020c3c0  fmr 1, 31
  020c3c4  fmuls 3, 4, 3
  020c3c8  stfs 3, 16(27)
  020c3cc  bl 0xfcbe8
  020c3d0  nop
  020c3d4  fmuls 1, 1, 29
  020c3d8  lfs 2, -3052(31)
  020c3dc  lis 3, 114
  020c3e0  fmuls 1, 1, 2
  020c3e4  stfs 1, 20(27)
  020c3e8  lfs 1, 36(28)
  020c3ec  fmuls 1, 2, 1
  020c3f0  stfs 1, 24(27)
  020c3f4  lfs 1, 40(28)
  020c3f8  lfs 2, -3056(3)
  020c3fc  fmuls 1, 2, 1
  020c400  fctiwz 1, 1
  020c404  stfd 1, 160(1)
  020c408  lfs 1, 44(28)
  020c40c  lwz 3, 164(1)
  020c410  fmuls 1, 2, 1
  020c414  extsw 3, 3
  020c418  fctiwz 1, 1
  020c41c  stfd 1, 160(1)
  020c420  lwz 4, 164(1)
  020c424  extsw 4, 4
  020c428  bl 0xfe484
  020c42c  nop
  020c430  stw 3, 36(27)
  020c434  stw 3, 32(27)
  020c438  ori 3, 29, 0
  020c43c  bl 0xf31a8
  020c440  nop
  020c444  ori 3, 29, 0
  020c448  ld 0, 288(1)
  020c44c  mtlr 0
  020c450  lfd 27, 232(1)
  020c454  lfd 28, 240(1)
  020c458  lfd 29, 248(1)
  020c45c  lfd 30, 256(1)
  020c460  lfd 31, 264(1)
  020c464  ld 26, 184(1)
  020c468  ld 27, 192(1)
  020c46c  ld 28, 200(1)
  020c470  ld 29, 208(1)
  020c474  ld 30, 216(1)
  020c478  ld 31, 224(1)
  020c47c  addi 1, 1, 272
  020c480  blr

UpdateMoby_1221:   # 0x20c490, 0x110 bytes
  020c490  stdu 1, -160(1)
  020c494  mflr 0
  020c498  std 0, 176(1)
  020c49c  stfd 31, 152(1)
  020c4a0  std 31, 144(1)
  020c4a4  ori 31, 3, 0
  020c4a8  lis 4, 33
  020c4ac  std 30, 136(1)
  020c4b0  lis 3, 114
  020c4b4  addi 30, 4, -15228
  020c4b8  std 29, 128(1)
  020c4bc  addic 4, 31, 16
  020c4c0  lwz 29, 120(31)
  020c4c4  ori 5, 29, 0
  020c4c8  lfs 1, 0(30)
  020c4cc  lfs 2, -3048(3)
  020c4d0  lfs 3, 8(29)
  020c4d4  addic 3, 1, 112
  020c4d8  fnmsubs 1, 2, 1, 3
  020c4dc  stfs 1, 8(29)
  020c4e0  bl 0x502b08
  020c4e4  nop
  020c4e8  lfs 1, 64(31)
  020c4ec  lfs 2, 16(29)
  020c4f0  bl 0x502578
  020c4f4  nop
  020c4f8  stfs 1, 64(31)
  020c4fc  lfs 1, 68(31)
  020c500  lfs 2, 20(29)
  020c504  bl 0x502578
  020c508  nop
  020c50c  stfs 1, 68(31)
  020c510  lfs 1, 72(31)
  020c514  lfs 2, 24(29)
  020c518  bl 0x502578
  020c51c  nop
  020c520  lwz 3, 32(29)
  020c524  stfs 1, 72(31)
  020c528  extsw 3, 3
  020c52c  bl 0x502730
  020c530  nop
  020c534  lwz 3, 36(29)
  020c538  fmr 31, 1
  020c53c  extsw 3, 3
  020c540  bl 0x502730
  020c544  nop
  020c548  lfs 2, 4(30)
  020c54c  fmuls 1, 1, 2
  020c550  fdivs 1, 1, 31
  020c554  bl 0x502758
  020c558  nop
  020c55c  stb 3, 35(31)
  020c560  addic 3, 29, 36
  020c564  bl 0x4fff60
  020c568  nop
  020c56c  cmpwi 3, 0
  020c570  bt 2, 0x20c580
  020c574  ori 3, 31, 0
  020c578  bl 0xefb38
  020c57c  nop
  020c580  ld 0, 176(1)
  020c584  mtlr 0
  020c588  lfd 31, 152(1)
  020c58c  ld 29, 128(1)
  020c590  ld 30, 136(1)
  020c594  ld 31, 144(1)
  020c598  addi 1, 1, 160
  020c59c  blr
