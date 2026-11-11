# sdk/libc/fputs.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

fputs:   # 0x5d5a08, 0x21c bytes
  05d5a08  stdu 1, -176(1)
  05d5a0c  mflr 0
  05d5a10  std 26, 128(1)
  05d5a14  mr 26, 3
  05d5a18  mr 3, 4
  05d5a1c  std 25, 120(1)
  05d5a20  std 29, 152(1)
  05d5a24  std 27, 136(1)
  05d5a28  std 28, 144(1)
  05d5a2c  std 30, 160(1)
  05d5a30  std 31, 168(1)
  05d5a34  std 0, 192(1)
  05d5a38  mr 29, 4
  05d5a3c  mr 25, 4
  05d5a40  bl 0x5cbc38
  05d5a44  nop
  05d5a48  clrldi 28, 26, 32
  05d5a4c  mr 3, 25
  05d5a50  li 27, 0
  05d5a54  lbz 0, 0(28)
  05d5a58  cmpwi 7, 0, 0
  05d5a5c  bt 30, 0x5d5b9c
  05d5a60  lwz 0, 16(29)
  05d5a64  lwz 9, 24(29)
  05d5a68  cmplw 7, 0, 9
  05d5a6c  bf 28, 0x5d5bec
  05d5a70  lhz 0, 0(29)
  05d5a74  li 4, 10
  05d5a78  mr 3, 28
  05d5a7c  rlwinm 0, 0, 0, 21, 21
  05d5a80  cmpwi 7, 0, 0
  05d5a84  bt 30, 0x5d5b38
  05d5a88  bl 0x5c85b4
  05d5a8c  nop
  05d5a90  cmpwi 7, 3, 0
  05d5a94  sub 9, 3, 26
  05d5a98  mr 27, 3
  05d5a9c  addi 30, 9, 1
  05d5aa0  bt 30, 0x5d5b38
  05d5aa4  lwz 9, 16(29)
  05d5aa8  mr 4, 28
  05d5aac  lwz 0, 24(29)
  05d5ab0  clrldi 5, 30, 32
  05d5ab4  clrldi 3, 9, 32
  05d5ab8  sub 31, 0, 9
  05d5abc  cmplw 7, 30, 31
  05d5ac0  bt 29, 0x5d5b68
  05d5ac4  bl 0x5c5ad0
  05d5ac8  nop
  05d5acc  lwz 0, 16(29)
  05d5ad0  cmpwi 7, 27, 0
  05d5ad4  add 0, 0, 30
  05d5ad8  add 26, 26, 30
  05d5adc  mr 3, 25
  05d5ae0  stw 0, 16(29)
  05d5ae4  bt 30, 0x5d5a48
  05d5ae8  bl 0x5c50cc
  05d5aec  nop
  05d5af0  cmpwi 7, 3, 0
  05d5af4  bt 30, 0x5d5a48
  05d5af8  mr 3, 25
  05d5afc  bl 0x5cbbbc
  05d5b00  nop
  05d5b04  li 3, -1
  05d5b08  ld 0, 192(1)
  05d5b0c  extsw 3, 3
  05d5b10  ld 25, 120(1)
  05d5b14  ld 26, 128(1)
  05d5b18  mtlr 0
  05d5b1c  ld 27, 136(1)
  05d5b20  ld 28, 144(1)
  05d5b24  ld 29, 152(1)
  05d5b28  ld 30, 160(1)
  05d5b2c  ld 31, 168(1)
  05d5b30  addi 1, 1, 176
  05d5b34  blr
  05d5b38  mr 3, 28
  05d5b3c  bl 0x5c8510
  05d5b40  nop
  05d5b44  lwz 9, 16(29)
  05d5b48  lwz 0, 24(29)
  05d5b4c  mr 30, 3
  05d5b50  sub 31, 0, 9
  05d5b54  mr 4, 28
  05d5b58  cmplw 7, 30, 31
  05d5b5c  clrldi 3, 9, 32
  05d5b60  clrldi 5, 30, 32
  05d5b64  bf 29, 0x5d5ac4
  05d5b68  clrldi 5, 31, 32
  05d5b6c  add 26, 26, 31
  05d5b70  bl 0x5c5ad0
  05d5b74  nop
  05d5b78  lwz 0, 16(29)
  05d5b7c  clrldi 28, 26, 32
  05d5b80  add 0, 0, 31
  05d5b84  mr 3, 25
  05d5b88  stw 0, 16(29)
  05d5b8c  li 27, 0
  05d5b90  lbz 0, 0(28)
  05d5b94  cmpwi 7, 0, 0
  05d5b98  bf 30, 0x5d5a60
  05d5b9c  lhz 0, 0(29)
  05d5ba0  rlwinm 0, 0, 0, 20, 20
  05d5ba4  cmpwi 7, 0, 0
  05d5ba8  bf 30, 0x5d5c10
  05d5bac  mr 3, 25
  05d5bb0  bl 0x5cbbbc
  05d5bb4  nop
  05d5bb8  ld 0, 192(1)
  05d5bbc  ld 25, 120(1)
  05d5bc0  li 3, 0
  05d5bc4  ld 26, 128(1)
  05d5bc8  ld 27, 136(1)
  05d5bcc  mtlr 0
  05d5bd0  extsw 3, 3
  05d5bd4  ld 28, 144(1)
  05d5bd8  ld 29, 152(1)
  05d5bdc  ld 30, 160(1)
  05d5be0  ld 31, 168(1)
  05d5be4  addi 1, 1, 176
  05d5be8  blr
  05d5bec  bl 0x5c9998
  05d5bf0  nop
  05d5bf4  cmpwi 7, 3, 0
  05d5bf8  bf 28, 0x5d5a70
  05d5bfc  mr 3, 25
  05d5c00  bl 0x5cbbbc
  05d5c04  nop
  05d5c08  li 3, -1
  05d5c0c  b 0x5d5b08
  05d5c10  bl 0x5c50cc
  05d5c14  nop
  05d5c18  cmpwi 7, 3, 0
  05d5c1c  bt+ 30, 0x5d5bac
  05d5c20  b 0x5d5af8

FUN_005d5c24:   # 0x5d5c24, 0x8 bytes
  05d5c24  lwz 3, -24128(2)
  05d5c28  blr
