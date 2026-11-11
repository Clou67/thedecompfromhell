# sdk/libc/xputstr.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Putstr:   # 0x5d9b44, 0x224 bytes
  05d9b44  stdu 1, -288(1)
  05d9b48  mflr 0
  05d9b4c  std 30, 272(1)
  05d9b50  std 0, 304(1)
  05d9b54  lwz 30, 68(3)
  05d9b58  std 23, 216(1)
  05d9b5c  cmpwi 7, 30, 0
  05d9b60  std 28, 256(1)
  05d9b64  std 29, 264(1)
  05d9b68  std 20, 192(1)
  05d9b6c  std 21, 200(1)
  05d9b70  std 22, 208(1)
  05d9b74  std 24, 224(1)
  05d9b78  std 25, 232(1)
  05d9b7c  std 26, 240(1)
  05d9b80  std 27, 248(1)
  05d9b84  std 31, 280(1)
  05d9b88  mr 29, 3
  05d9b8c  mr 28, 4
  05d9b90  mr 23, 3
  05d9b94  bt 28, 0x5d9d38
  05d9b98  lhz 0, 80(29)
  05d9b9c  li 9, 0
  05d9ba0  lwz 3, 76(29)
  05d9ba4  rlwinm 0, 0, 0, 29, 29
  05d9ba8  sth 9, 122(1)
  05d9bac  cmpwi 7, 0, 0
  05d9bb0  stw 9, 116(1)
  05d9bb4  sth 9, 120(1)
  05d9bb8  bf 30, 0x5d9bc8
  05d9bbc  addi 25, 3, 3
  05d9bc0  cmplwi 7, 25, 64
  05d9bc4  bt- 29, 0x5d9d44
  05d9bc8  addi 20, 1, 128
  05d9bcc  li 25, 64
  05d9bd0  mr 27, 20
  05d9bd4  cmpwi 7, 30, 0
  05d9bd8  bf- 29, 0x5d9d10
  05d9bdc  addi 0, 1, 112
  05d9be0  li 24, 0
  05d9be4  clrldi 26, 0, 32
  05d9be8  addi 22, 1, 116
  05d9bec  li 21, 0
  05d9bf0  b 0x5d9c88
  05d9bf4  lhz 0, 0(28)
  05d9bf8  clrldi 4, 27, 32
  05d9bfc  clrldi 3, 23, 32
  05d9c00  cmpwi 7, 0, 0
  05d9c04  bf 30, 0x5d9c10
  05d9c08  addi 31, 31, -1
  05d9c0c  bt- 26, 0x5d9cac
  05d9c10  cmpw 7, 31, 30
  05d9c14  sub 30, 30, 31
  05d9c18  bt- 29, 0x5d9d08
  05d9c1c  lwz 9, 44(29)
  05d9c20  add 0, 31, 9
  05d9c24  cmplw 7, 0, 25
  05d9c28  bf 29, 0x5d9c4c
  05d9c2c  stw 21, 76(29)
  05d9c30  bl 0x5d9d68
  05d9c34  nop
  05d9c38  li 9, 0
  05d9c3c  cmpwi 7, 3, 0
  05d9c40  mr 24, 3
  05d9c44  bt- 28, 0x5d9cb0
  05d9c48  stw 9, 44(29)
  05d9c4c  add 3, 27, 9
  05d9c50  mr 4, 26
  05d9c54  clrldi 3, 3, 32
  05d9c58  clrldi 5, 31, 32
  05d9c5c  bl 0x5c5ad0
  05d9c60  nop
  05d9c64  lhz 0, 0(28)
  05d9c68  lwz 9, 44(29)
  05d9c6c  cmpwi 7, 0, 0
  05d9c70  add 9, 31, 9
  05d9c74  addi 28, 28, 2
  05d9c78  cmpwi 6, 30, 0
  05d9c7c  stw 9, 44(29)
  05d9c80  bt- 30, 0x5d9d08
  05d9c84  bf- 25, 0x5d9d08
  05d9c88  lhz 4, 0(28)
  05d9c8c  clrldi 5, 22, 32
  05d9c90  mr 3, 26
  05d9c94  bl 0x5cc418
  05d9c98  nop
  05d9c9c  cmpwi 7, 3, 0
  05d9ca0  mr 31, 3
  05d9ca4  mcrf 6, 7
  05d9ca8  bf+ 28, 0x5d9bf4
  05d9cac  li 24, -1
  05d9cb0  cmpw 7, 27, 20
  05d9cb4  bt 30, 0x5d9cc4
  05d9cb8  clrldi 3, 27, 32
  05d9cbc  bl 0x5d580c
  05d9cc0  nop
  05d9cc4  ld 0, 304(1)
  05d9cc8  extsw 3, 24
  05d9ccc  ld 20, 192(1)
  05d9cd0  ld 21, 200(1)
  05d9cd4  mtlr 0
  05d9cd8  ld 22, 208(1)
  05d9cdc  ld 23, 216(1)
  05d9ce0  ld 24, 224(1)
  05d9ce4  ld 25, 232(1)
  05d9ce8  ld 26, 240(1)
  05d9cec  ld 27, 248(1)
  05d9cf0  ld 28, 256(1)
  05d9cf4  ld 29, 264(1)
  05d9cf8  ld 30, 272(1)
  05d9cfc  ld 31, 280(1)
  05d9d00  addi 1, 1, 288
  05d9d04  blr
  05d9d08  cmpwi 7, 24, 0
  05d9d0c  bf 30, 0x5d9cb0
  05d9d10  clrldi 3, 23, 32
  05d9d14  clrldi 4, 27, 32
  05d9d18  bl 0x5d9d68
  05d9d1c  nop
  05d9d20  cmpwi 7, 3, 0
  05d9d24  mr 24, 3
  05d9d28  bf- 30, 0x5d9cb0
  05d9d2c  stw 3, 76(29)
  05d9d30  stw 3, 44(29)
  05d9d34  b 0x5d9cb0
  05d9d38  lis 30, 32767
  05d9d3c  ori 30, 30, 65535
  05d9d40  b 0x5d9b98
  05d9d44  clrldi 3, 25, 32
  05d9d48  li 24, -1
  05d9d4c  bl 0x5d5838
  05d9d50  nop
  05d9d54  addi 20, 1, 128
  05d9d58  cmpwi 7, 3, 0
  05d9d5c  mr 27, 3
  05d9d60  bf 30, 0x5d9bd4
  05d9d64  b 0x5d9cc4
