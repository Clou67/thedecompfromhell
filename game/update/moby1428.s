# game/update/moby1428.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_0027b170:   # 0x27b170, 0xfc bytes
  027b170  stdu 1, -160(1)
  027b174  mflr 0
  027b178  std 0, 176(1)
  027b17c  std 28, 128(1)
  027b180  ori 28, 3, 0
  027b184  std 31, 152(1)
  027b188  li 3, 1428
  027b18c  std 30, 144(1)
  027b190  ori 31, 6, 0
  027b194  std 29, 136(1)
  027b198  ori 30, 5, 0
  027b19c  std 27, 120(1)
  027b1a0  ori 29, 4, 0
  027b1a4  std 26, 112(1)
  027b1a8  li 27, 160
  027b1ac  bl 0xefa28
  027b1b0  nop
  027b1b4  ori 26, 3, 0
  027b1b8  cmpwi 26, 0
  027b1bc  bt 2, 0x27b240
  027b1c0  ori 3, 26, 0
  027b1c4  bl 0x10c000
  027b1c8  nop
  027b1cc  addc 4, 1, 27
  027b1d0  li 3, 255
  027b1d4  li 5, 1
  027b1d8  std 28, 48(4)
  027b1dc  std 29, 56(4)
  027b1e0  std 30, 64(4)
  027b1e4  std 31, 72(4)
  027b1e8  stb 3, 48(26)
  027b1ec  sth 3, 50(26)
  027b1f0  stb 5, 49(26)
  027b1f4  lfs 1, 52(4)
  027b1f8  ori 3, 26, 0
  027b1fc  lfs 2, 60(4)
  027b200  stfs 1, 20(26)
  027b204  stfs 2, 28(26)
  027b208  lfs 1, 68(4)
  027b20c  lfs 2, 76(4)
  027b210  stfs 1, 68(26)
  027b214  stfs 2, 76(26)
  027b218  lfs 1, 48(4)
  027b21c  lfs 2, 56(4)
  027b220  stfs 1, 16(26)
  027b224  stfs 2, 24(26)
  027b228  lfs 1, 64(4)
  027b22c  lfs 2, 72(4)
  027b230  stfs 1, 64(26)
  027b234  stfs 2, 72(26)
  027b238  bl 0xf31a8
  027b23c  nop
  027b240  ori 3, 26, 0
  027b244  ld 0, 176(1)
  027b248  mtlr 0
  027b24c  ld 26, 112(1)
  027b250  ld 27, 120(1)
  027b254  ld 28, 128(1)
  027b258  ld 29, 136(1)
  027b25c  ld 30, 144(1)
  027b260  ld 31, 152(1)
  027b264  addi 1, 1, 160
  027b268  blr

M1428_0027b278:   # 0x27b278, 0x120 bytes
  027b278  stdu 1, -160(1)
  027b27c  mflr 0
  027b280  std 0, 176(1)
  027b284  std 29, 136(1)
  027b288  std 31, 152(1)
  027b28c  lwz 31, 120(3)
  027b290  std 30, 144(1)
  027b294  li 29, 0
  027b298  ori 30, 31, 0
  027b29c  li 3, 255
  027b2a0  bl 0xfc620
  027b2a4  nop
  027b2a8  extsw 3, 3
  027b2ac  addic 29, 29, 1
  027b2b0  std 3, 112(1)
  027b2b4  cmpwi 29, 4
  027b2b8  lfd 1, 112(1)
  027b2bc  fcfid 1, 1
  027b2c0  frsp 1, 1
  027b2c4  stfs 1, 0(30)
  027b2c8  addic 30, 30, 4
  027b2cc  bt 0, 0x27b29c
  027b2d0  lis 3, -16512
  027b2d4  lis 4, -16368
  027b2d8  vspltisw 4, 0
  027b2dc  lis 5, 16288
  027b2e0  lis 6, 40
  027b2e4  stw 3, 16(31)
  027b2e8  lis 7, 114
  027b2ec  stw 4, 20(31)
  027b2f0  lis 3, 16416
  027b2f4  addi 4, 6, -19860
  027b2f8  stw 5, 24(31)
  027b2fc  li 5, -3056
  027b300  li 6, 4
  027b304  li 8, 8
  027b308  stw 3, 28(31)
  027b30c  li 9, 4
  027b310  <unknown>
  027b314  <unknown>
  027b318  addic 3, 31, 32
  027b31c  <unknown>
  027b320  mtctr 9
  027b324  <unknown>
  027b328  vspltw 6, 6, 0
  027b32c  vspltw 3, 3, 0
  027b330  vspltw 2, 2, 0
  027b334  vadduwm 7, 4, 3
  027b338  vspltisw 8, -1
  027b33c  vadduwm 4, 4, 2
  027b340  vcfsx 7, 7, 0
  027b344  vslw 8, 8, 8
  027b348  vaddfp 7, 7, 6
  027b34c  vmaddfp 7, 7, 5, 8
  027b350  vctsxs 7, 7, 0
  027b354  vspltw 7, 7, 0
  027b358  stvewx 7, 0, 3
  027b35c  addic 3, 3, 4
  027b360  bdnz 0x27b334
  027b364  lis 3, 16416
  027b368  lis 4, 16448
  027b36c  stw 3, 48(31)
  027b370  stw 4, 52(31)
  027b374  stw 4, 56(31)
  027b378  stw 3, 60(31)
  027b37c  ld 0, 176(1)
  027b380  mtlr 0
  027b384  ld 29, 136(1)
  027b388  ld 30, 144(1)
  027b38c  ld 31, 152(1)
  027b390  addi 1, 1, 160
  027b394  blr

M1428_0027b3b0:   # 0x27b3b0, 0x314 bytes
  027b3b0  stdu 1, -256(1)
  027b3b4  mflr 0
  027b3b8  std 0, 272(1)
  027b3bc  stfd 25, 200(1)
  027b3c0  stfd 26, 208(1)
  027b3c4  stfd 27, 216(1)
  027b3c8  stfd 28, 224(1)
  027b3cc  stfd 29, 232(1)
  027b3d0  stfd 30, 240(1)
  027b3d4  stfd 31, 248(1)
  027b3d8  addi 0, 1, 144
  027b3dc  stvx 31, 0, 0
  027b3e0  lis 5, 149
  027b3e4  lfs 1, 20(3)
  027b3e8  lis 4, 40
  027b3ec  addic 5, 5, 5056
  027b3f0  lfs 2, 24(3)
  027b3f4  addi 4, 4, -19560
  027b3f8  lfs 3, 324(5)
  027b3fc  lfs 25, 0(4)
  027b400  fsubs 3, 3, 1
  027b404  lfs 4, 320(5)
  027b408  fadds 2, 2, 25
  027b40c  lfs 5, 16(3)
  027b410  lfs 6, 328(5)
  027b414  fsubs 4, 4, 5
  027b418  fmuls 7, 3, 3
  027b41c  fsubs 6, 6, 2
  027b420  stfs 4, 112(1)
  027b424  stfs 3, 116(1)
  027b428  fmadds 7, 4, 4, 7
  027b42c  lfs 8, 332(5)
  027b430  stfs 6, 120(1)
  027b434  stfs 8, 124(1)
  027b438  lfs 8, 8(4)
  027b43c  fmadds 7, 6, 6, 7
  027b440  lfs 26, 4(4)
  027b444  fsubs 31, 2, 25
  027b448  fsqrts 7, 7
  027b44c  std 29, 176(1)
  027b450  lfs 9, 12(4)
  027b454  li 5, 20
  027b458  std 30, 184(1)
  027b45c  li 29, 0
  027b460  lwz 30, 120(3)
  027b464  std 31, 192(1)
  027b468  stfs 31, 24(3)
  027b46c  addic 31, 30, 32
  027b470  fdivs 8, 8, 7
  027b474  fsub 10, 26, 7
  027b478  fsub 11, 26, 7
  027b47c  fsub 0, 26, 7
  027b480  fsub 12, 7, 26
  027b484  fsub 13, 7, 26
  027b488  fsub 7, 7, 26
  027b48c  fmuls 3, 3, 8
  027b490  fmuls 4, 4, 8
  027b494  fmuls 6, 6, 8
  027b498  fsel 8, 10, 26, 3
  027b49c  fsel 10, 11, 26, 4
  027b4a0  fsel 11, 0, 26, 6
  027b4a4  fsel 3, 12, 8, 3
  027b4a8  fsel 4, 13, 10, 4
  027b4ac  fsel 6, 7, 11, 6
  027b4b0  fmuls 7, 3, 3
  027b4b4  fadds 5, 4, 5
  027b4b8  fadds 1, 3, 1
  027b4bc  fadds 2, 6, 2
  027b4c0  fmadds 7, 4, 4, 7
  027b4c4  stfs 5, 112(1)
  027b4c8  stfs 1, 116(1)
  027b4cc  fmadds 7, 6, 6, 7
  027b4d0  stfs 2, 120(1)
  027b4d4  lfs 27, 16(4)
  027b4d8  <unknown>
  027b4dc  lfs 28, 20(4)
  027b4e0  fsqrts 7, 7
  027b4e4  vspltw 31, 31, 0
  027b4e8  fdivs 1, 9, 7
  027b4ec  fsub 5, 26, 7
  027b4f0  fsub 2, 26, 7
  027b4f4  fsub 8, 26, 7
  027b4f8  fsub 29, 7, 26
  027b4fc  fsub 30, 7, 26
  027b500  fsub 31, 7, 26
  027b504  fmuls 6, 6, 1
  027b508  fmuls 3, 3, 1
  027b50c  fmuls 1, 4, 1
  027b510  fsel 2, 2, 26, 6
  027b514  fsel 4, 5, 26, 3
  027b518  fsel 5, 8, 26, 1
  027b51c  fsel 29, 29, 2, 6
  027b520  std 28, 168(1)
  027b524  fsel 30, 30, 4, 3
  027b528  fsel 31, 31, 5, 1
  027b52c  lfs 1, 0(30)
  027b530  lfs 2, 16(30)
  027b534  fadds 1, 1, 2
  027b538  fcmpu 0, 1, 27
  027b53c  fcmpu 1, 1, 26
  027b540  stfs 1, 0(30)
  027b544  bt 0, 0x27b554
  027b548  fsubs 1, 1, 27
  027b54c  stfs 1, 0(30)
  027b550  b 0x27b560
  027b554  bt 5, 0x27b560
  027b558  fadds 1, 1, 27
  027b55c  stfs 1, 0(30)
  027b560  addic 3, 30, 32
  027b564  bl 0x4fff60
  027b568  nop
  027b56c  lis 4, 114
  027b570  li 5, -3056
  027b574  ori 6, 3, 0
  027b578  lwz 3, 32(30)
  027b57c  cmpwi 6, 0
  027b580  lfs 1, -3056(4)
  027b584  <unknown>
  027b588  bt 2, 0x27b5b4
  027b58c  vspltisw 3, -1
  027b590  fmuls 2, 1, 28
  027b594  vslw 3, 3, 3
  027b598  vmaddfp 2, 2, 31, 3
  027b59c  fctiwz 2, 2
  027b5a0  vctsxs 2, 2, 0
  027b5a4  stfd 2, 128(1)
  027b5a8  lwz 3, 132(1)
  027b5ac  vspltw 2, 2, 0
  027b5b0  stvewx 2, 0, 31
  027b5b4  fmuls 1, 1, 28
  027b5b8  fctiwz 1, 1
  027b5bc  stfd 1, 128(1)
  027b5c0  lwz 4, 132(1)
  027b5c4  subc 3, 4, 3
  027b5c8  extsw 3, 3
  027b5cc  bl 0x502730
  027b5d0  nop
  027b5d4  lis 3, 114
  027b5d8  lfs 2, -3056(3)
  027b5dc  fmuls 2, 2, 28
  027b5e0  lis 3, 16448
  027b5e4  lis 4, 4160
  027b5e8  ori 3, 3, 65535
  027b5ec  ori 4, 4, 65535
  027b5f0  fctidz 2, 2
  027b5f4  fcfid 2, 2
  027b5f8  frsp 2, 2
  027b5fc  fdivs 1, 1, 2
  027b600  fsubs 1, 25, 1
  027b604  fabs 1, 1
  027b608  bl 0x5027bc
  027b60c  nop
  027b610  lfs 1, 0(30)
  027b614  ori 28, 3, 0
  027b618  bl 0x502758
  027b61c  nop
  027b620  clrlwi 5, 3, 24
  027b624  lfs 1, 48(30)
  027b628  addic 3, 1, 112
  027b62c  ori 4, 28, 0
  027b630  li 6, 53
  027b634  li 7, 1
  027b638  li 8, 2
  027b63c  li 10, 0
  027b640  bl 0x130ed0
  027b644  nop
  027b648  lfs 1, 112(1)
  027b64c  lfs 2, 116(1)
  027b650  addic 29, 29, 1
  027b654  fadds 1, 1, 31
  027b658  lfs 3, 120(1)
  027b65c  fadds 2, 2, 30
  027b660  cmpwi 29, 4
  027b664  fadds 3, 3, 29
  027b668  addic 31, 31, 4
  027b66c  addic 30, 30, 4
  027b670  stfs 1, 112(1)
  027b674  stfs 2, 116(1)
  027b678  stfs 3, 120(1)
  027b67c  bt 0, 0x27b52c
  027b680  li 0, 144
  027b684  lvx 31, 1, 0
  027b688  ld 0, 272(1)
  027b68c  mtlr 0
  027b690  lfd 25, 200(1)
  027b694  lfd 26, 208(1)
  027b698  lfd 27, 216(1)
  027b69c  lfd 28, 224(1)
  027b6a0  lfd 29, 232(1)
  027b6a4  lfd 30, 240(1)
  027b6a8  lfd 31, 248(1)
  027b6ac  ld 28, 168(1)
  027b6b0  ld 29, 176(1)
  027b6b4  ld 30, 184(1)
  027b6b8  ld 31, 192(1)
  027b6bc  addi 1, 1, 256
  027b6c0  blr

UpdateMoby_1428:   # 0x27b6d8, 0x22c bytes
  027b6d8  stdu 1, -128(1)
  027b6dc  mflr 0
  027b6e0  std 0, 144(1)
  027b6e4  std 31, 120(1)
  027b6e8  lis 4, 151
  027b6ec  ori 31, 3, 0
  027b6f0  lwz 3, -25488(4)
  027b6f4  cmpwi 3, 15
  027b6f8  bt 2, 0x27b8f0
  027b6fc  lis 3, 40
  027b700  lfs 1, 72(31)
  027b704  lis 4, 114
  027b708  addi 3, 3, -18748
  027b70c  lfs 2, 0(3)
  027b710  lfs 3, -3052(4)
  027b714  fmuls 2, 3, 2
  027b718  bl 0x502578
  027b71c  nop
  027b720  lwz 5, 36(31)
  027b724  lis 4, 123
  027b728  stfs 1, 72(31)
  027b72c  lbz 3, 32(31)
  027b730  cmpwi 3, 1
  027b734  lfs 1, 36(5)
  027b738  lfs 2, -22976(4)
  027b73c  fmuls 1, 1, 2
  027b740  stfs 1, 44(31)
  027b744  bt 1, 0x27b75c
  027b748  cmpwi 3, -1
  027b74c  bf 1, 0x27b8f0
  027b750  cmpwi 3, 0
  027b754  bf 1, 0x27b770
  027b758  b 0x27b7c0
  027b75c  cmpwi 3, 2
  027b760  bf 1, 0x27b850
  027b764  cmpwi 3, 3
  027b768  bf 1, 0x27b8e0
  027b76c  b 0x27b8f0
  027b770  ori 3, 31, 0
  027b774  bl 0x27b278
  027b778  lis 3, 151
  027b77c  addic 3, 3, -16400
  027b780  lbz 3, 2(3)
  027b784  cmpwi 3, 0
  027b788  bt 2, 0x27b79c
  027b78c  ori 3, 31, 0
  027b790  bl 0xefb38
  027b794  nop
  027b798  b 0x27b8f0
  027b79c  lis 3, 40
  027b7a0  lfs 1, 24(31)
  027b7a4  addi 3, 3, -18748
  027b7a8  lfs 2, 4(3)
  027b7ac  li 3, 1
  027b7b0  fadds 1, 1, 2
  027b7b4  stb 3, 32(31)
  027b7b8  stfs 1, 24(31)
  027b7bc  b 0x27b8f0
  027b7c0  ori 3, 31, 0
  027b7c4  bl 0x27b3b0
  027b7c8  lis 3, 151
  027b7cc  lfs 1, 20(31)
  027b7d0  lfs 2, 16(31)
  027b7d4  addic 3, 3, -25376
  027b7d8  lfs 3, 24(31)
  027b7dc  lis 4, 40
  027b7e0  lfs 4, 132(3)
  027b7e4  lfs 5, 128(3)
  027b7e8  fsubs 1, 1, 4
  027b7ec  fsubs 2, 2, 5
  027b7f0  lfs 4, 136(3)
  027b7f4  fsubs 3, 3, 4
  027b7f8  addi 4, 4, -18748
  027b7fc  fmuls 1, 1, 1
  027b800  fmadds 1, 2, 2, 1
  027b804  lfs 2, 8(4)
  027b808  fmadds 1, 3, 3, 1
  027b80c  fsqrts 1, 1
  027b810  fcmpu 0, 1, 2
  027b814  cror 6, 1, 2
  027b818  bt 6, 0x27b8f0
  027b81c  lwz 3, 8324(3)
  027b820  cmpwi 3, 50
  027b824  bt 2, 0x27b8f0
  027b828  lhz 5, 52(31)
  027b82c  li 3, 1
  027b830  li 4, 0
  027b834  ori 5, 5, 65
  027b838  sth 5, 52(31)
  027b83c  bl 0x167e60
  027b840  nop
  027b844  li 3, 2
  027b848  stb 3, 32(31)
  027b84c  b 0x27b8f0
  027b850  lis 3, 161
  027b854  lwz 3, 1800(3)
  027b858  cmpwi 3, 2
  027b85c  bt 2, 0x27b8f0
  027b860  li 3, 17002
  027b864  li 4, -1
  027b868  bl 0x112a38
  027b86c  nop
  027b870  lis 3, 40
  027b874  vspltisw 2, -1
  027b878  li 5, 12
  027b87c  addi 3, 3, -18748
  027b880  lis 4, 114
  027b884  li 6, -3056
  027b888  vslw 2, 2, 2
  027b88c  li 7, 1
  027b890  <unknown>
  027b894  li 8, 3
  027b898  lis 3, 151
  027b89c  vspltw 3, 3, 0
  027b8a0  <unknown>
  027b8a4  lis 5, 161
  027b8a8  li 6, 23680
  027b8ac  addic 9, 3, -16400
  027b8b0  vmaddfp 2, 4, 3, 2
  027b8b4  li 3, 0
  027b8b8  li 4, -1
  027b8bc  vctsxs 2, 2, 0
  027b8c0  vspltw 2, 2, 0
  027b8c4  stvewx 2, 6, 5
  027b8c8  stb 7, 2(9)
  027b8cc  stb 7, 120(9)
  027b8d0  stb 8, 32(31)
  027b8d4  bl 0xe8aa4
  027b8d8  nop
  027b8dc  b 0x27b8f0
  027b8e0  ori 3, 31, 0
  027b8e4  bl 0xefb38
  027b8e8  nop
  027b8ec  b 0x27b8f0
  027b8f0  ld 0, 144(1)
  027b8f4  mtlr 0
  027b8f8  ld 31, 120(1)
  027b8fc  addi 1, 1, 128
  027b900  blr
