# sdk/libc/asctime.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

asctime:   # 0x5d58bc, 0x48 bytes
  05d58bc  addis 9, 13, 0
  05d58c0  lwz 7, -24132(2)
  05d58c4  mr 6, 3
  05d58c8  lwz 5, -24136(2)
  05d58cc  addi 3, 9, -28464
  05d58d0  mflr 0
  05d58d4  li 4, 26
  05d58d8  stdu 1, -112(1)
  05d58dc  std 0, 128(1)
  05d58e0  bl 0x5daab0
  05d58e4  nop
  05d58e8  ld 0, 128(1)
  05d58ec  addis 3, 13, 0
  05d58f0  mtlr 0
  05d58f4  addi 1, 1, 112
  05d58f8  addi 3, 3, -28464
  05d58fc  clrldi 3, 3, 32
  05d5900  blr

FUN_005d5904:   # 0x5d5904, 0x10 bytes
  05d5904  addis 3, 13, 0
  05d5908  addi 3, 3, -28432
  05d590c  clrldi 3, 3, 32
  05d5910  blr
