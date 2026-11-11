# game/update/moby812.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_812:   # 0x46d4e0, 0x178 bytes
  046d4e0  stdu 1, -192(1)
  046d4e4  mflr 0
  046d4e8  std 0, 208(1)
  046d4ec  stfd 29, 168(1)
  046d4f0  stfd 30, 176(1)
  046d4f4  stfd 31, 184(1)
  046d4f8  std 31, 160(1)
  046d4fc  std 30, 152(1)
  046d500  ori 31, 3, 0
  046d504  addic 30, 31, 64
  046d508  addic 5, 31, 16
  046d50c  std 29, 144(1)
  046d510  lbz 3, 32(31)
  046d514  lwz 29, 120(31)
  046d518  cmpwi 3, 0
  046d51c  cmpwi 1, 3, 1
  046d520  cmpwi 6, 3, -1
  046d524  addic 4, 29, 96
  046d528  addic 3, 29, 112
  046d52c  bt 1, 0x46d538
  046d530  bf 25, 0x46d630
  046d534  b 0x46d540
  046d538  bf 5, 0x46d58c
  046d53c  b 0x46d630
  046d540  li 6, 1
  046d544  stw 6, 92(29)
  046d548  lwz 29, 128(29)
  046d54c  cmpwi 29, 0
  046d550  bt 0, 0x46d630
  046d554  lis 7, 164
  046d558  slwi 9, 29, 8
  046d55c  ori 8, 3, 0
  046d560  ori 3, 31, 0
  046d564  ori 6, 30, 0
  046d568  lwz 10, -28512(7)
  046d56c  ori 7, 4, 0
  046d570  addc 4, 10, 9
  046d574  clrldi 4, 4, 32
  046d578  bl 0x1124c0
  046d57c  nop
  046d580  li 3, 1
  046d584  stb 3, 32(31)
  046d588  b 0x46d630
  046d58c  lfs 31, 16(31)
  046d590  lfs 1, 64(31)
  046d594  ori 7, 5, 0
  046d598  lfs 30, 20(31)
  046d59c  lis 8, 164
  046d5a0  lfs 29, 24(31)
  046d5a4  ori 5, 4, 0
  046d5a8  lfs 2, 68(31)
  046d5ac  ori 6, 3, 0
  046d5b0  stfs 1, 112(1)
  046d5b4  ori 3, 31, 0
  046d5b8  lfs 1, 72(31)
  046d5bc  lwz 4, 128(29)
  046d5c0  stfs 2, 116(1)
  046d5c4  lfs 2, 76(31)
  046d5c8  slwi 4, 4, 8
  046d5cc  lwz 8, -28512(8)
  046d5d0  stfs 1, 120(1)
  046d5d4  addc 4, 8, 4
  046d5d8  stfs 2, 124(1)
  046d5dc  ori 8, 30, 0
  046d5e0  clrldi 4, 4, 32
  046d5e4  bl 0x112678
  046d5e8  nop
  046d5ec  lfs 1, 16(31)
  046d5f0  lfs 2, 20(31)
  046d5f4  ori 6, 30, 0
  046d5f8  fsubs 1, 1, 31
  046d5fc  lfs 3, 24(31)
  046d600  fsubs 2, 2, 30
  046d604  lfs 4, 28(31)
  046d608  fsubs 3, 3, 29
  046d60c  addic 3, 29, 32
  046d610  stfs 4, 140(1)
  046d614  addic 4, 1, 128
  046d618  addic 5, 1, 112
  046d61c  stfs 1, 128(1)
  046d620  stfs 2, 132(1)
  046d624  stfs 3, 136(1)
  046d628  bl 0x112900
  046d62c  nop
  046d630  ld 0, 208(1)
  046d634  mtlr 0
  046d638  lfd 29, 168(1)
  046d63c  lfd 30, 176(1)
  046d640  lfd 31, 184(1)
  046d644  ld 29, 144(1)
  046d648  ld 30, 152(1)
  046d64c  ld 31, 160(1)
  046d650  addi 1, 1, 192
  046d654  blr
