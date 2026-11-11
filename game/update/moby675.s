# game/update/moby675.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_675:   # 0x40f5f8, 0x214 bytes
  040f5f8  stdu 1, -144(1)
  040f5fc  mflr 0
  040f600  std 0, 160(1)
  040f604  std 31, 136(1)
  040f608  ori 31, 3, 0
  040f60c  lbz 3, 83(31)
  040f610  cmpwi 3, 7
  040f614  cmpwi 1, 3, 3
  040f618  cmpwi 6, 3, 2
  040f61c  cmpwi 7, 3, 0
  040f620  bt 2, 0x40f79c
  040f624  bt 6, 0x40f714
  040f628  bt 26, 0x40f6b4
  040f62c  bf 30, 0x40f7f8
  040f630  lbz 3, 112(31)
  040f634  rlwinm 3, 3, 0, 30, 30
  040f638  cmpwi 3, 0
  040f63c  bt 2, 0x40f7f8
  040f640  bt 26, 0x40f680
  040f644  lis 3, 65
  040f648  lis 4, 114
  040f64c  addi 3, 3, -2584
  040f650  li 5, 0
  040f654  lfs 1, 0(3)
  040f658  lfs 2, -3056(4)
  040f65c  ori 3, 31, 0
  040f660  fmuls 1, 2, 1
  040f664  li 4, 2
  040f668  fctiwz 1, 1
  040f66c  stfd 1, 112(1)
  040f670  lwz 6, 116(1)
  040f674  extsw 6, 6
  040f678  bl 0xfddc0
  040f67c  nop
  040f680  lis 3, 65
  040f684  addi 3, 3, -2584
  040f688  lfs 1, 4(3)
  040f68c  lfs 2, 8(3)
  040f690  bl 0xfcbe8
  040f694  nop
  040f698  lis 3, 114
  040f69c  lfs 2, -3056(3)
  040f6a0  fmuls 1, 1, 2
  040f6a4  bl 0x502758
  040f6a8  nop
  040f6ac  stb 3, 188(31)
  040f6b0  b 0x40f7f8
  040f6b4  addic 3, 31, 188
  040f6b8  bl 0x500060
  040f6bc  nop
  040f6c0  cmpwi 3, 0
  040f6c4  bt 2, 0x40f7f8
  040f6c8  lbz 3, 83(31)
  040f6cc  cmpwi 3, 3
  040f6d0  bt 2, 0x40f7f8
  040f6d4  lis 3, 65
  040f6d8  lis 4, 114
  040f6dc  addi 3, 3, -2584
  040f6e0  li 5, 0
  040f6e4  lfs 1, 0(3)
  040f6e8  lfs 2, -3056(4)
  040f6ec  ori 3, 31, 0
  040f6f0  fmuls 1, 2, 1
  040f6f4  li 4, 3
  040f6f8  fctiwz 1, 1
  040f6fc  stfd 1, 112(1)
  040f700  lwz 6, 116(1)
  040f704  extsw 6, 6
  040f708  bl 0xfddc0
  040f70c  nop
  040f710  b 0x40f7f8
  040f714  lbz 4, 112(31)
  040f718  rlwinm 4, 4, 0, 30, 30
  040f71c  cmpwi 4, 0
  040f720  bt 2, 0x40f7f8
  040f724  cmpwi 3, 7
  040f728  bt 2, 0x40f768
  040f72c  lis 3, 65
  040f730  lis 4, 114
  040f734  addi 3, 3, -2584
  040f738  li 5, 0
  040f73c  lfs 1, 0(3)
  040f740  lfs 2, -3056(4)
  040f744  ori 3, 31, 0
  040f748  fmuls 1, 2, 1
  040f74c  li 4, 7
  040f750  fctiwz 1, 1
  040f754  stfd 1, 112(1)
  040f758  lwz 6, 116(1)
  040f75c  extsw 6, 6
  040f760  bl 0xfddc0
  040f764  nop
  040f768  lis 3, 65
  040f76c  addi 3, 3, -2584
  040f770  lfs 1, 4(3)
  040f774  lfs 2, 8(3)
  040f778  bl 0xfcbe8
  040f77c  nop
  040f780  lis 3, 114
  040f784  lfs 2, -3056(3)
  040f788  fmuls 1, 1, 2
  040f78c  bl 0x502758
  040f790  nop
  040f794  stb 3, 188(31)
  040f798  b 0x40f7f8
  040f79c  addic 3, 31, 188
  040f7a0  bl 0x500060
  040f7a4  nop
  040f7a8  cmpwi 3, 0
  040f7ac  bt 2, 0x40f7f8
  040f7b0  lbz 3, 83(31)
  040f7b4  cmpwi 3, 0
  040f7b8  bt 2, 0x40f7f8
  040f7bc  lis 3, 65
  040f7c0  lis 4, 114
  040f7c4  addi 3, 3, -2584
  040f7c8  li 5, 0
  040f7cc  lfs 1, 0(3)
  040f7d0  lfs 2, -3056(4)
  040f7d4  ori 3, 31, 0
  040f7d8  fmuls 1, 2, 1
  040f7dc  li 4, 0
  040f7e0  fctiwz 1, 1
  040f7e4  stfd 1, 112(1)
  040f7e8  lwz 6, 116(1)
  040f7ec  extsw 6, 6
  040f7f0  bl 0xfddc0
  040f7f4  nop
  040f7f8  ld 0, 160(1)
  040f7fc  mtlr 0
  040f800  ld 31, 136(1)
  040f804  addi 1, 1, 144
  040f808  blr
