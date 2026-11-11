# game/update/moby982.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_004c82d0:   # 0x4c82d0, 0x14 bytes
  04c82d0  lbz 4, 188(3)
  04c82d4  cntlzw 4, 4
  04c82d8  rlwinm 4, 4, 27, 31, 31
  04c82dc  stb 4, 188(3)
  04c82e0  blr

UpdateMoby_982:   # 0x4c8310, 0x1a4 bytes
  04c8310  stdu 1, -144(1)
  04c8314  mflr 0
  04c8318  std 0, 160(1)
  04c831c  lbz 5, 32(3)
  04c8320  lwz 4, 120(3)
  04c8324  cmpwi 5, 0
  04c8328  cmpwi 1, 5, 1
  04c832c  std 31, 136(1)
  04c8330  cmpwi 6, 5, -1
  04c8334  bt 1, 0x4c8340
  04c8338  bf 25, 0x4c84a0
  04c833c  b 0x4c8348
  04c8340  bf 5, 0x4c8370
  04c8344  b 0x4c84a0
  04c8348  li 4, 1
  04c834c  li 5, 255
  04c8350  lhz 7, 52(3)
  04c8354  li 6, 0
  04c8358  stb 4, 32(3)
  04c835c  ori 4, 7, 1
  04c8360  stb 5, 48(3)
  04c8364  stw 6, 148(3)
  04c8368  sth 4, 52(3)
  04c836c  b 0x4c84a0
  04c8370  lis 31, 151
  04c8374  lwz 4, 0(4)
  04c8378  addic 31, 31, -25376
  04c837c  extsw 4, 4
  04c8380  addic 3, 31, 128
  04c8384  bl 0x110b70
  04c8388  nop
  04c838c  cmpwi 3, 0
  04c8390  bt 2, 0x4c8494
  04c8394  lis 5, 230
  04c8398  lfs 1, 128(31)
  04c839c  lis 3, 230
  04c83a0  lfs 2, 132(31)
  04c83a4  addic 6, 5, -21872
  04c83a8  li 7, 1
  04c83ac  lis 4, 16960
  04c83b0  stfs 1, -21872(5)
  04c83b4  li 8, 5
  04c83b8  lis 5, 161
  04c83bc  stw 7, -21876(3)
  04c83c0  stfs 2, 4(6)
  04c83c4  lis 3, -18933
  04c83c8  stw 4, 12(6)
  04c83cc  sth 8, 478(31)
  04c83d0  ori 3, 3, 24759
  04c83d4  lwz 4, 1808(5)
  04c83d8  mulhw 3, 3, 4
  04c83dc  addc 3, 3, 4
  04c83e0  srawi 3, 3, 8
  04c83e4  srwi 5, 3, 31
  04c83e8  addc 3, 3, 5
  04c83ec  sldi 5, 3, 7
  04c83f0  sldi 3, 3, 3
  04c83f4  subc 3, 5, 3
  04c83f8  addc 5, 3, 3
  04c83fc  addc 3, 3, 5
  04c8400  subc 3, 4, 3
  04c8404  lis 4, 77
  04c8408  extsw 3, 3
  04c840c  std 3, 112(1)
  04c8410  addi 3, 4, -32024
  04c8414  lfs 1, 0(3)
  04c8418  lfs 2, 4(3)
  04c841c  lfs 3, 8(3)
  04c8420  lfs 4, 12(3)
  04c8424  lfd 5, 112(1)
  04c8428  fcfid 5, 5
  04c842c  frsp 5, 5
  04c8430  fmsubs 1, 5, 1, 2
  04c8434  lfs 5, 16(3)
  04c8438  fsubs 2, 3, 1
  04c843c  fsubs 3, 4, 1
  04c8440  fsub 4, 1, 2
  04c8444  fsel 1, 4, 2, 1
  04c8448  lfs 2, 20(3)
  04c844c  fsub 4, 3, 1
  04c8450  fsel 1, 4, 3, 1
  04c8454  lfs 3, 24(3)
  04c8458  lfs 4, 28(3)
  04c845c  lfs 7, 32(3)
  04c8460  lfs 8, 36(3)
  04c8464  fmuls 6, 1, 1
  04c8468  fmuls 9, 6, 1
  04c846c  fmuls 10, 6, 9
  04c8470  fmadds 1, 9, 5, 1
  04c8474  fmuls 5, 6, 10
  04c8478  fmadds 1, 10, 2, 1
  04c847c  fmuls 2, 6, 5
  04c8480  fmadds 1, 5, 3, 1
  04c8484  fmadds 1, 2, 4, 1
  04c8488  fmadds 1, 1, 7, 8
  04c848c  stfs 1, 8(6)
  04c8490  b 0x4c84a0
  04c8494  lis 3, 230
  04c8498  li 4, 0
  04c849c  stw 4, -21876(3)
  04c84a0  ld 0, 160(1)
  04c84a4  mtlr 0
  04c84a8  ld 31, 136(1)
  04c84ac  addi 1, 1, 144
  04c84b0  blr
