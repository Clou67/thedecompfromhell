# game/update/moby558.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M558_003b6460:   # 0x3b6460, 0x14 bytes
  03b6460  lis 3, 132
  03b6464  lis 4, 1
  03b6468  addic 3, 3, 23056
  03b646c  stw 4, 72(3)
  03b6470  blr

UpdateMoby_558:   # 0x3b6480, 0x234 bytes
  03b6480  stdu 1, -144(1)
  03b6484  mflr 0
  03b6488  std 0, 160(1)
  03b648c  li 4, 255
  03b6490  lis 5, 114
  03b6494  stb 4, 48(3)
  03b6498  std 31, 136(1)
  03b649c  lwz 4, 2180(5)
  03b64a0  lwz 31, 120(3)
  03b64a4  std 30, 128(1)
  03b64a8  cmpwi 4, 0
  03b64ac  bf 2, 0x3b6674
  03b64b0  lis 3, 114
  03b64b4  addic 3, 3, 2180
  03b64b8  lwz 3, 36(3)
  03b64bc  cmpwi 3, -1
  03b64c0  bf 2, 0x3b6674
  03b64c4  lis 3, 151
  03b64c8  addic 3, 3, -25376
  03b64cc  lwz 4, 8332(3)
  03b64d0  cmpwi 6, 4, 1
  03b64d4  cmpwi 4, 0
  03b64d8  cror 2, 2, 26
  03b64dc  cmpwi 1, 4, 9
  03b64e0  bt 2, 0x3b64e8
  03b64e4  bf 6, 0x3b6674
  03b64e8  lis 4, 161
  03b64ec  lwz 4, 1800(4)
  03b64f0  cmpwi 4, 0
  03b64f4  bf 2, 0x3b6674
  03b64f8  lwz 4, 4(31)
  03b64fc  cmpwi 4, -1
  03b6500  bt 2, 0x3b6540
  03b6504  lis 5, 164
  03b6508  slwi 4, 4, 8
  03b650c  lwz 5, -28512(5)
  03b6510  addc 4, 5, 4
  03b6514  cmpwi 4, 0
  03b6518  bt 2, 0x3b6540
  03b651c  clrldi 4, 4, 32
  03b6520  lhz 5, 166(4)
  03b6524  cmpwi 5, 170
  03b6528  bf 2, 0x3b6540
  03b652c  lbz 4, 32(4)
  03b6530  cmpwi 4, 254
  03b6534  cmpwi 1, 4, 253
  03b6538  bt 2, 0x3b6540
  03b653c  bf 6, 0x3b6630
  03b6540  lis 4, 151
  03b6544  addic 4, 4, -16064
  03b6548  lbz 5, 11(4)
  03b654c  cmpwi 5, 0
  03b6550  bf 2, 0x3b6560
  03b6554  lbz 4, 13(4)
  03b6558  cmpwi 4, 0
  03b655c  bt 2, 0x3b6630
  03b6560  lis 3, 161
  03b6564  lis 4, 0
  03b6568  addic 3, 3, 12
  03b656c  ori 5, 4, 65535
  03b6570  lhz 4, 888(3)
  03b6574  cmpw 4, 5
  03b6578  bf 0, 0x3b6584
  03b657c  addic 4, 4, 1
  03b6580  sth 4, 888(3)
  03b6584  lis 4, 161
  03b6588  lis 5, 114
  03b658c  lwz 4, -2344(4)
  03b6590  extsw 4, 4
  03b6594  std 4, 112(1)
  03b6598  lis 4, 59
  03b659c  addi 4, 4, 25720
  03b65a0  lfs 1, 0(4)
  03b65a4  lfs 2, -3056(5)
  03b65a8  lfd 3, 112(1)
  03b65ac  lis 4, 6990
  03b65b0  fcfid 3, 3
  03b65b4  ori 5, 4, 33205
  03b65b8  lhz 6, 890(3)
  03b65bc  frsp 3, 3
  03b65c0  fadds 1, 3, 1
  03b65c4  fmuls 1, 2, 1
  03b65c8  fctiwz 1, 1
  03b65cc  stfd 1, 112(1)
  03b65d0  lwz 4, 116(1)
  03b65d4  mulhw 5, 5, 4
  03b65d8  srawi 5, 5, 6
  03b65dc  srwi 7, 5, 31
  03b65e0  addc 5, 5, 7
  03b65e4  cmpw 5, 6
  03b65e8  bf 1, 0x3b6608
  03b65ec  lis 5, 6990
  03b65f0  ori 5, 5, 33205
  03b65f4  mulhw 4, 5, 4
  03b65f8  srawi 4, 4, 6
  03b65fc  srwi 5, 4, 31
  03b6600  addc 4, 4, 5
  03b6604  sth 4, 890(3)
  03b6608  lis 4, 151
  03b660c  lwz 7, 892(3)
  03b6610  li 5, 1
  03b6614  lis 6, -32768
  03b6618  lwz 4, -25488(4)
  03b661c  slw 4, 5, 4
  03b6620  or 4, 7, 4
  03b6624  or 4, 4, 6
  03b6628  stw 4, 892(3)
  03b662c  b 0x3b6674
  03b6630  addic 3, 3, 128
  03b6634  lwz 4, 0(31)
  03b6638  extsw 4, 4
  03b663c  bl 0x110b70
  03b6640  nop
  03b6644  cmpwi 3, 0
  03b6648  bt 2, 0x3b6674
  03b664c  lis 3, 161
  03b6650  addic 3, 3, 12
  03b6654  lwz 3, 892(3)
  03b6658  rlwinm 3, 3, 0, 0, 0
  03b665c  cmpwi 3, 0
  03b6660  bf 2, 0x3b6674
  03b6664  li 3, 13000
  03b6668  li 4, 111
  03b666c  bl 0x7b310
  03b6670  nop
  03b6674  lis 3, 151
  03b6678  lwz 4, 8(31)
  03b667c  addic 30, 3, -25376
  03b6680  extsw 4, 4
  03b6684  addic 3, 30, 128
  03b6688  bl 0x110b70
  03b668c  nop
  03b6690  cntlzw 3, 3
  03b6694  rlwinm 3, 3, 27, 31, 31
  03b6698  stb 3, 8907(30)
  03b669c  ld 0, 160(1)
  03b66a0  mtlr 0
  03b66a4  ld 30, 128(1)
  03b66a8  ld 31, 136(1)
  03b66ac  addi 1, 1, 144
  03b66b0  blr
