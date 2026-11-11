# sdk/libc/vfscanf.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

vfscanf:   # 0x5cd360, 0x74 bytes
  05cd360  stdu 1, -160(1)
  05cd364  mflr 0
  05cd368  std 27, 120(1)
  05cd36c  mr 27, 5
  05cd370  std 28, 128(1)
  05cd374  std 29, 136(1)
  05cd378  mr 28, 4
  05cd37c  mr 29, 3
  05cd380  std 0, 176(1)
  05cd384  bl 0x5cbc38
  05cd388  nop
  05cd38c  lwz 3, -24404(2)
  05cd390  clrldi 5, 28, 32
  05cd394  clrldi 6, 27, 32
  05cd398  mr 4, 29
  05cd39c  bl 0x5cd5c4
  05cd3a0  nop
  05cd3a4  mr 28, 3
  05cd3a8  mr 3, 29
  05cd3ac  bl 0x5cbbbc
  05cd3b0  nop
  05cd3b4  ld 0, 176(1)
  05cd3b8  ld 27, 120(1)
  05cd3bc  extsw 3, 28
  05cd3c0  ld 29, 136(1)
  05cd3c4  ld 28, 128(1)
  05cd3c8  mtlr 0
  05cd3cc  addi 1, 1, 160
  05cd3d0  blr

FUN_005cd3d4:   # 0x5cd3d4, 0x70 bytes
  05cd3d4  stdu 1, -144(1)
  05cd3d8  mflr 0
  05cd3dc  std 29, 120(1)
  05cd3e0  mr 29, 3
  05cd3e4  std 31, 136(1)
  05cd3e8  mr 3, 4
  05cd3ec  mr 31, 5
  05cd3f0  mr 6, 29
  05cd3f4  clrldi 5, 5, 32
  05cd3f8  li 4, 1
  05cd3fc  std 0, 160(1)
  05cd400  bl 0x5c5638
  05cd404  nop
  05cd408  xor 5, 31, 3
  05cd40c  ld 31, 136(1)
  05cd410  srawi 0, 5, 31
  05cd414  xor 5, 0, 5
  05cd418  sub 5, 5, 0
  05cd41c  ld 0, 160(1)
  05cd420  addi 5, 5, -1
  05cd424  mtlr 0
  05cd428  srawi 5, 5, 31
  05cd42c  extsw 5, 5
  05cd430  and 29, 29, 5
  05cd434  mr 3, 29
  05cd438  ld 29, 120(1)
  05cd43c  addi 1, 1, 144
  05cd440  blr
