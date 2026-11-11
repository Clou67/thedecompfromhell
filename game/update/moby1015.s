# game/update/moby1015.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1282_00187a54:   # 0x187a54, 0x14 bytes
  0187a54  lis 3, 116
  0187a58  lis 4, 1
  0187a5c  addic 3, 3, -17808
  0187a60  stw 4, 72(3)
  0187a64  blr

M1282_00187a68:   # 0x187a68, 0xf8 bytes
  0187a68  stdu 1, -208(1)
  0187a6c  mflr 0
  0187a70  std 0, 224(1)
  0187a74  std 31, 200(1)
  0187a78  ori 31, 3, 0
  0187a7c  li 4, 208
  0187a80  addic 3, 1, 128
  0187a84  std 30, 192(1)
  0187a88  addc 7, 1, 4
  0187a8c  addic 30, 4, 64
  0187a90  addic 4, 31, 192
  0187a94  std 5, 64(7)
  0187a98  std 6, 72(7)
  0187a9c  bl 0x5010c0
  0187aa0  nop
  0187aa4  addc 4, 1, 30
  0187aa8  addic 3, 1, 112
  0187aac  clrldi 4, 4, 32
  0187ab0  addic 5, 31, 16
  0187ab4  bl 0x502a64
  0187ab8  nop
  0187abc  lfs 1, 116(1)
  0187ac0  lfs 2, 144(1)
  0187ac4  lfs 4, 112(1)
  0187ac8  fmuls 2, 2, 1
  0187acc  lfs 5, 128(1)
  0187ad0  lis 3, 116
  0187ad4  lfs 6, 120(1)
  0187ad8  lfs 7, 160(1)
  0187adc  lfs 3, 124(1)
  0187ae0  lfs 8, 176(1)
  0187ae4  fmadds 2, 5, 4, 2
  0187ae8  lfs 5, 148(1)
  0187aec  lfs 9, 132(1)
  0187af0  fmuls 1, 5, 1
  0187af4  lfs 5, -17696(3)
  0187af8  fmadds 2, 7, 6, 2
  0187afc  lfs 7, 164(1)
  0187b00  fmadds 4, 9, 4, 1
  0187b04  lfs 1, 180(1)
  0187b08  fmadds 8, 8, 3, 2
  0187b0c  fmadds 2, 7, 6, 4
  0187b10  fabs 4, 8
  0187b14  fcmpu 0, 4, 5
  0187b18  cror 6, 1, 2
  0187b1c  bt 6, 0x187b44
  0187b20  fmadds 1, 1, 3, 2
  0187b24  lis 3, 116
  0187b28  lfs 2, -17700(3)
  0187b2c  fabs 1, 1
  0187b30  fcmpu 0, 1, 2
  0187b34  cror 6, 1, 2
  0187b38  bt 6, 0x187b44
  0187b3c  li 3, 1
  0187b40  b 0x187b48
  0187b44  li 3, 0
  0187b48  ld 0, 224(1)
  0187b4c  mtlr 0
  0187b50  ld 30, 192(1)
  0187b54  ld 31, 200(1)
  0187b58  addi 1, 1, 208
  0187b5c  blr

UpdateMoby_1015:   # 0x187b68, 0x27c bytes
  0187b68  stdu 1, -128(1)
  0187b6c  mflr 0
  0187b70  std 0, 144(1)
  0187b74  std 31, 120(1)
  0187b78  ori 31, 3, 0
  0187b7c  lwz 3, 120(31)
  0187b80  cmpwi 3, 0
  0187b84  bf 2, 0x187bb8
  0187b88  lis 3, 101
  0187b8c  lhz 4, 166(31)
  0187b90  lhz 5, 178(31)
  0187b94  addic 3, 3, 16828
  0187b98  extsh 4, 4
  0187b9c  extsh 5, 5
  0187ba0  bl 0x5cd098
  0187ba4  nop
  0187ba8  ori 3, 31, 0
  0187bac  bl 0xefb38
  0187bb0  nop
  0187bb4  b 0x187dd0
  0187bb8  lbz 4, 32(31)
  0187bbc  cmpwi 4, 4
  0187bc0  cmpwi 1, 4, 0
  0187bc4  cmpwi 6, 4, 1
  0187bc8  cmpwi 7, 4, 2
  0187bcc  bt 2, 0x187dd0
  0187bd0  cmpwi 4, 3
  0187bd4  bt 2, 0x187d68
  0187bd8  bt 30, 0x187dd0
  0187bdc  bt 26, 0x187c10
  0187be0  bf 6, 0x187dd0
  0187be4  lfs 1, 16(31)
  0187be8  li 4, 2
  0187bec  stfs 1, 0(3)
  0187bf0  lfs 1, 20(31)
  0187bf4  stfs 1, 4(3)
  0187bf8  lfs 1, 24(31)
  0187bfc  stfs 1, 8(3)
  0187c00  lfs 1, 28(31)
  0187c04  stfs 1, 12(3)
  0187c08  stb 4, 32(31)
  0187c0c  b 0x187dd0
  0187c10  lis 4, 24
  0187c14  lis 5, 114
  0187c18  addi 4, 4, 31584
  0187c1c  lfs 1, 0(4)
  0187c20  lfs 2, -3056(5)
  0187c24  lfs 3, 4(4)
  0187c28  fmuls 1, 2, 1
  0187c2c  lfs 2, 24(31)
  0187c30  fdivs 1, 3, 1
  0187c34  fsubs 2, 2, 1
  0187c38  stfs 2, 24(31)
  0187c3c  lfs 1, 8(3)
  0187c40  fcmpu 0, 2, 1
  0187c44  bt 1, 0x187c54
  0187c48  li 4, 2
  0187c4c  stfs 1, 24(31)
  0187c50  stb 4, 32(31)
  0187c54  lwz 3, 16(3)
  0187c58  cmpwi 3, -1
  0187c5c  bt 2, 0x187cdc
  0187c60  extsw 4, 3
  0187c64  addic 3, 1, 112
  0187c68  li 5, 0
  0187c6c  li 6, 0
  0187c70  bl 0x104800
  0187c74  nop
  0187c78  cmpwi 3, 0
  0187c7c  bt 2, 0x187cdc
  0187c80  lwz 4, 112(1)
  0187c84  ori 3, 31, 0
  0187c88  lfs 1, 16(4)
  0187c8c  stfs 1, 64(1)
  0187c90  lfs 1, 24(4)
  0187c94  stfs 1, 72(1)
  0187c98  lfs 1, 20(4)
  0187c9c  lfs 2, 28(4)
  0187ca0  stfs 1, 68(1)
  0187ca4  stfs 2, 76(1)
  0187ca8  ld 5, 64(1)
  0187cac  ld 6, 72(1)
  0187cb0  bl 0x187a68
  0187cb4  cmpwi 3, 0
  0187cb8  bf 2, 0x187d5c
  0187cbc  addic 3, 1, 112
  0187cc0  lwz 4, 112(1)
  0187cc4  li 5, 0
  0187cc8  li 6, 0
  0187ccc  bl 0x10466c
  0187cd0  nop
  0187cd4  cmpwi 3, 0
  0187cd8  bf 2, 0x187c80
  0187cdc  lis 3, 149
  0187ce0  addic 4, 3, 5056
  0187ce4  ori 3, 31, 0
  0187ce8  lfs 1, 320(4)
  0187cec  lfs 2, 328(4)
  0187cf0  stfs 1, 64(1)
  0187cf4  stfs 2, 72(1)
  0187cf8  lfs 1, 324(4)
  0187cfc  lfs 2, 332(4)
  0187d00  stfs 1, 68(1)
  0187d04  stfs 2, 76(1)
  0187d08  ld 5, 64(1)
  0187d0c  ld 6, 72(1)
  0187d10  bl 0x187a68
  0187d14  cmpwi 3, 0
  0187d18  bf 2, 0x187d5c
  0187d1c  lis 3, 151
  0187d20  addic 4, 3, -25376
  0187d24  ori 3, 31, 0
  0187d28  lfs 1, 128(4)
  0187d2c  lfs 2, 136(4)
  0187d30  stfs 1, 64(1)
  0187d34  stfs 2, 72(1)
  0187d38  lfs 1, 132(4)
  0187d3c  lfs 2, 140(4)
  0187d40  stfs 1, 68(1)
  0187d44  stfs 2, 76(1)
  0187d48  ld 5, 64(1)
  0187d4c  ld 6, 72(1)
  0187d50  bl 0x187a68
  0187d54  cmpwi 3, 0
  0187d58  bt 2, 0x187dd0
  0187d5c  li 3, 3
  0187d60  stb 3, 32(31)
  0187d64  b 0x187dd0
  0187d68  lis 4, 24
  0187d6c  lis 5, 114
  0187d70  addi 4, 4, 31584
  0187d74  lfs 1, 0(4)
  0187d78  lfs 2, -3056(5)
  0187d7c  lfs 3, 4(4)
  0187d80  fmuls 1, 2, 1
  0187d84  lfs 2, 24(31)
  0187d88  fdivs 1, 3, 1
  0187d8c  fadds 2, 2, 1
  0187d90  stfs 2, 24(31)
  0187d94  lfs 1, 8(3)
  0187d98  fadds 1, 1, 3
  0187d9c  fcmpu 0, 2, 1
  0187da0  bt 0, 0x187dd0
  0187da4  li 4, 4
  0187da8  stfs 1, 24(31)
  0187dac  stb 4, 32(31)
  0187db0  lwz 31, 20(3)
  0187db4  cmpwi 31, -1
  0187db8  bt 2, 0x187dd0
  0187dbc  lis 3, 151
  0187dc0  extsw 5, 31
  0187dc4  addic 3, 3, -16324
  0187dc8  li 4, 1
  0187dcc  stbx 4, 3, 5
  0187dd0  ld 0, 144(1)
  0187dd4  mtlr 0
  0187dd8  ld 31, 120(1)
  0187ddc  addi 1, 1, 128
  0187de0  blr

M1282_00187de4:   # 0x187de4, 0x14 bytes
  0187de4  lis 3, 116
  0187de8  lis 4, 1
  0187dec  addic 3, 3, -17688
  0187df0  stw 4, 72(3)
  0187df4  blr
