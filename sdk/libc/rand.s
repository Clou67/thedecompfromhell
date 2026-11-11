# sdk/libc/rand.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

rand:   # 0x5c8318, 0x108 bytes
  05c8318  addis 7, 13, 0
  05c831c  addi 9, 7, -28664
  05c8320  lbz 0, 0(9)
  05c8324  cmpwi 7, 0, 0
  05c8328  bf 30, 0x5c8410
  05c832c  addis 4, 13, 0
  05c8330  lis 0, 25
  05c8334  addi 9, 4, -28672
  05c8338  li 11, 8
  05c833c  ori 0, 0, 26125
  05c8340  mtctr 11
  05c8344  lwz 6, 0(9)
  05c8348  mullw 9, 6, 0
  05c834c  addis 9, 9, 15471
  05c8350  addi 6, 9, -3233
  05c8354  bdnz 0x5c8348
  05c8358  addi 11, 4, -28672
  05c835c  addis 3, 13, 0
  05c8360  lis 8, 25
  05c8364  addi 9, 3, -28656
  05c8368  ori 8, 8, 26125
  05c836c  addi 0, 9, 128
  05c8370  mr 10, 9
  05c8374  stw 6, 0(11)
  05c8378  clrldi 9, 10, 32
  05c837c  addi 10, 10, 4
  05c8380  mullw 11, 6, 8
  05c8384  addis 11, 11, 15471
  05c8388  cmpw 7, 10, 0
  05c838c  addi 6, 11, -3233
  05c8390  stw 6, 0(9)
  05c8394  bf 30, 0x5c8378
  05c8398  addis 9, 13, 0
  05c839c  addis 5, 13, 0
  05c83a0  addi 9, 9, -28656
  05c83a4  addi 10, 7, -28664
  05c83a8  addi 8, 4, -28672
  05c83ac  addi 7, 5, -28660
  05c83b0  li 0, 1
  05c83b4  lwz 11, 124(9)
  05c83b8  stb 0, 0(10)
  05c83bc  stw 6, 0(8)
  05c83c0  stw 11, 0(7)
  05c83c4  addi 8, 4, -28672
  05c83c8  lis 0, 25
  05c83cc  addi 7, 5, -28660
  05c83d0  ori 0, 0, 26125
  05c83d4  addi 10, 3, -28656
  05c83d8  lwz 11, 0(8)
  05c83dc  lwz 9, 0(7)
  05c83e0  mullw 11, 11, 0
  05c83e4  rlwinm 9, 9, 2, 25, 29
  05c83e8  addis 11, 11, 15471
  05c83ec  add 9, 9, 10
  05c83f0  addi 11, 11, -3233
  05c83f4  clrldi 9, 9, 32
  05c83f8  stw 11, 0(8)
  05c83fc  lwz 3, 0(9)
  05c8400  stw 3, 0(7)
  05c8404  clrldi 3, 3, 34
  05c8408  stw 11, 0(9)
  05c840c  blr
  05c8410  addis 5, 13, 0
  05c8414  addis 4, 13, 0
  05c8418  addis 3, 13, 0
  05c841c  b 0x5c83c4
