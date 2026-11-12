# game/update/moby309.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M309_0033bfc0:   # 0x33bfc0, 0x548 bytes
  033bfc0  stdu 1, -208(1)
  033bfc4  mflr 0
  033bfc8  std 0, 224(1)
  033bfcc  stfd 28, 176(1)
  033bfd0  stfd 29, 184(1)
  033bfd4  stfd 30, 192(1)
  033bfd8  stfd 31, 200(1)
  033bfdc  std 31, 168(1)
  033bfe0  lis 4, 52
  033bfe4  ori 31, 3, 0
  033bfe8  addi 4, 4, -16496
  033bfec  li 6, 0
  033bff0  lis 3, 151
  033bff4  lis 5, 16256
  033bff8  std 30, 160(1)
  033bffc  addic 3, 3, -25376
  033c000  lwz 30, 120(31)
  033c004  lfs 31, 0(4)
  033c008  stw 6, 128(1)
  033c00c  stw 6, 132(1)
  033c010  lfs 30, 4(4)
  033c014  lwz 4, 764(3)
  033c018  stw 5, 136(1)
  033c01c  stw 5, 140(1)
  033c020  lwz 6, 8332(3)
  033c024  cmpw 4, 31
  033c028  lwz 4, 1272(3)
  033c02c  cmpwi 1, 6, 3
  033c030  bf 2, 0x33c040
  033c034  lhz 6, 782(3)
  033c038  cmpwi 6, 0
  033c03c  bt 2, 0x33c04c
  033c040  cmpw 4, 31
  033c044  bf 2, 0x33c240
  033c048  bf 6, 0x33c240
  033c04c  li 4, 1
  033c050  lis 6, 52
  033c054  addi 6, 6, -16496
  033c058  stb 4, 188(31)
  033c05c  lfs 1, 128(3)
  033c060  lfs 2, 16(31)
  033c064  fsubs 1, 1, 2
  033c068  lfs 2, 8(6)
  033c06c  fabs 3, 1
  033c070  fcmpu 0, 3, 2
  033c074  cror 6, 1, 2
  033c078  bt 6, 0x33c0b0
  033c07c  lfs 3, 132(3)
  033c080  lfs 4, 20(31)
  033c084  fsubs 3, 3, 4
  033c088  fabs 3, 3
  033c08c  fcmpu 0, 3, 2
  033c090  cror 6, 1, 2
  033c094  bt 6, 0x33c0b0
  033c098  li 3, 0
  033c09c  stw 3, 112(1)
  033c0a0  stw 3, 116(1)
  033c0a4  stw 5, 120(1)
  033c0a8  stw 5, 124(1)
  033c0ac  b 0x33c258
  033c0b0  lfs 2, 132(3)
  033c0b4  lis 4, 129
  033c0b8  lfs 3, 20(31)
  033c0bc  fsubs 2, 2, 3
  033c0c0  lfs 3, 136(3)
  033c0c4  lfs 4, 24(31)
  033c0c8  fsubs 3, 3, 4
  033c0cc  lfs 4, 7668(4)
  033c0d0  fmuls 5, 2, 2
  033c0d4  fadds 3, 4, 3
  033c0d8  fmadds 4, 1, 1, 5
  033c0dc  fmadds 4, 3, 3, 4
  033c0e0  fsqrts 4, 4
  033c0e4  fcmpu 0, 4, 31
  033c0e8  bf 2, 0x33c104
  033c0ec  li 3, 0
  033c0f0  stw 3, 112(1)
  033c0f4  stw 3, 116(1)
  033c0f8  stw 5, 120(1)
  033c0fc  stw 5, 124(1)
  033c100  b 0x33c258
  033c104  fdivs 3, 3, 4
  033c108  lis 3, 115
  033c10c  lis 5, 52
  033c110  addic 4, 3, 22720
  033c114  li 6, 0
  033c118  lfs 4, 22720(3)
  033c11c  addi 3, 5, -16496
  033c120  lfs 5, 4(4)
  033c124  lfs 6, 8(4)
  033c128  lfs 7, 12(4)
  033c12c  lfs 8, 12(3)
  033c130  lfs 9, 16(3)
  033c134  lfs 10, 20(3)
  033c138  lis 3, 129
  033c13c  fneg 2, 2
  033c140  lfs 11, 7664(3)
  033c144  stfs 1, 148(1)
  033c148  stw 6, 152(1)
  033c14c  stw 6, 156(1)
  033c150  fmuls 10, 11, 10
  033c154  stfs 2, 144(1)
  033c158  addic 3, 1, 112
  033c15c  addic 4, 1, 128
  033c160  addic 5, 1, 144
  033c164  fabs 1, 3
  033c168  fsub 2, 3, 31
  033c16c  fsel 1, 2, 3, 1
  033c170  fsub 3, 3, 31
  033c174  fsubs 2, 30, 1
  033c178  fmuls 11, 1, 1
  033c17c  fmadds 4, 1, 5, 4
  033c180  fsel 3, 3, 30, 8
  033c184  fsub 12, 2, 31
  033c188  fmuls 1, 11, 1
  033c18c  fmadds 4, 11, 6, 4
  033c190  fsel 2, 12, 2, 31
  033c194  fmadds 1, 1, 7, 4
  033c198  fsqrts 2, 2
  033c19c  fnmsubs 1, 1, 2, 9
  033c1a0  fnmsubs 1, 1, 3, 9
  033c1a4  fsub 2, 10, 1
  033c1a8  fsel 1, 2, 1, 10
  033c1ac  bl 0x1113e0
  033c1b0  nop
  033c1b4  lfs 3, 116(1)
  033c1b8  lfs 2, 112(1)
  033c1bc  fmuls 1, 3, 3
  033c1c0  lfs 4, 120(1)
  033c1c4  fmr 5, 31
  033c1c8  fmadds 1, 2, 2, 1
  033c1cc  fmr 6, 5
  033c1d0  fmadds 1, 4, 4, 1
  033c1d4  fmr 7, 6
  033c1d8  fsqrts 8, 1
  033c1dc  fcmpu 0, 8, 7
  033c1e0  bt 2, 0x33c230
  033c1e4  frsqrte 5, 1
  033c1e8  lis 3, 52
  033c1ec  addi 3, 3, -16496
  033c1f0  lfs 6, 24(3)
  033c1f4  fmuls 7, 1, 5
  033c1f8  fmuls 8, 6, 5
  033c1fc  fnmsubs 7, 7, 5, 30
  033c200  fmadds 5, 7, 8, 5
  033c204  fmuls 7, 1, 5
  033c208  fmuls 8, 6, 5
  033c20c  fnmsubs 7, 7, 5, 30
  033c210  fmadds 5, 7, 8, 5
  033c214  fmuls 1, 1, 5
  033c218  fmuls 6, 6, 5
  033c21c  fnmsubs 1, 1, 5, 30
  033c220  fmadds 5, 1, 6, 5
  033c224  fmuls 7, 2, 5
  033c228  fmuls 6, 3, 5
  033c22c  fmuls 5, 4, 5
  033c230  stfs 7, 112(1)
  033c234  stfs 6, 116(1)
  033c238  stfs 5, 120(1)
  033c23c  b 0x33c258
  033c240  li 3, 0
  033c244  stw 3, 112(1)
  033c248  stw 3, 116(1)
  033c24c  stw 5, 120(1)
  033c250  stw 5, 124(1)
  033c254  stb 3, 188(31)
  033c258  addic 3, 30, 112
  033c25c  bl 0x4fff60
  033c260  nop
  033c264  cmpwi 3, 0
  033c268  bt 2, 0x33c33c
  033c26c  lfs 1, 224(31)
  033c270  lfs 2, 112(1)
  033c274  lis 3, 52
  033c278  fsubs 2, 1, 2
  033c27c  addi 3, 3, -16496
  033c280  lfs 1, 8(3)
  033c284  fabs 2, 2
  033c288  fcmpu 0, 2, 1
  033c28c  bt 1, 0x33c2c4
  033c290  lfs 2, 228(31)
  033c294  lfs 3, 116(1)
  033c298  fsubs 2, 2, 3
  033c29c  fabs 2, 2
  033c2a0  fcmpu 0, 2, 1
  033c2a4  bt 1, 0x33c2c4
  033c2a8  lfs 2, 232(31)
  033c2ac  lfs 3, 120(1)
  033c2b0  fsubs 2, 2, 3
  033c2b4  fabs 2, 2
  033c2b8  fcmpu 0, 2, 1
  033c2bc  cror 6, 0, 2
  033c2c0  bt 6, 0x33c33c
  033c2c4  lis 3, 52
  033c2c8  li 4, 28
  033c2cc  vspltisw 2, -1
  033c2d0  addi 3, 3, -16496
  033c2d4  lis 5, 114
  033c2d8  li 6, -3056
  033c2dc  vslw 2, 2, 2
  033c2e0  lvlx 3, 4, 3
  033c2e4  li 8, 112
  033c2e8  vspltw 3, 3, 0
  033c2ec  lvlx 4, 6, 5
  033c2f0  li 7, 1024
  033c2f4  vmaddfp 2, 4, 3, 2
  033c2f8  addic 6, 31, 16
  033c2fc  li 4, 8
  033c300  ori 5, 31, 0
  033c304  vctsxs 2, 2, 0
  033c308  vspltw 2, 2, 0
  033c30c  stvewx 2, 8, 30
  033c310  lfs 29, 32(3)
  033c314  lfs 2, 24(31)
  033c318  lwz 3, 36(31)
  033c31c  fadds 1, 2, 29
  033c320  stfs 1, 24(31)
  033c324  lwz 3, 40(3)
  033c328  bl 0x15ce18
  033c32c  nop
  033c330  lfs 1, 24(31)
  033c334  fsubs 1, 1, 29
  033c338  stfs 1, 24(31)
  033c33c  lis 3, 52
  033c340  lfs 1, 112(1)
  033c344  addic 5, 30, 96
  033c348  addi 4, 3, -16496
  033c34c  fmr 4, 31
  033c350  addic 3, 31, 224
  033c354  lfs 29, 36(4)
  033c358  lfs 28, 40(4)
  033c35c  fmr 2, 29
  033c360  fmr 3, 28
  033c364  bl 0x109b40
  033c368  nop
  033c36c  lfs 1, 116(1)
  033c370  fmr 3, 28
  033c374  addic 3, 31, 228
  033c378  fmr 2, 29
  033c37c  addic 5, 30, 100
  033c380  fmr 4, 31
  033c384  bl 0x109b40
  033c388  nop
  033c38c  lfs 1, 120(1)
  033c390  fmr 3, 28
  033c394  addic 3, 31, 232
  033c398  addic 5, 30, 104
  033c39c  fmr 2, 29
  033c3a0  fmr 4, 31
  033c3a4  bl 0x109b40
  033c3a8  nop
  033c3ac  lfs 3, 228(31)
  033c3b0  lfs 2, 224(31)
  033c3b4  fmuls 1, 3, 3
  033c3b8  lfs 4, 232(31)
  033c3bc  fmr 5, 31
  033c3c0  fmadds 1, 2, 2, 1
  033c3c4  fmr 6, 5
  033c3c8  fmadds 1, 4, 4, 1
  033c3cc  fmr 7, 6
  033c3d0  fsqrts 8, 1
  033c3d4  fcmpu 0, 8, 7
  033c3d8  bt 2, 0x33c428
  033c3dc  frsqrte 5, 1
  033c3e0  lis 3, 52
  033c3e4  addi 3, 3, -16496
  033c3e8  lfs 6, 24(3)
  033c3ec  fmuls 7, 1, 5
  033c3f0  fmuls 8, 6, 5
  033c3f4  fnmsubs 7, 7, 5, 30
  033c3f8  fmadds 5, 7, 8, 5
  033c3fc  fmuls 7, 1, 5
  033c400  fmuls 8, 6, 5
  033c404  fnmsubs 7, 7, 5, 30
  033c408  fmadds 5, 7, 8, 5
  033c40c  fmuls 1, 1, 5
  033c410  fmuls 6, 6, 5
  033c414  fnmsubs 1, 1, 5, 30
  033c418  fmadds 5, 1, 6, 5
  033c41c  fmuls 7, 2, 5
  033c420  fmuls 6, 3, 5
  033c424  fmuls 5, 4, 5
  033c428  fmuls 1, 6, 6
  033c42c  fmr 2, 31
  033c430  stfs 7, 224(31)
  033c434  stfs 6, 228(31)
  033c438  stfs 5, 232(31)
  033c43c  fneg 1, 1
  033c440  fmr 3, 2
  033c444  fneg 1, 1
  033c448  fmadds 1, 5, 5, 1
  033c44c  fsqrts 4, 1
  033c450  fcmpu 0, 4, 3
  033c454  bt 2, 0x33c4a4
  033c458  frsqrte 2, 1
  033c45c  lis 3, 52
  033c460  addi 3, 3, -16496
  033c464  lfs 3, 24(3)
  033c468  fmuls 4, 1, 2
  033c46c  fmuls 8, 3, 2
  033c470  fnmsubs 4, 4, 2, 30
  033c474  fmadds 2, 4, 8, 2
  033c478  fmuls 4, 1, 2
  033c47c  fmuls 8, 3, 2
  033c480  fnmsubs 4, 4, 2, 30
  033c484  fmadds 2, 4, 8, 2
  033c488  fmuls 1, 1, 2
  033c48c  fmuls 3, 3, 2
  033c490  fnmsubs 1, 1, 2, 30
  033c494  fmadds 3, 1, 3, 2
  033c498  fmuls 2, 6, 3
  033c49c  fmuls 3, 5, 3
  033c4a0  fneg 2, 2
  033c4a4  fmuls 1, 2, 6
  033c4a8  fmuls 4, 3, 7
  033c4ac  li 3, 0
  033c4b0  fmsubs 7, 2, 7, 31
  033c4b4  stw 3, 208(31)
  033c4b8  stfs 3, 212(31)
  033c4bc  stfs 2, 216(31)
  033c4c0  stw 3, 204(31)
  033c4c4  stw 3, 220(31)
  033c4c8  fmsubs 1, 3, 5, 1
  033c4cc  fmsubs 2, 31, 6, 4
  033c4d0  stfs 7, 196(31)
  033c4d4  stw 3, 236(31)
  033c4d8  stfs 1, 192(31)
  033c4dc  stfs 2, 200(31)
  033c4e0  ld 0, 224(1)
  033c4e4  mtlr 0
  033c4e8  lfd 28, 176(1)
  033c4ec  lfd 29, 184(1)
  033c4f0  lfd 30, 192(1)
  033c4f4  lfd 31, 200(1)
  033c4f8  ld 30, 160(1)
  033c4fc  ld 31, 168(1)
  033c500  addi 1, 1, 208
  033c504  blr

UpdateMoby_309:   # 0x33c510, 0x168 bytes
  033c510  stdu 1, -160(1)
  033c514  mflr 0
  033c518  std 0, 176(1)
  033c51c  std 30, 144(1)
  033c520  lfs 1, 64(3)
  033c524  std 31, 152(1)
  033c528  lwz 30, 120(3)
  033c52c  ori 31, 3, 0
  033c530  lfs 2, 68(3)
  033c534  stfs 1, 112(1)
  033c538  lfs 1, 72(3)
  033c53c  stfs 2, 116(1)
  033c540  lfs 2, 76(3)
  033c544  lbz 3, 32(3)
  033c548  stfs 1, 120(1)
  033c54c  cmpwi 3, 0
  033c550  cmpwi 1, 3, -1
  033c554  std 29, 136(1)
  033c558  std 28, 128(1)
  033c55c  stfs 2, 124(1)
  033c560  bt 1, 0x33c620
  033c564  bf 5, 0x33c620
  033c568  lis 3, 52
  033c56c  lhz 4, 52(31)
  033c570  lfs 1, 24(31)
  033c574  li 5, 0
  033c578  addi 3, 3, -15096
  033c57c  ori 4, 4, 256
  033c580  li 7, 98
  033c584  vspltisw 2, 0
  033c588  li 8, 99
  033c58c  li 6, 101
  033c590  sth 4, 52(31)
  033c594  li 9, 103
  033c598  lfs 2, 0(3)
  033c59c  li 4, 97
  033c5a0  li 3, 1
  033c5a4  fadds 1, 1, 2
  033c5a8  li 11, 105
  033c5ac  li 29, 106
  033c5b0  stb 3, 32(31)
  033c5b4  li 10, 107
  033c5b8  stb 5, 188(31)
  033c5bc  li 12, 109
  033c5c0  stw 3, 92(30)
  033c5c4  li 28, 64
  033c5c8  stw 5, 112(30)
  033c5cc  li 3, 102
  033c5d0  stfs 1, 24(31)
  033c5d4  stb 5, 96(30)
  033c5d8  stbx 5, 30, 4
  033c5dc  stbx 5, 30, 7
  033c5e0  stbx 5, 30, 8
  033c5e4  li 4, 111
  033c5e8  stb 5, 100(30)
  033c5ec  stbx 5, 30, 6
  033c5f0  stbx 5, 30, 3
  033c5f4  stbx 5, 30, 9
  033c5f8  stb 5, 104(30)
  033c5fc  li 3, 110
  033c600  stbx 5, 30, 11
  033c604  stbx 5, 30, 29
  033c608  stbx 5, 30, 10
  033c60c  stb 5, 108(30)
  033c610  stbx 5, 30, 12
  033c614  stbx 5, 30, 3
  033c618  stbx 5, 30, 4
  033c61c  stvx 2, 28, 31
  033c620  lis 3, 52
  033c624  lis 4, 129
  033c628  addi 5, 3, -15096
  033c62c  ori 3, 31, 0
  033c630  lfs 1, 7660(4)
  033c634  lfs 2, 4(5)
  033c638  bl 0x33bfc0
  033c63c  lis 4, 161
  033c640  addic 3, 30, 32
  033c644  addic 4, 4, 23856
  033c648  addic 5, 1, 112
  033c64c  addic 6, 31, 64
  033c650  bl 0x112900
  033c654  nop
  033c658  ld 0, 176(1)
  033c65c  mtlr 0
  033c660  ld 28, 128(1)
  033c664  ld 29, 136(1)
  033c668  ld 30, 144(1)
  033c66c  ld 31, 152(1)
  033c670  addi 1, 1, 160
  033c674  blr

M309_0033c678:   # 0x33c678, 0x14 bytes
  033c678  lis 3, 129
  033c67c  lis 4, 1
  033c680  addic 3, 3, 7676
  033c684  stw 4, 72(3)
  033c688  blr

M31_0033c6e0:   # 0x33c6e0, 0x3e4 bytes
  033c6e0  stdu 1, -304(1)
  033c6e4  mflr 0
  033c6e8  std 0, 320(1)
  033c6ec  stfd 25, 248(1)
  033c6f0  stfd 26, 256(1)
  033c6f4  stfd 27, 264(1)
  033c6f8  stfd 28, 272(1)
  033c6fc  stfd 29, 280(1)
  033c700  stfd 30, 288(1)
  033c704  stfd 31, 296(1)
  033c708  addi 0, 1, 208
  033c70c  stvx 31, 0, 0
  033c710  lis 5, 52
  033c714  std 31, 240(1)
  033c718  std 29, 224(1)
  033c71c  lfs 2, 72(3)
  033c720  ori 31, 4, 0
  033c724  std 30, 232(1)
  033c728  addi 29, 5, -14704
  033c72c  bl 0x502578
  033c730  nop
  033c734  lfs 2, 0(29)
  033c738  lfs 3, 4(29)
  033c73c  fadds 2, 1, 2
  033c740  fsubs 5, 3, 1
  033c744  lfs 4, 8(29)
  033c748  li 30, 0
  033c74c  li 3, 56
  033c750  fsubs 3, 3, 2
  033c754  fsub 7, 1, 5
  033c758  fsubs 6, 4, 2
  033c75c  fsubs 4, 4, 1
  033c760  fsub 8, 2, 3
  033c764  fsel 1, 7, 5, 1
  033c768  lfs 5, 12(29)
  033c76c  fsel 2, 8, 3, 2
  033c770  fsub 3, 4, 1
  033c774  fsub 8, 6, 2
  033c778  fsel 1, 3, 4, 1
  033c77c  lfs 3, 16(29)
  033c780  lfs 4, 20(29)
  033c784  lfs 9, 24(29)
  033c788  fsel 2, 8, 6, 2
  033c78c  fmuls 6, 1, 1
  033c790  fmuls 7, 2, 2
  033c794  fmuls 8, 6, 1
  033c798  fmuls 10, 7, 2
  033c79c  fmuls 11, 6, 8
  033c7a0  fmadds 1, 8, 5, 1
  033c7a4  lfs 8, 28(29)
  033c7a8  fmuls 12, 7, 10
  033c7ac  fmadds 2, 10, 5, 2
  033c7b0  fmuls 5, 6, 11
  033c7b4  fmadds 1, 11, 3, 1
  033c7b8  lfs 10, 0(31)
  033c7bc  lfs 11, 4(31)
  033c7c0  fmuls 13, 7, 12
  033c7c4  fmadds 2, 12, 3, 2
  033c7c8  fmuls 3, 6, 5
  033c7cc  fmadds 1, 5, 4, 1
  033c7d0  lfs 5, 8(31)
  033c7d4  lfs 6, 12(31)
  033c7d8  lis 31, 161
  033c7dc  addic 31, 31, 23856
  033c7e0  fmuls 7, 7, 13
  033c7e4  fmadds 2, 13, 4, 2
  033c7e8  fmadds 1, 3, 9, 1
  033c7ec  fmadds 2, 7, 9, 2
  033c7f0  fmuls 1, 1, 8
  033c7f4  fmuls 2, 2, 8
  033c7f8  fadds 3, 11, 1
  033c7fc  stfs 1, 116(1)
  033c800  fadds 1, 10, 2
  033c804  stfs 2, 112(1)
  033c808  lfs 30, 32(29)
  033c80c  stw 30, 120(1)
  033c810  stfs 3, 132(1)
  033c814  stfs 5, 136(1)
  033c818  stfs 6, 140(1)
  033c81c  stfs 1, 128(1)
  033c820  lfs 26, 36(29)
  033c824  lfs 27, 40(29)
  033c828  lfs 31, 44(29)
  033c82c  lfs 28, 48(29)
  033c830  lfs 29, 52(29)
  033c834  lvlx 31, 3, 29
  033c838  vspltw 31, 31, 0
  033c83c  li 3, 2
  033c840  bl 0xfc620
  033c844  nop
  033c848  ori 29, 3, 0
  033c84c  li 3, 2
  033c850  bl 0xfc620
  033c854  nop
  033c858  li 4, 0
  033c85c  fmr 1, 26
  033c860  neg 5, 29
  033c864  fmr 2, 27
  033c868  subc 3, 4, 3
  033c86c  subc 4, 29, 5
  033c870  cntlzw 3, 3
  033c874  sldi 3, 3, 58
  033c878  sradi 3, 3, 63
  033c87c  and 3, 3, 4
  033c880  addc 29, 5, 3
  033c884  bl 0xfcbe8
  033c888  nop
  033c88c  li 3, 10
  033c890  fmr 25, 1
  033c894  li 4, 127
  033c898  bl 0xfe484
  033c89c  nop
  033c8a0  slwi 4, 3, 8
  033c8a4  fmr 1, 31
  033c8a8  slwi 5, 3, 16
  033c8ac  fmr 2, 28
  033c8b0  or 3, 4, 3
  033c8b4  fmr 3, 29
  033c8b8  ori 7, 29, 0
  033c8bc  fmr 4, 25
  033c8c0  or 3, 3, 5
  033c8c4  ori 8, 31, 0
  033c8c8  oris 10, 3, 32512
  033c8cc  addic 3, 1, 128
  033c8d0  extsw 10, 10
  033c8d4  bl 0x126f50
  033c8d8  nop
  033c8dc  cmpwi 3, 0
  033c8e0  bt 2, 0x33c928
  033c8e4  vspltisw 2, -1
  033c8e8  lis 4, 114
  033c8ec  li 5, -3056
  033c8f0  vslw 2, 2, 2
  033c8f4  li 6, 127
  033c8f8  li 7, 43
  033c8fc  lvlx 3, 5, 4
  033c900  li 4, 10
  033c904  vmaddfp 2, 3, 31, 2
  033c908  li 5, 2
  033c90c  vctsxs 2, 2, 0
  033c910  vsplth 3, 2, 1
  033c914  vspltb 2, 2, 3
  033c918  stvehx 3, 4, 3
  033c91c  stw 5, 36(3)
  033c920  stb 6, 42(3)
  033c924  stvebx 2, 7, 3
  033c928  addic 30, 30, 1
  033c92c  cmpwi 30, 6
  033c930  bt 0, 0x33c83c
  033c934  lfs 1, 112(1)
  033c938  lis 3, 52
  033c93c  lfs 2, 116(1)
  033c940  stfs 1, 144(1)
  033c944  addi 30, 3, -14704
  033c948  lfs 3, 120(1)
  033c94c  stfs 2, 148(1)
  033c950  lfs 4, 124(1)
  033c954  stfs 3, 152(1)
  033c958  stfs 4, 156(1)
  033c95c  lfs 4, 60(30)
  033c960  fmuls 1, 1, 4
  033c964  fmuls 2, 2, 4
  033c968  fmuls 3, 3, 4
  033c96c  stfs 1, 112(1)
  033c970  stfs 2, 116(1)
  033c974  stfs 3, 120(1)
  033c978  lfs 1, 64(30)
  033c97c  lfs 2, 68(30)
  033c980  bl 0xfcbe8
  033c984  nop
  033c988  lfs 2, 128(1)
  033c98c  li 31, 0
  033c990  stfs 1, 120(1)
  033c994  lfs 1, 132(1)
  033c998  stfs 2, 176(1)
  033c99c  lfs 2, 136(1)
  033c9a0  stfs 1, 180(1)
  033c9a4  lfs 1, 140(1)
  033c9a8  stfs 2, 184(1)
  033c9ac  stfs 1, 188(1)
  033c9b0  lfs 28, 72(30)
  033c9b4  lfs 29, 76(30)
  033c9b8  fmr 1, 30
  033c9bc  fmr 2, 28
  033c9c0  bl 0xfe4f0
  033c9c4  nop
  033c9c8  extsw 3, 31
  033c9cc  addic 30, 1, 160
  033c9d0  addic 4, 1, 112
  033c9d4  std 3, 192(1)
  033c9d8  addic 5, 1, 144
  033c9dc  ori 3, 30, 0
  033c9e0  lfd 2, 192(1)
  033c9e4  fcfid 2, 2
  033c9e8  frsp 2, 2
  033c9ec  fmadds 1, 2, 29, 1
  033c9f0  bl 0x1113e0
  033c9f4  nop
  033c9f8  fmr 1, 30
  033c9fc  fmr 2, 31
  033ca00  bl 0xfe4f0
  033ca04  nop
  033ca08  lfs 2, 176(1)
  033ca0c  fadds 3, 2, 1
  033ca10  fmr 1, 30
  033ca14  fmr 2, 31
  033ca18  stfs 3, 128(1)
  033ca1c  bl 0xfe4f0
  033ca20  nop
  033ca24  lfs 2, 180(1)
  033ca28  fadds 3, 2, 1
  033ca2c  fmr 1, 30
  033ca30  fmr 2, 31
  033ca34  stfs 3, 132(1)
  033ca38  bl 0xfe4f0
  033ca3c  nop
  033ca40  lfs 2, 184(1)
  033ca44  addic 3, 1, 128
  033ca48  ori 4, 30, 0
  033ca4c  fadds 1, 2, 1
  033ca50  stfs 1, 136(1)
  033ca54  bl 0x125e08
  033ca58  nop
  033ca5c  addic 31, 31, 1
  033ca60  cmpwi 31, 16
  033ca64  bt 0, 0x33c9b8
  033ca68  lis 3, 129
  033ca6c  addic 4, 1, 176
  033ca70  addic 3, 3, 7888
  033ca74  li 5, 0
  033ca78  li 6, 0
  033ca7c  bl 0x3fda38
  033ca80  nop
  033ca84  li 0, 208
  033ca88  lvx 31, 1, 0
  033ca8c  ld 0, 320(1)
  033ca90  mtlr 0
  033ca94  lfd 25, 248(1)
  033ca98  lfd 26, 256(1)
  033ca9c  lfd 27, 264(1)
  033caa0  lfd 28, 272(1)
  033caa4  lfd 29, 280(1)
  033caa8  lfd 30, 288(1)
  033caac  lfd 31, 296(1)
  033cab0  ld 29, 224(1)
  033cab4  ld 30, 232(1)
  033cab8  ld 31, 240(1)
  033cabc  addi 1, 1, 304
  033cac0  blr

M31_0033cad0:   # 0x33cad0, 0x2e4 bytes
  033cad0  stdu 1, -256(1)
  033cad4  mflr 0
  033cad8  std 0, 272(1)
  033cadc  stfd 26, 208(1)
  033cae0  stfd 27, 216(1)
  033cae4  stfd 28, 224(1)
  033cae8  stfd 29, 232(1)
  033caec  stfd 30, 240(1)
  033caf0  stfd 31, 248(1)
  033caf4  fmr 28, 4
  033caf8  std 30, 192(1)
  033cafc  fmr 27, 3
  033cb00  ori 30, 3, 0
  033cb04  fmr 26, 2
  033cb08  lis 3, 52
  033cb0c  addic 7, 1, 112
  033cb10  std 27, 168(1)
  033cb14  fmr 31, 7
  033cb18  addi 27, 3, -13628
  033cb1c  fmr 30, 6
  033cb20  std 28, 176(1)
  033cb24  ori 3, 4, 0
  033cb28  fmr 29, 5
  033cb2c  std 31, 200(1)
  033cb30  ori 28, 8, 0
  033cb34  ori 31, 9, 0
  033cb38  li 8, 0
  033cb3c  std 29, 184(1)
  033cb40  ori 4, 7, 0
  033cb44  bl 0x10ce18
  033cb48  nop
  033cb4c  ori 29, 3, 0
  033cb50  lfs 1, 112(1)
  033cb54  addic 3, 30, 16
  033cb58  fmr 2, 26
  033cb5c  ori 5, 28, 0
  033cb60  fmr 3, 27
  033cb64  fmr 4, 28
  033cb68  bl 0x109b40
  033cb6c  nop
  033cb70  addic 3, 30, 20
  033cb74  lfs 1, 116(1)
  033cb78  addic 5, 28, 4
  033cb7c  fmr 2, 26
  033cb80  fmr 3, 27
  033cb84  fmr 4, 28
  033cb88  bl 0x109b40
  033cb8c  nop
  033cb90  lfs 1, 120(1)
  033cb94  addic 3, 30, 24
  033cb98  fmr 2, 26
  033cb9c  addic 5, 28, 8
  033cba0  fmr 3, 27
  033cba4  fmr 4, 28
  033cba8  bl 0x109b40
  033cbac  nop
  033cbb0  lwz 3, 0(28)
  033cbb4  lwz 4, 4(28)
  033cbb8  lfs 1, 0(28)
  033cbbc  lfs 2, 4(28)
  033cbc0  fabs 5, 1
  033cbc4  fabs 2, 2
  033cbc8  rlwinm 4, 4, 3, 29, 29
  033cbcc  lis 5, 115
  033cbd0  addic 5, 5, 22784
  033cbd4  fsubs 1, 5, 2
  033cbd8  stfs 1, 128(1)
  033cbdc  lfs 1, 0(27)
  033cbe0  lwz 6, 128(1)
  033cbe4  lfs 3, 128(1)
  033cbe8  rlwimi 4, 6, 2, 30, 30
  033cbec  fsub 4, 3, 1
  033cbf0  fsub 6, 3, 1
  033cbf4  rlwimi 4, 3, 4, 28, 28
  033cbf8  ori 3, 5, 0
  033cbfc  rlwimi 3, 4, 2, 26, 28
  033cc00  slwi 4, 4, 2
  033cc04  clrldi 3, 3, 32
  033cc08  fsel 4, 4, 5, 2
  033cc0c  lfsx 3, 5, 4
  033cc10  fsel 5, 6, 2, 5
  033cc14  lfs 2, 4(3)
  033cc18  fcmpu 0, 4, 1
  033cc1c  bt 1, 0x33cc24
  033cc20  b 0x33cd48
  033cc24  fsubs 6, 5, 4
  033cc28  fadds 4, 5, 4
  033cc2c  addic 6, 1, 16
  033cc30  li 3, 2
  033cc34  addic 5, 6, 116
  033cc38  addic 4, 6, 132
  033cc3c  mtctr 3
  033cc40  fdivs 4, 6, 4
  033cc44  fmuls 6, 4, 4
  033cc48  stfs 4, 144(1)
  033cc4c  stfs 4, 136(1)
  033cc50  stfs 4, 140(1)
  033cc54  stfs 4, 132(1)
  033cc58  lfs 7, 144(1)
  033cc5c  lfs 8, 136(1)
  033cc60  lfs 9, 140(1)
  033cc64  fmuls 4, 6, 6
  033cc68  fmuls 8, 8, 6
  033cc6c  fmuls 7, 7, 4
  033cc70  fmuls 5, 4, 4
  033cc74  fmuls 4, 9, 4
  033cc78  stfs 8, 136(1)
  033cc7c  fmuls 6, 7, 6
  033cc80  stfs 4, 140(1)
  033cc84  stfs 6, 144(1)
  033cc88  lfs 4, 116(6)
  033cc8c  fmuls 4, 4, 5
  033cc90  stfs 4, 132(6)
  033cc94  lfs 4, 4(5)
  033cc98  addic 6, 6, 8
  033cc9c  addic 5, 5, 8
  033cca0  fmuls 4, 4, 5
  033cca4  stfs 4, 4(4)
  033cca8  addic 4, 4, 8
  033ccac  bdnz 0x33cc88
  033ccb0  ori 7, 1, 0
  033ccb4  lis 6, 115
  033ccb8  li 8, 4
  033ccbc  addic 5, 7, 132
  033ccc0  addic 6, 6, 22752
  033ccc4  ori 4, 5, 0
  033ccc8  mtctr 8
  033cccc  lfs 4, 132(7)
  033ccd0  lfs 5, 0(6)
  033ccd4  fmuls 4, 4, 5
  033ccd8  lfs 5, 4(6)
  033ccdc  addic 6, 6, 8
  033cce0  stfs 4, 132(7)
  033cce4  lfs 4, 4(5)
  033cce8  addic 7, 7, 8
  033ccec  fmuls 4, 4, 5
  033ccf0  stfs 4, 4(5)
  033ccf4  addic 5, 5, 8
  033ccf8  bdnz 0x33cccc
  033ccfc  ori 5, 3, 0
  033cd00  ori 3, 1, 0
  033cd04  mtctr 5
  033cd08  lfs 4, 132(3)
  033cd0c  fadds 1, 1, 4
  033cd10  addic 3, 3, 16
  033cd14  lfs 4, 4(4)
  033cd18  lfs 5, 8(4)
  033cd1c  lfs 6, 12(4)
  033cd20  addic 4, 4, 16
  033cd24  fadds 1, 1, 4
  033cd28  fadds 1, 1, 5
  033cd2c  fadds 1, 1, 6
  033cd30  bdnz 0x33cd08
  033cd34  lis 3, 52
  033cd38  addi 3, 3, -13628
  033cd3c  lfs 4, 4(3)
  033cd40  fadds 1, 1, 4
  033cd44  fmadds 1, 1, 3, 2
  033cd48  ori 3, 30, 0
  033cd4c  ori 5, 31, 0
  033cd50  fmr 2, 29
  033cd54  fmr 3, 30
  033cd58  fmr 4, 31
  033cd5c  bl 0xff2e8
  033cd60  nop
  033cd64  cmpwi 29, 0
  033cd68  bt 2, 0x33cd74
  033cd6c  li 3, 1
  033cd70  b 0x33cd78
  033cd74  li 3, 0
  033cd78  ld 0, 272(1)
  033cd7c  mtlr 0
  033cd80  lfd 26, 208(1)
  033cd84  lfd 27, 216(1)
  033cd88  lfd 28, 224(1)
  033cd8c  lfd 29, 232(1)
  033cd90  lfd 30, 240(1)
  033cd94  lfd 31, 248(1)
  033cd98  ld 27, 168(1)
  033cd9c  ld 28, 176(1)
  033cda0  ld 29, 184(1)
  033cda4  ld 30, 192(1)
  033cda8  ld 31, 200(1)
  033cdac  addi 1, 1, 256
  033cdb0  blr
