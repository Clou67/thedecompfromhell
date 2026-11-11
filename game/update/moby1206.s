# game/update/moby1206.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1206_001ff1e4:   # 0x1ff1e4, 0x14 bytes
  01ff1e4  lis 3, 118
  01ff1e8  lis 4, 1
  01ff1ec  addic 3, 3, 25904
  01ff1f0  stw 4, 72(3)
  01ff1f4  blr

UpdateMoby_1206_DamageCauser:   # 0x1ff200, 0x280 bytes
  01ff200  stdu 1, -240(1)
  01ff204  mflr 0
  01ff208  std 0, 256(1)
  01ff20c  stfd 29, 216(1)
  01ff210  stfd 30, 224(1)
  01ff214  stfd 31, 232(1)
  01ff218  std 31, 208(1)
  01ff21c  lbz 4, 32(3)
  01ff220  std 30, 200(1)
  01ff224  ori 31, 3, 0
  01ff228  lwz 30, 120(3)
  01ff22c  std 29, 192(1)
  01ff230  std 28, 184(1)
  01ff234  std 27, 176(1)
  01ff238  cmpwi 4, 0
  01ff23c  bf 2, 0x1ff250
  01ff240  li 3, 1
  01ff244  li 4, -1
  01ff248  stb 3, 32(31)
  01ff24c  stw 4, 20(30)
  01ff250  lis 3, 161
  01ff254  srawi 4, 31, 8
  01ff258  lwz 3, 1808(3)
  01ff25c  xor 3, 3, 4
  01ff260  clrlwi 3, 3, 29
  01ff264  cmpwi 3, 0
  01ff268  bf 2, 0x1ff2b4
  01ff26c  lwz 3, 20(30)
  01ff270  cmpwi 3, -1
  01ff274  bt 2, 0x1ff294
  01ff278  extsw 4, 3
  01ff27c  ori 3, 31, 0
  01ff280  bl 0x15cc7c
  01ff284  nop
  01ff288  cmpwi 3, 0
  01ff28c  bf 2, 0x1ff2b4
  01ff290  lwz 3, 20(30)
  01ff294  cmpwi 3, -1
  01ff298  bf 2, 0x1ff2b4
  01ff29c  li 3, 0
  01ff2a0  li 4, 4
  01ff2a4  ori 5, 31, 0
  01ff2a8  bl 0x15d12c
  01ff2ac  nop
  01ff2b0  stw 3, 20(30)
  01ff2b4  lwz 3, 8(30)
  01ff2b8  extsw 3, 3
  01ff2bc  bl 0x502730
  01ff2c0  nop
  01ff2c4  lis 3, 32
  01ff2c8  lfs 2, 4(30)
  01ff2cc  addi 3, 3, -3592
  01ff2d0  lfs 3, 0(30)
  01ff2d4  lfs 4, 0(3)
  01ff2d8  fnmsubs 2, 3, 4, 2
  01ff2dc  lfs 30, 228(31)
  01ff2e0  lfs 31, 224(31)
  01ff2e4  fdivs 29, 2, 1
  01ff2e8  lfs 1, 232(31)
  01ff2ec  lfs 2, 4(3)
  01ff2f0  lfs 3, 16(31)
  01ff2f4  lfs 4, 20(31)
  01ff2f8  stfs 3, 112(1)
  01ff2fc  lfs 5, 24(31)
  01ff300  stfs 4, 116(1)
  01ff304  lfs 6, 28(31)
  01ff308  stfs 5, 120(1)
  01ff30c  stfs 6, 124(1)
  01ff310  lfs 6, 0(30)
  01ff314  addic 3, 1, 128
  01ff318  ori 4, 31, 0
  01ff31c  lwz 5, 16(30)
  01ff320  extsw 5, 5
  01ff324  fmuls 30, 30, 29
  01ff328  fmuls 31, 31, 29
  01ff32c  fmuls 29, 1, 29
  01ff330  fmuls 1, 30, 30
  01ff334  fmadds 1, 31, 31, 1
  01ff338  fmadds 1, 29, 29, 1
  01ff33c  fsqrts 1, 1
  01ff340  fdivs 6, 6, 1
  01ff344  fsub 7, 2, 1
  01ff348  fsub 8, 2, 1
  01ff34c  fsub 9, 2, 1
  01ff350  fsub 10, 1, 2
  01ff354  fsub 11, 1, 2
  01ff358  fsub 1, 1, 2
  01ff35c  fmuls 12, 29, 6
  01ff360  fmuls 13, 30, 6
  01ff364  fmuls 6, 31, 6
  01ff368  fsel 7, 7, 2, 12
  01ff36c  fsel 8, 8, 2, 13
  01ff370  fsel 2, 9, 2, 6
  01ff374  fsel 7, 10, 7, 12
  01ff378  fsel 8, 11, 8, 13
  01ff37c  fsel 1, 1, 2, 6
  01ff380  fadds 2, 5, 7
  01ff384  fadds 4, 4, 8
  01ff388  fadds 1, 3, 1
  01ff38c  stfs 2, 120(1)
  01ff390  stfs 4, 116(1)
  01ff394  stfs 1, 112(1)
  01ff398  lfs 1, 12(30)
  01ff39c  bl 0x1057f4
  01ff3a0  nop
  01ff3a4  lwz 3, 8(30)
  01ff3a8  li 27, 0
  01ff3ac  cmpwi 3, 0
  01ff3b0  bf 1, 0x1ff450
  01ff3b4  lis 28, 101
  01ff3b8  lis 29, 161
  01ff3bc  addic 28, 28, 19924
  01ff3c0  addic 29, 29, 2368
  01ff3c4  addic 3, 1, 112
  01ff3c8  addic 7, 1, 128
  01ff3cc  lfs 1, 0(30)
  01ff3d0  li 5, 1
  01ff3d4  ori 6, 31, 0
  01ff3d8  bl 0x5e598
  01ff3dc  nop
  01ff3e0  cmpwi 3, 0
  01ff3e4  bt 2, 0x1ff41c
  01ff3e8  lfs 1, 12(30)
  01ff3ec  ori 3, 28, 0
  01ff3f0  lwz 5, 24(29)
  01ff3f4  lhz 4, 178(31)
  01ff3f8  extsh 4, 4
  01ff3fc  lhz 6, 166(5)
  01ff400  lhz 7, 178(5)
  01ff404  stfd 1, 80(1)
  01ff408  extsh 5, 6
  01ff40c  extsh 6, 7
  01ff410  ld 7, 80(1)
  01ff414  bl 0x5cd098
  01ff418  nop
  01ff41c  lfs 1, 112(1)
  01ff420  lfs 2, 116(1)
  01ff424  addic 27, 27, 1
  01ff428  fadds 1, 1, 31
  01ff42c  lfs 3, 120(1)
  01ff430  fadds 2, 2, 30
  01ff434  fadds 3, 3, 29
  01ff438  lwz 3, 8(30)
  01ff43c  cmpw 27, 3
  01ff440  stfs 1, 112(1)
  01ff444  stfs 2, 116(1)
  01ff448  stfs 3, 120(1)
  01ff44c  bt 0, 0x1ff3c4
  01ff450  ld 0, 256(1)
  01ff454  mtlr 0
  01ff458  lfd 29, 216(1)
  01ff45c  lfd 30, 224(1)
  01ff460  lfd 31, 232(1)
  01ff464  ld 27, 176(1)
  01ff468  ld 28, 184(1)
  01ff46c  ld 29, 192(1)
  01ff470  ld 30, 200(1)
  01ff474  ld 31, 208(1)
  01ff478  addi 1, 1, 240
  01ff47c  blr
