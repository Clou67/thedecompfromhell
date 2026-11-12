# game/update/moby580.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M580_003cce70:   # 0x3cce70, 0x14 bytes
  03cce70  lis 3, 132
  03cce74  lis 4, 1
  03cce78  addic 3, 3, 25160
  03cce7c  stw 4, 72(3)
  03cce80  blr

M580_003ccea0:   # 0x3ccea0, 0x2ac bytes
  03ccea0  stdu 1, -288(1)
  03ccea4  mflr 0
  03ccea8  std 0, 304(1)
  03cceac  stfd 22, 208(1)
  03cceb0  stfd 23, 216(1)
  03cceb4  stfd 24, 224(1)
  03cceb8  stfd 25, 232(1)
  03ccebc  stfd 26, 240(1)
  03ccec0  stfd 27, 248(1)
  03ccec4  stfd 28, 256(1)
  03ccec8  stfd 29, 264(1)
  03ccecc  stfd 30, 272(1)
  03cced0  stfd 31, 280(1)
  03cced4  extsw 3, 8
  03cced8  lis 6, 61
  03ccedc  std 3, 144(1)
  03ccee0  addi 3, 6, -12664
  03ccee4  std 30, 192(1)
  03ccee8  fsubs 2, 2, 1
  03cceec  ori 30, 4, 0
  03ccef0  lfs 26, 0(3)
  03ccef4  lfs 3, 0(5)
  03ccef8  lfs 4, 0(4)
  03ccefc  lfd 5, 144(1)
  03ccf00  fcfid 5, 5
  03ccf04  lfs 6, 4(5)
  03ccf08  fsubs 23, 3, 4
  03ccf0c  std 31, 200(1)
  03ccf10  cmpwi 8, 0
  03ccf14  ori 31, 8, 0
  03ccf18  frsp 31, 5
  03ccf1c  lfs 5, 4(4)
  03ccf20  lfs 3, 8(5)
  03ccf24  lfs 4, 8(4)
  03ccf28  fsubs 24, 6, 5
  03ccf2c  lfs 27, 4(3)
  03ccf30  fsubs 3, 3, 4
  03ccf34  li 3, 0
  03ccf38  lis 5, 15395
  03ccf3c  fdivs 25, 26, 31
  03ccf40  ori 4, 5, 55050
  03ccf44  stw 3, 128(1)
  03ccf48  lis 5, 16256
  03ccf4c  stw 3, 132(1)
  03ccf50  stw 4, 136(1)
  03ccf54  stw 5, 140(1)
  03ccf58  fdivs 31, 2, 31
  03ccf5c  fmuls 23, 23, 25
  03ccf60  fmuls 24, 24, 25
  03ccf64  std 29, 184(1)
  03ccf68  std 28, 176(1)
  03ccf6c  std 27, 168(1)
  03ccf70  std 26, 160(1)
  03ccf74  fmuls 25, 3, 25
  03ccf78  bf 1, 0x3cd0fc
  03ccf7c  lis 3, 61
  03ccf80  li 27, 0
  03ccf84  addi 3, 3, -12664
  03ccf88  lfs 2, 20(3)
  03ccf8c  lfs 28, 8(3)
  03ccf90  lfs 29, 12(3)
  03ccf94  fmadds 31, 2, 1, 31
  03ccf98  lfs 30, 16(3)
  03ccf9c  ori 3, 27, 0
  03ccfa0  bl 0x502730
  03ccfa4  nop
  03ccfa8  lfs 2, 0(30)
  03ccfac  li 3, 64
  03ccfb0  lfs 3, 4(30)
  03ccfb4  li 4, 112
  03ccfb8  fmadds 2, 1, 23, 2
  03ccfbc  lfs 4, 8(30)
  03ccfc0  fmadds 3, 1, 24, 3
  03ccfc4  fmadds 1, 1, 25, 4
  03ccfc8  lfs 4, 12(30)
  03ccfcc  stfs 4, 124(1)
  03ccfd0  stfs 2, 112(1)
  03ccfd4  stfs 3, 116(1)
  03ccfd8  stfs 1, 120(1)
  03ccfdc  bl 0xfe484
  03ccfe0  nop
  03ccfe4  ori 28, 3, 0
  03ccfe8  li 3, 64
  03ccfec  li 4, 127
  03ccff0  bl 0xfe484
  03ccff4  nop
  03ccff8  fmr 1, 26
  03ccffc  slwi 4, 3, 16
  03cd000  slwi 5, 3, 8
  03cd004  fmr 2, 28
  03cd008  or 4, 4, 5
  03cd00c  or 29, 4, 3
  03cd010  bl 0xfcbe8
  03cd014  nop
  03cd018  fmr 22, 1
  03cd01c  li 3, -2
  03cd020  li 4, 2
  03cd024  bl 0xfe484
  03cd028  nop
  03cd02c  fmr 1, 27
  03cd030  ori 26, 3, 0
  03cd034  fmr 2, 29
  03cd038  bl 0xfe4f0
  03cd03c  nop
  03cd040  stfs 1, 128(1)
  03cd044  fmr 2, 29
  03cd048  fmr 1, 27
  03cd04c  bl 0xfe4f0
  03cd050  nop
  03cd054  lis 3, 132
  03cd058  stfs 1, 132(1)
  03cd05c  lfs 2, 25636(3)
  03cd060  fmuls 1, 2, 30
  03cd064  bl 0xfcbe8
  03cd068  nop
  03cd06c  lis 3, 132
  03cd070  stfs 1, 136(1)
  03cd074  slwi 4, 28, 24
  03cd078  ori 7, 26, 0
  03cd07c  fmr 2, 26
  03cd080  or 10, 4, 29
  03cd084  fmr 3, 22
  03cd088  addic 8, 1, 128
  03cd08c  fmr 4, 31
  03cd090  lfs 1, 25644(3)
  03cd094  extsw 10, 10
  03cd098  addic 3, 1, 112
  03cd09c  bl 0x126f50
  03cd0a0  nop
  03cd0a4  ori 29, 3, 0
  03cd0a8  cmpwi 29, 0
  03cd0ac  bt 2, 0x3cd0ec
  03cd0b0  li 3, 2
  03cd0b4  bl 0xfc620
  03cd0b8  nop
  03cd0bc  cmpwi 3, 0
  03cd0c0  bt 2, 0x3cd0cc
  03cd0c4  li 3, 68
  03cd0c8  stb 3, 3(29)
  03cd0cc  lis 3, 269
  03cd0d0  li 4, 2
  03cd0d4  lwz 5, -24704(3)
  03cd0d8  stw 4, 36(29)
  03cd0dc  sth 5, 10(29)
  03cd0e0  stb 28, 42(29)
  03cd0e4  lwz 3, -24704(3)
  03cd0e8  stb 3, 43(29)
  03cd0ec  addic 27, 27, 1
  03cd0f0  extsw 27, 27
  03cd0f4  cmpw 27, 31
  03cd0f8  bt 0, 0x3ccf9c
  03cd0fc  ld 0, 304(1)
  03cd100  mtlr 0
  03cd104  lfd 22, 208(1)
  03cd108  lfd 23, 216(1)
  03cd10c  lfd 24, 224(1)
  03cd110  lfd 25, 232(1)
  03cd114  lfd 26, 240(1)
  03cd118  lfd 27, 248(1)
  03cd11c  lfd 28, 256(1)
  03cd120  lfd 29, 264(1)
  03cd124  lfd 30, 272(1)
  03cd128  lfd 31, 280(1)
  03cd12c  ld 26, 160(1)
  03cd130  ld 27, 168(1)
  03cd134  ld 28, 176(1)
  03cd138  ld 29, 184(1)
  03cd13c  ld 30, 192(1)
  03cd140  ld 31, 200(1)
  03cd144  addi 1, 1, 288
  03cd148  blr

M580_003cd150:   # 0x3cd150, 0x20c bytes
  03cd150  stdu 1, -208(1)
  03cd154  mflr 0
  03cd158  std 0, 224(1)
  03cd15c  stfd 24, 144(1)
  03cd160  stfd 25, 152(1)
  03cd164  stfd 26, 160(1)
  03cd168  stfd 27, 168(1)
  03cd16c  stfd 28, 176(1)
  03cd170  stfd 29, 184(1)
  03cd174  stfd 30, 192(1)
  03cd178  stfd 31, 200(1)
  03cd17c  lis 7, 132
  03cd180  sldi 4, 4, 4
  03cd184  addic 7, 7, 25456
  03cd188  lis 8, 61
  03cd18c  addc 9, 7, 4
  03cd190  addi 8, 8, -11956
  03cd194  clrldi 9, 9, 32
  03cd198  lis 10, 16256
  03cd19c  lis 11, 132
  03cd1a0  addic 12, 11, 25616
  03cd1a4  lfs 1, 0(9)
  03cd1a8  stfs 1, 112(1)
  03cd1ac  lfs 2, 4(9)
  03cd1b0  stfs 2, 116(1)
  03cd1b4  lfs 3, 8(9)
  03cd1b8  stfs 3, 120(1)
  03cd1bc  lfs 4, 0(8)
  03cd1c0  stw 10, 124(1)
  03cd1c4  lfs 5, 25616(11)
  03cd1c8  lfs 6, 4(12)
  03cd1cc  fsubs 1, 1, 5
  03cd1d0  lfs 5, 8(12)
  03cd1d4  fsubs 2, 2, 6
  03cd1d8  lfs 6, 208(3)
  03cd1dc  fsubs 3, 3, 5
  03cd1e0  lfs 5, 212(3)
  03cd1e4  lfs 7, 204(3)
  03cd1e8  lfs 8, 216(3)
  03cd1ec  lfs 9, 192(3)
  03cd1f0  lfs 10, 196(3)
  03cd1f4  lfs 11, 200(3)
  03cd1f8  fmadds 13, 7, 1, 4
  03cd1fc  lfs 12, 236(3)
  03cd200  fmuls 0, 6, 2
  03cd204  lfs 29, 224(3)
  03cd208  fmuls 31, 5, 2
  03cd20c  lfs 28, 220(3)
  03cd210  fmuls 30, 8, 2
  03cd214  lfs 27, 228(3)
  03cd218  lfs 26, 232(3)
  03cd21c  sldi 5, 5, 4
  03cd220  stfs 1, 112(1)
  03cd224  stfs 2, 116(1)
  03cd228  addc 8, 7, 5
  03cd22c  fmadds 13, 12, 3, 13
  03cd230  fmadds 0, 9, 1, 0
  03cd234  clrldi 8, 8, 32
  03cd238  fmadds 31, 10, 1, 31
  03cd23c  fmadds 30, 11, 1, 30
  03cd240  extsw 4, 4
  03cd244  addc 9, 7, 4
  03cd248  extsw 4, 5
  03cd24c  fmadds 1, 28, 2, 13
  03cd250  fmadds 2, 29, 3, 0
  03cd254  fmadds 13, 27, 3, 31
  03cd258  fmadds 3, 26, 3, 30
  03cd25c  addc 7, 7, 4
  03cd260  addic 4, 1, 112
  03cd264  addic 5, 1, 128
  03cd268  stfs 1, 124(1)
  03cd26c  lfs 1, 16(3)
  03cd270  lfs 0, 20(3)
  03cd274  fadds 2, 2, 1
  03cd278  lfs 31, 24(3)
  03cd27c  fadds 13, 13, 0
  03cd280  lfs 30, 25616(11)
  03cd284  fadds 3, 3, 31
  03cd288  lfs 25, 8(12)
  03cd28c  lfs 24, 4(12)
  03cd290  stfs 2, 112(1)
  03cd294  stfs 13, 116(1)
  03cd298  stfs 3, 120(1)
  03cd29c  lfs 2, 0(8)
  03cd2a0  stfs 2, 128(1)
  03cd2a4  fsubs 2, 2, 30
  03cd2a8  lfs 3, 4(8)
  03cd2ac  stfs 3, 132(1)
  03cd2b0  lfs 13, 8(8)
  03cd2b4  fsubs 3, 3, 24
  03cd2b8  stw 10, 140(1)
  03cd2bc  fsubs 30, 13, 25
  03cd2c0  stfs 13, 136(1)
  03cd2c4  lis 10, 132
  03cd2c8  ori 8, 6, 0
  03cd2cc  fmadds 4, 7, 2, 4
  03cd2d0  fmadds 1, 9, 2, 1
  03cd2d4  fmadds 7, 10, 2, 0
  03cd2d8  fmadds 9, 11, 2, 31
  03cd2dc  stfs 2, 128(1)
  03cd2e0  stfs 3, 132(1)
  03cd2e4  fmadds 2, 12, 30, 4
  03cd2e8  fmadds 1, 29, 30, 1
  03cd2ec  fmadds 4, 27, 30, 7
  03cd2f0  fmadds 7, 26, 30, 9
  03cd2f4  fmadds 2, 28, 3, 2
  03cd2f8  fmadds 1, 6, 3, 1
  03cd2fc  fmadds 4, 5, 3, 4
  03cd300  fmadds 3, 8, 3, 7
  03cd304  stfs 2, 140(1)
  03cd308  stfs 1, 128(1)
  03cd30c  stfs 4, 132(1)
  03cd310  stfs 3, 136(1)
  03cd314  lfs 1, 12(9)
  03cd318  lfs 2, 25632(10)
  03cd31c  lfs 3, 12(7)
  03cd320  fmuls 1, 1, 2
  03cd324  fmuls 2, 3, 2
  03cd328  bl 0x3ccea0
  03cd32c  ld 0, 224(1)
  03cd330  mtlr 0
  03cd334  lfd 24, 144(1)
  03cd338  lfd 25, 152(1)
  03cd33c  lfd 26, 160(1)
  03cd340  lfd 27, 168(1)
  03cd344  lfd 28, 176(1)
  03cd348  lfd 29, 184(1)
  03cd34c  lfd 30, 192(1)
  03cd350  lfd 31, 200(1)
  03cd354  addi 1, 1, 208
  03cd358  blr

M580_003cd35c:   # 0x3cd35c, 0xb4 bytes
  03cd35c  stdu 1, -128(1)
  03cd360  mflr 0
  03cd364  std 0, 144(1)
  03cd368  std 31, 120(1)
  03cd36c  lis 6, 132
  03cd370  ori 31, 3, 0
  03cd374  li 4, 0
  03cd378  li 5, 1
  03cd37c  lwz 6, 25660(6)
  03cd380  std 30, 112(1)
  03cd384  extsw 6, 6
  03cd388  bl 0x3cd150
  03cd38c  lis 6, 132
  03cd390  ori 3, 31, 0
  03cd394  li 4, 2
  03cd398  li 5, 3
  03cd39c  lwz 6, 25656(6)
  03cd3a0  extsw 6, 6
  03cd3a4  bl 0x3cd150
  03cd3a8  lis 30, 132
  03cd3ac  ori 3, 31, 0
  03cd3b0  li 4, 4
  03cd3b4  li 5, 5
  03cd3b8  lwz 6, 25664(30)
  03cd3bc  extsw 6, 6
  03cd3c0  bl 0x3cd150
  03cd3c4  lwz 6, 25664(30)
  03cd3c8  ori 3, 31, 0
  03cd3cc  extsw 6, 6
  03cd3d0  li 4, 6
  03cd3d4  li 5, 7
  03cd3d8  bl 0x3cd150
  03cd3dc  lis 6, 132
  03cd3e0  ori 3, 31, 0
  03cd3e4  li 4, 8
  03cd3e8  li 5, 9
  03cd3ec  lwz 6, 25668(6)
  03cd3f0  extsw 6, 6
  03cd3f4  bl 0x3cd150
  03cd3f8  ld 0, 144(1)
  03cd3fc  mtlr 0
  03cd400  ld 30, 112(1)
  03cd404  ld 31, 120(1)
  03cd408  addi 1, 1, 128
  03cd40c  blr

M580_003cd410:   # 0x3cd410, 0xd4 bytes
  03cd410  stdu 1, -144(1)
  03cd414  mflr 0
  03cd418  std 0, 160(1)
  03cd41c  std 30, 128(1)
  03cd420  lbz 30, 33(3)
  03cd424  std 31, 136(1)
  03cd428  std 29, 120(1)
  03cd42c  cmpwi 30, 255
  03cd430  bf 2, 0x3cd43c
  03cd434  li 3, 0
  03cd438  b 0x3cd4c8
  03cd43c  lis 3, 165
  03cd440  rlwinm 4, 30, 2, 22, 29
  03cd444  addic 3, 3, -28284
  03cd448  li 30, 0
  03cd44c  lwzx 31, 3, 4
  03cd450  lis 3, 164
  03cd454  lhz 29, 0(31)
  03cd458  rlwinm 29, 29, 8, 9, 23
  03cd45c  lwz 3, -28512(3)
  03cd460  addc 4, 3, 29
  03cd464  clrldi 4, 4, 32
  03cd468  lhz 5, 166(4)
  03cd46c  cmpwi 5, 668
  03cd470  bf 2, 0x3cd4b0
  03cd474  lbz 4, 32(4)
  03cd478  cmpwi 1, 30, 0
  03cd47c  cmpwi 4, 127
  03cd480  bf 0, 0x3cd4b0
  03cd484  bt 6, 0x3cd4a8
  03cd488  li 3, 255
  03cd48c  bl 0xfc620
  03cd490  nop
  03cd494  clrlwi 3, 3, 31
  03cd498  cmpwi 3, 0
  03cd49c  bt 2, 0x3cd4b0
  03cd4a0  lis 3, 164
  03cd4a4  lwz 3, -28512(3)
  03cd4a8  addc 30, 3, 29
  03cd4ac  clrldi 30, 30, 32
  03cd4b0  lhz 3, 0(31)
  03cd4b4  addic 31, 31, 2
  03cd4b8  extsh 3, 3
  03cd4bc  cmpwi 3, 0
  03cd4c0  bf 0, 0x3cd450
  03cd4c4  ori 3, 30, 0
  03cd4c8  ld 0, 160(1)
  03cd4cc  mtlr 0
  03cd4d0  ld 29, 120(1)
  03cd4d4  ld 30, 128(1)
  03cd4d8  ld 31, 136(1)
  03cd4dc  addi 1, 1, 144
  03cd4e0  blr

M580_003cd510:   # 0x3cd510, 0x448 bytes
  03cd510  stdu 1, -368(1)
  03cd514  mflr 0
  03cd518  std 0, 384(1)
  03cd51c  stfd 16, 240(1)
  03cd520  stfd 17, 248(1)
  03cd524  stfd 18, 256(1)
  03cd528  stfd 19, 264(1)
  03cd52c  stfd 20, 272(1)
  03cd530  stfd 21, 280(1)
  03cd534  stfd 22, 288(1)
  03cd538  stfd 23, 296(1)
  03cd53c  stfd 24, 304(1)
  03cd540  stfd 25, 312(1)
  03cd544  stfd 26, 320(1)
  03cd548  stfd 27, 328(1)
  03cd54c  stfd 28, 336(1)
  03cd550  stfd 29, 344(1)
  03cd554  stfd 30, 352(1)
  03cd558  stfd 31, 360(1)
  03cd55c  lis 7, 165
  03cd560  std 28, 208(1)
  03cd564  li 6, 368
  03cd568  ori 28, 5, 0
  03cd56c  addc 6, 1, 6
  03cd570  std 3, 48(6)
  03cd574  std 4, 56(6)
  03cd578  lwz 3, 8140(7)
  03cd57c  lfs 30, 52(6)
  03cd580  lfs 31, 60(6)
  03cd584  cmpwi 3, 1500
  03cd588  lfs 28, 48(6)
  03cd58c  cmpwi 1, 3, 1024
  03cd590  std 31, 232(1)
  03cd594  std 30, 224(1)
  03cd598  std 29, 216(1)
  03cd59c  std 27, 200(1)
  03cd5a0  std 26, 192(1)
  03cd5a4  lfs 29, 56(6)
  03cd5a8  bf 1, 0x3cd5b8
  03cd5ac  srawi 28, 28, 2
  03cd5b0  addze 28, 28
  03cd5b4  b 0x3cd5c4
  03cd5b8  bf 5, 0x3cd5c4
  03cd5bc  srawi 28, 28, 1
  03cd5c0  addze 28, 28
  03cd5c4  li 27, 0
  03cd5c8  cmpwi 28, 0
  03cd5cc  ori 29, 27, 0
  03cd5d0  bf 1, 0x3cd8f0
  03cd5d4  lis 3, 61
  03cd5d8  addi 3, 3, -11036
  03cd5dc  lfs 18, 0(3)
  03cd5e0  lfs 19, 4(3)
  03cd5e4  lfs 20, 8(3)
  03cd5e8  lfs 21, 12(3)
  03cd5ec  lfs 22, 16(3)
  03cd5f0  lfs 23, 20(3)
  03cd5f4  lfs 24, 24(3)
  03cd5f8  lfs 25, 28(3)
  03cd5fc  lfs 26, 32(3)
  03cd600  lfs 27, 36(3)
  03cd604  bl 0xfcc68
  03cd608  nop
  03cd60c  fmr 17, 1
  03cd610  stfs 28, 128(1)
  03cd614  fmr 1, 18
  03cd618  stfs 30, 132(1)
  03cd61c  stfs 29, 136(1)
  03cd620  fmr 2, 19
  03cd624  stfs 31, 140(1)
  03cd628  bl 0xfcbe8
  03cd62c  nop
  03cd630  lfs 2, 136(1)
  03cd634  fadds 3, 2, 1
  03cd638  fmr 1, 18
  03cd63c  fmr 2, 20
  03cd640  stfs 3, 136(1)
  03cd644  bl 0xfcbe8
  03cd648  nop
  03cd64c  lfs 2, 128(1)
  03cd650  fadds 3, 2, 1
  03cd654  fmr 2, 20
  03cd658  fmr 1, 18
  03cd65c  stfs 3, 128(1)
  03cd660  bl 0xfcbe8
  03cd664  nop
  03cd668  fadds 2, 17, 21
  03cd66c  lfs 6, 132(1)
  03cd670  lis 31, 269
  03cd674  stw 29, 156(1)
  03cd678  lis 30, 132
  03cd67c  fadds 1, 6, 1
  03cd680  stw 29, 152(1)
  03cd684  fsubs 3, 22, 2
  03cd688  fsubs 4, 23, 2
  03cd68c  stfs 1, 132(1)
  03cd690  stw 29, 148(1)
  03cd694  stw 29, 144(1)
  03cd698  fsub 5, 2, 3
  03cd69c  lfs 1, -24712(31)
  03cd6a0  fsel 2, 5, 3, 2
  03cd6a4  fsub 3, 4, 2
  03cd6a8  fsel 3, 3, 4, 2
  03cd6ac  lfs 2, 25324(30)
  03cd6b0  fmuls 4, 3, 3
  03cd6b4  fmuls 5, 4, 3
  03cd6b8  fmuls 6, 4, 5
  03cd6bc  fmadds 3, 5, 24, 3
  03cd6c0  fmuls 5, 4, 6
  03cd6c4  fmadds 3, 6, 25, 3
  03cd6c8  fmuls 4, 4, 5
  03cd6cc  fmadds 3, 5, 26, 3
  03cd6d0  fmadds 16, 4, 27, 3
  03cd6d4  bl 0xfcbe8
  03cd6d8  nop
  03cd6dc  fsubs 2, 22, 17
  03cd6e0  lis 26, 114
  03cd6e4  fsubs 3, 23, 17
  03cd6e8  fsub 4, 17, 2
  03cd6ec  fsel 2, 4, 2, 17
  03cd6f0  lfs 4, -3052(26)
  03cd6f4  fmuls 1, 1, 4
  03cd6f8  fsub 4, 3, 2
  03cd6fc  fmuls 1, 1, 16
  03cd700  fsel 3, 4, 3, 2
  03cd704  lfs 2, -24712(31)
  03cd708  lfs 4, 25324(30)
  03cd70c  stfs 1, 160(1)
  03cd710  fmr 1, 2
  03cd714  fmr 2, 4
  03cd718  fmuls 5, 3, 3
  03cd71c  fmuls 4, 5, 3
  03cd720  fmuls 6, 5, 4
  03cd724  fmadds 3, 4, 24, 3
  03cd728  fmuls 4, 5, 6
  03cd72c  fmadds 3, 6, 25, 3
  03cd730  fmuls 5, 5, 4
  03cd734  fmadds 3, 4, 26, 3
  03cd738  fmadds 17, 5, 27, 3
  03cd73c  bl 0xfcbe8
  03cd740  nop
  03cd744  lfs 2, -3052(26)
  03cd748  lis 3, 132
  03cd74c  lis 4, 132
  03cd750  stw 29, 168(1)
  03cd754  fmuls 1, 1, 2
  03cd758  fmuls 4, 1, 17
  03cd75c  lfs 1, 25308(3)
  03cd760  lfs 3, 25312(4)
  03cd764  fmr 2, 3
  03cd768  stfs 4, 164(1)
  03cd76c  bl 0xfcbe8
  03cd770  nop
  03cd774  lfs 2, -3052(26)
  03cd778  lis 3, 132
  03cd77c  lis 4, 132
  03cd780  fmuls 3, 1, 2
  03cd784  lfs 1, 25316(3)
  03cd788  lfs 2, 25320(4)
  03cd78c  stfs 3, 152(1)
  03cd790  bl 0xfcbe8
  03cd794  nop
  03cd798  lis 3, 132
  03cd79c  lis 4, 132
  03cd7a0  lis 5, 132
  03cd7a4  lwz 3, 25336(3)
  03cd7a8  lwz 4, 25340(4)
  03cd7ac  extsw 3, 3
  03cd7b0  extsw 4, 4
  03cd7b4  std 3, 176(1)
  03cd7b8  lfs 2, -3052(26)
  03cd7bc  lis 3, 132
  03cd7c0  fmuls 1, 1, 2
  03cd7c4  lfs 2, 25328(3)
  03cd7c8  lfs 3, 25332(5)
  03cd7cc  stfs 2, 156(1)
  03cd7d0  stfs 3, 172(1)
  03cd7d4  stfs 1, 168(1)
  03cd7d8  lfd 1, 176(1)
  03cd7dc  std 4, 176(1)
  03cd7e0  fcfid 1, 1
  03cd7e4  frsp 1, 1
  03cd7e8  lfd 2, 176(1)
  03cd7ec  fcfid 2, 2
  03cd7f0  frsp 2, 2
  03cd7f4  bl 0xfcbe8
  03cd7f8  nop
  03cd7fc  bl 0x502758
  03cd800  nop
  03cd804  lis 4, 132
  03cd808  lis 5, 132
  03cd80c  ori 31, 3, 0
  03cd810  lwz 4, 25344(4)
  03cd814  lwz 5, 25348(5)
  03cd818  extsw 4, 4
  03cd81c  extsw 5, 5
  03cd820  std 4, 176(1)
  03cd824  lfd 1, 176(1)
  03cd828  std 5, 176(1)
  03cd82c  fcfid 1, 1
  03cd830  frsp 1, 1
  03cd834  lfd 2, 176(1)
  03cd838  fcfid 2, 2
  03cd83c  frsp 2, 2
  03cd840  bl 0xfcbe8
  03cd844  nop
  03cd848  bl 0x502758
  03cd84c  nop
  03cd850  lis 4, 132
  03cd854  lis 5, 132
  03cd858  ori 30, 3, 0
  03cd85c  lwz 4, 25352(4)
  03cd860  lwz 5, 25356(5)
  03cd864  extsw 4, 4
  03cd868  extsw 5, 5
  03cd86c  std 4, 176(1)
  03cd870  lfd 1, 176(1)
  03cd874  std 5, 176(1)
  03cd878  fcfid 1, 1
  03cd87c  frsp 1, 1
  03cd880  lfd 2, 176(1)
  03cd884  fcfid 2, 2
  03cd888  frsp 2, 2
  03cd88c  bl 0xfcbe8
  03cd890  nop
  03cd894  bl 0x502758
  03cd898  nop
  03cd89c  lis 4, 132
  03cd8a0  lis 5, 132
  03cd8a4  lis 6, 132
  03cd8a8  ori 10, 3, 0
  03cd8ac  addic 3, 1, 128
  03cd8b0  lwz 7, 25360(4)
  03cd8b4  lwz 5, 25368(5)
  03cd8b8  addic 4, 1, 144
  03cd8bc  lwz 8, 25364(6)
  03cd8c0  extsw 9, 5
  03cd8c4  extsw 6, 7
  03cd8c8  extsw 7, 8
  03cd8cc  addic 5, 1, 160
  03cd8d0  std 9, 112(1)
  03cd8d4  ori 8, 31, 0
  03cd8d8  ori 9, 30, 0
  03cd8dc  bl 0x1206e8
  03cd8e0  nop
  03cd8e4  addic 27, 27, 1
  03cd8e8  cmpw 27, 28
  03cd8ec  bt 0, 0x3cd604
  03cd8f0  ld 0, 384(1)
  03cd8f4  mtlr 0
  03cd8f8  lfd 16, 240(1)
  03cd8fc  lfd 17, 248(1)
  03cd900  lfd 18, 256(1)
  03cd904  lfd 19, 264(1)
  03cd908  lfd 20, 272(1)
  03cd90c  lfd 21, 280(1)
  03cd910  lfd 22, 288(1)
  03cd914  lfd 23, 296(1)
  03cd918  lfd 24, 304(1)
  03cd91c  lfd 25, 312(1)
  03cd920  lfd 26, 320(1)
  03cd924  lfd 27, 328(1)
  03cd928  lfd 28, 336(1)
  03cd92c  lfd 29, 344(1)
  03cd930  lfd 30, 352(1)
  03cd934  lfd 31, 360(1)
  03cd938  ld 26, 192(1)
  03cd93c  ld 27, 200(1)
  03cd940  ld 28, 208(1)
  03cd944  ld 29, 216(1)
  03cd948  ld 30, 224(1)
  03cd94c  ld 31, 232(1)
  03cd950  addi 1, 1, 368
  03cd954  blr

M580_003cd980:   # 0x3cd980, 0x3c8 bytes
  03cd980  stdu 1, -288(1)
  03cd984  mflr 0
  03cd988  std 0, 304(1)
  03cd98c  stfd 24, 224(1)
  03cd990  stfd 25, 232(1)
  03cd994  stfd 26, 240(1)
  03cd998  stfd 27, 248(1)
  03cd99c  stfd 28, 256(1)
  03cd9a0  stfd 29, 264(1)
  03cd9a4  stfd 30, 272(1)
  03cd9a8  stfd 31, 280(1)
  03cd9ac  std 30, 208(1)
  03cd9b0  lis 5, 165
  03cd9b4  std 31, 216(1)
  03cd9b8  ori 30, 3, 0
  03cd9bc  std 29, 200(1)
  03cd9c0  ori 31, 4, 0
  03cd9c4  li 29, 288
  03cd9c8  lwz 3, 8140(5)
  03cd9cc  std 28, 192(1)
  03cd9d0  cmpwi 3, 1700
  03cd9d4  bt 1, 0x3cdd08
  03cd9d8  bl 0xfcc68
  03cd9dc  nop
  03cd9e0  addc 3, 1, 29
  03cd9e4  lis 4, 61
  03cd9e8  fmr 31, 1
  03cd9ec  std 30, 48(3)
  03cd9f0  std 31, 56(3)
  03cd9f4  lfs 2, 52(3)
  03cd9f8  addi 31, 4, -9896
  03cd9fc  lfs 3, 60(3)
  03cda00  stfs 2, 132(1)
  03cda04  stfs 3, 140(1)
  03cda08  lfs 1, 48(3)
  03cda0c  lfs 2, 56(3)
  03cda10  stfs 1, 128(1)
  03cda14  stfs 2, 136(1)
  03cda18  lfs 30, 0(31)
  03cda1c  lfs 2, 4(31)
  03cda20  fmr 1, 30
  03cda24  bl 0xfcbe8
  03cda28  nop
  03cda2c  lfs 2, 136(1)
  03cda30  fadds 1, 2, 1
  03cda34  fmr 2, 30
  03cda38  stfs 1, 136(1)
  03cda3c  lfs 29, 8(31)
  03cda40  fmr 1, 29
  03cda44  bl 0xfcbe8
  03cda48  nop
  03cda4c  lfs 2, 128(1)
  03cda50  fadds 3, 2, 1
  03cda54  fmr 2, 30
  03cda58  fmr 1, 29
  03cda5c  stfs 3, 128(1)
  03cda60  bl 0xfcbe8
  03cda64  nop
  03cda68  lfs 2, 12(31)
  03cda6c  lfs 30, 16(31)
  03cda70  fadds 2, 31, 2
  03cda74  lfs 29, 20(31)
  03cda78  li 30, 0
  03cda7c  lfs 28, 24(31)
  03cda80  lfs 27, 28(31)
  03cda84  lfs 5, 132(1)
  03cda88  lis 29, 132
  03cda8c  lfs 26, 32(31)
  03cda90  fadds 1, 5, 1
  03cda94  lfs 25, 36(31)
  03cda98  fsubs 3, 30, 2
  03cda9c  fsubs 4, 29, 2
  03cdaa0  lis 31, 132
  03cdaa4  stw 30, 144(1)
  03cdaa8  stw 30, 148(1)
  03cdaac  stw 30, 152(1)
  03cdab0  lfs 5, 25388(31)
  03cdab4  stw 30, 156(1)
  03cdab8  fsub 6, 2, 3
  03cdabc  stfs 1, 132(1)
  03cdac0  fmr 1, 5
  03cdac4  fsel 2, 6, 3, 2
  03cdac8  fsub 3, 4, 2
  03cdacc  fsel 2, 3, 4, 2
  03cdad0  fmuls 4, 2, 2
  03cdad4  fmuls 3, 4, 2
  03cdad8  fmuls 6, 4, 3
  03cdadc  fmadds 3, 3, 28, 2
  03cdae0  lfs 2, 25392(29)
  03cdae4  fmuls 5, 4, 6
  03cdae8  fmadds 3, 6, 27, 3
  03cdaec  fmuls 4, 4, 5
  03cdaf0  fmadds 3, 5, 26, 3
  03cdaf4  fmadds 24, 4, 25, 3
  03cdaf8  bl 0xfcbe8
  03cdafc  nop
  03cdb00  fsubs 2, 30, 31
  03cdb04  fsubs 3, 29, 31
  03cdb08  lis 28, 114
  03cdb0c  fsub 4, 31, 2
  03cdb10  fsel 2, 4, 2, 31
  03cdb14  lfs 4, -3052(28)
  03cdb18  fmuls 1, 1, 4
  03cdb1c  fsub 4, 3, 2
  03cdb20  fmuls 1, 1, 24
  03cdb24  fsel 3, 4, 3, 2
  03cdb28  lfs 2, 25388(31)
  03cdb2c  lfs 4, 25392(29)
  03cdb30  stfs 1, 160(1)
  03cdb34  fmr 1, 2
  03cdb38  fmr 2, 4
  03cdb3c  fmuls 5, 3, 3
  03cdb40  fmuls 4, 5, 3
  03cdb44  fmuls 6, 5, 4
  03cdb48  fmadds 3, 4, 28, 3
  03cdb4c  fmuls 4, 5, 6
  03cdb50  fmadds 3, 6, 27, 3
  03cdb54  fmuls 5, 5, 4
  03cdb58  fmadds 3, 4, 26, 3
  03cdb5c  fmadds 31, 5, 25, 3
  03cdb60  bl 0xfcbe8
  03cdb64  nop
  03cdb68  lfs 2, -3052(28)
  03cdb6c  lis 3, 132
  03cdb70  stw 30, 168(1)
  03cdb74  fmuls 1, 1, 2
  03cdb78  lis 4, 132
  03cdb7c  fmuls 4, 1, 31
  03cdb80  lfs 1, 25372(3)
  03cdb84  lfs 3, 25376(4)
  03cdb88  fmr 2, 3
  03cdb8c  stfs 4, 164(1)
  03cdb90  bl 0xfcbe8
  03cdb94  nop
  03cdb98  lfs 2, -3052(28)
  03cdb9c  lis 3, 132
  03cdba0  fmuls 3, 1, 2
  03cdba4  lis 4, 132
  03cdba8  lfs 1, 25380(3)
  03cdbac  lfs 2, 25384(4)
  03cdbb0  stfs 3, 152(1)
  03cdbb4  bl 0xfcbe8
  03cdbb8  nop
  03cdbbc  lis 3, 132
  03cdbc0  lis 4, 132
  03cdbc4  lis 5, 132
  03cdbc8  lwz 3, 25404(3)
  03cdbcc  lwz 4, 25408(4)
  03cdbd0  extsw 3, 3
  03cdbd4  extsw 4, 4
  03cdbd8  std 3, 176(1)
  03cdbdc  lfs 2, -3052(28)
  03cdbe0  lis 3, 132
  03cdbe4  fmuls 1, 1, 2
  03cdbe8  lfs 2, 25396(3)
  03cdbec  lfs 3, 25400(5)
  03cdbf0  stfs 2, 156(1)
  03cdbf4  stfs 3, 172(1)
  03cdbf8  stfs 1, 168(1)
  03cdbfc  lfd 1, 176(1)
  03cdc00  std 4, 176(1)
  03cdc04  fcfid 1, 1
  03cdc08  frsp 1, 1
  03cdc0c  lfd 2, 176(1)
  03cdc10  fcfid 2, 2
  03cdc14  frsp 2, 2
  03cdc18  bl 0xfcbe8
  03cdc1c  nop
  03cdc20  bl 0x502758
  03cdc24  nop
  03cdc28  lis 4, 132
  03cdc2c  lis 5, 132
  03cdc30  ori 31, 3, 0
  03cdc34  lwz 4, 25412(4)
  03cdc38  lwz 5, 25416(5)
  03cdc3c  extsw 4, 4
  03cdc40  extsw 5, 5
  03cdc44  std 4, 176(1)
  03cdc48  lfd 1, 176(1)
  03cdc4c  std 5, 176(1)
  03cdc50  fcfid 1, 1
  03cdc54  frsp 1, 1
  03cdc58  lfd 2, 176(1)
  03cdc5c  fcfid 2, 2
  03cdc60  frsp 2, 2
  03cdc64  bl 0xfcbe8
  03cdc68  nop
  03cdc6c  bl 0x502758
  03cdc70  nop
  03cdc74  lis 4, 132
  03cdc78  lis 5, 132
  03cdc7c  ori 30, 3, 0
  03cdc80  lwz 4, 25420(4)
  03cdc84  lwz 5, 25424(5)
  03cdc88  extsw 4, 4
  03cdc8c  extsw 5, 5
  03cdc90  std 4, 176(1)
  03cdc94  lfd 1, 176(1)
  03cdc98  std 5, 176(1)
  03cdc9c  fcfid 1, 1
  03cdca0  frsp 1, 1
  03cdca4  lfd 2, 176(1)
  03cdca8  fcfid 2, 2
  03cdcac  frsp 2, 2
  03cdcb0  bl 0xfcbe8
  03cdcb4  nop
  03cdcb8  bl 0x502758
  03cdcbc  nop
  03cdcc0  lis 5, 132
  03cdcc4  lis 6, 132
  03cdcc8  lis 7, 132
  03cdccc  ori 10, 3, 0
  03cdcd0  addic 3, 1, 128
  03cdcd4  lwz 9, 25428(5)
  03cdcd8  addic 4, 1, 144
  03cdcdc  lwz 11, 25436(6)
  03cdce0  addic 5, 1, 160
  03cdce4  lwz 7, 25432(7)
  03cdce8  extsw 6, 9
  03cdcec  extsw 11, 11
  03cdcf0  ori 8, 31, 0
  03cdcf4  ori 9, 30, 0
  03cdcf8  extsw 7, 7
  03cdcfc  std 11, 112(1)
  03cdd00  bl 0x1206e8
  03cdd04  nop
  03cdd08  ld 0, 304(1)
  03cdd0c  mtlr 0
  03cdd10  lfd 24, 224(1)
  03cdd14  lfd 25, 232(1)
  03cdd18  lfd 26, 240(1)
  03cdd1c  lfd 27, 248(1)
  03cdd20  lfd 28, 256(1)
  03cdd24  lfd 29, 264(1)
  03cdd28  lfd 30, 272(1)
  03cdd2c  lfd 31, 280(1)
  03cdd30  ld 28, 192(1)
  03cdd34  ld 29, 200(1)
  03cdd38  ld 30, 208(1)
  03cdd3c  ld 31, 216(1)
  03cdd40  addi 1, 1, 288
  03cdd44  blr

M580_003cdd50:   # 0x3cdd50, 0xc4 bytes
  03cdd50  stdu 1, -144(1)
  03cdd54  mflr 0
  03cdd58  std 0, 160(1)
  03cdd5c  std 31, 136(1)
  03cdd60  ori 31, 3, 0
  03cdd64  lis 3, 165
  03cdd68  addic 4, 3, 7136
  03cdd6c  std 30, 128(1)
  03cdd70  addic 3, 31, 16
  03cdd74  lwz 30, 120(31)
  03cdd78  lwz 5, 656(30)
  03cdd7c  slwi 5, 5, 2
  03cdd80  extsw 5, 5
  03cdd84  lwzx 5, 4, 5
  03cdd88  addic 4, 5, 16
  03cdd8c  lwz 5, 0(5)
  03cdd90  extsw 5, 5
  03cdd94  bl 0x104e44
  03cdd98  nop
  03cdd9c  cmpwi 3, 0
  03cdda0  bf 2, 0x3cddfc
  03cdda4  li 3, 18
  03cdda8  lbz 4, 83(31)
  03cddac  cmpwi 4, 0
  03cddb0  stb 3, 32(31)
  03cddb4  bt 2, 0x3cddf4
  03cddb8  lis 3, 61
  03cddbc  lis 4, 114
  03cddc0  addi 3, 3, -8888
  03cddc4  li 5, 0
  03cddc8  lfs 1, 0(3)
  03cddcc  lfs 2, -3056(4)
  03cddd0  ori 3, 31, 0
  03cddd4  fmuls 1, 2, 1
  03cddd8  li 4, 0
  03cdddc  fctiwz 1, 1
  03cdde0  stfd 1, 112(1)
  03cdde4  lwz 6, 116(1)
  03cdde8  extsw 6, 6
  03cddec  bl 0xfddc0
  03cddf0  nop
  03cddf4  li 3, 1
  03cddf8  stw 3, 664(30)
  03cddfc  ld 0, 160(1)
  03cde00  mtlr 0
  03cde04  ld 30, 128(1)
  03cde08  ld 31, 136(1)
  03cde0c  addi 1, 1, 144
  03cde10  blr

M580_003cde20:   # 0x3cde20, 0xf4 bytes
  03cde20  stdu 1, -160(1)
  03cde24  mflr 0
  03cde28  std 0, 176(1)
  03cde2c  stfd 30, 144(1)
  03cde30  stfd 31, 152(1)
  03cde34  std 31, 136(1)
  03cde38  lbz 31, 33(3)
  03cde3c  std 30, 128(1)
  03cde40  cmpwi 31, 255
  03cde44  bt 2, 0x3cdef4
  03cde48  lis 3, 165
  03cde4c  lis 5, 61
  03cde50  rlwinm 4, 31, 2, 22, 29
  03cde54  addic 3, 3, -28284
  03cde58  addi 5, 5, -8684
  03cde5c  lwzx 31, 3, 4
  03cde60  lfs 30, 0(5)
  03cde64  lfs 31, 4(5)
  03cde68  lis 3, 164
  03cde6c  lhz 4, 0(31)
  03cde70  rlwinm 4, 4, 8, 9, 23
  03cde74  lwz 3, -28512(3)
  03cde78  addc 30, 3, 4
  03cde7c  clrldi 30, 30, 32
  03cde80  lhz 3, 166(30)
  03cde84  cmpwi 3, 580
  03cde88  bf 2, 0x3cdee0
  03cde8c  lwz 30, 120(30)
  03cde90  fmr 1, 30
  03cde94  fmr 2, 31
  03cde98  bl 0xfcbe8
  03cde9c  nop
  03cdea0  lhz 3, 606(30)
  03cdea4  lis 4, 114
  03cdea8  extsh 3, 3
  03cdeac  extsw 3, 3
  03cdeb0  std 3, 112(1)
  03cdeb4  lfs 2, -3056(4)
  03cdeb8  fmuls 1, 1, 2
  03cdebc  lfd 2, 112(1)
  03cdec0  fcfid 2, 2
  03cdec4  frsp 2, 2
  03cdec8  fcmpu 0, 2, 1
  03cdecc  cror 6, 1, 2
  03cded0  bt 6, 0x3cdee0
  03cded4  bl 0x502758
  03cded8  nop
  03cdedc  sth 3, 606(30)
  03cdee0  lhz 3, 0(31)
  03cdee4  addic 31, 31, 2
  03cdee8  extsh 3, 3
  03cdeec  cmpwi 3, 0
  03cdef0  bf 0, 0x3cde68
  03cdef4  ld 0, 176(1)
  03cdef8  mtlr 0
  03cdefc  lfd 30, 144(1)
  03cdf00  lfd 31, 152(1)
  03cdf04  ld 30, 128(1)
  03cdf08  ld 31, 136(1)
  03cdf0c  addi 1, 1, 160
  03cdf10  blr

M580_003cdf40:   # 0x3cdf40, 0x6ac bytes
  03cdf40  stdu 1, -224(1)
  03cdf44  mflr 0
  03cdf48  std 0, 240(1)
  03cdf4c  stfd 29, 200(1)
  03cdf50  stfd 30, 208(1)
  03cdf54  stfd 31, 216(1)
  03cdf58  std 30, 184(1)
  03cdf5c  lwz 30, 120(3)
  03cdf60  std 31, 192(1)
  03cdf64  lbz 4, 32(3)
  03cdf68  ori 31, 3, 0
  03cdf6c  stw 4, 640(30)
  03cdf70  lbz 3, 32(3)
  03cdf74  std 29, 176(1)
  03cdf78  std 28, 168(1)
  03cdf7c  std 27, 160(1)
  03cdf80  cmpwi 3, 0
  03cdf84  bt 2, 0x3ce5bc
  03cdf88  lbz 3, 46(30)
  03cdf8c  cmpwi 3, 2
  03cdf90  bf 2, 0x3ce0c8
  03cdf94  li 4, 1
  03cdf98  lwz 3, 648(30)
  03cdf9c  cmpwi 3, -1
  03cdfa0  stb 4, 46(30)
  03cdfa4  bf 1, 0x3cdfcc
  03cdfa8  lis 4, 164
  03cdfac  slwi 3, 3, 8
  03cdfb0  lwz 4, -28512(4)
  03cdfb4  addc 3, 4, 3
  03cdfb8  clrldi 3, 3, 32
  03cdfbc  lwz 3, 120(3)
  03cdfc0  lwz 4, 332(3)
  03cdfc4  addic 4, 4, -1
  03cdfc8  stw 4, 332(3)
  03cdfcc  lbz 29, 33(31)
  03cdfd0  cmpwi 29, 255
  03cdfd4  bf 2, 0x3cdfe0
  03cdfd8  li 29, 0
  03cdfdc  b 0x3ce064
  03cdfe0  lis 3, 165
  03cdfe4  rlwinm 4, 29, 2, 22, 29
  03cdfe8  addic 3, 3, -28284
  03cdfec  li 29, 0
  03cdff0  lwzx 28, 3, 4
  03cdff4  lis 3, 164
  03cdff8  lhz 27, 0(28)
  03cdffc  rlwinm 27, 27, 8, 9, 23
  03ce000  lwz 3, -28512(3)
  03ce004  addc 4, 3, 27
  03ce008  clrldi 4, 4, 32
  03ce00c  lhz 5, 166(4)
  03ce010  cmpwi 5, 668
  03ce014  bf 2, 0x3ce050
  03ce018  lbz 4, 32(4)
  03ce01c  cmpwi 1, 29, 0
  03ce020  cmpwi 4, 127
  03ce024  bf 0, 0x3ce050
  03ce028  bt 6, 0x3ce04c
  03ce02c  li 3, 255
  03ce030  bl 0xfc620
  03ce034  nop
  03ce038  clrlwi 3, 3, 31
  03ce03c  cmpwi 3, 0
  03ce040  bt 2, 0x3ce050
  03ce044  lis 3, 164
  03ce048  lwz 3, -28512(3)
  03ce04c  addc 29, 3, 27
  03ce050  lhz 3, 0(28)
  03ce054  addic 28, 28, 2
  03ce058  extsh 3, 3
  03ce05c  cmpwi 3, 0
  03ce060  bf 0, 0x3cdff4
  03ce064  cmpwi 29, 0
  03ce068  stw 29, 636(30)
  03ce06c  bt 2, 0x3ce0b8
  03ce070  li 3, 26
  03ce074  lis 4, 61
  03ce078  addi 4, 4, -8428
  03ce07c  stb 3, 32(31)
  03ce080  lfs 1, 544(30)
  03ce084  li 3, 0
  03ce088  stfs 1, 16(31)
  03ce08c  lfs 1, 548(30)
  03ce090  stfs 1, 20(31)
  03ce094  lfs 1, 552(30)
  03ce098  stfs 1, 24(31)
  03ce09c  lfs 2, 556(30)
  03ce0a0  stfs 2, 28(31)
  03ce0a4  lfs 2, 0(4)
  03ce0a8  stw 3, 148(31)
  03ce0ac  fsubs 1, 1, 2
  03ce0b0  stfs 1, 24(31)
  03ce0b4  b 0x3ce0c8
  03ce0b8  ori 3, 31, 0
  03ce0bc  bl 0xefb38
  03ce0c0  nop
  03ce0c4  b 0x3ce5bc
  03ce0c8  lwz 3, 56(30)
  03ce0cc  cmpwi 3, 0
  03ce0d0  bf 2, 0x3ce12c
  03ce0d4  addic 3, 30, 604
  03ce0d8  bl 0x4fffb4
  03ce0dc  nop
  03ce0e0  cmpwi 3, 0
  03ce0e4  bf 2, 0x3ce15c
  03ce0e8  lis 3, 151
  03ce0ec  lfs 1, 20(31)
  03ce0f0  lfs 2, 16(31)
  03ce0f4  addic 3, 3, -25376
  03ce0f8  lfs 3, 132(3)
  03ce0fc  lfs 4, 128(3)
  03ce100  fsubs 1, 1, 3
  03ce104  fsubs 2, 2, 4
  03ce108  lis 3, 61
  03ce10c  addi 3, 3, -8428
  03ce110  fmuls 1, 1, 1
  03ce114  fmadds 1, 2, 2, 1
  03ce118  lfs 2, 0(3)
  03ce11c  fsqrts 1, 1
  03ce120  fcmpu 0, 1, 2
  03ce124  cror 6, 1, 2
  03ce128  bt 6, 0x3ce15c
  03ce12c  lis 3, 61
  03ce130  addi 3, 3, -8428
  03ce134  lfs 1, 4(3)
  03ce138  lfs 2, 8(3)
  03ce13c  bl 0xfcbe8
  03ce140  nop
  03ce144  lis 3, 114
  03ce148  lfs 2, -3056(3)
  03ce14c  fmuls 1, 1, 2
  03ce150  bl 0x502758
  03ce154  nop
  03ce158  sth 3, 606(30)
  03ce15c  li 4, 0
  03ce160  addic 3, 30, 606
  03ce164  stw 4, 56(30)
  03ce168  bl 0x4fffb4
  03ce16c  nop
  03ce170  cmpwi 3, 0
  03ce174  bt 2, 0x3ce180
  03ce178  lfs 31, 588(30)
  03ce17c  b 0x3ce194
  03ce180  lis 3, 61
  03ce184  lfs 31, 588(30)
  03ce188  addi 3, 3, -8428
  03ce18c  lfs 1, 12(3)
  03ce190  fadds 31, 31, 1
  03ce194  lis 3, 61
  03ce198  li 6, 0
  03ce19c  stfs 31, 592(30)
  03ce1a0  addi 7, 3, -8428
  03ce1a4  ori 3, 31, 0
  03ce1a8  lis 4, 51
  03ce1ac  li 5, 0
  03ce1b0  lfs 31, 16(7)
  03ce1b4  stw 6, 132(1)
  03ce1b8  bl 0x10675c
  03ce1bc  nop
  03ce1c0  ori 29, 3, 0
  03ce1c4  ori 3, 31, 0
  03ce1c8  addic 5, 30, 32
  03ce1cc  li 6, 0
  03ce1d0  addic 7, 1, 128
  03ce1d4  li 9, 0
  03ce1d8  addic 8, 1, 132
  03ce1dc  ori 4, 29, 0
  03ce1e0  li 10, 4
  03ce1e4  bl 0x106840
  03ce1e8  nop
  03ce1ec  lwz 3, 128(1)
  03ce1f0  cmpwi 3, 1
  03ce1f4  bt 2, 0x3ce4c0
  03ce1f8  lbz 3, 32(31)
  03ce1fc  cmpwi 3, 24
  03ce200  bt 2, 0x3ce4c0
  03ce204  lbz 28, 33(31)
  03ce208  cmpwi 28, 255
  03ce20c  bt 2, 0x3ce2bc
  03ce210  lis 3, 165
  03ce214  lis 5, 61
  03ce218  rlwinm 4, 28, 2, 22, 29
  03ce21c  addic 3, 3, -28284
  03ce220  addi 5, 5, -8428
  03ce224  lwzx 28, 3, 4
  03ce228  lfs 29, 8(5)
  03ce22c  lfs 30, 20(5)
  03ce230  lis 3, 164
  03ce234  lhz 4, 0(28)
  03ce238  rlwinm 4, 4, 8, 9, 23
  03ce23c  lwz 3, -28512(3)
  03ce240  addc 27, 3, 4
  03ce244  clrldi 27, 27, 32
  03ce248  lhz 3, 166(27)
  03ce24c  cmpwi 3, 580
  03ce250  bf 2, 0x3ce2a8
  03ce254  lwz 27, 120(27)
  03ce258  fmr 1, 29
  03ce25c  fmr 2, 30
  03ce260  bl 0xfcbe8
  03ce264  nop
  03ce268  lhz 3, 606(27)
  03ce26c  lis 4, 114
  03ce270  extsh 3, 3
  03ce274  extsw 3, 3
  03ce278  std 3, 144(1)
  03ce27c  lfs 2, -3056(4)
  03ce280  fmuls 1, 1, 2
  03ce284  lfd 2, 144(1)
  03ce288  fcfid 2, 2
  03ce28c  frsp 2, 2
  03ce290  fcmpu 0, 2, 1
  03ce294  cror 6, 1, 2
  03ce298  bt 6, 0x3ce2a8
  03ce29c  bl 0x502758
  03ce2a0  nop
  03ce2a4  sth 3, 606(27)
  03ce2a8  lhz 3, 0(28)
  03ce2ac  addic 28, 28, 2
  03ce2b0  extsh 3, 3
  03ce2b4  cmpwi 3, 0
  03ce2b8  bf 0, 0x3ce230
  03ce2bc  li 3, 0
  03ce2c0  stw 3, 668(30)
  03ce2c4  lfs 1, 32(30)
  03ce2c8  lfs 2, 132(1)
  03ce2cc  fsubs 1, 1, 2
  03ce2d0  fcmpu 0, 1, 31
  03ce2d4  stfs 1, 32(30)
  03ce2d8  bt 1, 0x3ce4c0
  03ce2dc  fsubs 1, 1, 2
  03ce2e0  lis 3, 61
  03ce2e4  li 5, 512
  03ce2e8  addi 7, 3, -8428
  03ce2ec  lis 4, 16128
  03ce2f0  lis 6, 132
  03ce2f4  lis 3, 114
  03ce2f8  stw 5, 320(30)
  03ce2fc  lis 5, 132
  03ce300  li 8, 0
  03ce304  stfs 1, 32(30)
  03ce308  lfs 1, 24(7)
  03ce30c  stw 4, 328(30)
  03ce310  lfs 2, 25296(6)
  03ce314  lis 4, 114
  03ce318  lfs 3, -3048(3)
  03ce31c  lis 6, 132
  03ce320  lis 3, 132
  03ce324  fmuls 2, 2, 3
  03ce328  stfs 2, 304(30)
  03ce32c  lfs 2, 25300(5)
  03ce330  li 5, 9
  03ce334  fmuls 2, 2, 3
  03ce338  stw 5, 324(30)
  03ce33c  stfs 2, 308(30)
  03ce340  lfs 2, 25288(3)
  03ce344  lfs 3, -3052(4)
  03ce348  fmuls 2, 2, 3
  03ce34c  addic 3, 1, 112
  03ce350  li 4, 0
  03ce354  stfs 2, 312(30)
  03ce358  lfs 2, 25284(6)
  03ce35c  stb 8, 349(30)
  03ce360  fmuls 2, 2, 3
  03ce364  stfs 2, 316(30)
  03ce368  lfs 2, 28(7)
  03ce36c  fmuls 3, 3, 2
  03ce370  stfs 3, 364(30)
  03ce374  lfs 3, 24(31)
  03ce378  lfs 4, 16(31)
  03ce37c  fadds 2, 3, 2
  03ce380  lfs 3, 20(31)
  03ce384  stfs 4, 112(1)
  03ce388  lfs 4, 28(31)
  03ce38c  stfs 3, 116(1)
  03ce390  stfs 4, 124(1)
  03ce394  stfs 2, 120(1)
  03ce398  bl 0xffb70
  03ce39c  nop
  03ce3a0  lfs 3, 24(31)
  03ce3a4  lfs 2, 120(1)
  03ce3a8  fcmpu 0, 3, 1
  03ce3ac  cror 6, 1, 2
  03ce3b0  bt 6, 0x3ce3b8
  03ce3b4  stfs 1, 24(31)
  03ce3b8  lwz 3, 648(30)
  03ce3bc  cmpwi 3, -1
  03ce3c0  bf 1, 0x3ce3f4
  03ce3c4  lis 4, 164
  03ce3c8  slwi 3, 3, 8
  03ce3cc  li 5, 0
  03ce3d0  lwz 4, -28512(4)
  03ce3d4  addc 3, 4, 3
  03ce3d8  clrldi 3, 3, 32
  03ce3dc  lwz 3, 120(3)
  03ce3e0  lwz 4, 332(3)
  03ce3e4  addic 4, 4, -1
  03ce3e8  stw 4, 332(3)
  03ce3ec  stb 5, 349(30)
  03ce3f0  b 0x3ce408
  03ce3f4  lis 3, 61
  03ce3f8  addi 3, 3, -8428
  03ce3fc  lfs 1, 32(3)
  03ce400  fadds 1, 2, 1
  03ce404  stfs 1, 120(1)
  03ce408  lwz 3, 324(30)
  03ce40c  li 28, 0
  03ce410  lhz 4, 52(31)
  03ce414  addic 5, 1, 136
  03ce418  ori 3, 3, 32
  03ce41c  rlwimi 4, 28, 0, 19, 19
  03ce420  addic 6, 30, 312
  03ce424  addic 7, 30, 316
  03ce428  stw 3, 324(30)
  03ce42c  sth 4, 52(31)
  03ce430  lfs 1, 16(29)
  03ce434  lfs 2, 24(29)
  03ce438  stfs 1, 48(1)
  03ce43c  stfs 2, 56(1)
  03ce440  lfs 1, 20(29)
  03ce444  lfs 2, 28(29)
  03ce448  stfs 1, 52(1)
  03ce44c  stfs 2, 60(1)
  03ce450  ld 3, 48(1)
  03ce454  ld 4, 56(1)
  03ce458  bl 0x107de8
  03ce45c  nop
  03ce460  addic 4, 30, 288
  03ce464  lfs 1, 136(1)
  03ce468  ori 3, 31, 0
  03ce46c  li 6, 6
  03ce470  li 7, 1
  03ce474  li 8, 0
  03ce478  bl 0x10ad80
  03ce47c  nop
  03ce480  lis 4, 16217
  03ce484  lis 7, 16608
  03ce488  ori 6, 4, 39322
  03ce48c  lis 8, 16736
  03ce490  li 5, 24
  03ce494  ori 3, 31, 0
  03ce498  stw 6, 328(30)
  03ce49c  addic 4, 30, 272
  03ce4a0  li 6, 120
  03ce4a4  stw 7, 368(30)
  03ce4a8  stw 8, 372(30)
  03ce4ac  stb 5, 32(31)
  03ce4b0  stw 28, 148(31)
  03ce4b4  stb 6, 279(30)
  03ce4b8  bl 0x10c808
  03ce4bc  nop
  03ce4c0  li 5, 255
  03ce4c4  ori 3, 31, 0
  03ce4c8  addic 4, 30, 272
  03ce4cc  stb 5, 164(31)
  03ce4d0  bl 0x10c9a0
  03ce4d4  nop
  03ce4d8  lwz 3, 656(30)
  03ce4dc  lis 4, 165
  03ce4e0  lfs 1, 592(30)
  03ce4e4  li 6, 0
  03ce4e8  slwi 3, 3, 2
  03ce4ec  addic 5, 4, 7136
  03ce4f0  extsw 7, 3
  03ce4f4  ori 3, 31, 0
  03ce4f8  addic 4, 30, 464
  03ce4fc  lwzx 5, 5, 7
  03ce500  li 7, 0
  03ce504  addic 8, 5, 16
  03ce508  lwz 9, 0(5)
  03ce50c  extsw 9, 9
  03ce510  bl 0x111ba0
  03ce514  nop
  03ce518  cmpwi 3, 2
  03ce51c  bt 2, 0x3ce580
  03ce520  lfs 1, 548(30)
  03ce524  lfs 2, 468(30)
  03ce528  lfs 3, 544(30)
  03ce52c  fsubs 1, 1, 2
  03ce530  lfs 2, 464(30)
  03ce534  fsubs 2, 3, 2
  03ce538  fmuls 1, 1, 1
  03ce53c  fmadds 1, 2, 2, 1
  03ce540  lfs 2, 592(30)
  03ce544  fsqrts 1, 1
  03ce548  fcmpu 0, 1, 2
  03ce54c  bt 1, 0x3ce578
  03ce550  lfs 1, 24(31)
  03ce554  lis 3, 61
  03ce558  lfs 2, 472(30)
  03ce55c  addi 3, 3, -8428
  03ce560  fsubs 1, 1, 2
  03ce564  lfs 2, 36(3)
  03ce568  fabs 1, 1
  03ce56c  fcmpu 0, 1, 2
  03ce570  cror 6, 0, 2
  03ce574  bt 6, 0x3ce580
  03ce578  li 3, 2
  03ce57c  stw 3, 532(30)
  03ce580  lwz 3, 528(30)
  03ce584  cmpwi 3, 0
  03ce588  bf 2, 0x3ce5bc
  03ce58c  lis 3, 151
  03ce590  addic 3, 3, -25376
  03ce594  lfs 1, 128(3)
  03ce598  lwz 4, 8320(3)
  03ce59c  stfs 1, 464(30)
  03ce5a0  lfs 1, 132(3)
  03ce5a4  stw 4, 528(30)
  03ce5a8  stfs 1, 468(30)
  03ce5ac  lfs 1, 136(3)
  03ce5b0  stfs 1, 472(30)
  03ce5b4  lfs 1, 140(3)
  03ce5b8  stfs 1, 476(30)
  03ce5bc  ld 0, 240(1)
  03ce5c0  mtlr 0
  03ce5c4  lfd 29, 200(1)
  03ce5c8  lfd 30, 208(1)
  03ce5cc  lfd 31, 216(1)
  03ce5d0  ld 27, 160(1)
  03ce5d4  ld 28, 168(1)
  03ce5d8  ld 29, 176(1)
  03ce5dc  ld 30, 184(1)
  03ce5e0  ld 31, 192(1)
  03ce5e4  addi 1, 1, 224
  03ce5e8  blr

UpdateMoby_580:   # 0x3ce680, 0x2498 bytes
  03ce680  stdu 1, -528(1)
  03ce684  mflr 0
  03ce688  std 0, 544(1)
  03ce68c  stfd 26, 480(1)
  03ce690  stfd 27, 488(1)
  03ce694  stfd 28, 496(1)
  03ce698  stfd 29, 504(1)
  03ce69c  stfd 30, 512(1)
  03ce6a0  stfd 31, 520(1)
  03ce6a4  std 31, 472(1)
  03ce6a8  lis 4, 269
  03ce6ac  ori 31, 3, 0
  03ce6b0  lwz 3, -24708(4)
  03ce6b4  std 30, 464(1)
  03ce6b8  std 29, 456(1)
  03ce6bc  std 28, 448(1)
  03ce6c0  std 27, 440(1)
  03ce6c4  std 26, 432(1)
  03ce6c8  std 25, 424(1)
  03ce6cc  cmpwi 3, 0
  03ce6d0  bf 2, 0x3d0ad4
  03ce6d4  lis 3, 146
  03ce6d8  lis 4, 146
  03ce6dc  li 5, 129
  03ce6e0  lis 7, 61
  03ce6e4  li 6, 0
  03ce6e8  lwz 3, 29180(3)
  03ce6ec  addi 7, 7, -6676
  03ce6f0  stw 5, 0(3)
  03ce6f4  lwz 5, 29176(4)
  03ce6f8  ori 3, 31, 0
  03ce6fc  li 4, 0
  03ce700  stw 6, 0(5)
  03ce704  lwz 30, 120(31)
  03ce708  lfs 1, 0(7)
  03ce70c  addic 5, 30, 672
  03ce710  bl 0x119a18
  03ce714  nop
  03ce718  lbz 3, 49(31)
  03ce71c  cmpwi 3, 0
  03ce720  bt 2, 0x3ce764
  03ce724  lis 4, 149
  03ce728  addic 3, 31, 16
  03ce72c  addic 4, 4, 5376
  03ce730  bl 0x5e8548
  03ce734  nop
  03ce738  lis 3, 61
  03ce73c  addi 3, 3, -6676
  03ce740  lfs 2, 4(3)
  03ce744  fcmpu 0, 1, 2
  03ce748  cror 6, 1, 2
  03ce74c  bt 6, 0x3ce764
  03ce750  ori 3, 31, 0
  03ce754  bl 0x106360
  03ce758  nop
  03ce75c  li 3, 22
  03ce760  stb 3, 127(31)
  03ce764  ori 3, 31, 0
  03ce768  bl 0x3cdf40
  03ce76c  lbz 3, 32(31)
  03ce770  lfs 28, 24(31)
  03ce774  cmpwi 3, 13
  03ce778  bt 1, 0x3ce7e4
  03ce77c  cmpwi 3, 5
  03ce780  bt 1, 0x3ce7b0
  03ce784  cmpwi 3, 5
  03ce788  bt 2, 0x3cf7c4
  03ce78c  cmpwi 3, 3
  03ce790  bt 2, 0x3cf04c
  03ce794  cmpwi 3, 2
  03ce798  bt 2, 0x3ceca8
  03ce79c  cmpwi 3, 1
  03ce7a0  bt 2, 0x3cec38
  03ce7a4  cmpwi 3, 0
  03ce7a8  bt 2, 0x3ce854
  03ce7ac  b 0x3d0ad4
  03ce7b0  cmpwi 3, 13
  03ce7b4  bt 2, 0x3d04c8
  03ce7b8  cmpwi 3, 12
  03ce7bc  bt 2, 0x3d0250
  03ce7c0  cmpwi 3, 9
  03ce7c4  bt 2, 0x3d0224
  03ce7c8  cmpwi 3, 8
  03ce7cc  bt 2, 0x3d0110
  03ce7d0  cmpwi 3, 7
  03ce7d4  bt 2, 0x3cfca0
  03ce7d8  cmpwi 3, 6
  03ce7dc  bt 2, 0x3cfad8
  03ce7e0  b 0x3d0ad4
  03ce7e4  cmpwi 3, 23
  03ce7e8  bt 1, 0x3ce828
  03ce7ec  cmpwi 3, 16
  03ce7f0  bt 1, 0x3ce808
  03ce7f4  cmpwi 3, 14
  03ce7f8  bf 1, 0x3cf0c8
  03ce7fc  cmpwi 3, 15
  03ce800  bf 1, 0x3cf348
  03ce804  b 0x3d0ad4
  03ce808  cmpwi 3, 21
  03ce80c  bt 1, 0x3ce81c
  03ce810  cmpwi 3, 18
  03ce814  bf 1, 0x3cf498
  03ce818  b 0x3cf5ec
  03ce81c  cmpwi 3, 22
  03ce820  bf 1, 0x3cf7c4
  03ce824  b 0x3cfca0
  03ce828  cmpwi 3, 29
  03ce82c  bt 2, 0x3ceb7c
  03ce830  cmpwi 3, 27
  03ce834  bt 2, 0x3d03c4
  03ce838  cmpwi 3, 26
  03ce83c  bt 2, 0x3d0ab0
  03ce840  cmpwi 3, 25
  03ce844  bt 2, 0x3d0914
  03ce848  cmpwi 3, 24
  03ce84c  bt 2, 0x3d0610
  03ce850  b 0x3d0ad4
  03ce854  lwz 3, 656(30)
  03ce858  cmpwi 3, -1
  03ce85c  bf 2, 0x3ce888
  03ce860  lis 3, 101
  03ce864  lhz 4, 178(31)
  03ce868  addic 3, 3, 27460
  03ce86c  extsh 4, 4
  03ce870  bl 0x5cd098
  03ce874  nop
  03ce878  ori 3, 31, 0
  03ce87c  bl 0xefb38
  03ce880  nop
  03ce884  b 0x3d0ad4
  03ce888  lis 4, 165
  03ce88c  slwi 3, 3, 2
  03ce890  addic 4, 4, 7136
  03ce894  extsw 3, 3
  03ce898  lwzx 3, 4, 3
  03ce89c  lwz 3, 0(3)
  03ce8a0  cmpwi 3, 0
  03ce8a4  bf 2, 0x3ce8d0
  03ce8a8  lis 3, 101
  03ce8ac  lhz 4, 178(31)
  03ce8b0  addic 3, 3, 27492
  03ce8b4  extsh 4, 4
  03ce8b8  bl 0x5cd098
  03ce8bc  nop
  03ce8c0  ori 3, 31, 0
  03ce8c4  bl 0xefb38
  03ce8c8  nop
  03ce8cc  b 0x3d0ad4
  03ce8d0  lwz 3, 648(30)
  03ce8d4  cmpwi 3, -1
  03ce8d8  bf 1, 0x3ce900
  03ce8dc  lis 4, 164
  03ce8e0  slwi 3, 3, 8
  03ce8e4  lwz 4, -28512(4)
  03ce8e8  addc 3, 4, 3
  03ce8ec  clrldi 3, 3, 32
  03ce8f0  lwz 3, 120(3)
  03ce8f4  lwz 4, 332(3)
  03ce8f8  addic 4, 4, 1
  03ce8fc  stw 4, 332(3)
  03ce900  lfs 1, 16(31)
  03ce904  lis 3, 16256
  03ce908  li 4, 1
  03ce90c  stfs 1, 544(30)
  03ce910  lfs 1, 20(31)
  03ce914  lis 5, 132
  03ce918  li 6, 0
  03ce91c  stfs 1, 548(30)
  03ce920  lfs 1, 24(31)
  03ce924  stfs 1, 552(30)
  03ce928  lfs 1, 28(31)
  03ce92c  stfs 1, 556(30)
  03ce930  lfs 1, 16(31)
  03ce934  stfs 1, 560(30)
  03ce938  lfs 1, 20(31)
  03ce93c  stfs 1, 564(30)
  03ce940  lfs 1, 24(31)
  03ce944  stfs 1, 568(30)
  03ce948  lfs 1, 28(31)
  03ce94c  stw 3, 32(30)
  03ce950  stfs 1, 572(30)
  03ce954  addic 3, 30, 384
  03ce958  sth 4, 36(30)
  03ce95c  lwz 5, 25280(5)
  03ce960  stb 4, 92(30)
  03ce964  stb 5, 88(30)
  03ce968  stb 4, 46(30)
  03ce96c  stb 4, 41(30)
  03ce970  sth 6, 606(30)
  03ce974  bl 0x100f8c
  03ce978  nop
  03ce97c  lis 3, 16384
  03ce980  li 4, 512
  03ce984  lfs 1, 596(30)
  03ce988  lis 5, 16128
  03ce98c  lis 6, 114
  03ce990  stw 3, 396(30)
  03ce994  stw 3, 392(30)
  03ce998  stw 4, 384(30)
  03ce99c  stw 5, 388(30)
  03ce9a0  lfs 2, -3052(6)
  03ce9a4  fmuls 1, 1, 2
  03ce9a8  stfs 1, 420(30)
  03ce9ac  bl 0x5c8318
  03ce9b0  nop
  03ce9b4  clrlwi 3, 3, 31
  03ce9b8  cmpwi 3, 0
  03ce9bc  bt 2, 0x3ce9d4
  03ce9c0  lis 3, 0
  03ce9c4  lhz 4, 52(31)
  03ce9c8  ori 3, 3, 32768
  03ce9cc  or 3, 4, 3
  03ce9d0  sth 3, 52(31)
  03ce9d4  lis 3, 132
  03ce9d8  lwz 4, 620(30)
  03ce9dc  addic 3, 3, 25440
  03ce9e0  cmpwi 4, 0
  03ce9e4  stw 3, 208(30)
  03ce9e8  bt 0, 0x3cea8c
  03ce9ec  lwz 3, 652(30)
  03ce9f0  cmpwi 3, -1
  03ce9f4  bt 2, 0x3cea7c
  03ce9f8  lis 3, 61
  03ce9fc  lfs 1, 24(31)
  03cea00  li 5, 12
  03cea04  addi 3, 3, -6676
  03cea08  lfs 2, 8(3)
  03cea0c  lhz 4, 52(31)
  03cea10  fadds 1, 1, 2
  03cea14  li 3, 0
  03cea18  ori 4, 4, 1
  03cea1c  lbz 6, 83(31)
  03cea20  rlwimi 4, 3, 0, 19, 19
  03cea24  stw 3, 148(31)
  03cea28  stb 5, 32(31)
  03cea2c  cmpwi 6, 0
  03cea30  sth 4, 52(31)
  03cea34  stfs 1, 24(31)
  03cea38  bt 2, 0x3d0ad4
  03cea3c  lis 3, 61
  03cea40  lis 4, 114
  03cea44  addi 3, 3, -6676
  03cea48  li 5, 0
  03cea4c  lfs 1, 12(3)
  03cea50  lfs 2, -3056(4)
  03cea54  ori 3, 31, 0
  03cea58  li 4, 0
  03cea5c  fmuls 1, 2, 1
  03cea60  fctiwz 1, 1
  03cea64  stfd 1, 400(1)
  03cea68  lwz 6, 404(1)
  03cea6c  extsw 6, 6
  03cea70  bl 0xfddc0
  03cea74  nop
  03cea78  b 0x3d0ad4
  03cea7c  ori 3, 31, 0
  03cea80  bl 0xefb38
  03cea84  nop
  03cea88  b 0x3d0ad4
  03cea8c  lwz 3, 632(30)
  03cea90  cmpwi 3, 0
  03cea94  bt 0, 0x3ceaf8
  03cea98  lis 3, 15948
  03cea9c  li 4, 3
  03ceaa0  ori 3, 3, 52429
  03ceaa4  stw 3, 396(30)
  03ceaa8  lbz 3, 83(31)
  03ceaac  stb 4, 32(31)
  03ceab0  cmpwi 3, 2
  03ceab4  bt 2, 0x3d0ad4
  03ceab8  lis 3, 61
  03ceabc  lis 4, 114
  03ceac0  addi 3, 3, -6676
  03ceac4  li 5, 0
  03ceac8  lfs 1, 12(3)
  03ceacc  lfs 2, -3056(4)
  03cead0  ori 3, 31, 0
  03cead4  li 4, 2
  03cead8  fmuls 1, 2, 1
  03ceadc  fctiwz 1, 1
  03ceae0  stfd 1, 400(1)
  03ceae4  lwz 6, 404(1)
  03ceae8  extsw 6, 6
  03ceaec  bl 0xfddc0
  03ceaf0  nop
  03ceaf4  b 0x3d0ad4
  03ceaf8  lwz 3, 600(30)
  03ceafc  cmpwi 3, 0
  03ceb00  bt 0, 0x3ceb28
  03ceb04  lhz 5, 52(31)
  03ceb08  li 3, 0
  03ceb0c  li 4, 29
  03ceb10  ori 5, 5, 65
  03ceb14  rlwimi 5, 3, 0, 19, 19
  03ceb18  stw 3, 148(31)
  03ceb1c  stb 4, 32(31)
  03ceb20  sth 5, 52(31)
  03ceb24  b 0x3d0ad4
  03ceb28  li 3, 1
  03ceb2c  lbz 4, 83(31)
  03ceb30  cmpwi 4, 2
  03ceb34  stb 3, 32(31)
  03ceb38  bt 2, 0x3d0ad4
  03ceb3c  lis 3, 61
  03ceb40  lis 4, 114
  03ceb44  addi 3, 3, -6676
  03ceb48  li 5, 0
  03ceb4c  lfs 1, 12(3)
  03ceb50  lfs 2, -3056(4)
  03ceb54  ori 3, 31, 0
  03ceb58  fmuls 1, 2, 1
  03ceb5c  li 4, 2
  03ceb60  fctiwz 1, 1
  03ceb64  stfd 1, 400(1)
  03ceb68  lwz 6, 404(1)
  03ceb6c  extsw 6, 6
  03ceb70  bl 0xfddc0
  03ceb74  nop
  03ceb78  b 0x3d0ad4
  03ceb7c  lis 3, 164
  03ceb80  lwz 4, 600(30)
  03ceb84  slwi 4, 4, 8
  03ceb88  lwz 3, -28512(3)
  03ceb8c  addc 3, 3, 4
  03ceb90  clrldi 3, 3, 32
  03ceb94  lbz 3, 32(3)
  03ceb98  cmpwi 3, 5
  03ceb9c  bt 0, 0x3d0ad4
  03ceba0  lis 3, 151
  03ceba4  addic 3, 3, -25376
  03ceba8  lwz 3, 8324(3)
  03cebac  cmpwi 3, 114
  03cebb0  bt 2, 0x3d0ad4
  03cebb4  li 3, -66
  03cebb8  lhz 7, 52(31)
  03cebbc  lwz 8, 36(31)
  03cebc0  lis 5, 61
  03cebc4  and 3, 7, 3
  03cebc8  vspltisw 3, -1
  03cebcc  li 4, 16
  03cebd0  ori 3, 3, 4096
  03cebd4  li 6, -1
  03cebd8  addi 5, 5, -6676
  03cebdc  lis 7, 114
  03cebe0  vslw 3, 3, 3
  03cebe4  sth 3, 52(31)
  03cebe8  lwz 8, 16(8)
  03cebec  li 3, -3056
  03cebf0  stw 8, 148(31)
  03cebf4  stw 6, 600(30)
  03cebf8  lvlx 2, 4, 5
  03cebfc  vspltw 2, 2, 0
  03cec00  li 4, 0
  03cec04  lvlx 4, 3, 7
  03cec08  lis 5, 132
  03cec0c  li 3, 604
  03cec10  vmaddfp 2, 4, 2, 3
  03cec14  vctsxs 2, 2, 0
  03cec18  vsplth 2, 2, 1
  03cec1c  stvehx 2, 3, 30
  03cec20  stb 4, 32(31)
  03cec24  lfs 1, 24(31)
  03cec28  lfs 2, 25304(5)
  03cec2c  fsubs 1, 1, 2
  03cec30  stfs 1, 24(31)
  03cec34  b 0x3d0ad4
  03cec38  lis 4, 151
  03cec3c  addic 3, 1, 128
  03cec40  addic 4, 4, -25376
  03cec44  addic 5, 31, 16
  03cec48  addic 4, 4, 128
  03cec4c  bl 0x5e81f0
  03cec50  nop
  03cec54  li 4, 18
  03cec58  lbz 3, 83(31)
  03cec5c  cmpwi 3, 0
  03cec60  stb 4, 32(31)
  03cec64  bt 2, 0x3d0ad4
  03cec68  lis 3, 61
  03cec6c  lis 4, 114
  03cec70  addi 3, 3, -6676
  03cec74  li 5, 0
  03cec78  lfs 1, 12(3)
  03cec7c  lfs 2, -3056(4)
  03cec80  ori 3, 31, 0
  03cec84  li 4, 0
  03cec88  fmuls 1, 2, 1
  03cec8c  fctiwz 1, 1
  03cec90  stfd 1, 400(1)
  03cec94  lwz 6, 404(1)
  03cec98  extsw 6, 6
  03cec9c  bl 0xfddc0
  03ceca0  nop
  03ceca4  b 0x3d0ad4
  03ceca8  lis 3, 132
  03cecac  lfs 1, 25304(3)
  03cecb0  lfs 2, 16(31)
  03cecb4  fadds 1, 28, 1
  03cecb8  lfs 3, 20(31)
  03cecbc  stfs 1, 24(31)
  03cecc0  lfs 1, 544(30)
  03cecc4  lfs 4, 548(30)
  03cecc8  fsubs 1, 1, 2
  03ceccc  fsubs 2, 4, 3
  03cecd0  bl 0x5e8338
  03cecd4  nop
  03cecd8  lfs 2, 580(30)
  03cecdc  bl 0x502578
  03cece0  nop
  03cece4  lis 3, 61
  03cece8  addic 5, 30, 576
  03cecec  addi 4, 3, -6676
  03cecf0  ori 3, 31, 0
  03cecf4  lfs 2, 20(4)
  03cecf8  lfs 3, 24(4)
  03cecfc  lfs 4, 28(4)
  03ced00  bl 0xff2e8
  03ced04  nop
  03ced08  lfs 1, 72(31)
  03ced0c  lfs 31, 16(31)
  03ced10  bl 0x5e8078
  03ced14  nop
  03ced18  lis 29, 114
  03ced1c  lfs 2, 72(31)
  03ced20  lfs 30, 20(31)
  03ced24  lfs 3, -3052(29)
  03ced28  fmadds 3, 1, 3, 31
  03ced2c  fmr 1, 2
  03ced30  stfs 3, 16(31)
  03ced34  bl 0x5e8128
  03ced38  nop
  03ced3c  lfs 2, -3052(29)
  03ced40  addic 3, 30, 608
  03ced44  fmadds 1, 1, 2, 30
  03ced48  stfs 1, 20(31)
  03ced4c  bl 0x4fff60
  03ced50  nop
  03ced54  cmpwi 3, 0
  03ced58  bt 2, 0x3cedb8
  03ced5c  lis 3, 61
  03ced60  vspltisw 2, -1
  03ced64  li 5, 32
  03ced68  addi 3, 3, -6676
  03ced6c  lis 4, 114
  03ced70  li 6, -3056
  03ced74  vslw 2, 2, 2
  03ced78  lvlx 3, 5, 3
  03ced7c  vspltw 3, 3, 0
  03ced80  lvlx 4, 6, 4
  03ced84  li 4, 608
  03ced88  vmaddfp 2, 4, 3, 2
  03ced8c  vctsxs 2, 2, 0
  03ced90  vspltw 2, 2, 0
  03ced94  stvewx 2, 4, 30
  03ced98  lfs 1, 36(3)
  03ced9c  lfs 2, 40(3)
  03ceda0  lfs 3, 584(30)
  03ceda4  fmuls 1, 3, 1
  03ceda8  fmuls 2, 3, 2
  03cedac  bl 0xfcbe8
  03cedb0  nop
  03cedb4  stfs 1, 580(30)
  03cedb8  lbz 3, 49(31)
  03cedbc  cmpwi 3, 0
  03cedc0  bt 2, 0x3cee08
  03cedc4  li 3, 255
  03cedc8  bl 0xfc620
  03cedcc  nop
  03cedd0  clrlwi 3, 3, 31
  03cedd4  cmpwi 3, 0
  03cedd8  bt 2, 0x3cee08
  03ceddc  lfs 1, 16(31)
  03cede0  lfs 2, 24(31)
  03cede4  stfs 1, 48(1)
  03cede8  stfs 2, 56(1)
  03cedec  lfs 1, 20(31)
  03cedf0  lfs 2, 28(31)
  03cedf4  stfs 1, 52(1)
  03cedf8  stfs 2, 60(1)
  03cedfc  ld 3, 48(1)
  03cee00  ld 4, 56(1)
  03cee04  bl 0x3cd980
  03cee08  lis 3, 132
  03cee0c  lfs 1, 24(31)
  03cee10  lfs 2, 25304(3)
  03cee14  fsubs 1, 1, 2
  03cee18  stfs 1, 24(31)
  03cee1c  lwz 3, 532(30)
  03cee20  cmpwi 3, 2
  03cee24  bt 2, 0x3cefe0
  03cee28  lwz 3, 628(30)
  03cee2c  cmpwi 3, 0
  03cee30  bt 0, 0x3cee7c
  03cee34  addic 5, 30, 464
  03cee38  extsw 4, 3
  03cee3c  ori 3, 5, 0
  03cee40  bl 0x110b70
  03cee44  nop
  03cee48  cmpwi 3, 0
  03cee4c  bt 2, 0x3cee5c
  03cee50  lhz 3, 606(30)
  03cee54  cmpwi 3, 0
  03cee58  bt 2, 0x3d0ad4
  03cee5c  li 3, 9
  03cee60  bl 0xfc620
  03cee64  nop
  03cee68  cmpwi 3, 0
  03cee6c  bf 2, 0x3d0ad4
  03cee70  li 3, -1
  03cee74  stw 3, 628(30)
  03cee78  b 0x3d0ad4
  03cee7c  li 3, 4
  03cee80  bl 0xfc620
  03cee84  nop
  03cee88  cmpwi 3, 0
  03cee8c  bf 2, 0x3d0ad4
  03cee90  li 3, 584
  03cee94  vspltisw 2, -1
  03cee98  lis 6, 61
  03cee9c  addi 5, 3, 16
  03ceea0  li 4, 40
  03ceea4  addi 6, 6, -6676
  03ceea8  lvlx 3, 3, 30
  03ceeac  li 3, 644
  03ceeb0  lvrx 4, 5, 30
  03ceeb4  addi 5, 3, 16
  03ceeb8  vor 3, 3, 4
  03ceebc  lvlx 4, 4, 6
  03ceec0  vslw 2, 2, 2
  03ceec4  vspltw 4, 4, 0
  03ceec8  lvlx 5, 3, 30
  03ceecc  lvrx 6, 5, 30
  03ceed0  lwz 3, 644(30)
  03ceed4  vmaddfp 3, 3, 4, 2
  03ceed8  cmpwi 3, 0
  03ceedc  vor 2, 5, 6
  03ceee0  bt 2, 0x3cef04
  03ceee4  vcfsx 2, 2, 0
  03ceee8  vspltisw 4, -1
  03ceeec  li 3, 580
  03ceef0  vslw 4, 4, 4
  03ceef4  vmaddfp 2, 3, 2, 4
  03ceef8  vspltw 2, 2, 0
  03ceefc  stvewx 2, 3, 30
  03cef00  b 0x3cef34
  03cef04  vspltw 2, 3, 0
  03cef08  li 4, 580
  03cef0c  li 3, 256
  03cef10  stvewx 2, 4, 30
  03cef14  bl 0xfc620
  03cef18  nop
  03cef1c  clrlwi 3, 3, 31
  03cef20  cmpwi 3, 0
  03cef24  bt 2, 0x3cef34
  03cef28  lfs 1, 580(30)
  03cef2c  fneg 1, 1
  03cef30  stfs 1, 580(30)
  03cef34  lis 3, 61
  03cef38  addi 29, 3, -6676
  03cef3c  lfs 1, 44(29)
  03cef40  lfs 2, 48(29)
  03cef44  bl 0xfcbe8
  03cef48  nop
  03cef4c  fctidz 1, 1
  03cef50  lfs 2, 52(29)
  03cef54  lis 4, 114
  03cef58  lis 5, 114
  03cef5c  li 3, 17
  03cef60  lfs 3, -3056(4)
  03cef64  li 4, 608
  03cef68  fcfid 1, 1
  03cef6c  frsp 1, 1
  03cef70  fadds 1, 1, 2
  03cef74  fmuls 1, 3, 1
  03cef78  fctiwz 1, 1
  03cef7c  stfiwx 1, 4, 30
  03cef80  lfs 1, 56(29)
  03cef84  lfs 2, -3052(5)
  03cef88  fmuls 1, 2, 1
  03cef8c  stfs 1, 420(30)
  03cef90  lbz 4, 83(31)
  03cef94  stb 3, 32(31)
  03cef98  cmpwi 4, 12
  03cef9c  bt 2, 0x3d0ad4
  03cefa0  lis 3, 61
  03cefa4  lis 4, 114
  03cefa8  addi 3, 3, -6676
  03cefac  li 5, 0
  03cefb0  lfs 1, 12(3)
  03cefb4  lfs 2, -3056(4)
  03cefb8  ori 3, 31, 0
  03cefbc  fmuls 1, 2, 1
  03cefc0  li 4, 12
  03cefc4  fctiwz 1, 1
  03cefc8  stfd 1, 400(1)
  03cefcc  lwz 6, 404(1)
  03cefd0  extsw 6, 6
  03cefd4  bl 0xfddc0
  03cefd8  nop
  03cefdc  b 0x3d0ad4
  03cefe0  lhz 3, 606(30)
  03cefe4  cmpwi 3, 0
  03cefe8  bt 2, 0x3d0ad4
  03cefec  li 3, 19
  03ceff0  bl 0xfc620
  03ceff4  nop
  03ceff8  cmpwi 3, 0
  03ceffc  bf 2, 0x3d0ad4
  03cf000  li 6, 21
  03cf004  li 3, 4
  03cf008  li 4, 0
  03cf00c  ori 5, 31, 0
  03cf010  stb 6, 32(31)
  03cf014  bl 0x15d12c
  03cf018  nop
  03cf01c  lbz 3, 83(31)
  03cf020  cmpwi 3, 0
  03cf024  bt 2, 0x3cf040
  03cf028  ori 3, 31, 0
  03cf02c  li 4, 0
  03cf030  li 5, 0
  03cf034  li 6, 0
  03cf038  bl 0xfddc0
  03cf03c  nop
  03cf040  li 3, -1
  03cf044  stw 3, 628(30)
  03cf048  b 0x3d0ad4
  03cf04c  lwz 3, 532(30)
  03cf050  cmpwi 3, 2
  03cf054  bt 2, 0x3d0ad4
  03cf058  addic 3, 30, 464
  03cf05c  lwz 4, 632(30)
  03cf060  extsw 4, 4
  03cf064  bl 0x110b70
  03cf068  nop
  03cf06c  cmpwi 3, 0
  03cf070  bt 2, 0x3d0ad4
  03cf074  li 3, 5
  03cf078  lbz 4, 83(31)
  03cf07c  cmpwi 4, 0
  03cf080  stb 3, 32(31)
  03cf084  bt 2, 0x3d0ad4
  03cf088  lis 3, 61
  03cf08c  lis 4, 114
  03cf090  addi 3, 3, -6676
  03cf094  li 5, 0
  03cf098  lfs 1, 12(3)
  03cf09c  lfs 2, -3056(4)
  03cf0a0  ori 3, 31, 0
  03cf0a4  fmuls 1, 2, 1
  03cf0a8  li 4, 0
  03cf0ac  fctiwz 1, 1
  03cf0b0  stfd 1, 400(1)
  03cf0b4  lwz 6, 404(1)
  03cf0b8  extsw 6, 6
  03cf0bc  bl 0xfddc0
  03cf0c0  nop
  03cf0c4  b 0x3d0ad4
  03cf0c8  lfs 1, 464(30)
  03cf0cc  stfs 1, 160(1)
  03cf0d0  lfs 2, 468(30)
  03cf0d4  stfs 2, 164(1)
  03cf0d8  lfs 3, 472(30)
  03cf0dc  lfs 4, 16(31)
  03cf0e0  stfs 3, 168(1)
  03cf0e4  fsubs 1, 1, 4
  03cf0e8  lfs 3, 476(30)
  03cf0ec  lfs 5, 20(31)
  03cf0f0  stfs 3, 172(1)
  03cf0f4  fsubs 2, 2, 5
  03cf0f8  bl 0x5e8338
  03cf0fc  nop
  03cf100  lis 3, 61
  03cf104  lfs 2, 580(30)
  03cf108  addic 5, 30, 576
  03cf10c  addi 28, 3, -6676
  03cf110  fadds 1, 1, 2
  03cf114  ori 3, 31, 0
  03cf118  lfs 2, 20(28)
  03cf11c  lfs 3, 24(28)
  03cf120  lfs 4, 60(28)
  03cf124  bl 0xff2e8
  03cf128  nop
  03cf12c  lfs 1, 72(31)
  03cf130  bl 0x5e8078
  03cf134  nop
  03cf138  lfs 31, 64(28)
  03cf13c  lfs 2, 72(31)
  03cf140  fmuls 3, 1, 31
  03cf144  fmr 1, 2
  03cf148  stfs 3, 144(1)
  03cf14c  bl 0x5e8128
  03cf150  nop
  03cf154  fmuls 1, 1, 31
  03cf158  li 27, 0
  03cf15c  addic 26, 1, 144
  03cf160  addic 29, 31, 16
  03cf164  ori 3, 26, 0
  03cf168  stw 27, 152(1)
  03cf16c  ori 4, 26, 0
  03cf170  ori 5, 29, 0
  03cf174  stfs 1, 148(1)
  03cf178  bl 0x5e7f54
  03cf17c  nop
  03cf180  ori 3, 31, 0
  03cf184  lfs 1, 68(28)
  03cf188  addic 4, 30, 384
  03cf18c  addic 6, 1, 176
  03cf190  ori 5, 26, 0
  03cf194  bl 0x101058
  03cf198  nop
  03cf19c  ori 3, 31, 0
  03cf1a0  bl 0x3cdd50
  03cf1a4  lwz 3, 656(30)
  03cf1a8  ori 4, 29, 0
  03cf1ac  addic 5, 1, 160
  03cf1b0  extsw 3, 3
  03cf1b4  addic 6, 1, 192
  03cf1b8  bl 0xfc948
  03cf1bc  nop
  03cf1c0  ori 4, 3, 0
  03cf1c4  ori 3, 27, 0
  03cf1c8  cmpwi 4, 0
  03cf1cc  bt 2, 0x3cf1f8
  03cf1d0  addic 4, 1, 192
  03cf1d4  ori 3, 29, 0
  03cf1d8  bl 0x5e8548
  03cf1dc  nop
  03cf1e0  lfs 2, 660(30)
  03cf1e4  li 3, 0
  03cf1e8  fcmpu 0, 1, 2
  03cf1ec  cror 6, 1, 2
  03cf1f0  bt 6, 0x3cf1f8
  03cf1f4  li 3, 1
  03cf1f8  cmpwi 1, 3, 0
  03cf1fc  lhz 3, 606(30)
  03cf200  cmpwi 3, 0
  03cf204  bf 2, 0x3cf214
  03cf208  li 3, 18
  03cf20c  stb 3, 32(31)
  03cf210  b 0x3d0ad4
  03cf214  bt 6, 0x3cf26c
  03cf218  li 3, 15
  03cf21c  lbz 4, 83(31)
  03cf220  cmpwi 4, 5
  03cf224  stb 3, 32(31)
  03cf228  bt 2, 0x3d0ad4
  03cf22c  lis 3, 61
  03cf230  lis 4, 114
  03cf234  addi 3, 3, -6676
  03cf238  li 5, 0
  03cf23c  lfs 1, 72(3)
  03cf240  lfs 2, -3056(4)
  03cf244  ori 3, 31, 0
  03cf248  fmuls 1, 2, 1
  03cf24c  li 4, 5
  03cf250  fctiwz 1, 1
  03cf254  stfd 1, 400(1)
  03cf258  lwz 6, 404(1)
  03cf25c  extsw 6, 6
  03cf260  bl 0xfddc0
  03cf264  nop
  03cf268  b 0x3d0ad4
  03cf26c  ori 3, 29, 0
  03cf270  addic 4, 1, 160
  03cf274  bl 0x5e8588
  03cf278  nop
  03cf27c  lis 3, 61
  03cf280  addi 3, 3, -6676
  03cf284  lfs 2, 76(3)
  03cf288  fcmpu 0, 1, 2
  03cf28c  cror 6, 1, 2
  03cf290  bt 6, 0x3cf2e8
  03cf294  li 3, 6
  03cf298  lbz 4, 83(31)
  03cf29c  cmpwi 4, 1
  03cf2a0  stb 3, 32(31)
  03cf2a4  bt 2, 0x3d0ad4
  03cf2a8  lis 3, 61
  03cf2ac  lis 4, 114
  03cf2b0  addi 3, 3, -6676
  03cf2b4  li 5, 0
  03cf2b8  lfs 1, 72(3)
  03cf2bc  lfs 2, -3056(4)
  03cf2c0  ori 3, 31, 0
  03cf2c4  li 4, 1
  03cf2c8  fmuls 1, 2, 1
  03cf2cc  fctiwz 1, 1
  03cf2d0  stfd 1, 400(1)
  03cf2d4  lwz 6, 404(1)
  03cf2d8  extsw 6, 6
  03cf2dc  bl 0xfddc0
  03cf2e0  nop
  03cf2e4  b 0x3d0ad4
  03cf2e8  lwz 3, 532(30)
  03cf2ec  cmpwi 3, 2
  03cf2f0  bt 2, 0x3d0ad4
  03cf2f4  li 3, 5
  03cf2f8  lbz 4, 83(31)
  03cf2fc  cmpwi 4, 0
  03cf300  stb 3, 32(31)
  03cf304  bt 2, 0x3d0ad4
  03cf308  lis 3, 61
  03cf30c  lis 4, 114
  03cf310  addi 3, 3, -6676
  03cf314  li 5, 0
  03cf318  lfs 1, 80(3)
  03cf31c  lfs 2, -3056(4)
  03cf320  ori 3, 31, 0
  03cf324  li 4, 0
  03cf328  fmuls 1, 2, 1
  03cf32c  fctiwz 1, 1
  03cf330  stfd 1, 400(1)
  03cf334  lwz 6, 404(1)
  03cf338  extsw 6, 6
  03cf33c  bl 0xfddc0
  03cf340  nop
  03cf344  b 0x3d0ad4
  03cf348  lfs 1, 464(30)
  03cf34c  lfs 2, 16(31)
  03cf350  addic 29, 31, 72
  03cf354  lfs 3, 468(30)
  03cf358  lfs 4, 20(31)
  03cf35c  fsubs 1, 1, 2
  03cf360  fsubs 2, 3, 4
  03cf364  bl 0x5e8338
  03cf368  nop
  03cf36c  lis 3, 61
  03cf370  lis 4, 114
  03cf374  addi 3, 3, -6676
  03cf378  lis 6, 114
  03cf37c  addic 5, 30, 576
  03cf380  lfs 4, 84(3)
  03cf384  lfs 3, -3048(4)
  03cf388  ori 3, 29, 0
  03cf38c  lfs 5, -3052(6)
  03cf390  fmuls 2, 3, 4
  03cf394  fmuls 4, 5, 4
  03cf398  fmr 3, 2
  03cf39c  bl 0x10a2e0
  03cf3a0  nop
  03cf3a4  lhz 3, 606(30)
  03cf3a8  cmpwi 3, 0
  03cf3ac  bf 2, 0x3cf3bc
  03cf3b0  li 3, 18
  03cf3b4  stb 3, 32(31)
  03cf3b8  b 0x3d0ad4
  03cf3bc  addic 3, 31, 16
  03cf3c0  addic 4, 30, 464
  03cf3c4  bl 0x5e8588
  03cf3c8  nop
  03cf3cc  lis 3, 61
  03cf3d0  addi 3, 3, -6676
  03cf3d4  lfs 2, 76(3)
  03cf3d8  fcmpu 0, 1, 2
  03cf3dc  cror 6, 1, 2
  03cf3e0  bt 6, 0x3cf438
  03cf3e4  li 3, 6
  03cf3e8  lbz 4, 83(31)
  03cf3ec  cmpwi 4, 1
  03cf3f0  stb 3, 32(31)
  03cf3f4  bt 2, 0x3d0ad4
  03cf3f8  lis 3, 61
  03cf3fc  lis 4, 114
  03cf400  addi 3, 3, -6676
  03cf404  li 5, 0
  03cf408  lfs 1, 72(3)
  03cf40c  lfs 2, -3056(4)
  03cf410  ori 3, 31, 0
  03cf414  li 4, 1
  03cf418  fmuls 1, 2, 1
  03cf41c  fctiwz 1, 1
  03cf420  stfd 1, 400(1)
  03cf424  lwz 6, 404(1)
  03cf428  extsw 6, 6
  03cf42c  bl 0xfddc0
  03cf430  nop
  03cf434  b 0x3d0ad4
  03cf438  lwz 3, 532(30)
  03cf43c  cmpwi 3, 2
  03cf440  bt 2, 0x3d0ad4
  03cf444  li 3, 5
  03cf448  lbz 4, 83(31)
  03cf44c  cmpwi 4, 0
  03cf450  stb 3, 32(31)
  03cf454  bt 2, 0x3d0ad4
  03cf458  lis 3, 61
  03cf45c  lis 4, 114
  03cf460  addi 3, 3, -6676
  03cf464  li 5, 0
  03cf468  lfs 1, 80(3)
  03cf46c  lfs 2, -3056(4)
  03cf470  ori 3, 31, 0
  03cf474  li 4, 0
  03cf478  fmuls 1, 2, 1
  03cf47c  fctiwz 1, 1
  03cf480  stfd 1, 400(1)
  03cf484  lwz 6, 404(1)
  03cf488  extsw 6, 6
  03cf48c  bl 0xfddc0
  03cf490  nop
  03cf494  b 0x3d0ad4
  03cf498  lis 3, 132
  03cf49c  lis 5, 61
  03cf4a0  li 4, 0
  03cf4a4  addi 29, 5, -6676
  03cf4a8  lfs 1, 25304(3)
  03cf4ac  addic 3, 31, 16
  03cf4b0  fadds 1, 28, 1
  03cf4b4  stfs 1, 24(31)
  03cf4b8  lfs 1, 52(29)
  03cf4bc  bl 0xffb70
  03cf4c0  nop
  03cf4c4  lfs 31, 552(30)
  03cf4c8  lis 4, 114
  03cf4cc  lfs 3, 56(29)
  03cf4d0  addic 3, 31, 24
  03cf4d4  fsub 2, 1, 31
  03cf4d8  lfs 28, 16(31)
  03cf4dc  lfs 29, 20(31)
  03cf4e0  lfs 30, 28(31)
  03cf4e4  lfs 4, -3052(4)
  03cf4e8  fsel 31, 2, 1, 31
  03cf4ec  fmuls 2, 4, 3
  03cf4f0  fmr 1, 31
  03cf4f4  bl 0x109af0
  03cf4f8  nop
  03cf4fc  lfs 1, 24(31)
  03cf500  fcmpu 0, 31, 1
  03cf504  bf 2, 0x3cf584
  03cf508  lbz 3, 83(31)
  03cf50c  cmpwi 3, 12
  03cf510  bt 2, 0x3cf554
  03cf514  lis 3, 61
  03cf518  lis 4, 114
  03cf51c  addi 3, 3, -6676
  03cf520  li 5, 0
  03cf524  lfs 1, 88(3)
  03cf528  lfs 2, -3056(4)
  03cf52c  ori 3, 31, 0
  03cf530  fmuls 1, 2, 1
  03cf534  li 4, 12
  03cf538  fctiwz 1, 1
  03cf53c  stfd 1, 400(1)
  03cf540  lwz 6, 404(1)
  03cf544  extsw 6, 6
  03cf548  bl 0xfddc0
  03cf54c  nop
  03cf550  lfs 1, 24(31)
  03cf554  li 3, 17
  03cf558  lbz 6, 32(31)
  03cf55c  li 4, 22
  03cf560  subc 3, 3, 6
  03cf564  li 5, 23
  03cf568  cntlzw 3, 3
  03cf56c  subc 4, 4, 5
  03cf570  sldi 3, 3, 58
  03cf574  sradi 3, 3, 63
  03cf578  and 3, 3, 4
  03cf57c  addc 3, 5, 3
  03cf580  stb 3, 32(31)
  03cf584  lis 3, 132
  03cf588  lis 4, 61
  03cf58c  lis 5, 161
  03cf590  lfs 2, 25304(3)
  03cf594  addi 3, 4, -6676
  03cf598  fsubs 1, 1, 2
  03cf59c  lis 4, 114
  03cf5a0  stfs 1, 24(31)
  03cf5a4  lfs 1, 72(3)
  03cf5a8  lfs 2, -3056(4)
  03cf5ac  lwz 3, 1808(5)
  03cf5b0  fmuls 1, 2, 1
  03cf5b4  fctiwz 1, 1
  03cf5b8  stfd 1, 400(1)
  03cf5bc  lwz 4, 404(1)
  03cf5c0  cmpw 3, 4
  03cf5c4  bf 1, 0x3d0ad4
  03cf5c8  stfs 28, 48(1)
  03cf5cc  stfs 31, 56(1)
  03cf5d0  li 5, 6
  03cf5d4  stfs 29, 52(1)
  03cf5d8  stfs 30, 60(1)
  03cf5dc  ld 3, 48(1)
  03cf5e0  ld 4, 56(1)
  03cf5e4  bl 0x3cd510
  03cf5e8  b 0x3d0ad4
  03cf5ec  lis 29, 132
  03cf5f0  lis 3, 61
  03cf5f4  li 4, 0
  03cf5f8  addi 28, 3, -6676
  03cf5fc  addic 3, 31, 16
  03cf600  lfs 1, 25304(29)
  03cf604  fadds 1, 28, 1
  03cf608  stfs 1, 24(31)
  03cf60c  lfs 1, 52(28)
  03cf610  bl 0xffb70
  03cf614  nop
  03cf618  fmr 27, 1
  03cf61c  lfs 31, 56(28)
  03cf620  lfs 28, 16(31)
  03cf624  lis 4, 114
  03cf628  lfs 29, 20(31)
  03cf62c  addic 3, 31, 24
  03cf630  lfs 1, 25304(29)
  03cf634  lfs 30, 28(31)
  03cf638  lfs 2, -3052(4)
  03cf63c  fmuls 2, 2, 31
  03cf640  fadds 1, 1, 27
  03cf644  bl 0x109af0
  03cf648  nop
  03cf64c  lfs 2, 92(28)
  03cf650  fcmpu 0, 1, 2
  03cf654  bf 2, 0x3cf78c
  03cf658  lbz 3, 32(31)
  03cf65c  cmpwi 3, 19
  03cf660  cmpwi 1, 3, 20
  03cf664  bf 2, 0x3cf6bc
  03cf668  li 3, 5
  03cf66c  lbz 4, 83(31)
  03cf670  cmpwi 4, 0
  03cf674  stb 3, 32(31)
  03cf678  bt 2, 0x3cf78c
  03cf67c  lis 3, 61
  03cf680  lis 4, 114
  03cf684  addi 3, 3, -6676
  03cf688  li 5, 0
  03cf68c  lfs 1, 12(3)
  03cf690  lfs 2, -3056(4)
  03cf694  ori 3, 31, 0
  03cf698  li 4, 0
  03cf69c  fmuls 1, 2, 1
  03cf6a0  fctiwz 1, 1
  03cf6a4  stfd 1, 400(1)
  03cf6a8  lwz 6, 404(1)
  03cf6ac  extsw 6, 6
  03cf6b0  bl 0xfddc0
  03cf6b4  nop
  03cf6b8  b 0x3cf78c
  03cf6bc  bf 6, 0x3cf714
  03cf6c0  li 3, 7
  03cf6c4  lbz 4, 83(31)
  03cf6c8  cmpwi 4, 0
  03cf6cc  stb 3, 32(31)
  03cf6d0  bt 2, 0x3cf78c
  03cf6d4  lis 3, 61
  03cf6d8  lis 4, 114
  03cf6dc  addi 3, 3, -6676
  03cf6e0  li 5, 0
  03cf6e4  lfs 1, 12(3)
  03cf6e8  lfs 2, -3056(4)
  03cf6ec  ori 3, 31, 0
  03cf6f0  li 4, 0
  03cf6f4  fmuls 1, 2, 1
  03cf6f8  fctiwz 1, 1
  03cf6fc  stfd 1, 400(1)
  03cf700  lwz 6, 404(1)
  03cf704  extsw 6, 6
  03cf708  bl 0xfddc0
  03cf70c  nop
  03cf710  b 0x3cf78c
  03cf714  lis 3, 61
  03cf718  fmr 26, 31
  03cf71c  addi 3, 3, -6676
  03cf720  lfs 31, 12(3)
  03cf724  lfs 1, 64(3)
  03cf728  fmr 2, 31
  03cf72c  bl 0xfcbe8
  03cf730  nop
  03cf734  lis 3, 114
  03cf738  stfs 1, 660(30)
  03cf73c  li 4, 14
  03cf740  lfs 1, -3052(3)
  03cf744  fmuls 1, 1, 26
  03cf748  stfs 1, 420(30)
  03cf74c  lbz 3, 83(31)
  03cf750  stb 4, 32(31)
  03cf754  cmpwi 3, 0
  03cf758  bt 2, 0x3cf78c
  03cf75c  lis 3, 114
  03cf760  li 4, 0
  03cf764  li 5, 0
  03cf768  lfs 1, -3056(3)
  03cf76c  ori 3, 31, 0
  03cf770  fmuls 1, 1, 31
  03cf774  fctiwz 1, 1
  03cf778  stfd 1, 400(1)
  03cf77c  lwz 6, 404(1)
  03cf780  extsw 6, 6
  03cf784  bl 0xfddc0
  03cf788  nop
  03cf78c  lis 3, 132
  03cf790  stfs 28, 48(1)
  03cf794  li 5, 6
  03cf798  stfs 27, 56(1)
  03cf79c  lfs 1, 24(31)
  03cf7a0  lfs 2, 25304(3)
  03cf7a4  stfs 29, 52(1)
  03cf7a8  fsubs 1, 1, 2
  03cf7ac  stfs 30, 60(1)
  03cf7b0  stfs 1, 24(31)
  03cf7b4  ld 3, 48(1)
  03cf7b8  ld 4, 56(1)
  03cf7bc  bl 0x3cd510
  03cf7c0  b 0x3d0ad4
  03cf7c4  cmpwi 3, 22
  03cf7c8  bf 2, 0x3cf820
  03cf7cc  lis 4, 132
  03cf7d0  li 3, 255
  03cf7d4  lfs 1, 25304(4)
  03cf7d8  fadds 1, 28, 1
  03cf7dc  stfs 1, 24(31)
  03cf7e0  bl 0xfc620
  03cf7e4  nop
  03cf7e8  clrlwi 3, 3, 31
  03cf7ec  cmpwi 3, 0
  03cf7f0  bt 2, 0x3cf820
  03cf7f4  lfs 1, 16(31)
  03cf7f8  lfs 2, 24(31)
  03cf7fc  stfs 1, 48(1)
  03cf800  stfs 2, 56(1)
  03cf804  lfs 1, 20(31)
  03cf808  lfs 2, 28(31)
  03cf80c  stfs 1, 52(1)
  03cf810  stfs 2, 60(1)
  03cf814  ld 3, 48(1)
  03cf818  ld 4, 56(1)
  03cf81c  bl 0x3cd980
  03cf820  lfs 1, 464(30)
  03cf824  stfs 1, 256(1)
  03cf828  lfs 2, 468(30)
  03cf82c  stfs 2, 260(1)
  03cf830  lfs 3, 472(30)
  03cf834  lfs 4, 16(31)
  03cf838  stfs 3, 264(1)
  03cf83c  fsubs 1, 1, 4
  03cf840  lfs 3, 476(30)
  03cf844  lfs 5, 20(31)
  03cf848  stfs 3, 268(1)
  03cf84c  fsubs 2, 2, 5
  03cf850  bl 0x5e8338
  03cf854  nop
  03cf858  lis 3, 61
  03cf85c  lfs 2, 580(30)
  03cf860  addic 5, 30, 576
  03cf864  addi 28, 3, -6676
  03cf868  fadds 1, 1, 2
  03cf86c  ori 3, 31, 0
  03cf870  lfs 2, 20(28)
  03cf874  lfs 3, 24(28)
  03cf878  lfs 4, 60(28)
  03cf87c  bl 0xff2e8
  03cf880  nop
  03cf884  lfs 1, 72(31)
  03cf888  bl 0x5e8078
  03cf88c  nop
  03cf890  lfs 31, 64(28)
  03cf894  lfs 2, 72(31)
  03cf898  fmuls 3, 1, 31
  03cf89c  fmr 1, 2
  03cf8a0  stfs 3, 208(1)
  03cf8a4  bl 0x5e8128
  03cf8a8  nop
  03cf8ac  fmuls 1, 1, 31
  03cf8b0  li 4, 0
  03cf8b4  addic 27, 1, 208
  03cf8b8  addic 29, 31, 16
  03cf8bc  ori 3, 27, 0
  03cf8c0  stw 4, 216(1)
  03cf8c4  ori 5, 29, 0
  03cf8c8  ori 4, 27, 0
  03cf8cc  stfs 1, 212(1)
  03cf8d0  bl 0x5e7f54
  03cf8d4  nop
  03cf8d8  ori 3, 31, 0
  03cf8dc  lfs 1, 68(28)
  03cf8e0  addic 4, 30, 384
  03cf8e4  addic 6, 1, 224
  03cf8e8  ori 5, 27, 0
  03cf8ec  bl 0x101058
  03cf8f0  nop
  03cf8f4  ori 3, 31, 0
  03cf8f8  bl 0x3cdd50
  03cf8fc  lbz 3, 32(31)
  03cf900  cmpwi 3, 22
  03cf904  bf 2, 0x3cf91c
  03cf908  lis 3, 132
  03cf90c  lfs 1, 24(31)
  03cf910  lfs 2, 25304(3)
  03cf914  fsubs 1, 1, 2
  03cf918  stfs 1, 24(31)
  03cf91c  lwz 3, 532(30)
  03cf920  cmpwi 3, 2
  03cf924  bt 2, 0x3cfa94
  03cf928  lwz 3, 632(30)
  03cf92c  cmpwi 3, 0
  03cf930  bt 0, 0x3cf95c
  03cf934  addic 5, 30, 464
  03cf938  extsw 4, 3
  03cf93c  ori 3, 5, 0
  03cf940  bl 0x110b70
  03cf944  nop
  03cf948  cmpwi 3, 0
  03cf94c  bf 2, 0x3cf95c
  03cf950  li 3, 7
  03cf954  stb 3, 32(31)
  03cf958  b 0x3d0ad4
  03cf95c  addic 3, 1, 240
  03cf960  addic 4, 30, 464
  03cf964  addic 5, 30, 544
  03cf968  bl 0x5e81f0
  03cf96c  nop
  03cf970  ori 3, 29, 0
  03cf974  addic 4, 1, 256
  03cf978  bl 0x5e8588
  03cf97c  nop
  03cf980  lis 3, 61
  03cf984  addi 3, 3, -6676
  03cf988  lfs 2, 96(3)
  03cf98c  fcmpu 0, 1, 2
  03cf990  cror 6, 1, 2
  03cf994  bt 6, 0x3cfa0c
  03cf998  lbz 3, 32(31)
  03cf99c  cmpwi 3, 22
  03cf9a0  bf 2, 0x3cfa0c
  03cf9a4  li 6, 19
  03cf9a8  li 3, 4
  03cf9ac  li 4, 0
  03cf9b0  ori 5, 31, 0
  03cf9b4  stb 6, 32(31)
  03cf9b8  bl 0x15d12c
  03cf9bc  nop
  03cf9c0  lbz 3, 83(31)
  03cf9c4  cmpwi 3, 0
  03cf9c8  bt 2, 0x3d0ad4
  03cf9cc  lis 3, 61
  03cf9d0  lis 4, 114
  03cf9d4  addi 3, 3, -6676
  03cf9d8  li 5, 0
  03cf9dc  lfs 1, 12(3)
  03cf9e0  lfs 2, -3056(4)
  03cf9e4  ori 3, 31, 0
  03cf9e8  fmuls 1, 2, 1
  03cf9ec  li 4, 0
  03cf9f0  fctiwz 1, 1
  03cf9f4  stfd 1, 400(1)
  03cf9f8  lwz 6, 404(1)
  03cf9fc  extsw 6, 6
  03cfa00  bl 0xfddc0
  03cfa04  nop
  03cfa08  b 0x3d0ad4
  03cfa0c  ori 3, 29, 0
  03cfa10  addic 4, 1, 256
  03cfa14  bl 0x5e8588
  03cfa18  nop
  03cfa1c  lis 3, 61
  03cfa20  addi 3, 3, -6676
  03cfa24  lfs 2, 76(3)
  03cfa28  fcmpu 0, 1, 2
  03cfa2c  cror 6, 1, 2
  03cfa30  bt 6, 0x3d0ad4
  03cfa34  lbz 3, 32(31)
  03cfa38  cmpwi 3, 5
  03cfa3c  bf 2, 0x3d0ad4
  03cfa40  li 3, 6
  03cfa44  lbz 4, 83(31)
  03cfa48  cmpwi 4, 1
  03cfa4c  stb 3, 32(31)
  03cfa50  bt 2, 0x3d0ad4
  03cfa54  lis 3, 61
  03cfa58  lis 4, 114
  03cfa5c  addi 3, 3, -6676
  03cfa60  li 5, 0
  03cfa64  lfs 1, 12(3)
  03cfa68  lfs 2, -3056(4)
  03cfa6c  ori 3, 31, 0
  03cfa70  fmuls 1, 2, 1
  03cfa74  li 4, 1
  03cfa78  fctiwz 1, 1
  03cfa7c  stfd 1, 400(1)
  03cfa80  lwz 6, 404(1)
  03cfa84  extsw 6, 6
  03cfa88  bl 0xfddc0
  03cfa8c  nop
  03cfa90  b 0x3d0ad4
  03cfa94  lwz 4, 632(30)
  03cfa98  li 3, 7
  03cfa9c  cmpwi 4, 0
  03cfaa0  bf 0, 0x3cfad0
  03cfaa4  li 3, 0
  03cfaa8  lhz 6, 606(30)
  03cfaac  li 4, 18
  03cfab0  subc 3, 3, 6
  03cfab4  li 5, 14
  03cfab8  cntlzw 3, 3
  03cfabc  subc 4, 4, 5
  03cfac0  sldi 3, 3, 58
  03cfac4  sradi 3, 3, 63
  03cfac8  and 3, 3, 4
  03cfacc  addc 3, 5, 3
  03cfad0  stb 3, 32(31)
  03cfad4  b 0x3d0ad4
  03cfad8  lfs 1, 464(30)
  03cfadc  lfs 2, 16(31)
  03cfae0  lfs 3, 468(30)
  03cfae4  lfs 4, 20(31)
  03cfae8  fsubs 1, 1, 2
  03cfaec  fsubs 2, 3, 4
  03cfaf0  bl 0x5e8338
  03cfaf4  nop
  03cfaf8  lis 3, 61
  03cfafc  addic 5, 30, 576
  03cfb00  addi 4, 3, -6676
  03cfb04  ori 3, 31, 0
  03cfb08  lfs 2, 20(4)
  03cfb0c  lfs 3, 24(4)
  03cfb10  lfs 4, 60(4)
  03cfb14  bl 0xff2e8
  03cfb18  nop
  03cfb1c  lbz 3, 82(31)
  03cfb20  lbz 4, 83(31)
  03cfb24  cmpw 3, 4
  03cfb28  bf 2, 0x3cfbbc
  03cfb2c  lis 3, 61
  03cfb30  addi 4, 3, -6676
  03cfb34  ori 3, 31, 0
  03cfb38  lfs 1, 100(4)
  03cfb3c  bl 0x113e88
  03cfb40  nop
  03cfb44  cmpwi 3, 0
  03cfb48  bt 2, 0x3cfbbc
  03cfb4c  lis 3, 61
  03cfb50  addic 29, 1, 272
  03cfb54  addi 28, 3, -6676
  03cfb58  ori 3, 29, 0
  03cfb5c  addic 4, 31, 192
  03cfb60  lfs 1, 104(28)
  03cfb64  bl 0x5e7f98
  03cfb68  nop
  03cfb6c  addic 5, 31, 16
  03cfb70  ori 3, 29, 0
  03cfb74  ori 4, 29, 0
  03cfb78  bl 0x5e7f54
  03cfb7c  nop
  03cfb80  lfs 1, 52(28)
  03cfb84  lfs 2, 280(1)
  03cfb88  li 5, 0
  03cfb8c  ori 3, 31, 0
  03cfb90  fadds 2, 2, 1
  03cfb94  ori 4, 29, 0
  03cfb98  std 5, 112(1)
  03cfb9c  li 6, 1
  03cfba0  li 9, 0
  03cfba4  li 10, 1
  03cfba8  stfs 2, 280(1)
  03cfbac  lfs 2, 68(28)
  03cfbb0  fmr 3, 2
  03cfbb4  bl 0x105870
  03cfbb8  nop
  03cfbbc  lbz 3, 112(31)
  03cfbc0  rlwinm 3, 3, 0, 30, 30
  03cfbc4  cmpwi 3, 0
  03cfbc8  bt 2, 0x3cfc44
  03cfbcc  addic 3, 31, 16
  03cfbd0  addic 4, 30, 464
  03cfbd4  bl 0x5e8588
  03cfbd8  nop
  03cfbdc  lis 3, 61
  03cfbe0  addi 3, 3, -6676
  03cfbe4  lfs 2, 76(3)
  03cfbe8  fcmpu 0, 1, 2
  03cfbec  cror 6, 0, 2
  03cfbf0  bt 6, 0x3cfc44
  03cfbf4  li 3, 5
  03cfbf8  lbz 4, 83(31)
  03cfbfc  cmpwi 4, 0
  03cfc00  stb 3, 32(31)
  03cfc04  bt 2, 0x3cfc44
  03cfc08  lis 3, 61
  03cfc0c  lis 4, 114
  03cfc10  addi 3, 3, -6676
  03cfc14  li 5, 0
  03cfc18  lfs 1, 12(3)
  03cfc1c  lfs 2, -3056(4)
  03cfc20  ori 3, 31, 0
  03cfc24  li 4, 0
  03cfc28  fmuls 1, 2, 1
  03cfc2c  fctiwz 1, 1
  03cfc30  stfd 1, 400(1)
  03cfc34  lwz 6, 404(1)
  03cfc38  extsw 6, 6
  03cfc3c  bl 0xfddc0
  03cfc40  nop
  03cfc44  lis 3, 61
  03cfc48  li 4, 0
  03cfc4c  addi 29, 3, -6676
  03cfc50  addic 3, 31, 16
  03cfc54  lfs 1, 52(29)
  03cfc58  bl 0xffb70
  03cfc5c  nop
  03cfc60  lis 3, 114
  03cfc64  lfs 2, 108(29)
  03cfc68  lfs 3, 408(30)
  03cfc6c  lfs 4, -3048(3)
  03cfc70  fnmsubs 2, 4, 2, 3
  03cfc74  stfs 2, 408(30)
  03cfc78  lfs 3, 24(31)
  03cfc7c  fadds 2, 3, 2
  03cfc80  fcmpu 0, 2, 1
  03cfc84  stfs 2, 24(31)
  03cfc88  cror 6, 1, 2
  03cfc8c  bt 6, 0x3d0ad4
  03cfc90  li 3, 0
  03cfc94  stw 3, 408(30)
  03cfc98  stfs 1, 24(31)
  03cfc9c  b 0x3d0ad4
  03cfca0  cmpwi 3, 23
  03cfca4  bf 2, 0x3cfcfc
  03cfca8  lis 4, 132
  03cfcac  li 3, 255
  03cfcb0  lfs 1, 25304(4)
  03cfcb4  fadds 1, 28, 1
  03cfcb8  stfs 1, 24(31)
  03cfcbc  bl 0xfc620
  03cfcc0  nop
  03cfcc4  clrlwi 3, 3, 31
  03cfcc8  cmpwi 3, 0
  03cfccc  bt 2, 0x3cfcfc
  03cfcd0  lfs 1, 16(31)
  03cfcd4  lfs 2, 24(31)
  03cfcd8  stfs 1, 48(1)
  03cfcdc  stfs 2, 56(1)
  03cfce0  lfs 1, 20(31)
  03cfce4  lfs 2, 28(31)
  03cfce8  stfs 1, 52(1)
  03cfcec  stfs 2, 60(1)
  03cfcf0  ld 3, 48(1)
  03cfcf4  ld 4, 56(1)
  03cfcf8  bl 0x3cd980
  03cfcfc  lfs 1, 544(30)
  03cfd00  lfs 2, 548(30)
  03cfd04  lfs 3, 16(31)
  03cfd08  lfs 4, 20(31)
  03cfd0c  fsubs 1, 1, 3
  03cfd10  fsubs 2, 2, 4
  03cfd14  bl 0x5e8338
  03cfd18  nop
  03cfd1c  lis 3, 61
  03cfd20  addic 5, 30, 576
  03cfd24  addi 29, 3, -6676
  03cfd28  ori 3, 31, 0
  03cfd2c  lfs 2, 112(29)
  03cfd30  lfs 3, 24(29)
  03cfd34  lfs 4, 116(29)
  03cfd38  bl 0xff2e8
  03cfd3c  nop
  03cfd40  lfs 1, 72(31)
  03cfd44  bl 0x5e8078
  03cfd48  nop
  03cfd4c  lfs 31, 64(29)
  03cfd50  lfs 2, 72(31)
  03cfd54  fmuls 3, 1, 31
  03cfd58  fmr 1, 2
  03cfd5c  stfs 3, 288(1)
  03cfd60  bl 0x5e8128
  03cfd64  nop
  03cfd68  fmuls 1, 1, 31
  03cfd6c  li 4, 0
  03cfd70  addic 27, 1, 288
  03cfd74  addic 28, 31, 16
  03cfd78  ori 3, 27, 0
  03cfd7c  stw 4, 296(1)
  03cfd80  ori 4, 27, 0
  03cfd84  ori 5, 28, 0
  03cfd88  stfs 1, 292(1)
  03cfd8c  bl 0x5e7f54
  03cfd90  nop
  03cfd94  lfs 1, 68(29)
  03cfd98  ori 3, 31, 0
  03cfd9c  addic 4, 30, 384
  03cfda0  addic 6, 1, 304
  03cfda4  ori 5, 27, 0
  03cfda8  bl 0x101058
  03cfdac  nop
  03cfdb0  lbz 3, 32(31)
  03cfdb4  cmpwi 3, 23
  03cfdb8  bf 2, 0x3cfdd0
  03cfdbc  lis 3, 132
  03cfdc0  lfs 1, 24(31)
  03cfdc4  lfs 2, 25304(3)
  03cfdc8  fsubs 1, 1, 2
  03cfdcc  stfs 1, 24(31)
  03cfdd0  addic 29, 30, 544
  03cfdd4  ori 3, 28, 0
  03cfdd8  ori 4, 29, 0
  03cfddc  bl 0x5e8588
  03cfde0  nop
  03cfde4  lis 3, 61
  03cfde8  addi 3, 3, -6676
  03cfdec  lfs 31, 52(3)
  03cfdf0  fcmpu 0, 1, 31
  03cfdf4  cror 6, 1, 2
  03cfdf8  bt 6, 0x3cff4c
  03cfdfc  li 3, 0
  03cfe00  stw 3, 664(30)
  03cfe04  lbz 3, 32(31)
  03cfe08  cmpwi 3, 7
  03cfe0c  bf 2, 0x3cfee0
  03cfe10  lwz 3, 632(30)
  03cfe14  cmpwi 3, 0
  03cfe18  bt 0, 0x3cfe70
  03cfe1c  li 3, 3
  03cfe20  lbz 4, 83(31)
  03cfe24  cmpwi 4, 2
  03cfe28  stb 3, 32(31)
  03cfe2c  bt 2, 0x3cff4c
  03cfe30  lis 3, 61
  03cfe34  lis 4, 114
  03cfe38  addi 3, 3, -6676
  03cfe3c  li 5, 0
  03cfe40  lfs 1, 12(3)
  03cfe44  lfs 2, -3056(4)
  03cfe48  ori 3, 31, 0
  03cfe4c  fmuls 1, 2, 1
  03cfe50  li 4, 2
  03cfe54  fctiwz 1, 1
  03cfe58  stfd 1, 400(1)
  03cfe5c  lwz 6, 404(1)
  03cfe60  extsw 6, 6
  03cfe64  bl 0xfddc0
  03cfe68  nop
  03cfe6c  b 0x3cff4c
  03cfe70  lis 4, 61
  03cfe74  li 3, 18
  03cfe78  addi 4, 4, -6676
  03cfe7c  lis 5, 114
  03cfe80  stb 3, 32(31)
  03cfe84  lfs 1, 76(4)
  03cfe88  lfs 2, -3052(5)
  03cfe8c  fmuls 1, 2, 1
  03cfe90  stfs 1, 420(30)
  03cfe94  lbz 3, 83(31)
  03cfe98  cmpwi 3, 0
  03cfe9c  bt 2, 0x3cff4c
  03cfea0  lis 3, 61
  03cfea4  lis 4, 114
  03cfea8  addi 3, 3, -6676
  03cfeac  li 5, 0
  03cfeb0  lfs 1, 12(3)
  03cfeb4  lfs 2, -3056(4)
  03cfeb8  ori 3, 31, 0
  03cfebc  fmuls 1, 2, 1
  03cfec0  li 4, 0
  03cfec4  fctiwz 1, 1
  03cfec8  stfd 1, 400(1)
  03cfecc  lwz 6, 404(1)
  03cfed0  extsw 6, 6
  03cfed4  bl 0xfddc0
  03cfed8  nop
  03cfedc  b 0x3cff4c
  03cfee0  lis 4, 61
  03cfee4  li 3, 2
  03cfee8  addi 4, 4, -6676
  03cfeec  lis 5, 114
  03cfef0  stb 3, 32(31)
  03cfef4  lfs 1, 76(4)
  03cfef8  lfs 2, -3052(5)
  03cfefc  fmuls 1, 2, 1
  03cff00  stfs 1, 420(30)
  03cff04  lbz 3, 83(31)
  03cff08  cmpwi 3, 12
  03cff0c  bt 2, 0x3cff4c
  03cff10  lis 3, 61
  03cff14  lis 4, 114
  03cff18  addi 3, 3, -6676
  03cff1c  li 5, 0
  03cff20  lfs 1, 88(3)
  03cff24  lfs 2, -3056(4)
  03cff28  ori 3, 31, 0
  03cff2c  fmuls 1, 2, 1
  03cff30  li 4, 12
  03cff34  fctiwz 1, 1
  03cff38  stfd 1, 400(1)
  03cff3c  lwz 6, 404(1)
  03cff40  extsw 6, 6
  03cff44  bl 0xfddc0
  03cff48  nop
  03cff4c  lwz 3, 664(30)
  03cff50  cmpwi 3, 0
  03cff54  bf 2, 0x3d00d8
  03cff58  lwz 3, 532(30)
  03cff5c  cmpwi 3, 2
  03cff60  bt 2, 0x3d006c
  03cff64  ori 5, 29, 0
  03cff68  addic 29, 30, 464
  03cff6c  addic 3, 1, 320
  03cff70  ori 4, 29, 0
  03cff74  bl 0x5e81f0
  03cff78  nop
  03cff7c  lwz 3, 632(30)
  03cff80  cmpwi 3, 0
  03cff84  bt 0, 0x3cffc0
  03cff88  extsw 4, 3
  03cff8c  ori 3, 29, 0
  03cff90  bl 0x110b70
  03cff94  nop
  03cff98  cmpwi 3, 0
  03cff9c  bt 2, 0x3d0ad4
  03cffa0  li 3, 5
  03cffa4  lis 4, 114
  03cffa8  stb 3, 32(31)
  03cffac  lfs 1, 596(30)
  03cffb0  lfs 2, -3052(4)
  03cffb4  fmuls 1, 1, 2
  03cffb8  stfs 1, 420(30)
  03cffbc  b 0x3d0ad4
  03cffc0  addic 3, 1, 320
  03cffc4  bl 0x5e8030
  03cffc8  nop
  03cffcc  lfs 2, 588(30)
  03cffd0  fcmpu 0, 1, 2
  03cffd4  cror 6, 1, 2
  03cffd8  bt 6, 0x3d0ad4
  03cffdc  li 4, 7
  03cffe0  lbz 6, 32(31)
  03cffe4  li 3, 5
  03cffe8  li 5, 22
  03cffec  subc 4, 4, 6
  03cfff0  subc 3, 3, 5
  03cfff4  cntlzw 4, 4
  03cfff8  lis 6, 114
  03cfffc  sldi 4, 4, 58
  03d0000  sradi 4, 4, 63
  03d0004  and 3, 4, 3
  03d0008  addc 3, 5, 3
  03d000c  stb 3, 32(31)
  03d0010  lfs 1, 596(30)
  03d0014  lfs 2, -3052(6)
  03d0018  fmuls 1, 1, 2
  03d001c  stfs 1, 420(30)
  03d0020  lbz 3, 83(31)
  03d0024  cmpwi 3, 0
  03d0028  bt 2, 0x3d0ad4
  03d002c  lis 3, 61
  03d0030  lis 4, 114
  03d0034  addi 3, 3, -6676
  03d0038  li 5, 0
  03d003c  lfs 1, 12(3)
  03d0040  lfs 2, -3056(4)
  03d0044  ori 3, 31, 0
  03d0048  li 4, 0
  03d004c  fmuls 1, 2, 1
  03d0050  fctiwz 1, 1
  03d0054  stfd 1, 400(1)
  03d0058  lwz 6, 404(1)
  03d005c  extsw 6, 6
  03d0060  bl 0xfddc0
  03d0064  nop
  03d0068  b 0x3d0ad4
  03d006c  lhz 3, 606(30)
  03d0070  cmpwi 3, 0
  03d0074  bt 2, 0x3d0ad4
  03d0078  li 3, 19
  03d007c  bl 0xfc620
  03d0080  nop
  03d0084  cmpwi 3, 0
  03d0088  bf 2, 0x3d0ad4
  03d008c  li 6, 21
  03d0090  li 3, 4
  03d0094  li 4, 0
  03d0098  ori 5, 31, 0
  03d009c  stb 6, 32(31)
  03d00a0  bl 0x15d12c
  03d00a4  nop
  03d00a8  lbz 3, 83(31)
  03d00ac  cmpwi 3, 0
  03d00b0  bt 2, 0x3d00cc
  03d00b4  ori 3, 31, 0
  03d00b8  li 4, 0
  03d00bc  li 5, 0
  03d00c0  li 6, 0
  03d00c4  bl 0xfddc0
  03d00c8  nop
  03d00cc  li 3, -1
  03d00d0  stw 3, 628(30)
  03d00d4  b 0x3d0ad4
  03d00d8  lis 5, 114
  03d00dc  addic 30, 1, 336
  03d00e0  addic 4, 31, 192
  03d00e4  ori 3, 30, 0
  03d00e8  lfs 1, -3052(5)
  03d00ec  fmuls 1, 1, 31
  03d00f0  bl 0x5e7f98
  03d00f4  nop
  03d00f8  ori 3, 28, 0
  03d00fc  ori 4, 28, 0
  03d0100  ori 5, 30, 0
  03d0104  bl 0x5e7f54
  03d0108  nop
  03d010c  b 0x3d0ad4
  03d0110  ori 3, 31, 0
  03d0114  addic 4, 30, 288
  03d0118  bl 0x10b030
  03d011c  nop
  03d0120  clrlwi 3, 3, 31
  03d0124  cmpwi 3, 0
  03d0128  bt 2, 0x3d0180
  03d012c  li 3, 11
  03d0130  lbz 4, 83(31)
  03d0134  cmpwi 4, 4
  03d0138  stb 3, 32(31)
  03d013c  bt 2, 0x3d0ad4
  03d0140  lis 3, 61
  03d0144  lis 4, 114
  03d0148  addi 3, 3, -6676
  03d014c  li 5, 8
  03d0150  lfs 1, 12(3)
  03d0154  lfs 2, -3056(4)
  03d0158  ori 3, 31, 0
  03d015c  fmuls 1, 2, 1
  03d0160  li 4, 4
  03d0164  fctiwz 1, 1
  03d0168  stfd 1, 400(1)
  03d016c  lwz 6, 404(1)
  03d0170  extsw 6, 6
  03d0174  bl 0xfddc0
  03d0178  nop
  03d017c  b 0x3d0ad4
  03d0180  lwz 3, 24(31)
  03d0184  cmpwi 3, 0
  03d0188  bf 0, 0x3d0ad4
  03d018c  lis 6, 132
  03d0190  ori 3, 31, 0
  03d0194  li 4, 0
  03d0198  li 5, 1
  03d019c  lwz 6, 25660(6)
  03d01a0  extsw 6, 6
  03d01a4  bl 0x3cd150
  03d01a8  lis 6, 132
  03d01ac  ori 3, 31, 0
  03d01b0  li 4, 2
  03d01b4  li 5, 3
  03d01b8  lwz 6, 25656(6)
  03d01bc  extsw 6, 6
  03d01c0  bl 0x3cd150
  03d01c4  lis 30, 132
  03d01c8  ori 3, 31, 0
  03d01cc  li 4, 4
  03d01d0  li 5, 5
  03d01d4  lwz 6, 25664(30)
  03d01d8  extsw 6, 6
  03d01dc  bl 0x3cd150
  03d01e0  lwz 6, 25664(30)
  03d01e4  ori 3, 31, 0
  03d01e8  extsw 6, 6
  03d01ec  li 4, 6
  03d01f0  li 5, 7
  03d01f4  bl 0x3cd150
  03d01f8  lis 6, 132
  03d01fc  ori 3, 31, 0
  03d0200  li 4, 8
  03d0204  li 5, 9
  03d0208  lwz 6, 25668(6)
  03d020c  extsw 6, 6
  03d0210  bl 0x3cd150
  03d0214  ori 3, 31, 0
  03d0218  bl 0xefb38
  03d021c  nop
  03d0220  b 0x3d0ad4
  03d0224  ori 3, 31, 0
  03d0228  addic 4, 30, 288
  03d022c  bl 0x48c188
  03d0230  nop
  03d0234  cmpwi 3, 0
  03d0238  bt 2, 0x3d0ad4
  03d023c  li 3, 1
  03d0240  li 4, 0
  03d0244  stb 3, 32(31)
  03d0248  sth 4, 200(30)
  03d024c  b 0x3d0ad4
  03d0250  lis 3, 151
  03d0254  lwz 4, 620(30)
  03d0258  addic 29, 3, -25376
  03d025c  extsw 4, 4
  03d0260  addic 29, 29, 128
  03d0264  ori 3, 29, 0
  03d0268  bl 0x110b70
  03d026c  nop
  03d0270  cmpwi 3, 0
  03d0274  bf 2, 0x3d0294
  03d0278  ori 3, 29, 0
  03d027c  lwz 4, 624(30)
  03d0280  extsw 4, 4
  03d0284  bl 0x110b70
  03d0288  nop
  03d028c  cmpwi 3, 0
  03d0290  bt 2, 0x3d0ad4
  03d0294  lis 3, 164
  03d0298  lis 4, 61
  03d029c  addi 29, 4, -6676
  03d02a0  lwz 4, 652(30)
  03d02a4  lwz 3, -28512(3)
  03d02a8  slwi 4, 4, 8
  03d02ac  lfs 3, 552(30)
  03d02b0  addc 3, 3, 4
  03d02b4  lfs 1, 120(29)
  03d02b8  lfs 2, 8(29)
  03d02bc  clrldi 28, 3, 32
  03d02c0  lfs 4, 24(28)
  03d02c4  fsubs 31, 4, 3
  03d02c8  bl 0xfcbe8
  03d02cc  nop
  03d02d0  lis 3, 114
  03d02d4  lfs 2, 124(29)
  03d02d8  lfs 3, 64(29)
  03d02dc  lfs 4, -3048(3)
  03d02e0  lis 3, 114
  03d02e4  fmuls 2, 4, 2
  03d02e8  lfs 5, -3052(3)
  03d02ec  addic 29, 30, 544
  03d02f0  fmuls 4, 2, 3
  03d02f4  addic 27, 28, 16
  03d02f8  ori 3, 29, 0
  03d02fc  ori 4, 27, 0
  03d0300  fmuls 4, 4, 31
  03d0304  fmuls 31, 1, 5
  03d0308  fsqrts 1, 4
  03d030c  fmadds 1, 31, 3, 1
  03d0310  fdivs 30, 1, 2
  03d0314  bl 0x5e8588
  03d0318  nop
  03d031c  addic 26, 30, 64
  03d0320  ori 5, 27, 0
  03d0324  ori 4, 29, 0
  03d0328  ori 3, 26, 0
  03d032c  fdivs 30, 1, 30
  03d0330  bl 0x5e81f0
  03d0334  nop
  03d0338  li 5, 0
  03d033c  ori 3, 26, 0
  03d0340  ori 4, 26, 0
  03d0344  stw 5, 72(30)
  03d0348  fmr 1, 30
  03d034c  bl 0x5e7f98
  03d0350  nop
  03d0354  stfs 31, 72(30)
  03d0358  lfs 1, 16(28)
  03d035c  stfs 1, 16(31)
  03d0360  lfs 1, 20(28)
  03d0364  lwz 3, 36(31)
  03d0368  stfs 1, 20(31)
  03d036c  lfs 1, 24(28)
  03d0370  lhz 4, 52(31)
  03d0374  stfs 1, 24(31)
  03d0378  lfs 1, 28(28)
  03d037c  rlwinm 4, 4, 0, 0, 30
  03d0380  lbz 5, 83(31)
  03d0384  stfs 1, 28(31)
  03d0388  ori 4, 4, 4096
  03d038c  lwz 3, 16(3)
  03d0390  cmpwi 5, 11
  03d0394  stw 3, 148(31)
  03d0398  sth 4, 52(31)
  03d039c  bt 2, 0x3d03b8
  03d03a0  ori 3, 31, 0
  03d03a4  li 4, 11
  03d03a8  li 5, 0
  03d03ac  li 6, 0
  03d03b0  bl 0xfddc0
  03d03b4  nop
  03d03b8  li 3, 13
  03d03bc  stb 3, 32(31)
  03d03c0  b 0x3d0ad4
  03d03c4  lis 3, 61
  03d03c8  addic 29, 1, 368
  03d03cc  addi 28, 3, -6676
  03d03d0  ori 3, 29, 0
  03d03d4  lfs 1, 92(28)
  03d03d8  lfs 2, 60(28)
  03d03dc  bl 0xfea60
  03d03e0  nop
  03d03e4  addic 27, 31, 16
  03d03e8  addic 3, 1, 352
  03d03ec  ori 4, 29, 0
  03d03f0  ori 5, 27, 0
  03d03f4  bl 0x5e7f54
  03d03f8  nop
  03d03fc  lis 3, 114
  03d0400  lfs 1, 128(28)
  03d0404  lis 4, 132
  03d0408  lfs 2, 368(1)
  03d040c  lis 5, 132
  03d0410  lfs 3, -3052(3)
  03d0414  lfs 4, 372(1)
  03d0418  fmuls 1, 3, 1
  03d041c  lfs 5, 376(1)
  03d0420  lwz 6, 25648(4)
  03d0424  li 3, 20
  03d0428  lwz 5, 25652(5)
  03d042c  li 4, 40
  03d0430  extsw 26, 6
  03d0434  extsw 25, 5
  03d0438  fmuls 2, 2, 1
  03d043c  fmuls 3, 4, 1
  03d0440  fmuls 1, 5, 1
  03d0444  stfs 2, 368(1)
  03d0448  stfs 3, 372(1)
  03d044c  stfs 1, 376(1)
  03d0450  bl 0xfe484
  03d0454  nop
  03d0458  extsw 3, 3
  03d045c  li 4, 150
  03d0460  std 3, 400(1)
  03d0464  lis 3, 114
  03d0468  lfs 1, 52(28)
  03d046c  lfs 2, -3056(3)
  03d0470  lfd 3, 400(1)
  03d0474  li 3, 120
  03d0478  fcfid 3, 3
  03d047c  frsp 3, 3
  03d0480  fadds 1, 3, 1
  03d0484  fmuls 1, 2, 1
  03d0488  fctiwz 1, 1
  03d048c  stfd 1, 400(1)
  03d0490  lwz 5, 404(1)
  03d0494  extsw 28, 5
  03d0498  bl 0xfe484
  03d049c  nop
  03d04a0  ori 9, 3, 0
  03d04a4  li 8, 100
  03d04a8  ori 3, 27, 0
  03d04ac  li 10, 0
  03d04b0  ori 4, 29, 0
  03d04b4  ori 5, 26, 0
  03d04b8  ori 6, 25, 0
  03d04bc  ori 7, 28, 0
  03d04c0  bl 0x121740
  03d04c4  nop
  03d04c8  lis 3, 61
  03d04cc  lfs 1, 68(31)
  03d04d0  addi 29, 3, -6676
  03d04d4  lis 3, 114
  03d04d8  lfs 2, 132(29)
  03d04dc  lfs 3, -3052(3)
  03d04e0  fmuls 2, 3, 2
  03d04e4  bl 0x5025e0
  03d04e8  nop
  03d04ec  addic 3, 31, 16
  03d04f0  stfs 1, 68(31)
  03d04f4  addic 5, 30, 64
  03d04f8  ori 4, 3, 0
  03d04fc  bl 0x5e7f54
  03d0500  nop
  03d0504  lis 3, 114
  03d0508  lfs 3, 124(29)
  03d050c  lis 4, 132
  03d0510  lfs 2, 72(30)
  03d0514  lfs 1, 552(30)
  03d0518  lfs 4, -3048(3)
  03d051c  fnmsubs 2, 4, 3, 2
  03d0520  stfs 2, 72(30)
  03d0524  lfs 3, 25304(4)
  03d0528  lfs 2, 24(31)
  03d052c  fsubs 3, 1, 3
  03d0530  fcmpu 0, 2, 3
  03d0534  cror 6, 1, 2
  03d0538  bt 6, 0x3d05c4
  03d053c  lis 3, 132
  03d0540  lwz 4, 36(31)
  03d0544  lhz 5, 52(31)
  03d0548  lfs 1, 25304(3)
  03d054c  ori 3, 5, 4096
  03d0550  lwz 4, 16(4)
  03d0554  li 5, 0
  03d0558  stw 4, 148(31)
  03d055c  sth 3, 52(31)
  03d0560  lfs 2, 552(30)
  03d0564  li 3, 23
  03d0568  lbz 4, 83(31)
  03d056c  fsubs 1, 2, 1
  03d0570  cmpwi 4, 12
  03d0574  stb 3, 32(31)
  03d0578  stw 5, 68(31)
  03d057c  stfs 1, 24(31)
  03d0580  bt 2, 0x3d0ad4
  03d0584  lis 3, 61
  03d0588  lis 4, 114
  03d058c  addi 3, 3, -6676
  03d0590  li 5, 0
  03d0594  lfs 1, 76(3)
  03d0598  lfs 2, -3056(4)
  03d059c  ori 3, 31, 0
  03d05a0  li 4, 12
  03d05a4  fmuls 1, 2, 1
  03d05a8  fctiwz 1, 1
  03d05ac  stfd 1, 400(1)
  03d05b0  lwz 6, 404(1)
  03d05b4  extsw 6, 6
  03d05b8  bl 0xfddc0
  03d05bc  nop
  03d05c0  b 0x3d0ad4
  03d05c4  lis 3, 61
  03d05c8  addi 3, 3, -6676
  03d05cc  lfs 3, 136(3)
  03d05d0  fadds 1, 1, 3
  03d05d4  fcmpu 0, 2, 1
  03d05d8  cror 6, 1, 2
  03d05dc  bt 6, 0x3d0ad4
  03d05e0  lfs 1, 16(31)
  03d05e4  li 5, 6
  03d05e8  stfs 2, 56(1)
  03d05ec  stfs 1, 48(1)
  03d05f0  lfs 1, 20(31)
  03d05f4  lfs 2, 28(31)
  03d05f8  stfs 1, 52(1)
  03d05fc  stfs 2, 60(1)
  03d0600  ld 4, 56(1)
  03d0604  ld 3, 48(1)
  03d0608  bl 0x3cd510
  03d060c  b 0x3d0ad4
  03d0610  ori 3, 31, 0
  03d0614  addic 4, 30, 288
  03d0618  bl 0x10b030
  03d061c  nop
  03d0620  ori 29, 3, 0
  03d0624  clrlwi 3, 29, 31
  03d0628  cmpwi 3, 0
  03d062c  bt 2, 0x3d0674
  03d0630  lwz 3, 668(30)
  03d0634  cmpwi 3, 0
  03d0638  bf 2, 0x3d0674
  03d063c  li 3, 1
  03d0640  li 5, 27
  03d0644  stw 3, 668(30)
  03d0648  lfs 1, 16(31)
  03d064c  lfs 2, 24(31)
  03d0650  stfs 1, 48(1)
  03d0654  stfs 2, 56(1)
  03d0658  lfs 1, 20(31)
  03d065c  lfs 2, 28(31)
  03d0660  stfs 1, 52(1)
  03d0664  stfs 2, 60(1)
  03d0668  ld 3, 48(1)
  03d066c  ld 4, 56(1)
  03d0670  bl 0x3cd510
  03d0674  li 3, 320
  03d0678  and 3, 29, 3
  03d067c  cmpwi 3, 0
  03d0680  bt 2, 0x3d0870
  03d0684  lis 3, 61
  03d0688  lfs 1, 16(31)
  03d068c  li 4, 0
  03d0690  addi 29, 3, -6676
  03d0694  lfs 2, 20(31)
  03d0698  stfs 1, 384(1)
  03d069c  ori 3, 31, 0
  03d06a0  lfs 1, 28(31)
  03d06a4  li 5, -1
  03d06a8  stfs 2, 388(1)
  03d06ac  stfs 1, 396(1)
  03d06b0  lfs 31, 140(29)
  03d06b4  lfs 2, 24(31)
  03d06b8  fadds 1, 2, 31
  03d06bc  stfs 1, 392(1)
  03d06c0  bl 0xfd8d0
  03d06c4  nop
  03d06c8  ori 3, 31, 0
  03d06cc  lfs 2, 92(29)
  03d06d0  addic 4, 1, 384
  03d06d4  fmr 1, 31
  03d06d8  li 6, -1
  03d06dc  bl 0x110040
  03d06e0  nop
  03d06e4  ori 3, 31, 0
  03d06e8  bl 0x3cd410
  03d06ec  cmpwi 3, 0
  03d06f0  stw 3, 636(30)
  03d06f4  bt 2, 0x3d07d8
  03d06f8  lis 6, 132
  03d06fc  ori 3, 31, 0
  03d0700  li 4, 0
  03d0704  li 5, 1
  03d0708  lwz 6, 25660(6)
  03d070c  extsw 6, 6
  03d0710  bl 0x3cd150
  03d0714  lis 6, 132
  03d0718  ori 3, 31, 0
  03d071c  li 4, 2
  03d0720  li 5, 3
  03d0724  lwz 6, 25656(6)
  03d0728  extsw 6, 6
  03d072c  bl 0x3cd150
  03d0730  lis 29, 132
  03d0734  ori 3, 31, 0
  03d0738  li 4, 4
  03d073c  li 5, 5
  03d0740  lwz 6, 25664(29)
  03d0744  extsw 6, 6
  03d0748  bl 0x3cd150
  03d074c  lwz 6, 25664(29)
  03d0750  ori 3, 31, 0
  03d0754  extsw 6, 6
  03d0758  li 4, 6
  03d075c  li 5, 7
  03d0760  bl 0x3cd150
  03d0764  lis 6, 132
  03d0768  ori 3, 31, 0
  03d076c  li 4, 8
  03d0770  li 5, 9
  03d0774  lwz 6, 25668(6)
  03d0778  extsw 6, 6
  03d077c  bl 0x3cd150
  03d0780  li 3, 26
  03d0784  li 4, 0
  03d0788  stb 3, 32(31)
  03d078c  stw 4, 88(31)
  03d0790  lfs 1, 544(30)
  03d0794  lis 3, 61
  03d0798  stfs 1, 16(31)
  03d079c  addi 3, 3, -6676
  03d07a0  lfs 1, 548(30)
  03d07a4  stfs 1, 20(31)
  03d07a8  lfs 1, 552(30)
  03d07ac  stfs 1, 24(31)
  03d07b0  lfs 2, 556(30)
  03d07b4  stfs 2, 28(31)
  03d07b8  lfs 2, 8(3)
  03d07bc  lhz 3, 52(31)
  03d07c0  fsubs 1, 1, 2
  03d07c4  stw 4, 148(31)
  03d07c8  ori 3, 3, 65
  03d07cc  sth 3, 52(31)
  03d07d0  stfs 1, 24(31)
  03d07d4  b 0x3d0ad4
  03d07d8  lis 6, 132
  03d07dc  ori 3, 31, 0
  03d07e0  li 4, 0
  03d07e4  li 5, 1
  03d07e8  lwz 6, 25660(6)
  03d07ec  extsw 6, 6
  03d07f0  bl 0x3cd150
  03d07f4  lis 6, 132
  03d07f8  ori 3, 31, 0
  03d07fc  li 4, 2
  03d0800  li 5, 3
  03d0804  lwz 6, 25656(6)
  03d0808  extsw 6, 6
  03d080c  bl 0x3cd150
  03d0810  lis 30, 132
  03d0814  ori 3, 31, 0
  03d0818  li 4, 4
  03d081c  li 5, 5
  03d0820  lwz 6, 25664(30)
  03d0824  extsw 6, 6
  03d0828  bl 0x3cd150
  03d082c  lwz 6, 25664(30)
  03d0830  ori 3, 31, 0
  03d0834  li 4, 6
  03d0838  extsw 6, 6
  03d083c  li 5, 7
  03d0840  bl 0x3cd150
  03d0844  lis 6, 132
  03d0848  ori 3, 31, 0
  03d084c  li 4, 8
  03d0850  li 5, 9
  03d0854  lwz 6, 25668(6)
  03d0858  extsw 6, 6
  03d085c  bl 0x3cd150
  03d0860  ori 3, 31, 0
  03d0864  bl 0xefb38
  03d0868  nop
  03d086c  b 0x3d0ad4
  03d0870  lwz 3, 24(31)
  03d0874  cmpwi 3, 0
  03d0878  bf 0, 0x3d0ad4
  03d087c  lis 6, 132
  03d0880  ori 3, 31, 0
  03d0884  li 4, 0
  03d0888  li 5, 1
  03d088c  lwz 6, 25660(6)
  03d0890  extsw 6, 6
  03d0894  bl 0x3cd150
  03d0898  lis 6, 132
  03d089c  ori 3, 31, 0
  03d08a0  li 4, 2
  03d08a4  li 5, 3
  03d08a8  lwz 6, 25656(6)
  03d08ac  extsw 6, 6
  03d08b0  bl 0x3cd150
  03d08b4  lis 30, 132
  03d08b8  ori 3, 31, 0
  03d08bc  li 4, 4
  03d08c0  li 5, 5
  03d08c4  lwz 6, 25664(30)
  03d08c8  extsw 6, 6
  03d08cc  bl 0x3cd150
  03d08d0  lwz 6, 25664(30)
  03d08d4  ori 3, 31, 0
  03d08d8  extsw 6, 6
  03d08dc  li 4, 6
  03d08e0  li 5, 7
  03d08e4  bl 0x3cd150
  03d08e8  lis 6, 132
  03d08ec  ori 3, 31, 0
  03d08f0  li 4, 8
  03d08f4  li 5, 9
  03d08f8  lwz 6, 25668(6)
  03d08fc  extsw 6, 6
  03d0900  bl 0x3cd150
  03d0904  ori 3, 31, 0
  03d0908  bl 0xefb38
  03d090c  nop
  03d0910  b 0x3d0ad4
  03d0914  lbz 3, 35(31)
  03d0918  cmpwi 3, 8
  03d091c  bt 0, 0x3d092c
  03d0920  addic 3, 3, -8
  03d0924  stb 3, 35(31)
  03d0928  b 0x3d0ad4
  03d092c  ori 3, 31, 0
  03d0930  bl 0x3cd410
  03d0934  cmpwi 3, 0
  03d0938  stw 3, 636(30)
  03d093c  bt 2, 0x3d0a18
  03d0940  lis 6, 132
  03d0944  ori 3, 31, 0
  03d0948  li 4, 0
  03d094c  li 5, 1
  03d0950  lwz 6, 25660(6)
  03d0954  extsw 6, 6
  03d0958  bl 0x3cd150
  03d095c  lis 6, 132
  03d0960  ori 3, 31, 0
  03d0964  li 4, 2
  03d0968  li 5, 3
  03d096c  lwz 6, 25656(6)
  03d0970  extsw 6, 6
  03d0974  bl 0x3cd150
  03d0978  lis 29, 132
  03d097c  ori 3, 31, 0
  03d0980  li 4, 4
  03d0984  li 5, 5
  03d0988  lwz 6, 25664(29)
  03d098c  extsw 6, 6
  03d0990  bl 0x3cd150
  03d0994  lwz 6, 25664(29)
  03d0998  ori 3, 31, 0
  03d099c  extsw 6, 6
  03d09a0  li 4, 6
  03d09a4  li 5, 7
  03d09a8  bl 0x3cd150
  03d09ac  lis 6, 132
  03d09b0  ori 3, 31, 0
  03d09b4  li 4, 8
  03d09b8  li 5, 9
  03d09bc  lwz 6, 25668(6)
  03d09c0  extsw 6, 6
  03d09c4  bl 0x3cd150
  03d09c8  li 3, 128
  03d09cc  li 4, 26
  03d09d0  stb 3, 35(31)
  03d09d4  stb 4, 32(31)
  03d09d8  lfs 1, 544(30)
  03d09dc  lis 3, 61
  03d09e0  stfs 1, 16(31)
  03d09e4  addi 3, 3, -6676
  03d09e8  lfs 1, 548(30)
  03d09ec  stfs 1, 20(31)
  03d09f0  lfs 1, 552(30)
  03d09f4  stfs 1, 24(31)
  03d09f8  lfs 2, 556(30)
  03d09fc  stfs 2, 28(31)
  03d0a00  lfs 2, 8(3)
  03d0a04  li 3, 0
  03d0a08  fsubs 1, 1, 2
  03d0a0c  stw 3, 148(31)
  03d0a10  stfs 1, 24(31)
  03d0a14  b 0x3d0ad4
  03d0a18  lis 6, 132
  03d0a1c  ori 3, 31, 0
  03d0a20  li 4, 0
  03d0a24  li 5, 1
  03d0a28  lwz 6, 25660(6)
  03d0a2c  extsw 6, 6
  03d0a30  bl 0x3cd150
  03d0a34  lis 6, 132
  03d0a38  ori 3, 31, 0
  03d0a3c  li 4, 2
  03d0a40  li 5, 3
  03d0a44  lwz 6, 25656(6)
  03d0a48  extsw 6, 6
  03d0a4c  bl 0x3cd150
  03d0a50  lis 30, 132
  03d0a54  ori 3, 31, 0
  03d0a58  li 4, 4
  03d0a5c  li 5, 5
  03d0a60  lwz 6, 25664(30)
  03d0a64  extsw 6, 6
  03d0a68  bl 0x3cd150
  03d0a6c  lwz 6, 25664(30)
  03d0a70  ori 3, 31, 0
  03d0a74  li 4, 6
  03d0a78  extsw 6, 6
  03d0a7c  li 5, 7
  03d0a80  bl 0x3cd150
  03d0a84  lis 6, 132
  03d0a88  ori 3, 31, 0
  03d0a8c  li 4, 8
  03d0a90  li 5, 9
  03d0a94  lwz 6, 25668(6)
  03d0a98  extsw 6, 6
  03d0a9c  bl 0x3cd150
  03d0aa0  ori 3, 31, 0
  03d0aa4  bl 0xefb38
  03d0aa8  nop
  03d0aac  b 0x3d0ad4
  03d0ab0  ori 3, 31, 0
  03d0ab4  bl 0x3cd410
  03d0ab8  cmpwi 3, 0
  03d0abc  stw 3, 636(30)
  03d0ac0  bf 2, 0x3d0ad4
  03d0ac4  ori 3, 31, 0
  03d0ac8  bl 0xefb38
  03d0acc  nop
  03d0ad0  b 0x3d0ad4
  03d0ad4  ld 0, 544(1)
  03d0ad8  mtlr 0
  03d0adc  lfd 26, 480(1)
  03d0ae0  lfd 27, 488(1)
  03d0ae4  lfd 28, 496(1)
  03d0ae8  lfd 29, 504(1)
  03d0aec  lfd 30, 512(1)
  03d0af0  lfd 31, 520(1)
  03d0af4  ld 25, 424(1)
  03d0af8  ld 26, 432(1)
  03d0afc  ld 27, 440(1)
  03d0b00  ld 28, 448(1)
  03d0b04  ld 29, 456(1)
  03d0b08  ld 30, 464(1)
  03d0b0c  ld 31, 472(1)
  03d0b10  addi 1, 1, 528
  03d0b14  blr
