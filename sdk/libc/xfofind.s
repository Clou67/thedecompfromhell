# sdk/libc/xfofind.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Fofind:   # 0x5c8dcc, 0x98 bytes
  05c8dcc  li 3, 104
  05c8dd0  mflr 0
  05c8dd4  stdu 1, -112(1)
  05c8dd8  std 0, 128(1)
  05c8ddc  bl 0x5d5838
  05c8de0  nop
  05c8de4  cmpwi 7, 3, 0
  05c8de8  clrldi 11, 3, 32
  05c8dec  bt- 30, 0x5c8e48
  05c8df0  lwz 10, -24728(2)
  05c8df4  li 0, 0
  05c8df8  stw 0, 60(11)
  05c8dfc  lwz 0, 0(10)
  05c8e00  cmpwi 7, 0, 0
  05c8e04  clrldi 9, 0, 32
  05c8e08  bt 30, 0x5c8e3c
  05c8e0c  stw 0, 60(11)
  05c8e10  stw 3, 0(10)
  05c8e14  lbz 9, 2(9)
  05c8e18  addi 9, 9, 1
  05c8e1c  stb 9, 2(11)
  05c8e20  li 0, 128
  05c8e24  sth 0, 0(11)
  05c8e28  ld 0, 128(1)
  05c8e2c  mr 3, 11
  05c8e30  addi 1, 1, 112
  05c8e34  mtlr 0
  05c8e38  blr
  05c8e3c  stw 3, 0(10)
  05c8e40  stb 0, 2(11)
  05c8e44  b 0x5c8e20
  05c8e48  bl 0x5d5904
  05c8e4c  nop
  05c8e50  lis 0, -32767
  05c8e54  li 11, 0
  05c8e58  ori 0, 0, 4
  05c8e5c  stw 0, 0(3)
  05c8e60  b 0x5c8e28
