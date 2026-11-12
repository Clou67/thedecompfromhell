# game/update/moby94.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_94:   # 0x4c49b0, 0x340 bytes
  04c49b0  stdu 1, -144(1)
  04c49b4  mflr 0
  04c49b8  std 0, 160(1)
  04c49bc  std 31, 136(1)
  04c49c0  lbz 4, 32(3)
  04c49c4  std 30, 128(1)
  04c49c8  ori 31, 3, 0
  04c49cc  lwz 30, 120(3)
  04c49d0  cmpwi 4, 0
  04c49d4  cmpwi 1, 4, -1
  04c49d8  std 29, 120(1)
  04c49dc  std 28, 112(1)
  04c49e0  cmpwi 6, 4, 1
  04c49e4  bt 1, 0x4c49f0
  04c49e8  bf 5, 0x4c4c00
  04c49ec  b 0x4c49f8
  04c49f0  bf 25, 0x4c4a10
  04c49f4  b 0x4c4c00
  04c49f8  li 3, 1
  04c49fc  stb 3, 32(31)
  04c4a00  bl 0xfcc68
  04c4a04  nop
  04c4a08  stfs 1, 16(30)
  04c4a0c  b 0x4c4c00
  04c4a10  addic 3, 30, 20
  04c4a14  bl 0x4fff60
  04c4a18  nop
  04c4a1c  cmpwi 3, 0
  04c4a20  bt 2, 0x4c4c00
  04c4a24  lis 3, 151
  04c4a28  lfs 2, 20(31)
  04c4a2c  addic 3, 3, -25376
  04c4a30  lfs 4, 16(31)
  04c4a34  lis 4, 76
  04c4a38  lfs 1, 132(3)
  04c4a3c  lfs 3, 128(3)
  04c4a40  fsubs 5, 2, 1
  04c4a44  fsubs 6, 4, 3
  04c4a48  addi 4, 4, 18808
  04c4a4c  fmuls 5, 5, 5
  04c4a50  fmadds 5, 6, 6, 5
  04c4a54  lfs 6, 0(4)
  04c4a58  fsqrts 5, 5
  04c4a5c  fcmpu 0, 5, 6
  04c4a60  cror 6, 1, 2
  04c4a64  bt 6, 0x4c4c00
  04c4a68  lwz 4, 8324(3)
  04c4a6c  cmpwi 4, 40
  04c4a70  bf 2, 0x4c4c00
  04c4a74  lwz 4, 1448(3)
  04c4a78  cmpwi 4, -1
  04c4a7c  cmpwi 6, 4, 3
  04c4a80  cmpwi 7, 4, 2
  04c4a84  bt 2, 0x4c4c00
  04c4a88  lis 4, 143
  04c4a8c  addic 5, 4, 19696
  04c4a90  lfs 5, 19696(4)
  04c4a94  lfs 6, 196(31)
  04c4a98  lfs 7, 192(31)
  04c4a9c  fmadds 2, 6, 5, 2
  04c4aa0  lfs 6, 4(5)
  04c4aa4  fmadds 4, 7, 5, 4
  04c4aa8  lfs 7, 8(5)
  04c4aac  lfs 8, 228(31)
  04c4ab0  lfs 9, 216(31)
  04c4ab4  lfs 10, 224(31)
  04c4ab8  fmuls 9, 9, 6
  04c4abc  lfs 11, 212(31)
  04c4ac0  lfs 12, 200(31)
  04c4ac4  lis 4, 76
  04c4ac8  lfs 13, 208(31)
  04c4acc  fmadds 2, 8, 7, 2
  04c4ad0  fmadds 4, 10, 7, 4
  04c4ad4  lfs 8, 232(31)
  04c4ad8  addi 4, 4, 18808
  04c4adc  fmadds 5, 12, 5, 9
  04c4ae0  lfs 9, 24(31)
  04c4ae4  fmadds 2, 11, 6, 2
  04c4ae8  fmadds 4, 13, 6, 4
  04c4aec  lfs 6, 84(3)
  04c4af0  lfs 10, 136(3)
  04c4af4  fmadds 5, 8, 7, 5
  04c4af8  fsubs 1, 2, 1
  04c4afc  fsubs 2, 4, 3
  04c4b00  lfs 3, 68(3)
  04c4b04  fadds 4, 5, 9
  04c4b08  lfs 5, 100(3)
  04c4b0c  lfs 7, 80(3)
  04c4b10  fmuls 6, 6, 1
  04c4b14  fmuls 1, 7, 1
  04c4b18  fsubs 4, 4, 10
  04c4b1c  fmadds 3, 3, 2, 6
  04c4b20  lfs 6, 4(4)
  04c4b24  lfs 7, 64(3)
  04c4b28  lfs 8, 96(3)
  04c4b2c  fmadds 1, 7, 2, 1
  04c4b30  fmadds 2, 5, 4, 3
  04c4b34  fmadds 1, 8, 4, 1
  04c4b38  fabs 2, 2
  04c4b3c  fcmpu 0, 2, 6
  04c4b40  cror 6, 1, 2
  04c4b44  bt 6, 0x4c4c00
  04c4b48  lis 3, 76
  04c4b4c  addi 3, 3, 18808
  04c4b50  lfs 2, 8(3)
  04c4b54  fcmpu 1, 1, 2
  04c4b58  bf 5, 0x4c4b60
  04c4b5c  bt 26, 0x4c4b68
  04c4b60  bf 4, 0x4c4c00
  04c4b64  bf 30, 0x4c4c00
  04c4b68  lis 3, -16311
  04c4b6c  lwz 29, 120(31)
  04c4b70  lis 5, 76
  04c4b74  vspltisw 2, -1
  04c4b78  li 4, 12
  04c4b7c  ori 3, 3, 4058
  04c4b80  addi 5, 5, 18808
  04c4b84  lis 7, 114
  04c4b88  li 8, -3056
  04c4b8c  vslw 2, 2, 2
  04c4b90  stw 3, 16(29)
  04c4b94  li 28, 0
  04c4b98  lvlx 3, 4, 5
  04c4b9c  li 3, 20
  04c4ba0  vspltw 3, 3, 0
  04c4ba4  lvlx 4, 8, 7
  04c4ba8  vmaddfp 2, 4, 3, 2
  04c4bac  vctsxs 2, 2, 0
  04c4bb0  vspltw 2, 2, 0
  04c4bb4  stvewx 2, 3, 29
  04c4bb8  lbz 3, 188(31)
  04c4bbc  cntlzw 3, 3
  04c4bc0  rlwinm 3, 3, 27, 31, 31
  04c4bc4  stb 3, 188(31)
  04c4bc8  lwz 3, 0(29)
  04c4bcc  cmpwi 3, -1
  04c4bd0  bt 2, 0x4c4bf0
  04c4bd4  lis 4, 164
  04c4bd8  slwi 3, 3, 8
  04c4bdc  lwz 4, -28512(4)
  04c4be0  addc 3, 4, 3
  04c4be4  clrldi 3, 3, 32
  04c4be8  bl 0x4c82d0
  04c4bec  nop
  04c4bf0  addic 28, 28, 1
  04c4bf4  addic 29, 29, 4
  04c4bf8  cmpwi 28, 4
  04c4bfc  bt 0, 0x4c4bc8
  04c4c00  lis 3, 76
  04c4c04  lfs 1, 16(30)
  04c4c08  addi 29, 3, 18808
  04c4c0c  lis 3, 114
  04c4c10  lfs 2, 16(29)
  04c4c14  lfs 3, -3052(3)
  04c4c18  fmuls 2, 3, 2
  04c4c1c  bl 0x502578
  04c4c20  nop
  04c4c24  stfs 1, 16(30)
  04c4c28  lfs 2, 20(29)
  04c4c2c  lfs 3, 24(29)
  04c4c30  fsubs 2, 2, 1
  04c4c34  fsubs 3, 3, 1
  04c4c38  lfs 5, 28(29)
  04c4c3c  fsub 4, 1, 2
  04c4c40  fsel 1, 4, 2, 1
  04c4c44  lfs 2, 32(29)
  04c4c48  fsub 4, 3, 1
  04c4c4c  fsel 1, 4, 3, 1
  04c4c50  lfs 3, 36(29)
  04c4c54  lfs 4, 40(29)
  04c4c58  lfs 7, 44(29)
  04c4c5c  lbz 3, 188(31)
  04c4c60  cmpwi 3, 0
  04c4c64  fmuls 6, 1, 1
  04c4c68  fmuls 8, 6, 1
  04c4c6c  fmadds 1, 8, 5, 1
  04c4c70  fmuls 10, 6, 8
  04c4c74  lfs 5, 48(29)
  04c4c78  fmuls 8, 6, 10
  04c4c7c  fmadds 1, 10, 2, 1
  04c4c80  fmuls 2, 6, 8
  04c4c84  fmadds 1, 8, 3, 1
  04c4c88  fmadds 1, 2, 4, 1
  04c4c8c  fadds 1, 1, 7
  04c4c90  fmuls 1, 1, 5
  04c4c94  bf 2, 0x4c4cb4
  04c4c98  lis 3, -32736
  04c4c9c  lis 4, -32736
  04c4ca0  ori 3, 3, 8320
  04c4ca4  ori 4, 4, 8224
  04c4ca8  bl 0x5027bc
  04c4cac  nop
  04c4cb0  b 0x4c4ccc
  04c4cb4  lis 3, -32736
  04c4cb8  lis 4, -32736
  04c4cbc  ori 3, 3, 32800
  04c4cc0  ori 4, 4, 8224
  04c4cc4  bl 0x5027bc
  04c4cc8  nop
  04c4ccc  stw 3, 144(31)
  04c4cd0  ld 0, 160(1)
  04c4cd4  mtlr 0
  04c4cd8  ld 28, 112(1)
  04c4cdc  ld 29, 120(1)
  04c4ce0  ld 30, 128(1)
  04c4ce4  ld 31, 136(1)
  04c4ce8  addi 1, 1, 144
  04c4cec  blr
