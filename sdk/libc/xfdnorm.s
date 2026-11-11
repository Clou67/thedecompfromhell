# sdk/libc/xfdnorm.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_FDnorm:   # 0x5e687c, 0x104 bytes
  05e687c  mr 10, 3
  05e6880  li 3, 1
  05e6884  mr 7, 10
  05e6888  lhz 11, 0(10)
  05e688c  clrlwi 0, 11, 25
  05e6890  mr 6, 11
  05e6894  clrlwi 9, 0, 16
  05e6898  mr 11, 0
  05e689c  cmpwi 7, 9, 0
  05e68a0  sth 0, 0(10)
  05e68a4  bf 30, 0x5e68cc
  05e68a8  mr 8, 10
  05e68ac  li 3, 1
  05e68b0  lhzu 0, 2(8)
  05e68b4  cmpwi 7, 0, 0
  05e68b8  bt 30, 0x5e696c
  05e68bc  sth 0, 0(10)
  05e68c0  sth 9, 0(8)
  05e68c4  li 3, -15
  05e68c8  lhz 11, 0(10)
  05e68cc  clrlwi 0, 11, 16
  05e68d0  cmplwi 7, 0, 127
  05e68d4  bt 29, 0x5e6914
  05e68d8  mr 8, 7
  05e68dc  lhzu 9, 2(8)
  05e68e0  rldicl 9, 9, 49, 63
  05e68e4  slwi 0, 0, 1
  05e68e8  addi 3, 3, -1
  05e68ec  or 0, 0, 9
  05e68f0  sth 0, 0(10)
  05e68f4  lhz 9, 0(8)
  05e68f8  slwi 0, 9, 1
  05e68fc  sth 0, 0(8)
  05e6900  lhz 11, 0(10)
  05e6904  mr 9, 0
  05e6908  clrlwi 0, 11, 16
  05e690c  cmplwi 7, 0, 127
  05e6910  bf 29, 0x5e68e0
  05e6914  mr 0, 11
  05e6918  clrlwi 11, 11, 16
  05e691c  cmplwi 7, 11, 255
  05e6920  bf 29, 0x5e695c
  05e6924  addi 8, 7, 2
  05e6928  lhz 0, 0(8)
  05e692c  slwi 9, 11, 15
  05e6930  addi 3, 3, 1
  05e6934  srwi 0, 0, 1
  05e6938  or 0, 0, 9
  05e693c  sth 0, 0(8)
  05e6940  lhz 9, 0(10)
  05e6944  srwi 9, 9, 1
  05e6948  cmplwi 7, 9, 255
  05e694c  mr 11, 9
  05e6950  sth 9, 0(10)
  05e6954  mr 0, 9
  05e6958  bt 29, 0x5e6928
  05e695c  clrlwi 0, 0, 25
  05e6960  extsh 3, 3
  05e6964  mr 11, 0
  05e6968  sth 0, 0(10)
  05e696c  rlwinm 0, 6, 0, 0, 16
  05e6970  extsw 3, 3
  05e6974  or 0, 0, 11
  05e6978  sth 0, 0(10)
  05e697c  blr

FUN_005e6980:   # 0x5e6980, 0x3c bytes
  05e6980  lwz 9, -23384(2)
  05e6984  mflr 0
  05e6988  stdu 1, -112(1)
  05e698c  std 0, 128(1)
  05e6990  lwz 9, 0(9)
  05e6994  cmpwi 7, 9, 0
  05e6998  bt 30, 0x5e69b8
  05e699c  clrldi 9, 9, 32
  05e69a0  lwz 0, 0(9)
  05e69a4  std 2, 40(1)
  05e69a8  mtctr 0
  05e69ac  lwz 2, 4(9)
  05e69b0  bctrl
  05e69b4  ld 2, 40(1)
  05e69b8  bl 0x5c4840

FUN_005e69c0:   # 0x5e69c0, 0x3c bytes
  05e69c0  lwz 9, -23380(2)
  05e69c4  mflr 0
  05e69c8  stdu 1, -112(1)
  05e69cc  std 0, 128(1)
  05e69d0  lwz 9, 0(9)
  05e69d4  cmpwi 7, 9, 0
  05e69d8  bt 30, 0x5e69f8
  05e69dc  clrldi 9, 9, 32
  05e69e0  lwz 0, 0(9)
  05e69e4  std 2, 40(1)
  05e69e8  mtctr 0
  05e69ec  lwz 2, 4(9)
  05e69f0  bctrl
  05e69f4  ld 2, 40(1)
  05e69f8  bl 0x5e6980

FUN_005e69fc:   # 0x5e69fc, 0x10 bytes
  05e69fc  stdu 1, -112(1)
  05e6a00  mflr 0
  05e6a04  std 0, 128(1)
  05e6a08  bl 0x5c4840
