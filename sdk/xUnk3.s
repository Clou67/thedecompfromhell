# sdk/xUnk3.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_mbrtowc:   # 0x5d97dc, 0x35c bytes
  05d97dc  stdu 1, -144(1)
  05d97e0  mflr 0
  05d97e4  std 30, 128(1)
  05d97e8  std 0, 160(1)
  05d97ec  lwz 8, 0(7)
  05d97f0  mr 30, 3
  05d97f4  std 28, 112(1)
  05d97f8  cmpwi 7, 8, 0
  05d97fc  lbz 12, 7(6)
  05d9800  std 29, 120(1)
  05d9804  std 31, 136(1)
  05d9808  mr 11, 7
  05d980c  lhz 7, 2(6)
  05d9810  mr 31, 6
  05d9814  mr 3, 4
  05d9818  mr 28, 30
  05d981c  mr 29, 4
  05d9820  bt 30, 0x5d996c
  05d9824  cmpwi 7, 4, 0
  05d9828  bt 30, 0x5d9a44
  05d982c  cmpwi 7, 5, 0
  05d9830  bt- 30, 0x5d9adc
  05d9834  extsb 0, 12
  05d9838  cmpwi 7, 0, 15
  05d983c  bt- 29, 0x5d9a08
  05d9840  slwi 9, 0, 2
  05d9844  clrldi 4, 11, 32
  05d9848  extsw 9, 9
  05d984c  lwzx 0, 4, 9
  05d9850  cmpwi 7, 0, 0
  05d9854  bt- 30, 0x5d9a08
  05d9858  lbz 8, 0(3)
  05d985c  li 6, 1
  05d9860  b 0x5d98e4
  05d9864  rlwinm 0, 11, 0, 19, 19
  05d9868  cmpwi 7, 0, 0
  05d986c  bt 30, 0x5d9880
  05d9870  clrlwi 0, 7, 16
  05d9874  srwi 9, 0, 8
  05d9878  slwi 0, 0, 8
  05d987c  or 7, 0, 9
  05d9880  rlwinm 0, 11, 0, 17, 17
  05d9884  cmpwi 7, 0, 0
  05d9888  bt 30, 0x5d98a0
  05d988c  cmpwi 7, 8, 0
  05d9890  bt 30, 0x5d98a0
  05d9894  addi 3, 3, 1
  05d9898  addi 5, 5, -1
  05d989c  li 6, 0
  05d98a0  rlwinm 0, 11, 0, 18, 18
  05d98a4  cmpwi 7, 0, 0
  05d98a8  bf 30, 0x5d9920
  05d98ac  cmpwi 7, 5, 0
  05d98b0  bt- 30, 0x5d9adc
  05d98b4  extsb 0, 12
  05d98b8  cmpwi 7, 0, 15
  05d98bc  bt- 29, 0x5d9a08
  05d98c0  slwi 9, 0, 2
  05d98c4  extsw 9, 9
  05d98c8  lwzx 0, 4, 9
  05d98cc  cmpwi 7, 0, 0
  05d98d0  bt- 30, 0x5d9a08
  05d98d4  addi 6, 6, 1
  05d98d8  cmpwi 7, 6, 4079
  05d98dc  bt- 29, 0x5d9a08
  05d98e0  lbz 8, 0(3)
  05d98e4  slwi 9, 8, 1
  05d98e8  add 9, 9, 0
  05d98ec  clrldi 9, 9, 32
  05d98f0  lhz 10, 0(9)
  05d98f4  clrlwi 11, 10, 16
  05d98f8  cmpwi 7, 11, 0
  05d98fc  bt- 30, 0x5d9a08
  05d9900  extsh 0, 10
  05d9904  rlwinm 12, 11, 24, 28, 31
  05d9908  cmpwi 7, 0, 0
  05d990c  bf 28, 0x5d9864
  05d9910  rlwinm 9, 7, 0, 0, 23
  05d9914  clrlwi 0, 10, 24
  05d9918  or 7, 9, 0
  05d991c  b 0x5d9864
  05d9920  cmpwi 7, 28, 0
  05d9924  bt 30, 0x5d992c
  05d9928  sth 7, 0(30)
  05d992c  clrlwi 0, 7, 16
  05d9930  extsb 9, 12
  05d9934  cmpwi 7, 0, 0
  05d9938  sth 9, 6(31)
  05d993c  sub 4, 3, 29
  05d9940  stw 0, 0(31)
  05d9944  bt 30, 0x5d9ab4
  05d9948  ld 0, 160(1)
  05d994c  extsw 3, 4
  05d9950  ld 28, 112(1)
  05d9954  ld 29, 120(1)
  05d9958  mtlr 0
  05d995c  ld 30, 128(1)
  05d9960  ld 31, 136(1)
  05d9964  addi 1, 1, 144
  05d9968  blr
  05d996c  cmpwi 7, 4, 0
  05d9970  bt 30, 0x5d9b14
  05d9974  cmpwi 7, 5, 0
  05d9978  clrldi 5, 5, 32
  05d997c  mtctr 5
  05d9980  bf 30, 0x5d99b8
  05d9984  b 0x5d9adc
  05d9988  lbz 11, 0(3)
  05d998c  addi 12, 12, -1
  05d9990  rlwinm 0, 11, 0, 24, 25
  05d9994  clrlwi 11, 11, 26
  05d9998  cmpwi 7, 0, 128
  05d999c  extsb 10, 12
  05d99a0  or 7, 9, 11
  05d99a4  bf 30, 0x5d9a08
  05d99a8  cmpwi 7, 10, 0
  05d99ac  bt 30, 0x5d9a90
  05d99b0  addi 3, 3, 1
  05d99b4  bdz 0x5d9adc
  05d99b8  extsb 10, 12
  05d99bc  rlwinm 9, 7, 6, 10, 25
  05d99c0  cmpwi 7, 10, 0
  05d99c4  bt 29, 0x5d9988
  05d99c8  lbz 11, 0(3)
  05d99cc  extsb 0, 11
  05d99d0  clrlwi 5, 11, 24
  05d99d4  cmpwi 7, 0, 0
  05d99d8  rlwinm 9, 5, 0, 24, 26
  05d99dc  clrlwi 7, 11, 24
  05d99e0  cmpwi 6, 9, 192
  05d99e4  bf 28, 0x5d99a8
  05d99e8  rlwinm 0, 5, 0, 24, 27
  05d99ec  clrlwi 7, 11, 27
  05d99f0  cmpwi 7, 0, 224
  05d99f4  li 12, 1
  05d99f8  bt 26, 0x5d99b0
  05d99fc  clrlwi 7, 11, 28
  05d9a00  li 12, 2
  05d9a04  bt 30, 0x5d99b0
  05d9a08  bl 0x5d5904
  05d9a0c  nop
  05d9a10  lis 0, -32767
  05d9a14  ld 28, 112(1)
  05d9a18  ori 0, 0, 29
  05d9a1c  ld 29, 120(1)
  05d9a20  li 4, -1
  05d9a24  ld 30, 128(1)
  05d9a28  stw 0, 0(3)
  05d9a2c  ld 0, 160(1)
  05d9a30  extsw 3, 4
  05d9a34  ld 31, 136(1)
  05d9a38  addi 1, 1, 144
  05d9a3c  mtlr 0
  05d9a40  blr
  05d9a44  lwz 9, -24020(2)
  05d9a48  clrldi 8, 8, 32
  05d9a4c  ld 28, 112(1)
  05d9a50  ld 29, 120(1)
  05d9a54  ld 30, 128(1)
  05d9a58  ld 31, 136(1)
  05d9a5c  lhz 0, 6(9)
  05d9a60  lwz 11, 0(9)
  05d9a64  lhz 10, 4(9)
  05d9a68  sth 0, 6(6)
  05d9a6c  stw 11, 0(6)
  05d9a70  sth 10, 4(6)
  05d9a74  lhz 0, 0(8)
  05d9a78  rlwinm 4, 0, 0, 20, 23
  05d9a7c  ld 0, 160(1)
  05d9a80  addi 1, 1, 144
  05d9a84  extsw 3, 4
  05d9a88  mtlr 0
  05d9a8c  blr
  05d9a90  cmpwi 7, 28, 0
  05d9a94  bt 30, 0x5d9a9c
  05d9a98  sth 7, 0(30)
  05d9a9c  clrlwi 0, 7, 16
  05d9aa0  addi 9, 3, 1
  05d9aa4  cmpwi 7, 0, 0
  05d9aa8  sth 10, 6(31)
  05d9aac  sub 4, 9, 29
  05d9ab0  bf 30, 0x5d9948
  05d9ab4  ld 0, 160(1)
  05d9ab8  li 4, 0
  05d9abc  ld 28, 112(1)
  05d9ac0  extsw 3, 4
  05d9ac4  ld 29, 120(1)
  05d9ac8  ld 30, 128(1)
  05d9acc  mtlr 0
  05d9ad0  ld 31, 136(1)
  05d9ad4  addi 1, 1, 144
  05d9ad8  blr
  05d9adc  extsb 0, 12
  05d9ae0  ld 28, 112(1)
  05d9ae4  clrlwi 9, 7, 16
  05d9ae8  ld 29, 120(1)
  05d9aec  sth 0, 6(31)
  05d9af0  li 4, -2
  05d9af4  ld 0, 160(1)
  05d9af8  stw 9, 0(31)
  05d9afc  extsw 3, 4
  05d9b00  ld 30, 128(1)
  05d9b04  ld 31, 136(1)
  05d9b08  mtlr 0
  05d9b0c  addi 1, 1, 144
  05d9b10  blr
  05d9b14  lwz 9, -24020(2)
  05d9b18  li 4, 0
  05d9b1c  lhz 0, 6(9)
  05d9b20  lwz 11, 0(9)
  05d9b24  lhz 10, 4(9)
  05d9b28  sth 0, 6(6)
  05d9b2c  stw 11, 0(6)
  05d9b30  sth 10, 4(6)
  05d9b34  b 0x5d9948

mbrtowc:   # 0x5d9b38, 0xc bytes
  05d9b38  addis 7, 13, 0
  05d9b3c  addi 7, 7, -28428
  05d9b40  b 0x5d97dc
