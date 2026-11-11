# game/update/moby209.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M208_002ed160:   # 0x2ed160, 0x134 bytes
  02ed160  stdu 1, -160(1)
  02ed164  mflr 0
  02ed168  std 0, 176(1)
  02ed16c  stfd 31, 152(1)
  02ed170  std 31, 144(1)
  02ed174  ori 31, 3, 0
  02ed178  li 3, 209
  02ed17c  std 30, 136(1)
  02ed180  fmr 31, 1
  02ed184  bl 0xefa28
  02ed188  nop
  02ed18c  ori 30, 3, 0
  02ed190  cmpwi 30, 0
  02ed194  bt 2, 0x2ed274
  02ed198  lwz 9, 120(30)
  02ed19c  li 7, 255
  02ed1a0  li 8, 1
  02ed1a4  ori 3, 30, 0
  02ed1a8  li 4, 128
  02ed1ac  stw 31, 0(9)
  02ed1b0  li 5, 128
  02ed1b4  stfs 31, 4(9)
  02ed1b8  li 6, 128
  02ed1bc  stb 7, 48(30)
  02ed1c0  sth 7, 50(30)
  02ed1c4  stb 8, 49(30)
  02ed1c8  bl 0xf1ec8
  02ed1cc  nop
  02ed1d0  ori 3, 31, 0
  02ed1d4  addic 5, 30, 16
  02ed1d8  li 4, 0
  02ed1dc  bl 0xf1114
  02ed1e0  nop
  02ed1e4  addic 3, 31, 192
  02ed1e8  li 5, 208
  02ed1ec  li 6, 224
  02ed1f0  addic 4, 30, 192
  02ed1f4  lvx 2, 0, 3
  02ed1f8  lvx 3, 5, 31
  02ed1fc  lvx 4, 6, 31
  02ed200  stvx 2, 0, 4
  02ed204  stvx 3, 5, 30
  02ed208  stvx 4, 6, 30
  02ed20c  lbz 3, 83(30)
  02ed210  cmpwi 3, 0
  02ed214  bt 2, 0x2ed254
  02ed218  lis 3, 47
  02ed21c  lis 4, 114
  02ed220  addi 3, 3, -11944
  02ed224  li 5, 0
  02ed228  lfs 1, 0(3)
  02ed22c  lfs 2, -3056(4)
  02ed230  ori 3, 30, 0
  02ed234  li 4, 0
  02ed238  fmuls 1, 2, 1
  02ed23c  fctiwz 1, 1
  02ed240  stfd 1, 112(1)
  02ed244  lwz 6, 116(1)
  02ed248  extsw 6, 6
  02ed24c  bl 0xfddc0
  02ed250  nop
  02ed254  ori 3, 30, 0
  02ed258  bl 0xf31a8
  02ed25c  nop
  02ed260  lhz 4, 52(30)
  02ed264  li 3, 0
  02ed268  ori 4, 4, 4
  02ed26c  stb 3, 32(30)
  02ed270  sth 4, 52(30)
  02ed274  ori 3, 30, 0
  02ed278  ld 0, 176(1)
  02ed27c  mtlr 0
  02ed280  lfd 31, 152(1)
  02ed284  ld 30, 136(1)
  02ed288  ld 31, 144(1)
  02ed28c  addi 1, 1, 160
  02ed290  blr

UpdateMoby_209:   # 0x2ed298, 0x48c bytes
  02ed298  stdu 1, -144(1)
  02ed29c  mflr 0
  02ed2a0  std 0, 160(1)
  02ed2a4  std 31, 136(1)
  02ed2a8  cmpwi 3, 0
  02ed2ac  ori 31, 3, 0
  02ed2b0  bt 2, 0x2ed710
  02ed2b4  lwz 3, 120(31)
  02ed2b8  cmpwi 3, 0
  02ed2bc  bt 2, 0x2ed710
  02ed2c0  lwz 4, 0(3)
  02ed2c4  cmpwi 4, 0
  02ed2c8  bt 2, 0x2ed2fc
  02ed2cc  lhz 5, 166(4)
  02ed2d0  cmpwi 5, 208
  02ed2d4  bf 2, 0x2ed2fc
  02ed2d8  lbz 5, 32(4)
  02ed2dc  cmpwi 1, 5, 253
  02ed2e0  cmpwi 5, 254
  02ed2e4  cror 2, 2, 6
  02ed2e8  bt 2, 0x2ed2fc
  02ed2ec  lwz 5, 120(4)
  02ed2f0  lwz 5, 20(5)
  02ed2f4  cmpw 5, 31
  02ed2f8  bt 2, 0x2ed30c
  02ed2fc  ori 3, 31, 0
  02ed300  bl 0xefb38
  02ed304  nop
  02ed308  b 0x2ed710
  02ed30c  lhz 4, 52(4)
  02ed310  clrlwi 4, 4, 31
  02ed314  cmpwi 4, 0
  02ed318  bf 2, 0x2ed330
  02ed31c  lis 4, 151
  02ed320  addic 4, 4, -25376
  02ed324  lbz 4, 8367(4)
  02ed328  cmpwi 4, 0
  02ed32c  bt 2, 0x2ed33c
  02ed330  lhz 4, 52(31)
  02ed334  ori 4, 4, 65
  02ed338  b 0x2ed348
  02ed33c  li 4, -66
  02ed340  lhz 5, 52(31)
  02ed344  and 4, 5, 4
  02ed348  sth 4, 52(31)
  02ed34c  lbz 4, 32(31)
  02ed350  cmpwi 4, 7
  02ed354  cmpwi 1, 4, 6
  02ed358  cmpwi 6, 4, 5
  02ed35c  cmpwi 7, 4, 4
  02ed360  bt 2, 0x2ed650
  02ed364  bt 6, 0x2ed704
  02ed368  bt 26, 0x2ed5c4
  02ed36c  bt 30, 0x2ed550
  02ed370  cmpwi 4, 3
  02ed374  bt 2, 0x2ed4ec
  02ed378  cmpwi 4, 2
  02ed37c  bt 2, 0x2ed4cc
  02ed380  cmpwi 4, 1
  02ed384  bt 2, 0x2ed3fc
  02ed388  cmpwi 4, 0
  02ed38c  bf 2, 0x2ed6b4
  02ed390  lbz 3, 112(31)
  02ed394  rlwinm 3, 3, 0, 30, 30
  02ed398  cmpwi 3, 0
  02ed39c  bt 2, 0x2ed704
  02ed3a0  lbz 3, 83(31)
  02ed3a4  cmpwi 3, 1
  02ed3a8  bt 2, 0x2ed3e8
  02ed3ac  lis 3, 47
  02ed3b0  lis 4, 114
  02ed3b4  addi 3, 3, -11628
  02ed3b8  li 5, 0
  02ed3bc  lfs 1, 0(3)
  02ed3c0  lfs 2, -3056(4)
  02ed3c4  ori 3, 31, 0
  02ed3c8  li 4, 1
  02ed3cc  fmuls 1, 2, 1
  02ed3d0  fctiwz 1, 1
  02ed3d4  stfd 1, 112(1)
  02ed3d8  lwz 6, 116(1)
  02ed3dc  extsw 6, 6
  02ed3e0  bl 0xfddc0
  02ed3e4  nop
  02ed3e8  li 3, 1
  02ed3ec  lis 4, 16256
  02ed3f0  stb 3, 32(31)
  02ed3f4  stw 4, 88(31)
  02ed3f8  b 0x2ed704
  02ed3fc  lwz 3, 0(3)
  02ed400  lbz 3, 32(3)
  02ed404  cmpwi 3, 2
  02ed408  cmpwi 1, 3, 8
  02ed40c  bf 2, 0x2ed46c
  02ed410  lbz 3, 83(31)
  02ed414  cmpwi 3, 3
  02ed418  bt 2, 0x2ed458
  02ed41c  lis 3, 47
  02ed420  lis 4, 114
  02ed424  addi 3, 3, -11628
  02ed428  li 5, 0
  02ed42c  lfs 1, 0(3)
  02ed430  lfs 2, -3056(4)
  02ed434  ori 3, 31, 0
  02ed438  li 4, 3
  02ed43c  fmuls 1, 2, 1
  02ed440  fctiwz 1, 1
  02ed444  stfd 1, 112(1)
  02ed448  lwz 6, 116(1)
  02ed44c  extsw 6, 6
  02ed450  bl 0xfddc0
  02ed454  nop
  02ed458  li 3, 3
  02ed45c  lis 4, 16256
  02ed460  stb 3, 32(31)
  02ed464  stw 4, 88(31)
  02ed468  b 0x2ed704
  02ed46c  bf 6, 0x2ed704
  02ed470  lbz 3, 83(31)
  02ed474  cmpwi 3, 2
  02ed478  bt 2, 0x2ed4b8
  02ed47c  lis 3, 47
  02ed480  lis 4, 114
  02ed484  addi 3, 3, -11628
  02ed488  li 5, 0
  02ed48c  lfs 1, 0(3)
  02ed490  lfs 2, -3056(4)
  02ed494  ori 3, 31, 0
  02ed498  li 4, 2
  02ed49c  fmuls 1, 2, 1
  02ed4a0  fctiwz 1, 1
  02ed4a4  stfd 1, 112(1)
  02ed4a8  lwz 6, 116(1)
  02ed4ac  extsw 6, 6
  02ed4b0  bl 0xfddc0
  02ed4b4  nop
  02ed4b8  li 3, 2
  02ed4bc  lis 4, 16256
  02ed4c0  stb 3, 32(31)
  02ed4c4  stw 4, 88(31)
  02ed4c8  b 0x2ed704
  02ed4cc  lbz 3, 112(31)
  02ed4d0  rlwinm 3, 3, 0, 30, 30
  02ed4d4  cmpwi 3, 0
  02ed4d8  bt 2, 0x2ed704
  02ed4dc  ori 3, 31, 0
  02ed4e0  bl 0xefb38
  02ed4e4  nop
  02ed4e8  b 0x2ed710
  02ed4ec  lbz 3, 112(31)
  02ed4f0  rlwinm 3, 3, 0, 30, 30
  02ed4f4  cmpwi 3, 0
  02ed4f8  bt 2, 0x2ed704
  02ed4fc  lbz 3, 83(31)
  02ed500  cmpwi 3, 4
  02ed504  bt 2, 0x2ed544
  02ed508  lis 3, 47
  02ed50c  lis 4, 114
  02ed510  addi 3, 3, -11628
  02ed514  li 5, 0
  02ed518  lfs 1, 0(3)
  02ed51c  lfs 2, -3056(4)
  02ed520  ori 3, 31, 0
  02ed524  li 4, 4
  02ed528  fmuls 1, 2, 1
  02ed52c  fctiwz 1, 1
  02ed530  stfd 1, 112(1)
  02ed534  lwz 6, 116(1)
  02ed538  extsw 6, 6
  02ed53c  bl 0xfddc0
  02ed540  nop
  02ed544  li 3, 4
  02ed548  stb 3, 32(31)
  02ed54c  b 0x2ed704
  02ed550  lwz 3, 0(3)
  02ed554  lbz 3, 32(3)
  02ed558  cmpwi 1, 3, 4
  02ed55c  cmpwi 3, 3
  02ed560  cror 2, 2, 6
  02ed564  bt 2, 0x2ed570
  02ed568  cmpwi 3, 5
  02ed56c  bf 2, 0x2ed704
  02ed570  lbz 3, 83(31)
  02ed574  cmpwi 3, 5
  02ed578  bt 2, 0x2ed5b8
  02ed57c  lis 3, 47
  02ed580  lis 4, 114
  02ed584  addi 3, 3, -11628
  02ed588  li 5, 0
  02ed58c  lfs 1, 0(3)
  02ed590  lfs 2, -3056(4)
  02ed594  ori 3, 31, 0
  02ed598  fmuls 1, 2, 1
  02ed59c  li 4, 5
  02ed5a0  fctiwz 1, 1
  02ed5a4  stfd 1, 112(1)
  02ed5a8  lwz 6, 116(1)
  02ed5ac  extsw 6, 6
  02ed5b0  bl 0xfddc0
  02ed5b4  nop
  02ed5b8  li 3, 5
  02ed5bc  stb 3, 32(31)
  02ed5c0  b 0x2ed704
  02ed5c4  lbz 4, 112(31)
  02ed5c8  rlwinm 4, 4, 0, 30, 30
  02ed5cc  cmpwi 4, 0
  02ed5d0  bt 2, 0x2ed5dc
  02ed5d4  li 4, 0
  02ed5d8  stw 4, 88(31)
  02ed5dc  lwz 3, 0(3)
  02ed5e0  lbz 3, 32(3)
  02ed5e4  cmpwi 3, 6
  02ed5e8  cmpwi 1, 3, 7
  02ed5ec  bt 2, 0x2ed5f4
  02ed5f0  bf 6, 0x2ed704
  02ed5f4  lis 3, 16256
  02ed5f8  lbz 4, 83(31)
  02ed5fc  cmpwi 4, 7
  02ed600  stw 3, 88(31)
  02ed604  bt 2, 0x2ed644
  02ed608  lis 3, 47
  02ed60c  lis 4, 114
  02ed610  addi 3, 3, -11628
  02ed614  li 5, 0
  02ed618  lfs 1, 0(3)
  02ed61c  lfs 2, -3056(4)
  02ed620  ori 3, 31, 0
  02ed624  li 4, 7
  02ed628  fmuls 1, 2, 1
  02ed62c  fctiwz 1, 1
  02ed630  stfd 1, 112(1)
  02ed634  lwz 6, 116(1)
  02ed638  extsw 6, 6
  02ed63c  bl 0xfddc0
  02ed640  nop
  02ed644  li 3, 7
  02ed648  stb 3, 32(31)
  02ed64c  b 0x2ed704
  02ed650  lbz 3, 112(31)
  02ed654  rlwinm 3, 3, 0, 30, 30
  02ed658  cmpwi 3, 0
  02ed65c  bt 2, 0x2ed704
  02ed660  lbz 3, 83(31)
  02ed664  cmpwi 3, 1
  02ed668  bt 2, 0x2ed6a8
  02ed66c  lis 3, 47
  02ed670  lis 4, 114
  02ed674  addi 3, 3, -11628
  02ed678  li 5, 0
  02ed67c  lfs 1, 0(3)
  02ed680  lfs 2, -3056(4)
  02ed684  ori 3, 31, 0
  02ed688  fmuls 1, 2, 1
  02ed68c  li 4, 1
  02ed690  fctiwz 1, 1
  02ed694  stfd 1, 112(1)
  02ed698  lwz 6, 116(1)
  02ed69c  extsw 6, 6
  02ed6a0  bl 0xfddc0
  02ed6a4  nop
  02ed6a8  li 3, 1
  02ed6ac  stb 3, 32(31)
  02ed6b0  b 0x2ed704
  02ed6b4  lbz 3, 83(31)
  02ed6b8  cmpwi 3, 1
  02ed6bc  bt 2, 0x2ed6fc
  02ed6c0  lis 3, 47
  02ed6c4  lis 4, 114
  02ed6c8  addi 3, 3, -11628
  02ed6cc  li 5, 0
  02ed6d0  lfs 1, 0(3)
  02ed6d4  lfs 2, -3056(4)
  02ed6d8  ori 3, 31, 0
  02ed6dc  li 4, 1
  02ed6e0  fmuls 1, 2, 1
  02ed6e4  fctiwz 1, 1
  02ed6e8  stfd 1, 112(1)
  02ed6ec  lwz 6, 116(1)
  02ed6f0  extsw 6, 6
  02ed6f4  bl 0xfddc0
  02ed6f8  nop
  02ed6fc  li 3, 1
  02ed700  stb 3, 32(31)
  02ed704  ori 3, 31, 0
  02ed708  bl 0xf30a0
  02ed70c  nop
  02ed710  ld 0, 160(1)
  02ed714  mtlr 0
  02ed718  ld 31, 136(1)
  02ed71c  addi 1, 1, 144
  02ed720  blr
