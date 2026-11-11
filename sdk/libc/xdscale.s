# sdk/libc/xdscale.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Dscale:   # 0x5d5d10, 0x24c bytes
  05d5d10  stdu 1, -128(1)
  05d5d14  mflr 0
  05d5d18  std 30, 112(1)
  05d5d1c  std 31, 120(1)
  05d5d20  std 0, 144(1)
  05d5d24  lhz 10, 0(3)
  05d5d28  mr 31, 3
  05d5d2c  clrldi 9, 3, 32
  05d5d30  clrlwi 0, 10, 16
  05d5d34  mr 30, 4
  05d5d38  rldicl 3, 0, 60, 53
  05d5d3c  cmpwi 7, 3, 2047
  05d5d40  bt 30, 0x5d5e1c
  05d5d44  cmpwi 7, 3, 0
  05d5d48  bt 30, 0x5d5df8
  05d5d4c  cmpwi 7, 30, 2046
  05d5d50  bf 29, 0x5d5d8c
  05d5d54  extsh 0, 10
  05d5d58  cmpwi 7, 0, 0
  05d5d5c  bt 28, 0x5d5e48
  05d5d60  lwz 9, -24124(2)
  05d5d64  lfd 0, 0(9)
  05d5d68  li 11, 1
  05d5d6c  stfd 0, 0(31)
  05d5d70  ld 0, 144(1)
  05d5d74  extsw 3, 11
  05d5d78  ld 30, 112(1)
  05d5d7c  ld 31, 120(1)
  05d5d80  mtlr 0
  05d5d84  addi 1, 1, 128
  05d5d88  blr
  05d5d8c  add 3, 30, 3
  05d5d90  cmpwi 7, 3, 2046
  05d5d94  bt 29, 0x5d5d54
  05d5d98  cmpwi 7, 3, 0
  05d5d9c  bt 29, 0x5d5e88
  05d5da0  addi 3, 3, -1
  05d5da4  clrlwi 0, 10, 28
  05d5da8  cmpwi 7, 3, -52
  05d5dac  rlwinm 7, 10, 0, 0, 16
  05d5db0  ori 0, 0, 16
  05d5db4  mr 4, 7
  05d5db8  sth 0, 0(31)
  05d5dbc  mr 10, 0
  05d5dc0  bf 28, 0x5d5ea8
  05d5dc4  li 8, 0
  05d5dc8  sth 7, 0(31)
  05d5dcc  sth 8, 6(31)
  05d5dd0  sth 8, 2(31)
  05d5dd4  sth 8, 4(31)
  05d5dd8  ld 0, 144(1)
  05d5ddc  li 11, 0
  05d5de0  ld 30, 112(1)
  05d5de4  extsw 3, 11
  05d5de8  ld 31, 120(1)
  05d5dec  mtlr 0
  05d5df0  addi 1, 1, 128
  05d5df4  blr
  05d5df8  mr 3, 9
  05d5dfc  bl 0x5dad7c
  05d5e00  nop
  05d5e04  li 11, 0
  05d5e08  extsh 3, 3
  05d5e0c  cmpwi 7, 3, 0
  05d5e10  bt 29, 0x5d5d70
  05d5e14  lhz 10, 0(31)
  05d5e18  b 0x5d5d4c
  05d5e1c  clrlwi 0, 0, 28
  05d5e20  cmpwi 7, 0, 0
  05d5e24  bt 30, 0x5d5e58
  05d5e28  li 11, 2
  05d5e2c  ld 0, 144(1)
  05d5e30  extsw 3, 11
  05d5e34  ld 30, 112(1)
  05d5e38  ld 31, 120(1)
  05d5e3c  mtlr 0
  05d5e40  addi 1, 1, 128
  05d5e44  blr
  05d5e48  lwz 9, -24124(2)
  05d5e4c  lfd 0, 0(9)
  05d5e50  fneg 0, 0
  05d5e54  b 0x5d5d68
  05d5e58  lhz 0, 2(31)
  05d5e5c  cmpwi 7, 0, 0
  05d5e60  bf 30, 0x5d5e28
  05d5e64  lhz 0, 4(31)
  05d5e68  cmpwi 7, 0, 0
  05d5e6c  bf 30, 0x5d5e28
  05d5e70  lhz 0, 6(31)
  05d5e74  li 11, 1
  05d5e78  cmpwi 7, 0, 0
  05d5e7c  bt 30, 0x5d5d70
  05d5e80  li 11, 2
  05d5e84  b 0x5d5e2c
  05d5e88  rlwinm 0, 10, 17, 11, 31
  05d5e8c  extsh 9, 3
  05d5e90  rotlwi 0, 0, 15
  05d5e94  slwi 9, 9, 4
  05d5e98  li 11, -1
  05d5e9c  or 0, 0, 9
  05d5ea0  sth 0, 0(31)
  05d5ea4  b 0x5d5d70
  05d5ea8  extsh 0, 3
  05d5eac  cmpwi 7, 0, -16
  05d5eb0  bt 29, 0x5d5eec
  05d5eb4  lhz 8, 2(31)
  05d5eb8  lhz 11, 4(31)
  05d5ebc  addi 3, 3, 16
  05d5ec0  mr 9, 11
  05d5ec4  extsh 0, 3
  05d5ec8  mr 11, 8
  05d5ecc  cmpwi 7, 0, -16
  05d5ed0  mr 8, 10
  05d5ed4  li 10, 0
  05d5ed8  sth 8, 2(31)
  05d5edc  sth 10, 0(31)
  05d5ee0  bf 29, 0x5d5ebc
  05d5ee4  sth 11, 4(31)
  05d5ee8  sth 9, 6(31)
  05d5eec  neg 0, 3
  05d5ef0  extsh 3, 0
  05d5ef4  cmpwi 7, 3, 0
  05d5ef8  bt 30, 0x5d5f4c
  05d5efc  clrlwi 7, 10, 16
  05d5f00  lhz 0, 4(31)
  05d5f04  subfic 10, 3, 16
  05d5f08  lhz 9, 2(31)
  05d5f0c  lhz 11, 6(31)
  05d5f10  sraw 6, 0, 3
  05d5f14  slw 5, 7, 10
  05d5f18  sraw 8, 9, 3
  05d5f1c  slw 0, 0, 10
  05d5f20  slw 9, 9, 10
  05d5f24  sraw 11, 11, 3
  05d5f28  sraw 7, 7, 3
  05d5f2c  or 11, 11, 0
  05d5f30  or 6, 6, 9
  05d5f34  or 8, 8, 5
  05d5f38  mr 10, 7
  05d5f3c  sth 11, 6(31)
  05d5f40  sth 6, 4(31)
  05d5f44  sth 8, 2(31)
  05d5f48  sth 7, 0(31)
  05d5f4c  or 0, 4, 10
  05d5f50  li 11, -1
  05d5f54  sth 0, 0(31)
  05d5f58  b 0x5d5d70
