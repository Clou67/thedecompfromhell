# game/update/moby1911.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1911_002d8a70:   # 0x2d8a70, 0x228 bytes
  02d8a70  stdu 1, -64(1)
  02d8a74  stfd 30, 48(1)
  02d8a78  stfd 31, 56(1)
  02d8a7c  cmpwi 3, 0
  02d8a80  li 8, 0
  02d8a84  bf 1, 0x2d8c88
  02d8a88  ori 9, 4, 0
  02d8a8c  lis 4, 46
  02d8a90  lis 6, 149
  02d8a94  addi 10, 4, -30120
  02d8a98  ori 4, 7, 0
  02d8a9c  addic 7, 6, 5056
  02d8aa0  ori 6, 5, 0
  02d8aa4  ori 5, 9, 0
  02d8aa8  lfs 5, 0(10)
  02d8aac  lfs 4, 4(10)
  02d8ab0  lfs 3, 8(10)
  02d8ab4  lfs 2, 12(10)
  02d8ab8  lfs 1, 16(10)
  02d8abc  lfs 10, 4(6)
  02d8ac0  lfs 6, 324(7)
  02d8ac4  lfs 11, 0(6)
  02d8ac8  fsubs 10, 10, 6
  02d8acc  lfs 6, 320(7)
  02d8ad0  lfs 9, 8(6)
  02d8ad4  fsubs 11, 11, 6
  02d8ad8  lfs 6, 328(7)
  02d8adc  fsubs 9, 9, 6
  02d8ae0  fmr 8, 5
  02d8ae4  fmuls 6, 10, 10
  02d8ae8  fmr 7, 8
  02d8aec  fmadds 12, 11, 11, 6
  02d8af0  fmr 6, 7
  02d8af4  fmadds 12, 9, 9, 12
  02d8af8  fsqrts 13, 12
  02d8afc  fcmpu 0, 13, 6
  02d8b00  bt 2, 0x2d8b44
  02d8b04  frsqrte 6, 12
  02d8b08  fmuls 7, 12, 6
  02d8b0c  fmuls 8, 6, 4
  02d8b10  fnmsubs 7, 7, 6, 3
  02d8b14  fmadds 6, 7, 8, 6
  02d8b18  fmuls 7, 12, 6
  02d8b1c  fmuls 8, 6, 4
  02d8b20  fnmsubs 7, 7, 6, 3
  02d8b24  fmadds 6, 7, 8, 6
  02d8b28  fmuls 7, 12, 6
  02d8b2c  fmuls 8, 6, 4
  02d8b30  fnmsubs 7, 7, 6, 3
  02d8b34  fmadds 6, 7, 8, 6
  02d8b38  fmuls 8, 11, 6
  02d8b3c  fmuls 7, 10, 6
  02d8b40  fmuls 6, 9, 6
  02d8b44  lfs 0, 4(5)
  02d8b48  lfs 31, 0(5)
  02d8b4c  fmuls 9, 0, 0
  02d8b50  lfs 13, 8(5)
  02d8b54  fmr 11, 5
  02d8b58  fmadds 12, 31, 31, 9
  02d8b5c  fmr 10, 11
  02d8b60  fmadds 12, 13, 13, 12
  02d8b64  fmr 9, 10
  02d8b68  fsqrts 30, 12
  02d8b6c  fcmpu 0, 30, 9
  02d8b70  bt 2, 0x2d8bb4
  02d8b74  frsqrte 9, 12
  02d8b78  fmuls 10, 12, 9
  02d8b7c  fmuls 11, 9, 4
  02d8b80  fnmsubs 10, 10, 9, 3
  02d8b84  fmadds 9, 10, 11, 9
  02d8b88  fmuls 10, 12, 9
  02d8b8c  fmuls 11, 9, 4
  02d8b90  fnmsubs 10, 10, 9, 3
  02d8b94  fmadds 9, 10, 11, 9
  02d8b98  fmuls 10, 12, 9
  02d8b9c  fmuls 11, 9, 4
  02d8ba0  fnmsubs 10, 10, 9, 3
  02d8ba4  fmadds 9, 10, 11, 9
  02d8ba8  fmuls 11, 9, 31
  02d8bac  fmuls 10, 9, 0
  02d8bb0  fmuls 9, 9, 13
  02d8bb4  fmr 12, 6
  02d8bb8  fmuls 6, 7, 10
  02d8bbc  fmadds 6, 8, 11, 6
  02d8bc0  fmadds 6, 12, 9, 6
  02d8bc4  fmuls 13, 6, 2
  02d8bc8  fnmsubs 6, 13, 10, 7
  02d8bcc  fnmsubs 7, 13, 11, 8
  02d8bd0  fnmsubs 8, 13, 9, 12
  02d8bd4  fmr 12, 5
  02d8bd8  fmuls 9, 6, 6
  02d8bdc  fmr 11, 12
  02d8be0  fmadds 9, 7, 7, 9
  02d8be4  fmr 10, 11
  02d8be8  fmadds 9, 8, 8, 9
  02d8bec  fsqrts 13, 9
  02d8bf0  fcmpu 0, 13, 10
  02d8bf4  bt 2, 0x2d8c38
  02d8bf8  frsqrte 10, 9
  02d8bfc  fmuls 11, 9, 10
  02d8c00  fmuls 12, 10, 4
  02d8c04  fnmsubs 11, 11, 10, 3
  02d8c08  fmadds 10, 11, 12, 10
  02d8c0c  fmuls 11, 9, 10
  02d8c10  fmuls 12, 10, 4
  02d8c14  fnmsubs 11, 11, 10, 3
  02d8c18  fmadds 10, 11, 12, 10
  02d8c1c  fmuls 9, 9, 10
  02d8c20  fmuls 11, 10, 4
  02d8c24  fnmsubs 9, 9, 10, 3
  02d8c28  fmadds 10, 9, 11, 10
  02d8c2c  fmuls 12, 10, 7
  02d8c30  fmuls 11, 10, 6
  02d8c34  fmuls 10, 10, 8
  02d8c38  fmuls 6, 11, 11
  02d8c3c  fadds 7, 10, 3
  02d8c40  addic 8, 8, 1
  02d8c44  addic 6, 6, 12
  02d8c48  cmpw 8, 3
  02d8c4c  fmadds 6, 12, 12, 6
  02d8c50  addic 5, 5, 12
  02d8c54  fmadds 6, 7, 7, 6
  02d8c58  fsqrts 6, 6
  02d8c5c  fmuls 6, 6, 2
  02d8c60  fdivs 7, 12, 6
  02d8c64  fdivs 6, 11, 6
  02d8c68  fadds 7, 7, 4
  02d8c6c  fmuls 7, 7, 1
  02d8c70  fadds 6, 6, 4
  02d8c74  stfs 7, 0(4)
  02d8c78  fmuls 6, 6, 1
  02d8c7c  stfs 6, 4(4)
  02d8c80  addic 4, 4, 8
  02d8c84  bt 0, 0x2d8abc
  02d8c88  lfd 30, 48(1)
  02d8c8c  lfd 31, 56(1)
  02d8c90  addi 1, 1, 64
  02d8c94  blr

M1911_002d8c98:   # 0x2d8c98, 0x150 bytes
  02d8c98  stdu 1, -144(1)
  02d8c9c  mflr 0
  02d8ca0  std 0, 160(1)
  02d8ca4  std 31, 136(1)
  02d8ca8  std 30, 128(1)
  02d8cac  std 29, 120(1)
  02d8cb0  std 28, 112(1)
  02d8cb4  li 3, 48
  02d8cb8  bl 0x685c4
  02d8cbc  nop
  02d8cc0  ori 4, 3, 0
  02d8cc4  li 3, 24
  02d8cc8  bl 0x174f80
  02d8ccc  nop
  02d8cd0  li 3, 0
  02d8cd4  li 4, 1
  02d8cd8  li 5, 2
  02d8cdc  li 6, 1
  02d8ce0  li 7, 32
  02d8ce4  bl 0x502ea8
  02d8ce8  nop
  02d8cec  ori 4, 3, 0
  02d8cf0  li 3, 3
  02d8cf4  bl 0x174f80
  02d8cf8  nop
  02d8cfc  li 3, 0
  02d8d00  li 4, 0
  02d8d04  li 5, 0
  02d8d08  li 6, 0
  02d8d0c  li 7, 0
  02d8d10  li 8, 0
  02d8d14  bl 0x502f08
  02d8d18  nop
  02d8d1c  ori 4, 3, 0
  02d8d20  li 3, 6
  02d8d24  bl 0x174f80
  02d8d28  nop
  02d8d2c  li 3, 0
  02d8d30  lis 9, 0
  02d8d34  li 4, 0
  02d8d38  li 5, 1
  02d8d3c  li 6, 1
  02d8d40  li 7, 1
  02d8d44  li 8, 0
  02d8d48  ori 9, 9, 65424
  02d8d4c  bl 0x502fd4
  02d8d50  nop
  02d8d54  ori 4, 3, 0
  02d8d58  li 3, 26
  02d8d5c  bl 0x174f80
  02d8d60  nop
  02d8d64  bl 0x71170
  02d8d68  nop
  02d8d6c  lis 31, 126
  02d8d70  lis 3, 126
  02d8d74  lis 5, 126
  02d8d78  lis 4, 267
  02d8d7c  lis 30, 126
  02d8d80  lwz 6, -24208(31)
  02d8d84  addic 28, 4, 32288
  02d8d88  lis 29, 126
  02d8d8c  lwz 4, -22504(3)
  02d8d90  lwz 8, -22508(5)
  02d8d94  extsw 3, 6
  02d8d98  ori 7, 28, 0
  02d8d9c  lwz 5, -22512(30)
  02d8da0  ori 6, 8, 0
  02d8da4  bl 0x2d8a70
  02d8da8  lwz 3, -24208(31)
  02d8dac  lwz 4, -22512(30)
  02d8db0  ori 6, 28, 0
  02d8db4  lwz 5, -22500(29)
  02d8db8  extsw 3, 3
  02d8dbc  li 7, 9
  02d8dc0  bl 0x74604
  02d8dc4  nop
  02d8dc8  ld 0, 160(1)
  02d8dcc  mtlr 0
  02d8dd0  ld 28, 112(1)
  02d8dd4  ld 29, 120(1)
  02d8dd8  ld 30, 128(1)
  02d8ddc  ld 31, 136(1)
  02d8de0  addi 1, 1, 144
  02d8de4  blr

UpdateMoby_1911:   # 0x2d8de8, 0x60 bytes
  02d8de8  stdu 1, -112(1)
  02d8dec  mflr 0
  02d8df0  std 0, 128(1)
  02d8df4  lbz 4, 32(3)
  02d8df8  cmpwi 4, 0
  02d8dfc  cmpwi 1, 4, 1
  02d8e00  cmpwi 6, 4, -1
  02d8e04  bt 1, 0x2d8e10
  02d8e08  bf 25, 0x2d8e38
  02d8e0c  b 0x2d8e18
  02d8e10  bf 5, 0x2d8e24
  02d8e14  b 0x2d8e38
  02d8e18  li 4, 1
  02d8e1c  stb 4, 32(3)
  02d8e20  b 0x2d8e38
  02d8e24  lis 5, 113
  02d8e28  ori 4, 3, 0
  02d8e2c  addic 3, 5, -19376
  02d8e30  bl 0x6d720
  02d8e34  nop
  02d8e38  ld 0, 128(1)
  02d8e3c  mtlr 0
  02d8e40  addi 1, 1, 112
  02d8e44  blr
