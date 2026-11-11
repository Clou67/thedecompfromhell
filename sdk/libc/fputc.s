# sdk/libc/fputc.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

fputc:   # 0x5d5914, 0xf4 bytes
  05d5914  stdu 1, -144(1)
  05d5918  mflr 0
  05d591c  std 31, 136(1)
  05d5920  mr 31, 4
  05d5924  std 29, 120(1)
  05d5928  mr 29, 3
  05d592c  mr 3, 4
  05d5930  std 30, 128(1)
  05d5934  std 0, 160(1)
  05d5938  mr 30, 4
  05d593c  bl 0x5cbc38
  05d5940  nop
  05d5944  lwz 11, 16(31)
  05d5948  lwz 0, 24(31)
  05d594c  cmplw 7, 11, 0
  05d5950  bf 28, 0x5d59ec
  05d5954  clrldi 9, 11, 32
  05d5958  addi 11, 11, 1
  05d595c  mr 10, 29
  05d5960  stb 29, 0(9)
  05d5964  lhz 9, 0(31)
  05d5968  stw 11, 16(31)
  05d596c  rlwinm 0, 9, 0, 20, 20
  05d5970  cmpwi 7, 0, 0
  05d5974  bf 30, 0x5d59c0
  05d5978  rlwinm 0, 9, 0, 21, 21
  05d597c  clrlwi 31, 29, 24
  05d5980  cmpwi 7, 0, 0
  05d5984  bf 30, 0x5d59b8
  05d5988  mr 3, 30
  05d598c  bl 0x5cbbbc
  05d5990  nop
  05d5994  mr 3, 31
  05d5998  ld 0, 160(1)
  05d599c  extsw 3, 3
  05d59a0  ld 29, 120(1)
  05d59a4  ld 30, 128(1)
  05d59a8  mtlr 0
  05d59ac  ld 31, 136(1)
  05d59b0  addi 1, 1, 144
  05d59b4  blr
  05d59b8  cmpwi 7, 31, 10
  05d59bc  bf 30, 0x5d5988
  05d59c0  mr 3, 30
  05d59c4  clrlwi 31, 10, 24
  05d59c8  bl 0x5c50cc
  05d59cc  nop
  05d59d0  cmpwi 7, 3, 0
  05d59d4  bt+ 30, 0x5d5988
  05d59d8  mr 3, 30
  05d59dc  bl 0x5cbbbc
  05d59e0  nop
  05d59e4  li 3, -1
  05d59e8  b 0x5d5998
  05d59ec  mr 3, 31
  05d59f0  bl 0x5c9998
  05d59f4  nop
  05d59f8  cmpwi 7, 3, 0
  05d59fc  bt- 28, 0x5d59d8
  05d5a00  lwz 11, 16(31)
  05d5a04  b 0x5d5954
