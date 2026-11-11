# game/update/moby1190.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1190_001f1a2c:   # 0x1f1a2c, 0x14 bytes
  01f1a2c  lis 3, 118
  01f1a30  lis 4, 1
  01f1a34  addic 3, 3, 24560
  01f1a38  stw 4, 72(3)
  01f1a3c  blr

M1190_001f1a40:   # 0x1f1a40, 0xf4 bytes
  01f1a40  stdu 1, -160(1)
  01f1a44  mflr 0
  01f1a48  std 0, 176(1)
  01f1a4c  std 31, 152(1)
  01f1a50  lis 4, 161
  01f1a54  ori 31, 3, 0
  01f1a58  lwz 3, 1800(4)
  01f1a5c  std 30, 144(1)
  01f1a60  std 29, 136(1)
  01f1a64  std 28, 128(1)
  01f1a68  std 27, 120(1)
  01f1a6c  cmpwi 3, 2
  01f1a70  bf 2, 0x1f1b10
  01f1a74  lis 3, 151
  01f1a78  lbz 3, -16268(3)
  01f1a7c  cmpwi 3, 0
  01f1a80  bt 2, 0x1f1b10
  01f1a84  lis 28, 150
  01f1a88  li 27, 0
  01f1a8c  addic 28, 28, -12976
  01f1a90  lhz 3, 68(28)
  01f1a94  extsh 4, 3
  01f1a98  cmpwi 4, 0
  01f1a9c  bf 1, 0x1f1b10
  01f1aa0  lis 29, 162
  01f1aa4  ori 30, 28, 0
  01f1aa8  addic 29, 29, -16512
  01f1aac  lwz 4, 376(30)
  01f1ab0  lhz 5, 166(31)
  01f1ab4  extsh 5, 5
  01f1ab8  lhz 6, 166(4)
  01f1abc  extsh 6, 6
  01f1ac0  cmpw 6, 5
  01f1ac4  bf 2, 0x1f1afc
  01f1ac8  lbz 5, 1(29)
  01f1acc  cmpwi 5, 0
  01f1ad0  bf 2, 0x1f1afc
  01f1ad4  ori 3, 4, 0
  01f1ad8  li 4, 0
  01f1adc  ori 5, 29, 0
  01f1ae0  bl 0xf0ea8
  01f1ae4  nop
  01f1ae8  lis 4, 16432
  01f1aec  lhz 3, 68(28)
  01f1af0  stw 4, 32(29)
  01f1af4  stw 4, 36(29)
  01f1af8  stw 4, 40(29)
  01f1afc  extsh 4, 3
  01f1b00  addic 27, 27, 1
  01f1b04  addic 30, 30, 4
  01f1b08  cmpw 27, 4
  01f1b0c  bt 0, 0x1f1aac
  01f1b10  ld 0, 176(1)
  01f1b14  mtlr 0
  01f1b18  ld 27, 120(1)
  01f1b1c  ld 28, 128(1)
  01f1b20  ld 29, 136(1)
  01f1b24  ld 30, 144(1)
  01f1b28  ld 31, 152(1)
  01f1b2c  addi 1, 1, 160
  01f1b30  blr

UpdateMoby_1190:   # 0x1f1b50, 0x408 bytes
  01f1b50  stdu 1, -224(1)
  01f1b54  mflr 0
  01f1b58  std 0, 240(1)
  01f1b5c  stfd 25, 168(1)
  01f1b60  stfd 26, 176(1)
  01f1b64  stfd 27, 184(1)
  01f1b68  stfd 28, 192(1)
  01f1b6c  stfd 29, 200(1)
  01f1b70  stfd 30, 208(1)
  01f1b74  stfd 31, 216(1)
  01f1b78  std 31, 160(1)
  01f1b7c  lbz 4, 49(3)
  01f1b80  std 30, 152(1)
  01f1b84  ori 31, 3, 0
  01f1b88  lwz 30, 120(3)
  01f1b8c  std 29, 144(1)
  01f1b90  std 28, 136(1)
  01f1b94  std 27, 128(1)
  01f1b98  std 26, 120(1)
  01f1b9c  cmpwi 4, 0
  01f1ba0  bt 2, 0x1f1c0c
  01f1ba4  lis 3, 149
  01f1ba8  lfs 1, 20(31)
  01f1bac  lfs 2, 16(31)
  01f1bb0  addic 3, 3, 5056
  01f1bb4  lfs 3, 324(3)
  01f1bb8  lfs 4, 320(3)
  01f1bbc  fsubs 1, 1, 3
  01f1bc0  fsubs 2, 2, 4
  01f1bc4  lfs 3, 24(31)
  01f1bc8  lfs 4, 328(3)
  01f1bcc  fsubs 3, 3, 4
  01f1bd0  lis 3, 31
  01f1bd4  fmuls 1, 1, 1
  01f1bd8  addi 3, 3, 6964
  01f1bdc  fmadds 1, 2, 2, 1
  01f1be0  lfs 2, 0(3)
  01f1be4  fmadds 1, 3, 3, 1
  01f1be8  fsqrts 1, 1
  01f1bec  fcmpu 0, 1, 2
  01f1bf0  cror 6, 1, 2
  01f1bf4  bt 6, 0x1f1c0c
  01f1bf8  ori 3, 31, 0
  01f1bfc  bl 0x106360
  01f1c00  nop
  01f1c04  li 3, 24
  01f1c08  stb 3, 127(31)
  01f1c0c  lis 3, 161
  01f1c10  lwz 3, 1800(3)
  01f1c14  cmpwi 3, 2
  01f1c18  bf 2, 0x1f1cb8
  01f1c1c  lis 3, 151
  01f1c20  lbz 3, -16268(3)
  01f1c24  cmpwi 3, 0
  01f1c28  bt 2, 0x1f1cb8
  01f1c2c  lis 27, 150
  01f1c30  li 26, 0
  01f1c34  addic 27, 27, -12976
  01f1c38  lhz 3, 68(27)
  01f1c3c  extsh 4, 3
  01f1c40  cmpwi 4, 0
  01f1c44  bf 1, 0x1f1cb8
  01f1c48  lis 28, 162
  01f1c4c  ori 29, 27, 0
  01f1c50  addic 28, 28, -16512
  01f1c54  lwz 4, 376(29)
  01f1c58  lhz 5, 166(31)
  01f1c5c  extsh 5, 5
  01f1c60  lhz 6, 166(4)
  01f1c64  extsh 6, 6
  01f1c68  cmpw 6, 5
  01f1c6c  bf 2, 0x1f1ca4
  01f1c70  lbz 5, 1(28)
  01f1c74  cmpwi 5, 0
  01f1c78  bf 2, 0x1f1ca4
  01f1c7c  ori 3, 4, 0
  01f1c80  li 4, 0
  01f1c84  ori 5, 28, 0
  01f1c88  bl 0xf0ea8
  01f1c8c  nop
  01f1c90  lis 4, 16432
  01f1c94  lhz 3, 68(27)
  01f1c98  stw 4, 32(28)
  01f1c9c  stw 4, 36(28)
  01f1ca0  stw 4, 40(28)
  01f1ca4  extsh 4, 3
  01f1ca8  addic 26, 26, 1
  01f1cac  addic 29, 29, 4
  01f1cb0  cmpw 26, 4
  01f1cb4  bt 0, 0x1f1c54
  01f1cb8  lbz 3, 32(31)
  01f1cbc  cmpwi 3, 1
  01f1cc0  cmpwi 1, 3, 3
  01f1cc4  cmpwi 6, 3, 2
  01f1cc8  cmpwi 7, 3, 0
  01f1ccc  bt 1, 0x1f1ce0
  01f1cd0  cmpwi 3, -1
  01f1cd4  bf 1, 0x1f1f14
  01f1cd8  bf 29, 0x1f1cec
  01f1cdc  b 0x1f1d58
  01f1ce0  bf 25, 0x1f1db8
  01f1ce4  bf 5, 0x1f1efc
  01f1ce8  b 0x1f1f14
  01f1cec  lis 3, 151
  01f1cf0  lbz 5, 176(31)
  01f1cf4  lis 4, 161
  01f1cf8  addic 4, 4, -13692
  01f1cfc  lwz 3, -25488(3)
  01f1d00  addc 4, 5, 4
  01f1d04  slwi 3, 3, 4
  01f1d08  clrldi 4, 4, 32
  01f1d0c  extsw 3, 3
  01f1d10  lbzx 3, 4, 3
  01f1d14  cmpwi 3, 255
  01f1d18  bf 2, 0x1f1d3c
  01f1d1c  li 3, 0
  01f1d20  lhz 5, 52(31)
  01f1d24  li 4, 3
  01f1d28  ori 5, 5, 65
  01f1d2c  stw 3, 148(31)
  01f1d30  stb 4, 32(31)
  01f1d34  sth 5, 52(31)
  01f1d38  b 0x1f1f14
  01f1d3c  li 5, 1
  01f1d40  ori 3, 31, 0
  01f1d44  ori 4, 30, 0
  01f1d48  stb 5, 32(31)
  01f1d4c  bl 0x4d3720
  01f1d50  nop
  01f1d54  b 0x1f1f14
  01f1d58  lwz 4, 320(30)
  01f1d5c  lis 3, 151
  01f1d60  extsw 4, 4
  01f1d64  addic 3, 3, -25248
  01f1d68  bl 0x110b70
  01f1d6c  nop
  01f1d70  lis 4, 31
  01f1d74  cmpwi 3, 0
  01f1d78  addi 4, 4, 6964
  01f1d7c  lfs 1, 4(4)
  01f1d80  bt 2, 0x1f1d90
  01f1d84  lis 3, 31
  01f1d88  addi 3, 3, 6964
  01f1d8c  lfs 1, 8(3)
  01f1d90  ori 3, 31, 0
  01f1d94  ori 4, 30, 0
  01f1d98  stfs 1, 12(30)
  01f1d9c  bl 0x4d3870
  01f1da0  nop
  01f1da4  cmpwi 3, 0
  01f1da8  bt 2, 0x1f1f14
  01f1dac  li 3, 2
  01f1db0  stb 3, 32(31)
  01f1db4  b 0x1f1f14
  01f1db8  lhz 3, 4(30)
  01f1dbc  cmpwi 3, 2
  01f1dc0  bf 2, 0x1f1ed8
  01f1dc4  li 3, 6
  01f1dc8  bl 0x112c20
  01f1dcc  nop
  01f1dd0  lbz 3, 176(31)
  01f1dd4  bl 0xf1e50
  01f1dd8  nop
  01f1ddc  lfs 6, 196(31)
  01f1de0  lfs 7, 192(31)
  01f1de4  fmuls 1, 6, 6
  01f1de8  lfs 28, 200(31)
  01f1dec  lis 3, 31
  01f1df0  addi 3, 3, 6964
  01f1df4  fmadds 1, 7, 7, 1
  01f1df8  lfs 5, 12(3)
  01f1dfc  lfs 4, 16(31)
  01f1e00  lfs 3, 20(31)
  01f1e04  lfs 2, 24(31)
  01f1e08  lfs 29, 64(31)
  01f1e0c  lfs 30, 68(31)
  01f1e10  fmadds 8, 28, 28, 1
  01f1e14  lfs 1, 72(31)
  01f1e18  lfs 31, 76(31)
  01f1e1c  fsqrts 8, 8
  01f1e20  fcmpu 0, 8, 5
  01f1e24  bf 2, 0x1f1e38
  01f1e28  fmr 7, 5
  01f1e2c  lfs 28, 204(31)
  01f1e30  fmr 6, 7
  01f1e34  b 0x1f1e58
  01f1e38  lis 3, 31
  01f1e3c  addi 3, 3, 6964
  01f1e40  lfs 5, 16(3)
  01f1e44  fdivs 8, 5, 8
  01f1e48  fmuls 5, 28, 8
  01f1e4c  lfs 28, 204(31)
  01f1e50  fmuls 7, 7, 8
  01f1e54  fmuls 6, 6, 8
  01f1e58  lis 3, 31
  01f1e5c  fadds 27, 7, 4
  01f1e60  addi 3, 3, 6964
  01f1e64  fadds 26, 6, 3
  01f1e68  fadds 25, 5, 2
  01f1e6c  lfs 2, 20(3)
  01f1e70  bl 0x502578
  01f1e74  nop
  01f1e78  lis 3, 150
  01f1e7c  li 6, 1
  01f1e80  addic 5, 3, -12976
  01f1e84  li 3, 0
  01f1e88  li 4, -1
  01f1e8c  stfs 27, 16(5)
  01f1e90  stfs 26, 20(5)
  01f1e94  stfs 25, 24(5)
  01f1e98  stfs 28, 28(5)
  01f1e9c  stfs 29, 32(5)
  01f1ea0  stfs 30, 36(5)
  01f1ea4  stfs 1, 40(5)
  01f1ea8  stfs 31, 44(5)
  01f1eac  stb 6, 74(5)
  01f1eb0  bl 0xe8aa4
  01f1eb4  nop
  01f1eb8  lhz 3, 52(31)
  01f1ebc  li 4, 0
  01f1ec0  ori 3, 3, 65
  01f1ec4  li 5, 3
  01f1ec8  stw 4, 148(31)
  01f1ecc  sth 3, 52(31)
  01f1ed0  stb 5, 32(31)
  01f1ed4  b 0x1f1f14
  01f1ed8  lis 3, 161
  01f1edc  lwz 3, 1800(3)
  01f1ee0  cmpwi 3, 2
  01f1ee4  bt 2, 0x1f1f14
  01f1ee8  ori 3, 31, 0
  01f1eec  ori 4, 30, 0
  01f1ef0  bl 0x4d3870
  01f1ef4  nop
  01f1ef8  b 0x1f1f14
  01f1efc  li 3, 0
  01f1f00  lhz 4, 52(31)
  01f1f04  stw 3, 148(31)
  01f1f08  ori 3, 4, 65
  01f1f0c  sth 3, 52(31)
  01f1f10  b 0x1f1f14
  01f1f14  ld 0, 240(1)
  01f1f18  mtlr 0
  01f1f1c  lfd 25, 168(1)
  01f1f20  lfd 26, 176(1)
  01f1f24  lfd 27, 184(1)
  01f1f28  lfd 28, 192(1)
  01f1f2c  lfd 29, 200(1)
  01f1f30  lfd 30, 208(1)
  01f1f34  lfd 31, 216(1)
  01f1f38  ld 26, 120(1)
  01f1f3c  ld 27, 128(1)
  01f1f40  ld 28, 136(1)
  01f1f44  ld 29, 144(1)
  01f1f48  ld 30, 152(1)
  01f1f4c  ld 31, 160(1)
  01f1f50  addi 1, 1, 224
  01f1f54  blr
