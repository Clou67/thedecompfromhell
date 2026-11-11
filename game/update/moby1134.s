# game/update/moby1134.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1134_001d9110:   # 0x1d9110, 0x1d0 bytes
  01d9110  stdu 1, -192(1)
  01d9114  mflr 0
  01d9118  std 0, 208(1)
  01d911c  stfd 31, 184(1)
  01d9120  lbz 4, 32(3)
  01d9124  std 31, 176(1)
  01d9128  std 30, 168(1)
  01d912c  std 29, 160(1)
  01d9130  cmpwi 4, 1
  01d9134  bf 2, 0x1d9174
  01d9138  lis 4, 30
  01d913c  lfs 1, 0(3)
  01d9140  addi 4, 4, -28408
  01d9144  lfs 2, 0(4)
  01d9148  fmuls 1, 1, 2
  01d914c  stfs 1, 112(1)
  01d9150  lfs 1, 4(3)
  01d9154  fmuls 1, 1, 2
  01d9158  stfs 1, 116(1)
  01d915c  lfs 1, 8(3)
  01d9160  fmuls 1, 1, 2
  01d9164  stfs 1, 120(1)
  01d9168  lfs 1, 12(3)
  01d916c  stfs 1, 124(1)
  01d9170  b 0x1d9184
  01d9174  addic 5, 1, 112
  01d9178  li 4, 0
  01d917c  bl 0xf1114
  01d9180  nop
  01d9184  lis 3, 118
  01d9188  lis 4, 114
  01d918c  lis 5, 118
  01d9190  addic 31, 1, 128
  01d9194  lfs 1, 18764(3)
  01d9198  lfs 2, -3052(4)
  01d919c  ori 3, 31, 0
  01d91a0  lfs 3, 18768(5)
  01d91a4  fmuls 1, 1, 2
  01d91a8  fmuls 2, 3, 2
  01d91ac  bl 0xfea60
  01d91b0  nop
  01d91b4  lis 4, 118
  01d91b8  lis 5, 118
  01d91bc  lis 6, 118
  01d91c0  li 3, 255
  01d91c4  lwz 4, 18780(4)
  01d91c8  lwz 5, 18776(5)
  01d91cc  lfs 31, 18788(6)
  01d91d0  extsw 30, 4
  01d91d4  clrlwi 29, 5, 24
  01d91d8  bl 0xfc620
  01d91dc  nop
  01d91e0  clrlwi 8, 3, 24
  01d91e4  fmr 1, 31
  01d91e8  ori 4, 31, 0
  01d91ec  addic 3, 1, 112
  01d91f0  ori 5, 30, 0
  01d91f4  ori 7, 29, 0
  01d91f8  li 9, 0
  01d91fc  bl 0x131100
  01d9200  nop
  01d9204  li 31, 0
  01d9208  lis 4, 239
  01d920c  lis 5, 114
  01d9210  lis 6, 118
  01d9214  addic 3, 1, 144
  01d9218  lfs 1, 9956(4)
  01d921c  lfs 2, -3052(5)
  01d9220  lfs 3, 18772(6)
  01d9224  fmuls 1, 1, 2
  01d9228  fmuls 2, 3, 2
  01d922c  bl 0xfea60
  01d9230  nop
  01d9234  lfs 1, 128(1)
  01d9238  lfs 2, 144(1)
  01d923c  lis 4, 118
  01d9240  lfs 3, 132(1)
  01d9244  lis 5, 118
  01d9248  fadds 1, 1, 2
  01d924c  lis 6, 118
  01d9250  lfs 2, 148(1)
  01d9254  li 3, 255
  01d9258  lfs 4, 136(1)
  01d925c  fadds 2, 3, 2
  01d9260  lfs 3, 152(1)
  01d9264  lwz 4, 18784(4)
  01d9268  fadds 3, 4, 3
  01d926c  extsw 30, 4
  01d9270  lwz 4, 18776(5)
  01d9274  clrlwi 29, 4, 24
  01d9278  stfs 1, 128(1)
  01d927c  lfs 31, 18792(6)
  01d9280  stfs 2, 132(1)
  01d9284  stfs 3, 136(1)
  01d9288  bl 0xfc620
  01d928c  nop
  01d9290  clrlwi 8, 3, 24
  01d9294  fmr 1, 31
  01d9298  ori 7, 29, 0
  01d929c  addic 4, 1, 128
  01d92a0  addic 3, 1, 112
  01d92a4  ori 5, 30, 0
  01d92a8  li 9, 0
  01d92ac  bl 0x131100
  01d92b0  nop
  01d92b4  addic 31, 31, 1
  01d92b8  cmpwi 31, 3
  01d92bc  bt 0, 0x1d9208
  01d92c0  ld 0, 208(1)
  01d92c4  mtlr 0
  01d92c8  lfd 31, 184(1)
  01d92cc  ld 29, 160(1)
  01d92d0  ld 30, 168(1)
  01d92d4  ld 31, 176(1)
  01d92d8  addi 1, 1, 192
  01d92dc  blr

M1134_001d9310:   # 0x1d9310, 0x3d8 bytes
  01d9310  stdu 1, -272(1)
  01d9314  mflr 0
  01d9318  std 0, 288(1)
  01d931c  stfd 24, 208(1)
  01d9320  stfd 25, 216(1)
  01d9324  stfd 26, 224(1)
  01d9328  stfd 27, 232(1)
  01d932c  stfd 28, 240(1)
  01d9330  stfd 29, 248(1)
  01d9334  stfd 30, 256(1)
  01d9338  stfd 31, 264(1)
  01d933c  addi 0, 1, 160
  01d9340  stvx 31, 0, 0
  01d9344  lis 4, 30
  01d9348  std 31, 200(1)
  01d934c  lbz 5, 32(3)
  01d9350  ori 31, 3, 0
  01d9354  addi 4, 4, -27936
  01d9358  cmpwi 5, 1
  01d935c  std 30, 192(1)
  01d9360  lfs 31, 0(4)
  01d9364  lwz 30, 120(3)
  01d9368  std 29, 184(1)
  01d936c  std 28, 176(1)
  01d9370  fmr 30, 31
  01d9374  bf 2, 0x1d93b4
  01d9378  lis 3, 30
  01d937c  lfs 1, 0(31)
  01d9380  addi 3, 3, -27936
  01d9384  lfs 2, 4(3)
  01d9388  fmuls 1, 1, 2
  01d938c  stfs 1, 128(1)
  01d9390  lfs 1, 4(31)
  01d9394  fmuls 1, 1, 2
  01d9398  stfs 1, 132(1)
  01d939c  lfs 1, 8(31)
  01d93a0  fmuls 1, 1, 2
  01d93a4  stfs 1, 136(1)
  01d93a8  lfs 1, 12(31)
  01d93ac  stfs 1, 140(1)
  01d93b0  b 0x1d9404
  01d93b4  ori 3, 31, 0
  01d93b8  addic 5, 1, 128
  01d93bc  li 4, 0
  01d93c0  bl 0xf1114
  01d93c4  nop
  01d93c8  ori 3, 31, 0
  01d93cc  bl 0xefe40
  01d93d0  nop
  01d93d4  lis 3, 30
  01d93d8  addi 3, 3, -27936
  01d93dc  lfs 2, 8(3)
  01d93e0  lfs 3, 12(3)
  01d93e4  fsubs 1, 2, 1
  01d93e8  lfs 31, 16(3)
  01d93ec  fmuls 1, 1, 3
  01d93f0  fmuls 31, 1, 31
  01d93f4  fcmpu 0, 31, 30
  01d93f8  cror 6, 0, 2
  01d93fc  bt 6, 0x1d9404
  01d9400  fmr 31, 30
  01d9404  lis 3, 149
  01d9408  lfs 1, 132(1)
  01d940c  addic 3, 3, 5056
  01d9410  lis 4, 30
  01d9414  lfs 2, 324(3)
  01d9418  lfs 3, 320(3)
  01d941c  fsubs 2, 2, 1
  01d9420  lfs 4, 128(1)
  01d9424  lfs 5, 328(3)
  01d9428  fsubs 3, 3, 4
  01d942c  lfs 6, 136(1)
  01d9430  fsubs 5, 5, 6
  01d9434  addi 4, 4, -27936
  01d9438  fmuls 7, 2, 2
  01d943c  stfs 3, 112(1)
  01d9440  stfs 2, 116(1)
  01d9444  lfs 8, 332(3)
  01d9448  fmadds 7, 3, 3, 7
  01d944c  stfs 5, 120(1)
  01d9450  stfs 8, 124(1)
  01d9454  lfs 8, 24(4)
  01d9458  lfs 24, 20(4)
  01d945c  fmadds 7, 5, 5, 7
  01d9460  fsqrts 7, 7
  01d9464  lfs 9, 28(4)
  01d9468  li 3, 36
  01d946c  li 29, 0
  01d9470  addic 31, 30, 64
  01d9474  fdivs 8, 8, 7
  01d9478  fsub 10, 24, 7
  01d947c  fsub 11, 24, 7
  01d9480  fsub 0, 24, 7
  01d9484  fsub 12, 7, 24
  01d9488  fsub 13, 7, 24
  01d948c  fsub 7, 7, 24
  01d9490  fmuls 2, 2, 8
  01d9494  fmuls 3, 3, 8
  01d9498  fmuls 5, 5, 8
  01d949c  fsel 8, 10, 24, 2
  01d94a0  fsel 10, 11, 24, 3
  01d94a4  fsel 11, 0, 24, 5
  01d94a8  fsel 2, 12, 8, 2
  01d94ac  fsel 3, 13, 10, 3
  01d94b0  fsel 5, 7, 11, 5
  01d94b4  fmuls 7, 2, 2
  01d94b8  fadds 4, 3, 4
  01d94bc  fadds 1, 2, 1
  01d94c0  fadds 6, 5, 6
  01d94c4  fmadds 7, 3, 3, 7
  01d94c8  stfs 4, 112(1)
  01d94cc  stfs 1, 116(1)
  01d94d0  fmadds 7, 5, 5, 7
  01d94d4  stfs 6, 120(1)
  01d94d8  lfs 25, 32(4)
  01d94dc  <unknown>
  01d94e0  lfs 26, 36(4)
  01d94e4  vspltw 31, 31, 0
  01d94e8  fsqrts 7, 7
  01d94ec  lfs 27, 40(4)
  01d94f0  fdivs 1, 9, 7
  01d94f4  fsub 4, 24, 7
  01d94f8  fsub 6, 24, 7
  01d94fc  fsub 8, 24, 7
  01d9500  fsub 28, 7, 24
  01d9504  fsub 29, 7, 24
  01d9508  fsub 30, 7, 24
  01d950c  fmuls 5, 5, 1
  01d9510  fmuls 2, 2, 1
  01d9514  fmuls 1, 3, 1
  01d9518  fsel 3, 4, 24, 5
  01d951c  fsel 4, 6, 24, 2
  01d9520  fsel 6, 8, 24, 1
  01d9524  fsel 28, 28, 3, 5
  01d9528  fsel 29, 29, 4, 2
  01d952c  fsel 30, 30, 6, 1
  01d9530  lfs 1, 32(30)
  01d9534  lfs 2, 48(30)
  01d9538  fadds 1, 1, 2
  01d953c  fcmpu 0, 1, 25
  01d9540  fcmpu 1, 1, 24
  01d9544  stfs 1, 32(30)
  01d9548  bt 0, 0x1d9558
  01d954c  fsubs 1, 1, 25
  01d9550  stfs 1, 32(30)
  01d9554  b 0x1d9564
  01d9558  bt 5, 0x1d9564
  01d955c  fadds 1, 1, 25
  01d9560  stfs 1, 32(30)
  01d9564  addic 3, 30, 64
  01d9568  bl 0x4fff60
  01d956c  nop
  01d9570  lis 4, 114
  01d9574  li 5, -3056
  01d9578  ori 6, 3, 0
  01d957c  lwz 3, 64(30)
  01d9580  cmpwi 6, 0
  01d9584  lfs 1, -3056(4)
  01d9588  <unknown>
  01d958c  bt 2, 0x1d95b8
  01d9590  vspltisw 3, -1
  01d9594  fmuls 2, 1, 26
  01d9598  vslw 3, 3, 3
  01d959c  vmaddfp 2, 2, 31, 3
  01d95a0  fctiwz 2, 2
  01d95a4  vctsxs 2, 2, 0
  01d95a8  stfd 2, 144(1)
  01d95ac  lwz 3, 148(1)
  01d95b0  vspltw 2, 2, 0
  01d95b4  stvewx 2, 0, 31
  01d95b8  fmuls 1, 1, 26
  01d95bc  fctiwz 1, 1
  01d95c0  stfd 1, 144(1)
  01d95c4  lwz 4, 148(1)
  01d95c8  subc 3, 4, 3
  01d95cc  extsw 3, 3
  01d95d0  bl 0x502730
  01d95d4  nop
  01d95d8  lis 3, 114
  01d95dc  lis 4, 118
  01d95e0  lfs 2, -3056(3)
  01d95e4  fmuls 2, 2, 26
  01d95e8  lis 3, 118
  01d95ec  lwz 3, 18740(3)
  01d95f0  fctidz 2, 2
  01d95f4  extsw 3, 3
  01d95f8  lwz 4, 18744(4)
  01d95fc  extsw 4, 4
  01d9600  fcfid 2, 2
  01d9604  frsp 2, 2
  01d9608  fdivs 1, 1, 2
  01d960c  fsubs 1, 27, 1
  01d9610  fabs 1, 1
  01d9614  bl 0x5027bc
  01d9618  nop
  01d961c  lfs 1, 32(30)
  01d9620  ori 28, 3, 0
  01d9624  bl 0x502758
  01d9628  nop
  01d962c  lis 4, 118
  01d9630  lis 6, 118
  01d9634  lfs 1, 80(30)
  01d9638  clrlwi 5, 3, 24
  01d963c  fmuls 1, 1, 31
  01d9640  addic 3, 1, 112
  01d9644  lwz 7, 18756(4)
  01d9648  lwz 9, 18752(6)
  01d964c  ori 4, 28, 0
  01d9650  extsw 6, 7
  01d9654  li 8, 2
  01d9658  extsw 7, 9
  01d965c  li 10, 0
  01d9660  bl 0x130ed0
  01d9664  nop
  01d9668  lfs 1, 112(1)
  01d966c  addic 29, 29, 1
  01d9670  lfs 2, 116(1)
  01d9674  addic 31, 31, 4
  01d9678  fadds 1, 1, 30
  01d967c  lfs 3, 120(1)
  01d9680  fadds 2, 2, 29
  01d9684  cmpwi 29, 4
  01d9688  fadds 3, 3, 28
  01d968c  addic 30, 30, 4
  01d9690  stfs 1, 112(1)
  01d9694  stfs 2, 116(1)
  01d9698  stfs 3, 120(1)
  01d969c  bt 0, 0x1d9530
  01d96a0  li 0, 160
  01d96a4  lvx 31, 1, 0
  01d96a8  ld 0, 288(1)
  01d96ac  mtlr 0
  01d96b0  lfd 24, 208(1)
  01d96b4  lfd 25, 216(1)
  01d96b8  lfd 26, 224(1)
  01d96bc  lfd 27, 232(1)
  01d96c0  lfd 28, 240(1)
  01d96c4  lfd 29, 248(1)
  01d96c8  lfd 30, 256(1)
  01d96cc  lfd 31, 264(1)
  01d96d0  ld 28, 176(1)
  01d96d4  ld 29, 184(1)
  01d96d8  ld 30, 192(1)
  01d96dc  ld 31, 200(1)
  01d96e0  addi 1, 1, 272
  01d96e4  blr

M1134_001d9708:   # 0x1d9708, 0x174 bytes
  01d9708  stdu 1, -144(1)
  01d970c  mflr 0
  01d9710  std 0, 160(1)
  01d9714  lis 4, 118
  01d9718  std 31, 136(1)
  01d971c  lwz 5, 36(3)
  01d9720  ori 31, 3, 0
  01d9724  std 30, 128(1)
  01d9728  lfs 1, 18696(4)
  01d972c  lwz 30, 120(3)
  01d9730  lfs 2, 36(5)
  01d9734  lbz 4, 32(3)
  01d9738  fmuls 2, 2, 1
  01d973c  lfs 1, 64(3)
  01d9740  cmpwi 4, 1
  01d9744  std 29, 120(1)
  01d9748  stfs 2, 44(3)
  01d974c  bf 2, 0x1d9834
  01d9750  lis 3, 30
  01d9754  lfs 2, 76(31)
  01d9758  addi 29, 3, -26904
  01d975c  lis 3, 118
  01d9760  lfs 3, 0(29)
  01d9764  lfs 4, 4(29)
  01d9768  fsubs 3, 3, 2
  01d976c  fsubs 4, 4, 2
  01d9770  lfs 6, 8(29)
  01d9774  fsub 5, 2, 3
  01d9778  fsel 2, 5, 3, 2
  01d977c  lfs 3, 12(29)
  01d9780  fsub 5, 4, 2
  01d9784  fsel 2, 5, 4, 2
  01d9788  lfs 5, 16(29)
  01d978c  lfs 4, 24(30)
  01d9790  lfs 7, 18700(3)
  01d9794  lis 3, 118
  01d9798  fadds 4, 4, 7
  01d979c  lfs 7, 20(29)
  01d97a0  fmuls 8, 2, 2
  01d97a4  fmuls 9, 8, 2
  01d97a8  fmuls 10, 8, 9
  01d97ac  fmadds 2, 9, 6, 2
  01d97b0  lfs 6, 18704(3)
  01d97b4  fmuls 9, 8, 10
  01d97b8  fmadds 2, 10, 3, 2
  01d97bc  fmuls 3, 8, 9
  01d97c0  fmadds 2, 9, 5, 2
  01d97c4  fmadds 2, 3, 7, 2
  01d97c8  fmadds 2, 6, 2, 4
  01d97cc  stfs 2, 24(31)
  01d97d0  lfs 2, 104(30)
  01d97d4  bl 0x502578
  01d97d8  nop
  01d97dc  stfs 1, 64(31)
  01d97e0  lfs 1, 68(31)
  01d97e4  lfs 2, 100(30)
  01d97e8  bl 0x502578
  01d97ec  nop
  01d97f0  stfs 1, 68(31)
  01d97f4  lfs 1, 72(31)
  01d97f8  lfs 2, 96(30)
  01d97fc  bl 0x502578
  01d9800  nop
  01d9804  lis 3, 118
  01d9808  stfs 1, 72(31)
  01d980c  lfs 2, 24(29)
  01d9810  lis 4, 114
  01d9814  lfs 1, 76(31)
  01d9818  lfs 3, 18724(3)
  01d981c  lfs 4, -3052(4)
  01d9820  fmuls 2, 3, 2
  01d9824  fmuls 2, 2, 4
  01d9828  bl 0x502578
  01d982c  nop
  01d9830  stfs 1, 76(31)
  01d9834  ori 3, 31, 0
  01d9838  bl 0x1d9310
  01d983c  lis 3, 118
  01d9840  lwz 3, 18760(3)
  01d9844  extsw 3, 3
  01d9848  bl 0xfc620
  01d984c  nop
  01d9850  cmpwi 3, 0
  01d9854  bf 2, 0x1d9860
  01d9858  ori 3, 31, 0
  01d985c  bl 0x1d9110
  01d9860  ld 0, 160(1)
  01d9864  mtlr 0
  01d9868  ld 29, 120(1)
  01d986c  ld 30, 128(1)
  01d9870  ld 31, 136(1)
  01d9874  addi 1, 1, 144
  01d9878  blr

M1134_001d98b8:   # 0x1d98b8, 0x30c bytes
  01d98b8  stdu 1, -208(1)
  01d98bc  mflr 0
  01d98c0  std 0, 224(1)
  01d98c4  stfd 26, 160(1)
  01d98c8  stfd 27, 168(1)
  01d98cc  stfd 28, 176(1)
  01d98d0  stfd 29, 184(1)
  01d98d4  stfd 30, 192(1)
  01d98d8  stfd 31, 200(1)
  01d98dc  std 31, 152(1)
  01d98e0  ori 31, 3, 0
  01d98e4  lis 3, 30
  01d98e8  addi 4, 3, -26500
  01d98ec  ori 3, 31, 0
  01d98f0  lbz 5, 82(31)
  01d98f4  lwz 31, 120(31)
  01d98f8  cmpwi 5, 1
  01d98fc  std 30, 144(1)
  01d9900  lfs 31, 0(4)
  01d9904  bf 2, 0x1d9914
  01d9908  bl 0xefe40
  01d990c  nop
  01d9910  fmr 31, 1
  01d9914  lis 3, 30
  01d9918  lwz 4, 4(31)
  01d991c  addi 3, 3, -26500
  01d9920  cmpwi 4, -1
  01d9924  lfs 1, 4(3)
  01d9928  fmuls 31, 31, 1
  01d992c  bt 2, 0x1d993c
  01d9930  lwz 3, 8(31)
  01d9934  cmpwi 3, -1
  01d9938  bf 2, 0x1d9a70
  01d993c  lis 3, 30
  01d9940  addi 31, 3, -26500
  01d9944  lis 3, 151
  01d9948  addic 30, 3, -25376
  01d994c  lfs 1, 8(31)
  01d9950  lfs 3, 12(31)
  01d9954  fmsubs 1, 31, 1, 3
  01d9958  lfs 2, 152(30)
  01d995c  bl 0x502578
  01d9960  nop
  01d9964  lfs 2, 16(31)
  01d9968  lfs 3, 20(31)
  01d996c  fadds 2, 1, 2
  01d9970  fsubs 5, 3, 1
  01d9974  lfs 4, 24(31)
  01d9978  li 3, 0
  01d997c  fsubs 3, 3, 2
  01d9980  fsub 7, 1, 5
  01d9984  fsubs 6, 4, 2
  01d9988  fsubs 4, 4, 1
  01d998c  fsub 8, 2, 3
  01d9990  fsel 5, 7, 5, 1
  01d9994  fsel 2, 8, 3, 2
  01d9998  fsub 7, 4, 5
  01d999c  lfs 3, 28(31)
  01d99a0  fsub 8, 6, 2
  01d99a4  fsel 4, 7, 4, 5
  01d99a8  lfs 5, 32(31)
  01d99ac  fsel 2, 8, 6, 2
  01d99b0  fmuls 7, 4, 4
  01d99b4  lfs 6, 36(31)
  01d99b8  lfs 9, 40(31)
  01d99bc  fmuls 8, 2, 2
  01d99c0  fmuls 10, 7, 4
  01d99c4  fmuls 11, 8, 2
  01d99c8  fmuls 12, 7, 10
  01d99cc  fmadds 4, 10, 3, 4
  01d99d0  lfs 10, 44(31)
  01d99d4  fmuls 13, 8, 11
  01d99d8  fmadds 2, 11, 3, 2
  01d99dc  fmuls 3, 7, 12
  01d99e0  fmadds 4, 12, 5, 4
  01d99e4  fmuls 11, 8, 13
  01d99e8  fmadds 2, 13, 5, 2
  01d99ec  fmuls 5, 7, 3
  01d99f0  fmadds 3, 3, 6, 4
  01d99f4  fmuls 4, 8, 11
  01d99f8  fmadds 2, 11, 6, 2
  01d99fc  fmadds 3, 5, 9, 3
  01d9a00  lfs 5, 128(30)
  01d9a04  fmadds 2, 4, 9, 2
  01d9a08  lfs 4, 132(30)
  01d9a0c  fmuls 3, 3, 10
  01d9a10  stw 3, 120(1)
  01d9a14  fmuls 2, 2, 10
  01d9a18  fadds 4, 3, 4
  01d9a1c  stfs 3, 116(1)
  01d9a20  lfs 3, 136(30)
  01d9a24  fadds 5, 2, 5
  01d9a28  stfs 2, 112(1)
  01d9a2c  stfs 4, 116(1)
  01d9a30  stfs 5, 112(1)
  01d9a34  lfs 2, 48(31)
  01d9a38  stw 3, 140(1)
  01d9a3c  fadds 2, 3, 2
  01d9a40  stw 3, 136(1)
  01d9a44  stw 3, 132(1)
  01d9a48  stw 3, 128(1)
  01d9a4c  stfs 2, 120(1)
  01d9a50  lfs 2, 52(31)
  01d9a54  bl 0x502578
  01d9a58  nop
  01d9a5c  stfs 1, 136(1)
  01d9a60  lfs 1, 56(31)
  01d9a64  fmuls 1, 31, 1
  01d9a68  stfs 1, 132(1)
  01d9a6c  b 0x1d9b7c
  01d9a70  lis 5, 165
  01d9a74  slwi 4, 4, 7
  01d9a78  slwi 3, 3, 7
  01d9a7c  lwz 5, 7128(5)
  01d9a80  addc 4, 5, 4
  01d9a84  addc 3, 5, 3
  01d9a88  clrldi 4, 4, 32
  01d9a8c  clrldi 3, 3, 32
  01d9a90  lfs 1, 48(4)
  01d9a94  lfs 2, 48(3)
  01d9a98  lfs 3, 52(3)
  01d9a9c  fsubs 2, 2, 1
  01d9aa0  lfs 4, 52(4)
  01d9aa4  fsubs 3, 3, 4
  01d9aa8  lfs 4, 56(3)
  01d9aac  lfs 5, 56(4)
  01d9ab0  lfs 6, 60(3)
  01d9ab4  lwz 3, 4(31)
  01d9ab8  lwz 6, 8(31)
  01d9abc  fsubs 4, 4, 5
  01d9ac0  fmadds 1, 31, 2, 1
  01d9ac4  slwi 3, 3, 7
  01d9ac8  slwi 6, 6, 7
  01d9acc  addc 3, 5, 3
  01d9ad0  addc 6, 5, 6
  01d9ad4  clrldi 3, 3, 32
  01d9ad8  clrldi 5, 6, 32
  01d9adc  stfs 1, 112(1)
  01d9ae0  lfs 1, 52(4)
  01d9ae4  fmadds 1, 31, 3, 1
  01d9ae8  stfs 1, 116(1)
  01d9aec  lfs 1, 56(4)
  01d9af0  stfs 6, 124(1)
  01d9af4  fmadds 1, 31, 4, 1
  01d9af8  stfs 1, 120(1)
  01d9afc  lfs 30, 120(3)
  01d9b00  lfs 29, 112(3)
  01d9b04  lfs 28, 116(3)
  01d9b08  lfs 1, 120(5)
  01d9b0c  fmr 2, 30
  01d9b10  lfs 27, 112(5)
  01d9b14  lfs 26, 116(5)
  01d9b18  bl 0x5025e0
  01d9b1c  nop
  01d9b20  fmuls 1, 1, 31
  01d9b24  fmr 2, 30
  01d9b28  bl 0x502578
  01d9b2c  nop
  01d9b30  stfs 1, 136(1)
  01d9b34  fmr 2, 28
  01d9b38  fmr 1, 26
  01d9b3c  bl 0x5025e0
  01d9b40  nop
  01d9b44  fmuls 1, 1, 31
  01d9b48  fmr 2, 28
  01d9b4c  bl 0x502578
  01d9b50  nop
  01d9b54  stfs 1, 132(1)
  01d9b58  fmr 1, 27
  01d9b5c  fmr 2, 29
  01d9b60  bl 0x5025e0
  01d9b64  nop
  01d9b68  fmuls 1, 1, 31
  01d9b6c  fmr 2, 29
  01d9b70  bl 0x502578
  01d9b74  nop
  01d9b78  stfs 1, 128(1)
  01d9b7c  addic 3, 1, 112
  01d9b80  bl 0x47b98
  01d9b84  nop
  01d9b88  addic 3, 1, 128
  01d9b8c  bl 0x47c08
  01d9b90  nop
  01d9b94  ld 0, 224(1)
  01d9b98  mtlr 0
  01d9b9c  lfd 26, 160(1)
  01d9ba0  lfd 27, 168(1)
  01d9ba4  lfd 28, 176(1)
  01d9ba8  lfd 29, 184(1)
  01d9bac  lfd 30, 192(1)
  01d9bb0  lfd 31, 200(1)
  01d9bb4  ld 30, 144(1)
  01d9bb8  ld 31, 152(1)
  01d9bbc  addi 1, 1, 208
  01d9bc0  blr

M1134_001d9bd0:   # 0x1d9bd0, 0x120 bytes
  01d9bd0  stdu 1, -160(1)
  01d9bd4  mflr 0
  01d9bd8  std 0, 176(1)
  01d9bdc  std 29, 136(1)
  01d9be0  std 31, 152(1)
  01d9be4  lwz 31, 120(3)
  01d9be8  std 30, 144(1)
  01d9bec  li 29, 0
  01d9bf0  ori 30, 31, 0
  01d9bf4  li 3, 255
  01d9bf8  bl 0xfc620
  01d9bfc  nop
  01d9c00  extsw 3, 3
  01d9c04  addic 29, 29, 1
  01d9c08  std 3, 112(1)
  01d9c0c  cmpwi 29, 4
  01d9c10  lfd 1, 112(1)
  01d9c14  fcfid 1, 1
  01d9c18  frsp 1, 1
  01d9c1c  stfs 1, 32(30)
  01d9c20  addic 30, 30, 4
  01d9c24  bt 0, 0x1d9bf4
  01d9c28  lis 3, -16512
  01d9c2c  lis 4, -16368
  01d9c30  vspltisw 4, 0
  01d9c34  lis 5, 16288
  01d9c38  lis 6, 30
  01d9c3c  stw 3, 48(31)
  01d9c40  lis 7, 114
  01d9c44  stw 4, 52(31)
  01d9c48  lis 3, 16416
  01d9c4c  addi 4, 6, -25660
  01d9c50  stw 5, 56(31)
  01d9c54  li 5, -3056
  01d9c58  li 6, 4
  01d9c5c  li 8, 8
  01d9c60  stw 3, 60(31)
  01d9c64  li 9, 4
  01d9c68  <unknown>
  01d9c6c  <unknown>
  01d9c70  addic 3, 31, 64
  01d9c74  <unknown>
  01d9c78  mtctr 9
  01d9c7c  <unknown>
  01d9c80  vspltw 6, 6, 0
  01d9c84  vspltw 3, 3, 0
  01d9c88  vspltw 2, 2, 0
  01d9c8c  vadduwm 7, 4, 3
  01d9c90  vspltisw 8, -1
  01d9c94  vadduwm 4, 4, 2
  01d9c98  vcfsx 7, 7, 0
  01d9c9c  vslw 8, 8, 8
  01d9ca0  vaddfp 7, 7, 6
  01d9ca4  vmaddfp 7, 7, 5, 8
  01d9ca8  vctsxs 7, 7, 0
  01d9cac  vspltw 7, 7, 0
  01d9cb0  stvewx 7, 0, 3
  01d9cb4  addic 3, 3, 4
  01d9cb8  bdnz 0x1d9c8c
  01d9cbc  lis 3, 16416
  01d9cc0  lis 4, 16448
  01d9cc4  stw 3, 80(31)
  01d9cc8  stw 4, 84(31)
  01d9ccc  stw 4, 88(31)
  01d9cd0  stw 3, 92(31)
  01d9cd4  ld 0, 176(1)
  01d9cd8  mtlr 0
  01d9cdc  ld 29, 136(1)
  01d9ce0  ld 30, 144(1)
  01d9ce4  ld 31, 152(1)
  01d9ce8  addi 1, 1, 160
  01d9cec  blr

UpdateMoby_1134:   # 0x1d9d48, 0xaec bytes
  01d9d48  stdu 1, -320(1)
  01d9d4c  mflr 0
  01d9d50  std 0, 336(1)
  01d9d54  stfd 21, 232(1)
  01d9d58  stfd 22, 240(1)
  01d9d5c  stfd 23, 248(1)
  01d9d60  stfd 24, 256(1)
  01d9d64  stfd 25, 264(1)
  01d9d68  stfd 26, 272(1)
  01d9d6c  stfd 27, 280(1)
  01d9d70  stfd 28, 288(1)
  01d9d74  stfd 29, 296(1)
  01d9d78  stfd 30, 304(1)
  01d9d7c  stfd 31, 312(1)
  01d9d80  std 30, 216(1)
  01d9d84  lbz 4, 32(3)
  01d9d88  std 31, 224(1)
  01d9d8c  lwz 30, 120(3)
  01d9d90  ori 31, 3, 0
  01d9d94  cmpwi 4, 0
  01d9d98  lfs 1, 64(3)
  01d9d9c  cmpwi 1, 4, 2
  01d9da0  cmpwi 6, 4, 1
  01d9da4  std 29, 208(1)
  01d9da8  std 28, 200(1)
  01d9dac  std 27, 192(1)
  01d9db0  cmpwi 7, 4, -1
  01d9db4  bt 1, 0x1d9dc0
  01d9db8  bf 29, 0x1da7e4
  01d9dbc  b 0x1d9dcc
  01d9dc0  bf 25, 0x1d9ed0
  01d9dc4  bf 5, 0x1da5c0
  01d9dc8  b 0x1da7e4
  01d9dcc  lwz 3, 0(30)
  01d9dd0  cmpwi 3, -1
  01d9dd4  bt 2, 0x1d9e04
  01d9dd8  lis 4, 151
  01d9ddc  lis 5, 161
  01d9de0  addic 5, 5, -13772
  01d9de4  lwz 4, -25488(4)
  01d9de8  addc 3, 3, 5
  01d9dec  slwi 4, 4, 2
  01d9df0  clrldi 3, 3, 32
  01d9df4  extsw 4, 4
  01d9df8  lbzx 3, 3, 4
  01d9dfc  cmpwi 3, 0
  01d9e00  bt 2, 0x1d9e14
  01d9e04  ori 3, 31, 0
  01d9e08  bl 0xefb38
  01d9e0c  nop
  01d9e10  b 0x1da7e4
  01d9e14  lfs 1, 16(31)
  01d9e18  stfs 1, 16(30)
  01d9e1c  lfs 1, 20(31)
  01d9e20  stfs 1, 20(30)
  01d9e24  lfs 1, 24(31)
  01d9e28  stfs 1, 24(30)
  01d9e2c  lfs 1, 28(31)
  01d9e30  stfs 1, 28(30)
  01d9e34  lfs 1, 72(31)
  01d9e38  stfs 1, 28(30)
  01d9e3c  bl 0xfcc68
  01d9e40  nop
  01d9e44  stfs 1, 64(31)
  01d9e48  bl 0xfcc68
  01d9e4c  nop
  01d9e50  stfs 1, 68(31)
  01d9e54  bl 0xfcc68
  01d9e58  nop
  01d9e5c  stfs 1, 72(31)
  01d9e60  bl 0xfcc68
  01d9e64  nop
  01d9e68  lis 3, 30
  01d9e6c  lis 4, 118
  01d9e70  stfs 1, 76(31)
  01d9e74  addi 3, 3, -25360
  01d9e78  lis 5, 114
  01d9e7c  li 6, 1
  01d9e80  lfs 1, 0(3)
  01d9e84  lfs 2, 18712(4)
  01d9e88  lfs 3, -3052(5)
  01d9e8c  fmuls 2, 2, 1
  01d9e90  lis 4, 118
  01d9e94  lis 5, 118
  01d9e98  ori 3, 31, 0
  01d9e9c  fmuls 2, 2, 3
  01d9ea0  stfs 2, 104(30)
  01d9ea4  lfs 2, 18716(4)
  01d9ea8  fmuls 2, 2, 1
  01d9eac  fmuls 2, 2, 3
  01d9eb0  stfs 2, 100(30)
  01d9eb4  lfs 2, 18720(5)
  01d9eb8  fmuls 1, 2, 1
  01d9ebc  fmuls 1, 1, 3
  01d9ec0  stfs 1, 96(30)
  01d9ec4  stb 6, 32(31)
  01d9ec8  bl 0x1d9bd0
  01d9ecc  b 0x1da7e4
  01d9ed0  lis 3, 118
  01d9ed4  lwz 5, 36(31)
  01d9ed8  lis 4, 30
  01d9edc  lfs 2, 18696(3)
  01d9ee0  lfs 3, 36(5)
  01d9ee4  addi 3, 4, -25360
  01d9ee8  fmuls 2, 3, 2
  01d9eec  lfs 3, 76(31)
  01d9ef0  lis 4, 118
  01d9ef4  lis 29, 114
  01d9ef8  stfs 2, 44(31)
  01d9efc  lfs 26, 4(3)
  01d9f00  lfs 27, 8(3)
  01d9f04  fsubs 2, 26, 3
  01d9f08  fsubs 4, 27, 3
  01d9f0c  lfs 28, 12(3)
  01d9f10  lfs 29, 16(3)
  01d9f14  lfs 30, 20(3)
  01d9f18  fsub 5, 3, 2
  01d9f1c  fsel 2, 5, 2, 3
  01d9f20  lfs 5, 24(30)
  01d9f24  fsub 3, 4, 2
  01d9f28  fsel 2, 3, 4, 2
  01d9f2c  lfs 3, 18700(4)
  01d9f30  fadds 3, 5, 3
  01d9f34  lfs 31, 24(3)
  01d9f38  lis 4, 118
  01d9f3c  fmuls 4, 2, 2
  01d9f40  lfs 6, 18704(4)
  01d9f44  lis 4, 118
  01d9f48  fmuls 5, 4, 2
  01d9f4c  fmuls 7, 4, 5
  01d9f50  fmadds 2, 5, 28, 2
  01d9f54  fmuls 5, 4, 7
  01d9f58  fmadds 2, 7, 29, 2
  01d9f5c  fmuls 4, 4, 5
  01d9f60  fmadds 2, 5, 30, 2
  01d9f64  fmadds 2, 4, 31, 2
  01d9f68  fmadds 2, 6, 2, 3
  01d9f6c  stfs 2, 24(31)
  01d9f70  lfs 25, 0(3)
  01d9f74  lfs 3, 18712(4)
  01d9f78  lfs 2, -3052(29)
  01d9f7c  fmuls 3, 3, 25
  01d9f80  fmuls 2, 3, 2
  01d9f84  bl 0x502578
  01d9f88  nop
  01d9f8c  lis 3, 118
  01d9f90  stfs 1, 64(31)
  01d9f94  lfs 1, 68(31)
  01d9f98  lfs 2, -3052(29)
  01d9f9c  lfs 3, 18716(3)
  01d9fa0  fmuls 3, 3, 25
  01d9fa4  fmuls 2, 3, 2
  01d9fa8  bl 0x502578
  01d9fac  nop
  01d9fb0  lis 3, 118
  01d9fb4  stfs 1, 68(31)
  01d9fb8  lfs 1, 72(31)
  01d9fbc  lfs 2, -3052(29)
  01d9fc0  lfs 3, 18720(3)
  01d9fc4  fmuls 3, 3, 25
  01d9fc8  fmuls 2, 3, 2
  01d9fcc  bl 0x502578
  01d9fd0  nop
  01d9fd4  lis 3, 118
  01d9fd8  stfs 1, 72(31)
  01d9fdc  lfs 1, 76(31)
  01d9fe0  lfs 2, -3052(29)
  01d9fe4  lfs 3, 18724(3)
  01d9fe8  fmuls 3, 3, 25
  01d9fec  fmuls 2, 3, 2
  01d9ff0  bl 0x502578
  01d9ff4  nop
  01d9ff8  ori 3, 31, 0
  01d9ffc  stfs 1, 76(31)
  01da000  bl 0x1d9310
  01da004  lis 3, 118
  01da008  lwz 3, 18760(3)
  01da00c  extsw 3, 3
  01da010  bl 0xfc620
  01da014  nop
  01da018  cmpwi 3, 0
  01da01c  bf 2, 0x1da028
  01da020  ori 3, 31, 0
  01da024  bl 0x1d9110
  01da028  lis 29, 151
  01da02c  lfs 1, 20(31)
  01da030  lfs 2, 16(31)
  01da034  addic 29, 29, -25376
  01da038  lis 3, 30
  01da03c  lfs 3, 132(29)
  01da040  lfs 4, 128(29)
  01da044  fsubs 1, 1, 3
  01da048  fsubs 2, 2, 4
  01da04c  addi 3, 3, -25360
  01da050  fmuls 1, 1, 1
  01da054  fmadds 1, 2, 2, 1
  01da058  lfs 2, 28(3)
  01da05c  fsqrts 1, 1
  01da060  fcmpu 0, 1, 2
  01da064  cror 6, 1, 2
  01da068  bt 6, 0x1da7e4
  01da06c  lfs 1, 24(31)
  01da070  lfs 2, 136(29)
  01da074  lis 3, 30
  01da078  fsubs 1, 1, 2
  01da07c  addi 3, 3, -25360
  01da080  lfs 2, 32(3)
  01da084  fabs 1, 1
  01da088  fcmpu 0, 1, 2
  01da08c  cror 6, 1, 2
  01da090  bt 6, 0x1da7e4
  01da094  lwz 3, 8872(29)
  01da098  cmpwi 3, 0
  01da09c  bt 2, 0x1da7e4
  01da0a0  lbz 3, 8356(29)
  01da0a4  cmpwi 3, 3
  01da0a8  cmpwi 1, 3, 0
  01da0ac  bt 2, 0x1da0b4
  01da0b0  bf 6, 0x1da7e4
  01da0b4  lhz 3, 12(30)
  01da0b8  cmpwi 3, 0
  01da0bc  bt 2, 0x1da178
  01da0c0  lis 3, 30
  01da0c4  vspltisw 2, -1
  01da0c8  li 5, 36
  01da0cc  addi 3, 3, -25360
  01da0d0  lis 4, 114
  01da0d4  li 6, -3056
  01da0d8  vslw 2, 2, 2
  01da0dc  <unknown>
  01da0e0  lis 5, 161
  01da0e4  vspltw 3, 3, 0
  01da0e8  <unknown>
  01da0ec  li 3, 21427
  01da0f0  li 6, 23680
  01da0f4  vmaddfp 2, 4, 3, 2
  01da0f8  li 4, -1
  01da0fc  vctsxs 2, 2, 0
  01da100  vspltw 2, 2, 0
  01da104  stvewx 2, 6, 5
  01da108  bl 0x112a38
  01da10c  nop
  01da110  lis 3, 151
  01da114  lwz 5, 0(30)
  01da118  lis 4, 161
  01da11c  li 6, 1
  01da120  addic 4, 4, -13772
  01da124  lwz 3, -25488(3)
  01da128  addc 4, 5, 4
  01da12c  slwi 3, 3, 2
  01da130  clrldi 4, 4, 32
  01da134  extsw 3, 3
  01da138  stbx 6, 4, 3
  01da13c  bl 0x11b1b4
  01da140  nop
  01da144  cmpwi 3, 40
  01da148  bf 2, 0x1da158
  01da14c  li 3, 1
  01da150  bl 0x112dc0
  01da154  nop
  01da158  li 3, 0
  01da15c  li 4, -1
  01da160  bl 0xe8aa4
  01da164  nop
  01da168  ori 3, 31, 0
  01da16c  bl 0xefb38
  01da170  nop
  01da174  b 0x1da7e4
  01da178  lis 3, 30
  01da17c  lfs 1, 28(30)
  01da180  addi 28, 3, -25360
  01da184  lfs 24, 40(28)
  01da188  fadds 1, 1, 24
  01da18c  li 3, 0
  01da190  fsubs 2, 26, 1
  01da194  fsubs 3, 27, 1
  01da198  fsub 4, 1, 2
  01da19c  fsel 1, 4, 2, 1
  01da1a0  fsub 2, 3, 1
  01da1a4  fsel 1, 2, 3, 1
  01da1a8  lfs 2, 44(28)
  01da1ac  fmuls 3, 1, 1
  01da1b0  fmuls 4, 3, 1
  01da1b4  fmuls 5, 3, 4
  01da1b8  fmadds 1, 4, 28, 1
  01da1bc  fmuls 4, 3, 5
  01da1c0  fmadds 1, 5, 29, 1
  01da1c4  fmuls 3, 3, 4
  01da1c8  fmadds 1, 4, 30, 1
  01da1cc  fmadds 1, 3, 31, 1
  01da1d0  fmuls 1, 1, 2
  01da1d4  stfs 1, 112(1)
  01da1d8  lfs 3, 28(30)
  01da1dc  fsubs 4, 26, 3
  01da1e0  fsubs 5, 27, 3
  01da1e4  fsub 6, 3, 4
  01da1e8  fsel 3, 6, 4, 3
  01da1ec  fsub 4, 5, 3
  01da1f0  fsel 3, 4, 5, 3
  01da1f4  fmuls 4, 3, 3
  01da1f8  fmuls 5, 4, 3
  01da1fc  fmuls 6, 4, 5
  01da200  fmadds 3, 5, 28, 3
  01da204  fmuls 5, 4, 6
  01da208  fmadds 3, 6, 29, 3
  01da20c  fmuls 4, 4, 5
  01da210  fmadds 3, 5, 30, 3
  01da214  fmadds 3, 4, 31, 3
  01da218  fmuls 2, 3, 2
  01da21c  stfs 2, 116(1)
  01da220  lfs 25, 48(28)
  01da224  stw 3, 120(1)
  01da228  lfs 3, 16(30)
  01da22c  fadds 1, 1, 3
  01da230  stfs 1, 112(1)
  01da234  lfs 1, 20(30)
  01da238  fadds 1, 2, 1
  01da23c  stfs 1, 116(1)
  01da240  lfs 1, 24(30)
  01da244  stw 3, 140(1)
  01da248  stfs 1, 120(1)
  01da24c  stw 3, 136(1)
  01da250  stw 3, 132(1)
  01da254  stw 3, 128(1)
  01da258  lfs 1, 28(30)
  01da25c  lfs 2, 52(28)
  01da260  bl 0x502578
  01da264  nop
  01da268  lis 3, 114
  01da26c  stfs 1, 136(1)
  01da270  lfs 1, 56(28)
  01da274  lfs 2, -3056(3)
  01da278  fmuls 1, 2, 1
  01da27c  fctiwz 1, 1
  01da280  stfd 1, 176(1)
  01da284  lwz 3, 180(1)
  01da288  extsw 3, 3
  01da28c  bl 0x6dad0
  01da290  nop
  01da294  lbz 3, 8356(29)
  01da298  cmpwi 3, 3
  01da29c  bf 2, 0x1da2a8
  01da2a0  bl 0x836ac
  01da2a4  nop
  01da2a8  addic 3, 1, 112
  01da2ac  addic 4, 1, 128
  01da2b0  li 5, 114
  01da2b4  li 6, 0
  01da2b8  bl 0xa0c38
  01da2bc  nop
  01da2c0  li 3, 0
  01da2c4  li 4, 0
  01da2c8  ori 5, 31, 0
  01da2cc  bl 0x15d12c
  01da2d0  nop
  01da2d4  lfs 1, 28(30)
  01da2d8  fadds 1, 1, 24
  01da2dc  lis 3, 30
  01da2e0  addi 28, 3, -25360
  01da2e4  fsubs 2, 26, 1
  01da2e8  fsubs 3, 27, 1
  01da2ec  li 27, 0
  01da2f0  fsub 4, 1, 2
  01da2f4  fsel 1, 4, 2, 1
  01da2f8  fsub 2, 3, 1
  01da2fc  fsel 1, 2, 3, 1
  01da300  lfs 3, 60(28)
  01da304  fmuls 2, 1, 1
  01da308  fmuls 4, 2, 1
  01da30c  fmuls 5, 2, 4
  01da310  fmadds 1, 4, 28, 1
  01da314  fmuls 4, 2, 5
  01da318  fmadds 1, 5, 29, 1
  01da31c  fmuls 2, 2, 4
  01da320  fmadds 1, 4, 30, 1
  01da324  fmadds 1, 2, 31, 1
  01da328  fmuls 23, 1, 3
  01da32c  stfs 23, 144(1)
  01da330  lfs 1, 28(30)
  01da334  fsubs 2, 26, 1
  01da338  fsubs 4, 27, 1
  01da33c  stw 27, 152(1)
  01da340  fsub 5, 1, 2
  01da344  fsel 1, 5, 2, 1
  01da348  fsub 2, 4, 1
  01da34c  fsel 1, 2, 4, 1
  01da350  fmuls 2, 1, 1
  01da354  fmuls 4, 2, 1
  01da358  fmuls 5, 2, 4
  01da35c  fmadds 1, 4, 28, 1
  01da360  fmuls 4, 2, 5
  01da364  fmadds 1, 5, 29, 1
  01da368  fmuls 2, 2, 4
  01da36c  fmadds 1, 4, 30, 1
  01da370  fmadds 1, 2, 31, 1
  01da374  fmuls 1, 1, 3
  01da378  stfs 1, 148(1)
  01da37c  lfs 22, 64(28)
  01da380  lfs 1, 28(30)
  01da384  fmr 2, 22
  01da388  bl 0x502578
  01da38c  nop
  01da390  fadds 1, 1, 24
  01da394  lfs 24, 68(28)
  01da398  lfs 21, 148(1)
  01da39c  fsubs 2, 26, 1
  01da3a0  fsubs 3, 27, 1
  01da3a4  fsub 4, 1, 2
  01da3a8  fsel 1, 4, 2, 1
  01da3ac  fsub 2, 3, 1
  01da3b0  fsel 1, 2, 3, 1
  01da3b4  fmuls 3, 1, 1
  01da3b8  fmuls 2, 3, 1
  01da3bc  fmuls 4, 3, 2
  01da3c0  fmadds 1, 2, 28, 1
  01da3c4  fmr 2, 22
  01da3c8  fmuls 5, 3, 4
  01da3cc  fmadds 1, 4, 29, 1
  01da3d0  fmuls 3, 3, 5
  01da3d4  fmadds 1, 5, 30, 1
  01da3d8  fmadds 1, 3, 31, 1
  01da3dc  fmadds 1, 1, 24, 23
  01da3e0  stfs 1, 144(1)
  01da3e4  lfs 1, 28(30)
  01da3e8  bl 0x502578
  01da3ec  nop
  01da3f0  fsubs 2, 26, 1
  01da3f4  fsubs 3, 27, 1
  01da3f8  fsub 4, 1, 2
  01da3fc  fsel 1, 4, 2, 1
  01da400  fsub 2, 3, 1
  01da404  fsel 1, 2, 3, 1
  01da408  lfs 3, 144(1)
  01da40c  fmuls 2, 1, 1
  01da410  fmuls 4, 2, 1
  01da414  fmuls 5, 2, 4
  01da418  fmadds 1, 4, 28, 1
  01da41c  fmuls 4, 2, 5
  01da420  fmadds 1, 5, 29, 1
  01da424  lfs 5, 152(1)
  01da428  fmuls 2, 2, 4
  01da42c  fmadds 1, 4, 30, 1
  01da430  fmadds 1, 2, 31, 1
  01da434  fmr 2, 22
  01da438  fmadds 1, 1, 24, 21
  01da43c  stfs 1, 148(1)
  01da440  lfs 4, 16(30)
  01da444  fadds 3, 3, 4
  01da448  stfs 3, 144(1)
  01da44c  lfs 3, 20(30)
  01da450  fadds 1, 1, 3
  01da454  stfs 1, 148(1)
  01da458  lfs 1, 24(30)
  01da45c  lfs 3, 72(28)
  01da460  fadds 1, 5, 1
  01da464  stw 27, 172(1)
  01da468  stw 27, 168(1)
  01da46c  stw 27, 164(1)
  01da470  stw 27, 160(1)
  01da474  fadds 1, 1, 3
  01da478  stfs 1, 152(1)
  01da47c  lfs 1, 28(30)
  01da480  bl 0x5025e0
  01da484  nop
  01da488  addic 28, 1, 144
  01da48c  addic 27, 1, 160
  01da490  stfs 1, 168(1)
  01da494  ori 3, 28, 0
  01da498  ori 4, 27, 0
  01da49c  li 5, 1
  01da4a0  li 6, 0
  01da4a4  li 7, 0
  01da4a8  bl 0x47f74
  01da4ac  nop
  01da4b0  ori 3, 28, 0
  01da4b4  bl 0x47b98
  01da4b8  nop
  01da4bc  ori 3, 27, 0
  01da4c0  bl 0x47c08
  01da4c4  nop
  01da4c8  lfs 1, 128(29)
  01da4cc  stfs 1, 16(31)
  01da4d0  lfs 1, 132(29)
  01da4d4  stfs 1, 20(31)
  01da4d8  lfs 1, 136(29)
  01da4dc  stfs 1, 24(31)
  01da4e0  lfs 1, 140(29)
  01da4e4  stfs 1, 28(31)
  01da4e8  lfs 1, 144(29)
  01da4ec  stfs 1, 64(31)
  01da4f0  lfs 1, 148(29)
  01da4f4  lbz 3, 83(31)
  01da4f8  stfs 1, 68(31)
  01da4fc  lfs 1, 152(29)
  01da500  cmpwi 3, 1
  01da504  stfs 1, 72(31)
  01da508  lfs 1, 156(29)
  01da50c  stfs 1, 76(31)
  01da510  bt 2, 0x1da52c
  01da514  ori 3, 31, 0
  01da518  li 4, 1
  01da51c  li 5, 0
  01da520  li 6, 0
  01da524  bl 0xfddc0
  01da528  nop
  01da52c  li 3, 130
  01da530  fmr 1, 25
  01da534  li 4, 0
  01da538  bl 0x85300
  01da53c  nop
  01da540  lis 3, 151
  01da544  addic 3, 3, -16268
  01da548  lbz 3, 5(3)
  01da54c  cmpwi 3, 0
  01da550  bt 2, 0x1da568
  01da554  lis 3, 0
  01da558  lhz 4, 52(31)
  01da55c  ori 3, 3, 32768
  01da560  or 3, 4, 3
  01da564  sth 3, 52(31)
  01da568  li 3, 1
  01da56c  lis 4, 150
  01da570  vspltisw 2, -1
  01da574  lis 6, 30
  01da578  li 5, 76
  01da57c  li 7, 2
  01da580  stb 3, 8367(29)
  01da584  addi 6, 6, -25360
  01da588  vslw 2, 2, 2
  01da58c  stw 3, -12480(4)
  01da590  li 3, -3056
  01da594  stb 7, 32(31)
  01da598  lis 4, 114
  01da59c  <unknown>
  01da5a0  vspltw 3, 3, 0
  01da5a4  <unknown>
  01da5a8  li 3, 108
  01da5ac  vmaddfp 2, 4, 3, 2
  01da5b0  vctsxs 2, 2, 0
  01da5b4  vspltw 2, 2, 0
  01da5b8  stvewx 2, 3, 30
  01da5bc  b 0x1da7e4
  01da5c0  ori 3, 31, 0
  01da5c4  bl 0x1d98b8
  01da5c8  lis 29, 151
  01da5cc  addic 29, 29, -25376
  01da5d0  lfs 1, 128(29)
  01da5d4  stfs 1, 16(31)
  01da5d8  lfs 1, 132(29)
  01da5dc  stfs 1, 20(31)
  01da5e0  lfs 1, 136(29)
  01da5e4  stfs 1, 24(31)
  01da5e8  lfs 1, 140(29)
  01da5ec  stfs 1, 28(31)
  01da5f0  lfs 1, 144(29)
  01da5f4  stfs 1, 64(31)
  01da5f8  lfs 1, 148(29)
  01da5fc  lbz 3, 82(31)
  01da600  stfs 1, 68(31)
  01da604  lfs 1, 152(29)
  01da608  cmpwi 3, 1
  01da60c  stfs 1, 72(31)
  01da610  lfs 1, 156(29)
  01da614  stfs 1, 76(31)
  01da618  bf 2, 0x1da69c
  01da61c  ori 3, 31, 0
  01da620  bl 0x1d9708
  01da624  li 3, 10
  01da628  bl 0xfc620
  01da62c  nop
  01da630  cmpwi 3, 0
  01da634  bf 2, 0x1da640
  01da638  ori 3, 31, 0
  01da63c  bl 0x1d9110
  01da640  lbz 3, 112(31)
  01da644  rlwinm 3, 3, 0, 30, 30
  01da648  cmpwi 3, 0
  01da64c  bt 2, 0x1da69c
  01da650  lbz 3, 83(31)
  01da654  cmpwi 3, 0
  01da658  bt 2, 0x1da674
  01da65c  ori 3, 31, 0
  01da660  li 4, 0
  01da664  li 5, 0
  01da668  li 6, 0
  01da66c  bl 0xfddc0
  01da670  nop
  01da674  lhz 3, 52(31)
  01da678  li 28, 0
  01da67c  ori 3, 3, 1
  01da680  stb 28, 49(31)
  01da684  sth 3, 52(31)
  01da688  ori 3, 31, 0
  01da68c  bl 0x1d9110
  01da690  addic 28, 28, 1
  01da694  cmpwi 28, 4
  01da698  bt 0, 0x1da688
  01da69c  lwz 3, 2712(29)
  01da6a0  rlwinm 3, 3, 0, 30, 30
  01da6a4  cmpwi 3, 0
  01da6a8  bt 2, 0x1da6e0
  01da6ac  lis 3, 30
  01da6b0  lis 4, 114
  01da6b4  addi 3, 3, -25360
  01da6b8  lfs 1, 80(3)
  01da6bc  lfs 2, -3056(4)
  01da6c0  li 3, 0
  01da6c4  li 4, 0
  01da6c8  fmuls 1, 2, 1
  01da6cc  fctidz 1, 1
  01da6d0  fcfid 1, 1
  01da6d4  frsp 1, 1
  01da6d8  bl 0x85300
  01da6dc  nop
  01da6e0  lbz 3, 82(31)
  01da6e4  cmpwi 3, 0
  01da6e8  bf 2, 0x1da7e4
  01da6ec  addic 3, 30, 108
  01da6f0  bl 0x4fff60
  01da6f4  nop
  01da6f8  cmpwi 3, 0
  01da6fc  bt 2, 0x1da7e4
  01da700  lis 3, 30
  01da704  li 4, 36
  01da708  vspltisw 2, -1
  01da70c  addi 3, 3, -25360
  01da710  lis 5, 114
  01da714  li 6, -3056
  01da718  vslw 2, 2, 2
  01da71c  <unknown>
  01da720  vspltw 3, 3, 0
  01da724  <unknown>
  01da728  li 3, 21427
  01da72c  lis 5, 161
  01da730  li 6, 23680
  01da734  vmaddfp 2, 4, 3, 2
  01da738  li 4, -1
  01da73c  vctsxs 2, 2, 0
  01da740  vspltw 2, 2, 0
  01da744  stvewx 2, 6, 5
  01da748  bl 0x112a38
  01da74c  nop
  01da750  lis 3, 151
  01da754  lis 4, 161
  01da758  lwz 5, 0(30)
  01da75c  li 6, 1
  01da760  addic 4, 4, -13772
  01da764  lwz 3, -25488(3)
  01da768  addc 4, 5, 4
  01da76c  slwi 3, 3, 2
  01da770  clrldi 4, 4, 32
  01da774  extsw 3, 3
  01da778  stbx 6, 4, 3
  01da77c  bl 0x11b1b4
  01da780  nop
  01da784  cmpwi 3, 40
  01da788  bf 2, 0x1da798
  01da78c  li 3, 1
  01da790  bl 0x112dc0
  01da794  nop
  01da798  lis 6, 150
  01da79c  li 7, 0
  01da7a0  addic 3, 29, 128
  01da7a4  addic 4, 29, 144
  01da7a8  li 5, 0
  01da7ac  stw 7, -12480(6)
  01da7b0  li 6, 0
  01da7b4  bl 0xa0c38
  01da7b8  nop
  01da7bc  li 3, 0
  01da7c0  bl 0x481d0
  01da7c4  nop
  01da7c8  li 3, 0
  01da7cc  li 4, -1
  01da7d0  bl 0xe8aa4
  01da7d4  nop
  01da7d8  ori 3, 31, 0
  01da7dc  bl 0xefb38
  01da7e0  nop
  01da7e4  ld 0, 336(1)
  01da7e8  mtlr 0
  01da7ec  lfd 21, 232(1)
  01da7f0  lfd 22, 240(1)
  01da7f4  lfd 23, 248(1)
  01da7f8  lfd 24, 256(1)
  01da7fc  lfd 25, 264(1)
  01da800  lfd 26, 272(1)
  01da804  lfd 27, 280(1)
  01da808  lfd 28, 288(1)
  01da80c  lfd 29, 296(1)
  01da810  lfd 30, 304(1)
  01da814  lfd 31, 312(1)
  01da818  ld 27, 192(1)
  01da81c  ld 28, 200(1)
  01da820  ld 29, 208(1)
  01da824  ld 30, 216(1)
  01da828  ld 31, 224(1)
  01da82c  addi 1, 1, 320
  01da830  blr
