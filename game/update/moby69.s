# game/update/moby69.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M69_0041bf10:   # 0x41bf10, 0x1b70 bytes
  041bf10  stdu 1, -752(1)
  041bf14  mflr 0
  041bf18  std 0, 768(1)
  041bf1c  stfd 20, 656(1)
  041bf20  stfd 21, 664(1)
  041bf24  stfd 22, 672(1)
  041bf28  stfd 23, 680(1)
  041bf2c  stfd 24, 688(1)
  041bf30  stfd 25, 696(1)
  041bf34  stfd 26, 704(1)
  041bf38  stfd 27, 712(1)
  041bf3c  stfd 28, 720(1)
  041bf40  stfd 29, 728(1)
  041bf44  stfd 30, 736(1)
  041bf48  stfd 31, 744(1)
  041bf4c  lis 5, 66
  041bf50  li 6, 0
  041bf54  addi 5, 5, -16828
  041bf58  std 31, 648(1)
  041bf5c  lis 7, 114
  041bf60  std 30, 640(1)
  041bf64  ori 31, 3, 0
  041bf68  ori 30, 4, 0
  041bf6c  lfs 27, 0(5)
  041bf70  stw 6, 192(1)
  041bf74  stw 6, 196(1)
  041bf78  stw 6, 200(1)
  041bf7c  stw 6, 204(1)
  041bf80  lfs 26, 4(5)
  041bf84  lfs 1, -3052(7)
  041bf88  lhz 5, 52(3)
  041bf8c  fmuls 1, 1, 26
  041bf90  rlwimi 5, 6, 0, 23, 23
  041bf94  lbz 7, 188(3)
  041bf98  cmpwi 7, 0
  041bf9c  sth 5, 52(3)
  041bfa0  std 29, 632(1)
  041bfa4  std 28, 624(1)
  041bfa8  std 27, 616(1)
  041bfac  stfs 1, 200(1)
  041bfb0  bf 2, 0x41c1b0
  041bfb4  lis 3, 66
  041bfb8  lis 4, 114
  041bfbc  addi 3, 3, -16828
  041bfc0  lfs 1, 8(3)
  041bfc4  lfs 2, -3056(4)
  041bfc8  lhz 3, 104(30)
  041bfcc  fmuls 1, 2, 1
  041bfd0  extsh 4, 3
  041bfd4  fctiwz 1, 1
  041bfd8  stfd 1, 592(1)
  041bfdc  lwz 5, 596(1)
  041bfe0  cmpw 4, 5
  041bfe4  bf 1, 0x41c184
  041bfe8  lis 29, 150
  041bfec  addic 29, 29, 19008
  041bff0  lwz 3, 180(29)
  041bff4  rlwinm 3, 3, 0, 25, 25
  041bff8  cmpwi 3, 0
  041bffc  bt 2, 0x41c070
  041c000  lwz 3, 268(30)
  041c004  cmpwi 3, -1
  041c008  bt 2, 0x41c04c
  041c00c  sldi 4, 3, 7
  041c010  sldi 6, 3, 4
  041c014  lis 5, 150
  041c018  subc 4, 4, 6
  041c01c  addic 5, 5, 14176
  041c020  extsw 4, 4
  041c024  addc 4, 5, 4
  041c028  lwz 5, 136(4)
  041c02c  cmpw 5, 31
  041c030  bf 2, 0x41c04c
  041c034  lbz 4, 116(4)
  041c038  cmpwi 4, 0
  041c03c  bt 2, 0x41c04c
  041c040  extsw 3, 3
  041c044  bl 0x15cdb0
  041c048  nop
  041c04c  li 6, -1
  041c050  li 3, 1
  041c054  li 4, 4
  041c058  ori 5, 31, 0
  041c05c  stw 6, 268(30)
  041c060  bl 0x15d12c
  041c064  nop
  041c068  stw 3, 268(30)
  041c06c  b 0x41c0d4
  041c070  lwz 3, 184(29)
  041c074  rlwinm 3, 3, 0, 25, 25
  041c078  cmpwi 3, 0
  041c07c  bt 2, 0x41c0d4
  041c080  lwz 3, 268(30)
  041c084  cmpwi 3, -1
  041c088  bt 2, 0x41c0cc
  041c08c  sldi 4, 3, 7
  041c090  sldi 6, 3, 4
  041c094  lis 5, 150
  041c098  subc 4, 4, 6
  041c09c  addic 5, 5, 14176
  041c0a0  extsw 4, 4
  041c0a4  addc 4, 5, 4
  041c0a8  lwz 5, 136(4)
  041c0ac  cmpw 5, 31
  041c0b0  bf 2, 0x41c0cc
  041c0b4  lbz 4, 116(4)
  041c0b8  cmpwi 4, 0
  041c0bc  bt 2, 0x41c0cc
  041c0c0  extsw 3, 3
  041c0c4  bl 0x15cdb0
  041c0c8  nop
  041c0cc  li 3, -1
  041c0d0  stw 3, 268(30)
  041c0d4  lwz 3, 176(29)
  041c0d8  rlwinm 3, 3, 0, 25, 25
  041c0dc  cmpwi 3, 0
  041c0e0  bt 2, 0x41c128
  041c0e4  lis 3, 66
  041c0e8  lfs 1, 100(30)
  041c0ec  lis 4, 114
  041c0f0  addi 3, 3, -16828
  041c0f4  lfs 2, 12(3)
  041c0f8  lfs 3, -3064(4)
  041c0fc  lis 4, 114
  041c100  fmadds 2, 3, 2, 1
  041c104  stfs 2, 100(30)
  041c108  lfs 1, 16(3)
  041c10c  lfs 3, -3052(4)
  041c110  fmuls 1, 3, 1
  041c114  fcmpu 0, 2, 1
  041c118  cror 6, 0, 2
  041c11c  bt 6, 0x41c1bc
  041c120  stfs 1, 100(30)
  041c124  b 0x41c1bc
  041c128  lis 3, 66
  041c12c  lis 5, 114
  041c130  lfs 1, 100(30)
  041c134  addi 3, 3, -16828
  041c138  lis 4, 114
  041c13c  lfs 2, 20(3)
  041c140  lfs 3, 24(3)
  041c144  lfs 4, 28(3)
  041c148  lfs 5, -3052(5)
  041c14c  lfs 6, -3064(4)
  041c150  fmsubs 7, 5, 2, 1
  041c154  fmuls 8, 6, 3
  041c158  fmuls 4, 6, 4
  041c15c  fmuls 9, 5, 2
  041c160  fmadds 3, 6, 3, 1
  041c164  fmsubs 2, 5, 2, 8
  041c168  fmadds 4, 4, 7, 1
  041c16c  fsub 5, 9, 1
  041c170  fsub 1, 1, 2
  041c174  fsel 2, 5, 9, 4
  041c178  fsel 1, 1, 2, 3
  041c17c  stfs 1, 100(30)
  041c180  b 0x41c1bc
  041c184  lis 4, 66
  041c188  addic 3, 3, 1
  041c18c  addi 4, 4, -16828
  041c190  lis 5, 114
  041c194  sth 3, 104(30)
  041c198  lfs 1, 100(30)
  041c19c  lfs 2, 32(4)
  041c1a0  lfs 3, -3064(5)
  041c1a4  fmadds 1, 3, 2, 1
  041c1a8  stfs 1, 100(30)
  041c1ac  b 0x41c1bc
  041c1b0  lis 3, 14545
  041c1b4  ori 3, 3, 46871
  041c1b8  stw 3, 100(30)
  041c1bc  lis 3, 66
  041c1c0  lis 4, 114
  041c1c4  addi 3, 3, -16828
  041c1c8  lfs 1, 36(3)
  041c1cc  lfs 2, -3056(4)
  041c1d0  lhz 3, 104(30)
  041c1d4  fmuls 1, 2, 1
  041c1d8  extsh 3, 3
  041c1dc  fctiwz 1, 1
  041c1e0  stfd 1, 592(1)
  041c1e4  lwz 4, 596(1)
  041c1e8  cmpw 3, 4
  041c1ec  bf 1, 0x41c3c8
  041c1f0  lis 3, 66
  041c1f4  lis 4, 114
  041c1f8  addi 3, 3, -16828
  041c1fc  lis 5, 151
  041c200  lis 6, 150
  041c204  addic 5, 5, -25376
  041c208  addic 6, 6, 19008
  041c20c  lfs 2, -3064(4)
  041c210  lfs 4, 28(3)
  041c214  lfs 3, 40(3)
  041c218  lfs 1, 7456(5)
  041c21c  lwz 3, 160(6)
  041c220  lfs 31, 7460(5)
  041c224  rlwinm 3, 3, 0, 22, 22
  041c228  cmpwi 3, 0
  041c22c  bt 2, 0x41c260
  041c230  lis 3, 66
  041c234  addi 3, 3, -16828
  041c238  lfs 3, 48(3)
  041c23c  fmuls 3, 2, 3
  041c240  lfs 6, 52(3)
  041c244  lfs 4, 44(3)
  041c248  fmuls 5, 2, 6
  041c24c  fdivs 1, 1, 3
  041c250  fdivs 31, 31, 3
  041c254  fmr 3, 4
  041c258  fmuls 1, 5, 1
  041c25c  fmuls 31, 5, 31
  041c260  lis 3, 66
  041c264  fmuls 30, 2, 3
  041c268  lis 28, 114
  041c26c  addi 29, 3, -16828
  041c270  fmuls 4, 2, 4
  041c274  addic 3, 30, 108
  041c278  addic 5, 30, 144
  041c27c  lfs 29, 56(29)
  041c280  lfs 5, -3060(28)
  041c284  fmr 3, 5
  041c288  fmuls 2, 5, 29
  041c28c  bl 0x109b40
  041c290  nop
  041c294  lfs 3, -3060(28)
  041c298  addic 3, 30, 112
  041c29c  fmr 1, 31
  041c2a0  addic 5, 30, 148
  041c2a4  fmuls 2, 3, 29
  041c2a8  fmr 4, 30
  041c2ac  bl 0x109b40
  041c2b0  nop
  041c2b4  lis 27, 114
  041c2b8  lfs 5, 60(29)
  041c2bc  lfs 1, 108(30)
  041c2c0  addic 3, 30, 48
  041c2c4  lfs 6, -3060(28)
  041c2c8  addic 5, 30, 152
  041c2cc  li 9, 0
  041c2d0  fmr 3, 6
  041c2d4  lfs 4, -3064(27)
  041c2d8  fmuls 2, 6, 5
  041c2dc  bl 0x10a050
  041c2e0  nop
  041c2e4  lfs 31, 48(29)
  041c2e8  lfs 2, -3064(27)
  041c2ec  lfs 1, 52(30)
  041c2f0  fmuls 2, 2, 31
  041c2f4  lfs 3, 112(30)
  041c2f8  fmuls 2, 2, 3
  041c2fc  bl 0x5025e0
  041c300  nop
  041c304  stfs 1, 52(30)
  041c308  lfs 1, -3064(27)
  041c30c  fmuls 3, 1, 31
  041c310  lfs 1, 56(30)
  041c314  lfs 4, 108(30)
  041c318  fmuls 2, 3, 4
  041c31c  bl 0x5025e0
  041c320  nop
  041c324  lwz 3, 52(30)
  041c328  lis 6, 16306
  041c32c  stfs 1, 56(30)
  041c330  srawi 4, 3, 31
  041c334  lwz 5, 68(31)
  041c338  ori 6, 6, 47298
  041c33c  srwi 7, 4, 1
  041c340  srawi 8, 5, 31
  041c344  xor 3, 7, 3
  041c348  subc 4, 3, 4
  041c34c  srwi 3, 8, 1
  041c350  cmpw 4, 6
  041c354  xor 3, 3, 5
  041c358  subc 3, 3, 8
  041c35c  bf 1, 0x41c370
  041c360  lis 4, 16306
  041c364  ori 4, 4, 47298
  041c368  stw 4, 52(30)
  041c36c  b 0x41c38c
  041c370  lis 5, -16307
  041c374  ori 5, 5, 18238
  041c378  cmpw 4, 5
  041c37c  bf 0, 0x41c38c
  041c380  lis 4, -16462
  041c384  ori 4, 4, 47298
  041c388  stw 4, 52(30)
  041c38c  lis 4, 16306
  041c390  ori 4, 4, 47298
  041c394  cmpw 3, 4
  041c398  bf 1, 0x41c3ac
  041c39c  lis 3, 16306
  041c3a0  ori 3, 3, 47298
  041c3a4  stw 3, 68(31)
  041c3a8  b 0x41c3c8
  041c3ac  lis 4, -16307
  041c3b0  ori 4, 4, 18238
  041c3b4  cmpw 3, 4
  041c3b8  bf 0, 0x41c3c8
  041c3bc  lis 3, -16462
  041c3c0  ori 3, 3, 47298
  041c3c4  stw 3, 68(31)
  041c3c8  lis 3, 66
  041c3cc  addi 4, 3, -16828
  041c3d0  lwz 3, 272(30)
  041c3d4  cmpwi 3, -1
  041c3d8  lfs 30, 64(4)
  041c3dc  lfs 29, 68(4)
  041c3e0  bt 2, 0x41c458
  041c3e4  lis 4, 165
  041c3e8  slwi 3, 3, 7
  041c3ec  lwz 4, 7128(4)
  041c3f0  addc 3, 4, 3
  041c3f4  clrldi 3, 3, 32
  041c3f8  lfs 1, 4(3)
  041c3fc  lfs 2, 20(3)
  041c400  lfs 3, 36(3)
  041c404  fadds 1, 1, 2
  041c408  lfs 2, 0(3)
  041c40c  lfs 4, 16(3)
  041c410  fmuls 3, 3, 3
  041c414  lfs 5, 32(3)
  041c418  fadds 2, 2, 4
  041c41c  lfs 4, 8(3)
  041c420  lfs 6, 24(3)
  041c424  lfs 7, 40(3)
  041c428  fadds 4, 4, 6
  041c42c  lfs 28, 48(3)
  041c430  fmuls 1, 1, 1
  041c434  lfs 24, 52(3)
  041c438  fmadds 3, 5, 5, 3
  041c43c  lfs 23, 56(3)
  041c440  fmadds 1, 2, 2, 1
  041c444  fmadds 30, 7, 7, 3
  041c448  fmadds 29, 4, 4, 1
  041c44c  fsqrts 30, 30
  041c450  fsqrts 29, 29
  041c454  b 0x41c46c
  041c458  lis 3, 133
  041c45c  addic 4, 3, 30752
  041c460  lfs 28, 30752(3)
  041c464  lfs 24, 4(4)
  041c468  lfs 23, 8(4)
  041c46c  lfs 1, 16(31)
  041c470  lis 3, 133
  041c474  lfs 2, 20(31)
  041c478  fsubs 3, 28, 1
  041c47c  fsubs 4, 24, 2
  041c480  addic 4, 3, 30752
  041c484  lis 5, 66
  041c488  lfs 5, 30752(3)
  041c48c  addi 5, 5, -16828
  041c490  fsubs 5, 1, 5
  041c494  lis 29, 115
  041c498  addic 29, 29, 22784
  041c49c  fabs 7, 3
  041c4a0  fabs 6, 4
  041c4a4  stfs 3, 384(1)
  041c4a8  lfs 3, 4(4)
  041c4ac  stfs 4, 388(1)
  041c4b0  fsubs 3, 2, 3
  041c4b4  fsubs 4, 7, 6
  041c4b8  fmuls 3, 3, 3
  041c4bc  stfs 4, 392(1)
  041c4c0  lwz 3, 384(1)
  041c4c4  lfs 4, 384(1)
  041c4c8  fmadds 22, 5, 5, 3
  041c4cc  lwz 4, 388(1)
  041c4d0  lfs 21, 56(30)
  041c4d4  lfs 3, 388(1)
  041c4d8  fabs 4, 4
  041c4dc  lfs 31, 72(5)
  041c4e0  rlwinm 4, 4, 3, 29, 29
  041c4e4  fabs 5, 3
  041c4e8  lwz 5, 392(1)
  041c4ec  lfs 3, 392(1)
  041c4f0  rlwimi 4, 5, 2, 30, 30
  041c4f4  fsub 8, 3, 27
  041c4f8  fsub 3, 3, 27
  041c4fc  rlwimi 4, 3, 4, 28, 28
  041c500  fsqrts 22, 22
  041c504  ori 3, 29, 0
  041c508  rlwimi 3, 4, 2, 26, 28
  041c50c  slwi 4, 4, 2
  041c510  clrldi 3, 3, 32
  041c514  fsel 6, 8, 4, 6
  041c518  lfsx 4, 29, 4
  041c51c  fsel 5, 3, 5, 7
  041c520  lfs 3, 4(3)
  041c524  fcmpu 0, 6, 27
  041c528  bt 1, 0x41c534
  041c52c  fmr 4, 27
  041c530  b 0x41c64c
  041c534  fsubs 7, 5, 6
  041c538  fadds 5, 5, 6
  041c53c  addic 3, 1, 16
  041c540  li 7, 2
  041c544  addic 4, 3, 540
  041c548  addic 5, 3, 556
  041c54c  mtctr 7
  041c550  fdivs 5, 7, 5
  041c554  fmuls 6, 5, 5
  041c558  stfs 5, 568(1)
  041c55c  stfs 5, 560(1)
  041c560  stfs 5, 564(1)
  041c564  stfs 5, 556(1)
  041c568  lfs 8, 568(1)
  041c56c  lfs 9, 560(1)
  041c570  lfs 10, 564(1)
  041c574  fmuls 7, 6, 6
  041c578  fmuls 9, 9, 6
  041c57c  fmuls 8, 8, 7
  041c580  fmuls 5, 7, 7
  041c584  fmuls 7, 10, 7
  041c588  stfs 9, 560(1)
  041c58c  fmuls 6, 8, 6
  041c590  stfs 7, 564(1)
  041c594  stfs 6, 568(1)
  041c598  lfs 6, 540(3)
  041c59c  fmuls 6, 6, 5
  041c5a0  stfs 6, 556(3)
  041c5a4  lfs 6, 4(4)
  041c5a8  addic 3, 3, 8
  041c5ac  addic 4, 4, 8
  041c5b0  fmuls 6, 6, 5
  041c5b4  stfs 6, 4(5)
  041c5b8  addic 5, 5, 8
  041c5bc  bdnz 0x41c598
  041c5c0  li 5, 4
  041c5c4  ori 3, 1, 0
  041c5c8  mtctr 5
  041c5cc  lis 4, 115
  041c5d0  addic 5, 3, 556
  041c5d4  addic 4, 4, 22752
  041c5d8  ori 6, 5, 0
  041c5dc  lfs 5, 556(3)
  041c5e0  lfs 6, 0(4)
  041c5e4  fmuls 5, 5, 6
  041c5e8  lfs 6, 4(4)
  041c5ec  addic 4, 4, 8
  041c5f0  stfs 5, 556(3)
  041c5f4  lfs 5, 4(5)
  041c5f8  addic 3, 3, 8
  041c5fc  fmuls 5, 5, 6
  041c600  stfs 5, 4(5)
  041c604  addic 5, 5, 8
  041c608  bdnz 0x41c5dc
  041c60c  fmr 5, 27
  041c610  ori 3, 1, 0
  041c614  mtctr 7
  041c618  lfs 6, 556(3)
  041c61c  fadds 5, 5, 6
  041c620  addic 3, 3, 16
  041c624  lfs 6, 4(6)
  041c628  lfs 7, 8(6)
  041c62c  lfs 8, 12(6)
  041c630  addic 6, 6, 16
  041c634  fadds 5, 5, 6
  041c638  fadds 5, 5, 7
  041c63c  fadds 5, 5, 8
  041c640  bdnz 0x41c618
  041c644  fadds 5, 5, 31
  041c648  fmadds 4, 5, 4, 3
  041c64c  lis 3, 66
  041c650  fmr 3, 21
  041c654  addi 3, 3, -16828
  041c658  lfs 25, 76(3)
  041c65c  fcmpu 0, 22, 25
  041c660  cror 6, 0, 2
  041c664  bt 6, 0x41c6cc
  041c668  fsubs 1, 22, 25
  041c66c  fsubs 2, 29, 25
  041c670  lis 3, 66
  041c674  addi 3, 3, -16828
  041c678  fdivs 3, 1, 2
  041c67c  lfs 5, 80(3)
  041c680  fmr 1, 4
  041c684  fmr 2, 21
  041c688  fsub 4, 3, 27
  041c68c  fsel 3, 4, 3, 27
  041c690  fsub 4, 5, 3
  041c694  fsel 3, 4, 3, 5
  041c698  fmuls 3, 3, 3
  041c69c  fmuls 3, 3, 3
  041c6a0  fmuls 3, 3, 3
  041c6a4  fmuls 20, 3, 3
  041c6a8  bl 0x5025e0
  041c6ac  nop
  041c6b0  fmuls 2, 20, 1
  041c6b4  fmr 1, 21
  041c6b8  bl 0x502578
  041c6bc  nop
  041c6c0  fmr 3, 1
  041c6c4  lfs 1, 16(31)
  041c6c8  lfs 2, 20(31)
  041c6cc  stfs 3, 56(30)
  041c6d0  fmr 4, 2
  041c6d4  fmr 3, 1
  041c6d8  fsubs 5, 24, 4
  041c6dc  fsubs 6, 28, 3
  041c6e0  fabs 8, 5
  041c6e4  fabs 7, 6
  041c6e8  stfs 6, 372(1)
  041c6ec  stfs 5, 376(1)
  041c6f0  lfs 21, 72(31)
  041c6f4  fsubs 5, 7, 8
  041c6f8  stfs 5, 380(1)
  041c6fc  lwz 3, 372(1)
  041c700  lfs 5, 372(1)
  041c704  lwz 4, 376(1)
  041c708  lfs 6, 376(1)
  041c70c  lwz 5, 380(1)
  041c710  rlwinm 4, 4, 3, 29, 29
  041c714  fabs 9, 6
  041c718  lfs 6, 380(1)
  041c71c  fabs 5, 5
  041c720  rlwimi 4, 5, 2, 30, 30
  041c724  fsub 10, 6, 27
  041c728  fsub 11, 6, 27
  041c72c  rlwimi 4, 3, 4, 28, 28
  041c730  ori 3, 29, 0
  041c734  rlwimi 3, 4, 2, 26, 28
  041c738  slwi 4, 4, 2
  041c73c  clrldi 3, 3, 32
  041c740  fsel 8, 10, 5, 8
  041c744  lfsx 5, 29, 4
  041c748  fsel 7, 11, 9, 7
  041c74c  lfs 6, 4(3)
  041c750  fcmpu 0, 8, 27
  041c754  bt 1, 0x41c760
  041c758  fmr 6, 27
  041c75c  b 0x41c878
  041c760  fsubs 9, 7, 8
  041c764  fadds 7, 7, 8
  041c768  addic 3, 1, 16
  041c76c  li 7, 2
  041c770  addic 5, 3, 524
  041c774  addic 4, 3, 508
  041c778  mtctr 7
  041c77c  fdivs 7, 9, 7
  041c780  fmuls 8, 7, 7
  041c784  stfs 7, 536(1)
  041c788  stfs 7, 528(1)
  041c78c  stfs 7, 532(1)
  041c790  stfs 7, 524(1)
  041c794  lfs 10, 536(1)
  041c798  lfs 11, 528(1)
  041c79c  lfs 12, 532(1)
  041c7a0  fmuls 9, 8, 8
  041c7a4  fmuls 11, 11, 8
  041c7a8  fmuls 10, 10, 9
  041c7ac  fmuls 7, 9, 9
  041c7b0  fmuls 9, 12, 9
  041c7b4  stfs 11, 528(1)
  041c7b8  fmuls 8, 10, 8
  041c7bc  stfs 9, 532(1)
  041c7c0  stfs 8, 536(1)
  041c7c4  lfs 8, 508(3)
  041c7c8  fmuls 8, 8, 7
  041c7cc  stfs 8, 524(3)
  041c7d0  lfs 8, 4(4)
  041c7d4  addic 4, 4, 8
  041c7d8  fmuls 8, 8, 7
  041c7dc  addic 3, 3, 8
  041c7e0  stfs 8, 4(5)
  041c7e4  addic 5, 5, 8
  041c7e8  bdnz 0x41c7c4
  041c7ec  li 5, 4
  041c7f0  ori 3, 1, 0
  041c7f4  mtctr 5
  041c7f8  lis 4, 115
  041c7fc  addic 5, 3, 524
  041c800  addic 4, 4, 22752
  041c804  ori 6, 5, 0
  041c808  lfs 7, 524(3)
  041c80c  lfs 8, 0(4)
  041c810  fmuls 7, 7, 8
  041c814  lfs 8, 4(4)
  041c818  addic 4, 4, 8
  041c81c  stfs 7, 524(3)
  041c820  lfs 7, 4(5)
  041c824  addic 3, 3, 8
  041c828  fmuls 7, 7, 8
  041c82c  stfs 7, 4(5)
  041c830  addic 5, 5, 8
  041c834  bdnz 0x41c808
  041c838  ori 3, 1, 0
  041c83c  fmr 7, 27
  041c840  mtctr 7
  041c844  lfs 8, 524(3)
  041c848  fadds 7, 7, 8
  041c84c  lfs 8, 4(6)
  041c850  addic 3, 3, 16
  041c854  lfs 9, 8(6)
  041c858  lfs 10, 12(6)
  041c85c  addic 6, 6, 16
  041c860  fadds 7, 7, 8
  041c864  fadds 7, 7, 9
  041c868  fadds 7, 7, 10
  041c86c  bdnz 0x41c844
  041c870  fadds 7, 7, 31
  041c874  fmadds 6, 7, 5, 6
  041c878  fcmpu 0, 22, 25
  041c87c  fmr 5, 21
  041c880  cror 6, 0, 2
  041c884  bt 6, 0x41c8f4
  041c888  fsubs 1, 22, 25
  041c88c  fsubs 2, 29, 25
  041c890  lis 3, 66
  041c894  addi 3, 3, -16828
  041c898  fdivs 3, 1, 2
  041c89c  lfs 4, 80(3)
  041c8a0  fmr 1, 6
  041c8a4  fmr 2, 21
  041c8a8  fsub 5, 3, 27
  041c8ac  fsel 3, 5, 3, 27
  041c8b0  fsub 5, 4, 3
  041c8b4  fsel 3, 5, 3, 4
  041c8b8  fmuls 3, 3, 3
  041c8bc  fmuls 3, 3, 3
  041c8c0  fmuls 3, 3, 3
  041c8c4  fmuls 29, 3, 3
  041c8c8  bl 0x5025e0
  041c8cc  nop
  041c8d0  fmuls 2, 29, 1
  041c8d4  fmr 1, 21
  041c8d8  bl 0x502578
  041c8dc  nop
  041c8e0  lfs 3, 16(31)
  041c8e4  lfs 4, 20(31)
  041c8e8  fmr 5, 1
  041c8ec  fmr 1, 3
  041c8f0  fmr 2, 4
  041c8f4  fsubs 4, 4, 24
  041c8f8  fsubs 3, 3, 28
  041c8fc  lfs 6, 24(31)
  041c900  stfs 5, 72(31)
  041c904  fmr 5, 6
  041c908  lfs 29, 52(30)
  041c90c  fmuls 4, 4, 4
  041c910  fsubs 6, 23, 5
  041c914  fmadds 3, 3, 3, 4
  041c918  stfs 6, 364(1)
  041c91c  fsqrts 4, 3
  041c920  fabs 3, 6
  041c924  fcmpu 1, 3, 25
  041c928  fabs 7, 4
  041c92c  stfs 4, 360(1)
  041c930  lwz 3, 364(1)
  041c934  lfs 6, 364(1)
  041c938  rlwinm 3, 3, 3, 29, 29
  041c93c  fabs 9, 6
  041c940  fsubs 4, 7, 3
  041c944  stfs 4, 368(1)
  041c948  lwz 4, 360(1)
  041c94c  lfs 4, 360(1)
  041c950  lwz 5, 368(1)
  041c954  fabs 8, 4
  041c958  lfs 4, 368(1)
  041c95c  rlwimi 3, 5, 2, 30, 30
  041c960  fsub 6, 4, 27
  041c964  fsub 10, 4, 27
  041c968  rlwimi 3, 4, 4, 28, 28
  041c96c  ori 4, 29, 0
  041c970  rlwimi 4, 3, 2, 26, 28
  041c974  slwi 3, 3, 2
  041c978  clrldi 4, 4, 32
  041c97c  fsel 8, 6, 8, 3
  041c980  lfsx 4, 29, 3
  041c984  lfs 6, 4(4)
  041c988  fsel 7, 10, 9, 7
  041c98c  fcmpu 0, 8, 27
  041c990  bt 1, 0x41c99c
  041c994  fmr 6, 27
  041c998  b 0x41cab4
  041c99c  fsubs 9, 7, 8
  041c9a0  fadds 7, 7, 8
  041c9a4  addic 3, 1, 16
  041c9a8  li 7, 2
  041c9ac  addic 4, 3, 476
  041c9b0  addic 5, 3, 492
  041c9b4  mtctr 7
  041c9b8  fdivs 7, 9, 7
  041c9bc  fmuls 8, 7, 7
  041c9c0  stfs 7, 504(1)
  041c9c4  stfs 7, 496(1)
  041c9c8  stfs 7, 500(1)
  041c9cc  stfs 7, 492(1)
  041c9d0  lfs 10, 504(1)
  041c9d4  lfs 11, 496(1)
  041c9d8  lfs 12, 500(1)
  041c9dc  fmuls 9, 8, 8
  041c9e0  fmuls 11, 11, 8
  041c9e4  fmuls 10, 10, 9
  041c9e8  fmuls 7, 9, 9
  041c9ec  fmuls 9, 12, 9
  041c9f0  stfs 11, 496(1)
  041c9f4  fmuls 8, 10, 8
  041c9f8  stfs 9, 500(1)
  041c9fc  stfs 8, 504(1)
  041ca00  lfs 8, 476(3)
  041ca04  fmuls 8, 8, 7
  041ca08  stfs 8, 492(3)
  041ca0c  lfs 8, 4(4)
  041ca10  addic 3, 3, 8
  041ca14  addic 4, 4, 8
  041ca18  fmuls 8, 8, 7
  041ca1c  stfs 8, 4(5)
  041ca20  addic 5, 5, 8
  041ca24  bdnz 0x41ca00
  041ca28  li 5, 4
  041ca2c  ori 3, 1, 0
  041ca30  mtctr 5
  041ca34  lis 4, 115
  041ca38  addic 5, 3, 492
  041ca3c  addic 4, 4, 22752
  041ca40  ori 6, 5, 0
  041ca44  lfs 7, 492(3)
  041ca48  lfs 8, 0(4)
  041ca4c  fmuls 7, 7, 8
  041ca50  lfs 8, 4(4)
  041ca54  addic 4, 4, 8
  041ca58  stfs 7, 492(3)
  041ca5c  lfs 7, 4(5)
  041ca60  addic 3, 3, 8
  041ca64  fmuls 7, 7, 8
  041ca68  stfs 7, 4(5)
  041ca6c  addic 5, 5, 8
  041ca70  bdnz 0x41ca44
  041ca74  fmr 7, 27
  041ca78  ori 3, 1, 0
  041ca7c  mtctr 7
  041ca80  lfs 8, 492(3)
  041ca84  fadds 7, 7, 8
  041ca88  addic 3, 3, 16
  041ca8c  lfs 8, 4(6)
  041ca90  lfs 9, 8(6)
  041ca94  lfs 10, 12(6)
  041ca98  addic 6, 6, 16
  041ca9c  fadds 7, 7, 8
  041caa0  fadds 7, 7, 9
  041caa4  fadds 7, 7, 10
  041caa8  bdnz 0x41ca80
  041caac  fadds 7, 7, 31
  041cab0  fmadds 6, 7, 4, 6
  041cab4  fmr 4, 29
  041cab8  bf 5, 0x41cb24
  041cabc  fsubs 1, 3, 25
  041cac0  fsubs 2, 30, 25
  041cac4  lis 3, 66
  041cac8  addi 3, 3, -16828
  041cacc  fdivs 3, 1, 2
  041cad0  lfs 4, 80(3)
  041cad4  fneg 1, 6
  041cad8  fmr 2, 29
  041cadc  fsub 5, 3, 27
  041cae0  fsel 3, 5, 3, 27
  041cae4  fsub 5, 4, 3
  041cae8  fsel 3, 5, 3, 4
  041caec  fmuls 3, 3, 3
  041caf0  fmuls 3, 3, 3
  041caf4  fmuls 3, 3, 3
  041caf8  fmuls 22, 3, 3
  041cafc  bl 0x5025e0
  041cb00  nop
  041cb04  fmuls 2, 22, 1
  041cb08  fmr 1, 29
  041cb0c  bl 0x502578
  041cb10  nop
  041cb14  fmr 4, 1
  041cb18  lfs 5, 24(31)
  041cb1c  lfs 1, 16(31)
  041cb20  lfs 2, 20(31)
  041cb24  fsubs 2, 2, 24
  041cb28  fsubs 1, 1, 28
  041cb2c  fmuls 2, 2, 2
  041cb30  fmadds 1, 1, 1, 2
  041cb34  fsubs 2, 23, 5
  041cb38  fsqrts 3, 1
  041cb3c  stfs 2, 352(1)
  041cb40  stfs 4, 52(30)
  041cb44  lfs 23, 68(31)
  041cb48  fabs 1, 2
  041cb4c  lwz 3, 352(1)
  041cb50  lfs 2, 352(1)
  041cb54  rlwinm 3, 3, 3, 29, 29
  041cb58  fabs 2, 2
  041cb5c  fcmpu 1, 1, 25
  041cb60  fabs 6, 3
  041cb64  stfs 3, 348(1)
  041cb68  fsubs 3, 6, 1
  041cb6c  stfs 3, 356(1)
  041cb70  lwz 4, 348(1)
  041cb74  lfs 3, 348(1)
  041cb78  lwz 5, 356(1)
  041cb7c  fabs 5, 3
  041cb80  lfs 3, 356(1)
  041cb84  rlwimi 3, 5, 2, 30, 30
  041cb88  fsub 7, 3, 27
  041cb8c  fsub 3, 3, 27
  041cb90  rlwimi 3, 4, 4, 28, 28
  041cb94  ori 4, 29, 0
  041cb98  rlwimi 4, 3, 2, 26, 28
  041cb9c  slwi 3, 3, 2
  041cba0  clrldi 4, 4, 32
  041cba4  fsel 5, 7, 5, 1
  041cba8  lfsx 28, 29, 3
  041cbac  fsel 3, 3, 2, 6
  041cbb0  lfs 2, 4(4)
  041cbb4  fcmpu 0, 5, 27
  041cbb8  bt 1, 0x41cbc4
  041cbbc  fmr 28, 27
  041cbc0  b 0x41ccdc
  041cbc4  fsubs 6, 3, 5
  041cbc8  fadds 3, 3, 5
  041cbcc  addic 3, 1, 16
  041cbd0  li 7, 2
  041cbd4  addic 4, 3, 444
  041cbd8  addic 5, 3, 460
  041cbdc  mtctr 7
  041cbe0  fdivs 3, 6, 3
  041cbe4  fmuls 5, 3, 3
  041cbe8  stfs 3, 472(1)
  041cbec  stfs 3, 464(1)
  041cbf0  stfs 3, 468(1)
  041cbf4  stfs 3, 460(1)
  041cbf8  lfs 7, 472(1)
  041cbfc  lfs 8, 464(1)
  041cc00  lfs 9, 468(1)
  041cc04  fmuls 6, 5, 5
  041cc08  fmuls 8, 8, 5
  041cc0c  fmuls 7, 7, 6
  041cc10  fmuls 3, 6, 6
  041cc14  fmuls 6, 9, 6
  041cc18  stfs 8, 464(1)
  041cc1c  fmuls 5, 7, 5
  041cc20  stfs 6, 468(1)
  041cc24  stfs 5, 472(1)
  041cc28  lfs 5, 444(3)
  041cc2c  fmuls 5, 5, 3
  041cc30  stfs 5, 460(3)
  041cc34  lfs 5, 4(4)
  041cc38  addic 3, 3, 8
  041cc3c  addic 4, 4, 8
  041cc40  fmuls 5, 5, 3
  041cc44  stfs 5, 4(5)
  041cc48  addic 5, 5, 8
  041cc4c  bdnz 0x41cc28
  041cc50  li 5, 4
  041cc54  ori 3, 1, 0
  041cc58  mtctr 5
  041cc5c  lis 4, 115
  041cc60  addic 5, 3, 460
  041cc64  addic 4, 4, 22752
  041cc68  ori 6, 5, 0
  041cc6c  lfs 3, 460(3)
  041cc70  lfs 5, 0(4)
  041cc74  fmuls 3, 3, 5
  041cc78  lfs 5, 4(4)
  041cc7c  addic 4, 4, 8
  041cc80  stfs 3, 460(3)
  041cc84  lfs 3, 4(5)
  041cc88  addic 3, 3, 8
  041cc8c  fmuls 3, 3, 5
  041cc90  stfs 3, 4(5)
  041cc94  addic 5, 5, 8
  041cc98  bdnz 0x41cc6c
  041cc9c  fmr 3, 27
  041cca0  ori 3, 1, 0
  041cca4  mtctr 7
  041cca8  lfs 5, 460(3)
  041ccac  fadds 3, 3, 5
  041ccb0  addic 3, 3, 16
  041ccb4  lfs 5, 4(6)
  041ccb8  lfs 6, 8(6)
  041ccbc  lfs 7, 12(6)
  041ccc0  addic 6, 6, 16
  041ccc4  fadds 3, 3, 5
  041ccc8  fadds 3, 3, 6
  041cccc  fadds 3, 3, 7
  041ccd0  bdnz 0x41cca8
  041ccd4  fadds 3, 3, 31
  041ccd8  fmadds 28, 3, 28, 2
  041ccdc  fmr 2, 23
  041cce0  bf 5, 0x41cd44
  041cce4  fsubs 1, 1, 25
  041cce8  fsubs 2, 30, 25
  041ccec  lis 3, 66
  041ccf0  addi 3, 3, -16828
  041ccf4  fdivs 3, 1, 2
  041ccf8  lfs 4, 80(3)
  041ccfc  fneg 1, 28
  041cd00  fmr 2, 23
  041cd04  fsub 5, 3, 27
  041cd08  fsel 3, 5, 3, 27
  041cd0c  fsub 5, 4, 3
  041cd10  fsel 3, 5, 3, 4
  041cd14  fmuls 3, 3, 3
  041cd18  fmuls 3, 3, 3
  041cd1c  fmuls 3, 3, 3
  041cd20  fmuls 30, 3, 3
  041cd24  bl 0x5025e0
  041cd28  nop
  041cd2c  fmuls 2, 30, 1
  041cd30  fmr 1, 23
  041cd34  bl 0x502578
  041cd38  nop
  041cd3c  fmr 2, 1
  041cd40  lfs 4, 52(30)
  041cd44  stfs 2, 68(31)
  041cd48  fneg 3, 4
  041cd4c  lfs 1, 100(30)
  041cd50  addic 3, 1, 208
  041cd54  lfs 2, 56(30)
  041cd58  bl 0xfe610
  041cd5c  nop
  041cd60  lfs 6, 212(1)
  041cd64  lfs 5, 208(1)
  041cd68  fmuls 1, 6, 6
  041cd6c  lfs 7, 216(1)
  041cd70  lfs 2, 100(30)
  041cd74  fmadds 4, 5, 5, 1
  041cd78  lfs 1, 112(30)
  041cd7c  lfs 3, 108(30)
  041cd80  lfs 8, 16(31)
  041cd84  lfs 9, 20(31)
  041cd88  lfs 10, 24(31)
  041cd8c  lbz 5, 188(31)
  041cd90  fmadds 4, 7, 7, 4
  041cd94  lbz 3, 32(31)
  041cd98  lbz 4, 96(30)
  041cd9c  fsqrts 11, 4
  041cda0  fcmpu 0, 11, 27
  041cda4  bf 2, 0x41cdbc
  041cda8  fmr 11, 27
  041cdac  lfs 4, 220(1)
  041cdb0  fmr 12, 11
  041cdb4  fmr 13, 12
  041cdb8  b 0x41ce14
  041cdbc  frsqrte 11, 4
  041cdc0  lis 6, 66
  041cdc4  addi 6, 6, -16828
  041cdc8  lfs 12, 84(6)
  041cdcc  lfs 13, 80(6)
  041cdd0  fmuls 0, 4, 11
  041cdd4  fmuls 30, 12, 11
  041cdd8  fnmsubs 0, 0, 11, 13
  041cddc  fmadds 11, 0, 30, 11
  041cde0  lfs 0, 220(1)
  041cde4  fmuls 30, 4, 11
  041cde8  fmuls 29, 12, 11
  041cdec  fnmsubs 30, 30, 11, 13
  041cdf0  fmadds 11, 30, 29, 11
  041cdf4  fmuls 30, 4, 11
  041cdf8  fmuls 12, 12, 11
  041cdfc  fmr 4, 0
  041ce00  fnmsubs 13, 30, 11, 13
  041ce04  fmadds 11, 13, 12, 11
  041ce08  fmuls 13, 5, 11
  041ce0c  fmuls 12, 6, 11
  041ce10  fmuls 11, 7, 11
  041ce14  stfs 13, 16(30)
  041ce18  cmpwi 5, 0
  041ce1c  stfs 12, 20(30)
  041ce20  stfs 11, 24(30)
  041ce24  stfs 4, 28(30)
  041ce28  bf 2, 0x41ce44
  041ce2c  fadds 4, 8, 5
  041ce30  fadds 5, 9, 6
  041ce34  fadds 6, 10, 7
  041ce38  stfs 4, 16(31)
  041ce3c  stfs 5, 20(31)
  041ce40  stfs 6, 24(31)
  041ce44  lis 5, 66
  041ce48  lis 6, 114
  041ce4c  addi 5, 5, -16828
  041ce50  li 7, 0
  041ce54  lfs 4, 20(5)
  041ce58  lfs 5, -3052(6)
  041ce5c  lfs 6, 16(5)
  041ce60  fnmsubs 2, 5, 4, 2
  041ce64  fmuls 4, 5, 4
  041ce68  lis 6, -16477
  041ce6c  lis 8, 16166
  041ce70  stw 7, 268(1)
  041ce74  ori 6, 6, 13107
  041ce78  ori 8, 8, 26214
  041ce7c  fsub 7, 2, 27
  041ce80  fmsubs 30, 5, 6, 4
  041ce84  stw 6, 272(1)
  041ce88  stw 7, 276(1)
  041ce8c  stw 7, 284(1)
  041ce90  stw 8, 280(1)
  041ce94  fsel 2, 7, 2, 27
  041ce98  cmpwi 3, 2
  041ce9c  rlwinm 3, 4, 4, 20, 27
  041cea0  addc 3, 1, 3
  041cea4  fdivs 30, 2, 30
  041cea8  clrldi 3, 3, 32
  041ceac  stfs 30, 196(30)
  041ceb0  lfs 2, 88(5)
  041ceb4  lfs 4, 92(5)
  041ceb8  fsubs 2, 2, 1
  041cebc  lfs 5, 40(5)
  041cec0  fnmsubs 2, 30, 4, 2
  041cec4  fmuls 2, 2, 5
  041cec8  stfs 2, 256(1)
  041cecc  lfs 2, 96(5)
  041ced0  fmuls 2, 3, 2
  041ced4  fmuls 2, 2, 5
  041ced8  stfs 2, 260(1)
  041cedc  lfs 24, 100(5)
  041cee0  fmadds 1, 1, 24, 4
  041cee4  fmuls 1, 1, 5
  041cee8  stfs 1, 264(1)
  041ceec  bf 2, 0x41cf0c
  041cef0  lfs 29, 256(3)
  041cef4  lfs 28, 260(3)
  041cef8  stfs 29, 180(30)
  041cefc  lfs 23, 264(3)
  041cf00  stfs 28, 184(30)
  041cf04  stfs 23, 188(30)
  041cf08  b 0x41cfbc
  041cf0c  lis 4, 66
  041cf10  lfs 1, 256(3)
  041cf14  lis 28, 114
  041cf18  addi 4, 4, -16828
  041cf1c  lis 27, 114
  041cf20  addic 5, 30, 200
  041cf24  addic 3, 30, 180
  041cf28  lfs 29, 104(4)
  041cf2c  lfs 28, 108(4)
  041cf30  lfs 3, -3060(28)
  041cf34  lfs 4, -3064(27)
  041cf38  fmuls 2, 3, 29
  041cf3c  fmuls 3, 3, 28
  041cf40  bl 0x109b40
  041cf44  nop
  041cf48  lbz 4, 96(30)
  041cf4c  lfs 3, -3060(28)
  041cf50  addic 3, 30, 184
  041cf54  slwi 4, 4, 4
  041cf58  lfs 4, -3064(27)
  041cf5c  fmuls 2, 3, 29
  041cf60  addic 5, 30, 204
  041cf64  addc 4, 1, 4
  041cf68  fmuls 3, 3, 28
  041cf6c  clrldi 4, 4, 32
  041cf70  lfs 1, 260(4)
  041cf74  bl 0x109b40
  041cf78  nop
  041cf7c  lbz 3, 96(30)
  041cf80  addic 5, 30, 208
  041cf84  lfs 3, -3060(28)
  041cf88  slwi 3, 3, 4
  041cf8c  lfs 4, -3064(27)
  041cf90  fmuls 2, 3, 29
  041cf94  addc 4, 1, 3
  041cf98  fmuls 3, 3, 28
  041cf9c  addic 3, 30, 188
  041cfa0  clrldi 4, 4, 32
  041cfa4  lfs 1, 264(4)
  041cfa8  bl 0x109b40
  041cfac  nop
  041cfb0  lfs 29, 180(30)
  041cfb4  lfs 28, 184(30)
  041cfb8  lfs 23, 188(30)
  041cfbc  addic 3, 1, 288
  041cfc0  addic 4, 30, 48
  041cfc4  bl 0x500b64
  041cfc8  nop
  041cfcc  lfs 1, 304(1)
  041cfd0  lfs 2, 308(1)
  041cfd4  fmuls 1, 1, 28
  041cfd8  lfs 3, 312(1)
  041cfdc  fmuls 2, 2, 28
  041cfe0  lfs 4, 288(1)
  041cfe4  fmuls 3, 3, 28
  041cfe8  lfs 5, 292(1)
  041cfec  lfs 6, 296(1)
  041cff0  addic 3, 1, 240
  041cff4  lfs 7, 320(1)
  041cff8  lfs 8, 324(1)
  041cffc  lfs 9, 328(1)
  041d000  fmadds 1, 4, 29, 1
  041d004  fmadds 2, 5, 29, 2
  041d008  lfs 4, 16(31)
  041d00c  fmadds 3, 6, 29, 3
  041d010  lfs 5, 20(31)
  041d014  lfs 6, 24(31)
  041d018  fmadds 1, 7, 23, 1
  041d01c  fmadds 2, 8, 23, 2
  041d020  lfs 7, 28(31)
  041d024  fmadds 3, 9, 23, 3
  041d028  stfs 7, 252(1)
  041d02c  fadds 1, 4, 1
  041d030  fadds 2, 5, 2
  041d034  fadds 3, 6, 3
  041d038  stfs 1, 240(1)
  041d03c  stfs 2, 244(1)
  041d040  stfs 3, 248(1)
  041d044  bl 0x47b98
  041d048  nop
  041d04c  lis 3, 66
  041d050  lfs 1, 48(30)
  041d054  lfs 2, 108(30)
  041d058  addi 28, 3, -16828
  041d05c  lfs 23, 84(28)
  041d060  lfs 3, 112(28)
  041d064  fmuls 1, 1, 23
  041d068  fmuls 2, 2, 3
  041d06c  bl 0x502578
  041d070  nop
  041d074  fmr 29, 1
  041d078  lfs 1, 52(30)
  041d07c  lfs 3, 116(28)
  041d080  fmr 2, 3
  041d084  bl 0x502578
  041d088  nop
  041d08c  lis 3, 114
  041d090  lfs 2, 48(28)
  041d094  lfs 3, 112(30)
  041d098  lfs 4, -3064(3)
  041d09c  fmuls 2, 4, 2
  041d0a0  fmuls 2, 2, 3
  041d0a4  bl 0x5025e0
  041d0a8  nop
  041d0ac  lbz 3, 32(31)
  041d0b0  fmr 28, 1
  041d0b4  cmpwi 3, 2
  041d0b8  lfs 22, 56(30)
  041d0bc  bf 2, 0x41d0d4
  041d0c0  stfs 29, 32(30)
  041d0c4  stfs 28, 36(30)
  041d0c8  stfs 22, 40(30)
  041d0cc  stfs 1, 44(30)
  041d0d0  b 0x41d170
  041d0d4  lis 3, 66
  041d0d8  lis 28, 114
  041d0dc  fmr 1, 29
  041d0e0  addi 4, 3, -16828
  041d0e4  lis 27, 114
  041d0e8  addic 3, 30, 32
  041d0ec  addic 5, 30, 160
  041d0f0  li 9, 0
  041d0f4  lfs 21, 104(4)
  041d0f8  lfs 20, 108(4)
  041d0fc  lfs 3, -3060(28)
  041d100  lfs 4, -3064(27)
  041d104  fmuls 2, 3, 21
  041d108  fmuls 3, 3, 20
  041d10c  bl 0x10a050
  041d110  nop
  041d114  lfs 3, -3060(28)
  041d118  lfs 4, -3064(27)
  041d11c  addic 3, 30, 36
  041d120  fmuls 2, 3, 21
  041d124  addic 5, 30, 164
  041d128  fmuls 3, 3, 20
  041d12c  li 9, 0
  041d130  fmr 1, 28
  041d134  bl 0x10a050
  041d138  nop
  041d13c  lfs 3, -3060(28)
  041d140  lfs 4, -3064(27)
  041d144  addic 3, 30, 40
  041d148  fmuls 2, 3, 21
  041d14c  addic 5, 30, 168
  041d150  li 9, 0
  041d154  fmuls 3, 3, 20
  041d158  fmr 1, 22
  041d15c  bl 0x10a050
  041d160  nop
  041d164  lfs 29, 32(30)
  041d168  lfs 22, 40(30)
  041d16c  lfs 28, 36(30)
  041d170  stfs 29, 224(1)
  041d174  addic 3, 1, 224
  041d178  stfs 22, 232(1)
  041d17c  stfs 28, 228(1)
  041d180  bl 0x47c08
  041d184  nop
  041d188  lis 3, 149
  041d18c  addic 3, 3, 5056
  041d190  lwz 3, 384(3)
  041d194  lhz 3, 134(3)
  041d198  cmpwi 3, 5
  041d19c  bt 2, 0x41d1cc
  041d1a0  lis 3, 101
  041d1a4  addic 3, 3, 29104
  041d1a8  bl 0x5cd098
  041d1ac  nop
  041d1b0  addic 3, 1, 240
  041d1b4  addic 4, 1, 224
  041d1b8  li 5, 0
  041d1bc  li 6, 0
  041d1c0  li 7, 0
  041d1c4  bl 0x47f74
  041d1c8  nop
  041d1cc  lis 3, 66
  041d1d0  addic 5, 30, 192
  041d1d4  addi 28, 3, -16828
  041d1d8  addic 3, 30, 176
  041d1dc  lfs 1, 120(28)
  041d1e0  lfs 3, 124(28)
  041d1e4  fmadds 1, 30, 1, 3
  041d1e8  lfs 30, 80(28)
  041d1ec  lfs 2, 60(28)
  041d1f0  fmr 3, 30
  041d1f4  fmr 4, 30
  041d1f8  bl 0x109b40
  041d1fc  nop
  041d200  lfs 1, 176(30)
  041d204  lfs 2, 128(28)
  041d208  fmuls 1, 1, 23
  041d20c  lfs 3, 152(28)
  041d210  lfs 4, 132(28)
  041d214  lis 3, 150
  041d218  addic 3, 3, -12416
  041d21c  fsubs 5, 2, 1
  041d220  fadds 3, 1, 3
  041d224  fsubs 6, 4, 1
  041d228  fsub 7, 1, 5
  041d22c  fsubs 2, 2, 3
  041d230  fsubs 4, 4, 3
  041d234  fsel 1, 7, 5, 1
  041d238  fsub 5, 3, 2
  041d23c  lfs 7, 136(28)
  041d240  fsub 9, 6, 1
  041d244  fsel 2, 5, 2, 3
  041d248  lfs 3, 140(28)
  041d24c  lfs 5, 144(28)
  041d250  fsel 1, 9, 6, 1
  041d254  fsub 6, 4, 2
  041d258  fmuls 8, 1, 1
  041d25c  fsel 2, 6, 4, 2
  041d260  lfs 4, 148(28)
  041d264  fmuls 6, 8, 1
  041d268  fmuls 9, 2, 2
  041d26c  fmuls 10, 8, 6
  041d270  fmadds 1, 6, 7, 1
  041d274  fmuls 6, 9, 2
  041d278  fmuls 11, 8, 10
  041d27c  fmadds 1, 10, 3, 1
  041d280  fmuls 10, 9, 6
  041d284  fmadds 2, 6, 7, 2
  041d288  fmuls 6, 8, 11
  041d28c  fmadds 1, 11, 5, 1
  041d290  fmuls 7, 9, 10
  041d294  fmadds 2, 10, 3, 2
  041d298  fmadds 1, 6, 4, 1
  041d29c  fmuls 3, 9, 7
  041d2a0  fmadds 2, 7, 5, 2
  041d2a4  fmadds 2, 3, 4, 2
  041d2a8  fdivs 1, 1, 2
  041d2ac  stfs 1, 176(3)
  041d2b0  bl 0x668d0
  041d2b4  nop
  041d2b8  lfs 1, 48(30)
  041d2bc  lfs 2, 108(30)
  041d2c0  fmuls 2, 2, 23
  041d2c4  bl 0x502578
  041d2c8  nop
  041d2cc  stfs 1, 64(31)
  041d2d0  lfs 3, 156(28)
  041d2d4  lfs 1, 52(30)
  041d2d8  lfs 4, 112(30)
  041d2dc  fmuls 2, 4, 3
  041d2e0  bl 0x502578
  041d2e4  nop
  041d2e8  stfs 1, 68(31)
  041d2ec  fmr 2, 27
  041d2f0  lfs 1, 56(30)
  041d2f4  bl 0x502578
  041d2f8  nop
  041d2fc  addic 3, 31, 16
  041d300  stfs 1, 72(31)
  041d304  li 5, 0
  041d308  lfs 1, 160(28)
  041d30c  ori 6, 31, 0
  041d310  bl 0x59e20
  041d314  nop
  041d318  cmpwi 3, 0
  041d31c  bt 2, 0x41d9b4
  041d320  lis 27, 161
  041d324  addic 27, 27, 2368
  041d328  lwz 3, 24(27)
  041d32c  cmpwi 3, 0
  041d330  bt 2, 0x41d368
  041d334  lhz 3, 166(3)
  041d338  cmpwi 1, 3, 402
  041d33c  cmpwi 3, 0
  041d340  cror 2, 2, 6
  041d344  bt 2, 0x41d9b4
  041d348  cmpwi 3, 1218
  041d34c  bt 2, 0x41d9b4
  041d350  cmpwi 3, 1219
  041d354  bt 2, 0x41d9b4
  041d358  cmpwi 3, 82
  041d35c  bt 2, 0x41d9b4
  041d360  cmpwi 3, 83
  041d364  bt 2, 0x41d9b4
  041d368  lfs 1, 48(27)
  041d36c  addic 3, 1, 208
  041d370  addic 28, 27, 64
  041d374  stfs 1, 16(31)
  041d378  lfs 1, 52(27)
  041d37c  ori 4, 3, 0
  041d380  ori 5, 28, 0
  041d384  stfs 1, 20(31)
  041d388  lfs 1, 56(27)
  041d38c  stfs 1, 24(31)
  041d390  lfs 1, 60(27)
  041d394  stfs 1, 28(31)
  041d398  bl 0x500608
  041d39c  nop
  041d3a0  lwz 3, 208(1)
  041d3a4  lwz 4, 212(1)
  041d3a8  lfs 1, 208(1)
  041d3ac  lfs 2, 212(1)
  041d3b0  fabs 3, 1
  041d3b4  lfs 29, 56(30)
  041d3b8  fabs 2, 2
  041d3bc  rlwinm 4, 4, 3, 29, 29
  041d3c0  fsubs 1, 3, 2
  041d3c4  stfs 1, 344(1)
  041d3c8  lwz 5, 344(1)
  041d3cc  lfs 1, 344(1)
  041d3d0  rlwimi 4, 5, 2, 30, 30
  041d3d4  fsub 4, 1, 27
  041d3d8  fsub 5, 1, 27
  041d3dc  rlwimi 4, 3, 4, 28, 28
  041d3e0  ori 3, 29, 0
  041d3e4  rlwimi 3, 4, 2, 26, 28
  041d3e8  slwi 4, 4, 2
  041d3ec  clrldi 3, 3, 32
  041d3f0  fsel 4, 4, 3, 2
  041d3f4  lfsx 1, 29, 4
  041d3f8  fsel 3, 5, 2, 3
  041d3fc  lfs 2, 4(3)
  041d400  fcmpu 0, 4, 27
  041d404  bt 1, 0x41d410
  041d408  fmr 1, 27
  041d40c  b 0x41d528
  041d410  fsubs 5, 3, 4
  041d414  fadds 3, 3, 4
  041d418  addic 3, 1, 16
  041d41c  li 6, 2
  041d420  addic 4, 3, 412
  041d424  addic 5, 3, 428
  041d428  mtctr 6
  041d42c  fdivs 3, 5, 3
  041d430  fmuls 4, 3, 3
  041d434  stfs 3, 440(1)
  041d438  stfs 3, 432(1)
  041d43c  stfs 3, 436(1)
  041d440  stfs 3, 428(1)
  041d444  lfs 6, 440(1)
  041d448  lfs 7, 432(1)
  041d44c  lfs 8, 436(1)
  041d450  fmuls 5, 4, 4
  041d454  fmuls 7, 7, 4
  041d458  fmuls 6, 6, 5
  041d45c  fmuls 3, 5, 5
  041d460  fmuls 5, 8, 5
  041d464  stfs 7, 432(1)
  041d468  fmuls 4, 6, 4
  041d46c  stfs 5, 436(1)
  041d470  stfs 4, 440(1)
  041d474  lfs 4, 412(3)
  041d478  fmuls 4, 4, 3
  041d47c  stfs 4, 428(3)
  041d480  lfs 4, 4(4)
  041d484  addic 3, 3, 8
  041d488  addic 4, 4, 8
  041d48c  fmuls 4, 4, 3
  041d490  stfs 4, 4(5)
  041d494  addic 5, 5, 8
  041d498  bdnz 0x41d474
  041d49c  li 5, 4
  041d4a0  ori 3, 1, 0
  041d4a4  mtctr 5
  041d4a8  lis 4, 115
  041d4ac  addic 5, 3, 428
  041d4b0  addic 4, 4, 22752
  041d4b4  ori 7, 5, 0
  041d4b8  lfs 3, 428(3)
  041d4bc  lfs 4, 0(4)
  041d4c0  fmuls 3, 3, 4
  041d4c4  lfs 4, 4(4)
  041d4c8  addic 4, 4, 8
  041d4cc  stfs 3, 428(3)
  041d4d0  lfs 3, 4(5)
  041d4d4  addic 3, 3, 8
  041d4d8  fmuls 3, 3, 4
  041d4dc  stfs 3, 4(5)
  041d4e0  addic 5, 5, 8
  041d4e4  bdnz 0x41d4b8
  041d4e8  fmr 3, 27
  041d4ec  ori 3, 1, 0
  041d4f0  mtctr 6
  041d4f4  lfs 4, 428(3)
  041d4f8  fadds 3, 3, 4
  041d4fc  addic 3, 3, 16
  041d500  lfs 4, 4(7)
  041d504  lfs 5, 8(7)
  041d508  lfs 6, 12(7)
  041d50c  addic 7, 7, 16
  041d510  fadds 3, 3, 4
  041d514  fadds 3, 3, 5
  041d518  fadds 3, 3, 6
  041d51c  bdnz 0x41d4f4
  041d520  fadds 3, 3, 31
  041d524  fmadds 1, 3, 1, 2
  041d528  fmr 2, 29
  041d52c  bl 0x5025e0
  041d530  nop
  041d534  lis 3, 66
  041d538  lis 4, 114
  041d53c  addi 3, 3, -16828
  041d540  lfs 28, 28(3)
  041d544  lfs 2, -3064(4)
  041d548  fmuls 2, 2, 28
  041d54c  fmuls 2, 2, 1
  041d550  fmr 1, 29
  041d554  bl 0x502578
  041d558  nop
  041d55c  lfs 2, 212(1)
  041d560  lfs 3, 208(1)
  041d564  fmuls 2, 2, 2
  041d568  stfs 1, 56(30)
  041d56c  lfs 29, 52(30)
  041d570  lwz 3, 216(1)
  041d574  lfs 1, 216(1)
  041d578  rlwinm 3, 3, 3, 29, 29
  041d57c  fmadds 2, 3, 3, 2
  041d580  fabs 3, 1
  041d584  fsqrts 2, 2
  041d588  fabs 5, 2
  041d58c  stfs 2, 336(1)
  041d590  fsubs 1, 5, 3
  041d594  stfs 1, 340(1)
  041d598  lwz 4, 336(1)
  041d59c  lfs 1, 336(1)
  041d5a0  lwz 5, 340(1)
  041d5a4  fabs 4, 1
  041d5a8  lfs 1, 340(1)
  041d5ac  rlwimi 3, 5, 2, 30, 30
  041d5b0  fsub 2, 1, 27
  041d5b4  rlwimi 3, 4, 4, 28, 28
  041d5b8  fsub 6, 1, 27
  041d5bc  ori 4, 29, 0
  041d5c0  rlwimi 4, 3, 2, 26, 28
  041d5c4  slwi 3, 3, 2
  041d5c8  clrldi 4, 4, 32
  041d5cc  lfsx 1, 29, 3
  041d5d0  fsel 4, 2, 4, 3
  041d5d4  lfs 2, 4(4)
  041d5d8  fsel 3, 6, 3, 5
  041d5dc  fcmpu 0, 4, 27
  041d5e0  bt 1, 0x41d5ec
  041d5e4  fmr 31, 27
  041d5e8  b 0x41d704
  041d5ec  fsubs 5, 3, 4
  041d5f0  fadds 3, 3, 4
  041d5f4  addic 3, 1, 16
  041d5f8  li 7, 2
  041d5fc  addic 5, 3, 396
  041d600  addic 4, 3, 380
  041d604  mtctr 7
  041d608  fdivs 3, 5, 3
  041d60c  fmuls 4, 3, 3
  041d610  stfs 3, 408(1)
  041d614  stfs 3, 400(1)
  041d618  stfs 3, 404(1)
  041d61c  stfs 3, 396(1)
  041d620  lfs 6, 408(1)
  041d624  lfs 7, 400(1)
  041d628  lfs 8, 404(1)
  041d62c  fmuls 5, 4, 4
  041d630  fmuls 7, 7, 4
  041d634  fmuls 6, 6, 5
  041d638  fmuls 3, 5, 5
  041d63c  fmuls 5, 8, 5
  041d640  stfs 7, 400(1)
  041d644  fmuls 4, 6, 4
  041d648  stfs 5, 404(1)
  041d64c  stfs 4, 408(1)
  041d650  lfs 4, 380(3)
  041d654  fmuls 4, 4, 3
  041d658  stfs 4, 396(3)
  041d65c  lfs 4, 4(4)
  041d660  addic 4, 4, 8
  041d664  fmuls 4, 4, 3
  041d668  addic 3, 3, 8
  041d66c  stfs 4, 4(5)
  041d670  addic 5, 5, 8
  041d674  bdnz 0x41d650
  041d678  li 5, 4
  041d67c  ori 3, 1, 0
  041d680  mtctr 5
  041d684  lis 4, 115
  041d688  addic 5, 3, 396
  041d68c  addic 4, 4, 22752
  041d690  ori 6, 5, 0
  041d694  lfs 3, 396(3)
  041d698  lfs 4, 0(4)
  041d69c  fmuls 3, 3, 4
  041d6a0  lfs 4, 4(4)
  041d6a4  addic 4, 4, 8
  041d6a8  stfs 3, 396(3)
  041d6ac  lfs 3, 4(5)
  041d6b0  addic 3, 3, 8
  041d6b4  fmuls 3, 3, 4
  041d6b8  stfs 3, 4(5)
  041d6bc  addic 5, 5, 8
  041d6c0  bdnz 0x41d694
  041d6c4  ori 3, 1, 0
  041d6c8  fmr 3, 27
  041d6cc  mtctr 7
  041d6d0  lfs 4, 396(3)
  041d6d4  fadds 3, 3, 4
  041d6d8  lfs 4, 4(6)
  041d6dc  addic 3, 3, 16
  041d6e0  lfs 5, 8(6)
  041d6e4  lfs 6, 12(6)
  041d6e8  addic 6, 6, 16
  041d6ec  fadds 3, 3, 4
  041d6f0  fadds 3, 3, 5
  041d6f4  fadds 3, 3, 6
  041d6f8  bdnz 0x41d6d0
  041d6fc  fadds 31, 3, 31
  041d700  fmadds 31, 31, 1, 2
  041d704  fneg 1, 31
  041d708  fmr 2, 29
  041d70c  bl 0x5025e0
  041d710  nop
  041d714  lis 3, 114
  041d718  lfs 2, -3064(3)
  041d71c  fmuls 2, 2, 28
  041d720  fmuls 2, 2, 1
  041d724  fmr 1, 29
  041d728  bl 0x502578
  041d72c  nop
  041d730  lis 3, 66
  041d734  stfs 1, 52(30)
  041d738  lfs 1, 100(30)
  041d73c  addi 3, 3, -16828
  041d740  lwz 4, 24(27)
  041d744  cmpwi 4, 0
  041d748  lfs 2, 164(3)
  041d74c  fmuls 1, 1, 2
  041d750  stfs 1, 100(30)
  041d754  bt 2, 0x41d8fc
  041d758  lwz 3, 220(30)
  041d75c  cmpwi 3, 0
  041d760  bf 2, 0x41d9b4
  041d764  lis 3, 66
  041d768  lis 4, 151
  041d76c  addi 3, 3, -16828
  041d770  addic 4, 4, -25376
  041d774  lfs 1, 168(3)
  041d778  lfs 2, 5628(4)
  041d77c  fsubs 1, 2, 1
  041d780  fcmpu 0, 1, 27
  041d784  stfs 1, 5628(4)
  041d788  cror 6, 1, 2
  041d78c  bt 6, 0x41d8bc
  041d790  addic 29, 1, 192
  041d794  addic 4, 1, 208
  041d798  ori 3, 29, 0
  041d79c  ori 5, 28, 0
  041d7a0  bl 0x500608
  041d7a4  nop
  041d7a8  lfs 2, 196(1)
  041d7ac  lfs 3, 192(1)
  041d7b0  fmuls 1, 2, 2
  041d7b4  lfs 5, 200(1)
  041d7b8  lis 3, 114
  041d7bc  fmr 6, 30
  041d7c0  li 27, 6
  041d7c4  lfs 4, -3052(3)
  041d7c8  fmadds 1, 3, 3, 1
  041d7cc  fmuls 9, 4, 24
  041d7d0  li 6, 1
  041d7d4  std 27, 144(1)
  041d7d8  li 7, -1
  041d7dc  fmr 4, 26
  041d7e0  fmadds 1, 5, 5, 1
  041d7e4  li 11, 0
  041d7e8  lis 3, 66
  041d7ec  std 6, 160(1)
  041d7f0  std 6, 168(1)
  041d7f4  ori 4, 29, 0
  041d7f8  addi 28, 3, -16828
  041d7fc  std 7, 176(1)
  041d800  std 11, 184(1)
  041d804  fsqrts 8, 1
  041d808  ori 3, 31, 0
  041d80c  li 5, 0
  041d810  li 8, 30
  041d814  li 9, 10
  041d818  li 10, 24
  041d81c  fmr 1, 26
  041d820  fmr 7, 25
  041d824  fdivs 9, 9, 8
  041d828  fsub 10, 27, 8
  041d82c  fsub 11, 27, 8
  041d830  fsub 12, 27, 8
  041d834  fsub 13, 8, 27
  041d838  fsub 0, 8, 27
  041d83c  fsub 8, 8, 27
  041d840  fmuls 3, 3, 9
  041d844  fmuls 2, 2, 9
  041d848  fmuls 5, 5, 9
  041d84c  fsel 9, 10, 27, 3
  041d850  fsel 10, 11, 27, 2
  041d854  fsel 11, 12, 27, 5
  041d858  fsel 3, 13, 9, 3
  041d85c  fsel 2, 0, 10, 2
  041d860  fsel 5, 8, 11, 5
  041d864  stfs 3, 192(1)
  041d868  stfs 2, 196(1)
  041d86c  stfs 5, 200(1)
  041d870  lfs 2, 172(28)
  041d874  lfs 3, 176(28)
  041d878  lfs 5, 180(28)
  041d87c  bl 0x10e030
  041d880  nop
  041d884  li 3, 184
  041d888  vspltisw 2, -1
  041d88c  lis 4, 114
  041d890  li 5, -3056
  041d894  lvlx 3, 3, 28
  041d898  vslw 2, 2, 2
  041d89c  li 3, 98
  041d8a0  vspltw 3, 3, 0
  041d8a4  lvlx 4, 5, 4
  041d8a8  vmaddfp 2, 4, 3, 2
  041d8ac  vctsxs 2, 2, 0
  041d8b0  vsplth 2, 2, 1
  041d8b4  stvehx 2, 3, 30
  041d8b8  stb 27, 32(31)
  041d8bc  lis 3, 66
  041d8c0  li 4, 188
  041d8c4  vspltisw 2, -1
  041d8c8  addi 3, 3, -16828
  041d8cc  lis 5, 114
  041d8d0  li 6, -3056
  041d8d4  vslw 2, 2, 2
  041d8d8  lvlx 3, 4, 3
  041d8dc  li 3, 220
  041d8e0  vspltw 3, 3, 0
  041d8e4  lvlx 4, 6, 5
  041d8e8  vmaddfp 2, 4, 3, 2
  041d8ec  vctsxs 2, 2, 0
  041d8f0  vspltw 2, 2, 0
  041d8f4  stvewx 2, 3, 30
  041d8f8  b 0x41d9b4
  041d8fc  lis 3, 151
  041d900  lis 4, 66
  041d904  fmr 1, 26
  041d908  addic 3, 3, -25376
  041d90c  fmr 4, 26
  041d910  li 6, 0
  041d914  fmr 6, 30
  041d918  addi 29, 4, -16828
  041d91c  fmr 7, 25
  041d920  li 28, 6
  041d924  li 11, 1
  041d928  stw 6, 5628(3)
  041d92c  li 7, -1
  041d930  ori 3, 31, 0
  041d934  lfs 2, 172(29)
  041d938  lfs 3, 176(29)
  041d93c  addic 4, 1, 192
  041d940  lfs 5, 180(29)
  041d944  li 8, 30
  041d948  std 28, 144(1)
  041d94c  li 5, 0
  041d950  std 11, 160(1)
  041d954  li 9, 10
  041d958  std 11, 168(1)
  041d95c  li 10, 24
  041d960  std 7, 176(1)
  041d964  std 6, 184(1)
  041d968  bl 0x10e030
  041d96c  nop
  041d970  lhz 3, 52(31)
  041d974  li 4, 184
  041d978  vspltisw 3, -1
  041d97c  lis 5, 114
  041d980  ori 3, 3, 65
  041d984  li 6, -3056
  041d988  vslw 3, 3, 3
  041d98c  sth 3, 52(31)
  041d990  lvlx 2, 4, 29
  041d994  li 3, 98
  041d998  lvlx 4, 6, 5
  041d99c  vspltw 2, 2, 0
  041d9a0  vmaddfp 2, 4, 2, 3
  041d9a4  vctsxs 2, 2, 0
  041d9a8  vsplth 2, 2, 1
  041d9ac  stvehx 2, 3, 30
  041d9b0  stb 28, 32(31)
  041d9b4  lis 3, 113
  041d9b8  ori 4, 31, 0
  041d9bc  addic 3, 3, -7864
  041d9c0  bl 0x6d720
  041d9c4  nop
  041d9c8  ori 3, 31, 0
  041d9cc  ori 4, 30, 0
  041d9d0  bl 0x41bb00
  041d9d4  lis 3, 66
  041d9d8  lfs 2, 108(30)
  041d9dc  lfs 1, 40(30)
  041d9e0  addi 29, 3, -16828
  041d9e4  lfs 3, 192(29)
  041d9e8  fmuls 2, 2, 3
  041d9ec  fneg 2, 2
  041d9f0  bl 0x502578
  041d9f4  nop
  041d9f8  fmr 31, 1
  041d9fc  lfs 2, 196(29)
  041da00  lfs 3, 28(29)
  041da04  lfs 4, 112(30)
  041da08  lfs 1, 36(30)
  041da0c  fmsubs 2, 4, 2, 3
  041da10  bl 0x502578
  041da14  nop
  041da18  fneg 2, 1
  041da1c  ori 3, 31, 0
  041da20  fmr 1, 31
  041da24  ori 4, 30, 0
  041da28  bl 0x41b7c0
  041da2c  ld 0, 768(1)
  041da30  mtlr 0
  041da34  lfd 20, 656(1)
  041da38  lfd 21, 664(1)
  041da3c  lfd 22, 672(1)
  041da40  lfd 23, 680(1)
  041da44  lfd 24, 688(1)
  041da48  lfd 25, 696(1)
  041da4c  lfd 26, 704(1)
  041da50  lfd 27, 712(1)
  041da54  lfd 28, 720(1)
  041da58  lfd 29, 728(1)
  041da5c  lfd 30, 736(1)
  041da60  lfd 31, 744(1)
  041da64  ld 27, 616(1)
  041da68  ld 28, 624(1)
  041da6c  ld 29, 632(1)
  041da70  ld 30, 640(1)
  041da74  ld 31, 648(1)
  041da78  addi 1, 1, 752
  041da7c  blr

UpdateMoby_69:   # 0x41dad8, 0x1c74 bytes
  041dad8  stdu 1, -496(1)
  041dadc  mflr 0
  041dae0  std 0, 512(1)
  041dae4  stfd 28, 464(1)
  041dae8  stfd 29, 472(1)
  041daec  stfd 30, 480(1)
  041daf0  stfd 31, 488(1)
  041daf4  std 28, 432(1)
  041daf8  std 31, 456(1)
  041dafc  lis 28, 151
  041db00  ori 31, 3, 0
  041db04  addic 28, 28, -25376
  041db08  lwz 3, 8324(28)
  041db0c  std 30, 448(1)
  041db10  std 29, 440(1)
  041db14  std 27, 424(1)
  041db18  std 26, 416(1)
  041db1c  std 25, 408(1)
  041db20  std 24, 400(1)
  041db24  std 23, 392(1)
  041db28  cmpwi 3, 114
  041db2c  bt 2, 0x41f708
  041db30  lwz 30, 120(31)
  041db34  li 4, 0
  041db38  addic 3, 30, 220
  041db3c  stw 4, 288(30)
  041db40  bl 0x4fff60
  041db44  nop
  041db48  lbz 3, 32(31)
  041db4c  cmpwi 3, 6
  041db50  bt 2, 0x41e214
  041db54  cmpwi 3, 7
  041db58  bt 2, 0x41e214
  041db5c  cmpwi 3, 1
  041db60  bt 2, 0x41e214
  041db64  cmpwi 3, 2
  041db68  bt 2, 0x41e214
  041db6c  lis 4, 3
  041db70  ori 3, 31, 0
  041db74  ori 4, 4, 1
  041db78  li 5, 0
  041db7c  bl 0x10675c
  041db80  nop
  041db84  ori 29, 3, 0
  041db88  cmpwi 29, 0
  041db8c  bt 2, 0x41e214
  041db90  lbz 3, 32(31)
  041db94  cmpwi 3, 4
  041db98  bf 2, 0x41e214
  041db9c  lwz 3, 5628(28)
  041dba0  lwz 4, 44(29)
  041dba4  srawi 5, 3, 31
  041dba8  lfs 1, 5628(28)
  041dbac  srawi 6, 4, 31
  041dbb0  lfs 2, 44(29)
  041dbb4  srwi 7, 5, 1
  041dbb8  srwi 8, 6, 1
  041dbbc  xor 3, 7, 3
  041dbc0  xor 4, 8, 4
  041dbc4  subc 3, 3, 5
  041dbc8  subc 4, 4, 6
  041dbcc  cmpw 3, 4
  041dbd0  bf 1, 0x41e0d8
  041dbd4  fsubs 1, 1, 2
  041dbd8  stfs 1, 5628(28)
  041dbdc  lwz 3, 32(29)
  041dbe0  cmpwi 3, 0
  041dbe4  bt 2, 0x41dc04
  041dbe8  lhz 3, 166(3)
  041dbec  cmpwi 3, 82
  041dbf0  cmpwi 1, 3, 83
  041dbf4  bt 2, 0x41dbfc
  041dbf8  bf 6, 0x41dc04
  041dbfc  extsh 3, 3
  041dc00  stw 3, 288(30)
  041dc04  lwz 3, 48(29)
  041dc08  clrlwi 3, 3, 31
  041dc0c  cmpwi 3, 0
  041dc10  bt 2, 0x41e214
  041dc14  lis 3, 149
  041dc18  vspltisw 2, -1
  041dc1c  lis 4, 66
  041dc20  addic 5, 3, 5056
  041dc24  lis 3, 16256
  041dc28  addi 27, 4, -9600
  041dc2c  lis 4, 114
  041dc30  vslw 2, 2, 2
  041dc34  stw 3, 352(5)
  041dc38  li 3, -3056
  041dc3c  lvlx 3, 0, 27
  041dc40  vspltw 3, 3, 0
  041dc44  lvlx 4, 3, 4
  041dc48  li 4, 360
  041dc4c  vmaddfp 2, 4, 3, 2
  041dc50  addic 3, 1, 192
  041dc54  vctsxs 2, 2, 0
  041dc58  vspltw 2, 2, 0
  041dc5c  stvewx 2, 4, 5
  041dc60  lfs 4, 4(27)
  041dc64  lfs 31, 44(29)
  041dc68  lfs 1, 100(30)
  041dc6c  lfs 2, 56(30)
  041dc70  fmuls 31, 31, 4
  041dc74  lfs 3, 52(30)
  041dc78  fneg 3, 3
  041dc7c  bl 0xfe610
  041dc80  nop
  041dc84  lfs 4, 20(29)
  041dc88  lfs 2, 16(29)
  041dc8c  fmuls 1, 4, 4
  041dc90  lfs 6, 24(29)
  041dc94  lis 3, 114
  041dc98  lfs 9, 8(27)
  041dc9c  lfs 7, -3052(3)
  041dca0  fmadds 1, 2, 2, 1
  041dca4  fmuls 7, 7, 9
  041dca8  fmadds 8, 6, 6, 1
  041dcac  lfs 1, 16(31)
  041dcb0  lfs 3, 20(31)
  041dcb4  lfs 5, 24(31)
  041dcb8  fsqrts 8, 8
  041dcbc  fcmpu 0, 7, 8
  041dcc0  cror 6, 1, 2
  041dcc4  bt 6, 0x41dce4
  041dcc8  fdivs 7, 7, 8
  041dccc  fmuls 2, 2, 7
  041dcd0  fmuls 4, 4, 7
  041dcd4  fmuls 6, 6, 7
  041dcd8  stfs 2, 16(29)
  041dcdc  stfs 4, 20(29)
  041dce0  stfs 6, 24(29)
  041dce4  fadds 1, 1, 2
  041dce8  addic 3, 1, 192
  041dcec  fadds 2, 3, 4
  041dcf0  addic 5, 29, 16
  041dcf4  fadds 3, 5, 6
  041dcf8  ori 4, 3, 0
  041dcfc  stfs 1, 16(31)
  041dd00  stfs 2, 20(31)
  041dd04  stfs 3, 24(31)
  041dd08  bl 0x500608
  041dd0c  nop
  041dd10  lwz 3, 192(1)
  041dd14  lwz 4, 196(1)
  041dd18  lis 5, 66
  041dd1c  lfs 1, 192(1)
  041dd20  lfs 2, 196(1)
  041dd24  fabs 3, 1
  041dd28  addi 5, 5, -9600
  041dd2c  fabs 5, 2
  041dd30  lfs 30, 56(30)
  041dd34  rlwinm 4, 4, 3, 29, 29
  041dd38  lis 29, 115
  041dd3c  addic 29, 29, 22784
  041dd40  fsubs 1, 3, 5
  041dd44  stfs 1, 248(1)
  041dd48  lfs 29, 12(5)
  041dd4c  lwz 5, 248(1)
  041dd50  lfs 1, 248(1)
  041dd54  rlwimi 4, 5, 2, 30, 30
  041dd58  fsub 4, 1, 29
  041dd5c  fsub 6, 1, 29
  041dd60  rlwimi 4, 3, 4, 28, 28
  041dd64  ori 3, 29, 0
  041dd68  rlwimi 3, 4, 2, 26, 28
  041dd6c  slwi 4, 4, 2
  041dd70  clrldi 3, 3, 32
  041dd74  fsel 4, 4, 3, 5
  041dd78  lfsx 1, 29, 4
  041dd7c  lfs 2, 4(3)
  041dd80  fsel 3, 6, 5, 3
  041dd84  fcmpu 0, 4, 29
  041dd88  bt 1, 0x41dd94
  041dd8c  fmr 1, 29
  041dd90  b 0x41deb8
  041dd94  fsubs 5, 3, 4
  041dd98  fadds 3, 3, 4
  041dd9c  addic 3, 1, 16
  041dda0  li 6, 2
  041dda4  addic 4, 3, 332
  041dda8  addic 5, 3, 348
  041ddac  mtctr 6
  041ddb0  fdivs 3, 5, 3
  041ddb4  fmuls 4, 3, 3
  041ddb8  stfs 3, 360(1)
  041ddbc  stfs 3, 352(1)
  041ddc0  stfs 3, 356(1)
  041ddc4  stfs 3, 348(1)
  041ddc8  lfs 6, 360(1)
  041ddcc  lfs 7, 352(1)
  041ddd0  lfs 8, 356(1)
  041ddd4  fmuls 5, 4, 4
  041ddd8  fmuls 7, 7, 4
  041dddc  fmuls 6, 6, 5
  041dde0  fmuls 3, 5, 5
  041dde4  fmuls 5, 8, 5
  041dde8  stfs 7, 352(1)
  041ddec  fmuls 4, 6, 4
  041ddf0  stfs 5, 356(1)
  041ddf4  stfs 4, 360(1)
  041ddf8  lfs 4, 332(3)
  041ddfc  fmuls 4, 4, 3
  041de00  stfs 4, 348(3)
  041de04  lfs 4, 4(4)
  041de08  addic 3, 3, 8
  041de0c  addic 4, 4, 8
  041de10  fmuls 4, 4, 3
  041de14  stfs 4, 4(5)
  041de18  addic 5, 5, 8
  041de1c  bdnz 0x41ddf8
  041de20  li 5, 4
  041de24  ori 3, 1, 0
  041de28  mtctr 5
  041de2c  lis 4, 115
  041de30  addic 5, 3, 348
  041de34  addic 4, 4, 22752
  041de38  ori 7, 5, 0
  041de3c  lfs 3, 348(3)
  041de40  lfs 4, 0(4)
  041de44  fmuls 3, 3, 4
  041de48  lfs 4, 4(4)
  041de4c  addic 4, 4, 8
  041de50  stfs 3, 348(3)
  041de54  lfs 3, 4(5)
  041de58  addic 3, 3, 8
  041de5c  fmuls 3, 3, 4
  041de60  stfs 3, 4(5)
  041de64  addic 5, 5, 8
  041de68  bdnz 0x41de3c
  041de6c  fmr 3, 29
  041de70  ori 3, 1, 0
  041de74  mtctr 6
  041de78  lfs 4, 348(3)
  041de7c  fadds 3, 3, 4
  041de80  addic 3, 3, 16
  041de84  lfs 4, 4(7)
  041de88  lfs 5, 8(7)
  041de8c  lfs 6, 12(7)
  041de90  addic 7, 7, 16
  041de94  fadds 3, 3, 4
  041de98  fadds 3, 3, 5
  041de9c  fadds 3, 3, 6
  041dea0  bdnz 0x41de78
  041dea4  lis 3, 66
  041dea8  addi 3, 3, -9600
  041deac  lfs 4, 16(3)
  041deb0  fadds 3, 3, 4
  041deb4  fmadds 1, 3, 1, 2
  041deb8  fmr 28, 30
  041debc  fmr 2, 28
  041dec0  bl 0x5025e0
  041dec4  nop
  041dec8  lis 3, 66
  041decc  lis 4, 114
  041ded0  addi 3, 3, -9600
  041ded4  lfs 30, 20(3)
  041ded8  lfs 2, -3064(4)
  041dedc  fmuls 2, 2, 30
  041dee0  fmuls 2, 2, 1
  041dee4  fmr 1, 28
  041dee8  fmuls 2, 2, 31
  041deec  bl 0x502578
  041def0  nop
  041def4  stfs 1, 56(30)
  041def8  lfs 1, 196(1)
  041defc  lfs 2, 192(1)
  041df00  fmuls 1, 1, 1
  041df04  lfs 28, 52(30)
  041df08  lwz 3, 200(1)
  041df0c  rlwinm 3, 3, 3, 29, 29
  041df10  fmadds 1, 2, 2, 1
  041df14  lfs 2, 200(1)
  041df18  fabs 3, 2
  041df1c  fsqrts 1, 1
  041df20  fabs 2, 1
  041df24  stfs 1, 240(1)
  041df28  fsubs 1, 2, 3
  041df2c  stfs 1, 244(1)
  041df30  lwz 4, 240(1)
  041df34  lfs 1, 240(1)
  041df38  lwz 5, 244(1)
  041df3c  fabs 4, 1
  041df40  lfs 1, 244(1)
  041df44  rlwimi 3, 5, 2, 30, 30
  041df48  fsub 5, 1, 29
  041df4c  fsub 6, 1, 29
  041df50  rlwimi 3, 4, 4, 28, 28
  041df54  ori 4, 29, 0
  041df58  rlwimi 4, 3, 2, 26, 28
  041df5c  slwi 3, 3, 2
  041df60  clrldi 4, 4, 32
  041df64  fsel 4, 5, 4, 3
  041df68  lfsx 1, 29, 3
  041df6c  fsel 3, 6, 3, 2
  041df70  lfs 2, 4(4)
  041df74  fcmpu 0, 4, 29
  041df78  bt 1, 0x41df80
  041df7c  b 0x41e0a0
  041df80  fsubs 5, 3, 4
  041df84  fadds 3, 3, 4
  041df88  addic 3, 1, 16
  041df8c  li 7, 2
  041df90  addic 5, 3, 316
  041df94  addic 4, 3, 300
  041df98  mtctr 7
  041df9c  fdivs 3, 5, 3
  041dfa0  fmuls 4, 3, 3
  041dfa4  stfs 3, 328(1)
  041dfa8  stfs 3, 320(1)
  041dfac  stfs 3, 324(1)
  041dfb0  stfs 3, 316(1)
  041dfb4  lfs 6, 328(1)
  041dfb8  lfs 7, 320(1)
  041dfbc  lfs 8, 324(1)
  041dfc0  fmuls 5, 4, 4
  041dfc4  fmuls 7, 7, 4
  041dfc8  fmuls 6, 6, 5
  041dfcc  fmuls 3, 5, 5
  041dfd0  fmuls 5, 8, 5
  041dfd4  stfs 7, 320(1)
  041dfd8  fmuls 4, 6, 4
  041dfdc  stfs 5, 324(1)
  041dfe0  stfs 4, 328(1)
  041dfe4  lfs 4, 300(3)
  041dfe8  fmuls 4, 4, 3
  041dfec  stfs 4, 316(3)
  041dff0  lfs 4, 4(4)
  041dff4  addic 4, 4, 8
  041dff8  fmuls 4, 4, 3
  041dffc  addic 3, 3, 8
  041e000  stfs 4, 4(5)
  041e004  addic 5, 5, 8
  041e008  bdnz 0x41dfe4
  041e00c  li 5, 4
  041e010  ori 3, 1, 0
  041e014  mtctr 5
  041e018  lis 4, 115
  041e01c  addic 5, 3, 316
  041e020  addic 4, 4, 22752
  041e024  ori 6, 5, 0
  041e028  lfs 3, 316(3)
  041e02c  lfs 4, 0(4)
  041e030  fmuls 3, 3, 4
  041e034  lfs 4, 4(4)
  041e038  addic 4, 4, 8
  041e03c  stfs 3, 316(3)
  041e040  lfs 3, 4(5)
  041e044  addic 3, 3, 8
  041e048  fmuls 3, 3, 4
  041e04c  stfs 3, 4(5)
  041e050  addic 5, 5, 8
  041e054  bdnz 0x41e028
  041e058  ori 3, 1, 0
  041e05c  mtctr 7
  041e060  lfs 3, 316(3)
  041e064  lfs 4, 4(6)
  041e068  fadds 3, 29, 3
  041e06c  lfs 5, 8(6)
  041e070  addic 3, 3, 16
  041e074  lfs 29, 12(6)
  041e078  addic 6, 6, 16
  041e07c  fadds 3, 3, 4
  041e080  fadds 3, 3, 5
  041e084  fadds 29, 3, 29
  041e088  bdnz 0x41e060
  041e08c  lis 3, 66
  041e090  addi 3, 3, -9600
  041e094  lfs 3, 16(3)
  041e098  fadds 29, 29, 3
  041e09c  fmadds 29, 29, 1, 2
  041e0a0  fmr 1, 29
  041e0a4  fmr 2, 28
  041e0a8  bl 0x5025e0
  041e0ac  nop
  041e0b0  lis 3, 114
  041e0b4  lfs 2, -3064(3)
  041e0b8  fmuls 2, 2, 30
  041e0bc  fmuls 2, 2, 1
  041e0c0  fmr 1, 28
  041e0c4  fmuls 2, 2, 31
  041e0c8  bl 0x502578
  041e0cc  nop
  041e0d0  stfs 1, 52(30)
  041e0d4  b 0x41e214
  041e0d8  lfs 1, 100(30)
  041e0dc  lfs 2, 56(30)
  041e0e0  addic 3, 1, 208
  041e0e4  lfs 3, 52(30)
  041e0e8  fneg 3, 3
  041e0ec  bl 0xfe610
  041e0f0  nop
  041e0f4  lwz 29, 32(29)
  041e0f8  cmpwi 29, 0
  041e0fc  bt 2, 0x41e120
  041e100  lhz 29, 166(29)
  041e104  cmpwi 29, 82
  041e108  cmpwi 1, 29, 83
  041e10c  bt 2, 0x41e114
  041e110  bf 6, 0x41e120
  041e114  extsh 3, 29
  041e118  addic 3, 3, 10000
  041e11c  stw 3, 288(30)
  041e120  lis 3, 149
  041e124  lis 4, 15948
  041e128  vspltisw 2, -1
  041e12c  addic 6, 3, 5056
  041e130  lis 3, 66
  041e134  li 5, 24
  041e138  ori 4, 4, 52429
  041e13c  addi 29, 3, -9600
  041e140  vslw 2, 2, 2
  041e144  lis 27, 114
  041e148  li 26, -3056
  041e14c  stw 4, 352(6)
  041e150  li 7, 360
  041e154  lvlx 3, 5, 29
  041e158  li 25, 0
  041e15c  vspltw 3, 3, 0
  041e160  lvlx 4, 26, 27
  041e164  lhz 3, 52(31)
  041e168  li 24, 6
  041e16c  vmaddfp 2, 4, 3, 2
  041e170  ori 11, 3, 65
  041e174  li 12, 1
  041e178  li 23, -1
  041e17c  ori 3, 31, 0
  041e180  addic 4, 1, 208
  041e184  li 5, 0
  041e188  li 8, 10
  041e18c  li 9, 3
  041e190  li 10, 16
  041e194  vctsxs 2, 2, 0
  041e198  vspltw 2, 2, 0
  041e19c  stvewx 2, 7, 6
  041e1a0  lfs 1, 12(29)
  041e1a4  stw 25, 5628(28)
  041e1a8  sth 11, 52(31)
  041e1ac  lfs 3, 28(29)
  041e1b0  fmr 2, 1
  041e1b4  lfs 4, 32(29)
  041e1b8  lfs 5, 36(29)
  041e1bc  lfs 6, 40(29)
  041e1c0  lfs 7, 44(29)
  041e1c4  std 24, 144(1)
  041e1c8  std 12, 160(1)
  041e1cc  std 12, 168(1)
  041e1d0  std 23, 176(1)
  041e1d4  std 25, 184(1)
  041e1d8  bl 0x10e030
  041e1dc  nop
  041e1e0  li 3, 48
  041e1e4  stw 25, 148(31)
  041e1e8  vspltisw 2, -1
  041e1ec  lvlx 3, 26, 27
  041e1f0  lvlx 4, 3, 29
  041e1f4  vslw 2, 2, 2
  041e1f8  li 3, 98
  041e1fc  vspltw 4, 4, 0
  041e200  vmaddfp 2, 3, 4, 2
  041e204  vctsxs 2, 2, 0
  041e208  vsplth 2, 2, 1
  041e20c  stvehx 2, 3, 30
  041e210  stb 24, 32(31)
  041e214  li 3, 255
  041e218  stb 3, 164(31)
  041e21c  lwz 3, 5616(28)
  041e220  cmpw 3, 31
  041e224  bf 2, 0x41e278
  041e228  lis 3, 66
  041e22c  li 4, 52
  041e230  vspltisw 2, -1
  041e234  addi 3, 3, -9600
  041e238  vspltisw 6, -1
  041e23c  li 5, 5628
  041e240  li 6, 56
  041e244  vslw 2, 2, 2
  041e248  lvlx 3, 4, 3
  041e24c  lvlx 4, 5, 28
  041e250  vspltw 3, 3, 0
  041e254  lvlx 5, 6, 3
  041e258  li 3, 5640
  041e25c  vmaddfp 2, 4, 3, 2
  041e260  vspltw 3, 5, 0
  041e264  vslw 4, 6, 6
  041e268  vmaddfp 2, 2, 3, 4
  041e26c  vctsxs 2, 2, 0
  041e270  vspltw 2, 2, 0
  041e274  stvewx 2, 3, 28
  041e278  lbz 3, 32(31)
  041e27c  cmpwi 3, 4
  041e280  cmpwi 1, 3, 1
  041e284  cmpwi 6, 3, -1
  041e288  cmpwi 7, 3, 0
  041e28c  bt 1, 0x41e2b4
  041e290  bt 5, 0x41e2a0
  041e294  bf 25, 0x41f5c4
  041e298  bf 29, 0x41e2e4
  041e29c  b 0x41e66c
  041e2a0  cmpwi 3, 2
  041e2a4  bf 1, 0x41ea04
  041e2a8  cmpwi 3, 3
  041e2ac  bf 1, 0x41f5c4
  041e2b0  b 0x41ed28
  041e2b4  cmpwi 3, 7
  041e2b8  bt 1, 0x41e2d0
  041e2bc  cmpwi 3, 5
  041e2c0  bf 1, 0x41ee5c
  041e2c4  cmpwi 3, 6
  041e2c8  bf 1, 0x41f0cc
  041e2cc  b 0x41f18c
  041e2d0  cmpwi 3, 8
  041e2d4  bf 1, 0x41f2e0
  041e2d8  cmpwi 3, 9
  041e2dc  bf 1, 0x41f5b4
  041e2e0  b 0x41f5c4
  041e2e4  li 3, 1
  041e2e8  li 4, 0
  041e2ec  lis 5, 150
  041e2f0  lis 6, 66
  041e2f4  stb 3, 32(31)
  041e2f8  stb 4, 96(30)
  041e2fc  lwz 3, 36(31)
  041e300  addic 4, 5, -12416
  041e304  addi 5, 6, -9600
  041e308  lfs 1, 36(3)
  041e30c  stfs 1, 44(31)
  041e310  lfs 1, 48(30)
  041e314  lfs 2, 52(30)
  041e318  stfs 1, 32(30)
  041e31c  stfs 2, 36(30)
  041e320  lwz 3, 176(4)
  041e324  lfs 1, 176(4)
  041e328  lfs 2, 40(5)
  041e32c  fabs 3, 1
  041e330  lis 4, 16256
  041e334  rlwinm 3, 3, 3, 29, 29
  041e338  stw 4, 232(1)
  041e33c  lis 4, 115
  041e340  addic 4, 4, 22784
  041e344  fsubs 1, 2, 3
  041e348  stfs 1, 236(1)
  041e34c  lfs 4, 12(5)
  041e350  lfs 1, 232(1)
  041e354  lwz 5, 236(1)
  041e358  fabs 5, 1
  041e35c  lfs 1, 236(1)
  041e360  rlwimi 3, 5, 2, 30, 30
  041e364  ori 5, 4, 0
  041e368  fsub 6, 1, 4
  041e36c  fsub 7, 1, 4
  041e370  rlwimi 5, 3, 2, 27, 28
  041e374  slwi 3, 3, 2
  041e378  clrldi 5, 5, 32
  041e37c  lfsx 1, 4, 3
  041e380  fsel 5, 6, 5, 3
  041e384  fsel 3, 7, 3, 2
  041e388  lfs 2, 4(5)
  041e38c  fcmpu 0, 5, 4
  041e390  bt 1, 0x41e398
  041e394  b 0x41e4b8
  041e398  fsubs 6, 3, 5
  041e39c  fadds 3, 3, 5
  041e3a0  addic 3, 1, 16
  041e3a4  li 7, 2
  041e3a8  addic 5, 3, 284
  041e3ac  addic 4, 3, 268
  041e3b0  mtctr 7
  041e3b4  fdivs 3, 6, 3
  041e3b8  fmuls 5, 3, 3
  041e3bc  stfs 3, 296(1)
  041e3c0  stfs 3, 288(1)
  041e3c4  stfs 3, 292(1)
  041e3c8  stfs 3, 284(1)
  041e3cc  lfs 7, 296(1)
  041e3d0  lfs 8, 288(1)
  041e3d4  lfs 9, 292(1)
  041e3d8  fmuls 6, 5, 5
  041e3dc  fmuls 8, 8, 5
  041e3e0  fmuls 7, 7, 6
  041e3e4  fmuls 3, 6, 6
  041e3e8  fmuls 6, 9, 6
  041e3ec  stfs 8, 288(1)
  041e3f0  fmuls 5, 7, 5
  041e3f4  stfs 6, 292(1)
  041e3f8  stfs 5, 296(1)
  041e3fc  lfs 5, 268(3)
  041e400  fmuls 5, 5, 3
  041e404  stfs 5, 284(3)
  041e408  lfs 5, 4(4)
  041e40c  addic 4, 4, 8
  041e410  fmuls 5, 5, 3
  041e414  addic 3, 3, 8
  041e418  stfs 5, 4(5)
  041e41c  addic 5, 5, 8
  041e420  bdnz 0x41e3fc
  041e424  li 5, 4
  041e428  ori 3, 1, 0
  041e42c  mtctr 5
  041e430  lis 4, 115
  041e434  addic 5, 3, 284
  041e438  addic 4, 4, 22752
  041e43c  ori 6, 5, 0
  041e440  lfs 3, 284(3)
  041e444  lfs 5, 0(4)
  041e448  fmuls 3, 3, 5
  041e44c  lfs 5, 4(4)
  041e450  addic 4, 4, 8
  041e454  stfs 3, 284(3)
  041e458  lfs 3, 4(5)
  041e45c  addic 3, 3, 8
  041e460  fmuls 3, 3, 5
  041e464  stfs 3, 4(5)
  041e468  addic 5, 5, 8
  041e46c  bdnz 0x41e440
  041e470  ori 3, 1, 0
  041e474  mtctr 7
  041e478  lfs 3, 284(3)
  041e47c  fadds 3, 4, 3
  041e480  addic 3, 3, 16
  041e484  lfs 4, 4(6)
  041e488  lfs 5, 8(6)
  041e48c  lfs 6, 12(6)
  041e490  addic 6, 6, 16
  041e494  fadds 3, 3, 4
  041e498  fadds 4, 3, 5
  041e49c  fadds 4, 4, 6
  041e4a0  bdnz 0x41e478
  041e4a4  lis 3, 66
  041e4a8  addi 3, 3, -9600
  041e4ac  lfs 3, 16(3)
  041e4b0  fadds 4, 4, 3
  041e4b4  fmadds 4, 4, 1, 2
  041e4b8  lis 3, 66
  041e4bc  li 4, 0
  041e4c0  addi 3, 3, -9600
  041e4c4  li 5, 1
  041e4c8  lfs 1, 32(3)
  041e4cc  stw 4, 192(30)
  041e4d0  fmuls 1, 4, 1
  041e4d4  stw 4, 288(30)
  041e4d8  lis 3, 269
  041e4dc  stfs 1, 172(30)
  041e4e0  stfs 1, 176(30)
  041e4e4  lfs 1, 64(31)
  041e4e8  stfs 1, 48(30)
  041e4ec  lfs 1, 68(31)
  041e4f0  stfs 1, 52(30)
  041e4f4  lfs 1, 72(31)
  041e4f8  stfs 1, 56(30)
  041e4fc  lfs 1, 76(31)
  041e500  stfs 1, 60(30)
  041e504  lfs 1, 64(31)
  041e508  stfs 1, 80(30)
  041e50c  lfs 1, 68(31)
  041e510  stfs 1, 84(30)
  041e514  lfs 1, 72(31)
  041e518  stfs 1, 88(30)
  041e51c  lfs 1, 76(31)
  041e520  stfs 1, 92(30)
  041e524  lfs 1, 16(31)
  041e528  stfs 1, 64(30)
  041e52c  lfs 1, 20(31)
  041e530  stfs 1, 68(30)
  041e534  lfs 1, 24(31)
  041e538  stfs 1, 72(30)
  041e53c  lfs 1, 28(31)
  041e540  stw 4, 124(30)
  041e544  stfs 1, 76(30)
  041e548  stb 5, -13092(3)
  041e54c  stw 5, 248(30)
  041e550  stw 5, 232(30)
  041e554  lbz 3, 176(31)
  041e558  cmpwi 3, 255
  041e55c  bt 2, 0x41e594
  041e560  lis 4, 151
  041e564  lis 5, 161
  041e568  addic 5, 5, -13692
  041e56c  lwz 4, -25488(4)
  041e570  addc 3, 3, 5
  041e574  slwi 4, 4, 4
  041e578  clrldi 3, 3, 32
  041e57c  extsw 4, 4
  041e580  lbzx 3, 3, 4
  041e584  cmpwi 3, 255
  041e588  bf 2, 0x41e594
  041e58c  li 3, 9
  041e590  stb 3, 32(31)
  041e594  lwz 3, 284(30)
  041e598  cmpwi 3, 0
  041e59c  bf 1, 0x41e5b8
  041e5a0  extsw 3, 3
  041e5a4  li 4, 0
  041e5a8  li 5, 0
  041e5ac  li 6, 0
  041e5b0  bl 0x10434c
  041e5b4  nop
  041e5b8  lwz 3, 316(30)
  041e5bc  cmpwi 3, 0
  041e5c0  bf 1, 0x41e5dc
  041e5c4  extsw 3, 3
  041e5c8  li 4, 0
  041e5cc  li 5, 0
  041e5d0  li 6, 0
  041e5d4  bl 0x10434c
  041e5d8  nop
  041e5dc  lis 3, 133
  041e5e0  li 4, 1
  041e5e4  addic 3, 3, 30768
  041e5e8  li 5, 1
  041e5ec  li 6, -1
  041e5f0  bl 0x104550
  041e5f4  nop
  041e5f8  lis 3, 133
  041e5fc  li 4, 1
  041e600  addic 3, 3, 30900
  041e604  li 5, -1
  041e608  li 6, -1
  041e60c  bl 0x104550
  041e610  nop
  041e614  li 3, 258
  041e618  li 4, 0
  041e61c  bl 0x104504
  041e620  nop
  041e624  lis 3, 66
  041e628  vspltisw 2, -1
  041e62c  li 4, -1
  041e630  addi 3, 3, -9600
  041e634  li 6, 60
  041e638  lis 5, 114
  041e63c  stw 4, 296(30)
  041e640  li 4, -3056
  041e644  vslw 2, 2, 2
  041e648  lvlx 3, 6, 3
  041e64c  li 3, 312
  041e650  vspltw 3, 3, 0
  041e654  lvlx 4, 4, 5
  041e658  vmaddfp 2, 4, 3, 2
  041e65c  vctsxs 2, 2, 0
  041e660  vspltw 2, 2, 0
  041e664  stvewx 2, 3, 30
  041e668  b 0x41f5c4
  041e66c  lbz 3, 176(31)
  041e670  cmpwi 3, 255
  041e674  bt 2, 0x41e6b0
  041e678  lis 4, 151
  041e67c  lis 5, 161
  041e680  addic 5, 5, -13692
  041e684  lwz 4, -25488(4)
  041e688  addc 3, 3, 5
  041e68c  slwi 4, 4, 4
  041e690  clrldi 3, 3, 32
  041e694  extsw 4, 4
  041e698  lbzx 3, 3, 4
  041e69c  cmpwi 3, 255
  041e6a0  bf 2, 0x41e6b0
  041e6a4  li 3, 9
  041e6a8  stb 3, 32(31)
  041e6ac  b 0x41e9a0
  041e6b0  lwz 3, 308(30)
  041e6b4  cmpwi 3, -1
  041e6b8  bt 2, 0x41e6f0
  041e6bc  addic 5, 28, 128
  041e6c0  extsw 4, 3
  041e6c4  ori 3, 5, 0
  041e6c8  bl 0x110b70
  041e6cc  nop
  041e6d0  cmpwi 3, 0
  041e6d4  bt 2, 0x41e6f0
  041e6d8  lis 3, 16253
  041e6dc  lis 4, 150
  041e6e0  ori 3, 3, 28836
  041e6e4  stw 3, 124(30)
  041e6e8  stw 3, -12528(4)
  041e6ec  b 0x41e768
  041e6f0  ori 3, 31, 0
  041e6f4  lwz 4, 8320(28)
  041e6f8  bl 0xf20f0
  041e6fc  nop
  041e700  lis 3, 66
  041e704  addi 3, 3, -9600
  041e708  lfs 2, 32(3)
  041e70c  fcmpu 0, 1, 2
  041e710  cror 6, 1, 2
  041e714  bt 6, 0x41e9a0
  041e718  lwz 3, 8324(28)
  041e71c  cmpwi 1, 3, 29
  041e720  cmpwi 3, 50
  041e724  cror 2, 2, 6
  041e728  bt 2, 0x41e9a0
  041e72c  lbz 3, 8356(28)
  041e730  cmpwi 3, 0
  041e734  bf 2, 0x41e9a0
  041e738  li 4, 21476
  041e73c  li 3, 7
  041e740  bl 0x11aeec
  041e744  nop
  041e748  lis 4, 150
  041e74c  addic 4, 4, 19008
  041e750  lwz 4, 164(4)
  041e754  rlwinm 4, 4, 0, 27, 27
  041e758  cmpwi 4, 0
  041e75c  bt 2, 0x41e9a0
  041e760  cmpwi 3, 0
  041e764  bt 2, 0x41e9a0
  041e768  li 3, 50
  041e76c  li 4, 1
  041e770  bl 0xb72b0
  041e774  nop
  041e778  lwz 3, 36(31)
  041e77c  lis 4, 150
  041e780  lis 5, 66
  041e784  addic 4, 4, -12416
  041e788  addi 5, 5, -9600
  041e78c  lfs 1, 36(3)
  041e790  stfs 1, 44(31)
  041e794  lfs 1, 48(30)
  041e798  lfs 2, 52(30)
  041e79c  stfs 1, 32(30)
  041e7a0  stfs 2, 36(30)
  041e7a4  lwz 3, 176(4)
  041e7a8  lfs 1, 176(4)
  041e7ac  lfs 6, 40(5)
  041e7b0  lis 4, 16256
  041e7b4  fabs 3, 1
  041e7b8  rlwinm 3, 3, 3, 29, 29
  041e7bc  stw 4, 224(1)
  041e7c0  lis 4, 115
  041e7c4  addic 4, 4, 22784
  041e7c8  fsubs 1, 6, 3
  041e7cc  stfs 1, 228(1)
  041e7d0  lfs 4, 12(5)
  041e7d4  lfs 1, 224(1)
  041e7d8  lwz 5, 228(1)
  041e7dc  fabs 5, 1
  041e7e0  lfs 1, 228(1)
  041e7e4  rlwimi 3, 5, 2, 30, 30
  041e7e8  fsub 2, 1, 4
  041e7ec  fsub 7, 1, 4
  041e7f0  ori 5, 4, 0
  041e7f4  rlwimi 5, 3, 2, 27, 28
  041e7f8  slwi 3, 3, 2
  041e7fc  clrldi 5, 5, 32
  041e800  lfsx 1, 4, 3
  041e804  fsel 5, 2, 5, 3
  041e808  lfs 2, 4(5)
  041e80c  fsel 3, 7, 3, 6
  041e810  fcmpu 0, 5, 4
  041e814  bt 1, 0x41e81c
  041e818  b 0x41e93c
  041e81c  fsubs 6, 3, 5
  041e820  fadds 3, 3, 5
  041e824  addic 3, 1, 16
  041e828  li 6, 2
  041e82c  addic 4, 3, 236
  041e830  addic 5, 3, 252
  041e834  mtctr 6
  041e838  fdivs 3, 6, 3
  041e83c  fmuls 5, 3, 3
  041e840  stfs 3, 264(1)
  041e844  stfs 3, 256(1)
  041e848  stfs 3, 260(1)
  041e84c  stfs 3, 252(1)
  041e850  lfs 7, 264(1)
  041e854  lfs 8, 256(1)
  041e858  lfs 9, 260(1)
  041e85c  fmuls 6, 5, 5
  041e860  fmuls 8, 8, 5
  041e864  fmuls 7, 7, 6
  041e868  fmuls 3, 6, 6
  041e86c  fmuls 6, 9, 6
  041e870  stfs 8, 256(1)
  041e874  fmuls 5, 7, 5
  041e878  stfs 6, 260(1)
  041e87c  stfs 5, 264(1)
  041e880  lfs 5, 236(3)
  041e884  fmuls 5, 5, 3
  041e888  stfs 5, 252(3)
  041e88c  lfs 5, 4(4)
  041e890  addic 3, 3, 8
  041e894  addic 4, 4, 8
  041e898  fmuls 5, 5, 3
  041e89c  stfs 5, 4(5)
  041e8a0  addic 5, 5, 8
  041e8a4  bdnz 0x41e880
  041e8a8  li 5, 4
  041e8ac  ori 3, 1, 0
  041e8b0  mtctr 5
  041e8b4  lis 4, 115
  041e8b8  addic 5, 3, 252
  041e8bc  addic 4, 4, 22752
  041e8c0  ori 7, 5, 0
  041e8c4  lfs 3, 252(3)
  041e8c8  lfs 5, 0(4)
  041e8cc  fmuls 3, 3, 5
  041e8d0  lfs 5, 4(4)
  041e8d4  addic 4, 4, 8
  041e8d8  stfs 3, 252(3)
  041e8dc  lfs 3, 4(5)
  041e8e0  addic 3, 3, 8
  041e8e4  fmuls 3, 3, 5
  041e8e8  stfs 3, 4(5)
  041e8ec  addic 5, 5, 8
  041e8f0  bdnz 0x41e8c4
  041e8f4  ori 3, 1, 0
  041e8f8  mtctr 6
  041e8fc  lfs 3, 252(3)
  041e900  fadds 3, 4, 3
  041e904  lfs 4, 4(7)
  041e908  addic 3, 3, 16
  041e90c  lfs 5, 8(7)
  041e910  lfs 6, 12(7)
  041e914  addic 7, 7, 16
  041e918  fadds 3, 3, 4
  041e91c  fadds 4, 3, 5
  041e920  fadds 4, 4, 6
  041e924  bdnz 0x41e8fc
  041e928  lis 3, 66
  041e92c  addi 3, 3, -9600
  041e930  lfs 3, 16(3)
  041e934  fadds 4, 4, 3
  041e938  fmadds 4, 4, 1, 2
  041e93c  lis 3, 66
  041e940  addi 3, 3, -9600
  041e944  li 5, 2
  041e948  li 4, -1
  041e94c  lfs 1, 32(3)
  041e950  li 3, 0
  041e954  fmuls 1, 4, 1
  041e958  stw 3, 192(30)
  041e95c  stw 3, 288(30)
  041e960  li 3, 1
  041e964  stfs 1, 172(30)
  041e968  stfs 1, 176(30)
  041e96c  lfs 1, 64(31)
  041e970  stfs 1, 48(30)
  041e974  lfs 1, 68(31)
  041e978  stfs 1, 52(30)
  041e97c  lfs 1, 72(31)
  041e980  stfs 1, 56(30)
  041e984  lfs 1, 76(31)
  041e988  stw 3, 248(30)
  041e98c  stfs 1, 60(30)
  041e990  stw 3, 232(30)
  041e994  stb 5, 32(31)
  041e998  stw 4, 296(30)
  041e99c  b 0x41e9e8
  041e9a0  lis 3, 66
  041e9a4  lwz 4, 124(30)
  041e9a8  addi 3, 3, -9600
  041e9ac  cmpwi 4, 0
  041e9b0  lfs 1, 12(3)
  041e9b4  bt 2, 0x41e9e8
  041e9b8  lis 3, 66
  041e9bc  lis 5, 114
  041e9c0  addi 4, 3, -9600
  041e9c4  addic 3, 30, 124
  041e9c8  lfs 2, 28(4)
  041e9cc  lfs 3, -3052(5)
  041e9d0  fmuls 2, 3, 2
  041e9d4  bl 0x109af0
  041e9d8  nop
  041e9dc  lis 3, 150
  041e9e0  lfs 1, 124(30)
  041e9e4  stfs 1, -12528(3)
  041e9e8  lis 3, 66
  041e9ec  addi 4, 3, -9600
  041e9f0  ori 3, 31, 0
  041e9f4  lfs 1, 64(4)
  041e9f8  bl 0x106150
  041e9fc  nop
  041ea00  b 0x41f5c4
  041ea04  lis 3, 66
  041ea08  lis 4, 114
  041ea0c  addi 5, 3, -9600
  041ea10  addic 3, 30, 124
  041ea14  lis 29, 16256
  041ea18  lfs 3, 28(5)
  041ea1c  lfs 1, 40(5)
  041ea20  lfs 4, -3052(4)
  041ea24  fmuls 2, 4, 3
  041ea28  bl 0x109af0
  041ea2c  nop
  041ea30  lis 3, 150
  041ea34  lwz 4, 124(30)
  041ea38  lfs 1, 124(30)
  041ea3c  cmpw 4, 29
  041ea40  stfs 1, -12528(3)
  041ea44  bf 2, 0x41f5c4
  041ea48  lwz 3, 304(30)
  041ea4c  cmpwi 3, -1
  041ea50  bt 2, 0x41eae8
  041ea54  lis 29, 165
  041ea58  slwi 3, 3, 7
  041ea5c  li 5, 50
  041ea60  li 6, 1
  041ea64  lwz 4, 7128(29)
  041ea68  addc 3, 4, 3
  041ea6c  addic 4, 3, 48
  041ea70  addic 7, 3, 112
  041ea74  clrldi 3, 4, 32
  041ea78  clrldi 4, 7, 32
  041ea7c  bl 0xa0c38
  041ea80  nop
  041ea84  lwz 3, 304(30)
  041ea88  lwz 4, 7128(29)
  041ea8c  slwi 3, 3, 7
  041ea90  addc 3, 4, 3
  041ea94  clrldi 3, 3, 32
  041ea98  lfs 1, 48(3)
  041ea9c  stfs 1, 16(31)
  041eaa0  lfs 1, 52(3)
  041eaa4  stfs 1, 20(31)
  041eaa8  lfs 1, 56(3)
  041eaac  stfs 1, 24(31)
  041eab0  lfs 1, 60(3)
  041eab4  stfs 1, 28(31)
  041eab8  lwz 3, 304(30)
  041eabc  slwi 3, 3, 7
  041eac0  addc 3, 4, 3
  041eac4  clrldi 3, 3, 32
  041eac8  lfs 1, 112(3)
  041eacc  stfs 1, 64(31)
  041ead0  lfs 1, 116(3)
  041ead4  stfs 1, 68(31)
  041ead8  lfs 1, 120(3)
  041eadc  stfs 1, 72(31)
  041eae0  lfs 1, 124(3)
  041eae4  stfs 1, 76(31)
  041eae8  addic 3, 31, 16
  041eaec  addic 4, 31, 64
  041eaf0  li 5, 0
  041eaf4  li 6, 0
  041eaf8  li 7, 0
  041eafc  bl 0x47f74
  041eb00  nop
  041eb04  lis 3, 66
  041eb08  lis 4, 114
  041eb0c  addi 3, 3, -9600
  041eb10  li 6, 0
  041eb14  li 5, 255
  041eb18  li 7, 1
  041eb1c  lfs 1, 20(3)
  041eb20  lfs 2, -3064(4)
  041eb24  sth 6, 104(30)
  041eb28  li 3, -1
  041eb2c  fmuls 2, 2, 1
  041eb30  stw 6, 108(30)
  041eb34  stw 6, 112(30)
  041eb38  li 8, 10
  041eb3c  stw 6, 132(30)
  041eb40  li 9, 20
  041eb44  stw 6, 128(30)
  041eb48  lis 10, 17279
  041eb4c  lis 11, 17280
  041eb50  li 29, 3
  041eb54  stfs 2, 100(30)
  041eb58  stb 5, 48(31)
  041eb5c  lwz 12, 8320(28)
  041eb60  sth 5, 50(31)
  041eb64  stw 3, 152(12)
  041eb68  lfs 2, 64(31)
  041eb6c  lis 12, 17096
  041eb70  stfs 2, 32(30)
  041eb74  lfs 2, 68(31)
  041eb78  stfs 2, 36(30)
  041eb7c  lfs 2, 72(31)
  041eb80  stfs 2, 40(30)
  041eb84  lfs 2, 76(31)
  041eb88  stw 6, 160(30)
  041eb8c  stfs 2, 44(30)
  041eb90  stw 6, 164(30)
  041eb94  stw 6, 168(30)
  041eb98  stw 6, 200(30)
  041eb9c  stw 6, 204(30)
  041eba0  stw 6, 208(30)
  041eba4  lhz 3, 166(31)
  041eba8  stw 31, 5616(28)
  041ebac  sth 3, 5620(28)
  041ebb0  stb 7, 5646(28)
  041ebb4  stb 8, 5622(28)
  041ebb8  ori 3, 30, 0
  041ebbc  stb 9, 5623(28)
  041ebc0  stb 9, 5624(28)
  041ebc4  stw 10, 5628(28)
  041ebc8  stw 6, 240(30)
  041ebcc  stw 5, 244(30)
  041ebd0  stw 11, 5632(28)
  041ebd4  stw 12, 5636(28)
  041ebd8  stb 29, 5625(28)
  041ebdc  stb 29, 5626(28)
  041ebe0  stb 29, 5627(28)
  041ebe4  stb 6, 5647(28)
  041ebe8  lfs 2, -3064(4)
  041ebec  fmuls 1, 2, 1
  041ebf0  lfs 2, 56(30)
  041ebf4  lfs 4, 52(30)
  041ebf8  fneg 3, 4
  041ebfc  bl 0xfe610
  041ec00  nop
  041ec04  lwz 3, 284(30)
  041ec08  cmpwi 3, 0
  041ec0c  bf 1, 0x41ec28
  041ec10  extsw 3, 3
  041ec14  li 4, 1
  041ec18  li 5, 1
  041ec1c  li 6, 1
  041ec20  bl 0x10434c
  041ec24  nop
  041ec28  lwz 3, 316(30)
  041ec2c  cmpwi 3, 0
  041ec30  bf 1, 0x41ec4c
  041ec34  extsw 3, 3
  041ec38  li 4, 1
  041ec3c  li 5, 1
  041ec40  li 6, 1
  041ec44  bl 0x10434c
  041ec48  nop
  041ec4c  lis 3, 133
  041ec50  li 4, 0
  041ec54  addic 3, 3, 30768
  041ec58  li 5, 0
  041ec5c  li 6, -1
  041ec60  bl 0x104550
  041ec64  nop
  041ec68  lis 3, 133
  041ec6c  li 4, 0
  041ec70  addic 3, 3, 30900
  041ec74  li 5, -1
  041ec78  li 6, -1
  041ec7c  bl 0x104550
  041ec80  nop
  041ec84  li 3, 258
  041ec88  li 4, 0
  041ec8c  bl 0x104504
  041ec90  nop
  041ec94  lis 3, 66
  041ec98  lfs 1, 24(31)
  041ec9c  addi 3, 3, -9600
  041eca0  li 5, 1
  041eca4  lfs 2, 8(3)
  041eca8  lwz 4, 36(31)
  041ecac  fadds 1, 1, 2
  041ecb0  stfs 1, 24(31)
  041ecb4  lfs 1, 68(3)
  041ecb8  lfs 2, 36(4)
  041ecbc  fmuls 1, 2, 1
  041ecc0  stfs 1, 44(31)
  041ecc4  stb 5, 8357(28)
  041ecc8  lwz 3, 264(30)
  041eccc  cmpwi 3, -1
  041ecd0  bf 2, 0x41ecec
  041ecd4  li 3, 0
  041ecd8  li 4, 4
  041ecdc  ori 5, 31, 0
  041ece0  bl 0x15d12c
  041ece4  nop
  041ece8  stw 3, 264(30)
  041ecec  lis 5, 161
  041ecf0  li 6, 2
  041ecf4  ori 3, 31, 0
  041ecf8  ori 4, 30, 0
  041ecfc  stw 6, 2248(5)
  041ed00  bl 0x41bf10
  041ed04  bl 0x7b7d8
  041ed08  nop
  041ed0c  li 3, 2
  041ed10  li 4, 4
  041ed14  bl 0x11ccc8
  041ed18  nop
  041ed1c  li 3, 4
  041ed20  stb 3, 32(31)
  041ed24  b 0x41f5c4
  041ed28  lis 3, 66
  041ed2c  lwz 4, 124(30)
  041ed30  addi 3, 3, -9600
  041ed34  cmpwi 4, 0
  041ed38  lfs 1, 12(3)
  041ed3c  bt 2, 0x41ed70
  041ed40  lis 3, 66
  041ed44  lis 5, 114
  041ed48  addi 4, 3, -9600
  041ed4c  addic 3, 30, 124
  041ed50  lfs 2, 28(4)
  041ed54  lfs 3, -3052(5)
  041ed58  fmuls 2, 3, 2
  041ed5c  bl 0x109af0
  041ed60  nop
  041ed64  lis 3, 150
  041ed68  lfs 1, 124(30)
  041ed6c  stfs 1, -12528(3)
  041ed70  li 3, 6
  041ed74  li 4, 0
  041ed78  bl 0x11afac
  041ed7c  nop
  041ed80  lis 3, 161
  041ed84  li 4, 2
  041ed88  lis 5, 150
  041ed8c  addic 5, 5, 14176
  041ed90  stw 4, 2248(3)
  041ed94  lwz 3, 264(30)
  041ed98  sldi 4, 3, 7
  041ed9c  sldi 3, 3, 4
  041eda0  subc 3, 4, 3
  041eda4  extsw 3, 3
  041eda8  addc 3, 5, 3
  041edac  lwz 4, 136(3)
  041edb0  cmpw 4, 31
  041edb4  bf 2, 0x41edc4
  041edb8  lbz 3, 116(3)
  041edbc  cmpwi 3, 0
  041edc0  bf 2, 0x41ede4
  041edc4  li 6, -1
  041edc8  li 3, 0
  041edcc  li 4, 4
  041edd0  ori 5, 31, 0
  041edd4  stw 6, 264(30)
  041edd8  bl 0x15d12c
  041eddc  nop
  041ede0  stw 3, 264(30)
  041ede4  ori 3, 31, 0
  041ede8  ori 4, 30, 0
  041edec  bl 0x41bf10
  041edf0  lbz 3, 5647(28)
  041edf4  clrlwi 3, 3, 31
  041edf8  cmpwi 3, 0
  041edfc  bt 2, 0x41ee08
  041ee00  li 3, 5
  041ee04  stb 3, 32(31)
  041ee08  lwz 3, 232(30)
  041ee0c  cmpwi 3, 0
  041ee10  bt 1, 0x41f5c4
  041ee14  lis 3, 66
  041ee18  vspltisw 2, -1
  041ee1c  li 5, 72
  041ee20  addi 3, 3, -9600
  041ee24  lis 4, 114
  041ee28  li 6, -3056
  041ee2c  vslw 2, 2, 2
  041ee30  lvlx 3, 5, 3
  041ee34  li 3, 248
  041ee38  vspltw 3, 3, 0
  041ee3c  lvlx 4, 6, 4
  041ee40  li 4, 8
  041ee44  vmaddfp 2, 4, 3, 2
  041ee48  vctsxs 2, 2, 0
  041ee4c  vspltw 2, 2, 0
  041ee50  stvewx 2, 3, 30
  041ee54  stb 4, 32(31)
  041ee58  b 0x41f5c4
  041ee5c  li 5, 0
  041ee60  lwz 6, 8320(28)
  041ee64  li 3, 0
  041ee68  li 4, 1
  041ee6c  stb 5, 8357(28)
  041ee70  stw 5, 152(6)
  041ee74  bl 0xb72b0
  041ee78  nop
  041ee7c  li 3, 0
  041ee80  bl 0x481d0
  041ee84  nop
  041ee88  lhz 3, 5644(28)
  041ee8c  li 4, 0
  041ee90  extsh 3, 3
  041ee94  bl 0xc8b28
  041ee98  nop
  041ee9c  lfs 1, 64(30)
  041eea0  ori 3, 31, 0
  041eea4  stfs 1, 16(31)
  041eea8  lfs 1, 68(30)
  041eeac  stfs 1, 20(31)
  041eeb0  lfs 1, 72(30)
  041eeb4  stfs 1, 24(31)
  041eeb8  lfs 1, 76(30)
  041eebc  stfs 1, 28(31)
  041eec0  lfs 1, 80(30)
  041eec4  stfs 1, 64(31)
  041eec8  lfs 1, 84(30)
  041eecc  lwz 4, 36(31)
  041eed0  stfs 1, 68(31)
  041eed4  lfs 1, 88(30)
  041eed8  stfs 1, 72(31)
  041eedc  lfs 1, 92(30)
  041eee0  stfs 1, 76(31)
  041eee4  lfs 1, 36(4)
  041eee8  stfs 1, 44(31)
  041eeec  bl 0xf30a0
  041eef0  nop
  041eef4  lwz 3, 284(30)
  041eef8  cmpwi 3, 0
  041eefc  bf 1, 0x41ef18
  041ef00  extsw 3, 3
  041ef04  li 4, 0
  041ef08  li 5, 0
  041ef0c  li 6, 0
  041ef10  bl 0x10434c
  041ef14  nop
  041ef18  lwz 3, 316(30)
  041ef1c  cmpwi 3, 0
  041ef20  bf 1, 0x41ef3c
  041ef24  extsw 3, 3
  041ef28  li 4, 0
  041ef2c  li 5, 0
  041ef30  li 6, 0
  041ef34  bl 0x10434c
  041ef38  nop
  041ef3c  lis 3, 133
  041ef40  li 4, 1
  041ef44  addic 3, 3, 30768
  041ef48  li 5, 1
  041ef4c  li 6, -1
  041ef50  bl 0x104550
  041ef54  nop
  041ef58  lis 3, 133
  041ef5c  li 4, 1
  041ef60  addic 3, 3, 30900
  041ef64  li 5, -1
  041ef68  li 6, -1
  041ef6c  bl 0x104550
  041ef70  nop
  041ef74  li 3, 258
  041ef78  li 4, 0
  041ef7c  bl 0x104504
  041ef80  nop
  041ef84  lwz 3, 300(30)
  041ef88  cmpwi 3, -1
  041ef8c  bt 2, 0x41efc4
  041ef90  lis 4, 165
  041ef94  slwi 3, 3, 7
  041ef98  li 5, 0
  041ef9c  li 6, 1
  041efa0  lwz 4, 7128(4)
  041efa4  addc 3, 4, 3
  041efa8  addic 4, 3, 48
  041efac  addic 7, 3, 112
  041efb0  clrldi 3, 4, 32
  041efb4  clrldi 4, 7, 32
  041efb8  bl 0xa0c38
  041efbc  nop
  041efc0  b 0x41eff4
  041efc4  lis 4, 165
  041efc8  lwz 7, 252(30)
  041efcc  li 5, 0
  041efd0  slwi 7, 7, 7
  041efd4  addic 3, 30, 64
  041efd8  li 6, 1
  041efdc  lwz 4, 7128(4)
  041efe0  addc 4, 4, 7
  041efe4  addic 4, 4, 112
  041efe8  clrldi 4, 4, 32
  041efec  bl 0xa0c38
  041eff0  nop
  041eff4  lwz 3, 264(30)
  041eff8  cmpwi 3, -1
  041effc  bt 2, 0x41f040
  041f000  sldi 4, 3, 7
  041f004  sldi 6, 3, 4
  041f008  lis 5, 150
  041f00c  subc 4, 4, 6
  041f010  addic 5, 5, 14176
  041f014  extsw 4, 4
  041f018  addc 4, 5, 4
  041f01c  lwz 5, 136(4)
  041f020  cmpw 5, 31
  041f024  bf 2, 0x41f040
  041f028  lbz 4, 116(4)
  041f02c  cmpwi 4, 0
  041f030  bt 2, 0x41f040
  041f034  extsw 3, 3
  041f038  bl 0x15cdb0
  041f03c  nop
  041f040  li 4, -1
  041f044  lwz 3, 268(30)
  041f048  cmpwi 3, -1
  041f04c  stw 4, 264(30)
  041f050  bt 2, 0x41f094
  041f054  sldi 4, 3, 7
  041f058  sldi 6, 3, 4
  041f05c  lis 5, 150
  041f060  subc 4, 4, 6
  041f064  addic 5, 5, 14176
  041f068  extsw 4, 4
  041f06c  addc 4, 5, 4
  041f070  lwz 5, 136(4)
  041f074  cmpw 5, 31
  041f078  bf 2, 0x41f094
  041f07c  lbz 4, 116(4)
  041f080  cmpwi 4, 0
  041f084  bt 2, 0x41f094
  041f088  extsw 3, 3
  041f08c  bl 0x15cdb0
  041f090  nop
  041f094  li 5, -1
  041f098  li 3, 0
  041f09c  li 4, 5
  041f0a0  stw 5, 268(30)
  041f0a4  bl 0x11ccc8
  041f0a8  nop
  041f0ac  lis 3, 16253
  041f0b0  lis 5, 150
  041f0b4  ori 3, 3, 28836
  041f0b8  li 4, 1
  041f0bc  stw 3, 124(30)
  041f0c0  stw 3, -12528(5)
  041f0c4  stb 4, 32(31)
  041f0c8  b 0x41f5c4
  041f0cc  lis 3, 161
  041f0d0  li 4, 2
  041f0d4  stw 4, 2248(3)
  041f0d8  lwz 3, 264(30)
  041f0dc  cmpwi 3, -1
  041f0e0  bt 2, 0x41f124
  041f0e4  sldi 4, 3, 7
  041f0e8  sldi 6, 3, 4
  041f0ec  lis 5, 150
  041f0f0  subc 4, 4, 6
  041f0f4  addic 5, 5, 14176
  041f0f8  extsw 4, 4
  041f0fc  addc 4, 5, 4
  041f100  lwz 5, 136(4)
  041f104  cmpw 5, 31
  041f108  bf 2, 0x41f124
  041f10c  lbz 4, 116(4)
  041f110  cmpwi 4, 0
  041f114  bt 2, 0x41f124
  041f118  extsw 3, 3
  041f11c  bl 0x15cdb0
  041f120  nop
  041f124  li 4, -1
  041f128  lwz 3, 268(30)
  041f12c  cmpwi 3, -1
  041f130  stw 4, 264(30)
  041f134  bt 2, 0x41f178
  041f138  sldi 4, 3, 7
  041f13c  sldi 6, 3, 4
  041f140  lis 5, 150
  041f144  subc 4, 4, 6
  041f148  addic 5, 5, 14176
  041f14c  extsw 4, 4
  041f150  addc 4, 5, 4
  041f154  lwz 5, 136(4)
  041f158  cmpw 5, 31
  041f15c  bf 2, 0x41f178
  041f160  lbz 4, 116(4)
  041f164  cmpwi 4, 0
  041f168  bt 2, 0x41f178
  041f16c  extsw 3, 3
  041f170  bl 0x15cdb0
  041f174  nop
  041f178  li 3, -1
  041f17c  li 4, 7
  041f180  stw 3, 268(30)
  041f184  stb 4, 32(31)
  041f188  b 0x41f5c4
  041f18c  lis 4, 161
  041f190  li 5, 2
  041f194  addic 3, 30, 98
  041f198  stw 5, 2248(4)
  041f19c  bl 0x4fffb4
  041f1a0  nop
  041f1a4  cmpwi 3, 0
  041f1a8  bt 2, 0x41f5c4
  041f1ac  lis 3, 150
  041f1b0  addic 3, 3, 14024
  041f1b4  lwz 4, 92(3)
  041f1b8  cmpwi 4, 0
  041f1bc  bf 2, 0x41f5c4
  041f1c0  lwz 3, 28(3)
  041f1c4  cmpwi 3, -1
  041f1c8  bf 2, 0x41f5c4
  041f1cc  bl 0x83950
  041f1d0  nop
  041f1d4  li 3, 0
  041f1d8  bl 0x481d0
  041f1dc  nop
  041f1e0  lfs 1, 64(30)
  041f1e4  ori 3, 31, 0
  041f1e8  stfs 1, 16(31)
  041f1ec  lfs 1, 68(30)
  041f1f0  stfs 1, 20(31)
  041f1f4  lfs 1, 72(30)
  041f1f8  stfs 1, 24(31)
  041f1fc  lfs 1, 76(30)
  041f200  stfs 1, 28(31)
  041f204  lfs 1, 80(30)
  041f208  stfs 1, 64(31)
  041f20c  lfs 1, 84(30)
  041f210  stfs 1, 68(31)
  041f214  lfs 1, 88(30)
  041f218  stfs 1, 72(31)
  041f21c  lfs 1, 92(30)
  041f220  stfs 1, 76(31)
  041f224  bl 0xf30a0
  041f228  nop
  041f22c  lwz 3, 264(30)
  041f230  cmpwi 3, -1
  041f234  bt 2, 0x41f278
  041f238  sldi 4, 3, 7
  041f23c  sldi 6, 3, 4
  041f240  lis 5, 150
  041f244  subc 4, 4, 6
  041f248  addic 5, 5, 14176
  041f24c  extsw 4, 4
  041f250  addc 4, 5, 4
  041f254  lwz 5, 136(4)
  041f258  cmpw 5, 31
  041f25c  bf 2, 0x41f278
  041f260  lbz 4, 116(4)
  041f264  cmpwi 4, 0
  041f268  bt 2, 0x41f278
  041f26c  extsw 3, 3
  041f270  bl 0x15cdb0
  041f274  nop
  041f278  li 4, -1
  041f27c  lwz 3, 268(30)
  041f280  cmpwi 3, -1
  041f284  stw 4, 264(30)
  041f288  bt 2, 0x41f2cc
  041f28c  sldi 4, 3, 7
  041f290  sldi 6, 3, 4
  041f294  lis 5, 150
  041f298  subc 4, 4, 6
  041f29c  addic 5, 5, 14176
  041f2a0  extsw 4, 4
  041f2a4  addc 4, 5, 4
  041f2a8  lwz 5, 136(4)
  041f2ac  cmpw 5, 31
  041f2b0  bf 2, 0x41f2cc
  041f2b4  lbz 4, 116(4)
  041f2b8  cmpwi 4, 0
  041f2bc  bt 2, 0x41f2cc
  041f2c0  extsw 3, 3
  041f2c4  bl 0x15cdb0
  041f2c8  nop
  041f2cc  li 3, -1
  041f2d0  li 4, 0
  041f2d4  stw 3, 268(30)
  041f2d8  stb 4, 32(31)
  041f2dc  b 0x41f5c4
  041f2e0  li 5, 0
  041f2e4  lwz 6, 8320(28)
  041f2e8  li 3, 0
  041f2ec  li 4, 1
  041f2f0  stb 5, 8357(28)
  041f2f4  stw 5, 152(6)
  041f2f8  bl 0xb72b0
  041f2fc  nop
  041f300  li 3, 0
  041f304  bl 0x481d0
  041f308  nop
  041f30c  lwz 3, 256(30)
  041f310  cmpwi 3, -1
  041f314  bf 2, 0x41f368
  041f318  lis 3, 101
  041f31c  addic 3, 3, 29132
  041f320  bl 0x5cd098
  041f324  nop
  041f328  lfs 1, 64(30)
  041f32c  stfs 1, 16(31)
  041f330  lfs 1, 68(30)
  041f334  stfs 1, 20(31)
  041f338  lfs 1, 72(30)
  041f33c  stfs 1, 24(31)
  041f340  lfs 1, 76(30)
  041f344  stfs 1, 28(31)
  041f348  lfs 1, 80(30)
  041f34c  stfs 1, 64(31)
  041f350  lfs 1, 84(30)
  041f354  stfs 1, 68(31)
  041f358  lfs 1, 88(30)
  041f35c  stfs 1, 72(31)
  041f360  lfs 1, 92(30)
  041f364  b 0x41f3dc
  041f368  lis 4, 165
  041f36c  slwi 3, 3, 7
  041f370  lwz 4, 7128(4)
  041f374  addc 3, 4, 3
  041f378  clrldi 3, 3, 32
  041f37c  lfs 1, 48(3)
  041f380  stfs 1, 16(31)
  041f384  lfs 1, 52(3)
  041f388  stfs 1, 20(31)
  041f38c  lfs 2, 56(3)
  041f390  stfs 2, 24(31)
  041f394  lfs 1, 60(3)
  041f398  stfs 1, 28(31)
  041f39c  lwz 3, 256(30)
  041f3a0  slwi 3, 3, 7
  041f3a4  addc 3, 4, 3
  041f3a8  lis 4, 66
  041f3ac  clrldi 3, 3, 32
  041f3b0  addi 4, 4, -9600
  041f3b4  lfs 1, 112(3)
  041f3b8  stfs 1, 64(31)
  041f3bc  lfs 1, 116(3)
  041f3c0  stfs 1, 68(31)
  041f3c4  lfs 1, 120(3)
  041f3c8  stfs 1, 72(31)
  041f3cc  lfs 3, 76(4)
  041f3d0  lfs 1, 124(3)
  041f3d4  fadds 2, 2, 3
  041f3d8  stfs 2, 24(31)
  041f3dc  lwz 4, 36(31)
  041f3e0  ori 3, 31, 0
  041f3e4  stfs 1, 76(31)
  041f3e8  lfs 1, 36(4)
  041f3ec  stfs 1, 44(31)
  041f3f0  bl 0xf30a0
  041f3f4  nop
  041f3f8  lwz 3, 252(30)
  041f3fc  cmpwi 3, -1
  041f400  bf 2, 0x41f418
  041f404  lis 3, 101
  041f408  addic 3, 3, 29188
  041f40c  bl 0x5cd098
  041f410  nop
  041f414  b 0x41f4dc
  041f418  lwz 3, 284(30)
  041f41c  cmpwi 3, 0
  041f420  bf 1, 0x41f43c
  041f424  extsw 3, 3
  041f428  li 4, 0
  041f42c  li 5, 0
  041f430  li 6, 0
  041f434  bl 0x10434c
  041f438  nop
  041f43c  lwz 3, 316(30)
  041f440  cmpwi 3, 0
  041f444  bf 1, 0x41f460
  041f448  extsw 3, 3
  041f44c  li 4, 0
  041f450  li 5, 0
  041f454  li 6, 0
  041f458  bl 0x10434c
  041f45c  nop
  041f460  lis 3, 133
  041f464  li 4, 1
  041f468  addic 3, 3, 30768
  041f46c  li 5, 1
  041f470  li 6, -1
  041f474  bl 0x104550
  041f478  nop
  041f47c  lis 3, 133
  041f480  li 4, 1
  041f484  addic 3, 3, 30900
  041f488  li 5, -1
  041f48c  li 6, -1
  041f490  bl 0x104550
  041f494  nop
  041f498  li 3, 258
  041f49c  li 4, 0
  041f4a0  bl 0x104504
  041f4a4  nop
  041f4a8  lis 3, 165
  041f4ac  lwz 4, 252(30)
  041f4b0  li 6, 1
  041f4b4  li 5, 0
  041f4b8  slwi 4, 4, 7
  041f4bc  lwz 3, 7128(3)
  041f4c0  addc 3, 3, 4
  041f4c4  addic 4, 3, 48
  041f4c8  addic 7, 3, 112
  041f4cc  clrldi 3, 4, 32
  041f4d0  clrldi 4, 7, 32
  041f4d4  bl 0xa0c38
  041f4d8  nop
  041f4dc  lbz 3, 176(31)
  041f4e0  cmpwi 3, 255
  041f4e4  bt 2, 0x41f4f0
  041f4e8  bl 0xf1e50
  041f4ec  nop
  041f4f0  lwz 3, 264(30)
  041f4f4  cmpwi 3, -1
  041f4f8  bt 2, 0x41f53c
  041f4fc  sldi 4, 3, 7
  041f500  sldi 6, 3, 4
  041f504  lis 5, 150
  041f508  subc 4, 4, 6
  041f50c  addic 5, 5, 14176
  041f510  extsw 4, 4
  041f514  addc 4, 5, 4
  041f518  lwz 5, 136(4)
  041f51c  cmpw 5, 31
  041f520  bf 2, 0x41f53c
  041f524  lbz 4, 116(4)
  041f528  cmpwi 4, 0
  041f52c  bt 2, 0x41f53c
  041f530  extsw 3, 3
  041f534  bl 0x15cdb0
  041f538  nop
  041f53c  li 4, -1
  041f540  lwz 3, 268(30)
  041f544  cmpwi 3, -1
  041f548  stw 4, 264(30)
  041f54c  bt 2, 0x41f590
  041f550  sldi 4, 3, 7
  041f554  sldi 6, 3, 4
  041f558  lis 5, 150
  041f55c  subc 4, 4, 6
  041f560  addic 5, 5, 14176
  041f564  extsw 4, 4
  041f568  addc 4, 5, 4
  041f56c  lwz 5, 136(4)
  041f570  cmpw 5, 31
  041f574  bf 2, 0x41f590
  041f578  lbz 4, 116(4)
  041f57c  cmpwi 4, 0
  041f580  bt 2, 0x41f590
  041f584  extsw 3, 3
  041f588  bl 0x15cdb0
  041f58c  nop
  041f590  li 5, -1
  041f594  addic 3, 28, 128
  041f598  addic 4, 28, 144
  041f59c  stw 5, 268(30)
  041f5a0  bl 0x151e70
  041f5a4  nop
  041f5a8  li 3, 9
  041f5ac  stb 3, 32(31)
  041f5b0  b 0x41f5c4
  041f5b4  ori 3, 31, 0
  041f5b8  bl 0xefb38
  041f5bc  nop
  041f5c0  b 0x41f708
  041f5c4  lis 4, 66
  041f5c8  lwz 5, 16(31)
  041f5cc  lis 3, 16752
  041f5d0  addi 4, 4, -9600
  041f5d4  lfs 3, 16(31)
  041f5d8  srawi 6, 5, 31
  041f5dc  srwi 7, 6, 1
  041f5e0  xor 5, 7, 5
  041f5e4  lfs 1, 44(4)
  041f5e8  subc 4, 5, 6
  041f5ec  cmpw 4, 3
  041f5f0  bf 0, 0x41f5fc
  041f5f4  fmr 3, 1
  041f5f8  stw 3, 16(31)
  041f5fc  lis 4, 66
  041f600  addi 4, 4, -9600
  041f604  lfs 2, 80(4)
  041f608  fcmpu 0, 3, 2
  041f60c  cror 6, 0, 2
  041f610  bt 6, 0x41f620
  041f614  lis 4, 17532
  041f618  fmr 3, 2
  041f61c  stw 4, 16(31)
  041f620  lwz 4, 20(31)
  041f624  lfs 4, 20(31)
  041f628  srawi 5, 4, 31
  041f62c  srwi 6, 5, 1
  041f630  xor 4, 6, 4
  041f634  subc 4, 4, 5
  041f638  cmpw 4, 3
  041f63c  bf 0, 0x41f648
  041f640  fmr 4, 1
  041f644  stw 3, 20(31)
  041f648  fcmpu 0, 4, 2
  041f64c  cror 6, 0, 2
  041f650  bt 6, 0x41f660
  041f654  lis 4, 17532
  041f658  fmr 4, 2
  041f65c  stw 4, 20(31)
  041f660  lwz 4, 24(31)
  041f664  lfs 5, 24(31)
  041f668  srawi 5, 4, 31
  041f66c  srwi 6, 5, 1
  041f670  xor 4, 6, 4
  041f674  subc 4, 4, 5
  041f678  cmpw 4, 3
  041f67c  bf 0, 0x41f688
  041f680  fmr 5, 1
  041f684  stw 3, 24(31)
  041f688  fmr 1, 5
  041f68c  fcmpu 0, 1, 2
  041f690  cror 6, 0, 2
  041f694  bt 6, 0x41f6a4
  041f698  lis 3, 17532
  041f69c  fmr 1, 2
  041f6a0  stw 3, 24(31)
  041f6a4  lbz 3, 32(31)
  041f6a8  cmpwi 3, 4
  041f6ac  cmpwi 1, 3, 2
  041f6b0  cmpwi 6, 3, 5
  041f6b4  cmpwi 7, 3, 8
  041f6b8  bf 2, 0x41f6f0
  041f6bc  stfs 3, 128(28)
  041f6c0  stfs 4, 132(28)
  041f6c4  stfs 1, 136(28)
  041f6c8  lfs 1, 28(31)
  041f6cc  stfs 1, 140(28)
  041f6d0  lfs 1, 48(30)
  041f6d4  stfs 1, 144(28)
  041f6d8  lfs 1, 52(30)
  041f6dc  stfs 1, 148(28)
  041f6e0  lfs 1, 56(30)
  041f6e4  stfs 1, 152(28)
  041f6e8  lfs 1, 60(30)
  041f6ec  stfs 1, 156(28)
  041f6f0  bf 5, 0x41f6f8
  041f6f4  bt 24, 0x41f6fc
  041f6f8  bf 30, 0x41f708
  041f6fc  ori 3, 31, 0
  041f700  ori 4, 30, 0
  041f704  bl 0x419368
  041f708  ld 0, 512(1)
  041f70c  mtlr 0
  041f710  lfd 28, 464(1)
  041f714  lfd 29, 472(1)
  041f718  lfd 30, 480(1)
  041f71c  lfd 31, 488(1)
  041f720  ld 23, 392(1)
  041f724  ld 24, 400(1)
  041f728  ld 25, 408(1)
  041f72c  ld 26, 416(1)
  041f730  ld 27, 424(1)
  041f734  ld 28, 432(1)
  041f738  ld 29, 440(1)
  041f73c  ld 30, 448(1)
  041f740  ld 31, 456(1)
  041f744  addi 1, 1, 496
  041f748  blr
