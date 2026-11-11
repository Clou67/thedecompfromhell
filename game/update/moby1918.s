# game/update/moby1918.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1918_002d92a0:   # 0x2d92a0, 0x228 bytes
  02d92a0  stdu 1, -64(1)
  02d92a4  stfd 30, 48(1)
  02d92a8  stfd 31, 56(1)
  02d92ac  cmpwi 3, 0
  02d92b0  li 8, 0
  02d92b4  bf 1, 0x2d94b8
  02d92b8  ori 9, 4, 0
  02d92bc  lis 4, 46
  02d92c0  lis 6, 149
  02d92c4  addi 10, 4, -28024
  02d92c8  ori 4, 7, 0
  02d92cc  addic 7, 6, 5056
  02d92d0  ori 6, 5, 0
  02d92d4  ori 5, 9, 0
  02d92d8  lfs 5, 0(10)
  02d92dc  lfs 4, 4(10)
  02d92e0  lfs 3, 8(10)
  02d92e4  lfs 2, 12(10)
  02d92e8  lfs 1, 16(10)
  02d92ec  lfs 10, 4(6)
  02d92f0  lfs 6, 324(7)
  02d92f4  lfs 11, 0(6)
  02d92f8  fsubs 10, 10, 6
  02d92fc  lfs 6, 320(7)
  02d9300  lfs 9, 8(6)
  02d9304  fsubs 11, 11, 6
  02d9308  lfs 6, 328(7)
  02d930c  fsubs 9, 9, 6
  02d9310  fmr 8, 5
  02d9314  fmuls 6, 10, 10
  02d9318  fmr 7, 8
  02d931c  fmadds 12, 11, 11, 6
  02d9320  fmr 6, 7
  02d9324  fmadds 12, 9, 9, 12
  02d9328  fsqrts 13, 12
  02d932c  fcmpu 0, 13, 6
  02d9330  bt 2, 0x2d9374
  02d9334  frsqrte 6, 12
  02d9338  fmuls 7, 12, 6
  02d933c  fmuls 8, 6, 4
  02d9340  fnmsubs 7, 7, 6, 3
  02d9344  fmadds 6, 7, 8, 6
  02d9348  fmuls 7, 12, 6
  02d934c  fmuls 8, 6, 4
  02d9350  fnmsubs 7, 7, 6, 3
  02d9354  fmadds 6, 7, 8, 6
  02d9358  fmuls 7, 12, 6
  02d935c  fmuls 8, 6, 4
  02d9360  fnmsubs 7, 7, 6, 3
  02d9364  fmadds 6, 7, 8, 6
  02d9368  fmuls 8, 11, 6
  02d936c  fmuls 7, 10, 6
  02d9370  fmuls 6, 9, 6
  02d9374  lfs 0, 4(5)
  02d9378  lfs 31, 0(5)
  02d937c  fmuls 9, 0, 0
  02d9380  lfs 13, 8(5)
  02d9384  fmr 11, 5
  02d9388  fmadds 12, 31, 31, 9
  02d938c  fmr 10, 11
  02d9390  fmadds 12, 13, 13, 12
  02d9394  fmr 9, 10
  02d9398  fsqrts 30, 12
  02d939c  fcmpu 0, 30, 9
  02d93a0  bt 2, 0x2d93e4
  02d93a4  frsqrte 9, 12
  02d93a8  fmuls 10, 12, 9
  02d93ac  fmuls 11, 9, 4
  02d93b0  fnmsubs 10, 10, 9, 3
  02d93b4  fmadds 9, 10, 11, 9
  02d93b8  fmuls 10, 12, 9
  02d93bc  fmuls 11, 9, 4
  02d93c0  fnmsubs 10, 10, 9, 3
  02d93c4  fmadds 9, 10, 11, 9
  02d93c8  fmuls 10, 12, 9
  02d93cc  fmuls 11, 9, 4
  02d93d0  fnmsubs 10, 10, 9, 3
  02d93d4  fmadds 9, 10, 11, 9
  02d93d8  fmuls 11, 9, 31
  02d93dc  fmuls 10, 9, 0
  02d93e0  fmuls 9, 9, 13
  02d93e4  fmr 12, 6
  02d93e8  fmuls 6, 7, 10
  02d93ec  fmadds 6, 8, 11, 6
  02d93f0  fmadds 6, 12, 9, 6
  02d93f4  fmuls 13, 6, 2
  02d93f8  fnmsubs 6, 13, 10, 7
  02d93fc  fnmsubs 7, 13, 11, 8
  02d9400  fnmsubs 8, 13, 9, 12
  02d9404  fmr 12, 5
  02d9408  fmuls 9, 6, 6
  02d940c  fmr 11, 12
  02d9410  fmadds 9, 7, 7, 9
  02d9414  fmr 10, 11
  02d9418  fmadds 9, 8, 8, 9
  02d941c  fsqrts 13, 9
  02d9420  fcmpu 0, 13, 10
  02d9424  bt 2, 0x2d9468
  02d9428  frsqrte 10, 9
  02d942c  fmuls 11, 9, 10
  02d9430  fmuls 12, 10, 4
  02d9434  fnmsubs 11, 11, 10, 3
  02d9438  fmadds 10, 11, 12, 10
  02d943c  fmuls 11, 9, 10
  02d9440  fmuls 12, 10, 4
  02d9444  fnmsubs 11, 11, 10, 3
  02d9448  fmadds 10, 11, 12, 10
  02d944c  fmuls 9, 9, 10
  02d9450  fmuls 11, 10, 4
  02d9454  fnmsubs 9, 9, 10, 3
  02d9458  fmadds 10, 9, 11, 10
  02d945c  fmuls 12, 10, 7
  02d9460  fmuls 11, 10, 6
  02d9464  fmuls 10, 10, 8
  02d9468  fmuls 6, 11, 11
  02d946c  fadds 7, 10, 3
  02d9470  addic 8, 8, 1
  02d9474  addic 6, 6, 12
  02d9478  cmpw 8, 3
  02d947c  fmadds 6, 12, 12, 6
  02d9480  addic 5, 5, 12
  02d9484  fmadds 6, 7, 7, 6
  02d9488  fsqrts 6, 6
  02d948c  fmuls 6, 6, 2
  02d9490  fdivs 7, 12, 6
  02d9494  fdivs 6, 11, 6
  02d9498  fadds 7, 7, 4
  02d949c  fmuls 7, 7, 1
  02d94a0  fadds 6, 6, 4
  02d94a4  stfs 7, 0(4)
  02d94a8  fmuls 6, 6, 1
  02d94ac  stfs 6, 4(4)
  02d94b0  addic 4, 4, 8
  02d94b4  bt 0, 0x2d92ec
  02d94b8  lfd 30, 48(1)
  02d94bc  lfd 31, 56(1)
  02d94c0  addi 1, 1, 64
  02d94c4  blr

M1918_002d94c8:   # 0x2d94c8, 0x150 bytes
  02d94c8  stdu 1, -144(1)
  02d94cc  mflr 0
  02d94d0  std 0, 160(1)
  02d94d4  std 31, 136(1)
  02d94d8  std 30, 128(1)
  02d94dc  std 29, 120(1)
  02d94e0  std 28, 112(1)
  02d94e4  li 3, 48
  02d94e8  bl 0x685c4
  02d94ec  nop
  02d94f0  ori 4, 3, 0
  02d94f4  li 3, 24
  02d94f8  bl 0x174f80
  02d94fc  nop
  02d9500  li 3, 0
  02d9504  li 4, 1
  02d9508  li 5, 2
  02d950c  li 6, 1
  02d9510  li 7, 32
  02d9514  bl 0x502ea8
  02d9518  nop
  02d951c  ori 4, 3, 0
  02d9520  li 3, 3
  02d9524  bl 0x174f80
  02d9528  nop
  02d952c  li 3, 0
  02d9530  li 4, 0
  02d9534  li 5, 0
  02d9538  li 6, 0
  02d953c  li 7, 0
  02d9540  li 8, 0
  02d9544  bl 0x502f08
  02d9548  nop
  02d954c  ori 4, 3, 0
  02d9550  li 3, 6
  02d9554  bl 0x174f80
  02d9558  nop
  02d955c  li 3, 0
  02d9560  lis 9, 0
  02d9564  li 4, 0
  02d9568  li 5, 1
  02d956c  li 6, 1
  02d9570  li 7, 1
  02d9574  li 8, 0
  02d9578  ori 9, 9, 65424
  02d957c  bl 0x502fd4
  02d9580  nop
  02d9584  ori 4, 3, 0
  02d9588  li 3, 26
  02d958c  bl 0x174f80
  02d9590  nop
  02d9594  bl 0x71170
  02d9598  nop
  02d959c  lis 31, 126
  02d95a0  lis 3, 126
  02d95a4  lis 5, 126
  02d95a8  lis 4, 268
  02d95ac  lis 30, 126
  02d95b0  lwz 6, -15344(31)
  02d95b4  addic 28, 4, -30848
  02d95b8  lis 29, 126
  02d95bc  lwz 4, -12920(3)
  02d95c0  lwz 8, -12924(5)
  02d95c4  extsw 3, 6
  02d95c8  ori 7, 28, 0
  02d95cc  lwz 5, -12928(30)
  02d95d0  ori 6, 8, 0
  02d95d4  bl 0x2d92a0
  02d95d8  lwz 3, -15344(31)
  02d95dc  lwz 4, -12928(30)
  02d95e0  ori 6, 28, 0
  02d95e4  lwz 5, -12916(29)
  02d95e8  extsw 3, 3
  02d95ec  li 7, 9
  02d95f0  bl 0x74604
  02d95f4  nop
  02d95f8  ld 0, 160(1)
  02d95fc  mtlr 0
  02d9600  ld 28, 112(1)
  02d9604  ld 29, 120(1)
  02d9608  ld 30, 128(1)
  02d960c  ld 31, 136(1)
  02d9610  addi 1, 1, 144
  02d9614  blr

UpdateMoby_1918:   # 0x2d9618, 0x60 bytes
  02d9618  stdu 1, -112(1)
  02d961c  mflr 0
  02d9620  std 0, 128(1)
  02d9624  lbz 4, 32(3)
  02d9628  cmpwi 4, 0
  02d962c  cmpwi 1, 4, 1
  02d9630  cmpwi 6, 4, -1
  02d9634  bt 1, 0x2d9640
  02d9638  bf 25, 0x2d9668
  02d963c  b 0x2d9648
  02d9640  bf 5, 0x2d9654
  02d9644  b 0x2d9668
  02d9648  li 4, 1
  02d964c  stb 4, 32(3)
  02d9650  b 0x2d9668
  02d9654  lis 5, 113
  02d9658  ori 4, 3, 0
  02d965c  addic 3, 5, -19328
  02d9660  bl 0x6d720
  02d9664  nop
  02d9668  ld 0, 128(1)
  02d966c  mtlr 0
  02d9670  addi 1, 1, 112
  02d9674  blr
