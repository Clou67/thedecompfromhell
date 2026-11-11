# game/update/moby184.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_MOBY184:   # 0x1b0c8, 0x14 bytes
  001b0c8  lis 3, 114
  001b0cc  lis 4, 1
  001b0d0  addic 3, 3, -12444
  001b0d4  stw 4, 72(3)
  001b0d8  blr

M184_0001b100:   # 0x1b100, 0x40c bytes
  001b100  stdu 1, -224(1)
  001b104  mflr 0
  001b108  std 0, 240(1)
  001b10c  stfd 29, 200(1)
  001b110  stfd 30, 208(1)
  001b114  stfd 31, 216(1)
  001b118  std 29, 176(1)
  001b11c  ori 29, 7, 0
  001b120  std 30, 184(1)
  001b124  std 27, 160(1)
  001b128  li 4, 224
  001b12c  ori 30, 3, 0
  001b130  std 31, 192(1)
  001b134  addc 27, 1, 4
  001b138  ori 31, 9, 0
  001b13c  std 28, 168(1)
  001b140  li 3, 184
  001b144  std 5, 64(27)
  001b148  std 6, 72(27)
  001b14c  std 29, 80(27)
  001b150  std 8, 88(27)
  001b154  bl 0xefa28
  001b158  nop
  001b15c  lfs 7, 80(27)
  001b160  ori 28, 3, 0
  001b164  lfs 6, 64(27)
  001b168  ori 3, 29, 0
  001b16c  lfs 5, 72(27)
  001b170  cmpwi 28, 0
  001b174  lfs 4, 88(27)
  001b178  rldicl 4, 29, 32, 32
  001b17c  lfs 3, 68(27)
  001b180  lfs 2, 76(27)
  001b184  lfs 1, 92(27)
  001b188  lfs 31, 84(27)
  001b18c  bt 2, 0x1b4d8
  001b190  lwz 29, 120(28)
  001b194  li 5, 255
  001b198  li 6, 1
  001b19c  stw 30, 24(29)
  001b1a0  lhz 7, 166(30)
  001b1a4  stb 5, 48(28)
  001b1a8  cmpwi 7, 255
  001b1ac  sth 5, 50(28)
  001b1b0  stb 6, 49(28)
  001b1b4  bt 2, 0x1b1d0
  001b1b8  lis 5, 2
  001b1bc  lfs 8, 44(28)
  001b1c0  addi 5, 5, -20256
  001b1c4  lfs 9, 0(5)
  001b1c8  fmuls 8, 8, 9
  001b1cc  stfs 8, 44(28)
  001b1d0  fabs 12, 7
  001b1d4  fabs 13, 31
  001b1d8  lis 5, 2
  001b1dc  li 6, 0
  001b1e0  addi 5, 5, -20256
  001b1e4  rlwinm 3, 3, 3, 29, 29
  001b1e8  lfs 8, 4(5)
  001b1ec  stw 6, 64(28)
  001b1f0  stw 6, 68(28)
  001b1f4  fsubs 9, 12, 13
  001b1f8  lis 5, 115
  001b1fc  addic 5, 5, 22784
  001b200  stfs 9, 112(1)
  001b204  lwz 6, 112(1)
  001b208  lfs 9, 112(1)
  001b20c  rlwimi 3, 6, 2, 30, 30
  001b210  fsub 11, 9, 8
  001b214  fsub 0, 9, 8
  001b218  rlwimi 3, 4, 4, 28, 28
  001b21c  ori 4, 5, 0
  001b220  rlwimi 4, 3, 2, 26, 28
  001b224  slwi 3, 3, 2
  001b228  clrldi 4, 4, 32
  001b22c  fsel 11, 11, 12, 13
  001b230  lfsx 10, 5, 3
  001b234  lfs 9, 4(4)
  001b238  fsel 12, 0, 13, 12
  001b23c  fcmpu 0, 11, 8
  001b240  bt 1, 0x1b248
  001b244  b 0x1b36c
  001b248  fsubs 13, 12, 11
  001b24c  fadds 11, 12, 11
  001b250  addic 6, 1, 16
  001b254  li 3, 2
  001b258  addic 4, 6, 116
  001b25c  addic 5, 6, 100
  001b260  mtctr 3
  001b264  fdivs 11, 13, 11
  001b268  fmuls 13, 11, 11
  001b26c  stfs 11, 128(1)
  001b270  stfs 11, 120(1)
  001b274  stfs 11, 124(1)
  001b278  stfs 11, 116(1)
  001b27c  lfs 0, 128(1)
  001b280  lfs 30, 120(1)
  001b284  lfs 29, 124(1)
  001b288  fmuls 11, 13, 13
  001b28c  fmuls 30, 30, 13
  001b290  fmuls 0, 0, 11
  001b294  fmuls 12, 11, 11
  001b298  fmuls 11, 29, 11
  001b29c  stfs 30, 120(1)
  001b2a0  fmuls 13, 0, 13
  001b2a4  stfs 11, 124(1)
  001b2a8  stfs 13, 128(1)
  001b2ac  lfs 11, 100(6)
  001b2b0  fmuls 11, 11, 12
  001b2b4  stfs 11, 116(6)
  001b2b8  lfs 11, 4(5)
  001b2bc  addic 5, 5, 8
  001b2c0  fmuls 11, 11, 12
  001b2c4  addic 6, 6, 8
  001b2c8  stfs 11, 4(4)
  001b2cc  addic 4, 4, 8
  001b2d0  bdnz 0x1b2ac
  001b2d4  ori 7, 1, 0
  001b2d8  li 4, 4
  001b2dc  lis 6, 115
  001b2e0  addic 5, 7, 116
  001b2e4  mtctr 4
  001b2e8  addic 6, 6, 22752
  001b2ec  ori 4, 5, 0
  001b2f0  lfs 11, 116(7)
  001b2f4  lfs 12, 0(6)
  001b2f8  fmuls 11, 11, 12
  001b2fc  lfs 12, 4(6)
  001b300  addic 6, 6, 8
  001b304  stfs 11, 116(7)
  001b308  lfs 11, 4(5)
  001b30c  addic 7, 7, 8
  001b310  fmuls 11, 11, 12
  001b314  stfs 11, 4(5)
  001b318  addic 5, 5, 8
  001b31c  bdnz 0x1b2f0
  001b320  ori 5, 3, 0
  001b324  ori 3, 1, 0
  001b328  mtctr 5
  001b32c  lfs 11, 116(3)
  001b330  fadds 8, 8, 11
  001b334  lfs 11, 4(4)
  001b338  addic 3, 3, 16
  001b33c  lfs 12, 8(4)
  001b340  lfs 13, 12(4)
  001b344  addic 4, 4, 16
  001b348  fadds 8, 8, 11
  001b34c  fadds 8, 8, 12
  001b350  fadds 8, 8, 13
  001b354  bdnz 0x1b32c
  001b358  lis 3, 2
  001b35c  addi 3, 3, -20256
  001b360  lfs 11, 8(3)
  001b364  fadds 8, 8, 11
  001b368  fmadds 8, 8, 10, 9
  001b36c  stfs 8, 72(28)
  001b370  lis 3, 2
  001b374  stfs 6, 16(28)
  001b378  stfs 3, 20(28)
  001b37c  stfs 5, 24(28)
  001b380  addi 27, 3, -20256
  001b384  stfs 2, 28(28)
  001b388  lis 3, 114
  001b38c  stfs 7, 0(29)
  001b390  stfs 31, 4(29)
  001b394  stfs 4, 8(29)
  001b398  stfs 1, 12(29)
  001b39c  lfs 1, 12(27)
  001b3a0  lfs 2, 16(27)
  001b3a4  lfs 3, -3052(3)
  001b3a8  fmuls 1, 3, 1
  001b3ac  fmuls 2, 3, 2
  001b3b0  bl 0xfcbe8
  001b3b4  nop
  001b3b8  li 3, 0
  001b3bc  lis 4, 151
  001b3c0  stfs 1, 16(29)
  001b3c4  sth 31, 28(29)
  001b3c8  addic 4, 4, -25376
  001b3cc  stw 3, 20(29)
  001b3d0  sth 31, 30(29)
  001b3d4  lfs 1, 20(28)
  001b3d8  lfs 2, 16(28)
  001b3dc  lfs 3, 132(4)
  001b3e0  lfs 4, 128(4)
  001b3e4  fsubs 1, 1, 3
  001b3e8  fsubs 2, 2, 4
  001b3ec  lfs 3, 24(28)
  001b3f0  lfs 4, 136(4)
  001b3f4  fsubs 3, 3, 4
  001b3f8  stw 3, 36(29)
  001b3fc  stw 3, 40(29)
  001b400  fmuls 1, 1, 1
  001b404  sldi 3, 31, 2
  001b408  fmadds 1, 2, 2, 1
  001b40c  fmadds 1, 3, 3, 1
  001b410  fsqrts 1, 1
  001b414  stfs 1, 32(29)
  001b418  lhz 4, 166(30)
  001b41c  lfs 31, 20(27)
  001b420  addc 30, 31, 3
  001b424  cmpwi 4, 255
  001b428  lfs 8, 24(27)
  001b42c  bf 2, 0x1b480
  001b430  srawi 3, 30, 2
  001b434  lis 5, 12159
  001b438  fmr 1, 8
  001b43c  addze 3, 3
  001b440  ori 5, 5, 20303
  001b444  extsw 31, 3
  001b448  li 7, -1
  001b44c  ori 3, 28, 0
  001b450  ori 6, 31, 0
  001b454  bl 0x127ea8
  001b458  nop
  001b45c  lis 5, 20351
  001b460  fmr 1, 31
  001b464  ori 3, 28, 0
  001b468  ori 5, 5, 32639
  001b46c  ori 6, 31, 0
  001b470  li 7, -1
  001b474  bl 0x127ea8
  001b478  nop
  001b47c  b 0x1b4cc
  001b480  srawi 3, 30, 2
  001b484  lis 5, 12111
  001b488  fmr 1, 8
  001b48c  addze 3, 3
  001b490  ori 5, 5, 32639
  001b494  extsw 31, 3
  001b498  li 7, -1
  001b49c  ori 3, 28, 0
  001b4a0  ori 6, 31, 0
  001b4a4  bl 0x127ea8
  001b4a8  nop
  001b4ac  lis 5, 20335
  001b4b0  fmr 1, 31
  001b4b4  ori 3, 28, 0
  001b4b8  ori 5, 5, 32639
  001b4bc  ori 6, 31, 0
  001b4c0  li 7, -1
  001b4c4  bl 0x127ea8
  001b4c8  nop
  001b4cc  ori 3, 28, 0
  001b4d0  bl 0xf31a8
  001b4d4  nop
  001b4d8  ori 3, 28, 0
  001b4dc  ld 0, 240(1)
  001b4e0  mtlr 0
  001b4e4  lfd 29, 200(1)
  001b4e8  lfd 30, 208(1)
  001b4ec  lfd 31, 216(1)
  001b4f0  ld 27, 160(1)
  001b4f4  ld 28, 168(1)
  001b4f8  ld 29, 176(1)
  001b4fc  ld 30, 184(1)
  001b500  ld 31, 192(1)
  001b504  addi 1, 1, 224
  001b508  blr

UpdateMoby_184:   # 0x1b540, 0x644 bytes
  001b540  stdu 1, -352(1)
  001b544  mflr 0
  001b548  std 0, 368(1)
  001b54c  stfd 22, 272(1)
  001b550  stfd 23, 280(1)
  001b554  stfd 24, 288(1)
  001b558  stfd 25, 296(1)
  001b55c  stfd 26, 304(1)
  001b560  stfd 27, 312(1)
  001b564  stfd 28, 320(1)
  001b568  stfd 29, 328(1)
  001b56c  stfd 30, 336(1)
  001b570  stfd 31, 344(1)
  001b574  std 30, 256(1)
  001b578  lis 4, 2
  001b57c  std 31, 264(1)
  001b580  lwz 30, 120(3)
  001b584  ori 31, 3, 0
  001b588  addi 4, 4, -19188
  001b58c  lfs 1, 16(3)
  001b590  lfs 2, 20(3)
  001b594  lfs 30, 0(4)
  001b598  lwz 4, 24(30)
  001b59c  lfs 3, 24(3)
  001b5a0  lfs 4, 28(3)
  001b5a4  lhz 3, 166(4)
  001b5a8  std 29, 248(1)
  001b5ac  std 28, 240(1)
  001b5b0  std 27, 232(1)
  001b5b4  std 26, 224(1)
  001b5b8  cmpwi 3, 255
  001b5bc  bf 2, 0x1b5cc
  001b5c0  lis 3, 2
  001b5c4  addi 3, 3, -19188
  001b5c8  lfs 30, 4(3)
  001b5cc  lis 3, 151
  001b5d0  lwz 3, -25488(3)
  001b5d4  cmpwi 3, 12
  001b5d8  bf 2, 0x1b5e8
  001b5dc  lis 3, 2
  001b5e0  addi 3, 3, -19188
  001b5e4  lfs 30, 8(3)
  001b5e8  lis 3, 151
  001b5ec  addic 3, 3, -25376
  001b5f0  lfs 5, 128(3)
  001b5f4  lfs 6, 132(3)
  001b5f8  lfs 7, 136(3)
  001b5fc  fsubs 5, 1, 5
  001b600  stfs 1, 112(1)
  001b604  fsubs 6, 2, 6
  001b608  stfs 2, 116(1)
  001b60c  stfs 3, 120(1)
  001b610  stfs 4, 124(1)
  001b614  lfs 4, 0(30)
  001b618  lwz 3, 40(30)
  001b61c  fadds 1, 1, 4
  001b620  fsubs 4, 3, 7
  001b624  cmpwi 3, 0
  001b628  fmuls 6, 6, 6
  001b62c  stfs 1, 16(31)
  001b630  lfs 1, 4(30)
  001b634  fmadds 5, 5, 5, 6
  001b638  fadds 1, 2, 1
  001b63c  fmadds 31, 4, 4, 5
  001b640  stfs 1, 20(31)
  001b644  lfs 1, 8(30)
  001b648  fadds 1, 3, 1
  001b64c  fsqrts 31, 31
  001b650  stfs 1, 24(31)
  001b654  bf 2, 0x1b6a8
  001b658  lwz 3, 36(30)
  001b65c  cmpwi 3, 0
  001b660  bt 2, 0x1b6a8
  001b664  lfs 1, 32(30)
  001b668  fcmpu 0, 31, 1
  001b66c  cror 6, 0, 2
  001b670  bt 6, 0x1b6a8
  001b674  lis 3, 2
  001b678  addi 3, 3, -19188
  001b67c  lfs 1, 12(3)
  001b680  fcmpu 0, 31, 1
  001b684  cror 6, 1, 2
  001b688  bt 6, 0x1b6a8
  001b68c  li 3, 0
  001b690  li 4, 0
  001b694  ori 5, 31, 0
  001b698  bl 0x15d12c
  001b69c  nop
  001b6a0  li 3, 1
  001b6a4  stw 3, 40(30)
  001b6a8  lfs 1, 32(30)
  001b6ac  fcmpu 0, 31, 1
  001b6b0  cror 6, 1, 2
  001b6b4  bt 6, 0x1b6c0
  001b6b8  li 3, 1
  001b6bc  stw 3, 36(30)
  001b6c0  lis 3, 2
  001b6c4  stfs 31, 32(30)
  001b6c8  lwz 4, 16(31)
  001b6cc  li 26, 0
  001b6d0  addi 3, 3, -19188
  001b6d4  lfs 1, 16(31)
  001b6d8  cmpwi 4, 0
  001b6dc  lfs 31, 16(3)
  001b6e0  bt 0, 0x1b730
  001b6e4  lwz 3, 20(31)
  001b6e8  lfs 2, 20(31)
  001b6ec  cmpwi 3, 0
  001b6f0  bt 0, 0x1b730
  001b6f4  lwz 3, 24(31)
  001b6f8  cmpwi 3, 0
  001b6fc  bt 0, 0x1b730
  001b700  lis 3, 149
  001b704  addic 3, 3, 5056
  001b708  lfs 3, 324(3)
  001b70c  lfs 4, 320(3)
  001b710  fsubs 2, 2, 3
  001b714  fsubs 1, 1, 4
  001b718  fmuls 2, 2, 2
  001b71c  fmadds 1, 1, 1, 2
  001b720  fsqrts 1, 1
  001b724  fcmpu 0, 1, 30
  001b728  cror 6, 0, 2
  001b72c  bt 6, 0x1b740
  001b730  ori 3, 31, 0
  001b734  bl 0xefb38
  001b738  nop
  001b73c  b 0x1bb34
  001b740  lbz 3, 188(31)
  001b744  ori 29, 26, 0
  001b748  cmpwi 3, 0
  001b74c  bf 2, 0x1b850
  001b750  stw 31, 176(1)
  001b754  lwz 3, 24(30)
  001b758  lhz 3, 166(3)
  001b75c  cmpwi 3, 255
  001b760  cmpwi 1, 3, 1201
  001b764  bt 2, 0x1b76c
  001b768  bf 6, 0x1b784
  001b76c  lis 3, 2
  001b770  lis 4, 5
  001b774  addi 5, 3, -19188
  001b778  ori 3, 4, 1
  001b77c  lfs 1, 12(5)
  001b780  b 0x1b798
  001b784  lis 3, 2
  001b788  lis 4, 1
  001b78c  addi 5, 3, -19188
  001b790  ori 3, 4, 1
  001b794  lfs 1, 20(5)
  001b798  stfs 1, 188(1)
  001b79c  lfs 1, 0(30)
  001b7a0  stfs 1, 160(1)
  001b7a4  lfs 2, 4(30)
  001b7a8  fmuls 3, 2, 2
  001b7ac  fmr 4, 31
  001b7b0  li 4, 1
  001b7b4  stw 3, 180(1)
  001b7b8  stw 4, 192(1)
  001b7bc  fmadds 3, 1, 1, 3
  001b7c0  fmr 5, 4
  001b7c4  fsqrts 6, 3
  001b7c8  fcmpu 0, 6, 5
  001b7cc  bt 2, 0x1b81c
  001b7d0  frsqrte 4, 3
  001b7d4  lis 3, 2
  001b7d8  addi 3, 3, -19188
  001b7dc  lfs 5, 24(3)
  001b7e0  lfs 6, 20(3)
  001b7e4  fmuls 7, 3, 4
  001b7e8  fmuls 8, 5, 4
  001b7ec  fnmsubs 7, 7, 4, 6
  001b7f0  fmadds 4, 7, 8, 4
  001b7f4  fmuls 7, 3, 4
  001b7f8  fmuls 8, 5, 4
  001b7fc  fnmsubs 7, 7, 4, 6
  001b800  fmadds 4, 7, 8, 4
  001b804  fmuls 3, 3, 4
  001b808  fmuls 5, 5, 4
  001b80c  fnmsubs 3, 3, 4, 6
  001b810  fmadds 4, 3, 5, 4
  001b814  fmuls 5, 1, 4
  001b818  fmuls 4, 2, 4
  001b81c  lis 3, 17839
  001b820  stfs 5, 160(1)
  001b824  lis 5, 16256
  001b828  stfs 4, 164(1)
  001b82c  ori 3, 3, 57190
  001b830  li 4, 1
  001b834  addic 29, 1, 160
  001b838  stw 5, 168(1)
  001b83c  stw 3, 172(1)
  001b840  lhz 3, 166(31)
  001b844  stb 4, 184(1)
  001b848  stb 4, 185(1)
  001b84c  sth 3, 186(1)
  001b850  addic 3, 30, 28
  001b854  bl 0x4fffb4
  001b858  nop
  001b85c  ori 4, 3, 0
  001b860  lbz 3, 188(31)
  001b864  cmpwi 4, 0
  001b868  bt 2, 0x1b894
  001b86c  cmpwi 3, 0
  001b870  bf 2, 0x1b894
  001b874  li 3, 1
  001b878  stb 3, 188(31)
  001b87c  lhz 3, 30(30)
  001b880  extsh 3, 3
  001b884  srawi 3, 3, 2
  001b888  addze 3, 3
  001b88c  sth 3, 28(30)
  001b890  b 0x1b8bc
  001b894  lhz 4, 28(30)
  001b898  extsh 4, 4
  001b89c  cmpwi 4, 0
  001b8a0  bt 1, 0x1b8bc
  001b8a4  cmpwi 3, 0
  001b8a8  bt 2, 0x1b8bc
  001b8ac  ori 3, 31, 0
  001b8b0  bl 0xefb38
  001b8b4  nop
  001b8b8  b 0x1bb34
  001b8bc  addic 28, 31, 16
  001b8c0  addic 3, 1, 112
  001b8c4  lwz 6, 24(30)
  001b8c8  ori 4, 28, 0
  001b8cc  li 5, 0
  001b8d0  ori 7, 29, 0
  001b8d4  bl 0x57820
  001b8d8  nop
  001b8dc  cmpwi 3, 0
  001b8e0  bt 2, 0x1bb34
  001b8e4  lis 27, 161
  001b8e8  addic 27, 27, 2368
  001b8ec  lfs 1, 32(27)
  001b8f0  stfs 1, 16(31)
  001b8f4  lfs 1, 36(27)
  001b8f8  lbz 3, 188(31)
  001b8fc  stfs 1, 20(31)
  001b900  lfs 1, 40(27)
  001b904  cmpwi 3, 0
  001b908  stfs 1, 24(31)
  001b90c  lfs 1, 44(27)
  001b910  stfs 1, 28(31)
  001b914  bf 2, 0x1bb28
  001b918  lis 3, 2
  001b91c  addic 27, 27, 64
  001b920  addi 3, 3, -19188
  001b924  ori 29, 26, 0
  001b928  lfs 30, 28(3)
  001b92c  lfs 29, 20(3)
  001b930  lfs 28, 24(3)
  001b934  lfs 27, 12(3)
  001b938  lfs 26, 32(3)
  001b93c  lfs 25, 36(3)
  001b940  lfs 24, 40(3)
  001b944  lfs 23, 44(3)
  001b948  fmr 1, 30
  001b94c  stw 26, 128(1)
  001b950  stw 26, 132(1)
  001b954  fmr 2, 29
  001b958  stw 26, 136(1)
  001b95c  stw 26, 140(1)
  001b960  bl 0xfcbe8
  001b964  nop
  001b968  stfs 1, 128(1)
  001b96c  fmr 2, 29
  001b970  fmr 1, 30
  001b974  bl 0xfcbe8
  001b978  nop
  001b97c  stfs 1, 132(1)
  001b980  fmr 1, 30
  001b984  fmr 2, 29
  001b988  bl 0xfcbe8
  001b98c  nop
  001b990  stfs 1, 136(1)
  001b994  addic 3, 1, 144
  001b998  ori 4, 30, 0
  001b99c  ori 5, 27, 0
  001b9a0  bl 0x500608
  001b9a4  nop
  001b9a8  lfs 3, 148(1)
  001b9ac  lfs 4, 144(1)
  001b9b0  fmuls 1, 3, 3
  001b9b4  lfs 5, 132(1)
  001b9b8  lfs 6, 152(1)
  001b9bc  fmuls 2, 5, 5
  001b9c0  lfs 7, 128(1)
  001b9c4  lfs 8, 136(1)
  001b9c8  lis 3, 114
  001b9cc  lfs 9, 156(1)
  001b9d0  fmadds 1, 4, 4, 1
  001b9d4  fmadds 2, 7, 7, 2
  001b9d8  fmadds 1, 6, 6, 1
  001b9dc  fmadds 2, 8, 8, 2
  001b9e0  fsqrts 1, 1
  001b9e4  fsqrts 10, 2
  001b9e8  lfs 2, -3052(3)
  001b9ec  stfs 9, 140(1)
  001b9f0  fmuls 9, 1, 28
  001b9f4  fmuls 1, 2, 27
  001b9f8  fmuls 2, 2, 26
  001b9fc  fdivs 9, 9, 10
  001ba00  fsub 11, 31, 10
  001ba04  fsub 12, 31, 10
  001ba08  fsub 13, 31, 10
  001ba0c  fsub 0, 10, 31
  001ba10  fsub 22, 10, 31
  001ba14  fsub 10, 10, 31
  001ba18  fmuls 8, 8, 9
  001ba1c  fmuls 5, 5, 9
  001ba20  fmuls 7, 7, 9
  001ba24  fsel 9, 11, 31, 8
  001ba28  fsel 11, 12, 31, 5
  001ba2c  fsel 12, 13, 31, 7
  001ba30  fsel 8, 0, 9, 8
  001ba34  fsel 5, 22, 11, 5
  001ba38  fsel 7, 10, 12, 7
  001ba3c  fadds 6, 6, 8
  001ba40  fadds 3, 3, 5
  001ba44  fadds 4, 4, 7
  001ba48  stfs 6, 136(1)
  001ba4c  stfs 3, 132(1)
  001ba50  stfs 4, 128(1)
  001ba54  bl 0xfcbe8
  001ba58  nop
  001ba5c  lfs 2, 132(1)
  001ba60  lfs 3, 128(1)
  001ba64  fmuls 4, 2, 2
  001ba68  lfs 5, 136(1)
  001ba6c  lis 3, 114
  001ba70  fmadds 4, 3, 3, 4
  001ba74  lfs 6, -3056(3)
  001ba78  fmuls 7, 6, 25
  001ba7c  fmuls 6, 6, 24
  001ba80  fmadds 4, 5, 5, 4
  001ba84  fctiwz 7, 7
  001ba88  fctiwz 6, 6
  001ba8c  fsqrts 4, 4
  001ba90  stfd 7, 208(1)
  001ba94  lwz 3, 212(1)
  001ba98  stfd 6, 208(1)
  001ba9c  lwz 4, 212(1)
  001baa0  extsw 3, 3
  001baa4  extsw 4, 4
  001baa8  fdivs 1, 1, 4
  001baac  fsub 6, 31, 4
  001bab0  fsub 7, 31, 4
  001bab4  fsub 8, 31, 4
  001bab8  fsub 9, 4, 31
  001babc  fsub 10, 4, 31
  001bac0  fsub 4, 4, 31
  001bac4  fmuls 3, 3, 1
  001bac8  fmuls 2, 2, 1
  001bacc  fmuls 1, 5, 1
  001bad0  fsel 5, 6, 31, 3
  001bad4  fsel 6, 7, 31, 2
  001bad8  fsel 7, 8, 31, 1
  001badc  fsel 3, 9, 5, 3
  001bae0  fsel 2, 10, 6, 2
  001bae4  fsel 1, 4, 7, 1
  001bae8  stfs 3, 128(1)
  001baec  stfs 2, 132(1)
  001baf0  stfs 1, 136(1)
  001baf4  bl 0xfe484
  001baf8  nop
  001bafc  lis 5, 32559
  001bb00  ori 6, 3, 0
  001bb04  fmr 1, 23
  001bb08  addic 4, 1, 128
  001bb0c  ori 3, 28, 0
  001bb10  ori 5, 5, 20335
  001bb14  bl 0x128248
  001bb18  nop
  001bb1c  addic 29, 29, 1
  001bb20  cmpwi 29, 5
  001bb24  bt 0, 0x1b948
  001bb28  ori 3, 31, 0
  001bb2c  bl 0xefb38
  001bb30  nop
  001bb34  ld 0, 368(1)
  001bb38  mtlr 0
  001bb3c  lfd 22, 272(1)
  001bb40  lfd 23, 280(1)
  001bb44  lfd 24, 288(1)
  001bb48  lfd 25, 296(1)
  001bb4c  lfd 26, 304(1)
  001bb50  lfd 27, 312(1)
  001bb54  lfd 28, 320(1)
  001bb58  lfd 29, 328(1)
  001bb5c  lfd 30, 336(1)
  001bb60  lfd 31, 344(1)
  001bb64  ld 26, 224(1)
  001bb68  ld 27, 232(1)
  001bb6c  ld 28, 240(1)
  001bb70  ld 29, 248(1)
  001bb74  ld 30, 256(1)
  001bb78  ld 31, 264(1)
  001bb7c  addi 1, 1, 352
  001bb80  blr
