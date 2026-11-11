# sdk/libc/fopen.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

fopen:   # 0x5c52f0, 0x74 bytes
  05c52f0  stdu 1, -144(1)
  05c52f4  mflr 0
  05c52f8  std 28, 112(1)
  05c52fc  mr 28, 3
  05c5300  li 3, 2
  05c5304  std 0, 160(1)
  05c5308  std 29, 120(1)
  05c530c  mr 29, 4
  05c5310  bl 0x5cbbec
  05c5314  nop
  05c5318  bl 0x5c8dcc
  05c531c  nop
  05c5320  clrldi 5, 3, 32
  05c5324  clrldi 4, 29, 32
  05c5328  clrldi 3, 28, 32
  05c532c  li 6, -1
  05c5330  bl 0x5c8f4c
  05c5334  nop
  05c5338  mr 29, 3
  05c533c  li 3, 2
  05c5340  bl 0x5cbb70
  05c5344  nop
  05c5348  ld 0, 160(1)
  05c534c  ld 28, 112(1)
  05c5350  clrldi 3, 29, 32
  05c5354  mtlr 0
  05c5358  ld 29, 120(1)
  05c535c  addi 1, 1, 144
  05c5360  blr
