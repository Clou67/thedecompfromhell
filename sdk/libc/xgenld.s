# sdk/libc/xgenld.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Genld:   # 0x5db060, 0x64c bytes
  05db060  lwz 9, -23964(2)
  05db064  mflr 0
  05db068  stdu 1, -208(1)
  05db06c  std 0, 224(1)
  05db070  cmpwi 7, 6, 0
  05db074  std 24, 144(1)
  05db078  lwz 11, 44(9)
  05db07c  mr 24, 4
  05db080  std 26, 160(1)
  05db084  std 27, 168(1)
  05db088  std 29, 184(1)
  05db08c  std 30, 192(1)
  05db090  std 25, 152(1)
  05db094  std 28, 176(1)
  05db098  std 31, 200(1)
  05db09c  mr 30, 3
  05db0a0  lbz 25, 0(11)
  05db0a4  mr 26, 5
  05db0a8  mr 29, 7
  05db0ac  mr 27, 6
  05db0b0  bf 29, 0x5db4bc
  05db0b4  extsb 9, 24
  05db0b8  cmpwi 7, 9, 102
  05db0bc  bt 30, 0x5db300
  05db0c0  cmpwi 7, 9, 70
  05db0c4  bt 30, 0x5db300
  05db0c8  cmpwi 7, 9, 103
  05db0cc  bt 30, 0x5db2a4
  05db0d0  cmpwi 7, 9, 71
  05db0d4  extsh 31, 29
  05db0d8  bt 30, 0x5db2a4
  05db0dc  cmpwi 7, 9, 97
  05db0e0  bt 30, 0x5db5e4
  05db0e4  cmpwi 7, 9, 65
  05db0e8  bt 30, 0x5db52c
  05db0ec  lwz 11, 52(30)
  05db0f0  lwz 9, 40(30)
  05db0f4  lbz 10, 0(26)
  05db0f8  add 9, 11, 9
  05db0fc  addi 11, 11, 1
  05db100  clrldi 9, 9, 32
  05db104  stb 10, 0(9)
  05db108  lwz 0, 68(30)
  05db10c  stw 11, 52(30)
  05db110  cmpwi 7, 0, 0
  05db114  bf 29, 0x5db5ec
  05db118  lwz 9, 40(30)
  05db11c  add 9, 11, 9
  05db120  addi 11, 11, 1
  05db124  clrldi 9, 9, 32
  05db128  stb 25, 0(9)
  05db12c  lwz 0, 68(30)
  05db130  stw 11, 52(30)
  05db134  cmpwi 7, 0, 0
  05db138  bf 29, 0x5db184
  05db13c  addi 5, 27, -1
  05db140  extsh 28, 5
  05db144  cmpw 7, 0, 28
  05db148  bt 28, 0x5db4c8
  05db14c  lwz 3, 40(30)
  05db150  addi 4, 26, 1
  05db154  clrldi 5, 28, 32
  05db158  add 3, 11, 3
  05db15c  clrldi 4, 4, 32
  05db160  clrldi 3, 3, 32
  05db164  bl 0x5c5ad0
  05db168  nop
  05db16c  lwz 11, 52(30)
  05db170  lwz 0, 68(30)
  05db174  add 11, 28, 11
  05db178  sub 0, 0, 28
  05db17c  stw 11, 52(30)
  05db180  stw 0, 56(30)
  05db184  lwz 9, 40(30)
  05db188  cmpwi 7, 31, 0
  05db18c  add 9, 9, 11
  05db190  clrldi 11, 9, 32
  05db194  addi 3, 9, 1
  05db198  stb 24, 0(11)
  05db19c  bt 28, 0x5db628
  05db1a0  clrldi 9, 3, 32
  05db1a4  li 0, 43
  05db1a8  addi 25, 3, 1
  05db1ac  stb 0, 0(9)
  05db1b0  cmpwi 7, 31, 0
  05db1b4  li 28, 0
  05db1b8  bf 29, 0x5db600
  05db1bc  addi 26, 1, 112
  05db1c0  addi 27, 1, 120
  05db1c4  extsw 4, 31
  05db1c8  clrldi 3, 26, 32
  05db1cc  li 5, 10
  05db1d0  bl 0x5dc904
  05db1d4  nop
  05db1d8  add 9, 28, 27
  05db1dc  lhz 29, 114(1)
  05db1e0  clrldi 9, 9, 32
  05db1e4  lwz 0, 116(1)
  05db1e8  extsh 31, 29
  05db1ec  addi 28, 28, 1
  05db1f0  cmpwi 7, 31, 0
  05db1f4  stb 0, 0(9)
  05db1f8  bt 29, 0x5db1c4
  05db1fc  cmpwi 7, 28, 1
  05db200  bf 29, 0x5db600
  05db204  cmpwi 7, 28, 0
  05db208  bt 30, 0x5db400
  05db20c  bf- 29, 0x5db24c
  05db210  clrldi 0, 28, 32
  05db214  mr 7, 28
  05db218  mr 8, 25
  05db21c  mtctr 0
  05db220  addi 26, 1, 112
  05db224  addi 7, 7, -1
  05db228  clrldi 10, 8, 32
  05db22c  extsw 11, 7
  05db230  addi 8, 8, 1
  05db234  add 11, 26, 11
  05db238  lbz 9, 8(11)
  05db23c  addi 9, 9, 48
  05db240  stb 9, 0(10)
  05db244  bdnz 0x5db224
  05db248  add 25, 25, 28
  05db24c  lwz 0, 40(30)
  05db250  lwz 9, 52(30)
  05db254  lhz 8, 80(30)
  05db258  add 0, 0, 9
  05db25c  sub 0, 25, 0
  05db260  stw 0, 60(30)
  05db264  li 9, 20
  05db268  and 0, 8, 9
  05db26c  cmpwi 7, 0, 16
  05db270  bt 30, 0x5db398
  05db274  ld 0, 224(1)
  05db278  ld 24, 144(1)
  05db27c  ld 25, 152(1)
  05db280  mtlr 0
  05db284  ld 26, 160(1)
  05db288  ld 27, 168(1)
  05db28c  ld 28, 176(1)
  05db290  ld 29, 184(1)
  05db294  ld 30, 192(1)
  05db298  ld 31, 200(1)
  05db29c  addi 1, 1, 208
  05db2a0  blr
  05db2a4  extsh 31, 29
  05db2a8  cmpwi 7, 31, -4
  05db2ac  bf 28, 0x5db4d0
  05db2b0  cmpwi 7, 9, 103
  05db2b4  bt 30, 0x5db2c0
  05db2b8  cmpwi 7, 9, 71
  05db2bc  bf 30, 0x5db0dc
  05db2c0  extsh 11, 27
  05db2c4  lwz 10, 68(30)
  05db2c8  cmpw 7, 10, 11
  05db2cc  bt 29, 0x5db644
  05db2d0  addi 10, 10, -1
  05db2d4  cmpwi 7, 10, 0
  05db2d8  stw 10, 68(30)
  05db2dc  bt 28, 0x5db6a0
  05db2e0  xori 0, 9, 103
  05db2e4  srawi 11, 0, 31
  05db2e8  xor 9, 11, 0
  05db2ec  sub 9, 11, 9
  05db2f0  srawi 9, 9, 31
  05db2f4  rlwinm 9, 9, 0, 0, 26
  05db2f8  addi 24, 9, 101
  05db2fc  b 0x5db0ec
  05db300  addi 28, 29, 1
  05db304  extsh 31, 27
  05db308  extsh 29, 28
  05db30c  mr 8, 29
  05db310  cmpwi 7, 29, 0
  05db314  bf 29, 0x5db534
  05db318  cmpw 7, 31, 29
  05db31c  bf 28, 0x5db414
  05db320  lwz 0, 52(30)
  05db324  clrldi 4, 26, 32
  05db328  lwz 3, 40(30)
  05db32c  clrldi 5, 31, 32
  05db330  add 3, 3, 0
  05db334  clrldi 3, 3, 32
  05db338  bl 0x5c5ad0
  05db33c  nop
  05db340  lwz 10, 68(30)
  05db344  lwz 9, 52(30)
  05db348  cmpwi 7, 10, 0
  05db34c  sub 0, 29, 31
  05db350  add 11, 9, 31
  05db354  stw 0, 56(30)
  05db358  stw 11, 52(30)
  05db35c  bf 29, 0x5db674
  05db360  lwz 9, 40(30)
  05db364  add 9, 9, 11
  05db368  clrldi 9, 9, 32
  05db36c  stb 25, 0(9)
  05db370  lwz 11, 60(30)
  05db374  lwz 10, 68(30)
  05db378  addi 11, 11, 1
  05db37c  lhz 8, 80(30)
  05db380  stw 10, 64(30)
  05db384  stw 11, 60(30)
  05db388  li 9, 20
  05db38c  and 0, 8, 9
  05db390  cmpwi 7, 0, 16
  05db394  bf 30, 0x5db274
  05db398  lwz 11, 52(30)
  05db39c  lwz 0, 44(30)
  05db3a0  lwz 9, 56(30)
  05db3a4  add 0, 0, 11
  05db3a8  lwz 10, 60(30)
  05db3ac  lwz 11, 64(30)
  05db3b0  add 9, 9, 10
  05db3b4  add 0, 0, 11
  05db3b8  lwz 11, 76(30)
  05db3bc  add 0, 9, 0
  05db3c0  cmpw 7, 0, 11
  05db3c4  bf 28, 0x5db274
  05db3c8  sub 0, 11, 0
  05db3cc  ld 24, 144(1)
  05db3d0  ld 25, 152(1)
  05db3d4  stw 0, 48(30)
  05db3d8  ld 0, 224(1)
  05db3dc  ld 26, 160(1)
  05db3e0  ld 27, 168(1)
  05db3e4  mtlr 0
  05db3e8  ld 28, 176(1)
  05db3ec  ld 29, 184(1)
  05db3f0  ld 30, 192(1)
  05db3f4  ld 31, 200(1)
  05db3f8  addi 1, 1, 208
  05db3fc  blr
  05db400  clrldi 9, 25, 32
  05db404  li 0, 48
  05db408  addi 25, 25, 1
  05db40c  stb 0, 0(9)
  05db410  b 0x5db24c
  05db414  lwz 3, 40(30)
  05db418  clrldi 5, 29, 32
  05db41c  lwz 0, 52(30)
  05db420  clrldi 4, 26, 32
  05db424  add 3, 3, 0
  05db428  clrldi 3, 3, 32
  05db42c  bl 0x5c5ad0
  05db430  nop
  05db434  lwz 10, 68(30)
  05db438  lwz 11, 52(30)
  05db43c  cmpwi 7, 10, 0
  05db440  add 11, 29, 11
  05db444  sub 5, 27, 28
  05db448  stw 11, 52(30)
  05db44c  bf 29, 0x5db660
  05db450  lwz 9, 40(30)
  05db454  add 9, 11, 9
  05db458  addi 11, 11, 1
  05db45c  clrldi 9, 9, 32
  05db460  stb 25, 0(9)
  05db464  lwz 10, 68(30)
  05db468  stw 11, 52(30)
  05db46c  extsh 31, 5
  05db470  cmpw 7, 10, 31
  05db474  bf 28, 0x5db47c
  05db478  extsh 31, 10
  05db47c  lwz 3, 40(30)
  05db480  add 4, 26, 29
  05db484  clrldi 5, 31, 32
  05db488  add 3, 3, 11
  05db48c  clrldi 4, 4, 32
  05db490  clrldi 3, 3, 32
  05db494  bl 0x5c5ad0
  05db498  nop
  05db49c  lwz 9, 52(30)
  05db4a0  lwz 0, 68(30)
  05db4a4  add 11, 9, 31
  05db4a8  lhz 8, 80(30)
  05db4ac  sub 0, 0, 31
  05db4b0  stw 11, 52(30)
  05db4b4  stw 0, 56(30)
  05db4b8  b 0x5db264
  05db4bc  lwz 26, -23960(2)
  05db4c0  li 27, 1
  05db4c4  b 0x5db0b4
  05db4c8  extsh 28, 0
  05db4cc  b 0x5db14c
  05db4d0  lwz 10, 68(30)
  05db4d4  cmpw 7, 31, 10
  05db4d8  bf 28, 0x5db2b0
  05db4dc  lhz 0, 80(30)
  05db4e0  addi 28, 29, 1
  05db4e4  extsh 31, 27
  05db4e8  rlwinm 0, 0, 0, 28, 28
  05db4ec  cmpwi 7, 0, 0
  05db4f0  bf 30, 0x5db508
  05db4f4  extsh 31, 27
  05db4f8  cmpw 7, 31, 10
  05db4fc  bf 28, 0x5db508
  05db500  mr 10, 31
  05db504  stw 31, 68(30)
  05db508  extsh 29, 28
  05db50c  sub 10, 10, 29
  05db510  mr 8, 29
  05db514  cmpwi 7, 10, 0
  05db518  stw 10, 68(30)
  05db51c  bf 28, 0x5db310
  05db520  li 10, 0
  05db524  stw 10, 68(30)
  05db528  b 0x5db310
  05db52c  li 24, 80
  05db530  b 0x5db0ec
  05db534  lwz 11, 52(30)
  05db538  li 0, 48
  05db53c  lwz 9, 40(30)
  05db540  add 9, 11, 9
  05db544  addi 11, 11, 1
  05db548  clrldi 9, 9, 32
  05db54c  stb 0, 0(9)
  05db550  lwz 10, 68(30)
  05db554  stw 11, 52(30)
  05db558  cmpwi 7, 10, 0
  05db55c  bf 29, 0x5db68c
  05db560  lwz 9, 40(30)
  05db564  add 9, 11, 9
  05db568  addi 11, 11, 1
  05db56c  clrldi 9, 9, 32
  05db570  stb 25, 0(9)
  05db574  lwz 10, 68(30)
  05db578  stw 11, 52(30)
  05db57c  neg 0, 29
  05db580  cmpw 7, 10, 0
  05db584  bf 28, 0x5db594
  05db588  neg 0, 10
  05db58c  extsh 8, 0
  05db590  neg 0, 8
  05db594  add 10, 8, 10
  05db598  stw 0, 56(30)
  05db59c  cmpw 7, 10, 31
  05db5a0  stw 10, 68(30)
  05db5a4  bf 28, 0x5db5ac
  05db5a8  extsh 31, 10
  05db5ac  lwz 0, 52(30)
  05db5b0  clrldi 4, 26, 32
  05db5b4  lwz 3, 40(30)
  05db5b8  clrldi 5, 31, 32
  05db5bc  stw 31, 60(30)
  05db5c0  add 3, 3, 0
  05db5c4  clrldi 3, 3, 32
  05db5c8  bl 0x5c5ad0
  05db5cc  nop
  05db5d0  lwz 0, 68(30)
  05db5d4  lhz 8, 80(30)
  05db5d8  sub 0, 0, 31
  05db5dc  stw 0, 64(30)
  05db5e0  b 0x5db264
  05db5e4  li 24, 112
  05db5e8  b 0x5db0ec
  05db5ec  lhz 0, 80(30)
  05db5f0  rlwinm 0, 0, 0, 28, 28
  05db5f4  cmpwi 7, 0, 0
  05db5f8  bt 30, 0x5db184
  05db5fc  b 0x5db118
  05db600  extsb 4, 24
  05db604  cmpwi 7, 4, 101
  05db608  bt 30, 0x5db614
  05db60c  cmpwi 7, 4, 69
  05db610  bf 30, 0x5db204
  05db614  clrldi 9, 25, 32
  05db618  li 0, 48
  05db61c  addi 25, 25, 1
  05db620  stb 0, 0(9)
  05db624  b 0x5db204
  05db628  clrldi 9, 3, 32
  05db62c  neg 29, 29
  05db630  li 0, 45
  05db634  addi 25, 3, 1
  05db638  extsh 31, 29
  05db63c  stb 0, 0(9)
  05db640  b 0x5db1b0
  05db644  lhz 0, 80(30)
  05db648  rlwinm 0, 0, 0, 28, 28
  05db64c  cmpwi 7, 0, 0
  05db650  bf 30, 0x5db2d0
  05db654  mr 10, 11
  05db658  stw 11, 68(30)
  05db65c  b 0x5db2d0
  05db660  lhz 0, 80(30)
  05db664  rlwinm 0, 0, 0, 28, 28
  05db668  cmpwi 7, 0, 0
  05db66c  bt 30, 0x5db46c
  05db670  b 0x5db450
  05db674  lhz 8, 80(30)
  05db678  rlwinm 0, 8, 0, 28, 28
  05db67c  cmpwi 7, 0, 0
  05db680  bf 30, 0x5db360
  05db684  stw 10, 64(30)
  05db688  b 0x5db388
  05db68c  lhz 0, 80(30)
  05db690  rlwinm 0, 0, 0, 28, 28
  05db694  cmpwi 7, 0, 0
  05db698  bt 30, 0x5db57c
  05db69c  b 0x5db560
  05db6a0  li 0, 0
  05db6a4  stw 0, 68(30)
  05db6a8  b 0x5db2e0
