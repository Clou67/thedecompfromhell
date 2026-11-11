# game/update/moby1240.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1240_0021b114:   # 0x21b114, 0x14 bytes
  021b114  lis 3, 119
  021b118  lis 4, 1
  021b11c  addic 3, 3, -15004
  021b120  stw 4, 72(3)
  021b124  blr

UpdateMoby_1240:   # 0x21b170, 0x474 bytes
  021b170  stdu 1, -384(1)
  021b174  mflr 0
  021b178  std 0, 400(1)
  021b17c  stfd 14, 240(1)
  021b180  stfd 15, 248(1)
  021b184  stfd 16, 256(1)
  021b188  stfd 17, 264(1)
  021b18c  stfd 18, 272(1)
  021b190  stfd 19, 280(1)
  021b194  stfd 20, 288(1)
  021b198  stfd 21, 296(1)
  021b19c  stfd 22, 304(1)
  021b1a0  stfd 23, 312(1)
  021b1a4  stfd 24, 320(1)
  021b1a8  stfd 25, 328(1)
  021b1ac  stfd 26, 336(1)
  021b1b0  stfd 27, 344(1)
  021b1b4  stfd 28, 352(1)
  021b1b8  stfd 29, 360(1)
  021b1bc  stfd 30, 368(1)
  021b1c0  stfd 31, 376(1)
  021b1c4  std 30, 224(1)
  021b1c8  li 4, 128
  021b1cc  std 31, 232(1)
  021b1d0  lwz 30, 120(3)
  021b1d4  std 29, 216(1)
  021b1d8  ori 31, 3, 0
  021b1dc  li 29, 0
  021b1e0  stb 4, 48(3)
  021b1e4  lwz 3, 12(30)
  021b1e8  std 28, 208(1)
  021b1ec  std 27, 200(1)
  021b1f0  std 26, 192(1)
  021b1f4  std 25, 184(1)
  021b1f8  std 24, 176(1)
  021b1fc  cmpwi 3, 0
  021b200  bf 1, 0x21b56c
  021b204  lis 3, 34
  021b208  addi 3, 3, -20184
  021b20c  lfs 31, 0(3)
  021b210  lfs 30, 4(3)
  021b214  lfs 29, 8(3)
  021b218  lfs 28, 12(3)
  021b21c  lfs 27, 16(3)
  021b220  lfs 26, 20(3)
  021b224  lfs 25, 24(3)
  021b228  lfs 24, 28(3)
  021b22c  lfs 23, 32(3)
  021b230  lfs 22, 36(3)
  021b234  lfs 21, 40(3)
  021b238  lfs 20, 44(3)
  021b23c  lfs 19, 48(3)
  021b240  lfs 18, 52(3)
  021b244  lfs 17, 56(3)
  021b248  lfs 16, 60(3)
  021b24c  lfs 15, 64(3)
  021b250  stfs 17, 168(1)
  021b254  li 3, 100
  021b258  stfs 16, 164(1)
  021b25c  stfs 15, 160(1)
  021b260  bl 0xfc620
  021b264  nop
  021b268  lis 4, 119
  021b26c  lfs 1, 16(31)
  021b270  lfs 2, 20(31)
  021b274  ori 27, 3, 0
  021b278  lfs 3, 24(31)
  021b27c  lwz 3, -14860(4)
  021b280  lfs 4, 28(31)
  021b284  lfs 5, 72(31)
  021b288  stfs 1, 128(1)
  021b28c  extsw 26, 3
  021b290  fmr 1, 5
  021b294  stfs 2, 132(1)
  021b298  subc 28, 27, 26
  021b29c  stfs 3, 136(1)
  021b2a0  stfs 4, 140(1)
  021b2a4  fmr 2, 31
  021b2a8  rldicl 28, 28, 1, 63
  021b2ac  bl 0x502578
  021b2b0  nop
  021b2b4  fadds 1, 1, 30
  021b2b8  fsubs 2, 29, 1
  021b2bc  fsubs 3, 28, 1
  021b2c0  fsub 4, 1, 2
  021b2c4  fsel 1, 4, 2, 1
  021b2c8  lfs 2, 16(30)
  021b2cc  fsub 4, 3, 1
  021b2d0  fsel 3, 4, 3, 1
  021b2d4  fneg 1, 2
  021b2d8  fmuls 4, 3, 3
  021b2dc  fmuls 5, 4, 3
  021b2e0  fmuls 6, 4, 5
  021b2e4  fmadds 3, 5, 27, 3
  021b2e8  fmuls 5, 4, 6
  021b2ec  fmadds 3, 6, 26, 3
  021b2f0  fmuls 4, 4, 5
  021b2f4  fmadds 3, 5, 25, 3
  021b2f8  fmadds 14, 4, 24, 3
  021b2fc  bl 0xfcbe8
  021b300  nop
  021b304  fmr 15, 1
  021b308  lfs 1, 72(31)
  021b30c  fmr 2, 31
  021b310  bl 0x502578
  021b314  nop
  021b318  fsubs 2, 29, 1
  021b31c  fsubs 3, 28, 1
  021b320  fsub 4, 1, 2
  021b324  fsel 1, 4, 2, 1
  021b328  lfs 2, 16(30)
  021b32c  fsub 4, 3, 1
  021b330  fsel 3, 4, 3, 1
  021b334  fneg 1, 2
  021b338  fmuls 4, 3, 3
  021b33c  fmuls 5, 4, 3
  021b340  fmuls 6, 4, 5
  021b344  fmadds 3, 5, 27, 3
  021b348  fmuls 5, 4, 6
  021b34c  fmadds 3, 6, 26, 3
  021b350  fmuls 4, 4, 5
  021b354  fmadds 3, 5, 25, 3
  021b358  fmadds 16, 4, 24, 3
  021b35c  bl 0xfcbe8
  021b360  nop
  021b364  lfs 2, 20(30)
  021b368  fmr 17, 1
  021b36c  fneg 1, 2
  021b370  bl 0xfcbe8
  021b374  nop
  021b378  lfs 2, 128(1)
  021b37c  lis 25, 119
  021b380  lfs 3, 132(1)
  021b384  lis 24, 119
  021b388  fmadds 2, 14, 15, 2
  021b38c  lfs 4, 136(1)
  021b390  fmadds 3, 16, 17, 3
  021b394  fadds 4, 4, 1
  021b398  lfs 1, -14868(25)
  021b39c  lfs 5, -14872(24)
  021b3a0  stfs 2, 128(1)
  021b3a4  stfs 3, 132(1)
  021b3a8  fmr 2, 5
  021b3ac  stfs 4, 136(1)
  021b3b0  bl 0xfcbe8
  021b3b4  nop
  021b3b8  fmr 17, 1
  021b3bc  lfs 1, -14868(25)
  021b3c0  lfs 3, -14872(24)
  021b3c4  fmr 2, 3
  021b3c8  bl 0xfcbe8
  021b3cc  nop
  021b3d0  fmr 16, 1
  021b3d4  lfs 1, -14868(25)
  021b3d8  lfs 2, -14872(24)
  021b3dc  bl 0xfcbe8
  021b3e0  nop
  021b3e4  fsub 4, 17, 16
  021b3e8  lis 4, 114
  021b3ec  lfs 2, 72(31)
  021b3f0  lfs 3, 68(31)
  021b3f4  addic 3, 1, 144
  021b3f8  fneg 3, 3
  021b3fc  lfs 5, -3052(4)
  021b400  fsel 4, 4, 17, 16
  021b404  fsub 6, 4, 1
  021b408  fsel 1, 6, 4, 1
  021b40c  fmuls 1, 5, 1
  021b410  bl 0xfe610
  021b414  nop
  021b418  lfs 15, 160(1)
  021b41c  cmpw 27, 26
  021b420  lfs 16, 164(1)
  021b424  lfs 17, 168(1)
  021b428  bf 0, 0x21b47c
  021b42c  fmr 1, 23
  021b430  fmr 2, 22
  021b434  bl 0xfcbe8
  021b438  nop
  021b43c  lfs 2, 144(1)
  021b440  lfs 3, 148(1)
  021b444  fmuls 4, 2, 1
  021b448  lfs 2, 152(1)
  021b44c  fmuls 3, 3, 1
  021b450  fmuls 5, 2, 1
  021b454  fmr 1, 21
  021b458  fmr 2, 20
  021b45c  stfs 4, 144(1)
  021b460  stfs 3, 148(1)
  021b464  stfs 5, 152(1)
  021b468  bl 0xfcbe8
  021b46c  nop
  021b470  fmr 2, 1
  021b474  lfs 1, 4(30)
  021b478  b 0x21b494
  021b47c  fmr 1, 19
  021b480  fmr 2, 18
  021b484  bl 0xfcbe8
  021b488  nop
  021b48c  fmr 2, 1
  021b490  lfs 1, 4(30)
  021b494  lis 3, 119
  021b498  lis 27, 119
  021b49c  fmuls 14, 1, 2
  021b4a0  fmr 1, 23
  021b4a4  fmr 2, 17
  021b4a8  lwz 3, -14880(3)
  021b4ac  lwz 4, -14876(27)
  021b4b0  extsw 26, 3
  021b4b4  extsw 25, 4
  021b4b8  bl 0xfcbe8
  021b4bc  nop
  021b4c0  ori 4, 25, 0
  021b4c4  ori 3, 26, 0
  021b4c8  bl 0x5027bc
  021b4cc  nop
  021b4d0  lwz 4, -14876(27)
  021b4d4  ori 27, 3, 0
  021b4d8  extsw 26, 4
  021b4dc  fmr 1, 16
  021b4e0  fmr 2, 23
  021b4e4  rlwinm 25, 26, 0, 0, 7
  021b4e8  bl 0xfcbe8
  021b4ec  nop
  021b4f0  ori 3, 26, 0
  021b4f4  ori 4, 25, 0
  021b4f8  bl 0x5027bc
  021b4fc  nop
  021b500  lfs 1, 8(30)
  021b504  lis 4, 114
  021b508  ori 26, 3, 0
  021b50c  fmuls 1, 1, 15
  021b510  lfs 2, -3056(4)
  021b514  fmuls 1, 2, 1
  021b518  bl 0x502758
  021b51c  nop
  021b520  lis 6, 119
  021b524  lfs 2, 0(30)
  021b528  lis 7, 114
  021b52c  fmr 1, 14
  021b530  ori 5, 3, 0
  021b534  addic 3, 1, 128
  021b538  addic 4, 1, 144
  021b53c  lfs 3, -14864(6)
  021b540  lfs 4, -3048(7)
  021b544  ori 8, 27, 0
  021b548  ori 9, 26, 0
  021b54c  ori 10, 28, 0
  021b550  fmuls 3, 3, 4
  021b554  bl 0x131e50
  021b558  nop
  021b55c  lwz 3, 12(30)
  021b560  addic 29, 29, 1
  021b564  cmpw 29, 3
  021b568  bt 0, 0x21b250
  021b56c  ld 0, 400(1)
  021b570  mtlr 0
  021b574  lfd 14, 240(1)
  021b578  lfd 15, 248(1)
  021b57c  lfd 16, 256(1)
  021b580  lfd 17, 264(1)
  021b584  lfd 18, 272(1)
  021b588  lfd 19, 280(1)
  021b58c  lfd 20, 288(1)
  021b590  lfd 21, 296(1)
  021b594  lfd 22, 304(1)
  021b598  lfd 23, 312(1)
  021b59c  lfd 24, 320(1)
  021b5a0  lfd 25, 328(1)
  021b5a4  lfd 26, 336(1)
  021b5a8  lfd 27, 344(1)
  021b5ac  lfd 28, 352(1)
  021b5b0  lfd 29, 360(1)
  021b5b4  lfd 30, 368(1)
  021b5b8  lfd 31, 376(1)
  021b5bc  ld 24, 176(1)
  021b5c0  ld 25, 184(1)
  021b5c4  ld 26, 192(1)
  021b5c8  ld 27, 200(1)
  021b5cc  ld 28, 208(1)
  021b5d0  ld 29, 216(1)
  021b5d4  ld 30, 224(1)
  021b5d8  ld 31, 232(1)
  021b5dc  addi 1, 1, 384
  021b5e0  blr
