# sdk/libc/atexit.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

reallocate_extended_buf:   # 0x5c4b94, 0x8c bytes
  05c4b94  stdu 1, -144(1)
  05c4b98  mflr 0
  05c4b9c  std 31, 136(1)
  05c4ba0  lwz 31, -24796(2)
  05c4ba4  std 0, 160(1)
  05c4ba8  std 28, 112(1)
  05c4bac  std 30, 128(1)
  05c4bb0  mr 30, 3
  05c4bb4  lwz 28, 0(31)
  05c4bb8  slwi 4, 30, 2
  05c4bbc  clrldi 3, 28, 32
  05c4bc0  std 29, 120(1)
  05c4bc4  lwz 29, 4(31)
  05c4bc8  bl 0x5d579c
  05c4bcc  nop
  05c4bd0  cmpwi 7, 3, 0
  05c4bd4  sub 29, 29, 28
  05c4bd8  li 11, 1
  05c4bdc  add 9, 3, 29
  05c4be0  bt 30, 0x5c4bfc
  05c4be4  lwz 0, 264(31)
  05c4be8  li 11, 0
  05c4bec  stw 3, 0(31)
  05c4bf0  add 0, 30, 0
  05c4bf4  stw 9, 4(31)
  05c4bf8  stw 0, 264(31)
  05c4bfc  ld 0, 160(1)
  05c4c00  extsw 3, 11
  05c4c04  ld 28, 112(1)
  05c4c08  ld 29, 120(1)
  05c4c0c  mtlr 0
  05c4c10  ld 30, 128(1)
  05c4c14  ld 31, 136(1)
  05c4c18  addi 1, 1, 144
  05c4c1c  blr

__cxa_atexit:   # 0x5c4c20, 0x160 bytes
  05c4c20  stdu 1, -144(1)
  05c4c24  mflr 0
  05c4c28  std 29, 120(1)
  05c4c2c  std 30, 128(1)
  05c4c30  mr 29, 3
  05c4c34  mr 30, 4
  05c4c38  li 3, 1
  05c4c3c  std 31, 136(1)
  05c4c40  std 0, 160(1)
  05c4c44  std 28, 112(1)
  05c4c48  bl 0x5cbbec
  05c4c4c  nop
  05c4c50  lwz 31, -24796(2)
  05c4c54  srawi 0, 30, 31
  05c4c58  xor 9, 0, 30
  05c4c5c  sub 9, 9, 0
  05c4c60  lwz 0, 0(31)
  05c4c64  addi 9, 9, -1
  05c4c68  cmpwi 7, 0, 0
  05c4c6c  srawi 11, 9, 31
  05c4c70  rlwinm 11, 11, 0, 0, 29
  05c4c74  addi 11, 11, 8
  05c4c78  bt 30, 0x5c4d00
  05c4c7c  lwz 10, 264(31)
  05c4c80  lwz 3, 4(31)
  05c4c84  add 9, 0, 10
  05c4c88  add 0, 11, 3
  05c4c8c  cmplw 7, 9, 0
  05c4c90  bt 28, 0x5c4cdc
  05c4c94  clrldi 3, 3, 32
  05c4c98  clrldi 4, 29, 32
  05c4c9c  clrldi 5, 30, 32
  05c4ca0  bl 0x5c499c
  05c4ca4  stw 3, 4(31)
  05c4ca8  li 3, 1
  05c4cac  bl 0x5cbb70
  05c4cb0  nop
  05c4cb4  ld 0, 160(1)
  05c4cb8  ld 28, 112(1)
  05c4cbc  li 3, 0
  05c4cc0  ld 29, 120(1)
  05c4cc4  ld 30, 128(1)
  05c4cc8  mtlr 0
  05c4ccc  extsw 3, 3
  05c4cd0  ld 31, 136(1)
  05c4cd4  addi 1, 1, 144
  05c4cd8  blr
  05c4cdc  srawi 3, 10, 1
  05c4ce0  addze 3, 3
  05c4ce4  add 3, 10, 3
  05c4ce8  extsw 3, 3
  05c4cec  bl 0x5c4b94
  05c4cf0  cmpwi 7, 3, 0
  05c4cf4  bf 30, 0x5c4d40
  05c4cf8  lwz 3, 4(31)
  05c4cfc  b 0x5c4c94
  05c4d00  lwz 28, -24792(2)
  05c4d04  addi 0, 31, 264
  05c4d08  lwz 3, 0(28)
  05c4d0c  add 9, 11, 3
  05c4d10  cmplw 7, 9, 0
  05c4d14  bt 29, 0x5c4d30
  05c4d18  clrldi 3, 3, 32
  05c4d1c  clrldi 4, 29, 32
  05c4d20  clrldi 5, 30, 32
  05c4d24  bl 0x5c499c
  05c4d28  stw 3, 0(28)
  05c4d2c  b 0x5c4ca8
  05c4d30  li 3, 32
  05c4d34  bl 0x5c4b94
  05c4d38  cmpwi 7, 3, 0
  05c4d3c  bt 30, 0x5c4d68
  05c4d40  ld 0, 160(1)
  05c4d44  li 3, 1
  05c4d48  ld 28, 112(1)
  05c4d4c  extsw 3, 3
  05c4d50  ld 29, 120(1)
  05c4d54  ld 30, 128(1)
  05c4d58  mtlr 0
  05c4d5c  ld 31, 136(1)
  05c4d60  addi 1, 1, 144
  05c4d64  blr
  05c4d68  clrldi 4, 29, 32
  05c4d6c  lwz 3, 4(31)
  05c4d70  clrldi 5, 30, 32
  05c4d74  bl 0x5c499c
  05c4d78  stw 3, 4(31)
  05c4d7c  b 0x5c4ca8

FUN_005c4d80:   # 0x5c4d80, 0xc bytes
  05c4d80  li 4, 0
  05c4d84  li 5, 0
  05c4d88  b 0x5c4c20
