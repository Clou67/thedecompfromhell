# game/update/moby605.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M605_003d919c:   # 0x3d919c, 0x14 bytes
  03d919c  lis 3, 133
  03d91a0  lis 4, 1
  03d91a4  addic 3, 3, 14076
  03d91a8  stw 4, 72(3)
  03d91ac  blr

UpdateMoby_605_MetalDetectorSpot:   # 0x3d91b8, 0x298 bytes
  03d91b8  stdu 1, -160(1)
  03d91bc  mflr 0
  03d91c0  std 0, 176(1)
  03d91c4  std 30, 144(1)
  03d91c8  lbz 4, 32(3)
  03d91cc  std 31, 152(1)
  03d91d0  lwz 30, 120(3)
  03d91d4  ori 31, 3, 0
  03d91d8  cmpwi 4, 0
  03d91dc  std 29, 136(1)
  03d91e0  cmpwi 1, 30, 0
  03d91e4  bf 2, 0x3d92e4
  03d91e8  bf 6, 0x3d91fc
  03d91ec  ori 3, 31, 0
  03d91f0  bl 0xefb38
  03d91f4  nop
  03d91f8  b 0x3d9434
  03d91fc  li 3, 255
  03d9200  lfs 1, 16(31)
  03d9204  li 4, 1
  03d9208  stb 3, 48(31)
  03d920c  stfs 1, 0(30)
  03d9210  lfs 1, 20(31)
  03d9214  stfs 1, 4(30)
  03d9218  lfs 1, 24(31)
  03d921c  lhz 3, 52(31)
  03d9220  stfs 1, 8(30)
  03d9224  lfs 1, 28(31)
  03d9228  ori 3, 3, 65
  03d922c  stfs 1, 12(30)
  03d9230  lbz 5, 188(31)
  03d9234  stb 4, 32(31)
  03d9238  cmpwi 5, 0
  03d923c  sth 3, 52(31)
  03d9240  bf 2, 0x3d92f0
  03d9244  lis 3, 151
  03d9248  lwz 3, -25488(3)
  03d924c  cmpwi 3, 20
  03d9250  bf 0, 0x3d92f0
  03d9254  lis 4, 269
  03d9258  lis 5, 161
  03d925c  slwi 3, 3, 4
  03d9260  addic 5, 5, -13372
  03d9264  extsw 3, 3
  03d9268  lwz 6, -20528(4)
  03d926c  srawi 7, 6, 1
  03d9270  clrlwi 8, 6, 31
  03d9274  addze 7, 7
  03d9278  addic 6, 6, 1
  03d927c  addc 5, 7, 5
  03d9280  li 7, 0
  03d9284  clrldi 5, 5, 32
  03d9288  subc 7, 7, 8
  03d928c  cntlzw 7, 7
  03d9290  lbzx 3, 5, 3
  03d9294  sldi 5, 7, 58
  03d9298  clrlwi 7, 3, 28
  03d929c  stw 6, -20528(4)
  03d92a0  rlwinm 3, 3, 28, 28, 31
  03d92a4  stb 6, 188(31)
  03d92a8  sradi 5, 5, 63
  03d92ac  lwz 4, 24(30)
  03d92b0  subc 3, 3, 7
  03d92b4  and 3, 5, 3
  03d92b8  addc 3, 7, 3
  03d92bc  sldi 5, 3, 2
  03d92c0  addc 3, 3, 5
  03d92c4  subc 3, 4, 3
  03d92c8  cmpwi 3, 0
  03d92cc  stw 3, 24(30)
  03d92d0  bt 1, 0x3d92f0
  03d92d4  ori 3, 31, 0
  03d92d8  bl 0xefb38
  03d92dc  nop
  03d92e0  b 0x3d9434
  03d92e4  lis 3, 269
  03d92e8  li 4, 0
  03d92ec  stw 4, -20528(3)
  03d92f0  lis 29, 151
  03d92f4  addic 29, 29, -25376
  03d92f8  lwz 3, 4240(29)
  03d92fc  cmpwi 3, 0
  03d9300  bt 2, 0x3d9334
  03d9304  lwz 4, 4280(29)
  03d9308  cmpwi 4, 27
  03d930c  bf 2, 0x3d9334
  03d9310  lwz 3, 120(3)
  03d9314  lfs 1, 16(3)
  03d9318  stfs 1, 112(1)
  03d931c  lfs 1, 20(3)
  03d9320  stfs 1, 116(1)
  03d9324  lfs 1, 24(3)
  03d9328  stfs 1, 120(1)
  03d932c  lfs 1, 28(3)
  03d9330  b 0x3d9354
  03d9334  lfs 1, 128(29)
  03d9338  lfs 2, 132(29)
  03d933c  stfs 1, 112(1)
  03d9340  lfs 1, 136(29)
  03d9344  stfs 2, 116(1)
  03d9348  lfs 2, 140(29)
  03d934c  stfs 1, 120(1)
  03d9350  fmr 1, 2
  03d9354  stfs 1, 124(1)
  03d9358  lwz 3, 16(30)
  03d935c  cmpwi 3, -1
  03d9360  bt 2, 0x3d9398
  03d9364  lis 4, 165
  03d9368  slwi 3, 3, 2
  03d936c  addic 4, 4, 7136
  03d9370  extsw 5, 3
  03d9374  addic 3, 1, 112
  03d9378  lwzx 5, 4, 5
  03d937c  addic 4, 5, 16
  03d9380  lwz 5, 0(5)
  03d9384  extsw 5, 5
  03d9388  bl 0x104e44
  03d938c  nop
  03d9390  cmpwi 3, 0
  03d9394  bf 2, 0x3d93d8
  03d9398  lwz 3, 20(30)
  03d939c  cmpwi 3, -1
  03d93a0  bt 2, 0x3d93c0
  03d93a4  addic 5, 1, 112
  03d93a8  extsw 4, 3
  03d93ac  ori 3, 5, 0
  03d93b0  bl 0x110b70
  03d93b4  nop
  03d93b8  cmpwi 3, 0
  03d93bc  bf 2, 0x3d93d8
  03d93c0  lwz 3, 16(30)
  03d93c4  cmpwi 3, -1
  03d93c8  bf 2, 0x3d9434
  03d93cc  lwz 3, 20(30)
  03d93d0  cmpwi 3, -1
  03d93d4  bf 2, 0x3d9434
  03d93d8  lfs 1, 20(31)
  03d93dc  lfs 2, 116(1)
  03d93e0  lfs 3, 16(31)
  03d93e4  fsubs 1, 1, 2
  03d93e8  lfs 2, 112(1)
  03d93ec  fsubs 2, 3, 2
  03d93f0  fmuls 1, 1, 1
  03d93f4  fmadds 1, 2, 2, 1
  03d93f8  lfs 2, 8260(29)
  03d93fc  fsqrts 1, 1
  03d9400  fcmpu 0, 1, 2
  03d9404  cror 6, 1, 2
  03d9408  bt 6, 0x3d9434
  03d940c  lis 3, 62
  03d9410  stfs 1, 8260(29)
  03d9414  stw 31, 8256(29)
  03d9418  addi 3, 3, -28240
  03d941c  lfs 2, 0(3)
  03d9420  fcmpu 0, 1, 2
  03d9424  cror 6, 1, 2
  03d9428  bt 6, 0x3d9434
  03d942c  li 3, 1
  03d9430  stb 3, 8264(29)
  03d9434  ld 0, 176(1)
  03d9438  mtlr 0
  03d943c  ld 29, 136(1)
  03d9440  ld 30, 144(1)
  03d9444  ld 31, 152(1)
  03d9448  addi 1, 1, 160
  03d944c  blr
