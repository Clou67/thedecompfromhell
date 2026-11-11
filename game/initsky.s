# game/initsky.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_INITSKY:   # 0xd93a8, 0x14 bytes
  00d93a8  lis 3, 114
  00d93ac  lis 4, 1
  00d93b0  addic 3, 3, 17980
  00d93b4  stw 4, 72(3)
  00d93b8  blr

InitSky:   # 0xd93c0, 0x28c bytes
  00d93c0  stdu 1, -128(1)
  00d93c4  mflr 0
  00d93c8  std 0, 144(1)
  00d93cc  std 31, 120(1)
  00d93d0  lis 31, 144
  00d93d4  lis 4, 101
  00d93d8  addic 31, 31, -23532
  00d93dc  addic 4, 4, 8708
  00d93e0  lwz 3, 8(31)
  00d93e4  bl 0x50eaf8
  00d93e8  nop
  00d93ec  bl 0x159e58
  00d93f0  nop
  00d93f4  lis 3, 151
  00d93f8  lwz 3, -25488(3)
  00d93fc  cmpwi 3, 9
  00d9400  bt 1, 0xd9464
  00d9404  cmpwi 3, 3
  00d9408  bt 1, 0xd9434
  00d940c  cmpwi 3, 0
  00d9410  bt 1, 0xd9420
  00d9414  cmpwi 3, -1
  00d9418  bf 1, 0xd95b4
  00d941c  b 0xd94c4
  00d9420  cmpwi 3, 1
  00d9424  bf 1, 0xd94d0
  00d9428  cmpwi 3, 2
  00d942c  bf 1, 0xd94dc
  00d9430  b 0xd94e8
  00d9434  cmpwi 3, 6
  00d9438  bt 1, 0xd9450
  00d943c  cmpwi 3, 4
  00d9440  bf 1, 0xd94f4
  00d9444  cmpwi 3, 5
  00d9448  bf 1, 0xd9500
  00d944c  b 0xd950c
  00d9450  cmpwi 3, 7
  00d9454  bf 1, 0xd9518
  00d9458  cmpwi 3, 8
  00d945c  bf 1, 0xd9524
  00d9460  b 0xd9530
  00d9464  cmpwi 3, 14
  00d9468  bt 1, 0xd9494
  00d946c  cmpwi 3, 11
  00d9470  bt 1, 0xd9480
  00d9474  cmpwi 3, 10
  00d9478  bf 1, 0xd953c
  00d947c  b 0xd9548
  00d9480  cmpwi 3, 12
  00d9484  bf 1, 0xd9554
  00d9488  cmpwi 3, 13
  00d948c  bf 1, 0xd9560
  00d9490  b 0xd956c
  00d9494  cmpwi 3, 17
  00d9498  bt 1, 0xd94b0
  00d949c  cmpwi 3, 15
  00d94a0  bf 1, 0xd9578
  00d94a4  cmpwi 3, 16
  00d94a8  bf 1, 0xd9584
  00d94ac  b 0xd9590
  00d94b0  cmpwi 3, 18
  00d94b4  bf 1, 0xd959c
  00d94b8  cmpwi 3, 19
  00d94bc  bf 1, 0xd95a8
  00d94c0  b 0xd95b4
  00d94c4  bl 0x153e00
  00d94c8  nop
  00d94cc  b 0xd95bc
  00d94d0  bl 0x154208
  00d94d4  nop
  00d94d8  b 0xd95bc
  00d94dc  bl 0x1545b8
  00d94e0  nop
  00d94e4  b 0xd95bc
  00d94e8  bl 0x154e28
  00d94ec  nop
  00d94f0  b 0xd95bc
  00d94f4  bl 0x155198
  00d94f8  nop
  00d94fc  b 0xd95bc
  00d9500  bl 0x1554a0
  00d9504  nop
  00d9508  b 0xd95bc
  00d950c  bl 0x155788
  00d9510  nop
  00d9514  b 0xd95bc
  00d9518  bl 0x156148
  00d951c  nop
  00d9520  b 0xd95bc
  00d9524  bl 0x156550
  00d9528  nop
  00d952c  b 0xd95bc
  00d9530  bl 0x156840
  00d9534  nop
  00d9538  b 0xd95bc
  00d953c  bl 0x156bd8
  00d9540  nop
  00d9544  b 0xd95bc
  00d9548  bl 0x157030
  00d954c  nop
  00d9550  b 0xd95bc
  00d9554  bl 0x1573d0
  00d9558  nop
  00d955c  b 0xd95bc
  00d9560  bl 0x15774c
  00d9564  nop
  00d9568  b 0xd95bc
  00d956c  bl 0x157a30
  00d9570  nop
  00d9574  b 0xd95bc
  00d9578  bl 0x157d98
  00d957c  nop
  00d9580  b 0xd95bc
  00d9584  bl 0x1580b8
  00d9588  nop
  00d958c  b 0xd95bc
  00d9590  bl 0x158460
  00d9594  nop
  00d9598  b 0xd95bc
  00d959c  bl 0x158c70
  00d95a0  nop
  00d95a4  b 0xd95bc
  00d95a8  bl 0x159118
  00d95ac  nop
  00d95b0  b 0xd95bc
  00d95b4  bl 0x153c60
  00d95b8  nop
  00d95bc  bl 0x159e54
  00d95c0  nop
  00d95c4  li 3, 1
  00d95c8  li 4, 5
  00d95cc  li 8, 0
  00d95d0  li 10, 2
  00d95d4  li 5, 96
  00d95d8  li 6, 3
  00d95dc  li 7, 0
  00d95e0  li 9, 1
  00d95e4  bl 0x502f7c
  00d95e8  nop
  00d95ec  ori 4, 3, 0
  00d95f0  li 3, 22
  00d95f4  bl 0x174f80
  00d95f8  nop
  00d95fc  lis 3, 150
  00d9600  li 4, 1
  00d9604  addic 3, 3, 27352
  00d9608  li 5, 0
  00d960c  lwz 3, 8(3)
  00d9610  srawi 3, 3, 13
  00d9614  bl 0x502ffc
  00d9618  nop
  00d961c  ori 4, 3, 0
  00d9620  li 3, 33
  00d9624  bl 0x174f80
  00d9628  nop
  00d962c  lwz 3, 8(31)
  00d9630  bl 0x50ec5c
  00d9634  nop
  00d9638  ld 0, 144(1)
  00d963c  mtlr 0
  00d9640  ld 31, 120(1)
  00d9644  addi 1, 1, 128
  00d9648  blr

DrawSceneShipEffect:   # 0xd9668, 0x558 bytes
  00d9668  stdu 1, -432(1)
  00d966c  mflr 0
  00d9670  std 0, 448(1)
  00d9674  stfd 24, 368(1)
  00d9678  stfd 25, 376(1)
  00d967c  stfd 26, 384(1)
  00d9680  stfd 27, 392(1)
  00d9684  stfd 28, 400(1)
  00d9688  stfd 29, 408(1)
  00d968c  stfd 30, 416(1)
  00d9690  stfd 31, 424(1)
  00d9694  std 31, 360(1)
  00d9698  ori 31, 3, 0
  00d969c  lis 4, 14
  00d96a0  std 30, 352(1)
  00d96a4  li 3, 14
  00d96a8  std 29, 344(1)
  00d96ac  std 28, 336(1)
  00d96b0  std 27, 328(1)
  00d96b4  std 26, 320(1)
  00d96b8  addi 30, 4, -27060
  00d96bc  bl 0x685c4
  00d96c0  nop
  00d96c4  ori 29, 3, 0
  00d96c8  li 3, 0
  00d96cc  lis 9, 0
  00d96d0  li 4, 0
  00d96d4  li 5, 1
  00d96d8  li 6, 1
  00d96dc  li 7, 1
  00d96e0  li 8, 0
  00d96e4  ori 9, 9, 65424
  00d96e8  bl 0x502fd4
  00d96ec  nop
  00d96f0  ori 28, 3, 0
  00d96f4  li 3, 1
  00d96f8  li 4, 1
  00d96fc  li 8, 0
  00d9700  li 5, 0
  00d9704  li 6, 0
  00d9708  li 7, 0
  00d970c  bl 0x502f08
  00d9710  nop
  00d9714  ori 27, 3, 0
  00d9718  li 4, 2
  00d971c  li 3, 0
  00d9720  li 5, 0
  00d9724  li 6, 1
  00d9728  li 7, 128
  00d972c  bl 0x502ea8
  00d9730  nop
  00d9734  lis 4, 16368
  00d9738  lis 5, 16368
  00d973c  std 29, 296(1)
  00d9740  ori 4, 4, 32896
  00d9744  ori 5, 5, 32816
  00d9748  li 26, 0
  00d974c  lis 6, 16256
  00d9750  stw 4, 240(1)
  00d9754  addic 29, 1, 112
  00d9758  stw 4, 244(1)
  00d975c  stw 5, 248(1)
  00d9760  stw 5, 252(1)
  00d9764  li 4, 0
  00d9768  std 28, 304(1)
  00d976c  ori 5, 29, 0
  00d9770  std 27, 288(1)
  00d9774  std 3, 312(1)
  00d9778  lfs 1, 0(30)
  00d977c  ori 3, 31, 0
  00d9780  stw 26, 256(1)
  00d9784  stw 26, 260(1)
  00d9788  lfs 31, 4(30)
  00d978c  fmr 30, 1
  00d9790  stw 6, 264(1)
  00d9794  stw 26, 268(1)
  00d9798  stw 26, 272(1)
  00d979c  stw 6, 276(1)
  00d97a0  stw 6, 280(1)
  00d97a4  stw 6, 284(1)
  00d97a8  bl 0xf1038
  00d97ac  nop
  00d97b0  lfs 1, 8(30)
  00d97b4  addic 5, 1, 128
  00d97b8  ori 3, 29, 0
  00d97bc  ori 4, 29, 0
  00d97c0  bl 0x1113e0
  00d97c4  nop
  00d97c8  lfs 25, 120(1)
  00d97cc  lfs 7, 144(1)
  00d97d0  lfs 6, 152(1)
  00d97d4  fmuls 2, 7, 25
  00d97d8  lfs 28, 116(1)
  00d97dc  lfs 1, 112(1)
  00d97e0  fmuls 5, 6, 28
  00d97e4  lfs 3, 148(1)
  00d97e8  fmuls 4, 3, 1
  00d97ec  stw 26, 140(1)
  00d97f0  fmsubs 6, 6, 1, 2
  00d97f4  fmsubs 5, 3, 25, 5
  00d97f8  fmsubs 7, 7, 28, 4
  00d97fc  fmuls 2, 6, 6
  00d9800  fmadds 8, 5, 5, 2
  00d9804  fmr 2, 30
  00d9808  fmadds 8, 7, 7, 8
  00d980c  fmr 3, 2
  00d9810  fsqrts 9, 8
  00d9814  fmr 4, 3
  00d9818  fcmpu 0, 9, 4
  00d981c  bt 2, 0xd986c
  00d9820  frsqrte 2, 8
  00d9824  lis 3, 14
  00d9828  addi 3, 3, -27060
  00d982c  lfs 3, 12(3)
  00d9830  fmuls 4, 8, 2
  00d9834  fmuls 9, 3, 2
  00d9838  fnmsubs 4, 4, 2, 31
  00d983c  fmadds 2, 4, 9, 2
  00d9840  fmuls 4, 8, 2
  00d9844  fmuls 9, 3, 2
  00d9848  fnmsubs 4, 4, 2, 31
  00d984c  fmadds 2, 4, 9, 2
  00d9850  fmuls 4, 8, 2
  00d9854  fmuls 3, 3, 2
  00d9858  fnmsubs 4, 4, 2, 31
  00d985c  fmadds 2, 4, 3, 2
  00d9860  fmuls 4, 5, 2
  00d9864  fmuls 3, 6, 2
  00d9868  fmuls 2, 7, 2
  00d986c  fmuls 5, 25, 3
  00d9870  fmuls 6, 1, 2
  00d9874  stfs 4, 128(1)
  00d9878  fmuls 7, 28, 4
  00d987c  stfs 3, 132(1)
  00d9880  stfs 2, 136(1)
  00d9884  li 6, 0
  00d9888  lis 7, 16256
  00d988c  fadds 29, 25, 25
  00d9890  lis 3, 14
  00d9894  fadds 30, 28, 28
  00d9898  lis 31, 161
  00d989c  addi 3, 3, -27060
  00d98a0  stw 6, 156(1)
  00d98a4  addic 31, 31, 24396
  00d98a8  stw 7, 172(1)
  00d98ac  fmsubs 2, 28, 2, 5
  00d98b0  fmsubs 4, 25, 4, 6
  00d98b4  fmsubs 1, 1, 3, 7
  00d98b8  addic 4, 1, 112
  00d98bc  li 5, 1
  00d98c0  stfs 2, 144(1)
  00d98c4  stfs 4, 148(1)
  00d98c8  stfs 1, 152(1)
  00d98cc  lfs 31, 16(3)
  00d98d0  stw 6, 180(1)
  00d98d4  stw 6, 176(1)
  00d98d8  stw 6, 184(1)
  00d98dc  stw 7, 188(1)
  00d98e0  stfs 28, 196(1)
  00d98e4  stw 7, 192(1)
  00d98e8  lfs 27, 20(3)
  00d98ec  stw 7, 204(1)
  00d98f0  fadds 26, 25, 27
  00d98f4  stw 6, 208(1)
  00d98f8  fadds 25, 25, 31
  00d98fc  stw 7, 220(1)
  00d9900  stw 6, 212(1)
  00d9904  addic 3, 1, 176
  00d9908  stw 7, 224(1)
  00d990c  stw 6, 216(1)
  00d9910  stw 7, 236(1)
  00d9914  stfs 28, 228(1)
  00d9918  lwz 6, 28(31)
  00d991c  li 7, 9
  00d9920  stfs 26, 200(1)
  00d9924  stfs 25, 232(1)
  00d9928  bl 0x72280
  00d992c  nop
  00d9930  li 5, 1
  00d9934  lwz 4, 28(31)
  00d9938  addic 3, 1, 16
  00d993c  cmpwi 5, 2
  00d9940  bf 0, 0xd9958
  00d9944  lfs 1, 180(3)
  00d9948  fmr 2, 27
  00d994c  lfs 3, 184(3)
  00d9950  fmr 4, 31
  00d9954  b 0xd9968
  00d9958  lfs 1, 180(3)
  00d995c  fmr 2, 31
  00d9960  fmr 4, 27
  00d9964  lfs 3, 184(3)
  00d9968  fadds 3, 3, 4
  00d996c  addic 5, 5, 2
  00d9970  fadds 1, 1, 2
  00d9974  cmpwi 5, 4
  00d9978  stfs 3, 184(3)
  00d997c  stfs 1, 180(3)
  00d9980  addic 3, 3, 32
  00d9984  bt 0, 0xd993c
  00d9988  fmr 24, 29
  00d998c  addic 30, 1, 112
  00d9990  addic 29, 1, 176
  00d9994  ori 6, 4, 0
  00d9998  ori 4, 30, 0
  00d999c  ori 3, 29, 0
  00d99a0  li 5, 1
  00d99a4  li 7, 9
  00d99a8  bl 0x72280
  00d99ac  nop
  00d99b0  lis 6, 16256
  00d99b4  fadds 29, 24, 27
  00d99b8  stfs 28, 180(1)
  00d99bc  lis 5, 16384
  00d99c0  stfs 28, 212(1)
  00d99c4  ori 3, 29, 0
  00d99c8  fadds 28, 24, 31
  00d99cc  ori 4, 30, 0
  00d99d0  stw 6, 176(1)
  00d99d4  li 7, 9
  00d99d8  stw 6, 188(1)
  00d99dc  stw 5, 192(1)
  00d99e0  stfs 26, 184(1)
  00d99e4  stfs 30, 196(1)
  00d99e8  stw 6, 204(1)
  00d99ec  stw 6, 208(1)
  00d99f0  stw 6, 220(1)
  00d99f4  stw 5, 224(1)
  00d99f8  stfs 29, 200(1)
  00d99fc  li 5, 1
  00d9a00  stfs 25, 216(1)
  00d9a04  stw 6, 236(1)
  00d9a08  stfs 30, 228(1)
  00d9a0c  lwz 6, 28(31)
  00d9a10  stfs 28, 232(1)
  00d9a14  bl 0x72280
  00d9a18  nop
  00d9a1c  lwz 3, 28(31)
  00d9a20  ori 4, 1, 0
  00d9a24  li 5, 0
  00d9a28  cmpwi 5, 2
  00d9a2c  bf 0, 0xd9a44
  00d9a30  lfs 1, 180(4)
  00d9a34  fmr 2, 27
  00d9a38  fmr 4, 31
  00d9a3c  lfs 3, 184(4)
  00d9a40  b 0xd9a54
  00d9a44  lfs 1, 180(4)
  00d9a48  fmr 2, 31
  00d9a4c  lfs 3, 184(4)
  00d9a50  fmr 4, 27
  00d9a54  fadds 3, 3, 4
  00d9a58  fadds 1, 1, 2
  00d9a5c  addic 5, 5, 1
  00d9a60  cmpwi 5, 4
  00d9a64  stfs 3, 184(4)
  00d9a68  stfs 1, 180(4)
  00d9a6c  addic 4, 4, 16
  00d9a70  bt 0, 0xd9a28
  00d9a74  addic 30, 1, 112
  00d9a78  addic 29, 1, 176
  00d9a7c  ori 6, 3, 0
  00d9a80  li 5, 1
  00d9a84  ori 4, 30, 0
  00d9a88  ori 3, 29, 0
  00d9a8c  li 7, 9
  00d9a90  bl 0x72280
  00d9a94  nop
  00d9a98  lis 5, 16384
  00d9a9c  lis 8, 16256
  00d9aa0  lis 6, 16448
  00d9aa4  li 28, 0
  00d9aa8  stw 5, 176(1)
  00d9aac  ori 3, 29, 0
  00d9ab0  stfs 30, 180(1)
  00d9ab4  ori 4, 30, 0
  00d9ab8  stw 8, 188(1)
  00d9abc  li 7, 9
  00d9ac0  stfs 29, 184(1)
  00d9ac4  stw 6, 192(1)
  00d9ac8  stw 8, 204(1)
  00d9acc  stw 28, 200(1)
  00d9ad0  stw 28, 196(1)
  00d9ad4  stw 5, 208(1)
  00d9ad8  stw 8, 220(1)
  00d9adc  li 5, 1
  00d9ae0  stfs 30, 212(1)
  00d9ae4  stw 6, 224(1)
  00d9ae8  stfs 28, 216(1)
  00d9aec  stw 8, 236(1)
  00d9af0  stw 28, 228(1)
  00d9af4  lwz 6, 28(31)
  00d9af8  stw 28, 232(1)
  00d9afc  bl 0x72280
  00d9b00  nop
  00d9b04  lwz 31, 28(31)
  00d9b08  ori 3, 28, 0
  00d9b0c  ori 4, 1, 0
  00d9b10  cmpwi 3, 2
  00d9b14  bf 0, 0xd9b2c
  00d9b18  lfs 1, 180(4)
  00d9b1c  fmr 2, 27
  00d9b20  fmr 4, 31
  00d9b24  lfs 3, 184(4)
  00d9b28  b 0xd9b3c
  00d9b2c  lfs 1, 180(4)
  00d9b30  fmr 2, 31
  00d9b34  lfs 3, 184(4)
  00d9b38  fmr 4, 27
  00d9b3c  fadds 3, 3, 4
  00d9b40  fadds 1, 1, 2
  00d9b44  addic 3, 3, 2
  00d9b48  cmpwi 3, 4
  00d9b4c  stfs 3, 184(4)
  00d9b50  stfs 1, 180(4)
  00d9b54  addic 4, 4, 32
  00d9b58  bt 0, 0xd9b10
  00d9b5c  addic 4, 1, 112
  00d9b60  addic 3, 1, 176
  00d9b64  li 5, 1
  00d9b68  ori 6, 31, 0
  00d9b6c  li 7, 9
  00d9b70  bl 0x72280
  00d9b74  nop
  00d9b78  ld 0, 448(1)
  00d9b7c  mtlr 0
  00d9b80  lfd 24, 368(1)
  00d9b84  lfd 25, 376(1)
  00d9b88  lfd 26, 384(1)
  00d9b8c  lfd 27, 392(1)
  00d9b90  lfd 28, 400(1)
  00d9b94  lfd 29, 408(1)
  00d9b98  lfd 30, 416(1)
  00d9b9c  lfd 31, 424(1)
  00d9ba0  ld 26, 320(1)
  00d9ba4  ld 27, 328(1)
  00d9ba8  ld 28, 336(1)
  00d9bac  ld 29, 344(1)
  00d9bb0  ld 30, 352(1)
  00d9bb4  ld 31, 360(1)
  00d9bb8  addi 1, 1, 432
  00d9bbc  blr

SpawnSceneShipParticles:   # 0xd9bf8, 0x2d0 bytes
  00d9bf8  stdu 1, -336(1)
  00d9bfc  mflr 0
  00d9c00  std 0, 352(1)
  00d9c04  stfd 16, 208(1)
  00d9c08  stfd 17, 216(1)
  00d9c0c  stfd 18, 224(1)
  00d9c10  stfd 19, 232(1)
  00d9c14  stfd 20, 240(1)
  00d9c18  stfd 21, 248(1)
  00d9c1c  stfd 22, 256(1)
  00d9c20  stfd 23, 264(1)
  00d9c24  stfd 24, 272(1)
  00d9c28  stfd 25, 280(1)
  00d9c2c  stfd 26, 288(1)
  00d9c30  stfd 27, 296(1)
  00d9c34  stfd 28, 304(1)
  00d9c38  stfd 29, 312(1)
  00d9c3c  stfd 30, 320(1)
  00d9c40  stfd 31, 328(1)
  00d9c44  lis 4, 14
  00d9c48  std 31, 200(1)
  00d9c4c  addic 5, 1, 144
  00d9c50  addi 31, 4, -25664
  00d9c54  std 30, 192(1)
  00d9c58  std 29, 184(1)
  00d9c5c  li 4, 0
  00d9c60  bl 0xf1114
  00d9c64  nop
  00d9c68  lfs 19, 0(31)
  00d9c6c  lfs 20, 4(31)
  00d9c70  li 30, 0
  00d9c74  lfs 21, 8(31)
  00d9c78  lfs 22, 12(31)
  00d9c7c  lfs 23, 16(31)
  00d9c80  lfs 24, 20(31)
  00d9c84  lfs 25, 24(31)
  00d9c88  lfs 26, 28(31)
  00d9c8c  lfs 27, 32(31)
  00d9c90  lfs 28, 36(31)
  00d9c94  lfs 29, 40(31)
  00d9c98  lfs 30, 44(31)
  00d9c9c  lfs 31, 48(31)
  00d9ca0  fmr 1, 19
  00d9ca4  fmr 2, 20
  00d9ca8  bl 0xfcbe8
  00d9cac  nop
  00d9cb0  li 3, 2
  00d9cb4  fmr 18, 1
  00d9cb8  bl 0xfc620
  00d9cbc  nop
  00d9cc0  li 4, 0
  00d9cc4  addic 5, 3, -1
  00d9cc8  subc 4, 4, 3
  00d9ccc  extsw 5, 5
  00d9cd0  cntlzw 4, 4
  00d9cd4  subc 5, 5, 3
  00d9cd8  sldi 4, 4, 58
  00d9cdc  sradi 4, 4, 63
  00d9ce0  and 31, 4, 5
  00d9ce4  addc 31, 3, 31
  00d9ce8  bl 0xfcc68
  00d9cec  nop
  00d9cf0  fmr 17, 1
  00d9cf4  fmr 1, 21
  00d9cf8  fmr 2, 22
  00d9cfc  bl 0xfcbe8
  00d9d00  nop
  00d9d04  fmr 16, 1
  00d9d08  fmr 1, 23
  00d9d0c  fmr 2, 24
  00d9d10  bl 0xfcbe8
  00d9d14  nop
  00d9d18  lis 4, 114
  00d9d1c  addic 29, 1, 128
  00d9d20  fmr 2, 17
  00d9d24  fmr 3, 16
  00d9d28  ori 3, 29, 0
  00d9d2c  lfs 4, -3064(4)
  00d9d30  fmuls 1, 1, 4
  00d9d34  bl 0xfe610
  00d9d38  nop
  00d9d3c  fmr 1, 25
  00d9d40  fmr 2, 19
  00d9d44  bl 0xfe4f0
  00d9d48  nop
  00d9d4c  lfs 2, 144(1)
  00d9d50  fadds 3, 2, 1
  00d9d54  fmr 1, 25
  00d9d58  fmr 2, 19
  00d9d5c  stfs 3, 144(1)
  00d9d60  bl 0xfe4f0
  00d9d64  nop
  00d9d68  lfs 2, 148(1)
  00d9d6c  fadds 3, 2, 1
  00d9d70  fmr 1, 25
  00d9d74  fmr 2, 19
  00d9d78  stfs 3, 148(1)
  00d9d7c  bl 0xfe4f0
  00d9d80  nop
  00d9d84  lis 3, 114
  00d9d88  lfs 2, 152(1)
  00d9d8c  lis 7, 32639
  00d9d90  fmr 3, 28
  00d9d94  fadds 4, 2, 1
  00d9d98  ori 10, 29, 0
  00d9d9c  fmr 2, 18
  00d9da0  li 8, 0
  00d9da4  ori 7, 7, 8224
  00d9da8  lfs 1, -3056(3)
  00d9dac  addic 3, 1, 144
  00d9db0  fmuls 5, 1, 26
  00d9db4  fmuls 1, 18, 27
  00d9db8  ori 9, 31, 0
  00d9dbc  stfs 4, 152(1)
  00d9dc0  fctiwz 4, 5
  00d9dc4  stfd 4, 160(1)
  00d9dc8  lwz 4, 164(1)
  00d9dcc  extsw 4, 4
  00d9dd0  bl 0x12f8c0
  00d9dd4  nop
  00d9dd8  ori 29, 3, 0
  00d9ddc  cmpwi 29, 0
  00d9de0  bt 2, 0xd9df8
  00d9de4  fmr 1, 29
  00d9de8  bl 0x502758
  00d9dec  nop
  00d9df0  addic 3, 3, 112
  00d9df4  stb 3, 9(29)
  00d9df8  lis 3, 114
  00d9dfc  lis 7, 32639
  00d9e00  fmuls 2, 18, 31
  00d9e04  neg 9, 31
  00d9e08  fmr 3, 28
  00d9e0c  addic 10, 1, 128
  00d9e10  ori 7, 7, 32639
  00d9e14  lfs 1, -3056(3)
  00d9e18  li 8, 1
  00d9e1c  addic 3, 1, 144
  00d9e20  fmuls 4, 1, 26
  00d9e24  fmuls 1, 18, 30
  00d9e28  fctiwz 4, 4
  00d9e2c  stfd 4, 160(1)
  00d9e30  lwz 4, 164(1)
  00d9e34  extsw 4, 4
  00d9e38  bl 0x12f8c0
  00d9e3c  nop
  00d9e40  ori 31, 3, 0
  00d9e44  cmpwi 31, 0
  00d9e48  bt 2, 0xd9e60
  00d9e4c  fmr 1, 29
  00d9e50  bl 0x502758
  00d9e54  nop
  00d9e58  addic 3, 3, 112
  00d9e5c  stb 3, 9(31)
  00d9e60  addic 30, 30, 1
  00d9e64  cmpwi 30, 4
  00d9e68  bt 0, 0xd9ca0
  00d9e6c  ld 0, 352(1)
  00d9e70  mtlr 0
  00d9e74  lfd 16, 208(1)
  00d9e78  lfd 17, 216(1)
  00d9e7c  lfd 18, 224(1)
  00d9e80  lfd 19, 232(1)
  00d9e84  lfd 20, 240(1)
  00d9e88  lfd 21, 248(1)
  00d9e8c  lfd 22, 256(1)
  00d9e90  lfd 23, 264(1)
  00d9e94  lfd 24, 272(1)
  00d9e98  lfd 25, 280(1)
  00d9e9c  lfd 26, 288(1)
  00d9ea0  lfd 27, 296(1)
  00d9ea4  lfd 28, 304(1)
  00d9ea8  lfd 29, 312(1)
  00d9eac  lfd 30, 320(1)
  00d9eb0  lfd 31, 328(1)
  00d9eb4  ld 29, 184(1)
  00d9eb8  ld 30, 192(1)
  00d9ebc  ld 31, 200(1)
  00d9ec0  addi 1, 1, 336
  00d9ec4  blr

UpdateSpaceSceneEffects:   # 0xd9ee8, 0x3f8 bytes
  00d9ee8  stdu 1, -256(1)
  00d9eec  mflr 0
  00d9ef0  std 0, 272(1)
  00d9ef4  stfd 25, 200(1)
  00d9ef8  stfd 26, 208(1)
  00d9efc  stfd 27, 216(1)
  00d9f00  stfd 28, 224(1)
  00d9f04  stfd 29, 232(1)
  00d9f08  stfd 30, 240(1)
  00d9f0c  stfd 31, 248(1)
  00d9f10  lis 3, 151
  00d9f14  lwz 3, -25488(3)
  00d9f18  std 31, 192(1)
  00d9f1c  std 30, 184(1)
  00d9f20  std 29, 176(1)
  00d9f24  std 28, 168(1)
  00d9f28  std 27, 160(1)
  00d9f2c  cmpwi 3, 0
  00d9f30  bf 2, 0xd9f90
  00d9f34  lis 29, 150
  00d9f38  li 28, 0
  00d9f3c  addic 29, 29, -12976
  00d9f40  lhz 3, 68(29)
  00d9f44  extsh 4, 3
  00d9f48  cmpwi 4, 0
  00d9f4c  bf 1, 0xd9f90
  00d9f50  lis 30, 112
  00d9f54  ori 31, 29, 0
  00d9f58  addic 30, 30, 31960
  00d9f5c  lwz 4, 376(31)
  00d9f60  lhz 5, 166(4)
  00d9f64  cmpwi 5, 530
  00d9f68  bf 2, 0xd9f7c
  00d9f6c  ori 3, 30, 0
  00d9f70  bl 0x6d720
  00d9f74  nop
  00d9f78  lhz 3, 68(29)
  00d9f7c  extsh 4, 3
  00d9f80  addic 28, 28, 1
  00d9f84  addic 31, 31, 4
  00d9f88  cmpw 28, 4
  00d9f8c  bt 0, 0xd9f5c
  00d9f90  lis 3, 151
  00d9f94  lwz 3, -25488(3)
  00d9f98  cmpwi 3, 2
  00d9f9c  bf 2, 0xd9ff4
  00d9fa0  lis 6, 150
  00d9fa4  li 8, 0
  00d9fa8  addic 6, 6, -12976
  00d9fac  lhz 5, 68(6)
  00d9fb0  extsh 4, 5
  00d9fb4  cmpwi 4, 0
  00d9fb8  bf 1, 0xd9ff4
  00d9fbc  ori 4, 6, 0
  00d9fc0  lwz 7, 376(4)
  00d9fc4  lhz 9, 166(7)
  00d9fc8  cmpwi 9, 433
  00d9fcc  bf 2, 0xd9fe0
  00d9fd0  lhz 5, 52(7)
  00d9fd4  ori 5, 5, 2048
  00d9fd8  sth 5, 52(7)
  00d9fdc  lhz 5, 68(6)
  00d9fe0  extsh 7, 5
  00d9fe4  addic 8, 8, 1
  00d9fe8  addic 4, 4, 4
  00d9fec  cmpw 8, 7
  00d9ff0  bt 0, 0xd9fc0
  00d9ff4  cmpwi 3, 3
  00d9ff8  bf 2, 0xda188
  00d9ffc  lis 31, 150
  00da000  addic 31, 31, -12976
  00da004  lwz 4, 48(31)
  00da008  cmpwi 4, 5
  00da00c  bf 2, 0xda188
  00da010  lis 4, 14
  00da014  lis 5, 114
  00da018  addi 4, 4, -24888
  00da01c  lfs 2, 0(4)
  00da020  lfs 1, -3056(5)
  00da024  lwz 4, 52(31)
  00da028  fmuls 2, 1, 2
  00da02c  fctiwz 2, 2
  00da030  stfd 2, 144(1)
  00da034  lwz 5, 148(1)
  00da038  cmpw 4, 5
  00da03c  bf 1, 0xda188
  00da040  lis 5, 14
  00da044  addi 5, 5, -24888
  00da048  lfs 2, 4(5)
  00da04c  fmuls 1, 1, 2
  00da050  fctiwz 1, 1
  00da054  stfd 1, 144(1)
  00da058  lwz 5, 148(1)
  00da05c  cmpw 4, 5
  00da060  bf 0, 0xda188
  00da064  lwz 31, 388(31)
  00da068  cmpwi 31, 0
  00da06c  bt 2, 0xda188
  00da070  lis 3, 14
  00da074  li 29, 0
  00da078  addi 3, 3, -24888
  00da07c  ori 30, 29, 0
  00da080  lfs 27, 8(3)
  00da084  lfs 28, 12(3)
  00da088  lfs 29, 16(3)
  00da08c  lfs 30, 20(3)
  00da090  lfs 31, 24(3)
  00da094  srawi 3, 29, 1
  00da098  stw 30, 140(1)
  00da09c  addze 4, 3
  00da0a0  stw 30, 136(1)
  00da0a4  addic 28, 1, 112
  00da0a8  sldi 4, 4, 1
  00da0ac  stw 30, 132(1)
  00da0b0  ori 3, 31, 0
  00da0b4  stw 30, 128(1)
  00da0b8  subc 4, 29, 4
  00da0bc  ori 5, 28, 0
  00da0c0  extsw 4, 4
  00da0c4  bl 0xf1114
  00da0c8  nop
  00da0cc  bl 0xfcc68
  00da0d0  nop
  00da0d4  fmr 26, 1
  00da0d8  bl 0xfcc68
  00da0dc  nop
  00da0e0  lis 3, 114
  00da0e4  fmr 25, 1
  00da0e8  lfs 2, -3052(3)
  00da0ec  fmuls 1, 2, 27
  00da0f0  fmuls 2, 2, 28
  00da0f4  bl 0xfcbe8
  00da0f8  nop
  00da0fc  addic 27, 1, 128
  00da100  fmr 2, 26
  00da104  ori 3, 27, 0
  00da108  fmr 3, 25
  00da10c  bl 0xfe610
  00da110  nop
  00da114  lis 3, 114
  00da118  lfs 1, -3056(3)
  00da11c  fmuls 2, 1, 30
  00da120  fmuls 1, 1, 31
  00da124  fctiwz 2, 2
  00da128  fctiwz 1, 1
  00da12c  stfd 2, 144(1)
  00da130  lwz 3, 148(1)
  00da134  stfd 1, 144(1)
  00da138  lwz 4, 148(1)
  00da13c  extsw 3, 3
  00da140  extsw 4, 4
  00da144  bl 0xfe484
  00da148  nop
  00da14c  lis 5, -32640
  00da150  lis 6, 128
  00da154  fmr 1, 29
  00da158  ori 8, 3, 0
  00da15c  ori 3, 28, 0
  00da160  ori 4, 27, 0
  00da164  ori 5, 5, 32896
  00da168  ori 6, 6, 32896
  00da16c  bl 0x126dd8
  00da170  nop
  00da174  addic 29, 29, 1
  00da178  cmpwi 29, 4
  00da17c  bt 0, 0xda094
  00da180  lis 3, 151
  00da184  lwz 3, -25488(3)
  00da188  ori 4, 3, 0
  00da18c  cmpwi 4, 7
  00da190  bf 2, 0xda1e0
  00da194  lis 5, 150
  00da198  addic 5, 5, -12976
  00da19c  lwz 6, 48(5)
  00da1a0  cmpwi 6, 4
  00da1a4  bf 2, 0xda1e0
  00da1a8  lwz 5, 392(5)
  00da1ac  cmpwi 5, 0
  00da1b0  bt 2, 0xda1e0
  00da1b4  lhz 6, 166(5)
  00da1b8  cmpwi 6, 532
  00da1bc  bf 2, 0xda1e0
  00da1c0  lis 3, 112
  00da1c4  ori 4, 5, 0
  00da1c8  addic 3, 3, 31960
  00da1cc  bl 0x6d720
  00da1d0  nop
  00da1d4  lis 4, 151
  00da1d8  lwz 4, -25488(4)
  00da1dc  ori 3, 4, 0
  00da1e0  cmpwi 4, 14
  00da1e4  bf 2, 0xda240
  00da1e8  lis 4, 150
  00da1ec  addic 4, 4, -12976
  00da1f0  lwz 5, 48(4)
  00da1f4  cmpwi 5, 0
  00da1f8  bf 2, 0xda240
  00da1fc  lwz 31, 380(4)
  00da200  cmpwi 31, 0
  00da204  bt 2, 0xda240
  00da208  lwz 4, 52(4)
  00da20c  cmpwi 1, 4, 34
  00da210  cmpwi 4, 28
  00da214  crorc 2, 0, 4
  00da218  bt 2, 0xda240
  00da21c  ori 3, 31, 0
  00da220  bl 0xd9bf8
  00da224  lis 3, 112
  00da228  ori 4, 31, 0
  00da22c  addic 3, 3, 22952
  00da230  bl 0x6d720
  00da234  nop
  00da238  lis 3, 151
  00da23c  lwz 3, -25488(3)
  00da240  cmpwi 3, 15
  00da244  bf 2, 0xda2a0
  00da248  lis 30, 150
  00da24c  addic 30, 30, -12976
  00da250  lwz 3, 48(30)
  00da254  cmpwi 3, 3
  00da258  cmpwi 1, 3, 4
  00da25c  bt 2, 0xda264
  00da260  bf 6, 0xda2a0
  00da264  lhz 3, 68(30)
  00da268  li 29, 0
  00da26c  extsh 3, 3
  00da270  cmpwi 3, 0
  00da274  bf 1, 0xda2a0
  00da278  ori 31, 30, 0
  00da27c  lwz 3, 376(31)
  00da280  bl 0xfa3a8
  00da284  nop
  00da288  lhz 3, 68(30)
  00da28c  addic 29, 29, 1
  00da290  extsh 3, 3
  00da294  addic 31, 31, 4
  00da298  cmpw 29, 3
  00da29c  bt 0, 0xda27c
  00da2a0  ld 0, 272(1)
  00da2a4  mtlr 0
  00da2a8  lfd 25, 200(1)
  00da2ac  lfd 26, 208(1)
  00da2b0  lfd 27, 216(1)
  00da2b4  lfd 28, 224(1)
  00da2b8  lfd 29, 232(1)
  00da2bc  lfd 30, 240(1)
  00da2c0  lfd 31, 248(1)
  00da2c4  ld 27, 160(1)
  00da2c8  ld 28, 168(1)
  00da2cc  ld 29, 176(1)
  00da2d0  ld 30, 184(1)
  00da2d4  ld 31, 192(1)
  00da2d8  addi 1, 1, 256
  00da2dc  blr
