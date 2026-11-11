# game/update/moby1641.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1641_002a6a04:   # 0x2a6a04, 0x14 bytes
  02a6a04  lis 3, 123
  02a6a08  lis 4, 1
  02a6a0c  addic 3, 3, -13604
  02a6a10  stw 4, 72(3)
  02a6a14  blr

UpdateMoby_1641:   # 0x2a6a18, 0x1b8 bytes
  02a6a18  stdu 1, -240(1)
  02a6a1c  mflr 0
  02a6a20  std 0, 256(1)
  02a6a24  std 27, 200(1)
  02a6a28  std 31, 232(1)
  02a6a2c  std 28, 208(1)
  02a6a30  lwz 27, 120(3)
  02a6a34  ori 31, 3, 0
  02a6a38  std 30, 224(1)
  02a6a3c  li 28, 0
  02a6a40  ori 30, 28, 0
  02a6a44  lwz 3, 20(27)
  02a6a48  std 29, 216(1)
  02a6a4c  std 26, 192(1)
  02a6a50  cmpwi 3, 0
  02a6a54  bf 1, 0x2a6ba8
  02a6a58  addic 29, 31, 64
  02a6a5c  lis 3, -16512
  02a6a60  stw 3, 112(1)
  02a6a64  lfs 2, 4(27)
  02a6a68  fneg 1, 2
  02a6a6c  bl 0xfcbe8
  02a6a70  nop
  02a6a74  lis 5, 16256
  02a6a78  stfs 1, 116(1)
  02a6a7c  addic 3, 1, 144
  02a6a80  stw 30, 120(1)
  02a6a84  ori 4, 29, 0
  02a6a88  stw 5, 124(1)
  02a6a8c  bl 0x500b64
  02a6a90  nop
  02a6a94  lfs 1, 116(1)
  02a6a98  lfs 2, 112(1)
  02a6a9c  lfs 3, 172(1)
  02a6aa0  lfs 4, 160(1)
  02a6aa4  fmuls 3, 3, 1
  02a6aa8  lfs 5, 164(1)
  02a6aac  fmuls 4, 4, 1
  02a6ab0  lfs 6, 156(1)
  02a6ab4  lfs 7, 168(1)
  02a6ab8  fmuls 5, 5, 1
  02a6abc  lfs 8, 120(1)
  02a6ac0  lfs 9, 144(1)
  02a6ac4  fmuls 1, 7, 1
  02a6ac8  lfs 7, 148(1)
  02a6acc  lfs 10, 152(1)
  02a6ad0  lfs 11, 188(1)
  02a6ad4  lis 26, 114
  02a6ad8  lfs 12, 176(1)
  02a6adc  fmadds 3, 6, 2, 3
  02a6ae0  fmadds 4, 9, 2, 4
  02a6ae4  lfs 6, 180(1)
  02a6ae8  fmadds 5, 7, 2, 5
  02a6aec  fmadds 1, 10, 2, 1
  02a6af0  lfs 2, 124(1)
  02a6af4  lfs 7, 184(1)
  02a6af8  stw 30, 128(1)
  02a6afc  fmadds 3, 11, 8, 3
  02a6b00  fmadds 4, 12, 8, 4
  02a6b04  fmadds 5, 6, 8, 5
  02a6b08  fmadds 1, 7, 8, 1
  02a6b0c  fadds 2, 3, 2
  02a6b10  stfs 2, 124(1)
  02a6b14  lfs 2, 16(31)
  02a6b18  lfs 3, 20(31)
  02a6b1c  fadds 2, 4, 2
  02a6b20  lfs 4, 24(31)
  02a6b24  fadds 3, 5, 3
  02a6b28  fadds 1, 1, 4
  02a6b2c  lfs 4, -3052(26)
  02a6b30  stfs 2, 112(1)
  02a6b34  stfs 3, 116(1)
  02a6b38  stfs 1, 120(1)
  02a6b3c  lfs 1, 24(27)
  02a6b40  lfs 2, 28(27)
  02a6b44  fmuls 1, 1, 4
  02a6b48  fmuls 2, 2, 4
  02a6b4c  bl 0xfcbe8
  02a6b50  nop
  02a6b54  stfs 1, 132(1)
  02a6b58  lfs 1, 32(27)
  02a6b5c  lfs 2, -3052(26)
  02a6b60  lfs 3, 36(27)
  02a6b64  fmuls 1, 1, 2
  02a6b68  fmuls 2, 3, 2
  02a6b6c  bl 0xfcbe8
  02a6b70  nop
  02a6b74  stfs 1, 136(1)
  02a6b78  stw 30, 140(1)
  02a6b7c  addic 3, 1, 112
  02a6b80  lwz 5, 16(27)
  02a6b84  addic 4, 1, 128
  02a6b88  lfs 1, 12(27)
  02a6b8c  extsw 5, 5
  02a6b90  bl 0x1353b0
  02a6b94  nop
  02a6b98  lwz 3, 20(27)
  02a6b9c  addic 28, 28, 1
  02a6ba0  cmpw 28, 3
  02a6ba4  bt 0, 0x2a6a5c
  02a6ba8  ld 0, 256(1)
  02a6bac  mtlr 0
  02a6bb0  ld 26, 192(1)
  02a6bb4  ld 27, 200(1)
  02a6bb8  ld 28, 208(1)
  02a6bbc  ld 29, 216(1)
  02a6bc0  ld 30, 224(1)
  02a6bc4  ld 31, 232(1)
  02a6bc8  addi 1, 1, 240
  02a6bcc  blr
