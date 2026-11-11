# game/update/moby817.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M817_0046f590:   # 0x46f590, 0x14 bytes
  046f590  lis 3, 135
  046f594  lis 4, 1
  046f598  addic 3, 3, 30700
  046f59c  stw 4, 72(3)
  046f5a0  blr

UpdateMoby_817:   # 0x46f5b0, 0x190 bytes
  046f5b0  stdu 1, -176(1)
  046f5b4  mflr 0
  046f5b8  std 0, 192(1)
  046f5bc  stfd 31, 168(1)
  046f5c0  std 31, 160(1)
  046f5c4  ori 31, 3, 0
  046f5c8  lis 4, 1
  046f5cc  std 30, 152(1)
  046f5d0  std 29, 144(1)
  046f5d4  std 28, 136(1)
  046f5d8  li 5, 0
  046f5dc  bl 0x10675c
  046f5e0  nop
  046f5e4  ori 4, 3, 0
  046f5e8  lbz 3, 32(31)
  046f5ec  cmpwi 3, 0
  046f5f0  bt 1, 0x46f600
  046f5f4  cmpwi 3, -1
  046f5f8  bf 1, 0x46f71c
  046f5fc  b 0x46f614
  046f600  cmpwi 3, 1
  046f604  bf 1, 0x46f620
  046f608  cmpwi 3, 2
  046f60c  bf 1, 0x46f640
  046f610  b 0x46f71c
  046f614  li 3, 1
  046f618  stb 3, 32(31)
  046f61c  b 0x46f71c
  046f620  cmpwi 4, 0
  046f624  bt 2, 0x46f71c
  046f628  lwz 3, 44(4)
  046f62c  cmpwi 3, 0
  046f630  bf 1, 0x46f71c
  046f634  li 3, 2
  046f638  stb 3, 32(31)
  046f63c  b 0x46f71c
  046f640  li 3, 0
  046f644  li 4, 0
  046f648  ori 5, 31, 0
  046f64c  bl 0x15d12c
  046f650  nop
  046f654  ori 3, 31, 0
  046f658  bl 0x11a100
  046f65c  nop
  046f660  lis 3, 71
  046f664  lis 4, 161
  046f668  addi 5, 3, -2648
  046f66c  addic 28, 4, 23856
  046f670  addic 30, 31, 16
  046f674  addic 29, 31, 64
  046f678  ori 3, 31, 0
  046f67c  lfs 31, 0(5)
  046f680  std 28, 112(1)
  046f684  li 4, 1831
  046f688  std 28, 120(1)
  046f68c  ori 5, 30, 0
  046f690  ori 6, 29, 0
  046f694  fmr 1, 31
  046f698  li 7, 0
  046f69c  li 8, 0
  046f6a0  ori 10, 28, 0
  046f6a4  bl 0x11a560
  046f6a8  nop
  046f6ac  std 28, 112(1)
  046f6b0  ori 3, 31, 0
  046f6b4  std 28, 120(1)
  046f6b8  ori 10, 28, 0
  046f6bc  fmr 1, 31
  046f6c0  li 4, 1832
  046f6c4  ori 5, 30, 0
  046f6c8  ori 6, 29, 0
  046f6cc  li 7, 0
  046f6d0  li 8, 0
  046f6d4  bl 0x11a560
  046f6d8  nop
  046f6dc  ori 3, 31, 0
  046f6e0  std 28, 112(1)
  046f6e4  ori 10, 28, 0
  046f6e8  li 4, 1833
  046f6ec  fmr 1, 31
  046f6f0  ori 5, 30, 0
  046f6f4  std 28, 120(1)
  046f6f8  ori 6, 29, 0
  046f6fc  li 7, 0
  046f700  li 8, 0
  046f704  bl 0x11a560
  046f708  nop
  046f70c  ori 3, 31, 0
  046f710  bl 0xefb38
  046f714  nop
  046f718  b 0x46f71c
  046f71c  ld 0, 192(1)
  046f720  mtlr 0
  046f724  lfd 31, 168(1)
  046f728  ld 28, 136(1)
  046f72c  ld 29, 144(1)
  046f730  ld 30, 152(1)
  046f734  ld 31, 160(1)
  046f738  addi 1, 1, 176
  046f73c  blr
