# game/update/moby1812.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1812:   # 0x2bc4b8, 0x290 bytes
  02bc4b8  stdu 1, -256(1)
  02bc4bc  mflr 0
  02bc4c0  std 0, 272(1)
  02bc4c4  stfd 28, 224(1)
  02bc4c8  stfd 29, 232(1)
  02bc4cc  stfd 30, 240(1)
  02bc4d0  stfd 31, 248(1)
  02bc4d4  lbz 4, 32(3)
  02bc4d8  cmpwi 4, 0
  02bc4dc  cmpwi 1, 4, 1
  02bc4e0  std 31, 216(1)
  02bc4e4  std 30, 208(1)
  02bc4e8  cmpwi 6, 4, -1
  02bc4ec  bt 1, 0x2bc4f8
  02bc4f0  bf 25, 0x2bc720
  02bc4f4  b 0x2bc500
  02bc4f8  bf 5, 0x2bc514
  02bc4fc  b 0x2bc720
  02bc500  li 4, 255
  02bc504  li 5, 1
  02bc508  stb 4, 48(3)
  02bc50c  stb 5, 32(3)
  02bc510  b 0x2bc720
  02bc514  lis 3, 161
  02bc518  lwz 3, 1800(3)
  02bc51c  cmpwi 3, 2
  02bc520  bf 2, 0x2bc720
  02bc524  lis 3, 150
  02bc528  addic 3, 3, -12976
  02bc52c  lwz 4, 48(3)
  02bc530  cmpwi 4, 0
  02bc534  bf 2, 0x2bc720
  02bc538  li 5, 0
  02bc53c  li 6, 3
  02bc540  subc 4, 5, 4
  02bc544  li 5, 0
  02bc548  cntlzw 4, 4
  02bc54c  subc 6, 6, 5
  02bc550  sldi 4, 4, 58
  02bc554  addic 31, 1, 112
  02bc558  sradi 4, 4, 63
  02bc55c  and 6, 4, 6
  02bc560  li 4, 6
  02bc564  addc 5, 5, 6
  02bc568  rlwimi 3, 5, 2, 28, 29
  02bc56c  ori 5, 31, 0
  02bc570  lwz 30, 376(3)
  02bc574  ori 3, 30, 0
  02bc578  bl 0xf1114
  02bc57c  nop
  02bc580  addic 5, 1, 144
  02bc584  ori 3, 30, 0
  02bc588  li 4, 4
  02bc58c  bl 0xf1114
  02bc590  nop
  02bc594  lfs 1, 116(1)
  02bc598  lfs 2, 148(1)
  02bc59c  lfs 3, 112(1)
  02bc5a0  fsubs 1, 1, 2
  02bc5a4  lfs 2, 144(1)
  02bc5a8  lfs 4, 120(1)
  02bc5ac  fsubs 2, 3, 2
  02bc5b0  lfs 3, 152(1)
  02bc5b4  fsubs 3, 4, 3
  02bc5b8  fmuls 4, 1, 1
  02bc5bc  lis 3, 44
  02bc5c0  lfs 5, 124(1)
  02bc5c4  addi 6, 3, -15192
  02bc5c8  stfs 5, 188(1)
  02bc5cc  ori 3, 31, 0
  02bc5d0  fmadds 4, 2, 2, 4
  02bc5d4  lfs 31, 4(6)
  02bc5d8  lfs 30, 0(6)
  02bc5dc  ori 4, 31, 0
  02bc5e0  addic 5, 1, 176
  02bc5e4  fmadds 4, 3, 3, 4
  02bc5e8  fsqrts 4, 4
  02bc5ec  fdivs 5, 31, 4
  02bc5f0  fsub 6, 30, 4
  02bc5f4  fsub 7, 30, 4
  02bc5f8  fsub 8, 30, 4
  02bc5fc  fsub 9, 4, 30
  02bc600  fsub 10, 4, 30
  02bc604  fsub 4, 4, 30
  02bc608  fmuls 2, 2, 5
  02bc60c  fmuls 1, 1, 5
  02bc610  fmuls 3, 3, 5
  02bc614  fsel 5, 6, 30, 2
  02bc618  fsel 6, 7, 30, 1
  02bc61c  fsel 7, 8, 30, 3
  02bc620  fsel 2, 9, 5, 2
  02bc624  fsel 1, 10, 6, 1
  02bc628  fsel 3, 4, 7, 3
  02bc62c  stfs 2, 176(1)
  02bc630  stfs 1, 180(1)
  02bc634  stfs 3, 184(1)
  02bc638  lfs 29, 8(6)
  02bc63c  lfs 28, 12(6)
  02bc640  fmr 1, 29
  02bc644  fmr 2, 28
  02bc648  bl 0x11a1a0
  02bc64c  nop
  02bc650  addic 31, 1, 128
  02bc654  ori 3, 30, 0
  02bc658  li 4, 7
  02bc65c  ori 5, 31, 0
  02bc660  bl 0xf1114
  02bc664  nop
  02bc668  addic 5, 1, 160
  02bc66c  ori 3, 30, 0
  02bc670  li 4, 5
  02bc674  bl 0xf1114
  02bc678  nop
  02bc67c  lfs 1, 132(1)
  02bc680  lfs 2, 164(1)
  02bc684  lfs 3, 128(1)
  02bc688  fsubs 4, 1, 2
  02bc68c  lfs 1, 160(1)
  02bc690  lfs 2, 136(1)
  02bc694  fsubs 3, 3, 1
  02bc698  lfs 1, 168(1)
  02bc69c  fsubs 5, 2, 1
  02bc6a0  fmuls 1, 4, 4
  02bc6a4  addic 5, 1, 192
  02bc6a8  ori 3, 31, 0
  02bc6ac  fmr 2, 28
  02bc6b0  ori 4, 31, 0
  02bc6b4  fmadds 1, 3, 3, 1
  02bc6b8  fmadds 1, 5, 5, 1
  02bc6bc  fsqrts 6, 1
  02bc6c0  lfs 1, 140(1)
  02bc6c4  stfs 1, 204(1)
  02bc6c8  fmr 1, 29
  02bc6cc  fdivs 7, 31, 6
  02bc6d0  fsub 8, 30, 6
  02bc6d4  fsub 9, 30, 6
  02bc6d8  fsub 10, 30, 6
  02bc6dc  fsub 11, 6, 30
  02bc6e0  fsub 12, 6, 30
  02bc6e4  fsub 6, 6, 30
  02bc6e8  fmuls 3, 3, 7
  02bc6ec  fmuls 4, 4, 7
  02bc6f0  fmuls 5, 5, 7
  02bc6f4  fsel 7, 8, 30, 3
  02bc6f8  fsel 8, 9, 30, 4
  02bc6fc  fsel 9, 10, 30, 5
  02bc700  fsel 3, 11, 7, 3
  02bc704  fsel 4, 12, 8, 4
  02bc708  fsel 5, 6, 9, 5
  02bc70c  stfs 3, 192(1)
  02bc710  stfs 4, 196(1)
  02bc714  stfs 5, 200(1)
  02bc718  bl 0x11a1a0
  02bc71c  nop
  02bc720  ld 0, 272(1)
  02bc724  mtlr 0
  02bc728  lfd 28, 224(1)
  02bc72c  lfd 29, 232(1)
  02bc730  lfd 30, 240(1)
  02bc734  lfd 31, 248(1)
  02bc738  ld 30, 208(1)
  02bc73c  ld 31, 216(1)
  02bc740  addi 1, 1, 256
  02bc744  blr
