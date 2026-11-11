# game/update/moby1434.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1434:   # 0x27c5f8, 0x158 bytes
  027c5f8  stdu 1, -144(1)
  027c5fc  mflr 0
  027c600  std 0, 160(1)
  027c604  stfd 31, 136(1)
  027c608  std 31, 128(1)
  027c60c  ori 31, 3, 0
  027c610  lbz 3, 32(3)
  027c614  cmpwi 3, 0
  027c618  cmpwi 1, 3, 2
  027c61c  cmpwi 6, 3, 1
  027c620  std 30, 120(1)
  027c624  cmpwi 7, 3, -1
  027c628  bt 1, 0x27c634
  027c62c  bf 29, 0x27c734
  027c630  b 0x27c640
  027c634  bf 25, 0x27c648
  027c638  bf 5, 0x27c6b8
  027c63c  b 0x27c734
  027c640  li 3, 1
  027c644  stb 3, 32(31)
  027c648  lis 3, 161
  027c64c  lwz 3, 1800(3)
  027c650  cmpwi 3, 2
  027c654  bf 2, 0x27c66c
  027c658  lis 3, 150
  027c65c  addic 3, 3, -12976
  027c660  lwz 3, 48(3)
  027c664  cmpwi 3, 3
  027c668  bt 2, 0x27c698
  027c66c  lis 3, 161
  027c670  lwz 3, 1808(3)
  027c674  cmpwi 3, 5
  027c678  bf 0, 0x27c734
  027c67c  lis 3, 251
  027c680  lwz 3, -13192(3)
  027c684  cmpwi 3, 0
  027c688  bt 2, 0x27c734
  027c68c  lwz 3, 64(31)
  027c690  cmpwi 3, 0
  027c694  bf 2, 0x27c734
  027c698  li 3, 0
  027c69c  lhz 5, 52(31)
  027c6a0  li 4, 2
  027c6a4  stb 3, 49(31)
  027c6a8  ori 3, 5, 1
  027c6ac  stb 4, 32(31)
  027c6b0  sth 3, 52(31)
  027c6b4  b 0x27c734
  027c6b8  lis 3, 251
  027c6bc  lwz 3, -13192(3)
  027c6c0  cmpwi 3, 0
  027c6c4  bt 2, 0x27c70c
  027c6c8  lwz 3, 64(31)
  027c6cc  lfs 1, 64(31)
  027c6d0  cmpwi 3, 0
  027c6d4  bf 2, 0x27c70c
  027c6d8  lis 3, 40
  027c6dc  lfs 3, 24(31)
  027c6e0  addi 30, 3, -14872
  027c6e4  lfs 4, 0(30)
  027c6e8  lfs 2, 4(30)
  027c6ec  fsubs 31, 4, 3
  027c6f0  bl 0x502578
  027c6f4  nop
  027c6f8  stfs 1, 64(31)
  027c6fc  lfs 1, 8(30)
  027c700  lfs 2, 24(31)
  027c704  fmadds 1, 31, 1, 2
  027c708  stfs 1, 24(31)
  027c70c  lis 3, 161
  027c710  lwz 3, 1800(3)
  027c714  cmpwi 3, 2
  027c718  bt 2, 0x27c734
  027c71c  li 3, 1
  027c720  lhz 4, 52(31)
  027c724  rlwinm 4, 4, 0, 0, 30
  027c728  stb 3, 49(31)
  027c72c  stb 3, 32(31)
  027c730  sth 4, 52(31)
  027c734  ld 0, 160(1)
  027c738  mtlr 0
  027c73c  lfd 31, 136(1)
  027c740  ld 30, 120(1)
  027c744  ld 31, 128(1)
  027c748  addi 1, 1, 144
  027c74c  blr
