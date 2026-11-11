# sdk/libc/xwctomb.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Wctombx:   # 0x5cc13c, 0x2dc bytes
  05cc13c  stdu 1, -128(1)
  05cc140  mflr 0
  05cc144  std 31, 120(1)
  05cc148  std 0, 144(1)
  05cc14c  lwz 6, 0(6)
  05cc150  mr 31, 5
  05cc154  mr 5, 3
  05cc158  cmpwi 7, 6, 0
  05cc15c  bt 30, 0x5cc2e4
  05cc160  cmpwi 7, 3, 0
  05cc164  lhz 9, 6(31)
  05cc168  bt 30, 0x5cc320
  05cc16c  extsb 9, 9
  05cc170  cmpwi 7, 9, 15
  05cc174  bt- 29, 0x5cc2b4
  05cc178  slwi 9, 9, 2
  05cc17c  clrldi 7, 7, 32
  05cc180  extsw 9, 9
  05cc184  lwzx 0, 7, 9
  05cc188  cmpwi 7, 0, 0
  05cc18c  bt- 30, 0x5cc2b4
  05cc190  rlwinm 9, 4, 1, 23, 30
  05cc194  li 3, 0
  05cc198  add 9, 9, 0
  05cc19c  li 6, 0
  05cc1a0  clrldi 9, 9, 32
  05cc1a4  li 12, 1
  05cc1a8  lhz 10, 0(9)
  05cc1ac  clrlwi 11, 10, 16
  05cc1b0  cmpwi 7, 11, 0
  05cc1b4  bf+ 30, 0x5cc274
  05cc1b8  b 0x5cc2b4
  05cc1bc  rlwinm 0, 11, 0, 19, 19
  05cc1c0  cmpwi 7, 0, 0
  05cc1c4  bt 30, 0x5cc1d8
  05cc1c8  clrlwi 0, 4, 16
  05cc1cc  srwi 9, 0, 8
  05cc1d0  slwi 0, 0, 8
  05cc1d4  or 4, 0, 9
  05cc1d8  rlwinm 0, 11, 0, 18, 18
  05cc1dc  cmpwi 7, 0, 0
  05cc1e0  bt 30, 0x5cc218
  05cc1e4  clrlwi 0, 11, 24
  05cc1e8  cmpwi 7, 0, 0
  05cc1ec  bf 30, 0x5cc1f4
  05cc1f0  mr 10, 4
  05cc1f4  add 9, 5, 6
  05cc1f8  extsb 0, 10
  05cc1fc  clrldi 9, 9, 32
  05cc200  cmpwi 7, 0, 0
  05cc204  addi 6, 6, 1
  05cc208  li 12, 0
  05cc20c  stb 10, 0(9)
  05cc210  bf 30, 0x5cc218
  05cc214  li 3, 1
  05cc218  rlwinm 0, 11, 0, 17, 17
  05cc21c  or 0, 0, 3
  05cc220  cmpwi 7, 0, 0
  05cc224  bf 30, 0x5cc294
  05cc228  extsb 0, 8
  05cc22c  cmpwi 7, 0, 15
  05cc230  bt- 29, 0x5cc2b4
  05cc234  rlwinm 9, 0, 2, 26, 29
  05cc238  lwzx 0, 7, 9
  05cc23c  cmpwi 7, 0, 0
  05cc240  bt- 30, 0x5cc2b4
  05cc244  cmpwi 7, 6, 2
  05cc248  bt- 29, 0x5cc2b4
  05cc24c  addi 12, 12, 1
  05cc250  cmpwi 7, 12, 4079
  05cc254  bt- 29, 0x5cc2b4
  05cc258  rlwinm 9, 4, 1, 23, 30
  05cc25c  add 9, 9, 0
  05cc260  clrldi 9, 9, 32
  05cc264  lhz 10, 0(9)
  05cc268  clrlwi 11, 10, 16
  05cc26c  cmpwi 7, 11, 0
  05cc270  bt- 30, 0x5cc2b4
  05cc274  extsh 0, 10
  05cc278  rlwinm 8, 11, 24, 28, 31
  05cc27c  cmpwi 7, 0, 0
  05cc280  bf 28, 0x5cc1bc
  05cc284  rlwinm 9, 4, 0, 0, 23
  05cc288  clrlwi 0, 10, 24
  05cc28c  or 4, 9, 0
  05cc290  b 0x5cc1bc
  05cc294  extsb 0, 8
  05cc298  sth 0, 6(31)
  05cc29c  ld 0, 144(1)
  05cc2a0  extsw 3, 6
  05cc2a4  ld 31, 120(1)
  05cc2a8  addi 1, 1, 128
  05cc2ac  mtlr 0
  05cc2b0  blr
  05cc2b4  bl 0x5d5904
  05cc2b8  nop
  05cc2bc  lis 0, -32767
  05cc2c0  ld 31, 120(1)
  05cc2c4  ori 0, 0, 29
  05cc2c8  li 6, -1
  05cc2cc  stw 0, 0(3)
  05cc2d0  ld 0, 144(1)
  05cc2d4  extsw 3, 6
  05cc2d8  addi 1, 1, 128
  05cc2dc  mtlr 0
  05cc2e0  blr
  05cc2e4  cmpwi 7, 3, 0
  05cc2e8  bt 30, 0x5cc3ec
  05cc2ec  clrlwi 10, 4, 16
  05cc2f0  rlwinm 0, 10, 0, 16, 24
  05cc2f4  cmpwi 7, 0, 0
  05cc2f8  bf 30, 0x5cc360
  05cc2fc  addi 3, 3, 1
  05cc300  stb 4, 0(5)
  05cc304  sub 6, 3, 5
  05cc308  ld 0, 144(1)
  05cc30c  extsw 3, 6
  05cc310  ld 31, 120(1)
  05cc314  addi 1, 1, 128
  05cc318  mtlr 0
  05cc31c  blr
  05cc320  lwz 9, -24432(2)
  05cc324  clrldi 8, 6, 32
  05cc328  lhz 0, 6(9)
  05cc32c  lwz 11, 0(9)
  05cc330  lhz 10, 4(9)
  05cc334  sth 0, 6(31)
  05cc338  stw 11, 0(31)
  05cc33c  sth 10, 4(31)
  05cc340  lhz 0, 0(8)
  05cc344  ld 31, 120(1)
  05cc348  rlwinm 6, 0, 0, 20, 23
  05cc34c  ld 0, 144(1)
  05cc350  addi 1, 1, 128
  05cc354  extsw 3, 6
  05cc358  mtlr 0
  05cc35c  blr
  05cc360  rlwinm 0, 10, 0, 16, 20
  05cc364  cmpwi 7, 0, 0
  05cc368  bf 30, 0x5cc3d0
  05cc36c  srwi 9, 10, 6
  05cc370  li 0, -64
  05cc374  addi 3, 3, 1
  05cc378  or 9, 9, 0
  05cc37c  li 8, 1
  05cc380  stb 9, 0(5)
  05cc384  addi 0, 8, -1
  05cc388  slwi 11, 8, 1
  05cc38c  slwi 9, 8, 3
  05cc390  cmpwi 7, 0, 0
  05cc394  sub 9, 9, 11
  05cc398  clrldi 8, 8, 32
  05cc39c  li 11, -128
  05cc3a0  addi 9, 9, -6
  05cc3a4  mtctr 8
  05cc3a8  bt- 28, 0x5cc40c
  05cc3ac  sraw 0, 10, 9
  05cc3b0  addi 9, 9, -6
  05cc3b4  clrlwi 0, 0, 26
  05cc3b8  or 0, 0, 11
  05cc3bc  stb 0, 0(3)
  05cc3c0  addi 3, 3, 1
  05cc3c4  bdnz 0x5cc3ac
  05cc3c8  sub 6, 3, 5
  05cc3cc  b 0x5cc308
  05cc3d0  srwi 9, 10, 12
  05cc3d4  li 0, -32
  05cc3d8  addi 3, 3, 1
  05cc3dc  or 9, 9, 0
  05cc3e0  li 8, 2
  05cc3e4  stb 9, 0(5)
  05cc3e8  b 0x5cc384
  05cc3ec  lwz 9, -24432(2)
  05cc3f0  lhz 0, 6(9)
  05cc3f4  lwz 11, 0(9)
  05cc3f8  lhz 10, 4(9)
  05cc3fc  sth 0, 6(31)
  05cc400  stw 11, 0(31)
  05cc404  sth 10, 4(31)
  05cc408  b 0x5cc29c
  05cc40c  li 0, 1
  05cc410  mtctr 0
  05cc414  b 0x5cc3ac

FUN_005cc418:   # 0x5cc418, 0x34 bytes
  05cc418  mr 0, 3
  05cc41c  addis 9, 13, 0
  05cc420  cmpwi 7, 0, 0
  05cc424  addi 6, 9, -28428
  05cc428  clrldi 3, 3, 32
  05cc42c  addis 9, 13, 0
  05cc430  clrldi 4, 4, 48
  05cc434  clrldi 5, 5, 32
  05cc438  li 7, 0
  05cc43c  bt 30, 0x5cc444
  05cc440  addi 7, 9, -28364
  05cc444  clrldi 7, 7, 32
  05cc448  b 0x5cc13c
