# game/update/moby1168.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1168_001e99b4:   # 0x1e99b4, 0x60 bytes
  01e99b4  lis 4, 165
  01e99b8  sldi 3, 3, 2
  01e99bc  addic 4, 4, -28284
  01e99c0  extsw 3, 3
  01e99c4  lwzx 3, 4, 3
  01e99c8  cmpwi 3, 0
  01e99cc  bt 2, 0x1e9a10
  01e99d0  lis 5, 164
  01e99d4  li 4, 2
  01e99d8  lhz 6, 0(3)
  01e99dc  lwz 7, -28512(5)
  01e99e0  rlwinm 6, 6, 8, 9, 23
  01e99e4  addc 6, 7, 6
  01e99e8  clrldi 6, 6, 32
  01e99ec  lbz 7, 32(6)
  01e99f0  cmpwi 7, 1
  01e99f4  bf 2, 0x1e99fc
  01e99f8  stb 4, 32(6)
  01e99fc  lhz 6, 0(3)
  01e9a00  addic 3, 3, 2
  01e9a04  extsh 6, 6
  01e9a08  cmpwi 6, 0
  01e9a0c  bf 0, 0x1e99d8
  01e9a10  blr

M1168_001e9a20:   # 0x1e9a20, 0x190 bytes
  01e9a20  stdu 1, -144(1)
  01e9a24  mflr 0
  01e9a28  std 0, 160(1)
  01e9a2c  stfd 31, 136(1)
  01e9a30  std 31, 128(1)
  01e9a34  ori 31, 3, 0
  01e9a38  lis 3, 118
  01e9a3c  lis 4, 31
  01e9a40  li 7, 0
  01e9a44  addi 6, 4, -26088
  01e9a48  lwz 5, 36(31)
  01e9a4c  lis 4, 51
  01e9a50  std 30, 120(1)
  01e9a54  lfs 1, 23344(3)
  01e9a58  lwz 30, 120(31)
  01e9a5c  ori 3, 31, 0
  01e9a60  lfs 2, 36(5)
  01e9a64  li 5, 0
  01e9a68  fmuls 1, 2, 1
  01e9a6c  stfs 1, 44(31)
  01e9a70  lfs 31, 0(6)
  01e9a74  stw 7, 116(1)
  01e9a78  bl 0x10675c
  01e9a7c  nop
  01e9a80  ori 4, 3, 0
  01e9a84  li 6, 0
  01e9a88  addic 5, 30, 32
  01e9a8c  li 9, 0
  01e9a90  addic 7, 1, 112
  01e9a94  li 10, 4
  01e9a98  addic 8, 1, 116
  01e9a9c  ori 3, 31, 0
  01e9aa0  bl 0x106840
  01e9aa4  nop
  01e9aa8  lwz 4, 112(1)
  01e9aac  cmpwi 4, 1
  01e9ab0  bt 2, 0x1e9b7c
  01e9ab4  lbz 4, 32(31)
  01e9ab8  cmpwi 4, 4
  01e9abc  bt 2, 0x1e9b7c
  01e9ac0  lfs 1, 32(30)
  01e9ac4  lfs 2, 116(1)
  01e9ac8  lhz 4, 52(31)
  01e9acc  fsubs 1, 1, 2
  01e9ad0  fcmpu 0, 1, 31
  01e9ad4  stfs 1, 32(30)
  01e9ad8  lbz 5, 32(31)
  01e9adc  cmpwi 6, 5, 1
  01e9ae0  bt 1, 0x1e9ae8
  01e9ae4  li 3, 1
  01e9ae8  cmpwi 1, 3, 2
  01e9aec  bf 26, 0x1e9af8
  01e9af0  li 5, 2
  01e9af4  stb 5, 32(31)
  01e9af8  cmpwi 6, 3, -1
  01e9afc  cmpwi 7, 3, 10
  01e9b00  bt 5, 0x1e9b14
  01e9b04  cmpwi 1, 3, 0
  01e9b08  bf 25, 0x1e9b6c
  01e9b0c  bf 5, 0x1e9b6c
  01e9b10  b 0x1e9b38
  01e9b14  cmpwi 1, 3, 8
  01e9b18  bt 29, 0x1e9b6c
  01e9b1c  bf 5, 0x1e9b2c
  01e9b20  li 3, 100
  01e9b24  stb 3, 103(30)
  01e9b28  b 0x1e9b6c
  01e9b2c  li 3, 200
  01e9b30  stb 3, 103(30)
  01e9b34  b 0x1e9b6c
  01e9b38  li 3, 0
  01e9b3c  ori 7, 4, 0
  01e9b40  li 5, 4
  01e9b44  rlwimi 7, 3, 0, 19, 19
  01e9b48  li 6, 240
  01e9b4c  ori 3, 31, 0
  01e9b50  stb 5, 32(31)
  01e9b54  sth 7, 52(31)
  01e9b58  li 4, 0
  01e9b5c  li 5, -1
  01e9b60  stb 6, 103(30)
  01e9b64  bl 0xfd8d0
  01e9b68  nop
  01e9b6c  addic 4, 30, 96
  01e9b70  ori 3, 31, 0
  01e9b74  bl 0x10c808
  01e9b78  nop
  01e9b7c  li 5, 255
  01e9b80  addic 4, 30, 96
  01e9b84  ori 3, 31, 0
  01e9b88  stb 5, 164(31)
  01e9b8c  bl 0x10c9a0
  01e9b90  nop
  01e9b94  ld 0, 160(1)
  01e9b98  mtlr 0
  01e9b9c  lfd 31, 136(1)
  01e9ba0  ld 30, 120(1)
  01e9ba4  ld 31, 128(1)
  01e9ba8  addi 1, 1, 144
  01e9bac  blr

UpdateMoby_1168:   # 0x1e9be8, 0x780 bytes
  01e9be8  stdu 1, -336(1)
  01e9bec  mflr 0
  01e9bf0  std 0, 352(1)
  01e9bf4  stfd 20, 240(1)
  01e9bf8  stfd 21, 248(1)
  01e9bfc  stfd 22, 256(1)
  01e9c00  stfd 23, 264(1)
  01e9c04  stfd 24, 272(1)
  01e9c08  stfd 25, 280(1)
  01e9c0c  stfd 26, 288(1)
  01e9c10  stfd 27, 296(1)
  01e9c14  stfd 28, 304(1)
  01e9c18  stfd 29, 312(1)
  01e9c1c  stfd 30, 320(1)
  01e9c20  stfd 31, 328(1)
  01e9c24  std 31, 232(1)
  01e9c28  std 30, 224(1)
  01e9c2c  ori 31, 3, 0
  01e9c30  std 29, 216(1)
  01e9c34  std 28, 208(1)
  01e9c38  lwz 30, 120(31)
  01e9c3c  bl 0x1e9a20
  01e9c40  lbz 3, 32(31)
  01e9c44  cmpwi 3, 4
  01e9c48  bt 2, 0x1ea2a8
  01e9c4c  cmpwi 3, 3
  01e9c50  bt 2, 0x1ea318
  01e9c54  cmpwi 3, 2
  01e9c58  bt 2, 0x1ea284
  01e9c5c  cmpwi 3, 1
  01e9c60  bt 2, 0x1e9d74
  01e9c64  cmpwi 3, 0
  01e9c68  bf 2, 0x1ea318
  01e9c6c  lwz 3, 112(30)
  01e9c70  cmpwi 3, -1
  01e9c74  bf 2, 0x1e9ca0
  01e9c78  lis 3, 101
  01e9c7c  lhz 4, 178(31)
  01e9c80  addic 3, 3, 18832
  01e9c84  extsh 4, 4
  01e9c88  bl 0x5cd098
  01e9c8c  nop
  01e9c90  ori 3, 31, 0
  01e9c94  bl 0xefb38
  01e9c98  nop
  01e9c9c  b 0x1ea318
  01e9ca0  lis 4, 165
  01e9ca4  slwi 3, 3, 2
  01e9ca8  addic 4, 4, 7136
  01e9cac  extsw 3, 3
  01e9cb0  lwzx 3, 4, 3
  01e9cb4  lwz 4, 0(3)
  01e9cb8  cmpwi 4, 0
  01e9cbc  bf 2, 0x1e9ce8
  01e9cc0  lis 3, 101
  01e9cc4  lhz 4, 178(31)
  01e9cc8  addic 3, 3, 18864
  01e9ccc  extsh 4, 4
  01e9cd0  bl 0x5cd098
  01e9cd4  nop
  01e9cd8  ori 3, 31, 0
  01e9cdc  bl 0xefb38
  01e9ce0  nop
  01e9ce4  b 0x1ea318
  01e9ce8  lfs 1, 16(3)
  01e9cec  li 4, 4
  01e9cf0  stfs 1, 16(31)
  01e9cf4  lfs 2, 20(3)
  01e9cf8  li 29, 1
  01e9cfc  li 5, 2
  01e9d00  stfs 2, 20(31)
  01e9d04  lfs 2, 24(3)
  01e9d08  stfs 2, 24(31)
  01e9d0c  lfs 2, 28(3)
  01e9d10  lis 3, 16512
  01e9d14  stfs 2, 28(31)
  01e9d18  stfs 1, 128(30)
  01e9d1c  sth 4, 36(30)
  01e9d20  stw 29, 164(30)
  01e9d24  stw 29, 124(30)
  01e9d28  lfs 1, 20(31)
  01e9d2c  stfs 1, 132(30)
  01e9d30  lfs 1, 24(31)
  01e9d34  stfs 1, 136(30)
  01e9d38  lfs 1, 28(31)
  01e9d3c  stw 3, 32(30)
  01e9d40  stfs 1, 140(30)
  01e9d44  stb 5, 40(30)
  01e9d48  bl 0xfcc68
  01e9d4c  nop
  01e9d50  stfs 1, 144(30)
  01e9d54  bl 0xfcc68
  01e9d58  nop
  01e9d5c  stfs 1, 148(30)
  01e9d60  bl 0xfcc68
  01e9d64  nop
  01e9d68  stfs 1, 152(30)
  01e9d6c  stb 29, 32(31)
  01e9d70  b 0x1ea318
  01e9d74  lis 3, 165
  01e9d78  lis 4, 31
  01e9d7c  addic 28, 3, 7136
  01e9d80  lwz 3, 112(30)
  01e9d84  addi 4, 4, -25680
  01e9d88  slwi 3, 3, 2
  01e9d8c  li 29, 0
  01e9d90  extsw 3, 3
  01e9d94  lfs 30, 0(4)
  01e9d98  stw 29, 192(1)
  01e9d9c  lwzx 28, 28, 3
  01e9da0  li 6, 0
  01e9da4  lwz 3, 0(28)
  01e9da8  lfs 1, 20(28)
  01e9dac  slwi 5, 3, 4
  01e9db0  lfs 2, 16(28)
  01e9db4  lfs 3, 24(28)
  01e9db8  addc 5, 28, 5
  01e9dbc  clrldi 5, 5, 32
  01e9dc0  addic 3, 3, -1
  01e9dc4  lfs 4, 4(5)
  01e9dc8  lfs 5, 0(5)
  01e9dcc  fsubs 1, 1, 4
  01e9dd0  fsubs 2, 2, 5
  01e9dd4  lfs 4, 8(5)
  01e9dd8  fsubs 3, 3, 4
  01e9ddc  lwz 5, 164(30)
  01e9de0  subc 3, 3, 6
  01e9de4  lfs 31, 4(4)
  01e9de8  fmuls 1, 1, 1
  01e9dec  extsw 4, 5
  01e9df0  li 5, 0
  01e9df4  subc 4, 5, 4
  01e9df8  sradi 4, 4, 63
  01e9dfc  fmadds 1, 2, 2, 1
  01e9e00  and 3, 4, 3
  01e9e04  addc 3, 6, 3
  01e9e08  fmadds 1, 3, 3, 1
  01e9e0c  fsqrts 1, 1
  01e9e10  fcmpu 0, 1, 31
  01e9e14  cror 6, 1, 2
  01e9e18  bt 6, 0x1e9e20
  01e9e1c  li 29, 1
  01e9e20  ori 4, 3, 0
  01e9e24  lwz 3, 124(30)
  01e9e28  sldi 4, 4, 4
  01e9e2c  slwi 5, 3, 4
  01e9e30  lfs 3, 132(30)
  01e9e34  addc 4, 28, 4
  01e9e38  lfs 4, 128(30)
  01e9e3c  addc 5, 28, 5
  01e9e40  clrldi 4, 4, 32
  01e9e44  clrldi 5, 5, 32
  01e9e48  cmpwi 29, 0
  01e9e4c  lfs 1, 20(5)
  01e9e50  lfs 5, 16(5)
  01e9e54  lfs 2, 136(30)
  01e9e58  fsubs 1, 1, 3
  01e9e5c  lfs 6, 24(5)
  01e9e60  fsubs 5, 5, 4
  01e9e64  lfs 7, 20(4)
  01e9e68  lfs 8, 16(4)
  01e9e6c  fsubs 7, 7, 3
  01e9e70  lfs 9, 24(4)
  01e9e74  fsubs 8, 8, 4
  01e9e78  fsubs 6, 6, 2
  01e9e7c  fsubs 9, 9, 2
  01e9e80  fmuls 1, 1, 1
  01e9e84  fmuls 7, 7, 7
  01e9e88  fmadds 1, 5, 5, 1
  01e9e8c  fmadds 5, 8, 8, 7
  01e9e90  fmadds 29, 6, 6, 1
  01e9e94  fmadds 1, 9, 9, 5
  01e9e98  fsqrts 29, 29
  01e9e9c  fsqrts 1, 1
  01e9ea0  bt 2, 0x1e9eb0
  01e9ea4  lfs 1, 116(30)
  01e9ea8  stfs 1, 160(30)
  01e9eac  b 0x1e9ef0
  01e9eb0  lis 4, 118
  01e9eb4  lis 6, 114
  01e9eb8  addic 3, 1, 192
  01e9ebc  addic 5, 30, 160
  01e9ec0  lfs 2, 23348(4)
  01e9ec4  lfs 3, -3048(6)
  01e9ec8  lfs 4, 116(30)
  01e9ecc  fmuls 2, 2, 3
  01e9ed0  fmr 3, 2
  01e9ed4  bl 0x109c30
  01e9ed8  nop
  01e9edc  lwz 3, 124(30)
  01e9ee0  lfs 1, 160(30)
  01e9ee4  lfs 4, 128(30)
  01e9ee8  lfs 3, 132(30)
  01e9eec  lfs 2, 136(30)
  01e9ef0  slwi 4, 3, 4
  01e9ef4  addc 4, 28, 4
  01e9ef8  clrldi 4, 4, 32
  01e9efc  fcmpu 0, 29, 1
  01e9f00  lfs 5, 20(4)
  01e9f04  lfs 6, 16(4)
  01e9f08  fsubs 5, 5, 3
  01e9f0c  fsubs 6, 6, 4
  01e9f10  lfs 7, 24(4)
  01e9f14  fsubs 7, 7, 2
  01e9f18  fmuls 8, 5, 5
  01e9f1c  cror 6, 1, 2
  01e9f20  fmadds 8, 6, 6, 8
  01e9f24  fmadds 8, 7, 7, 8
  01e9f28  fsqrts 8, 8
  01e9f2c  fdivs 1, 1, 8
  01e9f30  fsub 9, 30, 8
  01e9f34  fsub 10, 30, 8
  01e9f38  fsub 11, 30, 8
  01e9f3c  fsub 12, 8, 30
  01e9f40  fsub 13, 8, 30
  01e9f44  fsub 8, 8, 30
  01e9f48  fmuls 7, 1, 7
  01e9f4c  fmuls 5, 1, 5
  01e9f50  fmuls 1, 1, 6
  01e9f54  fsel 6, 9, 30, 7
  01e9f58  fsel 9, 10, 30, 5
  01e9f5c  fsel 10, 11, 30, 1
  01e9f60  fsel 6, 12, 6, 7
  01e9f64  fsel 5, 13, 9, 5
  01e9f68  fsel 1, 8, 10, 1
  01e9f6c  fadds 2, 2, 6
  01e9f70  fadds 3, 3, 5
  01e9f74  fadds 1, 4, 1
  01e9f78  stfs 2, 136(30)
  01e9f7c  stfs 3, 132(30)
  01e9f80  stfs 1, 128(30)
  01e9f84  bt 6, 0x1e9fe0
  01e9f88  lwz 4, 164(30)
  01e9f8c  cmpwi 4, 0
  01e9f90  bf 1, 0x1e9fc0
  01e9f94  lwz 5, 0(28)
  01e9f98  cmpwi 1, 29, 0
  01e9f9c  addic 5, 5, -1
  01e9fa0  cmpw 3, 5
  01e9fa4  bf 2, 0x1e9fc0
  01e9fa8  bt 6, 0x1e9fb4
  01e9fac  li 3, 0
  01e9fb0  b 0x1e9fd8
  01e9fb4  li 4, -1
  01e9fb8  stw 4, 164(30)
  01e9fbc  b 0x1e9fd8
  01e9fc0  cmpwi 1, 3, 0
  01e9fc4  cmpwi 4, 0
  01e9fc8  crnand 2, 0, 6
  01e9fcc  bt 2, 0x1e9fd8
  01e9fd0  li 4, 1
  01e9fd4  stw 4, 164(30)
  01e9fd8  addc 3, 3, 4
  01e9fdc  stw 3, 124(30)
  01e9fe0  lis 3, 31
  01e9fe4  lfs 1, 144(30)
  01e9fe8  addi 3, 3, -25680
  01e9fec  lis 4, 118
  01e9ff0  lis 29, 114
  01e9ff4  lfs 30, 8(3)
  01e9ff8  lfs 29, 12(3)
  01e9ffc  fsubs 2, 30, 1
  01ea000  fsubs 3, 29, 1
  01ea004  lfs 28, 16(3)
  01ea008  lfs 27, 20(3)
  01ea00c  lfs 26, 24(3)
  01ea010  lfs 25, 32(3)
  01ea014  lfs 24, 28(3)
  01ea018  lis 3, 118
  01ea01c  fsub 4, 1, 2
  01ea020  fsel 2, 4, 2, 1
  01ea024  fsub 5, 3, 2
  01ea028  fsel 3, 5, 3, 2
  01ea02c  lfs 5, 23356(4)
  01ea030  lfs 23, 23368(3)
  01ea034  fmuls 2, 5, 25
  01ea038  lfs 6, -3052(29)
  01ea03c  fmuls 4, 3, 3
  01ea040  fmuls 2, 2, 6
  01ea044  fmuls 5, 4, 3
  01ea048  fmuls 6, 4, 5
  01ea04c  fmadds 3, 5, 28, 3
  01ea050  fmuls 5, 4, 6
  01ea054  fmadds 3, 6, 27, 3
  01ea058  fmuls 4, 4, 5
  01ea05c  fmadds 3, 5, 26, 3
  01ea060  fmadds 22, 4, 24, 3
  01ea064  bl 0x502578
  01ea068  nop
  01ea06c  lfs 3, 148(30)
  01ea070  lis 3, 118
  01ea074  fsubs 2, 30, 3
  01ea078  fsubs 4, 29, 3
  01ea07c  lfs 6, -3052(29)
  01ea080  lfs 7, 23360(3)
  01ea084  lis 3, 118
  01ea088  fsub 5, 3, 2
  01ea08c  lfs 21, 23372(3)
  01ea090  stfs 1, 144(30)
  01ea094  fmr 1, 3
  01ea098  fsel 2, 5, 2, 3
  01ea09c  fsub 5, 4, 2
  01ea0a0  fsel 4, 5, 4, 2
  01ea0a4  fmuls 2, 7, 25
  01ea0a8  fmuls 5, 4, 4
  01ea0ac  fmuls 2, 2, 6
  01ea0b0  fmuls 3, 5, 4
  01ea0b4  fmuls 6, 5, 3
  01ea0b8  fmadds 3, 3, 28, 4
  01ea0bc  fmuls 4, 5, 6
  01ea0c0  fmadds 3, 6, 27, 3
  01ea0c4  fmuls 5, 5, 4
  01ea0c8  fmadds 3, 4, 26, 3
  01ea0cc  fmadds 20, 5, 24, 3
  01ea0d0  bl 0x502578
  01ea0d4  nop
  01ea0d8  lfs 2, 152(30)
  01ea0dc  fsubs 3, 30, 2
  01ea0e0  fsubs 4, 29, 2
  01ea0e4  lfs 5, -3052(29)
  01ea0e8  fsub 6, 2, 3
  01ea0ec  fsel 3, 6, 3, 2
  01ea0f0  fsub 6, 4, 3
  01ea0f4  fsel 3, 6, 4, 3
  01ea0f8  fmuls 4, 3, 3
  01ea0fc  lis 3, 118
  01ea100  lis 4, 118
  01ea104  lfs 7, 23364(3)
  01ea108  lfs 29, 23376(4)
  01ea10c  fmuls 7, 7, 25
  01ea110  stfs 1, 148(30)
  01ea114  fmr 1, 2
  01ea118  fmuls 6, 4, 3
  01ea11c  fmuls 2, 7, 5
  01ea120  fmuls 8, 4, 6
  01ea124  fmadds 3, 6, 28, 3
  01ea128  fmuls 5, 4, 8
  01ea12c  fmadds 3, 8, 27, 3
  01ea130  fmuls 4, 4, 5
  01ea134  fmadds 3, 5, 26, 3
  01ea138  fmadds 28, 4, 24, 3
  01ea13c  bl 0x502578
  01ea140  nop
  01ea144  lfs 2, 128(30)
  01ea148  stfs 1, 152(30)
  01ea14c  fmadds 2, 22, 23, 2
  01ea150  fmadds 1, 28, 29, 31
  01ea154  addic 3, 31, 16
  01ea158  li 5, 0
  01ea15c  ori 6, 31, 0
  01ea160  li 7, 0
  01ea164  stfs 2, 16(31)
  01ea168  lfs 2, 132(30)
  01ea16c  fmadds 2, 20, 21, 2
  01ea170  stfs 2, 20(31)
  01ea174  lfs 2, 136(30)
  01ea178  addic 30, 30, 128
  01ea17c  stfs 30, 28(31)
  01ea180  fadds 1, 1, 2
  01ea184  ori 4, 30, 0
  01ea188  stfs 1, 24(31)
  01ea18c  bl 0x57820
  01ea190  nop
  01ea194  cmpwi 3, 0
  01ea198  bt 2, 0x1ea1f0
  01ea19c  lis 3, 161
  01ea1a0  lis 4, 151
  01ea1a4  addic 3, 3, 2368
  01ea1a8  addic 4, 4, -25376
  01ea1ac  lwz 3, 24(3)
  01ea1b0  lwz 4, 8320(4)
  01ea1b4  cmpwi 1, 3, 0
  01ea1b8  cmpw 3, 4
  01ea1bc  bf 2, 0x1ea1cc
  01ea1c0  li 3, 2
  01ea1c4  stb 3, 32(31)
  01ea1c8  b 0x1ea26c
  01ea1cc  bt 6, 0x1ea26c
  01ea1d0  lhz 3, 166(3)
  01ea1d4  cmpwi 3, 203
  01ea1d8  cmpwi 1, 3, 270
  01ea1dc  bt 2, 0x1ea1e4
  01ea1e0  bf 6, 0x1ea26c
  01ea1e4  li 3, 2
  01ea1e8  stb 3, 32(31)
  01ea1ec  b 0x1ea26c
  01ea1f0  lis 3, 31
  01ea1f4  li 5, 0
  01ea1f8  addi 4, 3, -25680
  01ea1fc  ori 3, 30, 0
  01ea200  li 6, 0
  01ea204  li 7, 0
  01ea208  lfs 1, 36(4)
  01ea20c  bl 0x5e598
  01ea210  nop
  01ea214  cmpwi 3, 0
  01ea218  bt 2, 0x1ea26c
  01ea21c  lis 3, 161
  01ea220  lis 4, 151
  01ea224  addic 3, 3, 2368
  01ea228  addic 4, 4, -25376
  01ea22c  lwz 3, 24(3)
  01ea230  lwz 4, 8320(4)
  01ea234  cmpwi 1, 3, 0
  01ea238  cmpw 3, 4
  01ea23c  bf 2, 0x1ea24c
  01ea240  li 3, 2
  01ea244  stb 3, 32(31)
  01ea248  b 0x1ea26c
  01ea24c  bt 6, 0x1ea26c
  01ea250  lhz 3, 166(3)
  01ea254  cmpwi 3, 203
  01ea258  cmpwi 1, 3, 270
  01ea25c  bt 2, 0x1ea264
  01ea260  bf 6, 0x1ea26c
  01ea264  li 3, 2
  01ea268  stb 3, 32(31)
  01ea26c  lis 3, 113
  01ea270  ori 4, 31, 0
  01ea274  addic 3, 3, -28392
  01ea278  bl 0x6d720
  01ea27c  nop
  01ea280  b 0x1ea318
  01ea284  lwz 30, 120(30)
  01ea288  cmpwi 30, -1
  01ea28c  bt 2, 0x1ea29c
  01ea290  extsw 3, 30
  01ea294  bl 0x1e99b4
  01ea298  nop
  01ea29c  li 3, 3
  01ea2a0  stb 3, 32(31)
  01ea2a4  b 0x1ea318
  01ea2a8  lis 3, 31
  01ea2ac  li 7, -1
  01ea2b0  addi 3, 3, -25680
  01ea2b4  li 6, 1
  01ea2b8  li 11, 0
  01ea2bc  addic 4, 30, 64
  01ea2c0  addic 5, 31, 16
  01ea2c4  lfs 1, 0(3)
  01ea2c8  lfs 4, 36(3)
  01ea2cc  li 8, 5
  01ea2d0  lfs 3, 40(3)
  01ea2d4  li 9, 2
  01ea2d8  lfs 5, 44(3)
  01ea2dc  li 10, 4
  01ea2e0  lfs 7, 48(3)
  01ea2e4  fmr 2, 1
  01ea2e8  std 7, 144(1)
  01ea2ec  ori 3, 31, 0
  01ea2f0  std 6, 160(1)
  01ea2f4  fmr 6, 4
  01ea2f8  std 6, 168(1)
  01ea2fc  std 7, 176(1)
  01ea300  std 11, 184(1)
  01ea304  bl 0x10e030
  01ea308  nop
  01ea30c  ori 3, 31, 0
  01ea310  bl 0xefb38
  01ea314  nop
  01ea318  ld 0, 352(1)
  01ea31c  mtlr 0
  01ea320  lfd 20, 240(1)
  01ea324  lfd 21, 248(1)
  01ea328  lfd 22, 256(1)
  01ea32c  lfd 23, 264(1)
  01ea330  lfd 24, 272(1)
  01ea334  lfd 25, 280(1)
  01ea338  lfd 26, 288(1)
  01ea33c  lfd 27, 296(1)
  01ea340  lfd 28, 304(1)
  01ea344  lfd 29, 312(1)
  01ea348  lfd 30, 320(1)
  01ea34c  lfd 31, 328(1)
  01ea350  ld 28, 208(1)
  01ea354  ld 29, 216(1)
  01ea358  ld 30, 224(1)
  01ea35c  ld 31, 232(1)
  01ea360  addi 1, 1, 336
  01ea364  blr
