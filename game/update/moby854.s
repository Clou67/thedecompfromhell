# game/update/moby854.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M854_Aridia_SubmitOcean:   # 0x48e9d0, 0x1a0 bytes
  048e9d0  stdu 1, -160(1)
  048e9d4  mflr 0
  048e9d8  std 0, 176(1)
  048e9dc  lis 4, 73
  048e9e0  lis 5, 270
  048e9e4  addi 4, 4, -5696
  048e9e8  li 6, 40
  048e9ec  li 10, 64
  048e9f0  addic 5, 5, -15488
  048e9f4  li 7, 15
  048e9f8  lfs 1, 8(4)
  048e9fc  li 8, 15
  048ea00  lfs 2, 0(4)
  048ea04  std 31, 152(1)
  048ea08  li 9, 25
  048ea0c  lwz 31, 120(3)
  048ea10  lfs 3, 4(4)
  048ea14  std 6, 112(1)
  048ea18  fmr 4, 1
  048ea1c  std 10, 120(1)
  048ea20  li 10, 30
  048ea24  std 5, 128(1)
  048ea28  bl 0x17ea4c
  048ea2c  nop
  048ea30  lis 3, 161
  048ea34  lwz 3, 2248(3)
  048ea38  cmpwi 3, 0
  048ea3c  bf 2, 0x48ea6c
  048ea40  lwz 3, 0(31)
  048ea44  cmpwi 3, -1
  048ea48  bt 2, 0x48ea7c
  048ea4c  lis 5, 149
  048ea50  extsw 4, 3
  048ea54  addic 3, 5, 5056
  048ea58  addic 3, 3, 320
  048ea5c  bl 0x110b70
  048ea60  nop
  048ea64  cmpwi 3, 0
  048ea68  bt 2, 0x48ea7c
  048ea6c  lis 3, 140
  048ea70  addic 3, 3, 30848
  048ea74  bl 0x17ec00
  048ea78  nop
  048ea7c  lis 3, 161
  048ea80  lwz 3, 2248(3)
  048ea84  cmpwi 3, 0
  048ea88  bf 2, 0x48eab8
  048ea8c  lwz 3, 4(31)
  048ea90  cmpwi 3, -1
  048ea94  bt 2, 0x48eb08
  048ea98  lis 5, 149
  048ea9c  extsw 4, 3
  048eaa0  addic 3, 5, 5056
  048eaa4  addic 3, 3, 320
  048eaa8  bl 0x110b70
  048eaac  nop
  048eab0  cmpwi 3, 0
  048eab4  bt 2, 0x48eb08
  048eab8  lis 3, 140
  048eabc  addic 3, 3, 31056
  048eac0  bl 0x17ec00
  048eac4  nop
  048eac8  lis 3, 140
  048eacc  addic 3, 3, 31152
  048ead0  bl 0x17ec00
  048ead4  nop
  048ead8  lis 3, 140
  048eadc  addic 3, 3, 31248
  048eae0  bl 0x17ec00
  048eae4  nop
  048eae8  lis 3, 140
  048eaec  addic 3, 3, 31328
  048eaf0  bl 0x17ec00
  048eaf4  nop
  048eaf8  lis 3, 140
  048eafc  addic 3, 3, 31408
  048eb00  bl 0x17ec00
  048eb04  nop
  048eb08  lis 3, 161
  048eb0c  lwz 3, 2248(3)
  048eb10  cmpwi 3, 0
  048eb14  bf 2, 0x48eb44
  048eb18  lwz 31, 8(31)
  048eb1c  cmpwi 31, -1
  048eb20  bt 2, 0x48eb54
  048eb24  lis 3, 149
  048eb28  extsw 4, 31
  048eb2c  addic 3, 3, 5056
  048eb30  addic 3, 3, 320
  048eb34  bl 0x110b70
  048eb38  nop
  048eb3c  cmpwi 3, 0
  048eb40  bt 2, 0x48eb54
  048eb44  lis 3, 140
  048eb48  addic 3, 3, 30944
  048eb4c  bl 0x17ec00
  048eb50  nop
  048eb54  bl 0x17eb70
  048eb58  nop
  048eb5c  ld 0, 176(1)
  048eb60  mtlr 0
  048eb64  ld 31, 152(1)
  048eb68  addi 1, 1, 160
  048eb6c  blr

UpdateMoby_854_AridiaOcean:   # 0x48eb78, 0xe0 bytes
  048eb78  stdu 1, -128(1)
  048eb7c  mflr 0
  048eb80  std 0, 144(1)
  048eb84  std 31, 120(1)
  048eb88  ori 31, 3, 0
  048eb8c  lbz 3, 32(3)
  048eb90  cmpwi 3, 0
  048eb94  cmpwi 1, 3, 1
  048eb98  cmpwi 6, 3, -1
  048eb9c  bt 1, 0x48eba8
  048eba0  bf 25, 0x48ec44
  048eba4  b 0x48ebb0
  048eba8  bf 5, 0x48ec30
  048ebac  b 0x48ec44
  048ebb0  lis 3, 140
  048ebb4  lis 5, 140
  048ebb8  addic 3, 3, 30848
  048ebbc  li 6, 128
  048ebc0  lis 4, 140
  048ebc4  lis 7, 140
  048ebc8  addic 5, 5, 31152
  048ebcc  lis 8, 140
  048ebd0  stb 6, 63(3)
  048ebd4  addic 4, 4, 30944
  048ebd8  addic 7, 7, 31248
  048ebdc  addic 3, 8, 31056
  048ebe0  stb 6, 63(5)
  048ebe4  lis 9, 140
  048ebe8  stb 6, 63(4)
  048ebec  stb 6, 63(7)
  048ebf0  lis 5, 140
  048ebf4  stb 6, 63(3)
  048ebf8  addic 8, 9, 31328
  048ebfc  lis 3, 73
  048ec00  addic 4, 5, 31408
  048ec04  addi 3, 3, -5264
  048ec08  stb 6, 63(8)
  048ec0c  stb 6, 63(4)
  048ec10  lfs 1, 0(3)
  048ec14  bl 0x17ea04
  048ec18  nop
  048ec1c  li 3, 1
  048ec20  li 4, 255
  048ec24  stb 3, 32(31)
  048ec28  stb 4, 48(31)
  048ec2c  b 0x48ec44
  048ec30  lis 3, 113
  048ec34  ori 4, 31, 0
  048ec38  addic 3, 3, -3848
  048ec3c  bl 0x6d760
  048ec40  nop
  048ec44  ld 0, 144(1)
  048ec48  mtlr 0
  048ec4c  ld 31, 120(1)
  048ec50  addi 1, 1, 128
  048ec54  blr
