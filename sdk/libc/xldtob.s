# sdk/libc/xldtob.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Ldtob:   # 0x5d8ba8, 0x9b4 bytes
  05d8ba8  mfcr 12
  05d8bac  stdu 1, -480(1)
  05d8bb0  std 27, 424(1)
  05d8bb4  mr 27, 3
  05d8bb8  stfd 30, 464(1)
  05d8bbc  std 29, 440(1)
  05d8bc0  extsb 29, 4
  05d8bc4  stfd 31, 472(1)
  05d8bc8  std 24, 400(1)
  05d8bcc  cmpwi 7, 29, 97
  05d8bd0  std 15, 328(1)
  05d8bd4  std 16, 336(1)
  05d8bd8  std 17, 344(1)
  05d8bdc  std 18, 352(1)
  05d8be0  std 19, 360(1)
  05d8be4  std 20, 368(1)
  05d8be8  std 21, 376(1)
  05d8bec  std 22, 384(1)
  05d8bf0  std 23, 392(1)
  05d8bf4  std 25, 408(1)
  05d8bf8  std 26, 416(1)
  05d8bfc  std 28, 432(1)
  05d8c00  std 30, 448(1)
  05d8c04  std 31, 456(1)
  05d8c08  mr 24, 4
  05d8c0c  stw 12, 488(1)
  05d8c10  mflr 0
  05d8c14  std 0, 496(1)
  05d8c18  lfd 1, 0(27)
  05d8c1c  stfd 1, 120(1)
  05d8c20  bt 30, 0x5d8c3c
  05d8c24  cmpwi 7, 29, 65
  05d8c28  bt 30, 0x5d8c3c
  05d8c2c  lwz 0, 68(27)
  05d8c30  cmpwi 7, 0, 0
  05d8c34  bt 28, 0x5d8d64
  05d8c38  bt 30, 0x5d8d48
  05d8c3c  clrldi 22, 3, 32
  05d8c40  addi 3, 1, 112
  05d8c44  mr 4, 22
  05d8c48  bl 0x5d955c
  05d8c4c  nop
  05d8c50  extsh 3, 3
  05d8c54  cmpwi 7, 3, 2
  05d8c58  bt 30, 0x5d8d14
  05d8c5c  cmpwi 7, 3, 0
  05d8c60  bf 29, 0x5d8d70
  05d8c64  cmpwi 7, 29, 97
  05d8c68  lwz 3, 40(27)
  05d8c6c  bt 30, 0x5d8c90
  05d8c70  cmpwi 7, 29, 101
  05d8c74  bt 30, 0x5d8c90
  05d8c78  cmpwi 7, 29, 102
  05d8c7c  bt 30, 0x5d8c90
  05d8c80  cmpwi 7, 29, 103
  05d8c84  bt 30, 0x5d8c90
  05d8c88  lwz 4, -24048(2)
  05d8c8c  b 0x5d8c94
  05d8c90  lwz 4, -24044(2)
  05d8c94  li 0, 3
  05d8c98  clrldi 3, 3, 32
  05d8c9c  clrldi 4, 4, 32
  05d8ca0  li 5, 3
  05d8ca4  stw 0, 52(27)
  05d8ca8  bl 0x5c5ad0
  05d8cac  nop
  05d8cb0  ld 0, 496(1)
  05d8cb4  lwz 12, 488(1)
  05d8cb8  ld 15, 328(1)
  05d8cbc  mtlr 0
  05d8cc0  ld 16, 336(1)
  05d8cc4  mtocrf 8, 12
  05d8cc8  ld 17, 344(1)
  05d8ccc  ld 18, 352(1)
  05d8cd0  ld 19, 360(1)
  05d8cd4  ld 20, 368(1)
  05d8cd8  ld 21, 376(1)
  05d8cdc  ld 22, 384(1)
  05d8ce0  ld 23, 392(1)
  05d8ce4  ld 24, 400(1)
  05d8ce8  ld 25, 408(1)
  05d8cec  ld 26, 416(1)
  05d8cf0  ld 27, 424(1)
  05d8cf4  ld 28, 432(1)
  05d8cf8  ld 29, 440(1)
  05d8cfc  ld 30, 448(1)
  05d8d00  ld 31, 456(1)
  05d8d04  lfd 30, 464(1)
  05d8d08  lfd 31, 472(1)
  05d8d0c  addi 1, 1, 480
  05d8d10  blr
  05d8d14  cmpwi 7, 29, 97
  05d8d18  lwz 3, 40(27)
  05d8d1c  bt 30, 0x5d8d40
  05d8d20  cmpwi 7, 29, 101
  05d8d24  bt 30, 0x5d8d40
  05d8d28  cmpwi 7, 29, 102
  05d8d2c  bt 30, 0x5d8d40
  05d8d30  cmpwi 7, 29, 103
  05d8d34  bt 30, 0x5d8d40
  05d8d38  lwz 4, -24056(2)
  05d8d3c  b 0x5d8c94
  05d8d40  lwz 4, -24052(2)
  05d8d44  b 0x5d8c94
  05d8d48  cmpwi 7, 29, 103
  05d8d4c  bt 30, 0x5d8d58
  05d8d50  cmpwi 7, 29, 71
  05d8d54  bf 30, 0x5d8c3c
  05d8d58  li 0, 1
  05d8d5c  stw 0, 68(27)
  05d8d60  b 0x5d8c3c
  05d8d64  li 0, 6
  05d8d68  stw 0, 68(27)
  05d8d6c  b 0x5d8c3c
  05d8d70  cmpwi 7, 29, 97
  05d8d74  bt 30, 0x5d9418
  05d8d78  cmpwi 7, 29, 65
  05d8d7c  bt 30, 0x5d9454
  05d8d80  cmpwi 7, 3, 0
  05d8d84  bf 30, 0x5d8db8
  05d8d88  li 7, 0
  05d8d8c  addi 5, 1, 184
  05d8d90  li 28, 0
  05d8d94  sth 3, 112(1)
  05d8d98  mr 3, 22
  05d8d9c  extsb 4, 24
  05d8da0  clrldi 5, 5, 32
  05d8da4  extsh 6, 28
  05d8da8  extsh 7, 7
  05d8dac  bl 0x5db060
  05d8db0  nop
  05d8db4  b 0x5d8cb0
  05d8db8  cmpwi 7, 29, 97
  05d8dbc  bt 30, 0x5d9474
  05d8dc0  cmpwi 7, 29, 65
  05d8dc4  bt 30, 0x5d9140
  05d8dc8  lfd 30, -24032(2)
  05d8dcc  lfd 1, 120(1)
  05d8dd0  fcmpu 7, 1, 30
  05d8dd4  bt 28, 0x5d94dc
  05d8dd8  addi 3, 1, 168
  05d8ddc  bl 0x5d60b0
  05d8de0  nop
  05d8de4  lhz 9, 112(1)
  05d8de8  extsh 9, 9
  05d8dec  lis 0, 5368
  05d8df0  mulli 9, 9, 30103
  05d8df4  ori 0, 0, 46473
  05d8df8  srawi 11, 9, 31
  05d8dfc  mulhw 9, 9, 0
  05d8e00  srawi 9, 9, 13
  05d8e04  sub 9, 9, 11
  05d8e08  addi 9, 9, -4
  05d8e0c  extsh 0, 9
  05d8e10  sth 9, 112(1)
  05d8e14  cmpwi 7, 0, 0
  05d8e18  bt 28, 0x5d9500
  05d8e1c  clrlwi 0, 9, 16
  05d8e20  cmpwi 7, 0, 0
  05d8e24  bt 30, 0x5d8e68
  05d8e28  rlwinm 0, 9, 0, 0, 29
  05d8e2c  extsh 6, 0
  05d8e30  sth 0, 112(1)
  05d8e34  cmpwi 7, 6, 0
  05d8e38  bf 29, 0x5d8e68
  05d8e3c  neg 6, 6
  05d8e40  ld 4, 168(1)
  05d8e44  addi 3, 1, 256
  05d8e48  ld 5, 176(1)
  05d8e4c  extsw 6, 6
  05d8e50  bl 0x5d6450
  05d8e54  nop
  05d8e58  lwz 0, 256(1)
  05d8e5c  ld 9, 264(1)
  05d8e60  stw 0, 168(1)
  05d8e64  std 9, 176(1)
  05d8e68  cmpwi 7, 29, 102
  05d8e6c  lwz 0, 68(27)
  05d8e70  bt 30, 0x5d9488
  05d8e74  cmpwi 7, 29, 70
  05d8e78  li 9, 6
  05d8e7c  bt 30, 0x5d9488
  05d8e80  add 26, 9, 0
  05d8e84  cmpwi 7, 26, 19
  05d8e88  bf 29, 0x5d8e90
  05d8e8c  li 26, 19
  05d8e90  addi 16, 1, 116
  05d8e94  ld 3, 168(1)
  05d8e98  ld 4, 176(1)
  05d8e9c  addi 15, 1, 185
  05d8ea0  mr 5, 16
  05d8ea4  mr 28, 15
  05d8ea8  bl 0x5d6668
  05d8eac  nop
  05d8eb0  cmpwi 7, 26, 0
  05d8eb4  fmr 31, 1
  05d8eb8  li 0, 48
  05d8ebc  stb 0, 184(1)
  05d8ec0  bf 29, 0x5d9010
  05d8ec4  fcmpu 7, 1, 30
  05d8ec8  addi 15, 1, 185
  05d8ecc  mr 28, 15
  05d8ed0  bf 29, 0x5d9010
  05d8ed4  lis 21, -16708
  05d8ed8  mr 28, 15
  05d8edc  ori 21, 21, 8192
  05d8ee0  li 17, 16409
  05d8ee4  sldi 21, 21, 32
  05d8ee8  addi 20, 1, 152
  05d8eec  addi 19, 1, 272
  05d8ef0  addi 18, 1, 288
  05d8ef4  addi 25, 1, 128
  05d8ef8  li 23, 48
  05d8efc  fctiwz 0, 31
  05d8f00  addi 9, 1, 224
  05d8f04  addi 26, 26, -8
  05d8f08  cmpwi 4, 26, 0
  05d8f0c  stfiwx 0, 0, 9
  05d8f10  lwz 30, 224(1)
  05d8f14  bf 17, 0x5d8fac
  05d8f18  extsw 0, 30
  05d8f1c  clrldi 3, 20, 32
  05d8f20  std 0, 304(1)
  05d8f24  lfd 0, 304(1)
  05d8f28  fcfid 1, 0
  05d8f2c  stw 17, 136(1)
  05d8f30  std 21, 144(1)
  05d8f34  bl 0x5d60b0
  05d8f38  nop
  05d8f3c  ld 4, 168(1)
  05d8f40  ld 5, 176(1)
  05d8f44  clrldi 3, 19, 32
  05d8f48  ld 6, 152(1)
  05d8f4c  ld 7, 160(1)
  05d8f50  bl 0x5d6278
  05d8f54  nop
  05d8f58  lwz 0, 272(1)
  05d8f5c  ld 9, 280(1)
  05d8f60  stw 0, 168(1)
  05d8f64  mr 5, 9
  05d8f68  ld 4, 168(1)
  05d8f6c  clrldi 3, 18, 32
  05d8f70  ld 6, 136(1)
  05d8f74  ld 7, 144(1)
  05d8f78  std 9, 176(1)
  05d8f7c  bl 0x5d615c
  05d8f80  nop
  05d8f84  lwz 0, 288(1)
  05d8f88  ld 9, 296(1)
  05d8f8c  stw 0, 168(1)
  05d8f90  mr 4, 9
  05d8f94  ld 3, 168(1)
  05d8f98  clrldi 5, 16, 32
  05d8f9c  std 9, 176(1)
  05d8fa0  bl 0x5d6668
  05d8fa4  nop
  05d8fa8  fmr 31, 1
  05d8fac  cmpwi 7, 30, 0
  05d8fb0  addi 10, 28, 8
  05d8fb4  li 9, 7
  05d8fb8  bf 29, 0x5d93b4
  05d8fbc  li 31, 7
  05d8fc0  extsw 4, 30
  05d8fc4  clrldi 3, 25, 32
  05d8fc8  li 5, 10
  05d8fcc  bl 0x5dad5c
  05d8fd0  nop
  05d8fd4  add 10, 31, 28
  05d8fd8  lwz 9, 132(1)
  05d8fdc  clrldi 11, 10, 32
  05d8fe0  addi 9, 9, 48
  05d8fe4  cmpwi 6, 31, 0
  05d8fe8  stb 9, 0(11)
  05d8fec  lwz 30, 128(1)
  05d8ff0  cmpwi 7, 30, 0
  05d8ff4  bf 29, 0x5d93a8
  05d8ff8  addi 31, 31, -1
  05d8ffc  bf 26, 0x5d8fc0
  05d9000  addi 28, 10, 8
  05d9004  bf 17, 0x5d9010
  05d9008  fcmpu 7, 31, 30
  05d900c  bt 29, 0x5d8efc
  05d9010  lbz 0, 185(1)
  05d9014  addi 6, 1, 184
  05d9018  lhz 7, 112(1)
  05d901c  mr 5, 15
  05d9020  cmpwi 7, 0, 48
  05d9024  addi 9, 7, 7
  05d9028  sub 11, 28, 6
  05d902c  sth 9, 112(1)
  05d9030  addi 10, 11, -1
  05d9034  mr 7, 9
  05d9038  bf 30, 0x5d9064
  05d903c  addi 5, 5, 1
  05d9040  clrldi 9, 5, 32
  05d9044  lbz 0, 0(9)
  05d9048  cmpwi 7, 0, 48
  05d904c  bt 30, 0x5d903c
  05d9050  add 0, 7, 15
  05d9054  add 9, 11, 6
  05d9058  sub 0, 0, 5
  05d905c  sub 10, 9, 5
  05d9060  sth 0, 112(1)
  05d9064  cmpwi 7, 29, 102
  05d9068  lwz 3, 68(27)
  05d906c  bt 30, 0x5d947c
  05d9070  cmpwi 7, 29, 70
  05d9074  bt 30, 0x5d947c
  05d9078  cmpwi 7, 29, 101
  05d907c  li 9, 1
  05d9080  bt 30, 0x5d9094
  05d9084  xori 9, 24, 69
  05d9088  clrldi 9, 9, 56
  05d908c  addi 9, 9, -1
  05d9090  rldicl 9, 9, 1, 63
  05d9094  add 28, 3, 9
  05d9098  extsh 0, 28
  05d909c  cmpwi 7, 0, 17
  05d90a0  bf 29, 0x5d9498
  05d90a4  li 28, 17
  05d90a8  li 9, 17
  05d90ac  li 7, 16
  05d90b0  li 8, 16
  05d90b4  cmpw 7, 9, 10
  05d90b8  bf 28, 0x5d937c
  05d90bc  extsh 9, 28
  05d90c0  li 11, 57
  05d90c4  add 9, 9, 5
  05d90c8  clrldi 9, 9, 32
  05d90cc  lbz 0, 0(9)
  05d90d0  extsb 0, 0
  05d90d4  cmpwi 7, 0, 52
  05d90d8  bf 29, 0x5d937c
  05d90dc  add 9, 8, 5
  05d90e0  extsb 8, 11
  05d90e4  clrldi 11, 9, 32
  05d90e8  lbz 0, 0(11)
  05d90ec  extsb 0, 0
  05d90f0  cmpw 7, 0, 8
  05d90f4  bf 30, 0x5d9128
  05d90f8  add 9, 7, 5
  05d90fc  li 10, 0
  05d9100  addi 9, 9, -1
  05d9104  clrldi 11, 9, 32
  05d9108  addi 10, 10, 1
  05d910c  addi 9, 9, -1
  05d9110  lbz 0, 0(11)
  05d9114  extsb 0, 0
  05d9118  cmpw 7, 0, 8
  05d911c  bt 30, 0x5d9104
  05d9120  sub 7, 7, 10
  05d9124  sub 28, 28, 10
  05d9128  cmpwi 7, 8, 57
  05d912c  bt 30, 0x5d94b0
  05d9130  cmpwi 7, 7, 0
  05d9134  bt 28, 0x5d938c
  05d9138  lhz 7, 112(1)
  05d913c  b 0x5d8d98
  05d9140  lwz 23, -24036(2)
  05d9144  lwz 9, 68(27)
  05d9148  li 28, 33
  05d914c  li 25, 33
  05d9150  cmpwi 7, 9, 0
  05d9154  li 30, 34
  05d9158  bt 28, 0x5d9168
  05d915c  addi 28, 9, 1
  05d9160  extsh 25, 28
  05d9164  addi 30, 25, 1
  05d9168  lfd 30, -24032(2)
  05d916c  lfd 0, 120(1)
  05d9170  fcmpu 7, 0, 30
  05d9174  bt 28, 0x5d94d0
  05d9178  lfd 0, 0(27)
  05d917c  addi 26, 1, 120
  05d9180  stfd 0, 120(1)
  05d9184  li 4, -3
  05d9188  mr 3, 26
  05d918c  addi 15, 1, 185
  05d9190  bl 0x5d8b80
  05d9194  nop
  05d9198  lhz 7, 112(1)
  05d919c  cmpwi 7, 30, 0
  05d91a0  addi 9, 7, -1
  05d91a4  li 0, 0
  05d91a8  sth 9, 112(1)
  05d91ac  stb 0, 184(1)
  05d91b0  mr 31, 15
  05d91b4  bf 29, 0x5d926c
  05d91b8  lfd 0, 120(1)
  05d91bc  mr 31, 15
  05d91c0  fcmpu 7, 0, 30
  05d91c4  bf 29, 0x5d926c
  05d91c8  li 29, 0
  05d91cc  mr 31, 15
  05d91d0  clrldi 3, 26, 32
  05d91d4  li 4, 28
  05d91d8  addi 30, 30, -7
  05d91dc  bl 0x5d8b80
  05d91e0  nop
  05d91e4  lfd 1, 120(1)
  05d91e8  fctiwz 0, 1
  05d91ec  addi 9, 1, 224
  05d91f0  cmpwi 6, 30, 0
  05d91f4  stfiwx 0, 0, 9
  05d91f8  lwz 11, 224(1)
  05d91fc  bf 25, 0x5d9218
  05d9200  extsw 0, 11
  05d9204  std 0, 304(1)
  05d9208  lfd 13, 304(1)
  05d920c  fcfid 0, 13
  05d9210  fsub 1, 1, 0
  05d9214  stfd 1, 120(1)
  05d9218  cmpwi 7, 11, 0
  05d921c  addi 10, 31, 7
  05d9220  li 9, 6
  05d9224  bf 29, 0x5d93ec
  05d9228  li 0, 7
  05d922c  li 8, 6
  05d9230  mtctr 0
  05d9234  add 10, 31, 8
  05d9238  clrlwi 0, 11, 28
  05d923c  clrldi 9, 10, 32
  05d9240  srawi 11, 11, 4
  05d9244  cmpwi 11, 0
  05d9248  stb 0, 0(9)
  05d924c  bf 1, 0x5d93e0
  05d9250  addi 8, 8, -1
  05d9254  bdnz 0x5d9234
  05d9258  addi 31, 10, 7
  05d925c  bf 25, 0x5d926c
  05d9260  lfd 0, 120(1)
  05d9264  fcmpu 7, 0, 30
  05d9268  bt 29, 0x5d91d0
  05d926c  addi 6, 1, 184
  05d9270  sub 9, 31, 6
  05d9274  addi 9, 9, -1
  05d9278  cmpw 7, 9, 25
  05d927c  bf 28, 0x5d9284
  05d9280  mr 28, 9
  05d9284  extsh 7, 28
  05d9288  mr 5, 15
  05d928c  cmpwi 7, 7, 0
  05d9290  bt 28, 0x5d9360
  05d9294  cmpw 7, 9, 7
  05d9298  bf 29, 0x5d9384
  05d929c  add 9, 7, 6
  05d92a0  li 10, 15
  05d92a4  clrldi 9, 9, 32
  05d92a8  lbz 0, 1(9)
  05d92ac  extsb 0, 0
  05d92b0  cmpwi 7, 0, 7
  05d92b4  bf 29, 0x5d9384
  05d92b8  addi 11, 7, -1
  05d92bc  extsb 8, 10
  05d92c0  add 9, 11, 15
  05d92c4  clrldi 10, 9, 32
  05d92c8  lbz 0, 0(10)
  05d92cc  extsb 0, 0
  05d92d0  cmpw 7, 0, 8
  05d92d4  bf 30, 0x5d9308
  05d92d8  add 9, 7, 15
  05d92dc  mr 11, 7
  05d92e0  addi 9, 9, -2
  05d92e4  clrldi 10, 9, 32
  05d92e8  addi 11, 11, -1
  05d92ec  addi 9, 9, -1
  05d92f0  lbz 0, 0(10)
  05d92f4  extsb 0, 0
  05d92f8  cmpw 7, 0, 8
  05d92fc  bt 30, 0x5d92e4
  05d9300  mr 28, 11
  05d9304  addi 11, 11, -1
  05d9308  cmpwi 7, 8, 15
  05d930c  bt 30, 0x5d94c0
  05d9310  cmpwi 7, 11, 0
  05d9314  mr 5, 15
  05d9318  bt 28, 0x5d94e8
  05d931c  extsh 7, 28
  05d9320  addi 0, 7, -1
  05d9324  cmpwi 7, 0, 0
  05d9328  bt 28, 0x5d9360
  05d932c  add 9, 7, 5
  05d9330  clrldi 0, 7, 32
  05d9334  addi 10, 9, -1
  05d9338  mtctr 0
  05d933c  clrldi 9, 10, 32
  05d9340  addi 10, 10, -1
  05d9344  lbz 11, 0(9)
  05d9348  extsb 11, 11
  05d934c  add 11, 23, 11
  05d9350  clrldi 11, 11, 32
  05d9354  lbz 0, 0(11)
  05d9358  stb 0, 0(9)
  05d935c  bdnz 0x5d933c
  05d9360  lwz 0, 68(27)
  05d9364  cmpwi 7, 0, 0
  05d9368  bf 28, 0x5d9138
  05d936c  addi 0, 7, -1
  05d9370  lhz 7, 112(1)
  05d9374  stw 0, 68(27)
  05d9378  b 0x5d8d98
  05d937c  li 11, 48
  05d9380  b 0x5d90dc
  05d9384  li 10, 0
  05d9388  b 0x5d92b8
  05d938c  lhz 7, 112(1)
  05d9390  addi 5, 5, -1
  05d9394  addi 28, 28, 1
  05d9398  addi 0, 7, 1
  05d939c  mr 7, 0
  05d93a0  sth 0, 112(1)
  05d93a4  b 0x5d8d98
  05d93a8  addi 9, 31, -1
  05d93ac  cmpwi 7, 9, 0
  05d93b0  bt- 28, 0x5d9000
  05d93b4  addi 0, 9, -1
  05d93b8  addi 9, 9, 1
  05d93bc  cmpwi 7, 0, -1
  05d93c0  clrldi 9, 9, 32
  05d93c4  mtctr 9
  05d93c8  bt- 28, 0x5d9550
  05d93cc  addi 10, 10, -1
  05d93d0  clrldi 9, 10, 32
  05d93d4  stb 23, 0(9)
  05d93d8  bdnz 0x5d93cc
  05d93dc  b 0x5d9000
  05d93e0  addi 9, 8, -1
  05d93e4  cmpwi 7, 9, 0
  05d93e8  bt- 28, 0x5d9258
  05d93ec  addi 0, 9, -1
  05d93f0  addi 9, 9, 1
  05d93f4  cmpwi 7, 0, -1
  05d93f8  clrldi 9, 9, 32
  05d93fc  mtctr 9
  05d9400  bt- 28, 0x5d9544
  05d9404  addi 10, 10, -1
  05d9408  clrldi 9, 10, 32
  05d940c  stb 29, 0(9)
  05d9410  bdnz 0x5d9404
  05d9414  b 0x5d9258
  05d9418  lwz 9, 40(27)
  05d941c  li 0, 48
  05d9420  li 8, 120
  05d9424  clrldi 11, 9, 32
  05d9428  addi 10, 9, 1
  05d942c  stb 0, 0(11)
  05d9430  stw 10, 40(27)
  05d9434  clrldi 9, 10, 32
  05d9438  addi 0, 10, 1
  05d943c  stb 8, 0(9)
  05d9440  lwz 11, 44(27)
  05d9444  stw 0, 40(27)
  05d9448  addi 11, 11, 2
  05d944c  stw 11, 44(27)
  05d9450  b 0x5d8d80
  05d9454  lwz 9, 40(27)
  05d9458  li 0, 48
  05d945c  li 8, 88
  05d9460  clrldi 11, 9, 32
  05d9464  addi 10, 9, 1
  05d9468  stb 0, 0(11)
  05d946c  stw 10, 40(27)
  05d9470  b 0x5d9434
  05d9474  lwz 23, -24040(2)
  05d9478  b 0x5d9144
  05d947c  lhz 7, 112(1)
  05d9480  addi 9, 7, 1
  05d9484  b 0x5d9094
  05d9488  lhz 9, 112(1)
  05d948c  extsh 9, 9
  05d9490  addi 9, 9, 10
  05d9494  b 0x5d8e80
  05d9498  cmpwi 7, 0, 0
  05d949c  bt 28, 0x5d9138
  05d94a0  mr 9, 0
  05d94a4  addi 7, 9, -1
  05d94a8  mr 8, 7
  05d94ac  b 0x5d90b4
  05d94b0  lbz 9, 0(11)
  05d94b4  addi 9, 9, 1
  05d94b8  stb 9, 0(11)
  05d94bc  b 0x5d9130
  05d94c0  lbz 9, 0(10)
  05d94c4  addi 9, 9, 1
  05d94c8  stb 9, 0(10)
  05d94cc  b 0x5d9310
  05d94d0  lfd 0, 0(27)
  05d94d4  fneg 0, 0
  05d94d8  b 0x5d917c
  05d94dc  fneg 1, 1
  05d94e0  stfd 1, 120(1)
  05d94e4  b 0x5d8dd8
  05d94e8  lhz 7, 112(1)
  05d94ec  mr 5, 6
  05d94f0  addi 28, 28, 1
  05d94f4  addi 0, 7, 4
  05d94f8  sth 0, 112(1)
  05d94fc  b 0x5d931c
  05d9500  subfic 0, 0, 3
  05d9504  ld 4, 168(1)
  05d9508  addi 3, 1, 240
  05d950c  ld 5, 176(1)
  05d9510  rlwinm 0, 0, 0, 0, 29
  05d9514  neg 0, 0
  05d9518  extsh 6, 0
  05d951c  sth 0, 112(1)
  05d9520  neg 6, 6
  05d9524  extsw 6, 6
  05d9528  bl 0x5d6450
  05d952c  nop
  05d9530  lwz 0, 240(1)
  05d9534  ld 9, 248(1)
  05d9538  stw 0, 168(1)
  05d953c  std 9, 176(1)
  05d9540  b 0x5d8e68
  05d9544  li 9, 1
  05d9548  mtctr 9
  05d954c  b 0x5d9404
  05d9550  li 0, 1
  05d9554  mtctr 0
  05d9558  b 0x5d93cc

FUN_005d955c:   # 0x5d955c, 0x28 bytes
  05d955c  stdu 1, -112(1)
  05d9560  mflr 0
  05d9564  std 0, 128(1)
  05d9568  bl 0x5daf40
  05d956c  nop
  05d9570  ld 0, 128(1)
  05d9574  extsh 3, 3
  05d9578  mtlr 0
  05d957c  addi 1, 1, 112
  05d9580  blr
