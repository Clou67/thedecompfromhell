# game/update/moby179.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_002b9870:   # 0x2b9870, 0xd0 bytes
  02b9870  stdu 1, -128(1)
  02b9874  mflr 0
  02b9878  std 0, 144(1)
  02b987c  std 31, 120(1)
  02b9880  ori 31, 3, 0
  02b9884  std 30, 112(1)
  02b9888  li 3, 179
  02b988c  bl 0xefa28
  02b9890  nop
  02b9894  ori 30, 3, 0
  02b9898  cmpwi 30, 0
  02b989c  bt 2, 0x2b9924
  02b98a0  li 3, 255
  02b98a4  lwz 7, 120(30)
  02b98a8  li 5, 1
  02b98ac  li 6, 0
  02b98b0  li 4, 516
  02b98b4  stb 3, 48(30)
  02b98b8  li 8, 80
  02b98bc  sth 3, 50(30)
  02b98c0  stb 5, 49(30)
  02b98c4  addic 9, 31, 192
  02b98c8  stb 6, 32(30)
  02b98cc  li 5, 208
  02b98d0  sth 4, 52(30)
  02b98d4  li 11, 224
  02b98d8  stb 8, 35(30)
  02b98dc  addic 10, 30, 192
  02b98e0  stw 31, 8(7)
  02b98e4  ori 3, 30, 0
  02b98e8  stw 6, 76(30)
  02b98ec  stw 6, 72(30)
  02b98f0  stw 6, 68(30)
  02b98f4  stw 6, 64(30)
  02b98f8  lvx 2, 0, 9
  02b98fc  lvx 3, 5, 31
  02b9900  lvx 4, 11, 31
  02b9904  stvx 2, 0, 10
  02b9908  stvx 3, 5, 30
  02b990c  stvx 4, 11, 30
  02b9910  bl 0xf30a0
  02b9914  nop
  02b9918  ori 3, 30, 0
  02b991c  bl 0xf31a8
  02b9920  nop
  02b9924  ori 3, 30, 0
  02b9928  ld 0, 144(1)
  02b992c  mtlr 0
  02b9930  ld 30, 112(1)
  02b9934  ld 31, 120(1)
  02b9938  addi 1, 1, 128
  02b993c  blr

UpdateMoby_179:   # 0x2b9950, 0x194 bytes
  02b9950  stdu 1, -160(1)
  02b9954  mflr 0
  02b9958  std 0, 176(1)
  02b995c  stfd 31, 152(1)
  02b9960  std 31, 144(1)
  02b9964  std 30, 136(1)
  02b9968  ori 31, 3, 0
  02b996c  lwz 30, 120(31)
  02b9970  lwz 3, 8(30)
  02b9974  cmpwi 1, 3, 0
  02b9978  lbz 4, 32(3)
  02b997c  cmpwi 4, 0
  02b9980  bt 2, 0x2b9990
  02b9984  rlwinm 4, 4, 0, 24, 27
  02b9988  cmpwi 4, 240
  02b998c  bf 2, 0x2b99a0
  02b9990  ori 3, 31, 0
  02b9994  bl 0xefb38
  02b9998  nop
  02b999c  b 0x2b9ac8
  02b99a0  lhz 4, 52(31)
  02b99a4  bt 6, 0x2b99d8
  02b99a8  lhz 3, 52(3)
  02b99ac  xor 3, 4, 3
  02b99b0  clrlwi 3, 3, 31
  02b99b4  cmpwi 3, 0
  02b99b8  bt 2, 0x2b99d8
  02b99bc  rlwinm 4, 4, 0, 16, 30
  02b99c0  lwz 3, 8(30)
  02b99c4  sth 4, 52(31)
  02b99c8  lhz 3, 52(3)
  02b99cc  clrlwi 3, 3, 31
  02b99d0  or 4, 4, 3
  02b99d4  sth 4, 52(31)
  02b99d8  lis 3, 44
  02b99dc  lis 5, 114
  02b99e0  addi 3, 3, -26304
  02b99e4  lis 6, 151
  02b99e8  lfs 1, 0(3)
  02b99ec  lfs 2, -3056(5)
  02b99f0  addic 3, 6, -25376
  02b99f4  fmuls 1, 2, 1
  02b99f8  lwz 3, 4272(3)
  02b99fc  fctiwz 1, 1
  02b9a00  stfd 1, 112(1)
  02b9a04  lwz 5, 116(1)
  02b9a08  cmpw 3, 5
  02b9a0c  bf 0, 0x2b9a18
  02b9a10  ori 3, 4, 65
  02b9a14  sth 3, 52(31)
  02b9a18  lwz 3, 4(30)
  02b9a1c  li 4, -192
  02b9a20  addic 5, 3, -192
  02b9a24  cmpwi 5, 4096
  02b9a28  cmpwi 1, 5, 0
  02b9a2c  stw 5, 4(30)
  02b9a30  bf 1, 0x2b9a44
  02b9a34  addic 3, 3, -4288
  02b9a38  li 4, -4288
  02b9a3c  stw 3, 4(30)
  02b9a40  b 0x2b9a54
  02b9a44  bf 4, 0x2b9a54
  02b9a48  addic 3, 3, 3904
  02b9a4c  li 4, 3904
  02b9a50  stw 3, 4(30)
  02b9a54  ori 5, 4, 0
  02b9a58  lwz 3, 36(31)
  02b9a5c  li 4, 0
  02b9a60  bl 0xf0838
  02b9a64  nop
  02b9a68  lis 3, 44
  02b9a6c  addi 3, 3, -26304
  02b9a70  lfs 1, 4(3)
  02b9a74  lfs 2, 8(3)
  02b9a78  bl 0xfcbe8
  02b9a7c  nop
  02b9a80  lwz 3, 36(31)
  02b9a84  lfs 2, 12(30)
  02b9a88  lfs 3, 36(3)
  02b9a8c  lfs 31, 68(31)
  02b9a90  fmuls 2, 3, 2
  02b9a94  fmuls 1, 2, 1
  02b9a98  stfs 1, 44(31)
  02b9a9c  lfs 1, 12(30)
  02b9aa0  bl 0x10de78
  02b9aa4  nop
  02b9aa8  fmr 2, 1
  02b9aac  fmr 1, 31
  02b9ab0  bl 0x502578
  02b9ab4  nop
  02b9ab8  stfs 1, 68(31)
  02b9abc  ori 3, 31, 0
  02b9ac0  bl 0xf30a0
  02b9ac4  nop
  02b9ac8  ld 0, 176(1)
  02b9acc  mtlr 0
  02b9ad0  lfd 31, 152(1)
  02b9ad4  ld 30, 136(1)
  02b9ad8  ld 31, 144(1)
  02b9adc  addi 1, 1, 160
  02b9ae0  blr
