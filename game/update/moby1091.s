# game/update/moby1091.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1091:   # 0x1bc580, 0x240 bytes
  01bc580  stdu 1, -128(1)
  01bc584  mflr 0
  01bc588  std 0, 144(1)
  01bc58c  std 30, 112(1)
  01bc590  std 31, 120(1)
  01bc594  lwz 30, 120(3)
  01bc598  ori 31, 3, 0
  01bc59c  cmpwi 30, 0
  01bc5a0  bf 2, 0x1bc5b4
  01bc5a4  ori 3, 31, 0
  01bc5a8  bl 0xefb38
  01bc5ac  nop
  01bc5b0  b 0x1bc7a8
  01bc5b4  lbz 3, 32(31)
  01bc5b8  cmpwi 3, 0
  01bc5bc  cmpwi 1, 3, 2
  01bc5c0  cmpwi 6, 3, 1
  01bc5c4  cmpwi 7, 3, -1
  01bc5c8  bt 1, 0x1bc5d4
  01bc5cc  bf 29, 0x1bc7a8
  01bc5d0  b 0x1bc5e0
  01bc5d4  bf 25, 0x1bc604
  01bc5d8  bf 5, 0x1bc6dc
  01bc5dc  b 0x1bc7a8
  01bc5e0  li 3, 255
  01bc5e4  lfs 1, 24(31)
  01bc5e8  li 5, 512
  01bc5ec  li 4, 1
  01bc5f0  stb 3, 48(31)
  01bc5f4  sth 5, 50(31)
  01bc5f8  stfs 1, 12(30)
  01bc5fc  stb 4, 32(31)
  01bc600  b 0x1bc7a8
  01bc604  lis 3, 151
  01bc608  addic 3, 3, -25376
  01bc60c  lwz 3, 8324(3)
  01bc610  cmpwi 3, 114
  01bc614  bf 2, 0x1bc624
  01bc618  lfs 1, 12(30)
  01bc61c  stfs 1, 24(31)
  01bc620  b 0x1bc7a8
  01bc624  lis 3, 161
  01bc628  lis 4, 6990
  01bc62c  ori 4, 4, 33205
  01bc630  lwz 3, 1808(3)
  01bc634  mulhw 4, 4, 3
  01bc638  srawi 4, 4, 6
  01bc63c  srwi 5, 4, 31
  01bc640  addc 4, 4, 5
  01bc644  mulli 4, 4, 600
  01bc648  subc 3, 3, 4
  01bc64c  extsw 3, 3
  01bc650  bl 0x502730
  01bc654  nop
  01bc658  lis 3, 28
  01bc65c  addi 3, 3, -15016
  01bc660  lfs 2, 0(3)
  01bc664  lfs 3, 4(3)
  01bc668  fmuls 1, 1, 2
  01bc66c  lfs 4, 8(3)
  01bc670  lfs 2, 12(3)
  01bc674  lfs 5, 16(3)
  01bc678  fmuls 1, 1, 3
  01bc67c  fsubs 3, 4, 1
  01bc680  fsubs 2, 2, 1
  01bc684  fsub 4, 1, 3
  01bc688  fsel 1, 4, 3, 1
  01bc68c  lfs 3, 20(3)
  01bc690  fsub 4, 2, 1
  01bc694  fsel 1, 4, 2, 1
  01bc698  lfs 2, 24(3)
  01bc69c  lfs 4, 28(3)
  01bc6a0  lis 3, 118
  01bc6a4  lfs 7, 12(30)
  01bc6a8  fmuls 6, 1, 1
  01bc6ac  fmuls 8, 6, 1
  01bc6b0  fmuls 9, 6, 8
  01bc6b4  fmadds 1, 8, 5, 1
  01bc6b8  lfs 5, 15200(3)
  01bc6bc  fmuls 8, 6, 9
  01bc6c0  fmadds 1, 9, 3, 1
  01bc6c4  fmuls 3, 6, 8
  01bc6c8  fmadds 1, 8, 2, 1
  01bc6cc  fmadds 1, 3, 4, 1
  01bc6d0  fmadds 1, 5, 1, 7
  01bc6d4  stfs 1, 24(31)
  01bc6d8  b 0x1bc7a8
  01bc6dc  lwz 4, 12(30)
  01bc6e0  lis 3, 16256
  01bc6e4  lfs 1, 0(30)
  01bc6e8  srawi 5, 4, 31
  01bc6ec  srwi 6, 5, 1
  01bc6f0  xor 4, 6, 4
  01bc6f4  subc 4, 4, 5
  01bc6f8  cmpw 4, 3
  01bc6fc  bf 1, 0x1bc72c
  01bc700  lis 3, 28
  01bc704  lfs 2, 4(30)
  01bc708  addi 3, 3, -15016
  01bc70c  lfs 3, 32(3)
  01bc710  lfs 4, 8(30)
  01bc714  fmuls 1, 1, 3
  01bc718  fmuls 2, 2, 3
  01bc71c  fmuls 3, 4, 3
  01bc720  stfs 1, 0(30)
  01bc724  stfs 2, 4(30)
  01bc728  stfs 3, 8(30)
  01bc72c  lfs 2, 16(31)
  01bc730  fadds 1, 2, 1
  01bc734  lfs 2, 20(31)
  01bc738  lfs 3, 24(31)
  01bc73c  lfs 4, 64(31)
  01bc740  lfs 5, 68(31)
  01bc744  lis 3, 151
  01bc748  addic 3, 3, -25376
  01bc74c  stfs 1, 16(31)
  01bc750  lfs 1, 4(30)
  01bc754  fadds 1, 2, 1
  01bc758  lfs 2, 72(31)
  01bc75c  stfs 1, 20(31)
  01bc760  lfs 1, 8(30)
  01bc764  fadds 1, 3, 1
  01bc768  stfs 1, 24(31)
  01bc76c  lfs 1, 16(30)
  01bc770  lwz 3, 8324(3)
  01bc774  fadds 1, 4, 1
  01bc778  cmpwi 3, 114
  01bc77c  stfs 1, 64(31)
  01bc780  lfs 1, 20(30)
  01bc784  fadds 1, 5, 1
  01bc788  stfs 1, 68(31)
  01bc78c  lfs 1, 24(30)
  01bc790  fadds 1, 2, 1
  01bc794  stfs 1, 72(31)
  01bc798  bt 2, 0x1bc7a8
  01bc79c  ori 3, 31, 0
  01bc7a0  bl 0xefb38
  01bc7a4  nop
  01bc7a8  ld 0, 144(1)
  01bc7ac  mtlr 0
  01bc7b0  ld 30, 112(1)
  01bc7b4  ld 31, 120(1)
  01bc7b8  addi 1, 1, 128
  01bc7bc  blr

M1103_001bc7c0:   # 0x1bc7c0, 0x50 bytes
  01bc7c0  li 6, 2
  01bc7c4  lwz 7, 120(3)
  01bc7c8  stb 6, 32(3)
  01bc7cc  lfs 1, 0(4)
  01bc7d0  stfs 1, 0(7)
  01bc7d4  lfs 1, 4(4)
  01bc7d8  stfs 1, 4(7)
  01bc7dc  lfs 1, 8(4)
  01bc7e0  stfs 1, 8(7)
  01bc7e4  lfs 1, 12(4)
  01bc7e8  stfs 1, 12(7)
  01bc7ec  lfs 1, 0(5)
  01bc7f0  stfs 1, 16(7)
  01bc7f4  lfs 1, 4(5)
  01bc7f8  stfs 1, 20(7)
  01bc7fc  lfs 1, 8(5)
  01bc800  stfs 1, 24(7)
  01bc804  lfs 1, 12(5)
  01bc808  stfs 1, 28(7)
  01bc80c  blr

M1103_001bc810:   # 0x1bc810, 0x14 bytes
  01bc810  lis 3, 118
  01bc814  lis 4, 1
  01bc818  addic 3, 3, 15208
  01bc81c  stw 4, 72(3)
  01bc820  blr
