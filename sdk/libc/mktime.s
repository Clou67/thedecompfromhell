# sdk/libc/mktime.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

mktime:   # 0x5c7368, 0x204 bytes
  05c7368  stdu 1, -160(1)
  05c736c  mflr 0
  05c7370  std 30, 144(1)
  05c7374  std 31, 152(1)
  05c7378  mr 30, 3
  05c737c  mr 31, 3
  05c7380  std 29, 136(1)
  05c7384  std 0, 176(1)
  05c7388  addi 4, 1, 116
  05c738c  addi 3, 1, 112
  05c7390  li 11, 144
  05c7394  sc
  05c7398  lis 29, 10922
  05c739c  lwz 0, 16(31)
  05c73a0  ori 29, 29, 43691
  05c73a4  srawi 9, 0, 31
  05c73a8  extsw 11, 0
  05c73ac  mulhw 0, 0, 29
  05c73b0  srawi 0, 0, 1
  05c73b4  sub 0, 0, 9
  05c73b8  extsw 10, 0
  05c73bc  sldi 9, 10, 2
  05c73c0  sldi 0, 10, 4
  05c73c4  sub 0, 0, 9
  05c73c8  sub. 4, 11, 0
  05c73cc  bt 0, 0x5c753c
  05c73d0  cmpdi 7, 10, 0
  05c73d4  bt- 28, 0x5c7504
  05c73d8  bf 30, 0x5c7548
  05c73dc  lwz 29, 20(31)
  05c73e0  extsw 29, 29
  05c73e4  extsw 4, 4
  05c73e8  add 29, 10, 29
  05c73ec  clrldi 30, 30, 32
  05c73f0  extsw 3, 29
  05c73f4  bl 0x5cbdbc
  05c73f8  nop
  05c73fc  sldi 9, 29, 11
  05c7400  lwz 6, 8(31)
  05c7404  lis 0, 1
  05c7408  lwz 7, 12(31)
  05c740c  sldi 11, 29, 2
  05c7410  lwz 5, 0(31)
  05c7414  extsw 3, 3
  05c7418  add 11, 11, 9
  05c741c  ori 0, 0, 20864
  05c7420  sldi 9, 3, 9
  05c7424  add 11, 11, 29
  05c7428  sldi 3, 3, 7
  05c742c  mullw 7, 7, 0
  05c7430  sub 9, 9, 3
  05c7434  lwz 0, 4(31)
  05c7438  sldi 11, 11, 3
  05c743c  sldi 8, 9, 4
  05c7440  add 11, 11, 29
  05c7444  sub 8, 8, 9
  05c7448  slwi 10, 0, 6
  05c744c  sldi 9, 11, 4
  05c7450  slwi 0, 0, 2
  05c7454  sub 9, 9, 11
  05c7458  sub 10, 10, 0
  05c745c  sldi 0, 8, 4
  05c7460  extsw 7, 7
  05c7464  sub 0, 0, 8
  05c7468  sldi 9, 9, 7
  05c746c  add 0, 0, 7
  05c7470  addis 9, 9, -1
  05c7474  mulli 6, 6, 3600
  05c7478  add 6, 6, 5
  05c747c  addi 9, 9, -20864
  05c7480  add 10, 10, 6
  05c7484  extsw 10, 10
  05c7488  add 0, 0, 10
  05c748c  add. 9, 9, 0
  05c7490  bt 0, 0x5c751c
  05c7494  li 29, -32384
  05c7498  lwz 5, 32(31)
  05c749c  mr 3, 30
  05c74a0  xoris 29, 29, 33706
  05c74a4  extsw 5, 5
  05c74a8  add 29, 9, 29
  05c74ac  mr 4, 29
  05c74b0  bl 0x5cbe4c
  05c74b4  nop
  05c74b8  lwz 0, 116(1)
  05c74bc  lwz 10, 112(1)
  05c74c0  slwi 9, 0, 6
  05c74c4  ld 30, 144(1)
  05c74c8  slwi 0, 0, 2
  05c74cc  ld 31, 152(1)
  05c74d0  slwi 11, 10, 6
  05c74d4  sub 9, 9, 0
  05c74d8  ld 0, 176(1)
  05c74dc  slwi 10, 10, 2
  05c74e0  extsw 9, 9
  05c74e4  mtlr 0
  05c74e8  sub 11, 11, 10
  05c74ec  sub 29, 29, 9
  05c74f0  extsw 11, 11
  05c74f4  sub 3, 29, 11
  05c74f8  ld 29, 136(1)
  05c74fc  addi 1, 1, 160
  05c7500  blr
  05c7504  lwz 29, 20(31)
  05c7508  lis 9, -32768
  05c750c  extsw 0, 29
  05c7510  sub 9, 9, 10
  05c7514  cmpd 7, 0, 9
  05c7518  bf 28, 0x5c73e0
  05c751c  li 3, -1
  05c7520  ld 0, 176(1)
  05c7524  ld 29, 136(1)
  05c7528  ld 30, 144(1)
  05c752c  mtlr 0
  05c7530  ld 31, 152(1)
  05c7534  addi 1, 1, 160
  05c7538  blr
  05c753c  addi 4, 4, 12
  05c7540  addi 10, 10, -1
  05c7544  b 0x5c73d0
  05c7548  li 0, -1
  05c754c  lwz 29, 20(31)
  05c7550  clrldi 0, 0, 33
  05c7554  extsw 9, 29
  05c7558  sub 0, 0, 10
  05c755c  cmpd 7, 0, 9
  05c7560  bf 28, 0x5c73e0
  05c7564  li 3, -1
  05c7568  b 0x5c7520
