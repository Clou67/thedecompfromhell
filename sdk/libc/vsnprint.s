# sdk/libc/vsnprint.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

vsnprintf:   # 0x5c8a94, 0x70 bytes
  05c8a94  cmpwi 7, 4, 0
  05c8a98  mflr 0
  05c8a9c  stdu 1, -128(1)
  05c8aa0  std 0, 144(1)
  05c8aa4  addi 9, 4, -1
  05c8aa8  bf 30, 0x5c8af8
  05c8aac  stw 4, 116(1)
  05c8ab0  stw 4, 112(1)
  05c8ab4  lwz 3, -24736(2)
  05c8ab8  clrldi 5, 5, 32
  05c8abc  clrldi 6, 6, 32
  05c8ac0  addi 4, 1, 112
  05c8ac4  bl 0x5cd5c4
  05c8ac8  nop
  05c8acc  lwz 0, 112(1)
  05c8ad0  cmpwi 7, 0, 0
  05c8ad4  clrldi 9, 0, 32
  05c8ad8  extsw 3, 3
  05c8adc  bt 30, 0x5c8ae8
  05c8ae0  li 0, 0
  05c8ae4  stb 0, 0(9)
  05c8ae8  ld 0, 144(1)
  05c8aec  addi 1, 1, 128
  05c8af0  mtlr 0
  05c8af4  blr
  05c8af8  stw 3, 112(1)
  05c8afc  stw 9, 116(1)
  05c8b00  b 0x5c8ab4

FUN_005c8b04:   # 0x5c8b04, 0x84 bytes
  05c8b04  stdu 1, -144(1)
  05c8b08  mflr 0
  05c8b0c  std 31, 136(1)
  05c8b10  std 0, 160(1)
  05c8b14  lwz 31, 4(3)
  05c8b18  clrldi 4, 4, 32
  05c8b1c  std 29, 120(1)
  05c8b20  cmplw 7, 31, 5
  05c8b24  std 30, 128(1)
  05c8b28  clrldi 29, 3, 32
  05c8b2c  mr 30, 3
  05c8b30  bf 29, 0x5c8b38
  05c8b34  mr 31, 5
  05c8b38  cmpwi 7, 31, 0
  05c8b3c  clrldi 5, 31, 32
  05c8b40  bt 30, 0x5c8b68
  05c8b44  lwz 3, 0(30)
  05c8b48  bl 0x5c5ad0
  05c8b4c  nop
  05c8b50  lwz 0, 0(30)
  05c8b54  lwz 9, 4(30)
  05c8b58  add 0, 0, 31
  05c8b5c  sub 9, 9, 31
  05c8b60  stw 0, 0(30)
  05c8b64  stw 9, 4(30)
  05c8b68  ld 0, 160(1)
  05c8b6c  mr 3, 29
  05c8b70  ld 30, 128(1)
  05c8b74  ld 29, 120(1)
  05c8b78  mtlr 0
  05c8b7c  ld 31, 136(1)
  05c8b80  addi 1, 1, 144
  05c8b84  blr

FUN_005c8b88:   # 0x5c8b88, 0xc bytes
  05c8b88  lwz 9, -24732(2)
  05c8b8c  lwz 3, 0(9)
  05c8b90  blr

FUN_005c8b94:   # 0x5c8b94, 0x30 bytes
  05c8b94  stdu 1, -144(1)
  05c8b98  mflr 0
  05c8b9c  std 29, 120(1)
  05c8ba0  std 0, 160(1)
  05c8ba4  mr 29, 3
  05c8ba8  li 4, 0
  05c8bac  li 3, 1
  05c8bb0  li 11, 988
  05c8bb4  sc
  05c8bb8  extsw 3, 29
  05c8bbc  bl 0x14c44
  05c8bc0  nop
