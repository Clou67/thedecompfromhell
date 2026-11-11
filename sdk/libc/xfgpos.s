# sdk/libc/xfgpos.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Fgpos:   # 0x5c8bdc, 0x1f0 bytes
  05c8bdc  stdu 1, -176(1)
  05c8be0  mflr 0
  05c8be4  std 25, 120(1)
  05c8be8  std 0, 192(1)
  05c8bec  lhz 0, 100(3)
  05c8bf0  mr 25, 4
  05c8bf4  std 27, 136(1)
  05c8bf8  clrlwi 0, 0, 31
  05c8bfc  std 29, 152(1)
  05c8c00  cmpwi 7, 0, 0
  05c8c04  std 31, 168(1)
  05c8c08  std 24, 112(1)
  05c8c0c  std 26, 128(1)
  05c8c10  std 28, 144(1)
  05c8c14  std 30, 160(1)
  05c8c18  mr 31, 3
  05c8c1c  mr 27, 4
  05c8c20  mr 29, 3
  05c8c24  bt 30, 0x5c8ce0
  05c8c28  lhz 3, 4(3)
  05c8c2c  li 5, 1
  05c8c30  ld 4, 88(31)
  05c8c34  extsh 3, 3
  05c8c38  extsw 4, 4
  05c8c3c  bl 0x5cfb10
  05c8c40  nop
  05c8c44  li 0, 0
  05c8c48  mr 30, 3
  05c8c4c  std 0, 88(31)
  05c8c50  lhz 9, 0(31)
  05c8c54  clrldi 26, 29, 32
  05c8c58  clrlwi 0, 9, 30
  05c8c5c  cmpwi 7, 0, 0
  05c8c60  bt- 30, 0x5c8d18
  05c8c64  cmpwi 7, 30, -1
  05c8c68  bt 30, 0x5c8d18
  05c8c6c  rlwinm 0, 9, 0, 18, 18
  05c8c70  cmpwi 7, 0, 0
  05c8c74  bf 30, 0x5c8d00
  05c8c78  rlwinm 0, 9, 0, 19, 19
  05c8c7c  cmpwi 7, 0, 0
  05c8c80  bf 30, 0x5c8d64
  05c8c84  cmpwi 7, 25, 0
  05c8c88  bt 30, 0x5c8cac
  05c8c8c  stw 30, 0(27)
  05c8c90  lwz 0, 52(31)
  05c8c94  li 30, 0
  05c8c98  stw 0, 4(27)
  05c8c9c  lhz 9, 56(31)
  05c8ca0  sth 9, 8(27)
  05c8ca4  lhz 0, 58(31)
  05c8ca8  sth 0, 10(27)
  05c8cac  ld 0, 192(1)
  05c8cb0  extsw 3, 30
  05c8cb4  ld 24, 112(1)
  05c8cb8  ld 25, 120(1)
  05c8cbc  mtlr 0
  05c8cc0  ld 26, 128(1)
  05c8cc4  ld 27, 136(1)
  05c8cc8  ld 28, 144(1)
  05c8ccc  ld 29, 152(1)
  05c8cd0  ld 30, 160(1)
  05c8cd4  ld 31, 168(1)
  05c8cd8  addi 1, 1, 176
  05c8cdc  blr
  05c8ce0  lhz 3, 4(3)
  05c8ce4  li 4, 0
  05c8ce8  li 5, 1
  05c8cec  extsh 3, 3
  05c8cf0  bl 0x5cfb10
  05c8cf4  nop
  05c8cf8  mr 30, 3
  05c8cfc  b 0x5c8c50
  05c8d00  mr 3, 26
  05c8d04  lwz 4, 8(31)
  05c8d08  lwz 5, 16(31)
  05c8d0c  bl 0x5c8bc4
  05c8d10  add 30, 30, 3
  05c8d14  b 0x5c8c84
  05c8d18  bl 0x5d5904
  05c8d1c  nop
  05c8d20  lis 0, -32767
  05c8d24  ld 24, 112(1)
  05c8d28  ori 0, 0, 30
  05c8d2c  ld 25, 120(1)
  05c8d30  li 30, -1
  05c8d34  ld 26, 128(1)
  05c8d38  stw 0, 0(3)
  05c8d3c  ld 0, 192(1)
  05c8d40  extsw 3, 30
  05c8d44  ld 27, 136(1)
  05c8d48  ld 28, 144(1)
  05c8d4c  mtlr 0
  05c8d50  ld 29, 152(1)
  05c8d54  ld 30, 160(1)
  05c8d58  ld 31, 168(1)
  05c8d5c  addi 1, 1, 176
  05c8d60  blr
  05c8d64  lwz 5, 40(31)
  05c8d68  lwz 24, 28(31)
  05c8d6c  cmpwi 7, 5, 0
  05c8d70  ld 4, 72(31)
  05c8d74  bt 30, 0x5c8dc4
  05c8d78  clrldi 4, 4, 32
  05c8d7c  clrldi 5, 5, 32
  05c8d80  mr 3, 26
  05c8d84  bl 0x5c8bc4
  05c8d88  addi 5, 29, 67
  05c8d8c  mr 28, 3
  05c8d90  clrldi 4, 24, 32
  05c8d94  clrldi 5, 5, 32
  05c8d98  mr 3, 26
  05c8d9c  bl 0x5c8bc4
  05c8da0  lwz 4, 16(31)
  05c8da4  mr 29, 3
  05c8da8  lwz 5, 44(31)
  05c8dac  mr 3, 26
  05c8db0  add 29, 29, 28
  05c8db4  bl 0x5c8bc4
  05c8db8  add 29, 29, 3
  05c8dbc  sub 30, 30, 29
  05c8dc0  b 0x5c8c84
  05c8dc4  lwz 5, 96(31)
  05c8dc8  b 0x5c8d78
