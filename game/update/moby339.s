# game/update/moby339.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M339_0034a228:   # 0x34a228, 0x14 bytes
  034a228  lis 3, 132
  034a22c  lis 4, 1
  034a230  addic 3, 3, -220
  034a234  stw 4, 72(3)
  034a238  blr

UpdateMoby_339:   # 0x34a250, 0x348 bytes
  034a250  stdu 1, -144(1)
  034a254  mflr 0
  034a258  std 0, 160(1)
  034a25c  lis 4, 151
  034a260  lfs 1, 20(3)
  034a264  std 31, 136(1)
  034a268  addic 4, 4, -25376
  034a26c  ori 31, 3, 0
  034a270  lfs 2, 132(4)
  034a274  lfs 3, 16(3)
  034a278  fsubs 1, 1, 2
  034a27c  lfs 2, 128(4)
  034a280  lbz 3, 32(3)
  034a284  fsubs 2, 3, 2
  034a288  cmpwi 3, 0
  034a28c  cmpwi 1, 3, -1
  034a290  cmpwi 6, 3, 1
  034a294  cmpwi 7, 3, 2
  034a298  fmuls 1, 1, 1
  034a29c  fmadds 1, 2, 2, 1
  034a2a0  fsqrts 1, 1
  034a2a4  bt 1, 0x34a2b0
  034a2a8  bf 5, 0x34a584
  034a2ac  b 0x34a2bc
  034a2b0  bf 25, 0x34a320
  034a2b4  bf 29, 0x34a48c
  034a2b8  b 0x34a584
  034a2bc  lbz 3, 83(31)
  034a2c0  cmpwi 3, 0
  034a2c4  bt 2, 0x34a2e0
  034a2c8  ori 3, 31, 0
  034a2cc  li 4, 0
  034a2d0  li 5, 0
  034a2d4  li 6, 0
  034a2d8  bl 0xfddc0
  034a2dc  nop
  034a2e0  lis 3, 53
  034a2e4  li 4, 1
  034a2e8  addi 3, 3, -24000
  034a2ec  lis 5, 114
  034a2f0  stb 4, 32(31)
  034a2f4  lfs 1, 0(3)
  034a2f8  lfs 2, -3056(5)
  034a2fc  fmuls 1, 2, 1
  034a300  fctiwz 1, 1
  034a304  stfd 1, 112(1)
  034a308  lwz 3, 116(1)
  034a30c  extsw 3, 3
  034a310  bl 0xfc620
  034a314  nop
  034a318  stb 3, 188(31)
  034a31c  b 0x34a584
  034a320  lbz 3, 82(31)
  034a324  cmpwi 3, 0
  034a328  bf 2, 0x34a358
  034a32c  lis 4, 53
  034a330  addi 4, 4, -24000
  034a334  lfs 2, 4(4)
  034a338  fcmpu 0, 1, 2
  034a33c  cror 6, 1, 2
  034a340  bt 6, 0x34a358
  034a344  lbz 4, 188(31)
  034a348  cmpwi 4, 2
  034a34c  bf 0, 0x34a358
  034a350  li 4, 2
  034a354  stb 4, 188(31)
  034a358  lis 4, 53
  034a35c  addi 4, 4, -24000
  034a360  lfs 2, 8(4)
  034a364  fcmpu 0, 1, 2
  034a368  cror 6, 1, 2
  034a36c  bt 6, 0x34a38c
  034a370  lbz 4, 83(31)
  034a374  cmpwi 1, 4, 0
  034a378  cmpw 3, 4
  034a37c  crorc 2, 6, 2
  034a380  bt 2, 0x34a38c
  034a384  li 3, 0
  034a388  stb 3, 188(31)
  034a38c  addic 3, 31, 188
  034a390  bl 0x500060
  034a394  nop
  034a398  cmpwi 3, 0
  034a39c  bt 2, 0x34a584
  034a3a0  lbz 3, 82(31)
  034a3a4  cmpwi 3, 0
  034a3a8  cmpwi 1, 3, -1
  034a3ac  cmpwi 6, 3, 1
  034a3b0  cmpwi 7, 3, 2
  034a3b4  bt 1, 0x34a3c0
  034a3b8  bf 5, 0x34a480
  034a3bc  b 0x34a3cc
  034a3c0  bf 25, 0x34a434
  034a3c4  bf 29, 0x34a45c
  034a3c8  b 0x34a480
  034a3cc  li 3, 256
  034a3d0  bl 0xfc620
  034a3d4  nop
  034a3d8  clrlwi 3, 3, 31
  034a3dc  cmpwi 3, 0
  034a3e0  bt 2, 0x34a40c
  034a3e4  lbz 3, 83(31)
  034a3e8  cmpwi 3, 3
  034a3ec  bt 2, 0x34a480
  034a3f0  ori 3, 31, 0
  034a3f4  li 4, 3
  034a3f8  li 5, 0
  034a3fc  li 6, 0
  034a400  bl 0xfddc0
  034a404  nop
  034a408  b 0x34a480
  034a40c  lbz 3, 83(31)
  034a410  cmpwi 3, 5
  034a414  bt 2, 0x34a480
  034a418  ori 3, 31, 0
  034a41c  li 4, 5
  034a420  li 5, 0
  034a424  li 6, 0
  034a428  bl 0xfddc0
  034a42c  nop
  034a430  b 0x34a480
  034a434  lbz 3, 83(31)
  034a438  cmpwi 3, 4
  034a43c  bt 2, 0x34a480
  034a440  ori 3, 31, 0
  034a444  li 4, 4
  034a448  li 5, 0
  034a44c  li 6, 0
  034a450  bl 0xfddc0
  034a454  nop
  034a458  b 0x34a480
  034a45c  lbz 3, 83(31)
  034a460  cmpwi 3, 6
  034a464  bt 2, 0x34a480
  034a468  ori 3, 31, 0
  034a46c  li 4, 6
  034a470  li 5, 0
  034a474  li 6, 0
  034a478  bl 0xfddc0
  034a47c  nop
  034a480  li 3, 2
  034a484  stb 3, 32(31)
  034a488  b 0x34a584
  034a48c  lbz 3, 112(31)
  034a490  rlwinm 3, 3, 0, 30, 30
  034a494  cmpwi 3, 0
  034a498  bt 2, 0x34a584
  034a49c  lbz 3, 82(31)
  034a4a0  cmpwi 3, 3
  034a4a4  cmpwi 1, 3, 2
  034a4a8  cmpwi 6, 3, 5
  034a4ac  cmpwi 7, 3, 4
  034a4b0  bt 1, 0x34a4bc
  034a4b4  bf 5, 0x34a548
  034a4b8  b 0x34a4d4
  034a4bc  bt 25, 0x34a4c8
  034a4c0  bf 29, 0x34a4fc
  034a4c4  b 0x34a524
  034a4c8  cmpwi 3, 6
  034a4cc  bf 1, 0x34a4fc
  034a4d0  b 0x34a548
  034a4d4  lbz 3, 83(31)
  034a4d8  cmpwi 3, 1
  034a4dc  bt 2, 0x34a548
  034a4e0  ori 3, 31, 0
  034a4e4  li 4, 1
  034a4e8  li 5, 0
  034a4ec  li 6, 0
  034a4f0  bl 0xfddc0
  034a4f4  nop
  034a4f8  b 0x34a548
  034a4fc  lbz 3, 83(31)
  034a500  cmpwi 3, 0
  034a504  bt 2, 0x34a548
  034a508  ori 3, 31, 0
  034a50c  li 4, 0
  034a510  li 5, 0
  034a514  li 6, 0
  034a518  bl 0xfddc0
  034a51c  nop
  034a520  b 0x34a548
  034a524  lbz 3, 83(31)
  034a528  cmpwi 3, 2
  034a52c  bt 2, 0x34a548
  034a530  ori 3, 31, 0
  034a534  li 4, 2
  034a538  li 5, 0
  034a53c  li 6, 0
  034a540  bl 0xfddc0
  034a544  nop
  034a548  lis 3, 53
  034a54c  li 4, 1
  034a550  addi 3, 3, -24000
  034a554  lis 5, 114
  034a558  stb 4, 32(31)
  034a55c  lfs 1, 0(3)
  034a560  lfs 2, -3056(5)
  034a564  fmuls 1, 2, 1
  034a568  fctiwz 1, 1
  034a56c  stfd 1, 112(1)
  034a570  lwz 3, 116(1)
  034a574  extsw 3, 3
  034a578  bl 0xfc620
  034a57c  nop
  034a580  stb 3, 188(31)
  034a584  ld 0, 160(1)
  034a588  mtlr 0
  034a58c  ld 31, 136(1)
  034a590  addi 1, 1, 144
  034a594  blr
