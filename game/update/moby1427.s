# game/update/moby1427.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_MOBY1427:   # 0xeb288, 0x14 bytes
  00eb288  lis 3, 115
  00eb28c  lis 4, 1
  00eb290  addic 3, 3, -29144
  00eb294  stw 4, 72(3)
  00eb298  blr

Spawn_Moby1427_GCShockwave:   # 0xeb2a8, 0x104 bytes
  00eb2a8  stdu 1, -160(1)
  00eb2ac  mflr 0
  00eb2b0  std 0, 176(1)
  00eb2b4  stfd 29, 136(1)
  00eb2b8  stfd 30, 144(1)
  00eb2bc  stfd 31, 152(1)
  00eb2c0  std 31, 128(1)
  00eb2c4  li 3, 1427
  00eb2c8  ori 31, 5, 0
  00eb2cc  std 30, 120(1)
  00eb2d0  fmr 31, 3
  00eb2d4  ori 30, 4, 0
  00eb2d8  fmr 30, 2
  00eb2dc  std 29, 112(1)
  00eb2e0  fmr 29, 1
  00eb2e4  bl 0xefa28
  00eb2e8  nop
  00eb2ec  ori 29, 3, 0
  00eb2f0  cmpwi 29, 0
  00eb2f4  bt 2, 0xeb380
  00eb2f8  lfs 1, 0(30)
  00eb2fc  li 4, 128
  00eb300  ori 3, 29, 0
  00eb304  stfs 1, 16(29)
  00eb308  lfs 1, 4(30)
  00eb30c  li 5, 128
  00eb310  li 6, 112
  00eb314  stfs 1, 20(29)
  00eb318  lfs 1, 8(30)
  00eb31c  stfs 1, 24(29)
  00eb320  lfs 1, 12(30)
  00eb324  stfs 1, 28(29)
  00eb328  bl 0xf1ec8
  00eb32c  nop
  00eb330  lis 4, 15
  00eb334  lwz 3, 120(29)
  00eb338  li 5, 255
  00eb33c  addi 4, 4, -19808
  00eb340  li 6, 1
  00eb344  li 7, 0
  00eb348  stfs 30, 0(3)
  00eb34c  lfs 1, 0(4)
  00eb350  lwz 4, 36(29)
  00eb354  fmuls 1, 29, 1
  00eb358  stw 31, 4(3)
  00eb35c  stw 31, 8(3)
  00eb360  lfs 2, 36(4)
  00eb364  sth 5, 50(29)
  00eb368  fmuls 1, 1, 2
  00eb36c  stfs 1, 44(29)
  00eb370  stfs 31, 12(3)
  00eb374  stb 5, 48(29)
  00eb378  stb 6, 49(29)
  00eb37c  stb 7, 32(29)
  00eb380  ori 3, 29, 0
  00eb384  ld 0, 176(1)
  00eb388  mtlr 0
  00eb38c  lfd 29, 136(1)
  00eb390  lfd 30, 144(1)
  00eb394  lfd 31, 152(1)
  00eb398  ld 29, 112(1)
  00eb39c  ld 30, 120(1)
  00eb3a0  ld 31, 128(1)
  00eb3a4  addi 1, 1, 160
  00eb3a8  blr

UpdateMoby_1427_GC_Shockwave:   # 0xeb3c0, 0x13c bytes
  00eb3c0  stdu 1, -192(1)
  00eb3c4  mflr 0
  00eb3c8  std 0, 208(1)
  00eb3cc  stfd 31, 184(1)
  00eb3d0  std 31, 176(1)
  00eb3d4  ori 31, 3, 0
  00eb3d8  lis 4, 114
  00eb3dc  lwz 3, 36(31)
  00eb3e0  lfs 1, 44(31)
  00eb3e4  lfs 2, 36(3)
  00eb3e8  fdivs 31, 1, 2
  00eb3ec  lis 3, 15
  00eb3f0  addi 3, 3, -19540
  00eb3f4  lfs 1, 0(3)
  00eb3f8  std 30, 168(1)
  00eb3fc  lfs 3, 4(3)
  00eb400  lwz 30, 120(31)
  00eb404  lfs 4, 0(30)
  00eb408  fmadds 31, 31, 1, 4
  00eb40c  fmuls 1, 31, 3
  00eb410  fmuls 1, 1, 2
  00eb414  stfs 1, 44(31)
  00eb418  lfs 1, 8(3)
  00eb41c  lfs 2, -3056(4)
  00eb420  lwz 3, 8(30)
  00eb424  fmuls 1, 2, 1
  00eb428  fctiwz 1, 1
  00eb42c  stfd 1, 128(1)
  00eb430  lwz 4, 132(1)
  00eb434  std 29, 160(1)
  00eb438  std 28, 152(1)
  00eb43c  cmpw 3, 4
  00eb440  bf 0, 0xeb454
  00eb444  sldi 5, 3, 7
  00eb448  subc 3, 5, 3
  00eb44c  divw 3, 3, 4
  00eb450  stb 3, 35(31)
  00eb454  lis 3, 151
  00eb458  lfs 1, 12(30)
  00eb45c  addic 29, 31, 16
  00eb460  addic 3, 3, -25376
  00eb464  lwz 28, 8320(3)
  00eb468  bl 0x502758
  00eb46c  nop
  00eb470  lis 4, 15
  00eb474  extsw 3, 3
  00eb478  fmr 1, 31
  00eb47c  addi 4, 4, -19540
  00eb480  li 5, 0
  00eb484  lis 6, 3
  00eb488  std 3, 128(1)
  00eb48c  ori 3, 28, 0
  00eb490  lfs 3, 12(4)
  00eb494  std 5, 112(1)
  00eb498  ori 4, 29, 0
  00eb49c  lfd 2, 128(1)
  00eb4a0  li 9, 0
  00eb4a4  li 10, 1
  00eb4a8  fcfid 2, 2
  00eb4ac  frsp 2, 2
  00eb4b0  bl 0x105870
  00eb4b4  nop
  00eb4b8  addic 3, 30, 8
  00eb4bc  bl 0x4fff60
  00eb4c0  nop
  00eb4c4  cmpwi 3, 0
  00eb4c8  bt 2, 0xeb4d8
  00eb4cc  ori 3, 31, 0
  00eb4d0  bl 0xefb38
  00eb4d4  nop
  00eb4d8  ld 0, 208(1)
  00eb4dc  mtlr 0
  00eb4e0  lfd 31, 184(1)
  00eb4e4  ld 28, 152(1)
  00eb4e8  ld 29, 160(1)
  00eb4ec  ld 30, 168(1)
  00eb4f0  ld 31, 176(1)
  00eb4f4  addi 1, 1, 192
  00eb4f8  blr
