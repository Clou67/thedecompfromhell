# sdk/libc/xstoul.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Stoulx:   # 0x5cac2c, 0x348 bytes
  05cac2c  mfcr 12
  05cac30  cmpwi 4, 6, 0
  05cac34  stdu 1, -240(1)
  05cac38  std 16, 112(1)
  05cac3c  std 18, 128(1)
  05cac40  std 21, 152(1)
  05cac44  std 22, 160(1)
  05cac48  std 27, 200(1)
  05cac4c  std 17, 120(1)
  05cac50  std 19, 136(1)
  05cac54  std 20, 144(1)
  05cac58  std 23, 168(1)
  05cac5c  std 24, 176(1)
  05cac60  std 25, 184(1)
  05cac64  std 26, 192(1)
  05cac68  std 28, 208(1)
  05cac6c  std 29, 216(1)
  05cac70  std 30, 224(1)
  05cac74  std 31, 232(1)
  05cac78  mr 22, 6
  05cac7c  mr 21, 4
  05cac80  mr 27, 5
  05cac84  mr 16, 3
  05cac88  mr 18, 4
  05cac8c  stw 12, 248(1)
  05cac90  mflr 0
  05cac94  std 0, 256(1)
  05cac98  bt 18, 0x5caca4
  05cac9c  li 0, 0
  05caca0  stw 0, 0(6)
  05caca4  lwz 17, -24660(2)
  05caca8  mr 31, 3
  05cacac  lbz 28, 0(3)
  05cacb0  rlwinm 9, 28, 1, 23, 30
  05cacb4  lwz 10, 0(17)
  05cacb8  b 0x5caccc
  05cacbc  addi 31, 31, 1
  05cacc0  clrldi 11, 31, 32
  05cacc4  lbz 28, 0(11)
  05cacc8  rlwinm 9, 28, 1, 23, 30
  05caccc  add 9, 9, 10
  05cacd0  clrldi 9, 9, 32
  05cacd4  lhz 0, 0(9)
  05cacd8  li 9, 324
  05cacdc  and 9, 0, 9
  05cace0  cmpwi 7, 9, 0
  05cace4  bf 30, 0x5cacbc
  05cace8  extsb 0, 28
  05cacec  cmpwi 7, 0, 45
  05cacf0  bt 30, 0x5caeb4
  05cacf4  cmpwi 7, 0, 43
  05cacf8  bt 30, 0x5caeb4
  05cacfc  li 28, 43
  05cad00  cmpwi 6, 27, 0
  05cad04  bt 24, 0x5cad18
  05cad08  cmpwi 7, 27, 1
  05cad0c  bt 30, 0x5cad18
  05cad10  cmpwi 7, 27, 36
  05cad14  bf 29, 0x5cad88
  05cad18  cmpwi 7, 18, 0
  05cad1c  li 25, 0
  05cad20  bt 30, 0x5cad2c
  05cad24  li 25, 0
  05cad28  stw 16, 0(21)
  05cad2c  ld 0, 256(1)
  05cad30  clrldi 3, 25, 32
  05cad34  lwz 12, 248(1)
  05cad38  ld 16, 112(1)
  05cad3c  mtlr 0
  05cad40  ld 17, 120(1)
  05cad44  mtocrf 8, 12
  05cad48  ld 18, 128(1)
  05cad4c  ld 19, 136(1)
  05cad50  ld 20, 144(1)
  05cad54  ld 21, 152(1)
  05cad58  ld 22, 160(1)
  05cad5c  ld 23, 168(1)
  05cad60  ld 24, 176(1)
  05cad64  ld 25, 184(1)
  05cad68  ld 26, 192(1)
  05cad6c  ld 27, 200(1)
  05cad70  ld 28, 208(1)
  05cad74  ld 29, 216(1)
  05cad78  ld 30, 224(1)
  05cad7c  ld 31, 232(1)
  05cad80  addi 1, 1, 240
  05cad84  blr
  05cad88  bf 25, 0x5caf0c
  05cad8c  cmpwi 7, 27, 16
  05cad90  bt 30, 0x5caebc
  05cad94  clrldi 4, 31, 32
  05cad98  mr 5, 27
  05cad9c  mr 29, 31
  05cada0  mr 20, 31
  05cada4  lbz 0, 0(4)
  05cada8  cmpwi 7, 0, 48
  05cadac  bf- 30, 0x5cadd8
  05cadb0  mr 29, 31
  05cadb4  addi 29, 29, 1
  05cadb8  clrldi 9, 29, 32
  05cadbc  lbz 0, 0(9)
  05cadc0  cmpwi 7, 0, 48
  05cadc4  bt 30, 0x5cadb4
  05cadc8  mr 20, 31
  05cadcc  mr 4, 9
  05cadd0  mr 5, 27
  05cadd4  mr 31, 29
  05cadd8  lwz 23, -24656(2)
  05caddc  clrldi 24, 5, 32
  05cade0  li 26, 0
  05cade4  li 25, 0
  05cade8  li 19, 0
  05cadec  b 0x5cae0c
  05cadf0  sub 26, 3, 30
  05cadf4  addi 31, 31, 1
  05cadf8  extsb 9, 26
  05cadfc  mr 19, 25
  05cae00  clrldi 4, 31, 32
  05cae04  mullw 0, 25, 27
  05cae08  add 25, 0, 9
  05cae0c  lbz 4, 0(4)
  05cae10  mr 30, 23
  05cae14  lwz 0, 0(17)
  05cae18  mr 3, 23
  05cae1c  slwi 9, 4, 1
  05cae20  mr 5, 24
  05cae24  add 9, 9, 0
  05cae28  clrldi 9, 9, 32
  05cae2c  lhz 0, 0(9)
  05cae30  rlwinm 0, 0, 0, 30, 30
  05cae34  cmpwi 7, 0, 0
  05cae38  bt 30, 0x5cae40
  05cae3c  addi 4, 4, 32
  05cae40  extsw 4, 4
  05cae44  bl 0x5c5984
  05cae48  nop
  05cae4c  cmpwi 7, 3, 0
  05cae50  bf 30, 0x5cadf0
  05cae54  cmpw 7, 31, 20
  05cae58  bt 30, 0x5cad18
  05cae5c  extsw 9, 27
  05cae60  sub 11, 31, 29
  05cae64  add 9, 9, 30
  05cae68  lbz 0, 40(9)
  05cae6c  extsb 0, 0
  05cae70  sub 11, 11, 0
  05cae74  cmpwi 7, 11, 0
  05cae78  bt 28, 0x5caef8
  05cae7c  bf 29, 0x5caedc
  05cae80  bl 0x5d5904
  05cae84  nop
  05cae88  lis 0, -32767
  05cae8c  ori 0, 0, 28
  05cae90  stw 0, 0(3)
  05cae94  bt 18, 0x5caf6c
  05cae98  li 0, 1
  05cae9c  li 25, -1
  05caea0  stw 0, 0(22)
  05caea4  cmpwi 7, 18, 0
  05caea8  bt 30, 0x5cad2c
  05caeac  stw 31, 0(21)
  05caeb0  b 0x5cad2c
  05caeb4  addi 31, 31, 1
  05caeb8  b 0x5cad00
  05caebc  clrldi 4, 31, 32
  05caec0  li 5, 16
  05caec4  lbz 0, 0(4)
  05caec8  cmpwi 7, 0, 48
  05caecc  bt 30, 0x5caf4c
  05caed0  mr 29, 31
  05caed4  mr 20, 31
  05caed8  b 0x5cadd8
  05caedc  extsb 0, 26
  05caee0  sub 0, 25, 0
  05caee4  cmplw 7, 25, 0
  05caee8  bt 28, 0x5cae80
  05caeec  divwu 0, 0, 27
  05caef0  cmpw 7, 0, 19
  05caef4  bf 30, 0x5cae80
  05caef8  extsb 0, 28
  05caefc  cmpwi 7, 0, 45
  05caf00  bf 30, 0x5caea4
  05caf04  neg 25, 25
  05caf08  b 0x5caea4
  05caf0c  clrldi 4, 31, 32
  05caf10  li 27, 10
  05caf14  li 5, 10
  05caf18  lbz 0, 0(4)
  05caf1c  cmpwi 7, 0, 48
  05caf20  bf 30, 0x5caed0
  05caf24  lbz 0, 1(4)
  05caf28  extsb 0, 0
  05caf2c  cmpwi 7, 0, 120
  05caf30  bt 30, 0x5caf40
  05caf34  cmpwi 7, 0, 88
  05caf38  li 27, 8
  05caf3c  bf 30, 0x5cadb0
  05caf40  addi 31, 31, 2
  05caf44  li 27, 16
  05caf48  b 0x5cad94
  05caf4c  lbz 0, 1(4)
  05caf50  extsb 0, 0
  05caf54  cmpwi 7, 0, 120
  05caf58  bt 30, 0x5caf64
  05caf5c  cmpwi 7, 0, 88
  05caf60  bf 30, 0x5cadb0
  05caf64  addi 31, 31, 2
  05caf68  b 0x5cad94
  05caf6c  li 25, -1
  05caf70  b 0x5caea4

FUN_005caf74:   # 0x5caf74, 0x8 bytes
  05caf74  li 6, 0
  05caf78  b 0x5cac2c
