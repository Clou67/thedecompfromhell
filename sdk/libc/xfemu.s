# sdk/libc/xfemu.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Fd2rv:   # 0x5d600c, 0xa4 bytes
  05d600c  stfs 1, -16(1)
  05d6010  clrldi 8, 3, 32
  05d6014  lwz 9, -16(1)
  05d6018  li 0, -1
  05d601c  rlwinm 6, 9, 0, 1, 8
  05d6020  rldicr 0, 0, 0, 0
  05d6024  cmpwi 7, 6, 0
  05d6028  std 0, 8(8)
  05d602c  srwi 7, 9, 23
  05d6030  bf 30, 0x5d60a4
  05d6034  li 0, 23
  05d6038  clrlwi 11, 9, 9
  05d603c  lis 10, -32768
  05d6040  mtctr 0
  05d6044  li 9, 9
  05d6048  srw 0, 10, 9
  05d604c  and 6, 0, 11
  05d6050  cmpwi 6, 0
  05d6054  bf 2, 0x5d6098
  05d6058  addi 9, 9, 1
  05d605c  bdnz 0x5d6048
  05d6060  li 9, 64
  05d6064  li 10, 23
  05d6068  slw 9, 11, 9
  05d606c  li 0, -1
  05d6070  extsw 9, 9
  05d6074  rldicr 0, 0, 0, 0
  05d6078  or 9, 9, 0
  05d607c  std 9, 8(8)
  05d6080  clrlwi 9, 7, 24
  05d6084  mr 3, 8
  05d6088  addi 9, 9, 16256
  05d608c  sub 9, 9, 10
  05d6090  stw 9, 0(8)
  05d6094  blr
  05d6098  addi 10, 9, -9
  05d609c  addi 9, 9, 32
  05d60a0  b 0x5d6068
  05d60a4  li 10, 0
  05d60a8  std 0, 8(8)
  05d60ac  b 0x5d6080

_Ld2rv:   # 0x5d60b0, 0xac bytes
  05d60b0  stfd 1, -16(1)
  05d60b4  clrldi 8, 3, 32
  05d60b8  stfd 1, -8(1)
  05d60bc  li 10, -1
  05d60c0  ld 0, -8(1)
  05d60c4  ld 9, -16(1)
  05d60c8  rldicr 10, 10, 0, 0
  05d60cc  rldicl 6, 0, 12, 53
  05d60d0  sldi 0, 9, 1
  05d60d4  std 10, 8(8)
  05d60d8  rldicr 0, 0, 63, 11
  05d60dc  cmpdi 7, 0, 0
  05d60e0  bf 30, 0x5d6148
  05d60e4  li 0, 52
  05d60e8  clrldi 11, 9, 12
  05d60ec  li 9, 12
  05d60f0  mtctr 0
  05d60f4  b 0x5d6100
  05d60f8  addi 9, 9, 1
  05d60fc  bdz 0x5d6140
  05d6100  srd 0, 10, 9
  05d6104  and 0, 0, 11
  05d6108  cmpdi 7, 0, 0
  05d610c  bt 30, 0x5d60f8
  05d6110  addi 7, 9, -12
  05d6114  li 0, -1
  05d6118  sld 9, 11, 9
  05d611c  rldicr 0, 0, 0, 0
  05d6120  or 9, 9, 0
  05d6124  std 9, 8(8)
  05d6128  clrlwi 9, 6, 16
  05d612c  mr 3, 8
  05d6130  addi 9, 9, 15360
  05d6134  sub 9, 9, 7
  05d6138  stw 9, 0(8)
  05d613c  blr
  05d6140  li 7, 52
  05d6144  b 0x5d6114
  05d6148  rldic 0, 9, 11, 1
  05d614c  li 7, 0
  05d6150  or 0, 0, 10
  05d6154  std 0, 8(8)
  05d6158  b 0x5d6128

_Emul:   # 0x5d615c, 0x11c bytes
  05d615c  std 5, 64(1)
  05d6160  std 7, 80(1)
  05d6164  lwz 7, 84(1)
  05d6168  clrldi 12, 3, 32
  05d616c  lwz 10, 80(1)
  05d6170  lwz 8, 64(1)
  05d6174  lwz 11, 68(1)
  05d6178  std 4, 56(1)
  05d617c  mulld 0, 11, 10
  05d6180  mulld 11, 11, 7
  05d6184  rldicl 11, 11, 32, 32
  05d6188  std 6, 72(1)
  05d618c  std 31, -8(1)
  05d6190  lwz 3, 72(1)
  05d6194  li 6, 0
  05d6198  lwz 31, 56(1)
  05d619c  lis 4, -32768
  05d61a0  mulld 9, 8, 7
  05d61a4  clrldi 5, 9, 32
  05d61a8  rldicl 9, 9, 32, 32
  05d61ac  add 11, 11, 5
  05d61b0  mulld 8, 8, 10
  05d61b4  clrldi 10, 0, 32
  05d61b8  rldicl 0, 0, 32, 32
  05d61bc  add 7, 11, 10
  05d61c0  add 9, 9, 0
  05d61c4  li 0, 32
  05d61c8  mtctr 0
  05d61cc  rldicl 0, 7, 32, 32
  05d61d0  add 8, 8, 0
  05d61d4  add 9, 9, 8
  05d61d8  rldicl 0, 9, 32, 32
  05d61dc  stw 9, 12(12)
  05d61e0  mr 9, 0
  05d61e4  stw 0, 8(12)
  05d61e8  b 0x5d61f4
  05d61ec  addi 6, 6, 1
  05d61f0  bdz 0x5d6204
  05d61f4  srw 0, 4, 6
  05d61f8  and 11, 0, 9
  05d61fc  cmpwi 11, 0
  05d6200  bt 2, 0x5d61ec
  05d6204  lwz 10, 12(12)
  05d6208  subfic 8, 6, 32
  05d620c  slw 9, 9, 6
  05d6210  srw 0, 10, 8
  05d6214  slw 10, 10, 6
  05d6218  or 9, 9, 0
  05d621c  clrldi 11, 7, 32
  05d6220  subfic 0, 6, 31
  05d6224  stw 10, 12(12)
  05d6228  stw 9, 8(12)
  05d622c  ld 9, 8(12)
  05d6230  srd 11, 11, 8
  05d6234  srd 0, 7, 0
  05d6238  or 11, 11, 9
  05d623c  clrldi 0, 0, 63
  05d6240  add 10, 31, 3
  05d6244  add 0, 11, 0
  05d6248  sub 10, 10, 6
  05d624c  cmpld 7, 11, 0
  05d6250  std 0, 8(12)
  05d6254  li 9, 1
  05d6258  bt 29, 0x5d6260
  05d625c  li 9, 0
  05d6260  add 9, 10, 9
  05d6264  ld 31, -8(1)
  05d6268  mr 3, 12
  05d626c  addi 9, 9, -16382
  05d6270  stw 9, 0(12)
  05d6274  blr

_Esub:   # 0x5d6278, 0x13c bytes
  05d6278  std 7, 80(1)
  05d627c  std 5, 64(1)
  05d6280  lwz 9, 68(1)
  05d6284  clrldi 3, 3, 32
  05d6288  lwz 0, 84(1)
  05d628c  lwz 8, 64(1)
  05d6290  sub 11, 9, 0
  05d6294  lwz 0, 80(1)
  05d6298  std 4, 56(1)
  05d629c  cmplw 7, 9, 11
  05d62a0  lwz 7, 56(1)
  05d62a4  std 6, 72(1)
  05d62a8  sub 10, 8, 0
  05d62ac  stw 11, 12(3)
  05d62b0  bf 28, 0x5d6398
  05d62b4  cmplw 7, 8, 10
  05d62b8  li 11, 1
  05d62bc  bf 28, 0x5d63ac
  05d62c0  addi 10, 10, -1
  05d62c4  not 0, 10
  05d62c8  srawi 6, 0, 31
  05d62cc  xor 9, 6, 0
  05d62d0  sub 9, 9, 6
  05d62d4  addi 9, 9, -1
  05d62d8  srwi 9, 9, 31
  05d62dc  or 0, 11, 9
  05d62e0  cmpwi 7, 0, 0
  05d62e4  stw 10, 8(3)
  05d62e8  bt 30, 0x5d6390
  05d62ec  lwz 11, 12(3)
  05d62f0  not 0, 10
  05d62f4  neg 11, 11
  05d62f8  stw 0, 8(3)
  05d62fc  stw 11, 12(3)
  05d6300  lwz 9, 8(3)
  05d6304  li 0, 32
  05d6308  li 10, 0
  05d630c  cmpwi 7, 9, 0
  05d6310  mtctr 0
  05d6314  lis 8, -32768
  05d6318  bf 30, 0x5d6350
  05d631c  lis 10, -32768
  05d6320  srw 0, 10, 9
  05d6324  and 6, 0, 11
  05d6328  cmpwi 6, 0
  05d632c  bf 2, 0x5d6338
  05d6330  addi 9, 9, 1
  05d6334  bdnz 0x5d6320
  05d6338  sub 9, 7, 9
  05d633c  li 11, 0
  05d6340  addi 0, 9, -32
  05d6344  stw 11, 12(3)
  05d6348  stw 0, 0(3)
  05d634c  blr
  05d6350  srw 0, 8, 10
  05d6354  and 6, 0, 9
  05d6358  cmpwi 6, 0
  05d635c  bf 2, 0x5d6368
  05d6360  addi 10, 10, 1
  05d6364  bdnz 0x5d6350
  05d6368  subfic 0, 10, 32
  05d636c  slw 9, 9, 10
  05d6370  srw 0, 11, 0
  05d6374  slw 11, 11, 10
  05d6378  or 9, 9, 0
  05d637c  sub 0, 7, 10
  05d6380  stw 9, 8(3)
  05d6384  stw 11, 12(3)
  05d6388  stw 0, 0(3)
  05d638c  blr
  05d6390  lwz 11, 12(3)
  05d6394  b 0x5d6300
  05d6398  cmplw 7, 8, 10
  05d639c  li 0, 1
  05d63a0  bt 28, 0x5d62e0
  05d63a4  li 0, 0
  05d63a8  b 0x5d62e0
  05d63ac  li 11, 0
  05d63b0  b 0x5d62c0

_Eadd:   # 0x5d63b4, 0x9c bytes
  05d63b4  std 6, 72(1)
  05d63b8  std 4, 56(1)
  05d63bc  lwz 6, 56(1)
  05d63c0  clrldi 3, 3, 32
  05d63c4  lwz 0, 72(1)
  05d63c8  li 8, 0
  05d63cc  std 5, 64(1)
  05d63d0  sub 0, 6, 0
  05d63d4  lwz 10, 68(1)
  05d63d8  lwz 11, 64(1)
  05d63dc  srd 7, 7, 0
  05d63e0  std 7, 80(1)
  05d63e4  lwz 9, 84(1)
  05d63e8  lwz 0, 80(1)
  05d63ec  add 10, 9, 10
  05d63f0  add 0, 0, 11
  05d63f4  rldicl 9, 10, 32, 32
  05d63f8  li 11, -1
  05d63fc  add 7, 0, 9
  05d6400  li 0, 64
  05d6404  rldicr 11, 11, 0, 0
  05d6408  mtctr 0
  05d640c  b 0x5d6418
  05d6410  addi 8, 8, 1
  05d6414  bdz- 0x5d6428
  05d6418  srd 0, 11, 8
  05d641c  and 0, 0, 7
  05d6420  cmpdi 7, 0, 0
  05d6424  bt 30, 0x5d6410
  05d6428  clrldi 11, 10, 32
  05d642c  subfic 10, 8, 32
  05d6430  sub 9, 6, 8
  05d6434  srd 11, 11, 10
  05d6438  sld 0, 7, 8
  05d643c  addi 9, 9, 32
  05d6440  or 0, 0, 11
  05d6444  stw 9, 0(3)
  05d6448  std 0, 8(3)
  05d644c  blr

_Etentox:   # 0x5d6450, 0x218 bytes
  05d6450  li 9, -1
  05d6454  mflr 0
  05d6458  stdu 1, -176(1)
  05d645c  cmpwi 7, 6, 0
  05d6460  std 0, 192(1)
  05d6464  rldicr 9, 9, 0, 0
  05d6468  li 0, 16383
  05d646c  std 27, 136(1)
  05d6470  std 31, 168(1)
  05d6474  std 26, 128(1)
  05d6478  std 28, 144(1)
  05d647c  std 29, 152(1)
  05d6480  std 30, 160(1)
  05d6484  mr 31, 6
  05d6488  std 4, 232(1)
  05d648c  std 5, 240(1)
  05d6490  stw 0, 112(1)
  05d6494  std 9, 120(1)
  05d6498  clrldi 27, 3, 32
  05d649c  bt 28, 0x5d659c
  05d64a0  bt 30, 0x5d6528
  05d64a4  li 30, 0
  05d64a8  lwz 29, -24112(2)
  05d64ac  addi 28, 1, 112
  05d64b0  b 0x5d64cc
  05d64b4  srawi 31, 31, 1
  05d64b8  cmpwi 7, 30, 7
  05d64bc  cmpwi 31, 0
  05d64c0  addi 30, 30, 1
  05d64c4  bf 1, 0x5d6510
  05d64c8  bt 30, 0x5d6554
  05d64cc  clrlwi 9, 31, 31
  05d64d0  slwi 0, 30, 4
  05d64d4  cmpwi 7, 9, 0
  05d64d8  extsw 0, 0
  05d64dc  mr 3, 28
  05d64e0  add 9, 0, 29
  05d64e4  bt 30, 0x5d64b4
  05d64e8  ld 7, 168(9)
  05d64ec  srawi 31, 31, 1
  05d64f0  ld 4, 112(1)
  05d64f4  ld 5, 120(1)
  05d64f8  ld 6, 160(9)
  05d64fc  bl 0x5d615c
  05d6500  cmpwi 31, 0
  05d6504  cmpwi 7, 30, 7
  05d6508  addi 30, 30, 1
  05d650c  bt 1, 0x5d64c8
  05d6510  mr 3, 27
  05d6514  ld 4, 232(1)
  05d6518  ld 5, 240(1)
  05d651c  ld 6, 112(1)
  05d6520  ld 7, 120(1)
  05d6524  bl 0x5d615c
  05d6528  ld 0, 192(1)
  05d652c  mr 3, 27
  05d6530  ld 26, 128(1)
  05d6534  ld 27, 136(1)
  05d6538  mtlr 0
  05d653c  ld 28, 144(1)
  05d6540  ld 29, 152(1)
  05d6544  ld 30, 160(1)
  05d6548  ld 31, 168(1)
  05d654c  addi 1, 1, 176
  05d6550  blr
  05d6554  lwz 30, -24112(2)
  05d6558  addi 29, 1, 112
  05d655c  addi 31, 31, -1
  05d6560  ld 4, 112(1)
  05d6564  clrldi 3, 29, 32
  05d6568  ld 5, 120(1)
  05d656c  ld 6, 304(30)
  05d6570  ld 7, 312(30)
  05d6574  bl 0x5d615c
  05d6578  cmpwi 7, 31, 0
  05d657c  bt 29, 0x5d655c
  05d6580  mr 3, 27
  05d6584  ld 4, 232(1)
  05d6588  ld 5, 240(1)
  05d658c  ld 6, 112(1)
  05d6590  ld 7, 120(1)
  05d6594  bl 0x5d615c
  05d6598  b 0x5d6528
  05d659c  neg 31, 6
  05d65a0  cmpwi 7, 31, 0
  05d65a4  bt 30, 0x5d6510
  05d65a8  li 29, 0
  05d65ac  lwz 28, -24112(2)
  05d65b0  clrlwi 9, 31, 31
  05d65b4  slwi 0, 29, 4
  05d65b8  cmpwi 7, 9, 0
  05d65bc  addi 26, 1, 112
  05d65c0  extsw 0, 0
  05d65c4  srwi 31, 31, 1
  05d65c8  add 11, 0, 28
  05d65cc  mr 3, 26
  05d65d0  bf 30, 0x5d6608
  05d65d4  cmpwi 7, 31, 0
  05d65d8  cmpwi 6, 29, 7
  05d65dc  addi 29, 29, 1
  05d65e0  bt 30, 0x5d6510
  05d65e4  bt 26, 0x5d6620
  05d65e8  clrlwi 9, 31, 31
  05d65ec  slwi 0, 29, 4
  05d65f0  cmpwi 7, 9, 0
  05d65f4  extsw 0, 0
  05d65f8  srwi 31, 31, 1
  05d65fc  add 11, 0, 28
  05d6600  mr 3, 26
  05d6604  bt 30, 0x5d65d4
  05d6608  ld 7, 8(11)
  05d660c  ld 4, 112(1)
  05d6610  ld 5, 120(1)
  05d6614  ldx 6, 28, 0
  05d6618  bl 0x5d615c
  05d661c  b 0x5d65d4
  05d6620  lwz 30, -24112(2)
  05d6624  addi 29, 1, 112
  05d6628  addi 31, 31, -1
  05d662c  ld 4, 112(1)
  05d6630  clrldi 3, 29, 32
  05d6634  ld 5, 120(1)
  05d6638  ld 6, 144(30)
  05d663c  ld 7, 152(30)
  05d6640  bl 0x5d615c
  05d6644  cmpwi 7, 31, 0
  05d6648  bf 30, 0x5d6628
  05d664c  mr 3, 27
  05d6650  ld 4, 232(1)
  05d6654  ld 5, 240(1)
  05d6658  ld 6, 112(1)
  05d665c  ld 7, 120(1)
  05d6660  bl 0x5d615c
  05d6664  b 0x5d6528

_Lrv2d:   # 0x5d6668, 0x128 bytes
  05d6668  stdu 1, -160(1)
  05d666c  mflr 0
  05d6670  std 3, 208(1)
  05d6674  lwz 9, 208(1)
  05d6678  sldi 11, 4, 1
  05d667c  std 0, 176(1)
  05d6680  addi 9, 9, -15360
  05d6684  std 30, 144(1)
  05d6688  not 0, 9
  05d668c  cmplwi 7, 9, 2046
  05d6690  srawi 0, 0, 31
  05d6694  std 31, 152(1)
  05d6698  std 29, 136(1)
  05d669c  mr 30, 5
  05d66a0  ld 31, -24104(2)
  05d66a4  clrlwi 0, 0, 21
  05d66a8  std 4, 216(1)
  05d66ac  rldicr 11, 11, 63, 53
  05d66b0  bf 29, 0x5d670c
  05d66b4  rldimi 31, 0, 52, 1
  05d66b8  li 0, 0
  05d66bc  rldimi 31, 0, 0, 12
  05d66c0  bl 0x5d5904
  05d66c4  nop
  05d66c8  lis 0, -32767
  05d66cc  cmpwi 7, 30, 0
  05d66d0  ori 0, 0, 28
  05d66d4  stw 0, 0(3)
  05d66d8  bt 30, 0x5d66e8
  05d66dc  lwz 0, 0(30)
  05d66e0  ori 0, 0, 1
  05d66e4  stw 0, 0(30)
  05d66e8  ld 0, 176(1)
  05d66ec  std 31, 112(1)
  05d66f0  lfd 1, 112(1)
  05d66f4  mtlr 0
  05d66f8  ld 29, 136(1)
  05d66fc  ld 30, 144(1)
  05d6700  ld 31, 152(1)
  05d6704  addi 1, 1, 160
  05d6708  blr
  05d670c  rldimi 31, 9, 52, 1
  05d6710  rldicl 10, 11, 53, 11
  05d6714  sldi 0, 31, 1
  05d6718  li 9, 10
  05d671c  rldicr 0, 0, 63, 11
  05d6720  cmpdi 7, 0, 0
  05d6724  bf 30, 0x5d6788
  05d6728  rldicl 10, 11, 52, 12
  05d672c  lwz 0, 220(1)
  05d6730  li 9, 11
  05d6734  srw 0, 0, 9
  05d6738  li 11, 1
  05d673c  clrldi 0, 0, 63
  05d6740  add 0, 0, 10
  05d6744  rldimi 31, 0, 0, 12
  05d6748  clrldi 9, 31, 12
  05d674c  rldicl 0, 31, 12, 53
  05d6750  cmpld 7, 9, 10
  05d6754  bt 28, 0x5d675c
  05d6758  li 11, 0
  05d675c  add 0, 0, 11
  05d6760  ld 29, 136(1)
  05d6764  ld 30, 144(1)
  05d6768  rldimi 31, 0, 52, 1
  05d676c  ld 0, 176(1)
  05d6770  std 31, 112(1)
  05d6774  mtlr 0
  05d6778  lfd 1, 112(1)
  05d677c  ld 31, 152(1)
  05d6780  addi 1, 1, 160
  05d6784  blr
  05d6788  lwz 0, 220(1)
  05d678c  b 0x5d6734

_Frv2d:   # 0x5d6790, 0x120 bytes
  05d6790  stdu 1, -160(1)
  05d6794  mflr 0
  05d6798  std 3, 208(1)
  05d679c  lwz 9, 208(1)
  05d67a0  std 0, 176(1)
  05d67a4  addi 9, 9, -16256
  05d67a8  std 31, 152(1)
  05d67ac  not 0, 9
  05d67b0  cmplwi 7, 9, 254
  05d67b4  rlwinm 31, 9, 23, 1, 8
  05d67b8  srwi 0, 0, 31
  05d67bc  std 30, 144(1)
  05d67c0  std 29, 136(1)
  05d67c4  mr 30, 5
  05d67c8  std 4, 216(1)
  05d67cc  cmpwi 31, 0
  05d67d0  neg 0, 0
  05d67d4  bf 29, 0x5d6828
  05d67d8  rlwinm 31, 0, 23, 1, 8
  05d67dc  bl 0x5d5904
  05d67e0  nop
  05d67e4  lis 0, -32767
  05d67e8  cmpwi 7, 30, 0
  05d67ec  ori 0, 0, 28
  05d67f0  stw 0, 0(3)
  05d67f4  bt 30, 0x5d6804
  05d67f8  lwz 0, 0(30)
  05d67fc  ori 0, 0, 1
  05d6800  stw 0, 0(30)
  05d6804  ld 0, 176(1)
  05d6808  stw 31, 112(1)
  05d680c  lfs 1, 112(1)
  05d6810  mtlr 0
  05d6814  ld 29, 136(1)
  05d6818  ld 30, 144(1)
  05d681c  ld 31, 152(1)
  05d6820  addi 1, 1, 160
  05d6824  blr
  05d6828  lwz 9, 216(1)
  05d682c  li 11, 6
  05d6830  clrlwi 0, 9, 1
  05d6834  bt 2, 0x5d68a8
  05d6838  srwi 10, 0, 8
  05d683c  li 11, 7
  05d6840  srw 0, 9, 11
  05d6844  rlwinm 9, 31, 0, 0, 8
  05d6848  clrlwi 0, 0, 31
  05d684c  li 8, 1
  05d6850  add 0, 10, 0
  05d6854  clrlwi 0, 0, 9
  05d6858  or 31, 9, 0
  05d685c  clrlwi 0, 31, 9
  05d6860  rlwinm 11, 31, 1, 8, 31
  05d6864  cmplw 7, 10, 0
  05d6868  rotlwi 11, 11, 31
  05d686c  srwi 0, 31, 23
  05d6870  bt 29, 0x5d6878
  05d6874  li 8, 0
  05d6878  add 0, 0, 8
  05d687c  ld 29, 136(1)
  05d6880  ld 30, 144(1)
  05d6884  rlwinm 0, 0, 23, 1, 8
  05d6888  or 31, 11, 0
  05d688c  ld 0, 176(1)
  05d6890  stw 31, 112(1)
  05d6894  mtlr 0
  05d6898  lfs 1, 112(1)
  05d689c  ld 31, 152(1)
  05d68a0  addi 1, 1, 160
  05d68a4  blr
  05d68a8  srwi 10, 0, 7
  05d68ac  b 0x5d6840
