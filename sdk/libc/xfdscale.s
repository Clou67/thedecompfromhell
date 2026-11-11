# sdk/libc/xfdscale.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_FDscale:   # 0x5e659c, 0x1d8 bytes
  05e659c  stdu 1, -128(1)
  05e65a0  mflr 0
  05e65a4  std 30, 112(1)
  05e65a8  std 31, 120(1)
  05e65ac  std 0, 144(1)
  05e65b0  lhz 10, 0(3)
  05e65b4  mr 31, 3
  05e65b8  clrldi 9, 3, 32
  05e65bc  clrlwi 0, 10, 16
  05e65c0  mr 30, 4
  05e65c4  rldicl 3, 0, 57, 56
  05e65c8  cmpwi 7, 3, 255
  05e65cc  bt 30, 0x5e669c
  05e65d0  cmpwi 7, 3, 0
  05e65d4  bt 30, 0x5e6678
  05e65d8  cmpwi 7, 30, 254
  05e65dc  bf 29, 0x5e6618
  05e65e0  extsh 0, 10
  05e65e4  cmpwi 7, 0, 0
  05e65e8  bt 28, 0x5e66c8
  05e65ec  lwz 9, -23388(2)
  05e65f0  lfs 0, 0(9)
  05e65f4  li 10, 1
  05e65f8  stfs 0, 0(31)
  05e65fc  ld 0, 144(1)
  05e6600  extsw 3, 10
  05e6604  ld 30, 112(1)
  05e6608  ld 31, 120(1)
  05e660c  mtlr 0
  05e6610  addi 1, 1, 128
  05e6614  blr
  05e6618  add 3, 30, 3
  05e661c  cmpwi 7, 3, 254
  05e6620  bt 29, 0x5e65e0
  05e6624  cmpwi 7, 3, 0
  05e6628  bt 29, 0x5e66f0
  05e662c  addi 11, 3, -1
  05e6630  clrlwi 0, 10, 25
  05e6634  cmpwi 7, 11, -23
  05e6638  ori 9, 0, 128
  05e663c  rlwinm 8, 10, 0, 0, 16
  05e6640  sth 9, 0(31)
  05e6644  mr 10, 9
  05e6648  bf 28, 0x5e6710
  05e664c  li 0, 0
  05e6650  sth 8, 0(31)
  05e6654  sth 0, 2(31)
  05e6658  ld 0, 144(1)
  05e665c  li 10, 0
  05e6660  ld 30, 112(1)
  05e6664  extsw 3, 10
  05e6668  ld 31, 120(1)
  05e666c  mtlr 0
  05e6670  addi 1, 1, 128
  05e6674  blr
  05e6678  mr 3, 9
  05e667c  bl 0x5e687c
  05e6680  nop
  05e6684  li 10, 0
  05e6688  extsh 3, 3
  05e668c  cmpwi 7, 3, 0
  05e6690  bt 29, 0x5e65fc
  05e6694  lhz 10, 0(31)
  05e6698  b 0x5e65d8
  05e669c  clrlwi 0, 0, 25
  05e66a0  cmpwi 7, 0, 0
  05e66a4  bt 30, 0x5e66d8
  05e66a8  li 10, 2
  05e66ac  ld 0, 144(1)
  05e66b0  extsw 3, 10
  05e66b4  ld 30, 112(1)
  05e66b8  ld 31, 120(1)
  05e66bc  mtlr 0
  05e66c0  addi 1, 1, 128
  05e66c4  blr
  05e66c8  lwz 9, -23388(2)
  05e66cc  lfs 0, 0(9)
  05e66d0  fneg 0, 0
  05e66d4  b 0x5e65f4
  05e66d8  lhz 0, 2(31)
  05e66dc  li 10, 1
  05e66e0  cmpwi 7, 0, 0
  05e66e4  bt 30, 0x5e65fc
  05e66e8  li 10, 2
  05e66ec  b 0x5e66ac
  05e66f0  rlwinm 0, 10, 17, 8, 31
  05e66f4  extsh 9, 3
  05e66f8  rotlwi 0, 0, 15
  05e66fc  slwi 9, 9, 7
  05e6700  li 10, -1
  05e6704  or 0, 0, 9
  05e6708  sth 0, 0(31)
  05e670c  b 0x5e65fc
  05e6710  extsh 0, 11
  05e6714  cmpwi 7, 0, -16
  05e6718  bt 29, 0x5e672c
  05e671c  li 10, 0
  05e6720  addi 11, 3, 15
  05e6724  sth 9, 2(31)
  05e6728  sth 10, 0(31)
  05e672c  neg 0, 11
  05e6730  extsh 7, 0
  05e6734  cmpwi 7, 7, 0
  05e6738  bt 30, 0x5e6764
  05e673c  clrlwi 11, 10, 16
  05e6740  lhz 9, 2(31)
  05e6744  subfic 0, 7, 16
  05e6748  sraw 9, 9, 7
  05e674c  slw 0, 11, 0
  05e6750  sraw 11, 11, 7
  05e6754  or 9, 9, 0
  05e6758  mr 10, 11
  05e675c  sth 9, 2(31)
  05e6760  sth 11, 0(31)
  05e6764  or 0, 8, 10
  05e6768  li 10, -1
  05e676c  sth 0, 0(31)
  05e6770  b 0x5e65fc
