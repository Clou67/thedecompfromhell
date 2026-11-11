# sdk/libc/xfrprep.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Frprep:   # 0x5c91f4, 0x374 bytes
  05c91f4  stdu 1, -144(1)
  05c91f8  mflr 0
  05c91fc  std 29, 120(1)
  05c9200  std 0, 160(1)
  05c9204  lwz 11, 96(3)
  05c9208  mr 29, 3
  05c920c  ld 0, 80(3)
  05c9210  ld 9, 72(3)
  05c9214  sub 0, 11, 0
  05c9218  std 31, 136(1)
  05c921c  cmpld 7, 0, 9
  05c9220  std 28, 112(1)
  05c9224  std 30, 128(1)
  05c9228  mr 31, 3
  05c922c  bt 29, 0x5c9238
  05c9230  cmpld 7, 9, 11
  05c9234  bt 28, 0x5c9420
  05c9238  lhz 11, 0(31)
  05c923c  li 3, 0
  05c9240  clrlwi 9, 11, 16
  05c9244  rlwinm 0, 9, 0, 23, 23
  05c9248  cmpwi 7, 0, 0
  05c924c  bf 30, 0x5c9384
  05c9250  li 10, 0
  05c9254  ori 10, 10, 40961
  05c9258  and 0, 9, 10
  05c925c  cmpwi 7, 0, 1
  05c9260  bf 30, 0x5c94c0
  05c9264  rlwinm 0, 9, 0, 20, 20
  05c9268  cmpwi 7, 0, 0
  05c926c  bf 30, 0x5c93a8
  05c9270  lwz 10, 8(31)
  05c9274  addi 30, 29, 67
  05c9278  cmpw 7, 30, 10
  05c927c  bt 30, 0x5c94e0
  05c9280  lhz 11, 100(31)
  05c9284  stw 10, 16(31)
  05c9288  clrlwi 0, 11, 31
  05c928c  stw 10, 20(31)
  05c9290  cmpwi 7, 0, 0
  05c9294  stw 10, 24(31)
  05c9298  stw 10, 96(31)
  05c929c  bf 30, 0x5c93cc
  05c92a0  clrlwi 8, 11, 16
  05c92a4  rlwinm 0, 8, 0, 30, 30
  05c92a8  cmpwi 7, 0, 0
  05c92ac  bf 30, 0x5c9418
  05c92b0  lwz 3, 12(31)
  05c92b4  ld 0, 88(31)
  05c92b8  sub 9, 3, 10
  05c92bc  extsw 9, 9
  05c92c0  cmpld 7, 0, 9
  05c92c4  bt 28, 0x5c9448
  05c92c8  ori 0, 11, 2
  05c92cc  li 9, 0
  05c92d0  sth 0, 100(31)
  05c92d4  std 9, 88(31)
  05c92d8  sub 5, 3, 10
  05c92dc  lhz 3, 4(31)
  05c92e0  clrldi 4, 10, 32
  05c92e4  extsh 3, 3
  05c92e8  extsw 5, 5
  05c92ec  bl 0x5cfc44
  05c92f0  nop
  05c92f4  cmpwi 7, 3, 0
  05c92f8  bt- 28, 0x5c9554
  05c92fc  bt 30, 0x5c936c
  05c9300  lhz 10, 100(31)
  05c9304  lhz 0, 0(31)
  05c9308  rlwinm 9, 10, 0, 30, 30
  05c930c  ori 0, 0, 20480
  05c9310  cmpwi 7, 9, 0
  05c9314  sth 0, 0(31)
  05c9318  bf 30, 0x5c9478
  05c931c  lwz 0, 8(31)
  05c9320  ori 10, 10, 2
  05c9324  ld 8, 72(31)
  05c9328  extsw 11, 3
  05c932c  add 0, 0, 3
  05c9330  sth 10, 100(31)
  05c9334  clrldi 9, 0, 32
  05c9338  std 11, 80(31)
  05c933c  cmpld 7, 9, 8
  05c9340  stw 0, 96(31)
  05c9344  stw 8, 16(31)
  05c9348  stw 0, 20(31)
  05c934c  bf 28, 0x5c9420
  05c9350  lhz 3, 4(31)
  05c9354  li 5, 0
  05c9358  ld 4, 88(31)
  05c935c  extsh 3, 3
  05c9360  extsw 4, 4
  05c9364  bl 0x5cfb10
  05c9368  nop
  05c936c  lhz 0, 0(31)
  05c9370  li 3, 0
  05c9374  rlwinm 0, 0, 19, 1, 31
  05c9378  rotlwi 0, 0, 13
  05c937c  ori 0, 0, 16640
  05c9380  sth 0, 0(31)
  05c9384  ld 0, 160(1)
  05c9388  extsw 3, 3
  05c938c  ld 28, 112(1)
  05c9390  ld 29, 120(1)
  05c9394  mtlr 0
  05c9398  ld 30, 128(1)
  05c939c  ld 31, 136(1)
  05c93a0  addi 1, 1, 144
  05c93a4  blr
  05c93a8  lhz 11, 100(31)
  05c93ac  lwz 10, 8(31)
  05c93b0  clrlwi 0, 11, 31
  05c93b4  stw 10, 16(31)
  05c93b8  cmpwi 7, 0, 0
  05c93bc  stw 10, 20(31)
  05c93c0  stw 10, 24(31)
  05c93c4  stw 10, 96(31)
  05c93c8  bt 30, 0x5c92a0
  05c93cc  ld 4, 72(31)
  05c93d0  li 5, 0
  05c93d4  lhz 3, 4(31)
  05c93d8  sub 4, 4, 10
  05c93dc  extsh 3, 3
  05c93e0  extsw 4, 4
  05c93e4  bl 0x5cfb10
  05c93e8  nop
  05c93ec  lhz 11, 100(31)
  05c93f0  lwz 10, 8(31)
  05c93f4  rlwinm 9, 11, 0, 0, 30
  05c93f8  li 0, 0
  05c93fc  mr 11, 9
  05c9400  std 0, 88(31)
  05c9404  clrlwi 8, 11, 16
  05c9408  sth 9, 100(31)
  05c940c  rlwinm 0, 8, 0, 30, 30
  05c9410  cmpwi 7, 0, 0
  05c9414  bt 30, 0x5c92b0
  05c9418  lwz 3, 12(31)
  05c941c  b 0x5c92c8
  05c9420  ld 0, 160(1)
  05c9424  li 3, 1
  05c9428  ld 28, 112(1)
  05c942c  extsw 3, 3
  05c9430  ld 29, 120(1)
  05c9434  ld 30, 128(1)
  05c9438  mtlr 0
  05c943c  ld 31, 136(1)
  05c9440  addi 1, 1, 144
  05c9444  blr
  05c9448  rlwinm 0, 8, 0, 29, 29
  05c944c  cmpwi 7, 0, 0
  05c9450  bf 30, 0x5c92c8
  05c9454  lhz 3, 4(31)
  05c9458  li 4, 0
  05c945c  li 5, 0
  05c9460  extsh 3, 3
  05c9464  bl 0x5cfb10
  05c9468  nop
  05c946c  lwz 10, 8(31)
  05c9470  lwz 3, 12(31)
  05c9474  b 0x5c92d8
  05c9478  ld 0, 72(31)
  05c947c  extsw 11, 3
  05c9480  lwz 9, 8(31)
  05c9484  add 0, 3, 0
  05c9488  ld 28, 112(1)
  05c948c  add 9, 3, 9
  05c9490  ld 29, 120(1)
  05c9494  stw 0, 96(31)
  05c9498  li 3, 1
  05c949c  ld 0, 160(1)
  05c94a0  stw 9, 20(31)
  05c94a4  std 11, 80(31)
  05c94a8  mtlr 0
  05c94ac  extsw 3, 3
  05c94b0  ld 30, 128(1)
  05c94b4  ld 31, 136(1)
  05c94b8  addi 1, 1, 144
  05c94bc  blr
  05c94c0  extsh 9, 11
  05c94c4  li 3, -1
  05c94c8  srawi 9, 9, 31
  05c94cc  rlwinm 9, 9, 0, 0, 17
  05c94d0  addi 9, 9, 16896
  05c94d4  or 9, 9, 11
  05c94d8  sth 9, 0(31)
  05c94dc  b 0x5c9384
  05c94e0  lwz 9, -24716(2)
  05c94e4  lwz 28, 0(9)
  05c94e8  cmpwi 7, 28, 0
  05c94ec  bf 30, 0x5c9504
  05c94f0  addi 3, 29, 68
  05c94f4  mr 10, 30
  05c94f8  stw 30, 8(31)
  05c94fc  stw 3, 12(31)
  05c9500  b 0x5c9280
  05c9504  clrldi 3, 28, 32
  05c9508  bl 0x5d5838
  05c950c  nop
  05c9510  cmpwi 7, 3, 0
  05c9514  mr 8, 3
  05c9518  mr 10, 3
  05c951c  stw 3, 8(31)
  05c9520  bt 30, 0x5c94f0
  05c9524  lhz 0, 0(31)
  05c9528  clrldi 9, 3, 32
  05c952c  ld 11, 88(31)
  05c9530  add 3, 3, 28
  05c9534  ori 0, 0, 64
  05c9538  add 9, 9, 11
  05c953c  sth 0, 0(31)
  05c9540  std 9, 72(31)
  05c9544  stw 3, 12(31)
  05c9548  stw 8, 48(31)
  05c954c  stw 8, 44(31)
  05c9550  b 0x5c9280
  05c9554  lhz 0, 0(31)
  05c9558  li 3, -1
  05c955c  ori 0, 0, 16896
  05c9560  sth 0, 0(31)
  05c9564  b 0x5c9384
