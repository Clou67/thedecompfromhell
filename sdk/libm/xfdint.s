# sdk/libm/xfdint.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_FDint:   # 0x5dd378, 0x114 bytes
  05dd378  lhz 11, 0(3)
  05dd37c  clrlwi 0, 11, 16
  05dd380  rldicl 9, 0, 57, 56
  05dd384  cmpwi 7, 9, 255
  05dd388  bf 30, 0x5dd3bc
  05dd38c  clrlwi 0, 0, 25
  05dd390  cmpwi 7, 0, 0
  05dd394  bf 30, 0x5dd3b0
  05dd398  lhz 0, 2(3)
  05dd39c  li 11, 1
  05dd3a0  cmpwi 7, 0, 0
  05dd3a4  bf 30, 0x5dd3b0
  05dd3a8  extsw 3, 11
  05dd3ac  blr
  05dd3b0  li 11, 2
  05dd3b4  extsw 3, 11
  05dd3b8  blr
  05dd3bc  rlwinm 0, 0, 16, 1, 31
  05dd3c0  rotlwi 0, 0, 16
  05dd3c4  cmpwi 7, 0, 0
  05dd3c8  bt 30, 0x5dd460
  05dd3cc  neg 9, 9
  05dd3d0  sub 9, 9, 4
  05dd3d4  addi 9, 9, 150
  05dd3d8  extsh 0, 9
  05dd3dc  cmpwi 7, 0, 0
  05dd3e0  bf 29, 0x5dd458
  05dd3e4  cmpwi 7, 0, 23
  05dd3e8  bt 29, 0x5dd474
  05dd3ec  srawi 0, 0, 4
  05dd3f0  lwz 10, -23776(2)
  05dd3f4  rlwinm 8, 9, 1, 27, 30
  05dd3f8  slwi 11, 0, 2
  05dd3fc  cmpwi 7, 0, 0
  05dd400  extsw 11, 11
  05dd404  add 11, 11, 10
  05dd408  lhzx 7, 10, 8
  05dd40c  lwz 9, 32(11)
  05dd410  slwi 9, 9, 1
  05dd414  add 9, 3, 9
  05dd418  clrldi 9, 9, 32
  05dd41c  lhz 0, 0(9)
  05dd420  and 7, 7, 0
  05dd424  xor 0, 7, 0
  05dd428  mr 10, 7
  05dd42c  sth 0, 0(9)
  05dd430  bf 29, 0x5dd448
  05dd434  mr 9, 3
  05dd438  li 11, 0
  05dd43c  lhzu 0, 2(9)
  05dd440  or 10, 7, 0
  05dd444  sth 11, 0(9)
  05dd448  clrlwi 0, 10, 16
  05dd44c  li 11, -1
  05dd450  cmpwi 7, 0, 0
  05dd454  bf 30, 0x5dd3a8
  05dd458  li 11, 0
  05dd45c  b 0x5dd3a8
  05dd460  lhz 0, 2(3)
  05dd464  cmpwi 7, 0, 0
  05dd468  bf 30, 0x5dd3cc
  05dd46c  li 11, 0
  05dd470  b 0x5dd3a8
  05dd474  rlwinm 9, 11, 0, 0, 16
  05dd478  li 0, 0
  05dd47c  li 11, -1
  05dd480  sth 0, 2(3)
  05dd484  sth 9, 0(3)
  05dd488  b 0x5dd3a8
