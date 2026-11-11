# sdk/libc/xstoll.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Stollx:   # 0x5da55c, 0x1f0 bytes
  05da55c  cmpwi 7, 4, 0
  05da560  mflr 0
  05da564  stdu 1, -176(1)
  05da568  std 26, 128(1)
  05da56c  std 27, 136(1)
  05da570  std 28, 144(1)
  05da574  std 29, 152(1)
  05da578  std 30, 160(1)
  05da57c  std 31, 168(1)
  05da580  std 0, 192(1)
  05da584  mr 26, 6
  05da588  mr 28, 3
  05da58c  mr 27, 6
  05da590  bt 30, 0x5da744
  05da594  lwz 11, -23976(2)
  05da598  mr 31, 3
  05da59c  lbz 10, 0(3)
  05da5a0  rlwinm 9, 10, 1, 23, 30
  05da5a4  lwz 11, 0(11)
  05da5a8  b 0x5da5b4
  05da5ac  lbzu 10, 1(31)
  05da5b0  rlwinm 9, 10, 1, 23, 30
  05da5b4  add 9, 9, 11
  05da5b8  clrldi 9, 9, 32
  05da5bc  lhz 0, 0(9)
  05da5c0  li 9, 324
  05da5c4  and 9, 0, 9
  05da5c8  cmpwi 7, 9, 0
  05da5cc  bf 30, 0x5da5ac
  05da5d0  extsb 29, 10
  05da5d4  cmpwi 7, 29, 45
  05da5d8  bt 30, 0x5da658
  05da5dc  cmpwi 7, 29, 43
  05da5e0  bt 30, 0x5da658
  05da5e4  clrldi 30, 4, 32
  05da5e8  extsw 5, 5
  05da5ec  clrldi 3, 31, 32
  05da5f0  mr 4, 30
  05da5f4  clrldi 6, 27, 32
  05da5f8  li 29, 43
  05da5fc  bl 0x5da754
  05da600  nop
  05da604  lwz 0, 0(30)
  05da608  cmpw 7, 31, 0
  05da60c  mr 9, 3
  05da610  bt 30, 0x5da688
  05da614  cmpw 7, 28, 0
  05da618  bt 30, 0x5da68c
  05da61c  cmpwi 7, 29, 43
  05da620  bt 30, 0x5da6f8
  05da624  cmpwi 7, 29, 45
  05da628  mr 3, 9
  05da62c  bt 30, 0x5da72c
  05da630  ld 0, 192(1)
  05da634  ld 26, 128(1)
  05da638  ld 27, 136(1)
  05da63c  mtlr 0
  05da640  ld 28, 144(1)
  05da644  ld 29, 152(1)
  05da648  ld 30, 160(1)
  05da64c  ld 31, 168(1)
  05da650  addi 1, 1, 176
  05da654  blr
  05da658  clrldi 30, 4, 32
  05da65c  addi 31, 31, 1
  05da660  extsw 5, 5
  05da664  clrldi 3, 31, 32
  05da668  mr 4, 30
  05da66c  clrldi 6, 27, 32
  05da670  bl 0x5da754
  05da674  nop
  05da678  lwz 0, 0(30)
  05da67c  cmpw 7, 31, 0
  05da680  mr 9, 3
  05da684  bf 30, 0x5da614
  05da688  stw 28, 0(30)
  05da68c  cmpdi 7, 9, 0
  05da690  bt 30, 0x5da61c
  05da694  bl 0x5d5904
  05da698  nop
  05da69c  lis 0, -32767
  05da6a0  cmpwi 7, 27, 0
  05da6a4  ori 0, 0, 28
  05da6a8  stw 0, 0(3)
  05da6ac  bt 30, 0x5da6b8
  05da6b0  li 0, 1
  05da6b4  stw 0, 0(26)
  05da6b8  cmpwi 7, 29, 45
  05da6bc  li 3, -1
  05da6c0  rldicr 3, 3, 0, 0
  05da6c4  bt- 30, 0x5da630
  05da6c8  ld 0, 192(1)
  05da6cc  li 3, -1
  05da6d0  ld 26, 128(1)
  05da6d4  clrldi 3, 3, 1
  05da6d8  ld 27, 136(1)
  05da6dc  ld 28, 144(1)
  05da6e0  mtlr 0
  05da6e4  ld 29, 152(1)
  05da6e8  ld 30, 160(1)
  05da6ec  ld 31, 168(1)
  05da6f0  addi 1, 1, 176
  05da6f4  blr
  05da6f8  cmpdi 7, 9, 0
  05da6fc  mr 3, 9
  05da700  bt 28, 0x5da694
  05da704  ld 0, 192(1)
  05da708  ld 26, 128(1)
  05da70c  ld 27, 136(1)
  05da710  mtlr 0
  05da714  ld 28, 144(1)
  05da718  ld 29, 152(1)
  05da71c  ld 30, 160(1)
  05da720  ld 31, 168(1)
  05da724  addi 1, 1, 176
  05da728  blr
  05da72c  li 0, -1
  05da730  neg 3, 9
  05da734  rldicr 0, 0, 0, 0
  05da738  cmpld 7, 9, 0
  05da73c  bf 29, 0x5da630
  05da740  b 0x5da694
  05da744  addi 4, 1, 112
  05da748  b 0x5da594

FUN_005da74c:   # 0x5da74c, 0x8 bytes
  05da74c  li 6, 0
  05da750  b 0x5da55c
