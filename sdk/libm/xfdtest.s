# sdk/libm/xfdtest.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_FDtest:   # 0x5dd48c, 0x6c bytes
  05dd48c  lhz 9, 0(3)
  05dd490  rlwinm 0, 9, 16, 1, 31
  05dd494  clrlwi 11, 9, 25
  05dd498  rlwinm 9, 9, 0, 17, 24
  05dd49c  rotlwi 0, 0, 16
  05dd4a0  cmpwi 7, 9, 32640
  05dd4a4  cmpwi 1, 11, 0
  05dd4a8  cmpwi 6, 0, 0
  05dd4ac  bt 30, 0x5dd4d0
  05dd4b0  bf 26, 0x5dd4c4
  05dd4b4  lhz 0, 2(3)
  05dd4b8  li 3, 0
  05dd4bc  cmpwi 7, 0, 0
  05dd4c0  bt 30, 0x5dd4c8
  05dd4c4  li 3, -1
  05dd4c8  extsw 3, 3
  05dd4cc  blr
  05dd4d0  bt 6, 0x5dd4e0
  05dd4d4  li 3, 2
  05dd4d8  extsw 3, 3
  05dd4dc  blr
  05dd4e0  lhz 0, 2(3)
  05dd4e4  li 3, 1
  05dd4e8  cmpwi 7, 0, 0
  05dd4ec  bt 30, 0x5dd4c8
  05dd4f0  li 3, 2
  05dd4f4  b 0x5dd4d8
