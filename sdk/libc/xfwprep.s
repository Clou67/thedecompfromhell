# sdk/libc/xfwprep.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Fwprep:   # 0x5c9998, 0x1a0 bytes
  05c9998  stdu 1, -144(1)
  05c999c  mflr 0
  05c99a0  std 31, 136(1)
  05c99a4  mr 31, 3
  05c99a8  std 0, 160(1)
  05c99ac  std 30, 128(1)
  05c99b0  std 28, 112(1)
  05c99b4  std 29, 120(1)
  05c99b8  lwz 11, 16(31)
  05c99bc  li 3, 0
  05c99c0  lwz 0, 24(31)
  05c99c4  mr 30, 31
  05c99c8  clrldi 8, 31, 32
  05c99cc  cmplw 7, 0, 11
  05c99d0  bt 29, 0x5c9a4c
  05c99d4  lhz 10, 0(31)
  05c99d8  li 7, 0
  05c99dc  clrlwi 9, 10, 16
  05c99e0  ori 7, 7, 36866
  05c99e4  and 0, 9, 7
  05c99e8  cmpwi 7, 0, 2
  05c99ec  bf 30, 0x5c9aa4
  05c99f0  rlwinm 0, 9, 0, 17, 18
  05c99f4  cmpwi 7, 0, 24576
  05c99f8  bt 30, 0x5c9a78
  05c99fc  rlwinm 0, 10, 0, 20, 20
  05c9a00  cmpwi 7, 0, 0
  05c9a04  bf 30, 0x5c9a70
  05c9a08  lwz 8, 8(31)
  05c9a0c  addi 29, 30, 67
  05c9a10  cmpw 7, 29, 8
  05c9a14  bt 30, 0x5c9ac4
  05c9a18  lhz 9, 100(31)
  05c9a1c  ori 10, 10, 24576
  05c9a20  lwz 11, 12(31)
  05c9a24  li 0, 0
  05c9a28  rlwinm 9, 9, 0, 0, 30
  05c9a2c  li 3, 0
  05c9a30  std 0, 80(31)
  05c9a34  stw 11, 24(31)
  05c9a38  sth 10, 0(31)
  05c9a3c  stw 8, 96(31)
  05c9a40  sth 9, 100(31)
  05c9a44  stw 8, 16(31)
  05c9a48  stw 8, 20(31)
  05c9a4c  ld 0, 160(1)
  05c9a50  extsw 3, 3
  05c9a54  ld 28, 112(1)
  05c9a58  ld 29, 120(1)
  05c9a5c  mtlr 0
  05c9a60  ld 30, 128(1)
  05c9a64  ld 31, 136(1)
  05c9a68  addi 1, 1, 144
  05c9a6c  blr
  05c9a70  lwz 8, 8(31)
  05c9a74  b 0x5c9a18
  05c9a78  lwz 0, 12(31)
  05c9a7c  cmplw 7, 0, 11
  05c9a80  bt+ 29, 0x5c99fc
  05c9a84  mr 3, 8
  05c9a88  bl 0x5c50cc
  05c9a8c  nop
  05c9a90  cmpwi 7, 3, 0
  05c9a94  li 3, -1
  05c9a98  bf 30, 0x5c9a4c
  05c9a9c  lhz 10, 0(31)
  05c9aa0  b 0x5c99fc
  05c9aa4  extsh 9, 10
  05c9aa8  li 3, -1
  05c9aac  srawi 9, 9, 31
  05c9ab0  rlwinm 9, 9, 0, 0, 17
  05c9ab4  addi 9, 9, 16896
  05c9ab8  or 9, 9, 10
  05c9abc  sth 9, 0(31)
  05c9ac0  b 0x5c9a4c
  05c9ac4  lwz 9, -24712(2)
  05c9ac8  lwz 28, 0(9)
  05c9acc  cmpwi 7, 28, 0
  05c9ad0  bf 30, 0x5c9ae8
  05c9ad4  addi 0, 30, 68
  05c9ad8  mr 8, 29
  05c9adc  stw 29, 8(31)
  05c9ae0  stw 0, 12(31)
  05c9ae4  b 0x5c9a18
  05c9ae8  clrldi 3, 28, 32
  05c9aec  bl 0x5d5838
  05c9af0  nop
  05c9af4  cmpwi 7, 3, 0
  05c9af8  mr 8, 3
  05c9afc  stw 3, 8(31)
  05c9b00  bt 30, 0x5c9b30
  05c9b04  lhz 10, 0(31)
  05c9b08  add 0, 3, 28
  05c9b0c  clrldi 11, 3, 32
  05c9b10  ori 9, 10, 64
  05c9b14  stw 0, 12(31)
  05c9b18  mr 10, 9
  05c9b1c  sth 9, 0(31)
  05c9b20  stw 3, 48(31)
  05c9b24  std 11, 72(31)
  05c9b28  stw 3, 44(31)
  05c9b2c  b 0x5c9a18
  05c9b30  lhz 10, 0(31)
  05c9b34  b 0x5c9ad4
