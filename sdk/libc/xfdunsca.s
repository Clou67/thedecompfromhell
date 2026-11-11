# sdk/libc/xfdunsca.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_FDunscale:   # 0x5e6774, 0x108 bytes
  05e6774  lhz 11, 0(4)
  05e6778  mflr 0
  05e677c  stdu 1, -128(1)
  05e6780  std 30, 112(1)
  05e6784  mr 30, 3
  05e6788  rlwinm 3, 11, 25, 24, 31
  05e678c  std 0, 144(1)
  05e6790  extsh 0, 3
  05e6794  std 31, 120(1)
  05e6798  cmpwi 7, 0, 255
  05e679c  mr 31, 4
  05e67a0  clrldi 9, 4, 32
  05e67a4  bt 30, 0x5e682c
  05e67a8  cmpwi 7, 0, 0
  05e67ac  bt 29, 0x5e67f4
  05e67b0  mr 3, 9
  05e67b4  bl 0x5e687c
  05e67b8  nop
  05e67bc  extsh 0, 3
  05e67c0  cmpwi 7, 0, 0
  05e67c4  bf 29, 0x5e67f0
  05e67c8  li 0, 0
  05e67cc  li 3, 0
  05e67d0  sth 0, 0(30)
  05e67d4  ld 0, 144(1)
  05e67d8  extsw 3, 3
  05e67dc  ld 30, 112(1)
  05e67e0  ld 31, 120(1)
  05e67e4  mtlr 0
  05e67e8  addi 1, 1, 128
  05e67ec  blr
  05e67f0  lhz 11, 0(31)
  05e67f4  rlwinm 0, 11, 17, 8, 31
  05e67f8  addi 9, 3, -126
  05e67fc  rotlwi 0, 0, 15
  05e6800  li 3, -1
  05e6804  ori 0, 0, 16128
  05e6808  extsw 3, 3
  05e680c  sth 0, 0(31)
  05e6810  ld 0, 144(1)
  05e6814  sth 9, 0(30)
  05e6818  ld 31, 120(1)
  05e681c  mtlr 0
  05e6820  ld 30, 112(1)
  05e6824  addi 1, 1, 128
  05e6828  blr
  05e682c  li 0, 0
  05e6830  sth 0, 0(30)
  05e6834  lhz 9, 0(4)
  05e6838  clrlwi 9, 9, 25
  05e683c  cmpwi 7, 9, 0
  05e6840  bt 30, 0x5e6864
  05e6844  li 3, 2
  05e6848  ld 0, 144(1)
  05e684c  extsw 3, 3
  05e6850  ld 30, 112(1)
  05e6854  ld 31, 120(1)
  05e6858  mtlr 0
  05e685c  addi 1, 1, 128
  05e6860  blr
  05e6864  lhz 0, 2(4)
  05e6868  li 3, 1
  05e686c  cmpwi 7, 0, 0
  05e6870  bt 30, 0x5e67d4
  05e6874  li 3, 2
  05e6878  b 0x5e6848
