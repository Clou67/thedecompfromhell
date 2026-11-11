# sdk/libc/sscanf.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

scin:   # 0x5c8440, 0x40 bytes
  05c8440  cmpwi 7, 5, 0
  05c8444  lwz 9, 0(3)
  05c8448  bf 30, 0x5c845c
  05c844c  addi 0, 9, -1
  05c8450  stw 0, 0(3)
  05c8454  extsw 3, 4
  05c8458  blr
  05c845c  clrldi 11, 9, 32
  05c8460  li 4, -1
  05c8464  addi 9, 9, 1
  05c8468  lbz 0, 0(11)
  05c846c  cmpwi 7, 0, 0
  05c8470  bt 30, 0x5c8454
  05c8474  stw 9, 0(3)
  05c8478  lbz 4, 0(11)
  05c847c  b 0x5c8454

sscanf:   # 0x5c8480, 0x64 bytes
  05c8480  stdu 1, -128(1)
  05c8484  mflr 0
  05c8488  addi 11, 1, 192
  05c848c  std 0, 144(1)
  05c8490  mr 0, 4
  05c8494  addi 4, 1, 176
  05c8498  std 5, 192(1)
  05c849c  std 6, 200(1)
  05c84a0  stw 3, 176(1)
  05c84a4  mr 5, 0
  05c84a8  lwz 3, -24748(2)
  05c84ac  rlwinm 4, 4, 0, 0, 27
  05c84b0  mr 6, 11
  05c84b4  std 7, 208(1)
  05c84b8  std 8, 216(1)
  05c84bc  std 9, 224(1)
  05c84c0  std 10, 232(1)
  05c84c4  stw 11, 112(1)
  05c84c8  bl 0x5c9b38
  05c84cc  nop
  05c84d0  ld 0, 144(1)
  05c84d4  extsw 3, 3
  05c84d8  mtlr 0
  05c84dc  addi 1, 1, 128
  05c84e0  blr
