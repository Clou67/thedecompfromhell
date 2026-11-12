# game/mesh.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_MESH:   # 0xe9114, 0x14 bytes
  00e9114  lis 3, 114
  00e9118  lis 4, 1
  00e911c  addic 3, 3, 27236
  00e9120  stw 4, 72(3)
  00e9124  blr

STUB_000e9130:   # 0xe9130, 0x4 bytes
  00e9130  blr

STUB_000e9134:   # 0xe9134, 0x4 bytes
  00e9134  blr

STUB_000e9138:   # 0xe9138, 0x4 bytes
  00e9138  blr

STUB_000e913c:   # 0xe913c, 0x4 bytes
  00e913c  blr

STUB_000e9140:   # 0xe9140, 0x8 bytes
  00e9140  li 3, 0
  00e9144  blr

STUB_000e9148:   # 0xe9148, 0x4 bytes
  00e9148  blr

STUB_000e914c:   # 0xe914c, 0x4 bytes
  00e914c  blr

STUB_000e9150:   # 0xe9150, 0x8 bytes
  00e9150  li 3, 0
  00e9154  blr

STUB_000e9158:   # 0xe9158, 0x4 bytes
  00e9158  blr

AddUVOffsets:   # 0xe915c, 0x4c bytes
  00e915c  ori 7, 3, 0
  00e9160  lfs 2, 0(6)
  00e9164  ori 3, 4, 0
  00e9168  lfs 1, 4(6)
  00e916c  cmpwi 5, 0
  00e9170  ori 4, 7, 0
  00e9174  bf 1, 0xe91a4
  00e9178  lfs 3, 0(3)
  00e917c  addic 5, 5, -1
  00e9180  fadds 3, 3, 2
  00e9184  cmpwi 5, 0
  00e9188  stfs 3, 0(4)
  00e918c  lfs 3, 4(3)
  00e9190  addic 3, 3, 8
  00e9194  fadds 3, 3, 1
  00e9198  stfs 3, 4(4)
  00e919c  addic 4, 4, 8
  00e91a0  bt 1, 0xe9178
  00e91a4  blr

StageTileBuf:   # 0xe91a8, 0x138 bytes
  00e91a8  stdu 1, -160(1)
  00e91ac  mflr 0
  00e91b0  std 0, 176(1)
  00e91b4  std 31, 152(1)
  00e91b8  std 30, 144(1)
  00e91bc  ori 31, 4, 0
  00e91c0  ori 30, 3, 0
  00e91c4  addic 4, 31, 1024
  00e91c8  addic 3, 30, 16
  00e91cc  std 29, 136(1)
  00e91d0  std 28, 128(1)
  00e91d4  std 27, 120(1)
  00e91d8  li 5, 64
  00e91dc  bl 0x5c5ad0
  00e91e0  nop
  00e91e4  li 4, 0
  00e91e8  ori 29, 31, 0
  00e91ec  addic 3, 30, 16
  00e91f0  addic 28, 4, 1
  00e91f4  addic 27, 3, 96
  00e91f8  ori 4, 29, 0
  00e91fc  ori 3, 27, 0
  00e9200  li 5, 64
  00e9204  bl 0x5c5ad0
  00e9208  nop
  00e920c  ori 4, 28, 0
  00e9210  addic 29, 29, 64
  00e9214  cmplwi 4, 16
  00e9218  ori 3, 27, 0
  00e921c  bt 0, 0xe91f0
  00e9220  addic 3, 30, 1648
  00e9224  addic 4, 31, 1152
  00e9228  li 5, 64
  00e922c  bl 0x5c5ad0
  00e9230  nop
  00e9234  addic 3, 30, 1744
  00e9238  addic 4, 31, 1280
  00e923c  li 5, 64
  00e9240  bl 0x5c5ad0
  00e9244  nop
  00e9248  lfs 6, 1408(31)
  00e924c  lfs 5, 1412(31)
  00e9250  li 7, 16
  00e9254  lfs 4, 1416(31)
  00e9258  ori 6, 31, 0
  00e925c  lfs 3, 1420(31)
  00e9260  addic 5, 30, 12
  00e9264  lfs 2, 1424(31)
  00e9268  addic 4, 30, 80
  00e926c  addic 3, 30, 84
  00e9270  lfs 1, 1428(31)
  00e9274  mtctr 7
  00e9278  lfs 7, 1088(6)
  00e927c  stfs 7, 96(5)
  00e9280  lfs 7, 1216(6)
  00e9284  addic 5, 5, 96
  00e9288  stfs 7, 96(4)
  00e928c  lfs 7, 1344(6)
  00e9290  addic 4, 4, 96
  00e9294  addic 6, 6, 4
  00e9298  stfs 7, 96(3)
  00e929c  addic 3, 3, 96
  00e92a0  bdnz 0xe9278
  00e92a4  stfs 6, 12(30)
  00e92a8  stfs 5, 80(30)
  00e92ac  stfs 4, 1644(30)
  00e92b0  stfs 3, 1712(30)
  00e92b4  stfs 2, 1716(30)
  00e92b8  stfs 1, 1808(30)
  00e92bc  ld 0, 176(1)
  00e92c0  mtlr 0
  00e92c4  ld 27, 120(1)
  00e92c8  ld 28, 128(1)
  00e92cc  ld 29, 136(1)
  00e92d0  ld 30, 144(1)
  00e92d4  ld 31, 152(1)
  00e92d8  addi 1, 1, 160
  00e92dc  blr

WaterTileBufLerp:   # 0xe92e8, 0xb4 bytes
  00e92e8  lis 6, 15
  00e92ec  ori 8, 5, 0
  00e92f0  addi 7, 6, -27936
  00e92f4  ori 6, 3, 0
  00e92f8  ori 5, 4, 0
  00e92fc  ori 4, 8, 0
  00e9300  li 3, 0
  00e9304  lfs 2, 0(7)
  00e9308  fsubs 2, 2, 1
  00e930c  li 10, 4
  00e9310  ori 9, 5, 0
  00e9314  ori 8, 4, 0
  00e9318  ori 7, 6, 0
  00e931c  mtctr 10
  00e9320  lfs 3, 0(4)
  00e9324  addic 9, 9, 16
  00e9328  lfs 4, 4(4)
  00e932c  addic 8, 8, 16
  00e9330  fmuls 3, 3, 1
  00e9334  lfs 5, 8(4)
  00e9338  fmuls 4, 4, 1
  00e933c  lfs 6, 12(4)
  00e9340  fmuls 5, 5, 1
  00e9344  lfs 7, 0(5)
  00e9348  fmuls 6, 6, 1
  00e934c  lfs 8, 4(5)
  00e9350  lfs 9, 8(5)
  00e9354  addic 7, 7, 16
  00e9358  lfs 10, 12(5)
  00e935c  ori 4, 8, 0
  00e9360  ori 5, 9, 0
  00e9364  fmadds 3, 7, 2, 3
  00e9368  fmadds 4, 8, 2, 4
  00e936c  fmadds 5, 9, 2, 5
  00e9370  fmadds 6, 10, 2, 6
  00e9374  stfs 3, 0(6)
  00e9378  stfs 4, 4(6)
  00e937c  stfs 5, 8(6)
  00e9380  stfs 6, 12(6)
  00e9384  ori 6, 7, 0
  00e9388  bdnz 0xe9320
  00e938c  addic 3, 3, 1
  00e9390  cmplwi 3, 23
  00e9394  bt 0, 0xe930c
  00e9398  blr

ShadeVerts:   # 0xe9470, 0x78c bytes
  00e9470  stdu 1, -720(1)
  00e9474  addi 0, 1, 400
  00e9478  stvx 21, 0, 0
  00e947c  addic 0, 0, 16
  00e9480  stvx 22, 0, 0
  00e9484  addic 0, 0, 16
  00e9488  stvx 23, 0, 0
  00e948c  addic 0, 0, 16
  00e9490  stvx 24, 0, 0
  00e9494  addic 0, 0, 16
  00e9498  stvx 25, 0, 0
  00e949c  addic 0, 0, 16
  00e94a0  stvx 26, 0, 0
  00e94a4  addic 0, 0, 16
  00e94a8  stvx 27, 0, 0
  00e94ac  addic 0, 0, 16
  00e94b0  stvx 28, 0, 0
  00e94b4  addic 0, 0, 16
  00e94b8  stvx 29, 0, 0
  00e94bc  addic 0, 0, 16
  00e94c0  stvx 30, 0, 0
  00e94c4  addic 0, 0, 16
  00e94c8  stvx 31, 0, 0
  00e94cc  std 29, 696(1)
  00e94d0  lis 4, 144
  00e94d4  lis 29, 116
  00e94d8  li 5, 16
  00e94dc  addic 29, 29, -22016
  00e94e0  std 27, 680(1)
  00e94e4  li 6, 20
  00e94e8  lwz 27, 11976(4)
  00e94ec  li 4, 368
  00e94f0  std 27, 344(1)
  00e94f4  lfs 1, 48(29)
  00e94f8  li 7, 4
  00e94fc  lfs 2, 52(29)
  00e9500  li 8, 352
  00e9504  lfs 3, 56(29)
  00e9508  li 9, 12
  00e950c  std 25, 664(1)
  00e9510  lvlx 2, 5, 29
  00e9514  lis 25, 15
  00e9518  lvlx 3, 6, 29
  00e951c  lis 5, 149
  00e9520  stvx 2, 4, 1
  00e9524  li 6, 320
  00e9528  lvlx 2, 7, 3
  00e952c  li 4, 0
  00e9530  stvx 3, 8, 1
  00e9534  addic 5, 5, 5056
  00e9538  std 26, 672(1)
  00e953c  lvlx 3, 9, 29
  00e9540  addic 26, 27, 1920
  00e9544  stfs 1, 48(1)
  00e9548  addi 25, 25, -27744
  00e954c  vaddfp 2, 2, 3
  00e9550  stfs 2, 52(1)
  00e9554  stfs 3, 56(1)
  00e9558  addic 27, 27, 4232
  00e955c  std 4, 384(1)
  00e9560  lfs 1, 320(5)
  00e9564  lfs 2, 324(5)
  00e9568  lfs 3, 328(5)
  00e956c  stfs 1, 64(1)
  00e9570  std 31, 712(1)
  00e9574  std 30, 704(1)
  00e9578  std 28, 688(1)
  00e957c  std 24, 656(1)
  00e9580  std 23, 648(1)
  00e9584  std 22, 640(1)
  00e9588  std 21, 632(1)
  00e958c  std 20, 624(1)
  00e9590  std 19, 616(1)
  00e9594  std 18, 608(1)
  00e9598  std 17, 600(1)
  00e959c  std 16, 592(1)
  00e95a0  std 15, 584(1)
  00e95a4  stfs 2, 68(1)
  00e95a8  stfs 3, 72(1)
  00e95ac  std 4, 336(1)
  00e95b0  stvx 2, 6, 1
  00e95b4  li 5, 320
  00e95b8  li 7, 368
  00e95bc  li 6, 304
  00e95c0  li 20, 8
  00e95c4  li 8, 352
  00e95c8  lvx 2, 5, 1
  00e95cc  li 9, 32
  00e95d0  lvlx 3, 0, 25
  00e95d4  li 10, 48
  00e95d8  vspltw 2, 2, 0
  00e95dc  li 11, 64
  00e95e0  lvx 27, 7, 1
  00e95e4  li 23, 88
  00e95e8  lvlx 4, 0, 3
  00e95ec  li 7, 16
  00e95f0  vspltw 3, 3, 0
  00e95f4  li 19, 112
  00e95f8  li 18, 144
  00e95fc  vspltw 26, 27, 0
  00e9600  li 17, 272
  00e9604  stvx 2, 6, 1
  00e9608  ld 6, 344(1)
  00e960c  lvlx 2, 20, 29
  00e9610  ld 31, 336(1)
  00e9614  addic 30, 6, 112
  00e9618  lvx 31, 8, 1
  00e961c  lvx 13, 7, 25
  00e9620  li 7, 92
  00e9624  lvx 12, 9, 25
  00e9628  addc 8, 31, 30
  00e962c  lvx 7, 10, 25
  00e9630  li 30, 96
  00e9634  vxor 8, 3, 27
  00e9638  addic 10, 6, 116
  00e963c  vxor 29, 3, 31
  00e9640  lvx 6, 11, 25
  00e9644  addic 9, 6, 108
  00e9648  lvlx 3, 7, 25
  00e964c  addc 24, 31, 10
  00e9650  li 11, 100
  00e9654  vaddfp 2, 4, 2
  00e9658  addic 7, 6, 16
  00e965c  lvlx 4, 30, 25
  00e9660  li 10, 104
  00e9664  vspltw 3, 3, 0
  00e9668  addic 6, 6, 208
  00e966c  vspltw 4, 4, 0
  00e9670  addc 9, 31, 9
  00e9674  addc 7, 31, 7
  00e9678  addc 6, 31, 6
  00e967c  lvlx 5, 11, 25
  00e9680  li 30, 80
  00e9684  lvlx 9, 10, 25
  00e9688  li 31, 240
  00e968c  vspltw 10, 5, 0
  00e9690  li 10, 84
  00e9694  vspltw 9, 9, 0
  00e9698  li 11, 224
  00e969c  vspltw 28, 29, 0
  00e96a0  ori 5, 26, 0
  00e96a4  vspltw 30, 31, 0
  00e96a8  lvlx 5, 30, 25
  00e96ac  ori 28, 27, 0
  00e96b0  li 30, 288
  00e96b4  stvx 3, 31, 1
  00e96b8  li 31, 256
  00e96bc  lvlx 11, 10, 25
  00e96c0  li 10, 128
  00e96c4  lvlx 16, 23, 25
  00e96c8  stvx 4, 11, 1
  00e96cc  ori 12, 4, 0
  00e96d0  clrldi 11, 8, 32
  00e96d4  vspltw 4, 8, 0
  00e96d8  stvx 10, 30, 1
  00e96dc  clrldi 8, 7, 32
  00e96e0  stvx 9, 31, 1
  00e96e4  li 30, 160
  00e96e8  lvx 3, 19, 25
  00e96ec  li 31, 176
  00e96f0  lvx 10, 10, 25
  00e96f4  clrldi 7, 6, 32
  00e96f8  lvx 9, 18, 25
  00e96fc  li 6, 208
  00e9700  stvx 3, 17, 1
  00e9704  li 19, 192
  00e9708  vspltisw 3, 0
  00e970c  li 18, 196
  00e9710  lvx 15, 31, 25
  00e9714  li 17, 200
  00e9718  li 31, 192
  00e971c  lvx 0, 30, 25
  00e9720  li 30, 176
  00e9724  vspltw 5, 5, 0
  00e9728  vperm 8, 8, 3, 15
  00e972c  clrldi 10, 9, 32
  00e9730  stvx 0, 6, 1
  00e9734  clrldi 9, 24, 32
  00e9738  li 21, 128
  00e973c  vspltw 11, 11, 0
  00e9740  stvx 4, 31, 1
  00e9744  li 22, 112
  00e9748  li 31, 204
  00e974c  vspltw 16, 16, 0
  00e9750  li 23, 80
  00e9754  vperm 27, 27, 3, 15
  00e9758  stvx 8, 30, 1
  00e975c  li 24, 24
  00e9760  lvlx 19, 19, 25
  00e9764  addic 6, 5, 4
  00e9768  lvlx 1, 18, 25
  00e976c  li 19, 88
  00e9770  lvlx 18, 17, 25
  00e9774  lvlx 17, 31, 25
  00e9778  vperm 29, 3, 29, 10
  00e977c  vperm 31, 3, 31, 10
  00e9780  vspltw 19, 19, 0
  00e9784  vspltw 1, 1, 0
  00e9788  vspltw 18, 18, 0
  00e978c  vspltw 17, 17, 0
  00e9790  li 31, 16
  00e9794  lvlx 4, 0, 11
  00e9798  li 30, 96
  00e979c  li 18, 192
  00e97a0  li 17, 120
  00e97a4  li 16, 16
  00e97a8  lvrx 8, 31, 11
  00e97ac  li 31, 104
  00e97b0  vor 4, 4, 8
  00e97b4  lvx 8, 30, 1
  00e97b8  li 30, 16
  00e97bc  stw 4, 96(1)
  00e97c0  stw 4, 100(1)
  00e97c4  vspltw 0, 4, 0
  00e97c8  li 15, 148
  00e97cc  stvewx 0, 31, 1
  00e97d0  lvlx 0, 0, 10
  00e97d4  li 31, 208
  00e97d8  lvrx 14, 30, 10
  00e97dc  lvx 25, 18, 1
  00e97e0  vor 0, 0, 14
  00e97e4  li 30, 136
  00e97e8  lvx 14, 22, 1
  00e97ec  li 18, 144
  00e97f0  stvewx 25, 22, 1
  00e97f4  stw 4, 116(1)
  00e97f8  vspltw 25, 0, 0
  00e97fc  vperm 0, 0, 14, 15
  00e9800  stvewx 25, 17, 1
  00e9804  lvlx 25, 0, 9
  00e9808  lvrx 24, 16, 9
  00e980c  li 17, 272
  00e9810  li 16, 16
  00e9814  vor 25, 25, 24
  00e9818  lvx 24, 21, 1
  00e981c  stvewx 26, 21, 1
  00e9820  lvx 23, 31, 1
  00e9824  vspltw 22, 25, 0
  00e9828  stw 4, 132(1)
  00e982c  li 31, 176
  00e9830  vperm 4, 3, 4, 23
  00e9834  lvx 23, 17, 1
  00e9838  vperm 25, 25, 24, 15
  00e983c  li 17, 16
  00e9840  stvewx 22, 30, 1
  00e9844  lvlx 14, 0, 8
  00e9848  lvrx 22, 16, 8
  00e984c  li 30, 152
  00e9850  vperm 4, 4, 8, 23
  00e9854  vor 8, 14, 22
  00e9858  lvx 14, 31, 1
  00e985c  lvx 23, 18, 1
  00e9860  vperm 0, 14, 0, 9
  00e9864  li 31, 160
  00e9868  vspltw 14, 8, 0
  00e986c  stw 4, 144(1)
  00e9870  stvewx 28, 15, 1
  00e9874  vperm 8, 8, 23, 10
  00e9878  stvewx 14, 30, 1
  00e987c  vperm 14, 27, 25, 9
  00e9880  lvlx 25, 0, 7
  00e9884  lvrx 24, 17, 7
  00e9888  lvx 23, 31, 1
  00e988c  vor 25, 25, 24
  00e9890  vperm 8, 29, 8, 9
  00e9894  vperm 24, 25, 23, 10
  00e9898  vsubfp 23, 4, 8
  00e989c  vsubfp 8, 8, 0
  00e98a0  vperm 0, 31, 24, 9
  00e98a4  li 31, 164
  00e98a8  li 30, 168
  00e98ac  vsubfp 24, 4, 0
  00e98b0  vsubfp 0, 0, 14
  00e98b4  stw 4, 160(1)
  00e98b8  stvewx 30, 31, 1
  00e98bc  vperm 14, 23, 23, 13
  00e98c0  vperm 22, 8, 8, 12
  00e98c4  vperm 23, 23, 23, 12
  00e98c8  vperm 8, 8, 8, 13
  00e98cc  vmaddfp 14, 14, 22, 3
  00e98d0  vperm 22, 24, 24, 13
  00e98d4  vperm 21, 0, 0, 12
  00e98d8  vperm 24, 24, 24, 12
  00e98dc  vperm 0, 0, 0, 13
  00e98e0  vmaddfp 22, 22, 21, 3
  00e98e4  li 31, 48
  00e98e8  vnmsubfp 8, 23, 8, 14
  00e98ec  vnmsubfp 0, 24, 0, 22
  00e98f0  li 17, 84
  00e98f4  li 18, 64
  00e98f8  vaddfp 8, 0, 8
  00e98fc  vmaddfp 0, 8, 8, 3
  00e9900  vperm 14, 8, 8, 7
  00e9904  vperm 24, 8, 8, 6
  00e9908  vmaddfp 0, 14, 14, 0
  00e990c  vspltw 14, 25, 0
  00e9910  stvewx 14, 30, 1
  00e9914  lvx 25, 31, 1
  00e9918  vmaddfp 0, 24, 24, 0
  00e991c  vperm 22, 25, 25, 6
  00e9920  vperm 24, 25, 25, 7
  00e9924  li 31, 240
  00e9928  li 30, 304
  00e992c  vspltw 0, 0, 0
  00e9930  vrsqrtefp 14, 0
  00e9934  vmaddfp 0, 14, 0, 3
  00e9938  vmaddfp 23, 14, 5, 3
  00e993c  vnmsubfp 0, 14, 0, 11
  00e9940  vmaddfp 0, 0, 23, 14
  00e9944  vcmpeqfp 23, 0, 0
  00e9948  vsel 0, 14, 0, 23
  00e994c  lvx 14, 31, 1
  00e9950  vmaddfp 8, 8, 0, 3
  00e9954  li 31, 224
  00e9958  vspltw 0, 2, 0
  00e995c  vmaddfp 25, 25, 8, 3
  00e9960  vperm 23, 8, 8, 7
  00e9964  vperm 21, 8, 8, 6
  00e9968  vmaddfp 25, 24, 23, 25
  00e996c  vspltisw 24, -1
  00e9970  lvx 23, 31, 1
  00e9974  li 31, 320
  00e9978  vslw 24, 24, 24
  00e997c  vmaddfp 25, 22, 21, 25
  00e9980  vspltw 25, 25, 0
  00e9984  vsubfp 25, 25, 16
  00e9988  vmaddfp 14, 25, 14, 16
  00e998c  vspltisw 25, 8
  00e9990  vcmpgtfp 22, 3, 14
  00e9994  vandc 14, 14, 22
  00e9998  vcmpgtfp 22, 14, 11
  00e999c  vsel 14, 14, 11, 22
  00e99a0  vmaddfp 14, 14, 23, 24
  00e99a4  lvx 24, 31, 1
  00e99a8  lvx 23, 30, 1
  00e99ac  vperm 2, 2, 24, 10
  00e99b0  vctsxs 14, 14, 0
  00e99b4  ori 31, 6, 0
  00e99b8  ori 30, 5, 0
  00e99bc  vadduwm 14, 14, 19
  00e99c0  vcmpgtsw 24, 14, 1
  00e99c4  vsel 14, 14, 1, 24
  00e99c8  vslw 24, 14, 18
  00e99cc  vslw 22, 14, 17
  00e99d0  vslw 14, 14, 25
  00e99d4  vor 25, 24, 22
  00e99d8  vor 14, 25, 14
  00e99dc  vor 14, 14, 1
  00e99e0  vspltw 14, 14, 0
  00e99e4  stvewx 14, 0, 27
  00e99e8  lvlx 25, 20, 3
  00e99ec  lvx 24, 23, 1
  00e99f0  lvlx 14, 24, 29
  00e99f4  vperm 24, 25, 24, 10
  00e99f8  vspltw 25, 25, 0
  00e99fc  stvewx 0, 23, 1
  00e9a00  stvewx 23, 17, 1
  00e9a04  vperm 2, 2, 24, 9
  00e9a08  stvewx 25, 19, 1
  00e9a0c  lvx 25, 18, 1
  00e9a10  vsubfp 2, 25, 2
  00e9a14  li 27, 288
  00e9a18  vsubfp 4, 2, 4
  00e9a1c  vmaddfp 2, 4, 4, 3
  00e9a20  vperm 25, 4, 4, 7
  00e9a24  vperm 24, 4, 4, 6
  00e9a28  vmaddfp 2, 25, 25, 2
  00e9a2c  lvx 25, 27, 1
  00e9a30  addic 27, 28, 4
  00e9a34  ori 28, 27, 0
  00e9a38  vmaddfp 2, 24, 24, 2
  00e9a3c  vspltw 24, 2, 0
  00e9a40  vmaddfp 2, 8, 25, 3
  00e9a44  vrsqrtefp 23, 24
  00e9a48  vperm 22, 2, 2, 6
  00e9a4c  vmaddfp 8, 23, 24, 3
  00e9a50  vmaddfp 25, 23, 5, 3
  00e9a54  vperm 24, 2, 2, 7
  00e9a58  vnmsubfp 8, 23, 8, 11
  00e9a5c  vmaddfp 8, 8, 25, 23
  00e9a60  vcmpeqfp 25, 8, 8
  00e9a64  vsel 8, 23, 8, 25
  00e9a68  vmaddfp 4, 4, 8, 3
  00e9a6c  vmaddfp 8, 4, 2, 3
  00e9a70  vperm 25, 4, 4, 7
  00e9a74  vperm 23, 4, 4, 6
  00e9a78  vmaddfp 8, 25, 24, 8
  00e9a7c  vmaddfp 8, 23, 22, 8
  00e9a80  vspltw 8, 8, 0
  00e9a84  vcmpgefp. 25, 8, 3
  00e9a88  bt 26, 0xe9aa8
  00e9a8c  vspltisw 25, -1
  00e9a90  li 18, 256
  00e9a94  vslw 25, 25, 25
  00e9a98  lvx 24, 18, 1
  00e9a9c  vmaddfp 8, 8, 24, 25
  00e9aa0  vmaddfp 2, 2, 8, 3
  00e9aa4  vsubfp 4, 4, 2
  00e9aa8  vspltisw 8, -1
  00e9aac  vspltw 2, 4, 0
  00e9ab0  vspltw 4, 4, 1
  00e9ab4  vslw 8, 8, 8
  00e9ab8  li 18, 16
  00e9abc  vmaddfp 2, 2, 14, 8
  00e9ac0  vspltisw 8, -1
  00e9ac4  addic 12, 12, 1
  00e9ac8  addic 6, 6, 8
  00e9acc  cmpwi 12, 17
  00e9ad0  vslw 8, 8, 8
  00e9ad4  addic 11, 11, 4
  00e9ad8  addic 5, 5, 8
  00e9adc  addic 10, 10, 4
  00e9ae0  addic 9, 9, 4
  00e9ae4  addic 8, 8, 4
  00e9ae8  addic 7, 7, 4
  00e9aec  vmaddfp 2, 2, 5, 5
  00e9af0  vspltw 2, 2, 0
  00e9af4  stvewx 2, 0, 26
  00e9af8  lvlx 2, 24, 29
  00e9afc  addic 26, 30, 8
  00e9b00  vmaddfp 2, 4, 2, 8
  00e9b04  vmaddfp 2, 2, 5, 5
  00e9b08  vspltw 2, 2, 0
  00e9b0c  stvewx 2, 0, 31
  00e9b10  lvlx 2, 18, 29
  00e9b14  vaddfp 2, 0, 2
  00e9b18  bt 0, 0xe9790
  00e9b1c  li 5, 304
  00e9b20  li 6, 352
  00e9b24  li 7, 320
  00e9b28  lvx 2, 5, 1
  00e9b2c  lvx 3, 6, 1
  00e9b30  ld 5, 336(1)
  00e9b34  vaddfp 2, 2, 3
  00e9b38  ld 6, 384(1)
  00e9b3c  addic 5, 5, 96
  00e9b40  addic 6, 6, 1
  00e9b44  std 5, 336(1)
  00e9b48  cmpwi 6, 17
  00e9b4c  std 6, 384(1)
  00e9b50  stvx 2, 7, 1
  00e9b54  bt 0, 0xe95b4
  00e9b58  li 0, 400
  00e9b5c  lvx 21, 1, 0
  00e9b60  addic 0, 0, 16
  00e9b64  lvx 22, 1, 0
  00e9b68  addic 0, 0, 16
  00e9b6c  lvx 23, 1, 0
  00e9b70  addic 0, 0, 16
  00e9b74  lvx 24, 1, 0
  00e9b78  addic 0, 0, 16
  00e9b7c  lvx 25, 1, 0
  00e9b80  addic 0, 0, 16
  00e9b84  lvx 26, 1, 0
  00e9b88  addic 0, 0, 16
  00e9b8c  lvx 27, 1, 0
  00e9b90  addic 0, 0, 16
  00e9b94  lvx 28, 1, 0
  00e9b98  addic 0, 0, 16
  00e9b9c  lvx 29, 1, 0
  00e9ba0  addic 0, 0, 16
  00e9ba4  lvx 30, 1, 0
  00e9ba8  addic 0, 0, 16
  00e9bac  lvx 31, 1, 0
  00e9bb0  ld 15, 584(1)
  00e9bb4  ld 16, 592(1)
  00e9bb8  ld 17, 600(1)
  00e9bbc  ld 18, 608(1)
  00e9bc0  ld 19, 616(1)
  00e9bc4  ld 20, 624(1)
  00e9bc8  ld 21, 632(1)
  00e9bcc  ld 22, 640(1)
  00e9bd0  ld 23, 648(1)
  00e9bd4  ld 24, 656(1)
  00e9bd8  ld 25, 664(1)
  00e9bdc  ld 26, 672(1)
  00e9be0  ld 27, 680(1)
  00e9be4  ld 28, 688(1)
  00e9be8  ld 29, 696(1)
  00e9bec  ld 30, 704(1)
  00e9bf0  ld 31, 712(1)
  00e9bf4  addi 1, 1, 720
  00e9bf8  blr

WaterTile_StepWave:   # 0xe9c08, 0x320 bytes
  00e9c08  stdu 1, -160(1)
  00e9c0c  mflr 0
  00e9c10  std 0, 176(1)
  00e9c14  std 28, 128(1)
  00e9c18  mulli 4, 4, 4512
  00e9c1c  std 31, 152(1)
  00e9c20  mulli 28, 5, 1472
  00e9c24  ori 31, 6, 0
  00e9c28  lis 5, 15
  00e9c2c  addc 7, 31, 4
  00e9c30  std 30, 144(1)
  00e9c34  ori 6, 3, 0
  00e9c38  addc 30, 31, 4
  00e9c3c  addc 3, 7, 28
  00e9c40  addi 5, 5, -25604
  00e9c44  lis 7, 116
  00e9c48  clrldi 30, 30, 32
  00e9c4c  std 27, 120(1)
  00e9c50  addic 7, 7, -22016
  00e9c54  addc 27, 30, 28
  00e9c58  lfs 1, 0(5)
  00e9c5c  addic 3, 3, 80
  00e9c60  li 4, 0
  00e9c64  std 29, 136(1)
  00e9c68  lfs 2, 4(5)
  00e9c6c  addic 29, 27, 80
  00e9c70  clrldi 3, 3, 32
  00e9c74  clrldi 29, 29, 32
  00e9c78  std 26, 112(1)
  00e9c7c  lfs 3, 28(7)
  00e9c80  ori 5, 4, 0
  00e9c84  li 9, 16
  00e9c88  ori 7, 3, 0
  00e9c8c  ori 8, 5, 0
  00e9c90  mtctr 9
  00e9c94  addic 9, 8, 12
  00e9c98  addic 10, 8, 16
  00e9c9c  clrldi 9, 9, 32
  00e9ca0  clrldi 10, 10, 32
  00e9ca4  addic 11, 8, 20
  00e9ca8  clrldi 11, 11, 32
  00e9cac  lfsx 4, 9, 6
  00e9cb0  lfsx 5, 10, 6
  00e9cb4  addc 9, 9, 6
  00e9cb8  fadds 4, 4, 5
  00e9cbc  lfsx 5, 11, 6
  00e9cc0  addc 11, 11, 6
  00e9cc4  lfs 6, 96(9)
  00e9cc8  lfs 7, 192(9)
  00e9ccc  addc 9, 10, 6
  00e9cd0  addic 7, 7, 4
  00e9cd4  fadds 4, 4, 5
  00e9cd8  lfs 5, 96(11)
  00e9cdc  lfs 8, 192(9)
  00e9ce0  lfs 9, 0(3)
  00e9ce4  lfs 10, 192(11)
  00e9ce8  addic 8, 8, 4
  00e9cec  fadds 4, 4, 6
  00e9cf0  fadds 4, 4, 5
  00e9cf4  fadds 4, 4, 7
  00e9cf8  fadds 4, 4, 8
  00e9cfc  fadds 4, 4, 10
  00e9d00  fmsubs 4, 4, 1, 9
  00e9d04  fabs 5, 4
  00e9d08  fnmsubs 6, 4, 2, 4
  00e9d0c  fsub 5, 3, 5
  00e9d10  fsel 4, 5, 4, 6
  00e9d14  stfs 4, 0(3)
  00e9d18  ori 3, 7, 0
  00e9d1c  bdnz 0xe9c94
  00e9d20  addic 4, 4, 1
  00e9d24  addic 6, 6, 96
  00e9d28  cmplwi 4, 16
  00e9d2c  bt 0, 0xe9c84
  00e9d30  lbz 3, 12(30)
  00e9d34  cmpwi 3, 255
  00e9d38  bt 2, 0xe9d78
  00e9d3c  mulli 3, 3, 4512
  00e9d40  li 5, 64
  00e9d44  addc 3, 31, 3
  00e9d48  ori 4, 29, 0
  00e9d4c  addc 3, 3, 28
  00e9d50  addic 3, 3, 80
  00e9d54  clrldi 26, 3, 32
  00e9d58  addic 3, 26, 1152
  00e9d5c  bl 0x5c5ad0
  00e9d60  nop
  00e9d64  addic 3, 26, 1280
  00e9d68  addic 4, 29, 64
  00e9d6c  li 5, 64
  00e9d70  bl 0x5c5ad0
  00e9d74  nop
  00e9d78  lbz 3, 13(30)
  00e9d7c  cmpwi 3, 255
  00e9d80  bt 2, 0xe9dcc
  00e9d84  mulli 3, 3, 4512
  00e9d88  li 5, 8
  00e9d8c  addc 3, 31, 3
  00e9d90  ori 4, 29, 0
  00e9d94  addc 3, 3, 28
  00e9d98  mtctr 5
  00e9d9c  clrldi 3, 3, 32
  00e9da0  lfs 1, 0(4)
  00e9da4  stfs 1, 1296(3)
  00e9da8  lfs 1, 4(4)
  00e9dac  stfs 1, 1424(3)
  00e9db0  lfs 1, 64(4)
  00e9db4  stfs 1, 1300(3)
  00e9db8  lfs 1, 68(4)
  00e9dbc  addic 4, 4, 128
  00e9dc0  stfs 1, 1428(3)
  00e9dc4  addic 3, 3, 8
  00e9dc8  bdnz 0xe9da0
  00e9dcc  lbz 3, 14(30)
  00e9dd0  cmpwi 3, 255
  00e9dd4  bt 2, 0xe9e00
  00e9dd8  mulli 3, 3, 4512
  00e9ddc  addic 4, 29, 960
  00e9de0  addc 3, 31, 3
  00e9de4  li 5, 64
  00e9de8  addc 3, 3, 28
  00e9dec  addic 3, 3, 80
  00e9df0  clrldi 3, 3, 32
  00e9df4  addic 3, 3, 1024
  00e9df8  bl 0x5c5ad0
  00e9dfc  nop
  00e9e00  lbz 3, 15(30)
  00e9e04  cmpwi 3, 255
  00e9e08  bt 2, 0xe9e50
  00e9e0c  mulli 3, 3, 4512
  00e9e10  li 4, 4
  00e9e14  addc 3, 31, 3
  00e9e18  mtctr 4
  00e9e1c  addc 3, 3, 28
  00e9e20  clrldi 3, 3, 32
  00e9e24  lfs 1, 60(29)
  00e9e28  stfs 1, 1168(3)
  00e9e2c  lfs 1, 124(29)
  00e9e30  stfs 1, 1172(3)
  00e9e34  lfs 1, 188(29)
  00e9e38  stfs 1, 1176(3)
  00e9e3c  lfs 1, 252(29)
  00e9e40  addic 29, 29, 256
  00e9e44  stfs 1, 1180(3)
  00e9e48  addic 3, 3, 16
  00e9e4c  bdnz 0xe9e24
  00e9e50  lbz 3, 16(30)
  00e9e54  cmpwi 3, 255
  00e9e58  bt 2, 0xe9e88
  00e9e5c  mulli 3, 3, 4512
  00e9e60  clrldi 4, 27, 32
  00e9e64  addc 3, 31, 3
  00e9e68  addc 3, 3, 28
  00e9e6c  clrldi 3, 3, 32
  00e9e70  lfs 1, 80(4)
  00e9e74  stfs 1, 1500(3)
  00e9e78  lfs 1, 84(4)
  00e9e7c  stfs 1, 1504(3)
  00e9e80  lfs 1, 144(4)
  00e9e84  stfs 1, 1508(3)
  00e9e88  lbz 3, 17(30)
  00e9e8c  cmpwi 3, 255
  00e9e90  bt 2, 0xe9eb0
  00e9e94  mulli 3, 3, 4512
  00e9e98  clrldi 4, 27, 32
  00e9e9c  addc 3, 31, 3
  00e9ea0  addc 3, 3, 28
  00e9ea4  clrldi 3, 3, 32
  00e9ea8  lfs 1, 140(4)
  00e9eac  stfs 1, 1496(3)
  00e9eb0  lbz 3, 18(30)
  00e9eb4  cmpwi 3, 255
  00e9eb8  bt 2, 0xe9ed8
  00e9ebc  mulli 3, 3, 4512
  00e9ec0  clrldi 4, 27, 32
  00e9ec4  addc 3, 31, 3
  00e9ec8  addc 3, 3, 28
  00e9ecc  clrldi 3, 3, 32
  00e9ed0  lfs 1, 1040(4)
  00e9ed4  stfs 1, 1492(3)
  00e9ed8  lbz 30, 19(30)
  00e9edc  cmpwi 30, 255
  00e9ee0  bt 2, 0xe9f00
  00e9ee4  mulli 3, 30, 4512
  00e9ee8  clrldi 4, 27, 32
  00e9eec  addc 3, 31, 3
  00e9ef0  addc 3, 3, 28
  00e9ef4  clrldi 3, 3, 32
  00e9ef8  lfs 1, 1100(4)
  00e9efc  stfs 1, 1488(3)
  00e9f00  ld 0, 176(1)
  00e9f04  mtlr 0
  00e9f08  ld 26, 112(1)
  00e9f0c  ld 27, 120(1)
  00e9f10  ld 28, 128(1)
  00e9f14  ld 29, 136(1)
  00e9f18  ld 30, 144(1)
  00e9f1c  ld 31, 152(1)
  00e9f20  addi 1, 1, 160
  00e9f24  blr

STUB_000e9f28:   # 0xe9f28, 0x4 bytes
  00e9f28  blr

BuildVerts:   # 0xe9f48, 0x2a0 bytes
  00e9f48  stdu 1, -240(1)
  00e9f4c  mflr 0
  00e9f50  std 0, 256(1)
  00e9f54  stfd 26, 192(1)
  00e9f58  stfd 27, 200(1)
  00e9f5c  stfd 28, 208(1)
  00e9f60  stfd 29, 216(1)
  00e9f64  stfd 30, 224(1)
  00e9f68  stfd 31, 232(1)
  00e9f6c  addi 0, 1, 128
  00e9f70  stvx 31, 0, 0
  00e9f74  lis 5, 15
  00e9f78  li 6, 48
  00e9f7c  vspltisw 2, -8
  00e9f80  addi 5, 5, -24788
  00e9f84  vspltisw 3, -16
  00e9f88  li 7, 4
  00e9f8c  vspltisw 7, -1
  00e9f90  vspltisw 8, -1
  00e9f94  lvlx 4, 6, 3
  00e9f98  lvlx 5, 0, 5
  00e9f9c  vrlw 2, 4, 2
  00e9fa0  vspltw 31, 5, 0
  00e9fa4  vrlw 3, 4, 3
  00e9fa8  vspltisw 5, -1
  00e9fac  li 6, 8
  00e9fb0  lvlx 6, 7, 5
  00e9fb4  vand 4, 4, 31
  00e9fb8  vand 2, 2, 31
  00e9fbc  vand 3, 3, 31
  00e9fc0  vspltw 6, 6, 0
  00e9fc4  vcfux 4, 4, 0
  00e9fc8  vcfux 2, 2, 0
  00e9fcc  vslw 5, 5, 5
  00e9fd0  vcfux 3, 3, 0
  00e9fd4  vslw 7, 7, 7
  00e9fd8  vslw 8, 8, 8
  00e9fdc  std 26, 144(1)
  00e9fe0  li 7, 12
  00e9fe4  lwz 8, 12(3)
  00e9fe8  std 31, 184(1)
  00e9fec  li 26, 0
  00e9ff0  ori 31, 3, 0
  00e9ff4  cmpwi 8, 0
  00e9ff8  vmaddfp 4, 4, 6, 5
  00e9ffc  vmaddfp 2, 2, 6, 7
  00ea000  vmaddfp 3, 3, 6, 8
  00ea004  vspltisw 5, 8
  00ea008  lvlx 6, 6, 5
  00ea00c  lvlx 7, 7, 5
  00ea010  vspltw 6, 6, 0
  00ea014  vspltw 7, 7, 0
  00ea018  vctuxs 4, 4, 0
  00ea01c  vctuxs 2, 2, 0
  00ea020  vctuxs 3, 3, 0
  00ea024  vcmpgtuw 8, 4, 31
  00ea028  vsel 4, 4, 31, 8
  00ea02c  vcmpgtuw 9, 3, 31
  00ea030  vcmpgtuw 8, 2, 31
  00ea034  vsel 3, 3, 31, 9
  00ea038  vsel 2, 2, 31, 8
  00ea03c  vslw 4, 4, 6
  00ea040  vslw 3, 3, 5
  00ea044  vslw 2, 2, 7
  00ea048  vor 2, 4, 2
  00ea04c  vor 2, 2, 3
  00ea050  std 30, 176(1)
  00ea054  std 29, 168(1)
  00ea058  std 28, 160(1)
  00ea05c  std 27, 152(1)
  00ea060  vor 31, 2, 31
  00ea064  bf 1, 0xea1a0
  00ea068  lis 3, 15
  00ea06c  vspltw 31, 31, 0
  00ea070  ori 29, 4, 0
  00ea074  addi 3, 3, -24788
  00ea078  ori 27, 26, 0
  00ea07c  addic 30, 29, 28
  00ea080  ori 28, 27, 0
  00ea084  lfs 29, 16(3)
  00ea088  lfs 30, 20(3)
  00ea08c  lfs 31, 24(3)
  00ea090  lwz 3, 0(31)
  00ea094  addc 4, 3, 27
  00ea098  clrldi 5, 4, 32
  00ea09c  lwz 4, 80(31)
  00ea0a0  lwz 6, 0(5)
  00ea0a4  lwz 7, 4(5)
  00ea0a8  lfsx 1, 3, 27
  00ea0ac  addc 6, 6, 7
  00ea0b0  rlwinm 6, 6, 21, 19, 26
  00ea0b4  addc 4, 4, 6
  00ea0b8  rlwinm 4, 4, 4, 20, 27
  00ea0bc  clrldi 4, 4, 32
  00ea0c0  std 4, 112(1)
  00ea0c4  li 4, 0
  00ea0c8  lfd 2, 112(1)
  00ea0cc  stfs 1, 0(29)
  00ea0d0  fcfid 2, 2
  00ea0d4  lfs 1, 4(5)
  00ea0d8  stfs 1, 4(29)
  00ea0dc  lfs 1, 92(31)
  00ea0e0  lfs 4, 12(5)
  00ea0e4  fsubs 3, 30, 1
  00ea0e8  lfs 5, 8(5)
  00ea0ec  frsp 2, 2
  00ea0f0  fmuls 3, 4, 3
  00ea0f4  fmsubs 28, 2, 31, 29
  00ea0f8  fmadds 2, 5, 1, 3
  00ea0fc  fmr 1, 28
  00ea100  stfs 2, 8(29)
  00ea104  bl 0x5dd914
  00ea108  nop
  00ea10c  fmr 27, 1
  00ea110  lfs 26, 24(31)
  00ea114  li 4, 1
  00ea118  fmr 1, 28
  00ea11c  bl 0x5dd914
  00ea120  nop
  00ea124  lwz 3, 4(31)
  00ea128  lfs 2, 64(31)
  00ea12c  addc 4, 3, 28
  00ea130  lfsx 3, 3, 28
  00ea134  clrldi 3, 4, 32
  00ea138  fadds 2, 3, 2
  00ea13c  lfs 4, 24(31)
  00ea140  addic 26, 26, 1
  00ea144  lfs 5, 4(3)
  00ea148  addic 27, 27, 16
  00ea14c  addic 28, 28, 8
  00ea150  fmadds 2, 27, 26, 2
  00ea154  stfs 2, 12(29)
  00ea158  lfs 2, 68(31)
  00ea15c  stvewx 31, 0, 30
  00ea160  fadds 2, 5, 2
  00ea164  lwz 3, 12(31)
  00ea168  addic 30, 30, 32
  00ea16c  cmpw 26, 3
  00ea170  fmadds 2, 1, 4, 2
  00ea174  stfs 2, 16(29)
  00ea178  lfs 2, 72(31)
  00ea17c  fadds 2, 3, 2
  00ea180  fnmsubs 2, 27, 26, 2
  00ea184  stfs 2, 20(29)
  00ea188  lfs 2, 76(31)
  00ea18c  fadds 2, 5, 2
  00ea190  fnmsubs 1, 1, 4, 2
  00ea194  stfs 1, 24(29)
  00ea198  addic 29, 29, 32
  00ea19c  bt 0, 0xea090
  00ea1a0  li 0, 128
  00ea1a4  lvx 31, 1, 0
  00ea1a8  ld 0, 256(1)
  00ea1ac  mtlr 0
  00ea1b0  lfd 26, 192(1)
  00ea1b4  lfd 27, 200(1)
  00ea1b8  lfd 28, 208(1)
  00ea1bc  lfd 29, 216(1)
  00ea1c0  lfd 30, 224(1)
  00ea1c4  lfd 31, 232(1)
  00ea1c8  ld 26, 144(1)
  00ea1cc  ld 27, 152(1)
  00ea1d0  ld 28, 160(1)
  00ea1d4  ld 29, 168(1)
  00ea1d8  ld 30, 176(1)
  00ea1dc  ld 31, 184(1)
  00ea1e0  addi 1, 1, 240
  00ea1e4  blr

STUB_000ea1e8:   # 0xea1e8, 0x4 bytes
  00ea1e8  blr

NormalsToEnvUV:   # 0xea1f8, 0x180 bytes
  00ea1f8  stdu 1, -224(1)
  00ea1fc  mflr 0
  00ea200  std 0, 240(1)
  00ea204  stfd 29, 200(1)
  00ea208  stfd 30, 208(1)
  00ea20c  stfd 31, 216(1)
  00ea210  lis 7, 16102
  00ea214  std 26, 152(1)
  00ea218  cmpwi 3, 0
  00ea21c  ori 7, 7, 26214
  00ea220  std 29, 176(1)
  00ea224  li 26, 0
  00ea228  std 28, 168(1)
  00ea22c  ori 29, 6, 0
  00ea230  std 27, 160(1)
  00ea234  ori 28, 5, 0
  00ea238  stw 7, 144(1)
  00ea23c  std 31, 192(1)
  00ea240  ori 27, 4, 0
  00ea244  ori 31, 3, 0
  00ea248  std 30, 184(1)
  00ea24c  lfs 29, 144(1)
  00ea250  bf 1, 0xea344
  00ea254  lis 3, 15
  00ea258  lis 30, 149
  00ea25c  addi 3, 3, -24084
  00ea260  addic 30, 30, 5056
  00ea264  lfs 30, 0(3)
  00ea268  lfs 31, 4(3)
  00ea26c  lfs 1, 320(30)
  00ea270  lfs 2, 0(27)
  00ea274  fsubs 1, 1, 2
  00ea278  lfs 2, 324(30)
  00ea27c  lfs 3, 328(30)
  00ea280  addic 3, 1, 128
  00ea284  addic 4, 1, 112
  00ea288  ori 5, 28, 0
  00ea28c  stfs 1, 112(1)
  00ea290  lfs 4, 4(27)
  00ea294  fsubs 2, 2, 4
  00ea298  fmuls 4, 2, 2
  00ea29c  stfs 2, 116(1)
  00ea2a0  lfs 5, 8(27)
  00ea2a4  fsubs 3, 3, 5
  00ea2a8  lfs 5, 332(30)
  00ea2ac  fmadds 4, 1, 1, 4
  00ea2b0  stfs 3, 120(1)
  00ea2b4  fmadds 4, 3, 3, 4
  00ea2b8  stfs 5, 124(1)
  00ea2bc  fsqrts 4, 4
  00ea2c0  fdivs 5, 29, 4
  00ea2c4  fsub 6, 30, 4
  00ea2c8  fsub 7, 30, 4
  00ea2cc  fsub 8, 30, 4
  00ea2d0  fsub 9, 4, 30
  00ea2d4  fsub 10, 4, 30
  00ea2d8  fsub 4, 4, 30
  00ea2dc  fmuls 1, 1, 5
  00ea2e0  fmuls 2, 2, 5
  00ea2e4  fmuls 3, 3, 5
  00ea2e8  fsel 5, 6, 30, 1
  00ea2ec  fsel 6, 7, 30, 2
  00ea2f0  fsel 7, 8, 30, 3
  00ea2f4  fsel 1, 9, 5, 1
  00ea2f8  fsel 2, 10, 6, 2
  00ea2fc  fsel 3, 4, 7, 3
  00ea300  stfs 1, 112(1)
  00ea304  stfs 2, 116(1)
  00ea308  stfs 3, 120(1)
  00ea30c  bl 0x500608
  00ea310  nop
  00ea314  lfs 1, 128(1)
  00ea318  addic 26, 26, 1
  00ea31c  addic 27, 27, 12
  00ea320  fmuls 1, 1, 31
  00ea324  cmpw 26, 31
  00ea328  addic 28, 28, 12
  00ea32c  stfs 1, 0(29)
  00ea330  lfs 1, 132(1)
  00ea334  fmuls 1, 1, 31
  00ea338  stfs 1, 4(29)
  00ea33c  addic 29, 29, 8
  00ea340  bt 0, 0xea26c
  00ea344  ld 0, 240(1)
  00ea348  mtlr 0
  00ea34c  lfd 29, 200(1)
  00ea350  lfd 30, 208(1)
  00ea354  lfd 31, 216(1)
  00ea358  ld 26, 152(1)
  00ea35c  ld 27, 160(1)
  00ea360  ld 28, 168(1)
  00ea364  ld 29, 176(1)
  00ea368  ld 30, 184(1)
  00ea36c  ld 31, 192(1)
  00ea370  addi 1, 1, 224
  00ea374  blr
