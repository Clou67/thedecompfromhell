# game/update/moby1855.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1855:   # 0x2c9594, 0xe8 bytes
  02c9594  stdu 1, -128(1)
  02c9598  mflr 0
  02c959c  std 0, 144(1)
  02c95a0  std 31, 120(1)
  02c95a4  ori 31, 3, 0
  02c95a8  lis 4, 1
  02c95ac  li 5, 0
  02c95b0  bl 0x10675c
  02c95b4  nop
  02c95b8  ori 4, 3, 0
  02c95bc  lbz 3, 32(31)
  02c95c0  cmpwi 3, 0
  02c95c4  bt 1, 0x2c95d4
  02c95c8  cmpwi 3, -1
  02c95cc  bf 1, 0x2c9668
  02c95d0  b 0x2c95e8
  02c95d4  cmpwi 3, 1
  02c95d8  bf 1, 0x2c95f4
  02c95dc  cmpwi 3, 2
  02c95e0  bf 1, 0x2c9614
  02c95e4  b 0x2c9668
  02c95e8  li 3, 1
  02c95ec  stb 3, 32(31)
  02c95f0  b 0x2c9668
  02c95f4  cmpwi 4, 0
  02c95f8  bt 2, 0x2c9668
  02c95fc  lwz 3, 44(4)
  02c9600  cmpwi 3, 0
  02c9604  bf 1, 0x2c9668
  02c9608  li 3, 2
  02c960c  stb 3, 32(31)
  02c9610  b 0x2c9668
  02c9614  li 3, 0
  02c9618  li 4, 0
  02c961c  ori 5, 31, 0
  02c9620  bl 0x15d12c
  02c9624  nop
  02c9628  ori 3, 31, 0
  02c962c  bl 0x11a100
  02c9630  nop
  02c9634  ori 3, 31, 0
  02c9638  li 9, 2
  02c963c  li 4, 1858
  02c9640  li 5, 1
  02c9644  li 6, 1858
  02c9648  li 7, 1
  02c964c  li 8, 11
  02c9650  bl 0x11aa78
  02c9654  nop
  02c9658  ori 3, 31, 0
  02c965c  bl 0xefb38
  02c9660  nop
  02c9664  b 0x2c9668
  02c9668  ld 0, 144(1)
  02c966c  mtlr 0
  02c9670  ld 31, 120(1)
  02c9674  addi 1, 1, 128
  02c9678  blr
