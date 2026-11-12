# game/update/moby439.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M439_0037af90:   # 0x37af90, 0x14 bytes
  037af90  lis 3, 132
  037af94  lis 4, 1
  037af98  addic 3, 3, 6516
  037af9c  stw 4, 72(3)
  037afa0  blr

FUN_0037afa8:   # 0x37afa8, 0xbc bytes
  037afa8  stdu 1, -128(1)
  037afac  mflr 0
  037afb0  std 0, 144(1)
  037afb4  std 31, 120(1)
  037afb8  ori 31, 3, 0
  037afbc  std 30, 112(1)
  037afc0  li 3, 439
  037afc4  bl 0xefa28
  037afc8  nop
  037afcc  ori 30, 3, 0
  037afd0  cmpwi 30, 0
  037afd4  bt 2, 0x37b048
  037afd8  li 3, 255
  037afdc  li 4, 1
  037afe0  li 5, 2
  037afe4  stb 3, 48(30)
  037afe8  sth 3, 50(30)
  037afec  stb 4, 49(30)
  037aff0  lfs 1, 16(31)
  037aff4  ori 3, 30, 0
  037aff8  stb 5, 32(30)
  037affc  lfs 2, 20(31)
  037b000  stfs 1, 16(30)
  037b004  lfs 1, 24(31)
  037b008  stfs 2, 20(30)
  037b00c  lfs 2, 28(31)
  037b010  stfs 1, 24(30)
  037b014  lfs 1, 64(31)
  037b018  stfs 2, 28(30)
  037b01c  lfs 2, 68(31)
  037b020  stfs 1, 64(30)
  037b024  lfs 1, 72(31)
  037b028  stfs 2, 68(30)
  037b02c  lfs 2, 76(31)
  037b030  stfs 1, 72(30)
  037b034  ld 4, 56(31)
  037b038  stfs 2, 76(30)
  037b03c  std 4, 56(30)
  037b040  bl 0xf31a8
  037b044  nop
  037b048  ori 3, 30, 0
  037b04c  ld 0, 144(1)
  037b050  mtlr 0
  037b054  ld 30, 112(1)
  037b058  ld 31, 120(1)
  037b05c  addi 1, 1, 128
  037b060  blr

UpdateMoby_439:   # 0x37b090, 0x4d8 bytes
  037b090  stdu 1, -256(1)
  037b094  mflr 0
  037b098  std 0, 272(1)
  037b09c  stfd 28, 224(1)
  037b0a0  stfd 29, 232(1)
  037b0a4  stfd 30, 240(1)
  037b0a8  stfd 31, 248(1)
  037b0ac  std 31, 216(1)
  037b0b0  lbz 4, 32(3)
  037b0b4  std 30, 208(1)
  037b0b8  ori 31, 3, 0
  037b0bc  lwz 30, 120(3)
  037b0c0  cmpwi 4, 0
  037b0c4  cmpwi 1, 4, 1
  037b0c8  std 29, 200(1)
  037b0cc  std 28, 192(1)
  037b0d0  std 27, 184(1)
  037b0d4  std 26, 176(1)
  037b0d8  cmpwi 6, 4, -1
  037b0dc  bt 1, 0x37b0e8
  037b0e0  bf 25, 0x37b2ac
  037b0e4  b 0x37b0f0
  037b0e8  bf 5, 0x37b1c0
  037b0ec  b 0x37b2ac
  037b0f0  lis 3, 151
  037b0f4  lfs 1, 20(31)
  037b0f8  addic 3, 3, -25376
  037b0fc  lis 4, 56
  037b100  lfs 2, 132(3)
  037b104  lfs 3, 128(3)
  037b108  fsubs 1, 2, 1
  037b10c  lfs 2, 16(31)
  037b110  fsubs 2, 3, 2
  037b114  lfs 3, 136(3)
  037b118  lfs 4, 24(31)
  037b11c  fsubs 3, 3, 4
  037b120  fmuls 1, 1, 1
  037b124  addi 4, 4, -20380
  037b128  fmadds 1, 2, 2, 1
  037b12c  lfs 2, 0(4)
  037b130  fmadds 1, 3, 3, 1
  037b134  fsqrts 1, 1
  037b138  fcmpu 0, 1, 2
  037b13c  cror 6, 1, 2
  037b140  bt 6, 0x37b2ac
  037b144  lis 4, 161
  037b148  lwz 4, 1808(4)
  037b14c  cmpwi 4, 3
  037b150  bf 1, 0x37b2ac
  037b154  lwz 4, 8332(3)
  037b158  cmpwi 1, 4, 22
  037b15c  cmpwi 4, 21
  037b160  cror 2, 2, 6
  037b164  bt 2, 0x37b2ac
  037b168  ori 5, 3, 0
  037b16c  li 3, 107
  037b170  li 4, 1
  037b174  stw 31, 2156(5)
  037b178  bl 0xb72b0
  037b17c  nop
  037b180  lwz 3, 80(30)
  037b184  cmpwi 3, 0
  037b188  bf 2, 0x37b1ac
  037b18c  lfs 1, 16(31)
  037b190  stfs 1, 16(30)
  037b194  lfs 1, 20(31)
  037b198  stfs 1, 20(30)
  037b19c  lfs 1, 24(31)
  037b1a0  stfs 1, 24(30)
  037b1a4  lfs 1, 28(31)
  037b1a8  stfs 1, 28(30)
  037b1ac  li 3, 1
  037b1b0  li 4, 255
  037b1b4  stb 3, 32(31)
  037b1b8  stb 4, 48(31)
  037b1bc  b 0x37b2ac
  037b1c0  lwz 3, 80(30)
  037b1c4  cmpwi 3, 0
  037b1c8  bf 2, 0x37b25c
  037b1cc  lis 3, 151
  037b1d0  lbz 3, -16400(3)
  037b1d4  cmpwi 3, 0
  037b1d8  bt 2, 0x37b25c
  037b1dc  lis 3, 161
  037b1e0  addic 3, 3, -276
  037b1e4  lhz 3, 240(3)
  037b1e8  cmpwi 3, 0
  037b1ec  bf 2, 0x37b25c
  037b1f0  lis 3, 162
  037b1f4  lwz 3, -22428(3)
  037b1f8  cmpwi 3, 0
  037b1fc  bt 2, 0x37b25c
  037b200  lis 3, 56
  037b204  lis 4, 114
  037b208  addi 3, 3, -20380
  037b20c  lis 5, 151
  037b210  lfs 1, 4(3)
  037b214  lfs 2, -3056(4)
  037b218  addic 3, 5, -25376
  037b21c  fmuls 1, 2, 1
  037b220  lwz 3, 412(3)
  037b224  fctiwz 1, 1
  037b228  stfd 1, 160(1)
  037b22c  lwz 4, 164(1)
  037b230  cmpw 3, 4
  037b234  bf 1, 0x37b25c
  037b238  lis 3, 161
  037b23c  addic 3, 3, 12
  037b240  lhz 3, 760(3)
  037b244  cmpwi 3, 0
  037b248  bf 2, 0x37b25c
  037b24c  li 3, 5007
  037b250  li 4, 95
  037b254  bl 0x7b310
  037b258  nop
  037b25c  lis 3, 151
  037b260  addic 3, 3, -25376
  037b264  lwz 3, 8332(3)
  037b268  cmpwi 3, 22
  037b26c  bt 2, 0x37b2ac
  037b270  li 3, 16
  037b274  stb 3, 48(31)
  037b278  lwz 3, 80(30)
  037b27c  cmpwi 3, 0
  037b280  bf 2, 0x37b2a4
  037b284  lfs 1, 16(30)
  037b288  stfs 1, 16(31)
  037b28c  lfs 1, 20(30)
  037b290  stfs 1, 20(31)
  037b294  lfs 1, 24(30)
  037b298  stfs 1, 24(31)
  037b29c  lfs 1, 28(30)
  037b2a0  stfs 1, 28(31)
  037b2a4  li 3, 0
  037b2a8  stb 3, 32(31)
  037b2ac  lfs 29, 20(31)
  037b2b0  lfs 1, 4(30)
  037b2b4  lfs 2, 16(31)
  037b2b8  fsubs 29, 29, 1
  037b2bc  lfs 28, 0(30)
  037b2c0  lfs 30, 24(31)
  037b2c4  lfs 1, 8(30)
  037b2c8  fsubs 28, 2, 28
  037b2cc  lfs 31, 28(31)
  037b2d0  fsubs 30, 30, 1
  037b2d4  stfs 2, 0(30)
  037b2d8  lfs 2, 20(31)
  037b2dc  stfs 2, 4(30)
  037b2e0  lfs 2, 24(31)
  037b2e4  fmuls 1, 29, 29
  037b2e8  stfs 2, 8(30)
  037b2ec  lfs 2, 28(31)
  037b2f0  stfs 2, 12(30)
  037b2f4  lbz 3, 188(31)
  037b2f8  cmpwi 3, 2
  037b2fc  fmadds 1, 28, 28, 1
  037b300  fmadds 1, 30, 30, 1
  037b304  fsqrts 1, 1
  037b308  bt 2, 0x37b528
  037b30c  lis 3, 56
  037b310  addi 3, 3, -20380
  037b314  lfs 2, 8(3)
  037b318  fcmpu 0, 1, 2
  037b31c  cror 6, 1, 2
  037b320  bt 6, 0x37b528
  037b324  lis 4, 161
  037b328  ori 3, 31, 0
  037b32c  addic 5, 1, 112
  037b330  lwz 4, 1808(4)
  037b334  clrlwi 4, 4, 31
  037b338  bl 0xf1114
  037b33c  nop
  037b340  bl 0xfcc68
  037b344  nop
  037b348  lis 3, 132
  037b34c  lbz 5, 188(31)
  037b350  li 4, 6668
  037b354  stfs 28, 128(1)
  037b358  li 6, 140
  037b35c  cmpwi 5, 0
  037b360  lvlx 2, 4, 3
  037b364  stfs 29, 132(1)
  037b368  vcfsx 2, 2, 0
  037b36c  stfs 30, 136(1)
  037b370  vspltw 2, 2, 0
  037b374  stvewx 2, 6, 1
  037b378  bf 2, 0x37b408
  037b37c  lis 3, 56
  037b380  lis 4, 114
  037b384  addi 3, 3, -20380
  037b388  lis 5, 132
  037b38c  lfs 1, 12(3)
  037b390  lfs 2, -3056(4)
  037b394  lis 4, 132
  037b398  fmuls 1, 2, 1
  037b39c  lwz 4, 6640(4)
  037b3a0  lwz 5, 6644(5)
  037b3a4  extsw 30, 4
  037b3a8  extsw 29, 5
  037b3ac  fctiwz 1, 1
  037b3b0  stfd 1, 160(1)
  037b3b4  lfs 1, 16(3)
  037b3b8  lwz 3, 164(1)
  037b3bc  fmuls 1, 2, 1
  037b3c0  extsw 3, 3
  037b3c4  fctiwz 1, 1
  037b3c8  stfd 1, 160(1)
  037b3cc  lwz 4, 164(1)
  037b3d0  extsw 4, 4
  037b3d4  bl 0xfe484
  037b3d8  nop
  037b3dc  ori 7, 3, 0
  037b3e0  addic 4, 1, 128
  037b3e4  li 9, 15
  037b3e8  addic 3, 1, 112
  037b3ec  ori 5, 30, 0
  037b3f0  ori 6, 29, 0
  037b3f4  li 8, 15
  037b3f8  li 10, 1
  037b3fc  bl 0x121740
  037b400  nop
  037b404  b 0x37b528
  037b408  lis 3, 56
  037b40c  lis 29, 114
  037b410  addi 30, 3, -20380
  037b414  lis 28, 132
  037b418  lfs 1, 20(30)
  037b41c  stfs 31, 156(1)
  037b420  fmuls 2, 28, 1
  037b424  lfs 4, -3056(29)
  037b428  fmuls 3, 29, 1
  037b42c  fmuls 1, 30, 1
  037b430  stfs 2, 144(1)
  037b434  stfs 3, 148(1)
  037b438  stfs 1, 152(1)
  037b43c  lfs 1, 24(30)
  037b440  lwz 3, 6644(28)
  037b444  fmuls 1, 4, 1
  037b448  extsw 27, 3
  037b44c  fctiwz 1, 1
  037b450  stfd 1, 160(1)
  037b454  lfs 1, 28(30)
  037b458  lwz 3, 164(1)
  037b45c  fmuls 1, 4, 1
  037b460  extsw 3, 3
  037b464  fctiwz 1, 1
  037b468  stfd 1, 160(1)
  037b46c  lwz 4, 164(1)
  037b470  extsw 4, 4
  037b474  bl 0xfe484
  037b478  nop
  037b47c  addic 26, 1, 112
  037b480  lis 5, 20530
  037b484  ori 7, 3, 0
  037b488  ori 6, 27, 0
  037b48c  li 8, 30
  037b490  ori 3, 26, 0
  037b494  li 9, 20
  037b498  addic 4, 1, 144
  037b49c  ori 5, 5, 61650
  037b4a0  li 10, 1
  037b4a4  bl 0x121740
  037b4a8  nop
  037b4ac  lfs 1, 36(30)
  037b4b0  lfs 2, -3056(29)
  037b4b4  lis 3, 132
  037b4b8  lfs 3, 32(30)
  037b4bc  fmuls 1, 2, 1
  037b4c0  lwz 4, 6644(28)
  037b4c4  fmr 31, 3
  037b4c8  lwz 3, 6640(3)
  037b4cc  extsw 29, 4
  037b4d0  extsw 28, 3
  037b4d4  fctiwz 1, 1
  037b4d8  stfd 1, 160(1)
  037b4dc  lfs 1, 40(30)
  037b4e0  lwz 3, 164(1)
  037b4e4  fmuls 1, 2, 1
  037b4e8  extsw 3, 3
  037b4ec  fctiwz 1, 1
  037b4f0  stfd 1, 160(1)
  037b4f4  lwz 4, 164(1)
  037b4f8  extsw 4, 4
  037b4fc  bl 0xfe484
  037b500  nop
  037b504  ori 8, 3, 0
  037b508  addic 4, 1, 128
  037b50c  fmr 1, 31
  037b510  li 9, 1
  037b514  ori 3, 26, 0
  037b518  ori 5, 28, 0
  037b51c  ori 6, 29, 0
  037b520  bl 0x1268f8
  037b524  nop
  037b528  li 3, 0
  037b52c  stb 3, 188(31)
  037b530  ld 0, 272(1)
  037b534  mtlr 0
  037b538  lfd 28, 224(1)
  037b53c  lfd 29, 232(1)
  037b540  lfd 30, 240(1)
  037b544  lfd 31, 248(1)
  037b548  ld 26, 176(1)
  037b54c  ld 27, 184(1)
  037b550  ld 28, 192(1)
  037b554  ld 29, 200(1)
  037b558  ld 30, 208(1)
  037b55c  ld 31, 216(1)
  037b560  addi 1, 1, 256
  037b564  blr

M439_0037b568:   # 0x37b568, 0x14 bytes
  037b568  lis 3, 132
  037b56c  lis 4, 1
  037b570  addic 3, 3, 6680
  037b574  stw 4, 72(3)
  037b578  blr

M44_0037b5b0:   # 0x37b5b0, 0x618 bytes
  037b5b0  stdu 1, -272(1)
  037b5b4  mflr 0
  037b5b8  std 0, 288(1)
  037b5bc  stfd 26, 224(1)
  037b5c0  stfd 27, 232(1)
  037b5c4  stfd 28, 240(1)
  037b5c8  stfd 29, 248(1)
  037b5cc  stfd 30, 256(1)
  037b5d0  stfd 31, 264(1)
  037b5d4  std 30, 208(1)
  037b5d8  std 31, 216(1)
  037b5dc  lwz 30, 120(3)
  037b5e0  std 29, 200(1)
  037b5e4  ori 31, 3, 0
  037b5e8  lbz 29, 32(3)
  037b5ec  lhz 3, 404(30)
  037b5f0  cmpwi 3, 0
  037b5f4  bt 2, 0x37b614
  037b5f8  lwz 3, 400(30)
  037b5fc  cmpwi 3, 0
  037b600  bt 2, 0x37b614
  037b604  lfs 29, 16(3)
  037b608  lfs 28, 20(3)
  037b60c  lfs 31, 24(3)
  037b610  b 0x37b654
  037b614  lhz 3, 412(30)
  037b618  cmpwi 3, 0
  037b61c  bt 2, 0x37b63c
  037b620  lwz 3, 408(30)
  037b624  cmpwi 3, 0
  037b628  bt 2, 0x37b63c
  037b62c  lfs 29, 16(3)
  037b630  lfs 28, 20(3)
  037b634  lfs 31, 24(3)
  037b638  b 0x37b654
  037b63c  lbz 3, 415(30)
  037b640  cmpwi 3, 0
  037b644  bt 2, 0x37ba9c
  037b648  lfs 29, 256(30)
  037b64c  lfs 28, 260(30)
  037b650  lfs 31, 264(30)
  037b654  lfs 1, 16(31)
  037b658  lis 3, 56
  037b65c  lfs 2, 20(31)
  037b660  fsubs 29, 29, 1
  037b664  fsubs 28, 28, 2
  037b668  addi 3, 3, -19072
  037b66c  lis 29, 115
  037b670  addic 29, 29, 22784
  037b674  lfs 30, 0(3)
  037b678  fabs 3, 29
  037b67c  fabs 4, 28
  037b680  stfs 29, 124(1)
  037b684  stfs 28, 128(1)
  037b688  lfs 1, 24(31)
  037b68c  fadds 30, 1, 30
  037b690  fsubs 2, 3, 4
  037b694  stfs 2, 132(1)
  037b698  lwz 4, 124(1)
  037b69c  lfs 26, 4(3)
  037b6a0  lfs 2, 124(1)
  037b6a4  lwz 5, 128(1)
  037b6a8  lfs 1, 128(1)
  037b6ac  lfs 27, 8(3)
  037b6b0  fabs 2, 2
  037b6b4  fabs 5, 1
  037b6b8  rlwinm 5, 5, 3, 29, 29
  037b6bc  lwz 3, 132(1)
  037b6c0  lfs 1, 132(1)
  037b6c4  rlwimi 5, 3, 2, 30, 30
  037b6c8  fsub 6, 1, 26
  037b6cc  fsub 7, 1, 26
  037b6d0  rlwimi 5, 4, 4, 28, 28
  037b6d4  ori 3, 29, 0
  037b6d8  slwi 4, 5, 2
  037b6dc  rlwimi 3, 5, 2, 26, 28
  037b6e0  clrldi 3, 3, 32
  037b6e4  lfsx 1, 29, 4
  037b6e8  fsel 4, 6, 2, 4
  037b6ec  fsel 3, 7, 5, 3
  037b6f0  lfs 2, 4(3)
  037b6f4  fcmpu 0, 4, 26
  037b6f8  bt 1, 0x37b704
  037b6fc  fmr 1, 26
  037b700  b 0x37b81c
  037b704  fsubs 5, 3, 4
  037b708  fadds 3, 3, 4
  037b70c  addic 3, 1, 16
  037b710  li 7, 2
  037b714  addic 4, 3, 152
  037b718  addic 5, 3, 168
  037b71c  mtctr 7
  037b720  fdivs 3, 5, 3
  037b724  fmuls 4, 3, 3
  037b728  stfs 3, 180(1)
  037b72c  stfs 3, 172(1)
  037b730  stfs 3, 176(1)
  037b734  stfs 3, 168(1)
  037b738  lfs 6, 180(1)
  037b73c  lfs 7, 172(1)
  037b740  lfs 8, 176(1)
  037b744  fmuls 5, 4, 4
  037b748  fmuls 7, 7, 4
  037b74c  fmuls 6, 6, 5
  037b750  fmuls 3, 5, 5
  037b754  fmuls 5, 8, 5
  037b758  stfs 7, 172(1)
  037b75c  fmuls 4, 6, 4
  037b760  stfs 5, 176(1)
  037b764  stfs 4, 180(1)
  037b768  lfs 4, 152(3)
  037b76c  fmuls 4, 4, 3
  037b770  stfs 4, 168(3)
  037b774  lfs 4, 4(4)
  037b778  addic 3, 3, 8
  037b77c  addic 4, 4, 8
  037b780  fmuls 4, 4, 3
  037b784  stfs 4, 4(5)
  037b788  addic 5, 5, 8
  037b78c  bdnz 0x37b768
  037b790  li 5, 4
  037b794  ori 3, 1, 0
  037b798  mtctr 5
  037b79c  lis 4, 115
  037b7a0  addic 5, 3, 168
  037b7a4  addic 4, 4, 22752
  037b7a8  ori 6, 5, 0
  037b7ac  lfs 3, 168(3)
  037b7b0  lfs 4, 0(4)
  037b7b4  fmuls 3, 3, 4
  037b7b8  lfs 4, 4(4)
  037b7bc  addic 4, 4, 8
  037b7c0  stfs 3, 168(3)
  037b7c4  lfs 3, 4(5)
  037b7c8  addic 3, 3, 8
  037b7cc  fmuls 3, 3, 4
  037b7d0  stfs 3, 4(5)
  037b7d4  addic 5, 5, 8
  037b7d8  bdnz 0x37b7ac
  037b7dc  fmr 3, 26
  037b7e0  ori 3, 1, 0
  037b7e4  mtctr 7
  037b7e8  lfs 4, 168(3)
  037b7ec  fadds 3, 3, 4
  037b7f0  addic 3, 3, 16
  037b7f4  lfs 4, 4(6)
  037b7f8  lfs 5, 8(6)
  037b7fc  lfs 6, 12(6)
  037b800  addic 6, 6, 16
  037b804  fadds 3, 3, 4
  037b808  fadds 3, 3, 5
  037b80c  fadds 3, 3, 6
  037b810  bdnz 0x37b7e8
  037b814  fadds 3, 3, 27
  037b818  fmadds 1, 3, 1, 2
  037b81c  lfs 2, 72(31)
  037b820  bl 0x5025e0
  037b824  nop
  037b828  fmuls 2, 28, 28
  037b82c  fsubs 3, 31, 30
  037b830  fmadds 2, 29, 29, 2
  037b834  fabs 4, 3
  037b838  stfs 3, 116(1)
  037b83c  lbz 3, 32(31)
  037b840  fsqrts 2, 2
  037b844  fabs 3, 2
  037b848  stfs 2, 112(1)
  037b84c  lwz 4, 116(1)
  037b850  rlwinm 4, 4, 3, 29, 29
  037b854  fsubs 2, 3, 4
  037b858  stfs 2, 120(1)
  037b85c  lwz 5, 112(1)
  037b860  lfs 2, 112(1)
  037b864  lfs 5, 116(1)
  037b868  lwz 6, 120(1)
  037b86c  lfs 6, 120(1)
  037b870  fabs 2, 2
  037b874  rlwimi 4, 6, 2, 30, 30
  037b878  fabs 5, 5
  037b87c  fsub 7, 6, 26
  037b880  ori 6, 29, 0
  037b884  fsub 6, 6, 26
  037b888  rlwimi 4, 5, 4, 28, 28
  037b88c  rlwimi 6, 4, 2, 26, 28
  037b890  slwi 5, 4, 2
  037b894  clrldi 4, 6, 32
  037b898  lfsx 31, 29, 5
  037b89c  fsel 4, 7, 2, 4
  037b8a0  ori 29, 3, 0
  037b8a4  lfs 2, 4(4)
  037b8a8  fsel 3, 6, 5, 3
  037b8ac  fcmpu 0, 4, 26
  037b8b0  bt 1, 0x37b8b8
  037b8b4  b 0x37b9cc
  037b8b8  fsubs 5, 3, 4
  037b8bc  fadds 3, 3, 4
  037b8c0  addic 3, 1, 16
  037b8c4  li 7, 2
  037b8c8  addic 5, 3, 136
  037b8cc  addic 4, 3, 120
  037b8d0  mtctr 7
  037b8d4  fdivs 3, 5, 3
  037b8d8  fmuls 4, 3, 3
  037b8dc  stfs 3, 148(1)
  037b8e0  stfs 3, 140(1)
  037b8e4  stfs 3, 144(1)
  037b8e8  stfs 3, 136(1)
  037b8ec  lfs 6, 148(1)
  037b8f0  lfs 7, 140(1)
  037b8f4  lfs 8, 144(1)
  037b8f8  fmuls 5, 4, 4
  037b8fc  fmuls 7, 7, 4
  037b900  fmuls 6, 6, 5
  037b904  fmuls 3, 5, 5
  037b908  fmuls 5, 8, 5
  037b90c  stfs 7, 140(1)
  037b910  fmuls 4, 6, 4
  037b914  stfs 5, 144(1)
  037b918  stfs 4, 148(1)
  037b91c  lfs 4, 120(3)
  037b920  fmuls 4, 4, 3
  037b924  stfs 4, 136(3)
  037b928  lfs 4, 4(4)
  037b92c  addic 4, 4, 8
  037b930  fmuls 4, 4, 3
  037b934  addic 3, 3, 8
  037b938  stfs 4, 4(5)
  037b93c  addic 5, 5, 8
  037b940  bdnz 0x37b91c
  037b944  li 5, 4
  037b948  ori 3, 1, 0
  037b94c  mtctr 5
  037b950  lis 4, 115
  037b954  addic 5, 3, 136
  037b958  addic 4, 4, 22752
  037b95c  ori 6, 5, 0
  037b960  lfs 3, 136(3)
  037b964  lfs 4, 0(4)
  037b968  fmuls 3, 3, 4
  037b96c  lfs 4, 4(4)
  037b970  addic 4, 4, 8
  037b974  stfs 3, 136(3)
  037b978  lfs 3, 4(5)
  037b97c  addic 3, 3, 8
  037b980  fmuls 3, 3, 4
  037b984  stfs 3, 4(5)
  037b988  addic 5, 5, 8
  037b98c  bdnz 0x37b960
  037b990  ori 3, 1, 0
  037b994  mtctr 7
  037b998  lfs 3, 136(3)
  037b99c  lfs 4, 4(6)
  037b9a0  fadds 3, 26, 3
  037b9a4  lfs 5, 8(6)
  037b9a8  addic 3, 3, 16
  037b9ac  lfs 26, 12(6)
  037b9b0  addic 6, 6, 16
  037b9b4  fadds 3, 3, 4
  037b9b8  fadds 3, 3, 5
  037b9bc  fadds 26, 3, 26
  037b9c0  bdnz 0x37b998
  037b9c4  fadds 26, 26, 27
  037b9c8  fmadds 26, 26, 31, 2
  037b9cc  cmpwi 29, 16
  037b9d0  fneg 26, 26
  037b9d4  cmpwi 1, 29, 17
  037b9d8  bt 2, 0x37b9e0
  037b9dc  bf 6, 0x37ba20
  037b9e0  lis 3, 56
  037b9e4  addi 3, 3, -19072
  037b9e8  lfs 2, 12(3)
  037b9ec  fcmpu 0, 1, 2
  037b9f0  cror 6, 0, 2
  037b9f4  bt 6, 0x37ba00
  037b9f8  fmr 1, 2
  037b9fc  b 0x37ba5c
  037ba00  lis 3, 56
  037ba04  addi 3, 3, -19072
  037ba08  lfs 2, 16(3)
  037ba0c  fcmpu 0, 1, 2
  037ba10  cror 6, 1, 2
  037ba14  bt 6, 0x37ba5c
  037ba18  fmr 1, 2
  037ba1c  b 0x37ba5c
  037ba20  lis 3, 56
  037ba24  addi 3, 3, -19072
  037ba28  lfs 2, 20(3)
  037ba2c  fcmpu 0, 1, 2
  037ba30  cror 6, 0, 2
  037ba34  bt 6, 0x37ba40
  037ba38  fmr 1, 2
  037ba3c  b 0x37ba5c
  037ba40  lis 3, 56
  037ba44  addi 3, 3, -19072
  037ba48  lfs 2, 24(3)
  037ba4c  fcmpu 0, 1, 2
  037ba50  cror 6, 1, 2
  037ba54  bt 6, 0x37ba5c
  037ba58  fmr 1, 2
  037ba5c  lis 3, 56
  037ba60  addi 3, 3, -19072
  037ba64  lfs 2, 28(3)
  037ba68  fcmpu 0, 26, 2
  037ba6c  cror 6, 0, 2
  037ba70  bt 6, 0x37ba7c
  037ba74  fmr 26, 2
  037ba78  b 0x37baac
  037ba7c  lis 3, 56
  037ba80  addi 3, 3, -19072
  037ba84  lfs 2, 32(3)
  037ba88  fcmpu 0, 26, 2
  037ba8c  cror 6, 1, 2
  037ba90  bt 6, 0x37baac
  037ba94  fmr 26, 2
  037ba98  b 0x37baac
  037ba9c  lis 3, 56
  037baa0  addi 3, 3, -19072
  037baa4  lfs 1, 4(3)
  037baa8  fmr 26, 1
  037baac  cmpwi 29, 16
  037bab0  cmpwi 1, 29, 17
  037bab4  bt 2, 0x37babc
  037bab8  bf 6, 0x37bb1c
  037babc  lis 3, 56
  037bac0  stfs 1, 648(30)
  037bac4  addi 3, 3, -19072
  037bac8  lfs 2, 20(3)
  037bacc  fcmpu 0, 1, 2
  037bad0  cror 6, 0, 2
  037bad4  bt 6, 0x37bae8
  037bad8  lis 3, 16262
  037badc  ori 3, 3, 2706
  037bae0  stw 3, 648(30)
  037bae4  b 0x37bb14
  037bae8  fmr 2, 1
  037baec  lis 3, 56
  037baf0  addi 3, 3, -19072
  037baf4  lfs 3, 24(3)
  037baf8  fcmpu 0, 2, 3
  037bafc  cror 6, 1, 2
  037bb00  bt 6, 0x37bb14
  037bb04  lis 3, -16506
  037bb08  fmr 2, 3
  037bb0c  ori 3, 3, 2706
  037bb10  stw 3, 648(30)
  037bb14  fsubs 1, 1, 2
  037bb18  b 0x37bb38
  037bb1c  lis 3, 56
  037bb20  addi 3, 3, -19072
  037bb24  lfs 2, 40(3)
  037bb28  lfs 3, 36(3)
  037bb2c  fmuls 2, 1, 2
  037bb30  fmuls 1, 1, 3
  037bb34  stfs 2, 648(30)
  037bb38  lis 3, 56
  037bb3c  lis 29, 114
  037bb40  stfs 1, 520(30)
  037bb44  addi 3, 3, -19072
  037bb48  stfs 26, 516(30)
  037bb4c  addic 4, 30, 416
  037bb50  li 5, 1
  037bb54  lfs 31, 44(3)
  037bb58  lfs 30, 40(3)
  037bb5c  lfs 2, -3060(29)
  037bb60  ori 3, 31, 0
  037bb64  fmuls 1, 2, 31
  037bb68  fmuls 2, 2, 30
  037bb6c  bl 0x1167c8
  037bb70  nop
  037bb74  lfs 2, -3060(29)
  037bb78  addic 4, 30, 544
  037bb7c  ori 3, 31, 0
  037bb80  fmuls 1, 2, 31
  037bb84  li 5, 0
  037bb88  fmuls 2, 2, 30
  037bb8c  bl 0x1167c8
  037bb90  nop
  037bb94  ld 0, 288(1)
  037bb98  mtlr 0
  037bb9c  lfd 26, 224(1)
  037bba0  lfd 27, 232(1)
  037bba4  lfd 28, 240(1)
  037bba8  lfd 29, 248(1)
  037bbac  lfd 30, 256(1)
  037bbb0  lfd 31, 264(1)
  037bbb4  ld 29, 200(1)
  037bbb8  ld 30, 208(1)
  037bbbc  ld 31, 216(1)
  037bbc0  addi 1, 1, 272
  037bbc4  blr

M44_0037bbe8:   # 0x37bbe8, 0x278 bytes
  037bbe8  stdu 1, -192(1)
  037bbec  mflr 0
  037bbf0  std 0, 208(1)
  037bbf4  stfd 31, 184(1)
  037bbf8  std 28, 152(1)
  037bbfc  fmr 31, 1
  037bc00  std 27, 144(1)
  037bc04  ori 28, 3, 0
  037bc08  lis 3, 56
  037bc0c  std 31, 176(1)
  037bc10  li 27, 1
  037bc14  std 30, 168(1)
  037bc18  ori 31, 7, 0
  037bc1c  ori 30, 6, 0
  037bc20  std 29, 160(1)
  037bc24  lfs 1, 72(28)
  037bc28  std 26, 136(1)
  037bc2c  ori 29, 4, 0
  037bc30  addi 26, 3, -17464
  037bc34  fmr 2, 31
  037bc38  bl 0x5025e0
  037bc3c  nop
  037bc40  fneg 1, 1
  037bc44  li 3, 0
  037bc48  lfs 2, 72(28)
  037bc4c  stfs 31, 372(29)
  037bc50  stfs 2, 368(29)
  037bc54  stw 3, 324(29)
  037bc58  stb 30, 348(29)
  037bc5c  stb 31, 349(29)
  037bc60  stfs 1, 376(29)
  037bc64  lfs 2, 0(26)
  037bc68  fcmpu 0, 1, 2
  037bc6c  bt 1, 0x37bc88
  037bc70  lis 3, 56
  037bc74  addi 3, 3, -17464
  037bc78  lfs 2, 4(3)
  037bc7c  fcmpu 0, 1, 2
  037bc80  cror 6, 1, 2
  037bc84  bt 6, 0x37bd08
  037bc88  lis 3, 56
  037bc8c  li 4, 8
  037bc90  addi 3, 3, -17464
  037bc94  stb 4, 32(28)
  037bc98  lfs 2, 8(3)
  037bc9c  fcmpu 0, 1, 2
  037bca0  cror 6, 0, 2
  037bca4  bt 6, 0x37bcbc
  037bca8  lis 3, 56
  037bcac  addi 3, 3, -17464
  037bcb0  lfs 2, 12(3)
  037bcb4  fadds 1, 1, 2
  037bcb8  stfs 1, 376(29)
  037bcbc  lbz 3, 83(28)
  037bcc0  cmpwi 3, 12
  037bcc4  bt 2, 0x37be30
  037bcc8  lis 3, 56
  037bccc  lis 4, 114
  037bcd0  addi 3, 3, -17464
  037bcd4  li 5, 0
  037bcd8  lfs 1, 16(3)
  037bcdc  lfs 2, -3056(4)
  037bce0  ori 3, 28, 0
  037bce4  li 4, 12
  037bce8  fmuls 1, 2, 1
  037bcec  fctiwz 1, 1
  037bcf0  stfd 1, 112(1)
  037bcf4  lwz 6, 116(1)
  037bcf8  extsw 6, 6
  037bcfc  bl 0xfddc0
  037bd00  nop
  037bd04  b 0x37be30
  037bd08  lis 3, 56
  037bd0c  addi 3, 3, -17464
  037bd10  lfs 2, 20(3)
  037bd14  fcmpu 0, 1, 2
  037bd18  cror 6, 1, 2
  037bd1c  bt 6, 0x37bd74
  037bd20  li 3, 6
  037bd24  lbz 4, 83(28)
  037bd28  cmpwi 4, 10
  037bd2c  stb 3, 32(28)
  037bd30  bt 2, 0x37be30
  037bd34  lis 3, 56
  037bd38  lis 4, 114
  037bd3c  addi 3, 3, -17464
  037bd40  li 5, 0
  037bd44  lfs 1, 16(3)
  037bd48  lfs 2, -3056(4)
  037bd4c  ori 3, 28, 0
  037bd50  fmuls 1, 2, 1
  037bd54  li 4, 10
  037bd58  fctiwz 1, 1
  037bd5c  stfd 1, 112(1)
  037bd60  lwz 6, 116(1)
  037bd64  extsw 6, 6
  037bd68  bl 0xfddc0
  037bd6c  nop
  037bd70  b 0x37be30
  037bd74  lis 3, 56
  037bd78  addi 3, 3, -17464
  037bd7c  lfs 2, 24(3)
  037bd80  fcmpu 0, 1, 2
  037bd84  cror 6, 0, 2
  037bd88  bt 6, 0x37bde0
  037bd8c  li 3, 7
  037bd90  lbz 4, 83(28)
  037bd94  cmpwi 4, 11
  037bd98  stb 3, 32(28)
  037bd9c  bt 2, 0x37be30
  037bda0  lis 3, 56
  037bda4  lis 4, 114
  037bda8  addi 3, 3, -17464
  037bdac  li 5, 0
  037bdb0  lfs 1, 16(3)
  037bdb4  lfs 2, -3056(4)
  037bdb8  ori 3, 28, 0
  037bdbc  li 4, 11
  037bdc0  fmuls 1, 2, 1
  037bdc4  fctiwz 1, 1
  037bdc8  stfd 1, 112(1)
  037bdcc  lwz 6, 116(1)
  037bdd0  extsw 6, 6
  037bdd4  bl 0xfddc0
  037bdd8  nop
  037bddc  b 0x37be30
  037bde0  lbz 3, 83(28)
  037bde4  stb 30, 32(28)
  037bde8  cmpw 3, 31
  037bdec  bt 2, 0x37be2c
  037bdf0  lis 3, 56
  037bdf4  lis 4, 114
  037bdf8  addi 3, 3, -17464
  037bdfc  li 5, 0
  037be00  lfs 1, 16(3)
  037be04  lfs 2, -3056(4)
  037be08  ori 3, 28, 0
  037be0c  ori 4, 31, 0
  037be10  fmuls 1, 2, 1
  037be14  fctiwz 1, 1
  037be18  stfd 1, 112(1)
  037be1c  lwz 6, 116(1)
  037be20  extsw 6, 6
  037be24  bl 0xfddc0
  037be28  nop
  037be2c  li 27, 0
  037be30  ori 3, 27, 0
  037be34  ld 0, 208(1)
  037be38  mtlr 0
  037be3c  lfd 31, 184(1)
  037be40  ld 26, 136(1)
  037be44  ld 27, 144(1)
  037be48  ld 28, 152(1)
  037be4c  ld 29, 160(1)
  037be50  ld 30, 168(1)
  037be54  ld 31, 176(1)
  037be58  addi 1, 1, 192
  037be5c  blr

M44_0037be68:   # 0x37be68, 0x214 bytes
  037be68  stdu 1, -160(1)
  037be6c  mflr 0
  037be70  std 0, 176(1)
  037be74  lfs 1, 0(5)
  037be78  lfs 2, 16(3)
  037be7c  lfs 3, 4(5)
  037be80  lfs 4, 20(3)
  037be84  fsubs 1, 1, 2
  037be88  lis 5, 56
  037be8c  fsubs 2, 3, 4
  037be90  addi 5, 5, -16800
  037be94  ori 8, 6, 0
  037be98  lis 6, 115
  037be9c  addic 10, 6, 22784
  037bea0  ori 6, 3, 0
  037bea4  fabs 5, 1
  037bea8  fabs 4, 2
  037beac  stfs 1, 112(1)
  037beb0  stfs 2, 116(1)
  037beb4  fsubs 1, 5, 4
  037beb8  stfs 1, 120(1)
  037bebc  lwz 9, 112(1)
  037bec0  lfs 1, 0(5)
  037bec4  lfs 2, 112(1)
  037bec8  lwz 5, 116(1)
  037becc  lfs 3, 116(1)
  037bed0  lwz 3, 120(1)
  037bed4  rlwinm 11, 5, 3, 29, 29
  037bed8  fabs 6, 3
  037bedc  lfs 3, 120(1)
  037bee0  fabs 2, 2
  037bee4  rlwimi 11, 3, 2, 30, 30
  037bee8  fsub 7, 3, 1
  037beec  ori 3, 10, 0
  037bef0  fsub 8, 3, 1
  037bef4  rlwimi 11, 9, 4, 28, 28
  037bef8  ori 5, 4, 0
  037befc  rlwimi 3, 11, 2, 26, 28
  037bf00  slwi 4, 11, 2
  037bf04  clrldi 3, 3, 32
  037bf08  lfsx 3, 10, 4
  037bf0c  fsel 4, 7, 2, 4
  037bf10  lfs 2, 4(3)
  037bf14  fsel 5, 8, 6, 5
  037bf18  ori 4, 8, 0
  037bf1c  ori 3, 7, 0
  037bf20  fcmpu 0, 4, 1
  037bf24  bt 1, 0x37bf2c
  037bf28  b 0x37c050
  037bf2c  fsubs 6, 5, 4
  037bf30  fadds 4, 5, 4
  037bf34  addic 10, 1, 16
  037bf38  li 7, 2
  037bf3c  addic 8, 10, 124
  037bf40  addic 9, 10, 108
  037bf44  mtctr 7
  037bf48  fdivs 4, 6, 4
  037bf4c  fmuls 6, 4, 4
  037bf50  stfs 4, 136(1)
  037bf54  stfs 4, 128(1)
  037bf58  stfs 4, 132(1)
  037bf5c  stfs 4, 124(1)
  037bf60  lfs 7, 136(1)
  037bf64  lfs 8, 128(1)
  037bf68  lfs 9, 132(1)
  037bf6c  fmuls 4, 6, 6
  037bf70  fmuls 8, 8, 6
  037bf74  fmuls 7, 7, 4
  037bf78  fmuls 5, 4, 4
  037bf7c  fmuls 4, 9, 4
  037bf80  stfs 8, 128(1)
  037bf84  fmuls 6, 7, 6
  037bf88  stfs 4, 132(1)
  037bf8c  stfs 6, 136(1)
  037bf90  lfs 4, 108(10)
  037bf94  fmuls 4, 4, 5
  037bf98  stfs 4, 124(10)
  037bf9c  lfs 4, 4(9)
  037bfa0  addic 9, 9, 8
  037bfa4  fmuls 4, 4, 5
  037bfa8  addic 10, 10, 8
  037bfac  stfs 4, 4(8)
  037bfb0  addic 8, 8, 8
  037bfb4  bdnz 0x37bf90
  037bfb8  ori 11, 1, 0
  037bfbc  li 8, 4
  037bfc0  lis 10, 115
  037bfc4  addic 9, 11, 124
  037bfc8  mtctr 8
  037bfcc  addic 10, 10, 22752
  037bfd0  ori 8, 9, 0
  037bfd4  lfs 4, 124(11)
  037bfd8  lfs 5, 0(10)
  037bfdc  fmuls 4, 4, 5
  037bfe0  lfs 5, 4(10)
  037bfe4  addic 10, 10, 8
  037bfe8  stfs 4, 124(11)
  037bfec  lfs 4, 4(9)
  037bff0  addic 11, 11, 8
  037bff4  fmuls 4, 4, 5
  037bff8  stfs 4, 4(9)
  037bffc  addic 9, 9, 8
  037c000  bdnz 0x37bfd4
  037c004  ori 9, 7, 0
  037c008  ori 7, 1, 0
  037c00c  mtctr 9
  037c010  lfs 4, 124(7)
  037c014  fadds 1, 1, 4
  037c018  lfs 4, 4(8)
  037c01c  addic 7, 7, 16
  037c020  lfs 5, 8(8)
  037c024  lfs 6, 12(8)
  037c028  addic 8, 8, 16
  037c02c  fadds 1, 1, 4
  037c030  fadds 1, 1, 5
  037c034  fadds 1, 1, 6
  037c038  bdnz 0x37c010
  037c03c  lis 7, 56
  037c040  addi 7, 7, -16800
  037c044  lfs 4, 4(7)
  037c048  fadds 1, 1, 4
  037c04c  fmadds 1, 1, 3, 2
  037c050  ori 7, 4, 0
  037c054  ori 8, 3, 0
  037c058  ori 3, 6, 0
  037c05c  ori 6, 7, 0
  037c060  ori 4, 5, 0
  037c064  ori 7, 8, 0
  037c068  bl 0x37bbe8
  037c06c  ld 0, 176(1)
  037c070  mtlr 0
  037c074  addi 1, 1, 160
  037c078  blr

M44_0037c07c:   # 0x37c07c, 0x13c bytes
  037c07c  lwz 5, 120(3)
  037c080  lwz 5, 296(5)
  037c084  cmpwi 5, -1
  037c088  bf 2, 0x37c094
  037c08c  li 3, 0
  037c090  b 0x37c1b4
  037c094  lis 4, 164
  037c098  slwi 5, 5, 8
  037c09c  lwz 4, -28512(4)
  037c0a0  addc 5, 4, 5
  037c0a4  clrldi 5, 5, 32
  037c0a8  lwz 6, 120(5)
  037c0ac  lwz 6, 8(6)
  037c0b0  cmpwi 6, 0
  037c0b4  bt 2, 0x37c0c0
  037c0b8  li 3, 0
  037c0bc  b 0x37c1b4
  037c0c0  lbz 6, 33(3)
  037c0c4  cmpwi 6, 255
  037c0c8  bf 2, 0x37c0d4
  037c0cc  li 3, 1
  037c0d0  b 0x37c1b4
  037c0d4  lfs 1, 20(3)
  037c0d8  lfs 2, 20(5)
  037c0dc  lis 7, 165
  037c0e0  lfs 3, 16(3)
  037c0e4  fsubs 1, 1, 2
  037c0e8  lfs 2, 16(5)
  037c0ec  addic 3, 7, -28284
  037c0f0  rlwinm 5, 6, 2, 22, 29
  037c0f4  fsubs 2, 3, 2
  037c0f8  lwzx 3, 3, 5
  037c0fc  cmpwi 3, 0
  037c100  fmuls 1, 1, 1
  037c104  fmadds 1, 2, 2, 1
  037c108  fsqrts 1, 1
  037c10c  bf 2, 0x37c118
  037c110  li 3, 1
  037c114  b 0x37c1b4
  037c118  lhz 5, 0(3)
  037c11c  rlwinm 5, 5, 8, 9, 23
  037c120  addc 5, 4, 5
  037c124  clrldi 5, 5, 32
  037c128  lbz 6, 32(5)
  037c12c  cmpwi 6, 14
  037c130  bf 2, 0x37c13c
  037c134  li 3, 0
  037c138  b 0x37c1b4
  037c13c  lbz 6, 188(5)
  037c140  cmpwi 6, 1
  037c144  bf 2, 0x37c19c
  037c148  lwz 6, 120(5)
  037c14c  lwz 6, 296(6)
  037c150  cmpwi 6, -1
  037c154  bt 2, 0x37c19c
  037c158  slwi 6, 6, 8
  037c15c  lfs 2, 20(5)
  037c160  lfs 3, 16(5)
  037c164  addc 6, 4, 6
  037c168  clrldi 6, 6, 32
  037c16c  lfs 4, 20(6)
  037c170  lfs 5, 16(6)
  037c174  fsubs 2, 2, 4
  037c178  fsubs 3, 3, 5
  037c17c  fmuls 2, 2, 2
  037c180  fmadds 2, 3, 3, 2
  037c184  fsqrts 2, 2
  037c188  fcmpu 0, 2, 1
  037c18c  cror 6, 1, 2
  037c190  bt 6, 0x37c19c
  037c194  li 3, 0
  037c198  b 0x37c1b4
  037c19c  lhz 5, 0(3)
  037c1a0  addic 3, 3, 2
  037c1a4  extsh 5, 5
  037c1a8  cmpwi 5, 0
  037c1ac  bf 0, 0x37c118
  037c1b0  li 3, 1
  037c1b4  blr
