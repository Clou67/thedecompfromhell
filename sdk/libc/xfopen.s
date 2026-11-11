# sdk/libc/xfopen.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Fopen:   # 0x5d68b0, 0x70 bytes
  05d68b0  stdu 1, -112(1)
  05d68b4  mflr 0
  05d68b8  rlwinm 11, 4, 2, 28, 29
  05d68bc  lwz 10, -24096(2)
  05d68c0  std 0, 128(1)
  05d68c4  rlwinm 0, 4, 0, 29, 29
  05d68c8  rlwinm 9, 4, 0, 27, 27
  05d68cc  cmpwi 7, 0, 0
  05d68d0  rlwinm 4, 4, 0, 28, 28
  05d68d4  cmpwi 1, 9, 0
  05d68d8  cmpwi 6, 4, 0
  05d68dc  lwzx 4, 10, 11
  05d68e0  li 5, 438
  05d68e4  bt 30, 0x5d68ec
  05d68e8  ori 4, 4, 1024
  05d68ec  clrldi 3, 3, 32
  05d68f0  bt 26, 0x5d68f8
  05d68f4  ori 4, 4, 512
  05d68f8  bt 6, 0x5d6900
  05d68fc  ori 4, 4, 64
  05d6900  extsw 4, 4
  05d6904  bl 0x5cf5b8
  05d6908  nop
  05d690c  ld 0, 128(1)
  05d6910  extsh 3, 3
  05d6914  mtlr 0
  05d6918  addi 1, 1, 112
  05d691c  blr

FUN_005d6920:   # 0x5d6920, 0x6c bytes
  05d6920  stdu 1, -128(1)
  05d6924  mflr 0
  05d6928  std 31, 120(1)
  05d692c  mr 31, 3
  05d6930  std 0, 144(1)
  05d6934  li 0, 0
  05d6938  lwz 11, 12(31)
  05d693c  stb 0, 30(31)
  05d6940  lbz 9, 0(11)
  05d6944  addi 9, 9, -37
  05d6948  clrlwi 0, 9, 24
  05d694c  cmplwi 7, 0, 83
  05d6950  bt 29, 0x5d6b3c
  05d6954  lwz 11, -24092(2)
  05d6958  rlwinm 9, 9, 2, 22, 29
  05d695c  lwzx 0, 9, 11
  05d6960  extsw 0, 0
  05d6964  add 0, 0, 11
  05d6968  mtctr 0
  05d696c  bctr
  05d6970  <unknown>
  05d6974  <unknown>
  05d6978  <unknown>
  05d697c  <unknown>
  05d6980  <unknown>
  05d6984  <unknown>
  05d6988  <unknown>
