# game/update/moby1107.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1107_001c90b0:   # 0x1c90b0, 0x450 bytes
  01c90b0  stdu 1, -336(1)
  01c90b4  mflr 0
  01c90b8  std 0, 352(1)
  01c90bc  stfd 28, 304(1)
  01c90c0  stfd 29, 312(1)
  01c90c4  stfd 30, 320(1)
  01c90c8  stfd 31, 328(1)
  01c90cc  std 29, 280(1)
  01c90d0  li 3, 21
  01c90d4  lis 29, 29
  01c90d8  std 31, 296(1)
  01c90dc  std 30, 288(1)
  01c90e0  std 28, 272(1)
  01c90e4  std 27, 264(1)
  01c90e8  addi 29, 29, -28516
  01c90ec  bl 0x685c4
  01c90f0  nop
  01c90f4  std 3, 232(1)
  01c90f8  lis 9, 0
  01c90fc  li 3, 0
  01c9100  li 4, 0
  01c9104  li 5, 1
  01c9108  li 6, 1
  01c910c  li 7, 1
  01c9110  li 8, 0
  01c9114  ori 9, 9, 65424
  01c9118  bl 0x502fd4
  01c911c  nop
  01c9120  std 3, 240(1)
  01c9124  li 3, 0
  01c9128  li 4, 0
  01c912c  li 5, 0
  01c9130  li 6, 0
  01c9134  li 7, 0
  01c9138  li 8, 0
  01c913c  bl 0x502f08
  01c9140  nop
  01c9144  std 3, 224(1)
  01c9148  li 4, 2
  01c914c  li 3, 0
  01c9150  li 5, 0
  01c9154  li 6, 1
  01c9158  li 7, 128
  01c915c  bl 0x502ea8
  01c9160  nop
  01c9164  std 3, 248(1)
  01c9168  lis 3, 239
  01c916c  lfs 1, 0(29)
  01c9170  lfs 29, -1560(3)
  01c9174  fadds 1, 29, 1
  01c9178  stfs 1, -1560(3)
  01c917c  lfs 31, 4(29)
  01c9180  fcmpu 0, 1, 31
  01c9184  cror 6, 0, 2
  01c9188  bt 6, 0x1c9198
  01c918c  fsubs 1, 1, 31
  01c9190  lis 3, 239
  01c9194  stfs 1, -1560(3)
  01c9198  li 3, 1
  01c919c  lfs 30, 8(29)
  01c91a0  li 4, 5
  01c91a4  li 10, 2
  01c91a8  li 5, 1
  01c91ac  li 6, 3
  01c91b0  fadds 29, 29, 30
  01c91b4  li 7, 0
  01c91b8  li 8, 0
  01c91bc  li 9, 1
  01c91c0  bl 0x502f7c
  01c91c4  nop
  01c91c8  ori 4, 3, 0
  01c91cc  li 3, 22
  01c91d0  bl 0x174f80
  01c91d4  nop
  01c91d8  lis 31, 150
  01c91dc  li 4, 1
  01c91e0  addic 31, 31, 27352
  01c91e4  li 5, 1
  01c91e8  lwz 3, 8(31)
  01c91ec  srawi 3, 3, 13
  01c91f0  bl 0x502ffc
  01c91f4  nop
  01c91f8  ori 4, 3, 0
  01c91fc  li 3, 33
  01c9200  bl 0x174f80
  01c9204  nop
  01c9208  li 27, 1
  01c920c  lis 3, 239
  01c9210  lis 4, 118
  01c9214  lfs 2, -1556(3)
  01c9218  lfs 1, 16408(4)
  01c921c  fadds 1, 2, 1
  01c9220  fcmpu 0, 1, 31
  01c9224  stfs 1, -1556(3)
  01c9228  cror 6, 0, 2
  01c922c  bt 6, 0x1c923c
  01c9230  fsubs 1, 1, 31
  01c9234  lis 3, 239
  01c9238  stfs 1, -1556(3)
  01c923c  li 7, 0
  01c9240  ori 30, 7, 0
  01c9244  lis 3, 26214
  01c9248  addic 28, 7, 1
  01c924c  ori 3, 3, 26215
  01c9250  mulhw 3, 3, 28
  01c9254  lis 6, 239
  01c9258  sldi 4, 27, 8
  01c925c  sldi 5, 27, 6
  01c9260  addic 6, 6, 3536
  01c9264  addc 4, 4, 5
  01c9268  addc 5, 30, 6
  01c926c  srawi 3, 3, 3
  01c9270  addc 5, 5, 4
  01c9274  srwi 7, 3, 31
  01c9278  clrldi 5, 5, 32
  01c927c  addc 3, 3, 7
  01c9280  sldi 7, 3, 4
  01c9284  sldi 3, 3, 2
  01c9288  lfs 1, 0(5)
  01c928c  addc 3, 7, 3
  01c9290  stfs 1, 112(1)
  01c9294  lfs 1, 4(5)
  01c9298  subc 3, 28, 3
  01c929c  stfs 1, 116(1)
  01c92a0  sldi 3, 3, 4
  01c92a4  lfs 1, 8(5)
  01c92a8  lis 8, 64
  01c92ac  stfs 1, 120(1)
  01c92b0  lfs 1, 12(5)
  01c92b4  addc 5, 3, 6
  01c92b8  stfs 1, 124(1)
  01c92bc  addc 5, 5, 4
  01c92c0  addic 6, 6, -320
  01c92c4  clrldi 5, 5, 32
  01c92c8  addc 7, 30, 6
  01c92cc  addc 3, 3, 6
  01c92d0  addc 7, 7, 4
  01c92d4  addc 3, 3, 4
  01c92d8  lfs 1, 0(5)
  01c92dc  clrldi 7, 7, 32
  01c92e0  stfs 1, 128(1)
  01c92e4  lfs 1, 4(5)
  01c92e8  clrldi 3, 3, 32
  01c92ec  lis 4, 239
  01c92f0  stfs 1, 132(1)
  01c92f4  lfs 1, 8(5)
  01c92f8  slwi 6, 27, 1
  01c92fc  addic 4, 4, 3512
  01c9300  stfs 1, 136(1)
  01c9304  lfs 1, 12(5)
  01c9308  extsw 6, 6
  01c930c  ori 5, 1, 0
  01c9310  stfs 1, 140(1)
  01c9314  lfs 1, 0(7)
  01c9318  stfs 1, 144(1)
  01c931c  lfs 1, 4(7)
  01c9320  stfs 1, 148(1)
  01c9324  lfs 1, 8(7)
  01c9328  stfs 1, 152(1)
  01c932c  lfs 1, 12(7)
  01c9330  stfs 1, 156(1)
  01c9334  lfs 1, 0(3)
  01c9338  stfs 1, 160(1)
  01c933c  lfs 1, 4(3)
  01c9340  stfs 1, 164(1)
  01c9344  lfs 1, 8(3)
  01c9348  lhzx 7, 4, 6
  01c934c  stfs 1, 168(1)
  01c9350  ori 4, 8, 16448
  01c9354  lfs 1, 12(3)
  01c9358  li 8, 2
  01c935c  lis 3, 239
  01c9360  extsh 7, 7
  01c9364  stfs 1, 172(1)
  01c9368  addic 3, 3, 3510
  01c936c  mtctr 8
  01c9370  li 9, 0
  01c9374  li 8, 0
  01c9378  subc 9, 7, 9
  01c937c  subc 8, 8, 7
  01c9380  sradi 9, 9, 63
  01c9384  li 10, 64
  01c9388  and 8, 9, 8
  01c938c  li 11, 64
  01c9390  addc 7, 7, 8
  01c9394  subc 8, 10, 7
  01c9398  subc 9, 11, 7
  01c939c  sradi 8, 8, 63
  01c93a0  and 8, 8, 9
  01c93a4  lhzx 9, 3, 6
  01c93a8  addc 7, 7, 8
  01c93ac  ori 8, 4, 0
  01c93b0  rlwimi 8, 7, 24, 0, 7
  01c93b4  extsh 7, 9
  01c93b8  stw 8, 176(5)
  01c93bc  stw 8, 180(5)
  01c93c0  addic 5, 5, 8
  01c93c4  bdnz 0x1c9370
  01c93c8  addic 3, 27, -1
  01c93cc  cmpwi 1, 27, 9
  01c93d0  cmpwi 3, 0
  01c93d4  bf 2, 0x1c93ec
  01c93d8  lis 3, 8256
  01c93dc  ori 3, 3, 16448
  01c93e0  stw 3, 188(1)
  01c93e4  stw 3, 184(1)
  01c93e8  b 0x1c93f8
  01c93ec  bf 6, 0x1c93f8
  01c93f0  stw 4, 180(1)
  01c93f4  stw 4, 176(1)
  01c93f8  stfs 29, 192(1)
  01c93fc  stfs 2, 196(1)
  01c9400  fsubs 1, 29, 30
  01c9404  stfs 29, 200(1)
  01c9408  lis 4, 161
  01c940c  lfs 3, 12(29)
  01c9410  addic 3, 1, 112
  01c9414  addic 6, 4, 24396
  01c9418  stfs 2, 212(1)
  01c941c  fadds 28, 2, 3
  01c9420  li 4, 0
  01c9424  li 5, 0
  01c9428  li 7, 9
  01c942c  stfs 1, 208(1)
  01c9430  stfs 1, 216(1)
  01c9434  lwz 6, 28(6)
  01c9438  stfs 28, 204(1)
  01c943c  stfs 28, 220(1)
  01c9440  bl 0x72280
  01c9444  nop
  01c9448  cmpwi 28, 20
  01c944c  addic 30, 30, 16
  01c9450  fmr 2, 28
  01c9454  ori 7, 28, 0
  01c9458  bt 0, 0x1c9244
  01c945c  addic 27, 27, 1
  01c9460  fadds 29, 29, 30
  01c9464  cmpwi 27, 10
  01c9468  bt 0, 0x1c920c
  01c946c  lwz 3, 8(31)
  01c9470  li 4, 1
  01c9474  li 5, 0
  01c9478  srawi 3, 3, 13
  01c947c  bl 0x502ffc
  01c9480  nop
  01c9484  ori 4, 3, 0
  01c9488  li 3, 33
  01c948c  bl 0x174f80
  01c9490  nop
  01c9494  li 3, 1
  01c9498  li 4, 5
  01c949c  li 8, 0
  01c94a0  li 10, 2
  01c94a4  li 5, 96
  01c94a8  li 6, 3
  01c94ac  li 7, 0
  01c94b0  li 9, 1
  01c94b4  bl 0x502f7c
  01c94b8  nop
  01c94bc  ori 4, 3, 0
  01c94c0  li 3, 22
  01c94c4  bl 0x174f80
  01c94c8  nop
  01c94cc  ld 0, 352(1)
  01c94d0  mtlr 0
  01c94d4  lfd 28, 304(1)
  01c94d8  lfd 29, 312(1)
  01c94dc  lfd 30, 320(1)
  01c94e0  lfd 31, 328(1)
  01c94e4  ld 27, 264(1)
  01c94e8  ld 28, 272(1)
  01c94ec  ld 29, 280(1)
  01c94f0  ld 30, 288(1)
  01c94f4  ld 31, 296(1)
  01c94f8  addi 1, 1, 336
  01c94fc  blr

M1107_001c9500:   # 0x1c9500, 0x14 bytes
  01c9500  lis 3, 118
  01c9504  lis 4, 1
  01c9508  addic 3, 3, 16740
  01c950c  stw 4, 72(3)
  01c9510  blr

UpdateMoby_1107:   # 0x1c9520, 0x4 bytes
  01c9520  blr
