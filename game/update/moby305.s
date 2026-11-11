# game/update/moby305.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M305_00339e00:   # 0x339e00, 0x390 bytes
  0339e00  stdu 1, -288(1)
  0339e04  mflr 0
  0339e08  std 0, 304(1)
  0339e0c  stfd 21, 200(1)
  0339e10  stfd 22, 208(1)
  0339e14  stfd 23, 216(1)
  0339e18  stfd 24, 224(1)
  0339e1c  stfd 25, 232(1)
  0339e20  stfd 26, 240(1)
  0339e24  stfd 27, 248(1)
  0339e28  stfd 28, 256(1)
  0339e2c  stfd 29, 264(1)
  0339e30  stfd 30, 272(1)
  0339e34  stfd 31, 280(1)
  0339e38  std 27, 160(1)
  0339e3c  std 30, 184(1)
  0339e40  std 28, 168(1)
  0339e44  li 27, 0
  0339e48  ori 30, 3, 0
  0339e4c  std 31, 192(1)
  0339e50  lwz 28, 120(3)
  0339e54  std 29, 176(1)
  0339e58  ori 31, 27, 0
  0339e5c  ori 29, 4, 0
  0339e60  lwz 3, 44(28)
  0339e64  cmpwi 3, 0
  0339e68  bt 2, 0x339e74
  0339e6c  bl 0x11e6ec
  0339e70  nop
  0339e74  addic 27, 27, 1
  0339e78  stw 31, 44(28)
  0339e7c  cmpwi 27, 17
  0339e80  addic 28, 28, 4
  0339e84  bt 0, 0x339e60
  0339e88  cmpwi 29, 0
  0339e8c  bt 2, 0x339fd8
  0339e90  lis 3, 52
  0339e94  ori 28, 31, 0
  0339e98  addi 3, 3, -25144
  0339e9c  addic 29, 30, 16
  0339ea0  lfs 24, 0(3)
  0339ea4  lfs 25, 4(3)
  0339ea8  lfs 26, 8(3)
  0339eac  lfs 27, 12(3)
  0339eb0  lfs 28, 16(3)
  0339eb4  lfs 29, 20(3)
  0339eb8  lfs 30, 24(3)
  0339ebc  lfs 31, 28(3)
  0339ec0  fmr 1, 25
  0339ec4  fmr 2, 26
  0339ec8  bl 0xfcbe8
  0339ecc  nop
  0339ed0  fmr 23, 1
  0339ed4  fmr 1, 25
  0339ed8  fmr 2, 26
  0339edc  bl 0xfcbe8
  0339ee0  nop
  0339ee4  fmr 22, 1
  0339ee8  fmr 1, 25
  0339eec  fmr 2, 26
  0339ef0  bl 0xfcbe8
  0339ef4  nop
  0339ef8  lis 3, 114
  0339efc  fmr 21, 1
  0339f00  lfs 2, -3052(3)
  0339f04  fmuls 1, 2, 27
  0339f08  fmuls 2, 2, 28
  0339f0c  bl 0xfcbe8
  0339f10  nop
  0339f14  fmuls 2, 22, 22
  0339f18  lis 3, 114
  0339f1c  fmadds 2, 23, 23, 2
  0339f20  lfs 3, -3056(3)
  0339f24  stw 31, 124(1)
  0339f28  fmuls 4, 3, 29
  0339f2c  fmuls 3, 3, 30
  0339f30  fmadds 2, 21, 21, 2
  0339f34  fctiwz 4, 4
  0339f38  fctiwz 3, 3
  0339f3c  fsqrts 2, 2
  0339f40  stfd 4, 144(1)
  0339f44  lwz 3, 148(1)
  0339f48  stfd 3, 144(1)
  0339f4c  lwz 4, 148(1)
  0339f50  extsw 3, 3
  0339f54  extsw 4, 4
  0339f58  fdivs 1, 1, 2
  0339f5c  fsub 3, 24, 2
  0339f60  fsub 4, 24, 2
  0339f64  fsub 5, 24, 2
  0339f68  fsub 6, 2, 24
  0339f6c  fsub 7, 2, 24
  0339f70  fsub 2, 2, 24
  0339f74  fmuls 8, 23, 1
  0339f78  fmuls 9, 22, 1
  0339f7c  fmuls 1, 21, 1
  0339f80  fsel 3, 3, 24, 8
  0339f84  fsel 4, 4, 24, 9
  0339f88  fsel 5, 5, 24, 1
  0339f8c  fsel 3, 6, 3, 8
  0339f90  fsel 4, 7, 4, 9
  0339f94  fsel 1, 2, 5, 1
  0339f98  stfs 3, 112(1)
  0339f9c  stfs 4, 116(1)
  0339fa0  stfs 1, 120(1)
  0339fa4  bl 0xfe484
  0339fa8  nop
  0339fac  lis 5, 32559
  0339fb0  ori 6, 3, 0
  0339fb4  fmr 1, 31
  0339fb8  addic 4, 1, 112
  0339fbc  ori 3, 29, 0
  0339fc0  ori 5, 5, 20335
  0339fc4  bl 0x128248
  0339fc8  nop
  0339fcc  addic 28, 28, 1
  0339fd0  cmpwi 28, 5
  0339fd4  bt 0, 0x339ec0
  0339fd8  lis 3, 52
  0339fdc  addic 30, 30, 16
  0339fe0  addi 3, 3, -25144
  0339fe4  ori 29, 31, 0
  0339fe8  lfs 25, 8(3)
  0339fec  lfs 26, 32(3)
  0339ff0  lfs 27, 36(3)
  0339ff4  lfs 28, 40(3)
  0339ff8  lfs 29, 44(3)
  0339ffc  lfs 30, 48(3)
  033a000  lfs 31, 52(3)
  033a004  li 4, 128
  033a008  li 3, 32
  033a00c  bl 0xfe484
  033a010  nop
  033a014  lis 4, 96
  033a018  ori 4, 4, 24672
  033a01c  rlwimi 4, 3, 24, 0, 7
  033a020  li 3, 2
  033a024  extsw 27, 4
  033a028  bl 0xfc620
  033a02c  nop
  033a030  li 4, 0
  033a034  stw 31, 128(1)
  033a038  li 5, 1
  033a03c  fmr 1, 26
  033a040  subc 3, 4, 3
  033a044  stw 31, 132(1)
  033a048  li 6, -1
  033a04c  fmr 2, 27
  033a050  cntlzw 3, 3
  033a054  lis 4, 16256
  033a058  sldi 3, 3, 58
  033a05c  subc 5, 5, 6
  033a060  sradi 3, 3, 63
  033a064  stw 4, 136(1)
  033a068  and 3, 3, 5
  033a06c  stw 4, 140(1)
  033a070  addc 28, 6, 3
  033a074  bl 0xfcbe8
  033a078  nop
  033a07c  lis 3, 114
  033a080  ori 7, 28, 0
  033a084  fmr 2, 25
  033a088  ori 10, 27, 0
  033a08c  fmr 4, 30
  033a090  addic 8, 1, 128
  033a094  lfs 3, -3064(3)
  033a098  ori 3, 30, 0
  033a09c  fmuls 5, 1, 3
  033a0a0  fmr 1, 28
  033a0a4  fmr 3, 29
  033a0a8  stfs 5, 136(1)
  033a0ac  bl 0x126f50
  033a0b0  nop
  033a0b4  ori 28, 3, 0
  033a0b8  cmpwi 28, 0
  033a0bc  bt 2, 0x33a134
  033a0c0  li 3, 50
  033a0c4  li 4, 80
  033a0c8  bl 0xfe484
  033a0cc  nop
  033a0d0  extsw 3, 3
  033a0d4  li 4, 2
  033a0d8  std 3, 144(1)
  033a0dc  lis 3, 114
  033a0e0  srawi 5, 27, 24
  033a0e4  lfs 1, -3056(3)
  033a0e8  lfd 2, 144(1)
  033a0ec  li 3, 2
  033a0f0  fcfid 2, 2
  033a0f4  frsp 2, 2
  033a0f8  fadds 2, 2, 31
  033a0fc  fmuls 1, 1, 2
  033a100  fctiwz 1, 1
  033a104  stfd 1, 144(1)
  033a108  lwz 6, 148(1)
  033a10c  stw 4, 36(28)
  033a110  sth 6, 10(28)
  033a114  stb 5, 42(28)
  033a118  stb 6, 43(28)
  033a11c  bl 0xfc620
  033a120  nop
  033a124  cmpwi 3, 0
  033a128  bt 2, 0x33a134
  033a12c  li 3, 68
  033a130  stb 3, 3(28)
  033a134  addic 29, 29, 1
  033a138  cmpwi 29, 3
  033a13c  bt 0, 0x33a004
  033a140  ld 0, 304(1)
  033a144  mtlr 0
  033a148  lfd 21, 200(1)
  033a14c  lfd 22, 208(1)
  033a150  lfd 23, 216(1)
  033a154  lfd 24, 224(1)
  033a158  lfd 25, 232(1)
  033a15c  lfd 26, 240(1)
  033a160  lfd 27, 248(1)
  033a164  lfd 28, 256(1)
  033a168  lfd 29, 264(1)
  033a16c  lfd 30, 272(1)
  033a170  lfd 31, 280(1)
  033a174  ld 27, 160(1)
  033a178  ld 28, 168(1)
  033a17c  ld 29, 176(1)
  033a180  ld 30, 184(1)
  033a184  ld 31, 192(1)
  033a188  addi 1, 1, 288
  033a18c  blr

FUN_0033a1d0:   # 0x33a1d0, 0xa04 bytes
  033a1d0  stdu 1, -432(1)
  033a1d4  mflr 0
  033a1d8  std 0, 448(1)
  033a1dc  stfd 20, 336(1)
  033a1e0  stfd 21, 344(1)
  033a1e4  stfd 22, 352(1)
  033a1e8  stfd 23, 360(1)
  033a1ec  stfd 24, 368(1)
  033a1f0  stfd 25, 376(1)
  033a1f4  stfd 26, 384(1)
  033a1f8  stfd 27, 392(1)
  033a1fc  stfd 28, 400(1)
  033a200  stfd 29, 408(1)
  033a204  stfd 30, 416(1)
  033a208  stfd 31, 424(1)
  033a20c  std 30, 320(1)
  033a210  lis 4, 0
  033a214  ori 30, 3, 0
  033a218  std 29, 312(1)
  033a21c  fmr 28, 4
  033a220  li 29, 432
  033a224  fmr 29, 3
  033a228  li 3, 305
  033a22c  std 28, 304(1)
  033a230  fmr 30, 2
  033a234  addc 28, 1, 29
  033a238  std 27, 296(1)
  033a23c  fmr 31, 1
  033a240  addic 29, 29, 64
  033a244  std 5, 64(28)
  033a248  std 6, 72(28)
  033a24c  std 31, 328(1)
  033a250  std 26, 288(1)
  033a254  std 25, 280(1)
  033a258  std 24, 272(1)
  033a25c  std 23, 264(1)
  033a260  lwz 27, 116(28)
  033a264  bl 0xefa28
  033a268  nop
  033a26c  ori 31, 3, 0
  033a270  cmpwi 31, 0
  033a274  bt 2, 0x33ab6c
  033a278  lwz 25, 120(31)
  033a27c  li 3, 127
  033a280  fmr 1, 28
  033a284  li 4, 1
  033a288  lis 5, 129
  033a28c  stw 30, 32(25)
  033a290  addic 6, 5, 7524
  033a294  stb 3, 48(31)
  033a298  stb 4, 49(31)
  033a29c  lfs 2, 7524(5)
  033a2a0  sth 3, 50(31)
  033a2a4  ld 3, 56(30)
  033a2a8  stfs 2, 64(31)
  033a2ac  std 3, 56(31)
  033a2b0  lfs 2, 4(6)
  033a2b4  bl 0x502578
  033a2b8  nop
  033a2bc  stfs 1, 68(31)
  033a2c0  cmpwi 27, 0
  033a2c4  stfs 29, 72(31)
  033a2c8  lfs 1, 64(28)
  033a2cc  stfs 1, 16(31)
  033a2d0  lfs 1, 68(28)
  033a2d4  stfs 1, 20(31)
  033a2d8  lfs 1, 72(28)
  033a2dc  stfs 1, 24(31)
  033a2e0  lfs 1, 76(28)
  033a2e4  stfs 1, 28(31)
  033a2e8  bt 2, 0x33a348
  033a2ec  lfs 1, 16(27)
  033a2f0  ori 3, 27, 0
  033a2f4  stfs 1, 0(25)
  033a2f8  lfs 1, 20(27)
  033a2fc  stfs 1, 4(25)
  033a300  lfs 1, 24(27)
  033a304  stfs 1, 8(25)
  033a308  lfs 1, 28(27)
  033a30c  stfs 1, 12(25)
  033a310  bl 0xfcccc
  033a314  nop
  033a318  ori 27, 3, 0
  033a31c  cmpwi 27, 0
  033a320  bt 2, 0x33a330
  033a324  lfs 1, 8(25)
  033a328  lfs 2, 16(27)
  033a32c  b 0x33a340
  033a330  lis 3, 52
  033a334  lfs 1, 8(25)
  033a338  addi 3, 3, -24176
  033a33c  lfs 2, 0(3)
  033a340  fadds 1, 1, 2
  033a344  b 0x33a364
  033a348  lis 3, 52
  033a34c  li 4, 0
  033a350  addi 3, 3, -24176
  033a354  lfs 1, 4(3)
  033a358  stw 4, 12(25)
  033a35c  stw 4, 4(25)
  033a360  stw 4, 0(25)
  033a364  lis 3, 52
  033a368  stfs 1, 8(25)
  033a36c  li 24, 0
  033a370  vspltisw 4, -1
  033a374  addi 3, 3, -24176
  033a378  vspltisw 5, -8
  033a37c  li 4, 8
  033a380  lis 5, 114
  033a384  li 6, -3056
  033a388  vslw 4, 4, 4
  033a38c  ori 8, 28, 0
  033a390  lfs 1, 4(3)
  033a394  stw 24, 16(25)
  033a398  lis 28, 151
  033a39c  stw 24, 20(25)
  033a3a0  stfs 30, 28(25)
  033a3a4  stfs 31, 24(25)
  033a3a8  addic 28, 28, -25432
  033a3ac  <unknown>
  033a3b0  <unknown>
  033a3b4  vspltw 2, 2, 0
  033a3b8  li 3, 15
  033a3bc  li 9, 36
  033a3c0  fmr 31, 1
  033a3c4  li 10, 38
  033a3c8  vmaddfp 2, 3, 2, 4
  033a3cc  <unknown>
  033a3d0  vspltisw 3, 10
  033a3d4  vsrw 4, 6, 5
  033a3d8  addc 4, 1, 29
  033a3dc  addic 3, 1, 112
  033a3e0  clrldi 4, 4, 32
  033a3e4  vmulosh 3, 4, 3
  033a3e8  li 5, 0
  033a3ec  ori 6, 30, 0
  033a3f0  li 7, 0
  033a3f4  vctsxs 2, 2, 0
  033a3f8  vadduwm 2, 2, 3
  033a3fc  vsplth 2, 2, 1
  033a400  stvehx 2, 9, 25
  033a404  stvehx 2, 10, 25
  033a408  stw 24, 40(25)
  033a40c  lfs 1, 16(30)
  033a410  stfs 1, 112(1)
  033a414  lfs 1, 20(30)
  033a418  lfs 2, 72(8)
  033a41c  stfs 1, 116(1)
  033a420  lfs 1, 28(30)
  033a424  stfs 2, 120(1)
  033a428  stfs 1, 124(1)
  033a42c  bl 0x57820
  033a430  nop
  033a434  cmpwi 3, 0
  033a438  bt 2, 0x33aa44
  033a43c  lis 3, 52
  033a440  lfs 2, 72(31)
  033a444  addic 29, 1, 128
  033a448  addi 23, 3, -24176
  033a44c  lis 3, 114
  033a450  lfs 1, 12(23)
  033a454  lfs 4, -3052(3)
  033a458  lfs 3, 68(31)
  033a45c  ori 3, 29, 0
  033a460  fmuls 1, 4, 1
  033a464  fneg 3, 3
  033a468  bl 0xfe610
  033a46c  nop
  033a470  lis 3, 161
  033a474  ori 30, 24, 0
  033a478  addic 3, 3, 2368
  033a47c  addic 26, 31, 16
  033a480  addic 27, 3, 64
  033a484  lfs 1, 32(3)
  033a488  stfs 1, 16(31)
  033a48c  lfs 1, 36(3)
  033a490  stfs 1, 20(31)
  033a494  lfs 1, 40(3)
  033a498  stfs 1, 24(31)
  033a49c  lfs 1, 44(3)
  033a4a0  stfs 1, 28(31)
  033a4a4  lfs 30, 16(23)
  033a4a8  lfs 29, 20(23)
  033a4ac  lfs 28, 0(23)
  033a4b0  lfs 27, 24(23)
  033a4b4  lfs 26, 28(23)
  033a4b8  lfs 25, 32(23)
  033a4bc  lfs 24, 36(23)
  033a4c0  lfs 23, 40(23)
  033a4c4  fmr 1, 30
  033a4c8  fmr 2, 29
  033a4cc  bl 0xfcbe8
  033a4d0  nop
  033a4d4  fmr 22, 1
  033a4d8  fmr 1, 30
  033a4dc  fmr 2, 29
  033a4e0  bl 0xfcbe8
  033a4e4  nop
  033a4e8  fmr 21, 1
  033a4ec  fmr 1, 30
  033a4f0  fmr 2, 29
  033a4f4  bl 0xfcbe8
  033a4f8  nop
  033a4fc  addic 23, 1, 144
  033a500  fmr 20, 1
  033a504  ori 4, 29, 0
  033a508  ori 3, 23, 0
  033a50c  ori 5, 27, 0
  033a510  bl 0x500608
  033a514  nop
  033a518  lfs 3, 148(1)
  033a51c  lfs 4, 144(1)
  033a520  fmuls 2, 21, 21
  033a524  fmuls 1, 3, 3
  033a528  lfs 5, 152(1)
  033a52c  lis 3, 114
  033a530  fmadds 2, 22, 22, 2
  033a534  fmadds 1, 4, 4, 1
  033a538  fmadds 2, 20, 20, 2
  033a53c  fmadds 1, 5, 5, 1
  033a540  fsqrts 6, 2
  033a544  lfs 2, -3052(3)
  033a548  fsqrts 1, 1
  033a54c  fsub 8, 31, 6
  033a550  fsub 9, 31, 6
  033a554  fsub 10, 31, 6
  033a558  fsub 11, 6, 31
  033a55c  fsub 12, 6, 31
  033a560  fmuls 7, 1, 28
  033a564  fmuls 1, 2, 27
  033a568  fmuls 2, 2, 26
  033a56c  fdivs 7, 7, 6
  033a570  fsub 6, 6, 31
  033a574  fmuls 13, 20, 7
  033a578  fmuls 0, 21, 7
  033a57c  fmuls 7, 22, 7
  033a580  fsel 8, 8, 31, 13
  033a584  fsel 9, 9, 31, 0
  033a588  fsel 10, 10, 31, 7
  033a58c  fsel 8, 11, 8, 13
  033a590  fsel 9, 12, 9, 0
  033a594  fsel 6, 6, 10, 7
  033a598  fadds 5, 5, 8
  033a59c  fadds 3, 3, 9
  033a5a0  fadds 4, 4, 6
  033a5a4  stfs 5, 152(1)
  033a5a8  stfs 3, 148(1)
  033a5ac  stfs 4, 144(1)
  033a5b0  bl 0xfcbe8
  033a5b4  nop
  033a5b8  lfs 2, 148(1)
  033a5bc  lfs 3, 144(1)
  033a5c0  fmuls 4, 2, 2
  033a5c4  lfs 5, 152(1)
  033a5c8  lis 3, 114
  033a5cc  fmadds 4, 3, 3, 4
  033a5d0  lfs 6, -3056(3)
  033a5d4  fmuls 7, 6, 25
  033a5d8  fmuls 6, 6, 24
  033a5dc  fmadds 4, 5, 5, 4
  033a5e0  fctiwz 7, 7
  033a5e4  fctiwz 6, 6
  033a5e8  fsqrts 4, 4
  033a5ec  stfd 7, 240(1)
  033a5f0  lwz 3, 244(1)
  033a5f4  stfd 6, 240(1)
  033a5f8  lwz 4, 244(1)
  033a5fc  extsw 3, 3
  033a600  extsw 4, 4
  033a604  fdivs 1, 1, 4
  033a608  fsub 6, 31, 4
  033a60c  fsub 7, 31, 4
  033a610  fsub 8, 31, 4
  033a614  fsub 9, 4, 31
  033a618  fsub 10, 4, 31
  033a61c  fsub 4, 4, 31
  033a620  fmuls 3, 3, 1
  033a624  fmuls 2, 2, 1
  033a628  fmuls 1, 5, 1
  033a62c  fsel 5, 6, 31, 3
  033a630  fsel 6, 7, 31, 2
  033a634  fsel 7, 8, 31, 1
  033a638  fsel 3, 9, 5, 3
  033a63c  fsel 2, 10, 6, 2
  033a640  fsel 1, 4, 7, 1
  033a644  stfs 3, 144(1)
  033a648  stfs 2, 148(1)
  033a64c  stfs 1, 152(1)
  033a650  bl 0xfe484
  033a654  nop
  033a658  lis 5, 32559
  033a65c  ori 6, 3, 0
  033a660  fmr 1, 23
  033a664  ori 3, 26, 0
  033a668  ori 4, 23, 0
  033a66c  ori 5, 5, 20335
  033a670  bl 0x128248
  033a674  nop
  033a678  addic 30, 30, 1
  033a67c  cmpwi 30, 5
  033a680  bt 0, 0x33a4c4
  033a684  lbz 3, 15(28)
  033a688  cmpwi 3, 0
  033a68c  bf 2, 0x33a6b0
  033a690  ori 3, 31, 0
  033a694  li 4, 0
  033a698  bl 0x339e00
  033a69c  ori 3, 31, 0
  033a6a0  bl 0xefb38
  033a6a4  nop
  033a6a8  ori 3, 24, 0
  033a6ac  b 0x33ab70
  033a6b0  lwz 3, 40(25)
  033a6b4  addic 3, 3, 1
  033a6b8  stw 3, 40(25)
  033a6bc  lbz 4, 15(28)
  033a6c0  addic 4, 4, 5
  033a6c4  cmpw 3, 4
  033a6c8  bf 1, 0x33a6ec
  033a6cc  ori 3, 31, 0
  033a6d0  li 4, 1
  033a6d4  bl 0x339e00
  033a6d8  ori 3, 31, 0
  033a6dc  bl 0xefb38
  033a6e0  nop
  033a6e4  ori 3, 24, 0
  033a6e8  b 0x33ab70
  033a6ec  ori 3, 29, 0
  033a6f0  ori 4, 29, 0
  033a6f4  ori 5, 27, 0
  033a6f8  bl 0x500608
  033a6fc  nop
  033a700  lwz 3, 128(1)
  033a704  lwz 4, 132(1)
  033a708  lis 5, 52
  033a70c  lfs 1, 128(1)
  033a710  lfs 2, 132(1)
  033a714  fabs 4, 1
  033a718  addi 5, 5, -24176
  033a71c  fabs 3, 2
  033a720  rlwinm 4, 4, 3, 29, 29
  033a724  lis 29, 115
  033a728  addic 29, 29, 22784
  033a72c  fsubs 1, 4, 3
  033a730  stfs 1, 168(1)
  033a734  lfs 2, 44(5)
  033a738  lwz 5, 168(1)
  033a73c  lfs 1, 168(1)
  033a740  rlwimi 4, 5, 2, 30, 30
  033a744  fsub 5, 1, 31
  033a748  fsub 6, 1, 31
  033a74c  rlwimi 4, 3, 4, 28, 28
  033a750  ori 3, 29, 0
  033a754  rlwimi 3, 4, 2, 26, 28
  033a758  slwi 4, 4, 2
  033a75c  clrldi 3, 3, 32
  033a760  fsel 5, 5, 4, 3
  033a764  lfsx 1, 29, 4
  033a768  fsel 4, 6, 3, 4
  033a76c  lfs 3, 4(3)
  033a770  fcmpu 0, 5, 31
  033a774  bt 1, 0x33a780
  033a778  fmr 1, 31
  033a77c  b 0x33a898
  033a780  fsubs 6, 4, 5
  033a784  fadds 4, 4, 5
  033a788  addic 3, 1, 16
  033a78c  li 6, 2
  033a790  addic 5, 3, 204
  033a794  addic 4, 3, 188
  033a798  mtctr 6
  033a79c  fdivs 4, 6, 4
  033a7a0  fmuls 5, 4, 4
  033a7a4  stfs 4, 216(1)
  033a7a8  stfs 4, 208(1)
  033a7ac  stfs 4, 212(1)
  033a7b0  stfs 4, 204(1)
  033a7b4  lfs 7, 216(1)
  033a7b8  lfs 8, 208(1)
  033a7bc  lfs 9, 212(1)
  033a7c0  fmuls 6, 5, 5
  033a7c4  fmuls 8, 8, 5
  033a7c8  fmuls 7, 7, 6
  033a7cc  fmuls 4, 6, 6
  033a7d0  fmuls 6, 9, 6
  033a7d4  stfs 8, 208(1)
  033a7d8  fmuls 5, 7, 5
  033a7dc  stfs 6, 212(1)
  033a7e0  stfs 5, 216(1)
  033a7e4  lfs 5, 188(3)
  033a7e8  fmuls 5, 5, 4
  033a7ec  stfs 5, 204(3)
  033a7f0  lfs 5, 4(4)
  033a7f4  addic 4, 4, 8
  033a7f8  fmuls 5, 5, 4
  033a7fc  addic 3, 3, 8
  033a800  stfs 5, 4(5)
  033a804  addic 5, 5, 8
  033a808  bdnz 0x33a7e4
  033a80c  li 5, 4
  033a810  ori 3, 1, 0
  033a814  mtctr 5
  033a818  lis 4, 115
  033a81c  addic 5, 3, 204
  033a820  addic 4, 4, 22752
  033a824  ori 7, 5, 0
  033a828  lfs 4, 204(3)
  033a82c  lfs 5, 0(4)
  033a830  fmuls 4, 4, 5
  033a834  lfs 5, 4(4)
  033a838  addic 4, 4, 8
  033a83c  stfs 4, 204(3)
  033a840  lfs 4, 4(5)
  033a844  addic 3, 3, 8
  033a848  fmuls 4, 4, 5
  033a84c  stfs 4, 4(5)
  033a850  addic 5, 5, 8
  033a854  bdnz 0x33a828
  033a858  ori 3, 1, 0
  033a85c  fmr 4, 31
  033a860  mtctr 6
  033a864  lfs 5, 204(3)
  033a868  fadds 4, 4, 5
  033a86c  lfs 5, 4(7)
  033a870  addic 3, 3, 16
  033a874  lfs 6, 8(7)
  033a878  lfs 7, 12(7)
  033a87c  addic 7, 7, 16
  033a880  fadds 4, 4, 5
  033a884  fadds 4, 4, 6
  033a888  fadds 4, 4, 7
  033a88c  bdnz 0x33a864
  033a890  fadds 4, 4, 2
  033a894  fmadds 1, 4, 1, 3
  033a898  stfs 1, 72(31)
  033a89c  lfs 1, 132(1)
  033a8a0  lfs 3, 128(1)
  033a8a4  fmuls 1, 1, 1
  033a8a8  lwz 3, 136(1)
  033a8ac  rlwinm 3, 3, 3, 29, 29
  033a8b0  fmadds 1, 3, 3, 1
  033a8b4  lfs 3, 136(1)
  033a8b8  fabs 4, 3
  033a8bc  fsqrts 1, 1
  033a8c0  fabs 3, 1
  033a8c4  stfs 1, 160(1)
  033a8c8  fsubs 1, 3, 4
  033a8cc  stfs 1, 164(1)
  033a8d0  lwz 4, 160(1)
  033a8d4  lfs 1, 160(1)
  033a8d8  lwz 5, 164(1)
  033a8dc  fabs 5, 1
  033a8e0  lfs 1, 164(1)
  033a8e4  rlwimi 3, 5, 2, 30, 30
  033a8e8  fsub 6, 1, 31
  033a8ec  fsub 7, 1, 31
  033a8f0  rlwimi 3, 4, 4, 28, 28
  033a8f4  ori 4, 29, 0
  033a8f8  rlwimi 4, 3, 2, 26, 28
  033a8fc  slwi 3, 3, 2
  033a900  clrldi 4, 4, 32
  033a904  fsel 5, 6, 5, 4
  033a908  lfsx 1, 29, 3
  033a90c  fsel 4, 7, 4, 3
  033a910  lfs 3, 4(4)
  033a914  fcmpu 0, 5, 31
  033a918  bt 1, 0x33a920
  033a91c  b 0x33aa34
  033a920  fsubs 6, 4, 5
  033a924  fadds 4, 4, 5
  033a928  addic 3, 1, 16
  033a92c  li 6, 2
  033a930  addic 5, 3, 172
  033a934  addic 4, 3, 156
  033a938  mtctr 6
  033a93c  fdivs 4, 6, 4
  033a940  fmuls 5, 4, 4
  033a944  stfs 4, 184(1)
  033a948  stfs 4, 176(1)
  033a94c  stfs 4, 180(1)
  033a950  stfs 4, 172(1)
  033a954  lfs 7, 184(1)
  033a958  lfs 8, 176(1)
  033a95c  lfs 9, 180(1)
  033a960  fmuls 6, 5, 5
  033a964  fmuls 8, 8, 5
  033a968  fmuls 7, 7, 6
  033a96c  fmuls 4, 6, 6
  033a970  fmuls 6, 9, 6
  033a974  stfs 8, 176(1)
  033a978  fmuls 5, 7, 5
  033a97c  stfs 6, 180(1)
  033a980  stfs 5, 184(1)
  033a984  lfs 5, 156(3)
  033a988  fmuls 5, 5, 4
  033a98c  stfs 5, 172(3)
  033a990  lfs 5, 4(4)
  033a994  addic 4, 4, 8
  033a998  fmuls 5, 5, 4
  033a99c  addic 3, 3, 8
  033a9a0  stfs 5, 4(5)
  033a9a4  addic 5, 5, 8
  033a9a8  bdnz 0x33a984
  033a9ac  li 5, 4
  033a9b0  ori 3, 1, 0
  033a9b4  mtctr 5
  033a9b8  lis 4, 115
  033a9bc  addic 5, 3, 172
  033a9c0  addic 4, 4, 22752
  033a9c4  ori 7, 5, 0
  033a9c8  lfs 4, 172(3)
  033a9cc  lfs 5, 0(4)
  033a9d0  fmuls 4, 4, 5
  033a9d4  lfs 5, 4(4)
  033a9d8  addic 4, 4, 8
  033a9dc  stfs 4, 172(3)
  033a9e0  lfs 4, 4(5)
  033a9e4  addic 3, 3, 8
  033a9e8  fmuls 4, 4, 5
  033a9ec  stfs 4, 4(5)
  033a9f0  addic 5, 5, 8
  033a9f4  bdnz 0x33a9c8
  033a9f8  ori 3, 1, 0
  033a9fc  mtctr 6
  033aa00  lfs 4, 172(3)
  033aa04  lfs 5, 4(7)
  033aa08  fadds 4, 31, 4
  033aa0c  lfs 6, 8(7)
  033aa10  addic 3, 3, 16
  033aa14  lfs 31, 12(7)
  033aa18  addic 7, 7, 16
  033aa1c  fadds 4, 4, 5
  033aa20  fadds 4, 4, 6
  033aa24  fadds 31, 4, 31
  033aa28  bdnz 0x33aa00
  033aa2c  fadds 31, 31, 2
  033aa30  fmadds 31, 31, 1, 3
  033aa34  fneg 1, 31
  033aa38  ori 3, 31, 0
  033aa3c  stfs 1, 68(31)
  033aa40  b 0x33ab70
  033aa44  lis 4, 129
  033aa48  lis 5, 12111
  033aa4c  ori 3, 31, 0
  033aa50  ori 5, 5, 32639
  033aa54  li 7, -1
  033aa58  lfs 1, 7520(4)
  033aa5c  lhz 6, 36(25)
  033aa60  extsh 6, 6
  033aa64  bl 0x127ea8
  033aa68  nop
  033aa6c  lis 3, 52
  033aa70  lis 26, 161
  033aa74  addi 3, 3, -24176
  033aa78  addic 25, 25, 44
  033aa7c  ori 30, 24, 0
  033aa80  addic 27, 31, 16
  033aa84  addic 26, 26, 23856
  033aa88  lfs 30, 48(3)
  033aa8c  lfs 29, 20(3)
  033aa90  lfs 28, 52(3)
  033aa94  lfs 27, 56(3)
  033aa98  ori 3, 27, 0
  033aa9c  fmr 1, 31
  033aaa0  ori 4, 26, 0
  033aaa4  li 5, 1
  033aaa8  bl 0x1342c8
  033aaac  nop
  033aab0  slwi 4, 30, 2
  033aab4  ori 29, 3, 0
  033aab8  addc 28, 4, 25
  033aabc  cmpwi 29, 0
  033aac0  clrldi 28, 28, 32
  033aac4  ori 3, 24, 0
  033aac8  bt 2, 0x33ab58
  033aacc  lis 3, 129
  033aad0  lis 4, 129
  033aad4  lfs 1, 7496(3)
  033aad8  lfs 2, 7500(4)
  033aadc  bl 0xfcbe8
  033aae0  nop
  033aae4  stfs 1, 12(29)
  033aae8  ori 3, 30, 0
  033aaec  bl 0x502730
  033aaf0  nop
  033aaf4  fmr 26, 1
  033aaf8  li 3, 16
  033aafc  bl 0x502730
  033ab00  nop
  033ab04  fdivs 5, 26, 1
  033ab08  fmr 1, 30
  033ab0c  fmr 2, 31
  033ab10  fmr 3, 29
  033ab14  fmr 4, 31
  033ab18  bl 0xfec94
  033ab1c  nop
  033ab20  lis 3, 129
  033ab24  lfs 2, 12(29)
  033ab28  lfs 3, 7504(3)
  033ab2c  fsubs 3, 3, 2
  033ab30  fmadds 2, 3, 1, 2
  033ab34  fmadds 1, 1, 28, 27
  033ab38  stfs 2, 12(29)
  033ab3c  bl 0x502758
  033ab40  nop
  033ab44  lis 4, 255
  033ab48  ori 4, 4, 65535
  033ab4c  rlwimi 4, 3, 24, 0, 7
  033ab50  ori 3, 29, 0
  033ab54  stw 4, 4(29)
  033ab58  addic 30, 30, 1
  033ab5c  stw 3, 0(28)
  033ab60  extsw 30, 30
  033ab64  cmpwi 30, 17
  033ab68  bt 0, 0x33aa98
  033ab6c  ori 3, 31, 0
  033ab70  ld 0, 448(1)
  033ab74  mtlr 0
  033ab78  lfd 20, 336(1)
  033ab7c  lfd 21, 344(1)
  033ab80  lfd 22, 352(1)
  033ab84  lfd 23, 360(1)
  033ab88  lfd 24, 368(1)
  033ab8c  lfd 25, 376(1)
  033ab90  lfd 26, 384(1)
  033ab94  lfd 27, 392(1)
  033ab98  lfd 28, 400(1)
  033ab9c  lfd 29, 408(1)
  033aba0  lfd 30, 416(1)
  033aba4  lfd 31, 424(1)
  033aba8  ld 23, 264(1)
  033abac  ld 24, 272(1)
  033abb0  ld 25, 280(1)
  033abb4  ld 26, 288(1)
  033abb8  ld 27, 296(1)
  033abbc  ld 28, 304(1)
  033abc0  ld 29, 312(1)
  033abc4  ld 30, 320(1)
  033abc8  ld 31, 328(1)
  033abcc  addi 1, 1, 432
  033abd0  blr

UpdateMoby_305:   # 0x33ac30, 0x1340 bytes
  033ac30  stdu 1, -656(1)
  033ac34  mflr 0
  033ac38  std 0, 672(1)
  033ac3c  stfd 19, 552(1)
  033ac40  stfd 20, 560(1)
  033ac44  stfd 21, 568(1)
  033ac48  stfd 22, 576(1)
  033ac4c  stfd 23, 584(1)
  033ac50  stfd 24, 592(1)
  033ac54  stfd 25, 600(1)
  033ac58  stfd 26, 608(1)
  033ac5c  stfd 27, 616(1)
  033ac60  stfd 28, 624(1)
  033ac64  stfd 29, 632(1)
  033ac68  stfd 30, 640(1)
  033ac6c  stfd 31, 648(1)
  033ac70  std 31, 544(1)
  033ac74  std 25, 496(1)
  033ac78  ori 31, 3, 0
  033ac7c  lis 25, 129
  033ac80  lis 3, 52
  033ac84  std 29, 528(1)
  033ac88  addic 25, 25, 7524
  033ac8c  addi 29, 3, -21548
  033ac90  std 30, 536(1)
  033ac94  lfs 1, 68(31)
  033ac98  lwz 30, 120(31)
  033ac9c  lfs 2, 4(25)
  033aca0  std 28, 520(1)
  033aca4  std 27, 512(1)
  033aca8  std 26, 504(1)
  033acac  std 24, 488(1)
  033acb0  std 23, 480(1)
  033acb4  std 22, 472(1)
  033acb8  std 21, 464(1)
  033acbc  std 20, 456(1)
  033acc0  std 19, 448(1)
  033acc4  fneg 2, 2
  033acc8  bl 0x502578
  033accc  nop
  033acd0  fmr 30, 1
  033acd4  stfs 30, 68(31)
  033acd8  lfs 6, 4(30)
  033acdc  lfs 5, 0(30)
  033ace0  fmuls 1, 6, 6
  033ace4  lfs 7, 8(30)
  033ace8  lfs 3, 0(29)
  033acec  lfs 4, 72(31)
  033acf0  lfs 11, 24(31)
  033acf4  fmadds 1, 5, 5, 1
  033acf8  fmadds 1, 7, 7, 1
  033acfc  fsqrts 1, 1
  033ad00  fcmpu 0, 1, 3
  033ad04  cror 6, 1, 2
  033ad08  bt 6, 0x33ad78
  033ad0c  lis 3, 52
  033ad10  lis 4, 114
  033ad14  addi 3, 3, -21548
  033ad18  lfs 2, 4(3)
  033ad1c  lfs 5, -3056(4)
  033ad20  lhz 4, 36(30)
  033ad24  fmuls 2, 5, 2
  033ad28  extsh 4, 4
  033ad2c  fctiwz 2, 2
  033ad30  stfd 2, 424(1)
  033ad34  lfs 2, 8(3)
  033ad38  lwz 3, 428(1)
  033ad3c  fmuls 2, 5, 2
  033ad40  fctiwz 2, 2
  033ad44  stfd 2, 424(1)
  033ad48  lwz 5, 428(1)
  033ad4c  subc 3, 3, 5
  033ad50  cmpw 4, 3
  033ad54  bf 0, 0x33ad70
  033ad58  lwz 3, 40(30)
  033ad5c  cmpwi 3, 0
  033ad60  bf 2, 0x33ad70
  033ad64  lfs 2, 24(30)
  033ad68  lfs 30, 28(30)
  033ad6c  b 0x33b0f0
  033ad70  fmr 2, 4
  033ad74  b 0x33b0f0
  033ad78  lfs 8, 16(31)
  033ad7c  lis 3, 52
  033ad80  lfs 9, 20(31)
  033ad84  fsubs 2, 5, 8
  033ad88  fsubs 10, 6, 9
  033ad8c  addi 4, 3, -21548
  033ad90  lis 3, 115
  033ad94  addic 3, 3, 22784
  033ad98  fabs 13, 2
  033ad9c  fabs 0, 10
  033ada0  stfs 2, 280(1)
  033ada4  stfs 10, 284(1)
  033ada8  fsubs 2, 13, 0
  033adac  stfs 2, 288(1)
  033adb0  lwz 5, 280(1)
  033adb4  lfs 10, 12(4)
  033adb8  lfs 2, 280(1)
  033adbc  lwz 4, 284(1)
  033adc0  lfs 12, 284(1)
  033adc4  fabs 2, 2
  033adc8  lwz 6, 288(1)
  033adcc  rlwinm 4, 4, 3, 29, 29
  033add0  fabs 31, 12
  033add4  lfs 12, 288(1)
  033add8  rlwimi 4, 6, 2, 30, 30
  033addc  fsub 30, 12, 10
  033ade0  rlwimi 4, 5, 4, 28, 28
  033ade4  fsub 29, 12, 10
  033ade8  ori 5, 3, 0
  033adec  rlwimi 5, 4, 2, 26, 28
  033adf0  slwi 4, 4, 2
  033adf4  clrldi 5, 5, 32
  033adf8  fsel 0, 30, 2, 0
  033adfc  lfsx 2, 3, 4
  033ae00  lfs 12, 4(5)
  033ae04  fsel 13, 29, 31, 13
  033ae08  fcmpu 0, 0, 10
  033ae0c  bt 1, 0x33ae18
  033ae10  fmr 2, 10
  033ae14  b 0x33af3c
  033ae18  fsubs 31, 13, 0
  033ae1c  fadds 13, 13, 0
  033ae20  addic 4, 1, 16
  033ae24  li 7, 2
  033ae28  addic 5, 4, 372
  033ae2c  addic 6, 4, 388
  033ae30  mtctr 7
  033ae34  fdivs 13, 31, 13
  033ae38  fmuls 0, 13, 13
  033ae3c  stfs 13, 400(1)
  033ae40  stfs 13, 392(1)
  033ae44  stfs 13, 396(1)
  033ae48  stfs 13, 388(1)
  033ae4c  lfs 30, 400(1)
  033ae50  lfs 29, 392(1)
  033ae54  lfs 28, 396(1)
  033ae58  fmuls 31, 0, 0
  033ae5c  fmuls 29, 29, 0
  033ae60  fmuls 30, 30, 31
  033ae64  fmuls 13, 31, 31
  033ae68  fmuls 31, 28, 31
  033ae6c  stfs 29, 392(1)
  033ae70  fmuls 0, 30, 0
  033ae74  stfs 31, 396(1)
  033ae78  stfs 0, 400(1)
  033ae7c  lfs 0, 372(4)
  033ae80  fmuls 0, 0, 13
  033ae84  stfs 0, 388(4)
  033ae88  lfs 0, 4(5)
  033ae8c  addic 4, 4, 8
  033ae90  addic 5, 5, 8
  033ae94  fmuls 0, 0, 13
  033ae98  stfs 0, 4(6)
  033ae9c  addic 6, 6, 8
  033aea0  bdnz 0x33ae7c
  033aea4  li 6, 4
  033aea8  ori 4, 1, 0
  033aeac  mtctr 6
  033aeb0  lis 5, 115
  033aeb4  addic 6, 4, 388
  033aeb8  addic 5, 5, 22752
  033aebc  ori 8, 6, 0
  033aec0  lfs 13, 388(4)
  033aec4  lfs 0, 0(5)
  033aec8  fmuls 13, 13, 0
  033aecc  lfs 0, 4(5)
  033aed0  addic 5, 5, 8
  033aed4  stfs 13, 388(4)
  033aed8  lfs 13, 4(6)
  033aedc  addic 4, 4, 8
  033aee0  fmuls 13, 13, 0
  033aee4  stfs 13, 4(6)
  033aee8  addic 6, 6, 8
  033aeec  bdnz 0x33aec0
  033aef0  fmr 13, 10
  033aef4  ori 4, 1, 0
  033aef8  mtctr 7
  033aefc  lfs 0, 388(4)
  033af00  fadds 13, 13, 0
  033af04  addic 4, 4, 16
  033af08  lfs 0, 4(8)
  033af0c  lfs 31, 8(8)
  033af10  lfs 30, 12(8)
  033af14  addic 8, 8, 16
  033af18  fadds 13, 13, 0
  033af1c  fadds 13, 13, 31
  033af20  fadds 13, 13, 30
  033af24  bdnz 0x33aefc
  033af28  lis 4, 52
  033af2c  addi 4, 4, -21548
  033af30  lfs 0, 16(4)
  033af34  fadds 13, 13, 0
  033af38  fmadds 2, 13, 2, 12
  033af3c  fsubs 6, 9, 6
  033af40  fsubs 5, 8, 5
  033af44  fmuls 6, 6, 6
  033af48  fmadds 5, 5, 5, 6
  033af4c  fsubs 6, 7, 11
  033af50  fsqrts 5, 5
  033af54  stfs 6, 272(1)
  033af58  fabs 8, 6
  033af5c  fabs 7, 5
  033af60  stfs 5, 268(1)
  033af64  lwz 4, 272(1)
  033af68  lfs 6, 272(1)
  033af6c  rlwinm 4, 4, 3, 29, 29
  033af70  fabs 9, 6
  033af74  fsubs 5, 7, 8
  033af78  stfs 5, 276(1)
  033af7c  lwz 5, 268(1)
  033af80  lfs 5, 268(1)
  033af84  lwz 6, 276(1)
  033af88  lfs 6, 276(1)
  033af8c  fabs 5, 5
  033af90  rlwimi 4, 6, 2, 30, 30
  033af94  fsub 11, 6, 10
  033af98  fsub 12, 6, 10
  033af9c  rlwimi 4, 5, 4, 28, 28
  033afa0  ori 5, 3, 0
  033afa4  rlwimi 5, 4, 2, 26, 28
  033afa8  slwi 4, 4, 2
  033afac  clrldi 5, 5, 32
  033afb0  fsel 8, 11, 5, 8
  033afb4  lfsx 5, 3, 4
  033afb8  lfs 6, 4(5)
  033afbc  fsel 7, 12, 9, 7
  033afc0  fcmpu 0, 8, 10
  033afc4  bt 1, 0x33afcc
  033afc8  b 0x33b0ec
  033afcc  fsubs 9, 7, 8
  033afd0  fadds 7, 7, 8
  033afd4  addic 3, 1, 16
  033afd8  li 6, 2
  033afdc  addic 5, 3, 356
  033afe0  addic 4, 3, 340
  033afe4  mtctr 6
  033afe8  fdivs 7, 9, 7
  033afec  fmuls 8, 7, 7
  033aff0  stfs 7, 368(1)
  033aff4  stfs 7, 360(1)
  033aff8  stfs 7, 364(1)
  033affc  stfs 7, 356(1)
  033b000  lfs 11, 368(1)
  033b004  lfs 12, 360(1)
  033b008  lfs 13, 364(1)
  033b00c  fmuls 9, 8, 8
  033b010  fmuls 12, 12, 8
  033b014  fmuls 11, 11, 9
  033b018  fmuls 7, 9, 9
  033b01c  fmuls 9, 13, 9
  033b020  stfs 12, 360(1)
  033b024  fmuls 8, 11, 8
  033b028  stfs 9, 364(1)
  033b02c  stfs 8, 368(1)
  033b030  lfs 8, 340(3)
  033b034  fmuls 8, 8, 7
  033b038  stfs 8, 356(3)
  033b03c  lfs 8, 4(4)
  033b040  addic 4, 4, 8
  033b044  fmuls 8, 8, 7
  033b048  addic 3, 3, 8
  033b04c  stfs 8, 4(5)
  033b050  addic 5, 5, 8
  033b054  bdnz 0x33b030
  033b058  li 5, 4
  033b05c  ori 3, 1, 0
  033b060  mtctr 5
  033b064  lis 4, 115
  033b068  addic 5, 3, 356
  033b06c  addic 4, 4, 22752
  033b070  ori 7, 5, 0
  033b074  lfs 7, 356(3)
  033b078  lfs 8, 0(4)
  033b07c  fmuls 7, 7, 8
  033b080  lfs 8, 4(4)
  033b084  addic 4, 4, 8
  033b088  stfs 7, 356(3)
  033b08c  lfs 7, 4(5)
  033b090  addic 3, 3, 8
  033b094  fmuls 7, 7, 8
  033b098  stfs 7, 4(5)
  033b09c  addic 5, 5, 8
  033b0a0  bdnz 0x33b074
  033b0a4  ori 3, 1, 0
  033b0a8  mtctr 6
  033b0ac  lfs 7, 356(3)
  033b0b0  lfs 8, 4(7)
  033b0b4  fadds 7, 10, 7
  033b0b8  lfs 9, 8(7)
  033b0bc  addic 3, 3, 16
  033b0c0  lfs 10, 12(7)
  033b0c4  addic 7, 7, 16
  033b0c8  fadds 7, 7, 8
  033b0cc  fadds 7, 7, 9
  033b0d0  fadds 10, 7, 10
  033b0d4  bdnz 0x33b0ac
  033b0d8  lis 3, 52
  033b0dc  addi 3, 3, -21548
  033b0e0  lfs 7, 16(3)
  033b0e4  fadds 10, 10, 7
  033b0e8  fmadds 10, 10, 5, 6
  033b0ec  fneg 30, 10
  033b0f0  fcmpu 0, 1, 3
  033b0f4  lis 4, 52
  033b0f8  addic 3, 30, 16
  033b0fc  addi 4, 4, -21548
  033b100  lis 29, 114
  033b104  addic 28, 30, 20
  033b108  lfs 31, 20(4)
  033b10c  lfs 29, 24(4)
  033b110  cror 6, 1, 2
  033b114  bt 6, 0x33b174
  033b118  lis 27, 114
  033b11c  fmr 1, 4
  033b120  ori 5, 3, 0
  033b124  lfs 3, -3048(27)
  033b128  lfs 5, -3052(29)
  033b12c  fmuls 4, 3, 31
  033b130  fmuls 3, 3, 29
  033b134  fmuls 5, 5, 29
  033b138  bl 0xff190
  033b13c  nop
  033b140  stfs 1, 72(31)
  033b144  fmr 2, 30
  033b148  lfs 1, 68(31)
  033b14c  ori 5, 28, 0
  033b150  lfs 4, -3048(27)
  033b154  lfs 5, -3052(29)
  033b158  fmuls 3, 4, 29
  033b15c  fmuls 4, 4, 31
  033b160  fmuls 5, 5, 29
  033b164  bl 0xff190
  033b168  nop
  033b16c  fmr 2, 1
  033b170  b 0x33b1d8
  033b174  lis 4, 52
  033b178  lis 27, 114
  033b17c  fmr 1, 4
  033b180  addi 4, 4, -21548
  033b184  ori 5, 3, 0
  033b188  lfs 3, -3048(27)
  033b18c  lfs 28, 28(4)
  033b190  lfs 6, -3052(29)
  033b194  fmuls 4, 3, 31
  033b198  fmuls 3, 3, 29
  033b19c  fmuls 5, 6, 28
  033b1a0  bl 0xff190
  033b1a4  nop
  033b1a8  stfs 1, 72(31)
  033b1ac  fmr 2, 30
  033b1b0  lfs 1, 68(31)
  033b1b4  ori 5, 28, 0
  033b1b8  lfs 4, -3048(27)
  033b1bc  lfs 5, -3052(29)
  033b1c0  fmuls 3, 4, 29
  033b1c4  fmuls 4, 4, 31
  033b1c8  fmuls 5, 5, 28
  033b1cc  bl 0xff190
  033b1d0  nop
  033b1d4  fmr 2, 1
  033b1d8  lis 3, 52
  033b1dc  stfs 2, 68(31)
  033b1e0  addic 27, 1, 128
  033b1e4  fneg 3, 2
  033b1e8  addi 28, 3, -21548
  033b1ec  ori 3, 27, 0
  033b1f0  lfs 1, 32(28)
  033b1f4  lfs 4, -3052(29)
  033b1f8  lfs 5, 72(31)
  033b1fc  fmuls 1, 4, 1
  033b200  fmr 2, 5
  033b204  bl 0xfe610
  033b208  nop
  033b20c  lfs 2, 16(31)
  033b210  lfs 3, 20(31)
  033b214  lfs 4, 24(31)
  033b218  lfs 29, 128(1)
  033b21c  lfs 1, 132(1)
  033b220  fadds 29, 2, 29
  033b224  lfs 5, 136(1)
  033b228  fadds 1, 3, 1
  033b22c  stfs 2, 112(1)
  033b230  fadds 2, 4, 5
  033b234  stfs 3, 116(1)
  033b238  lfs 3, 28(31)
  033b23c  stfs 4, 120(1)
  033b240  stfs 3, 124(1)
  033b244  stfs 29, 16(31)
  033b248  stfs 1, 20(31)
  033b24c  stfs 2, 24(31)
  033b250  lfs 30, 12(28)
  033b254  fcmpu 0, 29, 30
  033b258  bt 0, 0x33b2a8
  033b25c  fcmpu 0, 1, 30
  033b260  bt 0, 0x33b2a8
  033b264  fcmpu 0, 2, 30
  033b268  bt 0, 0x33b2a8
  033b26c  lis 24, 149
  033b270  addic 24, 24, 5056
  033b274  lis 3, 52
  033b278  lfs 2, 324(24)
  033b27c  lfs 3, 320(24)
  033b280  fsubs 2, 1, 2
  033b284  fsubs 3, 29, 3
  033b288  addi 3, 3, -21548
  033b28c  fmuls 2, 2, 2
  033b290  fmadds 2, 3, 3, 2
  033b294  lfs 3, 36(3)
  033b298  fsqrts 2, 2
  033b29c  fcmpu 0, 2, 3
  033b2a0  cror 6, 0, 2
  033b2a4  bt 6, 0x33b2c4
  033b2a8  ori 3, 31, 0
  033b2ac  li 4, 0
  033b2b0  bl 0x339e00
  033b2b4  ori 3, 31, 0
  033b2b8  bl 0xefb38
  033b2bc  nop
  033b2c0  b 0x33bef8
  033b2c4  lis 23, 151
  033b2c8  addic 23, 23, -25376
  033b2cc  lis 3, 1
  033b2d0  lfs 3, 132(23)
  033b2d4  lfs 2, 128(23)
  033b2d8  fsubs 3, 1, 3
  033b2dc  fsubs 2, 29, 2
  033b2e0  fmr 29, 30
  033b2e4  lis 4, 16000
  033b2e8  ori 3, 3, 1
  033b2ec  stw 31, 224(1)
  033b2f0  li 5, 1
  033b2f4  fmuls 4, 3, 3
  033b2f8  fmr 1, 29
  033b2fc  stfs 2, 208(1)
  033b300  stw 4, 236(1)
  033b304  stw 3, 228(1)
  033b308  stw 5, 240(1)
  033b30c  fmadds 4, 2, 2, 4
  033b310  fsqrts 5, 4
  033b314  fcmpu 0, 5, 1
  033b318  bt 2, 0x33b368
  033b31c  frsqrte 1, 4
  033b320  lis 3, 52
  033b324  addi 3, 3, -21548
  033b328  lfs 5, 40(3)
  033b32c  lfs 6, 44(3)
  033b330  fmuls 7, 4, 1
  033b334  fmuls 8, 5, 1
  033b338  fnmsubs 7, 7, 1, 6
  033b33c  fmadds 1, 7, 8, 1
  033b340  fmuls 7, 4, 1
  033b344  fmuls 8, 5, 1
  033b348  fnmsubs 7, 7, 1, 6
  033b34c  fmadds 1, 7, 8, 1
  033b350  fmuls 4, 4, 1
  033b354  fmuls 5, 5, 1
  033b358  fnmsubs 4, 4, 1, 6
  033b35c  fmadds 29, 4, 5, 1
  033b360  fmuls 1, 2, 29
  033b364  fmuls 29, 3, 29
  033b368  lis 3, 52
  033b36c  stfs 1, 208(1)
  033b370  lis 5, 17839
  033b374  stfs 29, 212(1)
  033b378  addi 3, 3, -21548
  033b37c  lis 6, 16256
  033b380  ori 5, 5, 57190
  033b384  li 4, 1
  033b388  lfs 29, 44(3)
  033b38c  stw 6, 216(1)
  033b390  stw 5, 220(1)
  033b394  addic 3, 30, 36
  033b398  lhz 5, 166(31)
  033b39c  stb 4, 232(1)
  033b3a0  stb 4, 233(1)
  033b3a4  sth 5, 234(1)
  033b3a8  bl 0x4fffb4
  033b3ac  nop
  033b3b0  cmpwi 3, 0
  033b3b4  bt 2, 0x33b3d4
  033b3b8  ori 3, 31, 0
  033b3bc  li 4, 0
  033b3c0  bl 0x339e00
  033b3c4  ori 3, 31, 0
  033b3c8  bl 0xefb38
  033b3cc  nop
  033b3d0  b 0x33bef8
  033b3d4  addic 26, 31, 16
  033b3d8  addic 3, 1, 112
  033b3dc  lwz 6, 32(30)
  033b3e0  addic 7, 1, 208
  033b3e4  ori 4, 26, 0
  033b3e8  li 5, 0
  033b3ec  bl 0x57820
  033b3f0  nop
  033b3f4  cmpwi 3, 0
  033b3f8  bt 2, 0x33bb88
  033b3fc  bl 0x60780
  033b400  nop
  033b404  cmpwi 3, 0
  033b408  bf 2, 0x33b474
  033b40c  lis 3, 52
  033b410  lis 4, 114
  033b414  vspltisw 3, -1
  033b418  addi 3, 3, -21548
  033b41c  li 5, 48
  033b420  li 6, -3056
  033b424  vslw 3, 3, 3
  033b428  lfs 1, 48(3)
  033b42c  lfs 2, -3056(4)
  033b430  <unknown>
  033b434  fmuls 1, 2, 1
  033b438  vspltw 2, 2, 0
  033b43c  <unknown>
  033b440  lhz 3, 36(30)
  033b444  vmaddfp 2, 4, 2, 3
  033b448  extsh 3, 3
  033b44c  fctiwz 1, 1
  033b450  vctsxs 2, 2, 0
  033b454  stfd 1, 424(1)
  033b458  lwz 4, 428(1)
  033b45c  cmpw 3, 4
  033b460  bf 1, 0x33bb88
  033b464  vsplth 2, 2, 1
  033b468  li 3, 36
  033b46c  stvehx 2, 3, 30
  033b470  b 0x33bb88
  033b474  lis 22, 161
  033b478  lis 3, 52
  033b47c  addic 22, 22, 2368
  033b480  addi 3, 3, -21548
  033b484  li 28, 0
  033b488  addic 21, 22, 64
  033b48c  ori 20, 28, 0
  033b490  lfs 1, 32(22)
  033b494  stfs 1, 16(31)
  033b498  lfs 1, 36(22)
  033b49c  stfs 1, 20(31)
  033b4a0  lfs 1, 40(22)
  033b4a4  stfs 1, 24(31)
  033b4a8  lfs 1, 44(22)
  033b4ac  stfs 1, 28(31)
  033b4b0  lfs 28, 52(3)
  033b4b4  lfs 27, 40(3)
  033b4b8  lfs 26, 56(3)
  033b4bc  lfs 25, 60(3)
  033b4c0  lfs 24, 64(3)
  033b4c4  lfs 23, 68(3)
  033b4c8  lfs 22, 72(3)
  033b4cc  fmr 1, 28
  033b4d0  fmr 2, 29
  033b4d4  bl 0xfcbe8
  033b4d8  nop
  033b4dc  fmr 21, 1
  033b4e0  fmr 1, 28
  033b4e4  fmr 2, 29
  033b4e8  bl 0xfcbe8
  033b4ec  nop
  033b4f0  fmr 20, 1
  033b4f4  fmr 1, 28
  033b4f8  fmr 2, 29
  033b4fc  bl 0xfcbe8
  033b500  nop
  033b504  addic 19, 1, 144
  033b508  fmr 19, 1
  033b50c  ori 4, 27, 0
  033b510  ori 3, 19, 0
  033b514  ori 5, 21, 0
  033b518  bl 0x500608
  033b51c  nop
  033b520  lfs 3, 148(1)
  033b524  fmuls 2, 20, 20
  033b528  lfs 4, 144(1)
  033b52c  fmuls 1, 3, 3
  033b530  lfs 5, 152(1)
  033b534  lfs 6, -3052(29)
  033b538  fmadds 2, 21, 21, 2
  033b53c  fmadds 1, 4, 4, 1
  033b540  fmadds 2, 19, 19, 2
  033b544  fmadds 1, 5, 5, 1
  033b548  fsqrts 7, 2
  033b54c  fsqrts 1, 1
  033b550  fmuls 2, 6, 25
  033b554  fsub 9, 30, 7
  033b558  fsub 10, 30, 7
  033b55c  fsub 11, 7, 30
  033b560  fsub 12, 7, 30
  033b564  fmuls 8, 1, 27
  033b568  fmuls 1, 6, 26
  033b56c  fdivs 6, 8, 7
  033b570  fsub 8, 30, 7
  033b574  fsub 7, 7, 30
  033b578  fmuls 13, 19, 6
  033b57c  fmuls 0, 20, 6
  033b580  fmuls 6, 21, 6
  033b584  fsel 8, 8, 30, 13
  033b588  fsel 9, 9, 30, 0
  033b58c  fsel 10, 10, 30, 6
  033b590  fsel 8, 11, 8, 13
  033b594  fsel 9, 12, 9, 0
  033b598  fsel 6, 7, 10, 6
  033b59c  fadds 5, 5, 8
  033b5a0  fadds 3, 3, 9
  033b5a4  fadds 4, 4, 6
  033b5a8  stfs 5, 152(1)
  033b5ac  stfs 3, 148(1)
  033b5b0  stfs 4, 144(1)
  033b5b4  bl 0xfcbe8
  033b5b8  nop
  033b5bc  lfs 2, 148(1)
  033b5c0  lfs 3, 144(1)
  033b5c4  fmuls 4, 2, 2
  033b5c8  lfs 5, 152(1)
  033b5cc  lis 3, 114
  033b5d0  fmadds 4, 3, 3, 4
  033b5d4  lfs 6, -3056(3)
  033b5d8  fmuls 7, 6, 24
  033b5dc  fmuls 6, 6, 23
  033b5e0  fmadds 4, 5, 5, 4
  033b5e4  fctiwz 7, 7
  033b5e8  fctiwz 6, 6
  033b5ec  fsqrts 4, 4
  033b5f0  stfd 7, 424(1)
  033b5f4  lwz 3, 428(1)
  033b5f8  stfd 6, 424(1)
  033b5fc  lwz 4, 428(1)
  033b600  extsw 3, 3
  033b604  extsw 4, 4
  033b608  fdivs 1, 1, 4
  033b60c  fsub 6, 30, 4
  033b610  fsub 7, 30, 4
  033b614  fsub 8, 30, 4
  033b618  fsub 9, 4, 30
  033b61c  fsub 10, 4, 30
  033b620  fsub 4, 4, 30
  033b624  fmuls 3, 3, 1
  033b628  fmuls 2, 2, 1
  033b62c  fmuls 1, 5, 1
  033b630  fsel 5, 6, 30, 3
  033b634  fsel 6, 7, 30, 2
  033b638  fsel 7, 8, 30, 1
  033b63c  fsel 3, 9, 5, 3
  033b640  fsel 2, 10, 6, 2
  033b644  fsel 1, 4, 7, 1
  033b648  stfs 3, 144(1)
  033b64c  stfs 2, 148(1)
  033b650  stfs 1, 152(1)
  033b654  bl 0xfe484
  033b658  nop
  033b65c  lis 5, 32559
  033b660  ori 6, 3, 0
  033b664  fmr 1, 22
  033b668  ori 3, 26, 0
  033b66c  ori 4, 19, 0
  033b670  ori 5, 5, 20335
  033b674  bl 0x128248
  033b678  nop
  033b67c  addic 28, 28, 1
  033b680  cmpwi 28, 5
  033b684  bt 0, 0x33b4cc
  033b688  lis 28, 151
  033b68c  addic 28, 28, -25432
  033b690  lbz 3, 15(28)
  033b694  cmpwi 3, 0
  033b698  bf 2, 0x33b6b8
  033b69c  ori 3, 31, 0
  033b6a0  li 4, 0
  033b6a4  bl 0x339e00
  033b6a8  ori 3, 31, 0
  033b6ac  bl 0xefb38
  033b6b0  nop
  033b6b4  b 0x33bef8
  033b6b8  lwz 3, 40(30)
  033b6bc  addic 3, 3, 1
  033b6c0  stw 3, 40(30)
  033b6c4  bl 0x60780
  033b6c8  nop
  033b6cc  cmpwi 3, 4
  033b6d0  bt 1, 0x33b6f4
  033b6d4  cmpwi 3, 1
  033b6d8  bt 1, 0x33b6e8
  033b6dc  cmpwi 3, -1
  033b6e0  bf 1, 0x33b720
  033b6e4  b 0x33b718
  033b6e8  cmpwi 3, 2
  033b6ec  bf 1, 0x33b720
  033b6f0  b 0x33b718
  033b6f4  cmpwi 3, 13
  033b6f8  bt 1, 0x33b720
  033b6fc  cmpwi 3, 10
  033b700  bt 1, 0x33b710
  033b704  cmpwi 3, 7
  033b708  bt 2, 0x33b718
  033b70c  b 0x33b720
  033b710  cmpwi 3, 12
  033b714  bt 2, 0x33b720
  033b718  li 3, 1000
  033b71c  stw 3, 40(30)
  033b720  lbz 3, 15(28)
  033b724  lwz 4, 40(30)
  033b728  addic 3, 3, 5
  033b72c  cmpw 4, 3
  033b730  bf 1, 0x33b750
  033b734  ori 3, 31, 0
  033b738  li 4, 1
  033b73c  bl 0x339e00
  033b740  ori 3, 31, 0
  033b744  bl 0xefb38
  033b748  nop
  033b74c  b 0x33bef8
  033b750  ori 4, 27, 0
  033b754  addic 3, 1, 160
  033b758  ori 5, 21, 0
  033b75c  bl 0x500608
  033b760  nop
  033b764  lwz 4, 160(1)
  033b768  lwz 3, 164(1)
  033b76c  lfs 4, 160(1)
  033b770  lfs 5, 164(1)
  033b774  rlwinm 5, 3, 3, 29, 29
  033b778  fabs 3, 4
  033b77c  fabs 2, 5
  033b780  lis 21, 115
  033b784  addic 21, 21, 22784
  033b788  fsubs 1, 3, 2
  033b78c  stfs 1, 264(1)
  033b790  lwz 3, 168(1)
  033b794  lfs 6, 168(1)
  033b798  lwz 6, 264(1)
  033b79c  lfs 1, 264(1)
  033b7a0  rlwimi 5, 6, 2, 30, 30
  033b7a4  fsub 7, 1, 30
  033b7a8  fsub 8, 1, 30
  033b7ac  rlwimi 5, 4, 4, 28, 28
  033b7b0  ori 4, 21, 0
  033b7b4  rlwimi 4, 5, 2, 26, 28
  033b7b8  slwi 5, 5, 2
  033b7bc  clrldi 4, 4, 32
  033b7c0  fsel 7, 7, 3, 2
  033b7c4  lfsx 1, 21, 5
  033b7c8  fsel 3, 8, 2, 3
  033b7cc  lfs 2, 4(4)
  033b7d0  fcmpu 0, 7, 30
  033b7d4  bt 1, 0x33b7e0
  033b7d8  fmr 1, 30
  033b7dc  b 0x33b904
  033b7e0  fsubs 8, 3, 7
  033b7e4  fadds 3, 3, 7
  033b7e8  addic 4, 1, 16
  033b7ec  li 8, 2
  033b7f0  addic 5, 4, 308
  033b7f4  addic 6, 4, 324
  033b7f8  mtctr 8
  033b7fc  fdivs 3, 8, 3
  033b800  fmuls 7, 3, 3
  033b804  stfs 3, 336(1)
  033b808  stfs 3, 328(1)
  033b80c  stfs 3, 332(1)
  033b810  stfs 3, 324(1)
  033b814  lfs 9, 336(1)
  033b818  lfs 10, 328(1)
  033b81c  lfs 11, 332(1)
  033b820  fmuls 8, 7, 7
  033b824  fmuls 10, 10, 7
  033b828  fmuls 9, 9, 8
  033b82c  fmuls 3, 8, 8
  033b830  fmuls 8, 11, 8
  033b834  stfs 10, 328(1)
  033b838  fmuls 7, 9, 7
  033b83c  stfs 8, 332(1)
  033b840  stfs 7, 336(1)
  033b844  lfs 7, 308(4)
  033b848  fmuls 7, 7, 3
  033b84c  stfs 7, 324(4)
  033b850  lfs 7, 4(5)
  033b854  addic 4, 4, 8
  033b858  addic 5, 5, 8
  033b85c  fmuls 7, 7, 3
  033b860  stfs 7, 4(6)
  033b864  addic 6, 6, 8
  033b868  bdnz 0x33b844
  033b86c  li 6, 4
  033b870  ori 4, 1, 0
  033b874  mtctr 6
  033b878  lis 5, 115
  033b87c  addic 6, 4, 324
  033b880  addic 5, 5, 22752
  033b884  ori 7, 6, 0
  033b888  lfs 3, 324(4)
  033b88c  lfs 7, 0(5)
  033b890  fmuls 3, 3, 7
  033b894  lfs 7, 4(5)
  033b898  addic 5, 5, 8
  033b89c  stfs 3, 324(4)
  033b8a0  lfs 3, 4(6)
  033b8a4  addic 4, 4, 8
  033b8a8  fmuls 3, 3, 7
  033b8ac  stfs 3, 4(6)
  033b8b0  addic 6, 6, 8
  033b8b4  bdnz 0x33b888
  033b8b8  fmr 3, 30
  033b8bc  ori 4, 1, 0
  033b8c0  mtctr 8
  033b8c4  lfs 7, 324(4)
  033b8c8  fadds 3, 3, 7
  033b8cc  addic 4, 4, 16
  033b8d0  lfs 7, 4(7)
  033b8d4  lfs 8, 8(7)
  033b8d8  lfs 9, 12(7)
  033b8dc  addic 7, 7, 16
  033b8e0  fadds 3, 3, 7
  033b8e4  fadds 3, 3, 8
  033b8e8  fadds 3, 3, 9
  033b8ec  bdnz 0x33b8c4
  033b8f0  lis 4, 52
  033b8f4  addi 4, 4, -21548
  033b8f8  lfs 7, 16(4)
  033b8fc  fadds 3, 3, 7
  033b900  fmadds 1, 3, 1, 2
  033b904  fmuls 2, 5, 5
  033b908  fabs 3, 6
  033b90c  stfs 1, 72(31)
  033b910  rlwinm 3, 3, 3, 29, 29
  033b914  fmadds 2, 4, 4, 2
  033b918  fsqrts 2, 2
  033b91c  fabs 5, 2
  033b920  stfs 2, 256(1)
  033b924  fsubs 1, 5, 3
  033b928  stfs 1, 260(1)
  033b92c  lwz 4, 256(1)
  033b930  lfs 1, 256(1)
  033b934  lwz 5, 260(1)
  033b938  fabs 4, 1
  033b93c  lfs 1, 260(1)
  033b940  rlwimi 3, 5, 2, 30, 30
  033b944  fsub 2, 1, 30
  033b948  fsub 6, 1, 30
  033b94c  rlwimi 3, 4, 4, 28, 28
  033b950  ori 4, 21, 0
  033b954  rlwimi 4, 3, 2, 26, 28
  033b958  slwi 3, 3, 2
  033b95c  clrldi 4, 4, 32
  033b960  fsel 4, 2, 4, 3
  033b964  lfsx 1, 21, 3
  033b968  fsel 3, 6, 3, 5
  033b96c  lfs 2, 4(4)
  033b970  fcmpu 0, 4, 30
  033b974  bt 1, 0x33b980
  033b978  fmr 1, 30
  033b97c  b 0x33baa4
  033b980  fsubs 5, 3, 4
  033b984  fadds 3, 3, 4
  033b988  addic 3, 1, 16
  033b98c  li 7, 2
  033b990  addic 4, 3, 276
  033b994  addic 5, 3, 292
  033b998  mtctr 7
  033b99c  fdivs 3, 5, 3
  033b9a0  fmuls 4, 3, 3
  033b9a4  stfs 3, 304(1)
  033b9a8  stfs 3, 296(1)
  033b9ac  stfs 3, 300(1)
  033b9b0  stfs 3, 292(1)
  033b9b4  lfs 6, 304(1)
  033b9b8  lfs 7, 296(1)
  033b9bc  lfs 8, 300(1)
  033b9c0  fmuls 5, 4, 4
  033b9c4  fmuls 7, 7, 4
  033b9c8  fmuls 6, 6, 5
  033b9cc  fmuls 3, 5, 5
  033b9d0  fmuls 5, 8, 5
  033b9d4  stfs 7, 296(1)
  033b9d8  fmuls 4, 6, 4
  033b9dc  stfs 5, 300(1)
  033b9e0  stfs 4, 304(1)
  033b9e4  lfs 4, 276(3)
  033b9e8  fmuls 4, 4, 3
  033b9ec  stfs 4, 292(3)
  033b9f0  lfs 4, 4(4)
  033b9f4  addic 3, 3, 8
  033b9f8  addic 4, 4, 8
  033b9fc  fmuls 4, 4, 3
  033ba00  stfs 4, 4(5)
  033ba04  addic 5, 5, 8
  033ba08  bdnz 0x33b9e4
  033ba0c  li 5, 4
  033ba10  ori 3, 1, 0
  033ba14  mtctr 5
  033ba18  lis 4, 115
  033ba1c  addic 5, 3, 292
  033ba20  addic 4, 4, 22752
  033ba24  ori 6, 5, 0
  033ba28  lfs 3, 292(3)
  033ba2c  lfs 4, 0(4)
  033ba30  fmuls 3, 3, 4
  033ba34  lfs 4, 4(4)
  033ba38  addic 4, 4, 8
  033ba3c  stfs 3, 292(3)
  033ba40  lfs 3, 4(5)
  033ba44  addic 3, 3, 8
  033ba48  fmuls 3, 3, 4
  033ba4c  stfs 3, 4(5)
  033ba50  addic 5, 5, 8
  033ba54  bdnz 0x33ba28
  033ba58  fmr 3, 30
  033ba5c  ori 3, 1, 0
  033ba60  mtctr 7
  033ba64  lfs 4, 292(3)
  033ba68  fadds 3, 3, 4
  033ba6c  addic 3, 3, 16
  033ba70  lfs 4, 4(6)
  033ba74  lfs 5, 8(6)
  033ba78  lfs 6, 12(6)
  033ba7c  addic 6, 6, 16
  033ba80  fadds 3, 3, 4
  033ba84  fadds 3, 3, 5
  033ba88  fadds 3, 3, 6
  033ba8c  bdnz 0x33ba64
  033ba90  lis 3, 52
  033ba94  addi 3, 3, -21548
  033ba98  lfs 4, 16(3)
  033ba9c  fadds 3, 3, 4
  033baa0  fmadds 1, 3, 1, 2
  033baa4  fneg 1, 1
  033baa8  lis 3, 52
  033baac  addi 3, 3, -21548
  033bab0  stfs 1, 68(31)
  033bab4  stw 20, 16(30)
  033bab8  stw 20, 20(30)
  033babc  lfs 1, 68(22)
  033bac0  lfs 2, 64(22)
  033bac4  fmuls 3, 1, 1
  033bac8  lfs 4, 72(22)
  033bacc  lfs 5, 76(3)
  033bad0  lfs 6, 32(22)
  033bad4  lfs 7, 36(22)
  033bad8  fmadds 3, 2, 2, 3
  033badc  lfs 8, 40(22)
  033bae0  lfs 9, 44(22)
  033bae4  lwz 23, 4240(23)
  033bae8  stfs 9, 28(31)
  033baec  fmadds 3, 4, 4, 3
  033baf0  cmpwi 23, 0
  033baf4  fsqrts 3, 3
  033baf8  fdivs 5, 5, 3
  033bafc  fsub 9, 30, 3
  033bb00  fsub 10, 30, 3
  033bb04  fsub 11, 30, 3
  033bb08  fsub 12, 3, 30
  033bb0c  fsub 13, 3, 30
  033bb10  fsub 3, 3, 30
  033bb14  fmuls 4, 4, 5
  033bb18  fmuls 1, 1, 5
  033bb1c  fmuls 2, 2, 5
  033bb20  fsel 5, 9, 30, 4
  033bb24  fsel 9, 10, 30, 1
  033bb28  fsel 10, 11, 30, 2
  033bb2c  fsel 4, 12, 5, 4
  033bb30  fsel 1, 13, 9, 1
  033bb34  fsel 2, 3, 10, 2
  033bb38  fadds 3, 8, 4
  033bb3c  fadds 1, 7, 1
  033bb40  fadds 2, 6, 2
  033bb44  stfs 3, 24(31)
  033bb48  stfs 1, 20(31)
  033bb4c  stfs 2, 16(31)
  033bb50  bt 2, 0x33bb88
  033bb54  lhz 3, 166(23)
  033bb58  cmpwi 3, 168
  033bb5c  bf 2, 0x33bb88
  033bb60  lbz 3, 32(23)
  033bb64  cmpwi 1, 3, 253
  033bb68  cmpwi 3, 254
  033bb6c  cror 2, 2, 6
  033bb70  bt 2, 0x33bb88
  033bb74  li 3, 4
  033bb78  li 4, 0
  033bb7c  ori 5, 23, 0
  033bb80  bl 0x15d12c
  033bb84  nop
  033bb88  lfs 1, 68(31)
  033bb8c  lfs 2, 4(25)
  033bb90  bl 0x502578
  033bb94  nop
  033bb98  lis 3, 52
  033bb9c  stfs 1, 68(31)
  033bba0  lis 4, 114
  033bba4  addi 3, 3, -21548
  033bba8  lfs 29, 80(3)
  033bbac  lfs 1, -3056(4)
  033bbb0  lhz 3, 38(30)
  033bbb4  fmuls 1, 1, 29
  033bbb8  lhz 4, 36(30)
  033bbbc  extsh 25, 3
  033bbc0  extsh 3, 4
  033bbc4  subc 25, 25, 3
  033bbc8  fctiwz 1, 1
  033bbcc  stfd 1, 424(1)
  033bbd0  lwz 3, 428(1)
  033bbd4  cmpw 25, 3
  033bbd8  bf 0, 0x33bc24
  033bbdc  ori 3, 25, 0
  033bbe0  bl 0x502730
  033bbe4  nop
  033bbe8  lis 3, 114
  033bbec  fmr 28, 1
  033bbf0  lfs 1, -3056(3)
  033bbf4  fmuls 1, 1, 29
  033bbf8  fctiwz 1, 1
  033bbfc  stfd 1, 424(1)
  033bc00  lwz 3, 428(1)
  033bc04  extsw 3, 3
  033bc08  bl 0x502730
  033bc0c  nop
  033bc10  fdivs 29, 28, 1
  033bc14  lis 3, 129
  033bc18  lfs 1, 7512(3)
  033bc1c  fmuls 29, 1, 29
  033bc20  b 0x33bc2c
  033bc24  lis 3, 129
  033bc28  lfs 29, 7512(3)
  033bc2c  lfs 1, 116(1)
  033bc30  lfs 27, 20(31)
  033bc34  lfs 2, 112(1)
  033bc38  fsubs 1, 1, 27
  033bc3c  lfs 28, 16(31)
  033bc40  lfs 3, 120(1)
  033bc44  fsubs 2, 2, 28
  033bc48  lfs 26, 24(31)
  033bc4c  fsubs 3, 3, 26
  033bc50  lfs 5, 124(1)
  033bc54  fmuls 4, 1, 1
  033bc58  stfs 5, 140(1)
  033bc5c  fmadds 4, 2, 2, 4
  033bc60  fmadds 4, 3, 3, 4
  033bc64  fsqrts 4, 4
  033bc68  fdivs 5, 29, 4
  033bc6c  lfs 29, 28(31)
  033bc70  fsub 6, 30, 4
  033bc74  fsub 7, 30, 4
  033bc78  fsub 8, 30, 4
  033bc7c  fsub 9, 4, 30
  033bc80  fsub 10, 4, 30
  033bc84  fsub 4, 4, 30
  033bc88  lwz 31, 44(30)
  033bc8c  cmpwi 31, 0
  033bc90  fmuls 2, 2, 5
  033bc94  fmuls 11, 1, 5
  033bc98  fmuls 3, 3, 5
  033bc9c  fsel 1, 6, 30, 2
  033bca0  fsel 5, 7, 30, 11
  033bca4  fsel 6, 8, 30, 3
  033bca8  fsel 1, 9, 1, 2
  033bcac  fsel 2, 10, 5, 11
  033bcb0  fsel 3, 4, 6, 3
  033bcb4  stfs 1, 128(1)
  033bcb8  stfs 2, 132(1)
  033bcbc  stfs 3, 136(1)
  033bcc0  bt 2, 0x33bcd8
  033bcc4  stfs 28, 16(31)
  033bcc8  stfs 27, 20(31)
  033bccc  stfs 26, 24(31)
  033bcd0  stfs 29, 28(31)
  033bcd4  lfs 1, 128(1)
  033bcd8  addic 31, 30, 4
  033bcdc  li 30, 1
  033bce0  lwz 28, 44(31)
  033bce4  cmpwi 28, 0
  033bce8  bt 2, 0x33bd94
  033bcec  fadds 28, 28, 1
  033bcf0  fmr 1, 30
  033bcf4  lis 25, 129
  033bcf8  stfs 28, 16(28)
  033bcfc  lfs 2, 132(1)
  033bd00  fadds 27, 27, 2
  033bd04  stfs 27, 20(28)
  033bd08  lfs 2, 136(1)
  033bd0c  stfs 29, 28(28)
  033bd10  fadds 26, 26, 2
  033bd14  stfs 26, 24(28)
  033bd18  lfs 2, 7508(25)
  033bd1c  bl 0xfe4f0
  033bd20  nop
  033bd24  lfs 2, 16(28)
  033bd28  fadds 2, 2, 1
  033bd2c  fmr 1, 30
  033bd30  stfs 2, 16(28)
  033bd34  lfs 2, 7508(25)
  033bd38  bl 0xfe4f0
  033bd3c  nop
  033bd40  lfs 2, 20(28)
  033bd44  fadds 2, 2, 1
  033bd48  fmr 1, 30
  033bd4c  stfs 2, 20(28)
  033bd50  lfs 2, 7508(25)
  033bd54  bl 0xfe4f0
  033bd58  nop
  033bd5c  lfs 2, 24(28)
  033bd60  lis 3, 129
  033bd64  fadds 1, 2, 1
  033bd68  stfs 1, 24(28)
  033bd6c  lfs 1, 128(1)
  033bd70  lfs 2, 7516(3)
  033bd74  lfs 3, 132(1)
  033bd78  fmuls 1, 1, 2
  033bd7c  lfs 4, 136(1)
  033bd80  fmuls 3, 3, 2
  033bd84  fmuls 2, 4, 2
  033bd88  stfs 1, 128(1)
  033bd8c  stfs 3, 132(1)
  033bd90  stfs 2, 136(1)
  033bd94  addic 30, 30, 1
  033bd98  addic 31, 31, 4
  033bd9c  cmpwi 30, 17
  033bda0  bt 0, 0x33bce0
  033bda4  li 3, 5
  033bda8  bl 0xfc620
  033bdac  nop
  033bdb0  cmpwi 3, 0
  033bdb4  bf 2, 0x33bef8
  033bdb8  lfs 3, 884(24)
  033bdbc  li 3, 0
  033bdc0  lfs 4, 136(1)
  033bdc4  lfs 5, 888(24)
  033bdc8  lfs 6, 132(1)
  033bdcc  lfs 7, 128(1)
  033bdd0  fmuls 8, 5, 6
  033bdd4  lfs 9, 880(24)
  033bdd8  fmuls 10, 3, 7
  033bddc  stw 3, 188(1)
  033bde0  fmuls 11, 9, 4
  033bde4  fmr 1, 30
  033bde8  fmr 2, 31
  033bdec  fmsubs 3, 3, 4, 8
  033bdf0  fmsubs 4, 9, 6, 10
  033bdf4  fmsubs 5, 5, 7, 11
  033bdf8  stfs 3, 176(1)
  033bdfc  stfs 4, 184(1)
  033be00  stfs 5, 180(1)
  033be04  bl 0xfe4f0
  033be08  nop
  033be0c  addic 3, 1, 176
  033be10  ori 5, 27, 0
  033be14  ori 4, 3, 0
  033be18  bl 0x1113e0
  033be1c  nop
  033be20  lfs 1, 180(1)
  033be24  lfs 2, 176(1)
  033be28  fmuls 1, 1, 1
  033be2c  lfs 3, 184(1)
  033be30  fmadds 1, 2, 2, 1
  033be34  fmadds 31, 3, 3, 1
  033be38  fsqrts 31, 31
  033be3c  fcmpu 0, 31, 30
  033be40  bt 2, 0x33bef8
  033be44  lis 3, 52
  033be48  lfs 2, -3052(29)
  033be4c  addi 31, 3, -21548
  033be50  lfs 1, 40(31)
  033be54  lfs 3, 84(31)
  033be58  fmuls 1, 2, 1
  033be5c  fmuls 2, 2, 3
  033be60  bl 0xfcbe8
  033be64  nop
  033be68  fdivs 1, 1, 31
  033be6c  lfs 2, 176(1)
  033be70  lfs 3, 180(1)
  033be74  lis 3, 114
  033be78  lfs 4, 184(1)
  033be7c  lfs 5, 188(1)
  033be80  stfs 5, 204(1)
  033be84  lfs 5, -3056(3)
  033be88  fmuls 2, 2, 1
  033be8c  fmuls 3, 3, 1
  033be90  fmuls 1, 4, 1
  033be94  stfs 2, 192(1)
  033be98  stfs 3, 196(1)
  033be9c  stfs 1, 200(1)
  033bea0  lfs 1, 64(31)
  033bea4  fmuls 1, 5, 1
  033bea8  fctiwz 1, 1
  033beac  stfd 1, 424(1)
  033beb0  lfs 1, 68(31)
  033beb4  lwz 3, 428(1)
  033beb8  fmuls 1, 5, 1
  033bebc  extsw 3, 3
  033bec0  fctiwz 1, 1
  033bec4  stfd 1, 424(1)
  033bec8  lwz 4, 428(1)
  033becc  extsw 4, 4
  033bed0  bl 0xfe484
  033bed4  nop
  033bed8  lis 5, 32559
  033bedc  lfs 1, 72(31)
  033bee0  ori 6, 3, 0
  033bee4  ori 3, 26, 0
  033bee8  addic 4, 1, 192
  033beec  ori 5, 5, 20335
  033bef0  bl 0x128248
  033bef4  nop
  033bef8  ld 0, 672(1)
  033befc  mtlr 0
  033bf00  lfd 19, 552(1)
  033bf04  lfd 20, 560(1)
  033bf08  lfd 21, 568(1)
  033bf0c  lfd 22, 576(1)
  033bf10  lfd 23, 584(1)
  033bf14  lfd 24, 592(1)
  033bf18  lfd 25, 600(1)
  033bf1c  lfd 26, 608(1)
  033bf20  lfd 27, 616(1)
  033bf24  lfd 28, 624(1)
  033bf28  lfd 29, 632(1)
  033bf2c  lfd 30, 640(1)
  033bf30  lfd 31, 648(1)
  033bf34  ld 19, 448(1)
  033bf38  ld 20, 456(1)
  033bf3c  ld 21, 464(1)
  033bf40  ld 22, 472(1)
  033bf44  ld 23, 480(1)
  033bf48  ld 24, 488(1)
  033bf4c  ld 25, 496(1)
  033bf50  ld 26, 504(1)
  033bf54  ld 27, 512(1)
  033bf58  ld 28, 520(1)
  033bf5c  ld 29, 528(1)
  033bf60  ld 30, 536(1)
  033bf64  ld 31, 544(1)
  033bf68  addi 1, 1, 656
  033bf6c  blr
