# sdk/libscream/loader.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

snd_MemAlloc:   # 0x53c1f0, 0x2c bytes
  053c1f0  clrldi 3, 3, 32
  053c1f4  mflr 0
  053c1f8  stdu 1, -112(1)
  053c1fc  std 0, 128(1)
  053c200  bl 0x54fdc4
  053c204  nop
  053c208  ld 0, 128(1)
  053c20c  li 3, 0
  053c210  mtlr 0
  053c214  addi 1, 1, 112
  053c218  blr

FUN_0053c21c:   # 0x53c21c, 0xec bytes
  053c21c  lwz 9, -29256(2)
  053c220  mflr 0
  053c224  stdu 1, -144(1)
  053c228  std 0, 160(1)
  053c22c  std 29, 120(1)
  053c230  std 30, 128(1)
  053c234  lwz 0, 0(9)
  053c238  mr 30, 3
  053c23c  std 31, 136(1)
  053c240  cmpwi 7, 0, 1
  053c244  std 28, 112(1)
  053c248  mr 31, 4
  053c24c  li 29, 2
  053c250  bf 30, 0x53c27c
  053c254  lwz 28, -29252(2)
  053c258  li 4, 0
  053c25c  li 29, 2000
  053c260  lwz 9, 0(28)
  053c264  addi 3, 9, 28
  053c268  clrldi 9, 9, 32
  053c26c  clrldi 3, 3, 32
  053c270  lwz 0, 24(9)
  053c274  cmpwi 7, 0, 1
  053c278  bt 30, 0x53c2a0
  053c27c  ld 0, 160(1)
  053c280  clrldi 3, 29, 32
  053c284  ld 28, 112(1)
  053c288  ld 29, 120(1)
  053c28c  mtlr 0
  053c290  ld 30, 128(1)
  053c294  ld 31, 136(1)
  053c298  addi 1, 1, 144
  053c29c  blr
  053c2a0  bl 0x552e60
  053c2a4  nop
  053c2a8  clrldi 3, 3, 32
  053c2ac  bl 0x540808
  053c2b0  nop
  053c2b4  clrldi 4, 31, 32
  053c2b8  mr 29, 3
  053c2bc  clrldi 3, 30, 32
  053c2c0  cmpwi 7, 29, 0
  053c2c4  bf 30, 0x53c27c
  053c2c8  bl 0x5437b4
  053c2cc  nop
  053c2d0  li 4, 0
  053c2d4  mr 29, 3
  053c2d8  lwz 3, 0(28)
  053c2dc  addi 3, 3, 28
  053c2e0  clrldi 3, 3, 32
  053c2e4  bl 0x552c24
  053c2e8  nop
  053c2ec  clrldi 3, 3, 32
  053c2f0  bl 0x540808
  053c2f4  nop
  053c2f8  cmpdi 3, 0
  053c2fc  bt 2, 0x53c27c
  053c300  mr 29, 3
  053c304  b 0x53c27c

FUN_0053c308:   # 0x53c308, 0xec bytes
  053c308  lwz 9, -29256(2)
  053c30c  mflr 0
  053c310  stdu 1, -144(1)
  053c314  std 0, 160(1)
  053c318  std 29, 120(1)
  053c31c  std 30, 128(1)
  053c320  lwz 0, 0(9)
  053c324  mr 30, 3
  053c328  std 31, 136(1)
  053c32c  cmpwi 7, 0, 1
  053c330  std 28, 112(1)
  053c334  mr 31, 4
  053c338  li 29, 2
  053c33c  bf 30, 0x53c368
  053c340  lwz 28, -29252(2)
  053c344  li 4, 0
  053c348  li 29, 2000
  053c34c  lwz 9, 0(28)
  053c350  addi 3, 9, 28
  053c354  clrldi 9, 9, 32
  053c358  clrldi 3, 3, 32
  053c35c  lwz 0, 24(9)
  053c360  cmpwi 7, 0, 1
  053c364  bt 30, 0x53c38c
  053c368  ld 0, 160(1)
  053c36c  clrldi 3, 29, 32
  053c370  ld 28, 112(1)
  053c374  ld 29, 120(1)
  053c378  mtlr 0
  053c37c  ld 30, 128(1)
  053c380  ld 31, 136(1)
  053c384  addi 1, 1, 144
  053c388  blr
  053c38c  bl 0x552e60
  053c390  nop
  053c394  clrldi 3, 3, 32
  053c398  bl 0x540808
  053c39c  nop
  053c3a0  clrldi 4, 31, 32
  053c3a4  mr 29, 3
  053c3a8  clrldi 3, 30, 32
  053c3ac  cmpwi 7, 29, 0
  053c3b0  bf 30, 0x53c368
  053c3b4  bl 0x544198
  053c3b8  nop
  053c3bc  li 4, 0
  053c3c0  mr 29, 3
  053c3c4  lwz 3, 0(28)
  053c3c8  addi 3, 3, 28
  053c3cc  clrldi 3, 3, 32
  053c3d0  bl 0x552c24
  053c3d4  nop
  053c3d8  clrldi 3, 3, 32
  053c3dc  bl 0x540808
  053c3e0  nop
  053c3e4  cmpdi 3, 0
  053c3e8  bt 2, 0x53c368
  053c3ec  mr 29, 3
  053c3f0  b 0x53c368

FUN_0053c3f4:   # 0x53c3f4, 0xec bytes
  053c3f4  lwz 9, -29256(2)
  053c3f8  mflr 0
  053c3fc  stdu 1, -144(1)
  053c400  std 0, 160(1)
  053c404  std 29, 120(1)
  053c408  std 30, 128(1)
  053c40c  lwz 0, 0(9)
  053c410  mr 30, 3
  053c414  std 31, 136(1)
  053c418  cmpwi 7, 0, 1
  053c41c  std 28, 112(1)
  053c420  mr 31, 4
  053c424  li 29, 2
  053c428  bf 30, 0x53c454
  053c42c  lwz 28, -29252(2)
  053c430  li 4, 0
  053c434  li 29, 2000
  053c438  lwz 9, 0(28)
  053c43c  addi 3, 9, 28
  053c440  clrldi 9, 9, 32
  053c444  clrldi 3, 3, 32
  053c448  lwz 0, 24(9)
  053c44c  cmpwi 7, 0, 1
  053c450  bt 30, 0x53c478
  053c454  ld 0, 160(1)
  053c458  clrldi 3, 29, 32
  053c45c  ld 28, 112(1)
  053c460  ld 29, 120(1)
  053c464  mtlr 0
  053c468  ld 30, 128(1)
  053c46c  ld 31, 136(1)
  053c470  addi 1, 1, 144
  053c474  blr
  053c478  bl 0x552e60
  053c47c  nop
  053c480  clrldi 3, 3, 32
  053c484  bl 0x540808
  053c488  nop
  053c48c  clrldi 4, 31, 32
  053c490  mr 29, 3
  053c494  clrldi 3, 30, 32
  053c498  cmpwi 7, 29, 0
  053c49c  bf 30, 0x53c454
  053c4a0  bl 0x542478
  053c4a4  nop
  053c4a8  li 4, 0
  053c4ac  mr 29, 3
  053c4b0  lwz 3, 0(28)
  053c4b4  addi 3, 3, 28
  053c4b8  clrldi 3, 3, 32
  053c4bc  bl 0x552c24
  053c4c0  nop
  053c4c4  clrldi 3, 3, 32
  053c4c8  bl 0x540808
  053c4cc  nop
  053c4d0  cmpdi 3, 0
  053c4d4  bt 2, 0x53c454
  053c4d8  mr 29, 3
  053c4dc  b 0x53c454
